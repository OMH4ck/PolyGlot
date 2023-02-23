
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

volatile uint8_t x13 = UINT8_MAX;
static int32_t t0 = 219871;
static uint8_t x202 = UINT8_MAX;
int32_t t3 = 0;
static int32_t x326 = -1;
static volatile int32_t x330 = 53782405;
uint64_t x423 = 29LLU;
int32_t x424 = -18;
uint64_t x593 = UINT64_MAX;
static int16_t x596 = 28;
volatile int32_t t9 = 1;
static volatile int32_t t10 = 990;
static volatile uint32_t x855 = 1541031671U;
uint16_t x870 = 13474U;
int8_t x1137 = 0;
uint64_t x1139 = 137906LLU;
int64_t x1203 = -457846LL;
int64_t x1377 = 5312LL;
volatile uint64_t t20 = 2795931516LLU;
uint8_t x1542 = 8U;
static int8_t x1544 = 1;
int64_t x1671 = INT64_MIN;
volatile uint16_t x1672 = 15U;
int16_t x2113 = 118;
int8_t x2116 = 28;
static int8_t x2172 = 0;
uint16_t x2285 = 17528U;
uint64_t x2286 = 8LLU;
static volatile uint16_t x2297 = 2389U;
int32_t x2299 = -1;
int32_t t30 = -61557;
volatile uint8_t x2451 = UINT8_MAX;
uint16_t x2734 = 3U;
uint16_t x2774 = 1U;
uint8_t x2869 = 49U;
volatile int8_t x3040 = 3;
int8_t x3083 = INT8_MIN;
static volatile int64_t x3166 = INT64_MIN;
static int64_t x3167 = INT64_MAX;
int64_t x3178 = INT64_MAX;
uint64_t t40 = 138403812000057LLU;
uint64_t x3299 = 141745786946028195LLU;
int32_t x3424 = -1;
volatile uint64_t t44 = 1656789794051LLU;
uint8_t x3533 = 62U;
uint16_t x3567 = 0U;
volatile int32_t x3576 = 6;
uint8_t x3600 = 0U;
static uint8_t x3767 = UINT8_MAX;
int8_t x4080 = -1;
volatile int32_t t55 = -87;
static int32_t x4171 = INT32_MIN;
static volatile int8_t x4174 = INT8_MAX;
volatile uint16_t x4222 = 855U;
volatile int32_t t58 = -81;
uint32_t x4340 = UINT32_MAX;
volatile uint64_t t60 = 3LLU;
uint16_t x4605 = 0U;
int32_t x4606 = 1;
int16_t x4607 = INT16_MIN;
int64_t x4626 = -1LL;
uint8_t x4645 = 63U;
uint8_t x4646 = 7U;
uint8_t x4648 = 13U;
int32_t x5041 = INT32_MAX;
volatile int8_t x5128 = 1;
int32_t t66 = -843;
int8_t x5195 = INT8_MAX;
uint8_t x5379 = UINT8_MAX;
int64_t x5462 = INT64_MAX;
uint32_t x5517 = 352472U;
volatile int8_t x5631 = INT8_MIN;
uint8_t x5636 = 0U;
static uint8_t x5680 = 31U;
int32_t t75 = -92586;
volatile int32_t t76 = 20;
int64_t x5835 = 1LL;
static int64_t x5854 = INT64_MIN;
uint8_t x5856 = 0U;
uint8_t x5907 = 6U;
uint64_t t79 = 92084777480309021LLU;
volatile int32_t x6027 = INT32_MIN;
uint64_t t83 = 447573482338LLU;
int64_t x6789 = 1006147086769907LL;
uint8_t x6935 = UINT8_MAX;
int32_t x7017 = 2;
uint8_t x7018 = 7U;
int32_t t89 = 2;
volatile int32_t x7374 = INT32_MIN;
static uint32_t x7375 = 0U;
volatile int64_t t91 = -41027293LL;
int16_t x7586 = INT16_MAX;
uint8_t x7623 = UINT8_MAX;
uint64_t x7681 = 0LLU;
int8_t x7682 = INT8_MAX;
static volatile uint64_t x7684 = 9LLU;
int64_t x7876 = -1LL;
int8_t x7958 = INT8_MAX;
uint64_t x7959 = 32138830642562560LLU;
int32_t x8051 = 0;
static volatile int32_t t102 = 685473133;
uint64_t x8467 = 1358LLU;
int32_t t107 = -10;
uint32_t x8477 = 16556U;
uint8_t x8502 = UINT8_MAX;
uint8_t x8961 = UINT8_MAX;
volatile int32_t t112 = 606;
volatile int32_t x8996 = 0;
static uint32_t t113 = UINT32_MAX;
int16_t x9005 = 2885;
volatile int64_t x9032 = -1LL;
volatile int32_t t115 = -34452352;
int8_t x9128 = -1;
uint32_t x9213 = UINT32_MAX;
static volatile uint8_t x9418 = 1U;
static int32_t t123 = -1;
int32_t x9799 = INT32_MIN;
int16_t x9800 = 27;
volatile int32_t t124 = -238;
volatile uint32_t x9877 = 1256U;
int64_t x9966 = 15LL;
int16_t x9968 = -1;


