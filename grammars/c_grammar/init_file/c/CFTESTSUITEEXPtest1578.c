
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

static int32_t x2 = -1;
volatile int64_t x7 = INT64_MIN;
int32_t t1 = 29903996;
static volatile int32_t x9 = -31404;
static int16_t x11 = 92;
int16_t x12 = INT16_MIN;
volatile int32_t x16 = 36305707;
uint32_t x20 = UINT32_MAX;
uint64_t x30 = 125270LLU;
volatile int32_t t7 = -610012682;
volatile int32_t t8 = 478598380;
static volatile int32_t x38 = INT32_MIN;
volatile int64_t x44 = -1466960798102942780LL;
uint16_t x52 = UINT16_MAX;
int64_t x53 = -203994777LL;
volatile int8_t x68 = INT8_MIN;
volatile int32_t t16 = 116353620;
int8_t x71 = INT8_MAX;
int8_t x75 = 0;
int32_t x79 = INT32_MIN;
int8_t x80 = INT8_MIN;
volatile int32_t t19 = 242371304;
int8_t x83 = INT8_MAX;
static int32_t t20 = -900;
int32_t t21 = -44;
uint8_t x105 = 17U;
int32_t x110 = INT32_MIN;
int64_t x117 = 19797775LL;
volatile int32_t t30 = -717939730;
int8_t x130 = INT8_MIN;
int32_t t32 = 92276;
static volatile int16_t x143 = INT16_MAX;
int8_t x161 = 0;
static int32_t t40 = -133877444;
uint16_t x165 = UINT16_MAX;
uint32_t x170 = UINT32_MAX;
volatile int8_t x171 = 1;
volatile uint8_t x172 = UINT8_MAX;
int32_t t45 = -400960229;
uint64_t x188 = 46210968432LLU;
int64_t x191 = INT64_MIN;
static int32_t x194 = INT32_MIN;
uint16_t x197 = UINT16_MAX;
uint8_t x198 = UINT8_MAX;
int32_t t49 = 0;
static uint64_t x204 = 2291LLU;
uint64_t x208 = UINT64_MAX;
uint16_t x213 = UINT16_MAX;
int32_t x220 = INT32_MIN;
volatile int16_t x228 = INT16_MAX;
int8_t x229 = INT8_MIN;
uint64_t x235 = UINT64_MAX;
static uint8_t x236 = UINT8_MAX;
volatile int32_t t58 = -1479974;
int8_t x237 = INT8_MIN;
volatile int32_t x238 = INT32_MIN;
int32_t t59 = 0;
uint16_t x241 = 12U;
volatile int64_t x242 = -4LL;
static int32_t x248 = -1;
static volatile int64_t x251 = -54663LL;
uint16_t x252 = UINT16_MAX;
int8_t x255 = INT8_MIN;
volatile int32_t t63 = -3889;
int32_t x259 = -68100541;
int32_t t65 = -7;
int16_t x270 = -19;
uint8_t x279 = 5U;
int8_t x280 = INT8_MIN;
static uint32_t x284 = UINT32_MAX;
int32_t t70 = -173047;
static int32_t t71 = -2857288;
static int64_t x289 = 131611LL;
volatile uint8_t x294 = UINT8_MAX;
static uint64_t x297 = 364788190230996LLU;
volatile int32_t t74 = 13;
volatile int16_t x305 = INT16_MIN;
static volatile int16_t x310 = INT16_MAX;
int8_t x312 = INT8_MIN;
volatile int32_t t78 = -884047;
int8_t x318 = INT8_MAX;
static uint16_t x321 = 2U;
volatile uint8_t x329 = 48U;
volatile int64_t x330 = INT64_MIN;
int32_t t82 = 236;
int32_t t83 = 1;
int32_t x340 = 0;
volatile int32_t t84 = -1;
int32_t x341 = -14627;
static uint64_t x349 = 182343086410478097LLU;
int8_t x352 = -1;
int32_t t88 = -46023;
volatile int8_t x363 = INT8_MIN;
static int16_t x367 = -406;
static int64_t x368 = -69470655484145LL;
volatile int32_t t91 = 1939;
uint64_t x369 = UINT64_MAX;
static volatile uint8_t x372 = UINT8_MAX;
static uint8_t x379 = 0U;
static int32_t t95 = 1365040;
volatile int32_t t96 = -656031;
static int8_t x396 = INT8_MIN;
int32_t t97 = -41465;
int8_t x397 = INT8_MIN;
int64_t x399 = INT64_MAX;
int16_t x408 = -685;
int16_t x409 = 0;
static int32_t t101 = -3648188;
static int8_t x414 = -1;
static volatile int32_t x417 = 330766868;
int32_t t103 = 22588929;
int8_t x421 = INT8_MIN;
uint64_t x437 = 640LLU;
int32_t t108 = -4981;
static uint8_t x441 = 34U;
volatile int32_t t109 = 57611163;
int16_t x445 = INT16_MIN;
static uint16_t x448 = 0U;
volatile int32_t t110 = -198993763;
int64_t x449 = -1935506342904912LL;
volatile int32_t t112 = -930;
volatile int8_t x460 = -1;
int8_t x461 = -8;
volatile int32_t t114 = 1;
uint16_t x465 = UINT16_MAX;
static uint16_t x467 = 2676U;
int32_t x471 = INT32_MAX;
static volatile int32_t t116 = -150;
int32_t x474 = INT32_MAX;
int64_t x476 = -1LL;
static volatile int32_t x481 = -13063220;
int64_t x482 = INT64_MIN;
volatile int32_t t119 = 175;
int8_t x485 = INT8_MIN;
volatile uint64_t x491 = 846744421350LLU;
int8_t x495 = INT8_MAX;
int16_t x497 = 3;
int8_t x499 = 54;
volatile int32_t t124 = 57;
uint64_t x510 = 36741213931442LLU;
volatile int32_t t126 = -37270;
volatile int32_t x518 = -1;
int16_t x520 = INT16_MIN;
int64_t x521 = -455446790804LL;
int32_t t129 = 11837130;
uint32_t x526 = 223938U;
int8_t x530 = -1;
uint64_t x536 = 389833914446222LLU;
volatile int32_t t132 = 551657;
static int8_t x538 = -1;
volatile int32_t t135 = -6062;
static int32_t x552 = 1;
int32_t t136 = -7;
static volatile int8_t x562 = -1;
uint8_t x574 = 9U;
int32_t t142 = -467925;
uint64_t x577 = 4LLU;
uint32_t x580 = 906U;
int8_t x582 = INT8_MIN;
volatile uint16_t x583 = 1506U;
static uint64_t x584 = 30865LLU;
int64_t x590 = INT64_MIN;
int32_t x595 = -928549425;
static volatile int32_t t149 = -1613;
int16_t x614 = INT16_MIN;
int16_t x620 = -1;
int8_t x622 = INT8_MAX;
int32_t x625 = -8716;
uint64_t x627 = 21078839LLU;
int16_t x629 = -1;
int64_t x630 = INT64_MIN;
int16_t x632 = INT16_MIN;
int64_t x634 = INT64_MAX;
int64_t x636 = -1LL;
int32_t t156 = -124970164;
volatile int32_t x639 = -1;
volatile int8_t x640 = INT8_MIN;
static uint8_t x641 = UINT8_MAX;
static int32_t x646 = INT32_MAX;
int16_t x649 = INT16_MAX;
int64_t x669 = INT64_MIN;
uint16_t x670 = 1796U;
uint64_t x671 = UINT64_MAX;
int8_t x673 = INT8_MIN;
int16_t x678 = INT16_MIN;
int32_t x680 = INT32_MIN;
uint64_t x681 = 112LLU;
int64_t x684 = INT64_MIN;
static uint8_t x688 = 11U;
static volatile int8_t x695 = INT8_MIN;
volatile int32_t t170 = -28665987;
int32_t t173 = 23931472;
volatile uint64_t x712 = 15355798LLU;
int8_t x716 = 8;
static uint32_t x723 = 11U;
static int16_t x724 = INT16_MIN;
static int32_t t177 = 215669;
volatile int32_t x726 = -1;
uint64_t x728 = 4832625LLU;
uint32_t x730 = 0U;
int32_t x731 = 3148;
volatile int32_t t180 = 27218111;
volatile int16_t x738 = INT16_MIN;
uint8_t x745 = UINT8_MAX;
static int64_t x748 = INT64_MAX;
int32_t x750 = INT32_MIN;
static volatile uint64_t x752 = 602592086LLU;
uint64_t x753 = 4084LLU;
static volatile int64_t x754 = INT64_MAX;
static int8_t x760 = 0;
int16_t x764 = -1;
int32_t t187 = 123;
volatile int32_t t188 = 186863898;
uint32_t x769 = UINT32_MAX;
volatile int32_t x772 = -7650967;
int64_t x779 = -3574144816478044912LL;
uint32_t x780 = 815573U;
int16_t x781 = INT16_MIN;
volatile int32_t t192 = 424962651;
volatile int64_t x786 = -1LL;
int64_t x790 = INT64_MIN;
int32_t x793 = INT32_MIN;
static uint8_t x801 = UINT8_MAX;
volatile int32_t x806 = -1;
int32_t t198 = 4286;


