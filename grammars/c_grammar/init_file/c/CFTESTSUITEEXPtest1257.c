
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

int32_t x105 = 10802;
uint16_t x253 = 28476U;
static int32_t x255 = 53;
volatile int32_t t2 = 11;
int16_t x258 = -1;
int8_t x311 = INT8_MAX;
uint8_t x563 = 23U;
uint8_t x792 = 0U;
int32_t t9 = -13892;
uint64_t x853 = UINT64_MAX;
int32_t t12 = 536624557;
int32_t t13 = 105;
static uint32_t x1217 = 253521320U;
volatile uint32_t t14 = 16U;
int64_t x1294 = INT64_MIN;
uint16_t x1579 = UINT16_MAX;
uint8_t x1580 = 1U;
int16_t x1778 = -1;
uint16_t x1780 = 1U;
int64_t x1816 = 4LL;
uint16_t x1871 = UINT16_MAX;
uint64_t t22 = 3621607LLU;
uint16_t x2118 = 1U;
int32_t t25 = 3757719;
volatile int16_t x2437 = 0;
int64_t x2439 = INT64_MIN;
uint8_t x2476 = 0U;
volatile int8_t x2793 = INT8_MAX;
uint16_t x3056 = 1U;
static volatile int32_t t30 = 30105394;
static volatile int32_t x3202 = INT32_MIN;
static uint64_t x3204 = 2LLU;
volatile uint32_t t34 = 258988U;
volatile int32_t t35 = -5051;
uint64_t x3432 = 6LLU;
int8_t x3435 = 1;
volatile uint64_t t38 = 75129818506LLU;


