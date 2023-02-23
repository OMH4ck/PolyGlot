
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

uint8_t x123 = 29U;
int16_t x124 = INT16_MAX;
volatile int64_t x184 = 1LL;
static volatile int32_t t1 = 11255989;


void f0(void) {
    	static int64_t x121 = 21999694866772491LL;
	int32_t x122 = 288;
	volatile int64_t t0 = -2328268096LL;

    t0 = (x121>>((x122>>x123)&x124));

    if (t0 != 21999694866772491LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x181 = 5U;
	static int8_t x182 = 7;
	uint64_t x183 = 0LLU;

    t1 = (x181>>((x182>>x183)&x184));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MAX;
	uint8_t x399 = 1U;
	uint8_t x400 = 19U;
	static int32_t t2 = 2015;

    t2 = (x397>>((x398>>x399)&x400));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x545 = 14143251223942LL;
	uint64_t x546 = 8306818LLU;
	int8_t x547 = 5;
	uint8_t x548 = UINT8_MAX;
	volatile int64_t t3 = -8781964LL;

    t3 = (x545>>((x546>>x547)&x548));

    if (t3 != 883953201496LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x717 = INT8_MAX;
	int8_t x718 = 1;
	uint16_t x719 = 3U;
	uint16_t x720 = 7U;
	volatile int32_t t4 = -279;

    t4 = (x717>>((x718>>x719)&x720));

    if (t4 != 127) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

