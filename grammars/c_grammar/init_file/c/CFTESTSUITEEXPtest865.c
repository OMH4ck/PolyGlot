
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

int64_t x274 = -1LL;
int8_t x275 = -1;
uint8_t x276 = 7U;
volatile uint64_t t1 = 65194950758795278LLU;
static uint8_t x571 = 1U;


void f0(void) {
    	volatile uint8_t x273 = 4U;
	int32_t t0 = -12;

    t0 = (x273>>((x274%x275)<<x276));

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x297 = 169330LLU;
	static uint32_t x298 = 21589330U;
	static int16_t x299 = 1;
	uint8_t x300 = 5U;

    t1 = (x297>>((x298%x299)<<x300));

    if (t1 != 169330LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x409 = UINT16_MAX;
	uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	static uint8_t x412 = 2U;
	volatile int32_t t2 = -1712;

    t2 = (x409>>((x410%x411)<<x412));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x569 = UINT64_MAX;
	int8_t x570 = -1;
	int8_t x572 = 1;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (x569>>((x570%x571)<<x572));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

