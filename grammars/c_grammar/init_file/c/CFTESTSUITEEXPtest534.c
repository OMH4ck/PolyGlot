
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

int32_t t0 = -1599049;
int64_t x177 = -1LL;
static uint16_t x179 = 7784U;
uint64_t t3 = 432173LLU;
int16_t x405 = -1;
volatile int16_t x433 = INT16_MAX;
uint32_t t5 = UINT32_MAX;
uint16_t x439 = 934U;
int16_t x635 = 963;
volatile int8_t x636 = 1;
int64_t t11 = 940586LL;
static int8_t x755 = INT8_MIN;
uint32_t x846 = 120U;
uint16_t x878 = 821U;
uint64_t x1019 = UINT64_MAX;
static uint32_t t19 = 1U;
uint32_t t20 = 6U;
uint32_t x1314 = 11108U;
uint8_t x1440 = 29U;
static volatile uint64_t x1457 = 327283161415137993LLU;
volatile int16_t x1459 = 0;
volatile uint8_t x1460 = 14U;
uint64_t t25 = 62724237208368LLU;
int16_t x1745 = INT16_MAX;
static volatile int32_t x1746 = 3895636;
uint32_t x1841 = 11451109U;
int8_t x1842 = 62;
int8_t x1917 = -6;
static uint8_t x2053 = 13U;
volatile uint32_t t33 = 733882634U;
volatile uint64_t t36 = 2136417419410462LLU;
uint8_t x2416 = 30U;
int64_t x2506 = -81049LL;
int64_t t38 = -150447LL;
volatile uint8_t x2560 = 7U;
int32_t x2566 = 4827726;
volatile uint64_t x2602 = 1361634622959437LLU;
uint8_t x2604 = 1U;
static volatile int16_t x2785 = 209;
uint8_t x2788 = 59U;
volatile uint8_t x2880 = 27U;
int16_t x3001 = -1;
int16_t x3018 = INT16_MIN;
static uint32_t t47 = 7766470U;
int64_t t48 = 62LL;
int32_t x3219 = -44835;
volatile int64_t t49 = 78005LL;
static int32_t x3237 = -23323915;
volatile int8_t x3241 = INT8_MIN;
static volatile int64_t t54 = -611887495LL;
volatile uint16_t x3529 = UINT16_MAX;
volatile uint32_t x3622 = 7518U;
int16_t x3623 = -1;
uint64_t x3949 = UINT64_MAX;
int8_t x3986 = -1;
int8_t x3988 = 0;
int64_t x4081 = 448001753LL;
int16_t x4244 = 1;
static uint64_t t63 = UINT64_MAX;


