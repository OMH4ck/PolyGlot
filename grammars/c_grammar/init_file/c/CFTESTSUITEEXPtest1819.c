
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

volatile int16_t x2 = INT16_MIN;
volatile int64_t x5 = INT64_MIN;
int32_t x6 = INT32_MIN;
int64_t t1 = INT64_MIN;
volatile int64_t t4 = INT64_MAX;
static uint32_t x27 = 12U;
volatile int64_t x30 = -2446291937045LL;
uint8_t x36 = 5U;
volatile int16_t x37 = INT16_MIN;
int64_t x43 = -1LL;
static int8_t x49 = INT8_MIN;
int64_t x51 = -1LL;
static int64_t x55 = 49231162LL;
uint16_t x58 = 5786U;
int16_t x65 = INT16_MIN;
static int32_t x68 = INT32_MIN;
int32_t x73 = INT32_MIN;
int32_t x79 = INT32_MIN;
static int32_t x81 = INT32_MIN;
int64_t x83 = -1LL;
volatile uint16_t x85 = UINT16_MAX;
uint64_t x87 = UINT64_MAX;
uint16_t x93 = UINT16_MAX;
int64_t x94 = -1LL;
int64_t x98 = -4239784535295LL;
int32_t x105 = 0;
int64_t x106 = INT64_MAX;
uint64_t x114 = 11283253325LLU;
uint8_t x120 = UINT8_MAX;
volatile uint8_t x123 = UINT8_MAX;
int64_t x126 = -5227207537899LL;
uint16_t x128 = 65U;
int64_t t32 = INT64_MIN;
volatile uint64_t x136 = 26802086LLU;
volatile uint64_t t33 = 56876LLU;
uint64_t x137 = UINT64_MAX;
volatile int8_t x140 = -1;
int32_t x144 = INT32_MAX;
volatile uint16_t x145 = 3461U;
volatile uint8_t x146 = 7U;
static uint8_t x148 = 1U;
int32_t t36 = 1318;
static volatile int32_t x150 = INT32_MIN;
static volatile uint16_t x151 = 29250U;
uint32_t x153 = 15704833U;
int8_t x154 = 18;
static int16_t x161 = -350;
volatile int64_t t40 = -122197823363100LL;
volatile int64_t x166 = -281054LL;
int64_t t41 = -16376457847LL;
uint32_t x171 = 27437281U;
uint32_t x172 = 102U;
volatile int8_t x186 = INT8_MIN;
volatile int64_t x188 = 368076621068LL;
volatile uint16_t x192 = UINT16_MAX;
volatile int8_t x195 = -1;
volatile int64_t t47 = 32423LL;
uint64_t x197 = UINT64_MAX;
uint64_t x200 = 116427639232545LLU;
uint64_t x202 = 28572LLU;
uint32_t x209 = UINT32_MAX;
volatile uint32_t x215 = 183U;
uint32_t x220 = 3827747U;
int64_t x223 = INT64_MIN;
uint32_t x228 = 39678U;
static int32_t x231 = -156547565;
static int64_t x232 = -1LL;
int16_t x234 = -1;
static int16_t x235 = INT16_MAX;
int32_t x241 = 347;
volatile int32_t t60 = -205086;
int32_t x250 = INT32_MAX;
static int16_t x256 = -2381;
static volatile int64_t t62 = INT64_MIN;
uint32_t x258 = 787U;
volatile uint32_t x261 = UINT32_MAX;
int16_t x263 = INT16_MAX;
volatile uint32_t t66 = UINT32_MAX;
volatile int64_t x278 = 33141977119807514LL;
static int16_t x279 = 1999;
int64_t t68 = INT64_MIN;
uint8_t x290 = 106U;
volatile int16_t x293 = INT16_MIN;
int32_t t72 = -102254;
uint8_t x297 = UINT8_MAX;
static int64_t x299 = INT64_MIN;
uint16_t x302 = 8337U;
uint32_t x304 = 2482392U;
volatile int16_t x308 = -1;
int16_t x314 = INT16_MIN;
volatile uint32_t x315 = 442505U;
static volatile uint32_t t77 = 285851U;
uint32_t x317 = 177U;
int8_t x319 = 33;
volatile int32_t x321 = INT32_MIN;
int32_t t83 = 16696;
static volatile int32_t x351 = INT32_MAX;
int32_t t85 = 28632262;
volatile int16_t x354 = INT16_MIN;
int64_t x363 = 1822255678474369LL;
int32_t x375 = INT32_MIN;
static int64_t t90 = 633132LL;
int16_t x381 = INT16_MAX;
uint16_t x383 = 30300U;
int32_t x385 = INT32_MAX;
int8_t x389 = -1;
int8_t x399 = INT8_MIN;
static uint8_t x401 = 6U;
int8_t x403 = INT8_MAX;
int32_t x405 = INT32_MIN;
volatile int64_t x406 = INT64_MIN;
volatile int64_t t99 = 10099789LL;
volatile uint8_t x419 = 6U;
volatile int8_t x422 = INT8_MIN;
uint16_t x425 = 16374U;
int8_t x426 = INT8_MAX;
int32_t t104 = 5285;
int64_t x436 = -1LL;
static int64_t t105 = -2525102885590662655LL;
uint16_t x442 = 2535U;
int32_t x451 = INT32_MAX;
uint64_t x453 = 1288040738767LLU;
int32_t x455 = INT32_MIN;
static int64_t x457 = -1LL;
volatile int64_t t111 = -5862565238721LL;
uint32_t t112 = UINT32_MAX;
int16_t x466 = 9794;
volatile uint64_t x471 = UINT64_MAX;
int16_t x473 = INT16_MIN;
int32_t x476 = -6351995;
int32_t t121 = 2424;
int64_t x502 = INT64_MIN;
volatile uint32_t x508 = UINT32_MAX;
int16_t x513 = -1;
int32_t t125 = 1231791;
uint64_t x523 = 1646LLU;
uint32_t x524 = UINT32_MAX;
volatile uint64_t t130 = 7983221LLU;
volatile int64_t x538 = -1LL;
int32_t x560 = 47;
int16_t x572 = INT16_MAX;
uint16_t x576 = 12U;
uint32_t x579 = 18687229U;
uint64_t t140 = 7884LLU;
int16_t x589 = -813;
int32_t x591 = INT32_MAX;
volatile uint64_t x597 = 2706228LLU;
uint8_t x600 = 40U;
int8_t x601 = INT8_MIN;
int16_t x618 = -1;
int16_t x622 = INT16_MAX;
volatile uint8_t x624 = 17U;
volatile int32_t t151 = -28329;
int64_t x626 = 390LL;
volatile int32_t x627 = INT32_MIN;
uint32_t x641 = 3U;
static uint64_t x644 = 22LLU;
int8_t x649 = 59;
int8_t x656 = 1;
static volatile uint8_t x657 = UINT8_MAX;
volatile int64_t x659 = INT64_MIN;
int32_t x671 = -1;
int16_t x682 = 31;
static int16_t x687 = -1;
int32_t t166 = -10;
volatile int64_t x690 = INT64_MIN;
static volatile int64_t t167 = -3061888LL;
int32_t x702 = -55415;
int32_t x708 = -1;
int32_t t171 = 15;
int32_t t172 = 6329447;
int8_t x717 = INT8_MIN;
uint64_t x718 = 1644462495954210372LLU;
int8_t x719 = -57;
int16_t x724 = INT16_MAX;
int8_t x726 = INT8_MAX;
volatile uint64_t x728 = 3524LLU;
int8_t x730 = INT8_MIN;
int64_t x732 = INT64_MIN;
uint64_t x740 = 292995641772585284LLU;
int8_t x745 = INT8_MIN;
uint32_t x746 = 35114732U;
int64_t x747 = INT64_MIN;
uint16_t x752 = UINT16_MAX;
uint32_t x754 = 5708U;
static int8_t x755 = INT8_MIN;
volatile int32_t x756 = 258007;
volatile uint64_t t184 = 117221345042197LLU;
uint64_t x763 = 41324492566534LLU;
int16_t x777 = INT16_MIN;
int32_t x778 = -466332914;
uint64_t t188 = 2056349LLU;
int8_t x781 = -1;
volatile int16_t x782 = INT16_MIN;
int32_t x787 = INT32_MAX;
int8_t x793 = -1;
int64_t x796 = INT64_MAX;
volatile int8_t x799 = INT8_MIN;
int16_t x801 = INT16_MIN;
static volatile int16_t x806 = INT16_MAX;
uint64_t x812 = 53816586235931233LLU;
int16_t x820 = INT16_MAX;
static int8_t x825 = INT8_MAX;
static int64_t x826 = -1LL;
int8_t x828 = -1;
static int32_t t199 = -2891992;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile uint32_t x3 = 124U;
	uint8_t x4 = 33U;
	volatile int64_t t0 = INT64_MAX;

    t0 = (x1|((x2<=x3)/x4));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = INT16_MIN;
	int64_t x8 = -792660941LL;

    t1 = (x5|((x6<=x7)/x8));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile int32_t x10 = INT32_MAX;
	volatile uint64_t x11 = 582LLU;
	int64_t x12 = 43402489760588224LL;
	volatile int64_t t2 = -68676075LL;

    t2 = (x9|((x10<=x11)/x12));

    if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	int16_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	static volatile int32_t t3 = -816;

    t3 = (x13|((x14<=x15)/x16));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	uint8_t x18 = 1U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = 6;

    t4 = (x17|((x18<=x19)/x20));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int32_t x22 = -1;
	int32_t x23 = INT32_MAX;
	int8_t x24 = -21;
	int64_t t5 = INT64_MIN;

    t5 = (x21|((x22<=x23)/x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 6828LLU;
	int64_t x26 = 6LL;
	int64_t x28 = -1LL;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x25|((x26<=x27)/x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MAX;
	uint32_t x31 = 2119594058U;
	uint64_t x32 = 724391134LLU;
	volatile uint64_t t7 = 2608837681027LLU;

    t7 = (x29|((x30<=x31)/x32));

    if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	int64_t t8 = INT64_MIN;

    t8 = (x33|((x34<=x35)/x36));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	static int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 6213196;

    t9 = (x37|((x38<=x39)/x40));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	volatile int8_t x42 = INT8_MAX;
	static int64_t x44 = -1LL;
	int64_t t10 = -43LL;

    t10 = (x41|((x42<=x43)/x44));

    if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	static int32_t x48 = -1;
	int32_t t11 = -157624027;

    t11 = (x45|((x46<=x47)/x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x50 = 105U;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 80514;

    t12 = (x49|((x50<=x51)/x52));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -675LL;
	uint8_t x54 = 1U;
	int64_t x56 = -5730LL;
	volatile int64_t t13 = -337601310509344482LL;

    t13 = (x53|((x54<=x55)/x56));

    if (t13 != -675LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int8_t x59 = INT8_MAX;
	static uint8_t x60 = 75U;
	int32_t t14 = -87;

    t14 = (x57|((x58<=x59)/x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 38U;
	volatile uint32_t x62 = 13132U;
	volatile int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -454;

    t15 = (x61|((x62<=x63)/x64));

    if (t15 != 38) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x66 = -1;
	uint32_t x67 = UINT32_MAX;
	int32_t t16 = -309179662;

    t16 = (x65|((x66<=x67)/x68));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int32_t x70 = 23616;
	int64_t x71 = 35LL;
	int8_t x72 = -2;
	int32_t t17 = 293537586;

    t17 = (x69|((x70<=x71)/x72));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x74 = 7U;
	uint16_t x75 = 1081U;
	uint8_t x76 = 75U;
	int32_t t18 = INT32_MIN;

    t18 = (x73|((x74<=x75)/x76));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 24319794;
	uint16_t x78 = 872U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 62;

    t19 = (x77|((x78<=x79)/x80));

    if (t19 != 24319794) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -2;
	int64_t x84 = 802421307566370750LL;
	static volatile int64_t t20 = 727LL;

    t20 = (x81|((x82<=x83)/x84));

    if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MIN;
	int32_t x88 = 5425;
	volatile int32_t t21 = 15495;

    t21 = (x85|((x86<=x87)/x88));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	static int8_t x91 = INT8_MIN;
	static int16_t x92 = -16;
	volatile int32_t t22 = -3762742;

    t22 = (x89|((x90<=x91)/x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x95 = 1603U;
	static int32_t x96 = -1;
	int32_t t23 = -980306;

    t23 = (x93|((x94<=x95)/x96));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile int32_t x99 = INT32_MAX;
	volatile int32_t x100 = -1;
	int32_t t24 = 203;

    t24 = (x97|((x98<=x99)/x100));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MAX;
	static volatile int16_t x102 = -1;
	uint8_t x103 = 3U;
	int16_t x104 = -4;
	int32_t t25 = 58929;

    t25 = (x101|((x102<=x103)/x104));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x107 = 5884636741779LLU;
	volatile uint64_t x108 = 1LLU;
	volatile uint64_t t26 = 2683602647041329LLU;

    t26 = (x105|((x106<=x107)/x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MIN;
	int8_t x111 = 3;
	int32_t x112 = -1;
	volatile int64_t t27 = -15111076LL;

    t27 = (x109|((x110<=x111)/x112));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = UINT8_MAX;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 75778;

    t28 = (x113|((x114<=x115)/x116));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	static int64_t x119 = INT64_MIN;
	volatile int32_t t29 = 896446711;

    t29 = (x117|((x118<=x119)/x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MAX;
	uint32_t x122 = UINT32_MAX;
	int8_t x124 = -1;
	volatile int64_t t30 = INT64_MAX;

    t30 = (x121|((x122<=x123)/x124));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -1;
	uint8_t x127 = 1U;
	int32_t t31 = -706974374;

    t31 = (x125|((x126<=x127)/x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int64_t x130 = -1LL;
	volatile int64_t x131 = INT64_MIN;
	int32_t x132 = -84;

    t32 = (x129|((x130<=x131)/x132));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 131896239150279LLU;
	uint32_t x134 = 52899U;
	int32_t x135 = 2933;

    t33 = (x133|((x134<=x135)/x136));

    if (t33 != 131896239150279LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	uint64_t t34 = UINT64_MAX;

    t34 = (x137|((x138<=x139)/x140));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 113420609319LLU;
	uint32_t x142 = 494987U;
	static volatile int64_t x143 = INT64_MIN;
	static uint64_t t35 = 14129341499LLU;

    t35 = (x141|((x142<=x143)/x144));

    if (t35 != 113420609319LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x147 = INT32_MIN;

    t36 = (x145|((x146<=x147)/x148));

    if (t36 != 3461) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 2778U;
	uint64_t x152 = 372797607216LLU;
	uint64_t t37 = 26485594510463128LLU;

    t37 = (x149|((x150<=x151)/x152));

    if (t37 != 2778LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x155 = 0;
	uint32_t x156 = 18U;
	volatile uint32_t t38 = 7048U;

    t38 = (x153|((x154<=x155)/x156));

    if (t38 != 15704833U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int16_t x158 = -1;
	static volatile uint8_t x159 = 0U;
	int16_t x160 = INT16_MAX;
	int32_t t39 = -113968112;

    t39 = (x157|((x158<=x159)/x160));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = -38223616;
	int64_t x163 = INT64_MIN;
	static int64_t x164 = INT64_MAX;

    t40 = (x161|((x162<=x163)/x164));

    if (t40 != -350LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x167 = 1417U;
	int64_t x168 = INT64_MIN;

    t41 = (x165|((x166<=x167)/x168));

    if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	volatile uint32_t t42 = 399512U;

    t42 = (x169|((x170<=x171)/x172));

    if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MIN;
	uint8_t x178 = UINT8_MAX;
	static int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	static int32_t t43 = INT32_MIN;

    t43 = (x177|((x178<=x179)/x180));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x181 = -1;
	int16_t x182 = -1;
	static uint64_t x183 = 54632457056093LLU;
	static int64_t x184 = INT64_MIN;
	volatile int64_t t44 = 12252517673LL;

    t44 = (x181|((x182<=x183)/x184));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 62;
	static int16_t x187 = 1222;
	volatile int64_t t45 = 17254094130650105LL;

    t45 = (x185|((x186<=x187)/x188));

    if (t45 != 62LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x189 = -1;
	int8_t x190 = INT8_MAX;
	volatile uint64_t x191 = 12098LLU;
	static int32_t t46 = -49;

    t46 = (x189|((x190<=x191)/x192));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = -112519LL;
	uint32_t x194 = UINT32_MAX;
	static uint8_t x196 = 2U;

    t47 = (x193|((x194<=x195)/x196));

    if (t47 != -112519LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x198 = UINT16_MAX;
	static uint16_t x199 = UINT16_MAX;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x197|((x198<=x199)/x200));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = 43;
	int32_t x203 = 1;
	uint64_t x204 = 476566414797299LLU;
	volatile uint64_t t49 = 1196658LLU;

    t49 = (x201|((x202<=x203)/x204));

    if (t49 != 43LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x205 = 182589U;
	int32_t x206 = INT32_MIN;
	volatile int16_t x207 = INT16_MIN;
	static uint8_t x208 = 23U;
	static uint32_t t50 = 1U;

    t50 = (x205|((x206<=x207)/x208));

    if (t50 != 182589U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x210 = INT32_MIN;
	volatile int64_t x211 = -1LL;
	int32_t x212 = -7353612;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = (x209|((x210<=x211)/x212));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MIN;
	static int16_t x214 = INT16_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t52 = 1;

    t52 = (x213|((x214<=x215)/x216));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	uint64_t x218 = UINT64_MAX;
	volatile int8_t x219 = INT8_MIN;
	static volatile uint32_t t53 = UINT32_MAX;

    t53 = (x217|((x218<=x219)/x220));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x221 = INT32_MIN;
	uint8_t x222 = 42U;
	int8_t x224 = -1;
	int32_t t54 = INT32_MIN;

    t54 = (x221|((x222<=x223)/x224));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MAX;
	int64_t x226 = 327566LL;
	static int8_t x227 = -55;
	static volatile uint32_t t55 = 1323638334U;

    t55 = (x225|((x226<=x227)/x228));

    if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x229 = 43U;
	uint32_t x230 = 1U;
	static int64_t t56 = -2LL;

    t56 = (x229|((x230<=x231)/x232));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x233 = UINT64_MAX;
	int8_t x236 = INT8_MAX;
	static uint64_t t57 = UINT64_MAX;

    t57 = (x233|((x234<=x235)/x236));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -1LL;
	int32_t x238 = -16333336;
	uint64_t x239 = UINT64_MAX;
	static uint32_t x240 = 502786U;
	volatile int64_t t58 = 3011360758132LL;

    t58 = (x237|((x238<=x239)/x240));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x242 = 13U;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = UINT8_MAX;
	int32_t t59 = -175217187;

    t59 = (x241|((x242<=x243)/x244));

    if (t59 != 347) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x245 = -1;
	static int32_t x246 = INT32_MIN;
	uint16_t x247 = 0U;
	int32_t x248 = INT32_MAX;

    t60 = (x245|((x246<=x247)/x248));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x249 = 7U;
	uint8_t x251 = 124U;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t61 = -9;

    t61 = (x249|((x250<=x251)/x252));

    if (t61 != 7) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile int8_t x255 = INT8_MAX;

    t62 = (x253|((x254<=x255)/x256));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 4U;
	uint16_t x259 = 9U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t63 = -172;

    t63 = (x257|((x258<=x259)/x260));

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = (x261|((x262<=x263)/x264));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = UINT8_MAX;
	int32_t x266 = 22680381;
	static int8_t x267 = INT8_MAX;
	static uint8_t x268 = UINT8_MAX;
	int32_t t65 = 241797615;

    t65 = (x265|((x266<=x267)/x268));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x269 = -1;
	int32_t x270 = INT32_MAX;
	static int64_t x271 = INT64_MIN;
	uint32_t x272 = 2000210U;

    t66 = (x269|((x270<=x271)/x272));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = -1LL;
	volatile uint8_t x274 = 17U;
	int8_t x275 = -1;
	int64_t x276 = INT64_MIN;
	int64_t t67 = -5542LL;

    t67 = (x273|((x274<=x275)/x276));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MIN;
	int16_t x280 = INT16_MAX;

    t68 = (x277|((x278<=x279)/x280));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x281 = UINT8_MAX;
	int32_t x282 = INT32_MIN;
	static int64_t x283 = 2841720110017463936LL;
	int8_t x284 = INT8_MIN;
	int32_t t69 = 9;

    t69 = (x281|((x282<=x283)/x284));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -1LL;
	int64_t t70 = 1626062067LL;

    t70 = (x285|((x286<=x287)/x288));

    if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x289 = 2252624313676726517LLU;
	volatile int16_t x291 = -1;
	static int64_t x292 = 51841905166002LL;
	static volatile uint64_t t71 = 4782353294858165LLU;

    t71 = (x289|((x290<=x291)/x292));

    if (t71 != 2252624313676726517LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x294 = 529520935681955944LL;
	volatile uint64_t x295 = 3058LLU;
	volatile uint16_t x296 = 18345U;

    t72 = (x293|((x294<=x295)/x296));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x298 = INT32_MIN;
	int32_t x300 = -1;
	volatile int32_t t73 = -62;

    t73 = (x297|((x298<=x299)/x300));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x301 = -1;
	int8_t x303 = INT8_MAX;
	volatile uint32_t t74 = UINT32_MAX;

    t74 = (x301|((x302<=x303)/x304));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x305 = 0U;
	uint8_t x306 = 6U;
	uint8_t x307 = 1U;
	int32_t t75 = -122613372;

    t75 = (x305|((x306<=x307)/x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = UINT32_MAX;
	uint64_t x310 = 1LLU;
	int8_t x311 = -1;
	uint16_t x312 = 245U;
	uint32_t t76 = UINT32_MAX;

    t76 = (x309|((x310<=x311)/x312));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x313 = 1;
	uint32_t x316 = UINT32_MAX;

    t77 = (x313|((x314<=x315)/x316));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x318 = 441976603;
	static volatile uint16_t x320 = 30U;
	uint32_t t78 = 424U;

    t78 = (x317|((x318<=x319)/x320));

    if (t78 != 177U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x322 = 81767794LLU;
	volatile int64_t x323 = -1LL;
	uint8_t x324 = 2U;
	volatile int32_t t79 = INT32_MIN;

    t79 = (x321|((x322<=x323)/x324));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = 25;
	uint16_t x330 = UINT16_MAX;
	static int8_t x331 = INT8_MAX;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t80 = -23432728;

    t80 = (x329|((x330<=x331)/x332));

    if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = 2155;
	uint8_t x335 = 4U;
	int8_t x336 = -1;
	static int64_t t81 = INT64_MIN;

    t81 = (x333|((x334<=x335)/x336));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x337 = -1;
	int16_t x338 = INT16_MIN;
	static int8_t x339 = -1;
	volatile int32_t x340 = 1;
	volatile int32_t t82 = -411;

    t82 = (x337|((x338<=x339)/x340));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = -55;
	uint8_t x344 = 28U;

    t83 = (x341|((x342<=x343)/x344));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x345 = -1;
	int8_t x346 = -12;
	uint16_t x347 = 6537U;
	uint32_t x348 = UINT32_MAX;
	uint32_t t84 = UINT32_MAX;

    t84 = (x345|((x346<=x347)/x348));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = UINT8_MAX;
	int64_t x350 = -1LL;
	uint8_t x352 = 2U;

    t85 = (x349|((x350<=x351)/x352));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = -1;
	volatile int16_t x355 = -1;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t86 = 630806257;

    t86 = (x353|((x354<=x355)/x356));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x357 = -1;
	int16_t x358 = -1;
	int8_t x359 = -1;
	volatile int8_t x360 = -1;
	int32_t t87 = -3;

    t87 = (x357|((x358<=x359)/x360));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = 0LL;
	uint64_t x362 = 5LLU;
	static uint32_t x364 = 126973135U;
	static int64_t t88 = 3979100438220589687LL;

    t88 = (x361|((x362<=x363)/x364));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = INT16_MIN;
	volatile int64_t t89 = INT64_MAX;

    t89 = (x365|((x366<=x367)/x368));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x373 = 0U;
	int64_t x374 = INT64_MAX;
	int64_t x376 = INT64_MAX;

    t90 = (x373|((x374<=x375)/x376));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MAX;
	uint16_t x378 = 6U;
	uint64_t x379 = 3872210473877LLU;
	uint32_t x380 = 177U;
	static volatile uint32_t t91 = 6U;

    t91 = (x377|((x378<=x379)/x380));

    if (t91 != 127U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x382 = INT64_MAX;
	volatile int32_t x384 = INT32_MIN;
	int32_t t92 = 55056;

    t92 = (x381|((x382<=x383)/x384));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 358U;
	static volatile uint64_t x388 = 3417560LLU;
	static volatile uint64_t t93 = 480LLU;

    t93 = (x385|((x386<=x387)/x388));

    if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x390 = INT32_MAX;
	uint8_t x391 = UINT8_MAX;
	volatile int16_t x392 = -10113;
	int32_t t94 = 24;

    t94 = (x389|((x390<=x391)/x392));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x393 = 20186385U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MAX;
	volatile int64_t t95 = 813175254LL;

    t95 = (x393|((x394<=x395)/x396));

    if (t95 != 20186385LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x397 = -8588;
	static int64_t x398 = INT64_MIN;
	int16_t x400 = -2023;
	int32_t t96 = -194;

    t96 = (x397|((x398<=x399)/x400));

    if (t96 != -8588) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x402 = INT32_MAX;
	static int64_t x404 = INT64_MIN;
	static volatile int64_t t97 = -29LL;

    t97 = (x401|((x402<=x403)/x404));

    if (t97 != 6LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 4516U;
	int32_t t98 = INT32_MIN;

    t98 = (x405|((x406<=x407)/x408));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = 191953631752264302LL;
	uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MAX;
	uint16_t x412 = UINT16_MAX;

    t99 = (x409|((x410<=x411)/x412));

    if (t99 != 191953631752264302LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = 116201989;
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	int32_t t100 = -200795780;

    t100 = (x413|((x414<=x415)/x416));

    if (t100 != 116201989) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x417 = 3U;
	uint64_t x418 = UINT64_MAX;
	int64_t x420 = INT64_MAX;
	static int64_t t101 = 772315LL;

    t101 = (x417|((x418<=x419)/x420));

    if (t101 != 3LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x421 = UINT32_MAX;
	volatile int32_t x423 = -1;
	int16_t x424 = -1;
	uint32_t t102 = UINT32_MAX;

    t102 = (x421|((x422<=x423)/x424));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x427 = 4688U;
	int64_t x428 = -3LL;
	int64_t t103 = 2LL;

    t103 = (x425|((x426<=x427)/x428));

    if (t103 != 16374LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x429 = 5381388;
	int16_t x430 = 1822;
	int16_t x431 = INT16_MIN;
	int32_t x432 = -1;

    t104 = (x429|((x430<=x431)/x432));

    if (t104 != 5381388) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MAX;

    t105 = (x433|((x434<=x435)/x436));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x437 = INT8_MAX;
	int8_t x438 = -1;
	uint32_t x439 = 2594507U;
	volatile int64_t x440 = INT64_MIN;
	static volatile int64_t t106 = 53126LL;

    t106 = (x437|((x438<=x439)/x440));

    if (t106 != 127LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x441 = -1;
	int8_t x443 = 1;
	int16_t x444 = -26;
	volatile int32_t t107 = 1847537;

    t107 = (x441|((x442<=x443)/x444));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x445 = INT8_MIN;
	static uint64_t x446 = 3LLU;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MAX;
	volatile int32_t t108 = 45;

    t108 = (x445|((x446<=x447)/x448));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x449 = INT16_MIN;
	uint16_t x450 = UINT16_MAX;
	uint64_t x452 = 509LLU;
	uint64_t t109 = 8918304083618LLU;

    t109 = (x449|((x450<=x451)/x452));

    if (t109 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x454 = 2730424U;
	int16_t x456 = INT16_MIN;
	static volatile uint64_t t110 = 179190574828152LLU;

    t110 = (x453|((x454<=x455)/x456));

    if (t110 != 1288040738767LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x458 = 12909634U;
	static volatile int64_t x459 = -402181LL;
	volatile int64_t x460 = 705477608952LL;

    t111 = (x457|((x458<=x459)/x460));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 5U;
	volatile int32_t x463 = 32757;
	uint32_t x464 = 54U;

    t112 = (x461|((x462<=x463)/x464));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x465 = 73922634451264459LLU;
	static uint16_t x467 = 2083U;
	int16_t x468 = INT16_MIN;
	uint64_t t113 = 148757144265619682LLU;

    t113 = (x465|((x466<=x467)/x468));

    if (t113 != 73922634451264459LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x469 = INT32_MIN;
	static int8_t x470 = 2;
	uint32_t x472 = 971U;
	volatile uint32_t t114 = 735U;

    t114 = (x469|((x470<=x471)/x472));

    if (t114 != 2147483648U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x474 = 106U;
	volatile int8_t x475 = INT8_MIN;
	static int32_t t115 = -14995919;

    t115 = (x473|((x474<=x475)/x476));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 594217472U;
	volatile uint64_t x478 = UINT64_MAX;
	uint8_t x479 = UINT8_MAX;
	static int32_t x480 = INT32_MAX;
	uint32_t t116 = 8843U;

    t116 = (x477|((x478<=x479)/x480));

    if (t116 != 594217472U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = 0;
	int64_t x482 = -1199166703LL;
	static int64_t x483 = 3788084LL;
	volatile int64_t x484 = -1LL;
	static volatile int64_t t117 = 4190LL;

    t117 = (x481|((x482<=x483)/x484));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = INT16_MIN;
	int32_t x486 = INT32_MIN;
	static uint64_t x487 = 777LLU;
	uint16_t x488 = UINT16_MAX;
	int32_t t118 = 7226632;

    t118 = (x485|((x486<=x487)/x488));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x489 = 99LLU;
	uint16_t x490 = 7U;
	uint64_t x491 = 1253675691865581LLU;
	int64_t x492 = INT64_MAX;
	volatile uint64_t t119 = 555588642434LLU;

    t119 = (x489|((x490<=x491)/x492));

    if (t119 != 99LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MIN;
	uint32_t x494 = UINT32_MAX;
	volatile int16_t x495 = 784;
	int32_t x496 = -226;
	int32_t t120 = -14;

    t120 = (x493|((x494<=x495)/x496));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x497 = -62;
	static int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MAX;

    t121 = (x497|((x498<=x499)/x500));

    if (t121 != -62) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x501 = 2480493534230LLU;
	int16_t x503 = INT16_MIN;
	static volatile int16_t x504 = 709;
	uint64_t t122 = 49160777795199726LLU;

    t122 = (x501|((x502<=x503)/x504));

    if (t122 != 2480493534230LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = 0;
	volatile int16_t x506 = -26;
	static int16_t x507 = -1;
	static volatile uint32_t t123 = 252836U;

    t123 = (x505|((x506<=x507)/x508));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x509 = INT32_MAX;
	uint16_t x510 = 9339U;
	int8_t x511 = INT8_MAX;
	volatile int32_t x512 = -111380;
	static volatile int32_t t124 = INT32_MAX;

    t124 = (x509|((x510<=x511)/x512));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x514 = UINT32_MAX;
	int64_t x515 = 36590417817550LL;
	uint16_t x516 = 234U;

    t125 = (x513|((x514<=x515)/x516));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = 0U;
	uint64_t x518 = 103994824LLU;
	int16_t x519 = -2346;
	static uint16_t x520 = 384U;
	int32_t t126 = 13;

    t126 = (x517|((x518<=x519)/x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MIN;
	static uint64_t x522 = 128320352822614LLU;
	uint32_t t127 = 7U;

    t127 = (x521|((x522<=x523)/x524));

    if (t127 != 4294934528U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x525 = 2U;
	uint64_t x526 = 53074LLU;
	int32_t x527 = 2889712;
	uint16_t x528 = 5U;
	int32_t t128 = 70981205;

    t128 = (x525|((x526<=x527)/x528));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x529 = 877U;
	static int32_t x530 = -1;
	uint16_t x531 = 6U;
	int16_t x532 = INT16_MAX;
	uint32_t t129 = 1U;

    t129 = (x529|((x530<=x531)/x532));

    if (t129 != 877U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x533 = 1434758881294271058LLU;
	int32_t x534 = -731;
	volatile int8_t x535 = INT8_MAX;
	volatile int16_t x536 = INT16_MIN;

    t130 = (x533|((x534<=x535)/x536));

    if (t130 != 1434758881294271058LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x537 = -58410152;
	static uint16_t x539 = UINT16_MAX;
	int64_t x540 = -34651966LL;
	int64_t t131 = 7118778323LL;

    t131 = (x537|((x538<=x539)/x540));

    if (t131 != -58410152LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x541 = 3U;
	volatile uint64_t x542 = UINT64_MAX;
	int8_t x543 = INT8_MIN;
	int32_t x544 = 446554;
	volatile int32_t t132 = -449944544;

    t132 = (x541|((x542<=x543)/x544));

    if (t132 != 3) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x545 = 1U;
	uint64_t x546 = 42071604162LLU;
	volatile int8_t x547 = INT8_MIN;
	volatile int64_t x548 = -11863019732438LL;
	int64_t t133 = -154698663306060425LL;

    t133 = (x545|((x546<=x547)/x548));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	int8_t x550 = INT8_MIN;
	uint8_t x551 = UINT8_MAX;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x549|((x550<=x551)/x552));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = -224482238;
	volatile int64_t x558 = -1LL;
	int64_t x559 = INT64_MAX;
	static int32_t t135 = 36471;

    t135 = (x557|((x558<=x559)/x560));

    if (t135 != -224482238) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x561 = -1;
	uint16_t x562 = 29249U;
	volatile int8_t x563 = -1;
	uint64_t x564 = UINT64_MAX;
	uint64_t t136 = UINT64_MAX;

    t136 = (x561|((x562<=x563)/x564));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = INT8_MAX;
	int32_t x566 = 686;
	uint8_t x567 = 63U;
	int8_t x568 = 24;
	volatile int32_t t137 = 530988;

    t137 = (x565|((x566<=x567)/x568));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x569 = INT64_MIN;
	int32_t x570 = INT32_MAX;
	uint8_t x571 = 39U;
	int64_t t138 = INT64_MIN;

    t138 = (x569|((x570<=x571)/x572));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = INT32_MIN;
	uint8_t x574 = 3U;
	int16_t x575 = INT16_MIN;
	volatile int32_t t139 = INT32_MIN;

    t139 = (x573|((x574<=x575)/x576));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x577 = UINT32_MAX;
	uint32_t x578 = 191U;
	uint64_t x580 = 12646780858760LLU;

    t140 = (x577|((x578<=x579)/x580));

    if (t140 != 4294967295LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x581 = 25;
	uint32_t x582 = 3179877U;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = UINT64_MAX;
	static uint64_t t141 = 27527LLU;

    t141 = (x581|((x582<=x583)/x584));

    if (t141 != 25LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -1LL;
	volatile int64_t x586 = -6046LL;
	uint32_t x587 = 1182756U;
	int16_t x588 = INT16_MIN;
	volatile int64_t t142 = -3561241029444LL;

    t142 = (x585|((x586<=x587)/x588));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x590 = 541868419565LL;
	volatile uint8_t x592 = 56U;
	volatile int32_t t143 = -32656676;

    t143 = (x589|((x590<=x591)/x592));

    if (t143 != -813) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x593 = -7;
	volatile int8_t x594 = -1;
	volatile int32_t x595 = -1;
	int32_t x596 = INT32_MIN;
	volatile int32_t t144 = 18;

    t144 = (x593|((x594<=x595)/x596));

    if (t144 != -7) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x598 = UINT64_MAX;
	int16_t x599 = 7603;
	uint64_t t145 = 648504707LLU;

    t145 = (x597|((x598<=x599)/x600));

    if (t145 != 2706228LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x602 = 3U;
	volatile int32_t x603 = -1;
	uint64_t x604 = 8929125LLU;
	uint64_t t146 = 629946225583390910LLU;

    t146 = (x601|((x602<=x603)/x604));

    if (t146 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = INT64_MIN;
	static int8_t x606 = INT8_MAX;
	volatile uint64_t x607 = 506450196620247LLU;
	int16_t x608 = 30;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x605|((x606<=x607)/x608));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x609 = INT64_MIN;
	uint16_t x610 = 1U;
	uint64_t x611 = 8158239233200300LLU;
	int32_t x612 = INT32_MAX;
	int64_t t148 = INT64_MIN;

    t148 = (x609|((x610<=x611)/x612));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x613 = INT64_MIN;
	int64_t x614 = -1LL;
	int32_t x615 = -846;
	int16_t x616 = -4;
	int64_t t149 = INT64_MIN;

    t149 = (x613|((x614<=x615)/x616));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MIN;
	volatile uint64_t x619 = 8274966039LLU;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t150 = 3LLU;

    t150 = (x617|((x618<=x619)/x620));

    if (t150 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = INT8_MAX;
	int16_t x623 = INT16_MIN;

    t151 = (x621|((x622<=x623)/x624));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x625 = INT32_MAX;
	static int16_t x628 = INT16_MAX;
	int32_t t152 = INT32_MAX;

    t152 = (x625|((x626<=x627)/x628));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x633 = 489243U;
	int32_t x634 = -1;
	uint8_t x635 = UINT8_MAX;
	int8_t x636 = -1;
	uint32_t t153 = UINT32_MAX;

    t153 = (x633|((x634<=x635)/x636));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x637 = 826;
	uint32_t x638 = 19101020U;
	int64_t x639 = -266319LL;
	uint8_t x640 = 19U;
	int32_t t154 = 991823;

    t154 = (x637|((x638<=x639)/x640));

    if (t154 != 826) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x642 = INT64_MIN;
	volatile int8_t x643 = INT8_MIN;
	volatile uint64_t t155 = 394826801036LLU;

    t155 = (x641|((x642<=x643)/x644));

    if (t155 != 3LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x645 = -1;
	volatile int32_t x646 = INT32_MAX;
	int32_t x647 = INT32_MIN;
	int8_t x648 = INT8_MIN;
	int32_t t156 = 353;

    t156 = (x645|((x646<=x647)/x648));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x650 = -2;
	static int64_t x651 = INT64_MIN;
	static int32_t x652 = INT32_MAX;
	int32_t t157 = 838909;

    t157 = (x649|((x650<=x651)/x652));

    if (t157 != 59) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x653 = 7711;
	uint32_t x654 = UINT32_MAX;
	uint8_t x655 = 24U;
	int32_t t158 = -299;

    t158 = (x653|((x654<=x655)/x656));

    if (t158 != 7711) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x658 = 19U;
	int64_t x660 = INT64_MAX;
	static int64_t t159 = 5LL;

    t159 = (x657|((x658<=x659)/x660));

    if (t159 != 255LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = INT8_MAX;
	int16_t x663 = INT16_MIN;
	volatile int16_t x664 = INT16_MAX;
	volatile int32_t t160 = -2670;

    t160 = (x661|((x662<=x663)/x664));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = 20891;
	volatile int8_t x666 = 14;
	static uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MIN;
	static volatile int32_t t161 = 11;

    t161 = (x665|((x666<=x667)/x668));

    if (t161 != 20891) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x669 = 6792515929051LLU;
	int32_t x670 = -1;
	uint8_t x672 = 1U;
	volatile uint64_t t162 = 60953LLU;

    t162 = (x669|((x670<=x671)/x672));

    if (t162 != 6792515929051LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x673 = -15965710;
	int64_t x674 = -1LL;
	volatile int64_t x675 = 8577997453224485LL;
	uint64_t x676 = 21557844542465484LLU;
	volatile uint64_t t163 = 1295121472LLU;

    t163 = (x673|((x674<=x675)/x676));

    if (t163 != 18446744073693585906LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x677 = 196661LLU;
	static uint8_t x678 = UINT8_MAX;
	static int8_t x679 = INT8_MIN;
	uint64_t x680 = 83260751735LLU;
	uint64_t t164 = 971311361LLU;

    t164 = (x677|((x678<=x679)/x680));

    if (t164 != 196661LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = -1;
	int32_t x683 = -5;
	int8_t x684 = INT8_MAX;
	static int32_t t165 = -4135;

    t165 = (x681|((x682<=x683)/x684));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = -830647975;
	int8_t x686 = INT8_MIN;
	static int16_t x688 = 6;

    t166 = (x685|((x686<=x687)/x688));

    if (t166 != -830647975) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -1154094578LL;
	volatile int64_t x691 = -162572795838LL;
	int32_t x692 = INT32_MIN;

    t167 = (x689|((x690<=x691)/x692));

    if (t167 != -1154094578LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x694 = 3;
	static int32_t x695 = 2012932;
	uint16_t x696 = 30274U;
	int32_t t168 = 457445;

    t168 = (x693|((x694<=x695)/x696));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x697 = -8094;
	static int32_t x698 = -49917;
	static volatile int32_t x699 = 1;
	int32_t x700 = 3186;
	volatile int32_t t169 = 63;

    t169 = (x697|((x698<=x699)/x700));

    if (t169 != -8094) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = 8116423406LL;
	int8_t x703 = INT8_MIN;
	volatile int16_t x704 = 166;
	static volatile int64_t t170 = 26315650853LL;

    t170 = (x701|((x702<=x703)/x704));

    if (t170 != 8116423406LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = 189;
	volatile int16_t x706 = -26;
	volatile uint32_t x707 = UINT32_MAX;

    t171 = (x705|((x706<=x707)/x708));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = 1;
	int8_t x711 = INT8_MIN;
	int8_t x712 = -5;

    t172 = (x709|((x710<=x711)/x712));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = -1083906246196LL;
	int32_t x714 = 668;
	uint8_t x715 = 1U;
	uint32_t x716 = 2U;
	int64_t t173 = 36543LL;

    t173 = (x713|((x714<=x715)/x716));

    if (t173 != -1083906246196LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x720 = -1;
	volatile int32_t t174 = 1953;

    t174 = (x717|((x718<=x719)/x720));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MAX;
	int64_t x722 = -152856332038LL;
	uint32_t x723 = 34U;
	static volatile int32_t t175 = -141;

    t175 = (x721|((x722<=x723)/x724));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x725 = INT64_MIN;
	int8_t x727 = INT8_MIN;
	volatile uint64_t t176 = 2726944659453073LLU;

    t176 = (x725|((x726<=x727)/x728));

    if (t176 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x729 = 137U;
	static volatile uint64_t x731 = UINT64_MAX;
	volatile int64_t t177 = -237626492356LL;

    t177 = (x729|((x730<=x731)/x732));

    if (t177 != 137LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x733 = UINT8_MAX;
	static int8_t x734 = INT8_MAX;
	int8_t x735 = -1;
	uint64_t x736 = UINT64_MAX;
	static uint64_t t178 = 2099938933LLU;

    t178 = (x733|((x734<=x735)/x736));

    if (t178 != 255LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = INT64_MIN;
	uint16_t x738 = UINT16_MAX;
	static int8_t x739 = -1;
	static volatile uint64_t t179 = 1285972LLU;

    t179 = (x737|((x738<=x739)/x740));

    if (t179 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x741 = 800U;
	static uint8_t x742 = UINT8_MAX;
	int16_t x743 = -371;
	uint8_t x744 = 18U;
	int32_t t180 = -11116;

    t180 = (x741|((x742<=x743)/x744));

    if (t180 != 800) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x748 = -1;
	volatile int32_t t181 = 16372110;

    t181 = (x745|((x746<=x747)/x748));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = INT64_MIN;
	static volatile int8_t x750 = -1;
	int16_t x751 = -1;
	static int64_t t182 = INT64_MIN;

    t182 = (x749|((x750<=x751)/x752));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x753 = -1;
	int32_t t183 = -87141;

    t183 = (x753|((x754<=x755)/x756));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x757 = 303LLU;
	volatile int32_t x758 = INT32_MAX;
	int64_t x759 = INT64_MIN;
	uint8_t x760 = 34U;

    t184 = (x757|((x758<=x759)/x760));

    if (t184 != 303LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x761 = UINT32_MAX;
	static uint32_t x762 = 426U;
	int64_t x764 = INT64_MIN;
	int64_t t185 = -966LL;

    t185 = (x761|((x762<=x763)/x764));

    if (t185 != 4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x765 = INT8_MIN;
	uint16_t x766 = 0U;
	int64_t x767 = INT64_MIN;
	static uint64_t x768 = 6LLU;
	static volatile uint64_t t186 = 972LLU;

    t186 = (x765|((x766<=x767)/x768));

    if (t186 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	uint64_t x774 = UINT64_MAX;
	static int8_t x775 = 2;
	int64_t x776 = -1LL;
	volatile int64_t t187 = 45758243418LL;

    t187 = (x773|((x774<=x775)/x776));

    if (t187 != 65535LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x779 = INT32_MAX;
	uint64_t x780 = UINT64_MAX;

    t188 = (x777|((x778<=x779)/x780));

    if (t188 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x783 = -1;
	static int32_t x784 = -980373;
	volatile int32_t t189 = -25;

    t189 = (x781|((x782<=x783)/x784));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x785 = INT64_MIN;
	int8_t x786 = -3;
	int8_t x788 = INT8_MIN;
	int64_t t190 = INT64_MIN;

    t190 = (x785|((x786<=x787)/x788));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x794 = INT8_MAX;
	int16_t x795 = -1;
	volatile int64_t t191 = -13397454LL;

    t191 = (x793|((x794<=x795)/x796));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x797 = 48U;
	uint16_t x798 = 22U;
	int32_t x800 = INT32_MAX;
	int32_t t192 = -1;

    t192 = (x797|((x798<=x799)/x800));

    if (t192 != 48) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x802 = 153;
	int16_t x803 = INT16_MIN;
	volatile uint8_t x804 = 3U;
	int32_t t193 = 671867;

    t193 = (x801|((x802<=x803)/x804));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x805 = UINT8_MAX;
	uint16_t x807 = 9U;
	int32_t x808 = -1;
	volatile int32_t t194 = -15517;

    t194 = (x805|((x806<=x807)/x808));

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x809 = 82U;
	volatile uint64_t x810 = 133398509208279LLU;
	int64_t x811 = INT64_MAX;
	volatile uint64_t t195 = 2036454409538307LLU;

    t195 = (x809|((x810<=x811)/x812));

    if (t195 != 82LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x813 = 34U;
	int16_t x814 = INT16_MIN;
	static uint64_t x815 = 17LLU;
	int32_t x816 = INT32_MIN;
	volatile int32_t t196 = -2947;

    t196 = (x813|((x814<=x815)/x816));

    if (t196 != 34) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = 64U;
	static int16_t x818 = INT16_MAX;
	volatile int8_t x819 = INT8_MIN;
	static volatile int32_t t197 = 1;

    t197 = (x817|((x818<=x819)/x820));

    if (t197 != 64) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x821 = INT16_MIN;
	uint64_t x822 = 594227568802287430LLU;
	volatile uint8_t x823 = UINT8_MAX;
	int64_t x824 = -427LL;
	int64_t t198 = 6754LL;

    t198 = (x821|((x822<=x823)/x824));

    if (t198 != -32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x827 = UINT64_MAX;

    t199 = (x825|((x826<=x827)/x828));

    if (t199 != -1) { NG(); } else { ; }
	
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

