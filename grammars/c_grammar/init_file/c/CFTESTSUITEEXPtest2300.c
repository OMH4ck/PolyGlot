
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

int16_t x98 = INT16_MIN;
static int64_t t0 = -1459690180836275LL;
int64_t x121 = INT64_MIN;
volatile int8_t x138 = INT8_MAX;
volatile int64_t t4 = 7397010871532454LL;
int8_t x364 = 3;
uint64_t x401 = UINT64_MAX;
static int16_t x404 = 1;
int8_t x420 = 3;
volatile uint64_t t9 = 74404292292414191LLU;
static uint64_t x473 = 3720851177935639254LLU;
static uint64_t x475 = 978589659152LLU;
volatile uint64_t t11 = 7843103591LLU;
int32_t x555 = INT32_MAX;
volatile int64_t t15 = -28612637176431585LL;
uint32_t t17 = 1U;
int8_t x835 = INT8_MAX;
uint8_t x836 = 4U;
volatile uint64_t x1006 = 3LLU;
int64_t x1278 = 4094404680LL;
int64_t t24 = 751873342LL;
static volatile int64_t t26 = 3473LL;
volatile uint64_t x1539 = UINT64_MAX;
static uint64_t t27 = 1686847578LLU;
uint16_t x1570 = UINT16_MAX;
volatile uint32_t t28 = 215994U;
uint32_t x1613 = 0U;
volatile int64_t t29 = 1LL;
static volatile int32_t t30 = 42237512;
uint16_t x1874 = 12230U;
int64_t x1875 = -1LL;
int16_t x1926 = INT16_MAX;
static int8_t x2073 = INT8_MAX;
int64_t x2075 = -1LL;
static uint64_t x2079 = 106445130LLU;
uint8_t x2100 = 53U;
uint64_t t35 = 7376458LLU;
int8_t x2119 = INT8_MAX;
static uint64_t x2251 = 450LLU;
volatile int64_t t41 = 11LL;
int8_t x2496 = 0;
static int8_t x2633 = INT8_MIN;
static uint8_t x2636 = 1U;
static uint64_t x2639 = 901861827424951149LLU;
int16_t x2716 = 0;
static int64_t t45 = -20631661631586404LL;
volatile int64_t x2858 = 124288874408146LL;
uint8_t x2860 = 2U;
int16_t x3013 = -1;
uint8_t x3016 = 9U;
uint32_t x3024 = 3U;
static uint16_t x3047 = UINT16_MAX;
uint16_t x3117 = 32173U;
int16_t x3237 = -1;
static uint8_t x3308 = 5U;
volatile uint64_t x3585 = UINT64_MAX;
static uint64_t t57 = 17446048047304LLU;
static volatile uint8_t x3720 = 0U;
int32_t x3986 = -119082291;
int64_t t62 = 30LL;
volatile int16_t x4058 = -1;
uint32_t x4059 = 376U;
volatile uint64_t x4141 = UINT64_MAX;
volatile uint64_t t65 = 11784121845LLU;
uint64_t x4191 = 187642721542164LLU;
uint64_t t66 = 4689038153521LLU;
static uint16_t x4274 = UINT16_MAX;
static int64_t t68 = -603529399948170LL;
int8_t x4365 = -1;
volatile int64_t x4458 = 266723565668234LL;
static int64_t x4459 = -1LL;
static volatile int32_t x4590 = 3455;
volatile int32_t t71 = -13038750;
int8_t x4649 = INT8_MIN;
uint32_t x4652 = 54U;
volatile uint64_t t73 = 104249162606769LLU;
uint32_t x4666 = 21225126U;
int16_t x4668 = 7;
volatile uint64_t t74 = 186779509722668068LLU;
static volatile int16_t x4774 = -1726;
static uint16_t x4776 = 1U;
uint8_t x4957 = 0U;
static int64_t x4959 = 6259LL;
uint8_t x4960 = 3U;
int16_t x4980 = 1;
int16_t x5099 = -2369;
int8_t x5326 = INT8_MAX;
volatile int32_t t83 = -135;
uint8_t x5333 = 14U;
static int8_t x5660 = 0;
int8_t x5696 = 1;
uint8_t x5796 = 5U;
static int64_t x5817 = 67953691568388LL;
int8_t x5873 = INT8_MIN;
volatile int32_t x6069 = 62006;
int16_t x6072 = 1;
static uint16_t x6183 = UINT16_MAX;
uint8_t x6412 = 12U;
static volatile uint64_t x6449 = 425775361LLU;
uint64_t x6450 = 11416LLU;
static volatile uint64_t t95 = 63494488700763LLU;
int64_t x6550 = 12196939LL;
volatile uint64_t x6603 = 183866551594LLU;
int8_t x6721 = INT8_MIN;


