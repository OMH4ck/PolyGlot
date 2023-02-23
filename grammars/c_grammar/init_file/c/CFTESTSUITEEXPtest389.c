
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

int8_t x38 = -1;
int8_t x296 = 3;
uint16_t x474 = 0U;
static int16_t x656 = INT16_MIN;
int64_t x666 = INT64_MIN;
static uint64_t x667 = UINT64_MAX;
static int32_t t11 = -20557092;
static int8_t x906 = 3;
volatile int64_t t12 = 0LL;


void f0(void) {
    	uint16_t x37 = 5555U;
	int8_t x39 = 18;
	int64_t x40 = -1LL;
	volatile int32_t t0 = -49;

    t0 = (x37>>((x38-x39)^x40));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x65 = 6946LLU;
	static int16_t x66 = INT16_MIN;
	int8_t x67 = -6;
	int16_t x68 = INT16_MIN;
	static uint64_t t1 = 7108281005339918LLU;

    t1 = (x65>>((x66-x67)^x68));

    if (t1 != 108LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x89 = INT32_MAX;
	static int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	static int32_t t2 = INT32_MAX;

    t2 = (x89>>((x90-x91)^x92));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x177 = INT32_MAX;
	uint8_t x178 = 5U;
	int16_t x179 = -1;
	static uint16_t x180 = 6U;
	int32_t t3 = INT32_MAX;

    t3 = (x177>>((x178-x179)^x180));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x229 = 15U;
	int16_t x230 = 0;
	int16_t x231 = -1;
	volatile uint8_t x232 = 0U;
	int32_t t4 = -39;

    t4 = (x229>>((x230-x231)^x232));

    if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x237 = 16U;
	volatile uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 0U;
	volatile int8_t x240 = -14;
	volatile int32_t t5 = -1149;

    t5 = (x237>>((x238-x239)^x240));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x293 = 6864431U;
	int16_t x294 = -1;
	static int8_t x295 = -1;
	static volatile uint32_t t6 = 1U;

    t6 = (x293>>((x294-x295)^x296));

    if (t6 != 858053U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MAX;
	int32_t x407 = INT32_MAX;
	uint8_t x408 = 1U;
	uint32_t t7 = 116U;

    t7 = (x405>>((x406-x407)^x408));

    if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x473 = 111U;
	uint64_t x475 = UINT64_MAX;
	volatile uint16_t x476 = 31U;
	static volatile uint32_t t8 = 483578687U;

    t8 = (x473>>((x474-x475)^x476));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x653 = 18461429862021904LLU;
	int16_t x654 = INT16_MIN;
	uint64_t x655 = UINT64_MAX;
	volatile uint64_t t9 = 79276008998254460LLU;

    t9 = (x653>>((x654-x655)^x656));

    if (t9 != 9230714931010952LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x665 = 30;
	int64_t x668 = INT64_MIN;
	int32_t t10 = -13179625;

    t10 = (x665>>((x666-x667)^x668));

    if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x713 = INT16_MAX;
	uint8_t x714 = 6U;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = 1;

    t11 = (x713>>((x714-x715)^x716));

    if (t11 != 511) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x905 = 0LL;
	int8_t x907 = -1;
	static volatile uint16_t x908 = 20U;

    t12 = (x905>>((x906-x907)^x908));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();


    return 0;
}

