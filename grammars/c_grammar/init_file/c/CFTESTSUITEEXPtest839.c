
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

int16_t x1 = -1;
int32_t x6 = 38696;
int64_t x12 = INT64_MAX;
static int64_t x14 = INT64_MIN;
uint8_t x16 = 10U;
volatile uint16_t x18 = UINT16_MAX;
int64_t x29 = -1LL;
uint32_t x33 = UINT32_MAX;
uint32_t x44 = UINT32_MAX;
uint64_t x53 = 761591508087LLU;
uint64_t x67 = UINT64_MAX;
static uint64_t x69 = 5664LLU;
uint8_t x73 = 13U;
volatile int16_t x76 = 1;
static int64_t x84 = INT64_MAX;
volatile int64_t x91 = -1LL;
static volatile int32_t x92 = INT32_MAX;
int64_t x93 = -1LL;
int32_t x94 = 2336235;
static int16_t x109 = 1;
volatile int64_t t31 = -140968867LL;
int32_t x133 = INT32_MIN;
int64_t t32 = 27284099881596LL;
int64_t x141 = INT64_MIN;
int16_t x146 = -422;
int64_t x147 = -88196798655LL;
uint8_t x153 = UINT8_MAX;
uint8_t x154 = 93U;
volatile int16_t x156 = -1;
int16_t x160 = INT16_MAX;
int32_t x165 = INT32_MIN;
int32_t t40 = INT32_MIN;
uint8_t x171 = UINT8_MAX;
volatile uint32_t t41 = UINT32_MAX;
static volatile uint8_t x175 = 49U;
int16_t x176 = INT16_MIN;
static volatile int32_t t42 = 14003042;
int32_t x177 = 56;
volatile int8_t x182 = 1;
volatile uint8_t x187 = 13U;
int8_t x199 = 16;
int64_t t48 = 45753743389965LL;
uint64_t x209 = UINT64_MAX;
int8_t x210 = -1;
uint8_t x211 = 58U;
static uint64_t x212 = UINT64_MAX;
int32_t x214 = INT32_MIN;
int16_t x218 = 12786;
int8_t x222 = INT8_MAX;
uint64_t x224 = 827009382400883237LLU;
int8_t x226 = INT8_MIN;
static uint8_t x227 = 3U;
static volatile int32_t x232 = -102;
volatile uint16_t x233 = UINT16_MAX;
volatile int32_t x237 = INT32_MIN;
int8_t x245 = INT8_MIN;
int32_t t60 = 5;
uint8_t x249 = 1U;
volatile int16_t x258 = INT16_MIN;
uint32_t x264 = UINT32_MAX;
volatile int8_t x269 = INT8_MIN;
static int8_t x272 = -2;
static int32_t x277 = INT32_MAX;
int16_t x286 = INT16_MAX;
uint16_t x290 = 1604U;
volatile uint32_t t71 = 810117U;
static volatile int64_t t72 = -46061416703LL;
int16_t x300 = INT16_MAX;
int8_t x304 = INT8_MIN;
volatile int32_t t74 = -168;
volatile int32_t t75 = 462421;
static volatile int8_t x309 = INT8_MAX;
int16_t x319 = INT16_MIN;
int64_t x321 = INT64_MAX;
static int8_t x328 = -1;
int16_t x337 = -1;
volatile uint64_t t83 = UINT64_MAX;
static volatile uint8_t x349 = UINT8_MAX;
static int32_t x350 = INT32_MIN;
static uint64_t x356 = UINT64_MAX;
volatile uint64_t t88 = UINT64_MAX;
int8_t x371 = INT8_MIN;
uint8_t x373 = UINT8_MAX;
static uint32_t x379 = 95U;
int32_t x380 = INT32_MIN;
uint16_t x383 = 1904U;
int32_t t94 = 7846;
volatile int32_t t95 = -33377;
int32_t x400 = INT32_MIN;
static uint16_t x411 = 1U;
int32_t x413 = INT32_MIN;
uint64_t x417 = 5660988840029969LLU;
int16_t x418 = -314;
uint64_t t101 = 6372274919LLU;
int64_t x422 = 2737115076447951LL;
static uint32_t x425 = 2U;
static int32_t x426 = INT32_MAX;
volatile int16_t x427 = INT16_MIN;
uint64_t t103 = 170306456435131LLU;
int32_t x429 = INT32_MIN;
int32_t x436 = INT32_MIN;
int32_t t105 = 168703;
uint8_t x452 = 15U;
int16_t x453 = INT16_MAX;
volatile uint8_t x454 = 1U;
volatile int64_t t109 = 2054LL;
int32_t x458 = INT32_MIN;
volatile int64_t t114 = -277301338172607376LL;
static uint16_t x481 = UINT16_MAX;
static uint16_t x482 = 3U;
static int8_t x488 = INT8_MAX;
static int64_t x489 = -1LL;
static uint16_t x494 = UINT16_MAX;
int64_t x514 = 5134LL;
int8_t x516 = INT8_MAX;
int64_t t122 = -45LL;
int32_t t123 = INT32_MIN;
int8_t x528 = INT8_MAX;
volatile int32_t x530 = INT32_MAX;
uint32_t x538 = 7U;
static int16_t x543 = -103;
volatile uint64_t t128 = UINT64_MAX;
uint16_t x545 = 525U;
static int8_t x549 = INT8_MAX;
static volatile int64_t t130 = 6007150688LL;
static int16_t x556 = INT16_MAX;
volatile int16_t x560 = -1;
uint64_t t133 = 3641133403LLU;
static uint16_t x568 = UINT16_MAX;
static uint32_t x570 = 1217U;
int8_t x571 = INT8_MIN;
uint32_t x573 = 0U;
static uint16_t x577 = UINT16_MAX;
int8_t x578 = -4;
uint16_t x583 = 856U;
int32_t x586 = -1;
uint64_t x589 = UINT64_MAX;
uint64_t x596 = 17574LLU;
int8_t x599 = INT8_MAX;
int32_t x600 = INT32_MIN;
volatile uint32_t x606 = 497266U;
uint32_t t144 = 79U;
int64_t x614 = INT64_MIN;
volatile int64_t t147 = 0LL;
volatile uint64_t x621 = 811851393938317506LLU;
volatile int64_t x628 = INT64_MIN;
static uint16_t x633 = 12335U;
static int32_t x650 = INT32_MAX;
int8_t x652 = INT8_MIN;
int8_t x656 = -1;
int16_t x660 = INT16_MIN;
uint16_t x669 = 7228U;
int16_t x670 = INT16_MIN;
volatile int16_t x671 = INT16_MIN;
static int32_t x672 = -1;
static int32_t t160 = -12134;
int64_t x683 = INT64_MAX;
int8_t x687 = INT8_MIN;
static uint64_t x691 = 41402733LLU;
volatile int8_t x703 = -8;
volatile uint64_t t168 = UINT64_MAX;
volatile int64_t x706 = INT64_MAX;
static uint8_t x707 = UINT8_MAX;
int16_t x708 = -1;
int32_t x715 = -1;
volatile int16_t x722 = INT16_MAX;
uint32_t t174 = 143127516U;
volatile uint32_t t177 = 24823U;
int64_t x744 = INT64_MIN;
volatile int64_t t178 = INT64_MIN;
static int64_t x750 = -1LL;
uint32_t x755 = UINT32_MAX;
volatile int16_t x766 = INT16_MIN;
int16_t x770 = INT16_MAX;
volatile uint64_t t184 = 28342792213124427LLU;
volatile uint64_t t185 = UINT64_MAX;
static uint32_t x783 = UINT32_MAX;
uint32_t t186 = 18479473U;
int16_t x795 = -5;
int8_t x801 = INT8_MAX;
uint16_t x803 = 88U;
int32_t t190 = -13736;
uint8_t x807 = 23U;
int64_t x808 = INT64_MAX;
int16_t x809 = -1;
uint32_t t192 = UINT32_MAX;
volatile int64_t t194 = 644063LL;
volatile uint32_t x825 = UINT32_MAX;
uint8_t x828 = 1U;
volatile int16_t x829 = 531;
uint16_t x830 = 57U;
volatile uint16_t x835 = 2U;
static volatile int8_t x837 = INT8_MAX;
uint8_t x838 = 90U;


