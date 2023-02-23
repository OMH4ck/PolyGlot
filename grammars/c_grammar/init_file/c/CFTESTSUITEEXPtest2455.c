
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

uint8_t x170 = 0U;
static int8_t x313 = INT8_MIN;
int16_t x315 = INT16_MIN;
volatile int32_t x316 = -1;
static uint8_t x323 = UINT8_MAX;
int64_t x338 = INT64_MIN;
volatile int32_t x339 = -1;
static uint16_t x553 = UINT16_MAX;
int8_t x554 = -44;
static int16_t x601 = -1;
uint64_t x604 = UINT64_MAX;
int32_t t10 = -15195;
int8_t x790 = INT8_MAX;
uint32_t x792 = UINT32_MAX;
uint64_t x856 = UINT64_MAX;
int64_t x925 = INT64_MIN;
int16_t x926 = -1;
int32_t t15 = -18993;
static int64_t x1043 = INT64_MAX;
static volatile uint64_t t17 = 4003096264636900LLU;
int32_t x1067 = 1;
uint32_t t18 = 1773809U;
uint32_t x1210 = 8003U;
static int8_t x1211 = -1;
static volatile int64_t x1226 = -1LL;
volatile int8_t x1228 = -1;
static volatile int32_t t23 = -448120995;
int32_t x1266 = -2;
int16_t x1268 = -1;
uint8_t x1310 = UINT8_MAX;
int64_t t26 = 226451LL;
uint16_t x1373 = 0U;
static volatile int8_t x1434 = -1;
int8_t x1436 = -1;
uint64_t t29 = 18692330439425LLU;
volatile uint32_t t31 = 2001962213U;
int8_t x1766 = -1;
static int16_t x1767 = -1;
volatile int16_t x1781 = -1;
int32_t t34 = 1477;
int8_t x1949 = -1;
int16_t x1951 = INT16_MIN;
volatile int32_t x1975 = INT32_MAX;
int64_t x1993 = INT64_MAX;
int8_t x2074 = -41;
int16_t x2141 = -1;
volatile int8_t x2144 = -1;
static volatile int16_t x2182 = -1;
int8_t x2219 = 2;
int16_t x2544 = -1;
volatile int32_t t46 = 12910313;
int64_t x2558 = -1LL;
int16_t x2605 = INT16_MIN;
int32_t x2633 = 4416048;
volatile int16_t x2636 = -1;
volatile int32_t x2668 = INT32_MAX;
int32_t t53 = 77223;
static volatile int32_t t54 = -635855;
volatile int16_t x2765 = INT16_MIN;
volatile uint64_t x2767 = UINT64_MAX;
uint32_t x2831 = 962742U;
int64_t x2919 = -1LL;
static volatile int64_t x2920 = -1LL;
int16_t x2946 = -1;
int16_t x2951 = -1;
int64_t x2974 = -1LL;
static volatile uint32_t t64 = 808106194U;
int32_t t66 = 637040;
uint32_t x3061 = 3843U;
int16_t x3260 = -1;
volatile uint16_t x3281 = 594U;
uint64_t x3401 = UINT64_MAX;
int16_t x3579 = -1;
int8_t x3580 = -1;
static int32_t t77 = -26;
static int8_t x3745 = -1;
uint64_t x3746 = UINT64_MAX;
int8_t x3830 = -1;
uint32_t x3832 = UINT32_MAX;
volatile int64_t x3979 = -1LL;
uint32_t x4087 = UINT32_MAX;
uint64_t x4327 = UINT64_MAX;
int32_t x4334 = -24;
static uint32_t t87 = 45605U;
int32_t x4345 = -1;
int32_t t89 = 5;
volatile int64_t x4423 = 105236111LL;
int64_t x4533 = 2052567306LL;
int32_t x4534 = -1;
int32_t x4724 = -1;
int32_t t94 = -1544;
int32_t x4780 = INT32_MAX;
uint32_t x4937 = 762879U;
static int32_t x4940 = -1;
volatile int8_t x5214 = -1;
volatile uint32_t x5216 = UINT32_MAX;
int64_t x5364 = -1LL;
int64_t x5422 = INT64_MAX;
int16_t x5423 = INT16_MIN;
volatile int32_t t105 = 198;
volatile uint32_t x5538 = 1U;
int32_t t106 = -2389266;
uint16_t x5553 = UINT16_MAX;
int8_t x5555 = -1;
int16_t x5556 = -1;
uint16_t x5575 = UINT16_MAX;
uint64_t x5576 = UINT64_MAX;
volatile uint64_t x5581 = 877506097542891LLU;
static uint16_t x5633 = UINT16_MAX;
uint32_t x5634 = UINT32_MAX;
int32_t t110 = -5303556;
int64_t x5709 = -24726973110874LL;
int8_t x5710 = -1;
volatile int32_t x5772 = -1;
int32_t t113 = 17533;
volatile uint32_t x5783 = UINT32_MAX;
static volatile int32_t t114 = 504;
int8_t x5822 = INT8_MAX;
int32_t x6090 = INT32_MIN;
int64_t x6091 = INT64_MAX;
int32_t x6485 = INT32_MIN;
int8_t x6506 = -1;
static int16_t x6507 = -1227;
volatile uint32_t t122 = 224582645U;
volatile int64_t x6572 = -1LL;
static int64_t t125 = 42816LL;
int16_t x6902 = -1;
volatile int8_t x6906 = -1;
int8_t x6909 = INT8_MAX;
int32_t t128 = -496;
static int32_t x7064 = -1;
volatile int32_t t131 = 4;
uint16_t x7230 = UINT16_MAX;
uint64_t x7231 = UINT64_MAX;
volatile int64_t t132 = 9LL;
int32_t t133 = -19;
volatile uint8_t x7286 = UINT8_MAX;
int32_t t134 = 4;
uint32_t x7393 = UINT32_MAX;
uint16_t x7395 = UINT16_MAX;
static int32_t x7481 = INT32_MIN;
volatile int32_t t139 = 23;
static volatile int32_t t140 = 177;
int8_t x7518 = -1;
uint32_t t142 = 509U;
int64_t x7746 = INT64_MAX;
int8_t x7747 = INT8_MIN;
int32_t x7831 = -1;
volatile int32_t t147 = -23633570;
int8_t x7977 = INT8_MAX;
static int16_t x7978 = -1;
int64_t x7983 = -1085473615034837LL;
int16_t x8022 = -1;
int8_t x8023 = INT8_MIN;
volatile int32_t x8044 = -1;
static uint8_t x8070 = UINT8_MAX;
uint64_t x8168 = UINT64_MAX;
volatile int32_t t154 = 4973;
int8_t x8230 = 0;
int64_t x8289 = -1LL;
int64_t x8313 = 436031886744080592LL;
int8_t x8314 = -1;
int8_t x8316 = -1;
volatile uint32_t x8350 = 1801251125U;
int8_t x8405 = -1;
int64_t x8611 = INT64_MIN;
static uint16_t x8913 = 2246U;
static uint8_t x8915 = UINT8_MAX;
static int64_t x9066 = INT64_MAX;
volatile int64_t x9118 = 50260122645180LL;
static volatile int64_t x9120 = -1LL;
volatile int8_t x9186 = -1;
volatile uint32_t x9216 = UINT32_MAX;
volatile int32_t t171 = 124;
uint16_t x9447 = UINT16_MAX;
uint64_t x9448 = UINT64_MAX;
static volatile int32_t t173 = -1;
static volatile int8_t x9454 = INT8_MIN;
uint32_t x9483 = UINT32_MAX;
int32_t t175 = -102894;
uint32_t x9489 = 1U;
int16_t x9490 = 0;
volatile int8_t x9602 = 4;
int32_t t179 = -1014;
static int16_t x9688 = -1;
int16_t x9758 = -3302;
static int32_t t183 = -79;
static int8_t x9858 = -1;
uint8_t x9869 = 0U;
volatile uint32_t x9913 = 265U;
volatile int8_t x9919 = -1;
int8_t x10026 = INT8_MAX;
volatile int32_t x10077 = -283862497;
int16_t x10183 = -6;
volatile uint32_t x10205 = 0U;
uint32_t x10239 = UINT32_MAX;
int8_t x10320 = INT8_MIN;
static volatile int32_t x10361 = INT32_MAX;
static int8_t x10364 = -1;
int64_t x10389 = INT64_MIN;
int8_t x10556 = -1;


