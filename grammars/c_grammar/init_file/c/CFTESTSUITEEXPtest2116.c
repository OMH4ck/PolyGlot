
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

static int16_t x2 = INT16_MAX;
uint64_t x4 = UINT64_MAX;
uint8_t x37 = 31U;
uint32_t x38 = 9902138U;
uint8_t x40 = 94U;
volatile uint8_t x124 = 3U;
volatile uint64_t t5 = 7LLU;
static volatile int8_t x275 = 0;
int64_t x276 = INT64_MAX;
uint64_t t6 = 31418428992419069LLU;
int8_t x324 = INT8_MIN;
volatile uint64_t t8 = 29483836152540LLU;
static uint64_t x430 = 71028367675LLU;
int32_t t10 = -2;
volatile int64_t t13 = -3024LL;
int64_t x757 = -11013868044151492LL;
uint16_t x758 = 883U;
uint8_t x827 = 1U;
uint64_t t16 = 225LLU;
int64_t x926 = 87684LL;
static volatile uint32_t x1021 = UINT32_MAX;
uint8_t x1155 = 24U;
int16_t x1156 = INT16_MAX;
uint64_t x1305 = 18723968LLU;
uint8_t x1307 = 24U;
static uint16_t x1311 = 7U;
int8_t x1429 = INT8_MIN;
uint16_t x1553 = UINT16_MAX;
int16_t x1554 = INT16_MAX;
volatile uint64_t x1583 = 3LLU;
static int8_t x1611 = 0;
int64_t x1612 = 0LL;
int64_t x1669 = INT64_MIN;
static int32_t x1771 = 5;
uint8_t x1833 = 1U;
int32_t x1836 = INT32_MIN;
int32_t t34 = 311;
uint32_t x1890 = 163039320U;
uint64_t x2019 = 26LLU;
int32_t x2020 = 305;
static int64_t x2066 = INT64_MAX;
volatile int64_t t40 = -2154677919779432749LL;
volatile uint32_t x2278 = 50712616U;
static int16_t x2301 = 494;
static uint64_t t46 = 217154686LLU;
int32_t x2412 = INT32_MIN;
int8_t x2457 = -1;
int8_t x2459 = 0;
static int64_t x2466 = INT64_MAX;
int32_t x2549 = INT32_MIN;
uint64_t x2570 = 22468757LLU;
uint64_t x2614 = UINT64_MAX;
volatile uint64_t t53 = 54506117944514LLU;
uint64_t t54 = 6378924206011423LLU;
uint16_t x2674 = 954U;
uint16_t x2675 = 6U;
uint16_t x2773 = UINT16_MAX;
volatile uint16_t x2775 = 1U;
int64_t x2776 = INT64_MIN;
int16_t x2829 = -1;
uint32_t x2882 = UINT32_MAX;
static volatile uint16_t x2883 = 2U;
uint16_t x2884 = UINT16_MAX;
uint8_t x2906 = 2U;
uint16_t x2937 = UINT16_MAX;
uint32_t x2938 = UINT32_MAX;
int8_t x3193 = INT8_MIN;
int32_t t63 = 24977569;
int64_t x3224 = INT64_MAX;
static int64_t t64 = 80LL;
volatile uint32_t x3271 = 10U;
int64_t x3370 = INT64_MAX;
int32_t x3397 = INT32_MIN;
uint8_t x3399 = 48U;
uint32_t x3494 = UINT32_MAX;
uint8_t x3519 = 2U;
volatile int32_t t70 = -622;
volatile int16_t x3702 = 114;
uint16_t x3758 = UINT16_MAX;
int16_t x3881 = INT16_MIN;
volatile uint16_t x3882 = UINT16_MAX;
uint16_t x3913 = 5908U;
uint32_t x3914 = 948U;
static int16_t x3918 = 0;
volatile uint64_t t78 = UINT64_MAX;
static int64_t t80 = -108343143649548LL;
static uint8_t x4223 = 15U;
volatile int32_t t83 = INT32_MAX;
static int32_t x4289 = -1;
uint8_t x4291 = 1U;
volatile int8_t x4324 = 6;
uint64_t t90 = 3844114197708652820LLU;
static int8_t x4888 = -1;
volatile int64_t t93 = -715LL;
int64_t x4929 = INT64_MIN;
int8_t x4957 = -1;
uint16_t x4960 = UINT16_MAX;
uint32_t x4986 = 165914889U;
int8_t x4987 = 18;
int64_t t96 = -1LL;
volatile uint8_t x5087 = 2U;
static uint8_t x5099 = 12U;
int8_t x5265 = INT8_MIN;
uint32_t x5350 = UINT32_MAX;
volatile uint32_t t103 = 12444U;
uint32_t x5550 = 2774908U;
uint16_t x5629 = UINT16_MAX;
uint8_t x5631 = 1U;
volatile uint32_t x5711 = 1U;
uint64_t x5870 = UINT64_MAX;
uint8_t x5871 = 42U;
uint64_t x5892 = 229860135LLU;
int64_t x5905 = INT64_MAX;
static uint8_t x5964 = UINT8_MAX;
static int64_t t114 = -12431825739800208LL;
static uint64_t x6014 = 548506101LLU;
uint16_t x6074 = 9013U;
volatile uint64_t x6148 = UINT64_MAX;
int8_t x6189 = INT8_MIN;
static uint8_t x6191 = 27U;
uint16_t x6203 = 9U;
uint64_t x6298 = UINT64_MAX;
uint64_t x6366 = UINT64_MAX;
uint16_t x6462 = UINT16_MAX;
static uint8_t x6548 = 1U;
int8_t x6551 = 4;
int16_t x6552 = INT16_MIN;
int32_t t127 = 400150;
int8_t x6628 = -1;
int8_t x6708 = INT8_MAX;
int8_t x6714 = 49;
uint64_t x6730 = 1608844LLU;
int8_t x7000 = -1;
volatile uint8_t x7297 = UINT8_MAX;
uint64_t x7322 = UINT64_MAX;
uint8_t x7323 = 18U;
uint8_t x7354 = UINT8_MAX;
uint8_t x7355 = 1U;
static volatile uint32_t x7356 = 459U;
int16_t x7469 = INT16_MIN;
int32_t x7472 = INT32_MIN;
int64_t t146 = 39LL;
int16_t x7624 = INT16_MAX;
static int32_t t148 = 1148481;
uint32_t x7660 = UINT32_MAX;
uint32_t x7791 = 55U;
volatile int64_t t151 = -8352948LL;
int32_t x7878 = INT32_MAX;
int8_t x7879 = 5;
uint32_t t152 = 10894U;
uint8_t x7893 = 17U;
static uint32_t x7895 = 1U;
int32_t t153 = -610;
volatile uint64_t x7938 = UINT64_MAX;
static uint64_t x8018 = 17299938613230LLU;
static int32_t x8020 = INT32_MIN;
int64_t x8033 = INT64_MIN;
int32_t x8036 = -23405;
int8_t x8059 = 15;
static uint16_t x8124 = UINT16_MAX;
volatile uint64_t t160 = 39124717259LLU;
uint8_t x8510 = 14U;
int64_t t162 = 343797LL;
static volatile int32_t x8522 = 4726970;
uint32_t x8586 = UINT32_MAX;
volatile uint32_t t164 = 29422U;
uint64_t x8638 = UINT64_MAX;
volatile uint32_t t166 = 182612U;
int64_t x8812 = INT64_MIN;
uint64_t t169 = 13259123438LLU;
int32_t x8865 = -1;
volatile uint64_t t170 = 22780020LLU;
uint8_t x8907 = 16U;
static uint32_t x8965 = 160977531U;
uint8_t x8967 = 62U;
int8_t x8981 = 9;
uint16_t x8982 = 19U;
volatile int16_t x9101 = -1;
volatile uint64_t t175 = 391557485633123763LLU;
uint8_t x9283 = 30U;
static int32_t t178 = -892;
static int8_t x9311 = 0;
int8_t x9312 = INT8_MAX;
static uint32_t x9382 = UINT32_MAX;
int8_t x9383 = 3;
int8_t x9425 = INT8_MIN;
uint64_t x9426 = UINT64_MAX;
int32_t x9428 = -1;
uint16_t x9489 = UINT16_MAX;
uint64_t x9533 = UINT64_MAX;
int16_t x9536 = INT16_MIN;
int64_t x9541 = 73LL;
uint32_t x9543 = 45U;
int8_t x9646 = 0;
int32_t x9722 = 5;
uint32_t x9922 = 761U;
volatile uint8_t x9923 = 24U;
static int32_t x10026 = 10118;
uint16_t x10027 = 2U;
static uint64_t x10145 = 98441634LLU;
static volatile uint64_t t193 = 33LLU;
uint8_t x10267 = 0U;
uint64_t x10268 = UINT64_MAX;
static volatile uint64_t t196 = 683071316LLU;
int16_t x10380 = INT16_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint8_t x3 = 1U;
	uint64_t t0 = 2926242893142LLU;

    t0 = (x1-((x2>>x3)&x4));

    if (t0 != 49152LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x39 = 30;
	static uint32_t t1 = 1433901078U;

    t1 = (x37-((x38>>x39)&x40));

    if (t1 != 31U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x69 = -1;
	static uint16_t x70 = 0U;
	uint32_t x71 = 19U;
	int32_t x72 = 25498;
	static volatile int32_t t2 = -7505;

    t2 = (x69-((x70>>x71)&x72));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x121 = 0U;
	int64_t x122 = 215936LL;
	uint8_t x123 = 33U;
	volatile int64_t t3 = -863576846198805LL;

    t3 = (x121-((x122>>x123)&x124));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x201 = UINT32_MAX;
	uint8_t x202 = UINT8_MAX;
	uint8_t x203 = 1U;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t4 = UINT32_MAX;

    t4 = (x201-((x202>>x203)&x204));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x213 = 6471742704979LLU;
	uint8_t x214 = 113U;
	uint8_t x215 = 13U;
	static int8_t x216 = INT8_MIN;

    t5 = (x213-((x214>>x215)&x216));

    if (t5 != 6471742704979LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x273 = 274285622021783LLU;
	volatile int8_t x274 = INT8_MAX;

    t6 = (x273-((x274>>x275)&x276));

    if (t6 != 274285622021656LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x321 = INT16_MIN;
	int16_t x322 = 5;
	static uint8_t x323 = 0U;
	volatile int32_t t7 = -14428;

    t7 = (x321-((x322>>x323)&x324));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x401 = INT16_MIN;
	uint64_t x402 = 4305824884657515034LLU;
	static int8_t x403 = 43;
	uint32_t x404 = 5416U;

    t8 = (x401-((x402>>x403)&x404));

    if (t8 != 18446744073709514712LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x429 = INT8_MIN;
	uint8_t x431 = 38U;
	int32_t x432 = 11;
	static volatile uint64_t t9 = 203LLU;

    t9 = (x429-((x430>>x431)&x432));

    if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x517 = 0U;
	static int8_t x518 = 30;
	uint16_t x519 = 6U;
	volatile int16_t x520 = -7136;

    t10 = (x517-((x518>>x519)&x520));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x549 = 487794292;
	static int64_t x550 = INT64_MAX;
	uint8_t x551 = 1U;
	int8_t x552 = -1;
	int64_t t11 = 261526508111670403LL;

    t11 = (x549-((x550>>x551)&x552));

    if (t11 != -4611686017939593611LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x725 = INT64_MIN;
	volatile uint8_t x726 = 0U;
	uint8_t x727 = 8U;
	uint16_t x728 = 1937U;
	volatile int64_t t12 = INT64_MIN;

    t12 = (x725-((x726>>x727)&x728));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x753 = INT16_MAX;
	int64_t x754 = 46265389LL;
	static uint8_t x755 = 1U;
	int64_t x756 = INT64_MAX;

    t13 = (x753-((x754>>x755)&x756));

    if (t13 != -23099927LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x759 = 3U;
	int16_t x760 = INT16_MIN;
	volatile int64_t t14 = -5958436818337262LL;

    t14 = (x757-((x758>>x759)&x760));

    if (t14 != -11013868044151492LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x825 = INT64_MAX;
	static uint8_t x826 = 2U;
	volatile int32_t x828 = INT32_MIN;
	int64_t t15 = INT64_MAX;

    t15 = (x825-((x826>>x827)&x828));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x829 = INT16_MIN;
	uint64_t x830 = UINT64_MAX;
	volatile int8_t x831 = 0;
	int32_t x832 = INT32_MIN;

    t16 = (x829-((x830>>x831)&x832));

    if (t16 != 2147450880LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x925 = INT64_MIN;
	static volatile uint16_t x927 = 14U;
	int64_t x928 = INT64_MIN;
	int64_t t17 = INT64_MIN;

    t17 = (x925-((x926>>x927)&x928));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x989 = -799;
	uint32_t x990 = UINT32_MAX;
	uint16_t x991 = 2U;
	uint64_t x992 = 104052LLU;
	volatile uint64_t t18 = 1LLU;

    t18 = (x989-((x990>>x991)&x992));

    if (t18 != 18446744073709446765LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x1022 = 0U;
	int8_t x1023 = 15;
	volatile uint16_t x1024 = 765U;
	volatile uint32_t t19 = UINT32_MAX;

    t19 = (x1021-((x1022>>x1023)&x1024));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1029 = 244;
	static volatile int8_t x1030 = 1;
	uint8_t x1031 = 30U;
	uint8_t x1032 = 0U;
	int32_t t20 = 14998;

    t20 = (x1029-((x1030>>x1031)&x1032));

    if (t20 != 244) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1069 = INT16_MIN;
	uint64_t x1070 = 531971852842LLU;
	static uint8_t x1071 = 2U;
	int32_t x1072 = -8556114;
	static uint64_t t21 = 199997123971084268LLU;

    t21 = (x1069-((x1070>>x1071)&x1072));

    if (t21 != 18446743940725108598LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x1153 = INT32_MIN;
	int64_t x1154 = INT64_MAX;
	volatile int64_t t22 = 379957360585301261LL;

    t22 = (x1153-((x1154>>x1155)&x1156));

    if (t22 != -2147516415LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x1306 = 0LLU;
	uint64_t x1308 = 21596642759903640LLU;
	volatile uint64_t t23 = 373233886834977LLU;

    t23 = (x1305-((x1306>>x1307)&x1308));

    if (t23 != 18723968LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1309 = UINT16_MAX;
	uint32_t x1310 = UINT32_MAX;
	uint64_t x1312 = 3301092LLU;
	uint64_t t24 = 1044249LLU;

    t24 = (x1309-((x1310>>x1311)&x1312));

    if (t24 != 18446744073706316059LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x1430 = 10U;
	static uint8_t x1431 = 0U;
	static uint32_t x1432 = 209060U;
	volatile uint32_t t25 = 295U;

    t25 = (x1429-((x1430>>x1431)&x1432));

    if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x1433 = UINT64_MAX;
	uint64_t x1434 = 883861323337999475LLU;
	volatile int32_t x1435 = 6;
	static int8_t x1436 = -40;
	static uint64_t t26 = 5LLU;

    t26 = (x1433-((x1434>>x1435)&x1436));

    if (t26 != 18432933740532395375LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1529 = 12143;
	int16_t x1530 = INT16_MAX;
	uint8_t x1531 = 16U;
	static int32_t x1532 = INT32_MAX;
	volatile int32_t t27 = -12870433;

    t27 = (x1529-((x1530>>x1531)&x1532));

    if (t27 != 12143) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x1555 = 6U;
	uint32_t x1556 = 41135150U;
	volatile uint32_t t28 = 410047554U;

    t28 = (x1553-((x1554>>x1555)&x1556));

    if (t28 != 65489U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x1581 = -1;
	uint32_t x1582 = UINT32_MAX;
	int64_t x1584 = INT64_MIN;
	volatile int64_t t29 = -499898400773LL;

    t29 = (x1581-((x1582>>x1583)&x1584));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1609 = -502;
	static int16_t x1610 = INT16_MAX;
	static int64_t t30 = -11343444051445LL;

    t30 = (x1609-((x1610>>x1611)&x1612));

    if (t30 != -502LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1670 = 91;
	uint32_t x1671 = 4U;
	static uint64_t x1672 = 49LLU;
	volatile uint64_t t31 = 1195374439461854234LLU;

    t31 = (x1669-((x1670>>x1671)&x1672));

    if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1713 = 524;
	int8_t x1714 = INT8_MAX;
	static volatile int64_t x1715 = 0LL;
	static uint32_t x1716 = 169090U;
	static uint32_t t32 = 10U;

    t32 = (x1713-((x1714>>x1715)&x1716));

    if (t32 != 522U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x1769 = 963U;
	int64_t x1770 = 19LL;
	int32_t x1772 = 122;
	static int64_t t33 = -1LL;

    t33 = (x1769-((x1770>>x1771)&x1772));

    if (t33 != 963LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1834 = INT32_MAX;
	int64_t x1835 = 1LL;

    t34 = (x1833-((x1834>>x1835)&x1836));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1889 = -1;
	volatile uint8_t x1891 = 3U;
	int64_t x1892 = -4548996134719LL;
	static int64_t t35 = 735405448885197702LL;

    t35 = (x1889-((x1890>>x1891)&x1892));

    if (t35 != -3311618LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1897 = -1;
	uint8_t x1898 = UINT8_MAX;
	static uint8_t x1899 = 28U;
	int32_t x1900 = -4566070;
	int32_t t36 = -249341842;

    t36 = (x1897-((x1898>>x1899)&x1900));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1937 = 0;
	uint16_t x1938 = UINT16_MAX;
	int32_t x1939 = 1;
	int16_t x1940 = 1;
	volatile int32_t t37 = 14;

    t37 = (x1937-((x1938>>x1939)&x1940));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1981 = -57023088;
	static uint8_t x1982 = 7U;
	int8_t x1983 = 1;
	volatile int64_t x1984 = INT64_MAX;
	int64_t t38 = -11837838501771LL;

    t38 = (x1981-((x1982>>x1983)&x1984));

    if (t38 != -57023091LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2017 = 61U;
	volatile int8_t x2018 = INT8_MAX;
	static volatile int32_t t39 = -384621;

    t39 = (x2017-((x2018>>x2019)&x2020));

    if (t39 != 61) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2065 = 177522195;
	static int8_t x2067 = 1;
	int32_t x2068 = 111119065;

    t40 = (x2065-((x2066>>x2067)&x2068));

    if (t40 != 66403130LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2117 = 2892;
	uint8_t x2118 = 4U;
	int16_t x2119 = 4;
	volatile int8_t x2120 = -6;
	int32_t t41 = -2522;

    t41 = (x2117-((x2118>>x2119)&x2120));

    if (t41 != 2892) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2149 = UINT8_MAX;
	uint32_t x2150 = 45022U;
	int16_t x2151 = 0;
	uint8_t x2152 = 1U;
	uint32_t t42 = 102U;

    t42 = (x2149-((x2150>>x2151)&x2152));

    if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x2213 = INT16_MAX;
	static uint64_t x2214 = 366LLU;
	volatile uint8_t x2215 = 0U;
	uint8_t x2216 = 11U;
	uint64_t t43 = 67423809053704LLU;

    t43 = (x2213-((x2214>>x2215)&x2216));

    if (t43 != 32757LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2277 = 0;
	int8_t x2279 = 10;
	static uint64_t x2280 = 1609367941LLU;
	volatile uint64_t t44 = 5427776139558227185LLU;

    t44 = (x2277-((x2278>>x2279)&x2280));

    if (t44 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x2302 = INT8_MAX;
	int16_t x2303 = 31;
	uint16_t x2304 = UINT16_MAX;
	volatile int32_t t45 = 13412751;

    t45 = (x2301-((x2302>>x2303)&x2304));

    if (t45 != 494) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x2373 = 50LLU;
	int64_t x2374 = 44699651486315347LL;
	uint8_t x2375 = 1U;
	int64_t x2376 = -1LL;

    t46 = (x2373-((x2374>>x2375)&x2376));

    if (t46 != 18424394247966393993LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2409 = 2U;
	uint8_t x2410 = 0U;
	uint8_t x2411 = 0U;
	int32_t t47 = 11;

    t47 = (x2409-((x2410>>x2411)&x2412));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x2458 = 48668596793332LLU;
	int16_t x2460 = 1590;
	uint64_t t48 = 3197778797LLU;

    t48 = (x2457-((x2458>>x2459)&x2460));

    if (t48 != 18446744073709550027LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2465 = 2U;
	uint16_t x2467 = 12U;
	int64_t x2468 = -1LL;
	int64_t t49 = -4371926044941LL;

    t49 = (x2465-((x2466>>x2467)&x2468));

    if (t49 != -2251799813685245LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x2550 = 151831171176LLU;
	static volatile uint16_t x2551 = 58U;
	uint8_t x2552 = 2U;
	volatile uint64_t t50 = 182LLU;

    t50 = (x2549-((x2550>>x2551)&x2552));

    if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x2569 = INT8_MIN;
	int8_t x2571 = 0;
	static volatile uint32_t x2572 = 6759953U;
	uint64_t t51 = 188386963299LLU;

    t51 = (x2569-((x2570>>x2571)&x2572));

    if (t51 != 18446744073704963951LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x2601 = INT16_MIN;
	int8_t x2602 = 6;
	static uint16_t x2603 = 3U;
	volatile int32_t x2604 = -1;
	int32_t t52 = -13430;

    t52 = (x2601-((x2602>>x2603)&x2604));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x2613 = UINT16_MAX;
	volatile int8_t x2615 = 2;
	volatile int32_t x2616 = -1;

    t53 = (x2613-((x2614>>x2615)&x2616));

    if (t53 != 13835058055282229248LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x2641 = 51LLU;
	volatile uint64_t x2642 = 1604123LLU;
	uint8_t x2643 = 0U;
	static int16_t x2644 = INT16_MIN;

    t54 = (x2641-((x2642>>x2643)&x2644));

    if (t54 != 18446744073707978803LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2673 = 257417LLU;
	uint32_t x2676 = UINT32_MAX;
	static volatile uint64_t t55 = 21398495111574LLU;

    t55 = (x2673-((x2674>>x2675)&x2676));

    if (t55 != 257403LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x2717 = UINT64_MAX;
	uint16_t x2718 = 7330U;
	static int8_t x2719 = 16;
	int32_t x2720 = INT32_MIN;
	uint64_t t56 = UINT64_MAX;

    t56 = (x2717-((x2718>>x2719)&x2720));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x2774 = 84U;
	volatile int64_t t57 = 709970012724LL;

    t57 = (x2773-((x2774>>x2775)&x2776));

    if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x2830 = INT8_MAX;
	uint8_t x2831 = 23U;
	int8_t x2832 = INT8_MAX;
	static int32_t t58 = 22947;

    t58 = (x2829-((x2830>>x2831)&x2832));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x2881 = UINT16_MAX;
	uint32_t t59 = 5U;

    t59 = (x2881-((x2882>>x2883)&x2884));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x2905 = 22U;
	int16_t x2907 = 0;
	static int64_t x2908 = INT64_MAX;
	int64_t t60 = 0LL;

    t60 = (x2905-((x2906>>x2907)&x2908));

    if (t60 != 20LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2939 = 3;
	int16_t x2940 = INT16_MAX;
	uint32_t t61 = 6U;

    t61 = (x2937-((x2938>>x2939)&x2940));

    if (t61 != 32768U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x3157 = -1LL;
	int8_t x3158 = INT8_MAX;
	static uint8_t x3159 = 7U;
	int64_t x3160 = -8209150213174495LL;
	int64_t t62 = -2885590403980087LL;

    t62 = (x3157-((x3158>>x3159)&x3160));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x3194 = 16;
	static int32_t x3195 = 1;
	int8_t x3196 = INT8_MIN;

    t63 = (x3193-((x3194>>x3195)&x3196));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3221 = INT8_MIN;
	static volatile uint16_t x3222 = 1242U;
	volatile uint8_t x3223 = 23U;

    t64 = (x3221-((x3222>>x3223)&x3224));

    if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3269 = 1535466114LL;
	static uint16_t x3270 = 18U;
	int64_t x3272 = -417416151LL;
	int64_t t65 = 1385842374584519685LL;

    t65 = (x3269-((x3270>>x3271)&x3272));

    if (t65 != 1535466114LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3369 = UINT32_MAX;
	uint16_t x3371 = 57U;
	uint64_t x3372 = 16234153367309981LLU;
	static volatile uint64_t t66 = 6753853LLU;

    t66 = (x3369-((x3370>>x3371)&x3372));

    if (t66 != 4294967266LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x3398 = 102658873638103LLU;
	uint32_t x3400 = 11401174U;
	uint64_t t67 = 9054415371651LLU;

    t67 = (x3397-((x3398>>x3399)&x3400));

    if (t67 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x3489 = -56;
	int8_t x3490 = INT8_MAX;
	static uint16_t x3491 = 0U;
	volatile int32_t x3492 = INT32_MIN;
	volatile int32_t t68 = 34977;

    t68 = (x3489-((x3490>>x3491)&x3492));

    if (t68 != -56) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x3493 = UINT32_MAX;
	volatile uint8_t x3495 = 8U;
	static volatile uint8_t x3496 = 63U;
	uint32_t t69 = 380988455U;

    t69 = (x3493-((x3494>>x3495)&x3496));

    if (t69 != 4294967232U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3517 = INT16_MAX;
	int16_t x3518 = 1364;
	static int16_t x3520 = INT16_MIN;

    t70 = (x3517-((x3518>>x3519)&x3520));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x3689 = UINT64_MAX;
	int8_t x3690 = 0;
	uint8_t x3691 = 2U;
	int32_t x3692 = -241464;
	uint64_t t71 = UINT64_MAX;

    t71 = (x3689-((x3690>>x3691)&x3692));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3701 = -443;
	volatile uint16_t x3703 = 3U;
	volatile int8_t x3704 = INT8_MAX;
	int32_t t72 = 0;

    t72 = (x3701-((x3702>>x3703)&x3704));

    if (t72 != -457) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x3757 = UINT8_MAX;
	int16_t x3759 = 0;
	static uint8_t x3760 = 119U;
	static volatile int32_t t73 = -2;

    t73 = (x3757-((x3758>>x3759)&x3760));

    if (t73 != 136) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3765 = -1;
	int32_t x3766 = 19923;
	volatile int8_t x3767 = 17;
	uint64_t x3768 = 443337222236050406LLU;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x3765-((x3766>>x3767)&x3768));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x3883 = 3U;
	int8_t x3884 = -49;
	int32_t t75 = 57;

    t75 = (x3881-((x3882>>x3883)&x3884));

    if (t75 != -40911) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x3915 = 0;
	static uint8_t x3916 = 1U;
	uint32_t t76 = 4U;

    t76 = (x3913-((x3914>>x3915)&x3916));

    if (t76 != 5908U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x3917 = -7115234LL;
	static int8_t x3919 = 15;
	int64_t x3920 = -1LL;
	volatile int64_t t77 = -896277969453LL;

    t77 = (x3917-((x3918>>x3919)&x3920));

    if (t77 != -7115234LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x3945 = -1;
	uint16_t x3946 = 6785U;
	static volatile uint8_t x3947 = 14U;
	uint64_t x3948 = 6LLU;

    t78 = (x3945-((x3946>>x3947)&x3948));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x3957 = UINT32_MAX;
	int16_t x3958 = INT16_MAX;
	uint8_t x3959 = 1U;
	volatile int64_t x3960 = -281767387523335135LL;
	volatile int64_t t79 = -1LL;

    t79 = (x3957-((x3958>>x3959)&x3960));

    if (t79 != 4294951902LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x3985 = INT32_MIN;
	static uint32_t x3986 = 128274U;
	uint8_t x3987 = 6U;
	static volatile int64_t x3988 = 4861773661925512LL;

    t80 = (x3985-((x3986>>x3987)&x3988));

    if (t80 != -2147483776LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x4017 = -4;
	uint8_t x4018 = 5U;
	uint8_t x4019 = 1U;
	int16_t x4020 = INT16_MIN;
	static int32_t t81 = 1987072;

    t81 = (x4017-((x4018>>x4019)&x4020));

    if (t81 != -4) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4033 = 36U;
	uint16_t x4034 = UINT16_MAX;
	volatile uint8_t x4035 = 9U;
	int16_t x4036 = -11;
	int32_t t82 = 202;

    t82 = (x4033-((x4034>>x4035)&x4036));

    if (t82 != -81) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4221 = INT32_MAX;
	uint8_t x4222 = 109U;
	volatile int8_t x4224 = INT8_MAX;

    t83 = (x4221-((x4222>>x4223)&x4224));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x4241 = -721;
	uint32_t x4242 = 472754747U;
	static uint8_t x4243 = 17U;
	uint32_t x4244 = 12451U;
	uint32_t t84 = 450U;

    t84 = (x4241-((x4242>>x4243)&x4244));

    if (t84 != 4294966573U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4290 = 19832U;
	int64_t x4292 = INT64_MIN;
	int64_t t85 = 987957LL;

    t85 = (x4289-((x4290>>x4291)&x4292));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x4321 = INT16_MAX;
	volatile uint16_t x4322 = 12803U;
	static uint8_t x4323 = 0U;
	volatile int32_t t86 = -10;

    t86 = (x4321-((x4322>>x4323)&x4324));

    if (t86 != 32765) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x4345 = 26;
	uint64_t x4346 = 380795LLU;
	int8_t x4347 = 5;
	int32_t x4348 = -1;
	uint64_t t87 = 1963975780506924134LLU;

    t87 = (x4345-((x4346>>x4347)&x4348));

    if (t87 != 18446744073709539743LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x4481 = INT16_MIN;
	uint64_t x4482 = 36271732LLU;
	uint16_t x4483 = 1U;
	int32_t x4484 = -1;
	volatile uint64_t t88 = 2464LLU;

    t88 = (x4481-((x4482>>x4483)&x4484));

    if (t88 != 18446744073691382982LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x4565 = UINT16_MAX;
	static uint16_t x4566 = 0U;
	uint8_t x4567 = 4U;
	int32_t x4568 = INT32_MIN;
	volatile int32_t t89 = -190;

    t89 = (x4565-((x4566>>x4567)&x4568));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x4585 = -1;
	static uint64_t x4586 = UINT64_MAX;
	uint8_t x4587 = 24U;
	int16_t x4588 = -1;

    t90 = (x4585-((x4586>>x4587)&x4588));

    if (t90 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x4677 = 1036835576659043LLU;
	uint32_t x4678 = 75410540U;
	uint8_t x4679 = 10U;
	int64_t x4680 = INT64_MIN;
	uint64_t t91 = 13LLU;

    t91 = (x4677-((x4678>>x4679)&x4680));

    if (t91 != 1036835576659043LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x4793 = -3;
	volatile int16_t x4794 = INT16_MAX;
	static int8_t x4795 = 0;
	uint8_t x4796 = UINT8_MAX;
	volatile int32_t t92 = 0;

    t92 = (x4793-((x4794>>x4795)&x4796));

    if (t92 != -258) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x4885 = 26;
	int64_t x4886 = INT64_MAX;
	volatile uint64_t x4887 = 2LLU;

    t93 = (x4885-((x4886>>x4887)&x4888));

    if (t93 != -2305843009213693925LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x4930 = 64863522184666LLU;
	uint16_t x4931 = 2U;
	int16_t x4932 = INT16_MAX;
	volatile uint64_t t94 = 1440884963719910LLU;

    t94 = (x4929-((x4930>>x4931)&x4932));

    if (t94 != 9223372036854761610LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x4958 = 95LLU;
	uint8_t x4959 = 1U;
	uint64_t t95 = 26116535104LLU;

    t95 = (x4957-((x4958>>x4959)&x4960));

    if (t95 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x4985 = 12621LL;
	static volatile int32_t x4988 = -1;

    t96 = (x4985-((x4986>>x4987)&x4988));

    if (t96 != 11989LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x5077 = UINT16_MAX;
	uint64_t x5078 = UINT64_MAX;
	static uint16_t x5079 = 1U;
	int8_t x5080 = -1;
	static volatile uint64_t t97 = 711742121549747LLU;

    t97 = (x5077-((x5078>>x5079)&x5080));

    if (t97 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5085 = 138U;
	static uint32_t x5086 = 0U;
	static int64_t x5088 = INT64_MIN;
	int64_t t98 = -16046LL;

    t98 = (x5085-((x5086>>x5087)&x5088));

    if (t98 != 138LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x5097 = INT16_MIN;
	int64_t x5098 = INT64_MAX;
	static int8_t x5100 = -1;
	static int64_t t99 = -1833767979363750575LL;

    t99 = (x5097-((x5098>>x5099)&x5100));

    if (t99 != -2251799813718015LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5129 = UINT16_MAX;
	volatile uint16_t x5130 = 172U;
	volatile int8_t x5131 = 7;
	int64_t x5132 = -4525355408634860LL;
	volatile int64_t t100 = -153845163454186LL;

    t100 = (x5129-((x5130>>x5131)&x5132));

    if (t100 != 65535LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x5266 = INT8_MAX;
	int8_t x5267 = 0;
	static int8_t x5268 = INT8_MIN;
	volatile int32_t t101 = -5192;

    t101 = (x5265-((x5266>>x5267)&x5268));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5349 = 9LLU;
	uint16_t x5351 = 28U;
	int64_t x5352 = INT64_MIN;
	volatile uint64_t t102 = 214386867LLU;

    t102 = (x5349-((x5350>>x5351)&x5352));

    if (t102 != 9LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x5529 = 1U;
	uint32_t x5530 = 1096833U;
	int8_t x5531 = 2;
	static int16_t x5532 = INT16_MAX;

    t103 = (x5529-((x5530>>x5531)&x5532));

    if (t103 != 4294955233U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5549 = INT16_MAX;
	int8_t x5551 = 1;
	uint16_t x5552 = UINT16_MAX;
	volatile uint32_t t104 = 83U;

    t104 = (x5549-((x5550>>x5551)&x5552));

    if (t104 != 21569U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x5573 = -51330235;
	static uint64_t x5574 = UINT64_MAX;
	uint8_t x5575 = 11U;
	int8_t x5576 = INT8_MIN;
	static volatile uint64_t t105 = 7442LLU;

    t105 = (x5573-((x5574>>x5575)&x5576));

    if (t105 != 18437736874403480517LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x5630 = UINT32_MAX;
	uint32_t x5632 = UINT32_MAX;
	uint32_t t106 = 296945341U;

    t106 = (x5629-((x5630>>x5631)&x5632));

    if (t106 != 2147549184U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5705 = UINT32_MAX;
	uint64_t x5706 = 14LLU;
	uint8_t x5707 = 3U;
	int8_t x5708 = 0;
	uint64_t t107 = 164510LLU;

    t107 = (x5705-((x5706>>x5707)&x5708));

    if (t107 != 4294967295LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x5709 = 2;
	uint16_t x5710 = 962U;
	static uint64_t x5712 = UINT64_MAX;
	volatile uint64_t t108 = 286766380461830233LLU;

    t108 = (x5709-((x5710>>x5711)&x5712));

    if (t108 != 18446744073709551137LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x5869 = INT16_MIN;
	static int64_t x5872 = -1LL;
	uint64_t t109 = 4524012875564558588LLU;

    t109 = (x5869-((x5870>>x5871)&x5872));

    if (t109 != 18446744073705324545LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x5889 = 3U;
	volatile int8_t x5890 = 0;
	uint8_t x5891 = 7U;
	uint64_t t110 = 949308248526151LLU;

    t110 = (x5889-((x5890>>x5891)&x5892));

    if (t110 != 3LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x5901 = UINT16_MAX;
	uint16_t x5902 = 3U;
	uint8_t x5903 = 11U;
	volatile int8_t x5904 = -1;
	volatile int32_t t111 = 95;

    t111 = (x5901-((x5902>>x5903)&x5904));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5906 = 1;
	uint16_t x5907 = 24U;
	uint16_t x5908 = 1056U;
	int64_t t112 = INT64_MAX;

    t112 = (x5905-((x5906>>x5907)&x5908));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x5957 = 994U;
	volatile uint32_t x5958 = 57U;
	int8_t x5959 = 16;
	int32_t x5960 = INT32_MAX;
	uint32_t t113 = 47945239U;

    t113 = (x5957-((x5958>>x5959)&x5960));

    if (t113 != 994U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x5961 = -1LL;
	uint32_t x5962 = UINT32_MAX;
	static volatile uint64_t x5963 = 1LLU;

    t114 = (x5961-((x5962>>x5963)&x5964));

    if (t114 != -256LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x6013 = -1;
	int8_t x6015 = 0;
	static int32_t x6016 = 396042;
	static volatile uint64_t t115 = 518405437736005LLU;

    t115 = (x6013-((x6014>>x6015)&x6016));

    if (t115 != 18446744073709549311LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x6073 = 17662416336571386LLU;
	uint8_t x6075 = 0U;
	uint64_t x6076 = UINT64_MAX;
	uint64_t t116 = 7921570864LLU;

    t116 = (x6073-((x6074>>x6075)&x6076));

    if (t116 != 17662416336562373LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x6145 = -1;
	int32_t x6146 = INT32_MAX;
	static int32_t x6147 = 1;
	uint64_t t117 = 111LLU;

    t117 = (x6145-((x6146>>x6147)&x6148));

    if (t117 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x6190 = UINT32_MAX;
	int8_t x6192 = -1;
	uint32_t t118 = 3U;

    t118 = (x6189-((x6190>>x6191)&x6192));

    if (t118 != 4294967137U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x6201 = 6222U;
	uint8_t x6202 = UINT8_MAX;
	uint16_t x6204 = 15904U;
	int32_t t119 = 125;

    t119 = (x6201-((x6202>>x6203)&x6204));

    if (t119 != 6222) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6297 = 31;
	int64_t x6299 = 0LL;
	int32_t x6300 = 52160868;
	uint64_t t120 = 10820LLU;

    t120 = (x6297-((x6298>>x6299)&x6300));

    if (t120 != 18446744073657390779LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x6353 = INT16_MAX;
	uint8_t x6354 = 1U;
	volatile uint8_t x6355 = 2U;
	uint32_t x6356 = UINT32_MAX;
	static volatile uint32_t t121 = 1U;

    t121 = (x6353-((x6354>>x6355)&x6356));

    if (t121 != 32767U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x6365 = 1096141;
	int8_t x6367 = 0;
	int32_t x6368 = INT32_MIN;
	volatile uint64_t t122 = 23368090682LLU;

    t122 = (x6365-((x6366>>x6367)&x6368));

    if (t122 != 2148579789LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x6369 = INT32_MIN;
	static int64_t x6370 = INT64_MAX;
	uint8_t x6371 = 33U;
	int64_t x6372 = INT64_MIN;
	volatile int64_t t123 = 198557LL;

    t123 = (x6369-((x6370>>x6371)&x6372));

    if (t123 != -2147483648LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x6429 = -1;
	static int64_t x6430 = INT64_MAX;
	uint8_t x6431 = 1U;
	static int8_t x6432 = -1;
	int64_t t124 = -2092956820166650275LL;

    t124 = (x6429-((x6430>>x6431)&x6432));

    if (t124 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x6461 = INT16_MIN;
	volatile uint32_t x6463 = 2U;
	int64_t x6464 = INT64_MIN;
	static int64_t t125 = -10482305892928538LL;

    t125 = (x6461-((x6462>>x6463)&x6464));

    if (t125 != -32768LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x6545 = 0LLU;
	static int32_t x6546 = 15;
	int16_t x6547 = 15;
	uint64_t t126 = 636LLU;

    t126 = (x6545-((x6546>>x6547)&x6548));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x6549 = UINT16_MAX;
	uint16_t x6550 = 7567U;

    t127 = (x6549-((x6550>>x6551)&x6552));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x6569 = -1LL;
	uint32_t x6570 = 32823828U;
	uint32_t x6571 = 11U;
	volatile int32_t x6572 = -1;
	int64_t t128 = 954LL;

    t128 = (x6569-((x6570>>x6571)&x6572));

    if (t128 != -16028LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x6625 = -18;
	int32_t x6626 = 15334;
	volatile int8_t x6627 = 1;
	volatile int32_t t129 = 10573;

    t129 = (x6625-((x6626>>x6627)&x6628));

    if (t129 != -7685) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x6685 = 86907U;
	uint16_t x6686 = UINT16_MAX;
	int8_t x6687 = 0;
	uint16_t x6688 = 5U;
	static volatile uint32_t t130 = 31931U;

    t130 = (x6685-((x6686>>x6687)&x6688));

    if (t130 != 86902U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x6705 = 18U;
	uint64_t x6706 = 3744730880959LLU;
	uint8_t x6707 = 11U;
	uint64_t t131 = 1825LLU;

    t131 = (x6705-((x6706>>x6707)&x6708));

    if (t131 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x6713 = 5210;
	int32_t x6715 = 1;
	volatile int16_t x6716 = -1;
	static volatile int32_t t132 = 36887;

    t132 = (x6713-((x6714>>x6715)&x6716));

    if (t132 != 5186) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x6729 = 15286151U;
	uint16_t x6731 = 37U;
	int64_t x6732 = -1LL;
	volatile uint64_t t133 = 1817947058328177683LLU;

    t133 = (x6729-((x6730>>x6731)&x6732));

    if (t133 != 15286151LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x6733 = INT16_MAX;
	static uint64_t x6734 = 325124016666299LLU;
	uint16_t x6735 = 4U;
	volatile int16_t x6736 = -1;
	static volatile uint64_t t134 = 36660760235LLU;

    t134 = (x6733-((x6734>>x6735)&x6736));

    if (t134 != 18446723753458542740LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x6769 = INT32_MIN;
	uint16_t x6770 = UINT16_MAX;
	uint32_t x6771 = 13U;
	int64_t x6772 = INT64_MAX;
	volatile int64_t t135 = 142146802733482691LL;

    t135 = (x6769-((x6770>>x6771)&x6772));

    if (t135 != -2147483655LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x6849 = 224U;
	uint16_t x6850 = 1320U;
	uint16_t x6851 = 7U;
	int16_t x6852 = -1;
	volatile int32_t t136 = -67;

    t136 = (x6849-((x6850>>x6851)&x6852));

    if (t136 != 214) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x6869 = 106258255412779LL;
	uint8_t x6870 = 20U;
	uint8_t x6871 = 0U;
	volatile int64_t x6872 = INT64_MIN;
	volatile int64_t t137 = 153263725LL;

    t137 = (x6869-((x6870>>x6871)&x6872));

    if (t137 != 106258255412779LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x6985 = UINT64_MAX;
	int8_t x6986 = INT8_MAX;
	volatile uint8_t x6987 = 9U;
	static volatile uint64_t x6988 = 313LLU;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (x6985-((x6986>>x6987)&x6988));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x6997 = UINT16_MAX;
	int16_t x6998 = 384;
	static uint16_t x6999 = 0U;
	volatile int32_t t139 = 17325376;

    t139 = (x6997-((x6998>>x6999)&x7000));

    if (t139 != 65151) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x7061 = 2U;
	uint8_t x7062 = 41U;
	uint16_t x7063 = 1U;
	static uint16_t x7064 = 1U;
	int32_t t140 = 728381520;

    t140 = (x7061-((x7062>>x7063)&x7064));

    if (t140 != 2) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x7298 = UINT64_MAX;
	volatile uint8_t x7299 = 13U;
	volatile int8_t x7300 = INT8_MIN;
	volatile uint64_t t141 = 654579506633875LLU;

    t141 = (x7297-((x7298>>x7299)&x7300));

    if (t141 != 18444492273895866751LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x7321 = INT8_MAX;
	static uint8_t x7324 = UINT8_MAX;
	volatile uint64_t t142 = 8994434039704750LLU;

    t142 = (x7321-((x7322>>x7323)&x7324));

    if (t142 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x7353 = INT16_MIN;
	volatile uint32_t t143 = 861309710U;

    t143 = (x7353-((x7354>>x7355)&x7356));

    if (t143 != 4294934453U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x7377 = INT8_MIN;
	static uint32_t x7378 = UINT32_MAX;
	static uint8_t x7379 = 5U;
	uint64_t x7380 = 1169267675497LLU;
	volatile uint64_t t144 = 119728LLU;

    t144 = (x7377-((x7378>>x7379)&x7380));

    if (t144 != 18446744073612504599LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x7405 = UINT8_MAX;
	int64_t x7406 = 1565533057792LL;
	static int16_t x7407 = 55;
	int16_t x7408 = INT16_MIN;
	volatile int64_t t145 = 2051066305339785100LL;

    t145 = (x7405-((x7406>>x7407)&x7408));

    if (t145 != 255LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x7470 = 22945688309052LL;
	volatile uint8_t x7471 = 21U;

    t146 = (x7469-((x7470>>x7471)&x7472));

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x7505 = -1;
	uint32_t x7506 = UINT32_MAX;
	uint8_t x7507 = 19U;
	int8_t x7508 = INT8_MIN;
	static uint32_t t147 = 748584356U;

    t147 = (x7505-((x7506>>x7507)&x7508));

    if (t147 != 4294959231U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7621 = -1;
	uint16_t x7622 = UINT16_MAX;
	volatile uint32_t x7623 = 2U;

    t148 = (x7621-((x7622>>x7623)&x7624));

    if (t148 != -16384) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x7657 = 60278U;
	static int16_t x7658 = 0;
	uint8_t x7659 = 12U;
	volatile uint32_t t149 = 142603224U;

    t149 = (x7657-((x7658>>x7659)&x7660));

    if (t149 != 60278U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x7789 = INT8_MIN;
	static uint64_t x7790 = UINT64_MAX;
	int8_t x7792 = INT8_MAX;
	volatile uint64_t t150 = 29090037901361107LLU;

    t150 = (x7789-((x7790>>x7791)&x7792));

    if (t150 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7861 = INT64_MAX;
	uint8_t x7862 = 20U;
	uint16_t x7863 = 0U;
	uint16_t x7864 = UINT16_MAX;

    t151 = (x7861-((x7862>>x7863)&x7864));

    if (t151 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x7877 = INT16_MAX;
	uint32_t x7880 = 4U;

    t152 = (x7877-((x7878>>x7879)&x7880));

    if (t152 != 32763U) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x7894 = 2U;
	static uint16_t x7896 = 1U;

    t153 = (x7893-((x7894>>x7895)&x7896));

    if (t153 != 16) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x7937 = INT32_MIN;
	uint32_t x7939 = 11U;
	volatile int16_t x7940 = INT16_MAX;
	uint64_t t154 = 20LLU;

    t154 = (x7937-((x7938>>x7939)&x7940));

    if (t154 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x8017 = -8;
	uint16_t x8019 = 0U;
	uint64_t t155 = 108357LLU;

    t155 = (x8017-((x8018>>x8019)&x8020));

    if (t155 != 18446726775728766968LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x8021 = INT32_MIN;
	int8_t x8022 = 53;
	uint8_t x8023 = 12U;
	uint8_t x8024 = 1U;
	static int32_t t156 = INT32_MIN;

    t156 = (x8021-((x8022>>x8023)&x8024));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x8034 = UINT64_MAX;
	volatile int32_t x8035 = 13;
	volatile uint64_t t157 = 14844194277LLU;

    t157 = (x8033-((x8034>>x8035)&x8036));

    if (t157 != 9221120237041113965LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x8057 = INT8_MIN;
	int64_t x8058 = 75331LL;
	uint32_t x8060 = 500517243U;
	int64_t t158 = 0LL;

    t158 = (x8057-((x8058>>x8059)&x8060));

    if (t158 != -130LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x8061 = UINT32_MAX;
	int64_t x8062 = 208417843565112139LL;
	volatile int32_t x8063 = 1;
	int64_t x8064 = 6LL;
	volatile int64_t t159 = -4472225485602539LL;

    t159 = (x8061-((x8062>>x8063)&x8064));

    if (t159 != 4294967291LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x8121 = 898U;
	uint64_t x8122 = 204250005460299LLU;
	uint8_t x8123 = 10U;

    t160 = (x8121-((x8122>>x8123)&x8124));

    if (t160 != 18446744073709535789LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x8429 = INT32_MIN;
	uint8_t x8430 = 2U;
	static volatile uint32_t x8431 = 19U;
	int16_t x8432 = INT16_MIN;
	int32_t t161 = INT32_MIN;

    t161 = (x8429-((x8430>>x8431)&x8432));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x8509 = INT8_MIN;
	uint32_t x8511 = 21U;
	volatile int64_t x8512 = -1LL;

    t162 = (x8509-((x8510>>x8511)&x8512));

    if (t162 != -128LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x8521 = -1;
	static volatile int8_t x8523 = 16;
	int8_t x8524 = 14;
	volatile int32_t t163 = 66;

    t163 = (x8521-((x8522>>x8523)&x8524));

    if (t163 != -9) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x8585 = 5218;
	uint16_t x8587 = 5U;
	int16_t x8588 = -1;

    t164 = (x8585-((x8586>>x8587)&x8588));

    if (t164 != 4160754787U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x8637 = -1;
	uint64_t x8639 = 1LLU;
	uint32_t x8640 = 44U;
	volatile uint64_t t165 = 598LLU;

    t165 = (x8637-((x8638>>x8639)&x8640));

    if (t165 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x8689 = 8;
	uint32_t x8690 = 286U;
	volatile int8_t x8691 = 0;
	static int16_t x8692 = INT16_MIN;

    t166 = (x8689-((x8690>>x8691)&x8692));

    if (t166 != 8U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x8717 = -1;
	int32_t x8718 = INT32_MAX;
	volatile int32_t x8719 = 23;
	int32_t x8720 = INT32_MIN;
	volatile int32_t t167 = 17538685;

    t167 = (x8717-((x8718>>x8719)&x8720));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x8809 = -552029776046814948LL;
	uint16_t x8810 = 6844U;
	int8_t x8811 = 0;
	int64_t t168 = 108698LL;

    t168 = (x8809-((x8810>>x8811)&x8812));

    if (t168 != -552029776046814948LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x8845 = 43079962560LLU;
	uint64_t x8846 = 23546356LLU;
	static uint8_t x8847 = 0U;
	int32_t x8848 = 17279520;

    t169 = (x8845-((x8846>>x8847)&x8848));

    if (t169 != 43062724512LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x8866 = 815356;
	int16_t x8867 = 0;
	uint64_t x8868 = 73893338837LLU;

    t170 = (x8865-((x8866>>x8867)&x8868));

    if (t170 != 18446744073709530923LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x8905 = -1;
	uint8_t x8906 = UINT8_MAX;
	static int8_t x8908 = INT8_MIN;
	volatile int32_t t171 = -245;

    t171 = (x8905-((x8906>>x8907)&x8908));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x8966 = 4591224101855586193LL;
	int32_t x8968 = INT32_MAX;
	int64_t t172 = -5011787LL;

    t172 = (x8965-((x8966>>x8967)&x8968));

    if (t172 != 160977531LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x8983 = 13;
	int16_t x8984 = 83;
	static int32_t t173 = 2043575;

    t173 = (x8981-((x8982>>x8983)&x8984));

    if (t173 != 9) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x9037 = UINT8_MAX;
	uint16_t x9038 = 45U;
	int32_t x9039 = 0;
	int64_t x9040 = INT64_MIN;
	volatile int64_t t174 = 92198476915598081LL;

    t174 = (x9037-((x9038>>x9039)&x9040));

    if (t174 != 255LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x9102 = UINT64_MAX;
	int16_t x9103 = 7;
	volatile int64_t x9104 = -1LL;

    t175 = (x9101-((x9102>>x9103)&x9104));

    if (t175 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x9169 = 49;
	int32_t x9170 = 26;
	static volatile uint16_t x9171 = 12U;
	int32_t x9172 = 121;
	volatile int32_t t176 = -290802779;

    t176 = (x9169-((x9170>>x9171)&x9172));

    if (t176 != 49) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x9237 = -1;
	volatile uint16_t x9238 = 15025U;
	static int8_t x9239 = 18;
	uint64_t x9240 = 115010520014LLU;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = (x9237-((x9238>>x9239)&x9240));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x9281 = 1;
	static uint16_t x9282 = UINT16_MAX;
	uint8_t x9284 = 1U;

    t178 = (x9281-((x9282>>x9283)&x9284));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x9309 = INT8_MIN;
	int16_t x9310 = 25;
	int32_t t179 = -5;

    t179 = (x9309-((x9310>>x9311)&x9312));

    if (t179 != -153) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x9381 = INT32_MIN;
	int32_t x9384 = INT32_MAX;
	volatile uint32_t t180 = 8669475U;

    t180 = (x9381-((x9382>>x9383)&x9384));

    if (t180 != 1610612737U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x9385 = 12U;
	static int32_t x9386 = INT32_MAX;
	uint16_t x9387 = 5U;
	int64_t x9388 = INT64_MIN;
	volatile int64_t t181 = 187LL;

    t181 = (x9385-((x9386>>x9387)&x9388));

    if (t181 != 12LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x9427 = 0U;
	static volatile uint64_t t182 = 1589529790LLU;

    t182 = (x9425-((x9426>>x9427)&x9428));

    if (t182 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x9490 = UINT16_MAX;
	static uint16_t x9491 = 10U;
	int32_t x9492 = 240148711;
	static int32_t t183 = -1;

    t183 = (x9489-((x9490>>x9491)&x9492));

    if (t183 != 65496) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x9534 = INT64_MAX;
	int8_t x9535 = 1;
	static uint64_t t184 = 34873LLU;

    t184 = (x9533-((x9534>>x9535)&x9536));

    if (t184 != 13835058055282196479LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x9542 = 66504894972629LL;
	static int64_t x9544 = 1LL;
	volatile int64_t t185 = 25LL;

    t185 = (x9541-((x9542>>x9543)&x9544));

    if (t185 != 72LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x9561 = 2;
	int64_t x9562 = INT64_MAX;
	uint64_t x9563 = 0LLU;
	int64_t x9564 = -1LL;
	volatile int64_t t186 = -9779LL;

    t186 = (x9561-((x9562>>x9563)&x9564));

    if (t186 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x9613 = 1U;
	uint8_t x9614 = 28U;
	static int8_t x9615 = 2;
	int32_t x9616 = 9;
	volatile int32_t t187 = 60695876;

    t187 = (x9613-((x9614>>x9615)&x9616));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x9645 = INT64_MAX;
	uint16_t x9647 = 5U;
	uint64_t x9648 = 372932562633988303LLU;
	uint64_t t188 = 218366255605LLU;

    t188 = (x9645-((x9646>>x9647)&x9648));

    if (t188 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x9721 = 44LL;
	uint64_t x9723 = 0LLU;
	int64_t x9724 = INT64_MIN;
	volatile int64_t t189 = 21LL;

    t189 = (x9721-((x9722>>x9723)&x9724));

    if (t189 != 44LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x9921 = -2185LL;
	int8_t x9924 = INT8_MIN;
	int64_t t190 = -62307185597833LL;

    t190 = (x9921-((x9922>>x9923)&x9924));

    if (t190 != -2185LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x9981 = INT32_MIN;
	uint64_t x9982 = UINT64_MAX;
	volatile int8_t x9983 = 4;
	int8_t x9984 = INT8_MAX;
	uint64_t t191 = 14250032404408174LLU;

    t191 = (x9981-((x9982>>x9983)&x9984));

    if (t191 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x10025 = 1856623192921719LL;
	uint32_t x10028 = 481U;
	volatile int64_t t192 = -1315644221074LL;

    t192 = (x10025-((x10026>>x10027)&x10028));

    if (t192 != 1856623192921238LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x10146 = INT16_MAX;
	int32_t x10147 = 15;
	int32_t x10148 = 12502521;

    t193 = (x10145-((x10146>>x10147)&x10148));

    if (t193 != 98441634LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x10193 = UINT32_MAX;
	uint32_t x10194 = 2U;
	int8_t x10195 = 14;
	int32_t x10196 = INT32_MIN;
	static uint32_t t194 = UINT32_MAX;

    t194 = (x10193-((x10194>>x10195)&x10196));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x10201 = -1LL;
	uint16_t x10202 = 33U;
	uint16_t x10203 = 3U;
	int16_t x10204 = -1;
	int64_t t195 = -15385028419417LL;

    t195 = (x10201-((x10202>>x10203)&x10204));

    if (t195 != -5LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x10265 = 1514153786821LL;
	int8_t x10266 = 1;

    t196 = (x10265-((x10266>>x10267)&x10268));

    if (t196 != 1514153786820LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x10285 = 6;
	uint16_t x10286 = 6U;
	uint8_t x10287 = 1U;
	volatile int64_t x10288 = 8548LL;
	volatile int64_t t197 = -12895LL;

    t197 = (x10285-((x10286>>x10287)&x10288));

    if (t197 != 6LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x10377 = INT8_MIN;
	int32_t x10378 = INT32_MAX;
	int32_t x10379 = 3;
	volatile int32_t t198 = 3;

    t198 = (x10377-((x10378>>x10379)&x10380));

    if (t198 != -32895) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x10441 = INT8_MIN;
	uint32_t x10442 = UINT32_MAX;
	uint16_t x10443 = 0U;
	uint16_t x10444 = 14U;
	uint32_t t199 = 681611U;

    t199 = (x10441-((x10442>>x10443)&x10444));

    if (t199 != 4294967154U) { NG(); } else { ; }
	
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

