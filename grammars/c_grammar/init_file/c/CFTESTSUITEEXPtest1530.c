
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

int8_t x243 = -1;
uint16_t x244 = UINT16_MAX;
volatile uint32_t t1 = UINT32_MAX;


void f0(void) {
    	uint16_t x85 = 4883U;
	static int8_t x86 = INT8_MIN;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	volatile int64_t t0 = -473405380100LL;

    t0 = (x85/((x86==x87)&x88));

    if (t0 != 4883LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x241 = UINT32_MAX;
	uint32_t x242 = UINT32_MAX;

    t1 = (x241/((x242==x243)&x244));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x345 = INT16_MAX;
	static volatile int32_t x346 = -1;
	int8_t x347 = -1;
	int32_t x348 = INT32_MAX;
	volatile int32_t t2 = -13;

    t2 = (x345/((x346==x347)&x348));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x361 = 265182190LLU;
	static int32_t x362 = -1;
	int32_t x363 = -1;
	volatile int8_t x364 = INT8_MAX;
	uint64_t t3 = 159LLU;

    t3 = (x361/((x362==x363)&x364));

    if (t3 != 265182190LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