void f0(void) {
    	static volatile int32_t x2 = INT32_MAX;
	static volatile int32_t x3 = INT32_MAX;
	int64_t x4 = -158723802LL;
	volatile int64_t t0 = 744269LL;

    t0 = (x1|((x2%x3)/x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 910LL;

    t1 = (x5|((x6%x7)/x8));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 87144309971LLU;
	uint64_t x11 = 935LLU;
	volatile uint64_t t2 = 201456757508246267LLU;

    t2 = (x9|((x10%x11)/x12));

    if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	static int8_t x15 = INT8_MIN;
	int64_t t3 = 1LL;

    t3 = (x13|((x14%x15)/x16));

    if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int32_t x19 = -5496793;
	volatile uint8_t x20 = 62U;
	static volatile uint32_t t4 = UINT32_MAX;

    t4 = (x17|((x18%x19)/x20));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 33388180U;
	volatile int32_t x22 = -1;
	static int8_t x23 = INT8_MAX;
	static volatile uint32_t x24 = 256468231U;
	static uint32_t t5 = 1649U;

    t5 = (x21|((x22%x23)/x24));

    if (t5 != 33388180U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x30 = UINT32_MAX;
	int64_t x31 = INT64_MAX;
	int8_t x32 = -3;
	int64_t t6 = 8893318052464001LL;

    t6 = (x29|((x30%x31)/x32));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	static uint32_t t7 = UINT32_MAX;

    t7 = (x33|((x34%x35)/x36));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -40;
	int32_t x38 = 448730;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = -5;
	int32_t t8 = -15;

    t8 = (x37|((x38%x39)/x40));

    if (t8 != -37) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 433;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = UINT8_MAX;
	uint32_t t9 = 1193689U;

    t9 = (x41|((x42%x43)/x44));

    if (t9 != 433U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x45 = -1;
	static int8_t x46 = 1;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = -1;
	int32_t t10 = -700872933;

    t10 = (x45|((x46%x47)/x48));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = -4270223172337684LL;
	uint8_t x50 = UINT8_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t x52 = INT32_MIN;
	static int64_t t11 = -448324315108LL;

    t11 = (x49|((x50%x51)/x52));

    if (t11 != -4270223172337684LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x54 = INT8_MIN;
	static int8_t x55 = INT8_MAX;
	static int32_t x56 = 4;
	volatile uint64_t t12 = 4938535826LLU;

    t12 = (x53|((x54%x55)/x56));

    if (t12 != 761591508087LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x57 = 0U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static volatile uint8_t x60 = 10U;
	volatile uint32_t t13 = 1951217U;

    t13 = (x57|((x58%x59)/x60));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -1;
	int16_t x62 = -1;
	int8_t x63 = -14;
	static int64_t x64 = 1793LL;
	int64_t t14 = 3663LL;

    t14 = (x61|((x62%x63)/x64));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 446983483416861LLU;
	static uint8_t x66 = 1U;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t15 = 136628637090LLU;

    t15 = (x65|((x66%x67)/x68));

    if (t15 != 446983483416861LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x70 = UINT8_MAX;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MAX;
	volatile uint64_t t16 = 405722204901760LLU;

    t16 = (x69|((x70%x71)/x72));

    if (t16 != 5664LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = -438;
	uint8_t x75 = 1U;
	static int32_t t17 = 659;

    t17 = (x73|((x74%x75)/x76));

    if (t17 != 13) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -23290616571LL;
	int16_t x78 = INT16_MIN;
	static int16_t x79 = -1;
	static int16_t x80 = INT16_MIN;
	int64_t t18 = -1945LL;

    t18 = (x77|((x78%x79)/x80));

    if (t18 != -23290616571LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x81 = INT64_MIN;
	int32_t x82 = -528442289;
	uint16_t x83 = 107U;
	volatile int64_t t19 = INT64_MIN;

    t19 = (x81|((x82%x83)/x84));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x85 = -2864451;
	int32_t x86 = -382;
	static int64_t x87 = -1591686893633588374LL;
	volatile int16_t x88 = -30;
	volatile int64_t t20 = 2523284690834LL;

    t20 = (x85|((x86%x87)/x88));

    if (t20 != -2864451LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1LL;
	uint64_t x90 = 110583528894215321LLU;
	volatile uint64_t t21 = UINT64_MAX;

    t21 = (x89|((x90%x91)/x92));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x95 = INT32_MIN;
	uint32_t x96 = 991886U;
	static int64_t t22 = 2333416882290LL;

    t22 = (x93|((x94%x95)/x96));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 3915U;
	int32_t x98 = INT32_MIN;
	uint64_t x99 = 89475510258701020LLU;
	volatile uint8_t x100 = UINT8_MAX;
	volatile uint64_t t23 = 184919104431LLU;

    t23 = (x97|((x98%x99)/x100));

    if (t23 != 57995914784763LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 30U;
	int16_t x102 = -1;
	uint32_t x103 = 29U;
	int32_t x104 = -1;
	static volatile uint32_t t24 = 1428U;

    t24 = (x101|((x102%x103)/x104));

    if (t24 != 30U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 8U;
	uint32_t x106 = 2735444U;
	volatile uint64_t x107 = UINT64_MAX;
	int32_t x108 = 1238;
	uint64_t t25 = 18146973575072146LLU;

    t25 = (x105|((x106%x107)/x108));

    if (t25 != 2217LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x110 = -1;
	uint64_t x111 = 12658LLU;
	static volatile uint32_t x112 = UINT32_MAX;
	volatile uint64_t t26 = 2064LLU;

    t26 = (x109|((x110%x111)/x112));

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x113 = UINT16_MAX;
	static int16_t x114 = INT16_MIN;
	int8_t x115 = 2;
	int64_t x116 = INT64_MAX;
	volatile int64_t t27 = -683091366424719667LL;

    t27 = (x113|((x114%x115)/x116));

    if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	volatile int32_t x118 = -1;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;
	int32_t t28 = 28281463;

    t28 = (x117|((x118%x119)/x120));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 21489U;
	volatile int8_t x122 = INT8_MAX;
	static volatile uint8_t x123 = UINT8_MAX;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t29 = 2LL;

    t29 = (x121|((x122%x123)/x124));

    if (t29 != 21489LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 13;
	int16_t x126 = INT16_MIN;
	static volatile uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t30 = -28769315;

    t30 = (x125|((x126%x127)/x128));

    if (t30 != 13) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -100;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile uint32_t x132 = UINT32_MAX;

    t31 = (x129|((x130%x131)/x132));

    if (t31 != -100LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = -1;
	static volatile int64_t x135 = 250262810880620549LL;
	static int8_t x136 = INT8_MIN;

    t32 = (x133|((x134%x135)/x136));

    if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = UINT64_MAX;
	static uint16_t x139 = 5346U;
	static uint32_t x140 = 32325051U;
	volatile uint64_t t33 = 2LLU;

    t33 = (x137|((x138%x139)/x140));

    if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x142 = 23U;
	static int32_t x143 = INT32_MIN;
	static int32_t x144 = INT32_MIN;
	static volatile int64_t t34 = INT64_MIN;

    t34 = (x141|((x142%x143)/x144));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 208077009529550178LL;
	int16_t x148 = INT16_MAX;
	int64_t t35 = -9LL;

    t35 = (x145|((x146%x147)/x148));

    if (t35 != 208077009529550178LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x149 = INT8_MIN;
	uint16_t x150 = 760U;
	int64_t x151 = 623561289756878LL;
	int32_t x152 = INT32_MIN;
	int64_t t36 = 6LL;

    t36 = (x149|((x150%x151)/x152));

    if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x155 = 3384829630114068381LL;
	static int64_t t37 = 1498670603975873LL;

    t37 = (x153|((x154%x155)/x156));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x157 = 4U;
	int16_t x158 = 1;
	static int16_t x159 = INT16_MIN;
	int32_t t38 = -352863;

    t38 = (x157|((x158%x159)/x160));

    if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -2001;
	int16_t x162 = -1;
	uint8_t x163 = 30U;
	int32_t x164 = INT32_MIN;
	int32_t t39 = -661402;

    t39 = (x161|((x162%x163)/x164));

    if (t39 != -2001) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x166 = UINT16_MAX;
	volatile uint8_t x167 = 24U;
	int32_t x168 = INT32_MAX;

    t40 = (x165|((x166%x167)/x168));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x170 = -1;
	static volatile int8_t x172 = INT8_MAX;

    t41 = (x169|((x170%x171)/x172));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;

    t42 = (x173|((x174%x175)/x176));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x178 = INT32_MIN;
	uint8_t x179 = 14U;
	int8_t x180 = -30;
	int32_t t43 = -96;

    t43 = (x177|((x178%x179)/x180));

    if (t43 != 56) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	volatile uint8_t x184 = 1U;
	volatile int32_t t44 = -10782;

    t44 = (x181|((x182%x183)/x184));

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x185 = INT64_MAX;
	int16_t x186 = -4;
	uint32_t x188 = 1597600197U;
	int64_t t45 = INT64_MAX;

    t45 = (x185|((x186%x187)/x188));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -1;
	static uint8_t x190 = UINT8_MAX;
	int32_t x191 = -89;
	uint32_t x192 = 2437201U;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (x189|((x190%x191)/x192));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = 79U;
	int16_t x194 = INT16_MAX;
	volatile int64_t x195 = -1LL;
	int64_t x196 = INT64_MAX;
	volatile int64_t t47 = 50LL;

    t47 = (x193|((x194%x195)/x196));

    if (t47 != 79LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x197 = 0;
	int64_t x198 = -38081652LL;
	uint32_t x200 = 31886U;

    t48 = (x197|((x198%x199)/x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = INT8_MIN;
	uint8_t x202 = 45U;
	volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = 12;
	volatile uint64_t t49 = 11963LLU;

    t49 = (x201|((x202%x203)/x204));

    if (t49 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = 745521865177047LL;
	volatile int32_t x206 = INT32_MAX;
	static int64_t x207 = INT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t50 = 176878839729LLU;

    t50 = (x205|((x206%x207)/x208));

    if (t50 != 745521865177047LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t t51 = UINT64_MAX;

    t51 = (x209|((x210%x211)/x212));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = -1LL;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	int64_t t52 = -12946314051973LL;

    t52 = (x213|((x214%x215)/x216));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = UINT16_MAX;
	int8_t x219 = INT8_MAX;
	static volatile int8_t x220 = INT8_MIN;
	int32_t t53 = -87533;

    t53 = (x217|((x218%x219)/x220));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MAX;
	int16_t x223 = INT16_MIN;
	uint64_t t54 = 619146613LLU;

    t54 = (x221|((x222%x223)/x224));

    if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = 17733507U;
	uint64_t x228 = 2040LLU;
	volatile uint64_t t55 = 6070978663LLU;

    t55 = (x225|((x226%x227)/x228));

    if (t55 != 9042521622493091LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = -3;
	static uint16_t x231 = 237U;
	volatile int32_t t56 = -911575;

    t56 = (x229|((x230%x231)/x232));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x234 = INT8_MIN;
	static int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t57 = -1593;

    t57 = (x233|((x234%x235)/x236));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x238 = 134801447384LLU;
	volatile uint32_t x239 = 27U;
	int32_t x240 = -222;
	static uint64_t t58 = 21577310182481084LLU;

    t58 = (x237|((x238%x239)/x240));

    if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	uint8_t x243 = 10U;
	int16_t x244 = 1;
	int32_t t59 = 1;

    t59 = (x241|((x242%x243)/x244));

    if (t59 != -121) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x246 = 37199665;
	int8_t x247 = -1;
	static int32_t x248 = 1122;

    t60 = (x245|((x246%x247)/x248));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x250 = -28;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t61 = 23119518;

    t61 = (x249|((x250%x251)/x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int32_t x254 = -67478;
	uint8_t x255 = 66U;
	int8_t x256 = INT8_MIN;
	uint64_t t62 = UINT64_MAX;

    t62 = (x253|((x254%x255)/x256));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x257 = -1;
	int64_t x259 = -1LL;
	int16_t x260 = INT16_MAX;
	volatile int64_t t63 = -1571LL;

    t63 = (x257|((x258%x259)/x260));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int64_t x263 = 100322796826LL;
	volatile int64_t t64 = 205989752940LL;

    t64 = (x261|((x262%x263)/x264));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = 715;
	static volatile int64_t x266 = INT64_MAX;
	static volatile int8_t x267 = -1;
	static uint16_t x268 = 1U;
	int64_t t65 = -147011070LL;

    t65 = (x265|((x266%x267)/x268));

    if (t65 != 715LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x270 = 7;
	int16_t x271 = INT16_MIN;
	static volatile int32_t t66 = 6162;

    t66 = (x269|((x270%x271)/x272));

    if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x273 = 23U;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MAX;
	volatile uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t67 = 1LLU;

    t67 = (x273|((x274%x275)/x276));

    if (t67 != 23LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	uint32_t t68 = 28134U;

    t68 = (x277|((x278%x279)/x280));

    if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x281 = 548U;
	int16_t x282 = INT16_MIN;
	int16_t x283 = -2419;
	static int16_t x284 = INT16_MIN;
	uint32_t t69 = 148530U;

    t69 = (x281|((x282%x283)/x284));

    if (t69 != 548U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x285 = INT16_MIN;
	volatile int8_t x287 = INT8_MIN;
	volatile uint8_t x288 = 2U;
	static volatile int32_t t70 = 0;

    t70 = (x285|((x286%x287)/x288));

    if (t70 != -32705) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x289 = 5203U;
	static volatile int8_t x291 = INT8_MIN;
	static uint32_t x292 = UINT32_MAX;

    t71 = (x289|((x290%x291)/x292));

    if (t71 != 5203U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = 6530172;
	uint16_t x294 = 431U;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 8U;

    t72 = (x293|((x294%x295)/x296));

    if (t72 != 6530173LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = INT64_MIN;
	volatile uint16_t x298 = UINT16_MAX;
	int16_t x299 = 14862;
	static int64_t t73 = INT64_MIN;

    t73 = (x297|((x298%x299)/x300));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = -53;
	static int16_t x302 = INT16_MAX;
	uint8_t x303 = 2U;

    t74 = (x301|((x302%x303)/x304));

    if (t74 != -53) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x305 = 5U;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;

    t75 = (x305|((x306%x307)/x308));

    if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x310 = UINT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = 59349LL;
	volatile int64_t t76 = -2952455488219016570LL;

    t76 = (x309|((x310%x311)/x312));

    if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = -112;
	int32_t x314 = 438;
	static int32_t x315 = INT32_MAX;
	volatile int32_t x316 = 3182033;
	static int32_t t77 = -41486;

    t77 = (x313|((x314%x315)/x316));

    if (t77 != -112) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = INT64_MIN;
	static int8_t x318 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	volatile int64_t t78 = INT64_MIN;

    t78 = (x317|((x318%x319)/x320));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x322 = 81U;
	static int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 36286411U;
	volatile int64_t t79 = INT64_MAX;

    t79 = (x321|((x322%x323)/x324));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = -1LL;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MIN;
	static volatile int64_t t80 = 3649423907LL;

    t80 = (x325|((x326%x327)/x328));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -168;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MAX;
	static volatile int64_t t81 = 152115138880LL;

    t81 = (x329|((x330%x331)/x332));

    if (t81 != -168LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x333 = 723807459;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = 36LL;
	int8_t x336 = -1;
	volatile int64_t t82 = 42984546530LL;

    t82 = (x333|((x334%x335)/x336));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x338 = -2507742LL;
	int32_t x339 = INT32_MAX;
	uint64_t x340 = 197LLU;

    t83 = (x337|((x338%x339)/x340));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x351 = UINT8_MAX;
	int8_t x352 = 7;
	static int32_t t84 = 26380;

    t84 = (x349|((x350%x351)/x352));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MIN;
	int8_t x354 = 10;
	int64_t x355 = -1LL;
	volatile uint64_t t85 = 108081497278LLU;

    t85 = (x353|((x354%x355)/x356));

    if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	volatile uint16_t x359 = 1004U;
	int32_t x360 = INT32_MAX;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x357|((x358%x359)/x360));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x361 = INT8_MIN;
	uint16_t x362 = 1222U;
	volatile int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -1;
	static int32_t t87 = 1;

    t87 = (x361|((x362%x363)/x364));

    if (t87 != -70) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x365 = 8894LLU;
	int16_t x366 = INT16_MAX;
	volatile int32_t x367 = INT32_MAX;
	int32_t x368 = -23085;

    t88 = (x365|((x366%x367)/x368));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MAX;
	uint16_t x370 = UINT16_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t89 = -3286198;

    t89 = (x369|((x370%x371)/x372));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x374 = INT8_MAX;
	volatile uint64_t x375 = 11049689496626LLU;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t90 = 10285270787LLU;

    t90 = (x373|((x374%x375)/x376));

    if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = 3;
	volatile int64_t x378 = INT64_MIN;
	static volatile int64_t t91 = 508429138589671LL;

    t91 = (x377|((x378%x379)/x380));

    if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = -6;
	uint8_t x382 = UINT8_MAX;
	static volatile uint8_t x384 = 6U;
	int32_t t92 = 180290;

    t92 = (x381|((x382%x383)/x384));

    if (t92 != -6) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	volatile uint32_t x386 = UINT32_MAX;
	int64_t x387 = INT64_MAX;
	volatile uint16_t x388 = 20630U;
	volatile int64_t t93 = -28967231914915LL;

    t93 = (x385|((x386%x387)/x388));

    if (t93 != 208383LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x389 = 1U;
	int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -33;

    t94 = (x389|((x390%x391)/x392));

    if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = INT8_MIN;
	int16_t x394 = 1;
	volatile int8_t x395 = -61;
	int32_t x396 = INT32_MAX;

    t95 = (x393|((x394%x395)/x396));

    if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x397 = 15U;
	static int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int64_t t96 = -403920613962699LL;

    t96 = (x397|((x398%x399)/x400));

    if (t96 != 15LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x401 = INT64_MIN;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = 498LL;
	static volatile uint64_t x404 = UINT64_MAX;
	volatile uint64_t t97 = 1LLU;

    t97 = (x401|((x402%x403)/x404));

    if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x405 = 8U;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = 1506;
	int64_t x408 = INT64_MIN;
	int64_t t98 = -2557LL;

    t98 = (x405|((x406%x407)/x408));

    if (t98 != 8LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	static int8_t x410 = INT8_MIN;
	int64_t x412 = 3049767LL;
	static volatile int64_t t99 = -12327267418LL;

    t99 = (x409|((x410%x411)/x412));

    if (t99 != 4294967295LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x414 = 1736346202LLU;
	int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	uint64_t t100 = 1921LLU;

    t100 = (x413|((x414%x415)/x416));

    if (t100 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x419 = -20;
	int8_t x420 = -1;

    t101 = (x417|((x418%x419)/x420));

    if (t101 != 5660988840029983LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = -14985;
	int64_t x423 = INT64_MAX;
	int32_t x424 = -1;
	volatile int64_t t102 = -4420176681692676LL;

    t102 = (x421|((x422%x423)/x424));

    if (t102 != -2697LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x428 = 6098LLU;

    t103 = (x425|((x426%x427)/x428));

    if (t103 != 7LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x430 = 8U;
	int8_t x431 = 1;
	volatile int8_t x432 = 6;
	int32_t t104 = INT32_MIN;

    t104 = (x429|((x430%x431)/x432));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = -6;
	uint8_t x434 = 0U;
	volatile int32_t x435 = 1;

    t105 = (x433|((x434%x435)/x436));

    if (t105 != -6) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x437 = 8U;
	volatile uint16_t x438 = 20884U;
	static int32_t x439 = -10125813;
	int64_t x440 = -1LL;
	volatile int64_t t106 = -5LL;

    t106 = (x437|((x438%x439)/x440));

    if (t106 != -20884LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = 174868728LLU;
	uint64_t x446 = UINT64_MAX;
	int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MAX;
	volatile uint64_t t107 = 6271900858LLU;

    t107 = (x445|((x446%x447)/x448));

    if (t107 != 174868728LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MAX;
	static volatile int16_t x450 = 1;
	uint64_t x451 = 458591532483900117LLU;
	uint64_t t108 = 10433024512513273LLU;

    t108 = (x449|((x450%x451)/x452));

    if (t108 != 32767LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x455 = -140627826LL;
	int64_t x456 = 731973LL;

    t109 = (x453|((x454%x455)/x456));

    if (t109 != 32767LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x457 = -7;
	int8_t x459 = -1;
	int64_t x460 = -9168LL;
	int64_t t110 = -583500832304LL;

    t110 = (x457|((x458%x459)/x460));

    if (t110 != -7LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = -1;
	int8_t x462 = -1;
	int16_t x463 = 5037;
	int8_t x464 = INT8_MIN;
	volatile int32_t t111 = -1;

    t111 = (x461|((x462%x463)/x464));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = -1686772328600LL;
	int64_t x466 = INT64_MAX;
	static uint32_t x467 = 9U;
	volatile int64_t x468 = 3815336955349050LL;
	int64_t t112 = -626LL;

    t112 = (x465|((x466%x467)/x468));

    if (t112 != -1686772328600LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x469 = UINT16_MAX;
	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	volatile uint64_t x472 = 64752199081LLU;
	volatile uint64_t t113 = 13219297146LLU;

    t113 = (x469|((x470%x471)/x472));

    if (t113 != 284884991LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x473 = 13866U;
	static int16_t x474 = -1095;
	int16_t x475 = 33;
	int64_t x476 = -2278LL;

    t114 = (x473|((x474%x475)/x476));

    if (t114 != 13866LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x483 = 224856666U;
	int8_t x484 = INT8_MIN;
	static uint32_t t115 = 0U;

    t115 = (x481|((x482%x483)/x484));

    if (t115 != 65535U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x485 = 1U;
	uint16_t x486 = 5U;
	int16_t x487 = 34;
	volatile int32_t t116 = -2968083;

    t116 = (x485|((x486%x487)/x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x490 = 2;
	int8_t x491 = INT8_MAX;
	int64_t x492 = 256021LL;
	int64_t t117 = 19178958729164LL;

    t117 = (x489|((x490%x491)/x492));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x493 = UINT32_MAX;
	int64_t x495 = -1LL;
	int64_t x496 = INT64_MIN;
	volatile int64_t t118 = 67LL;

    t118 = (x493|((x494%x495)/x496));

    if (t118 != 4294967295LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = 7;
	int64_t x498 = INT64_MAX;
	int64_t x499 = INT64_MIN;
	static uint8_t x500 = UINT8_MAX;
	int64_t t119 = -26084612711673LL;

    t119 = (x497|((x498%x499)/x500));

    if (t119 != 36170086419038343LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x501 = 3654;
	uint32_t x502 = 17650232U;
	uint32_t x503 = UINT32_MAX;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t120 = -49900LL;

    t120 = (x501|((x502%x503)/x504));

    if (t120 != 3654LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x505 = 10245155826LLU;
	int32_t x506 = INT32_MIN;
	int16_t x507 = 1;
	int8_t x508 = INT8_MAX;
	volatile uint64_t t121 = 348403944309894LLU;

    t121 = (x505|((x506%x507)/x508));

    if (t121 != 10245155826LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x513 = INT8_MAX;
	uint8_t x515 = 10U;

    t122 = (x513|((x514%x515)/x516));

    if (t122 != 127LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MAX;
	uint8_t x519 = UINT8_MAX;
	int8_t x520 = INT8_MIN;

    t123 = (x517|((x518%x519)/x520));

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x525 = 9U;
	volatile uint64_t x526 = 6775443LLU;
	volatile int16_t x527 = -383;
	volatile uint64_t t124 = 140890LLU;

    t124 = (x525|((x526%x527)/x528));

    if (t124 != 53357LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x529 = -1LL;
	static int16_t x531 = 1;
	int32_t x532 = -1;
	volatile int64_t t125 = -686LL;

    t125 = (x529|((x530%x531)/x532));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x533 = 871916094U;
	static uint16_t x534 = 7337U;
	uint16_t x535 = UINT16_MAX;
	static uint32_t x536 = 110117907U;
	volatile uint32_t t126 = 250100U;

    t126 = (x533|((x534%x535)/x536));

    if (t126 != 871916094U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile int32_t x539 = -1008185;
	volatile int8_t x540 = -22;
	volatile uint32_t t127 = 64244U;

    t127 = (x537|((x538%x539)/x540));

    if (t127 != 65535U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = -1;
	uint64_t x542 = 82744791LLU;
	uint16_t x544 = UINT16_MAX;

    t128 = (x541|((x542%x543)/x544));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x546 = UINT64_MAX;
	uint16_t x547 = UINT16_MAX;
	int32_t x548 = -919395;
	static uint64_t t129 = 14776273LLU;

    t129 = (x545|((x546%x547)/x548));

    if (t129 != 525LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x550 = -1;
	uint32_t x551 = 1U;
	static volatile int64_t x552 = -1LL;

    t130 = (x549|((x550%x551)/x552));

    if (t130 != 127LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x553 = INT32_MAX;
	int32_t x554 = INT32_MIN;
	uint32_t x555 = 5561U;
	volatile uint32_t t131 = 1343U;

    t131 = (x553|((x554%x555)/x556));

    if (t131 != 2147483647U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x557 = UINT8_MAX;
	static volatile int32_t x558 = INT32_MAX;
	int64_t x559 = INT64_MIN;
	volatile int64_t t132 = 141046865LL;

    t132 = (x557|((x558%x559)/x560));

    if (t132 != -2147483393LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	int64_t x562 = INT64_MAX;
	uint64_t x563 = 4846269286887585LLU;
	volatile int8_t x564 = INT8_MIN;

    t133 = (x561|((x562%x563)/x564));

    if (t133 != 65535LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = -1;
	int16_t x566 = INT16_MAX;
	int8_t x567 = -13;
	volatile int32_t t134 = 216182777;

    t134 = (x565|((x566%x567)/x568));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x572 = INT64_MAX;
	int64_t t135 = 1701279LL;

    t135 = (x569|((x570%x571)/x572));

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x574 = INT32_MIN;
	volatile int64_t x575 = INT64_MAX;
	volatile int64_t x576 = 529592266LL;
	int64_t t136 = 1342556971357LL;

    t136 = (x573|((x574%x575)/x576));

    if (t136 != -4LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x579 = INT16_MAX;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t137 = 27;

    t137 = (x577|((x578%x579)/x580));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x581 = UINT16_MAX;
	static int16_t x582 = -1;
	volatile uint16_t x584 = UINT16_MAX;
	int32_t t138 = -77030301;

    t138 = (x581|((x582%x583)/x584));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x585 = 509U;
	volatile uint16_t x587 = 26752U;
	int64_t x588 = 4015LL;
	static int64_t t139 = -57311029LL;

    t139 = (x585|((x586%x587)/x588));

    if (t139 != 509LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x590 = -1LL;
	static uint16_t x591 = UINT16_MAX;
	int64_t x592 = INT64_MAX;
	volatile uint64_t t140 = UINT64_MAX;

    t140 = (x589|((x590%x591)/x592));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x593 = 25U;
	volatile uint16_t x594 = 0U;
	int64_t x595 = 47969736395LL;
	static volatile uint64_t t141 = 16888LLU;

    t141 = (x593|((x594%x595)/x596));

    if (t141 != 25LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = 2LL;
	volatile int8_t x598 = INT8_MIN;
	volatile int64_t t142 = -9027321LL;

    t142 = (x597|((x598%x599)/x600));

    if (t142 != 2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x601 = 17889U;
	int64_t x602 = -1LL;
	uint8_t x603 = 2U;
	int16_t x604 = -1;
	volatile int64_t t143 = 105517196LL;

    t143 = (x601|((x602%x603)/x604));

    if (t143 != 17889LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x605 = 1;
	int32_t x607 = INT32_MIN;
	static int32_t x608 = INT32_MIN;

    t144 = (x605|((x606%x607)/x608));

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x609 = -2LL;
	int16_t x610 = -1;
	uint8_t x611 = 17U;
	int16_t x612 = INT16_MIN;
	volatile int64_t t145 = -2745360820083811LL;

    t145 = (x609|((x610%x611)/x612));

    if (t145 != -2LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x613 = 4U;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = 83U;
	int64_t t146 = -14058986371643756LL;

    t146 = (x613|((x614%x615)/x616));

    if (t146 != 4LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x617 = 3LL;
	static volatile int32_t x618 = INT32_MIN;
	static int64_t x619 = INT64_MIN;
	volatile int32_t x620 = -929562;

    t147 = (x617|((x618%x619)/x620));

    if (t147 != 2311LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x622 = UINT8_MAX;
	int32_t x623 = -26838117;
	static uint64_t x624 = 593032LLU;
	uint64_t t148 = 10291960964849473LLU;

    t148 = (x621|((x622%x623)/x624));

    if (t148 != 811851393938317506LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x625 = INT32_MIN;
	static uint64_t x626 = 46646LLU;
	int64_t x627 = -1LL;
	volatile uint64_t t149 = 45587979LLU;

    t149 = (x625|((x626%x627)/x628));

    if (t149 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x629 = 27U;
	int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MAX;
	volatile uint16_t x632 = 1U;
	volatile int64_t t150 = -3000951913LL;

    t150 = (x629|((x630%x631)/x632));

    if (t150 != -32741LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x634 = 13U;
	int16_t x635 = 5;
	volatile int32_t x636 = -1;
	int32_t t151 = -1;

    t151 = (x633|((x634%x635)/x636));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x637 = -1;
	static volatile uint8_t x638 = UINT8_MAX;
	int64_t x639 = INT64_MIN;
	int16_t x640 = INT16_MIN;
	int64_t t152 = 12085637987345739LL;

    t152 = (x637|((x638%x639)/x640));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -1276400082755LL;
	int8_t x642 = INT8_MIN;
	volatile int32_t x643 = 1141445;
	int8_t x644 = INT8_MIN;
	volatile int64_t t153 = 61903049205461LL;

    t153 = (x641|((x642%x643)/x644));

    if (t153 != -1276400082755LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x645 = -20;
	uint64_t x646 = UINT64_MAX;
	int64_t x647 = -1763522230142842967LL;
	uint8_t x648 = UINT8_MAX;
	static uint64_t t154 = 815331231634206LLU;

    t154 = (x645|((x646%x647)/x648));

    if (t154 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x649 = 3U;
	int32_t x651 = -182406;
	volatile int32_t t155 = -1;

    t155 = (x649|((x650%x651)/x652));

    if (t155 != -137) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	int8_t x654 = INT8_MAX;
	int32_t x655 = INT32_MAX;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = (x653|((x654%x655)/x656));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = INT16_MIN;
	static int64_t x658 = -118LL;
	uint16_t x659 = 22820U;
	volatile int64_t t157 = -57LL;

    t157 = (x657|((x658%x659)/x660));

    if (t157 != -32768LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x661 = -414885;
	int16_t x662 = 27;
	volatile int32_t x663 = INT32_MAX;
	uint32_t x664 = UINT32_MAX;
	static uint32_t t158 = 1U;

    t158 = (x661|((x662%x663)/x664));

    if (t158 != 4294552411U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x665 = 143;
	volatile uint64_t x666 = 25615747557757150LLU;
	int8_t x667 = 2;
	static volatile int32_t x668 = INT32_MAX;
	static uint64_t t159 = 6491LLU;

    t159 = (x665|((x666%x667)/x668));

    if (t159 != 143LLU) { NG(); } else { ; }
	
}

void f160(void) {
    

    t160 = (x669|((x670%x671)/x672));

    if (t160 != 7228) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = -1;
	int64_t x674 = -1LL;
	int32_t x675 = -160;
	int16_t x676 = -5;
	int64_t t161 = -12453086997684LL;

    t161 = (x673|((x674%x675)/x676));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x677 = 1052340U;
	static volatile uint8_t x678 = UINT8_MAX;
	uint64_t x679 = UINT64_MAX;
	volatile int64_t x680 = -74846576LL;
	volatile uint64_t t162 = 293647593174131669LLU;

    t162 = (x677|((x678%x679)/x680));

    if (t162 != 1052340LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = 124U;
	uint32_t x684 = 14343208U;
	int64_t t163 = INT64_MAX;

    t163 = (x681|((x682%x683)/x684));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = -40;
	uint32_t x686 = 37U;
	int32_t x688 = 11;
	uint32_t t164 = 231107U;

    t164 = (x685|((x686%x687)/x688));

    if (t164 != 4294967259U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x689 = INT64_MIN;
	int8_t x690 = INT8_MIN;
	int16_t x692 = -1;
	volatile uint64_t t165 = 856817LLU;

    t165 = (x689|((x690%x691)/x692));

    if (t165 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = INT32_MAX;
	volatile int8_t x694 = -7;
	volatile int8_t x695 = INT8_MIN;
	uint32_t x696 = UINT32_MAX;
	volatile uint32_t t166 = 1748U;

    t166 = (x693|((x694%x695)/x696));

    if (t166 != 2147483647U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = -1;
	volatile uint64_t x698 = UINT64_MAX;
	int32_t x699 = 10056397;
	static int64_t x700 = INT64_MAX;
	uint64_t t167 = UINT64_MAX;

    t167 = (x697|((x698%x699)/x700));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x701 = -1;
	volatile uint64_t x702 = 549484LLU;
	uint16_t x704 = 14U;

    t168 = (x701|((x702%x703)/x704));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x705 = 10657U;
	int64_t t169 = -3007LL;

    t169 = (x705|((x706%x707)/x708));

    if (t169 != -95LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x709 = 1U;
	int8_t x710 = 6;
	static volatile int8_t x711 = -1;
	static int32_t x712 = 139;
	volatile int32_t t170 = -85780409;

    t170 = (x709|((x710%x711)/x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = -1;
	static volatile int64_t x714 = -1LL;
	volatile uint32_t x716 = 6U;
	volatile int64_t t171 = 356506LL;

    t171 = (x713|((x714%x715)/x716));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x717 = -18855650425773256LL;
	volatile uint8_t x718 = UINT8_MAX;
	static uint32_t x719 = UINT32_MAX;
	int64_t x720 = INT64_MIN;
	int64_t t172 = -15162262374010678LL;

    t172 = (x717|((x718%x719)/x720));

    if (t172 != -18855650425773256LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x721 = -281;
	volatile uint8_t x723 = 110U;
	static int8_t x724 = INT8_MAX;
	volatile int32_t t173 = -24717;

    t173 = (x721|((x722%x723)/x724));

    if (t173 != -281) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x725 = 0;
	int8_t x726 = -44;
	uint8_t x727 = 9U;
	static volatile uint32_t x728 = 645306U;

    t174 = (x725|((x726%x727)/x728));

    if (t174 != 6655U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x729 = 1U;
	int32_t x730 = -1;
	int8_t x731 = 5;
	uint32_t x732 = 5100U;
	volatile uint32_t t175 = 95752124U;

    t175 = (x729|((x730%x731)/x732));

    if (t175 != 842151U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x733 = 1788U;
	int8_t x734 = INT8_MAX;
	int16_t x735 = 15;
	volatile uint8_t x736 = 19U;
	int32_t t176 = -999254;

    t176 = (x733|((x734%x735)/x736));

    if (t176 != 1788) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x737 = 14;
	uint32_t x738 = UINT32_MAX;
	volatile int16_t x739 = -1;
	volatile int32_t x740 = INT32_MIN;

    t177 = (x737|((x738%x739)/x740));

    if (t177 != 14U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x741 = INT64_MIN;
	uint16_t x742 = 51U;
	volatile uint8_t x743 = UINT8_MAX;

    t178 = (x741|((x742%x743)/x744));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x749 = 29U;
	int64_t x751 = 1542872048004LL;
	volatile uint32_t x752 = 7513U;
	volatile int64_t t179 = -57308488843LL;

    t179 = (x749|((x750%x751)/x752));

    if (t179 != 29LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x753 = INT32_MAX;
	static uint32_t x754 = 1255U;
	int64_t x756 = INT64_MIN;
	volatile int64_t t180 = 118LL;

    t180 = (x753|((x754%x755)/x756));

    if (t180 != 2147483647LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = INT32_MIN;
	int64_t x758 = 4168252728325951793LL;
	int32_t x759 = -1;
	int32_t x760 = 14979;
	volatile int64_t t181 = -265143675LL;

    t181 = (x757|((x758%x759)/x760));

    if (t181 != -2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = 972356434U;
	int64_t x762 = -61256591151478LL;
	static uint16_t x763 = UINT16_MAX;
	int8_t x764 = -6;
	volatile int64_t t182 = -3223LL;

    t182 = (x761|((x762%x763)/x764));

    if (t182 != 972357587LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x765 = UINT16_MAX;
	int16_t x767 = INT16_MAX;
	uint32_t x768 = UINT32_MAX;
	uint32_t t183 = 148662380U;

    t183 = (x765|((x766%x767)/x768));

    if (t183 != 65535U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = INT32_MAX;
	static volatile uint64_t x771 = UINT64_MAX;
	uint8_t x772 = 3U;

    t184 = (x769|((x770%x771)/x772));

    if (t184 != 2147483647LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	static uint64_t x775 = UINT64_MAX;
	static volatile int16_t x776 = INT16_MIN;

    t185 = (x773|((x774%x775)/x776));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x781 = INT8_MIN;
	volatile uint8_t x782 = 17U;
	static int16_t x784 = -3;

    t186 = (x781|((x782%x783)/x784));

    if (t186 != 4294967168U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x785 = 18264LLU;
	int8_t x786 = 45;
	static volatile int32_t x787 = INT32_MAX;
	static uint64_t x788 = 10385974045137LLU;
	static uint64_t t187 = 3672LLU;

    t187 = (x785|((x786%x787)/x788));

    if (t187 != 18264LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x793 = -25;
	int16_t x794 = 61;
	volatile int32_t x796 = INT32_MIN;
	int32_t t188 = -56;

    t188 = (x793|((x794%x795)/x796));

    if (t188 != -25) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x797 = 13U;
	int8_t x798 = -3;
	static int32_t x799 = INT32_MAX;
	int16_t x800 = -1;
	static volatile int32_t t189 = 28;

    t189 = (x797|((x798%x799)/x800));

    if (t189 != 15) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x802 = -1;
	static int32_t x804 = INT32_MAX;

    t190 = (x801|((x802%x803)/x804));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MAX;
	int64_t t191 = INT64_MIN;

    t191 = (x805|((x806%x807)/x808));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x810 = 5U;
	static volatile uint32_t x811 = UINT32_MAX;
	uint16_t x812 = UINT16_MAX;

    t192 = (x809|((x810%x811)/x812));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x813 = 1U;
	int16_t x814 = INT16_MAX;
	int32_t x815 = -33;
	int64_t x816 = -1LL;
	int64_t t193 = 2648243454554466LL;

    t193 = (x813|((x814%x815)/x816));

    if (t193 != -31LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x817 = 12708;
	static volatile int64_t x818 = INT64_MAX;
	int64_t x819 = INT64_MAX;
	static int32_t x820 = 668;

    t194 = (x817|((x818%x819)/x820));

    if (t194 != 12708LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x821 = INT16_MIN;
	uint64_t x822 = 110483050318419LLU;
	int8_t x823 = -1;
	uint64_t x824 = UINT64_MAX;
	uint64_t t195 = 101976506429385LLU;

    t195 = (x821|((x822%x823)/x824));

    if (t195 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MAX;
	static volatile uint32_t t196 = UINT32_MAX;

    t196 = (x825|((x826%x827)/x828));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x831 = INT8_MAX;
	uint8_t x832 = 3U;
	static volatile int32_t t197 = 31;

    t197 = (x829|((x830%x831)/x832));

    if (t197 != 531) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = INT64_MIN;
	int64_t x834 = INT64_MIN;
	int16_t x836 = INT16_MAX;
	int64_t t198 = INT64_MIN;

    t198 = (x833|((x834%x835)/x836));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x839 = -1LL;
	volatile int16_t x840 = INT16_MAX;
	int64_t t199 = 5033729956588634LL;

    t199 = (x837|((x838%x839)/x840));

    if (t199 != 127LL) { NG(); } else { ; }
	
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

