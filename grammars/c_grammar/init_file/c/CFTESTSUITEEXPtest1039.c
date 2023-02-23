
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

int32_t x3 = 0;
int32_t x29 = 7;
int8_t x30 = INT8_MAX;
int32_t x53 = -1;
int64_t x56 = INT64_MAX;
uint8_t x126 = 35U;
static volatile uint64_t t5 = 876LLU;
int8_t x168 = 54;
int64_t t6 = 80613973382LL;
uint8_t x420 = 17U;
int32_t x493 = INT32_MIN;
uint64_t x496 = UINT64_MAX;
uint32_t x516 = 438U;
static volatile uint32_t t10 = 256573195U;
int16_t x561 = 159;
static uint8_t x564 = 5U;
static int32_t t11 = -3;
uint8_t x716 = 2U;
volatile int32_t t13 = 1359243;
uint64_t t14 = 39292733894127LLU;
int32_t x1066 = 32481548;
int8_t x1067 = 0;
volatile uint32_t t16 = 1U;
static volatile int8_t x1069 = 6;
volatile uint64_t t17 = 6894854900690LLU;
uint32_t x1082 = 2690248U;
int16_t x1293 = -1;
volatile uint8_t x1434 = 6U;
static int32_t t21 = -2;
int16_t x1469 = 0;
volatile int64_t x1614 = INT64_MAX;
volatile int64_t x1714 = 6941714316469652LL;
int8_t x1716 = -1;
uint32_t x1851 = 24U;
int16_t x1852 = -1;
uint64_t t29 = 3515313631678LLU;
int64_t x2085 = -1LL;
int64_t x2122 = INT64_MAX;
static int16_t x2218 = INT16_MAX;
volatile int32_t t32 = 393428;
volatile uint8_t x2351 = 1U;
uint32_t x2413 = 122875U;
volatile uint8_t x2416 = 91U;
static volatile uint8_t x2423 = 2U;
volatile uint64_t t37 = 11LLU;
uint16_t x2783 = 0U;
int32_t t39 = -6;
volatile int16_t x2796 = INT16_MAX;
int64_t t40 = 17899645912820351LL;
int32_t x2901 = INT32_MAX;
uint8_t x2902 = UINT8_MAX;
uint16_t x2903 = 0U;
int32_t x2933 = INT32_MIN;
uint8_t x2950 = UINT8_MAX;
uint64_t x2951 = 15LLU;
volatile int8_t x3106 = INT8_MAX;
uint64_t x3108 = 24557644916760187LLU;
static int8_t x3249 = 35;
uint64_t x3250 = 31612LLU;
static int8_t x3497 = -19;
uint32_t x3702 = UINT32_MAX;
static volatile int64_t t53 = 266987195499634939LL;
int8_t x3843 = 6;
volatile int16_t x3978 = 7398;
volatile int64_t t59 = -19496362318603350LL;
uint32_t x4081 = 40981616U;
volatile uint64_t t60 = 44935757653804639LLU;
uint16_t x4089 = 437U;
volatile int8_t x4342 = 19;
uint16_t x4350 = 1846U;
static int8_t x4352 = 49;
uint64_t x4367 = 1LLU;
static int32_t x4395 = 1;
int16_t x4440 = -1;
uint32_t x4567 = 39U;
uint16_t x4596 = UINT16_MAX;
uint16_t x4693 = UINT16_MAX;
static int32_t x4845 = 4;
volatile int16_t x4876 = 1;
uint32_t x4914 = UINT32_MAX;
int64_t x4916 = INT64_MIN;
static volatile int64_t t77 = 5923LL;
uint32_t x5170 = UINT32_MAX;
static volatile int32_t x5240 = -1771;
int64_t x5461 = 11927223LL;
volatile uint8_t x5462 = UINT8_MAX;
uint8_t x5555 = 6U;
int64_t t87 = 33896920600361307LL;
int64_t t88 = 260LL;
int8_t x5773 = 63;
int8_t x5774 = INT8_MAX;
volatile uint16_t x5775 = 0U;
int16_t x5776 = -1;
static int64_t x5805 = 47767995LL;
int8_t x5807 = 6;
volatile uint64_t x5808 = UINT64_MAX;
uint8_t x6011 = 23U;
uint32_t t93 = 0U;
static uint32_t x6069 = 21942071U;
uint64_t t94 = 434984LLU;
volatile uint64_t t96 = 277708765349734LLU;
static int32_t x6160 = -1;
volatile uint16_t x6301 = 7U;
volatile int64_t t99 = -274579943LL;
static int8_t x6471 = 2;
int64_t x6472 = INT64_MIN;
volatile uint64_t x6498 = 0LLU;
int16_t x6521 = INT16_MIN;
uint8_t x6717 = 64U;
volatile int64_t x6728 = INT64_MAX;
uint64_t t107 = 106373LLU;
static uint8_t x6783 = 6U;
static uint32_t x6853 = UINT32_MAX;
uint8_t x6855 = 8U;
int8_t x6907 = 12;
uint64_t x6925 = 11806LLU;
uint32_t x6926 = UINT32_MAX;
static volatile int64_t x7072 = INT64_MIN;
volatile uint32_t t116 = 418U;
static uint8_t x7202 = UINT8_MAX;
int8_t x7283 = 5;
uint64_t x7284 = 127LLU;
volatile uint8_t x7331 = 0U;
int16_t x7569 = INT16_MIN;
static uint16_t x7572 = UINT16_MAX;
static int32_t t121 = -57;
uint16_t x7589 = 4U;
volatile uint32_t t123 = 24U;
volatile uint8_t x7665 = UINT8_MAX;
static uint8_t x7858 = 25U;
uint8_t x8096 = UINT8_MAX;
uint8_t x8267 = 3U;
int32_t x8278 = 2;
int64_t t135 = -5215158746LL;
int16_t x8617 = 0;
volatile int32_t t138 = 112567701;
uint64_t x9013 = 5722314LLU;
static uint32_t t140 = 12058U;
volatile int64_t t141 = 2LL;
volatile int16_t x9129 = INT16_MIN;
uint32_t x9143 = 12U;
volatile uint64_t t144 = 1497434038105805LLU;
uint16_t x9291 = 13U;
volatile uint64_t t147 = 378347LLU;
uint64_t x9428 = 3078LLU;
int8_t x9487 = 22;
static int8_t x9488 = -8;
uint8_t x9607 = 3U;
uint8_t x9611 = 1U;
int32_t x9612 = INT32_MAX;
uint16_t x10127 = 0U;
uint32_t x10193 = 0U;
volatile uint16_t x10194 = 9U;
static int16_t x10196 = INT16_MAX;
uint8_t x10269 = 12U;
int8_t x10407 = 3;
int8_t x10408 = INT8_MAX;
volatile uint64_t t163 = 25064892893423291LLU;
static uint32_t x10542 = UINT32_MAX;
int8_t x10544 = -1;
int8_t x10671 = 1;
volatile uint64_t t166 = 22297635238LLU;
uint8_t x10739 = 3U;
int16_t x10740 = -1;
int32_t t168 = -13440;
uint8_t x10754 = UINT8_MAX;
int64_t x10836 = INT64_MIN;
static uint8_t x11118 = 6U;
int8_t x11196 = INT8_MIN;
int64_t t175 = -29LL;
volatile uint8_t x11447 = 1U;
int32_t x11753 = INT32_MIN;
int64_t t177 = -27345142LL;
volatile int16_t x11794 = 151;
volatile uint64_t t178 = 45391LLU;
uint64_t t179 = 3451166029799184900LLU;
volatile int64_t x12033 = INT64_MIN;
static int32_t x12065 = INT32_MIN;
static uint64_t x12066 = UINT64_MAX;
static uint64_t x12068 = 13125091389709LLU;
static uint64_t t183 = 29815957968631748LLU;
volatile uint32_t x12171 = 1U;
int32_t x12172 = -1;
int8_t x12181 = -7;
int64_t x12184 = -1LL;
int64_t t185 = 13113530LL;
uint32_t x12225 = 1996U;
volatile int8_t x12344 = 7;
volatile uint64_t x12538 = UINT64_MAX;
volatile int32_t x12654 = 0;
int8_t x12885 = INT8_MAX;
int64_t x12981 = 1LL;
static volatile int64_t t193 = -5449LL;
static int16_t x13073 = -1;
static int8_t x13287 = 18;
uint32_t x13288 = 248354U;
uint32_t t195 = 105427U;


