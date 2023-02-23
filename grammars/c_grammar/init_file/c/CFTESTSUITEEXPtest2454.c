
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

int32_t x6 = -1;
static int8_t x24 = -1;
volatile int64_t x25 = INT64_MIN;
int64_t x49 = 34768564659LL;
volatile int32_t x50 = -1;
int8_t x51 = INT8_MIN;
volatile int16_t x181 = 1;
uint64_t x183 = 538848699489826LLU;
uint8_t x475 = 5U;
volatile int8_t x509 = INT8_MIN;
int64_t x512 = -1LL;
static volatile int32_t t7 = 386;
uint64_t x547 = UINT64_MAX;
int32_t x550 = -1;
uint16_t x814 = UINT16_MAX;
uint8_t x1045 = UINT8_MAX;
int16_t x1089 = -1;
uint64_t x1110 = 5598901LLU;
static uint8_t x1279 = 0U;
int32_t t16 = 27186;
static volatile int8_t x1381 = INT8_MIN;
int64_t x1461 = INT64_MAX;
static uint64_t x1485 = 22156LLU;
int64_t x1487 = 537333765560LL;
int16_t x1488 = -1;
static volatile uint64_t t21 = 6456217289411077287LLU;
volatile int32_t x1615 = -3183897;
static int32_t x1730 = INT32_MIN;
static int8_t x1866 = -1;
uint16_t x1867 = 34U;
uint64_t x2085 = 8022307266409624240LLU;
uint64_t x2088 = UINT64_MAX;
volatile int16_t x2534 = -1;
static int32_t t32 = -3851;
int64_t x2542 = -1LL;
int16_t x2543 = INT16_MIN;
int32_t x2717 = -1;
int8_t x2718 = -1;
int32_t x2865 = INT32_MAX;
int8_t x2868 = -1;
int64_t t40 = 1LL;
static uint64_t x2929 = UINT64_MAX;
static uint16_t x2931 = 42U;
volatile int64_t x2972 = INT64_MAX;
volatile int64_t x2973 = -1LL;
int64_t x3033 = -267414728362713485LL;
static int64_t x3363 = -1LL;
static uint64_t x3498 = UINT64_MAX;
static int32_t x3710 = -47521;
int64_t x3711 = -1LL;
static int64_t x3712 = -1LL;
int32_t x3928 = -1;
volatile uint64_t t55 = 12102419LLU;
int8_t x4027 = 26;
volatile int8_t x4162 = INT8_MIN;
int16_t x4205 = INT16_MIN;
static int16_t x4264 = INT16_MIN;
int8_t x4340 = -1;
int8_t x4406 = INT8_MIN;
int32_t x4604 = -1;
volatile int16_t x4721 = 987;
int32_t x4724 = -1;
int16_t x4833 = INT16_MIN;
uint64_t x4971 = UINT64_MAX;
static int64_t x5096 = -1LL;
volatile int32_t x5112 = -1;
static int32_t t78 = 14;
static uint8_t x5326 = UINT8_MAX;
static int8_t x5357 = INT8_MIN;
uint8_t x5358 = 2U;
static volatile int32_t t83 = -1012;
int64_t x5645 = -1457674818LL;
static int32_t x5747 = -9858;
int8_t x5775 = -3;
int64_t x5776 = -1LL;
int16_t x5792 = -1;
static int64_t x5816 = -1LL;
int16_t x5833 = INT16_MAX;
int16_t x5836 = -1;
uint8_t x6073 = UINT8_MAX;
static int64_t x6074 = INT64_MIN;
static uint64_t x6120 = UINT64_MAX;
uint64_t t94 = 805102906863920LLU;
volatile int16_t x6164 = -1;
volatile int32_t t96 = 1;
volatile int8_t x6238 = -1;
volatile int32_t t97 = -35262095;
static int8_t x6425 = INT8_MAX;
int16_t x6430 = INT16_MIN;
volatile int8_t x6745 = INT8_MAX;
int8_t x6746 = INT8_MIN;
uint32_t x6812 = UINT32_MAX;
int32_t t105 = -34163487;
uint64_t x6840 = UINT64_MAX;
volatile int32_t t106 = INT32_MAX;
int32_t x6950 = INT32_MAX;
volatile int8_t x7042 = -1;
static int16_t x7106 = -1;
static volatile int32_t x7213 = -1;
volatile int64_t x7561 = 246619400037LL;
int32_t x7677 = INT32_MIN;
uint64_t x7768 = UINT64_MAX;
int16_t x7933 = INT16_MAX;
int32_t x8090 = -15650;
volatile int16_t x8092 = -1;
int32_t x8107 = -1;
static int64_t x8119 = INT64_MIN;
int32_t x8187 = INT32_MIN;
int16_t x8361 = 173;
volatile uint32_t x8435 = UINT32_MAX;
volatile int32_t x8436 = -1;
static uint64_t x8588 = UINT64_MAX;
int8_t x8597 = INT8_MIN;
int16_t x8599 = INT16_MIN;
int16_t x8788 = -1;
static int64_t x8792 = -1LL;
volatile int32_t t133 = 63;
static int8_t x8962 = -1;
int64_t t134 = -85923LL;
volatile int64_t t135 = -448255223LL;
static int16_t x9090 = INT16_MAX;
int32_t x9228 = -1;
int8_t x9256 = -1;
uint16_t x9489 = UINT16_MAX;
int8_t x9490 = -1;
uint32_t x9512 = UINT32_MAX;
volatile int8_t x9546 = INT8_MIN;
int8_t x9547 = INT8_MIN;
int8_t x9548 = INT8_MIN;
uint64_t x9551 = UINT64_MAX;
static uint32_t x9659 = UINT32_MAX;
uint8_t x9734 = 0U;
int8_t x9735 = -1;
int32_t x9805 = -1;
int32_t x9806 = -93;
int16_t x9906 = INT16_MIN;
int64_t t152 = INT64_MIN;
int8_t x10199 = INT8_MIN;
int32_t x10212 = -1;
static int8_t x10275 = INT8_MAX;
int16_t x10294 = -1;
uint32_t x10662 = UINT32_MAX;
int32_t t164 = -7;
uint64_t x10778 = UINT64_MAX;
static uint32_t x10779 = 1563403U;
volatile int8_t x10950 = INT8_MIN;
int32_t t168 = -33159518;
uint16_t x10989 = UINT16_MAX;
int8_t x11074 = INT8_MIN;
volatile int64_t t171 = -219LL;
int32_t x11085 = -1;
volatile int32_t t173 = INT32_MIN;
int32_t t175 = 1343;
int16_t x11193 = -1;
volatile int32_t t177 = -4;
volatile uint64_t x11316 = UINT64_MAX;
int32_t x11385 = INT32_MAX;
static int64_t x11386 = -1LL;
int8_t x11525 = INT8_MIN;
int8_t x11601 = -1;
static int32_t t183 = 992;
int8_t x11614 = 1;
static int32_t x11677 = INT32_MIN;
uint64_t x11825 = UINT64_MAX;
int16_t x11827 = INT16_MIN;
int16_t x11942 = INT16_MIN;
uint16_t x12089 = 396U;
int8_t x12130 = INT8_MAX;
uint16_t x12132 = UINT16_MAX;
int32_t x12174 = -8333991;
int32_t x12228 = -1;
uint32_t x12400 = UINT32_MAX;
static volatile int8_t x12538 = -1;
uint16_t x12681 = 12769U;
int64_t x12683 = -2391LL;
volatile int8_t x12684 = -1;


