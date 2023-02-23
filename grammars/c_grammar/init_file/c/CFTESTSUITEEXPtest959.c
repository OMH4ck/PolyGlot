
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

volatile int16_t x4 = INT16_MIN;
int16_t x6 = 0;
int64_t x8 = -62362692501357LL;
int64_t x9 = INT64_MIN;
volatile int32_t t2 = 54778;
int8_t x29 = INT8_MAX;
int64_t x31 = -813321218591285LL;
volatile int32_t t7 = 224416764;
int8_t x35 = INT8_MIN;
volatile int32_t t8 = 0;
int32_t x37 = -60412;
volatile uint32_t x38 = 421053U;
int16_t x40 = 342;
uint8_t x42 = 1U;
static int32_t t10 = 34;
uint16_t x48 = UINT16_MAX;
uint64_t x50 = 5410797984LLU;
uint16_t x54 = 81U;
int32_t x55 = INT32_MAX;
int32_t t14 = -1;
static uint8_t x64 = UINT8_MAX;
volatile int32_t t16 = -477299;
volatile int64_t x70 = -1LL;
volatile int32_t x80 = INT32_MIN;
static int32_t x86 = 200;
int32_t t22 = 216;
static volatile int32_t t23 = -58610;
volatile int32_t x97 = -1;
uint16_t x108 = 106U;
static volatile int64_t x111 = INT64_MAX;
volatile int32_t t27 = -218698243;
static volatile int32_t t29 = -852965837;
int8_t x129 = 0;
static int64_t x132 = -58621LL;
static int64_t x135 = -1LL;
int32_t x138 = -1;
static uint16_t x142 = UINT16_MAX;
int64_t x146 = INT64_MIN;
int16_t x153 = 0;
uint16_t x155 = 431U;
int16_t x156 = 96;
int16_t x157 = INT16_MIN;
int16_t x159 = 452;
int32_t t39 = -503;
int64_t x161 = -1LL;
static uint32_t x163 = 129108943U;
int32_t x172 = INT32_MIN;
int32_t x186 = INT32_MAX;
volatile int32_t t46 = 2061480;
int64_t x193 = INT64_MIN;
int32_t x198 = -1;
int32_t x202 = 97116974;
volatile int32_t t50 = -60156;
int32_t x214 = -6;
int64_t x216 = 19436099765669641LL;
int32_t t53 = 416;
volatile int16_t x218 = INT16_MIN;
int32_t x220 = INT32_MIN;
int32_t x225 = 7378;
int32_t x231 = -2;
uint16_t x234 = 6592U;
uint8_t x237 = UINT8_MAX;
uint16_t x239 = UINT16_MAX;
static int16_t x240 = INT16_MAX;
int32_t t59 = 24741750;
uint32_t x245 = 2603933U;
uint8_t x249 = UINT8_MAX;
static int8_t x252 = 0;
int32_t t62 = 807009;
int32_t x256 = INT32_MIN;
int16_t x258 = -3180;
int16_t x259 = 10673;
int16_t x260 = -1;
int64_t x265 = INT64_MIN;
uint8_t x271 = 1U;
static volatile int32_t x276 = INT32_MIN;
int32_t x278 = INT32_MIN;
static volatile uint8_t x282 = UINT8_MAX;
uint64_t x289 = UINT64_MAX;
volatile uint16_t x294 = UINT16_MAX;
int64_t x301 = INT64_MAX;
static int32_t t76 = 5785;
volatile uint8_t x309 = UINT8_MAX;
uint8_t x312 = 14U;
uint64_t x317 = 69407LLU;
int16_t x318 = 2083;
uint8_t x322 = UINT8_MAX;
static volatile int64_t x331 = INT64_MAX;
int64_t x332 = -1216325LL;
int32_t x334 = INT32_MIN;
uint64_t x338 = 1890206746127959LLU;
uint32_t x341 = 568539902U;
uint64_t x349 = 118089780444872752LLU;
static int16_t x350 = -1;
int64_t x351 = 1LL;
volatile int32_t t87 = 1526;
static uint64_t x353 = 251LLU;
volatile uint64_t x355 = UINT64_MAX;
int64_t x359 = -1LL;
int16_t x369 = 14;
static volatile uint32_t x370 = UINT32_MAX;
int64_t x373 = -478LL;
uint8_t x376 = 12U;
volatile int32_t t93 = 1170808;
uint32_t x378 = 81399120U;
volatile uint8_t x379 = 2U;
int16_t x384 = INT16_MAX;
int16_t x388 = INT16_MIN;
volatile int16_t x390 = -1;
volatile uint8_t x391 = 2U;
volatile uint32_t x395 = UINT32_MAX;
int16_t x399 = -1;
volatile uint8_t x400 = UINT8_MAX;
static int32_t t103 = 8;
volatile uint8_t x419 = UINT8_MAX;
int8_t x420 = -1;
uint16_t x421 = UINT16_MAX;
static volatile int64_t x423 = -3584564459469LL;
uint16_t x430 = UINT16_MAX;
int16_t x432 = INT16_MIN;
int8_t x434 = -1;
int64_t x437 = INT64_MIN;
static int8_t x439 = -1;
uint16_t x441 = 4153U;
volatile int32_t t110 = -938898;
int64_t x447 = INT64_MIN;
int64_t x448 = -65795335011816LL;
int32_t x462 = INT32_MIN;
static uint8_t x464 = UINT8_MAX;
static uint16_t x465 = 62U;
int64_t x470 = 470688600053198LL;
int32_t x483 = 1;
int16_t x484 = -269;
volatile int32_t t120 = -318;
static volatile int64_t x486 = -1LL;
int32_t t121 = 399153;
uint16_t x492 = UINT16_MAX;
volatile uint64_t x495 = 313414786629481567LLU;
int32_t x496 = INT32_MAX;
volatile int32_t t123 = 15297;
static volatile uint16_t x498 = 6U;
int16_t x499 = 3255;
static int64_t x502 = INT64_MAX;
volatile int8_t x504 = -1;
uint16_t x505 = 112U;
int64_t x508 = -15619LL;
int64_t x510 = 38037LL;
int64_t x514 = INT64_MAX;
int32_t t129 = 977;
uint32_t x527 = UINT32_MAX;
uint32_t x532 = UINT32_MAX;
volatile int32_t t134 = 0;
int64_t x549 = INT64_MIN;
volatile int8_t x551 = 1;
int64_t x553 = INT64_MAX;
int32_t x555 = INT32_MIN;
int32_t t138 = 892;
static int32_t x557 = 120915;
static int64_t x558 = -1LL;
uint64_t x561 = UINT64_MAX;
static uint8_t x563 = 2U;
volatile int32_t t140 = 71;
static uint8_t x565 = 2U;
int64_t x566 = 73951LL;
int32_t t141 = 45;
uint8_t x575 = 14U;
int16_t x589 = -1;
int8_t x592 = -1;
int8_t x593 = 3;
int64_t x595 = INT64_MAX;
volatile int32_t t149 = -16088025;
uint64_t x609 = 24812547632721LLU;
int8_t x610 = -1;
uint64_t x612 = 1LLU;
static int16_t x614 = 1;
uint8_t x641 = UINT8_MAX;
int32_t x642 = -1;
static int32_t x644 = INT32_MAX;
int16_t x659 = 15;
int32_t x660 = -1;
volatile int32_t t162 = 1711462;
volatile int16_t x669 = INT16_MIN;
volatile int32_t t165 = -10514;
int16_t x677 = -50;
int16_t x680 = INT16_MIN;
int16_t x682 = INT16_MAX;
int32_t x696 = INT32_MIN;
static int32_t t171 = 119874;
static volatile int64_t x700 = INT64_MAX;
volatile int16_t x703 = INT16_MAX;
static int32_t x705 = 48070496;
int32_t t174 = 1;
int8_t x710 = -3;
volatile int64_t x713 = INT64_MIN;
int64_t x721 = INT64_MIN;
uint64_t x723 = UINT64_MAX;
int32_t t179 = 5529;
int16_t x736 = 3;
static int32_t x740 = INT32_MIN;
uint8_t x742 = 1U;
uint16_t x749 = UINT16_MAX;
static volatile uint64_t x754 = 153521023756LLU;
int64_t x758 = INT64_MAX;
volatile int32_t t187 = 555845;
static int16_t x770 = INT16_MIN;
volatile int32_t t190 = -6174;
volatile int32_t t192 = 12;
int64_t x789 = INT64_MIN;
uint64_t x791 = 1559519LLU;
uint8_t x794 = UINT8_MAX;
int32_t t194 = 2012;
volatile int16_t x798 = 0;
static uint16_t x803 = 9087U;
uint32_t x808 = UINT32_MAX;


