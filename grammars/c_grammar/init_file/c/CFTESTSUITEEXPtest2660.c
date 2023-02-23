
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

int16_t x8 = -27;
uint64_t x10 = UINT64_MAX;
static int16_t x16 = INT16_MAX;
volatile int32_t t3 = -186158;
static int64_t x21 = -1344LL;
static int64_t t5 = 36785798897513348LL;
volatile int64_t t7 = INT64_MIN;
uint16_t x37 = UINT16_MAX;
int16_t x38 = INT16_MIN;
int64_t x43 = INT64_MIN;
volatile uint64_t x44 = 6895478431804923LLU;
int32_t x45 = -1;
int8_t x46 = INT8_MIN;
static int32_t t11 = 1;
uint16_t x54 = UINT16_MAX;
volatile int64_t t14 = 3607838659857268841LL;
volatile int32_t t15 = 23;
uint8_t x69 = 43U;
volatile int64_t x75 = INT64_MAX;
uint32_t x76 = 990470240U;
uint8_t x80 = 0U;
static int8_t x82 = INT8_MIN;
static uint64_t t21 = UINT64_MAX;
int8_t x91 = -1;
static int16_t x96 = -1618;
int64_t t24 = 3690716710788341834LL;
volatile uint64_t x105 = 55958LLU;
int16_t x109 = INT16_MIN;
uint8_t x116 = 43U;
static int8_t x119 = 15;
uint32_t x131 = 4U;
uint64_t x134 = 245009426111744518LLU;
static int64_t x136 = -48953761LL;
int8_t x137 = 1;
int32_t x141 = 629;
volatile uint8_t x142 = UINT8_MAX;
int32_t x146 = -1;
int32_t t42 = 0;
volatile int32_t t43 = 190216;
volatile int32_t t44 = 170707;
uint16_t x182 = 49U;
uint16_t x188 = 11155U;
int32_t t47 = 1;
volatile int64_t x193 = INT64_MAX;
uint8_t x199 = 3U;
int32_t x205 = INT32_MAX;
uint64_t x206 = 28825059973415LLU;
static volatile int32_t t51 = INT32_MAX;
int16_t x212 = INT16_MIN;
volatile int32_t t52 = 2;
uint16_t x215 = 1U;
volatile uint64_t t53 = 983LLU;
uint64_t x217 = 11472523LLU;
uint64_t t54 = 47762051487521LLU;
int64_t x227 = INT64_MIN;
uint32_t x230 = 2U;
volatile int16_t x237 = INT16_MAX;
static int16_t x244 = 0;
static volatile int16_t x247 = 8378;
volatile int64_t x251 = INT64_MIN;
volatile int32_t x257 = INT32_MIN;
static int64_t x259 = INT64_MIN;
static volatile int32_t t64 = INT32_MIN;
volatile int32_t x270 = INT32_MIN;
int16_t x272 = INT16_MAX;
int32_t x273 = INT32_MAX;
int32_t x276 = -509266972;
static volatile int16_t x285 = INT16_MIN;
uint8_t x286 = UINT8_MAX;
uint16_t x288 = 7229U;
static int16_t x291 = -42;
int8_t x294 = -1;
static int16_t x295 = INT16_MAX;
volatile int32_t t74 = -94885884;
volatile int32_t t75 = -91428673;
int16_t x305 = 7;
int16_t x306 = -1;
int16_t x310 = -1;
int8_t x313 = -1;
int32_t t79 = 157272305;
int64_t x327 = INT64_MIN;
static uint16_t x331 = UINT16_MAX;
uint32_t x337 = 682U;
uint32_t t84 = 7713U;
static uint32_t x349 = UINT32_MAX;
int32_t x350 = -1;
volatile uint32_t t87 = UINT32_MAX;
uint64_t x353 = 2LLU;
uint16_t x355 = 229U;
int64_t x359 = -1LL;
static int32_t t90 = -145958641;
int64_t x365 = INT64_MAX;
int16_t x368 = INT16_MIN;
int64_t x371 = 4210426505944LL;
uint16_t x372 = 7772U;
uint16_t x375 = 0U;
int8_t x376 = -1;
static uint8_t x379 = 2U;
volatile int8_t x382 = 30;
int32_t x386 = INT32_MIN;
int64_t x390 = INT64_MIN;
uint64_t x393 = UINT64_MAX;
int8_t x396 = -1;
int32_t t100 = -1489;
volatile int16_t x409 = INT16_MIN;
int16_t x412 = INT16_MIN;
static volatile int32_t t102 = -1;
int32_t x415 = -1030028452;
volatile int8_t x425 = 0;
int16_t x429 = INT16_MIN;
int32_t t108 = -7078;
int16_t x442 = -19;
volatile uint32_t x443 = 2628620U;
int64_t x444 = 7129LL;
static int8_t x447 = INT8_MAX;
int64_t x451 = INT64_MIN;
int64_t t112 = INT64_MIN;
int32_t x453 = 0;
int8_t x456 = INT8_MAX;
uint32_t x470 = 44659592U;
int8_t x471 = INT8_MIN;
volatile int64_t x474 = INT64_MIN;
int16_t x477 = INT16_MIN;
uint64_t x478 = 1213357884941406762LLU;
volatile int32_t x486 = INT32_MAX;
volatile int32_t t122 = 15804552;
uint16_t x502 = UINT16_MAX;
uint16_t x505 = 5U;
volatile int16_t x507 = 10;
uint32_t x511 = 11458U;
uint8_t x516 = UINT8_MAX;
uint32_t x517 = 520U;
volatile int16_t x518 = 48;
static int32_t t131 = -224;
volatile uint8_t x530 = 1U;
uint16_t x533 = 7U;
static volatile int8_t x535 = INT8_MAX;
volatile int32_t t133 = 17;
int64_t x540 = -7914186LL;
static volatile uint32_t t134 = 943U;
int32_t x541 = INT32_MIN;
int32_t x552 = -1;
int16_t x562 = INT16_MAX;
volatile int64_t t141 = 78595215383969288LL;
int8_t x571 = INT8_MAX;
int64_t x574 = INT64_MIN;
static uint64_t x575 = UINT64_MAX;
int64_t x577 = INT64_MAX;
static int32_t t145 = -472332863;
volatile int64_t t148 = INT64_MAX;
int32_t t149 = 1;
uint16_t x604 = 1U;
static int64_t x606 = 1311LL;
static volatile int32_t x607 = 32894100;
int32_t t151 = INT32_MIN;
volatile int16_t x614 = -1;
int32_t x618 = INT32_MIN;
static int32_t x621 = INT32_MAX;
uint32_t x624 = 101344U;
static int32_t x627 = INT32_MAX;
int32_t x641 = 192;
uint16_t x651 = 1U;
volatile int32_t t162 = 25;
uint8_t x658 = 0U;
uint64_t x664 = 1857663788LLU;
int8_t x690 = -1;
int16_t x697 = 3;
static int16_t x699 = 0;
volatile int16_t x702 = 0;
int64_t x712 = INT64_MAX;
int64_t x713 = 21590LL;
int8_t x714 = -1;
uint8_t x715 = 7U;
volatile int16_t x717 = 6;
uint16_t x721 = 905U;
int64_t x728 = -29LL;
uint16_t x731 = UINT16_MAX;
volatile int64_t x732 = INT64_MAX;
volatile uint32_t t182 = 1335U;
uint32_t x736 = 497U;
int8_t x737 = -8;
int8_t x738 = 32;
uint32_t x739 = 3U;
static int32_t x744 = INT32_MAX;
uint64_t x748 = 135854209LLU;
int8_t x759 = 32;
volatile uint8_t x767 = 97U;
int32_t x780 = 212680;
int8_t x783 = INT8_MIN;
int16_t x786 = INT16_MAX;
int32_t t196 = -1841;
int8_t x789 = -1;
int8_t x791 = -1;
volatile int32_t x794 = -1;
uint32_t x796 = UINT32_MAX;
int32_t t198 = 11;
uint16_t x800 = UINT16_MAX;


