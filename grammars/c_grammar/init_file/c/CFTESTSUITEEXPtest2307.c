
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

static uint64_t t2 = 328870811670096LLU;
int64_t x455 = INT64_MIN;
static uint64_t x562 = 6348227965156043LLU;
volatile int32_t t6 = 4083708;
uint32_t x573 = 76U;
static uint64_t x574 = 1LLU;
uint16_t x670 = 17U;
uint32_t x893 = UINT32_MAX;
int8_t x1080 = 10;
static volatile int64_t x1321 = 62269226186LL;
int64_t x1757 = 3449LL;
volatile int32_t t16 = 1810976;
int16_t x1806 = -1;
int64_t x2497 = INT64_MAX;
static volatile uint32_t x2498 = 1030U;
int32_t x2499 = 9;
int16_t x2525 = INT16_MAX;
int32_t x2661 = INT32_MAX;
volatile int8_t x2662 = INT8_MIN;
uint8_t x2663 = 0U;
uint16_t x2861 = 430U;
uint16_t x2863 = UINT16_MAX;
int8_t x3027 = 31;
int8_t x3028 = 27;
int16_t x3065 = INT16_MAX;
uint32_t x3213 = UINT32_MAX;
volatile int32_t t34 = 4850435;


void f0(void) {
    	uint32_t x65 = 12U;
	int16_t x66 = INT16_MAX;
	static uint64_t x67 = 14885471819LLU;
	volatile int16_t x68 = 15;
	volatile uint32_t t0 = 11334U;

    t0 = (x65>>((x66&x67)>>x68));

    if (t0 != 12U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x145 = 3U;
	uint32_t x146 = 2U;
	int64_t x147 = INT64_MAX;
	static uint16_t x148 = 3U;
	int32_t t1 = -14;

    t1 = (x145>>((x146&x147)>>x148));

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x193 = 659935213643LLU;
	int16_t x194 = 16;
	int32_t x195 = -1040379185;
	uint16_t x196 = 4U;

    t2 = (x193>>((x194&x195)>>x196));

    if (t2 != 659935213643LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x229 = 1U;
	int32_t x230 = 30708984;
	static uint16_t x231 = 11U;
	uint8_t x232 = 0U;
	volatile int32_t t3 = 7;

    t3 = (x229>>((x230&x231)>>x232));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x245 = 1U;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	static uint8_t x248 = 45U;
	int32_t t4 = 374;

    t4 = (x245>>((x246&x247)>>x248));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x453 = 0U;
	uint16_t x454 = UINT16_MAX;
	static int32_t x456 = 2;
	int32_t t5 = 2394;

    t5 = (x453>>((x454&x455)>>x456));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	static uint8_t x563 = 3U;
	int32_t x564 = 0;

    t6 = (x561>>((x562&x563)>>x564));

    if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x575 = -22LL;
	int32_t x576 = 14;
	uint32_t t7 = 236U;

    t7 = (x573>>((x574&x575)>>x576));

    if (t7 != 76U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x669 = INT32_MAX;
	static int64_t x671 = INT64_MAX;
	uint8_t x672 = 8U;
	static volatile int32_t t8 = INT32_MAX;

    t8 = (x669>>((x670&x671)>>x672));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x737 = 363U;
	int64_t x738 = INT64_MIN;
	volatile int8_t x739 = 13;
	uint8_t x740 = 11U;
	uint32_t t9 = 6765826U;

    t9 = (x737>>((x738&x739)>>x740));

    if (t9 != 363U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x885 = 18971153813050LLU;
	static volatile int32_t x886 = 78673;
	int8_t x887 = 33;
	static uint8_t x888 = 3U;
	volatile uint64_t t10 = 177227867LLU;

    t10 = (x885>>((x886&x887)>>x888));

    if (t10 != 18971153813050LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x894 = UINT32_MAX;
	int64_t x895 = -1LL;
	uint8_t x896 = 31U;
	uint32_t t11 = 428895682U;

    t11 = (x893>>((x894&x895)>>x896));

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1077 = INT32_MAX;
	static volatile uint8_t x1078 = 15U;
	uint64_t x1079 = 3016679088138821LLU;
	volatile int32_t t12 = INT32_MAX;

    t12 = (x1077>>((x1078&x1079)>>x1080));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1322 = 1U;
	static volatile int16_t x1323 = -1;
	uint64_t x1324 = 16LLU;
	static volatile int64_t t13 = -1886205620482511998LL;

    t13 = (x1321>>((x1322&x1323)>>x1324));

    if (t13 != 62269226186LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1453 = 0U;
	static uint16_t x1454 = 21U;
	int32_t x1455 = INT32_MIN;
	uint32_t x1456 = 1U;
	volatile int32_t t14 = -105912908;

    t14 = (x1453>>((x1454&x1455)>>x1456));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1758 = INT32_MIN;
	uint16_t x1759 = 7446U;
	static volatile int8_t x1760 = 1;
	int64_t t15 = 1138611321LL;

    t15 = (x1757>>((x1758&x1759)>>x1760));

    if (t15 != 3449LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x1769 = 2422;
	uint64_t x1770 = 13LLU;
	int8_t x1771 = -30;
	int8_t x1772 = 0;

    t16 = (x1769>>((x1770&x1771)>>x1772));

    if (t16 != 2422) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x1805 = UINT8_MAX;
	uint16_t x1807 = UINT16_MAX;
	uint8_t x1808 = 15U;
	int32_t t17 = 117;

    t17 = (x1805>>((x1806&x1807)>>x1808));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x1941 = 22563U;
	uint64_t x1942 = 8474996040LLU;
	uint16_t x1943 = UINT16_MAX;
	int8_t x1944 = 10;
	static uint32_t t18 = 28U;

    t18 = (x1941>>((x1942&x1943)>>x1944));

    if (t18 != 11U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1949 = INT64_MAX;
	int64_t x1950 = 988332LL;
	volatile int16_t x1951 = INT16_MIN;
	int8_t x1952 = 52;
	volatile int64_t t19 = INT64_MAX;

    t19 = (x1949>>((x1950&x1951)>>x1952));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x2137 = 48;
	int32_t x2138 = 19;
	int16_t x2139 = INT16_MAX;
	uint16_t x2140 = 10U;
	int32_t t20 = -22423567;

    t20 = (x2137>>((x2138&x2139)>>x2140));

    if (t20 != 48) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x2157 = INT32_MAX;
	int16_t x2158 = INT16_MIN;
	uint8_t x2159 = 1U;
	int8_t x2160 = 3;
	static int32_t t21 = INT32_MAX;

    t21 = (x2157>>((x2158&x2159)>>x2160));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x2273 = 211885021U;
	static int16_t x2274 = 10125;
	int32_t x2275 = INT32_MIN;
	static uint8_t x2276 = 2U;
	volatile uint32_t t22 = 492783390U;

    t22 = (x2273>>((x2274&x2275)>>x2276));

    if (t22 != 211885021U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2500 = 0U;
	int64_t t23 = INT64_MAX;

    t23 = (x2497>>((x2498&x2499)>>x2500));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2526 = 62U;
	int16_t x2527 = -1;
	static int16_t x2528 = 8;
	int32_t t24 = -115982747;

    t24 = (x2525>>((x2526&x2527)>>x2528));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2557 = UINT64_MAX;
	static uint8_t x2558 = UINT8_MAX;
	volatile int8_t x2559 = INT8_MAX;
	volatile uint16_t x2560 = 4U;
	static volatile uint64_t t25 = 1875961950764LLU;

    t25 = (x2557>>((x2558&x2559)>>x2560));

    if (t25 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x2664 = 25U;
	static volatile int32_t t26 = INT32_MAX;

    t26 = (x2661>>((x2662&x2663)>>x2664));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2713 = 1475U;
	uint32_t x2714 = 6355389U;
	static uint16_t x2715 = 1U;
	int8_t x2716 = 7;
	volatile int32_t t27 = 149881;

    t27 = (x2713>>((x2714&x2715)>>x2716));

    if (t27 != 1475) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x2741 = 244695342U;
	static uint8_t x2742 = UINT8_MAX;
	uint32_t x2743 = 186872019U;
	uint64_t x2744 = 6LLU;
	uint32_t t28 = 411U;

    t28 = (x2741>>((x2742&x2743)>>x2744));

    if (t28 != 30586917U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x2862 = -8LL;
	int8_t x2864 = 15;
	static volatile int32_t t29 = -2631;

    t29 = (x2861>>((x2862&x2863)>>x2864));

    if (t29 != 215) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2885 = UINT32_MAX;
	int64_t x2886 = INT64_MAX;
	uint16_t x2887 = 1U;
	volatile int32_t x2888 = 0;
	volatile uint32_t t30 = 5U;

    t30 = (x2885>>((x2886&x2887)>>x2888));

    if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x3025 = INT16_MAX;
	int32_t x3026 = -462037116;
	static int32_t t31 = -651505373;

    t31 = (x3025>>((x3026&x3027)>>x3028));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x3066 = UINT8_MAX;
	int16_t x3067 = INT16_MIN;
	volatile int8_t x3068 = 3;
	volatile int32_t t32 = 0;

    t32 = (x3065>>((x3066&x3067)>>x3068));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x3214 = 1;
	uint64_t x3215 = 224476186173657LLU;
	int8_t x3216 = 14;
	volatile uint32_t t33 = UINT32_MAX;

    t33 = (x3213>>((x3214&x3215)>>x3216));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x3261 = 1;
	uint32_t x3262 = 283271026U;
	static uint16_t x3263 = UINT16_MAX;
	int8_t x3264 = 22;

    t34 = (x3261>>((x3262&x3263)>>x3264));

    if (t34 != 1) { NG(); } else { ; }
	
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


    return 0;
}

