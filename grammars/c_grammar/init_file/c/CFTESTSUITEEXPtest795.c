
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

uint16_t x160 = 6U;
int8_t x230 = INT8_MIN;
uint8_t x250 = 0U;
uint32_t x252 = 13U;
int8_t x430 = 15;
volatile uint32_t t4 = 85U;
uint32_t x818 = 15U;
volatile uint32_t x819 = 979231U;
static int16_t x821 = INT16_MAX;
int64_t x864 = -1LL;
uint32_t x933 = 14851878U;
volatile int8_t x1092 = -1;
uint16_t x1289 = UINT16_MAX;
uint8_t x1291 = 2U;
static int32_t t10 = 121194004;
int8_t x1309 = INT8_MAX;
int16_t x1310 = -1;
int16_t x1400 = -1;
int32_t x1497 = INT32_MAX;
volatile int32_t t14 = 3521;
uint16_t x1517 = UINT16_MAX;
int32_t x1519 = -1;
int32_t x1590 = -1;
volatile int32_t t16 = 6190;
static int32_t x1801 = 453;
static volatile int64_t x2037 = 1572021905735LL;
int64_t t21 = -1273048402LL;
static int8_t x2138 = -21;
uint64_t t22 = 4LLU;
int16_t x2170 = INT16_MIN;
volatile int32_t x2171 = -1;
int32_t x2197 = INT32_MAX;
int32_t t25 = 15933;
uint32_t x2282 = 2U;
uint32_t x2284 = UINT32_MAX;
volatile int32_t t28 = 34432;
int64_t x2446 = INT64_MAX;
int32_t x2465 = 154439370;
volatile int32_t t31 = -29284751;
uint8_t x2743 = UINT8_MAX;
uint64_t x2942 = 70713758689940691LLU;
uint32_t x2943 = 1U;
int64_t t36 = 1LL;
uint16_t x2997 = 3935U;
static uint8_t x3028 = 1U;
uint8_t x3110 = 13U;
uint16_t x3154 = 7228U;
int32_t t42 = -96470966;
int8_t x3347 = -1;
volatile int32_t x3491 = 665924;
int32_t x3605 = 2460;
int32_t x3606 = 12;
volatile uint64_t x3608 = 1LLU;
volatile int32_t t45 = 4;
static int8_t x3649 = 1;
uint32_t x3704 = 3U;
volatile int32_t t47 = 64145;
static int32_t t52 = 107711037;
volatile int32_t t54 = 106251438;
int32_t x4057 = INT32_MAX;
int8_t x4171 = -1;
volatile uint8_t x4193 = 6U;
static int64_t x4206 = -273209793848555LL;
static int64_t x4207 = -1LL;
static volatile uint16_t x4208 = 19U;
static volatile int32_t t60 = -3847;
int32_t x4235 = 5;
volatile int32_t t61 = -554795436;
uint32_t x4798 = 3U;
int8_t x4799 = 1;
uint64_t x4945 = UINT64_MAX;
int64_t x5062 = -1LL;
int8_t x5074 = -1;
int32_t t68 = -569037763;
int8_t x5158 = -1;
static uint64_t t71 = 338428505176LLU;
static int32_t x5222 = -1;
uint8_t x5224 = 19U;
volatile uint32_t t72 = 237816U;
int32_t x5519 = 13;
uint64_t x5537 = 10243459350LLU;
int32_t x5543 = INT32_MAX;
static uint16_t x5750 = 0U;
uint16_t x5770 = 2907U;
uint32_t x5771 = 31U;
int64_t x5772 = -1LL;
volatile uint64_t t83 = 2967LLU;
static int8_t x6023 = INT8_MIN;
int64_t x6029 = INT64_MAX;
volatile int8_t x6030 = INT8_MAX;
int64_t t87 = 131259908202175LL;
volatile uint16_t x6056 = 11U;
int64_t x6119 = -1LL;
volatile int32_t t91 = -1484;
int16_t x6412 = 10;
uint32_t t92 = 151560655U;
int32_t x6507 = -1;
uint32_t x6555 = UINT32_MAX;
uint32_t t96 = 7U;
int32_t x6591 = -1;
int8_t x6761 = INT8_MAX;
volatile uint64_t t99 = 9739714504LLU;
int32_t x6842 = -1;
uint8_t x6897 = UINT8_MAX;
int8_t x7079 = 40;
volatile int16_t x7138 = -1381;
uint8_t x7139 = 4U;
int32_t t107 = -24279127;
static volatile int32_t t109 = 114090967;
uint8_t x7463 = 13U;
static uint32_t x7464 = 9U;
int16_t x7904 = 0;
uint64_t x8004 = UINT64_MAX;
static volatile uint32_t t114 = 2U;
uint64_t x8033 = UINT64_MAX;
static int16_t x8034 = 2;
static uint8_t x8273 = 2U;
volatile int16_t x8274 = -1;
uint16_t x8275 = UINT16_MAX;
int16_t x8406 = INT16_MAX;
int8_t x8408 = -1;
volatile uint8_t x8449 = 19U;
volatile uint16_t x8578 = 780U;
uint8_t x8687 = 1U;
int32_t t123 = -63889;
uint8_t x8845 = 121U;
static int32_t x8848 = -1;
uint8_t x9074 = 10U;
uint64_t x9417 = UINT64_MAX;
uint64_t x9653 = UINT64_MAX;
int16_t x9654 = INT16_MAX;
int8_t x9655 = 2;
uint64_t x9674 = UINT64_MAX;
volatile uint32_t x9675 = UINT32_MAX;
static int16_t x10109 = 1;
static int16_t x10112 = -1;
uint64_t x10132 = UINT64_MAX;
volatile uint8_t x10198 = 4U;
int32_t t136 = -101246437;
int16_t x10253 = 8869;
int16_t x10336 = -1;
uint64_t x10453 = 867966494452526348LLU;
static int32_t x10456 = -1;
volatile uint64_t t141 = 121LLU;
int32_t x10509 = INT32_MAX;
uint64_t x10558 = 1LLU;


