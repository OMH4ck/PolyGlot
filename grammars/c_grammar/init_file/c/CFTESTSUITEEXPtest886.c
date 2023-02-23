
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

int64_t x25 = INT64_MAX;
static volatile uint64_t x27 = 98718193053202LLU;
volatile int64_t t0 = INT64_MAX;
int32_t t1 = -9302948;
volatile uint16_t x100 = 1U;
volatile int16_t x291 = INT16_MIN;
static uint8_t x400 = 0U;
uint8_t x789 = UINT8_MAX;
int32_t t6 = -1;
static int64_t x881 = INT64_MAX;
int64_t x939 = INT64_MIN;
static int32_t x1114 = -1;


void f0(void) {
    	int16_t x26 = INT16_MAX;
	int16_t x28 = INT16_MAX;

    t0 = (x25/((x26%x27)==x28));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x37 = 24;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = INT64_MAX;
	uint16_t x40 = UINT16_MAX;

    t1 = (x37/((x38%x39)==x40));

    if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x97 = INT32_MIN;
	uint8_t x98 = 1U;
	static uint32_t x99 = UINT32_MAX;
	volatile int32_t t2 = INT32_MIN;

    t2 = (x97/((x98%x99)==x100));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x289 = INT16_MIN;
	volatile uint32_t x290 = UINT32_MAX;
	int16_t x292 = INT16_MAX;
	int32_t t3 = -11248;

    t3 = (x289/((x290%x291)==x292));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x397 = 183425U;
	volatile uint32_t x398 = 118296805U;
	int64_t x399 = -1LL;
	uint32_t t4 = 1931742968U;

    t4 = (x397/((x398%x399)==x400));

    if (t4 != 183425U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = -3;
	int8_t x431 = 1;
	int16_t x432 = 0;
	volatile int32_t t5 = 1483082;

    t5 = (x429/((x430%x431)==x432));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x790 = -1;
	int8_t x791 = INT8_MIN;
	int32_t x792 = -1;

    t6 = (x789/((x790%x791)==x792));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x882 = -1;
	int16_t x883 = -651;
	int32_t x884 = -1;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x881/((x882%x883)==x884));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x937 = INT64_MIN;
	uint8_t x938 = UINT8_MAX;
	uint8_t x940 = UINT8_MAX;
	int64_t t8 = INT64_MIN;

    t8 = (x937/((x938%x939)==x940));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1113 = -1;
	uint16_t x1115 = UINT16_MAX;
	uint32_t x1116 = UINT32_MAX;
	int32_t t9 = 238280;

    t9 = (x1113/((x1114%x1115)==x1116));

    if (t9 != -1) { NG(); } else { ; }
	
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


    return 0;
}

