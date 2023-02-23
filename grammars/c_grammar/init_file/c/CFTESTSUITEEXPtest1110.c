
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

static uint32_t x94 = 844011U;
int8_t x95 = 10;
int32_t x246 = 6;
static volatile uint8_t x289 = UINT8_MAX;
static int64_t x893 = 3725525LL;
volatile int8_t x894 = 6;
static int32_t t5 = -17;
uint32_t x1282 = UINT32_MAX;
int64_t x1557 = INT64_MIN;
volatile int64_t t8 = INT64_MIN;
uint32_t x1718 = 1U;
uint8_t x1951 = 3U;
volatile uint64_t t15 = 27733121311698LLU;
uint32_t x2351 = 10U;
uint32_t t17 = UINT32_MAX;
static volatile int16_t x2514 = INT16_MAX;
int8_t x2523 = 1;
volatile uint16_t x2626 = UINT16_MAX;
int64_t x2628 = INT64_MAX;
int8_t x2964 = INT8_MAX;
int64_t x3405 = -10902708229507LL;
uint16_t x3407 = 0U;
int32_t t26 = -106748207;
uint16_t x3662 = 5U;
static int32_t x3868 = INT32_MIN;
int32_t t28 = -1413;
static int16_t x4353 = INT16_MIN;
int8_t x4355 = 1;
static uint32_t x4356 = 510830U;
int32_t x4580 = INT32_MIN;
static int32_t t31 = 1;
static int16_t x5045 = INT16_MAX;
int32_t x5046 = 140;
uint32_t x5138 = 3U;
int32_t t34 = 0;
volatile int32_t t36 = 86;
int16_t x5497 = INT16_MIN;
static volatile int32_t t40 = 17059;
static int64_t x5861 = INT64_MIN;
static uint32_t x5949 = 4517108U;


