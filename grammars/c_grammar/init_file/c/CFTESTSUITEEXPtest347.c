
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

volatile uint16_t x116 = 15U;
uint8_t x284 = 3U;
volatile uint64_t t3 = 231LLU;
static int16_t x478 = -1;
uint16_t x480 = 25U;


void f0(void) {
    	uint32_t x53 = 14789U;
	uint64_t x54 = UINT64_MAX;
	static int8_t x55 = -1;
	volatile uint32_t x56 = 2U;
	uint32_t t0 = 10427374U;

    t0 = (x53>>((x54-x55)>>x56));

    if (t0 != 14789U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x113 = INT8_MAX;
	uint8_t x114 = 0U;
	int64_t x115 = -1LL;
	volatile int32_t t1 = 31;

    t1 = (x113>>((x114-x115)>>x116));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x281 = 3LLU;
	int8_t x282 = INT8_MAX;
	static int32_t x283 = -1;
	static uint64_t t2 = 429LLU;

    t2 = (x281>>((x282-x283)>>x284));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x421 = 4165LLU;
	static int8_t x422 = INT8_MAX;
	static int8_t x423 = INT8_MAX;
	static uint16_t x424 = 4U;

    t3 = (x421>>((x422-x423)>>x424));

    if (t3 != 4165LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x477 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	volatile int32_t t4 = 3606040;

    t4 = (x477>>((x478-x479)>>x480));

    if (t4 != 255) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