void f0(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	static int16_t x158 = INT16_MIN;
	static int16_t x159 = -1;
	volatile uint32_t t0 = 2302288U;

    t0 = (x157>>((x158%x159)+x160));

    if (t0 != 67108863U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x229 = 1U;
	int8_t x231 = INT8_MIN;
	int8_t x232 = 30;
	int32_t t1 = 919;

    t1 = (x229>>((x230%x231)+x232));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x249 = 245;
	static uint32_t x251 = 5U;
	static volatile int32_t t2 = -725691625;

    t2 = (x249>>((x250%x251)+x252));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x431 = INT16_MAX;
	static volatile int16_t x432 = 0;
	uint64_t t3 = 618169744898364LLU;

    t3 = (x429>>((x430%x431)+x432));

    if (t3 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x625 = 6267U;
	uint32_t x626 = 1U;
	int64_t x627 = INT64_MAX;
	int16_t x628 = -1;

    t4 = (x625>>((x626%x627)+x628));

    if (t4 != 6267U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x817 = 60;
	uint32_t x820 = 0U;
	volatile int32_t t5 = 4;

    t5 = (x817>>((x818%x819)+x820));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x822 = 1U;
	static volatile int32_t x823 = 44255;
	int64_t x824 = -1LL;
	int32_t t6 = 363503437;

    t6 = (x821>>((x822%x823)+x824));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x861 = 3118033381664460456LLU;
	volatile uint32_t x862 = 1788283U;
	static uint64_t x863 = 4LLU;
	uint64_t t7 = 4322578612352LLU;

    t7 = (x861>>((x862%x863)+x864));

    if (t7 != 779508345416115114LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x934 = INT32_MIN;
	static int16_t x935 = INT16_MAX;
	uint16_t x936 = 5U;
	volatile uint32_t t8 = 473U;

    t8 = (x933>>((x934%x935)+x936));

    if (t8 != 1856484U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x1089 = UINT64_MAX;
	int16_t x1090 = INT16_MAX;
	int8_t x1091 = 35;
	static uint64_t t9 = 46409197609325LLU;

    t9 = (x1089>>((x1090%x1091)+x1092));

    if (t9 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x1290 = INT32_MAX;
	volatile int32_t x1292 = -1;

    t10 = (x1289>>((x1290%x1291)+x1292));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1311 = UINT64_MAX;
	int32_t x1312 = 1;
	int32_t t11 = 3374;

    t11 = (x1309>>((x1310%x1311)+x1312));

    if (t11 != 63) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1397 = 1600549965LLU;
	static uint32_t x1398 = 6U;
	int8_t x1399 = INT8_MIN;
	volatile uint64_t t12 = 30113LLU;

    t12 = (x1397>>((x1398%x1399)+x1400));

    if (t12 != 50017186LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1401 = 2032884609102402LL;
	static int16_t x1402 = -1;
	int64_t x1403 = -1LL;
	int16_t x1404 = 1;
	int64_t t13 = -682396LL;

    t13 = (x1401>>((x1402%x1403)+x1404));

    if (t13 != 1016442304551201LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x1498 = UINT8_MAX;
	int64_t x1499 = 34LL;
	int16_t x1500 = -1;

    t14 = (x1497>>((x1498%x1499)+x1500));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1518 = -1756093737721740LL;
	uint16_t x1520 = 1U;
	volatile int32_t t15 = 1025263675;

    t15 = (x1517>>((x1518%x1519)+x1520));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1589 = 6U;
	volatile int16_t x1591 = -1;
	static volatile uint16_t x1592 = 1U;

    t16 = (x1589>>((x1590%x1591)+x1592));

    if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x1593 = 47527508996LL;
	uint16_t x1594 = UINT16_MAX;
	volatile uint8_t x1595 = 62U;
	static volatile int8_t x1596 = -1;
	volatile int64_t t17 = 207733418118303963LL;

    t17 = (x1593>>((x1594%x1595)+x1596));

    if (t17 != 47527508996LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x1653 = INT32_MAX;
	int16_t x1654 = INT16_MIN;
	static int32_t x1655 = 1;
	uint16_t x1656 = 25U;
	int32_t t18 = -47897198;

    t18 = (x1653>>((x1654%x1655)+x1656));

    if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x1717 = INT32_MAX;
	int16_t x1718 = INT16_MIN;
	uint32_t x1719 = 254U;
	uint8_t x1720 = 3U;
	int32_t t19 = 125153;

    t19 = (x1717>>((x1718%x1719)+x1720));

    if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x1802 = -1LL;
	int64_t x1803 = -1LL;
	volatile uint8_t x1804 = 1U;
	volatile int32_t t20 = 0;

    t20 = (x1801>>((x1802%x1803)+x1804));

    if (t20 != 226) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x2038 = 5U;
	int8_t x2039 = INT8_MIN;
	static volatile int16_t x2040 = -1;

    t21 = (x2037>>((x2038%x2039)+x2040));

    if (t21 != 98251369108LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x2137 = 326766833420740LLU;
	volatile int64_t x2139 = -1LL;
	volatile int16_t x2140 = 0;

    t22 = (x2137>>((x2138%x2139)+x2140));

    if (t22 != 326766833420740LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2169 = 47U;
	uint8_t x2172 = 2U;
	int32_t t23 = -35;

    t23 = (x2169>>((x2170%x2171)+x2172));

    if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2198 = INT16_MAX;
	int8_t x2199 = 24;
	volatile uint64_t x2200 = UINT64_MAX;
	volatile int32_t t24 = 507878;

    t24 = (x2197>>((x2198%x2199)+x2200));

    if (t24 != 33554431) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2261 = UINT8_MAX;
	int16_t x2262 = 0;
	volatile int16_t x2263 = -1;
	uint16_t x2264 = 2U;

    t25 = (x2261>>((x2262%x2263)+x2264));

    if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2269 = INT64_MAX;
	static int32_t x2270 = 28;
	static volatile uint16_t x2271 = 450U;
	int8_t x2272 = -1;
	int64_t t26 = 192176206587012328LL;

    t26 = (x2269>>((x2270%x2271)+x2272));

    if (t26 != 68719476735LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2281 = INT32_MAX;
	volatile int8_t x2283 = INT8_MIN;
	int32_t t27 = 0;

    t27 = (x2281>>((x2282%x2283)+x2284));

    if (t27 != 1073741823) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x2405 = 7221519;
	volatile int64_t x2406 = INT64_MIN;
	int32_t x2407 = INT32_MIN;
	volatile uint8_t x2408 = 14U;

    t28 = (x2405>>((x2406%x2407)+x2408));

    if (t28 != 440) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2437 = UINT16_MAX;
	volatile int32_t x2438 = 0;
	int32_t x2439 = INT32_MIN;
	uint64_t x2440 = 4LLU;
	volatile int32_t t29 = 6;

    t29 = (x2437>>((x2438%x2439)+x2440));

    if (t29 != 4095) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2445 = 11872729;
	int16_t x2447 = 902;
	uint32_t x2448 = 2U;
	int32_t t30 = -13250804;

    t30 = (x2445>>((x2446%x2447)+x2448));

    if (t30 != 23188) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x2466 = UINT32_MAX;
	int32_t x2467 = INT32_MAX;
	uint64_t x2468 = UINT64_MAX;

    t31 = (x2465>>((x2466%x2467)+x2468));

    if (t31 != 154439370) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2589 = INT32_MAX;
	int64_t x2590 = -1LL;
	int64_t x2591 = INT64_MIN;
	uint8_t x2592 = 1U;
	static volatile int32_t t32 = INT32_MAX;

    t32 = (x2589>>((x2590%x2591)+x2592));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x2617 = INT8_MAX;
	uint32_t x2618 = 7U;
	static int8_t x2619 = INT8_MAX;
	int32_t x2620 = 0;
	int32_t t33 = 189641279;

    t33 = (x2617>>((x2618%x2619)+x2620));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x2637 = UINT16_MAX;
	int32_t x2638 = -56331;
	volatile int8_t x2639 = INT8_MIN;
	volatile uint32_t x2640 = 30U;
	static int32_t t34 = 417;

    t34 = (x2637>>((x2638%x2639)+x2640));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2741 = INT8_MAX;
	static volatile int8_t x2742 = 7;
	volatile int16_t x2744 = 8;
	static volatile int32_t t35 = -52178946;

    t35 = (x2741>>((x2742%x2743)+x2744));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2941 = INT64_MAX;
	uint8_t x2944 = 14U;

    t36 = (x2941>>((x2942%x2943)+x2944));

    if (t36 != 562949953421311LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2961 = UINT16_MAX;
	uint8_t x2962 = 14U;
	int8_t x2963 = INT8_MIN;
	static int32_t x2964 = -1;
	volatile int32_t t37 = 22;

    t37 = (x2961>>((x2962%x2963)+x2964));

    if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x2998 = 14U;
	static int8_t x2999 = -1;
	static uint64_t x3000 = 2LLU;
	static int32_t t38 = 193719406;

    t38 = (x2997>>((x2998%x2999)+x3000));

    if (t38 != 983) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x3025 = 4448U;
	uint32_t x3026 = 6U;
	int8_t x3027 = -1;
	static uint32_t t39 = 15981U;

    t39 = (x3025>>((x3026%x3027)+x3028));

    if (t39 != 34U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x3109 = UINT32_MAX;
	int32_t x3111 = INT32_MAX;
	uint64_t x3112 = UINT64_MAX;
	uint32_t t40 = 321U;

    t40 = (x3109>>((x3110%x3111)+x3112));

    if (t40 != 1048575U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x3117 = 11111LLU;
	volatile uint32_t x3118 = UINT32_MAX;
	uint8_t x3119 = UINT8_MAX;
	uint16_t x3120 = 5U;
	volatile uint64_t t41 = 3802032LLU;

    t41 = (x3117>>((x3118%x3119)+x3120));

    if (t41 != 347LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x3153 = UINT16_MAX;
	uint8_t x3155 = 60U;
	static uint32_t x3156 = UINT32_MAX;

    t42 = (x3153>>((x3154%x3155)+x3156));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x3345 = INT8_MAX;
	int64_t x3346 = INT64_MAX;
	static volatile uint16_t x3348 = 1U;
	volatile int32_t t43 = 229276;

    t43 = (x3345>>((x3346%x3347)+x3348));

    if (t43 != 63) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3489 = INT8_MAX;
	static uint8_t x3490 = 2U;
	static int64_t x3492 = -1LL;
	volatile int32_t t44 = 0;

    t44 = (x3489>>((x3490%x3491)+x3492));

    if (t44 != 63) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x3607 = INT32_MIN;

    t45 = (x3605>>((x3606%x3607)+x3608));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3650 = -1LL;
	int16_t x3651 = -1;
	uint32_t x3652 = 1U;
	static volatile int32_t t46 = 2415025;

    t46 = (x3649>>((x3650%x3651)+x3652));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x3701 = UINT16_MAX;
	int16_t x3702 = -1;
	int16_t x3703 = INT16_MAX;

    t47 = (x3701>>((x3702%x3703)+x3704));

    if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x3757 = 2812U;
	volatile int64_t x3758 = -1LL;
	int8_t x3759 = INT8_MIN;
	uint16_t x3760 = 10U;
	volatile uint32_t t48 = 1534599275U;

    t48 = (x3757>>((x3758%x3759)+x3760));

    if (t48 != 5U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3761 = 74LLU;
	volatile uint64_t x3762 = 33337804LLU;
	static uint16_t x3763 = 1U;
	static uint16_t x3764 = 14U;
	uint64_t t49 = 110451069529LLU;

    t49 = (x3761>>((x3762%x3763)+x3764));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3797 = 2075288460U;
	uint16_t x3798 = 5U;
	int8_t x3799 = -1;
	static uint16_t x3800 = 1U;
	uint32_t t50 = 1912147965U;

    t50 = (x3797>>((x3798%x3799)+x3800));

    if (t50 != 1037644230U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x3821 = 14;
	int64_t x3822 = -1LL;
	volatile int64_t x3823 = INT64_MAX;
	int8_t x3824 = 1;
	int32_t t51 = 4526545;

    t51 = (x3821>>((x3822%x3823)+x3824));

    if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x3829 = INT16_MAX;
	uint16_t x3830 = 1U;
	static uint8_t x3831 = 6U;
	uint8_t x3832 = 1U;

    t52 = (x3829>>((x3830%x3831)+x3832));

    if (t52 != 8191) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x3833 = 14;
	static uint16_t x3834 = 18U;
	int16_t x3835 = INT16_MIN;
	uint8_t x3836 = 2U;
	int32_t t53 = -1147;

    t53 = (x3833>>((x3834%x3835)+x3836));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x3937 = 1;
	uint64_t x3938 = UINT64_MAX;
	volatile uint16_t x3939 = UINT16_MAX;
	static volatile int8_t x3940 = 2;

    t54 = (x3937>>((x3938%x3939)+x3940));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x3993 = 1983214LLU;
	int64_t x3994 = INT64_MIN;
	int32_t x3995 = INT32_MAX;
	int8_t x3996 = 32;
	uint64_t t55 = 849583139931407LLU;

    t55 = (x3993>>((x3994%x3995)+x3996));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x4001 = UINT8_MAX;
	uint64_t x4002 = UINT64_MAX;
	static volatile uint32_t x4003 = 10U;
	static uint64_t x4004 = UINT64_MAX;
	int32_t t56 = 27;

    t56 = (x4001>>((x4002%x4003)+x4004));

    if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x4058 = INT16_MAX;
	int8_t x4059 = INT8_MAX;
	uint8_t x4060 = 2U;
	volatile int32_t t57 = -344199;

    t57 = (x4057>>((x4058%x4059)+x4060));

    if (t57 != 268435455) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x4169 = 29U;
	int32_t x4170 = INT32_MAX;
	uint32_t x4172 = 3U;
	volatile int32_t t58 = -3076;

    t58 = (x4169>>((x4170%x4171)+x4172));

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4194 = -1;
	int16_t x4195 = INT16_MIN;
	uint16_t x4196 = 5U;
	int32_t t59 = 123;

    t59 = (x4193>>((x4194%x4195)+x4196));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x4205 = 90;

    t60 = (x4205>>((x4206%x4207)+x4208));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x4233 = 2031U;
	volatile int32_t x4234 = -402;
	uint16_t x4236 = 27U;

    t61 = (x4233>>((x4234%x4235)+x4236));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x4581 = 27834341LL;
	uint16_t x4582 = 39U;
	int16_t x4583 = -1;
	uint32_t x4584 = 0U;
	volatile int64_t t62 = 0LL;

    t62 = (x4581>>((x4582%x4583)+x4584));

    if (t62 != 27834341LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x4585 = 111U;
	int16_t x4586 = INT16_MIN;
	uint8_t x4587 = 3U;
	uint8_t x4588 = 12U;
	static volatile int32_t t63 = 237060325;

    t63 = (x4585>>((x4586%x4587)+x4588));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x4797 = 478854196669LLU;
	int16_t x4800 = 1;
	uint64_t t64 = 2649568082LLU;

    t64 = (x4797>>((x4798%x4799)+x4800));

    if (t64 != 239427098334LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x4946 = INT32_MIN;
	int16_t x4947 = INT16_MIN;
	static volatile uint8_t x4948 = 0U;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = (x4945>>((x4946%x4947)+x4948));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x5037 = UINT32_MAX;
	int16_t x5038 = INT16_MIN;
	uint32_t x5039 = 43U;
	int8_t x5040 = -1;
	static volatile uint32_t t66 = 60U;

    t66 = (x5037>>((x5038%x5039)+x5040));

    if (t66 != 524287U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5061 = 10579;
	int64_t x5063 = -1LL;
	static int8_t x5064 = 0;
	int32_t t67 = -7;

    t67 = (x5061>>((x5062%x5063)+x5064));

    if (t67 != 10579) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x5073 = 36;
	int32_t x5075 = -42863;
	int64_t x5076 = 1LL;

    t68 = (x5073>>((x5074%x5075)+x5076));

    if (t68 != 36) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x5157 = 0U;
	static uint32_t x5159 = 3U;
	uint16_t x5160 = 3U;
	int32_t t69 = 5937;

    t69 = (x5157>>((x5158%x5159)+x5160));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x5173 = 248844764LL;
	volatile uint64_t x5174 = 45762LLU;
	static uint64_t x5175 = 12LLU;
	volatile int16_t x5176 = -1;
	static volatile int64_t t70 = 295577080870838LL;

    t70 = (x5173>>((x5174%x5175)+x5176));

    if (t70 != 7776398LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x5177 = UINT64_MAX;
	uint8_t x5178 = 3U;
	uint32_t x5179 = 5490U;
	int32_t x5180 = -1;

    t71 = (x5177>>((x5178%x5179)+x5180));

    if (t71 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x5221 = UINT32_MAX;
	int8_t x5223 = INT8_MIN;

    t72 = (x5221>>((x5222%x5223)+x5224));

    if (t72 != 16383U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x5229 = 0U;
	int64_t x5230 = INT64_MIN;
	int8_t x5231 = -1;
	uint8_t x5232 = 6U;
	volatile uint32_t t73 = 6957656U;

    t73 = (x5229>>((x5230%x5231)+x5232));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x5345 = UINT64_MAX;
	uint16_t x5346 = 1U;
	int16_t x5347 = INT16_MIN;
	int64_t x5348 = -1LL;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x5345>>((x5346%x5347)+x5348));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5369 = INT64_MAX;
	int16_t x5370 = -1;
	uint32_t x5371 = UINT32_MAX;
	uint32_t x5372 = 2U;
	int64_t t75 = -112467013015062133LL;

    t75 = (x5369>>((x5370%x5371)+x5372));

    if (t75 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x5517 = 12;
	volatile uint32_t x5518 = 458U;
	int16_t x5520 = -1;
	int32_t t76 = -37239;

    t76 = (x5517>>((x5518%x5519)+x5520));

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x5538 = -1;
	static int32_t x5539 = -1;
	volatile uint8_t x5540 = 0U;
	uint64_t t77 = 457370633LLU;

    t77 = (x5537>>((x5538%x5539)+x5540));

    if (t77 != 10243459350LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x5541 = 1;
	static uint16_t x5542 = 6U;
	uint8_t x5544 = 19U;
	static volatile int32_t t78 = 5;

    t78 = (x5541>>((x5542%x5543)+x5544));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x5633 = 417059358237501707LLU;
	static int8_t x5634 = -1;
	uint16_t x5635 = UINT16_MAX;
	int8_t x5636 = 11;
	volatile uint64_t t79 = 102282246032LLU;

    t79 = (x5633>>((x5634%x5635)+x5636));

    if (t79 != 407284529528810LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x5697 = 999U;
	int64_t x5698 = -1LL;
	volatile int32_t x5699 = INT32_MIN;
	uint8_t x5700 = 25U;
	volatile uint32_t t80 = 10605577U;

    t80 = (x5697>>((x5698%x5699)+x5700));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x5749 = 1U;
	static int64_t x5751 = 5899744LL;
	uint32_t x5752 = 17U;
	int32_t t81 = 490886;

    t81 = (x5749>>((x5750%x5751)+x5752));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x5769 = 29986U;
	static int32_t t82 = 14;

    t82 = (x5769>>((x5770%x5771)+x5772));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x5833 = UINT64_MAX;
	int64_t x5834 = INT64_MIN;
	int32_t x5835 = INT32_MAX;
	uint8_t x5836 = 9U;

    t83 = (x5833>>((x5834%x5835)+x5836));

    if (t83 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x5849 = 831LL;
	int64_t x5850 = INT64_MIN;
	int64_t x5851 = -1LL;
	uint16_t x5852 = 32U;
	volatile int64_t t84 = -365LL;

    t84 = (x5849>>((x5850%x5851)+x5852));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x5969 = 47236421228368LL;
	volatile int8_t x5970 = INT8_MAX;
	int8_t x5971 = -1;
	int16_t x5972 = 17;
	int64_t t85 = -96LL;

    t85 = (x5969>>((x5970%x5971)+x5972));

    if (t85 != 360385293LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x6021 = INT16_MAX;
	volatile int16_t x6022 = 6;
	int8_t x6024 = -1;
	static volatile int32_t t86 = -19906697;

    t86 = (x6021>>((x6022%x6023)+x6024));

    if (t86 != 1023) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x6031 = -1LL;
	static uint16_t x6032 = 12U;

    t87 = (x6029>>((x6030%x6031)+x6032));

    if (t87 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x6053 = 3;
	int64_t x6054 = INT64_MAX;
	int8_t x6055 = INT8_MAX;
	int32_t t88 = 213066581;

    t88 = (x6053>>((x6054%x6055)+x6056));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x6061 = 30013628706290374LL;
	int32_t x6062 = 256405184;
	static int8_t x6063 = -6;
	static uint8_t x6064 = 0U;
	volatile int64_t t89 = 4183263LL;

    t89 = (x6061>>((x6062%x6063)+x6064));

    if (t89 != 7503407176572593LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x6105 = UINT64_MAX;
	static uint32_t x6106 = 315554551U;
	int8_t x6107 = INT8_MAX;
	volatile int64_t x6108 = -1LL;
	static uint64_t t90 = 322461LLU;

    t90 = (x6105>>((x6106%x6107)+x6108));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x6117 = 10U;
	int64_t x6118 = INT64_MAX;
	volatile int8_t x6120 = 0;

    t91 = (x6117>>((x6118%x6119)+x6120));

    if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x6409 = 300584U;
	volatile int16_t x6410 = INT16_MAX;
	static int16_t x6411 = INT16_MAX;

    t92 = (x6409>>((x6410%x6411)+x6412));

    if (t92 != 293U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x6453 = 521422189;
	uint8_t x6454 = 28U;
	volatile int8_t x6455 = INT8_MIN;
	static int8_t x6456 = 1;
	volatile int32_t t93 = 293849;

    t93 = (x6453>>((x6454%x6455)+x6456));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x6505 = 120898393095858LL;
	int8_t x6506 = 1;
	uint32_t x6508 = 1U;
	volatile int64_t t94 = -1331422277808LL;

    t94 = (x6505>>((x6506%x6507)+x6508));

    if (t94 != 60449196547929LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x6537 = 3;
	uint16_t x6538 = UINT16_MAX;
	int8_t x6539 = INT8_MAX;
	uint8_t x6540 = 1U;
	volatile int32_t t95 = -262947;

    t95 = (x6537>>((x6538%x6539)+x6540));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x6553 = 89118U;
	int16_t x6554 = 1;
	static volatile int8_t x6556 = -1;

    t96 = (x6553>>((x6554%x6555)+x6556));

    if (t96 != 89118U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x6589 = 15741LL;
	static volatile int8_t x6590 = 33;
	int16_t x6592 = 0;
	static volatile int64_t t97 = 1994108833582LL;

    t97 = (x6589>>((x6590%x6591)+x6592));

    if (t97 != 15741LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x6762 = UINT16_MAX;
	uint16_t x6763 = 16U;
	int64_t x6764 = -1LL;
	int32_t t98 = -8429673;

    t98 = (x6761>>((x6762%x6763)+x6764));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x6817 = UINT64_MAX;
	int8_t x6818 = INT8_MIN;
	static int16_t x6819 = -1;
	static uint8_t x6820 = 3U;

    t99 = (x6817>>((x6818%x6819)+x6820));

    if (t99 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x6841 = 5997;
	uint8_t x6843 = 7U;
	int8_t x6844 = 4;
	volatile int32_t t100 = 185549;

    t100 = (x6841>>((x6842%x6843)+x6844));

    if (t100 != 749) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x6898 = INT64_MAX;
	volatile int8_t x6899 = -61;
	volatile int16_t x6900 = -2;
	int32_t t101 = 5;

    t101 = (x6897>>((x6898%x6899)+x6900));

    if (t101 != 7) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x6901 = 239858781;
	uint16_t x6902 = UINT16_MAX;
	static uint32_t x6903 = 20U;
	int8_t x6904 = 5;
	int32_t t102 = 263945513;

    t102 = (x6901>>((x6902%x6903)+x6904));

    if (t102 != 228) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x6905 = 3LLU;
	static int8_t x6906 = INT8_MIN;
	int8_t x6907 = INT8_MIN;
	uint8_t x6908 = 5U;
	uint64_t t103 = 2447585876354839LLU;

    t103 = (x6905>>((x6906%x6907)+x6908));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x6921 = 58U;
	uint16_t x6922 = 16U;
	static volatile int8_t x6923 = INT8_MAX;
	int16_t x6924 = -7;
	int32_t t104 = -1;

    t104 = (x6921>>((x6922%x6923)+x6924));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x7077 = 461639;
	int8_t x7078 = 1;
	static uint32_t x7080 = UINT32_MAX;
	int32_t t105 = -48;

    t105 = (x7077>>((x7078%x7079)+x7080));

    if (t105 != 461639) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x7137 = UINT8_MAX;
	uint8_t x7140 = 31U;
	volatile int32_t t106 = 2;

    t106 = (x7137>>((x7138%x7139)+x7140));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x7229 = 83U;
	uint64_t x7230 = 1131225922970LLU;
	volatile uint8_t x7231 = 14U;
	uint64_t x7232 = UINT64_MAX;

    t107 = (x7229>>((x7230%x7231)+x7232));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x7377 = 28942959U;
	uint32_t x7378 = 7637139U;
	int8_t x7379 = 1;
	static uint16_t x7380 = 2U;
	uint32_t t108 = 12U;

    t108 = (x7377>>((x7378%x7379)+x7380));

    if (t108 != 7235739U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x7429 = 3U;
	int8_t x7430 = INT8_MAX;
	int8_t x7431 = INT8_MAX;
	static volatile uint8_t x7432 = 24U;

    t109 = (x7429>>((x7430%x7431)+x7432));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x7453 = INT16_MAX;
	int8_t x7454 = 14;
	int16_t x7455 = INT16_MAX;
	uint64_t x7456 = UINT64_MAX;
	static int32_t t110 = -260595233;

    t110 = (x7453>>((x7454%x7455)+x7456));

    if (t110 != 3) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x7461 = 8603;
	int64_t x7462 = INT64_MAX;
	volatile int32_t t111 = -1;

    t111 = (x7461>>((x7462%x7463)+x7464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x7641 = 8U;
	static int64_t x7642 = INT64_MIN;
	static volatile int64_t x7643 = INT64_MIN;
	int8_t x7644 = 1;
	int32_t t112 = 24;

    t112 = (x7641>>((x7642%x7643)+x7644));

    if (t112 != 4) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x7901 = 42;
	uint16_t x7902 = 2U;
	int32_t x7903 = INT32_MIN;
	int32_t t113 = -3976709;

    t113 = (x7901>>((x7902%x7903)+x7904));

    if (t113 != 10) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x8001 = 7938U;
	volatile uint8_t x8002 = 2U;
	uint32_t x8003 = 30713458U;

    t114 = (x8001>>((x8002%x8003)+x8004));

    if (t114 != 3969U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x8035 = 1127807869U;
	uint32_t x8036 = UINT32_MAX;
	uint64_t t115 = 52LLU;

    t115 = (x8033>>((x8034%x8035)+x8036));

    if (t115 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x8217 = 18U;
	int64_t x8218 = INT64_MIN;
	int16_t x8219 = INT16_MIN;
	uint16_t x8220 = 4U;
	int32_t t116 = -15074;

    t116 = (x8217>>((x8218%x8219)+x8220));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x8276 = 5;
	int32_t t117 = 11401050;

    t117 = (x8273>>((x8274%x8275)+x8276));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x8405 = 0;
	static uint8_t x8407 = 6U;
	volatile int32_t t118 = -1830362;

    t118 = (x8405>>((x8406%x8407)+x8408));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x8450 = 0;
	volatile int16_t x8451 = -27;
	int8_t x8452 = 21;
	int32_t t119 = 45454381;

    t119 = (x8449>>((x8450%x8451)+x8452));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x8537 = 103U;
	volatile uint8_t x8538 = 15U;
	int32_t x8539 = -1;
	static uint8_t x8540 = 22U;
	volatile uint32_t t120 = 59528U;

    t120 = (x8537>>((x8538%x8539)+x8540));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x8577 = 925482999LLU;
	uint8_t x8579 = UINT8_MAX;
	int16_t x8580 = -12;
	uint64_t t121 = 2211183373880795771LLU;

    t121 = (x8577>>((x8578%x8579)+x8580));

    if (t121 != 115685374LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x8593 = UINT64_MAX;
	int8_t x8594 = 2;
	uint64_t x8595 = 871472428212128222LLU;
	int64_t x8596 = -1LL;
	uint64_t t122 = 210178162797664LLU;

    t122 = (x8593>>((x8594%x8595)+x8596));

    if (t122 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x8685 = UINT8_MAX;
	int64_t x8686 = -4443239821909772LL;
	static uint8_t x8688 = 10U;

    t123 = (x8685>>((x8686%x8687)+x8688));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x8846 = UINT16_MAX;
	int16_t x8847 = INT16_MAX;
	int32_t t124 = 83291;

    t124 = (x8845>>((x8846%x8847)+x8848));

    if (t124 != 121) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x9073 = 1U;
	int32_t x9075 = INT32_MAX;
	int64_t x9076 = -1LL;
	volatile int32_t t125 = 13;

    t125 = (x9073>>((x9074%x9075)+x9076));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x9185 = UINT16_MAX;
	volatile uint16_t x9186 = 7U;
	int64_t x9187 = INT64_MIN;
	int16_t x9188 = -1;
	int32_t t126 = 4128;

    t126 = (x9185>>((x9186%x9187)+x9188));

    if (t126 != 1023) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x9377 = 106U;
	int16_t x9378 = -1;
	volatile uint16_t x9379 = 1U;
	uint16_t x9380 = 0U;
	int32_t t127 = 6;

    t127 = (x9377>>((x9378%x9379)+x9380));

    if (t127 != 106) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x9418 = -1;
	int8_t x9419 = -6;
	uint8_t x9420 = 5U;
	volatile uint64_t t128 = 1060398145LLU;

    t128 = (x9417>>((x9418%x9419)+x9420));

    if (t128 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x9549 = INT16_MAX;
	static int8_t x9550 = 1;
	int32_t x9551 = INT32_MAX;
	volatile int16_t x9552 = -1;
	volatile int32_t t129 = 25900813;

    t129 = (x9549>>((x9550%x9551)+x9552));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x9656 = -1;
	uint64_t t130 = UINT64_MAX;

    t130 = (x9653>>((x9654%x9655)+x9656));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x9673 = 0U;
	static volatile uint64_t x9676 = 10LLU;
	uint32_t t131 = 1247849U;

    t131 = (x9673>>((x9674%x9675)+x9676));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x9973 = INT8_MAX;
	volatile int32_t x9974 = 1;
	int64_t x9975 = INT64_MIN;
	uint64_t x9976 = UINT64_MAX;
	volatile int32_t t132 = -574104;

    t132 = (x9973>>((x9974%x9975)+x9976));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x10110 = 13U;
	static uint64_t x10111 = UINT64_MAX;
	static volatile int32_t t133 = -1;

    t133 = (x10109>>((x10110%x10111)+x10112));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x10129 = UINT8_MAX;
	uint8_t x10130 = 21U;
	uint64_t x10131 = 120066LLU;
	volatile int32_t t134 = -3576827;

    t134 = (x10129>>((x10130%x10131)+x10132));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x10157 = 3312LL;
	volatile int32_t x10158 = -25958;
	int16_t x10159 = -1;
	static uint16_t x10160 = 6U;
	volatile int64_t t135 = -1LL;

    t135 = (x10157>>((x10158%x10159)+x10160));

    if (t135 != 51LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x10197 = 80104228;
	static uint64_t x10199 = 1622869952852LLU;
	int8_t x10200 = 3;

    t136 = (x10197>>((x10198%x10199)+x10200));

    if (t136 != 625814) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x10254 = INT16_MIN;
	static int16_t x10255 = INT16_MAX;
	volatile int8_t x10256 = 1;
	volatile int32_t t137 = -350;

    t137 = (x10253>>((x10254%x10255)+x10256));

    if (t137 != 8869) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x10333 = 1655;
	uint16_t x10334 = 12U;
	int64_t x10335 = INT64_MIN;
	static volatile int32_t t138 = -12318;

    t138 = (x10333>>((x10334%x10335)+x10336));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x10357 = UINT16_MAX;
	int16_t x10358 = INT16_MAX;
	int8_t x10359 = INT8_MAX;
	static int64_t x10360 = -1LL;
	volatile int32_t t139 = -21792208;

    t139 = (x10357>>((x10358%x10359)+x10360));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x10385 = 21LL;
	volatile int64_t x10386 = INT64_MAX;
	int16_t x10387 = INT16_MAX;
	volatile uint8_t x10388 = 19U;
	volatile int64_t t140 = 502380222493762385LL;

    t140 = (x10385>>((x10386%x10387)+x10388));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x10454 = INT32_MAX;
	static volatile uint8_t x10455 = 15U;

    t141 = (x10453>>((x10454%x10455)+x10456));

    if (t141 != 13561976475820724LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x10510 = 7;
	uint64_t x10511 = UINT64_MAX;
	int8_t x10512 = 2;
	volatile int32_t t142 = 4077530;

    t142 = (x10509>>((x10510%x10511)+x10512));

    if (t142 != 4194303) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x10557 = 122;
	int64_t x10559 = 3813LL;
	uint8_t x10560 = 17U;
	volatile int32_t t143 = -124189629;

    t143 = (x10557>>((x10558%x10559)+x10560));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x10565 = 60;
	int64_t x10566 = INT64_MIN;
	int64_t x10567 = INT64_MAX;
	uint8_t x10568 = 4U;
	int32_t t144 = 476732;

    t144 = (x10565>>((x10566%x10567)+x10568));

    if (t144 != 7) { NG(); } else { ; }
	
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


    return 0;
}