void f0(void) {
    	uint32_t x1 = 6233U;
	int64_t x2 = -4LL;
	uint64_t x3 = 1759704053573LLU;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 161U;

    t0 = (x1^((x2^x3)==x4));

    if (t0 != 6233U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -11881LL;
	uint64_t x6 = 521299307309325003LLU;
	uint8_t x7 = 8U;
	volatile int64_t t1 = 8685559880881LL;

    t1 = (x5^((x6^x7)==x8));

    if (t1 != -11881LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x11 = INT8_MAX;
	uint64_t x12 = 924838671418240LLU;
	volatile int32_t t2 = INT32_MAX;

    t2 = (x9^((x10^x11)==x12));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = 20;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;

    t3 = (x13^((x14^x15)==x16));

    if (t3 != 20) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MAX;
	int32_t x19 = -913142;
	static int8_t x20 = INT8_MAX;
	int32_t t4 = -1390;

    t4 = (x17^((x18^x19)==x20));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = -18;
	static uint16_t x23 = 24U;
	static int16_t x24 = -1;

    t5 = (x21^((x22^x23)==x24));

    if (t5 != -1344LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 523262046LL;
	volatile int8_t x26 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -5;
	static volatile int64_t t6 = 773864LL;

    t6 = (x25^((x26^x27)==x28));

    if (t6 != 523262046LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = 5;
	volatile uint32_t x31 = 49549U;
	uint16_t x32 = 2U;

    t7 = (x29^((x30^x31)==x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = -1233;
	int64_t x34 = INT64_MIN;
	int8_t x35 = -2;
	volatile uint64_t x36 = 413592758LLU;
	int32_t t8 = 1;

    t8 = (x33^((x34^x35)==x36));

    if (t8 != -1233) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x39 = 1691696699113LL;
	volatile int16_t x40 = 9534;
	volatile int32_t t9 = 0;

    t9 = (x37^((x38^x39)==x40));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	static int64_t x42 = -1LL;
	volatile int32_t t10 = 1;

    t10 = (x41^((x42^x43)==x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;

    t11 = (x45^((x46^x47)==x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -1;
	int64_t x50 = INT64_MAX;
	uint64_t x51 = 439171LLU;
	int8_t x52 = -1;
	int32_t t12 = 0;

    t12 = (x49^((x50^x51)==x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 296585LLU;
	int8_t x55 = -1;
	uint32_t x56 = 18509726U;
	static volatile uint64_t t13 = 1121943419592483089LLU;

    t13 = (x53^((x54^x55)==x56));

    if (t13 != 296585LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = 4;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = 1LL;

    t14 = (x57^((x58^x59)==x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 642U;
	int8_t x62 = INT8_MIN;
	int64_t x63 = 463LL;
	int64_t x64 = INT64_MAX;

    t15 = (x61^((x62^x63)==x64));

    if (t15 != 642) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 116654LLU;
	int8_t x66 = 7;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = UINT8_MAX;
	uint64_t t16 = 631501628396753LLU;

    t16 = (x65^((x66^x67)==x68));

    if (t16 != 116654LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x70 = 7U;
	uint16_t x71 = 17250U;
	int8_t x72 = -22;
	volatile int32_t t17 = 157588822;

    t17 = (x69^((x70^x71)==x72));

    if (t17 != 43) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 8365065614524709801LLU;
	int64_t x74 = -4525LL;
	static uint64_t t18 = 48725714820772LLU;

    t18 = (x73^((x74^x75)==x76));

    if (t18 != 8365065614524709801LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 66U;
	volatile int64_t x78 = INT64_MIN;
	volatile int8_t x79 = 0;
	volatile int32_t t19 = -1482914;

    t19 = (x77^((x78^x79)==x80));

    if (t19 != 66) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 2LLU;
	static int16_t x83 = 2;
	static int16_t x84 = INT16_MIN;
	static volatile uint64_t t20 = 462695381LLU;

    t20 = (x81^((x82^x83)==x84));

    if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	uint64_t x86 = 1247216LLU;
	int16_t x87 = -1;
	int8_t x88 = INT8_MIN;

    t21 = (x85^((x86^x87)==x88));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 6447U;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -428786;

    t22 = (x89^((x90^x91)==x92));

    if (t22 != 6447) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int64_t x94 = -1LL;
	int8_t x95 = 12;
	int32_t t23 = 47;

    t23 = (x93^((x94^x95)==x96));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -300LL;
	volatile int32_t x98 = -2676061;
	int32_t x99 = INT32_MIN;
	static int32_t x100 = -1;

    t24 = (x97^((x98^x99)==x100));

    if (t24 != -300LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	static uint8_t x104 = 10U;
	static volatile int32_t t25 = 51;

    t25 = (x101^((x102^x103)==x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = -3;
	int32_t x107 = -1;
	int8_t x108 = -1;
	uint64_t t26 = 2564400828LLU;

    t26 = (x105^((x106^x107)==x108));

    if (t26 != 55958LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x110 = 3;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 23U;
	volatile int32_t t27 = 1;

    t27 = (x109^((x110^x111)==x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -3;
	int8_t x114 = INT8_MIN;
	uint8_t x115 = UINT8_MAX;
	int32_t t28 = 6;

    t28 = (x113^((x114^x115)==x116));

    if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = 430621901LL;
	int64_t x118 = -1LL;
	int32_t x120 = -239755291;
	int64_t t29 = 1LL;

    t29 = (x117^((x118^x119)==x120));

    if (t29 != 430621901LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -303873322;
	uint8_t x122 = 3U;
	volatile int8_t x123 = 0;
	volatile uint32_t x124 = UINT32_MAX;
	int32_t t30 = -543465436;

    t30 = (x121^((x122^x123)==x124));

    if (t30 != -303873322) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	volatile int32_t x126 = 9214031;
	int64_t x127 = INT64_MAX;
	int64_t x128 = 502084LL;
	int32_t t31 = 2836826;

    t31 = (x125^((x126^x127)==x128));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int32_t x130 = INT32_MIN;
	uint64_t x132 = 3LLU;
	int32_t t32 = -62783;

    t32 = (x129^((x130^x131)==x132));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	uint32_t x135 = 1U;
	volatile uint32_t t33 = UINT32_MAX;

    t33 = (x133^((x134^x135)==x136));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = -1;
	int16_t x139 = INT16_MAX;
	static uint16_t x140 = UINT16_MAX;
	static int32_t t34 = 267285754;

    t34 = (x137^((x138^x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x143 = -1;
	volatile int16_t x144 = 6;
	int32_t t35 = 56687095;

    t35 = (x141^((x142^x143)==x144));

    if (t35 != 629) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = -120812LL;
	static uint8_t x147 = 1U;
	uint8_t x148 = 0U;
	volatile int64_t t36 = 414748194893LL;

    t36 = (x145^((x146^x147)==x148));

    if (t36 != -120812LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = 0;
	static int64_t x150 = -1431460815296442LL;
	uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 18U;
	volatile int32_t t37 = -4766;

    t37 = (x149^((x150^x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	static uint16_t x154 = 51U;
	volatile uint8_t x155 = UINT8_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -2;

    t38 = (x153^((x154^x155)==x156));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 5380391U;
	int64_t x159 = INT64_MAX;
	int16_t x160 = -1;
	static int32_t t39 = -6410;

    t39 = (x157^((x158^x159)==x160));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static int16_t x162 = INT16_MAX;
	int64_t x163 = 12002512249LL;
	int8_t x164 = -24;
	int64_t t40 = 112589707794630129LL;

    t40 = (x161^((x162^x163)==x164));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	uint16_t x166 = 0U;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = INT64_MIN;
	static uint64_t t41 = UINT64_MAX;

    t41 = (x165^((x166^x167)==x168));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = 1U;
	volatile int8_t x170 = -1;
	volatile int16_t x171 = -12;
	int16_t x172 = INT16_MIN;

    t42 = (x169^((x170^x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = 0;
	int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = 5016857U;

    t43 = (x173^((x174^x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	int64_t x178 = 92756083498LL;
	int16_t x179 = INT16_MIN;
	int8_t x180 = 1;

    t44 = (x177^((x178^x179)==x180));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 517413841LL;
	int8_t x183 = 2;
	int16_t x184 = 2309;
	static volatile int64_t t45 = 122829199324LL;

    t45 = (x181^((x182^x183)==x184));

    if (t45 != 517413841LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	volatile int16_t x186 = 221;
	int32_t x187 = -1;
	int64_t t46 = -37703819LL;

    t46 = (x185^((x186^x187)==x188));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x189 = 205U;
	uint16_t x190 = UINT16_MAX;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MAX;

    t47 = (x189^((x190^x191)==x192));

    if (t47 != 205) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x194 = 2190178U;
	static int32_t x195 = INT32_MIN;
	volatile int16_t x196 = INT16_MIN;
	static volatile int64_t t48 = INT64_MAX;

    t48 = (x193^((x194^x195)==x196));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = -1;
	volatile int64_t x200 = -234LL;
	static int64_t t49 = INT64_MIN;

    t49 = (x197^((x198^x199)==x200));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = -256;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = -1;
	int32_t t50 = -359829621;

    t50 = (x201^((x202^x203)==x204));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x207 = UINT16_MAX;
	uint64_t x208 = 157951886844566LLU;

    t51 = (x205^((x206^x207)==x208));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	static uint64_t x211 = 28539437956697955LLU;

    t52 = (x209^((x210^x211)==x212));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = 7133825LLU;
	static int8_t x214 = INT8_MIN;
	static int16_t x216 = INT16_MIN;

    t53 = (x213^((x214^x215)==x216));

    if (t53 != 7133825LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x218 = 26116581U;
	static int32_t x219 = 15663550;
	volatile int64_t x220 = -1LL;

    t54 = (x217^((x218^x219)==x220));

    if (t54 != 11472523LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	static uint16_t x222 = 15333U;
	volatile uint8_t x223 = UINT8_MAX;
	int64_t x224 = -130LL;
	volatile int32_t t55 = 19;

    t55 = (x221^((x222^x223)==x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = INT16_MIN;
	volatile int64_t x226 = INT64_MAX;
	int8_t x228 = -1;
	static volatile int32_t t56 = 21;

    t56 = (x225^((x226^x227)==x228));

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	volatile int64_t x231 = INT64_MAX;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = -6751;

    t57 = (x229^((x230^x231)==x232));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 49U;
	static int16_t x235 = -87;
	uint8_t x236 = UINT8_MAX;
	uint32_t t58 = UINT32_MAX;

    t58 = (x233^((x234^x235)==x236));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = -1;
	int64_t x239 = 45LL;
	int16_t x240 = -21;
	int32_t t59 = 6187;

    t59 = (x237^((x238^x239)==x240));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	uint8_t x242 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	int64_t t60 = 265611132239280305LL;

    t60 = (x241^((x242^x243)==x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MAX;
	static uint64_t x246 = UINT64_MAX;
	int32_t x248 = 0;
	volatile int64_t t61 = INT64_MAX;

    t61 = (x245^((x246^x247)==x248));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	volatile int16_t x250 = -1;
	static int8_t x252 = -1;
	volatile int32_t t62 = -387164;

    t62 = (x249^((x250^x251)==x252));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MAX;
	static uint64_t x254 = 58918184502LLU;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 45U;
	static int32_t t63 = 726798;

    t63 = (x253^((x254^x255)==x256));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	int32_t x260 = 347366529;

    t64 = (x257^((x258^x259)==x260));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	uint16_t x262 = 6U;
	int32_t x263 = -1;
	static volatile uint32_t x264 = 14827U;
	volatile int32_t t65 = 13;

    t65 = (x261^((x262^x263)==x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	int32_t x266 = 476318;
	int64_t x267 = -90377545LL;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = -938038;

    t66 = (x265^((x266^x267)==x268));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 2;
	uint8_t x271 = UINT8_MAX;
	int32_t t67 = -7717;

    t67 = (x269^((x270^x271)==x272));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = 1463;
	int64_t x275 = INT64_MIN;
	volatile int32_t t68 = INT32_MAX;

    t68 = (x273^((x274^x275)==x276));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	static int32_t x279 = -51;
	static uint32_t x280 = 3U;
	int32_t t69 = INT32_MAX;

    t69 = (x277^((x278^x279)==x280));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = UINT64_MAX;
	uint32_t x283 = 86U;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint32_t t70 = UINT32_MAX;

    t70 = (x281^((x282^x283)==x284));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x287 = 13U;
	volatile int32_t t71 = -256984342;

    t71 = (x285^((x286^x287)==x288));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	volatile int8_t x290 = -10;
	int8_t x292 = -2;
	static int32_t t72 = 543037288;

    t72 = (x289^((x290^x291)==x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 12;

    t73 = (x293^((x294^x295)==x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 82U;
	int8_t x298 = -1;
	volatile int16_t x299 = INT16_MIN;
	static int16_t x300 = -73;

    t74 = (x297^((x298^x299)==x300));

    if (t74 != 82) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1456;
	int64_t x302 = 7052LL;
	static int32_t x303 = INT32_MAX;
	int8_t x304 = -1;

    t75 = (x301^((x302^x303)==x304));

    if (t75 != -1456) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x307 = 21LLU;
	static int16_t x308 = -39;
	volatile int32_t t76 = -1;

    t76 = (x305^((x306^x307)==x308));

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = 140208436196LL;
	int32_t t77 = 1133963;

    t77 = (x309^((x310^x311)==x312));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x314 = 3088276470800LL;
	static int8_t x315 = -24;
	int16_t x316 = -188;
	volatile int32_t t78 = -277585;

    t78 = (x313^((x314^x315)==x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	uint64_t x320 = UINT64_MAX;

    t79 = (x317^((x318^x319)==x320));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	static uint64_t x322 = 1864747603LLU;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -1360;
	int32_t t80 = -216843;

    t80 = (x321^((x322^x323)==x324));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static uint16_t x326 = UINT16_MAX;
	uint64_t x328 = 23768893441277LLU;
	volatile int64_t t81 = INT64_MIN;

    t81 = (x325^((x326^x327)==x328));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 28U;
	uint64_t x332 = 19LLU;
	int32_t t82 = -207;

    t82 = (x329^((x330^x331)==x332));

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -4;
	volatile uint8_t x334 = 0U;
	volatile int64_t x335 = -1LL;
	volatile uint16_t x336 = UINT16_MAX;
	int32_t t83 = -3723774;

    t83 = (x333^((x334^x335)==x336));

    if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x338 = 1953U;
	static uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;

    t84 = (x337^((x338^x339)==x340));

    if (t84 != 682U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 4079923041468145LL;
	uint16_t x342 = 1U;
	static int32_t x343 = 98;
	volatile int32_t x344 = -788;
	int64_t t85 = 889LL;

    t85 = (x341^((x342^x343)==x344));

    if (t85 != 4079923041468145LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 70U;
	int64_t x346 = 26374869312164LL;
	uint64_t x347 = 83366602200LLU;
	int8_t x348 = INT8_MIN;
	int32_t t86 = -596814;

    t86 = (x345^((x346^x347)==x348));

    if (t86 != 70) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x351 = 106020;
	uint32_t x352 = 2426889U;

    t87 = (x349^((x350^x351)==x352));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 1U;
	int32_t x356 = 45768551;
	volatile uint64_t t88 = 403992LLU;

    t88 = (x353^((x354^x355)==x356));

    if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 2180669LL;
	uint64_t x358 = 33276294LLU;
	int32_t x360 = 10336501;
	volatile int64_t t89 = 257822LL;

    t89 = (x357^((x358^x359)==x360));

    if (t89 != 2180669LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = 55;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1LL;
	int32_t x364 = -1;

    t90 = (x361^((x362^x363)==x364));

    if (t90 != 55) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MIN;
	uint32_t x367 = 13282098U;
	static volatile int64_t t91 = INT64_MAX;

    t91 = (x365^((x366^x367)==x368));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 10289809697133136LLU;
	uint8_t x370 = 23U;
	volatile uint64_t t92 = 1615266652715LLU;

    t92 = (x369^((x370^x371)==x372));

    if (t92 != 10289809697133136LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = 68159LL;
	uint32_t x374 = UINT32_MAX;
	int64_t t93 = -31978388740LL;

    t93 = (x373^((x374^x375)==x376));

    if (t93 != 68158LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = 34U;
	static volatile int16_t x378 = -1;
	volatile uint8_t x380 = UINT8_MAX;
	volatile int32_t t94 = 2462;

    t94 = (x377^((x378^x379)==x380));

    if (t94 != 34) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 3U;
	int8_t x383 = 2;
	uint16_t x384 = UINT16_MAX;
	volatile uint32_t t95 = 46850681U;

    t95 = (x381^((x382^x383)==x384));

    if (t95 != 3U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 0;
	int64_t x387 = -67317283037182LL;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -32240;

    t96 = (x385^((x386^x387)==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 2;
	static int64_t x391 = INT64_MIN;
	int32_t x392 = -1;
	volatile int32_t t97 = 258271;

    t97 = (x389^((x390^x391)==x392));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x394 = 60U;
	static uint64_t x395 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

    t98 = (x393^((x394^x395)==x396));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MIN;
	static uint16_t x398 = 1968U;
	uint8_t x399 = 1U;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x397^((x398^x399)==x400));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	volatile uint32_t x402 = 16U;
	uint8_t x403 = 28U;
	static volatile int32_t x404 = INT32_MIN;

    t100 = (x401^((x402^x403)==x404));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x405 = 968862LLU;
	uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = 9003618624869113LL;
	int16_t x408 = INT16_MAX;
	uint64_t t101 = 747791371051393LLU;

    t101 = (x405^((x406^x407)==x408));

    if (t101 != 968862LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = INT64_MIN;
	volatile int64_t x411 = INT64_MAX;

    t102 = (x409^((x410^x411)==x412));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 1;
	int16_t x414 = INT16_MIN;
	volatile int16_t x416 = -1;
	int32_t t103 = -329235;

    t103 = (x413^((x414^x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -155931098122252LL;
	static volatile uint16_t x418 = 2036U;
	uint16_t x419 = 481U;
	int32_t x420 = -1;
	volatile int64_t t104 = 4LL;

    t104 = (x417^((x418^x419)==x420));

    if (t104 != -155931098122252LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MIN;
	int64_t x423 = 527779LL;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t105 = 2;

    t105 = (x421^((x422^x423)==x424));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x426 = 5U;
	volatile uint32_t x427 = 524128U;
	int32_t x428 = 1964475;
	int32_t t106 = 3;

    t106 = (x425^((x426^x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MAX;
	static uint16_t x431 = 18U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -229;

    t107 = (x429^((x430^x431)==x432));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x433 = 1U;
	int8_t x434 = INT8_MIN;
	static volatile int64_t x435 = INT64_MAX;
	uint32_t x436 = UINT32_MAX;

    t108 = (x433^((x434^x435)==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	volatile int8_t x440 = -1;
	static volatile int32_t t109 = -20;

    t109 = (x437^((x438^x439)==x440));

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static volatile int32_t t110 = -497325;

    t110 = (x441^((x442^x443)==x444));

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	uint8_t x446 = 0U;
	uint32_t x448 = UINT32_MAX;
	static volatile int64_t t111 = INT64_MIN;

    t111 = (x445^((x446^x447)==x448));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	static int32_t x450 = 30100707;
	int8_t x452 = 0;

    t112 = (x449^((x450^x451)==x452));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x454 = -1LL;
	int64_t x455 = -131461432376571606LL;
	static int32_t t113 = 202;

    t113 = (x453^((x454^x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	int32_t x458 = -44;
	int16_t x459 = -1;
	int32_t x460 = INT32_MIN;
	int64_t t114 = INT64_MIN;

    t114 = (x457^((x458^x459)==x460));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 58587486517826LLU;
	static int16_t x462 = -1;
	int64_t x463 = INT64_MAX;
	int64_t x464 = -3985176450LL;
	uint64_t t115 = 144131LLU;

    t115 = (x461^((x462^x463)==x464));

    if (t115 != 58587486517826LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = -1;
	int32_t t116 = -1;

    t116 = (x465^((x466^x467)==x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = 5;
	volatile int32_t x472 = -1;
	int32_t t117 = 38563;

    t117 = (x469^((x470^x471)==x472));

    if (t117 != 5) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	int8_t x475 = -1;
	int64_t x476 = INT64_MAX;
	static volatile int64_t t118 = 13343307941117290LL;

    t118 = (x473^((x474^x475)==x476));

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x479 = 72197125488LL;
	static uint8_t x480 = 29U;
	static volatile int32_t t119 = 1;

    t119 = (x477^((x478^x479)==x480));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	static int64_t x482 = -1LL;
	static int32_t x483 = -1;
	int16_t x484 = INT16_MIN;
	static int32_t t120 = INT32_MIN;

    t120 = (x481^((x482^x483)==x484));

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MAX;
	uint8_t x487 = 6U;
	static volatile int8_t x488 = 5;
	volatile int32_t t121 = INT32_MAX;

    t121 = (x485^((x486^x487)==x488));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	volatile int32_t x490 = -196;
	int32_t x491 = INT32_MIN;
	int64_t x492 = -1LL;

    t122 = (x489^((x490^x491)==x492));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 3U;
	volatile int8_t x494 = INT8_MIN;
	int32_t x495 = -1;
	volatile int64_t x496 = -1LL;
	volatile int32_t t123 = 0;

    t123 = (x493^((x494^x495)==x496));

    if (t123 != 3) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	int8_t x500 = 0;
	int32_t t124 = -129368;

    t124 = (x497^((x498^x499)==x500));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	static volatile int64_t x503 = INT64_MIN;
	volatile int16_t x504 = 12;
	volatile int32_t t125 = 540369;

    t125 = (x501^((x502^x503)==x504));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = 317657U;
	static uint16_t x508 = 24614U;
	static volatile int32_t t126 = 496761;

    t126 = (x505^((x506^x507)==x508));

    if (t126 != 5) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = -495;
	uint32_t x510 = UINT32_MAX;
	volatile uint32_t x512 = 158849U;
	volatile int32_t t127 = 13134;

    t127 = (x509^((x510^x511)==x512));

    if (t127 != -495) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = -1757102LL;
	int64_t x514 = 59832807448LL;
	volatile uint32_t x515 = 400095U;
	volatile int64_t t128 = 5LL;

    t128 = (x513^((x514^x515)==x516));

    if (t128 != -1757102LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MIN;
	static volatile uint32_t t129 = 47U;

    t129 = (x517^((x518^x519)==x520));

    if (t129 != 520U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	uint32_t x522 = 19363U;
	uint32_t x523 = 28U;
	int64_t x524 = INT64_MIN;
	static volatile int32_t t130 = INT32_MIN;

    t130 = (x521^((x522^x523)==x524));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 1U;
	volatile int32_t x526 = INT32_MIN;
	int32_t x527 = 1;
	int8_t x528 = 40;

    t131 = (x525^((x526^x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	uint16_t x531 = 31U;
	static uint8_t x532 = 117U;
	int32_t t132 = -30;

    t132 = (x529^((x530^x531)==x532));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = INT64_MAX;
	int8_t x536 = INT8_MIN;

    t133 = (x533^((x534^x535)==x536));

    if (t133 != 7) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x537 = 86741U;
	volatile int8_t x538 = INT8_MAX;
	int8_t x539 = INT8_MIN;

    t134 = (x537^((x538^x539)==x540));

    if (t134 != 86741U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = 3041624630400927094LL;
	static int8_t x543 = -5;
	static volatile int32_t x544 = INT32_MIN;
	static volatile int32_t t135 = INT32_MIN;

    t135 = (x541^((x542^x543)==x544));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -24;
	static uint64_t x546 = UINT64_MAX;
	int16_t x547 = -2;
	int8_t x548 = INT8_MAX;
	volatile int32_t t136 = 3037923;

    t136 = (x545^((x546^x547)==x548));

    if (t136 != -24) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	static int8_t x550 = -1;
	int64_t x551 = -1LL;
	int32_t t137 = -1;

    t137 = (x549^((x550^x551)==x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MAX;
	int64_t x554 = INT64_MIN;
	int32_t x555 = -1;
	int8_t x556 = INT8_MIN;
	int32_t t138 = INT32_MAX;

    t138 = (x553^((x554^x555)==x556));

    if (t138 != INT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x557 = INT16_MIN;
	uint16_t x558 = UINT16_MAX;
	int64_t x559 = INT64_MIN;
	volatile uint64_t x560 = 1453492315399531067LLU;
	int32_t t139 = -31530362;

    t139 = (x557^((x558^x559)==x560));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	uint16_t x563 = 0U;
	int16_t x564 = -1;
	int32_t t140 = -75153100;

    t140 = (x561^((x562^x563)==x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	uint64_t x566 = UINT64_MAX;
	int32_t x567 = INT32_MAX;
	volatile uint64_t x568 = UINT64_MAX;

    t141 = (x565^((x566^x567)==x568));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = -7;
	uint16_t x570 = 346U;
	int64_t x572 = INT64_MIN;
	int32_t t142 = -380137;

    t142 = (x569^((x570^x571)==x572));

    if (t142 != -7) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = 18155338800LL;
	volatile int16_t x576 = INT16_MIN;
	volatile int64_t t143 = 12LL;

    t143 = (x573^((x574^x575)==x576));

    if (t143 != 18155338800LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x578 = -56895471658LL;
	uint16_t x579 = UINT16_MAX;
	uint16_t x580 = 473U;
	int64_t t144 = INT64_MAX;

    t144 = (x577^((x578^x579)==x580));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	uint8_t x582 = UINT8_MAX;
	uint16_t x583 = 972U;
	static int64_t x584 = INT64_MIN;

    t145 = (x581^((x582^x583)==x584));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MIN;
	static int32_t x587 = INT32_MAX;
	static int64_t x588 = 51230LL;
	volatile int32_t t146 = -438;

    t146 = (x585^((x586^x587)==x588));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = 7;
	uint16_t x590 = UINT16_MAX;
	int8_t x591 = 7;
	volatile int32_t x592 = INT32_MIN;
	int32_t t147 = 0;

    t147 = (x589^((x590^x591)==x592));

    if (t147 != 7) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = INT64_MAX;
	int8_t x594 = -1;
	volatile int32_t x595 = INT32_MIN;
	int8_t x596 = -1;

    t148 = (x593^((x594^x595)==x596));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 9502U;
	uint16_t x598 = 2U;
	static uint16_t x599 = 40U;
	uint32_t x600 = 4950U;

    t149 = (x597^((x598^x599)==x600));

    if (t149 != 9502) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 64896925824812928LLU;
	static int64_t x602 = INT64_MIN;
	uint8_t x603 = UINT8_MAX;
	volatile uint64_t t150 = 349573133435831628LLU;

    t150 = (x601^((x602^x603)==x604));

    if (t150 != 64896925824812928LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	volatile int32_t x608 = 2;

    t151 = (x605^((x606^x607)==x608));

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = 1;
	uint64_t x610 = 1997347822LLU;
	int64_t x611 = INT64_MAX;
	uint16_t x612 = UINT16_MAX;
	int32_t t152 = 0;

    t152 = (x609^((x610^x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = UINT8_MAX;
	int16_t x615 = INT16_MIN;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -530972643;

    t153 = (x613^((x614^x615)==x616));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 45U;
	int16_t x619 = INT16_MIN;
	uint8_t x620 = UINT8_MAX;
	static volatile int32_t t154 = 1;

    t154 = (x617^((x618^x619)==x620));

    if (t154 != 45) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = 5;
	volatile uint8_t x623 = 1U;
	int32_t t155 = INT32_MAX;

    t155 = (x621^((x622^x623)==x624));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = 14;
	int8_t x626 = 9;
	volatile int16_t x628 = INT16_MIN;
	int32_t t156 = -51974;

    t156 = (x625^((x626^x627)==x628));

    if (t156 != 14) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 99616389U;
	volatile int32_t x630 = INT32_MIN;
	static int64_t x631 = -1LL;
	int64_t x632 = -2LL;
	volatile uint32_t t157 = 883355U;

    t157 = (x629^((x630^x631)==x632));

    if (t157 != 99616389U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	int8_t x634 = -1;
	int16_t x635 = -372;
	static volatile int16_t x636 = INT16_MIN;
	static volatile int32_t t158 = -4809;

    t158 = (x633^((x634^x635)==x636));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	uint32_t x638 = 42U;
	int8_t x639 = -1;
	uint8_t x640 = UINT8_MAX;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x637^((x638^x639)==x640));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x642 = -1;
	volatile int8_t x643 = -5;
	volatile int16_t x644 = INT16_MIN;
	volatile int32_t t160 = 163;

    t160 = (x641^((x642^x643)==x644));

    if (t160 != 192) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	volatile int64_t x646 = 23779457052630LL;
	static uint32_t x647 = 450U;
	int64_t x648 = INT64_MAX;
	volatile int32_t t161 = 0;

    t161 = (x645^((x646^x647)==x648));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 11U;
	uint64_t x650 = UINT64_MAX;
	volatile int32_t x652 = INT32_MIN;

    t162 = (x649^((x650^x651)==x652));

    if (t162 != 11) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 2902547U;
	uint16_t x654 = UINT16_MAX;
	int8_t x655 = -1;
	static int8_t x656 = 7;
	static uint32_t t163 = 12333509U;

    t163 = (x653^((x654^x655)==x656));

    if (t163 != 2902547U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	static uint8_t x659 = 5U;
	int32_t x660 = -1;
	int64_t t164 = INT64_MAX;

    t164 = (x657^((x658^x659)==x660));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = -2;
	int16_t x663 = INT16_MIN;
	volatile int32_t t165 = 26473858;

    t165 = (x661^((x662^x663)==x664));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	int16_t x666 = INT16_MAX;
	int64_t x667 = -1141303414039977528LL;
	uint8_t x668 = UINT8_MAX;
	int32_t t166 = -20864;

    t166 = (x665^((x666^x667)==x668));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -351143050190870LL;
	int32_t x670 = -12;
	static volatile uint64_t x671 = 2660912294127LLU;
	volatile int64_t x672 = 4847405715669LL;
	int64_t t167 = -134328867796229734LL;

    t167 = (x669^((x670^x671)==x672));

    if (t167 != -351143050190870LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	static int64_t x674 = -1LL;
	int32_t x675 = 2201291;
	static uint64_t x676 = UINT64_MAX;
	int32_t t168 = INT32_MAX;

    t168 = (x673^((x674^x675)==x676));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	volatile int32_t x678 = INT32_MIN;
	int64_t x679 = INT64_MIN;
	volatile uint16_t x680 = 888U;
	int32_t t169 = 1094585;

    t169 = (x677^((x678^x679)==x680));

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	static uint64_t x682 = UINT64_MAX;
	int64_t x683 = 84587104130LL;
	int64_t x684 = INT64_MAX;
	volatile int32_t t170 = INT32_MIN;

    t170 = (x681^((x682^x683)==x684));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = INT8_MIN;
	volatile int32_t x686 = INT32_MAX;
	static int64_t x687 = -1LL;
	int16_t x688 = INT16_MAX;
	static volatile int32_t t171 = -471949;

    t171 = (x685^((x686^x687)==x688));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 513448190802052LLU;
	int8_t x691 = INT8_MAX;
	int16_t x692 = INT16_MAX;
	uint64_t t172 = 962912LLU;

    t172 = (x689^((x690^x691)==x692));

    if (t172 != 513448190802052LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 299;
	volatile int8_t x694 = INT8_MIN;
	uint32_t x695 = 246261963U;
	volatile int16_t x696 = INT16_MAX;
	int32_t t173 = -438;

    t173 = (x693^((x694^x695)==x696));

    if (t173 != 299) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = 5864;
	int64_t x700 = -1LL;
	volatile int32_t t174 = 37177498;

    t174 = (x697^((x698^x699)==x700));

    if (t174 != 3) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	uint64_t x703 = 685330LLU;
	uint64_t x704 = UINT64_MAX;
	uint64_t t175 = UINT64_MAX;

    t175 = (x701^((x702^x703)==x704));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 35U;
	volatile uint8_t x706 = 122U;
	int32_t x707 = 0;
	volatile uint8_t x708 = UINT8_MAX;
	static volatile int32_t t176 = -962666;

    t176 = (x705^((x706^x707)==x708));

    if (t176 != 35) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 0;
	int8_t x710 = 46;
	int32_t x711 = INT32_MIN;
	static volatile int32_t t177 = 314557547;

    t177 = (x709^((x710^x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x716 = INT8_MIN;
	int64_t t178 = -559334597612LL;

    t178 = (x713^((x714^x715)==x716));

    if (t178 != 21590LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = INT32_MAX;
	uint64_t x719 = 61931LLU;
	static int8_t x720 = -1;
	volatile int32_t t179 = -3899873;

    t179 = (x717^((x718^x719)==x720));

    if (t179 != 6) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x722 = INT16_MIN;
	int16_t x723 = 53;
	static int32_t x724 = -86844;
	int32_t t180 = -2708;

    t180 = (x721^((x722^x723)==x724));

    if (t180 != 905) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	volatile int16_t x726 = INT16_MAX;
	int16_t x727 = INT16_MAX;
	volatile int32_t t181 = -12676;

    t181 = (x725^((x726^x727)==x728));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 276U;
	static uint8_t x730 = 20U;

    t182 = (x729^((x730^x731)==x732));

    if (t182 != 276U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	static int16_t x734 = INT16_MIN;
	volatile int64_t x735 = INT64_MIN;
	volatile int64_t t183 = INT64_MIN;

    t183 = (x733^((x734^x735)==x736));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x740 = -1;
	volatile int32_t t184 = -62629635;

    t184 = (x737^((x738^x739)==x740));

    if (t184 != -8) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = 116606256620666LL;
	volatile int16_t x742 = 1;
	int8_t x743 = INT8_MIN;
	static int64_t t185 = 1633757LL;

    t185 = (x741^((x742^x743)==x744));

    if (t185 != 116606256620666LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = 1;
	int64_t x746 = 15643LL;
	volatile int8_t x747 = INT8_MIN;
	static volatile int32_t t186 = -25;

    t186 = (x745^((x746^x747)==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 7510U;
	volatile int32_t x750 = INT32_MIN;
	int16_t x751 = INT16_MIN;
	int8_t x752 = -19;
	int32_t t187 = -1340;

    t187 = (x749^((x750^x751)==x752));

    if (t187 != 7510) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = INT16_MIN;
	int8_t x755 = -1;
	volatile int8_t x756 = -1;
	static volatile int32_t t188 = 0;

    t188 = (x753^((x754^x755)==x756));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 1U;
	static uint16_t x758 = UINT16_MAX;
	int8_t x760 = -1;
	volatile int32_t t189 = 71521;

    t189 = (x757^((x758^x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 1U;
	uint8_t x762 = UINT8_MAX;
	int64_t x763 = -1LL;
	uint32_t x764 = 12U;
	static volatile uint32_t t190 = 41242U;

    t190 = (x761^((x762^x763)==x764));

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int64_t x766 = -863634470LL;
	uint64_t x768 = 8805334668163LLU;
	int32_t t191 = 1798;

    t191 = (x765^((x766^x767)==x768));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	uint64_t x770 = UINT64_MAX;
	int32_t x771 = INT32_MIN;
	volatile int16_t x772 = INT16_MIN;
	uint64_t t192 = UINT64_MAX;

    t192 = (x769^((x770^x771)==x772));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	uint64_t x774 = 12438590445LLU;
	static uint64_t x775 = 3LLU;
	int8_t x776 = INT8_MIN;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = (x773^((x774^x775)==x776));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	static int64_t x778 = INT64_MAX;
	uint8_t x779 = UINT8_MAX;
	volatile int32_t t194 = INT32_MAX;

    t194 = (x777^((x778^x779)==x780));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 59240080;
	static volatile uint8_t x782 = UINT8_MAX;
	int8_t x784 = INT8_MAX;
	static int32_t t195 = 48363;

    t195 = (x781^((x782^x783)==x784));

    if (t195 != 59240080) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static int64_t x787 = INT64_MAX;
	int64_t x788 = 192613562LL;

    t196 = (x785^((x786^x787)==x788));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = 1;
	uint32_t x792 = 1730117312U;
	int32_t t197 = 1;

    t197 = (x789^((x790^x791)==x792));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	static uint8_t x795 = UINT8_MAX;

    t198 = (x793^((x794^x795)==x796));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	static uint8_t x798 = 38U;
	int16_t x799 = INT16_MAX;
	uint32_t t199 = UINT32_MAX;

    t199 = (x797^((x798^x799)==x800));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

