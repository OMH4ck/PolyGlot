
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

int32_t x16 = -1;
uint16_t x21 = 127U;
static volatile int8_t x26 = -1;
volatile int8_t x27 = -20;
static int8_t x28 = INT8_MIN;
uint64_t x29 = 29940653LLU;
int16_t x30 = INT16_MIN;
int32_t x38 = 16427407;
volatile uint32_t x39 = 7128241U;
uint32_t x40 = 11753646U;
static volatile int64_t x41 = INT64_MAX;
volatile int64_t x50 = INT64_MIN;
int32_t x51 = INT32_MIN;
volatile int32_t x54 = 391294;
int64_t x62 = 150504746188LL;
uint64_t x68 = UINT64_MAX;
static uint8_t x75 = 1U;
int16_t x78 = 1;
uint32_t x81 = 107894327U;
uint64_t x84 = 1162277LLU;
uint8_t x92 = 0U;
uint64_t t22 = UINT64_MAX;
static int16_t x100 = INT16_MIN;
uint32_t x105 = 15173704U;
int32_t x106 = -1;
int64_t t28 = 57873637767325003LL;
int8_t x128 = INT8_MIN;
int16_t x129 = 0;
int16_t x130 = -173;
volatile uint64_t t32 = 26479LLU;
uint64_t x139 = 46190067273LLU;
int16_t x140 = INT16_MIN;
volatile int32_t x148 = -1;
int64_t x150 = INT64_MIN;
static int64_t x152 = 140605171LL;
int64_t t36 = 43011075182789LL;
static volatile int64_t x156 = -1LL;
int64_t t37 = 3LL;
static volatile int16_t x160 = -1;
volatile int32_t t38 = -7328742;
int8_t x162 = -1;
uint8_t x173 = 1U;
volatile int8_t x179 = 0;
int32_t x181 = INT32_MIN;
int16_t x182 = INT16_MIN;
static int64_t x184 = INT64_MIN;
int32_t x185 = INT32_MAX;
int32_t t45 = INT32_MAX;
uint64_t x189 = UINT64_MAX;
uint32_t x190 = UINT32_MAX;
uint64_t t47 = 536626121155631502LLU;
int8_t x206 = INT8_MIN;
uint16_t x213 = UINT16_MAX;
volatile int16_t x215 = INT16_MIN;
int16_t x222 = INT16_MIN;
static volatile int32_t x226 = INT32_MIN;
volatile int32_t t55 = 323408517;
uint64_t x234 = 24054LLU;
int16_t x240 = INT16_MAX;
int16_t x246 = -1;
volatile uint8_t x248 = 0U;
static int8_t x251 = INT8_MIN;
uint64_t t61 = 61839210LLU;
uint32_t x264 = 15902U;
static int64_t x265 = INT64_MIN;
static volatile int16_t x266 = INT16_MIN;
uint8_t x278 = UINT8_MAX;
int64_t x285 = -309889LL;
static uint64_t x287 = 4205299843088LLU;
static int64_t x294 = -1LL;
int8_t x303 = INT8_MIN;
int8_t x306 = -1;
int32_t t73 = -383;
volatile uint32_t t74 = 157U;
int16_t x327 = INT16_MIN;
uint16_t x332 = 8U;
volatile int32_t t79 = 1;
volatile uint64_t x342 = 252142790LLU;
volatile int32_t x346 = 32512;
int16_t x347 = 31;
uint64_t t81 = 4876985449063707875LLU;
int32_t x349 = 2302;
uint16_t x351 = UINT16_MAX;
volatile int32_t t84 = 54096901;
int64_t x364 = INT64_MIN;
volatile int64_t t85 = -990382LL;
volatile int64_t t88 = -15809845497623526LL;
int16_t x378 = -2;
int32_t x384 = INT32_MIN;
static int8_t x385 = INT8_MIN;
static int8_t x387 = INT8_MIN;
static uint64_t x396 = 691486695678LLU;
static volatile int16_t x399 = -1;
uint8_t x400 = 100U;
uint16_t x404 = UINT16_MAX;
int32_t x410 = INT32_MIN;
uint64_t x414 = 830229693401473LLU;
volatile int32_t x415 = -262;
int32_t x420 = -1;
int16_t x423 = 1;
volatile int16_t x424 = INT16_MAX;
volatile int8_t x430 = 0;
int64_t x436 = 14210555222369935LL;
int64_t t103 = -68LL;
int32_t x448 = -1;
static int16_t x449 = -1;
int64_t x451 = -411773078LL;
volatile int32_t t107 = -1005;
static int32_t x454 = -12;
int64_t t108 = 34394988723161082LL;
uint64_t x458 = UINT64_MAX;
static int32_t x466 = -1998;
volatile uint64_t x469 = 12323429929982316LLU;
volatile uint16_t x473 = UINT16_MAX;
int64_t x475 = INT64_MIN;
volatile int16_t x476 = -1;
int64_t x480 = INT64_MIN;
uint32_t x481 = 3479971U;
int16_t x482 = -137;
volatile uint32_t t115 = 158479134U;
static volatile int8_t x486 = 26;
int64_t x489 = INT64_MIN;
volatile int16_t x491 = INT16_MIN;
volatile int64_t t117 = INT64_MIN;
static int64_t x493 = -1LL;
volatile int8_t x502 = 2;
uint8_t x505 = 5U;
int16_t x524 = -34;
int32_t x527 = INT32_MAX;
uint16_t x528 = UINT16_MAX;
int32_t t126 = 492915886;
uint64_t t127 = 112480LLU;
int8_t x534 = INT8_MAX;
uint8_t x535 = 51U;
uint8_t x542 = 51U;
volatile int8_t x544 = -1;
volatile uint64_t t133 = 17482827918786LLU;
uint8_t x557 = UINT8_MAX;
volatile int32_t t134 = -10920344;
int8_t x567 = -3;
int16_t x568 = -1;
volatile int32_t t136 = 836025;
int8_t x569 = -1;
volatile int16_t x573 = INT16_MIN;
uint32_t x575 = UINT32_MAX;
uint64_t x577 = 1761684048412LLU;
uint64_t t139 = 110314963932LLU;
int16_t x583 = 0;
int8_t x584 = INT8_MIN;
volatile int32_t t140 = 121771;
int16_t x587 = INT16_MAX;
int64_t t141 = 5778105128LL;
int32_t t142 = -101058;
volatile int8_t x606 = -49;
int8_t x607 = INT8_MAX;
volatile uint8_t x608 = 3U;
int64_t t147 = -534648034565LL;
static volatile int64_t t148 = 53672060182674141LL;
int64_t x617 = INT64_MIN;
static int32_t x620 = -1852;
int8_t x623 = INT8_MIN;
volatile uint64_t t151 = UINT64_MAX;
int8_t x635 = INT8_MIN;
static volatile int64_t x636 = INT64_MIN;
uint64_t x644 = 12292LLU;
static int64_t x652 = INT64_MIN;
uint32_t x653 = UINT32_MAX;
int64_t x657 = -6069569LL;
uint64_t x666 = 263196509817338849LLU;
volatile uint64_t t163 = 254373327830482890LLU;
int8_t x683 = INT8_MAX;
volatile int16_t x684 = 0;
int32_t t165 = 1663;
int32_t x689 = -35073;
static volatile int8_t x694 = INT8_MIN;
int64_t x695 = -1LL;
int32_t x713 = INT32_MAX;
uint64_t x725 = 1358058LLU;
static int32_t x735 = -1;
uint16_t x740 = 3555U;
int64_t x741 = -1LL;
int64_t t179 = 28573364LL;
uint16_t x746 = 18824U;
int64_t x752 = 2943433940LL;
int16_t x757 = INT16_MAX;
static int16_t x760 = -1;
volatile int16_t x763 = INT16_MIN;
uint32_t x772 = 1U;
int64_t x773 = -256LL;
int64_t t187 = 26015657LL;
volatile int32_t t188 = INT32_MIN;
int64_t x782 = 4160570091154379617LL;
int16_t x783 = INT16_MIN;
static int64_t x784 = -1LL;
static int64_t t189 = 38805LL;
uint8_t x786 = UINT8_MAX;
static int8_t x805 = 0;
volatile int32_t t196 = 3339;
int8_t x815 = -1;
uint32_t x816 = UINT32_MAX;
int32_t x821 = INT32_MAX;
volatile int32_t t199 = INT32_MAX;


