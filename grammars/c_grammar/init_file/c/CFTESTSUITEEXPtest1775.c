
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

static int32_t x11 = INT32_MAX;
static uint32_t x12 = 7U;
int32_t t1 = 52874250;
uint8_t x65 = 3U;
static uint32_t x66 = 157333U;
volatile uint64_t x77 = UINT64_MAX;
uint32_t x104 = UINT32_MAX;
uint8_t x160 = 0U;
uint16_t x192 = 3U;
volatile int32_t t8 = 194;
static int32_t x265 = INT32_MAX;
uint32_t t11 = 36290U;
int64_t x327 = INT64_MAX;
static volatile int32_t t12 = -596463;
static int8_t x354 = -1;
uint64_t x357 = 71988691997LLU;
uint64_t x425 = UINT64_MAX;
volatile int16_t x426 = -63;
static volatile uint16_t x442 = 11U;
int32_t x443 = INT32_MIN;
uint16_t x444 = 2U;
int32_t t17 = 5139;
static int32_t t19 = 51;
int32_t t20 = 13396169;
uint32_t x589 = 1U;
static uint32_t t21 = 8589357U;
uint64_t x596 = 6LLU;
uint16_t x601 = 2U;
int8_t x616 = 24;
static int16_t x627 = 1;
static volatile int32_t t26 = -1;
uint32_t t28 = 152703U;
static uint32_t x721 = 22U;
int8_t x744 = 0;
uint32_t t30 = UINT32_MAX;
volatile int8_t x756 = 1;
volatile uint64_t x768 = UINT64_MAX;
volatile uint16_t x787 = 14U;
uint16_t x812 = 20U;
int8_t x846 = -1;
int8_t x848 = -1;
volatile uint32_t t36 = 27U;
int16_t x851 = INT16_MIN;
volatile int32_t t37 = -16853;
int32_t x1068 = -1;
int64_t x1073 = 304578374124LL;
volatile uint8_t x1109 = UINT8_MAX;
volatile int32_t t40 = 0;
static volatile int64_t x1227 = -27482422842261300LL;
static int16_t x1243 = INT16_MIN;
uint8_t x1336 = 0U;
static int16_t x1363 = -1;
volatile uint8_t x1366 = 0U;
uint8_t x1368 = 1U;
static int32_t t47 = 31;
static uint64_t x1378 = UINT64_MAX;
static int16_t x1406 = -1;
int32_t x1407 = INT32_MAX;
int32_t t51 = 612716;
volatile uint8_t x1484 = 33U;
volatile int64_t t52 = -6277378751LL;
int16_t x1528 = -1;
uint8_t x1557 = 0U;
uint64_t x1645 = 1619097583042LLU;
static uint8_t x1648 = 32U;
int16_t x1661 = INT16_MAX;
static volatile int32_t t58 = 0;
static volatile int32_t x1689 = INT32_MAX;
int32_t x1740 = 1;
int64_t t60 = -3895LL;
static int32_t x1781 = INT32_MAX;
int32_t x1782 = INT32_MAX;
volatile int32_t t61 = -59677;
static int32_t x1854 = INT32_MIN;
uint32_t x1897 = UINT32_MAX;
int16_t x1899 = INT16_MIN;
static uint32_t t65 = UINT32_MAX;
volatile int16_t x1913 = INT16_MAX;
int32_t x1985 = INT32_MAX;
int64_t x2054 = INT64_MIN;
int8_t x2055 = INT8_MIN;
int32_t t69 = -1018021932;
static uint64_t x2091 = 3291525LLU;
volatile uint64_t t71 = 3843921522606LLU;
uint8_t x2270 = 1U;
volatile uint8_t x2272 = 3U;
static int8_t x2277 = 1;
static int8_t x2278 = INT8_MAX;
uint32_t x2325 = UINT32_MAX;
static volatile int16_t x2475 = -1;
volatile int32_t t80 = -728236782;
int8_t x2660 = -1;
volatile int64_t t84 = 15426581020LL;
uint8_t x2829 = 37U;
int8_t x2933 = 13;
int16_t x2935 = 16357;
int8_t x3035 = INT8_MAX;
volatile uint64_t x3041 = 95LLU;
static uint8_t x3043 = UINT8_MAX;
static int32_t x3054 = INT32_MIN;
static int8_t x3056 = -1;
static uint32_t x3061 = 13840U;
volatile uint32_t t95 = 1923200680U;
static int64_t x3071 = -1LL;
int8_t x3124 = 6;
int8_t x3131 = 0;
static volatile int64_t x3195 = -100397LL;
int8_t x3241 = 55;
int8_t x3243 = INT8_MIN;
volatile int32_t t102 = 5840459;
volatile uint64_t t103 = 22476881072LLU;
uint16_t x3298 = 0U;
uint64_t x3319 = UINT64_MAX;
int8_t x3335 = -1;
static int32_t t108 = -25;
volatile int32_t x3439 = -1;
static uint64_t x3458 = 504LLU;
static int64_t x3575 = INT64_MIN;
int32_t t114 = -6;
int16_t x3598 = -45;
int8_t x3626 = 26;
int32_t t118 = -1167;
int64_t x3674 = INT64_MIN;
uint16_t x3710 = 2U;
static volatile int32_t t121 = 17;
uint32_t x3793 = UINT32_MAX;
volatile uint32_t t123 = UINT32_MAX;
volatile int64_t x3818 = INT64_MIN;
volatile int8_t x3819 = INT8_MAX;
static uint8_t x3910 = 14U;
int32_t x3928 = -1;
int16_t x3951 = 1037;
volatile uint64_t x4106 = UINT64_MAX;
int32_t x4108 = -1;
uint8_t x4116 = 1U;
volatile uint32_t x4258 = UINT32_MAX;
volatile uint64_t x4390 = 116LLU;
volatile int32_t t133 = -5;
int64_t x4398 = 2036LL;
uint8_t x4401 = 0U;
volatile int16_t x4406 = INT16_MIN;
static int64_t t136 = 12857335005622LL;
int8_t x4487 = 0;
volatile int64_t x4545 = INT64_MAX;
volatile int64_t x4546 = -72449LL;
static uint8_t x4547 = 14U;
int16_t x4593 = 6953;
int8_t x4596 = -1;
uint16_t x4695 = 34U;
uint8_t x4699 = 4U;
static int16_t x4744 = 24;
volatile int8_t x4774 = -1;
int16_t x4776 = 1;
volatile uint16_t x4781 = UINT16_MAX;
static volatile int32_t t150 = 45290;
int8_t x4788 = -1;
int64_t t151 = INT64_MAX;
volatile uint64_t x4793 = UINT64_MAX;
volatile uint64_t t152 = UINT64_MAX;
int32_t t154 = 2;
uint64_t t155 = UINT64_MAX;
int32_t t156 = -48;
static int32_t x4913 = INT32_MAX;
volatile int32_t t157 = 1328305;
volatile int64_t x4950 = INT64_MIN;
int32_t x4951 = -1;
int64_t x4953 = INT64_MAX;
static int64_t x4955 = -1LL;
uint64_t x4965 = 7745957104LLU;
static volatile int32_t x4986 = -3226542;
uint32_t x5025 = UINT32_MAX;
static int32_t t163 = -6;
uint16_t x5105 = UINT16_MAX;
uint32_t x5107 = UINT32_MAX;
int16_t x5108 = -1;
uint32_t t165 = UINT32_MAX;
uint64_t x5143 = 13LLU;
volatile int8_t x5144 = 14;
uint16_t x5357 = 98U;
volatile int8_t x5375 = 0;
volatile uint64_t x5417 = UINT64_MAX;
int64_t x5418 = INT64_MIN;
static uint64_t t174 = 2055258673262430694LLU;
uint32_t x5470 = UINT32_MAX;
uint32_t x5501 = 4U;
static uint8_t x5504 = 7U;
static volatile uint32_t t179 = 0U;
int8_t x5542 = INT8_MAX;
static int32_t x5571 = INT32_MAX;
volatile int16_t x5637 = 3099;
int16_t x5665 = INT16_MAX;
uint8_t x5711 = 4U;
int64_t x5712 = -1LL;
volatile uint64_t t187 = 17870042LLU;
int64_t x5713 = 3980224889LL;
static int16_t x5715 = INT16_MAX;
int64_t t188 = 224251726058521LL;
volatile int16_t x5749 = INT16_MAX;
volatile uint16_t x5756 = 20U;
uint32_t x5790 = 86522201U;
uint16_t x5828 = 2U;
int16_t x5873 = INT16_MAX;
volatile int32_t t194 = -357519;
uint64_t x6006 = UINT64_MAX;
uint64_t x6009 = 1172472LLU;
int32_t x6012 = -1;
uint8_t x6030 = 57U;
uint32_t x6031 = UINT32_MAX;
volatile int64_t x6032 = -1LL;
uint8_t x6076 = 4U;
uint32_t t198 = 426U;
uint64_t x6109 = UINT64_MAX;
int64_t x6110 = INT64_MIN;