void f0(void) {
    	uint32_t x14 = UINT32_MAX;
	int16_t x15 = 4;
	static int16_t x16 = -1;

    t0 = (x13>>((x14&x15)+x16));

    if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x153 = 1U;
	uint8_t x154 = 14U;
	int64_t x155 = 3939354892948867577LL;
	int16_t x156 = 0;
	volatile uint32_t t1 = 115740U;

    t1 = (x153>>((x154&x155)+x156));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x157 = 4LLU;
	uint32_t x158 = 192568830U;
	int32_t x159 = INT32_MIN;
	static uint8_t x160 = 30U;
	static volatile uint64_t t2 = 95LLU;

    t2 = (x157>>((x158&x159)+x160));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x201 = UINT8_MAX;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = -246;

    t3 = (x201>>((x202&x203)+x204));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x325 = INT32_MAX;
	int64_t x327 = -1LL;
	uint8_t x328 = 12U;
	int32_t t4 = 14222512;

    t4 = (x325>>((x326&x327)+x328));

    if (t4 != 1048575) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile int8_t x331 = 1;
	uint16_t x332 = 1U;
	volatile uint64_t t5 = 3LLU;

    t5 = (x329>>((x330&x331)+x332));

    if (t5 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x421 = 26;
	static int16_t x422 = -1;
	int32_t t6 = -48086710;

    t6 = (x421>>((x422&x423)+x424));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x594 = INT32_MAX;
	int32_t x595 = INT32_MIN;
	volatile uint64_t t7 = 96LLU;

    t7 = (x593>>((x594&x595)+x596));

    if (t7 != 68719476735LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x645 = INT64_MAX;
	static volatile int8_t x646 = -7;
	volatile int16_t x647 = 6;
	static volatile int8_t x648 = 15;
	int64_t t8 = 27680291673074908LL;

    t8 = (x645>>((x646&x647)+x648));

    if (t8 != 281474976710655LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x693 = INT32_MAX;
	volatile int8_t x694 = 3;
	volatile int16_t x695 = 7;
	int16_t x696 = 19;

    t9 = (x693>>((x694&x695)+x696));

    if (t9 != 511) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x725 = UINT16_MAX;
	static int32_t x726 = -1;
	int16_t x727 = 1;
	int8_t x728 = -1;

    t10 = (x725>>((x726&x727)+x728));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x849 = 101U;
	static uint8_t x850 = 1U;
	uint16_t x851 = 5U;
	uint8_t x852 = 10U;
	volatile int32_t t11 = -29;

    t11 = (x849>>((x850&x851)+x852));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x853 = 12U;
	int8_t x854 = 6;
	int8_t x856 = -1;
	uint32_t t12 = 694867534U;

    t12 = (x853>>((x854&x855)+x856));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x869 = UINT64_MAX;
	uint16_t x871 = 3U;
	uint32_t x872 = UINT32_MAX;
	uint64_t t13 = 1593547LLU;

    t13 = (x869>>((x870&x871)+x872));

    if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1053 = 211;
	uint16_t x1054 = 1U;
	volatile uint64_t x1055 = 16376006579LLU;
	uint64_t x1056 = UINT64_MAX;
	int32_t t14 = 313044;

    t14 = (x1053>>((x1054&x1055)+x1056));

    if (t14 != 211) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1073 = 8205024311LLU;
	int16_t x1074 = -1;
	int8_t x1075 = 7;
	int32_t x1076 = -1;
	uint64_t t15 = 15409503LLU;

    t15 = (x1073>>((x1074&x1075)+x1076));

    if (t15 != 128203504LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x1113 = 750341139LLU;
	volatile int8_t x1114 = 1;
	volatile int64_t x1115 = 154561495LL;
	int32_t x1116 = -1;
	uint64_t t16 = 14243820042529LLU;

    t16 = (x1113>>((x1114&x1115)+x1116));

    if (t16 != 750341139LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x1138 = 1U;
	int8_t x1140 = 9;
	static volatile int32_t t17 = 82880144;

    t17 = (x1137>>((x1138&x1139)+x1140));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1201 = 20;
	uint8_t x1202 = 3U;
	int32_t x1204 = -1;
	volatile int32_t t18 = -135;

    t18 = (x1201>>((x1202&x1203)+x1204));

    if (t18 != 10) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1378 = INT8_MIN;
	volatile int16_t x1379 = 1;
	int8_t x1380 = 31;
	static int64_t t19 = 33LL;

    t19 = (x1377>>((x1378&x1379)+x1380));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1449 = UINT64_MAX;
	int16_t x1450 = INT16_MIN;
	int32_t x1451 = 4;
	uint16_t x1452 = 45U;

    t20 = (x1449>>((x1450&x1451)+x1452));

    if (t20 != 524287LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1541 = 5U;
	volatile uint64_t x1543 = 7741LLU;
	int32_t t21 = 1981377;

    t21 = (x1541>>((x1542&x1543)+x1544));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1669 = 7072212;
	uint8_t x1670 = UINT8_MAX;
	volatile int32_t t22 = 6;

    t22 = (x1669>>((x1670&x1671)+x1672));

    if (t22 != 215) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x1681 = 1U;
	volatile int64_t x1682 = 607001LL;
	int32_t x1683 = INT32_MIN;
	uint8_t x1684 = 19U;
	int32_t t23 = 2;

    t23 = (x1681>>((x1682&x1683)+x1684));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x2001 = UINT16_MAX;
	int16_t x2002 = INT16_MIN;
	uint8_t x2003 = 19U;
	static int16_t x2004 = 2;
	static volatile int32_t t24 = -8332029;

    t24 = (x2001>>((x2002&x2003)+x2004));

    if (t24 != 16383) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x2017 = 323U;
	uint64_t x2018 = 87LLU;
	int64_t x2019 = 2932909298075LL;
	static uint16_t x2020 = 1U;
	volatile int32_t t25 = 1754;

    t25 = (x2017>>((x2018&x2019)+x2020));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x2114 = 3U;
	int64_t x2115 = -1LL;
	volatile int32_t t26 = -125825270;

    t26 = (x2113>>((x2114&x2115)+x2116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x2125 = 308LL;
	int8_t x2126 = INT8_MIN;
	uint16_t x2127 = 28U;
	uint8_t x2128 = 23U;
	volatile int64_t t27 = -12423030170890490LL;

    t27 = (x2125>>((x2126&x2127)+x2128));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2169 = UINT64_MAX;
	volatile uint8_t x2170 = 3U;
	int32_t x2171 = -1;
	volatile uint64_t t28 = 18194039763LLU;

    t28 = (x2169>>((x2170&x2171)+x2172));

    if (t28 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x2287 = UINT8_MAX;
	static uint64_t x2288 = 14LLU;
	int32_t t29 = 475;

    t29 = (x2285>>((x2286&x2287)+x2288));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2298 = 30U;
	uint8_t x2300 = 0U;

    t30 = (x2297>>((x2298&x2299)+x2300));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x2449 = 918391799278289394LLU;
	int64_t x2450 = INT64_MIN;
	static int8_t x2452 = 5;
	uint64_t t31 = 13LLU;

    t31 = (x2449>>((x2450&x2451)+x2452));

    if (t31 != 28699743727446543LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x2733 = 102U;
	uint32_t x2735 = UINT32_MAX;
	uint32_t x2736 = 1U;
	static uint32_t t32 = 606200380U;

    t32 = (x2733>>((x2734&x2735)+x2736));

    if (t32 != 6U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x2773 = 2U;
	int32_t x2775 = -1;
	static uint32_t x2776 = 5U;
	volatile int32_t t33 = -1;

    t33 = (x2773>>((x2774&x2775)+x2776));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2870 = 29;
	static int16_t x2871 = -63;
	volatile uint8_t x2872 = 0U;
	volatile int32_t t34 = -536905;

    t34 = (x2869>>((x2870&x2871)+x2872));

    if (t34 != 24) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x3037 = INT16_MAX;
	int64_t x3038 = -13795LL;
	static int8_t x3039 = 1;
	volatile int32_t t35 = 602975885;

    t35 = (x3037>>((x3038&x3039)+x3040));

    if (t35 != 2047) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x3081 = INT16_MAX;
	uint32_t x3082 = 143U;
	int16_t x3084 = -103;
	volatile int32_t t36 = 15025;

    t36 = (x3081>>((x3082&x3083)+x3084));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x3153 = 1U;
	int16_t x3154 = -3865;
	uint8_t x3155 = 10U;
	uint32_t x3156 = UINT32_MAX;
	volatile int32_t t37 = 160287322;

    t37 = (x3153>>((x3154&x3155)+x3156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x3165 = INT8_MAX;
	static int32_t x3168 = 4;
	int32_t t38 = -242667748;

    t38 = (x3165>>((x3166&x3167)+x3168));

    if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x3177 = 1U;
	uint8_t x3179 = 0U;
	static int8_t x3180 = 0;
	int32_t t39 = -11259809;

    t39 = (x3177>>((x3178&x3179)+x3180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x3197 = UINT64_MAX;
	int32_t x3198 = -1;
	int64_t x3199 = -1LL;
	static volatile int8_t x3200 = 8;

    t40 = (x3197>>((x3198&x3199)+x3200));

    if (t40 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x3297 = 25U;
	uint16_t x3298 = 1U;
	int16_t x3300 = -1;
	int32_t t41 = -1442;

    t41 = (x3297>>((x3298&x3299)+x3300));

    if (t41 != 25) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x3417 = INT8_MAX;
	int8_t x3418 = 0;
	uint32_t x3419 = 14722U;
	int16_t x3420 = 1;
	int32_t t42 = -5;

    t42 = (x3417>>((x3418&x3419)+x3420));

    if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x3421 = INT16_MAX;
	uint8_t x3422 = UINT8_MAX;
	int8_t x3423 = 1;
	volatile int32_t t43 = -298114;

    t43 = (x3421>>((x3422&x3423)+x3424));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x3521 = UINT64_MAX;
	volatile int8_t x3522 = -1;
	volatile int8_t x3523 = 19;
	uint64_t x3524 = UINT64_MAX;

    t44 = (x3521>>((x3522&x3523)+x3524));

    if (t44 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x3534 = INT64_MAX;
	uint8_t x3535 = 1U;
	uint8_t x3536 = 7U;
	volatile int32_t t45 = -868339576;

    t45 = (x3533>>((x3534&x3535)+x3536));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x3565 = 162023U;
	volatile int8_t x3566 = INT8_MAX;
	uint8_t x3568 = 29U;
	volatile uint32_t t46 = 1U;

    t46 = (x3565>>((x3566&x3567)+x3568));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x3573 = INT8_MAX;
	int32_t x3574 = -1;
	int8_t x3575 = 0;
	int32_t t47 = 368245340;

    t47 = (x3573>>((x3574&x3575)+x3576));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x3589 = INT32_MAX;
	int8_t x3590 = INT8_MIN;
	int32_t x3591 = 0;
	volatile uint8_t x3592 = 21U;
	volatile int32_t t48 = 49;

    t48 = (x3589>>((x3590&x3591)+x3592));

    if (t48 != 1023) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x3597 = 959U;
	volatile int16_t x3598 = INT16_MAX;
	static int16_t x3599 = INT16_MIN;
	volatile uint32_t t49 = 360714U;

    t49 = (x3597>>((x3598&x3599)+x3600));

    if (t49 != 959U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3765 = 4902LL;
	volatile uint32_t x3766 = 3U;
	static int64_t x3768 = -1LL;
	static int64_t t50 = -2298126375234750076LL;

    t50 = (x3765>>((x3766&x3767)+x3768));

    if (t50 != 1225LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x3957 = 2U;
	volatile uint32_t x3958 = 5U;
	uint16_t x3959 = UINT16_MAX;
	uint8_t x3960 = 4U;
	volatile int32_t t51 = 3026465;

    t51 = (x3957>>((x3958&x3959)+x3960));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x3969 = UINT8_MAX;
	uint8_t x3970 = 29U;
	volatile uint64_t x3971 = 260812LLU;
	int16_t x3972 = 6;
	int32_t t52 = 80461721;

    t52 = (x3969>>((x3970&x3971)+x3972));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x4077 = INT32_MAX;
	int64_t x4078 = INT64_MAX;
	int16_t x4079 = 1;
	static int32_t t53 = INT32_MAX;

    t53 = (x4077>>((x4078&x4079)+x4080));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x4089 = UINT16_MAX;
	static uint8_t x4090 = 27U;
	volatile uint32_t x4091 = UINT32_MAX;
	int8_t x4092 = -3;
	volatile int32_t t54 = 1785;

    t54 = (x4089>>((x4090&x4091)+x4092));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x4137 = 125;
	volatile uint8_t x4138 = 3U;
	volatile uint16_t x4139 = 8790U;
	volatile uint64_t x4140 = UINT64_MAX;

    t55 = (x4137>>((x4138&x4139)+x4140));

    if (t55 != 62) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4169 = INT32_MAX;
	uint32_t x4170 = 309286U;
	volatile uint8_t x4172 = 12U;
	int32_t t56 = 2672;

    t56 = (x4169>>((x4170&x4171)+x4172));

    if (t56 != 524287) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x4173 = INT8_MAX;
	uint16_t x4175 = 664U;
	uint16_t x4176 = 4U;
	volatile int32_t t57 = 781091;

    t57 = (x4173>>((x4174&x4175)+x4176));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x4221 = UINT16_MAX;
	int64_t x4223 = INT64_MIN;
	int16_t x4224 = 0;

    t58 = (x4221>>((x4222&x4223)+x4224));

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4337 = INT8_MAX;
	int8_t x4338 = 1;
	int32_t x4339 = INT32_MAX;
	int32_t t59 = 10007;

    t59 = (x4337>>((x4338&x4339)+x4340));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4349 = 4747930340370920LLU;
	uint64_t x4350 = 1366893446128LLU;
	int8_t x4351 = 0;
	static volatile int16_t x4352 = 1;

    t60 = (x4349>>((x4350&x4351)+x4352));

    if (t60 != 2373965170185460LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x4608 = 5U;
	static int32_t t61 = 2079938;

    t61 = (x4605>>((x4606&x4607)+x4608));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x4625 = INT64_MAX;
	uint8_t x4627 = 16U;
	static int8_t x4628 = -1;
	volatile int64_t t62 = 24394LL;

    t62 = (x4625>>((x4626&x4627)+x4628));

    if (t62 != 281474976710655LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x4647 = 13756U;
	volatile int32_t t63 = 23;

    t63 = (x4645>>((x4646&x4647)+x4648));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x4745 = INT16_MAX;
	static int16_t x4746 = -1;
	int8_t x4747 = -1;
	int8_t x4748 = 3;
	int32_t t64 = 0;

    t64 = (x4745>>((x4746&x4747)+x4748));

    if (t64 != 8191) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x5042 = INT64_MAX;
	uint8_t x5043 = 6U;
	int64_t x5044 = -1LL;
	static int32_t t65 = -1;

    t65 = (x5041>>((x5042&x5043)+x5044));

    if (t65 != 67108863) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x5125 = 2166U;
	volatile int8_t x5126 = -1;
	int8_t x5127 = -1;

    t66 = (x5125>>((x5126&x5127)+x5128));

    if (t66 != 2166) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x5193 = 1497U;
	int16_t x5194 = 1;
	uint8_t x5196 = 11U;
	volatile uint32_t t67 = 11474U;

    t67 = (x5193>>((x5194&x5195)+x5196));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x5201 = 2733LLU;
	int8_t x5202 = 1;
	uint16_t x5203 = 31U;
	int8_t x5204 = 1;
	volatile uint64_t t68 = 1756258652826819LLU;

    t68 = (x5201>>((x5202&x5203)+x5204));

    if (t68 != 683LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x5377 = 692U;
	uint64_t x5378 = 263LLU;
	volatile uint64_t x5380 = UINT64_MAX;
	static int32_t t69 = 57;

    t69 = (x5377>>((x5378&x5379)+x5380));

    if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x5461 = INT32_MAX;
	int64_t x5463 = INT64_MIN;
	static volatile int8_t x5464 = 2;
	static volatile int32_t t70 = -3;

    t70 = (x5461>>((x5462&x5463)+x5464));

    if (t70 != 536870911) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x5518 = 15436;
	int8_t x5519 = 60;
	static int64_t x5520 = -1LL;
	static volatile uint32_t t71 = 6106077U;

    t71 = (x5517>>((x5518&x5519)+x5520));

    if (t71 != 172U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x5617 = 11977037U;
	static uint8_t x5618 = 1U;
	int16_t x5619 = -1;
	static int8_t x5620 = 0;
	uint32_t t72 = 22388921U;

    t72 = (x5617>>((x5618&x5619)+x5620));

    if (t72 != 5988518U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x5629 = INT16_MAX;
	uint64_t x5630 = 1LLU;
	uint8_t x5632 = 2U;
	volatile int32_t t73 = -4712;

    t73 = (x5629>>((x5630&x5631)+x5632));

    if (t73 != 8191) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x5633 = 7163LLU;
	volatile uint32_t x5634 = UINT32_MAX;
	volatile int32_t x5635 = 13;
	uint64_t t74 = 655712620LLU;

    t74 = (x5633>>((x5634&x5635)+x5636));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x5677 = UINT16_MAX;
	static int8_t x5678 = INT8_MAX;
	static volatile int64_t x5679 = INT64_MIN;

    t75 = (x5677>>((x5678&x5679)+x5680));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x5781 = UINT8_MAX;
	static int8_t x5782 = 1;
	int16_t x5783 = INT16_MIN;
	uint8_t x5784 = 2U;

    t76 = (x5781>>((x5782&x5783)+x5784));

    if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x5833 = 7U;
	volatile int32_t x5834 = INT32_MAX;
	int8_t x5836 = 0;
	int32_t t77 = -22483;

    t77 = (x5833>>((x5834&x5835)+x5836));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x5853 = UINT64_MAX;
	uint16_t x5855 = 91U;
	volatile uint64_t t78 = UINT64_MAX;

    t78 = (x5853>>((x5854&x5855)+x5856));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5905 = 36005128534053LLU;
	int64_t x5906 = -1LL;
	int16_t x5908 = -1;

    t79 = (x5905>>((x5906&x5907)+x5908));

    if (t79 != 1125160266689LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x6025 = INT8_MAX;
	uint64_t x6026 = 258632LLU;
	volatile int32_t x6028 = 1;
	int32_t t80 = 6165369;

    t80 = (x6025>>((x6026&x6027)+x6028));

    if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x6045 = 188;
	static uint8_t x6046 = 3U;
	int32_t x6047 = INT32_MAX;
	volatile int16_t x6048 = -1;
	int32_t t81 = 684067015;

    t81 = (x6045>>((x6046&x6047)+x6048));

    if (t81 != 47) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x6141 = 1;
	uint32_t x6142 = 5U;
	static int32_t x6143 = INT32_MAX;
	static volatile int8_t x6144 = -1;
	static int32_t t82 = -49468;

    t82 = (x6141>>((x6142&x6143)+x6144));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x6265 = UINT64_MAX;
	int8_t x6266 = INT8_MAX;
	uint8_t x6267 = 63U;
	int8_t x6268 = -1;

    t83 = (x6265>>((x6266&x6267)+x6268));

    if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x6413 = 3U;
	uint64_t x6414 = 4264119LLU;
	uint8_t x6415 = 2U;
	static int8_t x6416 = -1;
	volatile int32_t t84 = -1;

    t84 = (x6413>>((x6414&x6415)+x6416));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x6709 = UINT8_MAX;
	int16_t x6710 = INT16_MIN;
	int8_t x6711 = INT8_MAX;
	int16_t x6712 = 18;
	static volatile int32_t t85 = 1;

    t85 = (x6709>>((x6710&x6711)+x6712));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x6790 = INT32_MIN;
	uint16_t x6791 = UINT16_MAX;
	uint8_t x6792 = 0U;
	int64_t t86 = -125770388934LL;

    t86 = (x6789>>((x6790&x6791)+x6792));

    if (t86 != 1006147086769907LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x6897 = INT16_MAX;
	volatile int64_t x6898 = INT64_MAX;
	volatile uint64_t x6899 = 0LLU;
	int16_t x6900 = 6;
	int32_t t87 = 35302423;

    t87 = (x6897>>((x6898&x6899)+x6900));

    if (t87 != 511) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x6933 = 0;
	volatile int16_t x6934 = INT16_MIN;
	uint8_t x6936 = 0U;
	int32_t t88 = -21647720;

    t88 = (x6933>>((x6934&x6935)+x6936));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x7019 = UINT16_MAX;
	int32_t x7020 = 0;

    t89 = (x7017>>((x7018&x7019)+x7020));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x7237 = 110826711;
	int16_t x7238 = 484;
	uint16_t x7239 = 2056U;
	uint8_t x7240 = 0U;
	int32_t t90 = 1;

    t90 = (x7237>>((x7238&x7239)+x7240));

    if (t90 != 110826711) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x7373 = 1LL;
	uint64_t x7376 = 59LLU;

    t91 = (x7373>>((x7374&x7375)+x7376));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x7537 = 76U;
	static uint16_t x7538 = 271U;
	static int32_t x7539 = INT32_MIN;
	int64_t x7540 = 0LL;
	int32_t t92 = -1324;

    t92 = (x7537>>((x7538&x7539)+x7540));

    if (t92 != 76) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x7565 = 9540U;
	int8_t x7566 = 62;
	uint16_t x7567 = 160U;
	int16_t x7568 = -5;
	uint32_t t93 = 798445U;

    t93 = (x7565>>((x7566&x7567)+x7568));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x7585 = INT32_MAX;
	uint8_t x7587 = 3U;
	uint16_t x7588 = 7U;
	int32_t t94 = 0;

    t94 = (x7585>>((x7586&x7587)+x7588));

    if (t94 != 2097151) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x7621 = 11U;
	int32_t x7622 = -7712994;
	uint8_t x7624 = 1U;
	static int32_t t95 = 492555752;

    t95 = (x7621>>((x7622&x7623)+x7624));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x7683 = 14764804LLU;
	uint64_t t96 = 2179631614904049LLU;

    t96 = (x7681>>((x7682&x7683)+x7684));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x7873 = UINT32_MAX;
	static volatile int32_t x7874 = -14038001;
	uint16_t x7875 = 115U;
	volatile uint32_t t97 = 5U;

    t97 = (x7873>>((x7874&x7875)+x7876));

    if (t97 != 1073741823U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x7945 = 58998598U;
	volatile int16_t x7946 = 1;
	static int8_t x7947 = INT8_MIN;
	static int16_t x7948 = 0;
	static volatile uint32_t t98 = 4U;

    t98 = (x7945>>((x7946&x7947)+x7948));

    if (t98 != 58998598U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x7957 = 12;
	volatile uint16_t x7960 = 3U;
	int32_t t99 = 3216921;

    t99 = (x7957>>((x7958&x7959)+x7960));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x8041 = 12316579LLU;
	int8_t x8042 = 1;
	int8_t x8043 = -1;
	uint64_t x8044 = 0LLU;
	volatile uint64_t t100 = 0LLU;

    t100 = (x8041>>((x8042&x8043)+x8044));

    if (t100 != 6158289LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x8049 = INT16_MAX;
	int8_t x8050 = 2;
	static int8_t x8052 = 0;
	static int32_t t101 = 36243;

    t101 = (x8049>>((x8050&x8051)+x8052));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x8081 = 0U;
	int8_t x8082 = INT8_MIN;
	volatile int8_t x8083 = 1;
	volatile uint16_t x8084 = 21U;

    t102 = (x8081>>((x8082&x8083)+x8084));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x8281 = 1700980U;
	uint32_t x8282 = 9U;
	int64_t x8283 = -1LL;
	int8_t x8284 = 10;
	static volatile uint32_t t103 = 6352771U;

    t103 = (x8281>>((x8282&x8283)+x8284));

    if (t103 != 3U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x8333 = 0;
	int16_t x8334 = 750;
	int64_t x8335 = INT64_MIN;
	volatile int8_t x8336 = 1;
	int32_t t104 = 745225;

    t104 = (x8333>>((x8334&x8335)+x8336));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x8373 = 0U;
	uint32_t x8374 = 1U;
	int8_t x8375 = -1;
	int32_t x8376 = -1;
	volatile uint32_t t105 = 51U;

    t105 = (x8373>>((x8374&x8375)+x8376));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x8453 = UINT16_MAX;
	int64_t x8454 = 28LL;
	static int64_t x8455 = -1LL;
	int64_t x8456 = -1LL;
	static volatile int32_t t106 = 1;

    t106 = (x8453>>((x8454&x8455)+x8456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x8465 = 1;
	int8_t x8466 = 3;
	int8_t x8468 = -1;

    t107 = (x8465>>((x8466&x8467)+x8468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x8478 = -1LL;
	static int32_t x8479 = 0;
	int32_t x8480 = 2;
	uint32_t t108 = 25U;

    t108 = (x8477>>((x8478&x8479)+x8480));

    if (t108 != 4139U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x8493 = 2962491443LLU;
	int64_t x8494 = -1LL;
	volatile int64_t x8495 = -1LL;
	int16_t x8496 = 1;
	uint64_t t109 = 55004910844LLU;

    t109 = (x8493>>((x8494&x8495)+x8496));

    if (t109 != 2962491443LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x8501 = 6U;
	int64_t x8503 = INT64_MIN;
	int8_t x8504 = 0;
	static int32_t t110 = -3258571;

    t110 = (x8501>>((x8502&x8503)+x8504));

    if (t110 != 6) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x8705 = 22LLU;
	uint32_t x8706 = 5410068U;
	volatile int64_t x8707 = INT64_MIN;
	uint8_t x8708 = 56U;
	volatile uint64_t t111 = 345944146937816820LLU;

    t111 = (x8705>>((x8706&x8707)+x8708));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x8962 = UINT16_MAX;
	int8_t x8963 = 5;
	int8_t x8964 = 0;

    t112 = (x8961>>((x8962&x8963)+x8964));

    if (t112 != 7) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x8993 = UINT32_MAX;
	int64_t x8994 = INT64_MIN;
	uint16_t x8995 = UINT16_MAX;

    t113 = (x8993>>((x8994&x8995)+x8996));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x9006 = INT64_MIN;
	static uint16_t x9007 = UINT16_MAX;
	static int32_t x9008 = 5;
	volatile int32_t t114 = -2384;

    t114 = (x9005>>((x9006&x9007)+x9008));

    if (t114 != 90) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x9029 = 158480627;
	static int64_t x9030 = 1LL;
	uint16_t x9031 = UINT16_MAX;

    t115 = (x9029>>((x9030&x9031)+x9032));

    if (t115 != 158480627) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x9125 = INT16_MAX;
	uint32_t x9126 = 24528U;
	uint8_t x9127 = 25U;
	int32_t t116 = -1;

    t116 = (x9125>>((x9126&x9127)+x9128));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x9214 = 1U;
	uint32_t x9215 = UINT32_MAX;
	static uint32_t x9216 = UINT32_MAX;
	uint32_t t117 = UINT32_MAX;

    t117 = (x9213>>((x9214&x9215)+x9216));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x9377 = INT64_MAX;
	int32_t x9378 = INT32_MIN;
	int32_t x9379 = 390834837;
	int64_t x9380 = 0LL;
	volatile int64_t t118 = INT64_MAX;

    t118 = (x9377>>((x9378&x9379)+x9380));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x9417 = UINT64_MAX;
	volatile int16_t x9419 = INT16_MAX;
	volatile int8_t x9420 = 3;
	static volatile uint64_t t119 = 123033365913791LLU;

    t119 = (x9417>>((x9418&x9419)+x9420));

    if (t119 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x9449 = UINT32_MAX;
	int32_t x9450 = 26353;
	int64_t x9451 = INT64_MIN;
	uint16_t x9452 = 1U;
	volatile uint32_t t120 = 137829U;

    t120 = (x9449>>((x9450&x9451)+x9452));

    if (t120 != 2147483647U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x9461 = 1695145LLU;
	int64_t x9462 = -698336LL;
	uint16_t x9463 = 488U;
	static int8_t x9464 = -1;
	uint64_t t121 = 182LLU;

    t121 = (x9461>>((x9462&x9463)+x9464));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x9529 = 59U;
	uint32_t x9530 = 6183313U;
	int8_t x9531 = 1;
	int8_t x9532 = -1;
	static volatile int32_t t122 = 29;

    t122 = (x9529>>((x9530&x9531)+x9532));

    if (t122 != 59) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x9741 = UINT8_MAX;
	int64_t x9742 = INT64_MIN;
	static uint64_t x9743 = 1LLU;
	volatile uint8_t x9744 = 27U;

    t123 = (x9741>>((x9742&x9743)+x9744));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x9797 = INT16_MAX;
	int8_t x9798 = INT8_MAX;

    t124 = (x9797>>((x9798&x9799)+x9800));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x9841 = 2U;
	int16_t x9842 = INT16_MAX;
	uint8_t x9843 = 11U;
	int8_t x9844 = -3;
	int32_t t125 = 2525901;

    t125 = (x9841>>((x9842&x9843)+x9844));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x9865 = 5U;
	volatile int8_t x9866 = -1;
	volatile int8_t x9867 = -45;
	static uint16_t x9868 = 51U;
	static int32_t t126 = -25935203;

    t126 = (x9865>>((x9866&x9867)+x9868));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x9878 = UINT8_MAX;
	int16_t x9879 = INT16_MIN;
	uint32_t x9880 = 0U;
	uint32_t t127 = 1091U;

    t127 = (x9877>>((x9878&x9879)+x9880));

    if (t127 != 1256U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x9965 = 105131137U;
	uint16_t x9967 = 306U;
	uint32_t t128 = 3U;

    t128 = (x9965>>((x9966&x9967)+x9968));

    if (t128 != 52565568U) { NG(); } else { ; }
	
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
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();


    return 0;
}

