
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

int16_t x50 = INT16_MAX;
volatile int16_t x52 = 16;
int32_t t1 = 14177781;


void f0(void) {
    	uint64_t x49 = 69126LLU;
	uint8_t x51 = 4U;
	static volatile uint64_t t0 = 35782809783557785LLU;

    t0 = (x49>>((x50*x51)>>x52));

    if (t0 != 34563LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x273 = 0;
	uint8_t x274 = 0U;
	uint16_t x275 = 10U;
	int8_t x276 = 0;

    t1 = (x273>>((x274*x275)>>x276));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x309 = 133;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = 15;
	uint16_t x312 = 13U;
	int32_t t2 = 46;

    t2 = (x309>>((x310*x311)>>x312));

    if (t2 != 133) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

