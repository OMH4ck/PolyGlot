
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

int16_t x11 = -5;
int8_t x16 = INT8_MIN;
int8_t x17 = 1;
int32_t t5 = 19168;
int32_t x27 = -820;
int64_t x30 = INT64_MAX;
volatile uint8_t x31 = 0U;
int32_t t7 = 5980449;
uint8_t x33 = 22U;
int64_t x36 = -4401033429055897LL;
volatile uint64_t x40 = 90LLU;
int64_t x58 = INT64_MIN;
uint8_t x81 = 5U;
static int16_t x89 = 7;
int32_t x93 = -1;
volatile uint8_t x104 = UINT8_MAX;
uint16_t x109 = 10657U;
volatile int64_t x116 = INT64_MIN;
int32_t x117 = INT32_MIN;
volatile int32_t t28 = -276300468;
volatile int8_t x146 = INT8_MIN;
volatile uint8_t x147 = 0U;
int8_t x149 = -1;
int64_t x152 = INT64_MIN;
volatile int32_t x154 = -1;
uint16_t x157 = UINT16_MAX;
static int64_t x160 = INT64_MAX;
static volatile int64_t x161 = INT64_MIN;
volatile int32_t x164 = INT32_MIN;
int32_t t38 = 22051;
uint64_t x169 = UINT64_MAX;
int16_t x171 = INT16_MIN;
int32_t t40 = 68380;
int16_t x190 = INT16_MIN;
volatile int64_t x191 = -1LL;
static int32_t x196 = INT32_MIN;
static uint8_t x198 = UINT8_MAX;
int32_t t47 = 4319;
static volatile uint16_t x204 = UINT16_MAX;
uint8_t x207 = 127U;
int32_t x223 = INT32_MIN;
int32_t x224 = -10;
int8_t x230 = INT8_MIN;
int16_t x238 = INT16_MIN;
int64_t x246 = INT64_MIN;
uint8_t x247 = 10U;
uint8_t x248 = 24U;
int8_t x249 = INT8_MIN;
uint16_t x252 = UINT16_MAX;
static int64_t x253 = -32LL;
int32_t x255 = INT32_MAX;
volatile uint16_t x268 = UINT16_MAX;
int32_t x271 = INT32_MIN;
uint8_t x273 = UINT8_MAX;
int16_t x275 = 3031;
int32_t t67 = -183652904;
volatile int16_t x282 = INT16_MIN;
static int8_t x288 = -9;
uint32_t x295 = UINT32_MAX;
uint32_t x312 = UINT32_MAX;
static volatile uint64_t x332 = 342LLU;
int8_t x344 = INT8_MIN;
uint32_t x346 = 213509U;
int32_t x348 = -4144977;
uint8_t x350 = 117U;
int16_t x352 = INT16_MAX;
int64_t x362 = INT64_MAX;
static int64_t x363 = -1LL;
volatile int8_t x365 = 0;
volatile uint64_t x373 = UINT64_MAX;
int32_t t89 = -492;
static uint16_t x377 = 218U;
int64_t x378 = INT64_MIN;
static int64_t x382 = INT64_MIN;
int32_t x386 = -187060085;
int8_t x387 = -4;
volatile int32_t t92 = 1;
int16_t x393 = INT16_MIN;
static int16_t x397 = 767;
int64_t x407 = -6877409427LL;
int32_t t97 = 626946;
int8_t x411 = -1;
uint64_t x417 = UINT64_MAX;
uint32_t x418 = 2U;
volatile int16_t x421 = INT16_MAX;
int64_t x425 = INT64_MIN;
int16_t x432 = -1;
volatile uint64_t x433 = 20LLU;
int32_t t104 = -24;
static int64_t x441 = INT64_MAX;
int32_t t107 = -127643058;
volatile int32_t x454 = -6;
int32_t t111 = 3710;
static volatile int8_t x468 = -6;
volatile uint8_t x471 = 1U;
volatile int32_t t114 = -197699243;
volatile int32_t t116 = 3631;
int64_t x485 = INT64_MAX;
volatile int32_t t117 = 5;
int64_t x490 = INT64_MAX;
volatile int32_t x491 = 172816;
int64_t x497 = -1LL;
int32_t t120 = 5;
int8_t x506 = 1;
volatile int32_t t123 = 1074746;
volatile uint32_t x514 = UINT32_MAX;
uint32_t x517 = 647152U;
volatile int32_t x519 = INT32_MIN;
int8_t x520 = INT8_MIN;
int32_t t125 = -1;
int32_t x522 = -1;
static uint64_t x525 = 2223LLU;
int16_t x527 = -11;
uint16_t x536 = 1U;
static volatile int32_t t130 = 13;
int32_t t132 = -30764;
int8_t x549 = -2;
int8_t x553 = INT8_MIN;
int16_t x556 = 3791;
int64_t x560 = -460997LL;
static uint8_t x565 = UINT8_MAX;
int32_t t137 = -23100603;
uint16_t x571 = UINT16_MAX;
int32_t x574 = -1;
static volatile int64_t x577 = INT64_MIN;
static int16_t x580 = -110;
uint16_t x585 = UINT16_MAX;
int32_t t144 = -12;
uint64_t x600 = UINT64_MAX;
int8_t x615 = -1;
int16_t x620 = -1;
uint64_t x625 = UINT64_MAX;
int32_t x631 = INT32_MIN;
static int16_t x632 = INT16_MIN;
volatile int32_t x633 = -51302;
int32_t x634 = INT32_MIN;
uint32_t x635 = UINT32_MAX;
static int64_t x636 = -1LL;
volatile uint64_t x639 = UINT64_MAX;
static uint32_t x646 = UINT32_MAX;
int32_t x647 = INT32_MAX;
static uint32_t x649 = 4241217U;
int8_t x652 = -1;
int16_t x654 = -542;
int32_t t159 = 316957832;
int16_t x663 = 327;
static int32_t x664 = INT32_MIN;
int64_t x669 = -2110214847LL;
volatile int32_t t162 = 8953475;
int32_t x683 = -1;
volatile uint16_t x684 = 4161U;
volatile int32_t t165 = -713477;
int16_t x686 = -1;
volatile int8_t x687 = -14;
int32_t t167 = -192847952;
int32_t x695 = INT32_MIN;
volatile int32_t t168 = -3;
static int16_t x702 = 0;
int64_t x707 = 2LL;
int64_t x712 = INT64_MAX;
int16_t x715 = INT16_MAX;
static volatile int32_t x719 = INT32_MIN;
int64_t x720 = INT64_MAX;
static volatile uint32_t x722 = 84U;
uint16_t x728 = 264U;
static int32_t x729 = 763797;
int64_t x731 = INT64_MAX;
static volatile int32_t t177 = 11181;
static int16_t x736 = -1;
static int16_t x754 = -1;
volatile int32_t t184 = 3;
uint16_t x765 = UINT16_MAX;
int16_t x766 = INT16_MIN;
int32_t x770 = INT32_MAX;
uint8_t x772 = UINT8_MAX;
int32_t x774 = -236011;
static uint16_t x780 = UINT16_MAX;
volatile int8_t x783 = INT8_MIN;
static uint8_t x784 = 1U;
uint8_t x787 = 53U;
int32_t x809 = INT32_MIN;
uint8_t x812 = UINT8_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MAX;
	uint16_t x3 = 5U;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = 0;

    t0 = (x1<=((x2>x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	static int8_t x7 = INT8_MIN;
	uint8_t x8 = 12U;
	static volatile int32_t t1 = 8011385;

    t1 = (x5<=((x6>x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 9;
	volatile uint64_t x10 = 861835659447065LLU;
	uint64_t x12 = 1533LLU;
	int32_t t2 = 1944942;

    t2 = (x9<=((x10>x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 38U;
	volatile int32_t t3 = -15737710;

    t3 = (x13<=((x14>x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = -1;
	int16_t x19 = -1;
	static uint64_t x20 = 2249810802LLU;
	int32_t t4 = -3448938;

    t4 = (x17<=((x18>x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	uint8_t x22 = 3U;
	uint16_t x23 = 22941U;
	static uint32_t x24 = 2U;

    t5 = (x21<=((x22>x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -339;
	int64_t x26 = INT64_MIN;
	uint8_t x28 = 3U;
	volatile int32_t t6 = -5277483;

    t6 = (x25<=((x26>x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = 0;
	int16_t x32 = INT16_MIN;

    t7 = (x29<=((x30>x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = UINT16_MAX;
	volatile int16_t x35 = -1;
	volatile int32_t t8 = 3887;

    t8 = (x33<=((x34>x35)%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	static volatile uint64_t x38 = 47045694LLU;
	uint16_t x39 = 6561U;
	volatile int32_t t9 = -109665825;

    t9 = (x37<=((x38>x39)%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 8U;
	int16_t x42 = INT16_MAX;
	int64_t x43 = 2042LL;
	int64_t x44 = -531843903133095582LL;
	int32_t t10 = 248;

    t10 = (x41<=((x42>x43)%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = 1;
	int32_t x52 = -1;
	volatile int32_t t11 = -15777120;

    t11 = (x49<=((x50>x51)%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 1;
	volatile uint32_t x54 = 4783U;
	static uint32_t x55 = 5459694U;
	int8_t x56 = -1;
	int32_t t12 = 3375;

    t12 = (x53<=((x54>x55)%x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	volatile uint16_t x59 = 0U;
	int16_t x60 = INT16_MAX;
	int32_t t13 = -456333152;

    t13 = (x57<=((x58>x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -91549441411795783LL;
	volatile int8_t x62 = INT8_MAX;
	int16_t x63 = -1;
	int32_t x64 = 150407;
	volatile int32_t t14 = 178;

    t14 = (x61<=((x62>x63)%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x65 = INT16_MAX;
	uint32_t x66 = UINT32_MAX;
	static int16_t x67 = -1;
	static uint16_t x68 = 1474U;
	static volatile int32_t t15 = -235308;

    t15 = (x65<=((x66>x67)%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	volatile int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	static int8_t x72 = INT8_MIN;
	static int32_t t16 = 0;

    t16 = (x69<=((x70>x71)%x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	static volatile int8_t x74 = -26;
	uint64_t x75 = 514143LLU;
	uint64_t x76 = 41521693LLU;
	static volatile int32_t t17 = 22291580;

    t17 = (x73<=((x74>x75)%x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	uint64_t x78 = 26612709LLU;
	uint16_t x79 = 115U;
	uint64_t x80 = UINT64_MAX;
	int32_t t18 = 4798268;

    t18 = (x77<=((x78>x79)%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x82 = 0U;
	static int8_t x83 = -1;
	int64_t x84 = INT64_MIN;
	int32_t t19 = -28;

    t19 = (x81<=((x82>x83)%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	uint32_t x86 = 98U;
	int16_t x87 = 6200;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t20 = -29;

    t20 = (x85<=((x86>x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -20;
	volatile int32_t t21 = 785720654;

    t21 = (x89<=((x90>x91)%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = -1;
	volatile int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t22 = -15899578;

    t22 = (x93<=((x94>x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	volatile int16_t x98 = -96;
	volatile uint64_t x99 = 2LLU;
	int32_t x100 = INT32_MAX;
	int32_t t23 = -12;

    t23 = (x97<=((x98>x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x101 = 1;
	volatile uint16_t x102 = 33U;
	int64_t x103 = INT64_MIN;
	int32_t t24 = 1685;

    t24 = (x101<=((x102>x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 438U;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -3307;
	static uint64_t x108 = 1067723082164018955LLU;
	volatile int32_t t25 = 11705888;

    t25 = (x105<=((x106>x107)%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = INT64_MIN;
	volatile int16_t x111 = 46;
	int8_t x112 = INT8_MAX;
	static int32_t t26 = 3449;

    t26 = (x109<=((x110>x111)%x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MIN;
	volatile int32_t t27 = -77259465;

    t27 = (x113<=((x114>x115)%x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	static uint64_t x120 = 173LLU;

    t28 = (x117<=((x118>x119)%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -5;
	static volatile int16_t x122 = -1;
	volatile int16_t x123 = 1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 652055211;

    t29 = (x121<=((x122>x123)%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	int16_t x126 = -2633;
	uint16_t x127 = 806U;
	int64_t x128 = INT64_MIN;
	volatile int32_t t30 = 381;

    t30 = (x125<=((x126>x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x129 = INT8_MIN;
	static int16_t x130 = -10499;
	static volatile int16_t x131 = -392;
	int32_t x132 = -998;
	volatile int32_t t31 = 74272055;

    t31 = (x129<=((x130>x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = -1;
	int64_t x134 = -1LL;
	static volatile int64_t x135 = 81132338448838LL;
	static int32_t x136 = 347;
	int32_t t32 = 1;

    t32 = (x133<=((x134>x135)%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	volatile uint8_t x143 = 0U;
	volatile int8_t x144 = INT8_MIN;
	int32_t t33 = 259760325;

    t33 = (x141<=((x142>x143)%x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MAX;
	volatile uint16_t x148 = 805U;
	int32_t t34 = -28967;

    t34 = (x145<=((x146>x147)%x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x150 = 35LL;
	int64_t x151 = INT64_MAX;
	volatile int32_t t35 = 1734;

    t35 = (x149<=((x150>x151)%x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x153 = -319643089544289LL;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 214U;
	volatile int32_t t36 = -181387441;

    t36 = (x153<=((x154>x155)%x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MAX;
	static int32_t t37 = 59242854;

    t37 = (x157<=((x158>x159)%x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = INT32_MIN;

    t38 = (x161<=((x162>x163)%x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = 3843;
	volatile uint16_t x167 = UINT16_MAX;
	static int32_t x168 = INT32_MIN;
	int32_t t39 = 804708336;

    t39 = (x165<=((x166>x167)%x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x170 = INT16_MAX;
	static uint8_t x172 = 16U;

    t40 = (x169<=((x170>x171)%x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x173 = UINT8_MAX;
	static uint64_t x174 = UINT64_MAX;
	static uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 503736733240LLU;
	volatile int32_t t41 = 33173935;

    t41 = (x173<=((x174>x175)%x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x177 = 34U;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = -1;
	static uint8_t x180 = 1U;
	volatile int32_t t42 = -130098431;

    t42 = (x177<=((x178>x179)%x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	static int32_t x183 = INT32_MIN;
	int64_t x184 = -12896721LL;
	volatile int32_t t43 = 30488761;

    t43 = (x181<=((x182>x183)%x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = UINT8_MAX;
	static int16_t x186 = INT16_MIN;
	static int8_t x187 = -13;
	int8_t x188 = INT8_MIN;
	int32_t t44 = -2;

    t44 = (x185<=((x186>x187)%x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x189 = INT16_MIN;
	int8_t x192 = INT8_MAX;
	volatile int32_t t45 = -2038543;

    t45 = (x189<=((x190>x191)%x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = -1;
	int16_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	volatile int32_t t46 = 27267147;

    t46 = (x193<=((x194>x195)%x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x197 = -194625936084593372LL;
	static int64_t x199 = 270199873319420235LL;
	uint64_t x200 = 13LLU;

    t47 = (x197<=((x198>x199)%x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = 7LLU;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	static int32_t t48 = -327637;

    t48 = (x201<=((x202>x203)%x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 1U;
	int64_t x206 = 832LL;
	uint32_t x208 = 15134045U;
	volatile int32_t t49 = 84290;

    t49 = (x205<=((x206>x207)%x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x209 = UINT64_MAX;
	static int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	static uint32_t x212 = UINT32_MAX;
	static int32_t t50 = 289;

    t50 = (x209<=((x210>x211)%x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x213 = 5155U;
	int32_t x214 = -721271;
	volatile int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t51 = -361169970;

    t51 = (x213<=((x214>x215)%x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x217 = 1U;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	int32_t t52 = 161;

    t52 = (x217<=((x218>x219)%x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MAX;
	int32_t t53 = 24986;

    t53 = (x221<=((x222>x223)%x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	volatile uint32_t x228 = 156027431U;
	volatile int32_t t54 = -74175706;

    t54 = (x225<=((x226>x227)%x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x229 = INT64_MAX;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = -1;

    t55 = (x229<=((x230>x231)%x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	volatile int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t56 = 5;

    t56 = (x233<=((x234>x235)%x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 2722U;
	static int16_t x239 = -1;
	uint64_t x240 = 21246265520LLU;
	int32_t t57 = 594;

    t57 = (x237<=((x238>x239)%x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = 4130299803LLU;
	int64_t x242 = -1LL;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MAX;
	volatile int32_t t58 = 11;

    t58 = (x241<=((x242>x243)%x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x245 = INT32_MAX;
	static volatile int32_t t59 = -26713;

    t59 = (x245<=((x246>x247)%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x250 = 941116613LLU;
	static volatile int64_t x251 = INT64_MAX;
	int32_t t60 = -65135046;

    t60 = (x249<=((x250>x251)%x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x254 = INT8_MIN;
	volatile int64_t x256 = 702LL;
	volatile int32_t t61 = 3;

    t61 = (x253<=((x254>x255)%x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	volatile uint32_t x258 = UINT32_MAX;
	static int16_t x259 = INT16_MIN;
	uint32_t x260 = 1U;
	volatile int32_t t62 = -350020;

    t62 = (x257<=((x258>x259)%x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x261 = -45158LL;
	volatile int64_t x262 = 5LL;
	uint32_t x263 = 932460295U;
	int32_t x264 = INT32_MAX;
	volatile int32_t t63 = 9863;

    t63 = (x261<=((x262>x263)%x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MAX;
	int32_t t64 = -446278249;

    t64 = (x265<=((x266>x267)%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = 8065;
	int8_t x272 = -1;
	int32_t t65 = -11347;

    t65 = (x269<=((x270>x271)%x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x274 = 481966984LL;
	volatile int16_t x276 = INT16_MIN;
	int32_t t66 = -2764633;

    t66 = (x273<=((x274>x275)%x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = -987277;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MIN;

    t67 = (x277<=((x278>x279)%x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x283 = 3023;
	uint8_t x284 = 1U;
	int32_t t68 = 141668313;

    t68 = (x281<=((x282>x283)%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MAX;
	volatile uint64_t x286 = 25270811LLU;
	static int8_t x287 = -1;
	int32_t t69 = 10265121;

    t69 = (x285<=((x286>x287)%x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x289 = INT16_MIN;
	int8_t x290 = 2;
	volatile int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t70 = -33392336;

    t70 = (x289<=((x290>x291)%x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x293 = -16;
	uint64_t x294 = 14017LLU;
	int16_t x296 = -1;
	static volatile int32_t t71 = -1278689;

    t71 = (x293<=((x294>x295)%x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = 10577;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = INT16_MIN;
	static uint8_t x300 = UINT8_MAX;
	volatile int32_t t72 = -456383;

    t72 = (x297<=((x298>x299)%x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 62U;
	volatile int64_t x302 = INT64_MIN;
	static int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 3U;
	int32_t t73 = -25;

    t73 = (x301<=((x302>x303)%x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x305 = 60U;
	static uint8_t x306 = 20U;
	uint8_t x307 = UINT8_MAX;
	volatile uint64_t x308 = 30676LLU;
	static int32_t t74 = 8425799;

    t74 = (x305<=((x306>x307)%x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x309 = -3;
	volatile int64_t x310 = 142745113LL;
	volatile uint64_t x311 = 12002LLU;
	int32_t t75 = 1205;

    t75 = (x309<=((x310>x311)%x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = 2LL;
	int8_t x318 = -1;
	uint64_t x319 = 401457658206152LLU;
	int8_t x320 = INT8_MAX;
	int32_t t76 = -10;

    t76 = (x317<=((x318>x319)%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x321 = 1LL;
	volatile uint64_t x322 = UINT64_MAX;
	uint16_t x323 = 794U;
	uint16_t x324 = 28U;
	static volatile int32_t t77 = 200;

    t77 = (x321<=((x322>x323)%x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MIN;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	static uint64_t x328 = UINT64_MAX;
	int32_t t78 = 418379382;

    t78 = (x325<=((x326>x327)%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x329 = -50;
	volatile int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MAX;
	static int32_t t79 = -26670441;

    t79 = (x329<=((x330>x331)%x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x333 = -113457LL;
	int32_t x334 = INT32_MAX;
	static volatile uint64_t x335 = 967695970915812LLU;
	static uint64_t x336 = UINT64_MAX;
	int32_t t80 = 22703203;

    t80 = (x333<=((x334>x335)%x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x341 = 2724811808916862782LL;
	static uint64_t x342 = 7508832706763574744LLU;
	volatile int16_t x343 = INT16_MAX;
	int32_t t81 = 47;

    t81 = (x341<=((x342>x343)%x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x345 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	static int32_t t82 = 140;

    t82 = (x345<=((x346>x347)%x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x349 = 32187U;
	int8_t x351 = INT8_MIN;
	int32_t t83 = -1668050;

    t83 = (x349<=((x350>x351)%x352));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x353 = INT16_MIN;
	volatile int64_t x354 = -1LL;
	uint8_t x355 = 8U;
	int32_t x356 = INT32_MIN;
	int32_t t84 = 527425326;

    t84 = (x353<=((x354>x355)%x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x357 = -1;
	int32_t x358 = -1;
	uint8_t x359 = 0U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t85 = 423;

    t85 = (x357<=((x358>x359)%x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x361 = 61154U;
	int16_t x364 = -1;
	int32_t t86 = 13187;

    t86 = (x361<=((x362>x363)%x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x366 = 15LL;
	uint64_t x367 = 7626078667529208632LLU;
	int16_t x368 = -1;
	volatile int32_t t87 = 11296991;

    t87 = (x365<=((x366>x367)%x368));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = 12271089186131740LL;
	int8_t x370 = -1;
	int8_t x371 = -1;
	int16_t x372 = -16;
	int32_t t88 = 254288386;

    t88 = (x369<=((x370>x371)%x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x374 = INT8_MIN;
	static volatile int32_t x375 = 1;
	int8_t x376 = 25;

    t89 = (x373<=((x374>x375)%x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x379 = -1;
	volatile int32_t x380 = -1;
	int32_t t90 = -1;

    t90 = (x377<=((x378>x379)%x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x381 = -42176573856LL;
	static int16_t x383 = 508;
	static volatile int8_t x384 = INT8_MAX;
	int32_t t91 = -1;

    t91 = (x381<=((x382>x383)%x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x385 = INT32_MIN;
	int16_t x388 = -44;

    t92 = (x385<=((x386>x387)%x388));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = 199361246;
	uint64_t x390 = UINT64_MAX;
	static volatile int64_t x391 = INT64_MAX;
	int64_t x392 = 176568458710LL;
	static int32_t t93 = 956856;

    t93 = (x389<=((x390>x391)%x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x394 = INT32_MAX;
	static uint32_t x395 = UINT32_MAX;
	int8_t x396 = -1;
	static int32_t t94 = 429840520;

    t94 = (x393<=((x394>x395)%x396));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x398 = UINT32_MAX;
	int16_t x399 = -1;
	uint8_t x400 = 33U;
	volatile int32_t t95 = -2145132;

    t95 = (x397<=((x398>x399)%x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x401 = INT8_MIN;
	static volatile int8_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	static volatile int16_t x404 = 1;
	static int32_t t96 = -8371134;

    t96 = (x401<=((x402>x403)%x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MAX;
	int32_t x408 = -12981;

    t97 = (x405<=((x406>x407)%x408));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x409 = 31LLU;
	int16_t x410 = -799;
	int32_t x412 = INT32_MAX;
	int32_t t98 = -5406714;

    t98 = (x409<=((x410>x411)%x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x413 = 283623LLU;
	volatile int32_t x414 = -41121;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 111493966U;
	int32_t t99 = -613;

    t99 = (x413<=((x414>x415)%x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MIN;
	static int32_t t100 = 242747;

    t100 = (x417<=((x418>x419)%x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x422 = INT8_MIN;
	uint32_t x423 = 27867U;
	volatile int32_t x424 = -29507201;
	int32_t t101 = -330447595;

    t101 = (x421<=((x422>x423)%x424));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x426 = UINT64_MAX;
	static int64_t x427 = INT64_MAX;
	uint64_t x428 = 6487687LLU;
	int32_t t102 = 112;

    t102 = (x425<=((x426>x427)%x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = INT64_MAX;
	uint32_t x430 = 6U;
	static int64_t x431 = -2820717921117893LL;
	volatile int32_t t103 = -7;

    t103 = (x429<=((x430>x431)%x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x434 = -1683093LL;
	int8_t x435 = INT8_MAX;
	int64_t x436 = 671946031322303LL;

    t104 = (x433<=((x434>x435)%x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x437 = 588674798LLU;
	int64_t x438 = 0LL;
	volatile int64_t x439 = -952871508552232067LL;
	volatile int16_t x440 = -1;
	volatile int32_t t105 = 6;

    t105 = (x437<=((x438>x439)%x440));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x442 = INT8_MIN;
	uint8_t x443 = 77U;
	int32_t x444 = INT32_MIN;
	int32_t t106 = -49572;

    t106 = (x441<=((x442>x443)%x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x445 = INT8_MIN;
	int8_t x446 = 0;
	static int32_t x447 = INT32_MAX;
	int64_t x448 = -37LL;

    t107 = (x445<=((x446>x447)%x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x449 = 1U;
	int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = UINT8_MAX;
	static int32_t t108 = 30283533;

    t108 = (x449<=((x450>x451)%x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x455 = -1;
	int16_t x456 = 885;
	int32_t t109 = -3;

    t109 = (x453<=((x454>x455)%x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = 7U;
	static int32_t x458 = INT32_MAX;
	uint16_t x459 = UINT16_MAX;
	static volatile int64_t x460 = INT64_MIN;
	volatile int32_t t110 = -6512501;

    t110 = (x457<=((x458>x459)%x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = 1;
	int8_t x462 = INT8_MAX;
	static int64_t x463 = -1LL;
	int64_t x464 = 63995824450639210LL;

    t111 = (x461<=((x462>x463)%x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x465 = 264450U;
	static int64_t x466 = -840914600840837LL;
	int64_t x467 = 42426057789685413LL;
	int32_t t112 = -378508;

    t112 = (x465<=((x466>x467)%x468));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x469 = 111U;
	int16_t x470 = INT16_MAX;
	static int32_t x472 = INT32_MAX;
	volatile int32_t t113 = -326;

    t113 = (x469<=((x470>x471)%x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = 1585250U;
	uint32_t x474 = 44U;
	static volatile uint32_t x475 = 13174U;
	int64_t x476 = -67922004LL;

    t114 = (x473<=((x474>x475)%x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = INT64_MIN;
	int32_t x478 = INT32_MAX;
	int32_t x479 = INT32_MIN;
	volatile int32_t x480 = INT32_MIN;
	int32_t t115 = -62952;

    t115 = (x477<=((x478>x479)%x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x481 = 3U;
	int64_t x482 = -1LL;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MIN;

    t116 = (x481<=((x482>x483)%x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x486 = 196220356;
	uint16_t x487 = 108U;
	volatile int16_t x488 = -1;

    t117 = (x485<=((x486>x487)%x488));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x489 = INT64_MIN;
	int64_t x492 = INT64_MIN;
	int32_t t118 = -2641;

    t118 = (x489<=((x490>x491)%x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x493 = 2U;
	volatile int8_t x494 = INT8_MIN;
	uint32_t x495 = 330806U;
	int8_t x496 = INT8_MAX;
	int32_t t119 = -47;

    t119 = (x493<=((x494>x495)%x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x498 = 150929031LLU;
	volatile int32_t x499 = INT32_MAX;
	int8_t x500 = -4;

    t120 = (x497<=((x498>x499)%x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x502 = 1303U;
	int16_t x503 = INT16_MIN;
	uint8_t x504 = UINT8_MAX;
	static volatile int32_t t121 = 31625540;

    t121 = (x501<=((x502>x503)%x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = INT32_MIN;
	uint32_t x507 = UINT32_MAX;
	uint16_t x508 = 12284U;
	static int32_t t122 = 0;

    t122 = (x505<=((x506>x507)%x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x509 = 6U;
	uint16_t x510 = UINT16_MAX;
	static int16_t x511 = -123;
	static volatile int8_t x512 = -1;

    t123 = (x509<=((x510>x511)%x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x513 = -28;
	uint64_t x515 = 7503648348822138413LLU;
	volatile uint64_t x516 = 76949604795323LLU;
	int32_t t124 = 124;

    t124 = (x513<=((x514>x515)%x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x518 = INT16_MAX;

    t125 = (x517<=((x518>x519)%x520));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x521 = 54U;
	int64_t x523 = INT64_MIN;
	uint16_t x524 = 14U;
	static int32_t t126 = -94626;

    t126 = (x521<=((x522>x523)%x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x526 = INT8_MIN;
	volatile uint32_t x528 = UINT32_MAX;
	volatile int32_t t127 = 181175423;

    t127 = (x525<=((x526>x527)%x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x529 = INT32_MIN;
	uint32_t x530 = 298U;
	int16_t x531 = -1;
	int64_t x532 = INT64_MAX;
	volatile int32_t t128 = -828236000;

    t128 = (x529<=((x530>x531)%x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x533 = 1U;
	int16_t x534 = -1;
	int64_t x535 = INT64_MIN;
	volatile int32_t t129 = -225162;

    t129 = (x533<=((x534>x535)%x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x537 = INT8_MIN;
	static volatile uint16_t x538 = 0U;
	uint16_t x539 = 7549U;
	int32_t x540 = -8620;

    t130 = (x537<=((x538>x539)%x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x541 = -1677173446877256LL;
	static uint8_t x542 = 119U;
	volatile int16_t x543 = -736;
	int64_t x544 = 5834432045448046LL;
	int32_t t131 = 70354;

    t131 = (x541<=((x542>x543)%x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = UINT32_MAX;
	int64_t x547 = INT64_MIN;
	int64_t x548 = -34LL;

    t132 = (x545<=((x546>x547)%x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x550 = INT64_MIN;
	int8_t x551 = -4;
	int64_t x552 = 37203059LL;
	volatile int32_t t133 = 30291;

    t133 = (x549<=((x550>x551)%x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x554 = 231348470242LLU;
	static volatile int16_t x555 = -1;
	int32_t t134 = -41;

    t134 = (x553<=((x554>x555)%x556));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x557 = -1LL;
	int8_t x558 = -1;
	uint64_t x559 = 10426457887LLU;
	volatile int32_t t135 = -1;

    t135 = (x557<=((x558>x559)%x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MIN;
	volatile int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	static int32_t x564 = INT32_MIN;
	volatile int32_t t136 = 0;

    t136 = (x561<=((x562>x563)%x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x566 = 1639U;
	static uint64_t x567 = 356711LLU;
	int64_t x568 = 192018918201LL;

    t137 = (x565<=((x566>x567)%x568));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MIN;
	uint16_t x570 = 17033U;
	int16_t x572 = INT16_MAX;
	int32_t t138 = -777664451;

    t138 = (x569<=((x570>x571)%x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x573 = UINT16_MAX;
	int64_t x575 = -347608LL;
	int8_t x576 = INT8_MIN;
	volatile int32_t t139 = -589;

    t139 = (x573<=((x574>x575)%x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x578 = INT8_MIN;
	int8_t x579 = 22;
	volatile int32_t t140 = 26935;

    t140 = (x577<=((x578>x579)%x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = -450;
	volatile uint8_t x582 = 6U;
	static int16_t x583 = INT16_MIN;
	volatile uint64_t x584 = 821054LLU;
	int32_t t141 = -500407;

    t141 = (x581<=((x582>x583)%x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x586 = 2264U;
	int16_t x587 = -1;
	int64_t x588 = -1LL;
	static volatile int32_t t142 = -1;

    t142 = (x585<=((x586>x587)%x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x589 = INT64_MIN;
	volatile int32_t x590 = -25;
	int16_t x591 = -1;
	static volatile int8_t x592 = INT8_MAX;
	int32_t t143 = -5581;

    t143 = (x589<=((x590>x591)%x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x593 = 194U;
	int64_t x594 = 2251770LL;
	uint8_t x595 = 7U;
	static int16_t x596 = INT16_MAX;

    t144 = (x593<=((x594>x595)%x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = 3LL;
	int8_t x598 = INT8_MIN;
	int64_t x599 = 868180LL;
	int32_t t145 = -12547;

    t145 = (x597<=((x598>x599)%x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = 53U;
	uint8_t x602 = UINT8_MAX;
	static int8_t x603 = -1;
	uint8_t x604 = UINT8_MAX;
	int32_t t146 = 115503;

    t146 = (x601<=((x602>x603)%x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x609 = -1;
	static volatile uint32_t x610 = 78088U;
	uint32_t x611 = 160U;
	static int64_t x612 = INT64_MAX;
	static volatile int32_t t147 = -533;

    t147 = (x609<=((x610>x611)%x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MIN;
	uint64_t x616 = UINT64_MAX;
	static int32_t t148 = -62;

    t148 = (x613<=((x614>x615)%x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x617 = INT8_MIN;
	static int32_t x618 = 63211006;
	volatile int32_t x619 = 0;
	volatile int32_t t149 = -28;

    t149 = (x617<=((x618>x619)%x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = 2687479LL;
	uint16_t x622 = 19820U;
	int64_t x623 = -1LL;
	volatile int32_t x624 = -1;
	volatile int32_t t150 = -32229195;

    t150 = (x621<=((x622>x623)%x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x626 = INT8_MIN;
	volatile uint16_t x627 = 0U;
	volatile uint16_t x628 = 1U;
	static int32_t t151 = -788;

    t151 = (x625<=((x626>x627)%x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x629 = 93U;
	int32_t x630 = -28987336;
	volatile int32_t t152 = 60139191;

    t152 = (x629<=((x630>x631)%x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t t153 = 1868;

    t153 = (x633<=((x634>x635)%x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x637 = 0U;
	volatile int16_t x638 = -1;
	volatile int8_t x640 = -14;
	static int32_t t154 = 192669;

    t154 = (x637<=((x638>x639)%x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x641 = -1;
	static volatile uint32_t x642 = UINT32_MAX;
	static uint16_t x643 = 3398U;
	uint32_t x644 = 634695645U;
	volatile int32_t t155 = 721320323;

    t155 = (x641<=((x642>x643)%x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = 27;
	int8_t x648 = INT8_MIN;
	volatile int32_t t156 = 518992039;

    t156 = (x645<=((x646>x647)%x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x650 = 57LLU;
	volatile uint8_t x651 = 2U;
	int32_t t157 = -10;

    t157 = (x649<=((x650>x651)%x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = -1;
	uint32_t x655 = UINT32_MAX;
	int32_t x656 = INT32_MIN;
	volatile int32_t t158 = -809860403;

    t158 = (x653<=((x654>x655)%x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x657 = 1U;
	static volatile uint32_t x658 = 30U;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = INT16_MIN;

    t159 = (x657<=((x658>x659)%x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x661 = 0;
	static volatile uint16_t x662 = 106U;
	int32_t t160 = 87515762;

    t160 = (x661<=((x662>x663)%x664));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = -1731943613367620LL;
	int32_t x666 = -872535;
	int32_t x667 = 49;
	volatile int64_t x668 = 1LL;
	int32_t t161 = 3375704;

    t161 = (x665<=((x666>x667)%x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x670 = -1;
	static volatile uint64_t x671 = 1277087879906586572LLU;
	int8_t x672 = INT8_MAX;

    t162 = (x669<=((x670>x671)%x672));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x673 = INT32_MIN;
	static uint32_t x674 = 30466715U;
	int64_t x675 = INT64_MIN;
	int16_t x676 = -1;
	int32_t t163 = -121;

    t163 = (x673<=((x674>x675)%x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x677 = INT16_MIN;
	uint8_t x678 = UINT8_MAX;
	int16_t x679 = INT16_MIN;
	static int8_t x680 = INT8_MAX;
	int32_t t164 = 5628276;

    t164 = (x677<=((x678>x679)%x680));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = 776;
	static int8_t x682 = INT8_MIN;

    t165 = (x681<=((x682>x683)%x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = 0;
	int16_t x688 = INT16_MIN;
	int32_t t166 = 2212;

    t166 = (x685<=((x686>x687)%x688));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x689 = 31;
	int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MIN;
	uint8_t x692 = 8U;

    t167 = (x689<=((x690>x691)%x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x693 = 0U;
	int64_t x694 = INT64_MAX;
	int8_t x696 = -1;

    t168 = (x693<=((x694>x695)%x696));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x697 = 6;
	int32_t x698 = -63616684;
	int64_t x699 = 2896260LL;
	volatile uint8_t x700 = 47U;
	volatile int32_t t169 = -1;

    t169 = (x697<=((x698>x699)%x700));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x701 = 3;
	int8_t x703 = 11;
	static volatile int64_t x704 = -1LL;
	int32_t t170 = 0;

    t170 = (x701<=((x702>x703)%x704));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x705 = 0U;
	uint8_t x706 = 39U;
	static uint16_t x708 = UINT16_MAX;
	volatile int32_t t171 = 79638;

    t171 = (x705<=((x706>x707)%x708));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x709 = INT32_MIN;
	volatile uint64_t x710 = 100808650063413959LLU;
	volatile uint8_t x711 = 48U;
	int32_t t172 = 62;

    t172 = (x709<=((x710>x711)%x712));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x713 = INT8_MIN;
	static int16_t x714 = -1828;
	static int64_t x716 = INT64_MIN;
	volatile int32_t t173 = 190950;

    t173 = (x713<=((x714>x715)%x716));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x717 = 211LLU;
	uint8_t x718 = 0U;
	int32_t t174 = -15114245;

    t174 = (x717<=((x718>x719)%x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x721 = INT16_MIN;
	uint16_t x723 = 20477U;
	uint32_t x724 = 815U;
	int32_t t175 = -4584;

    t175 = (x721<=((x722>x723)%x724));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x725 = 22U;
	volatile int16_t x726 = -1;
	volatile int64_t x727 = 663775827LL;
	int32_t t176 = 3999;

    t176 = (x725<=((x726>x727)%x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x730 = INT64_MAX;
	int8_t x732 = -12;

    t177 = (x729<=((x730>x731)%x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x733 = 5838LLU;
	int64_t x734 = INT64_MIN;
	uint64_t x735 = UINT64_MAX;
	int32_t t178 = -13291166;

    t178 = (x733<=((x734>x735)%x736));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x737 = 115LLU;
	int8_t x738 = INT8_MIN;
	int32_t x739 = 3245875;
	volatile int16_t x740 = INT16_MAX;
	static int32_t t179 = 35;

    t179 = (x737<=((x738>x739)%x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x741 = 50348LLU;
	uint8_t x742 = 3U;
	int32_t x743 = INT32_MAX;
	uint32_t x744 = UINT32_MAX;
	int32_t t180 = -47747533;

    t180 = (x741<=((x742>x743)%x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x749 = -1LL;
	static int32_t x750 = 523455265;
	volatile int64_t x751 = 1LL;
	uint8_t x752 = 30U;
	int32_t t181 = 30643;

    t181 = (x749<=((x750>x751)%x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x755 = INT16_MIN;
	int64_t x756 = INT64_MIN;
	static volatile int32_t t182 = -85;

    t182 = (x753<=((x754>x755)%x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x757 = 63;
	static int8_t x758 = INT8_MIN;
	int32_t x759 = -206;
	int16_t x760 = INT16_MIN;
	static int32_t t183 = 3;

    t183 = (x757<=((x758>x759)%x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x761 = 7U;
	uint8_t x762 = UINT8_MAX;
	static int64_t x763 = INT64_MIN;
	uint16_t x764 = 4U;

    t184 = (x761<=((x762>x763)%x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x767 = INT64_MIN;
	static uint64_t x768 = 129136957929LLU;
	static volatile int32_t t185 = 16054851;

    t185 = (x765<=((x766>x767)%x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x769 = 967U;
	int8_t x771 = INT8_MAX;
	int32_t t186 = 1;

    t186 = (x769<=((x770>x771)%x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x775 = -1;
	volatile int32_t x776 = INT32_MIN;
	int32_t t187 = -9726;

    t187 = (x773<=((x774>x775)%x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x777 = -40158445943467353LL;
	static volatile int8_t x778 = INT8_MIN;
	static int64_t x779 = -1LL;
	int32_t t188 = -95;

    t188 = (x777<=((x778>x779)%x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x781 = 42;
	volatile int8_t x782 = -1;
	int32_t t189 = 0;

    t189 = (x781<=((x782>x783)%x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = -2;
	volatile int8_t x786 = -1;
	int16_t x788 = -1342;
	int32_t t190 = -49388;

    t190 = (x785<=((x786>x787)%x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x789 = INT64_MIN;
	volatile uint32_t x790 = UINT32_MAX;
	uint32_t x791 = 72887U;
	uint16_t x792 = UINT16_MAX;
	static volatile int32_t t191 = -432579531;

    t191 = (x789<=((x790>x791)%x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x793 = 866991875LL;
	static int32_t x794 = INT32_MIN;
	int32_t x795 = -1;
	static int8_t x796 = -1;
	int32_t t192 = -891445092;

    t192 = (x793<=((x794>x795)%x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x797 = 298332U;
	int32_t x798 = -1;
	int32_t x799 = 1;
	int64_t x800 = INT64_MAX;
	volatile int32_t t193 = 293608;

    t193 = (x797<=((x798>x799)%x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x801 = 5U;
	uint64_t x802 = 2166749742848608324LLU;
	static int16_t x803 = 2;
	int64_t x804 = INT64_MAX;
	volatile int32_t t194 = 1;

    t194 = (x801<=((x802>x803)%x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x805 = 9315U;
	static volatile uint32_t x806 = 27764U;
	uint64_t x807 = 555302968303772LLU;
	uint32_t x808 = 151779U;
	volatile int32_t t195 = -1192;

    t195 = (x805<=((x806>x807)%x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x810 = UINT16_MAX;
	int16_t x811 = -1;
	int32_t t196 = 930135;

    t196 = (x809<=((x810>x811)%x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = INT16_MIN;
	volatile uint8_t x814 = 26U;
	static volatile int64_t x815 = INT64_MIN;
	int32_t x816 = INT32_MIN;
	volatile int32_t t197 = 7;

    t197 = (x813<=((x814>x815)%x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = -1;
	int8_t x818 = INT8_MAX;
	volatile int64_t x819 = INT64_MIN;
	int64_t x820 = -14621618LL;
	volatile int32_t t198 = 3623;

    t198 = (x817<=((x818>x819)%x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = 13;
	int16_t x823 = INT16_MAX;
	int8_t x824 = INT8_MIN;
	int32_t t199 = -124689;

    t199 = (x821<=((x822>x823)%x824));

    if (t199 != 1) { NG(); } else { ; }
	
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

