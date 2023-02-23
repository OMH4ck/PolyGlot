
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

static int8_t x10 = INT8_MIN;
uint8_t x24 = 37U;
int32_t x141 = INT32_MIN;
static int16_t x245 = INT16_MIN;
uint32_t x246 = UINT32_MAX;
uint8_t x247 = UINT8_MAX;
uint32_t x254 = 12U;
int64_t x255 = INT64_MIN;
int32_t x284 = 1;
uint64_t x286 = 428827023816664LLU;
int64_t x319 = INT64_MAX;
static uint64_t x370 = 108281399467296LLU;
uint64_t x371 = 4LLU;
int16_t x372 = 12;
volatile uint64_t t9 = 3101LLU;
int8_t x425 = INT8_MIN;
volatile int16_t x557 = -1;
volatile uint8_t x559 = 7U;
volatile int32_t x654 = 379;
static volatile int64_t x655 = INT64_MIN;
volatile uint16_t x656 = 3U;
int64_t t13 = 4395790376374LL;
volatile int64_t x719 = INT64_MIN;
uint64_t x730 = UINT64_MAX;
int16_t x818 = -1;
int32_t x937 = INT32_MAX;
static int16_t x938 = INT16_MIN;
int8_t x980 = 6;
int8_t x1002 = -2;
int64_t x1029 = -1LL;
int64_t t23 = -2242088778LL;
int64_t x1033 = INT64_MIN;
static uint64_t x1351 = 51627922867584LLU;
uint8_t x1352 = 59U;
int8_t x1378 = INT8_MIN;
int64_t t32 = -2252308182LL;
uint8_t x1574 = 19U;
volatile int32_t t34 = 0;
static int64_t x1722 = -1LL;
uint32_t x1723 = UINT32_MAX;
int64_t t36 = -245816898LL;
int64_t x1790 = -1LL;
uint32_t x1793 = 913551603U;
static int16_t x1890 = INT16_MIN;
uint32_t x1892 = 30U;
volatile uint16_t x1909 = 2U;
int32_t t41 = -3248;
int8_t x1920 = 22;
int16_t x1925 = INT16_MIN;
volatile uint32_t t43 = 2U;
uint32_t x1965 = 5U;
volatile int8_t x1968 = 0;
volatile uint32_t t44 = 193U;
uint16_t x1991 = 9U;
uint16_t x1992 = 1U;
int8_t x2038 = 0;
uint8_t x2039 = 1U;
uint8_t x2040 = 6U;
int16_t x2088 = 46;
int32_t x2137 = INT32_MIN;
uint64_t x2139 = UINT64_MAX;
uint32_t x2171 = 6U;
int16_t x2237 = 59;
int32_t x2277 = -335367425;
volatile int64_t t56 = INT64_MIN;
int32_t x2329 = INT32_MIN;
int64_t x2330 = -26LL;
volatile int64_t t57 = -6115LL;
static int64_t x2349 = 4277080961632062645LL;
volatile int16_t x2352 = 27;
int16_t x2555 = 1;
uint32_t x2648 = 12U;
uint64_t x2656 = 6LLU;
uint8_t x2727 = UINT8_MAX;
uint8_t x2738 = 104U;
int64_t t67 = INT64_MIN;
volatile int8_t x2786 = INT8_MIN;
static int16_t x2798 = 65;
volatile uint16_t x2800 = 7U;
uint32_t x2820 = 0U;
uint32_t x2895 = 1654U;
int16_t x2943 = 4806;
uint8_t x3045 = 2U;
int32_t t78 = 199047530;
volatile int16_t x3073 = 2;
uint8_t x3100 = 29U;
int32_t x3139 = INT32_MIN;
int32_t x3220 = 0;
int64_t t85 = 8033LL;
int8_t x3277 = INT8_MAX;
uint8_t x3278 = 2U;
int16_t x3279 = INT16_MAX;
int64_t t87 = 1LL;
uint8_t x3306 = 2U;
volatile uint64_t x3319 = 1502122605678695LLU;
int8_t x3320 = 1;
int32_t x3354 = INT32_MIN;
int64_t x3355 = INT64_MIN;
uint32_t x3363 = 123784U;
uint8_t x3470 = 4U;
int8_t x3489 = 41;
static volatile int64_t x3491 = 13808636950469LL;
uint32_t x3492 = 15U;
uint8_t x3564 = 38U;
volatile int32_t t96 = -53196189;
uint32_t x3620 = 1U;
uint32_t x3657 = UINT32_MAX;
uint32_t x3660 = 12U;
static volatile int64_t t100 = 0LL;
uint32_t x3700 = 32U;
volatile int64_t t101 = 349039299339191017LL;
int64_t x3729 = -40481539241595LL;
static volatile uint64_t t102 = 1221LLU;
static volatile uint64_t t104 = UINT64_MAX;
int8_t x3781 = -1;
volatile int16_t x3782 = -1;
static volatile uint16_t x3784 = 1U;
uint32_t x3885 = 5U;
int8_t x4080 = 60;
volatile uint64_t t108 = 1024828904748483LLU;
int16_t x4170 = -1;
int64_t x4171 = INT64_MIN;
int8_t x4212 = 11;
volatile int64_t t110 = -8517842072LL;
int32_t x4261 = INT32_MAX;
int64_t x4262 = INT64_MAX;
int32_t t113 = 16;
volatile int16_t x4293 = -112;
uint16_t x4294 = 211U;
uint16_t x4296 = 2U;
int64_t t115 = -440670757572630LL;
volatile uint64_t x4309 = UINT64_MAX;
int32_t x4311 = INT32_MIN;
uint64_t x4322 = 20379430717LLU;
int32_t x4379 = 23136;
int32_t x4394 = INT32_MAX;
int64_t x4481 = 220870652LL;
static int8_t x4482 = 0;
uint16_t x4502 = 18U;
uint64_t x4503 = UINT64_MAX;
int8_t x4507 = -1;
uint32_t t127 = 10498868U;
uint32_t x4675 = UINT32_MAX;
int8_t x4819 = -4;
int64_t x4895 = -1LL;
int16_t x5010 = INT16_MIN;
int8_t x5049 = INT8_MIN;
volatile int64_t t135 = -32418335883347407LL;
uint8_t x5179 = 4U;
uint32_t x5217 = UINT32_MAX;
static int64_t x5218 = -1LL;
int8_t x5219 = INT8_MIN;
volatile int8_t x5240 = 16;
volatile uint64_t t142 = 1738592045LLU;
static volatile uint64_t x5311 = 11062119988227554LLU;
uint64_t t144 = UINT64_MAX;
volatile uint32_t x5588 = 30U;
int64_t t151 = 53245879733457LL;
volatile int64_t t153 = 622119529591LL;
static volatile int64_t x5658 = INT64_MAX;
int8_t x5659 = INT8_MAX;
static int8_t x5660 = 0;
static volatile int64_t t156 = -746287898LL;
volatile uint32_t x5722 = UINT32_MAX;
int64_t t158 = 991841LL;
int16_t x6046 = -7;
volatile uint64_t x6047 = 21913121LLU;
uint8_t x6096 = 2U;
uint64_t t163 = UINT64_MAX;
volatile uint16_t x6222 = UINT16_MAX;
static int32_t x6305 = INT32_MIN;
int32_t t165 = INT32_MIN;
int32_t t166 = 670023524;
static volatile uint64_t t167 = 6LLU;
int32_t t168 = 88579;
int8_t x6418 = INT8_MIN;
volatile uint64_t t169 = 2985339LLU;
static uint32_t x6438 = 64848U;
int16_t x6441 = INT16_MIN;
uint32_t x6444 = 0U;
int8_t x6545 = INT8_MIN;
static uint8_t x6546 = 2U;
int32_t t176 = -6022;
static uint8_t x6608 = 0U;
static volatile int16_t x6633 = -1;
int64_t t182 = 95821994306371361LL;
int16_t x6998 = 12194;
static uint32_t x7000 = 0U;
uint32_t x7042 = 326532U;
uint8_t x7068 = 1U;
int64_t x7091 = INT64_MAX;
int64_t t190 = 0LL;
uint32_t x7237 = 207430316U;
int64_t x7238 = -1LL;
int8_t x7240 = 0;
int8_t x7300 = 18;
int16_t x7408 = 8;
volatile int64_t t197 = 31651183711LL;
uint8_t x7536 = 22U;


