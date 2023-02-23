
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

static volatile int32_t x11 = INT32_MIN;
static volatile int64_t x14 = -1LL;
int32_t x16 = -20930175;
int64_t x25 = INT64_MIN;
uint32_t x34 = 131850549U;
int64_t x73 = INT64_MAX;
volatile int64_t x75 = 555205LL;
volatile int32_t x82 = INT32_MIN;
int8_t x84 = -1;
int64_t x92 = 6322398242LL;
static int8_t x95 = -8;
volatile int8_t x106 = 31;
uint16_t x107 = UINT16_MAX;
int32_t x109 = INT32_MAX;
int8_t x111 = -1;
int16_t x121 = -78;
uint8_t x123 = UINT8_MAX;
volatile int32_t t22 = 377268453;
int32_t t23 = 26849;
volatile int32_t x141 = -1;
volatile uint8_t x143 = 2U;
int16_t x146 = -1;
int16_t x157 = 11111;
static uint64_t x160 = 573181217297083LLU;
static int32_t x162 = -237038;
uint64_t x178 = 1728708040945766608LLU;
static int32_t t31 = 894;
int64_t x182 = 13397956875196LL;
uint16_t x196 = UINT16_MAX;
static volatile int32_t x199 = 0;
static int32_t t36 = 5916407;
uint64_t x215 = 8291073045866978525LLU;
uint16_t x220 = UINT16_MAX;
volatile int32_t t38 = -612030473;
volatile uint8_t x227 = UINT8_MAX;
static int32_t x231 = -1;
uint8_t x236 = UINT8_MAX;
uint8_t x240 = 1U;
int8_t x242 = 6;
static uint16_t x250 = 35U;
volatile int32_t t44 = -21;
int64_t x261 = 11613LL;
int16_t x262 = INT16_MIN;
int8_t x265 = INT8_MIN;
int32_t t46 = 1;
int16_t x270 = INT16_MAX;
static volatile uint8_t x280 = 62U;
int8_t x294 = -30;
int32_t x302 = -13407001;
int16_t x310 = INT16_MIN;
int32_t t54 = -3;
static uint32_t x318 = 5022U;
int32_t t55 = -9515933;
int8_t x323 = INT8_MAX;
uint64_t x326 = 19LLU;
static int64_t x349 = INT64_MIN;
int64_t x356 = 10LL;
int32_t t62 = 0;
static int8_t x370 = INT8_MAX;
int8_t x376 = -1;
uint64_t x377 = 3761LLU;
int32_t t65 = -209484;
int32_t t66 = -48;
volatile int16_t x392 = 5667;
volatile int32_t x398 = INT32_MIN;
int32_t t70 = -116285;
uint8_t x408 = 44U;
static int64_t x410 = 1LL;
static volatile int8_t x411 = INT8_MAX;
uint64_t x412 = 3156724928833146LLU;
static int32_t t73 = -56887254;
int64_t x415 = 3265860LL;
static int8_t x441 = -37;
int64_t x443 = -1LL;
int32_t t80 = 670;
static volatile int16_t x451 = INT16_MAX;
int16_t x453 = INT16_MIN;
static volatile int16_t x457 = INT16_MAX;
int32_t t83 = 6417147;
int16_t x463 = 611;
int32_t t84 = -44119;
static uint64_t x469 = 40068122064LLU;
volatile int32_t t86 = 3;
uint64_t x474 = 24789LLU;
volatile uint64_t x482 = UINT64_MAX;
static int32_t t88 = 22079;
volatile uint64_t x488 = 17917487619400082LLU;
volatile int32_t t90 = 13944;
int32_t x500 = INT32_MAX;
uint32_t x508 = 491294U;
static uint16_t x510 = 12600U;
int64_t x512 = -1LL;
uint32_t x529 = 114703U;
int16_t x536 = INT16_MIN;
uint16_t x538 = 6U;
volatile int8_t x540 = -1;
int16_t x541 = -2887;
uint64_t x544 = 61135584939130666LLU;
uint32_t x546 = UINT32_MAX;
uint8_t x565 = UINT8_MAX;
int8_t x568 = INT8_MIN;
int16_t x569 = INT16_MAX;
int16_t x573 = INT16_MAX;
int32_t x574 = -3;
int32_t t106 = -133148523;
int64_t x583 = -3LL;
int32_t x584 = INT32_MIN;
int64_t x585 = INT64_MAX;
uint16_t x586 = UINT16_MAX;
int8_t x593 = -1;
static volatile int64_t x597 = -1LL;
int8_t x599 = INT8_MIN;
int64_t x601 = 1522007685LL;
volatile int8_t x602 = -1;
int16_t x603 = INT16_MIN;
static uint8_t x609 = 0U;
volatile int32_t t114 = 2876;
uint32_t x618 = 1310U;
int32_t x623 = INT32_MIN;
int32_t x624 = INT32_MAX;
int64_t x645 = INT64_MAX;
volatile uint8_t x647 = 22U;
volatile int32_t t121 = 29;
int32_t t122 = 31;
int16_t x675 = 1;
int64_t x683 = INT64_MIN;
static int32_t x688 = 10;
static int8_t x693 = INT8_MIN;
volatile int8_t x695 = INT8_MIN;
volatile int32_t t129 = -205167119;
int16_t x713 = INT16_MAX;
int8_t x716 = INT8_MIN;
int16_t x734 = -1;
uint32_t x735 = 322827661U;
static int64_t x738 = 261516063480LL;
int64_t x739 = 0LL;
uint32_t x742 = UINT32_MAX;
static uint32_t x744 = 24U;
int16_t x774 = -1;
static int8_t x780 = INT8_MAX;
volatile int8_t x796 = INT8_MAX;
static int64_t x801 = 97173LL;
uint32_t x803 = UINT32_MAX;
int8_t x816 = INT8_MIN;
uint32_t x820 = 45677447U;
uint64_t x826 = UINT64_MAX;
uint16_t x828 = UINT16_MAX;
int8_t x830 = -1;
int8_t x833 = -1;
static uint8_t x838 = UINT8_MAX;
uint32_t x850 = 267U;
static uint32_t x851 = 10U;
volatile int32_t t152 = -53272995;
int8_t x855 = INT8_MIN;
int32_t t153 = 6589;
uint16_t x863 = 43U;
int64_t x868 = 281170221230LL;
int64_t x873 = 592536269836LL;
static volatile int32_t t159 = -94310;
int8_t x890 = INT8_MIN;
int16_t x893 = INT16_MAX;
int8_t x900 = INT8_MIN;
uint16_t x905 = 3138U;
static volatile int8_t x908 = 18;
int16_t x911 = -100;
volatile int64_t x920 = INT64_MAX;
uint16_t x925 = UINT16_MAX;
uint32_t x932 = UINT32_MAX;
static volatile int32_t t170 = 75000463;
int8_t x938 = -35;
int32_t t171 = 40;
int32_t x942 = INT32_MIN;
volatile uint32_t x943 = 10866U;
static volatile int16_t x947 = INT16_MIN;
int16_t x950 = -1;
uint64_t x953 = 5LLU;
uint16_t x972 = 6375U;
int32_t t176 = 32186552;
uint16_t x979 = 3U;
static int8_t x984 = INT8_MIN;
uint16_t x1000 = 18U;
uint8_t x1005 = 0U;
uint64_t x1017 = UINT64_MAX;
static int32_t x1019 = INT32_MIN;
uint64_t x1034 = 406662LLU;
volatile int32_t t189 = -42824;
volatile int32_t x1039 = -30;
volatile uint8_t x1042 = 14U;
int32_t t192 = -206;
volatile int32_t t194 = 108;
int32_t x1061 = INT32_MIN;
int32_t x1069 = 75127;
uint16_t x1072 = 438U;
uint16_t x1074 = UINT16_MAX;
int16_t x1077 = -5;
int16_t x1080 = INT16_MIN;
uint32_t x1082 = UINT32_MAX;


