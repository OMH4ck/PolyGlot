
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

static int16_t x2 = -1;
int8_t x7 = INT8_MIN;
int32_t t1 = 1;
uint32_t x10 = 4378786U;
static int8_t x14 = INT8_MAX;
int8_t x18 = 0;
static volatile int8_t x22 = INT8_MIN;
int32_t x30 = INT32_MIN;
int16_t x34 = -1;
volatile int32_t x42 = INT32_MIN;
int8_t x47 = INT8_MIN;
int16_t x50 = INT16_MIN;
uint64_t x55 = UINT64_MAX;
static int32_t t15 = 0;
volatile uint8_t x67 = UINT8_MAX;
volatile int32_t x68 = INT32_MIN;
static int32_t x69 = INT32_MIN;
int8_t x76 = -1;
volatile uint32_t t18 = 330182409U;
volatile int32_t t20 = -36184;
uint8_t x88 = 6U;
static int16_t x91 = INT16_MIN;
volatile int32_t t23 = 1;
uint16_t x97 = UINT16_MAX;
uint64_t x98 = UINT64_MAX;
int16_t x99 = INT16_MIN;
volatile int32_t t25 = 41785367;
static int64_t x108 = INT64_MAX;
int64_t x113 = 67LL;
uint8_t x114 = 94U;
int8_t x132 = INT8_MIN;
int8_t x134 = -18;
static uint64_t x138 = 740834879LLU;
uint8_t x144 = 23U;
static uint8_t x153 = 1U;
volatile int32_t t39 = 449;
static int64_t x166 = INT64_MIN;
int64_t x169 = 166433231008256373LL;
static volatile int16_t x172 = INT16_MIN;
int32_t x184 = -121517;
uint16_t x187 = UINT16_MAX;
int8_t x188 = INT8_MIN;
int32_t t45 = 18769201;
int8_t x190 = INT8_MIN;
static int64_t t46 = INT64_MIN;
int64_t x193 = INT64_MIN;
uint64_t x203 = 64708LLU;
uint32_t x205 = UINT32_MAX;
uint16_t x209 = 381U;
int32_t x210 = -3;
uint16_t x213 = 5719U;
int16_t x218 = -5;
int32_t x223 = INT32_MAX;
volatile int16_t x232 = INT16_MAX;
int8_t x234 = -1;
static uint16_t x242 = UINT16_MAX;
static int8_t x246 = -1;
int8_t x252 = INT8_MAX;
uint8_t x253 = 52U;
int8_t x256 = INT8_MIN;
int64_t x259 = INT64_MAX;
int8_t x262 = INT8_MAX;
int16_t x263 = INT16_MIN;
static uint64_t x266 = 271634092293569586LLU;
int16_t x267 = -1;
static volatile int16_t x273 = 10140;
volatile int8_t x278 = 17;
int32_t t69 = -7046;
int16_t x286 = 224;
int8_t x289 = -1;
int8_t x293 = 4;
uint8_t x295 = 30U;
int64_t x302 = 1LL;
int32_t t74 = -212382;
int64_t x324 = -1514LL;
uint32_t x325 = 2034976953U;
int8_t x333 = -1;
int32_t t82 = 89424915;
uint8_t x337 = UINT8_MAX;
int16_t x341 = INT16_MIN;
static volatile uint16_t x342 = 0U;
static int32_t x347 = INT32_MAX;
uint64_t x350 = 721839319LLU;
static int16_t x351 = -1;
int16_t x353 = INT16_MAX;
volatile int64_t x356 = 806LL;
int32_t x357 = INT32_MIN;
static int64_t x358 = -22745LL;
int32_t x361 = INT32_MIN;
static int16_t x362 = INT16_MAX;
static volatile int32_t t89 = INT32_MIN;
int32_t x376 = 359410;
int32_t t92 = INT32_MIN;
int64_t x388 = INT64_MIN;
int8_t x389 = 2;
volatile int16_t x390 = INT16_MIN;
static int16_t x391 = -1;
static int32_t x393 = INT32_MAX;
int16_t x400 = INT16_MAX;
volatile int32_t t99 = 130118;
static int16_t x410 = INT16_MIN;
int16_t x416 = INT16_MIN;
int16_t x418 = -4;
int64_t x423 = INT64_MIN;
volatile int8_t x425 = INT8_MIN;
int32_t x429 = 7995;
int16_t x430 = INT16_MAX;
volatile int32_t t105 = -2810505;
int64_t x443 = -11646532983205701LL;
volatile int32_t t108 = -712;
int8_t x447 = 37;
static int8_t x448 = -7;
int32_t t110 = 21243;
int32_t t113 = 91789630;
uint16_t x473 = 5U;
static uint8_t x475 = 1U;
int32_t t115 = -744845;
int8_t x479 = INT8_MIN;
uint64_t x481 = 501LLU;
uint32_t x483 = 1379022215U;
int32_t x489 = -1;
uint16_t x491 = 1U;
static uint32_t x492 = UINT32_MAX;
volatile int8_t x496 = -1;
int16_t x497 = INT16_MIN;
static volatile int32_t x505 = -757838346;
int16_t x514 = INT16_MIN;
int16_t x517 = 650;
int64_t x522 = INT64_MAX;
volatile int16_t x523 = 1;
int32_t x529 = INT32_MAX;
uint8_t x540 = UINT8_MAX;
volatile int32_t t129 = -18;
int16_t x547 = INT16_MIN;
static uint64_t x548 = 1LLU;
uint64_t t132 = UINT64_MAX;
volatile uint64_t t133 = 84459LLU;
static int64_t x557 = INT64_MAX;
int8_t x562 = -1;
static uint32_t x565 = 285U;
int8_t x567 = -1;
static uint64_t x571 = 44939LLU;
uint8_t x575 = 13U;
volatile int64_t x591 = 7098348585LL;
int32_t t144 = 21;
uint64_t x601 = UINT64_MAX;
int64_t x602 = INT64_MIN;
volatile int64_t x603 = -218435255348430116LL;
volatile uint16_t x609 = 0U;
uint32_t x610 = 4107729U;
volatile int8_t x613 = INT8_MIN;
volatile uint32_t x616 = 765U;
int64_t x621 = INT64_MIN;
int8_t x626 = -1;
volatile int8_t x631 = -1;
static int64_t x636 = -1LL;
static int64_t x638 = INT64_MIN;
volatile int32_t t153 = -185;
int32_t x642 = 24596858;
volatile int32_t x646 = -1;
int64_t x654 = 1731350435LL;
int64_t x655 = INT64_MAX;
uint64_t x656 = 109275492LLU;
volatile uint64_t t158 = 8260LLU;
static uint64_t x667 = 125935021285237922LLU;
uint16_t x674 = UINT16_MAX;
volatile int16_t x678 = INT16_MIN;
static int32_t x679 = INT32_MAX;
int32_t x681 = 6654003;
volatile uint32_t x689 = 0U;
volatile int64_t x693 = INT64_MAX;
volatile int16_t x695 = INT16_MAX;
int64_t x696 = INT64_MIN;
volatile int16_t x699 = INT16_MIN;
static int32_t t167 = 119;
int16_t x706 = -1518;
volatile int8_t x707 = 1;
uint64_t t172 = 653219499LLU;
uint16_t x724 = UINT16_MAX;
int8_t x730 = INT8_MIN;
uint64_t x734 = 3131254LLU;
static int32_t x736 = -367324921;
uint16_t x737 = UINT16_MAX;
static int8_t x741 = 1;
volatile uint16_t x743 = UINT16_MAX;
int16_t x745 = -1;
int32_t x746 = 1021252135;
static volatile int8_t x747 = 9;
volatile int32_t t180 = -2268918;
static uint64_t x767 = 2066523992556471LLU;
int32_t x769 = 56200;
static int32_t t184 = -88;
int64_t x779 = INT64_MIN;
volatile int8_t x785 = INT8_MIN;
uint32_t x788 = 80U;
volatile int32_t t187 = 3630;
int64_t x792 = -29591123950LL;
int64_t x793 = -7275457870LL;
int8_t x799 = INT8_MIN;
int16_t x802 = INT16_MIN;
int16_t x809 = -1862;
static volatile int32_t x821 = INT32_MIN;
uint16_t x823 = 2U;
volatile uint16_t x826 = 1U;
static uint32_t t197 = UINT32_MAX;


