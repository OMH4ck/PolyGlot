
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

static int32_t x288 = 0;
int16_t x343 = INT16_MIN;
int32_t t1 = 30927;
static int8_t x394 = INT8_MIN;
int8_t x396 = 0;
volatile int8_t x579 = INT8_MIN;
int8_t x580 = 0;
volatile uint32_t t5 = UINT32_MAX;
int32_t x901 = INT32_MAX;
int32_t x917 = 775569;
int8_t x1032 = 0;
int16_t x1265 = INT16_MIN;
int32_t x1266 = -1;
volatile int32_t t11 = 0;
int64_t x1381 = -45444LL;
volatile int64_t x1657 = -1LL;
int8_t x1660 = 0;
uint64_t x1956 = 0LLU;
int16_t x2142 = INT16_MIN;
int8_t x2144 = 0;
int16_t x2270 = -2003;
volatile uint32_t x2406 = UINT32_MAX;
int64_t x2634 = INT64_MAX;
volatile int8_t x2636 = 0;
int32_t t20 = 23324;
static uint8_t x2816 = 0U;
static volatile uint64_t t22 = 215344024LLU;
volatile int32_t x3038 = INT32_MIN;
int8_t x3039 = -1;
static volatile int32_t x3145 = 984735;
static volatile uint16_t x3148 = 0U;
volatile int16_t x3422 = -865;
int16_t x3423 = INT16_MAX;
int64_t x4081 = INT64_MIN;
volatile int32_t x4157 = 716833;
volatile uint32_t x4521 = 71176U;
int8_t x4524 = 0;
uint32_t x4706 = 560653U;
volatile uint16_t x4813 = UINT16_MAX;
uint8_t x4816 = 0U;


