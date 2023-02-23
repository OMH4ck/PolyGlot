
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

uint8_t x260 = 2U;
int64_t x383 = 1125138826459136LL;
uint32_t x384 = 1U;
volatile int8_t x421 = 1;
uint32_t x422 = 15U;
int32_t x423 = -1;
int32_t x519 = 1;
int32_t x650 = INT32_MIN;
volatile int64_t x655 = INT64_MIN;
uint16_t x969 = 43U;
uint64_t x1217 = UINT64_MAX;
static uint64_t t9 = 2144756611096811033LLU;
uint32_t x1737 = UINT32_MAX;
int32_t x1739 = 2;
int64_t x2258 = INT64_MIN;
uint64_t x2259 = UINT64_MAX;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	static uint32_t x6 = 4148819U;
	volatile uint8_t x7 = 2U;
	int16_t x8 = 2;
	static int32_t t0 = -336870607;

    t0 = (x5<<((x6&x7)<<x8));

    if (t0 != 16776960) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x257 = 1632187;
	int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = 2U;
	volatile int32_t t1 = 1531583;

    t1 = (x257<<((x258&x259)<<x260));

    if (t1 != 1632187) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x381 = UINT16_MAX;
	static int8_t x382 = INT8_MAX;
	int32_t t2 = -11;

    t2 = (x381<<((x382&x383)<<x384));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x424 = 0;
	static volatile int32_t t3 = 3845108;

    t3 = (x421<<((x422&x423)<<x424));

    if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x517 = 4153544176995LLU;
	uint16_t x518 = 323U;
	int8_t x520 = 1;
	uint64_t t4 = 8853906LLU;

    t4 = (x517<<((x518&x519)<<x520));

    if (t4 != 16614176707980LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x649 = 10U;
	uint16_t x651 = 18299U;
	uint8_t x652 = 5U;
	int32_t t5 = 1;

    t5 = (x649<<((x650&x651)<<x652));

    if (t5 != 10) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x653 = 414762;
	int16_t x654 = INT16_MAX;
	static int8_t x656 = 3;
	volatile int32_t t6 = 31827631;

    t6 = (x653<<((x654&x655)<<x656));

    if (t6 != 414762) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x970 = 13782U;
	int64_t x971 = INT64_MIN;
	uint8_t x972 = 5U;
	volatile int32_t t7 = 3862;

    t7 = (x969<<((x970&x971)<<x972));

    if (t7 != 43) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1193 = INT8_MAX;
	uint16_t x1194 = 0U;
	uint32_t x1195 = UINT32_MAX;
	int8_t x1196 = 1;
	int32_t t8 = -24;

    t8 = (x1193<<((x1194&x1195)<<x1196));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x1218 = 616;
	uint16_t x1219 = 27U;
	static uint8_t x1220 = 1U;

    t9 = (x1217<<((x1218&x1219)<<x1220));

    if (t9 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1329 = UINT32_MAX;
	static int64_t x1330 = INT64_MIN;
	static int16_t x1331 = 7233;
	uint8_t x1332 = 21U;
	static uint32_t t10 = UINT32_MAX;

    t10 = (x1329<<((x1330&x1331)<<x1332));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1413 = 25122215651775LLU;
	int8_t x1414 = 0;
	uint64_t x1415 = 691918LLU;
	int8_t x1416 = 58;
	uint64_t t11 = 916554LLU;

    t11 = (x1413<<((x1414&x1415)<<x1416));

    if (t11 != 25122215651775LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1693 = UINT8_MAX;
	static uint8_t x1694 = 82U;
	int64_t x1695 = INT64_MIN;
	uint16_t x1696 = 1U;
	volatile int32_t t12 = 127732367;

    t12 = (x1693<<((x1694&x1695)<<x1696));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1701 = 24457163LLU;
	uint8_t x1702 = 2U;
	static volatile int16_t x1703 = -95;
	int8_t x1704 = 6;
	uint64_t t13 = 1489653033LLU;

    t13 = (x1701<<((x1702&x1703)<<x1704));

    if (t13 != 24457163LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x1738 = INT8_MIN;
	int8_t x1740 = 3;
	volatile uint32_t t14 = UINT32_MAX;

    t14 = (x1737<<((x1738&x1739)<<x1740));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1957 = UINT32_MAX;
	int64_t x1958 = INT64_MIN;
	uint8_t x1959 = 6U;
	uint32_t x1960 = 56U;
	static volatile uint32_t t15 = UINT32_MAX;

    t15 = (x1957<<((x1958&x1959)<<x1960));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x2257 = 0;
	uint8_t x2260 = 6U;
	int32_t t16 = 10767;

    t16 = (x2257<<((x2258&x2259)<<x2260));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x2305 = 13LL;
	static uint8_t x2306 = 8U;
	int64_t x2307 = INT64_MIN;
	uint16_t x2308 = 1U;
	int64_t t17 = 103LL;

    t17 = (x2305<<((x2306&x2307)<<x2308));

    if (t17 != 13LL) { NG(); } else { ; }
	
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


    return 0;
}

