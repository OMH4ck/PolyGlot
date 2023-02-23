
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

int64_t x30 = INT64_MIN;
int64_t x221 = INT64_MAX;
uint8_t x596 = 2U;
uint16_t x618 = 4U;
uint8_t x619 = 15U;
uint16_t x804 = 2U;
static uint8_t x892 = 7U;
volatile int16_t x1447 = INT16_MIN;
uint8_t x1448 = 10U;
int8_t x2164 = 1;
volatile int64_t x2171 = INT64_MIN;
static int8_t x2172 = 60;
static int64_t t16 = 1LL;
volatile int8_t x2281 = 34;
volatile int64_t x2358 = 3615LL;
volatile uint64_t t18 = 109914753645530826LLU;
int8_t x2827 = INT8_MAX;
uint64_t t20 = 90479142042LLU;
uint8_t x3240 = 2U;
volatile int64_t x3706 = INT64_MAX;
static volatile uint8_t x3708 = 19U;
uint32_t t29 = 174340471U;
static volatile uint32_t x4117 = UINT32_MAX;
int8_t x4118 = -1;


void f0(void) {
    	static volatile int16_t x29 = INT16_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile uint8_t x32 = 1U;
	volatile int32_t t0 = 300;

    t0 = (x29>>((x30&x31)|x32));

    if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x222 = INT32_MAX;
	static int32_t x223 = 5;
	volatile int64_t x224 = 12LL;
	volatile int64_t t1 = 8046086979711544LL;

    t1 = (x221>>((x222&x223)|x224));

    if (t1 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x481 = 1673U;
	int64_t x482 = INT64_MIN;
	volatile int8_t x483 = INT8_MAX;
	volatile uint16_t x484 = 3U;
	uint32_t t2 = 658264318U;

    t2 = (x481>>((x482&x483)|x484));

    if (t2 != 209U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x593 = INT16_MAX;
	static int8_t x594 = 3;
	static volatile int64_t x595 = INT64_MIN;
	static int32_t t3 = 0;

    t3 = (x593>>((x594&x595)|x596));

    if (t3 != 8191) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x617 = 7263U;
	uint16_t x620 = 14U;
	int32_t t4 = 14470;

    t4 = (x617>>((x618&x619)|x620));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x801 = 1;
	uint8_t x802 = 96U;
	int8_t x803 = INT8_MIN;
	static volatile int32_t t5 = 26668;

    t5 = (x801>>((x802&x803)|x804));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x889 = 1072228337LLU;
	static int64_t x890 = INT64_MIN;
	volatile uint32_t x891 = 115388U;
	uint64_t t6 = 3742867422LLU;

    t6 = (x889>>((x890&x891)|x892));

    if (t6 != 8376783LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x957 = 50;
	int32_t x958 = -10269470;
	uint16_t x959 = 1U;
	volatile int64_t x960 = 11LL;
	int32_t t7 = -16;

    t7 = (x957>>((x958&x959)|x960));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x1253 = 97742483LL;
	uint8_t x1254 = 22U;
	static int16_t x1255 = -1;
	static uint32_t x1256 = 30U;
	int64_t t8 = -739715583902593LL;

    t8 = (x1253>>((x1254&x1255)|x1256));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x1445 = 1;
	volatile uint32_t x1446 = 95U;
	static int32_t t9 = 1;

    t9 = (x1445>>((x1446&x1447)|x1448));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x1673 = INT32_MAX;
	volatile uint64_t x1674 = 247020187LLU;
	static int32_t x1675 = INT32_MIN;
	int8_t x1676 = 0;
	int32_t t10 = INT32_MAX;

    t10 = (x1673>>((x1674&x1675)|x1676));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1781 = INT64_MAX;
	uint8_t x1782 = UINT8_MAX;
	int8_t x1783 = 11;
	uint8_t x1784 = 58U;
	static volatile int64_t t11 = -6847308569225LL;

    t11 = (x1781>>((x1782&x1783)|x1784));

    if (t11 != 15LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x2033 = 0U;
	int8_t x2034 = 5;
	static volatile int32_t x2035 = INT32_MIN;
	int16_t x2036 = 15;
	volatile int32_t t12 = -1038278233;

    t12 = (x2033>>((x2034&x2035)|x2036));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x2149 = 4;
	uint8_t x2150 = UINT8_MAX;
	int32_t x2151 = INT32_MIN;
	int16_t x2152 = 1;
	volatile int32_t t13 = -6662;

    t13 = (x2149>>((x2150&x2151)|x2152));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x2161 = 81226;
	uint32_t x2162 = 2343940U;
	static uint8_t x2163 = 6U;
	int32_t t14 = -21393;

    t14 = (x2161>>((x2162&x2163)|x2164));

    if (t14 != 2538) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x2169 = 77521081373LL;
	static uint64_t x2170 = 69829LLU;
	volatile int64_t t15 = 907349258LL;

    t15 = (x2169>>((x2170&x2171)|x2172));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x2193 = 51890240195333230LL;
	volatile uint32_t x2194 = UINT32_MAX;
	uint32_t x2195 = 18U;
	uint8_t x2196 = 1U;

    t16 = (x2193>>((x2194&x2195)|x2196));

    if (t16 != 98972778692LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x2282 = INT64_MIN;
	uint16_t x2283 = 11666U;
	int16_t x2284 = 0;
	volatile int32_t t17 = -1476;

    t17 = (x2281>>((x2282&x2283)|x2284));

    if (t17 != 34) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x2357 = 1231553215063742LLU;
	static volatile uint32_t x2359 = 38U;
	uint32_t x2360 = 1U;

    t18 = (x2357>>((x2358&x2359)|x2360));

    if (t18 != 9621509492685LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2541 = UINT8_MAX;
	int32_t x2542 = INT32_MIN;
	uint32_t x2543 = 14685926U;
	uint8_t x2544 = 0U;
	int32_t t19 = 0;

    t19 = (x2541>>((x2542&x2543)|x2544));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2825 = UINT64_MAX;
	int32_t x2826 = 178177;
	uint8_t x2828 = 0U;

    t20 = (x2825>>((x2826&x2827)|x2828));

    if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x3101 = 121649U;
	uint16_t x3102 = 9U;
	int8_t x3103 = INT8_MIN;
	uint8_t x3104 = 1U;
	volatile uint32_t t21 = 3613774U;

    t21 = (x3101>>((x3102&x3103)|x3104));

    if (t21 != 60824U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x3177 = INT64_MAX;
	static uint16_t x3178 = UINT16_MAX;
	int32_t x3179 = INT32_MIN;
	int8_t x3180 = 0;
	volatile int64_t t22 = INT64_MAX;

    t22 = (x3177>>((x3178&x3179)|x3180));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x3237 = 62LLU;
	volatile uint16_t x3238 = 57U;
	uint8_t x3239 = 2U;
	uint64_t t23 = 0LLU;

    t23 = (x3237>>((x3238&x3239)|x3240));

    if (t23 != 15LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x3433 = UINT8_MAX;
	volatile uint16_t x3434 = 1U;
	int64_t x3435 = INT64_MIN;
	uint8_t x3436 = 1U;
	static int32_t t24 = -26700;

    t24 = (x3433>>((x3434&x3435)|x3436));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x3705 = 79010154679LLU;
	static uint32_t x3707 = 1U;
	uint64_t t25 = 551249217811021449LLU;

    t25 = (x3705>>((x3706&x3707)|x3708));

    if (t25 != 150699LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x3777 = 109702891U;
	int8_t x3778 = -1;
	int8_t x3779 = 0;
	uint16_t x3780 = 3U;
	static uint32_t t26 = 8500U;

    t26 = (x3777>>((x3778&x3779)|x3780));

    if (t26 != 13712861U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x3861 = INT64_MAX;
	volatile int32_t x3862 = INT32_MAX;
	int64_t x3863 = INT64_MIN;
	int32_t x3864 = 1;
	static int64_t t27 = -1186518978LL;

    t27 = (x3861>>((x3862&x3863)|x3864));

    if (t27 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x3869 = 2LLU;
	static int8_t x3870 = INT8_MAX;
	uint8_t x3871 = 2U;
	int16_t x3872 = 0;
	volatile uint64_t t28 = 23142133964LLU;

    t28 = (x3869>>((x3870&x3871)|x3872));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x4001 = 1513378401U;
	int8_t x4002 = INT8_MAX;
	uint8_t x4003 = 22U;
	uint16_t x4004 = 0U;

    t29 = (x4001>>((x4002&x4003)|x4004));

    if (t29 != 360U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x4119 = 25;
	int16_t x4120 = 0;
	static volatile uint32_t t30 = 99U;

    t30 = (x4117>>((x4118&x4119)|x4120));

    if (t30 != 127U) { NG(); } else { ; }
	
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


    return 0;
}

