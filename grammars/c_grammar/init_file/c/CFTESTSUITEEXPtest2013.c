
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

uint64_t x309 = 295967851552646635LLU;
int32_t x364 = 213261;
int16_t x656 = INT16_MIN;
uint32_t t4 = 1318U;


void f0(void) {
    	uint32_t x310 = UINT32_MAX;
	static uint8_t x311 = 20U;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t0 = 66158242941062134LLU;

    t0 = (x309>>((x310>>x311)/x312));

    if (t0 != 295967851552646635LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x361 = UINT8_MAX;
	volatile int8_t x362 = 0;
	volatile int64_t x363 = 0LL;
	volatile int32_t t1 = 7738;

    t1 = (x361>>((x362>>x363)/x364));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x505 = 1U;
	static int8_t x506 = 12;
	uint8_t x507 = 1U;
	int32_t x508 = -143;
	static int32_t t2 = -32179;

    t2 = (x505>>((x506>>x507)/x508));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	uint16_t x634 = 17U;
	volatile int8_t x635 = 16;
	int64_t x636 = INT64_MIN;
	static volatile uint32_t t3 = UINT32_MAX;

    t3 = (x633>>((x634>>x635)/x636));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x653 = 71057736U;
	uint32_t x654 = UINT32_MAX;
	uint8_t x655 = 0U;

    t4 = (x653>>((x654>>x655)/x656));

    if (t4 != 35528868U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

