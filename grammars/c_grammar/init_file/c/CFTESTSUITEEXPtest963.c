
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

int16_t x447 = -1;
volatile int64_t x702 = INT64_MIN;
static volatile int32_t t4 = 0;
static volatile uint16_t x867 = 22U;
int32_t x1166 = INT32_MAX;
uint64_t x1265 = 66726547200241LLU;
volatile int16_t x1267 = -1;
uint64_t x1317 = 27391609LLU;
volatile uint64_t t9 = 1183LLU;
volatile uint8_t x1346 = UINT8_MAX;
static uint32_t x1433 = 7U;
int8_t x1435 = -1;
int32_t t12 = 70710910;
static int8_t x1744 = 8;
static volatile int32_t x1899 = -1;
volatile uint64_t t14 = 2182LLU;
uint32_t x1993 = 926922U;
static uint8_t x1994 = 2U;
static uint16_t x1996 = 3U;
volatile uint32_t x2191 = UINT32_MAX;
uint16_t x2201 = 5701U;
static int8_t x2202 = -1;
int8_t x2203 = 1;
int32_t t17 = 10000;
uint64_t t19 = 26812536LLU;
uint16_t x2751 = 30U;
int16_t x2775 = -1;
int8_t x2776 = 22;
int32_t x2934 = 11;
uint8_t x3057 = 10U;
int32_t x3060 = 13;
static int32_t t25 = 1813;
static volatile int64_t t26 = 165365412LL;


