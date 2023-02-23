
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

uint8_t x25 = 104U;
int32_t t0 = -15900;
uint64_t x57 = 17272596695910896LLU;
int8_t x59 = INT8_MIN;
static uint32_t x77 = UINT32_MAX;
int16_t x79 = -1;
volatile int64_t x110 = -31596056LL;
uint16_t x133 = 189U;
uint8_t x136 = 6U;
uint16_t x205 = 1U;
uint16_t x206 = 31U;
uint8_t x208 = 0U;
uint32_t x259 = 37505U;
volatile int32_t t8 = 2050371;
volatile uint64_t x289 = 1769557763LLU;
static int64_t x414 = INT64_MIN;
uint16_t x416 = 15U;
int32_t x739 = INT32_MIN;


void f0(void) {
    	volatile int16_t x26 = INT16_MAX;
	uint8_t x27 = 0U;
	static int8_t x28 = 2;

    t0 = (x25<<((x26>x27)^x28));

    if (t0 != 832) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x58 = INT32_MAX;
	static uint16_t x60 = 1U;
	static volatile uint64_t t1 = 423958403154175LLU;

    t1 = (x57<<((x58>x59)^x60));

    if (t1 != 17272596695910896LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x78 = INT32_MAX;
	static uint8_t x80 = 13U;
	static volatile uint32_t t2 = 2523U;

    t2 = (x77<<((x78>x79)^x80));

    if (t2 != 4294963200U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x109 = 786803LLU;
	int8_t x111 = -27;
	int8_t x112 = 26;
	uint64_t t3 = 838657073LLU;

    t3 = (x109<<((x110>x111)^x112));

    if (t3 != 52801455521792LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x134 = 1U;
	static volatile int16_t x135 = 6532;
	int32_t t4 = 32379439;

    t4 = (x133<<((x134>x135)^x136));

    if (t4 != 12096) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x207 = -1;
	int32_t t5 = 34474;

    t5 = (x205<<((x206>x207)^x208));

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int8_t x247 = 23;
	uint8_t x248 = 1U;
	static volatile uint64_t t6 = 631074292585867442LLU;

    t6 = (x245<<((x246>x247)^x248));

    if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x257 = 3;
	uint8_t x258 = UINT8_MAX;
	int32_t x260 = 0;
	int32_t t7 = 244805;

    t7 = (x257<<((x258>x259)^x260));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x281 = 2;
	int32_t x282 = INT32_MAX;
	uint64_t x283 = 6980618815588LLU;
	static int16_t x284 = 0;

    t8 = (x281<<((x282>x283)^x284));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x290 = -1;
	static uint16_t x291 = 29527U;
	volatile uint16_t x292 = 3U;
	static uint64_t t9 = 786512380165333LLU;

    t9 = (x289<<((x290>x291)^x292));

    if (t9 != 14156462104LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x293 = UINT8_MAX;
	static volatile int64_t x294 = -8110363082543LL;
	uint64_t x295 = 26455483LLU;
	uint8_t x296 = 1U;
	int32_t t10 = 227431021;

    t10 = (x293<<((x294>x295)^x296));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x365 = UINT64_MAX;
	uint32_t x366 = 172344U;
	static uint16_t x367 = 24263U;
	uint16_t x368 = 3U;
	static volatile uint64_t t11 = 79LLU;

    t11 = (x365<<((x366>x367)^x368));

    if (t11 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x413 = 366U;
	uint32_t x415 = 23795617U;
	volatile uint32_t t12 = 119U;

    t12 = (x413<<((x414>x415)^x416));

    if (t12 != 11993088U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x513 = UINT64_MAX;
	static uint8_t x514 = UINT8_MAX;
	static uint16_t x515 = UINT16_MAX;
	uint16_t x516 = 10U;
	volatile uint64_t t13 = 44934LLU;

    t13 = (x513<<((x514>x515)^x516));

    if (t13 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x553 = 3U;
	int16_t x554 = INT16_MIN;
	uint32_t x555 = 182077429U;
	volatile int8_t x556 = 2;
	int32_t t14 = 125616;

    t14 = (x553<<((x554>x555)^x556));

    if (t14 != 24) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x725 = INT8_MAX;
	volatile int16_t x726 = 560;
	volatile int64_t x727 = -35420361384634LL;
	uint8_t x728 = 15U;
	volatile int32_t t15 = 683;

    t15 = (x725<<((x726>x727)^x728));

    if (t15 != 2080768) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x737 = INT32_MAX;
	int16_t x738 = -1;
	int8_t x740 = 1;
	volatile int32_t t16 = INT32_MAX;

    t16 = (x737<<((x738>x739)^x740));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
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
    f13();
    f14();
    f15();
    f16();


    return 0;
}

