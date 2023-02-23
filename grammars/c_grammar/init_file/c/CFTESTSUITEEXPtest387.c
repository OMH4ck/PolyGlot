
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

int8_t x7 = INT8_MIN;
int64_t x16 = -3LL;
volatile int16_t x17 = INT16_MIN;
int16_t x20 = INT16_MIN;
int32_t x22 = -1;
volatile int32_t x29 = -7060329;
int16_t x33 = INT16_MAX;
uint8_t x41 = UINT8_MAX;
static int32_t x47 = INT32_MIN;
volatile int32_t t11 = 913;
int32_t x53 = 385855521;
volatile int32_t t15 = -853086;
int16_t x78 = INT16_MAX;
volatile int32_t t19 = 1;
int8_t x99 = INT8_MAX;
volatile int16_t x106 = -1;
uint64_t x108 = UINT64_MAX;
int16_t x114 = INT16_MIN;
int16_t x115 = 424;
int16_t x116 = -1;
volatile int32_t t23 = -7;
static volatile uint8_t x117 = 56U;
int64_t x120 = -589344449562045LL;
int16_t x121 = -1;
int32_t t25 = -23654455;
volatile int8_t x125 = INT8_MAX;
volatile int16_t x127 = -1;
int16_t x128 = 1;
int32_t x131 = -130;
volatile int32_t t28 = -7;
static uint32_t x144 = 5804U;
static volatile int64_t x147 = -1LL;
static int8_t x148 = 1;
static int8_t x151 = INT8_MIN;
int32_t t33 = -627;
int8_t x162 = 13;
static volatile int8_t x166 = 1;
int32_t t36 = 241592512;
uint8_t x177 = 56U;
int64_t x181 = INT64_MIN;
volatile int32_t t39 = 340035;
int32_t t41 = -935347112;
int32_t t45 = -5;
static int32_t x218 = -11585112;
static volatile int32_t t47 = 1;
volatile int32_t t50 = 30396988;
int8_t x247 = INT8_MAX;
static int64_t x265 = -19482335LL;
volatile int16_t x274 = INT16_MIN;
volatile int8_t x277 = INT8_MAX;
volatile int8_t x279 = INT8_MIN;
int8_t x281 = INT8_MIN;
volatile int32_t t59 = -943233;
int32_t x286 = INT32_MAX;
int8_t x288 = INT8_MIN;
uint32_t x293 = UINT32_MAX;
int32_t x296 = 24872091;
uint32_t x299 = 965829179U;
int16_t x300 = INT16_MAX;
uint32_t x329 = 599013890U;
volatile int32_t t71 = -65221323;
int64_t x352 = 3077LL;
volatile int32_t t77 = 1114562;
uint32_t x361 = 7064U;
int32_t x364 = INT32_MIN;
int32_t x365 = INT32_MIN;
volatile int8_t x367 = 2;
volatile int32_t t79 = -1;
volatile int16_t x370 = -84;
int16_t x371 = 0;
int8_t x374 = INT8_MAX;
volatile int32_t t81 = 99528;
uint32_t x385 = UINT32_MAX;
uint8_t x387 = 45U;
int16_t x388 = -1;
int16_t x390 = INT16_MAX;
uint64_t x402 = 1119LLU;
int8_t x421 = INT8_MAX;
static uint16_t x422 = 2U;
uint16_t x425 = UINT16_MAX;
int16_t x438 = -1;
volatile int64_t x441 = INT64_MIN;
static int16_t x444 = -61;
int32_t t96 = -1;
int32_t x452 = INT32_MIN;
static volatile int32_t t97 = -212110336;
int32_t x456 = -1;
static uint8_t x464 = 3U;
int32_t t100 = -507687131;
static int16_t x472 = INT16_MIN;
int32_t t102 = -36864461;
uint32_t x480 = UINT32_MAX;
int32_t x492 = INT32_MIN;
volatile int32_t t107 = 18;
uint16_t x493 = UINT16_MAX;
int64_t x495 = INT64_MIN;
int32_t t108 = -3193372;
int64_t x501 = 231838533748122214LL;
int16_t x503 = INT16_MIN;
volatile int64_t x514 = -213996595LL;
volatile int32_t x516 = -3423;
volatile int32_t t112 = 1110140;
volatile uint16_t x524 = 2U;
uint8_t x527 = 33U;
uint32_t x529 = UINT32_MAX;
static uint64_t x530 = 3115256117LLU;
static int32_t x532 = -1;
int64_t x535 = INT64_MAX;
uint8_t x539 = UINT8_MAX;
int16_t x553 = -1;
volatile int16_t x565 = -97;
int16_t x566 = INT16_MIN;
int32_t t124 = -164;
int32_t t125 = -51606315;
static volatile int32_t t126 = -1036361;
static uint64_t x595 = UINT64_MAX;
volatile int32_t t129 = 53;
uint32_t x602 = 84438741U;
int8_t x607 = -1;
uint16_t x608 = 3179U;
volatile int32_t t132 = -1558;
int8_t x611 = -1;
int64_t x613 = INT64_MAX;
uint16_t x615 = 275U;
static int8_t x623 = INT8_MAX;
volatile int64_t x624 = INT64_MAX;
uint32_t x626 = 5U;
volatile int8_t x627 = -2;
volatile int64_t x635 = -1LL;
static int8_t x640 = -1;
int32_t x645 = INT32_MIN;
static int16_t x649 = -327;
int8_t x658 = -1;
int32_t t145 = -886;
volatile int32_t t149 = 1;
volatile int32_t x694 = INT32_MIN;
static volatile int32_t t150 = 0;
static volatile uint64_t x709 = 949379LLU;
int16_t x710 = 5483;
static int16_t x713 = INT16_MIN;
uint64_t x714 = 1673441688416753LLU;
uint16_t x716 = UINT16_MAX;
static int16_t x720 = INT16_MIN;
int32_t t156 = -230;
int16_t x727 = INT16_MAX;
int32_t t157 = -11917;
uint64_t x736 = 26679294292LLU;
int16_t x737 = -125;
volatile uint32_t x741 = 2151U;
uint16_t x743 = 1242U;
volatile int64_t x744 = INT64_MIN;
volatile int8_t x746 = -1;
uint16_t x751 = 1727U;
static int32_t t163 = 920443;
static uint64_t x753 = 342580444881805LLU;
int8_t x760 = -1;
int32_t t167 = 0;
int16_t x769 = INT16_MAX;
volatile int64_t x770 = 4LL;
int16_t x771 = INT16_MAX;
int32_t x773 = 3;
int32_t x777 = INT32_MIN;
int64_t x793 = -5906LL;
volatile uint8_t x794 = UINT8_MAX;
int32_t t174 = -52;
int32_t t175 = -15;
static int16_t x810 = -5305;
static int64_t x812 = INT64_MIN;
volatile int32_t t177 = -4432;
static int32_t t178 = 6;
uint8_t x823 = 0U;
int8_t x825 = 0;
int8_t x831 = INT8_MAX;
static int32_t t181 = 951422992;
volatile int32_t t183 = 338617;
int16_t x846 = INT16_MIN;
int16_t x847 = INT16_MAX;
int64_t x855 = INT64_MAX;
uint32_t x856 = 430743U;
int64_t x858 = -1LL;
int16_t x861 = INT16_MAX;
int8_t x870 = INT8_MIN;
static uint64_t x874 = UINT64_MAX;
uint16_t x876 = 0U;
int32_t t190 = 772862663;
int32_t x881 = -22712220;
int8_t x887 = -7;
volatile int32_t t193 = 1;
volatile int32_t t194 = 977329670;
uint8_t x900 = 3U;
volatile uint64_t x901 = UINT64_MAX;
uint64_t x905 = 1287133335LLU;
volatile uint64_t x907 = UINT64_MAX;
int32_t x909 = -317487;
uint32_t x910 = 341U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	volatile uint32_t x3 = 1239554U;
	int32_t x4 = 1124675;
	int32_t t0 = 976;

    t0 = (x1>((x2-x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 1;
	static volatile int8_t x6 = INT8_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 936;

    t1 = (x5>((x6-x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MAX;
	uint8_t x11 = 55U;
	uint8_t x12 = 11U;
	volatile int32_t t2 = -61;

    t2 = (x9>((x10-x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint8_t x14 = 19U;
	int16_t x15 = 11547;
	volatile int32_t t3 = -2443069;

    t3 = (x13>((x14-x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	volatile int8_t x19 = -1;
	volatile int32_t t4 = -23407;

    t4 = (x17>((x18-x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = 29U;
	volatile int32_t t5 = 1775;

    t5 = (x21>((x22-x23)^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 3U;
	int8_t x26 = 44;
	volatile int8_t x27 = INT8_MIN;
	int16_t x28 = 5;
	volatile int32_t t6 = 2676;

    t6 = (x25>((x26-x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	static uint32_t x31 = 789U;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -196317;

    t7 = (x29>((x30-x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	int64_t x35 = 17347667288364LL;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -72203;

    t8 = (x33>((x34-x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x42 = -2711;
	uint64_t x43 = 4100553582624691228LLU;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -991972582;

    t9 = (x41>((x42-x43)^x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x45 = 56U;
	int64_t x46 = INT64_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t10 = -115636431;

    t10 = (x45>((x46-x47)^x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x49 = UINT32_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 3U;
	volatile int32_t x52 = -14878;

    t11 = (x49>((x50-x51)^x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x54 = UINT32_MAX;
	static volatile int16_t x55 = INT16_MIN;
	static volatile int64_t x56 = -1LL;
	int32_t t12 = -1795636;

    t12 = (x53>((x54-x55)^x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = -1;
	int64_t x62 = -1LL;
	int64_t x63 = INT64_MAX;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t13 = 22341;

    t13 = (x61>((x62-x63)^x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	volatile int16_t x66 = 121;
	int32_t x67 = -1;
	int64_t x68 = -7631057261LL;
	static int32_t t14 = -88829072;

    t14 = (x65>((x66-x67)^x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	uint8_t x74 = 92U;
	uint32_t x75 = 1728U;
	int64_t x76 = 2384176061822LL;

    t15 = (x73>((x74-x75)^x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = UINT8_MAX;
	static uint16_t x79 = 1127U;
	static uint64_t x80 = 901852342729821731LLU;
	static volatile int32_t t16 = 5220;

    t16 = (x77>((x78-x79)^x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x81 = -1;
	int16_t x82 = INT16_MAX;
	volatile int8_t x83 = -59;
	uint16_t x84 = 3U;
	volatile int32_t t17 = -8;

    t17 = (x81>((x82-x83)^x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = 129U;
	uint16_t x86 = 3U;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t18 = -23274046;

    t18 = (x85>((x86-x87)^x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = -1LL;
	int32_t x90 = 31638781;
	static int8_t x91 = -1;
	int32_t x92 = INT32_MAX;

    t19 = (x89>((x90-x91)^x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 0U;
	int32_t t20 = 15371144;

    t20 = (x93>((x94-x95)^x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MAX;
	static int8_t x98 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t21 = -172;

    t21 = (x97>((x98-x99)^x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = -1;
	uint32_t x107 = 87439U;
	static volatile int32_t t22 = -69574999;

    t22 = (x105>((x106-x107)^x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MIN;

    t23 = (x113>((x114-x115)^x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x118 = -1LL;
	uint32_t x119 = 255153797U;
	volatile int32_t t24 = -165;

    t24 = (x117>((x118-x119)^x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x122 = 13621U;
	volatile int8_t x123 = -1;
	uint16_t x124 = 128U;

    t25 = (x121>((x122-x123)^x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x126 = UINT32_MAX;
	int32_t t26 = -169;

    t26 = (x125>((x126-x127)^x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = 7LLU;
	int32_t x132 = -369507501;
	static int32_t t27 = -104508705;

    t27 = (x129>((x130-x131)^x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = 5;
	uint64_t x134 = 17947230569393425LLU;
	static volatile uint32_t x135 = 21474230U;
	volatile int32_t x136 = -389;

    t28 = (x133>((x134-x135)^x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x137 = 13;
	uint64_t x138 = UINT64_MAX;
	static int32_t x139 = -1;
	static int8_t x140 = 20;
	int32_t t29 = 0;

    t29 = (x137>((x138-x139)^x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = 2613453036LLU;
	static int32_t x142 = -12255;
	static int8_t x143 = 12;
	volatile int32_t t30 = -2910;

    t30 = (x141>((x142-x143)^x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = -1LL;
	uint64_t x146 = UINT64_MAX;
	int32_t t31 = 6;

    t31 = (x145>((x146-x147)^x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = 12581;
	static volatile int16_t x150 = INT16_MAX;
	static int64_t x152 = INT64_MAX;
	int32_t t32 = 180;

    t32 = (x149>((x150-x151)^x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 28U;
	int16_t x155 = INT16_MIN;
	static uint8_t x156 = 7U;

    t33 = (x153>((x154-x155)^x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = 6521;
	static uint16_t x158 = 3275U;
	static int16_t x159 = 120;
	int32_t x160 = INT32_MIN;
	int32_t t34 = -683923464;

    t34 = (x157>((x158-x159)^x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x161 = 50476U;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	volatile int32_t t35 = 7854;

    t35 = (x161>((x162-x163)^x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	volatile uint16_t x168 = UINT16_MAX;

    t36 = (x165>((x166-x167)^x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = INT8_MIN;
	static int64_t x170 = -117645795571347LL;
	static int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	static volatile int32_t t37 = 49183132;

    t37 = (x169>((x170-x171)^x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x178 = -54;
	static int16_t x179 = INT16_MIN;
	uint16_t x180 = 4395U;
	int32_t t38 = 6503;

    t38 = (x177>((x178-x179)^x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x182 = INT16_MAX;
	int8_t x183 = -1;
	int16_t x184 = 5505;

    t39 = (x181>((x182-x183)^x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -26LL;
	int32_t x187 = INT32_MIN;
	uint8_t x188 = 1U;
	static volatile int32_t t40 = 33306;

    t40 = (x185>((x186-x187)^x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = 1391246826LL;
	int8_t x190 = INT8_MIN;
	static int64_t x191 = 17634954511LL;
	uint8_t x192 = UINT8_MAX;

    t41 = (x189>((x190-x191)^x192));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x193 = -1LL;
	int16_t x194 = INT16_MIN;
	volatile int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MAX;
	int32_t t42 = -9333322;

    t42 = (x193>((x194-x195)^x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x197 = UINT16_MAX;
	volatile uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 36989LLU;
	int16_t x200 = -1;
	volatile int32_t t43 = 2089158;

    t43 = (x197>((x198-x199)^x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = 3543934891699LLU;
	int8_t x210 = -1;
	static int8_t x211 = 1;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t44 = -1547;

    t44 = (x209>((x210-x211)^x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x213 = 7056460450698474580LLU;
	static uint16_t x214 = 434U;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 5U;

    t45 = (x213>((x214-x215)^x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x217 = INT64_MAX;
	volatile int32_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int32_t t46 = -11;

    t46 = (x217>((x218-x219)^x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = INT64_MAX;
	int32_t x222 = -12;
	volatile uint16_t x223 = 10U;
	int32_t x224 = -1;

    t47 = (x221>((x222-x223)^x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = 84LL;
	static int16_t x226 = -1;
	volatile uint16_t x227 = 1U;
	volatile int32_t x228 = -1588142;
	volatile int32_t t48 = -2441160;

    t48 = (x225>((x226-x227)^x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x229 = -335;
	int32_t x230 = -1;
	static int32_t x231 = INT32_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t49 = 1022;

    t49 = (x229>((x230-x231)^x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = UINT16_MAX;
	int64_t x238 = 7438311715463LL;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = UINT8_MAX;

    t50 = (x237>((x238-x239)^x240));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = INT8_MAX;
	volatile int16_t x246 = INT16_MIN;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t51 = -2;

    t51 = (x245>((x246-x247)^x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x249 = -1;
	int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int8_t x252 = 37;
	int32_t t52 = 86;

    t52 = (x249>((x250-x251)^x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x253 = INT64_MAX;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	int16_t x256 = -3756;
	volatile int32_t t53 = -1;

    t53 = (x253>((x254-x255)^x256));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x261 = -6;
	int16_t x262 = -1;
	uint16_t x263 = 518U;
	static volatile int32_t x264 = INT32_MAX;
	volatile int32_t t54 = -105;

    t54 = (x261>((x262-x263)^x264));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x266 = -26;
	int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t55 = 31159;

    t55 = (x265>((x266-x267)^x268));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = -998LL;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 215350LLU;
	int16_t x272 = INT16_MIN;
	volatile int32_t t56 = 489647487;

    t56 = (x269>((x270-x271)^x272));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x273 = INT32_MAX;
	uint8_t x275 = 49U;
	int8_t x276 = 1;
	int32_t t57 = -9169677;

    t57 = (x273>((x274-x275)^x276));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x278 = 12U;
	uint64_t x280 = 294987266350LLU;
	volatile int32_t t58 = -236892372;

    t58 = (x277>((x278-x279)^x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	static volatile int8_t x284 = INT8_MIN;

    t59 = (x281>((x282-x283)^x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = -1;
	int8_t x287 = 13;
	volatile int32_t t60 = 3423138;

    t60 = (x285>((x286-x287)^x288));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = INT64_MAX;
	static int16_t x290 = -1;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = -1LL;
	volatile int32_t t61 = 0;

    t61 = (x289>((x290-x291)^x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x294 = INT16_MIN;
	int32_t x295 = -1;
	int32_t t62 = 220;

    t62 = (x293>((x294-x295)^x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x297 = 26U;
	int32_t x298 = INT32_MIN;
	int32_t t63 = -1929337;

    t63 = (x297>((x298-x299)^x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x301 = -1;
	int16_t x302 = -17;
	static uint8_t x303 = 9U;
	int8_t x304 = INT8_MAX;
	static volatile int32_t t64 = -890629;

    t64 = (x301>((x302-x303)^x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MIN;
	int32_t x307 = -1;
	uint32_t x308 = 615745347U;
	volatile int32_t t65 = -52;

    t65 = (x305>((x306-x307)^x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x309 = -1LL;
	volatile int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	static int16_t x312 = 1270;
	volatile int32_t t66 = 48776645;

    t66 = (x309>((x310-x311)^x312));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x313 = 9;
	int8_t x314 = -1;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = UINT32_MAX;
	static int32_t t67 = 5061;

    t67 = (x313>((x314-x315)^x316));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x317 = INT16_MAX;
	uint64_t x318 = 319478272147088353LLU;
	int8_t x319 = INT8_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile int32_t t68 = 36;

    t68 = (x317>((x318-x319)^x320));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x321 = 742694374035694LLU;
	int8_t x322 = 0;
	int32_t x323 = INT32_MAX;
	volatile int32_t x324 = 7819020;
	volatile int32_t t69 = 136077;

    t69 = (x321>((x322-x323)^x324));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x330 = -1;
	uint8_t x331 = 26U;
	static int64_t x332 = INT64_MIN;
	int32_t t70 = -12048;

    t70 = (x329>((x330-x331)^x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	static uint16_t x335 = 0U;
	int32_t x336 = INT32_MIN;

    t71 = (x333>((x334-x335)^x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x337 = 11;
	uint8_t x338 = UINT8_MAX;
	static uint64_t x339 = 91560LLU;
	int64_t x340 = -12335453337049561LL;
	static int32_t t72 = 1050758880;

    t72 = (x337>((x338-x339)^x340));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x341 = INT32_MIN;
	static int8_t x342 = -49;
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = 131;
	volatile int32_t t73 = -5730;

    t73 = (x341>((x342-x343)^x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x345 = INT8_MAX;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MIN;
	int32_t t74 = 38710205;

    t74 = (x345>((x346-x347)^x348));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x349 = 25874U;
	int64_t x350 = -72LL;
	volatile int64_t x351 = INT64_MIN;
	int32_t t75 = -264673418;

    t75 = (x349>((x350-x351)^x352));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x353 = -1LL;
	static volatile int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t76 = -100;

    t76 = (x353>((x354-x355)^x356));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x357 = UINT8_MAX;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = -1LL;
	static int64_t x360 = INT64_MIN;

    t77 = (x357>((x358-x359)^x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x362 = -44;
	int16_t x363 = INT16_MIN;
	int32_t t78 = -659412842;

    t78 = (x361>((x362-x363)^x364));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x366 = -1LL;
	volatile uint32_t x368 = UINT32_MAX;

    t79 = (x365>((x366-x367)^x368));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x369 = INT32_MIN;
	static uint32_t x372 = 899070U;
	int32_t t80 = -20048960;

    t80 = (x369>((x370-x371)^x372));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x373 = INT64_MIN;
	uint16_t x375 = UINT16_MAX;
	uint32_t x376 = 655239U;

    t81 = (x373>((x374-x375)^x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x381 = INT16_MIN;
	static uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	int16_t x384 = 5686;
	static volatile int32_t t82 = -6679607;

    t82 = (x381>((x382-x383)^x384));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x386 = 22379U;
	volatile int32_t t83 = -11228962;

    t83 = (x385>((x386-x387)^x388));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x389 = INT32_MAX;
	static int64_t x391 = 2358542347287LL;
	volatile uint8_t x392 = 11U;
	volatile int32_t t84 = -61091414;

    t84 = (x389>((x390-x391)^x392));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x393 = -1;
	int64_t x394 = INT64_MAX;
	uint32_t x395 = UINT32_MAX;
	volatile int32_t x396 = -1;
	static volatile int32_t t85 = 872459539;

    t85 = (x393>((x394-x395)^x396));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x397 = 31;
	static int16_t x398 = INT16_MAX;
	static volatile int64_t x399 = -1LL;
	int8_t x400 = -1;
	int32_t t86 = -23;

    t86 = (x397>((x398-x399)^x400));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x401 = UINT64_MAX;
	uint16_t x403 = 256U;
	int16_t x404 = INT16_MAX;
	int32_t t87 = -1817001;

    t87 = (x401>((x402-x403)^x404));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = INT64_MAX;
	int8_t x406 = 6;
	uint64_t x407 = 295970027LLU;
	int8_t x408 = INT8_MAX;
	static int32_t t88 = 513560;

    t88 = (x405>((x406-x407)^x408));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x409 = INT8_MIN;
	int32_t x410 = -92352730;
	int64_t x411 = INT64_MIN;
	static int8_t x412 = INT8_MAX;
	int32_t t89 = 265769028;

    t89 = (x409>((x410-x411)^x412));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x413 = -1;
	uint64_t x414 = 13069751469LLU;
	volatile uint32_t x415 = 14U;
	int8_t x416 = -1;
	static int32_t t90 = 0;

    t90 = (x413>((x414-x415)^x416));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = INT64_MIN;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MIN;
	static int32_t t91 = 120;

    t91 = (x417>((x418-x419)^x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x423 = -26707667;
	volatile int64_t x424 = INT64_MIN;
	int32_t t92 = 2816402;

    t92 = (x421>((x422-x423)^x424));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x426 = 121994U;
	uint8_t x427 = 7U;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t93 = -1813;

    t93 = (x425>((x426-x427)^x428));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x437 = -1;
	volatile int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;
	static int32_t t94 = 4653430;

    t94 = (x437>((x438-x439)^x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x442 = 16942U;
	uint64_t x443 = UINT64_MAX;
	int32_t t95 = -151986932;

    t95 = (x441>((x442-x443)^x444));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x445 = 84771680U;
	uint32_t x446 = 19763925U;
	int64_t x447 = -2881231LL;
	int16_t x448 = 2915;

    t96 = (x445>((x446-x447)^x448));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x449 = 19373LL;
	int8_t x450 = -1;
	int8_t x451 = -1;

    t97 = (x449>((x450-x451)^x452));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x453 = -1;
	int64_t x454 = -79LL;
	static int32_t x455 = INT32_MIN;
	volatile int32_t t98 = -5170640;

    t98 = (x453>((x454-x455)^x456));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x457 = -748652053LL;
	int16_t x458 = INT16_MAX;
	int32_t x459 = -9;
	volatile int32_t x460 = INT32_MIN;
	volatile int32_t t99 = -1875;

    t99 = (x457>((x458-x459)^x460));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x461 = INT32_MIN;
	uint64_t x462 = 75599LLU;
	static uint8_t x463 = UINT8_MAX;

    t100 = (x461>((x462-x463)^x464));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x465 = 711634952U;
	int8_t x466 = -1;
	static int8_t x467 = 0;
	uint64_t x468 = 36491876LLU;
	int32_t t101 = 1588391;

    t101 = (x465>((x466-x467)^x468));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x469 = UINT64_MAX;
	volatile int32_t x470 = -21;
	volatile int8_t x471 = 1;

    t102 = (x469>((x470-x471)^x472));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x473 = UINT32_MAX;
	static uint64_t x474 = UINT64_MAX;
	int8_t x475 = 7;
	static volatile int32_t x476 = -32291522;
	int32_t t103 = -39;

    t103 = (x473>((x474-x475)^x476));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x477 = 1;
	static int16_t x478 = -1;
	volatile int32_t x479 = 0;
	int32_t t104 = 800;

    t104 = (x477>((x478-x479)^x480));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x481 = -2256;
	static volatile uint16_t x482 = 5028U;
	int32_t x483 = -2480797;
	static uint8_t x484 = 0U;
	int32_t t105 = 5692509;

    t105 = (x481>((x482-x483)^x484));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x485 = 93U;
	int64_t x486 = 227LL;
	volatile int16_t x487 = INT16_MIN;
	uint8_t x488 = UINT8_MAX;
	int32_t t106 = 24;

    t106 = (x485>((x486-x487)^x488));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	uint32_t x491 = 1713833750U;

    t107 = (x489>((x490-x491)^x492));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x494 = INT16_MIN;
	int64_t x496 = -1971LL;

    t108 = (x493>((x494-x495)^x496));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x502 = INT64_MIN;
	uint64_t x504 = 37799500LLU;
	volatile int32_t t109 = 87562;

    t109 = (x501>((x502-x503)^x504));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x505 = INT32_MAX;
	uint32_t x506 = 977482U;
	int32_t x507 = -1;
	uint16_t x508 = 446U;
	volatile int32_t t110 = 912051;

    t110 = (x505>((x506-x507)^x508));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x513 = 20625LL;
	int8_t x515 = -2;
	static int32_t t111 = -408;

    t111 = (x513>((x514-x515)^x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x517 = INT8_MAX;
	uint8_t x518 = 98U;
	static int8_t x519 = -1;
	static int32_t x520 = INT32_MIN;

    t112 = (x517>((x518-x519)^x520));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x521 = INT32_MIN;
	uint8_t x522 = 4U;
	uint32_t x523 = 29141094U;
	volatile int32_t t113 = 2;

    t113 = (x521>((x522-x523)^x524));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x525 = -13001;
	uint8_t x526 = 2U;
	uint8_t x528 = 4U;
	static int32_t t114 = -5746126;

    t114 = (x525>((x526-x527)^x528));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x531 = 78U;
	volatile int32_t t115 = 302681430;

    t115 = (x529>((x530-x531)^x532));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x533 = 1417;
	uint16_t x534 = 29346U;
	int16_t x536 = INT16_MIN;
	int32_t t116 = -7;

    t116 = (x533>((x534-x535)^x536));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x537 = 2U;
	uint32_t x538 = UINT32_MAX;
	uint16_t x540 = 12U;
	volatile int32_t t117 = -14143519;

    t117 = (x537>((x538-x539)^x540));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = INT16_MIN;
	uint32_t x542 = 87936U;
	static uint8_t x543 = UINT8_MAX;
	volatile uint64_t x544 = UINT64_MAX;
	int32_t t118 = 97;

    t118 = (x541>((x542-x543)^x544));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = -1;
	volatile int8_t x547 = -1;
	uint16_t x548 = 140U;
	volatile int32_t t119 = -529;

    t119 = (x545>((x546-x547)^x548));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x549 = INT8_MIN;
	volatile int16_t x550 = -186;
	static uint8_t x551 = 0U;
	int16_t x552 = -1;
	int32_t t120 = -23738;

    t120 = (x549>((x550-x551)^x552));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x554 = 65LLU;
	static int16_t x555 = 7;
	uint16_t x556 = 73U;
	int32_t t121 = -89638;

    t121 = (x553>((x554-x555)^x556));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x557 = 30637U;
	int32_t x558 = INT32_MIN;
	uint32_t x559 = 6158879U;
	int8_t x560 = -1;
	int32_t t122 = 13;

    t122 = (x557>((x558-x559)^x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x561 = INT16_MAX;
	uint64_t x562 = 17497658860523LLU;
	int32_t x563 = -1;
	uint32_t x564 = 8244151U;
	int32_t t123 = -72;

    t123 = (x561>((x562-x563)^x564));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x567 = 0;
	int32_t x568 = INT32_MIN;

    t124 = (x565>((x566-x567)^x568));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x573 = 14449LLU;
	int32_t x574 = INT32_MIN;
	int16_t x575 = 0;
	uint16_t x576 = 28U;

    t125 = (x573>((x574-x575)^x576));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x577 = 6369U;
	static int32_t x578 = -1;
	uint8_t x579 = 14U;
	static int32_t x580 = -1;

    t126 = (x577>((x578-x579)^x580));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MIN;
	int32_t x583 = 3526;
	int8_t x584 = -26;
	int32_t t127 = -117794725;

    t127 = (x581>((x582-x583)^x584));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x585 = INT8_MAX;
	int32_t x586 = INT32_MIN;
	uint64_t x587 = 130040388032LLU;
	int32_t x588 = -1;
	volatile int32_t t128 = 338053;

    t128 = (x585>((x586-x587)^x588));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x593 = -3961879693297463001LL;
	uint16_t x594 = UINT16_MAX;
	int64_t x596 = -1LL;

    t129 = (x593>((x594-x595)^x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x597 = UINT64_MAX;
	int64_t x598 = 49919831203249848LL;
	volatile uint32_t x599 = 8U;
	int8_t x600 = INT8_MAX;
	volatile int32_t t130 = 1409371;

    t130 = (x597>((x598-x599)^x600));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x601 = INT32_MIN;
	volatile int16_t x603 = -1;
	uint64_t x604 = 1LLU;
	volatile int32_t t131 = 32;

    t131 = (x601>((x602-x603)^x604));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = INT16_MAX;
	uint16_t x606 = 74U;

    t132 = (x605>((x606-x607)^x608));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x609 = 58U;
	volatile int16_t x610 = -22;
	uint8_t x612 = 2U;
	volatile int32_t t133 = -12;

    t133 = (x609>((x610-x611)^x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x614 = 3404638979LL;
	volatile int16_t x616 = INT16_MIN;
	int32_t t134 = -23;

    t134 = (x613>((x614-x615)^x616));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x617 = INT64_MIN;
	uint64_t x618 = 467910186LLU;
	int8_t x619 = -1;
	volatile uint32_t x620 = 1990U;
	volatile int32_t t135 = -102;

    t135 = (x617>((x618-x619)^x620));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x621 = 16552U;
	uint32_t x622 = 50719942U;
	int32_t t136 = 1260;

    t136 = (x621>((x622-x623)^x624));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x625 = 0;
	uint64_t x628 = 4521442596550677488LLU;
	volatile int32_t t137 = 296616;

    t137 = (x625>((x626-x627)^x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x629 = -12;
	static int16_t x630 = -1;
	uint64_t x631 = UINT64_MAX;
	int16_t x632 = -1;
	int32_t t138 = 7915;

    t138 = (x629>((x630-x631)^x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x633 = -1969;
	static int32_t x634 = -1;
	static int32_t x636 = -1;
	volatile int32_t t139 = -4;

    t139 = (x633>((x634-x635)^x636));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x637 = 3;
	uint32_t x638 = 19U;
	int16_t x639 = INT16_MAX;
	static volatile int32_t t140 = 570098568;

    t140 = (x637>((x638-x639)^x640));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x641 = -21;
	int8_t x642 = 1;
	volatile int8_t x643 = INT8_MIN;
	volatile uint64_t x644 = 21075614203472LLU;
	volatile int32_t t141 = 25702;

    t141 = (x641>((x642-x643)^x644));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x646 = -402;
	uint32_t x647 = 80U;
	int64_t x648 = INT64_MIN;
	int32_t t142 = 5413;

    t142 = (x645>((x646-x647)^x648));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x650 = 3;
	int32_t x651 = INT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t143 = -10;

    t143 = (x649>((x650-x651)^x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = INT32_MIN;
	uint8_t x659 = 3U;
	int64_t x660 = INT64_MAX;
	int32_t t144 = -62813;

    t144 = (x657>((x658-x659)^x660));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x665 = 14U;
	static int64_t x666 = INT64_MIN;
	uint64_t x667 = 2233000276367076388LLU;
	int8_t x668 = INT8_MIN;

    t145 = (x665>((x666-x667)^x668));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x677 = 11U;
	volatile int8_t x678 = INT8_MAX;
	uint32_t x679 = 8U;
	uint8_t x680 = 93U;
	static int32_t t146 = 406397645;

    t146 = (x677>((x678-x679)^x680));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x681 = -1LL;
	int8_t x682 = INT8_MIN;
	uint16_t x683 = UINT16_MAX;
	static int16_t x684 = -1;
	static int32_t t147 = -1247;

    t147 = (x681>((x682-x683)^x684));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x685 = INT32_MAX;
	int8_t x686 = INT8_MIN;
	static volatile int8_t x687 = INT8_MAX;
	int64_t x688 = 225265983LL;
	volatile int32_t t148 = -523771;

    t148 = (x685>((x686-x687)^x688));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x689 = UINT16_MAX;
	volatile int8_t x690 = INT8_MIN;
	int16_t x691 = -448;
	volatile int16_t x692 = INT16_MAX;

    t149 = (x689>((x690-x691)^x692));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x693 = -5999440127LL;
	static volatile uint32_t x695 = 8173459U;
	int32_t x696 = INT32_MAX;

    t150 = (x693>((x694-x695)^x696));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x697 = -65259653;
	uint8_t x698 = 5U;
	int8_t x699 = 11;
	uint32_t x700 = 14U;
	int32_t t151 = -4461620;

    t151 = (x697>((x698-x699)^x700));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x701 = INT64_MAX;
	int32_t x702 = INT32_MIN;
	int64_t x703 = INT64_MIN;
	volatile int64_t x704 = -1LL;
	static int32_t t152 = -17820827;

    t152 = (x701>((x702-x703)^x704));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x705 = INT16_MIN;
	static int32_t x706 = -1;
	uint8_t x707 = UINT8_MAX;
	static int8_t x708 = INT8_MAX;
	volatile int32_t t153 = 56724563;

    t153 = (x705>((x706-x707)^x708));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x711 = -1;
	int16_t x712 = INT16_MAX;
	int32_t t154 = 8342715;

    t154 = (x709>((x710-x711)^x712));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x715 = -8;
	volatile int32_t t155 = 251;

    t155 = (x713>((x714-x715)^x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x717 = 49216U;
	int8_t x718 = -14;
	volatile int32_t x719 = 9293;

    t156 = (x717>((x718-x719)^x720));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x725 = 46U;
	volatile uint8_t x726 = UINT8_MAX;
	int32_t x728 = -24;

    t157 = (x725>((x726-x727)^x728));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x729 = 8054U;
	static uint64_t x730 = 252564256053113LLU;
	int16_t x731 = INT16_MAX;
	static int64_t x732 = INT64_MIN;
	volatile int32_t t158 = 145;

    t158 = (x729>((x730-x731)^x732));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x733 = INT16_MIN;
	static int64_t x734 = -1LL;
	int16_t x735 = 48;
	static volatile int32_t t159 = -144775829;

    t159 = (x733>((x734-x735)^x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x738 = INT32_MIN;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 82U;
	int32_t t160 = 708;

    t160 = (x737>((x738-x739)^x740));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x742 = INT8_MAX;
	volatile int32_t t161 = -3;

    t161 = (x741>((x742-x743)^x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x745 = -1;
	uint32_t x747 = 63742U;
	static uint8_t x748 = 5U;
	int32_t t162 = 111570;

    t162 = (x745>((x746-x747)^x748));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x749 = INT32_MAX;
	volatile uint8_t x750 = UINT8_MAX;
	int32_t x752 = -1;

    t163 = (x749>((x750-x751)^x752));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x754 = INT16_MIN;
	int8_t x755 = INT8_MIN;
	uint16_t x756 = 1974U;
	static int32_t t164 = 15;

    t164 = (x753>((x754-x755)^x756));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x757 = INT16_MIN;
	static uint16_t x758 = UINT16_MAX;
	int64_t x759 = 1651643244757080LL;
	static volatile int32_t t165 = 1;

    t165 = (x757>((x758-x759)^x760));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = INT64_MAX;
	volatile int8_t x762 = -15;
	volatile uint32_t x763 = 24580454U;
	static int16_t x764 = -14113;
	volatile int32_t t166 = 10;

    t166 = (x761>((x762-x763)^x764));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x765 = UINT8_MAX;
	uint8_t x766 = UINT8_MAX;
	int32_t x767 = -5188;
	uint8_t x768 = 15U;

    t167 = (x765>((x766-x767)^x768));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x772 = 3519;
	static volatile int32_t t168 = 174836859;

    t168 = (x769>((x770-x771)^x772));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x774 = 3147796;
	int8_t x775 = -3;
	uint8_t x776 = UINT8_MAX;
	int32_t t169 = 1;

    t169 = (x773>((x774-x775)^x776));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x778 = UINT8_MAX;
	static int16_t x779 = -72;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t170 = 8;

    t170 = (x777>((x778-x779)^x780));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x781 = INT64_MAX;
	int8_t x782 = -11;
	int16_t x783 = -1;
	static int32_t x784 = INT32_MIN;
	volatile int32_t t171 = 16074659;

    t171 = (x781>((x782-x783)^x784));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x789 = INT16_MAX;
	int16_t x790 = INT16_MAX;
	int16_t x791 = -1;
	int8_t x792 = INT8_MIN;
	static volatile int32_t t172 = 4892;

    t172 = (x789>((x790-x791)^x792));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x795 = 306U;
	uint64_t x796 = 1373023LLU;
	int32_t t173 = -248780033;

    t173 = (x793>((x794-x795)^x796));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x797 = -1;
	static int32_t x798 = -1;
	uint32_t x799 = 111217U;
	uint16_t x800 = 36U;

    t174 = (x797>((x798-x799)^x800));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x801 = 0U;
	int32_t x802 = -455;
	volatile int8_t x803 = -1;
	uint32_t x804 = UINT32_MAX;

    t175 = (x801>((x802-x803)^x804));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x805 = INT64_MAX;
	volatile int8_t x806 = -2;
	uint32_t x807 = UINT32_MAX;
	static volatile int32_t x808 = INT32_MIN;
	volatile int32_t t176 = -66213004;

    t176 = (x805>((x806-x807)^x808));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x809 = INT32_MIN;
	int8_t x811 = INT8_MAX;

    t177 = (x809>((x810-x811)^x812));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x817 = -120;
	uint16_t x818 = 24360U;
	int32_t x819 = -63258;
	int64_t x820 = -1LL;

    t178 = (x817>((x818-x819)^x820));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x821 = -1;
	uint32_t x822 = 258697704U;
	uint32_t x824 = 2U;
	int32_t t179 = 2741834;

    t179 = (x821>((x822-x823)^x824));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x826 = -1;
	int8_t x827 = INT8_MAX;
	int32_t x828 = INT32_MIN;
	int32_t t180 = 1;

    t180 = (x825>((x826-x827)^x828));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x829 = -1LL;
	uint8_t x830 = 92U;
	uint16_t x832 = UINT16_MAX;

    t181 = (x829>((x830-x831)^x832));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x833 = 78;
	int64_t x834 = -1LL;
	uint8_t x835 = 93U;
	volatile int8_t x836 = INT8_MIN;
	volatile int32_t t182 = -362363762;

    t182 = (x833>((x834-x835)^x836));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x837 = 232;
	int16_t x838 = -218;
	static int64_t x839 = -51581794LL;
	volatile int16_t x840 = 7493;

    t183 = (x837>((x838-x839)^x840));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x841 = INT16_MAX;
	int16_t x842 = -1;
	int16_t x843 = INT16_MIN;
	uint8_t x844 = 1U;
	volatile int32_t t184 = 26195102;

    t184 = (x841>((x842-x843)^x844));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x845 = -20;
	int64_t x848 = INT64_MIN;
	static int32_t t185 = 123;

    t185 = (x845>((x846-x847)^x848));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x853 = -55287013357LL;
	int64_t x854 = 17973424919LL;
	volatile int32_t t186 = 1;

    t186 = (x853>((x854-x855)^x856));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x857 = 125U;
	int16_t x859 = -591;
	uint64_t x860 = 67LLU;
	static int32_t t187 = 2;

    t187 = (x857>((x858-x859)^x860));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x862 = INT8_MIN;
	static int32_t x863 = -1;
	int64_t x864 = INT64_MIN;
	int32_t t188 = 4047;

    t188 = (x861>((x862-x863)^x864));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x869 = UINT16_MAX;
	int16_t x871 = 0;
	static int8_t x872 = INT8_MIN;
	volatile int32_t t189 = 3361384;

    t189 = (x869>((x870-x871)^x872));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x873 = 1;
	static int32_t x875 = INT32_MAX;

    t190 = (x873>((x874-x875)^x876));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x877 = 859U;
	int16_t x878 = INT16_MIN;
	static int64_t x879 = 159005719053206813LL;
	uint8_t x880 = UINT8_MAX;
	int32_t t191 = 482;

    t191 = (x877>((x878-x879)^x880));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x882 = 5U;
	int8_t x883 = -1;
	int16_t x884 = -1;
	static int32_t t192 = 252;

    t192 = (x881>((x882-x883)^x884));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x885 = INT8_MAX;
	static uint16_t x886 = 18028U;
	uint32_t x888 = UINT32_MAX;

    t193 = (x885>((x886-x887)^x888));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x889 = INT8_MIN;
	uint32_t x890 = UINT32_MAX;
	int16_t x891 = INT16_MIN;
	int32_t x892 = INT32_MIN;

    t194 = (x889>((x890-x891)^x892));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x893 = INT16_MIN;
	volatile int32_t x894 = -15001;
	int16_t x895 = -1;
	int32_t x896 = INT32_MIN;
	static int32_t t195 = 12477;

    t195 = (x893>((x894-x895)^x896));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x897 = 21U;
	int8_t x898 = INT8_MIN;
	int16_t x899 = INT16_MIN;
	int32_t t196 = 1;

    t196 = (x897>((x898-x899)^x900));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x902 = INT16_MIN;
	volatile int64_t x903 = INT64_MIN;
	static int64_t x904 = 13755334068969LL;
	volatile int32_t t197 = -3091;

    t197 = (x901>((x902-x903)^x904));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x906 = UINT16_MAX;
	static int8_t x908 = -1;
	int32_t t198 = -157597;

    t198 = (x905>((x906-x907)^x908));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x911 = 15U;
	uint64_t x912 = 2361LLU;
	volatile int32_t t199 = -702;

    t199 = (x909>((x910-x911)^x912));

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

