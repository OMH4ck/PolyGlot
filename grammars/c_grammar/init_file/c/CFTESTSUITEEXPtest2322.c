
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

uint16_t x10 = 8073U;
int64_t x11 = INT64_MIN;
uint64_t x12 = 4874546241195LLU;
int16_t x24 = -1;
int32_t x25 = INT32_MIN;
int64_t x26 = 937659263540907LL;
static int32_t x32 = -38746905;
int16_t x37 = -1;
int32_t x38 = -2417016;
int32_t x42 = -569;
uint32_t x49 = UINT32_MAX;
uint64_t t13 = 59787145143LLU;
int16_t x59 = INT16_MIN;
int64_t x61 = -29LL;
int32_t x65 = INT32_MIN;
volatile int64_t t16 = 34919205917468844LL;
int32_t t20 = -324032509;
int8_t x87 = 0;
static uint64_t t21 = 866292879998230LLU;
int32_t x93 = INT32_MIN;
int64_t x103 = INT64_MIN;
int32_t x105 = 119304967;
int64_t t28 = -281LL;
static volatile int32_t t29 = 274;
volatile int64_t t30 = 31015261017LL;
static int16_t x127 = INT16_MIN;
static int64_t x128 = INT64_MAX;
int64_t t31 = -88LL;
static int8_t x131 = INT8_MIN;
volatile uint64_t t35 = 205885623113093LLU;
static int16_t x148 = 9;
uint32_t t38 = 4U;
volatile uint64_t t41 = 243434004744LLU;
uint8_t x172 = 2U;
int8_t x176 = 0;
volatile uint8_t x179 = 12U;
static int32_t x181 = -1;
static uint32_t x189 = UINT32_MAX;
static uint16_t x192 = UINT16_MAX;
int8_t x197 = 18;
int16_t x202 = -42;
int8_t x211 = INT8_MIN;
int64_t t52 = -18004LL;
uint64_t x216 = 3823892358553LLU;
int32_t x228 = -281;
volatile int8_t x230 = INT8_MAX;
uint16_t x231 = 23753U;
uint8_t x232 = UINT8_MAX;
int64_t x233 = INT64_MAX;
volatile int64_t t58 = 1183563167215174LL;
int64_t x244 = INT64_MIN;
uint8_t x247 = 5U;
int8_t x248 = INT8_MIN;
int32_t t61 = 70424150;
volatile int64_t x250 = INT64_MIN;
volatile int8_t x258 = -1;
int16_t x263 = INT16_MAX;
uint16_t x266 = 3826U;
uint8_t x274 = 22U;
uint32_t x277 = 2U;
int8_t x279 = -1;
static volatile int16_t x290 = 558;
volatile uint64_t t72 = 7577160056290353LLU;
int16_t x296 = 32;
volatile int32_t x302 = INT32_MAX;
static uint32_t x312 = 12U;
uint8_t x313 = UINT8_MAX;
static int64_t x319 = -1LL;
uint16_t x324 = UINT16_MAX;
static volatile int32_t x329 = INT32_MIN;
int64_t x332 = INT64_MIN;
static uint64_t t82 = 19195501723088860LLU;
int64_t x334 = 435LL;
static uint8_t x335 = 3U;
static int16_t x336 = INT16_MIN;
uint32_t x341 = 21873U;
volatile uint32_t t85 = 1510425904U;
uint8_t x345 = 11U;
uint8_t x349 = 94U;
static int32_t x352 = 13;
uint16_t x355 = 4U;
int64_t t90 = -31527151LL;
static volatile int32_t x365 = INT32_MAX;
static int16_t x378 = INT16_MAX;
static uint8_t x381 = UINT8_MAX;
volatile uint32_t x382 = UINT32_MAX;
int8_t x388 = INT8_MIN;
static int32_t t96 = 1009363;
uint8_t x390 = UINT8_MAX;
uint32_t x391 = UINT32_MAX;
volatile uint32_t t97 = 20288U;
volatile int64_t t98 = -1LL;
volatile int64_t t99 = 1LL;
int16_t x401 = 12165;
uint16_t x405 = 3U;
int16_t x409 = -1;
static volatile int32_t t102 = 13404;
volatile int32_t t103 = -18588;
int8_t x423 = INT8_MIN;
int32_t x425 = 0;
int8_t x427 = -1;
int8_t x435 = 61;
uint32_t t110 = 4U;
uint32_t x445 = 3055307U;
static int64_t x451 = INT64_MIN;
int64_t x458 = INT64_MAX;
uint64_t t114 = 386124LLU;
volatile int64_t x461 = INT64_MIN;
volatile uint8_t x464 = 1U;
static int16_t x466 = -2;
int32_t x478 = -1;
int64_t x490 = -3LL;
static uint32_t x494 = 4175673U;
uint64_t x499 = 1168LLU;
uint64_t x501 = UINT64_MAX;
volatile int32_t t126 = -124;
int16_t x515 = INT16_MAX;
volatile uint32_t t128 = 526U;
static int16_t x521 = -1;
volatile uint32_t t130 = 47644157U;
int16_t x525 = -798;
int16_t x526 = -1;
int8_t x528 = -1;
volatile uint64_t t133 = 50220LLU;
int64_t x539 = INT64_MIN;
static int16_t x542 = INT16_MIN;
int32_t t137 = -7;
volatile int16_t x556 = -1;
uint64_t x559 = UINT64_MAX;
uint64_t x560 = 531300LLU;
volatile uint64_t t139 = 15577LLU;
volatile uint16_t x561 = UINT16_MAX;
int64_t t140 = -87249845134363573LL;
int8_t x566 = -1;
int8_t x567 = INT8_MIN;
uint64_t t141 = 14980957891732LLU;
int16_t x570 = -1;
int16_t x571 = -4270;
static volatile uint32_t t143 = 2U;
static int16_t x583 = INT16_MAX;
int64_t x599 = -82541191820398LL;
int8_t x601 = 53;
volatile int8_t x613 = -1;
static uint8_t x616 = 0U;
uint64_t t153 = 13808531574576517LLU;
static int64_t x620 = INT64_MIN;
int8_t x622 = INT8_MIN;
int64_t x627 = INT64_MIN;
static int64_t t156 = 30522023LL;
uint64_t x630 = 192680509LLU;
int16_t x631 = INT16_MIN;
int8_t x632 = INT8_MIN;
int16_t x634 = INT16_MIN;
int16_t x641 = INT16_MIN;
static int64_t x655 = INT64_MIN;
static volatile int16_t x658 = INT16_MAX;
int16_t x663 = 77;
int8_t x666 = -1;
volatile uint8_t x667 = UINT8_MAX;
int16_t x673 = INT16_MIN;
volatile int64_t x690 = INT64_MIN;
volatile uint32_t x691 = 1604517U;
uint8_t x694 = 12U;
uint64_t x699 = UINT64_MAX;
int8_t x702 = 0;
uint16_t x703 = 95U;
int32_t x704 = -1;
uint64_t x713 = 66551909356985LLU;
int64_t x723 = INT64_MIN;
static volatile uint64_t t180 = 6521515316523008LLU;
uint16_t x726 = UINT16_MAX;
int8_t x728 = -4;
int16_t x733 = INT16_MAX;
int16_t x747 = INT16_MAX;
int64_t x751 = INT64_MAX;
static uint8_t x753 = UINT8_MAX;
int16_t x754 = INT16_MAX;
int16_t x756 = -1;
int8_t x761 = 0;
int32_t x765 = INT32_MIN;
static int64_t x766 = -320304LL;
static int64_t x768 = INT64_MIN;
volatile int16_t x769 = INT16_MIN;
int8_t x780 = 5;
static int8_t x787 = 14;
static int64_t x791 = 35470221876594234LL;
int64_t t197 = 12986LL;
static uint32_t x796 = 2032U;
static int16_t x800 = 5;


