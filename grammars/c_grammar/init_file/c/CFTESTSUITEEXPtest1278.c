
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

volatile uint16_t x60 = 1U;
volatile uint32_t x704 = 1U;
volatile int64_t x855 = INT64_MAX;
int8_t x946 = INT8_MIN;
static volatile int16_t x947 = -1;
volatile int32_t t5 = -340232685;
int64_t x1229 = INT64_MIN;
int16_t x1231 = INT16_MAX;
uint32_t x1311 = UINT32_MAX;
int32_t x1338 = -1;
static volatile uint8_t x1339 = 10U;
uint16_t x1436 = 1U;
static int32_t x1603 = INT32_MAX;
uint16_t x1883 = 24U;
uint8_t x2060 = 1U;
static int64_t x2111 = -781LL;
int32_t t13 = 103911853;
int8_t x2239 = INT8_MAX;
static int32_t t14 = -20366;
int64_t x2614 = 6LL;
volatile uint8_t x2615 = 0U;
int8_t x2686 = INT8_MAX;
static uint8_t x2687 = UINT8_MAX;
volatile int16_t x2782 = INT16_MAX;
uint8_t x2784 = 1U;
uint16_t x2796 = 1U;
uint64_t x2842 = 25711444024055016LLU;
static int32_t x2854 = -264462908;
uint64_t t23 = 579867670677LLU;
static uint16_t x3059 = 9808U;
volatile uint32_t x3060 = 1U;


void f0(void) {
    	int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	volatile int64_t x59 = -1LL;
	static volatile int32_t t0 = -1378524;

    t0 = (x57/((x58!=x59)==x60));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x353 = 8U;
	int8_t x354 = 1;
	volatile int32_t x355 = INT32_MAX;
	volatile uint16_t x356 = 1U;
	int32_t t1 = -19266;

    t1 = (x353/((x354!=x355)==x356));

    if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x701 = 0;
	static uint64_t x702 = 29643122LLU;
	int16_t x703 = INT16_MIN;
	volatile int32_t t2 = 0;

    t2 = (x701/((x702!=x703)==x704));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x853 = 17197964342LL;
	volatile int16_t x854 = INT16_MAX;
	int8_t x856 = 1;
	volatile int64_t t3 = 681900LL;

    t3 = (x853/((x854!=x855)==x856));

    if (t3 != 17197964342LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x945 = INT8_MAX;
	int8_t x948 = 1;
	static volatile int32_t t4 = 460341;

    t4 = (x945/((x946!=x947)==x948));

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x1013 = 16U;
	static int16_t x1014 = 2;
	uint64_t x1015 = 18745831LLU;
	volatile int32_t x1016 = 1;

    t5 = (x1013/((x1014!=x1015)==x1016));

    if (t5 != 16) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x1230 = -1;
	volatile uint16_t x1232 = 1U;
	volatile int64_t t6 = INT64_MIN;

    t6 = (x1229/((x1230!=x1231)==x1232));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1309 = 23;
	int16_t x1310 = -109;
	int16_t x1312 = 1;
	volatile int32_t t7 = 596049212;

    t7 = (x1309/((x1310!=x1311)==x1312));

    if (t7 != 23) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x1337 = INT16_MIN;
	static int8_t x1340 = 1;
	int32_t t8 = 632163;

    t8 = (x1337/((x1338!=x1339)==x1340));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x1433 = 14U;
	int16_t x1434 = -3172;
	int32_t x1435 = 1957936;
	int32_t t9 = -416511782;

    t9 = (x1433/((x1434!=x1435)==x1436));

    if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x1601 = 13796;
	int8_t x1602 = INT8_MIN;
	uint8_t x1604 = 1U;
	int32_t t10 = 51;

    t10 = (x1601/((x1602!=x1603)==x1604));

    if (t10 != 13796) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1881 = INT8_MIN;
	static uint16_t x1882 = 1U;
	int64_t x1884 = 1LL;
	volatile int32_t t11 = 183703;

    t11 = (x1881/((x1882!=x1883)==x1884));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x2057 = -1;
	uint32_t x2058 = 401U;
	uint8_t x2059 = 0U;
	volatile int32_t t12 = -1942;

    t12 = (x2057/((x2058!=x2059)==x2060));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x2109 = 0;
	uint16_t x2110 = 3303U;
	volatile uint16_t x2112 = 1U;

    t13 = (x2109/((x2110!=x2111)==x2112));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x2237 = 1U;
	int32_t x2238 = INT32_MAX;
	uint16_t x2240 = 1U;

    t14 = (x2237/((x2238!=x2239)==x2240));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x2349 = 15461;
	static int16_t x2350 = 101;
	int64_t x2351 = -4285801340489465LL;
	static uint8_t x2352 = 1U;
	static volatile int32_t t15 = -39;

    t15 = (x2349/((x2350!=x2351)==x2352));

    if (t15 != 15461) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x2593 = UINT8_MAX;
	uint64_t x2594 = 1951141LLU;
	int64_t x2595 = INT64_MIN;
	int64_t x2596 = 1LL;
	volatile int32_t t16 = 1400322;

    t16 = (x2593/((x2594!=x2595)==x2596));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x2613 = 1;
	volatile int8_t x2616 = 1;
	int32_t t17 = 2;

    t17 = (x2613/((x2614!=x2615)==x2616));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x2685 = INT16_MAX;
	uint8_t x2688 = 1U;
	int32_t t18 = -16204282;

    t18 = (x2685/((x2686!=x2687)==x2688));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x2781 = INT8_MIN;
	volatile uint8_t x2783 = 51U;
	volatile int32_t t19 = 75995;

    t19 = (x2781/((x2782!=x2783)==x2784));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x2793 = 6031LL;
	static int8_t x2794 = -1;
	int64_t x2795 = INT64_MAX;
	int64_t t20 = 18LL;

    t20 = (x2793/((x2794!=x2795)==x2796));

    if (t20 != 6031LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2841 = 0;
	int32_t x2843 = INT32_MIN;
	uint8_t x2844 = 1U;
	int32_t t21 = -75991075;

    t21 = (x2841/((x2842!=x2843)==x2844));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2853 = INT8_MIN;
	static volatile int16_t x2855 = -2542;
	uint8_t x2856 = 1U;
	static volatile int32_t t22 = 8582447;

    t22 = (x2853/((x2854!=x2855)==x2856));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x2865 = 51956LLU;
	uint32_t x2866 = 973093569U;
	uint32_t x2867 = 50U;
	volatile uint16_t x2868 = 1U;

    t23 = (x2865/((x2866!=x2867)==x2868));

    if (t23 != 51956LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x3057 = 28941269324LLU;
	int32_t x3058 = 125;
	uint64_t t24 = 2699LLU;

    t24 = (x3057/((x3058!=x3059)==x3060));

    if (t24 != 28941269324LLU) { NG(); } else { ; }
	
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


    return 0;
}

