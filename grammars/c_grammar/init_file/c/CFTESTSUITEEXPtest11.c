
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

volatile int8_t x123 = 1;
int8_t x241 = 0;
uint16_t x427 = 125U;
uint8_t x989 = UINT8_MAX;
int32_t x1213 = 25266;
int8_t x1214 = 27;


void f0(void) {
    	volatile uint32_t x121 = 32773U;
	static volatile int8_t x122 = 23;
	int8_t x124 = 1;
	uint32_t t0 = 405605350U;

    t0 = (x121>>((x122+x123)+x124));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x242 = -1;
	uint8_t x243 = 3U;
	uint8_t x244 = 27U;
	volatile int32_t t1 = -3610936;

    t1 = (x241>>((x242+x243)+x244));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x301 = INT16_MAX;
	uint64_t x302 = 11LLU;
	volatile uint8_t x303 = 5U;
	volatile uint8_t x304 = 7U;
	static volatile int32_t t2 = 457;

    t2 = (x301>>((x302+x303)+x304));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x385 = INT32_MAX;
	volatile int32_t x386 = 2;
	uint8_t x387 = 23U;
	int8_t x388 = -1;
	volatile int32_t t3 = -126304;

    t3 = (x385>>((x386+x387)+x388));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x425 = 861019508069LL;
	static uint8_t x426 = 15U;
	int8_t x428 = INT8_MIN;
	static volatile int64_t t4 = -17021344984119LL;

    t4 = (x425>>((x426+x427)+x428));

    if (t4 != 210209840LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x825 = 763U;
	uint8_t x826 = 6U;
	int16_t x827 = 2;
	volatile int8_t x828 = -1;
	volatile uint32_t t5 = 7U;

    t5 = (x825>>((x826+x827)+x828));

    if (t5 != 5U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x990 = 5U;
	int32_t x991 = 19;
	volatile int16_t x992 = 5;
	volatile int32_t t6 = 890;

    t6 = (x989>>((x990+x991)+x992));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1215 = -1;
	int64_t x1216 = -1LL;
	int32_t t7 = -46803782;

    t7 = (x1213>>((x1214+x1215)+x1216));

    if (t7 != 0) { NG(); } else { ; }
	
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


    return 0;
}

