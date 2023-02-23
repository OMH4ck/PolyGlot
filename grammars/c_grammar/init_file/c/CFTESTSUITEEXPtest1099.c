
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

volatile uint16_t x3 = 4U;
uint8_t x24 = UINT8_MAX;
volatile int32_t x217 = INT32_MIN;
static uint32_t x249 = 182677U;
uint8_t x251 = 2U;
int64_t x258 = 218643LL;
uint16_t x259 = 7U;
volatile int16_t x625 = -5636;
int32_t t8 = 298;
uint8_t x658 = 3U;
static int32_t x660 = -1;
int32_t t10 = 228447;
int8_t x746 = INT8_MAX;
uint32_t x777 = 136489451U;
int16_t x796 = 11554;
int32_t x831 = 1;
volatile int64_t x854 = 7300196267545LL;
int32_t t15 = -345100;
uint8_t x1011 = 1U;
int8_t x1012 = -1;
volatile int32_t t16 = -89474;
int64_t x1080 = -1LL;
int16_t x1086 = 2;
static uint8_t x1088 = 6U;


void f0(void) {
    	uint32_t x1 = 42U;
	static uint32_t x2 = 0U;
	uint64_t x4 = 1LLU;
	volatile int32_t t0 = -2126835;

    t0 = (x1!=((x2<<x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	volatile uint8_t x23 = 2U;
	volatile int32_t t1 = -212715236;

    t1 = (x21!=((x22<<x23)>x24));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x165 = -1;
	uint16_t x166 = 3U;
	uint8_t x167 = 18U;
	int8_t x168 = -1;
	static int32_t t2 = -1;

    t2 = (x165!=((x166<<x167)>x168));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x218 = 0;
	static volatile uint8_t x219 = 2U;
	static int64_t x220 = 36722086177LL;
	static int32_t t3 = -4;

    t3 = (x217!=((x218<<x219)>x220));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x250 = UINT8_MAX;
	volatile int64_t x252 = INT64_MIN;
	int32_t t4 = 1956;

    t4 = (x249!=((x250<<x251)>x252));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x257 = -1;
	int8_t x260 = INT8_MIN;
	volatile int32_t t5 = 3;

    t5 = (x257!=((x258<<x259)>x260));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x429 = 0U;
	uint8_t x430 = 100U;
	static uint16_t x431 = 18U;
	int64_t x432 = INT64_MIN;
	volatile int32_t t6 = -20819;

    t6 = (x429!=((x430<<x431)>x432));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	volatile int16_t x487 = 1;
	int64_t x488 = INT64_MAX;
	int32_t t7 = -68;

    t7 = (x485!=((x486<<x487)>x488));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x626 = 4U;
	int8_t x627 = 12;
	static uint64_t x628 = 4046537032LLU;

    t8 = (x625!=((x626<<x627)>x628));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x657 = -1;
	static volatile int64_t x659 = 1LL;
	int32_t t9 = 604;

    t9 = (x657!=((x658<<x659)>x660));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x673 = -1;
	volatile uint8_t x674 = UINT8_MAX;
	uint8_t x675 = 6U;
	int8_t x676 = INT8_MIN;

    t10 = (x673!=((x674<<x675)>x676));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x745 = -1;
	uint64_t x747 = 1LLU;
	static volatile int8_t x748 = -12;
	volatile int32_t t11 = -713560399;

    t11 = (x745!=((x746<<x747)>x748));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x778 = 49U;
	static uint16_t x779 = 10U;
	int32_t x780 = INT32_MIN;
	volatile int32_t t12 = 54564;

    t12 = (x777!=((x778<<x779)>x780));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x793 = 0LL;
	static volatile uint32_t x794 = 19168672U;
	volatile uint8_t x795 = 3U;
	int32_t t13 = 57405308;

    t13 = (x793!=((x794<<x795)>x796));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x829 = INT64_MIN;
	static uint64_t x830 = 17572532283573540LLU;
	static uint16_t x832 = 519U;
	int32_t t14 = -5041401;

    t14 = (x829!=((x830<<x831)>x832));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x853 = 32;
	int8_t x855 = 0;
	volatile int16_t x856 = 92;

    t15 = (x853!=((x854<<x855)>x856));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1009 = -1;
	volatile uint16_t x1010 = 1U;

    t16 = (x1009!=((x1010<<x1011)>x1012));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1021 = -1;
	static volatile uint64_t x1022 = 683LLU;
	int8_t x1023 = 59;
	int8_t x1024 = 49;
	int32_t t17 = 525074956;

    t17 = (x1021!=((x1022<<x1023)>x1024));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1077 = INT16_MIN;
	static uint8_t x1078 = UINT8_MAX;
	static int16_t x1079 = 1;
	int32_t t18 = 6883122;

    t18 = (x1077!=((x1078<<x1079)>x1080));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1085 = 15LLU;
	uint16_t x1087 = 6U;
	static int32_t t19 = 57;

    t19 = (x1085!=((x1086<<x1087)>x1088));

    if (t19 != 1) { NG(); } else { ; }
	
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


    return 0;
}

