
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

int8_t x274 = INT8_MIN;
volatile uint64_t t0 = 6LLU;


void f0(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int64_t x275 = 3LL;
	int8_t x276 = INT8_MAX;

    t0 = (x273>>((x274^x275)+x276));

    if (t0 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x533 = 1840476U;
	volatile int16_t x534 = -1;
	int8_t x535 = -1;
	volatile int8_t x536 = 4;
	uint32_t t1 = 56240U;

    t1 = (x533>>((x534^x535)+x536));

    if (t1 != 115029U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

