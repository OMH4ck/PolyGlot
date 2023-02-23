
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

int8_t x1 = INT8_MAX;
volatile uint8_t x2 = 21U;
static uint8_t x27 = 7U;
int8_t x28 = INT8_MIN;
static uint8_t x121 = 8U;
int32_t x140 = INT32_MIN;
volatile uint64_t t3 = 96232651914345LLU;
uint16_t x242 = 334U;
int32_t x244 = -203021364;
volatile uint32_t x342 = 2666U;
int32_t x344 = INT32_MAX;
static int16_t x369 = INT16_MIN;
volatile uint64_t t8 = 944526LLU;
int32_t x410 = 54223198;
uint16_t x491 = 1U;
static uint32_t t11 = 34U;
volatile uint16_t x518 = 743U;
uint16_t x583 = 8U;
volatile uint8_t x614 = 16U;
volatile uint16_t x616 = 6734U;
uint32_t x921 = UINT32_MAX;
uint8_t x922 = 7U;
volatile int32_t x925 = -206;
int16_t x945 = 0;
uint64_t x946 = 1289907238281LLU;
int64_t x958 = 6704417618759880LL;
int64_t x981 = INT64_MIN;
volatile int16_t x983 = 0;
volatile uint64_t t22 = 0LLU;
volatile int16_t x1298 = 52;
volatile int8_t x1299 = 2;
int16_t x1575 = 2;
int16_t x1781 = -1;
uint16_t x1783 = 2U;
int64_t t32 = -50044723461337LL;
int16_t x1800 = INT16_MIN;
int64_t x1804 = INT64_MAX;
int8_t x1914 = INT8_MAX;
int8_t x1916 = -15;
volatile int8_t x2016 = INT8_MAX;
volatile uint32_t x2018 = UINT32_MAX;
int8_t x2177 = -1;
static volatile int32_t t39 = -1;
uint32_t x2234 = UINT32_MAX;
int64_t t41 = 15437LL;
int8_t x2267 = 0;
uint64_t x2326 = UINT64_MAX;
volatile uint8_t x2363 = 19U;
int32_t x2402 = 272602354;
int8_t x2403 = 5;
int64_t x2406 = 591992287664779607LL;
static int16_t x2408 = INT16_MIN;
uint16_t x2467 = 0U;
volatile int64_t t50 = 140349908649401LL;
uint64_t x2485 = 6610011769338669744LLU;
static int64_t x2516 = INT64_MIN;
static volatile int32_t x2535 = 0;
static int16_t x2536 = INT16_MAX;
int32_t x2617 = INT32_MAX;
static volatile uint64_t x2620 = 91207032270975LLU;
static uint32_t t57 = 18291U;
static volatile int8_t x2668 = INT8_MIN;
uint8_t x2695 = 28U;
int8_t x2869 = INT8_MAX;
static uint8_t x2870 = 1U;
static volatile int32_t t64 = 3256;
uint8_t x2915 = 18U;
int8_t x2916 = 0;
uint32_t x2934 = 5758207U;
static uint64_t x3011 = 0LLU;
uint64_t t68 = 72091741661089384LLU;
uint64_t t69 = 576491028491LLU;
int8_t x3145 = -1;
uint32_t x3147 = 1U;
int8_t x3312 = 3;
uint32_t t73 = 1394200U;
static int32_t x3396 = -1;
uint8_t x3443 = 6U;
volatile int8_t x3484 = -1;
uint32_t t79 = 93U;
uint32_t x3794 = 1050720U;
int32_t x3796 = INT32_MAX;
uint64_t x3854 = 20373LLU;
static int16_t x3861 = INT16_MIN;
int16_t x3949 = 0;
volatile uint8_t x3998 = UINT8_MAX;
static volatile uint32_t t89 = 535920U;
volatile int32_t t91 = -298495;
int64_t x4501 = 6024247159LL;
uint8_t x4502 = UINT8_MAX;
static int64_t x4644 = 993594726939LL;
uint16_t x4793 = 334U;
volatile int16_t x4940 = -1;
int64_t t97 = 96LL;
volatile uint8_t x5302 = 10U;
uint64_t t100 = 383810177927305940LLU;
volatile uint8_t x5463 = 2U;
volatile int64_t t101 = -1236361686753LL;
int16_t x5518 = 725;
static volatile uint32_t t102 = 13U;
uint64_t t103 = 1206388831743698LLU;
uint64_t x5674 = UINT64_MAX;
static int16_t x5712 = 6475;
uint32_t x5721 = 249U;
static uint64_t x5822 = 356137265646600105LLU;
uint64_t t109 = 16261922022177683LLU;
static volatile int32_t x5982 = 62039765;
uint16_t x5983 = 10U;
uint32_t x5985 = 11709U;
volatile uint32_t t112 = 82359U;
uint8_t x6031 = 2U;
volatile int8_t x6365 = INT8_MAX;
uint64_t x6366 = 28703847LLU;
uint8_t x6368 = UINT8_MAX;
volatile uint64_t t116 = 117420LLU;
uint64_t x6393 = UINT64_MAX;
static uint32_t x6394 = 45U;
static uint8_t x6396 = 126U;
static int64_t x6478 = 7363850LL;
uint8_t x6539 = 15U;
int8_t x6540 = 1;
uint16_t x6593 = 2405U;
volatile int32_t t123 = 44792336;
int16_t x6640 = -1;
uint8_t x6656 = 14U;
volatile int32_t x6806 = 51;
static int32_t t126 = -119477752;
int32_t x7121 = INT32_MIN;
int16_t x7124 = INT16_MIN;
volatile uint32_t t130 = 376679924U;
uint64_t x7314 = 54687022927LLU;
int32_t x7357 = INT32_MIN;
static int32_t x7462 = 43417137;
static int16_t x7537 = INT16_MAX;
uint8_t x7539 = 1U;
uint8_t x7566 = 65U;
int8_t x7567 = 0;
int32_t t137 = 0;
int8_t x7768 = INT8_MIN;
uint8_t x7795 = 1U;
static volatile uint64_t t142 = 35346460923386567LLU;
int64_t x7966 = 418205783931941LL;
uint8_t x7967 = 0U;
volatile int64_t t144 = -6LL;
int8_t x8085 = INT8_MIN;
static int64_t x8086 = INT64_MAX;
int8_t x8185 = INT8_MAX;
static int16_t x8188 = INT16_MIN;
int32_t x8260 = -1;
int32_t x8497 = 0;
int8_t x8500 = -1;
uint16_t x8573 = 3U;
uint8_t x8859 = 4U;
static int32_t x8860 = -1;
int16_t x8953 = INT16_MIN;
static int16_t x9080 = INT16_MAX;
volatile uint64_t t161 = 945888561757LLU;
int16_t x9137 = -1;
uint16_t x9183 = 0U;
int8_t x9188 = -6;
volatile uint8_t x9293 = 17U;
int16_t x9294 = 574;
static volatile int64_t t165 = -54731LL;
static int16_t x9421 = INT16_MIN;
static uint16_t x9422 = 37U;
volatile uint32_t t167 = 1386643324U;
int16_t x9537 = 239;
volatile uint16_t x9903 = 14U;
static uint64_t x9906 = 332666LLU;
uint64_t t173 = 8147205LLU;
static uint64_t t174 = 29710LLU;
volatile uint32_t t175 = 52230815U;
uint32_t x10378 = UINT32_MAX;
int8_t x10380 = -24;
uint32_t t177 = 34885U;
int8_t x10415 = 1;
int64_t x10438 = 718416313LL;
int16_t x10439 = 1;
volatile int32_t x10440 = -29728154;
volatile int64_t t179 = -2700993237982684LL;
static uint16_t x10616 = 11841U;
static int64_t t180 = 1082179595329LL;
int64_t x10726 = 156566LL;
static uint8_t x10727 = 7U;
uint64_t x10834 = UINT64_MAX;
static volatile int32_t x10836 = INT32_MIN;
static uint8_t x10839 = 2U;
static uint8_t x10847 = 4U;
uint16_t x10848 = 6U;
volatile int32_t t187 = -388;
int8_t x10905 = INT8_MAX;
volatile uint32_t t188 = 3379753U;
volatile uint8_t x11123 = 29U;
static int64_t t191 = 12343376843346660LL;
volatile uint8_t x11131 = 11U;
uint32_t x11142 = 6643899U;
int32_t x11164 = INT32_MIN;
volatile int64_t x11197 = INT64_MIN;
volatile int64_t t197 = 104375LL;
int64_t x11244 = -831731009011380384LL;
uint64_t t198 = 911422372765LLU;


