
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

volatile int64_t t1 = INT64_MAX;
volatile uint16_t x529 = 24U;
uint32_t x842 = UINT32_MAX;
int32_t x844 = INT32_MIN;
int8_t x1218 = 1;
volatile int16_t x1355 = INT16_MAX;
static uint8_t x1498 = 2U;
int8_t x1500 = 0;
static uint32_t x1529 = 33078U;
volatile int64_t x1669 = INT64_MAX;
uint8_t x1670 = UINT8_MAX;
uint32_t x1841 = UINT32_MAX;
volatile uint32_t t14 = UINT32_MAX;
uint16_t x2145 = 4612U;
volatile int32_t x2148 = INT32_MIN;


void f0(void) {
    	int32_t x45 = INT32_MAX;
	volatile uint16_t x46 = 239U;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = 0U;
	volatile int32_t t0 = INT32_MAX;

    t0 = (x45<<((x46+x47)*x48));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x217 = INT64_MAX;
	volatile int16_t x218 = INT16_MAX;
	static int64_t x219 = -11LL;
	uint16_t x220 = 0U;

    t1 = (x217<<((x218+x219)*x220));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x530 = 9U;
	uint32_t x531 = UINT32_MAX;
	uint32_t x532 = 1U;
	volatile int32_t t2 = 2;

    t2 = (x529<<((x530+x531)*x532));

    if (t2 != 6144) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x841 = UINT64_MAX;
	int16_t x843 = INT16_MAX;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (x841<<((x842+x843)*x844));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x1217 = INT32_MAX;
	uint64_t x1219 = 0LLU;
	uint32_t x1220 = 0U;
	int32_t t4 = INT32_MAX;

    t4 = (x1217<<((x1218+x1219)*x1220));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x1309 = 15;
	static uint32_t x1310 = UINT32_MAX;
	static int8_t x1311 = -2;
	static volatile int32_t x1312 = -1;
	volatile int32_t t5 = 977;

    t5 = (x1309<<((x1310+x1311)*x1312));

    if (t5 != 120) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x1353 = 15367756921953LLU;
	static int16_t x1354 = INT16_MAX;
	int8_t x1356 = 0;
	uint64_t t6 = 62286056748444LLU;

    t6 = (x1353<<((x1354+x1355)*x1356));

    if (t6 != 15367756921953LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x1413 = INT8_MAX;
	static int16_t x1414 = -1;
	int8_t x1415 = -1;
	int32_t x1416 = -1;
	volatile int32_t t7 = -108546;

    t7 = (x1413<<((x1414+x1415)*x1416));

    if (t7 != 508) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x1449 = 6978U;
	uint32_t x1450 = UINT32_MAX;
	volatile uint32_t x1451 = 1843U;
	uint32_t x1452 = 0U;
	int32_t t8 = 1;

    t8 = (x1449<<((x1450+x1451)*x1452));

    if (t8 != 6978) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1497 = 29;
	int32_t x1499 = INT32_MIN;
	static int32_t t9 = -218146036;

    t9 = (x1497<<((x1498+x1499)*x1500));

    if (t9 != 29) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x1530 = INT64_MAX;
	int64_t x1531 = INT64_MIN;
	int8_t x1532 = -1;
	uint32_t t10 = 62U;

    t10 = (x1529<<((x1530+x1531)*x1532));

    if (t10 != 66156U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1671 = 1LLU;
	volatile int16_t x1672 = 0;
	int64_t t11 = INT64_MAX;

    t11 = (x1669<<((x1670+x1671)*x1672));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1761 = UINT64_MAX;
	int64_t x1762 = -1LL;
	int8_t x1763 = 1;
	int32_t x1764 = -1;
	uint64_t t12 = UINT64_MAX;

    t12 = (x1761<<((x1762+x1763)*x1764));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1805 = 27085076U;
	volatile int16_t x1806 = -1;
	uint8_t x1807 = 1U;
	int16_t x1808 = -1;
	uint32_t t13 = 1U;

    t13 = (x1805<<((x1806+x1807)*x1808));

    if (t13 != 27085076U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x1842 = 29;
	volatile int32_t x1843 = INT32_MIN;
	int32_t x1844 = 0;

    t14 = (x1841<<((x1842+x1843)*x1844));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x2053 = UINT8_MAX;
	int8_t x2054 = INT8_MAX;
	int8_t x2055 = INT8_MIN;
	static int8_t x2056 = -5;
	int32_t t15 = -3544532;

    t15 = (x2053<<((x2054+x2055)*x2056));

    if (t15 != 8160) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x2146 = 13662U;
	int8_t x2147 = INT8_MIN;
	static int32_t t16 = -6054;

    t16 = (x2145<<((x2146+x2147)*x2148));

    if (t16 != 4612) { NG(); } else { ; }
	
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


    return 0;
}

