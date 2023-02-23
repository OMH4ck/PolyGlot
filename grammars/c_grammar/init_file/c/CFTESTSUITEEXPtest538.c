
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

int8_t x554 = INT8_MAX;
volatile int8_t x555 = INT8_MAX;
static int32_t t1 = -4008;


void f0(void) {
    	uint16_t x161 = 1U;
	static uint16_t x162 = 14U;
	int8_t x163 = 2;
	int8_t x164 = 4;
	volatile int32_t t0 = -193;

    t0 = (x161<<((x162*x163)>>x164));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x553 = 3U;
	uint64_t x556 = 18LLU;

    t1 = (x553<<((x554*x555)>>x556));

    if (t1 != 3) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

