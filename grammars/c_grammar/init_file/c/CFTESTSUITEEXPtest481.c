
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

uint16_t x3 = UINT16_MAX;
uint64_t x4 = UINT64_MAX;
volatile int16_t x6 = INT16_MIN;
int64_t x10 = 3112LL;
static volatile uint16_t x11 = 1U;
static volatile int32_t t2 = -3366414;
uint8_t x30 = 1U;
static int32_t t8 = 1808;
int8_t x53 = INT8_MAX;
int32_t x55 = 15;
int32_t x57 = 6;
int8_t x58 = 15;
static int8_t x75 = INT8_MIN;
volatile int16_t x78 = -11;
static uint16_t x85 = 4U;
uint8_t x88 = 0U;
int32_t x92 = INT32_MIN;
int16_t x93 = INT16_MIN;
int16_t x96 = INT16_MIN;
int64_t x105 = -1969868853944LL;
int16_t x108 = 1;
uint16_t x116 = 7839U;
uint8_t x123 = 5U;
uint16_t x126 = 17U;
volatile uint32_t t26 = 79071375U;
static uint32_t x137 = UINT32_MAX;
static int16_t x138 = INT16_MIN;
int8_t x143 = INT8_MAX;
volatile int64_t x156 = 324952574039LL;
int8_t x165 = INT8_MIN;
int16_t x168 = -1;
int64_t x178 = -6329457LL;
volatile uint32_t x201 = 7741797U;
int8_t x202 = INT8_MAX;
volatile int32_t x210 = -409;
int32_t x214 = 814911;
volatile uint32_t x234 = 155U;
static int32_t x236 = INT32_MIN;
uint32_t x249 = UINT32_MAX;
uint8_t x253 = UINT8_MAX;
uint64_t x263 = 379693LLU;
volatile uint32_t t48 = 148212U;
uint32_t x267 = UINT32_MAX;
volatile int32_t x268 = -2050306;
uint64_t x274 = 78569LLU;
uint32_t x306 = 465527195U;
volatile uint32_t x321 = 37597U;
int16_t x331 = -1;
uint64_t x337 = UINT64_MAX;
volatile uint16_t x338 = 1U;
uint64_t t59 = 1052LLU;
int64_t t60 = -64535LL;
int16_t x346 = INT16_MAX;
static volatile int32_t t61 = 124987;
static uint64_t x349 = UINT64_MAX;
int8_t x350 = 1;
int32_t x351 = INT32_MAX;
volatile uint64_t x353 = 32647318334LLU;
uint32_t x359 = 2580335U;
uint64_t x365 = UINT64_MAX;
volatile uint64_t t65 = 21538534079153LLU;
static uint32_t x371 = UINT32_MAX;
uint64_t x372 = 1599955731LLU;
int32_t t66 = 159;
int16_t x382 = INT16_MAX;
int32_t t67 = 1;
volatile int32_t t68 = 171360861;
int64_t x401 = INT64_MIN;
static uint8_t x411 = UINT8_MAX;
volatile uint16_t x425 = UINT16_MAX;
uint8_t x428 = 61U;
static volatile int64_t x429 = INT64_MIN;
volatile int64_t x440 = INT64_MAX;
volatile int64_t x454 = -1LL;
int32_t x455 = INT32_MIN;
volatile int8_t x466 = INT8_MAX;
static uint32_t x477 = 175286143U;
volatile int32_t x480 = 193066;
static int16_t x482 = -1;
static int16_t x521 = 1155;
static int32_t x522 = 39113;
int8_t x523 = INT8_MAX;
int8_t x548 = INT8_MIN;
uint32_t x551 = UINT32_MAX;
int8_t x557 = 45;
static int8_t x566 = INT8_MAX;
int64_t x578 = 1LL;
uint8_t x582 = 7U;
uint16_t x590 = 507U;
uint8_t x595 = 16U;
volatile int8_t x596 = 1;
volatile int32_t t97 = -364;
volatile uint32_t x603 = UINT32_MAX;
uint16_t x608 = 1U;
static uint64_t x622 = UINT64_MAX;
volatile int64_t x629 = INT64_MIN;
static int32_t x634 = 1609362;
int16_t x635 = 42;
uint32_t x639 = 2U;
int16_t x643 = 331;
volatile int16_t x670 = INT16_MAX;
uint32_t t116 = 97U;
static volatile int32_t t117 = 296;
static int32_t t118 = 33192;
static uint16_t x719 = UINT16_MAX;
int32_t t120 = 113834655;
volatile int64_t x725 = INT64_MIN;
int8_t x727 = INT8_MIN;
volatile int64_t t121 = -3379710572358455982LL;
int8_t x729 = INT8_MIN;
int64_t x733 = INT64_MAX;
volatile int64_t x736 = -1LL;
uint16_t x738 = 1U;
static volatile int64_t t125 = -3008057886LL;
volatile uint8_t x746 = 71U;
int8_t x755 = -1;
int16_t x764 = INT16_MIN;
int32_t x774 = 101231;
uint32_t x775 = 59661107U;
static int8_t x780 = INT8_MIN;
int32_t x783 = INT32_MIN;
uint32_t x817 = 9U;
uint32_t t137 = 46651470U;
uint64_t x822 = 0LLU;
uint32_t x823 = 7681813U;
uint32_t x834 = 3U;
static int8_t x844 = INT8_MAX;
static int32_t x846 = 97;
int32_t x853 = -911;
int8_t x856 = -1;
int64_t x860 = INT64_MIN;
volatile uint64_t x864 = UINT64_MAX;
volatile uint64_t x868 = UINT64_MAX;
static int64_t x871 = 2897381849LL;
int8_t x877 = INT8_MAX;
volatile uint8_t x879 = UINT8_MAX;
int8_t x882 = INT8_MIN;
uint32_t x883 = 13322U;
int32_t x884 = -394135368;
volatile int8_t x893 = 6;
int8_t x900 = INT8_MIN;
int8_t x906 = INT8_MAX;
static int32_t x915 = -1;
static int8_t x919 = INT8_MIN;
int32_t t158 = -12820;
int8_t x922 = -1;
int32_t x927 = -979;
int16_t x932 = 1;
int8_t x937 = INT8_MIN;
uint16_t x938 = UINT16_MAX;
static uint8_t x949 = 10U;
int32_t x950 = -3;
static uint32_t x952 = 0U;
uint16_t x953 = 10U;
volatile int8_t x963 = INT8_MIN;
int32_t x964 = INT32_MAX;
int32_t t168 = -10355;
uint16_t x974 = 6U;
uint32_t t171 = 1293U;
int8_t x981 = 0;
volatile int32_t x993 = -1;
uint8_t x998 = 17U;
int64_t x999 = -1LL;
int16_t x1002 = INT16_MIN;
volatile int64_t t176 = 3919540LL;
volatile uint64_t x1009 = UINT64_MAX;
int64_t x1011 = INT64_MIN;
int8_t x1021 = INT8_MAX;
int16_t x1026 = 1;
volatile int8_t x1028 = 1;
int8_t x1031 = 1;
static int16_t x1033 = -1;
int64_t x1038 = -1LL;
volatile int16_t x1044 = INT16_MAX;
uint64_t x1049 = 7LLU;
static volatile int64_t x1050 = 58093332LL;
uint16_t x1051 = UINT16_MAX;
uint32_t x1061 = 5U;
static volatile int8_t x1063 = INT8_MIN;
uint64_t x1064 = 25323658402278LLU;
static uint32_t x1066 = UINT32_MAX;
volatile int32_t t190 = 929300;
uint8_t x1078 = 53U;
uint64_t x1087 = 19885450907LLU;
int16_t x1113 = INT16_MIN;
int32_t x1117 = INT32_MAX;
int16_t x1119 = 1;
volatile int64_t x1120 = 181086LL;
volatile int8_t x1123 = 9;
static int32_t t197 = 55;
int16_t x1136 = 125;


