
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

volatile uint16_t x25 = 23U;
int32_t x27 = INT32_MIN;
static volatile int64_t x34 = INT64_MIN;
int64_t x35 = INT64_MIN;
uint32_t x61 = UINT32_MAX;
volatile int8_t x63 = -14;
volatile uint32_t t2 = 122721U;
int16_t x109 = INT16_MAX;
uint16_t x218 = 0U;
uint32_t x326 = 20U;
static uint32_t x327 = 7192701U;
uint64_t t5 = 92LLU;
static int64_t x381 = 46363181LL;
static int8_t x431 = -1;
int64_t t8 = 1788922540792366384LL;
int16_t x652 = 2;
uint8_t x746 = 100U;
volatile int16_t x747 = INT16_MIN;
int32_t t11 = -1;
uint8_t x765 = 50U;
uint64_t t13 = 6371723908LLU;
uint64_t x1099 = UINT64_MAX;
uint64_t x1177 = 4717880371374LLU;
uint64_t x1397 = 636226015374809855LLU;
int16_t x1398 = 2500;
int16_t x1463 = INT16_MIN;
volatile uint32_t x1486 = 601U;
volatile int32_t t21 = 0;
int32_t x1731 = INT32_MAX;
volatile int64_t t25 = -11LL;
int8_t x1902 = INT8_MAX;
static int8_t x2322 = INT8_MAX;
uint8_t x2513 = 14U;


