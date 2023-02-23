
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

volatile int16_t x1 = INT16_MIN;
int64_t x3 = 77LL;
volatile uint64_t x4 = 698756270830LLU;
int8_t x7 = -1;
volatile int32_t t2 = -4;
int32_t x15 = INT32_MIN;
static uint8_t x18 = 22U;
volatile uint32_t x19 = 1042U;
int16_t x20 = -1;
int32_t t4 = 21762;
uint16_t x21 = 0U;
uint64_t x22 = UINT64_MAX;
int32_t x25 = INT32_MAX;
int64_t x30 = INT64_MAX;
int8_t x31 = INT8_MIN;
int64_t x33 = -1LL;
int8_t x36 = INT8_MAX;
int32_t x41 = 399;
int64_t x50 = INT64_MIN;
volatile uint16_t x53 = UINT16_MAX;
int64_t x55 = INT64_MIN;
int32_t x59 = -236913;
int64_t t14 = 28LL;
uint64_t x65 = UINT64_MAX;
int8_t x77 = INT8_MIN;
volatile int32_t t19 = 0;
int64_t x87 = -1LL;
int8_t x91 = INT8_MAX;
int8_t x94 = -1;
volatile uint32_t x95 = 7406159U;
uint32_t x99 = 1U;
int64_t x100 = 31381940189LL;
int64_t x113 = INT64_MIN;
volatile int64_t t28 = 2872123694309165619LL;
uint16_t x128 = UINT16_MAX;
uint32_t x130 = UINT32_MAX;
int16_t x133 = INT16_MIN;
int64_t x135 = -1LL;
volatile uint32_t x149 = UINT32_MAX;
volatile uint8_t x155 = 9U;
static int64_t x162 = INT64_MAX;
volatile int16_t x163 = INT16_MIN;
volatile int32_t t40 = 42375;
static int64_t x170 = INT64_MIN;
int32_t x171 = 12606;
volatile int32_t t43 = -6225416;
uint64_t x183 = 66554696959LLU;
volatile int32_t t47 = 1;
volatile int64_t t49 = 4406138LL;
volatile int32_t x201 = INT32_MAX;
int16_t x205 = INT16_MIN;
static uint8_t x206 = 4U;
int32_t x215 = -99564;
static int64_t x217 = INT64_MIN;
volatile int64_t x220 = 50148122447LL;
volatile int64_t t54 = -28811288002LL;
int16_t x231 = INT16_MIN;
int64_t x232 = INT64_MIN;
uint64_t x238 = UINT64_MAX;
uint64_t x239 = UINT64_MAX;
int16_t x240 = -1;
int8_t x242 = -3;
int64_t x249 = -1LL;
volatile int64_t t62 = -1333898668LL;
int8_t x255 = 2;
int16_t x261 = -1;
int64_t x279 = INT64_MIN;
int8_t x283 = INT8_MAX;
int64_t x287 = 42102203357866649LL;
volatile int16_t x288 = INT16_MAX;
uint32_t x299 = 74578U;
int32_t x310 = INT32_MAX;
volatile int32_t t78 = 361352631;
static int32_t t79 = 590531118;
int64_t x324 = INT64_MAX;
volatile int32_t t80 = 117249;
static int64_t x326 = -533545823942LL;
int32_t t81 = 0;
uint32_t x330 = 397U;
int8_t x334 = -5;
int32_t t85 = -1;
static int32_t x357 = INT32_MIN;
int8_t x358 = -4;
int16_t x360 = INT16_MIN;
int16_t x367 = INT16_MAX;
int16_t x374 = -1;
uint32_t x377 = 7U;
volatile int32_t x384 = 249939351;
static int8_t x386 = 1;
volatile int64_t t96 = -271425LL;
volatile int16_t x390 = 29;
uint64_t t97 = 6003861344373941LLU;
uint64_t x398 = 149334LLU;
int32_t x400 = INT32_MAX;
static uint16_t x404 = 90U;
static volatile int32_t t100 = 11801;
int64_t x406 = INT64_MIN;
int32_t t101 = -74436;
int16_t x411 = -7;
int16_t x414 = INT16_MAX;
int16_t x422 = -882;
int32_t t106 = -1656132;
static volatile int8_t x435 = INT8_MAX;
int16_t x440 = INT16_MIN;
static volatile int32_t t109 = -20830907;
uint32_t x446 = 169U;
volatile int32_t t111 = 1364;
int32_t x450 = INT32_MIN;
int16_t x452 = INT16_MAX;
volatile int32_t x453 = 521312074;
static volatile int16_t x457 = -1;
volatile uint16_t x459 = UINT16_MAX;
volatile uint16_t x463 = 648U;
static int8_t x468 = INT8_MIN;
int64_t t116 = -4817144310LL;
int64_t x470 = INT64_MIN;
uint8_t x472 = 10U;
uint64_t x473 = 5802598235824798LLU;
volatile uint64_t t118 = 3632LLU;
int8_t x480 = 1;
int64_t x481 = INT64_MIN;
int32_t x487 = -1;
volatile int8_t x490 = INT8_MIN;
static int16_t x492 = 1;
volatile int32_t x493 = -109933;
static volatile int64_t x495 = -669LL;
int32_t t123 = 5;
volatile int64_t x504 = -136756986810417LL;
int16_t x506 = INT16_MAX;
volatile int32_t t126 = 372411;
volatile uint32_t x513 = UINT32_MAX;
int8_t x515 = -2;
volatile uint32_t t128 = 254U;
int16_t x517 = -14;
volatile int64_t x521 = -25014389035290240LL;
uint32_t x524 = UINT32_MAX;
int32_t x531 = INT32_MIN;
uint64_t x533 = 547347LLU;
int64_t t134 = -776LL;
int8_t x545 = INT8_MIN;
uint8_t x546 = 8U;
volatile uint64_t x547 = 1311854038083536297LLU;
int64_t x548 = -1LL;
static int32_t t136 = -640;
int16_t x550 = -1;
int16_t x551 = INT16_MIN;
int64_t x554 = INT64_MIN;
uint32_t x556 = 11U;
volatile int64_t t139 = -1050169217LL;
static int32_t x563 = INT32_MAX;
static uint64_t x565 = UINT64_MAX;
int8_t x572 = 5;
int64_t x574 = -1LL;
volatile uint64_t t143 = 12797LLU;
uint64_t x584 = UINT64_MAX;
int8_t x594 = -1;
static int64_t x596 = -1LL;
static volatile int32_t x610 = INT32_MIN;
volatile int16_t x613 = INT16_MAX;
int8_t x614 = 0;
static int16_t x618 = 0;
uint64_t t154 = 5815994528885051622LLU;
volatile int32_t x623 = -1;
volatile uint64_t t155 = 2758215466233315919LLU;
int64_t x627 = 16LL;
uint64_t x629 = UINT64_MAX;
uint8_t x637 = 105U;
uint8_t x639 = 23U;
int32_t t159 = 1883;
uint32_t x641 = 844689U;
int8_t x646 = 1;
uint8_t x654 = UINT8_MAX;
int64_t x657 = INT64_MAX;
uint32_t x661 = 11339U;
uint8_t x666 = 36U;
int64_t x667 = 272895651420368606LL;
volatile int16_t x671 = INT16_MIN;
int8_t x678 = INT8_MAX;
uint64_t x680 = UINT64_MAX;
int64_t x686 = INT64_MIN;
uint8_t x692 = UINT8_MAX;
int64_t t173 = 80233126209LL;
static volatile int64_t t174 = -58LL;
uint32_t x706 = 0U;
int32_t t177 = 5355119;
volatile int64_t x714 = -1176121809090541740LL;
volatile int32_t t178 = -447011;
int16_t x720 = INT16_MAX;
int16_t x722 = 2;
static int8_t x723 = INT8_MAX;
int8_t x734 = INT8_MIN;
int8_t x743 = INT8_MIN;
int16_t x749 = -1;
int32_t x751 = INT32_MAX;
int64_t t189 = 100371332850LL;
static int32_t x764 = -1;
static volatile uint32_t t191 = 2U;
int64_t x769 = -1LL;
int64_t x775 = INT64_MIN;
int8_t x776 = INT8_MAX;
volatile int64_t x777 = INT64_MIN;
int64_t t194 = 9241LL;
uint16_t x785 = 209U;
int32_t t196 = 1135909;
static int32_t x790 = 1679;
int64_t x795 = INT64_MAX;
int32_t t198 = 26;


