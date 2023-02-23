
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

int32_t x17 = INT32_MAX;
volatile int32_t t1 = -14914;
uint64_t x109 = 29710152689413101LLU;
volatile uint64_t t3 = 3793735213858LLU;
volatile int32_t x231 = INT32_MAX;
volatile int32_t x232 = INT32_MAX;
volatile uint64_t x328 = UINT64_MAX;
static volatile int64_t t7 = 132896013568LL;
int8_t x559 = 0;
int8_t x577 = INT8_MAX;
static int32_t x578 = INT32_MIN;
volatile int32_t t10 = -265751275;
int8_t x634 = INT8_MIN;
static int8_t x741 = 4;
static int8_t x840 = -15;
int32_t x1137 = INT32_MAX;
volatile int32_t x1138 = -1;
uint64_t x1139 = UINT64_MAX;
static int16_t x1140 = -2;
int16_t x1189 = 337;
volatile int64_t x1341 = 681172LL;
static int64_t x1344 = INT64_MIN;
uint32_t x1497 = 630054U;
uint8_t x1498 = 23U;
uint32_t t22 = 59425997U;
int8_t x1596 = -1;
volatile int16_t x1748 = -1;
int8_t x1803 = -1;
volatile uint32_t t26 = UINT32_MAX;
static volatile int16_t x2122 = -1;
int32_t x2125 = INT32_MAX;
int8_t x2127 = INT8_MIN;
static uint16_t x2169 = 13174U;
volatile int16_t x2170 = -5;
static volatile int16_t x2228 = -1;
int32_t x2246 = -729326;
static uint64_t t32 = 188760539099200LLU;
int32_t t34 = 2;
int8_t x2431 = 4;
volatile int32_t x2493 = INT32_MAX;
int32_t x2494 = INT32_MAX;
int16_t x2551 = -1;
volatile uint32_t t37 = UINT32_MAX;
static int16_t x2742 = 8;
static uint8_t x2794 = 0U;
volatile int64_t t39 = 223753345521800LL;
int16_t x2806 = INT16_MAX;
static int32_t t41 = -3997600;
int32_t t42 = -177271741;
int64_t x2858 = -1LL;
volatile uint32_t x2865 = 31934U;
volatile uint64_t t46 = 420LLU;
int8_t x3215 = -1;
int8_t x3328 = -1;
int16_t x3781 = INT16_MAX;
static int8_t x3782 = INT8_MIN;
volatile int8_t x3883 = 1;
static volatile int32_t t58 = 380530544;
volatile uint16_t x3957 = 19193U;
int32_t x3959 = INT32_MIN;
volatile int32_t t59 = 2379855;
int8_t x4007 = INT8_MAX;
volatile int32_t x4176 = -1;
int16_t x4183 = -13;
volatile uint32_t x4401 = 1988810218U;
static int16_t x4431 = -1;
static int8_t x4567 = INT8_MIN;
volatile uint64_t x4568 = UINT64_MAX;
static volatile int32_t t66 = 53451;
volatile uint8_t x4769 = UINT8_MAX;
int32_t t67 = -4924;
uint64_t x4788 = UINT64_MAX;
int16_t x4914 = -1;
int32_t x4915 = -1;
uint32_t x4976 = UINT32_MAX;
volatile int32_t t72 = -1;
volatile int32_t x5194 = -1;
static volatile int32_t t73 = -23873615;
uint64_t x5277 = 107322736LLU;
uint16_t x5289 = 209U;
int8_t x5291 = -1;
volatile int32_t t76 = 695298;
uint32_t x5432 = UINT32_MAX;
static int64_t x5629 = INT64_MAX;
uint64_t x5631 = 13LLU;
static volatile int32_t x5710 = 1;
int32_t t80 = INT32_MAX;
volatile int32_t t82 = 1;
volatile uint32_t x5933 = UINT32_MAX;
volatile int32_t x5936 = INT32_MIN;
volatile int8_t x6048 = INT8_MIN;
uint64_t x6056 = UINT64_MAX;
static int64_t x6102 = -1LL;
volatile int32_t x6103 = INT32_MAX;
volatile uint16_t x6146 = 0U;
uint32_t x6178 = 8U;
int64_t x6180 = -1LL;
uint64_t x6397 = 30068LLU;
int64_t x6398 = -1LL;
static uint64_t x6444 = UINT64_MAX;


