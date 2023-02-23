
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

int64_t x3 = -1LL;
static int8_t x4 = INT8_MIN;
static int64_t x5 = -1LL;
int16_t x7 = -34;
static int16_t x10 = INT16_MIN;
uint32_t x20 = 1343709U;
int16_t x25 = -6108;
int32_t x27 = INT32_MAX;
int16_t x31 = -4106;
uint8_t x34 = UINT8_MAX;
int8_t x42 = INT8_MIN;
static uint32_t x44 = 3692U;
uint64_t t8 = 0LLU;
int32_t x61 = INT32_MIN;
uint64_t x86 = 0LLU;
int32_t x87 = INT32_MAX;
int64_t x97 = 938269961986LL;
int8_t x103 = 0;
int64_t x104 = -1LL;
static int64_t t14 = -1968LL;
int64_t x118 = INT64_MAX;
volatile uint16_t x122 = 367U;
static int32_t x124 = INT32_MIN;
static uint64_t x139 = 132301210LLU;
static uint64_t x142 = 262492676675933LLU;
volatile uint64_t t19 = 1027356LLU;
static uint8_t x146 = UINT8_MAX;
int8_t x149 = INT8_MAX;
volatile int16_t x150 = -3;
int32_t x155 = -1;
volatile int8_t x158 = INT8_MIN;
volatile int64_t t25 = -948920LL;
volatile uint32_t x188 = UINT32_MAX;
static volatile uint64_t t28 = 276456497196324LLU;
int16_t x203 = INT16_MIN;
volatile int64_t x215 = INT64_MAX;
int8_t x217 = -26;
uint32_t x218 = 3232780U;
uint64_t t35 = 111041828242LLU;
uint64_t x231 = UINT64_MAX;
uint64_t t37 = 184858879059975112LLU;
int16_t x236 = -30;
int64_t t38 = 265811916LL;
volatile uint64_t x239 = 8250773887484915981LLU;
int64_t x240 = INT64_MIN;
volatile uint64_t t39 = 61069344022150583LLU;
uint16_t x246 = UINT16_MAX;
static int32_t x257 = -1;
volatile int32_t t43 = 222387152;
int32_t x267 = 54;
volatile uint32_t x276 = UINT32_MAX;
uint32_t t46 = 23443334U;
uint8_t x290 = UINT8_MAX;
volatile int64_t t52 = -263188LL;
int16_t x322 = 1;
uint64_t t55 = 6LLU;
int8_t x335 = INT8_MIN;
uint64_t x351 = UINT64_MAX;
volatile uint32_t t61 = 476953U;
volatile uint64_t t64 = 589097LLU;
static int64_t t65 = -213888572552408230LL;
int8_t x406 = INT8_MIN;
int32_t x413 = INT32_MAX;
int16_t x421 = INT16_MIN;
uint16_t x423 = 24U;
int64_t x433 = INT64_MAX;
uint8_t x434 = UINT8_MAX;
int64_t t72 = 58783143156346731LL;
uint64_t t73 = 2LLU;
static int32_t x441 = -1;
volatile int32_t t74 = -551;
uint8_t x456 = UINT8_MAX;
uint32_t x470 = 779812U;
volatile uint16_t x479 = 15U;
int8_t x481 = INT8_MIN;
volatile uint32_t x489 = 4726U;
uint32_t x492 = 12055U;
int32_t x494 = 1474;
uint16_t x495 = 111U;
static int64_t x496 = -1LL;
int16_t x509 = -1;
uint64_t t85 = 473789681LLU;
int32_t x521 = INT32_MIN;
static int16_t x551 = INT16_MIN;
volatile uint64_t t91 = 19304LLU;
uint8_t x573 = 7U;
static int8_t x588 = -1;
uint64_t x599 = 890612310610394LLU;
int8_t x601 = INT8_MIN;
int32_t x603 = 1013050;
uint32_t x605 = 1937349126U;
uint16_t x612 = 1819U;
static int64_t x629 = INT64_MIN;
volatile int16_t x631 = -1;
uint64_t x642 = 5487108465284376LLU;
uint8_t x645 = 5U;
static int32_t x652 = -5133726;
static int64_t x658 = 122367486LL;
static uint8_t x659 = 97U;
int32_t x661 = -3555;
uint32_t t114 = 4U;
uint8_t x675 = 95U;
int32_t x686 = INT32_MIN;
volatile uint64_t x690 = UINT64_MAX;
uint16_t x692 = 30233U;
volatile uint64_t t118 = 736365978470681407LLU;
int32_t x708 = -1;
volatile uint64_t t120 = 63LLU;
static uint32_t x709 = 60846224U;
static int16_t x713 = INT16_MIN;
uint32_t x722 = 772U;
uint8_t x723 = UINT8_MAX;
int8_t x734 = INT8_MIN;
volatile uint8_t x741 = 9U;
volatile int32_t t130 = 65058622;
static int8_t x779 = 12;
static uint32_t x784 = 6U;
static uint32_t t133 = 1287U;
volatile uint16_t x799 = 12U;
int16_t x806 = INT16_MIN;
volatile uint16_t x807 = 23U;
static int32_t t137 = 96;
volatile uint64_t t138 = 11359336LLU;
int64_t x818 = -1LL;
static uint8_t x826 = 5U;
int8_t x838 = 0;
uint8_t x839 = UINT8_MAX;
int8_t x840 = INT8_MIN;
uint64_t x855 = 3945724316083557LLU;
int16_t x861 = INT16_MAX;
int64_t x877 = -1LL;
int32_t x879 = INT32_MIN;
volatile int64_t t146 = 140336002769LL;
int32_t x881 = INT32_MAX;
uint64_t x886 = 14573209LLU;
volatile uint64_t x897 = 3970192545363450140LLU;
int8_t x898 = INT8_MAX;
volatile uint64_t t149 = 743LLU;
static int8_t x902 = INT8_MIN;
uint32_t t150 = 412149408U;
int16_t x930 = INT16_MIN;
static uint16_t x938 = 2011U;
uint32_t x943 = 546642U;
volatile uint8_t x962 = 43U;
volatile int32_t x963 = -1;
static int32_t t159 = 1589;
static uint64_t x967 = 35464457LLU;
int16_t x977 = -1797;
uint16_t x981 = 10552U;
static uint64_t x987 = 224599673LLU;
int8_t x1011 = INT8_MIN;
int64_t x1019 = -1LL;
volatile int64_t t168 = 7362141299LL;
int16_t x1030 = -1;
int32_t x1034 = -1;
uint8_t x1039 = 1U;
static int64_t x1040 = 9323LL;
int16_t x1057 = 8;
uint64_t x1063 = 419927953507LLU;
uint64_t t175 = 118357122701927LLU;
volatile int32_t x1066 = INT32_MIN;
uint64_t x1074 = 289091713LLU;
uint64_t x1083 = UINT64_MAX;
int64_t x1092 = -1LL;
uint32_t x1095 = 1915017088U;
static int8_t x1102 = -1;
volatile uint64_t t184 = 448LLU;
static int8_t x1110 = -1;
volatile uint64_t t185 = 20269723480850047LLU;
static int32_t x1132 = 0;
volatile int64_t x1166 = 17425551LL;
static int64_t t190 = -413455736LL;
uint64_t t191 = 213987427416531LLU;
volatile int32_t t192 = -1;
int32_t x1197 = -1;
static int8_t x1204 = -15;
int16_t x1219 = -3;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int8_t x2 = 44;
	volatile int64_t t0 = -175918626477802LL;

    t0 = (x1-((x2-x3)*x4));

    if (t0 != -27008LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = 45415231U;
	int16_t x8 = -1;
	int64_t t1 = 22391458228258815LL;

    t1 = (x5-((x6-x7)*x8));

    if (t1 != -4249552032LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = -1LL;
	uint64_t t2 = 25605761349025267LLU;

    t2 = (x9-((x10-x11)*x12));

    if (t2 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -31;
	static uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MAX;
	volatile uint64_t t3 = 731312LLU;

    t3 = (x17-((x18-x19)*x20));

    if (t3 != 2885593105170401LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x26 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t4 = 1401U;

    t4 = (x25-((x26-x27)*x28));

    if (t4 != 4294961188U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x29 = 338283U;
	uint64_t x30 = 1376628380884LLU;
	uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 11182610361859955LLU;

    t5 = (x29-((x30-x31)*x32));

    if (t5 != 1376628723273LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -1;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 286405561519665498LLU;
	static uint64_t t6 = 176699LLU;

    t6 = (x33-((x34-x35)*x36));

    if (t6 != 467152545803838975LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = -1LL;
	volatile int32_t x43 = INT32_MIN;
	int64_t t7 = 71LL;

    t7 = (x41-((x42-x43)*x44));

    if (t7 != -4294494721LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x45 = 236U;
	static uint64_t x46 = 174040745300LLU;
	volatile uint32_t x47 = 1320U;
	int8_t x48 = -58;

    t8 = (x45-((x46-x47)*x48));

    if (t8 != 10094363151076LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x62 = 471678788874566383LLU;
	int32_t x63 = -1;
	int32_t x64 = -5620;
	uint64_t t9 = 1905117046LLU;

    t9 = (x61-((x62-x63)*x64));

    if (t9 != 12950390932449713344LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x73 = INT16_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = 113;
	uint32_t t10 = 1665U;

    t10 = (x73-((x74-x75)*x76));

    if (t10 != 18416U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x77 = 3963437127LL;
	volatile int16_t x78 = -7785;
	uint16_t x79 = 5U;
	int16_t x80 = 12;
	volatile int64_t t11 = -432316114964086LL;

    t11 = (x77-((x78-x79)*x80));

    if (t11 != 3963530607LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x85 = -1;
	volatile int8_t x88 = 0;
	uint64_t t12 = UINT64_MAX;

    t12 = (x85-((x86-x87)*x88));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x98 = -8;
	int16_t x99 = 468;
	int64_t x100 = 3943LL;
	int64_t t13 = -415224178292560LL;

    t13 = (x97-((x98-x99)*x100));

    if (t13 != 938271838854LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x101 = INT16_MAX;
	int8_t x102 = -7;

    t14 = (x101-((x102-x103)*x104));

    if (t14 != 32760LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	volatile int16_t x107 = INT16_MIN;
	uint32_t x108 = 634931U;
	uint64_t t15 = 29LLU;

    t15 = (x105-((x106-x107)*x108));

    if (t15 != 18446744070084636722LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x117 = UINT16_MAX;
	static uint16_t x119 = UINT16_MAX;
	int16_t x120 = -1;
	static volatile int64_t t16 = INT64_MAX;

    t16 = (x117-((x118-x119)*x120));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x121 = -1;
	static uint64_t x123 = 1929LLU;
	volatile uint64_t t17 = 7832053LLU;

    t17 = (x121-((x122-x123)*x124));

    if (t17 != 18446740719340093439LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x137 = 1U;
	static uint64_t x138 = 42977900605218189LLU;
	volatile int16_t x140 = -368;
	volatile uint64_t t18 = 41998531722893242LLU;

    t18 = (x137-((x138-x139)*x140));

    if (t18 != 15815867374033448273LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x141 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MAX;

    t19 = (x141-((x142-x143)*x144));

    if (t19 != 9845646534917577181LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x145 = INT16_MAX;
	int16_t x147 = 520;
	int64_t x148 = 3558LL;
	volatile int64_t t20 = -9801692745070622LL;

    t20 = (x145-((x146-x147)*x148));

    if (t20 != 975637LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x151 = INT8_MIN;
	uint8_t x152 = 97U;
	volatile int32_t t21 = 5;

    t21 = (x149-((x150-x151)*x152));

    if (t21 != -11998) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x153 = -1;
	uint64_t x154 = 229122637814064LLU;
	static int8_t x156 = 1;
	volatile uint64_t t22 = 6682893465419798LLU;

    t22 = (x153-((x154-x155)*x156));

    if (t22 != 18446514951071737550LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x157 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MAX;
	uint64_t t23 = 26LLU;

    t23 = (x157-((x158-x159)*x160));

    if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x165 = UINT8_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = UINT64_MAX;
	uint64_t t24 = 84306112450548LLU;

    t24 = (x165-((x166-x167)*x168));

    if (t24 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	int64_t x172 = 1901LL;

    t25 = (x169-((x170-x171)*x172));

    if (t25 != -4082366413075LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile uint16_t x174 = UINT16_MAX;
	volatile int32_t x175 = -404260;
	volatile int32_t x176 = -1;
	volatile uint64_t t26 = 118713904LLU;

    t26 = (x173-((x174-x175)*x176));

    if (t26 != 469794LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x177 = INT32_MAX;
	uint64_t x178 = 690597160956LLU;
	volatile int32_t x179 = -3829;
	volatile int16_t x180 = -1;
	volatile uint64_t t27 = 173194579877464917LLU;

    t27 = (x177-((x178-x179)*x180));

    if (t27 != 692744648432LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x185 = UINT64_MAX;
	volatile int16_t x186 = INT16_MIN;
	volatile int32_t x187 = 247287;

    t28 = (x185-((x186-x187)*x188));

    if (t28 != 18446744073709271560LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x189 = UINT8_MAX;
	volatile int32_t x190 = -1;
	int64_t x191 = -1LL;
	uint8_t x192 = UINT8_MAX;
	int64_t t29 = -1465903418260LL;

    t29 = (x189-((x190-x191)*x192));

    if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x193 = 2U;
	int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	int16_t x196 = -2389;
	static volatile uint32_t t30 = 421985792U;

    t30 = (x193-((x194-x195)*x196));

    if (t30 != 4294663895U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	int64_t x200 = -1LL;
	int64_t t31 = 226LL;

    t31 = (x197-((x198-x199)*x200));

    if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x201 = INT16_MAX;
	volatile int16_t x202 = -5744;
	volatile int8_t x204 = -1;
	int32_t t32 = -5;

    t32 = (x201-((x202-x203)*x204));

    if (t32 != 59791) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 890260125U;
	static uint8_t x216 = 1U;
	volatile uint64_t t33 = 59306LLU;

    t33 = (x213-((x214-x215)*x216));

    if (t33 != 9223372035964515681LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x219 = 239762;
	static int8_t x220 = INT8_MIN;
	uint32_t t34 = 20U;

    t34 = (x217-((x218-x219)*x220));

    if (t34 != 383106278U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x221 = 2908809LLU;
	int32_t x222 = INT32_MAX;
	volatile int32_t x223 = INT32_MAX;
	static int32_t x224 = INT32_MIN;

    t35 = (x221-((x222-x223)*x224));

    if (t35 != 2908809LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x225 = -1;
	static uint32_t x226 = UINT32_MAX;
	int32_t x227 = -124;
	uint16_t x228 = UINT16_MAX;
	volatile uint32_t t36 = 1U;

    t36 = (x225-((x226-x227)*x228));

    if (t36 != 4286906490U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x229 = 89292543627745469LL;
	int32_t x230 = INT32_MAX;
	uint16_t x232 = UINT16_MAX;

    t37 = (x229-((x230-x231)*x232));

    if (t37 != 89151808286873789LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x233 = INT8_MIN;
	volatile int64_t x234 = 7589LL;
	uint32_t x235 = 1U;

    t38 = (x233-((x234-x235)*x236));

    if (t38 != 227512LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x237 = INT32_MIN;
	uint64_t x238 = 2066LLU;

    t39 = (x237-((x238-x239)*x240));

    if (t39 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x245 = 1U;
	uint32_t x247 = 0U;
	int32_t x248 = INT32_MAX;
	static uint32_t t40 = 903U;

    t40 = (x245-((x246-x247)*x248));

    if (t40 != 2147549184U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MIN;
	static volatile uint64_t t41 = 5LLU;

    t41 = (x253-((x254-x255)*x256));

    if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x258 = INT8_MAX;
	volatile int32_t x259 = -117;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t42 = 23;

    t42 = (x257-((x258-x259)*x260));

    if (t42 != 7995391) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	int16_t x263 = 3;
	volatile int32_t x264 = -11223;

    t43 = (x261-((x262-x263)*x264));

    if (t43 != -1502981) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x265 = 438719LLU;
	int8_t x266 = INT8_MIN;
	volatile int8_t x268 = INT8_MIN;
	static uint64_t t44 = 1646324686708LLU;

    t44 = (x265-((x266-x267)*x268));

    if (t44 != 415423LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x269 = INT32_MIN;
	int16_t x270 = INT16_MAX;
	int8_t x271 = 5;
	uint64_t x272 = UINT64_MAX;
	uint64_t t45 = 1669LLU;

    t45 = (x269-((x270-x271)*x272));

    if (t45 != 18446744071562100730LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x273 = 0U;
	int8_t x274 = -1;
	static volatile int8_t x275 = 2;

    t46 = (x273-((x274-x275)*x276));

    if (t46 != 4294967293U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x277 = 16422184U;
	static int8_t x278 = -1;
	static int8_t x279 = INT8_MIN;
	static int32_t x280 = 24597;
	static volatile uint32_t t47 = 3U;

    t47 = (x277-((x278-x279)*x280));

    if (t47 != 13298365U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x281 = 7;
	uint16_t x282 = 5195U;
	volatile int32_t x283 = 2;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t48 = 457;

    t48 = (x281-((x282-x283)*x284));

    if (t48 != -170159024) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x289 = -1;
	uint16_t x291 = 2948U;
	static uint16_t x292 = 4343U;
	volatile int32_t t49 = 146899270;

    t49 = (x289-((x290-x291)*x292));

    if (t49 != 11695698) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x293 = UINT32_MAX;
	volatile uint16_t x294 = 6216U;
	uint32_t x295 = 32U;
	volatile int16_t x296 = -1;
	uint32_t t50 = 992248180U;

    t50 = (x293-((x294-x295)*x296));

    if (t50 != 6183U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x297 = 0;
	volatile uint64_t x298 = 21938258441373837LLU;
	int16_t x299 = INT16_MAX;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t51 = 62LLU;

    t51 = (x297-((x298-x299)*x300));

    if (t51 != 2808097080491656960LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x301 = 12U;
	int16_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;

    t52 = (x301-((x302-x303)*x304));

    if (t52 != -2147483636LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x309 = INT64_MIN;
	uint64_t x310 = 19470990504608031LLU;
	volatile int16_t x311 = 12499;
	int64_t x312 = 4283993797LL;
	static volatile uint64_t t53 = 250689LLU;

    t53 = (x309-((x310-x311)*x312));

    if (t53 != 837383150843186564LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x317 = 29;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int64_t x320 = -1LL;
	int64_t t54 = -1LL;

    t54 = (x317-((x318-x319)*x320));

    if (t54 != -32738LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x321 = 367949;
	volatile uint64_t x323 = 483303059192LLU;
	volatile int16_t x324 = 0;

    t55 = (x321-((x322-x323)*x324));

    if (t55 != 367949LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	static uint8_t x331 = 0U;
	static int8_t x332 = INT8_MAX;
	static int64_t t56 = 85081LL;

    t56 = (x329-((x330-x331)*x332));

    if (t56 != -9223372036854759552LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x333 = INT32_MAX;
	int64_t x334 = -1LL;
	static uint64_t x336 = UINT64_MAX;
	uint64_t t57 = 1668152974657404LLU;

    t57 = (x333-((x334-x335)*x336));

    if (t57 != 2147483774LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	uint64_t t58 = 8895209464930010LLU;

    t58 = (x349-((x350-x351)*x352));

    if (t58 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x353 = -9;
	volatile uint8_t x354 = UINT8_MAX;
	uint32_t x355 = 409993496U;
	int32_t x356 = INT32_MIN;
	volatile uint32_t t59 = 0U;

    t59 = (x353-((x354-x355)*x356));

    if (t59 != 2147483639U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x357 = 7U;
	static int8_t x358 = 5;
	uint32_t x359 = 216929233U;
	static int32_t x360 = INT32_MIN;
	volatile uint32_t t60 = 10U;

    t60 = (x357-((x358-x359)*x360));

    if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x361 = 2U;
	int8_t x362 = INT8_MAX;
	volatile uint32_t x363 = 3793772U;
	static int8_t x364 = 44;

    t61 = (x361-((x362-x363)*x364));

    if (t61 != 166920382U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x365 = -15;
	static int64_t x366 = INT64_MAX;
	uint64_t x367 = 7046292653917LLU;
	volatile int16_t x368 = -1;
	uint64_t t62 = 3LLU;

    t62 = (x365-((x366-x367)*x368));

    if (t62 != 9223364990562121875LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	uint16_t x375 = 389U;
	int64_t x376 = 456092132LL;
	int64_t t63 = 1LL;

    t63 = (x373-((x374-x375)*x376));

    if (t63 != 177875931352LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x381 = 108U;
	uint64_t x382 = 2180007326LLU;
	static int64_t x383 = -626959917560507924LL;
	uint16_t x384 = 48U;

    t64 = (x381-((x382-x383)*x384));

    if (t64 != 6799411999874371340LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x393 = 10;
	int64_t x394 = -1LL;
	uint32_t x395 = 110158179U;
	int32_t x396 = -1;

    t65 = (x393-((x394-x395)*x396));

    if (t65 != -110158170LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t66 = -2;

    t66 = (x397-((x398-x399)*x400));

    if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = 29668990;
	volatile int32_t t67 = -241786145;

    t67 = (x405-((x406-x407)*x408));

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x414 = INT8_MIN;
	static volatile int32_t x415 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	uint32_t t68 = 5U;

    t68 = (x413-((x414-x415)*x416));

    if (t68 != 4294967167U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x422 = INT16_MIN;
	uint64_t x424 = 17138448386LLU;
	uint64_t t69 = 310228163LLU;

    t69 = (x421-((x422-x423)*x424));

    if (t69 != 562003999440944LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x425 = -196459978268LL;
	uint32_t x426 = 11U;
	int16_t x427 = INT16_MIN;
	int16_t x428 = 0;
	int64_t t70 = 289374LL;

    t70 = (x425-((x426-x427)*x428));

    if (t70 != -196459978268LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x429 = INT16_MAX;
	uint8_t x430 = 1U;
	int32_t x431 = -14018;
	uint16_t x432 = 33U;
	volatile int32_t t71 = 11701;

    t71 = (x429-((x430-x431)*x432));

    if (t71 != -429860) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x435 = 1068;
	int32_t x436 = -2843;

    t72 = (x433-((x434-x435)*x436));

    if (t72 != 9223372036852464448LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x437 = 0U;
	uint64_t x438 = 14224001562997LLU;
	static int8_t x439 = -17;
	volatile int16_t x440 = -1;

    t73 = (x437-((x438-x439)*x440));

    if (t73 != 14224001563014LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x442 = 0;
	volatile int8_t x443 = INT8_MIN;
	static int16_t x444 = -1;

    t74 = (x441-((x442-x443)*x444));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x453 = -202135525028072014LL;
	uint32_t x454 = 143U;
	uint32_t x455 = UINT32_MAX;
	int64_t t75 = -9168429924060770LL;

    t75 = (x453-((x454-x455)*x456));

    if (t75 != -202135525028108734LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x461 = INT8_MIN;
	uint64_t x462 = 260847105523985936LLU;
	int32_t x463 = INT32_MAX;
	static int16_t x464 = INT16_MIN;
	static uint64_t t76 = 240707LLU;

    t76 = (x461-((x462-x463)*x464));

    if (t76 != 6595377313704607616LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x465 = 0;
	static int16_t x466 = INT16_MAX;
	int32_t x467 = 1018;
	uint64_t x468 = 2900861768213LLU;
	static volatile uint64_t t77 = 1567364893LLU;

    t77 = (x465-((x466-x467)*x468));

    if (t77 != 18354644613430557079LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x469 = UINT64_MAX;
	static uint8_t x471 = 20U;
	uint8_t x472 = 30U;
	static volatile uint64_t t78 = 2812LLU;

    t78 = (x469-((x470-x471)*x472));

    if (t78 != 18446744073686157855LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x477 = INT64_MIN;
	static volatile int16_t x478 = 875;
	uint64_t x480 = 15LLU;
	static volatile uint64_t t79 = 54637393LLU;

    t79 = (x477-((x478-x479)*x480));

    if (t79 != 9223372036854762908LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x482 = INT16_MIN;
	int64_t x483 = -26LL;
	static int16_t x484 = -154;
	volatile int64_t t80 = 22096858LL;

    t80 = (x481-((x482-x483)*x484));

    if (t80 != -5042396LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x485 = INT8_MIN;
	uint8_t x486 = 5U;
	int64_t x487 = 12LL;
	uint32_t x488 = 55765962U;
	int64_t t81 = -2516789802367LL;

    t81 = (x485-((x486-x487)*x488));

    if (t81 != 390361606LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x490 = -6;
	int16_t x491 = 0;
	static volatile uint32_t t82 = 714U;

    t82 = (x489-((x490-x491)*x492));

    if (t82 != 77056U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x493 = -30;
	volatile int64_t t83 = -269685654599548820LL;

    t83 = (x493-((x494-x495)*x496));

    if (t83 != 1333LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x501 = INT64_MIN;
	static int32_t x502 = INT32_MIN;
	volatile uint64_t x503 = 806LLU;
	int64_t x504 = INT64_MAX;
	static volatile uint64_t t84 = 297323795LLU;

    t84 = (x501-((x502-x503)*x504));

    if (t84 != 9223372034707291354LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x510 = 1U;
	int64_t x511 = -1LL;
	uint64_t x512 = 8LLU;

    t85 = (x509-((x510-x511)*x512));

    if (t85 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x513 = INT32_MIN;
	int16_t x514 = -1;
	volatile int32_t x515 = INT32_MIN;
	volatile uint64_t x516 = 2415108197994754LLU;
	volatile uint64_t t86 = 192312LLU;

    t86 = (x513-((x514-x515)*x516));

    if (t86 != 7415858508139876610LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x522 = INT8_MIN;
	uint32_t x523 = 4127902U;
	int8_t x524 = -1;
	volatile uint32_t t87 = 1823129406U;

    t87 = (x521-((x522-x523)*x524));

    if (t87 != 2143355618U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x529 = INT64_MIN;
	static uint64_t x530 = 83929312LLU;
	uint64_t x531 = 104158429522352LLU;
	uint32_t x532 = 1412U;
	static volatile uint64_t t88 = 905069931LLU;

    t88 = (x529-((x530-x531)*x532));

    if (t88 != 9370443620832148288LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x537 = -1LL;
	int64_t x538 = INT64_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	static volatile uint16_t x540 = UINT16_MAX;
	volatile uint64_t t89 = 121LLU;

    t89 = (x537-((x538-x539)*x540));

    if (t89 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x541 = UINT16_MAX;
	uint32_t x542 = UINT32_MAX;
	uint16_t x543 = UINT16_MAX;
	int8_t x544 = -1;
	volatile uint32_t t90 = UINT32_MAX;

    t90 = (x541-((x542-x543)*x544));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x549 = 1LL;
	uint64_t x550 = 3905LLU;
	uint64_t x552 = 3826084293LLU;

    t91 = (x549-((x550-x551)*x552));

    if (t91 != 18446603759720274428LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x553 = 1;
	int32_t x554 = INT32_MIN;
	uint64_t x555 = 20993453LLU;
	static int16_t x556 = 3973;
	uint64_t t92 = 1516502607LLU;

    t92 = (x553-((x554-x555)*x556));

    if (t92 != 8615359522274LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x557 = 89U;
	int8_t x558 = INT8_MIN;
	static uint16_t x559 = 5364U;
	volatile int32_t x560 = 3;
	int32_t t93 = 489;

    t93 = (x557-((x558-x559)*x560));

    if (t93 != 16565) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x561 = -1;
	volatile uint16_t x562 = 3U;
	int8_t x563 = INT8_MAX;
	volatile int32_t x564 = 11;
	static int32_t t94 = -870;

    t94 = (x561-((x562-x563)*x564));

    if (t94 != 1363) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x569 = 1U;
	static int8_t x570 = 7;
	int32_t x571 = -1;
	uint8_t x572 = 68U;
	int32_t t95 = 24;

    t95 = (x569-((x570-x571)*x572));

    if (t95 != -543) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x574 = INT8_MIN;
	int64_t x575 = -1LL;
	static volatile int32_t x576 = -1;
	volatile int64_t t96 = -132707055930878144LL;

    t96 = (x573-((x574-x575)*x576));

    if (t96 != -120LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x585 = -1LL;
	static int32_t x586 = 17022485;
	uint32_t x587 = UINT32_MAX;
	volatile int64_t t97 = -71672562LL;

    t97 = (x585-((x586-x587)*x588));

    if (t97 != -4277944811LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x593 = -2;
	int8_t x594 = INT8_MIN;
	int64_t x595 = -3355LL;
	int8_t x596 = 3;
	int64_t t98 = -19359089986486429LL;

    t98 = (x593-((x594-x595)*x596));

    if (t98 != -9683LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x597 = 9;
	int16_t x598 = INT16_MIN;
	static uint16_t x600 = 3U;
	uint64_t t99 = 604689603885LLU;

    t99 = (x597-((x598-x599)*x600));

    if (t99 != 2671836931929495LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x602 = 336;
	int8_t x604 = 1;
	volatile int32_t t100 = -6418;

    t100 = (x601-((x602-x603)*x604));

    if (t100 != 1012586) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x606 = -56;
	static int8_t x607 = 0;
	int8_t x608 = 1;
	volatile uint32_t t101 = 4068055U;

    t101 = (x605-((x606-x607)*x608));

    if (t101 != 1937349182U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x609 = UINT8_MAX;
	uint8_t x610 = 11U;
	static uint32_t x611 = 48455763U;
	uint32_t t102 = 59767059U;

    t102 = (x609-((x610-x611)*x612));

    if (t102 != 2241667223U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x613 = 16397U;
	volatile uint8_t x614 = 35U;
	int16_t x615 = INT16_MAX;
	uint32_t x616 = UINT32_MAX;
	uint32_t t103 = 977256289U;

    t103 = (x613-((x614-x615)*x616));

    if (t103 != 4294950961U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = -2127549251188LL;
	volatile int16_t x619 = INT16_MIN;
	uint16_t x620 = UINT16_MAX;
	volatile int64_t t104 = 800143156LL;

    t104 = (x617-((x618-x619)*x620));

    if (t104 != 139428938029154572LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x621 = INT16_MIN;
	int64_t x622 = -1LL;
	volatile int64_t x623 = 321LL;
	int64_t x624 = -1LL;
	static volatile int64_t t105 = -140440155053202LL;

    t105 = (x621-((x622-x623)*x624));

    if (t105 != -33090LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x625 = 1062;
	int8_t x626 = 0;
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = INT8_MAX;
	static uint64_t t106 = 503509LLU;

    t106 = (x625-((x626-x627)*x628));

    if (t106 != 935LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x630 = 15U;
	static volatile uint8_t x632 = 0U;
	volatile int64_t t107 = INT64_MIN;

    t107 = (x629-((x630-x631)*x632));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x641 = 23528U;
	int32_t x643 = 423;
	int64_t x644 = -1LL;
	static volatile uint64_t t108 = 2LLU;

    t108 = (x641-((x642-x643)*x644));

    if (t108 != 5487108465307481LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x646 = 340U;
	int32_t x647 = -1;
	int16_t x648 = -904;
	volatile int32_t t109 = -7;

    t109 = (x645-((x646-x647)*x648));

    if (t109 != 308269) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x649 = 2427U;
	volatile int8_t x650 = 1;
	uint32_t x651 = UINT32_MAX;
	volatile uint32_t t110 = 197784U;

    t110 = (x649-((x650-x651)*x652));

    if (t110 != 10269879U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x653 = UINT64_MAX;
	uint64_t x654 = UINT64_MAX;
	static int16_t x655 = INT16_MIN;
	static volatile int8_t x656 = 24;
	uint64_t t111 = 613191704589LLU;

    t111 = (x653-((x654-x655)*x656));

    if (t111 != 18446744073708765207LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x657 = UINT8_MAX;
	int8_t x660 = -1;
	volatile int64_t t112 = 14258939LL;

    t112 = (x657-((x658-x659)*x660));

    if (t112 != 122367644LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x662 = 0U;
	static int8_t x663 = 1;
	uint32_t x664 = 181U;
	volatile uint32_t t113 = 3U;

    t113 = (x661-((x662-x663)*x664));

    if (t113 != 4294963922U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x669 = 326559747;
	static uint32_t x670 = 396U;
	uint32_t x671 = UINT32_MAX;
	volatile int8_t x672 = INT8_MIN;

    t114 = (x669-((x670-x671)*x672));

    if (t114 != 326610563U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x673 = 6U;
	int16_t x674 = INT16_MIN;
	int64_t x676 = 401705741448LL;
	volatile int64_t t115 = -46LL;

    t115 = (x673-((x674-x675)*x676));

    if (t115 != 13201255781205630LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x685 = 1;
	int64_t x687 = 51880LL;
	int8_t x688 = -19;
	int64_t t116 = 259647LL;

    t116 = (x685-((x686-x687)*x688));

    if (t116 != -40803175031LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x689 = UINT64_MAX;
	static int32_t x691 = 2588740;
	volatile uint64_t t117 = 67435LLU;

    t117 = (x689-((x690-x691)*x692));

    if (t117 != 78265406652LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x697 = 29;
	static uint64_t x698 = 3198LLU;
	uint64_t x699 = 4287963022895524LLU;
	uint8_t x700 = 63U;

    t118 = (x697-((x698-x699)*x700));

    if (t118 != 270141670442216567LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	int64_t x702 = -19631732391418630LL;
	uint16_t x703 = UINT16_MAX;
	int32_t x704 = -1;
	volatile int64_t t119 = -1795109790502414455LL;

    t119 = (x701-((x702-x703)*x704));

    if (t119 != -19631732391483910LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x705 = UINT8_MAX;
	volatile uint64_t x706 = 116274LLU;
	uint8_t x707 = UINT8_MAX;

    t120 = (x705-((x706-x707)*x708));

    if (t120 != 116274LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x710 = INT32_MIN;
	volatile uint64_t x711 = 129598421953791494LLU;
	static int32_t x712 = -1;
	uint64_t t121 = 748712348155672847LLU;

    t121 = (x709-((x710-x711)*x712));

    if (t121 != 18317145649669122698LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MIN;
	static int64_t x716 = -1LL;
	int64_t t122 = -19041573LL;

    t122 = (x713-((x714-x715)*x716));

    if (t122 != -32768LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x721 = -4526528786LL;
	uint8_t x724 = UINT8_MAX;
	static int64_t t123 = -45510713LL;

    t123 = (x721-((x722-x723)*x724));

    if (t123 != -4526660621LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x733 = 75;
	int8_t x735 = INT8_MAX;
	volatile uint32_t x736 = UINT32_MAX;
	volatile uint32_t t124 = 44U;

    t124 = (x733-((x734-x735)*x736));

    if (t124 != 4294967116U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x737 = UINT32_MAX;
	int64_t x738 = 247LL;
	int8_t x739 = 5;
	int8_t x740 = -12;
	volatile int64_t t125 = -2LL;

    t125 = (x737-((x738-x739)*x740));

    if (t125 != 4294970199LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x742 = UINT64_MAX;
	int8_t x743 = 0;
	uint16_t x744 = 3U;
	uint64_t t126 = 13356968376572006LLU;

    t126 = (x741-((x742-x743)*x744));

    if (t126 != 12LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x745 = 9U;
	int8_t x746 = 56;
	uint16_t x747 = UINT16_MAX;
	int32_t x748 = 1;
	volatile uint32_t t127 = 17174511U;

    t127 = (x745-((x746-x747)*x748));

    if (t127 != 65488U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x749 = INT16_MAX;
	uint16_t x750 = 704U;
	uint32_t x751 = 283U;
	static uint16_t x752 = 23076U;
	uint32_t t128 = 672U;

    t128 = (x749-((x750-x751)*x752));

    if (t128 != 4285285067U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x757 = -7;
	int64_t x758 = INT64_MAX;
	static volatile int64_t x759 = INT64_MAX;
	int16_t x760 = -1;
	static int64_t t129 = -2LL;

    t129 = (x757-((x758-x759)*x760));

    if (t129 != -7LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	volatile int16_t x763 = 12;
	int16_t x764 = -1;

    t130 = (x761-((x762-x763)*x764));

    if (t130 != 2147450867) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x769 = 112U;
	int16_t x770 = INT16_MIN;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = -1;
	int32_t t131 = 8426217;

    t131 = (x769-((x770-x771)*x772));

    if (t131 != -32911) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x777 = -1LL;
	uint8_t x778 = 1U;
	int16_t x780 = 7315;
	int64_t t132 = 1101033400500LL;

    t132 = (x777-((x778-x779)*x780));

    if (t132 != 80464LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x781 = 12618;
	uint16_t x782 = 2943U;
	int32_t x783 = -2837999;

    t133 = (x781-((x782-x783)*x784));

    if (t133 != 4277934262U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x785 = INT8_MAX;
	uint32_t x786 = UINT32_MAX;
	int32_t x787 = INT32_MAX;
	int8_t x788 = INT8_MIN;
	static uint32_t t134 = 141218U;

    t134 = (x785-((x786-x787)*x788));

    if (t134 != 127U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x789 = 27548718U;
	volatile uint64_t x790 = UINT64_MAX;
	int16_t x791 = 3746;
	static int64_t x792 = -1LL;
	uint64_t t135 = 421360667064LLU;

    t135 = (x789-((x790-x791)*x792));

    if (t135 != 27544971LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x797 = INT16_MIN;
	uint8_t x798 = UINT8_MAX;
	uint64_t x800 = 379098549428150844LLU;
	volatile uint64_t t136 = 20827423LLU;

    t136 = (x797-((x798-x799)*x800));

    if (t136 != 112772857507070220LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x805 = INT8_MIN;
	static int8_t x808 = INT8_MIN;

    t137 = (x805-((x806-x807)*x808));

    if (t137 != -4197376) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x809 = INT16_MIN;
	static uint64_t x810 = UINT64_MAX;
	int64_t x811 = INT64_MIN;
	volatile uint64_t x812 = 1482124904125545LLU;

    t138 = (x809-((x810-x811)*x812));

    if (t138 != 9224854161758868585LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	uint64_t x819 = UINT64_MAX;
	uint64_t x820 = UINT64_MAX;
	uint64_t t139 = 192320839LLU;

    t139 = (x817-((x818-x819)*x820));

    if (t139 != 4294967295LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x825 = 1742649114LLU;
	uint8_t x827 = UINT8_MAX;
	uint8_t x828 = 4U;
	volatile uint64_t t140 = 11LLU;

    t140 = (x825-((x826-x827)*x828));

    if (t140 != 1742650114LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x837 = -1;
	int32_t t141 = -21931890;

    t141 = (x837-((x838-x839)*x840));

    if (t141 != -32641) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x853 = 13U;
	volatile int64_t x854 = INT64_MIN;
	static int32_t x856 = -1;
	uint64_t t142 = 39LLU;

    t142 = (x853-((x854-x855)*x856));

    if (t142 != 9219426312538692264LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x857 = 354LLU;
	static int8_t x858 = -1;
	static uint64_t x859 = 12301355LLU;
	int8_t x860 = INT8_MIN;
	uint64_t t143 = 231238736LLU;

    t143 = (x857-((x858-x859)*x860));

    if (t143 != 18446744072134978402LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x862 = -21616603LL;
	int16_t x863 = INT16_MAX;
	int16_t x864 = -1;
	static int64_t t144 = -192508879128487080LL;

    t144 = (x861-((x862-x863)*x864));

    if (t144 != -21616603LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x865 = UINT64_MAX;
	int8_t x866 = 3;
	uint32_t x867 = 1U;
	uint8_t x868 = 1U;
	volatile uint64_t t145 = 7865711768LLU;

    t145 = (x865-((x866-x867)*x868));

    if (t145 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x878 = -9752068976LL;
	int16_t x880 = INT16_MIN;

    t146 = (x877-((x878-x879)*x880));

    if (t146 != -249187052027905LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x882 = -1;
	volatile int16_t x883 = -1;
	volatile int32_t x884 = -1;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x881-((x882-x883)*x884));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x885 = 2077U;
	int16_t x887 = -1;
	int32_t x888 = INT32_MAX;
	uint64_t t148 = 32800866LLU;

    t148 = (x885-((x886-x887)*x888));

    if (t148 != 18415448343550256823LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x899 = 155823738U;
	int32_t x900 = INT32_MAX;

    t149 = (x897-((x898-x899)*x900));

    if (t149 != 3970192543060142881LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x901 = INT32_MIN;
	uint32_t x903 = UINT32_MAX;
	int16_t x904 = -1;

    t150 = (x901-((x902-x903)*x904));

    if (t150 != 2147483521U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x909 = INT8_MAX;
	int32_t x910 = -1;
	volatile int64_t x911 = -224LL;
	int16_t x912 = INT16_MIN;
	volatile int64_t t151 = -15520381971LL;

    t151 = (x909-((x910-x911)*x912));

    if (t151 != 7307391LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x913 = 1127LLU;
	uint64_t x914 = UINT64_MAX;
	int16_t x915 = 1101;
	int16_t x916 = INT16_MAX;
	static volatile uint64_t t152 = 911LLU;

    t152 = (x913-((x914-x915)*x916));

    if (t152 != 36110361LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x925 = 2U;
	uint8_t x926 = 30U;
	uint32_t x927 = 115660U;
	uint8_t x928 = 13U;
	static uint32_t t153 = 55288U;

    t153 = (x925-((x926-x927)*x928));

    if (t153 != 1503192U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x929 = INT16_MIN;
	uint8_t x931 = 41U;
	uint64_t x932 = 28LLU;
	volatile uint64_t t154 = 51490370935277LLU;

    t154 = (x929-((x930-x931)*x932));

    if (t154 != 885884LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x937 = 1;
	volatile uint8_t x939 = 3U;
	static volatile int64_t x940 = -1LL;
	volatile int64_t t155 = -2749LL;

    t155 = (x937-((x938-x939)*x940));

    if (t155 != 2009LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x941 = 261871U;
	volatile int64_t x942 = -1LL;
	uint16_t x944 = 24U;
	volatile int64_t t156 = -8246144LL;

    t156 = (x941-((x942-x943)*x944));

    if (t156 != 13381303LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x945 = UINT32_MAX;
	int32_t x946 = 165282264;
	int64_t x947 = 12548503560120792LL;
	int8_t x948 = 10;
	volatile int64_t t157 = -236500LL;

    t157 = (x945-((x946-x947)*x948));

    if (t157 != 125485038243352575LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x953 = 14717;
	int32_t x954 = INT32_MAX;
	static uint32_t x955 = 1U;
	int16_t x956 = INT16_MIN;
	uint32_t t158 = 3U;

    t158 = (x953-((x954-x955)*x956));

    if (t158 != 4294916477U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x961 = INT8_MIN;
	int32_t x964 = 22632;

    t159 = (x961-((x962-x963)*x964));

    if (t159 != -995936) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x965 = 4LL;
	static volatile int32_t x966 = -1;
	uint64_t x968 = 0LLU;
	static uint64_t t160 = 28549181654LLU;

    t160 = (x965-((x966-x967)*x968));

    if (t160 != 4LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x973 = -1;
	int8_t x974 = -1;
	uint16_t x975 = 180U;
	uint16_t x976 = 1U;
	int32_t t161 = 26;

    t161 = (x973-((x974-x975)*x976));

    if (t161 != 180) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x978 = 34678940876071135LLU;
	int64_t x979 = 215485185LL;
	uint32_t x980 = 3U;
	uint64_t t162 = 2488002300808304451LLU;

    t162 = (x977-((x978-x979)*x980));

    if (t162 != 18342707251727791969LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x982 = -61;
	volatile uint16_t x983 = UINT16_MAX;
	int8_t x984 = -1;
	int32_t t163 = -405960235;

    t163 = (x981-((x982-x983)*x984));

    if (t163 != -55044) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x985 = -27;
	int64_t x986 = 0LL;
	int64_t x988 = INT64_MIN;
	static uint64_t t164 = 5LLU;

    t164 = (x985-((x986-x987)*x988));

    if (t164 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x997 = 43;
	static uint64_t x998 = 105867168250668249LLU;
	uint16_t x999 = 4277U;
	int32_t x1000 = INT32_MAX;
	volatile uint64_t t165 = 23LLU;

    t165 = (x997-((x998-x999)*x1000));

    if (t165 != 10015323388411974735LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x1001 = INT32_MIN;
	int32_t x1002 = 64;
	int64_t x1003 = -14587LL;
	static volatile int16_t x1004 = INT16_MIN;
	int64_t t166 = -104484362LL;

    t166 = (x1001-((x1002-x1003)*x1004));

    if (t166 != -1667399680LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1009 = 46;
	static int8_t x1010 = 1;
	uint64_t x1012 = 9765903239LLU;
	volatile uint64_t t167 = 4318LLU;

    t167 = (x1009-((x1010-x1011)*x1012));

    if (t167 != 18446742813908033831LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1017 = 0LL;
	volatile int64_t x1018 = -13490LL;
	uint16_t x1020 = 14232U;

    t168 = (x1017-((x1018-x1019)*x1020));

    if (t168 != 191975448LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1029 = -1;
	volatile int8_t x1031 = -1;
	int16_t x1032 = INT16_MAX;
	int32_t t169 = 0;

    t169 = (x1029-((x1030-x1031)*x1032));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1033 = INT16_MAX;
	volatile uint64_t x1035 = UINT64_MAX;
	static int16_t x1036 = 956;
	static volatile uint64_t t170 = 1039009189585LLU;

    t170 = (x1033-((x1034-x1035)*x1036));

    if (t170 != 32767LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1037 = 7;
	int16_t x1038 = INT16_MAX;
	int64_t t171 = 9811626142LL;

    t171 = (x1037-((x1038-x1039)*x1040));

    if (t171 != -305477411LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1041 = 6043827147LL;
	static volatile int32_t x1042 = INT32_MIN;
	int16_t x1043 = INT16_MIN;
	static uint32_t x1044 = UINT32_MAX;
	volatile int64_t t172 = 17216626690797LL;

    t172 = (x1041-((x1042-x1043)*x1044));

    if (t172 != 3896376267LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1053 = INT64_MIN;
	int64_t x1054 = -1LL;
	int16_t x1055 = -35;
	int32_t x1056 = -1;
	int64_t t173 = -174172627LL;

    t173 = (x1053-((x1054-x1055)*x1056));

    if (t173 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1058 = INT8_MIN;
	volatile int16_t x1059 = INT16_MIN;
	int16_t x1060 = -1;
	int32_t t174 = 58793846;

    t174 = (x1057-((x1058-x1059)*x1060));

    if (t174 != 32648) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1061 = 26U;
	int16_t x1062 = -1;
	int16_t x1064 = INT16_MAX;

    t175 = (x1061-((x1062-x1063)*x1064));

    if (t175 != 13759779252596662LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1065 = -1LL;
	int8_t x1067 = INT8_MIN;
	int64_t x1068 = -96532LL;
	int64_t t176 = 4385274358805862LL;

    t176 = (x1065-((x1066-x1067)*x1068));

    if (t176 != -207300879152641LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x1073 = -1LL;
	static volatile int32_t x1075 = 24441923;
	int8_t x1076 = INT8_MAX;
	uint64_t t177 = 4LLU;

    t177 = (x1073-((x1074-x1075)*x1076));

    if (t177 != 18446744040099028285LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1077 = 2U;
	uint32_t x1078 = 37U;
	int8_t x1079 = INT8_MIN;
	int16_t x1080 = INT16_MIN;
	static volatile uint32_t t178 = 83U;

    t178 = (x1077-((x1078-x1079)*x1080));

    if (t178 != 5406722U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1081 = INT16_MIN;
	uint32_t x1082 = 90141U;
	int16_t x1084 = 219;
	volatile uint64_t t179 = 1929641508816254345LLU;

    t179 = (x1081-((x1082-x1083)*x1084));

    if (t179 != 18446744073689777750LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1089 = INT16_MIN;
	int32_t x1090 = -610980;
	static int64_t x1091 = INT64_MIN;
	int64_t t180 = -5019LL;

    t180 = (x1089-((x1090-x1091)*x1092));

    if (t180 != 9223372036854132060LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1093 = INT32_MIN;
	volatile int8_t x1094 = INT8_MAX;
	int16_t x1096 = 14;
	volatile uint32_t t181 = 4301810U;

    t181 = (x1093-((x1094-x1095)*x1096));

    if (t181 != 3187917326U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1097 = INT64_MIN;
	static int8_t x1098 = INT8_MIN;
	static uint64_t x1099 = UINT64_MAX;
	int16_t x1100 = -388;
	volatile uint64_t t182 = 13598195853175LLU;

    t182 = (x1097-((x1098-x1099)*x1100));

    if (t182 != 9223372036854726532LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1101 = -2581302952LL;
	int8_t x1103 = 13;
	uint16_t x1104 = UINT16_MAX;
	static int64_t t183 = 19529915530900LL;

    t183 = (x1101-((x1102-x1103)*x1104));

    if (t183 != -2580385462LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1105 = INT32_MIN;
	uint32_t x1106 = 362U;
	int8_t x1107 = INT8_MAX;
	uint64_t x1108 = UINT64_MAX;

    t184 = (x1105-((x1106-x1107)*x1108));

    if (t184 != 18446744071562068203LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1109 = INT8_MAX;
	uint64_t x1111 = 212130769LLU;
	int16_t x1112 = 106;

    t185 = (x1109-((x1110-x1111)*x1112));

    if (t185 != 22485861747LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x1113 = INT16_MIN;
	static uint16_t x1114 = 0U;
	uint16_t x1115 = 194U;
	static uint32_t x1116 = UINT32_MAX;
	volatile uint32_t t186 = 388405517U;

    t186 = (x1113-((x1114-x1115)*x1116));

    if (t186 != 4294934334U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1125 = 3;
	uint64_t x1126 = 364309018270454LLU;
	uint16_t x1127 = UINT16_MAX;
	static uint16_t x1128 = UINT16_MAX;
	uint64_t t187 = 278886982851LLU;

    t187 = (x1125-((x1126-x1127)*x1128));

    if (t187 != 13018496639359736570LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1129 = UINT32_MAX;
	volatile int32_t x1130 = INT32_MIN;
	int16_t x1131 = -1;
	uint32_t t188 = UINT32_MAX;

    t188 = (x1129-((x1130-x1131)*x1132));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1153 = 109U;
	uint16_t x1154 = 149U;
	uint16_t x1155 = UINT16_MAX;
	int64_t x1156 = 315062LL;
	int64_t t189 = 20360LL;

    t189 = (x1153-((x1154-x1155)*x1156));

    if (t189 != 20600644041LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1165 = INT32_MIN;
	volatile int16_t x1167 = -1;
	int32_t x1168 = INT32_MAX;

    t190 = (x1165-((x1166-x1167)*x1168));

    if (t190 != -37421090107431792LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1169 = 1726;
	volatile uint8_t x1170 = UINT8_MAX;
	uint64_t x1171 = 179LLU;
	volatile uint16_t x1172 = 10154U;

    t191 = (x1169-((x1170-x1171)*x1172));

    if (t191 != 18446744073708781638LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1177 = INT8_MAX;
	int16_t x1178 = INT16_MAX;
	volatile uint16_t x1179 = 3U;
	volatile int8_t x1180 = -7;

    t192 = (x1177-((x1178-x1179)*x1180));

    if (t192 != 229475) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1189 = -29210LL;
	uint32_t x1190 = UINT32_MAX;
	int8_t x1191 = -7;
	uint16_t x1192 = 12965U;
	volatile int64_t t193 = 5LL;

    t193 = (x1189-((x1190-x1191)*x1192));

    if (t193 != -107000LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x1193 = UINT8_MAX;
	uint8_t x1194 = UINT8_MAX;
	int8_t x1195 = INT8_MIN;
	int32_t x1196 = 38951;
	volatile int32_t t194 = 1055117;

    t194 = (x1193-((x1194-x1195)*x1196));

    if (t194 != -14917978) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1198 = 4309;
	volatile int8_t x1199 = -3;
	int16_t x1200 = -13;
	int32_t t195 = -874;

    t195 = (x1197-((x1198-x1199)*x1200));

    if (t195 != 56055) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1201 = INT64_MAX;
	uint64_t x1202 = 976145LLU;
	uint8_t x1203 = UINT8_MAX;
	volatile uint64_t t196 = 523579583247LLU;

    t196 = (x1201-((x1202-x1203)*x1204));

    if (t196 != 9223372036869414157LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1205 = 10046920;
	volatile int16_t x1206 = -3;
	uint64_t x1207 = UINT64_MAX;
	int16_t x1208 = -1;
	volatile uint64_t t197 = 370870141LLU;

    t197 = (x1205-((x1206-x1207)*x1208));

    if (t197 != 10046918LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1217 = INT8_MAX;
	uint16_t x1218 = 11315U;
	int8_t x1220 = -3;
	static int32_t t198 = 1031033;

    t198 = (x1217-((x1218-x1219)*x1220));

    if (t198 != 34081) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1221 = -1;
	static uint32_t x1222 = 11459U;
	uint8_t x1223 = 9U;
	int32_t x1224 = -126614388;
	uint32_t t199 = 3U;

    t199 = (x1221-((x1222-x1223)*x1224));

    if (t199 != 2330763847U) { NG(); } else { ; }
	
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