void f0(void) {
    	volatile int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	int32_t t0 = -145838;

    t0 = (x1%((x2*x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = INT32_MIN;
	uint64_t x7 = 224943LLU;
	int64_t x8 = INT64_MAX;
	int32_t t1 = -34444361;

    t1 = (x5%((x6*x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	volatile uint32_t x12 = UINT32_MAX;

    t2 = (x9%((x10*x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;
	static int32_t t3 = -9;

    t3 = (x13%((x14*x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 7;
	volatile uint16_t x18 = UINT16_MAX;
	static volatile int8_t x19 = 7;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -1;

    t4 = (x17%((x18*x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x25 = INT8_MAX;
	uint64_t x26 = 49394LLU;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -3;

    t5 = (x25%((x26*x27)!=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	int8_t x31 = INT8_MAX;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t6 = 13;

    t6 = (x29%((x30*x31)!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 1U;
	int16_t x34 = -2;
	uint64_t x35 = 110393429196LLU;
	volatile uint64_t x36 = UINT64_MAX;
	static int32_t t7 = 206;

    t7 = (x33%((x34*x35)!=x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 1U;
	int8_t x40 = INT8_MAX;

    t8 = (x37%((x38*x39)!=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x54 = -1LL;
	uint32_t x56 = 279U;
	int32_t t9 = -578128;

    t9 = (x53%((x54*x55)!=x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x59 = 370027977U;
	static volatile int32_t x60 = INT32_MIN;
	static int32_t t10 = 0;

    t10 = (x57%((x58*x59)!=x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x61 = 776U;
	int8_t x62 = INT8_MAX;
	int32_t x63 = -271883;
	int8_t x64 = INT8_MIN;
	int32_t t11 = -824368;

    t11 = (x61%((x62*x63)!=x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x73 = -2;
	static uint64_t x74 = 9775488543314LLU;
	uint8_t x76 = 24U;
	static int32_t t12 = 405;

    t12 = (x73%((x74*x75)!=x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x77 = 5LLU;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = -1;
	volatile uint64_t t13 = 5365928197LLU;

    t13 = (x77%((x78*x79)!=x80));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x81 = INT8_MAX;
	int64_t x82 = -408816898750LL;
	static uint64_t x83 = UINT64_MAX;
	int16_t x84 = INT16_MAX;
	static int32_t t14 = 123615;

    t14 = (x81%((x82*x83)!=x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x86 = UINT8_MAX;
	volatile uint16_t x87 = 4U;
	int32_t t15 = 1739;

    t15 = (x85%((x86*x87)!=x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = 15U;
	static volatile int32_t t16 = -249656;

    t16 = (x89%((x90*x91)!=x92));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x94 = -1LL;
	int8_t x95 = -1;
	volatile int32_t t17 = 1;

    t17 = (x93%((x94*x95)!=x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x97 = 45LLU;
	static uint16_t x98 = 112U;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = 4;
	static volatile uint64_t t18 = 217445465LLU;

    t18 = (x97%((x98*x99)!=x100));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	volatile int8_t x103 = INT8_MIN;
	uint32_t x104 = 9U;
	static volatile int32_t t19 = 1;

    t19 = (x101%((x102*x103)!=x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x106 = -33858659;
	static int32_t x107 = -1;
	volatile int64_t t20 = 431365053653272LL;

    t20 = (x105%((x106*x107)!=x108));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x109 = -1;
	int64_t x110 = INT64_MAX;
	int8_t x111 = -1;
	volatile int32_t x112 = -1;
	volatile int32_t t21 = -24045;

    t21 = (x109%((x110*x111)!=x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 14436216U;
	static int8_t x115 = 3;
	int64_t t22 = 733LL;

    t22 = (x113%((x114*x115)!=x116));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = 145746;
	int64_t x120 = -1LL;
	int32_t t23 = -13958;

    t23 = (x117%((x118*x119)!=x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MAX;
	int16_t x122 = -10491;
	uint16_t x124 = 6689U;
	int32_t t24 = 3;

    t24 = (x121%((x122*x123)!=x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = -16786LL;
	int64_t x127 = -1LL;
	uint16_t x128 = 13764U;
	volatile int64_t t25 = -1935078426770288LL;

    t25 = (x125%((x126*x127)!=x128));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 10977U;
	static uint32_t x135 = 430211U;
	int16_t x136 = INT16_MIN;

    t26 = (x133%((x134*x135)!=x136));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = -1;
	uint32_t t27 = 24U;

    t27 = (x137%((x138*x139)!=x140));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	static int32_t x144 = -9693523;
	static int64_t t28 = 31229909291290047LL;

    t28 = (x141%((x142*x143)!=x144));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x145 = 66253615LL;
	int32_t x146 = -1;
	int64_t x147 = 1305869760791477253LL;
	int8_t x148 = INT8_MIN;
	volatile int64_t t29 = -2974LL;

    t29 = (x145%((x146*x147)!=x148));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x149 = INT64_MAX;
	static int64_t x150 = -1LL;
	int64_t x151 = -1LL;
	uint8_t x152 = 20U;
	int64_t t30 = 1LL;

    t30 = (x149%((x150*x151)!=x152));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x153 = 4U;
	uint32_t x154 = 6698326U;
	int16_t x155 = INT16_MIN;
	volatile int32_t t31 = 18070923;

    t31 = (x153%((x154*x155)!=x156));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x157 = INT16_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 0U;
	volatile int8_t x160 = 2;
	int32_t t32 = -7080;

    t32 = (x157%((x158*x159)!=x160));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x166 = 65246;
	static int8_t x167 = 0;
	volatile int32_t t33 = 816;

    t33 = (x165%((x166*x167)!=x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x169 = -3;
	volatile int16_t x170 = -197;
	uint16_t x171 = 6U;
	volatile int64_t x172 = 430165163856LL;
	int32_t t34 = -308512775;

    t34 = (x169%((x170*x171)!=x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x177 = UINT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = -549428154LL;
	int32_t t35 = -1;

    t35 = (x177%((x178*x179)!=x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x203 = -43;
	uint8_t x204 = 13U;
	uint32_t t36 = 580160U;

    t36 = (x201%((x202*x203)!=x204));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x205 = INT32_MIN;
	volatile uint8_t x206 = 0U;
	static int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t37 = 125;

    t37 = (x205%((x206*x207)!=x208));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x209 = 16U;
	volatile int16_t x211 = -1;
	int64_t x212 = INT64_MIN;
	volatile uint32_t t38 = 1198U;

    t38 = (x209%((x210*x211)!=x212));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x213 = 20U;
	int64_t x215 = -185LL;
	volatile int16_t x216 = INT16_MIN;
	volatile uint32_t t39 = 240086400U;

    t39 = (x213%((x214*x215)!=x216));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = INT16_MIN;
	volatile int8_t x222 = INT8_MIN;
	int32_t x223 = 3888;
	int16_t x224 = INT16_MAX;
	static int32_t t40 = 14;

    t40 = (x221%((x222*x223)!=x224));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x233 = INT32_MIN;
	static volatile int8_t x235 = 1;
	int32_t t41 = -333;

    t41 = (x233%((x234*x235)!=x236));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x237 = 1687014756457184LL;
	int64_t x238 = 863LL;
	int32_t x239 = -1;
	static int16_t x240 = 4;
	int64_t t42 = 49LL;

    t42 = (x237%((x238*x239)!=x240));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x241 = 2636337;
	int16_t x242 = -1;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	volatile int32_t t43 = -255;

    t43 = (x241%((x242*x243)!=x244));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = -1;
	int32_t x246 = 2330935;
	static int16_t x247 = -1;
	int16_t x248 = 485;
	volatile int32_t t44 = 662741;

    t44 = (x245%((x246*x247)!=x248));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 7U;
	static int32_t x252 = INT32_MIN;
	static uint32_t t45 = 3985U;

    t45 = (x249%((x250*x251)!=x252));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x254 = -13898;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = -1;
	int32_t t46 = 98314;

    t46 = (x253%((x254*x255)!=x256));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x257 = 18U;
	static uint64_t x258 = 280174853615354213LLU;
	static int64_t x259 = -1LL;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t47 = 9964121U;

    t47 = (x257%((x258*x259)!=x260));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x261 = 191464U;
	uint64_t x262 = 42322984764LLU;
	int16_t x264 = -1;

    t48 = (x261%((x262*x263)!=x264));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x265 = 6711U;
	static uint32_t x266 = 831472U;
	int32_t t49 = -6669993;

    t49 = (x265%((x266*x267)!=x268));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x269 = -1;
	int8_t x270 = 1;
	int32_t x271 = -1;
	uint32_t x272 = 996444U;
	int32_t t50 = -48;

    t50 = (x269%((x270*x271)!=x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x273 = 4U;
	uint8_t x275 = 74U;
	static int16_t x276 = -1;
	volatile int32_t t51 = -85151;

    t51 = (x273%((x274*x275)!=x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x277 = 128U;
	static int16_t x278 = -1;
	volatile uint32_t x279 = 0U;
	uint8_t x280 = 7U;
	int32_t t52 = 9;

    t52 = (x277%((x278*x279)!=x280));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x285 = INT64_MIN;
	static uint32_t x286 = 3U;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MIN;
	int64_t t53 = 26504035203228LL;

    t53 = (x285%((x286*x287)!=x288));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x293 = 72953LL;
	uint16_t x294 = 30287U;
	static int64_t x295 = -1LL;
	uint8_t x296 = UINT8_MAX;
	volatile int64_t t54 = -39981015442LL;

    t54 = (x293%((x294*x295)!=x296));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x298 = 13630U;
	uint32_t x299 = 0U;
	int16_t x300 = INT16_MIN;
	int32_t t55 = 3125758;

    t55 = (x297%((x298*x299)!=x300));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x305 = -4217;
	uint32_t x307 = 917400U;
	volatile int16_t x308 = INT16_MIN;
	int32_t t56 = -1;

    t56 = (x305%((x306*x307)!=x308));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MIN;
	volatile uint16_t x324 = 23U;
	volatile uint32_t t57 = 302U;

    t57 = (x321%((x322*x323)!=x324));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x329 = -16;
	int8_t x330 = -1;
	int16_t x332 = -1;
	volatile int32_t t58 = 589753;

    t58 = (x329%((x330*x331)!=x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x339 = 1;
	int32_t x340 = INT32_MIN;

    t59 = (x337%((x338*x339)!=x340));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x341 = INT64_MIN;
	volatile int8_t x342 = INT8_MAX;
	volatile int16_t x343 = -1;
	static uint8_t x344 = UINT8_MAX;

    t60 = (x341%((x342*x343)!=x344));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x345 = -3;
	static int16_t x347 = INT16_MAX;
	static int64_t x348 = INT64_MAX;

    t61 = (x345%((x346*x347)!=x348));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x352 = 19U;
	uint64_t t62 = 329132LLU;

    t62 = (x349%((x350*x351)!=x352));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x354 = 11U;
	int32_t x355 = -1;
	static uint8_t x356 = 12U;
	uint64_t t63 = 5677245933LLU;

    t63 = (x353%((x354*x355)!=x356));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	static int64_t x360 = INT64_MAX;
	static int64_t t64 = 2244260982371329LL;

    t64 = (x357%((x358*x359)!=x360));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x366 = -6;
	uint16_t x367 = 4U;
	int32_t x368 = INT32_MIN;

    t65 = (x365%((x366*x367)!=x368));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x369 = -241;
	static int32_t x370 = INT32_MIN;

    t66 = (x369%((x370*x371)!=x372));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x381 = 79U;
	uint8_t x383 = 77U;
	int16_t x384 = 14;

    t67 = (x381%((x382*x383)!=x384));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x385 = 4U;
	int32_t x386 = INT32_MIN;
	uint64_t x387 = 69725191733337239LLU;
	volatile uint8_t x388 = 1U;

    t68 = (x385%((x386*x387)!=x388));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x402 = INT16_MIN;
	uint8_t x403 = 2U;
	volatile uint64_t x404 = UINT64_MAX;
	int64_t t69 = -2138091362654391185LL;

    t69 = (x401%((x402*x403)!=x404));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x405 = 1;
	volatile uint8_t x406 = UINT8_MAX;
	int32_t x407 = -3;
	int64_t x408 = INT64_MIN;
	int32_t t70 = -420279;

    t70 = (x405%((x406*x407)!=x408));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x409 = -1;
	uint32_t x410 = 59841U;
	static int64_t x412 = 1012757380832634LL;
	int32_t t71 = 933166;

    t71 = (x409%((x410*x411)!=x412));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x413 = -53;
	int32_t x414 = INT32_MIN;
	volatile int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;
	int32_t t72 = 3;

    t72 = (x413%((x414*x415)!=x416));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x417 = INT16_MAX;
	uint64_t x418 = 19306772784579318LLU;
	uint64_t x419 = 186254806201936110LLU;
	int64_t x420 = INT64_MAX;
	static volatile int32_t t73 = 44054267;

    t73 = (x417%((x418*x419)!=x420));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x421 = 34;
	int64_t x422 = INT64_MIN;
	static uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = 1;
	int32_t t74 = 1057716;

    t74 = (x421%((x422*x423)!=x424));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x426 = 28U;
	int32_t x427 = -49718;
	int32_t t75 = 22547;

    t75 = (x425%((x426*x427)!=x428));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x430 = 19U;
	uint64_t x431 = 51636LLU;
	int16_t x432 = -1;
	volatile int64_t t76 = -151LL;

    t76 = (x429%((x430*x431)!=x432));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x437 = INT8_MIN;
	int64_t x438 = -13436550227LL;
	volatile int32_t x439 = -1;
	int32_t t77 = -1371758;

    t77 = (x437%((x438*x439)!=x440));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x456 = INT64_MAX;
	int32_t t78 = 1741693;

    t78 = (x453%((x454*x455)!=x456));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x465 = INT64_MAX;
	int8_t x467 = 35;
	volatile int32_t x468 = INT32_MAX;
	int64_t t79 = 711330111316LL;

    t79 = (x465%((x466*x467)!=x468));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x478 = 94U;
	static int64_t x479 = 0LL;
	volatile uint32_t t80 = 40U;

    t80 = (x477%((x478*x479)!=x480));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x481 = UINT16_MAX;
	uint16_t x483 = 249U;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t81 = -5949;

    t81 = (x481%((x482*x483)!=x484));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x497 = 125539;
	int8_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	static int8_t x500 = INT8_MIN;
	volatile int32_t t82 = 3;

    t82 = (x497%((x498*x499)!=x500));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x518 = -559509155983024260LL;
	static int8_t x519 = 6;
	int32_t x520 = 45206;
	volatile int32_t t83 = -43643;

    t83 = (x517%((x518*x519)!=x520));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x524 = -5556;
	volatile int32_t t84 = -13;

    t84 = (x521%((x522*x523)!=x524));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	int64_t x530 = -1LL;
	int16_t x531 = INT16_MIN;
	uint16_t x532 = 48U;
	volatile int32_t t85 = -30290509;

    t85 = (x529%((x530*x531)!=x532));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x533 = INT32_MAX;
	int8_t x534 = 1;
	int8_t x535 = -1;
	uint32_t x536 = 1782789U;
	int32_t t86 = -4153772;

    t86 = (x533%((x534*x535)!=x536));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x541 = INT64_MIN;
	uint32_t x542 = 4U;
	int32_t x543 = INT32_MIN;
	volatile uint64_t x544 = 1LLU;
	int64_t t87 = 14412531772LL;

    t87 = (x541%((x542*x543)!=x544));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x545 = INT32_MIN;
	volatile uint32_t x546 = 63399U;
	int8_t x547 = INT8_MAX;
	int32_t t88 = 422916;

    t88 = (x545%((x546*x547)!=x548));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x549 = 115U;
	static volatile int64_t x550 = -1LL;
	int16_t x552 = -1;
	volatile int32_t t89 = -1372;

    t89 = (x549%((x550*x551)!=x552));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x553 = 1;
	uint16_t x554 = 0U;
	volatile int64_t x555 = 5LL;
	int8_t x556 = -1;
	static volatile int32_t t90 = 1;

    t90 = (x553%((x554*x555)!=x556));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x558 = INT8_MAX;
	int64_t x559 = 426LL;
	uint8_t x560 = 14U;
	int32_t t91 = 1;

    t91 = (x557%((x558*x559)!=x560));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x565 = UINT32_MAX;
	uint16_t x567 = UINT16_MAX;
	uint16_t x568 = 1137U;
	volatile uint32_t t92 = 323293246U;

    t92 = (x565%((x566*x567)!=x568));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x573 = UINT64_MAX;
	static uint32_t x574 = UINT32_MAX;
	static int64_t x575 = -1LL;
	uint16_t x576 = UINT16_MAX;
	static uint64_t t93 = 52LLU;

    t93 = (x573%((x574*x575)!=x576));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x577 = 1U;
	int8_t x579 = -1;
	volatile int32_t x580 = 39943;
	static volatile int32_t t94 = 16332209;

    t94 = (x577%((x578*x579)!=x580));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x581 = 41;
	static int8_t x583 = -1;
	volatile int64_t x584 = -1LL;
	static volatile int32_t t95 = 3;

    t95 = (x581%((x582*x583)!=x584));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x589 = -31;
	int64_t x591 = 1547763632786892LL;
	uint32_t x592 = 2686573U;
	int32_t t96 = -309;

    t96 = (x589%((x590*x591)!=x592));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x593 = 1;
	int8_t x594 = -58;

    t97 = (x593%((x594*x595)!=x596));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x597 = UINT8_MAX;
	volatile int64_t x598 = -118416720096LL;
	uint16_t x599 = UINT16_MAX;
	static int8_t x600 = -1;
	int32_t t98 = 910;

    t98 = (x597%((x598*x599)!=x600));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x601 = UINT16_MAX;
	static volatile uint8_t x602 = UINT8_MAX;
	int32_t x604 = INT32_MAX;
	int32_t t99 = -4074254;

    t99 = (x601%((x602*x603)!=x604));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x605 = -410;
	volatile int8_t x606 = INT8_MIN;
	int8_t x607 = INT8_MIN;
	int32_t t100 = -6512514;

    t100 = (x605%((x606*x607)!=x608));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x609 = -24295103LL;
	static volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = -3;
	int64_t x612 = INT64_MIN;
	int64_t t101 = 111LL;

    t101 = (x609%((x610*x611)!=x612));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x613 = -543883513300499024LL;
	static int64_t x614 = -1LL;
	int32_t x615 = INT32_MAX;
	static int32_t x616 = INT32_MAX;
	volatile int64_t t102 = -266309134LL;

    t102 = (x613%((x614*x615)!=x616));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x621 = -1;
	static int64_t x623 = INT64_MIN;
	volatile int16_t x624 = -1;
	volatile int32_t t103 = -497656147;

    t103 = (x621%((x622*x623)!=x624));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x630 = -8;
	static int16_t x631 = INT16_MAX;
	int16_t x632 = -78;
	static int64_t t104 = 94241825825LL;

    t104 = (x629%((x630*x631)!=x632));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x633 = -47;
	uint8_t x636 = UINT8_MAX;
	int32_t t105 = -3;

    t105 = (x633%((x634*x635)!=x636));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x637 = INT8_MAX;
	uint16_t x638 = 32302U;
	static int8_t x640 = INT8_MIN;
	int32_t t106 = -1;

    t106 = (x637%((x638*x639)!=x640));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x641 = INT8_MIN;
	static volatile uint64_t x642 = 122LLU;
	volatile uint32_t x644 = 6307219U;
	static int32_t t107 = 2;

    t107 = (x641%((x642*x643)!=x644));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x649 = INT64_MIN;
	static int64_t x650 = -107807768664LL;
	int8_t x651 = -61;
	uint32_t x652 = UINT32_MAX;
	static int64_t t108 = 52835448124LL;

    t108 = (x649%((x650*x651)!=x652));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x657 = -207;
	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	static volatile int32_t t109 = 1;

    t109 = (x657%((x658*x659)!=x660));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x669 = 94961643U;
	uint32_t x671 = UINT32_MAX;
	uint64_t x672 = 1034017LLU;
	volatile uint32_t t110 = 1012657U;

    t110 = (x669%((x670*x671)!=x672));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x673 = INT8_MIN;
	volatile uint8_t x674 = UINT8_MAX;
	uint16_t x675 = 2313U;
	int32_t x676 = 73519;
	volatile int32_t t111 = -35;

    t111 = (x673%((x674*x675)!=x676));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x677 = -1;
	static int32_t x678 = 2;
	uint64_t x679 = 425462845682569903LLU;
	static int8_t x680 = INT8_MIN;
	static volatile int32_t t112 = -240100;

    t112 = (x677%((x678*x679)!=x680));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x682 = INT8_MIN;
	int8_t x683 = -15;
	uint8_t x684 = UINT8_MAX;
	int32_t t113 = 33;

    t113 = (x681%((x682*x683)!=x684));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x685 = -1;
	uint16_t x686 = 2063U;
	uint64_t x687 = UINT64_MAX;
	int16_t x688 = INT16_MIN;
	int32_t t114 = 182918851;

    t114 = (x685%((x686*x687)!=x688));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x689 = 37U;
	static uint64_t x690 = UINT64_MAX;
	uint8_t x691 = 14U;
	static int16_t x692 = -1;
	volatile int32_t t115 = -2;

    t115 = (x689%((x690*x691)!=x692));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x697 = UINT32_MAX;
	volatile int8_t x698 = INT8_MIN;
	int32_t x699 = -931;
	uint32_t x700 = UINT32_MAX;

    t116 = (x697%((x698*x699)!=x700));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x701 = UINT8_MAX;
	static volatile int8_t x702 = INT8_MIN;
	int8_t x703 = INT8_MAX;
	int16_t x704 = INT16_MIN;

    t117 = (x701%((x702*x703)!=x704));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x709 = 11;
	static volatile uint64_t x710 = 398953868065227LLU;
	int16_t x711 = 1;
	volatile int32_t x712 = INT32_MIN;

    t118 = (x709%((x710*x711)!=x712));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x717 = INT16_MAX;
	uint32_t x718 = 1133U;
	uint8_t x720 = UINT8_MAX;
	int32_t t119 = -977;

    t119 = (x717%((x718*x719)!=x720));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x721 = -1;
	uint8_t x722 = 0U;
	volatile int8_t x723 = 0;
	uint16_t x724 = 30441U;

    t120 = (x721%((x722*x723)!=x724));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x726 = 1U;
	static uint32_t x728 = UINT32_MAX;

    t121 = (x725%((x726*x727)!=x728));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint64_t x730 = 21LLU;
	int32_t x731 = -1;
	uint64_t x732 = 935900129682639LLU;
	static int32_t t122 = -42041;

    t122 = (x729%((x730*x731)!=x732));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x734 = -1LL;
	int16_t x735 = INT16_MAX;
	static int64_t t123 = 3210320241246LL;

    t123 = (x733%((x734*x735)!=x736));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x737 = INT32_MIN;
	int64_t x739 = -1LL;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t124 = -290;

    t124 = (x737%((x738*x739)!=x740));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x741 = INT64_MIN;
	int64_t x742 = -1921824LL;
	int8_t x743 = INT8_MIN;
	uint32_t x744 = UINT32_MAX;

    t125 = (x741%((x742*x743)!=x744));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x745 = -525530275185037LL;
	static uint32_t x747 = UINT32_MAX;
	int32_t x748 = INT32_MAX;
	volatile int64_t t126 = 57007LL;

    t126 = (x745%((x746*x747)!=x748));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x753 = INT32_MAX;
	uint32_t x754 = 207743655U;
	uint16_t x756 = 2U;
	int32_t t127 = 7270698;

    t127 = (x753%((x754*x755)!=x756));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x761 = INT32_MIN;
	uint32_t x762 = 42703U;
	uint64_t x763 = 278638300670679LLU;
	volatile int32_t t128 = 7519392;

    t128 = (x761%((x762*x763)!=x764));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x765 = -1;
	uint8_t x766 = 30U;
	int16_t x767 = -109;
	static volatile int8_t x768 = INT8_MAX;
	int32_t t129 = -37602;

    t129 = (x765%((x766*x767)!=x768));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x773 = 1;
	volatile uint16_t x776 = UINT16_MAX;
	static int32_t t130 = -360608478;

    t130 = (x773%((x774*x775)!=x776));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x777 = 1;
	static int8_t x778 = 1;
	uint16_t x779 = 178U;
	int32_t t131 = -52084471;

    t131 = (x777%((x778*x779)!=x780));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = -1391021572LL;
	static volatile int16_t x784 = INT16_MIN;
	volatile int32_t t132 = -3991336;

    t132 = (x781%((x782*x783)!=x784));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x789 = INT32_MAX;
	int32_t x790 = -1;
	int8_t x791 = INT8_MAX;
	uint64_t x792 = UINT64_MAX;
	volatile int32_t t133 = -140;

    t133 = (x789%((x790*x791)!=x792));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x793 = INT16_MIN;
	uint32_t x794 = 38587U;
	uint32_t x795 = 37391333U;
	static uint8_t x796 = 6U;
	volatile int32_t t134 = -9903343;

    t134 = (x793%((x794*x795)!=x796));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x797 = UINT8_MAX;
	uint64_t x798 = 57118LLU;
	uint16_t x799 = UINT16_MAX;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t135 = -14930;

    t135 = (x797%((x798*x799)!=x800));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile uint16_t x810 = 6U;
	int64_t x811 = 7891LL;
	uint16_t x812 = 14936U;
	volatile uint32_t t136 = 93241U;

    t136 = (x809%((x810*x811)!=x812));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x818 = 53801U;
	static int32_t x819 = -27915448;
	static int16_t x820 = 2;

    t137 = (x817%((x818*x819)!=x820));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x821 = UINT8_MAX;
	int64_t x824 = INT64_MIN;
	volatile int32_t t138 = -1964;

    t138 = (x821%((x822*x823)!=x824));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x825 = UINT64_MAX;
	uint16_t x826 = 209U;
	uint32_t x827 = UINT32_MAX;
	int64_t x828 = INT64_MIN;
	volatile uint64_t t139 = 9517434LLU;

    t139 = (x825%((x826*x827)!=x828));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x829 = 12U;
	static volatile uint8_t x830 = 0U;
	uint8_t x831 = UINT8_MAX;
	int8_t x832 = -1;
	volatile int32_t t140 = -965;

    t140 = (x829%((x830*x831)!=x832));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x833 = INT32_MIN;
	int8_t x835 = INT8_MIN;
	uint64_t x836 = 51682LLU;
	static volatile int32_t t141 = -493072489;

    t141 = (x833%((x834*x835)!=x836));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x841 = UINT8_MAX;
	int64_t x842 = INT64_MAX;
	volatile uint64_t x843 = 1342566714802675487LLU;
	static volatile int32_t t142 = -714;

    t142 = (x841%((x842*x843)!=x844));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x845 = 0U;
	int32_t x847 = -1;
	int16_t x848 = INT16_MIN;
	volatile uint32_t t143 = 530U;

    t143 = (x845%((x846*x847)!=x848));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x849 = INT8_MAX;
	uint8_t x850 = 0U;
	int32_t x851 = INT32_MIN;
	int32_t x852 = INT32_MIN;
	volatile int32_t t144 = -364301;

    t144 = (x849%((x850*x851)!=x852));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x854 = 37;
	static int16_t x855 = INT16_MIN;
	volatile int32_t t145 = 115784835;

    t145 = (x853%((x854*x855)!=x856));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x857 = INT64_MAX;
	int8_t x858 = INT8_MIN;
	int16_t x859 = INT16_MAX;
	int64_t t146 = -510154369922210088LL;

    t146 = (x857%((x858*x859)!=x860));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x861 = 50233U;
	static uint16_t x862 = UINT16_MAX;
	int16_t x863 = 1;
	uint32_t t147 = 127800U;

    t147 = (x861%((x862*x863)!=x864));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x865 = -1;
	int64_t x866 = -1LL;
	int8_t x867 = -1;
	volatile int32_t t148 = -54;

    t148 = (x865%((x866*x867)!=x868));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x869 = UINT64_MAX;
	uint8_t x870 = 108U;
	int64_t x872 = -1LL;
	uint64_t t149 = 491030483LLU;

    t149 = (x869%((x870*x871)!=x872));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x878 = UINT64_MAX;
	int32_t x880 = INT32_MIN;
	volatile int32_t t150 = -18918;

    t150 = (x877%((x878*x879)!=x880));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x881 = INT16_MAX;
	volatile int32_t t151 = 12070377;

    t151 = (x881%((x882*x883)!=x884));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x885 = -1;
	uint64_t x886 = 462007031447LLU;
	static uint32_t x887 = UINT32_MAX;
	uint16_t x888 = UINT16_MAX;
	static int32_t t152 = 95;

    t152 = (x885%((x886*x887)!=x888));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x889 = UINT8_MAX;
	int32_t x890 = -1;
	volatile int16_t x891 = -181;
	volatile int32_t x892 = INT32_MIN;
	static volatile int32_t t153 = 1;

    t153 = (x889%((x890*x891)!=x892));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x894 = -1;
	int16_t x895 = INT16_MIN;
	static int32_t x896 = 4499923;
	int32_t t154 = 1;

    t154 = (x893%((x894*x895)!=x896));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x897 = INT16_MIN;
	static volatile int16_t x898 = 916;
	static uint32_t x899 = UINT32_MAX;
	int32_t t155 = 860781;

    t155 = (x897%((x898*x899)!=x900));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x905 = -9LL;
	static uint32_t x907 = 0U;
	volatile uint16_t x908 = UINT16_MAX;
	int64_t t156 = -898217895476563LL;

    t156 = (x905%((x906*x907)!=x908));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x913 = INT8_MAX;
	volatile int8_t x914 = INT8_MIN;
	volatile int16_t x916 = -1;
	int32_t t157 = -8247;

    t157 = (x913%((x914*x915)!=x916));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x917 = INT8_MIN;
	int8_t x918 = 1;
	int32_t x920 = -8264653;

    t158 = (x917%((x918*x919)!=x920));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x921 = INT8_MAX;
	int16_t x923 = 0;
	volatile int16_t x924 = INT16_MIN;
	int32_t t159 = -105731369;

    t159 = (x921%((x922*x923)!=x924));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x925 = INT64_MIN;
	uint8_t x926 = UINT8_MAX;
	volatile uint8_t x928 = 0U;
	int64_t t160 = 790LL;

    t160 = (x925%((x926*x927)!=x928));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x929 = 1U;
	int16_t x930 = INT16_MIN;
	int8_t x931 = 21;
	int32_t t161 = 867934640;

    t161 = (x929%((x930*x931)!=x932));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x933 = INT16_MAX;
	int16_t x934 = INT16_MAX;
	volatile uint64_t x935 = 4LLU;
	volatile int16_t x936 = -10;
	volatile int32_t t162 = 28;

    t162 = (x933%((x934*x935)!=x936));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x939 = 577U;
	uint16_t x940 = 88U;
	volatile int32_t t163 = 3;

    t163 = (x937%((x938*x939)!=x940));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x945 = UINT16_MAX;
	volatile int8_t x946 = INT8_MIN;
	int8_t x947 = 1;
	static uint32_t x948 = 29973U;
	int32_t t164 = -180924997;

    t164 = (x945%((x946*x947)!=x948));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x951 = INT8_MIN;
	static volatile int32_t t165 = -519;

    t165 = (x949%((x950*x951)!=x952));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x954 = 30U;
	int32_t x955 = 1897512;
	uint32_t x956 = 584608856U;
	volatile int32_t t166 = 1;

    t166 = (x953%((x954*x955)!=x956));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x957 = INT32_MAX;
	uint64_t x958 = UINT64_MAX;
	int32_t x959 = -22510;
	static int32_t x960 = -1;
	static volatile int32_t t167 = 14366770;

    t167 = (x957%((x958*x959)!=x960));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x961 = INT8_MIN;
	int16_t x962 = INT16_MIN;

    t168 = (x961%((x962*x963)!=x964));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x969 = INT16_MIN;
	static int8_t x970 = 1;
	static uint32_t x971 = UINT32_MAX;
	uint16_t x972 = UINT16_MAX;
	int32_t t169 = 402;

    t169 = (x969%((x970*x971)!=x972));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x973 = INT64_MIN;
	uint16_t x975 = UINT16_MAX;
	uint32_t x976 = UINT32_MAX;
	int64_t t170 = 0LL;

    t170 = (x973%((x974*x975)!=x976));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x977 = UINT32_MAX;
	volatile uint16_t x978 = 97U;
	int16_t x979 = 1;
	int64_t x980 = INT64_MAX;

    t171 = (x977%((x978*x979)!=x980));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x982 = 177;
	int8_t x983 = -1;
	uint16_t x984 = UINT16_MAX;
	volatile int32_t t172 = 0;

    t172 = (x981%((x982*x983)!=x984));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x985 = 1LL;
	static uint8_t x986 = 54U;
	uint8_t x987 = 1U;
	static int32_t x988 = -11254073;
	int64_t t173 = -1711500706996LL;

    t173 = (x985%((x986*x987)!=x988));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x994 = UINT64_MAX;
	int8_t x995 = INT8_MAX;
	volatile uint32_t x996 = UINT32_MAX;
	int32_t t174 = -1026221;

    t174 = (x993%((x994*x995)!=x996));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x997 = UINT16_MAX;
	static int32_t x1000 = INT32_MIN;
	volatile int32_t t175 = -19164;

    t175 = (x997%((x998*x999)!=x1000));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1001 = -1029250675LL;
	uint64_t x1003 = 7412954730335932LLU;
	int32_t x1004 = 151;

    t176 = (x1001%((x1002*x1003)!=x1004));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1005 = INT16_MIN;
	int32_t x1006 = -1;
	uint32_t x1007 = 253181U;
	uint64_t x1008 = 35511344754LLU;
	int32_t t177 = 41018975;

    t177 = (x1005%((x1006*x1007)!=x1008));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x1010 = UINT64_MAX;
	int8_t x1012 = 14;
	static uint64_t t178 = 133689LLU;

    t178 = (x1009%((x1010*x1011)!=x1012));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1017 = 1073395807U;
	static int8_t x1018 = 10;
	int32_t x1019 = -1;
	int64_t x1020 = -1LL;
	uint32_t t179 = 1487U;

    t179 = (x1017%((x1018*x1019)!=x1020));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1022 = 71U;
	static volatile int16_t x1023 = INT16_MAX;
	uint32_t x1024 = 208U;
	int32_t t180 = 28072283;

    t180 = (x1021%((x1022*x1023)!=x1024));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1025 = INT64_MIN;
	static uint32_t x1027 = 86U;
	static int64_t t181 = 99523LL;

    t181 = (x1025%((x1026*x1027)!=x1028));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1029 = INT16_MIN;
	uint64_t x1030 = 1712964LLU;
	static volatile int8_t x1032 = -1;
	int32_t t182 = -3061;

    t182 = (x1029%((x1030*x1031)!=x1032));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1034 = -1;
	int32_t x1035 = 2;
	volatile uint8_t x1036 = 3U;
	static int32_t t183 = 11877725;

    t183 = (x1033%((x1034*x1035)!=x1036));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1037 = -424329132782304401LL;
	volatile int64_t x1039 = -242120168926142LL;
	uint16_t x1040 = UINT16_MAX;
	int64_t t184 = -13LL;

    t184 = (x1037%((x1038*x1039)!=x1040));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1041 = 27U;
	int8_t x1042 = -1;
	volatile int64_t x1043 = -14100LL;
	int32_t t185 = -161;

    t185 = (x1041%((x1042*x1043)!=x1044));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1045 = 181835308350LLU;
	static volatile int64_t x1046 = 79080991LL;
	int32_t x1047 = INT32_MIN;
	volatile int8_t x1048 = INT8_MAX;
	static uint64_t t186 = 45118LLU;

    t186 = (x1045%((x1046*x1047)!=x1048));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1052 = INT32_MAX;
	uint64_t t187 = 238415204104192LLU;

    t187 = (x1049%((x1050*x1051)!=x1052));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1062 = -37;
	static uint32_t t188 = 267128U;

    t188 = (x1061%((x1062*x1063)!=x1064));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1065 = INT64_MIN;
	static volatile uint32_t x1067 = 891U;
	uint8_t x1068 = 27U;
	static volatile int64_t t189 = 8044848064646LL;

    t189 = (x1065%((x1066*x1067)!=x1068));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1069 = INT32_MIN;
	uint64_t x1070 = 57753488574LLU;
	int64_t x1071 = -1LL;
	uint16_t x1072 = 27U;

    t190 = (x1069%((x1070*x1071)!=x1072));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x1077 = -305;
	uint16_t x1079 = 3089U;
	static uint64_t x1080 = 259063008261284110LLU;
	volatile int32_t t191 = -14;

    t191 = (x1077%((x1078*x1079)!=x1080));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1085 = -290597964;
	int64_t x1086 = INT64_MAX;
	int16_t x1088 = -3321;
	int32_t t192 = 6376282;

    t192 = (x1085%((x1086*x1087)!=x1088));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1093 = 5U;
	uint64_t x1094 = 195282358536LLU;
	int16_t x1095 = INT16_MAX;
	volatile uint64_t x1096 = 11388682436193LLU;
	int32_t t193 = 47515;

    t193 = (x1093%((x1094*x1095)!=x1096));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1114 = 288609U;
	volatile int8_t x1115 = INT8_MIN;
	uint8_t x1116 = 83U;
	volatile int32_t t194 = -4536560;

    t194 = (x1113%((x1114*x1115)!=x1116));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1118 = INT32_MIN;
	volatile int32_t t195 = -6;

    t195 = (x1117%((x1118*x1119)!=x1120));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1121 = 817U;
	int8_t x1122 = 5;
	uint32_t x1124 = 3928U;
	static int32_t t196 = -427;

    t196 = (x1121%((x1122*x1123)!=x1124));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1125 = -1;
	volatile int8_t x1126 = 6;
	int8_t x1127 = INT8_MIN;
	static int8_t x1128 = -1;

    t197 = (x1125%((x1126*x1127)!=x1128));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x1129 = UINT32_MAX;
	int8_t x1130 = -7;
	uint8_t x1131 = 77U;
	uint64_t x1132 = 1096006LLU;
	volatile uint32_t t198 = 1U;

    t198 = (x1129%((x1130*x1131)!=x1132));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1133 = 620U;
	static int16_t x1134 = 882;
	volatile int16_t x1135 = -1;
	volatile uint32_t t199 = 774023807U;

    t199 = (x1133%((x1134*x1135)!=x1136));

    if (t199 != 0U) { NG(); } else { ; }
	
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

