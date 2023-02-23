
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

uint8_t x36 = 1U;
int32_t x89 = INT32_MAX;
uint8_t x90 = 1U;
uint16_t x171 = 1264U;
static uint8_t x227 = 2U;
int32_t x228 = 1;
int32_t t6 = -8052;
int64_t x294 = INT64_MIN;
uint8_t x296 = 28U;
uint16_t x384 = 0U;
uint8_t x717 = UINT8_MAX;
int16_t x725 = INT16_MIN;
int32_t t13 = 885;
int64_t x857 = 74913LL;
int32_t x858 = -1;
int8_t x869 = -1;
int8_t x885 = -1;
static volatile int32_t x888 = 1;
uint32_t x989 = 6U;
uint8_t x992 = 3U;
uint8_t x1224 = 27U;
volatile uint16_t x1320 = 7U;
int16_t x1405 = -13668;
uint32_t x1413 = UINT32_MAX;
int8_t x1414 = INT8_MIN;
int8_t x1499 = INT8_MIN;
volatile int32_t t28 = -1166;
int8_t x1502 = INT8_MAX;
static int32_t x1551 = 3755188;
int16_t x1560 = 1;
volatile uint8_t x1615 = 1U;
int64_t t33 = -71634196423763653LL;
volatile uint32_t x1648 = 0U;
uint16_t x1696 = 6U;
uint64_t x1733 = 2764851047195344LLU;
uint8_t x1736 = 26U;
uint64_t t36 = 45702268LLU;
volatile int16_t x1791 = -1;
int32_t x1923 = INT32_MIN;
int32_t t38 = -141036920;
volatile int32_t t40 = -310897148;
int64_t x1989 = -1LL;
uint8_t x1992 = 3U;
volatile int64_t x2062 = -1LL;
volatile int32_t t43 = 608537756;
static uint16_t x2082 = 3U;
int8_t x2113 = INT8_MIN;
static volatile uint8_t x2154 = 1U;
uint16_t x2155 = UINT16_MAX;
uint8_t x2176 = 6U;