void f0(void) {
    	static volatile int64_t x1 = INT64_MAX;
	int8_t x2 = -1;
	int32_t x3 = -2580925;
	int64_t x4 = 147803147LL;
	int64_t t0 = 160333236169628LL;

    t0 = (x1-((x2>x3)&x4));

    if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int32_t x6 = -1;
	uint32_t x7 = 27U;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 9036629;

    t1 = (x5-((x6>x7)&x8));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	volatile int32_t x10 = INT32_MAX;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = -1292394;

    t2 = (x9-((x10>x11)&x12));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int16_t x14 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	int32_t t3 = INT32_MIN;

    t3 = (x13-((x14>x15)&x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -1;
	int16_t x18 = 10397;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 18;

    t4 = (x17-((x18>x19)&x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 60U;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 11230LLU;
	uint64_t t5 = 40LLU;

    t5 = (x21-((x22>x23)&x24));

    if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint32_t t6 = UINT32_MAX;

    t6 = (x25-((x26>x27)&x28));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x31 = 1;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t7 = 637003LLU;

    t7 = (x29-((x30>x31)&x32));

    if (t7 != 29940653LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 2464970U;
	static int64_t x34 = INT64_MAX;
	static uint16_t x35 = 4U;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 3372127720718441497LL;

    t8 = (x33-((x34>x35)&x36));

    if (t8 != 2464970LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 56;
	volatile uint32_t t9 = 0U;

    t9 = (x37-((x38>x39)&x40));

    if (t9 != 56U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 493517LLU;
	int32_t x43 = 63809;
	uint64_t x44 = 420878113471LLU;
	volatile uint64_t t10 = 25LLU;

    t10 = (x41-((x42>x43)&x44));

    if (t10 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	uint32_t x46 = 269U;
	static int16_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;
	static volatile int64_t t11 = 1662526187LL;

    t11 = (x45-((x46>x47)&x48));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	int8_t x52 = INT8_MIN;
	int64_t t12 = INT64_MAX;

    t12 = (x49-((x50>x51)&x52));

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -2388;
	int16_t x55 = 1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -38016627LL;

    t13 = (x53-((x54>x55)&x56));

    if (t13 != -2388LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MAX;
	static int8_t x59 = INT8_MIN;
	static volatile int64_t x60 = INT64_MIN;
	int64_t t14 = -2LL;

    t14 = (x57-((x58>x59)&x60));

    if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 131089U;
	int16_t x63 = INT16_MIN;
	static int32_t x64 = 56;
	uint32_t t15 = 14596U;

    t15 = (x61-((x62>x63)&x64));

    if (t15 != 131089U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 34464LLU;
	int16_t x66 = INT16_MIN;
	int32_t x67 = -1;
	uint64_t t16 = 447936LLU;

    t16 = (x65-((x66>x67)&x68));

    if (t16 != 34464LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x69 = 0;
	volatile int16_t x70 = -1;
	static int64_t x71 = -43LL;
	uint16_t x72 = 854U;
	int32_t t17 = 882928;

    t17 = (x69-((x70>x71)&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static int8_t x74 = -2;
	volatile int8_t x76 = 58;
	static volatile int32_t t18 = -13068485;

    t18 = (x73-((x74>x75)&x76));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 255U;
	uint64_t x79 = 6943521LLU;
	volatile int8_t x80 = 0;
	volatile int32_t t19 = -3235214;

    t19 = (x77-((x78>x79)&x80));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = 172887219;
	uint16_t x83 = 9U;
	volatile uint64_t t20 = 5070973LLU;

    t20 = (x81-((x82>x83)&x84));

    if (t20 != 107894326LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 26591U;
	static uint32_t x90 = 1103U;
	static uint16_t x91 = 1U;
	static uint32_t t21 = 1525084U;

    t21 = (x89-((x90>x91)&x92));

    if (t21 != 26591U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile uint8_t x94 = 0U;
	int16_t x95 = -1;
	static int32_t x96 = INT32_MIN;

    t22 = (x93-((x94>x95)&x96));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 50LL;
	int32_t x98 = -1;
	int64_t x99 = -739LL;
	int64_t t23 = 20423816080866LL;

    t23 = (x97-((x98>x99)&x100));

    if (t23 != 50LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	static volatile int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t24 = UINT64_MAX;

    t24 = (x101-((x102>x103)&x104));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x107 = 145;
	static volatile int8_t x108 = 6;
	static uint32_t t25 = 30859U;

    t25 = (x105-((x106>x107)&x108));

    if (t25 != 15173704U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = UINT32_MAX;
	static volatile uint32_t t26 = UINT32_MAX;

    t26 = (x109-((x110>x111)&x112));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x113 = INT32_MAX;
	volatile int32_t x114 = -1;
	static uint8_t x115 = 12U;
	static int16_t x116 = INT16_MAX;
	static int32_t t27 = INT32_MAX;

    t27 = (x113-((x114>x115)&x116));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x117 = 7211U;
	int16_t x118 = -2;
	int64_t x119 = -1LL;
	volatile int64_t x120 = 1162LL;

    t28 = (x117-((x118>x119)&x120));

    if (t28 != 7211LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = -1;
	volatile int16_t x122 = INT16_MIN;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = -23;
	volatile int32_t t29 = -16219792;

    t29 = (x121-((x122>x123)&x124));

    if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x125 = 1575722U;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint32_t t30 = 118U;

    t30 = (x125-((x126>x127)&x128));

    if (t30 != 1575722U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x131 = 9623U;
	static uint32_t x132 = 35U;
	volatile uint32_t t31 = 244810U;

    t31 = (x129-((x130>x131)&x132));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MAX;
	int16_t x134 = 894;
	uint8_t x135 = UINT8_MAX;
	static uint64_t x136 = UINT64_MAX;

    t32 = (x133-((x134>x135)&x136));

    if (t32 != 126LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MIN;
	static volatile int32_t t33 = -770;

    t33 = (x137-((x138>x139)&x140));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 12U;
	static int16_t x142 = 13252;
	static int16_t x143 = -40;
	int8_t x144 = INT8_MAX;
	volatile int32_t t34 = -1;

    t34 = (x141-((x142>x143)&x144));

    if (t34 != 11) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	static int16_t x147 = INT16_MIN;
	volatile uint64_t t35 = 525243565742272088LLU;

    t35 = (x145-((x146>x147)&x148));

    if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	uint16_t x151 = 5434U;

    t36 = (x149-((x150>x151)&x152));

    if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x153 = INT8_MAX;
	int64_t x154 = 647743670660244810LL;
	int8_t x155 = INT8_MAX;

    t37 = (x153-((x154>x155)&x156));

    if (t37 != 126LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = UINT8_MAX;
	static int8_t x158 = 3;
	volatile int16_t x159 = -4;

    t38 = (x157-((x158>x159)&x160));

    if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 718U;
	int64_t x163 = -1LL;
	int32_t x164 = -985413;
	static volatile int32_t t39 = -3814;

    t39 = (x161-((x162>x163)&x164));

    if (t39 != 718) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x165 = -1LL;
	static uint64_t x166 = UINT64_MAX;
	static int16_t x167 = INT16_MIN;
	volatile uint16_t x168 = 7U;
	volatile int64_t t40 = 7944644LL;

    t40 = (x165-((x166>x167)&x168));

    if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = 4;
	uint8_t x170 = 3U;
	int64_t x171 = 30163229126254757LL;
	volatile int16_t x172 = INT16_MIN;
	int32_t t41 = -446142;

    t41 = (x169-((x170>x171)&x172));

    if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x174 = -1;
	static uint8_t x175 = 33U;
	static int16_t x176 = -1;
	int32_t t42 = 2844;

    t42 = (x173-((x174>x175)&x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	uint64_t x180 = 5586520909671217LLU;
	static volatile uint64_t t43 = 1711077679614LLU;

    t43 = (x177-((x178>x179)&x180));

    if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x183 = 1LLU;
	int64_t t44 = -132348LL;

    t44 = (x181-((x182>x183)&x184));

    if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x186 = 23965619448196LL;
	volatile uint8_t x187 = 1U;
	volatile int32_t x188 = INT32_MIN;

    t45 = (x185-((x186>x187)&x188));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x191 = -132475302080360LL;
	uint32_t x192 = 4U;
	uint64_t t46 = UINT64_MAX;

    t46 = (x189-((x190>x191)&x192));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x197 = -5132;
	int64_t x198 = INT64_MAX;
	static int16_t x199 = -1;
	volatile uint64_t x200 = UINT64_MAX;

    t47 = (x197-((x198>x199)&x200));

    if (t47 != 18446744073709546483LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x201 = -72370232283LL;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = -1;
	static int16_t x204 = -1;
	int64_t t48 = -6938LL;

    t48 = (x201-((x202>x203)&x204));

    if (t48 != -72370232283LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = 190962716LLU;
	uint32_t x207 = 61975101U;
	int64_t x208 = 19045923244794681LL;
	static volatile uint64_t t49 = 36853LLU;

    t49 = (x205-((x206>x207)&x208));

    if (t49 != 190962715LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MIN;
	int64_t x210 = 42430LL;
	static volatile int64_t x211 = INT64_MAX;
	static int16_t x212 = -1;
	volatile int32_t t50 = INT32_MIN;

    t50 = (x209-((x210>x211)&x212));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x214 = INT64_MIN;
	volatile int8_t x216 = -1;
	static int32_t t51 = 4;

    t51 = (x213-((x214>x215)&x216));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = 12;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	int64_t t52 = 156474LL;

    t52 = (x217-((x218>x219)&x220));

    if (t52 != 12LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = INT64_MAX;
	int32_t x223 = INT32_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t53 = INT64_MAX;

    t53 = (x221-((x222>x223)&x224));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = INT8_MIN;
	uint16_t x227 = 41U;
	static int64_t x228 = -494764356972LL;
	static int64_t t54 = 32381677344876LL;

    t54 = (x225-((x226>x227)&x228));

    if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x229 = INT8_MIN;
	uint16_t x230 = 0U;
	int8_t x231 = INT8_MAX;
	uint16_t x232 = 9982U;

    t55 = (x229-((x230>x231)&x232));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x233 = INT32_MAX;
	int8_t x235 = 30;
	uint8_t x236 = UINT8_MAX;
	int32_t t56 = -970;

    t56 = (x233-((x234>x235)&x236));

    if (t56 != 2147483646) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x237 = -359404783899LL;
	volatile uint32_t x238 = 435U;
	volatile int64_t x239 = -1LL;
	int64_t t57 = -134LL;

    t57 = (x237-((x238>x239)&x240));

    if (t57 != -359404783900LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x245 = -1827;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t58 = -436743011;

    t58 = (x245-((x246>x247)&x248));

    if (t58 != -1827) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = -1;
	int16_t x250 = -432;
	volatile uint16_t x252 = 4600U;
	volatile int32_t t59 = -149891;

    t59 = (x249-((x250>x251)&x252));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = 140578413302088163LL;
	uint16_t x254 = 1U;
	uint16_t x255 = 1U;
	static int32_t x256 = INT32_MAX;
	int64_t t60 = 433580878406904013LL;

    t60 = (x253-((x254>x255)&x256));

    if (t60 != 140578413302088163LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 148U;
	int64_t x259 = 2669431891757864LL;
	static uint64_t x260 = 29415825424901LLU;

    t61 = (x257-((x258>x259)&x260));

    if (t61 != 65535LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x261 = -1959145342207LL;
	int64_t x262 = -1LL;
	volatile int64_t x263 = -6014946056511LL;
	volatile int64_t t62 = 269438945305LL;

    t62 = (x261-((x262>x263)&x264));

    if (t62 != -1959145342207LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x267 = INT32_MAX;
	static int32_t x268 = -14;
	volatile int64_t t63 = INT64_MIN;

    t63 = (x265-((x266>x267)&x268));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x269 = 1313U;
	int16_t x270 = 125;
	int8_t x271 = INT8_MAX;
	int64_t x272 = 31696283LL;
	static volatile int64_t t64 = 40357359LL;

    t64 = (x269-((x270>x271)&x272));

    if (t64 != 1313LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x273 = 0U;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = -1LL;
	int64_t x276 = 2854958583133598000LL;
	volatile int64_t t65 = -9538003011862161LL;

    t65 = (x273-((x274>x275)&x276));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x277 = 96;
	int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MIN;
	static volatile int64_t t66 = -12699457LL;

    t66 = (x277-((x278>x279)&x280));

    if (t66 != 96LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x281 = -1;
	int64_t x282 = -3105LL;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t67 = 51349508;

    t67 = (x281-((x282>x283)&x284));

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x286 = INT16_MIN;
	int32_t x288 = -29346493;
	int64_t t68 = 11065496454486LL;

    t68 = (x285-((x286>x287)&x288));

    if (t68 != -309890LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	static uint16_t x292 = 3U;
	volatile int32_t t69 = 135111687;

    t69 = (x289-((x290>x291)&x292));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x293 = 1U;
	static int32_t x295 = -567612067;
	volatile int32_t x296 = INT32_MAX;
	int32_t t70 = -192;

    t70 = (x293-((x294>x295)&x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = -80;
	static int8_t x298 = -1;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	static int64_t t71 = -1272290141987LL;

    t71 = (x297-((x298>x299)&x300));

    if (t71 != -80LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = -585886;
	uint32_t x302 = UINT32_MAX;
	volatile int32_t x304 = INT32_MAX;
	volatile int32_t t72 = 874;

    t72 = (x301-((x302>x303)&x304));

    if (t72 != -585887) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = -102094861;
	int32_t x307 = INT32_MIN;
	volatile int8_t x308 = INT8_MAX;

    t73 = (x305-((x306>x307)&x308));

    if (t73 != -102094862) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 5812701U;
	volatile int64_t x310 = INT64_MAX;
	volatile int16_t x311 = INT16_MIN;
	volatile int16_t x312 = -1;

    t74 = (x309-((x310>x311)&x312));

    if (t74 != 5812700U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = UINT32_MAX;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MAX;
	volatile int64_t x316 = -1LL;
	int64_t t75 = -4008790991623765441LL;

    t75 = (x313-((x314>x315)&x316));

    if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = INT16_MIN;
	uint16_t x322 = 2U;
	static uint16_t x323 = UINT16_MAX;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t76 = 3732236;

    t76 = (x321-((x322>x323)&x324));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	static int8_t x326 = 3;
	volatile int64_t x328 = INT64_MIN;
	volatile uint64_t t77 = UINT64_MAX;

    t77 = (x325-((x326>x327)&x328));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x329 = 0;
	int16_t x330 = 1;
	uint8_t x331 = 15U;
	static volatile int32_t t78 = 45;

    t78 = (x329-((x330>x331)&x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x337 = 7U;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MAX;

    t79 = (x337-((x338>x339)&x340));

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = INT16_MAX;
	volatile uint64_t x343 = UINT64_MAX;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t80 = 7461197LL;

    t80 = (x341-((x342>x343)&x344));

    if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x345 = -1;
	uint64_t x348 = 96928556740685LLU;

    t81 = (x345-((x346>x347)&x348));

    if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x350 = 25U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t82 = 1;

    t82 = (x349-((x350>x351)&x352));

    if (t82 != 2302) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = INT8_MAX;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t83 = 579663U;

    t83 = (x353-((x354>x355)&x356));

    if (t83 != 127U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x357 = -52202437;
	volatile uint64_t x358 = 63606993109393LLU;
	volatile int32_t x359 = INT32_MAX;
	uint16_t x360 = 31651U;

    t84 = (x357-((x358>x359)&x360));

    if (t84 != -52202438) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x361 = 33U;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 7248U;

    t85 = (x361-((x362>x363)&x364));

    if (t85 != 33LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = -200478542;
	int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t86 = 5;

    t86 = (x365-((x366>x367)&x368));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = -1LL;
	volatile int16_t x370 = 1003;
	int8_t x371 = INT8_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t87 = 547103LL;

    t87 = (x369-((x370>x371)&x372));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 3U;
	int64_t x376 = -1278473335480671006LL;

    t88 = (x373-((x374>x375)&x376));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x377 = INT8_MIN;
	static volatile int32_t x379 = INT32_MIN;
	volatile int8_t x380 = -23;
	int32_t t89 = -544214169;

    t89 = (x377-((x378>x379)&x380));

    if (t89 != -129) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = INT8_MIN;
	uint32_t x382 = 29760U;
	int8_t x383 = -1;
	static volatile int32_t t90 = 4;

    t90 = (x381-((x382>x383)&x384));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x386 = INT32_MAX;
	uint16_t x388 = 29481U;
	volatile int32_t t91 = 338;

    t91 = (x385-((x386>x387)&x388));

    if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MIN;
	static uint16_t x391 = 3135U;
	int32_t x392 = -1;
	static int64_t t92 = INT64_MAX;

    t92 = (x389-((x390>x391)&x392));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = 4;
	uint16_t x394 = UINT16_MAX;
	static int16_t x395 = INT16_MIN;
	static volatile uint64_t t93 = 260023231352434165LLU;

    t93 = (x393-((x394>x395)&x396));

    if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x397 = UINT8_MAX;
	int64_t x398 = 5155923389646437LL;
	volatile int32_t t94 = 85570;

    t94 = (x397-((x398>x399)&x400));

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MAX;
	int8_t x403 = -41;
	volatile int32_t t95 = 0;

    t95 = (x401-((x402>x403)&x404));

    if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x405 = INT16_MIN;
	static int16_t x406 = INT16_MIN;
	static int16_t x407 = -1;
	volatile int16_t x408 = INT16_MIN;
	int32_t t96 = 8110502;

    t96 = (x405-((x406>x407)&x408));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x409 = UINT16_MAX;
	int8_t x411 = INT8_MAX;
	uint16_t x412 = UINT16_MAX;
	int32_t t97 = -66640440;

    t97 = (x409-((x410>x411)&x412));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x413 = -1;
	int8_t x416 = 24;
	volatile int32_t t98 = -23;

    t98 = (x413-((x414>x415)&x416));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x417 = INT64_MIN;
	static volatile int16_t x418 = INT16_MAX;
	uint32_t x419 = UINT32_MAX;
	volatile int64_t t99 = INT64_MIN;

    t99 = (x417-((x418>x419)&x420));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	int32_t t100 = 84229;

    t100 = (x421-((x422>x423)&x424));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x425 = -320;
	int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	volatile int64_t x428 = INT64_MIN;
	int64_t t101 = -32306861635376138LL;

    t101 = (x425-((x426>x427)&x428));

    if (t101 != -320LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = -1;
	int64_t x431 = 2449745LL;
	int16_t x432 = INT16_MAX;
	int32_t t102 = 545615311;

    t102 = (x429-((x430>x431)&x432));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;

    t103 = (x433-((x434>x435)&x436));

    if (t103 != 65534LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = -1;
	int32_t t104 = 3486;

    t104 = (x437-((x438>x439)&x440));

    if (t104 != -32769) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x441 = INT32_MAX;
	int8_t x442 = -1;
	static int32_t x443 = -1;
	volatile uint16_t x444 = 5U;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x441-((x442>x443)&x444));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x445 = 237U;
	static int16_t x446 = INT16_MAX;
	int8_t x447 = -1;
	volatile int32_t t106 = -245;

    t106 = (x445-((x446>x447)&x448));

    if (t106 != 236) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x450 = 42U;
	int32_t x452 = INT32_MIN;

    t107 = (x449-((x450>x451)&x452));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = -64060102597LL;
	int16_t x455 = -112;
	int8_t x456 = 13;

    t108 = (x453-((x454>x455)&x456));

    if (t108 != -64060102598LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x457 = 812865;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 2662108022741351LLU;
	uint64_t t109 = 2486264LLU;

    t109 = (x457-((x458>x459)&x460));

    if (t109 != 812864LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x461 = 1175820066220LLU;
	int8_t x462 = INT8_MAX;
	static int32_t x463 = INT32_MAX;
	int16_t x464 = INT16_MIN;
	uint64_t t110 = 0LLU;

    t110 = (x461-((x462>x463)&x464));

    if (t110 != 1175820066220LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = -1;
	int64_t x467 = INT64_MIN;
	static int8_t x468 = INT8_MIN;
	volatile int32_t t111 = 1;

    t111 = (x465-((x466>x467)&x468));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x470 = 1804513LL;
	static uint32_t x471 = 1966U;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t112 = 888338663965042LLU;

    t112 = (x469-((x470>x471)&x472));

    if (t112 != 12323429929982316LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x474 = 0U;
	int32_t t113 = -12747035;

    t113 = (x473-((x474>x475)&x476));

    if (t113 != 65534) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = -245347331LL;
	static int8_t x478 = -28;
	int32_t x479 = INT32_MIN;
	int64_t t114 = 913289631LL;

    t114 = (x477-((x478>x479)&x480));

    if (t114 != -245347331LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x483 = -678816742377288437LL;
	int8_t x484 = -2;

    t115 = (x481-((x482>x483)&x484));

    if (t115 != 3479971U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x485 = -17997884414236993LL;
	uint16_t x487 = 28280U;
	int16_t x488 = -1;
	int64_t t116 = -360LL;

    t116 = (x485-((x486>x487)&x488));

    if (t116 != -17997884414236993LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x490 = INT16_MIN;
	volatile int16_t x492 = INT16_MIN;

    t117 = (x489-((x490>x491)&x492));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x494 = 11;
	int16_t x495 = -1;
	int32_t x496 = INT32_MAX;
	int64_t t118 = -3LL;

    t118 = (x493-((x494>x495)&x496));

    if (t118 != -2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x497 = 0U;
	static int64_t x498 = -1LL;
	static uint64_t x499 = UINT64_MAX;
	uint16_t x500 = UINT16_MAX;
	int32_t t119 = 0;

    t119 = (x497-((x498>x499)&x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x503 = 1;
	volatile int16_t x504 = -1;
	int32_t t120 = 82843199;

    t120 = (x501-((x502>x503)&x504));

    if (t120 != -129) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x506 = -13302239180LL;
	uint16_t x507 = 6U;
	int16_t x508 = INT16_MAX;
	static volatile int32_t t121 = 76;

    t121 = (x505-((x506>x507)&x508));

    if (t121 != 5) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x509 = INT64_MIN;
	int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MAX;
	uint8_t x512 = 0U;
	int64_t t122 = INT64_MIN;

    t122 = (x509-((x510>x511)&x512));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x513 = INT32_MIN;
	static int16_t x514 = INT16_MIN;
	uint16_t x515 = 12U;
	volatile int32_t x516 = INT32_MAX;
	volatile int32_t t123 = INT32_MIN;

    t123 = (x513-((x514>x515)&x516));

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = -1;
	static int32_t x519 = INT32_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t124 = INT32_MIN;

    t124 = (x517-((x518>x519)&x520));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MAX;
	int32_t x522 = -1;
	uint64_t x523 = 7249331LLU;
	static int32_t t125 = 384;

    t125 = (x521-((x522>x523)&x524));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x525 = -1;
	int8_t x526 = -1;

    t126 = (x525-((x526>x527)&x528));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x529 = INT64_MIN;
	int8_t x530 = -1;
	int64_t x531 = INT64_MIN;
	volatile uint64_t x532 = 10448LLU;

    t127 = (x529-((x530>x531)&x532));

    if (t127 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x533 = 845675025LLU;
	uint32_t x536 = UINT32_MAX;
	uint64_t t128 = 27861290541980LLU;

    t128 = (x533-((x534>x535)&x536));

    if (t128 != 845675024LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x537 = INT16_MAX;
	static int64_t x538 = INT64_MAX;
	int32_t x539 = -1;
	int32_t x540 = INT32_MIN;
	volatile int32_t t129 = -26159;

    t129 = (x537-((x538>x539)&x540));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x543 = 31;
	int32_t t130 = -11433331;

    t130 = (x541-((x542>x543)&x544));

    if (t130 != -129) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x545 = -1;
	int8_t x546 = INT8_MAX;
	uint32_t x547 = UINT32_MAX;
	uint32_t x548 = 1242024882U;
	static uint32_t t131 = UINT32_MAX;

    t131 = (x545-((x546>x547)&x548));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x549 = 204;
	volatile int8_t x550 = 30;
	uint16_t x551 = 490U;
	volatile int16_t x552 = INT16_MIN;
	static int32_t t132 = -487977110;

    t132 = (x549-((x550>x551)&x552));

    if (t132 != 204) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MIN;
	static int16_t x554 = 134;
	int64_t x555 = -1LL;
	uint64_t x556 = 5883446475347316LLU;

    t133 = (x553-((x554>x555)&x556));

    if (t133 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x558 = 7;
	static volatile int8_t x559 = INT8_MAX;
	int8_t x560 = -1;

    t134 = (x557-((x558>x559)&x560));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MAX;
	int8_t x562 = 14;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t135 = -3;

    t135 = (x561-((x562>x563)&x564));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = 1;
	uint32_t x566 = 10763U;

    t136 = (x565-((x566>x567)&x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x570 = INT8_MIN;
	volatile uint16_t x571 = 3031U;
	static int64_t x572 = 98LL;
	int64_t t137 = 9427304LL;

    t137 = (x569-((x570>x571)&x572));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x574 = 191801920751021551LLU;
	int8_t x576 = 55;
	volatile int32_t t138 = -25678;

    t138 = (x573-((x574>x575)&x576));

    if (t138 != -32769) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x578 = INT32_MIN;
	uint8_t x579 = 0U;
	int32_t x580 = 96996646;

    t139 = (x577-((x578>x579)&x580));

    if (t139 != 1761684048412LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = -77;
	int32_t x582 = INT32_MIN;

    t140 = (x581-((x582>x583)&x584));

    if (t140 != -77) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x585 = 3U;
	volatile int16_t x586 = INT16_MIN;
	int64_t x588 = INT64_MIN;

    t141 = (x585-((x586>x587)&x588));

    if (t141 != 3LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x589 = 16;
	int8_t x590 = -1;
	int16_t x591 = INT16_MAX;
	static int32_t x592 = INT32_MAX;

    t142 = (x589-((x590>x591)&x592));

    if (t142 != 16) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = 230;
	int8_t x594 = INT8_MIN;
	int8_t x595 = 0;
	int8_t x596 = -1;
	int32_t t143 = -1;

    t143 = (x593-((x594>x595)&x596));

    if (t143 != 230) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x597 = INT32_MIN;
	uint64_t x598 = UINT64_MAX;
	volatile int16_t x599 = -2966;
	int16_t x600 = INT16_MIN;
	static int32_t t144 = INT32_MIN;

    t144 = (x597-((x598>x599)&x600));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x601 = -1;
	uint8_t x602 = 0U;
	int32_t x603 = INT32_MIN;
	volatile int8_t x604 = 60;
	static int32_t t145 = 351921;

    t145 = (x601-((x602>x603)&x604));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x605 = UINT64_MAX;
	static volatile uint64_t t146 = UINT64_MAX;

    t146 = (x605-((x606>x607)&x608));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MIN;
	volatile int8_t x611 = 1;
	int64_t x612 = -1LL;

    t147 = (x609-((x610>x611)&x612));

    if (t147 != -32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x613 = 1051;
	int8_t x614 = -1;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -1LL;

    t148 = (x613-((x614>x615)&x616));

    if (t148 != 1050LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x618 = INT32_MAX;
	int16_t x619 = INT16_MIN;
	static volatile int64_t t149 = INT64_MIN;

    t149 = (x617-((x618>x619)&x620));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = INT32_MIN;
	volatile int8_t x622 = INT8_MIN;
	int8_t x624 = INT8_MAX;
	static int32_t t150 = INT32_MIN;

    t150 = (x621-((x622>x623)&x624));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x625 = UINT64_MAX;
	int8_t x626 = 6;
	volatile uint64_t x627 = 61468LLU;
	static int32_t x628 = INT32_MIN;

    t151 = (x625-((x626>x627)&x628));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x633 = INT64_MIN;
	uint32_t x634 = 19434U;
	int64_t t152 = INT64_MIN;

    t152 = (x633-((x634>x635)&x636));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = -1;
	volatile uint32_t x638 = 368346839U;
	static volatile int64_t x639 = INT64_MIN;
	static int32_t x640 = -25;
	int32_t t153 = -7119;

    t153 = (x637-((x638>x639)&x640));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x641 = UINT16_MAX;
	volatile int64_t x642 = INT64_MAX;
	static int16_t x643 = INT16_MIN;
	volatile uint64_t t154 = 3754520321713089LLU;

    t154 = (x641-((x642>x643)&x644));

    if (t154 != 65535LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x645 = -31383505266LL;
	int64_t x646 = -71913266695LL;
	uint16_t x647 = 3138U;
	int64_t x648 = INT64_MAX;
	static volatile int64_t t155 = -3614556652544540293LL;

    t155 = (x645-((x646>x647)&x648));

    if (t155 != -31383505266LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x649 = 106;
	uint16_t x650 = 232U;
	int16_t x651 = INT16_MAX;
	volatile int64_t t156 = -34707819841249LL;

    t156 = (x649-((x650>x651)&x652));

    if (t156 != 106LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x654 = 14U;
	int32_t x655 = -423658;
	static uint64_t x656 = 42069920LLU;
	volatile uint64_t t157 = 30144563781446760LLU;

    t157 = (x653-((x654>x655)&x656));

    if (t157 != 4294967295LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x658 = 2LLU;
	int64_t x659 = INT64_MIN;
	volatile int8_t x660 = INT8_MAX;
	volatile int64_t t158 = 15964811LL;

    t158 = (x657-((x658>x659)&x660));

    if (t158 != -6069569LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = 61;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = INT64_MIN;
	static uint64_t x664 = 54545201719LLU;
	uint64_t t159 = 19479188697739088LLU;

    t159 = (x661-((x662>x663)&x664));

    if (t159 != 60LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = 1;
	int16_t x667 = INT16_MIN;
	int64_t x668 = -1LL;
	volatile int64_t t160 = 65846857132LL;

    t160 = (x665-((x666>x667)&x668));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x669 = -20;
	int64_t x670 = INT64_MIN;
	int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MIN;
	volatile int32_t t161 = 0;

    t161 = (x669-((x670>x671)&x672));

    if (t161 != -20) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x673 = 575839704284222LLU;
	volatile uint8_t x674 = 2U;
	static int64_t x675 = -15198138624442062LL;
	volatile int8_t x676 = -6;
	uint64_t t162 = 60635333098LLU;

    t162 = (x673-((x674>x675)&x676));

    if (t162 != 575839704284222LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x677 = 630527205822LLU;
	int8_t x678 = 1;
	int64_t x679 = INT64_MAX;
	static volatile uint16_t x680 = UINT16_MAX;

    t163 = (x677-((x678>x679)&x680));

    if (t163 != 630527205822LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = 3591668;
	int8_t x682 = INT8_MAX;
	int32_t t164 = -2805432;

    t164 = (x681-((x682>x683)&x684));

    if (t164 != 3591668) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x685 = 0;
	static int64_t x686 = -6929006LL;
	uint64_t x687 = 2980256LLU;
	volatile uint8_t x688 = 4U;

    t165 = (x685-((x686>x687)&x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x690 = INT8_MAX;
	int8_t x691 = 14;
	int8_t x692 = 26;
	volatile int32_t t166 = -853;

    t166 = (x689-((x690>x691)&x692));

    if (t166 != -35073) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x693 = -1;
	static uint8_t x696 = UINT8_MAX;
	volatile int32_t t167 = 1077023;

    t167 = (x693-((x694>x695)&x696));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x697 = 2U;
	int16_t x698 = INT16_MIN;
	uint32_t x699 = 25U;
	uint32_t x700 = UINT32_MAX;
	uint32_t t168 = 1467315992U;

    t168 = (x697-((x698>x699)&x700));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x701 = 8203054LLU;
	uint64_t x702 = UINT64_MAX;
	int16_t x703 = 1753;
	int16_t x704 = -1;
	volatile uint64_t t169 = 22213LLU;

    t169 = (x701-((x702>x703)&x704));

    if (t169 != 8203053LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = INT64_MIN;
	static volatile uint8_t x706 = UINT8_MAX;
	uint8_t x707 = UINT8_MAX;
	uint16_t x708 = 32U;
	int64_t t170 = INT64_MIN;

    t170 = (x705-((x706>x707)&x708));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x709 = -1;
	int16_t x710 = 1558;
	int16_t x711 = INT16_MIN;
	int8_t x712 = -8;
	volatile int32_t t171 = 309;

    t171 = (x709-((x710>x711)&x712));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x714 = UINT8_MAX;
	volatile int8_t x715 = 15;
	uint8_t x716 = 15U;
	volatile int32_t t172 = -237;

    t172 = (x713-((x714>x715)&x716));

    if (t172 != 2147483646) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x717 = INT8_MIN;
	static int64_t x718 = -1LL;
	static uint64_t x719 = UINT64_MAX;
	uint8_t x720 = 62U;
	int32_t t173 = 27;

    t173 = (x717-((x718>x719)&x720));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = INT8_MIN;
	volatile int8_t x722 = INT8_MIN;
	int8_t x723 = -1;
	volatile int16_t x724 = INT16_MIN;
	volatile int32_t t174 = 16476;

    t174 = (x721-((x722>x723)&x724));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x726 = 9764U;
	uint32_t x727 = 14760U;
	int8_t x728 = INT8_MIN;
	volatile uint64_t t175 = 473LLU;

    t175 = (x725-((x726>x727)&x728));

    if (t175 != 1358058LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint8_t x730 = UINT8_MAX;
	uint64_t x731 = UINT64_MAX;
	static int64_t x732 = INT64_MIN;
	uint64_t t176 = UINT64_MAX;

    t176 = (x729-((x730>x731)&x732));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = INT64_MAX;
	uint8_t x734 = 1U;
	int64_t x736 = INT64_MIN;
	volatile int64_t t177 = INT64_MAX;

    t177 = (x733-((x734>x735)&x736));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x737 = 73468639U;
	volatile int32_t x738 = -143728130;
	int16_t x739 = -1;
	volatile uint32_t t178 = 38777594U;

    t178 = (x737-((x738>x739)&x740));

    if (t178 != 73468639U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x742 = UINT32_MAX;
	int8_t x743 = INT8_MAX;
	uint32_t x744 = 75557U;

    t179 = (x741-((x742>x743)&x744));

    if (t179 != -2LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x745 = UINT8_MAX;
	int16_t x747 = INT16_MIN;
	uint64_t x748 = UINT64_MAX;
	uint64_t t180 = 4188336LLU;

    t180 = (x745-((x746>x747)&x748));

    if (t180 != 254LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = 1;
	int8_t x750 = INT8_MAX;
	int32_t x751 = 53949408;
	volatile int64_t t181 = -596LL;

    t181 = (x749-((x750>x751)&x752));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x753 = 383325U;
	volatile int64_t x754 = INT64_MIN;
	int64_t x755 = 2LL;
	uint8_t x756 = 49U;
	volatile uint32_t t182 = 860479U;

    t182 = (x753-((x754>x755)&x756));

    if (t182 != 383325U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x758 = INT8_MAX;
	static int32_t x759 = -1;
	volatile int32_t t183 = -2687;

    t183 = (x757-((x758>x759)&x760));

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = 2466697;
	int16_t x762 = -50;
	static int64_t x764 = -106LL;
	volatile int64_t t184 = -6305264551LL;

    t184 = (x761-((x762>x763)&x764));

    if (t184 != 2466697LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint8_t x765 = 56U;
	int64_t x766 = INT64_MIN;
	uint32_t x767 = UINT32_MAX;
	static volatile uint8_t x768 = 19U;
	volatile int32_t t185 = 10716;

    t185 = (x765-((x766>x767)&x768));

    if (t185 != 56) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = INT16_MIN;
	int8_t x770 = INT8_MIN;
	volatile int32_t x771 = INT32_MIN;
	volatile uint32_t t186 = 2U;

    t186 = (x769-((x770>x771)&x772));

    if (t186 != 4294934527U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x774 = -1;
	static int8_t x775 = INT8_MIN;
	volatile uint16_t x776 = UINT16_MAX;

    t187 = (x773-((x774>x775)&x776));

    if (t187 != -257LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = INT32_MIN;
	int64_t x778 = -116942554300156060LL;
	int32_t x779 = INT32_MAX;
	uint16_t x780 = UINT16_MAX;

    t188 = (x777-((x778>x779)&x780));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x781 = 3;

    t189 = (x781-((x782>x783)&x784));

    if (t189 != 2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = INT8_MAX;
	uint8_t x787 = 1U;
	static int32_t x788 = 63524345;
	static int32_t t190 = 13575713;

    t190 = (x785-((x786>x787)&x788));

    if (t190 != 126) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x789 = -448628345LL;
	volatile int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MIN;
	uint64_t x792 = 8637821066LLU;
	uint64_t t191 = 427253639LLU;

    t191 = (x789-((x790>x791)&x792));

    if (t191 != 18446744073260923271LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x793 = 1;
	static int32_t x794 = -222808;
	uint16_t x795 = UINT16_MAX;
	int32_t x796 = INT32_MAX;
	int32_t t192 = 480515339;

    t192 = (x793-((x794>x795)&x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = 2;
	int16_t x798 = INT16_MAX;
	int32_t x799 = INT32_MAX;
	int64_t x800 = INT64_MIN;
	volatile int64_t t193 = -46996930770LL;

    t193 = (x797-((x798>x799)&x800));

    if (t193 != 2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x801 = 3U;
	int32_t x802 = INT32_MIN;
	static int16_t x803 = -1;
	int16_t x804 = 3737;
	int32_t t194 = 259756;

    t194 = (x801-((x802>x803)&x804));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x806 = INT16_MAX;
	uint16_t x807 = 4U;
	int32_t x808 = INT32_MIN;
	static volatile int32_t t195 = -124975;

    t195 = (x805-((x806>x807)&x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x809 = INT8_MIN;
	int16_t x810 = INT16_MAX;
	volatile uint32_t x811 = UINT32_MAX;
	volatile uint16_t x812 = UINT16_MAX;

    t196 = (x809-((x810>x811)&x812));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x813 = 364988541U;
	static uint64_t x814 = 3744993979LLU;
	static uint32_t t197 = 5U;

    t197 = (x813-((x814>x815)&x816));

    if (t197 != 364988541U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x817 = -7;
	int16_t x818 = -1;
	uint32_t x819 = UINT32_MAX;
	int16_t x820 = INT16_MAX;
	static volatile int32_t t198 = 616;

    t198 = (x817-((x818>x819)&x820));

    if (t198 != -7) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x822 = INT64_MIN;
	static volatile int8_t x823 = INT8_MIN;
	static int8_t x824 = 40;

    t199 = (x821-((x822>x823)&x824));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

