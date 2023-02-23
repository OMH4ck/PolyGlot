
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

uint64_t x1 = 28744599230360LLU;
uint64_t t0 = 43529943121448361LLU;
volatile uint32_t t1 = 25U;
uint32_t x167 = 6934173U;
int32_t x353 = INT32_MAX;
uint64_t x434 = 14LLU;
static int8_t x474 = INT8_MIN;
int64_t x476 = INT64_MIN;
uint64_t x516 = UINT64_MAX;
uint16_t x566 = 29U;
static uint8_t x568 = 2U;
uint64_t x642 = 121844034706916LLU;
static volatile int16_t x687 = INT16_MAX;
uint64_t x747 = UINT64_MAX;
int8_t x751 = 30;
int32_t x806 = 53176272;
int64_t x851 = -1LL;
volatile int32_t x852 = -1;
uint64_t x913 = UINT64_MAX;
volatile int16_t x916 = -1;
volatile uint64_t x1028 = UINT64_MAX;
volatile int32_t x1033 = 62;
static int8_t x1035 = INT8_MAX;
int32_t t20 = 442964;
uint8_t x1043 = 43U;
uint32_t t23 = 25153U;
int16_t x1172 = -1;
static uint32_t t26 = 173825U;
static int16_t x1230 = -1;
static volatile int32_t t30 = -7;
int32_t x1365 = INT32_MAX;
int64_t x1366 = INT64_MIN;
volatile int32_t t37 = -706400;
uint64_t x1904 = UINT64_MAX;
int64_t x2169 = INT64_MAX;
int16_t x2172 = -1;
volatile int8_t x2318 = 1;
uint16_t x2537 = 1505U;
static volatile int32_t t42 = 1;
int32_t x2683 = INT32_MAX;
volatile uint32_t t45 = UINT32_MAX;
volatile uint16_t x2906 = 1U;
int8_t x2936 = INT8_MIN;
volatile int32_t t49 = 870;
volatile uint16_t x2982 = 363U;
int8_t x3035 = 1;
static volatile int32_t t54 = 148414578;
int8_t x3090 = INT8_MAX;
static volatile int16_t x3116 = -1;
int32_t x3139 = INT32_MIN;
static uint64_t x3193 = 7040314677LLU;
uint32_t x3194 = 1U;
int16_t x3195 = INT16_MIN;
static uint64_t x3196 = UINT64_MAX;
int64_t x3329 = INT64_MAX;
uint32_t x3332 = UINT32_MAX;
uint16_t x3365 = 27U;
uint64_t x3366 = 3214991870505885LLU;
int64_t x3367 = INT64_MIN;
uint16_t x3378 = UINT16_MAX;
static int32_t t61 = 239431066;
int8_t x3462 = INT8_MAX;
static volatile int32_t t62 = 19862;
static int32_t x3623 = -409902;
volatile int32_t t68 = 213;
uint8_t x3758 = UINT8_MAX;
volatile int16_t x3953 = INT16_MAX;
uint32_t x4021 = 2U;
static uint8_t x4022 = 2U;
uint16_t x4049 = 5U;
uint8_t x4181 = UINT8_MAX;
int32_t t77 = -407;
int64_t x4223 = INT64_MIN;
uint64_t t78 = 556936010537755LLU;
volatile int32_t t81 = -206;
volatile uint8_t x4373 = UINT8_MAX;
uint32_t x4375 = 740U;
uint8_t x4530 = 1U;
int32_t t83 = 13;
volatile uint16_t x4540 = UINT16_MAX;
static volatile int32_t t85 = 1;
static int64_t x4616 = -7LL;
uint8_t x4677 = 124U;
int64_t x4707 = INT64_MIN;
int8_t x4726 = INT8_MIN;
uint16_t x4727 = 2U;
int8_t x4728 = 0;
volatile int16_t x4757 = INT16_MAX;
int32_t t92 = -2332;
int16_t x4952 = -1;
volatile int64_t x5077 = 59947690608010125LL;
static volatile int8_t x5078 = 44;
int8_t x5080 = -1;
uint8_t x5193 = 1U;
int32_t x5194 = -1;
uint8_t x5238 = 1U;
int64_t x5239 = -1LL;
uint64_t x5289 = UINT64_MAX;
int32_t t101 = -3578;
uint16_t x5584 = 0U;
int64_t x5624 = INT64_MIN;
uint8_t x5677 = 2U;
int16_t x5680 = INT16_MIN;
uint8_t x5709 = 61U;
volatile int32_t t107 = -2258;
int8_t x5761 = 3;
static volatile int64_t x5764 = -1LL;