void f0(void) {
    	int64_t x1 = -1LL;
	static int8_t x2 = -1;
	int64_t x3 = -1LL;
	static int32_t t0 = -2454;

    t0 = (x1!=((x2%x3)|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 14U;
	int8_t x7 = INT8_MAX;
	volatile int32_t t1 = 90152;

    t1 = (x5!=((x6%x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	uint32_t x11 = 1623U;
	int8_t x12 = 2;

    t2 = (x9!=((x10%x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x13 = 158U;
	int8_t x14 = INT8_MAX;
	static uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -108199;

    t3 = (x13!=((x14%x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 13021;
	uint32_t x18 = 17669U;
	uint16_t x19 = 1060U;
	volatile int16_t x20 = INT16_MAX;
	static int32_t t4 = -31303271;

    t4 = (x17!=((x18%x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	static int16_t x24 = -1;
	int32_t t5 = -1;

    t5 = (x21!=((x22%x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	static int64_t x26 = -2503146446265003LL;
	uint64_t x27 = 59528070LLU;
	static int32_t x28 = -6723;
	int32_t t6 = -113743741;

    t6 = (x25!=((x26%x27)|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 1723871U;
	uint32_t x32 = 52U;

    t7 = (x29!=((x30%x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 6U;
	int64_t x34 = 9910337559772391LL;
	int32_t x36 = 91;

    t8 = (x33!=((x34%x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x39 = UINT16_MAX;
	int32_t t9 = -160;

    t9 = (x37!=((x38%x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 1U;
	int8_t x43 = -41;
	static int32_t x44 = -1;

    t10 = (x41!=((x42%x43)|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 108U;
	uint8_t x46 = 37U;
	int8_t x47 = 1;
	int32_t t11 = -10119646;

    t11 = (x45!=((x46%x47)|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static int32_t x51 = INT32_MIN;
	int32_t x52 = -297255;
	int32_t t12 = 15;

    t12 = (x49!=((x50%x51)|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 0;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t13 = 19172;

    t13 = (x53!=((x54%x55)|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = -1;
	static int8_t x58 = 20;
	volatile int64_t x59 = 111016837LL;
	uint64_t x60 = 272149376313228261LLU;

    t14 = (x57!=((x58%x59)|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MAX;
	volatile int32_t x63 = INT32_MIN;
	int32_t t15 = -1;

    t15 = (x61!=((x62%x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = -1;
	static int8_t x67 = -1;
	int64_t x68 = 8LL;

    t16 = (x65!=((x66%x67)|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -7;
	static int16_t x71 = INT16_MAX;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = 3;

    t17 = (x69!=((x70%x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 25981LL;
	int32_t x74 = INT32_MAX;
	int32_t x75 = 3692804;
	volatile int64_t x76 = -1LL;
	int32_t t18 = 1277837;

    t18 = (x73!=((x74%x75)|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	static uint8_t x78 = 21U;
	uint64_t x79 = 13684172LLU;
	int32_t t19 = 5909294;

    t19 = (x77!=((x78%x79)|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = 5;
	int32_t t20 = 79305;

    t20 = (x81!=((x82%x83)|x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MIN;
	uint32_t x87 = 15U;
	volatile int16_t x88 = INT16_MAX;
	int32_t t21 = -15997218;

    t21 = (x85!=((x86%x87)|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MAX;
	int8_t x91 = -1;
	int64_t x92 = INT64_MAX;

    t22 = (x89!=((x90%x91)|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	int32_t x95 = 948783947;
	int32_t x96 = 3;

    t23 = (x93!=((x94%x95)|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 164364U;
	int32_t t24 = -3405;

    t24 = (x97!=((x98%x99)|x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = 4165;
	static uint32_t x102 = UINT32_MAX;
	static volatile int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = 0U;
	int32_t t25 = -774450;

    t25 = (x101!=((x102%x103)|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	static int32_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	int32_t t26 = -14845;

    t26 = (x105!=((x106%x107)|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	int64_t x110 = -3600849776LL;
	int8_t x112 = INT8_MIN;

    t27 = (x109!=((x110%x111)|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	static uint64_t x114 = 128LLU;
	int64_t x115 = -121482898021458749LL;
	uint8_t x116 = 1U;
	static volatile int32_t t28 = 6200;

    t28 = (x113!=((x114%x115)|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	volatile int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = 0U;

    t29 = (x117!=((x118%x119)|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MIN;
	int8_t x122 = -1;
	static uint16_t x123 = 28U;
	int32_t x124 = -79688439;
	volatile int32_t t30 = 0;

    t30 = (x121!=((x122%x123)|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	volatile uint32_t x128 = 2322U;
	volatile int32_t t31 = 173;

    t31 = (x125!=((x126%x127)|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = 4362U;
	static uint16_t x131 = 6429U;
	static volatile int32_t t32 = -20;

    t32 = (x129!=((x130%x131)|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	static int16_t x134 = -1;
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = -146077;

    t33 = (x133!=((x134%x135)|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	int16_t x139 = -1;
	volatile int8_t x140 = -32;
	int32_t t34 = -6653465;

    t34 = (x137!=((x138%x139)|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = 7U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 3;

    t35 = (x141!=((x142%x143)|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	static int8_t x147 = INT8_MIN;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = -1;

    t36 = (x145!=((x146%x147)|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = INT8_MAX;
	static int32_t t37 = -5;

    t37 = (x149!=((x150%x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x154 = UINT8_MAX;
	volatile int32_t t38 = -2878;

    t38 = (x153!=((x154%x155)|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -610LL;
	static uint32_t x160 = 219U;

    t39 = (x157!=((x158%x159)|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = -5;

    t40 = (x161!=((x162%x163)|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = UINT64_MAX;
	int16_t x166 = -1;
	volatile int16_t x167 = INT16_MIN;
	uint16_t x168 = 1495U;
	int32_t t41 = 14986950;

    t41 = (x165!=((x166%x167)|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = UINT64_MAX;
	volatile uint32_t x170 = 59364045U;
	int16_t x171 = INT16_MIN;
	volatile int32_t t42 = 7849;

    t42 = (x169!=((x170%x171)|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 18962858801024088LL;
	uint64_t x174 = 406922032689994LLU;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 1520895;

    t43 = (x173!=((x174%x175)|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = 4;
	int64_t x178 = -4776353471LL;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = -1;
	volatile int32_t t44 = -2666224;

    t44 = (x177!=((x178%x179)|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MAX;
	int32_t x183 = -1084;
	uint16_t x184 = 2U;
	static int32_t t45 = 129;

    t45 = (x181!=((x182%x183)|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 0U;
	int8_t x187 = 59;
	volatile int16_t x188 = -41;

    t46 = (x185!=((x186%x187)|x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -199495476;

    t47 = (x189!=((x190%x191)|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = 145481935;
	int8_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 48771;

    t48 = (x193!=((x194%x195)|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = 57;
	volatile int32_t t49 = 1009196;

    t49 = (x197!=((x198%x199)|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = INT8_MIN;
	static uint8_t x203 = 1U;
	uint32_t x204 = 672308718U;

    t50 = (x201!=((x202%x203)|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -311529179699770LL;
	uint8_t x206 = 116U;
	static int32_t x207 = INT32_MIN;
	uint64_t x208 = 9359LLU;
	int32_t t51 = 853119089;

    t51 = (x205!=((x206%x207)|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 408651761587766141LL;
	volatile int64_t x210 = INT64_MAX;
	static int32_t x211 = -1;
	static uint32_t x212 = 2982469U;
	static volatile int32_t t52 = -3650248;

    t52 = (x209!=((x210%x211)|x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	uint32_t x215 = 202689130U;

    t53 = (x213!=((x214%x215)|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	uint64_t x219 = 33893838319557LLU;
	int32_t t54 = -3;

    t54 = (x217!=((x218%x219)|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	uint16_t x222 = 1117U;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -9354908215251651LL;
	int32_t t55 = -1587166;

    t55 = (x221!=((x222%x223)|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = 3;
	uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 86102417U;
	int32_t t56 = -1982703;

    t56 = (x225!=((x226%x227)|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 7U;
	static int32_t x230 = 252;
	int32_t x232 = -1;
	volatile int32_t t57 = 0;

    t57 = (x229!=((x230%x231)|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	static int32_t x235 = 424794;
	uint16_t x236 = 728U;
	int32_t t58 = -49261310;

    t58 = (x233!=((x234%x235)|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MAX;

    t59 = (x237!=((x238%x239)|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	static uint8_t x242 = 1U;
	uint16_t x243 = 14175U;
	int8_t x244 = 0;
	int32_t t60 = -4206;

    t60 = (x241!=((x242%x243)|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = 10;
	int32_t x248 = -1762686;
	volatile int32_t t61 = -633478823;

    t61 = (x245!=((x246%x247)|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	uint8_t x251 = 2U;

    t62 = (x249!=((x250%x251)|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	static volatile int64_t x254 = -1LL;
	uint8_t x255 = 14U;
	volatile int32_t t63 = -105;

    t63 = (x253!=((x254%x255)|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t t64 = -411327658;

    t64 = (x257!=((x258%x259)|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 2;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -946;

    t65 = (x261!=((x262%x263)|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = 12891470325649LLU;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MAX;
	int32_t t66 = -33280940;

    t66 = (x265!=((x266%x267)|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 4562U;
	static int16_t x270 = 974;
	int64_t x272 = INT64_MIN;
	volatile int32_t t67 = -266263;

    t67 = (x269!=((x270%x271)|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -9936;
	uint16_t x274 = 0U;
	int16_t x275 = INT16_MAX;
	int32_t t68 = 74069;

    t68 = (x273!=((x274%x275)|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -255;
	int16_t x279 = 4;
	static volatile uint64_t x280 = 20LLU;
	volatile int32_t t69 = 23307;

    t69 = (x277!=((x278%x279)|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -10633LL;
	int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = 13U;
	static volatile int32_t t70 = 226892019;

    t70 = (x281!=((x282%x283)|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	static uint32_t x286 = 2171U;
	int32_t x287 = -691;
	volatile int64_t x288 = INT64_MIN;
	int32_t t71 = -485702;

    t71 = (x285!=((x286%x287)|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x290 = INT16_MAX;
	uint32_t x291 = 29069173U;
	static uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -14549;

    t72 = (x289!=((x290%x291)|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	int8_t x295 = -1;
	static uint8_t x296 = 8U;
	volatile int32_t t73 = 129;

    t73 = (x293!=((x294%x295)|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x298 = -237167358485594754LL;
	uint32_t x299 = 254U;
	int64_t x300 = 3938332044382LL;
	int32_t t74 = -809477732;

    t74 = (x297!=((x298%x299)|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x302 = INT32_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile int16_t x304 = -1;
	int32_t t75 = -176903945;

    t75 = (x301!=((x302%x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 732;
	uint64_t x306 = 454520782393LLU;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;

    t76 = (x305!=((x306%x307)|x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x310 = 28U;
	uint16_t x311 = 11362U;
	static volatile int32_t t77 = -10;

    t77 = (x309!=((x310%x311)|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	uint16_t x314 = 1564U;
	int16_t x315 = -1;
	uint8_t x316 = 6U;
	int32_t t78 = -5;

    t78 = (x313!=((x314%x315)|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x319 = 5;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = -47;

    t79 = (x317!=((x318%x319)|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -28795;

    t80 = (x321!=((x322%x323)|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = UINT16_MAX;
	static int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	uint16_t x328 = 264U;
	static volatile int32_t t81 = 2397;

    t81 = (x325!=((x326%x327)|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x329 = 11U;
	int64_t x330 = -1LL;
	volatile int32_t t82 = 413516992;

    t82 = (x329!=((x330%x331)|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 2191597651008925LLU;
	int8_t x335 = INT8_MAX;
	int8_t x336 = 56;
	volatile int32_t t83 = 207;

    t83 = (x333!=((x334%x335)|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 6;
	volatile uint8_t x339 = 36U;
	uint8_t x340 = 50U;
	static int32_t t84 = 3;

    t84 = (x337!=((x338%x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MIN;
	static int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t85 = 25957;

    t85 = (x341!=((x342%x343)|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 1U;
	uint8_t x346 = 31U;
	int8_t x347 = -3;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = -124469;

    t86 = (x345!=((x346%x347)|x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x352 = INT32_MAX;

    t87 = (x349!=((x350%x351)|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	static int16_t x356 = 715;
	volatile int32_t t88 = 239;

    t88 = (x353!=((x354%x355)|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	int8_t x360 = -3;
	static volatile int32_t t89 = -3274;

    t89 = (x357!=((x358%x359)|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 27U;
	static uint32_t x362 = UINT32_MAX;
	uint64_t x363 = UINT64_MAX;
	volatile uint32_t x364 = 725147U;
	volatile int32_t t90 = 201;

    t90 = (x361!=((x362%x363)|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 9439U;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = -16381;
	int8_t x368 = -1;
	int32_t t91 = -5801636;

    t91 = (x365!=((x366%x367)|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x371 = 14U;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = -79984;

    t92 = (x369!=((x370%x371)|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MAX;
	int64_t x375 = INT64_MIN;

    t93 = (x373!=((x374%x375)|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 1;
	int32_t x380 = -1;
	static volatile int32_t t94 = 121882410;

    t94 = (x377!=((x378%x379)|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = -851130LL;
	uint16_t x382 = 26U;
	int32_t x383 = -224134;
	int32_t t95 = -3067424;

    t95 = (x381!=((x382%x383)|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = 0;
	int8_t x386 = INT8_MIN;
	volatile int32_t x387 = INT32_MIN;
	static int32_t t96 = 1;

    t96 = (x385!=((x386%x387)|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = -1;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = 0;

    t97 = (x389!=((x390%x391)|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	volatile uint64_t x394 = 1504295LLU;
	int32_t x396 = -82;
	int32_t t98 = -27;

    t98 = (x393!=((x394%x395)|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MAX;
	volatile uint8_t x398 = UINT8_MAX;
	volatile int32_t t99 = -55;

    t99 = (x397!=((x398%x399)|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MAX;
	uint64_t x402 = UINT64_MAX;
	uint64_t x403 = 3025977579296LLU;
	uint16_t x404 = 5867U;
	int32_t t100 = 1;

    t100 = (x401!=((x402%x403)|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int64_t x406 = 59904667LL;
	int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 5;

    t101 = (x405!=((x406%x407)|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 11629U;
	volatile uint64_t x410 = UINT64_MAX;
	volatile int8_t x411 = INT8_MIN;
	static int32_t x412 = INT32_MIN;
	static int32_t t102 = -3;

    t102 = (x409!=((x410%x411)|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 0U;
	int8_t x414 = INT8_MAX;
	uint32_t x415 = 5U;
	volatile int32_t x416 = -6514210;

    t103 = (x413!=((x414%x415)|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = 1;
	volatile int32_t t104 = -47;

    t104 = (x417!=((x418%x419)|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t105 = 426;

    t105 = (x421!=((x422%x423)|x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -440676677LL;
	int8_t x426 = INT8_MIN;
	int32_t x427 = -66651764;
	int32_t x428 = 1191;
	volatile int32_t t106 = -1134;

    t106 = (x425!=((x426%x427)|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x429 = 114068291U;
	static uint32_t x431 = UINT32_MAX;
	volatile int32_t t107 = -7231;

    t107 = (x429!=((x430%x431)|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -7844;
	static uint16_t x435 = UINT16_MAX;
	int32_t x436 = 231;
	int32_t t108 = -1;

    t108 = (x433!=((x434%x435)|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = -1841;
	static uint64_t x440 = 2698693875LLU;
	static int32_t t109 = -15;

    t109 = (x437!=((x438%x439)|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = -1;
	volatile uint32_t x443 = 215226390U;
	volatile int16_t x444 = 167;

    t110 = (x441!=((x442%x443)|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 16U;
	uint64_t x446 = 3311198070707864058LLU;
	int32_t t111 = 508699784;

    t111 = (x445!=((x446%x447)|x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MAX;
	int32_t x450 = -12;
	int64_t x451 = INT64_MIN;
	int16_t x452 = -63;
	static volatile int32_t t112 = -6893111;

    t112 = (x449!=((x450%x451)|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 1U;
	int32_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;
	volatile int32_t t113 = 160;

    t113 = (x453!=((x454%x455)|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	static int16_t x458 = 5717;
	int8_t x459 = -1;
	static volatile int8_t x460 = 2;
	volatile int32_t t114 = 3493;

    t114 = (x457!=((x458%x459)|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	static int32_t x463 = INT32_MIN;
	int32_t t115 = 542654;

    t115 = (x461!=((x462%x463)|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x466 = 94U;
	uint64_t x467 = 170402815448LLU;
	int8_t x468 = -9;
	int32_t t116 = 5;

    t116 = (x465!=((x466%x467)|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -430804267055370LL;
	uint16_t x471 = UINT16_MAX;
	volatile uint16_t x472 = 4579U;
	int32_t t117 = 128;

    t117 = (x469!=((x470%x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = -1;
	static int64_t x474 = INT64_MIN;
	uint64_t x475 = 26256854619000620LLU;
	int16_t x476 = -1;
	int32_t t118 = 2832262;

    t118 = (x473!=((x474%x475)|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 8824U;
	uint64_t x478 = 1256728781351LLU;
	int16_t x479 = 5455;
	int16_t x480 = -1;
	static volatile int32_t t119 = 3019;

    t119 = (x477!=((x478%x479)|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x481 = UINT8_MAX;
	uint32_t x482 = 2U;

    t120 = (x481!=((x482%x483)|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = 0;
	volatile uint8_t x487 = 4U;
	static uint16_t x488 = 61U;

    t121 = (x485!=((x486%x487)|x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -3;
	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	volatile int32_t t122 = -1345;

    t122 = (x489!=((x490%x491)|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x493 = 150900LLU;
	int16_t x494 = INT16_MAX;

    t123 = (x493!=((x494%x495)|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 381964812LLU;
	int32_t x500 = 1;
	volatile int32_t t124 = -185810458;

    t124 = (x497!=((x498%x499)|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 1U;
	int16_t x503 = INT16_MIN;
	static int32_t t125 = 1024977615;

    t125 = (x501!=((x502%x503)|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = 28U;
	int32_t x507 = INT32_MAX;
	volatile int32_t t126 = -5;

    t126 = (x505!=((x506%x507)|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 13;
	int64_t x511 = INT64_MIN;
	static uint8_t x512 = 0U;
	int32_t t127 = 0;

    t127 = (x509!=((x510%x511)|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x515 = INT32_MAX;
	volatile uint8_t x516 = 16U;
	int32_t t128 = -12;

    t128 = (x513!=((x514%x515)|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 15U;
	int64_t x518 = -1LL;
	uint8_t x519 = 18U;
	static int8_t x520 = INT8_MIN;

    t129 = (x517!=((x518%x519)|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = UINT8_MAX;
	int16_t x522 = -2014;
	int64_t x523 = INT64_MIN;
	int8_t x524 = 1;
	volatile int32_t t130 = -1055672119;

    t130 = (x521!=((x522%x523)|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x525 = 573387480779993163LLU;
	volatile int8_t x526 = -17;
	uint64_t x528 = 186849439991057LLU;
	int32_t t131 = -116564;

    t131 = (x525!=((x526%x527)|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 59;
	uint64_t x530 = UINT64_MAX;
	static int64_t x531 = INT64_MAX;
	int32_t t132 = -244368;

    t132 = (x529!=((x530%x531)|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = -6;
	int32_t x534 = -1;
	int8_t x535 = INT8_MIN;
	uint32_t x536 = UINT32_MAX;
	static int32_t t133 = -3439981;

    t133 = (x533!=((x534%x535)|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = 16LL;
	volatile int64_t x538 = 812411LL;
	volatile int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MIN;

    t134 = (x537!=((x538%x539)|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = INT8_MIN;
	static int8_t x542 = 1;
	int8_t x543 = 33;
	uint8_t x544 = UINT8_MAX;
	int32_t t135 = -15;

    t135 = (x541!=((x542%x543)|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MAX;
	volatile int16_t x546 = INT16_MIN;
	int16_t x547 = -4;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -5;

    t136 = (x545!=((x546%x547)|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -9863107;
	int64_t x552 = -1LL;
	int32_t t137 = 2977;

    t137 = (x549!=((x550%x551)|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = 28U;
	int32_t x556 = 18271;

    t138 = (x553!=((x554%x555)|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x559 = -7590;
	volatile int16_t x560 = -1;
	volatile int32_t t139 = -26230;

    t139 = (x557!=((x558%x559)|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = 227;
	uint16_t x564 = 1562U;

    t140 = (x561!=((x562%x563)|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x567 = -10427;
	static int64_t x568 = 27LL;

    t141 = (x565!=((x566%x567)|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 9549U;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = 18680U;
	volatile int64_t x572 = -42078609627LL;
	volatile int32_t t142 = -1290219;

    t142 = (x569!=((x570%x571)|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MAX;
	static int8_t x574 = -11;
	int64_t x576 = -55046486497651144LL;
	int32_t t143 = 16351718;

    t143 = (x573!=((x574%x575)|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x577 = 0U;
	static uint32_t x578 = UINT32_MAX;
	uint8_t x579 = 1U;
	uint64_t x580 = 1150967272700376512LLU;
	int32_t t144 = -15298;

    t144 = (x577!=((x578%x579)|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 1;
	int8_t x582 = INT8_MAX;
	static int16_t x583 = -1;
	uint8_t x584 = UINT8_MAX;
	int32_t t145 = 620;

    t145 = (x581!=((x582%x583)|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 75;
	int64_t x586 = -8127LL;
	int32_t x587 = INT32_MIN;
	uint16_t x588 = UINT16_MAX;
	int32_t t146 = -3637856;

    t146 = (x585!=((x586%x587)|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x590 = 243;
	int64_t x591 = INT64_MAX;
	int32_t t147 = 959642;

    t147 = (x589!=((x590%x591)|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = -1;
	volatile uint16_t x596 = 17U;
	int32_t t148 = -6620;

    t148 = (x593!=((x594%x595)|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 5;
	static int16_t x598 = INT16_MIN;
	int64_t x599 = 3593LL;
	int64_t x600 = INT64_MIN;

    t149 = (x597!=((x598%x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x605 = INT16_MIN;
	volatile int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MAX;
	volatile int64_t x608 = INT64_MAX;
	int32_t t150 = -122460;

    t150 = (x605!=((x606%x607)|x608));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x611 = UINT16_MAX;
	static volatile int32_t t151 = 0;

    t151 = (x609!=((x610%x611)|x612));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x613 = 7U;
	int64_t x615 = 3931637663900LL;
	int32_t x616 = INT32_MAX;
	int32_t t152 = 34420203;

    t152 = (x613!=((x614%x615)|x616));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x617 = INT64_MIN;
	static int16_t x618 = -1;
	int8_t x619 = -1;
	volatile int64_t x620 = INT64_MAX;
	int32_t t153 = 3216169;

    t153 = (x617!=((x618%x619)|x620));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x625 = INT64_MIN;
	uint64_t x626 = UINT64_MAX;
	int16_t x627 = INT16_MIN;
	int8_t x628 = -1;
	static volatile int32_t t154 = 315070;

    t154 = (x625!=((x626%x627)|x628));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x629 = -1;
	static volatile int8_t x630 = 22;
	uint8_t x631 = UINT8_MAX;
	int8_t x632 = INT8_MIN;
	int32_t t155 = 9689780;

    t155 = (x629!=((x630%x631)|x632));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x633 = UINT64_MAX;
	volatile int32_t x634 = -1;
	volatile int16_t x635 = -2559;
	int32_t x636 = INT32_MIN;
	static int32_t t156 = -5237734;

    t156 = (x633!=((x634%x635)|x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x637 = -2;
	uint64_t x638 = 1318LLU;
	static int8_t x639 = INT8_MAX;
	int64_t x640 = -29655620745LL;
	int32_t t157 = -26066008;

    t157 = (x637!=((x638%x639)|x640));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x643 = INT32_MIN;
	int32_t t158 = 30118;

    t158 = (x641!=((x642%x643)|x644));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x645 = 7U;
	uint32_t x646 = 23081302U;
	int8_t x647 = INT8_MIN;
	int64_t x648 = INT64_MIN;
	int32_t t159 = 4102638;

    t159 = (x645!=((x646%x647)|x648));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x649 = UINT32_MAX;
	uint8_t x650 = UINT8_MAX;
	int16_t x651 = -28;
	int8_t x652 = 6;
	volatile int32_t t160 = -2213;

    t160 = (x649!=((x650%x651)|x652));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x653 = INT16_MIN;
	static volatile int8_t x654 = INT8_MIN;
	int64_t x655 = INT64_MIN;
	uint16_t x656 = 14798U;
	int32_t t161 = -5;

    t161 = (x653!=((x654%x655)|x656));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x657 = 77U;
	int16_t x658 = INT16_MIN;

    t162 = (x657!=((x658%x659)|x660));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x661 = INT64_MIN;
	int32_t x662 = INT32_MIN;
	static int8_t x663 = INT8_MIN;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t163 = 445550;

    t163 = (x661!=((x662%x663)|x664));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = -1015;
	static int64_t x667 = 1369115947020LL;
	int64_t x668 = INT64_MIN;
	int32_t t164 = 92392373;

    t164 = (x665!=((x666%x667)|x668));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x670 = 513758LLU;
	uint64_t x671 = UINT64_MAX;
	static volatile int8_t x672 = INT8_MIN;

    t165 = (x669!=((x670%x671)|x672));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x673 = INT8_MIN;
	volatile uint8_t x674 = UINT8_MAX;
	static int64_t x675 = 117087LL;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t166 = 2776433;

    t166 = (x673!=((x674%x675)|x676));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x678 = 1U;
	uint64_t x679 = UINT64_MAX;
	volatile int32_t t167 = 31335745;

    t167 = (x677!=((x678%x679)|x680));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x681 = UINT16_MAX;
	int64_t x683 = -1LL;
	int8_t x684 = INT8_MAX;
	volatile int32_t t168 = 66;

    t168 = (x681!=((x682%x683)|x684));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x685 = 86339LLU;
	int64_t x686 = INT64_MIN;
	int16_t x687 = 8366;
	uint8_t x688 = 113U;
	volatile int32_t t169 = -2;

    t169 = (x685!=((x686%x687)|x688));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x689 = 30U;
	int16_t x690 = INT16_MIN;
	int16_t x691 = -1;
	uint16_t x692 = 19210U;
	int32_t t170 = -188;

    t170 = (x689!=((x690%x691)|x692));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x693 = UINT64_MAX;
	int8_t x694 = INT8_MAX;
	int8_t x695 = INT8_MAX;

    t171 = (x693!=((x694%x695)|x696));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x697 = -1LL;
	volatile int32_t x698 = -1;
	int16_t x699 = INT16_MAX;
	volatile int32_t t172 = -27770082;

    t172 = (x697!=((x698%x699)|x700));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x701 = -1;
	uint16_t x702 = 2620U;
	int32_t x704 = 101;
	volatile int32_t t173 = 3444299;

    t173 = (x701!=((x702%x703)|x704));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x706 = -1;
	int64_t x707 = INT64_MAX;
	int8_t x708 = INT8_MIN;

    t174 = (x705!=((x706%x707)|x708));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x709 = 32013U;
	uint64_t x711 = 646300919703LLU;
	static uint8_t x712 = 0U;
	int32_t t175 = 8612;

    t175 = (x709!=((x710%x711)|x712));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x714 = 56;
	static int16_t x715 = -1;
	uint64_t x716 = UINT64_MAX;
	static volatile int32_t t176 = -845065;

    t176 = (x713!=((x714%x715)|x716));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x717 = INT16_MIN;
	static volatile int8_t x718 = INT8_MIN;
	uint8_t x719 = 21U;
	int64_t x720 = 2259249181007534960LL;
	int32_t t177 = 300;

    t177 = (x717!=((x718%x719)|x720));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x722 = 1889U;
	int16_t x724 = 8;
	volatile int32_t t178 = -3367744;

    t178 = (x721!=((x722%x723)|x724));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = -3;
	volatile int16_t x727 = -1;
	uint8_t x728 = 0U;

    t179 = (x725!=((x726%x727)|x728));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x730 = -1LL;
	uint32_t x731 = 1346U;
	int8_t x732 = INT8_MIN;
	static volatile int32_t t180 = 97512;

    t180 = (x729!=((x730%x731)|x732));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x733 = -1LL;
	static uint64_t x734 = 354128192827178LLU;
	static int16_t x735 = INT16_MIN;
	static volatile int32_t t181 = -204;

    t181 = (x733!=((x734%x735)|x736));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x737 = 55U;
	int8_t x738 = INT8_MIN;
	int16_t x739 = -117;
	volatile int32_t t182 = 9;

    t182 = (x737!=((x738%x739)|x740));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	volatile uint8_t x743 = UINT8_MAX;
	int64_t x744 = INT64_MIN;
	int32_t t183 = 23898328;

    t183 = (x741!=((x742%x743)|x744));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x750 = -1;
	int8_t x751 = INT8_MAX;
	uint16_t x752 = 31U;
	static int32_t t184 = 135849;

    t184 = (x749!=((x750%x751)|x752));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x753 = INT64_MAX;
	int32_t x755 = INT32_MIN;
	static int16_t x756 = -1;
	volatile int32_t t185 = -37699206;

    t185 = (x753!=((x754%x755)|x756));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x757 = 0U;
	int64_t x759 = -58037226843560579LL;
	volatile int64_t x760 = -31947773LL;
	static volatile int32_t t186 = 878;

    t186 = (x757!=((x758%x759)|x760));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = INT32_MIN;
	static uint32_t x762 = 44630767U;
	uint32_t x763 = 182563U;
	uint64_t x764 = 4325110493811822LLU;

    t187 = (x761!=((x762%x763)|x764));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x765 = 2751;
	int64_t x766 = -1LL;
	int8_t x767 = INT8_MIN;
	uint8_t x768 = 113U;
	volatile int32_t t188 = 7;

    t188 = (x765!=((x766%x767)|x768));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x769 = UINT64_MAX;
	static uint16_t x771 = 35U;
	volatile uint32_t x772 = UINT32_MAX;
	volatile int32_t t189 = -395653550;

    t189 = (x769!=((x770%x771)|x772));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = -1;
	uint8_t x779 = UINT8_MAX;
	int32_t x780 = INT32_MAX;

    t190 = (x777!=((x778%x779)|x780));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x781 = -1;
	int32_t x782 = -1;
	static int16_t x783 = 1530;
	volatile int64_t x784 = 622079475945735269LL;
	static int32_t t191 = -4254765;

    t191 = (x781!=((x782%x783)|x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = INT64_MAX;
	uint16_t x787 = 527U;
	uint16_t x788 = 112U;

    t192 = (x785!=((x786%x787)|x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x790 = INT32_MIN;
	volatile uint32_t x792 = 59U;
	volatile int32_t t193 = -7;

    t193 = (x789!=((x790%x791)|x792));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x793 = -1LL;
	static int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MIN;

    t194 = (x793!=((x794%x795)|x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x797 = INT16_MIN;
	int64_t x799 = INT64_MAX;
	volatile int16_t x800 = 193;
	volatile int32_t t195 = -6954;

    t195 = (x797!=((x798%x799)|x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x801 = 9U;
	int16_t x802 = 12;
	volatile int16_t x804 = 0;
	volatile int32_t t196 = -4610;

    t196 = (x801!=((x802%x803)|x804));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x805 = -942;
	volatile int32_t x806 = 1932;
	int32_t x807 = -1;
	volatile int32_t t197 = 414841;

    t197 = (x805!=((x806%x807)|x808));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x809 = 2;
	static volatile uint8_t x810 = UINT8_MAX;
	uint32_t x811 = UINT32_MAX;
	int64_t x812 = -1LL;
	volatile int32_t t198 = 96619226;

    t198 = (x809!=((x810%x811)|x812));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x813 = 13LLU;
	uint64_t x814 = 208682787336318934LLU;
	int16_t x815 = INT16_MAX;
	int8_t x816 = -1;
	static int32_t t199 = 22919680;

    t199 = (x813!=((x814%x815)|x816));

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