void f0(void) {
    	static uint32_t x77 = 0U;
	int8_t x78 = INT8_MAX;
	int32_t x79 = -1;
	static int8_t x80 = -1;
	volatile uint32_t t0 = 8224U;

    t0 = (x77%((x78|x79)==x80));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x169 = UINT64_MAX;
	int64_t x171 = -1LL;
	uint64_t x172 = UINT64_MAX;
	uint64_t t1 = 1012340303LLU;

    t1 = (x169%((x170|x171)==x172));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x205 = INT32_MAX;
	int16_t x206 = -1;
	int8_t x207 = INT8_MAX;
	volatile uint32_t x208 = UINT32_MAX;
	volatile int32_t t2 = -490;

    t2 = (x205%((x206|x207)==x208));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x314 = INT64_MAX;
	volatile int32_t t3 = 83305;

    t3 = (x313%((x314|x315)==x316));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;
	int64_t t4 = 149914954LL;

    t4 = (x321%((x322|x323)==x324));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x337 = INT64_MIN;
	int8_t x340 = -1;
	int64_t t5 = 9383LL;

    t5 = (x337%((x338|x339)==x340));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x405 = 12567;
	uint32_t x406 = UINT32_MAX;
	static int32_t x407 = 7;
	static int16_t x408 = -1;
	int32_t t6 = -124;

    t6 = (x405%((x406|x407)==x408));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x457 = INT16_MIN;
	static int8_t x458 = -1;
	int16_t x459 = -114;
	volatile int8_t x460 = -1;
	int32_t t7 = -17486;

    t7 = (x457%((x458|x459)==x460));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x555 = UINT8_MAX;
	volatile int64_t x556 = -1LL;
	volatile int32_t t8 = -159664321;

    t8 = (x553%((x554|x555)==x556));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x602 = INT64_MAX;
	static int8_t x603 = INT8_MIN;
	volatile int32_t t9 = 100;

    t9 = (x601%((x602|x603)==x604));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x637 = INT32_MAX;
	uint16_t x638 = UINT16_MAX;
	volatile int32_t x639 = -1;
	static uint32_t x640 = UINT32_MAX;

    t10 = (x637%((x638|x639)==x640));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x697 = INT64_MAX;
	int16_t x698 = INT16_MAX;
	int8_t x699 = INT8_MIN;
	volatile uint32_t x700 = UINT32_MAX;
	int64_t t11 = -120LL;

    t11 = (x697%((x698|x699)==x700));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x789 = INT64_MIN;
	volatile int8_t x791 = -1;
	int64_t t12 = 233476723LL;

    t12 = (x789%((x790|x791)==x792));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x853 = 32613U;
	int32_t x854 = -2485;
	uint16_t x855 = UINT16_MAX;
	volatile uint32_t t13 = 1662175908U;

    t13 = (x853%((x854|x855)==x856));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x927 = 61U;
	uint64_t x928 = UINT64_MAX;
	int64_t t14 = 582457224523LL;

    t14 = (x925%((x926|x927)==x928));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x961 = UINT16_MAX;
	int8_t x962 = -11;
	uint16_t x963 = UINT16_MAX;
	int8_t x964 = -1;

    t15 = (x961%((x962|x963)==x964));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x997 = 28906795348210LLU;
	int8_t x998 = INT8_MIN;
	volatile int8_t x999 = -1;
	int64_t x1000 = -1LL;
	volatile uint64_t t16 = 1698062855LLU;

    t16 = (x997%((x998|x999)==x1000));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1041 = UINT64_MAX;
	int64_t x1042 = INT64_MIN;
	int16_t x1044 = -1;

    t17 = (x1041%((x1042|x1043)==x1044));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1065 = 988984382U;
	static volatile uint32_t x1066 = UINT32_MAX;
	uint32_t x1068 = UINT32_MAX;

    t18 = (x1065%((x1066|x1067)==x1068));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x1129 = 5LLU;
	uint16_t x1130 = UINT16_MAX;
	static int16_t x1131 = -1;
	static int8_t x1132 = -1;
	volatile uint64_t t19 = 35175067031333LLU;

    t19 = (x1129%((x1130|x1131)==x1132));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x1137 = INT32_MIN;
	volatile int8_t x1138 = -1;
	uint16_t x1139 = UINT16_MAX;
	static int8_t x1140 = -1;
	volatile int32_t t20 = -3;

    t20 = (x1137%((x1138|x1139)==x1140));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1193 = -72;
	int8_t x1194 = -1;
	int32_t x1195 = -1;
	int64_t x1196 = -1LL;
	volatile int32_t t21 = 74;

    t21 = (x1193%((x1194|x1195)==x1196));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1209 = INT16_MAX;
	int8_t x1212 = -1;
	int32_t t22 = 115542042;

    t22 = (x1209%((x1210|x1211)==x1212));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1225 = INT16_MIN;
	static int16_t x1227 = -1;

    t23 = (x1225%((x1226|x1227)==x1228));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1265 = INT8_MAX;
	uint32_t x1267 = 76005U;
	static volatile int32_t t24 = 4576966;

    t24 = (x1265%((x1266|x1267)==x1268));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1305 = INT8_MIN;
	int32_t x1306 = -1;
	int32_t x1307 = INT32_MIN;
	int32_t x1308 = -1;
	volatile int32_t t25 = 51266;

    t25 = (x1305%((x1306|x1307)==x1308));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1309 = INT64_MIN;
	int64_t x1311 = -1LL;
	int32_t x1312 = -1;

    t26 = (x1309%((x1310|x1311)==x1312));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1341 = 30U;
	int64_t x1342 = -1LL;
	volatile int16_t x1343 = 48;
	int64_t x1344 = -1LL;
	int32_t t27 = 2;

    t27 = (x1341%((x1342|x1343)==x1344));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1374 = -28;
	volatile int32_t x1375 = INT32_MAX;
	static int64_t x1376 = -1LL;
	static int32_t t28 = 74447;

    t28 = (x1373%((x1374|x1375)==x1376));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1433 = UINT64_MAX;
	static int8_t x1435 = -1;

    t29 = (x1433%((x1434|x1435)==x1436));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1473 = 3;
	uint32_t x1474 = UINT32_MAX;
	int16_t x1475 = INT16_MIN;
	volatile int8_t x1476 = -1;
	static volatile int32_t t30 = -143644;

    t30 = (x1473%((x1474|x1475)==x1476));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1481 = 9905U;
	int32_t x1482 = INT32_MIN;
	int64_t x1483 = INT64_MIN;
	static volatile int32_t x1484 = INT32_MIN;

    t31 = (x1481%((x1482|x1483)==x1484));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x1681 = INT32_MAX;
	int32_t x1682 = -1;
	uint8_t x1683 = 17U;
	volatile uint32_t x1684 = UINT32_MAX;
	static int32_t t32 = -111464;

    t32 = (x1681%((x1682|x1683)==x1684));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1765 = INT64_MIN;
	volatile uint64_t x1768 = UINT64_MAX;
	int64_t t33 = -260622162782591LL;

    t33 = (x1765%((x1766|x1767)==x1768));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1782 = 3U;
	int32_t x1783 = -1;
	int16_t x1784 = -1;

    t34 = (x1781%((x1782|x1783)==x1784));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x1849 = -1;
	uint32_t x1850 = UINT32_MAX;
	static int64_t x1851 = -31LL;
	int8_t x1852 = -1;
	static int32_t t35 = 111;

    t35 = (x1849%((x1850|x1851)==x1852));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1950 = INT16_MAX;
	int32_t x1952 = -1;
	static volatile int32_t t36 = -1192170;

    t36 = (x1949%((x1950|x1951)==x1952));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x1973 = INT8_MIN;
	int8_t x1974 = INT8_MIN;
	int8_t x1976 = -1;
	static volatile int32_t t37 = -128228502;

    t37 = (x1973%((x1974|x1975)==x1976));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x1994 = 0U;
	volatile int32_t x1995 = INT32_MIN;
	int32_t x1996 = INT32_MIN;
	int64_t t38 = 376LL;

    t38 = (x1993%((x1994|x1995)==x1996));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x2021 = UINT8_MAX;
	static int8_t x2022 = INT8_MIN;
	int16_t x2023 = INT16_MAX;
	int64_t x2024 = -1LL;
	int32_t t39 = -187358;

    t39 = (x2021%((x2022|x2023)==x2024));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x2073 = INT32_MIN;
	volatile uint8_t x2075 = UINT8_MAX;
	int64_t x2076 = -1LL;
	int32_t t40 = -3222825;

    t40 = (x2073%((x2074|x2075)==x2076));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2142 = UINT32_MAX;
	volatile int16_t x2143 = INT16_MIN;
	static int32_t t41 = 2935;

    t41 = (x2141%((x2142|x2143)==x2144));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2157 = INT64_MIN;
	int8_t x2158 = -1;
	int32_t x2159 = -1;
	int16_t x2160 = -1;
	int64_t t42 = -24654315949908991LL;

    t42 = (x2157%((x2158|x2159)==x2160));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2181 = INT8_MIN;
	int64_t x2183 = -25896LL;
	uint64_t x2184 = UINT64_MAX;
	static int32_t t43 = -21887;

    t43 = (x2181%((x2182|x2183)==x2184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x2217 = INT64_MIN;
	static int16_t x2218 = -1;
	int16_t x2220 = -1;
	static volatile int64_t t44 = -246985857748512874LL;

    t44 = (x2217%((x2218|x2219)==x2220));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x2453 = 2;
	int16_t x2454 = INT16_MIN;
	int16_t x2455 = -1;
	uint32_t x2456 = UINT32_MAX;
	volatile int32_t t45 = 86;

    t45 = (x2453%((x2454|x2455)==x2456));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2541 = -4;
	volatile int32_t x2542 = INT32_MIN;
	uint64_t x2543 = UINT64_MAX;

    t46 = (x2541%((x2542|x2543)==x2544));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x2557 = INT32_MIN;
	static volatile uint64_t x2559 = 3062970369294511LLU;
	static int8_t x2560 = -1;
	volatile int32_t t47 = 20562635;

    t47 = (x2557%((x2558|x2559)==x2560));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x2565 = 14711;
	volatile int32_t x2566 = -12;
	int16_t x2567 = INT16_MAX;
	int64_t x2568 = -1LL;
	volatile int32_t t48 = 43358;

    t48 = (x2565%((x2566|x2567)==x2568));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2597 = INT8_MAX;
	int32_t x2598 = -1;
	static int8_t x2599 = -1;
	uint32_t x2600 = UINT32_MAX;
	static int32_t t49 = 503384;

    t49 = (x2597%((x2598|x2599)==x2600));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2606 = -1LL;
	static int32_t x2607 = -5;
	int8_t x2608 = -1;
	int32_t t50 = 4613;

    t50 = (x2605%((x2606|x2607)==x2608));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x2634 = -9;
	volatile int32_t x2635 = 139;
	static volatile int32_t t51 = 115915;

    t51 = (x2633%((x2634|x2635)==x2636));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x2665 = -1;
	uint32_t x2666 = 5U;
	volatile int32_t x2667 = INT32_MAX;
	static volatile int32_t t52 = -5485;

    t52 = (x2665%((x2666|x2667)==x2668));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x2689 = 8132U;
	int64_t x2690 = -1LL;
	int32_t x2691 = INT32_MIN;
	int8_t x2692 = -1;

    t53 = (x2689%((x2690|x2691)==x2692));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x2717 = -1;
	int16_t x2718 = -1;
	int32_t x2719 = INT32_MAX;
	int8_t x2720 = -1;

    t54 = (x2717%((x2718|x2719)==x2720));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2737 = 25808149982072707LLU;
	static uint64_t x2738 = UINT64_MAX;
	static int64_t x2739 = INT64_MIN;
	static int64_t x2740 = -1LL;
	volatile uint64_t t55 = 116248467LLU;

    t55 = (x2737%((x2738|x2739)==x2740));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x2741 = 453495;
	int16_t x2742 = INT16_MIN;
	int16_t x2743 = INT16_MAX;
	uint64_t x2744 = UINT64_MAX;
	int32_t t56 = 189480;

    t56 = (x2741%((x2742|x2743)==x2744));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2766 = INT16_MIN;
	int8_t x2768 = -1;
	static volatile int32_t t57 = 27266;

    t57 = (x2765%((x2766|x2767)==x2768));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x2769 = INT16_MIN;
	int16_t x2770 = -1930;
	int16_t x2771 = INT16_MAX;
	int32_t x2772 = -1;
	volatile int32_t t58 = 15340;

    t58 = (x2769%((x2770|x2771)==x2772));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x2773 = 201U;
	int32_t x2774 = -1;
	int64_t x2775 = -1LL;
	int8_t x2776 = -1;
	static int32_t t59 = -14342;

    t59 = (x2773%((x2774|x2775)==x2776));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x2829 = UINT8_MAX;
	volatile uint64_t x2830 = UINT64_MAX;
	int8_t x2832 = -1;
	int32_t t60 = -3646;

    t60 = (x2829%((x2830|x2831)==x2832));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2917 = 0;
	int8_t x2918 = INT8_MIN;
	int32_t t61 = -126982080;

    t61 = (x2917%((x2918|x2919)==x2920));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x2945 = UINT64_MAX;
	int32_t x2947 = INT32_MIN;
	int8_t x2948 = -1;
	volatile uint64_t t62 = 275054902323LLU;

    t62 = (x2945%((x2946|x2947)==x2948));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x2949 = 305430;
	int64_t x2950 = INT64_MAX;
	volatile uint64_t x2952 = UINT64_MAX;
	volatile int32_t t63 = 185236818;

    t63 = (x2949%((x2950|x2951)==x2952));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2973 = 12685U;
	int32_t x2975 = -1;
	static int64_t x2976 = -1LL;

    t64 = (x2973%((x2974|x2975)==x2976));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x3041 = INT8_MIN;
	uint8_t x3042 = UINT8_MAX;
	static int16_t x3043 = -1;
	int8_t x3044 = -1;
	int32_t t65 = 132;

    t65 = (x3041%((x3042|x3043)==x3044));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3057 = INT32_MAX;
	uint8_t x3058 = UINT8_MAX;
	int32_t x3059 = -1;
	int8_t x3060 = -1;

    t66 = (x3057%((x3058|x3059)==x3060));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x3062 = 3359835648LLU;
	volatile int8_t x3063 = -1;
	int16_t x3064 = -1;
	static volatile uint32_t t67 = 1382U;

    t67 = (x3061%((x3062|x3063)==x3064));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x3221 = 240426619350092832LL;
	int16_t x3222 = -1;
	uint16_t x3223 = UINT16_MAX;
	uint64_t x3224 = UINT64_MAX;
	int64_t t68 = 4256412139466126LL;

    t68 = (x3221%((x3222|x3223)==x3224));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x3257 = INT64_MIN;
	static int32_t x3258 = -1;
	int64_t x3259 = -6242520LL;
	int64_t t69 = 15618668691696LL;

    t69 = (x3257%((x3258|x3259)==x3260));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3282 = 571793LLU;
	uint64_t x3283 = UINT64_MAX;
	static int32_t x3284 = -1;
	static int32_t t70 = 5121695;

    t70 = (x3281%((x3282|x3283)==x3284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3361 = -1854;
	volatile int32_t x3362 = INT32_MIN;
	int8_t x3363 = -1;
	int64_t x3364 = -1LL;
	static int32_t t71 = -49891;

    t71 = (x3361%((x3362|x3363)==x3364));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x3377 = 2313U;
	int16_t x3378 = -1;
	static volatile int32_t x3379 = -1;
	static int64_t x3380 = -1LL;
	int32_t t72 = -29;

    t72 = (x3377%((x3378|x3379)==x3380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3402 = UINT64_MAX;
	int16_t x3403 = INT16_MIN;
	static uint64_t x3404 = UINT64_MAX;
	volatile uint64_t t73 = 152416029473LLU;

    t73 = (x3401%((x3402|x3403)==x3404));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x3405 = INT16_MAX;
	volatile int32_t x3406 = -10339793;
	int64_t x3407 = -1LL;
	volatile int64_t x3408 = -1LL;
	int32_t t74 = 13;

    t74 = (x3405%((x3406|x3407)==x3408));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3577 = INT64_MIN;
	int64_t x3578 = INT64_MIN;
	static volatile int64_t t75 = -3482793318844LL;

    t75 = (x3577%((x3578|x3579)==x3580));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x3673 = INT64_MIN;
	int8_t x3674 = -1;
	static int64_t x3675 = INT64_MIN;
	static int8_t x3676 = -1;
	int64_t t76 = 35533LL;

    t76 = (x3673%((x3674|x3675)==x3676));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x3693 = 1U;
	int64_t x3694 = -1LL;
	uint32_t x3695 = 10U;
	int64_t x3696 = -1LL;

    t77 = (x3693%((x3694|x3695)==x3696));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x3725 = 259716797473080LLU;
	int64_t x3726 = INT64_MIN;
	int8_t x3727 = INT8_MIN;
	static int8_t x3728 = INT8_MIN;
	volatile uint64_t t78 = 4LLU;

    t78 = (x3725%((x3726|x3727)==x3728));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x3747 = -1LL;
	uint64_t x3748 = UINT64_MAX;
	static volatile int32_t t79 = -14;

    t79 = (x3745%((x3746|x3747)==x3748));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3829 = -248248;
	uint8_t x3831 = 14U;
	volatile int32_t t80 = 2;

    t80 = (x3829%((x3830|x3831)==x3832));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x3877 = INT64_MIN;
	int32_t x3878 = -1;
	int8_t x3879 = -1;
	uint32_t x3880 = UINT32_MAX;
	static int64_t t81 = 855954236LL;

    t81 = (x3877%((x3878|x3879)==x3880));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x3977 = 118730U;
	int16_t x3978 = -1;
	int16_t x3980 = -1;
	volatile uint32_t t82 = 216355142U;

    t82 = (x3977%((x3978|x3979)==x3980));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4053 = 10407;
	volatile int16_t x4054 = -1;
	int16_t x4055 = INT16_MIN;
	int64_t x4056 = -1LL;
	int32_t t83 = 66327804;

    t83 = (x4053%((x4054|x4055)==x4056));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4085 = 3U;
	int8_t x4086 = 1;
	int8_t x4088 = -1;
	uint32_t t84 = 117U;

    t84 = (x4085%((x4086|x4087)==x4088));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4101 = 234U;
	int32_t x4102 = INT32_MIN;
	static int64_t x4103 = INT64_MAX;
	static volatile int64_t x4104 = -1LL;
	static uint32_t t85 = 236402385U;

    t85 = (x4101%((x4102|x4103)==x4104));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x4325 = INT16_MIN;
	static uint8_t x4326 = UINT8_MAX;
	int64_t x4328 = -1LL;
	int32_t t86 = 15;

    t86 = (x4325%((x4326|x4327)==x4328));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4333 = 42994840U;
	uint8_t x4335 = UINT8_MAX;
	volatile uint32_t x4336 = UINT32_MAX;

    t87 = (x4333%((x4334|x4335)==x4336));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x4346 = INT64_MIN;
	int32_t x4347 = -1;
	int16_t x4348 = -1;
	int32_t t88 = -67;

    t88 = (x4345%((x4346|x4347)==x4348));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x4369 = INT32_MIN;
	static uint16_t x4370 = UINT16_MAX;
	volatile int16_t x4371 = INT16_MIN;
	int16_t x4372 = -1;

    t89 = (x4369%((x4370|x4371)==x4372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x4381 = UINT64_MAX;
	volatile uint32_t x4382 = UINT32_MAX;
	uint16_t x4383 = UINT16_MAX;
	int16_t x4384 = -1;
	volatile uint64_t t90 = 140498045007940608LLU;

    t90 = (x4381%((x4382|x4383)==x4384));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x4421 = 4U;
	uint32_t x4422 = UINT32_MAX;
	volatile uint32_t x4424 = UINT32_MAX;
	int32_t t91 = 991;

    t91 = (x4421%((x4422|x4423)==x4424));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x4425 = 2325;
	int16_t x4426 = -1;
	int8_t x4427 = -1;
	static int64_t x4428 = -1LL;
	volatile int32_t t92 = -74224146;

    t92 = (x4425%((x4426|x4427)==x4428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x4535 = 31LLU;
	int16_t x4536 = -1;
	volatile int64_t t93 = 47LL;

    t93 = (x4533%((x4534|x4535)==x4536));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x4721 = INT8_MAX;
	int16_t x4722 = -1;
	static int8_t x4723 = -1;

    t94 = (x4721%((x4722|x4723)==x4724));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4741 = 463U;
	static volatile int64_t x4742 = INT64_MAX;
	int8_t x4743 = -10;
	int8_t x4744 = -1;
	volatile int32_t t95 = -8378;

    t95 = (x4741%((x4742|x4743)==x4744));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x4777 = 92U;
	int32_t x4778 = 124617729;
	int32_t x4779 = INT32_MAX;
	volatile int32_t t96 = 0;

    t96 = (x4777%((x4778|x4779)==x4780));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x4938 = 92LLU;
	static int32_t x4939 = -1;
	volatile uint32_t t97 = 1933566462U;

    t97 = (x4937%((x4938|x4939)==x4940));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5001 = 19962U;
	volatile int8_t x5002 = INT8_MIN;
	int64_t x5003 = -1LL;
	int32_t x5004 = -1;
	int32_t t98 = -28914;

    t98 = (x5001%((x5002|x5003)==x5004));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x5021 = -1LL;
	volatile uint32_t x5022 = UINT32_MAX;
	int16_t x5023 = 4;
	volatile int8_t x5024 = -1;
	int64_t t99 = 152463035422LL;

    t99 = (x5021%((x5022|x5023)==x5024));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x5089 = 6085U;
	int64_t x5090 = INT64_MIN;
	volatile int32_t x5091 = INT32_MIN;
	static int32_t x5092 = INT32_MIN;
	volatile uint32_t t100 = 53543U;

    t100 = (x5089%((x5090|x5091)==x5092));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x5213 = 252731235;
	int16_t x5215 = 8;
	static volatile int32_t t101 = -11139439;

    t101 = (x5213%((x5214|x5215)==x5216));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x5361 = INT16_MIN;
	volatile int32_t x5362 = INT32_MAX;
	volatile int32_t x5363 = -1;
	int32_t t102 = -79790730;

    t102 = (x5361%((x5362|x5363)==x5364));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x5409 = UINT64_MAX;
	int16_t x5410 = INT16_MIN;
	uint64_t x5411 = UINT64_MAX;
	int8_t x5412 = -1;
	volatile uint64_t t103 = 3203117691314510LLU;

    t103 = (x5409%((x5410|x5411)==x5412));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5421 = INT32_MIN;
	static int64_t x5424 = -1LL;
	int32_t t104 = 2;

    t104 = (x5421%((x5422|x5423)==x5424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x5461 = 11U;
	int16_t x5462 = INT16_MIN;
	int16_t x5463 = INT16_MIN;
	int16_t x5464 = INT16_MIN;

    t105 = (x5461%((x5462|x5463)==x5464));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x5537 = UINT16_MAX;
	volatile int8_t x5539 = -1;
	uint32_t x5540 = UINT32_MAX;

    t106 = (x5537%((x5538|x5539)==x5540));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x5554 = UINT8_MAX;
	volatile int32_t t107 = -163928444;

    t107 = (x5553%((x5554|x5555)==x5556));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5573 = INT32_MIN;
	int8_t x5574 = INT8_MIN;
	int32_t t108 = 213;

    t108 = (x5573%((x5574|x5575)==x5576));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5582 = -1;
	int64_t x5583 = INT64_MIN;
	int32_t x5584 = -1;
	static uint64_t t109 = 499316516462LLU;

    t109 = (x5581%((x5582|x5583)==x5584));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5635 = 30883U;
	int32_t x5636 = -1;

    t110 = (x5633%((x5634|x5635)==x5636));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x5711 = -1;
	int64_t x5712 = -1LL;
	int64_t t111 = 301654026768LL;

    t111 = (x5709%((x5710|x5711)==x5712));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x5729 = 0;
	int32_t x5730 = -1;
	int8_t x5731 = -46;
	uint32_t x5732 = UINT32_MAX;
	int32_t t112 = -9;

    t112 = (x5729%((x5730|x5731)==x5732));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x5769 = INT32_MAX;
	int32_t x5770 = -1;
	int16_t x5771 = -1;

    t113 = (x5769%((x5770|x5771)==x5772));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x5781 = -2649;
	int8_t x5782 = INT8_MIN;
	static int8_t x5784 = -1;

    t114 = (x5781%((x5782|x5783)==x5784));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x5821 = UINT16_MAX;
	volatile int8_t x5823 = -39;
	int8_t x5824 = -1;
	int32_t t115 = 258389;

    t115 = (x5821%((x5822|x5823)==x5824));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x5929 = -66;
	uint32_t x5930 = 112666U;
	static int16_t x5931 = -1;
	int8_t x5932 = -1;
	int32_t t116 = 0;

    t116 = (x5929%((x5930|x5931)==x5932));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x6089 = INT64_MIN;
	static int8_t x6092 = -1;
	int64_t t117 = -2LL;

    t117 = (x6089%((x6090|x6091)==x6092));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x6193 = INT64_MAX;
	int64_t x6194 = INT64_MAX;
	static int32_t x6195 = INT32_MAX;
	volatile int64_t x6196 = INT64_MAX;
	volatile int64_t t118 = -47474336LL;

    t118 = (x6193%((x6194|x6195)==x6196));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x6249 = UINT32_MAX;
	int16_t x6250 = -1;
	uint8_t x6251 = 94U;
	static volatile int32_t x6252 = -1;
	volatile uint32_t t119 = 750391U;

    t119 = (x6249%((x6250|x6251)==x6252));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x6409 = -2176;
	uint8_t x6410 = UINT8_MAX;
	volatile int16_t x6411 = -1;
	int64_t x6412 = -1LL;
	volatile int32_t t120 = 925;

    t120 = (x6409%((x6410|x6411)==x6412));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x6486 = -1LL;
	int64_t x6487 = INT64_MAX;
	volatile uint64_t x6488 = UINT64_MAX;
	int32_t t121 = 1343672;

    t121 = (x6485%((x6486|x6487)==x6488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x6505 = 2270U;
	volatile uint64_t x6508 = UINT64_MAX;

    t122 = (x6505%((x6506|x6507)==x6508));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x6569 = INT32_MAX;
	int32_t x6570 = -1;
	int32_t x6571 = -1;
	int32_t t123 = -4932;

    t123 = (x6569%((x6570|x6571)==x6572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x6661 = UINT16_MAX;
	static uint8_t x6662 = 10U;
	int32_t x6663 = -1;
	uint64_t x6664 = UINT64_MAX;
	volatile int32_t t124 = 4016830;

    t124 = (x6661%((x6662|x6663)==x6664));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x6777 = 1016550325872239628LL;
	int64_t x6778 = -1LL;
	volatile uint64_t x6779 = 3LLU;
	int16_t x6780 = -1;

    t125 = (x6777%((x6778|x6779)==x6780));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6901 = -1;
	uint8_t x6903 = UINT8_MAX;
	int8_t x6904 = -1;
	volatile int32_t t126 = -231413;

    t126 = (x6901%((x6902|x6903)==x6904));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x6905 = 309749184225LLU;
	int64_t x6907 = -8889406LL;
	int16_t x6908 = -1;
	uint64_t t127 = 14LLU;

    t127 = (x6905%((x6906|x6907)==x6908));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x6910 = -1;
	int32_t x6911 = INT32_MIN;
	int16_t x6912 = -1;

    t128 = (x6909%((x6910|x6911)==x6912));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x7061 = 42382252426740LLU;
	int32_t x7062 = INT32_MAX;
	int8_t x7063 = -1;
	uint64_t t129 = 6476315LLU;

    t129 = (x7061%((x7062|x7063)==x7064));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x7097 = INT64_MAX;
	int64_t x7098 = -1LL;
	static uint8_t x7099 = 25U;
	int32_t x7100 = -1;
	volatile int64_t t130 = 13767092499798LL;

    t130 = (x7097%((x7098|x7099)==x7100));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x7181 = 1;
	uint64_t x7182 = UINT64_MAX;
	int64_t x7183 = 7863495LL;
	static int16_t x7184 = -1;

    t131 = (x7181%((x7182|x7183)==x7184));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x7229 = INT64_MIN;
	static int8_t x7232 = -1;

    t132 = (x7229%((x7230|x7231)==x7232));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x7233 = INT16_MIN;
	volatile int8_t x7234 = -1;
	int16_t x7235 = -1;
	volatile int16_t x7236 = -1;

    t133 = (x7233%((x7234|x7235)==x7236));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x7285 = INT32_MIN;
	volatile int8_t x7287 = -1;
	uint32_t x7288 = UINT32_MAX;

    t134 = (x7285%((x7286|x7287)==x7288));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x7297 = 1U;
	volatile int64_t x7298 = -1LL;
	volatile int8_t x7299 = -7;
	static int16_t x7300 = -1;
	int32_t t135 = -333636;

    t135 = (x7297%((x7298|x7299)==x7300));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x7369 = INT16_MAX;
	int64_t x7370 = -1LL;
	int8_t x7371 = INT8_MIN;
	int64_t x7372 = -1LL;
	int32_t t136 = -552532;

    t136 = (x7369%((x7370|x7371)==x7372));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x7377 = INT64_MAX;
	int16_t x7378 = -1;
	volatile int8_t x7379 = INT8_MIN;
	int32_t x7380 = -1;
	static int64_t t137 = 411624533875210872LL;

    t137 = (x7377%((x7378|x7379)==x7380));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x7394 = -1LL;
	int64_t x7396 = -1LL;
	volatile uint32_t t138 = 0U;

    t138 = (x7393%((x7394|x7395)==x7396));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x7482 = -9;
	uint8_t x7483 = UINT8_MAX;
	uint32_t x7484 = UINT32_MAX;

    t139 = (x7481%((x7482|x7483)==x7484));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x7493 = -15;
	int8_t x7494 = INT8_MIN;
	int16_t x7495 = -1;
	static int8_t x7496 = -1;

    t140 = (x7493%((x7494|x7495)==x7496));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x7517 = INT8_MAX;
	static int16_t x7519 = INT16_MAX;
	static volatile uint64_t x7520 = UINT64_MAX;
	int32_t t141 = 2;

    t141 = (x7517%((x7518|x7519)==x7520));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x7521 = 757082649U;
	uint8_t x7522 = 55U;
	uint32_t x7523 = UINT32_MAX;
	int8_t x7524 = -1;

    t142 = (x7521%((x7522|x7523)==x7524));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x7649 = 10;
	int8_t x7650 = -1;
	uint8_t x7651 = UINT8_MAX;
	uint32_t x7652 = UINT32_MAX;
	int32_t t143 = -802437;

    t143 = (x7649%((x7650|x7651)==x7652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x7721 = 66235U;
	int16_t x7722 = INT16_MAX;
	static int64_t x7723 = INT64_MAX;
	int64_t x7724 = INT64_MAX;
	static uint32_t t144 = 15153U;

    t144 = (x7721%((x7722|x7723)==x7724));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x7741 = INT32_MAX;
	int16_t x7742 = INT16_MAX;
	volatile uint16_t x7743 = UINT16_MAX;
	uint16_t x7744 = UINT16_MAX;
	int32_t t145 = 144;

    t145 = (x7741%((x7742|x7743)==x7744));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x7745 = INT32_MIN;
	int8_t x7748 = -1;
	volatile int32_t t146 = 156;

    t146 = (x7745%((x7746|x7747)==x7748));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x7829 = -1;
	int32_t x7830 = 1;
	uint64_t x7832 = UINT64_MAX;

    t147 = (x7829%((x7830|x7831)==x7832));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x7837 = 2163010477499915304LL;
	volatile int16_t x7838 = INT16_MIN;
	int64_t x7839 = -1LL;
	volatile int64_t x7840 = -1LL;
	int64_t t148 = 104512085283LL;

    t148 = (x7837%((x7838|x7839)==x7840));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x7979 = 0;
	static volatile int32_t x7980 = -1;
	volatile int32_t t149 = 1;

    t149 = (x7977%((x7978|x7979)==x7980));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x7981 = UINT16_MAX;
	static volatile int16_t x7982 = -1;
	int8_t x7984 = -1;
	int32_t t150 = 900696;

    t150 = (x7981%((x7982|x7983)==x7984));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x8021 = INT64_MIN;
	uint32_t x8024 = UINT32_MAX;
	volatile int64_t t151 = 226LL;

    t151 = (x8021%((x8022|x8023)==x8024));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x8041 = 0U;
	volatile int64_t x8042 = INT64_MAX;
	int64_t x8043 = -952972511700238LL;
	int32_t t152 = 7575937;

    t152 = (x8041%((x8042|x8043)==x8044));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x8069 = INT64_MIN;
	uint64_t x8071 = UINT64_MAX;
	int16_t x8072 = -1;
	volatile int64_t t153 = 6871254756343583LL;

    t153 = (x8069%((x8070|x8071)==x8072));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x8165 = INT32_MAX;
	int8_t x8166 = INT8_MIN;
	int16_t x8167 = -1;

    t154 = (x8165%((x8166|x8167)==x8168));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x8229 = INT16_MAX;
	int64_t x8231 = -1LL;
	int16_t x8232 = -1;
	volatile int32_t t155 = -3495784;

    t155 = (x8229%((x8230|x8231)==x8232));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x8265 = -6;
	int64_t x8266 = -1LL;
	uint16_t x8267 = 2U;
	int64_t x8268 = -1LL;
	volatile int32_t t156 = -110118;

    t156 = (x8265%((x8266|x8267)==x8268));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x8273 = 71U;
	static int32_t x8274 = -1;
	static int64_t x8275 = INT64_MIN;
	volatile int16_t x8276 = -1;
	int32_t t157 = 207;

    t157 = (x8273%((x8274|x8275)==x8276));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x8290 = INT32_MAX;
	int8_t x8291 = INT8_MIN;
	int64_t x8292 = -1LL;
	static volatile int64_t t158 = 638849LL;

    t158 = (x8289%((x8290|x8291)==x8292));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x8315 = INT64_MIN;
	int64_t t159 = -910463918LL;

    t159 = (x8313%((x8314|x8315)==x8316));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x8349 = 2666836805666239LLU;
	static int8_t x8351 = -1;
	int8_t x8352 = -1;
	volatile uint64_t t160 = 114703LLU;

    t160 = (x8349%((x8350|x8351)==x8352));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x8406 = INT64_MAX;
	uint32_t x8407 = 5U;
	static int64_t x8408 = INT64_MAX;
	int32_t t161 = -152254;

    t161 = (x8405%((x8406|x8407)==x8408));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x8545 = 23U;
	static int8_t x8546 = INT8_MIN;
	int16_t x8547 = -1;
	int16_t x8548 = -1;
	volatile int32_t t162 = 12035;

    t162 = (x8545%((x8546|x8547)==x8548));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x8609 = INT64_MIN;
	volatile int32_t x8610 = -1;
	int64_t x8612 = -1LL;
	int64_t t163 = 3520278983776771229LL;

    t163 = (x8609%((x8610|x8611)==x8612));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x8705 = INT8_MAX;
	static int8_t x8706 = INT8_MIN;
	int8_t x8707 = INT8_MAX;
	volatile uint32_t x8708 = UINT32_MAX;
	static volatile int32_t t164 = -1076131;

    t164 = (x8705%((x8706|x8707)==x8708));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x8821 = -2LL;
	volatile int16_t x8822 = INT16_MIN;
	int8_t x8823 = INT8_MIN;
	int8_t x8824 = INT8_MIN;
	volatile int64_t t165 = 1LL;

    t165 = (x8821%((x8822|x8823)==x8824));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x8914 = INT8_MIN;
	int8_t x8916 = -1;
	volatile int32_t t166 = 5383;

    t166 = (x8913%((x8914|x8915)==x8916));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x9065 = INT64_MAX;
	volatile int32_t x9067 = INT32_MIN;
	int8_t x9068 = -1;
	volatile int64_t t167 = -465967299316594684LL;

    t167 = (x9065%((x9066|x9067)==x9068));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x9117 = 4LL;
	int32_t x9119 = -1;
	static volatile int64_t t168 = -9704LL;

    t168 = (x9117%((x9118|x9119)==x9120));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x9185 = -1;
	volatile int32_t x9187 = -315502;
	uint64_t x9188 = UINT64_MAX;
	int32_t t169 = 2778342;

    t169 = (x9185%((x9186|x9187)==x9188));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x9213 = 8723845680245785LL;
	int16_t x9214 = INT16_MAX;
	static volatile uint32_t x9215 = UINT32_MAX;
	int64_t t170 = -787704977LL;

    t170 = (x9213%((x9214|x9215)==x9216));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x9269 = UINT16_MAX;
	uint32_t x9270 = UINT32_MAX;
	uint32_t x9271 = 394554U;
	static int16_t x9272 = -1;

    t171 = (x9269%((x9270|x9271)==x9272));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x9297 = INT64_MIN;
	volatile uint64_t x9298 = UINT64_MAX;
	int8_t x9299 = INT8_MIN;
	static int8_t x9300 = -1;
	volatile int64_t t172 = -4319523991850177LL;

    t172 = (x9297%((x9298|x9299)==x9300));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x9445 = UINT16_MAX;
	int16_t x9446 = INT16_MIN;

    t173 = (x9445%((x9446|x9447)==x9448));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x9453 = INT8_MIN;
	uint8_t x9455 = UINT8_MAX;
	uint64_t x9456 = UINT64_MAX;
	static int32_t t174 = -1;

    t174 = (x9453%((x9454|x9455)==x9456));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x9481 = 0;
	volatile uint8_t x9482 = 2U;
	int8_t x9484 = -1;

    t175 = (x9481%((x9482|x9483)==x9484));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x9491 = -1;
	int32_t x9492 = -1;
	static uint32_t t176 = 1U;

    t176 = (x9489%((x9490|x9491)==x9492));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x9601 = 1U;
	int8_t x9603 = -1;
	int8_t x9604 = -1;
	int32_t t177 = 163815;

    t177 = (x9601%((x9602|x9603)==x9604));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x9613 = 7;
	int32_t x9614 = INT32_MIN;
	uint64_t x9615 = 0LLU;
	int32_t x9616 = INT32_MIN;
	static int32_t t178 = 273;

    t178 = (x9613%((x9614|x9615)==x9616));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x9653 = INT32_MAX;
	uint64_t x9654 = UINT64_MAX;
	volatile int16_t x9655 = -54;
	static int16_t x9656 = -1;

    t179 = (x9653%((x9654|x9655)==x9656));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x9661 = INT64_MIN;
	static volatile uint64_t x9662 = 65910795LLU;
	volatile int8_t x9663 = -1;
	int16_t x9664 = -1;
	volatile int64_t t180 = 745LL;

    t180 = (x9661%((x9662|x9663)==x9664));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x9685 = -1LL;
	int16_t x9686 = -105;
	uint64_t x9687 = 394949392276856LLU;
	volatile int64_t t181 = 413218131759244231LL;

    t181 = (x9685%((x9686|x9687)==x9688));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x9725 = UINT16_MAX;
	int64_t x9726 = -7134247LL;
	volatile int64_t x9727 = INT64_MAX;
	int64_t x9728 = -1LL;
	int32_t t182 = 1;

    t182 = (x9725%((x9726|x9727)==x9728));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x9757 = -132980454;
	int64_t x9759 = -1LL;
	uint64_t x9760 = UINT64_MAX;

    t183 = (x9757%((x9758|x9759)==x9760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x9809 = INT16_MAX;
	int64_t x9810 = INT64_MAX;
	int64_t x9811 = -721620618670LL;
	int32_t x9812 = -1;
	static volatile int32_t t184 = -11074;

    t184 = (x9809%((x9810|x9811)==x9812));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x9857 = 0;
	int16_t x9859 = INT16_MAX;
	volatile int16_t x9860 = -1;
	int32_t t185 = 13252143;

    t185 = (x9857%((x9858|x9859)==x9860));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x9870 = UINT32_MAX;
	uint16_t x9871 = 0U;
	int8_t x9872 = -1;
	static volatile int32_t t186 = -3962592;

    t186 = (x9869%((x9870|x9871)==x9872));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x9914 = -1;
	static int64_t x9915 = INT64_MAX;
	int8_t x9916 = -1;
	static uint32_t t187 = 891138U;

    t187 = (x9913%((x9914|x9915)==x9916));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x9917 = UINT8_MAX;
	int8_t x9918 = -1;
	uint64_t x9920 = UINT64_MAX;
	static volatile int32_t t188 = 569519952;

    t188 = (x9917%((x9918|x9919)==x9920));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x9997 = 332105197749LLU;
	uint64_t x9998 = UINT64_MAX;
	volatile uint32_t x9999 = 411552754U;
	volatile int8_t x10000 = -1;
	volatile uint64_t t189 = 20774353613889LLU;

    t189 = (x9997%((x9998|x9999)==x10000));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x10025 = UINT32_MAX;
	static volatile int8_t x10027 = INT8_MIN;
	uint64_t x10028 = UINT64_MAX;
	volatile uint32_t t190 = 371857U;

    t190 = (x10025%((x10026|x10027)==x10028));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x10078 = UINT16_MAX;
	static int8_t x10079 = INT8_MIN;
	static volatile int8_t x10080 = -1;
	int32_t t191 = 15;

    t191 = (x10077%((x10078|x10079)==x10080));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x10181 = INT16_MIN;
	int8_t x10182 = INT8_MAX;
	int8_t x10184 = -1;
	int32_t t192 = -3370196;

    t192 = (x10181%((x10182|x10183)==x10184));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x10206 = UINT64_MAX;
	static volatile uint64_t x10207 = 1LLU;
	uint64_t x10208 = UINT64_MAX;
	uint32_t t193 = 0U;

    t193 = (x10205%((x10206|x10207)==x10208));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x10217 = UINT64_MAX;
	int16_t x10218 = INT16_MIN;
	int64_t x10219 = INT64_MAX;
	int32_t x10220 = -1;
	volatile uint64_t t194 = 10999411892419531LLU;

    t194 = (x10217%((x10218|x10219)==x10220));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x10237 = 2067273196950LL;
	volatile int16_t x10238 = -4;
	int8_t x10240 = -1;
	int64_t t195 = 125433289LL;

    t195 = (x10237%((x10238|x10239)==x10240));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x10317 = INT64_MIN;
	int16_t x10318 = INT16_MIN;
	int8_t x10319 = INT8_MIN;
	static volatile int64_t t196 = -3LL;

    t196 = (x10317%((x10318|x10319)==x10320));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x10362 = INT16_MIN;
	volatile uint32_t x10363 = UINT32_MAX;
	volatile int32_t t197 = -40838426;

    t197 = (x10361%((x10362|x10363)==x10364));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x10390 = -1;
	int16_t x10391 = INT16_MAX;
	int16_t x10392 = -1;
	volatile int64_t t198 = -464793861409LL;

    t198 = (x10389%((x10390|x10391)==x10392));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x10553 = 1U;
	uint32_t x10554 = UINT32_MAX;
	int32_t x10555 = 462818;
	int32_t t199 = 3;

    t199 = (x10553%((x10554|x10555)==x10556));

    if (t199 != 0) { NG(); } else { ; }
	
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

