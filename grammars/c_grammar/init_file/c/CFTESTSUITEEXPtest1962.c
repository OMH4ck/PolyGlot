
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

int16_t x10 = 1;
int32_t x493 = INT32_MAX;
uint32_t x496 = 43830642U;
int8_t x666 = INT8_MAX;
static volatile int8_t x668 = -1;
uint8_t x683 = 49U;
volatile uint32_t t5 = 3381U;
int64_t x841 = -1LL;
int64_t x1006 = INT64_MAX;
uint8_t x1011 = 1U;
volatile int8_t x1036 = -37;
uint8_t x1304 = 56U;
volatile uint64_t t15 = 2216LLU;
uint16_t x1422 = 9716U;
static uint16_t x1423 = 3U;
volatile uint16_t x1424 = 372U;
static uint8_t x1554 = 1U;
uint64_t x1694 = 104590633LLU;
int8_t x1696 = INT8_MIN;
volatile uint64_t x1798 = 502280LLU;
uint32_t x1799 = 1U;
static uint8_t x1960 = 0U;
int8_t x1963 = 2;
uint8_t x2006 = UINT8_MAX;
static uint8_t x2150 = 0U;
static int32_t x2152 = -67;
volatile int32_t t25 = -925;
volatile int16_t x2167 = 15;
int8_t x2168 = -1;
int8_t x2273 = INT8_MIN;
static uint32_t t27 = 50824259U;
volatile int8_t x2314 = INT8_MAX;
uint8_t x2316 = UINT8_MAX;
static int64_t x2617 = -121632132267895LL;
uint64_t x2619 = 16LLU;
int64_t x2620 = 1725327548LL;
uint32_t x2763 = 9U;
uint64_t x2826 = 7512304LLU;
uint8_t x2827 = 0U;
static uint16_t x2915 = 0U;
uint32_t x2916 = UINT32_MAX;
uint64_t t34 = 53126LLU;
uint8_t x3163 = 1U;
volatile uint64_t t40 = 925659228021LLU;
int32_t x3205 = -1;
uint16_t x3207 = 4U;
int32_t t41 = 328352065;
volatile int32_t x3584 = 93;
uint8_t x3616 = 1U;
volatile uint32_t x3658 = UINT32_MAX;
uint16_t x3671 = 6U;
uint64_t x3672 = UINT64_MAX;
volatile int64_t t49 = 7613910482LL;
int32_t x3868 = -1;
int16_t x3869 = INT16_MIN;
volatile int8_t x3871 = 0;
volatile int8_t x3891 = 5;
uint16_t x3892 = UINT16_MAX;
uint16_t x3932 = 5886U;
int16_t x3963 = 18;
static int32_t x3964 = INT32_MAX;
volatile int8_t x4301 = INT8_MAX;
static int8_t x4303 = 1;
volatile int16_t x4312 = -2;
uint32_t t61 = 28U;
static int8_t x4564 = -3;
volatile uint64_t t65 = 158345764248LLU;
int32_t x4813 = -1;
int8_t x4815 = 15;
int16_t x4824 = INT16_MIN;
uint16_t x4858 = UINT16_MAX;
int8_t x4937 = -1;
static uint64_t t71 = 3LLU;
int16_t x4953 = INT16_MIN;
volatile uint8_t x5051 = 2U;
uint32_t x5178 = UINT32_MAX;
int8_t x5217 = INT8_MIN;
int8_t x5362 = 0;
uint8_t x5363 = 1U;
static uint64_t x5397 = UINT64_MAX;
uint8_t x5407 = 27U;
static int32_t x5428 = INT32_MIN;
int8_t x5438 = INT8_MAX;
int64_t x5613 = INT64_MAX;
int16_t x5617 = -3;
int8_t x5619 = 1;
int8_t x5646 = 38;
volatile int64_t t85 = 62788374569520653LL;
uint32_t x5711 = 3U;
int32_t x5757 = -1049195138;
static int64_t x5904 = INT64_MIN;
uint8_t x5922 = 34U;
static volatile uint64_t t90 = 97775366LLU;
static int8_t x6029 = -1;
uint16_t x6200 = 273U;
uint8_t x6298 = 3U;
static int64_t x6412 = -4LL;
int8_t x6441 = 2;
uint32_t x6442 = 242455U;
int8_t x6444 = INT8_MIN;
int32_t x6452 = INT32_MIN;
volatile uint16_t x6537 = 5973U;
volatile int8_t x6577 = 20;
static uint16_t x6594 = 2288U;
int32_t x6595 = 3;
static volatile int32_t t104 = 239423;
int32_t x6632 = -1;
uint32_t x6635 = 3U;
int32_t x6653 = INT32_MIN;
uint64_t x6698 = UINT64_MAX;
int16_t x6765 = INT16_MIN;
int32_t t109 = -84;
uint32_t x6774 = 11629U;
static uint16_t x6797 = UINT16_MAX;
volatile int16_t x6957 = INT16_MIN;
volatile uint16_t x6958 = UINT16_MAX;
static uint8_t x7007 = 0U;
uint32_t x7190 = 6407U;
int32_t x7191 = 1;
volatile uint64_t t117 = 12209523135LLU;
int8_t x7357 = INT8_MAX;
static volatile uint64_t t118 = 5182517LLU;
volatile uint8_t x7459 = 34U;
static int64_t t119 = -706177LL;
int8_t x7541 = -6;
volatile uint64_t t120 = 53LLU;
volatile uint32_t x7566 = 1652U;
uint32_t x7663 = 58U;
uint8_t x7761 = 42U;
volatile int8_t x7763 = 28;
volatile uint8_t x7959 = 5U;
int16_t x7974 = INT16_MAX;
int8_t x7975 = 5;
int16_t x8001 = INT16_MIN;
uint64_t x8011 = 3LLU;
uint8_t x8012 = UINT8_MAX;
int32_t t128 = 3079;
int8_t x8028 = -1;
volatile int64_t x8120 = -1LL;
static uint16_t x8268 = 14733U;
uint32_t x8341 = 46562U;
volatile int8_t x8342 = INT8_MAX;
volatile int32_t x8356 = -1;
int16_t x8452 = INT16_MAX;
volatile int16_t x8706 = INT16_MAX;
uint64_t x8709 = UINT64_MAX;
int8_t x8737 = 0;
int8_t x8740 = INT8_MAX;
uint16_t x8742 = 131U;
static uint32_t t143 = 88232692U;
static uint32_t x8870 = 8U;
static int16_t x8909 = INT16_MIN;
volatile int32_t t145 = -1782;
volatile uint64_t t147 = 10026024LLU;
uint8_t x9067 = 24U;
static volatile uint32_t x9086 = 35744452U;
volatile uint32_t t149 = 119712U;
uint64_t x9090 = 49662745860462731LLU;
int8_t x9211 = 1;
int64_t x9212 = -26552832233683323LL;
uint8_t x9291 = 1U;
uint16_t x9292 = UINT16_MAX;
int64_t x9309 = -1LL;
int32_t x9312 = INT32_MAX;
static volatile uint64_t t154 = 371441626LLU;
volatile uint8_t x9318 = 0U;
static uint64_t x9354 = UINT64_MAX;
uint64_t x9401 = 7917869373LLU;
static int16_t x9404 = -1;
uint32_t x9466 = 14U;
int16_t x9473 = INT16_MIN;
volatile uint16_t x9572 = UINT16_MAX;
int8_t x9617 = INT8_MIN;
int32_t x9634 = 97;
static uint64_t t163 = 1LLU;
uint32_t x9685 = 11U;
volatile int16_t x9686 = INT16_MAX;
static uint32_t t164 = 42898U;
static volatile int8_t x9759 = 2;
volatile int16_t x9760 = 5;
volatile int64_t x9870 = 29868421625098LL;
uint8_t x9987 = 4U;
volatile int64_t x9988 = 10067LL;
static volatile uint8_t x10007 = 57U;
volatile uint64_t x10128 = 49295LLU;
volatile int64_t x10340 = INT64_MIN;
int64_t x10464 = INT64_MIN;
volatile uint8_t x10477 = 31U;
uint8_t x10531 = 12U;
volatile int32_t t180 = -2;
static uint8_t x11147 = 1U;
uint8_t x11153 = 49U;
volatile uint64_t x11320 = 1528279973256LLU;
static volatile uint64_t t185 = 831253387379LLU;
uint8_t x11578 = UINT8_MAX;
int8_t x11580 = -28;
static int32_t t187 = -253;
int8_t x11621 = INT8_MAX;
int16_t x11622 = INT16_MAX;
static int8_t x11649 = -1;
int64_t x11652 = INT64_MAX;
volatile int32_t t191 = 395;
uint32_t x11727 = 1U;
int64_t x11793 = INT64_MAX;
uint64_t t194 = 6764507738LLU;
static volatile int16_t x11999 = 11;
volatile int8_t x12024 = 4;
int64_t x12029 = INT64_MAX;
int8_t x12031 = 0;
volatile int32_t x12164 = 47;
int64_t t199 = -7452LL;


