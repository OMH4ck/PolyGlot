
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

static int16_t x180 = INT16_MIN;
volatile uint8_t x603 = 1U;
static volatile int32_t t6 = -1;
int32_t x854 = -451415;
volatile int32_t x855 = INT32_MIN;
static volatile int32_t t7 = 639930;
int8_t x903 = 0;
uint16_t x1002 = 15U;
uint8_t x1004 = 1U;
uint32_t x1018 = 23U;
volatile int32_t t10 = 182;
uint8_t x1300 = 15U;
volatile int32_t t14 = 1041543;
int16_t x1486 = INT16_MAX;
static uint64_t t15 = 2834097547LLU;
int8_t x1589 = 17;
volatile int64_t x1591 = INT64_MIN;
uint64_t t17 = 3833211LLU;
static volatile uint32_t x2062 = 30U;
static uint8_t x2064 = 1U;
volatile int32_t t20 = 44;
volatile int16_t x2214 = 30;
int8_t x2215 = -1;


void f0(void) {
    	uint8_t x177 = UINT8_MAX;
	static int8_t x178 = -1;
	int16_t x179 = INT16_MIN;
	volatile int32_t t0 = 22083874;

    t0 = (x177<<((x178&x179)^x180));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x185 = 93U;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 51320993U;
	int16_t x188 = 8;
	volatile int32_t t1 = 7005312;

    t1 = (x185<<((x186&x187)^x188));

    if (t1 != 23808) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x293 = 517511532U;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MIN;
	int8_t x296 = 7;
	volatile uint32_t t2 = 26U;

    t2 = (x293<<((x294&x295)^x296));

    if (t2 != 1816966656U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x409 = 484495561138321LLU;
	static int16_t x410 = INT16_MIN;
	int8_t x411 = 1;
	int16_t x412 = 2;
	uint64_t t3 = 19LLU;

    t3 = (x409<<((x410&x411)^x412));

    if (t3 != 1937982244553284LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x549 = 1U;
	uint16_t x550 = UINT16_MAX;
	volatile int8_t x551 = 0;
	uint8_t x552 = 9U;
	uint32_t t4 = 0U;

    t4 = (x549<<((x550&x551)^x552));

    if (t4 != 512U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x601 = UINT16_MAX;
	static int64_t x602 = -1LL;
	uint16_t x604 = 7U;
	volatile int32_t t5 = 52;

    t5 = (x601<<((x602&x603)^x604));

    if (t5 != 4194240) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x753 = 779U;
	int32_t x754 = -19187;
	static int32_t x755 = INT32_MIN;
	int32_t x756 = INT32_MIN;

    t6 = (x753<<((x754&x755)^x756));

    if (t6 != 779) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x853 = 0U;
	int32_t x856 = INT32_MIN;

    t7 = (x853<<((x854&x855)^x856));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x901 = INT8_MAX;
	uint16_t x902 = 8U;
	uint16_t x904 = 0U;
	volatile int32_t t8 = -131;

    t8 = (x901<<((x902&x903)^x904));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1001 = 417025970LLU;
	volatile uint64_t x1003 = 411421944LLU;
	volatile uint64_t t9 = 5LLU;

    t9 = (x1001<<((x1002&x1003)^x1004));

    if (t9 != 213517296640LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x1017 = 8853U;
	static volatile int32_t x1019 = 0;
	int8_t x1020 = 0;

    t10 = (x1017<<((x1018&x1019)^x1020));

    if (t10 != 8853) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x1089 = 19U;
	uint32_t x1090 = UINT32_MAX;
	int32_t x1091 = -1;
	static int16_t x1092 = -1;
	volatile int32_t t11 = 1696;

    t11 = (x1089<<((x1090&x1091)^x1092));

    if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1201 = 0U;
	uint32_t x1202 = 24U;
	int8_t x1203 = INT8_MIN;
	volatile uint16_t x1204 = 13U;
	volatile int32_t t12 = -1;

    t12 = (x1201<<((x1202&x1203)^x1204));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1261 = UINT8_MAX;
	uint64_t x1262 = UINT64_MAX;
	uint64_t x1263 = UINT64_MAX;
	static int16_t x1264 = -1;
	volatile int32_t t13 = 1;

    t13 = (x1261<<((x1262&x1263)^x1264));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x1297 = INT16_MAX;
	int32_t x1298 = 49735;
	int32_t x1299 = INT32_MIN;

    t14 = (x1297<<((x1298&x1299)^x1300));

    if (t14 != 1073709056) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x1485 = UINT64_MAX;
	uint16_t x1487 = 0U;
	int8_t x1488 = 2;

    t15 = (x1485<<((x1486&x1487)^x1488));

    if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1590 = INT8_MIN;
	int64_t x1592 = INT64_MIN;
	volatile int32_t t16 = -3068;

    t16 = (x1589<<((x1590&x1591)^x1592));

    if (t16 != 17) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1593 = 156082LLU;
	int16_t x1594 = -1;
	int64_t x1595 = INT64_MIN;
	static int64_t x1596 = INT64_MIN;

    t17 = (x1593<<((x1594&x1595)^x1596));

    if (t17 != 156082LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x1785 = 447064;
	int8_t x1786 = -5;
	static uint8_t x1787 = 5U;
	static int8_t x1788 = 6;
	int32_t t18 = 20604761;

    t18 = (x1785<<((x1786&x1787)^x1788));

    if (t18 != 57224192) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1997 = 15839370LLU;
	static volatile uint64_t x1998 = 32781430841271LLU;
	int64_t x1999 = INT64_MIN;
	uint16_t x2000 = 1U;
	volatile uint64_t t19 = 70786544364770984LLU;

    t19 = (x1997<<((x1998&x1999)^x2000));

    if (t19 != 31678740LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x2061 = INT16_MAX;
	volatile uint32_t x2063 = 257093U;

    t20 = (x2061<<((x2062&x2063)^x2064));

    if (t20 != 1048544) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2213 = UINT64_MAX;
	int16_t x2216 = 6;
	uint64_t t21 = 30LLU;

    t21 = (x2213<<((x2214&x2215)^x2216));

    if (t21 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x2261 = 14948999;
	static uint16_t x2262 = 4U;
	int32_t x2263 = INT32_MIN;
	uint8_t x2264 = 1U;
	int32_t t22 = 17109214;

    t22 = (x2261<<((x2262&x2263)^x2264));

    if (t22 != 29897998) { NG(); } else { ; }
	
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
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();


    return 0;
}

