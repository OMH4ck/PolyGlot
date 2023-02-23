
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

static uint16_t x1 = 0U;
static uint64_t x5 = UINT64_MAX;
uint32_t x9 = 169131U;
uint64_t x11 = 11348169969LLU;
int32_t x16 = INT32_MAX;
uint64_t x24 = UINT64_MAX;
uint8_t x27 = 123U;
static int64_t t5 = -221LL;
volatile int32_t t6 = 118578986;
int16_t x43 = -10;
uint64_t t8 = 1553404998714926103LLU;
volatile int32_t t9 = -18186;
int16_t x50 = -918;
int32_t x54 = -1;
int16_t x61 = INT16_MIN;
int64_t t13 = -3546586776294340LL;
uint8_t x86 = UINT8_MAX;
uint32_t x87 = 256366639U;
int64_t x92 = INT64_MAX;
int32_t x95 = 23607;
uint16_t x98 = UINT16_MAX;
static uint16_t x110 = 1U;
uint32_t t24 = 1345466866U;
volatile uint64_t t26 = 258819LLU;
int16_t x129 = INT16_MIN;
int64_t x132 = INT64_MIN;
uint32_t x140 = 6U;
volatile uint8_t x144 = 1U;
int8_t x152 = 5;
int64_t t32 = 4630247479LL;
volatile uint8_t x154 = 1U;
int64_t x156 = INT64_MIN;
int64_t t33 = -5619760646LL;
static int8_t x158 = INT8_MIN;
static volatile uint8_t x166 = 32U;
static volatile int32_t t36 = -25;
int16_t x171 = INT16_MIN;
int16_t x172 = INT16_MIN;
int32_t x173 = INT32_MAX;
int16_t x179 = 8;
int64_t x181 = INT64_MIN;
volatile int64_t t40 = 1LL;
static uint16_t x188 = UINT16_MAX;
int32_t x194 = 0;
static int32_t x195 = INT32_MIN;
uint16_t x197 = 437U;
volatile uint32_t t45 = 12U;
static volatile int64_t x216 = 3719241872LL;
int64_t x223 = INT64_MIN;
volatile int32_t x231 = 37248593;
volatile int64_t x232 = 353353715326LL;
static uint16_t x240 = UINT16_MAX;
volatile int64_t t54 = 3LL;
volatile uint16_t x241 = UINT16_MAX;
volatile int64_t x243 = INT64_MIN;
static int16_t x248 = -1;
volatile int64_t t56 = 445675564758LL;
static volatile uint8_t x249 = 16U;
int16_t x250 = -490;
static volatile uint8_t x251 = 1U;
static uint32_t x254 = 17498198U;
uint64_t x267 = 101565032389240773LLU;
int32_t x268 = 11366223;
uint64_t t61 = 119LLU;
int32_t x269 = INT32_MIN;
volatile int8_t x270 = INT8_MIN;
uint64_t x271 = 356608222911556LLU;
uint64_t t62 = 60964486945LLU;
uint8_t x273 = 59U;
int64_t x278 = -94LL;
static volatile uint8_t x283 = 82U;
static int32_t x287 = INT32_MIN;
static int64_t x290 = INT64_MIN;
int8_t x300 = 2;
static int64_t x302 = INT64_MIN;
static uint64_t x303 = UINT64_MAX;
uint64_t t70 = 263068556543358557LLU;
int8_t x305 = -1;
int16_t x306 = INT16_MIN;
int8_t x318 = -1;
uint16_t x319 = UINT16_MAX;
uint64_t t74 = 1403LLU;
int8_t x322 = INT8_MIN;
uint16_t x336 = 1U;
static volatile uint16_t x337 = UINT16_MAX;
static int16_t x340 = INT16_MIN;
uint8_t x345 = UINT8_MAX;
uint8_t x348 = 93U;
volatile int32_t x356 = INT32_MAX;
int32_t t83 = -1903241;
int16_t x362 = -1;
int16_t x363 = INT16_MIN;
int64_t x366 = INT64_MIN;
static int16_t x367 = 3063;
int32_t x370 = 119803;
static int64_t x373 = 2640966LL;
int64_t t89 = 1357349748483508273LL;
int64_t x400 = -35151964370480LL;
volatile int64_t t93 = 6LL;
uint16_t x410 = 199U;
static uint64_t x415 = 107054549870883LLU;
static int16_t x418 = -3;
int8_t x426 = INT8_MIN;
volatile uint32_t x430 = 66787U;
volatile int32_t x431 = -14092961;
volatile uint32_t t98 = 350U;
int32_t x433 = INT32_MAX;
int8_t x436 = INT8_MIN;
volatile int32_t x437 = INT32_MAX;
int8_t x439 = INT8_MIN;
int8_t x441 = 17;
int32_t x442 = -29901;
int16_t x450 = INT16_MIN;
int16_t x451 = INT16_MIN;
int64_t t103 = 8412799916729162LL;
static int64_t x465 = -12957374608LL;
int32_t x467 = 381385473;
uint64_t x471 = UINT64_MAX;
volatile int64_t x479 = INT64_MIN;
static int32_t x487 = INT32_MAX;
int32_t x495 = INT32_MIN;
uint32_t t112 = 31347474U;
int8_t x510 = INT8_MIN;
uint32_t x514 = 322U;
static int64_t x515 = -179LL;
uint32_t x516 = 45U;
uint32_t x526 = 2565238U;
static int64_t x527 = INT64_MIN;
static int32_t x528 = INT32_MIN;
volatile int64_t t120 = -118190809705LL;
volatile int32_t x529 = -1;
int64_t x532 = INT64_MAX;
volatile uint32_t x537 = 237751U;
uint8_t x538 = 3U;
static volatile uint16_t x539 = 4642U;
uint8_t x550 = 13U;
volatile int64_t x562 = 26457449050LL;
volatile int32_t t126 = 35;
uint16_t x574 = UINT16_MAX;
uint64_t x575 = 862287440LLU;
volatile uint64_t t129 = 6326593LLU;
static int64_t x593 = INT64_MAX;
uint32_t x601 = 38U;
volatile int64_t x615 = INT64_MIN;
int16_t x626 = INT16_MIN;
int32_t t138 = 6;
static int8_t x634 = 0;
int8_t x640 = -1;
volatile uint64_t t141 = 6269LLU;
static volatile uint32_t x644 = UINT32_MAX;
static int8_t x645 = INT8_MAX;
volatile uint64_t t144 = 286061013922892464LLU;
volatile int64_t x655 = -1LL;
uint8_t x662 = UINT8_MAX;
static int32_t x672 = INT32_MIN;
static int64_t x676 = INT64_MAX;
volatile int64_t t149 = 7861022699LL;
volatile int64_t t150 = -291276274547154589LL;
static uint8_t x681 = 14U;
int8_t x682 = 0;
int64_t x685 = 142842LL;
static int64_t x690 = -1LL;
int32_t x692 = -1;
int16_t x695 = -1164;
int64_t t154 = -85226195LL;
int32_t x709 = INT32_MAX;
int32_t x714 = INT32_MIN;
uint64_t x716 = 24987006625576LLU;
uint64_t t156 = 1938LLU;
volatile uint8_t x725 = 60U;
int64_t t157 = -3882180947277486LL;
int64_t x733 = INT64_MIN;
volatile int32_t x740 = INT32_MIN;
static volatile int32_t x741 = -318;
volatile uint16_t x743 = UINT16_MAX;
int32_t t161 = -1;
uint8_t x757 = 0U;
uint16_t x774 = 0U;
int64_t t168 = -1361429666057888LL;
int32_t x777 = INT32_MIN;
volatile uint8_t x782 = 103U;
int8_t x793 = 14;
volatile uint8_t x794 = UINT8_MAX;
int8_t x798 = INT8_MAX;
int64_t x803 = 482621058583912021LL;
int16_t x805 = -5;
static uint32_t x808 = UINT32_MAX;
int32_t x810 = -1;
uint64_t x811 = 119192417LLU;
uint8_t x812 = 30U;
uint8_t x815 = UINT8_MAX;
uint64_t t177 = 3LLU;
volatile uint64_t t178 = 130641534338396846LLU;
uint16_t x822 = 161U;
static int16_t x824 = -1;
int32_t t180 = -2110451;
volatile uint32_t x829 = UINT32_MAX;
static uint8_t x832 = 17U;
volatile int64_t t186 = 12219250LL;
uint32_t x854 = UINT32_MAX;
int32_t x857 = -1;
volatile int16_t x859 = -1;
int64_t x861 = INT64_MIN;
uint64_t x871 = UINT64_MAX;
uint64_t x878 = 890019007968LLU;
static volatile uint16_t x889 = UINT16_MAX;
static volatile int16_t x891 = -3;
int32_t x893 = INT32_MIN;
int8_t x898 = 6;
uint32_t x899 = UINT32_MAX;
volatile uint32_t t196 = 190290U;
volatile uint32_t x907 = UINT32_MAX;