void f0(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int64_t x7 = INT64_MIN;
	static uint64_t x8 = UINT64_MAX;
	volatile int32_t t0 = -37157;

    t0 = (x5/((x6|x7)==x8));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x21 = INT16_MIN;
	volatile int16_t x22 = INT16_MIN;
	static int64_t x23 = INT64_MAX;
	static int32_t t1 = 3682023;

    t1 = (x21/((x22|x23)==x24));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MAX;
	int64_t x28 = -1LL;
	int64_t t2 = INT64_MIN;

    t2 = (x25/((x26|x27)==x28));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x52 = -1;
	int64_t t3 = -443429LL;

    t3 = (x49/((x50|x51)==x52));

    if (t3 != 34768564659LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x182 = INT64_MAX;
	int64_t x184 = INT64_MAX;
	int32_t t4 = -13929029;

    t4 = (x181/((x182|x183)==x184));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x473 = UINT64_MAX;
	int64_t x474 = INT64_MAX;
	volatile int64_t x476 = INT64_MAX;
	static volatile uint64_t t5 = UINT64_MAX;

    t5 = (x473/((x474|x475)==x476));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x481 = 44402101U;
	int16_t x482 = -312;
	uint64_t x483 = UINT64_MAX;
	static int8_t x484 = -1;
	uint32_t t6 = 425224U;

    t6 = (x481/((x482|x483)==x484));

    if (t6 != 44402101U) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x510 = 63416036U;
	uint64_t x511 = UINT64_MAX;

    t7 = (x509/((x510|x511)==x512));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x545 = -5;
	int32_t x546 = -7295;
	int32_t x548 = -1;
	int32_t t8 = 34911375;

    t8 = (x545/((x546|x547)==x548));

    if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x549 = -748LL;
	static int32_t x551 = INT32_MIN;
	uint32_t x552 = UINT32_MAX;
	volatile int64_t t9 = -2699173480LL;

    t9 = (x549/((x550|x551)==x552));

    if (t9 != -748LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x801 = UINT16_MAX;
	volatile int16_t x802 = INT16_MIN;
	int64_t x803 = -1LL;
	static int8_t x804 = -1;
	volatile int32_t t10 = -9581262;

    t10 = (x801/((x802|x803)==x804));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x813 = INT32_MIN;
	volatile int8_t x815 = -20;
	int64_t x816 = -1LL;
	int32_t t11 = INT32_MIN;

    t11 = (x813/((x814|x815)==x816));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x857 = -1;
	int32_t x858 = INT32_MAX;
	volatile int8_t x859 = INT8_MIN;
	int64_t x860 = -1LL;
	volatile int32_t t12 = 9916755;

    t12 = (x857/((x858|x859)==x860));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x1046 = -934;
	int32_t x1047 = -1;
	static uint64_t x1048 = UINT64_MAX;
	volatile int32_t t13 = -97721070;

    t13 = (x1045/((x1046|x1047)==x1048));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1090 = -10905681LL;
	int64_t x1091 = INT64_MAX;
	static volatile uint64_t x1092 = UINT64_MAX;
	int32_t t14 = 211775;

    t14 = (x1089/((x1090|x1091)==x1092));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1109 = 0U;
	static int16_t x1111 = -1;
	static int16_t x1112 = -1;
	volatile int32_t t15 = 455;

    t15 = (x1109/((x1110|x1111)==x1112));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x1277 = -16196430;
	int8_t x1278 = -1;
	uint32_t x1280 = UINT32_MAX;

    t16 = (x1277/((x1278|x1279)==x1280));

    if (t16 != -16196430) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x1382 = -1;
	int32_t x1383 = INT32_MIN;
	volatile int64_t x1384 = -1LL;
	int32_t t17 = -1932440;

    t17 = (x1381/((x1382|x1383)==x1384));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1385 = 4590117905757813684LLU;
	int8_t x1386 = -1;
	uint8_t x1387 = 29U;
	uint32_t x1388 = UINT32_MAX;
	volatile uint64_t t18 = 243937475005LLU;

    t18 = (x1385/((x1386|x1387)==x1388));

    if (t18 != 4590117905757813684LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1453 = 256489982899996LLU;
	volatile int8_t x1454 = -1;
	uint8_t x1455 = 1U;
	uint32_t x1456 = UINT32_MAX;
	uint64_t t19 = 346472295871LLU;

    t19 = (x1453/((x1454|x1455)==x1456));

    if (t19 != 256489982899996LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1462 = -1;
	static int64_t x1463 = INT64_MIN;
	int32_t x1464 = -1;
	volatile int64_t t20 = INT64_MAX;

    t20 = (x1461/((x1462|x1463)==x1464));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x1486 = -1LL;

    t21 = (x1485/((x1486|x1487)==x1488));

    if (t21 != 22156LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1529 = 13;
	uint64_t x1530 = UINT64_MAX;
	volatile int8_t x1531 = -1;
	static int32_t x1532 = -1;
	int32_t t22 = -3989791;

    t22 = (x1529/((x1530|x1531)==x1532));

    if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1613 = 3240477264646034681LL;
	static uint64_t x1614 = UINT64_MAX;
	uint64_t x1616 = UINT64_MAX;
	int64_t t23 = -310860373901830LL;

    t23 = (x1613/((x1614|x1615)==x1616));

    if (t23 != 3240477264646034681LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x1729 = INT16_MIN;
	int32_t x1731 = INT32_MIN;
	int32_t x1732 = INT32_MIN;
	int32_t t24 = 980244;

    t24 = (x1729/((x1730|x1731)==x1732));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1865 = INT32_MIN;
	static int8_t x1868 = -1;
	volatile int32_t t25 = INT32_MIN;

    t25 = (x1865/((x1866|x1867)==x1868));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2057 = -21362782874970337LL;
	uint16_t x2058 = 0U;
	static uint64_t x2059 = UINT64_MAX;
	int16_t x2060 = -1;
	int64_t t26 = 183549887LL;

    t26 = (x2057/((x2058|x2059)==x2060));

    if (t26 != -21362782874970337LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x2086 = INT32_MIN;
	int32_t x2087 = INT32_MAX;
	uint64_t t27 = 1132348011652LLU;

    t27 = (x2085/((x2086|x2087)==x2088));

    if (t27 != 8022307266409624240LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x2161 = 8462;
	int64_t x2162 = INT64_MAX;
	volatile int32_t x2163 = INT32_MIN;
	int64_t x2164 = -1LL;
	volatile int32_t t28 = 61;

    t28 = (x2161/((x2162|x2163)==x2164));

    if (t28 != 8462) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x2209 = -1LL;
	int64_t x2210 = INT64_MAX;
	int8_t x2211 = INT8_MIN;
	int8_t x2212 = -1;
	int64_t t29 = -1143897366566544216LL;

    t29 = (x2209/((x2210|x2211)==x2212));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x2369 = -1LL;
	volatile int8_t x2370 = -1;
	int16_t x2371 = 1546;
	int64_t x2372 = -1LL;
	int64_t t30 = -785LL;

    t30 = (x2369/((x2370|x2371)==x2372));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2485 = -1;
	int64_t x2486 = -2271088753LL;
	int16_t x2487 = -1;
	uint64_t x2488 = UINT64_MAX;
	int32_t t31 = -115848;

    t31 = (x2485/((x2486|x2487)==x2488));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x2533 = 1U;
	volatile int32_t x2535 = INT32_MIN;
	volatile int8_t x2536 = -1;

    t32 = (x2533/((x2534|x2535)==x2536));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x2541 = -1;
	volatile int64_t x2544 = -1LL;
	int32_t t33 = -1963;

    t33 = (x2541/((x2542|x2543)==x2544));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x2633 = 578LLU;
	int32_t x2634 = -1;
	int64_t x2635 = INT64_MIN;
	uint64_t x2636 = UINT64_MAX;
	uint64_t t34 = 856770331834LLU;

    t34 = (x2633/((x2634|x2635)==x2636));

    if (t34 != 578LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x2645 = UINT16_MAX;
	int64_t x2646 = 1884662LL;
	static volatile int16_t x2647 = -1;
	int16_t x2648 = -1;
	static int32_t t35 = 2681;

    t35 = (x2645/((x2646|x2647)==x2648));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2719 = INT8_MIN;
	volatile int8_t x2720 = -1;
	int32_t t36 = 2639716;

    t36 = (x2717/((x2718|x2719)==x2720));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2741 = INT64_MAX;
	int64_t x2742 = -117549444657058LL;
	static int32_t x2743 = -1;
	static int64_t x2744 = -1LL;
	volatile int64_t t37 = INT64_MAX;

    t37 = (x2741/((x2742|x2743)==x2744));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2866 = INT32_MIN;
	static int32_t x2867 = -1;
	int32_t t38 = INT32_MAX;

    t38 = (x2865/((x2866|x2867)==x2868));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2909 = INT32_MAX;
	int64_t x2910 = INT64_MAX;
	volatile int32_t x2911 = INT32_MIN;
	static int64_t x2912 = -1LL;
	volatile int32_t t39 = INT32_MAX;

    t39 = (x2909/((x2910|x2911)==x2912));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2917 = -6773LL;
	int8_t x2918 = -1;
	uint32_t x2919 = UINT32_MAX;
	static int8_t x2920 = -1;

    t40 = (x2917/((x2918|x2919)==x2920));

    if (t40 != -6773LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x2930 = UINT8_MAX;
	uint8_t x2932 = UINT8_MAX;
	uint64_t t41 = UINT64_MAX;

    t41 = (x2929/((x2930|x2931)==x2932));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2969 = -3;
	int64_t x2970 = INT64_MAX;
	int8_t x2971 = INT8_MAX;
	int32_t t42 = -63915816;

    t42 = (x2969/((x2970|x2971)==x2972));

    if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2974 = -12LL;
	int8_t x2975 = -1;
	static int64_t x2976 = -1LL;
	static volatile int64_t t43 = 1333343966LL;

    t43 = (x2973/((x2974|x2975)==x2976));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3025 = 83620U;
	static uint8_t x3026 = 0U;
	int16_t x3027 = -1;
	int32_t x3028 = -1;
	uint32_t t44 = 327U;

    t44 = (x3025/((x3026|x3027)==x3028));

    if (t44 != 83620U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x3034 = 1U;
	int64_t x3035 = -1LL;
	int64_t x3036 = -1LL;
	volatile int64_t t45 = 124258321686518879LL;

    t45 = (x3033/((x3034|x3035)==x3036));

    if (t45 != -267414728362713485LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3121 = INT64_MAX;
	int16_t x3122 = -1;
	int8_t x3123 = INT8_MIN;
	uint32_t x3124 = UINT32_MAX;
	volatile int64_t t46 = INT64_MAX;

    t46 = (x3121/((x3122|x3123)==x3124));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x3345 = -1LL;
	int32_t x3346 = -1;
	volatile uint8_t x3347 = UINT8_MAX;
	static uint32_t x3348 = UINT32_MAX;
	static int64_t t47 = -84524LL;

    t47 = (x3345/((x3346|x3347)==x3348));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x3361 = INT64_MIN;
	int32_t x3362 = -1;
	int8_t x3364 = -1;
	volatile int64_t t48 = INT64_MIN;

    t48 = (x3361/((x3362|x3363)==x3364));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3453 = INT64_MIN;
	int16_t x3454 = -1;
	static volatile int32_t x3455 = INT32_MAX;
	volatile int8_t x3456 = -1;
	static volatile int64_t t49 = INT64_MIN;

    t49 = (x3453/((x3454|x3455)==x3456));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x3457 = 9U;
	int8_t x3458 = -1;
	volatile int64_t x3459 = 392766684LL;
	uint64_t x3460 = UINT64_MAX;
	int32_t t50 = -183220658;

    t50 = (x3457/((x3458|x3459)==x3460));

    if (t50 != 9) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3497 = 59U;
	int8_t x3499 = INT8_MAX;
	int32_t x3500 = -1;
	int32_t t51 = -35926;

    t51 = (x3497/((x3498|x3499)==x3500));

    if (t51 != 59) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x3705 = -1;
	int64_t x3706 = INT64_MAX;
	static int32_t x3707 = INT32_MIN;
	int64_t x3708 = -1LL;
	int32_t t52 = -775;

    t52 = (x3705/((x3706|x3707)==x3708));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x3709 = -2LL;
	static volatile int64_t t53 = -3228LL;

    t53 = (x3709/((x3710|x3711)==x3712));

    if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x3913 = -437;
	int8_t x3914 = -1;
	volatile int8_t x3915 = -1;
	int16_t x3916 = -1;
	int32_t t54 = -2;

    t54 = (x3913/((x3914|x3915)==x3916));

    if (t54 != -437) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x3925 = 3832LLU;
	uint32_t x3926 = UINT32_MAX;
	int32_t x3927 = INT32_MIN;

    t55 = (x3925/((x3926|x3927)==x3928));

    if (t55 != 3832LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3981 = -1;
	static int64_t x3982 = -1LL;
	int64_t x3983 = INT64_MIN;
	int8_t x3984 = -1;
	int32_t t56 = 583651;

    t56 = (x3981/((x3982|x3983)==x3984));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x3989 = INT64_MAX;
	int32_t x3990 = -1;
	static int32_t x3991 = -1;
	uint32_t x3992 = UINT32_MAX;
	int64_t t57 = INT64_MAX;

    t57 = (x3989/((x3990|x3991)==x3992));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x4025 = INT8_MIN;
	int32_t x4026 = -1;
	int8_t x4028 = -1;
	volatile int32_t t58 = 259568;

    t58 = (x4025/((x4026|x4027)==x4028));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4041 = 2;
	int8_t x4042 = -1;
	volatile uint16_t x4043 = UINT16_MAX;
	static int8_t x4044 = -1;
	volatile int32_t t59 = 1;

    t59 = (x4041/((x4042|x4043)==x4044));

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x4053 = -1;
	volatile int8_t x4054 = INT8_MIN;
	volatile int16_t x4055 = -1;
	uint32_t x4056 = UINT32_MAX;
	int32_t t60 = -50;

    t60 = (x4053/((x4054|x4055)==x4056));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x4161 = INT16_MAX;
	int16_t x4163 = -1;
	int16_t x4164 = -1;
	int32_t t61 = 0;

    t61 = (x4161/((x4162|x4163)==x4164));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x4206 = -1;
	int32_t x4207 = -1;
	volatile int8_t x4208 = -1;
	volatile int32_t t62 = 2;

    t62 = (x4205/((x4206|x4207)==x4208));

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x4261 = INT16_MIN;
	int64_t x4262 = INT64_MIN;
	volatile int16_t x4263 = INT16_MIN;
	int32_t t63 = 1138051;

    t63 = (x4261/((x4262|x4263)==x4264));

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x4337 = -6;
	int8_t x4338 = -1;
	int8_t x4339 = INT8_MIN;
	volatile int32_t t64 = 88832;

    t64 = (x4337/((x4338|x4339)==x4340));

    if (t64 != -6) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x4405 = 169U;
	uint16_t x4407 = UINT16_MAX;
	int64_t x4408 = -1LL;
	volatile int32_t t65 = -15;

    t65 = (x4405/((x4406|x4407)==x4408));

    if (t65 != 169) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x4601 = 959925893LLU;
	uint16_t x4602 = UINT16_MAX;
	int32_t x4603 = -1;
	volatile uint64_t t66 = 459729171565LLU;

    t66 = (x4601/((x4602|x4603)==x4604));

    if (t66 != 959925893LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x4613 = INT32_MIN;
	volatile int64_t x4614 = INT64_MAX;
	volatile int16_t x4615 = -9;
	int8_t x4616 = -1;
	volatile int32_t t67 = INT32_MIN;

    t67 = (x4613/((x4614|x4615)==x4616));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x4713 = UINT16_MAX;
	static int64_t x4714 = INT64_MAX;
	volatile int16_t x4715 = INT16_MIN;
	int32_t x4716 = -1;
	volatile int32_t t68 = 57818;

    t68 = (x4713/((x4714|x4715)==x4716));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x4722 = UINT8_MAX;
	static int8_t x4723 = -13;
	int32_t t69 = -63919;

    t69 = (x4721/((x4722|x4723)==x4724));

    if (t69 != 987) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x4725 = 80;
	uint8_t x4726 = 0U;
	volatile int16_t x4727 = -1;
	int32_t x4728 = -1;
	static volatile int32_t t70 = 0;

    t70 = (x4725/((x4726|x4727)==x4728));

    if (t70 != 80) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x4834 = INT16_MIN;
	volatile int8_t x4835 = -1;
	int8_t x4836 = -1;
	volatile int32_t t71 = 13587502;

    t71 = (x4833/((x4834|x4835)==x4836));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x4885 = -1;
	uint32_t x4886 = 19488U;
	uint32_t x4887 = UINT32_MAX;
	uint32_t x4888 = UINT32_MAX;
	volatile int32_t t72 = -25;

    t72 = (x4885/((x4886|x4887)==x4888));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x4941 = 3U;
	int8_t x4942 = INT8_MAX;
	uint16_t x4943 = 59U;
	int8_t x4944 = INT8_MAX;
	int32_t t73 = 27;

    t73 = (x4941/((x4942|x4943)==x4944));

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x4969 = INT32_MIN;
	int8_t x4970 = INT8_MAX;
	int64_t x4972 = -1LL;
	int32_t t74 = INT32_MIN;

    t74 = (x4969/((x4970|x4971)==x4972));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5017 = INT64_MAX;
	int8_t x5018 = 0;
	int8_t x5019 = -1;
	int8_t x5020 = -1;
	int64_t t75 = INT64_MAX;

    t75 = (x5017/((x5018|x5019)==x5020));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x5093 = INT32_MIN;
	int8_t x5094 = -1;
	int16_t x5095 = INT16_MIN;
	volatile int32_t t76 = INT32_MIN;

    t76 = (x5093/((x5094|x5095)==x5096));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x5109 = INT32_MIN;
	uint32_t x5110 = UINT32_MAX;
	int16_t x5111 = INT16_MIN;
	static volatile int32_t t77 = INT32_MIN;

    t77 = (x5109/((x5110|x5111)==x5112));

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x5181 = 0U;
	uint32_t x5182 = UINT32_MAX;
	volatile uint32_t x5183 = 501223206U;
	static int32_t x5184 = -1;

    t78 = (x5181/((x5182|x5183)==x5184));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5325 = 1644394209337LLU;
	int8_t x5327 = INT8_MIN;
	uint64_t x5328 = UINT64_MAX;
	uint64_t t79 = 175130LLU;

    t79 = (x5325/((x5326|x5327)==x5328));

    if (t79 != 1644394209337LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x5359 = UINT8_MAX;
	uint8_t x5360 = UINT8_MAX;
	volatile int32_t t80 = 624469318;

    t80 = (x5357/((x5358|x5359)==x5360));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x5369 = INT64_MIN;
	volatile int16_t x5370 = -1;
	uint16_t x5371 = 76U;
	int16_t x5372 = -1;
	volatile int64_t t81 = INT64_MIN;

    t81 = (x5369/((x5370|x5371)==x5372));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5389 = UINT32_MAX;
	static int16_t x5390 = 6160;
	static int64_t x5391 = -1LL;
	volatile int64_t x5392 = -1LL;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = (x5389/((x5390|x5391)==x5392));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x5413 = -1;
	int16_t x5414 = -1;
	int8_t x5415 = INT8_MIN;
	int8_t x5416 = -1;

    t83 = (x5413/((x5414|x5415)==x5416));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x5646 = -1;
	static int8_t x5647 = INT8_MIN;
	static int8_t x5648 = -1;
	int64_t t84 = -50421440452LL;

    t84 = (x5645/((x5646|x5647)==x5648));

    if (t84 != -1457674818LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x5745 = 1U;
	int16_t x5746 = -1;
	uint64_t x5748 = UINT64_MAX;
	volatile int32_t t85 = -128;

    t85 = (x5745/((x5746|x5747)==x5748));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x5773 = UINT8_MAX;
	uint8_t x5774 = 11U;
	volatile int32_t t86 = 1;

    t86 = (x5773/((x5774|x5775)==x5776));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x5789 = INT16_MIN;
	int16_t x5790 = 0;
	volatile uint64_t x5791 = UINT64_MAX;
	volatile int32_t t87 = -60596288;

    t87 = (x5789/((x5790|x5791)==x5792));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x5813 = 197503804884251LLU;
	uint32_t x5814 = 53U;
	uint64_t x5815 = UINT64_MAX;
	static uint64_t t88 = 1804LLU;

    t88 = (x5813/((x5814|x5815)==x5816));

    if (t88 != 197503804884251LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x5834 = 349U;
	int8_t x5835 = -1;
	int32_t t89 = 10865;

    t89 = (x5833/((x5834|x5835)==x5836));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x5913 = 31U;
	int32_t x5914 = INT32_MAX;
	static int32_t x5915 = INT32_MIN;
	int32_t x5916 = -1;
	int32_t t90 = -13394687;

    t90 = (x5913/((x5914|x5915)==x5916));

    if (t90 != 31) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x5997 = INT8_MIN;
	int32_t x5998 = -1;
	int32_t x5999 = -8612;
	static int8_t x6000 = -1;
	volatile int32_t t91 = 12;

    t91 = (x5997/((x5998|x5999)==x6000));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x6061 = INT8_MAX;
	uint32_t x6062 = UINT32_MAX;
	volatile int16_t x6063 = INT16_MIN;
	static uint32_t x6064 = UINT32_MAX;
	volatile int32_t t92 = -4;

    t92 = (x6061/((x6062|x6063)==x6064));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x6075 = -1LL;
	volatile int64_t x6076 = -1LL;
	int32_t t93 = 2745434;

    t93 = (x6073/((x6074|x6075)==x6076));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x6117 = 32909446LLU;
	uint64_t x6118 = UINT64_MAX;
	volatile int32_t x6119 = -30225636;

    t94 = (x6117/((x6118|x6119)==x6120));

    if (t94 != 32909446LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x6141 = -1;
	static uint64_t x6142 = UINT64_MAX;
	uint32_t x6143 = 2797614U;
	uint64_t x6144 = UINT64_MAX;
	int32_t t95 = -478;

    t95 = (x6141/((x6142|x6143)==x6144));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x6161 = 50001163;
	static volatile int8_t x6162 = -4;
	uint16_t x6163 = UINT16_MAX;

    t96 = (x6161/((x6162|x6163)==x6164));

    if (t96 != 50001163) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x6237 = -1;
	int64_t x6239 = INT64_MIN;
	int32_t x6240 = -1;

    t97 = (x6237/((x6238|x6239)==x6240));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x6357 = -1;
	uint32_t x6358 = UINT32_MAX;
	volatile int64_t x6359 = -1LL;
	int16_t x6360 = -1;
	static int32_t t98 = 0;

    t98 = (x6357/((x6358|x6359)==x6360));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x6426 = INT64_MAX;
	int64_t x6427 = -73981LL;
	int32_t x6428 = -1;
	volatile int32_t t99 = 7321072;

    t99 = (x6425/((x6426|x6427)==x6428));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x6429 = UINT16_MAX;
	static int64_t x6431 = -1LL;
	int8_t x6432 = -1;
	int32_t t100 = -25068;

    t100 = (x6429/((x6430|x6431)==x6432));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x6461 = 39;
	static int8_t x6462 = -1;
	volatile uint32_t x6463 = 6U;
	static int32_t x6464 = -1;
	volatile int32_t t101 = -1024845113;

    t101 = (x6461/((x6462|x6463)==x6464));

    if (t101 != 39) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x6489 = 404494966U;
	static int8_t x6490 = -1;
	uint64_t x6491 = 11493946900LLU;
	int64_t x6492 = -1LL;
	volatile uint32_t t102 = 11681288U;

    t102 = (x6489/((x6490|x6491)==x6492));

    if (t102 != 404494966U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x6569 = INT16_MIN;
	uint8_t x6570 = UINT8_MAX;
	volatile int8_t x6571 = INT8_MIN;
	uint32_t x6572 = UINT32_MAX;
	static volatile int32_t t103 = 2401100;

    t103 = (x6569/((x6570|x6571)==x6572));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x6747 = UINT16_MAX;
	static int8_t x6748 = -1;
	volatile int32_t t104 = 2955167;

    t104 = (x6745/((x6746|x6747)==x6748));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x6809 = INT16_MAX;
	static volatile int32_t x6810 = INT32_MAX;
	int32_t x6811 = INT32_MIN;

    t105 = (x6809/((x6810|x6811)==x6812));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x6837 = INT32_MAX;
	int8_t x6838 = INT8_MIN;
	uint64_t x6839 = UINT64_MAX;

    t106 = (x6837/((x6838|x6839)==x6840));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x6881 = UINT8_MAX;
	static volatile int32_t x6882 = INT32_MIN;
	int32_t x6883 = INT32_MIN;
	int32_t x6884 = INT32_MIN;
	int32_t t107 = 1149002;

    t107 = (x6881/((x6882|x6883)==x6884));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x6949 = 2407;
	int32_t x6951 = -1;
	int32_t x6952 = -1;
	static int32_t t108 = -1286;

    t108 = (x6949/((x6950|x6951)==x6952));

    if (t108 != 2407) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x7041 = 38520366LL;
	uint32_t x7043 = UINT32_MAX;
	int16_t x7044 = -1;
	int64_t t109 = -1515995528424LL;

    t109 = (x7041/((x7042|x7043)==x7044));

    if (t109 != 38520366LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x7105 = 5465U;
	int32_t x7107 = INT32_MIN;
	uint64_t x7108 = UINT64_MAX;
	int32_t t110 = 4;

    t110 = (x7105/((x7106|x7107)==x7108));

    if (t110 != 5465) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x7214 = 0U;
	int32_t x7215 = -1;
	int16_t x7216 = -1;
	int32_t t111 = 13;

    t111 = (x7213/((x7214|x7215)==x7216));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x7301 = INT16_MIN;
	uint16_t x7302 = UINT16_MAX;
	static volatile int8_t x7303 = -3;
	int8_t x7304 = -1;
	volatile int32_t t112 = -31301;

    t112 = (x7301/((x7302|x7303)==x7304));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x7441 = INT64_MIN;
	volatile int32_t x7442 = -1;
	int32_t x7443 = -1;
	volatile int64_t x7444 = -1LL;
	volatile int64_t t113 = INT64_MIN;

    t113 = (x7441/((x7442|x7443)==x7444));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x7562 = -175;
	uint32_t x7563 = 111452159U;
	int16_t x7564 = -1;
	int64_t t114 = 152LL;

    t114 = (x7561/((x7562|x7563)==x7564));

    if (t114 != 246619400037LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x7678 = INT32_MIN;
	static int64_t x7679 = INT64_MIN;
	static int32_t x7680 = INT32_MIN;
	int32_t t115 = INT32_MIN;

    t115 = (x7677/((x7678|x7679)==x7680));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x7765 = 0;
	int8_t x7766 = INT8_MIN;
	static volatile uint8_t x7767 = UINT8_MAX;
	int32_t t116 = -57441063;

    t116 = (x7765/((x7766|x7767)==x7768));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x7934 = -26;
	int64_t x7935 = -1LL;
	int16_t x7936 = -1;
	int32_t t117 = -96939722;

    t117 = (x7933/((x7934|x7935)==x7936));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x8077 = INT64_MAX;
	int16_t x8078 = -579;
	int16_t x8079 = -1;
	static int16_t x8080 = -1;
	int64_t t118 = INT64_MAX;

    t118 = (x8077/((x8078|x8079)==x8080));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x8089 = INT8_MIN;
	volatile int32_t x8091 = INT32_MAX;
	volatile int32_t t119 = 2861557;

    t119 = (x8089/((x8090|x8091)==x8092));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x8105 = UINT32_MAX;
	static int32_t x8106 = -1;
	int64_t x8108 = -1LL;
	static uint32_t t120 = UINT32_MAX;

    t120 = (x8105/((x8106|x8107)==x8108));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x8117 = INT8_MIN;
	int64_t x8118 = INT64_MIN;
	int64_t x8120 = INT64_MIN;
	volatile int32_t t121 = 1102605;

    t121 = (x8117/((x8118|x8119)==x8120));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x8149 = INT16_MAX;
	int8_t x8150 = -1;
	static int64_t x8151 = INT64_MIN;
	int8_t x8152 = -1;
	int32_t t122 = 1;

    t122 = (x8149/((x8150|x8151)==x8152));

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x8185 = -40;
	int32_t x8186 = INT32_MAX;
	int64_t x8188 = -1LL;
	volatile int32_t t123 = -507935;

    t123 = (x8185/((x8186|x8187)==x8188));

    if (t123 != -40) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x8293 = INT64_MIN;
	int64_t x8294 = INT64_MIN;
	int16_t x8295 = INT16_MIN;
	int16_t x8296 = INT16_MIN;
	int64_t t124 = INT64_MIN;

    t124 = (x8293/((x8294|x8295)==x8296));

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x8297 = INT8_MIN;
	int32_t x8298 = -1;
	static volatile uint64_t x8299 = UINT64_MAX;
	int16_t x8300 = -1;
	int32_t t125 = -1;

    t125 = (x8297/((x8298|x8299)==x8300));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x8362 = -2081;
	static uint64_t x8363 = UINT64_MAX;
	int32_t x8364 = -1;
	int32_t t126 = 3714;

    t126 = (x8361/((x8362|x8363)==x8364));

    if (t126 != 173) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x8433 = INT32_MAX;
	int32_t x8434 = 4554447;
	int32_t t127 = INT32_MAX;

    t127 = (x8433/((x8434|x8435)==x8436));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x8537 = 173U;
	int8_t x8538 = -1;
	int16_t x8539 = -14;
	static int8_t x8540 = -1;
	uint32_t t128 = 275052U;

    t128 = (x8537/((x8538|x8539)==x8540));

    if (t128 != 173U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x8585 = -1;
	int32_t x8586 = -3951905;
	int32_t x8587 = -1;
	static int32_t t129 = 9;

    t129 = (x8585/((x8586|x8587)==x8588));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x8589 = UINT16_MAX;
	int64_t x8590 = INT64_MIN;
	static volatile int64_t x8591 = INT64_MAX;
	static volatile int16_t x8592 = -1;
	volatile int32_t t130 = -85846;

    t130 = (x8589/((x8590|x8591)==x8592));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x8598 = -1;
	static uint32_t x8600 = UINT32_MAX;
	volatile int32_t t131 = 7297120;

    t131 = (x8597/((x8598|x8599)==x8600));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x8785 = INT8_MIN;
	int16_t x8786 = -1;
	static int16_t x8787 = INT16_MAX;
	int32_t t132 = -46;

    t132 = (x8785/((x8786|x8787)==x8788));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x8789 = 1161;
	volatile int32_t x8790 = 6;
	static int8_t x8791 = -3;

    t133 = (x8789/((x8790|x8791)==x8792));

    if (t133 != 1161) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x8961 = -107240LL;
	int8_t x8963 = INT8_MIN;
	uint64_t x8964 = UINT64_MAX;

    t134 = (x8961/((x8962|x8963)==x8964));

    if (t134 != -107240LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x9013 = -1LL;
	volatile int32_t x9014 = 466406;
	uint64_t x9015 = UINT64_MAX;
	uint64_t x9016 = UINT64_MAX;

    t135 = (x9013/((x9014|x9015)==x9016));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x9089 = 134707852U;
	int64_t x9091 = -1LL;
	volatile int16_t x9092 = -1;
	volatile uint32_t t136 = 3336U;

    t136 = (x9089/((x9090|x9091)==x9092));

    if (t136 != 134707852U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x9125 = -1;
	uint64_t x9126 = UINT64_MAX;
	uint32_t x9127 = 44U;
	int16_t x9128 = -1;
	int32_t t137 = 6;

    t137 = (x9125/((x9126|x9127)==x9128));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x9141 = -1;
	static volatile uint8_t x9142 = UINT8_MAX;
	int8_t x9143 = INT8_MIN;
	int32_t x9144 = -1;
	static volatile int32_t t138 = -37644;

    t138 = (x9141/((x9142|x9143)==x9144));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x9225 = -1;
	volatile int8_t x9226 = -1;
	static int8_t x9227 = -1;
	int32_t t139 = 0;

    t139 = (x9225/((x9226|x9227)==x9228));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x9253 = INT32_MIN;
	int16_t x9254 = INT16_MIN;
	volatile uint32_t x9255 = UINT32_MAX;
	static int32_t t140 = INT32_MIN;

    t140 = (x9253/((x9254|x9255)==x9256));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x9337 = -1LL;
	int64_t x9338 = INT64_MIN;
	static int64_t x9339 = INT64_MIN;
	int64_t x9340 = INT64_MIN;
	static int64_t t141 = -417898684457542LL;

    t141 = (x9337/((x9338|x9339)==x9340));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x9491 = 817;
	static int16_t x9492 = -1;
	int32_t t142 = 106393273;

    t142 = (x9489/((x9490|x9491)==x9492));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x9509 = -7683;
	volatile int16_t x9510 = INT16_MIN;
	static int8_t x9511 = -1;
	int32_t t143 = -190400892;

    t143 = (x9509/((x9510|x9511)==x9512));

    if (t143 != -7683) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x9537 = 40852499272LLU;
	volatile int32_t x9538 = -1;
	static volatile int64_t x9539 = -1LL;
	volatile int8_t x9540 = -1;
	static uint64_t t144 = 894565667903LLU;

    t144 = (x9537/((x9538|x9539)==x9540));

    if (t144 != 40852499272LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x9545 = 261470U;
	volatile uint32_t t145 = 384992U;

    t145 = (x9545/((x9546|x9547)==x9548));

    if (t145 != 261470U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x9549 = 1595730220607360LLU;
	static int16_t x9550 = INT16_MIN;
	static int8_t x9552 = -1;
	volatile uint64_t t146 = 677540LLU;

    t146 = (x9549/((x9550|x9551)==x9552));

    if (t146 != 1595730220607360LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x9565 = -1053609;
	int64_t x9566 = INT64_MIN;
	int8_t x9567 = -1;
	int64_t x9568 = -1LL;
	static int32_t t147 = 100;

    t147 = (x9565/((x9566|x9567)==x9568));

    if (t147 != -1053609) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x9657 = -1;
	static uint8_t x9658 = 86U;
	int32_t x9660 = -1;
	volatile int32_t t148 = 10;

    t148 = (x9657/((x9658|x9659)==x9660));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x9733 = INT8_MIN;
	uint32_t x9736 = UINT32_MAX;
	volatile int32_t t149 = -153;

    t149 = (x9733/((x9734|x9735)==x9736));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x9807 = INT32_MAX;
	uint32_t x9808 = UINT32_MAX;
	int32_t t150 = -20197622;

    t150 = (x9805/((x9806|x9807)==x9808));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x9905 = 1011U;
	int32_t x9907 = INT32_MIN;
	int16_t x9908 = INT16_MIN;
	volatile int32_t t151 = 0;

    t151 = (x9905/((x9906|x9907)==x9908));

    if (t151 != 1011) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x9989 = INT64_MIN;
	volatile int32_t x9990 = -49708;
	int32_t x9991 = -1;
	uint64_t x9992 = UINT64_MAX;

    t152 = (x9989/((x9990|x9991)==x9992));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x10041 = INT16_MIN;
	volatile int64_t x10042 = INT64_MAX;
	uint64_t x10043 = UINT64_MAX;
	int32_t x10044 = -1;
	volatile int32_t t153 = 300350;

    t153 = (x10041/((x10042|x10043)==x10044));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x10197 = 995;
	volatile int8_t x10198 = -1;
	uint64_t x10200 = UINT64_MAX;
	volatile int32_t t154 = 36;

    t154 = (x10197/((x10198|x10199)==x10200));

    if (t154 != 995) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x10205 = INT16_MAX;
	uint8_t x10206 = 118U;
	static volatile int16_t x10207 = -1;
	static int8_t x10208 = -1;
	static volatile int32_t t155 = -928227353;

    t155 = (x10205/((x10206|x10207)==x10208));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x10209 = 16216828538LLU;
	volatile int16_t x10210 = -1;
	int16_t x10211 = INT16_MIN;
	uint64_t t156 = 25137948124634334LLU;

    t156 = (x10209/((x10210|x10211)==x10212));

    if (t156 != 16216828538LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x10249 = 13;
	volatile uint64_t x10250 = 3526041LLU;
	int16_t x10251 = -1;
	int16_t x10252 = -1;
	volatile int32_t t157 = -1;

    t157 = (x10249/((x10250|x10251)==x10252));

    if (t157 != 13) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x10273 = INT16_MIN;
	volatile int32_t x10274 = -1;
	static uint64_t x10276 = UINT64_MAX;
	static int32_t t158 = -566;

    t158 = (x10273/((x10274|x10275)==x10276));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x10293 = UINT32_MAX;
	volatile uint8_t x10295 = 5U;
	uint64_t x10296 = UINT64_MAX;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x10293/((x10294|x10295)==x10296));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x10453 = UINT64_MAX;
	int16_t x10454 = INT16_MAX;
	int16_t x10455 = INT16_MIN;
	int8_t x10456 = -1;
	uint64_t t160 = UINT64_MAX;

    t160 = (x10453/((x10454|x10455)==x10456));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x10465 = UINT64_MAX;
	int32_t x10466 = INT32_MIN;
	int16_t x10467 = INT16_MIN;
	static volatile int16_t x10468 = INT16_MIN;
	volatile uint64_t t161 = UINT64_MAX;

    t161 = (x10465/((x10466|x10467)==x10468));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x10569 = 1465U;
	int32_t x10570 = -1;
	volatile int32_t x10571 = -16432090;
	volatile int64_t x10572 = -1LL;
	static volatile uint32_t t162 = 23U;

    t162 = (x10569/((x10570|x10571)==x10572));

    if (t162 != 1465U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x10609 = 16U;
	volatile int32_t x10610 = -237;
	volatile uint64_t x10611 = UINT64_MAX;
	int32_t x10612 = -1;
	volatile int32_t t163 = 901284137;

    t163 = (x10609/((x10610|x10611)==x10612));

    if (t163 != 16) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x10661 = -1;
	int16_t x10663 = -1;
	int8_t x10664 = -1;

    t164 = (x10661/((x10662|x10663)==x10664));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x10729 = 3U;
	int8_t x10730 = -1;
	int8_t x10731 = -1;
	volatile uint32_t x10732 = UINT32_MAX;
	static volatile int32_t t165 = 8538439;

    t165 = (x10729/((x10730|x10731)==x10732));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x10777 = -2759559939LL;
	int32_t x10780 = -1;
	volatile int64_t t166 = 1813356646LL;

    t166 = (x10777/((x10778|x10779)==x10780));

    if (t166 != -2759559939LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x10793 = 17U;
	int16_t x10794 = -1;
	volatile uint32_t x10795 = 51751U;
	uint32_t x10796 = UINT32_MAX;
	int32_t t167 = 2312360;

    t167 = (x10793/((x10794|x10795)==x10796));

    if (t167 != 17) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x10949 = INT8_MAX;
	static int32_t x10951 = -1;
	int32_t x10952 = -1;

    t168 = (x10949/((x10950|x10951)==x10952));

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x10990 = UINT32_MAX;
	static volatile int16_t x10991 = 1;
	static int8_t x10992 = -1;
	static volatile int32_t t169 = 6;

    t169 = (x10989/((x10990|x10991)==x10992));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x11049 = -1;
	int32_t x11050 = -1;
	uint32_t x11051 = UINT32_MAX;
	uint32_t x11052 = UINT32_MAX;
	int32_t t170 = 1;

    t170 = (x11049/((x11050|x11051)==x11052));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x11073 = 67384538563724LL;
	int64_t x11075 = -1LL;
	static int16_t x11076 = -1;

    t171 = (x11073/((x11074|x11075)==x11076));

    if (t171 != 67384538563724LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x11086 = 43;
	static volatile int16_t x11087 = -1;
	int32_t x11088 = -1;
	volatile int32_t t172 = 888;

    t172 = (x11085/((x11086|x11087)==x11088));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x11133 = INT32_MIN;
	volatile int64_t x11134 = 101LL;
	int16_t x11135 = -1;
	int32_t x11136 = -1;

    t173 = (x11133/((x11134|x11135)==x11136));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x11161 = 1U;
	int8_t x11162 = -1;
	int16_t x11163 = 267;
	static int8_t x11164 = -1;
	int32_t t174 = 0;

    t174 = (x11161/((x11162|x11163)==x11164));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x11165 = -27;
	int16_t x11166 = INT16_MIN;
	volatile uint16_t x11167 = UINT16_MAX;
	int32_t x11168 = -1;

    t175 = (x11165/((x11166|x11167)==x11168));

    if (t175 != -27) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x11194 = UINT32_MAX;
	int8_t x11195 = -1;
	uint32_t x11196 = UINT32_MAX;
	int32_t t176 = -15145;

    t176 = (x11193/((x11194|x11195)==x11196));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x11245 = 29;
	volatile int64_t x11246 = INT64_MAX;
	int8_t x11247 = -1;
	int32_t x11248 = -1;

    t177 = (x11245/((x11246|x11247)==x11248));

    if (t177 != 29) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x11313 = -1LL;
	int16_t x11314 = INT16_MIN;
	int16_t x11315 = INT16_MAX;
	volatile int64_t t178 = 133943500LL;

    t178 = (x11313/((x11314|x11315)==x11316));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x11387 = INT64_MIN;
	int32_t x11388 = -1;
	int32_t t179 = INT32_MAX;

    t179 = (x11385/((x11386|x11387)==x11388));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x11526 = UINT8_MAX;
	int8_t x11527 = -27;
	int16_t x11528 = -1;
	int32_t t180 = 200;

    t180 = (x11525/((x11526|x11527)==x11528));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x11557 = 2U;
	int32_t x11558 = INT32_MIN;
	int8_t x11559 = INT8_MIN;
	static int8_t x11560 = INT8_MIN;
	int32_t t181 = -1;

    t181 = (x11557/((x11558|x11559)==x11560));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x11581 = 7U;
	int64_t x11582 = -1LL;
	int64_t x11583 = INT64_MIN;
	int64_t x11584 = -1LL;
	uint32_t t182 = 538863245U;

    t182 = (x11581/((x11582|x11583)==x11584));

    if (t182 != 7U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x11602 = INT8_MIN;
	volatile uint8_t x11603 = UINT8_MAX;
	int64_t x11604 = -1LL;

    t183 = (x11601/((x11602|x11603)==x11604));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x11613 = -1;
	static volatile uint64_t x11615 = UINT64_MAX;
	int16_t x11616 = -1;
	int32_t t184 = 1;

    t184 = (x11613/((x11614|x11615)==x11616));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x11629 = INT64_MIN;
	int16_t x11630 = 9059;
	volatile int8_t x11631 = -1;
	int8_t x11632 = -1;
	int64_t t185 = INT64_MIN;

    t185 = (x11629/((x11630|x11631)==x11632));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x11641 = UINT32_MAX;
	int16_t x11642 = -1;
	static int32_t x11643 = -425701;
	volatile uint32_t x11644 = UINT32_MAX;
	volatile uint32_t t186 = UINT32_MAX;

    t186 = (x11641/((x11642|x11643)==x11644));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x11678 = 238026591;
	volatile int32_t x11679 = -3;
	int8_t x11680 = -1;
	static int32_t t187 = INT32_MIN;

    t187 = (x11677/((x11678|x11679)==x11680));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x11826 = UINT16_MAX;
	uint64_t x11828 = UINT64_MAX;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x11825/((x11826|x11827)==x11828));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x11921 = INT16_MAX;
	volatile uint64_t x11922 = UINT64_MAX;
	int64_t x11923 = -1LL;
	int64_t x11924 = -1LL;
	int32_t t189 = 56525;

    t189 = (x11921/((x11922|x11923)==x11924));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x11941 = -1;
	static int32_t x11943 = INT32_MIN;
	static int16_t x11944 = INT16_MIN;
	int32_t t190 = 478820;

    t190 = (x11941/((x11942|x11943)==x11944));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x12001 = INT16_MIN;
	int8_t x12002 = -1;
	volatile int16_t x12003 = INT16_MIN;
	static uint32_t x12004 = UINT32_MAX;
	volatile int32_t t191 = -761263057;

    t191 = (x12001/((x12002|x12003)==x12004));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x12090 = 6916LLU;
	int8_t x12091 = -1;
	int64_t x12092 = -1LL;
	volatile int32_t t192 = -1;

    t192 = (x12089/((x12090|x12091)==x12092));

    if (t192 != 396) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x12129 = 58627869982296LLU;
	uint16_t x12131 = UINT16_MAX;
	volatile uint64_t t193 = 31587481LLU;

    t193 = (x12129/((x12130|x12131)==x12132));

    if (t193 != 58627869982296LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x12173 = UINT16_MAX;
	int8_t x12175 = -1;
	volatile uint64_t x12176 = UINT64_MAX;
	volatile int32_t t194 = -9;

    t194 = (x12173/((x12174|x12175)==x12176));

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x12225 = INT16_MIN;
	uint32_t x12226 = UINT32_MAX;
	int32_t x12227 = 424393;
	volatile int32_t t195 = 30408413;

    t195 = (x12225/((x12226|x12227)==x12228));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x12381 = 0;
	static int32_t x12382 = INT32_MAX;
	int64_t x12383 = -1LL;
	volatile int8_t x12384 = -1;
	volatile int32_t t196 = -36;

    t196 = (x12381/((x12382|x12383)==x12384));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x12397 = -1;
	int16_t x12398 = INT16_MIN;
	int32_t x12399 = INT32_MAX;
	int32_t t197 = 12;

    t197 = (x12397/((x12398|x12399)==x12400));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x12537 = INT32_MAX;
	volatile uint32_t x12539 = 430839U;
	volatile uint32_t x12540 = UINT32_MAX;
	volatile int32_t t198 = INT32_MAX;

    t198 = (x12537/((x12538|x12539)==x12540));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x12682 = UINT64_MAX;
	int32_t t199 = -118767;

    t199 = (x12681/((x12682|x12683)==x12684));

    if (t199 != 12769) { NG(); } else { ; }
	
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

