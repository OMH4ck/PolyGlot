
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

int32_t x102 = INT32_MIN;
volatile int8_t x565 = -1;
uint64_t x567 = UINT64_MAX;
int32_t x876 = INT32_MIN;
int32_t x1166 = INT32_MIN;
static int32_t x1168 = INT32_MIN;
uint64_t x1589 = UINT64_MAX;
int16_t x1904 = -1;
static int32_t t10 = 10114934;


void f0(void) {
    	static volatile int16_t x101 = INT16_MIN;
	int16_t x103 = -2;
	int32_t x104 = INT32_MIN;
	static int32_t t0 = 1;

    t0 = (x101/((x102&x103)==x104));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x209 = -32LL;
	static volatile uint8_t x210 = UINT8_MAX;
	volatile int8_t x211 = INT8_MAX;
	int8_t x212 = INT8_MAX;
	static int64_t t1 = 3523856LL;

    t1 = (x209/((x210&x211)==x212));

    if (t1 != -32LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = 2473U;
	uint16_t x364 = 0U;
	int32_t t2 = INT32_MAX;

    t2 = (x361/((x362&x363)==x364));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x566 = -1;
	volatile int16_t x568 = -1;
	int32_t t3 = 51176634;

    t3 = (x565/((x566&x567)==x568));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x837 = INT32_MIN;
	uint32_t x838 = UINT32_MAX;
	uint8_t x839 = 0U;
	int16_t x840 = 0;
	volatile int32_t t4 = INT32_MIN;

    t4 = (x837/((x838&x839)==x840));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x873 = 10U;
	int32_t x874 = INT32_MIN;
	int16_t x875 = INT16_MIN;
	volatile int32_t t5 = 0;

    t5 = (x873/((x874&x875)==x876));

    if (t5 != 10) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x1165 = -1LL;
	int32_t x1167 = INT32_MIN;
	volatile int64_t t6 = 539856531964224LL;

    t6 = (x1165/((x1166&x1167)==x1168));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1389 = UINT16_MAX;
	int8_t x1390 = -1;
	static uint32_t x1391 = UINT32_MAX;
	int8_t x1392 = -1;
	volatile int32_t t7 = 7;

    t7 = (x1389/((x1390&x1391)==x1392));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x1590 = INT32_MIN;
	int32_t x1591 = -1;
	static int32_t x1592 = INT32_MIN;
	volatile uint64_t t8 = UINT64_MAX;

    t8 = (x1589/((x1590&x1591)==x1592));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x1713 = -1LL;
	int8_t x1714 = 0;
	volatile int16_t x1715 = INT16_MAX;
	int8_t x1716 = 0;
	int64_t t9 = -82990718LL;

    t9 = (x1713/((x1714&x1715)==x1716));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x1901 = 111U;
	int64_t x1902 = -1LL;
	int16_t x1903 = -1;

    t10 = (x1901/((x1902&x1903)==x1904));

    if (t10 != 111) { NG(); } else { ; }
	
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


    return 0;
}