void f0(void) {
    	uint32_t x1 = 658537U;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -8LL;
	static uint32_t t0 = 2737U;

    t0 = (x1+((x2/x3)==x4));

    if (t0 != 658537U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	uint8_t x6 = UINT8_MAX;
	static int8_t x8 = -1;

    t1 = (x5+((x6/x7)==x8));

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint8_t x11 = 1U;
	uint16_t x12 = 0U;
	volatile int32_t t2 = -23810;

    t2 = (x9+((x10/x11)==x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -8143LL;
	int16_t x15 = INT16_MAX;
	static uint8_t x16 = 99U;
	int64_t t3 = -930LL;

    t3 = (x13+((x14/x15)==x16));

    if (t3 != -8143LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = 1174LL;
	volatile uint8_t x19 = UINT8_MAX;
	int32_t x20 = -52100;
	int64_t t4 = -7612LL;

    t4 = (x17+((x18/x19)==x20));

    if (t4 != 1174LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 28762025741LLU;
	static int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	static uint64_t t5 = 31321LLU;

    t5 = (x21+((x22/x23)==x24));

    if (t5 != 28762025741LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -9929;
	volatile int16_t x26 = -8;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = -1;

    t6 = (x25+((x26/x27)==x28));

    if (t6 != -9929) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint32_t x31 = 1079662851U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -791427;

    t7 = (x29+((x30/x31)==x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = 108593;
	uint8_t x35 = 66U;
	uint32_t x36 = 1744779U;
	volatile int32_t t8 = -490809;

    t8 = (x33+((x34/x35)==x36));

    if (t8 != 108593) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x38 = 436U;
	int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 261494;

    t9 = (x37+((x38/x39)==x40));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -7836;
	uint8_t x43 = 65U;
	volatile uint16_t x44 = 444U;
	volatile int32_t t10 = -16202;

    t10 = (x41+((x42/x43)==x44));

    if (t10 != -7836) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile uint64_t x46 = UINT64_MAX;
	volatile int8_t x48 = INT8_MAX;
	volatile uint32_t t11 = UINT32_MAX;

    t11 = (x45+((x46/x47)==x48));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -61070095;

    t12 = (x49+((x50/x51)==x52));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 519U;
	int8_t x54 = INT8_MAX;
	static int16_t x56 = -110;
	volatile int32_t t13 = 258808105;

    t13 = (x53+((x54/x55)==x56));

    if (t13 != 519) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static volatile int64_t x58 = 221950453LL;
	int16_t x59 = 5787;
	int16_t x60 = -1;
	int64_t t14 = 458240847LL;

    t14 = (x57+((x58/x59)==x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;

    t15 = (x61+((x62/x63)==x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -9636LL;
	int32_t t16 = INT32_MIN;

    t16 = (x65+((x66/x67)==x68));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int32_t x72 = 204543969;
	int32_t t17 = INT32_MIN;

    t17 = (x69+((x70/x71)==x72));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 3453627U;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MIN;

    t18 = (x73+((x74/x75)==x76));

    if (t18 != 3453627U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MAX;
	volatile int8_t x80 = 20;
	volatile int32_t t19 = INT32_MIN;

    t19 = (x77+((x78/x79)==x80));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	int16_t x84 = -1;

    t20 = (x81+((x82/x83)==x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	static uint64_t x86 = 5LLU;
	static int16_t x87 = INT16_MIN;
	volatile int32_t t21 = INT32_MIN;

    t21 = (x85+((x86/x87)==x88));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	volatile int64_t x92 = 1215418613LL;
	volatile int32_t t22 = -3340523;

    t22 = (x89+((x90/x91)==x92));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MIN;
	static volatile int8_t x94 = -1;
	uint8_t x95 = 1U;
	uint32_t x96 = 15283U;

    t23 = (x93+((x94/x95)==x96));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x100 = 2U;
	static int32_t t24 = -1;

    t24 = (x97+((x98/x99)==x100));

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = 143;
	int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	uint32_t x104 = UINT32_MAX;

    t25 = (x101+((x102/x103)==x104));

    if (t25 != 143) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 5785695118LLU;
	int16_t x106 = 50;
	static int32_t x107 = 1129813;
	volatile uint64_t t26 = 8166LLU;

    t26 = (x105+((x106/x107)==x108));

    if (t26 != 5785695118LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = 0;
	int64_t x110 = INT64_MIN;
	static uint8_t x111 = 58U;
	int32_t x112 = -1;
	volatile int32_t t27 = 3546;

    t27 = (x109+((x110/x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x115 = 54U;
	int16_t x116 = INT16_MAX;
	volatile int64_t t28 = 80198960591336881LL;

    t28 = (x113+((x114/x115)==x116));

    if (t28 != 67LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 0;
	int8_t x118 = INT8_MIN;
	volatile int32_t x119 = INT32_MAX;
	static uint16_t x120 = UINT16_MAX;
	int32_t t29 = -10;

    t29 = (x117+((x118/x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 75357891;
	int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int32_t x124 = 242509981;
	static int32_t t30 = -3;

    t30 = (x121+((x122/x123)==x124));

    if (t30 != 75357891) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static volatile int32_t x126 = 1285476;
	int64_t x127 = 2634LL;
	int16_t x128 = INT16_MIN;
	int32_t t31 = -882882339;

    t31 = (x125+((x126/x127)==x128));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	int32_t x131 = 1555;
	volatile int32_t t32 = -5404899;

    t32 = (x129+((x130/x131)==x132));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	static volatile uint8_t x136 = UINT8_MAX;
	int64_t t33 = INT64_MIN;

    t33 = (x133+((x134/x135)==x136));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 77U;
	uint64_t x139 = 200884648243LLU;
	volatile int64_t x140 = INT64_MAX;
	static int32_t t34 = -109789;

    t34 = (x137+((x138/x139)==x140));

    if (t34 != 77) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	int32_t x142 = -1;
	static uint32_t x143 = 33209652U;
	volatile int32_t t35 = -1849;

    t35 = (x141+((x142/x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MAX;
	int16_t x146 = -1;
	int16_t x147 = 360;
	volatile int8_t x148 = INT8_MIN;
	static int64_t t36 = INT64_MAX;

    t36 = (x145+((x146/x147)==x148));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 118LL;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	int64_t t37 = -53591958LL;

    t37 = (x149+((x150/x151)==x152));

    if (t37 != 118LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x154 = 0U;
	int64_t x155 = 15690LL;
	uint64_t x156 = 147965874088634989LLU;
	static volatile int32_t t38 = -656331313;

    t38 = (x153+((x154/x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = 43;
	int16_t x158 = -1;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MAX;

    t39 = (x157+((x158/x159)==x160));

    if (t39 != 43) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static int8_t x162 = -1;
	int8_t x163 = -1;
	int32_t x164 = 303888;
	static int64_t t40 = 163892785549265LL;

    t40 = (x161+((x162/x163)==x164));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	static int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -3962;

    t41 = (x165+((x166/x167)==x168));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = -818209628;
	uint16_t x171 = 1U;
	volatile int64_t t42 = -711438560963LL;

    t42 = (x169+((x170/x171)==x172));

    if (t42 != 166433231008256373LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = -1;
	int16_t x174 = 228;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -1;

    t43 = (x173+((x174/x175)==x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	volatile uint8_t x182 = 0U;
	int64_t x183 = -2962LL;
	int32_t t44 = 440;

    t44 = (x181+((x182/x183)==x184));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x185 = 9U;
	int32_t x186 = INT32_MIN;

    t45 = (x185+((x186/x187)==x188));

    if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x191 = -15996LL;
	static int64_t x192 = 6966243052LL;

    t46 = (x189+((x190/x191)==x192));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x194 = 333U;
	int64_t x195 = -5535761802LL;
	volatile uint8_t x196 = 2U;
	int64_t t47 = INT64_MIN;

    t47 = (x193+((x194/x195)==x196));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	uint16_t x198 = 5304U;
	static int32_t x199 = -1;
	int64_t x200 = INT64_MIN;
	int32_t t48 = INT32_MIN;

    t48 = (x197+((x198/x199)==x200));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MIN;
	volatile int32_t x202 = INT32_MAX;
	static int16_t x204 = -1;
	volatile int32_t t49 = -6;

    t49 = (x201+((x202/x203)==x204));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x206 = -1;
	int32_t x207 = INT32_MAX;
	volatile uint8_t x208 = 30U;
	volatile uint32_t t50 = UINT32_MAX;

    t50 = (x205+((x206/x207)==x208));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x211 = -1LL;
	uint16_t x212 = 722U;
	int32_t t51 = -434496;

    t51 = (x209+((x210/x211)==x212));

    if (t51 != 381) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x214 = -23;
	int32_t x215 = 2222;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t52 = 606120054;

    t52 = (x213+((x214/x215)==x216));

    if (t52 != 5719) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int32_t x220 = -44;
	static int32_t t53 = 388;

    t53 = (x217+((x218/x219)==x220));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x221 = 28LLU;
	volatile int16_t x222 = 0;
	static int32_t x224 = -16488753;
	static uint64_t t54 = 79LLU;

    t54 = (x221+((x222/x223)==x224));

    if (t54 != 28LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x225 = UINT16_MAX;
	int64_t x226 = -1LL;
	int32_t x227 = -1;
	int16_t x228 = 1;
	static volatile int32_t t55 = -120;

    t55 = (x225+((x226/x227)==x228));

    if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MIN;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t56 = INT32_MAX;

    t56 = (x229+((x230/x231)==x232));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = -17;
	volatile int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t57 = -927034;

    t57 = (x233+((x234/x235)==x236));

    if (t57 != -17) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x237 = INT64_MIN;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = 3890904;
	int32_t x240 = -143424655;
	volatile int64_t t58 = INT64_MIN;

    t58 = (x237+((x238/x239)==x240));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x241 = 0U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = 27;
	volatile int32_t t59 = -26;

    t59 = (x241+((x242/x243)==x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = -1;
	int64_t x247 = INT64_MIN;
	volatile uint16_t x248 = 5U;
	static int32_t t60 = -31571;

    t60 = (x245+((x246/x247)==x248));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = -32;
	int64_t x251 = -45501397LL;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x249+((x250/x251)==x252));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x254 = -1LL;
	int32_t x255 = 4058;
	static int32_t t62 = -39670;

    t62 = (x253+((x254/x255)==x256));

    if (t62 != 52) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = -140;
	static uint16_t x258 = 7U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t63 = 5318;

    t63 = (x257+((x258/x259)==x260));

    if (t63 != -140) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = INT64_MAX;
	uint16_t x264 = 39U;
	volatile int64_t t64 = INT64_MAX;

    t64 = (x261+((x262/x263)==x264));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = UINT8_MAX;
	int16_t x268 = -1;
	volatile int32_t t65 = -1281;

    t65 = (x265+((x266/x267)==x268));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 3U;
	int32_t x272 = INT32_MAX;
	volatile int32_t t66 = INT32_MAX;

    t66 = (x269+((x270/x271)==x272));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x274 = 5U;
	static int32_t x275 = 86720380;
	int16_t x276 = INT16_MAX;
	int32_t t67 = 2043669;

    t67 = (x273+((x274/x275)==x276));

    if (t67 != 10140) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = UINT32_MAX;
	static uint32_t x279 = 9U;
	static uint8_t x280 = UINT8_MAX;
	uint32_t t68 = UINT32_MAX;

    t68 = (x277+((x278/x279)==x280));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 93LLU;

    t69 = (x281+((x282/x283)==x284));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x285 = INT64_MAX;
	int32_t x287 = -1;
	uint32_t x288 = 12U;
	int64_t t70 = INT64_MAX;

    t70 = (x285+((x286/x287)==x288));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x290 = -2174LL;
	uint32_t x291 = 691U;
	static uint8_t x292 = 31U;
	int32_t t71 = -944358;

    t71 = (x289+((x290/x291)==x292));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x294 = INT32_MIN;
	uint64_t x296 = 2286LLU;
	int32_t t72 = 38;

    t72 = (x293+((x294/x295)==x296));

    if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = 62;
	static int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 705825480U;
	volatile int32_t t73 = -781;

    t73 = (x297+((x298/x299)==x300));

    if (t73 != 62) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x301 = -1;
	uint64_t x303 = 69221110LLU;
	int64_t x304 = -1LL;

    t74 = (x301+((x302/x303)==x304));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x305 = INT32_MIN;
	uint16_t x306 = 1488U;
	int8_t x307 = INT8_MIN;
	int32_t x308 = -1;
	int32_t t75 = INT32_MIN;

    t75 = (x305+((x306/x307)==x308));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = -656441107495493576LL;
	volatile uint32_t x310 = 0U;
	int32_t x311 = 23;
	static uint8_t x312 = UINT8_MAX;
	int64_t t76 = -30052160539150348LL;

    t76 = (x309+((x310/x311)==x312));

    if (t76 != -656441107495493576LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = -1LL;
	uint16_t x314 = 63U;
	volatile int16_t x315 = INT16_MIN;
	static int8_t x316 = 3;
	int64_t t77 = 128912731814LL;

    t77 = (x313+((x314/x315)==x316));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x317 = INT16_MAX;
	uint32_t x318 = 1419U;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t78 = 1;

    t78 = (x317+((x318/x319)==x320));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	volatile int64_t x323 = INT64_MIN;
	int32_t t79 = INT32_MIN;

    t79 = (x321+((x322/x323)==x324));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x326 = INT8_MIN;
	static int8_t x327 = -11;
	int16_t x328 = -929;
	static volatile uint32_t t80 = 215U;

    t80 = (x325+((x326/x327)==x328));

    if (t80 != 2034976953U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = INT64_MIN;
	uint8_t x330 = 87U;
	uint32_t x331 = 1U;
	uint16_t x332 = 16U;
	int64_t t81 = INT64_MIN;

    t81 = (x329+((x330/x331)==x332));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;

    t82 = (x333+((x334/x335)==x336));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x338 = INT32_MAX;
	static uint64_t x339 = 991231863LLU;
	static int16_t x340 = -1;
	int32_t t83 = -329;

    t83 = (x337+((x338/x339)==x340));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x343 = -1;
	int64_t x344 = -1LL;
	volatile int32_t t84 = -5554533;

    t84 = (x341+((x342/x343)==x344));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x345 = 6U;
	static int16_t x346 = -1;
	int16_t x348 = INT16_MAX;
	volatile int32_t t85 = 1;

    t85 = (x345+((x346/x347)==x348));

    if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = -6;
	static uint64_t x352 = 0LLU;
	static volatile int32_t t86 = -462666;

    t86 = (x349+((x350/x351)==x352));

    if (t86 != -5) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x354 = -1LL;
	static volatile uint32_t x355 = 1801413330U;
	int32_t t87 = -256447;

    t87 = (x353+((x354/x355)==x356));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x359 = 129LLU;
	int16_t x360 = -204;
	static volatile int32_t t88 = INT32_MIN;

    t88 = (x357+((x358/x359)==x360));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x363 = 5U;
	int16_t x364 = -1;

    t89 = (x361+((x362/x363)==x364));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	uint8_t x366 = 29U;
	int8_t x367 = 18;
	int32_t x368 = -136410287;
	volatile int32_t t90 = INT32_MIN;

    t90 = (x365+((x366/x367)==x368));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x369 = INT64_MAX;
	int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = -1LL;
	volatile int64_t t91 = INT64_MAX;

    t91 = (x369+((x370/x371)==x372));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x373 = INT32_MIN;
	volatile int64_t x374 = -3972083008343360576LL;
	uint32_t x375 = 1028714U;

    t92 = (x373+((x374/x375)==x376));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = -1;
	static uint32_t x378 = 23U;
	static uint8_t x379 = 1U;
	static volatile uint64_t x380 = 7879860301LLU;
	static volatile int32_t t93 = 12;

    t93 = (x377+((x378/x379)==x380));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = 129947;
	volatile int32_t x384 = INT32_MAX;
	static volatile int32_t t94 = 501122666;

    t94 = (x381+((x382/x383)==x384));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = -1LL;
	int8_t x386 = 0;
	uint8_t x387 = 59U;
	volatile int64_t t95 = -10587414997449LL;

    t95 = (x385+((x386/x387)==x388));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x392 = -1LL;
	int32_t t96 = 172;

    t96 = (x389+((x390/x391)==x392));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x394 = 77U;
	int32_t x395 = -1;
	int16_t x396 = INT16_MAX;
	int32_t t97 = INT32_MAX;

    t97 = (x393+((x394/x395)==x396));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	static int16_t x398 = -1;
	static int32_t x399 = 918465;
	int32_t t98 = -893930;

    t98 = (x397+((x398/x399)==x400));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x401 = UINT16_MAX;
	int8_t x402 = 3;
	int64_t x403 = -1LL;
	static volatile int64_t x404 = INT64_MIN;

    t99 = (x401+((x402/x403)==x404));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x409 = 0;
	volatile int32_t x411 = -5197;
	volatile int32_t x412 = 1;
	int32_t t100 = 3;

    t100 = (x409+((x410/x411)==x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = INT8_MAX;
	int64_t x415 = 842LL;
	int32_t t101 = 2700;

    t101 = (x413+((x414/x415)==x416));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x417 = -1;
	int64_t x419 = -1LL;
	volatile int64_t x420 = INT64_MIN;
	int32_t t102 = -517766;

    t102 = (x417+((x418/x419)==x420));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = -2772335LL;
	uint16_t x422 = 5445U;
	static uint32_t x424 = 283255537U;
	volatile int64_t t103 = -271LL;

    t103 = (x421+((x422/x423)==x424));

    if (t103 != -2772335LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x426 = 1U;
	int8_t x427 = 2;
	int16_t x428 = INT16_MAX;
	volatile int32_t t104 = -340951;

    t104 = (x425+((x426/x427)==x428));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;

    t105 = (x429+((x430/x431)==x432));

    if (t105 != 7995) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x433 = 26507412U;
	uint64_t x434 = 38912877578639719LLU;
	static uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 4897278420331312LLU;
	volatile uint32_t t106 = 4730324U;

    t106 = (x433+((x434/x435)==x436));

    if (t106 != 26507412U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x437 = INT16_MIN;
	volatile int64_t x438 = INT64_MIN;
	int16_t x439 = -8468;
	int64_t x440 = INT64_MIN;
	static volatile int32_t t107 = 120738;

    t107 = (x437+((x438/x439)==x440));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x441 = 2U;
	volatile uint16_t x442 = 9325U;
	int8_t x444 = INT8_MIN;

    t108 = (x441+((x442/x443)==x444));

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = -1;
	static int16_t x446 = -1;
	static int32_t t109 = 0;

    t109 = (x445+((x446/x447)==x448));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x450 = -23236LL;
	int8_t x451 = INT8_MAX;
	uint16_t x452 = 12U;

    t110 = (x449+((x450/x451)==x452));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MAX;
	int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;
	volatile uint32_t t111 = UINT32_MAX;

    t111 = (x453+((x454/x455)==x456));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x461 = 3621U;
	uint32_t x462 = UINT32_MAX;
	static int64_t x463 = -1LL;
	int32_t x464 = -1;
	uint32_t t112 = 7374U;

    t112 = (x461+((x462/x463)==x464));

    if (t112 != 3621U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = INT8_MAX;
	volatile int64_t x466 = -1LL;
	volatile int64_t x467 = INT64_MAX;
	uint32_t x468 = 13274U;

    t113 = (x465+((x466/x467)==x468));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x469 = UINT32_MAX;
	int64_t x470 = -110948404LL;
	int16_t x471 = -1537;
	int32_t x472 = -22251;
	uint32_t t114 = UINT32_MAX;

    t114 = (x469+((x470/x471)==x472));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x474 = 50U;
	int16_t x476 = INT16_MAX;

    t115 = (x473+((x474/x475)==x476));

    if (t115 != 5) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x477 = -3332;
	int64_t x478 = 530478333632LL;
	static int64_t x480 = INT64_MIN;
	int32_t t116 = -59;

    t116 = (x477+((x478/x479)==x480));

    if (t116 != -3332) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x482 = 100;
	int8_t x484 = -1;
	volatile uint64_t t117 = 4151627822LLU;

    t117 = (x481+((x482/x483)==x484));

    if (t117 != 501LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x485 = -1262057LL;
	int16_t x486 = -1;
	int8_t x487 = INT8_MAX;
	static volatile int16_t x488 = INT16_MAX;
	int64_t t118 = -450932746536455349LL;

    t118 = (x485+((x486/x487)==x488));

    if (t118 != -1262057LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x490 = UINT16_MAX;
	volatile int32_t t119 = 27;

    t119 = (x489+((x490/x491)==x492));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x493 = UINT8_MAX;
	int64_t x494 = INT64_MIN;
	uint8_t x495 = UINT8_MAX;
	int32_t t120 = 3859;

    t120 = (x493+((x494/x495)==x496));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x498 = 37117890;
	static int8_t x499 = -1;
	uint64_t x500 = 36LLU;
	int32_t t121 = 633737337;

    t121 = (x497+((x498/x499)==x500));

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x506 = INT8_MIN;
	volatile uint8_t x507 = 98U;
	static int16_t x508 = -46;
	volatile int32_t t122 = -2850946;

    t122 = (x505+((x506/x507)==x508));

    if (t122 != -757838346) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x509 = INT8_MAX;
	uint64_t x510 = 144LLU;
	volatile int16_t x511 = 17;
	uint8_t x512 = 42U;
	int32_t t123 = -1480096;

    t123 = (x509+((x510/x511)==x512));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = 795;
	int16_t x515 = -1;
	int16_t x516 = INT16_MIN;
	static int32_t t124 = 5557;

    t124 = (x513+((x514/x515)==x516));

    if (t124 != 795) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x518 = INT32_MIN;
	int32_t x519 = -27368;
	static int8_t x520 = -1;
	volatile int32_t t125 = -214351;

    t125 = (x517+((x518/x519)==x520));

    if (t125 != 650) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x521 = 105U;
	int16_t x524 = 3;
	static uint32_t t126 = 14162U;

    t126 = (x521+((x522/x523)==x524));

    if (t126 != 105U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x530 = 14400U;
	static int8_t x531 = INT8_MAX;
	static volatile uint16_t x532 = 6U;
	volatile int32_t t127 = INT32_MAX;

    t127 = (x529+((x530/x531)==x532));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t128 = -187;

    t128 = (x533+((x534/x535)==x536));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x537 = INT8_MIN;
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 3262047U;

    t129 = (x537+((x538/x539)==x540));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x541 = INT8_MIN;
	int16_t x542 = -1;
	int8_t x543 = INT8_MIN;
	int32_t x544 = INT32_MIN;
	int32_t t130 = -86231922;

    t130 = (x541+((x542/x543)==x544));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = INT8_MIN;
	static int32_t x546 = INT32_MIN;
	int32_t t131 = 0;

    t131 = (x545+((x546/x547)==x548));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile uint8_t x550 = 47U;
	int32_t x551 = -1;
	uint16_t x552 = 2547U;

    t132 = (x549+((x550/x551)==x552));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x553 = 29031LLU;
	int32_t x554 = -335;
	volatile int16_t x555 = -1;
	static int32_t x556 = -1;

    t133 = (x553+((x554/x555)==x556));

    if (t133 != 29031LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x558 = 197U;
	int16_t x559 = 5577;
	static int64_t x560 = INT64_MIN;
	volatile int64_t t134 = INT64_MAX;

    t134 = (x557+((x558/x559)==x560));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MIN;
	static volatile int32_t x563 = INT32_MAX;
	int64_t x564 = 3547764LL;
	int32_t t135 = 6;

    t135 = (x561+((x562/x563)==x564));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x566 = INT16_MAX;
	volatile int64_t x568 = -1LL;
	volatile uint32_t t136 = 6654722U;

    t136 = (x565+((x566/x567)==x568));

    if (t136 != 285U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = INT8_MIN;
	volatile uint64_t x570 = 41121825LLU;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t137 = -6524;

    t137 = (x569+((x570/x571)==x572));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = INT64_MIN;
	static int32_t x574 = -1614;
	int8_t x576 = INT8_MIN;
	int64_t t138 = INT64_MIN;

    t138 = (x573+((x574/x575)==x576));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x577 = 8U;
	volatile uint64_t x578 = 90LLU;
	int32_t x579 = -294;
	static int32_t x580 = INT32_MAX;
	int32_t t139 = 2393842;

    t139 = (x577+((x578/x579)==x580));

    if (t139 != 8) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x581 = -1;
	static int64_t x582 = INT64_MIN;
	int64_t x583 = 68LL;
	volatile int16_t x584 = -1;
	volatile int32_t t140 = -30;

    t140 = (x581+((x582/x583)==x584));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x585 = UINT32_MAX;
	static uint8_t x586 = 1U;
	uint32_t x587 = 16451379U;
	int32_t x588 = INT32_MAX;
	volatile uint32_t t141 = UINT32_MAX;

    t141 = (x585+((x586/x587)==x588));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x589 = 61U;
	int32_t x590 = INT32_MIN;
	int64_t x592 = INT64_MIN;
	static uint32_t t142 = 876056103U;

    t142 = (x589+((x590/x591)==x592));

    if (t142 != 61U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MIN;
	static volatile int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	volatile int8_t x596 = INT8_MAX;
	static int64_t t143 = INT64_MIN;

    t143 = (x593+((x594/x595)==x596));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = -1;
	uint8_t x598 = 3U;
	static int32_t x599 = -1;
	static volatile int64_t x600 = -1216922LL;

    t144 = (x597+((x598/x599)==x600));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x604 = -42350;
	uint64_t t145 = UINT64_MAX;

    t145 = (x601+((x602/x603)==x604));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x611 = INT32_MIN;
	static int32_t x612 = -26747339;
	volatile int32_t t146 = -31;

    t146 = (x609+((x610/x611)==x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x614 = -935848693LL;
	volatile uint32_t x615 = 26864U;
	volatile int32_t t147 = 1;

    t147 = (x613+((x614/x615)==x616));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x617 = INT64_MIN;
	uint8_t x618 = UINT8_MAX;
	static int8_t x619 = -45;
	int64_t x620 = INT64_MAX;
	static volatile int64_t t148 = INT64_MIN;

    t148 = (x617+((x618/x619)==x620));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x622 = 60U;
	volatile int32_t x623 = INT32_MAX;
	uint64_t x624 = UINT64_MAX;
	int64_t t149 = INT64_MIN;

    t149 = (x621+((x622/x623)==x624));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x625 = 21;
	volatile int16_t x627 = INT16_MIN;
	int8_t x628 = INT8_MIN;
	static int32_t t150 = -2630487;

    t150 = (x625+((x626/x627)==x628));

    if (t150 != 21) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = 0;
	static int16_t x630 = 0;
	uint64_t x632 = 1622005284LLU;
	int32_t t151 = -3;

    t151 = (x629+((x630/x631)==x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x633 = 140U;
	volatile int64_t x634 = 28LL;
	volatile uint16_t x635 = 9U;
	volatile uint32_t t152 = 85452919U;

    t152 = (x633+((x634/x635)==x636));

    if (t152 != 140U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x637 = INT16_MIN;
	uint32_t x639 = 76U;
	uint16_t x640 = UINT16_MAX;

    t153 = (x637+((x638/x639)==x640));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x643 = 12;
	static uint64_t x644 = UINT64_MAX;
	int32_t t154 = 366685215;

    t154 = (x641+((x642/x643)==x644));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x645 = -1;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = 0;
	volatile int32_t t155 = 13776;

    t155 = (x645+((x646/x647)==x648));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x650 = -10298;
	int16_t x651 = INT16_MIN;
	volatile uint32_t x652 = 15358171U;
	static volatile int64_t t156 = INT64_MIN;

    t156 = (x649+((x650/x651)==x652));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x653 = 4410;
	static volatile int32_t t157 = 252936428;

    t157 = (x653+((x654/x655)==x656));

    if (t157 != 4410) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x657 = 118LLU;
	int8_t x658 = INT8_MIN;
	int64_t x659 = -1LL;
	static int64_t x660 = INT64_MIN;

    t158 = (x657+((x658/x659)==x660));

    if (t158 != 118LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = -1LL;
	uint32_t x666 = 41514087U;
	uint32_t x668 = 264994268U;
	volatile int64_t t159 = -707047926008506LL;

    t159 = (x665+((x666/x667)==x668));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x669 = 55U;
	uint32_t x670 = UINT32_MAX;
	int8_t x671 = INT8_MIN;
	static uint64_t x672 = UINT64_MAX;
	int32_t t160 = -7255012;

    t160 = (x669+((x670/x671)==x672));

    if (t160 != 55) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x673 = -1LL;
	volatile uint8_t x675 = 4U;
	static volatile int64_t x676 = INT64_MAX;
	volatile int64_t t161 = 5234896LL;

    t161 = (x673+((x674/x675)==x676));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x677 = INT16_MIN;
	uint32_t x680 = 535406692U;
	volatile int32_t t162 = -2534;

    t162 = (x677+((x678/x679)==x680));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MIN;
	volatile int64_t x684 = -1653521LL;
	int32_t t163 = 0;

    t163 = (x681+((x682/x683)==x684));

    if (t163 != 6654003) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x685 = 3;
	static int32_t x686 = INT32_MIN;
	int64_t x687 = -803783139LL;
	volatile int8_t x688 = -1;
	int32_t t164 = 6514167;

    t164 = (x685+((x686/x687)==x688));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x690 = INT16_MIN;
	volatile uint32_t x691 = 31U;
	static int32_t x692 = INT32_MAX;
	volatile uint32_t t165 = 349U;

    t165 = (x689+((x690/x691)==x692));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x694 = 133627736;
	volatile int64_t t166 = INT64_MAX;

    t166 = (x693+((x694/x695)==x696));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = 4;
	int8_t x698 = INT8_MIN;
	int16_t x700 = -1;

    t167 = (x697+((x698/x699)==x700));

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x701 = 1U;
	uint64_t x702 = 502479772LLU;
	int16_t x703 = INT16_MIN;
	volatile int8_t x704 = -52;
	static volatile uint32_t t168 = 23152677U;

    t168 = (x701+((x702/x703)==x704));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = -1273LL;
	static int8_t x708 = INT8_MAX;
	int64_t t169 = 47181016LL;

    t169 = (x705+((x706/x707)==x708));

    if (t169 != -1273LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x709 = 54U;
	volatile int64_t x710 = 2133590178409LL;
	volatile int8_t x711 = INT8_MIN;
	uint32_t x712 = 165569U;
	volatile int32_t t170 = 34794334;

    t170 = (x709+((x710/x711)==x712));

    if (t170 != 54) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x713 = 579U;
	uint8_t x714 = 0U;
	int16_t x715 = INT16_MIN;
	static uint8_t x716 = 100U;
	static int32_t t171 = 2;

    t171 = (x713+((x714/x715)==x716));

    if (t171 != 579) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x717 = 192LLU;
	uint16_t x718 = UINT16_MAX;
	uint64_t x719 = 2517797117628LLU;
	static uint32_t x720 = UINT32_MAX;

    t172 = (x717+((x718/x719)==x720));

    if (t172 != 192LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = UINT8_MAX;
	uint8_t x722 = 7U;
	int64_t x723 = INT64_MIN;
	int32_t t173 = 1;

    t173 = (x721+((x722/x723)==x724));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MIN;
	int8_t x731 = INT8_MAX;
	int64_t x732 = INT64_MIN;
	int32_t t174 = 2392;

    t174 = (x729+((x730/x731)==x732));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x733 = 4484839U;
	uint8_t x735 = 42U;
	uint32_t t175 = 4U;

    t175 = (x733+((x734/x735)==x736));

    if (t175 != 4484839U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x738 = -21;
	int16_t x739 = INT16_MIN;
	int32_t x740 = -1;
	volatile int32_t t176 = -463803;

    t176 = (x737+((x738/x739)==x740));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x742 = INT64_MIN;
	uint16_t x744 = 714U;
	int32_t t177 = 16;

    t177 = (x741+((x742/x743)==x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x748 = 10265332LL;
	volatile int32_t t178 = -6;

    t178 = (x745+((x746/x747)==x748));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 1U;
	static int32_t x750 = -1;
	volatile int32_t x751 = INT32_MIN;
	volatile int32_t x752 = INT32_MIN;
	volatile int32_t t179 = 5825;

    t179 = (x749+((x750/x751)==x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x753 = INT16_MIN;
	static int8_t x754 = 45;
	int8_t x755 = -1;
	volatile int16_t x756 = INT16_MIN;

    t180 = (x753+((x754/x755)==x756));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x757 = 1U;
	int8_t x758 = INT8_MIN;
	static int64_t x759 = -30677138LL;
	int8_t x760 = -11;
	int32_t t181 = 109515;

    t181 = (x757+((x758/x759)==x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = 6747035753717LL;
	static uint16_t x763 = UINT16_MAX;
	int64_t x764 = INT64_MIN;
	volatile int32_t t182 = 11;

    t182 = (x761+((x762/x763)==x764));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x765 = 1LLU;
	volatile int64_t x766 = -1793416LL;
	int8_t x768 = 1;
	uint64_t t183 = 287LLU;

    t183 = (x765+((x766/x767)==x768));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x770 = INT8_MIN;
	static uint64_t x771 = 2LLU;
	uint64_t x772 = UINT64_MAX;

    t184 = (x769+((x770/x771)==x772));

    if (t184 != 56200) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = INT64_MIN;
	static int32_t x774 = INT32_MIN;
	static int8_t x775 = -27;
	static int16_t x776 = -1;
	static volatile int64_t t185 = INT64_MIN;

    t185 = (x773+((x774/x775)==x776));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x777 = 8;
	int32_t x778 = 11777;
	static uint32_t x780 = UINT32_MAX;
	int32_t t186 = -910;

    t186 = (x777+((x778/x779)==x780));

    if (t186 != 8) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x786 = -1LL;
	int32_t x787 = 211;

    t187 = (x785+((x786/x787)==x788));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x789 = INT16_MAX;
	int64_t x790 = INT64_MIN;
	int32_t x791 = INT32_MIN;
	static volatile int32_t t188 = 7103428;

    t188 = (x789+((x790/x791)==x792));

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x794 = INT8_MIN;
	static volatile int16_t x795 = -1;
	uint32_t x796 = UINT32_MAX;
	int64_t t189 = -652775606LL;

    t189 = (x793+((x794/x795)==x796));

    if (t189 != -7275457870LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x797 = 2;
	int16_t x798 = -5385;
	volatile uint32_t x800 = 99542614U;
	volatile int32_t t190 = 9246224;

    t190 = (x797+((x798/x799)==x800));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x801 = 9194LLU;
	static uint8_t x803 = 30U;
	uint8_t x804 = 119U;
	volatile uint64_t t191 = 1911LLU;

    t191 = (x801+((x802/x803)==x804));

    if (t191 != 9194LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x805 = INT32_MAX;
	int32_t x806 = INT32_MAX;
	int64_t x807 = 40251212374LL;
	uint64_t x808 = 842357780162514659LLU;
	int32_t t192 = INT32_MAX;

    t192 = (x805+((x806/x807)==x808));

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x810 = INT8_MIN;
	uint64_t x811 = 2058283010261610727LLU;
	int64_t x812 = 123852026170828LL;
	int32_t t193 = -57955;

    t193 = (x809+((x810/x811)==x812));

    if (t193 != -1862) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x813 = 4454;
	int16_t x814 = INT16_MIN;
	uint16_t x815 = 203U;
	int64_t x816 = INT64_MAX;
	volatile int32_t t194 = -172780;

    t194 = (x813+((x814/x815)==x816));

    if (t194 != 4454) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x817 = UINT16_MAX;
	int16_t x818 = INT16_MIN;
	volatile uint32_t x819 = UINT32_MAX;
	int64_t x820 = -1LL;
	int32_t t195 = 16;

    t195 = (x817+((x818/x819)==x820));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x822 = INT16_MIN;
	int32_t x824 = INT32_MAX;
	static int32_t t196 = INT32_MIN;

    t196 = (x821+((x822/x823)==x824));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x825 = UINT32_MAX;
	uint64_t x827 = 252LLU;
	int64_t x828 = -3664418692LL;

    t197 = (x825+((x826/x827)==x828));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x829 = -4;
	volatile uint64_t x830 = 4069LLU;
	static int64_t x831 = 61711LL;
	uint64_t x832 = 48089890042455016LLU;
	volatile int32_t t198 = 1;

    t198 = (x829+((x830/x831)==x832));

    if (t198 != -4) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x833 = INT16_MIN;
	uint16_t x834 = 0U;
	int64_t x835 = -1LL;
	uint32_t x836 = 242U;
	volatile int32_t t199 = -5291189;

    t199 = (x833+((x834/x835)==x836));

    if (t199 != -32768) { NG(); } else { ; }
	
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

