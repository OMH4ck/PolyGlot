
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

int32_t x4 = -1;
int16_t x17 = 1280;
int64_t x23 = 4365245602LL;
int8_t x27 = INT8_MIN;
int32_t x32 = INT32_MIN;
int16_t x38 = INT16_MIN;
static uint32_t x44 = 5U;
uint8_t x45 = UINT8_MAX;
int64_t x46 = INT64_MIN;
volatile int32_t t9 = -92534;
volatile uint8_t x54 = 5U;
int32_t x56 = 3486822;
uint16_t x65 = UINT16_MAX;
int8_t x67 = 0;
volatile int8_t x68 = INT8_MIN;
static uint16_t x69 = 14842U;
static volatile int16_t x70 = -1;
volatile int32_t t15 = 1798212;
int16_t x78 = 1326;
uint16_t x82 = UINT16_MAX;
uint64_t x83 = 2320614677LLU;
static int32_t x84 = INT32_MIN;
int32_t t17 = -129253639;
uint64_t x85 = 5027LLU;
static uint32_t x90 = 38U;
uint32_t x92 = UINT32_MAX;
int32_t t19 = 0;
static int32_t x96 = INT32_MIN;
volatile int32_t t20 = 27432;
volatile int32_t t22 = -5;
volatile uint32_t x110 = UINT32_MAX;
volatile uint32_t x116 = 6142951U;
volatile int16_t x123 = INT16_MAX;
uint8_t x124 = UINT8_MAX;
volatile uint8_t x128 = UINT8_MAX;
int16_t x129 = -1;
volatile uint64_t x135 = 5623553335522909346LLU;
int64_t x139 = -1LL;
volatile int64_t x142 = -1LL;
int64_t x143 = INT64_MIN;
volatile int32_t t31 = 6944326;
int8_t x149 = -24;
int64_t x152 = INT64_MIN;
uint16_t x159 = 90U;
static int16_t x164 = INT16_MIN;
static int32_t x165 = -1;
volatile int8_t x178 = INT8_MAX;
int8_t x179 = INT8_MAX;
volatile uint64_t x180 = UINT64_MAX;
int16_t x197 = -1;
int32_t t43 = -7121739;
int32_t x205 = 493874815;
int16_t x206 = INT16_MIN;
volatile int8_t x213 = INT8_MIN;
volatile uint8_t x217 = 39U;
int8_t x220 = 1;
int16_t x222 = INT16_MIN;
int32_t t49 = 23946038;
volatile uint8_t x242 = 110U;
volatile int8_t x244 = INT8_MIN;
int32_t t51 = -100809307;
int64_t x246 = -471409028919LL;
volatile int32_t t53 = 44302697;
static uint64_t x253 = 124882LLU;
int8_t x254 = -9;
volatile uint16_t x265 = UINT16_MAX;
uint8_t x267 = UINT8_MAX;
int64_t x268 = 62011032632LL;
int64_t x286 = -1LL;
static volatile int32_t t59 = 2;
int32_t t60 = 31372;
int8_t x312 = -1;
volatile int32_t t62 = 11;
uint64_t x315 = 123183280660780858LLU;
int64_t x318 = INT64_MIN;
static volatile int16_t x320 = INT16_MIN;
uint64_t x325 = UINT64_MAX;
int32_t x331 = -644415;
uint8_t x336 = 2U;
int32_t t67 = 37552;
int32_t t69 = 31296902;
int16_t x361 = INT16_MIN;
static volatile uint64_t x370 = 177LLU;
static int32_t t73 = -20726;
static uint64_t x374 = UINT64_MAX;
uint8_t x376 = 1U;
volatile int32_t t74 = -1;
int64_t x386 = -1LL;
static int8_t x388 = 4;
static uint32_t x390 = UINT32_MAX;
uint64_t x406 = UINT64_MAX;
volatile int64_t x408 = -1LL;
volatile int32_t t83 = 318614776;
int64_t x413 = INT64_MIN;
static int16_t x417 = -60;
int8_t x425 = 19;
static int8_t x431 = -42;
volatile int32_t t89 = 169372;
static int8_t x445 = -1;
volatile int32_t x451 = INT32_MAX;
uint64_t x459 = 23153020LLU;
static uint64_t x465 = UINT64_MAX;
static int8_t x466 = -1;
int32_t t96 = 250427572;
int32_t x477 = INT32_MIN;
int16_t x479 = INT16_MAX;
volatile int8_t x483 = -1;
int16_t x485 = INT16_MIN;
volatile int8_t x496 = INT8_MIN;
static volatile int8_t x504 = INT8_MAX;
volatile int32_t t101 = 65;
uint32_t x512 = 117189716U;
int32_t t102 = -715176;
volatile int8_t x516 = INT8_MIN;
volatile int32_t t105 = -9496;
uint32_t x539 = 1499202667U;
static int32_t x543 = INT32_MIN;
uint32_t x546 = 1U;
volatile uint32_t x548 = UINT32_MAX;
int32_t x549 = 0;
volatile int32_t t110 = -150;
int16_t x555 = INT16_MIN;
int32_t t112 = 112415;
volatile uint32_t x570 = UINT32_MAX;
int64_t x582 = -182633728659859LL;
volatile int32_t t116 = -7657724;
uint16_t x588 = 887U;
int32_t t117 = 244;
int8_t x596 = INT8_MAX;
static int8_t x600 = INT8_MIN;
static uint16_t x607 = 52U;
int64_t x608 = -16038214LL;
int64_t x613 = INT64_MIN;
static volatile int32_t t121 = -198802959;
uint8_t x622 = 37U;
static int16_t x623 = INT16_MIN;
int32_t t122 = 21799350;
int8_t x625 = INT8_MIN;
static uint8_t x628 = 8U;
volatile int32_t t123 = 52989113;
static int64_t x633 = -688990077138263200LL;
int32_t t125 = 140;
volatile int64_t x645 = 8037191LL;
volatile uint16_t x648 = 918U;
int32_t t131 = 1008;
uint32_t x675 = UINT32_MAX;
int16_t x678 = -15;
static uint16_t x685 = 338U;
int8_t x687 = INT8_MIN;
volatile int32_t t136 = -10940;
int16_t x716 = -1;
static int8_t x717 = INT8_MIN;
volatile uint64_t x722 = 12887509176126427LLU;
uint32_t x723 = 34538U;
volatile uint16_t x724 = 12U;
volatile int32_t t142 = 15;
int16_t x735 = 1;
volatile int32_t t147 = -3;
static volatile uint8_t x753 = 82U;
int16_t x755 = 3792;
int32_t t150 = -25;
int8_t x764 = INT8_MIN;
int16_t x776 = INT16_MIN;
uint64_t x779 = UINT64_MAX;
int32_t x780 = -1;
int32_t t156 = -183239110;
int32_t x791 = -1;
uint16_t x807 = 728U;
static volatile int8_t x814 = INT8_MIN;
volatile int64_t x817 = -73409203155488LL;
int32_t t163 = -354;
uint8_t x821 = 39U;
volatile int32_t t165 = 265;
int8_t x839 = 47;
int32_t t167 = -393;
volatile int16_t x860 = INT16_MIN;
int64_t x861 = INT64_MIN;
int32_t t171 = -2004;
int32_t x867 = INT32_MAX;
int16_t x873 = INT16_MIN;
int16_t x874 = -40;
uint16_t x878 = 7262U;
int32_t x882 = 30362;
static volatile int32_t x890 = INT32_MIN;
uint32_t x892 = 1373132U;
int8_t x893 = INT8_MAX;
static volatile int32_t t180 = 352;
static uint8_t x911 = UINT8_MAX;
int8_t x917 = 12;
static int64_t x918 = -1LL;
volatile int32_t t183 = 13;
uint64_t x922 = 418719073826018LLU;
static volatile uint64_t x924 = 79244079703369LLU;
volatile uint32_t x926 = 66U;
int16_t x927 = -101;
int32_t t186 = 224;
volatile uint16_t x943 = 2U;
static volatile int32_t x954 = INT32_MIN;
static int64_t x957 = INT64_MAX;
int64_t x969 = -1LL;
int16_t x972 = INT16_MIN;
static int32_t t193 = -2;
static volatile uint64_t x974 = 333LLU;
static int16_t x978 = INT16_MIN;
int64_t x979 = 2LL;
int32_t x983 = INT32_MIN;
uint16_t x985 = 37U;


