
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

uint64_t x96 = 189985614LLU;
static int8_t x286 = INT8_MAX;
uint64_t t4 = 4083LLU;
static volatile int8_t x602 = INT8_MAX;
static uint8_t x667 = 2U;
volatile uint64_t x848 = 3819832474278LLU;
int64_t x888 = -1674065732LL;
uint8_t x929 = 42U;
int16_t x1129 = INT16_MAX;
volatile uint64_t t13 = 294151LLU;
volatile uint64_t t14 = 19156082656379LLU;
volatile int64_t t15 = -357315534LL;
static volatile uint64_t t19 = 1766LLU;
int8_t x1903 = 10;
volatile uint8_t x2003 = 1U;
static uint64_t t21 = 11761498897584980LLU;
uint64_t t22 = 13LLU;
int8_t x2503 = 0;
uint8_t x2659 = 7U;
int8_t x2716 = -1;
volatile int64_t t27 = 2120891779767048001LL;
int16_t x2849 = INT16_MIN;
int8_t x3021 = INT8_MAX;
uint8_t x3023 = 14U;
volatile int32_t t29 = -14557;
uint32_t x3074 = 7438U;
volatile int64_t t33 = 115793LL;
volatile int16_t x3467 = 1;
volatile int64_t x3517 = 565521090LL;
int8_t x3520 = -1;
uint8_t x3687 = 2U;
static volatile int16_t x3748 = -1;
int8_t x4147 = 16;
uint64_t x4253 = 80LLU;
uint32_t x4254 = 29720815U;
uint16_t x4256 = 59U;
uint64_t t40 = 113251555LLU;
int32_t x4272 = -3;
uint64_t t41 = 816094686664LLU;
uint64_t x4430 = 3994723LLU;
volatile int32_t t45 = 2;
uint32_t t46 = 236679U;
volatile uint16_t x5048 = 28U;
volatile int64_t x5114 = INT64_MAX;
uint16_t x5115 = 38U;
volatile int64_t t48 = -33204287161LL;
static int16_t x5183 = 4;
int8_t x5227 = 1;
uint64_t t50 = 842334LLU;
int64_t x5285 = 237LL;
uint16_t x5660 = UINT16_MAX;
uint64_t x5685 = 11141974289LLU;
static uint16_t x5687 = 8U;
uint64_t t53 = 239193049008256282LLU;
uint8_t x5779 = 0U;
volatile int32_t t55 = -38;
static volatile uint8_t x6020 = 106U;
volatile int32_t t57 = -81205;
uint8_t x6055 = 19U;
volatile int32_t x6274 = INT32_MAX;
uint8_t x6275 = 20U;
uint32_t t59 = 139U;
static volatile uint64_t t61 = 20LLU;
static uint32_t x6622 = UINT32_MAX;
volatile uint32_t x6624 = 321013U;
uint32_t t62 = 9006U;
volatile uint64_t t63 = 439345708773543722LLU;
volatile int64_t t64 = 1LL;
uint64_t x6949 = UINT64_MAX;
static uint32_t x6950 = 6779575U;
uint64_t t68 = 0LLU;
static int8_t x7300 = -39;
uint32_t x7470 = 7406612U;
static uint16_t x7541 = 21U;
uint64_t x7801 = UINT64_MAX;
uint8_t x7831 = 53U;
uint16_t x7839 = 10U;
volatile int64_t x8050 = INT64_MAX;
static volatile int8_t x8051 = 22;
int64_t x8076 = INT64_MAX;
uint8_t x8205 = 0U;
int16_t x8217 = INT16_MAX;
static volatile uint32_t x8220 = 338353U;
volatile uint32_t t81 = 133346994U;
uint16_t x8498 = 670U;
int64_t x8853 = -1LL;
uint8_t x8854 = 25U;
static uint16_t x8864 = 1505U;
volatile uint64_t t88 = 8971534490LLU;
uint32_t x9450 = 276519918U;


