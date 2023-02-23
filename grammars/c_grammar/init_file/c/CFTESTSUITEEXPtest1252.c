
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

static int8_t x55 = -1;
static volatile int32_t t1 = -1;


void f0(void) {
    	static int16_t x9 = 550;
	int64_t x10 = -1LL;
	int8_t x11 = -1;
	static uint8_t x12 = 0U;
	int32_t t0 = 176395;

    t0 = (x9<<((x10!=x11)<<x12));

    if (t0 != 550) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x53 = 4;
	static int16_t x54 = -1;
	uint16_t x56 = 26U;

    t1 = (x53<<((x54!=x55)<<x56));

    if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x145 = 2U;
	int16_t x146 = -1;
	uint16_t x147 = 19305U;
	static volatile uint8_t x148 = 3U;
	static int32_t t2 = -619;

    t2 = (x145<<((x146!=x147)<<x148));

    if (t2 != 512) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	uint64_t x262 = 126669079261244LLU;
	volatile int16_t x263 = -1;
	uint16_t x264 = 0U;
	volatile uint64_t t3 = 6975494307068384358LLU;

    t3 = (x261<<((x262!=x263)<<x264));

    if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

