
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

static volatile int64_t x5 = INT64_MIN;
int32_t x6 = -1;
int64_t x8 = INT64_MIN;
static uint32_t x10 = 5724417U;
volatile int64_t x12 = 70063522LL;
static int32_t x13 = -5;
int64_t x16 = -1LL;
volatile int64_t t3 = 360LL;
static volatile int32_t t4 = -176;
static int32_t x25 = -1;
uint16_t x32 = 245U;
uint16_t x33 = UINT16_MAX;
int8_t x42 = -13;
uint32_t x46 = 10U;
static int64_t x55 = 565LL;
uint32_t x59 = 3886U;
volatile int32_t t15 = INT32_MAX;
static uint8_t x72 = UINT8_MAX;
static uint8_t x74 = UINT8_MAX;
uint64_t x75 = 55LLU;
int32_t t17 = -91593093;
uint32_t x77 = UINT32_MAX;
uint16_t x79 = 122U;
volatile uint64_t t18 = 11504837150058097LLU;
int64_t x81 = -1LL;
uint32_t x83 = 1597U;
int16_t x98 = -1;
uint32_t x100 = 491242959U;
int64_t x103 = INT64_MIN;
int64_t t22 = 122LL;
uint16_t x105 = UINT16_MAX;
int64_t x107 = -1LL;
uint32_t x122 = 16U;
int8_t x124 = 0;
int64_t x126 = 2624542608442LL;
int8_t x127 = 2;
int8_t x140 = 1;
int16_t x143 = -14648;
volatile uint64_t x145 = 83LLU;
int8_t x147 = -34;
uint64_t x150 = UINT64_MAX;
volatile uint32_t x155 = 383U;
uint64_t t32 = 9728LLU;
static int8_t x158 = 39;
volatile uint32_t t34 = 1220119U;
volatile uint8_t x175 = 51U;
int32_t t35 = 22219944;
int16_t x180 = 633;
static uint8_t x187 = 0U;
int32_t x188 = -1;
volatile uint64_t t39 = 304968LLU;
volatile uint32_t x202 = UINT32_MAX;
int8_t x211 = INT8_MIN;
uint8_t x222 = 11U;
static int64_t x226 = 69007887404129LL;
volatile uint8_t x229 = UINT8_MAX;
int8_t x232 = 7;
int16_t x240 = INT16_MIN;
int8_t x245 = INT8_MIN;
uint8_t x248 = 27U;
int64_t x267 = -6438918432337986LL;
volatile int64_t t55 = 2841229923LL;
int32_t t57 = 30212;
int8_t x280 = INT8_MIN;
uint16_t x284 = 60U;
int8_t x288 = INT8_MIN;
int16_t x290 = INT16_MIN;
uint64_t x294 = 41LLU;
volatile int32_t t63 = -8769;
volatile uint32_t x305 = 52102U;
int64_t x306 = -1LL;
uint16_t x308 = 252U;
int8_t x311 = 1;
uint64_t x314 = 765797039148LLU;
static int32_t x320 = INT32_MIN;
uint16_t x323 = 13U;
uint64_t x327 = 6498129625107LLU;
int32_t t70 = -16;
int64_t x337 = -3504627506772LL;
int32_t x340 = INT32_MIN;
int16_t x341 = -1;
uint8_t x355 = 62U;
int32_t x359 = -54;
volatile uint64_t t76 = 1575590521407LLU;
int16_t x361 = INT16_MIN;
uint64_t x362 = UINT64_MAX;
int64_t x365 = 3932577583802522779LL;
static int8_t x374 = INT8_MAX;
volatile uint64_t x377 = 512961577216754653LLU;
int32_t x381 = -1;
int16_t x386 = INT16_MIN;
volatile uint32_t t84 = 0U;
volatile int16_t x395 = -1063;
volatile int8_t x403 = INT8_MIN;
volatile uint32_t t87 = 224449U;
volatile int16_t x405 = -1;
int32_t x406 = -30;
uint16_t x408 = 560U;
static volatile int64_t t89 = 2093397027LL;
static uint16_t x415 = 47U;
uint64_t x416 = 225023553806091LLU;
int64_t x426 = 5841915055LL;
uint64_t x437 = 333LLU;
int16_t x447 = INT16_MIN;
uint16_t x451 = UINT16_MAX;
uint32_t x452 = UINT32_MAX;
uint8_t x454 = 1U;
uint64_t x457 = 947101990LLU;
volatile uint64_t t100 = 85785155369975732LLU;
volatile uint32_t x467 = 259U;
int64_t x476 = -8297470LL;
static uint64_t x478 = UINT64_MAX;
static uint32_t x479 = UINT32_MAX;
int8_t x484 = INT8_MAX;
static volatile int32_t t107 = 923;
int8_t x489 = INT8_MIN;
int64_t x490 = 8024959951198314LL;
static int16_t x494 = INT16_MAX;
int32_t x495 = INT32_MIN;
int64_t x503 = -1LL;
volatile int8_t x504 = INT8_MIN;
static uint32_t x510 = 0U;
volatile uint8_t x514 = UINT8_MAX;
volatile int16_t x517 = INT16_MIN;
static int64_t x523 = 15470142577191756LL;
int8_t x525 = -1;
static uint8_t x534 = 41U;
int16_t x538 = INT16_MIN;
int8_t x539 = -1;
uint16_t x548 = 14U;
volatile int8_t x554 = INT8_MAX;
uint32_t t121 = 20165U;
int64_t x557 = 669453771110439LL;
volatile int8_t x574 = -1;
int64_t x585 = -120616141992648138LL;
static uint64_t x586 = UINT64_MAX;
uint16_t x593 = 436U;
int16_t x594 = INT16_MIN;
int64_t x595 = -1LL;
volatile int16_t x603 = -3;
static volatile int32_t t131 = -207;
int8_t x618 = INT8_MIN;
uint16_t x622 = UINT16_MAX;
volatile int32_t t134 = 1862237;
volatile int8_t x633 = INT8_MAX;
int64_t t136 = -283392LL;
uint32_t x641 = 5460U;
volatile int32_t x642 = INT32_MIN;
volatile int8_t x646 = INT8_MIN;
int64_t x655 = -1LL;
uint8_t x660 = UINT8_MAX;
static uint8_t x665 = 13U;
int8_t x667 = -5;
int64_t x668 = INT64_MAX;
static volatile int64_t t143 = -2010288783433962429LL;
static volatile int16_t x669 = -513;
static uint64_t x674 = 745LLU;
int16_t x676 = -1;
static int32_t t145 = -1974;
int16_t x677 = INT16_MIN;
int32_t t146 = 63;
volatile int64_t x682 = INT64_MAX;
uint16_t x694 = 21U;
int8_t x702 = INT8_MAX;
static volatile int64_t x703 = INT64_MIN;
int16_t x709 = INT16_MAX;
static volatile uint64_t x716 = 17056860882461LLU;
uint64_t t155 = 263644721501LLU;
int8_t x731 = 54;
static int8_t x737 = 0;
int32_t x746 = -1;
volatile int32_t x762 = INT32_MIN;
uint32_t x765 = UINT32_MAX;
uint8_t x766 = 10U;
static uint16_t x767 = 455U;
uint32_t t168 = 7884834U;
uint16_t x785 = 17U;
static uint16_t x794 = 14492U;
int32_t x796 = -1;
int8_t x797 = -1;
uint16_t x803 = UINT16_MAX;
int64_t x805 = -1LL;
static int16_t x806 = INT16_MAX;
int16_t x807 = INT16_MAX;
volatile int64_t x813 = -1LL;
static int64_t x814 = -1LL;
int32_t t179 = 89879;
volatile uint16_t x822 = 11552U;
int8_t x823 = 1;
int64_t x828 = -4023685370LL;
int8_t x831 = INT8_MAX;
static volatile int32_t t182 = -63793;
uint16_t x847 = UINT16_MAX;
static uint64_t x854 = UINT64_MAX;
volatile uint32_t x858 = 62U;
int32_t x860 = INT32_MIN;
static int16_t x862 = INT16_MIN;
int32_t t189 = -44553;
uint64_t x875 = 18131362LLU;
uint64_t x876 = 1LLU;
static volatile uint8_t x880 = 9U;
int64_t x897 = -1LL;
int16_t x900 = INT16_MIN;
static uint16_t x903 = 129U;
volatile uint64_t t197 = 10673982013LLU;
int32_t x920 = INT32_MIN;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = 0U;
	static int32_t x3 = -51213;
	int64_t x4 = INT64_MIN;
	uint64_t t0 = 2077728293751330LLU;

    t0 = (x1-((x2==x3)^x4));

    if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = -6902;
	int64_t t1 = -6LL;

    t1 = (x5-((x6==x7)^x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 86LL;
	int32_t x11 = -1;
	static int64_t t2 = 8261099738LL;

    t2 = (x9-((x10==x11)^x12));

    if (t2 != -70063436LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = INT8_MAX;
	static int8_t x15 = 1;

    t3 = (x13-((x14==x15)^x16));

    if (t3 != -4LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -14;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;

    t4 = (x17-((x18==x19)^x20));

    if (t4 != -65549) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint32_t x22 = 7375570U;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = 1;
	volatile int32_t t5 = 70552;

    t5 = (x21-((x22==x23)^x24));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	uint64_t x27 = 6040LLU;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = -4151LL;

    t6 = (x25-((x26==x27)^x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 104U;
	int16_t x30 = 244;
	int32_t x31 = -1;
	volatile int32_t t7 = -781047;

    t7 = (x29-((x30==x31)^x32));

    if (t7 != -141) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = -1;
	volatile int16_t x35 = 1;
	static uint32_t x36 = UINT32_MAX;
	static uint32_t t8 = 156U;

    t8 = (x33-((x34==x35)^x36));

    if (t8 != 65536U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	static uint32_t x38 = 701U;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = -21;

    t9 = (x37-((x38==x39)^x40));

    if (t9 != -2147483520) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	static int32_t x43 = 33;
	int16_t x44 = 48;
	int32_t t10 = 38729653;

    t10 = (x41-((x42==x43)^x44));

    if (t10 != -49) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int8_t x47 = INT8_MAX;
	volatile int64_t x48 = 0LL;
	static int64_t t11 = 3351070958822425LL;

    t11 = (x45-((x46==x47)^x48));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 5868U;
	static volatile int16_t x51 = -1;
	int8_t x52 = 42;
	int32_t t12 = 3469;

    t12 = (x49-((x50==x51)^x52));

    if (t12 != -170) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 73U;
	static uint8_t x54 = 14U;
	uint64_t x56 = 3109617LLU;
	uint64_t t13 = 263388995136368040LLU;

    t13 = (x53-((x54==x55)^x56));

    if (t13 != 18446744073706442072LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	uint8_t x60 = 38U;
	int64_t t14 = -508515371712LL;

    t14 = (x57-((x58==x59)^x60));

    if (t14 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	int16_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	static int32_t x64 = INT32_MIN;

    t15 = (x61-((x62==x63)^x64));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 234;
	int8_t x70 = -1;
	uint32_t x71 = 39726527U;
	volatile int32_t t16 = 43933876;

    t16 = (x69-((x70==x71)^x72));

    if (t16 != -21) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 7U;
	int32_t x76 = 90;

    t17 = (x73-((x74==x75)^x76));

    if (t17 != -83) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = UINT64_MAX;
	uint64_t x80 = UINT64_MAX;

    t18 = (x77-((x78==x79)^x80));

    if (t18 != 4294967296LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x82 = 1;
	uint32_t x84 = 174475U;
	int64_t t19 = -29LL;

    t19 = (x81-((x82==x83)^x84));

    if (t19 != -174476LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = -15630;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MAX;
	static volatile int16_t x88 = INT16_MIN;
	volatile int32_t t20 = -11;

    t20 = (x85-((x86==x87)^x88));

    if (t20 != 17138) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MIN;
	volatile uint8_t x99 = 21U;
	uint32_t t21 = 684U;

    t21 = (x97-((x98==x99)^x100));

    if (t21 != 1656240689U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = 4U;
	int64_t x104 = -1LL;

    t22 = (x101-((x102==x103)^x104));

    if (t22 != 65536LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x106 = -206241LL;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -17;

    t23 = (x105-((x106==x107)^x108));

    if (t23 != 98303) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = INT64_MIN;
	static uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t24 = 61329318465600LL;

    t24 = (x109-((x110==x111)^x112));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	int32_t x123 = -39;
	volatile int32_t t25 = -636768578;

    t25 = (x121-((x122==x123)^x124));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = 3805640;
	int32_t x128 = 215;
	volatile int32_t t26 = -22;

    t26 = (x125-((x126==x127)^x128));

    if (t26 != 3805425) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = -1;
	static int16_t x130 = 7432;
	uint64_t x131 = 344099LLU;
	int8_t x132 = 1;
	volatile int32_t t27 = 843331;

    t27 = (x129-((x130==x131)^x132));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x137 = 183393071U;
	int16_t x138 = INT16_MIN;
	static uint32_t x139 = 1926279287U;
	static volatile uint32_t t28 = 5U;

    t28 = (x137-((x138==x139)^x140));

    if (t28 != 183393070U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = INT64_MIN;
	static uint8_t x142 = UINT8_MAX;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t29 = 309051401298406599LL;

    t29 = (x141-((x142==x143)^x144));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x146 = -7315707078LL;
	static volatile uint32_t x148 = 19545099U;
	uint64_t t30 = 2047433131LLU;

    t30 = (x145-((x146==x147)^x148));

    if (t30 != 18446744073690006600LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x149 = 0U;
	static volatile int16_t x151 = 8576;
	uint16_t x152 = 1U;
	static volatile int32_t t31 = 7546933;

    t31 = (x149-((x150==x151)^x152));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x153 = 100267LLU;
	static uint64_t x154 = UINT64_MAX;
	int16_t x156 = INT16_MIN;

    t32 = (x153-((x154==x155)^x156));

    if (t32 != 133035LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x157 = 2346332U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = -1;
	uint32_t t33 = 194676U;

    t33 = (x157-((x158==x159)^x160));

    if (t33 != 2346333U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = -7;
	static uint8_t x162 = 1U;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = 2981U;

    t34 = (x161-((x162==x163)^x164));

    if (t34 != 4294964308U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x173 = 1U;
	int16_t x174 = 19;
	static int32_t x176 = INT32_MAX;

    t35 = (x173-((x174==x175)^x176));

    if (t35 != -2147483646) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile uint16_t x178 = 664U;
	int8_t x179 = INT8_MAX;
	int32_t t36 = -626188235;

    t36 = (x177-((x178==x179)^x180));

    if (t36 != 64902) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x181 = 58U;
	int32_t x182 = INT32_MIN;
	static uint8_t x183 = 1U;
	int16_t x184 = -3;
	int32_t t37 = 1;

    t37 = (x181-((x182==x183)^x184));

    if (t37 != 61) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x185 = -1;
	int16_t x186 = 7851;
	int32_t t38 = 876963;

    t38 = (x185-((x186==x187)^x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = 301865860583211581LLU;
	int16_t x190 = INT16_MIN;
	static int8_t x191 = 21;
	int8_t x192 = -21;

    t39 = (x189-((x190==x191)^x192));

    if (t39 != 301865860583211602LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	static int64_t x194 = -25529769967881LL;
	int8_t x195 = -31;
	static int16_t x196 = INT16_MAX;
	volatile uint64_t t40 = 3814922152011LLU;

    t40 = (x193-((x194==x195)^x196));

    if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x197 = -1;
	uint32_t x198 = 127387U;
	int64_t x199 = INT64_MAX;
	int32_t x200 = -201291;
	static volatile int32_t t41 = -1065;

    t41 = (x197-((x198==x199)^x200));

    if (t41 != 201290) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x201 = 4U;
	int8_t x203 = -1;
	static uint64_t x204 = 24001391719912LLU;
	volatile uint64_t t42 = 233LLU;

    t42 = (x201-((x202==x203)^x204));

    if (t42 != 18446720072317831707LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x209 = 42U;
	volatile int32_t x210 = INT32_MAX;
	int32_t x212 = INT32_MAX;
	int32_t t43 = 4556781;

    t43 = (x209-((x210==x211)^x212));

    if (t43 != -2147483605) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = UINT32_MAX;
	uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = 1;
	uint64_t t44 = 5020028LLU;

    t44 = (x213-((x214==x215)^x216));

    if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x221 = -1LL;
	static volatile int8_t x223 = 59;
	static int32_t x224 = 25;
	volatile int64_t t45 = 43643LL;

    t45 = (x221-((x222==x223)^x224));

    if (t45 != -26LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x225 = -13088982;
	static volatile int16_t x227 = INT16_MIN;
	static volatile int16_t x228 = INT16_MIN;
	int32_t t46 = 15181;

    t46 = (x225-((x226==x227)^x228));

    if (t46 != -13056214) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t t47 = -484855487;

    t47 = (x229-((x230==x231)^x232));

    if (t47 != 248) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x233 = -1LL;
	static int16_t x234 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 1146U;
	volatile int64_t t48 = 170816304973372LL;

    t48 = (x233-((x234==x235)^x236));

    if (t48 != -1147LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x237 = -1LL;
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = 2147;
	volatile int64_t t49 = 3413207683LL;

    t49 = (x237-((x238==x239)^x240));

    if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x241 = -7;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MAX;
	volatile int16_t x244 = 1;
	volatile int32_t t50 = 445975;

    t50 = (x241-((x242==x243)^x244));

    if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int32_t t51 = -36;

    t51 = (x245-((x246==x247)^x248));

    if (t51 != -154) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = 47;
	static int32_t x250 = 0;
	int32_t x251 = 12;
	uint64_t x252 = 87LLU;
	uint64_t t52 = 1070LLU;

    t52 = (x249-((x250==x251)^x252));

    if (t52 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MAX;
	int64_t t53 = -30772996856749763LL;

    t53 = (x253-((x254==x255)^x256));

    if (t53 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x257 = INT8_MIN;
	static uint16_t x258 = 3U;
	int8_t x259 = INT8_MAX;
	uint8_t x260 = 2U;
	static volatile int32_t t54 = 173;

    t54 = (x257-((x258==x259)^x260));

    if (t54 != -130) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x265 = -23345179LL;
	static int32_t x266 = -13;
	int8_t x268 = -7;

    t55 = (x265-((x266==x267)^x268));

    if (t55 != -23345172LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1LL;
	static int64_t x272 = -236439024332634LL;
	volatile int64_t t56 = 2LL;

    t56 = (x269-((x270==x271)^x272));

    if (t56 != 236436876848985LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x273 = 7;
	static volatile int64_t x274 = INT64_MAX;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = 1;

    t57 = (x273-((x274==x275)^x276));

    if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x277 = 2U;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 364U;
	volatile int32_t t58 = 0;

    t58 = (x277-((x278==x279)^x280));

    if (t58 != 130) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = -1;
	uint32_t x283 = 1357U;
	volatile int32_t t59 = 106;

    t59 = (x281-((x282==x283)^x284));

    if (t59 != 2147483587) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = 0;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 8LLU;
	volatile int32_t t60 = 1350;

    t60 = (x285-((x286==x287)^x288));

    if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = -1;
	volatile int64_t t61 = -4390854436207LL;

    t61 = (x289-((x290==x291)^x292));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x293 = 1U;
	uint8_t x295 = 1U;
	static int64_t x296 = -802095763980203022LL;
	volatile int64_t t62 = 17420145884815254LL;

    t62 = (x293-((x294==x295)^x296));

    if (t62 != 802095763980203023LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x297 = INT16_MIN;
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;

    t63 = (x297-((x298==x299)^x300));

    if (t63 != -32640) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x301 = 323590827413438LLU;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	uint32_t x304 = 53264U;
	volatile uint64_t t64 = 24870LLU;

    t64 = (x301-((x302==x303)^x304));

    if (t64 != 323590827360174LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x307 = UINT16_MAX;
	uint32_t t65 = 0U;

    t65 = (x305-((x306==x307)^x308));

    if (t65 != 51850U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x309 = -1;
	volatile int8_t x310 = 5;
	int8_t x312 = -1;
	int32_t t66 = -2022;

    t66 = (x309-((x310==x311)^x312));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x313 = INT8_MAX;
	static uint32_t x315 = 31U;
	static uint64_t x316 = 56887870LLU;
	volatile uint64_t t67 = 10006LLU;

    t67 = (x313-((x314==x315)^x316));

    if (t67 != 18446744073652663873LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x317 = -1LL;
	static int32_t x318 = INT32_MIN;
	uint8_t x319 = 38U;
	int64_t t68 = -770580511866LL;

    t68 = (x317-((x318==x319)^x320));

    if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = -34;
	static uint64_t x322 = UINT64_MAX;
	uint64_t x324 = 65551LLU;
	uint64_t t69 = 4008296896425LLU;

    t69 = (x321-((x322==x323)^x324));

    if (t69 != 18446744073709486031LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x325 = INT8_MIN;
	uint64_t x326 = 12121545218204LLU;
	static int16_t x328 = -1;

    t70 = (x325-((x326==x327)^x328));

    if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x333 = 17U;
	static int16_t x334 = -1;
	uint16_t x335 = 496U;
	static volatile int8_t x336 = -20;
	volatile int32_t t71 = 16;

    t71 = (x333-((x334==x335)^x336));

    if (t71 != 37) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x338 = -1;
	static uint64_t x339 = 345500630256LLU;
	static volatile int64_t t72 = 28102398119411422LL;

    t72 = (x337-((x338==x339)^x340));

    if (t72 != -3502480023124LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x342 = 1U;
	int32_t x343 = -1;
	volatile int8_t x344 = INT8_MAX;
	int32_t t73 = -117743248;

    t73 = (x341-((x342==x343)^x344));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = -92;
	int16_t x350 = 3379;
	int64_t x351 = 8LL;
	int8_t x352 = 2;
	volatile int32_t t74 = -418;

    t74 = (x349-((x350==x351)^x352));

    if (t74 != -94) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = 125534;
	static int8_t x354 = -15;
	int8_t x356 = INT8_MIN;
	volatile int32_t t75 = 65671;

    t75 = (x353-((x354==x355)^x356));

    if (t75 != 125662) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x357 = 3560975587897841LLU;
	uint16_t x358 = UINT16_MAX;
	int16_t x360 = -1;

    t76 = (x357-((x358==x359)^x360));

    if (t76 != 3560975587897842LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x363 = INT16_MIN;
	uint16_t x364 = 2U;
	int32_t t77 = 104576;

    t77 = (x361-((x362==x363)^x364));

    if (t77 != -32770) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MAX;
	static int64_t t78 = 4953646608LL;

    t78 = (x365-((x366==x367)^x368));

    if (t78 != 3932577583802490012LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	static volatile uint8_t x370 = 0U;
	int64_t x371 = -35798LL;
	volatile int16_t x372 = -49;
	static uint64_t t79 = 90300769319472637LLU;

    t79 = (x369-((x370==x371)^x372));

    if (t79 != 48LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x373 = 5U;
	int16_t x375 = INT16_MIN;
	int32_t x376 = -1;
	uint32_t t80 = 324100U;

    t80 = (x373-((x374==x375)^x376));

    if (t80 != 6U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x378 = 0;
	static volatile int16_t x379 = 1406;
	uint8_t x380 = UINT8_MAX;
	volatile uint64_t t81 = 829553950772147LLU;

    t81 = (x377-((x378==x379)^x380));

    if (t81 != 512961577216754398LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x382 = -1;
	int64_t x383 = INT64_MIN;
	int32_t x384 = 1;
	static int32_t t82 = -1;

    t82 = (x381-((x382==x383)^x384));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x387 = 6LL;
	volatile uint64_t x388 = 542139175LLU;
	uint64_t t83 = 521387629034LLU;

    t83 = (x385-((x386==x387)^x388));

    if (t83 != 18446744073167412313LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x389 = 68672739U;
	volatile int8_t x390 = -1;
	int64_t x391 = -1LL;
	uint16_t x392 = UINT16_MAX;

    t84 = (x389-((x390==x391)^x392));

    if (t84 != 68607205U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x393 = 729U;
	int8_t x394 = 0;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t85 = 372017129U;

    t85 = (x393-((x394==x395)^x396));

    if (t85 != 33497U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = -49;
	int32_t x400 = INT32_MIN;
	volatile int64_t t86 = -3416623715441910856LL;

    t86 = (x397-((x398==x399)^x400));

    if (t86 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x401 = 4U;
	int8_t x402 = INT8_MIN;
	uint32_t x404 = UINT32_MAX;

    t87 = (x401-((x402==x403)^x404));

    if (t87 != 6U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x407 = 462;
	int32_t t88 = 4088791;

    t88 = (x405-((x406==x407)^x408));

    if (t88 != -561) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x409 = 9754243U;
	static int8_t x410 = -1;
	volatile uint8_t x411 = UINT8_MAX;
	volatile int64_t x412 = 1LL;

    t89 = (x409-((x410==x411)^x412));

    if (t89 != 9754242LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MAX;
	volatile uint64_t t90 = 16183497LLU;

    t90 = (x413-((x414==x415)^x416));

    if (t90 != 9223147013300969717LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t91 = -215;

    t91 = (x417-((x418==x419)^x420));

    if (t91 != -256) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x421 = -8872;
	uint16_t x422 = 3U;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = 7796;
	static volatile int32_t t92 = -125662708;

    t92 = (x421-((x422==x423)^x424));

    if (t92 != -16668) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = INT32_MIN;
	int16_t x427 = -1011;
	int8_t x428 = INT8_MIN;
	int32_t t93 = -11418;

    t93 = (x425-((x426==x427)^x428));

    if (t93 != -2147483520) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x433 = INT16_MIN;
	uint32_t x434 = 146U;
	int64_t x435 = INT64_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t94 = 7880810529385530LL;

    t94 = (x433-((x434==x435)^x436));

    if (t94 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x438 = -1LL;
	int16_t x439 = INT16_MAX;
	static int16_t x440 = -1;
	volatile uint64_t t95 = 17364018295617LLU;

    t95 = (x437-((x438==x439)^x440));

    if (t95 != 334LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x441 = 379419334U;
	static int8_t x442 = INT8_MAX;
	uint64_t x443 = 140LLU;
	int32_t x444 = -1;
	uint32_t t96 = 106U;

    t96 = (x441-((x442==x443)^x444));

    if (t96 != 379419335U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MAX;
	int32_t x448 = INT32_MIN;
	uint32_t t97 = 282U;

    t97 = (x445-((x446==x447)^x448));

    if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x449 = INT32_MIN;
	int64_t x450 = -1LL;
	volatile uint32_t t98 = 406927991U;

    t98 = (x449-((x450==x451)^x452));

    if (t98 != 2147483649U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x453 = INT32_MIN;
	volatile int32_t x455 = -1;
	static volatile int32_t x456 = INT32_MIN;
	volatile int32_t t99 = -4570;

    t99 = (x453-((x454==x455)^x456));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x458 = 427793U;
	static int32_t x459 = INT32_MIN;
	uint8_t x460 = UINT8_MAX;

    t100 = (x457-((x458==x459)^x460));

    if (t100 != 947101735LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x461 = 23686U;
	int16_t x462 = INT16_MAX;
	int16_t x463 = 391;
	int16_t x464 = -1;
	int32_t t101 = -38;

    t101 = (x461-((x462==x463)^x464));

    if (t101 != 23687) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x465 = UINT8_MAX;
	static volatile int32_t x466 = INT32_MAX;
	int16_t x468 = INT16_MAX;
	int32_t t102 = 21344169;

    t102 = (x465-((x466==x467)^x468));

    if (t102 != -32512) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x469 = 5143U;
	volatile int32_t x470 = INT32_MAX;
	uint16_t x471 = UINT16_MAX;
	uint32_t x472 = 393900U;
	uint32_t t103 = 53U;

    t103 = (x469-((x470==x471)^x472));

    if (t103 != 4294578539U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x473 = 34LL;
	volatile int16_t x474 = INT16_MIN;
	volatile uint8_t x475 = 1U;
	volatile int64_t t104 = 603561LL;

    t104 = (x473-((x474==x475)^x476));

    if (t104 != 8297504LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x477 = -1LL;
	static int16_t x480 = INT16_MIN;
	volatile int64_t t105 = 992913712LL;

    t105 = (x477-((x478==x479)^x480));

    if (t105 != 32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x481 = INT8_MIN;
	uint32_t x482 = 129277838U;
	uint16_t x483 = 0U;
	int32_t t106 = 987613039;

    t106 = (x481-((x482==x483)^x484));

    if (t106 != -255) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = 3949996073139340LL;
	uint64_t x487 = 8714990701367LLU;
	int32_t x488 = INT32_MIN;

    t107 = (x485-((x486==x487)^x488));

    if (t107 != 2147483520) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x491 = 494709885LLU;
	int8_t x492 = -23;
	static volatile int32_t t108 = 5264;

    t108 = (x489-((x490==x491)^x492));

    if (t108 != -105) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x493 = 1U;
	static int16_t x496 = 0;
	static int32_t t109 = 0;

    t109 = (x493-((x494==x495)^x496));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x501 = -1;
	int32_t x502 = 0;
	int32_t t110 = 6;

    t110 = (x501-((x502==x503)^x504));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x509 = 61U;
	volatile int64_t x511 = INT64_MIN;
	volatile int64_t x512 = 0LL;
	int64_t t111 = -2766460234604LL;

    t111 = (x509-((x510==x511)^x512));

    if (t111 != 61LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x513 = INT64_MIN;
	uint8_t x515 = 12U;
	int64_t x516 = -1LL;
	int64_t t112 = -160412505399544LL;

    t112 = (x513-((x514==x515)^x516));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x518 = 442105;
	static int32_t x519 = 3;
	int32_t x520 = 1;
	int32_t t113 = -1521;

    t113 = (x517-((x518==x519)^x520));

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x521 = 2U;
	int64_t x522 = 953942266LL;
	int16_t x524 = INT16_MAX;
	static volatile int32_t t114 = 198509;

    t114 = (x521-((x522==x523)^x524));

    if (t114 != -32765) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x526 = UINT16_MAX;
	int32_t x527 = -2778444;
	uint16_t x528 = 16U;
	int32_t t115 = 568273913;

    t115 = (x525-((x526==x527)^x528));

    if (t115 != -17) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = -424281579699LL;
	uint32_t x530 = UINT32_MAX;
	int8_t x531 = -12;
	static volatile int8_t x532 = INT8_MAX;
	static volatile int64_t t116 = 47LL;

    t116 = (x529-((x530==x531)^x532));

    if (t116 != -424281579826LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x533 = INT16_MIN;
	volatile int16_t x535 = -1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t117 = -13138;

    t117 = (x533-((x534==x535)^x536));

    if (t117 != -32640) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x537 = 37818574U;
	static int16_t x540 = INT16_MAX;
	volatile uint32_t t118 = 418906U;

    t118 = (x537-((x538==x539)^x540));

    if (t118 != 37785807U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = INT32_MIN;
	static uint16_t x543 = UINT16_MAX;
	int8_t x544 = INT8_MIN;
	volatile int32_t t119 = -16743247;

    t119 = (x541-((x542==x543)^x544));

    if (t119 != -2147483520) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x545 = 241U;
	int32_t x546 = 11025085;
	int64_t x547 = 31994596327207339LL;
	volatile uint32_t t120 = 7514U;

    t120 = (x545-((x546==x547)^x548));

    if (t120 != 227U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x553 = 69U;
	int16_t x555 = INT16_MIN;
	uint32_t x556 = UINT32_MAX;

    t121 = (x553-((x554==x555)^x556));

    if (t121 != 70U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x558 = -1;
	volatile int16_t x559 = -1;
	static volatile uint32_t x560 = UINT32_MAX;
	volatile int64_t t122 = 166111LL;

    t122 = (x557-((x558==x559)^x560));

    if (t122 != 669449476143145LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x561 = INT32_MIN;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = 418569;
	static int32_t x564 = INT32_MIN;
	volatile int32_t t123 = -20268;

    t123 = (x561-((x562==x563)^x564));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x565 = 209424188;
	uint16_t x566 = UINT16_MAX;
	int16_t x567 = 328;
	static uint8_t x568 = UINT8_MAX;
	volatile int32_t t124 = -499;

    t124 = (x565-((x566==x567)^x568));

    if (t124 != 209423933) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x573 = -139074040;
	static uint32_t x575 = 2643U;
	uint32_t x576 = 65357141U;
	volatile uint32_t t125 = 164474U;

    t125 = (x573-((x574==x575)^x576));

    if (t125 != 4090536115U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x577 = 8U;
	uint64_t x578 = 2365544LLU;
	volatile uint8_t x579 = UINT8_MAX;
	uint32_t x580 = UINT32_MAX;
	uint32_t t126 = 1U;

    t126 = (x577-((x578==x579)^x580));

    if (t126 != 9U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x581 = INT16_MIN;
	int8_t x582 = 1;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = -1;
	int32_t t127 = -7;

    t127 = (x581-((x582==x583)^x584));

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x587 = INT16_MIN;
	int64_t x588 = 1207756849LL;
	int64_t t128 = -87839261358641583LL;

    t128 = (x585-((x586==x587)^x588));

    if (t128 != -120616143200404987LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x596 = 4U;
	volatile int32_t t129 = -7;

    t129 = (x593-((x594==x595)^x596));

    if (t129 != 432) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x597 = INT16_MIN;
	volatile uint8_t x598 = 18U;
	int32_t x599 = INT32_MIN;
	uint64_t x600 = UINT64_MAX;
	uint64_t t130 = 5LLU;

    t130 = (x597-((x598==x599)^x600));

    if (t130 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x601 = 1941U;
	int64_t x602 = INT64_MIN;
	int8_t x604 = INT8_MIN;

    t131 = (x601-((x602==x603)^x604));

    if (t131 != 2069) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x617 = INT8_MIN;
	volatile uint64_t x619 = 8335LLU;
	int8_t x620 = INT8_MAX;
	static volatile int32_t t132 = 4;

    t132 = (x617-((x618==x619)^x620));

    if (t132 != -255) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x621 = 26U;
	uint8_t x623 = 26U;
	uint64_t x624 = UINT64_MAX;
	uint64_t t133 = 1769041LLU;

    t133 = (x621-((x622==x623)^x624));

    if (t133 != 27LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x629 = -51;
	int8_t x630 = -27;
	int64_t x631 = -1LL;
	int16_t x632 = INT16_MIN;

    t134 = (x629-((x630==x631)^x632));

    if (t134 != 32717) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x634 = INT8_MIN;
	uint8_t x635 = 2U;
	static int16_t x636 = -1;
	volatile int32_t t135 = -2;

    t135 = (x633-((x634==x635)^x636));

    if (t135 != 128) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x637 = INT64_MIN;
	uint16_t x638 = UINT16_MAX;
	int64_t x639 = -1LL;
	static int32_t x640 = -22385;

    t136 = (x637-((x638==x639)^x640));

    if (t136 != -9223372036854753423LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x643 = INT32_MAX;
	uint64_t x644 = 1791941LLU;
	uint64_t t137 = 1699299366798628690LLU;

    t137 = (x641-((x642==x643)^x644));

    if (t137 != 18446744073707765135LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x645 = UINT64_MAX;
	int64_t x647 = 15965LL;
	int8_t x648 = INT8_MIN;
	static volatile uint64_t t138 = 264326425807808LLU;

    t138 = (x645-((x646==x647)^x648));

    if (t138 != 127LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x649 = INT64_MAX;
	uint64_t x650 = 940LLU;
	uint8_t x651 = 8U;
	static uint16_t x652 = 29U;
	static volatile int64_t t139 = 0LL;

    t139 = (x649-((x650==x651)^x652));

    if (t139 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x653 = INT32_MIN;
	static int16_t x654 = 3962;
	int32_t x656 = INT32_MIN;
	int32_t t140 = -195166;

    t140 = (x653-((x654==x655)^x656));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x657 = 22132U;
	int8_t x658 = INT8_MAX;
	int16_t x659 = -1;
	uint32_t t141 = 4U;

    t141 = (x657-((x658==x659)^x660));

    if (t141 != 21877U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x661 = -884LL;
	int64_t x662 = INT64_MAX;
	uint16_t x663 = 360U;
	int16_t x664 = INT16_MIN;
	static volatile int64_t t142 = -2638519457LL;

    t142 = (x661-((x662==x663)^x664));

    if (t142 != 31884LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x666 = INT32_MIN;

    t143 = (x665-((x666==x667)^x668));

    if (t143 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MAX;
	int32_t x672 = 30062022;
	static volatile int32_t t144 = -38116;

    t144 = (x669-((x670==x671)^x672));

    if (t144 != -30062535) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x673 = -1;
	static uint16_t x675 = UINT16_MAX;

    t145 = (x673-((x674==x675)^x676));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x678 = 46332174918117883LLU;
	static int16_t x679 = -1;
	int32_t x680 = -1001005;

    t146 = (x677-((x678==x679)^x680));

    if (t146 != 968237) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x681 = -6;
	uint8_t x683 = 16U;
	int64_t x684 = INT64_MIN;
	int64_t t147 = 8629707633921LL;

    t147 = (x681-((x682==x683)^x684));

    if (t147 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x685 = INT8_MIN;
	static int32_t x686 = -1;
	volatile int16_t x687 = INT16_MIN;
	volatile int8_t x688 = -1;
	static volatile int32_t t148 = -43412;

    t148 = (x685-((x686==x687)^x688));

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x689 = INT32_MAX;
	volatile int32_t x690 = INT32_MAX;
	int8_t x691 = INT8_MIN;
	static int16_t x692 = INT16_MAX;
	int32_t t149 = 15765;

    t149 = (x689-((x690==x691)^x692));

    if (t149 != 2147450880) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x693 = UINT8_MAX;
	int32_t x695 = -98028;
	int64_t x696 = -16721844LL;
	volatile int64_t t150 = -5660LL;

    t150 = (x693-((x694==x695)^x696));

    if (t150 != 16722099LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x697 = -1;
	int32_t x698 = -1;
	volatile int16_t x699 = 1;
	static int32_t x700 = INT32_MAX;
	volatile int32_t t151 = INT32_MIN;

    t151 = (x697-((x698==x699)^x700));

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x701 = 26401586377031806LL;
	int64_t x704 = -1LL;
	static volatile int64_t t152 = 13207486LL;

    t152 = (x701-((x702==x703)^x704));

    if (t152 != 26401586377031807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x710 = -1;
	static int16_t x711 = INT16_MAX;
	uint32_t x712 = UINT32_MAX;
	static uint32_t t153 = 6161U;

    t153 = (x709-((x710==x711)^x712));

    if (t153 != 32768U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x713 = INT32_MIN;
	volatile int8_t x714 = INT8_MIN;
	int16_t x715 = -73;
	uint64_t t154 = 42667661100898343LLU;

    t154 = (x713-((x714==x715)^x716));

    if (t154 != 18446727014701185507LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x717 = 207LLU;
	uint8_t x718 = 127U;
	int64_t x719 = 0LL;
	int64_t x720 = INT64_MIN;

    t155 = (x717-((x718==x719)^x720));

    if (t155 != 9223372036854776015LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x721 = 0U;
	int8_t x722 = INT8_MAX;
	int32_t x723 = 1;
	volatile int32_t x724 = 1;
	volatile int32_t t156 = -197439;

    t156 = (x721-((x722==x723)^x724));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x729 = INT16_MIN;
	int64_t x730 = -6LL;
	volatile uint32_t x732 = 467U;
	volatile uint32_t t157 = 63U;

    t157 = (x729-((x730==x731)^x732));

    if (t157 != 4294934061U) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x733 = -27446163226956LL;
	int64_t x734 = INT64_MAX;
	int32_t x735 = -3078232;
	int16_t x736 = INT16_MAX;
	volatile int64_t t158 = 2022732LL;

    t158 = (x733-((x734==x735)^x736));

    if (t158 != -27446163259723LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x738 = UINT64_MAX;
	int32_t x739 = INT32_MAX;
	uint16_t x740 = 1U;
	int32_t t159 = -24;

    t159 = (x737-((x738==x739)^x740));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x741 = INT64_MIN;
	int16_t x742 = -27;
	static int16_t x743 = -1;
	int16_t x744 = INT16_MIN;
	volatile int64_t t160 = -12117092686464748LL;

    t160 = (x741-((x742==x743)^x744));

    if (t160 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x745 = INT8_MIN;
	uint16_t x747 = UINT16_MAX;
	uint32_t x748 = UINT32_MAX;
	static volatile uint32_t t161 = 358597U;

    t161 = (x745-((x746==x747)^x748));

    if (t161 != 4294967169U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x749 = 1160U;
	volatile uint16_t x750 = UINT16_MAX;
	int8_t x751 = -1;
	int64_t x752 = -1LL;
	volatile int64_t t162 = -112116896102989LL;

    t162 = (x749-((x750==x751)^x752));

    if (t162 != 1161LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x753 = UINT32_MAX;
	static int16_t x754 = INT16_MIN;
	static int8_t x755 = INT8_MIN;
	int32_t x756 = -2;
	uint32_t t163 = 41810121U;

    t163 = (x753-((x754==x755)^x756));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x757 = -2LL;
	int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MAX;
	volatile int16_t x760 = INT16_MIN;
	int64_t t164 = -11723LL;

    t164 = (x757-((x758==x759)^x760));

    if (t164 != 32766LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x761 = 20831723LLU;
	uint64_t x763 = 51818LLU;
	uint16_t x764 = 0U;
	uint64_t t165 = 3LLU;

    t165 = (x761-((x762==x763)^x764));

    if (t165 != 20831723LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x768 = INT8_MAX;
	uint32_t t166 = 95U;

    t166 = (x765-((x766==x767)^x768));

    if (t166 != 4294967168U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x769 = 1;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MIN;
	static int16_t x772 = -1699;
	int32_t t167 = 1011846;

    t167 = (x769-((x770==x771)^x772));

    if (t167 != 1700) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x773 = INT8_MIN;
	uint32_t x774 = 94019011U;
	volatile int16_t x775 = 318;
	static volatile uint32_t x776 = UINT32_MAX;

    t168 = (x773-((x774==x775)^x776));

    if (t168 != 4294967169U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x777 = 5U;
	static uint16_t x778 = 12878U;
	uint32_t x779 = UINT32_MAX;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t169 = 216296178286LLU;

    t169 = (x777-((x778==x779)^x780));

    if (t169 != 6LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x781 = -1;
	int8_t x782 = 2;
	int64_t x783 = INT64_MIN;
	static uint32_t x784 = 7587U;
	static volatile uint32_t t170 = 443345U;

    t170 = (x781-((x782==x783)^x784));

    if (t170 != 4294959708U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x786 = INT16_MIN;
	int64_t x787 = -1LL;
	static uint32_t x788 = UINT32_MAX;
	uint32_t t171 = 10U;

    t171 = (x785-((x786==x787)^x788));

    if (t171 != 18U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x789 = UINT32_MAX;
	volatile int8_t x790 = INT8_MIN;
	volatile int16_t x791 = INT16_MIN;
	int16_t x792 = 1513;
	uint32_t t172 = 327U;

    t172 = (x789-((x790==x791)^x792));

    if (t172 != 4294965782U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x793 = INT8_MIN;
	static uint16_t x795 = 1859U;
	volatile int32_t t173 = -38804590;

    t173 = (x793-((x794==x795)^x796));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x798 = INT64_MIN;
	static int64_t x799 = 12353717461169LL;
	int32_t x800 = INT32_MIN;
	static int32_t t174 = INT32_MAX;

    t174 = (x797-((x798==x799)^x800));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile int64_t x802 = 1506LL;
	int32_t x804 = -110;
	uint64_t t175 = 266365LLU;

    t175 = (x801-((x802==x803)^x804));

    if (t175 != 109LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x808 = INT16_MAX;
	int64_t t176 = 44076351LL;

    t176 = (x805-((x806==x807)^x808));

    if (t176 != -32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x809 = INT16_MIN;
	volatile int8_t x810 = -2;
	int8_t x811 = -5;
	int8_t x812 = -9;
	volatile int32_t t177 = 29387406;

    t177 = (x809-((x810==x811)^x812));

    if (t177 != -32759) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x815 = UINT32_MAX;
	int16_t x816 = 6372;
	static volatile int64_t t178 = 1398523531261735550LL;

    t178 = (x813-((x814==x815)^x816));

    if (t178 != -6373LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x817 = 6;
	static int32_t x818 = INT32_MIN;
	volatile uint8_t x819 = 4U;
	int16_t x820 = -7;

    t179 = (x817-((x818==x819)^x820));

    if (t179 != 13) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x821 = 4414297;
	uint64_t x824 = UINT64_MAX;
	uint64_t t180 = 13072LLU;

    t180 = (x821-((x822==x823)^x824));

    if (t180 != 4414298LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x825 = -439;
	volatile int16_t x826 = 111;
	static int16_t x827 = -613;
	volatile int64_t t181 = 2378494750495028632LL;

    t181 = (x825-((x826==x827)^x828));

    if (t181 != 4023684931LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x829 = INT16_MIN;
	int32_t x830 = INT32_MAX;
	volatile int8_t x832 = -4;

    t182 = (x829-((x830==x831)^x832));

    if (t182 != -32764) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x833 = 16U;
	static uint16_t x834 = UINT16_MAX;
	uint16_t x835 = UINT16_MAX;
	int8_t x836 = -1;
	volatile int32_t t183 = 0;

    t183 = (x833-((x834==x835)^x836));

    if (t183 != 18) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x837 = 79942814306992LLU;
	static int32_t x838 = INT32_MIN;
	int16_t x839 = -3187;
	volatile uint64_t x840 = 421530400105366LLU;
	uint64_t t184 = 1931LLU;

    t184 = (x837-((x838==x839)^x840));

    if (t184 != 18446402486123753242LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x845 = -1LL;
	static int16_t x846 = INT16_MIN;
	int8_t x848 = -1;
	volatile int64_t t185 = 0LL;

    t185 = (x845-((x846==x847)^x848));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x853 = 86679331U;
	static int16_t x855 = -1;
	int16_t x856 = INT16_MIN;
	uint32_t t186 = 261328U;

    t186 = (x853-((x854==x855)^x856));

    if (t186 != 86712098U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x857 = 771U;
	static uint8_t x859 = 12U;
	uint32_t t187 = 17U;

    t187 = (x857-((x858==x859)^x860));

    if (t187 != 2147484419U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x861 = INT32_MAX;
	int16_t x863 = -1;
	volatile uint16_t x864 = UINT16_MAX;
	volatile int32_t t188 = 52;

    t188 = (x861-((x862==x863)^x864));

    if (t188 != 2147418112) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x865 = 5243U;
	volatile uint32_t x866 = 290486U;
	int32_t x867 = INT32_MIN;
	int16_t x868 = INT16_MIN;

    t189 = (x865-((x866==x867)^x868));

    if (t189 != 38011) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x869 = -1;
	int64_t x870 = 2441059732681LL;
	volatile int16_t x871 = INT16_MAX;
	int8_t x872 = INT8_MAX;
	int32_t t190 = -3314201;

    t190 = (x869-((x870==x871)^x872));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x873 = 1;
	int8_t x874 = -13;
	uint64_t t191 = 338557526LLU;

    t191 = (x873-((x874==x875)^x876));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x877 = -1LL;
	int64_t x878 = -158082LL;
	uint64_t x879 = UINT64_MAX;
	volatile int64_t t192 = 1433838LL;

    t192 = (x877-((x878==x879)^x880));

    if (t192 != -10LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x885 = 1;
	int8_t x886 = INT8_MIN;
	static int32_t x887 = 3475;
	uint16_t x888 = 8U;
	static volatile int32_t t193 = -1;

    t193 = (x885-((x886==x887)^x888));

    if (t193 != -7) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x889 = -1;
	volatile int16_t x890 = -2;
	uint16_t x891 = 638U;
	uint16_t x892 = 88U;
	volatile int32_t t194 = -2027670;

    t194 = (x889-((x890==x891)^x892));

    if (t194 != -89) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x893 = INT64_MIN;
	int8_t x894 = -1;
	static int32_t x895 = INT32_MAX;
	int8_t x896 = INT8_MIN;
	volatile int64_t t195 = 488708851526346184LL;

    t195 = (x893-((x894==x895)^x896));

    if (t195 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x898 = INT8_MAX;
	int16_t x899 = -1;
	volatile int64_t t196 = 1LL;

    t196 = (x897-((x898==x899)^x900));

    if (t196 != 32767LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x901 = 6LLU;
	uint16_t x902 = UINT16_MAX;
	int32_t x904 = -1;

    t197 = (x901-((x902==x903)^x904));

    if (t197 != 7LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x905 = -1;
	int64_t x906 = -7051872029259404LL;
	int64_t x907 = INT64_MAX;
	int64_t x908 = -1LL;
	static volatile int64_t t198 = -243606349783153995LL;

    t198 = (x905-((x906==x907)^x908));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x917 = -1;
	int32_t x918 = 4306;
	int64_t x919 = 3181992LL;
	int32_t t199 = INT32_MAX;

    t199 = (x917-((x918==x919)^x920));

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

