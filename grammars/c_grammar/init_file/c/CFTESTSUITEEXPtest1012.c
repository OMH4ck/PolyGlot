
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

static volatile int64_t x1 = -71670LL;
volatile uint64_t x2 = 4979324LLU;
int32_t t1 = -2;
static int16_t x161 = 1126;
volatile uint64_t t3 = 174910954703245LLU;
static uint32_t t5 = 8986447U;
static uint8_t x667 = 1U;
uint32_t x748 = 1903406360U;
uint64_t t8 = 118LLU;
int64_t x869 = INT64_MIN;
volatile int8_t x870 = INT8_MAX;
uint32_t x872 = 2322U;
volatile int64_t t10 = -390LL;
int32_t x921 = -295;
uint32_t x974 = 6U;
int64_t t12 = -124044583133371085LL;
static uint8_t x1181 = UINT8_MAX;
uint16_t x1266 = UINT16_MAX;
static uint8_t x1267 = 1U;
int32_t x1314 = 64098;
static int16_t x1316 = -1;
static volatile int16_t x1325 = 429;
uint32_t x1502 = UINT32_MAX;
uint64_t x1518 = UINT64_MAX;
static int16_t x1520 = INT16_MIN;
volatile uint8_t x1554 = 7U;
static int8_t x1598 = 1;
int64_t x1599 = 1LL;
volatile uint8_t x2031 = 3U;
uint32_t t24 = 18314U;
int32_t x2253 = INT32_MIN;
volatile int32_t t26 = -253;
volatile uint16_t x2365 = 23U;
uint32_t x2546 = UINT32_MAX;
uint16_t x2595 = 6U;
static volatile uint8_t x2755 = 2U;
static uint32_t x2756 = 1866132387U;
uint8_t x2801 = 94U;
static volatile int32_t t35 = 61;
uint32_t x2926 = 2875U;
static int32_t x3201 = -4;
uint32_t x3203 = 6U;
int16_t x3351 = 5;
int64_t x3473 = -1LL;
uint32_t x3474 = UINT32_MAX;
int64_t t41 = -6LL;
static uint8_t x3570 = 2U;
static int64_t x3685 = INT64_MAX;
static uint8_t x3687 = 3U;
static int64_t t43 = -1380946LL;
int64_t x3765 = 1029159932822054275LL;
static volatile uint64_t t44 = 25271151LLU;
uint8_t x3927 = 0U;
static uint64_t x4096 = 940760LLU;
volatile uint64_t t47 = 1329LLU;
int64_t x4205 = INT64_MAX;
volatile uint32_t x4208 = 487971U;
int8_t x4407 = 1;
static uint16_t x4746 = UINT16_MAX;
uint8_t x4747 = 15U;
int16_t x4769 = 51;
int64_t x4772 = -1LL;
volatile int32_t x5024 = -1;
volatile int8_t x5039 = 0;
uint64_t x5040 = 12656862205LLU;
uint16_t x5340 = 11849U;
volatile int32_t t61 = -506527;
uint32_t x5402 = UINT32_MAX;
volatile uint8_t x5403 = 6U;
int64_t x5536 = -1LL;
static uint64_t x5630 = 2LLU;
uint16_t x5631 = 29U;
uint64_t t65 = 31LLU;
int32_t x5725 = INT32_MIN;
uint8_t x5768 = 1U;
uint8_t x5902 = 6U;
uint32_t x6005 = 3915U;
static uint16_t x6307 = 4U;
int32_t t73 = -1235;
uint8_t x6623 = 3U;
volatile int64_t t76 = 0LL;
uint16_t x6725 = 153U;
static uint16_t x6726 = 23U;
uint64_t x6785 = 251152880795391651LLU;
uint64_t t79 = 24763LLU;
uint8_t x6885 = 15U;
static int32_t x6914 = 13556;
int32_t t82 = -6424;
volatile uint8_t x7282 = UINT8_MAX;
uint64_t x7381 = 1067994551950453LLU;
uint16_t x7422 = 14U;
volatile int16_t x7482 = INT16_MAX;
volatile int8_t x7483 = 6;
uint32_t x7563 = 3U;
int64_t x7617 = INT64_MIN;
uint8_t x7819 = 0U;
int8_t x7905 = -1;
uint64_t t92 = 15LLU;
int8_t x8047 = 0;
static uint32_t x8048 = UINT32_MAX;
volatile int8_t x8122 = INT8_MAX;