void f0(void) {
    	int64_t x26 = -9735333145LL;
	static uint16_t x28 = 0U;
	volatile int32_t t0 = -97111430;

    t0 = (x25>>((x26/x27)+x28));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x33 = 6U;
	volatile int8_t x36 = -1;
	static int32_t t1 = -143003;

    t1 = (x33>>((x34/x35)+x36));

    if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x62 = UINT32_MAX;
	volatile uint8_t x64 = 1U;

    t2 = (x61>>((x62/x63)+x64));

    if (t2 != 1073741823U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x110 = INT8_MAX;
	uint32_t x111 = 170298848U;
	uint32_t x112 = 1U;
	volatile int32_t t3 = 19122917;

    t3 = (x109>>((x110/x111)+x112));

    if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x217 = 570117574LLU;
	int8_t x219 = INT8_MIN;
	int8_t x220 = 62;
	volatile uint64_t t4 = 266LLU;

    t4 = (x217>>((x218/x219)+x220));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	static uint16_t x328 = 5U;

    t5 = (x325>>((x326/x327)+x328));

    if (t5 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x382 = INT64_MIN;
	static int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	volatile int64_t t6 = 175LL;

    t6 = (x381>>((x382/x383)+x384));

    if (t6 != 46363181LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x397 = 53U;
	uint8_t x398 = UINT8_MAX;
	static uint64_t x399 = 7789181389536LLU;
	int16_t x400 = 16;
	int32_t t7 = -2562;

    t7 = (x397>>((x398/x399)+x400));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x429 = 123727LL;
	uint32_t x430 = 45556049U;
	uint16_t x432 = 3U;

    t8 = (x429>>((x430/x431)+x432));

    if (t8 != 15465LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	int32_t x500 = 2;
	volatile uint64_t t9 = 10871693580467LLU;

    t9 = (x497>>((x498/x499)+x500));

    if (t9 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x649 = 122027U;
	int8_t x650 = -24;
	volatile int32_t x651 = INT32_MAX;
	uint32_t t10 = 63305787U;

    t10 = (x649>>((x650/x651)+x652));

    if (t10 != 30506U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x745 = 1168838;
	int8_t x748 = 3;

    t11 = (x745>>((x746/x747)+x748));

    if (t11 != 146104) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x766 = 3963242209LLU;
	volatile int64_t x767 = INT64_MAX;
	int16_t x768 = 0;
	static volatile int32_t t12 = 98;

    t12 = (x765>>((x766/x767)+x768));

    if (t12 != 50) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x909 = 569483900450077LLU;
	static int16_t x910 = INT16_MIN;
	int32_t x911 = -3329;
	volatile uint8_t x912 = 18U;

    t13 = (x909>>((x910/x911)+x912));

    if (t13 != 4242985LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x921 = 1013753938LLU;
	volatile uint8_t x922 = UINT8_MAX;
	int32_t x923 = -13535764;
	int8_t x924 = 2;
	volatile uint64_t t14 = 10855155299206842LLU;

    t14 = (x921>>((x922/x923)+x924));

    if (t14 != 253438484LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1097 = UINT8_MAX;
	volatile uint64_t x1098 = 621513973984LLU;
	int32_t x1100 = 0;
	int32_t t15 = -32679;

    t15 = (x1097>>((x1098/x1099)+x1100));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x1178 = 3U;
	static int32_t x1179 = -1;
	int8_t x1180 = 17;
	volatile uint64_t t16 = 22098LLU;

    t16 = (x1177>>((x1178/x1179)+x1180));

    if (t16 != 35994570LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x1249 = 1U;
	int32_t x1250 = -1;
	static int64_t x1251 = -1LL;
	static int64_t x1252 = -1LL;
	static int32_t t17 = 27617;

    t17 = (x1249>>((x1250/x1251)+x1252));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1399 = 123;
	int8_t x1400 = 0;
	static volatile uint64_t t18 = 478720LLU;

    t18 = (x1397>>((x1398/x1399)+x1400));

    if (t18 != 606752410292LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1461 = 159712382936591LLU;
	static volatile int64_t x1462 = -1LL;
	static uint16_t x1464 = 3U;
	uint64_t t19 = 24LLU;

    t19 = (x1461>>((x1462/x1463)+x1464));

    if (t19 != 19964047867073LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1485 = INT32_MAX;
	int16_t x1487 = -1;
	static int8_t x1488 = 6;
	int32_t t20 = 209;

    t20 = (x1485>>((x1486/x1487)+x1488));

    if (t20 != 33554431) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1489 = 28U;
	uint32_t x1490 = 10705195U;
	static volatile int16_t x1491 = INT16_MIN;
	static uint16_t x1492 = 0U;

    t21 = (x1489>>((x1490/x1491)+x1492));

    if (t21 != 28) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1597 = 54;
	uint64_t x1598 = UINT64_MAX;
	static int64_t x1599 = INT64_MIN;
	volatile int16_t x1600 = -1;
	static int32_t t22 = -90;

    t22 = (x1597>>((x1598/x1599)+x1600));

    if (t22 != 54) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1721 = INT64_MAX;
	uint16_t x1722 = 11U;
	int32_t x1723 = -7;
	volatile int16_t x1724 = 9;
	volatile int64_t t23 = -1LL;

    t23 = (x1721>>((x1722/x1723)+x1724));

    if (t23 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1729 = 1542;
	int8_t x1730 = -1;
	uint8_t x1732 = 3U;
	volatile int32_t t24 = 0;

    t24 = (x1729>>((x1730/x1731)+x1732));

    if (t24 != 192) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1745 = INT64_MAX;
	static uint8_t x1746 = 3U;
	int16_t x1747 = 2938;
	int8_t x1748 = 1;

    t25 = (x1745>>((x1746/x1747)+x1748));

    if (t25 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1901 = INT8_MAX;
	uint8_t x1903 = 4U;
	uint64_t x1904 = UINT64_MAX;
	volatile int32_t t26 = 86518;

    t26 = (x1901>>((x1902/x1903)+x1904));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2153 = 17723U;
	volatile int64_t x2154 = -1LL;
	volatile int16_t x2155 = INT16_MIN;
	int16_t x2156 = 1;
	int32_t t27 = 261842393;

    t27 = (x2153>>((x2154/x2155)+x2156));

    if (t27 != 8861) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x2181 = INT8_MAX;
	static uint64_t x2182 = 4485447LLU;
	int64_t x2183 = 143231879LL;
	int8_t x2184 = 1;
	volatile int32_t t28 = -1;

    t28 = (x2181>>((x2182/x2183)+x2184));

    if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2321 = INT32_MAX;
	static uint32_t x2323 = 43U;
	volatile uint64_t x2324 = 17LLU;
	int32_t t29 = 14;

    t29 = (x2321>>((x2322/x2323)+x2324));

    if (t29 != 4095) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x2501 = 77189128U;
	static int32_t x2502 = -1;
	volatile int32_t x2503 = -1;
	int64_t x2504 = -1LL;
	volatile uint32_t t30 = 205U;

    t30 = (x2501>>((x2502/x2503)+x2504));

    if (t30 != 77189128U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x2514 = UINT16_MAX;
	uint16_t x2515 = 4090U;
	uint16_t x2516 = 13U;
	static int32_t t31 = -26;

    t31 = (x2513>>((x2514/x2515)+x2516));

    if (t31 != 0) { NG(); } else { ; }
	
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


    return 0;
}