void f0(void) {
    	uint16_t x97 = 26U;
	int64_t x99 = 987889649815336LL;
	static uint32_t x100 = 21U;

    t0 = (x97/((x98&x99)>>x100));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x117 = -1LL;
	int32_t x118 = -1;
	int32_t x119 = 517672;
	static uint8_t x120 = 14U;
	volatile int64_t t1 = -142126909028051528LL;

    t1 = (x117/((x118&x119)>>x120));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x122 = 667993U;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 1U;
	int64_t t2 = 52370024119067LL;

    t2 = (x121/((x122&x123)>>x124));

    if (t2 != -27615217059050LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x137 = INT16_MIN;
	static uint32_t x139 = 74266U;
	int8_t x140 = 0;
	uint32_t t3 = 106022U;

    t3 = (x137/((x138&x139)>>x140));

    if (t3 != 165189789U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x313 = INT64_MAX;
	volatile int32_t x314 = -28615821;
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = 3U;

    t4 = (x313/((x314&x315)>>x316));

    if (t4 != 3152211905965405LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x353 = INT8_MIN;
	static volatile int8_t x354 = INT8_MAX;
	uint8_t x355 = UINT8_MAX;
	static int8_t x356 = 1;
	int32_t t5 = -49707090;

    t5 = (x353/((x354&x355)>>x356));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -4643;
	int32_t t6 = 38922;

    t6 = (x361/((x362&x363)>>x364));

    if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x402 = -1308;
	static uint16_t x403 = 31U;
	uint64_t t7 = 64585080968188LLU;

    t7 = (x401/((x402&x403)>>x404));

    if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x417 = 2U;
	int64_t x418 = 703424414634481LL;
	uint16_t x419 = 2356U;
	volatile int64_t t8 = 239516256163230LL;

    t8 = (x417/((x418&x419)>>x420));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x429 = 1;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 0U;

    t9 = (x429/((x430&x431)>>x432));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x437 = -1LL;
	int64_t x438 = -1LL;
	static volatile int8_t x439 = INT8_MAX;
	volatile uint8_t x440 = 2U;
	volatile int64_t t10 = 0LL;

    t10 = (x437/((x438&x439)>>x440));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x474 = -1;
	uint8_t x476 = 7U;

    t11 = (x473/((x474&x475)>>x476));

    if (t11 != 486689130LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x513 = 407U;
	volatile uint16_t x514 = 722U;
	static uint16_t x515 = UINT16_MAX;
	static volatile int64_t x516 = 8LL;
	volatile int32_t t12 = -440230;

    t12 = (x513/((x514&x515)>>x516));

    if (t12 != 203) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x553 = 220712U;
	int16_t x554 = -1518;
	int8_t x556 = 8;
	uint32_t t13 = 279009U;

    t13 = (x553/((x554&x555)>>x556));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x689 = INT8_MAX;
	volatile int16_t x690 = INT16_MAX;
	static uint8_t x691 = 1U;
	volatile int16_t x692 = 0;
	int32_t t14 = 34;

    t14 = (x689/((x690&x691)>>x692));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x693 = INT64_MIN;
	int8_t x694 = -37;
	uint16_t x695 = 7412U;
	static int8_t x696 = 7;

    t15 = (x693/((x694&x695)>>x696));

    if (t15 != -161813544506224136LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x701 = 274131766;
	volatile uint32_t x702 = UINT32_MAX;
	static volatile int64_t x703 = -1LL;
	int16_t x704 = 1;
	static volatile int64_t t16 = -2026438005LL;

    t16 = (x701/((x702&x703)>>x704));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x749 = 17U;
	static uint8_t x750 = 10U;
	uint32_t x751 = UINT32_MAX;
	uint8_t x752 = 2U;

    t17 = (x749/((x750&x751)>>x752));

    if (t17 != 8U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x785 = INT64_MIN;
	static volatile uint64_t x786 = 2046837LLU;
	static int8_t x787 = INT8_MIN;
	static uint16_t x788 = 0U;
	uint64_t t18 = 218LLU;

    t18 = (x785/((x786&x787)>>x788));

    if (t18 != 4506416137456LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = 35026849241536427LL;
	int64_t t19 = 425194LL;

    t19 = (x833/((x834&x835)>>x836));

    if (t19 != 63LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x865 = -1;
	volatile int8_t x866 = INT8_MAX;
	static int32_t x867 = -29943;
	uint64_t x868 = 2LLU;
	int32_t t20 = -11;

    t20 = (x865/((x866&x867)>>x868));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x981 = -4205;
	uint64_t x982 = 3673320444565480400LLU;
	int16_t x983 = INT16_MAX;
	int16_t x984 = 4;
	volatile uint64_t t21 = 155660791625LLU;

    t21 = (x981/((x982&x983)>>x984));

    if (t21 != 11550872932817499LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1005 = INT32_MIN;
	static uint8_t x1007 = UINT8_MAX;
	int8_t x1008 = 1;
	uint64_t t22 = 31540358529535LLU;

    t22 = (x1005/((x1006&x1007)>>x1008));

    if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1261 = -1090913;
	int32_t x1262 = INT32_MAX;
	int8_t x1263 = INT8_MIN;
	static int16_t x1264 = 27;
	volatile int32_t t23 = -235055;

    t23 = (x1261/((x1262&x1263)>>x1264));

    if (t23 != -72727) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1277 = INT16_MIN;
	int8_t x1279 = -1;
	int8_t x1280 = 5;

    t24 = (x1277/((x1278&x1279)>>x1280));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1369 = -6;
	uint64_t x1370 = 672579188568542294LLU;
	int32_t x1371 = INT32_MIN;
	int16_t x1372 = 12;
	static volatile uint64_t t25 = 0LLU;

    t25 = (x1369/((x1370&x1371)>>x1372));

    if (t25 != 112340LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1469 = 534099386076578436LL;
	volatile int64_t x1470 = INT64_MAX;
	int32_t x1471 = -1;
	uint8_t x1472 = 8U;

    t26 = (x1469/((x1470&x1471)>>x1472));

    if (t26 != 14LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1537 = INT64_MIN;
	int64_t x1538 = INT64_MAX;
	static uint16_t x1540 = 17U;

    t27 = (x1537/((x1538&x1539)>>x1540));

    if (t27 != 131072LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1569 = 1192270160U;
	uint8_t x1571 = 52U;
	static uint16_t x1572 = 1U;

    t28 = (x1569/((x1570&x1571)>>x1572));

    if (t28 != 45856544U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1614 = INT64_MAX;
	static int32_t x1615 = -734348695;
	uint8_t x1616 = 6U;

    t29 = (x1613/((x1614&x1615)>>x1616));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1745 = INT32_MAX;
	int8_t x1746 = -1;
	uint16_t x1747 = 29569U;
	static int16_t x1748 = 0;

    t30 = (x1745/((x1746&x1747)>>x1748));

    if (t30 != 72626) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1873 = 159U;
	int8_t x1876 = 0;
	int64_t t31 = -59LL;

    t31 = (x1873/((x1874&x1875)>>x1876));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1925 = INT32_MAX;
	uint16_t x1927 = 1118U;
	uint8_t x1928 = 3U;
	int32_t t32 = -25501;

    t32 = (x1925/((x1926&x1927)>>x1928));

    if (t32 != 15449522) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2074 = 2706810U;
	uint32_t x2076 = 1U;
	int64_t t33 = 173862872300LL;

    t33 = (x2073/((x2074&x2075)>>x2076));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2077 = INT64_MIN;
	int32_t x2078 = -1;
	uint32_t x2080 = 15U;
	volatile uint64_t t34 = 15567733LLU;

    t34 = (x2077/((x2078&x2079)>>x2080));

    if (t34 != 2839708139425731LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2097 = -4;
	int32_t x2098 = -224;
	uint64_t x2099 = UINT64_MAX;

    t35 = (x2097/((x2098&x2099)>>x2100));

    if (t35 != 9011599449784832LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2105 = 1U;
	uint32_t x2106 = 42942078U;
	int8_t x2107 = INT8_MIN;
	int8_t x2108 = 6;
	uint32_t t36 = 617U;

    t36 = (x2105/((x2106&x2107)>>x2108));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x2117 = 0U;
	static int16_t x2118 = 5659;
	int8_t x2120 = 1;
	volatile int32_t t37 = 1;

    t37 = (x2117/((x2118&x2119)>>x2120));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2249 = -1;
	uint32_t x2250 = 11U;
	static int32_t x2252 = 1;
	uint64_t t38 = UINT64_MAX;

    t38 = (x2249/((x2250&x2251)>>x2252));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2257 = -132;
	volatile int16_t x2258 = INT16_MIN;
	uint64_t x2259 = UINT64_MAX;
	static volatile uint16_t x2260 = 48U;
	uint64_t t39 = 26702619816886LLU;

    t39 = (x2257/((x2258&x2259)>>x2260));

    if (t39 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2353 = UINT64_MAX;
	uint16_t x2354 = 10U;
	uint16_t x2355 = 6U;
	static uint8_t x2356 = 1U;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x2353/((x2354&x2355)>>x2356));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x2461 = 124993679088121343LL;
	int64_t x2462 = INT64_MAX;
	int32_t x2463 = INT32_MIN;
	volatile int16_t x2464 = 44;

    t41 = (x2461/((x2462&x2463)>>x2464));

    if (t41 != 238406977644LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x2493 = INT16_MIN;
	int32_t x2494 = -1;
	uint8_t x2495 = 89U;
	int32_t t42 = 20931505;

    t42 = (x2493/((x2494&x2495)>>x2496));

    if (t42 != -368) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2634 = UINT64_MAX;
	int32_t x2635 = -1;
	uint64_t t43 = 561LLU;

    t43 = (x2633/((x2634&x2635)>>x2636));

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x2637 = INT32_MAX;
	int64_t x2638 = -615LL;
	int16_t x2640 = 1;
	static uint64_t t44 = 2LLU;

    t44 = (x2637/((x2638&x2639)>>x2640));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2713 = 49976208LL;
	int64_t x2714 = -1LL;
	int8_t x2715 = 4;

    t45 = (x2713/((x2714&x2715)>>x2716));

    if (t45 != 12494052LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x2745 = INT64_MIN;
	static volatile int8_t x2746 = INT8_MAX;
	int32_t x2747 = 139;
	int8_t x2748 = 0;
	int64_t t46 = 7288453700053LL;

    t46 = (x2745/((x2746&x2747)>>x2748));

    if (t46 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x2857 = INT64_MIN;
	static uint32_t x2859 = 175U;
	int64_t t47 = 16047577672973074LL;

    t47 = (x2857/((x2858&x2859)>>x2860));

    if (t47 != -288230376151711744LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x2861 = UINT64_MAX;
	volatile uint16_t x2862 = UINT16_MAX;
	uint32_t x2863 = 6032282U;
	volatile uint64_t x2864 = 1LLU;
	uint64_t t48 = 100849303200123620LLU;

    t48 = (x2861/((x2862&x2863)>>x2864));

    if (t48 != 12422049881285893LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x2913 = 2LLU;
	uint16_t x2914 = 17175U;
	static volatile int32_t x2915 = -1;
	int64_t x2916 = 1LL;
	static uint64_t t49 = 32LLU;

    t49 = (x2913/((x2914&x2915)>>x2916));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3014 = UINT32_MAX;
	static int32_t x3015 = INT32_MIN;
	uint32_t t50 = 250761U;

    t50 = (x3013/((x3014&x3015)>>x3016));

    if (t50 != 1023U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x3021 = -719793242LL;
	static uint64_t x3022 = 769269103263004LLU;
	volatile int64_t x3023 = -1LL;
	uint64_t t51 = 5556238089LLU;

    t51 = (x3021/((x3022&x3023)>>x3024));

    if (t51 != 191836LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3045 = UINT64_MAX;
	int16_t x3046 = INT16_MIN;
	static uint8_t x3048 = 0U;
	volatile uint64_t t52 = 464100687066LLU;

    t52 = (x3045/((x3046&x3047)>>x3048));

    if (t52 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3118 = 27U;
	static int8_t x3119 = -1;
	static uint8_t x3120 = 0U;
	int32_t t53 = 1021462;

    t53 = (x3117/((x3118&x3119)>>x3120));

    if (t53 != 1191) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3238 = UINT32_MAX;
	volatile int16_t x3239 = INT16_MIN;
	volatile uint8_t x3240 = 4U;
	uint32_t t54 = 6286378U;

    t54 = (x3237/((x3238&x3239)>>x3240));

    if (t54 != 16U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x3297 = INT16_MAX;
	volatile int16_t x3298 = INT16_MIN;
	int64_t x3299 = INT64_MAX;
	int32_t x3300 = 4;
	volatile int64_t t55 = 1571036316LL;

    t55 = (x3297/((x3298&x3299)>>x3300));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x3305 = INT32_MIN;
	static uint16_t x3306 = 3876U;
	volatile int32_t x3307 = -1;
	volatile int32_t t56 = 117116044;

    t56 = (x3305/((x3306&x3307)>>x3308));

    if (t56 != -17747798) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3586 = 8472886LLU;
	int32_t x3587 = -11663;
	uint8_t x3588 = 3U;

    t57 = (x3585/((x3586&x3587)>>x3588));

    if (t57 != 17421950123542LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3717 = -1;
	int8_t x3718 = -10;
	uint32_t x3719 = UINT32_MAX;
	volatile uint32_t t58 = 49826U;

    t58 = (x3717/((x3718&x3719)>>x3720));

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x3725 = 5720U;
	int16_t x3726 = INT16_MAX;
	int32_t x3727 = INT32_MAX;
	static volatile int8_t x3728 = 1;
	int32_t t59 = 30131;

    t59 = (x3725/((x3726&x3727)>>x3728));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3777 = 20278777LLU;
	static uint64_t x3778 = UINT64_MAX;
	int64_t x3779 = INT64_MIN;
	uint8_t x3780 = 1U;
	static uint64_t t60 = 0LLU;

    t60 = (x3777/((x3778&x3779)>>x3780));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3985 = 14;
	int64_t x3987 = INT64_MAX;
	int8_t x3988 = 1;
	volatile int64_t t61 = -27LL;

    t61 = (x3985/((x3986&x3987)>>x3988));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x3989 = 500489U;
	int64_t x3990 = -1LL;
	int32_t x3991 = INT32_MAX;
	int16_t x3992 = 1;

    t62 = (x3989/((x3990&x3991)>>x3992));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x4049 = -1;
	uint32_t x4050 = 4979U;
	static uint64_t x4051 = 185928823366567LLU;
	static volatile uint16_t x4052 = 1U;
	static volatile uint64_t t63 = 6156LLU;

    t63 = (x4049/((x4050&x4051)>>x4052));

    if (t63 != 46001855545410353LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x4057 = UINT32_MAX;
	int16_t x4060 = 6;
	uint32_t t64 = 400U;

    t64 = (x4057/((x4058&x4059)>>x4060));

    if (t64 != 858993459U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x4142 = UINT32_MAX;
	volatile int64_t x4143 = -5548580LL;
	int16_t x4144 = 0;

    t65 = (x4141/((x4142&x4143)>>x4144));

    if (t65 != 4300523053LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x4189 = INT32_MIN;
	int8_t x4190 = INT8_MIN;
	volatile int8_t x4192 = 1;

    t66 = (x4189/((x4190&x4191)>>x4192));

    if (t66 != 196615LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x4273 = UINT32_MAX;
	uint32_t x4275 = UINT32_MAX;
	int16_t x4276 = 1;
	uint32_t t67 = 2125341729U;

    t67 = (x4273/((x4274&x4275)>>x4276));

    if (t67 != 131076U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x4325 = INT8_MIN;
	static int64_t x4326 = INT64_MAX;
	volatile uint8_t x4327 = 57U;
	int8_t x4328 = 1;

    t68 = (x4325/((x4326&x4327)>>x4328));

    if (t68 != -4LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x4366 = -98LL;
	int32_t x4367 = 97000;
	volatile int8_t x4368 = 2;
	int64_t t69 = 269400722039451LL;

    t69 = (x4365/((x4366&x4367)>>x4368));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4457 = INT16_MIN;
	uint16_t x4460 = 1U;
	static int64_t t70 = -162891241417816LL;

    t70 = (x4457/((x4458&x4459)>>x4460));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x4589 = 674;
	int8_t x4591 = -5;
	int64_t x4592 = 2LL;

    t71 = (x4589/((x4590&x4591)>>x4592));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x4601 = INT16_MIN;
	static volatile int64_t x4602 = INT64_MAX;
	int64_t x4603 = INT64_MAX;
	uint8_t x4604 = 9U;
	volatile int64_t t72 = -64003243LL;

    t72 = (x4601/((x4602&x4603)>>x4604));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x4650 = 133852499595773079LLU;
	volatile int16_t x4651 = -31;

    t73 = (x4649/((x4650&x4651)>>x4652));

    if (t73 != 2635249153387078784LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4665 = UINT32_MAX;
	uint64_t x4667 = 42449895576440662LLU;

    t74 = (x4665/((x4666&x4667)>>x4668));

    if (t74 != 4082668LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x4773 = INT16_MIN;
	int16_t x4775 = 1122;
	static volatile int32_t t75 = -15752932;

    t75 = (x4773/((x4774&x4775)>>x4776));

    if (t75 != -992) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x4909 = UINT16_MAX;
	volatile int8_t x4910 = INT8_MAX;
	int32_t x4911 = -61913;
	volatile int8_t x4912 = 0;
	static volatile int32_t t76 = -958417132;

    t76 = (x4909/((x4910&x4911)>>x4912));

    if (t76 != 1680) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4937 = INT8_MIN;
	uint64_t x4938 = 2034460538008300172LLU;
	static int32_t x4939 = INT32_MIN;
	uint8_t x4940 = 30U;
	volatile uint64_t t77 = 327566LLU;

    t77 = (x4937/((x4938&x4939)>>x4940));

    if (t77 != 9735770372LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4958 = -142;
	volatile int64_t t78 = 1LL;

    t78 = (x4957/((x4958&x4959)>>x4960));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x4977 = 2371U;
	static int64_t x4978 = 659LL;
	volatile uint64_t x4979 = 381LLU;
	static uint64_t t79 = 2118434126830LLU;

    t79 = (x4977/((x4978&x4979)>>x4980));

    if (t79 != 296LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x5097 = -1;
	int64_t x5098 = INT64_MAX;
	uint16_t x5100 = 41U;
	static int64_t t80 = -4LL;

    t80 = (x5097/((x5098&x5099)>>x5100));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x5293 = 12U;
	static volatile int8_t x5294 = -4;
	volatile int32_t x5295 = 249090;
	volatile int8_t x5296 = 1;
	volatile int32_t t81 = -1;

    t81 = (x5293/((x5294&x5295)>>x5296));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x5313 = INT16_MIN;
	uint64_t x5314 = UINT64_MAX;
	volatile int64_t x5315 = -1LL;
	int8_t x5316 = 6;
	volatile uint64_t t82 = 6638LLU;

    t82 = (x5313/((x5314&x5315)>>x5316));

    if (t82 != 63LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x5325 = INT16_MIN;
	static uint8_t x5327 = 106U;
	volatile int16_t x5328 = 1;

    t83 = (x5325/((x5326&x5327)>>x5328));

    if (t83 != -618) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5334 = UINT64_MAX;
	int16_t x5335 = -1;
	uint16_t x5336 = 54U;
	uint64_t t84 = 116235578447LLU;

    t84 = (x5333/((x5334&x5335)>>x5336));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x5457 = INT8_MIN;
	static volatile uint32_t x5458 = 1387236117U;
	int64_t x5459 = 27157312854673LL;
	uint16_t x5460 = 5U;
	volatile int64_t t85 = 29500LL;

    t85 = (x5457/((x5458&x5459)>>x5460));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x5657 = 934U;
	static int64_t x5658 = 72234LL;
	int16_t x5659 = INT16_MIN;
	int64_t t86 = -77227870LL;

    t86 = (x5657/((x5658&x5659)>>x5660));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x5693 = INT64_MAX;
	int64_t x5694 = 41913LL;
	uint32_t x5695 = 4610U;
	volatile int64_t t87 = 28LL;

    t87 = (x5693/((x5694&x5695)>>x5696));

    if (t87 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x5793 = 770635983018219LL;
	volatile int16_t x5794 = INT16_MIN;
	uint64_t x5795 = 7147450345879363LLU;
	volatile uint64_t t88 = 5954205909201227593LLU;

    t88 = (x5793/((x5794&x5795)>>x5796));

    if (t88 != 3LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x5818 = INT16_MIN;
	static volatile uint64_t x5819 = 179428172307LLU;
	uint8_t x5820 = 0U;
	volatile uint64_t t89 = 57464714290040394LLU;

    t89 = (x5817/((x5818&x5819)>>x5820));

    if (t89 != 378LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x5874 = -1;
	uint32_t x5875 = 4U;
	int8_t x5876 = 1;
	uint32_t t90 = 1122634111U;

    t90 = (x5873/((x5874&x5875)>>x5876));

    if (t90 != 2147483584U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x6070 = INT16_MIN;
	int64_t x6071 = 445357309956974071LL;
	int64_t t91 = -393759LL;

    t91 = (x6069/((x6070&x6071)>>x6072));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x6181 = 0U;
	int16_t x6182 = INT16_MIN;
	static volatile uint8_t x6184 = 15U;
	static volatile int32_t t92 = -40417307;

    t92 = (x6181/((x6182&x6183)>>x6184));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x6409 = INT32_MIN;
	int16_t x6410 = INT16_MIN;
	static int32_t x6411 = 22758310;
	volatile int32_t t93 = -57998;

    t93 = (x6409/((x6410&x6411)>>x6412));

    if (t93 != -386794) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x6421 = INT32_MIN;
	static uint32_t x6422 = 500606U;
	uint8_t x6423 = 24U;
	volatile uint32_t x6424 = 3U;
	static volatile uint32_t t94 = 35U;

    t94 = (x6421/((x6422&x6423)>>x6424));

    if (t94 != 715827882U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x6451 = 1023803306U;
	int16_t x6452 = 1;

    t95 = (x6449/((x6450&x6451)>>x6452));

    if (t95 != 74697LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x6453 = INT32_MIN;
	uint32_t x6454 = 628560980U;
	uint32_t x6455 = 16626378U;
	uint16_t x6456 = 0U;
	uint32_t t96 = 330U;

    t96 = (x6453/((x6454&x6455)>>x6456));

    if (t96 != 279U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x6549 = UINT64_MAX;
	uint16_t x6551 = 118U;
	int8_t x6552 = 1;
	uint64_t t97 = 52107LLU;

    t97 = (x6549/((x6550&x6551)>>x6552));

    if (t97 != 558992244657865200LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x6601 = -108;
	uint64_t x6602 = UINT64_MAX;
	int16_t x6604 = 4;
	static volatile uint64_t t98 = 2424758755402LLU;

    t98 = (x6601/((x6602&x6603)>>x6604));

    if (t98 != 1605228915LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x6722 = -1;
	uint32_t x6723 = UINT32_MAX;
	static uint8_t x6724 = 31U;
	volatile uint32_t t99 = 24892U;

    t99 = (x6721/((x6722&x6723)>>x6724));

    if (t99 != 4294967168U) { NG(); } else { ; }
	
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


    return 0;
}

