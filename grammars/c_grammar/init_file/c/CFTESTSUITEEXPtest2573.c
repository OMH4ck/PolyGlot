
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

volatile uint64_t t0 = 83118090826854LLU;
int32_t x325 = INT32_MAX;
static int16_t x593 = 11;
volatile int64_t t4 = 57862115856867083LL;
uint16_t x823 = 0U;
volatile int16_t x916 = -1;
static int16_t x1128 = 70;
uint64_t t7 = 15688575475937LLU;
static volatile int8_t x1328 = -3;
static int32_t x1551 = -30;
static uint8_t x1552 = 0U;


void f0(void) {
    	uint64_t x101 = 642210838395165845LLU;
	uint64_t x102 = UINT64_MAX;
	static volatile uint32_t x103 = 113U;
	int8_t x104 = INT8_MIN;

    t0 = (x101>>((x102^x103)-x104));

    if (t0 != 39197438866892LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x326 = UINT32_MAX;
	int8_t x327 = -1;
	uint8_t x328 = 0U;
	int32_t t1 = INT32_MAX;

    t1 = (x325>>((x326^x327)-x328));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MAX;
	volatile int16_t x596 = -1;
	static int32_t t2 = -17;

    t2 = (x593>>((x594^x595)-x596));

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x685 = 239;
	static int16_t x686 = -1;
	static volatile int8_t x687 = -1;
	int8_t x688 = -8;
	volatile int32_t t3 = -28861;

    t3 = (x685>>((x686^x687)-x688));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x769 = INT64_MAX;
	uint64_t x770 = UINT64_MAX;
	int32_t x771 = -1;
	int8_t x772 = -3;

    t4 = (x769>>((x770^x771)-x772));

    if (t4 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	int8_t x822 = 2;
	uint32_t x824 = UINT32_MAX;
	volatile int32_t t5 = -88848430;

    t5 = (x821>>((x822^x823)-x824));

    if (t5 != 31) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x913 = UINT32_MAX;
	volatile int8_t x914 = INT8_MIN;
	static int8_t x915 = INT8_MIN;
	uint32_t t6 = 2912U;

    t6 = (x913>>((x914^x915)-x916));

    if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x1125 = 34480176165832LLU;
	volatile uint16_t x1126 = 37U;
	static int8_t x1127 = INT8_MAX;

    t7 = (x1125>>((x1126^x1127)-x1128));

    if (t7 != 32882858LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x1281 = 0;
	int64_t x1282 = INT64_MIN;
	int64_t x1283 = INT64_MAX;
	int8_t x1284 = -1;
	volatile int32_t t8 = -1378227;

    t8 = (x1281>>((x1282^x1283)-x1284));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x1325 = 29U;
	uint16_t x1326 = 1U;
	volatile int16_t x1327 = 0;
	volatile int32_t t9 = 14175324;

    t9 = (x1325>>((x1326^x1327)-x1328));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x1337 = 3U;
	static int64_t x1338 = INT64_MAX;
	int64_t x1339 = INT64_MAX;
	int32_t x1340 = -1;
	volatile int32_t t10 = 116445;

    t10 = (x1337>>((x1338^x1339)-x1340));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1549 = 1;
	volatile int8_t x1550 = -1;
	static volatile int32_t t11 = -296128;

    t11 = (x1549>>((x1550^x1551)-x1552));

    if (t11 != 0) { NG(); } else { ; }
	
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


    return 0;
}

