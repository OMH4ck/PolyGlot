
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

static volatile uint32_t t0 = 6302U;
int8_t x187 = INT8_MIN;
uint16_t x262 = 0U;
uint64_t x397 = 20720701386710LLU;
int8_t x400 = 0;
volatile int16_t x581 = 3;
int32_t x602 = INT32_MIN;
int16_t x604 = 0;
uint8_t x666 = 6U;
static volatile uint16_t x1069 = 6922U;
uint8_t x1142 = 4U;
static volatile uint8_t x1144 = 15U;
uint64_t t9 = 212780886115915073LLU;
volatile uint64_t t11 = 123LLU;
uint64_t x1577 = UINT64_MAX;


void f0(void) {
    	uint32_t x137 = 60441864U;
	uint8_t x138 = 1U;
	static uint32_t x139 = 477U;
	uint8_t x140 = 0U;

    t0 = (x137<<((x138&x139)|x140));

    if (t0 != 120883728U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x185 = 60;
	volatile uint8_t x186 = 14U;
	volatile uint8_t x188 = 1U;
	int32_t t1 = 384;

    t1 = (x185<<((x186&x187)|x188));

    if (t1 != 120) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x261 = 50U;
	uint8_t x263 = 15U;
	uint8_t x264 = 7U;
	int32_t t2 = -58838713;

    t2 = (x261<<((x262&x263)|x264));

    if (t2 != 6400) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x398 = 2721LLU;
	int64_t x399 = INT64_MIN;
	volatile uint64_t t3 = 1LLU;

    t3 = (x397<<((x398&x399)|x400));

    if (t3 != 20720701386710LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x582 = 0;
	int8_t x583 = 7;
	uint8_t x584 = 8U;
	volatile int32_t t4 = 819200379;

    t4 = (x581<<((x582&x583)|x584));

    if (t4 != 768) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x601 = 1U;
	static uint32_t x603 = 319306909U;
	int32_t t5 = 3;

    t5 = (x601<<((x602&x603)|x604));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x665 = 14;
	uint64_t x667 = UINT64_MAX;
	static uint16_t x668 = 0U;
	int32_t t6 = -347357;

    t6 = (x665<<((x666&x667)|x668));

    if (t6 != 896) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x1070 = 864LL;
	static volatile uint8_t x1071 = 4U;
	static volatile int8_t x1072 = 1;
	static volatile int32_t t7 = 850499;

    t7 = (x1069<<((x1070&x1071)|x1072));

    if (t7 != 13844) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x1141 = 11U;
	static int16_t x1143 = INT16_MAX;
	int32_t t8 = -52702720;

    t8 = (x1141<<((x1142&x1143)|x1144));

    if (t8 != 360448) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1169 = 10900LLU;
	int16_t x1170 = INT16_MAX;
	static volatile uint64_t x1171 = 1LLU;
	uint64_t x1172 = 22LLU;

    t9 = (x1169<<((x1170&x1171)|x1172));

    if (t9 != 91435827200LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x1413 = 1LLU;
	int64_t x1414 = INT64_MIN;
	uint32_t x1415 = 2688548U;
	uint8_t x1416 = 20U;
	volatile uint64_t t10 = 371LLU;

    t10 = (x1413<<((x1414&x1415)|x1416));

    if (t10 != 1048576LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x1449 = 3716LLU;
	volatile uint8_t x1450 = 7U;
	static int8_t x1451 = INT8_MIN;
	int32_t x1452 = 33;

    t11 = (x1449<<((x1450&x1451)|x1452));

    if (t11 != 31920196943872LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1578 = INT8_MIN;
	static int8_t x1579 = INT8_MAX;
	static uint8_t x1580 = 16U;
	volatile uint64_t t12 = 797081246LLU;

    t12 = (x1577<<((x1578&x1579)|x1580));

    if (t12 != 18446744073709486080LLU) { NG(); } else { ; }
	
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

