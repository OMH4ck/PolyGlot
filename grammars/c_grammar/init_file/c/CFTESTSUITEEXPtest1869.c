
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

static volatile int8_t x4 = INT8_MIN;
int32_t t1 = -87;
int32_t x11 = -1994;
int32_t t2 = 3629;
static volatile uint16_t x14 = 32331U;
static volatile int32_t t3 = 2254813;
volatile int8_t x20 = INT8_MAX;
static int32_t t4 = -1376881;
int64_t x23 = -119354LL;
static volatile int32_t t5 = -377;
static uint8_t x28 = 0U;
int32_t x29 = 23;
int32_t x40 = INT32_MIN;
int32_t t9 = 52356;
int64_t x43 = INT64_MAX;
uint64_t x44 = 4410001602LLU;
int16_t x45 = INT16_MIN;
int32_t x49 = -49;
volatile int32_t x50 = INT32_MIN;
int32_t x53 = -1;
static volatile int32_t x64 = -201971715;
uint8_t x68 = UINT8_MAX;
int64_t x71 = -11109521550921947LL;
int16_t x74 = INT16_MIN;
int16_t x75 = -137;
uint8_t x78 = 1U;
uint8_t x84 = 72U;
volatile int16_t x86 = INT16_MIN;
uint64_t x88 = UINT64_MAX;
int32_t t22 = -5230;
int8_t x95 = -1;
volatile uint32_t x101 = 25831U;
volatile int16_t x105 = -1;
static int64_t x114 = INT64_MIN;
uint8_t x120 = 0U;
volatile int16_t x128 = INT16_MIN;
int32_t t32 = 21;
int64_t x136 = -285LL;
int32_t x140 = 512090551;
int32_t t34 = 1;
static int32_t x144 = -16262;
int32_t t35 = 12;
int32_t t36 = -105260;
int8_t x150 = 26;
volatile int32_t t37 = 341982089;
int8_t x153 = -1;
static uint16_t x158 = 26U;
static volatile int8_t x163 = INT8_MIN;
static uint16_t x167 = 4U;
volatile int64_t x168 = INT64_MIN;
int16_t x174 = -1;
uint16_t x175 = 655U;
int32_t t43 = 1051233523;
volatile int64_t x183 = 177710604575360626LL;
int64_t x187 = INT64_MIN;
volatile int8_t x188 = -1;
int32_t x190 = INT32_MIN;
int32_t x192 = 6289;
volatile uint8_t x201 = 123U;
volatile int32_t x207 = INT32_MIN;
int32_t x208 = -64118;
int32_t x210 = 5793135;
int8_t x212 = -1;
static uint64_t x217 = UINT64_MAX;
volatile int32_t t54 = 349;
static int8_t x223 = 1;
static int32_t x225 = 4935;
static uint64_t x234 = 253863840LLU;
int16_t x236 = INT16_MIN;
int32_t x240 = INT32_MIN;
uint32_t x241 = UINT32_MAX;
uint64_t x247 = 85932LLU;
uint64_t x255 = 301490850LLU;
int64_t x259 = INT64_MIN;
uint16_t x267 = 0U;
uint32_t x276 = 336343U;
static int16_t x279 = INT16_MAX;
int32_t x282 = INT32_MIN;
int32_t x284 = -479;
static int32_t t70 = 3706083;
int32_t x287 = -1;
volatile int32_t t71 = 7;
int32_t t72 = 28253;
int32_t x293 = 0;
int16_t x295 = -22;
int32_t x300 = INT32_MIN;
int64_t x303 = INT64_MIN;
int32_t x306 = 297385185;
int32_t t76 = 53511952;
int32_t x309 = INT32_MIN;
uint16_t x316 = 97U;
int32_t x318 = 141926;
int64_t x319 = INT64_MIN;
static uint8_t x321 = UINT8_MAX;
volatile int32_t t80 = 119046178;
static int8_t x330 = INT8_MIN;
int64_t x332 = INT64_MAX;
int32_t x337 = 222239055;
uint32_t x344 = UINT32_MAX;
int32_t t85 = -14549979;
uint16_t x347 = UINT16_MAX;
volatile uint64_t x351 = UINT64_MAX;
volatile int8_t x357 = INT8_MIN;
int16_t x359 = 1;
int16_t x373 = INT16_MIN;
int32_t t93 = -24324;
static int64_t x384 = INT64_MAX;
volatile int16_t x389 = INT16_MIN;
int64_t x390 = INT64_MIN;
int16_t x391 = INT16_MIN;
int32_t x392 = -1;
int16_t x403 = INT16_MAX;
uint16_t x405 = UINT16_MAX;
int32_t x409 = -1;
int8_t x410 = INT8_MAX;
volatile int32_t t104 = 406606;
volatile int16_t x422 = INT16_MAX;
int64_t x426 = -3LL;
volatile uint64_t x428 = 3295032LLU;
static int64_t x431 = -19117217LL;
volatile uint8_t x432 = 0U;
volatile int16_t x436 = 23;
int32_t x441 = -181;
uint16_t x445 = UINT16_MAX;
int32_t x448 = INT32_MIN;
volatile int32_t t111 = 33121820;
int32_t t114 = -108711;
volatile uint8_t x461 = 4U;
int8_t x462 = INT8_MIN;
int32_t x463 = INT32_MIN;
int64_t x476 = 0LL;
int32_t x485 = INT32_MAX;
uint8_t x487 = UINT8_MAX;
static int64_t x489 = -1LL;
volatile uint32_t x494 = UINT32_MAX;
static int8_t x495 = INT8_MIN;
static uint64_t x500 = 821347LLU;
int16_t x505 = INT16_MIN;
volatile int32_t x506 = 18;
int8_t x509 = INT8_MIN;
int64_t x515 = INT64_MAX;
int64_t x524 = -1LL;
int64_t x525 = INT64_MAX;
static int32_t t131 = 421292;
uint32_t x531 = 3U;
volatile uint16_t x542 = 80U;
int8_t x549 = -1;
int16_t x554 = INT16_MAX;
int16_t x562 = INT16_MIN;
volatile int16_t x575 = 229;
int8_t x576 = INT8_MIN;
volatile int32_t t145 = 38;
uint16_t x588 = UINT16_MAX;
int32_t x590 = INT32_MIN;
int16_t x591 = INT16_MIN;
uint8_t x597 = 0U;
static volatile uint64_t x599 = UINT64_MAX;
volatile uint8_t x602 = 18U;
uint64_t x612 = 447LLU;
static volatile uint16_t x615 = 0U;
int32_t x622 = -1;
static volatile int32_t x624 = -2;
volatile int16_t x628 = 82;
static int64_t x638 = INT64_MIN;
int32_t x640 = INT32_MAX;
int8_t x649 = -1;
int32_t x651 = INT32_MIN;
int64_t x662 = 15LL;
int32_t x663 = INT32_MAX;
int32_t t166 = -5;
int64_t x675 = -1LL;
int32_t t168 = 3301;
int8_t x684 = INT8_MIN;
volatile int32_t x695 = -27;
int16_t x698 = INT16_MIN;
static int16_t x706 = INT16_MIN;
int16_t x714 = -1;
volatile uint8_t x717 = UINT8_MAX;
uint16_t x718 = UINT16_MAX;
int32_t t179 = -568037559;
uint32_t x732 = 3965U;
uint8_t x734 = UINT8_MAX;
int8_t x741 = INT8_MIN;
volatile uint64_t x747 = 10783804LLU;
volatile int32_t t186 = -510;
int8_t x749 = INT8_MIN;
int64_t x752 = 860LL;
uint8_t x754 = UINT8_MAX;
uint64_t x758 = 110638902823683LLU;
int32_t x760 = INT32_MAX;
int32_t t189 = 14;
int32_t x767 = INT32_MIN;
uint16_t x769 = 224U;
uint32_t x774 = 38379057U;
int8_t x781 = INT8_MIN;
volatile int32_t t195 = 0;
uint16_t x789 = UINT16_MAX;
static int16_t x791 = -1;
int32_t x794 = INT32_MIN;
uint32_t x797 = 2926116U;


