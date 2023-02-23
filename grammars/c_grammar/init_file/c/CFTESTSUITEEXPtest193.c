
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

int16_t x18 = INT16_MAX;
int32_t x297 = INT32_MAX;
static int16_t x298 = INT16_MIN;
static int16_t x299 = INT16_MAX;
volatile uint64_t t3 = 3054LLU;
static volatile int32_t t5 = 301;


void f0(void) {
    	int64_t x17 = INT64_MAX;
	static volatile int32_t x19 = -1;
	static int16_t x20 = INT16_MAX;
	volatile int64_t t0 = 4438022453380034LL;

    t0 = (x17>>((x18+x19)^x20));

    if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x93 = 364110120;
	static uint8_t x94 = 0U;
	static volatile uint32_t x95 = UINT32_MAX;
	static int8_t x96 = -3;
	int32_t t1 = -511788;

    t1 = (x93>>((x94+x95)^x96));

    if (t1 != 91027530) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x300 = -1;
	static int32_t t2 = INT32_MAX;

    t2 = (x297>>((x298+x299)^x300));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x489 = 143639LLU;
	static volatile int32_t x490 = -1;
	static uint64_t x491 = UINT64_MAX;
	uint64_t x492 = UINT64_MAX;

    t3 = (x489>>((x490+x491)^x492));

    if (t3 != 71819LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x561 = 2711;
	int32_t x562 = -1;
	static int64_t x563 = INT64_MAX;
	int64_t x564 = INT64_MAX;
	volatile int32_t t4 = -1;

    t4 = (x561>>((x562+x563)^x564));

    if (t4 != 1355) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x809 = INT8_MAX;
	int16_t x810 = 20;
	int8_t x811 = INT8_MIN;
	int8_t x812 = INT8_MIN;

    t5 = (x809>>((x810+x811)^x812));

    if (t5 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

