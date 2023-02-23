
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

static int32_t x4 = INT32_MIN;
uint32_t x7 = 7816U;
int32_t x8 = -1;
int16_t x34 = -48;
uint32_t x36 = 2047U;
int16_t x48 = INT16_MIN;
static volatile int8_t x58 = INT8_MAX;
int64_t x59 = INT64_MIN;
volatile int32_t t15 = 7881000;
static volatile int64_t t16 = 2LL;
int8_t x71 = INT8_MIN;
volatile int64_t x78 = 76497064736LL;
volatile int64_t x79 = INT64_MIN;
int32_t x81 = INT32_MAX;
uint8_t x83 = UINT8_MAX;
int16_t x85 = INT16_MIN;
int16_t x91 = -1;
static volatile uint32_t t23 = 169U;
int16_t x99 = -1;
static int16_t x100 = INT16_MIN;
volatile int32_t t24 = -16759096;
static int64_t x103 = INT64_MIN;
uint8_t x107 = 25U;
volatile uint32_t x109 = 6205U;
static int32_t x110 = -100409;
uint16_t x112 = 42U;
uint32_t t27 = 739460U;
int16_t x116 = INT16_MIN;
static uint8_t x117 = 11U;
int8_t x120 = INT8_MIN;
static volatile int32_t t29 = -16283;
static int64_t x123 = -1LL;
volatile int64_t t30 = 4260318215216557916LL;
int32_t t31 = -126342908;
uint32_t x130 = 2022929U;
int8_t x136 = INT8_MIN;
int64_t x138 = -1LL;
volatile int32_t t34 = 783;
int64_t t35 = -4668709LL;
volatile int32_t t36 = 49;
static int64_t t37 = 4350443254042859199LL;
static int64_t x153 = 65LL;
int64_t t38 = 18757349LL;
static uint64_t x160 = 3781704307LLU;
uint8_t x168 = UINT8_MAX;
volatile int32_t t41 = 14427224;
volatile int8_t x169 = INT8_MIN;
int8_t x172 = -5;
int32_t x181 = -8022842;
int32_t x183 = INT32_MIN;
int32_t x185 = 2788716;
uint32_t x187 = UINT32_MAX;
int8_t x191 = INT8_MIN;
int32_t x199 = INT32_MAX;
volatile int32_t x208 = -7421625;
int8_t x210 = INT8_MIN;
static int16_t x213 = -1;
static int16_t x219 = -2527;
uint8_t x222 = 4U;
static uint32_t x223 = 47549486U;
static volatile int16_t x230 = -1;
volatile int64_t x240 = INT64_MAX;
volatile uint32_t t61 = 46030U;
volatile uint8_t x250 = 50U;
int32_t x254 = -1;
int8_t x259 = INT8_MIN;
uint8_t x264 = 5U;
int64_t x267 = INT64_MIN;
uint64_t x271 = 112069373LLU;
static uint16_t x278 = 91U;
uint16_t x280 = 2825U;
volatile int8_t x288 = INT8_MIN;
int8_t x289 = 0;
static int32_t t72 = 32262445;
int16_t x293 = INT16_MIN;
volatile uint16_t x301 = UINT16_MAX;
int64_t x311 = INT64_MAX;
static uint64_t x312 = 203296199833551093LLU;
int16_t x316 = INT16_MAX;
static uint32_t t80 = 82025U;
volatile uint64_t t81 = 155743632LLU;
volatile int8_t x332 = -1;
static int32_t t82 = 1;
int64_t x336 = -4866404LL;
int16_t x337 = 471;
uint64_t x338 = UINT64_MAX;
volatile int32_t t84 = -355;
static int64_t x341 = INT64_MIN;
int64_t t85 = -89524329LL;
static int32_t t86 = -954169;
static volatile uint8_t x354 = 4U;
int64_t x360 = INT64_MIN;
int32_t x366 = INT32_MIN;
int32_t x367 = INT32_MAX;
static uint64_t x368 = 308122LLU;
int32_t t94 = -449;
int32_t x394 = -1;
static volatile int64_t x396 = INT64_MIN;
int64_t x403 = -697194964LL;
uint32_t t100 = 466U;
int32_t t101 = -896462605;
int32_t x409 = -1;
volatile int32_t t102 = 121385;
int8_t x423 = INT8_MIN;
int32_t x427 = 204165785;
int8_t x428 = INT8_MIN;
int64_t x431 = INT64_MIN;
static volatile uint16_t x445 = 3U;
uint32_t x450 = UINT32_MAX;
static volatile int8_t x453 = -60;
int16_t x454 = 4;
uint8_t x463 = 2U;
int64_t x464 = INT64_MIN;
int64_t x465 = INT64_MIN;
static int16_t x466 = -22;
int8_t x467 = 26;
int64_t x471 = -71721053421957548LL;
volatile int32_t t117 = -62;
volatile uint8_t x476 = 37U;
static uint32_t x479 = 171U;
int32_t x480 = 597;
uint8_t x487 = UINT8_MAX;
int32_t t122 = -10;
static int32_t x496 = 1;
int32_t x499 = INT32_MIN;
static volatile int32_t x500 = -1;
static uint8_t x508 = UINT8_MAX;
static volatile int32_t t126 = 24400526;
static int64_t x511 = INT64_MIN;
volatile uint64_t x512 = 107030110LLU;
uint32_t x524 = 39813U;
static volatile uint32_t t132 = 1317U;
volatile int16_t x536 = INT16_MIN;
volatile int32_t t133 = -609;
uint16_t x541 = UINT16_MAX;
int32_t x549 = -1;
static volatile int32_t t137 = -145;
int16_t x555 = INT16_MIN;
uint64_t x556 = 753555120226950LLU;
static int8_t x559 = 30;
volatile uint16_t x564 = UINT16_MAX;
uint64_t x565 = 41828284779089LLU;
int32_t x568 = -227130;
int16_t x571 = INT16_MAX;
volatile uint32_t x580 = 521481675U;
int16_t x584 = -1;
volatile int32_t t145 = -1609;
volatile int8_t x598 = INT8_MAX;
volatile int64_t x603 = -366921LL;
static volatile uint32_t x609 = 0U;
int32_t t153 = 1763690;
uint64_t x632 = 1520395LLU;
volatile int8_t x640 = 40;
int16_t x644 = INT16_MIN;
int16_t x655 = INT16_MIN;
uint8_t x666 = UINT8_MAX;
uint8_t x670 = 62U;
int32_t x671 = INT32_MIN;
int16_t x675 = INT16_MIN;
volatile int64_t x689 = -1LL;
int32_t x690 = 87;
uint16_t x696 = 2U;
int32_t x698 = -686413;
int32_t x702 = INT32_MIN;
volatile int32_t x704 = INT32_MIN;
uint32_t x710 = 1714012U;
int8_t x712 = INT8_MIN;
volatile uint32_t t179 = 812U;
int16_t x733 = INT16_MAX;
volatile int32_t t183 = 102361860;
uint32_t x739 = UINT32_MAX;
int64_t x748 = INT64_MAX;
volatile int32_t t186 = 257491914;
uint16_t x751 = 649U;
int32_t x753 = -5;
int32_t t188 = -24;
int32_t x758 = -1;
static int64_t x759 = -219447441176999LL;
int8_t x760 = INT8_MIN;
int32_t t189 = 18586435;
uint32_t x766 = UINT32_MAX;
int64_t x778 = INT64_MIN;
int16_t x783 = -1;
int32_t x785 = INT32_MIN;
int8_t x787 = 1;
volatile int8_t x793 = -1;
int32_t t198 = 191;
volatile uint64_t x797 = UINT64_MAX;
volatile uint64_t t199 = 1333368LLU;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	static int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MIN;
	static volatile int64_t t0 = 73209140691LL;

    t0 = (x1*((x2==x3)==x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 59U;
	int8_t x6 = -1;
	static volatile int32_t t1 = 1557;

    t1 = (x5*((x6==x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 27U;
	int64_t x10 = 20140LL;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 441;

    t2 = (x9*((x10==x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 242;
	int8_t x14 = -1;
	volatile uint8_t x15 = 4U;
	uint32_t x16 = UINT32_MAX;
	static volatile int32_t t3 = -186;

    t3 = (x13*((x14==x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = 1;
	int64_t x18 = -1LL;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = 1;
	int32_t t4 = 1568309;

    t4 = (x17*((x18==x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MAX;
	static int16_t x22 = 4;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -927099;

    t5 = (x21*((x22==x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 25U;
	int64_t x26 = -1LL;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = 155517984;

    t6 = (x25*((x26==x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 52U;
	volatile int32_t x30 = 656;
	uint8_t x31 = 2U;
	int16_t x32 = 18;
	int32_t t7 = 2;

    t7 = (x29*((x30==x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	volatile int16_t x35 = INT16_MAX;
	static int32_t t8 = -2;

    t8 = (x33*((x34==x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MAX;
	uint32_t x39 = 213130348U;
	int16_t x40 = -42;
	int64_t t9 = -779367292538LL;

    t9 = (x37*((x38==x39)==x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = INT32_MIN;
	uint32_t x42 = 4718U;
	static int16_t x43 = INT16_MIN;
	uint64_t x44 = 14475195390811LLU;
	volatile int32_t t10 = 10477;

    t10 = (x41*((x42==x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	static int8_t x46 = -1;
	static int8_t x47 = INT8_MAX;
	static volatile int32_t t11 = 1;

    t11 = (x45*((x46==x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 1348U;
	int32_t x52 = -1;
	static volatile int64_t t12 = -6467378638216LL;

    t12 = (x49*((x50==x51)==x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	static volatile int32_t x54 = INT32_MAX;
	int16_t x55 = 57;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -3;

    t13 = (x53*((x54==x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 1066981184;

    t14 = (x57*((x58==x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	volatile int8_t x62 = 35;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;

    t15 = (x61*((x62==x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 1LL;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = 12151636712902165LLU;
	uint32_t x68 = 48468465U;

    t16 = (x65*((x66==x67)==x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 42938763754757LLU;
	static uint8_t x70 = 32U;
	int64_t x72 = -195198787912123609LL;
	static volatile uint64_t t17 = 370989LLU;

    t17 = (x69*((x70==x71)==x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -3964;
	uint8_t x74 = 84U;
	static int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MIN;
	static int32_t t18 = -60;

    t18 = (x73*((x74==x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	uint32_t x80 = UINT32_MAX;
	int64_t t19 = -105728918664617968LL;

    t19 = (x77*((x78==x79)==x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x82 = -1;
	static int8_t x84 = -17;
	volatile int32_t t20 = 2066;

    t20 = (x81*((x82==x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -1LL;
	volatile int32_t t21 = -170;

    t21 = (x85*((x86==x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	volatile int16_t x90 = -708;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = 233191572;

    t22 = (x89*((x90==x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = 0U;
	int16_t x96 = -1;

    t23 = (x93*((x94==x95)==x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	int64_t x98 = -1LL;

    t24 = (x97*((x98==x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 20913U;
	uint32_t x102 = 3473U;
	uint64_t x104 = 3502471LLU;
	int32_t t25 = 10;

    t25 = (x101*((x102==x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	volatile uint64_t x106 = 146873LLU;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -2711305;

    t26 = (x105*((x106==x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = 215030579;

    t27 = (x109*((x110==x111)==x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	static volatile int64_t x114 = 226310876198LL;
	static uint8_t x115 = UINT8_MAX;
	volatile int32_t t28 = -891621;

    t28 = (x113*((x114==x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x118 = UINT64_MAX;
	static int16_t x119 = 13;

    t29 = (x117*((x118==x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 10497LL;
	int16_t x122 = -1;
	int16_t x124 = INT16_MAX;

    t30 = (x121*((x122==x123)==x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 4244U;
	int8_t x126 = 3;
	int64_t x127 = INT64_MIN;
	static volatile int64_t x128 = -212234299LL;

    t31 = (x125*((x126==x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x129 = 148429187U;
	uint64_t x131 = 151977428LLU;
	uint64_t x132 = UINT64_MAX;
	uint32_t t32 = 539U;

    t32 = (x129*((x130==x131)==x132));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MIN;
	volatile int64_t x134 = -318LL;
	int16_t x135 = INT16_MAX;
	static volatile int32_t t33 = 48;

    t33 = (x133*((x134==x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int8_t x139 = 6;
	int64_t x140 = INT64_MIN;

    t34 = (x137*((x138==x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;

    t35 = (x141*((x142==x143)==x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MIN;
	int8_t x146 = 3;
	int64_t x147 = INT64_MIN;
	volatile int64_t x148 = -1433408944350206130LL;

    t36 = (x145*((x146==x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	uint64_t x150 = 42493084513714LLU;
	uint64_t x151 = 19703955120570900LLU;
	int16_t x152 = 793;

    t37 = (x149*((x150==x151)==x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 0;
	static uint16_t x155 = 97U;
	int8_t x156 = -1;

    t38 = (x153*((x154==x155)==x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = -14;
	static volatile uint32_t x159 = UINT32_MAX;
	int32_t t39 = -6;

    t39 = (x157*((x158==x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	static uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -380;

    t40 = (x161*((x162==x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 53;
	int16_t x166 = INT16_MIN;
	volatile int64_t x167 = INT64_MIN;

    t41 = (x165*((x166==x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = INT8_MAX;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t42 = 73;

    t42 = (x169*((x170==x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	static int64_t x174 = INT64_MAX;
	int8_t x175 = -20;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 3;

    t43 = (x173*((x174==x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 11024LLU;
	volatile int64_t x178 = INT64_MIN;
	volatile int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	static volatile uint64_t t44 = 263137340731821667LLU;

    t44 = (x177*((x178==x179)==x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x182 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = 965826027;

    t45 = (x181*((x182==x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x186 = 0U;
	int16_t x188 = -4;
	static int32_t t46 = -18;

    t46 = (x185*((x186==x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 7829412493247LLU;
	volatile int8_t x190 = INT8_MIN;
	static int32_t x192 = -1;
	volatile uint64_t t47 = 2212LLU;

    t47 = (x189*((x190==x191)==x192));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	volatile int8_t x196 = INT8_MIN;
	volatile int64_t t48 = 126401245893LL;

    t48 = (x193*((x194==x195)==x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 5U;
	volatile int32_t x198 = 240000893;
	int16_t x200 = -1;
	int32_t t49 = -509484;

    t49 = (x197*((x198==x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	static volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = -681;
	int32_t t50 = 20332;

    t50 = (x201*((x202==x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 3840575U;
	uint64_t x206 = 24LLU;
	int32_t x207 = INT32_MAX;
	static uint32_t t51 = 2U;

    t51 = (x205*((x206==x207)==x208));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x209 = 2U;
	int64_t x211 = INT64_MIN;
	int64_t x212 = -1LL;
	int32_t t52 = -20;

    t52 = (x209*((x210==x211)==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = -1LL;
	uint64_t x215 = 70867446157808LLU;
	volatile uint8_t x216 = 1U;
	int32_t t53 = 43058537;

    t53 = (x213*((x214==x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = INT16_MAX;
	static int8_t x218 = INT8_MIN;
	static uint32_t x220 = 304335U;
	int32_t t54 = 6507249;

    t54 = (x217*((x218==x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x224 = -1;
	volatile int32_t t55 = -49055;

    t55 = (x221*((x222==x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = UINT64_MAX;
	volatile int32_t x226 = 553;
	volatile int64_t x227 = INT64_MAX;
	volatile uint8_t x228 = 90U;
	uint64_t t56 = 116811947141LLU;

    t56 = (x225*((x226==x227)==x228));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x229 = INT16_MAX;
	static int16_t x231 = 1059;
	static int64_t x232 = INT64_MIN;
	int32_t t57 = 308443;

    t57 = (x229*((x230==x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -12;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = 3306956361233486LLU;
	int32_t x236 = -1;
	static int32_t t58 = 3;

    t58 = (x233*((x234==x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x237 = 0LLU;
	int32_t x238 = INT32_MIN;
	static int64_t x239 = INT64_MAX;
	static volatile uint64_t t59 = 47761209LLU;

    t59 = (x237*((x238==x239)==x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	int16_t x242 = -293;
	int8_t x243 = 0;
	int8_t x244 = -1;
	static volatile int32_t t60 = 2;

    t60 = (x241*((x242==x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 433572250U;
	int8_t x246 = INT8_MAX;
	volatile uint64_t x247 = 0LLU;
	int16_t x248 = INT16_MAX;

    t61 = (x245*((x246==x247)==x248));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 25;
	int32_t x251 = INT32_MIN;
	static int32_t x252 = INT32_MAX;
	int32_t t62 = 1418879;

    t62 = (x249*((x250==x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	int32_t x255 = INT32_MAX;
	int64_t x256 = -1LL;
	int32_t t63 = -1;

    t63 = (x253*((x254==x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = 117;
	uint64_t x258 = UINT64_MAX;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 197;

    t64 = (x257*((x258==x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MAX;
	static uint8_t x262 = 1U;
	int64_t x263 = -1LL;
	int32_t t65 = -3752;

    t65 = (x261*((x262==x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = -1;
	uint16_t x266 = 567U;
	int64_t x268 = 1839645148713478LL;
	static volatile int32_t t66 = -37797446;

    t66 = (x265*((x266==x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	volatile int32_t x272 = -15468;
	volatile int32_t t67 = 150073956;

    t67 = (x269*((x270==x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = 2U;
	int64_t x274 = -1LL;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MAX;
	int32_t t68 = 822;

    t68 = (x273*((x274==x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MAX;
	int32_t x279 = INT32_MAX;
	volatile int64_t t69 = 99471302LL;

    t69 = (x277*((x278==x279)==x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MIN;
	static volatile uint8_t x282 = 5U;
	uint8_t x283 = UINT8_MAX;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t70 = 3060830666034952927LL;

    t70 = (x281*((x282==x283)==x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int32_t x286 = -66415998;
	int64_t x287 = INT64_MIN;
	volatile int32_t t71 = -51;

    t71 = (x285*((x286==x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x290 = 1055705278U;
	int32_t x291 = 22;
	uint64_t x292 = 58810LLU;

    t72 = (x289*((x290==x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = UINT32_MAX;
	static uint64_t x295 = 3388LLU;
	volatile int16_t x296 = -1;
	int32_t t73 = 223117;

    t73 = (x293*((x294==x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 1U;
	int32_t x298 = INT32_MAX;
	volatile uint8_t x299 = 7U;
	static int8_t x300 = -1;
	static int32_t t74 = 1798;

    t74 = (x297*((x298==x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = -1;
	uint8_t x303 = 0U;
	int32_t x304 = INT32_MIN;
	static int32_t t75 = 17259;

    t75 = (x301*((x302==x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = UINT16_MAX;
	int32_t x306 = -197;
	int8_t x307 = INT8_MIN;
	int64_t x308 = 2230450583317845LL;
	volatile int32_t t76 = -372742347;

    t76 = (x305*((x306==x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = 0;
	volatile int8_t x310 = -9;
	static int32_t t77 = -12957353;

    t77 = (x309*((x310==x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MAX;
	int32_t x314 = -2;
	volatile int8_t x315 = INT8_MIN;
	int64_t t78 = 60425633888LL;

    t78 = (x313*((x314==x315)==x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 28785U;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t79 = 927379456;

    t79 = (x317*((x318==x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 93U;
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = INT64_MIN;
	static int64_t x324 = -28041LL;

    t80 = (x321*((x322==x323)==x324));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 140U;
	int64_t x327 = 13914LL;
	int32_t x328 = INT32_MIN;

    t81 = (x325*((x326==x327)==x328));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;

    t82 = (x329*((x330==x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 114U;
	static int16_t x334 = INT16_MAX;
	int16_t x335 = 552;
	static volatile int32_t t83 = -1042403;

    t83 = (x333*((x334==x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x339 = 36U;
	volatile int8_t x340 = -1;

    t84 = (x337*((x338==x339)==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = 515963576;
	int64_t x343 = -12348312866002LL;
	int32_t x344 = INT32_MIN;

    t85 = (x341*((x342==x343)==x344));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	volatile int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MIN;

    t86 = (x345*((x346==x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	int8_t x350 = -12;
	uint16_t x351 = 3U;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 5576;

    t87 = (x349*((x350==x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -322733;

    t88 = (x353*((x354==x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = 1;
	static int64_t x358 = -144770045921LL;
	static int64_t x359 = -1LL;
	volatile int32_t t89 = -120386;

    t89 = (x357*((x358==x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 519141316LLU;
	static int8_t x362 = INT8_MIN;
	uint64_t x363 = 640968067840LLU;
	volatile int64_t x364 = 27LL;
	uint64_t t90 = 7924662109962537LLU;

    t90 = (x361*((x362==x363)==x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	static int64_t t91 = 7007543LL;

    t91 = (x365*((x366==x367)==x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 160962264U;
	int32_t x372 = INT32_MIN;
	volatile int64_t t92 = -6419589391969547LL;

    t92 = (x369*((x370==x371)==x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 709U;
	int32_t x374 = 1;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t93 = 29;

    t93 = (x373*((x374==x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	static int64_t x378 = INT64_MAX;
	int16_t x379 = 0;
	static int64_t x380 = 19395973LL;

    t94 = (x377*((x378==x379)==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x381 = 5171738U;
	int8_t x382 = INT8_MIN;
	static int16_t x383 = 1;
	int8_t x384 = INT8_MIN;
	volatile uint32_t t95 = 542U;

    t95 = (x381*((x382==x383)==x384));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 19U;
	int16_t x386 = INT16_MAX;
	uint64_t x387 = 16193069LLU;
	volatile uint64_t x388 = UINT64_MAX;
	int32_t t96 = 46573810;

    t96 = (x385*((x386==x387)==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 406LLU;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 2291U;
	int32_t x392 = 54941;
	uint64_t t97 = 205164583681962LLU;

    t97 = (x389*((x390==x391)==x392));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -1;
	volatile uint32_t x395 = 767935U;
	volatile int32_t t98 = 1178;

    t98 = (x393*((x394==x395)==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MAX;
	volatile int8_t x398 = -1;
	volatile int32_t x399 = -120432185;
	static int32_t x400 = 230;
	volatile int32_t t99 = -27;

    t99 = (x397*((x398==x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 805755U;
	static int64_t x402 = -1LL;
	int8_t x404 = INT8_MAX;

    t100 = (x401*((x402==x403)==x404));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = 9013U;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = 1061047759LLU;
	static int64_t x408 = 0LL;

    t101 = (x405*((x406==x407)==x408));

    if (t101 != 9013) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = 471087187;
	uint64_t x411 = 1039069961990LLU;
	int16_t x412 = -1;

    t102 = (x409*((x410==x411)==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = 102;
	volatile int8_t x414 = INT8_MIN;
	static int64_t x415 = INT64_MIN;
	static uint8_t x416 = 6U;
	volatile int32_t t103 = 1499;

    t103 = (x413*((x414==x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	int16_t x419 = -462;
	volatile uint32_t x420 = 7576144U;
	int32_t t104 = 18972;

    t104 = (x417*((x418==x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = -1027;
	int64_t x422 = INT64_MIN;
	uint32_t x424 = 21710U;
	volatile int32_t t105 = 14309;

    t105 = (x421*((x422==x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = -1LL;
	uint32_t x426 = UINT32_MAX;
	volatile int64_t t106 = -1981061LL;

    t106 = (x425*((x426==x427)==x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MAX;
	volatile int16_t x430 = INT16_MAX;
	volatile int64_t x432 = -1LL;
	int64_t t107 = 352814027541888LL;

    t107 = (x429*((x430==x431)==x432));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1353;
	int32_t x434 = -13131402;
	volatile int8_t x435 = INT8_MIN;
	static volatile uint8_t x436 = UINT8_MAX;
	volatile int32_t t108 = -412;

    t108 = (x433*((x434==x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 31;
	static int8_t x438 = 1;
	volatile int32_t x439 = -7387;
	int8_t x440 = INT8_MAX;
	int32_t t109 = 0;

    t109 = (x437*((x438==x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 15U;
	volatile int64_t x444 = INT64_MIN;
	int32_t t110 = -213905579;

    t110 = (x441*((x442==x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = 7534466946879102LL;
	int64_t x447 = INT64_MIN;
	int16_t x448 = -182;
	static volatile int32_t t111 = -19180;

    t111 = (x445*((x446==x447)==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = 3U;
	int8_t x451 = INT8_MAX;
	uint32_t x452 = 1465U;
	int32_t t112 = -4506670;

    t112 = (x449*((x450==x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x455 = -64423;
	int32_t x456 = -1;
	static volatile int32_t t113 = -13225;

    t113 = (x453*((x454==x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	volatile uint8_t x458 = 0U;
	int16_t x459 = INT16_MIN;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 602965;

    t114 = (x457*((x458==x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 17U;
	uint8_t x462 = UINT8_MAX;
	int32_t t115 = 85718694;

    t115 = (x461*((x462==x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x468 = -1;
	int64_t t116 = -9082803276413LL;

    t116 = (x465*((x466==x467)==x468));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = 5;
	uint8_t x470 = 19U;
	volatile int8_t x472 = 1;

    t117 = (x469*((x470==x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x473 = 1414U;
	int64_t x474 = 197695819LL;
	volatile int16_t x475 = INT16_MAX;
	volatile int32_t t118 = -1;

    t118 = (x473*((x474==x475)==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -383403;
	static volatile int8_t x478 = INT8_MIN;
	volatile int32_t t119 = 1317545;

    t119 = (x477*((x478==x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 1U;
	static volatile int16_t x482 = -1;
	int8_t x483 = INT8_MIN;
	int16_t x484 = -1;
	int32_t t120 = 0;

    t120 = (x481*((x482==x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MAX;
	volatile int16_t x488 = -1;
	volatile int32_t t121 = -16110;

    t121 = (x485*((x486==x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = 32;
	volatile int8_t x490 = INT8_MIN;
	int64_t x491 = -1LL;
	static int8_t x492 = INT8_MIN;

    t122 = (x489*((x490==x491)==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = 119;
	static int8_t x495 = 9;
	int32_t t123 = -1034;

    t123 = (x493*((x494==x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x497 = -872154141;
	int32_t x498 = INT32_MIN;
	int32_t t124 = 72683274;

    t124 = (x497*((x498==x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 0U;
	uint16_t x502 = 6695U;
	volatile int8_t x503 = 0;
	int8_t x504 = INT8_MAX;
	volatile int32_t t125 = -127530;

    t125 = (x501*((x502==x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 75U;
	uint16_t x506 = UINT16_MAX;
	int32_t x507 = 0;

    t126 = (x505*((x506==x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	volatile int32_t x510 = INT32_MIN;
	volatile int32_t t127 = 115076;

    t127 = (x509*((x510==x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -6;
	int32_t x514 = -1;
	int16_t x515 = INT16_MAX;
	int64_t x516 = -680763LL;
	int32_t t128 = -1569791;

    t128 = (x513*((x514==x515)==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 256LLU;
	uint32_t x518 = 3808U;
	uint32_t x519 = UINT32_MAX;
	static uint8_t x520 = UINT8_MAX;
	uint64_t t129 = 1160047921622204905LLU;

    t129 = (x517*((x518==x519)==x520));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	uint8_t x522 = UINT8_MAX;
	uint64_t x523 = 421683478506629LLU;
	static int32_t t130 = 981246888;

    t130 = (x521*((x522==x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	static uint16_t x526 = 0U;
	int16_t x527 = -60;
	int8_t x528 = 14;
	int32_t t131 = 4656300;

    t131 = (x525*((x526==x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 60U;
	uint8_t x530 = UINT8_MAX;
	static uint64_t x531 = 4717615952865851996LLU;
	int16_t x532 = 650;

    t132 = (x529*((x530==x531)==x532));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 0U;
	static int64_t x534 = INT64_MAX;
	volatile int16_t x535 = -1085;

    t133 = (x533*((x534==x535)==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	int32_t x539 = INT32_MIN;
	static volatile int16_t x540 = 1;
	int32_t t134 = 19601;

    t134 = (x537*((x538==x539)==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = -1;
	int32_t x543 = INT32_MAX;
	volatile uint16_t x544 = 4266U;
	volatile int32_t t135 = 153;

    t135 = (x541*((x542==x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	uint64_t x546 = UINT64_MAX;
	static int8_t x547 = 50;
	int8_t x548 = -24;
	int32_t t136 = 202109;

    t136 = (x545*((x546==x547)==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x550 = UINT16_MAX;
	int16_t x551 = INT16_MIN;
	int64_t x552 = 373491525644LL;

    t137 = (x549*((x550==x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	uint32_t x554 = 13940775U;
	static volatile int32_t t138 = 237;

    t138 = (x553*((x554==x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int8_t x558 = -1;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t139 = 4018616;

    t139 = (x557*((x558==x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	int32_t x562 = 26452;
	int64_t x563 = INT64_MIN;
	static int32_t t140 = 3737;

    t140 = (x561*((x562==x563)==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x566 = INT8_MAX;
	static int64_t x567 = -1LL;
	uint64_t t141 = 7258326819977349358LLU;

    t141 = (x565*((x566==x567)==x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 202866274300LLU;
	int16_t x570 = -505;
	uint32_t x572 = 5019U;
	static volatile uint64_t t142 = 554780268048671465LLU;

    t142 = (x569*((x570==x571)==x572));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x574 = INT32_MIN;
	static uint16_t x575 = 29825U;
	uint32_t x576 = 1109739190U;
	int32_t t143 = 60182;

    t143 = (x573*((x574==x575)==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 128;
	int8_t x578 = INT8_MAX;
	volatile int8_t x579 = -1;
	volatile int32_t t144 = 68769;

    t144 = (x577*((x578==x579)==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 687U;
	volatile uint16_t x582 = UINT16_MAX;
	int8_t x583 = INT8_MIN;

    t145 = (x581*((x582==x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	uint8_t x586 = 58U;
	volatile int8_t x587 = -1;
	volatile uint8_t x588 = 1U;
	int32_t t146 = 1291961;

    t146 = (x585*((x586==x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x589 = 4U;
	int8_t x590 = -3;
	int16_t x591 = -2;
	volatile uint16_t x592 = UINT16_MAX;
	static int32_t t147 = -14996;

    t147 = (x589*((x590==x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 131;
	uint8_t x594 = 27U;
	uint8_t x595 = UINT8_MAX;
	static int16_t x596 = INT16_MAX;
	static int32_t t148 = -1937;

    t148 = (x593*((x594==x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = 29;
	static int32_t x599 = INT32_MAX;
	volatile uint64_t x600 = 545LLU;
	int32_t t149 = 83;

    t149 = (x597*((x598==x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x602 = 31;
	volatile uint32_t x604 = 15539U;
	volatile uint32_t t150 = 268257366U;

    t150 = (x601*((x602==x603)==x604));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	uint8_t x606 = 11U;
	uint32_t x607 = UINT32_MAX;
	int64_t x608 = INT64_MIN;
	static volatile int64_t t151 = 355627507911LL;

    t151 = (x605*((x606==x607)==x608));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x610 = 16039LLU;
	volatile int64_t x611 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	static uint32_t t152 = 1235937439U;

    t152 = (x609*((x610==x611)==x612));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	int16_t x614 = INT16_MAX;
	int16_t x615 = INT16_MIN;
	int16_t x616 = -1;

    t153 = (x613*((x614==x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	uint8_t x618 = 3U;
	uint16_t x619 = UINT16_MAX;
	uint64_t x620 = 90253046LLU;
	int32_t t154 = 784195;

    t154 = (x617*((x618==x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = 2;
	static int8_t x622 = 26;
	uint16_t x623 = 60U;
	uint32_t x624 = 399U;
	int32_t t155 = -41;

    t155 = (x621*((x622==x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -78915;
	volatile uint16_t x626 = 0U;
	int32_t x627 = 14633188;
	int64_t x628 = INT64_MIN;
	volatile int32_t t156 = -9;

    t156 = (x625*((x626==x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 1425LLU;
	uint16_t x630 = 10138U;
	int64_t x631 = INT64_MIN;
	static uint64_t t157 = 662380506753709668LLU;

    t157 = (x629*((x630==x631)==x632));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	int64_t x634 = 1055002635528486269LL;
	int8_t x635 = 33;
	uint8_t x636 = UINT8_MAX;
	static volatile uint32_t t158 = 181578U;

    t158 = (x633*((x634==x635)==x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = 122U;
	static uint64_t x638 = 905068557LLU;
	int64_t x639 = -1474797145836503272LL;
	int32_t t159 = -7;

    t159 = (x637*((x638==x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 4U;
	int64_t x642 = INT64_MIN;
	volatile uint32_t x643 = 30083U;
	static volatile uint32_t t160 = 1424513927U;

    t160 = (x641*((x642==x643)==x644));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	int32_t x646 = -426428751;
	int64_t x647 = INT64_MAX;
	int16_t x648 = INT16_MAX;
	static volatile int32_t t161 = 77965132;

    t161 = (x645*((x646==x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -47;
	int8_t x650 = INT8_MAX;
	static uint8_t x651 = UINT8_MAX;
	static int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 413;

    t162 = (x649*((x650==x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int16_t x654 = INT16_MIN;
	int64_t x656 = -1717LL;
	int64_t t163 = -3888524591LL;

    t163 = (x653*((x654==x655)==x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 165672695606859LL;
	int16_t x658 = -23;
	volatile int8_t x659 = INT8_MAX;
	int32_t x660 = 1;
	int64_t t164 = -511834604335006LL;

    t164 = (x657*((x658==x659)==x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int64_t x662 = INT64_MIN;
	volatile int16_t x663 = -1;
	uint64_t x664 = 1940867990051389LLU;
	volatile int32_t t165 = 2;

    t165 = (x661*((x662==x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int16_t x667 = -198;
	int8_t x668 = INT8_MIN;
	int64_t t166 = 13LL;

    t166 = (x665*((x666==x667)==x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 1;
	static uint64_t x672 = 29867139097944LLU;
	volatile int32_t t167 = -19;

    t167 = (x669*((x670==x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	static int16_t x674 = INT16_MIN;
	int16_t x676 = -2;
	int64_t t168 = 161LL;

    t168 = (x673*((x674==x675)==x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = INT8_MAX;
	static uint8_t x678 = UINT8_MAX;
	int64_t x679 = -35681819313731487LL;
	int64_t x680 = INT64_MIN;
	static volatile int32_t t169 = -107;

    t169 = (x677*((x678==x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	int64_t x682 = -1LL;
	int8_t x683 = INT8_MIN;
	volatile int32_t x684 = INT32_MAX;
	volatile int32_t t170 = -8504;

    t170 = (x681*((x682==x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = 59;
	static int64_t x686 = INT64_MIN;
	int16_t x687 = INT16_MAX;
	int64_t x688 = INT64_MIN;
	int32_t t171 = -61282;

    t171 = (x685*((x686==x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x691 = -1;
	volatile int32_t x692 = INT32_MIN;
	static int64_t t172 = -33351414220108396LL;

    t172 = (x689*((x690==x691)==x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	static int32_t x694 = -139004;
	volatile int32_t x695 = -1;
	uint64_t t173 = 17191LLU;

    t173 = (x693*((x694==x695)==x696));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MIN;
	volatile uint16_t x699 = 4366U;
	int8_t x700 = 56;
	volatile int64_t t174 = -4623253LL;

    t174 = (x697*((x698==x699)==x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	int64_t x703 = INT64_MIN;
	volatile int32_t t175 = 63568;

    t175 = (x701*((x702==x703)==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = UINT64_MAX;
	static volatile int8_t x706 = 4;
	int8_t x707 = INT8_MAX;
	int64_t x708 = 3192LL;
	volatile uint64_t t176 = 422067LLU;

    t176 = (x705*((x706==x707)==x708));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 10182221;
	uint64_t x711 = 31LLU;
	int32_t t177 = 496;

    t177 = (x709*((x710==x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static int32_t x714 = INT32_MAX;
	uint8_t x715 = UINT8_MAX;
	int8_t x716 = INT8_MIN;
	int32_t t178 = 1;

    t178 = (x713*((x714==x715)==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	int32_t x718 = -1;
	uint64_t x719 = 2LLU;
	volatile int64_t x720 = -13948832862623LL;

    t179 = (x717*((x718==x719)==x720));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	static uint8_t x722 = 1U;
	int64_t x723 = INT64_MIN;
	static int8_t x724 = INT8_MIN;
	int32_t t180 = 1;

    t180 = (x721*((x722==x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 433279LLU;
	int32_t x726 = INT32_MIN;
	uint8_t x727 = UINT8_MAX;
	uint64_t x728 = 305LLU;
	uint64_t t181 = 4687773115260909LLU;

    t181 = (x725*((x726==x727)==x728));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 35U;
	int16_t x730 = -1;
	uint32_t x731 = 117360897U;
	volatile int64_t x732 = INT64_MIN;
	volatile int32_t t182 = -305697;

    t182 = (x729*((x730==x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x734 = INT64_MAX;
	uint64_t x735 = 643986LLU;
	volatile uint16_t x736 = 14U;

    t183 = (x733*((x734==x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	volatile int64_t x738 = INT64_MAX;
	static int32_t x740 = -1;
	int32_t t184 = -2;

    t184 = (x737*((x738==x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	volatile uint64_t x742 = 1068351093374252718LLU;
	static int64_t x743 = INT64_MIN;
	int16_t x744 = INT16_MIN;
	static uint64_t t185 = 3953360LLU;

    t185 = (x741*((x742==x743)==x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	static int32_t x746 = INT32_MIN;
	int8_t x747 = INT8_MIN;

    t186 = (x745*((x746==x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x749 = 4U;
	uint16_t x750 = 120U;
	static int64_t x752 = INT64_MAX;
	int32_t t187 = -1;

    t187 = (x749*((x750==x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x754 = INT64_MAX;
	int16_t x755 = INT16_MAX;
	uint8_t x756 = 14U;

    t188 = (x753*((x754==x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MIN;

    t189 = (x757*((x758==x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 210;
	static int8_t x762 = 55;
	uint16_t x763 = UINT16_MAX;
	static volatile int64_t x764 = -5041LL;
	volatile int32_t t190 = -1;

    t190 = (x761*((x762==x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = 967;
	int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t191 = 11334;

    t191 = (x765*((x766==x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 84433687;
	int64_t x770 = 1629453398LL;
	uint16_t x771 = 50U;
	int16_t x772 = INT16_MAX;
	int32_t t192 = -757715;

    t192 = (x769*((x770==x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	int16_t x774 = 1;
	int16_t x775 = -1;
	int8_t x776 = INT8_MAX;
	volatile int64_t t193 = -330264421538555525LL;

    t193 = (x773*((x774==x775)==x776));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x777 = 147U;
	int16_t x779 = INT16_MAX;
	static uint64_t x780 = 9887LLU;
	int32_t t194 = 244;

    t194 = (x777*((x778==x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 0U;
	static uint16_t x782 = 3U;
	volatile int16_t x784 = INT16_MAX;
	volatile int32_t t195 = -3909;

    t195 = (x781*((x782==x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = INT8_MIN;
	int8_t x788 = 5;
	volatile int32_t t196 = 3515166;

    t196 = (x785*((x786==x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MAX;
	int32_t x790 = -1;
	int8_t x791 = 63;
	uint16_t x792 = 1896U;
	int32_t t197 = -24113547;

    t197 = (x789*((x790==x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = -37;
	uint32_t x795 = 54U;
	uint8_t x796 = 5U;

    t198 = (x793*((x794==x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 355U;
	static int8_t x799 = 1;
	int32_t x800 = INT32_MAX;

    t199 = (x797*((x798==x799)==x800));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