void f0(void) {
    	uint32_t x9 = 2560U;
	uint16_t x11 = 1U;
	static volatile int64_t x12 = -14LL;
	volatile int64_t t0 = -454LL;

    t0 = (x9-((x10>>x11)+x12));

    if (t0 != 2574LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x209 = -1654;
	uint8_t x210 = 4U;
	uint16_t x211 = 0U;
	uint32_t x212 = 273508U;
	uint32_t t1 = 769857U;

    t1 = (x209-((x210>>x211)+x212));

    if (t1 != 4294692130U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x494 = 24U;
	int8_t x495 = 0;
	static uint32_t t2 = 72U;

    t2 = (x493-((x494>>x495)+x496));

    if (t2 != 2103652981U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x665 = 8846680U;
	static uint16_t x667 = 0U;
	volatile uint32_t t3 = 31805651U;

    t3 = (x665-((x666>>x667)+x668));

    if (t3 != 8846554U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint64_t x682 = 1079324009LLU;
	uint32_t x684 = 84004694U;
	volatile uint64_t t4 = 1709793LLU;

    t4 = (x681-((x682>>x683)+x684));

    if (t4 != 18446744071478063274LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x749 = 1U;
	int32_t x750 = 1;
	volatile int8_t x751 = 1;
	uint32_t x752 = 6U;

    t5 = (x749-((x750>>x751)+x752));

    if (t5 != 4294967291U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x821 = -1LL;
	int16_t x822 = 3597;
	volatile uint8_t x823 = 1U;
	uint16_t x824 = UINT16_MAX;
	volatile int64_t t6 = -253722632191795LL;

    t6 = (x821-((x822>>x823)+x824));

    if (t6 != -67334LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x842 = 15878267108338265LLU;
	int8_t x843 = 1;
	volatile int64_t x844 = 27651LL;
	uint64_t t7 = 3039605036LLU;

    t7 = (x841-((x842>>x843)+x844));

    if (t7 != 18438804940155354832LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x949 = INT32_MIN;
	int64_t x950 = INT64_MAX;
	static volatile int8_t x951 = 1;
	int64_t x952 = -10326613LL;
	int64_t t8 = 211241123LL;

    t8 = (x949-((x950>>x951)+x952));

    if (t8 != -4611686020564544938LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1005 = INT8_MAX;
	int32_t x1007 = 1;
	uint8_t x1008 = 0U;
	int64_t t9 = -32005LL;

    t9 = (x1005-((x1006>>x1007)+x1008));

    if (t9 != -4611686018427387776LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x1009 = -1;
	int64_t x1010 = 23349LL;
	uint8_t x1012 = UINT8_MAX;
	static volatile int64_t t10 = 62170971170LL;

    t10 = (x1009-((x1010>>x1011)+x1012));

    if (t10 != -11930LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1033 = -3506LL;
	uint8_t x1034 = 0U;
	int16_t x1035 = 21;
	volatile int64_t t11 = 69540932LL;

    t11 = (x1033-((x1034>>x1035)+x1036));

    if (t11 != -3469LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1241 = -1;
	uint32_t x1242 = 317844025U;
	int8_t x1243 = 10;
	static volatile uint64_t x1244 = 5998762044265908127LLU;
	uint64_t t12 = 120842639277LLU;

    t12 = (x1241-((x1242>>x1243)+x1244));

    if (t12 != 12447982029443333094LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x1273 = INT8_MIN;
	int16_t x1274 = 18;
	uint32_t x1275 = 5U;
	int8_t x1276 = -1;
	volatile int32_t t13 = 1882;

    t13 = (x1273-((x1274>>x1275)+x1276));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1301 = UINT64_MAX;
	uint16_t x1302 = 900U;
	int16_t x1303 = 1;
	uint64_t t14 = 3593398393LLU;

    t14 = (x1301-((x1302>>x1303)+x1304));

    if (t14 != 18446744073709551109LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1333 = INT16_MIN;
	uint16_t x1334 = 110U;
	uint16_t x1335 = 29U;
	uint64_t x1336 = UINT64_MAX;

    t15 = (x1333-((x1334>>x1335)+x1336));

    if (t15 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1421 = 2U;
	int32_t t16 = 0;

    t16 = (x1421-((x1422>>x1423)+x1424));

    if (t16 != -1584) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x1509 = INT16_MIN;
	static uint32_t x1510 = UINT32_MAX;
	static volatile uint16_t x1511 = 30U;
	uint32_t x1512 = 5U;
	uint32_t t17 = 240U;

    t17 = (x1509-((x1510>>x1511)+x1512));

    if (t17 != 4294934520U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1553 = 877127U;
	uint8_t x1555 = 3U;
	static int16_t x1556 = INT16_MAX;
	volatile uint32_t t18 = 1163993U;

    t18 = (x1553-((x1554>>x1555)+x1556));

    if (t18 != 844360U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1693 = UINT16_MAX;
	int32_t x1695 = 0;
	uint64_t t19 = 52528928LLU;

    t19 = (x1693-((x1694>>x1695)+x1696));

    if (t19 != 18446744073605026646LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1717 = UINT64_MAX;
	uint16_t x1718 = 11U;
	int32_t x1719 = 29;
	int16_t x1720 = 101;
	volatile uint64_t t20 = 373LLU;

    t20 = (x1717-((x1718>>x1719)+x1720));

    if (t20 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1797 = INT16_MIN;
	int8_t x1800 = -1;
	uint64_t t21 = 111315413785LLU;

    t21 = (x1797-((x1798>>x1799)+x1800));

    if (t21 != 18446744073709267709LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1957 = UINT16_MAX;
	static uint32_t x1958 = 51163U;
	uint8_t x1959 = 4U;
	uint32_t t22 = 16022267U;

    t22 = (x1957-((x1958>>x1959)+x1960));

    if (t22 != 62338U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1961 = -19;
	volatile uint64_t x1962 = 1768LLU;
	volatile int64_t x1964 = -300014399947587428LL;
	volatile uint64_t t23 = 263079908LLU;

    t23 = (x1961-((x1962>>x1963)+x1964));

    if (t23 != 300014399947586967LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x2005 = 3LLU;
	uint8_t x2007 = 2U;
	static uint8_t x2008 = 1U;
	uint64_t t24 = 1537065948819LLU;

    t24 = (x2005-((x2006>>x2007)+x2008));

    if (t24 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2149 = -1;
	volatile int32_t x2151 = 2;

    t25 = (x2149-((x2150>>x2151)+x2152));

    if (t25 != 66) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x2165 = UINT32_MAX;
	uint32_t x2166 = 31387424U;
	volatile uint32_t t26 = 423U;

    t26 = (x2165-((x2166>>x2167)+x2168));

    if (t26 != 4294966339U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x2274 = 3155320U;
	static volatile uint8_t x2275 = 2U;
	uint8_t x2276 = 23U;

    t27 = (x2273-((x2274>>x2275)+x2276));

    if (t27 != 4294178315U) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x2313 = INT64_MAX;
	uint16_t x2315 = 11U;
	int64_t t28 = 147LL;

    t28 = (x2313-((x2314>>x2315)+x2316));

    if (t28 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x2618 = 10369768620943LLU;
	uint64_t t29 = 5870919269208929LLU;

    t29 = (x2617-((x2618>>x2619)+x2620));

    if (t29 != 18446622439693726061LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2689 = 4U;
	uint16_t x2690 = 4U;
	volatile uint16_t x2691 = 7U;
	volatile int64_t x2692 = -892754475598LL;
	volatile int64_t t30 = 29331LL;

    t30 = (x2689-((x2690>>x2691)+x2692));

    if (t30 != 892754475602LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x2761 = INT16_MIN;
	int64_t x2762 = INT64_MAX;
	int16_t x2764 = INT16_MAX;
	volatile int64_t t31 = -15982508795LL;

    t31 = (x2761-((x2762>>x2763)+x2764));

    if (t31 != -18014398509547518LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2769 = 1U;
	uint64_t x2770 = UINT64_MAX;
	uint32_t x2771 = 3U;
	uint16_t x2772 = 11220U;
	uint64_t t32 = 3712433444672LLU;

    t32 = (x2769-((x2770>>x2771)+x2772));

    if (t32 != 16140901064495846446LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x2825 = UINT8_MAX;
	int8_t x2828 = -1;
	volatile uint64_t t33 = 3670293668135991054LLU;

    t33 = (x2825-((x2826>>x2827)+x2828));

    if (t33 != 18446744073702039568LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x2913 = 1676;
	uint64_t x2914 = 1783719273239LLU;

    t34 = (x2913-((x2914>>x2915)+x2916));

    if (t34 != 18446742285695312758LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2925 = UINT8_MAX;
	int16_t x2926 = INT16_MAX;
	volatile uint16_t x2927 = 11U;
	int64_t x2928 = -10656271LL;
	static volatile int64_t t35 = 1544863LL;

    t35 = (x2925-((x2926>>x2927)+x2928));

    if (t35 != 10656511LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x3053 = 390148522622938LL;
	uint8_t x3054 = 5U;
	int8_t x3055 = 1;
	volatile int16_t x3056 = INT16_MIN;
	int64_t t36 = -18624527510960437LL;

    t36 = (x3053-((x3054>>x3055)+x3056));

    if (t36 != 390148522655704LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x3061 = 0;
	int16_t x3062 = INT16_MAX;
	uint8_t x3063 = 21U;
	int32_t x3064 = INT32_MAX;
	volatile int32_t t37 = -76468830;

    t37 = (x3061-((x3062>>x3063)+x3064));

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x3085 = 8;
	volatile uint16_t x3086 = 3U;
	uint8_t x3087 = 0U;
	uint32_t x3088 = 7484540U;
	uint32_t t38 = 18772U;

    t38 = (x3085-((x3086>>x3087)+x3088));

    if (t38 != 4287482761U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x3161 = -232LL;
	volatile int64_t x3162 = INT64_MAX;
	int32_t x3164 = 1707050;
	volatile int64_t t39 = -1658203690556865658LL;

    t39 = (x3161-((x3162>>x3163)+x3164));

    if (t39 != -4611686018429095185LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x3197 = UINT16_MAX;
	static int8_t x3198 = 0;
	volatile int8_t x3199 = 1;
	uint64_t x3200 = 1097LLU;

    t40 = (x3197-((x3198>>x3199)+x3200));

    if (t40 != 64438LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x3206 = INT32_MAX;
	static volatile int16_t x3208 = INT16_MIN;

    t41 = (x3205-((x3206>>x3207)+x3208));

    if (t41 != -134184960) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3277 = INT16_MIN;
	int32_t x3278 = INT32_MAX;
	int16_t x3279 = 1;
	volatile uint32_t x3280 = UINT32_MAX;
	volatile uint32_t t42 = 1773U;

    t42 = (x3277-((x3278>>x3279)+x3280));

    if (t42 != 3221192706U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x3317 = INT16_MAX;
	uint16_t x3318 = 847U;
	volatile uint8_t x3319 = 11U;
	uint8_t x3320 = UINT8_MAX;
	int32_t t43 = -47;

    t43 = (x3317-((x3318>>x3319)+x3320));

    if (t43 != 32512) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x3497 = INT16_MIN;
	uint16_t x3498 = 16981U;
	static int8_t x3499 = 0;
	int8_t x3500 = -11;
	int32_t t44 = -2;

    t44 = (x3497-((x3498>>x3499)+x3500));

    if (t44 != -49738) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x3581 = -1LL;
	uint64_t x3582 = UINT64_MAX;
	int64_t x3583 = 34LL;
	volatile uint64_t t45 = 8673LLU;

    t45 = (x3581-((x3582>>x3583)+x3584));

    if (t45 != 18446744072635809699LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3613 = 1;
	uint64_t x3614 = UINT64_MAX;
	uint32_t x3615 = 1U;
	volatile uint64_t t46 = 3350424286311279LLU;

    t46 = (x3613-((x3614>>x3615)+x3616));

    if (t46 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3657 = -1;
	uint16_t x3659 = 2U;
	static int16_t x3660 = 28;
	volatile uint32_t t47 = 10766U;

    t47 = (x3657-((x3658>>x3659)+x3660));

    if (t47 != 3221225444U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3669 = INT8_MIN;
	uint8_t x3670 = 30U;
	uint64_t t48 = 6LLU;

    t48 = (x3669-((x3670>>x3671)+x3672));

    if (t48 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3677 = INT64_MAX;
	uint32_t x3678 = 26U;
	static uint16_t x3679 = 8U;
	int16_t x3680 = 8;

    t49 = (x3677-((x3678>>x3679)+x3680));

    if (t49 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3865 = UINT32_MAX;
	volatile uint16_t x3866 = UINT16_MAX;
	uint8_t x3867 = 7U;
	uint32_t t50 = 31U;

    t50 = (x3865-((x3866>>x3867)+x3868));

    if (t50 != 4294966785U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3870 = 107532884LLU;
	int64_t x3872 = INT64_MAX;
	uint64_t t51 = 23226LLU;

    t51 = (x3869-((x3870>>x3871)+x3872));

    if (t51 != 9223372036747210157LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x3889 = INT32_MIN;
	int64_t x3890 = 255057LL;
	static int64_t t52 = -19527219578119576LL;

    t52 = (x3889-((x3890>>x3891)+x3892));

    if (t52 != -2147557153LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x3929 = UINT8_MAX;
	uint16_t x3930 = UINT16_MAX;
	uint8_t x3931 = 5U;
	volatile int32_t t53 = -88;

    t53 = (x3929-((x3930>>x3931)+x3932));

    if (t53 != -7678) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x3945 = -1;
	uint64_t x3946 = UINT64_MAX;
	uint8_t x3947 = 7U;
	uint16_t x3948 = UINT16_MAX;
	uint64_t t54 = 1207LLU;

    t54 = (x3945-((x3946>>x3947)+x3948));

    if (t54 != 18302628885633630209LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x3961 = INT32_MIN;
	uint32_t x3962 = UINT32_MAX;
	volatile uint32_t t55 = 1696163226U;

    t55 = (x3961-((x3962>>x3963)+x3964));

    if (t55 != 4294950914U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x4169 = UINT32_MAX;
	volatile int16_t x4170 = INT16_MAX;
	volatile uint8_t x4171 = 1U;
	static uint16_t x4172 = 41U;
	volatile uint32_t t56 = 2589U;

    t56 = (x4169-((x4170>>x4171)+x4172));

    if (t56 != 4294950871U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x4241 = -26;
	uint8_t x4242 = 92U;
	int8_t x4243 = 4;
	static int64_t x4244 = -13757397LL;
	volatile int64_t t57 = 5008321LL;

    t57 = (x4241-((x4242>>x4243)+x4244));

    if (t57 != 13757366LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x4273 = 2U;
	int64_t x4274 = INT64_MAX;
	static int16_t x4275 = 2;
	int32_t x4276 = 4292;
	int64_t t58 = 244157038776016538LL;

    t58 = (x4273-((x4274>>x4275)+x4276));

    if (t58 != -2305843009213698241LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x4302 = UINT32_MAX;
	static uint8_t x4304 = UINT8_MAX;
	volatile uint32_t t59 = 1639674U;

    t59 = (x4301-((x4302>>x4303)+x4304));

    if (t59 != 2147483521U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4309 = -1;
	uint8_t x4310 = 1U;
	static uint8_t x4311 = 1U;
	volatile int32_t t60 = 2896569;

    t60 = (x4309-((x4310>>x4311)+x4312));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4417 = 4823088U;
	static int8_t x4418 = 1;
	static int8_t x4419 = 0;
	volatile int16_t x4420 = 0;

    t61 = (x4417-((x4418>>x4419)+x4420));

    if (t61 != 4823087U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x4549 = 10214U;
	uint64_t x4550 = 545090538314092LLU;
	int8_t x4551 = 15;
	uint64_t x4552 = 175330533415312948LLU;
	volatile uint64_t t62 = 265407171942319164LLU;

    t62 = (x4549-((x4550>>x4551)+x4552));

    if (t62 != 18271413523659405794LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x4561 = INT32_MIN;
	uint32_t x4562 = 11U;
	uint8_t x4563 = 25U;
	uint32_t t63 = 8561070U;

    t63 = (x4561-((x4562>>x4563)+x4564));

    if (t63 != 2147483651U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x4629 = INT8_MIN;
	uint64_t x4630 = 103838867LLU;
	int32_t x4631 = 15;
	static int32_t x4632 = INT32_MIN;
	static uint64_t t64 = 1192771434778954955LLU;

    t64 = (x4629-((x4630>>x4631)+x4632));

    if (t64 != 2147480352LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x4677 = 134LLU;
	static uint16_t x4678 = 401U;
	static uint8_t x4679 = 8U;
	int8_t x4680 = INT8_MIN;

    t65 = (x4677-((x4678>>x4679)+x4680));

    if (t65 != 261LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x4761 = INT16_MIN;
	uint64_t x4762 = 7982LLU;
	uint32_t x4763 = 0U;
	int16_t x4764 = INT16_MAX;
	static uint64_t t66 = 11263417492LLU;

    t66 = (x4761-((x4762>>x4763)+x4764));

    if (t66 != 18446744073709478099LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x4814 = 36U;
	static volatile uint8_t x4816 = 24U;
	static volatile int32_t t67 = 431341;

    t67 = (x4813-((x4814>>x4815)+x4816));

    if (t67 != -25) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x4821 = 81118564LLU;
	volatile int8_t x4822 = INT8_MAX;
	uint8_t x4823 = 0U;
	volatile uint64_t t68 = 727484LLU;

    t68 = (x4821-((x4822>>x4823)+x4824));

    if (t68 != 81151205LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x4825 = INT16_MIN;
	volatile uint8_t x4826 = 1U;
	volatile int16_t x4827 = 6;
	int8_t x4828 = INT8_MIN;
	int32_t t69 = 4106213;

    t69 = (x4825-((x4826>>x4827)+x4828));

    if (t69 != -32640) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4857 = 26;
	volatile uint8_t x4859 = 15U;
	volatile int8_t x4860 = INT8_MIN;
	static int32_t t70 = -3372;

    t70 = (x4857-((x4858>>x4859)+x4860));

    if (t70 != 153) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4938 = 1301672488316LLU;
	uint16_t x4939 = 3U;
	static int8_t x4940 = INT8_MIN;

    t71 = (x4937-((x4938>>x4939)+x4940));

    if (t71 != 18446743911000490704LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x4954 = UINT16_MAX;
	uint16_t x4955 = 10U;
	int64_t x4956 = -52668909443LL;
	volatile int64_t t72 = 103105568975LL;

    t72 = (x4953-((x4954>>x4955)+x4956));

    if (t72 != 52668876612LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x5049 = INT32_MAX;
	int64_t x5050 = INT64_MAX;
	int16_t x5052 = INT16_MIN;
	static volatile int64_t t73 = -7161164LL;

    t73 = (x5049-((x5050>>x5051)+x5052));

    if (t73 != -2305843007066177536LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x5177 = 28230382491LL;
	volatile uint8_t x5179 = 0U;
	int64_t x5180 = -1LL;
	int64_t t74 = -3053526731LL;

    t74 = (x5177-((x5178>>x5179)+x5180));

    if (t74 != 23935415197LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x5218 = INT32_MAX;
	uint8_t x5219 = 9U;
	uint16_t x5220 = UINT16_MAX;
	int32_t t75 = -55353;

    t75 = (x5217-((x5218>>x5219)+x5220));

    if (t75 != -4259966) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x5357 = UINT16_MAX;
	static uint64_t x5358 = 9262429LLU;
	static uint64_t x5359 = 19LLU;
	uint16_t x5360 = UINT16_MAX;
	uint64_t t76 = 137785386283LLU;

    t76 = (x5357-((x5358>>x5359)+x5360));

    if (t76 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x5361 = UINT32_MAX;
	int32_t x5364 = INT32_MAX;
	static volatile uint32_t t77 = 41946U;

    t77 = (x5361-((x5362>>x5363)+x5364));

    if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x5398 = 1U;
	uint16_t x5399 = 7U;
	int16_t x5400 = INT16_MIN;
	uint64_t t78 = 4LLU;

    t78 = (x5397-((x5398>>x5399)+x5400));

    if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x5405 = INT64_MAX;
	static volatile uint64_t x5406 = 55520359812212159LLU;
	int8_t x5408 = -1;
	static volatile uint64_t t79 = 36007590087712656LLU;

    t79 = (x5405-((x5406>>x5407)+x5408));

    if (t79 != 9223372036441116893LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x5425 = UINT64_MAX;
	int32_t x5426 = 34;
	uint8_t x5427 = 17U;
	volatile uint64_t t80 = 37163LLU;

    t80 = (x5425-((x5426>>x5427)+x5428));

    if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x5437 = UINT8_MAX;
	static volatile int16_t x5439 = 2;
	volatile int64_t x5440 = -1LL;
	static volatile int64_t t81 = -2912189938618LL;

    t81 = (x5437-((x5438>>x5439)+x5440));

    if (t81 != 225LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x5477 = INT8_MAX;
	int16_t x5478 = 2611;
	uint8_t x5479 = 13U;
	static int8_t x5480 = 28;
	int32_t t82 = 51587;

    t82 = (x5477-((x5478>>x5479)+x5480));

    if (t82 != 99) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x5614 = 1;
	int8_t x5615 = 3;
	uint32_t x5616 = 8123U;
	int64_t t83 = -83LL;

    t83 = (x5613-((x5614>>x5615)+x5616));

    if (t83 != 9223372036854767684LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint8_t x5618 = UINT8_MAX;
	int32_t x5620 = -1;
	int32_t t84 = -1;

    t84 = (x5617-((x5618>>x5619)+x5620));

    if (t84 != -129) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x5645 = INT64_MIN;
	static uint64_t x5647 = 1LLU;
	int32_t x5648 = INT32_MIN;

    t85 = (x5645-((x5646>>x5647)+x5648));

    if (t85 != -9223372034707292179LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x5709 = INT32_MAX;
	uint16_t x5710 = UINT16_MAX;
	int8_t x5712 = INT8_MAX;
	int32_t t86 = 20857;

    t86 = (x5709-((x5710>>x5711)+x5712));

    if (t86 != 2147475329) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x5758 = 4;
	static volatile uint8_t x5759 = 16U;
	int8_t x5760 = INT8_MAX;
	int32_t t87 = -174616;

    t87 = (x5757-((x5758>>x5759)+x5760));

    if (t87 != -1049195265) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x5901 = -130;
	uint16_t x5902 = 36U;
	uint32_t x5903 = 12U;
	int64_t t88 = 160122LL;

    t88 = (x5901-((x5902>>x5903)+x5904));

    if (t88 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x5921 = -269570209823153351LL;
	uint8_t x5923 = 9U;
	int64_t x5924 = 4149494LL;
	volatile int64_t t89 = -603110LL;

    t89 = (x5921-((x5922>>x5923)+x5924));

    if (t89 != -269570209827302845LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x5965 = 662U;
	uint64_t x5966 = 328701137277113LLU;
	uint16_t x5967 = 6U;
	uint8_t x5968 = 8U;

    t90 = (x5965-((x5966>>x5967)+x5968));

    if (t90 != 18446738937754282316LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x6030 = 28U;
	volatile int16_t x6031 = 23;
	int16_t x6032 = -1;
	static uint32_t t91 = 11U;

    t91 = (x6029-((x6030>>x6031)+x6032));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x6113 = -1;
	int16_t x6114 = INT16_MAX;
	uint8_t x6115 = 24U;
	static int16_t x6116 = -646;
	volatile int32_t t92 = -8;

    t92 = (x6113-((x6114>>x6115)+x6116));

    if (t92 != 645) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x6197 = 0U;
	int16_t x6198 = INT16_MAX;
	uint16_t x6199 = 3U;
	int32_t t93 = -78069;

    t93 = (x6197-((x6198>>x6199)+x6200));

    if (t93 != -4368) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x6241 = 22U;
	static volatile int16_t x6242 = INT16_MAX;
	uint64_t x6243 = 0LLU;
	int8_t x6244 = 9;
	int32_t t94 = -49627052;

    t94 = (x6241-((x6242>>x6243)+x6244));

    if (t94 != -32754) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x6297 = INT16_MIN;
	int64_t x6299 = 1LL;
	int16_t x6300 = -1;
	int32_t t95 = 2447;

    t95 = (x6297-((x6298>>x6299)+x6300));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x6309 = -1;
	static uint32_t x6310 = 1U;
	volatile uint64_t x6311 = 7LLU;
	static int64_t x6312 = -1LL;
	volatile int64_t t96 = 484658LL;

    t96 = (x6309-((x6310>>x6311)+x6312));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x6409 = 4;
	uint64_t x6410 = 415105403LLU;
	uint16_t x6411 = 0U;
	uint64_t t97 = 202152485978575503LLU;

    t97 = (x6409-((x6410>>x6411)+x6412));

    if (t97 != 18446744073294446221LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x6443 = 11;
	volatile uint32_t t98 = 431U;

    t98 = (x6441-((x6442>>x6443)+x6444));

    if (t98 != 12U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x6445 = INT16_MAX;
	uint64_t x6446 = 3632260LLU;
	uint8_t x6447 = 2U;
	volatile int16_t x6448 = 5;
	static volatile uint64_t t99 = 7930LLU;

    t99 = (x6445-((x6446>>x6447)+x6448));

    if (t99 != 18446744073708676313LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x6449 = 1;
	uint32_t x6450 = UINT32_MAX;
	int32_t x6451 = 8;
	uint32_t t100 = 6U;

    t100 = (x6449-((x6450>>x6451)+x6452));

    if (t100 != 2130706434U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x6477 = -1549LL;
	static int16_t x6478 = 0;
	volatile int64_t x6479 = 17LL;
	uint16_t x6480 = UINT16_MAX;
	static int64_t t101 = 816LL;

    t101 = (x6477-((x6478>>x6479)+x6480));

    if (t101 != -67084LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x6538 = 198;
	static volatile uint8_t x6539 = 6U;
	volatile int8_t x6540 = INT8_MIN;
	static volatile int32_t t102 = 370215;

    t102 = (x6537-((x6538>>x6539)+x6540));

    if (t102 != 6098) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x6578 = 2U;
	int16_t x6579 = 7;
	static volatile int16_t x6580 = INT16_MIN;
	volatile int32_t t103 = 13635;

    t103 = (x6577-((x6578>>x6579)+x6580));

    if (t103 != 32788) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x6593 = 620U;
	int8_t x6596 = INT8_MIN;

    t104 = (x6593-((x6594>>x6595)+x6596));

    if (t104 != 462) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x6629 = 3U;
	volatile uint8_t x6630 = 101U;
	uint16_t x6631 = 5U;
	int32_t t105 = -15;

    t105 = (x6629-((x6630>>x6631)+x6632));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x6633 = 538262673LLU;
	static volatile int32_t x6634 = INT32_MAX;
	int8_t x6636 = 14;
	uint64_t t106 = 272559366117LLU;

    t106 = (x6633-((x6634>>x6635)+x6636));

    if (t106 != 269827204LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x6654 = 66LLU;
	int16_t x6655 = 0;
	uint32_t x6656 = 391011U;
	uint64_t t107 = 134016298857793313LLU;

    t107 = (x6653-((x6654>>x6655)+x6656));

    if (t107 != 18446744071561676891LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x6697 = 113;
	volatile uint8_t x6699 = 49U;
	int64_t x6700 = 6LL;
	volatile uint64_t t108 = 690090LLU;

    t108 = (x6697-((x6698>>x6699)+x6700));

    if (t108 != 18446744073709518956LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x6766 = 2;
	int32_t x6767 = 1;
	int8_t x6768 = INT8_MAX;

    t109 = (x6765-((x6766>>x6767)+x6768));

    if (t109 != -32896) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x6773 = 36U;
	uint32_t x6775 = 3U;
	uint64_t x6776 = 5658LLU;
	volatile uint64_t t110 = 91647LLU;

    t110 = (x6773-((x6774>>x6775)+x6776));

    if (t110 != 18446744073709544541LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6798 = 2U;
	static volatile uint8_t x6799 = 6U;
	int64_t x6800 = 1119014278293582LL;
	int64_t t111 = 908046LL;

    t111 = (x6797-((x6798>>x6799)+x6800));

    if (t111 != -1119014278228047LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x6941 = 182;
	int64_t x6942 = 2351615449773LL;
	int8_t x6943 = 3;
	int16_t x6944 = 87;
	int64_t t112 = -193689565LL;

    t112 = (x6941-((x6942>>x6943)+x6944));

    if (t112 != -293951931126LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x6959 = 1U;
	int64_t x6960 = -1LL;
	volatile int64_t t113 = -79LL;

    t113 = (x6957-((x6958>>x6959)+x6960));

    if (t113 != -65534LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x7005 = 5298836992LLU;
	uint64_t x7006 = UINT64_MAX;
	volatile int16_t x7008 = INT16_MAX;
	uint64_t t114 = 17289269932217958LLU;

    t114 = (x7005-((x7006>>x7007)+x7008));

    if (t114 != 5298804226LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x7137 = INT16_MIN;
	uint8_t x7138 = 0U;
	int8_t x7139 = 21;
	uint32_t x7140 = 389446U;
	uint32_t t115 = 33732296U;

    t115 = (x7137-((x7138>>x7139)+x7140));

    if (t115 != 4294545082U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x7189 = 49U;
	volatile uint16_t x7192 = UINT16_MAX;
	volatile uint32_t t116 = 18U;

    t116 = (x7189-((x7190>>x7191)+x7192));

    if (t116 != 4294898607U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x7193 = UINT64_MAX;
	uint8_t x7194 = 53U;
	int16_t x7195 = 0;
	uint16_t x7196 = UINT16_MAX;

    t117 = (x7193-((x7194>>x7195)+x7196));

    if (t117 != 18446744073709486027LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x7358 = UINT64_MAX;
	static volatile int64_t x7359 = 12LL;
	volatile uint64_t x7360 = 2294550544826005763LLU;

    t118 = (x7357-((x7358>>x7359)+x7360));

    if (t118 != 16147689929256175485LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x7457 = 14U;
	int64_t x7458 = INT64_MAX;
	int8_t x7460 = INT8_MIN;

    t119 = (x7457-((x7458>>x7459)+x7460));

    if (t119 != -536870769LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x7542 = 233LLU;
	static uint16_t x7543 = 3U;
	volatile uint32_t x7544 = UINT32_MAX;

    t120 = (x7541-((x7542>>x7543)+x7544));

    if (t120 != 18446744069414584286LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x7565 = 1462552013LL;
	int32_t x7567 = 0;
	uint64_t x7568 = 46850236852525LLU;
	uint64_t t121 = 18380635668187LLU;

    t121 = (x7565-((x7566>>x7567)+x7568));

    if (t121 != 18446697224935249452LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x7661 = -3;
	int64_t x7662 = 6403527645LL;
	uint32_t x7664 = 96U;
	static volatile int64_t t122 = 599LL;

    t122 = (x7661-((x7662>>x7663)+x7664));

    if (t122 != -99LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x7729 = INT32_MIN;
	uint16_t x7730 = 11937U;
	volatile int32_t x7731 = 7;
	int64_t x7732 = -14LL;
	volatile int64_t t123 = -7222152910524LL;

    t123 = (x7729-((x7730>>x7731)+x7732));

    if (t123 != -2147483727LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x7762 = 36800951577LLU;
	int8_t x7764 = -1;
	uint64_t t124 = 6294LLU;

    t124 = (x7761-((x7762>>x7763)+x7764));

    if (t124 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x7957 = INT16_MIN;
	uint32_t x7958 = 4023873U;
	static volatile uint64_t x7960 = 1002344LLU;
	uint64_t t125 = 8385443039LLU;

    t125 = (x7957-((x7958>>x7959)+x7960));

    if (t125 != 18446744073708390758LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x7973 = INT16_MIN;
	int16_t x7976 = INT16_MIN;
	volatile int32_t t126 = 0;

    t126 = (x7973-((x7974>>x7975)+x7976));

    if (t126 != -1023) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x8002 = 319916023288LLU;
	uint16_t x8003 = 28U;
	static int8_t x8004 = -6;
	static volatile uint64_t t127 = 57666LLU;

    t127 = (x8001-((x8002>>x8003)+x8004));

    if (t127 != 18446744073709517663LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x8009 = 290U;
	volatile int8_t x8010 = INT8_MAX;

    t128 = (x8009-((x8010>>x8011)+x8012));

    if (t128 != 20) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x8025 = 1U;
	static int64_t x8026 = 772764LL;
	int16_t x8027 = 10;
	int64_t t129 = -15432LL;

    t129 = (x8025-((x8026>>x8027)+x8028));

    if (t129 != -752LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x8113 = INT8_MIN;
	uint16_t x8114 = UINT16_MAX;
	uint8_t x8115 = 3U;
	int64_t x8116 = INT64_MIN;
	int64_t t130 = 41515266034993LL;

    t130 = (x8113-((x8114>>x8115)+x8116));

    if (t130 != 9223372036854767489LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x8117 = -1;
	int16_t x8118 = 14;
	uint8_t x8119 = 1U;
	static volatile int64_t t131 = -9LL;

    t131 = (x8117-((x8118>>x8119)+x8120));

    if (t131 != -7LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x8161 = 31522760098154579LLU;
	volatile int64_t x8162 = 12458937LL;
	volatile int8_t x8163 = 1;
	static volatile int64_t x8164 = -280090713146152808LL;
	uint64_t t132 = 247538419098LLU;

    t132 = (x8161-((x8162>>x8163)+x8164));

    if (t132 != 311613473238077919LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x8229 = 0U;
	int16_t x8230 = INT16_MAX;
	static int16_t x8231 = 1;
	uint64_t x8232 = 2020LLU;
	static volatile uint64_t t133 = 10926364130945230LLU;

    t133 = (x8229-((x8230>>x8231)+x8232));

    if (t133 != 18446744073709533213LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x8265 = UINT64_MAX;
	static volatile uint32_t x8266 = UINT32_MAX;
	volatile uint8_t x8267 = 25U;
	uint64_t t134 = 298799850450677158LLU;

    t134 = (x8265-((x8266>>x8267)+x8268));

    if (t134 != 18446744073709536755LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x8343 = 8U;
	int32_t x8344 = -1;
	static volatile uint32_t t135 = 14611U;

    t135 = (x8341-((x8342>>x8343)+x8344));

    if (t135 != 46563U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x8353 = 19U;
	uint16_t x8354 = 499U;
	int16_t x8355 = 0;
	static int32_t t136 = -34078;

    t136 = (x8353-((x8354>>x8355)+x8356));

    if (t136 != -479) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x8449 = 0;
	uint8_t x8450 = 1U;
	volatile uint8_t x8451 = 1U;
	volatile int32_t t137 = -25476;

    t137 = (x8449-((x8450>>x8451)+x8452));

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x8517 = 30LLU;
	int16_t x8518 = 1446;
	static int16_t x8519 = 5;
	uint16_t x8520 = 11U;
	uint64_t t138 = 5062727659138LLU;

    t138 = (x8517-((x8518>>x8519)+x8520));

    if (t138 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x8705 = INT64_MIN;
	int16_t x8707 = 5;
	int32_t x8708 = INT32_MIN;
	volatile int64_t t139 = -497LL;

    t139 = (x8705-((x8706>>x8707)+x8708));

    if (t139 != -9223372034707293183LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x8710 = 28LLU;
	uint8_t x8711 = 30U;
	volatile int16_t x8712 = INT16_MAX;
	uint64_t t140 = 4618462396708098LLU;

    t140 = (x8709-((x8710>>x8711)+x8712));

    if (t140 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x8738 = 1272U;
	volatile uint8_t x8739 = 2U;
	int32_t t141 = 105929;

    t141 = (x8737-((x8738>>x8739)+x8740));

    if (t141 != -445) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x8741 = INT16_MAX;
	uint64_t x8743 = 18LLU;
	int8_t x8744 = INT8_MIN;
	static int32_t t142 = -901053;

    t142 = (x8741-((x8742>>x8743)+x8744));

    if (t142 != 32895) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x8825 = INT16_MIN;
	uint32_t x8826 = 3U;
	static volatile uint16_t x8827 = 0U;
	uint8_t x8828 = UINT8_MAX;

    t143 = (x8825-((x8826>>x8827)+x8828));

    if (t143 != 4294934270U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x8869 = -1LL;
	int64_t x8871 = 7LL;
	int16_t x8872 = -52;
	int64_t t144 = 125119LL;

    t144 = (x8869-((x8870>>x8871)+x8872));

    if (t144 != -4294967245LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x8910 = 158;
	volatile uint32_t x8911 = 26U;
	int16_t x8912 = -1;

    t145 = (x8909-((x8910>>x8911)+x8912));

    if (t145 != -32767) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x9033 = UINT16_MAX;
	int64_t x9034 = 17997076LL;
	uint32_t x9035 = 5U;
	uint32_t x9036 = 8113296U;
	static volatile int64_t t146 = -3852242185950374LL;

    t146 = (x9033-((x9034>>x9035)+x9036));

    if (t146 != -8610169LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x9053 = UINT64_MAX;
	static volatile int32_t x9054 = 0;
	static uint16_t x9055 = 9U;
	volatile int8_t x9056 = INT8_MIN;

    t147 = (x9053-((x9054>>x9055)+x9056));

    if (t147 != 127LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x9065 = INT8_MAX;
	uint8_t x9066 = 12U;
	uint8_t x9068 = 27U;
	volatile int32_t t148 = -29291;

    t148 = (x9065-((x9066>>x9067)+x9068));

    if (t148 != 100) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x9085 = INT32_MAX;
	uint8_t x9087 = 31U;
	uint32_t x9088 = 1796U;

    t149 = (x9085-((x9086>>x9087)+x9088));

    if (t149 != 2147481851U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x9089 = INT8_MAX;
	uint64_t x9091 = 4LLU;
	static int32_t x9092 = INT32_MAX;
	volatile uint64_t t150 = 67109732036LLU;

    t150 = (x9089-((x9090>>x9091)+x9092));

    if (t150 != 18443640149945789176LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x9121 = INT32_MIN;
	volatile uint8_t x9122 = UINT8_MAX;
	volatile int8_t x9123 = 3;
	int16_t x9124 = INT16_MIN;
	volatile int32_t t151 = -976232394;

    t151 = (x9121-((x9122>>x9123)+x9124));

    if (t151 != -2147450911) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x9209 = -1LL;
	uint32_t x9210 = 59U;
	int64_t t152 = -2656514LL;

    t152 = (x9209-((x9210>>x9211)+x9212));

    if (t152 != 26552832233683293LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x9289 = 495U;
	int16_t x9290 = 1;
	volatile uint32_t t153 = 4623U;

    t153 = (x9289-((x9290>>x9291)+x9292));

    if (t153 != 4294902256U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x9310 = UINT64_MAX;
	volatile uint8_t x9311 = 1U;

    t154 = (x9309-((x9310>>x9311)+x9312));

    if (t154 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x9317 = -1LL;
	uint16_t x9319 = 3U;
	static uint8_t x9320 = 32U;
	volatile int64_t t155 = 3454911723111LL;

    t155 = (x9317-((x9318>>x9319)+x9320));

    if (t155 != -33LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x9353 = 2407U;
	uint8_t x9355 = 23U;
	int64_t x9356 = INT64_MIN;
	uint64_t t156 = 149545309LLU;

    t156 = (x9353-((x9354>>x9355)+x9356));

    if (t156 != 9223369837831522664LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x9402 = INT16_MAX;
	uint8_t x9403 = 6U;
	volatile uint64_t t157 = 1085737LLU;

    t157 = (x9401-((x9402>>x9403)+x9404));

    if (t157 != 7917868863LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x9465 = 17482365;
	uint16_t x9467 = 0U;
	uint16_t x9468 = 2517U;
	volatile uint32_t t158 = 205640U;

    t158 = (x9465-((x9466>>x9467)+x9468));

    if (t158 != 17479834U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x9474 = INT64_MAX;
	uint16_t x9475 = 14U;
	uint64_t x9476 = 476362148066LLU;
	volatile uint64_t t159 = 160220653636610287LLU;

    t159 = (x9473-((x9474>>x9475)+x9476));

    if (t159 != 18446180647393949471LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x9525 = -3;
	uint32_t x9526 = 61U;
	int8_t x9527 = 1;
	volatile uint64_t x9528 = 428LLU;
	static uint64_t t160 = 403LLU;

    t160 = (x9525-((x9526>>x9527)+x9528));

    if (t160 != 18446744073709551155LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x9569 = INT8_MIN;
	int32_t x9570 = INT32_MAX;
	int8_t x9571 = 11;
	static volatile int32_t t161 = -242249;

    t161 = (x9569-((x9570>>x9571)+x9572));

    if (t161 != -1114238) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x9618 = UINT8_MAX;
	static uint8_t x9619 = 2U;
	uint64_t x9620 = UINT64_MAX;
	uint64_t t162 = 1053724867375396928LLU;

    t162 = (x9617-((x9618>>x9619)+x9620));

    if (t162 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x9633 = 9241LLU;
	int64_t x9635 = 1LL;
	volatile int16_t x9636 = 446;

    t163 = (x9633-((x9634>>x9635)+x9636));

    if (t163 != 8747LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x9687 = 0;
	int16_t x9688 = INT16_MAX;

    t164 = (x9685-((x9686>>x9687)+x9688));

    if (t164 != 4294901773U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x9757 = 76920U;
	uint8_t x9758 = UINT8_MAX;
	uint32_t t165 = 417402U;

    t165 = (x9757-((x9758>>x9759)+x9760));

    if (t165 != 76852U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x9869 = -1;
	static volatile uint16_t x9871 = 1U;
	uint16_t x9872 = 7811U;
	volatile int64_t t166 = 1331936LL;

    t166 = (x9869-((x9870>>x9871)+x9872));

    if (t166 != -14934210820361LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x9957 = INT8_MIN;
	uint16_t x9958 = 15259U;
	volatile uint32_t x9959 = 13U;
	int8_t x9960 = 7;
	int32_t t167 = 2;

    t167 = (x9957-((x9958>>x9959)+x9960));

    if (t167 != -136) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x9985 = 1;
	uint8_t x9986 = 6U;
	int64_t t168 = -21410238LL;

    t168 = (x9985-((x9986>>x9987)+x9988));

    if (t168 != -10066LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x10005 = INT16_MAX;
	volatile int64_t x10006 = 236816288028458LL;
	static int32_t x10008 = INT32_MIN;
	int64_t t169 = -400944005127210634LL;

    t169 = (x10005-((x10006>>x10007)+x10008));

    if (t169 != 2147516415LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x10125 = 9553359LL;
	uint16_t x10126 = UINT16_MAX;
	static uint16_t x10127 = 3U;
	volatile uint64_t t170 = 207210844180382327LLU;

    t170 = (x10125-((x10126>>x10127)+x10128));

    if (t170 != 9495873LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x10205 = 30U;
	volatile uint16_t x10206 = 4944U;
	uint8_t x10207 = 1U;
	int8_t x10208 = INT8_MIN;
	static int32_t t171 = -38;

    t171 = (x10205-((x10206>>x10207)+x10208));

    if (t171 != -2314) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x10325 = 10U;
	volatile uint16_t x10326 = 4655U;
	uint8_t x10327 = 5U;
	uint16_t x10328 = 51U;
	int32_t t172 = 8756644;

    t172 = (x10325-((x10326>>x10327)+x10328));

    if (t172 != -186) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x10337 = UINT16_MAX;
	uint64_t x10338 = 10721LLU;
	uint32_t x10339 = 26U;
	uint64_t t173 = 116530079855901LLU;

    t173 = (x10337-((x10338>>x10339)+x10340));

    if (t173 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint16_t x10461 = 12U;
	uint16_t x10462 = UINT16_MAX;
	uint16_t x10463 = 5U;
	static int64_t t174 = -14564578812454LL;

    t174 = (x10461-((x10462>>x10463)+x10464));

    if (t174 != 9223372036854773773LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x10478 = UINT64_MAX;
	uint64_t x10479 = 5LLU;
	int32_t x10480 = INT32_MAX;
	uint64_t t175 = 41791655936LLU;

    t175 = (x10477-((x10478>>x10479)+x10480));

    if (t175 != 17870283319258644513LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x10529 = INT64_MIN;
	uint8_t x10530 = UINT8_MAX;
	static int16_t x10532 = INT16_MIN;
	int64_t t176 = -137056836003LL;

    t176 = (x10529-((x10530>>x10531)+x10532));

    if (t176 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x10605 = INT8_MIN;
	uint8_t x10606 = 0U;
	uint8_t x10607 = 9U;
	int8_t x10608 = INT8_MIN;
	int32_t t177 = 318740780;

    t177 = (x10605-((x10606>>x10607)+x10608));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x10997 = 1;
	uint8_t x10998 = 18U;
	int16_t x10999 = 1;
	int8_t x11000 = INT8_MIN;
	static volatile int32_t t178 = -367594760;

    t178 = (x10997-((x10998>>x10999)+x11000));

    if (t178 != 120) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x11089 = 4U;
	uint64_t x11090 = UINT64_MAX;
	int16_t x11091 = 1;
	volatile int8_t x11092 = -1;
	static uint64_t t179 = 831999881412766LLU;

    t179 = (x11089-((x11090>>x11091)+x11092));

    if (t179 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x11109 = -1;
	static uint8_t x11110 = 51U;
	uint8_t x11111 = 1U;
	static int8_t x11112 = -1;

    t180 = (x11109-((x11110>>x11111)+x11112));

    if (t180 != -25) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x11145 = UINT32_MAX;
	int32_t x11146 = INT32_MAX;
	uint16_t x11148 = UINT16_MAX;
	uint32_t t181 = 15992758U;

    t181 = (x11145-((x11146>>x11147)+x11148));

    if (t181 != 3221159937U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x11154 = 9U;
	int8_t x11155 = 0;
	static uint32_t x11156 = 80579257U;
	volatile uint32_t t182 = 20343U;

    t182 = (x11153-((x11154>>x11155)+x11156));

    if (t182 != 4214388079U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x11165 = 2111291;
	static uint32_t x11166 = 88357310U;
	static uint16_t x11167 = 3U;
	int8_t x11168 = 54;
	volatile uint32_t t183 = 4880652U;

    t183 = (x11165-((x11166>>x11167)+x11168));

    if (t183 != 4286033870U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x11289 = -1LL;
	uint8_t x11290 = 1U;
	uint8_t x11291 = 6U;
	int16_t x11292 = 0;
	int64_t t184 = -6153604866540328LL;

    t184 = (x11289-((x11290>>x11291)+x11292));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x11317 = -2;
	uint64_t x11318 = 10285738147817197LLU;
	uint8_t x11319 = 9U;

    t185 = (x11317-((x11318>>x11319)+x11320));

    if (t185 != 18446722456097258403LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x11545 = UINT16_MAX;
	uint64_t x11546 = 361103771242379976LLU;
	uint16_t x11547 = 1U;
	static int8_t x11548 = INT8_MIN;
	static volatile uint64_t t186 = 341541228490727350LLU;

    t186 = (x11545-((x11546>>x11547)+x11548));

    if (t186 != 18266192188088427291LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x11577 = INT8_MAX;
	int16_t x11579 = 0;

    t187 = (x11577-((x11578>>x11579)+x11580));

    if (t187 != -100) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x11623 = 14;
	static volatile uint64_t x11624 = UINT64_MAX;
	uint64_t t188 = 171816851243316133LLU;

    t188 = (x11621-((x11622>>x11623)+x11624));

    if (t188 != 127LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x11625 = 108850LLU;
	uint16_t x11626 = UINT16_MAX;
	static int8_t x11627 = 21;
	uint8_t x11628 = 45U;
	uint64_t t189 = 2112635792LLU;

    t189 = (x11625-((x11626>>x11627)+x11628));

    if (t189 != 108805LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x11650 = 37;
	uint32_t x11651 = 6U;
	volatile int64_t t190 = INT64_MIN;

    t190 = (x11649-((x11650>>x11651)+x11652));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x11693 = INT8_MAX;
	int32_t x11694 = INT32_MAX;
	static uint32_t x11695 = 5U;
	int32_t x11696 = INT32_MIN;

    t191 = (x11693-((x11694>>x11695)+x11696));

    if (t191 != 2080374912) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x11725 = -160441424;
	static int64_t x11726 = INT64_MAX;
	uint8_t x11728 = UINT8_MAX;
	int64_t t192 = 13852419020359LL;

    t192 = (x11725-((x11726>>x11727)+x11728));

    if (t192 != -4611686018587829582LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x11794 = 353091568U;
	int8_t x11795 = 0;
	static uint8_t x11796 = UINT8_MAX;
	volatile int64_t t193 = 86377475322459560LL;

    t193 = (x11793-((x11794>>x11795)+x11796));

    if (t193 != 9223372036501683984LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x11833 = 11727U;
	uint64_t x11834 = UINT64_MAX;
	int16_t x11835 = 3;
	uint64_t x11836 = UINT64_MAX;

    t194 = (x11833-((x11834>>x11835)+x11836));

    if (t194 != 16140901064495869393LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x11997 = -121123096888478447LL;
	uint8_t x11998 = UINT8_MAX;
	int32_t x12000 = INT32_MIN;
	volatile int64_t t195 = -7357668LL;

    t195 = (x11997-((x11998>>x11999)+x12000));

    if (t195 != -121123094740994799LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x12021 = -2;
	volatile uint32_t x12022 = 59194U;
	int8_t x12023 = 0;
	uint32_t t196 = 1663627U;

    t196 = (x12021-((x12022>>x12023)+x12024));

    if (t196 != 4294908096U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x12030 = 1313115335782587771LL;
	volatile int32_t x12032 = INT32_MIN;
	static int64_t t197 = -1064672644308345LL;

    t197 = (x12029-((x12030>>x12031)+x12032));

    if (t197 != 7910256703219671684LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x12125 = 0U;
	int32_t x12126 = INT32_MAX;
	int16_t x12127 = 0;
	volatile int8_t x12128 = INT8_MIN;
	volatile int32_t t198 = -6293688;

    t198 = (x12125-((x12126>>x12127)+x12128));

    if (t198 != -2147483519) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x12161 = INT32_MAX;
	int64_t x12162 = 3360448091LL;
	volatile uint8_t x12163 = 4U;

    t199 = (x12161-((x12162>>x12163)+x12164));

    if (t199 != 1937455595LL) { NG(); } else { ; }
	
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

