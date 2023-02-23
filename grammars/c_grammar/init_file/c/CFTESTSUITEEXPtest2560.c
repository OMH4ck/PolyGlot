
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

int64_t x2 = INT64_MIN;
int16_t x3 = -1;
uint32_t x11 = 0U;
int16_t x12 = -59;
uint8_t x22 = 4U;
volatile int16_t x23 = 40;
uint64_t x40 = 6478LLU;
uint64_t t8 = 34044LLU;
static int32_t x60 = -203;
uint32_t x65 = 1476789015U;
int16_t x88 = INT16_MIN;
uint8_t x96 = 4U;
uint32_t x100 = UINT32_MAX;
uint64_t x102 = 26812343125799799LLU;
static int32_t x104 = 3949010;
uint64_t x113 = UINT64_MAX;
volatile uint16_t x119 = UINT16_MAX;
static int8_t x120 = INT8_MIN;
volatile uint64_t t23 = 82661245LLU;
int32_t t25 = 1;
uint8_t x143 = UINT8_MAX;
int32_t t28 = 290353;
volatile int32_t x150 = INT32_MIN;
volatile uint8_t x155 = 14U;
int32_t x165 = INT32_MAX;
int8_t x167 = INT8_MIN;
static volatile int8_t x174 = -1;
static volatile uint64_t t34 = 5019838491540LLU;
int16_t x182 = INT16_MIN;
uint32_t x184 = 9U;
uint32_t t35 = 91345U;
volatile int16_t x189 = -1697;
static int8_t x193 = 20;
uint64_t x195 = 725251203LLU;
int64_t x199 = INT64_MIN;
volatile int32_t t40 = -1284050;
uint32_t x209 = 1521U;
volatile uint32_t x211 = 8037U;
int64_t x213 = INT64_MIN;
static int8_t x216 = 2;
static int64_t t43 = INT64_MIN;
uint64_t x219 = 5124695110LLU;
int64_t t45 = -15125037LL;
int16_t x228 = INT16_MIN;
uint64_t x246 = UINT64_MAX;
int32_t x247 = INT32_MIN;
uint64_t x270 = 30LLU;
volatile uint64_t t54 = 3493985446636654418LLU;
int16_t x274 = -1801;
volatile int64_t x275 = 30705200319387944LL;
uint64_t x277 = 2763058692LLU;
int32_t x284 = INT32_MIN;
int64_t x289 = INT64_MAX;
static uint64_t x292 = 6LLU;
int16_t x295 = INT16_MAX;
int8_t x299 = INT8_MIN;
uint8_t x300 = UINT8_MAX;
uint64_t t61 = 425613744LLU;
uint8_t x305 = 5U;
static uint64_t x306 = 2961941LLU;
int32_t x312 = 1;
int64_t x332 = 24620601LL;
volatile int64_t t68 = -26853941LL;
uint64_t x340 = UINT64_MAX;
static volatile uint64_t t70 = 4855LLU;
int32_t t71 = -15;
volatile uint64_t t73 = 58LLU;
volatile int32_t t74 = -3;
uint32_t x357 = 50U;
static uint16_t x358 = 1398U;
int16_t x360 = -1;
static volatile uint32_t t75 = 197U;
int8_t x365 = -1;
uint16_t x367 = 3U;
int8_t x370 = -1;
int32_t x374 = -620333;
volatile uint16_t x376 = UINT16_MAX;
static uint32_t x379 = UINT32_MAX;
int16_t x382 = INT16_MAX;
uint8_t x384 = 10U;
int64_t t81 = 84LL;
volatile uint64_t x388 = UINT64_MAX;
volatile uint64_t t82 = 269291946830LLU;
volatile int8_t x389 = -7;
static int16_t x395 = -1;
int64_t x396 = -150980964LL;
int32_t x397 = INT32_MAX;
static int32_t x399 = INT32_MAX;
static int16_t x401 = -1;
uint32_t x403 = 129616956U;
uint64_t x406 = 195042470LLU;
static uint64_t t87 = 12201786410972559LLU;
uint8_t x409 = 74U;
static int8_t x431 = INT8_MIN;
volatile int64_t t92 = 836553189958745LL;
volatile int8_t x434 = -1;
volatile uint8_t x435 = 1U;
volatile uint32_t t93 = 0U;
int32_t x437 = INT32_MIN;
int32_t x442 = 17;
volatile int32_t t96 = 0;
volatile int16_t x451 = -1;
int16_t x458 = INT16_MIN;
int16_t x461 = INT16_MAX;
int64_t x462 = -435456LL;
volatile uint8_t x469 = 25U;
static int16_t x471 = -1;
static uint16_t x473 = 2U;
uint64_t x479 = 20LLU;
uint32_t x483 = 2002U;
uint16_t x484 = UINT16_MAX;
volatile int16_t x489 = -6520;
volatile uint64_t t106 = 4043245865LLU;
int32_t x494 = -11095;
uint64_t x495 = UINT64_MAX;
uint64_t t107 = 488820634382LLU;
static int8_t x498 = -14;
uint16_t x499 = 7U;
uint32_t x506 = UINT32_MAX;
int8_t x507 = -1;
uint64_t x510 = UINT64_MAX;
static int64_t x514 = -223LL;
uint16_t x524 = UINT16_MAX;
uint16_t x526 = 2U;
int16_t x529 = INT16_MIN;
uint32_t x532 = UINT32_MAX;
volatile int8_t x543 = -4;
uint64_t x549 = 25LLU;
int32_t x551 = INT32_MIN;
uint32_t x552 = UINT32_MAX;
static uint16_t x573 = UINT16_MAX;
uint64_t t129 = 501720189235LLU;
uint16_t x589 = 28U;
static uint16_t x590 = UINT16_MAX;
volatile int32_t x596 = 1;
int64_t x605 = -69774949465320601LL;
int64_t t135 = 2862222704LL;
static uint8_t x617 = 8U;
uint64_t t138 = 299895237LLU;
int32_t x633 = INT32_MIN;
uint32_t x634 = 238878638U;
int16_t x637 = INT16_MIN;
int32_t x639 = -1;
int64_t t142 = INT64_MIN;
volatile int8_t x643 = -27;
int64_t x644 = 940433583791682LL;
volatile int64_t t143 = 219913735689LL;
static int8_t x651 = 20;
uint64_t t145 = 3753940575LLU;
int32_t t147 = 30;
volatile int8_t x665 = -1;
volatile uint64_t t149 = 866110497836846LLU;
static volatile uint8_t x669 = 3U;
int64_t x671 = -314831LL;
uint32_t x673 = 167U;
int16_t x674 = -1;
int64_t x677 = INT64_MIN;
int16_t x681 = INT16_MIN;
int8_t x682 = -3;
uint32_t x683 = 1650U;
volatile uint32_t t153 = 66045839U;
int32_t x686 = -1;
static int8_t x687 = INT8_MAX;
volatile int64_t x689 = -1LL;
volatile uint32_t x692 = UINT32_MAX;
int8_t x700 = 12;
int64_t t157 = INT64_MIN;
int32_t x702 = INT32_MIN;
int64_t t158 = -16678151466376LL;
int32_t x712 = -26096;
volatile int32_t x722 = 6782565;
int8_t x724 = -8;
static volatile uint32_t t163 = 59942U;
uint8_t x731 = UINT8_MAX;
volatile int32_t x742 = INT32_MIN;
static int16_t x744 = 296;
volatile int32_t x750 = -1;
int64_t x756 = INT64_MAX;
int32_t x758 = -1;
uint32_t x761 = UINT32_MAX;
uint8_t x764 = 9U;
int8_t x765 = INT8_MAX;
volatile int16_t x767 = INT16_MIN;
static uint64_t x768 = 4777304LLU;
static uint64_t t173 = 1054859546442311LLU;
volatile int64_t t174 = -29606LL;
int32_t x774 = 3972;
int32_t x777 = -1;
uint64_t x778 = 9LLU;
volatile int8_t x780 = INT8_MIN;
static int32_t x783 = INT32_MIN;
int8_t x787 = -3;
static uint16_t x795 = 271U;
uint8_t x796 = UINT8_MAX;
int16_t x798 = -35;
int64_t t180 = 479855587698LL;
static int8_t x807 = 29;
int64_t t183 = -61324701456845072LL;
int32_t x825 = 431963;
int64_t x830 = 26LL;
uint32_t x838 = 72538U;
int16_t x839 = 12;
int64_t x841 = INT64_MAX;
int16_t x842 = 6739;
int8_t x844 = INT8_MAX;
volatile uint8_t x848 = UINT8_MAX;
int32_t x855 = INT32_MIN;
int32_t x866 = -1;
volatile int16_t x872 = -2434;
int32_t x873 = INT32_MAX;
volatile uint16_t x875 = UINT16_MAX;
uint8_t x883 = UINT8_MAX;
int32_t x888 = INT32_MIN;


