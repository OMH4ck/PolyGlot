
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

static int32_t x1 = -1;
uint8_t x6 = 118U;
int16_t x7 = 24;
static int64_t t3 = -1LL;
int8_t x17 = INT8_MAX;
int64_t x19 = 12564486LL;
int32_t t5 = -1399404;
volatile int32_t t6 = -572;
uint32_t x32 = 254406110U;
static int64_t t8 = 33656917251LL;
uint16_t x45 = 12U;
volatile uint64_t x46 = 66347691403074704LLU;
volatile int32_t t11 = -684;
int32_t x50 = INT32_MAX;
int32_t x57 = INT32_MIN;
int8_t x64 = -3;
int32_t x70 = INT32_MAX;
uint32_t t17 = 5846U;
uint8_t x76 = 7U;
static volatile int64_t t18 = -4482412755746237192LL;
volatile int16_t x79 = INT16_MIN;
int16_t x89 = -6;
uint8_t x92 = UINT8_MAX;
int32_t x96 = -1;
int64_t x97 = INT64_MIN;
static volatile uint8_t x100 = 84U;
int64_t t24 = -38238LL;
static uint64_t x110 = 17077872LLU;
int32_t x118 = INT32_MIN;
int32_t x121 = INT32_MIN;
int16_t x122 = 2;
volatile uint64_t x126 = 32604798561089LLU;
volatile int32_t x127 = 16103147;
uint16_t x131 = UINT16_MAX;
volatile int64_t t32 = 1LL;
int32_t x133 = INT32_MIN;
static int32_t x135 = -7;
static int32_t t37 = -26388;
int16_t x153 = -94;
int64_t x158 = -1LL;
int8_t x165 = -1;
int32_t x166 = -1;
int8_t x167 = INT8_MIN;
int32_t t41 = 390580;
uint16_t x170 = UINT16_MAX;
volatile uint64_t t42 = 7119372560607825473LLU;
int32_t x181 = INT32_MAX;
volatile int32_t t47 = 1159;
static int64_t x196 = -1LL;
int16_t x204 = -20;
static int8_t x208 = INT8_MAX;
int32_t t51 = 25;
uint32_t x211 = 97U;
int32_t x214 = INT32_MAX;
volatile int32_t t54 = -172031;
uint16_t x226 = 3987U;
static int16_t x227 = INT16_MAX;
volatile int32_t t56 = 2166;
int32_t x230 = -1;
int16_t x231 = -23;
static uint32_t x232 = UINT32_MAX;
volatile uint32_t t57 = 285055U;
int64_t x233 = INT64_MAX;
int64_t t58 = -122330867811LL;
volatile uint16_t x239 = 54U;
int64_t x243 = INT64_MIN;
volatile int32_t x245 = INT32_MAX;
int64_t x247 = 49337LL;
int64_t x249 = INT64_MIN;
int64_t x251 = INT64_MIN;
static uint8_t x253 = 15U;
int32_t t63 = 323053328;
volatile int16_t x257 = 16;
int16_t x259 = -2125;
static int32_t t64 = -431325;
uint8_t x264 = 2U;
int32_t t66 = 7;
volatile uint32_t t67 = 8U;
volatile uint16_t x273 = 3035U;
int64_t x281 = INT64_MIN;
int8_t x284 = -1;
volatile int32_t x285 = -1;
int16_t x289 = INT16_MIN;
volatile int32_t t72 = 243282;
uint8_t x294 = 1U;
int8_t x302 = INT8_MIN;
volatile int64_t t75 = 873265LL;
int32_t x305 = INT32_MIN;
static int64_t x311 = -1LL;
int8_t x318 = INT8_MIN;
volatile int16_t x321 = INT16_MIN;
uint8_t x325 = 3U;
uint64_t x326 = 355450LLU;
uint32_t t82 = 2821995U;
static uint8_t x339 = 18U;
static uint8_t x340 = 3U;
int32_t t84 = -238241;
int8_t x342 = -1;
uint32_t x350 = 22209053U;
int64_t x361 = -1LL;
int8_t x363 = INT8_MAX;
int32_t x372 = -1621;
int8_t x373 = -54;
volatile int32_t t94 = 1068;
static uint8_t x386 = 0U;
volatile int32_t t96 = 963330436;
static volatile int32_t t98 = 3647589;
static volatile int16_t x417 = INT16_MIN;
volatile int32_t x419 = INT32_MIN;
static int16_t x425 = INT16_MIN;
static int8_t x432 = INT8_MIN;
int64_t x433 = -26671009064741LL;
static int16_t x435 = INT16_MAX;
volatile uint8_t x436 = 18U;
int8_t x444 = -1;
static volatile int32_t t110 = -1;
int16_t x450 = INT16_MIN;
int32_t x456 = -1;
uint32_t x459 = 2U;
int32_t t114 = INT32_MAX;
static int32_t t115 = -24;
volatile int32_t x466 = INT32_MAX;
int16_t x467 = INT16_MIN;
int32_t x471 = INT32_MIN;
static int8_t x472 = -1;
static int32_t x475 = -58;
uint64_t x477 = 126015662403LLU;
int8_t x481 = INT8_MAX;
int8_t x482 = INT8_MAX;
int16_t x500 = INT16_MIN;
int16_t x505 = -5;
static int16_t x507 = -1;
volatile int32_t t126 = 7744050;
uint8_t x511 = 8U;
uint32_t x520 = 218602U;
int8_t x521 = INT8_MAX;
int32_t x524 = 20;
int32_t x532 = INT32_MIN;
int64_t x536 = -1LL;
uint32_t x539 = 18U;
static int16_t x544 = INT16_MIN;
int64_t x549 = INT64_MAX;
int8_t x550 = INT8_MAX;
volatile int64_t t137 = 645159090854LL;
volatile int64_t x555 = INT64_MIN;
static int64_t t139 = -117LL;
int16_t x562 = 8938;
volatile uint8_t x563 = UINT8_MAX;
uint8_t x565 = UINT8_MAX;
uint16_t x567 = 1U;
volatile int16_t x568 = 14578;
int8_t x569 = -1;
static int16_t x572 = -1;
uint64_t x578 = UINT64_MAX;
static int8_t x582 = INT8_MIN;
int32_t x588 = INT32_MIN;
uint64_t x591 = 778932260073809LLU;
volatile int32_t x592 = INT32_MAX;
uint16_t x596 = 20042U;
int32_t x598 = INT32_MIN;
int32_t x601 = 6418616;
static uint16_t x605 = UINT16_MAX;
int32_t x610 = INT32_MIN;
int8_t x620 = INT8_MAX;
int16_t x630 = -1;
volatile int16_t x633 = 1;
uint8_t x635 = 3U;
volatile int64_t x644 = INT64_MIN;
int32_t x653 = 0;
uint32_t x654 = 23414742U;
static int32_t t163 = 46005971;
int8_t x663 = -1;
static int32_t x664 = INT32_MIN;
volatile uint32_t t166 = 1065307U;
volatile uint64_t x672 = UINT64_MAX;
volatile int64_t t168 = 887834614548584LL;
volatile uint16_t x680 = 280U;
static int32_t x686 = INT32_MAX;
static volatile int32_t t175 = 544169;
int16_t x707 = INT16_MIN;
int8_t x719 = -1;
static int8_t x722 = INT8_MAX;
static int64_t x723 = -1LL;
uint32_t x728 = 13055U;
int16_t x734 = INT16_MIN;
int64_t t183 = 3254LL;
uint32_t x740 = UINT32_MAX;
volatile uint32_t t185 = 3700U;
static int32_t t188 = 20223;
int64_t x757 = INT64_MIN;
volatile int64_t t189 = INT64_MAX;
int16_t x762 = 47;
volatile uint32_t t191 = 398551975U;
volatile int64_t t192 = INT64_MAX;
volatile int64_t x776 = INT64_MIN;
volatile int64_t t193 = 1272774LL;
int32_t x777 = 117970;
uint8_t x783 = 8U;
int8_t x792 = -1;
uint32_t x794 = 258284U;
static uint32_t x795 = 2908U;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = INT32_MAX;

    t0 = (x1^((x2==x3)^x4));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -7870;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -355;

    t1 = (x5^((x6==x7)^x8));

    if (t1 != 2147475778) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = 124U;
	uint64_t x10 = 753511LLU;
	uint8_t x11 = 3U;
	int32_t x12 = 1020579843;
	int32_t t2 = 1009;

    t2 = (x9^((x10==x11)^x12));

    if (t2 != 1020579967) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 223U;
	int64_t x16 = 126291LL;

    t3 = (x13^((x14==x15)^x16));

    if (t3 != -103085LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = 1;
	int8_t x20 = -31;
	volatile int32_t t4 = 0;

    t4 = (x17^((x18==x19)^x20));

    if (t4 != -98) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = 96;
	uint16_t x23 = 7442U;
	static volatile int32_t x24 = -5433;

    t5 = (x21^((x22==x23)^x24));

    if (t5 != -27336) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 14714;
	static uint32_t x26 = 4400U;
	int64_t x27 = INT64_MIN;
	int8_t x28 = -1;

    t6 = (x25^((x26==x27)^x28));

    if (t6 != -14715) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MAX;
	uint16_t x30 = 10U;
	static int32_t x31 = INT32_MAX;
	uint32_t t7 = 27904U;

    t7 = (x29^((x30==x31)^x32));

    if (t7 != 254382625U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = -1LL;
	static uint16_t x35 = UINT16_MAX;
	int64_t x36 = INT64_MIN;

    t8 = (x33^((x34==x35)^x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	volatile uint16_t x38 = 0U;
	int64_t x39 = INT64_MAX;
	volatile int32_t x40 = -1;
	volatile uint64_t t9 = 136412830584LLU;

    t9 = (x37^((x38==x39)^x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int32_t x42 = -1;
	static int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = INT32_MIN;

    t10 = (x41^((x42==x43)^x44));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x47 = -1;
	int8_t x48 = INT8_MIN;

    t11 = (x45^((x46==x47)^x48));

    if (t11 != -116) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int8_t x51 = 0;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 24822479;

    t12 = (x49^((x50==x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 0U;
	volatile uint32_t x54 = UINT32_MAX;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -11;

    t13 = (x53^((x54==x55)^x56));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	static int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 59459387;

    t14 = (x57^((x58==x59)^x60));

    if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = INT16_MIN;
	int64_t x62 = 28157LL;
	static int64_t x63 = INT64_MAX;
	int32_t t15 = 1;

    t15 = (x61^((x62==x63)^x64));

    if (t15 != 32765) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = 44951;
	int32_t x66 = -1187;
	volatile int8_t x67 = INT8_MIN;
	int32_t x68 = 187;
	volatile int32_t t16 = -507;

    t16 = (x65^((x66==x67)^x68));

    if (t16 != 44844) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = 43U;
	uint32_t x71 = 88319U;
	static int32_t x72 = INT32_MIN;

    t17 = (x69^((x70==x71)^x72));

    if (t17 != 2147483691U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MIN;

    t18 = (x73^((x74==x75)^x76));

    if (t18 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile uint64_t x78 = UINT64_MAX;
	volatile int8_t x80 = -1;
	int32_t t19 = -928;

    t19 = (x77^((x78==x79)^x80));

    if (t19 != -256) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	static uint64_t x82 = 35024440LLU;
	int16_t x83 = -49;
	volatile int16_t x84 = INT16_MIN;
	int64_t t20 = 21976746701692631LL;

    t20 = (x81^((x82==x83)^x84));

    if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	volatile uint64_t x86 = 120781LLU;
	static int64_t x87 = INT64_MIN;
	uint8_t x88 = 0U;
	static volatile int32_t t21 = 754793;

    t21 = (x85^((x86==x87)^x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = -1;
	static uint16_t x91 = 1U;
	volatile int32_t t22 = 305557038;

    t22 = (x89^((x90==x91)^x92));

    if (t22 != -251) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = 1716U;
	int64_t x95 = 3LL;
	volatile int32_t t23 = INT32_MAX;

    t23 = (x93^((x94==x95)^x96));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MAX;

    t24 = (x97^((x98==x99)^x100));

    if (t24 != -9223372036854775724LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	static uint32_t x103 = 57409U;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 464;

    t25 = (x101^((x102==x103)^x104));

    if (t25 != 2147450880) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	int32_t x107 = 14;
	static int32_t x108 = INT32_MAX;
	static volatile int32_t t26 = 774749;

    t26 = (x105^((x106==x107)^x108));

    if (t26 != -2147483521) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	static int64_t x111 = -1LL;
	int8_t x112 = 12;
	int32_t t27 = -16076972;

    t27 = (x109^((x110==x111)^x112));

    if (t27 != 32755) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	uint16_t x114 = 1U;
	static int16_t x115 = -3266;
	int64_t x116 = -1LL;
	volatile int64_t t28 = 56680758517340LL;

    t28 = (x113^((x114==x115)^x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	int32_t x119 = 1;
	static uint16_t x120 = 5021U;
	static volatile int32_t t29 = -4305307;

    t29 = (x117^((x118==x119)^x120));

    if (t29 != 4962) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x123 = 48645736148196746LL;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 522455053LLU;

    t30 = (x121^((x122==x123)^x124));

    if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	uint16_t x128 = 3U;
	int32_t t31 = -12022;

    t31 = (x125^((x126==x127)^x128));

    if (t31 != 32764) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	int64_t x130 = -2534639060LL;
	int64_t x132 = -11LL;

    t32 = (x129^((x130==x131)^x132));

    if (t32 != 10LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = 5U;
	uint64_t x136 = 1001784LLU;
	uint64_t t33 = 4393707849022496LLU;

    t33 = (x133^((x134==x135)^x136));

    if (t33 != 18446744071563069752LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 10743;
	int16_t x138 = INT16_MAX;
	static volatile uint32_t x139 = UINT32_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	uint32_t t34 = 1U;

    t34 = (x137^((x138==x139)^x140));

    if (t34 != 4294956552U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 58890873U;
	int64_t x142 = INT64_MIN;
	volatile uint32_t x143 = UINT32_MAX;
	int8_t x144 = -1;
	uint32_t t35 = 2989953U;

    t35 = (x141^((x142==x143)^x144));

    if (t35 != 4236076422U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	int32_t x146 = -51;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 68718439LLU;
	volatile uint64_t t36 = 2758363250418710LLU;

    t36 = (x145^((x146==x147)^x148));

    if (t36 != 68743320LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	static uint16_t x150 = 693U;
	int8_t x151 = INT8_MAX;
	static int8_t x152 = -4;

    t37 = (x149^((x150==x151)^x152));

    if (t37 != -32765) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 457;

    t38 = (x153^((x154==x155)^x156));

    if (t38 != -163) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	static int32_t x159 = -7133;
	int8_t x160 = -1;
	int32_t t39 = INT32_MIN;

    t39 = (x157^((x158==x159)^x160));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	int32_t x162 = -633;
	volatile uint32_t x163 = 34737U;
	static volatile int32_t x164 = INT32_MAX;
	volatile uint64_t t40 = 335719LLU;

    t40 = (x161^((x162==x163)^x164));

    if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x168 = INT8_MIN;

    t41 = (x165^((x166==x167)^x168));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x169 = -1;
	static int8_t x171 = -59;
	uint64_t x172 = 16277LLU;

    t42 = (x169^((x170==x171)^x172));

    if (t42 != 18446744073709535338LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x173 = 14054LLU;
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MAX;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t43 = 1596LLU;

    t43 = (x173^((x174==x175)^x176));

    if (t43 != 9223372036854761753LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = -27945100;
	static volatile int16_t x179 = 1;
	int8_t x180 = 1;
	int32_t t44 = 438080648;

    t44 = (x177^((x178==x179)^x180));

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x182 = 3094046U;
	static uint8_t x183 = 6U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = -69;

    t45 = (x181^((x182==x183)^x184));

    if (t45 != 2147418112) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = INT64_MIN;
	int16_t x186 = -847;
	int64_t x187 = -1LL;
	static volatile int8_t x188 = 1;
	volatile int64_t t46 = -803851303451080480LL;

    t46 = (x185^((x186==x187)^x188));

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MAX;
	int8_t x192 = -1;

    t47 = (x189^((x190==x191)^x192));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	volatile int8_t x195 = -1;
	volatile int64_t t48 = -2589159879966LL;

    t48 = (x193^((x194==x195)^x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x197 = INT8_MIN;
	int64_t x198 = 60654785130LL;
	volatile int64_t x199 = -30LL;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = 3176858;

    t49 = (x197^((x198==x199)^x200));

    if (t49 != -65409) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	uint16_t x202 = 1301U;
	int64_t x203 = -1LL;
	volatile int32_t t50 = -10875186;

    t50 = (x201^((x202==x203)^x204));

    if (t50 != -109) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = 120U;
	int64_t x206 = 48906710431327351LL;
	int16_t x207 = INT16_MAX;

    t51 = (x205^((x206==x207)^x208));

    if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	int16_t x212 = INT16_MAX;
	static volatile int64_t t52 = -70LL;

    t52 = (x209^((x210==x211)^x212));

    if (t52 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -1LL;
	static int32_t x215 = -1;
	int32_t x216 = INT32_MIN;
	volatile int64_t t53 = 27LL;

    t53 = (x213^((x214==x215)^x216));

    if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	static int16_t x218 = -1;
	uint8_t x219 = 2U;
	static int8_t x220 = INT8_MAX;

    t54 = (x217^((x218==x219)^x220));

    if (t54 != -32641) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MIN;
	uint32_t x222 = 242U;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = -1230343410047293590LL;
	volatile int64_t t55 = -672037281LL;

    t55 = (x221^((x222==x223)^x224));

    if (t55 != 1230343410047293674LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -488411;
	int8_t x228 = -1;

    t56 = (x225^((x226==x227)^x228));

    if (t56 != 488410) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;

    t57 = (x229^((x230==x231)^x232));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x234 = -1;
	int16_t x235 = INT16_MAX;
	uint32_t x236 = 3U;

    t58 = (x233^((x234==x235)^x236));

    if (t58 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	uint16_t x238 = 10353U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -64614;

    t59 = (x237^((x238==x239)^x240));

    if (t59 != -2147483521) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	int32_t x242 = 281687907;
	int64_t x244 = -1LL;
	volatile int64_t t60 = 56195625984692993LL;

    t60 = (x241^((x242==x243)^x244));

    if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -1;
	volatile int32_t x248 = 88352;
	int32_t t61 = -1045803;

    t61 = (x245^((x246==x247)^x248));

    if (t61 != 2147395295) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t62 = 213248242LL;

    t62 = (x249^((x250==x251)^x252));

    if (t62 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = 70767808790784LLU;
	static int64_t x255 = INT64_MAX;
	int16_t x256 = INT16_MIN;

    t63 = (x253^((x254==x255)^x256));

    if (t63 != -32753) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x258 = UINT32_MAX;
	volatile uint8_t x260 = 2U;

    t64 = (x257^((x258==x259)^x260));

    if (t64 != 18) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 660U;
	static int32_t x262 = INT32_MIN;
	int64_t x263 = -1LL;
	volatile uint32_t t65 = 3U;

    t65 = (x261^((x262==x263)^x264));

    if (t65 != 662U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int16_t x266 = -16;
	uint64_t x267 = UINT64_MAX;
	int32_t x268 = 9;

    t66 = (x265^((x266==x267)^x268));

    if (t66 != -32759) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	uint64_t x270 = UINT64_MAX;
	volatile uint32_t x271 = 16263U;
	static int32_t x272 = -1;

    t67 = (x269^((x270==x271)^x272));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = INT16_MIN;
	static int16_t x275 = 13828;
	uint32_t x276 = 136U;
	uint32_t t68 = 1637187352U;

    t68 = (x273^((x274==x275)^x276));

    if (t68 != 2899U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x277 = -11883;
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = -136843;
	int64_t x280 = 12226899751793100LL;
	volatile int64_t t69 = -1039186006LL;

    t69 = (x277^((x278==x279)^x280));

    if (t69 != -12226899751788455LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	uint16_t x283 = 4678U;
	volatile int64_t t70 = INT64_MAX;

    t70 = (x281^((x282==x283)^x284));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x286 = -1;
	int32_t x287 = 236616830;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -516843289;

    t71 = (x285^((x286==x287)^x288));

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	static volatile int16_t x292 = 14073;

    t72 = (x289^((x290==x291)^x292));

    if (t72 != -18695) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x293 = INT8_MAX;
	volatile int64_t x295 = -1LL;
	uint32_t x296 = 2U;
	volatile uint32_t t73 = 504110905U;

    t73 = (x293^((x294==x295)^x296));

    if (t73 != 125U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -10;
	int16_t x298 = INT16_MAX;
	int32_t x299 = 0;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 55604798;

    t74 = (x297^((x298==x299)^x300));

    if (t74 != -65527) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	static int64_t x304 = INT64_MIN;

    t75 = (x301^((x302==x303)^x304));

    if (t75 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = INT64_MIN;
	int16_t x307 = -1;
	static volatile int64_t x308 = INT64_MIN;
	volatile int64_t t76 = 162787711863950218LL;

    t76 = (x305^((x306==x307)^x308));

    if (t76 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 177U;
	int16_t x310 = -29;
	int16_t x312 = -1;
	volatile uint32_t t77 = 96500846U;

    t77 = (x309^((x310==x311)^x312));

    if (t77 != 4294967118U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 0;
	static int32_t x314 = 1400;
	int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 2;

    t78 = (x313^((x314==x315)^x316));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = -25;
	int64_t x319 = -1LL;
	int8_t x320 = -1;
	volatile int32_t t79 = -358870;

    t79 = (x317^((x318==x319)^x320));

    if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MIN;
	uint8_t x323 = 0U;
	int64_t x324 = INT64_MIN;
	int64_t t80 = 20416884452005LL;

    t80 = (x321^((x322==x323)^x324));

    if (t80 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 62055;

    t81 = (x325^((x326==x327)^x328));

    if (t81 != 65532) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	int8_t x331 = 1;
	static volatile uint32_t x332 = 31757U;

    t82 = (x329^((x330==x331)^x332));

    if (t82 != 33778U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -616802913;
	int16_t x334 = INT16_MAX;
	static uint16_t x335 = 2U;
	int16_t x336 = 1577;
	volatile int32_t t83 = -441053384;

    t83 = (x333^((x334==x335)^x336));

    if (t83 != -616803402) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;

    t84 = (x337^((x338==x339)^x340));

    if (t84 != 252) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 4U;
	int16_t x343 = -1;
	int8_t x344 = 9;
	int32_t t85 = -44;

    t85 = (x341^((x342==x343)^x344));

    if (t85 != 12) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x346 = 14U;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 7U;
	int32_t t86 = 90;

    t86 = (x345^((x346==x347)^x348));

    if (t86 != -32761) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -339063LL;
	volatile int32_t x351 = INT32_MIN;
	uint64_t x352 = 136081878136913767LLU;
	uint64_t t87 = 24LLU;

    t87 = (x349^((x350==x351)^x352));

    if (t87 != 18310662195572976878LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = INT32_MIN;
	int8_t x354 = -3;
	static int8_t x355 = INT8_MAX;
	static uint64_t x356 = 842187007LLU;
	uint64_t t88 = 4859845518252417LLU;

    t88 = (x353^((x354==x355)^x356));

    if (t88 != 18446744072404254975LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	static volatile int16_t x358 = INT16_MAX;
	static volatile uint64_t x359 = 922LLU;
	static int8_t x360 = 2;
	int32_t t89 = -753;

    t89 = (x357^((x358==x359)^x360));

    if (t89 != -2147483646) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x362 = INT8_MIN;
	static uint8_t x364 = UINT8_MAX;
	static int64_t t90 = 3LL;

    t90 = (x361^((x362==x363)^x364));

    if (t90 != -256LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MAX;
	int16_t x368 = -1;
	volatile int32_t t91 = 975374;

    t91 = (x365^((x366==x367)^x368));

    if (t91 != 2147483646) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = 30U;
	volatile int16_t x371 = 2;
	volatile uint64_t t92 = 1641421838576422452LLU;

    t92 = (x369^((x370==x371)^x372));

    if (t92 != 1620LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x374 = INT64_MIN;
	uint8_t x375 = 26U;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -4;

    t93 = (x373^((x374==x375)^x376));

    if (t93 != 2147483594) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	static int64_t x378 = -1LL;
	static volatile uint64_t x379 = UINT64_MAX;
	volatile uint8_t x380 = UINT8_MAX;

    t94 = (x377^((x378==x379)^x380));

    if (t94 != 65281) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MAX;
	volatile uint16_t x382 = 8249U;
	static int16_t x383 = -1498;
	uint16_t x384 = 608U;
	volatile int64_t t95 = -2187190126748370LL;

    t95 = (x381^((x382==x383)^x384));

    if (t95 != 9223372036854775199LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = 61;
	static volatile uint32_t x387 = 2057464U;
	int8_t x388 = -1;

    t96 = (x385^((x386==x387)^x388));

    if (t96 != -62) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	volatile int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 25;

    t97 = (x389^((x390==x391)^x392));

    if (t97 != -2147483521) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = 1U;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = -16098;

    t98 = (x393^((x394==x395)^x396));

    if (t98 != -16097) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = -1;
	volatile uint16_t x398 = 1790U;
	int32_t x399 = 505613267;
	static int8_t x400 = 0;
	volatile int32_t t99 = 44118752;

    t99 = (x397^((x398==x399)^x400));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = -1LL;
	static int64_t x403 = -1LL;
	volatile int8_t x404 = INT8_MAX;
	volatile int32_t t100 = 104935105;

    t100 = (x401^((x402==x403)^x404));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 7U;
	volatile uint32_t x406 = 72194751U;
	int8_t x407 = 52;
	int16_t x408 = -1;
	uint32_t t101 = 91150461U;

    t101 = (x405^((x406==x407)^x408));

    if (t101 != 4294967288U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x409 = 12234LLU;
	int16_t x410 = INT16_MIN;
	volatile int32_t x411 = -202912;
	int8_t x412 = -1;
	uint64_t t102 = 25974655012506426LLU;

    t102 = (x409^((x410==x411)^x412));

    if (t102 != 18446744073709539381LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 61945462985247LLU;
	int64_t x414 = -3239154629874055641LL;
	static volatile int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t103 = 644159070731333LLU;

    t103 = (x413^((x414==x415)^x416));

    if (t103 != 18446682128693400095LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	int64_t x420 = -283460119LL;
	static volatile int64_t t104 = 23454855239LL;

    t104 = (x417^((x418==x419)^x420));

    if (t104 != 283459049LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MAX;
	int32_t x423 = 384020955;
	uint32_t x424 = 31741U;
	volatile uint32_t t105 = 1452201106U;

    t105 = (x421^((x422==x423)^x424));

    if (t105 != 4294966269U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = 3;
	uint8_t x427 = UINT8_MAX;
	volatile int64_t x428 = INT64_MIN;
	volatile int64_t t106 = -7067974075LL;

    t106 = (x425^((x426==x427)^x428));

    if (t106 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 3U;
	uint8_t x430 = UINT8_MAX;
	static volatile int64_t x431 = INT64_MIN;
	int32_t t107 = -3190;

    t107 = (x429^((x430==x431)^x432));

    if (t107 != -125) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = INT8_MIN;
	static volatile int64_t t108 = -314822420LL;

    t108 = (x433^((x434==x435)^x436));

    if (t108 != -26671009064759LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 11;
	int64_t x438 = INT64_MAX;
	int64_t x439 = INT64_MAX;
	int8_t x440 = 54;
	volatile int32_t t109 = 137;

    t109 = (x437^((x438==x439)^x440));

    if (t109 != 60) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	uint16_t x442 = 28U;
	int16_t x443 = INT16_MAX;

    t110 = (x441^((x442==x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	static volatile int64_t x446 = INT64_MIN;
	static int8_t x447 = 0;
	static uint8_t x448 = 86U;
	static volatile int32_t t111 = 1;

    t111 = (x445^((x446==x447)^x448));

    if (t111 != -32682) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = 741U;
	int8_t x451 = -1;
	int16_t x452 = INT16_MIN;
	volatile int32_t t112 = 16;

    t112 = (x449^((x450==x451)^x452));

    if (t112 != -32027) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -5301660;
	int64_t x454 = -1LL;
	int32_t x455 = -40366;
	volatile int32_t t113 = -21151913;

    t113 = (x453^((x454==x455)^x456));

    if (t113 != 5301659) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	int64_t x458 = -545265471748LL;
	static int32_t x460 = -1;

    t114 = (x457^((x458==x459)^x460));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = 1U;
	volatile int32_t x462 = 2165635;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;

    t115 = (x461^((x462==x463)^x464));

    if (t115 != 254) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 399U;
	int16_t x468 = 13289;
	volatile uint32_t t116 = 371459339U;

    t116 = (x465^((x466==x467)^x468));

    if (t116 != 12902U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	volatile int32_t x470 = INT32_MIN;
	int64_t t117 = -911766281LL;

    t117 = (x469^((x470==x471)^x472));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int32_t x474 = -13310;
	static volatile int32_t x476 = INT32_MAX;
	static volatile int32_t t118 = INT32_MIN;

    t118 = (x473^((x474==x475)^x476));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = INT8_MIN;
	uint64_t t119 = 186LLU;

    t119 = (x477^((x478==x479)^x480));

    if (t119 != 18446743947693889219LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x483 = 3U;
	volatile int64_t x484 = INT64_MIN;
	volatile int64_t t120 = 0LL;

    t120 = (x481^((x482==x483)^x484));

    if (t120 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 1327LLU;
	static uint8_t x486 = UINT8_MAX;
	uint64_t x487 = UINT64_MAX;
	uint64_t x488 = 16673926670836946LLU;
	static uint64_t t121 = 26184656LLU;

    t121 = (x485^((x486==x487)^x488));

    if (t121 != 16673926670836221LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = -1878;
	int16_t x490 = 0;
	static uint8_t x491 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t122 = 6585396494845LLU;

    t122 = (x489^((x490==x491)^x492));

    if (t122 != 1877LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MAX;
	static int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;
	int32_t t123 = 94;

    t123 = (x493^((x494==x495)^x496));

    if (t123 != -2147450881) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -5;
	uint32_t x498 = 496826058U;
	volatile int8_t x499 = INT8_MIN;
	int32_t t124 = 79;

    t124 = (x497^((x498==x499)^x500));

    if (t124 != 32763) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 8U;
	volatile int16_t x502 = -1697;
	static int8_t x503 = INT8_MIN;
	int16_t x504 = 2;
	volatile int32_t t125 = -4181;

    t125 = (x501^((x502==x503)^x504));

    if (t125 != 10) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x506 = 554282U;
	int32_t x508 = 81045;

    t126 = (x505^((x506==x507)^x508));

    if (t126 != -81042) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	int64_t x510 = 49LL;
	int64_t x512 = -262240LL;
	int64_t t127 = -2061813919489250584LL;

    t127 = (x509^((x510==x511)^x512));

    if (t127 != 262176LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MAX;
	uint64_t x514 = 88LLU;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = INT16_MAX;
	volatile int64_t t128 = -1LL;

    t128 = (x513^((x514==x515)^x516));

    if (t128 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x518 = INT64_MAX;
	int8_t x519 = INT8_MIN;
	volatile uint32_t t129 = 733758724U;

    t129 = (x517^((x518==x519)^x520));

    if (t129 != 4294748778U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 1399U;
	uint8_t x523 = 10U;
	volatile int32_t t130 = -144026563;

    t130 = (x521^((x522==x523)^x524));

    if (t130 != 107) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = 1;
	int64_t x526 = INT64_MIN;
	int16_t x527 = -1002;
	static int64_t x528 = INT64_MAX;
	volatile int64_t t131 = 188052968LL;

    t131 = (x525^((x526==x527)^x528));

    if (t131 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 663U;
	volatile int8_t x530 = INT8_MAX;
	volatile uint32_t x531 = 457080973U;
	volatile uint32_t t132 = 3384U;

    t132 = (x529^((x530==x531)^x532));

    if (t132 != 2147484311U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x533 = 885310095U;
	int16_t x534 = INT16_MIN;
	int32_t x535 = INT32_MIN;
	static int64_t t133 = 662LL;

    t133 = (x533^((x534==x535)^x536));

    if (t133 != -885310096LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 2575628936112LLU;
	static int16_t x538 = -1;
	int8_t x540 = INT8_MIN;
	uint64_t t134 = 78051970736432963LLU;

    t134 = (x537^((x538==x539)^x540));

    if (t134 != 18446741498080615472LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -1LL;
	uint64_t x542 = 10LLU;
	static uint32_t x543 = 3111661U;
	int64_t t135 = 4702LL;

    t135 = (x541^((x542==x543)^x544));

    if (t135 != 32767LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -6;
	int64_t x546 = -1LL;
	int16_t x547 = INT16_MAX;
	volatile int8_t x548 = INT8_MAX;
	volatile int32_t t136 = 1216519;

    t136 = (x545^((x546==x547)^x548));

    if (t136 != -123) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x551 = 14U;
	static volatile int16_t x552 = 15816;

    t137 = (x549^((x550==x551)^x552));

    if (t137 != 9223372036854759991LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x553 = 96U;
	uint32_t x554 = 85630U;
	static int64_t x556 = 98484457260LL;
	int64_t t138 = 75570LL;

    t138 = (x553^((x554==x555)^x556));

    if (t138 != 98484457292LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -16;
	int64_t x558 = -63424923862035397LL;
	int16_t x559 = 23;
	int64_t x560 = INT64_MIN;

    t139 = (x557^((x558==x559)^x560));

    if (t139 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 2168U;
	int64_t x564 = -1LL;
	int64_t t140 = 567LL;

    t140 = (x561^((x562==x563)^x564));

    if (t140 != -2169LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = 51383682;
	static int32_t t141 = -24;

    t141 = (x565^((x566==x567)^x568));

    if (t141 != 14349) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = INT64_MAX;
	static volatile int8_t x571 = -12;
	volatile int32_t t142 = 10;

    t142 = (x569^((x570==x571)^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	volatile uint32_t x574 = UINT32_MAX;
	volatile int16_t x575 = INT16_MIN;
	volatile uint8_t x576 = UINT8_MAX;
	int64_t t143 = -14824LL;

    t143 = (x573^((x574==x575)^x576));

    if (t143 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MIN;
	volatile int64_t x579 = 219773618035054LL;
	uint8_t x580 = 54U;
	volatile int64_t t144 = 6913332550319LL;

    t144 = (x577^((x578==x579)^x580));

    if (t144 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x583 = INT32_MAX;
	int8_t x584 = 62;
	volatile int64_t t145 = -157666746175327LL;

    t145 = (x581^((x582==x583)^x584));

    if (t145 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = INT32_MIN;
	static int8_t x587 = -2;
	volatile int32_t t146 = -7;

    t146 = (x585^((x586==x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 11;
	volatile int8_t x590 = -20;
	int32_t t147 = -1941636;

    t147 = (x589^((x590==x591)^x592));

    if (t147 != 2147483636) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint32_t x594 = 83596004U;
	uint16_t x595 = 468U;
	volatile int32_t t148 = -500620305;

    t148 = (x593^((x594==x595)^x596));

    if (t148 != -20022) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = 73288U;
	uint32_t x599 = 228451U;
	int8_t x600 = INT8_MIN;
	volatile uint32_t t149 = 601437382U;

    t149 = (x597^((x598==x599)^x600));

    if (t149 != 4294894024U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MIN;
	uint8_t x603 = 0U;
	volatile uint64_t x604 = UINT64_MAX;
	volatile uint64_t t150 = 300498887905196LLU;

    t150 = (x601^((x602==x603)^x604));

    if (t150 != 18446744073703132999LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x606 = 28;
	int8_t x607 = 15;
	static int32_t x608 = INT32_MIN;
	volatile int32_t t151 = 0;

    t151 = (x605^((x606==x607)^x608));

    if (t151 != -2147418113) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	volatile int16_t x611 = INT16_MAX;
	int32_t x612 = -1;
	volatile int64_t t152 = -25534256284521920LL;

    t152 = (x609^((x610==x611)^x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 2U;
	int8_t x614 = INT8_MAX;
	int8_t x615 = -1;
	uint8_t x616 = UINT8_MAX;
	volatile uint32_t t153 = 95U;

    t153 = (x613^((x614==x615)^x616));

    if (t153 != 253U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1411;
	int8_t x618 = INT8_MIN;
	volatile uint32_t x619 = UINT32_MAX;
	static volatile int32_t t154 = 181951267;

    t154 = (x617^((x618==x619)^x620));

    if (t154 != -1534) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = -1723;
	int32_t x622 = 61810688;
	uint8_t x623 = UINT8_MAX;
	uint8_t x624 = 1U;
	int32_t t155 = -3079;

    t155 = (x621^((x622==x623)^x624));

    if (t155 != -1724) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 0U;
	int64_t x626 = -1LL;
	int32_t x627 = INT32_MIN;
	int8_t x628 = -1;
	volatile int32_t t156 = -65501;

    t156 = (x625^((x626==x627)^x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	volatile uint32_t x631 = UINT32_MAX;
	int64_t x632 = -48284828LL;
	static int64_t t157 = 2267125LL;

    t157 = (x629^((x630==x631)^x632));

    if (t157 != 48282469LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = UINT16_MAX;
	uint32_t x636 = UINT32_MAX;
	uint32_t t158 = 816132U;

    t158 = (x633^((x634==x635)^x636));

    if (t158 != 4294967294U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 415U;
	uint16_t x638 = 11501U;
	int8_t x639 = -21;
	int16_t x640 = -1;
	static volatile uint32_t t159 = 101U;

    t159 = (x637^((x638==x639)^x640));

    if (t159 != 4294966880U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 4361U;
	int16_t x642 = 3;
	static uint16_t x643 = 15622U;
	volatile int64_t t160 = 441658852061LL;

    t160 = (x641^((x642==x643)^x644));

    if (t160 != -9223372036854771447LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	static uint64_t x646 = 3648LLU;
	uint32_t x647 = UINT32_MAX;
	int16_t x648 = 2;
	volatile int64_t t161 = 1386366866738LL;

    t161 = (x645^((x646==x647)^x648));

    if (t161 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int8_t x650 = INT8_MAX;
	static int64_t x651 = 474985143940LL;
	int8_t x652 = INT8_MAX;
	int32_t t162 = 140067;

    t162 = (x649^((x650==x651)^x652));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x655 = 58507025960LL;
	uint16_t x656 = 2842U;

    t163 = (x653^((x654==x655)^x656));

    if (t163 != 2842) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MIN;
	int32_t x659 = 26;
	volatile int8_t x660 = 0;
	static int32_t t164 = INT32_MIN;

    t164 = (x657^((x658==x659)^x660));

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MAX;
	int16_t x662 = INT16_MIN;
	volatile int32_t t165 = -31512;

    t165 = (x661^((x662==x663)^x664));

    if (t165 != -2147483521) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int64_t x666 = INT64_MAX;
	int8_t x667 = -6;
	int32_t x668 = INT32_MAX;

    t166 = (x665^((x666==x667)^x668));

    if (t166 != 2147483648U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -3749;
	uint32_t x670 = 1U;
	volatile int32_t x671 = INT32_MIN;
	static uint64_t t167 = 1166067472867LLU;

    t167 = (x669^((x670==x671)^x672));

    if (t167 != 3748LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 6U;
	volatile int16_t x674 = INT16_MIN;
	int16_t x675 = -1;
	volatile int64_t x676 = -1LL;

    t168 = (x673^((x674==x675)^x676));

    if (t168 != -7LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MIN;
	volatile int8_t x678 = INT8_MIN;
	static volatile int32_t x679 = -1;
	volatile int32_t t169 = 691;

    t169 = (x677^((x678==x679)^x680));

    if (t169 != -2147483368) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	int32_t x682 = INT32_MIN;
	int8_t x683 = INT8_MIN;
	static int8_t x684 = INT8_MIN;
	int32_t t170 = 1;

    t170 = (x681^((x682==x683)^x684));

    if (t170 != 2147483520) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = 3962782U;
	static volatile int64_t x687 = -19LL;
	int32_t x688 = INT32_MIN;
	volatile uint32_t t171 = 7408U;

    t171 = (x685^((x686==x687)^x688));

    if (t171 != 2151446430U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = -303;
	int64_t x691 = -1LL;
	int32_t x692 = 354831779;
	volatile int32_t t172 = -1;

    t172 = (x689^((x690==x691)^x692));

    if (t172 != 354824796) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -24;
	static int64_t x694 = -1LL;
	int64_t x695 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t173 = 3879936;

    t173 = (x693^((x694==x695)^x696));

    if (t173 != -65513) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = 1545212;
	uint64_t x698 = UINT64_MAX;
	int32_t x699 = 96240202;
	uint64_t x700 = 202850LLU;
	static uint64_t t174 = 1241169108909345LLU;

    t174 = (x697^((x698==x699)^x700));

    if (t174 != 1346462LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MAX;
	uint16_t x703 = UINT16_MAX;
	int32_t x704 = 780065733;

    t175 = (x701^((x702==x703)^x704));

    if (t175 != -780051515) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = INT32_MAX;
	static volatile int32_t x706 = -1;
	int8_t x708 = INT8_MAX;
	int32_t t176 = -496778;

    t176 = (x705^((x706==x707)^x708));

    if (t176 != 2147483520) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x709 = 2373659903LLU;
	uint32_t x710 = UINT32_MAX;
	static int32_t x711 = -3;
	int8_t x712 = -1;
	volatile uint64_t t177 = 5LLU;

    t177 = (x709^((x710==x711)^x712));

    if (t177 != 18446744071335891712LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x713 = INT8_MAX;
	int8_t x714 = INT8_MIN;
	int32_t x715 = -1;
	static volatile int64_t x716 = -1LL;
	volatile int64_t t178 = 392024LL;

    t178 = (x713^((x714==x715)^x716));

    if (t178 != -128LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	static uint16_t x718 = 194U;
	static int32_t x720 = INT32_MAX;
	volatile int32_t t179 = INT32_MIN;

    t179 = (x717^((x718==x719)^x720));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MAX;
	volatile uint32_t x724 = 0U;
	uint32_t t180 = 27U;

    t180 = (x721^((x722==x723)^x724));

    if (t180 != 127U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -21393119;
	int16_t x726 = -1;
	int32_t x727 = INT32_MIN;
	static volatile uint32_t t181 = 1905U;

    t181 = (x725^((x726==x727)^x728));

    if (t181 != 4273578974U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MAX;
	uint64_t x730 = 228226144LLU;
	uint64_t x731 = 1529LLU;
	uint32_t x732 = 23U;
	volatile uint32_t t182 = 56805100U;

    t182 = (x729^((x730==x731)^x732));

    if (t182 != 104U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = INT8_MIN;
	int32_t x735 = -31307473;
	static int64_t x736 = INT64_MIN;

    t183 = (x733^((x734==x735)^x736));

    if (t183 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 17441U;
	static int32_t x738 = 82024;
	uint32_t x739 = 29293727U;
	uint32_t t184 = 262U;

    t184 = (x737^((x738==x739)^x740));

    if (t184 != 4294949854U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 3943U;
	int64_t x742 = INT64_MIN;
	int64_t x743 = 3298789880740LL;
	volatile int8_t x744 = INT8_MAX;

    t185 = (x741^((x742==x743)^x744));

    if (t185 != 3864U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = 489285LL;
	int8_t x746 = -1;
	static int32_t x747 = -1;
	static int16_t x748 = INT16_MAX;
	volatile int64_t t186 = -19137LL;

    t186 = (x745^((x746==x747)^x748));

    if (t186 != 460987LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MAX;
	int8_t x750 = -1;
	volatile int32_t x751 = INT32_MIN;
	uint64_t x752 = UINT64_MAX;
	volatile uint64_t t187 = 795141654LLU;

    t187 = (x749^((x750==x751)^x752));

    if (t187 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	uint8_t x754 = UINT8_MAX;
	int16_t x755 = INT16_MIN;
	static int16_t x756 = INT16_MIN;

    t188 = (x753^((x754==x755)^x756));

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = 1;
	int64_t x759 = -30242LL;
	int16_t x760 = -1;

    t189 = (x757^((x758==x759)^x760));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = -215223700LL;
	int8_t x763 = 24;
	static uint64_t x764 = 38517453260LLU;
	volatile uint64_t t190 = 255974537029342LLU;

    t190 = (x761^((x762==x763)^x764));

    if (t190 != 18446744035138356128LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	int8_t x766 = INT8_MAX;
	int32_t x767 = -1;
	volatile uint32_t x768 = UINT32_MAX;

    t191 = (x765^((x766==x767)^x768));

    if (t191 != 4294967040U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -1;
	uint8_t x770 = 1U;
	int32_t x771 = -1;
	static volatile int64_t x772 = INT64_MIN;

    t192 = (x769^((x770==x771)^x772));

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 454U;
	static uint8_t x774 = 1U;
	uint32_t x775 = 30012985U;

    t193 = (x773^((x774==x775)^x776));

    if (t193 != -9223372036854775354LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x778 = 3068523;
	uint32_t x779 = 17U;
	int16_t x780 = 11118;
	static volatile int32_t t194 = -1375121;

    t194 = (x777^((x778==x779)^x780));

    if (t194 != 124860) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x781 = -1;
	int32_t x782 = INT32_MIN;
	int64_t x784 = INT64_MIN;
	int64_t t195 = INT64_MAX;

    t195 = (x781^((x782==x783)^x784));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = INT16_MIN;
	int32_t x786 = INT32_MAX;
	int32_t x787 = INT32_MIN;
	uint16_t x788 = 7U;
	int32_t t196 = -31;

    t196 = (x785^((x786==x787)^x788));

    if (t196 != -32761) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 1991U;
	static int64_t x790 = -107948045242677LL;
	static int16_t x791 = INT16_MAX;
	int32_t t197 = -16266;

    t197 = (x789^((x790==x791)^x792));

    if (t197 != -1992) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	static uint8_t x796 = 3U;
	volatile int32_t t198 = -3456;

    t198 = (x793^((x794==x795)^x796));

    if (t198 != -125) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 178U;
	uint8_t x798 = 1U;
	uint32_t x799 = UINT32_MAX;
	static int64_t x800 = INT64_MIN;
	volatile int64_t t199 = 2180396863828LL;

    t199 = (x797^((x798==x799)^x800));

    if (t199 != -9223372036854775630LL) { NG(); } else { ; }
	
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

