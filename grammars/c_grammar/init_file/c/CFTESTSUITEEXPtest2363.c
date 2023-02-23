
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

uint32_t x126 = UINT32_MAX;
static uint64_t x161 = 4LLU;
int16_t x194 = -1;
int8_t x196 = 8;
volatile int8_t x230 = INT8_MIN;
uint32_t x442 = 106714U;
static volatile uint16_t x471 = 1U;
uint32_t t5 = 1U;
int8_t x482 = -1;
static int64_t x593 = 4123LL;
int64_t t7 = -27604681854LL;
uint32_t x605 = 327U;
uint8_t x756 = 16U;
uint8_t x781 = 102U;
int32_t t11 = 3;
int32_t t12 = -5;
static uint64_t x933 = 519715878LLU;
int8_t x935 = INT8_MIN;
volatile uint32_t x1008 = 13U;


void f0(void) {
    	static uint32_t x125 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	int32_t x128 = 30;
	static uint32_t t0 = 2420684U;

    t0 = (x125>>((x126|x127)+x128));

    if (t0 != 7U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x162 = -22;
	uint32_t x163 = 77482078U;
	uint8_t x164 = 6U;
	uint64_t t1 = 738224LLU;

    t1 = (x161>>((x162|x163)+x164));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x193 = 29;
	int16_t x195 = -3235;
	int32_t t2 = 0;

    t2 = (x193>>((x194|x195)+x196));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x231 = -1;
	volatile int16_t x232 = 1;
	int64_t t3 = INT64_MAX;

    t3 = (x229>>((x230|x231)+x232));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x441 = 3LLU;
	volatile int32_t x443 = -1;
	volatile uint8_t x444 = 22U;
	uint64_t t4 = 442448502LLU;

    t4 = (x441>>((x442|x443)+x444));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile uint8_t x470 = 1U;
	int8_t x472 = 1;

    t5 = (x469>>((x470|x471)+x472));

    if (t5 != 1073741823U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x481 = INT32_MAX;
	int32_t x483 = -1;
	uint8_t x484 = 14U;
	volatile int32_t t6 = -182915;

    t6 = (x481>>((x482|x483)+x484));

    if (t6 != 262143) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x594 = UINT64_MAX;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = 3;

    t7 = (x593>>((x594|x595)+x596));

    if (t7 != 1030LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x606 = UINT8_MAX;
	static int8_t x607 = INT8_MIN;
	int8_t x608 = 4;
	volatile uint32_t t8 = 2U;

    t8 = (x605>>((x606|x607)+x608));

    if (t8 != 40U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x721 = 5358067194252192732LLU;
	uint32_t x722 = UINT32_MAX;
	static int32_t x723 = INT32_MAX;
	int32_t x724 = 16;
	uint64_t t9 = 32837372208735378LLU;

    t9 = (x721>>((x722|x723)+x724));

    if (t9 != 163515234199590LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x753 = 198;
	volatile int8_t x754 = -1;
	uint64_t x755 = 875585207LLU;
	volatile int32_t t10 = 238422252;

    t10 = (x753>>((x754|x755)+x756));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x782 = -1;
	uint32_t x783 = 177088U;
	uint16_t x784 = 7U;

    t11 = (x781>>((x782|x783)+x784));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x881 = 7378;
	uint8_t x882 = 5U;
	int8_t x883 = 0;
	int32_t x884 = -2;

    t12 = (x881>>((x882|x883)+x884));

    if (t12 != 922) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x934 = 8150;
	uint16_t x936 = 62U;
	static uint64_t t13 = 25923LLU;

    t13 = (x933>>((x934|x935)+x936));

    if (t13 != 495LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x985 = 0;
	static int16_t x986 = -3;
	int64_t x987 = -17LL;
	int16_t x988 = 6;
	volatile int32_t t14 = 27;

    t14 = (x985>>((x986|x987)+x988));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1005 = INT64_MAX;
	int16_t x1006 = -1;
	uint32_t x1007 = UINT32_MAX;
	int64_t t15 = 26645091038LL;

    t15 = (x1005>>((x1006|x1007)+x1008));

    if (t15 != 2251799813685247LL) { NG(); } else { ; }
	
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

