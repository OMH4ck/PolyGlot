
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

static int32_t x1 = INT32_MIN;
int16_t x5 = -25;
int64_t x7 = INT64_MAX;
int32_t t1 = 117972993;
uint32_t x15 = UINT32_MAX;
uint32_t x19 = 10217U;
volatile uint64_t x30 = 672LLU;
uint8_t x44 = 2U;
int64_t x48 = 62613950LL;
static uint16_t x57 = 20199U;
int32_t x60 = INT32_MAX;
int16_t x69 = INT16_MAX;
volatile uint16_t x71 = 16002U;
int8_t x75 = -1;
uint32_t t15 = 4807580U;
int16_t x81 = 5599;
volatile int32_t x82 = INT32_MIN;
uint16_t x85 = UINT16_MAX;
uint32_t x86 = UINT32_MAX;
volatile int8_t x90 = -1;
static uint64_t x104 = UINT64_MAX;
volatile uint8_t x106 = UINT8_MAX;
uint64_t x107 = 3040068389926LLU;
int64_t t23 = 31126998717354624LL;
uint64_t x119 = 697279644862952LLU;
int16_t x120 = 1070;
static int8_t x123 = -31;
volatile int64_t t25 = -28212145308889494LL;
int8_t x126 = INT8_MIN;
int8_t x128 = -12;
int8_t x137 = -1;
int64_t t28 = 1287LL;
int16_t x146 = 3391;
volatile int32_t t30 = 3;
uint64_t x155 = UINT64_MAX;
int8_t x164 = INT8_MIN;
uint8_t x165 = 22U;
int32_t x168 = 6;
int32_t t34 = 106524;
int16_t x170 = INT16_MAX;
int16_t x172 = INT16_MAX;
volatile int64_t x173 = INT64_MIN;
int16_t x176 = INT16_MIN;
int32_t x184 = INT32_MIN;
int16_t x196 = INT16_MAX;
static uint16_t x198 = UINT16_MAX;
uint32_t x199 = UINT32_MAX;
int8_t x205 = -1;
uint8_t x220 = UINT8_MAX;
volatile int32_t x244 = INT32_MAX;
uint64_t t50 = 2030562678535LLU;
static volatile int16_t x245 = INT16_MIN;
volatile int64_t x255 = INT64_MIN;
int16_t x256 = -1;
uint32_t x259 = 650515096U;
int32_t x260 = -15;
volatile uint64_t t54 = 4LLU;
volatile int8_t x263 = INT8_MIN;
int32_t x264 = INT32_MIN;
int32_t t55 = -1969365;
uint64_t x266 = UINT64_MAX;
int8_t x267 = 0;
uint64_t x269 = UINT64_MAX;
volatile int8_t x270 = -19;
static volatile uint32_t x271 = 1U;
volatile int32_t x275 = INT32_MIN;
int64_t t60 = -3950533258LL;
uint16_t x285 = UINT16_MAX;
volatile uint64_t t61 = 6377949262440266LLU;
int16_t x290 = INT16_MIN;
volatile int16_t x292 = -1;
uint8_t x294 = UINT8_MAX;
int8_t x299 = 0;
int32_t t64 = 17816;
int16_t x306 = INT16_MAX;
int16_t x311 = -1906;
uint8_t x312 = UINT8_MAX;
volatile int32_t t67 = 227;
volatile int16_t x320 = INT16_MIN;
uint32_t t68 = 28007U;
uint64_t x322 = 288223242097459LLU;
int64_t x326 = INT64_MIN;
int32_t t70 = -282259;
int64_t x336 = -2498892894LL;
int32_t x344 = -35210;
volatile uint64_t t75 = 1739972898390LLU;
volatile int32_t x350 = INT32_MAX;
static uint16_t x352 = 1U;
volatile int64_t t76 = 44808215029156LL;
int8_t x353 = INT8_MAX;
int32_t x355 = INT32_MAX;
int32_t t78 = -6;
int64_t x369 = -12442LL;
int16_t x375 = INT16_MIN;
int32_t t84 = -5;
int8_t x389 = -1;
volatile uint32_t t87 = 11U;
volatile int16_t x399 = INT16_MIN;
int32_t t88 = -1858477;
volatile int8_t x411 = INT8_MAX;
int32_t x420 = -1;
static uint64_t x421 = 127767293376484LLU;
int32_t t95 = -128734;
int8_t x439 = -1;
static uint8_t x443 = UINT8_MAX;
int16_t x444 = -1;
int16_t x451 = -10881;
static volatile uint32_t t102 = 629379U;
volatile uint8_t x457 = 61U;
int32_t x458 = 81657;
volatile int8_t x459 = INT8_MIN;
int8_t x461 = -6;
volatile int16_t x465 = -1;
int16_t x466 = INT16_MIN;
volatile int64_t x468 = INT64_MIN;
volatile int32_t x469 = INT32_MIN;
uint64_t x473 = 215380498151729335LLU;
int16_t x476 = -1;
int32_t t108 = -12747;
uint64_t x488 = 201437183127922830LLU;
volatile uint64_t t110 = 5523LLU;
static volatile int32_t t111 = -46516053;
uint16_t x493 = 164U;
int8_t x500 = 27;
volatile int64_t t113 = 0LL;
uint16_t x508 = 1U;
int32_t t114 = -88;
static int32_t x518 = INT32_MIN;
uint64_t x520 = 32681991LLU;
uint64_t x540 = UINT64_MAX;
uint8_t x546 = 1U;
int64_t x547 = INT64_MIN;
int8_t x549 = -1;
uint32_t t123 = 255U;
int16_t x556 = -14705;
volatile uint64_t t124 = 311058563599200LLU;
int8_t x558 = -1;
volatile int32_t t125 = -6201;
uint16_t x561 = UINT16_MAX;
volatile int32_t x562 = 4579;
int32_t t126 = -14585221;
static int8_t x570 = -1;
uint64_t x571 = UINT64_MAX;
static uint32_t x573 = UINT32_MAX;
uint64_t x575 = UINT64_MAX;
volatile int8_t x594 = -1;
static int32_t x597 = INT32_MIN;
static int32_t x609 = INT32_MIN;
static int64_t t135 = 0LL;
int64_t x621 = -1382402315244LL;
int16_t x624 = 7;
int32_t t139 = -1748501;
uint32_t x638 = 15U;
int32_t x650 = INT32_MIN;
int32_t x656 = -1;
static volatile int32_t t145 = -42179;
int32_t t146 = -368765;
uint32_t x665 = 18406U;
volatile int64_t t149 = 185908177LL;
uint64_t x684 = 199322LLU;
volatile int16_t x686 = -19;
int16_t x687 = -437;
int8_t x688 = INT8_MAX;
int16_t x690 = -1;
static uint8_t x716 = 6U;
int16_t x726 = INT16_MAX;
static int16_t x730 = INT16_MIN;
volatile int64_t t159 = 9081233386170968LL;
volatile int32_t t161 = 1;
volatile uint64_t x743 = UINT64_MAX;
uint64_t x746 = 80647897421039LLU;
int32_t x747 = -1;
static int8_t x758 = 1;
int16_t x762 = -274;
volatile int32_t x763 = 3;
int32_t x764 = -1;
uint64_t x770 = 431329579LLU;
volatile int8_t x773 = -1;
int32_t t169 = -19282;
uint32_t x781 = 499569U;
int16_t x789 = INT16_MIN;
static uint16_t x799 = UINT16_MAX;
int16_t x819 = 103;
static volatile int16_t x824 = INT16_MAX;
static int16_t x827 = INT16_MAX;
uint8_t x846 = 3U;
static volatile int32_t t181 = -3624289;
volatile int16_t x854 = INT16_MIN;
uint32_t x858 = 87730190U;
uint32_t x864 = 13668U;
uint32_t x865 = 9U;
int32_t x870 = 0;
volatile int64_t x872 = INT64_MIN;
static int8_t x873 = INT8_MAX;
uint64_t x884 = UINT64_MAX;
volatile uint64_t t189 = 385LLU;
static int16_t x885 = INT16_MAX;
int8_t x894 = INT8_MAX;
uint32_t x896 = 8743178U;
uint32_t t192 = 535256034U;
int32_t t194 = -6317705;
int64_t x910 = -1LL;
static uint64_t x911 = 979342903372869LLU;
volatile int8_t x915 = INT8_MIN;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	int64_t x3 = -1LL;
	volatile uint64_t x4 = 1LLU;
	volatile uint64_t t0 = 284246977764614LLU;

    t0 = (x1-((x2!=x3)^x4));

    if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 0U;
	int16_t x8 = -1280;

    t1 = (x5-((x6!=x7)^x8));

    if (t1 != 1254) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	static volatile uint16_t x10 = UINT16_MAX;
	static volatile uint64_t x11 = 11LLU;
	static int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 56U;

    t2 = (x9-((x10!=x11)^x12));

    if (t2 != 126U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -1;
	uint8_t x14 = 7U;
	int8_t x16 = -2;
	static volatile int32_t t3 = 467955;

    t3 = (x13-((x14!=x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static volatile int16_t x18 = -27;
	static int64_t x20 = 34927461LL;
	volatile int64_t t4 = 1998362739LL;

    t4 = (x17-((x18!=x19)^x20));

    if (t4 != 2112556187LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x25 = 0U;
	uint8_t x26 = UINT8_MAX;
	uint32_t x27 = UINT32_MAX;
	static int32_t x28 = 75483898;
	int32_t t5 = 1294008;

    t5 = (x25-((x26!=x27)^x28));

    if (t5 != -75483899) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = INT32_MIN;
	int16_t x31 = -1;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -100;

    t6 = (x29-((x30!=x31)^x32));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int32_t x34 = -3217504;
	int16_t x35 = -7333;
	uint16_t x36 = 39U;
	static volatile int32_t t7 = 11829;

    t7 = (x33-((x34!=x35)^x36));

    if (t7 != -39) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -1;
	volatile int8_t x42 = INT8_MAX;
	static uint32_t x43 = 29840U;
	int32_t t8 = 50707650;

    t8 = (x41-((x42!=x43)^x44));

    if (t8 != -4) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x45 = 93;
	static volatile int8_t x46 = INT8_MIN;
	static int16_t x47 = 5;
	int64_t t9 = -1937LL;

    t9 = (x45-((x46!=x47)^x48));

    if (t9 != -62613858LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x49 = 1;
	volatile int16_t x50 = 515;
	int64_t x51 = INT64_MAX;
	static volatile uint8_t x52 = 48U;
	static int32_t t10 = 167812965;

    t10 = (x49-((x50!=x51)^x52));

    if (t10 != -48) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = -1;
	int64_t x54 = -551835382552391370LL;
	static uint8_t x55 = 31U;
	uint16_t x56 = 0U;
	static volatile int32_t t11 = -1470;

    t11 = (x53-((x54!=x55)^x56));

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x58 = INT32_MIN;
	uint32_t x59 = 51132U;
	int32_t t12 = -4470;

    t12 = (x57-((x58!=x59)^x60));

    if (t12 != -2147463447) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x70 = 2618LLU;
	int32_t x72 = -252;
	volatile int32_t t13 = 18662;

    t13 = (x69-((x70!=x71)^x72));

    if (t13 != 33018) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x73 = UINT64_MAX;
	static int8_t x74 = 12;
	static volatile int64_t x76 = -3596449440995323685LL;
	volatile uint64_t t14 = 4201732040549LLU;

    t14 = (x73-((x74!=x75)^x76));

    if (t14 != 3596449440995323685LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x77 = 103U;
	volatile int64_t x78 = INT64_MIN;
	static int8_t x79 = 54;
	int32_t x80 = INT32_MIN;

    t15 = (x77-((x78!=x79)^x80));

    if (t15 != 2147483750U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x83 = INT16_MIN;
	static int16_t x84 = 1;
	int32_t t16 = -119979735;

    t16 = (x81-((x82!=x83)^x84));

    if (t16 != 5599) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t17 = -1118;

    t17 = (x85-((x86!=x87)^x88));

    if (t17 != 98302) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x89 = INT8_MAX;
	static int32_t x91 = INT32_MIN;
	static int16_t x92 = -1;
	int32_t t18 = 969669;

    t18 = (x89-((x90!=x91)^x92));

    if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 10U;
	int64_t x94 = -64843407510229163LL;
	static int8_t x95 = 9;
	uint32_t x96 = 3662287U;
	uint32_t t19 = 5U;

    t19 = (x93-((x94!=x95)^x96));

    if (t19 != 4291305020U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = 9284;
	static uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t20 = -13;

    t20 = (x97-((x98!=x99)^x100));

    if (t20 != 42051) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x101 = 0U;
	int64_t x102 = -1LL;
	int64_t x103 = -1LL;
	static volatile uint64_t t21 = 139438944342284LLU;

    t21 = (x101-((x102!=x103)^x104));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x105 = UINT32_MAX;
	uint32_t x108 = 947U;
	static uint32_t t22 = 22699691U;

    t22 = (x105-((x106!=x107)^x108));

    if (t22 != 4294966349U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x113 = INT32_MAX;
	static int32_t x114 = 447176;
	uint32_t x115 = 930787U;
	int64_t x116 = -1LL;

    t23 = (x113-((x114!=x115)^x116));

    if (t23 != 2147483649LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x117 = 2143786563LLU;
	static int8_t x118 = INT8_MIN;
	uint64_t t24 = 15190LLU;

    t24 = (x117-((x118!=x119)^x120));

    if (t24 != 2143785492LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x121 = 30869103;
	volatile uint16_t x122 = 232U;
	static int64_t x124 = 41195452LL;

    t25 = (x121-((x122!=x123)^x124));

    if (t25 != -10326350LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x125 = INT8_MIN;
	int8_t x127 = -11;
	int32_t t26 = 13398;

    t26 = (x125-((x126!=x127)^x128));

    if (t26 != -117) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x133 = INT32_MIN;
	volatile uint32_t x134 = 370862U;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t27 = -28;

    t27 = (x133-((x134!=x135)^x136));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x138 = -6093;
	uint16_t x139 = 2U;
	volatile int64_t x140 = -2164813028LL;

    t28 = (x137-((x138!=x139)^x140));

    if (t28 != 2164813026LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x147 = -1;
	static int32_t x148 = -1;
	int32_t t29 = -681;

    t29 = (x145-((x146!=x147)^x148));

    if (t29 != -2147483646) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = -2;
	volatile int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;

    t30 = (x149-((x150!=x151)^x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x153 = UINT64_MAX;
	static int16_t x154 = INT16_MAX;
	int32_t x156 = INT32_MIN;
	uint64_t t31 = 13751519LLU;

    t31 = (x153-((x154!=x155)^x156));

    if (t31 != 2147483646LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 73U;
	static uint64_t x160 = 264068LLU;
	static volatile uint64_t t32 = 20066803041LLU;

    t32 = (x157-((x158!=x159)^x160));

    if (t32 != 18446744073709287419LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x161 = INT64_MIN;
	uint32_t x162 = 1639444U;
	int16_t x163 = INT16_MIN;
	int64_t t33 = 2892771039LL;

    t33 = (x161-((x162!=x163)^x164));

    if (t33 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x166 = -58LL;
	int8_t x167 = INT8_MAX;

    t34 = (x165-((x166!=x167)^x168));

    if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	uint16_t x171 = 8U;
	static uint64_t t35 = 30547647017163LLU;

    t35 = (x169-((x170!=x171)^x172));

    if (t35 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	int64_t t36 = 2814711448LL;

    t36 = (x173-((x174!=x175)^x176));

    if (t36 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x177 = UINT16_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t37 = 1;

    t37 = (x177-((x178!=x179)^x180));

    if (t37 != 65662) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x181 = 2558607614984517870LLU;
	volatile int8_t x182 = -1;
	int32_t x183 = 437256;
	uint64_t t38 = 616802LLU;

    t38 = (x181-((x182!=x183)^x184));

    if (t38 != 2558607617132001517LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 3402U;
	volatile uint64_t x187 = 32168LLU;
	uint16_t x188 = 0U;
	static volatile uint64_t t39 = 6367089149659LLU;

    t39 = (x185-((x186!=x187)^x188));

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = INT16_MIN;
	volatile uint64_t x190 = UINT64_MAX;
	int32_t x191 = -76857;
	int16_t x192 = INT16_MIN;
	volatile int32_t t40 = -2;

    t40 = (x189-((x190!=x191)^x192));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x193 = 2U;
	static int8_t x194 = INT8_MIN;
	static int64_t x195 = INT64_MIN;
	static volatile int32_t t41 = -404;

    t41 = (x193-((x194!=x195)^x196));

    if (t41 != -32764) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -1322;
	uint16_t x200 = 17U;
	int32_t t42 = -32946;

    t42 = (x197-((x198!=x199)^x200));

    if (t42 != -1338) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = 120658005163LL;
	int32_t x202 = INT32_MAX;
	volatile int16_t x203 = 21;
	int32_t x204 = INT32_MIN;
	static int64_t t43 = -8046LL;

    t43 = (x201-((x202!=x203)^x204));

    if (t43 != 122805488810LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x206 = INT64_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	static int64_t x208 = -1LL;
	static volatile int64_t t44 = 56617073199LL;

    t44 = (x205-((x206!=x207)^x208));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	int32_t x218 = -4;
	uint8_t x219 = 3U;
	volatile uint64_t t45 = 7034572392LLU;

    t45 = (x217-((x218!=x219)^x220));

    if (t45 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x225 = -120373331;
	uint32_t x226 = 245739960U;
	volatile int8_t x227 = INT8_MIN;
	int64_t x228 = 3058705475119787LL;
	volatile int64_t t46 = 53969193LL;

    t46 = (x225-((x226!=x227)^x228));

    if (t46 != -3058705595493117LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = INT64_MIN;
	static int16_t x231 = -903;
	static int16_t x232 = -14793;
	static volatile int32_t t47 = 22062;

    t47 = (x229-((x230!=x231)^x232));

    if (t47 != 80329) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x233 = -1;
	volatile int32_t x234 = 55475;
	int32_t x235 = -1;
	static int8_t x236 = -1;
	int32_t t48 = 7245813;

    t48 = (x233-((x234!=x235)^x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = -68280660;
	uint8_t x238 = 16U;
	static uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = INT64_MIN;
	int64_t t49 = 0LL;

    t49 = (x237-((x238!=x239)^x240));

    if (t49 != 9223372036786495147LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x241 = 210103LLU;
	static int64_t x242 = 3LL;
	int64_t x243 = INT64_MIN;

    t50 = (x241-((x242!=x243)^x244));

    if (t50 != 18446744071562278073LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x246 = 284221927737396338LLU;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MIN;
	int64_t t51 = -20399141149342LL;

    t51 = (x245-((x246!=x247)^x248));

    if (t51 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x249 = INT32_MAX;
	int16_t x250 = 0;
	int16_t x251 = 15;
	uint32_t x252 = UINT32_MAX;
	uint32_t t52 = 47U;

    t52 = (x249-((x250!=x251)^x252));

    if (t52 != 2147483649U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x253 = UINT32_MAX;
	static int8_t x254 = INT8_MAX;
	volatile uint32_t t53 = 1U;

    t53 = (x253-((x254!=x255)^x256));

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x257 = UINT64_MAX;
	uint8_t x258 = 86U;

    t54 = (x257-((x258!=x259)^x260));

    if (t54 != 15LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = INT32_MIN;
	uint8_t x262 = 125U;

    t55 = (x261-((x262!=x263)^x264));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x265 = 85133641LLU;
	uint32_t x268 = 2U;
	volatile uint64_t t56 = 138684LLU;

    t56 = (x265-((x266!=x267)^x268));

    if (t56 != 85133638LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x272 = UINT64_MAX;
	uint64_t t57 = 178908LLU;

    t57 = (x269-((x270!=x271)^x272));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -1;
	int8_t x276 = 18;
	volatile uint32_t t58 = 99U;

    t58 = (x273-((x274!=x275)^x276));

    if (t58 != 4294967276U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x277 = 7873U;
	volatile uint32_t x278 = UINT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	int16_t x280 = 28;
	volatile int32_t t59 = -4496905;

    t59 = (x277-((x278!=x279)^x280));

    if (t59 != 7844) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	int32_t x283 = -108228247;
	int16_t x284 = INT16_MIN;

    t60 = (x281-((x282!=x283)^x284));

    if (t60 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x286 = INT8_MIN;
	int16_t x287 = -1;
	uint64_t x288 = UINT64_MAX;

    t61 = (x285-((x286!=x287)^x288));

    if (t61 != 65537LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = 1;
	int32_t x291 = -37761;
	int32_t t62 = 2914422;

    t62 = (x289-((x290!=x291)^x292));

    if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x293 = -1022;
	uint32_t x295 = 33U;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t63 = 21820535;

    t63 = (x293-((x294!=x295)^x296));

    if (t63 != -895) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x297 = -1;
	int32_t x298 = 48984;
	int32_t x300 = INT32_MIN;

    t64 = (x297-((x298!=x299)^x300));

    if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x301 = 906962U;
	uint16_t x302 = 6U;
	uint32_t x303 = 3U;
	volatile int16_t x304 = -413;
	volatile uint32_t t65 = 0U;

    t65 = (x301-((x302!=x303)^x304));

    if (t65 != 907376U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x305 = INT32_MAX;
	static uint64_t x307 = 728LLU;
	int8_t x308 = INT8_MAX;
	int32_t t66 = -43453304;

    t66 = (x305-((x306!=x307)^x308));

    if (t66 != 2147483521) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = -1;
	volatile uint32_t x310 = UINT32_MAX;

    t67 = (x309-((x310!=x311)^x312));

    if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MAX;

    t68 = (x317-((x318!=x319)^x320));

    if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x321 = 1U;
	static uint8_t x323 = 3U;
	int64_t x324 = 6091568496LL;
	int64_t t69 = -22665LL;

    t69 = (x321-((x322!=x323)^x324));

    if (t69 != -6091568496LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x325 = -197;
	int8_t x327 = 3;
	int16_t x328 = 35;

    t70 = (x325-((x326!=x327)^x328));

    if (t70 != -231) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x329 = 6019048LLU;
	int16_t x330 = 3;
	uint16_t x331 = 2858U;
	int16_t x332 = -12898;
	uint64_t t71 = 16853LLU;

    t71 = (x329-((x330!=x331)^x332));

    if (t71 != 6031945LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = -1LL;
	static uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 125U;
	int64_t t72 = -985470LL;

    t72 = (x333-((x334!=x335)^x336));

    if (t72 != 2498892892LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x337 = 58U;
	static uint16_t x338 = 5U;
	uint32_t x339 = 24235350U;
	volatile uint8_t x340 = 12U;
	int32_t t73 = -6937;

    t73 = (x337-((x338!=x339)^x340));

    if (t73 != 45) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	static volatile int32_t t74 = -96;

    t74 = (x341-((x342!=x343)^x344));

    if (t74 != 2441) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	volatile uint16_t x346 = 0U;
	static uint16_t x347 = 29U;
	int8_t x348 = INT8_MIN;

    t75 = (x345-((x346!=x347)^x348));

    if (t75 != 126LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x349 = 10893673LL;
	uint32_t x351 = 37188658U;

    t76 = (x349-((x350!=x351)^x352));

    if (t76 != 10893673LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x354 = 1LLU;
	volatile int32_t x356 = INT32_MAX;
	static int32_t t77 = -1406261;

    t77 = (x353-((x354!=x355)^x356));

    if (t77 != -2147483519) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = -29680288106774LL;
	int64_t x359 = INT64_MIN;
	static int8_t x360 = 1;

    t78 = (x357-((x358!=x359)^x360));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x361 = -1;
	uint32_t x362 = 1776U;
	uint16_t x363 = UINT16_MAX;
	uint8_t x364 = UINT8_MAX;
	int32_t t79 = 170057;

    t79 = (x361-((x362!=x363)^x364));

    if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x365 = INT16_MIN;
	static int16_t x366 = -15;
	static uint8_t x367 = UINT8_MAX;
	static int64_t x368 = -1LL;
	static int64_t t80 = 51928881704931LL;

    t80 = (x365-((x366!=x367)^x368));

    if (t80 != -32766LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x370 = 2;
	uint8_t x371 = 13U;
	volatile uint32_t x372 = UINT32_MAX;
	static int64_t t81 = -109975LL;

    t81 = (x369-((x370!=x371)^x372));

    if (t81 != -4294979736LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x373 = INT32_MAX;
	volatile uint8_t x374 = UINT8_MAX;
	uint8_t x376 = 5U;
	volatile int32_t t82 = -11565446;

    t82 = (x373-((x374!=x375)^x376));

    if (t82 != 2147483643) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = -1;
	int8_t x378 = 2;
	int8_t x379 = -6;
	uint64_t x380 = 955022088LLU;
	static volatile uint64_t t83 = 27545952LLU;

    t83 = (x377-((x378!=x379)^x380));

    if (t83 != 18446744072754529526LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x381 = UINT16_MAX;
	volatile uint32_t x382 = 178110038U;
	volatile int16_t x383 = -1;
	static volatile int16_t x384 = -4;

    t84 = (x381-((x382!=x383)^x384));

    if (t84 != 65538) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint8_t x386 = 1U;
	int16_t x387 = -1;
	int64_t x388 = -1LL;
	volatile int64_t t85 = -386433767988951467LL;

    t85 = (x385-((x386!=x387)^x388));

    if (t85 != -126LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x390 = INT8_MAX;
	int64_t x391 = -193336810531417042LL;
	static uint64_t x392 = UINT64_MAX;
	volatile uint64_t t86 = 621946750521LLU;

    t86 = (x389-((x390!=x391)^x392));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x393 = 1743099650U;
	int64_t x394 = -1LL;
	uint8_t x395 = UINT8_MAX;
	static int8_t x396 = -1;

    t87 = (x393-((x394!=x395)^x396));

    if (t87 != 1743099652U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = INT32_MAX;
	int16_t x400 = 14;

    t88 = (x397-((x398!=x399)^x400));

    if (t88 != 65520) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	uint8_t x402 = 6U;
	static uint32_t x403 = 147145224U;
	int64_t x404 = INT64_MAX;
	static volatile int64_t t89 = 27394LL;

    t89 = (x401-((x402!=x403)^x404));

    if (t89 != -9223372032559808511LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x405 = -1;
	int8_t x406 = 1;
	uint8_t x407 = 15U;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t90 = 7519297;

    t90 = (x405-((x406!=x407)^x408));

    if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x409 = -1;
	static uint8_t x410 = UINT8_MAX;
	volatile int64_t x412 = INT64_MIN;
	int64_t t91 = 1LL;

    t91 = (x409-((x410!=x411)^x412));

    if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x413 = INT8_MIN;
	int64_t x414 = 316144642754541LL;
	int64_t x415 = -1LL;
	int32_t x416 = -1;
	int32_t t92 = 1;

    t92 = (x413-((x414!=x415)^x416));

    if (t92 != -126) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x417 = -1;
	static volatile int32_t x418 = -1;
	int8_t x419 = INT8_MIN;
	int32_t t93 = -833221;

    t93 = (x417-((x418!=x419)^x420));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x422 = INT32_MAX;
	uint32_t x423 = UINT32_MAX;
	uint64_t x424 = 2305913LLU;
	volatile uint64_t t94 = 23221LLU;

    t94 = (x421-((x422!=x423)^x424));

    if (t94 != 127767291070572LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x425 = -1;
	static int16_t x426 = INT16_MIN;
	uint32_t x427 = 490939U;
	int8_t x428 = 28;

    t95 = (x425-((x426!=x427)^x428));

    if (t95 != -30) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = 55;
	static volatile uint64_t x430 = 28715179LLU;
	uint16_t x431 = 1U;
	volatile uint8_t x432 = 0U;
	int32_t t96 = -1;

    t96 = (x429-((x430!=x431)^x432));

    if (t96 != 54) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x433 = 96U;
	uint64_t x434 = 2787238862404LLU;
	uint8_t x435 = 89U;
	int16_t x436 = INT16_MAX;
	int32_t t97 = 322;

    t97 = (x433-((x434!=x435)^x436));

    if (t97 != -32670) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x437 = 80866U;
	static int64_t x438 = 64336732611LL;
	int32_t x440 = INT32_MIN;
	uint32_t t98 = 1004931808U;

    t98 = (x437-((x438!=x439)^x440));

    if (t98 != 2147564513U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = -1;
	volatile int64_t t99 = -43LL;

    t99 = (x441-((x442!=x443)^x444));

    if (t99 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = 23636618497821273LLU;
	int8_t x446 = -1;
	int64_t x447 = 128LL;
	uint64_t x448 = 7733669LLU;
	volatile uint64_t t100 = 14056851103LLU;

    t100 = (x445-((x446!=x447)^x448));

    if (t100 != 23636618490087605LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x449 = 2U;
	static uint16_t x450 = 4621U;
	static volatile uint64_t x452 = 5LLU;
	static volatile uint64_t t101 = 376LLU;

    t101 = (x449-((x450!=x451)^x452));

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = INT64_MAX;
	int8_t x455 = -3;
	uint32_t x456 = 77672569U;

    t102 = (x453-((x454!=x455)^x456));

    if (t102 != 4217360263U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x460 = INT16_MIN;
	int32_t t103 = 25;

    t103 = (x457-((x458!=x459)^x460));

    if (t103 != 32828) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x462 = INT16_MIN;
	volatile int32_t x463 = 0;
	int64_t x464 = INT64_MIN;
	static int64_t t104 = 5LL;

    t104 = (x461-((x462!=x463)^x464));

    if (t104 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x467 = -1LL;
	static volatile int64_t t105 = -43450722682LL;

    t105 = (x465-((x466!=x467)^x468));

    if (t105 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x470 = 6;
	static int16_t x471 = 1;
	static uint32_t x472 = 159884U;
	volatile uint32_t t106 = 64373U;

    t106 = (x469-((x470!=x471)^x472));

    if (t106 != 2147323763U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x474 = UINT64_MAX;
	int32_t x475 = -1;
	uint64_t t107 = 506009944295LLU;

    t107 = (x473-((x474!=x475)^x476));

    if (t107 != 215380498151729336LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x477 = 0;
	static uint8_t x478 = 2U;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = 2U;

    t108 = (x477-((x478!=x479)^x480));

    if (t108 != -3) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x481 = UINT64_MAX;
	int8_t x482 = -1;
	static volatile uint32_t x483 = 3267322U;
	volatile int32_t x484 = INT32_MIN;
	uint64_t t109 = 66507323019LLU;

    t109 = (x481-((x482!=x483)^x484));

    if (t109 != 2147483646LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x485 = 151416U;
	static int16_t x486 = INT16_MIN;
	volatile uint32_t x487 = 2501667U;

    t110 = (x485-((x486!=x487)^x488));

    if (t110 != 18245306890581780201LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x489 = INT32_MIN;
	static volatile uint64_t x490 = UINT64_MAX;
	static int8_t x491 = -4;
	int32_t x492 = INT32_MIN;

    t111 = (x489-((x490!=x491)^x492));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x494 = UINT64_MAX;
	static uint64_t x495 = 2351910880008735055LLU;
	volatile int16_t x496 = -1;
	volatile int32_t t112 = 14213;

    t112 = (x493-((x494!=x495)^x496));

    if (t112 != 166) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x497 = -1LL;
	static uint32_t x498 = 504U;
	int32_t x499 = -1;

    t113 = (x497-((x498!=x499)^x500));

    if (t113 != -27LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x505 = 20U;
	int32_t x506 = INT32_MIN;
	int16_t x507 = -1;

    t114 = (x505-((x506!=x507)^x508));

    if (t114 != 20) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x513 = 3U;
	int8_t x514 = 23;
	volatile uint16_t x515 = UINT16_MAX;
	int64_t x516 = 1289267LL;
	volatile int64_t t115 = 130710510LL;

    t115 = (x513-((x514!=x515)^x516));

    if (t115 != -1289263LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = -1;
	volatile uint64_t x519 = 124493415375713LLU;
	volatile uint64_t t116 = 578157LLU;

    t116 = (x517-((x518!=x519)^x520));

    if (t116 != 18446744073676869625LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x521 = 1;
	volatile uint64_t x522 = 168LLU;
	int8_t x523 = -1;
	int8_t x524 = 1;
	static int32_t t117 = 10738414;

    t117 = (x521-((x522!=x523)^x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x525 = INT64_MIN;
	static uint32_t x526 = UINT32_MAX;
	int8_t x527 = INT8_MIN;
	int64_t x528 = INT64_MIN;
	volatile int64_t t118 = 4478544LL;

    t118 = (x525-((x526!=x527)^x528));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x529 = INT8_MIN;
	int32_t x530 = 3566382;
	uint32_t x531 = 21923U;
	int64_t x532 = INT64_MIN;
	static int64_t t119 = 0LL;

    t119 = (x529-((x530!=x531)^x532));

    if (t119 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x533 = UINT64_MAX;
	int64_t x534 = -1LL;
	int16_t x535 = INT16_MIN;
	volatile uint8_t x536 = 23U;
	volatile uint64_t t120 = 771046427478LLU;

    t120 = (x533-((x534!=x535)^x536));

    if (t120 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x537 = 242287521987LLU;
	static volatile uint16_t x538 = UINT16_MAX;
	static volatile uint64_t x539 = 2518662LLU;
	uint64_t t121 = 26489762603992244LLU;

    t121 = (x537-((x538!=x539)^x540));

    if (t121 != 242287521989LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x545 = INT32_MIN;
	uint8_t x548 = 1U;
	int32_t t122 = INT32_MIN;

    t122 = (x545-((x546!=x547)^x548));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x550 = INT64_MIN;
	static volatile int32_t x551 = 2237405;
	uint32_t x552 = 1720566369U;

    t123 = (x549-((x550!=x551)^x552));

    if (t123 != 2574400927U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	int32_t x554 = -1;
	int16_t x555 = INT16_MIN;

    t124 = (x553-((x554!=x555)^x556));

    if (t124 != 14705LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x557 = INT16_MIN;
	uint8_t x559 = UINT8_MAX;
	int32_t x560 = -1;

    t125 = (x557-((x558!=x559)^x560));

    if (t125 != -32766) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x563 = 634859U;
	int8_t x564 = -1;

    t126 = (x561-((x562!=x563)^x564));

    if (t126 != 65537) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x569 = 12U;
	int32_t x572 = -1;
	int32_t t127 = 3;

    t127 = (x569-((x570!=x571)^x572));

    if (t127 != 13) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x574 = INT32_MIN;
	static volatile int32_t x576 = INT32_MAX;
	uint32_t t128 = 864U;

    t128 = (x573-((x574!=x575)^x576));

    if (t128 != 2147483649U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x581 = -1;
	int32_t x582 = -177475636;
	int32_t x583 = INT32_MAX;
	int32_t x584 = INT32_MIN;
	int32_t t129 = -90215296;

    t129 = (x581-((x582!=x583)^x584));

    if (t129 != 2147483646) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MAX;
	int16_t x591 = INT16_MIN;
	volatile uint32_t x592 = 709U;
	volatile uint32_t t130 = 52043U;

    t130 = (x589-((x590!=x591)^x592));

    if (t130 != 2147482940U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x593 = -1;
	int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MAX;
	int32_t t131 = 0;

    t131 = (x593-((x594!=x595)^x596));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x598 = -4;
	uint16_t x599 = 3725U;
	volatile int64_t x600 = -154655160669LL;
	int64_t t132 = -95429718LL;

    t132 = (x597-((x598!=x599)^x600));

    if (t132 != 152507677022LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x601 = UINT8_MAX;
	volatile uint32_t x602 = 44515009U;
	int32_t x603 = 42361;
	static int32_t x604 = -1;
	int32_t t133 = -118548492;

    t133 = (x601-((x602!=x603)^x604));

    if (t133 != 257) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x610 = 717U;
	int8_t x611 = INT8_MAX;
	static volatile int32_t x612 = INT32_MIN;
	int32_t t134 = -46;

    t134 = (x609-((x610!=x611)^x612));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x613 = 1U;
	int16_t x614 = -1;
	int32_t x615 = 43020057;
	int64_t x616 = 101198192551LL;

    t135 = (x613-((x614!=x615)^x616));

    if (t135 != -101198192549LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x617 = 13096U;
	volatile uint64_t x618 = UINT64_MAX;
	int8_t x619 = 1;
	uint8_t x620 = 44U;
	uint32_t t136 = 133164582U;

    t136 = (x617-((x618!=x619)^x620));

    if (t136 != 13051U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x622 = -1LL;
	int16_t x623 = -2;
	int64_t t137 = -1712489061837314881LL;

    t137 = (x621-((x622!=x623)^x624));

    if (t137 != -1382402315250LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x625 = -29;
	volatile int64_t x626 = INT64_MAX;
	uint32_t x627 = 978792U;
	uint16_t x628 = UINT16_MAX;
	int32_t t138 = 298931430;

    t138 = (x625-((x626!=x627)^x628));

    if (t138 != -65563) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x629 = INT8_MAX;
	int32_t x630 = INT32_MAX;
	static volatile uint16_t x631 = UINT16_MAX;
	int16_t x632 = INT16_MIN;

    t139 = (x629-((x630!=x631)^x632));

    if (t139 != 32894) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x633 = 448U;
	int8_t x634 = INT8_MAX;
	uint32_t x635 = UINT32_MAX;
	static uint16_t x636 = 22U;
	volatile int32_t t140 = 480965996;

    t140 = (x633-((x634!=x635)^x636));

    if (t140 != 425) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x637 = INT64_MIN;
	uint8_t x639 = 11U;
	int16_t x640 = -1;
	static volatile int64_t t141 = -55058922442157LL;

    t141 = (x637-((x638!=x639)^x640));

    if (t141 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x641 = -1;
	int16_t x642 = -3740;
	int8_t x643 = -1;
	uint32_t x644 = 260591U;
	uint32_t t142 = 71332U;

    t142 = (x641-((x642!=x643)^x644));

    if (t142 != 4294706705U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = 112624987845003452LL;
	int16_t x647 = -3;
	static int64_t x648 = -93804765693086LL;
	int64_t t143 = 926LL;

    t143 = (x645-((x646!=x647)^x648));

    if (t143 != 93802618209437LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x651 = INT8_MAX;
	int32_t x652 = -1;
	volatile int32_t t144 = -4434997;

    t144 = (x649-((x650!=x651)^x652));

    if (t144 != 129) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x653 = 1;
	static uint16_t x654 = 5240U;
	int64_t x655 = INT64_MIN;

    t145 = (x653-((x654!=x655)^x656));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x657 = -6083890;
	int32_t x658 = 54241059;
	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;

    t146 = (x657-((x658!=x659)^x660));

    if (t146 != -6083763) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x661 = INT32_MAX;
	uint8_t x662 = 4U;
	int16_t x663 = INT16_MIN;
	static uint32_t x664 = UINT32_MAX;
	volatile uint32_t t147 = 5U;

    t147 = (x661-((x662!=x663)^x664));

    if (t147 != 2147483649U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x666 = -1;
	volatile int32_t x667 = INT32_MIN;
	int64_t x668 = -1LL;
	volatile int64_t t148 = -8LL;

    t148 = (x665-((x666!=x667)^x668));

    if (t148 != 18408LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x669 = INT32_MIN;
	uint64_t x670 = UINT64_MAX;
	static int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MIN;

    t149 = (x669-((x670!=x671)^x672));

    if (t149 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x677 = 47U;
	int8_t x678 = 1;
	int64_t x679 = INT64_MIN;
	int16_t x680 = 0;
	static int32_t t150 = 1006;

    t150 = (x677-((x678!=x679)^x680));

    if (t150 != 46) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x681 = INT8_MIN;
	static int32_t x682 = -70995082;
	static int32_t x683 = INT32_MIN;
	uint64_t t151 = 801LLU;

    t151 = (x681-((x682!=x683)^x684));

    if (t151 != 18446744073709352165LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x685 = 5268LLU;
	volatile uint64_t t152 = 13770280050178837LLU;

    t152 = (x685-((x686!=x687)^x688));

    if (t152 != 5142LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x689 = INT8_MIN;
	static int32_t x691 = INT32_MIN;
	uint64_t x692 = 2496845LLU;
	uint64_t t153 = 15021669LLU;

    t153 = (x689-((x690!=x691)^x692));

    if (t153 != 18446744073707054644LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x697 = UINT8_MAX;
	int32_t x698 = INT32_MAX;
	int32_t x699 = INT32_MIN;
	static uint32_t x700 = 57U;
	uint32_t t154 = 3234931U;

    t154 = (x697-((x698!=x699)^x700));

    if (t154 != 199U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x701 = INT16_MAX;
	int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MAX;
	int64_t x704 = -168374917985245LL;
	static volatile int64_t t155 = -4174628083917LL;

    t155 = (x701-((x702!=x703)^x704));

    if (t155 != 168374918018013LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x705 = 45392651545181LLU;
	int8_t x706 = -1;
	uint16_t x707 = UINT16_MAX;
	uint8_t x708 = 0U;
	volatile uint64_t t156 = 8749278837434LLU;

    t156 = (x705-((x706!=x707)^x708));

    if (t156 != 45392651545180LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x713 = 12;
	volatile uint64_t x714 = UINT64_MAX;
	volatile int64_t x715 = INT64_MIN;
	static int32_t t157 = 41527529;

    t157 = (x713-((x714!=x715)^x716));

    if (t157 != 5) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x725 = INT16_MIN;
	static volatile int16_t x727 = 60;
	volatile uint32_t x728 = 21256421U;
	volatile uint32_t t158 = 54404U;

    t158 = (x725-((x726!=x727)^x728));

    if (t158 != 4273678108U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x729 = -54;
	int16_t x731 = INT16_MAX;
	int64_t x732 = -464105LL;

    t159 = (x729-((x730!=x731)^x732));

    if (t159 != 464052LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile uint8_t x734 = UINT8_MAX;
	int64_t x735 = -5851046861796LL;
	int16_t x736 = INT16_MIN;
	int32_t t160 = 65981;

    t160 = (x733-((x734!=x735)^x736));

    if (t160 != 33022) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x737 = 1105;
	uint64_t x738 = UINT64_MAX;
	volatile int64_t x739 = INT64_MAX;
	int16_t x740 = INT16_MIN;

    t161 = (x737-((x738!=x739)^x740));

    if (t161 != 33872) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x741 = -1LL;
	uint16_t x742 = 51U;
	int32_t x744 = INT32_MIN;
	volatile int64_t t162 = 31587LL;

    t162 = (x741-((x742!=x743)^x744));

    if (t162 != 2147483646LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x745 = INT16_MAX;
	int8_t x748 = INT8_MAX;
	int32_t t163 = 81;

    t163 = (x745-((x746!=x747)^x748));

    if (t163 != 32641) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	uint32_t x751 = 25U;
	int32_t x752 = INT32_MIN;
	volatile int32_t t164 = -1787;

    t164 = (x749-((x750!=x751)^x752));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x759 = 3;
	uint32_t x760 = 2806U;
	volatile uint64_t t165 = 5816513574958200480LLU;

    t165 = (x757-((x758!=x759)^x760));

    if (t165 != 18446744073709548808LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x761 = 7589LLU;
	uint64_t t166 = 263838513051494809LLU;

    t166 = (x761-((x762!=x763)^x764));

    if (t166 != 7591LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x765 = 4303U;
	int8_t x766 = 13;
	volatile int64_t x767 = -1LL;
	volatile uint32_t x768 = 77627U;
	uint32_t t167 = 5355U;

    t167 = (x765-((x766!=x767)^x768));

    if (t167 != 4294893973U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x771 = INT8_MIN;
	volatile int16_t x772 = INT16_MIN;
	int32_t t168 = -8723;

    t168 = (x769-((x770!=x771)^x772));

    if (t168 != -2147450881) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x774 = 517U;
	static int64_t x775 = INT64_MIN;
	int8_t x776 = 0;

    t169 = (x773-((x774!=x775)^x776));

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x777 = 1951U;
	volatile int8_t x778 = INT8_MIN;
	static int16_t x779 = INT16_MIN;
	int64_t x780 = -1LL;
	int64_t t170 = -152534577828LL;

    t170 = (x777-((x778!=x779)^x780));

    if (t170 != 1953LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x782 = INT64_MIN;
	int32_t x783 = -2741;
	int8_t x784 = -1;
	uint32_t t171 = 287159991U;

    t171 = (x781-((x782!=x783)^x784));

    if (t171 != 499571U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x790 = -1;
	int32_t x791 = INT32_MIN;
	int16_t x792 = 7818;
	int32_t t172 = 10;

    t172 = (x789-((x790!=x791)^x792));

    if (t172 != -40587) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = INT64_MAX;
	int32_t x798 = -1;
	uint8_t x800 = 1U;
	static int64_t t173 = INT64_MAX;

    t173 = (x797-((x798!=x799)^x800));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x801 = INT16_MAX;
	volatile int64_t x802 = INT64_MIN;
	int8_t x803 = INT8_MAX;
	int32_t x804 = -1;
	int32_t t174 = -4;

    t174 = (x801-((x802!=x803)^x804));

    if (t174 != 32769) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x813 = 74089490U;
	uint64_t x814 = 8711257LLU;
	volatile int64_t x815 = INT64_MIN;
	static uint8_t x816 = 54U;
	static volatile uint32_t t175 = 26U;

    t175 = (x813-((x814!=x815)^x816));

    if (t175 != 74089435U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x817 = 107607200LLU;
	int32_t x818 = -1;
	int8_t x820 = 17;
	uint64_t t176 = 436LLU;

    t176 = (x817-((x818!=x819)^x820));

    if (t176 != 107607184LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x821 = -689759041LL;
	static uint32_t x822 = UINT32_MAX;
	int32_t x823 = INT32_MIN;
	int64_t t177 = 5849876318594542LL;

    t177 = (x821-((x822!=x823)^x824));

    if (t177 != -689791807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x825 = 3;
	int16_t x826 = 0;
	static int8_t x828 = -1;
	int32_t t178 = -529953520;

    t178 = (x825-((x826!=x827)^x828));

    if (t178 != 5) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x829 = UINT64_MAX;
	volatile int16_t x830 = -1;
	int16_t x831 = INT16_MIN;
	static int32_t x832 = INT32_MIN;
	static volatile uint64_t t179 = 8861160130LLU;

    t179 = (x829-((x830!=x831)^x832));

    if (t179 != 2147483646LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x841 = INT32_MIN;
	volatile uint8_t x842 = 0U;
	static int8_t x843 = -1;
	int32_t x844 = -169109;
	int32_t t180 = 91761;

    t180 = (x841-((x842!=x843)^x844));

    if (t180 != -2147314538) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x845 = 20992224;
	int16_t x847 = -1;
	int8_t x848 = INT8_MIN;

    t181 = (x845-((x846!=x847)^x848));

    if (t181 != 20992351) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x853 = INT64_MIN;
	int8_t x855 = INT8_MAX;
	volatile int32_t x856 = -1;
	volatile int64_t t182 = -1LL;

    t182 = (x853-((x854!=x855)^x856));

    if (t182 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x857 = 704557U;
	int8_t x859 = -1;
	uint8_t x860 = 13U;
	volatile uint32_t t183 = 3740138U;

    t183 = (x857-((x858!=x859)^x860));

    if (t183 != 704545U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x861 = 227113611;
	uint8_t x862 = 48U;
	int32_t x863 = INT32_MAX;
	volatile uint32_t t184 = 270994U;

    t184 = (x861-((x862!=x863)^x864));

    if (t184 != 227099942U) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x866 = 36304;
	int64_t x867 = -1LL;
	int8_t x868 = -1;
	volatile uint32_t t185 = 17897U;

    t185 = (x865-((x866!=x867)^x868));

    if (t185 != 11U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x869 = -109;
	uint16_t x871 = 46U;
	static volatile int64_t t186 = -172289562987894004LL;

    t186 = (x869-((x870!=x871)^x872));

    if (t186 != 9223372036854775698LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x874 = UINT32_MAX;
	uint32_t x875 = UINT32_MAX;
	volatile int64_t x876 = INT64_MAX;
	int64_t t187 = 239LL;

    t187 = (x873-((x874!=x875)^x876));

    if (t187 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x877 = 23U;
	int8_t x878 = -1;
	uint32_t x879 = 209924U;
	uint64_t x880 = 27398611818LLU;
	uint64_t t188 = 6106131122LLU;

    t188 = (x877-((x878!=x879)^x880));

    if (t188 != 18446744046310939820LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x881 = INT8_MAX;
	int64_t x882 = 1973471700732371785LL;
	static int16_t x883 = INT16_MIN;

    t189 = (x881-((x882!=x883)^x884));

    if (t189 != 129LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x886 = 29;
	int8_t x887 = INT8_MIN;
	static int16_t x888 = INT16_MAX;
	static volatile int32_t t190 = 152;

    t190 = (x885-((x886!=x887)^x888));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x889 = INT64_MIN;
	uint16_t x890 = 377U;
	static uint32_t x891 = 46330U;
	uint64_t x892 = 1502711968133LLU;
	volatile uint64_t t191 = 27012LLU;

    t191 = (x889-((x890!=x891)^x892));

    if (t191 != 9223370534142807676LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x893 = 772871681;
	uint8_t x895 = UINT8_MAX;

    t192 = (x893-((x894!=x895)^x896));

    if (t192 != 764128502U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x897 = -1LL;
	int16_t x898 = INT16_MAX;
	uint32_t x899 = 166486594U;
	static uint16_t x900 = 1178U;
	int64_t t193 = 269670168LL;

    t193 = (x897-((x898!=x899)^x900));

    if (t193 != -1180LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x901 = INT16_MIN;
	static int16_t x902 = INT16_MAX;
	static int64_t x903 = INT64_MAX;
	volatile int16_t x904 = -1;

    t194 = (x901-((x902!=x903)^x904));

    if (t194 != -32766) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = -1;
	uint8_t x906 = UINT8_MAX;
	int16_t x907 = 1414;
	int16_t x908 = 1046;
	volatile int32_t t195 = -7848181;

    t195 = (x905-((x906!=x907)^x908));

    if (t195 != -1048) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = INT8_MAX;
	uint64_t x912 = 27371567LLU;
	uint64_t t196 = 25LLU;

    t196 = (x909-((x910!=x911)^x912));

    if (t196 != 18446744073682180177LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x913 = 15390LLU;
	volatile int16_t x914 = INT16_MAX;
	uint32_t x916 = 1004149221U;
	volatile uint64_t t197 = 131672184803LLU;

    t197 = (x913-((x914!=x915)^x916));

    if (t197 != 18446744072705417786LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x917 = -1;
	int64_t x918 = INT64_MIN;
	uint8_t x919 = UINT8_MAX;
	static int64_t x920 = -1LL;
	volatile int64_t t198 = -42LL;

    t198 = (x917-((x918!=x919)^x920));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x921 = INT64_MIN;
	static volatile int8_t x922 = INT8_MIN;
	volatile int64_t x923 = -42993928634LL;
	int64_t x924 = INT64_MIN;
	static volatile int64_t t199 = 1846LL;

    t199 = (x921-((x922!=x923)^x924));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

