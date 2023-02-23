
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

int64_t x158 = -1961362729LL;
int64_t x160 = 6LL;
volatile uint64_t x537 = 2981335897923555LLU;
volatile int8_t x567 = -23;
int16_t x655 = -1;
volatile int64_t x1165 = 174332LL;
static uint64_t x1173 = 3LLU;
int8_t x1177 = INT8_MAX;
uint8_t x1180 = 3U;
int32_t t10 = 0;


void f0(void) {
    	volatile int32_t x157 = 859542;
	int32_t x159 = INT32_MAX;
	static int32_t t0 = 1;

    t0 = (x157<<((x158|x159)+x160));

    if (t0 != 27505344) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x538 = 12U;
	int32_t x539 = -1;
	int16_t x540 = 2;
	uint64_t t1 = 0LLU;

    t1 = (x537<<((x538|x539)+x540));

    if (t1 != 5962671795847110LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x565 = 8636U;
	int8_t x566 = -1;
	uint8_t x568 = 5U;
	static volatile int32_t t2 = -1;

    t2 = (x565<<((x566|x567)+x568));

    if (t2 != 138176) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x577 = 8195383017100465LLU;
	volatile int16_t x578 = -1;
	int8_t x579 = INT8_MAX;
	uint16_t x580 = 7U;
	uint64_t t3 = 928707933125047LLU;

    t3 = (x577<<((x578|x579)+x580));

    if (t3 != 524504513094429760LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x581 = INT16_MAX;
	int16_t x582 = INT16_MIN;
	uint16_t x583 = UINT16_MAX;
	uint8_t x584 = 3U;
	int32_t t4 = -1;

    t4 = (x581<<((x582|x583)+x584));

    if (t4 != 131068) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x653 = UINT64_MAX;
	int8_t x654 = -1;
	static uint16_t x656 = 1U;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = (x653<<((x654|x655)+x656));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x737 = 116580635087LLU;
	volatile int64_t x738 = INT64_MAX;
	int64_t x739 = INT64_MIN;
	uint16_t x740 = 54U;
	volatile uint64_t t6 = 102410724329548016LLU;

    t6 = (x737<<((x738|x739)+x740));

    if (t6 != 4170333254945079296LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x789 = INT8_MAX;
	uint32_t x790 = 605U;
	int8_t x791 = -1;
	uint8_t x792 = 6U;
	int32_t t7 = 1;

    t7 = (x789<<((x790|x791)+x792));

    if (t7 != 4064) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1166 = -1;
	static volatile int16_t x1167 = INT16_MIN;
	volatile int16_t x1168 = 15;
	int64_t t8 = 386984LL;

    t8 = (x1165<<((x1166|x1167)+x1168));

    if (t8 != 2856255488LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x1174 = 13;
	static int16_t x1175 = 12;
	int16_t x1176 = -1;
	static volatile uint64_t t9 = 126306912805664844LLU;

    t9 = (x1173<<((x1174|x1175)+x1176));

    if (t9 != 12288LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1178 = UINT32_MAX;
	int16_t x1179 = INT16_MAX;

    t10 = (x1177<<((x1178|x1179)+x1180));

    if (t10 != 508) { NG(); } else { ; }
	
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