void f0(void) {
    	volatile uint16_t x1 = 218U;
	int16_t x2 = INT16_MIN;
	volatile int16_t x3 = INT16_MIN;
	uint8_t x4 = 6U;
	volatile int32_t t0 = 228926539;

    t0 = (x1>>((x2<=x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = 0;
	int64_t x10 = INT64_MAX;

    t1 = (x9>>((x10<=x11)+x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x45 = INT8_MAX;
	int64_t x46 = -1LL;
	static uint32_t x47 = 2425312U;
	int8_t x48 = -1;
	static int32_t t2 = -604360;

    t2 = (x45>>((x46<=x47)+x48));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x67 = 1U;
	int8_t x68 = 5;
	int32_t t3 = 254666713;

    t3 = (x65>>((x66<=x67)+x68));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x78 = -1;
	volatile int8_t x79 = 15;
	volatile uint32_t x80 = UINT32_MAX;
	uint64_t t4 = UINT64_MAX;

    t4 = (x77>>((x78<=x79)+x80));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x93 = INT8_MAX;
	int8_t x94 = 0;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = -1;
	volatile int32_t t5 = -361416;

    t5 = (x93>>((x94<=x95)+x96));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x101 = 103;
	int32_t x102 = INT32_MIN;
	int64_t x103 = -1LL;
	int32_t t6 = -2200;

    t6 = (x101>>((x102<=x103)+x104));

    if (t6 != 103) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x157 = 359194667717788168LLU;
	int8_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	static uint64_t t7 = 1LLU;

    t7 = (x157>>((x158<=x159)+x160));

    if (t7 != 179597333858894084LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x189 = 53;
	int8_t x190 = 3;
	int32_t x191 = INT32_MIN;

    t8 = (x189>>((x190<=x191)+x192));

    if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MAX;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t9 = -35547753;

    t9 = (x205>>((x206<=x207)+x208));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x266 = INT8_MAX;
	static uint16_t x267 = 6403U;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t10 = INT32_MAX;

    t10 = (x265>>((x266<=x267)+x268));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x273 = 3128U;
	int8_t x274 = INT8_MIN;
	int8_t x275 = 0;
	uint64_t x276 = UINT64_MAX;

    t11 = (x273>>((x274<=x275)+x276));

    if (t11 != 3128U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 5517U;
	int32_t x328 = -1;

    t12 = (x325>>((x326<=x327)+x328));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x355 = INT16_MAX;
	int8_t x356 = -1;
	int32_t t13 = -876148757;

    t13 = (x353>>((x354<=x355)+x356));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x358 = 34468732924172861LLU;
	static int64_t x359 = -1LL;
	int8_t x360 = 30;
	static volatile uint64_t t14 = 5240757946395LLU;

    t14 = (x357>>((x358<=x359)+x360));

    if (t14 != 33LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x361 = 0;
	uint64_t x362 = 519137LLU;
	volatile int64_t x363 = INT64_MAX;
	static uint64_t x364 = UINT64_MAX;
	volatile int32_t t15 = -24076;

    t15 = (x361>>((x362<=x363)+x364));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x427 = INT32_MAX;
	uint64_t x428 = UINT64_MAX;
	uint64_t t16 = UINT64_MAX;

    t16 = (x425>>((x426<=x427)+x428));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x441 = 3U;

    t17 = (x441>>((x442<=x443)+x444));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x517 = UINT8_MAX;
	int64_t x518 = INT64_MAX;
	static int8_t x519 = INT8_MAX;
	static int8_t x520 = 5;
	volatile int32_t t18 = -120122441;

    t18 = (x517>>((x518<=x519)+x520));

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x529 = INT16_MAX;
	uint8_t x530 = 48U;
	static volatile int32_t x531 = INT32_MIN;
	static int16_t x532 = 8;

    t19 = (x529>>((x530<=x531)+x532));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x533 = UINT8_MAX;
	int16_t x534 = -1;
	uint16_t x535 = UINT16_MAX;
	uint16_t x536 = 4U;

    t20 = (x533>>((x534<=x535)+x536));

    if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x590 = -3;
	volatile uint16_t x591 = UINT16_MAX;
	int64_t x592 = -1LL;

    t21 = (x589>>((x590<=x591)+x592));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x593 = UINT8_MAX;
	uint16_t x594 = 7U;
	uint8_t x595 = 28U;
	volatile int32_t t22 = 19016339;

    t22 = (x593>>((x594<=x595)+x596));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x602 = -1;
	int64_t x603 = 1004692554817900LL;
	static uint32_t x604 = UINT32_MAX;
	volatile int32_t t23 = -23;

    t23 = (x601>>((x602<=x603)+x604));

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x613 = 4347959618171849226LLU;
	volatile int16_t x614 = INT16_MIN;
	static uint32_t x615 = 86U;
	uint64_t t24 = 4111584656463104873LLU;

    t24 = (x613>>((x614<=x615)+x616));

    if (t24 != 259158588538LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x625 = UINT32_MAX;
	int64_t x626 = INT64_MIN;
	uint32_t x628 = UINT32_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x625>>((x626<=x627)+x628));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x657 = INT8_MAX;
	uint8_t x658 = UINT8_MAX;
	uint8_t x659 = UINT8_MAX;
	static int16_t x660 = -1;

    t26 = (x657>>((x658<=x659)+x660));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x685 = 11137386U;
	int16_t x686 = INT16_MIN;
	volatile uint8_t x687 = 0U;
	uint64_t x688 = UINT64_MAX;
	static volatile uint32_t t27 = 3U;

    t27 = (x685>>((x686<=x687)+x688));

    if (t27 != 11137386U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x689 = UINT32_MAX;
	uint64_t x690 = 7293772537126682946LLU;
	static int8_t x691 = INT8_MIN;
	int8_t x692 = 6;

    t28 = (x689>>((x690<=x691)+x692));

    if (t28 != 33554431U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x722 = INT32_MIN;
	int8_t x723 = INT8_MIN;
	volatile int32_t x724 = -1;
	volatile uint32_t t29 = 0U;

    t29 = (x721>>((x722<=x723)+x724));

    if (t29 != 22U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x741 = UINT32_MAX;
	uint8_t x742 = UINT8_MAX;
	volatile int64_t x743 = -77196658LL;

    t30 = (x741>>((x742<=x743)+x744));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x753 = 14681U;
	int16_t x754 = 26;
	int32_t x755 = -1;
	int32_t t31 = 27;

    t31 = (x753>>((x754<=x755)+x756));

    if (t31 != 7340) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x765 = INT32_MAX;
	static volatile int8_t x766 = INT8_MAX;
	volatile uint64_t x767 = 461350835637LLU;
	int32_t t32 = INT32_MAX;

    t32 = (x765>>((x766<=x767)+x768));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x769 = 486;
	int8_t x770 = -55;
	volatile int8_t x771 = INT8_MAX;
	static int16_t x772 = -1;
	int32_t t33 = 10832937;

    t33 = (x769>>((x770<=x771)+x772));

    if (t33 != 486) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x785 = UINT64_MAX;
	uint64_t x786 = UINT64_MAX;
	uint8_t x788 = 53U;
	volatile uint64_t t34 = 23LLU;

    t34 = (x785>>((x786<=x787)+x788));

    if (t34 != 2047LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x809 = INT8_MAX;
	int64_t x810 = INT64_MIN;
	uint8_t x811 = 92U;
	static volatile int32_t t35 = -137373222;

    t35 = (x809>>((x810<=x811)+x812));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x845 = 3U;
	uint8_t x847 = 9U;

    t36 = (x845>>((x846<=x847)+x848));

    if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x849 = 2391;
	volatile int32_t x850 = -1;
	static int8_t x852 = 7;

    t37 = (x849>>((x850<=x851)+x852));

    if (t37 != 18) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1065 = UINT32_MAX;
	uint64_t x1066 = 870598LLU;
	volatile int64_t x1067 = INT64_MIN;
	uint32_t t38 = UINT32_MAX;

    t38 = (x1065>>((x1066<=x1067)+x1068));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1074 = -123498;
	volatile int64_t x1075 = 64959678151LL;
	uint32_t x1076 = 41U;
	volatile int64_t t39 = -17381967016167420LL;

    t39 = (x1073>>((x1074<=x1075)+x1076));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1110 = -1LL;
	volatile int8_t x1111 = INT8_MIN;
	uint8_t x1112 = 1U;

    t40 = (x1109>>((x1110<=x1111)+x1112));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1225 = INT8_MAX;
	int16_t x1226 = 0;
	uint16_t x1228 = 0U;
	volatile int32_t t41 = 14825080;

    t41 = (x1225>>((x1226<=x1227)+x1228));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x1241 = UINT16_MAX;
	uint32_t x1242 = 73854990U;
	int64_t x1244 = 0LL;
	int32_t t42 = -25;

    t42 = (x1241>>((x1242<=x1243)+x1244));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x1261 = 236644U;
	int8_t x1262 = 41;
	int32_t x1263 = 47;
	int64_t x1264 = 1LL;
	uint32_t t43 = 4U;

    t43 = (x1261>>((x1262<=x1263)+x1264));

    if (t43 != 59161U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1333 = 878;
	static uint16_t x1334 = 12712U;
	static int16_t x1335 = -16206;
	int32_t t44 = 863;

    t44 = (x1333>>((x1334<=x1335)+x1336));

    if (t44 != 878) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1349 = INT8_MAX;
	int32_t x1350 = INT32_MAX;
	int16_t x1351 = INT16_MIN;
	uint16_t x1352 = 3U;
	int32_t t45 = 18378161;

    t45 = (x1349>>((x1350<=x1351)+x1352));

    if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x1361 = UINT8_MAX;
	int32_t x1362 = -1;
	uint16_t x1364 = 24U;
	volatile int32_t t46 = -1018189;

    t46 = (x1361>>((x1362<=x1363)+x1364));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x1365 = UINT8_MAX;
	int16_t x1367 = INT16_MAX;

    t47 = (x1365>>((x1366<=x1367)+x1368));

    if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x1377 = INT64_MAX;
	int16_t x1379 = -1;
	static uint8_t x1380 = 4U;
	int64_t t48 = -38163006916253614LL;

    t48 = (x1377>>((x1378<=x1379)+x1380));

    if (t48 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x1405 = INT64_MAX;
	static int8_t x1408 = 20;
	int64_t t49 = 67620045318228LL;

    t49 = (x1405>>((x1406<=x1407)+x1408));

    if (t49 != 4398046511103LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1445 = 43U;
	uint8_t x1446 = 28U;
	uint8_t x1447 = UINT8_MAX;
	int8_t x1448 = -1;
	volatile int32_t t50 = 765025;

    t50 = (x1445>>((x1446<=x1447)+x1448));

    if (t50 != 43) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x1469 = UINT16_MAX;
	int64_t x1470 = 59663LL;
	uint32_t x1471 = UINT32_MAX;
	int8_t x1472 = 1;

    t51 = (x1469>>((x1470<=x1471)+x1472));

    if (t51 != 16383) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1481 = INT64_MAX;
	uint16_t x1482 = 3U;
	int16_t x1483 = -323;

    t52 = (x1481>>((x1482<=x1483)+x1484));

    if (t52 != 1073741823LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x1525 = 14622U;
	int16_t x1526 = INT16_MIN;
	volatile int64_t x1527 = -1LL;
	int32_t t53 = 46;

    t53 = (x1525>>((x1526<=x1527)+x1528));

    if (t53 != 14622) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x1558 = INT32_MIN;
	volatile int8_t x1559 = -1;
	int8_t x1560 = -1;
	volatile int32_t t54 = 1;

    t54 = (x1557>>((x1558<=x1559)+x1560));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1646 = 34631601U;
	static uint8_t x1647 = UINT8_MAX;
	static volatile uint64_t t55 = 0LLU;

    t55 = (x1645>>((x1646<=x1647)+x1648));

    if (t55 != 376LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x1653 = UINT8_MAX;
	volatile int64_t x1654 = INT64_MIN;
	static int64_t x1655 = 2101505305330509980LL;
	static uint8_t x1656 = 1U;
	static int32_t t56 = 7836362;

    t56 = (x1653>>((x1654<=x1655)+x1656));

    if (t56 != 63) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x1657 = 102U;
	int8_t x1658 = 14;
	volatile int16_t x1659 = INT16_MAX;
	uint64_t x1660 = UINT64_MAX;
	int32_t t57 = -235078703;

    t57 = (x1657>>((x1658<=x1659)+x1660));

    if (t57 != 102) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x1662 = UINT16_MAX;
	uint64_t x1663 = UINT64_MAX;
	uint8_t x1664 = 7U;

    t58 = (x1661>>((x1662<=x1663)+x1664));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x1690 = INT16_MIN;
	static volatile int32_t x1691 = -1563296;
	int8_t x1692 = 1;
	static volatile int32_t t59 = -382614332;

    t59 = (x1689>>((x1690<=x1691)+x1692));

    if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1737 = INT64_MAX;
	uint16_t x1738 = 154U;
	int8_t x1739 = INT8_MIN;

    t60 = (x1737>>((x1738<=x1739)+x1740));

    if (t60 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x1783 = 1091;
	uint16_t x1784 = 3U;

    t61 = (x1781>>((x1782<=x1783)+x1784));

    if (t61 != 268435455) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x1821 = 38U;
	uint32_t x1822 = 4343U;
	int8_t x1823 = INT8_MIN;
	uint8_t x1824 = 3U;
	int32_t t62 = -5;

    t62 = (x1821>>((x1822<=x1823)+x1824));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x1853 = 0LL;
	int32_t x1855 = INT32_MAX;
	int16_t x1856 = -1;
	static volatile int64_t t63 = 891726251409863608LL;

    t63 = (x1853>>((x1854<=x1855)+x1856));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x1857 = 0;
	int32_t x1858 = -1;
	static int8_t x1859 = 0;
	static int32_t x1860 = -1;
	int32_t t64 = 56025579;

    t64 = (x1857>>((x1858<=x1859)+x1860));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x1898 = INT64_MIN;
	volatile int32_t x1900 = -1;

    t65 = (x1897>>((x1898<=x1899)+x1900));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x1914 = INT64_MIN;
	int64_t x1915 = INT64_MAX;
	uint8_t x1916 = 7U;
	int32_t t66 = 668001;

    t66 = (x1913>>((x1914<=x1915)+x1916));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x1986 = 4U;
	int64_t x1987 = -3493798603873276338LL;
	uint16_t x1988 = 25U;
	volatile int32_t t67 = -1383;

    t67 = (x1985>>((x1986<=x1987)+x1988));

    if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x2029 = 106350536U;
	int32_t x2030 = -1739356;
	volatile int8_t x2031 = INT8_MIN;
	int64_t x2032 = -1LL;
	uint32_t t68 = 1889244U;

    t68 = (x2029>>((x2030<=x2031)+x2032));

    if (t68 != 106350536U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x2053 = 13U;
	int8_t x2056 = 1;

    t69 = (x2053>>((x2054<=x2055)+x2056));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2089 = INT8_MAX;
	uint8_t x2090 = UINT8_MAX;
	uint16_t x2092 = 3U;
	int32_t t70 = -1019;

    t70 = (x2089>>((x2090<=x2091)+x2092));

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2097 = 1098462545538LLU;
	volatile uint32_t x2098 = UINT32_MAX;
	int64_t x2099 = INT64_MIN;
	static uint8_t x2100 = 1U;

    t71 = (x2097>>((x2098<=x2099)+x2100));

    if (t71 != 549231272769LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x2173 = 127U;
	uint32_t x2174 = 478U;
	static uint64_t x2175 = UINT64_MAX;
	uint64_t x2176 = UINT64_MAX;
	static volatile int32_t t72 = -819038;

    t72 = (x2173>>((x2174<=x2175)+x2176));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x2205 = UINT8_MAX;
	uint16_t x2206 = 1U;
	uint8_t x2207 = 3U;
	int32_t x2208 = -1;
	volatile int32_t t73 = -2220;

    t73 = (x2205>>((x2206<=x2207)+x2208));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x2269 = 178693142097203840LL;
	static uint64_t x2271 = 49LLU;
	int64_t t74 = 605813LL;

    t74 = (x2269>>((x2270<=x2271)+x2272));

    if (t74 != 11168321381075240LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2279 = 10U;
	uint64_t x2280 = 3LLU;
	static int32_t t75 = 42;

    t75 = (x2277>>((x2278<=x2279)+x2280));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2326 = INT16_MAX;
	uint32_t x2327 = UINT32_MAX;
	static int64_t x2328 = -1LL;
	uint32_t t76 = UINT32_MAX;

    t76 = (x2325>>((x2326<=x2327)+x2328));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x2389 = 2028372674U;
	int64_t x2390 = INT64_MIN;
	int64_t x2391 = INT64_MIN;
	int16_t x2392 = -1;
	uint32_t t77 = 420893946U;

    t77 = (x2389>>((x2390<=x2391)+x2392));

    if (t77 != 2028372674U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x2433 = UINT8_MAX;
	int16_t x2434 = 3;
	volatile uint32_t x2435 = 2686U;
	volatile int8_t x2436 = -1;
	static volatile int32_t t78 = -7450;

    t78 = (x2433>>((x2434<=x2435)+x2436));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x2473 = INT8_MAX;
	int8_t x2474 = -1;
	uint8_t x2476 = 3U;
	static int32_t t79 = 12737;

    t79 = (x2473>>((x2474<=x2475)+x2476));

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x2553 = UINT8_MAX;
	uint32_t x2554 = 110160U;
	int8_t x2555 = 13;
	int32_t x2556 = 1;

    t80 = (x2553>>((x2554<=x2555)+x2556));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x2633 = 7U;
	static volatile int32_t x2634 = 9;
	int16_t x2635 = INT16_MAX;
	int32_t x2636 = -1;
	int32_t t81 = -2543;

    t81 = (x2633>>((x2634<=x2635)+x2636));

    if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x2657 = UINT32_MAX;
	volatile uint8_t x2658 = 1U;
	int8_t x2659 = 1;
	static volatile uint32_t t82 = UINT32_MAX;

    t82 = (x2657>>((x2658<=x2659)+x2660));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x2677 = 1518U;
	int8_t x2678 = INT8_MIN;
	uint16_t x2679 = 23075U;
	int8_t x2680 = 0;
	int32_t t83 = 159;

    t83 = (x2677>>((x2678<=x2679)+x2680));

    if (t83 != 759) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x2721 = 126021311849809LL;
	int16_t x2722 = INT16_MAX;
	static int16_t x2723 = INT16_MAX;
	int16_t x2724 = -1;

    t84 = (x2721>>((x2722<=x2723)+x2724));

    if (t84 != 126021311849809LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x2725 = INT32_MAX;
	int16_t x2726 = -1;
	int16_t x2727 = 0;
	int8_t x2728 = -1;
	int32_t t85 = INT32_MAX;

    t85 = (x2725>>((x2726<=x2727)+x2728));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x2773 = 1949U;
	static int64_t x2774 = -1LL;
	int32_t x2775 = -1;
	uint64_t x2776 = UINT64_MAX;
	uint32_t t86 = 211524U;

    t86 = (x2773>>((x2774<=x2775)+x2776));

    if (t86 != 1949U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x2830 = INT32_MIN;
	int32_t x2831 = INT32_MIN;
	static uint64_t x2832 = UINT64_MAX;
	int32_t t87 = 826;

    t87 = (x2829>>((x2830<=x2831)+x2832));

    if (t87 != 37) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2841 = 3;
	volatile uint32_t x2842 = UINT32_MAX;
	volatile uint32_t x2843 = 13815151U;
	int16_t x2844 = 7;
	static int32_t t88 = -55060893;

    t88 = (x2841>>((x2842<=x2843)+x2844));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2934 = INT32_MIN;
	int64_t x2936 = 0LL;
	int32_t t89 = 1;

    t89 = (x2933>>((x2934<=x2935)+x2936));

    if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x2941 = 0U;
	uint32_t x2942 = 29390U;
	volatile uint64_t x2943 = 138165477LLU;
	volatile uint16_t x2944 = 3U;
	static int32_t t90 = 33063;

    t90 = (x2941>>((x2942<=x2943)+x2944));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x3009 = 18LLU;
	uint64_t x3010 = 16504546306850LLU;
	int64_t x3011 = INT64_MAX;
	uint64_t x3012 = 0LLU;
	volatile uint64_t t91 = 67LLU;

    t91 = (x3009>>((x3010<=x3011)+x3012));

    if (t91 != 9LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x3033 = 1608910049847LLU;
	volatile int64_t x3034 = INT64_MIN;
	static int8_t x3036 = -1;
	uint64_t t92 = 1289641983953938LLU;

    t92 = (x3033>>((x3034<=x3035)+x3036));

    if (t92 != 1608910049847LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3042 = INT8_MIN;
	uint64_t x3044 = UINT64_MAX;
	static volatile uint64_t t93 = 8836006286LLU;

    t93 = (x3041>>((x3042<=x3043)+x3044));

    if (t93 != 95LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x3053 = UINT16_MAX;
	static int8_t x3055 = INT8_MAX;
	int32_t t94 = -7;

    t94 = (x3053>>((x3054<=x3055)+x3056));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x3062 = INT32_MAX;
	static int32_t x3063 = 139871;
	static volatile uint16_t x3064 = 12U;

    t95 = (x3061>>((x3062<=x3063)+x3064));

    if (t95 != 3U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x3069 = 0;
	static uint16_t x3070 = UINT16_MAX;
	uint16_t x3072 = 22U;
	int32_t t96 = 539;

    t96 = (x3069>>((x3070<=x3071)+x3072));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x3121 = INT64_MAX;
	int16_t x3122 = INT16_MIN;
	int16_t x3123 = 3;
	volatile int64_t t97 = -5281443785LL;

    t97 = (x3121>>((x3122<=x3123)+x3124));

    if (t97 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x3129 = 3766401554060LLU;
	int64_t x3130 = -1LL;
	static volatile int16_t x3132 = -1;
	uint64_t t98 = 20879710LLU;

    t98 = (x3129>>((x3130<=x3131)+x3132));

    if (t98 != 3766401554060LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x3141 = 2;
	uint32_t x3142 = 27102U;
	volatile uint16_t x3143 = 23013U;
	int16_t x3144 = 5;
	int32_t t99 = 12414;

    t99 = (x3141>>((x3142<=x3143)+x3144));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x3193 = UINT16_MAX;
	uint8_t x3194 = 94U;
	uint32_t x3196 = 8U;
	static volatile int32_t t100 = -227;

    t100 = (x3193>>((x3194<=x3195)+x3196));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x3205 = 9225112U;
	int16_t x3206 = INT16_MIN;
	int8_t x3207 = 1;
	int32_t x3208 = -1;
	uint32_t t101 = 363U;

    t101 = (x3205>>((x3206<=x3207)+x3208));

    if (t101 != 9225112U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x3242 = INT32_MIN;
	uint8_t x3244 = 5U;

    t102 = (x3241>>((x3242<=x3243)+x3244));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x3249 = 3398LLU;
	int32_t x3250 = -21603;
	int16_t x3251 = INT16_MIN;
	static uint16_t x3252 = 59U;

    t103 = (x3249>>((x3250<=x3251)+x3252));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x3297 = 5231315331514LL;
	int8_t x3299 = -12;
	uint16_t x3300 = 4U;
	static volatile int64_t t104 = -497910839962043159LL;

    t104 = (x3297>>((x3298<=x3299)+x3300));

    if (t104 != 326957208219LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3317 = 17;
	static uint64_t x3318 = 37428278159LLU;
	int8_t x3320 = -1;
	volatile int32_t t105 = 6179;

    t105 = (x3317>>((x3318<=x3319)+x3320));

    if (t105 != 17) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x3333 = 0;
	int32_t x3334 = -1;
	uint32_t x3336 = 5U;
	int32_t t106 = -1167;

    t106 = (x3333>>((x3334<=x3335)+x3336));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x3397 = 9919044443498LLU;
	volatile int32_t x3398 = INT32_MIN;
	int32_t x3399 = INT32_MAX;
	uint32_t x3400 = UINT32_MAX;
	volatile uint64_t t107 = 12488LLU;

    t107 = (x3397>>((x3398<=x3399)+x3400));

    if (t107 != 9919044443498LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x3405 = 517;
	int16_t x3406 = -1;
	uint8_t x3407 = 1U;
	uint8_t x3408 = 9U;

    t108 = (x3405>>((x3406<=x3407)+x3408));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x3437 = UINT64_MAX;
	volatile uint64_t x3438 = UINT64_MAX;
	int64_t x3440 = -1LL;
	uint64_t t109 = UINT64_MAX;

    t109 = (x3437>>((x3438<=x3439)+x3440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3457 = 101222234650555398LLU;
	int32_t x3459 = 217;
	int8_t x3460 = 10;
	volatile uint64_t t110 = 69675378081159923LLU;

    t110 = (x3457>>((x3458<=x3459)+x3460));

    if (t110 != 98849838525933LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x3465 = 2739754479489646747LLU;
	uint8_t x3466 = UINT8_MAX;
	static int16_t x3467 = INT16_MAX;
	int16_t x3468 = -1;
	volatile uint64_t t111 = 9866LLU;

    t111 = (x3465>>((x3466<=x3467)+x3468));

    if (t111 != 2739754479489646747LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x3537 = UINT64_MAX;
	static int8_t x3538 = INT8_MIN;
	volatile int16_t x3539 = -1;
	static int16_t x3540 = -1;
	volatile uint64_t t112 = UINT64_MAX;

    t112 = (x3537>>((x3538<=x3539)+x3540));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x3549 = INT64_MAX;
	uint64_t x3550 = UINT64_MAX;
	static int8_t x3551 = -1;
	volatile uint8_t x3552 = 2U;
	volatile int64_t t113 = 104048525178148441LL;

    t113 = (x3549>>((x3550<=x3551)+x3552));

    if (t113 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3573 = 1673;
	int64_t x3574 = INT64_MIN;
	uint64_t x3576 = UINT64_MAX;

    t114 = (x3573>>((x3574<=x3575)+x3576));

    if (t114 != 1673) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3597 = INT8_MAX;
	int16_t x3599 = 10664;
	static uint8_t x3600 = 1U;
	int32_t t115 = -19;

    t115 = (x3597>>((x3598<=x3599)+x3600));

    if (t115 != 31) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x3625 = UINT16_MAX;
	static int32_t x3627 = 158410894;
	static int64_t x3628 = -1LL;
	volatile int32_t t116 = 3096;

    t116 = (x3625>>((x3626<=x3627)+x3628));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x3653 = 17U;
	uint32_t x3654 = UINT32_MAX;
	uint64_t x3655 = UINT64_MAX;
	static int8_t x3656 = 22;
	int32_t t117 = 104347;

    t117 = (x3653>>((x3654<=x3655)+x3656));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x3657 = 288U;
	volatile uint16_t x3658 = 9U;
	static volatile int8_t x3659 = INT8_MAX;
	static int8_t x3660 = -1;

    t118 = (x3657>>((x3658<=x3659)+x3660));

    if (t118 != 288) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x3673 = UINT32_MAX;
	int64_t x3675 = INT64_MAX;
	int8_t x3676 = 18;
	uint32_t t119 = 115187491U;

    t119 = (x3673>>((x3674<=x3675)+x3676));

    if (t119 != 8191U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x3709 = 150U;
	uint8_t x3711 = UINT8_MAX;
	static int8_t x3712 = 1;
	static volatile uint32_t t120 = 539548U;

    t120 = (x3709>>((x3710<=x3711)+x3712));

    if (t120 != 37U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x3737 = 2U;
	int32_t x3738 = INT32_MIN;
	int32_t x3739 = -1;
	uint16_t x3740 = 0U;

    t121 = (x3737>>((x3738<=x3739)+x3740));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x3757 = 3U;
	int64_t x3758 = 108346606329788LL;
	static int16_t x3759 = INT16_MIN;
	uint16_t x3760 = 5U;
	volatile int32_t t122 = 187074;

    t122 = (x3757>>((x3758<=x3759)+x3760));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x3794 = -1;
	int8_t x3795 = -1;
	int64_t x3796 = -1LL;

    t123 = (x3793>>((x3794<=x3795)+x3796));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x3817 = 18592U;
	int8_t x3820 = 0;
	volatile int32_t t124 = 1;

    t124 = (x3817>>((x3818<=x3819)+x3820));

    if (t124 != 9296) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x3909 = 2;
	int8_t x3911 = -1;
	int8_t x3912 = 3;
	int32_t t125 = -507084;

    t125 = (x3909>>((x3910<=x3911)+x3912));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x3925 = 1359U;
	volatile int8_t x3926 = -1;
	int8_t x3927 = -1;
	static int32_t t126 = -4;

    t126 = (x3925>>((x3926<=x3927)+x3928));

    if (t126 != 1359) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x3949 = 5132929666LLU;
	static uint64_t x3950 = 1566888LLU;
	int8_t x3952 = 46;
	static volatile uint64_t t127 = 113LLU;

    t127 = (x3949>>((x3950<=x3951)+x3952));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x4105 = UINT64_MAX;
	volatile int64_t x4107 = -1LL;
	uint64_t t128 = UINT64_MAX;

    t128 = (x4105>>((x4106<=x4107)+x4108));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x4113 = INT64_MAX;
	volatile int16_t x4114 = 492;
	uint64_t x4115 = 4296LLU;
	int64_t t129 = 151LL;

    t129 = (x4113>>((x4114<=x4115)+x4116));

    if (t129 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x4221 = 57U;
	int8_t x4222 = -12;
	uint64_t x4223 = UINT64_MAX;
	int8_t x4224 = -1;
	volatile uint32_t t130 = 5056887U;

    t130 = (x4221>>((x4222<=x4223)+x4224));

    if (t130 != 57U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x4225 = 961U;
	static int64_t x4226 = INT64_MIN;
	static uint32_t x4227 = UINT32_MAX;
	static int32_t x4228 = -1;
	uint32_t t131 = 0U;

    t131 = (x4225>>((x4226<=x4227)+x4228));

    if (t131 != 961U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x4257 = 2070973U;
	int32_t x4259 = INT32_MIN;
	int16_t x4260 = 0;
	volatile uint32_t t132 = 76526550U;

    t132 = (x4257>>((x4258<=x4259)+x4260));

    if (t132 != 2070973U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x4389 = UINT16_MAX;
	uint8_t x4391 = 18U;
	static uint16_t x4392 = 4U;

    t133 = (x4389>>((x4390<=x4391)+x4392));

    if (t133 != 4095) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x4397 = UINT16_MAX;
	volatile uint64_t x4399 = UINT64_MAX;
	int64_t x4400 = 28LL;
	int32_t t134 = -7262945;

    t134 = (x4397>>((x4398<=x4399)+x4400));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x4402 = UINT64_MAX;
	int8_t x4403 = INT8_MIN;
	uint8_t x4404 = 0U;
	int32_t t135 = -40;

    t135 = (x4401>>((x4402<=x4403)+x4404));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x4405 = 1707620127872LL;
	uint16_t x4407 = UINT16_MAX;
	int8_t x4408 = 16;

    t136 = (x4405>>((x4406<=x4407)+x4408));

    if (t136 != 13028107LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x4445 = UINT32_MAX;
	volatile uint32_t x4446 = UINT32_MAX;
	uint64_t x4447 = 113702809387807LLU;
	static uint32_t x4448 = UINT32_MAX;
	uint32_t t137 = UINT32_MAX;

    t137 = (x4445>>((x4446<=x4447)+x4448));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x4485 = 37170218374LL;
	int8_t x4486 = INT8_MIN;
	int8_t x4488 = -1;
	volatile int64_t t138 = 100159677LL;

    t138 = (x4485>>((x4486<=x4487)+x4488));

    if (t138 != 37170218374LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x4548 = 1;
	int64_t t139 = 8173739303602272LL;

    t139 = (x4545>>((x4546<=x4547)+x4548));

    if (t139 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x4557 = 61U;
	static int8_t x4558 = 1;
	volatile uint64_t x4559 = UINT64_MAX;
	static uint16_t x4560 = 1U;
	volatile int32_t t140 = 28;

    t140 = (x4557>>((x4558<=x4559)+x4560));

    if (t140 != 15) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4561 = INT32_MAX;
	int8_t x4562 = -1;
	int64_t x4563 = -1LL;
	uint8_t x4564 = 9U;
	int32_t t141 = 3;

    t141 = (x4561>>((x4562<=x4563)+x4564));

    if (t141 != 2097151) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x4594 = -412;
	int64_t x4595 = INT64_MAX;
	int32_t t142 = -136951;

    t142 = (x4593>>((x4594<=x4595)+x4596));

    if (t142 != 6953) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x4617 = UINT64_MAX;
	int32_t x4618 = -1;
	int16_t x4619 = 132;
	static uint8_t x4620 = 5U;
	static volatile uint64_t t143 = 9LLU;

    t143 = (x4617>>((x4618<=x4619)+x4620));

    if (t143 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4645 = INT16_MAX;
	uint16_t x4646 = 2039U;
	int32_t x4647 = INT32_MIN;
	volatile int64_t x4648 = 29LL;
	volatile int32_t t144 = -30;

    t144 = (x4645>>((x4646<=x4647)+x4648));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x4693 = UINT32_MAX;
	uint8_t x4694 = 11U;
	static volatile int16_t x4696 = -1;
	uint32_t t145 = UINT32_MAX;

    t145 = (x4693>>((x4694<=x4695)+x4696));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x4697 = UINT32_MAX;
	int8_t x4698 = -1;
	int8_t x4700 = -1;
	uint32_t t146 = UINT32_MAX;

    t146 = (x4697>>((x4698<=x4699)+x4700));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x4733 = 1U;
	static volatile int32_t x4734 = -3626;
	uint32_t x4735 = UINT32_MAX;
	int32_t x4736 = -1;
	volatile int32_t t147 = 1034173177;

    t147 = (x4733>>((x4734<=x4735)+x4736));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x4741 = INT8_MAX;
	static int16_t x4742 = 3508;
	volatile int32_t x4743 = INT32_MIN;
	volatile int32_t t148 = -636403;

    t148 = (x4741>>((x4742<=x4743)+x4744));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x4773 = UINT32_MAX;
	uint16_t x4775 = 2068U;
	volatile uint32_t t149 = 1U;

    t149 = (x4773>>((x4774<=x4775)+x4776));

    if (t149 != 1073741823U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x4782 = -1;
	volatile uint32_t x4783 = UINT32_MAX;
	volatile uint64_t x4784 = UINT64_MAX;

    t150 = (x4781>>((x4782<=x4783)+x4784));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x4785 = INT64_MAX;
	int16_t x4786 = -1;
	uint8_t x4787 = 14U;

    t151 = (x4785>>((x4786<=x4787)+x4788));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x4794 = INT32_MIN;
	static int64_t x4795 = INT64_MIN;
	int8_t x4796 = 0;

    t152 = (x4793>>((x4794<=x4795)+x4796));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x4809 = 2149297LL;
	int16_t x4810 = -1;
	int32_t x4811 = -1;
	uint8_t x4812 = 0U;
	volatile int64_t t153 = 356LL;

    t153 = (x4809>>((x4810<=x4811)+x4812));

    if (t153 != 1074648LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x4869 = 28265U;
	int64_t x4870 = -5112103LL;
	int8_t x4871 = -13;
	volatile uint32_t x4872 = UINT32_MAX;

    t154 = (x4869>>((x4870<=x4871)+x4872));

    if (t154 != 28265) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x4877 = UINT64_MAX;
	int32_t x4878 = INT32_MIN;
	volatile int64_t x4879 = -94136787367114LL;
	int8_t x4880 = 0;

    t155 = (x4877>>((x4878<=x4879)+x4880));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x4897 = 7;
	int32_t x4898 = -4040461;
	volatile int32_t x4899 = INT32_MAX;
	volatile uint16_t x4900 = 2U;

    t156 = (x4897>>((x4898<=x4899)+x4900));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x4914 = 503952;
	static uint32_t x4915 = 151931222U;
	static uint16_t x4916 = 7U;

    t157 = (x4913>>((x4914<=x4915)+x4916));

    if (t157 != 8388607) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x4949 = 327;
	static volatile int16_t x4952 = 1;
	int32_t t158 = 81128209;

    t158 = (x4949>>((x4950<=x4951)+x4952));

    if (t158 != 81) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x4954 = INT64_MIN;
	uint32_t x4956 = UINT32_MAX;
	static int64_t t159 = INT64_MAX;

    t159 = (x4953>>((x4954<=x4955)+x4956));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x4966 = INT8_MIN;
	int16_t x4967 = INT16_MIN;
	volatile int8_t x4968 = 3;
	uint64_t t160 = 64361016508LLU;

    t160 = (x4965>>((x4966<=x4967)+x4968));

    if (t160 != 968244638LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4985 = 0LLU;
	uint8_t x4987 = UINT8_MAX;
	uint64_t x4988 = UINT64_MAX;
	uint64_t t161 = 1242459351682LLU;

    t161 = (x4985>>((x4986<=x4987)+x4988));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x5026 = 0U;
	uint64_t x5027 = 1380375337657274852LLU;
	uint32_t x5028 = UINT32_MAX;
	static volatile uint32_t t162 = UINT32_MAX;

    t162 = (x5025>>((x5026<=x5027)+x5028));

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x5089 = 0;
	volatile int32_t x5090 = -878;
	uint8_t x5091 = 1U;
	int16_t x5092 = 0;

    t163 = (x5089>>((x5090<=x5091)+x5092));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x5106 = 0U;
	int32_t t164 = -2;

    t164 = (x5105>>((x5106<=x5107)+x5108));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x5109 = UINT32_MAX;
	volatile uint32_t x5110 = 98U;
	int32_t x5111 = INT32_MAX;
	volatile uint64_t x5112 = UINT64_MAX;

    t165 = (x5109>>((x5110<=x5111)+x5112));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x5141 = 1687332099920502014LL;
	uint8_t x5142 = UINT8_MAX;
	volatile int64_t t166 = 1LL;

    t166 = (x5141>>((x5142<=x5143)+x5144));

    if (t166 != 102986578364288LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x5185 = 81U;
	static int8_t x5186 = -63;
	volatile int64_t x5187 = INT64_MAX;
	int16_t x5188 = 3;
	static volatile int32_t t167 = -19125944;

    t167 = (x5185>>((x5186<=x5187)+x5188));

    if (t167 != 5) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x5245 = UINT32_MAX;
	volatile int16_t x5246 = -37;
	uint64_t x5247 = UINT64_MAX;
	static volatile int64_t x5248 = -1LL;
	uint32_t t168 = UINT32_MAX;

    t168 = (x5245>>((x5246<=x5247)+x5248));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x5313 = 9U;
	int64_t x5314 = INT64_MIN;
	int8_t x5315 = INT8_MAX;
	uint16_t x5316 = 4U;
	static volatile int32_t t169 = 5196004;

    t169 = (x5313>>((x5314<=x5315)+x5316));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5358 = INT32_MIN;
	int64_t x5359 = -565LL;
	static uint8_t x5360 = 1U;
	int32_t t170 = -278;

    t170 = (x5357>>((x5358<=x5359)+x5360));

    if (t170 != 24) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x5373 = UINT32_MAX;
	int8_t x5374 = -33;
	static volatile int16_t x5376 = -1;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = (x5373>>((x5374<=x5375)+x5376));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x5381 = UINT16_MAX;
	volatile int8_t x5382 = -1;
	volatile int64_t x5383 = INT64_MAX;
	uint16_t x5384 = 1U;
	static int32_t t172 = -9793;

    t172 = (x5381>>((x5382<=x5383)+x5384));

    if (t172 != 16383) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x5393 = 535U;
	static int8_t x5394 = INT8_MIN;
	volatile int8_t x5395 = INT8_MAX;
	volatile uint32_t x5396 = 0U;
	volatile int32_t t173 = 14345;

    t173 = (x5393>>((x5394<=x5395)+x5396));

    if (t173 != 267) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x5419 = INT32_MIN;
	volatile uint16_t x5420 = 6U;

    t174 = (x5417>>((x5418<=x5419)+x5420));

    if (t174 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x5441 = 5U;
	volatile uint32_t x5442 = 1487895019U;
	uint32_t x5443 = UINT32_MAX;
	int8_t x5444 = -1;
	volatile int32_t t175 = 0;

    t175 = (x5441>>((x5442<=x5443)+x5444));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x5449 = UINT16_MAX;
	volatile uint8_t x5450 = UINT8_MAX;
	uint32_t x5451 = UINT32_MAX;
	volatile int32_t x5452 = 11;
	int32_t t176 = -43101;

    t176 = (x5449>>((x5450<=x5451)+x5452));

    if (t176 != 15) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x5469 = 3;
	int64_t x5471 = INT64_MAX;
	uint32_t x5472 = 0U;
	static volatile int32_t t177 = -65032;

    t177 = (x5469>>((x5470<=x5471)+x5472));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x5477 = 13352U;
	static uint32_t x5478 = UINT32_MAX;
	static uint16_t x5479 = 24U;
	int8_t x5480 = 0;
	static int32_t t178 = 519;

    t178 = (x5477>>((x5478<=x5479)+x5480));

    if (t178 != 13352) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x5502 = INT64_MAX;
	volatile uint16_t x5503 = 3U;

    t179 = (x5501>>((x5502<=x5503)+x5504));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x5525 = 1454U;
	static uint32_t x5526 = 100698893U;
	int8_t x5527 = INT8_MIN;
	static int16_t x5528 = 0;
	static volatile uint32_t t180 = 8559U;

    t180 = (x5525>>((x5526<=x5527)+x5528));

    if (t180 != 727U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x5533 = 7348855513644777LL;
	volatile int32_t x5534 = INT32_MIN;
	int64_t x5535 = -1LL;
	int8_t x5536 = -1;
	volatile int64_t t181 = -923LL;

    t181 = (x5533>>((x5534<=x5535)+x5536));

    if (t181 != 7348855513644777LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x5541 = 121595659029103116LLU;
	uint32_t x5543 = 15855U;
	uint64_t x5544 = UINT64_MAX;
	uint64_t t182 = 140353LLU;

    t182 = (x5541>>((x5542<=x5543)+x5544));

    if (t182 != 121595659029103116LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x5569 = UINT16_MAX;
	uint16_t x5570 = 0U;
	volatile uint16_t x5572 = 12U;
	static int32_t t183 = -442704;

    t183 = (x5569>>((x5570<=x5571)+x5572));

    if (t183 != 7) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x5629 = UINT16_MAX;
	int32_t x5630 = INT32_MIN;
	static uint64_t x5631 = 1305345LLU;
	uint16_t x5632 = 0U;
	int32_t t184 = 55526;

    t184 = (x5629>>((x5630<=x5631)+x5632));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5638 = -1;
	volatile uint64_t x5639 = 12446908471LLU;
	uint8_t x5640 = 1U;
	volatile int32_t t185 = 483594;

    t185 = (x5637>>((x5638<=x5639)+x5640));

    if (t185 != 1549) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x5666 = INT32_MIN;
	int8_t x5667 = INT8_MIN;
	int8_t x5668 = 0;
	static int32_t t186 = -335972553;

    t186 = (x5665>>((x5666<=x5667)+x5668));

    if (t186 != 16383) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x5709 = 4311267615815581LLU;
	int64_t x5710 = -1LL;

    t187 = (x5709>>((x5710<=x5711)+x5712));

    if (t187 != 4311267615815581LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x5714 = 693LL;
	static uint32_t x5716 = 7U;

    t188 = (x5713>>((x5714<=x5715)+x5716));

    if (t188 != 15547753LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x5750 = INT8_MAX;
	static volatile int32_t x5751 = -34733;
	int8_t x5752 = 0;
	int32_t t189 = 33;

    t189 = (x5749>>((x5750<=x5751)+x5752));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x5753 = 28258104756398564LLU;
	uint32_t x5754 = 0U;
	volatile int16_t x5755 = 1907;
	uint64_t t190 = 327864793LLU;

    t190 = (x5753>>((x5754<=x5755)+x5756));

    if (t190 != 13474514368LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x5789 = INT16_MAX;
	int32_t x5791 = -471878352;
	uint32_t x5792 = UINT32_MAX;
	int32_t t191 = -579586895;

    t191 = (x5789>>((x5790<=x5791)+x5792));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x5825 = 0U;
	uint64_t x5826 = UINT64_MAX;
	static int8_t x5827 = INT8_MIN;
	volatile int32_t t192 = -837217030;

    t192 = (x5825>>((x5826<=x5827)+x5828));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x5861 = 1747U;
	uint32_t x5862 = 59035493U;
	int64_t x5863 = 1125115941818866LL;
	volatile uint64_t x5864 = UINT64_MAX;
	int32_t t193 = -61933;

    t193 = (x5861>>((x5862<=x5863)+x5864));

    if (t193 != 1747) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x5874 = INT16_MIN;
	int64_t x5875 = -1LL;
	uint16_t x5876 = 3U;

    t194 = (x5873>>((x5874<=x5875)+x5876));

    if (t194 != 2047) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x6005 = 18U;
	int16_t x6007 = INT16_MAX;
	volatile uint16_t x6008 = 1U;
	static volatile int32_t t195 = -74150;

    t195 = (x6005>>((x6006<=x6007)+x6008));

    if (t195 != 9) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x6010 = -1;
	uint64_t x6011 = UINT64_MAX;
	uint64_t t196 = 282LLU;

    t196 = (x6009>>((x6010<=x6011)+x6012));

    if (t196 != 1172472LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x6029 = 29595240534LL;
	int64_t t197 = -143091061LL;

    t197 = (x6029>>((x6030<=x6031)+x6032));

    if (t197 != 29595240534LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x6073 = UINT32_MAX;
	int32_t x6074 = 48;
	uint8_t x6075 = 21U;

    t198 = (x6073>>((x6074<=x6075)+x6076));

    if (t198 != 268435455U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x6111 = 41U;
	uint8_t x6112 = 5U;
	volatile uint64_t t199 = 111LLU;

    t199 = (x6109>>((x6110<=x6111)+x6112));

    if (t199 != 288230376151711743LLU) { NG(); } else { ; }
	
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

