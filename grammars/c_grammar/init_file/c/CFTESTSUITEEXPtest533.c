
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

uint32_t x17 = 1958505U;
int8_t x29 = INT8_MIN;
int8_t x84 = 0;
volatile int8_t x94 = INT8_MAX;
uint8_t x193 = UINT8_MAX;
int64_t x196 = 6LL;
volatile int8_t x207 = -1;
volatile int64_t x215 = -2158889072076409208LL;
volatile int64_t x216 = 1LL;
int64_t x225 = -1LL;
int32_t x335 = -75;
static uint8_t x336 = 0U;
static volatile uint64_t x462 = 5162189193224LLU;
int8_t x464 = 4;
int8_t x487 = INT8_MAX;
int8_t x557 = INT8_MIN;
uint64_t x726 = UINT64_MAX;
uint32_t t18 = 27U;
int32_t x892 = 1;
static int64_t x1142 = 58318722LL;
uint64_t t22 = 186130092867999973LLU;
volatile int32_t x1153 = 19;
int16_t x1155 = -1;
volatile uint64_t x1254 = UINT64_MAX;
int8_t x1271 = -3;
static uint32_t x1272 = 11U;
int8_t x1330 = 0;
int64_t x1331 = INT64_MAX;
int32_t x1385 = 5151;
uint64_t x1386 = UINT64_MAX;
uint16_t x1388 = 0U;
int64_t t29 = -4167906586098501656LL;
uint32_t x1654 = 192U;
uint64_t x1655 = 5281468LLU;
uint8_t x1685 = 37U;
volatile int8_t x1687 = -5;
uint64_t t31 = 112064637610LLU;
static volatile int32_t t33 = -920850;
static int8_t x1806 = -1;
int32_t x1914 = INT32_MAX;
uint64_t t37 = 51090794203LLU;
volatile int16_t x1969 = INT16_MAX;
int32_t t38 = -2125;
uint16_t x2218 = UINT16_MAX;
uint64_t x2258 = UINT64_MAX;
uint8_t x2260 = 11U;
volatile int16_t x2325 = INT16_MIN;
int16_t x2331 = INT16_MIN;
volatile uint64_t x2363 = 69782174293132LLU;
uint8_t x2376 = 2U;
static int8_t x2400 = 23;
static int8_t x2410 = INT8_MIN;
int64_t x2411 = -4LL;
static int64_t t49 = 235759LL;
int32_t x2433 = INT32_MIN;
uint64_t t51 = 190928630LLU;
uint16_t x2752 = 4U;
uint32_t t53 = 206394U;
int32_t x2797 = -1;
volatile uint32_t x2856 = 22U;
volatile int8_t x2897 = INT8_MIN;
uint64_t x2898 = 15LLU;
int8_t x2899 = 52;
volatile uint64_t t57 = 559298LLU;
volatile uint64_t t58 = 81739416057LLU;
int8_t x2923 = INT8_MIN;
volatile uint16_t x2949 = 23101U;
uint32_t t61 = 10866653U;
static uint32_t x2994 = 101U;
uint64_t x2995 = UINT64_MAX;
int32_t x2996 = 46;
uint16_t x3005 = 1093U;
int32_t x3255 = -1;
volatile int8_t x3256 = 2;
uint32_t x3257 = UINT32_MAX;
volatile uint64_t t66 = 2688194803377LLU;
uint8_t x3304 = 2U;
volatile uint64_t x3437 = 1179LLU;
static uint64_t t71 = 795LLU;
int16_t x3621 = INT16_MAX;
uint64_t x3623 = 5362503667320LLU;
volatile uint16_t x3624 = 0U;
static uint64_t t73 = 138LLU;
static volatile uint32_t x3675 = 2039900U;
uint32_t t74 = 5151084U;
uint8_t x3712 = 0U;
uint64_t x3713 = UINT64_MAX;
volatile uint64_t t76 = 193LLU;
int32_t x3721 = -1;
volatile int32_t t77 = -3;
int8_t x3733 = INT8_MAX;
int32_t x3815 = -1;
volatile uint16_t x3816 = 0U;
uint64_t x3835 = UINT64_MAX;
volatile int64_t t82 = 3278LL;
uint32_t x4145 = 29601045U;
uint32_t x4147 = UINT32_MAX;
uint32_t t85 = 19709020U;
static volatile int64_t t90 = 70879LL;
volatile uint16_t x4708 = 15U;
volatile uint64_t t91 = 859852753054860083LLU;
static int64_t t93 = 2610533795028315LL;
int8_t x4829 = INT8_MAX;
volatile int32_t t94 = -692934;
int16_t x4881 = -1714;
int64_t x4882 = 14081892LL;
uint32_t x4883 = UINT32_MAX;
int8_t x4900 = 1;
static uint64_t x5108 = 0LLU;
static int16_t x5110 = -1;
uint32_t x5112 = 7U;
int64_t x5217 = INT64_MIN;
static uint64_t x5218 = 161596LLU;
volatile int64_t x5219 = 11630LL;
uint8_t x5220 = 2U;
static int16_t x5369 = -1;
static uint8_t x5388 = 11U;
static uint64_t x5445 = 1279183704638640706LLU;
int16_t x5447 = -905;
int32_t x5448 = 14;
uint32_t t110 = 1779092U;
uint8_t x5788 = 5U;
volatile int64_t t111 = 365647059146007729LL;
int16_t x5875 = 20;
uint8_t x5956 = 13U;
static volatile uint32_t t114 = 436529U;
int8_t x6098 = INT8_MIN;
uint8_t x6240 = 0U;
uint64_t t117 = 9435955278729LLU;
static uint64_t x6245 = 0LLU;
int64_t x6246 = 8059398375745LL;
volatile uint8_t x6247 = 12U;
uint8_t x6260 = 1U;
int16_t x6505 = INT16_MIN;
int8_t x6506 = INT8_MIN;
uint16_t x6610 = UINT16_MAX;
volatile int16_t x6611 = 17;
uint64_t t124 = 335863282640814LLU;
uint32_t x6806 = 642755U;
int16_t x6807 = INT16_MIN;
volatile uint32_t t126 = 145992596U;
int8_t x6948 = 43;
int16_t x7000 = 2;
int32_t x7002 = -1;
static int64_t t130 = 162996247240LL;
static int16_t x7053 = INT16_MAX;
uint8_t x7056 = 0U;
uint64_t t133 = 1067783377959LLU;
int16_t x7297 = -37;
static uint64_t x7298 = UINT64_MAX;
uint32_t x7299 = UINT32_MAX;
int8_t x7398 = -1;
static uint64_t x7418 = 9689LLU;
static int8_t x7529 = -1;
uint32_t t140 = 751955491U;
volatile uint32_t x7553 = 50561017U;
int16_t x7554 = 1606;
uint32_t t142 = 14U;
uint64_t x7643 = 1897870375150061LLU;
int16_t x7644 = 1;
static volatile int64_t x7654 = 976387269137406139LL;
uint64_t x7655 = UINT64_MAX;
uint8_t x7861 = 1U;
volatile uint16_t x7864 = 10U;
uint8_t x7914 = UINT8_MAX;
uint64_t x7925 = UINT64_MAX;
volatile uint16_t x8074 = UINT16_MAX;
volatile int16_t x8178 = 0;
uint64_t x8179 = 699LLU;
static uint8_t x8185 = UINT8_MAX;
int8_t x8246 = INT8_MIN;
volatile int16_t x8247 = INT16_MIN;
int32_t x8248 = 3;
uint64_t t155 = 510476719LLU;
int16_t x8322 = INT16_MIN;
uint8_t x8593 = 1U;
volatile int32_t x8596 = 0;
static uint16_t x8608 = 37U;
uint32_t x9073 = 2U;
volatile int8_t x9085 = -1;
uint32_t x9086 = 349650U;
uint8_t x9088 = 26U;
volatile uint32_t t166 = UINT32_MAX;
int32_t x9089 = INT32_MIN;
int32_t x9145 = INT32_MIN;
static int16_t x9147 = INT16_MAX;
uint16_t x9324 = 6U;
uint16_t x9389 = 7U;
uint16_t x9390 = 32U;
int32_t x9505 = INT32_MAX;
static uint8_t x9649 = UINT8_MAX;
int8_t x9903 = INT8_MIN;
volatile uint8_t x9916 = 0U;
int32_t x10275 = 7;
uint64_t x10393 = 233315684090195444LLU;
static int32_t x10394 = 353590994;
uint64_t x10396 = 1LLU;
volatile int8_t x10516 = 3;
volatile int64_t t187 = 609014047037082LL;
uint32_t x10905 = UINT32_MAX;
volatile uint64_t t190 = 446LLU;
int64_t x10912 = 1LL;
uint32_t t191 = 100155U;
uint8_t x11119 = 26U;
uint8_t x11140 = 18U;
volatile uint64_t t195 = 3334296571LLU;
static uint16_t x11144 = 16U;
uint64_t t196 = 7180384494171928LLU;
volatile int32_t t197 = -12;
uint32_t t198 = 19631U;
uint16_t x11265 = 2U;
volatile uint64_t x11267 = 81084183596201614LLU;


