
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

static volatile int32_t t0 = 91;
volatile uint64_t x387 = 23507564889778403LLU;


void f0(void) {
    	int32_t x5 = INT32_MAX;
	static int8_t x6 = -7;
	int16_t x7 = -1;
	volatile uint32_t x8 = UINT32_MAX;

    t0 = (x5>>((x6*x7)-x8));

    if (t0 != 8388607) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x385 = 111U;
	uint16_t x386 = 0U;
	int16_t x388 = -1;
	static volatile int32_t t1 = -2;

    t1 = (x385>>((x386*x387)-x388));

    if (t1 != 55) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