void f0(void) {
    	int8_t x3 = 0;
	int8_t x4 = -14;
	volatile uint64_t t0 = 181150544LLU;

    t0 = (x1/((x2<<x3)*x4));

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x65 = INT32_MAX;
	uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 4LLU;
	int32_t x68 = -7557;

    t1 = (x65/((x66<<x67)*x68));

    if (t1 != -69) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x162 = INT8_MAX;
	uint8_t x163 = 7U;
	int32_t x164 = -202;
	static volatile int32_t t2 = -43;

    t2 = (x161/((x162<<x163)*x164));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x285 = INT8_MIN;
	uint64_t x286 = 511624291358402LLU;
	volatile uint16_t x287 = 5U;
	int16_t x288 = -1;

    t3 = (x285/((x286<<x287)*x288));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = 13U;
	uint8_t x343 = 1U;
	int64_t x344 = 8355605977511LL;
	volatile int64_t t4 = 61LL;

    t4 = (x341/((x342<<x343)*x344));

    if (t4 != -42455LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x481 = 35U;
	uint8_t x482 = 2U;
	uint32_t x483 = 21U;
	uint32_t x484 = 13U;

    t5 = (x481/((x482<<x483)*x484));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x649 = UINT8_MAX;
	int8_t x650 = INT8_MAX;
	static volatile uint16_t x651 = 5U;
	volatile uint32_t x652 = UINT32_MAX;
	volatile uint32_t t6 = 28402985U;

    t6 = (x649/((x650<<x651)*x652));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x666 = 1;
	static uint8_t x668 = UINT8_MAX;
	static volatile int64_t t7 = -309886LL;

    t7 = (x665/((x666<<x667)*x668));

    if (t7 != -18085043209519168LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	static uint64_t x746 = 53673283LLU;
	volatile int64_t x747 = 0LL;

    t8 = (x745/((x746<<x747)*x748));

    if (t8 != 180LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x801 = 37367U;
	int64_t x802 = 395918LL;
	uint8_t x803 = 1U;
	int32_t x804 = INT32_MIN;
	volatile int64_t t9 = 27049811824LL;

    t9 = (x801/((x802<<x803)*x804));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x871 = 24U;

    t10 = (x869/((x870<<x871)*x872));

    if (t10 != -2309898377LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x922 = 3493424LL;
	int32_t x923 = 0;
	uint16_t x924 = 740U;
	static volatile int64_t t11 = -1088920264247424502LL;

    t11 = (x921/((x922<<x923)*x924));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x973 = INT64_MAX;
	uint8_t x975 = 1U;
	int8_t x976 = -1;

    t12 = (x973/((x974<<x975)*x976));

    if (t12 != 2147483654LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x1081 = 1U;
	uint32_t x1082 = 19668U;
	volatile uint8_t x1083 = 0U;
	static uint16_t x1084 = 69U;
	volatile uint32_t t13 = 53528042U;

    t13 = (x1081/((x1082<<x1083)*x1084));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x1182 = 379902490108880708LLU;
	int32_t x1183 = 51;
	uint8_t x1184 = 12U;
	static uint64_t t14 = 1981756408465567LLU;

    t14 = (x1181/((x1182<<x1183)*x1184));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1261 = 1U;
	int64_t x1262 = 115049LL;
	uint8_t x1263 = 9U;
	uint16_t x1264 = 13U;
	volatile int64_t t15 = -13708015731876LL;

    t15 = (x1261/((x1262<<x1263)*x1264));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1265 = 268LL;
	uint8_t x1268 = UINT8_MAX;
	volatile int64_t t16 = 59901389708950LL;

    t16 = (x1265/((x1266<<x1267)*x1268));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x1313 = -1;
	uint8_t x1315 = 1U;
	volatile int32_t t17 = 4587782;

    t17 = (x1313/((x1314<<x1315)*x1316));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1326 = UINT64_MAX;
	uint8_t x1327 = 4U;
	int32_t x1328 = 16723582;
	uint64_t t18 = 97LLU;

    t18 = (x1325/((x1326<<x1327)*x1328));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x1501 = UINT8_MAX;
	volatile uint16_t x1503 = 0U;
	uint8_t x1504 = UINT8_MAX;
	volatile uint32_t t19 = 1U;

    t19 = (x1501/((x1502<<x1503)*x1504));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x1517 = 1823104U;
	static uint16_t x1519 = 1U;
	static uint64_t t20 = 107050470LLU;

    t20 = (x1517/((x1518<<x1519)*x1520));

    if (t20 != 27LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1553 = INT16_MIN;
	volatile int8_t x1555 = 9;
	int16_t x1556 = -1;
	static int32_t t21 = 54083;

    t21 = (x1553/((x1554<<x1555)*x1556));

    if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1597 = 1;
	volatile uint16_t x1600 = UINT16_MAX;
	volatile int32_t t22 = -4070180;

    t22 = (x1597/((x1598<<x1599)*x1600));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x1889 = 3;
	uint64_t x1890 = UINT64_MAX;
	uint8_t x1891 = 11U;
	static int16_t x1892 = INT16_MIN;
	volatile uint64_t t23 = 207332449797LLU;

    t23 = (x1889/((x1890<<x1891)*x1892));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2029 = INT16_MAX;
	uint32_t x2030 = UINT32_MAX;
	uint8_t x2032 = 17U;

    t24 = (x2029/((x2030<<x2031)*x2032));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2233 = INT8_MAX;
	volatile uint32_t x2234 = 354U;
	static volatile uint8_t x2235 = 2U;
	int32_t x2236 = INT32_MAX;
	volatile uint32_t t25 = 5088U;

    t25 = (x2233/((x2234<<x2235)*x2236));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2254 = 49U;
	uint32_t x2255 = 0U;
	int16_t x2256 = -1;

    t26 = (x2253/((x2254<<x2255)*x2256));

    if (t26 != 43826196) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2366 = 26453LLU;
	int16_t x2367 = 17;
	int16_t x2368 = -104;
	volatile uint64_t t27 = 1220965LLU;

    t27 = (x2365/((x2366<<x2367)*x2368));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2537 = 13U;
	volatile uint16_t x2538 = 3577U;
	static int8_t x2539 = 1;
	volatile uint64_t x2540 = 828946049035873375LLU;
	volatile uint64_t t28 = 65566553LLU;

    t28 = (x2537/((x2538<<x2539)*x2540));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x2545 = -1654190LL;
	uint16_t x2547 = 1U;
	volatile int8_t x2548 = -1;
	int64_t t29 = -75LL;

    t29 = (x2545/((x2546<<x2547)*x2548));

    if (t29 != -827095LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x2577 = 1087833249957824LLU;
	static uint16_t x2578 = 3U;
	uint8_t x2579 = 0U;
	volatile uint16_t x2580 = 11U;
	volatile uint64_t t30 = 2832388033324287911LLU;

    t30 = (x2577/((x2578<<x2579)*x2580));

    if (t30 != 32964643938115LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x2593 = 108262377631LLU;
	volatile uint64_t x2594 = 164937LLU;
	int32_t x2596 = 1433035;
	uint64_t t31 = 75983253476LLU;

    t31 = (x2593/((x2594<<x2595)*x2596));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x2601 = INT16_MAX;
	uint16_t x2602 = 87U;
	uint8_t x2603 = 0U;
	int16_t x2604 = INT16_MIN;
	volatile int32_t t32 = 17612119;

    t32 = (x2601/((x2602<<x2603)*x2604));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2637 = 126419747951208942LLU;
	volatile uint8_t x2638 = UINT8_MAX;
	uint16_t x2639 = 0U;
	int32_t x2640 = -1;
	uint64_t t33 = 8353933LLU;

    t33 = (x2637/((x2638<<x2639)*x2640));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x2753 = INT64_MIN;
	int16_t x2754 = INT16_MAX;
	int64_t t34 = -7672LL;

    t34 = (x2753/((x2754<<x2755)*x2756));

    if (t34 != -20861377225LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x2802 = INT8_MAX;
	volatile uint16_t x2803 = 2U;
	int8_t x2804 = -1;

    t35 = (x2801/((x2802<<x2803)*x2804));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2925 = INT16_MAX;
	uint8_t x2927 = 10U;
	uint32_t x2928 = UINT32_MAX;
	static volatile uint32_t t36 = 97U;

    t36 = (x2925/((x2926<<x2927)*x2928));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x3189 = -2236;
	volatile uint32_t x3190 = 345697U;
	uint8_t x3191 = 3U;
	uint16_t x3192 = 5693U;
	volatile uint32_t t37 = 5100U;

    t37 = (x3189/((x3190<<x3191)*x3192));

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3202 = 6U;
	int64_t x3204 = 49199626906LL;
	volatile int64_t t38 = -182471347604828LL;

    t38 = (x3201/((x3202<<x3203)*x3204));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x3241 = -1;
	volatile uint64_t x3242 = 2855837121LLU;
	uint16_t x3243 = 1U;
	volatile int64_t x3244 = INT64_MAX;
	static volatile uint64_t t39 = 4098656926254394042LLU;

    t39 = (x3241/((x3242<<x3243)*x3244));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x3349 = INT32_MIN;
	volatile int8_t x3350 = 3;
	static int64_t x3352 = -35414635587LL;
	volatile int64_t t40 = -193263306917828LL;

    t40 = (x3349/((x3350<<x3351)*x3352));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x3475 = 11U;
	volatile int8_t x3476 = INT8_MIN;

    t41 = (x3473/((x3474<<x3475)*x3476));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3569 = -1;
	int8_t x3571 = 3;
	uint32_t x3572 = 18U;
	static uint32_t t42 = 97128U;

    t42 = (x3569/((x3570<<x3571)*x3572));

    if (t42 != 14913080U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3686 = 3U;
	int8_t x3688 = INT8_MIN;

    t43 = (x3685/((x3686<<x3687)*x3688));

    if (t43 != 2147485184LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3766 = UINT64_MAX;
	int16_t x3767 = 2;
	uint16_t x3768 = 705U;

    t44 = (x3765/((x3766<<x3767)*x3768));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3925 = UINT64_MAX;
	int64_t x3926 = 7843392LL;
	int8_t x3928 = -13;
	volatile uint64_t t45 = 356493384746362577LLU;

    t45 = (x3925/((x3926<<x3927)*x3928));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4093 = 18951600U;
	uint8_t x4094 = UINT8_MAX;
	static int32_t x4095 = 6;
	volatile uint64_t t46 = 4751874825876799LLU;

    t46 = (x4093/((x4094<<x4095)*x4096));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x4097 = -1;
	volatile uint8_t x4098 = 16U;
	int8_t x4099 = 0;
	static uint64_t x4100 = 3LLU;

    t47 = (x4097/((x4098<<x4099)*x4100));

    if (t47 != 384307168202282325LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x4206 = 41U;
	uint16_t x4207 = 13U;
	int64_t t48 = -1568915146LL;

    t48 = (x4205/((x4206<<x4207)*x4208));

    if (t48 != 13424826294LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x4353 = INT8_MAX;
	uint64_t x4354 = UINT64_MAX;
	uint8_t x4355 = 6U;
	int32_t x4356 = 71;
	uint64_t t49 = 1925125LLU;

    t49 = (x4353/((x4354<<x4355)*x4356));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x4405 = INT8_MAX;
	uint8_t x4406 = 28U;
	int16_t x4408 = INT16_MAX;
	static int32_t t50 = 8121437;

    t50 = (x4405/((x4406<<x4407)*x4408));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x4461 = 2U;
	uint64_t x4462 = 12687852119LLU;
	int16_t x4463 = 35;
	static int32_t x4464 = -1236003;
	uint64_t t51 = 9024635676LLU;

    t51 = (x4461/((x4462<<x4463)*x4464));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x4641 = INT8_MIN;
	uint32_t x4642 = UINT32_MAX;
	uint64_t x4643 = 6LLU;
	volatile int16_t x4644 = 1;
	static volatile uint32_t t52 = 9031810U;

    t52 = (x4641/((x4642<<x4643)*x4644));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x4745 = 0;
	int64_t x4748 = 4LL;
	int64_t t53 = 1352971LL;

    t53 = (x4745/((x4746<<x4747)*x4748));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x4761 = -3369360LL;
	uint8_t x4762 = 5U;
	uint8_t x4763 = 0U;
	static uint8_t x4764 = 8U;
	volatile int64_t t54 = 74381896508052401LL;

    t54 = (x4761/((x4762<<x4763)*x4764));

    if (t54 != -84234LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x4770 = INT16_MAX;
	static uint8_t x4771 = 5U;
	volatile int64_t t55 = 1233LL;

    t55 = (x4769/((x4770<<x4771)*x4772));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4969 = INT8_MAX;
	volatile uint8_t x4970 = UINT8_MAX;
	int16_t x4971 = 1;
	int8_t x4972 = 48;
	volatile int32_t t56 = -973781112;

    t56 = (x4969/((x4970<<x4971)*x4972));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x5021 = -6174824143LL;
	uint8_t x5022 = UINT8_MAX;
	uint16_t x5023 = 0U;
	int64_t t57 = 3LL;

    t57 = (x5021/((x5022<<x5023)*x5024));

    if (t57 != 24214996LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x5037 = -1LL;
	int16_t x5038 = 3;
	static volatile uint64_t t58 = 1466047078LLU;

    t58 = (x5037/((x5038<<x5039)*x5040));

    if (t58 != 485816673LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x5301 = -1;
	static volatile uint8_t x5302 = 6U;
	static uint8_t x5303 = 5U;
	volatile uint8_t x5304 = 15U;
	int32_t t59 = -112542137;

    t59 = (x5301/((x5302<<x5303)*x5304));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x5309 = 1U;
	uint8_t x5310 = UINT8_MAX;
	int8_t x5311 = 0;
	uint64_t x5312 = 102351LLU;
	uint64_t t60 = 48226LLU;

    t60 = (x5309/((x5310<<x5311)*x5312));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x5337 = 0;
	volatile uint8_t x5338 = 31U;
	uint16_t x5339 = 0U;

    t61 = (x5337/((x5338<<x5339)*x5340));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x5401 = INT32_MAX;
	static uint16_t x5404 = 23721U;
	uint32_t t62 = 2U;

    t62 = (x5401/((x5402<<x5403)*x5404));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x5421 = INT16_MAX;
	uint8_t x5422 = 20U;
	int8_t x5423 = 6;
	int16_t x5424 = INT16_MIN;
	volatile int32_t t63 = 13;

    t63 = (x5421/((x5422<<x5423)*x5424));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x5533 = 11U;
	uint16_t x5534 = UINT16_MAX;
	int16_t x5535 = 1;
	int64_t t64 = -15867474LL;

    t64 = (x5533/((x5534<<x5535)*x5536));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x5629 = 69U;
	int16_t x5632 = -80;

    t65 = (x5629/((x5630<<x5631)*x5632));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x5726 = UINT64_MAX;
	int16_t x5727 = 6;
	uint32_t x5728 = UINT32_MAX;
	volatile uint64_t t66 = 678LLU;

    t66 = (x5725/((x5726<<x5727)*x5728));

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x5753 = -1;
	volatile int16_t x5754 = 297;
	volatile int8_t x5755 = 12;
	volatile int16_t x5756 = -1;
	int32_t t67 = 1793271;

    t67 = (x5753/((x5754<<x5755)*x5756));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x5765 = -1;
	static uint32_t x5766 = 1972927989U;
	static int8_t x5767 = 7;
	uint32_t t68 = 17284141U;

    t68 = (x5765/((x5766<<x5767)*x5768));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x5901 = -1LL;
	uint8_t x5903 = 1U;
	uint32_t x5904 = UINT32_MAX;
	int64_t t69 = 1048193927559LL;

    t69 = (x5901/((x5902<<x5903)*x5904));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x5997 = -216470272;
	uint64_t x5998 = 9279649686166247LLU;
	volatile uint16_t x5999 = 1U;
	static uint16_t x6000 = 5722U;
	volatile uint64_t t70 = 3631LLU;

    t70 = (x5997/((x5998<<x5999)*x6000));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x6006 = 4;
	static volatile int16_t x6007 = 12;
	uint64_t x6008 = UINT64_MAX;
	volatile uint64_t t71 = 152LLU;

    t71 = (x6005/((x6006<<x6007)*x6008));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x6273 = 5U;
	static uint64_t x6274 = 67863658310669104LLU;
	static uint8_t x6275 = 0U;
	static uint32_t x6276 = UINT32_MAX;
	uint64_t t72 = 394424LLU;

    t72 = (x6273/((x6274<<x6275)*x6276));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x6305 = INT16_MIN;
	volatile int8_t x6306 = INT8_MAX;
	int16_t x6308 = -1;

    t73 = (x6305/((x6306<<x6307)*x6308));

    if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x6353 = UINT8_MAX;
	volatile uint16_t x6354 = 4163U;
	int8_t x6355 = 1;
	volatile int16_t x6356 = -1;
	static volatile int32_t t74 = -2434424;

    t74 = (x6353/((x6354<<x6355)*x6356));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x6577 = 1U;
	uint8_t x6578 = 98U;
	int8_t x6579 = 5;
	static uint64_t x6580 = UINT64_MAX;
	volatile uint64_t t75 = 96LLU;

    t75 = (x6577/((x6578<<x6579)*x6580));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x6621 = INT64_MIN;
	uint32_t x6622 = UINT32_MAX;
	uint8_t x6624 = 2U;

    t76 = (x6621/((x6622<<x6623)*x6624));

    if (t76 != -2147483656LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x6727 = 0U;
	volatile uint32_t x6728 = UINT32_MAX;
	uint32_t t77 = 537777U;

    t77 = (x6725/((x6726<<x6727)*x6728));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x6777 = UINT64_MAX;
	static uint64_t x6778 = UINT64_MAX;
	uint8_t x6779 = 56U;
	int16_t x6780 = 1;
	uint64_t t78 = 30710492896724088LLU;

    t78 = (x6777/((x6778<<x6779)*x6780));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x6786 = 1014LL;
	volatile uint64_t x6787 = 33LLU;
	volatile int8_t x6788 = INT8_MIN;

    t79 = (x6785/((x6786<<x6787)*x6788));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x6793 = INT64_MAX;
	int64_t x6794 = 4234789719761861635LL;
	static int8_t x6795 = 0;
	uint64_t x6796 = 1563157230986295773LLU;
	uint64_t t80 = 12989LLU;

    t80 = (x6793/((x6794<<x6795)*x6796));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x6886 = UINT64_MAX;
	uint8_t x6887 = 1U;
	uint32_t x6888 = 176U;
	uint64_t t81 = 143131372095LLU;

    t81 = (x6885/((x6886<<x6887)*x6888));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x6913 = 111U;
	uint64_t x6915 = 0LLU;
	volatile int8_t x6916 = -1;

    t82 = (x6913/((x6914<<x6915)*x6916));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x7133 = INT32_MIN;
	volatile int32_t x7134 = 15798;
	uint16_t x7135 = 0U;
	volatile int8_t x7136 = 4;
	volatile int32_t t83 = 70201;

    t83 = (x7133/((x7134<<x7135)*x7136));

    if (t83 != -33983) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x7281 = INT32_MAX;
	int8_t x7283 = 2;
	volatile int16_t x7284 = -138;
	static volatile int32_t t84 = -1436;

    t84 = (x7281/((x7282<<x7283)*x7284));

    if (t84 != -15256) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x7382 = 1U;
	uint16_t x7383 = 2U;
	int32_t x7384 = -2577336;
	uint64_t t85 = 708623093210711876LLU;

    t85 = (x7381/((x7382<<x7383)*x7384));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x7421 = 52U;
	int8_t x7423 = 1;
	int16_t x7424 = INT16_MIN;
	volatile int32_t t86 = 1632;

    t86 = (x7421/((x7422<<x7423)*x7424));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x7481 = 2;
	static uint32_t x7484 = UINT32_MAX;
	uint32_t t87 = 1U;

    t87 = (x7481/((x7482<<x7483)*x7484));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x7561 = 2U;
	uint32_t x7562 = UINT32_MAX;
	int8_t x7564 = -17;
	volatile uint32_t t88 = 0U;

    t88 = (x7561/((x7562<<x7563)*x7564));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x7573 = UINT64_MAX;
	volatile int8_t x7574 = 9;
	uint8_t x7575 = 1U;
	int16_t x7576 = INT16_MIN;
	uint64_t t89 = 24LLU;

    t89 = (x7573/((x7574<<x7575)*x7576));

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x7618 = UINT64_MAX;
	uint8_t x7619 = 0U;
	uint8_t x7620 = 24U;
	uint64_t t90 = 23879LLU;

    t90 = (x7617/((x7618<<x7619)*x7620));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x7817 = UINT64_MAX;
	uint16_t x7818 = 6534U;
	int16_t x7820 = -1;
	volatile uint64_t t91 = 24LLU;

    t91 = (x7817/((x7818<<x7819)*x7820));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x7906 = 781LL;
	uint8_t x7907 = 1U;
	static uint64_t x7908 = 20837845892LLU;

    t92 = (x7905/((x7906<<x7907)*x7908));

    if (t92 != 566742LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x7977 = INT64_MIN;
	uint32_t x7978 = 15072U;
	volatile uint32_t x7979 = 0U;
	int16_t x7980 = -8571;
	volatile int64_t t93 = 14712LL;

    t93 = (x7977/((x7978<<x7979)*x7980));

    if (t93 != -2214077689LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x8021 = INT8_MIN;
	uint16_t x8022 = 2209U;
	static int16_t x8023 = 0;
	uint16_t x8024 = 236U;
	volatile int32_t t94 = 119584566;

    t94 = (x8021/((x8022<<x8023)*x8024));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x8045 = 15;
	static uint64_t x8046 = 284604549859123051LLU;
	static volatile uint64_t t95 = 40543789807595360LLU;

    t95 = (x8045/((x8046<<x8047)*x8048));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x8121 = 278330106286736758LL;
	uint16_t x8123 = 7U;
	int16_t x8124 = -1578;
	int64_t t96 = -25566276103878652LL;

    t96 = (x8121/((x8122<<x8123)*x8124));

    if (t96 != -10850243781LL) { NG(); } else { ; }
	
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


    return 0;
}

