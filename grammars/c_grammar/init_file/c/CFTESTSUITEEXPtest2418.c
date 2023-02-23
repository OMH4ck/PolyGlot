
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

static volatile int32_t t1 = -1;
int16_t x10 = -14429;
volatile uint8_t x12 = UINT8_MAX;
int32_t x13 = INT32_MAX;
static uint16_t x22 = 4U;
int32_t x27 = INT32_MIN;
int64_t x29 = 100809112409LL;
volatile int8_t x40 = INT8_MIN;
uint32_t x50 = 244U;
uint64_t x54 = 8066162234475926LLU;
volatile int16_t x56 = INT16_MAX;
volatile int8_t x61 = -1;
uint8_t x64 = 12U;
uint16_t x67 = 2509U;
static int32_t t16 = -263098;
int32_t t17 = -279860200;
static uint64_t x79 = UINT64_MAX;
static int16_t x85 = -1;
int64_t x86 = INT64_MIN;
uint64_t x89 = 281LLU;
int32_t x95 = INT32_MIN;
int64_t x98 = -1LL;
uint64_t x99 = UINT64_MAX;
static volatile int32_t x103 = INT32_MIN;
volatile int64_t x106 = INT64_MIN;
int32_t x107 = INT32_MIN;
int8_t x108 = 17;
static int32_t x111 = INT32_MIN;
int8_t x114 = -1;
int32_t t27 = -298;
int8_t x123 = INT8_MIN;
int32_t t30 = -1187775;
int64_t x130 = -1LL;
int32_t t31 = -66903137;
static volatile uint64_t x134 = UINT64_MAX;
int8_t x136 = INT8_MAX;
uint16_t x145 = 245U;
volatile int32_t t35 = 7114;
int32_t x150 = INT32_MAX;
static int64_t x151 = 679LL;
volatile int32_t t36 = -1;
int32_t x153 = INT32_MAX;
volatile int64_t x160 = INT64_MAX;
int32_t x169 = 0;
uint8_t x170 = 125U;
uint8_t x179 = UINT8_MAX;
int8_t x180 = 1;
int16_t x181 = -7026;
int8_t x188 = -41;
int16_t x198 = -53;
int64_t x200 = -77227LL;
static volatile int16_t x201 = INT16_MIN;
volatile uint8_t x206 = 84U;
int64_t x208 = INT64_MIN;
volatile int32_t t50 = 0;
int16_t x210 = -1;
volatile int8_t x211 = -2;
int8_t x212 = INT8_MIN;
volatile uint16_t x222 = 106U;
uint64_t x223 = UINT64_MAX;
static volatile uint16_t x225 = 15847U;
volatile uint64_t x227 = 27906229927193LLU;
int32_t t55 = 10;
uint64_t x231 = UINT64_MAX;
static int64_t x243 = INT64_MAX;
uint8_t x244 = UINT8_MAX;
volatile int32_t t59 = 118762;
int32_t x258 = INT32_MAX;
int64_t x260 = -431879599LL;
static int8_t x261 = INT8_MIN;
int8_t x265 = -1;
uint32_t x266 = 73897U;
int8_t x267 = -4;
int32_t x270 = 675;
volatile int16_t x272 = -1;
static int64_t x273 = 33945428869319LL;
int32_t t67 = -15726;
volatile int16_t x290 = INT16_MIN;
int8_t x292 = INT8_MIN;
int32_t t71 = -59270;
uint64_t x297 = 6380638668752932192LLU;
int32_t x314 = -1;
static int8_t x319 = 1;
int8_t x329 = -1;
int32_t x332 = -125562762;
volatile int32_t t80 = -32013;
uint16_t x333 = 7U;
uint32_t x339 = 2007U;
int64_t x341 = INT64_MIN;
int8_t x344 = 9;
static int8_t x346 = INT8_MAX;
uint64_t x349 = UINT64_MAX;
int8_t x351 = -31;
uint16_t x356 = 115U;
int32_t x359 = INT32_MAX;
int32_t t88 = -743973199;
int16_t x369 = INT16_MIN;
volatile int32_t t90 = 2688;
static uint16_t x376 = UINT16_MAX;
static volatile int32_t t91 = 200;
static int8_t x379 = INT8_MAX;
int16_t x380 = -2154;
int32_t t92 = -7334822;
int32_t x382 = INT32_MAX;
int8_t x383 = -1;
static int8_t x393 = -1;
volatile int16_t x399 = -1;
static int64_t x402 = 825842671266344538LL;
uint32_t x403 = UINT32_MAX;
int32_t x405 = -9558;
static int8_t x409 = -5;
int32_t x412 = INT32_MIN;
int32_t x418 = -4;
int64_t x421 = -1LL;
uint16_t x422 = UINT16_MAX;
uint8_t x431 = 1U;
volatile uint8_t x432 = UINT8_MAX;
uint64_t x435 = UINT64_MAX;
uint16_t x437 = UINT16_MAX;
uint64_t x441 = 64963573000487389LLU;
uint64_t x445 = 61LLU;
int8_t x446 = INT8_MAX;
volatile int8_t x447 = 1;
static uint64_t x451 = 98752692678154219LLU;
int32_t t112 = 4;
static int32_t t113 = 5458446;
static int32_t t115 = 12;
volatile int32_t x474 = INT32_MIN;
int16_t x481 = INT16_MIN;
static volatile int32_t t118 = 59209869;
volatile int32_t t119 = -459938;
int16_t x497 = -1;
uint64_t x504 = UINT64_MAX;
volatile int32_t t124 = -4;
static int8_t x511 = -1;
volatile uint8_t x512 = 3U;
uint8_t x513 = UINT8_MAX;
volatile int64_t x520 = 3736LL;
static volatile int32_t t127 = -2;
int32_t x524 = 75222;
static int32_t x525 = INT32_MIN;
volatile int32_t x526 = 957022;
int8_t x527 = INT8_MIN;
volatile int32_t t129 = -118700;
int16_t x529 = INT16_MIN;
volatile uint16_t x534 = 900U;
static uint8_t x536 = 9U;
volatile int32_t t131 = -1024;
uint32_t x543 = 18368305U;
volatile int32_t t133 = -8004620;
volatile int32_t x545 = 50;
volatile int8_t x548 = -2;
int32_t t136 = -130106;
volatile uint16_t x560 = 368U;
int32_t x562 = INT32_MAX;
volatile int32_t t138 = 11;
static int16_t x575 = 187;
uint8_t x576 = UINT8_MAX;
volatile int32_t x586 = INT32_MAX;
int32_t t144 = -273611408;
static int8_t x589 = 22;
static volatile uint8_t x590 = UINT8_MAX;
int16_t x596 = INT16_MIN;
uint16_t x600 = 198U;
static volatile int8_t x604 = -1;
int32_t t148 = -148;
uint32_t x605 = 1367U;
int16_t x606 = 495;
uint32_t x607 = 366159029U;
int32_t x608 = 1;
static int8_t x611 = -15;
uint32_t x612 = 4005876U;
int8_t x614 = 3;
static int32_t t151 = 2016;
static int32_t x618 = INT32_MIN;
volatile int32_t t153 = -7776649;
int16_t x625 = INT16_MIN;
int16_t x630 = INT16_MIN;
int8_t x631 = INT8_MAX;
int32_t t155 = 11186327;
uint16_t x635 = 477U;
uint8_t x640 = 2U;
volatile int32_t x643 = INT32_MAX;
int64_t x645 = -1154554689453999060LL;
uint32_t x647 = UINT32_MAX;
int32_t t159 = -6;
uint16_t x649 = UINT16_MAX;
volatile int32_t x651 = INT32_MIN;
int32_t t160 = -437265;
uint64_t x653 = UINT64_MAX;
volatile int32_t t162 = 3215954;
int64_t x661 = INT64_MIN;
volatile int16_t x662 = 193;
int64_t x664 = INT64_MAX;
static int32_t x669 = 11359687;
int64_t x682 = INT64_MIN;
volatile int32_t t168 = 983;
int64_t x689 = INT64_MIN;
int8_t x691 = INT8_MIN;
uint64_t x692 = 2951LLU;
int32_t t169 = 899124;
uint16_t x695 = 0U;
static int8_t x700 = INT8_MIN;
static int32_t t171 = 4521;
int8_t x701 = INT8_MIN;
static uint32_t x702 = UINT32_MAX;
volatile int16_t x708 = 1;
volatile int32_t x711 = INT32_MIN;
static int64_t x714 = -106LL;
uint32_t x721 = UINT32_MAX;
volatile int32_t x722 = INT32_MIN;
volatile int64_t x726 = -4166690LL;
static int64_t x731 = -5054783LL;
static int8_t x733 = INT8_MIN;
volatile int64_t x744 = 51859980115063LL;
int16_t x748 = INT16_MIN;
int16_t x752 = -213;
static uint16_t x756 = UINT16_MAX;
int32_t t188 = 65650294;
int32_t x774 = -1;
static int32_t x779 = 1;
int32_t t192 = 2112;
int32_t t194 = -529811680;
volatile int32_t t196 = 0;
int64_t x801 = INT64_MIN;
volatile int32_t t197 = -1556739;
uint8_t x805 = UINT8_MAX;
int8_t x807 = INT8_MIN;
static volatile int16_t x811 = INT16_MIN;


