
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

static int8_t x1 = INT8_MIN;
int32_t x4 = -1035;
static uint64_t x12 = UINT64_MAX;
int8_t x19 = 3;
uint16_t x21 = 196U;
volatile int32_t t4 = -7689376;
volatile uint64_t t5 = UINT64_MAX;
uint16_t x33 = 5545U;
static int8_t x36 = INT8_MAX;
uint64_t x41 = UINT64_MAX;
volatile int16_t x52 = INT16_MIN;
static uint64_t t13 = UINT64_MAX;
volatile int32_t x61 = -159;
uint16_t x63 = 51U;
int32_t x64 = -1;
uint16_t x71 = 1784U;
int8_t x73 = 0;
static int64_t x77 = -1LL;
int8_t x85 = -1;
int8_t x87 = INT8_MIN;
static int32_t x95 = -1;
int32_t x98 = INT32_MIN;
uint16_t x100 = 1600U;
int32_t t28 = 30132452;
static uint32_t x128 = 18086929U;
static volatile int64_t x152 = INT64_MAX;
int16_t x154 = INT16_MAX;
volatile uint32_t t38 = 2U;
int64_t x169 = -1LL;
volatile int16_t x175 = INT16_MIN;
int64_t x176 = INT64_MIN;
int16_t x177 = 8088;
int32_t x184 = -1;
int8_t x187 = -1;
int32_t t44 = -181;
int64_t x196 = -11LL;
static volatile int32_t t46 = 38948;
volatile int8_t x202 = INT8_MIN;
int32_t t48 = 193243;
volatile int64_t x214 = INT64_MIN;
static int16_t x218 = 7600;
volatile uint32_t t52 = 323724U;
uint8_t x238 = 86U;
uint8_t x245 = 4U;
volatile int64_t t61 = -34139641LL;
volatile uint64_t t62 = 7713719059LLU;
static volatile int8_t x267 = INT8_MIN;
uint32_t t64 = 37U;
volatile int8_t x273 = INT8_MIN;
int16_t x274 = 6929;
static volatile int16_t x276 = 5;
int8_t x277 = INT8_MIN;
volatile int8_t x278 = 6;
static int8_t x283 = INT8_MIN;
int64_t x288 = -1LL;
uint32_t x293 = 27846179U;
int64_t x295 = INT64_MIN;
int32_t t72 = 10690392;
int8_t x305 = -1;
int8_t x312 = -1;
int8_t x325 = INT8_MIN;
uint8_t x328 = 2U;
static int64_t x331 = 723LL;
static int32_t x333 = INT32_MAX;
uint64_t x334 = 3021592LLU;
static int32_t x337 = -75475383;
int64_t x372 = INT64_MAX;
static volatile int64_t t88 = INT64_MAX;
uint16_t x384 = 25383U;
static int16_t x386 = INT16_MIN;
int32_t t91 = 2;
volatile int16_t x391 = -1;
uint8_t x393 = UINT8_MAX;
uint64_t x397 = UINT64_MAX;
static int16_t x405 = INT16_MAX;
int64_t x408 = -1LL;
static uint8_t x410 = 1U;
int64_t x417 = INT64_MIN;
uint32_t x422 = 6U;
static volatile int64_t x428 = INT64_MIN;
volatile uint8_t x430 = 61U;
int16_t x432 = -1;
static int8_t x437 = 1;
uint32_t x441 = 28398U;
static volatile uint16_t x443 = UINT16_MAX;
static int16_t x449 = -300;
uint8_t x454 = 126U;
static volatile int8_t x458 = -3;
uint32_t x459 = UINT32_MAX;
volatile uint64_t x473 = UINT64_MAX;
int16_t x474 = -1;
static uint16_t x475 = UINT16_MAX;
int16_t x479 = -12;
volatile uint8_t x492 = 21U;
int16_t x493 = INT16_MIN;
int16_t x494 = INT16_MIN;
static int8_t x496 = -5;
volatile uint64_t x501 = UINT64_MAX;
volatile uint32_t x504 = UINT32_MAX;
static volatile uint8_t x505 = 1U;
int16_t x510 = INT16_MIN;
int32_t t121 = -20;
uint64_t t122 = 1190123LLU;
int64_t t123 = 12077988403532LL;
static int16_t x529 = -185;
int32_t t126 = 129;
static uint32_t x535 = 18833U;
static int8_t x540 = 62;
uint16_t x542 = UINT16_MAX;
uint8_t x545 = 49U;
uint64_t x561 = 1059363481127465865LLU;
int16_t x577 = 9;
uint8_t x582 = UINT8_MAX;
static int16_t x586 = 1;
static uint32_t x592 = 76087U;
static volatile uint32_t x593 = 2980631U;
int8_t x594 = INT8_MIN;
volatile uint32_t x597 = UINT32_MAX;
int8_t x600 = INT8_MAX;
uint32_t t142 = UINT32_MAX;
static int32_t x602 = -1;
uint16_t x607 = 6U;
int16_t x609 = INT16_MIN;
volatile uint32_t x625 = UINT32_MAX;
int32_t x626 = 36;
int16_t x628 = -1;
int16_t x637 = INT16_MIN;
static uint8_t x641 = 3U;
uint16_t x646 = UINT16_MAX;
static int8_t x648 = INT8_MAX;
volatile int32_t t156 = 3243;
int16_t x658 = -1;
int16_t x661 = INT16_MIN;
uint64_t x666 = 85935731630972LLU;
int16_t x667 = -1;
uint8_t x671 = 7U;
int32_t x677 = INT32_MIN;
uint8_t x683 = 30U;
uint16_t x686 = 0U;
static int64_t x688 = 88421231030474756LL;
static int64_t x691 = -1LL;
int32_t t165 = -171872;
int8_t x693 = INT8_MAX;
int64_t x696 = INT64_MIN;
uint32_t x702 = 11U;
uint32_t x704 = UINT32_MAX;
static uint64_t x710 = UINT64_MAX;
volatile int8_t x715 = INT8_MAX;
uint32_t x720 = 1106916U;
uint32_t x724 = UINT32_MAX;
int16_t x726 = -141;
volatile int32_t t175 = 6;
static uint32_t x735 = UINT32_MAX;
static int64_t x739 = INT64_MIN;
volatile int16_t x740 = 54;
static int32_t x741 = -1;
volatile int32_t t179 = -703340;
uint8_t x756 = 1U;
int32_t t181 = -44604982;
int64_t x782 = INT64_MAX;
int16_t x788 = -1;
static int32_t t189 = 17688285;
volatile uint64_t x802 = UINT64_MAX;
static volatile int64_t x805 = -1LL;
int32_t x809 = 5;
int64_t x813 = INT64_MIN;
uint64_t x814 = 5665638LLU;
static int8_t x815 = INT8_MIN;
volatile int8_t x821 = -6;
int64_t x822 = -105727695797LL;
int8_t x825 = -1;
int64_t x827 = 5135LL;
int64_t x829 = INT64_MIN;
volatile uint64_t x830 = UINT64_MAX;


