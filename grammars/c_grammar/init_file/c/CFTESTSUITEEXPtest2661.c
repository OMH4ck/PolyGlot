
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

int8_t x1 = 1;
uint32_t x4 = 299U;
volatile int16_t x22 = INT16_MIN;
uint16_t x26 = UINT16_MAX;
static int32_t x28 = INT32_MIN;
static volatile int32_t t6 = 89;
int32_t x41 = -1;
volatile int32_t t10 = 236922617;
int16_t x46 = 1;
static int32_t t12 = 4397082;
int32_t t13 = 108294217;
static uint16_t x58 = 897U;
int8_t x60 = INT8_MIN;
int64_t x65 = 1LL;
volatile uint32_t x67 = UINT32_MAX;
int16_t x69 = 94;
uint8_t x78 = 1U;
volatile uint32_t x80 = 58U;
uint16_t x84 = 12U;
int16_t x90 = INT16_MIN;
uint8_t x93 = 1U;
volatile uint32_t x95 = 134U;
static int32_t t23 = 707718923;
uint32_t x101 = UINT32_MAX;
int8_t x106 = INT8_MIN;
volatile int32_t t27 = 0;
int32_t x113 = INT32_MIN;
static volatile int32_t t28 = INT32_MIN;
static uint16_t x120 = UINT16_MAX;
static int32_t t30 = 113638505;
int32_t x125 = INT32_MIN;
int64_t x141 = 18489208LL;
int16_t x142 = INT16_MIN;
int16_t x145 = INT16_MAX;
static volatile int8_t x147 = -1;
static int32_t t36 = -22892;
static volatile uint32_t t37 = 2007860U;
uint8_t x153 = UINT8_MAX;
int32_t x158 = 1;
static int8_t x160 = 7;
int32_t t39 = 2683172;
uint8_t x161 = UINT8_MAX;
static int16_t x167 = INT16_MIN;
int64_t x181 = -1LL;
int8_t x184 = 1;
int16_t x192 = -1;
int16_t x197 = INT16_MIN;
int64_t x201 = INT64_MIN;
uint64_t x205 = 57138138LLU;
int64_t x208 = INT64_MAX;
uint64_t t51 = 18548754896LLU;
int64_t x220 = -1LL;
int8_t x228 = INT8_MIN;
int64_t x233 = -1LL;
uint64_t x235 = 0LLU;
int8_t x239 = -50;
volatile int8_t x241 = -30;
static uint16_t x244 = UINT16_MAX;
int32_t t60 = -87728;
volatile int8_t x247 = INT8_MAX;
int64_t x248 = INT64_MAX;
uint64_t x257 = UINT64_MAX;
int32_t x258 = -1091;
uint32_t x259 = UINT32_MAX;
uint64_t x261 = 36666LLU;
volatile uint64_t t65 = 25574776LLU;
static volatile int32_t t66 = -22;
volatile int64_t t67 = INT64_MAX;
volatile int32_t t68 = -42;
int16_t x278 = -27;
int8_t x282 = INT8_MAX;
uint64_t x288 = UINT64_MAX;
static volatile int64_t x296 = INT64_MIN;
int32_t t75 = INT32_MIN;
int32_t x306 = INT32_MIN;
uint32_t x323 = UINT32_MAX;
int32_t t79 = -1095;
int16_t x329 = 0;
int64_t x331 = 245807LL;
int32_t t81 = -2646;
int8_t x340 = 26;
static volatile int16_t x341 = 14600;
int16_t x344 = 4;
int32_t t84 = -581;
volatile int32_t t85 = -28606996;
static uint64_t x349 = 5196501767633792203LLU;
int32_t x354 = -1;
int64_t x355 = 281998LL;
static int16_t x362 = 655;
int32_t t89 = -105238931;
uint64_t x377 = 20872582138LLU;
int8_t x381 = INT8_MAX;
uint32_t x383 = 0U;
int8_t x392 = -1;
int32_t x395 = 62057227;
static int16_t x400 = -252;
static int8_t x406 = INT8_MIN;
int64_t x408 = -1LL;
volatile int64_t t100 = 30845548699394LL;
volatile int32_t x415 = INT32_MIN;
int8_t x425 = INT8_MIN;
volatile int32_t t104 = -900727264;
static volatile int32_t x459 = -1;
int16_t x462 = -2;
int8_t x472 = INT8_MAX;
static int64_t x474 = INT64_MIN;
volatile int8_t x485 = INT8_MAX;
int16_t x488 = INT16_MIN;
uint16_t x492 = UINT16_MAX;
volatile int32_t t120 = 123;
static int32_t x498 = 40398;
uint16_t x500 = 104U;
volatile int32_t t121 = 620;
int64_t x502 = INT64_MAX;
uint16_t x509 = 17U;
int8_t x515 = 33;
int64_t x519 = INT64_MIN;
int64_t x520 = 565834464LL;
int32_t t125 = 34019;
int32_t x522 = 196678886;
volatile uint32_t t126 = UINT32_MAX;
static uint8_t x526 = UINT8_MAX;
uint64_t x529 = 316LLU;
int8_t x531 = 43;
int64_t t131 = 12727LL;
uint32_t x552 = 184000400U;
int64_t x556 = 83837989845LL;
static uint32_t t134 = 282U;
int32_t t135 = -579857;
int16_t x562 = -1;
int8_t x565 = INT8_MIN;
uint8_t x566 = 4U;
int32_t x584 = INT32_MAX;
int32_t x587 = -1;
int32_t x588 = INT32_MAX;
volatile uint8_t x590 = 10U;
static uint8_t x592 = 49U;
int16_t x601 = -1;
int32_t t147 = 185686194;
static volatile int8_t x616 = INT8_MAX;
static int16_t x625 = INT16_MIN;
int32_t x626 = INT32_MIN;
uint8_t x629 = 2U;
int16_t x634 = 216;
static int16_t x636 = -6;
static int32_t x641 = -1;
volatile int8_t x643 = -1;
static uint64_t x644 = 969352449083395667LLU;
uint32_t x651 = 4142U;
static int16_t x653 = INT16_MIN;
int16_t x658 = INT16_MAX;
static int8_t x664 = INT8_MAX;
static volatile uint16_t x665 = 1U;
uint8_t x668 = 55U;
uint64_t x672 = 227LLU;
uint16_t x673 = UINT16_MAX;
uint32_t x678 = UINT32_MAX;
volatile int32_t t164 = 0;
int32_t x687 = -1;
static int8_t x688 = -1;
int32_t x693 = -1;
static uint32_t x694 = UINT32_MAX;
static volatile uint64_t t175 = 63459LLU;
volatile int32_t t176 = INT32_MIN;
static uint64_t x731 = 595243423LLU;
int16_t x734 = INT16_MIN;
int16_t x740 = INT16_MIN;
uint8_t x745 = 6U;
int8_t x747 = INT8_MIN;
volatile uint32_t x753 = 1259U;
uint8_t x755 = 22U;
uint16_t x759 = 105U;
static uint8_t x764 = 2U;
volatile uint16_t x768 = UINT16_MAX;
uint32_t x770 = UINT32_MAX;
int8_t x771 = INT8_MIN;
int64_t x776 = INT64_MIN;
static int8_t x787 = -1;
volatile uint16_t x788 = 274U;
volatile int32_t t192 = 344349;
int16_t x798 = INT16_MIN;
static int8_t x800 = 1;
volatile int64_t t197 = INT64_MIN;
int8_t x820 = -15;


