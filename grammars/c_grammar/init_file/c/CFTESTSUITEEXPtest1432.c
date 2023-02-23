
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

int16_t x350 = -1;
int8_t x351 = -1;
uint64_t x373 = 2758758562633702709LLU;
int8_t x467 = INT8_MAX;
uint16_t x653 = 405U;
uint8_t x665 = 1U;
int32_t t4 = -4097527;
volatile int16_t x790 = -1;
int64_t x792 = INT64_MAX;
volatile int16_t x851 = INT16_MIN;
uint32_t x1342 = UINT32_MAX;
int32_t x1413 = INT32_MAX;
static int32_t x1416 = 49596583;
volatile int16_t x1654 = INT16_MIN;
static int32_t x1656 = INT32_MIN;
uint32_t t12 = 62U;
int8_t x1678 = INT8_MIN;
uint16_t x1787 = UINT16_MAX;
static int32_t t17 = 126219;
uint64_t t18 = 8669989654664751534LLU;
uint16_t x2021 = 5248U;
int64_t x2022 = INT64_MIN;
volatile int16_t x2086 = INT16_MAX;
int8_t x2175 = -1;
volatile int32_t t22 = 581;
int32_t x2193 = -1426;
static int64_t x2400 = 147551381LL;
static int32_t x2440 = -2;
volatile int32_t x2638 = INT32_MIN;
volatile int32_t t28 = 2825;
int64_t x2801 = INT64_MIN;
volatile int16_t x3004 = -1366;
uint16_t x3061 = UINT16_MAX;
volatile uint64_t x3063 = UINT64_MAX;
int8_t x3322 = -1;


