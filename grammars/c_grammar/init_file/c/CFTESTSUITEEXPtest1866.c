
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

int64_t x69 = -32182802042LL;
volatile int32_t x366 = 1;
uint8_t x368 = 1U;
static int64_t x629 = INT64_MIN;
int64_t x630 = INT64_MIN;
static int32_t x631 = -3;
volatile uint8_t x769 = 25U;
uint64_t x868 = 1LLU;
int32_t x961 = INT32_MAX;
int64_t x1221 = 3734612LL;
uint32_t x1223 = 1U;
uint8_t x1424 = 1U;
volatile int8_t x1429 = INT8_MIN;
int16_t x1477 = -1;


void f0(void) {
    	int8_t x70 = -1;
	uint32_t x71 = 13237U;
	uint8_t x72 = 0U;
	volatile int64_t t0 = -59605338165LL;

    t0 = (x69/((x70<=x71)==x72));

    if (t0 != -32182802042LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x365 = INT16_MAX;
	uint16_t x367 = 117U;
	int32_t t1 = -51712695;

    t1 = (x365/((x366<=x367)==x368));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x632 = 1U;
	volatile int64_t t2 = INT64_MIN;

    t2 = (x629/((x630<=x631)==x632));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x701 = INT32_MIN;
	volatile int64_t x702 = INT64_MIN;
	volatile int64_t x703 = INT64_MAX;
	int16_t x704 = 1;
	int32_t t3 = INT32_MIN;

    t3 = (x701/((x702<=x703)==x704));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x770 = 864000318U;
	static volatile int32_t x771 = INT32_MAX;
	uint64_t x772 = 1LLU;
	int32_t t4 = 0;

    t4 = (x769/((x770<=x771)==x772));

    if (t4 != 25) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x865 = INT32_MAX;
	int8_t x866 = -1;
	static int8_t x867 = -1;
	volatile int32_t t5 = INT32_MAX;

    t5 = (x865/((x866<=x867)==x868));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x905 = INT16_MIN;
	static int32_t x906 = INT32_MAX;
	int64_t x907 = INT64_MIN;
	static uint8_t x908 = 0U;
	volatile int32_t t6 = -1375;

    t6 = (x905/((x906<=x907)==x908));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x962 = -1;
	uint16_t x963 = 741U;
	static int16_t x964 = 1;
	volatile int32_t t7 = INT32_MAX;

    t7 = (x961/((x962<=x963)==x964));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x1169 = -783;
	int8_t x1170 = 1;
	int32_t x1171 = 4417429;
	int32_t x1172 = 1;
	static volatile int32_t t8 = -1785;

    t8 = (x1169/((x1170<=x1171)==x1172));

    if (t8 != -783) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1222 = INT32_MAX;
	int8_t x1224 = 0;
	int64_t t9 = 11035971923904545LL;

    t9 = (x1221/((x1222<=x1223)==x1224));

    if (t9 != 3734612LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1421 = UINT64_MAX;
	uint16_t x1422 = 1687U;
	static volatile uint32_t x1423 = UINT32_MAX;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = (x1421/((x1422<=x1423)==x1424));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1430 = INT64_MIN;
	int16_t x1431 = -16070;
	volatile uint32_t x1432 = 1U;
	volatile int32_t t11 = -1086932;

    t11 = (x1429/((x1430<=x1431)==x1432));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1478 = -128154285;
	volatile uint16_t x1479 = 58U;
	static uint8_t x1480 = 1U;
	volatile int32_t t12 = -17838;

    t12 = (x1477/((x1478<=x1479)==x1480));

    if (t12 != -1) { NG(); } else { ; }
	
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