void f0(void) {
    	volatile int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = 731711275273480225LLU;
	volatile int8_t x287 = 1;
	int64_t t0 = INT64_MIN;

    t0 = (x285/((x286!=x287)>>x288));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x341 = -1;
	int8_t x342 = 28;
	uint8_t x344 = 0U;

    t1 = (x341/((x342!=x343)>>x344));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x393 = -1;
	uint32_t x395 = 922326U;
	int32_t t2 = -2;

    t2 = (x393/((x394!=x395)>>x396));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x409 = 40U;
	volatile int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = 0;
	volatile int32_t t3 = -251554;

    t3 = (x409/((x410!=x411)>>x412));

    if (t3 != 40) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x577 = 110U;
	int64_t x578 = 1147182401LL;
	volatile int32_t t4 = -104;

    t4 = (x577/((x578!=x579)>>x580));

    if (t4 != 110) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x637 = UINT32_MAX;
	int64_t x638 = 535029732LL;
	static uint16_t x639 = 1U;
	int32_t x640 = 0;

    t5 = (x637/((x638!=x639)>>x640));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x681 = 3U;
	int16_t x682 = 935;
	volatile int16_t x683 = -23;
	static uint32_t x684 = 0U;
	int32_t t6 = -37886866;

    t6 = (x681/((x682!=x683)>>x684));

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x902 = INT16_MAX;
	uint64_t x903 = 2163817211LLU;
	volatile uint8_t x904 = 0U;
	int32_t t7 = INT32_MAX;

    t7 = (x901/((x902!=x903)>>x904));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x918 = -1;
	volatile int16_t x919 = INT16_MIN;
	uint8_t x920 = 0U;
	int32_t t8 = -15199201;

    t8 = (x917/((x918!=x919)>>x920));

    if (t8 != 775569) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x1029 = 4010U;
	volatile uint64_t x1030 = 44139433191779LLU;
	uint16_t x1031 = 244U;
	volatile uint32_t t9 = 621U;

    t9 = (x1029/((x1030!=x1031)>>x1032));

    if (t9 != 4010U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1169 = UINT64_MAX;
	static int64_t x1170 = -299LL;
	volatile int8_t x1171 = -1;
	int8_t x1172 = 0;
	static volatile uint64_t t10 = UINT64_MAX;

    t10 = (x1169/((x1170!=x1171)>>x1172));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1267 = UINT8_MAX;
	static int8_t x1268 = 0;

    t11 = (x1265/((x1266!=x1267)>>x1268));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1382 = INT16_MAX;
	int16_t x1383 = INT16_MIN;
	int16_t x1384 = 0;
	int64_t t12 = 402757957LL;

    t12 = (x1381/((x1382!=x1383)>>x1384));

    if (t12 != -45444LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1658 = INT64_MAX;
	volatile int16_t x1659 = INT16_MIN;
	static int64_t t13 = 43LL;

    t13 = (x1657/((x1658!=x1659)>>x1660));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1773 = 1425944495986LL;
	volatile uint64_t x1774 = UINT64_MAX;
	volatile uint32_t x1775 = UINT32_MAX;
	uint8_t x1776 = 0U;
	int64_t t14 = -22860380466947990LL;

    t14 = (x1773/((x1774!=x1775)>>x1776));

    if (t14 != 1425944495986LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1953 = 6U;
	int64_t x1954 = -1LL;
	uint16_t x1955 = UINT16_MAX;
	int32_t t15 = -170;

    t15 = (x1953/((x1954!=x1955)>>x1956));

    if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x2141 = -1LL;
	int64_t x2143 = -1LL;
	volatile int64_t t16 = -60796LL;

    t16 = (x2141/((x2142!=x2143)>>x2144));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x2269 = -1;
	int32_t x2271 = INT32_MAX;
	volatile int16_t x2272 = 0;
	int32_t t17 = 96240493;

    t17 = (x2269/((x2270!=x2271)>>x2272));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x2353 = -845747;
	int16_t x2354 = 0;
	uint32_t x2355 = 1U;
	volatile int32_t x2356 = 0;
	int32_t t18 = 20968;

    t18 = (x2353/((x2354!=x2355)>>x2356));

    if (t18 != -845747) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x2405 = 514499280;
	static uint8_t x2407 = UINT8_MAX;
	uint16_t x2408 = 0U;
	static int32_t t19 = -270465;

    t19 = (x2405/((x2406!=x2407)>>x2408));

    if (t19 != 514499280) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x2633 = 48U;
	int32_t x2635 = -6;

    t20 = (x2633/((x2634!=x2635)>>x2636));

    if (t20 != 48) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2813 = 366LLU;
	int16_t x2814 = INT16_MAX;
	static uint64_t x2815 = 221LLU;
	uint64_t t21 = 5055997LLU;

    t21 = (x2813/((x2814!=x2815)>>x2816));

    if (t21 != 366LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x2817 = 4748498574LLU;
	static int8_t x2818 = 25;
	volatile int8_t x2819 = INT8_MAX;
	int8_t x2820 = 0;

    t22 = (x2817/((x2818!=x2819)>>x2820));

    if (t22 != 4748498574LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x3037 = INT8_MIN;
	uint8_t x3040 = 0U;
	int32_t t23 = -25095;

    t23 = (x3037/((x3038!=x3039)>>x3040));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x3146 = INT32_MIN;
	static uint64_t x3147 = 506938865560604LLU;
	volatile int32_t t24 = 451317;

    t24 = (x3145/((x3146!=x3147)>>x3148));

    if (t24 != 984735) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x3421 = -30035;
	static volatile uint8_t x3424 = 0U;
	volatile int32_t t25 = 735970149;

    t25 = (x3421/((x3422!=x3423)>>x3424));

    if (t25 != -30035) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x3729 = -55426;
	static int16_t x3730 = 357;
	int8_t x3731 = -1;
	uint32_t x3732 = 0U;
	int32_t t26 = -45832742;

    t26 = (x3729/((x3730!=x3731)>>x3732));

    if (t26 != -55426) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x3945 = 40450329;
	uint8_t x3946 = 27U;
	int16_t x3947 = -612;
	uint16_t x3948 = 0U;
	volatile int32_t t27 = 82;

    t27 = (x3945/((x3946!=x3947)>>x3948));

    if (t27 != 40450329) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x4082 = 23939579LLU;
	uint8_t x4083 = UINT8_MAX;
	volatile uint16_t x4084 = 0U;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x4081/((x4082!=x4083)>>x4084));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x4158 = INT64_MIN;
	volatile uint64_t x4159 = 359825425365349LLU;
	volatile uint16_t x4160 = 0U;
	volatile int32_t t29 = 53100651;

    t29 = (x4157/((x4158!=x4159)>>x4160));

    if (t29 != 716833) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x4522 = -1;
	static volatile int64_t x4523 = INT64_MAX;
	volatile uint32_t t30 = 159U;

    t30 = (x4521/((x4522!=x4523)>>x4524));

    if (t30 != 71176U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x4705 = -2;
	int64_t x4707 = INT64_MAX;
	static uint8_t x4708 = 0U;
	int32_t t31 = 10928352;

    t31 = (x4705/((x4706!=x4707)>>x4708));

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x4814 = -1;
	int16_t x4815 = 20;
	int32_t t32 = -182976764;

    t32 = (x4813/((x4814!=x4815)>>x4816));

    if (t32 != 65535) { NG(); } else { ; }
	
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


    return 0;
}

