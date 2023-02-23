
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

int32_t t1 = -3749754;
uint32_t x450 = UINT32_MAX;
uint64_t x483 = 91219876320181229LLU;
volatile uint64_t t3 = 1905870825185503804LLU;
uint64_t t4 = UINT64_MAX;


void f0(void) {
    	static int32_t x161 = -6;
	static int16_t x162 = 2114;
	uint8_t x163 = 1U;
	int8_t x164 = 0;
	int32_t t0 = -1069776027;

    t0 = (x161/((x162/x163)>>x164));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x353 = 1;
	int32_t x354 = INT32_MIN;
	static int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 15U;

    t1 = (x353/((x354/x355)>>x356));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x449 = UINT8_MAX;
	int16_t x451 = 11456;
	int64_t x452 = 1LL;
	uint32_t t2 = 244U;

    t2 = (x449/((x450/x451)>>x452));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x481 = -1;
	int64_t x482 = INT64_MIN;
	volatile int16_t x484 = 3;

    t3 = (x481/((x482/x483)>>x484));

    if (t3 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	uint64_t x494 = UINT64_MAX;
	int16_t x495 = -1;
	uint16_t x496 = 0U;

    t4 = (x493/((x494/x495)>>x496));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