void f0(void) {
    	uint16_t x9 = 4071U;
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -1;
	volatile int32_t t0 = -3;

    t0 = (x9>>((x10|x11)-x12));

    if (t0 != 4071) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x18 = 16;
	int8_t x19 = -1;
	static int32_t x20 = -2;

    t1 = (x17>>((x18|x19)-x20));

    if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x73 = 9892690800LLU;
	int8_t x74 = INT8_MIN;
	volatile int8_t x75 = -11;
	static int8_t x76 = -58;
	volatile uint64_t t2 = 4449953812583248875LLU;

    t2 = (x73>>((x74|x75)-x76));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x110 = -1;
	volatile int8_t x111 = INT8_MIN;
	static volatile int32_t x112 = -1;

    t3 = (x109>>((x110|x111)-x112));

    if (t3 != 29710152689413101LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x157 = INT32_MAX;
	static int16_t x158 = -2310;
	int8_t x159 = -19;
	int64_t x160 = -1LL;
	volatile int32_t t4 = INT32_MAX;

    t4 = (x157>>((x158|x159)-x160));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	int64_t x230 = 4LL;
	uint64_t t5 = UINT64_MAX;

    t5 = (x229>>((x230|x231)-x232));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x305 = 12LLU;
	int64_t x306 = INT64_MIN;
	static volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	static uint64_t t6 = 1LLU;

    t6 = (x305>>((x306|x307)-x308));

    if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x325 = 3911742LL;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;

    t7 = (x325>>((x326|x327)-x328));

    if (t7 != 3911742LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x557 = 3199;
	int8_t x558 = 0;
	volatile int64_t x560 = -1LL;
	volatile int32_t t8 = -652625;

    t8 = (x557>>((x558|x559)-x560));

    if (t8 != 1599) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x579 = INT32_MAX;
	static int32_t x580 = -1;
	static int32_t t9 = 7;

    t9 = (x577>>((x578|x579)-x580));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x629 = 236U;
	int32_t x630 = INT32_MIN;
	int32_t x631 = -1;
	int8_t x632 = -3;

    t10 = (x629>>((x630|x631)-x632));

    if (t10 != 59) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x633 = UINT64_MAX;
	int32_t x635 = INT32_MAX;
	int32_t x636 = -1;
	static uint64_t t11 = UINT64_MAX;

    t11 = (x633>>((x634|x635)-x636));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x725 = 7LL;
	volatile uint64_t x726 = UINT64_MAX;
	uint8_t x727 = 2U;
	int16_t x728 = -1;
	int64_t t12 = -55269961363LL;

    t12 = (x725>>((x726|x727)-x728));

    if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x742 = -1LL;
	int16_t x743 = -1575;
	int16_t x744 = -1;
	int32_t t13 = -68058764;

    t13 = (x741>>((x742|x743)-x744));

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x837 = 1;
	int64_t x838 = -1LL;
	static volatile uint32_t x839 = UINT32_MAX;
	int32_t t14 = 3378;

    t14 = (x837>>((x838|x839)-x840));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1101 = 63U;
	int8_t x1102 = -1;
	int8_t x1103 = -1;
	volatile int8_t x1104 = -1;
	volatile int32_t t15 = 66;

    t15 = (x1101>>((x1102|x1103)-x1104));

    if (t15 != 63) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t t16 = -86;

    t16 = (x1137>>((x1138|x1139)-x1140));

    if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1173 = 380542952079583522LL;
	int8_t x1174 = INT8_MIN;
	static int8_t x1175 = 27;
	static int8_t x1176 = INT8_MIN;
	volatile int64_t t17 = 93725LL;

    t17 = (x1173>>((x1174|x1175)-x1176));

    if (t17 != 2835265935LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1190 = INT32_MAX;
	int64_t x1191 = -622992LL;
	int16_t x1192 = -1;
	static volatile int32_t t18 = -217316;

    t18 = (x1189>>((x1190|x1191)-x1192));

    if (t18 != 337) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1342 = 1;
	volatile int64_t x1343 = INT64_MIN;
	volatile int64_t t19 = 59838LL;

    t19 = (x1341>>((x1342|x1343)-x1344));

    if (t19 != 340586LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1381 = 10439063;
	uint16_t x1382 = 0U;
	uint8_t x1383 = 1U;
	static int8_t x1384 = -1;
	int32_t t20 = -815;

    t20 = (x1381>>((x1382|x1383)-x1384));

    if (t20 != 2609765) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x1413 = 101U;
	volatile int32_t x1414 = -1;
	int64_t x1415 = 815405005170LL;
	static int64_t x1416 = -1LL;
	int32_t t21 = 0;

    t21 = (x1413>>((x1414|x1415)-x1416));

    if (t21 != 101) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1499 = 4;
	static volatile uint64_t x1500 = UINT64_MAX;

    t22 = (x1497>>((x1498|x1499)-x1500));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1593 = INT32_MAX;
	int8_t x1594 = 57;
	volatile int64_t x1595 = -1LL;
	volatile int32_t t23 = INT32_MAX;

    t23 = (x1593>>((x1594|x1595)-x1596));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1745 = 1282948;
	int8_t x1746 = -1;
	int16_t x1747 = -142;
	static int32_t t24 = 39;

    t24 = (x1745>>((x1746|x1747)-x1748));

    if (t24 != 1282948) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x1801 = 366726371U;
	uint16_t x1802 = UINT16_MAX;
	static uint64_t x1804 = UINT64_MAX;
	volatile uint32_t t25 = 2321315U;

    t25 = (x1801>>((x1802|x1803)-x1804));

    if (t25 != 366726371U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2093 = UINT32_MAX;
	uint16_t x2094 = 0U;
	int64_t x2095 = INT64_MIN;
	int64_t x2096 = INT64_MIN;

    t26 = (x2093>>((x2094|x2095)-x2096));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2121 = INT32_MAX;
	static int16_t x2123 = INT16_MAX;
	int32_t x2124 = -1;
	volatile int32_t t27 = INT32_MAX;

    t27 = (x2121>>((x2122|x2123)-x2124));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x2126 = -1LL;
	int8_t x2128 = -13;
	volatile int32_t t28 = -494;

    t28 = (x2125>>((x2126|x2127)-x2128));

    if (t28 != 524287) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2157 = UINT8_MAX;
	int16_t x2158 = 2598;
	int16_t x2159 = -3;
	int64_t x2160 = -1LL;
	int32_t t29 = -1463;

    t29 = (x2157>>((x2158|x2159)-x2160));

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x2171 = INT64_MAX;
	int16_t x2172 = -1;
	volatile int32_t t30 = -1;

    t30 = (x2169>>((x2170|x2171)-x2172));

    if (t30 != 13174) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2225 = UINT64_MAX;
	int32_t x2226 = -56103569;
	static uint64_t x2227 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

    t31 = (x2225>>((x2226|x2227)-x2228));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2245 = UINT64_MAX;
	volatile int64_t x2247 = INT64_MAX;
	volatile int16_t x2248 = -6;

    t32 = (x2245>>((x2246|x2247)-x2248));

    if (t32 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x2389 = INT32_MAX;
	static volatile int64_t x2390 = INT64_MAX;
	int16_t x2391 = -1;
	static int16_t x2392 = -11;
	volatile int32_t t33 = 274997104;

    t33 = (x2389>>((x2390|x2391)-x2392));

    if (t33 != 2097151) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2405 = 42;
	int16_t x2406 = INT16_MIN;
	volatile int64_t x2407 = -1LL;
	volatile int8_t x2408 = -1;

    t34 = (x2405>>((x2406|x2407)-x2408));

    if (t34 != 42) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x2429 = INT32_MAX;
	volatile int32_t x2430 = -1;
	static int8_t x2432 = -1;
	int32_t t35 = INT32_MAX;

    t35 = (x2429>>((x2430|x2431)-x2432));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2495 = -1;
	int64_t x2496 = -1LL;
	int32_t t36 = INT32_MAX;

    t36 = (x2493>>((x2494|x2495)-x2496));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x2549 = UINT32_MAX;
	volatile uint64_t x2550 = 12094LLU;
	int64_t x2552 = -1LL;

    t37 = (x2549>>((x2550|x2551)-x2552));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2741 = INT32_MAX;
	static int8_t x2743 = INT8_MIN;
	int8_t x2744 = INT8_MIN;
	int32_t t38 = -2204;

    t38 = (x2741>>((x2742|x2743)-x2744));

    if (t38 != 8388607) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2793 = 151548LL;
	uint8_t x2795 = 6U;
	int16_t x2796 = -5;

    t39 = (x2793>>((x2794|x2795)-x2796));

    if (t39 != 73LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2805 = UINT16_MAX;
	int16_t x2807 = -1;
	int64_t x2808 = -1LL;
	int32_t t40 = -9;

    t40 = (x2805>>((x2806|x2807)-x2808));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x2809 = INT8_MAX;
	volatile int8_t x2810 = INT8_MIN;
	int32_t x2811 = -1;
	int32_t x2812 = -3;

    t41 = (x2809>>((x2810|x2811)-x2812));

    if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x2849 = 2;
	static int32_t x2850 = 373258918;
	volatile int16_t x2851 = -1;
	static volatile int64_t x2852 = -1LL;

    t42 = (x2849>>((x2850|x2851)-x2852));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x2857 = 1U;
	static uint16_t x2859 = UINT16_MAX;
	static int8_t x2860 = -1;
	uint32_t t43 = 2390U;

    t43 = (x2857>>((x2858|x2859)-x2860));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2866 = INT8_MIN;
	static volatile int8_t x2867 = INT8_MIN;
	int8_t x2868 = INT8_MIN;
	volatile uint32_t t44 = 5U;

    t44 = (x2865>>((x2866|x2867)-x2868));

    if (t44 != 31934U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x2893 = UINT64_MAX;
	int8_t x2894 = INT8_MAX;
	volatile int16_t x2895 = -1;
	int64_t x2896 = -1LL;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = (x2893>>((x2894|x2895)-x2896));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2981 = 33176290171441LLU;
	int8_t x2982 = -1;
	static uint32_t x2983 = UINT32_MAX;
	uint32_t x2984 = UINT32_MAX;

    t46 = (x2981>>((x2982|x2983)-x2984));

    if (t46 != 33176290171441LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3077 = 1;
	int8_t x3078 = -1;
	int8_t x3079 = INT8_MAX;
	volatile int64_t x3080 = -1LL;
	volatile int32_t t47 = 28529801;

    t47 = (x3077>>((x3078|x3079)-x3080));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x3085 = 17611035557159LLU;
	uint16_t x3086 = 14172U;
	int16_t x3087 = -1;
	int32_t x3088 = -1;
	volatile uint64_t t48 = 83209343150898119LLU;

    t48 = (x3085>>((x3086|x3087)-x3088));

    if (t48 != 17611035557159LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x3169 = INT32_MAX;
	volatile int16_t x3170 = INT16_MIN;
	int8_t x3171 = -1;
	int64_t x3172 = -1LL;
	volatile int32_t t49 = INT32_MAX;

    t49 = (x3169>>((x3170|x3171)-x3172));

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3213 = UINT16_MAX;
	volatile int64_t x3214 = 155944412378728LL;
	int8_t x3216 = -1;
	int32_t t50 = -1180402;

    t50 = (x3213>>((x3214|x3215)-x3216));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x3289 = UINT64_MAX;
	int32_t x3290 = INT32_MIN;
	int32_t x3291 = INT32_MAX;
	int16_t x3292 = -12;
	volatile uint64_t t51 = 15851665LLU;

    t51 = (x3289>>((x3290|x3291)-x3292));

    if (t51 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x3297 = 10932U;
	int16_t x3298 = -1;
	int32_t x3299 = INT32_MIN;
	int16_t x3300 = -3;
	volatile int32_t t52 = -105219489;

    t52 = (x3297>>((x3298|x3299)-x3300));

    if (t52 != 2733) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x3325 = 46297U;
	volatile int32_t x3326 = -1;
	uint64_t x3327 = 51508512621LLU;
	static uint32_t t53 = 555660U;

    t53 = (x3325>>((x3326|x3327)-x3328));

    if (t53 != 46297U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x3557 = 2369237443209615090LLU;
	volatile int64_t x3558 = -1LL;
	int16_t x3559 = 82;
	static int32_t x3560 = -4;
	static uint64_t t54 = 9601LLU;

    t54 = (x3557>>((x3558|x3559)-x3560));

    if (t54 != 296154680401201886LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x3717 = UINT8_MAX;
	volatile int64_t x3718 = INT64_MIN;
	static int32_t x3719 = INT32_MIN;
	static int32_t x3720 = INT32_MIN;
	volatile int32_t t55 = -503946291;

    t55 = (x3717>>((x3718|x3719)-x3720));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x3741 = UINT32_MAX;
	volatile uint64_t x3742 = UINT64_MAX;
	volatile int64_t x3743 = INT64_MIN;
	volatile int64_t x3744 = -1LL;
	static volatile uint32_t t56 = UINT32_MAX;

    t56 = (x3741>>((x3742|x3743)-x3744));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x3783 = 20755188627057282LLU;
	volatile int8_t x3784 = INT8_MIN;
	static volatile int32_t t57 = -492852319;

    t57 = (x3781>>((x3782|x3783)-x3784));

    if (t57 != 8191) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x3881 = INT32_MAX;
	uint32_t x3882 = 27U;
	uint32_t x3884 = UINT32_MAX;

    t58 = (x3881>>((x3882|x3883)-x3884));

    if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x3958 = -1;
	int32_t x3960 = -1;

    t59 = (x3957>>((x3958|x3959)-x3960));

    if (t59 != 19193) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x4005 = 27906381643797521LLU;
	int32_t x4006 = -1;
	static int32_t x4008 = -1;
	uint64_t t60 = 2975278LLU;

    t60 = (x4005>>((x4006|x4007)-x4008));

    if (t60 != 27906381643797521LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4173 = UINT32_MAX;
	int64_t x4174 = INT64_MAX;
	uint64_t x4175 = UINT64_MAX;
	uint32_t t61 = UINT32_MAX;

    t61 = (x4173>>((x4174|x4175)-x4176));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x4181 = UINT8_MAX;
	int64_t x4182 = -1LL;
	int8_t x4184 = -8;
	int32_t t62 = 1530;

    t62 = (x4181>>((x4182|x4183)-x4184));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x4213 = UINT8_MAX;
	int8_t x4214 = 5;
	int8_t x4215 = -1;
	volatile int8_t x4216 = -1;
	int32_t t63 = -24;

    t63 = (x4213>>((x4214|x4215)-x4216));

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4402 = UINT32_MAX;
	uint16_t x4403 = UINT16_MAX;
	static int32_t x4404 = -1;
	uint32_t t64 = 826U;

    t64 = (x4401>>((x4402|x4403)-x4404));

    if (t64 != 1988810218U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x4429 = 1U;
	uint16_t x4430 = 7457U;
	int64_t x4432 = -1LL;
	int32_t t65 = 18;

    t65 = (x4429>>((x4430|x4431)-x4432));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x4565 = 480U;
	int8_t x4566 = -1;

    t66 = (x4565>>((x4566|x4567)-x4568));

    if (t66 != 480) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x4770 = INT32_MAX;
	static int8_t x4771 = INT8_MIN;
	volatile uint32_t x4772 = UINT32_MAX;

    t67 = (x4769>>((x4770|x4771)-x4772));

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x4777 = 10U;
	int64_t x4778 = INT64_MIN;
	volatile int32_t x4779 = INT32_MIN;
	int32_t x4780 = INT32_MIN;
	volatile int32_t t68 = 833;

    t68 = (x4777>>((x4778|x4779)-x4780));

    if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x4785 = 27U;
	int8_t x4786 = -3;
	int32_t x4787 = INT32_MAX;
	volatile int32_t t69 = 2;

    t69 = (x4785>>((x4786|x4787)-x4788));

    if (t69 != 27) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x4877 = 66LLU;
	volatile uint16_t x4878 = 3017U;
	int16_t x4879 = -1;
	volatile int32_t x4880 = -1;
	uint64_t t70 = 3687029LLU;

    t70 = (x4877>>((x4878|x4879)-x4880));

    if (t70 != 66LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4913 = 13120U;
	uint64_t x4916 = UINT64_MAX;
	static volatile int32_t t71 = 28988;

    t71 = (x4913>>((x4914|x4915)-x4916));

    if (t71 != 13120) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4973 = UINT16_MAX;
	static int8_t x4974 = -1;
	int8_t x4975 = -2;

    t72 = (x4973>>((x4974|x4975)-x4976));

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x5193 = 51U;
	static volatile uint32_t x5195 = 101U;
	volatile uint32_t x5196 = UINT32_MAX;

    t73 = (x5193>>((x5194|x5195)-x5196));

    if (t73 != 51) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x5278 = UINT64_MAX;
	uint8_t x5279 = UINT8_MAX;
	static int16_t x5280 = -1;
	volatile uint64_t t74 = 22LLU;

    t74 = (x5277>>((x5278|x5279)-x5280));

    if (t74 != 107322736LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5290 = -1LL;
	static int64_t x5292 = -1LL;
	static int32_t t75 = -12;

    t75 = (x5289>>((x5290|x5291)-x5292));

    if (t75 != 209) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x5365 = 25U;
	int8_t x5366 = 0;
	int8_t x5367 = INT8_MIN;
	int8_t x5368 = INT8_MIN;

    t76 = (x5365>>((x5366|x5367)-x5368));

    if (t76 != 25) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x5429 = 39;
	uint16_t x5430 = UINT16_MAX;
	int16_t x5431 = -2;
	int32_t t77 = 14417;

    t77 = (x5429>>((x5430|x5431)-x5432));

    if (t77 != 39) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x5630 = -1LL;
	int8_t x5632 = -1;
	int64_t t78 = INT64_MAX;

    t78 = (x5629>>((x5630|x5631)-x5632));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5709 = UINT64_MAX;
	uint8_t x5711 = 0U;
	static int32_t x5712 = -9;
	uint64_t t79 = 15816739690918884LLU;

    t79 = (x5709>>((x5710|x5711)-x5712));

    if (t79 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x5833 = INT32_MAX;
	int8_t x5834 = -1;
	int64_t x5835 = INT64_MAX;
	int64_t x5836 = -1LL;

    t80 = (x5833>>((x5834|x5835)-x5836));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x5885 = 115;
	volatile int64_t x5886 = -277LL;
	int32_t x5887 = -12;
	volatile int32_t x5888 = -1;
	int32_t t81 = -1;

    t81 = (x5885>>((x5886|x5887)-x5888));

    if (t81 != 115) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x5925 = UINT8_MAX;
	int32_t x5926 = INT32_MIN;
	int8_t x5927 = -1;
	int32_t x5928 = -18;

    t82 = (x5925>>((x5926|x5927)-x5928));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x5934 = 6U;
	int32_t x5935 = INT32_MIN;
	uint32_t t83 = 548U;

    t83 = (x5933>>((x5934|x5935)-x5936));

    if (t83 != 67108863U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x6013 = UINT64_MAX;
	static volatile int16_t x6014 = INT16_MIN;
	int64_t x6015 = INT64_MAX;
	uint64_t x6016 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = (x6013>>((x6014|x6015)-x6016));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x6045 = INT8_MAX;
	int8_t x6046 = INT8_MIN;
	static uint8_t x6047 = 1U;
	volatile int32_t t85 = 5815031;

    t85 = (x6045>>((x6046|x6047)-x6048));

    if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x6053 = 810;
	uint32_t x6054 = 1012478U;
	int64_t x6055 = -1LL;
	static volatile int32_t t86 = -1499;

    t86 = (x6053>>((x6054|x6055)-x6056));

    if (t86 != 810) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x6101 = 419334846;
	int64_t x6104 = -1LL;
	static volatile int32_t t87 = -1;

    t87 = (x6101>>((x6102|x6103)-x6104));

    if (t87 != 419334846) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x6145 = 13U;
	volatile uint8_t x6147 = 7U;
	volatile uint32_t x6148 = UINT32_MAX;
	int32_t t88 = -363872;

    t88 = (x6145>>((x6146|x6147)-x6148));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x6177 = 2U;
	static uint8_t x6179 = 1U;
	volatile int32_t t89 = -131657261;

    t89 = (x6177>>((x6178|x6179)-x6180));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x6399 = -1LL;
	int16_t x6400 = -19;
	static volatile uint64_t t90 = 45078973385389625LLU;

    t90 = (x6397>>((x6398|x6399)-x6400));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x6441 = 14;
	int32_t x6442 = -1;
	volatile uint8_t x6443 = 5U;
	int32_t t91 = 172464;

    t91 = (x6441>>((x6442|x6443)-x6444));

    if (t91 != 14) { NG(); } else { ; }
	
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


    return 0;
}