void f0(void) {
    	int16_t x5 = -91;
	int16_t x6 = INT16_MAX;
	static int64_t x7 = -517LL;
	uint16_t x8 = 1758U;
	static int32_t t0 = 4;

    t0 = (x5>((x6*x7)>x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x9 = INT16_MAX;
	int64_t x10 = -1LL;
	int8_t x12 = -21;
	static int32_t t1 = 580691;

    t1 = (x9>((x10*x11)>x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	volatile int32_t t2 = 139;

    t2 = (x13>((x14*x15)>x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x26 = 74920626458651309LLU;
	int8_t x27 = -2;
	uint64_t x28 = 7LLU;
	int32_t t3 = -384260;

    t3 = (x25>((x26*x27)>x28));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x33 = INT32_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	static uint8_t x36 = 1U;
	int32_t t4 = 26;

    t4 = (x33>((x34*x35)>x36));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x41 = 1LLU;
	int16_t x42 = 0;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = UINT64_MAX;
	int32_t t5 = -70;

    t5 = (x41>((x42*x43)>x44));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x49 = 33336074U;
	int32_t x50 = 5681557;
	int16_t x51 = -1;
	int32_t x52 = 1;
	volatile int32_t t6 = -1;

    t6 = (x49>((x50*x51)>x52));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	uint32_t x55 = 26778688U;
	uint64_t x56 = 2LLU;
	int32_t t7 = 504381725;

    t7 = (x53>((x54*x55)>x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x57 = INT64_MIN;
	int16_t x58 = 5;
	static int8_t x59 = -7;
	int64_t x60 = INT64_MAX;
	volatile int32_t t8 = 6875;

    t8 = (x57>((x58*x59)>x60));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x61 = -3;
	int32_t x62 = 894941;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = 3908;
	volatile int32_t t9 = 127998;

    t9 = (x61>((x62*x63)>x64));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x65 = 3U;
	uint64_t x66 = 3487446209681246690LLU;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -1LL;
	int32_t t10 = 7;

    t10 = (x65>((x66*x67)>x68));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x69 = INT64_MAX;
	int16_t x70 = INT16_MIN;
	int16_t x71 = 0;
	uint32_t x72 = UINT32_MAX;
	int32_t t11 = -8924;

    t11 = (x69>((x70*x71)>x72));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x74 = -1;
	static uint64_t x76 = UINT64_MAX;
	int32_t t12 = -18152;

    t12 = (x73>((x74*x75)>x76));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x81 = 841LLU;
	uint64_t x83 = 189695LLU;
	int32_t t13 = 32127;

    t13 = (x81>((x82*x83)>x84));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x85 = INT32_MIN;
	int32_t x86 = -1;
	int32_t x87 = INT32_MAX;
	int32_t x88 = -1;
	int32_t t14 = 223;

    t14 = (x85>((x86*x87)>x88));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x89 = 43U;
	static uint64_t x90 = 347532828683728LLU;
	static int32_t x91 = 16926340;
	static int32_t t15 = 98;

    t15 = (x89>((x90*x91)>x92));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x93 = 1U;
	int16_t x94 = INT16_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	int32_t t16 = -1257;

    t16 = (x93>((x94*x95)>x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x101 = 1U;
	uint32_t x102 = UINT32_MAX;
	volatile uint8_t x103 = 40U;
	int8_t x104 = 7;
	volatile int32_t t17 = -249568286;

    t17 = (x101>((x102*x103)>x104));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x105 = INT64_MIN;
	static int16_t x108 = -1;
	int32_t t18 = 2;

    t18 = (x105>((x106*x107)>x108));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x110 = 15156;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t19 = 661188431;

    t19 = (x109>((x110*x111)>x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x117 = 1021;
	static int64_t x118 = 4206018LL;
	static int32_t x119 = INT32_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile int32_t t20 = -413;

    t20 = (x117>((x118*x119)>x120));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x122 = 0U;
	int32_t x124 = 23;
	volatile int32_t t21 = 265252303;

    t21 = (x121>((x122*x123)>x124));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = INT32_MAX;
	uint64_t x126 = 2195LLU;
	static uint16_t x127 = UINT16_MAX;
	static int64_t x128 = -30758143990LL;

    t22 = (x125>((x126*x127)>x128));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x133 = 48;
	static uint8_t x134 = 5U;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = INT8_MAX;

    t23 = (x133>((x134*x135)>x136));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x142 = -110554764;
	int16_t x144 = -1;
	int32_t t24 = 3;

    t24 = (x141>((x142*x143)>x144));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x145 = -3101;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = 0;
	static int32_t t25 = -2;

    t25 = (x145>((x146*x147)>x148));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x158 = INT64_MIN;
	uint64_t x159 = 1362LLU;
	int32_t t26 = -12;

    t26 = (x157>((x158*x159)>x160));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = INT32_MIN;
	static int8_t x163 = 2;
	uint8_t x164 = 1U;
	volatile int32_t t27 = -4952075;

    t27 = (x161>((x162*x163)>x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x165 = -26038951316810LL;
	int64_t x166 = INT64_MAX;
	volatile uint64_t x167 = 7316LLU;
	uint8_t x168 = UINT8_MAX;
	int32_t t28 = 51121557;

    t28 = (x165>((x166*x167)>x168));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x169 = INT64_MAX;
	uint64_t x170 = 1328610949118LLU;
	int32_t x171 = INT32_MIN;
	int16_t x172 = -15983;
	static int32_t t29 = -16451;

    t29 = (x169>((x170*x171)>x172));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = 58385LLU;
	static int32_t x176 = -1;
	int32_t t30 = 10010;

    t30 = (x173>((x174*x175)>x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = -1;

    t31 = (x177>((x178*x179)>x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x181 = INT64_MIN;
	static uint64_t x183 = 3LLU;
	int8_t x184 = 0;
	volatile int32_t t32 = 0;

    t32 = (x181>((x182*x183)>x184));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x193 = -1;
	static uint16_t x194 = 29U;
	int32_t x195 = -60018099;
	static int32_t t33 = 2;

    t33 = (x193>((x194*x195)>x196));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x197 = -9;
	uint32_t x198 = UINT32_MAX;
	volatile int64_t x200 = INT64_MIN;
	static volatile int32_t t34 = 847977369;

    t34 = (x197>((x198*x199)>x200));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x201 = 9794U;
	int8_t x202 = -37;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t35 = -23882298;

    t35 = (x201>((x202*x203)>x204));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x205 = -3067745327775LL;
	int16_t x206 = -1722;
	int32_t x207 = -123404;
	int16_t x208 = -1;

    t36 = (x205>((x206*x207)>x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x213 = -10607738915LL;
	volatile int8_t x214 = INT8_MAX;
	uint32_t x216 = 515256397U;
	static volatile int32_t t37 = 14535;

    t37 = (x213>((x214*x215)>x216));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x217 = INT8_MIN;
	uint64_t x218 = 6LLU;
	int32_t x219 = 639;

    t38 = (x217>((x218*x219)>x220));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x225 = -1;
	int64_t x226 = 692327788090026LL;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t39 = 14;

    t39 = (x225>((x226*x227)>x228));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x229 = -1LL;
	volatile int8_t x230 = -55;
	int16_t x232 = INT16_MIN;
	static int32_t t40 = -6332;

    t40 = (x229>((x230*x231)>x232));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x233 = INT8_MIN;
	int16_t x234 = -1;
	uint16_t x235 = 958U;
	volatile int32_t t41 = 0;

    t41 = (x233>((x234*x235)>x236));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x237 = 58;
	int32_t x238 = -1114501;
	static uint32_t x239 = 4436243U;
	volatile int32_t t42 = -181580;

    t42 = (x237>((x238*x239)>x240));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x241 = -1LL;
	int64_t x243 = 8662904633912LL;
	uint64_t x244 = 637888492823569LLU;
	int32_t t43 = -167805853;

    t43 = (x241>((x242*x243)>x244));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x249 = 1U;
	uint64_t x251 = 5623376LLU;
	int32_t x252 = INT32_MIN;

    t44 = (x249>((x250*x251)>x252));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x263 = 7;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t45 = -69;

    t45 = (x261>((x262*x263)>x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = 69729268;
	int64_t x268 = -1LL;

    t46 = (x265>((x266*x267)>x268));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x269 = -1;
	static volatile uint16_t x271 = 346U;
	int32_t x272 = INT32_MIN;
	volatile int32_t t47 = -369;

    t47 = (x269>((x270*x271)>x272));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 90723393263796LLU;
	int32_t t48 = -6;

    t48 = (x277>((x278*x279)>x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = -308948873;
	static int32_t t49 = -3;

    t49 = (x281>((x282*x283)>x284));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x293 = INT64_MIN;
	uint32_t x295 = 462920359U;
	int16_t x296 = 1630;
	static int32_t t50 = 13608709;

    t50 = (x293>((x294*x295)>x296));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x301 = -1LL;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t51 = 221809716;

    t51 = (x301>((x302*x303)>x304));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x305 = 4531651789LLU;
	int32_t x306 = 1;
	int16_t x307 = -1;
	uint16_t x308 = 60U;
	volatile int32_t t52 = 278278112;

    t52 = (x305>((x306*x307)>x308));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x309 = INT64_MAX;
	int8_t x311 = -5;
	int8_t x312 = INT8_MAX;
	int32_t t53 = -267;

    t53 = (x309>((x310*x311)>x312));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MAX;
	uint16_t x315 = 3U;
	int64_t x316 = 1047369LL;

    t54 = (x313>((x314*x315)>x316));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x317 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

    t55 = (x317>((x318*x319)>x320));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x321 = 1U;
	volatile uint64_t x322 = 1970480LLU;
	int16_t x324 = INT16_MIN;
	volatile int32_t t56 = 5;

    t56 = (x321>((x322*x323)>x324));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x325 = 0U;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 3706U;
	volatile int32_t t57 = -371260805;

    t57 = (x325>((x326*x327)>x328));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = 22018996LLU;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = 1;
	int32_t t58 = -53;

    t58 = (x329>((x330*x331)>x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x341 = 3LLU;
	uint8_t x342 = 1U;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t59 = -24001;

    t59 = (x341>((x342*x343)>x344));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x350 = -1;
	static volatile uint16_t x351 = UINT16_MAX;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t60 = 1452075;

    t60 = (x349>((x350*x351)>x352));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x353 = -7299LL;
	uint32_t x354 = 12U;
	uint8_t x355 = UINT8_MAX;
	int32_t t61 = 6794;

    t61 = (x353>((x354*x355)>x356));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x365 = INT32_MIN;
	static int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;

    t62 = (x365>((x366*x367)>x368));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x369 = 72302LL;
	int32_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	static int32_t t63 = -12513;

    t63 = (x369>((x370*x371)>x372));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x373 = -1LL;
	static uint32_t x374 = 6730U;
	uint8_t x375 = 2U;
	int32_t t64 = 17114;

    t64 = (x373>((x374*x375)>x376));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x378 = -1;
	static uint16_t x379 = 7U;
	int16_t x380 = INT16_MIN;

    t65 = (x377>((x378*x379)>x380));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x381 = INT32_MAX;
	static uint8_t x382 = 32U;
	uint8_t x383 = 13U;
	int64_t x384 = -203326721LL;

    t66 = (x381>((x382*x383)>x384));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = -1;
	int64_t x388 = -484239379625LL;
	static volatile int32_t t67 = 7;

    t67 = (x385>((x386*x387)>x388));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x389 = 0U;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	volatile int32_t t68 = -116;

    t68 = (x389>((x390*x391)>x392));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x393 = INT64_MIN;
	int32_t x394 = -1;
	volatile int64_t x395 = -1LL;
	uint8_t x396 = 31U;
	volatile int32_t t69 = -835;

    t69 = (x393>((x394*x395)>x396));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x397 = INT32_MIN;
	uint32_t x399 = UINT32_MAX;
	int8_t x400 = -1;

    t70 = (x397>((x398*x399)>x400));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	volatile int16_t x403 = 0;
	int32_t x404 = 1937;
	int32_t t71 = -2874;

    t71 = (x401>((x402*x403)>x404));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x405 = -373LL;
	volatile int32_t x406 = 491857;
	int16_t x407 = 0;
	volatile int32_t t72 = 156980;

    t72 = (x405>((x406*x407)>x408));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MIN;

    t73 = (x409>((x410*x411)>x412));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x413 = -52;
	int64_t x414 = -78117977139LL;
	static uint8_t x416 = 2U;
	static int32_t t74 = -115499173;

    t74 = (x413>((x414*x415)>x416));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x417 = UINT16_MAX;
	volatile uint16_t x418 = 13U;
	uint64_t x419 = UINT64_MAX;
	static volatile int64_t x420 = INT64_MIN;
	volatile int32_t t75 = 7495851;

    t75 = (x417>((x418*x419)>x420));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = 107531U;
	volatile int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t76 = 364116;

    t76 = (x421>((x422*x423)>x424));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MIN;
	int64_t x431 = -1LL;
	static uint8_t x432 = 1U;
	volatile int32_t t77 = 34050089;

    t77 = (x429>((x430*x431)>x432));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x433 = -4;
	volatile uint64_t x434 = 2LLU;
	int32_t x435 = INT32_MIN;
	int16_t x436 = -37;
	int32_t t78 = -12;

    t78 = (x433>((x434*x435)>x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x442 = INT32_MAX;
	uint32_t x444 = UINT32_MAX;
	int32_t t79 = -489874;

    t79 = (x441>((x442*x443)>x444));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile int16_t x446 = INT16_MIN;
	static volatile int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;

    t80 = (x445>((x446*x447)>x448));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x449 = 3059554U;
	int32_t x450 = -1;
	int8_t x452 = INT8_MIN;
	int32_t t81 = -66;

    t81 = (x449>((x450*x451)>x452));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x454 = -1951278016003606LL;
	int64_t x455 = -70LL;
	static volatile int16_t x456 = -8744;
	int32_t t82 = -6913;

    t82 = (x453>((x454*x455)>x456));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x458 = 1223U;
	uint8_t x459 = UINT8_MAX;
	static uint16_t x460 = 5633U;

    t83 = (x457>((x458*x459)>x460));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x461 = 1;
	uint16_t x462 = 283U;
	volatile uint8_t x464 = UINT8_MAX;

    t84 = (x461>((x462*x463)>x464));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x465 = INT8_MIN;
	static uint8_t x466 = 15U;
	static int8_t x467 = INT8_MIN;
	int64_t x468 = 49028228372523934LL;
	int32_t t85 = -10221;

    t85 = (x465>((x466*x467)>x468));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x470 = INT16_MIN;
	static uint32_t x471 = 2389975U;
	uint64_t x472 = 3818571LLU;

    t86 = (x469>((x470*x471)>x472));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x473 = INT32_MIN;
	static volatile int8_t x475 = -41;
	volatile int8_t x476 = INT8_MIN;
	volatile int32_t t87 = 825;

    t87 = (x473>((x474*x475)>x476));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x481 = 115U;
	int16_t x483 = -1;
	static uint16_t x484 = 146U;

    t88 = (x481>((x482*x483)>x484));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x485 = -12;
	static int16_t x486 = INT16_MAX;
	int16_t x487 = INT16_MIN;
	static volatile int32_t t89 = -498;

    t89 = (x485>((x486*x487)>x488));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x493 = 58U;
	uint8_t x494 = UINT8_MAX;
	int16_t x495 = -1;
	uint8_t x496 = 85U;

    t90 = (x493>((x494*x495)>x496));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x497 = 3;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = UINT32_MAX;
	int32_t t91 = 110;

    t91 = (x497>((x498*x499)>x500));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x505 = INT64_MIN;
	uint32_t x506 = 90U;
	uint32_t x507 = UINT32_MAX;
	volatile int32_t t92 = -63;

    t92 = (x505>((x506*x507)>x508));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x509 = -1;
	int16_t x511 = INT16_MIN;
	static int32_t t93 = 9535029;

    t93 = (x509>((x510*x511)>x512));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x517 = -32;
	static volatile uint32_t x518 = 11002542U;
	volatile int8_t x519 = INT8_MIN;
	static int64_t x520 = INT64_MIN;
	static int32_t t94 = -994161;

    t94 = (x517>((x518*x519)>x520));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x521 = 1610U;
	int16_t x522 = INT16_MAX;
	int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MIN;
	volatile int32_t t95 = -641572053;

    t95 = (x521>((x522*x523)>x524));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x525 = 7815U;
	volatile int16_t x526 = INT16_MIN;
	uint16_t x527 = UINT16_MAX;
	volatile int64_t x528 = 404083005549637LL;
	static volatile int32_t t96 = 2803114;

    t96 = (x525>((x526*x527)>x528));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x530 = 1U;
	volatile int64_t x531 = INT64_MAX;
	int32_t x532 = -1;
	int32_t t97 = -1479278;

    t97 = (x529>((x530*x531)>x532));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x533 = 16046467;
	static uint16_t x534 = 8U;
	int32_t x535 = 36492;
	volatile int32_t t98 = 9594;

    t98 = (x533>((x534*x535)>x536));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x537 = INT32_MAX;
	int8_t x539 = INT8_MIN;
	static int32_t t99 = -96679;

    t99 = (x537>((x538*x539)>x540));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x542 = -237LL;
	volatile uint32_t x543 = 23757332U;
	volatile int32_t t100 = 7879;

    t100 = (x541>((x542*x543)>x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x545 = 71U;
	int16_t x547 = INT16_MAX;
	int32_t x548 = -1;
	int32_t t101 = 2;

    t101 = (x545>((x546*x547)>x548));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x557 = UINT16_MAX;
	uint32_t x558 = 1702760U;
	int64_t x559 = -1LL;
	int8_t x560 = -24;
	int32_t t102 = 744;

    t102 = (x557>((x558*x559)>x560));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x561 = UINT8_MAX;
	uint8_t x562 = 3U;
	int8_t x563 = INT8_MIN;
	int64_t x564 = -1LL;
	int32_t t103 = 749863;

    t103 = (x561>((x562*x563)>x564));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x566 = UINT16_MAX;
	int16_t x567 = INT16_MAX;
	volatile int32_t t104 = 1;

    t104 = (x565>((x566*x567)>x568));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x570 = 106U;
	uint32_t x571 = UINT32_MAX;
	volatile uint8_t x572 = 2U;
	int32_t t105 = -12829;

    t105 = (x569>((x570*x571)>x572));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x575 = 45U;
	uint16_t x576 = UINT16_MAX;

    t106 = (x573>((x574*x575)>x576));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x581 = INT32_MAX;
	static volatile uint8_t x582 = UINT8_MAX;
	int32_t t107 = -715;

    t107 = (x581>((x582*x583)>x584));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x587 = UINT32_MAX;
	static int32_t x588 = 16266;
	int32_t t108 = -506189918;

    t108 = (x585>((x586*x587)>x588));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x589 = INT64_MAX;
	int64_t x590 = -1LL;
	static volatile uint8_t x591 = 22U;
	uint8_t x592 = 0U;
	int32_t t109 = 858562126;

    t109 = (x589>((x590*x591)>x592));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x594 = 1U;
	volatile uint64_t x595 = UINT64_MAX;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t110 = 1730;

    t110 = (x593>((x594*x595)>x596));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x598 = 20074395370210427LLU;
	int8_t x600 = -48;
	int32_t t111 = 14075140;

    t111 = (x597>((x598*x599)>x600));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x604 = 22535U;
	int32_t t112 = 85650;

    t112 = (x601>((x602*x603)>x604));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	volatile uint32_t x606 = UINT32_MAX;
	uint8_t x607 = 9U;
	volatile uint16_t x608 = 31476U;
	volatile int32_t t113 = 13866;

    t113 = (x605>((x606*x607)>x608));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x610 = INT16_MAX;
	static int16_t x611 = INT16_MAX;
	int64_t x612 = 1LL;

    t114 = (x609>((x610*x611)>x612));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x613 = -4816;
	volatile int64_t x614 = INT64_MAX;
	uint32_t x615 = 0U;
	int8_t x616 = -1;
	int32_t t115 = 65359;

    t115 = (x613>((x614*x615)>x616));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x619 = INT32_MIN;
	int32_t x620 = -1;
	static int32_t t116 = -31794;

    t116 = (x617>((x618*x619)>x620));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x621 = 60520522;
	int64_t x622 = -1LL;
	int32_t t117 = 42464437;

    t117 = (x621>((x622*x623)>x624));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x629 = UINT16_MAX;
	int8_t x630 = 2;
	int8_t x631 = 0;
	static int32_t x632 = -21790;
	static volatile int32_t t118 = 236098641;

    t118 = (x629>((x630*x631)>x632));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x637 = -889;
	int64_t x638 = 79489241500217LL;
	static volatile uint16_t x639 = UINT16_MAX;
	volatile uint32_t x640 = UINT32_MAX;
	int32_t t119 = -865598;

    t119 = (x637>((x638*x639)>x640));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x646 = 3808528380639LLU;
	int32_t x648 = INT32_MIN;
	int32_t t120 = 511471;

    t120 = (x645>((x646*x647)>x648));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x649 = 2179807U;
	volatile int8_t x650 = INT8_MAX;
	int32_t x651 = -237;
	int16_t x652 = -74;

    t121 = (x649>((x650*x651)>x652));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x665 = 2U;
	int64_t x666 = -1LL;
	int64_t x667 = -7835993273LL;
	static volatile int8_t x668 = -1;

    t122 = (x665>((x666*x667)>x668));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x673 = -28103035;
	static int64_t x674 = 15248540376LL;
	int16_t x676 = -1542;
	volatile int32_t t123 = -1504896;

    t123 = (x673>((x674*x675)>x676));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x677 = 0;
	static int16_t x678 = INT16_MIN;
	volatile uint64_t x679 = UINT64_MAX;
	int64_t x680 = INT64_MIN;
	static int32_t t124 = -3439;

    t124 = (x677>((x678*x679)>x680));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x681 = INT32_MAX;
	volatile uint32_t x682 = 1U;
	uint64_t x684 = 8642511493755LLU;
	int32_t t125 = -26;

    t125 = (x681>((x682*x683)>x684));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x685 = 735U;
	int8_t x686 = -1;
	int16_t x687 = INT16_MIN;
	static volatile int32_t t126 = -258;

    t126 = (x685>((x686*x687)>x688));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x689 = -53711317489619452LL;
	uint16_t x690 = 9U;
	uint64_t x691 = UINT64_MAX;
	volatile uint8_t x692 = 61U;
	volatile int32_t t127 = -1;

    t127 = (x689>((x690*x691)>x692));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x694 = 3365;
	int64_t x696 = -1558LL;
	int32_t t128 = 1;

    t128 = (x693>((x694*x695)>x696));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x701 = 20940;
	uint64_t x702 = 2693153LLU;
	int64_t x703 = 369121076746791LL;
	uint32_t x704 = 56U;

    t129 = (x701>((x702*x703)>x704));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x714 = INT16_MIN;
	uint16_t x715 = 21596U;
	static int32_t t130 = 121682;

    t130 = (x713>((x714*x715)>x716));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x729 = -1;
	volatile int64_t x730 = -102833LL;
	volatile int16_t x731 = INT16_MAX;
	volatile uint8_t x732 = 53U;
	static volatile int32_t t131 = -5;

    t131 = (x729>((x730*x731)>x732));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x733 = 27U;
	int64_t x736 = -1LL;
	volatile int32_t t132 = -35198;

    t132 = (x733>((x734*x735)>x736));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x737 = UINT64_MAX;
	int8_t x740 = INT8_MAX;
	volatile int32_t t133 = -298595070;

    t133 = (x737>((x738*x739)>x740));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x741 = 1;
	uint8_t x743 = UINT8_MAX;
	int32_t t134 = -92;

    t134 = (x741>((x742*x743)>x744));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x745 = 90U;
	uint16_t x746 = UINT16_MAX;
	int32_t x747 = -5523;
	int16_t x748 = INT16_MIN;
	volatile int32_t t135 = -14992;

    t135 = (x745>((x746*x747)>x748));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x749 = 214724466014767470LL;
	volatile int16_t x750 = -1;
	int8_t x751 = -15;
	int16_t x752 = INT16_MIN;
	volatile int32_t t136 = 46408966;

    t136 = (x749>((x750*x751)>x752));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	static volatile uint16_t x763 = 6U;
	static uint64_t x764 = 1455689107272LLU;
	int32_t t137 = -51;

    t137 = (x761>((x762*x763)>x764));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x769 = -29418929549807LL;
	static volatile uint8_t x770 = UINT8_MAX;
	int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	static int32_t t138 = 997;

    t138 = (x769>((x770*x771)>x772));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x773 = -1;
	static volatile int32_t x775 = INT32_MAX;
	int32_t x776 = INT32_MAX;
	int32_t t139 = -1029381857;

    t139 = (x773>((x774*x775)>x776));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x777 = 361;
	volatile int8_t x778 = INT8_MIN;
	static volatile uint8_t x779 = UINT8_MAX;
	int32_t t140 = -233991491;

    t140 = (x777>((x778*x779)>x780));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x793 = 1;
	int32_t x794 = -1;
	static volatile int8_t x795 = INT8_MIN;
	volatile int32_t t141 = 3339139;

    t141 = (x793>((x794*x795)>x796));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x802 = INT32_MIN;
	uint8_t x804 = UINT8_MAX;
	int32_t t142 = -10179222;

    t142 = (x801>((x802*x803)>x804));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x810 = INT32_MIN;
	uint32_t x811 = UINT32_MAX;
	int64_t x812 = -1LL;
	int32_t t143 = 113523;

    t143 = (x809>((x810*x811)>x812));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x813 = 2378649087LL;
	int16_t x814 = -5443;
	int8_t x815 = INT8_MIN;
	int32_t t144 = 104698;

    t144 = (x813>((x814*x815)>x816));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x817 = -1;
	static uint64_t x818 = 11LLU;
	uint16_t x819 = 3U;
	int32_t t145 = 105449832;

    t145 = (x817>((x818*x819)>x820));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x821 = UINT64_MAX;
	int8_t x822 = -53;
	static volatile uint8_t x823 = 5U;
	volatile uint64_t x824 = 990022861LLU;
	int32_t t146 = 120;

    t146 = (x821>((x822*x823)>x824));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x825 = 520U;
	volatile uint8_t x827 = UINT8_MAX;
	volatile int32_t t147 = 2270;

    t147 = (x825>((x826*x827)>x828));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x831 = -6576;
	uint16_t x832 = 1113U;
	volatile int32_t t148 = -1;

    t148 = (x829>((x830*x831)>x832));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x834 = -191;
	int8_t x835 = -1;
	static int64_t x836 = INT64_MAX;
	volatile int32_t t149 = -123653672;

    t149 = (x833>((x834*x835)>x836));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x837 = 21U;
	int8_t x839 = INT8_MIN;
	uint32_t x840 = UINT32_MAX;
	int32_t t150 = 1086;

    t150 = (x837>((x838*x839)>x840));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x841 = -10869;
	int8_t x842 = INT8_MIN;
	uint8_t x843 = 3U;
	int32_t x844 = -1;
	volatile int32_t t151 = -3731710;

    t151 = (x841>((x842*x843)>x844));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x849 = -1;
	uint8_t x852 = UINT8_MAX;

    t152 = (x849>((x850*x851)>x852));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x853 = -12;
	static int16_t x854 = INT16_MIN;
	volatile int64_t x856 = 15530571455161LL;

    t153 = (x853>((x854*x855)>x856));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x861 = 33300987330LLU;
	volatile uint64_t x862 = 409507842803LLU;
	int8_t x864 = 0;
	volatile int32_t t154 = -1;

    t154 = (x861>((x862*x863)>x864));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x865 = INT64_MAX;
	int32_t x866 = -14466;
	uint8_t x867 = 1U;
	volatile int32_t t155 = -14958;

    t155 = (x865>((x866*x867)>x868));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x869 = -1;
	uint16_t x870 = 116U;
	int16_t x871 = INT16_MAX;
	static uint64_t x872 = 12348224821984717LLU;
	volatile int32_t t156 = 460862198;

    t156 = (x869>((x870*x871)>x872));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x874 = 314107981U;
	uint8_t x875 = UINT8_MAX;
	int64_t x876 = INT64_MIN;
	volatile int32_t t157 = -833;

    t157 = (x873>((x874*x875)>x876));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x877 = -1;
	static volatile int64_t x878 = INT64_MIN;
	uint64_t x879 = 419967240LLU;
	volatile int32_t x880 = INT32_MAX;
	int32_t t158 = 16694;

    t158 = (x877>((x878*x879)>x880));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x881 = INT16_MIN;
	int8_t x882 = 24;
	uint8_t x883 = UINT8_MAX;
	volatile int8_t x884 = -1;

    t159 = (x881>((x882*x883)>x884));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x885 = -1;
	int32_t x886 = -1;
	int32_t x887 = 2272049;
	volatile uint8_t x888 = 14U;
	volatile int32_t t160 = 0;

    t160 = (x885>((x886*x887)>x888));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x889 = INT32_MAX;
	int32_t x891 = -17;
	int32_t x892 = -11773046;
	static int32_t t161 = 18687;

    t161 = (x889>((x890*x891)>x892));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x894 = -1LL;
	int16_t x895 = -12;
	static int32_t x896 = -1;
	volatile int32_t t162 = -25;

    t162 = (x893>((x894*x895)>x896));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x897 = 1041115695372LLU;
	uint16_t x898 = UINT16_MAX;
	int16_t x899 = INT16_MAX;
	volatile int32_t t163 = 482743;

    t163 = (x897>((x898*x899)>x900));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x901 = 14U;
	int8_t x902 = 3;
	int8_t x903 = -1;
	int16_t x904 = -1;
	static int32_t t164 = -849612;

    t164 = (x901>((x902*x903)>x904));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x906 = INT16_MIN;
	int16_t x907 = -1;
	volatile int32_t t165 = -923744;

    t165 = (x905>((x906*x907)>x908));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x909 = UINT16_MAX;
	int64_t x910 = 109264LL;
	int64_t x912 = -216358LL;
	static int32_t t166 = -415020238;

    t166 = (x909>((x910*x911)>x912));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x917 = INT32_MAX;
	uint64_t x918 = UINT64_MAX;
	volatile uint8_t x919 = 93U;
	volatile int32_t t167 = -526;

    t167 = (x917>((x918*x919)>x920));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x921 = -1;
	volatile int64_t x922 = -1LL;
	int8_t x923 = INT8_MAX;
	int64_t x924 = -10946281836388LL;
	static volatile int32_t t168 = -592128;

    t168 = (x921>((x922*x923)>x924));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x926 = 50U;
	int8_t x927 = INT8_MAX;
	int16_t x928 = -1;
	int32_t t169 = -112;

    t169 = (x925>((x926*x927)>x928));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x929 = UINT32_MAX;
	int16_t x930 = 99;
	int32_t x931 = -1;

    t170 = (x929>((x930*x931)>x932));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x937 = 69U;
	int8_t x939 = INT8_MIN;
	int64_t x940 = -1LL;

    t171 = (x937>((x938*x939)>x940));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x941 = 1U;
	static int8_t x944 = -5;
	int32_t t172 = 12956;

    t172 = (x941>((x942*x943)>x944));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x945 = -1LL;
	volatile int16_t x946 = -606;
	int64_t x948 = -1LL;
	volatile int32_t t173 = -19186;

    t173 = (x945>((x946*x947)>x948));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x949 = 387287LLU;
	int32_t x951 = -936;
	int32_t x952 = 335;
	int32_t t174 = 1;

    t174 = (x949>((x950*x951)>x952));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x954 = 0;
	int8_t x955 = INT8_MIN;
	volatile int8_t x956 = -1;
	volatile int32_t t175 = -11;

    t175 = (x953>((x954*x955)>x956));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x969 = INT32_MIN;
	int16_t x970 = -1;
	static int16_t x971 = -1;

    t176 = (x969>((x970*x971)>x972));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x973 = 2117401LLU;
	volatile int16_t x974 = INT16_MIN;
	int16_t x975 = -1;
	uint64_t x976 = 14527767LLU;
	volatile int32_t t177 = 6;

    t177 = (x973>((x974*x975)>x976));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x977 = INT8_MIN;
	uint64_t x978 = 0LLU;
	int64_t x980 = -1LL;
	int32_t t178 = -11;

    t178 = (x977>((x978*x979)>x980));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x981 = 452284;
	uint8_t x982 = 1U;
	volatile int64_t x983 = -1LL;
	volatile int32_t t179 = 3;

    t179 = (x981>((x982*x983)>x984));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x989 = INT64_MIN;
	uint16_t x990 = 10U;
	int8_t x991 = 0;
	int64_t x992 = -224534475LL;
	int32_t t180 = -106;

    t180 = (x989>((x990*x991)>x992));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x997 = INT32_MIN;
	int32_t x998 = 610909;
	static int8_t x999 = -3;
	static int32_t t181 = -471624;

    t181 = (x997>((x998*x999)>x1000));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1001 = UINT64_MAX;
	volatile uint32_t x1002 = UINT32_MAX;
	int8_t x1003 = -1;
	int64_t x1004 = -3LL;
	volatile int32_t t182 = -280;

    t182 = (x1001>((x1002*x1003)>x1004));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1006 = -1LL;
	int16_t x1007 = 39;
	int8_t x1008 = -1;
	int32_t t183 = -27481;

    t183 = (x1005>((x1006*x1007)>x1008));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1009 = INT16_MIN;
	int8_t x1010 = 40;
	int64_t x1011 = 50LL;
	static int16_t x1012 = INT16_MIN;
	int32_t t184 = 2;

    t184 = (x1009>((x1010*x1011)>x1012));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1018 = 56109980U;
	uint32_t x1020 = UINT32_MAX;
	int32_t t185 = -1158;

    t185 = (x1017>((x1018*x1019)>x1020));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1021 = 3U;
	uint64_t x1022 = UINT64_MAX;
	uint8_t x1023 = UINT8_MAX;
	int64_t x1024 = INT64_MAX;
	int32_t t186 = 1;

    t186 = (x1021>((x1022*x1023)>x1024));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1025 = UINT32_MAX;
	int16_t x1026 = 1;
	volatile int8_t x1027 = INT8_MAX;
	uint32_t x1028 = UINT32_MAX;
	volatile int32_t t187 = -747959591;

    t187 = (x1025>((x1026*x1027)>x1028));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1029 = INT16_MIN;
	static volatile int16_t x1030 = -1;
	uint32_t x1031 = 93U;
	uint8_t x1032 = 6U;
	static int32_t t188 = 10;

    t188 = (x1029>((x1030*x1031)>x1032));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1033 = INT32_MIN;
	volatile int64_t x1035 = INT64_MIN;
	volatile int16_t x1036 = -1;

    t189 = (x1033>((x1034*x1035)>x1036));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1037 = 45981143702896155LL;
	static volatile int16_t x1038 = 55;
	uint16_t x1040 = 29U;
	int32_t t190 = -888296;

    t190 = (x1037>((x1038*x1039)>x1040));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1041 = INT16_MIN;
	int16_t x1043 = -1;
	uint8_t x1044 = UINT8_MAX;
	static int32_t t191 = 1;

    t191 = (x1041>((x1042*x1043)>x1044));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1049 = INT8_MAX;
	volatile int8_t x1050 = INT8_MAX;
	int16_t x1051 = 37;
	volatile int32_t x1052 = -1;

    t192 = (x1049>((x1050*x1051)>x1052));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1053 = INT8_MIN;
	uint16_t x1054 = 29016U;
	int16_t x1055 = INT16_MAX;
	int16_t x1056 = -1;
	int32_t t193 = -175298;

    t193 = (x1053>((x1054*x1055)>x1056));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint8_t x1057 = 9U;
	static int16_t x1058 = -1;
	int8_t x1059 = -1;
	static int16_t x1060 = INT16_MIN;

    t194 = (x1057>((x1058*x1059)>x1060));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1062 = -1;
	uint16_t x1063 = 57U;
	int8_t x1064 = -1;
	static int32_t t195 = -45717;

    t195 = (x1061>((x1062*x1063)>x1064));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1070 = UINT64_MAX;
	int32_t x1071 = -18378;
	int32_t t196 = -102;

    t196 = (x1069>((x1070*x1071)>x1072));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1073 = -1;
	int8_t x1075 = -17;
	volatile int8_t x1076 = INT8_MIN;
	static volatile int32_t t197 = 679079;

    t197 = (x1073>((x1074*x1075)>x1076));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1078 = INT8_MAX;
	uint16_t x1079 = 31U;
	int32_t t198 = 2091858;

    t198 = (x1077>((x1078*x1079)>x1080));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1081 = -1;
	static int64_t x1083 = -519271LL;
	volatile uint16_t x1084 = UINT16_MAX;
	static volatile int32_t t199 = -622304980;

    t199 = (x1081>((x1082*x1083)>x1084));

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