void f0(void) {
    	static uint64_t x1 = 241LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 210LLU;

    t0 = (x1&((x2^x3)+x4));

    if (t0 != 113LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = 35141;
	uint8_t x10 = UINT8_MAX;
	uint32_t t1 = 1U;

    t1 = (x9&((x10^x11)+x12));

    if (t1 != 68U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	static uint16_t x14 = 0U;
	volatile int32_t x15 = INT32_MAX;
	volatile int32_t x16 = -263948694;
	int32_t t2 = 1;

    t2 = (x13&((x14^x15)+x16));

    if (t2 != 105) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = UINT16_MAX;
	int16_t x18 = 7920;
	volatile int16_t x19 = 6241;
	static int8_t x20 = -1;
	int32_t t3 = -24799;

    t3 = (x17&((x18^x19)+x20));

    if (t3 != 1680) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -4;
	volatile int8_t x24 = 56;
	volatile int32_t t4 = -439395744;

    t4 = (x21&((x22^x23)+x24));

    if (t4 != 100) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = 6358U;
	uint8_t x26 = 54U;
	volatile int8_t x27 = INT8_MAX;
	int32_t x28 = -188683499;
	uint32_t t5 = 713663U;

    t5 = (x25&((x26^x27)+x28));

    if (t5 != 2134U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = -20331;
	volatile int8_t x31 = INT8_MAX;
	int64_t x32 = -113102LL;
	static volatile int64_t t6 = -33015662414002650LL;

    t6 = (x29&((x30^x31)+x32));

    if (t6 != -133376LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MIN;
	int16_t x35 = -3789;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t7 = 74;

    t7 = (x33&((x34^x35)+x36));

    if (t7 != 50) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	uint8_t x38 = 95U;
	int16_t x39 = -6677;

    t8 = (x37&((x38^x39)+x40));

    if (t8 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = INT64_MIN;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 45U;
	int32_t x52 = -1;
	volatile int64_t t9 = -57228LL;

    t9 = (x49&((x50^x51)+x52));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 0U;
	uint32_t x54 = 389345U;
	int8_t x55 = 0;
	static volatile uint8_t x56 = UINT8_MAX;
	uint32_t t10 = 501028U;

    t10 = (x53&((x54^x55)+x56));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	int8_t x59 = -1;
	volatile int32_t t11 = -292537;

    t11 = (x57&((x58^x59)+x60));

    if (t11 != -33024) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x66 = 61U;
	static int64_t x67 = INT64_MIN;
	static uint32_t x68 = 42U;
	volatile int64_t t12 = -34837470042550668LL;

    t12 = (x65&((x66^x67)+x68));

    if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x73 = -162;
	uint32_t x74 = 373U;
	volatile uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t13 = 3LLU;

    t13 = (x73&((x74^x75)+x76));

    if (t13 != 18446744073709551114LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = 3;
	int8_t x78 = INT8_MIN;
	int8_t x79 = 0;
	int64_t x80 = INT64_MAX;
	volatile int64_t t14 = -191991587158LL;

    t14 = (x77&((x78^x79)+x80));

    if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x81 = -155239661;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -1LL;
	volatile uint32_t x84 = 2U;
	volatile int64_t t15 = 877949LL;

    t15 = (x81&((x82^x83)+x84));

    if (t15 != -2147483646LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	uint64_t x87 = UINT64_MAX;
	volatile uint64_t t16 = 1218570LLU;

    t16 = (x85&((x86^x87)+x88));

    if (t16 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x89 = 7938707377360324837LLU;
	volatile int8_t x90 = -1;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 29353LLU;
	volatile uint64_t t17 = 785357158202946659LLU;

    t17 = (x89&((x90^x91)+x92));

    if (t17 != 16544LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MAX;
	int8_t x95 = -1;
	static volatile int32_t t18 = INT32_MIN;

    t18 = (x93&((x94^x95)+x96));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = 189567LL;
	static int16_t x98 = -1;
	uint32_t x99 = 115914121U;
	int64_t t19 = 399722990360615LL;

    t19 = (x97&((x98^x99)+x100));

    if (t19 != 147573LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = -3231;
	uint64_t x103 = 2873935628LLU;
	static volatile uint64_t t20 = 420603331085618LLU;

    t20 = (x101&((x102^x103)+x104));

    if (t20 != 26812345633436225LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x105 = INT32_MAX;
	volatile int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MIN;
	static volatile uint64_t x108 = UINT64_MAX;
	volatile uint64_t t21 = 33871786LLU;

    t21 = (x105&((x106^x107)+x108));

    if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x114 = INT8_MAX;
	static uint64_t x115 = 516391069810LLU;
	int16_t x116 = -1;
	volatile uint64_t t22 = 1254116918342544LLU;

    t22 = (x113&((x114^x115)+x116));

    if (t22 != 516391069708LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x117 = 6U;
	uint64_t x118 = 143318450841071LLU;

    t23 = (x117&((x118^x119)+x120));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MAX;
	volatile uint8_t x122 = 114U;
	int16_t x123 = -1;
	int64_t x124 = -1LL;
	int64_t t24 = -151203562760LL;

    t24 = (x121&((x122^x123)+x124));

    if (t24 != 32652LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x129 = 66;
	int32_t x130 = INT32_MIN;
	static uint16_t x131 = UINT16_MAX;
	uint16_t x132 = UINT16_MAX;

    t25 = (x129&((x130^x131)+x132));

    if (t25 != 66) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x133 = -1;
	uint32_t x134 = 111991U;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	uint32_t t26 = 579U;

    t26 = (x133&((x134^x135)+x136));

    if (t26 != 2147562871U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MAX;
	uint64_t x139 = 2LLU;
	int8_t x140 = -1;
	volatile uint64_t t27 = 58LLU;

    t27 = (x137&((x138^x139)+x140));

    if (t27 != 32764LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x141 = -1;
	int32_t x142 = INT32_MIN;
	volatile uint8_t x144 = 11U;

    t28 = (x141&((x142^x143)+x144));

    if (t28 != -2147483382) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x149 = INT8_MIN;
	uint32_t x151 = 137097249U;
	volatile int32_t x152 = -1;
	static uint32_t t29 = 177287426U;

    t29 = (x149&((x150^x151)+x152));

    if (t29 != 2284580864U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x153 = INT16_MIN;
	int64_t x154 = 13735862352LL;
	static volatile int64_t x156 = -1LL;
	static int64_t t30 = -188530888718LL;

    t30 = (x153&((x154^x155)+x156));

    if (t30 != 13735854080LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = -1LL;
	volatile int8_t x162 = 3;
	uint8_t x163 = 0U;
	int64_t x164 = INT64_MIN;
	int64_t t31 = 31039184387474LL;

    t31 = (x161&((x162^x163)+x164));

    if (t31 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x166 = INT8_MIN;
	uint64_t x168 = 101013175394691LLU;
	volatile uint64_t t32 = 18LLU;

    t32 = (x165&((x166^x167)+x168));

    if (t32 != 1987043715LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = INT16_MIN;
	static uint8_t x170 = 84U;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 359650U;
	volatile uint64_t t33 = 21LLU;

    t33 = (x169&((x170^x171)+x172));

    if (t33 != 327680LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x173 = 2U;
	int8_t x175 = 2;
	uint64_t x176 = 37783750079304639LLU;

    t34 = (x173&((x174^x175)+x176));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x181 = UINT16_MAX;
	int16_t x183 = INT16_MIN;

    t35 = (x181&((x182^x183)+x184));

    if (t35 != 9U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = INT64_MIN;
	uint8_t x186 = 32U;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 1U;
	int64_t t36 = -1148006522799371715LL;

    t36 = (x185&((x186^x187)+x188));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x190 = -2065621214831300LL;
	int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	volatile int64_t t37 = 23972192257LL;

    t37 = (x189&((x190^x191)+x192));

    if (t37 != 2065619067346972LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x194 = -129;
	int8_t x196 = 3;
	static volatile uint64_t t38 = 9LLU;

    t38 = (x193&((x194^x195)+x196));

    if (t38 != 20LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x197 = -1;
	uint32_t x198 = 865515891U;
	uint16_t x200 = 6175U;
	int64_t t39 = -36LL;

    t39 = (x197&((x198^x199)+x200));

    if (t39 != -9223372035989253742LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = 1;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;

    t40 = (x201&((x202^x203)+x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	volatile int64_t x206 = INT64_MAX;
	uint16_t x207 = 3U;
	int16_t x208 = INT16_MIN;
	static volatile int64_t t41 = 22162571656LL;

    t41 = (x205&((x206^x207)+x208));

    if (t41 != 4294934524LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x210 = -1;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t42 = 2556388LL;

    t42 = (x209&((x210^x211)+x212));

    if (t42 != 144LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x214 = 6U;
	static int8_t x215 = -26;

    t43 = (x213&((x214^x215)+x216));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x217 = -1LL;
	int8_t x218 = INT8_MIN;
	volatile int32_t x220 = INT32_MIN;
	uint64_t t44 = 60935779597LLU;

    t44 = (x217&((x218^x219)+x220));

    if (t44 != 18446744066437372870LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x221 = INT64_MIN;
	static int16_t x222 = INT16_MIN;
	static int64_t x223 = INT64_MIN;
	int16_t x224 = -1;

    t45 = (x221&((x222^x223)+x224));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x225 = 0;
	static int8_t x226 = 1;
	static uint8_t x227 = 2U;
	int32_t t46 = 17;

    t46 = (x225&((x226^x227)+x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x229 = -1;
	volatile int8_t x230 = INT8_MAX;
	uint64_t x231 = UINT64_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t47 = 3789658768609436LLU;

    t47 = (x229&((x230^x231)+x232));

    if (t47 != 4294967167LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x233 = 15;
	uint16_t x234 = 891U;
	uint32_t x235 = 22818U;
	int64_t x236 = 439LL;
	static int64_t t48 = -881593LL;

    t48 = (x233&((x234^x235)+x236));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x237 = INT16_MAX;
	uint32_t x238 = 3U;
	uint64_t x239 = 7LLU;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t49 = 4807060186907488241LLU;

    t49 = (x237&((x238^x239)+x240));

    if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	volatile uint64_t t50 = 6LLU;

    t50 = (x245&((x246^x247)+x248));

    if (t50 != 2147483648LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = INT32_MIN;
	static int16_t x250 = 43;
	int64_t x251 = INT64_MAX;
	int64_t x252 = -1LL;
	int64_t t51 = -16074586LL;

    t51 = (x249&((x250^x251)+x252));

    if (t51 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x261 = 14;
	static int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	uint8_t x264 = 1U;
	int64_t t52 = 8636801188LL;

    t52 = (x261&((x262^x263)+x264));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x265 = 12853771195LLU;
	uint64_t x266 = 212115LLU;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MAX;
	uint64_t t53 = 43122LLU;

    t53 = (x265&((x266^x267)+x268));

    if (t53 != 4263789355LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x269 = 14624U;
	int8_t x271 = 2;
	int16_t x272 = INT16_MIN;

    t54 = (x269&((x270^x271)+x272));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x273 = -1;
	static int8_t x276 = INT8_MAX;
	volatile int64_t t55 = 421562LL;

    t55 = (x273&((x274^x275)+x276));

    if (t55 != -30705200319389090LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x278 = -1LL;
	uint8_t x279 = 5U;
	int32_t x280 = 165721;
	uint64_t t56 = 7964761031674LLU;

    t56 = (x277&((x278^x279)+x280));

    if (t56 != 34304LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x281 = INT32_MIN;
	int32_t x282 = -140590;
	volatile int64_t x283 = -129905972124642292LL;
	static int64_t t57 = 7046907287LL;

    t57 = (x281&((x282^x283)+x284));

    if (t57 != 129905969529356288LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = INT8_MAX;
	uint32_t x286 = UINT32_MAX;
	static int8_t x287 = -13;
	uint64_t x288 = 154443958LLU;
	volatile uint64_t t58 = 1LLU;

    t58 = (x285&((x286^x287)+x288));

    if (t58 != 66LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x290 = UINT32_MAX;
	uint32_t x291 = 26732969U;
	volatile uint64_t t59 = 3702781901LLU;

    t59 = (x289&((x290^x291)+x292));

    if (t59 != 4268234332LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x293 = UINT64_MAX;
	uint32_t x294 = 22U;
	volatile int8_t x296 = INT8_MAX;
	uint64_t t60 = 8LLU;

    t60 = (x293&((x294^x295)+x296));

    if (t60 != 32872LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x297 = 708614326LLU;
	int32_t x298 = -1;

    t61 = (x297&((x298^x299)+x300));

    if (t61 != 54LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x307 = UINT32_MAX;
	int32_t x308 = -56502;
	uint64_t t62 = 1225863007383917LLU;

    t62 = (x305&((x306^x307)+x308));

    if (t62 != 4LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x309 = -1;
	uint8_t x310 = 42U;
	int32_t x311 = 951;
	int32_t t63 = 15954;

    t63 = (x309&((x310^x311)+x312));

    if (t63 != 926) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MAX;
	volatile int64_t x314 = INT64_MAX;
	int32_t x315 = 343626;
	volatile uint16_t x316 = 20U;
	volatile int64_t t64 = 19324431LL;

    t64 = (x313&((x314^x315)+x316));

    if (t64 != 73LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	volatile int16_t x320 = -51;
	static int32_t t65 = 134;

    t65 = (x317&((x318^x319)+x320));

    if (t65 != 204) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x321 = 47U;
	int64_t x322 = -1LL;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MIN;
	static int64_t t66 = 506933LL;

    t66 = (x321&((x322^x323)+x324));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x325 = UINT16_MAX;
	int8_t x326 = -17;
	static int32_t x327 = INT32_MAX;
	int16_t x328 = -1;
	int32_t t67 = -76248;

    t67 = (x325&((x326^x327)+x328));

    if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MAX;
	uint32_t x331 = 46835U;

    t68 = (x329&((x330^x331)+x332));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x333 = INT64_MIN;
	uint16_t x334 = 11953U;
	int32_t x335 = 1733;
	uint64_t x336 = 644LLU;
	uint64_t t69 = 3922970LLU;

    t69 = (x333&((x334^x335)+x336));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x337 = 3924U;
	volatile int32_t x338 = INT32_MAX;
	int32_t x339 = -1;

    t70 = (x337&((x338^x339)+x340));

    if (t70 != 3924LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = 5;
	int8_t x343 = 1;
	volatile int8_t x344 = 8;

    t71 = (x341&((x342^x343)+x344));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x345 = INT32_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = -2009;
	uint16_t x348 = 1968U;
	static volatile uint32_t t72 = 427874363U;

    t72 = (x345&((x346^x347)+x348));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	static uint64_t x352 = 989853515573597LLU;

    t73 = (x349&((x350^x351)+x352));

    if (t73 != 989852522774528LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x353 = 6335;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	static volatile int8_t x356 = INT8_MAX;

    t74 = (x353&((x354^x355)+x356));

    if (t74 != 190) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x359 = UINT8_MAX;

    t75 = (x357&((x358^x359)+x360));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x361 = -2200LL;
	static int32_t x362 = 11;
	static uint32_t x363 = 314419U;
	int16_t x364 = INT16_MIN;
	volatile int64_t t76 = 29887LL;

    t76 = (x361&((x362^x363)+x364));

    if (t76 != 279592LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x366 = INT64_MIN;
	uint8_t x368 = 50U;
	int64_t t77 = -9LL;

    t77 = (x365&((x366^x367)+x368));

    if (t77 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x369 = -1LL;
	int8_t x371 = -38;
	uint8_t x372 = 33U;
	volatile int64_t t78 = -15455LL;

    t78 = (x369&((x370^x371)+x372));

    if (t78 != 70LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x373 = INT32_MAX;
	int64_t x375 = 215731186289553949LL;
	static volatile int64_t t79 = -508396614240LL;

    t79 = (x373&((x374^x375)+x376));

    if (t79 != 171358925LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x377 = 14U;
	static int16_t x378 = 7554;
	int8_t x380 = 1;
	static volatile uint32_t t80 = 526397U;

    t80 = (x377&((x378^x379)+x380));

    if (t80 != 14U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x381 = -1;
	int64_t x383 = -9742LL;

    t81 = (x381&((x382^x383)+x384));

    if (t81 != -23017LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x385 = 9U;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = -1;

    t82 = (x385&((x386^x387)+x388));

    if (t82 != 9LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x390 = UINT32_MAX;
	int8_t x391 = 33;
	uint32_t x392 = UINT32_MAX;
	static uint32_t t83 = 19U;

    t83 = (x389&((x390^x391)+x392));

    if (t83 != 4294967257U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x393 = 86576753339LLU;
	int64_t x394 = -1LL;
	volatile uint64_t t84 = 8476817020538LLU;

    t84 = (x393&((x394^x395)+x396));

    if (t84 != 86436225688LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x398 = -13;
	volatile uint32_t x400 = 6U;
	uint32_t t85 = 3U;

    t85 = (x397&((x398^x399)+x400));

    if (t85 != 18U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x402 = 7253459854636LLU;
	int8_t x404 = 53;
	static volatile uint64_t t86 = 8836291459533338604LLU;

    t86 = (x401&((x402^x403)+x404));

    if (t86 != 7253467605317LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x405 = -57;
	int16_t x407 = 144;
	static uint64_t x408 = 699099297LLU;

    t87 = (x405&((x406^x407)+x408));

    if (t87 != 894141639LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x410 = INT64_MIN;
	int64_t x411 = 7LL;
	int32_t x412 = 7;
	static int64_t t88 = 22470LL;

    t88 = (x409&((x410^x411)+x412));

    if (t88 != 10LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = -10855;
	int32_t x414 = -1;
	int8_t x415 = 16;
	int8_t x416 = INT8_MIN;
	int32_t t89 = 2;

    t89 = (x413&((x414^x415)+x416));

    if (t89 != -10999) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x417 = -1;
	static uint8_t x418 = 10U;
	volatile int8_t x419 = -1;
	int32_t x420 = -9062362;
	volatile int32_t t90 = 0;

    t90 = (x417&((x418^x419)+x420));

    if (t90 != -9062373) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = 13931LL;
	int64_t x422 = -2008464414470834191LL;
	uint64_t x423 = UINT64_MAX;
	static volatile int64_t x424 = INT64_MIN;
	static uint64_t t91 = 25069184592LLU;

    t91 = (x421&((x422^x423)+x424));

    if (t91 != 10LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = -2180737655398548LL;
	static uint32_t x430 = UINT32_MAX;
	volatile uint32_t x432 = 445203415U;

    t92 = (x429&((x430^x431)+x432));

    if (t92 != 310445124LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x433 = INT8_MIN;
	uint32_t x436 = 194679011U;

    t93 = (x433&((x434^x435)+x436));

    if (t93 != 194678912U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x438 = INT8_MIN;
	int32_t x439 = 7;
	uint32_t x440 = UINT32_MAX;
	uint32_t t94 = 13503U;

    t94 = (x437&((x438^x439)+x440));

    if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x441 = -1LL;
	volatile int8_t x443 = 14;
	volatile int16_t x444 = -9;
	volatile int64_t t95 = 141339064905LL;

    t95 = (x441&((x442^x443)+x444));

    if (t95 != 22LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x445 = 16U;
	int32_t x446 = -1;
	volatile uint16_t x447 = 2U;
	volatile int16_t x448 = INT16_MIN;

    t96 = (x445&((x446^x447)+x448));

    if (t96 != 16) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x449 = 7832819;
	volatile uint8_t x450 = 45U;
	uint8_t x452 = 10U;
	volatile int32_t t97 = 151822;

    t97 = (x449&((x450^x451)+x452));

    if (t97 != 7832784) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	int8_t x454 = 2;
	int8_t x455 = -13;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t98 = 5387;

    t98 = (x453&((x454^x455)+x456));

    if (t98 != 113) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x457 = 0;
	int32_t x459 = 816;
	int8_t x460 = INT8_MIN;
	volatile int32_t t99 = -291;

    t99 = (x457&((x458^x459)+x460));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x463 = -8073032LL;
	uint32_t x464 = 32U;
	volatile int64_t t100 = 3494835LL;

    t100 = (x461&((x462^x463)+x464));

    if (t100 != 3032LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x470 = UINT64_MAX;
	static int8_t x472 = INT8_MAX;
	volatile uint64_t t101 = 4079306508385319337LLU;

    t101 = (x469&((x470^x471)+x472));

    if (t101 != 25LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x474 = -72988063407LL;
	int16_t x475 = 1;
	static int8_t x476 = INT8_MAX;
	static int64_t t102 = -2605479794646724768LL;

    t102 = (x473&((x474^x475)+x476));

    if (t102 != 2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x477 = -1LL;
	int64_t x478 = -39547LL;
	uint8_t x480 = 75U;
	uint64_t t103 = 578737174679140LLU;

    t103 = (x477&((x478^x479)+x480));

    if (t103 != 18446744073709512156LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x481 = INT8_MAX;
	int16_t x482 = -1;
	volatile uint32_t t104 = 330U;

    t104 = (x481&((x482^x483)+x484));

    if (t104 != 44U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x485 = -1;
	static int32_t x486 = INT32_MIN;
	volatile uint32_t x487 = 471879632U;
	static uint16_t x488 = 26U;
	volatile uint32_t t105 = 6061469U;

    t105 = (x485&((x486^x487)+x488));

    if (t105 != 2619363306U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x490 = -1LL;
	volatile uint64_t x491 = UINT64_MAX;
	uint64_t x492 = 1193926LLU;

    t106 = (x489&((x490^x491)+x492));

    if (t106 != 1189504LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x493 = -29206802785636LL;
	uint64_t x496 = UINT64_MAX;

    t107 = (x493&((x494^x495)+x496));

    if (t107 != 2580LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x497 = INT8_MAX;
	static uint8_t x500 = 16U;
	int32_t t108 = -968542;

    t108 = (x497&((x498^x499)+x500));

    if (t108 != 5) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x501 = INT32_MIN;
	int32_t x502 = -2;
	volatile int8_t x503 = INT8_MAX;
	volatile int64_t x504 = INT64_MAX;
	int64_t t109 = -17921750LL;

    t109 = (x501&((x502^x503)+x504));

    if (t109 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	static uint32_t x508 = 25606U;
	static volatile uint32_t t110 = 14040U;

    t110 = (x505&((x506^x507)+x508));

    if (t110 != 6U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x509 = INT32_MIN;
	static int32_t x511 = -1;
	int8_t x512 = INT8_MIN;
	volatile uint64_t t111 = 2LLU;

    t111 = (x509&((x510^x511)+x512));

    if (t111 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x513 = -1;
	int64_t x515 = INT64_MAX;
	uint8_t x516 = 1U;
	static int64_t t112 = -76874310292518LL;

    t112 = (x513&((x514^x515)+x516));

    if (t112 != -9223372036854775585LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x517 = 68934U;
	static uint64_t x518 = 1709028LLU;
	int8_t x519 = 5;
	uint32_t x520 = UINT32_MAX;
	volatile uint64_t t113 = 10LLU;

    t113 = (x517&((x518^x519)+x520));

    if (t113 != 320LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x521 = -1;
	static int64_t x522 = 26LL;
	int64_t x523 = INT64_MIN;
	static volatile int64_t t114 = -43078LL;

    t114 = (x521&((x522^x523)+x524));

    if (t114 != -9223372036854710247LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x525 = 54U;
	int32_t x527 = -24;
	uint8_t x528 = UINT8_MAX;
	int32_t t115 = -24;

    t115 = (x525&((x526^x527)+x528));

    if (t115 != 32) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x530 = UINT64_MAX;
	static volatile int32_t x531 = -1;
	static volatile uint64_t t116 = 2LLU;

    t116 = (x529&((x530^x531)+x532));

    if (t116 != 4294934528LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x533 = 2LLU;
	uint16_t x534 = UINT16_MAX;
	volatile int32_t x535 = INT32_MIN;
	static int16_t x536 = INT16_MIN;
	volatile uint64_t t117 = 100787181225567LLU;

    t117 = (x533&((x534^x535)+x536));

    if (t117 != 2LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x537 = -1;
	static uint16_t x538 = 245U;
	uint8_t x539 = UINT8_MAX;
	int64_t x540 = -1LL;
	volatile int64_t t118 = 165838914644LL;

    t118 = (x537&((x538^x539)+x540));

    if (t118 != 9LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x541 = INT64_MIN;
	int8_t x542 = -1;
	uint64_t x544 = 5LLU;
	uint64_t t119 = 87398978822141LLU;

    t119 = (x541&((x542^x543)+x544));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x545 = INT16_MAX;
	uint8_t x546 = UINT8_MAX;
	static uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t120 = 236998044;

    t120 = (x545&((x546^x547)+x548));

    if (t120 != 32640) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x550 = -16230219189440819LL;
	uint64_t t121 = 780125567264636409LLU;

    t121 = (x549&((x550^x551)+x552));

    if (t121 != 8LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x553 = -1;
	volatile int64_t x554 = -3975467752LL;
	uint64_t x555 = 1453038315LLU;
	int16_t x556 = -1;
	static volatile uint64_t t122 = 682LLU;

    t122 = (x553&((x554^x555)+x556));

    if (t122 != 18446744070581696498LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x557 = 29U;
	int8_t x558 = -1;
	volatile int8_t x559 = INT8_MAX;
	volatile int8_t x560 = -1;
	uint32_t t123 = 195U;

    t123 = (x557&((x558^x559)+x560));

    if (t123 != 29U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x561 = 17698153;
	int8_t x562 = INT8_MIN;
	int64_t x563 = 6397LL;
	uint64_t x564 = 354632477708LLU;
	volatile uint64_t t124 = 11050943LLU;

    t124 = (x561&((x562^x563)+x564));

    if (t124 != 17694985LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = UINT64_MAX;
	int8_t x568 = 1;
	uint64_t t125 = 275LLU;

    t125 = (x565&((x566^x567)+x568));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x569 = -1LL;
	int64_t x570 = INT64_MAX;
	volatile int32_t x571 = INT32_MIN;
	uint64_t x572 = 231051818388735LLU;
	volatile uint64_t t126 = 5785637071LLU;

    t126 = (x569&((x570^x571)+x572));

    if (t126 != 9223603090820648190LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x574 = INT16_MIN;
	int64_t x575 = -1LL;
	uint8_t x576 = UINT8_MAX;
	static volatile int64_t t127 = -953572063LL;

    t127 = (x573&((x574^x575)+x576));

    if (t127 != 33022LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x581 = 86;
	volatile int32_t x582 = -1;
	static int32_t x583 = INT32_MIN;
	volatile int8_t x584 = -6;
	int32_t t128 = 210398;

    t128 = (x581&((x582^x583)+x584));

    if (t128 != 80) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x585 = INT8_MIN;
	uint8_t x586 = UINT8_MAX;
	int64_t x587 = -1LL;
	uint64_t x588 = 26054140291236LLU;

    t129 = (x585&((x586^x587)+x588));

    if (t129 != 26054140290944LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x591 = INT8_MIN;
	uint16_t x592 = 1227U;
	int32_t t130 = 45;

    t130 = (x589&((x590^x591)+x592));

    if (t130 != 8) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x593 = -1LL;
	uint64_t x594 = 238053LLU;
	static int64_t x595 = INT64_MIN;
	volatile uint64_t t131 = 427796114620014410LLU;

    t131 = (x593&((x594^x595)+x596));

    if (t131 != 9223372036855013862LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = INT16_MAX;
	int16_t x598 = INT16_MIN;
	int64_t x599 = -1LL;
	int16_t x600 = 3758;
	volatile int64_t t132 = -102005743LL;

    t132 = (x597&((x598^x599)+x600));

    if (t132 != 3757LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	int32_t x602 = -1;
	uint16_t x603 = UINT16_MAX;
	static uint64_t x604 = 1LLU;
	volatile uint64_t t133 = 172LLU;

    t133 = (x601&((x602^x603)+x604));

    if (t133 != 4294901761LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x606 = -52;
	uint32_t x607 = 1U;
	uint16_t x608 = UINT16_MAX;
	int64_t t134 = -6599812LL;

    t134 = (x605&((x606^x607)+x608));

    if (t134 != 4932LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x609 = 1U;
	static uint32_t x610 = 12987559U;
	static int64_t x611 = -572799992688853964LL;
	static int32_t x612 = INT32_MAX;

    t135 = (x609&((x610^x611)+x612));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = -12499;
	volatile uint32_t x614 = 223305392U;
	uint16_t x615 = UINT16_MAX;
	int32_t x616 = -2;
	volatile uint32_t t136 = 1617468010U;

    t136 = (x613&((x614^x615)+x616));

    if (t136 != 223314189U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x618 = 175334LLU;
	uint8_t x619 = 16U;
	volatile uint32_t x620 = 11254088U;
	uint64_t t137 = 2796696253944474LLU;

    t137 = (x617&((x618^x619)+x620));

    if (t137 != 8LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x621 = INT32_MIN;
	static int64_t x622 = 684166471529LL;
	uint8_t x623 = UINT8_MAX;
	static volatile uint64_t x624 = 3325977472LLU;

    t138 = (x621&((x622^x623)+x624));

    if (t138 != 687194767360LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x625 = -2439;
	int32_t x626 = -83861;
	int64_t x627 = -3950007519750LL;
	int64_t x628 = INT64_MIN;
	static int64_t t139 = -4607670616LL;

    t139 = (x625&((x626^x627)+x628));

    if (t139 != -9223368086847306735LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x629 = 1880777134720513LLU;
	volatile int8_t x630 = INT8_MIN;
	int64_t x631 = INT64_MIN;
	int64_t x632 = 89LL;
	volatile uint64_t t140 = 502356711883LLU;

    t140 = (x629&((x630^x631)+x632));

    if (t140 != 1880777134720513LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x635 = 5U;
	int8_t x636 = 0;
	uint32_t t141 = 1349U;

    t141 = (x633&((x634^x635)+x636));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x638 = -1;
	static int64_t x640 = INT64_MIN;

    t142 = (x637&((x638^x639)+x640));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x641 = -1;
	int16_t x642 = INT16_MAX;

    t143 = (x641&((x642^x643)+x644));

    if (t143 != 940433583758940LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x645 = 257948609LLU;
	int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MAX;
	volatile int16_t x648 = INT16_MAX;
	volatile uint64_t t144 = 51536690887371LLU;

    t144 = (x645&((x646^x647)+x648));

    if (t144 != 64448LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x650 = 30;
	uint64_t x652 = 910298594LLU;

    t145 = (x649&((x650^x651)+x652));

    if (t145 != 910298496LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x653 = 0U;
	int16_t x654 = -1;
	static volatile int32_t x655 = -135;
	int64_t x656 = INT64_MIN;
	int64_t t146 = 530551968574102LL;

    t146 = (x653&((x654^x655)+x656));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x657 = -1;
	int32_t x658 = 0;
	volatile int8_t x659 = 0;
	int16_t x660 = -1854;

    t147 = (x657&((x658^x659)+x660));

    if (t147 != -1854) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x661 = INT64_MIN;
	static int8_t x662 = -48;
	volatile int64_t x663 = INT64_MIN;
	int8_t x664 = INT8_MIN;
	int64_t t148 = -127849638LL;

    t148 = (x661&((x662^x663)+x664));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x666 = 10U;
	int16_t x667 = -108;
	static uint64_t x668 = 505046325LLU;

    t149 = (x665&((x666^x667)+x668));

    if (t149 != 505046227LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x670 = UINT32_MAX;
	volatile int8_t x672 = INT8_MIN;
	int64_t t150 = 0LL;

    t150 = (x669&((x670^x671)+x672));

    if (t150 != 2LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x675 = 5637U;
	uint8_t x676 = UINT8_MAX;
	volatile uint32_t t151 = 26433372U;

    t151 = (x673&((x674^x675)+x676));

    if (t151 != 161U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x678 = UINT8_MAX;
	int16_t x679 = 4106;
	static uint64_t x680 = UINT64_MAX;
	volatile uint64_t t152 = 25149728989428LLU;

    t152 = (x677&((x678^x679)+x680));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x684 = -263;

    t153 = (x681&((x682^x683)+x684));

    if (t153 != 4294934528U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x685 = -1;
	int8_t x688 = -38;
	int32_t t154 = 561155704;

    t154 = (x685&((x686^x687)+x688));

    if (t154 != -166) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x690 = -1;
	static volatile int16_t x691 = 819;
	static int64_t t155 = 200844LL;

    t155 = (x689&((x690^x691)+x692));

    if (t155 != 4294966475LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x693 = 3575423;
	volatile int16_t x694 = -14;
	int64_t x695 = INT64_MAX;
	int16_t x696 = INT16_MAX;
	int64_t t156 = 269655222064LL;

    t156 = (x693&((x694^x695)+x696));

    if (t156 != 32780LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x697 = INT64_MIN;
	static int16_t x698 = -16;
	uint8_t x699 = 0U;

    t157 = (x697&((x698^x699)+x700));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x703 = INT32_MIN;
	int64_t x704 = INT64_MAX;

    t158 = (x701&((x702^x703)+x704));

    if (t158 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x705 = -1;
	int32_t x706 = -3333137;
	static volatile int32_t x707 = -1;
	uint32_t x708 = 371U;
	static volatile uint32_t t159 = 12767446U;

    t159 = (x705&((x706^x707)+x708));

    if (t159 != 3333507U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x709 = -3;
	int16_t x710 = INT16_MAX;
	static uint64_t x711 = UINT64_MAX;
	static volatile uint64_t t160 = 9721LLU;

    t160 = (x709&((x710^x711)+x712));

    if (t160 != 18446744073709492752LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x713 = 6U;
	int64_t x714 = -16326244LL;
	static int32_t x715 = INT32_MIN;
	int64_t x716 = -995460191430937235LL;
	int64_t t161 = -3548LL;

    t161 = (x713&((x714^x715)+x716));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x717 = 28989681914LL;
	uint8_t x718 = 4U;
	static int16_t x719 = -1;
	uint32_t x720 = 54855U;
	volatile int64_t t162 = 1035337LL;

    t162 = (x717&((x718^x719)+x720));

    if (t162 != 20546LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x721 = INT32_MIN;
	uint32_t x723 = UINT32_MAX;

    t163 = (x721&((x722^x723)+x724));

    if (t163 != 2147483648U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x725 = 23;
	static uint64_t x726 = 29572828200205LLU;
	uint64_t x727 = 405111098LLU;
	uint8_t x728 = UINT8_MAX;
	static volatile uint64_t t164 = 1910988738704LLU;

    t164 = (x725&((x726^x727)+x728));

    if (t164 != 22LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x729 = INT16_MIN;
	static volatile int64_t x730 = -1LL;
	int16_t x732 = INT16_MIN;
	volatile int64_t t165 = 2LL;

    t165 = (x729&((x730^x731)+x732));

    if (t165 != -65536LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = 1;
	static uint16_t x739 = UINT16_MAX;
	static int64_t x740 = -370296473270LL;
	volatile int64_t t166 = 632LL;

    t166 = (x737&((x738^x739)+x740));

    if (t166 != -370296407808LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x741 = -24;
	static volatile int64_t x743 = -1280626294892LL;
	volatile int64_t t167 = 19508261867460LL;

    t167 = (x741&((x742^x743)+x744));

    if (t167 != 1281321697448LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x745 = INT64_MIN;
	int32_t x746 = INT32_MAX;
	uint8_t x747 = 0U;
	static int16_t x748 = INT16_MIN;
	volatile int64_t t168 = 865959782263677871LL;

    t168 = (x745&((x746^x747)+x748));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x749 = INT64_MAX;
	int16_t x751 = -1173;
	uint32_t x752 = 610250U;
	volatile int64_t t169 = 11LL;

    t169 = (x749&((x750^x751)+x752));

    if (t169 != 611422LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x753 = 3U;
	static volatile uint64_t x754 = UINT64_MAX;
	static uint16_t x755 = 0U;
	static volatile uint64_t t170 = 21467030396LLU;

    t170 = (x753&((x754^x755)+x756));

    if (t170 != 2LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x757 = -275199187;
	volatile uint64_t x759 = 967546912LLU;
	int64_t x760 = INT64_MIN;
	volatile uint64_t t171 = 19232470360945LLU;

    t171 = (x757&((x758^x759)+x760));

    if (t171 != 9223372035882763021LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x762 = -1;
	int64_t x763 = 529497199LL;
	volatile int64_t t172 = 3232123544447310980LL;

    t172 = (x761&((x762^x763)+x764));

    if (t172 != 3765470105LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x766 = -5308474196699LL;

    t173 = (x765&((x766^x767)+x768));

    if (t173 != 125LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x769 = -1;
	int64_t x770 = INT64_MIN;
	static int64_t x771 = INT64_MIN;
	int16_t x772 = INT16_MIN;

    t174 = (x769&((x770^x771)+x772));

    if (t174 != -32768LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x773 = INT16_MAX;
	static volatile uint8_t x775 = 2U;
	volatile int16_t x776 = INT16_MAX;
	static volatile int32_t t175 = 59;

    t175 = (x773&((x774^x775)+x776));

    if (t175 != 3973) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x779 = -4;
	uint64_t t176 = 16534605244LLU;

    t176 = (x777&((x778^x779)+x780));

    if (t176 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x781 = INT16_MIN;
	uint64_t x782 = 352727434054346LLU;
	uint16_t x784 = UINT16_MAX;
	uint64_t t177 = 399921408LLU;

    t177 = (x781&((x782^x783)+x784));

    if (t177 != 18446391346322833408LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x785 = 1U;
	uint16_t x786 = 6660U;
	int64_t x788 = -1056217943130326LL;
	volatile int64_t t178 = -112958690830LL;

    t178 = (x785&((x786^x787)+x788));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x793 = UINT32_MAX;
	int64_t x794 = INT64_MIN;
	static int64_t t179 = -4187791135LL;

    t179 = (x793&((x794^x795)+x796));

    if (t179 != 526LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x797 = 17U;
	int64_t x799 = -6372LL;
	uint8_t x800 = 65U;

    t180 = (x797&((x798^x799)+x800));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x801 = UINT16_MAX;
	int8_t x802 = INT8_MIN;
	static volatile uint16_t x803 = UINT16_MAX;
	int32_t x804 = 3268;
	static int32_t t181 = 0;

    t181 = (x801&((x802^x803)+x804));

    if (t181 != 3395) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x805 = -1;
	uint32_t x806 = 3U;
	volatile uint8_t x808 = 1U;
	uint32_t t182 = 27U;

    t182 = (x805&((x806^x807)+x808));

    if (t182 != 31U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x817 = 1;
	int64_t x818 = -575LL;
	volatile int8_t x819 = -1;
	uint32_t x820 = UINT32_MAX;

    t183 = (x817&((x818^x819)+x820));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x821 = -9363715466013LL;
	int32_t x822 = -1;
	uint32_t x823 = UINT32_MAX;
	int8_t x824 = INT8_MIN;
	volatile int64_t t184 = -2224837801766617LL;

    t184 = (x821&((x822^x823)+x824));

    if (t184 != 3608206464LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x826 = INT8_MAX;
	int64_t x827 = INT64_MIN;
	volatile uint8_t x828 = UINT8_MAX;
	int64_t t185 = 10820LL;

    t185 = (x825&((x826^x827)+x828));

    if (t185 != 346LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x829 = 20905;
	int32_t x831 = INT32_MIN;
	static volatile int32_t x832 = INT32_MIN;
	int64_t t186 = -25562721853LL;

    t186 = (x829&((x830^x831)+x832));

    if (t186 != 8LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x833 = UINT64_MAX;
	int16_t x834 = 715;
	int8_t x835 = INT8_MIN;
	int16_t x836 = INT16_MIN;
	uint64_t t187 = 21LLU;

    t187 = (x833&((x834^x835)+x836));

    if (t187 != 18446744073709518155LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x837 = -371889940LL;
	volatile uint16_t x840 = 35U;
	volatile int64_t t188 = -70598063565340LL;

    t188 = (x837&((x838^x839)+x840));

    if (t188 != 67688LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x843 = UINT8_MAX;
	static int64_t t189 = 102354365340241LL;

    t189 = (x841&((x842^x843)+x844));

    if (t189 != 6955LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x845 = 104U;
	int8_t x846 = 17;
	static uint64_t x847 = 4529LLU;
	volatile uint64_t t190 = 805638950197LLU;

    t190 = (x845&((x846^x847)+x848));

    if (t190 != 8LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x849 = UINT64_MAX;
	static int8_t x850 = INT8_MIN;
	volatile uint64_t x851 = UINT64_MAX;
	int32_t x852 = 11417271;
	uint64_t t191 = 1501549018888611875LLU;

    t191 = (x849&((x850^x851)+x852));

    if (t191 != 11417398LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x853 = UINT16_MAX;
	static volatile int32_t x854 = -1;
	int16_t x856 = INT16_MIN;
	static int32_t t192 = -1;

    t192 = (x853&((x854^x855)+x856));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x857 = UINT32_MAX;
	int64_t x858 = 66644883664510LL;
	uint32_t x859 = UINT32_MAX;
	int16_t x860 = INT16_MIN;
	int64_t t193 = 0LL;

    t193 = (x857&((x858^x859)+x860));

    if (t193 != 123834753LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x861 = 38689LL;
	volatile int64_t x862 = -1LL;
	uint64_t x863 = 88949LLU;
	static uint64_t x864 = 27396027067328LLU;
	static volatile uint64_t t194 = 2068779764107392505LLU;

    t194 = (x861&((x862^x863)+x864));

    if (t194 != 36864LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x865 = -4;
	uint64_t x867 = 2929552448LLU;
	static volatile uint32_t x868 = 1392154688U;
	static volatile uint64_t t195 = 1210111LLU;

    t195 = (x865&((x866^x867)+x868));

    if (t195 != 18446744072172153852LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x869 = UINT64_MAX;
	int64_t x870 = INT64_MIN;
	volatile int16_t x871 = INT16_MIN;
	uint64_t t196 = 206136LLU;

    t196 = (x869&((x870^x871)+x872));

    if (t196 != 9223372036854740606LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x874 = INT16_MAX;
	volatile int16_t x876 = INT16_MIN;
	int32_t t197 = 1;

    t197 = (x873&((x874^x875)+x876));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x881 = 2U;
	static volatile int32_t x882 = INT32_MIN;
	static int16_t x884 = 4351;
	int32_t t198 = 3637;

    t198 = (x881&((x882^x883)+x884));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x886 = INT64_MAX;
	volatile uint32_t x887 = 18922374U;
	int64_t t199 = -220773420LL;

    t199 = (x885&((x886^x887)+x888));

    if (t199 != 9223372034688369664LL) { NG(); } else { ; }
	
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