void f0(void) {
    	volatile int8_t x2 = 3;
	volatile int16_t x3 = INT16_MAX;
	int32_t t0 = 230253;

    t0 = (x1-((x2^x3)>x4));

    if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile int64_t x6 = 105081805256LL;
	int64_t x7 = INT64_MIN;
	int64_t x8 = -2478LL;
	static int64_t t1 = -644346010481304606LL;

    t1 = (x5-((x6^x7)>x8));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	volatile uint64_t x10 = 47146668072395LLU;
	uint64_t x11 = UINT64_MAX;
	int32_t t2 = 237340723;

    t2 = (x9-((x10^x11)>x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	static int32_t x20 = 1311;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x17-((x18^x19)>x20));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = -1;
	int32_t x23 = 386;
	static volatile int8_t x24 = INT8_MIN;

    t4 = (x21-((x22^x23)>x24));

    if (t4 != 196) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MAX;
	static volatile int64_t x27 = -31054220LL;
	volatile int32_t x28 = 0;

    t5 = (x25-((x26^x27)>x28));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = 0;
	volatile uint64_t x30 = 6468053985646LLU;
	volatile int32_t x31 = INT32_MAX;
	uint32_t x32 = 9107U;
	int32_t t6 = -2946;

    t6 = (x29-((x30^x31)>x32));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = 10215;
	volatile int32_t x35 = -1;
	volatile int32_t t7 = 284873849;

    t7 = (x33-((x34^x35)>x36));

    if (t7 != 5545) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	static int64_t x39 = INT64_MAX;
	volatile int64_t x40 = INT64_MIN;
	static int32_t t8 = 3013191;

    t8 = (x37-((x38^x39)>x40));

    if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x42 = 15U;
	static int8_t x43 = INT8_MIN;
	static int16_t x44 = -1;
	volatile uint64_t t9 = UINT64_MAX;

    t9 = (x41-((x42^x43)>x44));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = INT64_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MAX;
	volatile int64_t t10 = INT64_MIN;

    t10 = (x45-((x46^x47)>x48));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = -1;
	int32_t t11 = 150695;

    t11 = (x49-((x50^x51)>x52));

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 36837060U;
	volatile int8_t x54 = -1;
	static volatile int64_t x55 = -39950LL;
	int32_t x56 = -2;
	uint32_t t12 = 237518257U;

    t12 = (x53-((x54^x55)>x56));

    if (t12 != 36837059U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = UINT64_MAX;
	static uint8_t x58 = 101U;
	volatile uint64_t x59 = 251259696LLU;
	int8_t x60 = INT8_MIN;

    t13 = (x57-((x58^x59)>x60));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x62 = 59192LLU;
	int32_t t14 = -215432343;

    t14 = (x61-((x62^x63)>x64));

    if (t14 != -159) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	int16_t x66 = -11436;
	static uint32_t x67 = UINT32_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int64_t t15 = -34203LL;

    t15 = (x65-((x66^x67)>x68));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 29U;
	int32_t x70 = INT32_MAX;
	static volatile int8_t x72 = -1;
	static volatile int32_t t16 = 668855;

    t16 = (x69-((x70^x71)>x72));

    if (t16 != 28) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x74 = 312U;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 12135U;
	int32_t t17 = 130118;

    t17 = (x73-((x74^x75)>x76));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = INT8_MAX;
	volatile uint16_t x79 = 1U;
	int16_t x80 = INT16_MAX;
	static volatile int64_t t18 = 468819638343149LL;

    t18 = (x77-((x78^x79)>x80));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 3768LLU;
	volatile int64_t x82 = -32316263LL;
	static int16_t x83 = -2;
	static int8_t x84 = -6;
	static volatile uint64_t t19 = 376870LLU;

    t19 = (x81-((x82^x83)>x84));

    if (t19 != 3767LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x86 = 3542U;
	uint8_t x88 = 29U;
	int32_t t20 = 1;

    t20 = (x85-((x86^x87)>x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	int32_t x92 = -1;
	volatile int32_t t21 = 1;

    t21 = (x89-((x90^x91)>x92));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = -202910458;
	uint32_t x94 = UINT32_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t22 = -5647992;

    t22 = (x93-((x94^x95)>x96));

    if (t22 != -202910458) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 58129LL;
	int16_t x99 = INT16_MIN;
	int64_t t23 = -7120283823LL;

    t23 = (x97-((x98^x99)>x100));

    if (t23 != 58128LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 15340U;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -14;
	static uint8_t x104 = 51U;
	volatile uint32_t t24 = 6U;

    t24 = (x101-((x102^x103)>x104));

    if (t24 != 15339U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	uint64_t x106 = 300710LLU;
	int64_t x107 = 3921334LL;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t25 = INT64_MIN;

    t25 = (x105-((x106^x107)>x108));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x109 = -45730LL;
	int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	volatile uint32_t x112 = UINT32_MAX;
	int64_t t26 = 3319047746119622398LL;

    t26 = (x109-((x110^x111)>x112));

    if (t26 != -45730LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = INT8_MAX;
	uint64_t x114 = 3685LLU;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = -9404634;
	volatile int32_t t27 = 1467;

    t27 = (x113-((x114^x115)>x116));

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 1;
	int8_t x118 = INT8_MAX;
	int16_t x119 = -1;
	volatile uint16_t x120 = 16U;

    t28 = (x117-((x118^x119)>x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x121 = 6U;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = 261649267U;
	uint16_t x124 = 8039U;
	int32_t t29 = 23782947;

    t29 = (x121-((x122^x123)>x124));

    if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = -1;
	int32_t x126 = INT32_MIN;
	static int8_t x127 = 2;
	int32_t t30 = -78;

    t30 = (x125-((x126^x127)>x128));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -1;
	uint64_t x130 = 13466684580626058LLU;
	uint32_t x131 = 560981008U;
	volatile int64_t x132 = 2624309985LL;
	volatile int32_t t31 = 0;

    t31 = (x129-((x130^x131)>x132));

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x137 = INT16_MIN;
	uint8_t x138 = 0U;
	static uint8_t x139 = 105U;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t32 = 12623955;

    t32 = (x137-((x138^x139)>x140));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 61U;
	static int32_t x144 = -1;
	static int32_t t33 = -382375;

    t33 = (x141-((x142^x143)>x144));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -1;
	volatile uint16_t x150 = 1U;
	int64_t x151 = INT64_MIN;
	static volatile int32_t t34 = 2;

    t34 = (x149-((x150^x151)>x152));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 3284977183447LLU;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t35 = 77346853718787LLU;

    t35 = (x153-((x154^x155)>x156));

    if (t35 != 3284977183447LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = 15577540224112839LL;
	int64_t x158 = INT64_MIN;
	int64_t x159 = 16041569851257851LL;
	int8_t x160 = 1;
	static int64_t t36 = 182529546204LL;

    t36 = (x157-((x158^x159)>x160));

    if (t36 != 15577540224112839LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = 61084;
	static volatile uint8_t x162 = 15U;
	uint32_t x163 = 762U;
	int8_t x164 = -3;
	volatile int32_t t37 = -28979372;

    t37 = (x161-((x162^x163)>x164));

    if (t37 != 61084) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = UINT32_MAX;
	int8_t x166 = -42;
	volatile uint32_t x167 = 65734U;
	uint8_t x168 = 40U;

    t38 = (x165-((x166^x167)>x168));

    if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x170 = 15197785U;
	int8_t x171 = -1;
	int8_t x172 = INT8_MAX;
	volatile int64_t t39 = 17147LL;

    t39 = (x169-((x170^x171)>x172));

    if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -1;
	int64_t x174 = -1068010436492382507LL;
	volatile int32_t t40 = -3319415;

    t40 = (x173-((x174^x175)>x176));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = 10106478545654282LL;
	int8_t x180 = -13;
	int32_t t41 = -662538;

    t41 = (x177-((x178^x179)>x180));

    if (t41 != 8088) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	volatile int64_t t42 = INT64_MIN;

    t42 = (x181-((x182^x183)>x184));

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x185 = -1;
	int64_t x186 = 53432669095651749LL;
	static int64_t x188 = INT64_MIN;
	int32_t t43 = -11720;

    t43 = (x185-((x186^x187)>x188));

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	volatile int64_t x190 = -37LL;
	int32_t x191 = -1;
	int32_t x192 = -1;

    t44 = (x189-((x190^x191)>x192));

    if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x193 = -26195LL;
	uint32_t x194 = 1195352U;
	uint16_t x195 = 19479U;
	int64_t t45 = -38LL;

    t45 = (x193-((x194^x195)>x196));

    if (t45 != -26196LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x197 = 38;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	uint32_t x200 = UINT32_MAX;

    t46 = (x197-((x198^x199)>x200));

    if (t46 != 38) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = -1LL;
	uint64_t x203 = 415544028134638256LLU;
	volatile int32_t x204 = 24636483;
	static int64_t t47 = 62596885LL;

    t47 = (x201-((x202^x203)>x204));

    if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = INT16_MAX;
	int64_t x206 = INT64_MIN;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = 3840228;

    t48 = (x205-((x206^x207)>x208));

    if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = -1;
	static int16_t x210 = INT16_MIN;
	uint32_t x211 = 28675U;
	uint16_t x212 = UINT16_MAX;
	int32_t t49 = 51092960;

    t49 = (x209-((x210^x211)>x212));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MAX;
	int32_t x215 = INT32_MAX;
	static int16_t x216 = -1;
	int64_t t50 = INT64_MAX;

    t50 = (x213-((x214^x215)>x216));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -1;
	int8_t x219 = -24;
	static volatile uint32_t x220 = 2U;
	int32_t t51 = -2713959;

    t51 = (x217-((x218^x219)>x220));

    if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x221 = 3652U;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	int32_t x224 = INT32_MIN;

    t52 = (x221-((x222^x223)>x224));

    if (t52 != 3651U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MIN;
	static volatile int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	volatile int32_t x228 = 1684820;
	int64_t t53 = INT64_MIN;

    t53 = (x225-((x226^x227)>x228));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = INT64_MAX;
	static int32_t x230 = -1;
	uint32_t x231 = 25U;
	uint64_t x232 = UINT64_MAX;
	int64_t t54 = INT64_MAX;

    t54 = (x229-((x230^x231)>x232));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = -529;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	static int32_t t55 = -9097153;

    t55 = (x233-((x234^x235)>x236));

    if (t55 != -529) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x237 = -14473;
	int8_t x239 = 1;
	static volatile int32_t x240 = -18093;
	static int32_t t56 = -42499414;

    t56 = (x237-((x238^x239)>x240));

    if (t56 != -14474) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x241 = 22;
	int32_t x242 = -1;
	int32_t x243 = 146189125;
	static int16_t x244 = 7;
	int32_t t57 = 164549;

    t57 = (x241-((x242^x243)>x244));

    if (t57 != 22) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x246 = UINT32_MAX;
	volatile int64_t x247 = 0LL;
	int64_t x248 = INT64_MIN;
	static int32_t t58 = 318408;

    t58 = (x245-((x246^x247)>x248));

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x249 = 4U;
	int64_t x250 = INT64_MIN;
	int8_t x251 = 25;
	uint32_t x252 = 4021U;
	volatile int32_t t59 = 4;

    t59 = (x249-((x250^x251)>x252));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MAX;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = 2732005087LL;
	int64_t x256 = 63378483460LL;
	int32_t t60 = INT32_MAX;

    t60 = (x253-((x254^x255)>x256));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x257 = -384707757LL;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = 34;
	int32_t x260 = INT32_MIN;

    t61 = (x257-((x258^x259)>x260));

    if (t61 != -384707758LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	int8_t x262 = -44;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -5;

    t62 = (x261-((x262^x263)>x264));

    if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = 14;
	static int16_t x266 = -3571;
	int16_t x268 = INT16_MAX;
	int32_t t63 = 24;

    t63 = (x265-((x266^x267)>x268));

    if (t63 != 14) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = 227673481U;
	int8_t x270 = INT8_MAX;
	int64_t x271 = -22535544536910253LL;
	int32_t x272 = -21202;

    t64 = (x269-((x270^x271)>x272));

    if (t64 != 227673481U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x275 = 0LL;
	volatile int32_t t65 = 0;

    t65 = (x273-((x274^x275)>x276));

    if (t65 != -129) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MAX;
	int32_t t66 = 10438;

    t66 = (x277-((x278^x279)>x280));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MAX;
	int16_t x282 = 54;
	static int16_t x284 = INT16_MAX;
	static int64_t t67 = INT64_MAX;

    t67 = (x281-((x282^x283)>x284));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x285 = -1;
	int32_t x286 = 179;
	int8_t x287 = -13;
	int32_t t68 = 30;

    t68 = (x285-((x286^x287)>x288));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 25982U;
	int64_t x292 = 1LL;
	int32_t t69 = -632;

    t69 = (x289-((x290^x291)>x292));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x294 = -27;
	int64_t x296 = INT64_MIN;
	static volatile uint32_t t70 = 422060U;

    t70 = (x293-((x294^x295)>x296));

    if (t70 != 27846178U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x297 = 0;
	uint64_t x298 = 5530564086279165LLU;
	int16_t x299 = INT16_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t71 = -120306;

    t71 = (x297-((x298^x299)>x300));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = 8144754;
	int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;

    t72 = (x301-((x302^x303)>x304));

    if (t72 != 8144753) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MIN;
	volatile int32_t x308 = -16316;
	volatile int32_t t73 = -1;

    t73 = (x305-((x306^x307)>x308));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x309 = 0U;
	int16_t x310 = 573;
	int16_t x311 = -10819;
	volatile int32_t t74 = 4295;

    t74 = (x309-((x310^x311)>x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = -26LL;
	static volatile uint16_t x314 = 3419U;
	int64_t x315 = INT64_MAX;
	static int64_t x316 = INT64_MAX;
	volatile int64_t t75 = 757893844909LL;

    t75 = (x313-((x314^x315)>x316));

    if (t75 != -26LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x321 = -902297;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 3U;
	volatile int8_t x324 = 0;
	volatile int32_t t76 = -8784069;

    t76 = (x321-((x322^x323)>x324));

    if (t76 != -902298) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x326 = INT16_MAX;
	int16_t x327 = -1;
	static volatile int32_t t77 = -601282362;

    t77 = (x325-((x326^x327)>x328));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x329 = INT32_MAX;
	int16_t x330 = 1758;
	uint64_t x332 = 8034051207325LLU;
	volatile int32_t t78 = INT32_MAX;

    t78 = (x329-((x330^x331)>x332));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x335 = INT64_MIN;
	int8_t x336 = -33;
	int32_t t79 = INT32_MAX;

    t79 = (x333-((x334^x335)>x336));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x338 = -98506667927LL;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = INT8_MAX;
	volatile int32_t t80 = 35721;

    t80 = (x337-((x338^x339)>x340));

    if (t80 != -75475384) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 13073U;
	int8_t x342 = INT8_MIN;
	int8_t x343 = 26;
	uint32_t x344 = 112671618U;
	volatile int32_t t81 = 25343039;

    t81 = (x341-((x342^x343)>x344));

    if (t81 != 13072) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x345 = 2058534813911231LLU;
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	uint64_t t82 = 7010096LLU;

    t82 = (x345-((x346^x347)>x348));

    if (t82 != 2058534813911230LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = INT64_MIN;
	volatile int8_t x354 = -1;
	int16_t x355 = -1;
	volatile uint32_t x356 = 889135255U;
	volatile int64_t t83 = INT64_MIN;

    t83 = (x353-((x354^x355)>x356));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x357 = -1744582966969941291LL;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 71288U;
	int64_t t84 = 9420975685757LL;

    t84 = (x357-((x358^x359)>x360));

    if (t84 != -1744582966969941291LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 218710479U;
	static uint32_t x364 = UINT32_MAX;
	int64_t t85 = INT64_MIN;

    t85 = (x361-((x362^x363)>x364));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = INT8_MIN;
	static uint32_t x366 = 167337717U;
	volatile int16_t x367 = INT16_MIN;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t86 = -4248;

    t86 = (x365-((x366^x367)>x368));

    if (t86 != -129) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = -240971112;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = -1;
	volatile int32_t t87 = -14776235;

    t87 = (x369-((x370^x371)>x372));

    if (t87 != -240971112) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x373 = INT64_MAX;
	volatile int16_t x374 = INT16_MAX;
	static volatile int32_t x375 = 48034;
	uint64_t x376 = 5906607LLU;

    t88 = (x373-((x374^x375)>x376));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x377 = -1891LL;
	int16_t x378 = -888;
	static volatile uint8_t x379 = 0U;
	volatile int16_t x380 = INT16_MIN;
	int64_t t89 = 214116076LL;

    t89 = (x377-((x378^x379)>x380));

    if (t89 != -1892LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x381 = 284108U;
	int64_t x382 = 248331621LL;
	volatile uint8_t x383 = 0U;
	uint32_t t90 = 253U;

    t90 = (x381-((x382^x383)>x384));

    if (t90 != 284107U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = INT16_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	static volatile int16_t x388 = INT16_MIN;

    t91 = (x385-((x386^x387)>x388));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x389 = 140;
	uint16_t x390 = 402U;
	int32_t x392 = -1;
	int32_t t92 = -51884719;

    t92 = (x389-((x390^x391)>x392));

    if (t92 != 140) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t93 = -90;

    t93 = (x393-((x394^x395)>x396));

    if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x398 = 3912270U;
	uint32_t x399 = UINT32_MAX;
	static int16_t x400 = INT16_MIN;
	uint64_t t94 = UINT64_MAX;

    t94 = (x397-((x398^x399)>x400));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = INT8_MAX;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 1628U;
	volatile int32_t t95 = -576385681;

    t95 = (x401-((x402^x403)>x404));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x406 = INT32_MIN;
	int8_t x407 = 14;
	int32_t t96 = 1180;

    t96 = (x405-((x406^x407)>x408));

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = INT64_MIN;
	static int16_t x411 = INT16_MIN;
	volatile int8_t x412 = -1;
	static int64_t t97 = INT64_MIN;

    t97 = (x409-((x410^x411)>x412));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x413 = 380;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 2999;
	int8_t x416 = 1;
	static volatile int32_t t98 = 2890447;

    t98 = (x413-((x414^x415)>x416));

    if (t98 != 379) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x418 = 1411095584437LLU;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = -33;
	volatile int64_t t99 = INT64_MIN;

    t99 = (x417-((x418^x419)>x420));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x421 = 99821U;
	volatile int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MIN;
	static volatile uint32_t t100 = 482920852U;

    t100 = (x421-((x422^x423)>x424));

    if (t100 != 99820U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x425 = 0U;
	static volatile uint16_t x426 = 1529U;
	uint8_t x427 = UINT8_MAX;
	uint32_t t101 = UINT32_MAX;

    t101 = (x425-((x426^x427)>x428));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x429 = 216901653U;
	uint32_t x431 = 446U;
	volatile uint32_t t102 = 496153076U;

    t102 = (x429-((x430^x431)>x432));

    if (t102 != 216901653U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x433 = UINT8_MAX;
	int16_t x434 = 1627;
	int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t103 = -5;

    t103 = (x433-((x434^x435)>x436));

    if (t103 != 254) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x438 = 2050949872770072LL;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = 87U;
	int32_t t104 = -20704;

    t104 = (x437-((x438^x439)>x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x442 = INT64_MIN;
	int32_t x444 = INT32_MIN;
	uint32_t t105 = 358180U;

    t105 = (x441-((x442^x443)>x444));

    if (t105 != 28398U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = 128041131998075553LL;
	uint32_t x446 = UINT32_MAX;
	volatile uint16_t x447 = 12497U;
	uint16_t x448 = 1U;
	int64_t t106 = -1052347693752LL;

    t106 = (x445-((x446^x447)>x448));

    if (t106 != 128041131998075552LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x450 = 4050517403935300LLU;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = 441365464LLU;
	int32_t t107 = -46624102;

    t107 = (x449-((x450^x451)>x452));

    if (t107 != -301) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x453 = UINT16_MAX;
	int8_t x455 = 13;
	int8_t x456 = 0;
	static int32_t t108 = -244322400;

    t108 = (x453-((x454^x455)>x456));

    if (t108 != 65534) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x457 = 60U;
	static uint16_t x460 = UINT16_MAX;
	volatile int32_t t109 = -2;

    t109 = (x457-((x458^x459)>x460));

    if (t109 != 60) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x461 = 5649608138LLU;
	uint8_t x462 = UINT8_MAX;
	static int16_t x463 = 247;
	static int64_t x464 = INT64_MIN;
	uint64_t t110 = 496854524814365LLU;

    t110 = (x461-((x462^x463)>x464));

    if (t110 != 5649608137LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = INT64_MIN;
	volatile int32_t x466 = INT32_MAX;
	int32_t x467 = INT32_MIN;
	int64_t x468 = INT64_MAX;
	static int64_t t111 = INT64_MIN;

    t111 = (x465-((x466^x467)>x468));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x469 = INT8_MIN;
	int8_t x470 = 1;
	int16_t x471 = 10464;
	static volatile int16_t x472 = INT16_MAX;
	volatile int32_t t112 = -11040865;

    t112 = (x469-((x470^x471)>x472));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x476 = 1659U;
	uint64_t t113 = UINT64_MAX;

    t113 = (x473-((x474^x475)>x476));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x477 = 573825446U;
	volatile uint16_t x478 = 0U;
	static int64_t x480 = -10780818589LL;
	volatile uint32_t t114 = 3U;

    t114 = (x477-((x478^x479)>x480));

    if (t114 != 573825445U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = 4183263LL;
	static int64_t x482 = -1LL;
	int64_t x483 = 46571906072LL;
	int16_t x484 = -7;
	volatile int64_t t115 = 25432837679169LL;

    t115 = (x481-((x482^x483)>x484));

    if (t115 != 4183263LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x485 = 9583U;
	volatile int64_t x486 = -6204LL;
	int32_t x487 = INT32_MAX;
	volatile int8_t x488 = -1;
	int32_t t116 = -685157143;

    t116 = (x485-((x486^x487)>x488));

    if (t116 != 9583) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = INT16_MAX;
	int64_t x490 = INT64_MIN;
	static uint8_t x491 = 1U;
	int32_t t117 = 326;

    t117 = (x489-((x490^x491)>x492));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x495 = UINT32_MAX;
	volatile int32_t t118 = 139599;

    t118 = (x493-((x494^x495)>x496));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x502 = INT64_MIN;
	int32_t x503 = -25;
	volatile uint64_t t119 = 17396LLU;

    t119 = (x501-((x502^x503)>x504));

    if (t119 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x506 = -1;
	int64_t x507 = 1046339587054LL;
	int8_t x508 = INT8_MIN;
	int32_t t120 = 31296702;

    t120 = (x505-((x506^x507)>x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x509 = 5U;
	volatile uint32_t x511 = UINT32_MAX;
	int16_t x512 = INT16_MIN;

    t121 = (x509-((x510^x511)>x512));

    if (t121 != 5) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x513 = UINT64_MAX;
	int64_t x514 = INT64_MIN;
	static uint64_t x515 = UINT64_MAX;
	static volatile int16_t x516 = 61;

    t122 = (x513-((x514^x515)>x516));

    if (t122 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x517 = 74205758LL;
	int64_t x518 = -1LL;
	int32_t x519 = -1;
	static int16_t x520 = INT16_MIN;

    t123 = (x517-((x518^x519)>x520));

    if (t123 != 74205757LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = INT64_MIN;
	uint64_t x522 = 460LLU;
	int32_t x523 = -347;
	int8_t x524 = -3;
	int64_t t124 = INT64_MIN;

    t124 = (x521-((x522^x523)>x524));

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x525 = INT16_MIN;
	int16_t x526 = INT16_MAX;
	int64_t x527 = INT64_MIN;
	int32_t x528 = INT32_MAX;
	static volatile int32_t t125 = -1422862;

    t125 = (x525-((x526^x527)>x528));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x530 = UINT32_MAX;
	uint32_t x531 = UINT32_MAX;
	int64_t x532 = INT64_MAX;

    t126 = (x529-((x530^x531)>x532));

    if (t126 != -185) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x533 = INT8_MAX;
	int32_t x534 = INT32_MAX;
	int16_t x536 = 13459;
	static int32_t t127 = -2216577;

    t127 = (x533-((x534^x535)>x536));

    if (t127 != 126) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x537 = 156601LL;
	uint32_t x538 = 3863455U;
	volatile int64_t x539 = -14LL;
	volatile int64_t t128 = -192LL;

    t128 = (x537-((x538^x539)>x540));

    if (t128 != 156601LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x541 = -1;
	int16_t x543 = -1;
	int32_t x544 = INT32_MIN;
	int32_t t129 = 570;

    t129 = (x541-((x542^x543)>x544));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x546 = -1LL;
	static int64_t x547 = -1LL;
	static int8_t x548 = -3;
	static int32_t t130 = -1699;

    t130 = (x545-((x546^x547)>x548));

    if (t130 != 48) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x549 = INT32_MAX;
	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MAX;
	int8_t x552 = 0;
	static volatile int32_t t131 = INT32_MAX;

    t131 = (x549-((x550^x551)>x552));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	uint32_t x554 = 23U;
	volatile int16_t x555 = 160;
	int32_t x556 = 16573501;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x553-((x554^x555)>x556));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x557 = 96617868492812139LL;
	int32_t x558 = -1;
	static int32_t x559 = INT32_MIN;
	int8_t x560 = INT8_MIN;
	int64_t t133 = 16843309057219603LL;

    t133 = (x557-((x558^x559)>x560));

    if (t133 != 96617868492812138LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x562 = 7U;
	int32_t x563 = 1513604;
	uint16_t x564 = UINT16_MAX;
	uint64_t t134 = 109692792960603461LLU;

    t134 = (x561-((x562^x563)>x564));

    if (t134 != 1059363481127465864LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x569 = UINT32_MAX;
	uint16_t x570 = UINT16_MAX;
	static uint32_t x571 = 538019825U;
	uint8_t x572 = UINT8_MAX;
	uint32_t t135 = 56748925U;

    t135 = (x569-((x570^x571)>x572));

    if (t135 != 4294967294U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = 6;
	int64_t x574 = INT64_MIN;
	uint32_t x575 = UINT32_MAX;
	uint32_t x576 = 3U;
	static int32_t t136 = 1;

    t136 = (x573-((x574^x575)>x576));

    if (t136 != 6) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x578 = UINT64_MAX;
	int8_t x579 = 15;
	int64_t x580 = INT64_MIN;
	static volatile int32_t t137 = 1;

    t137 = (x577-((x578^x579)>x580));

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = INT8_MIN;
	int32_t x583 = -2;
	volatile int16_t x584 = INT16_MIN;
	volatile int32_t t138 = 12582;

    t138 = (x581-((x582^x583)>x584));

    if (t138 != -129) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x585 = UINT64_MAX;
	volatile int32_t x587 = INT32_MAX;
	int8_t x588 = -1;
	volatile uint64_t t139 = 89916811LLU;

    t139 = (x585-((x586^x587)>x588));

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = -5479694;
	int8_t x590 = -25;
	static int64_t x591 = INT64_MIN;
	int32_t t140 = -1;

    t140 = (x589-((x590^x591)>x592));

    if (t140 != -5479695) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x595 = -1;
	int8_t x596 = INT8_MIN;
	uint32_t t141 = 1545886170U;

    t141 = (x593-((x594^x595)>x596));

    if (t141 != 2980630U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x598 = 62U;
	static int64_t x599 = INT64_MIN;

    t142 = (x597-((x598^x599)>x600));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x603 = -1;
	uint8_t x604 = 15U;
	volatile int32_t t143 = -18994;

    t143 = (x601-((x602^x603)>x604));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = INT64_MAX;
	int8_t x606 = -1;
	int8_t x608 = INT8_MIN;
	int64_t t144 = 214299LL;

    t144 = (x605-((x606^x607)>x608));

    if (t144 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x610 = 397086LLU;
	volatile uint64_t x611 = 46LLU;
	int8_t x612 = INT8_MAX;
	int32_t t145 = 1134465;

    t145 = (x609-((x610^x611)>x612));

    if (t145 != -32769) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x613 = UINT32_MAX;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 33545718862LLU;
	int8_t x616 = INT8_MAX;
	uint32_t t146 = 26928588U;

    t146 = (x613-((x614^x615)>x616));

    if (t146 != 4294967294U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = 10443U;
	uint32_t x618 = 235U;
	static int32_t x619 = INT32_MIN;
	int16_t x620 = 121;
	static int32_t t147 = 226910;

    t147 = (x617-((x618^x619)>x620));

    if (t147 != 10442) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = INT16_MIN;
	int8_t x622 = 0;
	int32_t x623 = -1;
	int16_t x624 = -137;
	volatile int32_t t148 = 231382273;

    t148 = (x621-((x622^x623)>x624));

    if (t148 != -32769) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x627 = 3871U;
	uint32_t t149 = 27U;

    t149 = (x625-((x626^x627)>x628));

    if (t149 != 4294967294U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = -1;
	int8_t x631 = -1;
	volatile int32_t x632 = -15864167;
	static int32_t t150 = -1413130;

    t150 = (x629-((x630^x631)>x632));

    if (t150 != 254) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MIN;
	uint64_t x636 = UINT64_MAX;
	static volatile int32_t t151 = 0;

    t151 = (x633-((x634^x635)>x636));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x638 = -2273;
	int8_t x639 = INT8_MIN;
	uint16_t x640 = 1U;
	volatile int32_t t152 = 4305550;

    t152 = (x637-((x638^x639)>x640));

    if (t152 != -32769) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x642 = INT16_MIN;
	int8_t x643 = -1;
	static volatile int8_t x644 = INT8_MAX;
	static volatile int32_t t153 = 417250353;

    t153 = (x641-((x642^x643)>x644));

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x645 = INT64_MIN;
	volatile int32_t x647 = -1;
	static volatile int64_t t154 = INT64_MIN;

    t154 = (x645-((x646^x647)>x648));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = -15;
	int16_t x650 = 1;
	static uint64_t x651 = UINT64_MAX;
	static uint64_t x652 = UINT64_MAX;
	int32_t t155 = 665104;

    t155 = (x649-((x650^x651)>x652));

    if (t155 != -15) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MAX;
	static volatile uint16_t x655 = UINT16_MAX;
	static uint64_t x656 = 19194217032819LLU;

    t156 = (x653-((x654^x655)>x656));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = INT16_MIN;
	uint8_t x659 = UINT8_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t157 = -4;

    t157 = (x657-((x658^x659)>x660));

    if (t157 != -32769) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x662 = 12U;
	int32_t x663 = -1;
	uint32_t x664 = UINT32_MAX;
	volatile int32_t t158 = -165161;

    t158 = (x661-((x662^x663)>x664));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x665 = 933295LLU;
	uint32_t x668 = 80U;
	uint64_t t159 = 200942068122511748LLU;

    t159 = (x665-((x666^x667)>x668));

    if (t159 != 933294LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x669 = 1862051162452LL;
	volatile int8_t x670 = INT8_MIN;
	int16_t x672 = INT16_MIN;
	volatile int64_t t160 = -5LL;

    t160 = (x669-((x670^x671)>x672));

    if (t160 != 1862051162451LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x673 = INT32_MIN;
	int32_t x674 = INT32_MAX;
	volatile int32_t x675 = -18978;
	volatile int32_t x676 = INT32_MAX;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x673-((x674^x675)>x676));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MAX;
	int8_t x680 = -1;
	int32_t t162 = INT32_MIN;

    t162 = (x677-((x678^x679)>x680));

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x681 = INT16_MIN;
	int8_t x682 = INT8_MIN;
	uint64_t x684 = 22877388LLU;
	int32_t t163 = -3;

    t163 = (x681-((x682^x683)>x684));

    if (t163 != -32769) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MIN;
	volatile int64_t x687 = INT64_MIN;
	volatile int64_t t164 = INT64_MIN;

    t164 = (x685-((x686^x687)>x688));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x689 = INT16_MAX;
	int8_t x690 = INT8_MIN;
	static int8_t x692 = INT8_MIN;

    t165 = (x689-((x690^x691)>x692));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x694 = INT16_MAX;
	volatile int32_t x695 = -1;
	volatile int32_t t166 = -8538943;

    t166 = (x693-((x694^x695)>x696));

    if (t166 != 126) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = INT8_MIN;
	volatile uint8_t x698 = UINT8_MAX;
	static int16_t x699 = -1;
	volatile int8_t x700 = 21;
	static int32_t t167 = -30847;

    t167 = (x697-((x698^x699)>x700));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x701 = 746U;
	int16_t x703 = INT16_MIN;
	volatile uint32_t t168 = 573U;

    t168 = (x701-((x702^x703)>x704));

    if (t168 != 746U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x705 = 9490806807086LL;
	static int64_t x706 = -14837231LL;
	static int64_t x707 = INT64_MAX;
	volatile uint8_t x708 = UINT8_MAX;
	volatile int64_t t169 = -36485135324979591LL;

    t169 = (x705-((x706^x707)>x708));

    if (t169 != 9490806807086LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x709 = UINT8_MAX;
	int32_t x711 = INT32_MIN;
	static int64_t x712 = INT64_MIN;
	volatile int32_t t170 = 109700;

    t170 = (x709-((x710^x711)>x712));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x713 = UINT8_MAX;
	int64_t x714 = 3420LL;
	int32_t x716 = -1;
	int32_t t171 = 404421386;

    t171 = (x713-((x714^x715)>x716));

    if (t171 != 254) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x717 = 5U;
	uint32_t x718 = 2212673U;
	volatile uint64_t x719 = 251065309309742047LLU;
	volatile int32_t t172 = 7989038;

    t172 = (x717-((x718^x719)>x720));

    if (t172 != 4) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = INT16_MIN;
	volatile uint64_t x722 = 100864155945158461LLU;
	int16_t x723 = INT16_MAX;
	volatile int32_t t173 = -1920610;

    t173 = (x721-((x722^x723)>x724));

    if (t173 != -32769) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	uint16_t x727 = UINT16_MAX;
	int64_t x728 = 1240357517286819278LL;
	static uint32_t t174 = UINT32_MAX;

    t174 = (x725-((x726^x727)>x728));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 213U;
	volatile int16_t x730 = 2501;
	int32_t x731 = 16422562;
	uint16_t x732 = 25U;

    t175 = (x729-((x730^x731)>x732));

    if (t175 != 212) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x733 = 10U;
	uint64_t x734 = 1416599217096749LLU;
	int16_t x736 = 241;
	int32_t t176 = -27534;

    t176 = (x733-((x734^x735)>x736));

    if (t176 != 9) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x737 = 22509U;
	uint8_t x738 = 7U;
	volatile uint32_t t177 = 78259U;

    t177 = (x737-((x738^x739)>x740));

    if (t177 != 22509U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x742 = -3792714965313528LL;
	static volatile uint8_t x743 = 101U;
	int8_t x744 = INT8_MIN;
	volatile int32_t t178 = -24454;

    t178 = (x741-((x742^x743)>x744));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x745 = 0;
	static uint8_t x746 = 3U;
	static int16_t x747 = -1;
	int32_t x748 = INT32_MAX;

    t179 = (x745-((x746^x747)>x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x749 = 2910836;
	static int32_t x750 = -1;
	int32_t x751 = -976574;
	int8_t x752 = 49;
	volatile int32_t t180 = 2890;

    t180 = (x749-((x750^x751)>x752));

    if (t180 != 2910835) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = -1;
	uint64_t x754 = 13150113807519199LLU;
	uint32_t x755 = 2U;

    t181 = (x753-((x754^x755)>x756));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x757 = -3;
	int64_t x758 = INT64_MIN;
	volatile uint16_t x759 = 25887U;
	uint16_t x760 = UINT16_MAX;
	static volatile int32_t t182 = 38;

    t182 = (x757-((x758^x759)>x760));

    if (t182 != -3) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x765 = -1LL;
	volatile int8_t x766 = INT8_MIN;
	int16_t x767 = 5;
	uint16_t x768 = 7206U;
	volatile int64_t t183 = 31060494LL;

    t183 = (x765-((x766^x767)>x768));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x769 = -429LL;
	int8_t x770 = -1;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 10U;
	int64_t t184 = -1785772LL;

    t184 = (x769-((x770^x771)>x772));

    if (t184 != -430LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x773 = -5;
	static int32_t x774 = INT32_MAX;
	int16_t x775 = -1;
	static int8_t x776 = INT8_MIN;
	int32_t t185 = -1332;

    t185 = (x773-((x774^x775)>x776));

    if (t185 != -5) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x777 = 1351530;
	int8_t x778 = -55;
	static int64_t x779 = INT64_MAX;
	uint8_t x780 = 14U;
	int32_t t186 = -975349507;

    t186 = (x777-((x778^x779)>x780));

    if (t186 != 1351530) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x781 = 0U;
	int32_t x783 = 317541;
	int8_t x784 = -15;
	static int32_t t187 = -4;

    t187 = (x781-((x782^x783)>x784));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x785 = -1LL;
	volatile uint32_t x786 = UINT32_MAX;
	static uint16_t x787 = UINT16_MAX;
	int64_t t188 = 67LL;

    t188 = (x785-((x786^x787)>x788));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = INT32_MIN;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = 9175379142295452LL;

    t189 = (x789-((x790^x791)>x792));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x793 = INT16_MIN;
	uint64_t x794 = UINT64_MAX;
	uint64_t x795 = 29LLU;
	uint64_t x796 = 127812953LLU;
	volatile int32_t t190 = 893334716;

    t190 = (x793-((x794^x795)>x796));

    if (t190 != -32769) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x797 = -1LL;
	uint32_t x798 = 323503U;
	static uint64_t x799 = 1573080LLU;
	int16_t x800 = -1;
	static volatile int64_t t191 = -4LL;

    t191 = (x797-((x798^x799)>x800));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x801 = INT16_MIN;
	int64_t x803 = INT64_MIN;
	int8_t x804 = -1;
	volatile int32_t t192 = 272548;

    t192 = (x801-((x802^x803)>x804));

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x806 = -1;
	volatile uint16_t x807 = UINT16_MAX;
	uint64_t x808 = 0LLU;
	volatile int64_t t193 = 1710899159LL;

    t193 = (x805-((x806^x807)>x808));

    if (t193 != -2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x810 = 379U;
	int32_t x811 = INT32_MAX;
	int16_t x812 = -1;
	volatile int32_t t194 = -5204;

    t194 = (x809-((x810^x811)>x812));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x816 = -8105;
	int64_t t195 = INT64_MIN;

    t195 = (x813-((x814^x815)>x816));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x817 = INT16_MAX;
	static uint8_t x818 = UINT8_MAX;
	uint8_t x819 = 1U;
	uint32_t x820 = 153761U;
	volatile int32_t t196 = 709786;

    t196 = (x817-((x818^x819)>x820));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x823 = 1U;
	int32_t x824 = 129067;
	int32_t t197 = -2549;

    t197 = (x821-((x822^x823)>x824));

    if (t197 != -6) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x826 = INT16_MAX;
	int32_t x828 = -519125;
	int32_t t198 = -250595851;

    t198 = (x825-((x826^x827)>x828));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x831 = -1;
	volatile int32_t x832 = INT32_MIN;
	static volatile int64_t t199 = INT64_MIN;

    t199 = (x829-((x830^x831)>x832));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

