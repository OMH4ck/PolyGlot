
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

static volatile int32_t t0 = INT32_MAX;
static uint32_t x75 = UINT32_MAX;
static int64_t x82 = -91362379198438530LL;
uint64_t x120 = UINT64_MAX;
static volatile uint64_t x141 = UINT64_MAX;
int32_t x261 = 17054;
int8_t x291 = INT8_MIN;
int16_t x292 = 0;
static volatile int32_t t8 = 8448;
uint16_t x451 = 62U;
uint8_t x557 = 0U;
static int32_t x558 = -1;
int64_t x577 = INT64_MAX;
static uint8_t x579 = UINT8_MAX;
volatile uint16_t x795 = 427U;
static volatile int64_t x799 = INT64_MIN;
uint64_t t13 = 425737275006409LLU;
int32_t x954 = -1;
uint8_t x958 = UINT8_MAX;
uint32_t t18 = 65349277U;
uint16_t x1062 = UINT16_MAX;
int32_t t22 = -1671067;
int32_t t23 = -130435;


void f0(void) {
    	int32_t x53 = INT32_MAX;
	static int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -1LL;

    t0 = (x53>>((x54%x55)-x56));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x73 = INT32_MAX;
	static int8_t x74 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t1 = INT32_MAX;

    t1 = (x73>>((x74%x75)-x76));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	int32_t x78 = 1;
	static uint8_t x79 = UINT8_MAX;
	int64_t x80 = -1LL;
	int32_t t2 = 6286;

    t2 = (x77>>((x78%x79)-x80));

    if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x81 = 137U;
	uint32_t x83 = 42U;
	static uint64_t x84 = UINT64_MAX;
	static volatile int32_t t3 = 3977889;

    t3 = (x81>>((x82%x83)-x84));

    if (t3 != 68) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x117 = 1;
	static int64_t x118 = -1LL;
	uint32_t x119 = 16940U;
	static volatile int32_t t4 = -14796;

    t4 = (x117>>((x118%x119)-x120));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x142 = 16U;
	uint64_t x143 = 199653479LLU;
	int8_t x144 = -1;
	static volatile uint64_t t5 = 6514LLU;

    t5 = (x141>>((x142%x143)-x144));

    if (t5 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x262 = UINT8_MAX;
	uint64_t x263 = UINT64_MAX;
	static volatile uint8_t x264 = UINT8_MAX;
	int32_t t6 = -1986100;

    t6 = (x261>>((x262%x263)-x264));

    if (t6 != 17054) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint64_t t7 = UINT64_MAX;

    t7 = (x289>>((x290%x291)-x292));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x325 = 5U;
	static uint64_t x326 = 27LLU;
	uint8_t x327 = UINT8_MAX;
	int64_t x328 = -1LL;

    t8 = (x325>>((x326%x327)-x328));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x449 = 9806055LLU;
	int8_t x450 = -1;
	static int32_t x452 = -39;
	static volatile uint64_t t9 = 3704693LLU;

    t9 = (x449>>((x450%x451)-x452));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x559 = INT8_MIN;
	volatile uint32_t x560 = UINT32_MAX;
	volatile int32_t t10 = -239492;

    t10 = (x557>>((x558%x559)-x560));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x578 = UINT16_MAX;
	uint32_t x580 = UINT32_MAX;
	volatile int64_t t11 = -114690LL;

    t11 = (x577>>((x578%x579)-x580));

    if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x793 = UINT64_MAX;
	volatile int32_t x794 = 1;
	int16_t x796 = -1;
	uint64_t t12 = 1687LLU;

    t12 = (x793>>((x794%x795)-x796));

    if (t12 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x797 = 7507598LLU;
	int64_t x798 = INT64_MIN;
	static volatile int16_t x800 = -1;

    t13 = (x797>>((x798%x799)-x800));

    if (t13 != 3753799LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x921 = 275U;
	volatile uint8_t x922 = 5U;
	static int32_t x923 = -106;
	volatile uint64_t x924 = UINT64_MAX;
	volatile uint32_t t14 = 37U;

    t14 = (x921>>((x922%x923)-x924));

    if (t14 != 4U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x953 = 887086U;
	int32_t x955 = -1;
	int16_t x956 = 0;
	static volatile uint32_t t15 = 13U;

    t15 = (x953>>((x954%x955)-x956));

    if (t15 != 887086U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x957 = INT32_MAX;
	int32_t x959 = -1;
	int64_t x960 = -1LL;
	int32_t t16 = -238474;

    t16 = (x957>>((x958%x959)-x960));

    if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x965 = 79321U;
	int16_t x966 = INT16_MAX;
	int8_t x967 = INT8_MAX;
	uint64_t x968 = UINT64_MAX;
	volatile uint32_t t17 = 30101820U;

    t17 = (x965>>((x966%x967)-x968));

    if (t17 != 19830U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x977 = UINT32_MAX;
	int64_t x978 = INT64_MIN;
	volatile int32_t x979 = INT32_MAX;
	int16_t x980 = -18;

    t18 = (x977>>((x978%x979)-x980));

    if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1057 = 0LL;
	volatile int64_t x1058 = 0LL;
	static int16_t x1059 = -1;
	int8_t x1060 = -1;
	volatile int64_t t19 = -2031LL;

    t19 = (x1057>>((x1058%x1059)-x1060));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1061 = 2;
	int16_t x1063 = -3;
	static uint32_t x1064 = UINT32_MAX;
	volatile int32_t t20 = 27;

    t20 = (x1061>>((x1062%x1063)-x1064));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1077 = 14427182U;
	int8_t x1078 = -1;
	int16_t x1079 = 5;
	uint32_t x1080 = UINT32_MAX;
	volatile uint32_t t21 = 4557839U;

    t21 = (x1077>>((x1078%x1079)-x1080));

    if (t21 != 14427182U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1081 = 6U;
	static volatile uint16_t x1082 = 914U;
	int16_t x1083 = 2;
	int32_t x1084 = -1;

    t22 = (x1081>>((x1082%x1083)-x1084));

    if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1093 = 1310;
	int16_t x1094 = INT16_MAX;
	volatile uint16_t x1095 = 3U;
	volatile int8_t x1096 = -1;

    t23 = (x1093>>((x1094%x1095)-x1096));

    if (t23 != 327) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1165 = UINT8_MAX;
	uint8_t x1166 = 20U;
	uint32_t x1167 = UINT32_MAX;
	volatile uint64_t x1168 = UINT64_MAX;
	volatile int32_t t24 = -98748;

    t24 = (x1165>>((x1166%x1167)-x1168));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x1209 = INT32_MAX;
	static int64_t x1210 = INT64_MIN;
	volatile int8_t x1211 = INT8_MIN;
	int64_t x1212 = -1LL;
	int32_t t25 = -1903;

    t25 = (x1209>>((x1210%x1211)-x1212));

    if (t25 != 1073741823) { NG(); } else { ; }
	
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


    return 0;
}