void f0(void) {
    	int8_t x1 = 17;
	int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	volatile int32_t t0 = 15078891;

    t0 = (x1>((x2|x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -27;
	static uint8_t x10 = 12U;
	volatile int32_t x11 = 189716;
	uint32_t x12 = 105788U;
	int32_t t1 = 480059;

    t1 = (x9>((x10|x11)*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x18 = 1076490U;
	int64_t x19 = -1LL;
	int16_t x20 = -85;
	int32_t t2 = 3875;

    t2 = (x17>((x18|x19)*x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = 1742;
	static int8_t x22 = INT8_MIN;
	int64_t x24 = -1LL;
	int32_t t3 = -1072035432;

    t3 = (x21>((x22|x23)*x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = 102225842U;
	int64_t x26 = -220538448LL;
	int32_t x28 = INT32_MIN;
	static int32_t t4 = 2542;

    t4 = (x25>((x26|x27)*x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 5372772968LLU;
	uint64_t x30 = UINT64_MAX;
	static uint64_t x31 = 379LLU;
	int32_t t5 = 1317;

    t5 = (x29>((x30|x31)*x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = 5;
	int32_t x34 = INT32_MIN;
	int16_t x35 = -1;
	int16_t x36 = 252;
	int32_t t6 = 26597;

    t6 = (x33>((x34|x35)*x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = INT8_MAX;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t7 = -899482;

    t7 = (x37>((x38|x39)*x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = INT64_MIN;
	uint16_t x42 = 2172U;
	int8_t x43 = -1;
	int32_t t8 = -24144;

    t8 = (x41>((x42|x43)*x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x47 = INT8_MIN;
	static volatile uint64_t x48 = 69921408186582498LLU;

    t9 = (x45>((x46|x47)*x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile int8_t x51 = INT8_MIN;
	uint32_t x52 = UINT32_MAX;
	int32_t t10 = -97;

    t10 = (x49>((x50|x51)*x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 96818U;
	static volatile uint8_t x55 = 1U;
	int32_t t11 = 66;

    t11 = (x53>((x54|x55)*x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	uint64_t x58 = 51LLU;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;
	volatile int32_t t12 = 22364370;

    t12 = (x57>((x58|x59)*x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x66 = 66970236026160LL;
	volatile int32_t t13 = 3480;

    t13 = (x65>((x66|x67)*x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x71 = 1;
	uint32_t x72 = UINT32_MAX;
	static int32_t t14 = -123129;

    t14 = (x69>((x70|x71)*x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x73 = 1846LLU;
	int32_t x74 = INT32_MAX;
	volatile int8_t x75 = -34;
	volatile int8_t x76 = -1;

    t15 = (x73>((x74|x75)*x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -1LL;
	volatile int16_t x79 = INT16_MIN;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t16 = 2130428;

    t16 = (x77>((x78|x79)*x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 512666036397376290LLU;

    t17 = (x81>((x82|x83)*x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 1791840521U;
	int64_t x88 = -1LL;
	volatile int32_t t18 = -1120;

    t18 = (x85>((x86|x87)*x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x89 = 1326086406U;
	uint8_t x91 = 67U;

    t19 = (x89>((x90|x91)*x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 121U;
	static volatile uint8_t x94 = 0U;
	uint32_t x95 = UINT32_MAX;

    t20 = (x93>((x94|x95)*x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MAX;
	static volatile int16_t x99 = INT16_MIN;
	static int32_t x100 = INT32_MAX;
	volatile int32_t t21 = 33047259;

    t21 = (x97>((x98|x99)*x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile int8_t x102 = -1;
	static uint8_t x103 = 43U;
	uint64_t x104 = 2LLU;

    t22 = (x101>((x102|x103)*x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -150;
	volatile uint32_t x106 = 7773145U;
	static volatile int32_t x107 = INT32_MIN;
	int8_t x108 = -1;
	int32_t t23 = 7168918;

    t23 = (x105>((x106|x107)*x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -14222;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = 3;
	volatile int32_t t24 = -14;

    t24 = (x109>((x110|x111)*x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = 309;
	int8_t x115 = INT8_MAX;
	volatile int32_t t25 = 51097;

    t25 = (x113>((x114|x115)*x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x121 = 426814866U;
	uint64_t x122 = 1LLU;
	volatile int32_t t26 = 13023894;

    t26 = (x121>((x122|x123)*x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = 6057;
	int32_t x126 = INT32_MIN;
	volatile int8_t x127 = -43;
	volatile int32_t t27 = -1054;

    t27 = (x125>((x126|x127)*x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x130 = UINT32_MAX;
	volatile uint64_t x131 = 678991100109LLU;
	int32_t x132 = INT32_MAX;
	static int32_t t28 = 590;

    t28 = (x129>((x130|x131)*x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x133 = 1345918494393029LLU;
	int64_t x134 = 7949733523937702LL;
	static volatile uint16_t x136 = 2U;
	int32_t t29 = -592058;

    t29 = (x133>((x134|x135)*x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x137 = 1447760599955419LLU;
	int8_t x138 = INT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t30 = -1;

    t30 = (x137>((x138|x139)*x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = 3;
	volatile int64_t x144 = -1LL;

    t31 = (x141>((x142|x143)*x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x150 = UINT16_MAX;
	uint64_t x151 = 252659136LLU;
	volatile int32_t t32 = -57085830;

    t32 = (x149>((x150|x151)*x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = -6793876124972309LL;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 1595U;
	volatile int32_t t33 = 14;

    t33 = (x153>((x154|x155)*x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x157 = 8381U;
	int16_t x158 = INT16_MIN;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t34 = 317;

    t34 = (x157>((x158|x159)*x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = INT64_MIN;
	volatile int64_t x162 = -1LL;
	volatile int32_t x163 = -1;
	int32_t t35 = -7323;

    t35 = (x161>((x162|x163)*x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x166 = INT8_MIN;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;
	volatile int32_t t36 = -457;

    t36 = (x165>((x166|x167)*x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x173 = INT16_MIN;
	int32_t x174 = -3;
	int8_t x175 = INT8_MIN;
	static int32_t x176 = -1;
	int32_t t37 = 731982;

    t37 = (x173>((x174|x175)*x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = INT16_MIN;
	int32_t t38 = 0;

    t38 = (x177>((x178|x179)*x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = INT16_MAX;
	static int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = -1;
	volatile int32_t t39 = 1;

    t39 = (x181>((x182|x183)*x184));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = -5685;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 121U;
	uint16_t x192 = 6U;
	static int32_t t40 = 11;

    t40 = (x189>((x190|x191)*x192));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = -27;
	uint16_t x196 = UINT16_MAX;
	int32_t t41 = 9154;

    t41 = (x193>((x194|x195)*x196));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x198 = -1LL;
	int16_t x199 = 8067;
	uint32_t x200 = 0U;
	static int32_t t42 = -488275970;

    t42 = (x197>((x198|x199)*x200));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x201 = 2U;
	volatile uint32_t x202 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	int32_t x204 = -1880634;

    t43 = (x201>((x202|x203)*x204));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x207 = INT8_MIN;
	uint32_t x208 = 19U;
	volatile int32_t t44 = -138763265;

    t44 = (x205>((x206|x207)*x208));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x214 = 28U;
	volatile uint64_t x215 = 7LLU;
	int8_t x216 = -1;
	int32_t t45 = 273;

    t45 = (x213>((x214|x215)*x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x218 = INT64_MAX;
	static int8_t x219 = INT8_MIN;
	int32_t t46 = -330904618;

    t46 = (x217>((x218|x219)*x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x221 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t47 = 163306;

    t47 = (x221>((x222|x223)*x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = INT32_MIN;
	static int64_t x226 = INT64_MAX;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t48 = -1334330;

    t48 = (x225>((x226|x227)*x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x233 = 0U;
	volatile int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -146LL;

    t49 = (x233>((x234|x235)*x236));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 59U;
	static int16_t x238 = INT16_MIN;
	int64_t x239 = -1LL;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t50 = -6651946;

    t50 = (x237>((x238|x239)*x240));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x243 = 1593997;

    t51 = (x241>((x242|x243)*x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x245 = 4U;
	int16_t x247 = -1;
	static uint64_t x248 = UINT64_MAX;
	volatile int32_t t52 = 14022;

    t52 = (x245>((x246|x247)*x248));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = -31;
	int64_t x250 = 20483553008LL;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = -1LL;

    t53 = (x249>((x250|x251)*x252));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x255 = -4515;
	volatile uint16_t x256 = 15594U;
	volatile int32_t t54 = 26619711;

    t54 = (x253>((x254|x255)*x256));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x266 = 519U;
	int32_t t55 = 16044;

    t55 = (x265>((x266|x267)*x268));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static volatile uint32_t x279 = 433627507U;
	volatile int32_t x280 = INT32_MIN;
	static volatile int32_t t56 = 1008954211;

    t56 = (x277>((x278|x279)*x280));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x285 = -1;
	int16_t x287 = -171;
	int16_t x288 = INT16_MIN;
	volatile int32_t t57 = 13094624;

    t57 = (x285>((x286|x287)*x288));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x289 = -82;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	static int64_t x292 = -376LL;
	static int32_t t58 = 5;

    t58 = (x289>((x290|x291)*x292));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x293 = INT8_MIN;
	int32_t x294 = 1;
	int64_t x295 = -60950907233568LL;
	int16_t x296 = INT16_MIN;

    t59 = (x293>((x294|x295)*x296));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x297 = 6U;
	volatile int32_t x298 = INT32_MIN;
	static volatile uint32_t x299 = 248766U;
	volatile int64_t x300 = -1LL;

    t60 = (x297>((x298|x299)*x300));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x301 = 31U;
	volatile uint32_t x302 = UINT32_MAX;
	int16_t x303 = -1;
	int16_t x304 = -1;
	int32_t t61 = -121;

    t61 = (x301>((x302|x303)*x304));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x309 = -40;
	int32_t x310 = INT32_MIN;
	static int64_t x311 = 26677498LL;

    t62 = (x309>((x310|x311)*x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x313 = -8;
	int32_t x314 = -255;
	uint8_t x316 = 41U;
	int32_t t63 = 6652712;

    t63 = (x313>((x314|x315)*x316));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x317 = 126476147U;
	int8_t x319 = -17;
	int32_t t64 = -548;

    t64 = (x317>((x318|x319)*x320));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x326 = -1;
	int64_t x327 = INT64_MAX;
	volatile uint64_t x328 = 12369699LLU;
	int32_t t65 = -1007;

    t65 = (x325>((x326|x327)*x328));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x329 = 3U;
	int16_t x330 = INT16_MIN;
	uint32_t x332 = 4884U;
	int32_t t66 = -308;

    t66 = (x329>((x330|x331)*x332));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x333 = 34;
	volatile uint8_t x334 = 4U;
	int16_t x335 = INT16_MIN;

    t67 = (x333>((x334|x335)*x336));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x337 = INT16_MIN;
	static int8_t x338 = INT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	static uint32_t x340 = UINT32_MAX;
	volatile int32_t t68 = -111;

    t68 = (x337>((x338|x339)*x340));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x345 = -4;
	int8_t x346 = -8;
	static int64_t x347 = INT64_MIN;
	uint64_t x348 = 10466704734LLU;

    t69 = (x345>((x346|x347)*x348));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x349 = UINT16_MAX;
	volatile int32_t x350 = -2;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t70 = 0;

    t70 = (x349>((x350|x351)*x352));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x362 = 74U;
	int16_t x363 = 1578;
	volatile int8_t x364 = -1;
	static volatile int32_t t71 = -11058;

    t71 = (x361>((x362|x363)*x364));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x365 = -1;
	static int32_t x366 = -1306;
	uint64_t x367 = 2815612444588901LLU;
	int16_t x368 = INT16_MAX;
	static int32_t t72 = -68307704;

    t72 = (x365>((x366|x367)*x368));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x369 = UINT8_MAX;
	int16_t x371 = -1;
	static int8_t x372 = INT8_MAX;

    t73 = (x369>((x370|x371)*x372));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = -1;
	volatile int32_t x375 = 110253;

    t74 = (x373>((x374|x375)*x376));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x377 = INT32_MIN;
	uint32_t x378 = 11U;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = -1;
	int32_t t75 = -690;

    t75 = (x377>((x378|x379)*x380));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x381 = UINT8_MAX;
	uint16_t x382 = 811U;
	volatile int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = 3730LLU;
	volatile int32_t t76 = -8112896;

    t76 = (x381>((x382|x383)*x384));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x385 = 868U;
	int16_t x387 = -9;
	int32_t t77 = -1625;

    t77 = (x385>((x386|x387)*x388));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x389 = INT16_MAX;
	volatile int64_t x391 = 0LL;
	int16_t x392 = INT16_MIN;
	int32_t t78 = -1;

    t78 = (x389>((x390|x391)*x392));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x393 = -25369183;
	int8_t x394 = INT8_MAX;
	static uint32_t x395 = 58U;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t79 = 151;

    t79 = (x393>((x394|x395)*x396));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x397 = 46LLU;
	int32_t x398 = -542;
	uint8_t x399 = UINT8_MAX;
	int32_t x400 = 1;
	volatile int32_t t80 = -1;

    t80 = (x397>((x398|x399)*x400));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x401 = 626471915779912LLU;
	static uint16_t x402 = UINT16_MAX;
	uint8_t x403 = 91U;
	int8_t x404 = -1;
	volatile int32_t t81 = -4894;

    t81 = (x401>((x402|x403)*x404));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x405 = -117;
	int32_t x407 = 7152713;
	volatile int32_t t82 = -356176;

    t82 = (x405>((x406|x407)*x408));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile int64_t x410 = -1LL;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = UINT16_MAX;

    t83 = (x409>((x410|x411)*x412));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x414 = INT8_MIN;
	volatile int32_t x415 = -327;
	uint64_t x416 = 79757893LLU;
	volatile int32_t t84 = -1295632;

    t84 = (x413>((x414|x415)*x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x418 = INT8_MIN;
	static volatile uint64_t x419 = 503821LLU;
	int16_t x420 = -1;
	volatile int32_t t85 = -227407;

    t85 = (x417>((x418|x419)*x420));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x426 = 100U;
	uint32_t x427 = 290U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t86 = -450;

    t86 = (x425>((x426|x427)*x428));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x429 = -252;
	int8_t x430 = -7;
	int32_t x432 = -1;
	int32_t t87 = -1025841;

    t87 = (x429>((x430|x431)*x432));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x433 = 820;
	uint8_t x434 = 7U;
	int8_t x435 = INT8_MAX;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t88 = -15866550;

    t88 = (x433>((x434|x435)*x436));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x437 = 1;
	int64_t x438 = -812123LL;
	static int32_t x439 = INT32_MIN;
	static int32_t x440 = INT32_MIN;

    t89 = (x437>((x438|x439)*x440));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x441 = INT32_MAX;
	volatile int8_t x442 = INT8_MIN;
	int32_t x443 = 1246575;
	volatile int8_t x444 = INT8_MIN;
	int32_t t90 = -252858;

    t90 = (x441>((x442|x443)*x444));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x446 = 61U;
	static int8_t x447 = 28;
	int8_t x448 = -1;
	volatile int32_t t91 = -2235899;

    t91 = (x445>((x446|x447)*x448));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = INT32_MAX;
	uint8_t x452 = 1U;
	static volatile int32_t t92 = -112030193;

    t92 = (x449>((x450|x451)*x452));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x453 = INT16_MIN;
	uint8_t x454 = 16U;
	volatile uint64_t x455 = 9594867888849LLU;
	int8_t x456 = 1;
	int32_t t93 = -2269974;

    t93 = (x453>((x454|x455)*x456));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x457 = INT8_MIN;
	int16_t x458 = 0;
	int16_t x460 = 0;
	volatile int32_t t94 = -21476846;

    t94 = (x457>((x458|x459)*x460));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x467 = INT64_MIN;
	uint16_t x468 = 41U;
	volatile int32_t t95 = 53303661;

    t95 = (x465>((x466|x467)*x468));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x473 = 165U;
	static volatile int64_t x474 = INT64_MIN;
	int32_t x475 = -1;
	uint16_t x476 = 0U;

    t96 = (x473>((x474|x475)*x476));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x478 = 1U;
	static uint64_t x480 = UINT64_MAX;
	static volatile int32_t t97 = 7635312;

    t97 = (x477>((x478|x479)*x480));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x481 = UINT8_MAX;
	int32_t x482 = -32;
	int64_t x484 = 1LL;
	volatile int32_t t98 = 18;

    t98 = (x481>((x482|x483)*x484));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x486 = 7;
	static volatile uint32_t x487 = 38025049U;
	volatile uint64_t x488 = 1753776284622LLU;
	volatile int32_t t99 = 149195;

    t99 = (x485>((x486|x487)*x488));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x493 = 19091U;
	static uint64_t x494 = UINT64_MAX;
	volatile int32_t x495 = 631928;
	static int32_t t100 = -1388677;

    t100 = (x493>((x494|x495)*x496));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x501 = 16114U;
	int32_t x502 = -2395330;
	int32_t x503 = 63950749;

    t101 = (x501>((x502|x503)*x504));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x509 = UINT16_MAX;
	static int64_t x510 = 2973LL;
	int16_t x511 = 9;

    t102 = (x509>((x510|x511)*x512));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x513 = 748;
	uint32_t x514 = 8253943U;
	uint16_t x515 = 6461U;
	volatile int32_t t103 = 855;

    t103 = (x513>((x514|x515)*x516));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x517 = INT64_MAX;
	uint32_t x518 = 5255U;
	uint16_t x519 = 47U;
	int32_t x520 = -1;
	volatile int32_t t104 = 42418;

    t104 = (x517>((x518|x519)*x520));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x530 = -5141613839LL;
	uint32_t x531 = 3U;
	int32_t x532 = -1;

    t105 = (x529>((x530|x531)*x532));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x533 = -1;
	static int16_t x534 = INT16_MIN;
	uint32_t x535 = UINT32_MAX;
	uint16_t x536 = 13728U;
	volatile int32_t t106 = -9776;

    t106 = (x533>((x534|x535)*x536));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x537 = 2U;
	static uint64_t x538 = UINT64_MAX;
	int64_t x540 = 477686971491LL;
	volatile int32_t t107 = 1;

    t107 = (x537>((x538|x539)*x540));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x541 = 1U;
	static volatile uint64_t x542 = 90301443017508LLU;
	uint16_t x544 = UINT16_MAX;
	int32_t t108 = -1664;

    t108 = (x541>((x542|x543)*x544));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x545 = -1;
	int32_t x547 = -862;
	int32_t t109 = 37658;

    t109 = (x545>((x546|x547)*x548));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x550 = 16570277697116929LL;
	static int32_t x551 = INT32_MIN;
	volatile uint32_t x552 = UINT32_MAX;

    t110 = (x549>((x550|x551)*x552));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x553 = INT16_MIN;
	static int32_t x554 = INT32_MIN;
	int32_t x556 = 68;
	static int32_t t111 = -18945405;

    t111 = (x553>((x554|x555)*x556));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x561 = INT64_MIN;
	volatile int16_t x562 = INT16_MIN;
	static int8_t x563 = INT8_MIN;
	int8_t x564 = INT8_MIN;

    t112 = (x561>((x562|x563)*x564));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x565 = 7U;
	volatile uint32_t x566 = 25U;
	int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t113 = -1071379709;

    t113 = (x565>((x566|x567)*x568));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x569 = INT16_MIN;
	volatile uint8_t x571 = 65U;
	int16_t x572 = INT16_MAX;
	int32_t t114 = -922;

    t114 = (x569>((x570|x571)*x572));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x577 = 1U;
	int16_t x578 = -2050;
	uint64_t x579 = 412456594306349LLU;
	static int32_t x580 = -1;
	int32_t t115 = 1;

    t115 = (x577>((x578|x579)*x580));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x581 = 63135034904LLU;
	uint64_t x583 = UINT64_MAX;
	int64_t x584 = INT64_MAX;

    t116 = (x581>((x582|x583)*x584));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x585 = UINT32_MAX;
	volatile int8_t x586 = -6;
	static volatile int64_t x587 = INT64_MIN;

    t117 = (x585>((x586|x587)*x588));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x593 = 2247898279854LLU;
	uint64_t x594 = UINT64_MAX;
	volatile int64_t x595 = -1LL;
	volatile int32_t t118 = 6;

    t118 = (x593>((x594|x595)*x596));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x597 = 3871U;
	int64_t x598 = -10997698550568651LL;
	int32_t x599 = INT32_MIN;
	volatile int32_t t119 = -969985804;

    t119 = (x597>((x598|x599)*x600));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x605 = INT64_MIN;
	int16_t x606 = 3;
	int32_t t120 = 1693;

    t120 = (x605>((x606|x607)*x608));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x614 = UINT8_MAX;
	volatile int8_t x615 = -1;
	static uint16_t x616 = UINT16_MAX;

    t121 = (x613>((x614|x615)*x616));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x621 = INT32_MIN;
	uint32_t x624 = 203779027U;

    t122 = (x621>((x622|x623)*x624));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x626 = 48356U;
	int16_t x627 = -1;

    t123 = (x625>((x626|x627)*x628));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x629 = 124610LLU;
	uint64_t x630 = 8184LLU;
	int8_t x631 = -7;
	int32_t x632 = INT32_MIN;
	int32_t t124 = 1;

    t124 = (x629>((x630|x631)*x632));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MIN;
	int16_t x636 = -7;

    t125 = (x633>((x634|x635)*x636));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x637 = INT8_MIN;
	uint64_t x638 = 1844923402233LLU;
	static uint16_t x639 = 10026U;
	uint16_t x640 = 30U;
	int32_t t126 = -1;

    t126 = (x637>((x638|x639)*x640));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = INT8_MIN;
	static uint16_t x643 = 5770U;
	int8_t x644 = INT8_MAX;
	int32_t t127 = -5;

    t127 = (x641>((x642|x643)*x644));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x646 = -1;
	int8_t x647 = INT8_MAX;
	static volatile int32_t t128 = -126941;

    t128 = (x645>((x646|x647)*x648));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x661 = 15799279177902LLU;
	volatile int8_t x662 = INT8_MIN;
	uint64_t x663 = 24754496401454LLU;
	int16_t x664 = 1352;
	static volatile int32_t t129 = -3287075;

    t129 = (x661>((x662|x663)*x664));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x665 = 13U;
	uint32_t x666 = 1106704366U;
	int16_t x667 = -1;
	uint8_t x668 = 26U;
	static volatile int32_t t130 = -1;

    t130 = (x665>((x666|x667)*x668));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x669 = 1873U;
	static uint32_t x670 = UINT32_MAX;
	int32_t x671 = INT32_MAX;
	static uint32_t x672 = 7U;

    t131 = (x669>((x670|x671)*x672));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x673 = 60415;
	volatile int8_t x674 = -1;
	int8_t x676 = -1;
	volatile int32_t t132 = 50527556;

    t132 = (x673>((x674|x675)*x676));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x677 = UINT32_MAX;
	static uint8_t x679 = 32U;
	int16_t x680 = 942;
	int32_t t133 = 7008571;

    t133 = (x677>((x678|x679)*x680));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x681 = 5U;
	volatile int8_t x682 = 3;
	int16_t x683 = 13388;
	volatile uint16_t x684 = 1452U;
	static int32_t t134 = 10;

    t134 = (x681>((x682|x683)*x684));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x686 = 565U;
	uint16_t x688 = 21182U;
	static int32_t t135 = 1489526;

    t135 = (x685>((x686|x687)*x688));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x693 = UINT16_MAX;
	uint16_t x694 = UINT16_MAX;
	uint32_t x695 = UINT32_MAX;
	uint16_t x696 = UINT16_MAX;

    t136 = (x693>((x694|x695)*x696));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x697 = -88;
	volatile int8_t x698 = -3;
	int16_t x699 = INT16_MAX;
	static volatile uint16_t x700 = UINT16_MAX;
	int32_t t137 = 1;

    t137 = (x697>((x698|x699)*x700));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x705 = UINT16_MAX;
	int32_t x706 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	int16_t x708 = -1;
	int32_t t138 = 303648588;

    t138 = (x705>((x706|x707)*x708));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x713 = INT64_MIN;
	volatile uint8_t x714 = 117U;
	int32_t x715 = 17790526;
	volatile int32_t t139 = -12;

    t139 = (x713>((x714|x715)*x716));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x718 = INT8_MAX;
	uint64_t x719 = UINT64_MAX;
	uint16_t x720 = 31084U;
	volatile int32_t t140 = -7268;

    t140 = (x717>((x718|x719)*x720));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x721 = 23311U;
	volatile int32_t t141 = -3;

    t141 = (x721>((x722|x723)*x724));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x725 = 5U;
	int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MAX;
	volatile int8_t x728 = INT8_MIN;

    t142 = (x725>((x726|x727)*x728));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x729 = 6U;
	volatile int8_t x730 = -25;
	int8_t x731 = 1;
	uint16_t x732 = UINT16_MAX;
	int32_t t143 = -31285010;

    t143 = (x729>((x730|x731)*x732));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x733 = 163U;
	int32_t x734 = 20930;
	int64_t x736 = -328602716625LL;
	int32_t t144 = -1132289;

    t144 = (x733>((x734|x735)*x736));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x737 = -2015595LL;
	static volatile int8_t x738 = -1;
	int16_t x739 = -31;
	int64_t x740 = -1LL;
	volatile int32_t t145 = 63614707;

    t145 = (x737>((x738|x739)*x740));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x741 = INT8_MIN;
	uint8_t x742 = UINT8_MAX;
	uint8_t x743 = 12U;
	uint16_t x744 = 0U;
	int32_t t146 = -20776683;

    t146 = (x741>((x742|x743)*x744));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x745 = INT8_MIN;
	uint64_t x746 = 3LLU;
	static uint16_t x747 = 1U;
	int64_t x748 = INT64_MIN;

    t147 = (x745>((x746|x747)*x748));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x749 = INT32_MIN;
	uint8_t x750 = UINT8_MAX;
	int16_t x751 = -1;
	int32_t x752 = 1067995331;
	volatile int32_t t148 = 257582;

    t148 = (x749>((x750|x751)*x752));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x754 = 57;
	int8_t x756 = INT8_MAX;
	static volatile int32_t t149 = -95;

    t149 = (x753>((x754|x755)*x756));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x757 = 115LL;
	uint32_t x758 = 1112734U;
	uint16_t x759 = UINT16_MAX;
	uint16_t x760 = 7244U;

    t150 = (x757>((x758|x759)*x760));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	static volatile int16_t x762 = -1;
	int64_t x763 = 3104LL;
	volatile int32_t t151 = -31;

    t151 = (x761>((x762|x763)*x764));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x765 = INT16_MIN;
	volatile int64_t x766 = -1LL;
	int32_t x767 = 441694;
	volatile int16_t x768 = -1;
	volatile int32_t t152 = 1;

    t152 = (x765>((x766|x767)*x768));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x769 = 3856U;
	static volatile int64_t x770 = INT64_MIN;
	volatile uint64_t x771 = UINT64_MAX;
	int32_t x772 = INT32_MIN;
	volatile int32_t t153 = 352791607;

    t153 = (x769>((x770|x771)*x772));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x773 = 895U;
	volatile int8_t x774 = -1;
	static int16_t x775 = INT16_MIN;
	static volatile int32_t t154 = -43;

    t154 = (x773>((x774|x775)*x776));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x777 = 15U;
	uint8_t x778 = UINT8_MAX;
	volatile int32_t t155 = -9;

    t155 = (x777>((x778|x779)*x780));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x781 = INT16_MIN;
	int16_t x782 = -1;
	int8_t x783 = INT8_MIN;
	int16_t x784 = INT16_MAX;

    t156 = (x781>((x782|x783)*x784));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x789 = INT64_MAX;
	volatile int16_t x790 = -1;
	int32_t x792 = INT32_MAX;
	int32_t t157 = -97048;

    t157 = (x789>((x790|x791)*x792));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x793 = -1;
	uint16_t x794 = 6764U;
	volatile int16_t x795 = 30;
	volatile uint32_t x796 = UINT32_MAX;
	volatile int32_t t158 = 525348486;

    t158 = (x793>((x794|x795)*x796));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x797 = UINT16_MAX;
	int8_t x798 = INT8_MIN;
	int64_t x799 = 8259756585416LL;
	int16_t x800 = -1;
	int32_t t159 = 1482200;

    t159 = (x797>((x798|x799)*x800));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x801 = -1;
	int32_t x802 = 52;
	int8_t x803 = INT8_MAX;
	uint16_t x804 = 39U;
	static volatile int32_t t160 = 1001985;

    t160 = (x801>((x802|x803)*x804));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x805 = UINT16_MAX;
	static volatile uint32_t x806 = 27321U;
	uint16_t x808 = 7885U;
	volatile int32_t t161 = 246;

    t161 = (x805>((x806|x807)*x808));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x813 = 699593U;
	int64_t x815 = INT64_MAX;
	int16_t x816 = 7336;
	volatile int32_t t162 = -218;

    t162 = (x813>((x814|x815)*x816));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x818 = 12786956397LLU;
	int64_t x819 = INT64_MIN;
	volatile int32_t x820 = -1;

    t163 = (x817>((x818|x819)*x820));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x822 = 2384880LLU;
	uint32_t x823 = 758316055U;
	int32_t x824 = -1705;
	int32_t t164 = -1870;

    t164 = (x821>((x822|x823)*x824));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x825 = INT16_MAX;
	int64_t x826 = -1LL;
	int16_t x827 = -9958;
	int64_t x828 = -1LL;

    t165 = (x825>((x826|x827)*x828));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x833 = 700U;
	static int16_t x834 = INT16_MAX;
	int16_t x835 = INT16_MAX;
	static volatile uint8_t x836 = 39U;
	int32_t t166 = -8148248;

    t166 = (x833>((x834|x835)*x836));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = 7;
	static int16_t x840 = INT16_MIN;

    t167 = (x837>((x838|x839)*x840));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x845 = UINT64_MAX;
	static int64_t x846 = -1LL;
	int32_t x847 = INT32_MAX;
	uint32_t x848 = UINT32_MAX;
	static volatile int32_t t168 = -52683;

    t168 = (x845>((x846|x847)*x848));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x849 = INT64_MAX;
	int32_t x850 = INT32_MIN;
	volatile uint32_t x851 = UINT32_MAX;
	int8_t x852 = -1;
	static int32_t t169 = 795;

    t169 = (x849>((x850|x851)*x852));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x857 = 1U;
	int8_t x858 = -1;
	static int64_t x859 = INT64_MIN;
	volatile int32_t t170 = 3039;

    t170 = (x857>((x858|x859)*x860));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x862 = -1;
	uint32_t x863 = 205286662U;
	uint64_t x864 = 84LLU;

    t171 = (x861>((x862|x863)*x864));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x865 = 290U;
	uint32_t x866 = UINT32_MAX;
	uint16_t x868 = UINT16_MAX;
	volatile int32_t t172 = -425;

    t172 = (x865>((x866|x867)*x868));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x869 = -1;
	static volatile uint64_t x870 = UINT64_MAX;
	int32_t x871 = INT32_MIN;
	uint64_t x872 = 1000511LLU;
	volatile int32_t t173 = 975277480;

    t173 = (x869>((x870|x871)*x872));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x875 = -18002395;
	uint32_t x876 = 28U;
	static volatile int32_t t174 = 290;

    t174 = (x873>((x874|x875)*x876));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x877 = 698132657656LL;
	uint64_t x879 = UINT64_MAX;
	uint64_t x880 = 302LLU;
	volatile int32_t t175 = 8389443;

    t175 = (x877>((x878|x879)*x880));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x881 = INT8_MAX;
	static volatile int16_t x883 = -1;
	uint32_t x884 = 62462U;
	volatile int32_t t176 = 192921579;

    t176 = (x881>((x882|x883)*x884));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x885 = 19;
	int64_t x886 = INT64_MIN;
	int64_t x887 = -1LL;
	uint32_t x888 = UINT32_MAX;
	volatile int32_t t177 = -28;

    t177 = (x885>((x886|x887)*x888));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x889 = -1;
	int32_t x891 = INT32_MIN;
	volatile int32_t t178 = -18;

    t178 = (x889>((x890|x891)*x892));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x894 = UINT32_MAX;
	int16_t x895 = -1;
	int64_t x896 = -182936477LL;
	int32_t t179 = 0;

    t179 = (x893>((x894|x895)*x896));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x901 = 2129153403LL;
	volatile int32_t x902 = INT32_MAX;
	uint32_t x903 = 346U;
	int8_t x904 = 3;

    t180 = (x901>((x902|x903)*x904));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x905 = 29LLU;
	int64_t x906 = 717LL;
	volatile int64_t x907 = INT64_MIN;
	int8_t x908 = -1;
	static volatile int32_t t181 = -12118;

    t181 = (x905>((x906|x907)*x908));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x909 = INT8_MIN;
	uint64_t x910 = 213315LLU;
	int64_t x912 = INT64_MIN;
	volatile int32_t t182 = -1477966;

    t182 = (x909>((x910|x911)*x912));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x919 = 3146U;
	static uint32_t x920 = 458470U;

    t183 = (x917>((x918|x919)*x920));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x921 = 6903U;
	volatile uint16_t x923 = 4948U;
	volatile int32_t t184 = 2;

    t184 = (x921>((x922|x923)*x924));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x925 = 81792917LL;
	uint32_t x928 = UINT32_MAX;
	int32_t t185 = -416;

    t185 = (x925>((x926|x927)*x928));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x933 = 13U;
	uint64_t x934 = 273157256483518LLU;
	static int8_t x935 = INT8_MIN;
	uint16_t x936 = UINT16_MAX;

    t186 = (x933>((x934|x935)*x936));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x941 = INT64_MIN;
	int8_t x942 = -1;
	int64_t x944 = -1106761195LL;
	static int32_t t187 = -212729;

    t187 = (x941>((x942|x943)*x944));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x949 = -1511;
	static int32_t x950 = INT32_MIN;
	volatile int8_t x951 = INT8_MAX;
	static uint64_t x952 = 37419LLU;
	volatile int32_t t188 = 156;

    t188 = (x949>((x950|x951)*x952));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x953 = 9;
	int16_t x955 = INT16_MIN;
	uint64_t x956 = 253LLU;
	volatile int32_t t189 = 268087;

    t189 = (x953>((x954|x955)*x956));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x958 = 5U;
	int16_t x959 = -1;
	int16_t x960 = -1;
	volatile int32_t t190 = -33911857;

    t190 = (x957>((x958|x959)*x960));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x961 = UINT8_MAX;
	static int8_t x962 = INT8_MAX;
	uint8_t x963 = UINT8_MAX;
	static int64_t x964 = -7343266894550LL;
	int32_t t191 = 22035868;

    t191 = (x961>((x962|x963)*x964));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x965 = 2164;
	uint8_t x966 = UINT8_MAX;
	int64_t x967 = 0LL;
	static volatile int16_t x968 = INT16_MIN;
	static int32_t t192 = 0;

    t192 = (x965>((x966|x967)*x968));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x970 = 0;
	int16_t x971 = INT16_MIN;

    t193 = (x969>((x970|x971)*x972));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x973 = -1LL;
	int32_t x975 = INT32_MIN;
	static uint8_t x976 = UINT8_MAX;
	volatile int32_t t194 = -494974306;

    t194 = (x973>((x974|x975)*x976));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x977 = -1;
	volatile int16_t x980 = INT16_MAX;
	int32_t t195 = 3148;

    t195 = (x977>((x978|x979)*x980));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x981 = INT32_MAX;
	volatile int16_t x982 = INT16_MAX;
	uint32_t x984 = 1368U;
	volatile int32_t t196 = -267244067;

    t196 = (x981>((x982|x983)*x984));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x986 = UINT64_MAX;
	int8_t x987 = -7;
	int64_t x988 = -1LL;
	volatile int32_t t197 = 60197711;

    t197 = (x985>((x986|x987)*x988));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x989 = -1LL;
	static int8_t x990 = 2;
	static int16_t x991 = INT16_MIN;
	static int8_t x992 = INT8_MIN;
	volatile int32_t t198 = 106282;

    t198 = (x989>((x990|x991)*x992));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1001 = 0;
	volatile int8_t x1002 = INT8_MIN;
	volatile uint16_t x1003 = 4407U;
	volatile uint32_t x1004 = 0U;
	int32_t t199 = 0;

    t199 = (x1001>((x1002|x1003)*x1004));

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