void f0(void) {
    	uint64_t x9 = 6211348787065064886LLU;
	uint32_t x11 = 9629U;
	uint8_t x12 = 0U;
	uint64_t t0 = 3626858733199LLU;

    t0 = (x9|((x10/x11)<<x12));

    if (t0 != 6211348787065507838LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x21 = 1589718208791LLU;
	static uint64_t x22 = 773LLU;
	static uint64_t x23 = UINT64_MAX;
	volatile uint64_t t1 = 603874950278229291LLU;

    t1 = (x21|((x22/x23)<<x24));

    if (t1 != 1589718208791LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x81 = UINT8_MAX;
	int32_t x82 = -1;
	int64_t x83 = -1LL;
	volatile uint64_t x84 = 38LLU;
	int64_t t2 = 31161553119195964LL;

    t2 = (x81|((x82/x83)<<x84));

    if (t2 != 274877907199LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x142 = 1;
	int64_t x143 = INT64_MIN;
	static uint8_t x144 = 2U;
	int64_t t3 = 1LL;

    t3 = (x141|((x142/x143)<<x144));

    if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x248 = 25U;
	uint32_t t4 = 101230860U;

    t4 = (x245|((x246/x247)<<x248));

    if (t4 != 4294934528U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x253 = UINT8_MAX;
	int8_t x256 = 13;
	volatile int64_t t5 = -126088090360385LL;

    t5 = (x253|((x254/x255)<<x256));

    if (t5 != 255LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -22;
	volatile int32_t t6 = -301;

    t6 = (x281|((x282/x283)<<x284));

    if (t6 != -118) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x285 = 32412U;
	int8_t x287 = -1;
	uint8_t x288 = 49U;
	static volatile uint64_t t7 = 6LLU;

    t7 = (x285|((x286/x287)<<x288));

    if (t7 != 32412LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x317 = 4488930U;
	int32_t x318 = -1;
	uint8_t x320 = 15U;
	volatile int64_t t8 = 22084902236053836LL;

    t8 = (x317|((x318/x319)<<x320));

    if (t8 != 4488930LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x369 = 4U;

    t9 = (x369|((x370/x371)<<x372));

    if (t9 != 110880153054511108LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x426 = -6;
	volatile uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 14U;
	uint32_t t10 = 16943882U;

    t10 = (x425|((x426/x427)<<x428));

    if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x558 = -1;
	static uint8_t x560 = 3U;
	volatile int32_t t11 = -2839363;

    t11 = (x557|((x558/x559)<<x560));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x601 = INT16_MIN;
	int32_t x602 = -1;
	uint8_t x603 = 5U;
	static volatile uint16_t x604 = 5U;
	volatile int32_t t12 = -1697436;

    t12 = (x601|((x602/x603)<<x604));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x653 = -1;

    t13 = (x653|((x654/x655)<<x656));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x657 = UINT32_MAX;
	uint16_t x658 = UINT16_MAX;
	int32_t x659 = INT32_MIN;
	int8_t x660 = 30;
	volatile uint32_t t14 = UINT32_MAX;

    t14 = (x657|((x658/x659)<<x660));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x705 = 1733;
	uint8_t x706 = 37U;
	uint64_t x707 = 13307120LLU;
	uint8_t x708 = 0U;
	volatile uint64_t t15 = 109577040845LLU;

    t15 = (x705|((x706/x707)<<x708));

    if (t15 != 1733LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x717 = 56;
	uint16_t x718 = 14407U;
	uint8_t x720 = 30U;
	int64_t t16 = -8852261455969LL;

    t16 = (x717|((x718/x719)<<x720));

    if (t16 != 56LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x729 = INT32_MIN;
	static int32_t x731 = 8;
	uint16_t x732 = 2U;
	volatile uint64_t t17 = 4444866039LLU;

    t17 = (x729|((x730/x731)<<x732));

    if (t17 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x817 = -8;
	int16_t x819 = -7;
	int8_t x820 = 9;
	static volatile int32_t t18 = 3;

    t18 = (x817|((x818/x819)<<x820));

    if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x921 = -1;
	uint64_t x922 = 30670143310328392LLU;
	int16_t x923 = INT16_MIN;
	uint8_t x924 = 4U;
	volatile uint64_t t19 = UINT64_MAX;

    t19 = (x921|((x922/x923)<<x924));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x939 = 102286U;
	uint16_t x940 = 19U;
	volatile uint32_t t20 = 0U;

    t20 = (x937|((x938/x939)<<x940));

    if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x977 = 717U;
	int8_t x978 = INT8_MIN;
	volatile int8_t x979 = INT8_MIN;
	volatile int32_t t21 = 26;

    t21 = (x977|((x978/x979)<<x980));

    if (t21 != 717) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1001 = -1;
	volatile int32_t x1003 = INT32_MIN;
	uint8_t x1004 = 21U;
	volatile int32_t t22 = 641945;

    t22 = (x1001|((x1002/x1003)<<x1004));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1030 = 2U;
	int64_t x1031 = 1481369490106LL;
	uint16_t x1032 = 42U;

    t23 = (x1029|((x1030/x1031)<<x1032));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1034 = 785267LLU;
	static int8_t x1035 = -49;
	static int16_t x1036 = 56;
	static uint64_t t24 = 1487LLU;

    t24 = (x1033|((x1034/x1035)<<x1036));

    if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x1077 = INT8_MIN;
	static int32_t x1078 = 21724;
	static volatile int32_t x1079 = INT32_MAX;
	uint16_t x1080 = 0U;
	int32_t t25 = -1;

    t25 = (x1077|((x1078/x1079)<<x1080));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1101 = INT16_MIN;
	static int32_t x1102 = 10170;
	uint16_t x1103 = 5833U;
	int8_t x1104 = 3;
	volatile int32_t t26 = 49126424;

    t26 = (x1101|((x1102/x1103)<<x1104));

    if (t26 != -32760) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1145 = -1698;
	volatile int32_t x1146 = INT32_MIN;
	static int32_t x1147 = INT32_MIN;
	uint64_t x1148 = 26LLU;
	static int32_t t27 = -1;

    t27 = (x1145|((x1146/x1147)<<x1148));

    if (t27 != -1698) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1217 = INT32_MAX;
	uint64_t x1218 = UINT64_MAX;
	int8_t x1219 = INT8_MIN;
	static int64_t x1220 = 1LL;
	volatile uint64_t t28 = 5115099167182615947LLU;

    t28 = (x1217|((x1218/x1219)<<x1220));

    if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x1321 = INT16_MIN;
	static int16_t x1322 = INT16_MIN;
	static int32_t x1323 = -376325931;
	int8_t x1324 = 0;
	volatile int32_t t29 = 14;

    t29 = (x1321|((x1322/x1323)<<x1324));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x1349 = INT64_MIN;
	static volatile int64_t x1350 = INT64_MIN;
	volatile uint64_t t30 = 7566371926LLU;

    t30 = (x1349|((x1350/x1351)<<x1352));

    if (t30 != 14987979559889010688LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x1377 = 234882;
	uint64_t x1379 = UINT64_MAX;
	volatile int8_t x1380 = 0;
	uint64_t t31 = 3LLU;

    t31 = (x1377|((x1378/x1379)<<x1380));

    if (t31 != 234882LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1457 = 28009663972LL;
	volatile uint16_t x1458 = 2747U;
	int8_t x1459 = INT8_MAX;
	uint32_t x1460 = 3U;

    t32 = (x1457|((x1458/x1459)<<x1460));

    if (t32 != 28009663980LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x1469 = 17950595;
	int16_t x1470 = INT16_MIN;
	uint16_t x1471 = UINT16_MAX;
	static int8_t x1472 = 9;
	volatile int32_t t33 = -66;

    t33 = (x1469|((x1470/x1471)<<x1472));

    if (t33 != 17950595) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x1573 = 22954;
	static volatile int32_t x1575 = INT32_MIN;
	uint16_t x1576 = 16U;

    t34 = (x1573|((x1574/x1575)<<x1576));

    if (t34 != 22954) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1681 = -38;
	static volatile int32_t x1682 = 2886;
	static volatile uint32_t x1683 = UINT32_MAX;
	uint16_t x1684 = 3U;
	volatile uint32_t t35 = 1106996155U;

    t35 = (x1681|((x1682/x1683)<<x1684));

    if (t35 != 4294967258U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1721 = INT32_MAX;
	int16_t x1724 = 18;

    t36 = (x1721|((x1722/x1723)<<x1724));

    if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1753 = UINT32_MAX;
	static int8_t x1754 = 2;
	volatile uint16_t x1755 = 23U;
	uint16_t x1756 = 13U;
	static volatile uint32_t t37 = UINT32_MAX;

    t37 = (x1753|((x1754/x1755)<<x1756));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1789 = 48196U;
	int32_t x1791 = 129;
	uint16_t x1792 = 2U;
	volatile int64_t t38 = 461653404949704LL;

    t38 = (x1789|((x1790/x1791)<<x1792));

    if (t38 != 48196LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1794 = -45;
	static int8_t x1795 = INT8_MAX;
	uint32_t x1796 = 4U;
	uint32_t t39 = 0U;

    t39 = (x1793|((x1794/x1795)<<x1796));

    if (t39 != 913551603U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1889 = 6LLU;
	uint32_t x1891 = UINT32_MAX;
	static uint64_t t40 = 8705016198017583LLU;

    t40 = (x1889|((x1890/x1891)<<x1892));

    if (t40 != 6LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1910 = -100736;
	volatile int32_t x1911 = INT32_MAX;
	uint32_t x1912 = 27U;

    t41 = (x1909|((x1910/x1911)<<x1912));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x1917 = 5;
	volatile int32_t x1918 = -53977494;
	uint32_t x1919 = UINT32_MAX;
	uint32_t t42 = 5337U;

    t42 = (x1917|((x1918/x1919)<<x1920));

    if (t42 != 5U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x1926 = 0U;
	uint16_t x1927 = 92U;
	uint8_t x1928 = 16U;

    t43 = (x1925|((x1926/x1927)<<x1928));

    if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x1966 = -700;
	int16_t x1967 = -15;

    t44 = (x1965|((x1966/x1967)<<x1968));

    if (t44 != 47U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x1989 = 2U;
	static volatile uint16_t x1990 = UINT16_MAX;
	volatile int32_t t45 = 0;

    t45 = (x1989|((x1990/x1991)<<x1992));

    if (t45 != 14562) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2037 = INT16_MIN;
	int32_t t46 = -409;

    t46 = (x2037|((x2038/x2039)<<x2040));

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x2049 = 138U;
	uint8_t x2050 = UINT8_MAX;
	uint8_t x2051 = 5U;
	volatile uint16_t x2052 = 16U;
	volatile int32_t t47 = 488019290;

    t47 = (x2049|((x2050/x2051)<<x2052));

    if (t47 != 3342474) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2085 = 0;
	volatile int16_t x2086 = INT16_MAX;
	int64_t x2087 = -106853236416471LL;
	volatile int64_t t48 = 0LL;

    t48 = (x2085|((x2086/x2087)<<x2088));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x2138 = 3722;
	uint32_t x2140 = 2U;
	static volatile uint64_t t49 = 4546LLU;

    t49 = (x2137|((x2138/x2139)<<x2140));

    if (t49 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2145 = INT8_MIN;
	uint16_t x2146 = UINT16_MAX;
	int16_t x2147 = INT16_MAX;
	uint8_t x2148 = 0U;
	static int32_t t50 = 0;

    t50 = (x2145|((x2146/x2147)<<x2148));

    if (t50 != -126) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2157 = 7694846843968722LL;
	int64_t x2158 = 13649702960035790LL;
	volatile int32_t x2159 = INT32_MAX;
	int16_t x2160 = 1;
	volatile int64_t t51 = 10LL;

    t51 = (x2157|((x2158/x2159)<<x2160));

    if (t51 != 7694846848269782LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x2169 = INT64_MIN;
	volatile int8_t x2170 = INT8_MIN;
	static int64_t x2172 = 0LL;
	static int64_t t52 = -6476377530846401LL;

    t52 = (x2169|((x2170/x2171)<<x2172));

    if (t52 != -9223372036138947947LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x2181 = UINT32_MAX;
	volatile int32_t x2182 = 1;
	volatile int8_t x2183 = INT8_MIN;
	uint8_t x2184 = 5U;
	uint32_t t53 = UINT32_MAX;

    t53 = (x2181|((x2182/x2183)<<x2184));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x2238 = INT16_MAX;
	uint8_t x2239 = UINT8_MAX;
	int16_t x2240 = 20;
	volatile int32_t t54 = -47;

    t54 = (x2237|((x2238/x2239)<<x2240));

    if (t54 != 134217787) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2278 = UINT64_MAX;
	volatile int8_t x2279 = INT8_MIN;
	int32_t x2280 = 39;
	static uint64_t t55 = 65854254056LLU;

    t55 = (x2277|((x2278/x2279)<<x2280));

    if (t55 != 18446744073374184191LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2309 = INT64_MIN;
	int8_t x2310 = INT8_MIN;
	volatile int64_t x2311 = INT64_MIN;
	int8_t x2312 = 0;

    t56 = (x2309|((x2310/x2311)<<x2312));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2331 = -1;
	static volatile uint8_t x2332 = 1U;

    t57 = (x2329|((x2330/x2331)<<x2332));

    if (t57 != -2147483596LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2350 = -7;
	volatile uint32_t x2351 = 709781U;
	volatile int64_t t58 = -5LL;

    t58 = (x2349|((x2350/x2351)<<x2352));

    if (t58 != 4277080962034715829LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2517 = UINT8_MAX;
	uint8_t x2518 = 0U;
	int8_t x2519 = -1;
	static int8_t x2520 = 8;
	static int32_t t59 = 8594;

    t59 = (x2517|((x2518/x2519)<<x2520));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2553 = INT16_MIN;
	static uint32_t x2554 = UINT32_MAX;
	int8_t x2556 = 3;
	uint32_t t60 = 124115480U;

    t60 = (x2553|((x2554/x2555)<<x2556));

    if (t60 != 4294967288U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x2597 = 193U;
	volatile uint32_t x2598 = UINT32_MAX;
	uint16_t x2599 = UINT16_MAX;
	static uint8_t x2600 = 12U;
	volatile uint32_t t61 = 12U;

    t61 = (x2597|((x2598/x2599)<<x2600));

    if (t61 != 268439745U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x2645 = 30U;
	uint8_t x2646 = 45U;
	int8_t x2647 = INT8_MIN;
	int32_t t62 = -23654329;

    t62 = (x2645|((x2646/x2647)<<x2648));

    if (t62 != 30) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x2653 = 237553104451797379LLU;
	int16_t x2654 = INT16_MAX;
	volatile int16_t x2655 = INT16_MIN;
	volatile uint64_t t63 = 23LLU;

    t63 = (x2653|((x2654/x2655)<<x2656));

    if (t63 != 237553104451797379LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2665 = UINT32_MAX;
	int16_t x2666 = INT16_MIN;
	int16_t x2667 = INT16_MIN;
	uint8_t x2668 = 1U;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = (x2665|((x2666/x2667)<<x2668));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2685 = -9;
	int16_t x2686 = 4;
	int32_t x2687 = INT32_MIN;
	int8_t x2688 = 23;
	static volatile int32_t t65 = -50194784;

    t65 = (x2685|((x2686/x2687)<<x2688));

    if (t65 != -9) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2725 = INT8_MIN;
	int32_t x2726 = INT32_MAX;
	volatile int8_t x2728 = 4;
	volatile int32_t t66 = 5220;

    t66 = (x2725|((x2726/x2727)<<x2728));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x2737 = INT64_MIN;
	int8_t x2739 = INT8_MAX;
	static int8_t x2740 = 0;

    t67 = (x2737|((x2738/x2739)<<x2740));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2741 = -13;
	volatile int16_t x2742 = INT16_MIN;
	int64_t x2743 = -1LL;
	uint8_t x2744 = 40U;
	int64_t t68 = 450433929603705LL;

    t68 = (x2741|((x2742/x2743)<<x2744));

    if (t68 != -13LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x2785 = 1930072091U;
	int8_t x2787 = INT8_MIN;
	static volatile int8_t x2788 = 9;
	volatile uint32_t t69 = 211375U;

    t69 = (x2785|((x2786/x2787)<<x2788));

    if (t69 != 1930072603U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2797 = -40;
	int16_t x2799 = INT16_MAX;
	int32_t t70 = 109886;

    t70 = (x2797|((x2798/x2799)<<x2800));

    if (t70 != -40) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2817 = INT64_MIN;
	static int16_t x2818 = -1;
	volatile uint8_t x2819 = 104U;
	int64_t t71 = INT64_MIN;

    t71 = (x2817|((x2818/x2819)<<x2820));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x2885 = 14U;
	int16_t x2886 = -1;
	static int16_t x2887 = INT16_MIN;
	int8_t x2888 = 3;
	int32_t t72 = 353189454;

    t72 = (x2885|((x2886/x2887)<<x2888));

    if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x2893 = 145034476U;
	int64_t x2894 = 3264929541LL;
	volatile uint64_t x2896 = 5LLU;
	volatile int64_t t73 = -26781537512022LL;

    t73 = (x2893|((x2894/x2895)<<x2896));

    if (t73 != 199744748LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2913 = UINT64_MAX;
	int8_t x2914 = INT8_MAX;
	volatile int64_t x2915 = -56849553238729LL;
	uint8_t x2916 = 2U;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x2913|((x2914/x2915)<<x2916));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2941 = -1;
	volatile uint32_t x2942 = 1088U;
	uint16_t x2944 = 2U;
	uint32_t t75 = UINT32_MAX;

    t75 = (x2941|((x2942/x2943)<<x2944));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x2961 = INT32_MIN;
	static uint64_t x2962 = UINT64_MAX;
	static uint8_t x2963 = 58U;
	uint16_t x2964 = 21U;
	uint64_t t76 = 240630291922LLU;

    t76 = (x2961|((x2962/x2963)<<x2964));

    if (t76 != 18446744072375762944LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x3025 = 347738U;
	static uint64_t x3026 = 4875241092LLU;
	int8_t x3027 = -1;
	int16_t x3028 = 1;
	static volatile uint64_t t77 = 94709069LLU;

    t77 = (x3025|((x3026/x3027)<<x3028));

    if (t77 != 347738LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x3046 = -1;
	int16_t x3047 = -129;
	int8_t x3048 = 6;

    t78 = (x3045|((x3046/x3047)<<x3048));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x3074 = -1;
	volatile uint32_t x3075 = 338686U;
	int64_t x3076 = 1LL;
	volatile uint32_t t79 = 528385813U;

    t79 = (x3073|((x3074/x3075)<<x3076));

    if (t79 != 25362U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x3097 = 21;
	uint16_t x3098 = 1U;
	static int8_t x3099 = -16;
	static int32_t t80 = -3450;

    t80 = (x3097|((x3098/x3099)<<x3100));

    if (t80 != 21) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x3125 = 17350U;
	int16_t x3126 = INT16_MIN;
	int64_t x3127 = INT64_MIN;
	uint8_t x3128 = 5U;
	volatile int64_t t81 = 176404814509400LL;

    t81 = (x3125|((x3126/x3127)<<x3128));

    if (t81 != 17350LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x3137 = UINT8_MAX;
	static volatile int8_t x3138 = INT8_MAX;
	volatile int8_t x3140 = 6;
	volatile int32_t t82 = -12450;

    t82 = (x3137|((x3138/x3139)<<x3140));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x3217 = UINT32_MAX;
	static volatile int64_t x3218 = INT64_MAX;
	static int16_t x3219 = INT16_MAX;
	int64_t t83 = -734393LL;

    t83 = (x3217|((x3218/x3219)<<x3220));

    if (t83 != 281487861612543LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x3229 = 269017900024LL;
	uint32_t x3230 = 1015329423U;
	int64_t x3231 = INT64_MIN;
	static int8_t x3232 = 1;
	static int64_t t84 = 30679710604964LL;

    t84 = (x3229|((x3230/x3231)<<x3232));

    if (t84 != 269017900024LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x3273 = 7039053198953379LL;
	static volatile int16_t x3274 = -1;
	uint8_t x3275 = UINT8_MAX;
	uint16_t x3276 = 0U;

    t85 = (x3273|((x3274/x3275)<<x3276));

    if (t85 != 7039053198953379LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x3280 = 7U;
	volatile int32_t t86 = -31751;

    t86 = (x3277|((x3278/x3279)<<x3280));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x3293 = 11;
	static int64_t x3294 = 860753838889044403LL;
	uint8_t x3295 = 2U;
	int8_t x3296 = 2;

    t87 = (x3293|((x3294/x3295)<<x3296));

    if (t87 != 1721507677778088815LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x3305 = 99U;
	uint8_t x3307 = UINT8_MAX;
	int16_t x3308 = 1;
	volatile int32_t t88 = -1020067418;

    t88 = (x3305|((x3306/x3307)<<x3308));

    if (t88 != 99) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x3317 = 110671U;
	uint64_t x3318 = 803316968615879LLU;
	volatile uint64_t t89 = 117709LLU;

    t89 = (x3317|((x3318/x3319)<<x3320));

    if (t89 != 110671LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x3353 = INT32_MAX;
	uint16_t x3356 = 1U;
	int64_t t90 = -399629512335594290LL;

    t90 = (x3353|((x3354/x3355)<<x3356));

    if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x3361 = 73U;
	int16_t x3362 = -1;
	volatile int8_t x3364 = 29;
	static volatile uint32_t t91 = 29396U;

    t91 = (x3361|((x3362/x3363)<<x3364));

    if (t91 != 536870985U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x3469 = 3706762425LLU;
	int32_t x3471 = -26;
	static uint8_t x3472 = 6U;
	volatile uint64_t t92 = 2296647366LLU;

    t92 = (x3469|((x3470/x3471)<<x3472));

    if (t92 != 3706762425LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x3490 = -60;
	static volatile int64_t t93 = 43448880773414LL;

    t93 = (x3489|((x3490/x3491)<<x3492));

    if (t93 != 41LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x3561 = INT8_MIN;
	volatile uint64_t x3562 = 7059165338238602LLU;
	uint8_t x3563 = 14U;
	volatile uint64_t t94 = 6240788142660487LLU;

    t94 = (x3561|((x3562/x3563)<<x3564));

    if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x3569 = INT32_MAX;
	int32_t x3570 = 10351155;
	uint32_t x3571 = UINT32_MAX;
	uint32_t x3572 = 4U;
	volatile uint32_t t95 = 30U;

    t95 = (x3569|((x3570/x3571)<<x3572));

    if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x3597 = 75U;
	static volatile uint16_t x3598 = 15622U;
	uint16_t x3599 = UINT16_MAX;
	static uint32_t x3600 = 1U;

    t96 = (x3597|((x3598/x3599)<<x3600));

    if (t96 != 75) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x3617 = UINT16_MAX;
	volatile int64_t x3618 = INT64_MAX;
	uint8_t x3619 = UINT8_MAX;
	int64_t t97 = 949113312102LL;

    t97 = (x3617|((x3618/x3619)<<x3620));

    if (t97 != 72340172838141951LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x3637 = 2116430192U;
	volatile uint16_t x3638 = 4U;
	uint64_t x3639 = 19LLU;
	uint16_t x3640 = 1U;
	uint64_t t98 = 106516027789LLU;

    t98 = (x3637|((x3638/x3639)<<x3640));

    if (t98 != 2116430192LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3649 = INT8_MIN;
	static uint64_t x3650 = 572LLU;
	uint32_t x3651 = 2746352U;
	uint8_t x3652 = 20U;
	volatile uint64_t t99 = 4611032432500245869LLU;

    t99 = (x3649|((x3650/x3651)<<x3652));

    if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3658 = INT8_MAX;
	int64_t x3659 = -992310218LL;

    t100 = (x3657|((x3658/x3659)<<x3660));

    if (t100 != 4294967295LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x3697 = 13534U;
	uint32_t x3698 = UINT32_MAX;
	int64_t x3699 = INT64_MAX;

    t101 = (x3697|((x3698/x3699)<<x3700));

    if (t101 != 13534LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x3730 = 834707147735272LLU;
	static volatile uint8_t x3731 = UINT8_MAX;
	int32_t x3732 = 55;

    t102 = (x3729|((x3730/x3731)<<x3732));

    if (t102 != 18446703592170310021LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3741 = 824U;
	int8_t x3742 = -1;
	uint8_t x3743 = 4U;
	uint64_t x3744 = 0LLU;
	volatile int32_t t103 = 25987;

    t103 = (x3741|((x3742/x3743)<<x3744));

    if (t103 != 824) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x3765 = UINT64_MAX;
	int32_t x3766 = 114858;
	uint8_t x3767 = 18U;
	static int8_t x3768 = 11;

    t104 = (x3765|((x3766/x3767)<<x3768));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint8_t x3783 = 12U;
	volatile int32_t t105 = -37714688;

    t105 = (x3781|((x3782/x3783)<<x3784));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x3886 = 3U;
	static int64_t x3887 = INT64_MIN;
	volatile uint8_t x3888 = 50U;
	volatile int64_t t106 = 4LL;

    t106 = (x3885|((x3886/x3887)<<x3888));

    if (t106 != 5LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x3937 = -1;
	uint64_t x3938 = UINT64_MAX;
	static uint32_t x3939 = 955082U;
	static int8_t x3940 = 51;
	uint64_t t107 = UINT64_MAX;

    t107 = (x3937|((x3938/x3939)<<x3940));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x4077 = INT64_MAX;
	uint64_t x4078 = 1035998933214967LLU;
	int32_t x4079 = -896939;

    t108 = (x4077|((x4078/x4079)<<x4080));

    if (t108 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x4169 = 42;
	int16_t x4172 = 4;
	int64_t t109 = -29LL;

    t109 = (x4169|((x4170/x4171)<<x4172));

    if (t109 != 42LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x4209 = 106928492666373434LL;
	static uint32_t x4210 = 3833357U;
	int8_t x4211 = INT8_MIN;

    t110 = (x4209|((x4210/x4211)<<x4212));

    if (t110 != 106928492666373434LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x4241 = INT8_MIN;
	int64_t x4242 = -1LL;
	static int16_t x4243 = -1;
	uint8_t x4244 = 0U;
	static int64_t t111 = 1195323664LL;

    t111 = (x4241|((x4242/x4243)<<x4244));

    if (t111 != -127LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x4263 = 124U;
	int8_t x4264 = 3;
	int64_t t112 = 19342570209756626LL;

    t112 = (x4261|((x4262/x4263)<<x4264));

    if (t112 != 595056262035537919LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x4281 = -1;
	int8_t x4282 = INT8_MIN;
	int16_t x4283 = INT16_MAX;
	uint16_t x4284 = 8U;

    t113 = (x4281|((x4282/x4283)<<x4284));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x4285 = 61691;
	static volatile int8_t x4286 = -1;
	int8_t x4287 = INT8_MIN;
	static uint8_t x4288 = 5U;
	int32_t t114 = 3054;

    t114 = (x4285|((x4286/x4287)<<x4288));

    if (t114 != 61691) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x4295 = INT64_MIN;

    t115 = (x4293|((x4294/x4295)<<x4296));

    if (t115 != -112LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x4310 = INT64_MIN;
	volatile int16_t x4312 = 0;
	volatile uint64_t t116 = UINT64_MAX;

    t116 = (x4309|((x4310/x4311)<<x4312));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x4321 = -1;
	int16_t x4323 = INT16_MIN;
	uint32_t x4324 = 22U;
	uint64_t t117 = UINT64_MAX;

    t117 = (x4321|((x4322/x4323)<<x4324));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x4377 = UINT8_MAX;
	int64_t x4378 = -1LL;
	static volatile uint16_t x4380 = 38U;
	int64_t t118 = -117663454777LL;

    t118 = (x4377|((x4378/x4379)<<x4380));

    if (t118 != 255LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4393 = -1;
	volatile int64_t x4395 = INT64_MIN;
	int16_t x4396 = 17;
	volatile int64_t t119 = 302580594450963LL;

    t119 = (x4393|((x4394/x4395)<<x4396));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x4413 = 3U;
	volatile uint32_t x4414 = 112773962U;
	static int8_t x4415 = INT8_MAX;
	int8_t x4416 = 3;
	static volatile uint32_t t120 = 2196U;

    t120 = (x4413|((x4414/x4415)<<x4416));

    if (t120 != 7103867U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x4425 = -1;
	uint16_t x4426 = UINT16_MAX;
	int32_t x4427 = INT32_MIN;
	volatile int8_t x4428 = 3;
	volatile int32_t t121 = -2498795;

    t121 = (x4425|((x4426/x4427)<<x4428));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x4441 = 470U;
	static int32_t x4442 = -1;
	int16_t x4443 = INT16_MIN;
	uint16_t x4444 = 3U;
	static volatile int32_t t122 = 24766437;

    t122 = (x4441|((x4442/x4443)<<x4444));

    if (t122 != 470) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x4445 = UINT8_MAX;
	uint16_t x4446 = 23121U;
	volatile uint32_t x4447 = 335520U;
	static uint8_t x4448 = 0U;
	volatile uint32_t t123 = 25574U;

    t123 = (x4445|((x4446/x4447)<<x4448));

    if (t123 != 255U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x4483 = 5U;
	static int16_t x4484 = 1;
	static volatile int64_t t124 = -15245436719LL;

    t124 = (x4481|((x4482/x4483)<<x4484));

    if (t124 != 220870652LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x4501 = INT32_MIN;
	uint8_t x4504 = 4U;
	volatile uint64_t t125 = 9405707056624753LLU;

    t125 = (x4501|((x4502/x4503)<<x4504));

    if (t125 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4505 = -39;
	int16_t x4506 = INT16_MIN;
	uint8_t x4508 = 7U;
	volatile int32_t t126 = -46095694;

    t126 = (x4505|((x4506/x4507)<<x4508));

    if (t126 != -39) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x4653 = INT16_MIN;
	volatile uint32_t x4654 = UINT32_MAX;
	uint8_t x4655 = UINT8_MAX;
	uint8_t x4656 = 2U;

    t127 = (x4653|((x4654/x4655)<<x4656));

    if (t127 != 4294935556U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x4673 = INT8_MAX;
	uint64_t x4674 = UINT64_MAX;
	uint8_t x4676 = 7U;
	uint64_t t128 = 817974LLU;

    t128 = (x4673|((x4674/x4675)<<x4676));

    if (t128 != 549755814143LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x4765 = 1;
	static int16_t x4766 = -4079;
	static volatile int64_t x4767 = INT64_MAX;
	int64_t x4768 = 1LL;
	volatile int64_t t129 = 3066182LL;

    t129 = (x4765|((x4766/x4767)<<x4768));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4773 = INT32_MAX;
	int8_t x4774 = INT8_MAX;
	static int8_t x4775 = 6;
	uint8_t x4776 = 1U;
	volatile int32_t t130 = INT32_MAX;

    t130 = (x4773|((x4774/x4775)<<x4776));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x4809 = 2LLU;
	volatile int8_t x4810 = 37;
	uint8_t x4811 = 6U;
	uint8_t x4812 = 1U;
	uint64_t t131 = 1413867LLU;

    t131 = (x4809|((x4810/x4811)<<x4812));

    if (t131 != 14LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x4817 = INT32_MIN;
	static int64_t x4818 = -23498557LL;
	int32_t x4820 = 1;
	volatile int64_t t132 = 74236989LL;

    t132 = (x4817|((x4818/x4819)<<x4820));

    if (t132 != -2135734370LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x4893 = UINT32_MAX;
	volatile int8_t x4894 = INT8_MIN;
	uint16_t x4896 = 2U;
	static int64_t t133 = 917138943118913677LL;

    t133 = (x4893|((x4894/x4895)<<x4896));

    if (t133 != 4294967295LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x5009 = 20U;
	uint64_t x5011 = 3586LLU;
	uint8_t x5012 = 2U;
	uint64_t t134 = 1550545673LLU;

    t134 = (x5009|((x5010/x5011)<<x5012));

    if (t134 != 20576401643847764LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x5050 = 7275928;
	int64_t x5051 = -175173667LL;
	uint64_t x5052 = 0LLU;

    t135 = (x5049|((x5050/x5051)<<x5052));

    if (t135 != -128LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x5065 = 23556000804476764LLU;
	uint32_t x5066 = 0U;
	volatile int16_t x5067 = INT16_MIN;
	uint16_t x5068 = 20U;
	uint64_t t136 = 726413665147LLU;

    t136 = (x5065|((x5066/x5067)<<x5068));

    if (t136 != 23556000804476764LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x5081 = INT64_MIN;
	int16_t x5082 = INT16_MAX;
	static int64_t x5083 = -61740351364826179LL;
	volatile uint8_t x5084 = 1U;
	static int64_t t137 = INT64_MIN;

    t137 = (x5081|((x5082/x5083)<<x5084));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x5177 = INT8_MAX;
	static int8_t x5178 = -1;
	static int8_t x5180 = 5;
	volatile int32_t t138 = -41939505;

    t138 = (x5177|((x5178/x5179)<<x5180));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x5220 = 0U;
	volatile int64_t t139 = 1891656538837450LL;

    t139 = (x5217|((x5218/x5219)<<x5220));

    if (t139 != 4294967295LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x5237 = -1053187515;
	int16_t x5238 = -1;
	static uint16_t x5239 = 2784U;
	static volatile int32_t t140 = -13455777;

    t140 = (x5237|((x5238/x5239)<<x5240));

    if (t140 != -1053187515) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x5253 = INT8_MIN;
	static uint8_t x5254 = 21U;
	int32_t x5255 = INT32_MAX;
	uint16_t x5256 = 3U;
	volatile int32_t t141 = 202;

    t141 = (x5253|((x5254/x5255)<<x5256));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x5273 = UINT16_MAX;
	uint32_t x5274 = 3U;
	static volatile uint64_t x5275 = UINT64_MAX;
	int64_t x5276 = 0LL;

    t142 = (x5273|((x5274/x5275)<<x5276));

    if (t142 != 65535LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x5289 = -1LL;
	int32_t x5290 = INT32_MIN;
	static int64_t x5291 = INT64_MAX;
	uint8_t x5292 = 1U;
	volatile int64_t t143 = 15LL;

    t143 = (x5289|((x5290/x5291)<<x5292));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x5309 = -1;
	uint16_t x5310 = 12956U;
	uint16_t x5312 = 1U;

    t144 = (x5309|((x5310/x5311)<<x5312));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x5337 = 1;
	uint16_t x5338 = 35U;
	uint64_t x5339 = 31506672LLU;
	int8_t x5340 = 3;
	uint64_t t145 = 21017LLU;

    t145 = (x5337|((x5338/x5339)<<x5340));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5373 = INT64_MIN;
	int16_t x5374 = INT16_MIN;
	uint32_t x5375 = 8U;
	uint8_t x5376 = 14U;
	volatile int64_t t146 = -3600228962414808042LL;

    t146 = (x5373|((x5374/x5375)<<x5376));

    if (t146 != -9223372032626917376LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x5401 = 1U;
	static int32_t x5402 = -334;
	int8_t x5403 = -1;
	uint32_t x5404 = 21U;
	volatile uint32_t t147 = 111573687U;

    t147 = (x5401|((x5402/x5403)<<x5404));

    if (t147 != 700448769U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x5433 = INT16_MAX;
	int8_t x5434 = -8;
	int8_t x5435 = INT8_MIN;
	static int16_t x5436 = 1;
	volatile int32_t t148 = -46869845;

    t148 = (x5433|((x5434/x5435)<<x5436));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x5461 = 38977250U;
	volatile int16_t x5462 = -2109;
	static uint16_t x5463 = UINT16_MAX;
	uint16_t x5464 = 18U;
	static uint32_t t149 = 1458U;

    t149 = (x5461|((x5462/x5463)<<x5464));

    if (t149 != 38977250U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x5573 = 56;
	static uint16_t x5574 = 17538U;
	int8_t x5575 = 36;
	uint32_t x5576 = 7U;
	int32_t t150 = -1;

    t150 = (x5573|((x5574/x5575)<<x5576));

    if (t150 != 62392) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x5585 = -3;
	static volatile uint32_t x5586 = UINT32_MAX;
	static int64_t x5587 = -427284586715809105LL;

    t151 = (x5585|((x5586/x5587)<<x5588));

    if (t151 != -3LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x5589 = -1;
	int8_t x5590 = -5;
	uint64_t x5591 = UINT64_MAX;
	volatile int8_t x5592 = 9;
	volatile uint64_t t152 = UINT64_MAX;

    t152 = (x5589|((x5590/x5591)<<x5592));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5649 = 2595323LL;
	int32_t x5650 = INT32_MIN;
	volatile uint32_t x5651 = 93396238U;
	uint8_t x5652 = 25U;

    t153 = (x5649|((x5650/x5651)<<x5652));

    if (t153 != 740792827LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x5653 = -337;
	int8_t x5654 = INT8_MIN;
	int8_t x5655 = INT8_MIN;
	uint16_t x5656 = 27U;
	volatile int32_t t154 = 51746361;

    t154 = (x5653|((x5654/x5655)<<x5656));

    if (t154 != -337) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5657 = INT32_MIN;
	int64_t t155 = -13LL;

    t155 = (x5657|((x5658/x5659)<<x5660));

    if (t155 != -1876934527LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x5669 = INT8_MIN;
	int32_t x5670 = INT32_MAX;
	int64_t x5671 = INT64_MAX;
	volatile uint8_t x5672 = 6U;

    t156 = (x5669|((x5670/x5671)<<x5672));

    if (t156 != -128LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x5721 = UINT16_MAX;
	int8_t x5723 = INT8_MAX;
	int8_t x5724 = 11;
	uint32_t t157 = 21U;

    t157 = (x5721|((x5722/x5723)<<x5724));

    if (t157 != 541130751U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x5821 = INT32_MIN;
	static int64_t x5822 = 439584467899LL;
	uint8_t x5823 = 11U;
	volatile uint16_t x5824 = 2U;

    t158 = (x5821|((x5822/x5823)<<x5824));

    if (t158 != -1212376184LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x5881 = INT16_MIN;
	volatile uint64_t x5882 = 699LLU;
	uint8_t x5883 = 1U;
	int64_t x5884 = 29LL;
	static uint64_t t159 = 11508192486844005LLU;

    t159 = (x5881|((x5882/x5883)<<x5884));

    if (t159 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x5885 = 46U;
	int16_t x5886 = INT16_MIN;
	volatile int8_t x5887 = INT8_MIN;
	int8_t x5888 = 9;
	int32_t t160 = 141362415;

    t160 = (x5885|((x5886/x5887)<<x5888));

    if (t160 != 131118) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x6045 = -14992;
	int32_t x6048 = 3;
	volatile uint64_t t161 = 252LLU;

    t161 = (x6045|((x6046/x6047)<<x6048));

    if (t161 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x6069 = INT64_MIN;
	static uint16_t x6070 = UINT16_MAX;
	static uint16_t x6071 = UINT16_MAX;
	static uint16_t x6072 = 1U;
	int64_t t162 = 1LL;

    t162 = (x6069|((x6070/x6071)<<x6072));

    if (t162 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x6093 = UINT64_MAX;
	uint8_t x6094 = 13U;
	int8_t x6095 = INT8_MIN;

    t163 = (x6093|((x6094/x6095)<<x6096));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x6221 = -3;
	volatile uint64_t x6223 = UINT64_MAX;
	uint64_t x6224 = 1LLU;
	static volatile uint64_t t164 = 2144786364078141LLU;

    t164 = (x6221|((x6222/x6223)<<x6224));

    if (t164 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x6306 = 5;
	int32_t x6307 = -25381;
	uint16_t x6308 = 3U;

    t165 = (x6305|((x6306/x6307)<<x6308));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x6329 = INT16_MIN;
	static uint16_t x6330 = 611U;
	int32_t x6331 = INT32_MIN;
	static uint8_t x6332 = 11U;

    t166 = (x6329|((x6330/x6331)<<x6332));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x6333 = 33U;
	uint64_t x6334 = UINT64_MAX;
	int16_t x6335 = -1256;
	int16_t x6336 = 30;

    t167 = (x6333|((x6334/x6335)<<x6336));

    if (t167 != 1073741857LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x6365 = 4U;
	uint8_t x6366 = 1U;
	volatile uint8_t x6367 = 3U;
	int16_t x6368 = 0;

    t168 = (x6365|((x6366/x6367)<<x6368));

    if (t168 != 4) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x6417 = -115;
	uint64_t x6419 = UINT64_MAX;
	int8_t x6420 = 0;

    t169 = (x6417|((x6418/x6419)<<x6420));

    if (t169 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x6437 = 181360012LLU;
	int64_t x6439 = INT64_MAX;
	uint32_t x6440 = 0U;
	uint64_t t170 = 3LLU;

    t170 = (x6437|((x6438/x6439)<<x6440));

    if (t170 != 181360012LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x6442 = INT16_MAX;
	int16_t x6443 = 109;
	volatile int32_t t171 = 102608246;

    t171 = (x6441|((x6442/x6443)<<x6444));

    if (t171 != -32468) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x6481 = 5020931LLU;
	int32_t x6482 = -1;
	uint64_t x6483 = 2505849968892571390LLU;
	static volatile int8_t x6484 = 50;
	volatile uint64_t t172 = 1790926159LLU;

    t172 = (x6481|((x6482/x6483)<<x6484));

    if (t172 != 7881299352919299LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x6501 = -492;
	int32_t x6502 = INT32_MAX;
	int32_t x6503 = INT32_MIN;
	uint16_t x6504 = 0U;
	static volatile int32_t t173 = -6901503;

    t173 = (x6501|((x6502/x6503)<<x6504));

    if (t173 != -492) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x6541 = -1;
	int16_t x6542 = -7766;
	uint32_t x6543 = UINT32_MAX;
	static int32_t x6544 = 0;
	uint32_t t174 = UINT32_MAX;

    t174 = (x6541|((x6542/x6543)<<x6544));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x6547 = UINT16_MAX;
	uint8_t x6548 = 3U;
	volatile int32_t t175 = 3408;

    t175 = (x6545|((x6546/x6547)<<x6548));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x6561 = -1;
	int8_t x6562 = INT8_MIN;
	volatile uint8_t x6563 = UINT8_MAX;
	uint8_t x6564 = 1U;

    t176 = (x6561|((x6562/x6563)<<x6564));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x6605 = UINT32_MAX;
	static int8_t x6606 = INT8_MAX;
	static volatile uint32_t x6607 = 6812629U;
	static uint32_t t177 = UINT32_MAX;

    t177 = (x6605|((x6606/x6607)<<x6608));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x6634 = 0;
	int32_t x6635 = INT32_MAX;
	volatile uint8_t x6636 = 0U;
	int32_t t178 = 1639;

    t178 = (x6633|((x6634/x6635)<<x6636));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x6641 = 10347;
	int8_t x6642 = -1;
	uint8_t x6643 = 71U;
	uint8_t x6644 = 12U;
	static volatile int32_t t179 = -2564748;

    t179 = (x6641|((x6642/x6643)<<x6644));

    if (t179 != 10347) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x6733 = 499566;
	int8_t x6734 = 1;
	static int16_t x6735 = 15839;
	int16_t x6736 = 5;
	volatile int32_t t180 = 250446;

    t180 = (x6733|((x6734/x6735)<<x6736));

    if (t180 != 499566) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6749 = INT64_MIN;
	uint32_t x6750 = UINT32_MAX;
	int32_t x6751 = INT32_MAX;
	uint8_t x6752 = 1U;
	int64_t t181 = -51LL;

    t181 = (x6749|((x6750/x6751)<<x6752));

    if (t181 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x6797 = -1LL;
	uint32_t x6798 = 376470U;
	int64_t x6799 = -4714755988333786LL;
	static volatile int8_t x6800 = 1;

    t182 = (x6797|((x6798/x6799)<<x6800));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x6805 = 10175;
	volatile int16_t x6806 = -1;
	int8_t x6807 = -1;
	volatile int16_t x6808 = 30;
	int32_t t183 = 3875;

    t183 = (x6805|((x6806/x6807)<<x6808));

    if (t183 != 1073751999) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x6825 = 371U;
	int8_t x6826 = INT8_MIN;
	static int64_t x6827 = -1LL;
	static volatile uint16_t x6828 = 1U;
	int64_t t184 = -55940143426LL;

    t184 = (x6825|((x6826/x6827)<<x6828));

    if (t184 != 371LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x6889 = 803;
	int16_t x6890 = INT16_MIN;
	static volatile int32_t x6891 = INT32_MIN;
	static volatile uint64_t x6892 = 0LLU;
	int32_t t185 = -16845024;

    t185 = (x6889|((x6890/x6891)<<x6892));

    if (t185 != 803) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x6997 = INT16_MAX;
	int64_t x6999 = 150LL;
	int64_t t186 = -1460120091LL;

    t186 = (x6997|((x6998/x6999)<<x7000));

    if (t186 != 32767LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x7001 = 28U;
	int32_t x7002 = INT32_MIN;
	int8_t x7003 = -61;
	uint8_t x7004 = 5U;
	static volatile int32_t t187 = 4;

    t187 = (x7001|((x7002/x7003)<<x7004));

    if (t187 != 1126548796) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x7041 = 1401U;
	static volatile int32_t x7043 = -106;
	volatile uint16_t x7044 = 31U;
	volatile uint32_t t188 = 8242U;

    t188 = (x7041|((x7042/x7043)<<x7044));

    if (t188 != 1401U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x7065 = 2143;
	int32_t x7066 = INT32_MIN;
	int8_t x7067 = INT8_MIN;
	int32_t t189 = 275200470;

    t189 = (x7065|((x7066/x7067)<<x7068));

    if (t189 != 33556575) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x7089 = INT32_MIN;
	volatile int8_t x7090 = -1;
	static uint8_t x7092 = 0U;

    t190 = (x7089|((x7090/x7091)<<x7092));

    if (t190 != -2147483648LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x7161 = -1495;
	static volatile int8_t x7162 = INT8_MIN;
	int32_t x7163 = INT32_MAX;
	int16_t x7164 = 1;
	int32_t t191 = 13;

    t191 = (x7161|((x7162/x7163)<<x7164));

    if (t191 != -1495) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x7239 = 658U;
	volatile int64_t t192 = 116213947080572848LL;

    t192 = (x7237|((x7238/x7239)<<x7240));

    if (t192 != 207430316LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x7265 = INT32_MIN;
	int16_t x7266 = INT16_MIN;
	int16_t x7267 = INT16_MIN;
	int64_t x7268 = 1LL;
	volatile int32_t t193 = -49684472;

    t193 = (x7265|((x7266/x7267)<<x7268));

    if (t193 != -2147483646) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x7297 = UINT16_MAX;
	volatile int16_t x7298 = INT16_MIN;
	volatile int8_t x7299 = INT8_MIN;
	int32_t t194 = 3804;

    t194 = (x7297|((x7298/x7299)<<x7300));

    if (t194 != 67174399) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x7369 = 11081894U;
	uint32_t x7370 = UINT32_MAX;
	int16_t x7371 = 2811;
	uint32_t x7372 = 22U;
	uint32_t t195 = 232330U;

    t195 = (x7369|((x7370/x7371)<<x7372));

    if (t195 != 447289510U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x7393 = -1615;
	static volatile uint8_t x7394 = 63U;
	int8_t x7395 = INT8_MIN;
	int16_t x7396 = 3;
	volatile int32_t t196 = 1734;

    t196 = (x7393|((x7394/x7395)<<x7396));

    if (t196 != -1615) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x7405 = -8334216668723191LL;
	volatile int8_t x7406 = -1;
	static int32_t x7407 = INT32_MIN;

    t197 = (x7405|((x7406/x7407)<<x7408));

    if (t197 != -8334216668723191LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x7421 = UINT32_MAX;
	int8_t x7422 = INT8_MIN;
	int64_t x7423 = INT64_MIN;
	uint16_t x7424 = 52U;
	volatile int64_t t198 = 68240056011609LL;

    t198 = (x7421|((x7422/x7423)<<x7424));

    if (t198 != 4294967295LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x7533 = 14U;
	int64_t x7534 = -1LL;
	static volatile uint64_t x7535 = 3705595LLU;
	static volatile uint64_t t199 = 15528241326267076LLU;

    t199 = (x7533|((x7534/x7535)<<x7536));

    if (t199 != 2432831933739171854LLU) { NG(); } else { ; }
	
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

