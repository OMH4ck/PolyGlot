
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

int64_t x173 = 7LL;
uint32_t x176 = 5U;
volatile int64_t t0 = -2029266LL;
static int8_t x227 = 0;
uint64_t x530 = 0LLU;
uint16_t x1192 = 16U;


void f0(void) {
    	uint64_t x174 = 98058229238918120LLU;
	volatile int64_t x175 = INT64_MIN;

    t0 = (x173>>((x174*x175)|x176));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x225 = 1;
	int16_t x226 = -1;
	uint16_t x228 = 1U;
	volatile int32_t t1 = -2;

    t1 = (x225>>((x226*x227)|x228));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x529 = UINT64_MAX;
	int32_t x531 = -1;
	volatile uint16_t x532 = 28U;
	volatile uint64_t t2 = 641061LLU;

    t2 = (x529>>((x530*x531)|x532));

    if (t2 != 68719476735LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x801 = INT16_MAX;
	int8_t x802 = -5;
	int8_t x803 = -1;
	uint16_t x804 = 26U;
	int32_t t3 = -377387;

    t3 = (x801>>((x802*x803)|x804));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x1189 = 2051;
	int8_t x1190 = -1;
	int64_t x1191 = -1LL;
	volatile int32_t t4 = -108608798;

    t4 = (x1189>>((x1190*x1191)|x1192));

    if (t4 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