void f0(void) {
    	static volatile uint64_t x1 = 42434LLU;
	volatile int64_t x2 = 394714216LL;
	int32_t x3 = -47;
	int32_t t0 = 181741817;

    t0 = (x1!=((x2<=x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	uint64_t x7 = 1716493LLU;
	int8_t x8 = INT8_MAX;

    t1 = (x5!=((x6<=x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 8893255U;
	int64_t x10 = INT64_MIN;
	static int8_t x12 = INT8_MIN;

    t2 = (x9!=((x10<=x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static uint64_t x15 = UINT64_MAX;
	static int16_t x16 = INT16_MIN;

    t3 = (x13!=((x14<=x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -6013;
	int16_t x18 = INT16_MIN;
	int32_t x19 = -430086;

    t4 = (x17!=((x18<=x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	uint32_t x24 = 0U;

    t5 = (x21!=((x22<=x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = 7512LL;
	static uint8_t x27 = 16U;
	int32_t t6 = -452395149;

    t6 = (x25!=((x26<=x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = 0;
	int8_t x31 = 0;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = 48112288;

    t7 = (x29!=((x30<=x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 20;
	int64_t x34 = 65LL;
	static volatile int16_t x35 = INT16_MAX;
	volatile int64_t x36 = 8416715594465LL;
	int32_t t8 = 14;

    t8 = (x33!=((x34<=x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;

    t9 = (x37!=((x38<=x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = 1;
	uint16_t x42 = 32395U;
	int32_t t10 = 1764990;

    t10 = (x41!=((x42<=x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1LL;
	int8_t x47 = -1;
	static int64_t x48 = -1LL;
	volatile int32_t t11 = 159916;

    t11 = (x45!=((x46<=x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x51 = 171575367LLU;
	int8_t x52 = 0;
	int32_t t12 = -15;

    t12 = (x49!=((x50<=x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int32_t x56 = -1;
	volatile int32_t t13 = -388685;

    t13 = (x53!=((x54<=x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = 1;
	volatile int16_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int64_t x60 = -1LL;
	int32_t t14 = -28019627;

    t14 = (x57!=((x58<=x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 19865237972LLU;
	uint16_t x62 = 7889U;
	uint16_t x63 = 1968U;
	int32_t t15 = -15;

    t15 = (x61!=((x62<=x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 47U;
	uint8_t x66 = 49U;
	int64_t x67 = INT64_MAX;
	volatile int32_t t16 = -1;

    t16 = (x65!=((x66<=x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 100U;
	int64_t x70 = 259043257792241LL;
	int8_t x72 = -1;
	static int32_t t17 = -3391287;

    t17 = (x69!=((x70<=x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	static volatile uint8_t x76 = 29U;
	int32_t t18 = 231;

    t18 = (x73!=((x74<=x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 238497;

    t19 = (x77!=((x78<=x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MAX;
	volatile int32_t t20 = -394;

    t20 = (x81!=((x82<=x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -13;
	int16_t x87 = INT16_MAX;
	int32_t t21 = 0;

    t21 = (x85!=((x86<=x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = INT8_MIN;
	static uint64_t x90 = 3877284898006LLU;
	int64_t x91 = INT64_MAX;
	int64_t x92 = -17514160881LL;

    t22 = (x89!=((x90<=x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	int64_t x94 = -12135593136LL;
	volatile int8_t x96 = 18;
	int32_t t23 = 522;

    t23 = (x93!=((x94<=x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 8U;
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1;
	volatile uint8_t x100 = 11U;
	static volatile int32_t t24 = -13;

    t24 = (x97!=((x98<=x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = 4339103LLU;
	volatile int32_t t25 = 1202788;

    t25 = (x101!=((x102<=x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = INT8_MAX;
	int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = 111342368;

    t26 = (x105!=((x106<=x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MAX;
	static uint32_t x110 = 373382511U;
	volatile int32_t x111 = -50281212;
	uint32_t x112 = 143U;
	int32_t t27 = -8371970;

    t27 = (x109!=((x110<=x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int16_t x115 = INT16_MAX;
	int64_t x116 = -1LL;
	volatile int32_t t28 = 27;

    t28 = (x113!=((x114<=x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = -1;
	int8_t x119 = INT8_MIN;
	int32_t t29 = 338296418;

    t29 = (x117!=((x118<=x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int8_t x122 = 1;
	uint16_t x123 = 1714U;
	volatile int8_t x124 = -1;
	volatile int32_t t30 = -6;

    t30 = (x121!=((x122<=x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	uint64_t x126 = 1367243471201LLU;
	volatile uint64_t x127 = 2453706461620085025LLU;
	static volatile int32_t t31 = -377216;

    t31 = (x125!=((x126<=x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -4;
	static uint16_t x130 = 1504U;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;

    t32 = (x129!=((x130<=x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -7068;
	int32_t x134 = INT32_MIN;
	static volatile uint32_t x135 = UINT32_MAX;
	static volatile int32_t t33 = 4;

    t33 = (x133!=((x134<=x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	volatile uint32_t x139 = 16866769U;

    t34 = (x137!=((x138<=x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 14165U;
	int8_t x142 = -1;
	volatile int8_t x143 = -1;

    t35 = (x141!=((x142<=x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	volatile int64_t x147 = -24057281LL;
	int64_t x148 = -1LL;

    t36 = (x145!=((x146<=x147)==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 30U;
	static int8_t x151 = -1;
	static volatile int16_t x152 = INT16_MAX;

    t37 = (x149!=((x150<=x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 745692878818495LLU;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MAX;
	static int32_t t38 = 272820859;

    t38 = (x153!=((x154<=x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int32_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -6867323;

    t39 = (x157!=((x158<=x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 6LL;
	volatile int16_t x162 = -1;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = -1;

    t40 = (x161!=((x162<=x163)==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int16_t x166 = -155;
	static volatile int32_t t41 = -119210;

    t41 = (x165!=((x166<=x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 62477U;
	int64_t x170 = -1LL;
	volatile int32_t x171 = INT32_MIN;
	uint8_t x172 = 19U;
	int32_t t42 = 0;

    t42 = (x169!=((x170<=x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = 42U;
	int32_t x176 = INT32_MAX;

    t43 = (x173!=((x174<=x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -29904621LL;
	int16_t x178 = -1;
	static int32_t x179 = INT32_MAX;
	volatile uint8_t x180 = 56U;
	static volatile int32_t t44 = -3777399;

    t44 = (x177!=((x178<=x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	static volatile int8_t x182 = 58;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = 62;

    t45 = (x181!=((x182<=x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = UINT32_MAX;
	uint32_t x186 = 54152U;
	volatile int32_t t46 = -29;

    t46 = (x185!=((x186<=x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 0;
	static int64_t x191 = INT64_MIN;
	volatile int32_t t47 = 42;

    t47 = (x189!=((x190<=x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	uint64_t x194 = UINT64_MAX;
	volatile int8_t x195 = INT8_MIN;
	static int8_t x196 = 1;
	volatile int32_t t48 = 502;

    t48 = (x193!=((x194<=x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	volatile int8_t x200 = INT8_MIN;
	static int32_t t49 = 770;

    t49 = (x197!=((x198<=x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x202 = INT64_MAX;
	int8_t x203 = 1;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 1778;

    t50 = (x201!=((x202<=x203)==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x205 = 3U;
	int64_t x206 = INT64_MIN;
	int32_t t51 = -35147056;

    t51 = (x205!=((x206<=x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	uint64_t x211 = 180949276882LLU;
	volatile int32_t t52 = 7;

    t52 = (x209!=((x210<=x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -1;
	volatile uint32_t x214 = 2U;
	static int32_t x215 = 385258;
	uint8_t x216 = 1U;
	int32_t t53 = -168326814;

    t53 = (x213!=((x214<=x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MIN;
	static int32_t x220 = INT32_MAX;

    t54 = (x217!=((x218<=x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -90;
	uint8_t x222 = 8U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 79751;

    t55 = (x221!=((x222<=x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x226 = INT16_MIN;
	uint8_t x227 = 1U;
	uint32_t x228 = 10556189U;
	volatile int32_t t56 = -5;

    t56 = (x225!=((x226<=x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	uint8_t x230 = 4U;
	volatile int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -2;

    t57 = (x229!=((x230<=x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = -1LL;
	int16_t x235 = INT16_MIN;
	volatile int32_t t58 = 4123;

    t58 = (x233!=((x234<=x235)==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	uint32_t x238 = 119180695U;
	static int32_t x239 = 1627;
	volatile int32_t t59 = 12865;

    t59 = (x237!=((x238<=x239)==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	static volatile int16_t x243 = INT16_MAX;
	static int8_t x244 = -1;
	volatile int32_t t60 = -23482;

    t60 = (x241!=((x242<=x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 3U;
	uint8_t x246 = UINT8_MAX;
	uint8_t x248 = 58U;
	volatile int32_t t61 = -1;

    t61 = (x245!=((x246<=x247)==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -853;
	int32_t x250 = INT32_MAX;
	int32_t x251 = -3;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = 1477;

    t62 = (x249!=((x250<=x251)==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 2964730532LL;
	static volatile int32_t x254 = INT32_MAX;
	int8_t x256 = 1;
	volatile int32_t t63 = -1;

    t63 = (x253!=((x254<=x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	int64_t x258 = -1LL;
	volatile uint8_t x260 = 29U;
	static volatile int32_t t64 = -116;

    t64 = (x257!=((x258<=x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x261 = INT32_MIN;
	int16_t x262 = 1863;
	uint32_t x263 = 354U;
	uint8_t x264 = 2U;
	volatile int32_t t65 = 469665;

    t65 = (x261!=((x262<=x263)==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -11LL;
	volatile int8_t x266 = INT8_MIN;
	int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 2029481;

    t66 = (x265!=((x266<=x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	volatile uint8_t x270 = UINT8_MAX;
	int16_t x271 = 5;
	int32_t x272 = -102777;
	static int32_t t67 = 31796309;

    t67 = (x269!=((x270<=x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MAX;
	uint16_t x274 = 677U;
	int32_t x275 = -1;
	volatile int32_t t68 = 77830825;

    t68 = (x273!=((x274<=x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = 3;
	int32_t x278 = -240364196;
	int8_t x280 = 0;
	int32_t t69 = 352;

    t69 = (x277!=((x278<=x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = INT64_MAX;
	uint16_t x283 = UINT16_MAX;

    t70 = (x281!=((x282<=x283)==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 6U;
	static volatile int8_t x286 = -1;
	uint32_t x288 = 5366048U;

    t71 = (x285!=((x286<=x287)==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = 9302U;
	volatile uint8_t x290 = 5U;
	static uint16_t x291 = 15U;
	volatile uint16_t x292 = UINT16_MAX;

    t72 = (x289!=((x290<=x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x294 = -5946;
	int16_t x296 = -1179;
	volatile int32_t t73 = -12;

    t73 = (x293!=((x294<=x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = 0U;
	int8_t x298 = 1;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t t74 = 128;

    t74 = (x297!=((x298<=x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = 31517562LL;
	int32_t x304 = -101;
	volatile int32_t t75 = -6699738;

    t75 = (x301!=((x302<=x303)==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 663924U;
	uint16_t x307 = 15U;
	uint16_t x308 = 2538U;

    t76 = (x305!=((x306<=x307)==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x310 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = 1771842;

    t77 = (x309!=((x310<=x311)==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	uint64_t x314 = UINT64_MAX;
	int64_t x315 = -65458546LL;
	int32_t t78 = 1143;

    t78 = (x313!=((x314<=x315)==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	uint8_t x320 = 5U;
	static int32_t t79 = -57;

    t79 = (x317!=((x318<=x319)==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MAX;
	uint16_t x323 = 877U;
	int8_t x324 = 0;

    t80 = (x321!=((x322<=x323)==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	uint32_t x326 = 23357U;
	int8_t x327 = -1;
	int32_t x328 = -4;
	static int32_t t81 = -372;

    t81 = (x325!=((x326<=x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1LL;
	int16_t x331 = 84;
	static volatile int32_t t82 = 26687589;

    t82 = (x329!=((x330<=x331)==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -1;
	int8_t x334 = -1;
	uint8_t x335 = 10U;
	uint8_t x336 = 110U;
	volatile int32_t t83 = 253;

    t83 = (x333!=((x334<=x335)==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x338 = 1;
	volatile int32_t x339 = 22863714;
	static uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = 9;

    t84 = (x337!=((x338<=x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;

    t85 = (x341!=((x342<=x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = -1LL;
	volatile int64_t x346 = -781226077422LL;
	volatile int32_t x348 = -1;
	int32_t t86 = -284907;

    t86 = (x345!=((x346<=x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	static int32_t x350 = -1;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 154568;

    t87 = (x349!=((x350<=x351)==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 59U;
	uint32_t x354 = UINT32_MAX;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 529309677;

    t88 = (x353!=((x354<=x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x358 = -1;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -80297182;

    t89 = (x357!=((x358<=x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	int32_t x363 = -1;
	uint64_t x364 = 48725421009LLU;
	volatile int32_t t90 = 50824;

    t90 = (x361!=((x362<=x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = -443370;

    t91 = (x365!=((x366<=x367)==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	volatile uint8_t x370 = UINT8_MAX;
	volatile int32_t x371 = -64957;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -67;

    t92 = (x369!=((x370<=x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = 418409193621LL;
	volatile int32_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;

    t93 = (x373!=((x374<=x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	static int8_t x380 = -1;
	int32_t t94 = -1073801;

    t94 = (x377!=((x378<=x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 0U;
	int8_t x382 = 27;
	uint32_t x383 = 1253477987U;
	static volatile int32_t t95 = -1;

    t95 = (x381!=((x382<=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	int16_t x386 = -1;
	static volatile int64_t x387 = 3037477530549LL;
	uint32_t x388 = 1021459U;
	int32_t t96 = -76;

    t96 = (x385!=((x386<=x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t t97 = 923;

    t97 = (x389!=((x390<=x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	static int64_t x394 = INT64_MIN;
	uint64_t x395 = 14106331LLU;
	uint16_t x396 = 11214U;
	int32_t t98 = 427204683;

    t98 = (x393!=((x394<=x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	static int64_t x399 = INT64_MIN;
	static int16_t x400 = INT16_MAX;
	int32_t t99 = -1182;

    t99 = (x397!=((x398<=x399)==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = -1;
	static int64_t x404 = -261448239LL;
	volatile int32_t t100 = -2;

    t100 = (x401!=((x402<=x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = 4335605619999LL;
	uint8_t x407 = 3U;
	uint32_t x408 = UINT32_MAX;
	int32_t t101 = -1985;

    t101 = (x405!=((x406<=x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x411 = UINT32_MAX;
	int8_t x412 = -1;
	static volatile int32_t t102 = 21319;

    t102 = (x409!=((x410<=x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int64_t x414 = INT64_MAX;
	static uint32_t x415 = 22U;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t103 = 6;

    t103 = (x413!=((x414<=x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MAX;
	int8_t x418 = INT8_MIN;
	volatile int32_t x419 = INT32_MIN;
	static volatile int32_t x420 = INT32_MAX;

    t104 = (x417!=((x418<=x419)==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -879;
	static volatile int16_t x423 = INT16_MIN;
	static uint16_t x424 = 3737U;
	volatile int32_t t105 = -830777720;

    t105 = (x421!=((x422<=x423)==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = 12U;
	int64_t x427 = INT64_MIN;
	static volatile int32_t t106 = -580;

    t106 = (x425!=((x426<=x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x430 = 43U;
	volatile int32_t t107 = -2123;

    t107 = (x429!=((x430<=x431)==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	int32_t x434 = INT32_MIN;
	uint16_t x435 = 10U;
	volatile int32_t t108 = 197;

    t108 = (x433!=((x434<=x435)==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = -4;
	uint32_t x439 = 74U;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 2831512;

    t109 = (x437!=((x438<=x439)==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 365116885U;
	volatile uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 12765178U;
	int32_t t110 = -2081402;

    t110 = (x441!=((x442<=x443)==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = INT32_MAX;
	int32_t x447 = 28;

    t111 = (x445!=((x446<=x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 67291391489429LLU;
	static uint32_t x450 = UINT32_MAX;
	int64_t x451 = 6250559042429850LL;
	int32_t x452 = INT32_MIN;
	static int32_t t112 = 3;

    t112 = (x449!=((x450<=x451)==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x453 = 0U;
	uint8_t x454 = UINT8_MAX;
	volatile int32_t x455 = INT32_MIN;
	int32_t x456 = -195875;
	volatile int32_t t113 = 307261;

    t113 = (x453!=((x454<=x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	uint64_t x458 = 0LLU;
	uint8_t x459 = 13U;
	int32_t x460 = INT32_MIN;

    t114 = (x457!=((x458<=x459)==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x464 = -5LL;
	static volatile int32_t t115 = 294707054;

    t115 = (x461!=((x462<=x463)==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 31;
	static int16_t x466 = 6;
	int64_t x467 = -1LL;
	uint64_t x468 = 183245442777057LLU;
	volatile int32_t t116 = 1825135;

    t116 = (x465!=((x466<=x467)==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 118U;
	volatile uint8_t x472 = 16U;
	static volatile int32_t t117 = 2;

    t117 = (x469!=((x470<=x471)==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	int8_t x474 = -3;
	int8_t x475 = -1;
	volatile int32_t t118 = -231817130;

    t118 = (x473!=((x474<=x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 6U;
	volatile int32_t x478 = -24821;
	volatile int64_t x479 = 0LL;
	int8_t x480 = -1;
	static int32_t t119 = -509;

    t119 = (x477!=((x478<=x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 53735420074696LL;
	uint8_t x482 = 39U;
	static volatile int16_t x483 = -1;
	volatile uint64_t x484 = 17597254LLU;
	int32_t t120 = 1;

    t120 = (x481!=((x482<=x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x486 = 9879U;
	uint8_t x488 = 126U;
	static volatile int32_t t121 = -4054;

    t121 = (x485!=((x486<=x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = 106U;
	uint8_t x491 = UINT8_MAX;
	volatile int64_t x492 = INT64_MAX;
	volatile int32_t t122 = -39795;

    t122 = (x489!=((x490<=x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x496 = -137940684874322944LL;
	volatile int32_t t123 = 1;

    t123 = (x493!=((x494<=x495)==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = UINT8_MAX;
	uint8_t x498 = 30U;
	uint64_t x499 = UINT64_MAX;
	int32_t t124 = -2;

    t124 = (x497!=((x498<=x499)==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = UINT32_MAX;
	uint32_t x502 = 189570U;
	uint32_t x503 = 5941U;
	int16_t x504 = INT16_MIN;
	int32_t t125 = 12859599;

    t125 = (x501!=((x502<=x503)==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x507 = 14553969U;
	static int64_t x508 = -819LL;
	volatile int32_t t126 = -20;

    t126 = (x505!=((x506<=x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = 2730;
	volatile int32_t x511 = INT32_MAX;
	uint8_t x512 = 7U;
	volatile int32_t t127 = -119224233;

    t127 = (x509!=((x510<=x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	uint8_t x514 = 5U;
	int64_t x516 = INT64_MIN;
	volatile int32_t t128 = -5881438;

    t128 = (x513!=((x514<=x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = INT64_MIN;
	static int64_t x518 = -1LL;
	int64_t x519 = -1LL;
	uint8_t x520 = 3U;
	static int32_t t129 = 6;

    t129 = (x517!=((x518<=x519)==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 5U;
	uint16_t x522 = 20827U;
	static int8_t x523 = -29;
	volatile int32_t t130 = -995484;

    t130 = (x521!=((x522<=x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MIN;
	static volatile int8_t x527 = INT8_MIN;
	uint8_t x528 = 1U;

    t131 = (x525!=((x526<=x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -1;
	static volatile uint32_t x530 = 1613342U;
	int64_t x532 = 3148124LL;
	volatile int32_t t132 = 104;

    t132 = (x529!=((x530<=x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -8127;
	int16_t x534 = 0;
	int64_t x535 = -2925090307662LL;
	static int64_t x536 = -2889566267LL;
	volatile int32_t t133 = -3107495;

    t133 = (x533!=((x534<=x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 382U;
	volatile uint64_t x538 = 10759LLU;
	uint32_t x539 = UINT32_MAX;
	int16_t x540 = 1200;
	int32_t t134 = 904622384;

    t134 = (x537!=((x538<=x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	static int16_t x543 = -4028;
	int32_t x544 = INT32_MIN;
	int32_t t135 = -406;

    t135 = (x541!=((x542<=x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	uint64_t x546 = UINT64_MAX;
	int32_t x547 = 1580801;
	int16_t x548 = INT16_MAX;
	volatile int32_t t136 = 32;

    t136 = (x545!=((x546<=x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x550 = -1;
	uint64_t x551 = 52187365157196934LLU;
	static volatile int8_t x552 = -9;
	volatile int32_t t137 = 5;

    t137 = (x549!=((x550<=x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x553 = 1U;
	int8_t x555 = INT8_MIN;
	int64_t x556 = INT64_MIN;
	int32_t t138 = 3716;

    t138 = (x553!=((x554<=x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -3372150LL;
	volatile int8_t x558 = 1;
	uint64_t x559 = 5838725412801842LLU;
	uint16_t x560 = 1U;
	volatile int32_t t139 = 3;

    t139 = (x557!=((x558<=x559)==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = 1U;
	static uint32_t x563 = UINT32_MAX;
	int16_t x564 = -1;
	int32_t t140 = -34799226;

    t140 = (x561!=((x562<=x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -1;
	int32_t x566 = INT32_MAX;
	int16_t x567 = -1;
	uint32_t x568 = 900137U;
	int32_t t141 = -214717355;

    t141 = (x565!=((x566<=x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MIN;
	static int32_t x570 = INT32_MIN;
	int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MAX;
	volatile int32_t t142 = -767571357;

    t142 = (x569!=((x570<=x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	static uint8_t x574 = UINT8_MAX;
	static int32_t t143 = 89911813;

    t143 = (x573!=((x574<=x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = -1;
	int32_t x579 = 267641987;
	volatile int32_t x580 = -120016677;
	static int32_t t144 = 233481;

    t144 = (x577!=((x578<=x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	int32_t x582 = INT32_MIN;
	volatile int32_t x583 = INT32_MIN;
	int32_t x584 = -870;

    t145 = (x581!=((x582<=x583)==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	volatile int16_t x586 = INT16_MAX;
	volatile int64_t x587 = -1LL;
	static int32_t t146 = -272010;

    t146 = (x585!=((x586<=x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	uint8_t x592 = 0U;
	int32_t t147 = 102383675;

    t147 = (x589!=((x590<=x591)==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int32_t x594 = -26;
	int32_t x595 = INT32_MAX;
	int64_t x596 = INT64_MAX;
	volatile int32_t t148 = -23989850;

    t148 = (x593!=((x594<=x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = 39;
	static int8_t x600 = -51;
	int32_t t149 = -111609;

    t149 = (x597!=((x598<=x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = -1;
	volatile int16_t x603 = INT16_MIN;
	static volatile uint32_t x604 = UINT32_MAX;
	static volatile int32_t t150 = -25177265;

    t150 = (x601!=((x602<=x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 3U;
	static int32_t x606 = -1;
	int64_t x607 = 1131272LL;
	static int16_t x608 = INT16_MIN;
	static int32_t t151 = -89;

    t151 = (x605!=((x606<=x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x609 = 2U;
	static uint16_t x610 = 11U;
	uint16_t x611 = 2004U;
	volatile int32_t t152 = -2;

    t152 = (x609!=((x610<=x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = 1;
	int32_t x614 = INT32_MAX;
	uint16_t x616 = 108U;
	int32_t t153 = -17;

    t153 = (x613!=((x614<=x615)==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	volatile int16_t x618 = 9;
	int16_t x619 = INT16_MAX;
	static volatile int32_t x620 = INT32_MAX;
	static int32_t t154 = 97271;

    t154 = (x617!=((x618<=x619)==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x623 = INT8_MIN;
	int32_t t155 = -7361;

    t155 = (x621!=((x622<=x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	uint32_t x626 = 3U;
	uint16_t x627 = 50U;
	int32_t t156 = -1805655;

    t156 = (x625!=((x626<=x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	uint64_t x630 = 1785500182LLU;
	int16_t x631 = INT16_MIN;
	static volatile uint64_t x632 = 1LLU;
	volatile int32_t t157 = -513536;

    t157 = (x629!=((x630<=x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 27215079512872LLU;
	int8_t x634 = -1;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = 6U;
	volatile int32_t t158 = -976822221;

    t158 = (x633!=((x634<=x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x637 = UINT8_MAX;
	static uint32_t x639 = 73U;
	static volatile int32_t t159 = 1;

    t159 = (x637!=((x638<=x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -139098018151709LL;
	volatile int64_t x642 = -11170369165249LL;
	int8_t x643 = INT8_MIN;
	int8_t x644 = INT8_MIN;
	int32_t t160 = -16;

    t160 = (x641!=((x642<=x643)==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 10U;
	int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MAX;
	static int32_t x648 = -1;
	static int32_t t161 = -2348965;

    t161 = (x645!=((x646<=x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x650 = INT64_MIN;
	static volatile uint64_t x652 = 154202933055LLU;
	static volatile int32_t t162 = 1;

    t162 = (x649!=((x650<=x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = INT64_MIN;
	int64_t x654 = -1LL;
	int64_t x655 = -1LL;
	static volatile uint32_t x656 = 208U;
	volatile int32_t t163 = -620;

    t163 = (x653!=((x654<=x655)==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MAX;
	int8_t x659 = INT8_MIN;
	int16_t x660 = 360;
	volatile int32_t t164 = -983512;

    t164 = (x657!=((x658<=x659)==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x661 = INT8_MIN;
	int32_t x664 = INT32_MIN;
	volatile int32_t t165 = 2134223;

    t165 = (x661!=((x662<=x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int64_t x666 = -88LL;
	uint64_t x667 = 130474640771207LLU;
	int32_t x668 = INT32_MIN;

    t166 = (x665!=((x666<=x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MIN;
	uint16_t x670 = 14U;
	int64_t x671 = INT64_MIN;
	uint32_t x672 = 315013U;
	volatile int32_t t167 = 28597414;

    t167 = (x669!=((x670<=x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = -119452896483410315LL;
	int8_t x674 = 0;
	volatile int64_t x676 = INT64_MIN;

    t168 = (x673!=((x674<=x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -14121956;
	int16_t x678 = 0;
	volatile int32_t x679 = INT32_MIN;
	uint32_t x680 = UINT32_MAX;
	volatile int32_t t169 = -1;

    t169 = (x677!=((x678<=x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 5;
	int32_t x682 = INT32_MAX;
	int64_t x683 = -1LL;
	static volatile int32_t t170 = 0;

    t170 = (x681!=((x682<=x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = -1;
	static volatile int16_t x686 = INT16_MIN;
	int32_t x687 = INT32_MIN;
	int8_t x688 = 1;
	volatile int32_t t171 = 53061498;

    t171 = (x685!=((x686<=x687)==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	uint16_t x690 = 476U;
	uint8_t x691 = 0U;
	volatile int32_t x692 = -1;
	int32_t t172 = -35656019;

    t172 = (x689!=((x690<=x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	int16_t x694 = 7;
	int32_t x696 = INT32_MIN;
	int32_t t173 = 54121;

    t173 = (x693!=((x694<=x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 93U;
	int32_t x699 = 2343497;
	static volatile int32_t x700 = -1;
	int32_t t174 = -103;

    t174 = (x697!=((x698<=x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = -2;
	uint8_t x702 = UINT8_MAX;
	int32_t x703 = INT32_MIN;
	static int8_t x704 = INT8_MIN;
	static volatile int32_t t175 = 58;

    t175 = (x701!=((x702<=x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 7160733068459467114LLU;
	volatile int16_t x707 = INT16_MIN;
	static int8_t x708 = INT8_MIN;
	int32_t t176 = -56;

    t176 = (x705!=((x706<=x707)==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = 3;
	int32_t x710 = -449356657;
	uint8_t x711 = UINT8_MAX;
	uint32_t x712 = UINT32_MAX;
	static int32_t t177 = 391361230;

    t177 = (x709!=((x710<=x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	static int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MIN;
	int32_t t178 = -26094;

    t178 = (x713!=((x714<=x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x719 = -1;
	static int8_t x720 = -1;

    t179 = (x717!=((x718<=x719)==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	int16_t x722 = INT16_MAX;
	int32_t x723 = INT32_MIN;
	int16_t x724 = INT16_MAX;
	static volatile int32_t t180 = -4;

    t180 = (x721!=((x722<=x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	volatile int64_t x726 = 0LL;
	volatile int64_t x727 = INT64_MIN;
	static uint16_t x728 = 102U;
	int32_t t181 = 162790;

    t181 = (x725!=((x726<=x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	static int64_t x730 = -1LL;
	uint16_t x731 = 2U;
	volatile int32_t t182 = -166;

    t182 = (x729!=((x730<=x731)==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = 0;
	static int32_t x735 = INT32_MAX;
	int16_t x736 = INT16_MIN;
	int32_t t183 = -1;

    t183 = (x733!=((x734<=x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 1121U;
	static int8_t x738 = INT8_MIN;
	int32_t x739 = INT32_MAX;
	int64_t x740 = -1LL;
	int32_t t184 = 1513;

    t184 = (x737!=((x738<=x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = 30;
	static volatile uint64_t x743 = UINT64_MAX;
	int8_t x744 = INT8_MAX;
	volatile int32_t t185 = 4469324;

    t185 = (x741!=((x742<=x743)==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = -21330LL;
	static int8_t x746 = INT8_MIN;
	static int8_t x748 = INT8_MAX;

    t186 = (x745!=((x746<=x747)==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x750 = 588795693687LLU;
	volatile int8_t x751 = -1;
	int32_t t187 = -955221;

    t187 = (x749!=((x750<=x751)==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	static int32_t x755 = 31;
	int32_t x756 = INT32_MAX;
	int32_t t188 = 9847278;

    t188 = (x753!=((x754<=x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x759 = 3LL;

    t189 = (x757!=((x758<=x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 20U;
	static int16_t x762 = INT16_MAX;
	int32_t x763 = -2297;
	uint16_t x764 = 265U;
	volatile int32_t t190 = 958238463;

    t190 = (x761!=((x762<=x763)==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = -1;
	volatile int16_t x766 = INT16_MIN;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t191 = 9;

    t191 = (x765!=((x766<=x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = -31;
	static int16_t x771 = INT16_MIN;
	static uint64_t x772 = 41367559572847LLU;
	int32_t t192 = -72763676;

    t192 = (x769!=((x770<=x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 1909LLU;
	volatile int8_t x775 = -1;
	int64_t x776 = -1LL;
	static int32_t t193 = -123264;

    t193 = (x773!=((x774<=x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 1966LLU;
	int16_t x778 = -1;
	int8_t x779 = -6;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t194 = 295333;

    t194 = (x777!=((x778<=x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = -1LL;
	int64_t x783 = INT64_MAX;
	volatile int32_t x784 = -1;

    t195 = (x781!=((x782<=x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 13U;
	int32_t x786 = 127433;
	static int32_t x787 = INT32_MIN;
	volatile uint32_t x788 = 1853279U;
	int32_t t196 = -3;

    t196 = (x785!=((x786<=x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = 1;
	int64_t x792 = -226693LL;
	volatile int32_t t197 = 64446;

    t197 = (x789!=((x790<=x791)==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static int32_t x795 = -1;
	static int32_t x796 = INT32_MIN;
	static volatile int32_t t198 = -976623004;

    t198 = (x793!=((x794<=x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x798 = UINT32_MAX;
	int8_t x799 = 55;
	int64_t x800 = -886LL;
	int32_t t199 = 268564200;

    t199 = (x797!=((x798<=x799)==x800));

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

