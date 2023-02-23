
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

static uint32_t x326 = UINT32_MAX;
volatile int16_t x327 = 1;
volatile int32_t t2 = -3687;
int32_t x709 = INT32_MAX;
static int8_t x712 = -1;
static int32_t t3 = INT32_MAX;
volatile int64_t x784 = 0LL;
static volatile int64_t t4 = 1LL;
int16_t x1029 = INT16_MAX;
int8_t x1095 = -1;
static int16_t x1443 = -1;
volatile int64_t x1444 = -10LL;
volatile int8_t x1619 = -1;
int64_t x1620 = -1LL;
volatile int32_t t11 = 462630650;
uint32_t x1895 = UINT32_MAX;
int32_t x1896 = INT32_MIN;
int32_t t12 = 280213433;


void f0(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MIN;
	static uint8_t x51 = 1U;
	uint32_t x52 = 0U;
	static volatile int32_t t0 = -5;

    t0 = (x49>>((x50+x51)*x52));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x69 = 9U;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int8_t x72 = 0;
	static int32_t t1 = 1308868;

    t1 = (x69>>((x70+x71)*x72));

    if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x325 = 81U;
	static int8_t x328 = INT8_MIN;

    t2 = (x325>>((x326+x327)*x328));

    if (t2 != 81) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x710 = UINT32_MAX;
	uint8_t x711 = 1U;

    t3 = (x709>>((x710+x711)*x712));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x781 = 3LL;
	volatile int32_t x782 = -1;
	int16_t x783 = INT16_MAX;

    t4 = (x781>>((x782+x783)*x784));

    if (t4 != 3LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x1030 = INT8_MIN;
	static volatile int16_t x1031 = 128;
	uint16_t x1032 = UINT16_MAX;
	static int32_t t5 = -116932615;

    t5 = (x1029>>((x1030+x1031)*x1032));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x1093 = 17409212099324LL;
	int32_t x1094 = -1;
	int64_t x1096 = -1LL;
	static int64_t t6 = 14042LL;

    t6 = (x1093>>((x1094+x1095)*x1096));

    if (t6 != 4352303024831LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1441 = INT32_MAX;
	int64_t x1442 = -1LL;
	int32_t t7 = 833497;

    t7 = (x1441>>((x1442+x1443)*x1444));

    if (t7 != 2047) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x1593 = UINT16_MAX;
	static uint16_t x1594 = 1156U;
	int8_t x1595 = INT8_MIN;
	int32_t x1596 = 0;
	int32_t t8 = 1000502;

    t8 = (x1593>>((x1594+x1595)*x1596));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x1617 = 6U;
	volatile uint64_t x1618 = UINT64_MAX;
	static volatile int32_t t9 = 27449005;

    t9 = (x1617>>((x1618+x1619)*x1620));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1653 = 1120545LLU;
	static uint8_t x1654 = 2U;
	uint32_t x1655 = UINT32_MAX;
	uint16_t x1656 = 1U;
	uint64_t t10 = 368LLU;

    t10 = (x1653>>((x1654+x1655)*x1656));

    if (t10 != 560272LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x1865 = 0U;
	int16_t x1866 = INT16_MAX;
	static int32_t x1867 = -1280502;
	int16_t x1868 = 0;

    t11 = (x1865>>((x1866+x1867)*x1868));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1893 = 184U;
	static int16_t x1894 = INT16_MAX;

    t12 = (x1893>>((x1894+x1895)*x1896));

    if (t12 != 184) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x2069 = 5658;
	volatile int32_t x2070 = -1;
	int16_t x2071 = -1;
	static int8_t x2072 = -1;
	static volatile int32_t t13 = 0;

    t13 = (x2069>>((x2070+x2071)*x2072));

    if (t13 != 1414) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x2113 = UINT8_MAX;
	int8_t x2114 = 1;
	volatile uint64_t x2115 = UINT64_MAX;
	int64_t x2116 = INT64_MIN;
	int32_t t14 = 9;

    t14 = (x2113>>((x2114+x2115)*x2116));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x2149 = 502U;
	int16_t x2150 = 0;
	int8_t x2151 = -1;
	int32_t x2152 = -1;
	volatile int32_t t15 = 11;

    t15 = (x2149>>((x2150+x2151)*x2152));

    if (t15 != 251) { NG(); } else { ; }
	
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


    return 0;
}

