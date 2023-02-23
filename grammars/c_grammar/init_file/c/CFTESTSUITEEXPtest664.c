
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

uint16_t x4 = 1U;
static volatile int32_t t0 = INT32_MAX;
uint32_t x199 = UINT32_MAX;
volatile uint64_t x221 = 133LLU;
int8_t x604 = 24;
int32_t t3 = 115151;
int32_t x729 = INT32_MAX;
volatile int32_t x1159 = 64097;
volatile int32_t t7 = 1336090;
static volatile uint32_t x1405 = UINT32_MAX;
uint64_t x1406 = 788475297LLU;
int16_t x1407 = -1;
int8_t x1457 = INT8_MAX;
static int64_t x1914 = -1LL;
uint8_t x1920 = 1U;
uint8_t x2049 = 61U;
static volatile uint8_t x2052 = 8U;
volatile int8_t x2097 = INT8_MAX;
volatile int16_t x2100 = 1;
int64_t x2361 = INT64_MAX;
static int64_t x2363 = 1365489LL;
uint32_t x2657 = 891549652U;
static volatile int64_t x2659 = INT64_MIN;
uint8_t x2793 = 1U;
int8_t x2928 = 8;
int32_t t26 = -854;
uint16_t x3568 = 1U;
static int8_t x3634 = -1;
static int32_t x3636 = 2;
uint32_t x4013 = 50117U;
int8_t x4105 = 42;
volatile int32_t t32 = -114896;
volatile uint64_t x4141 = UINT64_MAX;
int32_t x4233 = INT32_MAX;
uint8_t x4234 = UINT8_MAX;
volatile int32_t t35 = INT32_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int32_t x2 = 6263;
	uint16_t x3 = UINT16_MAX;

    t0 = (x1<<((x2/x3)<<x4));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x197 = UINT32_MAX;
	int16_t x198 = INT16_MAX;
	volatile uint8_t x200 = 1U;
	static uint32_t t1 = UINT32_MAX;

    t1 = (x197<<((x198/x199)<<x200));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x222 = 1LL;
	volatile int32_t x223 = INT32_MAX;
	static volatile uint8_t x224 = 36U;
	uint64_t t2 = 67208LLU;

    t2 = (x221<<((x222/x223)<<x224));

    if (t2 != 133LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x601 = 0;
	static uint8_t x602 = 0U;
	static uint16_t x603 = 265U;

    t3 = (x601<<((x602/x603)<<x604));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x730 = 6733U;
	uint64_t x731 = 7514147LLU;
	static uint16_t x732 = 44U;
	int32_t t4 = INT32_MAX;

    t4 = (x729<<((x730/x731)<<x732));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x1005 = 10LLU;
	volatile int16_t x1006 = 84;
	uint8_t x1007 = 127U;
	static volatile int16_t x1008 = 0;
	static volatile uint64_t t5 = 1932193999287LLU;

    t5 = (x1005<<((x1006/x1007)<<x1008));

    if (t5 != 10LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x1157 = 15U;
	uint8_t x1158 = 5U;
	static volatile int8_t x1160 = 1;
	volatile int32_t t6 = -30;

    t6 = (x1157<<((x1158/x1159)<<x1160));

    if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1373 = 350U;
	volatile int8_t x1374 = INT8_MAX;
	int64_t x1375 = INT64_MAX;
	int8_t x1376 = 15;

    t7 = (x1373<<((x1374/x1375)<<x1376));

    if (t7 != 350) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x1408 = 3U;
	uint32_t t8 = UINT32_MAX;

    t8 = (x1405<<((x1406/x1407)<<x1408));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x1458 = 7U;
	volatile int32_t x1459 = INT32_MIN;
	uint16_t x1460 = 1U;
	volatile int32_t t9 = -322;

    t9 = (x1457<<((x1458/x1459)<<x1460));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x1689 = UINT16_MAX;
	int16_t x1690 = INT16_MAX;
	int64_t x1691 = INT64_MIN;
	static uint8_t x1692 = 3U;
	int32_t t10 = -216;

    t10 = (x1689<<((x1690/x1691)<<x1692));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1857 = 80567LL;
	int16_t x1858 = -1;
	volatile int64_t x1859 = -69906LL;
	volatile int8_t x1860 = 15;
	volatile int64_t t11 = -213635128LL;

    t11 = (x1857<<((x1858/x1859)<<x1860));

    if (t11 != 80567LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x1877 = 560321117019816710LLU;
	int64_t x1878 = INT64_MIN;
	int64_t x1879 = INT64_MIN;
	uint8_t x1880 = 0U;
	uint64_t t12 = 109350306212LLU;

    t12 = (x1877<<((x1878/x1879)<<x1880));

    if (t12 != 1120642234039633420LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1913 = 8170513950LLU;
	uint16_t x1915 = 25842U;
	uint8_t x1916 = 1U;
	volatile uint64_t t13 = 1839881LLU;

    t13 = (x1913<<((x1914/x1915)<<x1916));

    if (t13 != 8170513950LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1917 = UINT16_MAX;
	volatile uint32_t x1918 = 38U;
	int8_t x1919 = -3;
	int32_t t14 = 355;

    t14 = (x1917<<((x1918/x1919)<<x1920));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1945 = INT16_MAX;
	int8_t x1946 = INT8_MIN;
	int32_t x1947 = INT32_MIN;
	static int8_t x1948 = 10;
	int32_t t15 = 1895;

    t15 = (x1945<<((x1946/x1947)<<x1948));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1985 = 25U;
	int8_t x1986 = INT8_MIN;
	int32_t x1987 = 46663;
	uint32_t x1988 = 14U;
	volatile int32_t t16 = 30474;

    t16 = (x1985<<((x1986/x1987)<<x1988));

    if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x2033 = INT32_MAX;
	int8_t x2034 = INT8_MIN;
	int32_t x2035 = INT32_MAX;
	uint8_t x2036 = 27U;
	int32_t t17 = INT32_MAX;

    t17 = (x2033<<((x2034/x2035)<<x2036));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x2050 = 126U;
	uint64_t x2051 = 2836547986LLU;
	int32_t t18 = -10579;

    t18 = (x2049<<((x2050/x2051)<<x2052));

    if (t18 != 61) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x2098 = -27;
	int64_t x2099 = INT64_MAX;
	volatile int32_t t19 = 496;

    t19 = (x2097<<((x2098/x2099)<<x2100));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x2362 = INT16_MAX;
	int8_t x2364 = 1;
	static volatile int64_t t20 = INT64_MAX;

    t20 = (x2361<<((x2362/x2363)<<x2364));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x2658 = 10U;
	int16_t x2660 = 13;
	uint32_t t21 = 1083U;

    t21 = (x2657<<((x2658/x2659)<<x2660));

    if (t21 != 891549652U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x2794 = 455097531U;
	static volatile int32_t x2795 = INT32_MIN;
	volatile uint8_t x2796 = 11U;
	int32_t t22 = 26;

    t22 = (x2793<<((x2794/x2795)<<x2796));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2925 = INT32_MAX;
	static volatile uint64_t x2926 = 2841LLU;
	uint16_t x2927 = UINT16_MAX;
	static int32_t t23 = INT32_MAX;

    t23 = (x2925<<((x2926/x2927)<<x2928));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x2937 = 1;
	uint16_t x2938 = 9U;
	static uint64_t x2939 = 784283LLU;
	int8_t x2940 = 1;
	int32_t t24 = 1067970151;

    t24 = (x2937<<((x2938/x2939)<<x2940));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2961 = INT16_MAX;
	int16_t x2962 = INT16_MIN;
	uint32_t x2963 = UINT32_MAX;
	static int8_t x2964 = 0;
	static int32_t t25 = -364886133;

    t25 = (x2961<<((x2962/x2963)<<x2964));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x3009 = 2;
	volatile int64_t x3010 = -84LL;
	int8_t x3011 = INT8_MIN;
	int8_t x3012 = 1;

    t26 = (x3009<<((x3010/x3011)<<x3012));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x3197 = UINT64_MAX;
	int16_t x3198 = -1;
	static int64_t x3199 = INT64_MIN;
	uint32_t x3200 = 28U;
	static uint64_t t27 = UINT64_MAX;

    t27 = (x3197<<((x3198/x3199)<<x3200));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x3393 = 1;
	uint32_t x3394 = 6912320U;
	int16_t x3395 = -1;
	uint8_t x3396 = 1U;
	static volatile int32_t t28 = 955845341;

    t28 = (x3393<<((x3394/x3395)<<x3396));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x3565 = 3U;
	int8_t x3566 = INT8_MIN;
	int32_t x3567 = 349;
	volatile int32_t t29 = -397;

    t29 = (x3565<<((x3566/x3567)<<x3568));

    if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x3633 = 39816072;
	uint64_t x3635 = UINT64_MAX;
	static int32_t t30 = 4;

    t30 = (x3633<<((x3634/x3635)<<x3636));

    if (t30 != 637057152) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x4014 = 276U;
	static int32_t x4015 = -12;
	uint8_t x4016 = 17U;
	static uint32_t t31 = 93497U;

    t31 = (x4013<<((x4014/x4015)<<x4016));

    if (t31 != 50117U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x4106 = UINT16_MAX;
	uint64_t x4107 = UINT64_MAX;
	uint8_t x4108 = 1U;

    t32 = (x4105<<((x4106/x4107)<<x4108));

    if (t32 != 42) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x4142 = UINT16_MAX;
	uint64_t x4143 = 396735001LLU;
	volatile uint8_t x4144 = 3U;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = (x4141<<((x4142/x4143)<<x4144));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x4229 = 106U;
	volatile uint64_t x4230 = 2397124LLU;
	volatile int8_t x4231 = INT8_MIN;
	int8_t x4232 = 41;
	int32_t t34 = -2;

    t34 = (x4229<<((x4230/x4231)<<x4232));

    if (t34 != 106) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x4235 = -12389491;
	volatile uint16_t x4236 = 13U;

    t35 = (x4233<<((x4234/x4235)<<x4236));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x4381 = UINT8_MAX;
	uint8_t x4382 = UINT8_MAX;
	uint64_t x4383 = UINT64_MAX;
	int16_t x4384 = 10;
	volatile int32_t t36 = -612;

    t36 = (x4381<<((x4382/x4383)<<x4384));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x4417 = 47U;
	int16_t x4418 = 12;
	volatile uint32_t x4419 = UINT32_MAX;
	uint8_t x4420 = 23U;
	volatile int32_t t37 = -6889;

    t37 = (x4417<<((x4418/x4419)<<x4420));

    if (t37 != 47) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x4433 = UINT64_MAX;
	int64_t x4434 = -1LL;
	volatile int8_t x4435 = -1;
	int16_t x4436 = 0;
	uint64_t t38 = 6376775LLU;

    t38 = (x4433<<((x4434/x4435)<<x4436));

    if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
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


    return 0;
}

