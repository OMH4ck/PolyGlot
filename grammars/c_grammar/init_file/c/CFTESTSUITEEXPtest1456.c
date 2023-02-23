
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

uint8_t x2 = UINT8_MAX;
static int8_t x4 = 8;
static uint8_t x103 = 1U;
uint8_t x116 = 2U;
int16_t x121 = -1;
uint16_t x123 = 7348U;
volatile uint8_t x124 = 0U;
volatile int64_t x138 = -1LL;
static int16_t x319 = INT16_MIN;
int8_t x373 = 0;
int32_t t10 = -388393;
volatile int32_t x387 = INT32_MIN;
uint32_t x529 = 826698737U;
int8_t x539 = INT8_MIN;
int16_t x603 = -36;
int64_t t17 = INT64_MIN;
uint8_t x698 = 0U;
volatile int32_t x699 = INT32_MAX;
static int32_t t19 = 133719053;
int64_t x805 = -1LL;
int8_t x907 = INT8_MAX;
volatile int32_t t23 = 27520464;
uint32_t x922 = 641U;
int16_t x934 = INT16_MIN;
int32_t x935 = INT32_MAX;
static int32_t t25 = -52;
int32_t t26 = -11816;
uint32_t x961 = 1445U;
static int8_t x963 = INT8_MIN;
static int8_t x989 = INT8_MIN;
uint16_t x991 = 986U;
uint16_t x1052 = 1U;
static uint32_t x1136 = 2U;
int32_t t32 = INT32_MIN;
uint32_t t33 = 462801918U;
static uint64_t x1163 = 52LLU;
static uint16_t x1164 = 1U;
volatile int32_t t34 = 9465956;
int64_t x1198 = INT64_MIN;
int16_t x1245 = INT16_MAX;
int16_t x1463 = 0;
int8_t x1527 = 0;
uint16_t x1570 = 8138U;
int32_t x1685 = INT32_MAX;
static uint16_t x1805 = 433U;
int32_t x1882 = INT32_MIN;
static int32_t x1889 = INT32_MAX;
uint16_t x1892 = 3U;
uint16_t x1896 = 7U;
uint64_t x1948 = 1LLU;
static int8_t x1953 = INT8_MAX;
int64_t x1954 = INT64_MIN;
uint64_t x1955 = UINT64_MAX;
volatile int32_t x1965 = INT32_MAX;
static int8_t x1967 = INT8_MIN;
int32_t x1970 = INT32_MAX;
int32_t x1971 = -1;
int32_t x1972 = 0;
int32_t x1982 = INT32_MIN;
volatile int32_t t57 = -92403;
int32_t t58 = -1;
volatile uint32_t x2077 = UINT32_MAX;
int64_t t60 = INT64_MAX;
uint8_t x2137 = 103U;
int32_t x2312 = 14;
int32_t x2418 = INT32_MIN;
static int8_t x2419 = -1;
volatile int32_t t67 = 8173;
static int32_t x2491 = INT32_MAX;
uint64_t x2518 = UINT64_MAX;
int16_t x2569 = -1;
static int8_t x2571 = -1;
int32_t t70 = 6522711;
volatile uint32_t x2586 = 559U;
int16_t x2589 = INT16_MIN;
int64_t x2629 = -1LL;
int32_t x2631 = INT32_MAX;
int32_t x2649 = INT32_MAX;
static volatile uint16_t x2651 = 492U;
int32_t t76 = 0;
static volatile int32_t x2688 = 2;
static volatile uint8_t x2695 = UINT8_MAX;
volatile uint64_t t80 = 936856056462828LLU;
static int32_t x2722 = -1;
volatile uint64_t x2762 = UINT64_MAX;
volatile int8_t x2784 = 1;
int16_t x2802 = INT16_MIN;
static int64_t t85 = INT64_MIN;
uint8_t x2809 = UINT8_MAX;
volatile int32_t t86 = -74560;
uint16_t x2828 = 16U;
volatile int64_t t89 = 78946306546803234LL;
volatile uint8_t x2884 = 1U;
static int32_t t91 = -13548526;
uint16_t x3030 = UINT16_MAX;
uint8_t x3036 = 1U;
int16_t x3114 = INT16_MIN;
uint32_t x3115 = UINT32_MAX;
uint8_t x3116 = 6U;
int16_t x3141 = INT16_MIN;
int8_t x3211 = -2;
int64_t x3221 = INT64_MAX;
uint64_t x3437 = 45LLU;
volatile int16_t x3438 = INT16_MIN;
uint16_t x3527 = 185U;
volatile int16_t x3562 = 0;
volatile int64_t t105 = INT64_MIN;
static int16_t x3633 = -1;
uint32_t x3634 = 932U;
uint64_t x3638 = 2LLU;
static uint16_t x3640 = 0U;
static int64_t x3738 = 5319440LL;
volatile uint64_t x3740 = 0LLU;
volatile int32_t t110 = 6869002;
volatile int16_t x3791 = INT16_MIN;
static uint64_t x3846 = 3241260533LLU;
volatile uint64_t x3848 = 1LLU;
int16_t x3867 = INT16_MIN;
volatile int64_t t114 = 985580420264LL;
uint8_t x3879 = 38U;
static int8_t x3944 = 0;
int8_t x3954 = INT8_MIN;
int16_t x3956 = 3;
uint16_t x3973 = 40U;
uint64_t x3989 = UINT64_MAX;
uint64_t t119 = UINT64_MAX;
static int32_t t120 = -1;
uint64_t x4038 = 22710675944197LLU;
static int64_t x4073 = -5872061LL;
uint32_t t124 = 1U;
uint8_t x4216 = 25U;
uint64_t t127 = 3237081041318398LLU;
uint64_t x4317 = 26471768LLU;
int64_t x4333 = INT64_MIN;
int32_t x4370 = 1;
int8_t x4372 = 0;
int32_t x4446 = INT32_MAX;
volatile uint32_t x4447 = 7931U;
volatile uint32_t t134 = 4600513U;
int32_t x4487 = -1;
int32_t t139 = -10067;
uint8_t x4611 = 37U;
static int16_t x4618 = -1;
static int64_t x4642 = -1LL;
volatile int32_t t143 = -210425802;
static uint8_t x4667 = 55U;
static int16_t x4753 = -1;
int32_t t149 = -8873;
static volatile int8_t x4824 = 2;
uint32_t t150 = 251313U;
int32_t t153 = INT32_MIN;
volatile int8_t x4889 = INT8_MIN;
int16_t x4894 = INT16_MAX;
volatile int32_t t155 = -1517719;
int32_t x4897 = INT32_MIN;
int32_t t156 = INT32_MIN;
uint8_t x5029 = 15U;
static int16_t x5057 = -3510;
static int32_t t159 = -7;
uint16_t x5093 = 1U;
volatile int32_t t160 = 0;
int16_t x5138 = -1;
int16_t x5139 = 27;
int32_t x5149 = INT32_MAX;
volatile int16_t x5157 = INT16_MAX;
static int16_t x5222 = 1;
volatile int32_t t168 = -54196589;
int16_t x5253 = 29;
uint8_t x5340 = 3U;
uint32_t x5415 = 1U;
uint32_t t172 = UINT32_MAX;
uint32_t x5549 = 10790U;
int16_t x5550 = INT16_MIN;
volatile uint32_t x5558 = UINT32_MAX;
uint32_t x5560 = 0U;
volatile int32_t t177 = -641052116;
int32_t x5599 = -94;
volatile uint32_t t179 = 114765743U;
uint16_t x5628 = 8U;
volatile int32_t t181 = 1;
uint16_t x5793 = 2016U;
volatile uint8_t x5799 = 9U;
volatile uint32_t x5880 = 20U;
int64_t x5922 = -1LL;
int8_t x5928 = 6;
volatile int32_t t187 = 0;
static uint16_t x5936 = 0U;
volatile uint64_t x6013 = UINT64_MAX;
uint64_t t189 = UINT64_MAX;
int8_t x6018 = INT8_MAX;
int32_t x6020 = 0;
uint16_t x6035 = 1995U;
static uint16_t x6040 = 0U;
volatile int32_t t192 = 1;
uint16_t x6074 = 4U;
volatile uint64_t x6091 = 20799LLU;
static int64_t t196 = INT64_MIN;
volatile uint16_t x6143 = 169U;
int32_t x6152 = 3;
volatile int8_t x6217 = INT8_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	int32_t t0 = -30611;

    t0 = (x1^((x2==x3)<<x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x73 = INT64_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile uint8_t x75 = 0U;
	int8_t x76 = 0;
	int64_t t1 = INT64_MIN;

    t1 = (x73^((x74==x75)<<x76));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	int32_t x104 = 1;
	static volatile int32_t t2 = 281953;

    t2 = (x101^((x102==x103)<<x104));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x113 = INT64_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	volatile int16_t x115 = INT16_MIN;
	int64_t t3 = INT64_MIN;

    t3 = (x113^((x114==x115)<<x116));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x122 = -1;
	volatile int32_t t4 = 87399475;

    t4 = (x121^((x122==x123)<<x124));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x137 = UINT8_MAX;
	int16_t x139 = -8530;
	uint16_t x140 = 0U;
	int32_t t5 = 1;

    t5 = (x137^((x138==x139)<<x140));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x173 = INT32_MAX;
	int8_t x174 = INT8_MAX;
	int16_t x175 = -41;
	static uint32_t x176 = 30U;
	int32_t t6 = INT32_MAX;

    t6 = (x173^((x174==x175)<<x176));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x241 = INT8_MAX;
	uint32_t x242 = UINT32_MAX;
	static int16_t x243 = INT16_MIN;
	int16_t x244 = 1;
	int32_t t7 = 3074982;

    t7 = (x241^((x242==x243)<<x244));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x309 = -7;
	int8_t x310 = -1;
	uint64_t x311 = 513171203751965LLU;
	int8_t x312 = 17;
	static volatile int32_t t8 = -305986246;

    t8 = (x309^((x310==x311)<<x312));

    if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	static uint8_t x320 = 3U;
	int64_t t9 = INT64_MIN;

    t9 = (x317^((x318==x319)<<x320));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x374 = INT16_MAX;
	static uint16_t x375 = UINT16_MAX;
	static volatile uint8_t x376 = 2U;

    t10 = (x373^((x374==x375)<<x376));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x385 = 137659366975LLU;
	volatile uint16_t x386 = 251U;
	int8_t x388 = 25;
	volatile uint64_t t11 = 21295342627154994LLU;

    t11 = (x385^((x386==x387)<<x388));

    if (t11 != 137659366975LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x449 = INT8_MAX;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = -1;
	static uint32_t x452 = 0U;
	static volatile int32_t t12 = -30513;

    t12 = (x449^((x450==x451)<<x452));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x497 = -1;
	volatile int64_t x498 = 29LL;
	volatile int32_t x499 = -16987;
	static uint8_t x500 = 0U;
	int32_t t13 = -874;

    t13 = (x497^((x498==x499)<<x500));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x530 = 61;
	volatile int64_t x531 = 6961343942111LL;
	int16_t x532 = 15;
	volatile uint32_t t14 = 10U;

    t14 = (x529^((x530==x531)<<x532));

    if (t14 != 826698737U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x537 = UINT8_MAX;
	int16_t x538 = INT16_MAX;
	int16_t x540 = 0;
	int32_t t15 = -125999;

    t15 = (x537^((x538==x539)<<x540));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x601 = 4813892922567681288LLU;
	uint8_t x602 = 3U;
	static uint64_t x604 = 9LLU;
	volatile uint64_t t16 = 56028298206LLU;

    t16 = (x601^((x602==x603)<<x604));

    if (t16 != 4813892922567681288LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x641 = INT64_MIN;
	uint16_t x642 = 26076U;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = 1U;

    t17 = (x641^((x642==x643)<<x644));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x681 = 16LLU;
	static volatile int16_t x682 = INT16_MAX;
	volatile int32_t x683 = -1;
	volatile int8_t x684 = 1;
	uint64_t t18 = 199LLU;

    t18 = (x681^((x682==x683)<<x684));

    if (t18 != 16LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x697 = UINT8_MAX;
	uint8_t x700 = 3U;

    t19 = (x697^((x698==x699)<<x700));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x701 = INT16_MIN;
	int32_t x702 = INT32_MIN;
	int8_t x703 = 2;
	uint8_t x704 = 1U;
	volatile int32_t t20 = 4465;

    t20 = (x701^((x702==x703)<<x704));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x705 = 930007283087LLU;
	volatile uint16_t x706 = UINT16_MAX;
	int64_t x707 = 1947LL;
	volatile int16_t x708 = 3;
	uint64_t t21 = 8163009898840475LLU;

    t21 = (x705^((x706==x707)<<x708));

    if (t21 != 930007283087LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x806 = INT8_MIN;
	volatile int16_t x807 = INT16_MIN;
	uint8_t x808 = 0U;
	static int64_t t22 = 23LL;

    t22 = (x805^((x806==x807)<<x808));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x905 = INT8_MAX;
	volatile int64_t x906 = -1LL;
	int32_t x908 = 0;

    t23 = (x905^((x906==x907)<<x908));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x923 = 0;
	int8_t x924 = 27;
	int32_t t24 = -146;

    t24 = (x921^((x922==x923)<<x924));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x933 = -1;
	uint8_t x936 = 12U;

    t25 = (x933^((x934==x935)<<x936));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x937 = UINT8_MAX;
	int16_t x938 = -295;
	int64_t x939 = INT64_MAX;
	int8_t x940 = 6;

    t26 = (x937^((x938==x939)<<x940));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x962 = INT8_MIN;
	uint8_t x964 = 5U;
	static volatile uint32_t t27 = 92616549U;

    t27 = (x961^((x962==x963)<<x964));

    if (t27 != 1413U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x990 = -1;
	uint8_t x992 = 14U;
	static int32_t t28 = 76934425;

    t28 = (x989^((x990==x991)<<x992));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1001 = -8552;
	int16_t x1002 = INT16_MIN;
	static uint8_t x1003 = 12U;
	int8_t x1004 = 4;
	static int32_t t29 = -810150;

    t29 = (x1001^((x1002==x1003)<<x1004));

    if (t29 != -8552) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1037 = -1LL;
	uint32_t x1038 = 109901120U;
	int32_t x1039 = -113;
	uint16_t x1040 = 3U;
	int64_t t30 = 38575LL;

    t30 = (x1037^((x1038==x1039)<<x1040));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1049 = INT8_MAX;
	uint64_t x1050 = 274990090747LLU;
	int8_t x1051 = -1;
	int32_t t31 = 1124;

    t31 = (x1049^((x1050==x1051)<<x1052));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x1133 = INT32_MIN;
	int8_t x1134 = 58;
	static volatile int64_t x1135 = -12750649707720LL;

    t32 = (x1133^((x1134==x1135)<<x1136));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1141 = 373853U;
	int16_t x1142 = INT16_MIN;
	static int16_t x1143 = -1;
	int8_t x1144 = 0;

    t33 = (x1141^((x1142==x1143)<<x1144));

    if (t33 != 373853U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1161 = UINT8_MAX;
	static volatile uint8_t x1162 = 21U;

    t34 = (x1161^((x1162==x1163)<<x1164));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x1197 = -3;
	int8_t x1199 = INT8_MIN;
	static int16_t x1200 = 0;
	int32_t t35 = 61895;

    t35 = (x1197^((x1198==x1199)<<x1200));

    if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1241 = -1;
	int16_t x1242 = -1;
	int16_t x1243 = INT16_MAX;
	uint8_t x1244 = 4U;
	int32_t t36 = 1151;

    t36 = (x1241^((x1242==x1243)<<x1244));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1246 = INT64_MAX;
	uint64_t x1247 = 1461LLU;
	uint8_t x1248 = 6U;
	volatile int32_t t37 = 719;

    t37 = (x1245^((x1246==x1247)<<x1248));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1269 = INT64_MAX;
	volatile uint64_t x1270 = 262690672494LLU;
	int64_t x1271 = 69593440998LL;
	uint8_t x1272 = 0U;
	static int64_t t38 = INT64_MAX;

    t38 = (x1269^((x1270==x1271)<<x1272));

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x1313 = UINT16_MAX;
	int8_t x1314 = INT8_MIN;
	int8_t x1315 = 0;
	int8_t x1316 = 6;
	int32_t t39 = 1;

    t39 = (x1313^((x1314==x1315)<<x1316));

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1389 = 120U;
	static int64_t x1390 = INT64_MAX;
	volatile int16_t x1391 = -78;
	volatile uint16_t x1392 = 6U;
	volatile int32_t t40 = 130572350;

    t40 = (x1389^((x1390==x1391)<<x1392));

    if (t40 != 120) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x1461 = 6075699573382LL;
	static volatile int8_t x1462 = INT8_MIN;
	int8_t x1464 = 1;
	static int64_t t41 = -38682430LL;

    t41 = (x1461^((x1462==x1463)<<x1464));

    if (t41 != 6075699573382LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1481 = UINT8_MAX;
	static int64_t x1482 = INT64_MAX;
	int64_t x1483 = -1LL;
	uint16_t x1484 = 19U;
	volatile int32_t t42 = -1285;

    t42 = (x1481^((x1482==x1483)<<x1484));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1525 = INT32_MIN;
	uint64_t x1526 = 16753766361199871LLU;
	uint16_t x1528 = 2U;
	int32_t t43 = INT32_MIN;

    t43 = (x1525^((x1526==x1527)<<x1528));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1541 = INT32_MIN;
	uint8_t x1542 = 23U;
	uint16_t x1543 = 0U;
	int8_t x1544 = 0;
	int32_t t44 = INT32_MIN;

    t44 = (x1541^((x1542==x1543)<<x1544));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x1565 = 482994218U;
	uint16_t x1566 = 175U;
	static int16_t x1567 = INT16_MIN;
	uint8_t x1568 = 11U;
	uint32_t t45 = 106921U;

    t45 = (x1565^((x1566==x1567)<<x1568));

    if (t45 != 482994218U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x1569 = 653602U;
	int8_t x1571 = 58;
	volatile int64_t x1572 = 1LL;
	uint32_t t46 = 1983U;

    t46 = (x1569^((x1570==x1571)<<x1572));

    if (t46 != 653602U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1661 = INT64_MIN;
	int8_t x1662 = 34;
	volatile int16_t x1663 = -1;
	int16_t x1664 = 5;
	volatile int64_t t47 = INT64_MIN;

    t47 = (x1661^((x1662==x1663)<<x1664));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1686 = INT64_MAX;
	uint32_t x1687 = 479U;
	uint8_t x1688 = 7U;
	static volatile int32_t t48 = INT32_MAX;

    t48 = (x1685^((x1686==x1687)<<x1688));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x1806 = 1;
	volatile int64_t x1807 = INT64_MIN;
	int32_t x1808 = 22;
	volatile int32_t t49 = 2696447;

    t49 = (x1805^((x1806==x1807)<<x1808));

    if (t49 != 433) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x1881 = 1;
	volatile int64_t x1883 = INT64_MIN;
	uint8_t x1884 = 16U;
	volatile int32_t t50 = 63;

    t50 = (x1881^((x1882==x1883)<<x1884));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x1890 = UINT16_MAX;
	volatile int8_t x1891 = INT8_MIN;
	int32_t t51 = INT32_MAX;

    t51 = (x1889^((x1890==x1891)<<x1892));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1893 = INT64_MIN;
	int32_t x1894 = 7;
	uint8_t x1895 = 14U;
	volatile int64_t t52 = INT64_MIN;

    t52 = (x1893^((x1894==x1895)<<x1896));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x1945 = INT16_MIN;
	volatile uint32_t x1946 = 41928014U;
	uint64_t x1947 = UINT64_MAX;
	static volatile int32_t t53 = -27580091;

    t53 = (x1945^((x1946==x1947)<<x1948));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1956 = 1;
	volatile int32_t t54 = -26866;

    t54 = (x1953^((x1954==x1955)<<x1956));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1966 = UINT8_MAX;
	static int16_t x1968 = 28;
	volatile int32_t t55 = INT32_MAX;

    t55 = (x1965^((x1966==x1967)<<x1968));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1969 = 2119194253280762785LL;
	volatile int64_t t56 = -99022330937950LL;

    t56 = (x1969^((x1970==x1971)<<x1972));

    if (t56 != 2119194253280762785LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1981 = -24;
	uint32_t x1983 = 41867832U;
	uint8_t x1984 = 8U;

    t57 = (x1981^((x1982==x1983)<<x1984));

    if (t57 != -24) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x2017 = INT8_MIN;
	int64_t x2018 = INT64_MIN;
	int64_t x2019 = -1LL;
	static int32_t x2020 = 30;

    t58 = (x2017^((x2018==x2019)<<x2020));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2078 = UINT8_MAX;
	static uint16_t x2079 = 29U;
	static uint32_t x2080 = 0U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x2077^((x2078==x2079)<<x2080));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2081 = INT64_MAX;
	static int8_t x2082 = 15;
	static volatile uint32_t x2083 = 79453U;
	uint8_t x2084 = 3U;

    t60 = (x2081^((x2082==x2083)<<x2084));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x2138 = 0;
	static int32_t x2139 = -1;
	int16_t x2140 = 4;
	volatile int32_t t61 = 164865;

    t61 = (x2137^((x2138==x2139)<<x2140));

    if (t61 != 103) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2189 = 2463234LLU;
	static uint64_t x2190 = UINT64_MAX;
	static int16_t x2191 = 1;
	static uint32_t x2192 = 31U;
	uint64_t t62 = 840066827229LLU;

    t62 = (x2189^((x2190==x2191)<<x2192));

    if (t62 != 2463234LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2197 = 6;
	static int8_t x2198 = INT8_MIN;
	int16_t x2199 = -14293;
	static uint8_t x2200 = 0U;
	static volatile int32_t t63 = -222552093;

    t63 = (x2197^((x2198==x2199)<<x2200));

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2293 = -1;
	volatile int16_t x2294 = 22;
	uint16_t x2295 = 6U;
	volatile int32_t x2296 = 9;
	volatile int32_t t64 = -3;

    t64 = (x2293^((x2294==x2295)<<x2296));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2309 = -15LL;
	static int32_t x2310 = INT32_MIN;
	int32_t x2311 = INT32_MAX;
	int64_t t65 = 55LL;

    t65 = (x2309^((x2310==x2311)<<x2312));

    if (t65 != -15LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x2361 = INT64_MAX;
	static int32_t x2362 = INT32_MAX;
	int16_t x2363 = 4;
	uint8_t x2364 = 0U;
	int64_t t66 = INT64_MAX;

    t66 = (x2361^((x2362==x2363)<<x2364));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x2417 = 0U;
	uint16_t x2420 = 6U;

    t67 = (x2417^((x2418==x2419)<<x2420));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x2489 = -1LL;
	uint16_t x2490 = 4827U;
	static uint8_t x2492 = 10U;
	static volatile int64_t t68 = -7055LL;

    t68 = (x2489^((x2490==x2491)<<x2492));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x2517 = 8417509U;
	int8_t x2519 = 8;
	int16_t x2520 = 3;
	static uint32_t t69 = 950558U;

    t69 = (x2517^((x2518==x2519)<<x2520));

    if (t69 != 8417509U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2570 = 3U;
	int8_t x2572 = 22;

    t70 = (x2569^((x2570==x2571)<<x2572));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2585 = -1LL;
	int32_t x2587 = -30;
	uint8_t x2588 = 2U;
	volatile int64_t t71 = 18376869803249295LL;

    t71 = (x2585^((x2586==x2587)<<x2588));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2590 = INT32_MIN;
	int8_t x2591 = INT8_MAX;
	volatile uint16_t x2592 = 12U;
	static volatile int32_t t72 = -937701531;

    t72 = (x2589^((x2590==x2591)<<x2592));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2630 = -3;
	uint16_t x2632 = 1U;
	volatile int64_t t73 = 38LL;

    t73 = (x2629^((x2630==x2631)<<x2632));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x2650 = UINT64_MAX;
	uint64_t x2652 = 20LLU;
	int32_t t74 = INT32_MAX;

    t74 = (x2649^((x2650==x2651)<<x2652));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2661 = 2097;
	uint32_t x2662 = 63262U;
	uint64_t x2663 = UINT64_MAX;
	static int8_t x2664 = 1;
	volatile int32_t t75 = -1;

    t75 = (x2661^((x2662==x2663)<<x2664));

    if (t75 != 2097) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2677 = INT8_MIN;
	int8_t x2678 = -5;
	static volatile int64_t x2679 = -55LL;
	int8_t x2680 = 1;

    t76 = (x2677^((x2678==x2679)<<x2680));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x2681 = INT32_MIN;
	int64_t x2682 = INT64_MIN;
	int32_t x2683 = 873948506;
	static uint64_t x2684 = 6LLU;
	volatile int32_t t77 = INT32_MIN;

    t77 = (x2681^((x2682==x2683)<<x2684));

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x2685 = INT8_MIN;
	uint32_t x2686 = 111467893U;
	volatile int8_t x2687 = INT8_MAX;
	int32_t t78 = 9284;

    t78 = (x2685^((x2686==x2687)<<x2688));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2693 = UINT8_MAX;
	int16_t x2694 = 3531;
	uint8_t x2696 = 6U;
	int32_t t79 = -13143;

    t79 = (x2693^((x2694==x2695)<<x2696));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2705 = 738216LLU;
	static uint8_t x2706 = 98U;
	volatile uint8_t x2707 = 4U;
	int16_t x2708 = 18;

    t80 = (x2705^((x2706==x2707)<<x2708));

    if (t80 != 738216LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x2721 = INT32_MIN;
	int64_t x2723 = INT64_MIN;
	int16_t x2724 = 6;
	int32_t t81 = INT32_MIN;

    t81 = (x2721^((x2722==x2723)<<x2724));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x2761 = 3U;
	int64_t x2763 = INT64_MIN;
	int16_t x2764 = 2;
	uint32_t t82 = 12U;

    t82 = (x2761^((x2762==x2763)<<x2764));

    if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x2781 = 3U;
	int32_t x2782 = 134423413;
	int16_t x2783 = -7246;
	static int32_t t83 = 63102;

    t83 = (x2781^((x2782==x2783)<<x2784));

    if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x2789 = UINT64_MAX;
	volatile int8_t x2790 = INT8_MIN;
	int32_t x2791 = INT32_MIN;
	uint32_t x2792 = 21U;
	uint64_t t84 = UINT64_MAX;

    t84 = (x2789^((x2790==x2791)<<x2792));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x2801 = INT64_MIN;
	int32_t x2803 = 2757943;
	int8_t x2804 = 13;

    t85 = (x2801^((x2802==x2803)<<x2804));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x2810 = -1LL;
	uint8_t x2811 = 123U;
	uint16_t x2812 = 14U;

    t86 = (x2809^((x2810==x2811)<<x2812));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x2825 = 3;
	int64_t x2826 = -2753141882126LL;
	uint16_t x2827 = UINT16_MAX;
	static volatile int32_t t87 = -136302;

    t87 = (x2825^((x2826==x2827)<<x2828));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x2837 = 2742LLU;
	volatile int32_t x2838 = -69073;
	int32_t x2839 = -1;
	static uint8_t x2840 = 2U;
	uint64_t t88 = 10848948563LLU;

    t88 = (x2837^((x2838==x2839)<<x2840));

    if (t88 != 2742LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x2869 = 1038995500987LL;
	static int8_t x2870 = -2;
	int64_t x2871 = INT64_MIN;
	int8_t x2872 = 1;

    t89 = (x2869^((x2870==x2871)<<x2872));

    if (t89 != 1038995500987LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x2881 = 18608690180015570LL;
	int32_t x2882 = -98642473;
	int16_t x2883 = INT16_MAX;
	volatile int64_t t90 = 57929LL;

    t90 = (x2881^((x2882==x2883)<<x2884));

    if (t90 != 18608690180015570LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x2885 = 1U;
	int64_t x2886 = INT64_MAX;
	int32_t x2887 = 0;
	uint8_t x2888 = 25U;

    t91 = (x2885^((x2886==x2887)<<x2888));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x2889 = INT8_MAX;
	int16_t x2890 = INT16_MIN;
	int8_t x2891 = INT8_MIN;
	uint8_t x2892 = 1U;
	int32_t t92 = -732161;

    t92 = (x2889^((x2890==x2891)<<x2892));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3001 = INT8_MIN;
	int8_t x3002 = INT8_MAX;
	uint16_t x3003 = UINT16_MAX;
	static uint8_t x3004 = 4U;
	int32_t t93 = 7216730;

    t93 = (x3001^((x3002==x3003)<<x3004));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x3029 = UINT64_MAX;
	int64_t x3031 = -29864LL;
	static int8_t x3032 = 0;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (x3029^((x3030==x3031)<<x3032));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x3033 = INT32_MAX;
	uint16_t x3034 = UINT16_MAX;
	uint32_t x3035 = UINT32_MAX;
	int32_t t95 = INT32_MAX;

    t95 = (x3033^((x3034==x3035)<<x3036));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x3113 = 2032702383621LL;
	int64_t t96 = -2277LL;

    t96 = (x3113^((x3114==x3115)<<x3116));

    if (t96 != 2032702383621LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x3142 = UINT32_MAX;
	int64_t x3143 = -1LL;
	int8_t x3144 = 2;
	volatile int32_t t97 = -3;

    t97 = (x3141^((x3142==x3143)<<x3144));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x3209 = 4323U;
	int8_t x3210 = INT8_MIN;
	uint8_t x3212 = 1U;
	int32_t t98 = -243;

    t98 = (x3209^((x3210==x3211)<<x3212));

    if (t98 != 4323) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x3222 = INT16_MIN;
	volatile uint32_t x3223 = 1115U;
	volatile uint64_t x3224 = 8LLU;
	static volatile int64_t t99 = INT64_MAX;

    t99 = (x3221^((x3222==x3223)<<x3224));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x3289 = 310822880LLU;
	int8_t x3290 = -50;
	int64_t x3291 = -1471LL;
	uint8_t x3292 = 8U;
	uint64_t t100 = 1466729915267750027LLU;

    t100 = (x3289^((x3290==x3291)<<x3292));

    if (t100 != 310822880LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3439 = 29773U;
	volatile int8_t x3440 = 21;
	static volatile uint64_t t101 = 0LLU;

    t101 = (x3437^((x3438==x3439)<<x3440));

    if (t101 != 45LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x3461 = 1;
	volatile int32_t x3462 = INT32_MIN;
	int64_t x3463 = -1LL;
	int8_t x3464 = 4;
	int32_t t102 = -1;

    t102 = (x3461^((x3462==x3463)<<x3464));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x3501 = 141850704U;
	int64_t x3502 = INT64_MIN;
	volatile int64_t x3503 = INT64_MIN;
	int8_t x3504 = 11;
	volatile uint32_t t103 = 1420446081U;

    t103 = (x3501^((x3502==x3503)<<x3504));

    if (t103 != 141848656U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x3525 = 131556385U;
	uint8_t x3526 = 56U;
	int32_t x3528 = 20;
	volatile uint32_t t104 = 0U;

    t104 = (x3525^((x3526==x3527)<<x3528));

    if (t104 != 131556385U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3561 = INT64_MIN;
	volatile int8_t x3563 = 3;
	int8_t x3564 = 5;

    t105 = (x3561^((x3562==x3563)<<x3564));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3635 = INT16_MIN;
	uint8_t x3636 = 1U;
	static volatile int32_t t106 = 33805;

    t106 = (x3633^((x3634==x3635)<<x3636));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x3637 = INT32_MIN;
	int8_t x3639 = INT8_MAX;
	static int32_t t107 = INT32_MIN;

    t107 = (x3637^((x3638==x3639)<<x3640));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3693 = INT8_MIN;
	static volatile uint32_t x3694 = 261U;
	uint16_t x3695 = UINT16_MAX;
	uint8_t x3696 = 0U;
	volatile int32_t t108 = 127;

    t108 = (x3693^((x3694==x3695)<<x3696));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x3737 = UINT64_MAX;
	int64_t x3739 = -14747340568LL;
	uint64_t t109 = UINT64_MAX;

    t109 = (x3737^((x3738==x3739)<<x3740));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x3777 = UINT16_MAX;
	uint64_t x3778 = 1733LLU;
	int16_t x3779 = 3136;
	uint8_t x3780 = 0U;

    t110 = (x3777^((x3778==x3779)<<x3780));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3789 = -23;
	int16_t x3790 = -1;
	uint8_t x3792 = 1U;
	volatile int32_t t111 = -13;

    t111 = (x3789^((x3790==x3791)<<x3792));

    if (t111 != -23) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3845 = INT64_MAX;
	static uint8_t x3847 = UINT8_MAX;
	volatile int64_t t112 = INT64_MAX;

    t112 = (x3845^((x3846==x3847)<<x3848));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x3861 = INT16_MAX;
	uint64_t x3862 = 0LLU;
	int32_t x3863 = INT32_MAX;
	int16_t x3864 = 0;
	volatile int32_t t113 = -7;

    t113 = (x3861^((x3862==x3863)<<x3864));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3865 = -169LL;
	volatile int8_t x3866 = INT8_MIN;
	volatile uint32_t x3868 = 27U;

    t114 = (x3865^((x3866==x3867)<<x3868));

    if (t114 != -169LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3877 = 11;
	static uint16_t x3878 = 743U;
	uint8_t x3880 = 2U;
	volatile int32_t t115 = -667114;

    t115 = (x3877^((x3878==x3879)<<x3880));

    if (t115 != 11) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x3941 = INT32_MIN;
	int32_t x3942 = INT32_MAX;
	int8_t x3943 = -4;
	static volatile int32_t t116 = INT32_MIN;

    t116 = (x3941^((x3942==x3943)<<x3944));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x3953 = -150112124312LL;
	volatile int64_t x3955 = INT64_MIN;
	static volatile int64_t t117 = -858138837154346LL;

    t117 = (x3953^((x3954==x3955)<<x3956));

    if (t117 != -150112124312LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3974 = 43;
	int64_t x3975 = INT64_MAX;
	uint16_t x3976 = 1U;
	static volatile int32_t t118 = -21071372;

    t118 = (x3973^((x3974==x3975)<<x3976));

    if (t118 != 40) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x3990 = UINT16_MAX;
	volatile int64_t x3991 = -1LL;
	static int8_t x3992 = 0;

    t119 = (x3989^((x3990==x3991)<<x3992));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x4025 = -116;
	volatile uint16_t x4026 = 10484U;
	int64_t x4027 = INT64_MIN;
	uint8_t x4028 = 6U;

    t120 = (x4025^((x4026==x4027)<<x4028));

    if (t120 != -116) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x4037 = 1;
	int8_t x4039 = INT8_MIN;
	static uint8_t x4040 = 13U;
	int32_t t121 = 3612;

    t121 = (x4037^((x4038==x4039)<<x4040));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x4074 = INT64_MAX;
	static int16_t x4075 = 507;
	volatile int8_t x4076 = 2;
	int64_t t122 = 30129LL;

    t122 = (x4073^((x4074==x4075)<<x4076));

    if (t122 != -5872061LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x4113 = 0U;
	int8_t x4114 = -1;
	int32_t x4115 = -1463786;
	uint8_t x4116 = 7U;
	static int32_t t123 = -522653656;

    t123 = (x4113^((x4114==x4115)<<x4116));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x4133 = 1712U;
	int8_t x4134 = 2;
	static volatile int64_t x4135 = INT64_MAX;
	int8_t x4136 = 0;

    t124 = (x4133^((x4134==x4135)<<x4136));

    if (t124 != 1712U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4213 = -1;
	uint32_t x4214 = UINT32_MAX;
	int64_t x4215 = INT64_MIN;
	volatile int32_t t125 = 3;

    t125 = (x4213^((x4214==x4215)<<x4216));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x4277 = INT16_MAX;
	static uint8_t x4278 = 27U;
	int8_t x4279 = -25;
	int32_t x4280 = 25;
	volatile int32_t t126 = 1630584;

    t126 = (x4277^((x4278==x4279)<<x4280));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x4305 = 39757683LLU;
	uint8_t x4306 = 0U;
	int64_t x4307 = 52870324299081LL;
	static uint8_t x4308 = 0U;

    t127 = (x4305^((x4306==x4307)<<x4308));

    if (t127 != 39757683LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x4318 = INT64_MIN;
	int8_t x4319 = INT8_MAX;
	uint8_t x4320 = 13U;
	uint64_t t128 = 1625339943817716583LLU;

    t128 = (x4317^((x4318==x4319)<<x4320));

    if (t128 != 26471768LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x4334 = 2377LLU;
	static volatile uint8_t x4335 = UINT8_MAX;
	uint8_t x4336 = 0U;
	static int64_t t129 = INT64_MIN;

    t129 = (x4333^((x4334==x4335)<<x4336));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4345 = -1;
	int32_t x4346 = INT32_MAX;
	uint32_t x4347 = 1U;
	uint8_t x4348 = 1U;
	volatile int32_t t130 = -101022;

    t130 = (x4345^((x4346==x4347)<<x4348));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x4365 = INT32_MAX;
	int16_t x4366 = INT16_MIN;
	int8_t x4367 = INT8_MIN;
	static int8_t x4368 = 9;
	static volatile int32_t t131 = INT32_MAX;

    t131 = (x4365^((x4366==x4367)<<x4368));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x4369 = 13U;
	static int8_t x4371 = -1;
	static volatile int32_t t132 = 371636153;

    t132 = (x4369^((x4370==x4371)<<x4372));

    if (t132 != 13) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4385 = -3077197991983959LL;
	uint64_t x4386 = 63847645435LLU;
	int32_t x4387 = 874;
	uint8_t x4388 = 3U;
	volatile int64_t t133 = 1LL;

    t133 = (x4385^((x4386==x4387)<<x4388));

    if (t133 != -3077197991983959LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x4445 = 2836U;
	volatile uint8_t x4448 = 10U;

    t134 = (x4445^((x4446==x4447)<<x4448));

    if (t134 != 2836U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x4465 = INT64_MIN;
	volatile uint16_t x4466 = UINT16_MAX;
	uint32_t x4467 = 1477U;
	uint8_t x4468 = 0U;
	volatile int64_t t135 = INT64_MIN;

    t135 = (x4465^((x4466==x4467)<<x4468));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x4485 = 12515U;
	uint16_t x4486 = 12U;
	static volatile uint16_t x4488 = 4U;
	volatile int32_t t136 = 88950;

    t136 = (x4485^((x4486==x4487)<<x4488));

    if (t136 != 12515) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x4529 = UINT64_MAX;
	volatile uint64_t x4530 = 32774181LLU;
	static int16_t x4531 = INT16_MIN;
	static int16_t x4532 = 10;
	static volatile uint64_t t137 = UINT64_MAX;

    t137 = (x4529^((x4530==x4531)<<x4532));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4561 = -8226849;
	int16_t x4562 = -1;
	uint32_t x4563 = 51686824U;
	uint16_t x4564 = 1U;
	int32_t t138 = -129610;

    t138 = (x4561^((x4562==x4563)<<x4564));

    if (t138 != -8226849) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4597 = INT16_MIN;
	uint16_t x4598 = UINT16_MAX;
	volatile int32_t x4599 = INT32_MAX;
	int16_t x4600 = 0;

    t139 = (x4597^((x4598==x4599)<<x4600));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x4609 = 2U;
	static int8_t x4610 = INT8_MIN;
	uint8_t x4612 = 8U;
	volatile uint32_t t140 = 481902045U;

    t140 = (x4609^((x4610==x4611)<<x4612));

    if (t140 != 2U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4617 = -47244LL;
	int32_t x4619 = INT32_MIN;
	static uint8_t x4620 = 0U;
	volatile int64_t t141 = -79LL;

    t141 = (x4617^((x4618==x4619)<<x4620));

    if (t141 != -47244LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x4641 = -3;
	volatile uint32_t x4643 = UINT32_MAX;
	static int8_t x4644 = 1;
	volatile int32_t t142 = -12430;

    t142 = (x4641^((x4642==x4643)<<x4644));

    if (t142 != -3) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x4649 = -1;
	static volatile uint64_t x4650 = UINT64_MAX;
	int64_t x4651 = -1LL;
	int64_t x4652 = 0LL;

    t143 = (x4649^((x4650==x4651)<<x4652));

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x4665 = UINT32_MAX;
	static int8_t x4666 = -4;
	int8_t x4668 = 0;
	volatile uint32_t t144 = UINT32_MAX;

    t144 = (x4665^((x4666==x4667)<<x4668));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x4693 = -1;
	int8_t x4694 = 0;
	volatile int64_t x4695 = -236157895LL;
	uint16_t x4696 = 0U;
	int32_t t145 = 3926;

    t145 = (x4693^((x4694==x4695)<<x4696));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x4701 = -1;
	int8_t x4702 = INT8_MAX;
	uint8_t x4703 = 3U;
	int16_t x4704 = 7;
	int32_t t146 = -7;

    t146 = (x4701^((x4702==x4703)<<x4704));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x4717 = 0;
	uint64_t x4718 = UINT64_MAX;
	static volatile int8_t x4719 = INT8_MIN;
	static uint8_t x4720 = 1U;
	static int32_t t147 = 0;

    t147 = (x4717^((x4718==x4719)<<x4720));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x4725 = 62;
	int16_t x4726 = INT16_MAX;
	volatile int32_t x4727 = INT32_MIN;
	uint8_t x4728 = 5U;
	int32_t t148 = -49430052;

    t148 = (x4725^((x4726==x4727)<<x4728));

    if (t148 != 62) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x4754 = 180U;
	int64_t x4755 = -16231674771506LL;
	volatile int8_t x4756 = 1;

    t149 = (x4753^((x4754==x4755)<<x4756));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x4821 = 3203310U;
	int32_t x4822 = 1488421;
	static int64_t x4823 = INT64_MAX;

    t150 = (x4821^((x4822==x4823)<<x4824));

    if (t150 != 3203310U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4829 = -3825246;
	int32_t x4830 = -50757;
	int64_t x4831 = INT64_MAX;
	volatile uint8_t x4832 = 2U;
	volatile int32_t t151 = 360477296;

    t151 = (x4829^((x4830==x4831)<<x4832));

    if (t151 != -3825246) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x4881 = INT8_MIN;
	static volatile int16_t x4882 = INT16_MAX;
	uint64_t x4883 = UINT64_MAX;
	int8_t x4884 = 0;
	int32_t t152 = 1975;

    t152 = (x4881^((x4882==x4883)<<x4884));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x4885 = INT32_MIN;
	static volatile int16_t x4886 = INT16_MIN;
	int32_t x4887 = -2;
	static volatile uint8_t x4888 = 11U;

    t153 = (x4885^((x4886==x4887)<<x4888));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x4890 = 51U;
	uint8_t x4891 = 11U;
	volatile uint8_t x4892 = 5U;
	int32_t t154 = -14;

    t154 = (x4889^((x4890==x4891)<<x4892));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4893 = INT16_MIN;
	uint64_t x4895 = 618261LLU;
	int32_t x4896 = 1;

    t155 = (x4893^((x4894==x4895)<<x4896));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x4898 = UINT8_MAX;
	int64_t x4899 = -1LL;
	int64_t x4900 = 28LL;

    t156 = (x4897^((x4898==x4899)<<x4900));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x5021 = UINT8_MAX;
	static uint8_t x5022 = 29U;
	volatile int16_t x5023 = 1212;
	uint16_t x5024 = 2U;
	int32_t t157 = -4173407;

    t157 = (x5021^((x5022==x5023)<<x5024));

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x5030 = 751;
	uint16_t x5031 = 3U;
	int32_t x5032 = 1;
	volatile int32_t t158 = -457;

    t158 = (x5029^((x5030==x5031)<<x5032));

    if (t158 != 15) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x5058 = -7LL;
	int32_t x5059 = INT32_MIN;
	int16_t x5060 = 9;

    t159 = (x5057^((x5058==x5059)<<x5060));

    if (t159 != -3510) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x5094 = UINT16_MAX;
	int16_t x5095 = INT16_MAX;
	uint32_t x5096 = 0U;

    t160 = (x5093^((x5094==x5095)<<x5096));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x5125 = 14412889418LLU;
	static int64_t x5126 = 48191992LL;
	int16_t x5127 = -1;
	static int32_t x5128 = 1;
	uint64_t t161 = 5454153LLU;

    t161 = (x5125^((x5126==x5127)<<x5128));

    if (t161 != 14412889418LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x5137 = INT64_MAX;
	static volatile int64_t x5140 = 28LL;
	int64_t t162 = INT64_MAX;

    t162 = (x5137^((x5138==x5139)<<x5140));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x5141 = UINT32_MAX;
	static volatile int16_t x5142 = INT16_MAX;
	int32_t x5143 = INT32_MIN;
	static uint64_t x5144 = 9LLU;
	volatile uint32_t t163 = UINT32_MAX;

    t163 = (x5141^((x5142==x5143)<<x5144));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x5145 = UINT64_MAX;
	static volatile uint16_t x5146 = 7385U;
	int8_t x5147 = -1;
	int8_t x5148 = 13;
	uint64_t t164 = UINT64_MAX;

    t164 = (x5145^((x5146==x5147)<<x5148));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x5150 = 194U;
	int16_t x5151 = INT16_MIN;
	int8_t x5152 = 1;
	volatile int32_t t165 = INT32_MAX;

    t165 = (x5149^((x5150==x5151)<<x5152));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5158 = INT32_MIN;
	int8_t x5159 = 44;
	uint8_t x5160 = 6U;
	int32_t t166 = 45273082;

    t166 = (x5157^((x5158==x5159)<<x5160));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x5185 = -1;
	int64_t x5186 = INT64_MIN;
	int8_t x5187 = INT8_MIN;
	volatile uint8_t x5188 = 1U;
	int32_t t167 = 25814;

    t167 = (x5185^((x5186==x5187)<<x5188));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x5221 = 1U;
	int8_t x5223 = INT8_MIN;
	uint8_t x5224 = 2U;

    t168 = (x5221^((x5222==x5223)<<x5224));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x5254 = -20;
	uint32_t x5255 = UINT32_MAX;
	static uint16_t x5256 = 0U;
	int32_t t169 = -35290;

    t169 = (x5253^((x5254==x5255)<<x5256));

    if (t169 != 29) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x5309 = INT64_MAX;
	int32_t x5310 = INT32_MAX;
	static volatile int8_t x5311 = -1;
	volatile uint64_t x5312 = 7LLU;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x5309^((x5310==x5311)<<x5312));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x5337 = 3483U;
	volatile int64_t x5338 = INT64_MIN;
	int16_t x5339 = -745;
	int32_t t171 = -32532;

    t171 = (x5337^((x5338==x5339)<<x5340));

    if (t171 != 3483) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x5413 = UINT32_MAX;
	int16_t x5414 = INT16_MIN;
	int8_t x5416 = 1;

    t172 = (x5413^((x5414==x5415)<<x5416));

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x5433 = UINT64_MAX;
	static int8_t x5434 = -6;
	volatile uint64_t x5435 = UINT64_MAX;
	uint8_t x5436 = 1U;
	uint64_t t173 = UINT64_MAX;

    t173 = (x5433^((x5434==x5435)<<x5436));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5537 = 31;
	static uint64_t x5538 = 4574793083387729247LLU;
	uint16_t x5539 = UINT16_MAX;
	uint8_t x5540 = 1U;
	int32_t t174 = 53513240;

    t174 = (x5537^((x5538==x5539)<<x5540));

    if (t174 != 31) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x5541 = 3;
	int8_t x5542 = INT8_MAX;
	uint64_t x5543 = 1481009027121890700LLU;
	uint32_t x5544 = 12U;
	volatile int32_t t175 = 3821;

    t175 = (x5541^((x5542==x5543)<<x5544));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x5551 = UINT32_MAX;
	static int8_t x5552 = 29;
	static volatile uint32_t t176 = 1873488492U;

    t176 = (x5549^((x5550==x5551)<<x5552));

    if (t176 != 10790U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x5557 = -4716;
	static int64_t x5559 = INT64_MIN;

    t177 = (x5557^((x5558==x5559)<<x5560));

    if (t177 != -4716) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x5597 = INT16_MIN;
	uint64_t x5598 = 115816LLU;
	uint8_t x5600 = 26U;
	int32_t t178 = -4223;

    t178 = (x5597^((x5598==x5599)<<x5600));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x5617 = 228049U;
	volatile int8_t x5618 = INT8_MAX;
	uint64_t x5619 = 64150306363147949LLU;
	uint16_t x5620 = 3U;

    t179 = (x5617^((x5618==x5619)<<x5620));

    if (t179 != 228049U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x5625 = INT16_MIN;
	int64_t x5626 = -1LL;
	volatile int64_t x5627 = INT64_MAX;
	int32_t t180 = -178512659;

    t180 = (x5625^((x5626==x5627)<<x5628));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x5765 = -49;
	int8_t x5766 = INT8_MAX;
	uint64_t x5767 = 1889099747LLU;
	static uint8_t x5768 = 2U;

    t181 = (x5765^((x5766==x5767)<<x5768));

    if (t181 != -49) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x5794 = 0U;
	static int16_t x5795 = INT16_MIN;
	static uint8_t x5796 = 22U;
	int32_t t182 = -3387064;

    t182 = (x5793^((x5794==x5795)<<x5796));

    if (t182 != 2016) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5797 = INT16_MAX;
	uint64_t x5798 = UINT64_MAX;
	volatile int64_t x5800 = 0LL;
	volatile int32_t t183 = -513104587;

    t183 = (x5797^((x5798==x5799)<<x5800));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5877 = INT8_MAX;
	int32_t x5878 = -153970;
	int16_t x5879 = INT16_MIN;
	volatile int32_t t184 = -92070;

    t184 = (x5877^((x5878==x5879)<<x5880));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x5893 = UINT16_MAX;
	volatile int8_t x5894 = 25;
	int16_t x5895 = -60;
	uint8_t x5896 = 1U;
	static volatile int32_t t185 = 770;

    t185 = (x5893^((x5894==x5895)<<x5896));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x5921 = UINT64_MAX;
	uint8_t x5923 = 11U;
	volatile uint16_t x5924 = 8U;
	uint64_t t186 = UINT64_MAX;

    t186 = (x5921^((x5922==x5923)<<x5924));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x5925 = 5120;
	uint8_t x5926 = UINT8_MAX;
	int16_t x5927 = 448;

    t187 = (x5925^((x5926==x5927)<<x5928));

    if (t187 != 5120) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x5933 = INT16_MAX;
	int16_t x5934 = -1;
	static uint32_t x5935 = UINT32_MAX;
	int32_t t188 = 2510;

    t188 = (x5933^((x5934==x5935)<<x5936));

    if (t188 != 32766) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x6014 = UINT64_MAX;
	static int16_t x6015 = -8468;
	volatile uint8_t x6016 = 11U;

    t189 = (x6013^((x6014==x6015)<<x6016));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x6017 = INT64_MAX;
	int16_t x6019 = INT16_MIN;
	volatile int64_t t190 = INT64_MAX;

    t190 = (x6017^((x6018==x6019)<<x6020));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x6033 = INT8_MIN;
	uint16_t x6034 = 2U;
	uint32_t x6036 = 3U;
	static volatile int32_t t191 = 2;

    t191 = (x6033^((x6034==x6035)<<x6036));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x6037 = UINT16_MAX;
	static volatile int64_t x6038 = INT64_MIN;
	static int32_t x6039 = INT32_MIN;

    t192 = (x6037^((x6038==x6039)<<x6040));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x6053 = -1;
	static int16_t x6054 = -1191;
	volatile int8_t x6055 = -1;
	static uint16_t x6056 = 1U;
	int32_t t193 = -329872081;

    t193 = (x6053^((x6054==x6055)<<x6056));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x6073 = -11381;
	volatile int16_t x6075 = INT16_MIN;
	volatile uint8_t x6076 = 1U;
	volatile int32_t t194 = 10988654;

    t194 = (x6073^((x6074==x6075)<<x6076));

    if (t194 != -11381) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x6089 = 21U;
	int8_t x6090 = INT8_MIN;
	static int8_t x6092 = 1;
	static int32_t t195 = 66925;

    t195 = (x6089^((x6090==x6091)<<x6092));

    if (t195 != 21) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x6101 = INT64_MIN;
	static int32_t x6102 = INT32_MIN;
	int64_t x6103 = -1LL;
	uint16_t x6104 = 2U;

    t196 = (x6101^((x6102==x6103)<<x6104));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x6141 = 10713U;
	int16_t x6142 = INT16_MIN;
	int16_t x6144 = 1;
	volatile int32_t t197 = -125686041;

    t197 = (x6141^((x6142==x6143)<<x6144));

    if (t197 != 10713) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x6149 = -1;
	static int32_t x6150 = INT32_MIN;
	static uint16_t x6151 = 3U;
	int32_t t198 = 3;

    t198 = (x6149^((x6150==x6151)<<x6152));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x6218 = 105U;
	uint32_t x6219 = 510U;
	uint16_t x6220 = 1U;
	int32_t t199 = -109;

    t199 = (x6217^((x6218==x6219)<<x6220));

    if (t199 != -128) { NG(); } else { ; }
	
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

