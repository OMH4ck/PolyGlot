
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

int64_t x19 = -171197445578178LL;
uint16_t x37 = 3U;
int32_t x38 = INT32_MAX;
static uint8_t x91 = UINT8_MAX;
uint8_t x92 = 3U;


void f0(void) {
    	static uint32_t x17 = 246886058U;
	int32_t x18 = -6327809;
	volatile uint16_t x20 = 3U;
	volatile uint32_t t0 = 7U;

    t0 = (x17%((x18>x19)<<x20));

    if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x39 = -27;
	int8_t x40 = 0;
	static volatile int32_t t1 = 8;

    t1 = (x37%((x38>x39)<<x40));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x89 = 10U;
	static int16_t x90 = 14431;
	int32_t t2 = 0;

    t2 = (x89%((x90>x91)<<x92));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x149 = 5U;
	static uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = -1;
	uint8_t x152 = 1U;
	volatile int32_t t3 = -2087609;

    t3 = (x149%((x150>x151)<<x152));

    if (t3 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