void f0(void) {
    	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MAX;
	uint16_t x119 = 3U;
	int32_t x120 = 3;
	int32_t t0 = 952960569;

    t0 = (x117>>((x118%x119)|x120));

    if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x181 = 1209889311281137LLU;
	static uint8_t x182 = 3U;
	uint32_t x183 = 1069118434U;
	volatile uint16_t x184 = 3U;
	volatile uint64_t t1 = 507535832402784627LLU;

    t1 = (x181>>((x182%x183)|x184));

    if (t1 != 151236163910142LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x445 = 549329109878865LLU;
	uint64_t x446 = UINT64_MAX;
	volatile uint32_t x448 = 0U;
	volatile uint64_t t2 = 70800LLU;

    t2 = (x445>>((x446%x447)|x448));

    if (t2 != 549329109878865LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x701 = 556;
	int16_t x703 = -1;
	int8_t x704 = 6;
	volatile int32_t t3 = 106159737;

    t3 = (x701>>((x702%x703)|x704));

    if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x733 = 29687U;
	static int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 7U;

    t4 = (x733>>((x734%x735)|x736));

    if (t4 != 231) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x865 = 46U;
	uint8_t x866 = 7U;
	int16_t x868 = 0;
	volatile int32_t t5 = 0;

    t5 = (x865>>((x866%x867)|x868));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x885 = 10;
	uint8_t x886 = 12U;
	volatile int32_t x887 = INT32_MAX;
	int32_t x888 = 1;
	static int32_t t6 = 1;

    t6 = (x885>>((x886%x887)|x888));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x1165 = 6578726LL;
	uint32_t x1167 = 6U;
	uint16_t x1168 = 31U;
	volatile int64_t t7 = 909082LL;

    t7 = (x1165>>((x1166%x1167)|x1168));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x1266 = -1;
	int32_t x1268 = 1;
	volatile uint64_t t8 = 394389LLU;

    t8 = (x1265>>((x1266%x1267)|x1268));

    if (t8 != 33363273600120LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x1318 = UINT16_MAX;
	uint8_t x1319 = 13U;
	volatile int32_t x1320 = 7;

    t9 = (x1317>>((x1318%x1319)|x1320));

    if (t9 != 213996LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x1345 = 0;
	uint32_t x1347 = 23U;
	int8_t x1348 = 1;
	volatile int32_t t10 = 4372;

    t10 = (x1345>>((x1346%x1347)|x1348));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1434 = 1;
	static uint8_t x1436 = 1U;
	static volatile uint32_t t11 = 3092416U;

    t11 = (x1433>>((x1434%x1435)|x1436));

    if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x1585 = UINT16_MAX;
	int64_t x1586 = INT64_MAX;
	int16_t x1587 = INT16_MAX;
	static uint8_t x1588 = 20U;

    t12 = (x1585>>((x1586%x1587)|x1588));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1741 = 1999604U;
	int32_t x1742 = 2109318;
	static int8_t x1743 = INT8_MIN;
	uint32_t t13 = 158462534U;

    t13 = (x1741>>((x1742%x1743)|x1744));

    if (t13 != 122U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1897 = UINT64_MAX;
	int8_t x1898 = -1;
	volatile uint8_t x1900 = 1U;

    t14 = (x1897>>((x1898%x1899)|x1900));

    if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1995 = UINT32_MAX;
	uint32_t t15 = 142272U;

    t15 = (x1993>>((x1994%x1995)|x1996));

    if (t15 != 115865U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x2189 = 58;
	int16_t x2190 = -1;
	volatile int8_t x2192 = 28;
	volatile int32_t t16 = 1;

    t16 = (x2189>>((x2190%x2191)|x2192));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x2204 = 14U;

    t17 = (x2201>>((x2202%x2203)|x2204));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x2257 = 1131U;
	int32_t x2258 = INT32_MIN;
	static volatile uint32_t x2259 = 31U;
	uint8_t x2260 = 16U;
	uint32_t t18 = 69214835U;

    t18 = (x2257>>((x2258%x2259)|x2260));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x2353 = 17001435418LLU;
	int32_t x2354 = INT32_MIN;
	int8_t x2355 = INT8_MIN;
	uint8_t x2356 = 0U;

    t19 = (x2353>>((x2354%x2355)|x2356));

    if (t19 != 17001435418LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2665 = 1892LLU;
	static volatile uint64_t x2666 = UINT64_MAX;
	int32_t x2667 = -1;
	int8_t x2668 = 16;
	static volatile uint64_t t20 = 80521484970964933LLU;

    t20 = (x2665>>((x2666%x2667)|x2668));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x2749 = UINT32_MAX;
	volatile int32_t x2750 = INT32_MAX;
	uint64_t x2752 = 1LLU;
	volatile uint32_t t21 = 1037742558U;

    t21 = (x2749>>((x2750%x2751)|x2752));

    if (t21 != 33554431U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x2773 = INT8_MAX;
	int32_t x2774 = -1;
	int32_t t22 = 414;

    t22 = (x2773>>((x2774%x2775)|x2776));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2853 = 2U;
	volatile int8_t x2854 = -1;
	int32_t x2855 = -1;
	volatile int32_t x2856 = 3;
	int32_t t23 = 140547480;

    t23 = (x2853>>((x2854%x2855)|x2856));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x2933 = 74753089U;
	static uint64_t x2935 = UINT64_MAX;
	uint8_t x2936 = 17U;
	static uint32_t t24 = 4365U;

    t24 = (x2933>>((x2934%x2935)|x2936));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x3058 = INT16_MIN;
	int16_t x3059 = -1;

    t25 = (x3057>>((x3058%x3059)|x3060));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x3073 = 4568LL;
	static int16_t x3074 = 1;
	int8_t x3075 = -1;
	uint8_t x3076 = 3U;

    t26 = (x3073>>((x3074%x3075)|x3076));

    if (t26 != 571LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x3265 = 1;
	static uint8_t x3266 = UINT8_MAX;
	static int8_t x3267 = -1;
	static uint16_t x3268 = 0U;
	volatile int32_t t27 = -28165417;

    t27 = (x3265>>((x3266%x3267)|x3268));

    if (t27 != 1) { NG(); } else { ; }
	
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
    f25();
    f26();
    f27();


    return 0;
}

