
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

static volatile int32_t t2 = 1;
static int8_t x20 = INT8_MIN;
int32_t t3 = 1;
volatile int32_t t4 = -32;
volatile int16_t x30 = INT16_MIN;
int64_t t7 = INT64_MIN;
static int16_t x37 = INT16_MAX;
uint32_t x44 = 446U;
int8_t x45 = INT8_MIN;
int16_t x46 = -1;
int16_t x51 = INT16_MIN;
volatile uint32_t t11 = 2U;
volatile uint64_t t12 = 44LLU;
static volatile int16_t x59 = INT16_MIN;
volatile uint16_t x62 = 0U;
int32_t x64 = INT32_MIN;
uint32_t x66 = UINT32_MAX;
static int32_t x68 = INT32_MIN;
int32_t x72 = INT32_MIN;
volatile uint32_t x75 = UINT32_MAX;
volatile int16_t x80 = INT16_MIN;
int64_t x87 = 46688LL;
static int32_t x89 = INT32_MIN;
uint8_t x113 = 38U;
int16_t x115 = -332;
int16_t x121 = 2772;
int64_t x123 = -1LL;
int32_t x126 = INT32_MIN;
int64_t x127 = INT64_MIN;
int8_t x134 = INT8_MIN;
int8_t x139 = -1;
volatile int16_t x140 = INT16_MIN;
static volatile int8_t x141 = INT8_MIN;
uint32_t x156 = UINT32_MAX;
int32_t t31 = 28872;
int8_t x159 = INT8_MIN;
int16_t x163 = 23;
static int32_t x164 = -1;
volatile int32_t t34 = 1;
int8_t x182 = INT8_MAX;
uint64_t x189 = 2LLU;
int16_t x192 = INT16_MIN;
int16_t x196 = INT16_MAX;
int32_t x203 = INT32_MIN;
static uint16_t x204 = 2910U;
int8_t x206 = -1;
volatile int64_t x207 = -46792760676LL;
int8_t x218 = INT8_MIN;
static int64_t x225 = -1LL;
volatile int32_t t46 = 0;
static int8_t x236 = INT8_MIN;
int64_t x240 = INT64_MAX;
volatile int32_t t49 = 1743258;
int8_t x255 = 6;
int32_t t52 = 3655;
uint64_t x265 = 7153371473297781LLU;
int16_t x281 = 53;
int64_t x291 = -180631LL;
static int64_t t60 = INT64_MAX;
volatile int64_t x304 = INT64_MIN;
int16_t x307 = INT16_MAX;
static volatile int32_t t62 = -11668906;
int64_t x311 = INT64_MIN;
static uint16_t x316 = 1U;
int32_t t64 = -4982292;
uint64_t x331 = 65181548480336846LLU;
uint32_t x335 = 0U;
int32_t x336 = -1;
int32_t t68 = INT32_MIN;
uint8_t x348 = 22U;
volatile int32_t t70 = -20;
uint8_t x351 = 2U;
int64_t x353 = 22168369LL;
static int16_t x362 = -1;
static uint64_t t75 = 16605LLU;
static int32_t x369 = INT32_MIN;
volatile uint16_t x370 = 8U;
uint32_t x371 = UINT32_MAX;
volatile int16_t x374 = INT16_MAX;
int64_t x376 = -1098012574LL;
uint32_t x377 = 0U;
volatile uint32_t t78 = 0U;
int16_t x384 = INT16_MIN;
int16_t x386 = -4;
int8_t x389 = -1;
int32_t t81 = 12;
volatile int32_t x394 = -260355209;
int16_t x410 = INT16_MAX;
int32_t x414 = -1;
static int32_t t86 = 6670;
static int16_t x418 = -1;
int32_t x419 = INT32_MAX;
int32_t t87 = 98164376;
static uint8_t x421 = 116U;
static uint32_t x423 = 57913760U;
static int32_t x428 = INT32_MIN;
uint8_t x435 = UINT8_MAX;
static uint16_t x436 = UINT16_MAX;
int8_t x448 = INT8_MIN;
volatile int8_t x449 = INT8_MAX;
int64_t x452 = -1LL;
volatile int32_t t95 = -360908631;
volatile int16_t x459 = -1;
int64_t x462 = -172862858948621883LL;
static uint64_t x464 = UINT64_MAX;
volatile int64_t x471 = INT64_MIN;
uint8_t x478 = UINT8_MAX;
volatile int8_t x484 = 1;
static volatile int32_t t102 = 115;
volatile int16_t x491 = INT16_MIN;
int64_t x496 = INT64_MIN;
volatile uint16_t x497 = 0U;
int8_t x502 = INT8_MIN;
static int64_t x508 = -1LL;
static uint16_t x519 = 10U;
int64_t x523 = INT64_MIN;
volatile int8_t x524 = INT8_MIN;
volatile int32_t t111 = 2483749;
int16_t x530 = 681;
uint32_t x531 = 16268U;
static int8_t x534 = 1;
volatile uint8_t x536 = 75U;
int8_t x547 = 4;
int8_t x551 = INT8_MIN;
volatile int32_t x558 = -42;
int16_t x560 = INT16_MAX;
uint16_t x565 = UINT16_MAX;
int8_t x569 = INT8_MIN;
int32_t t121 = 159733;
static int64_t x573 = -1LL;
volatile uint16_t x576 = UINT16_MAX;
int16_t x581 = INT16_MIN;
static volatile int32_t t124 = 7727563;
static int16_t x585 = -1;
uint32_t x588 = 74371331U;
int16_t x591 = -83;
int32_t t126 = -363;
int8_t x593 = INT8_MIN;
static volatile int8_t x595 = -1;
static int32_t x601 = 318;
volatile int16_t x603 = INT16_MIN;
int64_t t132 = 2116675946289785250LL;
int32_t t133 = -1845464;
int64_t x625 = INT64_MIN;
volatile int64_t t134 = INT64_MIN;
int8_t x638 = 1;
static volatile int32_t t137 = -40804984;
static volatile int32_t x650 = -1;
int16_t x654 = -1;
static uint32_t x659 = 32885940U;
int8_t x672 = INT8_MIN;
int8_t x673 = INT8_MAX;
uint16_t x675 = 962U;
uint32_t x676 = UINT32_MAX;
volatile int8_t x679 = 9;
int32_t x692 = INT32_MIN;
volatile int16_t x693 = INT16_MIN;
int32_t x694 = INT32_MIN;
int32_t x698 = INT32_MIN;
static int8_t x702 = -1;
int32_t x704 = INT32_MIN;
int64_t x708 = -240306LL;
uint8_t x714 = 0U;
int16_t x719 = INT16_MIN;
uint16_t x721 = UINT16_MAX;
int32_t x722 = 0;
int32_t x723 = 1;
volatile int8_t x726 = -1;
int16_t x728 = -1;
uint8_t x732 = 0U;
int16_t x734 = INT16_MAX;
uint64_t x735 = 2LLU;
volatile int16_t x739 = INT16_MIN;
int16_t x741 = INT16_MIN;
uint64_t x754 = 9529431LLU;
uint16_t x759 = 15U;
static int8_t x761 = INT8_MIN;
int8_t x770 = INT8_MIN;
int64_t x774 = -1LL;
int64_t x775 = INT64_MIN;
static uint64_t t167 = 0LLU;
static int8_t x778 = INT8_MIN;
static uint64_t x782 = 366431648212LLU;
static uint64_t x799 = 809124784LLU;
int32_t t173 = 12521;
volatile int8_t x801 = 1;
uint64_t x805 = 2661870582674LLU;
int32_t x811 = -3;
uint32_t x813 = UINT32_MAX;
volatile uint32_t t177 = UINT32_MAX;
static int16_t x825 = -1;
int64_t x831 = 8200300728653LL;
int16_t x838 = -1;
uint64_t x839 = UINT64_MAX;
int32_t x840 = 33440371;
int32_t t182 = -7886212;
static uint32_t x844 = 50U;
uint8_t x846 = 3U;
int32_t t184 = -2538;
static volatile int64_t x853 = 1588274791647126LL;
int8_t x858 = INT8_MIN;
static int8_t x859 = INT8_MIN;
static int32_t x861 = 14625309;
volatile int8_t x862 = INT8_MIN;
volatile int32_t t191 = -8;
int16_t x890 = 16;
static uint16_t x896 = 62U;
static int32_t x901 = INT32_MIN;
int32_t x902 = -964426;
volatile uint8_t x905 = 0U;
uint64_t x906 = 107LLU;
static volatile int32_t t199 = -3;


