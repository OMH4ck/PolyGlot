
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

static int16_t x143 = INT16_MAX;


void f0(void) {
    	static uint16_t x45 = 309U;
	volatile int64_t x46 = INT64_MIN;
	static int64_t x47 = INT64_MIN;
	static int8_t x48 = 0;
	int32_t t0 = -50785;

    t0 = (x45<<((x46^x47)^x48));

    if (t0 != 309) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x141 = 7U;
	volatile uint32_t x142 = 3U;
	int16_t x144 = INT16_MAX;
	int32_t t1 = 1;

    t1 = (x141<<((x142^x143)^x144));

    if (t1 != 56) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x449 = 1175961915LLU;
	static int8_t x450 = INT8_MIN;
	static int8_t x451 = INT8_MAX;
	uint32_t x452 = UINT32_MAX;
	static volatile uint64_t t2 = 1532099153599946LLU;

    t2 = (x449<<((x450^x451)^x452));

    if (t2 != 1175961915LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

