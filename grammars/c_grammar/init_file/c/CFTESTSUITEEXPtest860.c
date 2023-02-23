
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

int8_t x23 = -1;
static int8_t x70 = 0;
volatile uint16_t x72 = 2U;
volatile uint16_t x401 = 13U;
int32_t t2 = 8;
uint16_t x753 = 315U;
int64_t x756 = 3LL;
volatile int32_t t3 = 44830467;
uint8_t x861 = UINT8_MAX;
int16_t x862 = 1;
volatile int16_t x1098 = -8731;
static uint64_t x1149 = 11423157843LLU;
int64_t x1151 = -1LL;
static int8_t x1152 = 0;
uint8_t x1392 = 2U;
static volatile int32_t t10 = -2015414;
static volatile uint8_t x1580 = 0U;
uint8_t x1990 = 1U;
uint32_t x2117 = UINT32_MAX;


void f0(void) {
    	uint8_t x21 = 2U;
	volatile int32_t x22 = INT32_MAX;
	static volatile uint8_t x24 = 22U;
	volatile int32_t t0 = 189228;

    t0 = (x21<<((x22%x23)<<x24));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x69 = 749224320504416413LLU;
	static int16_t x71 = INT16_MIN;
	static uint64_t t1 = 1043144224871LLU;

    t1 = (x69<<((x70%x71)<<x72));

    if (t1 != 749224320504416413LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x402 = 0U;
	volatile uint32_t x403 = UINT32_MAX;
	uint8_t x404 = 1U;

    t2 = (x401<<((x402%x403)<<x404));

    if (t2 != 13) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x754 = 177U;
	int64_t x755 = -1LL;

    t3 = (x753<<((x754%x755)<<x756));

    if (t3 != 315) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x863 = INT32_MIN;
	volatile uint16_t x864 = 0U;
	int32_t t4 = 51821;

    t4 = (x861<<((x862%x863)<<x864));

    if (t4 != 510) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x981 = INT8_MAX;
	int32_t x982 = INT32_MAX;
	int16_t x983 = -1;
	int32_t x984 = 28;
	static volatile int32_t t5 = 0;

    t5 = (x981<<((x982%x983)<<x984));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x1097 = 89U;
	int64_t x1099 = -1LL;
	uint16_t x1100 = 7U;
	volatile int32_t t6 = -98;

    t6 = (x1097<<((x1098%x1099)<<x1100));

    if (t6 != 89) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x1150 = 317579084U;
	uint64_t t7 = 19LLU;

    t7 = (x1149<<((x1150%x1151)<<x1152));

    if (t7 != 11423157843LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1169 = 1;
	int64_t x1170 = INT64_MIN;
	int32_t x1171 = INT32_MIN;
	int16_t x1172 = 14;
	volatile int32_t t8 = -2;

    t8 = (x1169<<((x1170%x1171)<<x1172));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x1273 = 14U;
	int8_t x1274 = -1;
	int16_t x1275 = 1;
	uint8_t x1276 = 14U;
	static int32_t t9 = 45;

    t9 = (x1273<<((x1274%x1275)<<x1276));

    if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x1389 = INT16_MAX;
	static uint16_t x1390 = UINT16_MAX;
	volatile int32_t x1391 = 4;

    t10 = (x1389<<((x1390%x1391)<<x1392));

    if (t10 != 134213632) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1577 = 2U;
	uint16_t x1578 = 3U;
	uint8_t x1579 = 53U;
	volatile int32_t t11 = 187455918;

    t11 = (x1577<<((x1578%x1579)<<x1580));

    if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x1689 = 838U;
	int16_t x1690 = -11824;
	int8_t x1691 = -1;
	uint16_t x1692 = 1U;
	volatile int32_t t12 = 6193588;

    t12 = (x1689<<((x1690%x1691)<<x1692));

    if (t12 != 838) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x1813 = 0LLU;
	uint16_t x1814 = 17U;
	uint8_t x1815 = UINT8_MAX;
	static uint32_t x1816 = 0U;
	volatile uint64_t t13 = 16884226263101450LLU;

    t13 = (x1813<<((x1814%x1815)<<x1816));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x1989 = UINT64_MAX;
	uint32_t x1991 = 53911577U;
	uint8_t x1992 = 5U;
	uint64_t t14 = 110269905725686LLU;

    t14 = (x1989<<((x1990%x1991)<<x1992));

    if (t14 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x2118 = UINT32_MAX;
	int64_t x2119 = -1LL;
	volatile int8_t x2120 = 1;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = (x2117<<((x2118%x2119)<<x2120));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
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