void f0(void) {
    	uint16_t x1 = 18U;
	int32_t x2 = -439372156;
	volatile int8_t x3 = 0;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = -1726110;

    t0 = (x1+((x2-x3)>x4));

    if (t0 != 18) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 108U;
	int64_t x6 = INT64_MAX;
	uint64_t x7 = 197LLU;
	static int8_t x8 = -10;
	int32_t t1 = -470;

    t1 = (x5+((x6-x7)>x8));

    if (t1 != 108) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = -464;
	static volatile int64_t x10 = -2024534082637706LL;
	int64_t x11 = INT64_MIN;
	volatile int32_t x12 = INT32_MIN;

    t2 = (x9+((x10-x11)>x12));

    if (t2 != -463) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	uint16_t x18 = 3U;
	static int8_t x19 = INT8_MIN;

    t3 = (x17+((x18-x19)>x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = UINT16_MAX;
	int32_t x22 = -1;
	uint32_t x23 = 9339492U;
	int16_t x24 = -1;

    t4 = (x21+((x22-x23)>x24));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MAX;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -1834852;

    t5 = (x25+((x26-x27)>x28));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x29 = INT16_MIN;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -88;

    t6 = (x29+((x30-x31)>x32));

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 1U;
	int16_t x35 = -1;
	int32_t x36 = 986627;

    t7 = (x33+((x34-x35)>x36));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x38 = 0U;
	int32_t x39 = -418872700;
	volatile uint64_t x40 = 745980944LLU;
	volatile int32_t t8 = -11325;

    t8 = (x37+((x38-x39)>x40));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = 1545934178133LL;
	volatile int16_t x42 = 1;
	static uint64_t x43 = UINT64_MAX;
	volatile int64_t t9 = -2863560664835214353LL;

    t9 = (x41+((x42-x43)>x44));

    if (t9 != 1545934178133LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x47 = -29LL;
	static volatile int32_t x48 = INT32_MIN;
	int32_t t10 = 3561305;

    t10 = (x45+((x46-x47)>x48));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x52 = -1;

    t11 = (x49+((x50-x51)>x52));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 38221873LLU;
	uint32_t x54 = 20908U;
	uint64_t x55 = 358LLU;
	static uint32_t x56 = UINT32_MAX;

    t12 = (x53+((x54-x55)>x56));

    if (t12 != 38221873LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 1;
	static int32_t x58 = -41335;
	int16_t x60 = -1;
	int32_t t13 = 7856442;

    t13 = (x57+((x58-x59)>x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = 245700182231LL;
	int16_t x63 = -1;
	volatile int64_t t14 = -869660951LL;

    t14 = (x61+((x62-x63)>x64));

    if (t14 != 245700182232LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	uint16_t x67 = UINT16_MAX;
	static int32_t t15 = 459;

    t15 = (x65+((x66-x67)>x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	volatile int16_t x70 = INT16_MIN;
	int32_t x71 = 3;
	static int32_t t16 = -262;

    t16 = (x69+((x70-x71)>x72));

    if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x73 = 1250732619U;
	uint16_t x74 = 7U;
	volatile int16_t x76 = -1;
	volatile uint32_t t17 = 11876U;

    t17 = (x73+((x74-x75)>x76));

    if (t17 != 1250732619U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x77 = -1LL;
	volatile uint32_t x78 = 3325U;
	int8_t x79 = INT8_MIN;
	volatile int64_t t18 = -35066805684LL;

    t18 = (x77+((x78-x79)>x80));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x81 = 24996356870074216LL;
	static uint32_t x82 = UINT32_MAX;
	int8_t x83 = -1;
	int8_t x84 = 0;
	volatile int64_t t19 = -1057772983800LL;

    t19 = (x81+((x82-x83)>x84));

    if (t19 != 24996356870074216LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x85 = -1;
	int16_t x86 = -12;
	volatile uint16_t x88 = 98U;
	volatile int32_t t20 = -16;

    t20 = (x85+((x86-x87)>x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x90 = -1;
	int8_t x91 = 6;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t21 = INT32_MIN;

    t21 = (x89+((x90-x91)>x92));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 762U;
	volatile int16_t x94 = INT16_MAX;
	int8_t x95 = INT8_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 819856;

    t22 = (x93+((x94-x95)>x96));

    if (t22 != 763) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = 1;
	int64_t x112 = INT64_MIN;
	int32_t t23 = 0;

    t23 = (x109+((x110-x111)>x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x114 = INT16_MIN;
	int32_t x116 = 1;
	volatile int32_t t24 = -780;

    t24 = (x113+((x114-x115)>x116));

    if (t24 != 38) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x122 = UINT64_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t25 = -12010144;

    t25 = (x121+((x122-x123)>x124));

    if (t25 != 2772) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x125 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	volatile int32_t t26 = -7665;

    t26 = (x125+((x126-x127)>x128));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x133 = 70788258616LL;
	int64_t x135 = -1LL;
	int8_t x136 = -2;
	volatile int64_t t27 = 531462818LL;

    t27 = (x133+((x134-x135)>x136));

    if (t27 != 70788258616LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	static volatile int32_t t28 = INT32_MIN;

    t28 = (x137+((x138-x139)>x140));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x142 = UINT8_MAX;
	volatile int64_t x143 = 117338447220LL;
	int16_t x144 = 55;
	static volatile int32_t t29 = -946007;

    t29 = (x141+((x142-x143)>x144));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x149 = 19U;
	int16_t x150 = -1;
	static volatile int16_t x151 = 4;
	volatile int8_t x152 = 7;
	int32_t t30 = -118540;

    t30 = (x149+((x150-x151)>x152));

    if (t30 != 19) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x153 = 0;
	int32_t x154 = -1;
	volatile int64_t x155 = -1LL;

    t31 = (x153+((x154-x155)>x156));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x157 = INT16_MIN;
	int32_t x158 = -2402593;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t32 = 352;

    t32 = (x157+((x158-x159)>x160));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x161 = -14;
	volatile uint16_t x162 = 25U;
	volatile int32_t t33 = 431414;

    t33 = (x161+((x162-x163)>x164));

    if (t33 != -13) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x165 = INT8_MIN;
	volatile int8_t x166 = 4;
	uint8_t x167 = 3U;
	int32_t x168 = 181;

    t34 = (x165+((x166-x167)>x168));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 2U;
	int32_t x175 = 480739;
	static uint64_t x176 = 5LLU;
	static int32_t t35 = 12622703;

    t35 = (x173+((x174-x175)>x176));

    if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = 0;
	static volatile int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t36 = 7;

    t36 = (x181+((x182-x183)>x184));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x185 = 7003U;
	static int32_t x186 = INT32_MIN;
	int64_t x187 = 595LL;
	uint32_t x188 = 2713U;
	volatile uint32_t t37 = 792U;

    t37 = (x185+((x186-x187)>x188));

    if (t37 != 7003U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x190 = -1;
	static int8_t x191 = -1;
	static uint64_t t38 = 463749238319LLU;

    t38 = (x189+((x190-x191)>x192));

    if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x193 = INT32_MAX;
	int8_t x194 = INT8_MIN;
	volatile int64_t x195 = -96LL;
	int32_t t39 = INT32_MAX;

    t39 = (x193+((x194-x195)>x196));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x197 = 28065U;
	static volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t40 = 31;

    t40 = (x197+((x198-x199)>x200));

    if (t40 != 28065) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x201 = INT64_MIN;
	int32_t x202 = -1;
	volatile int64_t t41 = 286641915966591LL;

    t41 = (x201+((x202-x203)>x204));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x205 = 178U;
	uint16_t x208 = 3U;
	uint32_t t42 = 349122U;

    t42 = (x205+((x206-x207)>x208));

    if (t42 != 179U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x213 = INT32_MAX;
	uint64_t x214 = 659130616963494472LLU;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = INT16_MIN;
	static int32_t t43 = INT32_MAX;

    t43 = (x213+((x214-x215)>x216));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x217 = 914989881;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	static int32_t t44 = 23;

    t44 = (x217+((x218-x219)>x220));

    if (t44 != 914989882) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x226 = INT16_MIN;
	static uint32_t x227 = 203925421U;
	static int32_t x228 = INT32_MAX;
	static int64_t t45 = 280694728626939LL;

    t45 = (x225+((x226-x227)>x228));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x229 = -1;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = 191668964497316LLU;
	volatile uint8_t x232 = 0U;

    t46 = (x229+((x230-x231)>x232));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	int32_t x235 = -1;
	volatile int32_t t47 = 31124;

    t47 = (x233+((x234-x235)>x236));

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	volatile int64_t x239 = INT64_MIN;
	int32_t t48 = 321941521;

    t48 = (x237+((x238-x239)>x240));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x241 = -3;
	static volatile int16_t x242 = -1005;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;

    t49 = (x241+((x242-x243)>x244));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x245 = 0;
	uint16_t x246 = 0U;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -42;
	static volatile int32_t t50 = 0;

    t50 = (x245+((x246-x247)>x248));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x249 = INT64_MIN;
	static int8_t x250 = INT8_MIN;
	static volatile int32_t x251 = INT32_MIN;
	static volatile int16_t x252 = 2;
	volatile int64_t t51 = -10733395701440LL;

    t51 = (x249+((x250-x251)>x252));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x253 = INT8_MAX;
	uint16_t x254 = 109U;
	static volatile int64_t x256 = INT64_MIN;

    t52 = (x253+((x254-x255)>x256));

    if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x257 = 0U;
	volatile int64_t x258 = 10426302391LL;
	int32_t x259 = -1;
	int16_t x260 = -264;
	int32_t t53 = -20410;

    t53 = (x257+((x258-x259)>x260));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x266 = INT64_MIN;
	static int64_t x267 = -1LL;
	static int8_t x268 = 5;
	uint64_t t54 = 2823516LLU;

    t54 = (x265+((x266-x267)>x268));

    if (t54 != 7153371473297781LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x269 = INT16_MIN;
	static uint32_t x270 = 2525429U;
	uint64_t x271 = UINT64_MAX;
	static int8_t x272 = INT8_MAX;
	static int32_t t55 = -6;

    t55 = (x269+((x270-x271)>x272));

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x282 = 575841858;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = 1;
	volatile int32_t t56 = -2796050;

    t56 = (x281+((x282-x283)>x284));

    if (t56 != 54) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x285 = -139335594;
	int8_t x286 = -1;
	int32_t x287 = -1;
	int8_t x288 = -1;
	volatile int32_t t57 = -1357;

    t57 = (x285+((x286-x287)>x288));

    if (t57 != -139335593) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x289 = 0;
	int64_t x290 = 29343442430138512LL;
	static volatile int64_t x292 = INT64_MAX;
	volatile int32_t t58 = -2872393;

    t58 = (x289+((x290-x291)>x292));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x293 = 7568841489320LLU;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MAX;
	static uint8_t x296 = 127U;
	uint64_t t59 = 421075109497LLU;

    t59 = (x293+((x294-x295)>x296));

    if (t59 != 7568841489320LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x297 = INT64_MAX;
	int64_t x298 = -268707145375381573LL;
	int8_t x299 = 1;
	static int32_t x300 = INT32_MIN;

    t60 = (x297+((x298-x299)>x300));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = -1;
	int32_t t61 = 23514;

    t61 = (x301+((x302-x303)>x304));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x305 = INT8_MIN;
	uint32_t x306 = UINT32_MAX;
	uint32_t x308 = 164752U;

    t62 = (x305+((x306-x307)>x308));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x309 = -77267132LL;
	int8_t x310 = -1;
	uint64_t x312 = 87848718LLU;
	volatile int64_t t63 = 168944639117LL;

    t63 = (x309+((x310-x311)>x312));

    if (t63 != -77267131LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x313 = 5U;
	uint8_t x314 = UINT8_MAX;
	static int8_t x315 = INT8_MAX;

    t64 = (x313+((x314-x315)>x316));

    if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x317 = 63981LL;
	static volatile int64_t x318 = -17970089841448LL;
	volatile int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	int64_t t65 = -3093595800267LL;

    t65 = (x317+((x318-x319)>x320));

    if (t65 != 63981LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x321 = UINT64_MAX;
	static int32_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	volatile int8_t x324 = INT8_MIN;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (x321+((x322-x323)>x324));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x329 = INT8_MIN;
	uint32_t x330 = 108U;
	int16_t x332 = -1;
	volatile int32_t t67 = -1;

    t67 = (x329+((x330-x331)>x332));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x333 = INT32_MIN;
	int8_t x334 = -1;

    t68 = (x333+((x334-x335)>x336));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x341 = -1;
	int8_t x342 = 15;
	static uint8_t x343 = 2U;
	uint8_t x344 = UINT8_MAX;
	static volatile int32_t t69 = -15193;

    t69 = (x341+((x342-x343)>x344));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x345 = 0;
	volatile int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;

    t70 = (x345+((x346-x347)>x348));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x349 = 0U;
	int8_t x350 = INT8_MAX;
	int64_t x352 = 494469924875863098LL;
	int32_t t71 = -3196165;

    t71 = (x349+((x350-x351)>x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 83U;
	uint64_t x356 = 5745946337128916LLU;
	static volatile int64_t t72 = 11164LL;

    t72 = (x353+((x354-x355)>x356));

    if (t72 != 22168370LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -4;
	int64_t x360 = -2050018617250LL;
	int32_t t73 = 682482386;

    t73 = (x357+((x358-x359)>x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x361 = 15971U;
	uint16_t x363 = UINT16_MAX;
	static int16_t x364 = 1;
	uint32_t t74 = 707U;

    t74 = (x361+((x362-x363)>x364));

    if (t74 != 15971U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x365 = 6608760239283LLU;
	int16_t x366 = INT16_MAX;
	int64_t x367 = 20LL;
	uint32_t x368 = UINT32_MAX;

    t75 = (x365+((x366-x367)>x368));

    if (t75 != 6608760239283LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t76 = -16154;

    t76 = (x369+((x370-x371)>x372));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x373 = UINT64_MAX;
	int16_t x375 = -1;
	uint64_t t77 = 67LLU;

    t77 = (x373+((x374-x375)>x376));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x378 = -1LL;
	int64_t x379 = -1LL;
	uint16_t x380 = 623U;

    t78 = (x377+((x378-x379)>x380));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x381 = 1;
	int64_t x382 = -8424517514LL;
	static int8_t x383 = INT8_MIN;
	volatile int32_t t79 = -320;

    t79 = (x381+((x382-x383)>x384));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x385 = 105205802760815LLU;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	uint64_t t80 = 8671281503194LLU;

    t80 = (x385+((x386-x387)>x388));

    if (t80 != 105205802760816LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x390 = 2739146U;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MAX;

    t81 = (x389+((x390-x391)>x392));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x393 = UINT16_MAX;
	uint16_t x395 = 16U;
	int32_t x396 = 472;
	static int32_t t82 = -73729;

    t82 = (x393+((x394-x395)>x396));

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x397 = INT8_MIN;
	volatile int8_t x398 = -2;
	static int16_t x399 = INT16_MIN;
	uint16_t x400 = 7739U;
	volatile int32_t t83 = 5;

    t83 = (x397+((x398-x399)>x400));

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x405 = -52533;
	volatile int64_t x406 = -1LL;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t84 = -19034;

    t84 = (x405+((x406-x407)>x408));

    if (t84 != -52532) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x409 = -1;
	uint32_t x411 = 1431769080U;
	uint8_t x412 = 1U;
	volatile int32_t t85 = -3;

    t85 = (x409+((x410-x411)>x412));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x413 = -1;
	uint64_t x415 = 0LLU;
	static volatile int16_t x416 = -12252;

    t86 = (x413+((x414-x415)>x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x417 = INT16_MAX;
	uint8_t x420 = UINT8_MAX;

    t87 = (x417+((x418-x419)>x420));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x422 = 17;
	uint8_t x424 = 58U;
	static volatile int32_t t88 = -2;

    t88 = (x421+((x422-x423)>x424));

    if (t88 != 117) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x425 = 13U;
	int32_t x426 = -1;
	volatile uint8_t x427 = 4U;
	volatile int32_t t89 = -1;

    t89 = (x425+((x426-x427)>x428));

    if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x429 = 4;
	volatile uint8_t x430 = UINT8_MAX;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = -1;
	int32_t t90 = -8791989;

    t90 = (x429+((x430-x431)>x432));

    if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x433 = 5861045057LLU;
	int8_t x434 = 0;
	static volatile uint64_t t91 = 2575296150679643407LLU;

    t91 = (x433+((x434-x435)>x436));

    if (t91 != 5861045057LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x437 = 481U;
	int8_t x438 = INT8_MIN;
	int64_t x439 = -28107907943111LL;
	volatile uint8_t x440 = 1U;
	static int32_t t92 = 41015373;

    t92 = (x437+((x438-x439)>x440));

    if (t92 != 482) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x441 = 6;
	uint64_t x442 = UINT64_MAX;
	uint32_t x443 = 6401505U;
	static uint16_t x444 = 69U;
	int32_t t93 = 110676;

    t93 = (x441+((x442-x443)>x444));

    if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x445 = -1;
	int64_t x446 = -1LL;
	static volatile int64_t x447 = INT64_MIN;
	volatile int32_t t94 = 233391829;

    t94 = (x445+((x446-x447)>x448));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x450 = 23LLU;
	static uint16_t x451 = UINT16_MAX;

    t95 = (x449+((x450-x451)>x452));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x453 = UINT16_MAX;
	int64_t x454 = -1LL;
	uint32_t x455 = UINT32_MAX;
	uint32_t x456 = 89937184U;
	volatile int32_t t96 = 357113;

    t96 = (x453+((x454-x455)>x456));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MIN;
	int64_t x460 = -377981650351665772LL;
	volatile int32_t t97 = INT32_MIN;

    t97 = (x457+((x458-x459)>x460));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x461 = INT16_MAX;
	static int16_t x463 = INT16_MIN;
	int32_t t98 = 984;

    t98 = (x461+((x462-x463)>x464));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x469 = INT32_MIN;
	volatile int64_t x470 = INT64_MIN;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t99 = -91333026;

    t99 = (x469+((x470-x471)>x472));

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x473 = -562281;
	volatile uint64_t x474 = 938LLU;
	int16_t x475 = -1;
	uint8_t x476 = 12U;
	volatile int32_t t100 = -120794;

    t100 = (x473+((x474-x475)>x476));

    if (t100 != -562280) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x477 = 1;
	static int64_t x479 = -1LL;
	static int32_t x480 = -1;
	int32_t t101 = -46040;

    t101 = (x477+((x478-x479)>x480));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x481 = -142;
	uint64_t x482 = 39LLU;
	static uint32_t x483 = UINT32_MAX;

    t102 = (x481+((x482-x483)>x484));

    if (t102 != -141) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = INT64_MIN;
	int16_t x486 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	uint8_t x488 = 78U;
	volatile int64_t t103 = INT64_MIN;

    t103 = (x485+((x486-x487)>x488));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x489 = 40811211U;
	int64_t x490 = -1LL;
	static int64_t x492 = -1LL;
	uint32_t t104 = 10U;

    t104 = (x489+((x490-x491)>x492));

    if (t104 != 40811212U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x493 = 59875625;
	int16_t x494 = -1;
	int16_t x495 = -1;
	volatile int32_t t105 = 9730713;

    t105 = (x493+((x494-x495)>x496));

    if (t105 != 59875626) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = UINT16_MAX;
	static uint8_t x500 = UINT8_MAX;
	volatile int32_t t106 = 32;

    t106 = (x497+((x498-x499)>x500));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x501 = INT16_MAX;
	int8_t x503 = -25;
	int8_t x504 = -29;
	volatile int32_t t107 = -71897370;

    t107 = (x501+((x502-x503)>x504));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint16_t x506 = 191U;
	uint64_t x507 = 29679843710577216LLU;
	volatile int32_t t108 = -2298;

    t108 = (x505+((x506-x507)>x508));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x509 = 4;
	int8_t x510 = 0;
	uint32_t x511 = 4281U;
	int64_t x512 = INT64_MIN;
	volatile int32_t t109 = -2056;

    t109 = (x509+((x510-x511)>x512));

    if (t109 != 5) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x517 = INT16_MIN;
	static int16_t x518 = INT16_MIN;
	volatile uint64_t x520 = 18067LLU;
	volatile int32_t t110 = 32440;

    t110 = (x517+((x518-x519)>x520));

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x521 = 13;
	int32_t x522 = -6600;

    t111 = (x521+((x522-x523)>x524));

    if (t111 != 14) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x529 = INT16_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t112 = 1756010;

    t112 = (x529+((x530-x531)>x532));

    if (t112 != 32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x533 = 1550506;
	static uint64_t x535 = UINT64_MAX;
	int32_t t113 = -3333911;

    t113 = (x533+((x534-x535)>x536));

    if (t113 != 1550506) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x537 = 52U;
	int16_t x538 = 1;
	int16_t x539 = INT16_MAX;
	static volatile int16_t x540 = -1;
	static int32_t t114 = -146247;

    t114 = (x537+((x538-x539)>x540));

    if (t114 != 52) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x541 = INT64_MIN;
	volatile int64_t x542 = -1LL;
	int16_t x543 = INT16_MAX;
	volatile int8_t x544 = -1;
	int64_t t115 = INT64_MIN;

    t115 = (x541+((x542-x543)>x544));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x545 = 1U;
	volatile uint8_t x546 = 1U;
	volatile uint64_t x548 = 8202381535716207LLU;
	int32_t t116 = -2251;

    t116 = (x545+((x546-x547)>x548));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x549 = -154;
	uint8_t x550 = 5U;
	int32_t x552 = -1;
	int32_t t117 = 5;

    t117 = (x549+((x550-x551)>x552));

    if (t117 != -153) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x553 = 5252U;
	int8_t x554 = INT8_MIN;
	static uint64_t x555 = 743662320069683384LLU;
	uint64_t x556 = 214438949968488LLU;
	uint32_t t118 = 95451U;

    t118 = (x553+((x554-x555)>x556));

    if (t118 != 5253U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x557 = 30916906214LLU;
	int8_t x559 = 0;
	volatile uint64_t t119 = 32354328150LLU;

    t119 = (x557+((x558-x559)>x560));

    if (t119 != 30916906214LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x566 = INT8_MIN;
	int8_t x567 = 2;
	int64_t x568 = INT64_MAX;
	volatile int32_t t120 = -41780;

    t120 = (x565+((x566-x567)>x568));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x570 = 126589;
	static volatile uint8_t x571 = 29U;
	volatile int64_t x572 = INT64_MAX;

    t121 = (x569+((x570-x571)>x572));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x574 = INT8_MIN;
	uint32_t x575 = UINT32_MAX;
	static volatile int64_t t122 = 627531135317116667LL;

    t122 = (x573+((x574-x575)>x576));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x577 = -60;
	static uint16_t x578 = UINT16_MAX;
	int64_t x579 = -1LL;
	int16_t x580 = INT16_MIN;
	int32_t t123 = 54584755;

    t123 = (x577+((x578-x579)>x580));

    if (t123 != -59) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x582 = -1750;
	int8_t x583 = INT8_MIN;
	volatile uint8_t x584 = UINT8_MAX;

    t124 = (x581+((x582-x583)>x584));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x586 = 5U;
	volatile uint64_t x587 = 102808562LLU;
	static volatile int32_t t125 = 723796;

    t125 = (x585+((x586-x587)>x588));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x589 = -5142;
	volatile int64_t x590 = -1LL;
	uint16_t x592 = 6278U;

    t126 = (x589+((x590-x591)>x592));

    if (t126 != -5142) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x594 = INT16_MAX;
	uint64_t x596 = UINT64_MAX;
	volatile int32_t t127 = 7;

    t127 = (x593+((x594-x595)>x596));

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x597 = INT8_MIN;
	volatile int8_t x598 = -12;
	static uint16_t x599 = 0U;
	uint64_t x600 = 51478LLU;
	int32_t t128 = -40678398;

    t128 = (x597+((x598-x599)>x600));

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x602 = 37518888;
	static uint8_t x604 = 10U;
	int32_t t129 = -1;

    t129 = (x601+((x602-x603)>x604));

    if (t129 != 319) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x605 = 1;
	uint32_t x606 = UINT32_MAX;
	int32_t x607 = -157832966;
	static int8_t x608 = INT8_MAX;
	volatile int32_t t130 = 1;

    t130 = (x605+((x606-x607)>x608));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x609 = UINT32_MAX;
	int8_t x610 = -7;
	static volatile int8_t x611 = -1;
	uint16_t x612 = 1028U;
	uint32_t t131 = UINT32_MAX;

    t131 = (x609+((x610-x611)>x612));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x617 = INT64_MIN;
	int32_t x618 = -1;
	int8_t x619 = INT8_MAX;
	volatile uint32_t x620 = 140848764U;

    t132 = (x617+((x618-x619)>x620));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x621 = 69U;
	volatile int8_t x622 = INT8_MIN;
	int64_t x623 = 1025079711338344LL;
	static uint64_t x624 = 213920LLU;

    t133 = (x621+((x622-x623)>x624));

    if (t133 != 70) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x626 = UINT8_MAX;
	volatile int8_t x627 = INT8_MIN;
	volatile int16_t x628 = 4986;

    t134 = (x625+((x626-x627)>x628));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x629 = 398LLU;
	volatile uint16_t x630 = UINT16_MAX;
	uint64_t x631 = 1LLU;
	uint64_t x632 = 15730LLU;
	uint64_t t135 = 45684960734LLU;

    t135 = (x629+((x630-x631)>x632));

    if (t135 != 399LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x633 = -1;
	uint64_t x634 = 845409LLU;
	uint8_t x635 = 23U;
	int32_t x636 = -3;
	volatile int32_t t136 = 811351515;

    t136 = (x633+((x634-x635)>x636));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x637 = 8U;
	int8_t x639 = -1;
	uint8_t x640 = 26U;

    t137 = (x637+((x638-x639)>x640));

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x641 = -1801;
	int64_t x642 = -8786LL;
	int16_t x643 = -1;
	uint8_t x644 = UINT8_MAX;
	static volatile int32_t t138 = 6817;

    t138 = (x641+((x642-x643)>x644));

    if (t138 != -1801) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x645 = 0LL;
	int8_t x646 = 1;
	int16_t x647 = -1;
	uint8_t x648 = 5U;
	volatile int64_t t139 = -72LL;

    t139 = (x645+((x646-x647)>x648));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x649 = 564985487U;
	int64_t x651 = INT64_MIN;
	static volatile int64_t x652 = -42977636579LL;
	uint32_t t140 = 106535951U;

    t140 = (x649+((x650-x651)>x652));

    if (t140 != 564985488U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x653 = -3;
	volatile int32_t x655 = INT32_MAX;
	volatile int16_t x656 = INT16_MAX;
	volatile int32_t t141 = 528105972;

    t141 = (x653+((x654-x655)>x656));

    if (t141 != -3) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x657 = -1;
	static int16_t x658 = INT16_MAX;
	int8_t x660 = INT8_MIN;
	volatile int32_t t142 = -2;

    t142 = (x657+((x658-x659)>x660));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x661 = INT8_MIN;
	int16_t x662 = INT16_MIN;
	int16_t x663 = 2497;
	static uint16_t x664 = 22383U;
	volatile int32_t t143 = -3084038;

    t143 = (x661+((x662-x663)>x664));

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x669 = INT32_MIN;
	uint64_t x670 = 134508LLU;
	int16_t x671 = INT16_MIN;
	int32_t t144 = INT32_MIN;

    t144 = (x669+((x670-x671)>x672));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x674 = INT16_MAX;
	int32_t t145 = -915999902;

    t145 = (x673+((x674-x675)>x676));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x677 = -1;
	uint32_t x678 = 122883U;
	int8_t x680 = INT8_MIN;
	static int32_t t146 = -1481554;

    t146 = (x677+((x678-x679)>x680));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x685 = 231LLU;
	uint8_t x686 = 8U;
	volatile int64_t x687 = INT64_MAX;
	volatile uint16_t x688 = 1239U;
	static volatile uint64_t t147 = 3620873481201LLU;

    t147 = (x685+((x686-x687)>x688));

    if (t147 != 231LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x689 = -1LL;
	uint16_t x690 = 2941U;
	int16_t x691 = -1;
	static volatile int64_t t148 = 1344087684LL;

    t148 = (x689+((x690-x691)>x692));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x695 = -32632;
	uint16_t x696 = 4072U;
	volatile int32_t t149 = 1448;

    t149 = (x693+((x694-x695)>x696));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x697 = -179180205843521860LL;
	int8_t x699 = -1;
	static volatile int32_t x700 = -1;
	static int64_t t150 = -35123181233LL;

    t150 = (x697+((x698-x699)>x700));

    if (t150 != -179180205843521860LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	uint32_t x703 = 28903327U;
	volatile int32_t t151 = -1750126;

    t151 = (x701+((x702-x703)>x704));

    if (t151 != 256) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int8_t x706 = 11;
	static volatile int8_t x707 = INT8_MIN;
	volatile int32_t t152 = 133;

    t152 = (x705+((x706-x707)>x708));

    if (t152 != 65536) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x713 = INT16_MIN;
	static int8_t x715 = INT8_MIN;
	uint64_t x716 = UINT64_MAX;
	static volatile int32_t t153 = 11544215;

    t153 = (x713+((x714-x715)>x716));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x717 = 3141LLU;
	uint16_t x718 = UINT16_MAX;
	volatile int32_t x720 = -1905909;
	volatile uint64_t t154 = 33964153094763LLU;

    t154 = (x717+((x718-x719)>x720));

    if (t154 != 3142LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x724 = UINT32_MAX;
	static volatile int32_t t155 = -217171865;

    t155 = (x721+((x722-x723)>x724));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x725 = 730U;
	int64_t x727 = INT64_MIN;
	static int32_t t156 = -21407609;

    t156 = (x725+((x726-x727)>x728));

    if (t156 != 731) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x729 = 21U;
	int8_t x730 = INT8_MIN;
	uint32_t x731 = 3562U;
	int32_t t157 = -599;

    t157 = (x729+((x730-x731)>x732));

    if (t157 != 22) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x733 = 11378LL;
	uint64_t x736 = 22582801190017816LLU;
	static int64_t t158 = -1269LL;

    t158 = (x733+((x734-x735)>x736));

    if (t158 != 11378LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x737 = 46U;
	uint32_t x738 = UINT32_MAX;
	volatile int8_t x740 = INT8_MAX;
	volatile int32_t t159 = 3;

    t159 = (x737+((x738-x739)>x740));

    if (t159 != 47) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x742 = -1;
	volatile uint16_t x743 = UINT16_MAX;
	static uint64_t x744 = 5520LLU;
	volatile int32_t t160 = -1000263;

    t160 = (x741+((x742-x743)>x744));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile uint32_t x750 = 22216182U;
	int8_t x751 = -2;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t161 = 233801;

    t161 = (x749+((x750-x751)>x752));

    if (t161 != 256) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x753 = 60U;
	int64_t x755 = -1LL;
	int32_t x756 = -48;
	static volatile int32_t t162 = -376;

    t162 = (x753+((x754-x755)>x756));

    if (t162 != 60) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x757 = 55U;
	uint16_t x758 = 3910U;
	int32_t x760 = INT32_MAX;
	int32_t t163 = -11567584;

    t163 = (x757+((x758-x759)>x760));

    if (t163 != 55) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x762 = -1167;
	static int64_t x763 = 5919012LL;
	uint64_t x764 = 30571341385061LLU;
	int32_t t164 = 232005027;

    t164 = (x761+((x762-x763)>x764));

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x765 = -12;
	volatile uint32_t x766 = UINT32_MAX;
	static int16_t x767 = INT16_MIN;
	uint64_t x768 = 51262226363LLU;
	int32_t t165 = -5820;

    t165 = (x765+((x766-x767)>x768));

    if (t165 != -12) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x769 = INT64_MAX;
	int8_t x771 = INT8_MAX;
	volatile uint16_t x772 = 36U;
	int64_t t166 = INT64_MAX;

    t166 = (x769+((x770-x771)>x772));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x773 = 28030645679LLU;
	int16_t x776 = -5;

    t167 = (x773+((x774-x775)>x776));

    if (t167 != 28030645680LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x777 = 693;
	int64_t x779 = -3847633774LL;
	static volatile int8_t x780 = INT8_MIN;
	int32_t t168 = 872902961;

    t168 = (x777+((x778-x779)>x780));

    if (t168 != 694) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x781 = UINT32_MAX;
	int64_t x783 = 70290654316LL;
	uint16_t x784 = 4415U;
	static uint32_t t169 = 7431150U;

    t169 = (x781+((x782-x783)>x784));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x785 = UINT16_MAX;
	int64_t x786 = -1LL;
	int16_t x787 = -1;
	uint8_t x788 = 16U;
	int32_t t170 = -13240169;

    t170 = (x785+((x786-x787)>x788));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x789 = 348;
	static uint8_t x790 = UINT8_MAX;
	int16_t x791 = INT16_MIN;
	int8_t x792 = 7;
	int32_t t171 = -174630;

    t171 = (x789+((x790-x791)>x792));

    if (t171 != 349) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x793 = 173641897LL;
	volatile uint16_t x794 = 1491U;
	uint64_t x795 = 5000LLU;
	uint16_t x796 = UINT16_MAX;
	volatile int64_t t172 = 27991LL;

    t172 = (x793+((x794-x795)>x796));

    if (t172 != 173641898LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x797 = -1;
	uint64_t x798 = UINT64_MAX;
	uint64_t x800 = 2213158675204510075LLU;

    t173 = (x797+((x798-x799)>x800));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int64_t x804 = -278173088690LL;
	int32_t t174 = 19068;

    t174 = (x801+((x802-x803)>x804));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x806 = -442;
	uint16_t x807 = 61U;
	uint32_t x808 = 30950382U;
	uint64_t t175 = 507372LLU;

    t175 = (x805+((x806-x807)>x808));

    if (t175 != 2661870582675LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x809 = INT32_MIN;
	static int16_t x810 = INT16_MAX;
	int8_t x812 = 0;
	volatile int32_t t176 = 4;

    t176 = (x809+((x810-x811)>x812));

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x814 = 59695;
	volatile int8_t x815 = 9;
	int32_t x816 = INT32_MAX;

    t177 = (x813+((x814-x815)>x816));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x821 = INT64_MIN;
	int16_t x822 = -19;
	int64_t x823 = -27531506666LL;
	volatile int8_t x824 = INT8_MIN;
	volatile int64_t t178 = -98566303178462499LL;

    t178 = (x821+((x822-x823)>x824));

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x826 = 1;
	volatile int16_t x827 = INT16_MIN;
	static uint16_t x828 = UINT16_MAX;
	static volatile int32_t t179 = 48735648;

    t179 = (x825+((x826-x827)>x828));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x829 = 3306844279LL;
	int8_t x830 = -5;
	int32_t x832 = -29;
	volatile int64_t t180 = 79LL;

    t180 = (x829+((x830-x831)>x832));

    if (t180 != 3306844279LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = -1;
	static int64_t x834 = -1LL;
	int32_t x835 = 111533226;
	int8_t x836 = INT8_MAX;
	volatile int32_t t181 = 0;

    t181 = (x833+((x834-x835)>x836));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x837 = -1;

    t182 = (x837+((x838-x839)>x840));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x841 = 131439643U;
	int8_t x842 = INT8_MAX;
	int64_t x843 = 477075688LL;
	volatile uint32_t t183 = 2U;

    t183 = (x841+((x842-x843)>x844));

    if (t183 != 131439643U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x845 = INT16_MAX;
	uint16_t x847 = UINT16_MAX;
	int64_t x848 = -1LL;

    t184 = (x845+((x846-x847)>x848));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = -1;
	volatile int16_t x850 = INT16_MAX;
	int8_t x851 = INT8_MIN;
	int32_t x852 = 31804;
	int32_t t185 = -1;

    t185 = (x849+((x850-x851)>x852));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x854 = 409196432U;
	int16_t x855 = 2135;
	static uint64_t x856 = UINT64_MAX;
	volatile int64_t t186 = 43LL;

    t186 = (x853+((x854-x855)>x856));

    if (t186 != 1588274791647126LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x857 = UINT64_MAX;
	uint8_t x860 = 108U;
	volatile uint64_t t187 = UINT64_MAX;

    t187 = (x857+((x858-x859)>x860));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x863 = UINT8_MAX;
	static int8_t x864 = INT8_MIN;
	static volatile int32_t t188 = -35656;

    t188 = (x861+((x862-x863)>x864));

    if (t188 != 14625309) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x865 = INT8_MAX;
	uint32_t x866 = 21906726U;
	int16_t x867 = -43;
	static int8_t x868 = INT8_MIN;
	volatile int32_t t189 = 734;

    t189 = (x865+((x866-x867)>x868));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x869 = INT8_MIN;
	volatile int32_t x870 = INT32_MAX;
	int8_t x871 = 2;
	static uint16_t x872 = UINT16_MAX;
	int32_t t190 = -415;

    t190 = (x869+((x870-x871)>x872));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x873 = 1821;
	uint32_t x874 = UINT32_MAX;
	static int32_t x875 = 1;
	uint64_t x876 = UINT64_MAX;

    t191 = (x873+((x874-x875)>x876));

    if (t191 != 1821) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x877 = UINT16_MAX;
	volatile uint32_t x878 = UINT32_MAX;
	uint16_t x879 = 2133U;
	int8_t x880 = INT8_MIN;
	int32_t t192 = -1;

    t192 = (x877+((x878-x879)>x880));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x881 = UINT32_MAX;
	int32_t x882 = INT32_MIN;
	volatile int64_t x883 = INT64_MIN;
	static int16_t x884 = INT16_MAX;
	uint32_t t193 = 6U;

    t193 = (x881+((x882-x883)>x884));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x885 = INT32_MIN;
	uint8_t x886 = 2U;
	uint16_t x887 = UINT16_MAX;
	static uint64_t x888 = UINT64_MAX;
	volatile int32_t t194 = INT32_MIN;

    t194 = (x885+((x886-x887)>x888));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x889 = INT8_MAX;
	int16_t x891 = -1;
	int8_t x892 = -1;
	int32_t t195 = 0;

    t195 = (x889+((x890-x891)>x892));

    if (t195 != 128) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x893 = 720808U;
	static volatile int16_t x894 = 0;
	uint8_t x895 = UINT8_MAX;
	uint32_t t196 = 218996137U;

    t196 = (x893+((x894-x895)>x896));

    if (t196 != 720808U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x897 = -1;
	static int32_t x898 = INT32_MAX;
	int64_t x899 = -2546538529LL;
	uint32_t x900 = 1107375571U;
	int32_t t197 = -62;

    t197 = (x897+((x898-x899)>x900));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x903 = INT16_MIN;
	volatile uint32_t x904 = 63659U;
	int32_t t198 = 1;

    t198 = (x901+((x902-x903)>x904));

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x907 = INT32_MAX;
	uint8_t x908 = 11U;

    t199 = (x905+((x906-x907)>x908));

    if (t199 != 1) { NG(); } else { ; }
	
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