void f0(void) {
    	int32_t x1 = -1738356;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = -1;
	volatile uint16_t x4 = 0U;
	volatile int32_t t0 = -156777242;

    t0 = (x1&((x2&x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	uint16_t x6 = 26262U;
	static volatile uint64_t x7 = 588680LLU;
	static int8_t x8 = 10;
	static uint64_t t1 = 103800455988LLU;

    t1 = (x5&((x6&x7)&x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	static uint64_t t2 = 131344002LLU;

    t2 = (x9&((x10&x11)&x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	int16_t x15 = INT16_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -32296407881LL;

    t3 = (x13&((x14&x15)&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	static int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	static uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 35U;

    t4 = (x17&((x18&x19)&x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 1;
	static int32_t x22 = INT32_MIN;
	static volatile int16_t x23 = 0;
	volatile int32_t t5 = 414;

    t5 = (x21&((x22&x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x27 = -1;
	int16_t x28 = INT16_MIN;
	static volatile int64_t t6 = -30534519LL;

    t6 = (x25&((x26&x27)&x28));

    if (t6 != 937657932709888LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 2;
	uint32_t x30 = 10779U;
	int8_t x31 = INT8_MIN;
	uint32_t t7 = 425U;

    t7 = (x29&((x30&x31)&x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 9756U;
	int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MIN;
	int32_t x36 = 6;
	int32_t t8 = -32903;

    t8 = (x33&((x34&x35)&x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x39 = -18;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

    t9 = (x37&((x38&x39)&x40));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint32_t x41 = UINT32_MAX;
	int8_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 30U;

    t10 = (x41&((x42&x43)&x44));

    if (t10 != 4294966656U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 10;
	int32_t x46 = -1;
	int64_t x47 = -1LL;
	int64_t x48 = 309365590202LL;
	volatile int64_t t11 = -30105197017536LL;

    t11 = (x45&((x46&x47)&x48));

    if (t11 != 10LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x50 = UINT8_MAX;
	volatile int32_t x51 = -1;
	int16_t x52 = -6;
	volatile uint32_t t12 = 793U;

    t12 = (x49&((x50&x51)&x52));

    if (t12 != 250U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x53 = 87U;
	volatile int8_t x54 = INT8_MAX;
	volatile uint64_t x55 = 61LLU;
	int64_t x56 = 33130903162873LL;

    t13 = (x53&((x54&x55)&x56));

    if (t13 != 17LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -2475471LL;
	volatile int32_t x58 = INT32_MAX;
	static volatile int64_t x60 = INT64_MIN;
	static volatile int64_t t14 = 1LL;

    t14 = (x57&((x58&x59)&x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x62 = 1;
	volatile int32_t x63 = 1138;
	volatile uint16_t x64 = 364U;
	int64_t t15 = 0LL;

    t15 = (x61&((x62&x63)&x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -569;
	int64_t x67 = INT64_MIN;
	volatile uint16_t x68 = 25U;

    t16 = (x65&((x66&x67)&x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x69 = INT16_MIN;
	volatile int16_t x70 = -1;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = 287696661;
	volatile int32_t t17 = 335630831;

    t17 = (x69&((x70&x71)&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MAX;
	int8_t x74 = INT8_MAX;
	volatile int32_t x75 = -1068;
	int64_t x76 = 92913638LL;
	int64_t t18 = 235862771LL;

    t18 = (x73&((x74&x75)&x76));

    if (t18 != 68LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	volatile int32_t x78 = INT32_MIN;
	int16_t x79 = -1;
	uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 8U;

    t19 = (x77&((x78&x79)&x80));

    if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = INT16_MIN;
	volatile int16_t x84 = INT16_MAX;

    t20 = (x81&((x82&x83)&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	uint64_t x86 = 25146244LLU;
	static int16_t x88 = INT16_MIN;

    t21 = (x85&((x86&x87)&x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = -2;
	int8_t x91 = INT8_MAX;
	volatile int8_t x92 = 32;
	int64_t t22 = 187417933221244910LL;

    t22 = (x89&((x90&x91)&x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = UINT16_MAX;
	static int8_t x95 = -1;
	static volatile int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -66;

    t23 = (x93&((x94&x95)&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	static int64_t t24 = -324LL;

    t24 = (x97&((x98&x99)&x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	int64_t x102 = -36730199248650253LL;
	int32_t x104 = INT32_MIN;
	int64_t t25 = -18275925LL;

    t25 = (x101&((x102&x103)&x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x106 = 3627521704737772LLU;
	static uint64_t x107 = 7039372556772LLU;
	int32_t x108 = INT32_MIN;
	volatile uint64_t t26 = 203177444468536LLU;

    t26 = (x105&((x106&x107)&x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 12;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	static uint32_t x112 = 1174040559U;
	volatile uint32_t t27 = 3U;

    t27 = (x109&((x110&x111)&x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -53259873;
	volatile uint16_t x114 = UINT16_MAX;
	int32_t x115 = -287179;
	int64_t x116 = INT64_MIN;

    t28 = (x113&((x114&x115)&x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 90U;
	int16_t x118 = -1;
	static int32_t x119 = -1;
	int16_t x120 = INT16_MIN;

    t29 = (x117&((x118&x119)&x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = UINT32_MAX;

    t30 = (x121&((x122&x123)&x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	volatile int8_t x126 = INT8_MAX;

    t31 = (x125&((x126&x127)&x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 308814323;

    t32 = (x129&((x130&x131)&x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = 0;
	static volatile int32_t x134 = 143677;
	volatile int8_t x135 = INT8_MIN;
	static volatile uint8_t x136 = 3U;
	int32_t t33 = 667433518;

    t33 = (x133&((x134&x135)&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x137 = -1;
	int8_t x138 = -1;
	int8_t x139 = 0;
	uint16_t x140 = 32U;
	static volatile int32_t t34 = 1;

    t34 = (x137&((x138&x139)&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	uint16_t x142 = 97U;
	static uint8_t x143 = 11U;
	uint64_t x144 = 867757659334526526LLU;

    t35 = (x141&((x142&x143)&x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 151207702615877LL;
	int32_t x146 = -11175;
	int8_t x147 = INT8_MIN;
	int64_t t36 = 24779627467LL;

    t36 = (x145&((x146&x147)&x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = UINT32_MAX;
	int64_t x150 = -1LL;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	volatile int64_t t37 = 16LL;

    t37 = (x149&((x150&x151)&x152));

    if (t37 != 4294967168LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int8_t x154 = -1;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = -1;

    t38 = (x153&((x154&x155)&x156));

    if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MIN;
	int64_t x159 = 3946436796234777382LL;
	int8_t x160 = INT8_MIN;
	int64_t t39 = -735LL;

    t39 = (x157&((x158&x159)&x160));

    if (t39 != 17152LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1989U;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = 955U;
	int32_t t40 = -10752126;

    t40 = (x161&((x162&x163)&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x165 = 20U;
	uint64_t x166 = 2206LLU;
	static int64_t x167 = -1LL;
	volatile uint32_t x168 = 818U;

    t41 = (x165&((x166&x167)&x168));

    if (t41 != 16LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = 1;
	static volatile int64_t t42 = 8091988LL;

    t42 = (x169&((x170&x171)&x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 25053LL;
	volatile int16_t x174 = 0;
	int8_t x175 = INT8_MIN;
	volatile int64_t t43 = 17519827879672012LL;

    t43 = (x173&((x174&x175)&x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	volatile int32_t x178 = INT32_MIN;
	static int16_t x180 = -1;
	volatile int32_t t44 = -1;

    t44 = (x177&((x178&x179)&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = INT8_MIN;
	static int16_t x183 = INT16_MIN;
	int16_t x184 = -1;
	volatile int32_t t45 = -843590;

    t45 = (x181&((x182&x183)&x184));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	volatile uint64_t x186 = 3893LLU;
	uint64_t x187 = UINT64_MAX;
	volatile int16_t x188 = INT16_MIN;
	volatile uint64_t t46 = 251LLU;

    t46 = (x185&((x186&x187)&x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x190 = 5U;
	uint8_t x191 = UINT8_MAX;
	volatile uint32_t t47 = 37U;

    t47 = (x189&((x190&x191)&x192));

    if (t47 != 5U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = -1;
	uint16_t x194 = 1856U;
	int16_t x195 = 6967;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 30548;

    t48 = (x193&((x194&x195)&x196));

    if (t48 != 768) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x198 = 1414483073U;
	static uint8_t x199 = UINT8_MAX;
	int8_t x200 = INT8_MIN;
	static volatile uint32_t t49 = 83930U;

    t49 = (x197&((x198&x199)&x200));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	volatile int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (x201&((x202&x203)&x204));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 34732216532LLU;
	volatile int64_t x206 = 28657380LL;
	int16_t x207 = INT16_MAX;
	volatile uint32_t x208 = UINT32_MAX;
	uint64_t t51 = 1473241057507815246LLU;

    t51 = (x205&((x206&x207)&x208));

    if (t51 != 196LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -14518LL;
	static volatile int8_t x210 = INT8_MIN;
	uint8_t x212 = 19U;

    t52 = (x209&((x210&x211)&x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 6U;
	int16_t x214 = -1;
	static uint64_t x215 = 27LLU;
	uint64_t t53 = 5416819018750365LLU;

    t53 = (x213&((x214&x215)&x216));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int64_t t54 = -22LL;

    t54 = (x217&((x218&x219)&x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = 0U;
	uint8_t x222 = 4U;
	uint8_t x223 = UINT8_MAX;
	static int16_t x224 = INT16_MIN;
	int32_t t55 = -159;

    t55 = (x221&((x222&x223)&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	volatile uint32_t t56 = 14672844U;

    t56 = (x225&((x226&x227)&x228));

    if (t56 != 128U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	static volatile int32_t t57 = -59672;

    t57 = (x229&((x230&x231)&x232));

    if (t57 != 73) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = UINT16_MAX;
	int32_t x235 = INT32_MIN;
	uint16_t x236 = 2U;

    t58 = (x233&((x234&x235)&x236));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = UINT8_MAX;
	volatile uint16_t x240 = 1U;
	volatile int32_t t59 = 246878684;

    t59 = (x237&((x238&x239)&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -40;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = 1289018;
	volatile int64_t t60 = 221LL;

    t60 = (x241&((x242&x243)&x244));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 1U;
	uint16_t x246 = UINT16_MAX;

    t61 = (x245&((x246&x247)&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int16_t x251 = 1814;
	int8_t x252 = -60;
	static volatile int64_t t62 = 82326329LL;

    t62 = (x249&((x250&x251)&x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 24U;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 4;
	int32_t x256 = -1;
	volatile int32_t t63 = -11;

    t63 = (x253&((x254&x255)&x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = UINT16_MAX;
	uint64_t x259 = 2073056494349382LLU;
	int64_t x260 = -28950229250490493LL;
	volatile uint64_t t64 = 3019844104061807039LLU;

    t64 = (x257&((x258&x259)&x260));

    if (t64 != 44034LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 358677U;
	static volatile int8_t x262 = 0;
	int32_t x264 = INT32_MIN;
	uint32_t t65 = 7183U;

    t65 = (x261&((x262&x263)&x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	volatile int64_t t66 = 3744400516986084LL;

    t66 = (x265&((x266&x267)&x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x269 = 55U;
	int32_t x270 = -127;
	volatile uint16_t x271 = 3432U;
	volatile uint64_t x272 = 1082661483525510095LLU;
	volatile uint64_t t67 = 5584634658335LLU;

    t67 = (x269&((x270&x271)&x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 1U;
	uint64_t x275 = 3LLU;
	int8_t x276 = -1;
	volatile uint64_t t68 = 11211418LLU;

    t68 = (x273&((x274&x275)&x276));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = -1LL;
	uint16_t x280 = UINT16_MAX;
	static volatile int64_t t69 = 1LL;

    t69 = (x277&((x278&x279)&x280));

    if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	uint8_t x282 = 62U;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 59U;
	volatile int32_t t70 = 6505584;

    t70 = (x281&((x282&x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MIN;
	volatile int16_t x287 = 3409;
	int8_t x288 = 0;
	volatile int64_t t71 = -1LL;

    t71 = (x285&((x286&x287)&x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 56LL;
	uint64_t x291 = 4949585LLU;
	volatile int32_t x292 = INT32_MAX;

    t72 = (x289&((x290&x291)&x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MAX;
	uint64_t x295 = 2186458326274870864LLU;
	uint64_t t73 = 8264992949765437328LLU;

    t73 = (x293&((x294&x295)&x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = 93U;
	int8_t x298 = INT8_MAX;
	int32_t x299 = -293487;
	int64_t x300 = -1LL;
	int64_t t74 = 1LL;

    t74 = (x297&((x298&x299)&x300));

    if (t74 != 17LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 15LLU;
	int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MAX;
	volatile uint64_t t75 = 6LLU;

    t75 = (x301&((x302&x303)&x304));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 404017969984248LLU;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = 65971355;
	int8_t x308 = INT8_MIN;
	static uint64_t t76 = 0LLU;

    t76 = (x305&((x306&x307)&x308));

    if (t76 != 58990720LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -1LL;
	int32_t x310 = -760568830;
	int8_t x311 = -3;
	int64_t t77 = -82LL;

    t77 = (x309&((x310&x311)&x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int64_t x316 = INT64_MIN;
	int64_t t78 = -3062LL;

    t78 = (x313&((x314&x315)&x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 7U;
	uint8_t x318 = 5U;
	static volatile uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t79 = 2784264971709530LLU;

    t79 = (x317&((x318&x319)&x320));

    if (t79 != 5LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	int16_t x322 = 14404;
	int16_t x323 = 7;
	volatile int32_t t80 = 10773;

    t80 = (x321&((x322&x323)&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 3995138;
	int8_t x326 = -1;
	volatile uint32_t x327 = 30092595U;
	int16_t x328 = INT16_MAX;
	uint32_t t81 = 457U;

    t81 = (x325&((x326&x327)&x328));

    if (t81 != 9218U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = 356760733LLU;
	int8_t x331 = 0;

    t82 = (x329&((x330&x331)&x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	int64_t t83 = 218606972412095LL;

    t83 = (x333&((x334&x335)&x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 0;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = 80;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t84 = 79633U;

    t84 = (x337&((x338&x339)&x340));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x342 = 4020924;
	uint8_t x343 = UINT8_MAX;
	volatile uint16_t x344 = 6702U;

    t85 = (x341&((x342&x343)&x344));

    if (t85 != 32U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	volatile int64_t t86 = -493144358792955LL;

    t86 = (x345&((x346&x347)&x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	static volatile int32_t x351 = INT32_MAX;
	volatile int64_t t87 = -4132853146LL;

    t87 = (x349&((x350&x351)&x352));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	static uint32_t x354 = 25U;
	volatile int32_t x356 = INT32_MAX;
	volatile uint32_t t88 = 693U;

    t88 = (x353&((x354&x355)&x356));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	static int16_t x358 = INT16_MIN;
	uint16_t x359 = 1554U;
	int8_t x360 = 1;
	volatile int64_t t89 = 7390794LL;

    t89 = (x357&((x358&x359)&x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 293U;
	volatile uint32_t x364 = 2407U;

    t90 = (x361&((x362&x363)&x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = UINT32_MAX;
	int16_t x367 = -1;
	volatile uint32_t x368 = 2U;
	uint32_t t91 = 109U;

    t91 = (x365&((x366&x367)&x368));

    if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	static int64_t x370 = INT64_MAX;
	int8_t x371 = -1;
	int64_t x372 = 431454564LL;
	volatile int64_t t92 = 1LL;

    t92 = (x369&((x370&x371)&x372));

    if (t92 != 31076LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	static uint16_t x374 = 22788U;
	int64_t x375 = INT64_MIN;
	volatile uint32_t x376 = 7077998U;
	int64_t t93 = -1137LL;

    t93 = (x373&((x374&x375)&x376));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = INT32_MIN;
	static int16_t x379 = INT16_MIN;
	volatile int8_t x380 = INT8_MIN;
	int32_t t94 = 841073;

    t94 = (x377&((x378&x379)&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x383 = 32573U;
	static int64_t x384 = INT64_MAX;
	int64_t t95 = 18942928LL;

    t95 = (x381&((x382&x383)&x384));

    if (t95 != 61LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = 1323;
	int32_t x387 = INT32_MIN;

    t96 = (x385&((x386&x387)&x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	int16_t x392 = INT16_MAX;

    t97 = (x389&((x390&x391)&x392));

    if (t97 != 255U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = 1657974767251LL;
	uint16_t x394 = 32U;
	int16_t x395 = 0;
	static int32_t x396 = -6475733;

    t98 = (x393&((x394&x395)&x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	volatile int64_t x398 = INT64_MAX;
	volatile int8_t x399 = 1;
	uint16_t x400 = UINT16_MAX;

    t99 = (x397&((x398&x399)&x400));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -1;
	int8_t x403 = -1;
	static uint16_t x404 = 0U;
	static int32_t t100 = 42490566;

    t100 = (x401&((x402&x403)&x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x406 = 4027LLU;
	static volatile int64_t x407 = 90014185LL;
	static int8_t x408 = INT8_MAX;
	uint64_t t101 = 682LLU;

    t101 = (x405&((x406&x407)&x408));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 0U;
	int32_t x411 = -2369;
	int32_t x412 = INT32_MIN;

    t102 = (x409&((x410&x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 12740U;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;

    t103 = (x413&((x414&x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = -5;
	uint8_t x419 = UINT8_MAX;
	uint32_t x420 = 12638909U;
	int64_t t104 = -2024619023LL;

    t104 = (x417&((x418&x419)&x420));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	uint16_t x422 = 3U;
	uint64_t x424 = 1LLU;
	static volatile uint64_t t105 = 96690456624661LLU;

    t105 = (x421&((x422&x423)&x424));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = INT64_MIN;
	static volatile int16_t x428 = 87;
	volatile int64_t t106 = -14676LL;

    t106 = (x425&((x426&x427)&x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 14;
	uint16_t x430 = 5U;
	int16_t x431 = -1;
	static int8_t x432 = 2;
	volatile int32_t t107 = -121625510;

    t107 = (x429&((x430&x431)&x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 141;
	int32_t x434 = INT32_MIN;
	int8_t x436 = INT8_MAX;
	static volatile int32_t t108 = 3952;

    t108 = (x433&((x434&x435)&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MAX;
	uint8_t x438 = 0U;
	int64_t x439 = INT64_MIN;
	int16_t x440 = INT16_MAX;
	volatile int64_t t109 = 70LL;

    t109 = (x437&((x438&x439)&x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 170591U;
	uint32_t x442 = 1141603686U;
	uint8_t x443 = 106U;
	int16_t x444 = INT16_MIN;

    t110 = (x441&((x442&x443)&x444));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MAX;
	uint16_t x448 = 1942U;
	uint32_t t111 = 540943505U;

    t111 = (x445&((x446&x447)&x448));

    if (t111 != 1664U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 13232LL;
	uint64_t x450 = 1704482937690LLU;
	static int8_t x452 = INT8_MAX;
	static volatile uint64_t t112 = 287325250022669636LLU;

    t112 = (x449&((x450&x451)&x452));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 1;
	int8_t x454 = -1;
	volatile uint64_t x455 = UINT64_MAX;
	uint8_t x456 = UINT8_MAX;
	uint64_t t113 = 23690693657LLU;

    t113 = (x453&((x454&x455)&x456));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x457 = UINT64_MAX;
	int64_t x459 = 491673669216LL;
	int32_t x460 = 0;

    t114 = (x457&((x458&x459)&x460));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MIN;
	uint16_t x463 = 12U;
	int64_t t115 = -3308LL;

    t115 = (x461&((x462&x463)&x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	uint32_t x467 = UINT32_MAX;
	int16_t x468 = INT16_MIN;
	uint32_t t116 = 777U;

    t116 = (x465&((x466&x467)&x468));

    if (t116 != 2147450880U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = -289;
	int8_t x470 = INT8_MAX;
	uint32_t x471 = 1096877441U;
	volatile uint8_t x472 = 102U;
	uint32_t t117 = 5U;

    t117 = (x469&((x470&x471)&x472));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	static int8_t x474 = INT8_MIN;
	int16_t x475 = -525;
	static int64_t x476 = -70454849095751754LL;
	volatile int64_t t118 = -167736204074LL;

    t118 = (x473&((x474&x475)&x476));

    if (t118 != 128LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x479 = -4737;
	int16_t x480 = -1;
	volatile int32_t t119 = INT32_MIN;

    t119 = (x477&((x478&x479)&x480));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 24274623LLU;
	volatile int8_t x482 = INT8_MAX;
	int8_t x483 = -1;
	volatile int32_t x484 = -855559;
	volatile uint64_t t120 = 124169765LLU;

    t120 = (x481&((x482&x483)&x484));

    if (t120 != 57LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 3671U;
	volatile uint64_t x486 = UINT64_MAX;
	int16_t x487 = -1;
	static int16_t x488 = INT16_MIN;
	static volatile uint64_t t121 = 703332LLU;

    t121 = (x485&((x486&x487)&x488));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 222471LLU;
	int32_t x491 = INT32_MAX;
	uint16_t x492 = 1U;
	static uint64_t t122 = 64219696520033424LLU;

    t122 = (x489&((x490&x491)&x492));

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	int8_t x495 = INT8_MAX;
	int64_t x496 = INT64_MIN;
	volatile int64_t t123 = 405230624LL;

    t123 = (x493&((x494&x495)&x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	static int32_t x498 = INT32_MIN;
	volatile uint32_t x500 = UINT32_MAX;
	uint64_t t124 = 18689638412991LLU;

    t124 = (x497&((x498&x499)&x500));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x502 = 5982074LL;
	static uint8_t x503 = 36U;
	int32_t x504 = INT32_MAX;
	uint64_t t125 = 5043993LLU;

    t125 = (x501&((x502&x503)&x504));

    if (t125 != 32LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	int16_t x506 = -1;
	volatile uint8_t x507 = 0U;
	static volatile uint8_t x508 = UINT8_MAX;

    t126 = (x505&((x506&x507)&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	volatile int8_t x510 = INT8_MAX;
	int64_t x511 = 50LL;
	int16_t x512 = -8062;
	static int64_t t127 = 921186290852316477LL;

    t127 = (x509&((x510&x511)&x512));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 18112U;
	uint8_t x514 = 11U;
	uint8_t x516 = 0U;

    t128 = (x513&((x514&x515)&x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -6;
	int8_t x518 = INT8_MIN;
	static uint64_t x519 = UINT64_MAX;
	static uint8_t x520 = UINT8_MAX;
	static volatile uint64_t t129 = 102199709141411596LLU;

    t129 = (x517&((x518&x519)&x520));

    if (t129 != 128LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 11761891U;
	int8_t x523 = INT8_MIN;
	int32_t x524 = -255642269;

    t130 = (x521&((x522&x523)&x524));

    if (t130 != 8597504U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x527 = -1LL;
	int64_t t131 = -400594LL;

    t131 = (x525&((x526&x527)&x528));

    if (t131 != -798LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MIN;
	uint16_t x530 = UINT16_MAX;
	uint64_t x531 = 567900559LLU;
	uint8_t x532 = 37U;
	static volatile uint64_t t132 = 363961800110678499LLU;

    t132 = (x529&((x530&x531)&x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = 894982;
	static int8_t x534 = INT8_MIN;
	int16_t x535 = -1;
	uint64_t x536 = 3694LLU;

    t133 = (x533&((x534&x535)&x536));

    if (t133 != 2048LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 3U;
	int8_t x538 = INT8_MAX;
	int16_t x540 = INT16_MIN;
	int64_t t134 = 131953482LL;

    t134 = (x537&((x538&x539)&x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 3720U;
	int64_t x543 = 10LL;
	int8_t x544 = INT8_MIN;
	int64_t t135 = -11567478755409826LL;

    t135 = (x541&((x542&x543)&x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MIN;
	int32_t x547 = INT32_MIN;
	int32_t x548 = INT32_MAX;
	int64_t t136 = -42393646921639LL;

    t136 = (x545&((x546&x547)&x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 0;
	volatile uint8_t x550 = UINT8_MAX;
	int32_t x551 = -1;
	int8_t x552 = 12;

    t137 = (x549&((x550&x551)&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 10936U;
	static int8_t x554 = 17;
	static int8_t x555 = INT8_MIN;
	int32_t t138 = 3953;

    t138 = (x553&((x554&x555)&x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MIN;

    t139 = (x557&((x558&x559)&x560));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = 62U;
	int8_t x563 = 0;
	int64_t x564 = INT64_MIN;

    t140 = (x561&((x562&x563)&x564));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = 2869U;
	static uint64_t x568 = 338960LLU;

    t141 = (x565&((x566&x567)&x568));

    if (t141 != 2048LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = 181U;
	volatile int32_t x572 = 1523;
	int32_t t142 = -13614;

    t142 = (x569&((x570&x571)&x572));

    if (t142 != 16) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	uint8_t x574 = UINT8_MAX;
	volatile int16_t x575 = INT16_MAX;
	static int32_t x576 = INT32_MIN;

    t143 = (x573&((x574&x575)&x576));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	static int64_t x578 = INT64_MAX;
	uint16_t x579 = UINT16_MAX;
	volatile int16_t x580 = INT16_MIN;
	int64_t t144 = 123063403LL;

    t144 = (x577&((x578&x579)&x580));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	static volatile int64_t x582 = -114142637091961LL;
	uint16_t x584 = UINT16_MAX;
	int64_t t145 = 1943476604371937820LL;

    t145 = (x581&((x582&x583)&x584));

    if (t145 != 4992LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MAX;
	int32_t x586 = INT32_MAX;
	int64_t x587 = INT64_MAX;
	uint64_t x588 = UINT64_MAX;
	volatile uint64_t t146 = 8212LLU;

    t146 = (x585&((x586&x587)&x588));

    if (t146 != 2147483647LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 1U;
	static int16_t x590 = 0;
	uint16_t x591 = 3841U;
	int32_t x592 = -1;
	uint32_t t147 = 1199U;

    t147 = (x589&((x590&x591)&x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	uint16_t x594 = UINT16_MAX;
	int32_t x595 = INT32_MAX;
	static int32_t x596 = INT32_MIN;
	int64_t t148 = -68366008666LL;

    t148 = (x593&((x594&x595)&x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -6225712;
	int64_t x598 = -1LL;
	volatile int16_t x600 = INT16_MAX;
	int64_t t149 = 0LL;

    t149 = (x597&((x598&x599)&x600));

    if (t149 != 144LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = 6U;
	int8_t x603 = -22;
	int64_t x604 = INT64_MIN;
	volatile int64_t t150 = -13LL;

    t150 = (x601&((x602&x603)&x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = -1;
	int16_t x606 = INT16_MAX;
	int32_t x607 = -1452;
	static volatile int64_t x608 = -1LL;
	int64_t t151 = 946307914512LL;

    t151 = (x605&((x606&x607)&x608));

    if (t151 != 31316LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x609 = UINT8_MAX;
	uint8_t x610 = UINT8_MAX;
	int8_t x611 = INT8_MAX;
	int16_t x612 = -1;
	int32_t t152 = 493134637;

    t152 = (x609&((x610&x611)&x612));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = -47181;
	uint64_t x615 = 446685395LLU;

    t153 = (x613&((x614&x615)&x616));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -4;
	int64_t x618 = -1LL;
	int16_t x619 = -35;
	int64_t t154 = INT64_MIN;

    t154 = (x617&((x618&x619)&x620));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 16176;
	uint32_t x623 = 4U;
	int8_t x624 = -1;
	volatile uint32_t t155 = 0U;

    t155 = (x621&((x622&x623)&x624));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -807;
	int16_t x626 = INT16_MAX;
	volatile uint32_t x628 = UINT32_MAX;

    t156 = (x625&((x626&x627)&x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	volatile uint64_t t157 = 14LLU;

    t157 = (x629&((x630&x631)&x632));

    if (t157 != 192675840LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = -207584;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = UINT32_MAX;
	static volatile uint32_t t158 = 785962818U;

    t158 = (x633&((x634&x635)&x636));

    if (t158 != 2147483648U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int16_t x638 = -20;
	static volatile uint32_t x639 = 65617991U;
	int64_t x640 = INT64_MIN;
	int64_t t159 = -457204226LL;

    t159 = (x637&((x638&x639)&x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x642 = UINT8_MAX;
	uint32_t x643 = UINT32_MAX;
	volatile uint16_t x644 = UINT16_MAX;
	static volatile uint32_t t160 = 490934U;

    t160 = (x641&((x642&x643)&x644));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = 0;
	volatile int16_t x646 = INT16_MIN;
	volatile int16_t x647 = 0;
	static int32_t x648 = -1;
	int32_t t161 = 812;

    t161 = (x645&((x646&x647)&x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 2;
	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MIN;
	static int64_t x652 = INT64_MIN;
	int64_t t162 = -38982962LL;

    t162 = (x649&((x650&x651)&x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = -1;
	uint32_t x654 = 2034U;
	static volatile uint16_t x656 = UINT16_MAX;
	static int64_t t163 = -107650001855375799LL;

    t163 = (x653&((x654&x655)&x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 7223076LL;
	static volatile uint64_t x659 = 64999766LLU;
	uint8_t x660 = UINT8_MAX;
	uint64_t t164 = 9578080655124586LLU;

    t164 = (x657&((x658&x659)&x660));

    if (t164 != 4LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 1193103LLU;
	int8_t x662 = -1;
	int8_t x664 = INT8_MIN;
	static volatile uint64_t t165 = 1934LLU;

    t165 = (x661&((x662&x663)&x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = UINT64_MAX;
	int64_t x668 = 32344299LL;
	volatile uint64_t t166 = 507260795099LLU;

    t166 = (x665&((x666&x667)&x668));

    if (t166 != 235LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x670 = -1LL;
	uint8_t x671 = 7U;
	uint32_t x672 = UINT32_MAX;
	volatile int64_t t167 = 0LL;

    t167 = (x669&((x670&x671)&x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x674 = 32;
	int8_t x675 = INT8_MAX;
	uint32_t x676 = 7U;
	volatile uint32_t t168 = 80469U;

    t168 = (x673&((x674&x675)&x676));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 217052U;
	volatile int8_t x678 = 8;
	uint16_t x679 = 53U;
	uint8_t x680 = 2U;
	uint32_t t169 = 0U;

    t169 = (x677&((x678&x679)&x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static int64_t x682 = INT64_MIN;
	volatile int16_t x683 = INT16_MAX;
	volatile uint8_t x684 = 73U;
	volatile int64_t t170 = 4LL;

    t170 = (x681&((x682&x683)&x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = UINT8_MAX;
	uint16_t x686 = 5403U;
	volatile int8_t x687 = INT8_MIN;
	static uint32_t x688 = 234457067U;
	uint32_t t171 = 205182U;

    t171 = (x685&((x686&x687)&x688));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 54415736;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t172 = 12196005197LLU;

    t172 = (x689&((x690&x691)&x692));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	int32_t x695 = INT32_MIN;
	int8_t x696 = 0;
	int32_t t173 = 480460;

    t173 = (x693&((x694&x695)&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x697 = 4U;
	uint64_t x698 = 6LLU;
	volatile int16_t x700 = -8;
	uint64_t t174 = 3484LLU;

    t174 = (x697&((x698&x699)&x700));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	volatile int32_t t175 = 97;

    t175 = (x701&((x702&x703)&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 5;
	int64_t x706 = INT64_MAX;
	int8_t x707 = INT8_MIN;
	volatile int32_t x708 = INT32_MIN;
	volatile int64_t t176 = 61891414672429LL;

    t176 = (x705&((x706&x707)&x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 0;
	int16_t x710 = -1;
	int8_t x711 = 19;
	volatile int16_t x712 = -1;
	volatile int32_t t177 = -1138;

    t177 = (x709&((x710&x711)&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x714 = 25622U;
	volatile int32_t x715 = -13031532;
	static int64_t x716 = INT64_MIN;
	uint64_t t178 = 76535491895262224LLU;

    t178 = (x713&((x714&x715)&x716));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	uint8_t x718 = UINT8_MAX;
	int32_t x719 = INT32_MAX;
	int64_t x720 = -4214LL;
	volatile int64_t t179 = 733565023767LL;

    t179 = (x717&((x718&x719)&x720));

    if (t179 != 128LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 1508358474LL;
	volatile uint64_t x722 = 2792427LLU;
	int64_t x724 = -1LL;

    t180 = (x721&((x722&x723)&x724));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	uint32_t x727 = UINT32_MAX;
	volatile uint32_t t181 = 0U;

    t181 = (x725&((x726&x727)&x728));

    if (t181 != 252U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	int8_t x730 = INT8_MIN;
	int64_t x731 = 297489062395819LL;
	static uint64_t x732 = UINT64_MAX;
	uint64_t t182 = 37351297LLU;

    t182 = (x729&((x730&x731)&x732));

    if (t182 != 297489062363136LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	int16_t x736 = 26;
	uint32_t t183 = 25U;

    t183 = (x733&((x734&x735)&x736));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	static int16_t x738 = INT16_MIN;
	uint32_t x739 = 2U;
	static volatile int16_t x740 = -35;
	uint32_t t184 = 254198091U;

    t184 = (x737&((x738&x739)&x740));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = 330833331868LL;
	int8_t x742 = -47;
	uint16_t x743 = 1445U;
	int32_t x744 = INT32_MIN;
	volatile int64_t t185 = 98303063201247705LL;

    t185 = (x741&((x742&x743)&x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 27023616572LL;
	int8_t x746 = -1;
	int8_t x748 = 25;
	volatile int64_t t186 = -3737LL;

    t186 = (x745&((x746&x747)&x748));

    if (t186 != 24LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 16411515U;
	static uint32_t x750 = UINT32_MAX;
	int64_t x752 = -1LL;
	int64_t t187 = -1658228478586867LL;

    t187 = (x749&((x750&x751)&x752));

    if (t187 != 16411515LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x755 = 164439365589771LLU;
	uint64_t t188 = 1799144503LLU;

    t188 = (x753&((x754&x755)&x756));

    if (t188 != 11LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = -1;
	int64_t x759 = 1803190078LL;
	int8_t x760 = INT8_MIN;
	int64_t t189 = 4985185LL;

    t189 = (x757&((x758&x759)&x760));

    if (t189 != 1803190016LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	int64_t x763 = INT64_MAX;
	int16_t x764 = -1;
	int64_t t190 = 12217718662816247LL;

    t190 = (x761&((x762&x763)&x764));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x767 = 189585309792851LLU;
	volatile uint64_t t191 = 2889904834073232LLU;

    t191 = (x765&((x766&x767)&x768));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MAX;
	static uint32_t x772 = UINT32_MAX;
	int64_t t192 = 58076LL;

    t192 = (x769&((x770&x771)&x772));

    if (t192 != 4294934528LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 9498U;
	static uint8_t x774 = 5U;
	volatile int8_t x775 = -3;
	uint8_t x776 = UINT8_MAX;
	volatile uint32_t t193 = 56U;

    t193 = (x773&((x774&x775)&x776));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = 687781037;
	static uint32_t x778 = 15U;
	int16_t x779 = INT16_MIN;
	uint32_t t194 = 1348545142U;

    t194 = (x777&((x778&x779)&x780));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	uint8_t x782 = 73U;
	int32_t x783 = -1;
	volatile uint64_t x784 = 250407LLU;
	static uint64_t t195 = 10263602LLU;

    t195 = (x781&((x782&x783)&x784));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 1;
	volatile int64_t x786 = -1LL;
	static int16_t x788 = INT16_MIN;
	volatile int64_t t196 = 48LL;

    t196 = (x785&((x786&x787)&x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = -1;
	uint32_t x790 = 31U;
	volatile int32_t x792 = 2567080;

    t197 = (x789&((x790&x791)&x792));

    if (t197 != 8LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 2;
	int32_t x794 = -1;
	int32_t x795 = 128542250;
	static uint32_t t198 = 42024U;

    t198 = (x793&((x794&x795)&x796));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	int64_t x798 = -608384016798344236LL;
	volatile int64_t x799 = -1LL;
	volatile int64_t t199 = -104910301693416LL;

    t199 = (x797&((x798&x799)&x800));

    if (t199 != 4LL) { NG(); } else { ; }
	
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

