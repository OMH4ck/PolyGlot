
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

uint32_t x86 = 58U;
uint16_t x89 = 621U;
static uint8_t x102 = 39U;
static volatile int16_t x103 = 9;
uint64_t t4 = UINT64_MAX;
uint8_t x204 = 8U;
int32_t x487 = -1;
volatile uint32_t x549 = 1381046U;
int8_t x550 = INT8_MIN;
volatile uint32_t t8 = 23U;
int16_t x616 = 0;
int32_t x718 = -1;
int64_t x719 = INT64_MAX;
volatile uint8_t x749 = 30U;
int32_t x750 = -1;
uint64_t x1105 = 1729051267056LLU;
static volatile int8_t x1107 = INT8_MIN;
static uint8_t x1231 = 6U;
int8_t x1418 = INT8_MIN;
uint64_t x1747 = 251768127890614LLU;
int8_t x1748 = 1;
static volatile int64_t x1949 = INT64_MAX;
int64_t x1965 = 1LL;
volatile uint16_t x1966 = 1990U;
uint16_t x2101 = 51U;
static uint8_t x2104 = 2U;
int32_t t25 = -4;
uint64_t x2121 = UINT64_MAX;
int8_t x2123 = INT8_MIN;
static volatile int16_t x2210 = 11;
int16_t x2310 = INT16_MAX;
uint64_t t28 = UINT64_MAX;
int8_t x2470 = INT8_MAX;
volatile int64_t x2483 = -1LL;
volatile int32_t x2509 = 15;
static int32_t t34 = -234;
uint8_t x2584 = 8U;
static uint16_t x2768 = 8U;
static volatile uint64_t t39 = 51LLU;
uint32_t x2821 = UINT32_MAX;
uint16_t x2985 = 3U;
int32_t x2986 = -1;
static int8_t x3066 = INT8_MIN;
volatile int8_t x3068 = -1;
int16_t x3278 = -1;
static volatile int64_t x3294 = INT64_MIN;
static int32_t x3454 = 9001202;
static volatile int32_t x3455 = INT32_MAX;
int8_t x3575 = -1;
uint16_t x3597 = 7U;
static uint32_t x3598 = UINT32_MAX;
int16_t x3599 = 1;
volatile int32_t t51 = -234424164;
static uint64_t x3689 = UINT64_MAX;
uint8_t x3692 = 15U;
int64_t x3727 = INT64_MAX;
int32_t t54 = -694020304;
uint64_t x3818 = 524676295122LLU;
int16_t x3820 = 11;
volatile uint64_t x4071 = 46761LLU;
static volatile int16_t x4279 = -6827;
uint16_t x4703 = 27834U;
volatile int32_t t61 = 6;
int16_t x4775 = -7;
volatile uint64_t t62 = 142LLU;
uint8_t x5156 = 0U;
uint32_t x5401 = UINT32_MAX;
uint64_t x5402 = UINT64_MAX;
int8_t x5482 = INT8_MIN;
uint8_t x5508 = 2U;
uint64_t x5693 = 104031LLU;
int64_t x5701 = 194278468703306434LL;
volatile int8_t x5704 = 38;
volatile int64_t t76 = 39367LL;
static volatile uint16_t x5733 = 0U;
uint16_t x5736 = 1U;
static int64_t x5835 = INT64_MIN;
static int64_t x5991 = -1LL;
static int64_t x6081 = 5506512909021162LL;
static uint32_t x6082 = UINT32_MAX;
volatile int8_t x6220 = 10;
uint32_t t83 = 37240U;
uint64_t x6359 = 8244924LLU;
static uint32_t x6453 = 35363461U;
int16_t x6454 = INT16_MIN;
volatile uint32_t t86 = 135524441U;
static volatile int32_t t88 = -255564345;
int8_t x6596 = 1;
uint64_t x6670 = 17LLU;
static int64_t x6938 = INT64_MIN;
static int16_t x7166 = 1;
int32_t t96 = -6994878;
uint8_t x7246 = 16U;
volatile int64_t x7247 = 254092LL;
volatile int32_t x7270 = INT32_MIN;
volatile uint64_t t98 = 24212300110LLU;
volatile int32_t x7322 = 1;
uint32_t x7401 = UINT32_MAX;
volatile uint64_t x7404 = UINT64_MAX;
volatile uint32_t t100 = 25137567U;
uint64_t x7413 = 1LLU;
uint32_t x7429 = 7U;
int32_t x7430 = INT32_MIN;
volatile int8_t x7525 = INT8_MAX;
uint8_t x7595 = 38U;
volatile int64_t t106 = -1787699121627068LL;
volatile int16_t x7851 = 4002;
int8_t x7888 = 6;
volatile int64_t x7971 = -3307050418381LL;
uint32_t x8037 = 2830019U;
static int32_t x8196 = 20;
uint64_t t117 = 1589342925190963170LLU;
uint64_t x8357 = UINT64_MAX;
uint64_t t120 = 186433985062LLU;
static int32_t x8368 = 22;
uint64_t x8378 = 65652487551LLU;
volatile uint64_t t122 = 14LLU;
int32_t x8502 = 929;
uint64_t x8503 = UINT64_MAX;
uint32_t x8654 = 46413U;
uint16_t x8691 = 27354U;
int64_t x8693 = 17180007354560LL;
int64_t t127 = -2934580903LL;
int16_t x8718 = 219;
int64_t x8719 = -1502LL;
volatile uint64_t x8734 = 532246362014676LLU;
int64_t x8735 = -1LL;