void f0(void) {
    	volatile uint32_t x2 = UINT32_MAX;
	int32_t t0 = -5;

    t0 = (x1&((x2!=x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 979;
	static volatile int32_t x6 = -1121032;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -166160;

    t1 = (x5&((x6!=x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 4U;
	int64_t x10 = INT64_MIN;
	volatile int64_t x11 = -35086752317712652LL;
	int16_t x12 = -6;

    t2 = (x9&((x10!=x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -1LL;
	static uint8_t x14 = 3U;
	uint8_t x16 = 3U;
	volatile int64_t t3 = -212069821534637574LL;

    t3 = (x13&((x14!=x15)==x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;

    t4 = (x17&((x18!=x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = 2;
	int32_t t5 = 25;

    t5 = (x21&((x22!=x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int16_t x27 = -1;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 783;

    t6 = (x25&((x26!=x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 31582708441127LL;
	uint64_t x32 = 528318332LLU;
	volatile int64_t t7 = 3164810LL;

    t7 = (x29&((x30!=x31)==x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	int64_t t8 = -5667917LL;

    t8 = (x33&((x34!=x35)==x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 1;
	uint64_t x38 = 190357088761LLU;
	int64_t x39 = INT64_MIN;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = 8152092;

    t9 = (x37&((x38!=x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = 2348033LLU;
	int32_t t10 = -8241677;

    t10 = (x41&((x42!=x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	static int32_t x46 = INT32_MAX;
	int64_t x47 = INT64_MIN;
	static volatile int8_t x48 = 26;
	static volatile int32_t t11 = 105;

    t11 = (x45&((x46!=x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 0;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = -1;
	static int32_t t12 = -123267;

    t12 = (x49&((x50!=x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = 4U;
	uint64_t x56 = 16LLU;
	volatile int32_t t13 = 18729;

    t13 = (x53&((x54!=x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static uint32_t x58 = UINT32_MAX;
	static volatile uint8_t x60 = 1U;

    t14 = (x57&((x58!=x59)==x60));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 25;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	static int64_t x64 = 7132090161LL;
	volatile int32_t t15 = 2;

    t15 = (x61&((x62!=x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x66 = 7716U;
	volatile uint64_t x67 = 552981495779419482LLU;
	volatile int8_t x68 = INT8_MAX;
	uint64_t t16 = 1463LLU;

    t16 = (x65&((x66!=x67)==x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	volatile int16_t x70 = INT16_MAX;
	static int8_t x71 = 1;
	uint32_t x72 = 9405U;
	volatile int64_t t17 = -26163LL;

    t17 = (x69&((x70!=x71)==x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = 12;
	static int32_t x74 = INT32_MIN;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 1151;

    t18 = (x73&((x74!=x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = 12;
	volatile uint64_t x79 = 1789978246892239LLU;
	int8_t x80 = INT8_MIN;

    t19 = (x77&((x78!=x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 3032U;
	int64_t x82 = 454774324705865LL;
	volatile int32_t x83 = INT32_MIN;
	volatile uint32_t x84 = 20U;
	int32_t t20 = -6942856;

    t20 = (x81&((x82!=x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	static int8_t x86 = -1;
	uint16_t x88 = 7U;
	volatile int32_t t21 = 40986726;

    t21 = (x85&((x86!=x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = -1;
	uint16_t x90 = 627U;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 10255;

    t22 = (x89&((x90!=x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 259820710302LLU;
	uint32_t x96 = UINT32_MAX;
	uint64_t t23 = 24983641970121463LLU;

    t23 = (x93&((x94!=x95)==x96));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	uint64_t x98 = 86417081457627088LLU;
	int32_t t24 = -1372;

    t24 = (x97&((x98!=x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = 7;
	int64_t x102 = 2922377877464LL;
	uint64_t x103 = 396043530899572143LLU;
	static uint32_t x104 = 12U;
	static int32_t t25 = -6;

    t25 = (x101&((x102!=x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 1U;
	uint8_t x106 = 0U;
	int32_t x107 = 254236919;
	volatile int64_t x108 = INT64_MAX;
	static volatile int32_t t26 = 17;

    t26 = (x105&((x106!=x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	int16_t x111 = 0;
	int64_t x112 = INT64_MAX;
	int64_t t27 = -4368396084LL;

    t27 = (x109&((x110!=x111)==x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	volatile int16_t x116 = INT16_MAX;

    t28 = (x113&((x114!=x115)==x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	volatile uint8_t x118 = 24U;
	uint32_t x119 = 3231902U;
	uint16_t x120 = 24902U;
	volatile int32_t t29 = 18587;

    t29 = (x117&((x118!=x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	static int16_t x123 = -1;
	static int16_t x124 = INT16_MAX;
	int32_t t30 = -38718;

    t30 = (x121&((x122!=x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = 954497506;
	volatile int64_t x127 = INT64_MIN;
	volatile int32_t t31 = 561349;

    t31 = (x125&((x126!=x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int64_t x131 = -836856700517LL;
	uint8_t x132 = 8U;
	volatile int32_t t32 = -6083625;

    t32 = (x129&((x130!=x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = INT64_MAX;
	int64_t x136 = -200670LL;
	int32_t t33 = 70605;

    t33 = (x133&((x134!=x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x137 = 6105542162669009LLU;
	uint8_t x138 = 9U;
	static uint8_t x139 = UINT8_MAX;
	int8_t x140 = -1;
	uint64_t t34 = 157068LLU;

    t34 = (x137&((x138!=x139)==x140));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = -1LL;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	volatile int64_t x144 = -1LL;
	volatile int64_t t35 = -2058927703LL;

    t35 = (x141&((x142!=x143)==x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -2408543;
	static int32_t x146 = INT32_MIN;
	static int64_t x147 = 22275016LL;
	volatile int64_t x148 = -1LL;
	int32_t t36 = 6663;

    t36 = (x145&((x146!=x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 5052U;
	uint8_t x151 = 0U;
	int64_t x152 = INT64_MIN;
	volatile uint32_t t37 = 181U;

    t37 = (x149&((x150!=x151)==x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -483;
	uint16_t x154 = 134U;
	static uint8_t x156 = 19U;
	static volatile int32_t t38 = 982;

    t38 = (x153&((x154!=x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 9498LLU;
	uint16_t x158 = 441U;
	int8_t x159 = INT8_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	uint64_t t39 = 250LLU;

    t39 = (x157&((x158!=x159)==x160));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x161 = 102U;
	int16_t x164 = -2;

    t40 = (x161&((x162!=x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	int8_t x166 = -18;
	static int8_t x167 = -1;
	int64_t x168 = -1LL;
	volatile int32_t t41 = 380;

    t41 = (x165&((x166!=x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x172 = 11U;
	static int32_t t42 = -124;

    t42 = (x169&((x170!=x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	volatile int8_t x176 = INT8_MIN;

    t43 = (x173&((x174!=x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 2U;
	int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	volatile int64_t x180 = -1LL;
	volatile uint32_t t44 = 8U;

    t44 = (x177&((x178!=x179)==x180));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int64_t x182 = -159251683964226LL;
	int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 211;

    t45 = (x181&((x182!=x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 7254U;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 3U;
	volatile uint32_t x188 = 210247932U;
	volatile int32_t t46 = 7165374;

    t46 = (x185&((x186!=x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static uint16_t x190 = 21U;
	int16_t x191 = 708;
	int32_t x192 = INT32_MIN;

    t47 = (x189&((x190!=x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = -51LL;
	static uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -1351090;

    t48 = (x193&((x194!=x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	static int8_t x198 = 0;
	static int32_t x199 = -1;
	static int16_t x200 = -1;

    t49 = (x197&((x198!=x199)==x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x202 = -554520063;
	int16_t x203 = 97;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = 74;

    t50 = (x201&((x202!=x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x207 = 801498163LLU;
	int16_t x208 = -1;
	int32_t t51 = -10625081;

    t51 = (x205&((x206!=x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = INT64_MIN;
	int64_t x210 = -1LL;
	volatile int8_t x211 = -1;
	volatile int8_t x212 = -1;
	volatile int64_t t52 = -2238528339417LL;

    t52 = (x209&((x210!=x211)==x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = -1;
	int16_t x214 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	static volatile int32_t t53 = -504;

    t53 = (x213&((x214!=x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x218 = 2;
	volatile int8_t x219 = -48;

    t54 = (x217&((x218!=x219)==x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 416000602881260633LLU;
	static int8_t x223 = INT8_MIN;
	static int8_t x224 = -38;
	uint32_t t55 = 1U;

    t55 = (x221&((x222!=x223)==x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	int32_t x227 = 6674847;
	static int64_t x228 = INT64_MIN;
	int32_t t56 = 5915171;

    t56 = (x225&((x226!=x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x229 = 25U;
	static uint8_t x230 = UINT8_MAX;
	volatile int32_t t57 = 37102514;

    t57 = (x229&((x230!=x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 835222126615309922LLU;
	int64_t x234 = 846740LL;
	uint16_t x235 = UINT16_MAX;
	static volatile int32_t x236 = INT32_MIN;
	volatile uint64_t t58 = 1LLU;

    t58 = (x233&((x234!=x235)==x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MAX;
	int64_t t59 = -2LL;

    t59 = (x237&((x238!=x239)==x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 501273;
	volatile int8_t x243 = 4;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -97849724;

    t60 = (x241&((x242!=x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MIN;
	static volatile int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	static int32_t t61 = 7;

    t61 = (x245&((x246!=x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x250 = UINT16_MAX;
	int64_t x251 = -326348LL;
	int16_t x252 = 483;

    t62 = (x249&((x250!=x251)==x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	static int32_t x254 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 15262221;

    t63 = (x253&((x254!=x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -27;
	static uint32_t x258 = UINT32_MAX;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 45088;

    t64 = (x257&((x258!=x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = INT64_MAX;
	int32_t t65 = 716;

    t65 = (x261&((x262!=x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 123U;
	volatile int16_t x266 = INT16_MAX;
	static int32_t x267 = 135867313;
	int32_t x268 = -2;
	static int32_t t66 = 39947746;

    t66 = (x265&((x266!=x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -31;
	int16_t x272 = 0;
	volatile uint32_t t67 = 138329U;

    t67 = (x269&((x270!=x271)==x272));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	uint16_t x274 = 2840U;
	int64_t x275 = -1969125386740832LL;
	static uint64_t x276 = UINT64_MAX;
	static volatile int64_t t68 = -1LL;

    t68 = (x273&((x274!=x275)==x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int32_t x278 = 248;
	static int8_t x280 = 23;
	int32_t t69 = -83;

    t69 = (x277&((x278!=x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 1166081U;
	uint16_t x282 = 2U;
	volatile int16_t x284 = 1;
	uint32_t t70 = 15794U;

    t70 = (x281&((x282!=x283)==x284));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = 125U;
	static int32_t t71 = -213;

    t71 = (x285&((x286!=x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x289 = UINT8_MAX;
	int8_t x290 = INT8_MIN;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = 26;
	volatile int32_t t72 = 41701;

    t72 = (x289&((x290!=x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 94U;
	volatile uint8_t x294 = 2U;
	volatile uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	int32_t t73 = 534151;

    t73 = (x293&((x294!=x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	uint64_t x298 = 2370669618809833LLU;
	uint64_t x300 = UINT64_MAX;
	static int32_t t74 = -64860621;

    t74 = (x297&((x298!=x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -762366314;
	volatile int32_t x302 = 31;
	uint32_t x303 = 41177370U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -168274;

    t75 = (x301&((x302!=x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	volatile int64_t x306 = INT64_MAX;
	uint8_t x307 = 27U;
	uint8_t x308 = 0U;
	volatile int64_t t76 = 78702479907LL;

    t76 = (x305&((x306!=x307)==x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 3316U;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	uint32_t t77 = 659U;

    t77 = (x309&((x310!=x311)==x312));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x313 = UINT8_MAX;
	static int64_t x314 = -186071890495854246LL;
	volatile int8_t x315 = -4;
	int64_t x316 = -1LL;

    t78 = (x313&((x314!=x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	int64_t x319 = 0LL;
	int32_t x320 = INT32_MIN;

    t79 = (x317&((x318!=x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	static int8_t x322 = -1;
	int8_t x323 = -1;

    t80 = (x321&((x322!=x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 37U;
	int8_t x327 = 49;
	int16_t x328 = -1;

    t81 = (x325&((x326!=x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = UINT32_MAX;
	int16_t x331 = -94;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = 2052453795U;

    t82 = (x329&((x330!=x331)==x332));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = 411262LLU;
	volatile int64_t x335 = INT64_MAX;
	uint32_t x336 = 51U;
	uint64_t t83 = 14LLU;

    t83 = (x333&((x334!=x335)==x336));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -3;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = -4;
	int32_t t84 = -2524630;

    t84 = (x337&((x338!=x339)==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = 0;
	int64_t x342 = INT64_MAX;
	uint64_t x343 = 201779765LLU;
	uint16_t x344 = UINT16_MAX;

    t85 = (x341&((x342!=x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 5U;
	uint64_t x346 = 6012412921666738657LLU;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 913457;

    t86 = (x345&((x346!=x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = 5594U;
	uint32_t x350 = 2066798175U;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 23578875LL;
	volatile int32_t t87 = 48;

    t87 = (x349&((x350!=x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MAX;
	int16_t x355 = INT16_MIN;
	volatile uint64_t x356 = 148313980LLU;
	volatile int32_t t88 = -20268;

    t88 = (x353&((x354!=x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x359 = UINT32_MAX;
	static volatile int32_t t89 = -1246474;

    t89 = (x357&((x358!=x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	uint32_t x362 = 6231841U;
	volatile int64_t x363 = -1LL;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 458097051LLU;

    t90 = (x361&((x362!=x363)==x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MAX;
	int32_t x366 = -113530338;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 5;

    t91 = (x365&((x366!=x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int64_t x370 = -1LL;
	int8_t x371 = 1;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t92 = 865901888;

    t92 = (x369&((x370!=x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	uint8_t x375 = 73U;
	int8_t x376 = -1;
	static int32_t t93 = -100;

    t93 = (x373&((x374!=x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -1LL;
	static int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t94 = 1329U;

    t94 = (x377&((x378!=x379)==x380));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	volatile int32_t t95 = 354157958;

    t95 = (x381&((x382!=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x387 = -1;
	int64_t x388 = INT64_MIN;

    t96 = (x385&((x386!=x387)==x388));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;

    t97 = (x389&((x390!=x391)==x392));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 51U;
	int8_t x394 = -1;
	int16_t x395 = -1;
	volatile int32_t x396 = INT32_MAX;
	volatile int32_t t98 = -6719480;

    t98 = (x393&((x394!=x395)==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = 48;
	static int8_t x399 = -61;
	static volatile int32_t t99 = -740;

    t99 = (x397&((x398!=x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	volatile int8_t x402 = -26;
	int32_t x403 = INT32_MIN;

    t100 = (x401&((x402!=x403)==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x405 = 2U;
	int8_t x407 = INT8_MAX;
	volatile uint64_t x408 = 44303506717790LLU;

    t101 = (x405&((x406!=x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	int16_t x410 = -670;
	int32_t x412 = INT32_MIN;
	volatile int32_t t102 = -2724227;

    t102 = (x409&((x410!=x411)==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	uint8_t x415 = 0U;
	int32_t x416 = -254;
	volatile int32_t t103 = 517654413;

    t103 = (x413&((x414!=x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -14;
	static int64_t x418 = -108735264190942140LL;
	uint32_t x419 = 48U;
	int32_t x420 = -1;
	int32_t t104 = 3893;

    t104 = (x417&((x418!=x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 3449540309328LLU;
	static uint16_t x423 = 16U;
	uint8_t x424 = 0U;
	static uint64_t t105 = 1113293LLU;

    t105 = (x421&((x422!=x423)==x424));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	uint64_t x426 = 64262487LLU;
	int8_t x427 = -1;
	int32_t x428 = -253077406;

    t106 = (x425&((x426!=x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	uint64_t x430 = 5325201828364LLU;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	volatile int64_t t107 = -22394602LL;

    t107 = (x429&((x430!=x431)==x432));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	volatile int8_t x434 = 6;
	uint8_t x436 = 46U;
	volatile int32_t t108 = -7;

    t108 = (x433&((x434!=x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x437 = 70U;
	static int16_t x438 = 14945;
	int16_t x439 = -1;

    t109 = (x437&((x438!=x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int64_t x442 = INT64_MIN;
	volatile int16_t x443 = 2226;
	int32_t x444 = 0;
	static int32_t t110 = -2843;

    t110 = (x441&((x442!=x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int16_t x447 = -1;
	uint16_t x448 = 1U;

    t111 = (x445&((x446!=x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = INT16_MIN;
	int8_t x451 = INT8_MIN;
	volatile int32_t t112 = 323;

    t112 = (x449&((x450!=x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = INT16_MIN;
	static uint64_t x455 = 1323793LLU;
	static int16_t x456 = 6;
	volatile int32_t t113 = 910520656;

    t113 = (x453&((x454!=x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = INT16_MAX;
	int64_t x460 = INT64_MAX;
	int32_t t114 = -508402;

    t114 = (x457&((x458!=x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 0U;
	int16_t x462 = 43;
	int64_t x464 = -454703747493244802LL;
	volatile int32_t t115 = 0;

    t115 = (x461&((x462!=x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = INT64_MIN;
	volatile int64_t x466 = -1LL;
	static uint16_t x467 = 38U;

    t116 = (x465&((x466!=x467)==x468));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = INT64_MAX;
	static volatile int8_t x471 = 0;
	volatile int64_t t117 = 123455123310310032LL;

    t117 = (x469&((x470!=x471)==x472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 10U;
	static uint32_t x475 = UINT32_MAX;
	uint64_t x476 = 400LLU;

    t118 = (x473&((x474!=x475)==x476));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	int32_t x478 = -1;
	int16_t x479 = INT16_MIN;
	int32_t t119 = -260123922;

    t119 = (x477&((x478!=x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = -1;
	static int32_t x483 = 0;
	uint16_t x484 = 1U;
	volatile int64_t t120 = -1879239LL;

    t120 = (x481&((x482!=x483)==x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	uint64_t x486 = UINT64_MAX;
	volatile int8_t x488 = -1;
	volatile int32_t t121 = 845;

    t121 = (x485&((x486!=x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	volatile int64_t x491 = -26726LL;
	int32_t t122 = -2521;

    t122 = (x489&((x490!=x491)==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x494 = INT16_MIN;
	int16_t x496 = INT16_MIN;

    t123 = (x493&((x494!=x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	uint16_t x498 = 2U;
	uint32_t x499 = 203U;
	int8_t x500 = 1;
	volatile uint64_t t124 = 128922LLU;

    t124 = (x497&((x498!=x499)==x500));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MAX;
	int64_t x502 = -1LL;
	int16_t x503 = INT16_MAX;
	int32_t t125 = 61023433;

    t125 = (x501&((x502!=x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	uint32_t x507 = 1635U;
	int16_t x508 = INT16_MAX;

    t126 = (x505&((x506!=x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	uint8_t x510 = 61U;
	int8_t x511 = 1;
	int16_t x512 = INT16_MIN;
	static int32_t t127 = 12977;

    t127 = (x509&((x510!=x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x514 = INT32_MIN;
	static int16_t x516 = -1;

    t128 = (x513&((x514!=x515)==x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = INT64_MIN;
	uint16_t x519 = 0U;
	int16_t x520 = -1;
	volatile int32_t t129 = 5518662;

    t129 = (x517&((x518!=x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MAX;
	uint8_t x523 = UINT8_MAX;
	int64_t t130 = 29191273781412LL;

    t130 = (x521&((x522!=x523)==x524));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	static uint32_t x526 = 307439U;
	volatile int8_t x527 = -7;
	int64_t x528 = -316LL;
	int32_t t131 = 112898;

    t131 = (x525&((x526!=x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	uint64_t x530 = 133256769LLU;
	int64_t x532 = 330LL;
	int32_t t132 = -648837523;

    t132 = (x529&((x530!=x531)==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = 46U;
	int32_t x535 = 1465;
	int64_t x536 = INT64_MIN;
	static volatile uint64_t t133 = 296009802268LLU;

    t133 = (x533&((x534!=x535)==x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	uint64_t x538 = UINT64_MAX;
	uint16_t x539 = 1U;
	volatile int8_t x540 = -3;

    t134 = (x537&((x538!=x539)==x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -50;
	volatile int16_t x542 = -250;
	int16_t x543 = 4;
	static int8_t x544 = -21;
	int32_t t135 = 4017009;

    t135 = (x541&((x542!=x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    

    t136 = (x545&((x546!=x547)==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 15865572120976014LLU;
	int64_t x552 = 274362145431564LL;
	uint64_t t137 = 413267747922LLU;

    t137 = (x549&((x550!=x551)==x552));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -1576;
	int32_t x555 = INT32_MAX;
	int32_t t138 = -8677;

    t138 = (x553&((x554!=x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = -1LL;
	int16_t x558 = INT16_MAX;
	int16_t x559 = INT16_MIN;
	volatile int16_t x560 = INT16_MIN;

    t139 = (x557&((x558!=x559)==x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 154U;
	volatile int8_t x562 = -1;
	int64_t x564 = 282806150LL;
	volatile uint32_t t140 = 108900293U;

    t140 = (x561&((x562!=x563)==x564));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x566 = 77380LLU;
	static volatile int16_t x567 = -1;
	uint16_t x568 = 758U;
	volatile uint64_t t141 = 5826031235563550LLU;

    t141 = (x565&((x566!=x567)==x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x569 = 3U;
	static int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	static volatile int32_t t142 = -14381072;

    t142 = (x569&((x570!=x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x573 = UINT64_MAX;
	volatile int16_t x575 = 6376;
	uint64_t x576 = UINT64_MAX;

    t143 = (x573&((x574!=x575)==x576));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = -4521963;
	int64_t x579 = -1LL;
	int16_t x580 = INT16_MAX;
	int32_t t144 = -1571534;

    t144 = (x577&((x578!=x579)==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	int32_t x582 = INT32_MAX;
	static volatile int32_t x583 = -431802724;
	static volatile uint64_t t145 = 1739LLU;

    t145 = (x581&((x582!=x583)==x584));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MAX;
	int32_t x586 = INT32_MIN;
	uint16_t x587 = 75U;
	int32_t x588 = 607188;
	int32_t t146 = 76589;

    t146 = (x585&((x586!=x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	uint32_t x590 = 230975716U;
	static int32_t x591 = -1;
	uint32_t x592 = UINT32_MAX;
	int32_t t147 = 1418;

    t147 = (x589&((x590!=x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 678U;
	uint64_t x595 = 825740LLU;
	int32_t t148 = 299;

    t148 = (x593&((x594!=x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	static int8_t x598 = INT8_MIN;
	int32_t x599 = -1;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -2033916;

    t149 = (x597&((x598!=x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x601 = 38U;
	int64_t x602 = -15LL;
	uint64_t x603 = 6796938104712LLU;
	static int16_t x604 = INT16_MAX;
	static volatile int32_t t150 = 10199004;

    t150 = (x601&((x602!=x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int64_t x606 = -3441LL;
	int32_t x607 = 240320236;
	int16_t x608 = -4913;
	int32_t t151 = 2;

    t151 = (x605&((x606!=x607)==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MIN;
	uint16_t x611 = UINT16_MAX;
	int64_t x612 = -5795667341470LL;
	volatile int64_t t152 = 7LL;

    t152 = (x609&((x610!=x611)==x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x615 = 6;
	volatile int32_t x616 = INT32_MIN;
	static volatile int32_t t153 = -16584;

    t153 = (x613&((x614!=x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 8251261937629297LLU;
	volatile uint64_t x619 = UINT64_MAX;
	int32_t x620 = 192100957;

    t154 = (x617&((x618!=x619)==x620));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	static int64_t x622 = -600716978LL;
	static int8_t x624 = INT8_MIN;

    t155 = (x621&((x622!=x623)==x624));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 24731;
	static int8_t x626 = -1;
	static int64_t x628 = INT64_MAX;
	int32_t t156 = 3321;

    t156 = (x625&((x626!=x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = -1LL;
	static int16_t x631 = INT16_MAX;
	int8_t x632 = -43;
	static uint64_t t157 = 2839730080029927908LLU;

    t157 = (x629&((x630!=x631)==x632));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = INT16_MIN;
	uint16_t x634 = 3U;
	static int16_t x635 = 0;
	volatile int32_t x636 = 10177;
	static volatile int32_t t158 = 7446358;

    t158 = (x633&((x634!=x635)==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = -1;
	uint32_t x640 = 0U;

    t159 = (x637&((x638!=x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x642 = 0U;
	uint8_t x643 = 57U;
	static int32_t x644 = INT32_MAX;
	uint32_t t160 = 33999540U;

    t160 = (x641&((x642!=x643)==x644));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = INT32_MAX;
	uint32_t x647 = 5U;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 0;

    t161 = (x645&((x646!=x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 178U;
	int8_t x650 = INT8_MAX;
	volatile int16_t x651 = INT16_MAX;
	int16_t x652 = 7802;
	volatile uint32_t t162 = 369786U;

    t162 = (x649&((x650!=x651)==x652));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x653 = 27U;
	int64_t x655 = INT64_MIN;
	uint64_t x656 = UINT64_MAX;
	int32_t t163 = -1;

    t163 = (x653&((x654!=x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = -6;
	int8_t x659 = INT8_MIN;
	int16_t x660 = -29;
	volatile int64_t t164 = -14LL;

    t164 = (x657&((x658!=x659)==x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x662 = INT32_MAX;
	static int64_t x663 = INT64_MIN;
	volatile int64_t x664 = INT64_MIN;
	static uint32_t t165 = 75889176U;

    t165 = (x661&((x662!=x663)==x664));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x665 = INT8_MIN;
	int8_t x668 = INT8_MIN;
	static volatile int32_t t166 = -31;

    t166 = (x665&((x666!=x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int32_t x670 = INT32_MAX;
	int64_t x672 = -1LL;
	volatile int32_t t167 = -3;

    t167 = (x669&((x670!=x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	uint64_t x674 = 31570519611LLU;
	int16_t x675 = -1;
	volatile int64_t x676 = INT64_MAX;
	volatile int64_t t168 = 34005475941480399LL;

    t168 = (x673&((x674!=x675)==x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	uint32_t x679 = 4908U;
	volatile int32_t t169 = 1309;

    t169 = (x677&((x678!=x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -30;
	uint8_t x682 = 0U;
	static int16_t x683 = 15178;
	static int32_t x684 = INT32_MAX;
	int32_t t170 = -5533;

    t170 = (x681&((x682!=x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -1;
	int64_t x687 = INT64_MIN;
	uint8_t x688 = 30U;
	volatile int32_t t171 = 674673;

    t171 = (x685&((x686!=x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x689 = 6392U;
	volatile uint16_t x690 = 406U;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t t172 = -9424;

    t172 = (x689&((x690!=x691)==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	uint16_t x694 = UINT16_MAX;
	int16_t x695 = INT16_MIN;
	volatile int64_t x696 = 236434735247298352LL;

    t173 = (x693&((x694!=x695)==x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x697 = INT64_MAX;
	int8_t x698 = INT8_MIN;
	static volatile uint64_t x699 = UINT64_MAX;
	int8_t x700 = INT8_MIN;

    t174 = (x697&((x698!=x699)==x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -1;
	uint32_t x702 = 4057492U;
	int32_t x703 = 24;
	int16_t x704 = 1;
	static volatile int32_t t175 = 45426327;

    t175 = (x701&((x702!=x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	int32_t x707 = 1;
	int64_t x708 = 1077542LL;
	volatile int32_t t176 = 594;

    t176 = (x705&((x706!=x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MAX;
	int64_t x710 = INT64_MIN;
	int8_t x711 = -6;
	int64_t x712 = INT64_MAX;

    t177 = (x709&((x710!=x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = -504047554;
	uint64_t x715 = 487649856LLU;
	int8_t x716 = 29;

    t178 = (x713&((x714!=x715)==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	int8_t x718 = INT8_MAX;
	uint8_t x719 = 13U;
	static uint32_t t179 = 631U;

    t179 = (x717&((x718!=x719)==x720));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	int32_t x724 = INT32_MAX;
	int32_t t180 = -1554;

    t180 = (x721&((x722!=x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = 144;
	uint8_t x726 = 1U;
	static uint32_t x727 = 37900U;
	int32_t x728 = 229;
	volatile int32_t t181 = 1738730;

    t181 = (x725&((x726!=x727)==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x729 = UINT16_MAX;
	int32_t x730 = -9;
	uint16_t x731 = 31517U;
	static int8_t x732 = INT8_MIN;
	volatile int32_t t182 = -7;

    t182 = (x729&((x730!=x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = 4;
	volatile uint8_t x735 = UINT8_MAX;
	int64_t x736 = INT64_MIN;
	int32_t t183 = 12678;

    t183 = (x733&((x734!=x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = 85U;
	int8_t x738 = 1;
	int8_t x739 = INT8_MIN;
	int32_t x740 = INT32_MIN;
	int32_t t184 = -7979;

    t184 = (x737&((x738!=x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	uint16_t x744 = 3835U;
	static volatile int32_t t185 = 105094;

    t185 = (x741&((x742!=x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = 3115U;
	static int64_t x746 = 82785792LL;
	volatile uint8_t x747 = UINT8_MAX;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t186 = -1366;

    t186 = (x745&((x746!=x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x750 = -1;
	int64_t x752 = -1LL;
	volatile int32_t t187 = 1;

    t187 = (x749&((x750!=x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -139478094742179421LL;
	volatile int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MAX;
	static int32_t x756 = INT32_MIN;
	int64_t t188 = 36008960LL;

    t188 = (x753&((x754!=x755)==x756));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -16096284324465LL;
	int16_t x758 = -82;
	volatile uint8_t x759 = 101U;
	static uint64_t x760 = UINT64_MAX;

    t189 = (x757&((x758!=x759)==x760));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = INT8_MIN;
	volatile uint16_t x762 = 2070U;
	static uint64_t x763 = 1871956790569LLU;
	volatile int32_t t190 = -82;

    t190 = (x761&((x762!=x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile int64_t x766 = INT64_MAX;
	static int16_t x767 = INT16_MIN;
	int8_t x768 = INT8_MIN;

    t191 = (x765&((x766!=x767)==x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = 7U;
	uint64_t x771 = 394027LLU;
	uint8_t x772 = UINT8_MAX;
	volatile int64_t t192 = 7LL;

    t192 = (x769&((x770!=x771)==x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	static int8_t x774 = INT8_MIN;
	volatile int64_t t193 = 1898135956618517019LL;

    t193 = (x773&((x774!=x775)==x776));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 396U;
	static int8_t x779 = -1;
	int64_t x780 = INT64_MIN;

    t194 = (x777&((x778!=x779)==x780));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 335997773LLU;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = 3U;
	int16_t x784 = INT16_MIN;
	uint64_t t195 = 231429458504LLU;

    t195 = (x781&((x782!=x783)==x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x786 = 2U;
	int64_t x787 = INT64_MIN;
	volatile int8_t x788 = INT8_MAX;

    t196 = (x785&((x786!=x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x789 = 41665U;
	int8_t x791 = 0;
	static uint32_t x792 = 1U;
	uint32_t t197 = 30U;

    t197 = (x789&((x790!=x791)==x792));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	static int8_t x794 = INT8_MIN;
	int64_t x796 = INT64_MAX;

    t198 = (x793&((x794!=x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = -1;
	static int8_t x798 = INT8_MIN;
	static int64_t x799 = INT64_MIN;
	volatile uint64_t x800 = 368165037736627085LLU;
	static volatile int32_t t199 = 420;

    t199 = (x797&((x798!=x799)==x800));

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

