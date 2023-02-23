
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

static int32_t x4 = -1;
int32_t x6 = INT32_MIN;
static volatile int32_t t1 = 298119;
uint32_t x11 = 4213U;
static int16_t x19 = -1;
int16_t x20 = INT16_MIN;
int32_t x28 = -1;
volatile int8_t x30 = INT8_MIN;
int64_t x50 = 26669870901389184LL;
volatile int32_t t11 = 7637;
int16_t x62 = 331;
int16_t x63 = 260;
volatile int8_t x66 = -1;
int32_t t16 = 150407417;
int8_t x87 = INT8_MIN;
int32_t t17 = -48613753;
uint8_t x91 = 0U;
static volatile int32_t t18 = 473993;
int32_t t20 = -12533;
uint16_t x127 = 1629U;
uint32_t x132 = 128731665U;
static int16_t x143 = INT16_MAX;
int64_t x144 = INT64_MIN;
int64_t x145 = -8135190951LL;
volatile uint16_t x147 = 0U;
uint8_t x164 = 5U;
volatile int16_t x166 = INT16_MIN;
int16_t x178 = 1;
int32_t x181 = INT32_MIN;
uint32_t x183 = 1553U;
static volatile int16_t x192 = -1;
static volatile int32_t t35 = 95114;
int32_t x201 = INT32_MAX;
int16_t x202 = -1;
int8_t x203 = INT8_MAX;
volatile uint8_t x204 = 5U;
int16_t x210 = INT16_MIN;
static int16_t x233 = -7418;
volatile uint8_t x234 = UINT8_MAX;
int8_t x242 = INT8_MIN;
int8_t x258 = -3;
int32_t t46 = 14;
int16_t x273 = 50;
uint8_t x277 = 15U;
static int16_t x291 = INT16_MIN;
uint8_t x295 = 11U;
uint64_t x297 = 869588184LLU;
static int32_t x298 = -40514;
static int8_t x301 = INT8_MAX;
static uint64_t x303 = UINT64_MAX;
int8_t x305 = -1;
int8_t x306 = -15;
int16_t x307 = 0;
static int32_t x308 = -1;
uint16_t x323 = 13901U;
volatile int32_t t57 = 7;
int32_t x326 = -184190;
int32_t x329 = -3;
uint64_t x334 = 5544017123915LLU;
volatile uint32_t x336 = UINT32_MAX;
int8_t x338 = 1;
volatile int16_t x339 = INT16_MAX;
volatile int32_t t62 = -1585;
int32_t x361 = INT32_MIN;
int8_t x363 = -1;
static uint16_t x364 = UINT16_MAX;
int32_t x365 = 453;
int8_t x369 = -1;
int32_t x372 = -1;
uint8_t x378 = 108U;
static int16_t x379 = INT16_MIN;
static uint8_t x383 = 0U;
volatile int8_t x389 = -1;
uint64_t x390 = UINT64_MAX;
int32_t t69 = 1524150;
static int32_t x397 = -1;
uint32_t x398 = 6U;
int16_t x399 = -1;
int16_t x401 = 76;
int64_t x403 = -530743725LL;
int8_t x405 = INT8_MIN;
uint8_t x415 = UINT8_MAX;
uint16_t x419 = UINT16_MAX;
static int32_t t74 = 3;
int16_t x421 = INT16_MIN;
uint16_t x425 = 31U;
uint16_t x433 = UINT16_MAX;
int64_t x436 = 14342LL;
int8_t x444 = INT8_MIN;
static volatile uint16_t x446 = 2U;
uint16_t x465 = UINT16_MAX;
static int32_t x468 = 554;
int32_t t81 = 82875;
volatile int16_t x483 = -1;
int32_t x488 = -1;
static int32_t t85 = 6102;
int32_t t86 = -14534550;
static int16_t x493 = 4;
volatile int32_t x501 = -205;
static int64_t x504 = -268206LL;
uint16_t x517 = 0U;
int64_t x541 = -146519584995693LL;
int8_t x555 = INT8_MAX;
volatile int32_t t97 = 27;
volatile int32_t x561 = -1;
int32_t x564 = INT32_MIN;
int32_t x568 = INT32_MAX;
volatile int32_t t99 = 262897554;
int8_t x573 = INT8_MIN;
uint8_t x582 = 115U;
int16_t x592 = 4403;
int32_t x597 = -1;
static uint64_t x599 = 6007LLU;
int32_t t106 = 51817;
volatile uint32_t x602 = 2018U;
int16_t x603 = 51;
volatile int8_t x610 = 0;
static uint64_t x619 = 1655737LLU;
uint64_t x632 = UINT64_MAX;
int32_t t112 = 1007;
volatile uint32_t x634 = 620096U;
int8_t x636 = -1;
int32_t t115 = 2595080;
int32_t t116 = 14;
uint64_t x662 = UINT64_MAX;
uint16_t x694 = UINT16_MAX;
uint64_t x699 = 5285205LLU;
int8_t x709 = -7;
uint8_t x716 = UINT8_MAX;
uint32_t x719 = 2237843U;
static int8_t x720 = -1;
volatile int8_t x721 = INT8_MIN;
static uint8_t x748 = 30U;
int32_t t130 = -2714;
uint8_t x767 = 116U;
volatile int8_t x770 = -15;
int8_t x772 = INT8_MAX;
volatile uint8_t x780 = UINT8_MAX;
static volatile uint32_t x784 = 31236117U;
int32_t x785 = -1;
int8_t x788 = INT8_MIN;
uint8_t x796 = UINT8_MAX;
volatile int32_t t137 = -101;
int32_t t138 = -1441200;
volatile int32_t t139 = 824538549;
int16_t x826 = INT16_MIN;
int64_t x834 = -1LL;
volatile uint32_t x849 = 1299490U;
int32_t x851 = -931;
volatile int32_t t147 = 3;
volatile int64_t x862 = 1LL;
int32_t t149 = 555154;
uint16_t x878 = UINT16_MAX;
int16_t x879 = -14967;
volatile int8_t x882 = INT8_MAX;
int8_t x883 = INT8_MAX;
int32_t t152 = -237;
int64_t x885 = INT64_MIN;
int8_t x886 = INT8_MIN;
static int32_t x888 = INT32_MAX;
int64_t x889 = INT64_MIN;
int16_t x890 = -10429;
uint8_t x891 = UINT8_MAX;
static int32_t x896 = 473365;
int16_t x902 = INT16_MAX;
volatile uint64_t x915 = 201359891440LLU;
static int64_t x916 = 25LL;
int8_t x933 = INT8_MAX;
int8_t x938 = -29;
volatile uint64_t x940 = 8456LLU;
uint32_t x943 = UINT32_MAX;
static volatile int64_t x952 = -909332276018975LL;
volatile int32_t t163 = 430;
int16_t x954 = INT16_MAX;
volatile uint8_t x956 = UINT8_MAX;
int16_t x959 = 14;
static int64_t x961 = -1LL;
volatile int8_t x962 = -44;
uint32_t x963 = UINT32_MAX;
uint64_t x972 = UINT64_MAX;
int32_t x973 = -1;
int8_t x974 = INT8_MIN;
uint16_t x987 = 1827U;
static int32_t x997 = INT32_MIN;
uint64_t x998 = 13538LLU;
int64_t x999 = -1LL;
volatile int16_t x1000 = INT16_MIN;
uint16_t x1001 = 399U;
int32_t x1005 = INT32_MAX;
int16_t x1006 = -1;
static int32_t x1021 = INT32_MIN;
int32_t t177 = 125059;
volatile int8_t x1034 = -21;
volatile int32_t t178 = -10908217;
volatile int32_t x1037 = INT32_MAX;
int32_t t179 = -16;
int64_t x1052 = 682LL;
int16_t x1056 = INT16_MIN;
int8_t x1062 = -30;
int8_t x1068 = INT8_MIN;
int64_t x1073 = INT64_MIN;
uint64_t x1074 = UINT64_MAX;
volatile int64_t x1081 = 27176795LL;
uint8_t x1084 = 2U;
uint32_t x1087 = 8031U;
static volatile int32_t t186 = 35810992;
int32_t x1089 = -11;
uint8_t x1097 = 0U;
int16_t x1100 = -1;
int32_t t189 = 23425777;
volatile int32_t x1110 = -13390800;
volatile int32_t x1111 = -1;
static int8_t x1114 = INT8_MAX;
uint16_t x1115 = UINT16_MAX;
volatile int32_t x1116 = -47944;
volatile int32_t t192 = 162;
volatile int16_t x1124 = INT16_MAX;
int64_t x1133 = -8LL;
uint16_t x1138 = UINT16_MAX;
int8_t x1141 = INT8_MIN;
int32_t x1144 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -21;
	volatile int64_t x2 = -1LL;
	int32_t x3 = 4;
	volatile int32_t t0 = 1;

    t0 = (x1>((x2*x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -61;
	static int64_t x7 = -1LL;
	uint64_t x8 = UINT64_MAX;

    t1 = (x5>((x6*x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	uint16_t x10 = 608U;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 95855831;

    t2 = (x9>((x10*x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -6;
	static uint32_t x18 = UINT32_MAX;
	volatile int32_t t3 = -10231298;

    t3 = (x17>((x18*x19)+x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x21 = -1;
	volatile uint16_t x22 = 1U;
	uint32_t x23 = UINT32_MAX;
	static int32_t x24 = -3935573;
	volatile int32_t t4 = 226456158;

    t4 = (x21>((x22*x23)+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x25 = INT16_MIN;
	volatile int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	volatile int32_t t5 = -4171513;

    t5 = (x25>((x26*x27)+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	int16_t x31 = INT16_MAX;
	int16_t x32 = 3784;
	volatile int32_t t6 = 31356;

    t6 = (x29>((x30*x31)+x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	int64_t x39 = 7108257LL;
	int32_t x40 = -15679;
	volatile int32_t t7 = 78552;

    t7 = (x37>((x38*x39)+x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = 2739U;
	uint16_t x42 = 0U;
	int64_t x43 = -1LL;
	static uint8_t x44 = 39U;
	static int32_t t8 = 209;

    t8 = (x41>((x42*x43)+x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -1;
	static int8_t x46 = -1;
	volatile uint16_t x47 = 5U;
	uint8_t x48 = 13U;
	volatile int32_t t9 = 233;

    t9 = (x45>((x46*x47)+x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	int32_t x51 = -1;
	static uint64_t x52 = 25885284492070LLU;
	int32_t t10 = 532260655;

    t10 = (x49>((x50*x51)+x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x53 = INT8_MIN;
	int32_t x54 = -1;
	int32_t x55 = -1;
	int8_t x56 = INT8_MIN;

    t11 = (x53>((x54*x55)+x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 604U;
	uint64_t x58 = 190154783901743725LLU;
	uint64_t x59 = UINT64_MAX;
	volatile uint32_t x60 = 131U;
	int32_t t12 = 1121;

    t12 = (x57>((x58*x59)+x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = 2;
	int32_t x64 = -1;
	volatile int32_t t13 = -49;

    t13 = (x61>((x62*x63)+x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MAX;
	int64_t x67 = 56209967LL;
	uint16_t x68 = 55U;
	volatile int32_t t14 = -15572279;

    t14 = (x65>((x66*x67)+x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	int8_t x71 = 1;
	static volatile uint64_t x72 = 662143357099114LLU;
	int32_t t15 = -1;

    t15 = (x69>((x70*x71)+x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = 967804U;
	uint32_t x78 = 456759U;
	static int8_t x79 = INT8_MAX;
	int32_t x80 = -1;

    t16 = (x77>((x78*x79)+x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = 186;
	static volatile int8_t x86 = INT8_MIN;
	int64_t x88 = 567468783407LL;

    t17 = (x85>((x86*x87)+x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -6709;
	int8_t x90 = 0;
	static int8_t x92 = -2;

    t18 = (x89>((x90*x91)+x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = -1LL;
	int8_t x94 = -1;
	volatile int8_t x95 = 39;
	volatile int8_t x96 = -1;
	volatile int32_t t19 = -7;

    t19 = (x93>((x94*x95)+x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x105 = 15U;
	static uint64_t x106 = 1LLU;
	uint16_t x107 = 845U;
	int16_t x108 = INT16_MIN;

    t20 = (x105>((x106*x107)+x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x113 = UINT8_MAX;
	volatile int8_t x114 = 0;
	uint8_t x115 = 30U;
	uint32_t x116 = 7U;
	volatile int32_t t21 = -1395;

    t21 = (x113>((x114*x115)+x116));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MAX;
	volatile uint64_t x123 = 119166LLU;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t22 = 218;

    t22 = (x121>((x122*x123)+x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x125 = INT32_MIN;
	int32_t x126 = 1068376;
	int16_t x128 = -1;
	int32_t t23 = 0;

    t23 = (x125>((x126*x127)+x128));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x129 = INT64_MIN;
	int32_t x130 = -5731;
	volatile uint32_t x131 = 216165U;
	static int32_t t24 = 204201;

    t24 = (x129>((x130*x131)+x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x141 = 1U;
	uint64_t x142 = 3335849843LLU;
	int32_t t25 = 675678;

    t25 = (x141>((x142*x143)+x144));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x146 = 29312;
	static volatile int8_t x148 = INT8_MIN;
	int32_t t26 = -23918684;

    t26 = (x145>((x146*x147)+x148));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x149 = 0;
	int64_t x150 = INT64_MAX;
	int16_t x151 = -1;
	uint16_t x152 = 11892U;
	volatile int32_t t27 = -4249962;

    t27 = (x149>((x150*x151)+x152));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x153 = 95867139LLU;
	int64_t x154 = -57717396931913LL;
	volatile int16_t x155 = INT16_MAX;
	volatile int64_t x156 = INT64_MAX;
	volatile int32_t t28 = 2079780;

    t28 = (x153>((x154*x155)+x156));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile int32_t t29 = -465776144;

    t29 = (x161>((x162*x163)+x164));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x165 = UINT64_MAX;
	volatile uint16_t x167 = 9U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t30 = -164066534;

    t30 = (x165>((x166*x167)+x168));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x169 = INT16_MAX;
	volatile int32_t x170 = 10;
	uint64_t x171 = 32129LLU;
	static int16_t x172 = -2;
	int32_t t31 = 0;

    t31 = (x169>((x170*x171)+x172));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x177 = 127U;
	volatile uint64_t x179 = 6307261690674624085LLU;
	volatile uint32_t x180 = 623U;
	int32_t t32 = 7;

    t32 = (x177>((x178*x179)+x180));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x182 = INT16_MIN;
	static int64_t x184 = 1952808292LL;
	int32_t t33 = 966;

    t33 = (x181>((x182*x183)+x184));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x189 = -9227;
	int16_t x190 = -3;
	int8_t x191 = 5;
	int32_t t34 = 0;

    t34 = (x189>((x190*x191)+x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x193 = INT64_MIN;
	volatile int8_t x194 = 0;
	int32_t x195 = -2331;
	uint8_t x196 = UINT8_MAX;

    t35 = (x193>((x194*x195)+x196));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t t36 = 5796311;

    t36 = (x201>((x202*x203)+x204));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x209 = INT8_MIN;
	static int8_t x211 = -1;
	static int32_t x212 = 12667391;
	int32_t t37 = 418105651;

    t37 = (x209>((x210*x211)+x212));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x221 = -120499LL;
	int8_t x222 = -1;
	uint32_t x223 = 52U;
	int8_t x224 = INT8_MIN;
	int32_t t38 = 1;

    t38 = (x221>((x222*x223)+x224));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = 28;
	volatile uint16_t x231 = UINT16_MAX;
	volatile uint16_t x232 = 31U;
	volatile int32_t t39 = 1;

    t39 = (x229>((x230*x231)+x232));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x235 = INT16_MIN;
	static uint64_t x236 = UINT64_MAX;
	volatile int32_t t40 = 3521996;

    t40 = (x233>((x234*x235)+x236));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x241 = -1;
	int8_t x243 = 0;
	int64_t x244 = -1LL;
	volatile int32_t t41 = 899015902;

    t41 = (x241>((x242*x243)+x244));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x249 = UINT8_MAX;
	int16_t x250 = 52;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = 847636992;
	int32_t t42 = -2582282;

    t42 = (x249>((x250*x251)+x252));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x253 = 1;
	volatile int16_t x254 = 14;
	volatile int16_t x255 = INT16_MAX;
	int16_t x256 = 37;
	volatile int32_t t43 = -1;

    t43 = (x253>((x254*x255)+x256));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t44 = -30075;

    t44 = (x257>((x258*x259)+x260));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x261 = INT8_MAX;
	static uint8_t x262 = 25U;
	int8_t x263 = INT8_MAX;
	static volatile uint64_t x264 = 731LLU;
	int32_t t45 = -91548;

    t45 = (x261>((x262*x263)+x264));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	static int64_t x268 = -500LL;

    t46 = (x265>((x266*x267)+x268));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x274 = -1;
	int64_t x275 = -2381138908LL;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t47 = 23692942;

    t47 = (x273>((x274*x275)+x276));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x278 = 10564LLU;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t48 = -723185;

    t48 = (x277>((x278*x279)+x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x285 = INT8_MIN;
	volatile uint16_t x286 = 438U;
	int64_t x287 = -144917232442275LL;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t49 = 4;

    t49 = (x285>((x286*x287)+x288));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x289 = 0;
	uint64_t x290 = UINT64_MAX;
	volatile uint8_t x292 = 47U;
	volatile int32_t t50 = -62095;

    t50 = (x289>((x290*x291)+x292));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x293 = INT16_MAX;
	volatile int64_t x294 = -143818413477914LL;
	volatile int8_t x296 = INT8_MIN;
	int32_t t51 = -2196;

    t51 = (x293>((x294*x295)+x296));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t52 = -714316341;

    t52 = (x297>((x298*x299)+x300));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x302 = UINT32_MAX;
	int32_t x304 = -16174312;
	volatile int32_t t53 = -1864083;

    t53 = (x301>((x302*x303)+x304));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t t54 = -998373;

    t54 = (x305>((x306*x307)+x308));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x309 = INT32_MAX;
	uint16_t x310 = 147U;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 13156864LLU;
	static int32_t t55 = -9;

    t55 = (x309>((x310*x311)+x312));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 31LLU;
	uint16_t x319 = 10338U;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t56 = 0;

    t56 = (x317>((x318*x319)+x320));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x321 = 4;
	int16_t x322 = -540;
	volatile int64_t x324 = -1LL;

    t57 = (x321>((x322*x323)+x324));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x325 = 46U;
	int8_t x327 = -1;
	static int64_t x328 = INT64_MIN;
	int32_t t58 = 1;

    t58 = (x325>((x326*x327)+x328));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x330 = 3U;
	int8_t x331 = -46;
	uint32_t x332 = 6U;
	volatile int32_t t59 = 181;

    t59 = (x329>((x330*x331)+x332));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x333 = 251980U;
	uint16_t x335 = UINT16_MAX;
	volatile int32_t t60 = 690;

    t60 = (x333>((x334*x335)+x336));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x337 = INT16_MIN;
	static int16_t x340 = INT16_MIN;
	int32_t t61 = -193078;

    t61 = (x337>((x338*x339)+x340));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = 62053U;
	static int16_t x343 = INT16_MAX;
	int32_t x344 = INT32_MIN;

    t62 = (x341>((x342*x343)+x344));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x349 = INT32_MAX;
	int32_t x350 = -1;
	int8_t x351 = -1;
	static int8_t x352 = -44;
	static int32_t t63 = 253961804;

    t63 = (x349>((x350*x351)+x352));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x362 = 1388755U;
	int32_t t64 = 59;

    t64 = (x361>((x362*x363)+x364));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x366 = INT16_MAX;
	static int16_t x367 = INT16_MIN;
	int8_t x368 = 7;
	int32_t t65 = 4696819;

    t65 = (x365>((x366*x367)+x368));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile int32_t t66 = 16512;

    t66 = (x369>((x370*x371)+x372));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x377 = 28335405LLU;
	uint64_t x380 = 91917LLU;
	int32_t t67 = -159006686;

    t67 = (x377>((x378*x379)+x380));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x381 = 0U;
	volatile int8_t x382 = INT8_MIN;
	static int8_t x384 = 2;
	int32_t t68 = -3922949;

    t68 = (x381>((x382*x383)+x384));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x391 = INT16_MIN;
	uint16_t x392 = 498U;

    t69 = (x389>((x390*x391)+x392));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x400 = INT64_MIN;
	int32_t t70 = -10446449;

    t70 = (x397>((x398*x399)+x400));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x402 = 7645U;
	int64_t x404 = INT64_MAX;
	volatile int32_t t71 = -565384;

    t71 = (x401>((x402*x403)+x404));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x406 = 11U;
	int16_t x407 = 2;
	static int64_t x408 = -546151229937LL;
	int32_t t72 = 1920;

    t72 = (x405>((x406*x407)+x408));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = -1;
	uint8_t x416 = UINT8_MAX;
	static int32_t t73 = -14893;

    t73 = (x413>((x414*x415)+x416));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x417 = INT8_MIN;
	int64_t x418 = -1LL;
	int32_t x420 = INT32_MAX;

    t74 = (x417>((x418*x419)+x420));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x422 = UINT64_MAX;
	int64_t x423 = -1LL;
	int64_t x424 = -274507388318LL;
	volatile int32_t t75 = 1;

    t75 = (x421>((x422*x423)+x424));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x426 = -1;
	int8_t x427 = -1;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t76 = 202;

    t76 = (x425>((x426*x427)+x428));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x434 = INT64_MAX;
	int32_t x435 = -1;
	volatile int32_t t77 = 6;

    t77 = (x433>((x434*x435)+x436));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x437 = INT8_MIN;
	uint8_t x438 = 1U;
	int8_t x439 = INT8_MIN;
	static int16_t x440 = 0;
	static volatile int32_t t78 = 58;

    t78 = (x437>((x438*x439)+x440));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x441 = INT64_MIN;
	uint64_t x442 = 16242894LLU;
	int32_t x443 = INT32_MAX;
	static volatile int32_t t79 = -238662668;

    t79 = (x441>((x442*x443)+x444));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x445 = 11U;
	uint32_t x447 = UINT32_MAX;
	int32_t x448 = INT32_MAX;
	volatile int32_t t80 = -34636744;

    t80 = (x445>((x446*x447)+x448));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x466 = 1;
	volatile int8_t x467 = INT8_MIN;

    t81 = (x465>((x466*x467)+x468));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x473 = INT32_MAX;
	static volatile uint32_t x474 = UINT32_MAX;
	volatile int16_t x475 = -55;
	int16_t x476 = INT16_MAX;
	int32_t t82 = 1240;

    t82 = (x473>((x474*x475)+x476));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x477 = -4LL;
	uint8_t x478 = UINT8_MAX;
	static int16_t x479 = INT16_MAX;
	volatile uint32_t x480 = 131574543U;
	volatile int32_t t83 = -114;

    t83 = (x477>((x478*x479)+x480));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x481 = 6009478U;
	static volatile int64_t x482 = INT64_MAX;
	int64_t x484 = 78925404LL;
	int32_t t84 = 81393;

    t84 = (x481>((x482*x483)+x484));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x485 = 6U;
	uint32_t x486 = 2U;
	int32_t x487 = INT32_MIN;

    t85 = (x485>((x486*x487)+x488));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x489 = INT32_MIN;
	int32_t x490 = -27070194;
	volatile uint32_t x491 = UINT32_MAX;
	static volatile uint64_t x492 = 3742780402747626LLU;

    t86 = (x489>((x490*x491)+x492));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x494 = INT8_MAX;
	int16_t x495 = -8;
	volatile uint8_t x496 = 47U;
	int32_t t87 = 136;

    t87 = (x493>((x494*x495)+x496));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x502 = -1;
	int8_t x503 = INT8_MAX;
	int32_t t88 = 16286037;

    t88 = (x501>((x502*x503)+x504));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x509 = 28585062LL;
	volatile int16_t x510 = -1;
	static int32_t x511 = -1;
	int64_t x512 = -1LL;
	volatile int32_t t89 = 7655;

    t89 = (x509>((x510*x511)+x512));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x513 = 6U;
	int64_t x514 = 101944LL;
	int32_t x515 = -1;
	uint32_t x516 = 43002202U;
	int32_t t90 = -1664230;

    t90 = (x513>((x514*x515)+x516));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x518 = 19062U;
	uint8_t x519 = UINT8_MAX;
	volatile int64_t x520 = -1LL;
	static int32_t t91 = -1;

    t91 = (x517>((x518*x519)+x520));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x525 = 3;
	static int64_t x526 = -3LL;
	static volatile int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MAX;
	volatile int32_t t92 = -327;

    t92 = (x525>((x526*x527)+x528));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x529 = 20U;
	int8_t x530 = -22;
	volatile uint32_t x531 = UINT32_MAX;
	int8_t x532 = -1;
	static int32_t t93 = -9546;

    t93 = (x529>((x530*x531)+x532));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x533 = INT32_MAX;
	volatile int64_t x534 = -924941744LL;
	uint16_t x535 = UINT16_MAX;
	static uint64_t x536 = 668049713LLU;
	volatile int32_t t94 = 3;

    t94 = (x533>((x534*x535)+x536));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x542 = 10U;
	uint64_t x543 = 3294LLU;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t95 = 7;

    t95 = (x541>((x542*x543)+x544));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x545 = INT32_MIN;
	static int16_t x546 = 11415;
	int16_t x547 = INT16_MIN;
	int16_t x548 = 12;
	volatile int32_t t96 = 1250840;

    t96 = (x545>((x546*x547)+x548));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x553 = INT32_MAX;
	int8_t x554 = 31;
	volatile int16_t x556 = INT16_MIN;

    t97 = (x553>((x554*x555)+x556));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x562 = 2;
	static int64_t x563 = -1LL;
	static int32_t t98 = -1032644771;

    t98 = (x561>((x562*x563)+x564));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = 0LLU;

    t99 = (x565>((x566*x567)+x568));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x569 = 79U;
	int32_t x570 = -1;
	uint32_t x571 = 665U;
	int16_t x572 = -163;
	int32_t t100 = 14189623;

    t100 = (x569>((x570*x571)+x572));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x574 = 741111;
	static volatile int64_t x575 = -1LL;
	uint8_t x576 = UINT8_MAX;
	int32_t t101 = 763;

    t101 = (x573>((x574*x575)+x576));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x577 = -1611389902LL;
	static volatile int32_t x578 = -115;
	int8_t x579 = INT8_MIN;
	static volatile int8_t x580 = -1;
	volatile int32_t t102 = 18404;

    t102 = (x577>((x578*x579)+x580));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x581 = INT64_MIN;
	uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 19U;
	int32_t t103 = 3607687;

    t103 = (x581>((x582*x583)+x584));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x585 = INT32_MIN;
	uint32_t x586 = 1923045139U;
	volatile uint64_t x587 = 1428535440205LLU;
	int64_t x588 = INT64_MIN;
	volatile int32_t t104 = 11238;

    t104 = (x585>((x586*x587)+x588));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x589 = INT64_MIN;
	int16_t x590 = INT16_MIN;
	int64_t x591 = -1LL;
	volatile int32_t t105 = -936315902;

    t105 = (x589>((x590*x591)+x592));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x598 = 481U;
	int64_t x600 = INT64_MAX;

    t106 = (x597>((x598*x599)+x600));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x601 = 305U;
	static int8_t x604 = INT8_MIN;
	int32_t t107 = -1205;

    t107 = (x601>((x602*x603)+x604));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x609 = INT64_MIN;
	uint16_t x611 = 36U;
	int64_t x612 = -1LL;
	int32_t t108 = 29598;

    t108 = (x609>((x610*x611)+x612));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x613 = 68;
	static uint8_t x614 = UINT8_MAX;
	uint8_t x615 = 119U;
	static int32_t x616 = 41186921;
	volatile int32_t t109 = -15;

    t109 = (x613>((x614*x615)+x616));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x617 = -1LL;
	int8_t x618 = INT8_MIN;
	volatile uint64_t x620 = UINT64_MAX;
	int32_t t110 = -8324521;

    t110 = (x617>((x618*x619)+x620));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x621 = -1;
	uint16_t x622 = 49U;
	uint16_t x623 = 0U;
	uint8_t x624 = 88U;
	static int32_t t111 = -47711;

    t111 = (x621>((x622*x623)+x624));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x629 = INT64_MAX;
	int64_t x630 = -1LL;
	static uint16_t x631 = 62U;

    t112 = (x629>((x630*x631)+x632));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x633 = UINT32_MAX;
	uint16_t x635 = 3465U;
	int32_t t113 = 82135916;

    t113 = (x633>((x634*x635)+x636));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x637 = 37115U;
	volatile int8_t x638 = -1;
	volatile uint8_t x639 = 7U;
	uint8_t x640 = UINT8_MAX;
	int32_t t114 = 57148968;

    t114 = (x637>((x638*x639)+x640));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x649 = -1;
	int8_t x650 = 1;
	int64_t x651 = 3392926735141947LL;
	volatile int8_t x652 = INT8_MIN;

    t115 = (x649>((x650*x651)+x652));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x657 = INT32_MIN;
	uint8_t x658 = 95U;
	uint64_t x659 = UINT64_MAX;
	static uint8_t x660 = UINT8_MAX;

    t116 = (x657>((x658*x659)+x660));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x661 = -1LL;
	int64_t x663 = 422335749801966LL;
	static uint16_t x664 = 1022U;
	volatile int32_t t117 = 874;

    t117 = (x661>((x662*x663)+x664));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x681 = 3351U;
	int16_t x682 = INT16_MIN;
	int16_t x683 = -12;
	int64_t x684 = INT64_MIN;
	static int32_t t118 = -6549501;

    t118 = (x681>((x682*x683)+x684));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x689 = INT64_MIN;
	static int64_t x690 = 3582337LL;
	static volatile int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	int32_t t119 = 21759;

    t119 = (x689>((x690*x691)+x692));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x693 = -1LL;
	int8_t x695 = INT8_MAX;
	int8_t x696 = 7;
	int32_t t120 = 13;

    t120 = (x693>((x694*x695)+x696));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x697 = 5904;
	int8_t x698 = -1;
	volatile uint8_t x700 = 0U;
	static volatile int32_t t121 = 3474767;

    t121 = (x697>((x698*x699)+x700));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint32_t x701 = 12318U;
	int8_t x702 = 4;
	int16_t x703 = INT16_MIN;
	int32_t x704 = -1;
	volatile int32_t t122 = -54170793;

    t122 = (x701>((x702*x703)+x704));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x705 = -96037416249234LL;
	int32_t x706 = INT32_MIN;
	uint32_t x707 = 62819U;
	int64_t x708 = INT64_MIN;
	volatile int32_t t123 = -824087;

    t123 = (x705>((x706*x707)+x708));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MAX;
	static int32_t x712 = -1;
	int32_t t124 = -431;

    t124 = (x709>((x710*x711)+x712));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x713 = UINT32_MAX;
	int16_t x714 = 53;
	uint16_t x715 = UINT16_MAX;
	int32_t t125 = -2177238;

    t125 = (x713>((x714*x715)+x716));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x717 = 61U;
	int64_t x718 = -59928LL;
	volatile int32_t t126 = 732;

    t126 = (x717>((x718*x719)+x720));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x722 = 5330074659084839LLU;
	static volatile int64_t x723 = 29160553419LL;
	int64_t x724 = 882846LL;
	int32_t t127 = -8106310;

    t127 = (x721>((x722*x723)+x724));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x729 = INT8_MIN;
	volatile uint16_t x730 = 1U;
	int8_t x731 = -1;
	volatile int8_t x732 = -13;
	int32_t t128 = -7;

    t128 = (x729>((x730*x731)+x732));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x741 = INT32_MAX;
	int16_t x742 = 1368;
	static int8_t x743 = -1;
	int8_t x744 = INT8_MIN;
	static volatile int32_t t129 = 2;

    t129 = (x741>((x742*x743)+x744));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x745 = 44U;
	int8_t x746 = -22;
	static int16_t x747 = INT16_MIN;

    t130 = (x745>((x746*x747)+x748));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x765 = 1609308LL;
	uint8_t x766 = 85U;
	uint64_t x768 = UINT64_MAX;
	int32_t t131 = -28999;

    t131 = (x765>((x766*x767)+x768));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x769 = -1;
	static int8_t x771 = INT8_MAX;
	int32_t t132 = 797595141;

    t132 = (x769>((x770*x771)+x772));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x773 = -417598606;
	static int64_t x774 = -2LL;
	static uint8_t x775 = 0U;
	uint64_t x776 = 15411422LLU;
	volatile int32_t t133 = -72868;

    t133 = (x773>((x774*x775)+x776));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x777 = INT32_MAX;
	uint64_t x778 = UINT64_MAX;
	static uint8_t x779 = UINT8_MAX;
	static volatile int32_t t134 = -410625232;

    t134 = (x777>((x778*x779)+x780));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x781 = INT8_MIN;
	int8_t x782 = 23;
	static uint32_t x783 = 31U;
	volatile int32_t t135 = -1;

    t135 = (x781>((x782*x783)+x784));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x786 = 70503661598677LLU;
	int16_t x787 = INT16_MIN;
	volatile int32_t t136 = -444;

    t136 = (x785>((x786*x787)+x788));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x793 = 4U;
	static uint64_t x794 = 92LLU;
	uint32_t x795 = 1744164U;

    t137 = (x793>((x794*x795)+x796));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x797 = -1LL;
	static int32_t x798 = -9;
	uint32_t x799 = UINT32_MAX;
	volatile uint8_t x800 = 68U;

    t138 = (x797>((x798*x799)+x800));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x809 = -1;
	volatile int32_t x810 = -1;
	uint64_t x811 = 29924257LLU;
	static uint64_t x812 = 256831629986LLU;

    t139 = (x809>((x810*x811)+x812));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x813 = INT8_MAX;
	int8_t x814 = INT8_MIN;
	uint64_t x815 = 144LLU;
	int16_t x816 = -1;
	volatile int32_t t140 = 131898;

    t140 = (x813>((x814*x815)+x816));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x821 = UINT16_MAX;
	int32_t x822 = -1;
	volatile int32_t x823 = -1;
	uint8_t x824 = 94U;
	int32_t t141 = -26;

    t141 = (x821>((x822*x823)+x824));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x825 = 33873U;
	volatile int8_t x827 = -1;
	static uint64_t x828 = 205892654989LLU;
	static volatile int32_t t142 = 38;

    t142 = (x825>((x826*x827)+x828));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x829 = 3U;
	static int8_t x830 = -1;
	uint8_t x831 = 18U;
	uint32_t x832 = 953010471U;
	static int32_t t143 = 1;

    t143 = (x829>((x830*x831)+x832));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x833 = -25159492LL;
	volatile uint16_t x835 = 10561U;
	static uint32_t x836 = 556516U;
	volatile int32_t t144 = -4;

    t144 = (x833>((x834*x835)+x836));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x845 = INT64_MIN;
	int32_t x846 = -1;
	volatile int16_t x847 = -1;
	int16_t x848 = INT16_MIN;
	volatile int32_t t145 = 115667068;

    t145 = (x845>((x846*x847)+x848));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x850 = INT16_MIN;
	int8_t x852 = INT8_MIN;
	volatile int32_t t146 = -3829;

    t146 = (x849>((x850*x851)+x852));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x853 = UINT32_MAX;
	int32_t x854 = -180;
	volatile int8_t x855 = INT8_MAX;
	static volatile int32_t x856 = INT32_MAX;

    t147 = (x853>((x854*x855)+x856));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x861 = -1LL;
	uint32_t x863 = 757957340U;
	static int16_t x864 = INT16_MIN;
	volatile int32_t t148 = 1555105;

    t148 = (x861>((x862*x863)+x864));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x865 = -21682;
	volatile uint8_t x866 = 33U;
	volatile int16_t x867 = INT16_MAX;
	uint8_t x868 = UINT8_MAX;

    t149 = (x865>((x866*x867)+x868));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x873 = INT16_MIN;
	static int64_t x874 = -311LL;
	int16_t x875 = INT16_MAX;
	int8_t x876 = INT8_MIN;
	int32_t t150 = 5734;

    t150 = (x873>((x874*x875)+x876));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x877 = -466872063004LL;
	static int32_t x880 = 0;
	static volatile int32_t t151 = 0;

    t151 = (x877>((x878*x879)+x880));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x881 = 119;
	int16_t x884 = INT16_MIN;

    t152 = (x881>((x882*x883)+x884));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x887 = -1LL;
	int32_t t153 = 3201;

    t153 = (x885>((x886*x887)+x888));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x892 = 302491011;
	int32_t t154 = 15607796;

    t154 = (x889>((x890*x891)+x892));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x893 = UINT16_MAX;
	int16_t x894 = INT16_MIN;
	static volatile int8_t x895 = INT8_MAX;
	volatile int32_t t155 = 124833014;

    t155 = (x893>((x894*x895)+x896));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x901 = INT32_MIN;
	volatile int64_t x903 = 13LL;
	uint32_t x904 = 2433U;
	volatile int32_t t156 = 1269545;

    t156 = (x901>((x902*x903)+x904));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x909 = 107U;
	static int16_t x910 = -7;
	int16_t x911 = -1;
	static uint8_t x912 = 115U;
	volatile int32_t t157 = 227052756;

    t157 = (x909>((x910*x911)+x912));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x913 = UINT8_MAX;
	static uint8_t x914 = 0U;
	int32_t t158 = 13919628;

    t158 = (x913>((x914*x915)+x916));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x921 = INT32_MIN;
	static int64_t x922 = -1LL;
	int16_t x923 = -1;
	int16_t x924 = 0;
	volatile int32_t t159 = -32541055;

    t159 = (x921>((x922*x923)+x924));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x934 = 6421707244816LLU;
	int64_t x935 = -788275960199456LL;
	static int8_t x936 = -1;
	int32_t t160 = 82323;

    t160 = (x933>((x934*x935)+x936));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x937 = UINT8_MAX;
	volatile int64_t x939 = 3519729845473LL;
	int32_t t161 = 0;

    t161 = (x937>((x938*x939)+x940));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x941 = 0;
	volatile uint8_t x942 = 54U;
	int8_t x944 = INT8_MIN;
	static volatile int32_t t162 = 1;

    t162 = (x941>((x942*x943)+x944));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x949 = 7483267580656973LLU;
	volatile int64_t x950 = -1LL;
	int32_t x951 = -1;

    t163 = (x949>((x950*x951)+x952));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x953 = INT16_MIN;
	int8_t x955 = INT8_MIN;
	static volatile int32_t t164 = 425;

    t164 = (x953>((x954*x955)+x956));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x957 = -1;
	static uint64_t x958 = 5LLU;
	int32_t x960 = INT32_MAX;
	volatile int32_t t165 = -547;

    t165 = (x957>((x958*x959)+x960));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x964 = INT32_MIN;
	static int32_t t166 = 19745453;

    t166 = (x961>((x962*x963)+x964));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x969 = INT32_MIN;
	int16_t x970 = 1794;
	uint16_t x971 = UINT16_MAX;
	static volatile int32_t t167 = -176247483;

    t167 = (x969>((x970*x971)+x972));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x975 = 24U;
	static int32_t x976 = 75;
	volatile int32_t t168 = 3334620;

    t168 = (x973>((x974*x975)+x976));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x977 = 114U;
	static volatile int8_t x978 = INT8_MIN;
	int16_t x979 = -2;
	uint8_t x980 = 13U;
	int32_t t169 = 42759;

    t169 = (x977>((x978*x979)+x980));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x981 = -1;
	uint8_t x982 = 2U;
	volatile uint16_t x983 = 10U;
	int8_t x984 = INT8_MAX;
	static int32_t t170 = 1;

    t170 = (x981>((x982*x983)+x984));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x985 = 11U;
	static int64_t x986 = -1LL;
	volatile int16_t x988 = -13775;
	int32_t t171 = 77354311;

    t171 = (x985>((x986*x987)+x988));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t t172 = -3267;

    t172 = (x997>((x998*x999)+x1000));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1002 = 0U;
	int8_t x1003 = INT8_MAX;
	int8_t x1004 = -12;
	static volatile int32_t t173 = -20145;

    t173 = (x1001>((x1002*x1003)+x1004));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1007 = -1LL;
	static volatile int16_t x1008 = INT16_MAX;
	int32_t t174 = 3270750;

    t174 = (x1005>((x1006*x1007)+x1008));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1009 = -7;
	volatile int8_t x1010 = INT8_MIN;
	uint32_t x1011 = 60U;
	uint16_t x1012 = 2276U;
	int32_t t175 = 2605;

    t175 = (x1009>((x1010*x1011)+x1012));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x1022 = -1LL;
	int8_t x1023 = -3;
	volatile int16_t x1024 = INT16_MIN;
	int32_t t176 = -3;

    t176 = (x1021>((x1022*x1023)+x1024));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1029 = UINT16_MAX;
	int32_t x1030 = -1;
	static int64_t x1031 = 1LL;
	uint8_t x1032 = 3U;

    t177 = (x1029>((x1030*x1031)+x1032));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1033 = INT32_MIN;
	int64_t x1035 = -1LL;
	uint64_t x1036 = UINT64_MAX;

    t178 = (x1033>((x1034*x1035)+x1036));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1038 = UINT8_MAX;
	uint16_t x1039 = UINT16_MAX;
	volatile int8_t x1040 = 1;

    t179 = (x1037>((x1038*x1039)+x1040));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1049 = INT8_MIN;
	int16_t x1050 = INT16_MIN;
	int16_t x1051 = INT16_MIN;
	static volatile int32_t t180 = -291011;

    t180 = (x1049>((x1050*x1051)+x1052));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1053 = INT16_MIN;
	volatile uint64_t x1054 = UINT64_MAX;
	volatile int8_t x1055 = INT8_MIN;
	static volatile int32_t t181 = 197376;

    t181 = (x1053>((x1054*x1055)+x1056));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1061 = 58825450441833LL;
	static int64_t x1063 = -5LL;
	int8_t x1064 = INT8_MIN;
	volatile int32_t t182 = 94502;

    t182 = (x1061>((x1062*x1063)+x1064));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1065 = INT8_MAX;
	volatile int8_t x1066 = 0;
	uint64_t x1067 = 99226148LLU;
	volatile int32_t t183 = -647147;

    t183 = (x1065>((x1066*x1067)+x1068));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1075 = 31285731673LLU;
	static uint64_t x1076 = 7192953877861735LLU;
	int32_t t184 = 0;

    t184 = (x1073>((x1074*x1075)+x1076));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1082 = -2247;
	int8_t x1083 = INT8_MAX;
	int32_t t185 = 19790648;

    t185 = (x1081>((x1082*x1083)+x1084));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1085 = -1;
	static int8_t x1086 = 24;
	uint32_t x1088 = 25773428U;

    t186 = (x1085>((x1086*x1087)+x1088));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1090 = 0;
	int64_t x1091 = INT64_MIN;
	uint32_t x1092 = UINT32_MAX;
	int32_t t187 = 0;

    t187 = (x1089>((x1090*x1091)+x1092));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1098 = INT16_MIN;
	int16_t x1099 = INT16_MIN;
	volatile int32_t t188 = 9;

    t188 = (x1097>((x1098*x1099)+x1100));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1101 = -1;
	volatile int16_t x1102 = -1;
	int8_t x1103 = -43;
	int64_t x1104 = INT64_MIN;

    t189 = (x1101>((x1102*x1103)+x1104));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1105 = 4044U;
	int32_t x1106 = -1;
	int64_t x1107 = -1LL;
	uint32_t x1108 = UINT32_MAX;
	volatile int32_t t190 = -125892170;

    t190 = (x1105>((x1106*x1107)+x1108));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1109 = -155346588;
	int8_t x1112 = -11;
	int32_t t191 = 3252;

    t191 = (x1109>((x1110*x1111)+x1112));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1113 = 1632U;

    t192 = (x1113>((x1114*x1115)+x1116));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1117 = -1;
	int64_t x1118 = -66LL;
	int16_t x1119 = 1082;
	uint16_t x1120 = 12U;
	int32_t t193 = 259807639;

    t193 = (x1117>((x1118*x1119)+x1120));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1121 = UINT32_MAX;
	static int32_t x1122 = INT32_MIN;
	int16_t x1123 = 1;
	int32_t t194 = -26239547;

    t194 = (x1121>((x1122*x1123)+x1124));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1125 = 592167741317358594LLU;
	volatile uint64_t x1126 = UINT64_MAX;
	static int64_t x1127 = INT64_MAX;
	static int32_t x1128 = -121;
	int32_t t195 = 36014331;

    t195 = (x1125>((x1126*x1127)+x1128));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x1129 = INT32_MIN;
	uint64_t x1130 = UINT64_MAX;
	static uint16_t x1131 = UINT16_MAX;
	int32_t x1132 = INT32_MAX;
	volatile int32_t t196 = -148937062;

    t196 = (x1129>((x1130*x1131)+x1132));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1134 = -1024657LL;
	int64_t x1135 = -1LL;
	uint64_t x1136 = 15139816093423LLU;
	int32_t t197 = -1594422;

    t197 = (x1133>((x1134*x1135)+x1136));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1137 = 0;
	int8_t x1139 = 55;
	int8_t x1140 = -2;
	int32_t t198 = 13;

    t198 = (x1137>((x1138*x1139)+x1140));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1142 = 0LL;
	static uint32_t x1143 = UINT32_MAX;
	int32_t t199 = 349859;

    t199 = (x1141>((x1142*x1143)+x1144));

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

