
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

int8_t x43 = 3;
uint64_t t1 = 108652370009LLU;
volatile int32_t t2 = 12857;
int32_t x198 = 9035673;
static int32_t x447 = 1;
int16_t x573 = 16373;
int16_t x575 = 59;
uint64_t x576 = UINT64_MAX;
volatile int8_t x946 = 1;
uint32_t x947 = 10U;
static uint64_t t11 = 94873368806579LLU;
uint32_t x1003 = 2U;
int16_t x1653 = -506;
volatile int64_t t16 = -3338436091735LL;
uint64_t x1959 = 15LLU;
volatile uint32_t x2058 = 552U;
uint64_t x2113 = 29862085175LLU;
uint64_t t23 = 449572714906424LLU;
int8_t x2233 = INT8_MIN;
uint64_t x2325 = 1061477193335878LLU;
volatile uint64_t t25 = 1127321417260718796LLU;
volatile uint32_t t27 = 32566449U;
int8_t x2503 = 4;
static uint32_t t28 = 1U;
int32_t x2717 = -1;
static int8_t x2741 = -1;
int32_t t33 = 40123;
uint8_t x2771 = 4U;


void f0(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	int8_t x44 = 8;
	volatile uint32_t t0 = 378U;

    t0 = (x41*((x42<<x43)+x44));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x78 = INT8_MAX;
	static int8_t x79 = 0;
	uint64_t x80 = 2178790384700309LLU;

    t1 = (x77*((x78<<x79)+x80));

    if (t1 != 7677012243531169792LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x81 = 24;
	static volatile uint8_t x82 = 14U;
	static int8_t x83 = 0;
	volatile int16_t x84 = INT16_MAX;

    t2 = (x81*((x82<<x83)+x84));

    if (t2 != 786744) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x169 = UINT64_MAX;
	volatile int8_t x170 = 0;
	volatile uint8_t x171 = 21U;
	int64_t x172 = INT64_MIN;
	static volatile uint64_t t3 = 3282LLU;

    t3 = (x169*((x170<<x171)+x172));

    if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x197 = 3;
	uint16_t x199 = 7U;
	uint64_t x200 = UINT64_MAX;
	uint64_t t4 = 199659507335076577LLU;

    t4 = (x197*((x198<<x199)+x200));

    if (t4 != 3469698429LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x257 = -1LL;
	static uint64_t x258 = UINT64_MAX;
	int8_t x259 = 26;
	volatile int8_t x260 = INT8_MAX;
	volatile uint64_t t5 = 7469310370LLU;

    t5 = (x257*((x258<<x259)+x260));

    if (t5 != 67108737LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x445 = -1;
	uint16_t x446 = UINT16_MAX;
	volatile int32_t x448 = -1;
	volatile int32_t t6 = 14235917;

    t6 = (x445*((x446<<x447)+x448));

    if (t6 != -131069) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x574 = UINT64_MAX;
	uint64_t t7 = 137LLU;

    t7 = (x573*((x574<<x575)+x576));

    if (t7 != 6341068275337641995LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x581 = UINT8_MAX;
	static volatile int8_t x582 = 1;
	int16_t x583 = 0;
	uint32_t x584 = UINT32_MAX;
	static volatile uint32_t t8 = 25951498U;

    t8 = (x581*((x582<<x583)+x584));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x765 = 254933428U;
	uint32_t x766 = 61U;
	uint64_t x767 = 8LLU;
	int32_t x768 = 4991557;
	uint32_t t9 = 278169U;

    t9 = (x765*((x766<<x767)+x768));

    if (t9 != 1432336772U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x873 = 8977080LLU;
	int16_t x874 = INT16_MAX;
	uint32_t x875 = 13U;
	uint16_t x876 = 20937U;
	uint64_t t10 = 271872665531710LLU;

    t10 = (x873*((x874<<x875)+x876));

    if (t10 != 2409880976233080LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x945 = UINT16_MAX;
	uint64_t x948 = UINT64_MAX;

    t11 = (x945*((x946<<x947)+x948));

    if (t11 != 67042305LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x1001 = 44LL;
	volatile uint8_t x1002 = 0U;
	volatile int8_t x1004 = INT8_MAX;
	volatile int64_t t12 = 1967LL;

    t12 = (x1001*((x1002<<x1003)+x1004));

    if (t12 != 5588LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1065 = 62;
	volatile uint64_t x1066 = UINT64_MAX;
	static int32_t x1067 = 0;
	static int32_t x1068 = -66054;
	static uint64_t t13 = 354013307857083330LLU;

    t13 = (x1065*((x1066<<x1067)+x1068));

    if (t13 != 18446744073705456206LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x1345 = -1;
	uint16_t x1346 = 288U;
	uint8_t x1347 = 17U;
	int32_t x1348 = 2;
	volatile int32_t t14 = -1;

    t14 = (x1345*((x1346<<x1347)+x1348));

    if (t14 != -37748738) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1509 = UINT64_MAX;
	uint64_t x1510 = 2278208449900502LLU;
	uint16_t x1511 = 12U;
	int64_t x1512 = 123LL;
	volatile uint64_t t15 = 109449398820549LLU;

    t15 = (x1509*((x1510<<x1511)+x1512));

    if (t15 != 9115202262917095301LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1654 = 25673U;
	uint8_t x1655 = 8U;
	static volatile int64_t x1656 = -1LL;

    t16 = (x1653*((x1654<<x1655)+x1656));

    if (t16 != -3325577222LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1673 = 17U;
	volatile uint32_t x1674 = UINT32_MAX;
	volatile uint8_t x1675 = 9U;
	static int64_t x1676 = -472870549LL;
	int64_t t17 = 363657055LL;

    t17 = (x1673*((x1674<<x1675)+x1676));

    if (t17 != 64975635995LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x1865 = 0U;
	uint32_t x1866 = UINT32_MAX;
	int8_t x1867 = 0;
	static int32_t x1868 = INT32_MIN;
	uint32_t t18 = 35U;

    t18 = (x1865*((x1866<<x1867)+x1868));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1893 = 0;
	static int64_t x1894 = 1LL;
	static uint64_t x1895 = 1LLU;
	int16_t x1896 = -3146;
	static int64_t t19 = -1083294766483LL;

    t19 = (x1893*((x1894<<x1895)+x1896));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1957 = UINT32_MAX;
	uint64_t x1958 = 3LLU;
	int16_t x1960 = -1;
	volatile uint64_t t20 = 19187261258094205LLU;

    t20 = (x1957*((x1958<<x1959)+x1960));

    if (t20 != 422208170000385LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x2057 = UINT64_MAX;
	uint16_t x2059 = 9U;
	int8_t x2060 = -1;
	static uint64_t t21 = 343929LLU;

    t21 = (x2057*((x2058<<x2059)+x2060));

    if (t21 != 18446744073709268993LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x2097 = INT32_MAX;
	uint32_t x2098 = UINT32_MAX;
	uint16_t x2099 = 3U;
	int32_t x2100 = -1;
	static volatile uint32_t t22 = 2U;

    t22 = (x2097*((x2098<<x2099)+x2100));

    if (t22 != 2147483657U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x2114 = 61U;
	int32_t x2115 = 0;
	volatile uint16_t x2116 = UINT16_MAX;

    t23 = (x2113*((x2114<<x2115)+x2116));

    if (t23 != 1958833339139300LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x2234 = 1;
	uint8_t x2235 = 3U;
	uint64_t x2236 = 6337LLU;
	volatile uint64_t t24 = 4LLU;

    t24 = (x2233*((x2234<<x2235)+x2236));

    if (t24 != 18446744073708739456LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2326 = UINT8_MAX;
	static uint8_t x2327 = 0U;
	int8_t x2328 = INT8_MIN;

    t25 = (x2325*((x2326<<x2327)+x2328));

    if (t25 != 134807603553656506LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x2405 = INT32_MIN;
	uint64_t x2406 = 5831716699128LLU;
	uint32_t x2407 = 0U;
	static int16_t x2408 = -128;
	static uint64_t t26 = 13863127LLU;

    t26 = (x2405*((x2406<<x2407)+x2408));

    if (t26 != 1822975177747595264LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2409 = INT16_MIN;
	int32_t x2410 = 1760;
	volatile int8_t x2411 = 4;
	uint32_t x2412 = 14130U;

    t27 = (x2409*((x2410<<x2411)+x2412));

    if (t27 != 2909208576U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x2501 = 26U;
	uint32_t x2502 = 1427U;
	volatile uint8_t x2504 = 1U;

    t28 = (x2501*((x2502<<x2503)+x2504));

    if (t28 != 593658U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x2505 = 31U;
	static int64_t x2506 = 202969LL;
	static uint8_t x2507 = 1U;
	static volatile int8_t x2508 = 2;
	volatile int64_t t29 = 0LL;

    t29 = (x2505*((x2506<<x2507)+x2508));

    if (t29 != 12584140LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x2561 = -23;
	uint8_t x2562 = UINT8_MAX;
	int64_t x2563 = 2LL;
	uint16_t x2564 = UINT16_MAX;
	static volatile int32_t t30 = -50772;

    t30 = (x2561*((x2562<<x2563)+x2564));

    if (t30 != -1530765) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x2613 = -1LL;
	int8_t x2614 = 6;
	uint8_t x2615 = 19U;
	static int8_t x2616 = INT8_MAX;
	static int64_t t31 = 3503LL;

    t31 = (x2613*((x2614<<x2615)+x2616));

    if (t31 != -3145855LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2718 = 51812019U;
	static uint8_t x2719 = 0U;
	volatile int64_t x2720 = -223999LL;
	int64_t t32 = -1375987132LL;

    t32 = (x2717*((x2718<<x2719)+x2720));

    if (t32 != -51588020LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x2742 = UINT8_MAX;
	volatile int8_t x2743 = 1;
	uint8_t x2744 = UINT8_MAX;

    t33 = (x2741*((x2742<<x2743)+x2744));

    if (t33 != -765) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2769 = 0;
	uint64_t x2770 = UINT64_MAX;
	volatile uint32_t x2772 = 9U;
	volatile uint64_t t34 = 78944875LLU;

    t34 = (x2769*((x2770<<x2771)+x2772));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x2889 = 22U;
	uint64_t x2890 = 1029LLU;
	volatile uint64_t x2891 = 8LLU;
	volatile uint8_t x2892 = UINT8_MAX;
	static volatile uint64_t t35 = 200748187LLU;

    t35 = (x2889*((x2890<<x2891)+x2892));

    if (t35 != 5800938LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2913 = INT8_MAX;
	uint8_t x2914 = 11U;
	static volatile uint32_t x2915 = 4U;
	int16_t x2916 = INT16_MAX;
	int32_t t36 = -1;

    t36 = (x2913*((x2914<<x2915)+x2916));

    if (t36 != 4183761) { NG(); } else { ; }
	
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
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();


    return 0;
}