void f0(void) {
    	int64_t x2 = -1LL;
	uint8_t x3 = 10U;
	int32_t x4 = -1;

    t0 = (x1>>((x2&x3)-x4));

    if (t0 != 14035448842LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x37 = UINT32_MAX;
	volatile int8_t x38 = 58;
	uint8_t x39 = 4U;
	int8_t x40 = -1;

    t1 = (x37>>((x38&x39)-x40));

    if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	uint64_t t2 = UINT64_MAX;

    t2 = (x113>>((x114&x115)-x116));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x165 = 1780U;
	volatile uint16_t x166 = 122U;
	uint8_t x168 = 3U;
	static int32_t t3 = 382;

    t3 = (x165>>((x166&x167)-x168));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x354 = 40959LLU;
	volatile int32_t x355 = INT32_MIN;
	static uint8_t x356 = 0U;
	static volatile int32_t t4 = INT32_MAX;

    t4 = (x353>>((x354&x355)-x356));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x433 = 2U;
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = -1;
	int32_t t5 = -4331;

    t5 = (x433>>((x434&x435)-x436));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x473 = 0;
	int64_t x475 = INT64_MIN;
	int32_t t6 = -104881;

    t6 = (x473>>((x474&x475)-x476));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x513 = UINT8_MAX;
	int8_t x514 = 1;
	static int64_t x515 = -7995938LL;
	int32_t t7 = -11616970;

    t7 = (x513>>((x514&x515)-x516));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x565 = 0U;
	volatile int64_t x567 = INT64_MAX;
	volatile int32_t t8 = -17957714;

    t8 = (x565>>((x566&x567)-x568));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x643 = 0;
	int32_t x644 = 0;
	volatile int32_t t9 = 1;

    t9 = (x641>>((x642&x643)-x644));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x685 = 0U;
	int64_t x686 = INT64_MIN;
	volatile int16_t x688 = 0;
	int32_t t10 = -1471174;

    t10 = (x685>>((x686&x687)-x688));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x709 = 10U;
	int32_t x710 = INT32_MIN;
	uint8_t x711 = 16U;
	static int8_t x712 = -1;
	int32_t t11 = -104;

    t11 = (x709>>((x710&x711)-x712));

    if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x746 = -1;
	int32_t x748 = -1;
	static volatile uint64_t t12 = UINT64_MAX;

    t12 = (x745>>((x746&x747)-x748));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x749 = 5;
	uint32_t x750 = 27473U;
	static uint8_t x752 = 11U;
	static int32_t t13 = -185841;

    t13 = (x749>>((x750&x751)-x752));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x805 = 5752557344799LL;
	uint16_t x807 = 5U;
	static volatile int64_t x808 = -1LL;
	static int64_t t14 = 3192LL;

    t14 = (x805>>((x806&x807)-x808));

    if (t14 != 2876278672399LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x849 = 208U;
	int16_t x850 = 0;
	int32_t t15 = -139588562;

    t15 = (x849>>((x850&x851)-x852));

    if (t15 != 104) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x881 = 3645083775879854237LLU;
	static volatile uint8_t x882 = UINT8_MAX;
	int64_t x883 = 22716366944296249LL;
	static int32_t x884 = -1;
	uint64_t t16 = 15167LLU;

    t16 = (x881>>((x882&x883)-x884));

    if (t16 != 12LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x914 = INT64_MIN;
	uint32_t x915 = UINT32_MAX;
	volatile uint64_t t17 = 13596858LLU;

    t17 = (x913>>((x914&x915)-x916));

    if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x989 = 2U;
	int64_t x990 = 1946434546LL;
	int8_t x991 = 5;
	volatile int32_t x992 = -1;
	volatile int32_t t18 = -157867;

    t18 = (x989>>((x990&x991)-x992));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1025 = UINT8_MAX;
	int16_t x1026 = INT16_MAX;
	static uint8_t x1027 = 1U;
	volatile int32_t t19 = -12420117;

    t19 = (x1025>>((x1026&x1027)-x1028));

    if (t19 != 63) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1034 = 44702859961391LL;
	volatile int8_t x1036 = 32;

    t20 = (x1033>>((x1034&x1035)-x1036));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x1041 = UINT64_MAX;
	int16_t x1042 = 709;
	static int32_t x1044 = -1;
	volatile uint64_t t21 = 272426650615LLU;

    t21 = (x1041>>((x1042&x1043)-x1044));

    if (t21 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x1117 = 398U;
	uint64_t x1118 = 0LLU;
	static int16_t x1119 = -1;
	static volatile int8_t x1120 = -29;
	int32_t t22 = -4635767;

    t22 = (x1117>>((x1118&x1119)-x1120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1141 = 22378871U;
	int32_t x1142 = -1;
	int8_t x1143 = 14;
	static int64_t x1144 = -1LL;

    t23 = (x1141>>((x1142&x1143)-x1144));

    if (t23 != 682U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1161 = INT64_MAX;
	int8_t x1162 = 41;
	int64_t x1163 = INT64_MIN;
	static int8_t x1164 = -1;
	volatile int64_t t24 = -31311065LL;

    t24 = (x1161>>((x1162&x1163)-x1164));

    if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x1169 = UINT32_MAX;
	uint32_t x1170 = 681708U;
	int64_t x1171 = INT64_MIN;
	uint32_t t25 = 15U;

    t25 = (x1169>>((x1170&x1171)-x1172));

    if (t25 != 2147483647U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1201 = 240718920U;
	static uint8_t x1202 = 19U;
	uint16_t x1203 = 3704U;
	static uint32_t x1204 = 0U;

    t26 = (x1201>>((x1202&x1203)-x1204));

    if (t26 != 3673U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1217 = 29LLU;
	int64_t x1218 = INT64_MAX;
	uint8_t x1219 = 118U;
	int16_t x1220 = 59;
	uint64_t t27 = 422650561092LLU;

    t27 = (x1217>>((x1218&x1219)-x1220));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1229 = 95510LLU;
	uint8_t x1231 = 20U;
	static int64_t x1232 = -1LL;
	volatile uint64_t t28 = 3779LLU;

    t28 = (x1229>>((x1230&x1231)-x1232));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1233 = 0U;
	static int64_t x1234 = -1LL;
	int32_t x1235 = -1;
	uint64_t x1236 = UINT64_MAX;
	int32_t t29 = -1849682;

    t29 = (x1233>>((x1234&x1235)-x1236));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1253 = 6446;
	volatile uint16_t x1254 = UINT16_MAX;
	int32_t x1255 = INT32_MIN;
	volatile int8_t x1256 = -3;

    t30 = (x1253>>((x1254&x1255)-x1256));

    if (t30 != 805) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x1293 = 20LL;
	volatile uint16_t x1294 = UINT16_MAX;
	uint8_t x1295 = 1U;
	int16_t x1296 = -12;
	int64_t t31 = 44854LL;

    t31 = (x1293>>((x1294&x1295)-x1296));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1367 = INT8_MIN;
	volatile int64_t x1368 = INT64_MIN;
	int32_t t32 = INT32_MAX;

    t32 = (x1365>>((x1366&x1367)-x1368));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1449 = 619908897U;
	static volatile uint64_t x1450 = 1669356LLU;
	int32_t x1451 = INT32_MIN;
	int8_t x1452 = -1;
	uint32_t t33 = 6U;

    t33 = (x1449>>((x1450&x1451)-x1452));

    if (t33 != 309954448U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1693 = 10673672025LLU;
	volatile uint16_t x1694 = 1U;
	int32_t x1695 = INT32_MIN;
	int16_t x1696 = -1;
	volatile uint64_t t34 = 6024979308554469252LLU;

    t34 = (x1693>>((x1694&x1695)-x1696));

    if (t34 != 5336836012LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1709 = 461155LLU;
	uint64_t x1710 = 1LLU;
	int8_t x1711 = -3;
	int16_t x1712 = -1;
	uint64_t t35 = 287LLU;

    t35 = (x1709>>((x1710&x1711)-x1712));

    if (t35 != 115288LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1721 = 1;
	int8_t x1722 = -51;
	int8_t x1723 = 2;
	static uint32_t x1724 = UINT32_MAX;
	int32_t t36 = 262456759;

    t36 = (x1721>>((x1722&x1723)-x1724));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x1797 = 73U;
	static volatile int8_t x1798 = 1;
	volatile int32_t x1799 = INT32_MIN;
	int64_t x1800 = -1LL;

    t37 = (x1797>>((x1798&x1799)-x1800));

    if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x1901 = 3461LLU;
	int8_t x1902 = -1;
	uint64_t x1903 = UINT64_MAX;
	volatile uint64_t t38 = 11099104548LLU;

    t38 = (x1901>>((x1902&x1903)-x1904));

    if (t38 != 3461LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2170 = 5LLU;
	volatile int32_t x2171 = -1;
	volatile int64_t t39 = 2LL;

    t39 = (x2169>>((x2170&x2171)-x2172));

    if (t39 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2201 = INT32_MAX;
	int64_t x2202 = INT64_MIN;
	int64_t x2203 = -1LL;
	int64_t x2204 = INT64_MIN;
	volatile int32_t t40 = INT32_MAX;

    t40 = (x2201>>((x2202&x2203)-x2204));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2317 = 183815;
	uint8_t x2319 = 120U;
	int16_t x2320 = -1;
	static int32_t t41 = -26729870;

    t41 = (x2317>>((x2318&x2319)-x2320));

    if (t41 != 91907) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x2538 = INT64_MAX;
	static int64_t x2539 = INT64_MIN;
	int16_t x2540 = -1;

    t42 = (x2537>>((x2538&x2539)-x2540));

    if (t42 != 752) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2617 = INT16_MAX;
	uint8_t x2618 = 1U;
	uint16_t x2619 = UINT16_MAX;
	uint32_t x2620 = UINT32_MAX;
	int32_t t43 = -689;

    t43 = (x2617>>((x2618&x2619)-x2620));

    if (t43 != 8191) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x2681 = 859;
	static int16_t x2682 = -1;
	int32_t x2684 = INT32_MAX;
	int32_t t44 = -20328914;

    t44 = (x2681>>((x2682&x2683)-x2684));

    if (t44 != 859) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x2697 = UINT32_MAX;
	int32_t x2698 = INT32_MIN;
	int8_t x2699 = INT8_MAX;
	int16_t x2700 = 0;

    t45 = (x2697>>((x2698&x2699)-x2700));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x2829 = INT16_MAX;
	static int32_t x2830 = INT32_MIN;
	static int8_t x2831 = INT8_MAX;
	volatile int8_t x2832 = -10;
	int32_t t46 = 3;

    t46 = (x2829>>((x2830&x2831)-x2832));

    if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2905 = 40001494LLU;
	int32_t x2907 = INT32_MAX;
	int32_t x2908 = -1;
	volatile uint64_t t47 = 105076LLU;

    t47 = (x2905>>((x2906&x2907)-x2908));

    if (t47 != 10000373LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x2925 = INT8_MAX;
	int8_t x2926 = -11;
	uint32_t x2927 = 1U;
	int8_t x2928 = 0;
	int32_t t48 = 11942301;

    t48 = (x2925>>((x2926&x2927)-x2928));

    if (t48 != 63) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2933 = INT16_MAX;
	int8_t x2934 = -13;
	int8_t x2935 = INT8_MIN;

    t49 = (x2933>>((x2934&x2935)-x2936));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x2973 = 230925080826664209LLU;
	uint64_t x2974 = 34143708565LLU;
	uint32_t x2975 = 4U;
	int64_t x2976 = -1LL;
	uint64_t t50 = 291883095397LLU;

    t50 = (x2973>>((x2974&x2975)-x2976));

    if (t50 != 7216408775833256LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2981 = 95;
	int16_t x2983 = INT16_MIN;
	uint32_t x2984 = UINT32_MAX;
	volatile int32_t t51 = 3;

    t51 = (x2981>>((x2982&x2983)-x2984));

    if (t51 != 47) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3033 = 22105U;
	volatile int32_t x3034 = -56751;
	static uint32_t x3036 = UINT32_MAX;
	static volatile uint32_t t52 = 1406066U;

    t52 = (x3033>>((x3034&x3035)-x3036));

    if (t52 != 5526U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3041 = UINT8_MAX;
	int64_t x3042 = INT64_MIN;
	static uint8_t x3043 = 27U;
	volatile int16_t x3044 = -6;
	volatile int32_t t53 = 1295;

    t53 = (x3041>>((x3042&x3043)-x3044));

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x3053 = UINT8_MAX;
	static int64_t x3054 = 1483005501789240LL;
	volatile uint16_t x3055 = 409U;
	int64_t x3056 = -1LL;

    t54 = (x3053>>((x3054&x3055)-x3056));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x3089 = INT8_MAX;
	static uint16_t x3091 = 4U;
	uint16_t x3092 = 0U;
	static volatile int32_t t55 = 247;

    t55 = (x3089>>((x3090&x3091)-x3092));

    if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3113 = 529135U;
	uint8_t x3114 = 2U;
	int64_t x3115 = INT64_MIN;
	static uint32_t t56 = 30U;

    t56 = (x3113>>((x3114&x3115)-x3116));

    if (t56 != 264567U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x3137 = 4;
	int16_t x3138 = INT16_MAX;
	int32_t x3140 = -1;
	volatile int32_t t57 = 2479357;

    t57 = (x3137>>((x3138&x3139)-x3140));

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t t58 = 277371885103524LLU;

    t58 = (x3193>>((x3194&x3195)-x3196));

    if (t58 != 3520157338LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x3330 = 6U;
	static int32_t x3331 = INT32_MAX;
	volatile int64_t t59 = 2280244470173649112LL;

    t59 = (x3329>>((x3330&x3331)-x3332));

    if (t59 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3368 = UINT64_MAX;
	volatile int32_t t60 = 6903;

    t60 = (x3365>>((x3366&x3367)-x3368));

    if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3377 = 113U;
	volatile uint8_t x3379 = 18U;
	int8_t x3380 = 0;

    t61 = (x3377>>((x3378&x3379)-x3380));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3461 = 341821679;
	volatile int32_t x3463 = INT32_MIN;
	int8_t x3464 = -1;

    t62 = (x3461>>((x3462&x3463)-x3464));

    if (t62 != 170910839) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x3469 = 34U;
	int32_t x3470 = 63;
	uint32_t x3471 = 111136513U;
	int8_t x3472 = 1;
	int32_t t63 = 0;

    t63 = (x3469>>((x3470&x3471)-x3472));

    if (t63 != 34) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x3517 = INT8_MAX;
	volatile int16_t x3518 = INT16_MIN;
	static uint64_t x3519 = 2LLU;
	uint64_t x3520 = UINT64_MAX;
	int32_t t64 = 93;

    t64 = (x3517>>((x3518&x3519)-x3520));

    if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3589 = INT64_MAX;
	volatile int32_t x3590 = INT32_MIN;
	uint16_t x3591 = 10978U;
	volatile int8_t x3592 = -37;
	int64_t t65 = -55806289LL;

    t65 = (x3589>>((x3590&x3591)-x3592));

    if (t65 != 67108863LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x3621 = 334537LLU;
	uint8_t x3622 = 4U;
	int32_t x3624 = -1;
	volatile uint64_t t66 = 7145LLU;

    t66 = (x3621>>((x3622&x3623)-x3624));

    if (t66 != 167268LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x3725 = 2U;
	int8_t x3726 = -1;
	uint32_t x3727 = UINT32_MAX;
	uint32_t x3728 = UINT32_MAX;
	volatile int32_t t67 = -58507960;

    t67 = (x3725>>((x3726&x3727)-x3728));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x3741 = 5486;
	static volatile int16_t x3742 = 15;
	static int8_t x3743 = INT8_MAX;
	int16_t x3744 = -1;

    t68 = (x3741>>((x3742&x3743)-x3744));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x3757 = INT64_MAX;
	volatile uint64_t x3759 = 1358382LLU;
	int16_t x3760 = 1;
	volatile int64_t t69 = -5270962529LL;

    t69 = (x3757>>((x3758&x3759)-x3760));

    if (t69 != 262143LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x3777 = UINT16_MAX;
	uint16_t x3778 = 17U;
	int16_t x3779 = 4180;
	uint16_t x3780 = 7U;
	volatile int32_t t70 = 794251773;

    t70 = (x3777>>((x3778&x3779)-x3780));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3937 = INT16_MAX;
	uint64_t x3938 = 0LLU;
	volatile int8_t x3939 = -1;
	uint8_t x3940 = 0U;
	volatile int32_t t71 = -2;

    t71 = (x3937>>((x3938&x3939)-x3940));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3954 = -1;
	int16_t x3955 = -1;
	volatile int16_t x3956 = -1;
	static volatile int32_t t72 = 120077;

    t72 = (x3953>>((x3954&x3955)-x3956));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x3981 = 1;
	volatile int16_t x3982 = INT16_MAX;
	volatile uint8_t x3983 = UINT8_MAX;
	static uint8_t x3984 = UINT8_MAX;
	int32_t t73 = 167;

    t73 = (x3981>>((x3982&x3983)-x3984));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4023 = -1;
	int8_t x4024 = -1;
	volatile uint32_t t74 = 150U;

    t74 = (x4021>>((x4022&x4023)-x4024));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x4050 = INT16_MAX;
	int32_t x4051 = INT32_MIN;
	int32_t x4052 = -1;
	volatile int32_t t75 = 15198;

    t75 = (x4049>>((x4050&x4051)-x4052));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x4081 = INT64_MAX;
	volatile uint64_t x4082 = 16LLU;
	uint8_t x4083 = 16U;
	int8_t x4084 = 1;
	int64_t t76 = -84LL;

    t76 = (x4081>>((x4082&x4083)-x4084));

    if (t76 != 281474976710655LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4182 = INT32_MIN;
	volatile int8_t x4183 = INT8_MIN;
	int32_t x4184 = INT32_MIN;

    t77 = (x4181>>((x4182&x4183)-x4184));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x4221 = 14418986461004057LLU;
	uint16_t x4222 = 4637U;
	int32_t x4224 = -1;

    t78 = (x4221>>((x4222&x4223)-x4224));

    if (t78 != 7209493230502028LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x4277 = INT32_MAX;
	uint8_t x4278 = 0U;
	int32_t x4279 = INT32_MAX;
	int32_t x4280 = -1;
	static volatile int32_t t79 = -36296969;

    t79 = (x4277>>((x4278&x4279)-x4280));

    if (t79 != 1073741823) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x4281 = 1;
	volatile int32_t x4282 = 105286452;
	uint16_t x4283 = 4U;
	uint8_t x4284 = 4U;
	static volatile int32_t t80 = 154;

    t80 = (x4281>>((x4282&x4283)-x4284));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4341 = 22U;
	int8_t x4342 = -1;
	int8_t x4343 = INT8_MIN;
	int8_t x4344 = INT8_MIN;

    t81 = (x4341>>((x4342&x4343)-x4344));

    if (t81 != 22) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x4374 = INT16_MIN;
	uint32_t x4376 = UINT32_MAX;
	volatile int32_t t82 = -56499101;

    t82 = (x4373>>((x4374&x4375)-x4376));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4529 = 0U;
	volatile int16_t x4531 = 1805;
	uint64_t x4532 = UINT64_MAX;

    t83 = (x4529>>((x4530&x4531)-x4532));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4537 = INT16_MAX;
	uint64_t x4538 = UINT64_MAX;
	uint16_t x4539 = UINT16_MAX;
	volatile int32_t t84 = -1104;

    t84 = (x4537>>((x4538&x4539)-x4540));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x4581 = 7;
	volatile uint64_t x4582 = 14910LLU;
	int8_t x4583 = 30;
	int8_t x4584 = 1;

    t85 = (x4581>>((x4582&x4583)-x4584));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x4613 = 23696U;
	int16_t x4614 = INT16_MIN;
	uint16_t x4615 = 0U;
	static uint32_t t86 = 91U;

    t86 = (x4613>>((x4614&x4615)-x4616));

    if (t86 != 185U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x4678 = INT8_MAX;
	int32_t x4679 = -2304;
	static volatile uint64_t x4680 = UINT64_MAX;
	int32_t t87 = 97284;

    t87 = (x4677>>((x4678&x4679)-x4680));

    if (t87 != 62) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x4705 = 0U;
	volatile uint16_t x4706 = 4349U;
	uint64_t x4708 = UINT64_MAX;
	volatile int32_t t88 = 91288488;

    t88 = (x4705>>((x4706&x4707)-x4708));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x4725 = 3;
	volatile int32_t t89 = 302795;

    t89 = (x4725>>((x4726&x4727)-x4728));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x4758 = INT8_MIN;
	int64_t x4759 = -1LL;
	static int8_t x4760 = INT8_MIN;
	volatile int32_t t90 = -128475619;

    t90 = (x4757>>((x4758&x4759)-x4760));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x4785 = 0U;
	uint32_t x4786 = 16886664U;
	int8_t x4787 = INT8_MAX;
	volatile uint8_t x4788 = 1U;
	int32_t t91 = 918555;

    t91 = (x4785>>((x4786&x4787)-x4788));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x4841 = INT16_MAX;
	int8_t x4842 = 3;
	int8_t x4843 = INT8_MAX;
	uint16_t x4844 = 0U;

    t92 = (x4841>>((x4842&x4843)-x4844));

    if (t92 != 4095) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x4949 = 6U;
	static int64_t x4950 = -1LL;
	int32_t x4951 = -1;
	int32_t t93 = 56987;

    t93 = (x4949>>((x4950&x4951)-x4952));

    if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x5069 = 30;
	static int32_t x5070 = INT32_MIN;
	int8_t x5071 = 6;
	int64_t x5072 = -1LL;
	int32_t t94 = 401854962;

    t94 = (x5069>>((x5070&x5071)-x5072));

    if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x5079 = INT32_MIN;
	static volatile int64_t t95 = -91748LL;

    t95 = (x5077>>((x5078&x5079)-x5080));

    if (t95 != 29973845304005062LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x5121 = 88589107209LL;
	int64_t x5122 = 12100857914LL;
	static uint8_t x5123 = UINT8_MAX;
	int64_t x5124 = -1LL;
	volatile int64_t t96 = 10LL;

    t96 = (x5121>>((x5122&x5123)-x5124));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x5195 = -1;
	int64_t x5196 = -26LL;
	int32_t t97 = -2087;

    t97 = (x5193>>((x5194&x5195)-x5196));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5237 = 4197U;
	static uint8_t x5240 = 0U;
	int32_t t98 = -32737860;

    t98 = (x5237>>((x5238&x5239)-x5240));

    if (t98 != 2098) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x5257 = 14U;
	int8_t x5258 = -1;
	uint8_t x5259 = 22U;
	int32_t x5260 = -1;
	static volatile int32_t t99 = 246;

    t99 = (x5257>>((x5258&x5259)-x5260));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x5290 = INT8_MAX;
	static uint64_t x5291 = 230257798707LLU;
	static volatile int16_t x5292 = -1;
	volatile uint64_t t100 = 3740LLU;

    t100 = (x5289>>((x5290&x5291)-x5292));

    if (t100 != 4095LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x5361 = INT8_MAX;
	int16_t x5362 = 23;
	int16_t x5363 = -2192;
	static int8_t x5364 = -1;

    t101 = (x5361>>((x5362&x5363)-x5364));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x5405 = 5154U;
	static uint16_t x5406 = UINT16_MAX;
	uint64_t x5407 = UINT64_MAX;
	volatile uint16_t x5408 = UINT16_MAX;
	volatile int32_t t102 = -946231097;

    t102 = (x5405>>((x5406&x5407)-x5408));

    if (t102 != 5154) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5429 = INT8_MAX;
	volatile uint32_t x5430 = UINT32_MAX;
	volatile uint16_t x5431 = 10U;
	int32_t x5432 = -19;
	static int32_t t103 = 0;

    t103 = (x5429>>((x5430&x5431)-x5432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x5581 = 24597994012350LLU;
	volatile uint32_t x5582 = 14U;
	int64_t x5583 = INT64_MIN;
	uint64_t t104 = 26064835484LLU;

    t104 = (x5581>>((x5582&x5583)-x5584));

    if (t104 != 24597994012350LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x5621 = UINT16_MAX;
	int32_t x5622 = INT32_MIN;
	int64_t x5623 = INT64_MIN;
	static int32_t t105 = -26;

    t105 = (x5621>>((x5622&x5623)-x5624));

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x5678 = INT16_MIN;
	int8_t x5679 = INT8_MIN;
	volatile int32_t t106 = -280430;

    t106 = (x5677>>((x5678&x5679)-x5680));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x5710 = -1;
	volatile int16_t x5711 = INT16_MIN;
	int16_t x5712 = INT16_MIN;

    t107 = (x5709>>((x5710&x5711)-x5712));

    if (t107 != 61) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x5762 = 18;
	int16_t x5763 = INT16_MAX;
	volatile int32_t t108 = 11265213;

    t108 = (x5761>>((x5762&x5763)-x5764));

    if (t108 != 0) { NG(); } else { ; }
	
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


    return 0;
}