void f0(void) {
    	int8_t x65 = INT8_MIN;
	static volatile uint8_t x66 = 23U;
	uint16_t x67 = 53U;
	static uint8_t x68 = 0U;

    t0 = (x65-((x66*x67)>>x68));

    if (t0 != -1347) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x178 = 1587606601U;
	int16_t x180 = 0;
	volatile int64_t t1 = -474163931769LL;

    t1 = (x177-((x178*x179)>>x180));

    if (t1 != -1308871593LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = 3;
	static uint32_t t2 = 687092250U;

    t2 = (x337-((x338*x339)>>x340));

    if (t2 != 3758104575U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x389 = 28;
	int64_t x390 = INT64_MAX;
	uint64_t x391 = 2LLU;
	int8_t x392 = 50;

    t3 = (x389-((x390*x391)>>x392));

    if (t3 != 18446744073709535261LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x406 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;
	uint8_t x408 = 0U;
	uint32_t t4 = 5U;

    t4 = (x405-((x406*x407)>>x408));

    if (t4 != 4294934527U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = 0;

    t5 = (x433-((x434*x435)>>x436));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x437 = 9U;
	uint32_t x438 = 1036332724U;
	uint16_t x440 = 2U;
	volatile uint32_t t6 = 242395839U;

    t6 = (x437-((x438*x439)>>x440));

    if (t6 != 3903186651U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x537 = 534828626801LLU;
	uint64_t x538 = UINT64_MAX;
	int32_t x539 = -1;
	uint32_t x540 = 2U;
	uint64_t t7 = 537561047263000991LLU;

    t7 = (x537-((x538*x539)>>x540));

    if (t7 != 534828626801LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x601 = 229U;
	uint32_t x602 = 540845028U;
	volatile uint32_t x603 = 8067U;
	volatile int32_t x604 = 0;
	volatile uint32_t t8 = 2724U;

    t8 = (x601-((x602*x603)>>x604));

    if (t8 != 689932089U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x629 = INT64_MAX;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 110675234663053063LLU;
	static uint8_t x632 = 1U;
	volatile uint64_t t9 = 5062LLU;

    t9 = (x629-((x630*x631)>>x632));

    if (t9 != 7083215018435396031LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x633 = UINT16_MAX;
	volatile uint32_t x634 = 187158U;
	static uint32_t t10 = 532U;

    t10 = (x633-((x634*x635)>>x636));

    if (t10 != 4204916254U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x641 = -1;
	uint32_t x642 = 0U;
	volatile int64_t x643 = INT64_MAX;
	static uint8_t x644 = 0U;

    t11 = (x641-((x642*x643)>>x644));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x753 = INT16_MIN;
	volatile int64_t x754 = -20014769413220922LL;
	volatile uint16_t x756 = 54U;
	volatile int64_t t12 = -14932254933415LL;

    t12 = (x753-((x754*x755)>>x756));

    if (t12 != -32910LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x845 = INT16_MIN;
	int8_t x847 = -1;
	volatile int8_t x848 = 7;
	uint32_t t13 = 809394U;

    t13 = (x845-((x846*x847)>>x848));

    if (t13 != 4261380097U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x877 = -1;
	uint32_t x879 = 14024743U;
	uint8_t x880 = 14U;
	uint32_t t14 = 83496765U;

    t14 = (x877-((x878*x879)>>x880));

    if (t14 != 4294788806U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x905 = 48U;
	int8_t x906 = -1;
	static uint32_t x907 = 131427U;
	int8_t x908 = 0;
	uint32_t t15 = 14227U;

    t15 = (x905-((x906*x907)>>x908));

    if (t15 != 131475U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x953 = UINT32_MAX;
	static int64_t x954 = -1LL;
	int8_t x955 = INT8_MIN;
	int8_t x956 = 8;
	static int64_t t16 = 0LL;

    t16 = (x953-((x954*x955)>>x956));

    if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1005 = 10;
	int64_t x1006 = -2985181LL;
	volatile int32_t x1007 = INT32_MIN;
	uint16_t x1008 = 4U;
	volatile int64_t t17 = 3723599426792699LL;

    t17 = (x1005-((x1006*x1007)>>x1008));

    if (t17 != -400664211488758LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1017 = 163U;
	int16_t x1018 = INT16_MIN;
	uint32_t x1020 = 29U;
	volatile uint64_t t18 = 1903325233LLU;

    t18 = (x1017-((x1018*x1019)>>x1020));

    if (t18 != 163LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1117 = INT32_MIN;
	uint32_t x1118 = UINT32_MAX;
	int32_t x1119 = INT32_MIN;
	volatile uint8_t x1120 = 0U;

    t19 = (x1117-((x1118*x1119)>>x1120));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1221 = 1U;
	static volatile uint32_t x1222 = 126U;
	volatile uint32_t x1223 = UINT32_MAX;
	uint8_t x1224 = 1U;

    t20 = (x1221-((x1222*x1223)>>x1224));

    if (t20 != 2147483712U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1313 = -1;
	static volatile uint16_t x1315 = UINT16_MAX;
	uint8_t x1316 = 2U;
	uint32_t t21 = 0U;

    t21 = (x1313-((x1314*x1315)>>x1316));

    if (t21 != 4112976600U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1333 = INT32_MAX;
	int16_t x1334 = 347;
	int8_t x1335 = 7;
	volatile uint8_t x1336 = 1U;
	volatile int32_t t22 = -301;

    t22 = (x1333-((x1334*x1335)>>x1336));

    if (t22 != 2147482433) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1361 = INT64_MAX;
	static int8_t x1362 = -1;
	int8_t x1363 = INT8_MIN;
	volatile uint64_t x1364 = 1LLU;
	volatile int64_t t23 = 4032LL;

    t23 = (x1361-((x1362*x1363)>>x1364));

    if (t23 != 9223372036854775743LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1437 = INT8_MIN;
	int32_t x1438 = INT32_MIN;
	uint32_t x1439 = 57023913U;
	uint32_t t24 = 4065077U;

    t24 = (x1437-((x1438*x1439)>>x1440));

    if (t24 != 4294967164U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1458 = 43U;

    t25 = (x1457-((x1458*x1459)>>x1460));

    if (t25 != 327283161415137993LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x1529 = UINT8_MAX;
	static int32_t x1530 = 30;
	static uint64_t x1531 = UINT64_MAX;
	static uint16_t x1532 = 5U;
	static volatile uint64_t t26 = 44144LLU;

    t26 = (x1529-((x1530*x1531)>>x1532));

    if (t26 != 17870283321406128384LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1541 = UINT8_MAX;
	int16_t x1542 = -73;
	static int8_t x1543 = INT8_MIN;
	int16_t x1544 = 0;
	volatile int32_t t27 = 10;

    t27 = (x1541-((x1542*x1543)>>x1544));

    if (t27 != -9089) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1747 = 99135212U;
	int8_t x1748 = 7;
	uint32_t t28 = 0U;

    t28 = (x1745-((x1746*x1747)>>x1748));

    if (t28 != 4262762717U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1821 = INT8_MAX;
	uint32_t x1822 = 6684U;
	volatile int16_t x1823 = -1;
	uint8_t x1824 = 2U;
	volatile uint32_t t29 = 13387U;

    t29 = (x1821-((x1822*x1823)>>x1824));

    if (t29 != 3221227270U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1843 = 573LLU;
	uint16_t x1844 = 60U;
	volatile uint64_t t30 = 8919447383LLU;

    t30 = (x1841-((x1842*x1843)>>x1844));

    if (t30 != 11451109LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x1857 = -24;
	static int32_t x1858 = INT32_MIN;
	static uint8_t x1859 = 0U;
	uint8_t x1860 = 14U;
	int32_t t31 = -64850990;

    t31 = (x1857-((x1858*x1859)>>x1860));

    if (t31 != -24) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1918 = UINT16_MAX;
	uint16_t x1919 = 12U;
	uint64_t x1920 = 25LLU;
	int32_t t32 = 735709;

    t32 = (x1917-((x1918*x1919)>>x1920));

    if (t32 != -6) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x2054 = 55U;
	static uint32_t x2055 = UINT32_MAX;
	uint32_t x2056 = 1U;

    t33 = (x2053-((x2054*x2055)>>x2056));

    if (t33 != 2147483689U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2101 = 5U;
	volatile int16_t x2102 = 13;
	uint32_t x2103 = UINT32_MAX;
	static volatile uint16_t x2104 = 6U;
	static uint32_t t34 = 1529U;

    t34 = (x2101-((x2102*x2103)>>x2104));

    if (t34 != 4227858438U) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x2121 = 211719701U;
	uint8_t x2122 = 92U;
	volatile uint16_t x2123 = UINT16_MAX;
	static uint16_t x2124 = 30U;
	volatile uint32_t t35 = 483U;

    t35 = (x2121-((x2122*x2123)>>x2124));

    if (t35 != 211719701U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2397 = -6768LL;
	uint64_t x2398 = 10355648LLU;
	int8_t x2399 = 46;
	int16_t x2400 = 0;

    t36 = (x2397-((x2398*x2399)>>x2400));

    if (t36 != 18446744073233185040LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2413 = -112200218135419LL;
	uint32_t x2414 = UINT32_MAX;
	uint64_t x2415 = 0LLU;
	uint64_t t37 = 4626669892628522LLU;

    t37 = (x2413-((x2414*x2415)>>x2416));

    if (t37 != 18446631873491416197LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2505 = INT8_MAX;
	int32_t x2507 = INT32_MIN;
	uint8_t x2508 = 2U;

    t38 = (x2505-((x2506*x2507)>>x2508));

    if (t38 != -43512850546561LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2557 = UINT32_MAX;
	uint16_t x2558 = UINT16_MAX;
	uint8_t x2559 = 87U;
	uint32_t t39 = 27806322U;

    t39 = (x2557-((x2558*x2559)>>x2560));

    if (t39 != 4294922752U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2565 = UINT16_MAX;
	static uint64_t x2567 = 28971265LLU;
	volatile uint16_t x2568 = 20U;
	uint64_t t40 = 62979991641994567LLU;

    t40 = (x2565-((x2566*x2567)>>x2568));

    if (t40 != 18446744073576231179LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2573 = -1;
	volatile int64_t x2574 = -1LL;
	uint64_t x2575 = 117426867LLU;
	int8_t x2576 = 0;
	uint64_t t41 = 1810588256LLU;

    t41 = (x2573-((x2574*x2575)>>x2576));

    if (t41 != 117426866LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x2601 = UINT32_MAX;
	static volatile uint8_t x2603 = UINT8_MAX;
	volatile uint64_t t42 = 423135916916LLU;

    t42 = (x2601-((x2602*x2603)>>x2604));

    if (t42 != 18273135663577190694LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2786 = UINT64_MAX;
	int64_t x2787 = -26847061240LL;
	uint64_t t43 = 16181443306978507LLU;

    t43 = (x2785-((x2786*x2787)>>x2788));

    if (t43 != 209LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x2877 = 13U;
	volatile uint16_t x2878 = 1U;
	uint64_t x2879 = 673488814065081379LLU;
	uint64_t t44 = 228175060931LLU;

    t44 = (x2877-((x2878*x2879)>>x2880));

    if (t44 != 18446744068691668939LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2961 = INT64_MAX;
	volatile uint8_t x2962 = 3U;
	uint8_t x2963 = UINT8_MAX;
	uint8_t x2964 = 0U;
	volatile int64_t t45 = -394LL;

    t45 = (x2961-((x2962*x2963)>>x2964));

    if (t45 != 9223372036854775042LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3002 = -1;
	uint32_t x3003 = UINT32_MAX;
	uint16_t x3004 = 2U;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (x3001-((x3002*x3003)>>x3004));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x3017 = -1;
	uint32_t x3019 = 63163671U;
	static uint8_t x3020 = 1U;

    t47 = (x3017-((x3018*x3019)>>x3020));

    if (t47 != 4081434623U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x3073 = -1;
	int8_t x3074 = INT8_MIN;
	int64_t x3075 = -226LL;
	volatile uint8_t x3076 = 5U;

    t48 = (x3073-((x3074*x3075)>>x3076));

    if (t48 != -905LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x3217 = -965684760613LL;
	int8_t x3218 = -1;
	int16_t x3220 = 8;

    t49 = (x3217-((x3218*x3219)>>x3220));

    if (t49 != -965684760788LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x3238 = 60;
	uint8_t x3239 = 20U;
	uint8_t x3240 = 1U;
	static volatile int32_t t50 = 13722;

    t50 = (x3237-((x3238*x3239)>>x3240));

    if (t50 != -23324515) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x3242 = 668U;
	uint8_t x3243 = 8U;
	uint8_t x3244 = 0U;
	int32_t t51 = 25094164;

    t51 = (x3241-((x3242*x3243)>>x3244));

    if (t51 != -5472) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x3281 = INT32_MIN;
	static int8_t x3282 = INT8_MIN;
	int16_t x3283 = 0;
	int8_t x3284 = 18;
	volatile int32_t t52 = INT32_MIN;

    t52 = (x3281-((x3282*x3283)>>x3284));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3317 = -2764;
	uint8_t x3318 = UINT8_MAX;
	volatile uint16_t x3319 = UINT16_MAX;
	uint8_t x3320 = 3U;
	static volatile int32_t t53 = 15979537;

    t53 = (x3317-((x3318*x3319)>>x3320));

    if (t53 != -2091692) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x3401 = -2;
	int64_t x3402 = -1LL;
	volatile int64_t x3403 = -53470800891985946LL;
	uint8_t x3404 = 9U;

    t54 = (x3401-((x3402*x3403)>>x3404));

    if (t54 != -104435157992162LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x3530 = -2;
	int32_t x3531 = -33;
	volatile uint8_t x3532 = 2U;
	int32_t t55 = 450970;

    t55 = (x3529-((x3530*x3531)>>x3532));

    if (t55 != 65519) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x3573 = INT32_MAX;
	uint64_t x3574 = 42LLU;
	uint32_t x3575 = 112U;
	volatile uint8_t x3576 = 1U;
	uint64_t t56 = 2416938579937LLU;

    t56 = (x3573-((x3574*x3575)>>x3576));

    if (t56 != 2147481295LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x3621 = -1;
	int8_t x3624 = 17;
	volatile uint32_t t57 = 78U;

    t57 = (x3621-((x3622*x3623)>>x3624));

    if (t57 != 4294934528U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3950 = UINT32_MAX;
	uint16_t x3951 = 12242U;
	int32_t x3952 = 1;
	static uint64_t t58 = 2745LLU;

    t58 = (x3949-((x3950*x3951)>>x3952));

    if (t58 != 18446744071562074088LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3981 = INT8_MIN;
	static volatile int16_t x3982 = -22;
	static int32_t x3983 = -1;
	static int16_t x3984 = 8;
	int32_t t59 = 978;

    t59 = (x3981-((x3982*x3983)>>x3984));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3985 = 261706611644LLU;
	static uint64_t x3987 = UINT64_MAX;
	volatile uint64_t t60 = 182873LLU;

    t60 = (x3985-((x3986*x3987)>>x3988));

    if (t60 != 261706611643LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4082 = UINT32_MAX;
	int16_t x4083 = INT16_MIN;
	int16_t x4084 = 1;
	volatile int64_t t61 = -134816LL;

    t61 = (x4081-((x4082*x4083)>>x4084));

    if (t61 != 447985369LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x4241 = 17U;
	int16_t x4242 = INT16_MIN;
	int8_t x4243 = INT8_MIN;
	static uint32_t t62 = 239312807U;

    t62 = (x4241-((x4242*x4243)>>x4244));

    if (t62 != 4292870161U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x4369 = UINT64_MAX;
	int64_t x4370 = 1386103418979LL;
	int8_t x4371 = 0;
	volatile uint8_t x4372 = 2U;

    t63 = (x4369-((x4370*x4371)>>x4372));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x4389 = -1;
	uint64_t x4390 = 196513492353901116LLU;
	int8_t x4391 = -1;
	static uint16_t x4392 = 0U;
	volatile uint64_t t64 = 422LLU;

    t64 = (x4389-((x4390*x4391)>>x4392));

    if (t64 != 196513492353901115LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x4537 = INT32_MAX;
	int64_t x4538 = 64663562LL;
	volatile uint64_t x4539 = 60LLU;
	int8_t x4540 = 4;
	volatile uint64_t t65 = 223108LLU;

    t65 = (x4537-((x4538*x4539)>>x4540));

    if (t65 != 1904995290LLU) { NG(); } else { ; }
	
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


    return 0;
}

