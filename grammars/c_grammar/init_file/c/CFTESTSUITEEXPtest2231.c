
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

int16_t x400 = 1;
uint32_t x409 = 3U;
static int8_t x410 = 1;
static int32_t x540 = 0;
int64_t x649 = INT64_MIN;
int8_t x651 = -1;
uint64_t x815 = UINT64_MAX;
uint64_t t9 = 427744271249111LLU;
static int16_t x897 = INT16_MAX;
uint8_t x900 = 11U;
volatile uint32_t t12 = 1U;
int64_t x1031 = 6LL;
volatile int64_t t15 = 13183262329861LL;
uint64_t t16 = 196LLU;
int64_t x1255 = INT64_MAX;
uint16_t x1272 = 14U;
int8_t x1315 = -1;
int64_t x1326 = 248021261648958486LL;
int8_t x1328 = 1;
static volatile int64_t t22 = -470840827LL;
volatile uint16_t x1529 = 13799U;
volatile int8_t x1704 = 1;
int32_t t26 = -1367526;
volatile uint64_t x1727 = 14228510241631LLU;
volatile uint64_t x1770 = 490702465451276LLU;
int32_t x1827 = -31;
uint8_t x1828 = 1U;
int16_t x2073 = -1;
int16_t x2075 = -1;
uint16_t x2076 = 14U;
volatile uint32_t x2115 = 5800636U;
volatile uint8_t x2126 = UINT8_MAX;
uint8_t x2134 = 104U;
int8_t x2141 = INT8_MIN;
int8_t x2143 = -1;
int8_t x2144 = 12;
volatile int32_t t36 = -498968;
uint16_t x2230 = UINT16_MAX;
uint8_t x2238 = 1U;
uint16_t x2433 = UINT16_MAX;
int64_t x2435 = -1LL;
volatile int64_t x2526 = -1LL;
uint16_t x2528 = 17U;
int64_t x2906 = -1374589093932LL;
uint32_t x2954 = UINT32_MAX;
static uint8_t x3020 = 5U;
int64_t x3094 = INT64_MAX;
uint64_t t49 = 9698LLU;
uint8_t x3156 = 7U;
uint8_t x3166 = 9U;
int32_t x3267 = -5652;
uint16_t x3268 = 3U;
static int64_t x3431 = -1LL;
int64_t t56 = -18LL;
static volatile uint32_t x3472 = 1U;
uint64_t t57 = 60996LLU;
uint16_t x3485 = UINT16_MAX;
static uint16_t x3487 = 1U;
uint8_t x3598 = UINT8_MAX;
uint32_t x3707 = 4731U;
uint64_t t62 = 29660582957136257LLU;
int16_t x3726 = 95;
volatile int32_t t65 = 1194673;
volatile uint16_t x3949 = 0U;
int16_t x3951 = 8;
uint32_t x3952 = 7U;
uint32_t t66 = 38939U;
int64_t x3956 = 17LL;
int32_t t67 = -128411;
volatile int64_t t68 = 3410377343041695524LL;
static uint16_t x4370 = 177U;
uint8_t x4399 = 3U;
volatile int32_t t72 = 1009593019;
int16_t x4439 = 36;
uint16_t x4494 = 1061U;
int8_t x4495 = INT8_MAX;
int32_t t76 = 9366530;
volatile int16_t x4737 = INT16_MIN;
int16_t x4738 = INT16_MAX;
volatile uint64_t t77 = 1LLU;
int32_t t78 = -23124167;
static uint64_t x4828 = 7LLU;
volatile uint64_t x4911 = 5662LLU;
volatile uint64_t t80 = 3682344549650498756LLU;
uint8_t x4940 = 5U;
uint64_t x4959 = 6153647512LLU;
int64_t x5010 = INT64_MAX;
volatile int32_t x5069 = -1;
uint64_t t85 = 43269673945189LLU;
volatile int64_t t86 = 4181447245306102475LL;
volatile int32_t x5274 = 8739038;
uint64_t x5301 = 5543694715078821051LLU;
uint8_t x5394 = UINT8_MAX;
volatile uint32_t t91 = 328274U;
static uint16_t x5488 = 2U;
int32_t x5724 = 26;
static uint16_t x5787 = 4U;
uint16_t x5997 = 2684U;
uint8_t x5998 = 1U;
int16_t x6046 = 4919;
static volatile int64_t t101 = 191207014299LL;
int16_t x6235 = -12;
static int16_t x6236 = 1;
uint16_t x6241 = 4U;
int32_t t107 = 121;
uint16_t x6290 = UINT16_MAX;
static int16_t x6475 = -1;
volatile int8_t x6562 = -1;
int8_t x6563 = INT8_MAX;
uint8_t x6611 = 3U;
int8_t x6647 = -53;
uint8_t x6648 = 2U;
static volatile int64_t t116 = -5171593808LL;
int16_t x6758 = INT16_MAX;
int64_t x6845 = INT64_MIN;
static uint16_t x6848 = 3U;
int64_t t119 = -2458LL;
uint16_t x6877 = 21U;
uint64_t x6949 = 25516LLU;
uint16_t x6967 = 2U;
uint8_t x7045 = UINT8_MAX;
int16_t x7046 = INT16_MAX;
uint16_t x7208 = 2U;
volatile uint64_t t125 = 35517734158LLU;
static int64_t x7553 = INT64_MIN;
volatile int64_t x7638 = INT64_MAX;
volatile int64_t t133 = 6776739825543235LL;
uint64_t x7705 = 344691LLU;
static volatile uint16_t x7707 = UINT16_MAX;
uint32_t x7942 = 7U;
static uint16_t x7944 = 1U;
static volatile uint64_t t135 = 236LLU;
static int8_t x7952 = 1;
static volatile uint16_t x7985 = UINT16_MAX;
uint32_t x7988 = 22U;
int64_t x8022 = 32608317419481LL;
int32_t x8109 = -1;
uint8_t x8112 = 1U;
int8_t x8374 = INT8_MAX;
static uint8_t x8375 = 3U;
uint8_t x8376 = 0U;
volatile int8_t x8417 = INT8_MIN;
uint16_t x8445 = UINT16_MAX;
static int16_t x8446 = INT16_MAX;
uint32_t t143 = 439351U;
static int8_t x8473 = -1;
int32_t x8476 = 4;
int8_t x8488 = 0;
uint64_t x8526 = 27337LLU;
int32_t x8529 = -2310208;
static volatile uint8_t x8530 = UINT8_MAX;
static int8_t x8532 = 0;
uint16_t x8582 = UINT16_MAX;
uint16_t x8584 = 0U;
static int64_t x8601 = INT64_MAX;
uint16_t x8604 = 6U;
int32_t x8666 = 85890751;
uint8_t x8668 = 0U;
static volatile uint64_t t153 = 6129982161247543LLU;
int16_t x8678 = INT16_MAX;
volatile uint32_t x8813 = 427U;
uint32_t x8814 = 21615U;
uint16_t x8994 = 1123U;
volatile int16_t x9089 = INT16_MIN;
int8_t x9231 = INT8_MAX;
static int32_t x9318 = -162824275;
uint8_t x9319 = UINT8_MAX;
uint32_t t165 = 12546U;
static volatile uint16_t x9397 = 1009U;
uint32_t x9398 = 1468U;
volatile int64_t t167 = 265499608128557LL;
volatile int64_t x9511 = -276769998784582LL;
static uint16_t x9577 = 25015U;
int16_t x9579 = 3;
int32_t x9849 = -4990;
static int16_t x9852 = 1;
volatile uint64_t t176 = 434921116617820LLU;
volatile uint16_t x9877 = 1U;
uint64_t x9896 = 3LLU;
volatile int32_t t178 = 294752;
volatile int16_t x9899 = -1;
int8_t x10020 = 0;
volatile int64_t x10237 = 1311091215LL;
volatile uint8_t x10238 = 10U;
volatile int64_t t181 = -69540720484993LL;
int64_t x10301 = -4593468997LL;
uint64_t t185 = 74604215576213LLU;
int8_t x10814 = -1;
int64_t x10845 = INT64_MIN;
static uint8_t x10848 = 15U;
static int8_t x11014 = INT8_MIN;
static volatile int32_t x11053 = INT32_MAX;
static uint8_t x11056 = 21U;
volatile uint64_t t192 = 8269291LLU;
int8_t x11235 = INT8_MAX;
int8_t x11253 = 1;
int64_t x11254 = 439792793895785027LL;
volatile int64_t x11269 = INT64_MIN;
static volatile uint16_t x11270 = 2U;
volatile int8_t x11271 = -1;
uint8_t x11272 = 2U;
volatile uint32_t x11358 = UINT32_MAX;
int8_t x11453 = 3;
static uint8_t x11456 = 6U;
volatile uint64_t t198 = 12622856292937025LLU;
static volatile uint64_t x11633 = UINT64_MAX;
uint8_t x11634 = 58U;


