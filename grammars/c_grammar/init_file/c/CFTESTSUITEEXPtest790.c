
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

volatile uint32_t x29 = 1320U;
uint16_t x30 = UINT16_MAX;
uint64_t x82 = UINT64_MAX;
static volatile uint16_t x84 = 1U;
uint32_t t4 = UINT32_MAX;
int16_t x177 = INT16_MAX;
static volatile uint8_t x178 = UINT8_MAX;
int16_t x185 = 156;
uint16_t x292 = 14U;
volatile uint64_t t9 = 0LLU;
volatile uint16_t x463 = 31988U;
static int8_t x789 = INT8_MAX;
static uint8_t x965 = 6U;
int16_t x966 = INT16_MAX;
uint64_t x1021 = 726557334LLU;
volatile int16_t x1055 = INT16_MIN;
int8_t x1056 = 4;
int32_t t16 = 3577;
uint32_t x1301 = 940U;
int64_t x1341 = 14570810800LL;
static int64_t x1342 = -1LL;
volatile int32_t x1463 = 1;
uint32_t x1464 = 4U;
static int16_t x1530 = INT16_MIN;
static int16_t x1531 = INT16_MIN;
uint8_t x1532 = 2U;
int32_t x1706 = INT32_MIN;
int32_t x1727 = 28;
int16_t x1728 = -1;
int8_t x1762 = -1;
uint16_t x1851 = 19U;
static int32_t t28 = -2;
int64_t x2002 = -1LL;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint64_t x2 = 0LLU;
	int64_t x3 = -3930LL;
	volatile int8_t x4 = 0;
	static volatile int32_t t0 = -53580872;

    t0 = (x1<<((x2%x3)+x4));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x31 = -48;
	int16_t x32 = -15;
	volatile uint32_t t1 = 1769434140U;

    t1 = (x29<<((x30%x31)+x32));

    if (t1 != 1320U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x81 = INT8_MAX;
	int32_t x83 = -1;
	volatile int32_t t2 = -1;

    t2 = (x81<<((x82%x83)+x84));

    if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x109 = INT16_MAX;
	int32_t x110 = -1;
	uint8_t x111 = 1U;
	int16_t x112 = 5;
	volatile int32_t t3 = -269;

    t3 = (x109<<((x110%x111)+x112));

    if (t3 != 1048544) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x169 = UINT32_MAX;
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 5U;
	volatile uint64_t x172 = 0LLU;

    t4 = (x169<<((x170%x171)+x172));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x179 = -1;
	int8_t x180 = 0;
	int32_t t5 = 139;

    t5 = (x177<<((x178%x179)+x180));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x186 = 1216;
	uint8_t x187 = 6U;
	int64_t x188 = -1LL;
	volatile int32_t t6 = 5189988;

    t6 = (x185<<((x186%x187)+x188));

    if (t6 != 1248) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x189 = 63722U;
	int8_t x190 = 1;
	int16_t x191 = INT16_MIN;
	int64_t x192 = -1LL;
	volatile uint32_t t7 = 49698789U;

    t7 = (x189<<((x190%x191)+x192));

    if (t7 != 63722U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x289 = 962512525884LLU;
	uint64_t x290 = 0LLU;
	int16_t x291 = -1;
	static uint64_t t8 = 214840253847872LLU;

    t8 = (x289<<((x290%x291)+x292));

    if (t8 != 15769805224083456LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x429 = 193209LLU;
	uint32_t x430 = 15U;
	int8_t x431 = INT8_MAX;
	volatile int16_t x432 = -1;

    t9 = (x429<<((x430%x431)+x432));

    if (t9 != 3165536256LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x461 = 5983LLU;
	uint8_t x462 = 22U;
	uint32_t x464 = UINT32_MAX;
	volatile uint64_t t10 = 4LLU;

    t10 = (x461<<((x462%x463)+x464));

    if (t10 != 12547260416LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x469 = UINT64_MAX;
	uint64_t x470 = 4LLU;
	int32_t x471 = INT32_MAX;
	static int32_t x472 = -1;
	static uint64_t t11 = 3154149LLU;

    t11 = (x469<<((x470%x471)+x472));

    if (t11 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x513 = 2487U;
	uint16_t x514 = UINT16_MAX;
	int16_t x515 = -1;
	uint8_t x516 = 5U;
	volatile uint32_t t12 = 2697U;

    t12 = (x513<<((x514%x515)+x516));

    if (t12 != 79584U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x790 = 1;
	int16_t x791 = INT16_MIN;
	int16_t x792 = -1;
	volatile int32_t t13 = -3793;

    t13 = (x789<<((x790%x791)+x792));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x967 = -45;
	int8_t x968 = -1;
	int32_t t14 = 0;

    t14 = (x965<<((x966%x967)+x968));

    if (t14 != 384) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1022 = UINT8_MAX;
	static volatile int16_t x1023 = -32;
	int8_t x1024 = -1;
	uint64_t t15 = 65668604LLU;

    t15 = (x1021<<((x1022%x1023)+x1024));

    if (t15 != 780134997049737216LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x1053 = INT16_MAX;
	int64_t x1054 = INT64_MIN;

    t16 = (x1053<<((x1054%x1055)+x1056));

    if (t16 != 524272) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1249 = 995LLU;
	int32_t x1250 = INT32_MAX;
	volatile int32_t x1251 = -2;
	int64_t x1252 = -1LL;
	static uint64_t t17 = 28LLU;

    t17 = (x1249<<((x1250%x1251)+x1252));

    if (t17 != 995LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1302 = 28;
	volatile int32_t x1303 = INT32_MAX;
	static volatile uint64_t x1304 = UINT64_MAX;
	uint32_t t18 = 7924853U;

    t18 = (x1301<<((x1302%x1303)+x1304));

    if (t18 != 1610612736U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1343 = INT8_MAX;
	int16_t x1344 = 8;
	static int64_t t19 = -123573599231982LL;

    t19 = (x1341<<((x1342%x1343)+x1344));

    if (t19 != 1865063782400LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1461 = 115U;
	int64_t x1462 = -1LL;
	volatile int32_t t20 = 32238;

    t20 = (x1461<<((x1462%x1463)+x1464));

    if (t20 != 1840) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1481 = UINT16_MAX;
	int64_t x1482 = -1LL;
	static uint32_t x1483 = 6015303U;
	int8_t x1484 = 1;
	int32_t t21 = -12216558;

    t21 = (x1481<<((x1482%x1483)+x1484));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1505 = 1;
	uint8_t x1506 = UINT8_MAX;
	int8_t x1507 = -1;
	uint8_t x1508 = 1U;
	int32_t t22 = -7;

    t22 = (x1505<<((x1506%x1507)+x1508));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x1529 = 25476U;
	int32_t t23 = 113;

    t23 = (x1529<<((x1530%x1531)+x1532));

    if (t23 != 101904) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x1701 = 18223U;
	static volatile int32_t x1702 = INT32_MIN;
	int8_t x1703 = INT8_MIN;
	uint32_t x1704 = 4U;
	int32_t t24 = -2679189;

    t24 = (x1701<<((x1702%x1703)+x1704));

    if (t24 != 291568) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1705 = INT16_MAX;
	static int64_t x1707 = -1LL;
	int8_t x1708 = 1;
	static volatile int32_t t25 = 47468;

    t25 = (x1705<<((x1706%x1707)+x1708));

    if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1725 = 10U;
	uint64_t x1726 = 68357772421LLU;
	volatile int32_t t26 = -1677544;

    t26 = (x1725<<((x1726%x1727)+x1728));

    if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x1761 = UINT16_MAX;
	int16_t x1763 = -3;
	uint8_t x1764 = 3U;
	static volatile int32_t t27 = 0;

    t27 = (x1761<<((x1762%x1763)+x1764));

    if (t27 != 262140) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1849 = UINT8_MAX;
	uint32_t x1850 = UINT32_MAX;
	uint32_t x1852 = UINT32_MAX;

    t28 = (x1849<<((x1850%x1851)+x1852));

    if (t28 != 4080) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x2001 = 3;
	uint16_t x2003 = 2386U;
	uint8_t x2004 = 1U;
	int32_t t29 = -52316003;

    t29 = (x2001<<((x2002%x2003)+x2004));

    if (t29 != 3) { NG(); } else { ; }
	
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


    return 0;
}