void f0(void) {
    	static volatile int16_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 69517481123LLU;
	volatile int32_t t0 = 90658325;

    t0 = (x1<=((x2|x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 101U;
	int32_t x6 = -56182;
	int16_t x7 = -2618;
	uint16_t x8 = 6U;

    t1 = (x5<=((x6|x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -2;
	volatile int16_t x11 = INT16_MIN;
	volatile int32_t t2 = -31;

    t2 = (x9<=((x10|x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x14 = 180408;
	static int16_t x15 = INT16_MIN;
	static volatile uint8_t x16 = 47U;
	volatile int32_t t3 = 47044225;

    t3 = (x13<=((x14|x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MAX;
	uint8_t x19 = 125U;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 4058;

    t4 = (x17<=((x18|x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	static uint64_t x23 = 348646LLU;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 779992233;

    t5 = (x21<=((x22|x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MAX;
	int16_t x26 = 55;
	static uint16_t x28 = 4515U;
	volatile int32_t t6 = 2998;

    t6 = (x25<=((x26|x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 57U;
	static int8_t x31 = -6;
	volatile int32_t x32 = INT32_MAX;
	int32_t t7 = 280;

    t7 = (x29<=((x30|x31)%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	static volatile int32_t x35 = -1;
	volatile uint32_t x36 = 153762U;
	static volatile int32_t t8 = 29394392;

    t8 = (x33<=((x34|x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	static uint16_t x38 = UINT16_MAX;
	volatile int32_t x39 = INT32_MAX;
	volatile int32_t t9 = 3438;

    t9 = (x37<=((x38|x39)%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 32315818U;
	int8_t x46 = INT8_MIN;
	int16_t x47 = 114;
	uint32_t x48 = 12U;
	volatile int32_t t10 = -1;

    t10 = (x45<=((x46|x47)%x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x49 = -116078620504LL;
	int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t11 = -502;

    t11 = (x49<=((x50|x51)%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 12531LLU;
	uint32_t x55 = UINT32_MAX;
	static volatile int32_t t12 = 83;

    t12 = (x53<=((x54|x55)%x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = -1;
	static int32_t x58 = INT32_MIN;
	volatile uint32_t x59 = 33259269U;
	int32_t x60 = 24751;
	int32_t t13 = -520;

    t13 = (x57<=((x58|x59)%x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x62 = UINT64_MAX;
	volatile uint64_t x63 = UINT64_MAX;
	int32_t t14 = 82580944;

    t14 = (x61<=((x62|x63)%x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = INT8_MAX;
	uint16_t x66 = UINT16_MAX;
	uint8_t x68 = 1U;
	volatile int32_t t15 = -5423;

    t15 = (x65<=((x66|x67)%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = UINT64_MAX;
	volatile int8_t x70 = INT8_MAX;
	int64_t x71 = -1342230066278906LL;
	uint64_t x72 = 24194722333LLU;

    t16 = (x69<=((x70|x71)%x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = -1;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 97934040539LLU;
	int32_t x76 = -1;

    t17 = (x73<=((x74|x75)%x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = UINT64_MAX;
	uint16_t x80 = 5U;
	volatile int32_t t18 = -1794;

    t18 = (x77<=((x78|x79)%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x82 = -1;
	volatile uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t19 = 27818276;

    t19 = (x81<=((x82|x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t20 = -2826558;

    t20 = (x85<=((x86|x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x90 = 79U;
	int64_t x91 = INT64_MAX;
	int8_t x92 = -15;
	volatile int32_t t21 = 1;

    t21 = (x89<=((x90|x91)%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	volatile int16_t x94 = -16;
	int64_t x96 = -1LL;
	static int32_t t22 = -443;

    t22 = (x93<=((x94|x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1;
	int8_t x100 = INT8_MIN;
	int32_t t23 = -5314;

    t23 = (x97<=((x98|x99)%x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	int16_t x102 = -1;
	static int32_t x104 = -1;
	int32_t t24 = 555411;

    t24 = (x101<=((x102|x103)%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	int32_t t25 = -32432879;

    t25 = (x105<=((x106|x107)%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = INT16_MIN;
	int32_t x110 = -6;
	int16_t x112 = INT16_MIN;
	int32_t t26 = 3382;

    t26 = (x109<=((x110|x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = INT32_MAX;
	volatile uint64_t x115 = 112039276489114634LLU;
	static uint64_t x116 = UINT64_MAX;

    t27 = (x113<=((x114|x115)%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x117 = INT16_MIN;
	uint16_t x118 = 3879U;
	int64_t x119 = -960092406596856251LL;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -648671;

    t28 = (x117<=((x118|x119)%x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int16_t x122 = -6;
	int32_t x124 = -1;
	int32_t t29 = -51;

    t29 = (x121<=((x122|x123)%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -50;
	volatile uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MAX;
	static int8_t x128 = -1;

    t30 = (x125<=((x126|x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x129 = 2U;
	int32_t x131 = INT32_MIN;
	int32_t x132 = -1;

    t31 = (x129<=((x130|x131)%x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = INT64_MIN;
	static uint8_t x135 = 15U;
	int32_t t32 = -45335643;

    t32 = (x133<=((x134|x135)%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 5U;
	int8_t x138 = INT8_MIN;
	static uint32_t x139 = UINT32_MAX;
	uint64_t x140 = 10637LLU;
	volatile int32_t t33 = -789661;

    t33 = (x137<=((x138|x139)%x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 26U;
	volatile int32_t x142 = -1;
	static int8_t x143 = INT8_MAX;
	uint16_t x144 = 11U;
	int32_t t34 = -200;

    t34 = (x141<=((x142|x143)%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 67094846664384LLU;

    t35 = (x145<=((x146|x147)%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = INT16_MAX;
	uint32_t x152 = 193518967U;

    t36 = (x149<=((x150|x151)%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x154 = 406755138;
	uint8_t x155 = 100U;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t37 = -170272;

    t37 = (x153<=((x154|x155)%x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x157 = 22;
	int16_t x158 = -1;
	int8_t x159 = INT8_MAX;
	int32_t t38 = 34223;

    t38 = (x157<=((x158|x159)%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	static uint8_t x163 = 2U;
	volatile int32_t x164 = 3937;
	int32_t t39 = -914237551;

    t39 = (x161<=((x162|x163)%x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MAX;
	static int16_t x167 = INT16_MAX;
	volatile int32_t x168 = -1;
	volatile int32_t t40 = 1152;

    t40 = (x165<=((x166|x167)%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x171 = 61003025878LLU;
	int16_t x172 = 189;
	volatile int32_t t41 = -511;

    t41 = (x169<=((x170|x171)%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x173 = UINT16_MAX;
	static volatile int64_t x174 = INT64_MAX;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = INT64_MIN;
	int32_t t42 = 637057;

    t42 = (x173<=((x174|x175)%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = UINT32_MAX;
	static volatile int64_t x178 = -1LL;
	int32_t t43 = 744246488;

    t43 = (x177<=((x178|x179)%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x182 = 5;
	uint8_t x183 = 3U;
	int64_t x184 = INT64_MAX;
	volatile int32_t t44 = -3829548;

    t44 = (x181<=((x182|x183)%x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = UINT16_MAX;
	int32_t x186 = -1;
	uint8_t x187 = 0U;
	volatile int32_t t45 = -61;

    t45 = (x185<=((x186|x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = 7;
	uint8_t x190 = 106U;
	static uint64_t x191 = 6347212LLU;
	static volatile int32_t x192 = INT32_MIN;
	int32_t t46 = 7;

    t46 = (x189<=((x190|x191)%x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = INT32_MIN;
	volatile int16_t x194 = INT16_MIN;
	uint16_t x195 = 38U;
	int8_t x196 = INT8_MIN;
	int32_t t47 = 1024592;

    t47 = (x193<=((x194|x195)%x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	static int32_t t48 = 2;

    t48 = (x197<=((x198|x199)%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x202 = 5U;
	int16_t x203 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t49 = 10567;

    t49 = (x201<=((x202|x203)%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x205 = INT64_MIN;
	int16_t x207 = INT16_MIN;

    t50 = (x205<=((x206|x207)%x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x209 = INT64_MIN;
	volatile int32_t t51 = 86;

    t51 = (x209<=((x210|x211)%x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = 1961155U;
	uint32_t x215 = 1579939406U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t52 = 3354833;

    t52 = (x213<=((x214|x215)%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 32056627U;
	int8_t x219 = 0;
	int32_t x220 = INT32_MIN;
	volatile int32_t t53 = -320951509;

    t53 = (x217<=((x218|x219)%x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x221 = INT8_MIN;
	static int16_t x224 = INT16_MAX;
	static volatile int32_t t54 = 0;

    t54 = (x221<=((x222|x223)%x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x226 = INT16_MIN;
	int8_t x228 = INT8_MIN;

    t55 = (x225<=((x226|x227)%x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x230 = 436000695893LL;
	static uint16_t x232 = UINT16_MAX;
	volatile int32_t t56 = 40398;

    t56 = (x229<=((x230|x231)%x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = -1;
	static uint8_t x234 = 41U;
	volatile uint16_t x235 = 3400U;
	volatile int8_t x236 = -3;
	volatile int32_t t57 = 33326;

    t57 = (x233<=((x234|x235)%x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = 10U;
	volatile int32_t t58 = -133;

    t58 = (x237<=((x238|x239)%x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;

    t59 = (x241<=((x242|x243)%x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t60 = 3;

    t60 = (x245<=((x246|x247)%x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x249 = UINT32_MAX;
	volatile uint16_t x250 = UINT16_MAX;
	volatile int32_t x251 = 6970;
	uint16_t x252 = UINT16_MAX;
	int32_t t61 = -180551;

    t61 = (x249<=((x250|x251)%x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	uint16_t x255 = 11227U;
	int32_t x256 = -1;
	static int32_t t62 = -603;

    t62 = (x253<=((x254|x255)%x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = -1834248LL;
	volatile int32_t x259 = INT32_MAX;
	int32_t t63 = 16381397;

    t63 = (x257<=((x258|x259)%x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x262 = -1;
	uint8_t x263 = 1U;
	static volatile uint32_t x264 = 3155563U;
	int32_t t64 = -4545;

    t64 = (x261<=((x262|x263)%x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x268 = INT8_MIN;
	volatile int32_t t65 = -120;

    t65 = (x265<=((x266|x267)%x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x269 = 280296523065LLU;
	int32_t x271 = 393;
	int32_t t66 = -40877258;

    t66 = (x269<=((x270|x271)%x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x274 = -5;
	static volatile uint8_t x275 = 7U;
	uint8_t x276 = 2U;

    t67 = (x273<=((x274|x275)%x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	volatile int16_t x279 = INT16_MAX;
	static int32_t x280 = INT32_MIN;
	int32_t t68 = -1004;

    t68 = (x277<=((x278|x279)%x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x281 = 8341U;
	volatile int32_t x282 = -1;
	static int32_t x283 = 2376;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t69 = -6977528;

    t69 = (x281<=((x282|x283)%x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = -1;
	volatile int32_t x286 = INT32_MAX;
	static volatile uint32_t x287 = 868702989U;
	uint32_t x288 = 201U;
	int32_t t70 = 96445904;

    t70 = (x285<=((x286|x287)%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x289 = INT64_MAX;
	volatile uint64_t x291 = 10433035619856LLU;

    t71 = (x289<=((x290|x291)%x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = 71033650927995922LL;
	uint32_t x294 = 28671052U;
	static int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t72 = -312499951;

    t72 = (x293<=((x294|x295)%x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x298 = 595339845;
	static int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MAX;
	int32_t t73 = 486259;

    t73 = (x297<=((x298|x299)%x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x301 = 0;
	static uint16_t x302 = UINT16_MAX;
	volatile int16_t x303 = 2;
	volatile int16_t x304 = -1;
	int32_t t74 = -3;

    t74 = (x301<=((x302|x303)%x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = 2975;
	int32_t x311 = -57;
	int8_t x312 = INT8_MIN;
	static int32_t t75 = -1;

    t75 = (x309<=((x310|x311)%x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x315 = -1;
	uint32_t x316 = 488U;
	int32_t t76 = -13618092;

    t76 = (x313<=((x314|x315)%x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -1;
	static volatile int8_t x318 = -1;
	static volatile uint16_t x320 = UINT16_MAX;
	int32_t t77 = 41969;

    t77 = (x317<=((x318|x319)%x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x321 = -125999LL;
	int64_t x322 = INT64_MIN;
	int16_t x323 = -5;
	int16_t x324 = -6988;
	volatile int32_t t78 = -4193555;

    t78 = (x321<=((x322|x323)%x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x325 = 13U;
	static volatile uint32_t x326 = 7U;
	volatile int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t79 = -11492466;

    t79 = (x325<=((x326|x327)%x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;

    t80 = (x329<=((x330|x331)%x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x334 = -1;
	int32_t x335 = -484;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t81 = 3;

    t81 = (x333<=((x334|x335)%x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MAX;
	volatile uint8_t x338 = 29U;
	int16_t x340 = -495;
	volatile int32_t t82 = 1422;

    t82 = (x337<=((x338|x339)%x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x342 = -26;
	static uint32_t x343 = UINT32_MAX;
	int32_t t83 = 17022130;

    t83 = (x341<=((x342|x343)%x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = 2669U;
	uint16_t x347 = 21775U;
	int32_t x348 = INT32_MAX;
	volatile int32_t t84 = 384393175;

    t84 = (x345<=((x346|x347)%x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x350 = -1LL;
	volatile uint32_t x352 = UINT32_MAX;
	int32_t t85 = -8880561;

    t85 = (x349<=((x350|x351)%x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x353 = 2956304625201871LLU;
	int16_t x354 = INT16_MAX;
	static int8_t x355 = -1;
	int32_t t86 = 928;

    t86 = (x353<=((x354|x355)%x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t87 = 3115;

    t87 = (x357<=((x358|x359)%x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = 1;
	int64_t x362 = INT64_MIN;
	volatile int64_t x363 = -327LL;
	uint16_t x364 = 292U;

    t88 = (x361<=((x362|x363)%x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = 7479804U;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -7097LL;
	uint32_t x368 = UINT32_MAX;
	int32_t t89 = 92936944;

    t89 = (x365<=((x366|x367)%x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x370 = INT16_MAX;
	static int16_t x371 = -1687;
	static int16_t x372 = -1;

    t90 = (x369<=((x370|x371)%x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x373 = INT16_MIN;
	uint16_t x374 = 11U;
	static int32_t x375 = 1;

    t91 = (x373<=((x374|x375)%x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x377 = INT16_MAX;
	uint64_t x378 = 362835784159LLU;

    t92 = (x377<=((x378|x379)%x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x381 = INT8_MIN;
	volatile int8_t x384 = 3;
	int32_t t93 = 1557;

    t93 = (x381<=((x382|x383)%x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = INT16_MAX;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = -1406;
	volatile int32_t x388 = INT32_MIN;
	static volatile int32_t t94 = 9;

    t94 = (x385<=((x386|x387)%x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = 0U;
	uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 210735304393LLU;
	int64_t x392 = INT64_MAX;
	int32_t t95 = 1839429;

    t95 = (x389<=((x390|x391)%x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x394 = INT64_MAX;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = 249490185579LL;
	volatile int32_t t96 = -8688;

    t96 = (x393<=((x394|x395)%x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x397 = -98;
	static int32_t x398 = -1;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t97 = 7722;

    t97 = (x397<=((x398|x399)%x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x401 = 2U;
	int32_t x404 = 89132538;
	int32_t t98 = 2;

    t98 = (x401<=((x402|x403)%x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x406 = 619052696771LL;
	int16_t x407 = -1;
	uint64_t x408 = 48440942LLU;
	int32_t t99 = 33;

    t99 = (x405<=((x406|x407)%x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x410 = INT16_MIN;
	static volatile uint16_t x411 = 834U;
	volatile int32_t t100 = -375425;

    t100 = (x409<=((x410|x411)%x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = INT32_MIN;
	int64_t x415 = 44084425LL;
	int16_t x416 = 1;
	int32_t t101 = 38614014;

    t101 = (x413<=((x414|x415)%x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = INT16_MIN;
	volatile int32_t x419 = -187;
	int16_t x420 = 799;
	volatile int32_t t102 = -1868;

    t102 = (x417<=((x418|x419)%x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x423 = -1LL;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t103 = -514;

    t103 = (x421<=((x422|x423)%x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -2079336;
	int32_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	volatile int8_t x428 = -1;
	volatile int32_t t104 = 1165226;

    t104 = (x425<=((x426|x427)%x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 1342336845LLU;
	int32_t t105 = -6;

    t105 = (x429<=((x430|x431)%x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = INT64_MAX;
	uint64_t x434 = 295306137503908LLU;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t106 = -1;

    t106 = (x433<=((x434|x435)%x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x438 = 28871454587LLU;
	int32_t x439 = -152;
	static int16_t x440 = INT16_MIN;
	int32_t t107 = 4;

    t107 = (x437<=((x438|x439)%x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x442 = INT32_MIN;
	uint32_t x443 = 0U;
	volatile int64_t x444 = INT64_MAX;
	volatile int32_t t108 = -59;

    t108 = (x441<=((x442|x443)%x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x448 = -1;
	volatile int32_t t109 = -507;

    t109 = (x445<=((x446|x447)%x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = UINT16_MAX;
	static int8_t x450 = INT8_MIN;
	uint16_t x452 = 9U;
	volatile int32_t t110 = 194212;

    t110 = (x449<=((x450|x451)%x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x453 = INT64_MIN;
	static int32_t x454 = 28627;
	uint32_t x455 = 2488938U;
	int32_t x456 = 55;
	volatile int32_t t111 = -4;

    t111 = (x453<=((x454|x455)%x456));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = -1LL;
	volatile uint32_t x459 = 23321U;
	int32_t x460 = INT32_MIN;

    t112 = (x457<=((x458|x459)%x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	static uint64_t x463 = UINT64_MAX;
	int16_t x464 = 3;

    t113 = (x461<=((x462|x463)%x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x465 = 552049LL;
	int32_t x466 = INT32_MIN;
	uint32_t x467 = 219811317U;
	uint32_t x468 = UINT32_MAX;
	static int32_t t114 = -170536;

    t114 = (x465<=((x466|x467)%x468));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = INT16_MIN;
	static uint8_t x470 = UINT8_MAX;
	int16_t x471 = INT16_MIN;
	static volatile int8_t x472 = -1;

    t115 = (x469<=((x470|x471)%x472));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x473 = -5;
	uint16_t x475 = 4719U;
	volatile int16_t x476 = -1;
	static volatile int32_t t116 = -177693;

    t116 = (x473<=((x474|x475)%x476));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x477 = INT64_MAX;
	int32_t x478 = INT32_MIN;
	int16_t x479 = INT16_MAX;
	uint8_t x480 = UINT8_MAX;
	static int32_t t117 = -1061789886;

    t117 = (x477<=((x478|x479)%x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x482 = UINT32_MAX;
	volatile uint16_t x483 = UINT16_MAX;
	int8_t x484 = 31;

    t118 = (x481<=((x482|x483)%x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x485 = 3246U;
	static uint64_t x486 = 0LLU;
	int32_t x487 = -73043;
	int64_t x488 = INT64_MAX;

    t119 = (x485<=((x486|x487)%x488));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = -41;
	int16_t x490 = -1;
	int32_t x491 = 43;
	uint16_t x492 = 1221U;
	int32_t t120 = -7137971;

    t120 = (x489<=((x490|x491)%x492));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x493 = 92U;
	uint8_t x494 = 0U;
	int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MIN;
	int32_t t121 = 1;

    t121 = (x493<=((x494|x495)%x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x498 = 171U;
	int64_t x499 = INT64_MIN;
	int32_t x500 = -1;
	volatile int32_t t122 = 1021063042;

    t122 = (x497<=((x498|x499)%x500));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x501 = -39;
	static int8_t x502 = -1;
	volatile int16_t x503 = INT16_MIN;
	int32_t t123 = -9;

    t123 = (x501<=((x502|x503)%x504));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x505 = 0;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = -1;
	int64_t x508 = 34400667329278822LL;

    t124 = (x505<=((x506|x507)%x508));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x509 = UINT16_MAX;
	static int64_t x510 = INT64_MAX;
	volatile int32_t t125 = 124104804;

    t125 = (x509<=((x510|x511)%x512));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x514 = UINT64_MAX;
	static volatile int16_t x515 = INT16_MIN;
	volatile int8_t x516 = -1;
	static int32_t t126 = 706476516;

    t126 = (x513<=((x514|x515)%x516));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x517 = -1LL;
	uint32_t x518 = 1124531U;
	int16_t x519 = INT16_MIN;

    t127 = (x517<=((x518|x519)%x520));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	uint16_t x522 = UINT16_MAX;
	uint64_t x523 = UINT64_MAX;
	int32_t t128 = 763052269;

    t128 = (x521<=((x522|x523)%x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x528 = INT32_MIN;

    t129 = (x525<=((x526|x527)%x528));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x530 = INT16_MAX;
	static volatile uint8_t x531 = 7U;
	uint16_t x532 = UINT16_MAX;
	int32_t t130 = 2869;

    t130 = (x529<=((x530|x531)%x532));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x533 = 84U;
	int32_t x535 = INT32_MIN;

    t131 = (x533<=((x534|x535)%x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	int64_t x539 = -13LL;
	int32_t x540 = -1;
	static int32_t t132 = 1;

    t132 = (x537<=((x538|x539)%x540));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x541 = 363;
	int32_t x542 = 1;
	int16_t x544 = -1;

    t133 = (x541<=((x542|x543)%x544));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x546 = INT16_MIN;
	uint64_t x547 = 2672875392796142310LLU;
	volatile int32_t t134 = 188;

    t134 = (x545<=((x546|x547)%x548));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x549 = INT32_MAX;
	static volatile uint32_t x550 = 671209208U;
	int8_t x551 = INT8_MIN;
	volatile uint64_t x552 = UINT64_MAX;
	volatile int32_t t135 = -55474;

    t135 = (x549<=((x550|x551)%x552));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = INT16_MAX;
	uint64_t x555 = 137537LLU;
	int64_t x556 = INT64_MAX;

    t136 = (x553<=((x554|x555)%x556));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = -2;
	volatile int32_t x558 = INT32_MIN;
	int32_t x559 = INT32_MIN;
	static int32_t t137 = -1458;

    t137 = (x557<=((x558|x559)%x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x561 = 56U;
	volatile int64_t x563 = 40614LL;
	uint64_t x564 = UINT64_MAX;

    t138 = (x561<=((x562|x563)%x564));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x565 = 19137;
	int8_t x566 = INT8_MIN;
	uint16_t x567 = 0U;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t139 = 251278909;

    t139 = (x565<=((x566|x567)%x568));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = INT8_MIN;
	volatile int8_t x571 = 0;
	volatile uint64_t x572 = 637336131473LLU;
	int32_t t140 = -32160;

    t140 = (x569<=((x570|x571)%x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x573 = 1U;
	int64_t x574 = INT64_MIN;
	volatile int32_t t141 = -13553;

    t141 = (x573<=((x574|x575)%x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x577 = -1;
	int32_t x578 = -1;
	int16_t x579 = INT16_MIN;
	uint64_t x580 = 13137936110LLU;
	int32_t t142 = -79;

    t142 = (x577<=((x578|x579)%x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x581 = 9154;
	int64_t x582 = 530982911722LL;
	uint64_t x583 = UINT64_MAX;
	uint16_t x584 = UINT16_MAX;
	int32_t t143 = -15;

    t143 = (x581<=((x582|x583)%x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x585 = -3206;
	int64_t x587 = INT64_MAX;
	volatile int64_t x588 = INT64_MAX;

    t144 = (x585<=((x586|x587)%x588));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x591 = -1;
	static int8_t x592 = INT8_MAX;
	int32_t t145 = -258906855;

    t145 = (x589<=((x590|x591)%x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x593 = INT64_MIN;
	volatile uint8_t x594 = UINT8_MAX;
	static uint8_t x595 = UINT8_MAX;
	volatile int32_t t146 = -5;

    t146 = (x593<=((x594|x595)%x596));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x597 = -1;
	static int64_t x598 = INT64_MAX;
	static int64_t x599 = INT64_MAX;
	int32_t t147 = 7;

    t147 = (x597<=((x598|x599)%x600));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MIN;
	static uint64_t x603 = 780837339190042LLU;

    t148 = (x601<=((x602|x603)%x604));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t t149 = 99101;

    t149 = (x605<=((x606|x607)%x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x609 = UINT8_MAX;
	static uint8_t x610 = 12U;
	int32_t t150 = -442825662;

    t150 = (x609<=((x610|x611)%x612));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x613 = INT16_MIN;
	int8_t x615 = -1;
	int32_t x616 = -1281;

    t151 = (x613<=((x614|x615)%x616));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x617 = 21;
	volatile int16_t x619 = INT16_MIN;
	static int16_t x620 = -740;
	volatile int32_t t152 = 14602108;

    t152 = (x617<=((x618|x619)%x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x621 = UINT8_MAX;
	uint8_t x622 = UINT8_MAX;
	int8_t x623 = INT8_MAX;
	int32_t x624 = -1;

    t153 = (x621<=((x622|x623)%x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x626 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	volatile int32_t x628 = 288530;
	int32_t t154 = -24610151;

    t154 = (x625<=((x626|x627)%x628));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x629 = -21;
	int16_t x632 = -1;

    t155 = (x629<=((x630|x631)%x632));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x633 = 0;
	int16_t x634 = INT16_MIN;
	volatile int16_t x636 = INT16_MIN;
	volatile int32_t t156 = 1153;

    t156 = (x633<=((x634|x635)%x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x637 = 893750U;
	uint32_t x638 = 2U;
	static uint16_t x639 = UINT16_MAX;
	int32_t t157 = 268;

    t157 = (x637<=((x638|x639)%x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x641 = INT16_MIN;
	uint16_t x642 = 87U;
	int8_t x644 = -1;
	int32_t t158 = -1;

    t158 = (x641<=((x642|x643)%x644));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x646 = 0;
	int16_t x648 = 64;

    t159 = (x645<=((x646|x647)%x648));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x650 = INT8_MIN;
	static int32_t x652 = -1;

    t160 = (x649<=((x650|x651)%x652));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x654 = 5;
	uint16_t x655 = 2U;
	int16_t x656 = INT16_MIN;
	static int32_t t161 = 29288664;

    t161 = (x653<=((x654|x655)%x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x657 = 0U;
	int8_t x658 = INT8_MAX;
	volatile uint32_t x659 = UINT32_MAX;
	uint32_t x660 = 181U;

    t162 = (x657<=((x658|x659)%x660));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x663 = 738480851LL;
	int32_t t163 = -19723712;

    t163 = (x661<=((x662|x663)%x664));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x665 = 110223U;
	int64_t x666 = INT64_MIN;
	uint32_t x667 = UINT32_MAX;
	uint32_t x668 = UINT32_MAX;
	static volatile int32_t t164 = -252857;

    t164 = (x665<=((x666|x667)%x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x670 = 5253;
	static int16_t x671 = -1;
	int32_t x672 = 987;
	volatile int32_t t165 = 880246682;

    t165 = (x669<=((x670|x671)%x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x673 = -10283874;
	static volatile int16_t x674 = INT16_MIN;
	static uint32_t x675 = UINT32_MAX;
	int64_t x676 = INT64_MAX;
	volatile int32_t t166 = -52510;

    t166 = (x673<=((x674|x675)%x676));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x681 = 61U;
	int8_t x683 = INT8_MAX;
	int8_t x684 = -1;
	volatile int32_t t167 = -1196;

    t167 = (x681<=((x682|x683)%x684));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x685 = -1;
	volatile int8_t x686 = -1;
	volatile int8_t x687 = -1;
	int16_t x688 = INT16_MAX;

    t168 = (x685<=((x686|x687)%x688));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x690 = INT16_MIN;

    t169 = (x689<=((x690|x691)%x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = -1LL;
	volatile int64_t x694 = INT64_MAX;
	int32_t x696 = 184986422;
	static int32_t t170 = -217614;

    t170 = (x693<=((x694|x695)%x696));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x697 = -1LL;
	static uint8_t x698 = 1U;
	int8_t x699 = -23;

    t171 = (x697<=((x698|x699)%x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x703 = UINT64_MAX;
	uint16_t x704 = 212U;
	int32_t t172 = -3504;

    t172 = (x701<=((x702|x703)%x704));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x705 = -1LL;
	static int32_t x706 = -70094635;
	int16_t x707 = -2848;
	int32_t t173 = -6;

    t173 = (x705<=((x706|x707)%x708));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = INT8_MIN;
	volatile uint8_t x712 = 11U;
	volatile int32_t t174 = 23641;

    t174 = (x709<=((x710|x711)%x712));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x713 = 3;
	uint64_t x715 = 37410795474922LLU;
	static int8_t x716 = -47;
	volatile int32_t t175 = -32702685;

    t175 = (x713<=((x714|x715)%x716));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = -1;
	int32_t x718 = -91;
	static int16_t x719 = -1;
	static int64_t x720 = INT64_MAX;
	int32_t t176 = -412774990;

    t176 = (x717<=((x718|x719)%x720));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x723 = 3732;
	int8_t x724 = INT8_MIN;
	volatile int32_t t177 = -1468281;

    t177 = (x721<=((x722|x723)%x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	uint64_t x728 = UINT64_MAX;
	static volatile int32_t t178 = -11342;

    t178 = (x725<=((x726|x727)%x728));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x729 = INT32_MAX;
	uint8_t x730 = 0U;
	static int8_t x732 = -1;
	static volatile int32_t t179 = 17677;

    t179 = (x729<=((x730|x731)%x732));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x734 = INT64_MIN;
	static uint32_t x735 = UINT32_MAX;
	static int64_t x736 = INT64_MIN;
	int32_t t180 = 920334356;

    t180 = (x733<=((x734|x735)%x736));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x737 = INT64_MIN;
	int64_t x738 = -1LL;
	int32_t x739 = -1;
	int64_t x740 = 21238889LL;
	volatile int32_t t181 = -4102;

    t181 = (x737<=((x738|x739)%x740));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = INT32_MAX;
	static volatile int32_t x742 = 3;
	uint16_t x743 = UINT16_MAX;
	int32_t t182 = -14;

    t182 = (x741<=((x742|x743)%x744));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = 392LL;
	static int8_t x746 = 6;
	int32_t x747 = INT32_MAX;
	static int32_t t183 = 1;

    t183 = (x745<=((x746|x747)%x748));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x749 = -1;
	int32_t x750 = 58;
	uint64_t x751 = 65363502LLU;
	volatile int32_t t184 = -36700454;

    t184 = (x749<=((x750|x751)%x752));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x753 = 218U;
	int16_t x754 = 3;
	static int32_t x755 = INT32_MIN;
	int32_t t185 = -3;

    t185 = (x753<=((x754|x755)%x756));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x757 = 81U;
	uint64_t x758 = 41532233461843LLU;
	int8_t x759 = INT8_MIN;
	int32_t x760 = INT32_MAX;
	int32_t t186 = 40311;

    t186 = (x757<=((x758|x759)%x760));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = -1;
	uint16_t x762 = UINT16_MAX;
	uint16_t x763 = 7U;
	static volatile uint32_t x764 = UINT32_MAX;
	volatile int32_t t187 = 0;

    t187 = (x761<=((x762|x763)%x764));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x765 = UINT32_MAX;
	static int32_t x766 = INT32_MIN;
	int8_t x767 = -16;
	uint16_t x768 = 5052U;

    t188 = (x765<=((x766|x767)%x768));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x769 = -1;
	volatile int32_t x770 = 2857266;
	static volatile int64_t x771 = INT64_MAX;
	int8_t x772 = INT8_MAX;
	volatile int32_t t189 = 86;

    t189 = (x769<=((x770|x771)%x772));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x775 = -1LL;
	uint16_t x776 = 9U;
	static volatile int32_t t190 = 340123;

    t190 = (x773<=((x774|x775)%x776));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x777 = -1;
	int8_t x778 = -1;
	volatile int16_t x780 = INT16_MIN;
	static volatile int32_t t191 = -67160743;

    t191 = (x777<=((x778|x779)%x780));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x781 = INT64_MIN;
	int16_t x782 = -1;
	uint8_t x783 = UINT8_MAX;
	static int32_t x784 = INT32_MIN;

    t192 = (x781<=((x782|x783)%x784));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = -1;
	volatile int32_t x786 = INT32_MIN;
	int8_t x787 = -1;
	int64_t x788 = -84LL;
	volatile int32_t t193 = -94547;

    t193 = (x785<=((x786|x787)%x788));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x789 = -23;
	uint8_t x790 = 2U;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = 1LLU;

    t194 = (x789<=((x790|x791)%x792));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x793 = UINT8_MAX;
	int16_t x794 = INT16_MAX;
	static uint8_t x795 = 22U;
	int16_t x796 = -5962;
	static int32_t t195 = 4374211;

    t195 = (x793<=((x794|x795)%x796));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x797 = INT16_MIN;
	int8_t x798 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MAX;

    t196 = (x797<=((x798|x799)%x800));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x802 = -1;
	uint32_t x803 = 15382788U;
	int32_t x804 = INT32_MAX;

    t197 = (x801<=((x802|x803)%x804));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x806 = 5U;
	static uint32_t x808 = UINT32_MAX;
	static int32_t t198 = -1240041;

    t198 = (x805<=((x806|x807)%x808));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x809 = INT8_MAX;
	uint16_t x810 = 3443U;
	uint32_t x812 = 1U;
	int32_t t199 = -1;

    t199 = (x809<=((x810|x811)%x812));

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

