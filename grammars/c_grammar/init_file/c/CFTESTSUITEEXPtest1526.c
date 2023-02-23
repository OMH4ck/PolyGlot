
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

int32_t x1 = -1;
static uint32_t x6 = 83U;
volatile int64_t x7 = -1LL;
int8_t x8 = 0;
int32_t t1 = INT32_MAX;
uint32_t x28 = 1U;
static int32_t x33 = INT32_MAX;
static uint8_t x34 = 16U;
static int32_t x79 = INT32_MIN;
int16_t x121 = 0;
volatile int16_t x139 = -1;
static volatile int8_t x184 = 14;
int16_t x207 = -1;
static volatile int32_t t8 = -90377;
int64_t x209 = -1LL;
int64_t x210 = -892024216493776381LL;
static volatile int8_t x222 = INT8_MAX;
int32_t t10 = 4518;
uint8_t x233 = 2U;
int32_t t12 = 492515;
int16_t x298 = 1;
int8_t x300 = 4;
int32_t x425 = 208;
int32_t t16 = 0;
int64_t x446 = 101LL;
static volatile uint32_t x448 = 18U;
static int32_t t17 = 107399835;
static uint32_t x587 = UINT32_MAX;
static uint32_t x605 = 3111U;
uint8_t x637 = 39U;
int32_t t23 = 1;
uint8_t x694 = UINT8_MAX;
volatile uint8_t x696 = 1U;
int16_t x894 = INT16_MAX;
static int32_t x897 = INT32_MIN;
int16_t x909 = INT16_MIN;
static volatile int64_t x922 = -1LL;
uint16_t x1018 = 1U;
int16_t x1056 = 0;
int16_t x1067 = 52;
volatile int16_t x1101 = 3;
static int16_t x1104 = 14;
volatile int32_t t37 = 0;
uint8_t x1122 = 2U;
int8_t x1155 = INT8_MAX;
volatile uint32_t t39 = UINT32_MAX;
static int64_t x1157 = 180597027037153365LL;
int16_t x1158 = -1;
int32_t x1272 = 7;
volatile int32_t t42 = 552;
static int8_t x1273 = 4;
int32_t t43 = -1;
uint32_t x1328 = 29U;
volatile int64_t t45 = INT64_MIN;
int32_t x1414 = -1;
static int8_t x1464 = 23;
static int32_t t47 = 366;
int8_t x1487 = -1;
static uint8_t x1488 = 8U;
int64_t x1594 = 2153730LL;
volatile int64_t t49 = INT64_MAX;
static volatile int64_t t50 = INT64_MAX;
int32_t t53 = 1;
int32_t x1762 = INT32_MAX;
volatile uint8_t x1763 = 72U;
int64_t t55 = 19LL;
int16_t x1850 = INT16_MAX;
volatile uint8_t x1889 = 23U;
volatile int32_t t59 = -28027370;
int16_t x1915 = -11048;
volatile int32_t t62 = -33;
static uint8_t x1985 = 1U;
static int32_t x1986 = INT32_MIN;
int16_t x1999 = INT16_MAX;
uint8_t x2041 = 9U;
volatile int8_t x2043 = INT8_MIN;
int16_t x2115 = -95;
static volatile int32_t t70 = -17332;
static int64_t x2223 = INT64_MIN;
static int8_t x2251 = 2;
int32_t x2319 = INT32_MIN;
uint16_t x2352 = 0U;
uint64_t t76 = 265070516LLU;
volatile uint16_t x2362 = UINT16_MAX;
volatile int32_t t77 = -21436;
int32_t x2381 = INT32_MIN;
volatile int16_t x2384 = 0;
uint8_t x2485 = 0U;
int32_t x2658 = -13;
static volatile uint8_t x2660 = 0U;
uint32_t x2706 = UINT32_MAX;
static uint16_t x2708 = 0U;
uint8_t x2782 = UINT8_MAX;
uint32_t x2811 = 3203214U;
static volatile int8_t x2853 = INT8_MIN;
volatile int32_t t92 = -12;
uint8_t x2964 = 11U;
volatile int32_t x2990 = -1;
volatile int32_t t95 = 6;
int16_t x3089 = -9454;
volatile int8_t x3172 = 6;
static volatile int32_t t98 = 35;
int16_t x3313 = INT16_MIN;
volatile int16_t x3315 = INT16_MAX;
static int16_t x3318 = INT16_MIN;
int8_t x3458 = INT8_MIN;
static volatile uint64_t t104 = UINT64_MAX;
int32_t x3461 = -1;
volatile int16_t x3531 = 51;
volatile uint64_t t111 = UINT64_MAX;
int32_t x3669 = INT32_MIN;
volatile int64_t x3670 = INT64_MIN;
int16_t x3671 = 41;
uint64_t x3778 = UINT64_MAX;
uint16_t x3836 = 28U;
int8_t x3860 = 23;
static volatile int64_t x3865 = -2805016576795132LL;
volatile int8_t x3926 = INT8_MIN;
int8_t x3995 = -6;
int32_t t119 = 22;
volatile int32_t t120 = INT32_MIN;
volatile int8_t x4045 = INT8_MIN;
static int16_t x4047 = INT16_MAX;
uint32_t x4056 = 1U;
int32_t t122 = -602329;
volatile int32_t t123 = -1311;
int16_t x4085 = -1;
static volatile uint32_t x4087 = UINT32_MAX;
uint32_t x4128 = 8U;
volatile int32_t x4131 = INT32_MIN;
uint8_t x4132 = 26U;
int64_t x4145 = INT64_MIN;
uint8_t x4148 = 1U;
int32_t t128 = -1;
int8_t x4284 = 0;
uint32_t t129 = 2808559U;
static uint32_t x4291 = 2U;
volatile int32_t t130 = 41491;
int16_t x4295 = INT16_MIN;
int8_t x4296 = 6;
int8_t x4304 = 22;
static int64_t x4341 = -1LL;
int32_t x4342 = INT32_MIN;
int64_t x4350 = INT64_MIN;
int64_t x4351 = -35LL;
static int16_t x4411 = -1;
int8_t x4425 = -1;
uint8_t x4428 = 3U;
static int16_t x4442 = -1;
static uint8_t x4444 = 20U;
uint32_t x4463 = 4U;
int16_t x4468 = 1;
int8_t x4519 = -1;
int8_t x4522 = -1;
uint16_t x4733 = UINT16_MAX;
uint8_t x4734 = UINT8_MAX;
int16_t x4735 = INT16_MIN;
static int8_t x4736 = 1;
int8_t x4760 = 0;
static uint8_t x4808 = 10U;
uint16_t x4987 = UINT16_MAX;
int64_t x5007 = -769558184564LL;
int8_t x5025 = INT8_MIN;
int8_t x5028 = 0;
volatile int8_t x5053 = INT8_MIN;
uint32_t x5061 = 3U;
volatile int8_t x5064 = 1;
int8_t x5151 = INT8_MAX;
int8_t x5196 = 7;
volatile uint64_t x5197 = UINT64_MAX;
static int32_t x5199 = 130494252;
int64_t x5237 = INT64_MIN;
uint8_t x5240 = 9U;
uint8_t x5381 = UINT8_MAX;
int8_t x5384 = 0;
uint16_t x5401 = 1502U;
static int32_t x5403 = INT32_MAX;
static uint64_t x5404 = 4LLU;
uint8_t x5464 = 0U;
volatile int32_t t173 = -3477;
uint8_t x5469 = 92U;
int8_t x5502 = -1;
volatile int32_t x5538 = 4;
int8_t x5540 = 0;
int8_t x5549 = -1;
int8_t x5551 = 6;
int16_t x5620 = 1;
int64_t t183 = INT64_MIN;
int32_t t187 = -169;
int8_t x5813 = INT8_MIN;
int32_t x5814 = INT32_MIN;
volatile int32_t t188 = 2;
volatile uint64_t t189 = 352882939089LLU;
int32_t x5855 = 957;
int8_t x5856 = 2;
static uint16_t x5913 = 42U;
static volatile uint16_t x5915 = 101U;
int32_t t191 = -3;
static int8_t x5962 = -15;
static volatile int16_t x5963 = INT16_MIN;
volatile int64_t t192 = INT64_MIN;
static int8_t x6019 = -17;
uint8_t x6020 = 18U;
int32_t t194 = -2118;
int16_t x6122 = -1;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint64_t x3 = 2442690500832595684LLU;
	volatile int16_t x4 = 1;
	int32_t t0 = 4982969;

    t0 = (x1^((x2==x3)>>x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;

    t1 = (x5^((x6==x7)>>x8));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x25 = 3088LLU;
	volatile int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	uint64_t t2 = 27743LLU;

    t2 = (x25^((x26==x27)>>x28));

    if (t2 != 3088LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x35 = INT32_MIN;
	volatile int16_t x36 = 1;
	int32_t t3 = INT32_MAX;

    t3 = (x33^((x34==x35)>>x36));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x77 = -1;
	static int32_t x78 = -1;
	static uint8_t x80 = 23U;
	int32_t t4 = 27272;

    t4 = (x77^((x78==x79)>>x80));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x122 = 1U;
	static volatile uint8_t x123 = 16U;
	uint32_t x124 = 14U;
	volatile int32_t t5 = -1018;

    t5 = (x121^((x122==x123)>>x124));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint64_t x138 = UINT64_MAX;
	uint16_t x140 = 2U;
	static volatile int32_t t6 = -155;

    t6 = (x137^((x138==x139)>>x140));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x181 = INT16_MIN;
	static int32_t x182 = INT32_MAX;
	int16_t x183 = 9;
	static int32_t t7 = -2005;

    t7 = (x181^((x182==x183)>>x184));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x205 = INT8_MIN;
	static int32_t x206 = -27761398;
	int8_t x208 = 1;

    t8 = (x205^((x206==x207)>>x208));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x211 = INT32_MIN;
	int16_t x212 = 1;
	volatile int64_t t9 = 8848LL;

    t9 = (x209^((x210==x211)>>x212));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x223 = -1;
	uint16_t x224 = 23U;

    t10 = (x221^((x222==x223)>>x224));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x234 = -154;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = 1;
	int32_t t11 = 55461141;

    t11 = (x233^((x234==x235)>>x236));

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x281 = INT16_MIN;
	uint64_t x282 = UINT64_MAX;
	volatile int8_t x283 = INT8_MAX;
	static int32_t x284 = 0;

    t12 = (x281^((x282==x283)>>x284));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x297 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	volatile int32_t t13 = -2;

    t13 = (x297^((x298==x299)>>x300));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x373 = -2LL;
	uint8_t x374 = 4U;
	int64_t x375 = -163754726454357LL;
	uint16_t x376 = 26U;
	int64_t t14 = -1197771LL;

    t14 = (x373^((x374==x375)>>x376));

    if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x377 = INT32_MAX;
	static int8_t x378 = INT8_MAX;
	static volatile uint64_t x379 = UINT64_MAX;
	volatile uint64_t x380 = 0LLU;
	volatile int32_t t15 = INT32_MAX;

    t15 = (x377^((x378==x379)>>x380));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x426 = -7;
	static int32_t x427 = INT32_MIN;
	static int8_t x428 = 0;

    t16 = (x425^((x426==x427)>>x428));

    if (t16 != 208) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x445 = INT8_MIN;
	static uint64_t x447 = 901362993184LLU;

    t17 = (x445^((x446==x447)>>x448));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x489 = INT32_MIN;
	uint16_t x490 = 1308U;
	int32_t x491 = 1145713;
	static int8_t x492 = 21;
	int32_t t18 = INT32_MIN;

    t18 = (x489^((x490==x491)>>x492));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x537 = INT8_MIN;
	int16_t x538 = INT16_MAX;
	static volatile uint16_t x539 = UINT16_MAX;
	int16_t x540 = 0;
	int32_t t19 = 189552039;

    t19 = (x537^((x538==x539)>>x540));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x585 = 2158U;
	int16_t x586 = 1760;
	static int8_t x588 = 1;
	static int32_t t20 = -882239;

    t20 = (x585^((x586==x587)>>x588));

    if (t20 != 2158) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x606 = INT8_MIN;
	uint64_t x607 = 221573645368996LLU;
	int8_t x608 = 17;
	volatile uint32_t t21 = 1216825U;

    t21 = (x605^((x606==x607)>>x608));

    if (t21 != 3111U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x638 = INT64_MIN;
	volatile int64_t x639 = 0LL;
	int8_t x640 = 4;
	volatile int32_t t22 = -3114291;

    t22 = (x637^((x638==x639)>>x640));

    if (t22 != 39) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x649 = 35654223;
	int8_t x650 = INT8_MAX;
	int8_t x651 = -1;
	volatile int8_t x652 = 1;

    t23 = (x649^((x650==x651)>>x652));

    if (t23 != 35654223) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x693 = 115U;
	volatile int16_t x695 = INT16_MIN;
	int32_t t24 = -113096;

    t24 = (x693^((x694==x695)>>x696));

    if (t24 != 115) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x789 = INT64_MIN;
	volatile int16_t x790 = INT16_MIN;
	static uint16_t x791 = UINT16_MAX;
	int16_t x792 = 8;
	int64_t t25 = INT64_MIN;

    t25 = (x789^((x790==x791)>>x792));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x893 = 2U;
	volatile int64_t x895 = INT64_MIN;
	static uint8_t x896 = 0U;
	int32_t t26 = -13;

    t26 = (x893^((x894==x895)>>x896));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x898 = INT8_MIN;
	int64_t x899 = INT64_MIN;
	uint8_t x900 = 3U;
	static volatile int32_t t27 = INT32_MIN;

    t27 = (x897^((x898==x899)>>x900));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x910 = INT32_MIN;
	int32_t x911 = 287827;
	int8_t x912 = 1;
	int32_t t28 = 5497357;

    t28 = (x909^((x910==x911)>>x912));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x921 = -13914797929310LL;
	int32_t x923 = -1;
	int64_t x924 = 7LL;
	int64_t t29 = 43312117182LL;

    t29 = (x921^((x922==x923)>>x924));

    if (t29 != -13914797929310LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x925 = INT64_MIN;
	static volatile int64_t x926 = INT64_MIN;
	static int8_t x927 = INT8_MIN;
	static uint16_t x928 = 12U;
	int64_t t30 = INT64_MIN;

    t30 = (x925^((x926==x927)>>x928));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x933 = 33222063873LLU;
	volatile int16_t x934 = INT16_MIN;
	int32_t x935 = -16720204;
	volatile uint8_t x936 = 2U;
	uint64_t t31 = 97256007LLU;

    t31 = (x933^((x934==x935)>>x936));

    if (t31 != 33222063873LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x973 = -1;
	int16_t x974 = -113;
	static volatile uint64_t x975 = 69969605684LLU;
	uint16_t x976 = 28U;
	static volatile int32_t t32 = 15;

    t32 = (x973^((x974==x975)>>x976));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1017 = INT64_MAX;
	int8_t x1019 = INT8_MAX;
	int16_t x1020 = 12;
	volatile int64_t t33 = INT64_MAX;

    t33 = (x1017^((x1018==x1019)>>x1020));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x1053 = INT8_MAX;
	static int8_t x1054 = INT8_MIN;
	volatile int64_t x1055 = INT64_MIN;
	static volatile int32_t t34 = 100314790;

    t34 = (x1053^((x1054==x1055)>>x1056));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x1065 = 326465293064491LL;
	static int64_t x1066 = INT64_MIN;
	int8_t x1068 = 1;
	volatile int64_t t35 = 58977498LL;

    t35 = (x1065^((x1066==x1067)>>x1068));

    if (t35 != 326465293064491LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1097 = INT8_MAX;
	static int32_t x1098 = -1;
	int8_t x1099 = -1;
	static uint64_t x1100 = 0LLU;
	volatile int32_t t36 = 0;

    t36 = (x1097^((x1098==x1099)>>x1100));

    if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1102 = INT16_MIN;
	volatile int8_t x1103 = 0;

    t37 = (x1101^((x1102==x1103)>>x1104));

    if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1121 = INT64_MIN;
	int8_t x1123 = -1;
	int8_t x1124 = 1;
	volatile int64_t t38 = INT64_MIN;

    t38 = (x1121^((x1122==x1123)>>x1124));

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x1153 = UINT32_MAX;
	int64_t x1154 = INT64_MIN;
	uint8_t x1156 = 3U;

    t39 = (x1153^((x1154==x1155)>>x1156));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x1159 = 3U;
	uint8_t x1160 = 1U;
	static volatile int64_t t40 = 25018859747743916LL;

    t40 = (x1157^((x1158==x1159)>>x1160));

    if (t40 != 180597027037153365LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1221 = 570LLU;
	uint32_t x1222 = UINT32_MAX;
	volatile int16_t x1223 = INT16_MIN;
	static int8_t x1224 = 27;
	uint64_t t41 = 7467450LLU;

    t41 = (x1221^((x1222==x1223)>>x1224));

    if (t41 != 570LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1269 = INT8_MAX;
	uint64_t x1270 = 116023043LLU;
	static int64_t x1271 = INT64_MIN;

    t42 = (x1269^((x1270==x1271)>>x1272));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1274 = -1;
	static int64_t x1275 = INT64_MIN;
	uint8_t x1276 = 5U;

    t43 = (x1273^((x1274==x1275)>>x1276));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x1325 = INT32_MAX;
	int32_t x1326 = -1;
	uint32_t x1327 = UINT32_MAX;
	int32_t t44 = INT32_MAX;

    t44 = (x1325^((x1326==x1327)>>x1328));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1333 = INT64_MIN;
	static volatile int16_t x1334 = 1190;
	volatile int16_t x1335 = -2787;
	uint32_t x1336 = 7U;

    t45 = (x1333^((x1334==x1335)>>x1336));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1413 = -5;
	static uint8_t x1415 = UINT8_MAX;
	uint8_t x1416 = 12U;
	volatile int32_t t46 = 20215221;

    t46 = (x1413^((x1414==x1415)>>x1416));

    if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1461 = INT8_MIN;
	volatile int16_t x1462 = -5;
	int32_t x1463 = -1;

    t47 = (x1461^((x1462==x1463)>>x1464));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1485 = -324304460;
	uint64_t x1486 = UINT64_MAX;
	static volatile int32_t t48 = -565;

    t48 = (x1485^((x1486==x1487)>>x1488));

    if (t48 != -324304460) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x1593 = INT64_MAX;
	volatile int64_t x1595 = -1LL;
	uint8_t x1596 = 10U;

    t49 = (x1593^((x1594==x1595)>>x1596));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x1605 = INT64_MAX;
	uint8_t x1606 = 2U;
	int32_t x1607 = INT32_MAX;
	int16_t x1608 = 0;

    t50 = (x1605^((x1606==x1607)>>x1608));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x1609 = 1U;
	static int32_t x1610 = 133;
	volatile int32_t x1611 = 1263485;
	uint16_t x1612 = 3U;
	uint32_t t51 = 87127501U;

    t51 = (x1609^((x1610==x1611)>>x1612));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1665 = INT64_MIN;
	static volatile int32_t x1666 = INT32_MAX;
	int16_t x1667 = INT16_MIN;
	int8_t x1668 = 1;
	int64_t t52 = INT64_MIN;

    t52 = (x1665^((x1666==x1667)>>x1668));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x1677 = 47U;
	uint32_t x1678 = 224061964U;
	int64_t x1679 = -1LL;
	int32_t x1680 = 1;

    t53 = (x1677^((x1678==x1679)>>x1680));

    if (t53 != 47) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x1757 = 3U;
	int16_t x1758 = INT16_MIN;
	uint8_t x1759 = UINT8_MAX;
	uint16_t x1760 = 0U;
	int32_t t54 = -59739759;

    t54 = (x1757^((x1758==x1759)>>x1760));

    if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x1761 = -1LL;
	uint8_t x1764 = 13U;

    t55 = (x1761^((x1762==x1763)>>x1764));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1813 = 85U;
	static int32_t x1814 = -1;
	static volatile int32_t x1815 = INT32_MIN;
	uint8_t x1816 = 14U;
	static volatile int32_t t56 = -3;

    t56 = (x1813^((x1814==x1815)>>x1816));

    if (t56 != 85) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x1821 = -1LL;
	int8_t x1822 = -1;
	static volatile uint64_t x1823 = UINT64_MAX;
	int64_t x1824 = 1LL;
	int64_t t57 = 99196628LL;

    t57 = (x1821^((x1822==x1823)>>x1824));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x1849 = INT32_MIN;
	static int8_t x1851 = -1;
	volatile uint32_t x1852 = 9U;
	static int32_t t58 = INT32_MIN;

    t58 = (x1849^((x1850==x1851)>>x1852));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1890 = 0U;
	uint32_t x1891 = 906729403U;
	volatile int8_t x1892 = 0;

    t59 = (x1889^((x1890==x1891)>>x1892));

    if (t59 != 23) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1901 = 1577831807LL;
	int64_t x1902 = INT64_MIN;
	static volatile int16_t x1903 = INT16_MIN;
	static volatile int8_t x1904 = 1;
	int64_t t60 = -136658891LL;

    t60 = (x1901^((x1902==x1903)>>x1904));

    if (t60 != 1577831807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x1909 = 5;
	static volatile uint8_t x1910 = UINT8_MAX;
	static volatile int8_t x1911 = INT8_MIN;
	int8_t x1912 = 1;
	static int32_t t61 = 497498;

    t61 = (x1909^((x1910==x1911)>>x1912));

    if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x1913 = INT16_MIN;
	int16_t x1914 = INT16_MIN;
	int8_t x1916 = 13;

    t62 = (x1913^((x1914==x1915)>>x1916));

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x1987 = 18U;
	int8_t x1988 = 23;
	volatile int32_t t63 = -249665011;

    t63 = (x1985^((x1986==x1987)>>x1988));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x1997 = -1LL;
	int8_t x1998 = INT8_MAX;
	uint32_t x2000 = 14U;
	static int64_t t64 = 349640101184288LL;

    t64 = (x1997^((x1998==x1999)>>x2000));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2001 = -3884311362823200056LL;
	int32_t x2002 = -86107433;
	uint64_t x2003 = 1649181516001548202LLU;
	uint16_t x2004 = 1U;
	volatile int64_t t65 = -61311216LL;

    t65 = (x2001^((x2002==x2003)>>x2004));

    if (t65 != -3884311362823200056LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x2013 = 1489732927648979003LL;
	int64_t x2014 = INT64_MIN;
	int64_t x2015 = -1LL;
	int8_t x2016 = 1;
	volatile int64_t t66 = 2357256821LL;

    t66 = (x2013^((x2014==x2015)>>x2016));

    if (t66 != 1489732927648979003LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x2021 = 27LL;
	uint16_t x2022 = 3U;
	int32_t x2023 = -1;
	volatile uint8_t x2024 = 17U;
	volatile int64_t t67 = 43LL;

    t67 = (x2021^((x2022==x2023)>>x2024));

    if (t67 != 27LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x2042 = INT64_MIN;
	static uint16_t x2044 = 1U;
	int32_t t68 = 833249152;

    t68 = (x2041^((x2042==x2043)>>x2044));

    if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2113 = 102792976010797LL;
	static int32_t x2114 = -6788565;
	static int32_t x2116 = 2;
	int64_t t69 = -819455846320LL;

    t69 = (x2113^((x2114==x2115)>>x2116));

    if (t69 != 102792976010797LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2137 = -1;
	uint16_t x2138 = 27916U;
	volatile int32_t x2139 = INT32_MIN;
	int64_t x2140 = 1LL;

    t70 = (x2137^((x2138==x2139)>>x2140));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2153 = -1;
	int32_t x2154 = -14;
	uint32_t x2155 = UINT32_MAX;
	int16_t x2156 = 4;
	static int32_t t71 = 358147;

    t71 = (x2153^((x2154==x2155)>>x2156));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x2221 = INT8_MIN;
	static int64_t x2222 = INT64_MIN;
	int8_t x2224 = 0;
	volatile int32_t t72 = -28098153;

    t72 = (x2221^((x2222==x2223)>>x2224));

    if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x2249 = INT8_MIN;
	int8_t x2250 = -1;
	static volatile uint8_t x2252 = 17U;
	static volatile int32_t t73 = -27;

    t73 = (x2249^((x2250==x2251)>>x2252));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x2297 = -648343;
	int32_t x2298 = -1;
	static int8_t x2299 = INT8_MIN;
	static int16_t x2300 = 2;
	int32_t t74 = -3353;

    t74 = (x2297^((x2298==x2299)>>x2300));

    if (t74 != -648343) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x2317 = 29U;
	int32_t x2318 = INT32_MAX;
	int8_t x2320 = 0;
	int32_t t75 = 35546122;

    t75 = (x2317^((x2318==x2319)>>x2320));

    if (t75 != 29) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x2349 = 524902047368261839LLU;
	int64_t x2350 = INT64_MAX;
	volatile uint16_t x2351 = 3U;

    t76 = (x2349^((x2350==x2351)>>x2352));

    if (t76 != 524902047368261839LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x2361 = 8354U;
	uint16_t x2363 = UINT16_MAX;
	volatile uint8_t x2364 = 3U;

    t77 = (x2361^((x2362==x2363)>>x2364));

    if (t77 != 8354) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x2382 = 1U;
	uint8_t x2383 = 0U;
	volatile int32_t t78 = INT32_MIN;

    t78 = (x2381^((x2382==x2383)>>x2384));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x2385 = UINT64_MAX;
	int64_t x2386 = -1LL;
	int64_t x2387 = -1LL;
	static int8_t x2388 = 5;
	uint64_t t79 = UINT64_MAX;

    t79 = (x2385^((x2386==x2387)>>x2388));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2405 = UINT64_MAX;
	static int32_t x2406 = -1015;
	int32_t x2407 = 1;
	int8_t x2408 = 0;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (x2405^((x2406==x2407)>>x2408));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2486 = INT16_MIN;
	volatile int16_t x2487 = 10597;
	int8_t x2488 = 1;
	int32_t t81 = -332134;

    t81 = (x2485^((x2486==x2487)>>x2488));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x2585 = -1LL;
	uint32_t x2586 = 156U;
	int64_t x2587 = -1891129825916851LL;
	uint8_t x2588 = 0U;
	static volatile int64_t t82 = -8373136053914LL;

    t82 = (x2585^((x2586==x2587)>>x2588));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x2657 = -123805;
	int64_t x2659 = 5LL;
	volatile int32_t t83 = 1;

    t83 = (x2657^((x2658==x2659)>>x2660));

    if (t83 != -123805) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2705 = -37;
	static uint32_t x2707 = 5U;
	static volatile int32_t t84 = 293;

    t84 = (x2705^((x2706==x2707)>>x2708));

    if (t84 != -37) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2729 = INT32_MIN;
	int16_t x2730 = INT16_MAX;
	static volatile uint32_t x2731 = 512065377U;
	uint8_t x2732 = 0U;
	volatile int32_t t85 = INT32_MIN;

    t85 = (x2729^((x2730==x2731)>>x2732));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x2753 = UINT32_MAX;
	int16_t x2754 = INT16_MIN;
	int64_t x2755 = INT64_MIN;
	uint8_t x2756 = 2U;
	uint32_t t86 = UINT32_MAX;

    t86 = (x2753^((x2754==x2755)>>x2756));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x2765 = 22U;
	static int32_t x2766 = -1801;
	int32_t x2767 = INT32_MAX;
	int16_t x2768 = 3;
	static volatile int32_t t87 = -32615896;

    t87 = (x2765^((x2766==x2767)>>x2768));

    if (t87 != 22) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x2781 = 12563U;
	int8_t x2783 = INT8_MIN;
	static int32_t x2784 = 0;
	static volatile int32_t t88 = 5414633;

    t88 = (x2781^((x2782==x2783)>>x2784));

    if (t88 != 12563) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x2809 = 0;
	int16_t x2810 = INT16_MIN;
	uint32_t x2812 = 9U;
	int32_t t89 = 130403;

    t89 = (x2809^((x2810==x2811)>>x2812));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2837 = INT64_MIN;
	static volatile int16_t x2838 = INT16_MIN;
	uint32_t x2839 = UINT32_MAX;
	int16_t x2840 = 25;
	volatile int64_t t90 = INT64_MIN;

    t90 = (x2837^((x2838==x2839)>>x2840));

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x2854 = -1;
	int32_t x2855 = -1;
	volatile uint8_t x2856 = 3U;
	volatile int32_t t91 = -273492086;

    t91 = (x2853^((x2854==x2855)>>x2856));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x2937 = 83U;
	static int16_t x2938 = -1;
	int64_t x2939 = INT64_MIN;
	int16_t x2940 = 0;

    t92 = (x2937^((x2938==x2939)>>x2940));

    if (t92 != 83) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x2961 = 2U;
	int32_t x2962 = -31;
	static int16_t x2963 = -1;
	static volatile int32_t t93 = -2;

    t93 = (x2961^((x2962==x2963)>>x2964));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x2989 = 122U;
	volatile int64_t x2991 = 793LL;
	uint16_t x2992 = 2U;
	int32_t t94 = 1535;

    t94 = (x2989^((x2990==x2991)>>x2992));

    if (t94 != 122) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x3013 = 10;
	volatile uint8_t x3014 = UINT8_MAX;
	int64_t x3015 = -1LL;
	static uint8_t x3016 = 13U;

    t95 = (x3013^((x3014==x3015)>>x3016));

    if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x3090 = UINT16_MAX;
	static int32_t x3091 = INT32_MIN;
	uint8_t x3092 = 5U;
	int32_t t96 = 225;

    t96 = (x3089^((x3090==x3091)>>x3092));

    if (t96 != -9454) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x3169 = UINT16_MAX;
	int32_t x3170 = 5153;
	volatile int32_t x3171 = 3454;
	int32_t t97 = -26;

    t97 = (x3169^((x3170==x3171)>>x3172));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x3221 = -274;
	static int16_t x3222 = INT16_MAX;
	int32_t x3223 = INT32_MIN;
	int8_t x3224 = 1;

    t98 = (x3221^((x3222==x3223)>>x3224));

    if (t98 != -274) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x3289 = UINT32_MAX;
	static int8_t x3290 = INT8_MIN;
	uint16_t x3291 = 59U;
	int8_t x3292 = 1;
	uint32_t t99 = UINT32_MAX;

    t99 = (x3289^((x3290==x3291)>>x3292));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x3314 = 272U;
	uint8_t x3316 = 8U;
	int32_t t100 = -135217;

    t100 = (x3313^((x3314==x3315)>>x3316));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3317 = UINT16_MAX;
	int8_t x3319 = INT8_MAX;
	uint8_t x3320 = 12U;
	static volatile int32_t t101 = 45669;

    t101 = (x3317^((x3318==x3319)>>x3320));

    if (t101 != 65535) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x3357 = INT16_MIN;
	volatile uint8_t x3358 = UINT8_MAX;
	int8_t x3359 = INT8_MAX;
	int8_t x3360 = 1;
	int32_t t102 = -1844689;

    t102 = (x3357^((x3358==x3359)>>x3360));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3413 = -1;
	int16_t x3414 = INT16_MIN;
	int16_t x3415 = -1;
	int8_t x3416 = 7;
	int32_t t103 = -4987886;

    t103 = (x3413^((x3414==x3415)>>x3416));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x3457 = UINT64_MAX;
	volatile uint32_t x3459 = 26401U;
	uint8_t x3460 = 3U;

    t104 = (x3457^((x3458==x3459)>>x3460));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x3462 = 1089945965579116534LLU;
	int64_t x3463 = INT64_MAX;
	static uint16_t x3464 = 0U;
	int32_t t105 = -450;

    t105 = (x3461^((x3462==x3463)>>x3464));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3493 = -23;
	static volatile uint64_t x3494 = UINT64_MAX;
	int32_t x3495 = 39369;
	uint8_t x3496 = 3U;
	volatile int32_t t106 = -296999;

    t106 = (x3493^((x3494==x3495)>>x3496));

    if (t106 != -23) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x3529 = INT32_MIN;
	int8_t x3530 = INT8_MIN;
	uint8_t x3532 = 25U;
	volatile int32_t t107 = INT32_MIN;

    t107 = (x3529^((x3530==x3531)>>x3532));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x3537 = -1;
	uint32_t x3538 = 68U;
	uint8_t x3539 = 9U;
	uint8_t x3540 = 7U;
	volatile int32_t t108 = 1;

    t108 = (x3537^((x3538==x3539)>>x3540));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x3605 = UINT64_MAX;
	static volatile uint8_t x3606 = 0U;
	int16_t x3607 = -27;
	uint8_t x3608 = 7U;
	uint64_t t109 = UINT64_MAX;

    t109 = (x3605^((x3606==x3607)>>x3608));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x3621 = 115U;
	int8_t x3622 = INT8_MIN;
	int32_t x3623 = -100604;
	volatile uint8_t x3624 = 18U;
	volatile int32_t t110 = -5;

    t110 = (x3621^((x3622==x3623)>>x3624));

    if (t110 != 115) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x3637 = UINT64_MAX;
	volatile uint64_t x3638 = UINT64_MAX;
	uint32_t x3639 = 1065037U;
	uint8_t x3640 = 8U;

    t111 = (x3637^((x3638==x3639)>>x3640));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x3672 = 9U;
	int32_t t112 = INT32_MIN;

    t112 = (x3669^((x3670==x3671)>>x3672));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3693 = UINT64_MAX;
	uint64_t x3694 = 538468349LLU;
	volatile int8_t x3695 = INT8_MAX;
	uint16_t x3696 = 2U;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (x3693^((x3694==x3695)>>x3696));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x3777 = INT8_MIN;
	uint16_t x3779 = UINT16_MAX;
	uint8_t x3780 = 2U;
	volatile int32_t t114 = 279142;

    t114 = (x3777^((x3778==x3779)>>x3780));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x3833 = INT64_MAX;
	static int8_t x3834 = -1;
	uint8_t x3835 = 0U;
	int64_t t115 = INT64_MAX;

    t115 = (x3833^((x3834==x3835)>>x3836));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x3857 = 2U;
	volatile uint8_t x3858 = 32U;
	int16_t x3859 = INT16_MIN;
	int32_t t116 = -7571;

    t116 = (x3857^((x3858==x3859)>>x3860));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3866 = 171853985;
	uint32_t x3867 = 2520U;
	volatile uint64_t x3868 = 15LLU;
	volatile int64_t t117 = 1446LL;

    t117 = (x3865^((x3866==x3867)>>x3868));

    if (t117 != -2805016576795132LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x3925 = -1;
	int8_t x3927 = INT8_MIN;
	static int8_t x3928 = 10;
	volatile int32_t t118 = -1991096;

    t118 = (x3925^((x3926==x3927)>>x3928));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3993 = 1876;
	volatile int16_t x3994 = INT16_MIN;
	static int8_t x3996 = 4;

    t119 = (x3993^((x3994==x3995)>>x3996));

    if (t119 != 1876) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x4037 = INT32_MIN;
	int32_t x4038 = INT32_MAX;
	uint32_t x4039 = 27U;
	volatile int16_t x4040 = 9;

    t120 = (x4037^((x4038==x4039)>>x4040));

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4046 = 0;
	static volatile uint8_t x4048 = 27U;
	int32_t t121 = -27626;

    t121 = (x4045^((x4046==x4047)>>x4048));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x4053 = INT8_MIN;
	static int8_t x4054 = INT8_MAX;
	int16_t x4055 = INT16_MIN;

    t122 = (x4053^((x4054==x4055)>>x4056));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x4073 = UINT16_MAX;
	static volatile uint8_t x4074 = 71U;
	int32_t x4075 = INT32_MIN;
	int32_t x4076 = 0;

    t123 = (x4073^((x4074==x4075)>>x4076));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x4086 = 48U;
	int8_t x4088 = 1;
	int32_t t124 = -10267863;

    t124 = (x4085^((x4086==x4087)>>x4088));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x4125 = UINT8_MAX;
	int64_t x4126 = INT64_MIN;
	int32_t x4127 = INT32_MAX;
	int32_t t125 = -31781;

    t125 = (x4125^((x4126==x4127)>>x4128));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4129 = -1;
	volatile uint32_t x4130 = UINT32_MAX;
	int32_t t126 = -150106;

    t126 = (x4129^((x4130==x4131)>>x4132));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x4146 = 66U;
	int16_t x4147 = INT16_MAX;
	volatile int64_t t127 = INT64_MIN;

    t127 = (x4145^((x4146==x4147)>>x4148));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x4233 = 0;
	volatile int8_t x4234 = -1;
	int64_t x4235 = INT64_MIN;
	uint8_t x4236 = 6U;

    t128 = (x4233^((x4234==x4235)>>x4236));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x4281 = 13687875U;
	volatile int64_t x4282 = INT64_MIN;
	uint64_t x4283 = 928641414LLU;

    t129 = (x4281^((x4282==x4283)>>x4284));

    if (t129 != 13687875U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4289 = 23;
	int16_t x4290 = -1;
	int16_t x4292 = 12;

    t130 = (x4289^((x4290==x4291)>>x4292));

    if (t130 != 23) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x4293 = UINT32_MAX;
	int32_t x4294 = INT32_MIN;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = (x4293^((x4294==x4295)>>x4296));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x4301 = INT16_MAX;
	int16_t x4302 = 1;
	int16_t x4303 = INT16_MIN;
	int32_t t132 = 403;

    t132 = (x4301^((x4302==x4303)>>x4304));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4343 = INT16_MIN;
	int8_t x4344 = 1;
	volatile int64_t t133 = 39502323195LL;

    t133 = (x4341^((x4342==x4343)>>x4344));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x4349 = INT16_MAX;
	static int32_t x4352 = 0;
	int32_t t134 = -841015;

    t134 = (x4349^((x4350==x4351)>>x4352));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x4409 = 37U;
	static uint32_t x4410 = UINT32_MAX;
	uint32_t x4412 = 21U;
	int32_t t135 = 887;

    t135 = (x4409^((x4410==x4411)>>x4412));

    if (t135 != 37) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x4426 = -1;
	int8_t x4427 = INT8_MIN;
	static int32_t t136 = -21981261;

    t136 = (x4425^((x4426==x4427)>>x4428));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x4441 = UINT8_MAX;
	int8_t x4443 = -58;
	volatile int32_t t137 = -623;

    t137 = (x4441^((x4442==x4443)>>x4444));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x4461 = 401696783;
	int8_t x4462 = -3;
	static int8_t x4464 = 22;
	int32_t t138 = -9382;

    t138 = (x4461^((x4462==x4463)>>x4464));

    if (t138 != 401696783) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4465 = -1LL;
	uint8_t x4466 = UINT8_MAX;
	int32_t x4467 = INT32_MIN;
	volatile int64_t t139 = 3769672034839122004LL;

    t139 = (x4465^((x4466==x4467)>>x4468));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4517 = UINT8_MAX;
	int32_t x4518 = INT32_MIN;
	uint8_t x4520 = 24U;
	static volatile int32_t t140 = 639;

    t140 = (x4517^((x4518==x4519)>>x4520));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x4521 = UINT16_MAX;
	int64_t x4523 = -3667005117575918745LL;
	uint8_t x4524 = 1U;
	int32_t t141 = -1641;

    t141 = (x4521^((x4522==x4523)>>x4524));

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x4537 = INT8_MAX;
	volatile uint8_t x4538 = 87U;
	static volatile int16_t x4539 = -1;
	static int16_t x4540 = 2;
	int32_t t142 = -32023028;

    t142 = (x4537^((x4538==x4539)>>x4540));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4589 = -30;
	static volatile int16_t x4590 = INT16_MAX;
	uint8_t x4591 = UINT8_MAX;
	static int32_t x4592 = 0;
	volatile int32_t t143 = -16769823;

    t143 = (x4589^((x4590==x4591)>>x4592));

    if (t143 != -30) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x4649 = 13U;
	volatile int8_t x4650 = 16;
	volatile uint32_t x4651 = 2465030U;
	int8_t x4652 = 7;
	volatile int32_t t144 = -5374906;

    t144 = (x4649^((x4650==x4651)>>x4652));

    if (t144 != 13) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x4685 = 112914759948386914LLU;
	int8_t x4686 = -18;
	static int8_t x4687 = INT8_MIN;
	uint16_t x4688 = 0U;
	uint64_t t145 = 437429LLU;

    t145 = (x4685^((x4686==x4687)>>x4688));

    if (t145 != 112914759948386914LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t t146 = -778;

    t146 = (x4733^((x4734==x4735)>>x4736));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x4757 = -1;
	int16_t x4758 = -1;
	volatile int8_t x4759 = INT8_MIN;
	int32_t t147 = 151648;

    t147 = (x4757^((x4758==x4759)>>x4760));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x4805 = 6802U;
	uint64_t x4806 = 153335359LLU;
	static int8_t x4807 = 0;
	uint32_t t148 = 25U;

    t148 = (x4805^((x4806==x4807)>>x4808));

    if (t148 != 6802U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x4829 = 2938002U;
	static int16_t x4830 = -1;
	volatile int64_t x4831 = -1LL;
	int8_t x4832 = 1;
	static volatile uint32_t t149 = 20108U;

    t149 = (x4829^((x4830==x4831)>>x4832));

    if (t149 != 2938002U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x4893 = INT8_MAX;
	static int8_t x4894 = INT8_MIN;
	static int8_t x4895 = -3;
	uint16_t x4896 = 9U;
	int32_t t150 = 41807;

    t150 = (x4893^((x4894==x4895)>>x4896));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x4945 = 440058U;
	int64_t x4946 = -1LL;
	volatile int32_t x4947 = 59876691;
	uint16_t x4948 = 3U;
	volatile uint32_t t151 = 4U;

    t151 = (x4945^((x4946==x4947)>>x4948));

    if (t151 != 440058U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x4985 = INT16_MIN;
	int32_t x4986 = 5;
	volatile int32_t x4988 = 1;
	static int32_t t152 = 4;

    t152 = (x4985^((x4986==x4987)>>x4988));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x5005 = 177996607U;
	int32_t x5006 = 7;
	int8_t x5008 = 7;
	static uint32_t t153 = 123084U;

    t153 = (x5005^((x5006==x5007)>>x5008));

    if (t153 != 177996607U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x5026 = INT16_MIN;
	uint8_t x5027 = 13U;
	int32_t t154 = 36;

    t154 = (x5025^((x5026==x5027)>>x5028));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x5033 = INT8_MAX;
	int16_t x5034 = INT16_MAX;
	static int32_t x5035 = -1;
	uint16_t x5036 = 24U;
	static int32_t t155 = -42618;

    t155 = (x5033^((x5034==x5035)>>x5036));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x5049 = 297LLU;
	uint16_t x5050 = UINT16_MAX;
	int8_t x5051 = -1;
	uint8_t x5052 = 14U;
	uint64_t t156 = 12LLU;

    t156 = (x5049^((x5050==x5051)>>x5052));

    if (t156 != 297LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x5054 = 9747;
	int64_t x5055 = INT64_MAX;
	static volatile int8_t x5056 = 0;
	static int32_t t157 = -2;

    t157 = (x5053^((x5054==x5055)>>x5056));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x5062 = INT16_MAX;
	int32_t x5063 = -1;
	volatile uint32_t t158 = 30824U;

    t158 = (x5061^((x5062==x5063)>>x5064));

    if (t158 != 3U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x5117 = UINT32_MAX;
	uint16_t x5118 = 31562U;
	int8_t x5119 = INT8_MAX;
	volatile uint8_t x5120 = 2U;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x5117^((x5118==x5119)>>x5120));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x5149 = INT8_MAX;
	int16_t x5150 = INT16_MAX;
	int32_t x5152 = 1;
	volatile int32_t t160 = -10038897;

    t160 = (x5149^((x5150==x5151)>>x5152));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x5153 = -1;
	uint32_t x5154 = 25680U;
	int8_t x5155 = INT8_MAX;
	volatile uint16_t x5156 = 0U;
	int32_t t161 = 802243;

    t161 = (x5153^((x5154==x5155)>>x5156));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x5177 = 270U;
	int8_t x5178 = INT8_MIN;
	static int64_t x5179 = INT64_MAX;
	int8_t x5180 = 1;
	static uint32_t t162 = 8840U;

    t162 = (x5177^((x5178==x5179)>>x5180));

    if (t162 != 270U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x5193 = -260;
	int8_t x5194 = INT8_MIN;
	uint8_t x5195 = 93U;
	int32_t t163 = -203;

    t163 = (x5193^((x5194==x5195)>>x5196));

    if (t163 != -260) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x5198 = -7364038044810905LL;
	volatile int16_t x5200 = 10;
	uint64_t t164 = UINT64_MAX;

    t164 = (x5197^((x5198==x5199)>>x5200));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x5213 = UINT8_MAX;
	static int64_t x5214 = 887LL;
	volatile uint8_t x5215 = 84U;
	static int32_t x5216 = 1;
	int32_t t165 = 812;

    t165 = (x5213^((x5214==x5215)>>x5216));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5225 = 9U;
	uint32_t x5226 = 153619U;
	static uint8_t x5227 = 1U;
	static volatile uint8_t x5228 = 18U;
	volatile int32_t t166 = 10164737;

    t166 = (x5225^((x5226==x5227)>>x5228));

    if (t166 != 9) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x5238 = INT16_MIN;
	static int64_t x5239 = 781186302254LL;
	volatile int64_t t167 = INT64_MIN;

    t167 = (x5237^((x5238==x5239)>>x5240));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x5382 = INT32_MIN;
	static uint16_t x5383 = 1792U;
	volatile int32_t t168 = -838079262;

    t168 = (x5381^((x5382==x5383)>>x5384));

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x5402 = INT8_MIN;
	volatile int32_t t169 = -9864;

    t169 = (x5401^((x5402==x5403)>>x5404));

    if (t169 != 1502) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x5421 = 798U;
	int32_t x5422 = -1;
	static volatile int32_t x5423 = INT32_MAX;
	static int8_t x5424 = 0;
	static int32_t t170 = 6;

    t170 = (x5421^((x5422==x5423)>>x5424));

    if (t170 != 798) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x5445 = INT8_MIN;
	uint8_t x5446 = 0U;
	volatile int64_t x5447 = 123915946625LL;
	int8_t x5448 = 1;
	static int32_t t171 = 8;

    t171 = (x5445^((x5446==x5447)>>x5448));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x5449 = -324762173;
	volatile int16_t x5450 = -1;
	static int8_t x5451 = INT8_MIN;
	int16_t x5452 = 0;
	int32_t t172 = 449995;

    t172 = (x5449^((x5450==x5451)>>x5452));

    if (t172 != -324762173) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x5461 = INT16_MIN;
	static int16_t x5462 = -121;
	volatile int32_t x5463 = -9557;

    t173 = (x5461^((x5462==x5463)>>x5464));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x5470 = -1;
	int64_t x5471 = INT64_MAX;
	uint8_t x5472 = 5U;
	static int32_t t174 = -55150849;

    t174 = (x5469^((x5470==x5471)>>x5472));

    if (t174 != 92) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x5473 = 0U;
	int32_t x5474 = INT32_MAX;
	int32_t x5475 = INT32_MAX;
	volatile uint16_t x5476 = 24U;
	int32_t t175 = -1547720;

    t175 = (x5473^((x5474==x5475)>>x5476));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x5501 = INT32_MAX;
	static int8_t x5503 = INT8_MAX;
	int8_t x5504 = 10;
	int32_t t176 = INT32_MAX;

    t176 = (x5501^((x5502==x5503)>>x5504));

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5537 = INT8_MIN;
	int64_t x5539 = -25305747LL;
	volatile int32_t t177 = 2;

    t177 = (x5537^((x5538==x5539)>>x5540));

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x5550 = INT64_MIN;
	int16_t x5552 = 9;
	int32_t t178 = 25358;

    t178 = (x5549^((x5550==x5551)>>x5552));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5585 = -1LL;
	volatile int8_t x5586 = 4;
	int16_t x5587 = INT16_MIN;
	int64_t x5588 = 0LL;
	volatile int64_t t179 = -1925324024244077LL;

    t179 = (x5585^((x5586==x5587)>>x5588));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x5617 = 8U;
	uint16_t x5618 = UINT16_MAX;
	int32_t x5619 = -97851343;
	volatile int32_t t180 = -409257253;

    t180 = (x5617^((x5618==x5619)>>x5620));

    if (t180 != 8) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x5633 = INT64_MIN;
	uint64_t x5634 = 61688310773LLU;
	volatile uint8_t x5635 = UINT8_MAX;
	static volatile uint64_t x5636 = 10LLU;
	static int64_t t181 = INT64_MIN;

    t181 = (x5633^((x5634==x5635)>>x5636));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5681 = 94;
	static int64_t x5682 = 32343495LL;
	static uint32_t x5683 = 7706U;
	static volatile int32_t x5684 = 1;
	static volatile int32_t t182 = 20;

    t182 = (x5681^((x5682==x5683)>>x5684));

    if (t182 != 94) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x5693 = INT64_MIN;
	static int64_t x5694 = -1LL;
	int64_t x5695 = -44073517787483698LL;
	static int16_t x5696 = 1;

    t183 = (x5693^((x5694==x5695)>>x5696));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x5697 = -7LL;
	static int64_t x5698 = INT64_MIN;
	int64_t x5699 = INT64_MIN;
	volatile int8_t x5700 = 1;
	volatile int64_t t184 = 45415LL;

    t184 = (x5697^((x5698==x5699)>>x5700));

    if (t184 != -7LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x5701 = -486;
	uint32_t x5702 = 41094902U;
	uint32_t x5703 = UINT32_MAX;
	int16_t x5704 = 3;
	int32_t t185 = 426844079;

    t185 = (x5701^((x5702==x5703)>>x5704));

    if (t185 != -486) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5757 = 7;
	volatile int16_t x5758 = INT16_MIN;
	uint16_t x5759 = UINT16_MAX;
	volatile int8_t x5760 = 4;
	int32_t t186 = -13;

    t186 = (x5757^((x5758==x5759)>>x5760));

    if (t186 != 7) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x5797 = 4726;
	volatile uint32_t x5798 = 1U;
	volatile uint16_t x5799 = 1001U;
	volatile uint8_t x5800 = 3U;

    t187 = (x5797^((x5798==x5799)>>x5800));

    if (t187 != 4726) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5815 = 96305;
	volatile uint8_t x5816 = 15U;

    t188 = (x5813^((x5814==x5815)>>x5816));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x5825 = 14249158LLU;
	int64_t x5826 = INT64_MIN;
	int16_t x5827 = -1;
	static uint8_t x5828 = 12U;

    t189 = (x5825^((x5826==x5827)>>x5828));

    if (t189 != 14249158LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x5853 = -1LL;
	static volatile int64_t x5854 = -33024374158163LL;
	int64_t t190 = 2880LL;

    t190 = (x5853^((x5854==x5855)>>x5856));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x5914 = -151892141325522211LL;
	uint8_t x5916 = 13U;

    t191 = (x5913^((x5914==x5915)>>x5916));

    if (t191 != 42) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x5961 = INT64_MIN;
	uint8_t x5964 = 30U;

    t192 = (x5961^((x5962==x5963)>>x5964));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x6017 = 1863293404024070LLU;
	static int16_t x6018 = -5;
	uint64_t t193 = 15648768LLU;

    t193 = (x6017^((x6018==x6019)>>x6020));

    if (t193 != 1863293404024070LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6077 = INT8_MAX;
	uint16_t x6078 = 103U;
	uint8_t x6079 = UINT8_MAX;
	uint16_t x6080 = 0U;

    t194 = (x6077^((x6078==x6079)>>x6080));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6085 = -123;
	int16_t x6086 = -1;
	static volatile uint8_t x6087 = 0U;
	static int64_t x6088 = 4LL;
	int32_t t195 = 154;

    t195 = (x6085^((x6086==x6087)>>x6088));

    if (t195 != -123) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x6121 = INT8_MIN;
	volatile int32_t x6123 = -1;
	uint32_t x6124 = 4U;
	int32_t t196 = 378009;

    t196 = (x6121^((x6122==x6123)>>x6124));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x6149 = INT8_MIN;
	volatile uint32_t x6150 = 14104U;
	uint64_t x6151 = 589524054LLU;
	static uint8_t x6152 = 10U;
	int32_t t197 = -185;

    t197 = (x6149^((x6150==x6151)>>x6152));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x6161 = UINT32_MAX;
	int64_t x6162 = INT64_MAX;
	int16_t x6163 = -1;
	int16_t x6164 = 1;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = (x6161^((x6162==x6163)>>x6164));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x6229 = -6100LL;
	static int8_t x6230 = INT8_MAX;
	volatile int32_t x6231 = INT32_MAX;
	int16_t x6232 = 6;
	int64_t t199 = -20719735405331LL;

    t199 = (x6229^((x6230==x6231)>>x6232));

    if (t199 != -6100LL) { NG(); } else { ; }
	
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
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