void f0(void) {
    	static uint8_t x57 = UINT8_MAX;
	static volatile uint32_t x58 = 396498U;
	int32_t x59 = INT32_MIN;
	int8_t x60 = 2;
	int32_t t0 = -16299;

    t0 = (x57>>((x58/x59)^x60));

    if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x85 = UINT32_MAX;
	int64_t x87 = INT64_MIN;
	int8_t x88 = 1;
	uint32_t t1 = 5781U;

    t1 = (x85>>((x86/x87)^x88));

    if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x90 = INT16_MIN;
	int32_t x91 = -2600993;
	int32_t x92 = 14;
	volatile int32_t t2 = 341987;

    t2 = (x89>>((x90/x91)^x92));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x101 = 40203425LLU;
	uint8_t x104 = 14U;
	uint64_t t3 = 312234564LLU;

    t3 = (x101>>((x102/x103)^x104));

    if (t3 != 39261LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x133 = UINT64_MAX;
	uint32_t x134 = 20714U;
	volatile int32_t x135 = 384122995;
	uint16_t x136 = 0U;

    t4 = (x133>>((x134/x135)^x136));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x201 = 1;
	uint16_t x202 = 340U;
	uint64_t x203 = UINT64_MAX;
	static int32_t t5 = 3455;

    t5 = (x201>>((x202/x203)^x204));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x393 = UINT16_MAX;
	static volatile int16_t x394 = 1;
	static int64_t x395 = -3225092LL;
	int64_t x396 = 2LL;
	static volatile int32_t t6 = 62164121;

    t6 = (x393>>((x394/x395)^x396));

    if (t6 != 16383) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x485 = 672358188787LLU;
	uint64_t x486 = 824936454521155177LLU;
	uint8_t x488 = 3U;
	uint64_t t7 = 7311672111LLU;

    t7 = (x485>>((x486/x487)^x488));

    if (t7 != 84044773598LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x551 = INT32_MIN;
	uint8_t x552 = 0U;

    t8 = (x549>>((x550/x551)^x552));

    if (t8 != 1381046U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x613 = 635780367LLU;
	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MAX;
	static volatile uint64_t t9 = 24016987717336LLU;

    t9 = (x613>>((x614/x615)^x616));

    if (t9 != 635780367LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x617 = 152LLU;
	int32_t x618 = INT32_MAX;
	uint64_t x619 = 237533804608203LLU;
	uint32_t x620 = 4U;
	uint64_t t10 = 11119LLU;

    t10 = (x617>>((x618/x619)^x620));

    if (t10 != 9LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x665 = 2U;
	int8_t x666 = 19;
	int8_t x667 = -1;
	int16_t x668 = -1;
	int32_t t11 = 1;

    t11 = (x665>>((x666/x667)^x668));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x669 = 2;
	int32_t x670 = -1;
	volatile int32_t x671 = INT32_MIN;
	uint8_t x672 = 19U;
	int32_t t12 = -357079347;

    t12 = (x669>>((x670/x671)^x672));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x717 = 1;
	int8_t x720 = 22;
	volatile int32_t t13 = -8253;

    t13 = (x717>>((x718/x719)^x720));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x751 = -1;
	int32_t x752 = 0;
	static int32_t t14 = 5461;

    t14 = (x749>>((x750/x751)^x752));

    if (t14 != 15) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x833 = UINT8_MAX;
	int16_t x834 = -550;
	uint8_t x835 = 63U;
	int8_t x836 = -1;
	int32_t t15 = 146;

    t15 = (x833>>((x834/x835)^x836));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x845 = 26477U;
	static int16_t x846 = -1;
	int8_t x847 = INT8_MIN;
	int16_t x848 = 0;
	volatile uint32_t t16 = 3U;

    t16 = (x845>>((x846/x847)^x848));

    if (t16 != 26477U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1093 = 15U;
	int64_t x1094 = INT64_MAX;
	static int64_t x1095 = INT64_MIN;
	int16_t x1096 = 1;
	int32_t t17 = -330;

    t17 = (x1093>>((x1094/x1095)^x1096));

    if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1106 = 198539U;
	uint16_t x1108 = 0U;
	volatile uint64_t t18 = 1027914807LLU;

    t18 = (x1105>>((x1106/x1107)^x1108));

    if (t18 != 1729051267056LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1229 = 697082146544LLU;
	int16_t x1230 = -60;
	int32_t x1232 = -1;
	static uint64_t t19 = 898649471LLU;

    t19 = (x1229>>((x1230/x1231)^x1232));

    if (t19 != 1361488567LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1417 = INT64_MAX;
	static int16_t x1419 = INT16_MAX;
	uint8_t x1420 = 58U;
	int64_t t20 = -34267638LL;

    t20 = (x1417>>((x1418/x1419)^x1420));

    if (t20 != 31LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1745 = 237U;
	static uint64_t x1746 = 53802LLU;
	volatile uint32_t t21 = 10913U;

    t21 = (x1745>>((x1746/x1747)^x1748));

    if (t21 != 118U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1950 = 14U;
	static volatile int32_t x1951 = 267630;
	uint64_t x1952 = 2LLU;
	int64_t t22 = -121773187LL;

    t22 = (x1949>>((x1950/x1951)^x1952));

    if (t22 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1967 = 732267310;
	static uint32_t x1968 = 32U;
	static int64_t t23 = 2314LL;

    t23 = (x1965>>((x1966/x1967)^x1968));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1973 = 4U;
	volatile int32_t x1974 = INT32_MIN;
	int32_t x1975 = INT32_MIN;
	static uint8_t x1976 = 16U;
	volatile int32_t t24 = -72360;

    t24 = (x1973>>((x1974/x1975)^x1976));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x2102 = INT64_MAX;
	int64_t x2103 = INT64_MAX;

    t25 = (x2101>>((x2102/x2103)^x2104));

    if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x2122 = -1;
	int32_t x2124 = 12;
	volatile uint64_t t26 = 5LLU;

    t26 = (x2121>>((x2122/x2123)^x2124));

    if (t26 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x2209 = 1U;
	static int64_t x2211 = 51605978LL;
	volatile uint8_t x2212 = 18U;
	int32_t t27 = 275;

    t27 = (x2209>>((x2210/x2211)^x2212));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x2309 = UINT64_MAX;
	uint16_t x2311 = UINT16_MAX;
	uint32_t x2312 = 0U;

    t28 = (x2309>>((x2310/x2311)^x2312));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2321 = UINT64_MAX;
	int32_t x2322 = INT32_MAX;
	static volatile int64_t x2323 = 359265639614104180LL;
	uint8_t x2324 = 3U;
	uint64_t t29 = 5110983LLU;

    t29 = (x2321>>((x2322/x2323)^x2324));

    if (t29 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x2341 = 40795053LLU;
	uint32_t x2342 = 6221U;
	int8_t x2343 = -1;
	int8_t x2344 = 0;
	uint64_t t30 = 0LLU;

    t30 = (x2341>>((x2342/x2343)^x2344));

    if (t30 != 40795053LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2461 = UINT16_MAX;
	int16_t x2462 = 15926;
	static uint16_t x2463 = 945U;
	static uint8_t x2464 = 7U;
	volatile int32_t t31 = -428746196;

    t31 = (x2461>>((x2462/x2463)^x2464));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2469 = 29U;
	int16_t x2471 = -797;
	uint16_t x2472 = 1U;
	int32_t t32 = 0;

    t32 = (x2469>>((x2470/x2471)^x2472));

    if (t32 != 14) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2481 = 12U;
	int8_t x2482 = INT8_MAX;
	int8_t x2484 = INT8_MIN;
	volatile uint32_t t33 = 27227877U;

    t33 = (x2481>>((x2482/x2483)^x2484));

    if (t33 != 6U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2510 = 354;
	volatile uint64_t x2511 = 1427LLU;
	int8_t x2512 = 0;

    t34 = (x2509>>((x2510/x2511)^x2512));

    if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x2521 = 1846U;
	static uint16_t x2522 = 15U;
	static int64_t x2523 = -232009469866LL;
	volatile uint8_t x2524 = 15U;
	volatile int32_t t35 = -1;

    t35 = (x2521>>((x2522/x2523)^x2524));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2581 = UINT32_MAX;
	uint32_t x2582 = UINT32_MAX;
	int32_t x2583 = INT32_MAX;
	uint32_t t36 = 3867457U;

    t36 = (x2581>>((x2582/x2583)^x2584));

    if (t36 != 4194303U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x2709 = 48U;
	int8_t x2710 = -1;
	uint16_t x2711 = 23U;
	uint8_t x2712 = 27U;
	static volatile int32_t t37 = 1;

    t37 = (x2709>>((x2710/x2711)^x2712));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2753 = INT64_MAX;
	int64_t x2754 = -374313LL;
	int64_t x2755 = INT64_MAX;
	int8_t x2756 = 2;
	volatile int64_t t38 = 4009848619311393212LL;

    t38 = (x2753>>((x2754/x2755)^x2756));

    if (t38 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2765 = 1288LLU;
	int16_t x2766 = INT16_MAX;
	int16_t x2767 = INT16_MIN;

    t39 = (x2765>>((x2766/x2767)^x2768));

    if (t39 != 5LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2785 = 79U;
	uint8_t x2786 = 0U;
	int16_t x2787 = 10340;
	uint32_t x2788 = 4U;
	int32_t t40 = 18621446;

    t40 = (x2785>>((x2786/x2787)^x2788));

    if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2822 = 0;
	int8_t x2823 = 3;
	int8_t x2824 = 20;
	static volatile uint32_t t41 = 0U;

    t41 = (x2821>>((x2822/x2823)^x2824));

    if (t41 != 4095U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2981 = INT64_MAX;
	int8_t x2982 = INT8_MAX;
	uint32_t x2983 = 388019526U;
	uint8_t x2984 = 2U;
	volatile int64_t t42 = -4499911980541639LL;

    t42 = (x2981>>((x2982/x2983)^x2984));

    if (t42 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x2987 = 825U;
	int16_t x2988 = 1;
	int32_t t43 = 6;

    t43 = (x2985>>((x2986/x2987)^x2988));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x3065 = 9732U;
	int16_t x3067 = 58;
	uint32_t t44 = 311U;

    t44 = (x3065>>((x3066/x3067)^x3068));

    if (t44 != 4866U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x3117 = 37;
	uint8_t x3118 = UINT8_MAX;
	int8_t x3119 = INT8_MIN;
	volatile int8_t x3120 = -1;
	int32_t t45 = 2606170;

    t45 = (x3117>>((x3118/x3119)^x3120));

    if (t45 != 37) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x3277 = UINT8_MAX;
	uint16_t x3279 = 9146U;
	static int8_t x3280 = 1;
	volatile int32_t t46 = -992377;

    t46 = (x3277>>((x3278/x3279)^x3280));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x3293 = 11520018LLU;
	static uint64_t x3295 = UINT64_MAX;
	static uint8_t x3296 = 0U;
	volatile uint64_t t47 = 1559871780573410115LLU;

    t47 = (x3293>>((x3294/x3295)^x3296));

    if (t47 != 11520018LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x3405 = 392289554U;
	volatile int8_t x3406 = -7;
	uint16_t x3407 = 3U;
	static volatile uint64_t x3408 = UINT64_MAX;
	uint32_t t48 = 687212U;

    t48 = (x3405>>((x3406/x3407)^x3408));

    if (t48 != 196144777U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x3453 = INT64_MAX;
	int8_t x3456 = 5;
	int64_t t49 = -32643044LL;

    t49 = (x3453>>((x3454/x3455)^x3456));

    if (t49 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3573 = 3366769178908147206LLU;
	volatile int8_t x3574 = 1;
	int64_t x3576 = -1LL;
	static uint64_t t50 = 3LLU;

    t50 = (x3573>>((x3574/x3575)^x3576));

    if (t50 != 3366769178908147206LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x3600 = -1;

    t51 = (x3597>>((x3598/x3599)^x3600));

    if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x3690 = INT16_MAX;
	static int32_t x3691 = INT32_MIN;
	uint64_t t52 = 145922959212LLU;

    t52 = (x3689>>((x3690/x3691)^x3692));

    if (t52 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x3725 = 46U;
	int32_t x3726 = 5361992;
	volatile uint8_t x3728 = 8U;
	volatile int32_t t53 = -196371;

    t53 = (x3725>>((x3726/x3727)^x3728));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3733 = INT8_MAX;
	int8_t x3734 = -1;
	int16_t x3735 = INT16_MIN;
	volatile uint64_t x3736 = 13LLU;

    t54 = (x3733>>((x3734/x3735)^x3736));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3757 = 233;
	volatile uint16_t x3758 = 105U;
	int32_t x3759 = INT32_MAX;
	uint8_t x3760 = 21U;
	int32_t t55 = 3925230;

    t55 = (x3757>>((x3758/x3759)^x3760));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x3817 = 199;
	int32_t x3819 = -293036591;
	volatile int32_t t56 = -39627381;

    t56 = (x3817>>((x3818/x3819)^x3820));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x4069 = 6U;
	uint8_t x4070 = 1U;
	volatile uint16_t x4072 = 30U;
	int32_t t57 = 348;

    t57 = (x4069>>((x4070/x4071)^x4072));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x4233 = 51U;
	volatile uint8_t x4234 = UINT8_MAX;
	int32_t x4235 = INT32_MIN;
	int32_t x4236 = 0;
	volatile int32_t t58 = -256;

    t58 = (x4233>>((x4234/x4235)^x4236));

    if (t58 != 51) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4277 = 1852703593211925312LLU;
	static uint64_t x4278 = 48522350245420069LLU;
	static uint64_t x4280 = 2LLU;
	volatile uint64_t t59 = 887348255008266LLU;

    t59 = (x4277>>((x4278/x4279)^x4280));

    if (t59 != 463175898302981328LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4309 = INT8_MAX;
	int8_t x4310 = -8;
	static uint8_t x4311 = 57U;
	uint8_t x4312 = 31U;
	volatile int32_t t60 = 11718;

    t60 = (x4309>>((x4310/x4311)^x4312));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x4701 = INT32_MAX;
	static int16_t x4702 = 11931;
	int8_t x4704 = 22;

    t61 = (x4701>>((x4702/x4703)^x4704));

    if (t61 != 511) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x4773 = UINT64_MAX;
	int16_t x4774 = 6;
	uint64_t x4776 = 3LLU;

    t62 = (x4773>>((x4774/x4775)^x4776));

    if (t62 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x4945 = UINT64_MAX;
	volatile uint8_t x4946 = UINT8_MAX;
	static volatile int8_t x4947 = -28;
	uint64_t x4948 = UINT64_MAX;
	uint64_t t63 = 95622903951LLU;

    t63 = (x4945>>((x4946/x4947)^x4948));

    if (t63 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x5013 = UINT8_MAX;
	static uint32_t x5014 = 21U;
	uint64_t x5015 = UINT64_MAX;
	volatile int8_t x5016 = 1;
	int32_t t64 = -2;

    t64 = (x5013>>((x5014/x5015)^x5016));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x5153 = 2260;
	int64_t x5154 = -1LL;
	volatile uint8_t x5155 = 22U;
	volatile int32_t t65 = 3860;

    t65 = (x5153>>((x5154/x5155)^x5156));

    if (t65 != 2260) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x5181 = 9U;
	uint8_t x5182 = UINT8_MAX;
	uint8_t x5183 = UINT8_MAX;
	uint32_t x5184 = 1U;
	static volatile int32_t t66 = -147711;

    t66 = (x5181>>((x5182/x5183)^x5184));

    if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5185 = INT16_MAX;
	static uint8_t x5186 = 42U;
	volatile int16_t x5187 = -34;
	int32_t x5188 = -1;
	volatile int32_t t67 = 61121;

    t67 = (x5185>>((x5186/x5187)^x5188));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x5265 = INT16_MAX;
	int32_t x5266 = 2316;
	int32_t x5267 = INT32_MIN;
	uint64_t x5268 = 25LLU;
	volatile int32_t t68 = -1587684;

    t68 = (x5265>>((x5266/x5267)^x5268));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x5403 = INT8_MIN;
	volatile int16_t x5404 = 3;
	uint32_t t69 = 2362398U;

    t69 = (x5401>>((x5402/x5403)^x5404));

    if (t69 != 1073741823U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x5477 = UINT32_MAX;
	uint16_t x5478 = 5U;
	int8_t x5479 = -1;
	int32_t x5480 = -1;
	uint32_t t70 = 88U;

    t70 = (x5477>>((x5478/x5479)^x5480));

    if (t70 != 268435455U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x5481 = INT32_MAX;
	int32_t x5483 = 62735767;
	static int8_t x5484 = 0;
	int32_t t71 = INT32_MAX;

    t71 = (x5481>>((x5482/x5483)^x5484));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x5505 = UINT32_MAX;
	uint64_t x5506 = 241380955151534429LLU;
	int8_t x5507 = INT8_MIN;
	uint32_t t72 = 39570764U;

    t72 = (x5505>>((x5506/x5507)^x5508));

    if (t72 != 1073741823U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x5625 = 6129U;
	volatile uint64_t x5626 = 4496213LLU;
	int16_t x5627 = INT16_MIN;
	uint8_t x5628 = 10U;
	uint32_t t73 = 22311778U;

    t73 = (x5625>>((x5626/x5627)^x5628));

    if (t73 != 5U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x5694 = 0;
	uint32_t x5695 = 87U;
	uint8_t x5696 = 1U;
	volatile uint64_t t74 = 30970508133LLU;

    t74 = (x5693>>((x5694/x5695)^x5696));

    if (t74 != 52015LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x5697 = 427538U;
	uint32_t x5698 = UINT32_MAX;
	int32_t x5699 = -1;
	int64_t x5700 = 3LL;
	static volatile uint32_t t75 = 375650U;

    t75 = (x5697>>((x5698/x5699)^x5700));

    if (t75 != 106884U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x5702 = UINT8_MAX;
	volatile uint64_t x5703 = UINT64_MAX;

    t76 = (x5701>>((x5702/x5703)^x5704));

    if (t76 != 706780LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x5734 = 1U;
	int16_t x5735 = INT16_MAX;
	volatile int32_t t77 = -2;

    t77 = (x5733>>((x5734/x5735)^x5736));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x5833 = 0;
	static int64_t x5834 = INT64_MIN;
	uint32_t x5836 = 0U;
	int32_t t78 = 0;

    t78 = (x5833>>((x5834/x5835)^x5836));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x5989 = 0;
	int16_t x5990 = -1;
	volatile int8_t x5992 = 26;
	volatile int32_t t79 = -45;

    t79 = (x5989>>((x5990/x5991)^x5992));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x6083 = INT64_MIN;
	volatile uint32_t x6084 = 3U;
	int64_t t80 = 515557531493LL;

    t80 = (x6081>>((x6082/x6083)^x6084));

    if (t80 != 688314113627645LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x6145 = INT64_MAX;
	volatile uint64_t x6146 = 25081LLU;
	int64_t x6147 = INT64_MIN;
	volatile uint8_t x6148 = 30U;
	volatile int64_t t81 = -2495348585715511652LL;

    t81 = (x6145>>((x6146/x6147)^x6148));

    if (t81 != 8589934591LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x6153 = 2071977;
	uint64_t x6154 = UINT64_MAX;
	volatile int16_t x6155 = INT16_MIN;
	int8_t x6156 = 23;
	int32_t t82 = 7292994;

    t82 = (x6153>>((x6154/x6155)^x6156));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x6217 = 11U;
	static int32_t x6218 = -1;
	int16_t x6219 = 7;

    t83 = (x6217>>((x6218/x6219)^x6220));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x6277 = 31334931103499867LL;
	int16_t x6278 = 15;
	uint16_t x6279 = 18229U;
	volatile int16_t x6280 = 0;
	int64_t t84 = 12LL;

    t84 = (x6277>>((x6278/x6279)^x6280));

    if (t84 != 31334931103499867LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x6357 = 1U;
	static int32_t x6358 = 3;
	int16_t x6360 = 29;
	int32_t t85 = -12;

    t85 = (x6357>>((x6358/x6359)^x6360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x6455 = -22554768203534678LL;
	int8_t x6456 = 0;

    t86 = (x6453>>((x6454/x6455)^x6456));

    if (t86 != 35363461U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x6461 = INT8_MAX;
	int8_t x6462 = INT8_MIN;
	int64_t x6463 = -45139684062590LL;
	uint8_t x6464 = 0U;
	volatile int32_t t87 = 79744;

    t87 = (x6461>>((x6462/x6463)^x6464));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x6493 = 1U;
	static int8_t x6494 = 1;
	int8_t x6495 = -1;
	volatile uint64_t x6496 = UINT64_MAX;

    t88 = (x6493>>((x6494/x6495)^x6496));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x6593 = UINT32_MAX;
	int16_t x6594 = -126;
	volatile int16_t x6595 = -8;
	static volatile uint32_t t89 = 0U;

    t89 = (x6593>>((x6594/x6595)^x6596));

    if (t89 != 262143U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x6637 = 13668515;
	static volatile uint16_t x6638 = 1U;
	static int8_t x6639 = INT8_MIN;
	uint8_t x6640 = 3U;
	volatile int32_t t90 = -73591;

    t90 = (x6637>>((x6638/x6639)^x6640));

    if (t90 != 1708564) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x6669 = 11;
	static uint16_t x6671 = 19U;
	uint64_t x6672 = 0LLU;
	int32_t t91 = 130;

    t91 = (x6669>>((x6670/x6671)^x6672));

    if (t91 != 11) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x6777 = INT64_MAX;
	volatile uint8_t x6778 = 5U;
	int8_t x6779 = INT8_MIN;
	static uint16_t x6780 = 7U;
	volatile int64_t t92 = 2813011529736221LL;

    t92 = (x6777>>((x6778/x6779)^x6780));

    if (t92 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x6853 = INT64_MAX;
	static int8_t x6854 = 1;
	static volatile uint32_t x6855 = 34650U;
	int8_t x6856 = 3;
	static volatile int64_t t93 = 218419LL;

    t93 = (x6853>>((x6854/x6855)^x6856));

    if (t93 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x6937 = 1215622179LL;
	static int64_t x6939 = INT64_MIN;
	uint16_t x6940 = 1U;
	int64_t t94 = -22292149462218222LL;

    t94 = (x6937>>((x6938/x6939)^x6940));

    if (t94 != 1215622179LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x7165 = INT8_MAX;
	volatile int16_t x7167 = INT16_MIN;
	uint8_t x7168 = 0U;
	int32_t t95 = 163255825;

    t95 = (x7165>>((x7166/x7167)^x7168));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x7225 = INT8_MAX;
	int8_t x7226 = INT8_MIN;
	static int64_t x7227 = INT64_MIN;
	static int8_t x7228 = 6;

    t96 = (x7225>>((x7226/x7227)^x7228));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x7245 = 328516384LL;
	volatile uint32_t x7248 = 55U;
	volatile int64_t t97 = -6759641598389035LL;

    t97 = (x7245>>((x7246/x7247)^x7248));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x7269 = 451225LLU;
	int32_t x7271 = INT32_MIN;
	uint64_t x7272 = 22LLU;

    t98 = (x7269>>((x7270/x7271)^x7272));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x7321 = 12U;
	uint64_t x7323 = UINT64_MAX;
	volatile uint8_t x7324 = 25U;
	volatile int32_t t99 = -7;

    t99 = (x7321>>((x7322/x7323)^x7324));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x7402 = 30U;
	int16_t x7403 = -1;

    t100 = (x7401>>((x7402/x7403)^x7404));

    if (t100 != 7U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x7414 = INT8_MIN;
	int16_t x7415 = -194;
	int64_t x7416 = 5LL;
	uint64_t t101 = 1756730961255101LLU;

    t101 = (x7413>>((x7414/x7415)^x7416));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x7431 = INT32_MIN;
	volatile int32_t x7432 = 0;
	static uint32_t t102 = 312U;

    t102 = (x7429>>((x7430/x7431)^x7432));

    if (t102 != 3U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x7509 = UINT64_MAX;
	int32_t x7510 = INT32_MIN;
	int64_t x7511 = 203903531LL;
	static int8_t x7512 = -1;
	volatile uint64_t t103 = 16087LLU;

    t103 = (x7509>>((x7510/x7511)^x7512));

    if (t103 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x7526 = -28;
	uint16_t x7527 = 9041U;
	static int8_t x7528 = 6;
	volatile int32_t t104 = 1;

    t104 = (x7525>>((x7526/x7527)^x7528));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x7593 = INT32_MAX;
	int8_t x7594 = INT8_MIN;
	int32_t x7596 = -1;
	int32_t t105 = 24617;

    t105 = (x7593>>((x7594/x7595)^x7596));

    if (t105 != 536870911) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x7673 = INT64_MAX;
	static int32_t x7674 = -1;
	static int8_t x7675 = INT8_MAX;
	int32_t x7676 = 62;

    t106 = (x7673>>((x7674/x7675)^x7676));

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x7801 = 3431U;
	int16_t x7802 = 3;
	static volatile int8_t x7803 = INT8_MAX;
	uint16_t x7804 = 30U;
	volatile uint32_t t107 = 16973360U;

    t107 = (x7801>>((x7802/x7803)^x7804));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x7849 = 0U;
	int8_t x7850 = 2;
	uint8_t x7852 = 0U;
	int32_t t108 = -730741;

    t108 = (x7849>>((x7850/x7851)^x7852));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x7885 = UINT8_MAX;
	static uint32_t x7886 = 105U;
	volatile int32_t x7887 = INT32_MIN;
	volatile int32_t t109 = 3149556;

    t109 = (x7885>>((x7886/x7887)^x7888));

    if (t109 != 3) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x7937 = 1;
	static volatile int16_t x7938 = INT16_MIN;
	int64_t x7939 = -8701942685840232LL;
	uint8_t x7940 = 0U;
	static volatile int32_t t110 = 5167116;

    t110 = (x7937>>((x7938/x7939)^x7940));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x7969 = 988907;
	int16_t x7970 = 4732;
	uint32_t x7972 = 13U;
	int32_t t111 = 61;

    t111 = (x7969>>((x7970/x7971)^x7972));

    if (t111 != 120) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x8038 = UINT64_MAX;
	static int8_t x8039 = INT8_MIN;
	volatile int8_t x8040 = 0;
	volatile uint32_t t112 = 3104910U;

    t112 = (x8037>>((x8038/x8039)^x8040));

    if (t112 != 1415009U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x8113 = 6U;
	uint8_t x8114 = UINT8_MAX;
	volatile int64_t x8115 = INT64_MIN;
	uint32_t x8116 = 1U;
	volatile uint32_t t113 = 1353083604U;

    t113 = (x8113>>((x8114/x8115)^x8116));

    if (t113 != 3U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x8149 = UINT8_MAX;
	int16_t x8150 = -12;
	int64_t x8151 = -28066480622LL;
	uint8_t x8152 = 12U;
	volatile int32_t t114 = 6809260;

    t114 = (x8149>>((x8150/x8151)^x8152));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x8193 = 2068U;
	int8_t x8194 = INT8_MIN;
	int64_t x8195 = -54084093752181LL;
	volatile int32_t t115 = 7685161;

    t115 = (x8193>>((x8194/x8195)^x8196));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x8197 = 2666815;
	static uint8_t x8198 = UINT8_MAX;
	static int16_t x8199 = INT16_MAX;
	uint8_t x8200 = 30U;
	int32_t t116 = 232;

    t116 = (x8197>>((x8198/x8199)^x8200));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x8309 = 30LLU;
	static volatile uint16_t x8310 = 0U;
	int8_t x8311 = 15;
	int16_t x8312 = 2;

    t117 = (x8309>>((x8310/x8311)^x8312));

    if (t117 != 7LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x8313 = 53;
	int8_t x8314 = INT8_MIN;
	static int16_t x8315 = INT16_MIN;
	uint8_t x8316 = 5U;
	volatile int32_t t118 = -607505039;

    t118 = (x8313>>((x8314/x8315)^x8316));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x8341 = 53U;
	uint8_t x8342 = 11U;
	uint64_t x8343 = 21LLU;
	volatile uint32_t x8344 = 21U;
	volatile int32_t t119 = 31928962;

    t119 = (x8341>>((x8342/x8343)^x8344));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x8358 = 261031U;
	uint32_t x8359 = UINT32_MAX;
	static volatile int16_t x8360 = 1;

    t120 = (x8357>>((x8358/x8359)^x8360));

    if (t120 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x8365 = 14332272U;
	volatile uint32_t x8366 = UINT32_MAX;
	int64_t x8367 = INT64_MAX;
	volatile uint32_t t121 = 49764839U;

    t121 = (x8365>>((x8366/x8367)^x8368));

    if (t121 != 3U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x8377 = 99LLU;
	static int32_t x8379 = INT32_MIN;
	uint8_t x8380 = 4U;

    t122 = (x8377>>((x8378/x8379)^x8380));

    if (t122 != 6LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x8501 = 38U;
	volatile uint8_t x8504 = 4U;
	static int32_t t123 = 2;

    t123 = (x8501>>((x8502/x8503)^x8504));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x8597 = 57U;
	int16_t x8598 = -1;
	volatile int8_t x8599 = INT8_MIN;
	static uint8_t x8600 = 1U;
	static volatile int32_t t124 = 459360329;

    t124 = (x8597>>((x8598/x8599)^x8600));

    if (t124 != 28) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x8653 = UINT32_MAX;
	volatile int32_t x8655 = INT32_MIN;
	volatile int8_t x8656 = 2;
	volatile uint32_t t125 = 6U;

    t125 = (x8653>>((x8654/x8655)^x8656));

    if (t125 != 1073741823U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x8689 = 4U;
	int16_t x8690 = INT16_MIN;
	uint64_t x8692 = UINT64_MAX;
	uint32_t t126 = 2184009U;

    t126 = (x8689>>((x8690/x8691)^x8692));

    if (t126 != 4U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x8694 = -64499350LL;
	uint32_t x8695 = UINT32_MAX;
	volatile uint16_t x8696 = 3U;

    t127 = (x8693>>((x8694/x8695)^x8696));

    if (t127 != 2147500919320LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x8717 = 28U;
	static uint8_t x8720 = 1U;
	volatile int32_t t128 = -253;

    t128 = (x8717>>((x8718/x8719)^x8720));

    if (t128 != 14) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x8733 = 1147702821378733LLU;
	static int8_t x8736 = 3;
	uint64_t t129 = 2695280936928810405LLU;

    t129 = (x8733>>((x8734/x8735)^x8736));

    if (t129 != 143462852672341LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x8753 = INT8_MAX;
	int64_t x8754 = INT64_MAX;
	static uint64_t x8755 = UINT64_MAX;
	uint8_t x8756 = 0U;
	volatile int32_t t130 = -1;

    t130 = (x8753>>((x8754/x8755)^x8756));

    if (t130 != 127) { NG(); } else { ; }
	
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


    return 0;
}