void f0(void) {
    	uint64_t x106 = 35489478LLU;
	int64_t x107 = -1LL;
	static int8_t x108 = 1;
	volatile int32_t t0 = 4;

    t0 = (x105>>((x106!=x107)<<x108));

    if (t0 != 2700) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x129 = 63;
	int64_t x130 = 11859023LL;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = 0U;
	int32_t t1 = -4;

    t1 = (x129>>((x130!=x131)<<x132));

    if (t1 != 31) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x254 = INT32_MIN;
	int16_t x256 = 1;

    t2 = (x253>>((x254!=x255)<<x256));

    if (t2 != 7119) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x257 = UINT8_MAX;
	uint32_t x259 = UINT32_MAX;
	volatile int64_t x260 = 1LL;
	volatile int32_t t3 = 829726;

    t3 = (x257>>((x258!=x259)<<x260));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x265 = 794U;
	uint8_t x266 = UINT8_MAX;
	static int32_t x267 = INT32_MAX;
	static uint8_t x268 = 0U;
	static int32_t t4 = -31665;

    t4 = (x265>>((x266!=x267)<<x268));

    if (t4 != 397) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x309 = 8372798U;
	uint64_t x310 = 1601LLU;
	uint8_t x312 = 0U;
	volatile uint32_t t5 = 36594310U;

    t5 = (x309>>((x310!=x311)<<x312));

    if (t5 != 4186399U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x401 = 213;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = INT16_MIN;
	int8_t x404 = 4;
	volatile int32_t t6 = 21601160;

    t6 = (x401>>((x402!=x403)<<x404));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x561 = 0U;
	int32_t x562 = INT32_MIN;
	static int16_t x564 = 1;
	volatile int32_t t7 = -2670776;

    t7 = (x561>>((x562!=x563)<<x564));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x645 = 16509;
	int64_t x646 = INT64_MIN;
	static volatile uint64_t x647 = 247981741500919LLU;
	uint8_t x648 = 1U;
	volatile int32_t t8 = -27228765;

    t8 = (x645>>((x646!=x647)<<x648));

    if (t8 != 4127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x789 = 0U;
	uint8_t x790 = UINT8_MAX;
	int8_t x791 = -1;

    t9 = (x789>>((x790!=x791)<<x792));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x854 = INT32_MIN;
	int32_t x855 = 15;
	uint8_t x856 = 0U;
	volatile uint64_t t10 = 374087681837882903LLU;

    t10 = (x853>>((x854!=x855)<<x856));

    if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1073 = 1;
	int16_t x1074 = INT16_MIN;
	int64_t x1075 = 130794266099617758LL;
	int8_t x1076 = 3;
	int32_t t11 = 76;

    t11 = (x1073>>((x1074!=x1075)<<x1076));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1157 = UINT8_MAX;
	static int8_t x1158 = -1;
	volatile int16_t x1159 = -1;
	int8_t x1160 = 0;

    t12 = (x1157>>((x1158!=x1159)<<x1160));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x1169 = 2;
	static uint16_t x1170 = 11U;
	int16_t x1171 = -1;
	int64_t x1172 = 1LL;

    t13 = (x1169>>((x1170!=x1171)<<x1172));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1218 = INT16_MIN;
	static volatile int32_t x1219 = -1;
	uint8_t x1220 = 1U;

    t14 = (x1217>>((x1218!=x1219)<<x1220));

    if (t14 != 63380330U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1293 = 7U;
	volatile int32_t x1295 = -1;
	static int32_t x1296 = 0;
	volatile int32_t t15 = 17424881;

    t15 = (x1293>>((x1294!=x1295)<<x1296));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x1341 = 7474U;
	volatile uint8_t x1342 = 102U;
	uint32_t x1343 = 732542386U;
	volatile uint8_t x1344 = 2U;
	int32_t t16 = -4;

    t16 = (x1341>>((x1342!=x1343)<<x1344));

    if (t16 != 467) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1577 = INT32_MAX;
	int32_t x1578 = INT32_MIN;
	volatile int32_t t17 = 7434;

    t17 = (x1577>>((x1578!=x1579)<<x1580));

    if (t17 != 536870911) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1685 = INT32_MAX;
	volatile uint64_t x1686 = UINT64_MAX;
	int32_t x1687 = -1;
	int8_t x1688 = 1;
	int32_t t18 = INT32_MAX;

    t18 = (x1685>>((x1686!=x1687)<<x1688));

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1777 = UINT8_MAX;
	static int16_t x1779 = 13;
	volatile int32_t t19 = -119018850;

    t19 = (x1777>>((x1778!=x1779)<<x1780));

    if (t19 != 63) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1805 = 0U;
	int16_t x1806 = -5;
	int64_t x1807 = INT64_MIN;
	volatile uint64_t x1808 = 3LLU;
	uint32_t t20 = 1954602U;

    t20 = (x1805>>((x1806!=x1807)<<x1808));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x1813 = 2U;
	uint16_t x1814 = 12569U;
	static int32_t x1815 = -1;
	int32_t t21 = -43;

    t21 = (x1813>>((x1814!=x1815)<<x1816));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1869 = UINT64_MAX;
	static int64_t x1870 = 57094334LL;
	int16_t x1872 = 2;

    t22 = (x1869>>((x1870!=x1871)<<x1872));

    if (t22 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2117 = 1U;
	int16_t x2119 = -1;
	static int8_t x2120 = 1;
	int32_t t23 = 4678787;

    t23 = (x2117>>((x2118!=x2119)<<x2120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2209 = UINT32_MAX;
	int16_t x2210 = -1;
	int32_t x2211 = 4278;
	uint32_t x2212 = 1U;
	uint32_t t24 = 13161U;

    t24 = (x2209>>((x2210!=x2211)<<x2212));

    if (t24 != 1073741823U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2353 = UINT16_MAX;
	int64_t x2354 = INT64_MIN;
	volatile int8_t x2355 = INT8_MAX;
	int8_t x2356 = 1;

    t25 = (x2353>>((x2354!=x2355)<<x2356));

    if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x2438 = 308135;
	int16_t x2440 = 1;
	volatile int32_t t26 = 19;

    t26 = (x2437>>((x2438!=x2439)<<x2440));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2473 = 31485572642LLU;
	int64_t x2474 = INT64_MIN;
	int8_t x2475 = 5;
	uint64_t t27 = 382912LLU;

    t27 = (x2473>>((x2474!=x2475)<<x2476));

    if (t27 != 15742786321LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2794 = 920524012361LLU;
	uint8_t x2795 = UINT8_MAX;
	uint8_t x2796 = 1U;
	volatile int32_t t28 = 1748;

    t28 = (x2793>>((x2794!=x2795)<<x2796));

    if (t28 != 31) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2969 = 2;
	int32_t x2970 = 567182;
	int64_t x2971 = INT64_MIN;
	uint32_t x2972 = 3U;
	static int32_t t29 = -32;

    t29 = (x2969>>((x2970!=x2971)<<x2972));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x3053 = 10U;
	int64_t x3054 = INT64_MIN;
	int32_t x3055 = INT32_MIN;

    t30 = (x3053>>((x3054!=x3055)<<x3056));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x3061 = 25779390077174LLU;
	int32_t x3062 = INT32_MIN;
	int64_t x3063 = -428LL;
	int32_t x3064 = 0;
	volatile uint64_t t31 = 898383531474689453LLU;

    t31 = (x3061>>((x3062!=x3063)<<x3064));

    if (t31 != 12889695038587LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x3201 = 4322131LLU;
	int16_t x3203 = INT16_MAX;
	volatile uint64_t t32 = 2149983517008353LLU;

    t32 = (x3201>>((x3202!=x3203)<<x3204));

    if (t32 != 270133LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x3261 = INT8_MAX;
	static uint64_t x3262 = UINT64_MAX;
	int32_t x3263 = -1;
	uint8_t x3264 = 31U;
	static volatile int32_t t33 = -3849241;

    t33 = (x3261>>((x3262!=x3263)<<x3264));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x3269 = UINT32_MAX;
	uint16_t x3270 = UINT16_MAX;
	static uint32_t x3271 = UINT32_MAX;
	int8_t x3272 = 0;

    t34 = (x3269>>((x3270!=x3271)<<x3272));

    if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x3385 = INT16_MAX;
	uint8_t x3386 = 18U;
	int16_t x3387 = INT16_MAX;
	static int16_t x3388 = 0;

    t35 = (x3385>>((x3386!=x3387)<<x3388));

    if (t35 != 16383) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x3413 = 36383137960122LLU;
	uint64_t x3414 = 1LLU;
	int8_t x3415 = INT8_MAX;
	volatile int64_t x3416 = 0LL;
	volatile uint64_t t36 = 94198LLU;

    t36 = (x3413>>((x3414!=x3415)<<x3416));

    if (t36 != 18191568980061LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x3429 = INT16_MAX;
	int8_t x3430 = INT8_MIN;
	int8_t x3431 = INT8_MIN;
	volatile int32_t t37 = -403200422;

    t37 = (x3429>>((x3430!=x3431)<<x3432));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x3433 = 41588LLU;
	static volatile int8_t x3434 = INT8_MAX;
	uint8_t x3436 = 3U;

    t38 = (x3433>>((x3434!=x3435)<<x3436));

    if (t38 != 162LLU) { NG(); } else { ; }
	
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


    return 0;
}