void f0(void) {
    	volatile uint64_t x18 = 39602043114LLU;
	int32_t x19 = 490131;
	volatile int8_t x20 = 0;
	static volatile uint64_t t0 = 1420310122202805LLU;

    t0 = (x17+((x18*x19)>>x20));

    if (t0 != 19410188995466439LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x30 = 5U;
	uint8_t x31 = 41U;
	uint8_t x32 = 0U;
	int32_t t1 = -1;

    t1 = (x29+((x30*x31)>>x32));

    if (t1 != 77) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x81 = 708U;
	volatile int16_t x82 = -1;
	static volatile uint32_t x83 = UINT32_MAX;
	volatile uint32_t t2 = 875153907U;

    t2 = (x81+((x82*x83)>>x84));

    if (t2 != 709U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x93 = INT8_MAX;
	uint64_t x95 = 1469LLU;
	static uint8_t x96 = 1U;
	static volatile uint64_t t3 = 15LLU;

    t3 = (x93+((x94*x95)>>x96));

    if (t3 != 93408LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x141 = 36487872112LLU;
	uint32_t x142 = 437654U;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 15U;
	uint64_t t4 = 5993625349986756360LLU;

    t4 = (x141+((x142*x143)>>x144));

    if (t4 != 36487872112LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x194 = 47U;
	volatile int16_t x195 = INT16_MAX;
	int32_t t5 = 337764587;

    t5 = (x193+((x194*x195)>>x196));

    if (t5 != 24318) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x205 = 11465985133857258LL;
	static int8_t x206 = -1;
	volatile int8_t x208 = 0;
	static int64_t t6 = -1094071915534LL;

    t6 = (x205+((x206*x207)>>x208));

    if (t6 != 11465985133857259LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x213 = -1;
	int64_t x214 = -1LL;
	volatile int64_t t7 = -1646939LL;

    t7 = (x213+((x214*x215)>>x216));

    if (t7 != 1079444536038204603LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x226 = 334U;
	int32_t x227 = 221736;
	volatile int8_t x228 = 8;
	int64_t t8 = 1726456LL;

    t8 = (x225+((x226*x227)>>x228));

    if (t8 != 289295LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x269 = 1;
	volatile uint16_t x270 = 1245U;
	int32_t x271 = 3;
	uint8_t x272 = 1U;
	int32_t t9 = 4374;

    t9 = (x269+((x270*x271)>>x272));

    if (t9 != 1868) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x333 = INT32_MIN;
	int8_t x334 = 0;
	int32_t t10 = INT32_MIN;

    t10 = (x333+((x334*x335)>>x336));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x461 = INT64_MAX;
	static int32_t x463 = -9;
	volatile uint64_t t11 = 24002772LLU;

    t11 = (x461+((x462*x463)>>x464));

    if (t11 != 10376290637730201594LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x485 = UINT16_MAX;
	uint16_t x486 = 107U;
	int8_t x488 = 1;
	int32_t t12 = 76310563;

    t12 = (x485+((x486*x487)>>x488));

    if (t12 != 72329) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x558 = 1122222039U;
	int16_t x559 = -1;
	uint16_t x560 = 0U;
	uint32_t t13 = 1U;

    t13 = (x557+((x558*x559)>>x560));

    if (t13 != 3172745129U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x573 = 4461U;
	static uint64_t x574 = 1053895784022555LLU;
	int8_t x575 = -13;
	int16_t x576 = 1;
	uint64_t t14 = 3872223LLU;

    t14 = (x573+((x574*x575)>>x576));

    if (t14 != 9216521714258633661LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x681 = 92U;
	uint16_t x682 = 341U;
	uint64_t x683 = 15355388734LLU;
	uint8_t x684 = 13U;
	volatile uint64_t t15 = 19985059960917LLU;

    t15 = (x681+((x682*x683)>>x684));

    if (t15 != 639183143LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x725 = 1;
	int16_t x727 = INT16_MIN;
	int16_t x728 = 15;
	volatile uint64_t t16 = 4697979044559LLU;

    t16 = (x725+((x726*x727)>>x728));

    if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x765 = 4288504;
	int8_t x766 = INT8_MIN;
	volatile uint64_t x767 = UINT64_MAX;
	int8_t x768 = 8;
	volatile uint64_t t17 = 326199856LLU;

    t17 = (x765+((x766*x767)>>x768));

    if (t17 != 4288504LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x793 = 32;
	int16_t x794 = INT16_MIN;
	volatile uint32_t x795 = UINT32_MAX;
	uint8_t x796 = 9U;

    t18 = (x793+((x794*x795)>>x796));

    if (t18 != 96U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x889 = 1;
	int8_t x890 = INT8_MIN;
	int16_t x891 = INT16_MIN;
	int32_t t19 = 87880994;

    t19 = (x889+((x890*x891)>>x892));

    if (t19 != 2097153) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x913 = INT32_MIN;
	static volatile int8_t x914 = INT8_MAX;
	int8_t x915 = INT8_MAX;
	uint8_t x916 = 27U;
	int32_t t20 = INT32_MIN;

    t20 = (x913+((x914*x915)>>x916));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1089 = 693671719;
	uint8_t x1090 = UINT8_MAX;
	uint32_t x1091 = 3534610U;
	int8_t x1092 = 0;
	volatile uint32_t t21 = 4505485U;

    t21 = (x1089+((x1090*x1091)>>x1092));

    if (t21 != 1594997269U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x1141 = 28976524448LLU;
	uint64_t x1143 = 343603864264576LLU;
	uint32_t x1144 = 0U;

    t22 = (x1141+((x1142*x1143)>>x1144));

    if (t22 != 5374174151945661344LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1154 = -297LL;
	int32_t x1156 = 5;
	volatile int64_t t23 = -251121832182547204LL;

    t23 = (x1153+((x1154*x1155)>>x1156));

    if (t23 != 28LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1253 = INT64_MAX;
	int64_t x1255 = -5236771338182LL;
	static uint32_t x1256 = 18U;
	static volatile uint64_t t24 = 2759251202LLU;

    t24 = (x1253+((x1254*x1255)>>x1256));

    if (t24 != 9223372036874752504LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x1269 = 553236040127LLU;
	static int8_t x1270 = -1;
	uint64_t t25 = 4596295916553966932LLU;

    t25 = (x1269+((x1270*x1271)>>x1272));

    if (t25 != 553236040127LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x1329 = INT16_MAX;
	int16_t x1332 = 0;
	volatile int64_t t26 = 969823685228690LL;

    t26 = (x1329+((x1330*x1331)>>x1332));

    if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1345 = 97U;
	static uint8_t x1346 = 66U;
	uint64_t x1347 = 245941140100481LLU;
	uint8_t x1348 = 4U;
	volatile uint64_t t27 = 26006440982LLU;

    t27 = (x1345+((x1346*x1347)>>x1348));

    if (t27 != 1014507202914581LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1387 = 200U;
	uint64_t t28 = 243942LLU;

    t28 = (x1385+((x1386*x1387)>>x1388));

    if (t28 != 4951LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1405 = -12LL;
	static int64_t x1406 = -1LL;
	volatile uint16_t x1407 = 0U;
	uint8_t x1408 = 29U;

    t29 = (x1405+((x1406*x1407)>>x1408));

    if (t29 != -12LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1653 = 4U;
	uint8_t x1656 = 5U;
	uint64_t t30 = 29083899601477LLU;

    t30 = (x1653+((x1654*x1655)>>x1656));

    if (t30 != 31688812LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1686 = 1763LLU;
	int16_t x1688 = 1;

    t31 = (x1685+((x1686*x1687)>>x1688));

    if (t31 != 9223372036854771437LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1689 = INT64_MAX;
	int16_t x1690 = INT16_MIN;
	uint16_t x1691 = 0U;
	volatile uint16_t x1692 = 2U;
	volatile int64_t t32 = INT64_MAX;

    t32 = (x1689+((x1690*x1691)>>x1692));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x1753 = -1;
	int8_t x1754 = INT8_MIN;
	volatile int8_t x1755 = -1;
	uint32_t x1756 = 5U;

    t33 = (x1753+((x1754*x1755)>>x1756));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x1805 = 3296661839339LLU;
	uint32_t x1807 = UINT32_MAX;
	uint32_t x1808 = 1U;
	static volatile uint64_t t34 = 45345823LLU;

    t34 = (x1805+((x1806*x1807)>>x1808));

    if (t34 != 3296661839339LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x1829 = INT16_MIN;
	uint64_t x1830 = 3160868247891450113LLU;
	volatile uint32_t x1831 = 30U;
	uint16_t x1832 = 57U;
	uint64_t t35 = 261598LLU;

    t35 = (x1829+((x1830*x1831)>>x1832));

    if (t35 != 18446744073709518865LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1873 = UINT64_MAX;
	uint64_t x1874 = 5386LLU;
	uint32_t x1875 = 1630U;
	uint8_t x1876 = 31U;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = (x1873+((x1874*x1875)>>x1876));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x1913 = 0;
	uint64_t x1915 = 4LLU;
	static uint8_t x1916 = 29U;

    t37 = (x1913+((x1914*x1915)>>x1916));

    if (t37 != 15LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x1970 = 105U;
	int16_t x1971 = 0;
	static uint8_t x1972 = 1U;

    t38 = (x1969+((x1970*x1971)>>x1972));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1989 = 1016798710978033750LL;
	int16_t x1990 = -2;
	int32_t x1991 = -1;
	volatile uint16_t x1992 = 8U;
	volatile int64_t t39 = 4993LL;

    t39 = (x1989+((x1990*x1991)>>x1992));

    if (t39 != 1016798710978033750LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x2217 = INT8_MIN;
	static uint32_t x2219 = 1U;
	int16_t x2220 = 6;
	uint32_t t40 = 2977U;

    t40 = (x2217+((x2218*x2219)>>x2220));

    if (t40 != 895U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2257 = INT64_MIN;
	int16_t x2259 = -1;
	uint64_t t41 = 154849901221395LLU;

    t41 = (x2257+((x2258*x2259)>>x2260));

    if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2326 = INT16_MIN;
	int16_t x2327 = INT16_MIN;
	uint8_t x2328 = 3U;
	int32_t t42 = 17154;

    t42 = (x2325+((x2326*x2327)>>x2328));

    if (t42 != 134184960) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2329 = INT32_MIN;
	int8_t x2330 = INT8_MIN;
	int64_t x2332 = 1LL;
	int32_t t43 = -136541839;

    t43 = (x2329+((x2330*x2331)>>x2332));

    if (t43 != -2145386496) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x2349 = 8425941225LL;
	uint32_t x2350 = 138043654U;
	uint32_t x2351 = UINT32_MAX;
	uint8_t x2352 = 0U;
	volatile int64_t t44 = -28798290009LL;

    t44 = (x2349+((x2350*x2351)>>x2352));

    if (t44 != 12582864867LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x2361 = 45;
	static int32_t x2362 = -1;
	volatile uint16_t x2364 = 26U;
	uint64_t t45 = 1961793062809084538LLU;

    t45 = (x2361+((x2362*x2363)>>x2364));

    if (t45 != 274876867153LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2365 = 3U;
	uint64_t x2366 = 686406860224660946LLU;
	volatile int32_t x2367 = 7671161;
	uint8_t x2368 = 0U;
	uint64_t t46 = 5628571LLU;

    t46 = (x2365+((x2366*x2367)>>x2368));

    if (t46 != 6674167847326149189LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2373 = 7U;
	uint16_t x2374 = UINT16_MAX;
	uint32_t x2375 = 14U;
	uint32_t t47 = 522779975U;

    t47 = (x2373+((x2374*x2375)>>x2376));

    if (t47 != 229379U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x2397 = -1;
	static volatile int8_t x2398 = INT8_MIN;
	uint8_t x2399 = 0U;
	int32_t t48 = -22;

    t48 = (x2397+((x2398*x2399)>>x2400));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x2409 = 510441U;
	int8_t x2412 = 1;

    t49 = (x2409+((x2410*x2411)>>x2412));

    if (t49 != 510697LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x2434 = 291U;
	int16_t x2435 = INT16_MAX;
	int16_t x2436 = 11;
	static int32_t t50 = 2423701;

    t50 = (x2433+((x2434*x2435)>>x2436));

    if (t50 != -2147478993) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2621 = 1607989816630346LL;
	int64_t x2622 = 721675822697LL;
	static volatile uint64_t x2623 = 60891981932LLU;
	int16_t x2624 = 60;

    t51 = (x2621+((x2622*x2623)>>x2624));

    if (t51 != 1607989816630349LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2705 = 13158979436672LLU;
	static uint64_t x2706 = 267353755930LLU;
	uint64_t x2707 = UINT64_MAX;
	uint8_t x2708 = 0U;
	uint64_t t52 = 97054029LLU;

    t52 = (x2705+((x2706*x2707)>>x2708));

    if (t52 != 12891625680742LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2749 = INT8_MIN;
	int32_t x2750 = INT32_MAX;
	static uint32_t x2751 = 1924917535U;

    t53 = (x2749+((x2750*x2751)>>x2752));

    if (t53 != 13910254U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x2777 = 1014390440U;
	volatile int8_t x2778 = INT8_MIN;
	uint64_t x2779 = UINT64_MAX;
	int16_t x2780 = 26;
	volatile uint64_t t54 = 2LLU;

    t54 = (x2777+((x2778*x2779)>>x2780));

    if (t54 != 1014390440LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2798 = UINT64_MAX;
	volatile uint64_t x2799 = 119LLU;
	uint8_t x2800 = 1U;
	volatile uint64_t t55 = 1178684031041571LLU;

    t55 = (x2797+((x2798*x2799)>>x2800));

    if (t55 != 9223372036854775747LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x2853 = -1;
	uint8_t x2854 = 0U;
	uint8_t x2855 = 2U;
	volatile int32_t t56 = 3643;

    t56 = (x2853+((x2854*x2855)>>x2856));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x2900 = 6;

    t57 = (x2897+((x2898*x2899)>>x2900));

    if (t57 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x2917 = 4973559015LLU;
	uint64_t x2918 = UINT64_MAX;
	int16_t x2919 = 1;
	static int32_t x2920 = 1;

    t58 = (x2917+((x2918*x2919)>>x2920));

    if (t58 != 9223372041828334822LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x2921 = UINT32_MAX;
	volatile int16_t x2922 = INT16_MIN;
	uint16_t x2924 = 30U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x2921+((x2922*x2923)>>x2924));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2937 = -45;
	static int32_t x2938 = INT32_MIN;
	static uint32_t x2939 = 47U;
	uint16_t x2940 = 3U;
	volatile uint32_t t60 = 2375U;

    t60 = (x2937+((x2938*x2939)>>x2940));

    if (t60 != 268435411U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2950 = INT8_MIN;
	volatile uint32_t x2951 = UINT32_MAX;
	int8_t x2952 = 0;

    t61 = (x2949+((x2950*x2951)>>x2952));

    if (t61 != 23229U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x2993 = 104765U;
	volatile uint64_t t62 = 101040054254030LLU;

    t62 = (x2993+((x2994*x2995)>>x2996));

    if (t62 != 366908LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x3006 = 91LLU;
	int16_t x3007 = INT16_MAX;
	static uint16_t x3008 = 0U;
	volatile uint64_t t63 = 85835805LLU;

    t63 = (x3005+((x3006*x3007)>>x3008));

    if (t63 != 2982890LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x3217 = 82U;
	static uint64_t x3218 = 23143132LLU;
	volatile uint16_t x3219 = 1U;
	int16_t x3220 = 14;
	uint64_t t64 = 47555904546LLU;

    t64 = (x3217+((x3218*x3219)>>x3220));

    if (t64 != 1494LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x3253 = INT64_MIN;
	static uint64_t x3254 = 3483LLU;
	static volatile uint64_t t65 = 6396206833649LLU;

    t65 = (x3253+((x3254*x3255)>>x3256));

    if (t65 != 13835058055282162841LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x3258 = 592926094LLU;
	static volatile uint8_t x3259 = UINT8_MAX;
	uint8_t x3260 = 62U;

    t66 = (x3257+((x3258*x3259)>>x3260));

    if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x3301 = -1;
	int16_t x3302 = 366;
	static int32_t x3303 = 3;
	volatile int32_t t67 = -482265508;

    t67 = (x3301+((x3302*x3303)>>x3304));

    if (t67 != 273) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3425 = UINT16_MAX;
	int8_t x3426 = INT8_MAX;
	int8_t x3427 = INT8_MAX;
	uint16_t x3428 = 0U;
	int32_t t68 = 181328;

    t68 = (x3425+((x3426*x3427)>>x3428));

    if (t68 != 81664) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x3438 = INT16_MIN;
	volatile int16_t x3439 = -3597;
	uint32_t x3440 = 1U;
	static uint64_t t69 = 32386LLU;

    t69 = (x3437+((x3438*x3439)>>x3440));

    if (t69 != 58934427LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x3457 = 121632121957273LL;
	volatile int64_t x3458 = -1LL;
	int16_t x3459 = INT16_MIN;
	int32_t x3460 = 1;
	int64_t t70 = 3746679306LL;

    t70 = (x3457+((x3458*x3459)>>x3460));

    if (t70 != 121632121973657LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x3589 = 1497;
	int64_t x3590 = -1LL;
	volatile uint64_t x3591 = 28252153208061489LLU;
	uint8_t x3592 = 62U;

    t71 = (x3589+((x3590*x3591)>>x3592));

    if (t71 != 1500LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3622 = INT64_MIN;
	volatile uint64_t t72 = 17137LLU;

    t72 = (x3621+((x3622*x3623)>>x3624));

    if (t72 != 32767LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x3625 = INT64_MIN;
	uint64_t x3626 = UINT64_MAX;
	volatile int8_t x3627 = INT8_MIN;
	int8_t x3628 = 13;

    t73 = (x3625+((x3626*x3627)>>x3628));

    if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x3673 = INT16_MIN;
	int32_t x3674 = INT32_MAX;
	static int8_t x3676 = 0;

    t74 = (x3673+((x3674*x3675)>>x3676));

    if (t74 != 4292894628U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3709 = INT16_MIN;
	int32_t x3710 = 691;
	static uint64_t x3711 = 2178418084636892LLU;
	uint64_t t75 = 3596840LLU;

    t75 = (x3709+((x3710*x3711)>>x3712));

    if (t75 != 1505286896484059604LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x3714 = 1038060937LLU;
	int16_t x3715 = INT16_MIN;
	int8_t x3716 = 53;

    t76 = (x3713+((x3714*x3715)>>x3716));

    if (t76 != 2046LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x3722 = 0U;
	uint16_t x3723 = 505U;
	uint8_t x3724 = 0U;

    t77 = (x3721+((x3722*x3723)>>x3724));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x3734 = -1;
	uint8_t x3735 = 0U;
	uint8_t x3736 = 4U;
	volatile int32_t t78 = -15;

    t78 = (x3733+((x3734*x3735)>>x3736));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x3813 = 675860627LLU;
	int16_t x3814 = -1;
	uint64_t t79 = 31424486203LLU;

    t79 = (x3813+((x3814*x3815)>>x3816));

    if (t79 != 675860628LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x3833 = 239680892167LLU;
	volatile int32_t x3834 = INT32_MAX;
	int32_t x3836 = 2;
	static volatile uint64_t t80 = 72LLU;

    t80 = (x3833+((x3834*x3835)>>x3836));

    if (t80 != 4611686257571409159LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x3877 = 1;
	volatile uint32_t x3878 = 43701745U;
	int16_t x3879 = -29;
	int8_t x3880 = 18;
	static volatile uint32_t t81 = 1565234U;

    t81 = (x3877+((x3878*x3879)>>x3880));

    if (t81 != 11550U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x3885 = 0;
	int64_t x3886 = 1LL;
	static uint16_t x3887 = 4U;
	int8_t x3888 = 52;

    t82 = (x3885+((x3886*x3887)>>x3888));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x4025 = -1LL;
	uint16_t x4026 = 14U;
	volatile int8_t x4027 = INT8_MAX;
	uint16_t x4028 = 1U;
	int64_t t83 = 32LL;

    t83 = (x4025+((x4026*x4027)>>x4028));

    if (t83 != 888LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4121 = -1;
	int8_t x4122 = INT8_MAX;
	uint8_t x4123 = 44U;
	static volatile uint8_t x4124 = 2U;
	volatile int32_t t84 = 7218;

    t84 = (x4121+((x4122*x4123)>>x4124));

    if (t84 != 1396) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4146 = INT8_MAX;
	static int64_t x4148 = 1LL;

    t85 = (x4145+((x4146*x4147)>>x4148));

    if (t85 != 2177084629U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x4241 = 2055129LLU;
	int32_t x4242 = INT32_MIN;
	volatile uint64_t x4243 = 16250101344459LLU;
	static uint16_t x4244 = 8U;
	volatile uint64_t t86 = 229202359488LLU;

    t86 = (x4241+((x4242*x4243)>>x4244));

    if (t86 != 17237780822186969LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x4257 = 40U;
	uint64_t x4258 = 2151434099027915653LLU;
	int16_t x4259 = INT16_MIN;
	static uint16_t x4260 = 1U;
	volatile uint64_t t87 = 4906477LLU;

    t87 = (x4257+((x4258*x4259)>>x4260));

    if (t87 != 2631646385583079464LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4469 = -1;
	int16_t x4470 = -1;
	int8_t x4471 = INT8_MIN;
	volatile int32_t x4472 = 3;
	int32_t t88 = -277;

    t88 = (x4469+((x4470*x4471)>>x4472));

    if (t88 != 15) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x4497 = -10787044LL;
	uint32_t x4498 = UINT32_MAX;
	int16_t x4499 = -211;
	static uint16_t x4500 = 2U;
	int64_t t89 = -1LL;

    t89 = (x4497+((x4498*x4499)>>x4500));

    if (t89 != -10786992LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x4657 = 9U;
	static int8_t x4658 = INT8_MIN;
	int64_t x4659 = -1LL;
	static volatile uint8_t x4660 = 0U;

    t90 = (x4657+((x4658*x4659)>>x4660));

    if (t90 != 137LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x4705 = UINT64_MAX;
	int8_t x4706 = INT8_MIN;
	volatile int16_t x4707 = INT16_MIN;

    t91 = (x4705+((x4706*x4707)>>x4708));

    if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x4709 = 48528327042107174LL;
	volatile uint64_t x4710 = UINT64_MAX;
	int8_t x4711 = INT8_MIN;
	volatile uint16_t x4712 = 6U;
	volatile uint64_t t92 = 0LLU;

    t92 = (x4709+((x4710*x4711)>>x4712));

    if (t92 != 48528327042107176LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4757 = INT64_MIN;
	int64_t x4758 = -1617945328854102LL;
	static int8_t x4759 = -1;
	static volatile int8_t x4760 = 1;

    t93 = (x4757+((x4758*x4759)>>x4760));

    if (t93 != -9222563064190348757LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x4830 = INT16_MAX;
	int8_t x4831 = 6;
	uint64_t x4832 = 19LLU;

    t94 = (x4829+((x4830*x4831)>>x4832));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x4849 = INT8_MIN;
	static volatile int16_t x4850 = -1;
	volatile int64_t x4851 = -18011968043128374LL;
	volatile uint32_t x4852 = 6U;
	volatile int64_t t95 = 70397478930529770LL;

    t95 = (x4849+((x4850*x4851)>>x4852));

    if (t95 != 281437000673752LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x4884 = 22;
	int64_t t96 = 312LL;

    t96 = (x4881+((x4882*x4883)>>x4884));

    if (t96 != 14419855690LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x4897 = 4084U;
	int16_t x4898 = -1;
	int8_t x4899 = -2;
	int32_t t97 = 1;

    t97 = (x4897+((x4898*x4899)>>x4900));

    if (t97 != 4085) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x5105 = -1;
	volatile uint64_t x5106 = 29LLU;
	uint16_t x5107 = UINT16_MAX;
	uint64_t t98 = 187729065LLU;

    t98 = (x5105+((x5106*x5107)>>x5108));

    if (t98 != 1900514LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5109 = INT32_MIN;
	volatile uint32_t x5111 = 17978988U;
	uint32_t t99 = 2U;

    t99 = (x5109+((x5110*x5111)>>x5112));

    if (t99 != 2180897619U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x5213 = INT32_MIN;
	int16_t x5214 = INT16_MAX;
	static int16_t x5215 = INT16_MAX;
	int8_t x5216 = 1;
	volatile int32_t t100 = 4296;

    t100 = (x5213+((x5214*x5215)>>x5216));

    if (t100 != -1610645504) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t t101 = 23LLU;

    t101 = (x5217+((x5218*x5219)>>x5220));

    if (t101 != 9223372037324616178LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x5321 = -1;
	uint32_t x5322 = 1079U;
	uint8_t x5323 = 66U;
	uint8_t x5324 = 0U;
	volatile uint32_t t102 = 255993894U;

    t102 = (x5321+((x5322*x5323)>>x5324));

    if (t102 != 71213U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5370 = INT16_MAX;
	uint16_t x5371 = UINT16_MAX;
	static uint64_t x5372 = 14LLU;
	volatile int32_t t103 = -23556;

    t103 = (x5369+((x5370*x5371)>>x5372));

    if (t103 != 131065) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5385 = -1;
	static volatile uint16_t x5386 = 47U;
	int64_t x5387 = 16544787348788LL;
	static int64_t t104 = -64871833649626556LL;

    t104 = (x5385+((x5386*x5387)>>x5388));

    if (t104 != 379689944038LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x5393 = INT64_MIN;
	uint8_t x5394 = 49U;
	static int8_t x5395 = 1;
	static uint8_t x5396 = 7U;
	static volatile int64_t t105 = INT64_MIN;

    t105 = (x5393+((x5394*x5395)>>x5396));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x5446 = -1;
	uint64_t t106 = 3LLU;

    t106 = (x5445+((x5446*x5447)>>x5448));

    if (t106 != 1279183704638640706LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x5485 = 3395U;
	volatile uint32_t x5486 = 888U;
	int8_t x5487 = INT8_MIN;
	volatile uint8_t x5488 = 1U;
	uint32_t t107 = 45711U;

    t107 = (x5485+((x5486*x5487)>>x5488));

    if (t107 != 2147430211U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x5597 = UINT64_MAX;
	static int16_t x5598 = -1;
	volatile int32_t x5599 = -1;
	uint8_t x5600 = 8U;
	uint64_t t108 = UINT64_MAX;

    t108 = (x5597+((x5598*x5599)>>x5600));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x5717 = -1;
	uint32_t x5718 = 71863796U;
	uint64_t x5719 = 4303465LLU;
	uint8_t x5720 = 3U;
	uint64_t t109 = 508557563LLU;

    t109 = (x5717+((x5718*x5719)>>x5720));

    if (t109 != 38657916356641LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x5729 = UINT8_MAX;
	volatile uint32_t x5730 = 520074757U;
	uint8_t x5731 = UINT8_MAX;
	static int8_t x5732 = 3;

    t110 = (x5729+((x5730*x5731)>>x5732));

    if (t110 != 471255774U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x5785 = 507002125156545578LL;
	uint32_t x5786 = 468452U;
	int16_t x5787 = INT16_MIN;

    t111 = (x5785+((x5786*x5787)>>x5788));

    if (t111 != 507002125213721642LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5861 = INT8_MIN;
	static volatile uint64_t x5862 = 974220LLU;
	uint32_t x5863 = UINT32_MAX;
	uint8_t x5864 = 4U;
	uint64_t t112 = 12200644818661LLU;

    t112 = (x5861+((x5862*x5863)>>x5864));

    if (t112 != 261515189883303LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x5873 = -1859812;
	int64_t x5874 = 330611105055005LL;
	uint8_t x5876 = 19U;
	volatile int64_t t113 = 439881476809760LL;

    t113 = (x5873+((x5874*x5875)>>x5876));

    if (t113 != 12609952972LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x5953 = -1;
	uint32_t x5954 = UINT32_MAX;
	static int32_t x5955 = INT32_MIN;

    t114 = (x5953+((x5954*x5955)>>x5956));

    if (t114 != 262143U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x6037 = UINT16_MAX;
	int32_t x6038 = -28263;
	static int8_t x6039 = INT8_MIN;
	uint8_t x6040 = 7U;
	static int32_t t115 = 0;

    t115 = (x6037+((x6038*x6039)>>x6040));

    if (t115 != 93798) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x6097 = 246315597U;
	uint32_t x6099 = UINT32_MAX;
	uint16_t x6100 = 1U;
	volatile uint32_t t116 = 173317U;

    t116 = (x6097+((x6098*x6099)>>x6100));

    if (t116 != 246315661U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x6237 = 1;
	static volatile int16_t x6238 = INT16_MIN;
	uint64_t x6239 = 511877765LLU;

    t117 = (x6237+((x6238*x6239)>>x6240));

    if (t117 != 18446727300498948097LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x6248 = 1U;
	uint64_t t118 = 9LLU;

    t118 = (x6245+((x6246*x6247)>>x6248));

    if (t118 != 48356390254470LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x6257 = INT32_MIN;
	uint64_t x6258 = 491811964726595LLU;
	static int8_t x6259 = 15;
	static uint64_t t119 = 22336LLU;

    t119 = (x6257+((x6258*x6259)>>x6260));

    if (t119 != 3688587587965814LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x6309 = INT8_MIN;
	static int8_t x6310 = 40;
	uint16_t x6311 = UINT16_MAX;
	volatile int16_t x6312 = 1;
	int32_t t120 = 1;

    t120 = (x6309+((x6310*x6311)>>x6312));

    if (t120 != 1310572) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x6507 = -1;
	uint8_t x6508 = 8U;
	static int32_t t121 = -55815680;

    t121 = (x6505+((x6506*x6507)>>x6508));

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x6609 = INT64_MIN;
	uint16_t x6612 = 1U;
	int64_t t122 = 9769076228094218LL;

    t122 = (x6609+((x6610*x6611)>>x6612));

    if (t122 != -9223372036854218761LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x6661 = 20220676855LLU;
	volatile uint32_t x6662 = 223870409U;
	volatile uint32_t x6663 = 13253U;
	volatile int16_t x6664 = 19;
	volatile uint64_t t123 = 236639334705610LLU;

    t123 = (x6661+((x6662*x6663)>>x6664));

    if (t123 != 20220683391LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x6717 = 10195LLU;
	uint16_t x6718 = 1U;
	uint8_t x6719 = 0U;
	static int8_t x6720 = 1;

    t124 = (x6717+((x6718*x6719)>>x6720));

    if (t124 != 10195LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x6805 = UINT32_MAX;
	volatile uint32_t x6808 = 1U;
	static volatile uint32_t t125 = 652989889U;

    t125 = (x6805+((x6806*x6807)>>x6808));

    if (t125 != 206520319U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x6809 = 5041U;
	uint32_t x6810 = 31228554U;
	static int32_t x6811 = -1;
	volatile uint16_t x6812 = 0U;

    t126 = (x6809+((x6810*x6811)>>x6812));

    if (t126 != 4263743783U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x6945 = 407287661LLU;
	uint64_t x6946 = 1058303LLU;
	static uint64_t x6947 = UINT64_MAX;
	volatile uint64_t t127 = 14720LLU;

    t127 = (x6945+((x6946*x6947)>>x6948));

    if (t127 != 409384812LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x6957 = INT64_MIN;
	uint16_t x6958 = UINT16_MAX;
	static uint64_t x6959 = 270LLU;
	volatile int8_t x6960 = 13;
	uint64_t t128 = 4446631722424251LLU;

    t128 = (x6957+((x6958*x6959)>>x6960));

    if (t128 != 9223372036854777967LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6997 = -1;
	uint8_t x6998 = 0U;
	volatile int8_t x6999 = INT8_MAX;
	volatile int32_t t129 = 13655;

    t129 = (x6997+((x6998*x6999)>>x7000));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x7001 = -2498;
	int64_t x7003 = -154157305183LL;
	int64_t x7004 = 59LL;

    t130 = (x7001+((x7002*x7003)>>x7004));

    if (t130 != -2498LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x7021 = 1U;
	int16_t x7022 = INT16_MAX;
	uint64_t x7023 = UINT64_MAX;
	volatile int64_t x7024 = 25LL;
	static volatile uint64_t t131 = 15721314LLU;

    t131 = (x7021+((x7022*x7023)>>x7024));

    if (t131 != 549755813888LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x7054 = -1;
	int16_t x7055 = -369;
	static volatile int32_t t132 = 22;

    t132 = (x7053+((x7054*x7055)>>x7056));

    if (t132 != 33136) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x7097 = 700LLU;
	volatile uint64_t x7098 = 6724196715655614921LLU;
	int16_t x7099 = -1;
	static uint16_t x7100 = 7U;

    t133 = (x7097+((x7098*x7099)>>x7100));

    if (t133 != 91582401234797080LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x7129 = 230U;
	uint64_t x7130 = UINT64_MAX;
	volatile uint32_t x7131 = 7832U;
	int64_t x7132 = 6LL;
	uint64_t t134 = 285712895758179125LLU;

    t134 = (x7129+((x7130*x7131)>>x7132));

    if (t134 != 288230376151711851LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x7285 = INT16_MIN;
	int16_t x7286 = INT16_MIN;
	uint64_t x7287 = 20063495807246138LLU;
	uint8_t x7288 = 1U;
	volatile uint64_t t135 = 731392280996LLU;

    t135 = (x7285+((x7286*x7287)>>x7288));

    if (t135 != 3321078020851171328LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x7300 = 1;
	uint64_t t136 = 29753769LLU;

    t136 = (x7297+((x7298*x7299)>>x7300));

    if (t136 != 9223372034707292123LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x7397 = INT16_MIN;
	uint32_t x7399 = UINT32_MAX;
	static uint8_t x7400 = 23U;
	volatile uint32_t t137 = 5489U;

    t137 = (x7397+((x7398*x7399)>>x7400));

    if (t137 != 4294934528U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x7417 = 114682LLU;
	uint32_t x7419 = UINT32_MAX;
	int16_t x7420 = 34;
	static uint64_t t138 = 3LLU;

    t138 = (x7417+((x7418*x7419)>>x7420));

    if (t138 != 117104LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x7437 = 14;
	int8_t x7438 = INT8_MIN;
	volatile int32_t x7439 = -348;
	volatile int32_t x7440 = 7;
	volatile int32_t t139 = -3;

    t139 = (x7437+((x7438*x7439)>>x7440));

    if (t139 != 362) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x7530 = 2784U;
	int16_t x7531 = INT16_MIN;
	uint16_t x7532 = 0U;

    t140 = (x7529+((x7530*x7531)>>x7532));

    if (t140 != 4203741183U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x7555 = INT8_MAX;
	static uint64_t x7556 = 18LLU;
	uint32_t t141 = 282282611U;

    t141 = (x7553+((x7554*x7555)>>x7556));

    if (t141 != 50561017U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x7601 = -1;
	int16_t x7602 = INT16_MIN;
	volatile uint32_t x7603 = 129689U;
	uint16_t x7604 = 3U;

    t142 = (x7601+((x7602*x7603)>>x7604));

    if (t142 != 5664767U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x7617 = INT16_MAX;
	int16_t x7618 = INT16_MIN;
	static int16_t x7619 = -329;
	uint8_t x7620 = 10U;
	static int32_t t143 = 5;

    t143 = (x7617+((x7618*x7619)>>x7620));

    if (t143 != 43295) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x7633 = 105U;
	volatile int64_t x7634 = INT64_MIN;
	uint64_t x7635 = 219093259640356667LLU;
	int8_t x7636 = 7;
	uint64_t t144 = 9077403894LLU;

    t144 = (x7633+((x7634*x7635)>>x7636));

    if (t144 != 72057594037928041LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x7641 = -1;
	uint64_t x7642 = 93449120367765815LLU;
	uint64_t t145 = 128272978481LLU;

    t145 = (x7641+((x7642*x7643)>>x7644));

    if (t145 != 3893519354281811828LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x7653 = 7132U;
	uint8_t x7656 = 0U;
	static uint64_t t146 = 295918599704LLU;

    t146 = (x7653+((x7654*x7655)>>x7656));

    if (t146 != 17470356804572152609LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x7862 = INT16_MIN;
	static uint32_t x7863 = 28580321U;
	volatile uint32_t t147 = 1774U;

    t147 = (x7861+((x7862*x7863)>>x7864));

    if (t147 != 3982305U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7913 = 441342LLU;
	uint64_t x7915 = 5LLU;
	int16_t x7916 = 14;
	volatile uint64_t t148 = 7043874LLU;

    t148 = (x7913+((x7914*x7915)>>x7916));

    if (t148 != 441342LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x7926 = 37079162;
	uint64_t x7927 = 1LLU;
	int8_t x7928 = 16;
	static volatile uint64_t t149 = 13075119LLU;

    t149 = (x7925+((x7926*x7927)>>x7928));

    if (t149 != 564LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x7941 = INT64_MIN;
	volatile int16_t x7942 = INT16_MIN;
	int16_t x7943 = INT16_MIN;
	volatile uint8_t x7944 = 1U;
	int64_t t150 = -233623612LL;

    t150 = (x7941+((x7942*x7943)>>x7944));

    if (t150 != -9223372036317904896LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x8073 = INT32_MIN;
	volatile uint64_t x8075 = UINT64_MAX;
	int8_t x8076 = 2;
	static uint64_t t151 = 7LLU;

    t151 = (x8073+((x8074*x8075)>>x8076));

    if (t151 != 4611686016279887872LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x8177 = -1;
	uint8_t x8180 = 4U;
	uint64_t t152 = UINT64_MAX;

    t152 = (x8177+((x8178*x8179)>>x8180));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x8186 = 1996319402U;
	static volatile int32_t x8187 = 1067820227;
	uint8_t x8188 = 11U;
	uint32_t t153 = 98U;

    t153 = (x8185+((x8186*x8187)>>x8188));

    if (t153 != 1187555U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x8245 = 227811;
	int32_t t154 = 250742883;

    t154 = (x8245+((x8246*x8247)>>x8248));

    if (t154 != 752099) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x8293 = -1;
	uint32_t x8294 = 31773491U;
	volatile uint64_t x8295 = 8042426372466LLU;
	uint8_t x8296 = 15U;

    t155 = (x8293+((x8294*x8295)>>x8296));

    if (t155 != 479989288497524LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x8321 = INT8_MIN;
	static int8_t x8323 = INT8_MIN;
	volatile int8_t x8324 = 2;
	int32_t t156 = 2644604;

    t156 = (x8321+((x8322*x8323)>>x8324));

    if (t156 != 1048448) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x8329 = 2;
	int16_t x8330 = 1223;
	uint64_t x8331 = 3803817425LLU;
	static int8_t x8332 = 1;
	volatile uint64_t t157 = 925733950232LLU;

    t157 = (x8329+((x8330*x8331)>>x8332));

    if (t157 != 2326034355389LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x8449 = 66860U;
	int8_t x8450 = INT8_MAX;
	volatile int64_t x8451 = 1619LL;
	uint16_t x8452 = 18U;
	int64_t t158 = -548LL;

    t158 = (x8449+((x8450*x8451)>>x8452));

    if (t158 != 66860LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x8569 = 3824612373978443LLU;
	uint16_t x8570 = UINT16_MAX;
	uint16_t x8571 = 45U;
	static int16_t x8572 = 4;
	volatile uint64_t t159 = 8636784957286LLU;

    t159 = (x8569+((x8570*x8571)>>x8572));

    if (t159 != 3824612374162760LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x8594 = 58U;
	static volatile uint64_t x8595 = 1456645759294796975LLU;
	volatile uint64_t t160 = 0LLU;

    t160 = (x8593+((x8594*x8595)>>x8596));

    if (t160 != 10698477744260018087LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x8605 = 93899544670018090LL;
	int64_t x8606 = -1LL;
	int16_t x8607 = -1;
	volatile int64_t t161 = 872950283LL;

    t161 = (x8605+((x8606*x8607)>>x8608));

    if (t161 != 93899544670018090LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x8809 = -1LL;
	uint32_t x8810 = UINT32_MAX;
	int64_t x8811 = 19228816LL;
	uint16_t x8812 = 4U;
	int64_t t162 = 111160LL;

    t162 = (x8809+((x8810*x8811)>>x8812));

    if (t162 != 5161695990098294LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x8817 = INT64_MAX;
	volatile int64_t x8818 = 482339LL;
	static uint64_t x8819 = UINT64_MAX;
	volatile int64_t x8820 = 0LL;
	static volatile uint64_t t163 = 1LLU;

    t163 = (x8817+((x8818*x8819)>>x8820));

    if (t163 != 9223372036854293468LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x8825 = 19U;
	uint32_t x8826 = UINT32_MAX;
	uint8_t x8827 = 1U;
	uint8_t x8828 = 15U;
	volatile uint32_t t164 = 3746030U;

    t164 = (x8825+((x8826*x8827)>>x8828));

    if (t164 != 131090U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x9074 = 3;
	int16_t x9075 = INT16_MAX;
	uint32_t x9076 = 3U;
	uint32_t t165 = 5U;

    t165 = (x9073+((x9074*x9075)>>x9076));

    if (t165 != 12289U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x9087 = 7;

    t166 = (x9085+((x9086*x9087)>>x9088));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x9090 = -1;
	int16_t x9091 = -1;
	uint64_t x9092 = 12LLU;
	volatile int32_t t167 = INT32_MIN;

    t167 = (x9089+((x9090*x9091)>>x9092));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x9146 = 313243640310599LLU;
	volatile uint32_t x9148 = 1U;
	static volatile uint64_t t168 = 240967011941LLU;

    t168 = (x9145+((x9146*x9147)>>x9148));

    if (t168 != 5132027178881215068LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x9321 = INT8_MIN;
	int8_t x9322 = -1;
	int8_t x9323 = -1;
	volatile int32_t t169 = 5;

    t169 = (x9321+((x9322*x9323)>>x9324));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x9391 = 10U;
	volatile int8_t x9392 = 0;
	int32_t t170 = -1142686;

    t170 = (x9389+((x9390*x9391)>>x9392));

    if (t170 != 327) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x9506 = 19U;
	int64_t x9507 = 403009481716159913LL;
	int32_t x9508 = 6;
	volatile int64_t t171 = 136784832159LL;

    t171 = (x9505+((x9506*x9507)>>x9508));

    if (t171 != 119643442031968621LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x9617 = 34U;
	volatile uint32_t x9618 = 12638234U;
	uint8_t x9619 = 68U;
	int8_t x9620 = 31;
	volatile uint32_t t172 = 9U;

    t172 = (x9617+((x9618*x9619)>>x9620));

    if (t172 != 34U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x9650 = 1987435436U;
	static uint8_t x9651 = 2U;
	uint32_t x9652 = 5U;
	volatile uint32_t t173 = 6U;

    t173 = (x9649+((x9650*x9651)>>x9652));

    if (t173 != 124214969U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x9901 = 13U;
	uint32_t x9902 = UINT32_MAX;
	volatile int8_t x9904 = 4;
	volatile uint32_t t174 = 13U;

    t174 = (x9901+((x9902*x9903)>>x9904));

    if (t174 != 21U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x9913 = INT32_MAX;
	static uint32_t x9914 = UINT32_MAX;
	static int32_t x9915 = INT32_MAX;
	volatile uint32_t t175 = 5095U;

    t175 = (x9913+((x9914*x9915)>>x9916));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x9957 = -251;
	volatile uint32_t x9958 = UINT32_MAX;
	uint32_t x9959 = UINT32_MAX;
	uint32_t x9960 = 1U;
	volatile uint32_t t176 = 860461585U;

    t176 = (x9957+((x9958*x9959)>>x9960));

    if (t176 != 4294967045U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x10053 = 2042U;
	uint16_t x10054 = 9895U;
	uint8_t x10055 = 2U;
	int32_t x10056 = 3;
	static volatile int32_t t177 = -3;

    t177 = (x10053+((x10054*x10055)>>x10056));

    if (t177 != 4515) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x10129 = UINT8_MAX;
	int16_t x10130 = -1;
	uint32_t x10131 = UINT32_MAX;
	int8_t x10132 = 26;
	volatile uint32_t t178 = 131243836U;

    t178 = (x10129+((x10130*x10131)>>x10132));

    if (t178 != 255U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x10273 = 0U;
	uint32_t x10274 = UINT32_MAX;
	uint16_t x10276 = 1U;
	static volatile uint32_t t179 = 152993329U;

    t179 = (x10273+((x10274*x10275)>>x10276));

    if (t179 != 2147483644U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x10301 = 97U;
	uint32_t x10302 = UINT32_MAX;
	uint64_t x10303 = 4536864LLU;
	volatile int32_t x10304 = 3;
	uint64_t t180 = 106026635555LLU;

    t180 = (x10301+((x10302*x10303)>>x10304));

    if (t180 != 2435710312732957LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x10313 = INT16_MIN;
	uint8_t x10314 = 1U;
	uint16_t x10315 = 4981U;
	volatile int8_t x10316 = 12;
	int32_t t181 = 86986877;

    t181 = (x10313+((x10314*x10315)>>x10316));

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x10369 = -1LL;
	int64_t x10370 = 0LL;
	int64_t x10371 = INT64_MIN;
	int8_t x10372 = 11;
	int64_t t182 = 13893691655200LL;

    t182 = (x10369+((x10370*x10371)>>x10372));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x10395 = 3551842U;
	uint64_t t183 = 80543501255972LLU;

    t183 = (x10393+((x10394*x10395)>>x10396));

    if (t183 != 233315685920855590LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x10457 = 891800512U;
	static int32_t x10458 = INT32_MIN;
	uint32_t x10459 = 355875U;
	int16_t x10460 = 1;
	uint32_t t184 = 807155U;

    t184 = (x10457+((x10458*x10459)>>x10460));

    if (t184 != 1965542336U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x10461 = UINT64_MAX;
	uint64_t x10462 = 1LLU;
	int64_t x10463 = -14877625359605260LL;
	volatile uint16_t x10464 = 1U;
	volatile uint64_t t185 = 139790LLU;

    t185 = (x10461+((x10462*x10463)>>x10464));

    if (t185 != 9215933224174973177LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x10513 = -1;
	uint32_t x10514 = UINT32_MAX;
	static int8_t x10515 = INT8_MIN;
	volatile uint32_t t186 = 27U;

    t186 = (x10513+((x10514*x10515)>>x10516));

    if (t186 != 15U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x10569 = 0U;
	int64_t x10570 = INT64_MIN;
	static uint8_t x10571 = 0U;
	volatile uint16_t x10572 = 25U;

    t187 = (x10569+((x10570*x10571)>>x10572));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x10745 = -1;
	int64_t x10746 = -3455834LL;
	int32_t x10747 = -3783;
	static int8_t x10748 = 39;
	int64_t t188 = 63688761LL;

    t188 = (x10745+((x10746*x10747)>>x10748));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x10793 = -1LL;
	int8_t x10794 = INT8_MIN;
	static int32_t x10795 = -1;
	uint32_t x10796 = 27U;
	int64_t t189 = 15550254214384676LL;

    t189 = (x10793+((x10794*x10795)>>x10796));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x10906 = INT8_MIN;
	uint64_t x10907 = 1768591614819152LLU;
	volatile uint8_t x10908 = 2U;

    t190 = (x10905+((x10906*x10907)>>x10908));

    if (t190 != 4555091091048142335LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x10909 = INT32_MIN;
	int16_t x10910 = INT16_MIN;
	static uint32_t x10911 = 810163952U;

    t191 = (x10909+((x10910*x10911)>>x10912));

    if (t191 != 4165206016U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x10941 = 11360534LLU;
	uint32_t x10942 = 10U;
	static uint8_t x10943 = UINT8_MAX;
	volatile uint16_t x10944 = 1U;
	uint64_t t192 = 182141283792720LLU;

    t192 = (x10941+((x10942*x10943)>>x10944));

    if (t192 != 11361809LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x11065 = INT64_MIN;
	int64_t x11066 = 0LL;
	volatile int64_t x11067 = -1LL;
	static uint8_t x11068 = 34U;
	volatile int64_t t193 = INT64_MIN;

    t193 = (x11065+((x11066*x11067)>>x11068));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x11117 = 19U;
	static volatile uint32_t x11118 = 339492941U;
	uint16_t x11120 = 2U;
	volatile uint32_t t194 = 40114052U;

    t194 = (x11117+((x11118*x11119)>>x11120));

    if (t194 != 59220487U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x11137 = INT16_MIN;
	uint64_t x11138 = UINT64_MAX;
	int16_t x11139 = -1;

    t195 = (x11137+((x11138*x11139)>>x11140));

    if (t195 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x11141 = INT64_MIN;
	static uint8_t x11142 = 119U;
	volatile uint64_t x11143 = 8418LLU;

    t196 = (x11141+((x11142*x11143)>>x11144));

    if (t196 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x11145 = INT16_MIN;
	volatile int8_t x11146 = -1;
	volatile int8_t x11147 = INT8_MIN;
	uint8_t x11148 = 0U;

    t197 = (x11145+((x11146*x11147)>>x11148));

    if (t197 != -32640) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x11173 = UINT32_MAX;
	uint32_t x11174 = 50023U;
	static volatile int8_t x11175 = 3;
	uint8_t x11176 = 5U;

    t198 = (x11173+((x11174*x11175)>>x11176));

    if (t198 != 4688U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x11266 = 96662109917LL;
	uint16_t x11268 = 5U;
	uint64_t t199 = 273239LLU;

    t199 = (x11265+((x11266*x11267)>>x11268));

    if (t199 != 82185511886738918LLU) { NG(); } else { ; }
	
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

