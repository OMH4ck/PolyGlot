
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

uint16_t x109 = 2U;
volatile int32_t t3 = -6133143;


void f0(void) {
    	volatile int64_t x110 = -1LL;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 0U;
	static volatile int32_t t0 = 148003;

    t0 = (x109<<((x110/x111)|x112));

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x157 = 116507154933531LL;
	uint16_t x158 = 4108U;
	int16_t x159 = INT16_MAX;
	uint32_t x160 = 6U;
	volatile int64_t t1 = 388088639LL;

    t1 = (x157<<((x158/x159)|x160));

    if (t1 != 7456457915745984LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 11U;
	static volatile int32_t t2 = -1356992;

    t2 = (x177<<((x178/x179)|x180));

    if (t2 != 67106816) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x381 = 9U;
	uint16_t x382 = 78U;
	static int8_t x383 = 27;
	int16_t x384 = 5;

    t3 = (x381<<((x382/x383)|x384));

    if (t3 != 1152) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x393 = 0;
	int64_t x394 = -1LL;
	int16_t x395 = INT16_MIN;
	volatile uint16_t x396 = 5U;
	volatile int32_t t4 = -1012;

    t4 = (x393<<((x394/x395)|x396));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x401 = UINT8_MAX;
	uint8_t x402 = 1U;
	int16_t x403 = INT16_MAX;
	volatile uint16_t x404 = 0U;
	volatile int32_t t5 = 800640468;

    t5 = (x401<<((x402/x403)|x404));

    if (t5 != 255) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