void f0(void) {
    	int16_t x45 = 13601;
	int32_t x46 = INT32_MAX;
	int16_t x47 = 1;
	static volatile int16_t x48 = -1;
	static volatile int32_t t0 = -19113385;

    t0 = (x45/((x46>>x47)&x48));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x77 = 2U;
	volatile uint32_t x78 = 785U;
	uint16_t x79 = 1U;
	volatile uint16_t x80 = UINT16_MAX;
	static volatile uint32_t t1 = 14822U;

    t1 = (x77/((x78>>x79)&x80));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x93 = 47011311077752103LLU;
	volatile uint32_t x94 = UINT32_MAX;
	int8_t x95 = 5;
	volatile uint64_t t2 = 1005592646778320LLU;

    t2 = (x93/((x94>>x95)&x96));

    if (t2 != 842981766LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x285 = UINT8_MAX;
	uint8_t x287 = 1U;
	static volatile uint16_t x288 = 455U;
	int32_t t3 = -17;

    t3 = (x285/((x286>>x287)&x288));

    if (t3 != 36) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x561 = 834220763791LLU;
	uint16_t x562 = 21U;
	int8_t x563 = 1;
	int64_t x564 = 22451207739349283LL;

    t4 = (x561/((x562>>x563)&x564));

    if (t4 != 417110381895LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x601 = 0;
	volatile uint8_t x603 = 1U;
	int16_t x604 = 24;
	volatile int32_t t5 = -1;

    t5 = (x601/((x602>>x603)&x604));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x629 = UINT64_MAX;
	volatile int64_t x630 = INT64_MAX;
	uint16_t x631 = 3U;
	int64_t x632 = -1LL;
	uint64_t t6 = 1968706611426677739LLU;

    t6 = (x629/((x630>>x631)&x632));

    if (t6 != 16LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x665 = 196625635LLU;
	uint16_t x666 = 13U;
	uint16_t x668 = UINT16_MAX;
	volatile uint64_t t7 = 1950208389LLU;

    t7 = (x665/((x666>>x667)&x668));

    if (t7 != 65541878LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x845 = 4LLU;
	int32_t x846 = 16146;
	int8_t x847 = 0;
	uint64_t t8 = 3479108653LLU;

    t8 = (x845/((x846>>x847)&x848));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x885 = 1490U;
	volatile uint16_t x886 = 15492U;
	uint8_t x887 = 9U;
	int64_t t9 = 2582209774721LL;

    t9 = (x885/((x886>>x887)&x888));

    if (t9 != 53LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x905 = UINT32_MAX;
	int16_t x906 = INT16_MAX;
	int8_t x907 = 1;
	int32_t x908 = -1;
	volatile uint32_t t10 = 170727U;

    t10 = (x905/((x906>>x907)&x908));

    if (t10 != 262160U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x930 = INT64_MAX;
	int8_t x931 = 0;
	int64_t x932 = 4606314836LL;
	int64_t t11 = 1384906795814LL;

    t11 = (x929/((x930>>x931)&x932));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1101 = 7391U;
	uint64_t x1102 = UINT64_MAX;
	uint8_t x1103 = 10U;
	int8_t x1104 = INT8_MIN;
	volatile uint64_t t12 = 8158858429095352LLU;

    t12 = (x1101/((x1102>>x1103)&x1104));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1130 = 400456741083162141LLU;
	uint64_t x1131 = 14LLU;
	uint64_t x1132 = 73742LLU;

    t13 = (x1129/((x1130>>x1131)&x1132));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1509 = 0U;
	uint64_t x1510 = 2055036406542371LLU;
	volatile uint8_t x1511 = 0U;
	static volatile int32_t x1512 = INT32_MIN;

    t14 = (x1509/((x1510>>x1511)&x1512));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1541 = INT16_MAX;
	int16_t x1542 = 1;
	static volatile uint16_t x1543 = 0U;
	int64_t x1544 = -2982821827LL;

    t15 = (x1541/((x1542>>x1543)&x1544));

    if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x1625 = -3846;
	static uint8_t x1626 = 35U;
	uint16_t x1627 = 4U;
	static int8_t x1628 = INT8_MAX;
	volatile int32_t t16 = 115306;

    t16 = (x1625/((x1626>>x1627)&x1628));

    if (t16 != -1923) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x1629 = 3384U;
	uint16_t x1630 = 8U;
	volatile uint16_t x1631 = 0U;
	static int16_t x1632 = 2024;
	volatile int32_t t17 = 43037;

    t17 = (x1629/((x1630>>x1631)&x1632));

    if (t17 != 423) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1701 = 0;
	uint16_t x1702 = 172U;
	uint16_t x1703 = 1U;
	uint16_t x1704 = 117U;
	volatile int32_t t18 = 606815;

    t18 = (x1701/((x1702>>x1703)&x1704));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1821 = UINT8_MAX;
	int64_t x1822 = INT64_MAX;
	static volatile int8_t x1823 = 2;
	uint64_t x1824 = UINT64_MAX;

    t19 = (x1821/((x1822>>x1823)&x1824));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1901 = INT32_MIN;
	uint16_t x1902 = UINT16_MAX;
	static volatile int8_t x1904 = -1;
	int32_t t20 = -28;

    t20 = (x1901/((x1902>>x1903)&x1904));

    if (t20 != -34087042) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x2001 = 25U;
	volatile uint64_t x2002 = 241LLU;
	uint8_t x2004 = UINT8_MAX;

    t21 = (x2001/((x2002>>x2003)&x2004));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x2045 = INT8_MAX;
	uint16_t x2046 = 7U;
	static uint16_t x2047 = 1U;
	uint64_t x2048 = 6748343831060286LLU;

    t22 = (x2045/((x2046>>x2047)&x2048));

    if (t22 != 63LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x2217 = 3286657LLU;
	int64_t x2218 = 569LL;
	uint8_t x2219 = 0U;
	volatile int64_t x2220 = -226916079290770566LL;
	volatile uint64_t t23 = 15LLU;

    t23 = (x2217/((x2218>>x2219)&x2220));

    if (t23 != 5786LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x2501 = INT8_MIN;
	int16_t x2502 = 12;
	uint8_t x2504 = 11U;
	int32_t t24 = 0;

    t24 = (x2501/((x2502>>x2503)&x2504));

    if (t24 != -16) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2569 = INT16_MIN;
	static uint32_t x2570 = 195020U;
	volatile int32_t x2571 = 2;
	int8_t x2572 = INT8_MIN;
	volatile uint32_t t25 = 1557983U;

    t25 = (x2569/((x2570>>x2571)&x2572));

    if (t25 != 88300U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2657 = INT64_MIN;
	static volatile uint16_t x2658 = 394U;
	int32_t x2660 = -1;
	int64_t t26 = 40016907113LL;

    t26 = (x2657/((x2658>>x2659)&x2660));

    if (t26 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x2713 = -1LL;
	static uint16_t x2714 = UINT16_MAX;
	int8_t x2715 = 7;

    t27 = (x2713/((x2714>>x2715)&x2716));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x2850 = 90840142U;
	uint32_t x2851 = 11U;
	int16_t x2852 = INT16_MIN;
	static uint32_t t28 = 24U;

    t28 = (x2849/((x2850>>x2851)&x2852));

    if (t28 != 131071U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x3022 = INT16_MAX;
	int32_t x3024 = INT32_MAX;

    t29 = (x3021/((x3022>>x3023)&x3024));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x3025 = 21771U;
	static uint64_t x3026 = 204819619208728938LLU;
	uint16_t x3027 = 6U;
	static uint8_t x3028 = UINT8_MAX;
	volatile uint64_t t30 = 187237913537LLU;

    t30 = (x3025/((x3026>>x3027)&x3028));

    if (t30 != 315LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x3073 = INT64_MIN;
	uint64_t x3075 = 0LLU;
	static int16_t x3076 = -8141;
	volatile int64_t t31 = -64LL;

    t31 = (x3073/((x3074>>x3075)&x3076));

    if (t31 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x3285 = 13271341412LLU;
	static uint16_t x3286 = UINT16_MAX;
	uint8_t x3287 = 2U;
	int64_t x3288 = -1LL;
	uint64_t t32 = 1095409821LLU;

    t32 = (x3285/((x3286>>x3287)&x3288));

    if (t32 != 810067LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x3373 = INT16_MIN;
	int64_t x3374 = INT64_MAX;
	uint8_t x3375 = 26U;
	int32_t x3376 = INT32_MIN;

    t33 = (x3373/((x3374>>x3375)&x3376));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x3465 = 19861U;
	uint8_t x3466 = 29U;
	uint64_t x3468 = 7LLU;
	uint64_t t34 = 4LLU;

    t34 = (x3465/((x3466>>x3467)&x3468));

    if (t34 != 3310LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x3518 = 20924528879544176LLU;
	uint16_t x3519 = 45U;
	uint64_t t35 = 36479887095960LLU;

    t35 = (x3517/((x3518>>x3519)&x3520));

    if (t35 != 952055LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3685 = 121LL;
	uint32_t x3686 = 6803U;
	static int16_t x3688 = INT16_MAX;
	volatile int64_t t36 = -222837LL;

    t36 = (x3685/((x3686>>x3687)&x3688));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x3745 = -22410982108729LL;
	volatile uint32_t x3746 = UINT32_MAX;
	static volatile uint64_t x3747 = 9LLU;
	int64_t t37 = 132623079370517LL;

    t37 = (x3745/((x3746>>x3747)&x3748));

    if (t37 != -2671597LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x4145 = -1LL;
	uint32_t x4146 = 91795040U;
	int32_t x4148 = INT32_MAX;
	volatile int64_t t38 = -9965LL;

    t38 = (x4145/((x4146>>x4147)&x4148));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x4157 = 1131U;
	int64_t x4158 = INT64_MAX;
	volatile uint64_t x4159 = 38LLU;
	int16_t x4160 = INT16_MIN;
	volatile int64_t t39 = -8378LL;

    t39 = (x4157/((x4158>>x4159)&x4160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x4255 = 3U;

    t40 = (x4253/((x4254>>x4255)&x4256));

    if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x4269 = UINT64_MAX;
	uint64_t x4270 = UINT64_MAX;
	uint32_t x4271 = 3U;

    t41 = (x4269/((x4270>>x4271)&x4272));

    if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x4293 = 28941U;
	uint8_t x4294 = 1U;
	static uint32_t x4295 = 0U;
	volatile int64_t x4296 = INT64_MAX;
	volatile int64_t t42 = 11LL;

    t42 = (x4293/((x4294>>x4295)&x4296));

    if (t42 != 28941LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x4345 = -1;
	int8_t x4346 = 15;
	volatile uint8_t x4347 = 1U;
	uint32_t x4348 = 1734U;
	uint32_t t43 = 381U;

    t43 = (x4345/((x4346>>x4347)&x4348));

    if (t43 != 715827882U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x4429 = -5578;
	volatile uint8_t x4431 = 16U;
	int8_t x4432 = -1;
	volatile uint64_t t44 = 1182821242028LLU;

    t44 = (x4429/((x4430>>x4431)&x4432));

    if (t44 != 307445734561825767LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x4529 = INT16_MIN;
	int16_t x4530 = INT16_MAX;
	int8_t x4531 = 1;
	int16_t x4532 = -1;

    t45 = (x4529/((x4530>>x4531)&x4532));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4801 = UINT32_MAX;
	volatile int32_t x4802 = INT32_MAX;
	static uint8_t x4803 = 3U;
	static volatile int8_t x4804 = 11;

    t46 = (x4801/((x4802>>x4803)&x4804));

    if (t46 != 390451572U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x5045 = INT16_MAX;
	int32_t x5046 = INT32_MAX;
	uint64_t x5047 = 13LLU;
	volatile int32_t t47 = -785;

    t47 = (x5045/((x5046>>x5047)&x5048));

    if (t47 != 1170) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x5113 = INT64_MIN;
	volatile int8_t x5116 = INT8_MAX;

    t48 = (x5113/((x5114>>x5115)&x5116));

    if (t48 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x5181 = -1;
	volatile int32_t x5182 = 23;
	int8_t x5184 = INT8_MAX;
	volatile int32_t t49 = 1;

    t49 = (x5181/((x5182>>x5183)&x5184));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x5225 = INT8_MAX;
	uint16_t x5226 = 6U;
	volatile uint64_t x5228 = UINT64_MAX;

    t50 = (x5225/((x5226>>x5227)&x5228));

    if (t50 != 42LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x5286 = UINT64_MAX;
	volatile uint64_t x5287 = 1LLU;
	uint16_t x5288 = 54U;
	static volatile uint64_t t51 = 6170086311LLU;

    t51 = (x5285/((x5286>>x5287)&x5288));

    if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x5657 = INT32_MIN;
	uint16_t x5658 = 29783U;
	int8_t x5659 = 0;
	volatile int32_t t52 = 0;

    t52 = (x5657/((x5658>>x5659)&x5660));

    if (t52 != -72104) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x5686 = 194120U;
	volatile int8_t x5688 = INT8_MIN;

    t53 = (x5685/((x5686>>x5687)&x5688));

    if (t53 != 17409334LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x5697 = -1;
	static int64_t x5698 = INT64_MAX;
	volatile int8_t x5699 = 15;
	int16_t x5700 = -1;
	static int64_t t54 = -2824993209LL;

    t54 = (x5697/((x5698>>x5699)&x5700));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x5777 = -1;
	uint16_t x5778 = 3U;
	int8_t x5780 = 1;

    t55 = (x5777/((x5778>>x5779)&x5780));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x6017 = INT8_MAX;
	uint64_t x6018 = UINT64_MAX;
	static uint8_t x6019 = 53U;
	volatile uint64_t t56 = 2887455708LLU;

    t56 = (x6017/((x6018>>x6019)&x6020));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x6041 = -2;
	uint16_t x6042 = UINT16_MAX;
	uint8_t x6043 = 6U;
	int8_t x6044 = INT8_MIN;

    t57 = (x6041/((x6042>>x6043)&x6044));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x6053 = INT64_MIN;
	uint32_t x6054 = 1222160378U;
	static uint8_t x6056 = 19U;
	volatile int64_t t58 = -3654338136254380LL;

    t58 = (x6053/((x6054>>x6055)&x6056));

    if (t58 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x6273 = UINT8_MAX;
	static uint32_t x6276 = 398351187U;

    t59 = (x6273/((x6274>>x6275)&x6276));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x6557 = INT64_MAX;
	static int64_t x6558 = 2170529862806LL;
	static uint8_t x6559 = 5U;
	int32_t x6560 = INT32_MIN;
	volatile int64_t t60 = -757816884989205LL;

    t60 = (x6557/((x6558>>x6559)&x6560));

    if (t60 != 138547332LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x6613 = 65038U;
	uint16_t x6614 = 1U;
	int32_t x6615 = 0;
	uint64_t x6616 = UINT64_MAX;

    t61 = (x6613/((x6614>>x6615)&x6616));

    if (t61 != 65038LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x6621 = 23138U;
	uint32_t x6623 = 14U;

    t62 = (x6621/((x6622>>x6623)&x6624));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x6673 = -1;
	uint64_t x6674 = UINT64_MAX;
	static uint32_t x6675 = 1U;
	static volatile int16_t x6676 = INT16_MIN;

    t63 = (x6673/((x6674>>x6675)&x6676));

    if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x6749 = 5U;
	uint32_t x6750 = 4739815U;
	volatile uint8_t x6751 = 13U;
	static int64_t x6752 = INT64_MAX;

    t64 = (x6749/((x6750>>x6751)&x6752));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x6773 = UINT32_MAX;
	uint8_t x6774 = 3U;
	volatile int8_t x6775 = 1;
	int32_t x6776 = -29;
	volatile uint32_t t65 = UINT32_MAX;

    t65 = (x6773/((x6774>>x6775)&x6776));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x6951 = 0;
	int8_t x6952 = -2;
	static volatile uint64_t t66 = 172904676044LLU;

    t66 = (x6949/((x6950>>x6951)&x6952));

    if (t66 != 2720929674004LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x7153 = 3161;
	static int32_t x7154 = 25020;
	uint32_t x7155 = 4U;
	uint8_t x7156 = 104U;
	volatile int32_t t67 = 3;

    t67 = (x7153/((x7154>>x7155)&x7156));

    if (t67 != 395) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x7221 = INT64_MIN;
	static uint64_t x7222 = 35776337802LLU;
	volatile int8_t x7223 = 0;
	volatile int64_t x7224 = INT64_MAX;

    t68 = (x7221/((x7222>>x7223)&x7224));

    if (t68 != 257806488LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x7297 = INT16_MAX;
	int64_t x7298 = 280LL;
	volatile int32_t x7299 = 2;
	int64_t t69 = 3409744LL;

    t69 = (x7297/((x7298>>x7299)&x7300));

    if (t69 != 511LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x7469 = INT16_MAX;
	static uint16_t x7471 = 0U;
	static int16_t x7472 = -454;
	uint32_t t70 = 1U;

    t70 = (x7469/((x7470>>x7471)&x7472));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x7537 = 1;
	uint64_t x7538 = 2649238301793816LLU;
	int8_t x7539 = 0;
	int32_t x7540 = 808255;
	uint64_t t71 = 3582187366261197394LLU;

    t71 = (x7537/((x7538>>x7539)&x7540));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x7542 = 7459848;
	int8_t x7543 = 1;
	volatile int64_t x7544 = -1LL;
	int64_t t72 = -2463511843LL;

    t72 = (x7541/((x7542>>x7543)&x7544));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x7802 = INT16_MAX;
	uint8_t x7803 = 5U;
	static int8_t x7804 = INT8_MIN;
	volatile uint64_t t73 = 9LLU;

    t73 = (x7801/((x7802>>x7803)&x7804));

    if (t73 != 20587884010836553LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x7829 = UINT8_MAX;
	int64_t x7830 = INT64_MAX;
	volatile int16_t x7832 = INT16_MAX;
	volatile int64_t t74 = 241531619486LL;

    t74 = (x7829/((x7830>>x7831)&x7832));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x7837 = UINT16_MAX;
	static int32_t x7838 = INT32_MAX;
	uint8_t x7840 = 25U;
	int32_t t75 = 24085112;

    t75 = (x7837/((x7838>>x7839)&x7840));

    if (t75 != 2621) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x7921 = UINT64_MAX;
	uint32_t x7922 = UINT32_MAX;
	int32_t x7923 = 1;
	volatile int64_t x7924 = INT64_MAX;
	volatile uint64_t t76 = 360784718LLU;

    t76 = (x7921/((x7922>>x7923)&x7924));

    if (t76 != 8589934596LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x8049 = UINT64_MAX;
	int64_t x8052 = -764318149409061LL;
	uint64_t t77 = 1351928997565LLU;

    t77 = (x8049/((x8050>>x8051)&x8052));

    if (t77 != 19583704LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x8073 = -1;
	static volatile int32_t x8074 = INT32_MAX;
	int8_t x8075 = 30;
	int64_t t78 = 38116087LL;

    t78 = (x8073/((x8074>>x8075)&x8076));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x8206 = UINT32_MAX;
	uint16_t x8207 = 3U;
	volatile uint16_t x8208 = UINT16_MAX;
	uint32_t t79 = 8250U;

    t79 = (x8205/((x8206>>x8207)&x8208));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x8209 = 0;
	int64_t x8210 = INT64_MAX;
	volatile int8_t x8211 = 5;
	int32_t x8212 = -1;
	static int64_t t80 = 15896423914894LL;

    t80 = (x8209/((x8210>>x8211)&x8212));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x8218 = UINT16_MAX;
	uint8_t x8219 = 1U;

    t81 = (x8217/((x8218>>x8219)&x8220));

    if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x8449 = -1;
	uint64_t x8450 = UINT64_MAX;
	static volatile uint64_t x8451 = 6LLU;
	uint32_t x8452 = 251U;
	uint64_t t82 = 1LLU;

    t82 = (x8449/((x8450>>x8451)&x8452));

    if (t82 != 73493004277727297LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x8497 = UINT64_MAX;
	uint16_t x8499 = 7U;
	uint32_t x8500 = 3942662U;
	volatile uint64_t t83 = 9122153LLU;

    t83 = (x8497/((x8498>>x8499)&x8500));

    if (t83 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x8855 = 0;
	volatile int16_t x8856 = INT16_MAX;
	volatile int64_t t84 = 116316LL;

    t84 = (x8853/((x8854>>x8855)&x8856));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x8861 = 3823;
	uint16_t x8862 = 9906U;
	static int16_t x8863 = 5;
	volatile int32_t t85 = 5719460;

    t85 = (x8861/((x8862>>x8863)&x8864));

    if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x8889 = 3743078U;
	volatile uint32_t x8890 = 10863U;
	uint64_t x8891 = 2LLU;
	volatile uint16_t x8892 = UINT16_MAX;
	volatile uint32_t t86 = 461479806U;

    t86 = (x8889/((x8890>>x8891)&x8892));

    if (t86 != 1378U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x9045 = UINT16_MAX;
	int64_t x9046 = INT64_MAX;
	uint32_t x9047 = 7U;
	static uint32_t x9048 = 16145U;
	volatile int64_t t87 = 89LL;

    t87 = (x9045/((x9046>>x9047)&x9048));

    if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x9157 = 3181396182710408513LLU;
	static volatile uint32_t x9158 = 433071U;
	int8_t x9159 = 1;
	uint64_t x9160 = 14657589LLU;

    t88 = (x9157/((x9158>>x9159)&x9160));

    if (t88 != 16012906288651LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x9341 = 119464021944LL;
	int64_t x9342 = 190385675528039LL;
	uint8_t x9343 = 0U;
	int8_t x9344 = INT8_MAX;
	volatile int64_t t89 = 8989096476782LL;

    t89 = (x9341/((x9342>>x9343)&x9344));

    if (t89 != 1159844873LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x9449 = 7U;
	static int32_t x9451 = 1;
	uint16_t x9452 = 459U;
	uint32_t t90 = 27299U;

    t90 = (x9449/((x9450>>x9451)&x9452));

    if (t90 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

