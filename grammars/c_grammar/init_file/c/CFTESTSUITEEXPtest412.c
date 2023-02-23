
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

uint16_t x1 = UINT16_MAX;
volatile uint8_t x9 = UINT8_MAX;
volatile int32_t t1 = 0;
static int8_t x216 = -4;
volatile int64_t t2 = -25106653691LL;
volatile int32_t t3 = -1;


void f0(void) {
    	int8_t x2 = -1;
	uint32_t x3 = 0U;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 1550352;

    t0 = (x1<<((x2*x3)-x4));

    if (t0 != 131070) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x10 = 12710U;
	int32_t x11 = 0;
	volatile int64_t x12 = -1LL;

    t1 = (x9<<((x10*x11)-x12));

    if (t1 != 510) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x213 = 31804471LL;
	volatile int64_t x214 = -1LL;
	volatile int16_t x215 = -1;

    t2 = (x213<<((x214*x215)-x216));

    if (t2 != 1017743072LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	uint8_t x299 = 1U;
	int8_t x300 = -2;

    t3 = (x297<<((x298*x299)-x300));

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x381 = 0U;
	int32_t x382 = -1;
	static int16_t x383 = -1;
	static int16_t x384 = -1;
	volatile uint32_t t4 = 40299U;

    t4 = (x381<<((x382*x383)-x384));

    if (t4 != 0U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