void f0(void) {
    	static int16_t x93 = INT16_MIN;
	int16_t x96 = -14;
	int32_t t0 = -97867033;

    t0 = (x93/((x94<<x95)<=x96));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x245 = 964U;
	uint16_t x247 = 7U;
	int32_t x248 = INT32_MAX;
	int32_t t1 = 7482;

    t1 = (x245/((x246<<x247)<=x248));

    if (t1 != 964) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x290 = 6;
	static volatile uint8_t x291 = 1U;
	uint16_t x292 = UINT16_MAX;
	int32_t t2 = 59288;

    t2 = (x289/((x290<<x291)<=x292));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = 7U;
	uint32_t x519 = 0U;
	uint32_t x520 = 28797885U;
	int32_t t3 = 3787;

    t3 = (x517/((x518<<x519)<=x520));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x895 = 1U;
	static uint8_t x896 = UINT8_MAX;
	int64_t t4 = -3048200LL;

    t4 = (x893/((x894<<x895)<=x896));

    if (t4 != 3725525LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x937 = -5;
	uint64_t x938 = UINT64_MAX;
	int32_t x939 = 56;
	volatile int16_t x940 = INT16_MIN;

    t5 = (x937/((x938<<x939)<=x940));

    if (t5 != -5) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x1253 = 14U;
	int32_t x1254 = 8104;
	static uint8_t x1255 = 0U;
	uint16_t x1256 = 8617U;
	uint32_t t6 = 14985U;

    t6 = (x1253/((x1254<<x1255)<=x1256));

    if (t6 != 14U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x1281 = UINT32_MAX;
	uint16_t x1283 = 2U;
	int16_t x1284 = -1;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (x1281/((x1282<<x1283)<=x1284));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x1558 = 12909LLU;
	uint16_t x1559 = 7U;
	uint64_t x1560 = UINT64_MAX;

    t8 = (x1557/((x1558<<x1559)<=x1560));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1717 = INT32_MAX;
	int16_t x1719 = 24;
	int32_t x1720 = -1;
	volatile int32_t t9 = INT32_MAX;

    t9 = (x1717/((x1718<<x1719)<=x1720));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x1737 = -370;
	static volatile uint16_t x1738 = 2546U;
	int8_t x1739 = 1;
	uint32_t x1740 = 9897U;
	int32_t t10 = -46;

    t10 = (x1737/((x1738<<x1739)<=x1740));

    if (t10 != -370) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1949 = INT8_MIN;
	static volatile int8_t x1950 = 0;
	uint64_t x1952 = 4256828922630LLU;
	static volatile int32_t t11 = -1;

    t11 = (x1949/((x1950<<x1951)<=x1952));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x2129 = 6481059000094886740LLU;
	uint32_t x2130 = 12739U;
	uint8_t x2131 = 18U;
	volatile int16_t x2132 = -1;
	static volatile uint64_t t12 = 4712279043LLU;

    t12 = (x2129/((x2130<<x2131)<=x2132));

    if (t12 != 6481059000094886740LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x2281 = UINT16_MAX;
	uint8_t x2282 = 10U;
	uint16_t x2283 = 1U;
	static volatile uint16_t x2284 = 16378U;
	int32_t t13 = -30;

    t13 = (x2281/((x2282<<x2283)<=x2284));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x2313 = 1U;
	static int16_t x2314 = 1;
	int16_t x2315 = 0;
	int16_t x2316 = 15;
	volatile int32_t t14 = 479716;

    t14 = (x2313/((x2314<<x2315)<=x2316));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x2329 = 1429976508LLU;
	uint64_t x2330 = 8372LLU;
	volatile int16_t x2331 = 1;
	static int64_t x2332 = -18284916553LL;

    t15 = (x2329/((x2330<<x2331)<=x2332));

    if (t15 != 1429976508LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x2349 = INT8_MIN;
	uint8_t x2350 = 84U;
	static uint32_t x2352 = UINT32_MAX;
	volatile int32_t t16 = 15;

    t16 = (x2349/((x2350<<x2351)<=x2352));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x2365 = UINT32_MAX;
	int8_t x2366 = 3;
	uint8_t x2367 = 4U;
	volatile int64_t x2368 = 2360LL;

    t17 = (x2365/((x2366<<x2367)<=x2368));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x2513 = INT64_MIN;
	int8_t x2515 = 0;
	static uint64_t x2516 = 495031LLU;
	static volatile int64_t t18 = INT64_MIN;

    t18 = (x2513/((x2514<<x2515)<=x2516));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x2517 = INT8_MAX;
	volatile uint64_t x2518 = 197LLU;
	static uint8_t x2519 = 23U;
	volatile int16_t x2520 = INT16_MIN;
	volatile int32_t t19 = -64949290;

    t19 = (x2517/((x2518<<x2519)<=x2520));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2521 = 8LLU;
	static uint32_t x2522 = 0U;
	int16_t x2524 = 49;
	uint64_t t20 = 16573502359430LLU;

    t20 = (x2521/((x2522<<x2523)<=x2524));

    if (t20 != 8LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x2625 = 221836U;
	static volatile int8_t x2627 = 0;
	static uint32_t t21 = 206157810U;

    t21 = (x2625/((x2626<<x2627)<=x2628));

    if (t21 != 221836U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x2741 = UINT64_MAX;
	uint16_t x2742 = 47U;
	static int8_t x2743 = 0;
	uint32_t x2744 = 1342U;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = (x2741/((x2742<<x2743)<=x2744));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2961 = 367265016;
	uint32_t x2962 = 1U;
	static int16_t x2963 = 5;
	volatile int32_t t23 = -2876379;

    t23 = (x2961/((x2962<<x2963)<=x2964));

    if (t23 != 367265016) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x3317 = UINT32_MAX;
	static uint32_t x3318 = UINT32_MAX;
	uint32_t x3319 = 31U;
	int8_t x3320 = -1;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = (x3317/((x3318<<x3319)<=x3320));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x3406 = UINT8_MAX;
	int32_t x3408 = INT32_MAX;
	volatile int64_t t25 = 11743932475747LL;

    t25 = (x3405/((x3406<<x3407)<=x3408));

    if (t25 != -10902708229507LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x3417 = INT16_MAX;
	static int8_t x3418 = INT8_MAX;
	uint8_t x3419 = 2U;
	int32_t x3420 = INT32_MAX;

    t26 = (x3417/((x3418<<x3419)<=x3420));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x3661 = UINT32_MAX;
	uint32_t x3663 = 1U;
	uint64_t x3664 = 1132652347151055966LLU;
	uint32_t t27 = UINT32_MAX;

    t27 = (x3661/((x3662<<x3663)<=x3664));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x3865 = 6;
	uint32_t x3866 = 32033U;
	int8_t x3867 = 28;

    t28 = (x3865/((x3866<<x3867)<=x3868));

    if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x4129 = INT64_MIN;
	uint16_t x4130 = 5U;
	uint8_t x4131 = 20U;
	int64_t x4132 = INT64_MAX;
	static int64_t t29 = INT64_MIN;

    t29 = (x4129/((x4130<<x4131)<=x4132));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x4354 = 1U;
	int32_t t30 = -11566;

    t30 = (x4353/((x4354<<x4355)<=x4356));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x4577 = -1;
	volatile uint32_t x4578 = 26U;
	uint64_t x4579 = 1LLU;

    t31 = (x4577/((x4578<<x4579)<=x4580));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x4961 = INT32_MAX;
	uint64_t x4962 = 53169582198LLU;
	int16_t x4963 = 18;
	int16_t x4964 = INT16_MIN;
	volatile int32_t t32 = INT32_MAX;

    t32 = (x4961/((x4962<<x4963)<=x4964));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x5047 = 16;
	static int64_t x5048 = 206955142LL;
	int32_t t33 = -5;

    t33 = (x5045/((x5046<<x5047)<=x5048));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x5137 = INT16_MIN;
	uint8_t x5139 = 6U;
	int32_t x5140 = -1;

    t34 = (x5137/((x5138<<x5139)<=x5140));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x5141 = -1;
	int8_t x5142 = INT8_MAX;
	static volatile uint8_t x5143 = 2U;
	uint64_t x5144 = 633631282498463LLU;
	int32_t t35 = 1085726;

    t35 = (x5141/((x5142<<x5143)<=x5144));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x5161 = UINT16_MAX;
	uint8_t x5162 = UINT8_MAX;
	int16_t x5163 = 4;
	int32_t x5164 = INT32_MAX;

    t36 = (x5161/((x5162<<x5163)<=x5164));

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x5421 = -1;
	uint32_t x5422 = 0U;
	static int16_t x5423 = 0;
	static uint32_t x5424 = UINT32_MAX;
	volatile int32_t t37 = 2278;

    t37 = (x5421/((x5422<<x5423)<=x5424));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x5498 = 1;
	uint16_t x5499 = 6U;
	uint64_t x5500 = UINT64_MAX;
	volatile int32_t t38 = -1;

    t38 = (x5497/((x5498<<x5499)<=x5500));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x5597 = INT8_MIN;
	uint32_t x5598 = 154331244U;
	int16_t x5599 = 9;
	static int16_t x5600 = INT16_MIN;
	volatile int32_t t39 = 842;

    t39 = (x5597/((x5598<<x5599)<=x5600));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x5833 = INT16_MAX;
	uint64_t x5834 = 2397650980755LLU;
	volatile uint16_t x5835 = 1U;
	int64_t x5836 = -1LL;

    t40 = (x5833/((x5834<<x5835)<=x5836));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x5862 = UINT64_MAX;
	uint8_t x5863 = 11U;
	int8_t x5864 = -1;
	volatile int64_t t41 = INT64_MIN;

    t41 = (x5861/((x5862<<x5863)<=x5864));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x5950 = 354U;
	static uint32_t x5951 = 29U;
	int16_t x5952 = -1;
	static uint32_t t42 = 1U;

    t42 = (x5949/((x5950<<x5951)<=x5952));

    if (t42 != 4517108U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x6053 = -3;
	uint32_t x6054 = 441244889U;
	volatile uint32_t x6055 = 4U;
	int16_t x6056 = INT16_MIN;
	int32_t t43 = 15;

    t43 = (x6053/((x6054<<x6055)<=x6056));

    if (t43 != -3) { NG(); } else { ; }
	
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


    return 0;
}

