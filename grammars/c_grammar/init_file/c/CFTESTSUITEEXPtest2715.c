
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

static volatile int16_t x2 = INT16_MAX;
int32_t x4 = -1;
int64_t x5 = INT64_MIN;
int32_t x8 = -204719;
int64_t x14 = -6356180319LL;
static volatile int64_t t3 = 13LL;
static int32_t x28 = INT32_MAX;
int64_t x29 = 220338831LL;
uint64_t t7 = 7185869235537281LLU;
int32_t x35 = 14829;
int32_t t8 = 2982929;
static uint8_t x39 = UINT8_MAX;
int64_t x44 = INT64_MIN;
static int16_t x48 = -1;
uint32_t x52 = 1913U;
int32_t x53 = 54927;
uint64_t x57 = 189921600LLU;
volatile int32_t t15 = -8;
static int32_t x65 = 0;
static int32_t x69 = INT32_MAX;
volatile uint64_t x76 = UINT64_MAX;
static int16_t x77 = -94;
int8_t x80 = -3;
uint64_t x81 = 695437755089213514LLU;
static uint8_t x85 = UINT8_MAX;
int32_t x97 = INT32_MAX;
int16_t x99 = INT16_MIN;
uint32_t x100 = UINT32_MAX;
volatile uint64_t t24 = 9091LLU;
uint64_t x101 = 461796763LLU;
static uint32_t x108 = 1620U;
volatile int8_t x111 = INT8_MAX;
static uint64_t x115 = 699LLU;
uint64_t x121 = 93652895LLU;
uint8_t x132 = 59U;
int8_t x135 = -1;
static volatile uint32_t t33 = 78U;
volatile int16_t x137 = -6402;
static int16_t x143 = -1;
int32_t t35 = -76;
int64_t x157 = -16095066752LL;
static uint32_t x180 = UINT32_MAX;
volatile uint64_t t45 = 0LLU;
uint8_t x189 = 123U;
volatile int32_t x195 = INT32_MIN;
int32_t x200 = -1;
static volatile int32_t t50 = -351246;
int8_t x206 = 0;
int64_t x207 = -153091120951397LL;
static volatile int16_t x208 = INT16_MAX;
int64_t t51 = -1679979981LL;
static volatile uint64_t t52 = UINT64_MAX;
volatile int16_t x217 = -1;
int64_t x223 = -1LL;
uint32_t x227 = 0U;
volatile uint32_t t56 = 3U;
int16_t x231 = -1;
static int64_t x238 = -1LL;
uint64_t x248 = 15228840896264LLU;
volatile uint64_t t61 = 3575LLU;
int16_t x252 = -1;
int32_t x253 = INT32_MIN;
int32_t x255 = -1;
static int32_t t65 = 10;
int64_t x266 = INT64_MAX;
static int64_t t66 = INT64_MAX;
int16_t x269 = 1;
int16_t x278 = INT16_MIN;
int64_t x290 = -1LL;
static int8_t x292 = INT8_MAX;
uint16_t x293 = UINT16_MAX;
int64_t x295 = -257749427379062LL;
int16_t x306 = -1;
volatile uint64_t t76 = UINT64_MAX;
static int16_t x312 = -1;
static volatile int8_t x316 = INT8_MIN;
volatile int64_t t78 = -23069512088180453LL;
int8_t x318 = INT8_MAX;
uint16_t x319 = 113U;
int32_t x323 = -3355;
volatile int32_t t82 = -16207885;
int8_t x339 = INT8_MIN;
int64_t x342 = INT64_MIN;
uint64_t t86 = 53052494806LLU;
uint64_t t88 = UINT64_MAX;
volatile int8_t x357 = -20;
int64_t x358 = INT64_MIN;
int8_t x361 = -1;
uint16_t x363 = UINT16_MAX;
volatile uint64_t t92 = 1448059747077LLU;
int32_t t94 = 69623;
static uint64_t x390 = UINT64_MAX;
volatile int64_t x400 = INT64_MIN;
static volatile int32_t x401 = INT32_MAX;
int64_t x405 = INT64_MIN;
uint8_t x406 = 0U;
int64_t x411 = INT64_MIN;
uint8_t x414 = 101U;
static uint32_t x421 = UINT32_MAX;
int16_t x423 = INT16_MAX;
uint16_t x424 = 2027U;
int8_t x426 = -1;
int32_t x428 = INT32_MAX;
static uint8_t x429 = 89U;
static int32_t x438 = -32871175;
static int32_t x439 = -2871;
int16_t x444 = -12;
int8_t x448 = INT8_MAX;
int64_t t111 = -6265703LL;
int32_t x449 = INT32_MAX;
static int64_t x452 = INT64_MIN;
uint64_t t112 = 702LLU;
int8_t x457 = INT8_MIN;
int16_t x459 = INT16_MIN;
int8_t x461 = -1;
int64_t x464 = -1LL;
int64_t x465 = INT64_MIN;
int32_t x468 = INT32_MIN;
int32_t x470 = INT32_MIN;
volatile uint64_t t117 = 90LLU;
volatile int8_t x476 = INT8_MIN;
static int64_t t119 = 0LL;
int64_t x481 = 5LL;
int64_t x484 = 35550292166425804LL;
int16_t x485 = 11;
static int8_t x486 = INT8_MIN;
volatile uint16_t x490 = 31U;
static int16_t x495 = INT16_MIN;
volatile int8_t x497 = 2;
uint8_t x500 = 2U;
volatile int32_t x501 = INT32_MIN;
int32_t x502 = INT32_MAX;
static int64_t x505 = INT64_MIN;
static volatile int64_t x507 = 932831956LL;
uint64_t x510 = UINT64_MAX;
static uint32_t x511 = UINT32_MAX;
int8_t x519 = INT8_MIN;
int8_t x521 = -13;
static uint16_t x527 = UINT16_MAX;
int32_t x529 = -25;
static int8_t x532 = INT8_MIN;
int32_t x534 = 1939;
volatile int64_t t133 = 6LL;
int64_t x538 = 56LL;
volatile int64_t x542 = INT64_MIN;
static uint64_t x547 = UINT64_MAX;
uint64_t t136 = 18581457LLU;
int32_t x552 = INT32_MIN;
int64_t t137 = 16986LL;
int16_t x559 = 0;
volatile uint8_t x562 = 28U;
volatile int64_t x564 = -23005914383LL;
static int64_t t140 = 394428843196LL;
static int32_t x565 = INT32_MIN;
uint32_t x566 = 1U;
static int16_t x572 = INT16_MIN;
static int64_t t142 = 957070LL;
int64_t x574 = INT64_MIN;
static int32_t x583 = INT32_MIN;
uint8_t x589 = UINT8_MAX;
volatile uint64_t t148 = UINT64_MAX;
int64_t x606 = INT64_MIN;
volatile int64_t x607 = INT64_MIN;
volatile int64_t x617 = INT64_MAX;
static uint64_t x624 = 8336056205209LLU;
volatile uint64_t t156 = 16283679468298589LLU;
int32_t x631 = INT32_MIN;
int32_t x635 = INT32_MIN;
int16_t x637 = -675;
uint8_t x645 = 0U;
uint8_t x653 = 55U;
volatile int64_t x660 = INT64_MIN;
int8_t x662 = INT8_MAX;
int8_t x666 = -1;
static int8_t x669 = 4;
int64_t x672 = INT64_MAX;
static volatile uint32_t t168 = 13125U;
int64_t x680 = INT64_MIN;
uint8_t x684 = 27U;
int8_t x696 = 15;
int64_t x697 = INT64_MAX;
volatile int8_t x701 = INT8_MIN;
uint32_t x705 = 651130147U;
int16_t x710 = INT16_MIN;
uint32_t x718 = UINT32_MAX;
uint8_t x724 = UINT8_MAX;
volatile int16_t x733 = 2;
uint32_t t183 = 120344U;
static volatile int64_t t184 = 63875LL;
uint64_t x742 = 109578003795968LLU;
volatile uint16_t x746 = 9U;
volatile int64_t x752 = INT64_MIN;
int64_t t189 = -204712071LL;
uint32_t x761 = 45343883U;
uint8_t x768 = 59U;
uint8_t x770 = UINT8_MAX;
uint64_t x771 = 81849054448701LLU;
volatile int64_t x787 = -1LL;
static int32_t x793 = INT32_MIN;
uint32_t x794 = UINT32_MAX;
uint64_t x799 = UINT64_MAX;
volatile uint64_t t199 = 16234147771LLU;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x3 = 1;
	int64_t t0 = -1LL;

    t0 = (x1|((x2^x3)&x4));

    if (t0 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -1;
	int16_t x7 = INT16_MAX;
	int64_t t1 = 3LL;

    t1 = (x5|((x6^x7)&x8));

    if (t1 != -229376LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x10 = -1;
	int8_t x11 = INT8_MAX;
	int16_t x12 = -1;
	int32_t t2 = 380449338;

    t2 = (x9|((x10^x11)&x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x15 = -5;
	int16_t x16 = INT16_MAX;

    t3 = (x13|((x14^x15)&x16));

    if (t3 != -25254LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = UINT32_MAX;
	static int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile uint32_t t4 = UINT32_MAX;

    t4 = (x17|((x18^x19)&x20));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 0U;
	int64_t x22 = 1055889422863LL;
	int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = -1839281034978971613LL;

    t5 = (x21|((x22^x23)&x24));

    if (t5 != -9223370982440304640LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 37506850876809LLU;
	static int16_t x26 = -1;
	uint64_t x27 = 5889018652047165896LLU;
	volatile uint64_t t6 = 275588LLU;

    t6 = (x25|((x26^x27)&x28));

    if (t6 != 37507942449087LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MIN;
	static int16_t x31 = -1;
	uint64_t x32 = 53LLU;

    t7 = (x29|((x30^x31)&x32));

    if (t7 != 220338879LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	volatile int32_t x34 = 4120272;
	int16_t x36 = INT16_MIN;

    t8 = (x33|((x34^x35)&x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 1U;
	volatile int8_t x38 = INT8_MIN;
	uint64_t x40 = 63060072065402LLU;
	static uint64_t t9 = 250LLU;

    t9 = (x37|((x38^x39)&x40));

    if (t9 != 63060072065403LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	uint16_t x42 = UINT16_MAX;
	volatile int16_t x43 = -4014;
	volatile int64_t t10 = INT64_MIN;

    t10 = (x41|((x42^x43)&x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MAX;
	int64_t x46 = -285055334024487397LL;
	int32_t x47 = -1;
	int64_t t11 = -151721634320LL;

    t11 = (x45|((x46^x47)&x48));

    if (t11 != 285055334463045631LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = 45;
	int64_t x50 = 50012347856993440LL;
	uint64_t x51 = 44923LLU;
	volatile uint64_t t12 = 1LLU;

    t12 = (x49|((x50^x51)&x52));

    if (t12 != 893LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MIN;
	static volatile int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	int32_t t13 = -77;

    t13 = (x53|((x54^x55)&x56));

    if (t13 != 2147473039) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x58 = 21U;
	uint32_t x59 = 1534387U;
	static int16_t x60 = INT16_MAX;
	uint64_t t14 = 5769792662688307LLU;

    t14 = (x57|((x58^x59)&x60));

    if (t14 != 189921766LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x62 = 13670U;
	int8_t x63 = -1;
	int8_t x64 = -1;

    t15 = (x61|((x62^x63)&x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = -329930350657665499LL;
	int32_t x67 = -15;
	int16_t x68 = INT16_MIN;
	int64_t t16 = 5587589LL;

    t16 = (x65|((x66^x67)&x68));

    if (t16 != 329930350657634304LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = 28991945519284584LL;
	int16_t x71 = -290;
	static uint32_t x72 = UINT32_MAX;
	int64_t t17 = 1041675LL;

    t17 = (x69|((x70^x71)&x72));

    if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	uint16_t x74 = 861U;
	uint32_t x75 = 91430U;
	static volatile uint64_t t18 = 17582243192302494LLU;

    t18 = (x73|((x74^x75)&x76));

    if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x78 = 26;
	static int32_t x79 = -8;
	static volatile int32_t t19 = -625;

    t19 = (x77|((x78^x79)&x80));

    if (t19 != -30) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	int32_t x84 = -40239059;
	uint64_t t20 = 104214039356064268LLU;

    t20 = (x81|((x82^x83)&x84));

    if (t20 != 18446744073709475951LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x86 = 72LLU;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 1U;
	static uint64_t t21 = 423765LLU;

    t21 = (x85|((x86^x87)&x88));

    if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MIN;
	volatile uint64_t x90 = UINT64_MAX;
	int16_t x91 = -1;
	volatile int64_t x92 = -1LL;
	static volatile uint64_t t22 = 1618970225417271958LLU;

    t22 = (x89|((x90^x91)&x92));

    if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 684900U;
	uint32_t x94 = UINT32_MAX;
	static volatile int32_t x95 = -9;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t23 = 150886U;

    t23 = (x93|((x94^x95)&x96));

    if (t23 != 684900U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x98 = 469011758088339LLU;

    t24 = (x97|((x98^x99)&x100));

    if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x102 = -1LL;
	int16_t x103 = -1;
	int64_t x104 = INT64_MIN;
	volatile uint64_t t25 = 0LLU;

    t25 = (x101|((x102^x103)&x104));

    if (t25 != 461796763LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	static int64_t t26 = 0LL;

    t26 = (x105|((x106^x107)&x108));

    if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -812782088155774671LL;
	static int16_t x110 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	volatile int64_t t27 = 8248780LL;

    t27 = (x109|((x110^x111)&x112));

    if (t27 != -16079LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 15907LLU;
	int8_t x114 = INT8_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 115740173456269458LLU;

    t28 = (x113|((x114^x115)&x116));

    if (t28 != 18446744073709551419LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = 15U;
	int32_t x120 = INT32_MIN;
	volatile int64_t t29 = 930335415991378612LL;

    t29 = (x117|((x118^x119)&x120));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint64_t x122 = 968LLU;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = 43U;
	uint64_t t30 = 37671276LLU;

    t30 = (x121|((x122^x123)&x124));

    if (t30 != 93652895LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = -1;
	volatile uint32_t x126 = UINT32_MAX;
	uint16_t x127 = UINT16_MAX;
	static int16_t x128 = 687;
	volatile uint32_t t31 = UINT32_MAX;

    t31 = (x125|((x126^x127)&x128));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -1;
	volatile uint32_t x130 = 227279779U;
	int64_t x131 = INT64_MIN;
	volatile int64_t t32 = -353078LL;

    t32 = (x129|((x130^x131)&x132));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 56U;
	int8_t x134 = -1;
	uint16_t x136 = 40U;

    t33 = (x133|((x134^x135)&x136));

    if (t33 != 56U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 9U;
	int32_t x139 = 1;
	uint32_t x140 = 33847U;
	static uint32_t t34 = 4886295U;

    t34 = (x137|((x138^x139)&x140));

    if (t34 != 4294960894U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	volatile uint8_t x142 = 0U;
	int8_t x144 = 0;

    t35 = (x141|((x142^x143)&x144));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -8929880LL;
	static int16_t x146 = INT16_MIN;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = -1;
	volatile int64_t t36 = 9631914935989314LL;

    t36 = (x145|((x146^x147)&x148));

    if (t36 != -8912984LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	volatile int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;
	static uint8_t x152 = UINT8_MAX;
	static int64_t t37 = -4450354422599815LL;

    t37 = (x149|((x150^x151)&x152));

    if (t37 != -2147483521LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = 33283204137024LLU;
	static volatile uint16_t x156 = 0U;
	volatile uint64_t t38 = 795581294982LLU;

    t38 = (x153|((x154^x155)&x156));

    if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = 30287937587LLU;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = INT64_MIN;
	volatile uint64_t t39 = 1LLU;

    t39 = (x157|((x158^x159)&x160));

    if (t39 != 18446744057614484864LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 105035566733329LL;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = -1;
	int32_t x164 = INT32_MAX;
	volatile int64_t t40 = -551089946LL;

    t40 = (x161|((x162^x163)&x164));

    if (t40 != 105035572697105LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MIN;
	volatile uint8_t x167 = UINT8_MAX;
	uint64_t x168 = UINT64_MAX;
	uint64_t t41 = 20LLU;

    t41 = (x165|((x166^x167)&x168));

    if (t41 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	volatile int64_t x170 = -7578LL;
	volatile int64_t x171 = 1806006169117655LL;
	volatile int8_t x172 = INT8_MIN;
	int64_t t42 = -46952LL;

    t42 = (x169|((x170^x171)&x172));

    if (t42 != -1806006169124480LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 4690;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 2065075U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t43 = -15384955859LL;

    t43 = (x173|((x174^x175)&x176));

    if (t43 != 4690LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MIN;
	int8_t x178 = 2;
	int32_t x179 = INT32_MAX;
	volatile int64_t t44 = -4352242508776213LL;

    t44 = (x177|((x178^x179)&x180));

    if (t44 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MIN;
	static volatile uint8_t x183 = 2U;
	uint64_t x184 = 286LLU;

    t45 = (x181|((x182^x183)&x184));

    if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -3563;
	static int32_t x186 = 31274;
	volatile int32_t x187 = -23819;
	uint64_t x188 = 839LLU;
	static volatile uint64_t t46 = 1445507LLU;

    t46 = (x185|((x186^x187)&x188));

    if (t46 != 18446744073709548119LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x190 = -1;
	int16_t x191 = 1369;
	uint16_t x192 = 11U;
	volatile int32_t t47 = -513648172;

    t47 = (x189|((x190^x191)&x192));

    if (t47 != 123) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	uint32_t x196 = UINT32_MAX;
	uint32_t t48 = UINT32_MAX;

    t48 = (x193|((x194^x195)&x196));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	uint16_t x198 = 63U;
	uint16_t x199 = 8U;
	volatile int32_t t49 = 82926200;

    t49 = (x197|((x198^x199)&x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 7;
	int16_t x202 = INT16_MIN;
	int32_t x203 = 0;
	volatile int8_t x204 = 1;

    t50 = (x201|((x202^x203)&x204));

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = -1;

    t51 = (x205|((x206^x207)&x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	uint64_t x211 = UINT64_MAX;
	volatile int16_t x212 = -1;

    t52 = (x209|((x210^x211)&x212));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 0U;
	uint32_t x214 = 260996672U;
	uint16_t x215 = UINT16_MAX;
	int8_t x216 = INT8_MIN;
	static volatile uint32_t t53 = 55386U;

    t53 = (x213|((x214^x215)&x216));

    if (t53 != 260997504U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x218 = INT32_MIN;
	static int64_t x219 = INT64_MAX;
	int32_t x220 = 70;
	int64_t t54 = -631891LL;

    t54 = (x217|((x218^x219)&x220));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 54U;
	int16_t x222 = -6;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int64_t t55 = 48791252172194630LL;

    t55 = (x221|((x222^x223)&x224));

    if (t55 != 55LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 6U;
	uint8_t x226 = 15U;
	static int32_t x228 = -3073475;

    t56 = (x225|((x226^x227)&x228));

    if (t56 != 15U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	uint32_t x232 = 565524U;
	volatile uint32_t t57 = 310641885U;

    t57 = (x229|((x230^x231)&x232));

    if (t57 != 32767U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 40;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MAX;
	volatile uint16_t x236 = 10782U;
	int32_t t58 = -367700;

    t58 = (x233|((x234^x235)&x236));

    if (t58 != 10814) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t59 = -188909312LL;

    t59 = (x237|((x238^x239)&x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 14319U;
	static uint16_t x242 = 5U;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = -6;
	static volatile uint32_t t60 = 33026U;

    t60 = (x241|((x242^x243)&x244));

    if (t60 != 65535U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	int32_t x246 = -1;
	uint8_t x247 = 3U;

    t61 = (x245|((x246^x247)&x248));

    if (t61 != 15228840902655LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 3119861LLU;
	int64_t x250 = INT64_MAX;
	uint64_t x251 = 1511656LLU;
	volatile uint64_t t62 = 1740174953970409439LLU;

    t62 = (x249|((x250^x251)&x252));

    if (t62 != 9223372036853727223LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = INT64_MIN;
	int16_t x256 = 1;
	volatile int64_t t63 = 29334212754744104LL;

    t63 = (x253|((x254^x255)&x256));

    if (t63 != -2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -1LL;
	static int16_t x258 = INT16_MIN;
	int64_t x259 = -56LL;
	int32_t x260 = -12388711;
	int64_t t64 = -7822845LL;

    t64 = (x257|((x258^x259)&x260));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = 332U;
	static volatile int16_t x264 = -5882;

    t65 = (x261|((x262^x263)&x264));

    if (t65 != -32508) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x267 = 20;
	uint32_t x268 = 246U;

    t66 = (x265|((x266^x267)&x268));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -978LL;

    t67 = (x269|((x270^x271)&x272));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	static volatile uint8_t x274 = 20U;
	static uint32_t x275 = 1094085U;
	int16_t x276 = 95;
	volatile uint32_t t68 = 26U;

    t68 = (x273|((x274^x275)&x276));

    if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	int64_t x280 = -1LL;
	volatile int64_t t69 = INT64_MAX;

    t69 = (x277|((x278^x279)&x280));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -635;
	volatile uint32_t x282 = 2538U;
	int32_t x283 = -930;
	int32_t x284 = -3573;
	uint32_t t70 = 504775U;

    t70 = (x281|((x282^x283)&x284));

    if (t70 != 4294966661U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -196;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MAX;
	int64_t x288 = -195LL;
	int64_t t71 = 9368426424376LL;

    t71 = (x285|((x286^x287)&x288));

    if (t71 != -195LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = UINT64_MAX;
	int64_t x291 = 6382038118LL;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (x289|((x290^x291)&x292));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = 221118;
	uint16_t x296 = 7145U;
	static int64_t t73 = -462244930387651LL;

    t73 = (x293|((x294^x295)&x296));

    if (t73 != 65535LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	volatile int8_t x299 = INT8_MAX;
	static volatile int16_t x300 = -1;
	int32_t t74 = -579323;

    t74 = (x297|((x298^x299)&x300));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 5841;
	uint16_t x302 = 428U;
	int64_t x303 = -4851LL;
	static int8_t x304 = 10;
	volatile int64_t t75 = -1LL;

    t75 = (x301|((x302^x303)&x304));

    if (t75 != 5841LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x305 = -1LL;
	static uint8_t x307 = 0U;
	uint64_t x308 = UINT64_MAX;

    t76 = (x305|((x306^x307)&x308));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MAX;
	int16_t x310 = 3105;
	volatile uint8_t x311 = 0U;
	int32_t t77 = INT32_MAX;

    t77 = (x309|((x310^x311)&x312));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	static uint8_t x314 = 2U;
	int16_t x315 = INT16_MAX;

    t78 = (x313|((x314^x315)&x316));

    if (t78 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	int64_t x320 = INT64_MIN;
	static int64_t t79 = -193250528608LL;

    t79 = (x317|((x318^x319)&x320));

    if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	static uint16_t x324 = 31295U;
	int32_t t80 = -23074770;

    t80 = (x321|((x322^x323)&x324));

    if (t80 != -30694) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = 8U;
	int8_t x326 = 3;
	int16_t x327 = 2035;
	volatile uint16_t x328 = 44U;
	static volatile int32_t t81 = -533546846;

    t81 = (x325|((x326^x327)&x328));

    if (t81 != 40) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MIN;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;

    t82 = (x329|((x330^x331)&x332));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MIN;
	uint32_t x334 = 24326U;
	int8_t x335 = 0;
	static volatile uint8_t x336 = UINT8_MAX;
	volatile int64_t t83 = -133030091769239015LL;

    t83 = (x333|((x334^x335)&x336));

    if (t83 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	volatile int16_t x338 = INT16_MIN;
	volatile int64_t x340 = INT64_MAX;
	uint64_t t84 = UINT64_MAX;

    t84 = (x337|((x338^x339)&x340));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MAX;
	int32_t x343 = INT32_MAX;
	int8_t x344 = -12;
	int64_t t85 = 87LL;

    t85 = (x341|((x342^x343)&x344));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = 6434080837380LLU;
	static uint8_t x346 = 94U;
	int32_t x347 = INT32_MIN;
	volatile int16_t x348 = 9;

    t86 = (x345|((x346^x347)&x348));

    if (t86 != 6434080837388LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	static int64_t x350 = INT64_MIN;
	int32_t x351 = 485609;
	static int64_t x352 = INT64_MIN;
	int64_t t87 = 25027948386LL;

    t87 = (x349|((x350^x351)&x352));

    if (t87 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int8_t x354 = -11;
	uint16_t x355 = 6237U;
	static uint64_t x356 = 505953144282756LLU;

    t88 = (x353|((x354^x355)&x356));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	int64_t t89 = 4631968540LL;

    t89 = (x357|((x358^x359)&x360));

    if (t89 != -20LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	uint16_t x364 = 433U;
	int32_t t90 = 11;

    t90 = (x361|((x362^x363)&x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -527;
	static int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = 85U;
	int16_t x368 = -36;
	volatile int64_t t91 = 74681136041LL;

    t91 = (x365|((x366^x367)&x368));

    if (t91 != -523LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MAX;
	static uint64_t x371 = 84LLU;
	uint64_t x372 = 614268869526330613LLU;

    t92 = (x369|((x370^x371)&x372));

    if (t92 != 1152581631LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	static uint8_t x374 = 1U;
	int64_t x375 = -1LL;
	uint16_t x376 = 5549U;
	static int64_t t93 = 342781172LL;

    t93 = (x373|((x374^x375)&x376));

    if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	volatile int8_t x378 = -1;
	int16_t x379 = INT16_MAX;
	static volatile uint16_t x380 = 0U;

    t94 = (x377|((x378^x379)&x380));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	int16_t x382 = -51;
	int64_t x383 = -9306907345084601LL;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

    t95 = (x381|((x382^x383)&x384));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -8592LL;
	int16_t x386 = -1;
	int64_t x387 = -304LL;
	int16_t x388 = 146;
	volatile int64_t t96 = 0LL;

    t96 = (x385|((x386^x387)&x388));

    if (t96 != -8590LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	static uint8_t x391 = 18U;
	static int32_t x392 = -1;
	uint64_t t97 = UINT64_MAX;

    t97 = (x389|((x390^x391)&x392));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 1173U;
	uint32_t x395 = 23U;
	int64_t x396 = INT64_MIN;
	int64_t t98 = -145863LL;

    t98 = (x393|((x394^x395)&x396));

    if (t98 != 65535LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 1121767U;
	int64_t t99 = -1333271LL;

    t99 = (x397|((x398^x399)&x400));

    if (t99 != 4294967295LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MAX;
	uint32_t x404 = 47101U;
	static uint32_t t100 = 10229U;

    t100 = (x401|((x402^x403)&x404));

    if (t100 != 2147483647U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x407 = UINT32_MAX;
	int16_t x408 = -1;
	int64_t t101 = -156LL;

    t101 = (x405|((x406^x407)&x408));

    if (t101 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -9;
	int32_t x410 = -1;
	static int8_t x412 = 1;
	volatile int64_t t102 = 212295072LL;

    t102 = (x409|((x410^x411)&x412));

    if (t102 != -9LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = 26911987LLU;
	volatile uint16_t x415 = 21047U;
	int64_t x416 = -57579380LL;
	volatile uint64_t t103 = 405LLU;

    t103 = (x413|((x414^x415)&x416));

    if (t103 != 26928371LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	int64_t x418 = -14730761LL;
	static uint8_t x419 = 0U;
	int32_t x420 = INT32_MAX;
	volatile int64_t t104 = 80LL;

    t104 = (x417|((x418^x419)&x420));

    if (t104 != 4294967295LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x422 = INT8_MAX;
	volatile uint32_t t105 = UINT32_MAX;

    t105 = (x421|((x422^x423)&x424));

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MAX;
	static int32_t x427 = -13;
	static volatile int32_t t106 = -48;

    t106 = (x425|((x426^x427)&x428));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MAX;
	uint8_t x431 = 15U;
	int64_t x432 = -1LL;
	static volatile int64_t t107 = 17797974646368LL;

    t107 = (x429|((x430^x431)&x432));

    if (t107 != 2147483641LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int64_t x434 = INT64_MAX;
	int64_t x435 = INT64_MIN;
	uint32_t x436 = 547265U;
	volatile int64_t t108 = INT64_MAX;

    t108 = (x433|((x434^x435)&x436));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x440 = 67;
	static int32_t t109 = 1735670;

    t109 = (x437|((x438^x439)&x440));

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 148U;
	int8_t x442 = 32;
	int8_t x443 = INT8_MAX;
	volatile int32_t t110 = -408;

    t110 = (x441|((x442^x443)&x444));

    if (t110 != 212) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = -10;
	volatile int8_t x447 = INT8_MAX;

    t111 = (x445|((x446^x447)&x448));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x450 = INT8_MIN;
	volatile uint64_t x451 = 310540883LLU;

    t112 = (x449|((x450^x451)&x452));

    if (t112 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	static uint16_t x454 = UINT16_MAX;
	uint8_t x455 = 38U;
	volatile int8_t x456 = INT8_MIN;
	volatile int64_t t113 = -1151073109391934765LL;

    t113 = (x453|((x454^x455)&x456));

    if (t113 != -9223372036854710400LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = 46665588331LLU;
	volatile uint16_t x460 = UINT16_MAX;
	uint64_t t114 = 6LLU;

    t114 = (x457|((x458^x459)&x460));

    if (t114 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 12702499U;
	uint32_t x463 = UINT32_MAX;
	int64_t t115 = -481LL;

    t115 = (x461|((x462^x463)&x464));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = 1161U;
	static uint8_t x467 = 1U;
	int64_t t116 = INT64_MIN;

    t116 = (x465|((x466^x467)&x468));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 2847846673005575648LLU;
	int32_t x471 = INT32_MIN;
	int8_t x472 = -1;

    t117 = (x469|((x470^x471)&x472));

    if (t117 != 2847846673005575648LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 1874U;
	volatile uint8_t x474 = UINT8_MAX;
	int8_t x475 = -43;
	static int32_t t118 = 103965;

    t118 = (x473|((x474^x475)&x476));

    if (t118 != -174) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = INT8_MAX;
	int32_t x478 = INT32_MAX;
	static int64_t x479 = INT64_MAX;
	uint32_t x480 = 2U;

    t119 = (x477|((x478^x479)&x480));

    if (t119 != 127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MIN;
	int32_t x483 = -1;
	volatile int64_t t120 = -5217189032017LL;

    t120 = (x481|((x482^x483)&x484));

    if (t120 != 1748876493LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x487 = INT64_MIN;
	static uint64_t x488 = UINT64_MAX;
	static uint64_t t121 = 209LLU;

    t121 = (x485|((x486^x487)&x488));

    if (t121 != 9223372036854775691LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint16_t x489 = 25749U;
	int16_t x491 = INT16_MAX;
	volatile int64_t x492 = -961496147LL;
	int64_t t122 = -58735LL;

    t122 = (x489|((x490^x491)&x492));

    if (t122 != 32693LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = -5030;
	int16_t x496 = 251;
	int32_t t123 = 2407798;

    t123 = (x493|((x494^x495)&x496));

    if (t123 != -32678) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x498 = UINT32_MAX;
	int8_t x499 = -1;
	volatile uint32_t t124 = 171179185U;

    t124 = (x497|((x498^x499)&x500));

    if (t124 != 2U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x503 = INT64_MIN;
	volatile int64_t x504 = INT64_MIN;
	int64_t t125 = -184029129277417729LL;

    t125 = (x501|((x502^x503)&x504));

    if (t125 != -2147483648LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = 8133U;
	int32_t x508 = -8136113;
	int64_t t126 = -49694767590758123LL;

    t126 = (x505|((x506^x507)&x508));

    if (t126 != -9223372035923519487LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -456;
	int64_t x512 = -418079676LL;
	uint64_t t127 = 931470406LLU;

    t127 = (x509|((x510^x511)&x512));

    if (t127 != 18446744073709551160LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = 0;
	static uint32_t x514 = UINT32_MAX;
	static int16_t x515 = 47;
	int8_t x516 = INT8_MIN;
	volatile uint32_t t128 = 2298153U;

    t128 = (x513|((x514^x515)&x516));

    if (t128 != 4294967168U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 309161724LLU;
	int32_t x518 = INT32_MIN;
	int16_t x520 = INT16_MAX;
	uint64_t t129 = 262742528133LLU;

    t129 = (x517|((x518^x519)&x520));

    if (t129 != 309166076LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = INT8_MIN;
	uint8_t x523 = 11U;
	volatile int64_t x524 = 130271805826LL;
	volatile int64_t t130 = -3973235LL;

    t130 = (x521|((x522^x523)&x524));

    if (t130 != -13LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x525 = 12922775218615648LLU;
	static volatile int64_t x526 = INT64_MIN;
	int16_t x528 = -20;
	uint64_t t131 = 450667795805LLU;

    t131 = (x525|((x526^x527)&x528));

    if (t131 != 9236294812073394156LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x530 = INT64_MIN;
	uint16_t x531 = 15U;
	volatile int64_t t132 = 1036903770752LL;

    t132 = (x529|((x530^x531)&x532));

    if (t132 != -25LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	volatile uint32_t x535 = 95746050U;
	int64_t x536 = -1LL;

    t133 = (x533|((x534^x535)&x536));

    if (t133 != -9223372036759027823LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = -27824;
	volatile int8_t x539 = INT8_MAX;
	uint16_t x540 = 281U;
	volatile int64_t t134 = 3962LL;

    t134 = (x537|((x538^x539)&x540));

    if (t134 != -27823LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 56U;
	static int32_t x543 = INT32_MIN;
	int64_t x544 = -141984625106648471LL;
	volatile int64_t t135 = 3825638LL;

    t135 = (x541|((x542^x543)&x544));

    if (t135 != 9081387410255773752LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 85855121U;
	static int16_t x546 = 7;
	volatile int16_t x548 = 1;

    t136 = (x545|((x546^x547)&x548));

    if (t136 != 85855121LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = 68LL;
	uint32_t x550 = 12299933U;
	int64_t x551 = -57915187782675LL;

    t137 = (x549|((x550^x551)&x552));

    if (t137 != -57915486502844LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MIN;
	int32_t t138 = 142712103;

    t138 = (x553|((x554^x555)&x556));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	static int32_t x558 = INT32_MIN;
	uint64_t x560 = 10911407LLU;
	static uint64_t t139 = 977752900841LLU;

    t139 = (x557|((x558^x559)&x560));

    if (t139 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = 68U;
	int8_t x563 = 1;

    t140 = (x561|((x562^x563)&x564));

    if (t140 != 85LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x567 = INT32_MIN;
	static volatile int16_t x568 = -1;
	uint32_t t141 = 498643U;

    t141 = (x565|((x566^x567)&x568));

    if (t141 != 2147483649U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 23109U;
	uint16_t x570 = 178U;
	int64_t x571 = INT64_MIN;

    t142 = (x569|((x570^x571)&x572));

    if (t142 != -9223372036854752699LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = 3U;
	static int16_t x575 = -10262;
	int32_t x576 = INT32_MIN;
	int64_t t143 = 6LL;

    t143 = (x573|((x574^x575)&x576));

    if (t143 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MIN;
	static int16_t x578 = -1671;
	int8_t x579 = INT8_MAX;
	int8_t x580 = 35;
	volatile int32_t t144 = 0;

    t144 = (x577|((x578^x579)&x580));

    if (t144 != -32766) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 20U;
	uint32_t x582 = 829118306U;
	int8_t x584 = -1;
	volatile uint32_t t145 = 600895U;

    t145 = (x581|((x582^x583)&x584));

    if (t145 != 2976601974U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int8_t x586 = INT8_MIN;
	int16_t x587 = -21;
	volatile int8_t x588 = INT8_MIN;
	uint64_t t146 = UINT64_MAX;

    t146 = (x585|((x586^x587)&x588));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = INT8_MIN;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = 29906401U;
	uint32_t t147 = 15194U;

    t147 = (x589|((x590^x591)&x592));

    if (t147 != 255U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	int8_t x594 = -2;
	uint64_t x595 = 0LLU;
	int32_t x596 = INT32_MIN;

    t148 = (x593|((x594^x595)&x596));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -4;
	uint64_t x598 = 24059262LLU;
	volatile int64_t x599 = 244874LL;
	int64_t x600 = -1221446037472518LL;
	volatile uint64_t t149 = 1224541806187947LLU;

    t149 = (x597|((x598^x599)&x600));

    if (t149 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MAX;
	int32_t x602 = -1;
	static int32_t x603 = INT32_MIN;
	volatile int32_t x604 = INT32_MIN;
	static volatile int32_t t150 = 1;

    t150 = (x601|((x602^x603)&x604));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int32_t x608 = -1;
	static int64_t t151 = 8525195741712821LL;

    t151 = (x605|((x606^x607)&x608));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = INT64_MIN;
	int64_t x610 = -1LL;
	volatile int64_t x611 = INT64_MIN;
	static int8_t x612 = INT8_MAX;
	volatile int64_t t152 = -5165LL;

    t152 = (x609|((x610^x611)&x612));

    if (t152 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MAX;
	volatile int16_t x614 = -1;
	int16_t x615 = INT16_MAX;
	int64_t x616 = INT64_MAX;
	static volatile int64_t t153 = 198928LL;

    t153 = (x613|((x614^x615)&x616));

    if (t153 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MAX;
	uint16_t x619 = 7U;
	volatile int8_t x620 = 2;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x617|((x618^x619)&x620));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = UINT32_MAX;
	int8_t x622 = INT8_MIN;
	int64_t x623 = -1LL;
	uint64_t t155 = 12858371931838682LLU;

    t155 = (x621|((x622^x623)&x624));

    if (t155 != 4294967295LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int16_t x626 = -3448;
	static volatile uint64_t x627 = 3880873870931LLU;
	int64_t x628 = INT64_MIN;

    t156 = (x625|((x626^x627)&x628));

    if (t156 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = -1LL;
	static int16_t x630 = 12271;
	volatile int64_t x632 = -1460152LL;
	volatile int64_t t157 = -2019348414465012LL;

    t157 = (x629|((x630^x631)&x632));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	volatile int16_t x634 = -1;
	int16_t x636 = INT16_MAX;
	int64_t t158 = -14565393LL;

    t158 = (x633|((x634^x635)&x636));

    if (t158 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 9U;
	static int32_t x639 = -25;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = 43476609;

    t159 = (x637|((x638^x639)&x640));

    if (t159 != -35) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MIN;
	volatile int16_t x643 = -559;
	volatile uint64_t x644 = 302574049037LLU;
	static uint64_t t160 = 502867923160199340LLU;

    t160 = (x641|((x642^x643)&x644));

    if (t160 != 32767LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x646 = INT32_MAX;
	int8_t x647 = -10;
	int32_t x648 = -702340;
	volatile int32_t t161 = 22888715;

    t161 = (x645|((x646^x647)&x648));

    if (t161 != -2147483640) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = 4609506512913LLU;
	volatile int64_t x651 = INT64_MIN;
	static int8_t x652 = INT8_MIN;
	volatile uint64_t t162 = 30LLU;

    t162 = (x649|((x650^x651)&x652));

    if (t162 != 18446744073709522944LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MAX;
	int32_t x655 = 36668;
	volatile int32_t x656 = -29298825;
	volatile int64_t t163 = -1LL;

    t163 = (x653|((x654^x655)&x656));

    if (t163 != 9223372036825440375LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	volatile int16_t x658 = -1;
	volatile int16_t x659 = -1;
	volatile int64_t t164 = 114LL;

    t164 = (x657|((x658^x659)&x660));

    if (t164 != -128LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	volatile int16_t x663 = -59;
	volatile uint64_t x664 = 522LLU;
	uint64_t t165 = 4365639434640459245LLU;

    t165 = (x661|((x662^x663)&x664));

    if (t165 != 18446744073709519370LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	uint16_t x667 = UINT16_MAX;
	int64_t x668 = INT64_MIN;
	int64_t t166 = 29713LL;

    t166 = (x665|((x666^x667)&x668));

    if (t166 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x670 = 3219816LLU;
	uint64_t x671 = UINT64_MAX;
	volatile uint64_t t167 = 33232910LLU;

    t167 = (x669|((x670^x671)&x672));

    if (t167 != 9223372036851555991LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = -52;
	uint32_t x674 = 1712U;
	int32_t x675 = INT32_MAX;
	static int32_t x676 = 95;

    t168 = (x673|((x674^x675)&x676));

    if (t168 != 4294967247U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	int8_t x678 = 0;
	int32_t x679 = INT32_MIN;
	volatile int64_t t169 = 11586415277LL;

    t169 = (x677|((x678^x679)&x680));

    if (t169 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -223;
	volatile int64_t x682 = INT64_MIN;
	uint64_t x683 = 47LLU;
	uint64_t t170 = 1018863LLU;

    t170 = (x681|((x682^x683)&x684));

    if (t170 != 18446744073709551403LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	static volatile int64_t x686 = INT64_MAX;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MAX;
	static int64_t t171 = 27LL;

    t171 = (x685|((x686^x687)&x688));

    if (t171 != 32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x689 = INT64_MIN;
	uint64_t x690 = UINT64_MAX;
	uint64_t x691 = 596096216417LLU;
	int8_t x692 = -29;
	volatile uint64_t t172 = 700767379680LLU;

    t172 = (x689|((x690^x691)&x692));

    if (t172 != 18446743477613335170LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x693 = UINT8_MAX;
	uint8_t x694 = 1U;
	int32_t x695 = -1;
	static volatile int32_t t173 = -5065;

    t173 = (x693|((x694^x695)&x696));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x698 = 174020U;
	int32_t x699 = INT32_MAX;
	static int8_t x700 = INT8_MAX;
	static volatile int64_t t174 = INT64_MAX;

    t174 = (x697|((x698^x699)&x700));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = UINT32_MAX;
	uint16_t x703 = UINT16_MAX;
	int16_t x704 = INT16_MAX;
	uint32_t t175 = 104219900U;

    t175 = (x701|((x702^x703)&x704));

    if (t175 != 4294967168U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = UINT32_MAX;
	int16_t x707 = INT16_MIN;
	static int32_t x708 = INT32_MAX;
	volatile uint32_t t176 = 499750053U;

    t176 = (x705|((x706^x707)&x708));

    if (t176 != 651132927U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 9600;
	uint64_t x711 = 2344LLU;
	uint8_t x712 = UINT8_MAX;
	uint64_t t177 = 6700422681772LLU;

    t177 = (x709|((x710^x711)&x712));

    if (t177 != 9640LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = -1726925634696584306LL;
	int32_t x714 = INT32_MIN;
	uint16_t x715 = 11030U;
	uint64_t x716 = 20255406477671LLU;
	uint64_t t178 = 68LLU;

    t178 = (x713|((x714^x715)&x716));

    if (t178 != 16719818593631789966LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	uint8_t x719 = 27U;
	int8_t x720 = 1;
	volatile uint32_t t179 = 3296U;

    t179 = (x717|((x718^x719)&x720));

    if (t179 != 4294967168U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	static int64_t x722 = -7091651LL;
	int64_t x723 = 2854191559930LL;
	int64_t t180 = -534871486848LL;

    t180 = (x721|((x722^x723)&x724));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MIN;
	static volatile int8_t x727 = -1;
	static int32_t x728 = INT32_MIN;
	int32_t t181 = 22830780;

    t181 = (x725|((x726^x727)&x728));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint8_t x730 = 0U;
	uint16_t x731 = UINT16_MAX;
	static int16_t x732 = INT16_MIN;
	static volatile int64_t t182 = 199460360LL;

    t182 = (x729|((x730^x731)&x732));

    if (t182 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MIN;
	int16_t x735 = INT16_MAX;
	volatile uint32_t x736 = 0U;

    t183 = (x733|((x734^x735)&x736));

    if (t183 != 2U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	static int16_t x738 = INT16_MIN;
	int32_t x739 = INT32_MIN;
	static int64_t x740 = INT64_MAX;

    t184 = (x737|((x738^x739)&x740));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MIN;
	static uint16_t x743 = 2493U;
	int32_t x744 = INT32_MAX;
	static volatile uint64_t t185 = 4246583331330108LLU;

    t185 = (x741|((x742^x743)&x744));

    if (t185 != 9223372037357951421LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -28124039;
	static int8_t x747 = -1;
	int32_t x748 = -252497;
	int32_t t186 = -182545153;

    t186 = (x745|((x746^x747)&x748));

    if (t186 != -66049) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x750 = 59U;
	int64_t x751 = INT64_MIN;
	volatile int64_t t187 = 52763496750LL;

    t187 = (x749|((x750^x751)&x752));

    if (t187 != -32768LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 196;
	uint16_t x754 = 12433U;
	volatile int32_t x755 = 700063;
	int16_t x756 = INT16_MAX;
	static volatile int32_t t188 = -4816481;

    t188 = (x753|((x754^x755)&x756));

    if (t188 != 7886) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1861950963LL;
	int32_t x758 = INT32_MIN;
	volatile int16_t x759 = -6727;
	int32_t x760 = 6;

    t189 = (x757|((x758^x759)&x760));

    if (t189 != -1861950963LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = -1LL;
	uint8_t x763 = 19U;
	uint64_t x764 = 14327LLU;
	uint64_t t190 = 369877LLU;

    t190 = (x761|((x762^x763)&x764));

    if (t190 != 45348847LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MAX;
	uint16_t x766 = 20680U;
	volatile int16_t x767 = INT16_MIN;
	volatile int32_t t191 = INT32_MAX;

    t191 = (x765|((x766^x767)&x768));

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = 840;
	volatile uint32_t x772 = 2047U;
	static volatile uint64_t t192 = 106923950440784LLU;

    t192 = (x769|((x770^x771)&x772));

    if (t192 != 1994LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MAX;
	volatile int32_t x774 = INT32_MAX;
	uint8_t x775 = 21U;
	uint32_t x776 = UINT32_MAX;
	volatile uint32_t t193 = 0U;

    t193 = (x773|((x774^x775)&x776));

    if (t193 != 2147483647U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	uint8_t x778 = 69U;
	volatile int32_t x779 = INT32_MIN;
	uint64_t x780 = 6393LLU;
	uint64_t t194 = 57351143504506LLU;

    t194 = (x777|((x778^x779)&x780));

    if (t194 != 255LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	int16_t x782 = INT16_MIN;
	uint64_t x783 = UINT64_MAX;
	volatile int8_t x784 = INT8_MIN;
	uint64_t t195 = 2768518LLU;

    t195 = (x781|((x782^x783)&x784));

    if (t195 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	uint8_t x786 = UINT8_MAX;
	int8_t x788 = -1;
	int64_t t196 = -2469331LL;

    t196 = (x785|((x786^x787)&x788));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = -1;
	static volatile int8_t x790 = INT8_MIN;
	static int64_t x791 = INT64_MAX;
	uint8_t x792 = 1U;
	volatile int64_t t197 = 617654423822693LL;

    t197 = (x789|((x790^x791)&x792));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x795 = INT16_MIN;
	int64_t x796 = -1LL;
	static int64_t t198 = 415545393LL;

    t198 = (x793|((x794^x795)&x796));

    if (t198 != -2147450881LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 780LLU;
	uint64_t x798 = 224LLU;
	int8_t x800 = INT8_MAX;

    t199 = (x797|((x798^x799)&x800));

    if (t199 != 799LLU) { NG(); } else { ; }
	
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

