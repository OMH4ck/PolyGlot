
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

static uint16_t x4 = 0U;
static uint32_t x9 = 359911169U;
volatile int32_t x19 = 12086167;
uint64_t x21 = 371339096612LLU;
int8_t x22 = -13;
int32_t x29 = INT32_MIN;
volatile uint64_t x30 = 517027054728LLU;
int64_t t7 = -3482579LL;
uint64_t x40 = 10617400527875LLU;
uint8_t x48 = 0U;
int64_t x52 = INT64_MIN;
uint32_t x53 = UINT32_MAX;
int8_t x70 = 0;
uint64_t t16 = 10LLU;
uint32_t x73 = 2126U;
volatile int32_t t18 = 8;
uint8_t x82 = 29U;
int32_t t20 = 3150318;
static int32_t t21 = 77;
volatile int8_t x93 = 0;
static uint32_t x96 = UINT32_MAX;
volatile int32_t t22 = 14075;
volatile int32_t x102 = 3303853;
volatile int64_t x105 = -29192607LL;
int64_t x113 = -135LL;
uint16_t x116 = UINT16_MAX;
int32_t x119 = -4264821;
static volatile int32_t t29 = INT32_MIN;
uint32_t x127 = 24356116U;
volatile int32_t t31 = -53;
volatile int8_t x140 = INT8_MAX;
volatile uint8_t x141 = 5U;
int16_t x142 = -262;
int64_t x145 = -1LL;
int64_t t35 = 30234823474LL;
int32_t x154 = 1090409;
int8_t x159 = 0;
static volatile int32_t x162 = INT32_MIN;
int16_t x163 = INT16_MIN;
volatile int64_t t38 = 1676LL;
static int8_t x169 = INT8_MIN;
int32_t x171 = INT32_MAX;
volatile int32_t x173 = -1;
volatile int16_t x182 = INT16_MAX;
uint16_t x192 = 661U;
int32_t x194 = -1;
uint64_t x195 = UINT64_MAX;
static int16_t x203 = -1;
int16_t x208 = -1;
int32_t t49 = -495751876;
uint32_t x213 = 1032U;
int64_t x219 = -1LL;
uint64_t x226 = 3304061966040LLU;
volatile int32_t t53 = -312033;
volatile int16_t x231 = INT16_MIN;
int32_t x232 = INT32_MIN;
static uint64_t x243 = 4756669783513364399LLU;
volatile int16_t x244 = -1;
uint64_t t57 = 1LLU;
volatile int32_t x246 = -27;
int16_t x249 = INT16_MAX;
uint32_t x253 = UINT32_MAX;
uint32_t x258 = UINT32_MAX;
volatile uint32_t t61 = 140203U;
static int8_t x273 = 19;
int16_t x280 = -1;
int16_t x285 = INT16_MAX;
int64_t t68 = -987744917LL;
int64_t x295 = INT64_MIN;
int8_t x308 = 36;
uint8_t x310 = 26U;
volatile int16_t x313 = INT16_MIN;
int8_t x319 = INT8_MIN;
uint16_t x320 = 23U;
int16_t x327 = 301;
int64_t x328 = -7562795LL;
int32_t t77 = 1650;
uint16_t x346 = 13U;
int64_t x347 = -1LL;
uint8_t x349 = 8U;
static uint8_t x351 = UINT8_MAX;
uint8_t x352 = 21U;
static volatile uint64_t t83 = 2365637546LLU;
uint8_t x360 = 21U;
static int8_t x364 = INT8_MIN;
static int64_t x368 = INT64_MIN;
uint8_t x369 = 24U;
uint64_t x375 = 303LLU;
volatile int32_t t88 = 29024;
int8_t x378 = -7;
static int8_t x387 = INT8_MIN;
static int8_t x400 = -24;
volatile uint8_t x403 = UINT8_MAX;
static volatile int64_t x408 = INT64_MIN;
volatile uint64_t x425 = UINT64_MAX;
int16_t x429 = -1;
volatile int8_t x430 = -2;
uint8_t x433 = UINT8_MAX;
int64_t x437 = -1LL;
uint8_t x447 = UINT8_MAX;
int64_t x449 = -1LL;
int16_t x450 = -1;
static volatile uint32_t t107 = UINT32_MAX;
int32_t x462 = 1;
uint16_t x464 = UINT16_MAX;
uint8_t x470 = UINT8_MAX;
int32_t t112 = 440453;
volatile int32_t t113 = -6;
volatile int32_t t114 = 243;
int8_t x489 = -29;
int32_t t115 = -39381882;
volatile int32_t t116 = -8207644;
uint64_t x503 = UINT64_MAX;
int64_t x507 = INT64_MIN;
int32_t t119 = -52075460;
int32_t t120 = -20;
int16_t x513 = INT16_MAX;
volatile uint64_t x519 = 6492744754560LLU;
static int16_t x527 = -17;
static volatile int16_t x529 = 23;
uint8_t x531 = 14U;
static int32_t x535 = INT32_MIN;
int16_t x541 = -19;
int16_t x542 = -3;
uint16_t x543 = 25887U;
volatile int8_t x545 = INT8_MIN;
int8_t x550 = -59;
int8_t x552 = INT8_MIN;
int32_t x554 = INT32_MIN;
volatile int8_t x559 = 2;
int16_t x563 = INT16_MIN;
int8_t x568 = -1;
int32_t x571 = -1;
int64_t x575 = INT64_MIN;
volatile int32_t t136 = -1;
int16_t x579 = INT16_MIN;
static int32_t t138 = 10341134;
uint64_t x588 = UINT64_MAX;
volatile int32_t t139 = -21572150;
int8_t x592 = -45;
int64_t x597 = INT64_MIN;
static uint64_t x598 = UINT64_MAX;
static int64_t x599 = INT64_MIN;
int64_t t142 = INT64_MIN;
uint8_t x601 = 14U;
volatile uint16_t x602 = 14988U;
volatile int64_t x613 = -2054842418LL;
int32_t x640 = INT32_MAX;
int16_t x642 = INT16_MAX;
volatile int16_t x643 = INT16_MIN;
int32_t x645 = INT32_MIN;
static int32_t t154 = -1557;
uint8_t x661 = 7U;
uint8_t x664 = 11U;
static int16_t x665 = -1;
int32_t x670 = -1;
volatile int32_t t159 = -1359;
int16_t x673 = INT16_MIN;
uint32_t x675 = UINT32_MAX;
static int32_t t160 = 3860554;
volatile int16_t x680 = INT16_MAX;
int64_t x693 = -30095575371155LL;
volatile int64_t t164 = 2084003239790LL;
int32_t x698 = 7552346;
int32_t t165 = -3;
int32_t t167 = 4368;
volatile uint64_t x710 = 155808LLU;
int64_t x712 = INT64_MIN;
int32_t t169 = 5504;
int8_t x718 = -1;
volatile int64_t x720 = -10LL;
uint32_t x724 = 3428918U;
static int64_t t171 = -30004554540840561LL;
int8_t x726 = -1;
int8_t x730 = -6;
static uint16_t x733 = 5409U;
static uint64_t x736 = 6035925688917787LLU;
uint32_t x739 = 7U;
static volatile int32_t t175 = INT32_MAX;
uint32_t x742 = 12401U;
static int64_t t176 = -26667LL;
int32_t x746 = INT32_MIN;
int16_t x749 = -1;
volatile uint8_t x753 = 2U;
int8_t x757 = -27;
int64_t x763 = 13LL;
volatile int8_t x768 = 14;
static volatile int64_t x772 = INT64_MIN;
static volatile int32_t t184 = -33161;
int64_t x780 = INT64_MIN;
volatile int64_t t186 = INT64_MIN;
uint16_t x786 = 3488U;
int16_t x791 = INT16_MIN;
uint32_t t188 = 45U;
volatile uint32_t x793 = UINT32_MAX;
int64_t x797 = 26LL;
uint8_t x798 = 14U;
static int16_t x801 = INT16_MIN;
int32_t x802 = -91798;
int16_t x810 = INT16_MIN;
int32_t x814 = INT32_MIN;
int32_t x818 = INT32_MIN;
volatile int16_t x820 = 1440;
uint64_t t196 = 76LLU;
int64_t x828 = INT64_MAX;
volatile int64_t x830 = -955127440LL;
int32_t x831 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -33;
	static int8_t x2 = INT8_MAX;
	static volatile int32_t x3 = -1;
	int32_t t0 = -707;

    t0 = (x1+((x2^x3)<=x4));

    if (t0 != -32) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	uint64_t x7 = 9LLU;
	static int8_t x8 = -1;
	static volatile int32_t t1 = -1;

    t1 = (x5+((x6^x7)<=x8));

    if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x10 = 0U;
	int8_t x11 = INT8_MIN;
	volatile uint64_t x12 = 82LLU;
	volatile uint32_t t2 = 5818128U;

    t2 = (x9+((x10^x11)<=x12));

    if (t2 != 359911169U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = 2;
	int64_t x20 = 39677635568LL;
	static int32_t t3 = -7788;

    t3 = (x17+((x18^x19)<=x20));

    if (t3 != 256) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x23 = 820U;
	uint8_t x24 = 53U;
	uint64_t t4 = 6580602385LLU;

    t4 = (x21+((x22^x23)<=x24));

    if (t4 != 371339096612LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 5442;
	static volatile int32_t x26 = INT32_MIN;
	uint32_t x27 = 29554186U;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -1;

    t5 = (x25+((x26^x27)<=x28));

    if (t5 != 5443) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x31 = -1;
	int64_t x32 = -2295858278553744749LL;
	static volatile int32_t t6 = INT32_MIN;

    t6 = (x29+((x30^x31)<=x32));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	int64_t x35 = 39288135787703523LL;
	int32_t x36 = INT32_MIN;

    t7 = (x33+((x34^x35)<=x36));

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x37 = 1U;
	static volatile uint16_t x38 = 7640U;
	int64_t x39 = -213847168435418366LL;
	volatile int32_t t8 = 15;

    t8 = (x37+((x38^x39)<=x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = -55;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	volatile uint16_t x44 = 3787U;
	volatile int32_t t9 = 54647457;

    t9 = (x41+((x42^x43)<=x44));

    if (t9 != -55) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x45 = 364U;
	int32_t x46 = 12721254;
	uint64_t x47 = 10337LLU;
	static int32_t t10 = -19007;

    t10 = (x45+((x46^x47)<=x48));

    if (t10 != 364) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	static int32_t x50 = -211172509;
	static volatile int8_t x51 = INT8_MIN;
	int32_t t11 = -8734131;

    t11 = (x49+((x50^x51)<=x52));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = -913;
	int8_t x55 = -1;
	int8_t x56 = 19;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = (x53+((x54^x55)<=x56));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	uint16_t x60 = 43U;
	int32_t t13 = -28529;

    t13 = (x57+((x58^x59)<=x60));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	volatile uint32_t x62 = 131U;
	int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	int32_t t14 = 16773492;

    t14 = (x61+((x62^x63)<=x64));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 9U;
	int16_t x66 = -117;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	static int32_t t15 = 1;

    t15 = (x65+((x66^x67)<=x68));

    if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x69 = 322230401793650949LLU;
	int16_t x71 = -14261;
	int64_t x72 = -1LL;

    t16 = (x69+((x70^x71)<=x72));

    if (t16 != 322230401793650950LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x74 = INT32_MIN;
	int8_t x75 = -23;
	static volatile int16_t x76 = -1;
	uint32_t t17 = 337U;

    t17 = (x73+((x74^x75)<=x76));

    if (t17 != 2126U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MAX;
	int16_t x78 = -213;
	volatile uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;

    t18 = (x77+((x78^x79)<=x80));

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = UINT32_MAX;
	int16_t x83 = -8;
	static volatile int8_t x84 = INT8_MAX;
	uint32_t t19 = 6U;

    t19 = (x81+((x82^x83)<=x84));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x85 = 152U;
	int64_t x86 = INT64_MAX;
	volatile int16_t x87 = 99;
	static volatile int16_t x88 = INT16_MAX;

    t20 = (x85+((x86^x87)<=x88));

    if (t20 != 152) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 5;
	static int16_t x90 = INT16_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t x92 = 113945;

    t21 = (x89+((x90^x91)<=x92));

    if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x94 = 6417753U;
	int32_t x95 = INT32_MIN;

    t22 = (x93+((x94^x95)<=x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = 12927;
	int8_t x98 = -1;
	volatile int32_t x99 = 22365;
	uint64_t x100 = UINT64_MAX;
	int32_t t23 = 244202211;

    t23 = (x97+((x98^x99)<=x100));

    if (t23 != 12928) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -2;
	static int16_t x103 = -52;
	int16_t x104 = INT16_MIN;
	int32_t t24 = 413160;

    t24 = (x101+((x102^x103)<=x104));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = INT64_MAX;
	uint64_t x107 = 156LLU;
	static int16_t x108 = -1;
	volatile int64_t t25 = -543954593557LL;

    t25 = (x105+((x106^x107)<=x108));

    if (t25 != -29192606LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 14U;
	volatile uint32_t x110 = 23U;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	int32_t t26 = 6;

    t26 = (x109+((x110^x111)<=x112));

    if (t26 != 14) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int64_t t27 = -14961LL;

    t27 = (x113+((x114^x115)<=x116));

    if (t27 != -134LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x117 = INT8_MIN;
	int8_t x118 = -1;
	int8_t x120 = -3;
	volatile int32_t t28 = -520490;

    t28 = (x117+((x118^x119)<=x120));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x122 = -1;
	volatile int32_t x123 = 184823;
	static int64_t x124 = INT64_MIN;

    t29 = (x121+((x122^x123)<=x124));

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MAX;
	int32_t x126 = 267794;
	static int64_t x128 = INT64_MIN;
	static int32_t t30 = 273613586;

    t30 = (x125+((x126^x127)<=x128));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -10035097;
	int8_t x130 = 1;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;

    t31 = (x129+((x130^x131)<=x132));

    if (t31 != -10035096) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = 27U;
	uint64_t x134 = 4378LLU;
	uint32_t x135 = UINT32_MAX;
	volatile uint16_t x136 = 13293U;
	uint32_t t32 = 10987626U;

    t32 = (x133+((x134^x135)<=x136));

    if (t32 != 27U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t33 = -7696472;

    t33 = (x137+((x138^x139)<=x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x143 = 3766210;
	static volatile int64_t x144 = INT64_MIN;
	static volatile int32_t t34 = -23;

    t34 = (x141+((x142^x143)<=x144));

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -12202;

    t35 = (x145+((x146^x147)<=x148));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 27LLU;
	int8_t x155 = -1;
	uint8_t x156 = 4U;
	uint64_t t36 = 25566601584119LLU;

    t36 = (x153+((x154^x155)<=x156));

    if (t36 != 28LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MAX;
	uint16_t x160 = 75U;
	int32_t t37 = -1056;

    t37 = (x157+((x158^x159)<=x160));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;

    t38 = (x161+((x162^x163)<=x164));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = -1;
	uint32_t x166 = 14U;
	uint16_t x167 = UINT16_MAX;
	static uint32_t x168 = 90U;
	volatile int32_t t39 = -96589;

    t39 = (x165+((x166^x167)<=x168));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x170 = 24U;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t40 = 42;

    t40 = (x169+((x170^x171)<=x172));

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = INT64_MIN;
	volatile int16_t x175 = -1;
	int16_t x176 = -52;
	int32_t t41 = -92435343;

    t41 = (x173+((x174^x175)<=x176));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x177 = INT8_MAX;
	static volatile int16_t x178 = 203;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = -1;
	volatile int32_t t42 = 236;

    t42 = (x177+((x178^x179)<=x180));

    if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = 1576U;
	int8_t x183 = INT8_MAX;
	volatile uint32_t x184 = 524167U;
	static volatile int32_t t43 = -92790;

    t43 = (x181+((x182^x183)<=x184));

    if (t43 != 1577) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	static int16_t x187 = INT16_MIN;
	static int16_t x188 = INT16_MIN;
	int32_t t44 = -14639463;

    t44 = (x185+((x186^x187)<=x188));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = UINT16_MAX;
	uint8_t x191 = 3U;
	int32_t t45 = -145;

    t45 = (x189+((x190^x191)<=x192));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x193 = INT16_MAX;
	uint8_t x196 = 1U;
	int32_t t46 = -29804;

    t46 = (x193+((x194^x195)<=x196));

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x201 = 2;
	int32_t x202 = 196596462;
	uint16_t x204 = 7370U;
	int32_t t47 = 1528;

    t47 = (x201+((x202^x203)<=x204));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 2U;
	static int16_t x206 = -14;
	int32_t x207 = 194686929;
	volatile int32_t t48 = -6438;

    t48 = (x205+((x206^x207)<=x208));

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = 0;
	int16_t x210 = -1;
	int16_t x211 = -7616;
	int16_t x212 = 1;

    t49 = (x209+((x210^x211)<=x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = 143U;
	uint32_t t50 = 0U;

    t50 = (x213+((x214^x215)<=x216));

    if (t50 != 1032U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x217 = INT16_MIN;
	static uint32_t x218 = UINT32_MAX;
	int64_t x220 = INT64_MAX;
	volatile int32_t t51 = -190339;

    t51 = (x217+((x218^x219)<=x220));

    if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x221 = -122056791401LL;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 564U;
	static int32_t x224 = -1;
	int64_t t52 = -125863LL;

    t52 = (x221+((x222^x223)<=x224));

    if (t52 != -122056791400LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = INT8_MIN;
	static volatile int32_t x227 = -4124480;
	static int32_t x228 = INT32_MIN;

    t53 = (x225+((x226^x227)<=x228));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x229 = 16113LL;
	int8_t x230 = INT8_MAX;
	int64_t t54 = 44LL;

    t54 = (x229+((x230^x231)<=x232));

    if (t54 != 16113LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x233 = 118U;
	uint8_t x234 = UINT8_MAX;
	static int8_t x235 = INT8_MAX;
	uint64_t x236 = 7021083LLU;
	static volatile uint32_t t55 = 826U;

    t55 = (x233+((x234^x235)<=x236));

    if (t55 != 119U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x237 = 116U;
	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	volatile uint64_t x240 = 209448240LLU;
	int32_t t56 = 3;

    t56 = (x237+((x238^x239)<=x240));

    if (t56 != 117) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x241 = 4080551LLU;
	volatile int16_t x242 = INT16_MIN;

    t57 = (x241+((x242^x243)<=x244));

    if (t57 != 4080552LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x245 = UINT8_MAX;
	uint64_t x247 = 7379006260LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t58 = 1054641;

    t58 = (x245+((x246^x247)<=x248));

    if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x250 = UINT64_MAX;
	static volatile int8_t x251 = INT8_MAX;
	uint16_t x252 = 56U;
	static int32_t t59 = -20429;

    t59 = (x249+((x250^x251)<=x252));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x254 = 29;
	int32_t x255 = -949;
	int8_t x256 = -1;
	uint32_t t60 = 4698U;

    t60 = (x253+((x254^x255)<=x256));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x257 = 3304781U;
	volatile int8_t x259 = INT8_MAX;
	static int64_t x260 = -178930779499689558LL;

    t61 = (x257+((x258^x259)<=x260));

    if (t61 != 3304781U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 425947LL;
	static int64_t x268 = -6904036774121LL;
	int64_t t62 = INT64_MIN;

    t62 = (x265+((x266^x267)<=x268));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = 7U;
	volatile uint32_t x270 = 8242537U;
	int32_t x271 = INT32_MIN;
	volatile uint32_t x272 = UINT32_MAX;
	volatile uint32_t t63 = 161U;

    t63 = (x269+((x270^x271)<=x272));

    if (t63 != 8U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x274 = 116U;
	int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -1;
	int32_t t64 = 205662;

    t64 = (x273+((x274^x275)<=x276));

    if (t64 != 20) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x277 = 22U;
	uint64_t x278 = 255348281007LLU;
	uint8_t x279 = 16U;
	static int32_t t65 = -100095743;

    t65 = (x277+((x278^x279)<=x280));

    if (t65 != 23) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	int32_t x282 = -2705;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -26761314845LL;
	int32_t t66 = -521392198;

    t66 = (x281+((x282^x283)<=x284));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x286 = INT32_MAX;
	int32_t x287 = -1;
	volatile uint64_t x288 = 40052546773LLU;
	int32_t t67 = 3560770;

    t67 = (x285+((x286^x287)<=x288));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -1LL;
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = 501;
	volatile int8_t x292 = INT8_MAX;

    t68 = (x289+((x290^x291)<=x292));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x293 = 281750U;
	int8_t x294 = -5;
	static int64_t x296 = 2892345793LL;
	volatile uint32_t t69 = 146515446U;

    t69 = (x293+((x294^x295)<=x296));

    if (t69 != 281750U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = 10692U;
	static volatile int8_t x298 = INT8_MAX;
	volatile int32_t x299 = INT32_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t70 = 2018;

    t70 = (x297+((x298^x299)<=x300));

    if (t70 != 10693) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = 10;
	volatile uint8_t x302 = 6U;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t71 = -1;

    t71 = (x301+((x302^x303)<=x304));

    if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x305 = 1466577758995906LLU;
	uint64_t x306 = 1714300206577LLU;
	volatile uint16_t x307 = 54U;
	volatile uint64_t t72 = 677LLU;

    t72 = (x305+((x306^x307)<=x308));

    if (t72 != 1466577758995906LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x309 = 7889U;
	static int32_t x311 = 252928;
	int64_t x312 = -17865LL;
	int32_t t73 = -274;

    t73 = (x309+((x310^x311)<=x312));

    if (t73 != 7889) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x314 = 17;
	volatile int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	static int32_t t74 = -2924119;

    t74 = (x313+((x314^x315)<=x316));

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	int64_t t75 = -2LL;

    t75 = (x317+((x318^x319)<=x320));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x325 = 64318600LLU;
	int64_t x326 = INT64_MIN;
	static uint64_t t76 = 1LLU;

    t76 = (x325+((x326^x327)<=x328));

    if (t76 != 64318601LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	volatile uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = 118U;

    t77 = (x329+((x330^x331)<=x332));

    if (t77 != 65536) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	static volatile uint64_t x335 = 7707227974807956366LLU;
	static uint64_t x336 = UINT64_MAX;
	int32_t t78 = 54738510;

    t78 = (x333+((x334^x335)<=x336));

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -1;
	uint32_t x340 = 2U;
	volatile int32_t t79 = 862;

    t79 = (x337+((x338^x339)<=x340));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -1955;
	static uint64_t x344 = 9LLU;
	volatile int32_t t80 = -5365;

    t80 = (x341+((x342^x343)<=x344));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x345 = UINT16_MAX;
	int64_t x348 = INT64_MIN;
	static volatile int32_t t81 = 33685;

    t81 = (x345+((x346^x347)<=x348));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x350 = -1;
	int32_t t82 = -31685121;

    t82 = (x349+((x350^x351)<=x352));

    if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x353 = 46350920LLU;
	int8_t x354 = 1;
	volatile int8_t x355 = INT8_MAX;
	int32_t x356 = 3221;

    t83 = (x353+((x354^x355)<=x356));

    if (t83 != 46350921LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x357 = -1;
	uint32_t x358 = 61695875U;
	volatile int8_t x359 = -1;
	volatile int32_t t84 = -8;

    t84 = (x357+((x358^x359)<=x360));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = -3413677244773066LL;
	uint8_t x362 = UINT8_MAX;
	volatile int64_t x363 = -169071443124409676LL;
	int64_t t85 = -80957785982470778LL;

    t85 = (x361+((x362^x363)<=x364));

    if (t85 != -3413677244773065LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x365 = INT32_MAX;
	uint64_t x366 = 3LLU;
	int32_t x367 = -14266056;
	int32_t t86 = INT32_MAX;

    t86 = (x365+((x366^x367)<=x368));

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t87 = -298597;

    t87 = (x369+((x370^x371)<=x372));

    if (t87 != 25) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x373 = INT32_MIN;
	int64_t x374 = -646420413787LL;
	static volatile int64_t x376 = -1LL;

    t88 = (x373+((x374^x375)<=x376));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x377 = 2359794U;
	int32_t x379 = -652369;
	int64_t x380 = INT64_MIN;
	volatile uint32_t t89 = 6U;

    t89 = (x377+((x378^x379)<=x380));

    if (t89 != 2359794U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x381 = 2U;
	static uint8_t x382 = 3U;
	uint16_t x383 = UINT16_MAX;
	static int8_t x384 = INT8_MIN;
	int32_t t90 = -198468990;

    t90 = (x381+((x382^x383)<=x384));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x385 = 953U;
	static int16_t x386 = -1085;
	static volatile int64_t x388 = -1LL;
	volatile int32_t t91 = -7;

    t91 = (x385+((x386^x387)<=x388));

    if (t91 != 953) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int16_t x392 = INT16_MIN;
	int32_t t92 = 5;

    t92 = (x389+((x390^x391)<=x392));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = 10;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile int16_t x396 = 122;
	volatile int32_t t93 = -143728;

    t93 = (x393+((x394^x395)<=x396));

    if (t93 != 10) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x397 = 56U;
	int64_t x398 = 884LL;
	uint8_t x399 = 51U;
	uint32_t t94 = 56623992U;

    t94 = (x397+((x398^x399)<=x400));

    if (t94 != 56U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x401 = UINT32_MAX;
	static int8_t x402 = INT8_MIN;
	static uint64_t x404 = 391019941948LLU;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = (x401+((x402^x403)<=x404));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MAX;
	volatile uint16_t x407 = 1U;
	volatile int32_t t96 = 3022338;

    t96 = (x405+((x406^x407)<=x408));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x409 = 122U;
	uint8_t x410 = UINT8_MAX;
	volatile int64_t x411 = -1LL;
	uint64_t x412 = 993293LLU;
	volatile uint32_t t97 = 36U;

    t97 = (x409+((x410^x411)<=x412));

    if (t97 != 122U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x413 = 5395U;
	uint16_t x414 = 489U;
	volatile uint16_t x415 = 18985U;
	int16_t x416 = INT16_MIN;
	volatile uint32_t t98 = 219078340U;

    t98 = (x413+((x414^x415)<=x416));

    if (t98 != 5395U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 0;
	static int8_t x418 = 2;
	int64_t x419 = -1LL;
	static int64_t x420 = -1LL;
	int32_t t99 = -366999382;

    t99 = (x417+((x418^x419)<=x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x421 = 1422U;
	uint64_t x422 = 955335425365LLU;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MIN;
	static uint32_t t100 = 1854U;

    t100 = (x421+((x422^x423)<=x424));

    if (t100 != 1423U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x426 = -1LL;
	uint16_t x427 = 4U;
	volatile int32_t x428 = INT32_MIN;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x425+((x426^x427)<=x428));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x431 = -1;
	int8_t x432 = -35;
	static int32_t t102 = 0;

    t102 = (x429+((x430^x431)<=x432));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x434 = INT32_MIN;
	static int64_t x435 = INT64_MIN;
	static int64_t x436 = -1LL;
	int32_t t103 = 41;

    t103 = (x433+((x434^x435)<=x436));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x438 = -35;
	static volatile int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MIN;
	int64_t t104 = 90574052LL;

    t104 = (x437+((x438^x439)<=x440));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x445 = 3099U;
	int8_t x446 = -1;
	volatile uint16_t x448 = UINT16_MAX;
	int32_t t105 = 32313;

    t105 = (x445+((x446^x447)<=x448));

    if (t105 != 3100) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x451 = 194028336907954LLU;
	uint16_t x452 = 971U;
	static volatile int64_t t106 = -492700242268LL;

    t106 = (x449+((x450^x451)<=x452));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x453 = UINT32_MAX;
	int8_t x454 = -47;
	uint32_t x455 = 104089U;
	uint16_t x456 = UINT16_MAX;

    t107 = (x453+((x454^x455)<=x456));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x457 = 74U;
	int8_t x458 = INT8_MAX;
	int64_t x459 = 1LL;
	static int16_t x460 = INT16_MAX;
	int32_t t108 = -21;

    t108 = (x457+((x458^x459)<=x460));

    if (t108 != 75) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x461 = 1;
	uint8_t x463 = 10U;
	volatile int32_t t109 = -6;

    t109 = (x461+((x462^x463)<=x464));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x465 = UINT16_MAX;
	static int16_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	static uint64_t x468 = 21108415LLU;
	static int32_t t110 = -65662343;

    t110 = (x465+((x466^x467)<=x468));

    if (t110 != 65536) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x469 = UINT64_MAX;
	int8_t x471 = -7;
	volatile uint64_t x472 = 3964090554LLU;
	static uint64_t t111 = UINT64_MAX;

    t111 = (x469+((x470^x471)<=x472));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x473 = -159962454;
	volatile int8_t x474 = INT8_MIN;
	uint64_t x475 = 0LLU;
	static int32_t x476 = -1;

    t112 = (x473+((x474^x475)<=x476));

    if (t112 != -159962453) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x477 = 52U;
	static volatile uint8_t x478 = UINT8_MAX;
	uint8_t x479 = 22U;
	int8_t x480 = INT8_MIN;

    t113 = (x477+((x478^x479)<=x480));

    if (t113 != 52) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x485 = 0;
	volatile uint16_t x486 = UINT16_MAX;
	int32_t x487 = -1;
	uint64_t x488 = 133LLU;

    t114 = (x485+((x486^x487)<=x488));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x490 = -1;
	static int64_t x491 = INT64_MAX;
	int32_t x492 = -47;

    t115 = (x489+((x490^x491)<=x492));

    if (t115 != -28) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = -1;
	uint16_t x494 = 31243U;
	uint8_t x495 = 115U;
	uint64_t x496 = 75015806278LLU;

    t116 = (x493+((x494^x495)<=x496));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x497 = 2;
	uint8_t x498 = 2U;
	uint16_t x499 = 564U;
	volatile int8_t x500 = INT8_MIN;
	volatile int32_t t117 = 30;

    t117 = (x497+((x498^x499)<=x500));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x501 = 57U;
	uint8_t x502 = UINT8_MAX;
	uint32_t x504 = UINT32_MAX;
	int32_t t118 = 919346438;

    t118 = (x501+((x502^x503)<=x504));

    if (t118 != 57) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x505 = 0U;
	int8_t x506 = 18;
	volatile uint8_t x508 = 0U;

    t119 = (x505+((x506^x507)<=x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = -99;
	int16_t x510 = INT16_MAX;
	int16_t x511 = -1918;
	static int8_t x512 = 1;

    t120 = (x509+((x510^x511)<=x512));

    if (t120 != -98) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x514 = UINT32_MAX;
	int16_t x515 = INT16_MAX;
	static int16_t x516 = 0;
	int32_t t121 = 65370686;

    t121 = (x513+((x514^x515)<=x516));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x517 = INT8_MIN;
	volatile int64_t x518 = INT64_MIN;
	int32_t x520 = INT32_MIN;
	static volatile int32_t t122 = 27;

    t122 = (x517+((x518^x519)<=x520));

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x521 = 661103212U;
	uint32_t x522 = 8107175U;
	static volatile int64_t x523 = -1LL;
	int64_t x524 = -1LL;
	uint32_t t123 = 13512096U;

    t123 = (x521+((x522^x523)<=x524));

    if (t123 != 661103213U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = -1;
	static uint8_t x528 = 62U;
	volatile int32_t t124 = 77;

    t124 = (x525+((x526^x527)<=x528));

    if (t124 != 256) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x530 = INT8_MAX;
	volatile int16_t x532 = -42;
	volatile int32_t t125 = -1788;

    t125 = (x529+((x530^x531)<=x532));

    if (t125 != 23) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -1;
	int64_t x534 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	int32_t t126 = -1592821;

    t126 = (x533+((x534^x535)<=x536));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x537 = 42LL;
	int8_t x538 = INT8_MAX;
	int32_t x539 = INT32_MIN;
	int16_t x540 = INT16_MIN;
	volatile int64_t t127 = 7852LL;

    t127 = (x537+((x538^x539)<=x540));

    if (t127 != 43LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x544 = 19;
	int32_t t128 = 24188;

    t128 = (x541+((x542^x543)<=x544));

    if (t128 != -18) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x546 = -4285143341829LL;
	volatile int8_t x547 = -8;
	static int8_t x548 = 0;
	static volatile int32_t t129 = 113502;

    t129 = (x545+((x546^x547)<=x548));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x549 = 55U;
	uint16_t x551 = 267U;
	int32_t t130 = -3935;

    t130 = (x549+((x550^x551)<=x552));

    if (t130 != 56) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = 1;
	uint64_t x555 = UINT64_MAX;
	static int64_t x556 = INT64_MIN;
	static int32_t t131 = 5;

    t131 = (x553+((x554^x555)<=x556));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x557 = INT8_MAX;
	int16_t x558 = INT16_MAX;
	int32_t x560 = -10236264;
	static volatile int32_t t132 = 16589568;

    t132 = (x557+((x558^x559)<=x560));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x561 = 237974212;
	volatile int16_t x562 = -37;
	int64_t x564 = INT64_MAX;
	int32_t t133 = 1443984;

    t133 = (x561+((x562^x563)<=x564));

    if (t133 != 237974213) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = INT32_MIN;
	int64_t x566 = -1494698622661LL;
	volatile uint32_t x567 = 77U;
	volatile int32_t t134 = -11533;

    t134 = (x565+((x566^x567)<=x568));

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = -1;
	uint64_t x570 = 9127424899LLU;
	int32_t x572 = INT32_MAX;
	int32_t t135 = 5918333;

    t135 = (x569+((x570^x571)<=x572));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x573 = 6;
	static volatile int32_t x574 = -23;
	int16_t x576 = INT16_MIN;

    t136 = (x573+((x574^x575)<=x576));

    if (t136 != 6) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x577 = -737;
	uint32_t x578 = UINT32_MAX;
	int16_t x580 = INT16_MIN;
	int32_t t137 = 99;

    t137 = (x577+((x578^x579)<=x580));

    if (t137 != -736) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x581 = 9U;
	volatile int64_t x582 = INT64_MAX;
	int32_t x583 = -2684926;
	uint16_t x584 = UINT16_MAX;

    t138 = (x581+((x582^x583)<=x584));

    if (t138 != 10) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MIN;
	int32_t x587 = INT32_MAX;

    t139 = (x585+((x586^x587)<=x588));

    if (t139 != 32768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MIN;
	int16_t x591 = 112;
	volatile uint64_t t140 = 6LLU;

    t140 = (x589+((x590^x591)<=x592));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x593 = UINT32_MAX;
	static uint32_t x594 = 179733U;
	volatile uint32_t x595 = 84811236U;
	int8_t x596 = 37;
	uint32_t t141 = UINT32_MAX;

    t141 = (x593+((x594^x595)<=x596));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x600 = 128U;

    t142 = (x597+((x598^x599)<=x600));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x603 = -12910700;
	static int8_t x604 = INT8_MAX;
	int32_t t143 = 300619301;

    t143 = (x601+((x602^x603)<=x604));

    if (t143 != 15) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 119074U;
	int32_t x606 = 13;
	int8_t x607 = -1;
	int16_t x608 = -1;
	uint32_t t144 = 3992927U;

    t144 = (x605+((x606^x607)<=x608));

    if (t144 != 119075U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x609 = 4U;
	int8_t x610 = 6;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MAX;
	static volatile int32_t t145 = 0;

    t145 = (x609+((x610^x611)<=x612));

    if (t145 != 5) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x614 = 3U;
	volatile int64_t x615 = INT64_MIN;
	volatile int32_t x616 = -1;
	volatile int64_t t146 = -38166077066LL;

    t146 = (x613+((x614^x615)<=x616));

    if (t146 != -2054842417LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x617 = UINT64_MAX;
	static uint16_t x618 = UINT16_MAX;
	static uint64_t x619 = UINT64_MAX;
	int64_t x620 = INT64_MIN;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = (x617+((x618^x619)<=x620));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x621 = UINT8_MAX;
	uint8_t x622 = 97U;
	int8_t x623 = -1;
	volatile int64_t x624 = INT64_MAX;
	volatile int32_t t148 = 8;

    t148 = (x621+((x622^x623)<=x624));

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x629 = INT16_MIN;
	uint32_t x630 = UINT32_MAX;
	static uint16_t x631 = UINT16_MAX;
	static uint8_t x632 = UINT8_MAX;
	int32_t t149 = -3502923;

    t149 = (x629+((x630^x631)<=x632));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x633 = 200;
	uint32_t x634 = 9745436U;
	volatile int32_t x635 = -1;
	uint16_t x636 = 12U;
	volatile int32_t t150 = 0;

    t150 = (x633+((x634^x635)<=x636));

    if (t150 != 200) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x637 = UINT64_MAX;
	static volatile int16_t x638 = INT16_MAX;
	static volatile uint8_t x639 = 3U;
	volatile uint64_t t151 = 2812471474LLU;

    t151 = (x637+((x638^x639)<=x640));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x641 = UINT32_MAX;
	static volatile uint64_t x644 = UINT64_MAX;
	volatile uint32_t t152 = 5327U;

    t152 = (x641+((x642^x643)<=x644));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x646 = 131104LLU;
	static uint8_t x647 = 9U;
	int32_t x648 = -1;
	volatile int32_t t153 = -22;

    t153 = (x645+((x646^x647)<=x648));

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x649 = UINT16_MAX;
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = -1;
	static int8_t x652 = 0;

    t154 = (x649+((x650^x651)<=x652));

    if (t154 != 65536) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = -1;
	int32_t x654 = 124819299;
	static volatile uint8_t x655 = 23U;
	volatile uint8_t x656 = 123U;
	volatile int32_t t155 = 0;

    t155 = (x653+((x654^x655)<=x656));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = -1019;
	static int32_t x658 = 36;
	uint32_t x659 = UINT32_MAX;
	static uint8_t x660 = 13U;
	int32_t t156 = -494;

    t156 = (x657+((x658^x659)<=x660));

    if (t156 != -1019) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x662 = -1;
	static uint32_t x663 = 1U;
	volatile int32_t t157 = 7640448;

    t157 = (x661+((x662^x663)<=x664));

    if (t157 != 7) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x666 = 28044U;
	volatile uint64_t x667 = UINT64_MAX;
	volatile uint16_t x668 = UINT16_MAX;
	int32_t t158 = -362866543;

    t158 = (x665+((x666^x667)<=x668));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x669 = -1;
	uint8_t x671 = 1U;
	uint32_t x672 = 31465U;

    t159 = (x669+((x670^x671)<=x672));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x674 = UINT32_MAX;
	int16_t x676 = -5;

    t160 = (x673+((x674^x675)<=x676));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x677 = -7770678LL;
	uint32_t x678 = 396903595U;
	int64_t x679 = -448990291437936LL;
	int64_t t161 = 1498283274366735LL;

    t161 = (x677+((x678^x679)<=x680));

    if (t161 != -7770677LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = 476827458381520LL;
	int64_t x682 = INT64_MIN;
	int32_t x683 = 902086441;
	uint8_t x684 = 1U;
	int64_t t162 = -153406685954LL;

    t162 = (x681+((x682^x683)<=x684));

    if (t162 != 476827458381521LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x689 = -48;
	uint16_t x690 = 8503U;
	int16_t x691 = INT16_MIN;
	static int8_t x692 = INT8_MIN;
	volatile int32_t t163 = -102581344;

    t163 = (x689+((x690^x691)<=x692));

    if (t163 != -47) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x694 = -1;
	int8_t x695 = -1;
	uint32_t x696 = UINT32_MAX;

    t164 = (x693+((x694^x695)<=x696));

    if (t164 != -30095575371154LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x697 = INT32_MIN;
	int16_t x699 = -1392;
	uint64_t x700 = UINT64_MAX;

    t165 = (x697+((x698^x699)<=x700));

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MIN;
	int64_t x703 = INT64_MAX;
	volatile uint8_t x704 = 68U;
	static volatile int32_t t166 = 1263;

    t166 = (x701+((x702^x703)<=x704));

    if (t166 != 128) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x705 = 55U;
	static int64_t x706 = INT64_MIN;
	static int8_t x707 = -35;
	uint64_t x708 = 26891225699711411LLU;

    t167 = (x705+((x706^x707)<=x708));

    if (t167 != 55) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x709 = 50610781451LLU;
	static int8_t x711 = INT8_MAX;
	volatile uint64_t t168 = 1080LLU;

    t168 = (x709+((x710^x711)<=x712));

    if (t168 != 50610781452LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x713 = 1;
	int32_t x714 = INT32_MIN;
	volatile int8_t x715 = 0;
	int32_t x716 = INT32_MIN;

    t169 = (x713+((x714^x715)<=x716));

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x717 = -503869636;
	int64_t x719 = 10167783870LL;
	static volatile int32_t t170 = -121015;

    t170 = (x717+((x718^x719)<=x720));

    if (t170 != -503869635) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x721 = INT64_MIN;
	int8_t x722 = -3;
	int32_t x723 = -1;

    t171 = (x721+((x722^x723)<=x724));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x725 = INT16_MIN;
	uint32_t x727 = 2U;
	int16_t x728 = INT16_MAX;
	int32_t t172 = -3;

    t172 = (x725+((x726^x727)<=x728));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x729 = -1;
	uint32_t x731 = 1454U;
	int64_t x732 = INT64_MAX;
	volatile int32_t t173 = -49;

    t173 = (x729+((x730^x731)<=x732));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x734 = 3760U;
	uint64_t x735 = 3297427098497602637LLU;
	int32_t t174 = -774400;

    t174 = (x733+((x734^x735)<=x736));

    if (t174 != 5409) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x737 = INT32_MAX;
	volatile uint32_t x738 = 95073U;
	static volatile uint8_t x740 = 15U;

    t175 = (x737+((x738^x739)<=x740));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x741 = 3442165323558LL;
	int64_t x743 = -9902178LL;
	volatile uint16_t x744 = 244U;

    t176 = (x741+((x742^x743)<=x744));

    if (t176 != 3442165323559LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x745 = 653033923U;
	uint16_t x747 = 80U;
	volatile int8_t x748 = 12;
	static volatile uint32_t t177 = 8072088U;

    t177 = (x745+((x746^x747)<=x748));

    if (t177 != 653033924U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x750 = UINT32_MAX;
	uint16_t x751 = UINT16_MAX;
	int32_t x752 = INT32_MIN;
	volatile int32_t t178 = 28;

    t178 = (x749+((x750^x751)<=x752));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x754 = 29079903;
	int64_t x755 = INT64_MIN;
	static uint16_t x756 = 244U;
	static int32_t t179 = 254;

    t179 = (x753+((x754^x755)<=x756));

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x758 = 15U;
	static int16_t x759 = -1;
	int32_t x760 = 680;
	int32_t t180 = -32526;

    t180 = (x757+((x758^x759)<=x760));

    if (t180 != -26) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x761 = 0LLU;
	int32_t x762 = INT32_MAX;
	int32_t x764 = -1;
	uint64_t t181 = 33320484126LLU;

    t181 = (x761+((x762^x763)<=x764));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x765 = 719U;
	uint8_t x766 = UINT8_MAX;
	uint64_t x767 = 3LLU;
	volatile int32_t t182 = -167100712;

    t182 = (x765+((x766^x767)<=x768));

    if (t182 != 719) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x770 = INT8_MIN;
	volatile uint64_t x771 = UINT64_MAX;
	static int32_t t183 = 547228;

    t183 = (x769+((x770^x771)<=x772));

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x773 = INT8_MAX;
	uint16_t x774 = 2U;
	uint8_t x775 = 2U;
	uint32_t x776 = 3110U;

    t184 = (x773+((x774^x775)<=x776));

    if (t184 != 128) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x777 = INT8_MIN;
	static int8_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	int32_t t185 = 33800;

    t185 = (x777+((x778^x779)<=x780));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = -1;
	volatile int32_t x783 = INT32_MIN;
	uint8_t x784 = 6U;

    t186 = (x781+((x782^x783)<=x784));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x785 = 25U;
	int16_t x787 = INT16_MAX;
	int16_t x788 = -1;
	int32_t t187 = 1682283;

    t187 = (x785+((x786^x787)<=x788));

    if (t187 != 25) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	static int16_t x790 = -1;
	int64_t x792 = INT64_MAX;

    t188 = (x789+((x790^x791)<=x792));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x794 = UINT32_MAX;
	int64_t x795 = INT64_MIN;
	int16_t x796 = INT16_MIN;
	static volatile uint32_t t189 = 21153U;

    t189 = (x793+((x794^x795)<=x796));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x799 = 9184U;
	int32_t x800 = INT32_MIN;
	int64_t t190 = -664LL;

    t190 = (x797+((x798^x799)<=x800));

    if (t190 != 27LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x803 = 3309;
	int64_t x804 = -1LL;
	volatile int32_t t191 = 60;

    t191 = (x801+((x802^x803)<=x804));

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MIN;
	int32_t x807 = -81956;
	uint8_t x808 = 5U;
	volatile int32_t t192 = 9;

    t192 = (x805+((x806^x807)<=x808));

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x809 = INT32_MIN;
	int32_t x811 = INT32_MAX;
	int8_t x812 = -42;
	static int32_t t193 = 335;

    t193 = (x809+((x810^x811)<=x812));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x813 = INT16_MIN;
	static volatile int64_t x815 = INT64_MIN;
	uint64_t x816 = 0LLU;
	int32_t t194 = -272;

    t194 = (x813+((x814^x815)<=x816));

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x819 = INT8_MAX;
	static int32_t t195 = 28301;

    t195 = (x817+((x818^x819)<=x820));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x821 = 1711295956852LLU;
	int64_t x822 = -47003581864LL;
	int8_t x823 = 43;
	uint16_t x824 = 78U;

    t196 = (x821+((x822^x823)<=x824));

    if (t196 != 1711295956853LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x825 = INT8_MAX;
	int16_t x826 = INT16_MIN;
	uint8_t x827 = UINT8_MAX;
	static int32_t t197 = -367051948;

    t197 = (x825+((x826^x827)<=x828));

    if (t197 != 128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x829 = 0;
	static int64_t x832 = INT64_MIN;
	int32_t t198 = 2997;

    t198 = (x829+((x830^x831)<=x832));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x833 = 1531865U;
	volatile int64_t x834 = INT64_MIN;
	int64_t x835 = INT64_MIN;
	uint16_t x836 = UINT16_MAX;
	volatile uint32_t t199 = 2058U;

    t199 = (x833+((x834^x835)<=x836));

    if (t199 != 1531866U) { NG(); } else { ; }
	
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

