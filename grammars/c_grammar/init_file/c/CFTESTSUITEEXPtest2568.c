
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

volatile uint32_t x5 = UINT32_MAX;
volatile int8_t x7 = INT8_MIN;
static uint64_t x8 = UINT64_MAX;
static int32_t x359 = INT32_MIN;
static int16_t x387 = -1;
volatile int32_t t3 = 196;
int16_t x421 = 211;
volatile uint32_t x423 = UINT32_MAX;
int8_t x424 = -1;


void f0(void) {
    	int8_t x6 = INT8_MIN;
	volatile uint32_t t0 = 6U;

    t0 = (x5<<((x6^x7)-x8));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x13 = INT16_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	volatile int8_t x15 = -1;
	int8_t x16 = -1;
	static volatile int32_t t1 = 131;

    t1 = (x13<<((x14^x15)-x16));

    if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x357 = 0;
	int8_t x358 = -1;
	int32_t x360 = INT32_MAX;
	volatile int32_t t2 = -3376;

    t2 = (x357<<((x358^x359)-x360));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x385 = 11;
	int32_t x386 = -1;
	int64_t x388 = -1LL;

    t3 = (x385<<((x386^x387)-x388));

    if (t3 != 22) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x422 = -1;
	static volatile int32_t t4 = -42147280;

    t4 = (x421<<((x422^x423)-x424));

    if (t4 != 422) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