void f0(void) {
    	uint32_t x225 = 517049U;
	int8_t x226 = 4;
	uint64_t x227 = 178472671834277287LLU;
	static uint8_t x228 = 47U;
	uint64_t t0 = 10779452241884435LLU;

    t0 = (x225%((x226&x227)<<x228));

    if (t0 != 517049LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x229 = INT8_MAX;
	uint32_t x230 = 1U;
	int32_t x231 = -1;
	static uint8_t x232 = 28U;
	volatile uint32_t t1 = 15060U;

    t1 = (x229%((x230&x231)<<x232));

    if (t1 != 127U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = 56;
	volatile uint64_t t2 = 954204974LLU;

    t2 = (x397%((x398&x399)<<x400));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x411 = UINT64_MAX;
	static volatile uint16_t x412 = 36U;
	volatile uint64_t t3 = 9966474366LLU;

    t3 = (x409%((x410&x411)<<x412));

    if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x477 = INT16_MIN;
	uint64_t x478 = 62114283624802515LLU;
	int16_t x479 = -1;
	static int32_t x480 = 0;
	uint64_t t4 = 14482693220029914LLU;

    t4 = (x477%((x478&x479)<<x480));

    if (t4 != 60916120767974408LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x537 = UINT32_MAX;
	int8_t x538 = INT8_MIN;
	uint8_t x539 = UINT8_MAX;
	volatile uint32_t t5 = 196014U;

    t5 = (x537%((x538&x539)<<x540));

    if (t5 != 127U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = 397668;
	int16_t x575 = -1;
	volatile uint8_t x576 = 4U;
	volatile int32_t t6 = -1467520;

    t6 = (x573%((x574&x575)<<x576));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x650 = 26552U;
	uint64_t x652 = 2LLU;
	volatile int64_t t7 = -112199650388609LL;

    t7 = (x649%((x650&x651)<<x652));

    if (t7 != -24928LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = -5;
	int64_t x787 = 208988986168463LL;
	volatile uint32_t x788 = 14U;
	int64_t t8 = 65LL;

    t8 = (x785%((x786&x787)<<x788));

    if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = -1;
	volatile uint16_t x816 = 17U;

    t9 = (x813%((x814&x815)<<x816));

    if (t9 != 98304LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x873 = 4;
	volatile int8_t x874 = -1;
	volatile uint64_t x875 = UINT64_MAX;
	uint16_t x876 = 17U;
	static uint64_t t10 = 190LLU;

    t10 = (x873%((x874&x875)<<x876));

    if (t10 != 4LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x881 = INT64_MAX;
	int8_t x882 = INT8_MAX;
	volatile int8_t x883 = -1;
	static int8_t x884 = 1;
	int64_t t11 = -31018680LL;

    t11 = (x881%((x882&x883)<<x884));

    if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x898 = INT16_MIN;
	uint32_t x899 = UINT32_MAX;

    t12 = (x897%((x898&x899)<<x900));

    if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x1029 = 152U;
	volatile int8_t x1030 = -1;
	int32_t x1032 = 50;
	int64_t t13 = -177LL;

    t13 = (x1029%((x1030&x1031)<<x1032));

    if (t13 != 152LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x1137 = 234477522365424039LL;
	int8_t x1138 = INT8_MAX;
	uint64_t x1139 = 1122076LLU;
	volatile int16_t x1140 = 20;
	uint64_t t14 = 23206262LLU;

    t14 = (x1137%((x1138&x1139)<<x1140));

    if (t14 != 6791591LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1149 = 20435;
	volatile int64_t x1150 = INT64_MAX;
	uint16_t x1151 = UINT16_MAX;
	uint16_t x1152 = 0U;

    t15 = (x1149%((x1150&x1151)<<x1152));

    if (t15 != 20435LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1161 = 1861;
	uint16_t x1162 = 1460U;
	volatile uint64_t x1163 = 1014032620LLU;
	int8_t x1164 = 1;

    t16 = (x1161%((x1162&x1163)<<x1164));

    if (t16 != 221LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x1253 = INT8_MIN;
	volatile uint8_t x1254 = UINT8_MAX;
	uint8_t x1256 = 0U;
	int64_t t17 = 350396054453LL;

    t17 = (x1253%((x1254&x1255)<<x1256));

    if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1269 = 114406U;
	uint64_t x1270 = UINT64_MAX;
	uint16_t x1271 = 9U;
	static volatile uint64_t t18 = 466619605138LLU;

    t18 = (x1269%((x1270&x1271)<<x1272));

    if (t18 != 114406LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1305 = -1;
	volatile int16_t x1306 = -129;
	uint32_t x1307 = UINT32_MAX;
	uint8_t x1308 = 1U;
	static uint32_t t19 = 927U;

    t19 = (x1305%((x1306&x1307)<<x1308));

    if (t19 != 257U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1313 = 4U;
	static uint16_t x1314 = 1U;
	int8_t x1316 = 3;
	volatile int32_t t20 = -4321771;

    t20 = (x1313%((x1314&x1315)<<x1316));

    if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1325 = INT8_MIN;
	int32_t x1327 = INT32_MAX;
	volatile int64_t t21 = -16627105469054396LL;

    t21 = (x1325%((x1326&x1327)<<x1328));

    if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1369 = 57284LL;
	static uint8_t x1370 = 68U;
	static int32_t x1371 = -1;
	int16_t x1372 = 11;

    t22 = (x1369%((x1370&x1371)<<x1372));

    if (t22 != 57284LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1530 = -1;
	volatile int8_t x1531 = INT8_MAX;
	uint8_t x1532 = 3U;
	int32_t t23 = -5366;

    t23 = (x1529%((x1530&x1531)<<x1532));

    if (t23 != 591) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1585 = -1;
	int32_t x1586 = -1;
	uint16_t x1587 = 2842U;
	static uint8_t x1588 = 1U;
	int32_t t24 = 7;

    t24 = (x1585%((x1586&x1587)<<x1588));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1685 = -1;
	uint16_t x1686 = UINT16_MAX;
	uint8_t x1687 = 51U;
	uint8_t x1688 = 2U;
	volatile int32_t t25 = -17688;

    t25 = (x1685%((x1686&x1687)<<x1688));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1701 = INT8_MIN;
	int16_t x1702 = INT16_MAX;
	int8_t x1703 = 1;

    t26 = (x1701%((x1702&x1703)<<x1704));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1725 = UINT64_MAX;
	volatile int16_t x1726 = INT16_MIN;
	volatile int32_t x1728 = 0;
	volatile uint64_t t27 = 191LLU;

    t27 = (x1725%((x1726&x1727)<<x1728));

    if (t27 != 7038604935167LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1769 = -119LL;
	int8_t x1771 = INT8_MIN;
	uint8_t x1772 = 0U;
	volatile uint64_t t28 = 47267619LLU;

    t28 = (x1769%((x1770&x1771)<<x1772));

    if (t28 != 256992465635209LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1825 = INT8_MIN;
	int64_t x1826 = 298LL;
	volatile int64_t t29 = 204038582LL;

    t29 = (x1825%((x1826&x1827)<<x1828));

    if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1997 = INT8_MIN;
	uint16_t x1998 = 28U;
	static int8_t x1999 = -2;
	uint32_t x2000 = 0U;
	volatile int32_t t30 = -1;

    t30 = (x1997%((x1998&x1999)<<x2000));

    if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2021 = INT8_MIN;
	int8_t x2022 = INT8_MIN;
	uint64_t x2023 = 452738981LLU;
	uint8_t x2024 = 3U;
	uint64_t t31 = 625LLU;

    t31 = (x2021%((x2022&x2023)<<x2024));

    if (t31 != 2824902528LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x2074 = 15693U;
	volatile int32_t t32 = -19616;

    t32 = (x2073%((x2074&x2075)<<x2076));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2113 = 25228U;
	uint32_t x2114 = UINT32_MAX;
	uint16_t x2116 = 2U;
	volatile uint32_t t33 = 248556300U;

    t33 = (x2113%((x2114&x2115)<<x2116));

    if (t33 != 25228U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2125 = INT16_MIN;
	uint32_t x2127 = UINT32_MAX;
	volatile uint32_t x2128 = 4U;
	volatile uint32_t t34 = 5U;

    t34 = (x2125%((x2126&x2127)<<x2128));

    if (t34 != 128U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x2133 = INT8_MIN;
	uint32_t x2135 = UINT32_MAX;
	uint16_t x2136 = 10U;
	uint32_t t35 = 11559544U;

    t35 = (x2133%((x2134&x2135)<<x2136));

    if (t35 != 89984U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2142 = INT16_MAX;

    t36 = (x2141%((x2142&x2143)<<x2144));

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x2173 = -1;
	uint32_t x2174 = UINT32_MAX;
	int8_t x2175 = -36;
	static int8_t x2176 = 2;
	static volatile uint32_t t37 = 2U;

    t37 = (x2173%((x2174&x2175)<<x2176));

    if (t37 != 143U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x2229 = INT64_MIN;
	int8_t x2231 = 1;
	uint16_t x2232 = 1U;
	volatile int64_t t38 = -1883LL;

    t38 = (x2229%((x2230&x2231)<<x2232));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x2237 = 1;
	int16_t x2239 = 1;
	static uint8_t x2240 = 0U;
	int32_t t39 = -22501001;

    t39 = (x2237%((x2238&x2239)<<x2240));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x2361 = -1;
	int8_t x2362 = 3;
	int32_t x2363 = -29;
	uint8_t x2364 = 2U;
	volatile int32_t t40 = -1391;

    t40 = (x2361%((x2362&x2363)<<x2364));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x2417 = 6884430;
	static uint64_t x2418 = 64783765063703647LLU;
	int32_t x2419 = INT32_MAX;
	uint32_t x2420 = 15U;
	volatile uint64_t t41 = 3017216477LLU;

    t41 = (x2417%((x2418&x2419)<<x2420));

    if (t41 != 6884430LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2434 = 221;
	static uint8_t x2436 = 18U;
	volatile int64_t t42 = -813505270LL;

    t42 = (x2433%((x2434&x2435)<<x2436));

    if (t42 != 65535LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2485 = 1U;
	int16_t x2486 = 1;
	int8_t x2487 = INT8_MAX;
	static int16_t x2488 = 1;
	volatile uint32_t t43 = 0U;

    t43 = (x2485%((x2486&x2487)<<x2488));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2525 = -1;
	int16_t x2527 = INT16_MAX;
	static volatile int64_t t44 = -101303707370649LL;

    t44 = (x2525%((x2526&x2527)<<x2528));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x2905 = UINT8_MAX;
	uint16_t x2907 = 24U;
	int16_t x2908 = 13;
	int64_t t45 = 6891111395571LL;

    t45 = (x2905%((x2906&x2907)<<x2908));

    if (t45 != 255LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x2953 = UINT32_MAX;
	static int16_t x2955 = 26;
	volatile uint8_t x2956 = 3U;
	volatile uint32_t t46 = 4062U;

    t46 = (x2953%((x2954&x2955)<<x2956));

    if (t46 != 47U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3017 = 214362594LL;
	static uint32_t x3018 = UINT32_MAX;
	volatile int64_t x3019 = INT64_MAX;
	int64_t t47 = -57LL;

    t47 = (x3017%((x3018&x3019)<<x3020));

    if (t47 != 214362594LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x3093 = 196U;
	static int8_t x3095 = INT8_MAX;
	uint8_t x3096 = 0U;
	volatile int64_t t48 = -2123825763239454318LL;

    t48 = (x3093%((x3094&x3095)<<x3096));

    if (t48 != 69LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x3141 = INT64_MIN;
	volatile int32_t x3142 = INT32_MAX;
	volatile uint64_t x3143 = 506765994LLU;
	int8_t x3144 = 8;

    t49 = (x3141%((x3142&x3143)<<x3144));

    if (t49 != 22926629888LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x3149 = -9;
	volatile int16_t x3150 = INT16_MAX;
	uint8_t x3151 = UINT8_MAX;
	uint16_t x3152 = 6U;
	volatile int32_t t50 = -1012;

    t50 = (x3149%((x3150&x3151)<<x3152));

    if (t50 != -9) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x3153 = INT16_MAX;
	volatile uint8_t x3154 = 37U;
	uint64_t x3155 = 21LLU;
	volatile uint64_t t51 = 38657LLU;

    t51 = (x3153%((x3154&x3155)<<x3156));

    if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x3165 = 1U;
	int8_t x3167 = -1;
	int32_t x3168 = 1;
	int32_t t52 = 866208;

    t52 = (x3165%((x3166&x3167)<<x3168));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3265 = -21;
	int64_t x3266 = 101247667LL;
	int64_t t53 = -10420089LL;

    t53 = (x3265%((x3266&x3267)<<x3268));

    if (t53 != -21LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x3365 = -1;
	uint64_t x3366 = 1383189697092399258LLU;
	static int32_t x3367 = INT32_MIN;
	uint32_t x3368 = 13U;
	uint64_t t54 = 96647792063981597LLU;

    t54 = (x3365%((x3366&x3367)<<x3368));

    if (t54 != 4079381653095448575LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x3429 = -8;
	static volatile uint8_t x3430 = 4U;
	uint8_t x3432 = 5U;
	int64_t t55 = 7558125965569LL;

    t55 = (x3429%((x3430&x3431)<<x3432));

    if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3441 = 84;
	int8_t x3442 = INT8_MAX;
	int64_t x3443 = -282047964LL;
	int8_t x3444 = 1;

    t56 = (x3441%((x3442&x3443)<<x3444));

    if (t56 != 12LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3469 = UINT64_MAX;
	static volatile int64_t x3470 = -719992LL;
	int32_t x3471 = 127214;

    t57 = (x3469%((x3470&x3471)<<x3472));

    if (t57 != 82239LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x3486 = UINT8_MAX;
	int32_t x3488 = 1;
	static int32_t t58 = -112044322;

    t58 = (x3485%((x3486&x3487)<<x3488));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x3513 = INT8_MIN;
	uint64_t x3514 = 2084569378912LLU;
	int8_t x3515 = -1;
	static volatile uint32_t x3516 = 0U;
	static uint64_t t59 = 40892145650114321LLU;

    t59 = (x3513%((x3514&x3515)<<x3516));

    if (t59 != 1909812785856LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x3597 = 8006813U;
	static int16_t x3599 = INT16_MAX;
	static int8_t x3600 = 1;
	uint32_t t60 = 48991U;

    t60 = (x3597%((x3598&x3599)<<x3600));

    if (t60 != 323U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3701 = UINT8_MAX;
	int32_t x3702 = -1;
	static int8_t x3703 = INT8_MAX;
	uint8_t x3704 = 3U;
	static int32_t t61 = -9474193;

    t61 = (x3701%((x3702&x3703)<<x3704));

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x3705 = INT64_MAX;
	uint64_t x3706 = 115857658422LLU;
	int8_t x3708 = 0;

    t62 = (x3705%((x3706&x3707)<<x3708));

    if (t62 != 4139LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3709 = -16870918LL;
	static volatile uint64_t x3710 = UINT64_MAX;
	int8_t x3711 = -1;
	volatile int64_t x3712 = 4LL;
	volatile uint64_t t63 = 126359947707130LLU;

    t63 = (x3709%((x3710&x3711)<<x3712));

    if (t63 != 18446744073692680698LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x3725 = UINT8_MAX;
	volatile int16_t x3727 = -1;
	static uint16_t x3728 = 5U;
	volatile int32_t t64 = 1;

    t64 = (x3725%((x3726&x3727)<<x3728));

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3873 = INT8_MIN;
	uint8_t x3874 = 54U;
	volatile uint8_t x3875 = 28U;
	uint8_t x3876 = 8U;

    t65 = (x3873%((x3874&x3875)<<x3876));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3950 = UINT32_MAX;

    t66 = (x3949%((x3950&x3951)<<x3952));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x3953 = INT32_MIN;
	int32_t x3954 = 13;
	int8_t x3955 = -5;

    t67 = (x3953%((x3954&x3955)<<x3956));

    if (t67 != -524288) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x4017 = UINT32_MAX;
	volatile uint32_t x4018 = 32U;
	int64_t x4019 = 9751758569386941LL;
	uint16_t x4020 = 6U;

    t68 = (x4017%((x4018&x4019)<<x4020));

    if (t68 != 2047LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4033 = -1;
	int64_t x4034 = -1LL;
	int8_t x4035 = INT8_MAX;
	uint64_t x4036 = 0LLU;
	int64_t t69 = 45042846537154009LL;

    t69 = (x4033%((x4034&x4035)<<x4036));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4297 = -1;
	int32_t x4298 = INT32_MAX;
	int16_t x4299 = INT16_MAX;
	static uint8_t x4300 = 13U;
	static int32_t t70 = 17885600;

    t70 = (x4297%((x4298&x4299)<<x4300));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4369 = 1051U;
	volatile int32_t x4371 = -1;
	int8_t x4372 = 1;
	int32_t t71 = 6;

    t71 = (x4369%((x4370&x4371)<<x4372));

    if (t71 != 343) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x4397 = -1;
	uint8_t x4398 = 1U;
	int16_t x4400 = 0;

    t72 = (x4397%((x4398&x4399)<<x4400));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4437 = 49U;
	int8_t x4438 = INT8_MAX;
	uint16_t x4440 = 0U;
	static int32_t t73 = 3188;

    t73 = (x4437%((x4438&x4439)<<x4440));

    if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4469 = 121U;
	int8_t x4470 = INT8_MAX;
	int64_t x4471 = -7239411LL;
	int64_t x4472 = 13LL;
	int64_t t74 = -1548LL;

    t74 = (x4469%((x4470&x4471)<<x4472));

    if (t74 != 121LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x4493 = 21U;
	int8_t x4496 = 2;
	volatile uint32_t t75 = 13U;

    t75 = (x4493%((x4494&x4495)<<x4496));

    if (t75 != 21U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x4597 = 23U;
	volatile uint16_t x4598 = UINT16_MAX;
	uint16_t x4599 = UINT16_MAX;
	volatile uint16_t x4600 = 15U;

    t76 = (x4597%((x4598&x4599)<<x4600));

    if (t76 != 23) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x4739 = UINT64_MAX;
	static uint16_t x4740 = 18U;

    t77 = (x4737%((x4738&x4739)<<x4740));

    if (t77 != 491520LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4745 = -1;
	int8_t x4746 = INT8_MAX;
	uint8_t x4747 = 22U;
	uint16_t x4748 = 0U;

    t78 = (x4745%((x4746&x4747)<<x4748));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4825 = INT8_MAX;
	volatile uint16_t x4826 = 99U;
	volatile int64_t x4827 = 160806LL;
	volatile int64_t t79 = -29879LL;

    t79 = (x4825%((x4826&x4827)<<x4828));

    if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x4909 = INT64_MIN;
	int16_t x4910 = -1;
	uint8_t x4912 = 16U;

    t80 = (x4909%((x4910&x4911)<<x4912));

    if (t80 != 191496192LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x4937 = INT64_MIN;
	int64_t x4938 = -1LL;
	uint16_t x4939 = 9U;
	volatile int64_t t81 = -132910019LL;

    t81 = (x4937%((x4938&x4939)<<x4940));

    if (t81 != -224LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x4957 = 40U;
	int32_t x4958 = INT32_MIN;
	int8_t x4960 = 0;
	uint64_t t82 = 837LLU;

    t82 = (x4957%((x4958&x4959)<<x4960));

    if (t82 != 40LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x5009 = UINT32_MAX;
	volatile int16_t x5011 = INT16_MIN;
	volatile uint16_t x5012 = 0U;
	int64_t t83 = -82659745LL;

    t83 = (x5009%((x5010&x5011)<<x5012));

    if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x5070 = INT32_MAX;
	static uint64_t x5071 = 3LLU;
	volatile int8_t x5072 = 53;
	volatile uint64_t t84 = 325121LLU;

    t84 = (x5069%((x5070&x5071)<<x5072));

    if (t84 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x5109 = 734LLU;
	int16_t x5110 = INT16_MIN;
	static int32_t x5111 = INT32_MAX;
	int8_t x5112 = 0;

    t85 = (x5109%((x5110&x5111)<<x5112));

    if (t85 != 734LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x5241 = INT8_MIN;
	int64_t x5242 = -3LL;
	uint16_t x5243 = UINT16_MAX;
	uint8_t x5244 = 9U;

    t86 = (x5241%((x5242&x5243)<<x5244));

    if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x5273 = 23623;
	int8_t x5275 = -2;
	int16_t x5276 = 3;
	static int32_t t87 = -73;

    t87 = (x5273%((x5274&x5275)<<x5276));

    if (t87 != 23623) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x5302 = -4;
	int64_t x5303 = 406LL;
	volatile int8_t x5304 = 40;
	uint64_t t88 = 315443LLU;

    t88 = (x5301%((x5302&x5303)<<x5304));

    if (t88 != 45048762451131LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x5393 = 162204U;
	uint64_t x5395 = 3LLU;
	volatile uint8_t x5396 = 32U;
	volatile uint64_t t89 = 217466LLU;

    t89 = (x5393%((x5394&x5395)<<x5396));

    if (t89 != 162204LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x5453 = INT8_MIN;
	uint32_t x5454 = 2076018U;
	static uint64_t x5455 = 44627637473716416LLU;
	volatile uint8_t x5456 = 31U;
	volatile uint64_t t90 = 5681957057057675784LLU;

    t90 = (x5453%((x5454&x5455)<<x5456));

    if (t90 != 649673933062016LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x5469 = -23;
	int8_t x5470 = INT8_MAX;
	uint32_t x5471 = UINT32_MAX;
	int8_t x5472 = 6;

    t91 = (x5469%((x5470&x5471)<<x5472));

    if (t91 != 2025U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x5485 = -1;
	static int8_t x5486 = -1;
	int16_t x5487 = INT16_MAX;
	volatile int32_t t92 = 3593;

    t92 = (x5485%((x5486&x5487)<<x5488));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x5489 = -12LL;
	static int8_t x5490 = -17;
	uint64_t x5491 = 6545131991651705LLU;
	volatile uint16_t x5492 = 15U;
	volatile uint64_t t93 = 4935LLU;

    t93 = (x5489%((x5490&x5491)<<x5492));

    if (t93 != 6890043782072074228LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x5553 = INT8_MAX;
	int32_t x5554 = -1;
	int32_t x5555 = 424483;
	uint8_t x5556 = 11U;
	static int32_t t94 = 22;

    t94 = (x5553%((x5554&x5555)<<x5556));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5597 = INT16_MAX;
	int64_t x5598 = 166937654LL;
	int16_t x5599 = -1;
	uint8_t x5600 = 3U;
	volatile int64_t t95 = -1002331365LL;

    t95 = (x5597%((x5598&x5599)<<x5600));

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x5721 = 30908336;
	uint64_t x5722 = 1890737589367488LLU;
	uint32_t x5723 = UINT32_MAX;
	volatile uint64_t t96 = 1019471174103LLU;

    t96 = (x5721%((x5722&x5723)<<x5724));

    if (t96 != 30908336LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x5785 = 77988;
	int16_t x5786 = INT16_MAX;
	static int64_t x5788 = 2LL;
	volatile int32_t t97 = 8365;

    t97 = (x5785%((x5786&x5787)<<x5788));

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x5929 = INT64_MIN;
	volatile uint8_t x5930 = 27U;
	int32_t x5931 = 382;
	static uint8_t x5932 = 6U;
	static volatile int64_t t98 = -22408LL;

    t98 = (x5929%((x5930&x5931)<<x5932));

    if (t98 != -1152LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5999 = 1U;
	int32_t x6000 = 7;
	int32_t t99 = -507353206;

    t99 = (x5997%((x5998&x5999)<<x6000));

    if (t99 != 124) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x6009 = UINT16_MAX;
	uint16_t x6010 = 3481U;
	uint32_t x6011 = 196518053U;
	uint8_t x6012 = 11U;
	volatile uint32_t t100 = 61U;

    t100 = (x6009%((x6010&x6011)<<x6012));

    if (t100 != 65535U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x6045 = UINT32_MAX;
	int64_t x6047 = INT64_MAX;
	uint8_t x6048 = 20U;

    t101 = (x6045%((x6046&x6047)<<x6048));

    if (t101 != 4294967295LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x6089 = UINT8_MAX;
	int8_t x6090 = INT8_MAX;
	static uint64_t x6091 = 474282308639854LLU;
	uint8_t x6092 = 0U;
	volatile uint64_t t102 = 1401449578LLU;

    t102 = (x6089%((x6090&x6091)<<x6092));

    if (t102 != 35LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x6133 = 455U;
	volatile int16_t x6134 = 599;
	uint64_t x6135 = 1LLU;
	int64_t x6136 = 16LL;
	static uint64_t t103 = 9LLU;

    t103 = (x6133%((x6134&x6135)<<x6136));

    if (t103 != 455LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x6157 = INT64_MIN;
	int16_t x6158 = 6586;
	static int64_t x6159 = INT64_MAX;
	uint16_t x6160 = 0U;
	int64_t t104 = 1916487489650509902LL;

    t104 = (x6157%((x6158&x6159)<<x6160));

    if (t104 != -968LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x6217 = -1LL;
	int64_t x6218 = -89LL;
	static uint64_t x6219 = 827251LLU;
	volatile uint8_t x6220 = 0U;
	uint64_t t105 = 3712LLU;

    t105 = (x6217%((x6218&x6219)<<x6220));

    if (t105 != 175126LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x6233 = INT8_MAX;
	uint32_t x6234 = UINT32_MAX;
	volatile uint32_t t106 = 1217524U;

    t106 = (x6233%((x6234&x6235)<<x6236));

    if (t106 != 127U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x6242 = INT32_MAX;
	uint16_t x6243 = UINT16_MAX;
	int8_t x6244 = 4;

    t107 = (x6241%((x6242&x6243)<<x6244));

    if (t107 != 4) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x6257 = INT32_MIN;
	static uint8_t x6258 = UINT8_MAX;
	int16_t x6259 = INT16_MAX;
	static volatile int64_t x6260 = 3LL;
	int32_t t108 = 10783559;

    t108 = (x6257%((x6258&x6259)<<x6260));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x6289 = -1LL;
	int16_t x6291 = -1;
	uint8_t x6292 = 0U;
	volatile int64_t t109 = -2103757456LL;

    t109 = (x6289%((x6290&x6291)<<x6292));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x6413 = UINT32_MAX;
	volatile uint64_t x6414 = 3LLU;
	uint8_t x6415 = UINT8_MAX;
	uint8_t x6416 = 28U;
	volatile uint64_t t110 = 50131969576LLU;

    t110 = (x6413%((x6414&x6415)<<x6416));

    if (t110 != 268435455LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x6437 = INT32_MAX;
	volatile uint32_t x6438 = UINT32_MAX;
	int32_t x6439 = -198142;
	int8_t x6440 = 1;
	uint32_t t111 = 748U;

    t111 = (x6437%((x6438&x6439)<<x6440));

    if (t111 != 2147483647U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x6473 = INT16_MIN;
	uint8_t x6474 = UINT8_MAX;
	int8_t x6476 = 1;
	int32_t t112 = -3359;

    t112 = (x6473%((x6474&x6475)<<x6476));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x6561 = UINT16_MAX;
	int8_t x6564 = 5;
	volatile int32_t t113 = 32;

    t113 = (x6561%((x6562&x6563)<<x6564));

    if (t113 != 511) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x6609 = INT8_MAX;
	uint8_t x6610 = UINT8_MAX;
	volatile uint32_t x6612 = 0U;
	volatile int32_t t114 = 70089;

    t114 = (x6609%((x6610&x6611)<<x6612));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x6613 = -11;
	static uint32_t x6614 = 117699151U;
	volatile int8_t x6615 = -22;
	volatile int16_t x6616 = 1;
	uint32_t t115 = 852946005U;

    t115 = (x6613%((x6614&x6615)<<x6616));

    if (t115 != 57798029U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x6645 = INT64_MIN;
	uint16_t x6646 = UINT16_MAX;

    t116 = (x6645%((x6646&x6647)<<x6648));

    if (t116 != -179968LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x6673 = UINT64_MAX;
	static int16_t x6674 = -265;
	volatile uint8_t x6675 = 110U;
	static uint8_t x6676 = 6U;
	static uint64_t t117 = 21960215981162182LLU;

    t117 = (x6673%((x6674&x6675)<<x6676));

    if (t117 != 255LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x6757 = INT32_MIN;
	static uint64_t x6759 = 938344591951LLU;
	int16_t x6760 = 1;
	uint64_t t118 = 26360852481115LLU;

    t118 = (x6757%((x6758&x6759)<<x6760));

    if (t118 != 16106LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x6846 = -256323401LL;
	uint16_t x6847 = 245U;

    t119 = (x6845%((x6846&x6847)<<x6848));

    if (t119 != -384LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x6878 = 29408287039422930LLU;
	int16_t x6879 = INT16_MIN;
	uint8_t x6880 = 27U;
	uint64_t t120 = 4434457894085318LLU;

    t120 = (x6877%((x6878&x6879)<<x6880));

    if (t120 != 21LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x6950 = -1LL;
	static int32_t x6951 = INT32_MAX;
	uint64_t x6952 = 2LLU;
	uint64_t t121 = 447420981570LLU;

    t121 = (x6949%((x6950&x6951)<<x6952));

    if (t121 != 25516LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x6965 = 2566810361LL;
	volatile int32_t x6966 = -1;
	static volatile uint8_t x6968 = 11U;
	volatile int64_t t122 = 0LL;

    t122 = (x6965%((x6966&x6967)<<x6968));

    if (t122 != 2809LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x7047 = 2233964572681545LLU;
	uint16_t x7048 = 41U;
	volatile uint64_t t123 = 213LLU;

    t123 = (x7045%((x7046&x7047)<<x7048));

    if (t123 != 255LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x7205 = UINT64_MAX;
	volatile int64_t x7206 = INT64_MAX;
	static int32_t x7207 = 1457311;
	uint64_t t124 = 1083704489028663LLU;

    t124 = (x7205%((x7206&x7207)<<x7208));

    if (t124 != 2931427LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x7341 = INT32_MIN;
	uint64_t x7342 = UINT64_MAX;
	int16_t x7343 = -1;
	uint32_t x7344 = 2U;

    t125 = (x7341%((x7342&x7343)<<x7344));

    if (t125 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x7441 = INT16_MAX;
	volatile uint64_t x7442 = 555LLU;
	uint16_t x7443 = 6U;
	int8_t x7444 = 3;
	static volatile uint64_t t126 = 5LLU;

    t126 = (x7441%((x7442&x7443)<<x7444));

    if (t126 != 15LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x7473 = INT8_MIN;
	volatile uint64_t x7474 = 28751LLU;
	uint8_t x7475 = UINT8_MAX;
	int32_t x7476 = 15;
	volatile uint64_t t127 = 435810493755LLU;

    t127 = (x7473%((x7474&x7475)<<x7476));

    if (t127 != 2490240LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x7485 = INT32_MAX;
	int16_t x7486 = INT16_MAX;
	int8_t x7487 = INT8_MAX;
	uint32_t x7488 = 3U;
	int32_t t128 = -23;

    t128 = (x7485%((x7486&x7487)<<x7488));

    if (t128 != 7) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x7509 = INT64_MIN;
	uint64_t x7510 = 2435063LLU;
	uint64_t x7511 = 35584874607674437LLU;
	uint8_t x7512 = 18U;
	static volatile uint64_t t129 = 167992287360599LLU;

    t129 = (x7509%((x7510&x7511)<<x7512));

    if (t129 != 42136240128LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x7529 = 317716611U;
	uint64_t x7530 = UINT64_MAX;
	uint64_t x7531 = 3530LLU;
	int64_t x7532 = 3LL;
	volatile uint64_t t130 = 13751217019356901LLU;

    t130 = (x7529%((x7530&x7531)<<x7532));

    if (t130 != 16611LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x7554 = INT8_MAX;
	int32_t x7555 = INT32_MAX;
	uint8_t x7556 = 1U;
	volatile int64_t t131 = 36103LL;

    t131 = (x7553%((x7554&x7555)<<x7556));

    if (t131 != -128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x7577 = 65876917955587659LL;
	static int32_t x7578 = -1;
	uint32_t x7579 = 30092U;
	static uint8_t x7580 = 0U;
	int64_t t132 = 100842585120791147LL;

    t132 = (x7577%((x7578&x7579)<<x7580));

    if (t132 != 24427LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x7637 = 1U;
	uint8_t x7639 = UINT8_MAX;
	uint16_t x7640 = 9U;

    t133 = (x7637%((x7638&x7639)<<x7640));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x7706 = -1LL;
	uint8_t x7708 = 0U;
	uint64_t t134 = 1266216825LLU;

    t134 = (x7705%((x7706&x7707)<<x7708));

    if (t134 != 17016LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x7941 = INT16_MIN;
	static uint64_t x7943 = 4LLU;

    t135 = (x7941%((x7942&x7943)<<x7944));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x7949 = INT16_MAX;
	volatile int32_t x7950 = 254052;
	volatile int16_t x7951 = INT16_MAX;
	volatile int32_t t136 = -25;

    t136 = (x7949%((x7950&x7951)<<x7952));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x7986 = INT16_MAX;
	uint8_t x7987 = 14U;
	static volatile int32_t t137 = -1;

    t137 = (x7985%((x7986&x7987)<<x7988));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x8021 = INT16_MIN;
	uint16_t x8023 = 128U;
	uint16_t x8024 = 1U;
	int64_t t138 = 104699098LL;

    t138 = (x8021%((x8022&x8023)<<x8024));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x8110 = 13487341LLU;
	volatile int8_t x8111 = INT8_MAX;
	volatile uint64_t t139 = 12214781162894910LLU;

    t139 = (x8109%((x8110&x8111)<<x8112));

    if (t139 != 65LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x8373 = UINT16_MAX;
	int32_t t140 = -328222619;

    t140 = (x8373%((x8374&x8375)<<x8376));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x8418 = UINT32_MAX;
	int32_t x8419 = 490055078;
	int16_t x8420 = 13;
	volatile uint32_t t141 = 357305U;

    t141 = (x8417%((x8418&x8419)<<x8420));

    if (t141 != 1263222656U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x8429 = 3998U;
	int8_t x8430 = INT8_MIN;
	uint32_t x8431 = UINT32_MAX;
	static uint16_t x8432 = 19U;
	uint32_t t142 = 17U;

    t142 = (x8429%((x8430&x8431)<<x8432));

    if (t142 != 3998U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x8447 = UINT32_MAX;
	uint16_t x8448 = 18U;

    t143 = (x8445%((x8446&x8447)<<x8448));

    if (t143 != 65535U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x8474 = 25;
	uint32_t x8475 = 63632U;
	static uint32_t t144 = 3U;

    t144 = (x8473%((x8474&x8475)<<x8476));

    if (t144 != 255U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x8485 = INT64_MIN;
	int8_t x8486 = -5;
	int8_t x8487 = 1;
	static volatile int64_t t145 = -351504601713168471LL;

    t145 = (x8485%((x8486&x8487)<<x8488));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x8517 = 0;
	uint16_t x8518 = 989U;
	volatile int8_t x8519 = -20;
	static volatile uint32_t x8520 = 2U;
	volatile int32_t t146 = 5382280;

    t146 = (x8517%((x8518&x8519)<<x8520));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x8525 = INT16_MAX;
	static uint32_t x8527 = UINT32_MAX;
	static int8_t x8528 = 6;
	uint64_t t147 = 56482979LLU;

    t147 = (x8525%((x8526&x8527)<<x8528));

    if (t147 != 32767LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x8531 = -1;
	int32_t t148 = -3041927;

    t148 = (x8529%((x8530&x8531)<<x8532));

    if (t148 != -163) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x8581 = INT32_MIN;
	static int8_t x8583 = INT8_MIN;
	int32_t t149 = 423777;

    t149 = (x8581%((x8582&x8583)<<x8584));

    if (t149 != -8192) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x8593 = 13LL;
	uint32_t x8594 = 833551322U;
	uint32_t x8595 = 43481630U;
	int16_t x8596 = 3;
	static volatile int64_t t150 = 7916470551573LL;

    t150 = (x8593%((x8594&x8595)<<x8596));

    if (t150 != 13LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x8602 = 984816298LLU;
	int32_t x8603 = INT32_MAX;
	static volatile uint64_t t151 = 14317LLU;

    t151 = (x8601%((x8602&x8603)<<x8604));

    if (t151 != 25840641663LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x8665 = 1123170149133339989LL;
	int8_t x8667 = INT8_MIN;
	int64_t t152 = -171917118884LL;

    t152 = (x8665%((x8666&x8667)<<x8668));

    if (t152 != 31300821LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x8669 = UINT8_MAX;
	static int16_t x8670 = INT16_MIN;
	volatile uint64_t x8671 = 77819685507053LLU;
	int8_t x8672 = 0;

    t153 = (x8669%((x8670&x8671)<<x8672));

    if (t153 != 255LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x8677 = INT8_MAX;
	volatile int32_t x8679 = -1;
	static int8_t x8680 = 1;
	volatile int32_t t154 = -1;

    t154 = (x8677%((x8678&x8679)<<x8680));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x8717 = INT16_MIN;
	int32_t x8718 = -1;
	uint32_t x8719 = 159494744U;
	uint8_t x8720 = 2U;
	uint32_t t155 = 84U;

    t155 = (x8717%((x8718&x8719)<<x8720));

    if (t155 != 467060672U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x8761 = UINT64_MAX;
	uint64_t x8762 = 4584130979676853LLU;
	uint8_t x8763 = 6U;
	uint8_t x8764 = 1U;
	uint64_t t156 = 61002598809448003LLU;

    t156 = (x8761%((x8762&x8763)<<x8764));

    if (t156 != 7LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x8815 = INT8_MIN;
	static uint8_t x8816 = 1U;
	static uint32_t t157 = 24U;

    t157 = (x8813%((x8814&x8815)<<x8816));

    if (t157 != 427U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x8929 = -1LL;
	int32_t x8930 = INT32_MAX;
	uint16_t x8931 = 74U;
	int32_t x8932 = 0;
	static volatile int64_t t158 = 4649731823LL;

    t158 = (x8929%((x8930&x8931)<<x8932));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x8961 = INT32_MAX;
	static int32_t x8962 = INT32_MAX;
	static int8_t x8963 = INT8_MAX;
	int16_t x8964 = 23;
	int32_t t159 = -9;

    t159 = (x8961%((x8962&x8963)<<x8964));

    if (t159 != 16777215) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x8993 = INT8_MAX;
	uint32_t x8995 = UINT32_MAX;
	int8_t x8996 = 3;
	volatile uint32_t t160 = 342660U;

    t160 = (x8993%((x8994&x8995)<<x8996));

    if (t160 != 127U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x9029 = INT8_MAX;
	int16_t x9030 = 30;
	int8_t x9031 = -1;
	uint8_t x9032 = 15U;
	int32_t t161 = 3;

    t161 = (x9029%((x9030&x9031)<<x9032));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x9090 = 2U;
	uint16_t x9091 = 850U;
	int64_t x9092 = 0LL;
	int32_t t162 = -15400901;

    t162 = (x9089%((x9090&x9091)<<x9092));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x9205 = -11;
	static uint8_t x9206 = 18U;
	uint64_t x9207 = UINT64_MAX;
	volatile int32_t x9208 = 27;
	uint64_t t163 = 70010151129LLU;

    t163 = (x9205%((x9206&x9207)<<x9208));

    if (t163 != 268435445LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x9229 = UINT16_MAX;
	volatile int16_t x9230 = -1;
	static uint16_t x9232 = 0U;
	volatile int32_t t164 = -109485660;

    t164 = (x9229%((x9230&x9231)<<x9232));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x9317 = 17U;
	uint8_t x9320 = 2U;

    t165 = (x9317%((x9318&x9319)<<x9320));

    if (t165 != 17U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x9345 = 5;
	volatile uint8_t x9346 = 97U;
	int32_t x9347 = 1155661;
	uint8_t x9348 = 6U;
	int32_t t166 = -9;

    t166 = (x9345%((x9346&x9347)<<x9348));

    if (t166 != 5) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x9399 = 218883748574939LL;
	static uint16_t x9400 = 0U;

    t167 = (x9397%((x9398&x9399)<<x9400));

    if (t167 != 1009LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x9433 = -1;
	int8_t x9434 = -1;
	static uint64_t x9435 = UINT64_MAX;
	uint16_t x9436 = 17U;
	uint64_t t168 = 8774307852296LLU;

    t168 = (x9433%((x9434&x9435)<<x9436));

    if (t168 != 131071LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x9465 = INT32_MIN;
	uint8_t x9466 = UINT8_MAX;
	int8_t x9467 = 31;
	static uint8_t x9468 = 8U;
	volatile int32_t t169 = -594;

    t169 = (x9465%((x9466&x9467)<<x9468));

    if (t169 != -2048) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x9477 = 124090906U;
	int16_t x9478 = INT16_MAX;
	int8_t x9479 = -48;
	int16_t x9480 = 0;
	volatile uint32_t t170 = 725U;

    t170 = (x9477%((x9478&x9479)<<x9480));

    if (t170 != 16666U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x9509 = 55U;
	int8_t x9510 = INT8_MAX;
	int16_t x9512 = 0;
	int64_t t171 = 3610281754159886858LL;

    t171 = (x9509%((x9510&x9511)<<x9512));

    if (t171 != 55LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x9525 = INT16_MAX;
	uint64_t x9526 = UINT64_MAX;
	int64_t x9527 = -187145104369LL;
	uint8_t x9528 = 36U;
	uint64_t t172 = 434422405714LLU;

    t172 = (x9525%((x9526&x9527)<<x9528));

    if (t172 != 32767LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x9578 = 16006;
	static int8_t x9580 = 14;
	volatile int32_t t173 = 242;

    t173 = (x9577%((x9578&x9579)<<x9580));

    if (t173 != 25015) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x9589 = INT8_MIN;
	static int16_t x9590 = 3;
	volatile int64_t x9591 = -42LL;
	static volatile uint8_t x9592 = 28U;
	volatile int64_t t174 = -1020624509LL;

    t174 = (x9589%((x9590&x9591)<<x9592));

    if (t174 != -128LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x9669 = -1;
	int16_t x9670 = 1308;
	volatile int16_t x9671 = 7996;
	uint16_t x9672 = 4U;
	int32_t t175 = -6478;

    t175 = (x9669%((x9670&x9671)<<x9672));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x9850 = 47;
	static uint64_t x9851 = 19132321LLU;

    t176 = (x9849%((x9850&x9851)<<x9852));

    if (t176 != 42LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x9878 = -1;
	uint16_t x9879 = 182U;
	uint8_t x9880 = 6U;
	volatile int32_t t177 = -1;

    t177 = (x9877%((x9878&x9879)<<x9880));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x9893 = INT8_MIN;
	static volatile uint16_t x9894 = 80U;
	int16_t x9895 = -8;

    t178 = (x9893%((x9894&x9895)<<x9896));

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x9897 = -1152;
	uint32_t x9898 = 10268837U;
	static uint8_t x9900 = 7U;
	uint32_t t179 = 250173U;

    t179 = (x9897%((x9898&x9899)<<x9900));

    if (t179 != 351732736U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x10017 = -32694078869872LL;
	static uint8_t x10018 = UINT8_MAX;
	uint64_t x10019 = 4009605819LLU;
	volatile uint64_t t180 = 437907679658LLU;

    t180 = (x10017%((x10018&x10019)<<x10020));

    if (t180 != 146LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x10239 = INT32_MAX;
	uint64_t x10240 = 3LLU;

    t181 = (x10237%((x10238&x10239)<<x10240));

    if (t181 != 15LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x10302 = UINT32_MAX;
	uint32_t x10303 = 685U;
	static uint8_t x10304 = 8U;
	static int64_t t182 = 12491524899156101LL;

    t182 = (x10301%((x10302&x10303)<<x10304));

    if (t182 != -89157LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x10453 = 42653U;
	int8_t x10454 = -1;
	volatile int16_t x10455 = 21;
	uint16_t x10456 = 1U;
	static uint32_t t183 = 438262359U;

    t183 = (x10453%((x10454&x10455)<<x10456));

    if (t183 != 23U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x10489 = -1;
	static int16_t x10490 = INT16_MIN;
	uint32_t x10491 = UINT32_MAX;
	uint16_t x10492 = 0U;
	volatile uint32_t t184 = 265U;

    t184 = (x10489%((x10490&x10491)<<x10492));

    if (t184 != 32767U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x10649 = UINT64_MAX;
	uint64_t x10650 = 13LLU;
	int16_t x10651 = 5;
	static int16_t x10652 = 36;

    t185 = (x10649%((x10650&x10651)<<x10652));

    if (t185 != 68719476735LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x10709 = -1LL;
	int16_t x10710 = INT16_MAX;
	static volatile int16_t x10711 = -1;
	uint8_t x10712 = 0U;
	int64_t t186 = -26487LL;

    t186 = (x10709%((x10710&x10711)<<x10712));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x10813 = -380;
	uint16_t x10815 = 4822U;
	static uint16_t x10816 = 4U;
	volatile int32_t t187 = -590986;

    t187 = (x10813%((x10814&x10815)<<x10816));

    if (t187 != -380) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x10846 = INT16_MAX;
	volatile uint16_t x10847 = 376U;
	int64_t t188 = 44LL;

    t188 = (x10845%((x10846&x10847)<<x10848));

    if (t188 != -6291456LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x10997 = 4U;
	uint64_t x10998 = 12944LLU;
	volatile int64_t x10999 = INT64_MAX;
	int8_t x11000 = 12;
	uint64_t t189 = 23392LLU;

    t189 = (x10997%((x10998&x10999)<<x11000));

    if (t189 != 4LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x11013 = -1;
	int64_t x11015 = 12287LL;
	uint8_t x11016 = 7U;
	static int64_t t190 = 83350LL;

    t190 = (x11013%((x11014&x11015)<<x11016));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x11054 = INT16_MIN;
	static int64_t x11055 = 135546219774LL;
	int64_t t191 = -2014687LL;

    t191 = (x11053%((x11054&x11055)<<x11056));

    if (t191 != 2147483647LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x11057 = 0U;
	int8_t x11058 = 24;
	uint64_t x11059 = UINT64_MAX;
	uint8_t x11060 = 0U;

    t192 = (x11057%((x11058&x11059)<<x11060));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x11233 = INT64_MIN;
	int64_t x11234 = INT64_MAX;
	uint8_t x11236 = 11U;
	int64_t t193 = 1LL;

    t193 = (x11233%((x11234&x11235)<<x11236));

    if (t193 != -16384LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x11255 = UINT64_MAX;
	uint16_t x11256 = 9U;
	volatile uint64_t t194 = 4702801589LLU;

    t194 = (x11253%((x11254&x11255)<<x11256));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t t195 = -1LL;

    t195 = (x11269%((x11270&x11271)<<x11272));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x11357 = 0U;
	static int64_t x11359 = -106450080106LL;
	uint8_t x11360 = 6U;
	volatile int64_t t196 = 1157821099LL;

    t196 = (x11357%((x11358&x11359)<<x11360));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x11433 = 1U;
	uint32_t x11434 = UINT32_MAX;
	int8_t x11435 = 38;
	uint16_t x11436 = 0U;
	volatile uint32_t t197 = 1561784U;

    t197 = (x11433%((x11434&x11435)<<x11436));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x11454 = 28LLU;
	volatile uint16_t x11455 = 153U;

    t198 = (x11453%((x11454&x11455)<<x11456));

    if (t198 != 3LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x11635 = -1LL;
	uint8_t x11636 = 4U;
	static volatile uint64_t t199 = 45937LLU;

    t199 = (x11633%((x11634&x11635)<<x11636));

    if (t199 != 255LLU) { NG(); } else { ; }
	
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

