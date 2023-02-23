
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

int32_t x6 = INT32_MIN;
int16_t x13 = INT16_MIN;
int32_t x19 = INT32_MAX;
int64_t x25 = 3954124152327546402LL;
int64_t x32 = 110247370714990741LL;
static volatile int8_t x34 = INT8_MAX;
uint64_t x35 = UINT64_MAX;
int32_t t8 = 114706;
int32_t t9 = -2599605;
volatile uint64_t x44 = 23LLU;
volatile int8_t x49 = INT8_MIN;
static int32_t x54 = INT32_MIN;
uint8_t x57 = UINT8_MAX;
static uint8_t x66 = 7U;
static uint32_t x70 = 230970U;
int8_t x73 = 15;
volatile uint8_t x74 = 7U;
int8_t x75 = -6;
volatile int8_t x77 = -1;
static volatile int32_t x78 = INT32_MIN;
int64_t x80 = INT64_MAX;
uint64_t x84 = 4LLU;
static int64_t x87 = -4857196LL;
int64_t x96 = INT64_MAX;
int64_t x97 = 427609976086LL;
volatile int32_t t25 = 727162;
static int64_t t26 = 29108848772447308LL;
int8_t x110 = INT8_MAX;
volatile int32_t t28 = -13746222;
uint16_t x117 = 22U;
uint16_t x123 = UINT16_MAX;
volatile int32_t t31 = -12450;
int64_t x129 = -1323891LL;
uint64_t x134 = UINT64_MAX;
static int8_t x143 = INT8_MIN;
static int8_t x148 = INT8_MAX;
static volatile uint16_t x151 = 1U;
uint16_t x153 = 194U;
int64_t x164 = INT64_MAX;
int32_t t41 = 1398;
int64_t x172 = INT64_MAX;
volatile int16_t x174 = INT16_MAX;
static uint8_t x177 = 15U;
int64_t x181 = -13685671430488909LL;
volatile int32_t t48 = 102737078;
static uint64_t x198 = UINT64_MAX;
int64_t x200 = -1LL;
int16_t x203 = INT16_MIN;
volatile uint32_t t50 = 325724U;
volatile int32_t x210 = -28;
int64_t x212 = -1LL;
volatile int64_t t52 = -330357820964LL;
volatile int32_t t54 = 480825;
static volatile int16_t x223 = -40;
int64_t t55 = 149799045165069497LL;
int64_t x235 = INT64_MIN;
int64_t t59 = -3202793174LL;
int8_t x247 = INT8_MIN;
int8_t x249 = INT8_MIN;
uint8_t x250 = 3U;
volatile uint16_t x254 = UINT16_MAX;
static uint64_t t63 = 20440139556741309LLU;
int64_t x258 = INT64_MIN;
static int64_t x269 = -1LL;
uint32_t x273 = UINT32_MAX;
volatile int8_t x288 = INT8_MIN;
uint32_t x299 = UINT32_MAX;
uint16_t x300 = UINT16_MAX;
uint32_t t74 = 16361030U;
static int32_t t75 = 2923983;
uint64_t x305 = 740260LLU;
uint32_t x308 = 2179263U;
int32_t x318 = INT32_MAX;
uint8_t x321 = 45U;
int64_t x323 = -221468236702574321LL;
int32_t t80 = 11;
static uint32_t x327 = 725528U;
int32_t x328 = INT32_MAX;
static volatile uint8_t x337 = 5U;
int32_t x346 = INT32_MIN;
int16_t x352 = INT16_MAX;
volatile uint64_t t88 = 3949373640LLU;
int64_t x364 = INT64_MIN;
uint32_t x365 = 0U;
static int64_t x369 = INT64_MAX;
uint8_t x370 = 5U;
int32_t x380 = -315493350;
volatile int16_t x385 = -1;
static volatile int32_t x391 = INT32_MAX;
static int32_t t97 = 4427;
int32_t x393 = INT32_MIN;
uint32_t x397 = 1681689U;
static int64_t x398 = INT64_MIN;
int8_t x401 = -59;
volatile int8_t x407 = -8;
int32_t t101 = 15897;
uint32_t x416 = 590298703U;
int8_t x422 = -38;
int16_t x425 = INT16_MIN;
static uint32_t x428 = 1323U;
int8_t x429 = INT8_MAX;
static volatile uint64_t x433 = UINT64_MAX;
int8_t x435 = -13;
volatile uint32_t x441 = 25751322U;
int16_t x443 = INT16_MIN;
uint32_t x450 = UINT32_MAX;
static volatile uint64_t x452 = UINT64_MAX;
int64_t x453 = INT64_MIN;
volatile uint16_t x454 = 19668U;
int32_t x462 = INT32_MAX;
uint8_t x469 = 40U;
uint64_t x472 = 43534642515601LLU;
volatile int32_t t117 = -315650;
static uint8_t x477 = 1U;
static uint64_t x478 = UINT64_MAX;
volatile uint64_t x484 = UINT64_MAX;
int16_t x485 = INT16_MIN;
volatile uint8_t x511 = UINT8_MAX;
volatile int32_t t127 = 100326;
int32_t x522 = 0;
uint32_t x530 = 45178U;
int16_t x531 = -1;
volatile int64_t x542 = 2937121030036LL;
int64_t x545 = -1LL;
volatile int64_t t136 = -862959502LL;
int8_t x549 = -1;
int64_t x550 = INT64_MIN;
int64_t x554 = 0LL;
int32_t x558 = INT32_MIN;
int64_t x564 = INT64_MIN;
uint16_t x568 = 264U;
uint32_t x570 = 742153U;
uint32_t x572 = 5071248U;
volatile int16_t x574 = INT16_MIN;
static volatile uint8_t x581 = 0U;
uint64_t x582 = UINT64_MAX;
volatile int32_t t145 = -460509;
volatile int8_t x585 = -5;
int16_t x592 = INT16_MAX;
uint32_t x593 = UINT32_MAX;
int64_t x600 = -27LL;
volatile int32_t t150 = 1156;
static uint16_t x609 = 6U;
int32_t t152 = -3150268;
int32_t x613 = INT32_MIN;
uint64_t x619 = UINT64_MAX;
int64_t x622 = INT64_MIN;
static uint16_t x624 = 492U;
int8_t x633 = -11;
volatile int16_t x638 = 5666;
int32_t x640 = -1;
static volatile int64_t t159 = 22157584405814068LL;
static uint32_t x644 = 969308662U;
int16_t x645 = -6031;
int16_t x646 = INT16_MIN;
int32_t x647 = -1;
int32_t t161 = -75454290;
int32_t x652 = 209613;
int16_t x657 = -11676;
int16_t x666 = 290;
volatile int32_t t166 = 48961;
uint8_t x672 = 2U;
uint32_t x677 = UINT32_MAX;
volatile uint32_t t169 = 49U;
int64_t x683 = -2LL;
volatile uint16_t x684 = 4743U;
int8_t x692 = 21;
int8_t x697 = INT8_MIN;
int32_t x702 = INT32_MIN;
static int64_t x705 = INT64_MIN;
static uint64_t x717 = 3425LLU;
uint64_t t179 = 63880LLU;
uint16_t x722 = UINT16_MAX;
static volatile uint64_t t180 = 802698385057LLU;
volatile int64_t x730 = 3138301LL;
volatile int32_t t182 = 836790018;
volatile int32_t t184 = -15578;
static int32_t x742 = INT32_MIN;
static uint32_t x747 = 77U;
int32_t x750 = -1;
int64_t x753 = -1LL;
volatile uint8_t x754 = UINT8_MAX;
uint16_t x758 = 50U;
int8_t x764 = -1;
volatile int64_t t191 = -34540742701LL;
int32_t x774 = 47499;
volatile uint64_t x777 = UINT64_MAX;
uint64_t x780 = UINT64_MAX;
volatile uint64_t t194 = 7LLU;
uint64_t x781 = UINT64_MAX;
static uint32_t x786 = 45005300U;
static int8_t x788 = INT8_MAX;
volatile uint16_t x798 = 30U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	static uint8_t x3 = 6U;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = -972;

    t0 = (x1&((x2^x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x7 = -110309;
	static uint32_t x8 = 165656518U;
	uint32_t t1 = 1U;

    t1 = (x5&((x6^x7)>x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = 27U;
	uint64_t x11 = UINT64_MAX;
	uint64_t x12 = UINT64_MAX;
	static volatile int32_t t2 = 14452550;

    t2 = (x9&((x10^x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 67U;
	static int64_t x15 = -1582295753LL;
	int8_t x16 = -1;
	volatile int32_t t3 = 815150;

    t3 = (x13&((x14^x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 35U;
	int32_t x18 = INT32_MIN;
	static uint16_t x20 = 7377U;
	volatile int32_t t4 = -44;

    t4 = (x17&((x18^x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int64_t x22 = -1484LL;
	uint64_t x23 = 260803921026LLU;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 970;

    t5 = (x21&((x22^x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 16216315U;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 272899733195LLU;
	int64_t t6 = 786027270694430513LL;

    t6 = (x25&((x26^x27)>x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = 1;

    t7 = (x29&((x30^x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x36 = INT16_MIN;

    t8 = (x33&((x34^x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -60;
	volatile int16_t x38 = 4;
	uint32_t x39 = 16690965U;
	int8_t x40 = -1;

    t9 = (x37&((x38^x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	static uint32_t x42 = UINT32_MAX;
	int64_t x43 = INT64_MIN;
	volatile int32_t t10 = 1337178;

    t10 = (x41&((x42^x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = -5;
	volatile uint32_t x47 = 792U;
	int32_t x48 = -3649020;
	int32_t t11 = -2035;

    t11 = (x45&((x46^x47)>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x50 = INT64_MIN;
	int16_t x51 = -94;
	static uint16_t x52 = 627U;
	volatile int32_t t12 = -1;

    t12 = (x49&((x50^x51)>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int16_t x55 = INT16_MIN;
	static uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 14;

    t13 = (x53&((x54^x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 2394212LLU;
	static uint8_t x59 = 0U;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -15;

    t14 = (x57&((x58^x59)>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 27787384;
	uint8_t x62 = 2U;
	static int8_t x63 = 0;
	static int64_t x64 = -16909526117300LL;
	static int32_t t15 = 1;

    t15 = (x61&((x62^x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	static int32_t x67 = INT32_MAX;
	int32_t x68 = 2;
	volatile int32_t t16 = -21928251;

    t16 = (x65&((x66^x67)>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	volatile int32_t x71 = 169;
	int32_t x72 = 120;
	int32_t t17 = 542;

    t17 = (x69&((x70^x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x76 = 62U;
	volatile int32_t t18 = -129297445;

    t18 = (x73&((x74^x75)>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x79 = 2267;
	int32_t t19 = 935;

    t19 = (x77&((x78^x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	int64_t x82 = 4442471991368LL;
	int32_t x83 = -62295;
	volatile int32_t t20 = -111;

    t20 = (x81&((x82^x83)>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 56LLU;
	int8_t x86 = 0;
	int32_t x88 = INT32_MIN;
	uint64_t t21 = 6373393LLU;

    t21 = (x85&((x86^x87)>x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -11809;
	volatile int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	volatile int64_t x92 = -1LL;
	static volatile int32_t t22 = 2;

    t22 = (x89&((x90^x91)>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 1U;
	int32_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = 42557;

    t23 = (x93&((x94^x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = 10731;
	static int32_t x100 = INT32_MAX;
	int64_t t24 = -183901502063LL;

    t24 = (x97&((x98^x99)>x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 10U;
	int32_t x102 = -5449;
	uint16_t x103 = 11U;
	volatile uint32_t x104 = UINT32_MAX;

    t25 = (x101&((x102^x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -17826488757576LL;
	static int8_t x106 = -1;
	int64_t x107 = -15LL;
	volatile uint32_t x108 = UINT32_MAX;

    t26 = (x105&((x106^x107)>x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 31112U;
	volatile int32_t t27 = -1038053;

    t27 = (x109&((x110^x111)>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;

    t28 = (x113&((x114^x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -1LL;
	static uint32_t x119 = UINT32_MAX;
	static int8_t x120 = -1;
	volatile int32_t t29 = 0;

    t29 = (x117&((x118^x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	volatile int32_t x124 = INT32_MAX;
	int32_t t30 = 86759397;

    t30 = (x121&((x122^x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 41;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -1;

    t31 = (x125&((x126^x127)>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x130 = -3LL;
	int8_t x131 = -2;
	volatile int32_t x132 = -5690;
	volatile int64_t t32 = -16932359799LL;

    t32 = (x129&((x130^x131)>x132));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -504;
	static uint16_t x135 = 8731U;
	int64_t x136 = 2319897LL;
	int32_t t33 = 283;

    t33 = (x133&((x134^x135)>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 59U;
	volatile uint16_t x138 = 4219U;
	volatile uint16_t x139 = 2364U;
	uint32_t x140 = 156861019U;
	int32_t t34 = 1028790227;

    t34 = (x137&((x138^x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	int16_t x142 = -1;
	volatile int32_t x144 = -1;
	volatile int64_t t35 = -445935647LL;

    t35 = (x141&((x142^x143)>x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	int32_t x146 = 43;
	uint16_t x147 = UINT16_MAX;
	static int32_t t36 = 0;

    t36 = (x145&((x146^x147)>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -1026;
	int8_t x150 = INT8_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 1;

    t37 = (x149&((x150^x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x154 = UINT16_MAX;
	int16_t x155 = -4069;
	uint32_t x156 = 788814460U;
	int32_t t38 = 60;

    t38 = (x153&((x154^x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	static int16_t x158 = 28;
	uint8_t x159 = UINT8_MAX;
	static int8_t x160 = INT8_MAX;
	int32_t t39 = 11280481;

    t39 = (x157&((x158^x159)>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	static int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	volatile int64_t t40 = 738033LL;

    t40 = (x161&((x162^x163)>x164));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	volatile int16_t x166 = -1;
	static int8_t x167 = INT8_MIN;
	static uint64_t x168 = 789423479558295LLU;

    t41 = (x165&((x166^x167)>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MIN;
	volatile int16_t x171 = INT16_MIN;
	static volatile int32_t t42 = 11827;

    t42 = (x169&((x170^x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t43 = -1309;

    t43 = (x173&((x174^x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x178 = -1LL;
	static uint16_t x179 = 2U;
	uint16_t x180 = 1U;
	volatile int32_t t44 = 5807;

    t44 = (x177&((x178^x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int64_t t45 = -3374LL;

    t45 = (x181&((x182^x183)>x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = 6788;
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = UINT32_MAX;
	static volatile uint64_t x188 = UINT64_MAX;
	int32_t t46 = -37;

    t46 = (x185&((x186^x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -12;
	int64_t x190 = -179999189193LL;
	uint64_t x191 = 5LLU;
	int32_t x192 = -1;
	static int32_t t47 = 72584542;

    t47 = (x189&((x190^x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static volatile int32_t x194 = INT32_MIN;
	uint64_t x195 = 13475LLU;
	int64_t x196 = -1LL;

    t48 = (x193&((x194^x195)>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x199 = INT8_MAX;
	static volatile int32_t t49 = -757;

    t49 = (x197&((x198^x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 7823U;
	uint8_t x202 = 0U;
	uint64_t x204 = 97098193713242507LLU;

    t50 = (x201&((x202^x203)>x204));

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	static int16_t x206 = INT16_MIN;
	static uint8_t x207 = 38U;
	volatile int32_t x208 = INT32_MIN;
	volatile uint32_t t51 = 8U;

    t51 = (x205&((x206^x207)>x208));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -1LL;
	uint8_t x211 = 0U;

    t52 = (x209&((x210^x211)>x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = INT64_MIN;
	static int64_t x214 = INT64_MIN;
	volatile int16_t x215 = 9403;
	static int16_t x216 = INT16_MIN;
	static int64_t t53 = -426229837173LL;

    t53 = (x213&((x214^x215)>x216));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 41U;
	static int32_t x218 = 6130610;
	uint16_t x219 = 7874U;
	uint16_t x220 = 0U;

    t54 = (x217&((x218^x219)>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = -119270706LL;
	static int32_t x222 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;

    t55 = (x221&((x222^x223)>x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -22;
	int8_t x226 = INT8_MIN;
	int8_t x227 = 61;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 525788;

    t56 = (x225&((x226^x227)>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	int64_t x230 = 830982878997LL;
	uint32_t x231 = UINT32_MAX;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 2177826;

    t57 = (x229&((x230^x231)>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 93816U;
	uint8_t x234 = 7U;
	volatile int32_t x236 = 65875937;
	volatile uint32_t t58 = 1083U;

    t58 = (x233&((x234^x235)>x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -407LL;
	static int8_t x238 = INT8_MAX;
	int16_t x239 = -10;
	int16_t x240 = 3310;

    t59 = (x237&((x238^x239)>x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = UINT32_MAX;
	volatile int16_t x242 = -1;
	static int64_t x243 = -1LL;
	static int32_t x244 = 15;
	volatile uint32_t t60 = 291U;

    t60 = (x241&((x242^x243)>x244));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int64_t x246 = -1LL;
	int64_t x248 = 232LL;
	int64_t t61 = -55054038710988LL;

    t61 = (x245&((x246^x247)>x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x251 = 742792;
	static volatile uint32_t x252 = UINT32_MAX;
	int32_t t62 = -338;

    t62 = (x249&((x250^x251)>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 632030675148LLU;
	int64_t x255 = INT64_MIN;
	volatile int32_t x256 = INT32_MIN;

    t63 = (x253&((x254^x255)>x256));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 34249355491LLU;
	int16_t x259 = -244;
	static int16_t x260 = INT16_MIN;
	volatile uint64_t t64 = 4657767757723524LLU;

    t64 = (x257&((x258^x259)>x260));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	static uint32_t x262 = 2U;
	int16_t x263 = INT16_MAX;
	volatile int32_t x264 = 1378;
	volatile int32_t t65 = -186;

    t65 = (x261&((x262^x263)>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 459U;
	int64_t x266 = INT64_MAX;
	uint8_t x267 = 16U;
	static volatile int64_t x268 = INT64_MAX;
	static volatile uint32_t t66 = 14U;

    t66 = (x265&((x266^x267)>x268));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x270 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;
	static int32_t x272 = -1;
	static volatile int64_t t67 = -64711354004LL;

    t67 = (x269&((x270^x271)>x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 28LLU;
	uint32_t x275 = 31U;
	int16_t x276 = INT16_MAX;
	uint32_t t68 = 38023525U;

    t68 = (x273&((x274^x275)>x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 57LLU;
	volatile int8_t x278 = -1;
	int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	volatile uint64_t t69 = 6LLU;

    t69 = (x277&((x278^x279)>x280));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = UINT32_MAX;
	volatile int32_t x282 = INT32_MAX;
	volatile int16_t x283 = -384;
	volatile uint64_t x284 = 1659065LLU;
	static volatile uint32_t t70 = 14312U;

    t70 = (x281&((x282^x283)>x284));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	static int32_t x287 = INT32_MIN;
	static volatile int32_t t71 = 3784;

    t71 = (x285&((x286^x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 1172364501131LL;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = -6LL;
	int64_t x292 = -141937825796413352LL;
	int64_t t72 = -6152731LL;

    t72 = (x289&((x290^x291)>x292));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	static uint64_t x294 = 124LLU;
	volatile uint64_t x295 = 702LLU;
	volatile int16_t x296 = INT16_MAX;
	volatile int32_t t73 = -87;

    t73 = (x293&((x294^x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = UINT32_MAX;
	int64_t x298 = -50LL;

    t74 = (x297&((x298^x299)>x300));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = 10;
	int32_t x302 = -31279990;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = -1;

    t75 = (x301&((x302^x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -1LL;
	uint16_t x307 = UINT16_MAX;
	uint64_t t76 = 1720645021864919LLU;

    t76 = (x305&((x306^x307)>x308));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	volatile int32_t x311 = 3302;
	volatile uint8_t x312 = 2U;
	static volatile int32_t t77 = -29758;

    t77 = (x309&((x310^x311)>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 6319U;
	uint16_t x314 = UINT16_MAX;
	volatile uint8_t x315 = 1U;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = 421175687;

    t78 = (x313&((x314^x315)>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	int32_t x319 = -4050;
	uint32_t x320 = 9U;
	volatile int64_t t79 = -32295494060211LL;

    t79 = (x317&((x318^x319)>x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = INT64_MAX;
	static int16_t x324 = INT16_MIN;

    t80 = (x321&((x322^x323)>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -417;
	int8_t x326 = INT8_MAX;
	static int32_t t81 = -881627517;

    t81 = (x325&((x326^x327)>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	static int64_t x330 = INT64_MIN;
	uint16_t x331 = UINT16_MAX;
	static int64_t x332 = INT64_MIN;
	static volatile int32_t t82 = 14;

    t82 = (x329&((x330^x331)>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	static int16_t x334 = -1;
	static int16_t x335 = -1;
	static uint16_t x336 = 167U;
	int32_t t83 = 9475010;

    t83 = (x333&((x334^x335)>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	int32_t x339 = -880655;
	static int64_t x340 = -1LL;
	volatile int32_t t84 = -767249;

    t84 = (x337&((x338^x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	static uint64_t x342 = 984418250LLU;
	uint8_t x343 = 89U;
	volatile uint64_t x344 = 182LLU;
	int32_t t85 = -36619;

    t85 = (x341&((x342^x343)>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 25U;
	int32_t x347 = INT32_MAX;
	static volatile int16_t x348 = -1;
	int32_t t86 = -197625071;

    t86 = (x345&((x346^x347)>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MAX;
	static uint64_t x350 = 129868111222LLU;
	static int64_t x351 = INT64_MAX;
	static volatile int32_t t87 = 170;

    t87 = (x349&((x350^x351)>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MIN;
	int16_t x356 = 59;

    t88 = (x353&((x354^x355)>x356));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MAX;
	uint16_t x358 = 9U;
	uint8_t x359 = 1U;
	static int8_t x360 = -1;
	volatile int32_t t89 = 14;

    t89 = (x357&((x358^x359)>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 0U;
	int8_t x362 = 1;
	int32_t x363 = 203;
	volatile int32_t t90 = -30;

    t90 = (x361&((x362^x363)>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MIN;
	static int32_t x367 = -617;
	static uint64_t x368 = 5310855LLU;
	volatile uint32_t t91 = 9U;

    t91 = (x365&((x366^x367)>x368));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x371 = -311LL;
	static int64_t x372 = INT64_MIN;
	int64_t t92 = 2533592LL;

    t92 = (x369&((x370^x371)>x372));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = INT8_MAX;
	int64_t x376 = 25307942670105137LL;
	int32_t t93 = -1;

    t93 = (x373&((x374^x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x377 = 988U;
	int64_t x378 = INT64_MAX;
	static volatile int8_t x379 = 0;
	static int32_t t94 = 9036;

    t94 = (x377&((x378^x379)>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x381 = UINT64_MAX;
	uint32_t x382 = 2088772U;
	int32_t x383 = INT32_MAX;
	static int8_t x384 = INT8_MIN;
	static uint64_t t95 = 1088LLU;

    t95 = (x381&((x382^x383)>x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x386 = -1396LL;
	int64_t x387 = INT64_MAX;
	static uint8_t x388 = UINT8_MAX;
	static volatile int32_t t96 = 41516230;

    t96 = (x385&((x386^x387)>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	volatile int16_t x390 = -87;
	static int32_t x392 = INT32_MIN;

    t97 = (x389&((x390^x391)>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = -255;
	int64_t x395 = INT64_MIN;
	static uint32_t x396 = 52163648U;
	int32_t t98 = 87877921;

    t98 = (x393&((x394^x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile uint32_t t99 = 37808481U;

    t99 = (x397&((x398^x399)>x400));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x402 = 18U;
	static volatile int64_t x403 = -1LL;
	static uint32_t x404 = 0U;
	static int32_t t100 = -3384790;

    t100 = (x401&((x402^x403)>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static uint64_t x406 = 8472393918793723040LLU;
	static int32_t x408 = INT32_MIN;

    t101 = (x405&((x406^x407)>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1678;
	volatile int64_t x410 = 1LL;
	uint16_t x411 = 809U;
	static int64_t x412 = INT64_MIN;
	volatile int32_t t102 = -2;

    t102 = (x409&((x410^x411)>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = -814428140;
	volatile int8_t x414 = INT8_MIN;
	static int16_t x415 = -1;
	int32_t t103 = -319978;

    t103 = (x413&((x414^x415)>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	volatile int8_t x418 = INT8_MIN;
	uint32_t x419 = 1454971986U;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t104 = -636638;

    t104 = (x417&((x418^x419)>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MIN;
	int8_t x423 = -18;
	int16_t x424 = -15417;
	static int32_t t105 = 1171523;

    t105 = (x421&((x422^x423)>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = -1;
	int16_t x427 = -1;
	volatile int32_t t106 = 678142;

    t106 = (x425&((x426^x427)>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = INT8_MIN;
	int16_t x431 = -45;
	volatile uint32_t x432 = UINT32_MAX;
	int32_t t107 = 1412464;

    t107 = (x429&((x430^x431)>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 4382037161LLU;
	int64_t x436 = -1LL;
	static uint64_t t108 = 0LLU;

    t108 = (x433&((x434^x435)>x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -5031;
	int8_t x438 = -55;
	uint16_t x439 = 0U;
	uint64_t x440 = 311960555777LLU;
	int32_t t109 = 11874554;

    t109 = (x437&((x438^x439)>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = 1;
	static volatile uint64_t x444 = UINT64_MAX;
	uint32_t t110 = 1831995U;

    t110 = (x441&((x442^x443)>x444));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int64_t x446 = -1LL;
	int64_t x447 = INT64_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t111 = -24;

    t111 = (x445&((x446^x447)>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -1;
	uint8_t x451 = UINT8_MAX;
	volatile int32_t t112 = 131717567;

    t112 = (x449&((x450^x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x455 = 1069685U;
	int8_t x456 = -2;
	volatile int64_t t113 = -31029378403LL;

    t113 = (x453&((x454^x455)>x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 0U;
	static int16_t x459 = INT16_MIN;
	static int8_t x460 = INT8_MAX;
	static volatile int32_t t114 = -183855694;

    t114 = (x457&((x458^x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = 1U;
	volatile int32_t t115 = 18;

    t115 = (x461&((x462^x463)>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 2;
	static int64_t x466 = 4502527849474322LL;
	volatile int32_t x467 = INT32_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t116 = -147722933;

    t116 = (x465&((x466^x467)>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = 1;
	int32_t x471 = -158;

    t117 = (x469&((x470^x471)>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int64_t x474 = -2002342813LL;
	static int32_t x475 = INT32_MIN;
	static int32_t x476 = -1;
	volatile int32_t t118 = 0;

    t118 = (x473&((x474^x475)>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x479 = -1;
	volatile int16_t x480 = 749;
	volatile int32_t t119 = -311262774;

    t119 = (x477&((x478^x479)>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MIN;
	uint8_t x482 = 2U;
	int32_t x483 = -7984;
	int32_t t120 = -3527921;

    t120 = (x481&((x482^x483)>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x486 = 1001777U;
	static uint16_t x487 = 32234U;
	int16_t x488 = -1;
	volatile int32_t t121 = 25351424;

    t121 = (x485&((x486^x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 1426U;
	int32_t x490 = INT32_MAX;
	static uint16_t x491 = 1923U;
	int8_t x492 = 0;
	volatile uint32_t t122 = 5U;

    t122 = (x489&((x490^x491)>x492));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	uint16_t x494 = 6020U;
	int32_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int64_t t123 = 122103770601888LL;

    t123 = (x493&((x494^x495)>x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	uint32_t x498 = 59U;
	volatile uint64_t x499 = 7LLU;
	uint32_t x500 = UINT32_MAX;
	int32_t t124 = 132876;

    t124 = (x497&((x498^x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	static int16_t x502 = -1;
	int8_t x503 = INT8_MIN;
	int64_t x504 = -1LL;
	volatile int32_t t125 = 385527618;

    t125 = (x501&((x502^x503)>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	int8_t x506 = INT8_MIN;
	static int32_t x507 = INT32_MIN;
	static volatile uint32_t x508 = 1243504U;
	volatile int32_t t126 = 872347648;

    t126 = (x505&((x506^x507)>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MAX;
	uint8_t x512 = 0U;

    t127 = (x509&((x510^x511)>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 2186172LL;
	static uint8_t x514 = UINT8_MAX;
	uint32_t x515 = 2U;
	static int64_t x516 = INT64_MIN;
	int64_t t128 = 2130629801981193444LL;

    t128 = (x513&((x514^x515)>x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = INT8_MIN;
	uint8_t x519 = UINT8_MAX;
	volatile int16_t x520 = 305;
	int32_t t129 = 93018;

    t129 = (x517&((x518^x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = 843027;
	static uint8_t x523 = UINT8_MAX;
	uint32_t x524 = 78U;
	int32_t t130 = -659;

    t130 = (x521&((x522^x523)>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 1499230858U;
	int16_t x526 = -1;
	static int32_t x527 = INT32_MIN;
	uint64_t x528 = 4554580574531LLU;
	uint32_t t131 = 0U;

    t131 = (x525&((x526^x527)>x528));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x529 = 1U;
	volatile int32_t x532 = -396255;
	int32_t t132 = -638920245;

    t132 = (x529&((x530^x531)>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x534 = 15634LLU;
	int64_t x535 = INT64_MIN;
	uint8_t x536 = 61U;
	volatile int32_t t133 = -5210;

    t133 = (x533&((x534^x535)>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 38U;
	static int8_t x538 = INT8_MIN;
	static int32_t x539 = -696472441;
	static int16_t x540 = -31;
	int32_t t134 = -199885;

    t134 = (x537&((x538^x539)>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 0U;
	volatile int8_t x543 = -1;
	volatile int64_t x544 = -1672380134991212076LL;
	volatile int32_t t135 = -200855;

    t135 = (x541&((x542^x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x546 = -1LL;
	static int32_t x547 = INT32_MAX;
	int16_t x548 = -1;

    t136 = (x545&((x546^x547)>x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x551 = UINT64_MAX;
	uint8_t x552 = UINT8_MAX;
	int32_t t137 = 5005185;

    t137 = (x549&((x550^x551)>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 52U;
	int8_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = -1;

    t138 = (x553&((x554^x555)>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x559 = 0LL;
	static uint8_t x560 = 9U;
	static volatile int32_t t139 = -22690265;

    t139 = (x557&((x558^x559)>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 14849;
	int8_t x562 = INT8_MIN;
	static uint8_t x563 = 40U;
	volatile int32_t t140 = -8099452;

    t140 = (x561&((x562^x563)>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -1LL;
	static int64_t x566 = -1LL;
	volatile int64_t x567 = 77LL;
	int64_t t141 = 7820448433362LL;

    t141 = (x565&((x566^x567)>x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -1;
	uint32_t x571 = 275496U;
	static volatile int32_t t142 = 464996;

    t142 = (x569&((x570^x571)>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	uint8_t x575 = 1U;
	int32_t x576 = 91579137;
	static int64_t t143 = -7LL;

    t143 = (x573&((x574^x575)>x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	volatile int64_t x578 = -1LL;
	volatile uint8_t x579 = UINT8_MAX;
	static int64_t x580 = 43298LL;
	volatile int64_t t144 = -20600660LL;

    t144 = (x577&((x578^x579)>x580));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x583 = UINT64_MAX;
	int64_t x584 = 136952LL;

    t145 = (x581&((x582^x583)>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = UINT8_MAX;
	uint64_t x587 = 285LLU;
	int32_t x588 = -1;
	volatile int32_t t146 = -25;

    t146 = (x585&((x586^x587)>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int8_t x590 = -1;
	static int32_t x591 = -88;
	volatile int32_t t147 = -425472;

    t147 = (x589&((x590^x591)>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = -1;
	volatile uint16_t x595 = 1727U;
	static int16_t x596 = 1;
	static uint32_t t148 = 50U;

    t148 = (x593&((x594^x595)>x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MAX;
	static uint32_t x598 = UINT32_MAX;
	volatile uint64_t x599 = 1782LLU;
	static int32_t t149 = 44099234;

    t149 = (x597&((x598^x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static uint32_t x602 = UINT32_MAX;
	uint16_t x603 = 4U;
	int32_t x604 = -1;

    t150 = (x601&((x602^x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 22462365900335LL;
	volatile int8_t x606 = INT8_MIN;
	int16_t x607 = -104;
	static int8_t x608 = INT8_MAX;
	int64_t t151 = 1073251002LL;

    t151 = (x605&((x606^x607)>x608));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x610 = INT32_MIN;
	int16_t x611 = -1;
	int8_t x612 = 3;

    t152 = (x609&((x610^x611)>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x614 = 0;
	uint64_t x615 = 2604147499115LLU;
	volatile int16_t x616 = INT16_MIN;
	int32_t t153 = 961866458;

    t153 = (x613&((x614^x615)>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile int64_t x618 = INT64_MIN;
	uint8_t x620 = UINT8_MAX;
	int32_t t154 = -17175225;

    t154 = (x617&((x618^x619)>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MAX;
	int64_t x623 = INT64_MIN;
	int32_t t155 = 3;

    t155 = (x621&((x622^x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	uint32_t x626 = 61U;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = 1;
	volatile int64_t t156 = 3893396273063307LL;

    t156 = (x625&((x626^x627)>x628));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int8_t x630 = INT8_MIN;
	static int16_t x631 = -1;
	volatile int16_t x632 = INT16_MIN;
	int32_t t157 = 4135689;

    t157 = (x629&((x630^x631)>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x634 = -1;
	static int16_t x635 = 0;
	uint8_t x636 = UINT8_MAX;
	int32_t t158 = -176977;

    t158 = (x633&((x634^x635)>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x639 = INT64_MIN;

    t159 = (x637&((x638^x639)>x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	static uint64_t x642 = 1061780419852LLU;
	static volatile uint8_t x643 = 0U;
	int32_t t160 = -23332;

    t160 = (x641&((x642^x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x648 = INT8_MIN;

    t161 = (x645&((x646^x647)>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint64_t x650 = 0LLU;
	uint8_t x651 = UINT8_MAX;
	static int64_t t162 = 660258LL;

    t162 = (x649&((x650^x651)>x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -11583LL;
	static volatile uint16_t x654 = UINT16_MAX;
	int32_t x655 = -62;
	static uint16_t x656 = 484U;
	static int64_t t163 = 113LL;

    t163 = (x653&((x654^x655)>x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x658 = UINT32_MAX;
	volatile int64_t x659 = -6LL;
	volatile uint16_t x660 = 129U;
	volatile int32_t t164 = 1619;

    t164 = (x657&((x658^x659)>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	static int64_t x662 = -305267LL;
	volatile int8_t x663 = INT8_MIN;
	static int16_t x664 = -1533;
	int32_t t165 = 2949408;

    t165 = (x661&((x662^x663)>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	volatile int32_t x667 = INT32_MAX;
	int32_t x668 = INT32_MIN;

    t166 = (x665&((x666^x667)>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	volatile int16_t x670 = -1;
	int32_t x671 = -461478;
	int32_t t167 = -489;

    t167 = (x669&((x670^x671)>x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = -1;
	uint8_t x674 = 47U;
	static int32_t x675 = INT32_MIN;
	static uint8_t x676 = UINT8_MAX;
	static int32_t t168 = 328679;

    t168 = (x673&((x674^x675)>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x678 = 123564064360LL;
	int64_t x679 = -3LL;
	volatile int16_t x680 = INT16_MIN;

    t169 = (x677&((x678^x679)>x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = 1;
	static volatile int64_t x682 = -59LL;
	int32_t t170 = 5791737;

    t170 = (x681&((x682^x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	int64_t x686 = INT64_MIN;
	int32_t x687 = -1;
	static volatile int16_t x688 = INT16_MAX;
	int32_t t171 = 502;

    t171 = (x685&((x686^x687)>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	static uint64_t x690 = UINT64_MAX;
	int32_t x691 = INT32_MAX;
	static volatile int32_t t172 = -14579478;

    t172 = (x689&((x690^x691)>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x693 = 3U;
	volatile int8_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	int32_t x696 = INT32_MIN;
	volatile int32_t t173 = 17545;

    t173 = (x693&((x694^x695)>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x698 = 81U;
	int32_t x699 = -471381794;
	volatile int8_t x700 = INT8_MAX;
	volatile int32_t t174 = -6068;

    t174 = (x697&((x698^x699)>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = -42;
	int64_t x703 = 4699472021919552LL;
	int32_t x704 = -190411580;
	static volatile int32_t t175 = -165;

    t175 = (x701&((x702^x703)>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x706 = INT16_MIN;
	int16_t x707 = INT16_MAX;
	uint32_t x708 = 193U;
	int64_t t176 = -2232455209569344440LL;

    t176 = (x705&((x706^x707)>x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	volatile uint64_t x710 = 214939489318817LLU;
	int64_t x711 = -1LL;
	int16_t x712 = -1;
	int32_t t177 = -42;

    t177 = (x709&((x710^x711)>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x713 = -1;
	static int64_t x714 = 1LL;
	uint8_t x715 = UINT8_MAX;
	int8_t x716 = INT8_MIN;
	static volatile int32_t t178 = -248436;

    t178 = (x713&((x714^x715)>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x718 = 2203U;
	static int16_t x719 = -32;
	uint16_t x720 = 4U;

    t179 = (x717&((x718^x719)>x720));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 33229069949547LLU;
	int8_t x723 = INT8_MAX;
	uint8_t x724 = UINT8_MAX;

    t180 = (x721&((x722^x723)>x724));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 414LLU;
	int64_t x726 = INT64_MIN;
	int8_t x727 = INT8_MAX;
	int8_t x728 = INT8_MAX;
	uint64_t t181 = 505744000LLU;

    t181 = (x725&((x726^x727)>x728));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x729 = -1;
	int32_t x731 = -7;
	volatile int16_t x732 = INT16_MIN;

    t182 = (x729&((x730^x731)>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	uint32_t x734 = 399889803U;
	uint64_t x735 = 1133583258LLU;
	int32_t x736 = INT32_MIN;
	volatile int32_t t183 = -960;

    t183 = (x733&((x734^x735)>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = INT16_MIN;
	int16_t x738 = -1;
	uint32_t x739 = 275231757U;
	volatile int16_t x740 = INT16_MIN;

    t184 = (x737&((x738^x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 193753;
	int32_t x743 = 12911;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t185 = -2;

    t185 = (x741&((x742^x743)>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MIN;
	uint64_t x748 = 984219234412LLU;
	int32_t t186 = 1;

    t186 = (x745&((x746^x747)>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x749 = 651U;
	static int16_t x751 = INT16_MIN;
	static uint16_t x752 = UINT16_MAX;
	static uint32_t t187 = 853801715U;

    t187 = (x749&((x750^x751)>x752));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x755 = INT32_MIN;
	volatile uint64_t x756 = 2054LLU;
	int64_t t188 = -1364LL;

    t188 = (x753&((x754^x755)>x756));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	int8_t x759 = 5;
	int32_t x760 = INT32_MIN;
	int32_t t189 = -853;

    t189 = (x757&((x758^x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = -2;
	uint32_t x763 = UINT32_MAX;
	int64_t t190 = 544067258600LL;

    t190 = (x761&((x762^x763)>x764));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 93846562587LL;
	int16_t x766 = INT16_MIN;
	volatile int64_t x767 = INT64_MIN;
	uint32_t x768 = 826494U;

    t191 = (x765&((x766^x767)>x768));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x769 = 1;
	int32_t x770 = INT32_MAX;
	int8_t x771 = -4;
	int32_t x772 = INT32_MIN;
	int32_t t192 = -80;

    t192 = (x769&((x770^x771)>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	volatile int16_t x775 = -1;
	volatile uint32_t x776 = 78132898U;
	volatile int32_t t193 = -999759531;

    t193 = (x773&((x774^x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = INT8_MAX;
	int16_t x779 = INT16_MAX;

    t194 = (x777&((x778^x779)>x780));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x782 = INT8_MAX;
	int64_t x783 = INT64_MIN;
	static int64_t x784 = 739812253250628641LL;
	uint64_t t195 = 5943LLU;

    t195 = (x781&((x782^x783)>x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	volatile int16_t x787 = INT16_MIN;
	volatile int32_t t196 = -30429;

    t196 = (x785&((x786^x787)>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	int32_t x790 = -1;
	uint16_t x791 = 30939U;
	int16_t x792 = INT16_MIN;
	volatile int32_t t197 = 46668;

    t197 = (x789&((x790^x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x793 = 7816142U;
	static uint32_t x794 = UINT32_MAX;
	volatile int32_t x795 = INT32_MIN;
	uint8_t x796 = 54U;
	uint32_t t198 = 371996U;

    t198 = (x793&((x794^x795)>x796));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -4;
	uint32_t x799 = 394749U;
	uint64_t x800 = UINT64_MAX;
	int32_t t199 = 1;

    t199 = (x797&((x798^x799)>x800));

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

