
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

int32_t x263 = -9;
uint32_t x275 = UINT32_MAX;
volatile uint64_t t1 = 20828242246LLU;
int8_t x495 = INT8_MIN;
uint8_t x910 = 2U;
int8_t x912 = -1;


void f0(void) {
    	int8_t x261 = INT8_MAX;
	static volatile int8_t x262 = -1;
	uint8_t x264 = 1U;
	int32_t t0 = -1;

    t0 = (x261>>((x262-x263)-x264));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x273 = UINT64_MAX;
	static volatile uint32_t x274 = 6U;
	int8_t x276 = 0;

    t1 = (x273>>((x274-x275)-x276));

    if (t1 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x493 = UINT64_MAX;
	int64_t x494 = -1LL;
	int8_t x496 = INT8_MAX;
	uint64_t t2 = UINT64_MAX;

    t2 = (x493>>((x494-x495)-x496));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x869 = 473467584407436LLU;
	static int8_t x870 = -1;
	static uint64_t x871 = UINT64_MAX;
	static int32_t x872 = -1;
	volatile uint64_t t3 = 7955759680503LLU;

    t3 = (x869>>((x870-x871)-x872));

    if (t3 != 236733792203718LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x909 = 25212167LLU;
	uint64_t x911 = UINT64_MAX;
	static uint64_t t4 = 4235791363072451063LLU;

    t4 = (x909>>((x910-x911)-x912));

    if (t4 != 1575760LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x981 = INT32_MAX;
	static int64_t x982 = -1LL;
	int8_t x983 = INT8_MAX;
	int8_t x984 = INT8_MIN;
	static volatile int32_t t5 = INT32_MAX;

    t5 = (x981>>((x982-x983)-x984));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x1085 = INT16_MAX;
	int8_t x1086 = 1;
	uint8_t x1087 = 0U;
	uint8_t x1088 = 1U;
	int32_t t6 = 355;

    t6 = (x1085>>((x1086-x1087)-x1088));

    if (t6 != 32767) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

