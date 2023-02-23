
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

int8_t x174 = 1;
volatile int8_t x240 = 3;
static int16_t x267 = -1;
volatile int32_t t3 = 1;
static int32_t x379 = INT32_MIN;
uint16_t x381 = 2915U;
int8_t x528 = 1;
uint8_t x676 = 11U;
uint32_t x721 = UINT32_MAX;
static volatile uint32_t t9 = 1U;
volatile int32_t t12 = -2;
int32_t x1180 = INT32_MIN;
uint64_t x1217 = 152831635715LLU;
int32_t x1219 = INT32_MIN;
volatile int8_t x1269 = 0;
int8_t x1270 = -17;
static uint32_t x1271 = UINT32_MAX;
int8_t x1290 = -1;
uint16_t x1380 = 21U;
uint64_t t17 = 12373790475571LLU;
volatile int64_t x1426 = INT64_MIN;
volatile uint64_t x1427 = 2623777986040946813LLU;
uint32_t t18 = 5906673U;
int32_t x1470 = -1;
int64_t x1471 = -19646743858274357LL;
int64_t x1797 = 55525289LL;
static int8_t x1863 = INT8_MAX;
int16_t x1893 = 0;
static uint32_t x1896 = UINT32_MAX;
uint64_t x1901 = 425561857LLU;


void f0(void) {
    	uint64_t x173 = 3369869514521152675LLU;
	int32_t x175 = 19;
	uint8_t x176 = 24U;
	volatile uint64_t t0 = 808402904LLU;

    t0 = (x173<<((x174/x175)+x176));

    if (t0 != 8653793731859709952LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = 0;
	static volatile uint32_t t1 = UINT32_MAX;

    t1 = (x217<<((x218/x219)+x220));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x237 = 110U;
	volatile uint8_t x238 = 3U;
	int32_t x239 = INT32_MAX;
	static int32_t t2 = -879761531;

    t2 = (x237<<((x238/x239)+x240));

    if (t2 != 880) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x265 = 85U;
	static volatile int8_t x266 = -1;
	uint16_t x268 = 0U;

    t3 = (x265<<((x266/x267)+x268));

    if (t3 != 170) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x377 = UINT64_MAX;
	static uint32_t x378 = UINT32_MAX;
	uint8_t x380 = 50U;
	volatile uint64_t t4 = 3LLU;

    t4 = (x377<<((x378/x379)+x380));

    if (t4 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x382 = UINT16_MAX;
	volatile uint64_t x383 = 428363423193LLU;
	volatile int8_t x384 = 0;
	int32_t t5 = -118115;

    t5 = (x381<<((x382/x383)+x384));

    if (t5 != 2915) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x525 = 3967933876LLU;
	uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 16073684LLU;
	volatile uint64_t t6 = 97206LLU;

    t6 = (x525<<((x526/x527)+x528));

    if (t6 != 7935867752LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x597 = INT8_MAX;
	uint64_t x598 = 531LLU;
	volatile int16_t x599 = -1;
	int8_t x600 = 1;
	volatile int32_t t7 = -2762728;

    t7 = (x597<<((x598/x599)+x600));

    if (t7 != 254) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x673 = 2989;
	volatile uint8_t x674 = 7U;
	uint16_t x675 = 477U;
	int32_t t8 = 115260;

    t8 = (x673<<((x674/x675)+x676));

    if (t8 != 6121472) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x722 = -1;
	int64_t x723 = INT64_MIN;
	uint8_t x724 = 12U;

    t9 = (x721<<((x722/x723)+x724));

    if (t9 != 4294963200U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x761 = 1518566348U;
	static volatile int32_t x762 = INT32_MIN;
	int32_t x763 = INT32_MIN;
	int64_t x764 = -1LL;
	static volatile uint32_t t10 = 4123U;

    t10 = (x761<<((x762/x763)+x764));

    if (t10 != 1518566348U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MAX;
	int64_t x783 = INT64_MIN;
	uint16_t x784 = 3U;
	static volatile uint32_t t11 = 63537U;

    t11 = (x781<<((x782/x783)+x784));

    if (t11 != 4294967288U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1061 = INT8_MAX;
	int16_t x1062 = 0;
	int32_t x1063 = -1;
	int8_t x1064 = 20;

    t12 = (x1061<<((x1062/x1063)+x1064));

    if (t12 != 133169152) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1177 = INT16_MAX;
	int32_t x1178 = INT32_MIN;
	static int64_t x1179 = -1LL;
	volatile int32_t t13 = 238925;

    t13 = (x1177<<((x1178/x1179)+x1180));

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1218 = INT8_MIN;
	uint8_t x1220 = 15U;
	volatile uint64_t t14 = 4821687LLU;

    t14 = (x1217<<((x1218/x1219)+x1220));

    if (t14 != 5007987039109120LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1272 = 3U;
	volatile int32_t t15 = 12419;

    t15 = (x1269<<((x1270/x1271)+x1272));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1289 = 14;
	int16_t x1291 = INT16_MIN;
	static int8_t x1292 = 1;
	int32_t t16 = -685;

    t16 = (x1289<<((x1290/x1291)+x1292));

    if (t16 != 28) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1377 = 149094853395422LLU;
	int8_t x1378 = INT8_MIN;
	int8_t x1379 = INT8_MIN;

    t17 = (x1377<<((x1378/x1379)+x1380));

    if (t17 != 16606585543416872960LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x1425 = 119969030U;
	int64_t x1428 = -1LL;

    t18 = (x1425<<((x1426/x1427)+x1428));

    if (t18 != 479876120U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1469 = UINT64_MAX;
	uint16_t x1472 = 14U;
	uint64_t t19 = 18823823043285557LLU;

    t19 = (x1469<<((x1470/x1471)+x1472));

    if (t19 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1585 = INT64_MAX;
	uint64_t x1586 = UINT64_MAX;
	volatile int64_t x1587 = INT64_MIN;
	uint64_t x1588 = UINT64_MAX;
	volatile int64_t t20 = INT64_MAX;

    t20 = (x1585<<((x1586/x1587)+x1588));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1798 = INT32_MIN;
	volatile int32_t x1799 = INT32_MIN;
	int64_t x1800 = -1LL;
	volatile int64_t t21 = -4262833924944358LL;

    t21 = (x1797<<((x1798/x1799)+x1800));

    if (t21 != 55525289LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1861 = 1721192LLU;
	int8_t x1862 = INT8_MIN;
	volatile int8_t x1864 = 20;
	volatile uint64_t t22 = 23706LLU;

    t22 = (x1861<<((x1862/x1863)+x1864));

    if (t22 != 902400311296LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1894 = -5;
	int8_t x1895 = -1;
	volatile int32_t t23 = -14;

    t23 = (x1893<<((x1894/x1895)+x1896));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x1902 = INT8_MIN;
	volatile uint16_t x1903 = 339U;
	volatile uint16_t x1904 = 11U;
	volatile uint64_t t24 = 242164871490623LLU;

    t24 = (x1901<<((x1902/x1903)+x1904));

    if (t24 != 871550683136LLU) { NG(); } else { ; }
	
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
    f23();
    f24();


    return 0;
}