void f0(void) {
    	volatile int32_t x349 = INT32_MIN;
	volatile int32_t x352 = INT32_MIN;
	int32_t t0 = INT32_MIN;

    t0 = (x349/((x350==x351)%x352));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -1;
	uint8_t x376 = 28U;
	static uint64_t t1 = 780852LLU;

    t1 = (x373/((x374==x375)%x376));

    if (t1 != 2758758562633702709LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x465 = 5457765882LLU;
	int8_t x466 = INT8_MAX;
	static int64_t x468 = -523432307255813LL;
	uint64_t t2 = 2526315579784510LLU;

    t2 = (x465/((x466==x467)%x468));

    if (t2 != 5457765882LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x654 = -1;
	int16_t x655 = -1;
	uint32_t x656 = 1076366U;
	uint32_t t3 = 3580U;

    t3 = (x653/((x654==x655)%x656));

    if (t3 != 405U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x666 = -1;
	static int8_t x667 = -1;
	int16_t x668 = 16;

    t4 = (x665/((x666==x667)%x668));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x791 = -1;
	volatile int64_t t5 = 6989837188LL;

    t5 = (x789/((x790==x791)%x792));

    if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x849 = 35LLU;
	int16_t x850 = INT16_MIN;
	static uint16_t x852 = 9280U;
	volatile uint64_t t6 = 287726156332252731LLU;

    t6 = (x849/((x850==x851)%x852));

    if (t6 != 35LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x1241 = INT16_MIN;
	int8_t x1242 = -1;
	uint32_t x1243 = UINT32_MAX;
	static int8_t x1244 = INT8_MAX;
	static int32_t t7 = 354904;

    t7 = (x1241/((x1242==x1243)%x1244));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x1341 = 1521560880026080193LL;
	int8_t x1343 = -1;
	int32_t x1344 = INT32_MIN;
	int64_t t8 = -54475287716LL;

    t8 = (x1341/((x1342==x1343)%x1344));

    if (t8 != 1521560880026080193LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1414 = -1;
	int32_t x1415 = -1;
	volatile int32_t t9 = INT32_MAX;

    t9 = (x1413/((x1414==x1415)%x1416));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x1465 = INT64_MIN;
	volatile int8_t x1466 = INT8_MIN;
	int8_t x1467 = INT8_MIN;
	uint8_t x1468 = 14U;
	static int64_t t10 = INT64_MIN;

    t10 = (x1465/((x1466==x1467)%x1468));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x1477 = 11673U;
	static uint32_t x1478 = UINT32_MAX;
	int8_t x1479 = -1;
	int16_t x1480 = 12;
	volatile int32_t t11 = -105;

    t11 = (x1477/((x1478==x1479)%x1480));

    if (t11 != 11673) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x1653 = 12U;
	volatile int16_t x1655 = INT16_MIN;

    t12 = (x1653/((x1654==x1655)%x1656));

    if (t12 != 12U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1661 = INT8_MIN;
	volatile int8_t x1662 = INT8_MIN;
	static volatile int8_t x1663 = INT8_MIN;
	int16_t x1664 = 7;
	volatile int32_t t13 = 43148;

    t13 = (x1661/((x1662==x1663)%x1664));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1677 = INT64_MIN;
	int8_t x1679 = INT8_MIN;
	volatile int8_t x1680 = INT8_MIN;
	int64_t t14 = INT64_MIN;

    t14 = (x1677/((x1678==x1679)%x1680));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1785 = -1;
	volatile uint16_t x1786 = UINT16_MAX;
	int64_t x1788 = INT64_MIN;
	static int64_t t15 = 14882760395934LL;

    t15 = (x1785/((x1786==x1787)%x1788));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x1845 = INT8_MIN;
	volatile int32_t x1846 = -1;
	int16_t x1847 = -1;
	uint32_t x1848 = 255U;
	uint32_t t16 = 232U;

    t16 = (x1845/((x1846==x1847)%x1848));

    if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1865 = -1;
	static int8_t x1866 = -1;
	volatile int32_t x1867 = -1;
	volatile int32_t x1868 = INT32_MIN;

    t17 = (x1865/((x1866==x1867)%x1868));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1945 = 169914453LLU;
	int8_t x1946 = INT8_MAX;
	volatile int8_t x1947 = INT8_MAX;
	uint64_t x1948 = 425560932521638LLU;

    t18 = (x1945/((x1946==x1947)%x1948));

    if (t18 != 169914453LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x2009 = 182289LLU;
	static int32_t x2010 = INT32_MIN;
	int32_t x2011 = INT32_MIN;
	uint32_t x2012 = UINT32_MAX;
	uint64_t t19 = 5LLU;

    t19 = (x2009/((x2010==x2011)%x2012));

    if (t19 != 182289LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x2023 = INT64_MIN;
	int8_t x2024 = 3;
	static int32_t t20 = -1363523;

    t20 = (x2021/((x2022==x2023)%x2024));

    if (t20 != 5248) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x2085 = INT64_MAX;
	volatile int16_t x2087 = INT16_MAX;
	int8_t x2088 = -37;
	volatile int64_t t21 = INT64_MAX;

    t21 = (x2085/((x2086==x2087)%x2088));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x2173 = -47349;
	static int16_t x2174 = -1;
	int8_t x2176 = INT8_MAX;

    t22 = (x2173/((x2174==x2175)%x2176));

    if (t22 != -47349) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x2194 = -1;
	static int16_t x2195 = -1;
	static int32_t x2196 = INT32_MIN;
	volatile int32_t t23 = -247;

    t23 = (x2193/((x2194==x2195)%x2196));

    if (t23 != -1426) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x2213 = UINT64_MAX;
	int16_t x2214 = -1;
	uint64_t x2215 = UINT64_MAX;
	uint32_t x2216 = 100U;
	uint64_t t24 = UINT64_MAX;

    t24 = (x2213/((x2214==x2215)%x2216));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x2397 = -1;
	static int64_t x2398 = -1LL;
	uint64_t x2399 = UINT64_MAX;
	static volatile int64_t t25 = -1021195006300LL;

    t25 = (x2397/((x2398==x2399)%x2400));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x2437 = UINT32_MAX;
	uint16_t x2438 = UINT16_MAX;
	uint16_t x2439 = UINT16_MAX;
	uint32_t t26 = UINT32_MAX;

    t26 = (x2437/((x2438==x2439)%x2440));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2505 = INT16_MAX;
	int8_t x2506 = -1;
	int64_t x2507 = -1LL;
	int32_t x2508 = -146;
	static int32_t t27 = -56588;

    t27 = (x2505/((x2506==x2507)%x2508));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x2637 = 3U;
	volatile int32_t x2639 = INT32_MIN;
	int8_t x2640 = INT8_MIN;

    t28 = (x2637/((x2638==x2639)%x2640));

    if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x2657 = -1;
	volatile int16_t x2658 = -1;
	static int16_t x2659 = -1;
	uint16_t x2660 = UINT16_MAX;
	volatile int32_t t29 = -2;

    t29 = (x2657/((x2658==x2659)%x2660));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x2729 = -1;
	int32_t x2730 = INT32_MAX;
	int32_t x2731 = INT32_MAX;
	uint8_t x2732 = UINT8_MAX;
	volatile int32_t t30 = -16411040;

    t30 = (x2729/((x2730==x2731)%x2732));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2802 = -1;
	int64_t x2803 = -1LL;
	uint16_t x2804 = UINT16_MAX;
	int64_t t31 = INT64_MIN;

    t31 = (x2801/((x2802==x2803)%x2804));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2845 = -16;
	volatile int32_t x2846 = -1;
	int32_t x2847 = -1;
	int32_t x2848 = -302747173;
	static int32_t t32 = -4;

    t32 = (x2845/((x2846==x2847)%x2848));

    if (t32 != -16) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x3001 = INT32_MIN;
	uint8_t x3002 = 3U;
	uint8_t x3003 = 3U;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x3001/((x3002==x3003)%x3004));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x3062 = UINT64_MAX;
	int16_t x3064 = INT16_MAX;
	int32_t t34 = -3;

    t34 = (x3061/((x3062==x3063)%x3064));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x3069 = INT64_MAX;
	int16_t x3070 = INT16_MIN;
	int16_t x3071 = INT16_MIN;
	int64_t x3072 = INT64_MIN;
	int64_t t35 = INT64_MAX;

    t35 = (x3069/((x3070==x3071)%x3072));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x3269 = UINT8_MAX;
	int16_t x3270 = -1;
	static volatile int8_t x3271 = -1;
	uint16_t x3272 = 224U;
	volatile int32_t t36 = -5;

    t36 = (x3269/((x3270==x3271)%x3272));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x3321 = -203356LL;
	int8_t x3323 = -1;
	int32_t x3324 = INT32_MIN;
	static int64_t t37 = -1822LL;

    t37 = (x3321/((x3322==x3323)%x3324));

    if (t37 != -203356LL) { NG(); } else { ; }
	
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


    return 0;
}