void f0(void) {
    	static uint8_t x1 = 1U;
	static volatile int16_t x3 = INT16_MIN;
	static int16_t x4 = -1;
	volatile int32_t t0 = 7;

    t0 = (x1<=((x2>x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 0;
	static int8_t x6 = 1;
	static volatile int32_t x8 = 3291;

    t1 = (x5<=((x6>x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = -1;
	int32_t t2 = 40055;

    t2 = (x9<=((x10>x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	int64_t x15 = INT64_MIN;
	static int32_t t3 = 489349042;

    t3 = (x13<=((x14>x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 8248;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = -5910606LL;
	int32_t t4 = 15993;

    t4 = (x17<=((x18>x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x21 = 1250U;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 62U;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = 0;

    t5 = (x21<=((x22>x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 5;
	uint16_t x26 = 51U;
	static int64_t x27 = INT64_MIN;
	static int64_t x28 = -1LL;
	volatile int32_t t6 = 115784;

    t6 = (x25<=((x26>x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 2337087674908942235LL;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -1;

    t7 = (x29<=((x30>x31)+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int8_t x34 = INT8_MIN;
	static uint16_t x35 = 18U;
	int64_t x36 = INT64_MIN;

    t8 = (x33<=((x34>x35)+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	uint64_t x39 = 447035225LLU;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 1;

    t9 = (x37<=((x38>x39)+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 0U;
	uint8_t x42 = UINT8_MAX;
	static int64_t x43 = INT64_MIN;
	static int32_t t10 = -39939312;

    t10 = (x41<=((x42>x43)+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 33349271LLU;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 44U;
	int64_t x48 = -19007LL;
	volatile int32_t t11 = -1486098;

    t11 = (x45<=((x46>x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -1LL;
	uint16_t x51 = 7912U;
	static volatile int32_t t12 = 2392269;

    t12 = (x49<=((x50>x51)+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = -1;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = 0U;
	volatile int32_t t13 = 457;

    t13 = (x53<=((x54>x55)+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 5U;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MAX;
	volatile uint8_t x60 = 3U;
	int32_t t14 = 196530;

    t14 = (x57<=((x58>x59)+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint8_t x62 = 4U;
	volatile int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;
	static int32_t t15 = 63;

    t15 = (x61<=((x62>x63)+x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 38U;
	uint8_t x66 = 26U;
	uint16_t x67 = 0U;

    t16 = (x65<=((x66>x67)+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 3023U;
	volatile int16_t x70 = INT16_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	static volatile int32_t t17 = 534453511;

    t17 = (x69<=((x70>x71)+x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MAX;
	volatile uint16_t x74 = 4039U;
	int64_t x76 = 16649009209LL;
	volatile int32_t t18 = 3987892;

    t18 = (x73<=((x74>x75)+x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 790U;
	int32_t x78 = INT32_MIN;

    t19 = (x77<=((x78>x79)+x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MAX;
	volatile int32_t x82 = -821380;
	volatile uint8_t x84 = UINT8_MAX;

    t20 = (x81<=((x82>x83)+x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int32_t x86 = 2286993;
	int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;

    t21 = (x85<=((x86>x87)+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	volatile int32_t x90 = INT32_MIN;
	static int64_t x91 = -1LL;
	static int32_t x92 = INT32_MAX;
	static int32_t t22 = -769704;

    t22 = (x89<=((x90>x91)+x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = -63;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = -1;
	int32_t t23 = 2;

    t23 = (x93<=((x94>x95)+x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 1U;
	int8_t x98 = INT8_MAX;
	static volatile int8_t x99 = -46;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -238991;

    t24 = (x97<=((x98>x99)+x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -69;
	static uint16_t x102 = 26919U;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 49U;
	int32_t t25 = 4998;

    t25 = (x101<=((x102>x103)+x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = UINT8_MAX;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -794;

    t26 = (x105<=((x106>x107)+x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = -1;
	static volatile int8_t x111 = -1;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = 13857;

    t27 = (x109<=((x110>x111)+x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MIN;
	static uint32_t x115 = 360U;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 32510;

    t28 = (x113<=((x114>x115)+x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 206LLU;
	int32_t x119 = INT32_MIN;
	static uint8_t x120 = 25U;
	volatile int32_t t29 = -5261;

    t29 = (x117<=((x118>x119)+x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = 6U;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MAX;
	static int32_t x124 = -1;

    t30 = (x121<=((x122>x123)+x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = 2793;
	volatile int32_t x126 = -70;
	uint16_t x127 = 0U;
	uint8_t x128 = 8U;
	volatile int32_t t31 = -4;

    t31 = (x125<=((x126>x127)+x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = -2729555453545LL;
	uint8_t x131 = 4U;
	volatile uint64_t x132 = 2168103078122209254LLU;

    t32 = (x129<=((x130>x131)+x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	static int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t33 = 8388424;

    t33 = (x133<=((x134>x135)+x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MAX;
	volatile int64_t x138 = INT64_MAX;
	volatile int64_t x139 = 689019935977000LL;
	int32_t x140 = -1;
	volatile int32_t t34 = 0;

    t34 = (x137<=((x138>x139)+x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	int8_t x144 = 28;
	volatile int32_t t35 = 152172;

    t35 = (x141<=((x142>x143)+x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 28U;
	uint8_t x146 = 8U;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 101U;
	volatile int32_t t36 = -13091350;

    t36 = (x145<=((x146>x147)+x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 398LLU;
	volatile int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 1036155704;

    t37 = (x149<=((x150>x151)+x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MAX;
	volatile int8_t x154 = INT8_MIN;
	volatile uint8_t x155 = 11U;
	int16_t x156 = -1;
	static volatile int32_t t38 = 460;

    t38 = (x153<=((x154>x155)+x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 13U;
	volatile int32_t t39 = 20159562;

    t39 = (x157<=((x158>x159)+x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MIN;
	int16_t x163 = 0;
	int64_t x164 = 10LL;

    t40 = (x161<=((x162>x163)+x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 7;

    t41 = (x165<=((x166>x167)+x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = 878LL;
	volatile int32_t t42 = 33753;

    t42 = (x169<=((x170>x171)+x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 863669412287732443LLU;
	uint16_t x174 = 2U;
	int16_t x175 = 19;
	static volatile int8_t x176 = 1;
	static volatile int32_t t43 = -12012626;

    t43 = (x173<=((x174>x175)+x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -26042477;
	uint32_t x178 = 754U;
	int16_t x179 = 898;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 798;

    t44 = (x177<=((x178>x179)+x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	static uint16_t x182 = 23673U;
	int32_t x183 = INT32_MAX;
	volatile uint8_t x184 = 6U;

    t45 = (x181<=((x182>x183)+x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = -1;
	int16_t x187 = -1;
	volatile int32_t t46 = -1;

    t46 = (x185<=((x186>x187)+x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x189 = -1;
	int16_t x190 = -119;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = 1004;

    t47 = (x189<=((x190>x191)+x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	uint64_t x195 = 92746840402LLU;
	int32_t x196 = -117;
	static volatile int32_t t48 = -230166;

    t48 = (x193<=((x194>x195)+x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x199 = 2739;
	uint64_t x200 = UINT64_MAX;

    t49 = (x197<=((x198>x199)+x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = -8037;
	uint32_t x202 = 1418U;
	int8_t x203 = INT8_MIN;
	volatile int32_t t50 = -65;

    t50 = (x201<=((x202>x203)+x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 271088821U;
	static volatile int8_t x207 = 1;
	volatile int32_t t51 = -279;

    t51 = (x205<=((x206>x207)+x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 2LL;
	volatile int64_t x210 = -26071794089LL;
	uint64_t x211 = 6995851543130242072LLU;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -5510427;

    t52 = (x209<=((x210>x211)+x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MAX;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 467;

    t53 = (x213<=((x214>x215)+x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 6U;
	int16_t x218 = INT16_MAX;
	volatile uint64_t x219 = 468666LLU;
	volatile int32_t t54 = 91;

    t54 = (x217<=((x218>x219)+x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 820601946;
	int8_t x222 = 21;
	int32_t x223 = INT32_MAX;
	static uint16_t x224 = 963U;
	static volatile int32_t t55 = 1;

    t55 = (x221<=((x222>x223)+x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 33U;
	int32_t x226 = 497538538;
	int8_t x227 = -1;
	static volatile int32_t t56 = -419;

    t56 = (x225<=((x226>x227)+x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = 3;
	volatile int64_t x231 = -1LL;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = 76917;

    t57 = (x229<=((x230>x231)+x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 17646520LLU;
	uint64_t x234 = UINT64_MAX;

    t58 = (x233<=((x234>x235)+x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x239 = 9LL;
	uint64_t x240 = 2695476985800487852LLU;

    t59 = (x237<=((x238>x239)+x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x243 = -1;
	int64_t x244 = INT64_MIN;
	int32_t t60 = -2071;

    t60 = (x241<=((x242>x243)+x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 69975129262529LL;
	volatile int8_t x246 = INT8_MAX;
	static int8_t x247 = INT8_MAX;
	int32_t t61 = -98659;

    t61 = (x245<=((x246>x247)+x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = 116U;
	volatile uint8_t x250 = UINT8_MAX;
	static volatile int32_t t62 = -1025412392;

    t62 = (x249<=((x250>x251)+x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 4948308U;
	static int8_t x254 = 58;
	int8_t x256 = -1;

    t63 = (x253<=((x254>x255)+x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	static uint8_t x258 = 7U;
	int64_t x260 = -3090043848373699778LL;
	volatile int32_t t64 = 8276998;

    t64 = (x257<=((x258>x259)+x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -2999;
	volatile int32_t x262 = INT32_MIN;
	volatile uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 82167104054LLU;

    t65 = (x261<=((x262>x263)+x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int8_t x266 = -25;
	int32_t x267 = INT32_MIN;
	int8_t x268 = -1;
	volatile int32_t t66 = -35487;

    t66 = (x265<=((x266>x267)+x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = 4333544241132856LLU;
	int16_t x271 = -1;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -1;

    t67 = (x269<=((x270>x271)+x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = 5LL;
	volatile int8_t x274 = INT8_MIN;
	volatile uint32_t x275 = UINT32_MAX;
	int32_t x276 = -1;
	volatile int32_t t68 = 600;

    t68 = (x273<=((x274>x275)+x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	uint16_t x278 = 56U;
	volatile int32_t t69 = -181248122;

    t69 = (x277<=((x278>x279)+x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = -1044412;
	uint8_t x282 = 1U;
	int16_t x283 = -1558;

    t70 = (x281<=((x282>x283)+x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 33;
	static int64_t x286 = 59049652098496LL;
	int32_t x287 = -1;
	volatile int16_t x288 = 5454;

    t71 = (x285<=((x286>x287)+x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = 44;
	volatile int64_t x291 = -1LL;
	static volatile int8_t x292 = 1;
	int32_t t72 = -237;

    t72 = (x289<=((x290>x291)+x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 53U;
	int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = 6U;
	volatile int32_t t73 = 108434;

    t73 = (x293<=((x294>x295)+x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x298 = 21324111LLU;
	int8_t x299 = 26;
	int16_t x300 = INT16_MIN;

    t74 = (x297<=((x298>x299)+x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = UINT32_MAX;
	static uint8_t x302 = 121U;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -444;

    t75 = (x301<=((x302>x303)+x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x306 = 3U;
	int32_t x307 = 2;
	int8_t x308 = -1;
	volatile int32_t t76 = 504052;

    t76 = (x305<=((x306>x307)+x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = 2075442248U;
	uint8_t x311 = 82U;
	int32_t t77 = -10244;

    t77 = (x309<=((x310>x311)+x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = INT64_MIN;
	volatile uint32_t x316 = 117U;

    t78 = (x313<=((x314>x315)+x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 0LLU;
	volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = 295735597586478LL;
	volatile int32_t t79 = 48;

    t79 = (x317<=((x318>x319)+x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -1LL;
	uint32_t x323 = 16433943U;
	volatile int64_t x324 = -9297960094336113LL;
	static int32_t t80 = -134360284;

    t80 = (x321<=((x322>x323)+x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 81U;
	uint64_t x326 = UINT64_MAX;
	volatile int32_t x327 = INT32_MIN;
	volatile int64_t x328 = INT64_MIN;
	int32_t t81 = -28894232;

    t81 = (x325<=((x326>x327)+x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = -3214;
	uint32_t x332 = 1382377U;

    t82 = (x329<=((x330>x331)+x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -30;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	static uint32_t x336 = 4384U;

    t83 = (x333<=((x334>x335)+x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MAX;

    t84 = (x337<=((x338>x339)+x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = INT64_MIN;
	static volatile int32_t x343 = 7850;
	static int32_t x344 = -1;
	volatile int32_t t85 = 389675;

    t85 = (x341<=((x342>x343)+x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = 40LL;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 21;

    t86 = (x345<=((x346>x347)+x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = 4016;
	int64_t x351 = 4502555509158952LL;
	volatile int32_t t87 = -5814;

    t87 = (x349<=((x350>x351)+x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = -1;
	int32_t x355 = -5;
	int8_t x356 = -1;

    t88 = (x353<=((x354>x355)+x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x357 = 3;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -12543;

    t89 = (x357<=((x358>x359)+x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -14555729;
	volatile int8_t x362 = INT8_MIN;
	int32_t x364 = -317;
	volatile int32_t t90 = 26;

    t90 = (x361<=((x362>x363)+x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 254U;
	int8_t x366 = INT8_MAX;

    t91 = (x365<=((x366>x367)+x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = 1U;
	static uint64_t x371 = 430716103LLU;
	int32_t t92 = -72;

    t92 = (x369<=((x370>x371)+x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = INT8_MAX;
	volatile int8_t x374 = -1;
	int32_t x375 = 9625;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 1;

    t93 = (x373<=((x374>x375)+x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	volatile uint8_t x378 = 2U;
	volatile int16_t x380 = INT16_MAX;
	int32_t t94 = 13679501;

    t94 = (x377<=((x378>x379)+x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint8_t x382 = 12U;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -1;

    t95 = (x381<=((x382>x383)+x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -123;
	int64_t x386 = -530971014LL;
	int16_t x387 = INT16_MAX;
	int8_t x388 = INT8_MAX;

    t96 = (x385<=((x386>x387)+x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = INT32_MIN;
	static int16_t x394 = -1;
	int16_t x395 = -240;

    t97 = (x393<=((x394>x395)+x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x398 = INT16_MIN;
	uint64_t x400 = 10LLU;
	int32_t t98 = -31285;

    t98 = (x397<=((x398>x399)+x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x401 = INT8_MAX;
	volatile uint32_t x402 = 134511U;
	uint16_t x403 = 15283U;
	int8_t x404 = 0;
	static int32_t t99 = 467382221;

    t99 = (x401<=((x402>x403)+x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x405 = 6U;
	int64_t x406 = -1LL;
	int32_t x407 = INT32_MIN;
	int32_t t100 = -59665;

    t100 = (x405<=((x406>x407)+x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x410 = 50U;
	uint32_t x411 = 4036U;
	static int16_t x412 = INT16_MIN;

    t101 = (x409<=((x410>x411)+x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x413 = UINT16_MAX;
	uint16_t x415 = 20422U;
	int32_t x416 = -333;
	int32_t t102 = -9198930;

    t102 = (x413<=((x414>x415)+x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x418 = INT16_MIN;
	uint8_t x419 = 1U;
	static int8_t x420 = -1;

    t103 = (x417<=((x418>x419)+x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x422 = 264U;
	volatile int8_t x423 = INT8_MIN;
	uint8_t x424 = 2U;
	volatile int32_t t104 = -499163341;

    t104 = (x421<=((x422>x423)+x424));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x425 = 23U;
	volatile int32_t x426 = INT32_MIN;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = -1;
	volatile int32_t t105 = -1799;

    t105 = (x425<=((x426>x427)+x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x429 = 0;
	static uint16_t x430 = UINT16_MAX;
	static int8_t x431 = INT8_MAX;
	static volatile int64_t x432 = -1LL;
	int32_t t106 = -12290218;

    t106 = (x429<=((x430>x431)+x432));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = INT16_MAX;
	static uint16_t x434 = UINT16_MAX;
	int64_t x435 = 113729LL;
	uint16_t x436 = 54U;
	int32_t t107 = 73831;

    t107 = (x433<=((x434>x435)+x436));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x438 = 134;
	static uint16_t x439 = UINT16_MAX;
	static int64_t x440 = INT64_MIN;

    t108 = (x437<=((x438>x439)+x440));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x442 = -1;
	volatile uint8_t x443 = 1U;
	int16_t x444 = INT16_MIN;

    t109 = (x441<=((x442>x443)+x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;

    t110 = (x445<=((x446>x447)+x448));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x450 = INT64_MAX;
	static int32_t x451 = INT32_MIN;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t111 = 15658978;

    t111 = (x449<=((x450>x451)+x452));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x453 = INT8_MAX;
	uint64_t x454 = 32349LLU;
	static uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MIN;

    t112 = (x453<=((x454>x455)+x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x457 = 100;
	static uint32_t x458 = UINT32_MAX;
	int32_t x459 = -1;
	volatile int32_t t113 = 2688590;

    t113 = (x457<=((x458>x459)+x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x462 = UINT8_MAX;
	volatile int8_t x463 = INT8_MAX;
	int32_t x464 = -1191153;

    t114 = (x461<=((x462>x463)+x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x466 = -14;
	int64_t x468 = INT64_MAX;
	static int32_t t115 = -425239;

    t115 = (x465<=((x466>x467)+x468));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MIN;
	int16_t x472 = -1;

    t116 = (x469<=((x470>x471)+x472));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -1;
	static volatile int8_t x475 = -1;
	static int32_t t117 = 43172;

    t117 = (x473<=((x474>x475)+x476));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = INT64_MAX;
	volatile int8_t x478 = 1;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	volatile int32_t t118 = -796;

    t118 = (x477<=((x478>x479)+x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x483 = -1;
	int16_t x484 = INT16_MIN;

    t119 = (x481<=((x482>x483)+x484));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x486 = -1;
	int8_t x487 = 0;
	volatile int16_t x488 = -1;
	volatile int32_t t120 = -389222;

    t120 = (x485<=((x486>x487)+x488));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = -1;
	volatile int64_t x490 = -1LL;
	volatile int32_t x492 = -272;
	int32_t t121 = -33956914;

    t121 = (x489<=((x490>x491)+x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	uint32_t x494 = UINT32_MAX;
	static int32_t x496 = INT32_MIN;
	int32_t t122 = -267679;

    t122 = (x493<=((x494>x495)+x496));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x498 = 0U;
	static int64_t x500 = -559014717547251LL;
	volatile int32_t t123 = 335433288;

    t123 = (x497<=((x498>x499)+x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x501 = 22U;
	int8_t x502 = INT8_MIN;
	uint16_t x503 = 499U;
	static uint64_t x504 = UINT64_MAX;

    t124 = (x501<=((x502>x503)+x504));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x505 = -11046LL;
	int8_t x506 = INT8_MIN;
	static int8_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	static volatile int32_t t125 = -598731829;

    t125 = (x505<=((x506>x507)+x508));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x509 = 358071739385735LLU;
	uint32_t x511 = 2881U;
	uint16_t x512 = 7417U;

    t126 = (x509<=((x510>x511)+x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = INT8_MIN;
	uint32_t x514 = 130045U;
	uint8_t x515 = 0U;
	uint16_t x516 = 24U;
	int32_t t127 = 12;

    t127 = (x513<=((x514>x515)+x516));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x517 = 1;
	volatile uint64_t x519 = UINT64_MAX;
	volatile int32_t t128 = 197569;

    t128 = (x517<=((x518>x519)+x520));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x522 = UINT16_MAX;
	int16_t x523 = INT16_MIN;
	int16_t x524 = 458;

    t129 = (x521<=((x522>x523)+x524));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile int32_t x527 = INT32_MAX;
	static uint64_t x528 = 888503652548907214LLU;
	int32_t t130 = 10;

    t130 = (x525<=((x526>x527)+x528));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x529 = 2U;
	int8_t x531 = INT8_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t131 = -11862832;

    t131 = (x529<=((x530>x531)+x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x533 = INT32_MIN;
	int16_t x534 = INT16_MIN;
	int16_t x535 = INT16_MIN;

    t132 = (x533<=((x534>x535)+x536));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = 184245;
	int32_t x539 = -115567;
	int8_t x540 = INT8_MIN;
	volatile int32_t t133 = 6594;

    t133 = (x537<=((x538>x539)+x540));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x541 = -56218299;
	static int64_t x542 = INT64_MIN;
	uint32_t x543 = UINT32_MAX;
	volatile int64_t x544 = -1LL;
	volatile int32_t t134 = -1;

    t134 = (x541<=((x542>x543)+x544));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x545 = INT64_MAX;
	static volatile int32_t x546 = INT32_MIN;
	static volatile int32_t x547 = INT32_MAX;
	static int64_t x548 = INT64_MAX;

    t135 = (x545<=((x546>x547)+x548));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x549 = UINT8_MAX;
	static int8_t x550 = -8;
	int8_t x551 = INT8_MAX;

    t136 = (x549<=((x550>x551)+x552));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x553 = 168966979289796LLU;
	int16_t x554 = INT16_MIN;
	int32_t x555 = 1;
	int8_t x556 = INT8_MIN;
	volatile int32_t t137 = -2;

    t137 = (x553<=((x554>x555)+x556));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = INT32_MIN;
	static volatile int64_t x558 = INT64_MAX;
	int8_t x559 = 58;
	int8_t x560 = INT8_MIN;
	static int32_t t138 = -199;

    t138 = (x557<=((x558>x559)+x560));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x563 = 1LLU;
	static int16_t x564 = INT16_MIN;
	int32_t t139 = -43378169;

    t139 = (x561<=((x562>x563)+x564));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x565 = 46;
	uint64_t x566 = UINT64_MAX;
	int16_t x567 = INT16_MAX;
	int16_t x568 = -1;
	static volatile int32_t t140 = 4;

    t140 = (x565<=((x566>x567)+x568));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = INT8_MAX;
	volatile int64_t x571 = 649093888LL;
	int64_t x572 = -8LL;
	volatile int32_t t141 = -6964256;

    t141 = (x569<=((x570>x571)+x572));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x573 = -325486;
	uint64_t x575 = 59207402382571840LLU;
	uint8_t x576 = UINT8_MAX;

    t142 = (x573<=((x574>x575)+x576));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x578 = INT16_MIN;
	static volatile uint32_t x579 = UINT32_MAX;
	int32_t t143 = 2;

    t143 = (x577<=((x578>x579)+x580));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x581 = INT16_MIN;
	volatile int32_t t144 = -1032;

    t144 = (x581<=((x582>x583)+x584));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = INT16_MIN;
	volatile int64_t x586 = INT64_MIN;
	uint8_t x587 = UINT8_MAX;
	int8_t x588 = INT8_MIN;
	static volatile int32_t t145 = 1518;

    t145 = (x585<=((x586>x587)+x588));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x589 = INT8_MIN;
	volatile int8_t x591 = -1;
	uint8_t x592 = 6U;
	volatile int32_t t146 = -13;

    t146 = (x589<=((x590>x591)+x592));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x593 = -448073275444LL;
	static uint8_t x594 = 54U;
	int16_t x596 = 5;
	int32_t t147 = -1244819;

    t147 = (x593<=((x594>x595)+x596));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x597 = -1;
	int16_t x598 = 58;
	int16_t x599 = INT16_MAX;
	uint32_t x600 = 140U;
	volatile int32_t t148 = -371;

    t148 = (x597<=((x598>x599)+x600));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x601 = -1;
	int8_t x602 = INT8_MIN;
	volatile uint32_t x603 = 6513U;
	uint32_t x604 = 200036U;

    t149 = (x601<=((x602>x603)+x604));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x609 = 3;
	int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MIN;
	int8_t x612 = -4;
	volatile int32_t t150 = -29621;

    t150 = (x609<=((x610>x611)+x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = INT8_MIN;
	volatile int32_t x615 = 1;
	int32_t x616 = 2305;
	int32_t t151 = 1;

    t151 = (x613<=((x614>x615)+x616));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x617 = 61822LL;
	int8_t x618 = INT8_MAX;
	uint64_t x619 = 11307894575825LLU;
	volatile int32_t t152 = -763;

    t152 = (x617<=((x618>x619)+x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MAX;
	static int16_t x623 = -1;
	uint32_t x624 = 137U;
	int32_t t153 = 0;

    t153 = (x621<=((x622>x623)+x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x626 = INT16_MIN;
	static int16_t x628 = -1;
	int32_t t154 = 127;

    t154 = (x625<=((x626>x627)+x628));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x631 = UINT32_MAX;
	volatile int32_t t155 = 512375633;

    t155 = (x629<=((x630>x631)+x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x633 = 1720917;
	static uint32_t x635 = 15631766U;

    t156 = (x633<=((x634>x635)+x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x637 = UINT16_MAX;
	volatile int16_t x638 = INT16_MIN;
	volatile int32_t t157 = 63676466;

    t157 = (x637<=((x638>x639)+x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x642 = INT16_MIN;
	static int32_t x643 = 30;
	int64_t x644 = -72495668018663615LL;
	volatile int32_t t158 = -75;

    t158 = (x641<=((x642>x643)+x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x645 = INT32_MAX;
	volatile uint8_t x647 = 2U;
	static uint64_t x648 = UINT64_MAX;
	int32_t t159 = 23529436;

    t159 = (x645<=((x646>x647)+x648));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x650 = 19;
	static volatile int32_t x651 = -1;
	volatile uint8_t x652 = 1U;
	volatile int32_t t160 = -1237878;

    t160 = (x649<=((x650>x651)+x652));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = 5773428630775981649LLU;
	static uint64_t x654 = UINT64_MAX;
	volatile uint32_t x655 = 14540105U;
	int8_t x656 = -1;
	volatile int32_t t161 = 13;

    t161 = (x653<=((x654>x655)+x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x657 = 6U;
	volatile uint16_t x658 = 140U;
	int8_t x659 = -52;
	int8_t x660 = INT8_MAX;
	int32_t t162 = -25;

    t162 = (x657<=((x658>x659)+x660));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x661 = 194522LLU;
	uint8_t x662 = UINT8_MAX;
	uint16_t x663 = UINT16_MAX;
	static volatile uint8_t x664 = 57U;
	volatile int32_t t163 = 1554156;

    t163 = (x661<=((x662>x663)+x664));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x672 = 1;
	volatile int32_t t164 = 93782;

    t164 = (x669<=((x670>x671)+x672));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x674 = -1;
	uint64_t x675 = UINT64_MAX;
	int64_t x676 = 1683LL;
	static int32_t t165 = -19397829;

    t165 = (x673<=((x674>x675)+x676));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x677 = 394;
	int8_t x679 = INT8_MIN;
	int32_t t166 = -113634445;

    t166 = (x677<=((x678>x679)+x680));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MIN;
	volatile int32_t t167 = 371;

    t167 = (x681<=((x682>x683)+x684));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x685 = INT32_MAX;
	uint32_t x686 = 35U;
	int8_t x687 = -1;
	int32_t t168 = -107;

    t168 = (x685<=((x686>x687)+x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = INT32_MAX;
	int32_t x690 = INT32_MIN;
	int32_t x691 = 3513728;
	static int32_t x692 = -1;
	static volatile int32_t t169 = 1;

    t169 = (x689<=((x690>x691)+x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x693 = 29363970U;
	int64_t x694 = INT64_MAX;
	int8_t x696 = -1;

    t170 = (x693<=((x694>x695)+x696));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MAX;
	int16_t x698 = 0;
	int32_t x699 = INT32_MIN;
	uint8_t x700 = UINT8_MAX;
	int32_t t171 = -4;

    t171 = (x697<=((x698>x699)+x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x701 = 3U;
	uint16_t x702 = 222U;
	volatile int8_t x703 = 0;
	volatile uint32_t x704 = UINT32_MAX;
	int32_t t172 = -1;

    t172 = (x701<=((x702>x703)+x704));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x705 = 345;
	uint8_t x706 = UINT8_MAX;
	int64_t x707 = 39LL;
	int32_t x708 = INT32_MIN;

    t173 = (x705<=((x706>x707)+x708));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x709 = 3;
	int64_t x710 = -1387386906LL;
	volatile uint64_t x711 = UINT64_MAX;
	static volatile int32_t t174 = -8;

    t174 = (x709<=((x710>x711)+x712));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x713 = 676;
	int8_t x714 = 43;
	int64_t x715 = -1753483921788742LL;
	volatile int32_t t175 = 552068;

    t175 = (x713<=((x714>x715)+x716));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x717 = -1;
	static uint32_t x718 = UINT32_MAX;
	int16_t x719 = -1;
	static volatile int16_t x720 = INT16_MIN;
	static int32_t t176 = -6889;

    t176 = (x717<=((x718>x719)+x720));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x721 = UINT8_MAX;
	int16_t x722 = -4;

    t177 = (x721<=((x722>x723)+x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x725 = 19258489733235LL;
	int16_t x727 = -1;
	static int32_t t178 = -66967573;

    t178 = (x725<=((x726>x727)+x728));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x729 = INT64_MAX;
	int32_t x732 = INT32_MIN;
	volatile int32_t t179 = 1786;

    t179 = (x729<=((x730>x731)+x732));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = -1;
	int8_t x736 = INT8_MIN;

    t180 = (x733<=((x734>x735)+x736));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = -1;
	uint32_t x739 = 3496U;
	int16_t x740 = 8420;
	volatile int32_t t181 = 283886564;

    t181 = (x737<=((x738>x739)+x740));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x741 = 20U;
	volatile int32_t x742 = INT32_MIN;
	int16_t x743 = INT16_MAX;
	static uint16_t x744 = 3U;
	volatile int32_t t182 = 533957773;

    t182 = (x741<=((x742>x743)+x744));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x746 = INT64_MIN;
	int32_t x747 = INT32_MAX;
	volatile int32_t t183 = 500;

    t183 = (x745<=((x746>x747)+x748));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x749 = INT32_MIN;
	static uint16_t x751 = 159U;
	volatile int32_t t184 = 105357917;

    t184 = (x749<=((x750>x751)+x752));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;
	int32_t t185 = -3673178;

    t185 = (x753<=((x754>x755)+x756));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x757 = INT32_MIN;
	int64_t x758 = -1089996034823208LL;
	uint8_t x759 = 15U;
	int32_t t186 = -59155293;

    t186 = (x757<=((x758>x759)+x760));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x761 = UINT64_MAX;
	static int32_t x762 = INT32_MAX;
	uint16_t x763 = 14U;

    t187 = (x761<=((x762>x763)+x764));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x765 = 43U;
	static int16_t x766 = 1;
	uint64_t x767 = 644446377586118LLU;
	static int64_t x768 = INT64_MIN;

    t188 = (x765<=((x766>x767)+x768));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x770 = INT32_MIN;
	volatile uint16_t x771 = 11436U;
	int32_t t189 = -26694;

    t189 = (x769<=((x770>x771)+x772));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	int8_t x775 = INT8_MIN;
	int16_t x776 = -1;
	static int32_t t190 = -99227201;

    t190 = (x773<=((x774>x775)+x776));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x777 = INT64_MIN;
	uint64_t x778 = 171342424673LLU;
	int32_t t191 = 12841498;

    t191 = (x777<=((x778>x779)+x780));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x782 = 57U;
	volatile int64_t x783 = INT64_MIN;
	volatile uint8_t x784 = 7U;

    t192 = (x781<=((x782>x783)+x784));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x785 = INT8_MIN;
	volatile int16_t x787 = 1;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t193 = -77645;

    t193 = (x785<=((x786>x787)+x788));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x789 = 8;
	int8_t x791 = -17;
	uint8_t x792 = 6U;
	int32_t t194 = -91;

    t194 = (x789<=((x790>x791)+x792));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x794 = 1669U;
	uint16_t x795 = 1U;
	int32_t x796 = 11;
	int32_t t195 = -3868;

    t195 = (x793<=((x794>x795)+x796));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x797 = INT32_MAX;
	static int16_t x798 = 57;
	int16_t x799 = INT16_MIN;
	static int64_t x800 = INT64_MIN;
	int32_t t196 = 116;

    t196 = (x797<=((x798>x799)+x800));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x802 = INT32_MAX;
	uint8_t x803 = 59U;
	int64_t x804 = -502642731LL;
	static volatile int32_t t197 = -146;

    t197 = (x801<=((x802>x803)+x804));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x805 = 20;
	int64_t x807 = INT64_MAX;
	int32_t x808 = -1;

    t198 = (x805<=((x806>x807)+x808));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x809 = 39;
	static int8_t x810 = INT8_MIN;
	int32_t x811 = 18346;
	int16_t x812 = -66;
	int32_t t199 = 1;

    t199 = (x809<=((x810>x811)+x812));

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