void f0(void) {
    	int32_t x33 = -2;
	int32_t x34 = -1;
	uint8_t x35 = 15U;
	static volatile int32_t t0 = -326408675;

    t0 = (x33%((x34<=x35)<<x36));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x91 = 17316074623LLU;
	uint8_t x92 = 4U;
	volatile int32_t t1 = -29;

    t1 = (x89%((x90<=x91)<<x92));

    if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x169 = INT8_MIN;
	static int64_t x170 = -6097310LL;
	uint8_t x172 = 3U;
	int32_t t2 = 2990533;

    t2 = (x169%((x170<=x171)<<x172));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x217 = 0;
	uint16_t x218 = 637U;
	volatile uint64_t x219 = 2887LLU;
	uint8_t x220 = 7U;
	volatile int32_t t3 = -57;

    t3 = (x217%((x218<=x219)<<x220));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x225 = 1U;
	volatile int32_t x226 = INT32_MIN;
	static volatile int32_t t4 = 39;

    t4 = (x225%((x226<=x227)<<x228));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x245 = -16;
	int64_t x246 = -1LL;
	static int32_t x247 = -1;
	uint16_t x248 = 10U;
	static int32_t t5 = 132;

    t5 = (x245%((x246<=x247)<<x248));

    if (t5 != -16) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x269 = 1;
	volatile int64_t x270 = INT64_MIN;
	volatile int64_t x271 = 111824544098LL;
	int8_t x272 = 1;

    t6 = (x269%((x270<=x271)<<x272));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x293 = -15915161LL;
	uint16_t x295 = 0U;
	static int64_t t7 = 30867340572565LL;

    t7 = (x293%((x294<=x295)<<x296));

    if (t7 != -15915161LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x357 = UINT64_MAX;
	int8_t x358 = 1;
	volatile uint8_t x359 = UINT8_MAX;
	int8_t x360 = 12;
	uint64_t t8 = 200LLU;

    t8 = (x357%((x358<=x359)<<x360));

    if (t8 != 4095LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x381 = 13996;
	uint8_t x382 = 12U;
	static int8_t x383 = INT8_MAX;
	static int32_t t9 = -1489884;

    t9 = (x381%((x382<=x383)<<x384));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x425 = 245;
	static uint16_t x426 = UINT16_MAX;
	uint64_t x427 = 1704003724323891LLU;
	volatile uint16_t x428 = 11U;
	int32_t t10 = 8168137;

    t10 = (x425%((x426<=x427)<<x428));

    if (t10 != 245) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x541 = UINT8_MAX;
	int32_t x542 = -1;
	uint8_t x543 = UINT8_MAX;
	static uint8_t x544 = 3U;
	int32_t t11 = -34;

    t11 = (x541%((x542<=x543)<<x544));

    if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x718 = UINT8_MAX;
	int64_t x719 = INT64_MAX;
	int8_t x720 = 0;
	volatile int32_t t12 = -48137;

    t12 = (x717%((x718<=x719)<<x720));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x726 = INT64_MIN;
	int16_t x727 = 1;
	int16_t x728 = 2;

    t13 = (x725%((x726<=x727)<<x728));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x729 = INT32_MAX;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MAX;
	int16_t x732 = 16;
	static int32_t t14 = 3339;

    t14 = (x729%((x730<=x731)<<x732));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x833 = 62;
	int32_t x834 = INT32_MIN;
	int8_t x835 = INT8_MIN;
	static uint64_t x836 = 5LLU;
	int32_t t15 = 15;

    t15 = (x833%((x834<=x835)<<x836));

    if (t15 != 30) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x859 = 0LL;
	uint8_t x860 = 27U;
	int64_t t16 = -3987685197363LL;

    t16 = (x857%((x858<=x859)<<x860));

    if (t16 != 74913LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x870 = 0;
	uint16_t x871 = UINT16_MAX;
	uint16_t x872 = 1U;
	volatile int32_t t17 = 2150;

    t17 = (x869%((x870<=x871)<<x872));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x886 = INT8_MIN;
	uint16_t x887 = 97U;
	int32_t t18 = 4313577;

    t18 = (x885%((x886<=x887)<<x888));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x977 = INT16_MAX;
	volatile uint64_t x978 = UINT64_MAX;
	uint64_t x979 = UINT64_MAX;
	uint16_t x980 = 5U;
	int32_t t19 = -102190915;

    t19 = (x977%((x978<=x979)<<x980));

    if (t19 != 31) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x990 = -1LL;
	uint8_t x991 = 0U;
	volatile uint32_t t20 = 1698671U;

    t20 = (x989%((x990<=x991)<<x992));

    if (t20 != 6U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1017 = INT16_MIN;
	int64_t x1018 = -1LL;
	uint8_t x1019 = 0U;
	int8_t x1020 = 11;
	int32_t t21 = -135196270;

    t21 = (x1017%((x1018<=x1019)<<x1020));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1221 = INT8_MAX;
	int32_t x1222 = 1;
	int8_t x1223 = 37;
	int32_t t22 = 1;

    t22 = (x1221%((x1222<=x1223)<<x1224));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1301 = INT64_MAX;
	int32_t x1302 = INT32_MIN;
	static int16_t x1303 = INT16_MAX;
	static volatile uint64_t x1304 = 5LLU;
	int64_t t23 = 11285881LL;

    t23 = (x1301%((x1302<=x1303)<<x1304));

    if (t23 != 31LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1317 = 1465U;
	volatile int16_t x1318 = -2;
	int8_t x1319 = 4;
	int32_t t24 = 9;

    t24 = (x1317%((x1318<=x1319)<<x1320));

    if (t24 != 57) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1389 = 1U;
	int32_t x1390 = -1;
	int64_t x1391 = 64742LL;
	uint8_t x1392 = 11U;
	volatile int32_t t25 = -42853049;

    t25 = (x1389%((x1390<=x1391)<<x1392));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1406 = 4009080U;
	int16_t x1407 = -2;
	uint16_t x1408 = 27U;
	static int32_t t26 = 5079966;

    t26 = (x1405%((x1406<=x1407)<<x1408));

    if (t26 != -13668) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1415 = -1;
	uint16_t x1416 = 7U;
	static uint32_t t27 = 0U;

    t27 = (x1413%((x1414<=x1415)<<x1416));

    if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x1497 = 2U;
	uint32_t x1498 = 27488714U;
	uint8_t x1500 = 1U;

    t28 = (x1497%((x1498<=x1499)<<x1500));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1501 = -6383;
	static uint64_t x1503 = 45103917215071467LLU;
	int16_t x1504 = 0;
	int32_t t29 = -49579;

    t29 = (x1501%((x1502<=x1503)<<x1504));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1549 = UINT16_MAX;
	int32_t x1550 = INT32_MIN;
	int32_t x1552 = 3;
	int32_t t30 = 14533;

    t30 = (x1549%((x1550<=x1551)<<x1552));

    if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x1557 = INT16_MIN;
	int32_t x1558 = 149;
	static uint16_t x1559 = 6968U;
	volatile int32_t t31 = -11170;

    t31 = (x1557%((x1558<=x1559)<<x1560));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1589 = INT32_MIN;
	int16_t x1590 = -223;
	static int16_t x1591 = -5;
	uint16_t x1592 = 12U;
	int32_t t32 = -618012;

    t32 = (x1589%((x1590<=x1591)<<x1592));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x1613 = INT64_MIN;
	int16_t x1614 = INT16_MIN;
	static uint8_t x1616 = 2U;

    t33 = (x1613%((x1614<=x1615)<<x1616));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1645 = UINT8_MAX;
	uint64_t x1646 = 6LLU;
	int16_t x1647 = -3950;
	volatile int32_t t34 = 1948;

    t34 = (x1645%((x1646<=x1647)<<x1648));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1693 = 134LLU;
	volatile int32_t x1694 = -1;
	static int16_t x1695 = INT16_MAX;
	uint64_t t35 = 509271777606300346LLU;

    t35 = (x1693%((x1694<=x1695)<<x1696));

    if (t35 != 6LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1734 = 175U;
	static uint32_t x1735 = 1908974U;

    t36 = (x1733%((x1734<=x1735)<<x1736));

    if (t36 != 8807120LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1789 = INT8_MIN;
	int16_t x1790 = INT16_MIN;
	uint8_t x1792 = 7U;
	volatile int32_t t37 = 26644793;

    t37 = (x1789%((x1790<=x1791)<<x1792));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1921 = -30;
	static int64_t x1922 = -1502619608739LL;
	static uint8_t x1924 = 1U;

    t38 = (x1921%((x1922<=x1923)<<x1924));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x1941 = INT32_MIN;
	static volatile int16_t x1942 = INT16_MIN;
	uint16_t x1943 = UINT16_MAX;
	uint32_t x1944 = 0U;
	int32_t t39 = -479451850;

    t39 = (x1941%((x1942<=x1943)<<x1944));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x1953 = -1;
	int64_t x1954 = INT64_MIN;
	volatile int64_t x1955 = -1LL;
	volatile uint8_t x1956 = 6U;

    t40 = (x1953%((x1954<=x1955)<<x1956));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x1990 = 568402887U;
	volatile int16_t x1991 = INT16_MIN;
	static int64_t t41 = -83962726579935039LL;

    t41 = (x1989%((x1990<=x1991)<<x1992));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x2061 = 413LLU;
	int64_t x2063 = 36250912056LL;
	static uint16_t x2064 = 3U;
	volatile uint64_t t42 = 3LLU;

    t42 = (x2061%((x2062<=x2063)<<x2064));

    if (t42 != 5LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x2065 = 0;
	volatile int32_t x2066 = INT32_MIN;
	int64_t x2067 = -38LL;
	uint8_t x2068 = 6U;

    t43 = (x2065%((x2066<=x2067)<<x2068));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2081 = INT16_MIN;
	uint64_t x2083 = UINT64_MAX;
	uint8_t x2084 = 21U;
	int32_t t44 = 1;

    t44 = (x2081%((x2082<=x2083)<<x2084));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2114 = INT8_MIN;
	uint32_t x2115 = UINT32_MAX;
	int16_t x2116 = 22;
	int32_t t45 = -2;

    t45 = (x2113%((x2114<=x2115)<<x2116));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x2141 = 18U;
	int64_t x2142 = -4917LL;
	uint16_t x2143 = 6870U;
	int8_t x2144 = 1;
	int32_t t46 = 567345;

    t46 = (x2141%((x2142<=x2143)<<x2144));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x2153 = INT8_MIN;
	uint8_t x2156 = 6U;
	int32_t t47 = 1;

    t47 = (x2153%((x2154<=x2155)<<x2156));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x2173 = 6333918LLU;
	static int16_t x2174 = 1;
	uint64_t x2175 = 211053385161LLU;
	static uint64_t t48 = 1992613012007LLU;

    t48 = (x2173%((x2174<=x2175)<<x2176));

    if (t48 != 30LLU) { NG(); } else { ; }
	
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
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();


    return 0;
}