void f0(void) {
    	int64_t x1 = 322442LL;
	uint16_t x2 = 2U;
	int8_t x4 = INT8_MIN;
	static int64_t t0 = -321398508438LL;

    t0 = (x1*((x2<<x3)%x4));

    if (t0 != 644884LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x17 = -88;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 9U;
	int16_t x20 = -23;
	volatile int32_t t1 = -994193201;

    t1 = (x17*((x18<<x19)%x20));

    if (t1 != -176) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = 1343537604575675807LL;
	uint64_t x26 = 2997800592824LLU;
	static uint16_t x27 = 1U;
	int16_t x28 = -1;
	volatile uint64_t t2 = 17807722808938LLU;

    t2 = (x25*((x26<<x27)%x28));

    if (t2 != 401259446254078608LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x31 = 0U;
	static int16_t x32 = -1;
	volatile int32_t t3 = -7816948;

    t3 = (x29*((x30<<x31)%x32));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x54 = 0U;
	static int8_t x55 = 0;
	int64_t t4 = -2079700LL;

    t4 = (x53*((x54<<x55)%x56));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x125 = 831854LLU;
	static volatile uint16_t x127 = 5U;
	uint32_t x128 = 15967328U;

    t5 = (x125*((x126<<x127)%x128));

    if (t5 != 931676480LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x165 = -1LL;
	static volatile int8_t x166 = INT8_MAX;
	uint16_t x167 = 1U;

    t6 = (x165*((x166<<x167)%x168));

    if (t6 != -38LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x417 = 6617806314934035LL;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = 0;
	volatile int64_t t7 = 57112522223LL;

    t7 = (x417*((x418<<x419)%x420));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x421 = INT8_MIN;
	uint32_t x422 = 258494952U;
	uint16_t x423 = 1U;
	static int16_t x424 = INT16_MAX;
	uint32_t t8 = 660U;

    t8 = (x421*((x422<<x423)%x424));

    if (t8 != 4291774336U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x494 = 256380199U;
	static uint8_t x495 = 28U;
	volatile uint64_t t9 = 58257744LLU;

    t9 = (x493*((x494<<x495)%x496));

    if (t9 != 14411518807585587200LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x513 = INT16_MIN;
	volatile uint16_t x514 = 96U;
	static uint8_t x515 = 2U;

    t10 = (x513*((x514<<x515)%x516));

    if (t10 != 4282384384U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x562 = 3;
	static int8_t x563 = 1;

    t11 = (x561*((x562<<x563)%x564));

    if (t11 != 159) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x713 = 55;
	uint64_t x714 = UINT64_MAX;
	int8_t x715 = 2;
	volatile uint64_t t12 = 918LLU;

    t12 = (x713*((x714<<x715)%x716));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x825 = 1U;
	uint16_t x826 = 208U;
	int8_t x827 = 2;
	uint8_t x828 = 1U;

    t13 = (x825*((x826<<x827)%x828));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x961 = INT16_MIN;
	uint64_t x962 = UINT64_MAX;
	uint16_t x963 = 1U;
	int16_t x964 = -1042;

    t14 = (x961*((x962<<x963)%x964));

    if (t14 != 18446744073675472896LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x1029 = 5312LLU;
	static uint64_t x1030 = UINT64_MAX;
	int8_t x1031 = 0;
	static uint64_t x1032 = UINT64_MAX;
	static volatile uint64_t t15 = 52419748693085360LLU;

    t15 = (x1029*((x1030<<x1031)%x1032));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1065 = 1017U;
	static int8_t x1068 = 3;

    t16 = (x1065*((x1066<<x1067)%x1068));

    if (t16 != 2034U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x1070 = 11318712438LLU;
	uint16_t x1071 = 12U;
	int8_t x1072 = -1;

    t17 = (x1069*((x1070<<x1071)%x1072));

    if (t17 != 278168676876288LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x1081 = UINT64_MAX;
	uint8_t x1083 = 2U;
	int32_t x1084 = INT32_MIN;
	uint64_t t18 = 44LLU;

    t18 = (x1081*((x1082<<x1083)%x1084));

    if (t18 != 18446744073698790624LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x1249 = 4U;
	uint8_t x1250 = 6U;
	uint8_t x1251 = 10U;
	int16_t x1252 = INT16_MIN;
	int32_t t19 = 1;

    t19 = (x1249*((x1250<<x1251)%x1252));

    if (t19 != 24576) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1294 = 1U;
	int16_t x1295 = 1;
	static int16_t x1296 = -1;
	volatile int32_t t20 = 16162241;

    t20 = (x1293*((x1294<<x1295)%x1296));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1433 = INT8_MIN;
	static int16_t x1435 = 1;
	volatile int16_t x1436 = INT16_MIN;

    t21 = (x1433*((x1434<<x1435)%x1436));

    if (t21 != -1536) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1470 = 32719336339427647LLU;
	int16_t x1471 = 11;
	uint16_t x1472 = 81U;
	volatile uint64_t t22 = 341144462LLU;

    t22 = (x1469*((x1470<<x1471)%x1472));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1497 = INT16_MIN;
	int32_t x1498 = 0;
	uint64_t x1499 = 8LLU;
	uint16_t x1500 = 1610U;
	int32_t t23 = -3;

    t23 = (x1497*((x1498<<x1499)%x1500));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1613 = UINT64_MAX;
	volatile int8_t x1615 = 0;
	volatile int64_t x1616 = -1LL;
	static volatile uint64_t t24 = 388LLU;

    t24 = (x1613*((x1614<<x1615)%x1616));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1649 = -26;
	uint8_t x1650 = UINT8_MAX;
	static volatile int8_t x1651 = 0;
	int16_t x1652 = -1;
	int32_t t25 = -121;

    t25 = (x1649*((x1650<<x1651)%x1652));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1713 = -1;
	int8_t x1715 = 1;
	static int64_t t26 = -29443799LL;

    t26 = (x1713*((x1714<<x1715)%x1716));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1849 = INT16_MAX;
	uint16_t x1850 = 8U;
	int32_t t27 = -1;

    t27 = (x1849*((x1850<<x1851)%x1852));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1905 = 32281U;
	uint64_t x1906 = 7989369877297792LLU;
	static uint64_t x1907 = 5LLU;
	int16_t x1908 = -1;
	uint64_t t28 = 583205765972552LLU;

    t28 = (x1905*((x1906<<x1907)%x1908));

    if (t28 != 7260567341431181312LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1933 = 66U;
	static uint64_t x1934 = UINT64_MAX;
	uint16_t x1935 = 13U;
	int64_t x1936 = -7853021225757783LL;

    t29 = (x1933*((x1934<<x1935)%x1936));

    if (t29 != 518299400899473006LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x2086 = 38228700;
	uint64_t x2087 = 4LLU;
	uint8_t x2088 = UINT8_MAX;
	volatile int64_t t30 = -22069LL;

    t30 = (x2085*((x2086<<x2087)%x2088));

    if (t30 != -135LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x2121 = 216U;
	static volatile int8_t x2123 = 0;
	int32_t x2124 = 49520;
	int64_t t31 = -252558524LL;

    t31 = (x2121*((x2122<<x2123)%x2124));

    if (t31 != 2550312LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x2217 = UINT16_MAX;
	uint16_t x2219 = 5U;
	volatile int32_t x2220 = -1;

    t32 = (x2217*((x2218<<x2219)%x2220));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x2349 = 376U;
	volatile uint16_t x2350 = UINT16_MAX;
	static int8_t x2352 = -1;
	volatile uint32_t t33 = 1005691297U;

    t33 = (x2349*((x2350<<x2351)%x2352));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2414 = 0U;
	int32_t x2415 = 1;
	uint32_t t34 = 5237U;

    t34 = (x2413*((x2414<<x2415)%x2416));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2421 = INT8_MIN;
	uint32_t x2422 = 26126U;
	int32_t x2424 = -3;
	volatile uint32_t t35 = 652931874U;

    t35 = (x2421*((x2422<<x2423)%x2424));

    if (t35 != 4281590784U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x2533 = -4407;
	int8_t x2534 = 1;
	int16_t x2535 = 0;
	int64_t x2536 = INT64_MIN;
	static int64_t t36 = 53932000072974984LL;

    t36 = (x2533*((x2534<<x2535)%x2536));

    if (t36 != -4407LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2653 = UINT16_MAX;
	uint64_t x2654 = 14LLU;
	uint8_t x2655 = 7U;
	int32_t x2656 = INT32_MAX;

    t37 = (x2653*((x2654<<x2655)%x2656));

    if (t37 != 117438720LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2705 = INT8_MIN;
	volatile int32_t x2706 = 111729;
	volatile int16_t x2707 = 14;
	int32_t x2708 = 3510001;
	volatile int32_t t38 = -10;

    t38 = (x2705*((x2706<<x2707)%x2708));

    if (t38 != -237749120) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x2781 = UINT16_MAX;
	int16_t x2782 = 5;
	volatile uint8_t x2784 = 7U;

    t39 = (x2781*((x2782<<x2783)%x2784));

    if (t39 != 327675) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2793 = 11685686263580126LL;
	int16_t x2794 = 1;
	int8_t x2795 = 4;

    t40 = (x2793*((x2794<<x2795)%x2796));

    if (t40 != 186970980217282016LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2845 = INT8_MAX;
	uint8_t x2846 = 0U;
	uint32_t x2847 = 9U;
	static int16_t x2848 = INT16_MIN;
	int32_t t41 = -466609744;

    t41 = (x2845*((x2846<<x2847)%x2848));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2904 = -19204960LL;
	int64_t t42 = -7018921LL;

    t42 = (x2901*((x2902<<x2903)%x2904));

    if (t42 != 547608329985LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2934 = 7;
	static uint16_t x2935 = 7U;
	int64_t x2936 = 3869681917071737LL;
	int64_t t43 = -672LL;

    t43 = (x2933*((x2934<<x2935)%x2936));

    if (t43 != -1924145348608LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x2949 = INT32_MIN;
	static int8_t x2952 = INT8_MIN;
	volatile int32_t t44 = -123;

    t44 = (x2949*((x2950<<x2951)%x2952));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3061 = UINT16_MAX;
	static uint64_t x3062 = UINT64_MAX;
	volatile int8_t x3063 = 4;
	uint32_t x3064 = UINT32_MAX;
	volatile uint64_t t45 = 2515686105435178LLU;

    t45 = (x3061*((x3062<<x3063)%x3064));

    if (t45 != 281470680694800LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3105 = INT64_MIN;
	int8_t x3107 = 9;
	volatile uint64_t t46 = 3871233240LLU;

    t46 = (x3105*((x3106<<x3107)%x3108));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3153 = INT32_MAX;
	int64_t x3154 = 115146831LL;
	uint8_t x3155 = 6U;
	static uint8_t x3156 = UINT8_MAX;
	volatile int64_t t47 = -5373271452LL;

    t47 = (x3153*((x3154<<x3155)%x3156));

    if (t47 != 438086663988LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3251 = 25U;
	int32_t x3252 = INT32_MAX;
	uint64_t t48 = 97518132LLU;

    t48 = (x3249*((x3250<<x3251)%x3252));

    if (t48 != 70464324455LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x3498 = 6;
	volatile int8_t x3499 = 1;
	uint16_t x3500 = UINT16_MAX;
	volatile int32_t t49 = -56;

    t49 = (x3497*((x3498<<x3499)%x3500));

    if (t49 != -228) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x3557 = 1;
	uint8_t x3558 = 124U;
	int8_t x3559 = 1;
	static uint8_t x3560 = UINT8_MAX;
	int32_t t50 = 4040514;

    t50 = (x3557*((x3558<<x3559)%x3560));

    if (t50 != 248) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x3561 = 77U;
	static uint8_t x3562 = UINT8_MAX;
	int64_t x3563 = 1LL;
	int8_t x3564 = -2;
	volatile int32_t t51 = 2;

    t51 = (x3561*((x3562<<x3563)%x3564));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x3701 = 46655934U;
	volatile uint16_t x3703 = 26U;
	uint8_t x3704 = 67U;
	volatile uint32_t t52 = 233729888U;

    t52 = (x3701*((x3702<<x3703)%x3704));

    if (t52 != 2052861096U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3749 = -22;
	uint32_t x3750 = 119412U;
	static int8_t x3751 = 1;
	volatile int64_t x3752 = -22929805369591959LL;

    t53 = (x3749*((x3750<<x3751)%x3752));

    if (t53 != -5254128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3821 = INT8_MIN;
	int32_t x3822 = 328637;
	volatile uint64_t x3823 = 0LLU;
	uint64_t x3824 = 2174467179951577LLU;
	volatile uint64_t t54 = 10LLU;

    t54 = (x3821*((x3822<<x3823)%x3824));

    if (t54 != 18446744073667486080LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3841 = 52U;
	static uint16_t x3842 = 2680U;
	int64_t x3844 = -3331731275LL;
	volatile int64_t t55 = 2710409964170LL;

    t55 = (x3841*((x3842<<x3843)%x3844));

    if (t55 != 8919040LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x3865 = INT64_MIN;
	static volatile uint16_t x3866 = 199U;
	uint8_t x3867 = 20U;
	volatile int8_t x3868 = -1;
	int64_t t56 = -4LL;

    t56 = (x3865*((x3866<<x3867)%x3868));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x3977 = -1;
	uint8_t x3979 = 7U;
	static int32_t x3980 = -1;
	int32_t t57 = -544;

    t57 = (x3977*((x3978<<x3979)%x3980));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x4001 = INT8_MIN;
	uint16_t x4002 = UINT16_MAX;
	uint16_t x4003 = 7U;
	int8_t x4004 = INT8_MAX;
	volatile int32_t t58 = 26001;

    t58 = (x4001*((x4002<<x4003)%x4004));

    if (t58 != -384) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4045 = -1171LL;
	static uint32_t x4046 = 175U;
	int8_t x4047 = 23;
	volatile int16_t x4048 = INT16_MIN;

    t59 = (x4045*((x4046<<x4047)%x4048));

    if (t59 != -1719035494400LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4082 = 5456625172264944LLU;
	volatile int32_t x4083 = 1;
	int64_t x4084 = 426695628513801LL;

    t60 = (x4081*((x4082<<x4083)%x4084));

    if (t60 != 3802751365073296272LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x4090 = INT64_MAX;
	uint8_t x4091 = 0U;
	int8_t x4092 = INT8_MAX;
	int64_t t61 = -678LL;

    t61 = (x4089*((x4090<<x4091)%x4092));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x4233 = 76;
	volatile uint8_t x4234 = 1U;
	volatile int64_t x4235 = 1LL;
	volatile uint16_t x4236 = UINT16_MAX;
	static int32_t t62 = -174;

    t62 = (x4233*((x4234<<x4235)%x4236));

    if (t62 != 152) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x4273 = 1U;
	uint8_t x4274 = 12U;
	uint8_t x4275 = 0U;
	uint64_t x4276 = 8768524LLU;
	uint64_t t63 = 11011939882259595LLU;

    t63 = (x4273*((x4274<<x4275)%x4276));

    if (t63 != 12LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x4341 = UINT32_MAX;
	uint64_t x4343 = 17LLU;
	int32_t x4344 = -121;
	static uint32_t t64 = 751U;

    t64 = (x4341*((x4342<<x4343)%x4344));

    if (t64 != 4294967229U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x4349 = 10;
	int16_t x4351 = 20;
	volatile int32_t t65 = 246008;

    t65 = (x4349*((x4350<<x4351)%x4352));

    if (t65 != 410) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x4365 = INT32_MIN;
	uint32_t x4366 = 18U;
	uint16_t x4368 = 319U;
	volatile uint32_t t66 = 73U;

    t66 = (x4365*((x4366<<x4367)%x4368));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x4393 = UINT16_MAX;
	int16_t x4394 = INT16_MAX;
	uint16_t x4396 = 190U;
	volatile int32_t t67 = -98791;

    t67 = (x4393*((x4394<<x4395)%x4396));

    if (t67 != 11403090) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x4437 = INT64_MAX;
	volatile uint64_t x4438 = UINT64_MAX;
	int16_t x4439 = 17;
	volatile uint64_t t68 = 369LLU;

    t68 = (x4437*((x4438<<x4439)%x4440));

    if (t68 != 131072LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4565 = INT8_MIN;
	volatile uint64_t x4566 = UINT64_MAX;
	volatile int8_t x4568 = -31;
	static volatile uint64_t t69 = 5993316LLU;

    t69 = (x4565*((x4566<<x4567)%x4568));

    if (t69 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x4593 = 27337301029044LLU;
	int8_t x4594 = INT8_MAX;
	int16_t x4595 = 3;
	volatile uint64_t t70 = 15771507LLU;

    t70 = (x4593*((x4594<<x4595)%x4596));

    if (t70 != 27774697845508704LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x4694 = INT16_MAX;
	static uint16_t x4695 = 4U;
	int64_t x4696 = 29092LL;
	volatile int64_t t71 = 10122795025478LL;

    t71 = (x4693*((x4694<<x4695)%x4696));

    if (t71 != 40369560LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x4793 = -1;
	int16_t x4794 = INT16_MAX;
	uint64_t x4795 = 0LLU;
	static int32_t x4796 = INT32_MAX;
	volatile int32_t t72 = -16;

    t72 = (x4793*((x4794<<x4795)%x4796));

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x4846 = 1;
	volatile int8_t x4847 = 1;
	int64_t x4848 = 28073364270390LL;
	static volatile int64_t t73 = -59LL;

    t73 = (x4845*((x4846<<x4847)%x4848));

    if (t73 != 8LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x4873 = 1;
	uint64_t x4874 = UINT64_MAX;
	uint8_t x4875 = 6U;
	uint64_t t74 = 509636928190LLU;

    t74 = (x4873*((x4874<<x4875)%x4876));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x4913 = 3U;
	uint64_t x4915 = 1LLU;
	int64_t t75 = -13481312687460LL;

    t75 = (x4913*((x4914<<x4915)%x4916));

    if (t75 != 12884901882LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x4929 = UINT32_MAX;
	volatile uint16_t x4930 = UINT16_MAX;
	int8_t x4931 = 3;
	int8_t x4932 = -3;
	uint32_t t76 = 6993U;

    t76 = (x4929*((x4930<<x4931)%x4932));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4993 = -1;
	uint8_t x4994 = 0U;
	uint8_t x4995 = 1U;
	static volatile int64_t x4996 = -1LL;

    t77 = (x4993*((x4994<<x4995)%x4996));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x5169 = UINT8_MAX;
	uint16_t x5171 = 10U;
	volatile int32_t x5172 = -1;
	uint32_t t78 = 22276U;

    t78 = (x5169*((x5170<<x5171)%x5172));

    if (t78 != 4294706176U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x5205 = INT16_MIN;
	volatile int8_t x5206 = INT8_MAX;
	int16_t x5207 = 23;
	static int8_t x5208 = INT8_MAX;
	static volatile int32_t t79 = 46191;

    t79 = (x5205*((x5206<<x5207)%x5208));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x5233 = 1;
	int16_t x5234 = INT16_MAX;
	uint8_t x5235 = 4U;
	int64_t x5236 = 6850LL;
	int64_t t80 = 0LL;

    t80 = (x5233*((x5234<<x5235)%x5236));

    if (t80 != 3672LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x5237 = INT8_MIN;
	int8_t x5238 = INT8_MAX;
	volatile int16_t x5239 = 1;
	int32_t t81 = 0;

    t81 = (x5237*((x5238<<x5239)%x5240));

    if (t81 != -32512) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x5357 = 3907;
	uint32_t x5358 = 569875006U;
	volatile uint64_t x5359 = 24LLU;
	volatile int16_t x5360 = -5;
	uint32_t t82 = 1370031U;

    t82 = (x5357*((x5358<<x5359)%x5360));

    if (t82 != 973078528U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x5429 = 7U;
	uint16_t x5430 = UINT16_MAX;
	static int32_t x5431 = 9;
	uint64_t x5432 = 61382050562055LLU;
	uint64_t t83 = 6477LLU;

    t83 = (x5429*((x5430<<x5431)%x5432));

    if (t83 != 234877440LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x5437 = 12U;
	int8_t x5438 = INT8_MAX;
	uint32_t x5439 = 1U;
	int8_t x5440 = -1;
	int32_t t84 = -85;

    t84 = (x5437*((x5438<<x5439)%x5440));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x5463 = 7U;
	int32_t x5464 = INT32_MAX;
	volatile int64_t t85 = 284393423461LL;

    t85 = (x5461*((x5462<<x5463)%x5464));

    if (t85 != 389304558720LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x5553 = 19;
	static uint8_t x5554 = 7U;
	uint64_t x5556 = UINT64_MAX;
	static volatile uint64_t t86 = 149957458LLU;

    t86 = (x5553*((x5554<<x5555)%x5556));

    if (t86 != 8512LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x5569 = 48548;
	uint32_t x5570 = 18789814U;
	volatile uint8_t x5571 = 0U;
	volatile int64_t x5572 = INT64_MIN;

    t87 = (x5569*((x5570<<x5571)%x5572));

    if (t87 != 912207890072LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x5705 = UINT16_MAX;
	static uint8_t x5706 = 0U;
	static volatile int8_t x5707 = 3;
	int64_t x5708 = -1LL;

    t88 = (x5705*((x5706<<x5707)%x5708));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t t89 = -22150;

    t89 = (x5773*((x5774<<x5775)%x5776));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x5806 = 5U;
	volatile uint64_t t90 = 2825742569507909099LLU;

    t90 = (x5805*((x5806<<x5807)%x5808));

    if (t90 != 15285758400LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x5833 = 2U;
	int64_t x5834 = 1LL;
	int32_t x5835 = 1;
	static uint8_t x5836 = 77U;
	volatile int64_t t91 = -65588399290LL;

    t91 = (x5833*((x5834<<x5835)%x5836));

    if (t91 != 4LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5881 = 1U;
	uint16_t x5882 = UINT16_MAX;
	uint8_t x5883 = 0U;
	static int32_t x5884 = -1;
	volatile int32_t t92 = 102;

    t92 = (x5881*((x5882<<x5883)%x5884));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x6009 = INT16_MAX;
	uint32_t x6010 = 31U;
	int8_t x6012 = INT8_MIN;

    t93 = (x6009*((x6010<<x6011)%x6012));

    if (t93 != 4034920448U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x6070 = 4803U;
	volatile uint8_t x6071 = 1U;
	volatile uint64_t x6072 = UINT64_MAX;

    t94 = (x6069*((x6070<<x6071)%x6072));

    if (t94 != 210775534026LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x6073 = 7U;
	volatile uint8_t x6074 = UINT8_MAX;
	static uint8_t x6075 = 1U;
	int16_t x6076 = INT16_MIN;
	int32_t t95 = 26;

    t95 = (x6073*((x6074<<x6075)%x6076));

    if (t95 != 3570) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x6113 = -5;
	uint8_t x6114 = 3U;
	uint64_t x6115 = 10LLU;
	uint64_t x6116 = 159361LLU;

    t96 = (x6113*((x6114<<x6115)%x6116));

    if (t96 != 18446744073709536256LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x6157 = INT64_MIN;
	int64_t x6158 = 220657LL;
	uint16_t x6159 = 9U;
	volatile int64_t t97 = -4884145LL;

    t97 = (x6157*((x6158<<x6159)%x6160));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x6297 = INT8_MIN;
	uint16_t x6298 = 15U;
	uint8_t x6299 = 15U;
	int32_t x6300 = -11177;
	static int32_t t98 = -54544800;

    t98 = (x6297*((x6298<<x6299)%x6300));

    if (t98 != -1396352) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x6302 = UINT8_MAX;
	uint32_t x6303 = 15U;
	int64_t x6304 = INT64_MIN;

    t99 = (x6301*((x6302<<x6303)%x6304));

    if (t99 != 58490880LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x6369 = 31U;
	uint64_t x6370 = 3LLU;
	static uint64_t x6371 = 7LLU;
	int64_t x6372 = INT64_MIN;
	uint64_t t100 = 115847064020168740LLU;

    t100 = (x6369*((x6370<<x6371)%x6372));

    if (t100 != 11904LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x6465 = -60;
	uint16_t x6466 = UINT16_MAX;
	static int8_t x6467 = 1;
	int8_t x6468 = INT8_MIN;
	static volatile int32_t t101 = 67485616;

    t101 = (x6465*((x6466<<x6467)%x6468));

    if (t101 != -7560) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x6469 = INT32_MAX;
	int8_t x6470 = 7;
	volatile int64_t t102 = -37958220457672LL;

    t102 = (x6469*((x6470<<x6471)%x6472));

    if (t102 != 60129542116LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x6497 = -3;
	static uint16_t x6499 = 7U;
	int8_t x6500 = INT8_MIN;
	uint64_t t103 = 4129102LLU;

    t103 = (x6497*((x6498<<x6499)%x6500));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x6522 = 442686447011LL;
	uint8_t x6523 = 4U;
	volatile int16_t x6524 = -1;
	static int64_t t104 = 73780912413137LL;

    t104 = (x6521*((x6522<<x6523)%x6524));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x6718 = 1126923149LL;
	uint8_t x6719 = 1U;
	uint8_t x6720 = 1U;
	int64_t t105 = -329697LL;

    t105 = (x6717*((x6718<<x6719)%x6720));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x6725 = -262135;
	uint32_t x6726 = UINT32_MAX;
	int8_t x6727 = 2;
	volatile int64_t t106 = -1LL;

    t106 = (x6725*((x6726<<x6727)%x6728));

    if (t106 != -1125861251088420LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x6777 = INT64_MIN;
	uint64_t x6778 = 36664341050LLU;
	static int8_t x6779 = 2;
	static int8_t x6780 = INT8_MIN;

    t107 = (x6777*((x6778<<x6779)%x6780));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x6781 = -15701;
	uint16_t x6782 = 26679U;
	uint32_t x6784 = 19789U;
	volatile uint32_t t108 = 12167795U;

    t108 = (x6781*((x6782<<x6783)%x6784));

    if (t108 != 4207010294U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x6785 = 1;
	volatile int64_t x6786 = 1195934180095538LL;
	uint8_t x6787 = 10U;
	int8_t x6788 = INT8_MIN;
	int64_t t109 = 104LL;

    t109 = (x6785*((x6786<<x6787)%x6788));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x6854 = 103750293252602910LLU;
	volatile int16_t x6856 = 173;
	volatile uint64_t t110 = 7LLU;

    t110 = (x6853*((x6854<<x6855)%x6856));

    if (t110 != 81604378605LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x6905 = INT64_MAX;
	static uint64_t x6906 = UINT64_MAX;
	int16_t x6908 = INT16_MIN;
	static uint64_t t111 = 3463223786LLU;

    t111 = (x6905*((x6906<<x6907)%x6908));

    if (t111 != 18446744073709522944LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x6927 = 0U;
	int64_t x6928 = INT64_MIN;
	static volatile uint64_t t112 = 1305194154938709LLU;

    t112 = (x6925*((x6926<<x6927)%x6928));

    if (t112 != 50706383884770LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x6953 = 8045U;
	volatile uint64_t x6954 = 3394496810666LLU;
	uint8_t x6955 = 0U;
	int32_t x6956 = -4819;
	uint64_t t113 = 6392405478937367LLU;

    t113 = (x6953*((x6954<<x6955)%x6956));

    if (t113 != 27308726841807970LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x7049 = -2408018LL;
	int16_t x7050 = 0;
	uint8_t x7051 = 8U;
	volatile uint16_t x7052 = UINT16_MAX;
	static int64_t t114 = -1066246852445715483LL;

    t114 = (x7049*((x7050<<x7051)%x7052));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x7069 = 54447U;
	static uint32_t x7070 = 103744163U;
	uint8_t x7071 = 6U;
	int64_t t115 = 1028397055611LL;

    t115 = (x7069*((x7070<<x7071)%x7072));

    if (t115 != 127659655977792LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x7073 = INT16_MIN;
	uint32_t x7074 = UINT32_MAX;
	int32_t x7075 = 9;
	static uint8_t x7076 = 1U;

    t116 = (x7073*((x7074<<x7075)%x7076));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x7201 = 378U;
	volatile uint8_t x7203 = 12U;
	int32_t x7204 = INT32_MAX;
	static uint32_t t117 = 2U;

    t117 = (x7201*((x7202<<x7203)%x7204));

    if (t117 != 394813440U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x7277 = INT16_MIN;
	uint64_t x7278 = 3LLU;
	uint16_t x7279 = 0U;
	uint16_t x7280 = 692U;
	uint64_t t118 = 956LLU;

    t118 = (x7277*((x7278<<x7279)%x7280));

    if (t118 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x7281 = -1;
	uint64_t x7282 = 151605167769978457LLU;
	volatile uint64_t t119 = 3047247016LLU;

    t119 = (x7281*((x7282<<x7283)%x7284));

    if (t119 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x7329 = UINT16_MAX;
	uint32_t x7330 = 267281835U;
	int16_t x7332 = INT16_MIN;
	volatile uint32_t t120 = 120U;

    t120 = (x7329*((x7330<<x7331)%x7332));

    if (t120 != 1438423637U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x7570 = 1U;
	uint8_t x7571 = 4U;

    t121 = (x7569*((x7570<<x7571)%x7572));

    if (t121 != -524288) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x7590 = 124U;
	int8_t x7591 = 1;
	int32_t x7592 = INT32_MIN;
	int32_t t122 = -2;

    t122 = (x7589*((x7590<<x7591)%x7592));

    if (t122 != 992) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x7613 = UINT32_MAX;
	static volatile int32_t x7614 = 224;
	volatile uint8_t x7615 = 3U;
	static volatile int32_t x7616 = INT32_MIN;

    t123 = (x7613*((x7614<<x7615)%x7616));

    if (t123 != 4294965504U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x7666 = 9U;
	int32_t x7667 = 1;
	int16_t x7668 = INT16_MIN;
	static volatile uint32_t t124 = 1U;

    t124 = (x7665*((x7666<<x7667)%x7668));

    if (t124 != 4590U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x7725 = UINT16_MAX;
	static volatile uint32_t x7726 = 4738673U;
	static volatile int64_t x7727 = 1LL;
	uint8_t x7728 = 64U;
	volatile uint32_t t125 = 2090U;

    t125 = (x7725*((x7726<<x7727)%x7728));

    if (t125 != 2228190U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x7757 = 1319637;
	int8_t x7758 = 10;
	volatile uint8_t x7759 = 3U;
	int16_t x7760 = -13872;
	int32_t t126 = 6104;

    t126 = (x7757*((x7758<<x7759)%x7760));

    if (t126 != 105570960) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x7841 = 31;
	static uint64_t x7842 = 3840LLU;
	uint32_t x7843 = 5U;
	int8_t x7844 = INT8_MIN;
	volatile uint64_t t127 = 265775042384LLU;

    t127 = (x7841*((x7842<<x7843)%x7844));

    if (t127 != 3809280LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x7857 = -1LL;
	static int8_t x7859 = 2;
	int32_t x7860 = INT32_MIN;
	int64_t t128 = -31820990662326LL;

    t128 = (x7857*((x7858<<x7859)%x7860));

    if (t128 != -100LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x7957 = INT16_MIN;
	int64_t x7958 = INT64_MAX;
	volatile uint8_t x7959 = 0U;
	int32_t x7960 = INT32_MAX;
	int64_t t129 = 155338LL;

    t129 = (x7957*((x7958<<x7959)%x7960));

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x8093 = 39878162818230652LLU;
	int64_t x8094 = 81639LL;
	int64_t x8095 = 0LL;
	uint64_t t130 = 1855596230LLU;

    t130 = (x8093*((x8094<<x8095)%x8096));

    if (t130 != 1555248349910995428LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x8229 = INT8_MAX;
	uint16_t x8230 = 307U;
	static uint8_t x8231 = 1U;
	static int32_t x8232 = INT32_MAX;
	static int32_t t131 = -2469403;

    t131 = (x8229*((x8230<<x8231)%x8232));

    if (t131 != 77978) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x8265 = -1LL;
	int16_t x8266 = INT16_MAX;
	volatile int16_t x8268 = INT16_MIN;
	volatile int64_t t132 = 123562789116763LL;

    t132 = (x8265*((x8266<<x8267)%x8268));

    if (t132 != -32760LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x8277 = -1;
	uint8_t x8279 = 21U;
	uint16_t x8280 = 24497U;
	static volatile int32_t t133 = -4831;

    t133 = (x8277*((x8278<<x8279)%x8280));

    if (t133 != -5317) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x8389 = INT32_MIN;
	int32_t x8390 = 1;
	volatile uint8_t x8391 = 2U;
	int64_t x8392 = INT64_MIN;
	int64_t t134 = -7LL;

    t134 = (x8389*((x8390<<x8391)%x8392));

    if (t134 != -8589934592LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x8597 = -11772796764LL;
	static volatile uint32_t x8598 = 3927232U;
	int8_t x8599 = 1;
	int64_t x8600 = INT64_MIN;

    t135 = (x8597*((x8598<<x8599)%x8600));

    if (t135 != -92469008362154496LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x8618 = 1739112432355050392LLU;
	uint8_t x8619 = 2U;
	int32_t x8620 = INT32_MIN;
	uint64_t t136 = 1903509684112LLU;

    t136 = (x8617*((x8618<<x8619)%x8620));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x8829 = INT16_MAX;
	volatile int16_t x8830 = INT16_MAX;
	int32_t x8831 = 2;
	volatile int64_t x8832 = INT64_MAX;
	int64_t t137 = -87879LL;

    t137 = (x8829*((x8830<<x8831)%x8832));

    if (t137 != 4294705156LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x8945 = 6U;
	int16_t x8946 = INT16_MAX;
	static uint8_t x8947 = 1U;
	int16_t x8948 = -1;

    t138 = (x8945*((x8946<<x8947)%x8948));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x9014 = 21U;
	int16_t x9015 = 10;
	volatile int16_t x9016 = 7;
	uint64_t t139 = 847850975LLU;

    t139 = (x9013*((x9014<<x9015)%x9016));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x9057 = UINT16_MAX;
	uint32_t x9058 = UINT32_MAX;
	uint16_t x9059 = 9U;
	int32_t x9060 = INT32_MAX;

    t140 = (x9057*((x9058<<x9059)%x9060));

    if (t140 != 2113995263U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x9073 = 664221186U;
	uint16_t x9074 = 45U;
	volatile uint32_t x9075 = 3U;
	int64_t x9076 = INT64_MIN;

    t141 = (x9073*((x9074<<x9075)%x9076));

    if (t141 != 239119626960LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x9130 = 219884LLU;
	uint8_t x9131 = 3U;
	uint8_t x9132 = 3U;
	uint64_t t142 = 103018624603347473LLU;

    t142 = (x9129*((x9130<<x9131)%x9132));

    if (t142 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x9141 = INT16_MIN;
	uint16_t x9142 = 648U;
	uint8_t x9144 = 3U;
	int32_t t143 = 3;

    t143 = (x9141*((x9142<<x9143)%x9144));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x9189 = 9329624313535373LLU;
	static volatile uint64_t x9190 = 203444202071893403LLU;
	uint8_t x9191 = 23U;
	int8_t x9192 = 1;

    t144 = (x9189*((x9190<<x9191)%x9192));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x9201 = 1;
	uint16_t x9202 = 729U;
	volatile uint8_t x9203 = 0U;
	int8_t x9204 = 1;
	static int32_t t145 = -15033888;

    t145 = (x9201*((x9202<<x9203)%x9204));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x9289 = INT64_MIN;
	int16_t x9290 = INT16_MAX;
	int8_t x9292 = 1;
	int64_t t146 = 20LL;

    t146 = (x9289*((x9290<<x9291)%x9292));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x9321 = UINT16_MAX;
	volatile uint64_t x9322 = 430LLU;
	static uint16_t x9323 = 37U;
	int8_t x9324 = -1;

    t147 = (x9321*((x9322<<x9323)%x9324));

    if (t147 != 3873036580788633600LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x9425 = INT32_MIN;
	volatile int16_t x9426 = INT16_MAX;
	static volatile uint32_t x9427 = 1U;
	static volatile uint64_t t148 = 42966LLU;

    t148 = (x9425*((x9426<<x9427)%x9428));

    if (t148 != 18446742149564203008LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x9485 = INT16_MAX;
	int8_t x9486 = INT8_MAX;
	int32_t t149 = 18660;

    t149 = (x9485*((x9486<<x9487)%x9488));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x9561 = 1993199938U;
	int8_t x9562 = 28;
	volatile uint32_t x9563 = 9U;
	volatile int32_t x9564 = 10733417;
	static uint32_t t150 = 391838U;

    t150 = (x9561*((x9562<<x9563)%x9564));

    if (t150 != 96890880U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x9605 = INT32_MIN;
	uint64_t x9606 = 106256140712114LLU;
	int64_t x9608 = -605LL;
	volatile uint64_t t151 = 30184272261388709LLU;

    t151 = (x9605*((x9606<<x9607)%x9608));

    if (t151 != 4749359408394272768LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x9609 = UINT16_MAX;
	uint64_t x9610 = 15101LLU;
	volatile uint64_t t152 = 100LLU;

    t152 = (x9609*((x9610<<x9611)%x9612));

    if (t152 != 1979288070LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x9777 = 2517302541850046391LLU;
	uint8_t x9778 = 115U;
	int8_t x9779 = 10;
	volatile int64_t x9780 = INT64_MIN;
	static volatile uint64_t t153 = 13976137282071LLU;

    t153 = (x9777*((x9778<<x9779)%x9780));

    if (t153 != 16816807822678086656LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x9785 = 108;
	volatile int8_t x9786 = 29;
	static uint32_t x9787 = 17U;
	uint8_t x9788 = 22U;
	volatile int32_t t154 = 3049;

    t154 = (x9785*((x9786<<x9787)%x9788));

    if (t154 != 1728) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x9901 = 1U;
	uint64_t x9902 = 44LLU;
	uint8_t x9903 = 39U;
	volatile uint32_t x9904 = UINT32_MAX;
	static uint64_t t155 = 1675738LLU;

    t155 = (x9901*((x9902<<x9903)%x9904));

    if (t155 != 5632LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x9933 = UINT32_MAX;
	static uint16_t x9934 = 38U;
	volatile int8_t x9935 = 1;
	int8_t x9936 = INT8_MIN;
	uint32_t t156 = 5357U;

    t156 = (x9933*((x9934<<x9935)%x9936));

    if (t156 != 4294967220U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x10017 = 56U;
	int32_t x10018 = 2;
	uint8_t x10019 = 0U;
	uint16_t x10020 = 7U;
	volatile int32_t t157 = -42378925;

    t157 = (x10017*((x10018<<x10019)%x10020));

    if (t157 != 112) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x10125 = 1U;
	uint8_t x10126 = UINT8_MAX;
	int16_t x10128 = INT16_MIN;
	static uint32_t t158 = 6U;

    t158 = (x10125*((x10126<<x10127)%x10128));

    if (t158 != 255U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x10195 = 0LL;
	uint32_t t159 = 962U;

    t159 = (x10193*((x10194<<x10195)%x10196));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x10270 = 0U;
	volatile int32_t x10271 = 10;
	int16_t x10272 = INT16_MAX;
	static int32_t t160 = 140183372;

    t160 = (x10269*((x10270<<x10271)%x10272));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x10277 = INT8_MIN;
	int64_t x10278 = 2471905LL;
	volatile int8_t x10279 = 18;
	int16_t x10280 = INT16_MIN;
	volatile int64_t t161 = 27750LL;

    t161 = (x10277*((x10278<<x10279)%x10280));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x10309 = UINT64_MAX;
	uint8_t x10310 = 23U;
	uint8_t x10311 = 0U;
	int8_t x10312 = -1;
	volatile uint64_t t162 = 951103LLU;

    t162 = (x10309*((x10310<<x10311)%x10312));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x10405 = INT64_MIN;
	uint64_t x10406 = 11668LLU;

    t163 = (x10405*((x10406<<x10407)%x10408));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x10541 = UINT32_MAX;
	int16_t x10543 = 1;
	uint32_t t164 = 792839U;

    t164 = (x10541*((x10542<<x10543)%x10544));

    if (t164 != 2U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x10549 = INT16_MIN;
	uint16_t x10550 = 26U;
	int8_t x10551 = 0;
	uint16_t x10552 = UINT16_MAX;
	int32_t t165 = 365658915;

    t165 = (x10549*((x10550<<x10551)%x10552));

    if (t165 != -851968) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x10669 = 1351432217797042051LLU;
	volatile uint16_t x10670 = UINT16_MAX;
	volatile int8_t x10672 = INT8_MIN;

    t166 = (x10669*((x10670<<x10671)%x10672));

    if (t166 != 4259762779041333882LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x10725 = INT32_MIN;
	static volatile int16_t x10726 = 0;
	static uint16_t x10727 = 18U;
	int32_t x10728 = INT32_MIN;
	volatile int32_t t167 = 753989;

    t167 = (x10725*((x10726<<x10727)%x10728));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x10737 = INT8_MIN;
	uint8_t x10738 = UINT8_MAX;

    t168 = (x10737*((x10738<<x10739)%x10740));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x10753 = INT64_MAX;
	int32_t x10755 = 6;
	uint64_t x10756 = UINT64_MAX;
	uint64_t t169 = 51413338204906LLU;

    t169 = (x10753*((x10754<<x10755)%x10756));

    if (t169 != 18446744073709535296LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x10777 = INT64_MIN;
	uint64_t x10778 = 32LLU;
	uint16_t x10779 = 2U;
	static uint32_t x10780 = UINT32_MAX;
	static uint64_t t170 = 1300264591424243800LLU;

    t170 = (x10777*((x10778<<x10779)%x10780));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x10833 = 237930980;
	uint8_t x10834 = 10U;
	uint16_t x10835 = 3U;
	static int64_t t171 = -309409845937675LL;

    t171 = (x10833*((x10834<<x10835)%x10836));

    if (t171 != 19034478400LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x10841 = -1;
	uint8_t x10842 = 13U;
	int32_t x10843 = 0;
	uint64_t x10844 = 13752883LLU;
	static uint64_t t172 = 4958702393609912977LLU;

    t172 = (x10841*((x10842<<x10843)%x10844));

    if (t172 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x10973 = INT32_MIN;
	int32_t x10974 = INT32_MAX;
	uint8_t x10975 = 0U;
	int8_t x10976 = -1;
	int32_t t173 = -9925489;

    t173 = (x10973*((x10974<<x10975)%x10976));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x11117 = 23U;
	static int16_t x11119 = 7;
	int32_t x11120 = INT32_MIN;
	int32_t t174 = 1047;

    t174 = (x11117*((x11118<<x11119)%x11120));

    if (t174 != 17664) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x11193 = 185583111LL;
	volatile uint32_t x11194 = 941509U;
	uint8_t x11195 = 15U;

    t175 = (x11193*((x11194<<x11195)%x11196));

    if (t175 != 145978903086858240LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x11445 = 21268032LLU;
	volatile uint16_t x11446 = 0U;
	int8_t x11448 = INT8_MAX;
	uint64_t t176 = 619LLU;

    t176 = (x11445*((x11446<<x11447)%x11448));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x11754 = INT32_MAX;
	uint16_t x11755 = 0U;
	int64_t x11756 = INT64_MIN;

    t177 = (x11753*((x11754<<x11755)%x11756));

    if (t177 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x11793 = INT64_MIN;
	int8_t x11795 = 0;
	static uint64_t x11796 = 105LLU;

    t178 = (x11793*((x11794<<x11795)%x11796));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x11797 = UINT64_MAX;
	volatile int64_t x11798 = 929735363LL;
	volatile uint16_t x11799 = 13U;
	uint64_t x11800 = UINT64_MAX;

    t179 = (x11797*((x11798<<x11799)%x11800));

    if (t179 != 18446736457317457920LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x11893 = 1U;
	int64_t x11894 = 21LL;
	static int16_t x11895 = 0;
	static volatile int64_t x11896 = -1LL;
	int64_t t180 = 77134069092021658LL;

    t180 = (x11893*((x11894<<x11895)%x11896));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x11973 = 0U;
	int8_t x11974 = 2;
	int16_t x11975 = 15;
	int16_t x11976 = -1;
	volatile int32_t t181 = -111729;

    t181 = (x11973*((x11974<<x11975)%x11976));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x12034 = UINT16_MAX;
	int16_t x12035 = 15;
	uint64_t x12036 = 6359LLU;
	static volatile uint64_t t182 = 5920LLU;

    t182 = (x12033*((x12034<<x12035)%x12036));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x12067 = 7LLU;

    t183 = (x12065*((x12066<<x12067)%x12068));

    if (t183 != 11816299353146916864LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x12169 = 375716069602751LLU;
	int16_t x12170 = INT16_MAX;
	uint64_t t184 = 236041837628619748LLU;

    t184 = (x12169*((x12170<<x12171)%x12172));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x12182 = 1U;
	uint32_t x12183 = 1U;

    t185 = (x12181*((x12182<<x12183)%x12184));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x12226 = 93U;
	volatile int16_t x12227 = 0;
	uint16_t x12228 = UINT16_MAX;
	static volatile uint32_t t186 = 4073U;

    t186 = (x12225*((x12226<<x12227)%x12228));

    if (t186 != 185628U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x12237 = INT16_MIN;
	static uint64_t x12238 = 41058080948673LLU;
	volatile int16_t x12239 = 40;
	volatile int64_t x12240 = INT64_MIN;
	uint64_t t187 = 87LLU;

    t187 = (x12237*((x12238<<x12239)%x12240));

    if (t187 != 2269814212194729984LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x12341 = -2LL;
	volatile uint32_t x12342 = UINT32_MAX;
	int16_t x12343 = 1;
	static volatile int64_t t188 = 856803652074079626LL;

    t188 = (x12341*((x12342<<x12343)%x12344));

    if (t188 != -4LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x12417 = INT8_MIN;
	uint64_t x12418 = 1485LLU;
	static int8_t x12419 = 1;
	volatile int64_t x12420 = -290687338032LL;
	uint64_t t189 = 7LLU;

    t189 = (x12417*((x12418<<x12419)%x12420));

    if (t189 != 18446744073709171456LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x12537 = 105341976;
	int8_t x12539 = 1;
	int8_t x12540 = INT8_MAX;
	uint64_t t190 = 6208547477739055LLU;

    t190 = (x12537*((x12538<<x12539)%x12540));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x12653 = 1909635U;
	int8_t x12655 = 1;
	volatile int64_t x12656 = INT64_MIN;
	static int64_t t191 = 932832097206456LL;

    t191 = (x12653*((x12654<<x12655)%x12656));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x12886 = 336733LLU;
	uint64_t x12887 = 5LLU;
	int32_t x12888 = INT32_MIN;
	uint64_t t192 = 1264709517652761LLU;

    t192 = (x12885*((x12886<<x12887)%x12888));

    if (t192 != 1368482912LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x12982 = UINT32_MAX;
	int32_t x12983 = 3;
	int32_t x12984 = -1;

    t193 = (x12981*((x12982<<x12983)%x12984));

    if (t193 != 4294967288LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x13074 = INT16_MAX;
	uint8_t x13075 = 6U;
	int8_t x13076 = -1;
	int32_t t194 = 14814;

    t194 = (x13073*((x13074<<x13075)%x13076));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x13285 = INT32_MIN;
	int8_t x13286 = INT8_MAX;

    t195 = (x13285*((x13286<<x13287)%x13288));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x13413 = -105438LL;
	uint64_t x13414 = 2250546103948724787LLU;
	uint8_t x13415 = 0U;
	int64_t x13416 = INT64_MAX;
	uint64_t t196 = 8792360913492696682LLU;

    t196 = (x13413*((x13414<<x13415)%x13416));

    if (t196 != 5835656054027896518LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x13437 = -84;
	int16_t x13438 = 307;
	volatile uint32_t x13439 = 1U;
	volatile int32_t x13440 = INT32_MIN;
	int32_t t197 = 1085258;

    t197 = (x13437*((x13438<<x13439)%x13440));

    if (t197 != -51576) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x13525 = UINT32_MAX;
	uint8_t x13526 = UINT8_MAX;
	uint16_t x13527 = 10U;
	static int16_t x13528 = INT16_MIN;
	static volatile uint32_t t198 = 12594924U;

    t198 = (x13525*((x13526<<x13527)%x13528));

    if (t198 != 4294935552U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x13557 = 497LLU;
	uint32_t x13558 = UINT32_MAX;
	uint8_t x13559 = 9U;
	uint8_t x13560 = 1U;
	volatile uint64_t t199 = 6662194635LLU;

    t199 = (x13557*((x13558<<x13559)%x13560));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