void f0(void) {
    	uint8_t x2 = 124U;
	static uint64_t x3 = 20526315466925LLU;
	static uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 1553189352138015463LLU;

    t0 = (x1&((x2+x3)&x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	volatile int16_t x7 = -1;
	volatile int32_t x8 = 1;
	volatile uint64_t t1 = 2LLU;

    t1 = (x5&((x6+x7)&x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MIN;
	uint64_t t2 = 701938459195LLU;

    t2 = (x9&((x10+x11)&x12));

    if (t2 != 5248LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = 2736U;
	int64_t t3 = -176LL;

    t3 = (x13&((x14+x15)&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MAX;
	int64_t x22 = -1LL;
	int32_t x23 = INT32_MIN;
	volatile uint64_t t4 = 29LLU;

    t4 = (x21&((x22+x23)&x24));

    if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	int32_t x28 = -1;

    t5 = (x25&((x26+x27)&x28));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	int32_t x30 = -2;
	int16_t x31 = 1965;
	int8_t x32 = -1;

    t6 = (x29&((x30+x31)&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	static volatile int32_t x34 = 749437201;
	static int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MAX;
	int64_t t7 = 719662180619125401LL;

    t7 = (x33&((x34+x35)&x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x41 = 442112810LLU;
	int64_t x42 = 231LL;
	uint16_t x44 = 25U;

    t8 = (x41&((x42+x43)&x44));

    if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	int8_t x46 = -5;
	volatile int32_t x47 = -1;
	int8_t x48 = -3;

    t9 = (x45&((x46+x47)&x48));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MAX;
	int32_t x51 = INT32_MAX;
	int64_t x52 = -14446061089581LL;
	static volatile int64_t t10 = 157LL;

    t10 = (x49&((x50+x51)&x52));

    if (t10 != 61410369LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x53 = -11;
	int8_t x55 = -26;
	static uint8_t x56 = UINT8_MAX;
	static int32_t t11 = -3015;

    t11 = (x53&((x54+x55)&x56));

    if (t11 != 229) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x62 = 1758LLU;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = 167LLU;
	static volatile uint64_t t12 = 10LLU;

    t12 = (x61&((x62+x63)&x64));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MIN;

    t13 = (x65&((x66+x67)&x68));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MIN;
	static int8_t x74 = -30;
	uint64_t x75 = 1383470135249186LLU;
	static int32_t x76 = INT32_MIN;
	volatile uint64_t t14 = 698204566307LLU;

    t14 = (x73&((x74+x75)&x76));

    if (t14 != 1383469095583744LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x77 = INT8_MIN;
	int64_t x78 = -285LL;
	uint16_t x79 = UINT16_MAX;
	volatile int8_t x80 = 15;
	volatile int64_t t15 = 706421171815LL;

    t15 = (x77&((x78+x79)&x80));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x81 = 69U;
	volatile uint8_t x82 = 24U;
	int64_t x83 = 14LL;
	volatile int8_t x84 = INT8_MIN;
	int64_t t16 = 180269679532LL;

    t16 = (x81&((x82+x83)&x84));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	static int64_t x88 = INT64_MIN;
	static int64_t t17 = 7635LL;

    t17 = (x85&((x86+x87)&x88));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x89 = 3034976304158306376LLU;
	int32_t x90 = -1;
	uint64_t x91 = 1435726LLU;
	static uint64_t t18 = 17715059653LLU;

    t18 = (x89&((x90+x91)&x92));

    if (t18 != 1400904LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = 42095930924139LL;
	static int16_t x96 = INT16_MIN;
	int64_t t19 = -10LL;

    t19 = (x93&((x94+x95)&x96));

    if (t19 != 42094974468096LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = 0LLU;
	volatile int32_t x99 = 273;
	static int8_t x100 = INT8_MIN;
	static volatile uint64_t t20 = 5204860LLU;

    t20 = (x97&((x98+x99)&x100));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MAX;
	static volatile int8_t x102 = 61;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	static int64_t t21 = -868923LL;

    t21 = (x101&((x102+x103)&x104));

    if (t21 != 61LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = INT64_MAX;
	static volatile int8_t x106 = -1;
	int16_t x107 = 28;
	int32_t x108 = -1;
	volatile int64_t t22 = 0LL;

    t22 = (x105&((x106+x107)&x108));

    if (t22 != 27LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = INT8_MAX;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;
	int64_t t23 = -102011116139LL;

    t23 = (x109&((x110+x111)&x112));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = 313;
	uint16_t x114 = UINT16_MAX;
	volatile int16_t x115 = 113;
	static volatile uint32_t x116 = 116544403U;

    t24 = (x113&((x114+x115)&x116));

    if (t24 != 16U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	static int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	int64_t x120 = -1LL;
	int64_t t25 = -463517958199LL;

    t25 = (x117&((x118+x119)&x120));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = INT64_MIN;
	uint8_t x122 = UINT8_MAX;
	volatile uint16_t x123 = UINT16_MAX;
	uint64_t x124 = 1503841LLU;

    t26 = (x121&((x122+x123)&x124));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -11;
	int64_t x126 = 119LL;
	uint32_t x127 = UINT32_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int64_t t27 = 703784404188LL;

    t27 = (x125&((x126+x127)&x128));

    if (t27 != 116LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x130 = 3933666770LL;
	static int16_t x131 = INT16_MIN;
	volatile int64_t t28 = 1657LL;

    t28 = (x129&((x130+x131)&x132));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x133 = INT32_MAX;
	int16_t x134 = INT16_MIN;
	static volatile uint64_t x135 = 583LLU;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t29 = 0LLU;

    t29 = (x133&((x134+x135)&x136));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -3;
	volatile uint32_t t30 = 1829817181U;

    t30 = (x137&((x138+x139)&x140));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x141 = 2968195LLU;
	volatile int64_t x142 = -15852408788418LL;
	volatile int8_t x143 = -4;
	uint64_t t31 = 33157417LLU;

    t31 = (x141&((x142+x143)&x144));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x149 = 2U;
	int64_t x150 = INT64_MAX;
	volatile int32_t x151 = INT32_MIN;

    t32 = (x149&((x150+x151)&x152));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x153 = 325989295;
	uint16_t x155 = UINT16_MAX;

    t33 = (x153&((x154+x155)&x156));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1LL;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = -1;
	static volatile int64_t t34 = 5386444980297354LL;

    t34 = (x157&((x158+x159)&x160));

    if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x161 = -1;
	static uint64_t x162 = 269442626916LLU;
	static int64_t x163 = INT64_MAX;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t35 = 5081488369476337187LLU;

    t35 = (x161&((x162+x163)&x164));

    if (t35 != 9223372306297389056LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x165 = -55;
	uint16_t x167 = 24U;
	int16_t x168 = INT16_MAX;

    t36 = (x165&((x166+x167)&x168));

    if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x169 = -21251423;
	volatile int16_t x170 = -1;
	int32_t t37 = 26;

    t37 = (x169&((x170+x171)&x172));

    if (t37 != -21299200) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x174 = -1;
	static int8_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	int32_t t38 = -25718;

    t38 = (x173&((x174+x175)&x176));

    if (t38 != 2147483520) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	volatile int8_t x180 = 3;
	int32_t t39 = -7;

    t39 = (x177&((x178+x179)&x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x182 = INT16_MAX;
	uint32_t x183 = UINT32_MAX;
	uint16_t x184 = UINT16_MAX;

    t40 = (x181&((x182+x183)&x184));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x185 = 53;
	volatile int8_t x186 = 1;
	uint8_t x187 = 27U;
	static int32_t t41 = -536790;

    t41 = (x185&((x186+x187)&x188));

    if (t41 != 20) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = -141959743566449448LL;
	static int8_t x190 = INT8_MIN;
	volatile int8_t x191 = -1;
	uint64_t x192 = 1925483647827LLU;
	static volatile uint64_t t42 = 2650276216152983LLU;

    t42 = (x189&((x190+x191)&x192));

    if (t42 != 275016372304LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	uint32_t x196 = 1151958U;
	volatile uint32_t t43 = 3U;

    t43 = (x193&((x194+x195)&x196));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x198 = 48U;
	volatile int8_t x199 = -6;
	int32_t x200 = -1;
	volatile int32_t t44 = -249357627;

    t44 = (x197&((x198+x199)&x200));

    if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MAX;
	int8_t x204 = -1;

    t45 = (x201&((x202+x203)&x204));

    if (t45 != 2147450879U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x205 = INT64_MIN;
	int16_t x206 = 1;
	volatile int32_t x207 = 217892;
	int32_t x208 = INT32_MIN;
	volatile int64_t t46 = 322663LL;

    t46 = (x205&((x206+x207)&x208));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	static volatile int8_t x210 = INT8_MAX;
	int64_t x211 = -234368101984LL;
	uint32_t x212 = UINT32_MAX;
	int64_t t47 = -7832LL;

    t47 = (x209&((x210+x211)&x212));

    if (t47 != 1855099423LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = INT8_MIN;
	volatile int64_t x214 = -1LL;
	static int64_t x215 = -1LL;
	volatile int64_t t48 = 3409277LL;

    t48 = (x213&((x214+x215)&x216));

    if (t48 != 3719241856LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = INT64_MIN;
	int32_t x218 = 6;
	int32_t x219 = 295;
	static uint64_t x220 = 13680995LLU;
	static volatile uint64_t t49 = 707049910988238994LLU;

    t49 = (x217&((x218+x219)&x220));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = -1;
	uint16_t x222 = 1725U;
	int8_t x224 = -31;
	volatile int64_t t50 = -128491338899823972LL;

    t50 = (x221&((x222+x223)&x224));

    if (t50 != -9223372036854774111LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = 11430931LLU;
	int32_t x226 = INT32_MIN;
	static int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MAX;
	uint64_t t51 = 243489233LLU;

    t51 = (x225&((x226+x227)&x228));

    if (t51 != 27667LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = INT16_MAX;
	volatile int64_t x230 = -1LL;
	volatile int64_t t52 = 356261340730630801LL;

    t52 = (x229&((x230+x231)&x232));

    if (t52 != 20048LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x233 = 1421U;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = 512U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t53 = -271284988544LL;

    t53 = (x233&((x234+x235)&x236));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = INT64_MIN;
	static int8_t x238 = -1;
	static volatile uint32_t x239 = UINT32_MAX;

    t54 = (x237&((x238+x239)&x240));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x242 = 0;
	uint16_t x244 = 23U;
	int64_t t55 = -1064849644626319LL;

    t55 = (x241&((x242+x243)&x244));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x245 = 10682U;
	int64_t x246 = -44247LL;
	static uint32_t x247 = UINT32_MAX;

    t56 = (x245&((x246+x247)&x248));

    if (t56 != 296LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x252 = UINT16_MAX;
	int32_t t57 = -28948526;

    t57 = (x249&((x250+x251)&x252));

    if (t57 != 16) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x253 = INT32_MIN;
	int8_t x255 = -1;
	int32_t x256 = -38332928;
	uint32_t t58 = 55U;

    t58 = (x253&((x254+x255)&x256));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x257 = 21U;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 38U;
	static int64_t x260 = INT64_MAX;
	int64_t t59 = -3137524691785LL;

    t59 = (x257&((x258+x259)&x260));

    if (t59 != 4LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = 449742;
	int8_t x262 = -1;
	volatile int64_t x263 = -1LL;
	uint16_t x264 = 277U;
	int64_t t60 = 113384605LL;

    t60 = (x261&((x262+x263)&x264));

    if (t60 != 4LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;

    t61 = (x265&((x266+x267)&x268));

    if (t61 != 2713344LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x272 = -1;

    t62 = (x269&((x270+x271)&x272));

    if (t62 != 356606839619584LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x274 = 0LLU;
	int64_t x275 = -937797LL;
	int32_t x276 = 1972211;
	uint64_t t63 = 4675903955LLU;

    t63 = (x273&((x274+x275)&x276));

    if (t63 != 51LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x277 = 23452214022052LLU;
	static volatile int16_t x279 = INT16_MIN;
	int32_t x280 = -1;
	uint64_t t64 = 420430391196LLU;

    t64 = (x277&((x278+x279)&x280));

    if (t64 != 23452213989280LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x281 = 29U;
	static int32_t x282 = -1;
	int64_t x284 = INT64_MIN;
	int64_t t65 = -4019LL;

    t65 = (x281&((x282+x283)&x284));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x285 = INT64_MIN;
	int8_t x286 = 26;
	volatile int16_t x288 = -1;
	volatile int64_t t66 = INT64_MIN;

    t66 = (x285&((x286+x287)&x288));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x289 = INT8_MAX;
	volatile uint32_t x291 = 2736U;
	int16_t x292 = INT16_MIN;
	int64_t t67 = 1634559621537375592LL;

    t67 = (x289&((x290+x291)&x292));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x293 = -3;
	uint8_t x294 = 1U;
	uint64_t x295 = 14064LLU;
	uint16_t x296 = 6U;
	uint64_t t68 = 29454532LLU;

    t68 = (x293&((x294+x295)&x296));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = 2;
	volatile int64_t t69 = -896574780343947LL;

    t69 = (x297&((x298+x299)&x300));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = -1LL;
	static int32_t x304 = 0;

    t70 = (x301&((x302+x303)&x304));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x307 = 13U;
	int16_t x308 = INT16_MAX;
	volatile int32_t t71 = -173229;

    t71 = (x305&((x306+x307)&x308));

    if (t71 != 13) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x309 = INT8_MAX;
	volatile int16_t x310 = -1;
	int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	int32_t t72 = -3674263;

    t72 = (x309&((x310+x311)&x312));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t73 = 19430333218240LLU;

    t73 = (x313&((x314+x315)&x316));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x317 = 734046186LLU;
	int32_t x320 = INT32_MAX;

    t74 = (x317&((x318+x319)&x320));

    if (t74 != 42986LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile uint64_t t75 = 400850200954519948LLU;

    t75 = (x321&((x322+x323)&x324));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = INT16_MAX;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 1U;
	int32_t x328 = 0;
	static int32_t t76 = -645654;

    t76 = (x325&((x326+x327)&x328));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	static volatile int8_t x331 = INT8_MIN;
	static int16_t x332 = INT16_MIN;
	int32_t t77 = -28002;

    t77 = (x329&((x330+x331)&x332));

    if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = INT32_MIN;
	static int16_t x334 = INT16_MIN;
	int64_t x335 = -1LL;
	static volatile int64_t t78 = -98605226548LL;

    t78 = (x333&((x334+x335)&x336));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x338 = 0LLU;
	int32_t x339 = -1857;
	volatile uint64_t t79 = 422479993755296129LLU;

    t79 = (x337&((x338+x339)&x340));

    if (t79 != 32768LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x341 = INT32_MAX;
	volatile int64_t x342 = 81623LL;
	int8_t x343 = 11;
	int16_t x344 = -1;
	static int64_t t80 = -7LL;

    t80 = (x341&((x342+x343)&x344));

    if (t80 != 81634LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x346 = -1;
	volatile uint16_t x347 = 17U;
	int32_t t81 = -182027128;

    t81 = (x345&((x346+x347)&x348));

    if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile int8_t x350 = INT8_MIN;
	int32_t x351 = 6;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t82 = 112532921303LLU;

    t82 = (x349&((x350+x351)&x352));

    if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x353 = 52983848;
	int32_t x354 = 8862640;
	volatile uint16_t x355 = 146U;

    t83 = (x353&((x354+x355)&x356));

    if (t83 != 14336) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x357 = INT8_MIN;
	volatile int64_t x358 = INT64_MIN;
	uint16_t x359 = 16392U;
	static uint8_t x360 = UINT8_MAX;
	volatile int64_t t84 = 4475323132407232LL;

    t84 = (x357&((x358+x359)&x360));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = -667249800684144LL;
	volatile int16_t x364 = INT16_MAX;
	int64_t t85 = -43258163402089703LL;

    t85 = (x361&((x362+x363)&x364));

    if (t85 != 23952LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x365 = 36748U;
	volatile int8_t x368 = INT8_MAX;
	volatile int64_t t86 = 0LL;

    t86 = (x365&((x366+x367)&x368));

    if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile int32_t x371 = -1;
	volatile int16_t x372 = 8100;
	volatile uint32_t t87 = 15508U;

    t87 = (x369&((x370+x371)&x372));

    if (t87 != 5024U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x374 = 0LL;
	uint64_t x375 = UINT64_MAX;
	volatile int8_t x376 = -1;
	uint64_t t88 = 108LLU;

    t88 = (x373&((x374+x375)&x376));

    if (t88 != 2640966LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MIN;
	static int64_t x386 = 67711049519481346LL;
	volatile int32_t x387 = -1;
	int64_t x388 = INT64_MIN;

    t89 = (x385&((x386+x387)&x388));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x389 = UINT64_MAX;
	static int16_t x390 = -1;
	int64_t x391 = -392342745LL;
	int8_t x392 = 1;
	volatile uint64_t t90 = 26438676387077997LLU;

    t90 = (x389&((x390+x391)&x392));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = 69LL;
	volatile int16_t x394 = -1;
	volatile int64_t x395 = -1LL;
	int32_t x396 = -76824;
	static int64_t t91 = 97705689LL;

    t91 = (x393&((x394+x395)&x396));

    if (t91 != 64LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x397 = UINT32_MAX;
	int32_t x398 = 6515299;
	volatile int32_t x399 = -1073;
	int64_t t92 = 4122982398522753208LL;

    t92 = (x397&((x398+x399)&x400));

    if (t92 != 2228240LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x401 = 1131U;
	int8_t x402 = 1;
	int64_t x403 = -1LL;
	uint8_t x404 = 2U;

    t93 = (x401&((x402+x403)&x404));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x409 = -1LL;
	int8_t x411 = INT8_MAX;
	int16_t x412 = -1;
	int64_t t94 = -118LL;

    t94 = (x409&((x410+x411)&x412));

    if (t94 != 326LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x413 = UINT32_MAX;
	uint16_t x414 = 23113U;
	int16_t x416 = INT16_MIN;
	uint64_t t95 = 378887411123LLU;

    t95 = (x413&((x414+x415)&x416));

    if (t95 != 2490040320LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x417 = -1LL;
	uint16_t x419 = 1549U;
	int8_t x420 = INT8_MIN;
	volatile int64_t t96 = -1203LL;

    t96 = (x417&((x418+x419)&x420));

    if (t96 != 1536LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = INT8_MAX;
	uint16_t x427 = 382U;
	uint64_t x428 = UINT64_MAX;
	uint64_t t97 = 47176078LLU;

    t97 = (x425&((x426+x427)&x428));

    if (t97 != 126LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x429 = 98U;
	int8_t x432 = -1;

    t98 = (x429&((x430+x431)&x432));

    if (t98 != 66U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x434 = 6U;
	int16_t x435 = INT16_MIN;
	int32_t t99 = 24;

    t99 = (x433&((x434+x435)&x436));

    if (t99 != 2147450880) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x438 = -1;
	volatile uint32_t x440 = 2049899U;
	uint32_t t100 = 2U;

    t100 = (x437&((x438+x439)&x440));

    if (t100 != 2049899U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x443 = UINT16_MAX;
	volatile uint32_t x444 = 201628U;
	uint32_t t101 = 1U;

    t101 = (x441&((x442+x443)&x444));

    if (t101 != 16U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MAX;
	static volatile int8_t x447 = INT8_MIN;
	volatile uint64_t x448 = 188307LLU;
	uint64_t t102 = 46690520188089096LLU;

    t102 = (x445&((x446+x447)&x448));

    if (t102 != 19LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x449 = INT64_MIN;
	static uint32_t x452 = 476067045U;

    t103 = (x449&((x450+x451)&x452));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x457 = -1;
	static volatile uint8_t x458 = UINT8_MAX;
	static int16_t x459 = 0;
	int8_t x460 = -1;
	volatile int32_t t104 = -152112714;

    t104 = (x457&((x458+x459)&x460));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x461 = INT64_MAX;
	uint16_t x462 = 32U;
	int8_t x463 = INT8_MAX;
	volatile int32_t x464 = INT32_MIN;
	int64_t t105 = -2768906065880750532LL;

    t105 = (x461&((x462+x463)&x464));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x466 = 0U;
	uint16_t x468 = UINT16_MAX;
	volatile int64_t t106 = 2541132893292LL;

    t106 = (x465&((x466+x467)&x468));

    if (t106 != 8960LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x469 = INT8_MAX;
	int64_t x470 = INT64_MIN;
	static uint64_t x472 = UINT64_MAX;
	volatile uint64_t t107 = 9505935LLU;

    t107 = (x469&((x470+x471)&x472));

    if (t107 != 127LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x477 = 13U;
	static uint64_t x478 = 20604LLU;
	int32_t x480 = INT32_MIN;
	static volatile uint64_t t108 = 42242798128LLU;

    t108 = (x477&((x478+x479)&x480));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = INT64_MAX;
	int64_t x482 = -1LL;
	uint64_t x483 = 8049677LLU;
	int32_t x484 = INT32_MIN;
	volatile uint64_t t109 = 1495611098LLU;

    t109 = (x481&((x482+x483)&x484));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x485 = INT16_MIN;
	int16_t x486 = -222;
	int8_t x488 = INT8_MAX;
	int32_t t110 = 16896074;

    t110 = (x485&((x486+x487)&x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x489 = 30U;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MAX;
	uint8_t x492 = 2U;
	uint32_t t111 = 7288U;

    t111 = (x489&((x490+x491)&x492));

    if (t111 != 2U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x493 = 46;
	uint32_t x494 = 429779U;
	int16_t x496 = INT16_MAX;

    t112 = (x493&((x494+x495)&x496));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x497 = 391LLU;
	static volatile uint8_t x498 = 2U;
	int64_t x499 = 53379402023LL;
	volatile uint8_t x500 = UINT8_MAX;
	static uint64_t t113 = 26668083LLU;

    t113 = (x497&((x498+x499)&x500));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x501 = 10529249U;
	int64_t x502 = 5LL;
	int8_t x503 = -6;
	uint32_t x504 = 875691U;
	volatile int64_t t114 = -4395827699130495LL;

    t114 = (x501&((x502+x503)&x504));

    if (t114 != 2209LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x505 = 26423U;
	int32_t x506 = 29;
	uint8_t x507 = 100U;
	static int8_t x508 = -1;
	uint32_t t115 = 1U;

    t115 = (x505&((x506+x507)&x508));

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x509 = INT8_MAX;
	static uint64_t x511 = 462539LLU;
	volatile int8_t x512 = INT8_MIN;
	uint64_t t116 = 119112209LLU;

    t116 = (x509&((x510+x511)&x512));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x513 = UINT32_MAX;
	int64_t t117 = -268994675739947LL;

    t117 = (x513&((x514+x515)&x516));

    if (t117 != 13LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x517 = 0U;
	int8_t x518 = INT8_MAX;
	static int64_t x519 = 579045LL;
	volatile int64_t x520 = INT64_MIN;
	static volatile int64_t t118 = 39LL;

    t118 = (x517&((x518+x519)&x520));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 96792817U;
	static uint32_t x523 = 1U;
	int16_t x524 = 12;
	volatile uint32_t t119 = 297940396U;

    t119 = (x521&((x522+x523)&x524));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x525 = INT32_MAX;

    t120 = (x525&((x526+x527)&x528));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x530 = 12712982;
	volatile uint16_t x531 = UINT16_MAX;
	static int64_t t121 = 2115061570779107299LL;

    t121 = (x529&((x530+x531)&x532));

    if (t121 != 12778517LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = -1;
	int16_t x535 = 6;
	static uint32_t x536 = 16U;
	uint32_t t122 = 83802U;

    t122 = (x533&((x534+x535)&x536));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x540 = UINT16_MAX;
	static volatile uint32_t t123 = 10U;

    t123 = (x537&((x538+x539)&x540));

    if (t123 != 37U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x549 = INT16_MIN;
	uint8_t x551 = 55U;
	int32_t x552 = -1;
	volatile int32_t t124 = -1;

    t124 = (x549&((x550+x551)&x552));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x561 = 7U;
	static int16_t x563 = INT16_MAX;
	static int8_t x564 = INT8_MIN;
	int64_t t125 = 250822LL;

    t125 = (x561&((x562+x563)&x564));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = INT16_MIN;
	volatile uint8_t x566 = UINT8_MAX;
	int32_t x567 = INT32_MIN;
	static uint16_t x568 = UINT16_MAX;

    t126 = (x565&((x566+x567)&x568));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x573 = -36;
	uint32_t x576 = 105159U;
	volatile uint64_t t127 = 257LLU;

    t127 = (x573&((x574+x575)&x576));

    if (t127 != 4676LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x577 = INT16_MIN;
	int16_t x578 = -1;
	static int16_t x579 = INT16_MAX;
	uint64_t x580 = 156LLU;
	volatile uint64_t t128 = 16568871839065LLU;

    t128 = (x577&((x578+x579)&x580));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x581 = -24;
	int32_t x582 = 497891104;
	static uint64_t x583 = 2408504299295995607LLU;
	int32_t x584 = INT32_MIN;

    t129 = (x581&((x582+x583)&x584));

    if (t129 != 2408504298229989376LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x585 = 105U;
	static int32_t x586 = -3914;
	static uint8_t x587 = 10U;
	int8_t x588 = 33;
	volatile int32_t t130 = -975486583;

    t130 = (x585&((x586+x587)&x588));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x589 = UINT32_MAX;
	uint32_t x590 = 18U;
	uint8_t x591 = 18U;
	static volatile uint8_t x592 = UINT8_MAX;
	uint32_t t131 = 368750134U;

    t131 = (x589&((x590+x591)&x592));

    if (t131 != 36U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x594 = UINT64_MAX;
	volatile int8_t x595 = INT8_MIN;
	uint64_t x596 = 648605880177LLU;
	volatile uint64_t t132 = 535LLU;

    t132 = (x593&((x594+x595)&x596));

    if (t132 != 648605880177LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x597 = 455361LLU;
	uint16_t x598 = 1U;
	int8_t x599 = 1;
	static int64_t x600 = INT64_MAX;
	uint64_t t133 = 689685366866291LLU;

    t133 = (x597&((x598+x599)&x600));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x602 = INT64_MAX;
	volatile int8_t x603 = -1;
	volatile int8_t x604 = 1;
	volatile int64_t t134 = -336LL;

    t134 = (x601&((x602+x603)&x604));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x609 = INT16_MAX;
	uint32_t x610 = 436073507U;
	int64_t x611 = 40073LL;
	uint32_t x612 = 184U;
	volatile int64_t t135 = -121300LL;

    t135 = (x609&((x610+x611)&x612));

    if (t135 != 168LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x613 = 1;
	uint32_t x614 = 2894U;
	uint32_t x616 = UINT32_MAX;
	volatile int64_t t136 = -4LL;

    t136 = (x613&((x614+x615)&x616));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x621 = 19801U;
	static uint64_t x622 = UINT64_MAX;
	volatile int32_t x623 = -1;
	uint64_t x624 = 722833784297234LLU;
	uint64_t t137 = 643524LLU;

    t137 = (x621&((x622+x623)&x624));

    if (t137 != 17680LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x625 = UINT16_MAX;
	uint8_t x627 = 1U;
	int16_t x628 = 0;

    t138 = (x625&((x626+x627)&x628));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x629 = -1;
	int8_t x630 = INT8_MAX;
	static int64_t x631 = INT64_MIN;
	int8_t x632 = -1;
	int64_t t139 = 8567398111844LL;

    t139 = (x629&((x630+x631)&x632));

    if (t139 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x633 = -7340LL;
	int8_t x635 = -1;
	int16_t x636 = -1;
	volatile int64_t t140 = -195LL;

    t140 = (x633&((x634+x635)&x636));

    if (t140 != -7340LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x637 = 364666116LLU;
	int32_t x638 = INT32_MIN;
	int64_t x639 = 217LL;

    t141 = (x637&((x638+x639)&x640));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x641 = UINT16_MAX;
	static uint64_t x642 = UINT64_MAX;
	volatile int8_t x643 = -1;
	static volatile uint64_t t142 = 30614121116LLU;

    t142 = (x641&((x642+x643)&x644));

    if (t142 != 65534LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x646 = INT8_MIN;
	int16_t x647 = -1;
	int16_t x648 = -1;
	static volatile int32_t t143 = -346134180;

    t143 = (x645&((x646+x647)&x648));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x649 = UINT32_MAX;
	uint64_t x650 = 34LLU;
	volatile int64_t x651 = INT64_MIN;
	uint64_t x652 = 184421946119LLU;

    t144 = (x649&((x650+x651)&x652));

    if (t144 != 2LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x653 = INT8_MIN;
	static int8_t x654 = INT8_MAX;
	static volatile int8_t x656 = -1;
	volatile int64_t t145 = 142371788715120527LL;

    t145 = (x653&((x654+x655)&x656));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x657 = INT16_MIN;
	int32_t x658 = INT32_MAX;
	int8_t x659 = INT8_MIN;
	static int8_t x660 = INT8_MIN;
	int32_t t146 = -12;

    t146 = (x657&((x658+x659)&x660));

    if (t146 != 2147450880) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x661 = 36U;
	volatile uint16_t x663 = UINT16_MAX;
	uint64_t x664 = 524578LLU;
	uint64_t t147 = 137195838690658LLU;

    t147 = (x661&((x662+x663)&x664));

    if (t147 != 32LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x669 = INT64_MAX;
	int8_t x670 = -1;
	static uint64_t x671 = 199739342LLU;
	volatile uint64_t t148 = 9LLU;

    t148 = (x669&((x670+x671)&x672));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x673 = INT32_MIN;
	volatile int16_t x674 = INT16_MAX;
	int16_t x675 = 5;

    t149 = (x673&((x674+x675)&x676));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x677 = 29;
	static int32_t x678 = INT32_MAX;
	int64_t x679 = -41698534047629527LL;
	static int64_t x680 = INT64_MIN;

    t150 = (x677&((x678+x679)&x680));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x683 = UINT32_MAX;
	volatile int64_t x684 = -1LL;
	int64_t t151 = 7828LL;

    t151 = (x681&((x682+x683)&x684));

    if (t151 != 14LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x686 = 10LLU;
	uint8_t x687 = 52U;
	uint16_t x688 = UINT16_MAX;
	uint64_t t152 = 299511252771790LLU;

    t152 = (x685&((x686+x687)&x688));

    if (t152 != 58LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x689 = 2940;
	int16_t x691 = 1256;
	volatile int64_t t153 = -19063271LL;

    t153 = (x689&((x690+x691)&x692));

    if (t153 != 100LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x693 = INT8_MIN;
	uint16_t x694 = 117U;
	volatile int64_t x696 = -1LL;

    t154 = (x693&((x694+x695)&x696));

    if (t154 != -1152LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	static int32_t x712 = 730083;
	int32_t t155 = -6;

    t155 = (x709&((x710+x711)&x712));

    if (t155 != 729856) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x713 = -5;
	int64_t x715 = 2187353568LL;

    t156 = (x713&((x714+x715)&x716));

    if (t156 != 2114848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x726 = -1LL;
	int32_t x727 = -6718163;
	static int8_t x728 = INT8_MAX;

    t157 = (x725&((x726+x727)&x728));

    if (t157 != 44LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x734 = INT16_MAX;
	uint32_t x735 = 79143332U;
	int8_t x736 = 2;
	int64_t t158 = -956400418290544978LL;

    t158 = (x733&((x734+x735)&x736));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x737 = UINT16_MAX;
	static int32_t x738 = -337318;
	uint32_t x739 = UINT32_MAX;
	volatile uint32_t t159 = 216U;

    t159 = (x737&((x738+x739)&x740));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x742 = INT64_MIN;
	uint32_t x744 = UINT32_MAX;
	static volatile int64_t t160 = 526787148904896LL;

    t160 = (x741&((x742+x743)&x744));

    if (t160 != 65218LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x745 = 794677198;
	static int8_t x746 = -1;
	int32_t x747 = -1;
	uint16_t x748 = UINT16_MAX;

    t161 = (x745&((x746+x747)&x748));

    if (t161 != 53198) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x749 = 1;
	int16_t x750 = INT16_MIN;
	uint16_t x751 = 56U;
	int8_t x752 = -1;
	int32_t t162 = -1;

    t162 = (x749&((x750+x751)&x752));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x753 = UINT32_MAX;
	static int32_t x754 = -1;
	static uint32_t x755 = 8U;
	uint8_t x756 = 1U;
	volatile uint32_t t163 = 15668275U;

    t163 = (x753&((x754+x755)&x756));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x758 = INT64_MIN;
	uint64_t x759 = 8264LLU;
	volatile uint32_t x760 = 380507U;
	uint64_t t164 = 1068842246333181272LLU;

    t164 = (x757&((x758+x759)&x760));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x761 = 111307433386413788LLU;
	int64_t x762 = INT64_MIN;
	int8_t x763 = 5;
	static int32_t x764 = INT32_MIN;
	static uint64_t t165 = 1538495775711269LLU;

    t165 = (x761&((x762+x763)&x764));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x765 = 16362U;
	volatile uint32_t x766 = UINT32_MAX;
	volatile uint8_t x767 = 3U;
	int64_t x768 = -543734616792009LL;
	int64_t t166 = 2596710640739499LL;

    t166 = (x765&((x766+x767)&x768));

    if (t166 != 2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x769 = 621458;
	static int32_t x770 = INT32_MIN;
	uint32_t x771 = 66U;
	uint8_t x772 = UINT8_MAX;
	uint32_t t167 = 35360U;

    t167 = (x769&((x770+x771)&x772));

    if (t167 != 2U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = 102;
	volatile uint8_t x775 = 48U;
	int64_t x776 = -1LL;

    t168 = (x773&((x774+x775)&x776));

    if (t168 != 32LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x778 = UINT32_MAX;
	uint64_t x779 = UINT64_MAX;
	uint16_t x780 = 41U;
	uint64_t t169 = 46971LLU;

    t169 = (x777&((x778+x779)&x780));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x781 = 14U;
	int32_t x783 = -734596;
	static volatile int64_t x784 = -1LL;
	volatile int64_t t170 = -5069438540797LL;

    t170 = (x781&((x782+x783)&x784));

    if (t170 != 2LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x785 = INT32_MIN;
	uint16_t x786 = UINT16_MAX;
	int8_t x787 = 41;
	int64_t x788 = -3060134195LL;
	volatile int64_t t171 = 5LL;

    t171 = (x785&((x786+x787)&x788));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x795 = -1;
	int16_t x796 = -675;
	volatile int32_t t172 = 6666;

    t172 = (x793&((x794+x795)&x796));

    if (t172 != 12) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x797 = 12189202404689LLU;
	static int32_t x799 = -1;
	static volatile int16_t x800 = -267;
	volatile uint64_t t173 = 6158133330788697555LLU;

    t173 = (x797&((x798+x799)&x800));

    if (t173 != 80LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x801 = 27974882;
	volatile int64_t x802 = INT64_MIN;
	static uint64_t x804 = 7642389806855470848LLU;
	uint64_t t174 = 43742937008441LLU;

    t174 = (x801&((x802+x803)&x804));

    if (t174 != 7168LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x806 = -1;
	int8_t x807 = INT8_MIN;
	volatile uint32_t t175 = 6754U;

    t175 = (x805&((x806+x807)&x808));

    if (t175 != 4294967163U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x809 = 1;
	uint64_t t176 = 125512060559199LLU;

    t176 = (x809&((x810+x811)&x812));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x813 = 838068U;
	int64_t x814 = -533996155LL;
	uint64_t x816 = 1375066014265288LLU;

    t177 = (x813&((x814+x815)&x816));

    if (t177 != 34944LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x817 = -2;
	static uint8_t x818 = 19U;
	uint64_t x819 = 1338LLU;
	uint32_t x820 = 1585U;

    t178 = (x817&((x818+x819)&x820));

    if (t178 != 1024LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x821 = 2736496097378LLU;
	int32_t x823 = INT32_MIN;
	static uint64_t t179 = 1313582LLU;

    t179 = (x821&((x822+x823)&x824));

    if (t179 != 2735894167584LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x825 = INT8_MIN;
	int32_t x826 = INT32_MIN;
	uint16_t x827 = UINT16_MAX;
	int8_t x828 = -1;

    t180 = (x825&((x826+x827)&x828));

    if (t180 != -2147418240) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x830 = 1;
	uint8_t x831 = UINT8_MAX;
	uint32_t t181 = 16780708U;

    t181 = (x829&((x830+x831)&x832));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x833 = -2;
	volatile int32_t x834 = INT32_MAX;
	int8_t x835 = INT8_MIN;
	int32_t x836 = INT32_MIN;
	static int32_t t182 = -2384;

    t182 = (x833&((x834+x835)&x836));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x837 = UINT16_MAX;
	int8_t x838 = INT8_MIN;
	static volatile uint16_t x839 = 2U;
	uint64_t x840 = 19832361348LLU;
	volatile uint64_t t183 = 118732434LLU;

    t183 = (x837&((x838+x839)&x840));

    if (t183 != 53632LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x841 = 1480673U;
	int8_t x842 = -1;
	static uint8_t x843 = UINT8_MAX;
	static int32_t x844 = INT32_MIN;
	static volatile uint32_t t184 = 466847U;

    t184 = (x841&((x842+x843)&x844));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x845 = UINT64_MAX;
	uint32_t x846 = 1356349U;
	int64_t x847 = -6289036LL;
	volatile int32_t x848 = -1;
	static volatile uint64_t t185 = 223277LLU;

    t185 = (x845&((x846+x847)&x848));

    if (t185 != 18446744073704618929LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x849 = 0U;
	int32_t x850 = -1;
	int32_t x851 = -58558049;
	volatile int64_t x852 = -1LL;

    t186 = (x849&((x850+x851)&x852));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x853 = 665043;
	uint32_t x855 = 113540U;
	int8_t x856 = INT8_MIN;
	volatile uint32_t t187 = 3016247U;

    t187 = (x853&((x854+x855)&x856));

    if (t187 != 8576U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x858 = UINT8_MAX;
	int16_t x860 = 7736;
	volatile int32_t t188 = 650;

    t188 = (x857&((x858+x859)&x860));

    if (t188 != 56) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x862 = 10U;
	volatile uint64_t x863 = 5620LLU;
	volatile int64_t x864 = 260869086451016533LL;
	volatile uint64_t t189 = 7LLU;

    t189 = (x861&((x862+x863)&x864));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x865 = 9U;
	volatile uint16_t x866 = 1020U;
	static int16_t x867 = 391;
	int8_t x868 = INT8_MIN;
	int32_t t190 = 22640;

    t190 = (x865&((x866+x867)&x868));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x869 = UINT8_MAX;
	static uint8_t x870 = UINT8_MAX;
	volatile uint16_t x872 = 6U;
	static volatile uint64_t t191 = 10337LLU;

    t191 = (x869&((x870+x871)&x872));

    if (t191 != 6LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = INT32_MIN;
	int16_t x874 = INT16_MIN;
	uint16_t x875 = UINT16_MAX;
	int64_t x876 = INT64_MIN;
	int64_t t192 = 70LL;

    t192 = (x873&((x874+x875)&x876));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x877 = INT32_MIN;
	int64_t x879 = INT64_MAX;
	static int32_t x880 = -112;
	volatile uint64_t t193 = 12229547LLU;

    t193 = (x877&((x878+x879)&x880));

    if (t193 != 9223372925913006080LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x890 = -1LL;
	int16_t x892 = -1;
	int64_t t194 = -9756656LL;

    t194 = (x889&((x890+x891)&x892));

    if (t194 != 65532LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x894 = 7502299;
	uint32_t x895 = UINT32_MAX;
	static int32_t x896 = -14900829;
	uint32_t t195 = 6300U;

    t195 = (x893&((x894+x895)&x896));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x897 = INT8_MIN;
	int32_t x900 = -1;

    t196 = (x897&((x898+x899)&x900));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x901 = -1LL;
	int16_t x902 = -19;
	static volatile int8_t x903 = -1;
	volatile int16_t x904 = INT16_MAX;
	volatile int64_t t197 = -31969836496600179LL;

    t197 = (x901&((x902+x903)&x904));

    if (t197 != 32748LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x905 = 205;
	static int64_t x906 = INT64_MIN;
	int32_t x908 = INT32_MIN;
	volatile int64_t t198 = 1630287171174717943LL;

    t198 = (x905&((x906+x907)&x908));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x909 = 0;
	int8_t x910 = 54;
	int16_t x911 = INT16_MIN;
	int64_t x912 = -4735701445403LL;
	static int64_t t199 = 103686182982LL;

    t199 = (x909&((x910+x911)&x912));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