void f0(void) {
    	static uint8_t x3 = 12U;
	int8_t x4 = -1;
	volatile int32_t t0 = 10554;

    t0 = (x1+((x2>>x3)^x4));

    if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x25 = UINT8_MAX;
	int8_t x26 = INT8_MAX;
	volatile int32_t t1 = -1;

    t1 = (x25+((x26>>x27)^x28));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x122 = 2U;
	int8_t x123 = 1;
	uint64_t x124 = 25247765990LLU;
	static uint64_t t2 = 635523275355496287LLU;

    t2 = (x121+((x122>>x123)^x124));

    if (t2 != 25247765999LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x137 = 63;
	static uint64_t x138 = 1973LLU;
	int32_t x139 = 30;

    t3 = (x137+((x138>>x139)^x140));

    if (t3 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x149 = -1;
	volatile uint32_t x150 = 14U;
	uint8_t x151 = 0U;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t4 = 8071649LL;

    t4 = (x149+((x150>>x151)^x152));

    if (t4 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x193 = UINT8_MAX;
	static volatile uint32_t x194 = 9U;
	int32_t x195 = 21;
	int32_t x196 = -1;
	uint32_t t5 = 12U;

    t5 = (x193+((x194>>x195)^x196));

    if (t5 != 254U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x241 = -1;
	int8_t x243 = 24;
	int32_t t6 = -27618569;

    t6 = (x241+((x242>>x243)^x244));

    if (t6 != -203021365) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x341 = INT8_MIN;
	static uint64_t x343 = 0LLU;
	static uint32_t t7 = 17U;

    t7 = (x341+((x342>>x343)^x344));

    if (t7 != 2147480853U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x370 = UINT64_MAX;
	uint8_t x371 = 2U;
	static int64_t x372 = -1LL;

    t8 = (x369+((x370>>x371)^x372));

    if (t8 != 13835058055282130944LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x409 = INT8_MAX;
	int64_t x411 = 29LL;
	uint16_t x412 = UINT16_MAX;
	static int32_t t9 = -59904;

    t9 = (x409+((x410>>x411)^x412));

    if (t9 != 65662) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x489 = -1;
	static int16_t x490 = INT16_MAX;
	int64_t x492 = INT64_MIN;
	static volatile int64_t t10 = -4484985631053LL;

    t10 = (x489+((x490>>x491)^x492));

    if (t10 != -9223372036854759426LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x513 = UINT32_MAX;
	volatile int32_t x514 = INT32_MAX;
	static int8_t x515 = 3;
	volatile int32_t x516 = INT32_MIN;

    t11 = (x513+((x514>>x515)^x516));

    if (t11 != 2415919102U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x517 = -1LL;
	int16_t x519 = 23;
	volatile int8_t x520 = INT8_MIN;
	volatile int64_t t12 = -124LL;

    t12 = (x517+((x518>>x519)^x520));

    if (t12 != -129LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x581 = 2;
	uint32_t x582 = UINT32_MAX;
	int8_t x584 = INT8_MAX;
	uint32_t t13 = 5600673U;

    t13 = (x581+((x582>>x583)^x584));

    if (t13 != 16777090U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x613 = 7;
	int8_t x615 = 0;
	int32_t t14 = 112;

    t14 = (x613+((x614>>x615)^x616));

    if (t14 != 6757) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x621 = -31;
	uint64_t x622 = UINT64_MAX;
	static volatile uint16_t x623 = 1U;
	uint64_t x624 = 238LLU;
	uint64_t t15 = 370168466007LLU;

    t15 = (x621+((x622>>x623)^x624));

    if (t15 != 9223372036854775538LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x689 = -112;
	static uint64_t x690 = 180334165LLU;
	int16_t x691 = 0;
	int32_t x692 = INT32_MIN;
	uint64_t t16 = 7LLU;

    t16 = (x689+((x690>>x691)^x692));

    if (t16 != 18446744071742402021LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x773 = 3LLU;
	int32_t x774 = INT32_MAX;
	int16_t x775 = 14;
	uint64_t x776 = 44431997882000246LLU;
	uint64_t t17 = 5618319926107360LLU;

    t17 = (x773+((x774>>x775)^x776));

    if (t17 != 44431997882014860LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x923 = 0;
	uint8_t x924 = 109U;
	volatile uint32_t t18 = 871389590U;

    t18 = (x921+((x922>>x923)^x924));

    if (t18 != 105U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x926 = 237U;
	int32_t x927 = 0;
	int64_t x928 = INT64_MAX;
	int64_t t19 = 0LL;

    t19 = (x925+((x926>>x927)^x928));

    if (t19 != 9223372036854775364LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x947 = 35U;
	static int64_t x948 = INT64_MIN;
	uint64_t t20 = 1346056682572LLU;

    t20 = (x945+((x946>>x947)^x948));

    if (t20 != 9223372036854775845LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x957 = INT8_MIN;
	int8_t x959 = 0;
	int16_t x960 = -1;
	volatile int64_t t21 = -1LL;

    t21 = (x957+((x958>>x959)^x960));

    if (t21 != -6704417618760009LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x982 = 873606946977299971LLU;
	int64_t x984 = INT64_MIN;

    t22 = (x981+((x982>>x983)^x984));

    if (t22 != 873606946977299971LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1097 = -49;
	uint16_t x1098 = 215U;
	uint8_t x1099 = 0U;
	int8_t x1100 = -1;
	volatile int32_t t23 = -9666;

    t23 = (x1097+((x1098>>x1099)^x1100));

    if (t23 != -265) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1109 = INT16_MAX;
	uint32_t x1110 = 15U;
	int32_t x1111 = 0;
	uint8_t x1112 = 19U;
	static volatile uint32_t t24 = 361967407U;

    t24 = (x1109+((x1110>>x1111)^x1112));

    if (t24 != 32795U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1261 = 85005363619LLU;
	uint16_t x1262 = 0U;
	int16_t x1263 = 1;
	static int64_t x1264 = -5942169LL;
	uint64_t t25 = 8733005572322344LLU;

    t25 = (x1261+((x1262>>x1263)^x1264));

    if (t25 != 84999421450LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x1269 = UINT32_MAX;
	static uint16_t x1270 = 9U;
	uint8_t x1271 = 1U;
	static int32_t x1272 = -3508344;
	uint32_t t26 = 485957U;

    t26 = (x1269+((x1270>>x1271)^x1272));

    if (t26 != 4291458955U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1273 = 384593172771981815LLU;
	uint32_t x1274 = 1096477U;
	uint16_t x1275 = 18U;
	volatile int32_t x1276 = -69418147;
	uint64_t t27 = 6593101956699451161LLU;

    t27 = (x1273+((x1274>>x1275)^x1276));

    if (t27 != 384593176997530960LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1297 = INT32_MIN;
	int16_t x1300 = INT16_MAX;
	int32_t t28 = -3636;

    t28 = (x1297+((x1298>>x1299)^x1300));

    if (t28 != -2147450894) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x1373 = UINT64_MAX;
	uint16_t x1374 = UINT16_MAX;
	volatile uint16_t x1375 = 8U;
	uint32_t x1376 = UINT32_MAX;
	uint64_t t29 = 119431403140824LLU;

    t29 = (x1373+((x1374>>x1375)^x1376));

    if (t29 != 4294967039LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1573 = INT8_MIN;
	uint8_t x1574 = UINT8_MAX;
	int64_t x1576 = INT64_MAX;
	volatile int64_t t30 = 3869397500723548742LL;

    t30 = (x1573+((x1574>>x1575)^x1576));

    if (t30 != 9223372036854775616LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1753 = INT8_MIN;
	volatile uint16_t x1754 = 7092U;
	uint8_t x1755 = 11U;
	volatile uint8_t x1756 = 0U;
	volatile int32_t t31 = -1758;

    t31 = (x1753+((x1754>>x1755)^x1756));

    if (t31 != -125) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x1782 = 630U;
	int64_t x1784 = -1LL;

    t32 = (x1781+((x1782>>x1783)^x1784));

    if (t32 != -159LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1797 = -5;
	int16_t x1798 = 770;
	int8_t x1799 = 7;
	volatile int32_t t33 = -67358026;

    t33 = (x1797+((x1798>>x1799)^x1800));

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1801 = INT16_MIN;
	uint32_t x1802 = UINT32_MAX;
	uint8_t x1803 = 5U;
	volatile int64_t t34 = -5LL;

    t34 = (x1801+((x1802>>x1803)^x1804));

    if (t34 != 9223372036720525312LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x1913 = -1;
	int8_t x1915 = 1;
	volatile int32_t t35 = 2163455;

    t35 = (x1913+((x1914>>x1915)^x1916));

    if (t35 != -51) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x2013 = 47186U;
	volatile uint8_t x2014 = UINT8_MAX;
	int8_t x2015 = 5;
	static volatile uint32_t t36 = 71547U;

    t36 = (x2013+((x2014>>x2015)^x2016));

    if (t36 != 47306U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2017 = INT32_MAX;
	uint16_t x2019 = 26U;
	uint64_t x2020 = 23398146477012LLU;
	static volatile uint64_t t37 = 699593LLU;

    t37 = (x2017+((x2018>>x2019)^x2020));

    if (t37 != 23400293960682LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x2145 = -1;
	static uint8_t x2146 = UINT8_MAX;
	static uint8_t x2147 = 2U;
	int16_t x2148 = 13094;
	int32_t t38 = 11440681;

    t38 = (x2145+((x2146>>x2147)^x2148));

    if (t38 != 13080) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2178 = INT32_MAX;
	volatile uint8_t x2179 = 5U;
	int8_t x2180 = 48;

    t39 = (x2177+((x2178>>x2179)^x2180));

    if (t39 != 67108814) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2197 = INT32_MAX;
	static uint64_t x2198 = 106LLU;
	volatile uint8_t x2199 = 42U;
	uint64_t x2200 = UINT64_MAX;
	uint64_t t40 = 10358476642LLU;

    t40 = (x2197+((x2198>>x2199)^x2200));

    if (t40 != 2147483646LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2233 = INT64_MIN;
	int8_t x2235 = 21;
	uint16_t x2236 = 4U;

    t41 = (x2233+((x2234>>x2235)^x2236));

    if (t41 != -9223372036854773765LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2265 = UINT16_MAX;
	uint64_t x2266 = 138787859778LLU;
	int8_t x2268 = INT8_MIN;
	volatile uint64_t t42 = 25757LLU;

    t42 = (x2265+((x2266>>x2267)^x2268));

    if (t42 != 18446743934921757377LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2273 = 6293057U;
	uint8_t x2274 = 2U;
	uint32_t x2275 = 0U;
	static int16_t x2276 = INT16_MAX;
	volatile uint32_t t43 = 999575846U;

    t43 = (x2273+((x2274>>x2275)^x2276));

    if (t43 != 6325822U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x2293 = 279814015095293LL;
	uint32_t x2294 = 378013U;
	int8_t x2295 = 16;
	uint16_t x2296 = UINT16_MAX;
	volatile int64_t t44 = -20126695464LL;

    t44 = (x2293+((x2294>>x2295)^x2296));

    if (t44 != 279814015160823LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2325 = 125U;
	volatile uint16_t x2327 = 5U;
	int64_t x2328 = -3911282264982LL;
	volatile uint64_t t45 = 77555LLU;

    t45 = (x2325+((x2326>>x2327)^x2328));

    if (t45 != 17870287232688393234LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x2361 = INT32_MIN;
	static int64_t x2362 = 239LL;
	static int16_t x2364 = INT16_MIN;
	int64_t t46 = -3092637139360LL;

    t46 = (x2361+((x2362>>x2363)^x2364));

    if (t46 != -2147516416LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2393 = 210;
	uint8_t x2394 = UINT8_MAX;
	int8_t x2395 = 0;
	volatile int64_t x2396 = 16439806499837LL;
	volatile int64_t t47 = 318498LL;

    t47 = (x2393+((x2394>>x2395)^x2396));

    if (t47 != 16439806499796LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2401 = 3U;
	volatile int16_t x2404 = INT16_MIN;
	volatile uint32_t t48 = 38U;

    t48 = (x2401+((x2402>>x2403)^x2404));

    if (t48 != 4286479530U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2405 = INT16_MIN;
	static uint8_t x2407 = 56U;
	volatile int64_t t49 = -30174281833890374LL;

    t49 = (x2405+((x2406>>x2407)^x2408));

    if (t49 != -65528LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2465 = INT64_MIN;
	static uint8_t x2466 = UINT8_MAX;
	int16_t x2468 = 4448;

    t50 = (x2465+((x2466>>x2467)^x2468));

    if (t50 != -9223372036854771297LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2486 = INT64_MAX;
	volatile int8_t x2487 = 3;
	static uint8_t x2488 = 2U;
	uint64_t t51 = 3824452015984408722LLU;

    t51 = (x2485+((x2486>>x2487)^x2488));

    if (t51 != 7762933273945516717LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x2513 = 29;
	uint64_t x2514 = 156817LLU;
	static int8_t x2515 = 16;
	uint64_t t52 = 129574052402837326LLU;

    t52 = (x2513+((x2514>>x2515)^x2516));

    if (t52 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2533 = INT32_MIN;
	uint64_t x2534 = 2359525323650541LLU;
	volatile uint64_t t53 = 703305010155255977LLU;

    t53 = (x2533+((x2534>>x2535)^x2536));

    if (t53 != 2359523176172050LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x2609 = INT64_MAX;
	uint64_t x2610 = UINT64_MAX;
	uint8_t x2611 = 4U;
	volatile int8_t x2612 = INT8_MIN;
	static uint64_t t54 = 152944347392323433LLU;

    t54 = (x2609+((x2610>>x2611)^x2612));

    if (t54 != 8070450532247928958LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x2618 = 21U;
	int16_t x2619 = 3;
	volatile uint64_t t55 = 2209156801057413612LLU;

    t55 = (x2617+((x2618>>x2619)^x2620));

    if (t55 != 91209179754620LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x2649 = 15U;
	uint64_t x2650 = UINT64_MAX;
	volatile uint8_t x2651 = 2U;
	uint8_t x2652 = UINT8_MAX;
	uint64_t t56 = 482484840469104LLU;

    t56 = (x2649+((x2650>>x2651)^x2652));

    if (t56 != 4611686018427387663LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2661 = 26725U;
	static uint16_t x2662 = UINT16_MAX;
	volatile uint8_t x2663 = 7U;
	int32_t x2664 = INT32_MIN;

    t57 = (x2661+((x2662>>x2663)^x2664));

    if (t57 != 2147510884U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x2665 = -1LL;
	int8_t x2666 = 50;
	uint16_t x2667 = 1U;
	volatile int64_t t58 = 2119LL;

    t58 = (x2665+((x2666>>x2667)^x2668));

    if (t58 != -104LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2693 = 957508840229LLU;
	int8_t x2694 = 2;
	int32_t x2696 = -1;
	uint64_t t59 = 786341956842LLU;

    t59 = (x2693+((x2694>>x2695)^x2696));

    if (t59 != 957508840228LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2725 = INT64_MAX;
	uint16_t x2726 = 141U;
	static volatile int8_t x2727 = 1;
	static volatile int8_t x2728 = -1;
	volatile int64_t t60 = 1LL;

    t60 = (x2725+((x2726>>x2727)^x2728));

    if (t60 != 9223372036854775736LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x2769 = UINT32_MAX;
	static int32_t x2770 = INT32_MAX;
	int8_t x2771 = 1;
	uint16_t x2772 = UINT16_MAX;
	uint32_t t61 = 2430U;

    t61 = (x2769+((x2770>>x2771)^x2772));

    if (t61 != 1073676287U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x2777 = 1;
	uint64_t x2778 = UINT64_MAX;
	uint8_t x2779 = 63U;
	uint64_t x2780 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

    t62 = (x2777+((x2778>>x2779)^x2780));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x2785 = INT16_MAX;
	volatile int16_t x2786 = INT16_MAX;
	uint8_t x2787 = 0U;
	static volatile int64_t x2788 = INT64_MIN;
	static volatile int64_t t63 = -2407863056351653LL;

    t63 = (x2785+((x2786>>x2787)^x2788));

    if (t63 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x2871 = 6U;
	int32_t x2872 = -819951133;

    t64 = (x2869+((x2870>>x2871)^x2872));

    if (t64 != -819951006) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2913 = -1;
	volatile int32_t x2914 = 2232;
	volatile int32_t t65 = -852791106;

    t65 = (x2913+((x2914>>x2915)^x2916));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x2933 = 3U;
	volatile int32_t x2935 = 1;
	static volatile int64_t x2936 = INT64_MIN;
	volatile int64_t t66 = -1018388028645LL;

    t66 = (x2933+((x2934>>x2935)^x2936));

    if (t66 != -9223372036851896702LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x2985 = UINT16_MAX;
	volatile uint8_t x2986 = 72U;
	uint8_t x2987 = 3U;
	int8_t x2988 = -3;
	int32_t t67 = -69985868;

    t67 = (x2985+((x2986>>x2987)^x2988));

    if (t67 != 65523) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x3009 = INT64_MIN;
	uint64_t x3010 = 1912662575LLU;
	volatile int32_t x3012 = INT32_MIN;

    t68 = (x3009+((x3010>>x3011)^x3012));

    if (t68 != 9223372036619954735LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x3073 = -2880;
	static uint64_t x3074 = 570347511779LLU;
	volatile int8_t x3075 = 5;
	int8_t x3076 = INT8_MIN;

    t69 = (x3073+((x3074>>x3075)^x3076));

    if (t69 != 18446744055886189119LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x3097 = INT64_MIN;
	volatile int64_t x3098 = INT64_MAX;
	uint8_t x3099 = 10U;
	int8_t x3100 = INT8_MAX;
	int64_t t70 = -6834462103LL;

    t70 = (x3097+((x3098>>x3099)^x3100));

    if (t70 != -9214364837600034944LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x3146 = UINT64_MAX;
	volatile int64_t x3148 = INT64_MAX;
	uint64_t t71 = UINT64_MAX;

    t71 = (x3145+((x3146>>x3147)^x3148));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x3281 = 0;
	uint64_t x3282 = UINT64_MAX;
	int16_t x3283 = 1;
	int8_t x3284 = -6;
	uint64_t t72 = 382975LLU;

    t72 = (x3281+((x3282>>x3283)^x3284));

    if (t72 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x3309 = -1;
	uint32_t x3310 = 462653U;
	uint8_t x3311 = 23U;

    t73 = (x3309+((x3310>>x3311)^x3312));

    if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x3393 = 50U;
	uint8_t x3394 = 26U;
	static uint16_t x3395 = 12U;
	volatile int32_t t74 = -25767228;

    t74 = (x3393+((x3394>>x3395)^x3396));

    if (t74 != 49) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x3417 = INT16_MIN;
	uint32_t x3418 = UINT32_MAX;
	uint8_t x3419 = 2U;
	int8_t x3420 = -2;
	uint32_t t75 = 674718738U;

    t75 = (x3417+((x3418>>x3419)^x3420));

    if (t75 != 3221192705U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x3441 = -1;
	static uint8_t x3442 = 34U;
	int64_t x3444 = INT64_MAX;
	volatile int64_t t76 = -28193622626LL;

    t76 = (x3441+((x3442>>x3443)^x3444));

    if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x3481 = 206561524U;
	uint32_t x3482 = 89984U;
	uint16_t x3483 = 1U;
	volatile uint32_t t77 = 306171454U;

    t77 = (x3481+((x3482>>x3483)^x3484));

    if (t77 != 206516531U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x3589 = INT32_MIN;
	static int16_t x3590 = INT16_MAX;
	uint8_t x3591 = 12U;
	uint32_t x3592 = UINT32_MAX;
	uint32_t t78 = 43945U;

    t78 = (x3589+((x3590>>x3591)^x3592));

    if (t78 != 2147483640U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x3725 = 604U;
	int16_t x3726 = INT16_MAX;
	static int64_t x3727 = 21LL;
	uint32_t x3728 = UINT32_MAX;

    t79 = (x3725+((x3726>>x3727)^x3728));

    if (t79 != 603U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x3793 = 0U;
	static uint8_t x3795 = 26U;
	volatile uint32_t t80 = 188U;

    t80 = (x3793+((x3794>>x3795)^x3796));

    if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x3853 = -8467119545169LL;
	uint16_t x3855 = 10U;
	static uint32_t x3856 = UINT32_MAX;
	uint64_t t81 = 35877LLU;

    t81 = (x3853+((x3854>>x3855)^x3856));

    if (t81 != 18446735610884973723LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x3862 = 2U;
	int16_t x3863 = 1;
	volatile uint8_t x3864 = UINT8_MAX;
	int32_t t82 = 1538;

    t82 = (x3861+((x3862>>x3863)^x3864));

    if (t82 != -32514) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x3950 = 1U;
	uint8_t x3951 = 0U;
	int32_t x3952 = INT32_MAX;
	volatile int32_t t83 = 1;

    t83 = (x3949+((x3950>>x3951)^x3952));

    if (t83 != 2147483646) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x3977 = 913229128U;
	uint64_t x3978 = 20LLU;
	int16_t x3979 = 0;
	volatile int32_t x3980 = INT32_MIN;
	volatile uint64_t t84 = 31481601LLU;

    t84 = (x3977+((x3978>>x3979)^x3980));

    if (t84 != 18446744072475297116LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x3997 = 12U;
	volatile uint8_t x3999 = 1U;
	static int32_t x4000 = -236273600;
	static int32_t t85 = 467620446;

    t85 = (x3997+((x3998>>x3999)^x4000));

    if (t85 != -236273589) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4089 = 20U;
	uint16_t x4090 = 1U;
	uint8_t x4091 = 2U;
	uint8_t x4092 = UINT8_MAX;
	volatile int32_t t86 = -1919;

    t86 = (x4089+((x4090>>x4091)^x4092));

    if (t86 != 275) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x4189 = 3675411671240LLU;
	static uint64_t x4190 = UINT64_MAX;
	static uint32_t x4191 = 0U;
	int64_t x4192 = -1LL;
	uint64_t t87 = 20103470LLU;

    t87 = (x4189+((x4190>>x4191)^x4192));

    if (t87 != 3675411671240LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x4217 = 3;
	uint32_t x4218 = UINT32_MAX;
	uint16_t x4219 = 9U;
	int8_t x4220 = INT8_MAX;
	static volatile uint32_t t88 = 5863056U;

    t88 = (x4217+((x4218>>x4219)^x4220));

    if (t88 != 8388483U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x4241 = -5;
	uint32_t x4242 = UINT32_MAX;
	uint8_t x4243 = 2U;
	int8_t x4244 = 0;

    t89 = (x4241+((x4242>>x4243)^x4244));

    if (t89 != 1073741818U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x4337 = INT16_MAX;
	static int64_t x4338 = 498633074554202LL;
	uint8_t x4339 = 1U;
	static uint32_t x4340 = 7527629U;
	int64_t t90 = -2965944250703LL;

    t90 = (x4337+((x4338>>x4339)^x4340));

    if (t90 != 249316540630623LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x4413 = UINT16_MAX;
	volatile uint16_t x4414 = UINT16_MAX;
	int8_t x4415 = 2;
	volatile int32_t x4416 = -1;

    t91 = (x4413+((x4414>>x4415)^x4416));

    if (t91 != 49151) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x4503 = 0U;
	volatile int16_t x4504 = 0;
	static volatile int64_t t92 = -2374362LL;

    t92 = (x4501+((x4502>>x4503)^x4504));

    if (t92 != 6024247414LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4641 = -13;
	static uint16_t x4642 = 0U;
	volatile uint8_t x4643 = 5U;
	int64_t t93 = 2LL;

    t93 = (x4641+((x4642>>x4643)^x4644));

    if (t93 != 993594726926LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x4669 = -1;
	static int64_t x4670 = INT64_MAX;
	int16_t x4671 = 54;
	int64_t x4672 = INT64_MIN;
	static volatile int64_t t94 = -6877964128267LL;

    t94 = (x4669+((x4670>>x4671)^x4672));

    if (t94 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x4794 = 0U;
	int8_t x4795 = 7;
	volatile int32_t x4796 = -1;
	int32_t t95 = 0;

    t95 = (x4793+((x4794>>x4795)^x4796));

    if (t95 != 333) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x4937 = 11510U;
	int16_t x4938 = INT16_MAX;
	uint8_t x4939 = 1U;
	uint32_t t96 = 115014866U;

    t96 = (x4937+((x4938>>x4939)^x4940));

    if (t96 != 4294962422U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x5121 = -531467160400LL;
	int32_t x5122 = INT32_MAX;
	uint8_t x5123 = 1U;
	static int32_t x5124 = 14004;

    t97 = (x5121+((x5122>>x5123)^x5124));

    if (t97 != -530393432581LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x5185 = INT8_MIN;
	int64_t x5186 = INT64_MAX;
	volatile uint8_t x5187 = 28U;
	volatile int32_t x5188 = -65575701;
	volatile int64_t t98 = -12839LL;

    t98 = (x5185+((x5186>>x5187)^x5188));

    if (t98 != -34294162796LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x5237 = 15488;
	uint64_t x5238 = 108278001LLU;
	uint16_t x5239 = 61U;
	uint16_t x5240 = UINT16_MAX;
	uint64_t t99 = 35611531066584160LLU;

    t99 = (x5237+((x5238>>x5239)^x5240));

    if (t99 != 81023LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5301 = 27U;
	uint8_t x5303 = 21U;
	uint64_t x5304 = 13963119LLU;

    t100 = (x5301+((x5302>>x5303)^x5304));

    if (t100 != 13963146LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x5461 = UINT8_MAX;
	int8_t x5462 = INT8_MAX;
	volatile int64_t x5464 = INT64_MIN;

    t101 = (x5461+((x5462>>x5463)^x5464));

    if (t101 != -9223372036854775522LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x5517 = 3134U;
	volatile int16_t x5519 = 20;
	int32_t x5520 = INT32_MIN;

    t102 = (x5517+((x5518>>x5519)^x5520));

    if (t102 != 2147486782U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x5585 = INT64_MIN;
	static uint16_t x5586 = 13U;
	uint16_t x5587 = 0U;
	uint64_t x5588 = UINT64_MAX;

    t103 = (x5585+((x5586>>x5587)^x5588));

    if (t103 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x5673 = 2856256LL;
	uint64_t x5675 = 0LLU;
	uint64_t x5676 = 83207366508LLU;
	uint64_t t104 = 17LLU;

    t104 = (x5673+((x5674>>x5675)^x5676));

    if (t104 != 18446743990505041363LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x5685 = -5;
	volatile uint32_t x5686 = 1513546566U;
	uint16_t x5687 = 7U;
	uint8_t x5688 = 1U;
	volatile uint32_t t105 = 1068702436U;

    t105 = (x5685+((x5686>>x5687)^x5688));

    if (t105 != 11824578U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x5709 = 4101;
	volatile uint32_t x5710 = UINT32_MAX;
	static volatile int16_t x5711 = 28;
	static volatile uint32_t t106 = 454178439U;

    t106 = (x5709+((x5710>>x5711)^x5712));

    if (t106 != 10569U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x5722 = UINT8_MAX;
	uint8_t x5723 = 6U;
	static int16_t x5724 = INT16_MIN;
	volatile uint32_t t107 = 130139661U;

    t107 = (x5721+((x5722>>x5723)^x5724));

    if (t107 != 4294934780U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x5797 = 229U;
	volatile int64_t x5798 = INT64_MAX;
	volatile uint32_t x5799 = 13U;
	volatile uint8_t x5800 = 48U;
	volatile int64_t t108 = -23LL;

    t108 = (x5797+((x5798>>x5799)^x5800));

    if (t108 != 1125899906842804LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x5821 = 114350;
	uint64_t x5823 = 6LLU;
	int16_t x5824 = -63;

    t109 = (x5821+((x5822>>x5823)^x5824));

    if (t109 != 18441179428933937901LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x5925 = 42;
	uint64_t x5926 = 1012377LLU;
	int16_t x5927 = 51;
	static int8_t x5928 = INT8_MIN;
	static volatile uint64_t t110 = 7953581024045LLU;

    t110 = (x5925+((x5926>>x5927)^x5928));

    if (t110 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x5981 = INT64_MAX;
	uint64_t x5984 = 1LLU;
	volatile uint64_t t111 = 31543520256149LLU;

    t111 = (x5981+((x5982>>x5983)^x5984));

    if (t111 != 9223372036854836391LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x5986 = 771U;
	uint8_t x5987 = 6U;
	static volatile int32_t x5988 = INT32_MIN;

    t112 = (x5985+((x5986>>x5987)^x5988));

    if (t112 != 2147495369U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x6029 = INT64_MIN;
	int16_t x6030 = INT16_MAX;
	int64_t x6032 = 127LL;
	static int64_t t113 = 31315792129400999LL;

    t113 = (x6029+((x6030>>x6031)^x6032));

    if (t113 != -9223372036854767744LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x6041 = 40U;
	int64_t x6042 = 4111449921773LL;
	uint8_t x6043 = 49U;
	int8_t x6044 = INT8_MIN;
	int64_t t114 = 159650185582408LL;

    t114 = (x6041+((x6042>>x6043)^x6044));

    if (t114 != -88LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x6225 = INT8_MIN;
	int16_t x6226 = INT16_MAX;
	volatile uint8_t x6227 = 2U;
	int32_t x6228 = -1;
	volatile int32_t t115 = 23086579;

    t115 = (x6225+((x6226>>x6227)^x6228));

    if (t115 != -8320) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x6367 = 1;

    t116 = (x6365+((x6366>>x6367)^x6368));

    if (t116 != 14352203LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x6389 = -1;
	int32_t x6390 = 968384380;
	static int8_t x6391 = 0;
	static uint16_t x6392 = UINT16_MAX;
	int32_t t117 = 203999178;

    t117 = (x6389+((x6390>>x6391)^x6392));

    if (t117 != 968401026) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x6395 = 31U;
	volatile uint64_t t118 = 322092537649271831LLU;

    t118 = (x6393+((x6394>>x6395)^x6396));

    if (t118 != 125LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x6413 = INT16_MAX;
	int32_t x6414 = 739;
	volatile int8_t x6415 = 3;
	int8_t x6416 = -6;
	int32_t t119 = 1827;

    t119 = (x6413+((x6414>>x6415)^x6416));

    if (t119 != 32677) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x6477 = INT8_MIN;
	int16_t x6479 = 0;
	int16_t x6480 = INT16_MIN;
	int64_t t120 = 209808830977036LL;

    t120 = (x6477+((x6478>>x6479)^x6480));

    if (t120 != -7349110LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x6501 = 921049615165LLU;
	int8_t x6502 = 51;
	uint16_t x6503 = 0U;
	uint16_t x6504 = 779U;
	uint64_t t121 = 39048652LLU;

    t121 = (x6501+((x6502>>x6503)^x6504));

    if (t121 != 921049615989LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x6537 = INT32_MIN;
	static int64_t x6538 = 106935117440463LL;
	int64_t t122 = -1636522553647242LL;

    t122 = (x6537+((x6538>>x6539)^x6540));

    if (t122 != 1115917153LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x6594 = 17U;
	volatile uint16_t x6595 = 1U;
	static int32_t x6596 = 6900;

    t123 = (x6593+((x6594>>x6595)^x6596));

    if (t123 != 9313) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x6637 = INT16_MIN;
	uint16_t x6638 = 10U;
	static volatile int8_t x6639 = 0;
	int32_t t124 = 0;

    t124 = (x6637+((x6638>>x6639)^x6640));

    if (t124 != -32779) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x6653 = INT64_MIN;
	int32_t x6654 = 1;
	uint8_t x6655 = 11U;
	int64_t t125 = 36584341112374LL;

    t125 = (x6653+((x6654>>x6655)^x6656));

    if (t125 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x6805 = INT16_MIN;
	int32_t x6807 = 1;
	static int8_t x6808 = -2;

    t126 = (x6805+((x6806>>x6807)^x6808));

    if (t126 != -32793) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x6917 = 1601709721848215LLU;
	int8_t x6918 = INT8_MAX;
	static uint8_t x6919 = 3U;
	uint16_t x6920 = UINT16_MAX;
	uint64_t t127 = 688LLU;

    t127 = (x6917+((x6918>>x6919)^x6920));

    if (t127 != 1601709721913735LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x6925 = INT8_MAX;
	int8_t x6926 = INT8_MAX;
	int8_t x6927 = 6;
	uint16_t x6928 = UINT16_MAX;
	volatile int32_t t128 = -7064;

    t128 = (x6925+((x6926>>x6927)^x6928));

    if (t128 != 65661) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x7029 = UINT32_MAX;
	uint64_t x7030 = UINT64_MAX;
	volatile int32_t x7031 = 0;
	int32_t x7032 = -1;
	uint64_t t129 = 7844224504530874LLU;

    t129 = (x7029+((x7030>>x7031)^x7032));

    if (t129 != 4294967295LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x7122 = UINT32_MAX;
	int16_t x7123 = 1;

    t130 = (x7121+((x7122>>x7123)^x7124));

    if (t130 != 32767U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x7313 = UINT16_MAX;
	int8_t x7315 = 3;
	int32_t x7316 = -1;
	uint64_t t131 = 567247031777912778LLU;

    t131 = (x7313+((x7314>>x7315)^x7316));

    if (t131 != 18446744066873739285LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x7321 = UINT16_MAX;
	uint8_t x7322 = UINT8_MAX;
	uint32_t x7323 = 2U;
	static int64_t x7324 = 43LL;
	int64_t t132 = -249679841907861LL;

    t132 = (x7321+((x7322>>x7323)^x7324));

    if (t132 != 65555LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x7325 = 0LLU;
	int32_t x7326 = 12;
	uint8_t x7327 = 1U;
	volatile uint16_t x7328 = UINT16_MAX;
	uint64_t t133 = 68038877114292328LLU;

    t133 = (x7325+((x7326>>x7327)^x7328));

    if (t133 != 65529LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x7358 = 4U;
	static uint16_t x7359 = 1U;
	int64_t x7360 = 2646395993832LL;
	int64_t t134 = 57LL;

    t134 = (x7357+((x7358>>x7359)^x7360));

    if (t134 != 2644248510186LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x7461 = 45818LLU;
	static int16_t x7463 = 1;
	int64_t x7464 = 27497LL;
	uint64_t t135 = 549444040665LLU;

    t135 = (x7461+((x7462>>x7463)^x7464));

    if (t135 != 21759851LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x7538 = UINT16_MAX;
	volatile uint8_t x7540 = UINT8_MAX;
	volatile int32_t t136 = 7;

    t136 = (x7537+((x7538>>x7539)^x7540));

    if (t136 != 65279) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x7565 = INT16_MIN;
	int8_t x7568 = -1;

    t137 = (x7565+((x7566>>x7567)^x7568));

    if (t137 != -32834) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x7645 = 1658521162851510LLU;
	int32_t x7646 = 1954;
	volatile uint8_t x7647 = 3U;
	int8_t x7648 = INT8_MIN;
	volatile uint64_t t138 = 3878038520705679818LLU;

    t138 = (x7645+((x7646>>x7647)^x7648));

    if (t138 != 1658521162851370LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x7765 = -34343742034439671LL;
	uint32_t x7766 = UINT32_MAX;
	int16_t x7767 = 1;
	static int64_t t139 = -3LL;

    t139 = (x7765+((x7766>>x7767)^x7768));

    if (t139 != -34343739886955896LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x7793 = -1579LL;
	volatile uint64_t x7794 = UINT64_MAX;
	int16_t x7796 = 1245;
	volatile uint64_t t140 = 3884657778940430816LLU;

    t140 = (x7793+((x7794>>x7795)^x7796));

    if (t140 != 9223372036854772983LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x7809 = INT32_MIN;
	uint32_t x7810 = 6U;
	static uint8_t x7811 = 17U;
	int8_t x7812 = -1;
	static uint32_t t141 = 505510452U;

    t141 = (x7809+((x7810>>x7811)^x7812));

    if (t141 != 2147483647U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x7825 = INT16_MAX;
	volatile uint64_t x7826 = UINT64_MAX;
	uint32_t x7827 = 0U;
	uint64_t x7828 = UINT64_MAX;

    t142 = (x7825+((x7826>>x7827)^x7828));

    if (t142 != 32767LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x7845 = UINT16_MAX;
	int32_t x7846 = 1;
	uint32_t x7847 = 0U;
	int8_t x7848 = INT8_MIN;
	static volatile int32_t t143 = -110319;

    t143 = (x7845+((x7846>>x7847)^x7848));

    if (t143 != 65408) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x7965 = 1U;
	uint16_t x7968 = 14518U;

    t144 = (x7965+((x7966>>x7967)^x7968));

    if (t144 != 418205783917716LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x8087 = 0U;
	volatile int64_t x8088 = INT64_MIN;
	static int64_t t145 = 177091076446739711LL;

    t145 = (x8085+((x8086>>x8087)^x8088));

    if (t145 != -129LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x8153 = 3U;
	static uint8_t x8154 = 57U;
	volatile uint16_t x8155 = 4U;
	int64_t x8156 = -1LL;
	static volatile int64_t t146 = 0LL;

    t146 = (x8153+((x8154>>x8155)^x8156));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x8186 = INT64_MAX;
	uint8_t x8187 = 50U;
	int64_t t147 = -2797286082LL;

    t147 = (x8185+((x8186>>x8187)^x8188));

    if (t147 != -24450LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x8257 = INT8_MAX;
	int64_t x8258 = INT64_MAX;
	int8_t x8259 = 39;
	volatile int64_t t148 = -5019LL;

    t148 = (x8257+((x8258>>x8259)^x8260));

    if (t148 != -16777089LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x8305 = INT16_MIN;
	uint32_t x8306 = UINT32_MAX;
	int8_t x8307 = 15;
	volatile int64_t x8308 = -2085LL;
	volatile int64_t t149 = -185371LL;

    t149 = (x8305+((x8306>>x8307)^x8308));

    if (t149 != -161756LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x8341 = INT64_MAX;
	int8_t x8342 = 6;
	volatile uint8_t x8343 = 4U;
	uint64_t x8344 = UINT64_MAX;
	volatile uint64_t t150 = 892LLU;

    t150 = (x8341+((x8342>>x8343)^x8344));

    if (t150 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x8421 = UINT16_MAX;
	uint16_t x8422 = 1093U;
	uint8_t x8423 = 2U;
	int16_t x8424 = INT16_MIN;
	volatile int32_t t151 = -91172652;

    t151 = (x8421+((x8422>>x8423)^x8424));

    if (t151 != 33040) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x8498 = 137U;
	int8_t x8499 = 0;
	static volatile int32_t t152 = 2042650;

    t152 = (x8497+((x8498>>x8499)^x8500));

    if (t152 != -138) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x8574 = UINT32_MAX;
	int32_t x8575 = 12;
	uint16_t x8576 = 3U;
	volatile uint32_t t153 = 13U;

    t153 = (x8573+((x8574>>x8575)^x8576));

    if (t153 != 1048575U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x8665 = INT64_MIN;
	uint8_t x8666 = UINT8_MAX;
	int16_t x8667 = 1;
	uint8_t x8668 = 1U;
	int64_t t154 = 34606938699401LL;

    t154 = (x8665+((x8666>>x8667)^x8668));

    if (t154 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x8777 = UINT8_MAX;
	static int32_t x8778 = 181909;
	static int8_t x8779 = 1;
	volatile int64_t x8780 = INT64_MAX;
	volatile int64_t t155 = 16626474401678049LL;

    t155 = (x8777+((x8778>>x8779)^x8780));

    if (t155 != 9223372036854685108LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x8857 = 1825489U;
	volatile uint16_t x8858 = 1178U;
	volatile uint32_t t156 = 3903U;

    t156 = (x8857+((x8858>>x8859)^x8860));

    if (t156 != 1825415U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x8941 = 73U;
	uint64_t x8942 = 222459971618LLU;
	static uint16_t x8943 = 37U;
	int32_t x8944 = INT32_MIN;
	volatile uint64_t t157 = 859019195LLU;

    t157 = (x8941+((x8942>>x8943)^x8944));

    if (t157 != 18446744071562068042LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x8954 = UINT64_MAX;
	uint16_t x8955 = 2U;
	volatile int16_t x8956 = INT16_MIN;
	uint64_t t158 = 1387997882359LLU;

    t158 = (x8953+((x8954>>x8955)^x8956));

    if (t158 != 13835058055282163711LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x9017 = UINT32_MAX;
	volatile int64_t x9018 = 453824066LL;
	int8_t x9019 = 0;
	int8_t x9020 = INT8_MIN;
	int64_t t159 = -69838206000LL;

    t159 = (x9017+((x9018>>x9019)^x9020));

    if (t159 != 3841143233LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x9025 = 162316LLU;
	uint32_t x9026 = UINT32_MAX;
	uint32_t x9027 = 25U;
	volatile int16_t x9028 = -1;
	uint64_t t160 = 3016705LLU;

    t160 = (x9025+((x9026>>x9027)^x9028));

    if (t160 != 4295129484LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x9077 = UINT64_MAX;
	volatile int64_t x9078 = INT64_MAX;
	int16_t x9079 = 6;

    t161 = (x9077+((x9078>>x9079)^x9080));

    if (t161 != 144115188075823103LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x9138 = 10U;
	volatile int8_t x9139 = 22;
	int64_t x9140 = INT64_MAX;
	int64_t t162 = 0LL;

    t162 = (x9137+((x9138>>x9139)^x9140));

    if (t162 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x9181 = 31820391753900190LL;
	static uint16_t x9182 = 2988U;
	int8_t x9184 = INT8_MIN;
	volatile int64_t t163 = -274368LL;

    t163 = (x9181+((x9182>>x9183)^x9184));

    if (t163 != 31820391753897162LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x9185 = INT8_MAX;
	int32_t x9186 = INT32_MAX;
	static uint8_t x9187 = 4U;
	static volatile int32_t t164 = 2;

    t164 = (x9185+((x9186>>x9187)^x9188));

    if (t164 != -134217596) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x9295 = 1U;
	int64_t x9296 = INT64_MAX;

    t165 = (x9293+((x9294>>x9295)^x9296));

    if (t165 != 9223372036854775537LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x9333 = INT64_MAX;
	uint64_t x9334 = 28650031722351783LLU;
	volatile uint16_t x9335 = 14U;
	int32_t x9336 = -1;
	volatile uint64_t t166 = 14LLU;

    t166 = (x9333+((x9334>>x9335)^x9336));

    if (t166 != 9223370288195613065LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x9423 = 19U;
	static uint32_t x9424 = 6708U;

    t167 = (x9421+((x9422>>x9423)^x9424));

    if (t167 != 4294941236U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x9433 = INT16_MIN;
	uint32_t x9434 = 14133524U;
	int8_t x9435 = 20;
	static int32_t x9436 = -1;
	uint32_t t168 = 251U;

    t168 = (x9433+((x9434>>x9435)^x9436));

    if (t168 != 4294934514U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x9525 = UINT16_MAX;
	uint64_t x9526 = 390726505093967LLU;
	volatile uint16_t x9527 = 4U;
	static volatile int32_t x9528 = INT32_MIN;
	uint64_t t169 = 401950259LLU;

    t169 = (x9525+((x9526>>x9527)^x9528));

    if (t169 != 18446719653895579059LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x9538 = 3005677;
	uint16_t x9539 = 4U;
	volatile uint64_t x9540 = UINT64_MAX;
	volatile uint64_t t170 = 1675304349957013076LLU;

    t170 = (x9537+((x9538>>x9539)^x9540));

    if (t170 != 18446744073709364000LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x9777 = 127159963U;
	uint16_t x9778 = 18U;
	uint8_t x9779 = 11U;
	uint32_t x9780 = 2939441U;
	static uint32_t t171 = 29680060U;

    t171 = (x9777+((x9778>>x9779)^x9780));

    if (t171 != 130099404U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x9901 = INT64_MIN;
	volatile int16_t x9902 = INT16_MAX;
	uint64_t x9904 = UINT64_MAX;
	static volatile uint64_t t172 = 249443859364LLU;

    t172 = (x9901+((x9902>>x9903)^x9904));

    if (t172 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x9905 = 31U;
	uint8_t x9907 = 0U;
	uint8_t x9908 = 2U;

    t173 = (x9905+((x9906>>x9907)^x9908));

    if (t173 != 332695LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x9985 = INT64_MAX;
	volatile uint64_t x9986 = 42488032861397LLU;
	volatile uint16_t x9987 = 14U;
	uint16_t x9988 = 264U;

    t174 = (x9985+((x9986>>x9987)^x9988));

    if (t174 != 9223372039448039779LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x10185 = INT32_MAX;
	static uint32_t x10186 = UINT32_MAX;
	uint64_t x10187 = 7LLU;
	volatile int8_t x10188 = INT8_MIN;

    t175 = (x10185+((x10186>>x10187)^x10188));

    if (t175 != 2113929342U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x10265 = UINT32_MAX;
	volatile uint32_t x10266 = UINT32_MAX;
	uint8_t x10267 = 0U;
	volatile int64_t x10268 = -472658857896366LL;
	int64_t t176 = 152LL;

    t176 = (x10265+((x10266>>x10267)^x10268));

    if (t176 != -472654854018644LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x10377 = UINT32_MAX;
	uint8_t x10379 = 0U;

    t177 = (x10377+((x10378>>x10379)^x10380));

    if (t177 != 22U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x10413 = INT64_MIN;
	uint64_t x10414 = UINT64_MAX;
	volatile int64_t x10416 = INT64_MAX;
	static volatile uint64_t t178 = 5920672693LLU;

    t178 = (x10413+((x10414>>x10415)^x10416));

    if (t178 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x10437 = INT32_MAX;

    t179 = (x10437+((x10438>>x10439)^x10440));

    if (t179 != 1800631993LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x10613 = -1LL;
	uint32_t x10614 = UINT32_MAX;
	volatile int32_t x10615 = 21;

    t180 = (x10613+((x10614>>x10615)^x10616));

    if (t180 != 10685LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x10693 = 11U;
	uint32_t x10694 = 7U;
	int8_t x10695 = 14;
	int16_t x10696 = -1;
	volatile uint32_t t181 = 1U;

    t181 = (x10693+((x10694>>x10695)^x10696));

    if (t181 != 10U) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x10725 = 893403663563LLU;
	int64_t x10728 = 5320960173841720LL;
	volatile uint64_t t182 = 2484860397LLU;

    t182 = (x10725+((x10726>>x10727)^x10728));

    if (t182 != 5321853577504458LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x10753 = 2059740473557212LL;
	volatile int16_t x10754 = INT16_MAX;
	int32_t x10755 = 7;
	volatile int64_t x10756 = -1LL;
	volatile int64_t t183 = 397045904LL;

    t183 = (x10753+((x10754>>x10755)^x10756));

    if (t183 != 2059740473556956LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x10813 = INT32_MAX;
	uint8_t x10814 = 13U;
	int8_t x10815 = 29;
	volatile int8_t x10816 = INT8_MIN;
	int32_t t184 = -90289755;

    t184 = (x10813+((x10814>>x10815)^x10816));

    if (t184 != 2147483519) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x10833 = 60U;
	static int16_t x10835 = 7;
	uint64_t t185 = 12212242438396LLU;

    t185 = (x10833+((x10834>>x10835)^x10836));

    if (t185 != 18302628887781179451LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x10837 = INT16_MIN;
	uint16_t x10838 = 44U;
	uint64_t x10840 = 8081705713LLU;
	static uint64_t t186 = 2852146282573685293LLU;

    t186 = (x10837+((x10838>>x10839)^x10840));

    if (t186 != 8081672954LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10845 = INT16_MAX;
	uint8_t x10846 = UINT8_MAX;

    t187 = (x10845+((x10846>>x10847)^x10848));

    if (t187 != 32776) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x10906 = 1172697U;
	uint8_t x10907 = 22U;
	int8_t x10908 = INT8_MAX;

    t188 = (x10905+((x10906>>x10907)^x10908));

    if (t188 != 254U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x11029 = INT8_MIN;
	int64_t x11030 = INT64_MAX;
	int8_t x11031 = 0;
	volatile uint64_t x11032 = 41964928460LLU;
	volatile uint64_t t189 = 15971499782LLU;

    t189 = (x11029+((x11030>>x11031)^x11032));

    if (t189 != 9223371994889847219LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x11041 = -1LL;
	static volatile int32_t x11042 = 9;
	static uint8_t x11043 = 24U;
	static uint16_t x11044 = 1580U;
	volatile int64_t t190 = 18117898016LL;

    t190 = (x11041+((x11042>>x11043)^x11044));

    if (t190 != 1579LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x11121 = -3813048386116547LL;
	volatile int64_t x11122 = 21599LL;
	int8_t x11124 = 0;

    t191 = (x11121+((x11122>>x11123)^x11124));

    if (t191 != -3813048386116547LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x11129 = INT16_MAX;
	uint16_t x11130 = 15306U;
	int16_t x11132 = -5167;
	static int32_t t192 = 3307;

    t192 = (x11129+((x11130>>x11131)^x11132));

    if (t192 != 27605) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x11141 = 0U;
	uint64_t x11143 = 2LLU;
	int32_t x11144 = 200167505;
	volatile uint32_t t193 = 0U;

    t193 = (x11141+((x11142>>x11143)^x11144));

    if (t193 != 200738943U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x11161 = -108638696196508LL;
	static volatile uint32_t x11162 = 5647U;
	uint8_t x11163 = 3U;
	int64_t t194 = -24157298226371LL;

    t194 = (x11161+((x11162>>x11163)^x11164));

    if (t194 != -108636548712155LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x11165 = UINT8_MAX;
	int32_t x11166 = 0;
	static int8_t x11167 = 27;
	int16_t x11168 = INT16_MAX;
	static volatile int32_t t195 = -80559;

    t195 = (x11165+((x11166>>x11167)^x11168));

    if (t195 != 33022) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x11181 = 2U;
	static uint16_t x11182 = UINT16_MAX;
	volatile uint8_t x11183 = 1U;
	uint8_t x11184 = 2U;
	int32_t t196 = 66708360;

    t196 = (x11181+((x11182>>x11183)^x11184));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x11198 = INT32_MAX;
	uint8_t x11199 = 23U;
	uint16_t x11200 = 474U;

    t197 = (x11197+((x11198>>x11199)^x11200));

    if (t197 != -9223372036854775515LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x11241 = UINT64_MAX;
	uint8_t x11242 = 49U;
	volatile uint16_t x11243 = 1U;

    t198 = (x11241+((x11242>>x11243)^x11244));

    if (t198 != 17615013064698171255LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x11485 = -6;
	static uint32_t x11486 = UINT32_MAX;
	static volatile int8_t x11487 = 0;
	int32_t x11488 = 8441191;
	uint32_t t199 = 12243U;

    t199 = (x11485+((x11486>>x11487)^x11488));

    if (t199 != 4286526098U) { NG(); } else { ; }
	
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

