
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

int8_t x5 = 15;
int16_t x12 = INT16_MIN;
volatile int32_t t2 = 81231001;
static volatile int32_t t3 = -159;
static uint16_t x19 = 10U;
static uint32_t x21 = 0U;
int32_t t5 = -270;
volatile int16_t x33 = -1;
uint64_t x35 = 526094995LLU;
static int8_t x36 = 46;
volatile int32_t t14 = -980901820;
int32_t x66 = -111019650;
int64_t x71 = -816736875403LL;
uint64_t x81 = 20618774367810LLU;
int32_t x85 = INT32_MAX;
volatile int32_t x87 = 74568810;
int32_t t19 = 442;
int8_t x94 = 11;
static int32_t t20 = -828142;
int32_t x101 = INT32_MIN;
uint64_t x103 = 11140666LLU;
static volatile int32_t t22 = -8497;
uint64_t x108 = 3308507316LLU;
int64_t x109 = 27223507LL;
volatile int32_t t25 = 220589982;
int8_t x122 = INT8_MAX;
static int32_t t28 = -15;
int16_t x129 = INT16_MAX;
uint16_t x131 = 110U;
int32_t t29 = 840;
volatile int32_t x133 = 11978676;
uint16_t x136 = 344U;
static int32_t x139 = INT32_MIN;
static uint64_t x150 = UINT64_MAX;
volatile uint16_t x153 = UINT16_MAX;
volatile int64_t x157 = -1LL;
int8_t x158 = INT8_MIN;
int16_t x162 = INT16_MIN;
static uint32_t x163 = 97607U;
int16_t x167 = 2066;
static int16_t x169 = -1;
int64_t x172 = 190005450LL;
volatile uint8_t x181 = UINT8_MAX;
int64_t x183 = INT64_MIN;
static int16_t x185 = -1;
int32_t t42 = 17;
int8_t x199 = INT8_MIN;
int16_t x205 = INT16_MIN;
uint16_t x216 = UINT16_MAX;
int32_t t47 = 263022386;
int64_t x219 = 19LL;
uint32_t x230 = 821U;
volatile int32_t t52 = -6081;
volatile int32_t t54 = -2992;
int64_t x247 = -1LL;
uint64_t x263 = 314436413599LLU;
int64_t x267 = -1LL;
int16_t x273 = 1;
static int8_t x275 = INT8_MIN;
static volatile int16_t x278 = -1;
static volatile int32_t t62 = 504;
volatile int64_t x281 = -52019605358LL;
volatile int64_t x290 = 34LL;
volatile int8_t x294 = INT8_MAX;
volatile int16_t x296 = INT16_MAX;
int32_t t67 = -32692;
volatile int8_t x303 = -1;
int32_t x325 = -1;
int16_t x329 = -11;
volatile int8_t x331 = -1;
int32_t t74 = 10831131;
int64_t x337 = INT64_MIN;
static volatile int16_t x344 = INT16_MAX;
static volatile uint64_t x345 = 121258488159653LLU;
uint32_t x346 = 9863900U;
volatile int32_t t79 = 5151384;
int64_t x363 = INT64_MIN;
int8_t x364 = 0;
uint8_t x367 = 10U;
int8_t x376 = INT8_MIN;
static int32_t t86 = -3;
static uint32_t x385 = UINT32_MAX;
static int32_t x388 = -24377;
uint64_t x389 = 1055880209775LLU;
static int16_t x392 = INT16_MIN;
static uint64_t x395 = 7LLU;
uint8_t x397 = 35U;
int16_t x399 = INT16_MAX;
int32_t t90 = 121;
int64_t x401 = 78560715319779116LL;
int32_t t91 = 97525;
uint32_t x406 = 12395U;
uint32_t x412 = 105U;
uint64_t x414 = 864628776878LLU;
volatile int32_t t95 = 35166305;
int32_t t96 = 24;
int16_t x427 = INT16_MIN;
static int64_t x442 = INT64_MAX;
uint8_t x444 = 1U;
int16_t x471 = -1;
static int8_t x473 = 3;
uint8_t x474 = 2U;
int32_t x483 = -1;
int32_t x484 = INT32_MAX;
static volatile int32_t t111 = -103656;
int32_t t113 = 12820259;
int16_t x510 = INT16_MIN;
uint64_t x512 = UINT64_MAX;
int16_t x514 = -1;
uint64_t x525 = 273971249865590272LLU;
uint64_t x526 = 174466929416354LLU;
int16_t x528 = -1;
static int16_t x542 = -1;
int32_t x553 = 3;
volatile uint16_t x563 = UINT16_MAX;
int32_t t128 = 245020;
int8_t x569 = -1;
int32_t x583 = -1;
static int32_t t132 = 21;
uint32_t x589 = UINT32_MAX;
int8_t x591 = INT8_MIN;
static uint16_t x593 = 55U;
uint32_t x595 = 39U;
int32_t x596 = INT32_MIN;
volatile uint8_t x604 = 7U;
int32_t t137 = 5;
static volatile int16_t x605 = INT16_MIN;
uint8_t x608 = 12U;
int16_t x614 = INT16_MAX;
int8_t x615 = INT8_MAX;
int8_t x616 = 17;
int32_t x618 = -14096217;
static int8_t x627 = INT8_MAX;
int64_t x628 = INT64_MIN;
int64_t x630 = 20498LL;
static uint16_t x637 = 9781U;
static int32_t x638 = -6;
int32_t t146 = 52956645;
static int8_t x643 = INT8_MAX;
uint16_t x646 = 3U;
int16_t x664 = INT16_MIN;
int8_t x666 = INT8_MIN;
uint32_t x674 = 234U;
volatile int32_t t154 = -95294505;
uint8_t x677 = UINT8_MAX;
int64_t x678 = 247692689LL;
volatile int32_t t157 = 1;
static int32_t x702 = INT32_MIN;
uint8_t x703 = 2U;
int8_t x725 = 0;
uint8_t x733 = UINT8_MAX;
uint32_t x738 = 2U;
uint8_t x744 = 8U;
static int16_t x749 = 193;
int32_t t170 = 1348;
int32_t x762 = INT32_MIN;
static int16_t x764 = 1;
uint16_t x765 = UINT16_MAX;
uint64_t x772 = 230LLU;
volatile int32_t t173 = -281963223;
int16_t x773 = INT16_MIN;
volatile int32_t t174 = -3711154;
uint8_t x777 = 1U;
uint32_t x781 = 126U;
volatile int16_t x784 = INT16_MAX;
int32_t t176 = 1288485;
int8_t x789 = INT8_MAX;
static uint64_t x794 = UINT64_MAX;
int16_t x806 = INT16_MIN;
static volatile int32_t x807 = INT32_MAX;
int8_t x808 = 10;
volatile int32_t t181 = -3297966;
static int64_t x814 = -1LL;
static volatile int32_t t183 = -233;
static int16_t x828 = -1;
int16_t x834 = INT16_MIN;
static int64_t x836 = INT64_MAX;
static volatile int32_t t188 = 3041;
volatile int32_t x844 = 92;
uint64_t x846 = 23193532394LLU;
int8_t x847 = INT8_MIN;
int16_t x849 = INT16_MAX;
uint64_t x851 = 981454LLU;
int32_t x853 = INT32_MAX;
volatile uint64_t x858 = 5971144994339LLU;
int32_t t195 = 103595;
int64_t x867 = -1LL;
int64_t x879 = INT64_MAX;
int32_t t199 = -277159;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = 342U;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 1097;

    t0 = (x1>((x2&x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	volatile uint32_t x7 = 646U;
	static uint16_t x8 = 976U;
	static int32_t t1 = 814;

    t1 = (x5>((x6&x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 3408;
	volatile int64_t x10 = -3559444LL;
	int8_t x11 = INT8_MAX;

    t2 = (x9>((x10&x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static uint16_t x14 = 11U;
	uint32_t x15 = 8U;
	static uint8_t x16 = 0U;

    t3 = (x13>((x14&x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	int8_t x20 = -50;
	volatile int32_t t4 = -6214;

    t4 = (x17>((x18&x19)+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 1;
	int16_t x23 = INT16_MIN;
	int64_t x24 = 54626LL;

    t5 = (x21>((x22&x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	uint16_t x26 = 56U;
	int32_t x27 = -249;
	int64_t x28 = -8652298779656237LL;
	int32_t t6 = 1;

    t6 = (x25>((x26&x27)+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 19061575067960LL;
	static uint64_t x30 = 482703LLU;
	int8_t x31 = 1;
	static volatile int32_t x32 = 15;
	int32_t t7 = -601;

    t7 = (x29>((x30&x31)+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 8359822801223288072LLU;
	volatile int32_t t8 = -423096;

    t8 = (x33>((x34&x35)+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 14371296579LL;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 1U;
	static uint8_t x40 = 0U;
	int32_t t9 = -29799;

    t9 = (x37>((x38&x39)+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 12;
	static int32_t x42 = INT32_MAX;
	int32_t x43 = -1;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -77427;

    t10 = (x41>((x42&x43)+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 376391112U;
	volatile uint8_t x46 = UINT8_MAX;
	static int64_t x47 = 244237127981129LL;
	volatile uint64_t x48 = 635126LLU;
	volatile int32_t t11 = 14151;

    t11 = (x45>((x46&x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 553;
	int64_t x50 = -1LL;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -485852;

    t12 = (x49>((x50&x51)+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = INT8_MAX;
	volatile int32_t t13 = -102691;

    t13 = (x57>((x58&x59)+x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = -1;
	static int32_t x64 = INT32_MIN;

    t14 = (x61>((x62&x63)+x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MAX;
	volatile int16_t x67 = INT16_MAX;
	uint32_t x68 = 408229594U;
	int32_t t15 = 129359760;

    t15 = (x65>((x66&x67)+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MAX;
	volatile int16_t x70 = -1;
	static int8_t x72 = 0;
	static volatile int32_t t16 = -21;

    t16 = (x69>((x70&x71)+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -1;
	uint16_t x74 = 10U;
	int32_t x75 = 0;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t17 = 4;

    t17 = (x73>((x74&x75)+x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x82 = 10571U;
	uint16_t x83 = UINT16_MAX;
	static uint64_t x84 = UINT64_MAX;
	volatile int32_t t18 = -442722168;

    t18 = (x81>((x82&x83)+x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x86 = INT64_MAX;
	volatile int32_t x88 = INT32_MAX;

    t19 = (x85>((x86&x87)+x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x93 = UINT32_MAX;
	static uint64_t x95 = 7803810451756LLU;
	static uint64_t x96 = UINT64_MAX;

    t20 = (x93>((x94&x95)+x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MAX;
	int64_t x99 = 35LL;
	uint64_t x100 = 139LLU;
	int32_t t21 = 8283190;

    t21 = (x97>((x98&x99)+x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x102 = 142;
	uint32_t x104 = UINT32_MAX;

    t22 = (x101>((x102&x103)+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x105 = 2628LLU;
	int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t t23 = 3282;

    t23 = (x105>((x106&x107)+x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x110 = 25804808086LL;
	volatile uint8_t x111 = UINT8_MAX;
	uint32_t x112 = 2845976U;
	static volatile int32_t t24 = -312;

    t24 = (x109>((x110&x111)+x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MAX;
	int8_t x114 = -1;
	int64_t x115 = 3500569875881492LL;
	uint64_t x116 = 57209134LLU;

    t25 = (x113>((x114&x115)+x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = 0;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t26 = 1424871;

    t26 = (x117>((x118&x119)+x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -1;
	int8_t x123 = -3;
	int64_t x124 = -1327210411522325LL;
	int32_t t27 = -3;

    t27 = (x121>((x122&x123)+x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	uint32_t x128 = UINT32_MAX;

    t28 = (x125>((x126&x127)+x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x130 = 0U;
	int8_t x132 = -6;

    t29 = (x129>((x130&x131)+x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x134 = -3370LL;
	static int64_t x135 = INT64_MIN;
	static volatile int32_t t30 = 114;

    t30 = (x133>((x134&x135)+x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = -1;
	static volatile uint64_t x138 = UINT64_MAX;
	static int16_t x140 = INT16_MIN;
	static int32_t t31 = 20188;

    t31 = (x137>((x138&x139)+x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = 0U;
	uint64_t x142 = 5135071907738335949LLU;
	volatile int64_t x143 = 7891LL;
	static int16_t x144 = -15;
	volatile int32_t t32 = -8487;

    t32 = (x141>((x142&x143)+x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x145 = -1LL;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MAX;
	static volatile int16_t x148 = -1;
	volatile int32_t t33 = 56740;

    t33 = (x145>((x146&x147)+x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x149 = UINT16_MAX;
	static uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 0U;
	int32_t t34 = -59060745;

    t34 = (x149>((x150&x151)+x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x154 = INT8_MAX;
	static uint64_t x155 = UINT64_MAX;
	uint64_t x156 = UINT64_MAX;
	int32_t t35 = -33;

    t35 = (x153>((x154&x155)+x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t36 = 286838;

    t36 = (x157>((x158&x159)+x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -31;
	volatile int64_t x164 = INT64_MIN;
	int32_t t37 = 5188;

    t37 = (x161>((x162&x163)+x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	int8_t x168 = 1;
	int32_t t38 = 85510742;

    t38 = (x165>((x166&x167)+x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = -1;
	int32_t t39 = -35;

    t39 = (x169>((x170&x171)+x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = 1;
	static int64_t x174 = INT64_MAX;
	static volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = 6LL;
	int32_t t40 = -239554;

    t40 = (x173>((x174&x175)+x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x182 = 2U;
	uint32_t x184 = 37819387U;
	int32_t t41 = 372;

    t41 = (x181>((x182&x183)+x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x186 = UINT64_MAX;
	static volatile int16_t x187 = 5;
	uint8_t x188 = 1U;

    t42 = (x185>((x186&x187)+x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	static int64_t x194 = -1LL;
	static uint8_t x195 = UINT8_MAX;
	int64_t x196 = 204789LL;
	int32_t t43 = 1;

    t43 = (x193>((x194&x195)+x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = 2;
	volatile int8_t x198 = 0;
	int32_t x200 = INT32_MAX;
	volatile int32_t t44 = -94615;

    t44 = (x197>((x198&x199)+x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x206 = 1;
	static int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t45 = -718;

    t45 = (x205>((x206&x207)+x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x209 = 4U;
	int64_t x210 = -1LL;
	static int8_t x211 = INT8_MAX;
	uint64_t x212 = 3325952079978LLU;
	static volatile int32_t t46 = 9847;

    t46 = (x209>((x210&x211)+x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x213 = -1;
	static volatile uint16_t x214 = UINT16_MAX;
	int64_t x215 = 5445854990666LL;

    t47 = (x213>((x214&x215)+x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x217 = -2993089205199492LL;
	int64_t x218 = 735LL;
	uint16_t x220 = 313U;
	volatile int32_t t48 = 26382608;

    t48 = (x217>((x218&x219)+x220));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = -23;
	volatile uint64_t x222 = 15490417698LLU;
	int8_t x223 = 55;
	volatile uint64_t x224 = 8922387119368135248LLU;
	static volatile int32_t t49 = -91055486;

    t49 = (x221>((x222&x223)+x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = INT8_MIN;
	static int16_t x226 = -2;
	int32_t x227 = INT32_MIN;
	volatile uint16_t x228 = 0U;
	int32_t t50 = 553855;

    t50 = (x225>((x226&x227)+x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = -1LL;
	static uint16_t x231 = UINT16_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t51 = 311;

    t51 = (x229>((x230&x231)+x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MIN;
	uint8_t x234 = 7U;
	uint8_t x235 = 15U;
	static volatile int8_t x236 = -1;

    t52 = (x233>((x234&x235)+x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = -14073;
	int32_t x238 = 923;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -195;
	volatile int32_t t53 = -89563998;

    t53 = (x237>((x238&x239)+x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 56U;
	uint32_t x244 = 57514U;

    t54 = (x241>((x242&x243)+x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = INT16_MIN;
	uint64_t x246 = 52906LLU;
	uint8_t x248 = UINT8_MAX;
	static int32_t t55 = -651156384;

    t55 = (x245>((x246&x247)+x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x253 = 0;
	volatile uint8_t x254 = UINT8_MAX;
	int64_t x255 = -1LL;
	uint64_t x256 = 294221657367024LLU;
	volatile int32_t t56 = -962;

    t56 = (x253>((x254&x255)+x256));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t57 = -130945;

    t57 = (x257>((x258&x259)+x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x261 = UINT64_MAX;
	int16_t x262 = -3;
	int16_t x264 = INT16_MIN;
	int32_t t58 = -6600;

    t58 = (x261>((x262&x263)+x264));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x265 = UINT8_MAX;
	static int64_t x266 = -1LL;
	volatile uint64_t x268 = 36185400LLU;
	volatile int32_t t59 = 95996557;

    t59 = (x265>((x266&x267)+x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = INT32_MIN;
	int32_t x270 = -1;
	uint8_t x271 = 85U;
	static uint32_t x272 = 16672U;
	volatile int32_t t60 = 49702;

    t60 = (x269>((x270&x271)+x272));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x274 = -1LL;
	int32_t x276 = INT32_MIN;
	volatile int32_t t61 = -53;

    t61 = (x273>((x274&x275)+x276));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x277 = 14U;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 246403U;

    t62 = (x277>((x278&x279)+x280));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x282 = INT16_MIN;
	uint64_t x283 = UINT64_MAX;
	uint16_t x284 = UINT16_MAX;
	int32_t t63 = 69;

    t63 = (x281>((x282&x283)+x284));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x285 = INT8_MIN;
	uint16_t x286 = 9U;
	volatile uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 0U;
	volatile int32_t t64 = -86563;

    t64 = (x285>((x286&x287)+x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	uint64_t x291 = 1LLU;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t65 = 2031;

    t65 = (x289>((x290&x291)+x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x293 = -1;
	int32_t x295 = 25;
	int32_t t66 = 7;

    t66 = (x293>((x294&x295)+x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = INT8_MAX;
	uint8_t x298 = 4U;
	volatile uint8_t x299 = 3U;
	uint32_t x300 = UINT32_MAX;

    t67 = (x297>((x298&x299)+x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x301 = 32236176190518LL;
	int32_t x302 = 31684;
	int64_t x304 = 59345LL;
	volatile int32_t t68 = -246244924;

    t68 = (x301>((x302&x303)+x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 10432830LLU;
	int8_t x308 = 1;
	static volatile int32_t t69 = -44;

    t69 = (x305>((x306&x307)+x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x313 = INT32_MAX;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MAX;
	int64_t x316 = -1LL;
	static int32_t t70 = 31116295;

    t70 = (x313>((x314&x315)+x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x317 = 0U;
	int8_t x318 = 0;
	volatile uint8_t x319 = 14U;
	uint16_t x320 = 18U;
	static int32_t t71 = 764;

    t71 = (x317>((x318&x319)+x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = 211624635U;
	static volatile uint16_t x328 = 92U;
	static int32_t t72 = 4538;

    t72 = (x325>((x326&x327)+x328));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x330 = 9375927U;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t73 = -132600;

    t73 = (x329>((x330&x331)+x332));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x333 = 149371556774LL;
	uint32_t x334 = 26U;
	int64_t x335 = -35651848LL;
	static int32_t x336 = -1;

    t74 = (x333>((x334&x335)+x336));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x338 = 3LL;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = 7;
	volatile int32_t t75 = -1996;

    t75 = (x337>((x338&x339)+x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x341 = 22U;
	int16_t x342 = 1;
	int32_t x343 = 105;
	int32_t t76 = 1;

    t76 = (x341>((x342&x343)+x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x347 = 2;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t77 = 702255;

    t77 = (x345>((x346&x347)+x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = 1;
	volatile int8_t x350 = 0;
	static int32_t x351 = -19666124;
	int8_t x352 = INT8_MIN;
	int32_t t78 = -1;

    t78 = (x349>((x350&x351)+x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x353 = 6LLU;
	uint32_t x354 = 31918317U;
	volatile uint8_t x355 = 0U;
	uint64_t x356 = 239910040359LLU;

    t79 = (x353>((x354&x355)+x356));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = 3U;
	int16_t x360 = INT16_MIN;
	int32_t t80 = -30528744;

    t80 = (x357>((x358&x359)+x360));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x361 = -1LL;
	int16_t x362 = INT16_MAX;
	volatile int32_t t81 = 4;

    t81 = (x361>((x362&x363)+x364));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x365 = 14U;
	volatile uint16_t x366 = 4656U;
	int64_t x368 = -1LL;
	volatile int32_t t82 = 408;

    t82 = (x365>((x366&x367)+x368));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x369 = INT8_MIN;
	static uint64_t x370 = 13LLU;
	volatile uint32_t x371 = 7U;
	int64_t x372 = 0LL;
	int32_t t83 = -684804;

    t83 = (x369>((x370&x371)+x372));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -2312;
	int32_t t84 = -2051497;

    t84 = (x373>((x374&x375)+x376));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x377 = 1U;
	static volatile int16_t x378 = 143;
	int8_t x379 = INT8_MIN;
	volatile int32_t x380 = 37876;
	volatile int32_t t85 = -1493406;

    t85 = (x377>((x378&x379)+x380));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = -382613;
	int64_t x382 = -3616442198LL;
	static int8_t x383 = -1;
	uint32_t x384 = UINT32_MAX;

    t86 = (x381>((x382&x383)+x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x386 = -1;
	uint64_t x387 = UINT64_MAX;
	int32_t t87 = 327495;

    t87 = (x385>((x386&x387)+x388));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x390 = 272LLU;
	int8_t x391 = -1;
	int32_t t88 = 37;

    t88 = (x389>((x390&x391)+x392));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x393 = 3060U;
	int16_t x394 = -1;
	static int64_t x396 = INT64_MIN;
	int32_t t89 = -742637;

    t89 = (x393>((x394&x395)+x396));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x398 = 2;
	int64_t x400 = -1LL;

    t90 = (x397>((x398&x399)+x400));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x402 = -1LL;
	int32_t x403 = INT32_MAX;
	volatile int32_t x404 = -1;

    t91 = (x401>((x402&x403)+x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x405 = -1;
	int32_t x407 = INT32_MIN;
	int8_t x408 = -1;
	int32_t t92 = -12;

    t92 = (x405>((x406&x407)+x408));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MAX;
	volatile int32_t t93 = -1458;

    t93 = (x409>((x410&x411)+x412));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = INT16_MIN;
	static uint64_t x415 = UINT64_MAX;
	static int64_t x416 = 95827645LL;
	int32_t t94 = 641665;

    t94 = (x413>((x414&x415)+x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x417 = 336448LL;
	uint8_t x418 = 1U;
	uint64_t x419 = UINT64_MAX;
	static int16_t x420 = 11;

    t95 = (x417>((x418&x419)+x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	static volatile int8_t x422 = INT8_MAX;
	static uint16_t x423 = UINT16_MAX;
	int64_t x424 = -1LL;

    t96 = (x421>((x422&x423)+x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x425 = -1LL;
	int8_t x426 = INT8_MAX;
	int8_t x428 = INT8_MAX;
	int32_t t97 = 22047626;

    t97 = (x425>((x426&x427)+x428));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x429 = 67U;
	static volatile uint8_t x430 = UINT8_MAX;
	volatile int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	volatile int32_t t98 = 174188;

    t98 = (x429>((x430&x431)+x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = -1;
	static int64_t x438 = INT64_MAX;
	static int16_t x439 = INT16_MAX;
	uint64_t x440 = 8LLU;
	volatile int32_t t99 = -1399361;

    t99 = (x437>((x438&x439)+x440));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x441 = -1;
	volatile int16_t x443 = 0;
	static int32_t t100 = 5768787;

    t100 = (x441>((x442&x443)+x444));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = INT64_MAX;
	uint8_t x446 = 29U;
	uint8_t x447 = 12U;
	volatile uint16_t x448 = 10095U;
	static volatile int32_t t101 = -2091;

    t101 = (x445>((x446&x447)+x448));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x449 = 399U;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	volatile int32_t t102 = -232;

    t102 = (x449>((x450&x451)+x452));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x453 = 1824508621344LL;
	uint32_t x454 = 0U;
	volatile int64_t x455 = 147252370979943082LL;
	volatile int32_t x456 = -152;
	static int32_t t103 = -247;

    t103 = (x453>((x454&x455)+x456));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = -244970273672003LL;
	static int64_t x458 = INT64_MAX;
	uint64_t x459 = 1LLU;
	volatile int8_t x460 = 13;
	int32_t t104 = 3;

    t104 = (x457>((x458&x459)+x460));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x461 = INT64_MAX;
	int64_t x462 = -1LL;
	int8_t x463 = -36;
	uint16_t x464 = UINT16_MAX;
	int32_t t105 = 1752;

    t105 = (x461>((x462&x463)+x464));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x465 = INT32_MIN;
	uint8_t x466 = 1U;
	uint32_t x467 = UINT32_MAX;
	uint32_t x468 = 53U;
	int32_t t106 = -697046;

    t106 = (x465>((x466&x467)+x468));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x469 = -1;
	volatile uint64_t x470 = UINT64_MAX;
	volatile uint8_t x472 = 121U;
	int32_t t107 = 2;

    t107 = (x469>((x470&x471)+x472));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x475 = UINT64_MAX;
	int8_t x476 = -13;
	int32_t t108 = 4193;

    t108 = (x473>((x474&x475)+x476));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x477 = INT16_MIN;
	volatile int16_t x478 = 55;
	int8_t x479 = INT8_MIN;
	static int8_t x480 = 6;
	volatile int32_t t109 = -32653;

    t109 = (x477>((x478&x479)+x480));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x481 = -1;
	int32_t x482 = INT32_MIN;
	volatile int32_t t110 = -3;

    t110 = (x481>((x482&x483)+x484));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x485 = 55U;
	static volatile int16_t x486 = 0;
	int8_t x487 = INT8_MIN;
	int32_t x488 = -28306091;

    t111 = (x485>((x486&x487)+x488));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x489 = -6036002997555604LL;
	int32_t x490 = 377;
	uint32_t x491 = 95U;
	uint16_t x492 = 20433U;
	volatile int32_t t112 = -37736;

    t112 = (x489>((x490&x491)+x492));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x493 = -1;
	int8_t x494 = INT8_MIN;
	volatile uint64_t x495 = 4LLU;
	volatile int32_t x496 = -1;

    t113 = (x493>((x494&x495)+x496));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x497 = INT32_MAX;
	static volatile int32_t x498 = -1;
	uint64_t x499 = 147526655816424818LLU;
	int64_t x500 = INT64_MIN;
	int32_t t114 = 1;

    t114 = (x497>((x498&x499)+x500));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = 147041133U;
	int32_t x504 = -571456;
	volatile int32_t t115 = 143164028;

    t115 = (x501>((x502&x503)+x504));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x509 = UINT8_MAX;
	int8_t x511 = INT8_MAX;
	int32_t t116 = -8044;

    t116 = (x509>((x510&x511)+x512));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x513 = INT64_MIN;
	static volatile uint16_t x515 = UINT16_MAX;
	uint64_t x516 = UINT64_MAX;
	int32_t t117 = -1501;

    t117 = (x513>((x514&x515)+x516));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x521 = INT32_MIN;
	volatile int32_t x522 = -93094423;
	int8_t x523 = 1;
	volatile uint64_t x524 = 383527397370LLU;
	volatile int32_t t118 = -1;

    t118 = (x521>((x522&x523)+x524));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x527 = INT16_MIN;
	volatile int32_t t119 = -360778760;

    t119 = (x525>((x526&x527)+x528));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x530 = INT64_MAX;
	int64_t x531 = INT64_MIN;
	volatile int8_t x532 = -1;
	static int32_t t120 = -222424524;

    t120 = (x529>((x530&x531)+x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	int64_t x534 = INT64_MAX;
	int32_t x535 = INT32_MIN;
	int8_t x536 = INT8_MIN;
	int32_t t121 = 1;

    t121 = (x533>((x534&x535)+x536));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x537 = -739497528;
	volatile uint8_t x538 = 2U;
	uint16_t x539 = UINT16_MAX;
	int16_t x540 = -2857;
	int32_t t122 = 303;

    t122 = (x537>((x538&x539)+x540));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x541 = UINT32_MAX;
	int64_t x543 = INT64_MAX;
	int16_t x544 = INT16_MIN;
	volatile int32_t t123 = 1493680;

    t123 = (x541>((x542&x543)+x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x545 = -1;
	int64_t x546 = -1LL;
	uint64_t x547 = 8662051217329135LLU;
	uint8_t x548 = 3U;
	volatile int32_t t124 = -888625;

    t124 = (x545>((x546&x547)+x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x554 = 103U;
	int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MIN;
	volatile int32_t t125 = -656;

    t125 = (x553>((x554&x555)+x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = INT8_MAX;
	int32_t x559 = 102361;
	uint16_t x560 = UINT16_MAX;
	int32_t t126 = -324501387;

    t126 = (x557>((x558&x559)+x560));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x561 = 6329U;
	static uint16_t x562 = 1U;
	uint8_t x564 = 49U;
	int32_t t127 = -147007348;

    t127 = (x561>((x562&x563)+x564));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = -4;
	static uint32_t x566 = 13U;
	volatile int64_t x567 = INT64_MIN;
	uint64_t x568 = 2610773661LLU;

    t128 = (x565>((x566&x567)+x568));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MAX;
	volatile int32_t t129 = -544498854;

    t129 = (x569>((x570&x571)+x572));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	static int64_t x574 = -53603731LL;
	volatile int32_t x575 = INT32_MIN;
	int16_t x576 = 376;
	static int32_t t130 = 10822;

    t130 = (x573>((x574&x575)+x576));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = -165;
	static uint16_t x578 = 3U;
	uint16_t x579 = 442U;
	volatile int64_t x580 = 56413844665LL;
	int32_t t131 = -37;

    t131 = (x577>((x578&x579)+x580));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x581 = 13531LLU;
	static int8_t x582 = INT8_MIN;
	volatile int64_t x584 = INT64_MAX;

    t132 = (x581>((x582&x583)+x584));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x585 = 8U;
	int16_t x586 = -1;
	int8_t x587 = INT8_MIN;
	uint64_t x588 = 41485068LLU;
	static volatile int32_t t133 = 7017;

    t133 = (x585>((x586&x587)+x588));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x590 = INT64_MAX;
	uint8_t x592 = 122U;
	static volatile int32_t t134 = -28707813;

    t134 = (x589>((x590&x591)+x592));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x594 = INT16_MIN;
	static int32_t t135 = 2447410;

    t135 = (x593>((x594&x595)+x596));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x597 = -1;
	uint16_t x598 = UINT16_MAX;
	int8_t x599 = -1;
	static volatile uint32_t x600 = UINT32_MAX;
	volatile int32_t t136 = -6;

    t136 = (x597>((x598&x599)+x600));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x601 = 1U;
	static uint64_t x602 = 1095868948820LLU;
	int16_t x603 = INT16_MIN;

    t137 = (x601>((x602&x603)+x604));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x606 = UINT16_MAX;
	static uint8_t x607 = 116U;
	int32_t t138 = 40918;

    t138 = (x605>((x606&x607)+x608));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = 1244LLU;
	uint64_t x612 = 4056286LLU;
	volatile int32_t t139 = 5;

    t139 = (x609>((x610&x611)+x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t t140 = -122869;

    t140 = (x613>((x614&x615)+x616));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x617 = -1LL;
	int8_t x619 = INT8_MIN;
	volatile int16_t x620 = INT16_MIN;
	int32_t t141 = -1969;

    t141 = (x617>((x618&x619)+x620));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x621 = -7;
	volatile int8_t x622 = 1;
	static int32_t x623 = INT32_MIN;
	int32_t x624 = -1;
	int32_t t142 = 253;

    t142 = (x621>((x622&x623)+x624));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x625 = -1;
	int64_t x626 = -3548658386638877254LL;
	static int32_t t143 = 1;

    t143 = (x625>((x626&x627)+x628));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x629 = -1;
	int64_t x631 = INT64_MIN;
	static volatile int8_t x632 = -19;
	volatile int32_t t144 = 3;

    t144 = (x629>((x630&x631)+x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x633 = 2U;
	int8_t x634 = INT8_MAX;
	uint64_t x635 = UINT64_MAX;
	volatile int16_t x636 = -1;
	int32_t t145 = -4282427;

    t145 = (x633>((x634&x635)+x636));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x639 = 110U;
	int16_t x640 = INT16_MIN;

    t146 = (x637>((x638&x639)+x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x641 = 480;
	volatile int8_t x642 = -5;
	volatile int16_t x644 = -2193;
	int32_t t147 = -14080523;

    t147 = (x641>((x642&x643)+x644));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x645 = -1LL;
	static uint32_t x647 = UINT32_MAX;
	uint32_t x648 = UINT32_MAX;
	volatile int32_t t148 = 77136;

    t148 = (x645>((x646&x647)+x648));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x649 = UINT32_MAX;
	static volatile uint16_t x650 = 1U;
	static uint8_t x651 = 113U;
	int32_t x652 = INT32_MIN;
	static int32_t t149 = -14;

    t149 = (x649>((x650&x651)+x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x653 = INT16_MIN;
	uint16_t x654 = UINT16_MAX;
	int16_t x655 = -1;
	volatile uint16_t x656 = UINT16_MAX;
	volatile int32_t t150 = -256239;

    t150 = (x653>((x654&x655)+x656));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x661 = INT16_MIN;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = 1835282479869310168LL;
	volatile int32_t t151 = 2262851;

    t151 = (x661>((x662&x663)+x664));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x665 = UINT16_MAX;
	static int64_t x667 = -3815839932416LL;
	uint64_t x668 = 23969324946592LLU;
	int32_t t152 = -225764974;

    t152 = (x665>((x666&x667)+x668));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x669 = 3725831352723080278LLU;
	volatile uint64_t x670 = 11LLU;
	volatile int32_t x671 = INT32_MAX;
	int8_t x672 = -1;
	volatile int32_t t153 = -38;

    t153 = (x669>((x670&x671)+x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = INT16_MIN;
	static int64_t x675 = INT64_MIN;
	static int64_t x676 = INT64_MIN;

    t154 = (x673>((x674&x675)+x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x679 = -1;
	uint64_t x680 = UINT64_MAX;
	int32_t t155 = 469475;

    t155 = (x677>((x678&x679)+x680));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x682 = INT8_MIN;
	int32_t x683 = 0;
	int32_t x684 = -9374284;
	volatile int32_t t156 = -434;

    t156 = (x681>((x682&x683)+x684));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x685 = INT32_MIN;
	uint64_t x686 = 579LLU;
	int8_t x687 = 0;
	volatile int8_t x688 = INT8_MIN;

    t157 = (x685>((x686&x687)+x688));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x701 = 12023;
	uint8_t x704 = UINT8_MAX;
	volatile int32_t t158 = -778;

    t158 = (x701>((x702&x703)+x704));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x705 = 6U;
	int16_t x706 = 0;
	uint16_t x707 = 645U;
	int8_t x708 = INT8_MIN;
	volatile int32_t t159 = 2033;

    t159 = (x705>((x706&x707)+x708));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x709 = 944U;
	int64_t x710 = 523042267956102123LL;
	int32_t x711 = INT32_MIN;
	static int64_t x712 = -1LL;
	volatile int32_t t160 = 1000901679;

    t160 = (x709>((x710&x711)+x712));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x717 = -1;
	int8_t x718 = -1;
	int8_t x719 = INT8_MIN;
	static volatile int64_t x720 = INT64_MAX;
	volatile int32_t t161 = -47;

    t161 = (x717>((x718&x719)+x720));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x721 = 12197U;
	volatile int8_t x722 = INT8_MAX;
	int32_t x723 = INT32_MAX;
	uint64_t x724 = 1634LLU;
	static volatile int32_t t162 = -1620320;

    t162 = (x721>((x722&x723)+x724));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x726 = 0;
	static uint64_t x727 = 327939LLU;
	static int8_t x728 = -1;
	volatile int32_t t163 = 0;

    t163 = (x725>((x726&x727)+x728));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x734 = -1;
	static int32_t x735 = -2;
	static uint8_t x736 = 0U;
	volatile int32_t t164 = -841105684;

    t164 = (x733>((x734&x735)+x736));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x737 = 7;
	int32_t x739 = -1;
	int64_t x740 = -1LL;
	static volatile int32_t t165 = -24254740;

    t165 = (x737>((x738&x739)+x740));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x741 = 0U;
	int32_t x742 = INT32_MIN;
	uint32_t x743 = 495493U;
	int32_t t166 = -59848;

    t166 = (x741>((x742&x743)+x744));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x745 = INT32_MAX;
	uint32_t x746 = UINT32_MAX;
	volatile int16_t x747 = INT16_MIN;
	int64_t x748 = INT64_MIN;
	int32_t t167 = 751;

    t167 = (x745>((x746&x747)+x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x750 = 1U;
	int64_t x751 = -2036465LL;
	int32_t x752 = INT32_MAX;
	int32_t t168 = -63044;

    t168 = (x749>((x750&x751)+x752));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x753 = 1U;
	int32_t x754 = INT32_MIN;
	int32_t x755 = -1;
	static volatile uint16_t x756 = UINT16_MAX;
	volatile int32_t t169 = -4976;

    t169 = (x753>((x754&x755)+x756));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x757 = INT8_MIN;
	int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MAX;
	static int32_t x760 = -13997;

    t170 = (x757>((x758&x759)+x760));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x761 = UINT16_MAX;
	uint64_t x763 = 408085320987898508LLU;
	volatile int32_t t171 = 159;

    t171 = (x761>((x762&x763)+x764));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x766 = INT32_MIN;
	static int64_t x767 = 214476825LL;
	int64_t x768 = -1944471445158048874LL;
	int32_t t172 = 46;

    t172 = (x765>((x766&x767)+x768));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x769 = UINT32_MAX;
	uint16_t x770 = 291U;
	int64_t x771 = INT64_MIN;

    t173 = (x769>((x770&x771)+x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x774 = 1LLU;
	static int64_t x775 = -113744LL;
	static int16_t x776 = -1;

    t174 = (x773>((x774&x775)+x776));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x778 = INT64_MIN;
	uint16_t x779 = UINT16_MAX;
	static volatile int64_t x780 = 0LL;
	int32_t t175 = -1;

    t175 = (x777>((x778&x779)+x780));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x782 = -1LL;
	int8_t x783 = -1;

    t176 = (x781>((x782&x783)+x784));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x786 = -50;
	int32_t x787 = -149;
	static uint16_t x788 = 2659U;
	int32_t t177 = -12610;

    t177 = (x785>((x786&x787)+x788));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x790 = 19;
	int64_t x791 = INT64_MAX;
	uint16_t x792 = 30U;
	static int32_t t178 = 21222;

    t178 = (x789>((x790&x791)+x792));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x795 = INT16_MIN;
	uint8_t x796 = 7U;
	volatile int32_t t179 = 1899;

    t179 = (x793>((x794&x795)+x796));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x801 = -1;
	static uint8_t x802 = 5U;
	int16_t x803 = -273;
	volatile int16_t x804 = INT16_MIN;
	volatile int32_t t180 = 10308;

    t180 = (x801>((x802&x803)+x804));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x805 = -24991;

    t181 = (x805>((x806&x807)+x808));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x809 = INT8_MAX;
	uint64_t x810 = UINT64_MAX;
	uint16_t x811 = 1531U;
	int32_t x812 = -4093326;
	int32_t t182 = 48;

    t182 = (x809>((x810&x811)+x812));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x813 = -1;
	uint32_t x815 = 4U;
	int16_t x816 = INT16_MIN;

    t183 = (x813>((x814&x815)+x816));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x817 = INT64_MIN;
	volatile int32_t x818 = 1751;
	int32_t x819 = INT32_MAX;
	int32_t x820 = INT32_MIN;
	volatile int32_t t184 = 3;

    t184 = (x817>((x818&x819)+x820));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x821 = -1;
	int8_t x822 = 10;
	volatile int8_t x823 = -1;
	uint8_t x824 = 28U;
	static volatile int32_t t185 = -148298;

    t185 = (x821>((x822&x823)+x824));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x825 = -1;
	int64_t x826 = -1LL;
	static int8_t x827 = 0;
	static int32_t t186 = -124665794;

    t186 = (x825>((x826&x827)+x828));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x829 = UINT16_MAX;
	int16_t x830 = INT16_MIN;
	static volatile int8_t x831 = -12;
	uint64_t x832 = 1855270202LLU;
	volatile int32_t t187 = -153;

    t187 = (x829>((x830&x831)+x832));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	static int16_t x835 = INT16_MIN;

    t188 = (x833>((x834&x835)+x836));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x837 = -1LL;
	uint8_t x838 = 24U;
	static volatile int16_t x839 = INT16_MIN;
	int16_t x840 = INT16_MIN;
	volatile int32_t t189 = 13827;

    t189 = (x837>((x838&x839)+x840));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x841 = UINT64_MAX;
	volatile int64_t x842 = -1LL;
	int8_t x843 = -1;
	volatile int32_t t190 = 360;

    t190 = (x841>((x842&x843)+x844));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x845 = 0;
	int8_t x848 = -1;
	volatile int32_t t191 = -88068292;

    t191 = (x845>((x846&x847)+x848));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x850 = 4;
	uint32_t x852 = UINT32_MAX;
	int32_t t192 = 41258;

    t192 = (x849>((x850&x851)+x852));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x854 = UINT64_MAX;
	volatile int64_t x855 = INT64_MIN;
	int64_t x856 = -1LL;
	static int32_t t193 = 5666546;

    t193 = (x853>((x854&x855)+x856));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x857 = 838079783872898LLU;
	int8_t x859 = -1;
	int16_t x860 = 0;
	int32_t t194 = 2525406;

    t194 = (x857>((x858&x859)+x860));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = -1;
	volatile int32_t x862 = INT32_MIN;
	volatile int64_t x863 = -31478046004LL;
	int8_t x864 = -1;

    t195 = (x861>((x862&x863)+x864));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x865 = -1LL;
	int32_t x866 = 3105;
	static int64_t x868 = INT64_MIN;
	int32_t t196 = -2817;

    t196 = (x865>((x866&x867)+x868));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x869 = -48340880;
	volatile uint8_t x870 = UINT8_MAX;
	int8_t x871 = INT8_MIN;
	int8_t x872 = -3;
	static volatile int32_t t197 = -2;

    t197 = (x869>((x870&x871)+x872));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x873 = INT64_MIN;
	uint8_t x874 = 36U;
	int8_t x875 = -1;
	int32_t x876 = INT32_MIN;
	volatile int32_t t198 = 303;

    t198 = (x873>((x874&x875)+x876));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x877 = INT16_MIN;
	int16_t x878 = INT16_MIN;
	int8_t x880 = -9;

    t199 = (x877>((x878&x879)+x880));

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