void f0(void) {
    	int8_t x2 = 4;
	int64_t x3 = INT64_MAX;
	static int32_t t0 = -79899;

    t0 = (x1+((x2^x3)>x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 14U;
	uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 58U;
	int32_t x8 = 175200806;
	volatile int32_t t1 = 57693;

    t1 = (x5+((x6^x7)>x8));

    if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	volatile int32_t x10 = INT32_MIN;
	uint32_t x11 = UINT32_MAX;
	static volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 2;

    t2 = (x9+((x10^x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	static volatile int8_t x15 = INT8_MIN;
	volatile uint8_t x16 = 0U;
	uint32_t t3 = UINT32_MAX;

    t3 = (x13+((x14^x15)>x16));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	int32_t x20 = -9;
	int32_t t4 = -220868;

    t4 = (x17+((x18^x19)>x20));

    if (t4 != 256) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -21859937LL;
	static int64_t x23 = -3057331418809720LL;
	int16_t x24 = INT16_MAX;
	volatile int64_t t5 = 223501747886334363LL;

    t5 = (x21+((x22^x23)>x24));

    if (t5 != -21859936LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint32_t x27 = 1499276U;

    t6 = (x25+((x26^x27)>x28));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 887043048U;
	int64_t x30 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	static uint8_t x32 = 3U;
	uint32_t t7 = 23736U;

    t7 = (x29+((x30^x31)>x32));

    if (t7 != 887043049U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 26739082405833LL;
	uint32_t x34 = 98760U;
	int16_t x35 = 0;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -51014LL;

    t8 = (x33+((x34^x35)>x36));

    if (t8 != 26739082405834LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 1;
	int16_t x38 = 0;
	volatile uint64_t x39 = UINT64_MAX;
	int16_t x40 = -1;
	static volatile int32_t t9 = -23674;

    t9 = (x37+((x38^x39)>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	int16_t x44 = -747;

    t10 = (x41+((x42^x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MIN;
	int64_t t11 = 1119771337137LL;

    t11 = (x45+((x46^x47)>x48));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	int8_t x50 = -1;
	uint64_t x51 = 542LLU;
	volatile int32_t x52 = INT32_MAX;

    t12 = (x49+((x50^x51)>x52));

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MIN;
	int8_t x55 = -57;
	int8_t x56 = INT8_MAX;

    t13 = (x53+((x54^x55)>x56));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MAX;
	uint32_t x59 = UINT32_MAX;
	int64_t t14 = INT64_MAX;

    t14 = (x57+((x58^x59)>x60));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 63U;
	int64_t x63 = 280368531885151LL;
	static uint16_t x64 = 2407U;
	static uint32_t t15 = 204710U;

    t15 = (x61+((x62^x63)>x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	static int8_t x68 = -1;
	int64_t t16 = -343635437432171284LL;

    t16 = (x65+((x66^x67)>x68));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = 2U;
	uint64_t x71 = 26024568LLU;
	int16_t x72 = -1;
	int32_t t17 = -2;

    t17 = (x69+((x70^x71)>x72));

    if (t17 != 94) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 1U;
	static int16_t x74 = INT16_MIN;
	volatile int16_t x75 = -496;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = 5022;

    t18 = (x73+((x74^x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x77 = 1U;
	int16_t x79 = -632;
	volatile int32_t t19 = 260676368;

    t19 = (x77+((x78^x79)>x80));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = 5876;
	uint16_t x83 = 25528U;
	static int32_t t20 = 22165877;

    t20 = (x81+((x82^x83)>x84));

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 1;
	int16_t x86 = 127;
	volatile int8_t x87 = INT8_MAX;
	uint16_t x88 = 0U;
	volatile int32_t t21 = 3;

    t21 = (x85+((x86^x87)>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	uint16_t x91 = UINT16_MAX;
	static uint8_t x92 = 0U;
	int32_t t22 = 0;

    t22 = (x89+((x90^x91)>x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = UINT8_MAX;
	uint8_t x96 = UINT8_MAX;

    t23 = (x93+((x94^x95)>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	uint32_t x98 = 3U;
	int32_t x99 = 25877;
	static uint8_t x100 = 46U;
	static volatile int32_t t24 = 6;

    t24 = (x97+((x98^x99)>x100));

    if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -1LL;
	int32_t x103 = -32697382;
	volatile uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x101+((x102^x103)>x104));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int8_t x107 = -1;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 23;

    t26 = (x105+((x106^x107)>x108));

    if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	uint32_t x110 = 218U;
	int16_t x111 = 1976;
	int16_t x112 = INT16_MIN;

    t27 = (x109+((x110^x111)>x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = INT8_MAX;
	int8_t x115 = -1;
	int8_t x116 = 0;

    t28 = (x113+((x114^x115)>x116));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 6U;
	volatile int32_t t29 = 515447935;

    t29 = (x117+((x118^x119)>x120));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 63U;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MAX;
	static volatile int8_t x124 = 1;

    t30 = (x121+((x122^x123)>x124));

    if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MAX;
	int32_t x127 = INT32_MIN;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = INT32_MIN;

    t31 = (x125+((x126^x127)>x128));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -79106;
	volatile int64_t t32 = -905490643009208871LL;

    t32 = (x129+((x130^x131)>x132));

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	volatile int16_t x134 = -1;
	int32_t x135 = 782794580;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -65;

    t33 = (x133+((x134^x135)>x136));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 2U;
	volatile uint16_t x138 = 58U;
	int16_t x139 = -1;
	int8_t x140 = -1;
	int32_t t34 = -12568845;

    t34 = (x137+((x138^x139)>x140));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x143 = 200U;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 536683871558LL;

    t35 = (x141+((x142^x143)>x144));

    if (t35 != 18489209LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = INT64_MIN;
	static volatile int16_t x148 = INT16_MIN;

    t36 = (x145+((x146^x147)>x148));

    if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 127U;
	static uint32_t x150 = 26958268U;
	int64_t x151 = 11827903858LL;
	volatile int8_t x152 = 0;

    t37 = (x149+((x150^x151)>x152));

    if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MAX;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -24963624;

    t38 = (x153+((x154^x155)>x156));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = INT16_MIN;
	static int16_t x159 = -1;

    t39 = (x157+((x158^x159)>x160));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = -1LL;
	int64_t x163 = 1979008249LL;
	int32_t x164 = 5;
	int32_t t40 = 137;

    t40 = (x161+((x162^x163)>x164));

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 203952LL;
	int8_t x166 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	static int64_t t41 = 362LL;

    t41 = (x165+((x166^x167)>x168));

    if (t41 != 203952LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	int64_t x171 = 130489LL;
	int64_t x172 = INT64_MIN;
	static int32_t t42 = -35607245;

    t42 = (x169+((x170^x171)>x172));

    if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 0U;
	uint32_t x176 = 2U;
	volatile uint64_t t43 = 29555856441883965LLU;

    t43 = (x173+((x174^x175)>x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MAX;
	uint8_t x178 = 1U;
	volatile uint64_t x179 = 130408393373736LLU;
	int32_t x180 = -139892;
	volatile int32_t t44 = INT32_MAX;

    t44 = (x177+((x178^x179)>x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x182 = -12348113705LL;
	int8_t x183 = -1;
	volatile int64_t t45 = -68402664818295LL;

    t45 = (x181+((x182^x183)>x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x185 = -30126777;
	int64_t x186 = -3627189435LL;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -47;
	int32_t t46 = 2718113;

    t46 = (x185+((x186^x187)>x188));

    if (t46 != -30126777) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 178U;
	int64_t x190 = INT64_MIN;
	static int8_t x191 = -59;
	int32_t t47 = -3;

    t47 = (x189+((x190^x191)>x192));

    if (t47 != 179) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x193 = 30218U;
	uint32_t x194 = 1316U;
	uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 65375248856573LLU;
	volatile uint32_t t48 = 672265U;

    t48 = (x193+((x194^x195)>x196));

    if (t48 != 30218U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = -781;
	int8_t x199 = -1;
	volatile int8_t x200 = 6;
	static int32_t t49 = 136327969;

    t49 = (x197+((x198^x199)>x200));

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 1U;
	uint64_t x203 = 16491871198138LLU;
	uint32_t x204 = 14252874U;
	int64_t t50 = -33331428483LL;

    t50 = (x201+((x202^x203)>x204));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = INT8_MIN;
	uint64_t x207 = 801739LLU;

    t51 = (x205+((x206^x207)>x208));

    if (t51 != 57138139LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	uint16_t x210 = 49U;
	uint8_t x211 = 28U;
	int16_t x212 = INT16_MAX;
	int32_t t52 = -18575;

    t52 = (x209+((x210^x211)>x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 4770205487LLU;
	static int32_t x214 = -430176;
	volatile int64_t x215 = INT64_MIN;
	int16_t x216 = -581;
	uint64_t t53 = 5281507141LLU;

    t53 = (x213+((x214^x215)>x216));

    if (t53 != 4770205488LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	static volatile int32_t x218 = -3393;
	int64_t x219 = -177435943099692LL;
	volatile int32_t t54 = 116;

    t54 = (x217+((x218^x219)>x220));

    if (t54 != 65536) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t55 = -4;

    t55 = (x221+((x222^x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MIN;
	volatile int32_t t56 = -182;

    t56 = (x225+((x226^x227)>x228));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = 7;
	static int16_t x230 = -14405;
	volatile uint64_t x231 = 16123252697236665LLU;
	volatile int32_t x232 = INT32_MAX;
	static int32_t t57 = 0;

    t57 = (x229+((x230^x231)>x232));

    if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x234 = INT32_MIN;
	int8_t x236 = -1;
	volatile int64_t t58 = 341489171LL;

    t58 = (x233+((x234^x235)>x236));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = 123621U;
	int32_t x240 = -25628;
	volatile int32_t t59 = -216;

    t59 = (x237+((x238^x239)>x240));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x242 = 8054493833938513LLU;
	static int16_t x243 = INT16_MIN;

    t60 = (x241+((x242^x243)>x244));

    if (t60 != -29) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	int32_t t61 = -867;

    t61 = (x245+((x246^x247)>x248));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 126445U;
	int32_t x252 = -1;
	int64_t t62 = INT64_MIN;

    t62 = (x249+((x250^x251)>x252));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 1;
	static uint32_t t63 = 1498092091U;

    t63 = (x253+((x254^x255)>x256));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x260 = 2U;
	uint64_t t64 = 410LLU;

    t64 = (x257+((x258^x259)>x260));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = 744;
	uint8_t x263 = UINT8_MAX;
	uint8_t x264 = 1U;

    t65 = (x261+((x262^x263)>x264));

    if (t65 != 36667LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -2;
	int16_t x266 = INT16_MAX;
	int32_t x267 = 5445255;
	int8_t x268 = -1;

    t66 = (x265+((x266^x267)>x268));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;

    t67 = (x269+((x270^x271)>x272));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -34139;
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	static int64_t x276 = INT64_MAX;

    t68 = (x273+((x274^x275)>x276));

    if (t68 != -34139) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = 1098;
	int8_t x279 = INT8_MIN;
	int16_t x280 = 909;
	volatile int32_t t69 = -38257063;

    t69 = (x277+((x278^x279)>x280));

    if (t69 != 1098) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	static int32_t t70 = -1;

    t70 = (x281+((x282^x283)>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 0U;
	volatile uint8_t x286 = UINT8_MAX;
	int32_t x287 = -926703;
	static int32_t t71 = -122680736;

    t71 = (x285+((x286^x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = 1;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 1;

    t72 = (x289+((x290^x291)>x292));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	static int8_t x294 = 11;
	volatile int32_t x295 = INT32_MIN;
	volatile int32_t t73 = 245;

    t73 = (x293+((x294^x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MAX;
	uint64_t x298 = 124LLU;
	uint32_t x299 = 2750U;
	uint16_t x300 = 746U;
	static volatile int32_t t74 = -835294;

    t74 = (x297+((x298^x299)>x300));

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = 7373;
	static int8_t x304 = INT8_MAX;

    t75 = (x301+((x302^x303)>x304));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = INT16_MIN;
	int8_t x307 = 2;
	static volatile uint64_t x308 = 242104603510603LLU;
	int32_t t76 = 0;

    t76 = (x305+((x306^x307)>x308));

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x313 = 2400055125LL;
	static int16_t x314 = INT16_MIN;
	static int8_t x315 = 0;
	int8_t x316 = -42;
	static volatile int64_t t77 = -86024793390LL;

    t77 = (x313+((x314^x315)>x316));

    if (t77 != 2400055125LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x317 = 28U;
	volatile int64_t x318 = -1LL;
	int16_t x319 = 125;
	int16_t x320 = INT16_MIN;
	int32_t t78 = -120;

    t78 = (x317+((x318^x319)>x320));

    if (t78 != 29) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x321 = -1;
	uint16_t x322 = 1274U;
	uint8_t x324 = UINT8_MAX;

    t79 = (x321+((x322^x323)>x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MAX;
	int16_t x326 = INT16_MIN;
	static int64_t x327 = -39510483LL;
	uint32_t x328 = 2028U;
	volatile int32_t t80 = -614663;

    t80 = (x325+((x326^x327)>x328));

    if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x330 = -6;
	int64_t x332 = 194256LL;

    t81 = (x329+((x330^x331)>x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = INT32_MAX;
	static int8_t x334 = -1;
	volatile int16_t x335 = -1;
	volatile uint16_t x336 = 1417U;
	static volatile int32_t t82 = INT32_MAX;

    t82 = (x333+((x334^x335)>x336));

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x337 = 7U;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = 51375U;
	static int32_t t83 = -5265706;

    t83 = (x337+((x338^x339)>x340));

    if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x342 = 274;
	int32_t x343 = -6812;

    t84 = (x341+((x342^x343)>x344));

    if (t84 != 14600) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = 856;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;

    t85 = (x345+((x346^x347)>x348));

    if (t85 != 857) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x350 = 14;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = -238041;
	static uint64_t t86 = 240729LLU;

    t86 = (x349+((x350^x351)>x352));

    if (t86 != 5196501767633792204LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = UINT64_MAX;
	static uint64_t x356 = 170709LLU;
	volatile uint64_t t87 = 39LLU;

    t87 = (x353+((x354^x355)>x356));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MAX;
	int16_t x359 = -1;
	volatile int32_t x360 = INT32_MIN;
	int32_t t88 = 931;

    t88 = (x357+((x358^x359)>x360));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x361 = UINT8_MAX;
	volatile int64_t x363 = 11523736209359823LL;
	uint64_t x364 = 11448584LLU;

    t89 = (x361+((x362^x363)>x364));

    if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = -938596246385LL;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	volatile int32_t x368 = INT32_MAX;
	int64_t t90 = 13206830248505LL;

    t90 = (x365+((x366^x367)>x368));

    if (t90 != -938596246385LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = -1;
	uint64_t x370 = 970052LLU;
	int32_t x371 = -1;
	static int32_t x372 = -92;
	static int32_t t91 = -1;

    t91 = (x369+((x370^x371)>x372));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	int32_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t92 = 9758898934LL;

    t92 = (x373+((x374^x375)>x376));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x378 = INT16_MIN;
	static int8_t x379 = INT8_MAX;
	static int32_t x380 = INT32_MIN;
	static volatile uint64_t t93 = 3466306LLU;

    t93 = (x377+((x378^x379)>x380));

    if (t93 != 20872582139LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x382 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	volatile int32_t t94 = -27890;

    t94 = (x381+((x382^x383)>x384));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = 6U;
	int32_t x387 = 5238;
	static int8_t x388 = INT8_MAX;
	static volatile int32_t t95 = 0;

    t95 = (x385+((x386^x387)>x388));

    if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x389 = 1470U;
	int16_t x390 = 4707;
	int64_t x391 = -56LL;
	static uint32_t t96 = 60912U;

    t96 = (x389+((x390^x391)>x392));

    if (t96 != 1470U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = INT16_MAX;
	uint8_t x394 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	static int32_t t97 = -4676268;

    t97 = (x393+((x394^x395)>x396));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x397 = -1;
	volatile int32_t x398 = -1;
	uint32_t x399 = 64146U;
	int32_t t98 = 0;

    t98 = (x397+((x398^x399)>x400));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = 10U;
	int8_t x402 = INT8_MAX;
	static volatile uint16_t x403 = 3808U;
	int64_t x404 = INT64_MAX;
	static volatile int32_t t99 = 135;

    t99 = (x401+((x402^x403)>x404));

    if (t99 != 10) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x405 = 27LL;
	volatile int64_t x407 = INT64_MIN;

    t100 = (x405+((x406^x407)>x408));

    if (t100 != 28LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x413 = 7493782938400453LLU;
	int32_t x414 = -1;
	uint16_t x416 = 1U;
	uint64_t t101 = 4865581214259006050LLU;

    t101 = (x413+((x414^x415)>x416));

    if (t101 != 7493782938400454LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = INT32_MIN;
	static volatile int32_t t102 = 5055342;

    t102 = (x417+((x418^x419)>x420));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = -9583LL;
	volatile uint16_t x422 = 3U;
	int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MAX;
	volatile int64_t t103 = -517969LL;

    t103 = (x421+((x422^x423)>x424));

    if (t103 != -9582LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	static volatile int8_t x428 = INT8_MAX;

    t104 = (x425+((x426^x427)>x428));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x429 = UINT8_MAX;
	int64_t x430 = -1LL;
	static uint32_t x431 = 1543U;
	static int64_t x432 = 7190469LL;
	int32_t t105 = -123;

    t105 = (x429+((x430^x431)>x432));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x433 = 120U;
	int64_t x434 = -1LL;
	uint8_t x435 = 117U;
	int64_t x436 = -1LL;
	static volatile int32_t t106 = 884343;

    t106 = (x433+((x434^x435)>x436));

    if (t106 != 120) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x437 = 250665U;
	static volatile int64_t x438 = INT64_MAX;
	int8_t x439 = 0;
	static volatile int8_t x440 = INT8_MAX;
	volatile uint32_t t107 = 124U;

    t107 = (x437+((x438^x439)>x440));

    if (t107 != 250666U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = -1;
	static int16_t x442 = INT16_MIN;
	static int16_t x443 = INT16_MAX;
	uint64_t x444 = 2655205255574379LLU;
	static volatile int32_t t108 = 393;

    t108 = (x441+((x442^x443)>x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x445 = 1480U;
	volatile int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MAX;
	volatile int32_t x448 = 7;
	volatile uint32_t t109 = 220589U;

    t109 = (x445+((x446^x447)>x448));

    if (t109 != 1480U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = INT64_MIN;
	static uint16_t x450 = UINT16_MAX;
	int32_t x451 = -1;
	static int64_t x452 = -1LL;
	volatile int64_t t110 = INT64_MIN;

    t110 = (x449+((x450^x451)>x452));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x453 = 2U;
	uint64_t x454 = 2076LLU;
	int16_t x455 = -6;
	int32_t x456 = 5403;
	int32_t t111 = 962813;

    t111 = (x453+((x454^x455)>x456));

    if (t111 != 3) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x457 = 2824LLU;
	int8_t x458 = INT8_MIN;
	int64_t x460 = INT64_MAX;
	static volatile uint64_t t112 = 31440570564LLU;

    t112 = (x457+((x458^x459)>x460));

    if (t112 != 2824LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x461 = -1LL;
	uint32_t x463 = UINT32_MAX;
	int32_t x464 = INT32_MIN;
	int64_t t113 = 56416645221415392LL;

    t113 = (x461+((x462^x463)>x464));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = INT32_MIN;
	static int32_t x466 = INT32_MIN;
	uint32_t x467 = 2311975U;
	uint64_t x468 = 452185333986691LLU;
	volatile int32_t t114 = INT32_MIN;

    t114 = (x465+((x466^x467)>x468));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = -1;
	int32_t x470 = -717424365;
	static volatile int16_t x471 = -121;
	int32_t t115 = -595;

    t115 = (x469+((x470^x471)>x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x473 = INT8_MIN;
	static int16_t x475 = 383;
	int16_t x476 = -1;
	int32_t t116 = -258;

    t116 = (x473+((x474^x475)>x476));

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x477 = UINT32_MAX;
	volatile int64_t x478 = INT64_MIN;
	uint64_t x479 = 22138344639LLU;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t117 = UINT32_MAX;

    t117 = (x477+((x478^x479)>x480));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x486 = 4521364690310960LL;
	int16_t x487 = INT16_MAX;
	static int32_t t118 = -5;

    t118 = (x485+((x486^x487)>x488));

    if (t118 != 128) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MAX;
	static int16_t x490 = -1;
	int8_t x491 = 3;
	volatile int32_t t119 = INT32_MAX;

    t119 = (x489+((x490^x491)>x492));

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x493 = 51;
	uint32_t x494 = 412635609U;
	static int64_t x495 = INT64_MIN;
	int32_t x496 = -1;

    t120 = (x493+((x494^x495)>x496));

    if (t120 != 51) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = -16;
	static uint8_t x499 = 1U;

    t121 = (x497+((x498^x499)>x500));

    if (t121 != -15) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x501 = 90LLU;
	uint8_t x503 = 62U;
	volatile int64_t x504 = -1LL;
	uint64_t t122 = 133LLU;

    t122 = (x501+((x502^x503)>x504));

    if (t122 != 91LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x510 = 26;
	int64_t x511 = -1728488453LL;
	volatile uint32_t x512 = 2378U;
	static int32_t t123 = 18217373;

    t123 = (x509+((x510^x511)>x512));

    if (t123 != 17) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x513 = -1;
	int32_t x514 = 203701396;
	uint64_t x516 = UINT64_MAX;
	volatile int32_t t124 = 800;

    t124 = (x513+((x514^x515)>x516));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = -1;
	static int32_t x518 = INT32_MIN;

    t125 = (x517+((x518^x519)>x520));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x521 = UINT32_MAX;
	volatile int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;

    t126 = (x521+((x522^x523)>x524));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = -11941338557327LL;
	int32_t x527 = INT32_MIN;
	int64_t x528 = -1LL;
	volatile int64_t t127 = -300589LL;

    t127 = (x525+((x526^x527)>x528));

    if (t127 != -11941338557327LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x530 = -27;
	int64_t x532 = INT64_MIN;
	uint64_t t128 = 22LLU;

    t128 = (x529+((x530^x531)>x532));

    if (t128 != 317LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x533 = 35;
	uint64_t x534 = 1486LLU;
	volatile int8_t x535 = INT8_MAX;
	uint32_t x536 = 0U;
	volatile int32_t t129 = 1121136;

    t129 = (x533+((x534^x535)>x536));

    if (t129 != 36) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = INT32_MAX;
	static int16_t x538 = 13;
	int64_t x539 = 4909571457LL;
	volatile uint64_t x540 = UINT64_MAX;
	volatile int32_t t130 = INT32_MAX;

    t130 = (x537+((x538^x539)>x540));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x541 = -142LL;
	int32_t x542 = -542;
	int16_t x543 = INT16_MAX;
	uint16_t x544 = 6U;

    t131 = (x541+((x542^x543)>x544));

    if (t131 != -142LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = 673184636982LLU;
	uint8_t x546 = 0U;
	volatile int8_t x547 = INT8_MAX;
	static volatile int8_t x548 = 1;
	uint64_t t132 = 145LLU;

    t132 = (x545+((x546^x547)>x548));

    if (t132 != 673184636983LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -1;
	int8_t x550 = -1;
	static volatile int8_t x551 = INT8_MAX;
	volatile int32_t t133 = -340969350;

    t133 = (x549+((x550^x551)>x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = 5958U;
	uint8_t x554 = 0U;
	static volatile int32_t x555 = 0;

    t134 = (x553+((x554^x555)>x556));

    if (t134 != 5958U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = 1;
	int64_t x558 = -19017886LL;
	int64_t x559 = INT64_MIN;
	int32_t x560 = 29;

    t135 = (x557+((x558^x559)>x560));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x561 = INT64_MIN;
	int8_t x563 = 56;
	static int32_t x564 = INT32_MIN;
	volatile int64_t t136 = -1LL;

    t136 = (x561+((x562^x563)>x564));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x567 = INT8_MIN;
	volatile int8_t x568 = 3;
	static volatile int32_t t137 = 1;

    t137 = (x565+((x566^x567)>x568));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x569 = -26291972;
	uint64_t x570 = 9756052079083010LLU;
	int8_t x571 = INT8_MIN;
	uint16_t x572 = 104U;
	int32_t t138 = -471877;

    t138 = (x569+((x570^x571)>x572));

    if (t138 != -26291971) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x573 = INT16_MIN;
	uint16_t x574 = UINT16_MAX;
	static uint64_t x575 = 982974951LLU;
	uint16_t x576 = 11U;
	volatile int32_t t139 = 0;

    t139 = (x573+((x574^x575)>x576));

    if (t139 != -32767) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x577 = INT32_MIN;
	volatile uint64_t x578 = 105981LLU;
	volatile uint64_t x579 = 1050429748011876LLU;
	static int64_t x580 = INT64_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x577+((x578^x579)>x580));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x581 = 1145U;
	int16_t x582 = INT16_MAX;
	int32_t x583 = INT32_MIN;
	volatile int32_t t141 = -18103621;

    t141 = (x581+((x582^x583)>x584));

    if (t141 != 1145) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -34215951600571LL;
	static uint8_t x586 = 1U;
	static volatile int64_t t142 = 524331436236LL;

    t142 = (x585+((x586^x587)>x588));

    if (t142 != -34215951600571LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x589 = INT64_MAX;
	int32_t x591 = -219747;
	int64_t t143 = INT64_MAX;

    t143 = (x589+((x590^x591)>x592));

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x593 = INT32_MAX;
	int8_t x594 = -1;
	uint8_t x595 = 0U;
	int32_t x596 = INT32_MAX;
	volatile int32_t t144 = INT32_MAX;

    t144 = (x593+((x594^x595)>x596));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = -8916;
	int64_t x598 = -1LL;
	int32_t x599 = INT32_MIN;
	static int8_t x600 = INT8_MIN;
	int32_t t145 = 8377437;

    t145 = (x597+((x598^x599)>x600));

    if (t145 != -8915) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x602 = 1U;
	uint16_t x603 = UINT16_MAX;
	static volatile int16_t x604 = INT16_MIN;
	volatile int32_t t146 = -548;

    t146 = (x601+((x602^x603)>x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x605 = -413;
	int8_t x606 = INT8_MAX;
	int64_t x607 = -1LL;
	int16_t x608 = 75;

    t147 = (x605+((x606^x607)>x608));

    if (t147 != -413) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x609 = UINT8_MAX;
	volatile int32_t x610 = INT32_MAX;
	static int8_t x611 = INT8_MAX;
	int16_t x612 = -267;
	static volatile int32_t t148 = -115689782;

    t148 = (x609+((x610^x611)>x612));

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = 7LLU;
	uint16_t x614 = 5318U;
	uint16_t x615 = UINT16_MAX;
	uint64_t t149 = 7376900151795398LLU;

    t149 = (x613+((x614^x615)>x616));

    if (t149 != 8LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = -1;
	volatile uint8_t x618 = 6U;
	static uint64_t x619 = 47790715121720LLU;
	volatile uint16_t x620 = 2121U;
	volatile int32_t t150 = 56641503;

    t150 = (x617+((x618^x619)>x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x627 = 2U;
	uint32_t x628 = 6U;
	volatile int32_t t151 = -75;

    t151 = (x625+((x626^x627)>x628));

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x630 = UINT64_MAX;
	static int32_t x631 = INT32_MAX;
	volatile int8_t x632 = INT8_MIN;
	volatile int32_t t152 = -3;

    t152 = (x629+((x630^x631)>x632));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x633 = 936512512483985864LLU;
	static int16_t x635 = -1348;
	static uint64_t t153 = 898117329781LLU;

    t153 = (x633+((x634^x635)>x636));

    if (t153 != 936512512483985864LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = -10113038434351224LL;
	int16_t x638 = 112;
	volatile int8_t x639 = INT8_MIN;
	volatile uint64_t x640 = UINT64_MAX;
	volatile int64_t t154 = 0LL;

    t154 = (x637+((x638^x639)>x640));

    if (t154 != -10113038434351224LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x642 = INT16_MIN;
	int32_t t155 = 558123300;

    t155 = (x641+((x642^x643)>x644));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x645 = -1;
	int8_t x646 = INT8_MIN;
	static volatile uint64_t x647 = 2832210991403LLU;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t156 = 426725962;

    t156 = (x645+((x646^x647)>x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = -1;
	static int8_t x650 = 1;
	volatile int16_t x652 = INT16_MIN;
	int32_t t157 = -54344;

    t157 = (x649+((x650^x651)>x652));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x654 = UINT32_MAX;
	int16_t x655 = -9961;
	int8_t x656 = INT8_MAX;
	int32_t t158 = -334505;

    t158 = (x653+((x654^x655)>x656));

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x657 = UINT64_MAX;
	int8_t x659 = INT8_MIN;
	static volatile int32_t x660 = INT32_MIN;
	uint64_t t159 = 38LLU;

    t159 = (x657+((x658^x659)>x660));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x661 = 40576U;
	uint64_t x662 = 742900LLU;
	uint16_t x663 = 242U;
	uint32_t t160 = 698631297U;

    t160 = (x661+((x662^x663)>x664));

    if (t160 != 40577U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x666 = INT64_MAX;
	int64_t x667 = -1LL;
	int32_t t161 = 1223965;

    t161 = (x665+((x666^x667)>x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x669 = UINT64_MAX;
	static int16_t x670 = INT16_MAX;
	int64_t x671 = -1LL;
	uint64_t t162 = 4693197978353LLU;

    t162 = (x669+((x670^x671)>x672));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x674 = INT64_MIN;
	int64_t x675 = 12LL;
	static int64_t x676 = -901530700LL;
	int32_t t163 = -46990379;

    t163 = (x673+((x674^x675)>x676));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	static uint16_t x679 = 968U;
	static int32_t x680 = -1;

    t164 = (x677+((x678^x679)>x680));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	volatile int64_t x682 = INT64_MIN;
	uint64_t x683 = 67LLU;
	int16_t x684 = INT16_MIN;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x681+((x682^x683)>x684));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x685 = 17417277844119225LL;
	volatile int64_t x686 = INT64_MAX;
	volatile int64_t t166 = 31LL;

    t166 = (x685+((x686^x687)>x688));

    if (t166 != 17417277844119225LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x689 = -4LL;
	uint32_t x690 = 61649586U;
	volatile int16_t x691 = INT16_MAX;
	static uint32_t x692 = UINT32_MAX;
	volatile int64_t t167 = -106484738376034LL;

    t167 = (x689+((x690^x691)>x692));

    if (t167 != -4LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x695 = 8;
	uint64_t x696 = 18247146507262427LLU;
	static int32_t t168 = 442;

    t168 = (x693+((x694^x695)>x696));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x697 = 98U;
	uint16_t x698 = 7U;
	uint64_t x699 = UINT64_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t169 = 2318823;

    t169 = (x697+((x698^x699)>x700));

    if (t169 != 99) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = -1LL;
	int64_t x702 = -184847199778LL;
	int64_t x703 = INT64_MIN;
	int16_t x704 = INT16_MIN;
	volatile int64_t t170 = 665883207793505LL;

    t170 = (x701+((x702^x703)>x704));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = 39240343U;
	int32_t x706 = INT32_MIN;
	volatile int64_t x707 = INT64_MIN;
	int16_t x708 = INT16_MIN;
	volatile uint32_t t171 = 2038513U;

    t171 = (x705+((x706^x707)>x708));

    if (t171 != 39240344U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x709 = 53U;
	static uint32_t x710 = 487669714U;
	int16_t x711 = 0;
	static int8_t x712 = INT8_MAX;
	volatile int32_t t172 = 1;

    t172 = (x709+((x710^x711)>x712));

    if (t172 != 54) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x713 = 18U;
	static int8_t x714 = -1;
	int8_t x715 = INT8_MIN;
	int64_t x716 = -39297375519LL;
	volatile int32_t t173 = -15656;

    t173 = (x713+((x714^x715)>x716));

    if (t173 != 19) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x717 = 29U;
	static int16_t x718 = INT16_MIN;
	int16_t x719 = INT16_MIN;
	int64_t x720 = INT64_MIN;
	volatile int32_t t174 = -3457;

    t174 = (x717+((x718^x719)>x720));

    if (t174 != 30) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = 21113242126526381LLU;
	int64_t x722 = INT64_MAX;
	volatile int8_t x723 = -1;
	static uint8_t x724 = 3U;

    t175 = (x721+((x722^x723)>x724));

    if (t175 != 21113242126526381LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x726 = 0;
	volatile int16_t x727 = INT16_MIN;
	static int8_t x728 = 7;

    t176 = (x725+((x726^x727)>x728));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = INT32_MIN;
	volatile int16_t x730 = INT16_MAX;
	int8_t x732 = INT8_MAX;
	int32_t t177 = -3;

    t177 = (x729+((x730^x731)>x732));

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x733 = 30074U;
	volatile int8_t x735 = -3;
	volatile int16_t x736 = INT16_MIN;
	volatile int32_t t178 = 0;

    t178 = (x733+((x734^x735)>x736));

    if (t178 != 30075) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = 28821868030LL;
	int64_t x738 = -1LL;
	static uint8_t x739 = 1U;
	volatile int64_t t179 = 1368566975894724LL;

    t179 = (x737+((x738^x739)>x740));

    if (t179 != 28821868031LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = -4LL;
	uint32_t x742 = 270076U;
	int16_t x743 = -122;
	static volatile uint16_t x744 = 59U;
	volatile int64_t t180 = -23826402324851LL;

    t180 = (x741+((x742^x743)>x744));

    if (t180 != -3LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x746 = 857195669;
	volatile int16_t x748 = -23;
	static int32_t t181 = 239869733;

    t181 = (x745+((x746^x747)>x748));

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = -1LL;
	int32_t x750 = -1;
	static int64_t x751 = 241720794638418485LL;
	uint16_t x752 = UINT16_MAX;
	static volatile int64_t t182 = -3LL;

    t182 = (x749+((x750^x751)>x752));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x754 = INT16_MIN;
	int16_t x756 = 4653;
	volatile uint32_t t183 = 238050263U;

    t183 = (x753+((x754^x755)>x756));

    if (t183 != 1259U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x757 = INT64_MIN;
	int8_t x758 = 0;
	int16_t x760 = -1;
	int64_t t184 = -4932532614707015LL;

    t184 = (x757+((x758^x759)>x760));

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x761 = -1LL;
	static int8_t x762 = INT8_MIN;
	uint64_t x763 = 2321204035LLU;
	int64_t t185 = 137908200878LL;

    t185 = (x761+((x762^x763)>x764));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x765 = -879843511772408429LL;
	uint16_t x766 = 39U;
	int16_t x767 = INT16_MAX;
	volatile int64_t t186 = -1949146369516LL;

    t186 = (x765+((x766^x767)>x768));

    if (t186 != -879843511772408429LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x769 = INT16_MIN;
	static int64_t x772 = INT64_MAX;
	int32_t t187 = -1;

    t187 = (x769+((x770^x771)>x772));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x773 = INT8_MIN;
	static int8_t x774 = 0;
	uint32_t x775 = 8U;
	static volatile int32_t t188 = -17626;

    t188 = (x773+((x774^x775)>x776));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x777 = -1;
	int16_t x778 = -161;
	int64_t x779 = 71371LL;
	static int64_t x780 = INT64_MAX;
	volatile int32_t t189 = 18506;

    t189 = (x777+((x778^x779)>x780));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x781 = 11887LLU;
	int8_t x782 = INT8_MIN;
	uint32_t x783 = 1280U;
	volatile int64_t x784 = INT64_MIN;
	uint64_t t190 = 88749176282553LLU;

    t190 = (x781+((x782^x783)>x784));

    if (t190 != 11888LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = -1;
	int16_t x786 = -1;
	volatile int32_t t191 = -1327357;

    t191 = (x785+((x786^x787)>x788));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 31;
	uint32_t x790 = 92849U;
	int8_t x791 = INT8_MIN;
	uint16_t x792 = 7113U;

    t192 = (x789+((x790^x791)>x792));

    if (t192 != 32) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x793 = 7711U;
	volatile uint16_t x794 = 3U;
	int64_t x795 = INT64_MIN;
	static uint64_t x796 = 536LLU;
	volatile int32_t t193 = 4035216;

    t193 = (x793+((x794^x795)>x796));

    if (t193 != 7712) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = -1;
	static volatile int8_t x799 = INT8_MIN;
	volatile int32_t t194 = -894;

    t194 = (x797+((x798^x799)>x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x801 = -1288;
	volatile uint8_t x802 = 25U;
	int16_t x803 = -501;
	uint32_t x804 = UINT32_MAX;
	int32_t t195 = 116342;

    t195 = (x801+((x802^x803)>x804));

    if (t195 != -1288) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x805 = 198U;
	uint32_t x806 = UINT32_MAX;
	volatile int32_t x807 = -1014532;
	static volatile uint16_t x808 = 1401U;
	int32_t t196 = -609;

    t196 = (x805+((x806^x807)>x808));

    if (t196 != 199) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = INT64_MIN;
	static uint64_t x810 = UINT64_MAX;
	uint64_t x811 = 24347168684LLU;
	static int32_t x812 = -1;

    t197 = (x809+((x810^x811)>x812));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x813 = INT16_MIN;
	uint32_t x814 = UINT32_MAX;
	uint32_t x815 = UINT32_MAX;
	int64_t x816 = -1LL;
	volatile int32_t t198 = 43258;

    t198 = (x813+((x814^x815)>x816));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x817 = INT32_MIN;
	int32_t x818 = 314389;
	int8_t x819 = 6;
	volatile int32_t t199 = -527170070;

    t199 = (x817+((x818^x819)>x820));

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

