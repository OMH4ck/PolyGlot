
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

int16_t x3 = -1;
volatile int32_t t1 = -618;
int8_t x16 = INT8_MIN;
int8_t x20 = 1;
volatile uint32_t t4 = 180U;
int64_t x25 = -1LL;
static uint8_t x31 = UINT8_MAX;
int16_t x32 = INT16_MIN;
static int32_t x51 = -113;
static int64_t t14 = -8370039717565355LL;
volatile int8_t x63 = 3;
int32_t x65 = -112;
uint32_t x68 = 26U;
static uint64_t x70 = 18LLU;
int16_t x78 = -2;
static int8_t x81 = -12;
uint64_t x94 = 2337123830726LLU;
int32_t t23 = -3;
static int64_t x99 = INT64_MIN;
volatile uint32_t t25 = 1239U;
static uint64_t x105 = 92292724106LLU;
int16_t x107 = INT16_MAX;
static int16_t x113 = -1;
int16_t x126 = -7;
static int8_t x132 = -1;
int64_t x138 = 261603839759484287LL;
int32_t t33 = -13807;
uint32_t x149 = 0U;
uint16_t x152 = 2U;
int32_t x155 = 93387;
int16_t x156 = INT16_MIN;
int8_t x158 = -25;
volatile uint64_t t38 = 3393704374685LLU;
uint16_t x166 = UINT16_MAX;
static volatile int32_t t40 = -964;
int32_t x169 = INT32_MIN;
volatile uint8_t x171 = 49U;
uint16_t x172 = UINT16_MAX;
static int64_t x173 = 4028644695314822804LL;
int16_t x177 = 497;
static volatile int32_t t43 = -133;
static int16_t x183 = -5;
volatile int16_t x184 = INT16_MIN;
uint8_t x187 = 4U;
int8_t x192 = 0;
static int16_t x193 = -1;
int64_t x200 = INT64_MIN;
volatile int64_t t48 = 106608330026LL;
volatile uint16_t x204 = 23U;
volatile int32_t t50 = -222239166;
static int8_t x210 = INT8_MIN;
int8_t x213 = -1;
volatile int32_t x215 = INT32_MAX;
static volatile uint8_t x216 = 4U;
int32_t t52 = 1641;
static uint64_t x220 = 7459481LLU;
int32_t t53 = -6061;
uint32_t x224 = 8494U;
int32_t t54 = -38411;
volatile int8_t x231 = INT8_MIN;
static uint64_t x233 = 5870072802LLU;
volatile uint32_t x243 = 847U;
volatile uint64_t x244 = UINT64_MAX;
static int16_t x248 = -1;
uint64_t x252 = UINT64_MAX;
static volatile int32_t t61 = 9903837;
int16_t x253 = -1;
uint32_t x260 = 54044784U;
uint32_t x263 = 197612U;
uint32_t x274 = 0U;
volatile uint64_t x282 = 24584112399146LLU;
static int8_t x290 = 3;
int8_t x299 = -1;
static uint32_t x300 = 1U;
uint16_t x301 = 334U;
static int64_t x302 = INT64_MAX;
volatile int32_t t74 = 1;
volatile uint16_t x305 = 227U;
volatile int32_t t75 = 1180;
uint32_t x312 = 73U;
static int32_t x313 = INT32_MAX;
int32_t x315 = INT32_MIN;
static volatile int64_t x321 = INT64_MIN;
int32_t t79 = 72;
uint8_t x330 = UINT8_MAX;
volatile uint8_t x331 = UINT8_MAX;
int64_t t81 = -2LL;
int32_t x341 = 2313953;
volatile uint8_t x351 = 37U;
int32_t x353 = INT32_MIN;
volatile int16_t x363 = INT16_MIN;
int64_t x364 = 631LL;
int8_t x365 = INT8_MIN;
volatile int32_t x368 = -1;
uint16_t x371 = 55U;
volatile int64_t t90 = INT64_MAX;
static volatile int64_t t92 = -8224LL;
volatile int64_t x385 = -1LL;
volatile int32_t t95 = 27085604;
int64_t t98 = INT64_MAX;
int64_t x417 = -1LL;
uint32_t x418 = 758057U;
uint16_t x442 = UINT16_MAX;
uint64_t x445 = 1632047557LLU;
static int8_t x451 = -1;
volatile int16_t x457 = INT16_MIN;
static volatile uint64_t x459 = 1474154953685719LLU;
int32_t t110 = 0;
static volatile int16_t x461 = INT16_MIN;
static uint64_t x464 = 24506338LLU;
volatile int8_t x468 = -1;
static volatile int32_t t113 = -1099516;
int16_t x475 = INT16_MIN;
static int8_t x476 = INT8_MIN;
int32_t x477 = INT32_MAX;
int64_t x478 = INT64_MIN;
volatile uint16_t x497 = 20U;
static int64_t x505 = 28976638755389LL;
volatile int32_t x506 = -1528;
uint32_t x513 = 220486U;
volatile uint16_t x518 = 78U;
int32_t x519 = -2;
int32_t t124 = -445;
int8_t x526 = INT8_MIN;
static int8_t x532 = -36;
int32_t t127 = -188;
static uint16_t x551 = 5888U;
volatile int64_t t132 = -21710950683642LL;
volatile int64_t x573 = INT64_MAX;
int32_t x576 = INT32_MIN;
int64_t t137 = INT64_MAX;
uint16_t x581 = UINT16_MAX;
int16_t x591 = INT16_MIN;
static int32_t x594 = -432066121;
static int16_t x595 = INT16_MIN;
uint32_t x597 = UINT32_MAX;
volatile int8_t x598 = INT8_MIN;
static volatile uint32_t t143 = UINT32_MAX;
int32_t x607 = -1339;
static volatile uint32_t x609 = 2451134U;
static volatile uint64_t x610 = UINT64_MAX;
volatile uint32_t t146 = 91628610U;
uint64_t x627 = 117LLU;
int32_t t150 = -5;
int32_t t152 = -857;
static uint8_t x644 = 62U;
uint32_t t155 = UINT32_MAX;
int64_t x649 = 2708135690832438LL;
static volatile int64_t t156 = 5LL;
uint16_t x656 = 181U;
static volatile int8_t x660 = INT8_MAX;
static volatile int64_t t158 = INT64_MAX;
int64_t x665 = 9239716LL;
int64_t t159 = -71165269LL;
int64_t x676 = -703981172676LL;
volatile int32_t t161 = -85706479;
volatile uint8_t x677 = UINT8_MAX;
int64_t x682 = INT64_MIN;
static uint32_t x688 = 50901155U;
static int16_t x691 = INT16_MIN;
volatile int64_t x692 = INT64_MAX;
uint32_t x694 = 716U;
static int32_t t168 = 3135593;
static int8_t x717 = INT8_MIN;
volatile uint64_t x721 = 284675922694640499LLU;
int8_t x723 = -1;
int64_t x727 = INT64_MIN;
static volatile uint32_t x731 = 10U;
int64_t x739 = 26170LL;
uint64_t x742 = UINT64_MAX;
volatile int8_t x746 = INT8_MIN;
volatile int8_t x748 = -1;
int16_t x750 = -1;
int32_t x754 = -1;
static volatile uint32_t t180 = UINT32_MAX;
int32_t t181 = -7909940;
int32_t x762 = INT32_MIN;
int32_t x770 = 1;
uint16_t x772 = 356U;
static uint64_t x774 = 2030340LLU;
volatile uint64_t x779 = UINT64_MAX;
uint16_t x784 = 44U;
uint32_t x800 = 6U;
volatile int32_t t190 = 228112141;
uint64_t x804 = 233912207180583186LLU;
volatile int64_t x807 = -1LL;
int64_t x809 = INT64_MIN;
static int8_t x813 = INT8_MIN;
volatile int32_t t194 = 118526;
uint64_t x818 = 818684LLU;
int64_t x823 = INT64_MIN;
volatile int16_t x826 = -1;
static int32_t x827 = INT32_MIN;
volatile int64_t t197 = 57LL;
volatile int64_t x832 = -1LL;
int32_t x834 = -1;
volatile int32_t t199 = INT32_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = INT8_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = -31062462;

    t0 = (x1|((x2%x3)!=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x5 = 13U;
	static int32_t x6 = -1635385;
	static volatile int32_t x7 = INT32_MIN;
	static uint64_t x8 = 540103LLU;

    t1 = (x5|((x6%x7)!=x8));

    if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 6239;
	uint32_t x10 = 52U;
	static uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 17439U;
	int32_t t2 = -2871;

    t2 = (x9|((x10%x11)!=x12));

    if (t2 != 6239) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int32_t x14 = -32128;
	volatile uint8_t x15 = 13U;
	volatile int32_t t3 = 7866590;

    t3 = (x13|((x14%x15)!=x16));

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 12937U;
	static int64_t x18 = 445964794LL;
	uint32_t x19 = UINT32_MAX;

    t4 = (x17|((x18%x19)!=x20));

    if (t4 != 12937U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static uint64_t x22 = 3874LLU;
	int16_t x23 = 5;
	int16_t x24 = -2;
	static volatile int32_t t5 = 105;

    t5 = (x21|((x22%x23)!=x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = INT32_MAX;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -56;
	static int64_t t6 = 1381980647LL;

    t6 = (x25|((x26%x27)!=x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -3007;
	uint64_t x30 = 894223120LLU;
	volatile int32_t t7 = -638;

    t7 = (x29|((x30%x31)!=x32));

    if (t7 != -3007) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -756275362608LL;
	int8_t x34 = 0;
	uint32_t x35 = 4U;
	static volatile uint8_t x36 = UINT8_MAX;
	volatile int64_t t8 = -1LL;

    t8 = (x33|((x34%x35)!=x36));

    if (t8 != -756275362607LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MIN;
	volatile int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 498;

    t9 = (x37|((x38%x39)!=x40));

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 2U;
	static int64_t x42 = INT64_MIN;
	static int8_t x43 = 1;
	int8_t x44 = -1;
	volatile int32_t t10 = 106;

    t10 = (x41|((x42%x43)!=x44));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = -1;
	int32_t x46 = 20197803;
	static volatile uint64_t x47 = 51026LLU;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -29424728;

    t11 = (x45|((x46%x47)!=x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	volatile uint32_t x50 = 475U;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 260732950;

    t12 = (x49|((x50%x51)!=x52));

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint16_t x54 = 1153U;
	uint32_t x55 = 199938737U;
	static int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 58;

    t13 = (x53|((x54%x55)!=x56));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1LL;
	uint16_t x58 = 22U;
	int32_t x59 = 456;
	uint32_t x60 = 200509521U;

    t14 = (x57|((x58%x59)!=x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = 4450202556607799450LL;
	int32_t x62 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 27722485LL;

    t15 = (x61|((x62%x63)!=x64));

    if (t15 != 4450202556607799451LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	volatile int32_t t16 = -2880;

    t16 = (x65|((x66%x67)!=x68));

    if (t16 != -111) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	volatile int8_t x72 = INT8_MAX;
	uint32_t t17 = UINT32_MAX;

    t17 = (x69|((x70%x71)!=x72));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x74 = -1;
	static uint64_t x75 = 803776409966LLU;
	static int16_t x76 = -1;
	int32_t t18 = -51992820;

    t18 = (x73|((x74%x75)!=x76));

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -573344773278LL;
	volatile int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	int64_t t19 = 200LL;

    t19 = (x77|((x78%x79)!=x80));

    if (t19 != -573344773277LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = 84512968;
	int64_t x83 = -1LL;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 1;

    t20 = (x81|((x82%x83)!=x84));

    if (t20 != -11) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t x88 = 552;
	volatile uint32_t t21 = UINT32_MAX;

    t21 = (x85|((x86%x87)!=x88));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -158486376;
	int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = 0U;
	static volatile int32_t t22 = 5;

    t22 = (x89|((x90%x91)!=x92));

    if (t22 != -158486375) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 23U;
	int64_t x95 = 5880113337646178LL;
	volatile int32_t x96 = -1;

    t23 = (x93|((x94%x95)!=x96));

    if (t23 != 23) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	int8_t x98 = -1;
	static int16_t x100 = INT16_MAX;
	int64_t t24 = INT64_MAX;

    t24 = (x97|((x98%x99)!=x100));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 412967U;
	static volatile uint64_t x102 = 3459086738309831LLU;
	volatile int32_t x103 = -1;
	uint64_t x104 = UINT64_MAX;

    t25 = (x101|((x102%x103)!=x104));

    if (t25 != 412967U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MAX;
	volatile uint16_t x108 = UINT16_MAX;
	static uint64_t t26 = 1596340215403LLU;

    t26 = (x105|((x106%x107)!=x108));

    if (t26 != 92292724107LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x109 = 51191881U;
	volatile int32_t x110 = INT32_MAX;
	volatile int32_t x111 = 422050802;
	uint32_t x112 = 233110883U;
	static volatile uint32_t t27 = 2141086U;

    t27 = (x109|((x110%x111)!=x112));

    if (t27 != 51191881U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x114 = INT64_MIN;
	static uint8_t x115 = UINT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = -4223930;

    t28 = (x113|((x114%x115)!=x116));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -17323LL;
	uint16_t x118 = 12268U;
	uint32_t x119 = 1131297U;
	uint8_t x120 = 1U;
	int64_t t29 = 9LL;

    t29 = (x117|((x118%x119)!=x120));

    if (t29 != -17323LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 7U;
	static volatile int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MIN;
	uint32_t t30 = 603249U;

    t30 = (x125|((x126%x127)!=x128));

    if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	int64_t x131 = INT64_MIN;
	volatile int64_t t31 = INT64_MIN;

    t31 = (x129|((x130%x131)!=x132));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x133 = 10290681U;
	static int16_t x134 = -1;
	static int32_t x135 = INT32_MAX;
	uint32_t x136 = 3U;
	volatile uint32_t t32 = 3030U;

    t32 = (x133|((x134%x135)!=x136));

    if (t32 != 10290681U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 0U;
	int32_t x139 = 1030603963;
	static uint32_t x140 = 31417181U;

    t33 = (x137|((x138%x139)!=x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -1;
	int8_t x142 = -1;
	int16_t x143 = -232;
	static int64_t x144 = INT64_MIN;
	static int32_t t34 = -1;

    t34 = (x141|((x142%x143)!=x144));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x145 = -121;
	uint32_t x146 = 51750U;
	static int64_t x147 = 2295979791451307287LL;
	int16_t x148 = 61;
	volatile int32_t t35 = 182271;

    t35 = (x145|((x146%x147)!=x148));

    if (t35 != -121) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x150 = UINT8_MAX;
	volatile uint64_t x151 = 217409LLU;
	volatile uint32_t t36 = 0U;

    t36 = (x149|((x150%x151)!=x152));

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MAX;
	volatile int16_t x154 = INT16_MIN;
	int32_t t37 = 194572108;

    t37 = (x153|((x154%x155)!=x156));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 15LLU;
	volatile int32_t x159 = -1;
	static int16_t x160 = -15461;

    t38 = (x157|((x158%x159)!=x160));

    if (t38 != 15LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x161 = 4;
	volatile int64_t x162 = 131268075LL;
	static uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 0;

    t39 = (x161|((x162%x163)!=x164));

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x165 = -1;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MIN;

    t40 = (x165|((x166%x167)!=x168));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x170 = 34;
	int32_t t41 = -29604;

    t41 = (x169|((x170%x171)!=x172));

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x174 = 0U;
	int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	volatile int64_t t42 = 251678864638LL;

    t42 = (x173|((x174%x175)!=x176));

    if (t42 != 4028644695314822805LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;

    t43 = (x177|((x178%x179)!=x180));

    if (t43 != 497) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x181 = 75170U;
	int64_t x182 = 55029518415LL;
	uint32_t t44 = 3U;

    t44 = (x181|((x182%x183)!=x184));

    if (t44 != 75171U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x185 = INT8_MIN;
	int64_t x186 = -258259693608LL;
	volatile int64_t x188 = -1LL;
	static int32_t t45 = 104183137;

    t45 = (x185|((x186%x187)!=x188));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	uint8_t x191 = 50U;
	volatile int64_t t46 = -94850289142985LL;

    t46 = (x189|((x190%x191)!=x192));

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x194 = 1U;
	static uint8_t x195 = UINT8_MAX;
	static uint64_t x196 = 38007755776655LLU;
	int32_t t47 = 6747;

    t47 = (x193|((x194%x195)!=x196));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x197 = -1LL;
	uint64_t x198 = 17921806573482432LLU;
	int16_t x199 = -1;

    t48 = (x197|((x198%x199)!=x200));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t t49 = 9;

    t49 = (x201|((x202%x203)!=x204));

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 62U;
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	int64_t x208 = INT64_MIN;

    t50 = (x205|((x206%x207)!=x208));

    if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x209 = UINT32_MAX;
	int64_t x211 = 948253693174282722LL;
	volatile int32_t x212 = INT32_MAX;
	uint32_t t51 = UINT32_MAX;

    t51 = (x209|((x210%x211)!=x212));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x214 = 3878;

    t52 = (x213|((x214%x215)!=x216));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = UINT16_MAX;
	int64_t x218 = INT64_MIN;
	static int8_t x219 = INT8_MAX;

    t53 = (x217|((x218%x219)!=x220));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = -1996;
	uint8_t x223 = 5U;

    t54 = (x221|((x222%x223)!=x224));

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 25U;
	volatile int64_t x226 = INT64_MIN;
	static int32_t x227 = 1;
	static int64_t x228 = INT64_MAX;
	int32_t t55 = -6914323;

    t55 = (x225|((x226%x227)!=x228));

    if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	uint8_t x230 = UINT8_MAX;
	int64_t x232 = INT64_MIN;
	int64_t t56 = 794926293164587LL;

    t56 = (x229|((x230%x231)!=x232));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x234 = 276710U;
	int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t57 = 107981LLU;

    t57 = (x233|((x234%x235)!=x236));

    if (t57 != 5870072803LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x237 = 352U;
	uint32_t x238 = 3U;
	static uint32_t x239 = 50590U;
	volatile int64_t x240 = -183LL;
	uint32_t t58 = 477848U;

    t58 = (x237|((x238%x239)!=x240));

    if (t58 != 353U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 17U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x241|((x242%x243)!=x244));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x245 = INT8_MAX;
	static uint16_t x246 = 11891U;
	int8_t x247 = INT8_MAX;
	volatile int32_t t60 = 1;

    t60 = (x245|((x246%x247)!=x248));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = UINT8_MAX;
	static volatile int64_t x250 = INT64_MIN;
	int64_t x251 = -34670LL;

    t61 = (x249|((x250%x251)!=x252));

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x254 = 6653965335LLU;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t62 = -27;

    t62 = (x253|((x254%x255)!=x256));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = INT16_MIN;
	static uint16_t x258 = UINT16_MAX;
	int32_t x259 = 699172;
	volatile int32_t t63 = -64273632;

    t63 = (x257|((x258%x259)!=x260));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = 28U;
	volatile int64_t x262 = -1LL;
	volatile uint32_t x264 = 39410U;
	static volatile int32_t t64 = 254;

    t64 = (x261|((x262%x263)!=x264));

    if (t64 != 29) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = -1;
	int32_t x266 = -246975922;
	int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t65 = -83;

    t65 = (x265|((x266%x267)!=x268));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x269 = -1;
	int16_t x270 = -38;
	uint8_t x271 = 59U;
	volatile int8_t x272 = INT8_MIN;
	static int32_t t66 = 179293407;

    t66 = (x269|((x270%x271)!=x272));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	static uint32_t x276 = UINT32_MAX;
	volatile int32_t t67 = -61;

    t67 = (x273|((x274%x275)!=x276));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x277 = UINT32_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MAX;
	static uint16_t x280 = 1U;
	uint32_t t68 = UINT32_MAX;

    t68 = (x277|((x278%x279)!=x280));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t69 = -30437364;

    t69 = (x281|((x282%x283)!=x284));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MIN;
	static int32_t x288 = -1;
	volatile int32_t t70 = -55177418;

    t70 = (x285|((x286%x287)!=x288));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x289 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	int32_t x292 = 280;
	volatile int32_t t71 = -234688868;

    t71 = (x289|((x290%x291)!=x292));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MIN;
	int8_t x294 = -1;
	uint64_t x295 = 48105359144LLU;
	static volatile int8_t x296 = INT8_MIN;
	int64_t t72 = 1135654872106697831LL;

    t72 = (x293|((x294%x295)!=x296));

    if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x297 = INT8_MIN;
	int32_t x298 = 35375;
	static int32_t t73 = 1;

    t73 = (x297|((x298%x299)!=x300));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x303 = -920805646867770535LL;
	volatile int8_t x304 = INT8_MIN;

    t74 = (x301|((x302%x303)!=x304));

    if (t74 != 335) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x306 = INT64_MIN;
	static int64_t x307 = -1LL;
	uint8_t x308 = UINT8_MAX;

    t75 = (x305|((x306%x307)!=x308));

    if (t75 != 227) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x309 = 93154863U;
	volatile uint16_t x310 = 7787U;
	volatile int64_t x311 = INT64_MIN;
	volatile uint32_t t76 = 37066024U;

    t76 = (x309|((x310%x311)!=x312));

    if (t76 != 93154863U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x314 = INT64_MAX;
	volatile int32_t x316 = 127;
	volatile int32_t t77 = INT32_MAX;

    t77 = (x313|((x314%x315)!=x316));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x322 = -349;
	static int16_t x323 = INT16_MAX;
	volatile uint32_t x324 = 292602U;
	int64_t t78 = -2577968535316258386LL;

    t78 = (x321|((x322%x323)!=x324));

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	static int32_t x327 = INT32_MAX;
	static volatile uint64_t x328 = UINT64_MAX;

    t79 = (x325|((x326%x327)!=x328));

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x329 = INT16_MIN;
	int64_t x332 = -1LL;
	int32_t t80 = -23329;

    t80 = (x329|((x330%x331)!=x332));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = -533LL;
	volatile int8_t x334 = INT8_MAX;
	int16_t x335 = 101;
	uint32_t x336 = UINT32_MAX;

    t81 = (x333|((x334%x335)!=x336));

    if (t81 != -533LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = -1585;
	int32_t x339 = -198;
	int16_t x340 = INT16_MIN;
	int32_t t82 = -1;

    t82 = (x337|((x338%x339)!=x340));

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 53U;
	volatile int32_t t83 = -64167;

    t83 = (x341|((x342%x343)!=x344));

    if (t83 != 2313953) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x345 = -1;
	uint16_t x346 = 17U;
	static uint16_t x347 = 233U;
	int16_t x348 = INT16_MAX;
	volatile int32_t t84 = -218;

    t84 = (x345|((x346%x347)!=x348));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 3165737;
	int32_t x350 = -119757;
	volatile int64_t x352 = INT64_MIN;
	int32_t t85 = 617957678;

    t85 = (x349|((x350%x351)!=x352));

    if (t85 != 3165737) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x354 = INT8_MAX;
	int16_t x355 = -1;
	static uint16_t x356 = UINT16_MAX;
	int32_t t86 = -26863474;

    t86 = (x353|((x354%x355)!=x356));

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = UINT16_MAX;
	volatile uint32_t x358 = 3355U;
	int32_t x359 = -1;
	int64_t x360 = -1LL;
	static int32_t t87 = -782387;

    t87 = (x357|((x358%x359)!=x360));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x361 = -1;
	volatile int16_t x362 = -4869;
	int32_t t88 = 143;

    t88 = (x361|((x362%x363)!=x364));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x366 = INT32_MIN;
	int64_t x367 = -66187465939050LL;
	int32_t t89 = 8100;

    t89 = (x365|((x366%x367)!=x368));

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x370 = -1;
	uint8_t x372 = 26U;

    t90 = (x369|((x370%x371)!=x372));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x373 = 2305736358LLU;
	static uint32_t x374 = UINT32_MAX;
	volatile uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	uint64_t t91 = 402107641643708054LLU;

    t91 = (x373|((x374%x375)!=x376));

    if (t91 != 2305736359LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x377 = INT64_MIN;
	volatile int8_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -422305;

    t92 = (x377|((x378%x379)!=x380));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	static volatile int8_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	volatile int64_t t93 = 1LL;

    t93 = (x381|((x382%x383)!=x384));

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;
	static int64_t t94 = 3805LL;

    t94 = (x385|((x386%x387)!=x388));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;

    t95 = (x389|((x390%x391)!=x392));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x393 = INT8_MAX;
	volatile int8_t x394 = INT8_MAX;
	uint16_t x395 = 98U;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t96 = -976884;

    t96 = (x393|((x394%x395)!=x396));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x397 = 1U;
	volatile int8_t x398 = 18;
	uint16_t x399 = 30052U;
	static volatile int8_t x400 = 0;
	int32_t t97 = -15087;

    t97 = (x397|((x398%x399)!=x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x401 = INT64_MAX;
	int32_t x402 = INT32_MAX;
	static uint32_t x403 = 3436U;
	static int64_t x404 = 5LL;

    t98 = (x401|((x402%x403)!=x404));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x405 = INT32_MAX;
	uint64_t x406 = 8465LLU;
	volatile int32_t x407 = -13351044;
	int64_t x408 = INT64_MIN;
	volatile int32_t t99 = INT32_MAX;

    t99 = (x405|((x406%x407)!=x408));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x409 = 11;
	int16_t x410 = 406;
	volatile int16_t x411 = -1;
	static int32_t x412 = -1;
	int32_t t100 = 850653955;

    t100 = (x409|((x410%x411)!=x412));

    if (t100 != 11) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x419 = 23420526U;
	static volatile uint64_t x420 = 82LLU;
	volatile int64_t t101 = 24469938862988422LL;

    t101 = (x417|((x418%x419)!=x420));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	static int64_t x422 = -1LL;
	int8_t x423 = -1;
	volatile int32_t x424 = 0;
	static int32_t t102 = -1;

    t102 = (x421|((x422%x423)!=x424));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x425 = 29U;
	static volatile uint8_t x426 = UINT8_MAX;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MIN;
	static int32_t t103 = -69464;

    t103 = (x425|((x426%x427)!=x428));

    if (t103 != 29) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MIN;
	static int8_t x435 = -1;
	volatile uint32_t x436 = 24U;
	int32_t t104 = 2008;

    t104 = (x433|((x434%x435)!=x436));

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x437 = -65171248;
	static uint16_t x438 = 82U;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	static int32_t t105 = 0;

    t105 = (x437|((x438%x439)!=x440));

    if (t105 != -65171247) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x441 = 4U;
	volatile int64_t x443 = -1LL;
	uint8_t x444 = 65U;
	volatile int32_t t106 = -31776061;

    t106 = (x441|((x442%x443)!=x444));

    if (t106 != 5) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x446 = UINT64_MAX;
	static volatile int64_t x447 = INT64_MAX;
	int8_t x448 = 7;
	volatile uint64_t t107 = 731LLU;

    t107 = (x445|((x446%x447)!=x448));

    if (t107 != 1632047557LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = -41;
	static volatile int32_t x450 = -1;
	int8_t x452 = INT8_MIN;
	volatile int32_t t108 = 1023;

    t108 = (x449|((x450%x451)!=x452));

    if (t108 != -41) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x453 = 3952U;
	volatile int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	int16_t x456 = -1;
	uint32_t t109 = 366342U;

    t109 = (x453|((x454%x455)!=x456));

    if (t109 != 3953U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x458 = 14873U;
	int16_t x460 = INT16_MIN;

    t110 = (x457|((x458%x459)!=x460));

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x462 = 45U;
	int16_t x463 = INT16_MAX;
	volatile int32_t t111 = 1471050;

    t111 = (x461|((x462%x463)!=x464));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MIN;
	volatile uint64_t x466 = 1053073798410LLU;
	int32_t x467 = -20309;
	int64_t t112 = -1168080796471136LL;

    t112 = (x465|((x466%x467)!=x468));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	uint32_t x470 = 10U;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 0;

    t113 = (x469|((x470%x471)!=x472));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int64_t x474 = INT64_MAX;
	uint32_t t114 = UINT32_MAX;

    t114 = (x473|((x474%x475)!=x476));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x479 = UINT32_MAX;
	static int8_t x480 = -1;
	volatile int32_t t115 = INT32_MAX;

    t115 = (x477|((x478%x479)!=x480));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x485 = UINT8_MAX;
	static uint8_t x486 = 2U;
	volatile uint64_t x487 = 360825294LLU;
	uint32_t x488 = UINT32_MAX;
	static volatile int32_t t116 = 57481247;

    t116 = (x485|((x486%x487)!=x488));

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x489 = 32137353479421LLU;
	uint64_t x490 = 214LLU;
	uint16_t x491 = 6U;
	int8_t x492 = -1;
	volatile uint64_t t117 = 1080891212366832812LLU;

    t117 = (x489|((x490%x491)!=x492));

    if (t117 != 32137353479421LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x498 = INT64_MIN;
	static volatile int8_t x499 = -1;
	uint32_t x500 = 290U;
	int32_t t118 = 11727;

    t118 = (x497|((x498%x499)!=x500));

    if (t118 != 21) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x501 = 457461LLU;
	int8_t x502 = INT8_MIN;
	int64_t x503 = INT64_MAX;
	int32_t x504 = INT32_MIN;
	volatile uint64_t t119 = 2375416758LLU;

    t119 = (x501|((x502%x503)!=x504));

    if (t119 != 457461LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x507 = -1LL;
	uint64_t x508 = 8437888081LLU;
	int64_t t120 = -104140683707LL;

    t120 = (x505|((x506%x507)!=x508));

    if (t120 != 28976638755389LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = INT16_MAX;
	static int64_t x510 = INT64_MIN;
	uint8_t x511 = 46U;
	int64_t x512 = -1LL;
	volatile int32_t t121 = 25;

    t121 = (x509|((x510%x511)!=x512));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x514 = 1LLU;
	static int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	volatile uint32_t t122 = 193359324U;

    t122 = (x513|((x514%x515)!=x516));

    if (t122 != 220487U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = INT8_MIN;
	int32_t x520 = INT32_MAX;
	int32_t t123 = 140;

    t123 = (x517|((x518%x519)!=x520));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x521 = UINT16_MAX;
	uint32_t x522 = 12095U;
	int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MAX;

    t124 = (x521|((x522%x523)!=x524));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = -522;
	uint32_t x527 = UINT32_MAX;
	int16_t x528 = -1;
	volatile int32_t t125 = -7;

    t125 = (x525|((x526%x527)!=x528));

    if (t125 != -521) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x529 = INT32_MIN;
	uint32_t x530 = UINT32_MAX;
	volatile int16_t x531 = -1;
	volatile int32_t t126 = 1048392;

    t126 = (x529|((x530%x531)!=x532));

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x533 = -1;
	int64_t x534 = INT64_MIN;
	int64_t x535 = INT64_MIN;
	static uint64_t x536 = 4909556608LLU;

    t127 = (x533|((x534%x535)!=x536));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = -11;
	static int64_t x538 = INT64_MIN;
	volatile int64_t x539 = -3176548127956LL;
	volatile uint64_t x540 = UINT64_MAX;
	int32_t t128 = 1392;

    t128 = (x537|((x538%x539)!=x540));

    if (t128 != -11) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x541 = INT16_MIN;
	volatile uint32_t x542 = 9U;
	int8_t x543 = INT8_MIN;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t129 = 1700;

    t129 = (x541|((x542%x543)!=x544));

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x545 = -58248258788LL;
	int64_t x546 = -125908926338157LL;
	static int8_t x547 = INT8_MAX;
	volatile int32_t x548 = -1;
	volatile int64_t t130 = -244635595721062LL;

    t130 = (x545|((x546%x547)!=x548));

    if (t130 != -58248258787LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint32_t x549 = 19690U;
	int8_t x550 = INT8_MIN;
	int8_t x552 = 1;
	volatile uint32_t t131 = 622336801U;

    t131 = (x549|((x550%x551)!=x552));

    if (t131 != 19691U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x553 = 16995350626LL;
	int16_t x554 = INT16_MIN;
	uint64_t x555 = 36LLU;
	int64_t x556 = -1LL;

    t132 = (x553|((x554%x555)!=x556));

    if (t132 != 16995350627LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x557 = 16U;
	uint32_t x558 = UINT32_MAX;
	int64_t x559 = -1157816LL;
	static volatile uint8_t x560 = UINT8_MAX;
	uint32_t t133 = 392U;

    t133 = (x557|((x558%x559)!=x560));

    if (t133 != 17U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x561 = INT16_MIN;
	static volatile int64_t x562 = -1LL;
	static uint64_t x563 = 1451LLU;
	int32_t x564 = -1;
	static volatile int32_t t134 = 36360105;

    t134 = (x561|((x562%x563)!=x564));

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = 3522785960LL;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MIN;
	int32_t x568 = -3295;
	volatile int64_t t135 = 65755LL;

    t135 = (x565|((x566%x567)!=x568));

    if (t135 != 3522785961LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x569 = UINT8_MAX;
	static uint64_t x570 = 272056128687LLU;
	int8_t x571 = INT8_MAX;
	static int32_t x572 = -1;
	volatile int32_t t136 = 0;

    t136 = (x569|((x570%x571)!=x572));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x574 = 8U;
	uint8_t x575 = 2U;

    t137 = (x573|((x574%x575)!=x576));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x577 = INT64_MIN;
	static uint64_t x578 = 485288728036425379LLU;
	static int8_t x579 = INT8_MIN;
	uint32_t x580 = 44U;
	volatile int64_t t138 = 305896362338818LL;

    t138 = (x577|((x578%x579)!=x580));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x582 = INT16_MIN;
	uint32_t x583 = UINT32_MAX;
	volatile uint8_t x584 = 50U;
	volatile int32_t t139 = 11;

    t139 = (x581|((x582%x583)!=x584));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x585 = 94LLU;
	int8_t x586 = INT8_MIN;
	int32_t x587 = 13162907;
	static uint8_t x588 = 9U;
	uint64_t t140 = 449275LLU;

    t140 = (x585|((x586%x587)!=x588));

    if (t140 != 95LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x589 = UINT64_MAX;
	uint32_t x590 = 72022U;
	static int64_t x592 = INT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (x589|((x590%x591)!=x592));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x593 = 2915521LL;
	static int16_t x596 = INT16_MAX;
	volatile int64_t t142 = 333023786429764LL;

    t142 = (x593|((x594%x595)!=x596));

    if (t142 != 2915521LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x599 = -13506690;
	static int8_t x600 = INT8_MAX;

    t143 = (x597|((x598%x599)!=x600));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x601 = -1;
	volatile uint32_t x602 = 22268457U;
	volatile int32_t x603 = INT32_MIN;
	int32_t x604 = -24;
	static int32_t t144 = 151009095;

    t144 = (x601|((x602%x603)!=x604));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x605 = -1LL;
	int8_t x606 = 0;
	uint8_t x608 = 22U;
	int64_t t145 = -62676852953LL;

    t145 = (x605|((x606%x607)!=x608));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x611 = INT32_MIN;
	volatile int64_t x612 = -1LL;

    t146 = (x609|((x610%x611)!=x612));

    if (t146 != 2451135U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = 52;
	int8_t x614 = -1;
	uint16_t x615 = 1U;
	uint16_t x616 = 373U;
	int32_t t147 = 2;

    t147 = (x613|((x614%x615)!=x616));

    if (t147 != 53) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x617 = INT64_MIN;
	int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MAX;
	int32_t x620 = 13;
	int64_t t148 = 59865009LL;

    t148 = (x617|((x618%x619)!=x620));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x621 = -1;
	int8_t x622 = 1;
	static int64_t x623 = INT64_MAX;
	int32_t x624 = -1;
	volatile int32_t t149 = 14;

    t149 = (x621|((x622%x623)!=x624));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = -1;
	int8_t x628 = -1;

    t150 = (x625|((x626%x627)!=x628));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = 63;
	int16_t x630 = INT16_MAX;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = INT8_MIN;
	int32_t t151 = 3911;

    t151 = (x629|((x630%x631)!=x632));

    if (t151 != 63) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x633 = 1U;
	int8_t x634 = -8;
	volatile int16_t x635 = INT16_MAX;
	uint16_t x636 = 18U;

    t152 = (x633|((x634%x635)!=x636));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = 1U;
	int8_t x640 = -11;
	volatile int32_t t153 = 5182;

    t153 = (x637|((x638%x639)!=x640));

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x641 = 2676LLU;
	int8_t x642 = INT8_MAX;
	int32_t x643 = -3494;
	volatile uint64_t t154 = 78825656073111618LLU;

    t154 = (x641|((x642%x643)!=x644));

    if (t154 != 2677LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x645 = UINT32_MAX;
	static int16_t x646 = 15402;
	int32_t x647 = INT32_MAX;
	uint8_t x648 = 4U;

    t155 = (x645|((x646%x647)!=x648));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x650 = INT64_MIN;
	int32_t x651 = INT32_MIN;
	int32_t x652 = -1;

    t156 = (x649|((x650%x651)!=x652));

    if (t156 != 2708135690832439LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x653 = 1;
	int32_t x654 = 500;
	static int8_t x655 = INT8_MIN;
	int32_t t157 = 218766212;

    t157 = (x653|((x654%x655)!=x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x657 = INT64_MAX;
	int8_t x658 = -1;
	int8_t x659 = -1;

    t158 = (x657|((x658%x659)!=x660));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x666 = INT64_MAX;
	int16_t x667 = INT16_MIN;
	uint8_t x668 = 12U;

    t159 = (x665|((x666%x667)!=x668));

    if (t159 != 9239717LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x669 = -1LL;
	uint8_t x670 = 95U;
	volatile uint64_t x671 = 28544LLU;
	static int64_t x672 = INT64_MAX;
	volatile int64_t t160 = -607829LL;

    t160 = (x669|((x670%x671)!=x672));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x673 = INT32_MIN;
	static volatile int8_t x674 = INT8_MIN;
	volatile int32_t x675 = -33854123;

    t161 = (x673|((x674%x675)!=x676));

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x678 = INT64_MIN;
	static int16_t x679 = INT16_MIN;
	int16_t x680 = 11862;
	static volatile int32_t t162 = 2324;

    t162 = (x677|((x678%x679)!=x680));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x681 = 240;
	volatile int64_t x683 = -1LL;
	int64_t x684 = INT64_MIN;
	volatile int32_t t163 = 220863;

    t163 = (x681|((x682%x683)!=x684));

    if (t163 != 241) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = INT8_MAX;
	int16_t x686 = -1;
	uint16_t x687 = UINT16_MAX;
	int32_t t164 = 5950139;

    t164 = (x685|((x686%x687)!=x688));

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x689 = -1;
	static uint8_t x690 = UINT8_MAX;
	int32_t t165 = -500;

    t165 = (x689|((x690%x691)!=x692));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x693 = -1;
	static int32_t x695 = -135064;
	int64_t x696 = INT64_MAX;
	volatile int32_t t166 = 228;

    t166 = (x693|((x694%x695)!=x696));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x697 = -1;
	static int32_t x698 = 13081634;
	static uint8_t x699 = 3U;
	int32_t x700 = -11798;
	int32_t t167 = -3;

    t167 = (x697|((x698%x699)!=x700));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = -1;
	int64_t x702 = INT64_MAX;
	int64_t x703 = INT64_MAX;
	static int32_t x704 = 92673;

    t168 = (x701|((x702%x703)!=x704));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x705 = -1;
	volatile int32_t x706 = -1;
	int64_t x707 = 9578770291775LL;
	int16_t x708 = INT16_MIN;
	volatile int32_t t169 = -2076028;

    t169 = (x705|((x706%x707)!=x708));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = INT16_MIN;
	int32_t x710 = INT32_MIN;
	uint8_t x711 = 1U;
	volatile int16_t x712 = INT16_MIN;
	volatile int32_t t170 = 4281109;

    t170 = (x709|((x710%x711)!=x712));

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	uint64_t x715 = UINT64_MAX;
	int16_t x716 = -1;
	volatile int64_t t171 = -2134957505780659LL;

    t171 = (x713|((x714%x715)!=x716));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x718 = 21294U;
	static int64_t x719 = INT64_MAX;
	int8_t x720 = INT8_MIN;
	static int32_t t172 = -76935455;

    t172 = (x717|((x718%x719)!=x720));

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x722 = -1;
	static uint64_t x724 = 137751258572082LLU;
	static volatile uint64_t t173 = 137099387980360LLU;

    t173 = (x721|((x722%x723)!=x724));

    if (t173 != 284675922694640499LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x725 = -1;
	static volatile uint32_t x726 = 12U;
	int64_t x728 = INT64_MAX;
	int32_t t174 = -1457;

    t174 = (x725|((x726%x727)!=x728));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x729 = -1;
	volatile uint8_t x730 = 7U;
	int16_t x732 = INT16_MAX;
	static int32_t t175 = 9712;

    t175 = (x729|((x730%x731)!=x732));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x737 = INT32_MIN;
	volatile int32_t x738 = -13056736;
	static uint8_t x740 = 4U;
	static volatile int32_t t176 = 741;

    t176 = (x737|((x738%x739)!=x740));

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x741 = 4U;
	int32_t x743 = -71017138;
	volatile uint32_t x744 = 7282U;
	int32_t t177 = 677496582;

    t177 = (x741|((x742%x743)!=x744));

    if (t177 != 5) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int32_t x747 = INT32_MIN;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (x745|((x746%x747)!=x748));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x749 = INT64_MIN;
	static int8_t x751 = INT8_MIN;
	uint32_t x752 = 0U;
	int64_t t179 = -16203119LL;

    t179 = (x749|((x750%x751)!=x752));

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x753 = UINT32_MAX;
	uint8_t x755 = 62U;
	static int8_t x756 = 0;

    t180 = (x753|((x754%x755)!=x756));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x757 = 585;
	int16_t x758 = INT16_MIN;
	static int8_t x759 = -5;
	static uint64_t x760 = 48646662253367LLU;

    t181 = (x757|((x758%x759)!=x760));

    if (t181 != 585) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = 32754U;
	volatile int64_t x763 = INT64_MAX;
	static int64_t x764 = -210182870544649745LL;
	volatile uint32_t t182 = 175714U;

    t182 = (x761|((x762%x763)!=x764));

    if (t182 != 32755U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x765 = 64U;
	volatile uint16_t x766 = 90U;
	int8_t x767 = INT8_MIN;
	int16_t x768 = INT16_MIN;
	static uint32_t t183 = 13U;

    t183 = (x765|((x766%x767)!=x768));

    if (t183 != 65U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x769 = INT8_MIN;
	volatile uint16_t x771 = 23644U;
	int32_t t184 = -478702965;

    t184 = (x769|((x770%x771)!=x772));

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x773 = 0;
	uint32_t x775 = UINT32_MAX;
	int64_t x776 = INT64_MIN;
	static int32_t t185 = -6546;

    t185 = (x773|((x774%x775)!=x776));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x777 = 50U;
	uint8_t x778 = 44U;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t186 = -15;

    t186 = (x777|((x778%x779)!=x780));

    if (t186 != 51) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x781 = UINT16_MAX;
	uint16_t x782 = UINT16_MAX;
	uint16_t x783 = 54U;
	int32_t t187 = -1;

    t187 = (x781|((x782%x783)!=x784));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x785 = INT8_MIN;
	static volatile int64_t x786 = INT64_MIN;
	static uint32_t x787 = 1257211U;
	uint64_t x788 = UINT64_MAX;
	int32_t t188 = -30;

    t188 = (x785|((x786%x787)!=x788));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x789 = INT32_MIN;
	static volatile uint16_t x790 = 2U;
	uint32_t x791 = UINT32_MAX;
	int8_t x792 = 1;
	volatile int32_t t189 = 108982;

    t189 = (x789|((x790%x791)!=x792));

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x797 = 1U;
	uint16_t x798 = UINT16_MAX;
	int64_t x799 = -3939866315069LL;

    t190 = (x797|((x798%x799)!=x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x801 = UINT16_MAX;
	int32_t x802 = -1;
	static int64_t x803 = INT64_MAX;
	int32_t t191 = -126306;

    t191 = (x801|((x802%x803)!=x804));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x805 = 80U;
	volatile int64_t x806 = INT64_MAX;
	static volatile int32_t x808 = INT32_MAX;
	volatile uint32_t t192 = 1602480890U;

    t192 = (x805|((x806%x807)!=x808));

    if (t192 != 81U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x810 = -1;
	uint8_t x811 = 5U;
	static int16_t x812 = INT16_MIN;
	int64_t t193 = -362LL;

    t193 = (x809|((x810%x811)!=x812));

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x814 = 13;
	static int64_t x815 = -1LL;
	int8_t x816 = INT8_MIN;

    t194 = (x813|((x814%x815)!=x816));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x817 = INT8_MIN;
	int64_t x819 = -14668371820LL;
	int8_t x820 = INT8_MIN;
	volatile int32_t t195 = 1714620;

    t195 = (x817|((x818%x819)!=x820));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x821 = INT64_MAX;
	static int16_t x822 = 9794;
	int64_t x824 = INT64_MIN;
	volatile int64_t t196 = INT64_MAX;

    t196 = (x821|((x822%x823)!=x824));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = -185363892483618LL;
	int16_t x828 = -1;

    t197 = (x825|((x826%x827)!=x828));

    if (t197 != -185363892483618LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x829 = INT64_MAX;
	static volatile int64_t x830 = -1LL;
	int32_t x831 = INT32_MAX;
	volatile int64_t t198 = INT64_MAX;

    t198 = (x829|((x830%x831)!=x832));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x833 = INT32_MAX;
	uint32_t x835 = UINT32_MAX;
	int32_t x836 = 399;

    t199 = (x833|((x834%x835)!=x836));

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

