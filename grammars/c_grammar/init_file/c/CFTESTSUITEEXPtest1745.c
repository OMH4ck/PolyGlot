
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

int16_t x9 = -1;
volatile int16_t x10 = INT16_MIN;
int32_t x15 = 1;
int32_t t5 = 26281752;
int64_t x26 = INT64_MIN;
static uint16_t x28 = UINT16_MAX;
volatile int16_t x31 = INT16_MIN;
int16_t x32 = INT16_MIN;
int32_t t10 = -728380073;
int16_t x48 = -811;
int32_t t11 = 218509837;
int8_t x55 = INT8_MAX;
volatile int16_t x62 = INT16_MAX;
int8_t x64 = INT8_MIN;
int8_t x74 = 1;
uint16_t x90 = 375U;
int32_t x91 = -1;
volatile int32_t x93 = INT32_MIN;
static int8_t x95 = -1;
int32_t t23 = 1594;
int64_t x102 = 93LL;
int8_t x103 = INT8_MIN;
volatile int32_t t25 = 299445;
int32_t t28 = -929718573;
int64_t x117 = -1LL;
int32_t x120 = INT32_MIN;
volatile int32_t t29 = 7571711;
int32_t x121 = -1;
uint64_t x122 = UINT64_MAX;
int32_t t30 = 1;
int32_t t31 = 3;
volatile int64_t x130 = -6155515LL;
uint32_t x131 = UINT32_MAX;
static uint16_t x132 = 115U;
int32_t t32 = -1770629;
uint64_t x134 = 3402546826893541LLU;
int64_t x138 = -12712212477LL;
static int64_t x140 = -1LL;
static int16_t x143 = INT16_MIN;
int32_t t37 = -1155;
uint64_t x155 = 18561503918LLU;
volatile int64_t x156 = -197050211LL;
volatile int32_t t38 = 1742764;
uint8_t x160 = 1U;
static uint32_t x161 = 375U;
int64_t x164 = 57LL;
int32_t t40 = 26172328;
uint64_t x176 = 944LLU;
volatile int32_t t43 = 116;
int32_t x178 = 1830485;
static volatile uint64_t x183 = 19LLU;
volatile int32_t t47 = 78054362;
int64_t x195 = 5LL;
int8_t x196 = 0;
uint64_t x198 = 0LLU;
static int16_t x208 = -1;
volatile int32_t x215 = 20;
uint32_t x221 = 212U;
static volatile int16_t x225 = INT16_MIN;
static uint8_t x226 = 1U;
static int8_t x235 = INT8_MIN;
uint16_t x237 = 11221U;
int32_t x242 = INT32_MIN;
int64_t x247 = INT64_MAX;
uint64_t x254 = 28115214368LLU;
volatile int16_t x256 = INT16_MAX;
int32_t x257 = INT32_MAX;
static uint32_t x261 = 687975097U;
uint64_t x262 = UINT64_MAX;
int32_t t65 = 1823085;
int8_t x268 = -1;
int8_t x272 = -1;
int8_t x274 = INT8_MIN;
int8_t x276 = INT8_MIN;
volatile int64_t x278 = INT64_MAX;
static int16_t x281 = INT16_MIN;
int64_t x292 = -1LL;
volatile int32_t t73 = -1121;
int16_t x300 = INT16_MIN;
volatile int32_t t77 = 53258;
int16_t x313 = INT16_MIN;
uint32_t x319 = 1284U;
static uint32_t x320 = 54880602U;
static volatile int32_t x321 = INT32_MIN;
volatile int8_t x326 = -1;
uint32_t x329 = 229U;
int32_t x333 = INT32_MAX;
static int16_t x347 = -755;
uint8_t x348 = 0U;
volatile uint32_t x349 = UINT32_MAX;
static int32_t t87 = 28023564;
int32_t x353 = -6;
int32_t x354 = INT32_MIN;
int16_t x356 = 38;
int8_t x360 = INT8_MAX;
int32_t t90 = -31325;
volatile uint64_t x371 = 870172093102387LLU;
volatile int32_t t92 = 14;
uint16_t x374 = 5342U;
int32_t t94 = -5876;
uint16_t x382 = UINT16_MAX;
uint16_t x389 = UINT16_MAX;
static int16_t x391 = -16297;
uint64_t x393 = UINT64_MAX;
volatile int64_t x399 = 1604381904LL;
uint64_t x402 = UINT64_MAX;
int32_t x407 = INT32_MAX;
static int16_t x408 = INT16_MAX;
int32_t t101 = 442445;
int16_t x409 = INT16_MIN;
volatile uint64_t x416 = 4261478LLU;
uint32_t x419 = 13985U;
int64_t x420 = INT64_MIN;
int32_t t107 = 443617367;
int32_t x434 = INT32_MIN;
int64_t x438 = INT64_MIN;
uint8_t x440 = UINT8_MAX;
int8_t x452 = INT8_MAX;
volatile int32_t t112 = 20652;
volatile int8_t x453 = INT8_MAX;
int8_t x461 = INT8_MAX;
int8_t x467 = 6;
uint8_t x468 = UINT8_MAX;
static int8_t x474 = INT8_MAX;
int32_t t118 = -12784;
uint64_t x480 = UINT64_MAX;
int32_t x489 = -138;
volatile int8_t x492 = INT8_MIN;
int32_t x495 = INT32_MIN;
uint64_t x496 = 0LLU;
uint64_t x497 = UINT64_MAX;
int16_t x508 = -349;
int16_t x521 = INT16_MAX;
static int16_t x523 = 6;
int64_t x528 = INT64_MIN;
uint8_t x536 = 24U;
static uint32_t x541 = 3932288U;
uint32_t x543 = 1266216U;
int16_t x544 = INT16_MAX;
int64_t x547 = INT64_MIN;
static volatile int32_t t137 = 7344296;
static uint64_t x557 = 282394496407627046LLU;
int16_t x564 = INT16_MIN;
static volatile uint64_t x565 = 0LLU;
static int64_t x566 = -13650511LL;
volatile int32_t t144 = -3;
int64_t x584 = -62LL;
volatile int32_t t146 = -26;
volatile uint32_t x591 = UINT32_MAX;
int64_t x595 = -1LL;
uint16_t x596 = UINT16_MAX;
int8_t x606 = -6;
volatile int32_t t151 = 3;
volatile int16_t x609 = INT16_MIN;
static volatile int32_t t152 = -41080661;
int16_t x614 = 64;
uint16_t x616 = 26361U;
uint32_t x617 = 4032U;
int32_t x619 = INT32_MIN;
static volatile uint16_t x620 = UINT16_MAX;
int32_t t154 = -130978091;
volatile uint32_t x628 = UINT32_MAX;
volatile int64_t x630 = INT64_MIN;
uint64_t x632 = 111012LLU;
int16_t x635 = -1;
volatile int32_t t158 = -28734;
uint32_t x642 = 3U;
static uint32_t x648 = 9U;
int32_t t161 = 9297;
volatile int16_t x655 = -1;
int64_t x660 = -1LL;
int32_t x661 = 5829948;
static volatile uint8_t x666 = 79U;
volatile int32_t t166 = 7;
int32_t t168 = -1;
int8_t x678 = 0;
uint32_t x679 = 84314001U;
uint8_t x680 = 1U;
int32_t t171 = 932;
static uint16_t x694 = 6190U;
static uint64_t x696 = 4434LLU;
int32_t t173 = -113;
volatile uint16_t x698 = 52U;
uint8_t x700 = UINT8_MAX;
volatile int32_t t177 = -244611986;
int32_t x713 = -1;
int8_t x719 = 4;
static int32_t x722 = INT32_MAX;
volatile int8_t x723 = -5;
volatile int32_t t180 = 112308408;
static volatile uint64_t x729 = UINT64_MAX;
int32_t t182 = 1;
int8_t x733 = INT8_MAX;
int64_t x737 = -1785788841LL;
uint16_t x738 = 46U;
static volatile int32_t t184 = -1784495;
int64_t x744 = INT64_MIN;
volatile int16_t x747 = INT16_MIN;
int32_t x750 = INT32_MIN;
volatile int16_t x755 = INT16_MAX;
int8_t x759 = INT8_MIN;
int8_t x763 = INT8_MAX;
uint32_t x769 = 2U;
volatile int8_t x771 = INT8_MIN;
int32_t x775 = INT32_MAX;
volatile int64_t x776 = INT64_MAX;
int16_t x780 = INT16_MIN;
volatile int32_t t194 = 19;
volatile uint64_t x784 = 5333572868LLU;
volatile int32_t t195 = 0;
uint8_t x796 = UINT8_MAX;
int16_t x798 = INT16_MIN;
volatile int16_t x799 = INT16_MAX;
int16_t x800 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	static int64_t x3 = INT64_MIN;
	int8_t x4 = 7;
	static volatile int32_t t0 = -15893;

    t0 = (x1>((x2>x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 13;
	int8_t x6 = -48;
	uint32_t x7 = 15U;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 1929952;

    t1 = (x5>((x6>x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x11 = 530967073648231LLU;
	int64_t x12 = -1LL;
	int32_t t2 = -638497905;

    t2 = (x9>((x10>x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static int8_t x14 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -8568;

    t3 = (x13>((x14>x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MAX;
	volatile int16_t x18 = 132;
	int32_t x19 = -7;
	int8_t x20 = -1;
	int32_t t4 = 108233310;

    t4 = (x17>((x18>x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint8_t x22 = 7U;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 6441023LLU;

    t5 = (x21>((x22>x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint32_t x27 = UINT32_MAX;
	int32_t t6 = 1;

    t6 = (x25>((x26>x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 4087U;
	uint16_t x30 = UINT16_MAX;
	int32_t t7 = -31;

    t7 = (x29>((x30>x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 37629U;
	static volatile uint32_t x34 = UINT32_MAX;
	static uint64_t x35 = 6833118545681LLU;
	uint64_t x36 = 58896633LLU;
	volatile int32_t t8 = -1836004;

    t8 = (x33>((x34>x35)|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 83160618;

    t9 = (x37>((x38>x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int8_t x42 = -1;
	volatile uint8_t x43 = UINT8_MAX;
	volatile int16_t x44 = -103;

    t10 = (x41>((x42>x43)|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 98442620U;
	uint32_t x46 = 213021U;
	int32_t x47 = -1;

    t11 = (x45>((x46>x47)|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 0U;
	static int64_t x50 = INT64_MIN;
	volatile uint16_t x51 = UINT16_MAX;
	static volatile int16_t x52 = 89;
	int32_t t12 = -45243390;

    t12 = (x49>((x50>x51)|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MAX;
	volatile int16_t x56 = INT16_MAX;
	int32_t t13 = 40347;

    t13 = (x53>((x54>x55)|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 1020U;
	int64_t x58 = INT64_MIN;
	static volatile int32_t x59 = -16750629;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -3331517;

    t14 = (x57>((x58>x59)|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 15805U;
	int8_t x63 = -4;
	int32_t t15 = -24416;

    t15 = (x61>((x62>x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 0;
	int64_t x66 = INT64_MAX;
	static volatile int16_t x67 = 1701;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = -308;

    t16 = (x65>((x66>x67)|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 4U;
	uint8_t x70 = UINT8_MAX;
	uint8_t x71 = 1U;
	uint64_t x72 = 98418363216144LLU;
	static volatile int32_t t17 = -4;

    t17 = (x69>((x70>x71)|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	static uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = 4433;

    t18 = (x73>((x74>x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 52U;
	int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = -3;

    t19 = (x77>((x78>x79)|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	uint16_t x82 = 25U;
	volatile int32_t x83 = 5195071;
	uint32_t x84 = UINT32_MAX;
	static int32_t t20 = 8495832;

    t20 = (x81>((x82>x83)|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	static int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	int32_t x88 = 5;
	volatile int32_t t21 = -1;

    t21 = (x85>((x86>x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	int8_t x92 = -1;
	volatile int32_t t22 = -770804688;

    t22 = (x89>((x90>x91)|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x94 = INT64_MAX;
	int16_t x96 = INT16_MAX;

    t23 = (x93>((x94>x95)|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	static uint32_t x98 = 7U;
	int8_t x99 = INT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -125580693;

    t24 = (x97>((x98>x99)|x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 66U;
	static int32_t x104 = INT32_MIN;

    t25 = (x101>((x102>x103)|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 4104;
	uint32_t x106 = UINT32_MAX;
	volatile uint8_t x107 = 61U;
	int64_t x108 = -1LL;
	volatile int32_t t26 = -1119;

    t26 = (x105>((x106>x107)|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 115758595536387LLU;
	static volatile int32_t t27 = -171462;

    t27 = (x109>((x110>x111)|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -14;
	uint32_t x114 = 437814U;
	uint8_t x115 = 121U;
	int8_t x116 = 1;

    t28 = (x113>((x114>x115)|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;

    t29 = (x117>((x118>x119)|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x123 = 1U;
	uint64_t x124 = UINT64_MAX;

    t30 = (x121>((x122>x123)|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -1;
	volatile uint64_t x126 = 6576LLU;
	volatile int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;

    t31 = (x125>((x126>x127)|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 9U;

    t32 = (x129>((x130>x131)|x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	int64_t x135 = INT64_MAX;
	uint8_t x136 = 0U;
	int32_t t33 = -3437;

    t33 = (x133>((x134>x135)|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	uint32_t x139 = 575U;
	int32_t t34 = 5093056;

    t34 = (x137>((x138>x139)|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = -10;
	int8_t x142 = 0;
	int16_t x144 = INT16_MAX;
	volatile int32_t t35 = 210143973;

    t35 = (x141>((x142>x143)|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = 158734878307798LL;
	volatile uint32_t x147 = 238651906U;
	int64_t x148 = 92615LL;
	int32_t t36 = 45980301;

    t36 = (x145>((x146>x147)|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1866;
	int16_t x150 = -2;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;

    t37 = (x149>((x150>x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = -1;
	uint64_t x154 = 562551835473870777LLU;

    t38 = (x153>((x154>x155)|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 9155063;
	static int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MIN;
	int32_t t39 = -1178110;

    t39 = (x157>((x158>x159)|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = INT32_MIN;
	static int64_t x163 = 1783702489LL;

    t40 = (x161>((x162>x163)|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 86275576823920930LLU;
	int64_t x166 = INT64_MIN;
	static int8_t x167 = 1;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -10071;

    t41 = (x165>((x166>x167)|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = 3316U;
	static uint32_t x171 = 50574U;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -5045;

    t42 = (x169>((x170>x171)|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 806887U;
	static volatile int16_t x174 = 382;
	int32_t x175 = -1;

    t43 = (x173>((x174>x175)|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -576128417;
	static volatile int64_t x179 = INT64_MIN;
	uint64_t x180 = 99598985LLU;
	volatile int32_t t44 = -53789110;

    t44 = (x177>((x178>x179)|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x181 = INT64_MIN;
	volatile int32_t x182 = INT32_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t45 = -329869223;

    t45 = (x181>((x182>x183)|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -8;
	static int8_t x186 = INT8_MIN;
	volatile int8_t x187 = -1;
	int8_t x188 = 0;
	int32_t t46 = 3;

    t46 = (x185>((x186>x187)|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 10U;
	int64_t x190 = -2171LL;
	int16_t x191 = -72;
	int32_t x192 = INT32_MIN;

    t47 = (x189>((x190>x191)|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -65146992758778272LL;
	int32_t t48 = 134;

    t48 = (x193>((x194>x195)|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	volatile int64_t x199 = -66LL;
	static uint64_t x200 = UINT64_MAX;
	static volatile int32_t t49 = -1815078;

    t49 = (x197>((x198>x199)|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MIN;
	uint64_t x202 = 273171179LLU;
	volatile uint8_t x203 = 3U;
	uint64_t x204 = 5679405204493548942LLU;
	int32_t t50 = 3050;

    t50 = (x201>((x202>x203)|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int32_t x207 = -27;
	static volatile int32_t t51 = 0;

    t51 = (x205>((x206>x207)|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 35U;
	static int64_t x210 = -4969239757LL;
	volatile int32_t x211 = -1;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -32597;

    t52 = (x209>((x210>x211)|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 122937153984000LLU;
	static int32_t x214 = INT32_MIN;
	uint64_t x216 = 4426LLU;
	static volatile int32_t t53 = -238;

    t53 = (x213>((x214>x215)|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	uint32_t x218 = UINT32_MAX;
	volatile uint8_t x219 = 3U;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -372;

    t54 = (x217>((x218>x219)|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 28248807;

    t55 = (x221>((x222>x223)|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = INT64_MIN;
	int8_t x228 = 3;
	static int32_t t56 = 238183123;

    t56 = (x225>((x226>x227)|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	int8_t x230 = 4;
	static uint8_t x231 = 2U;
	static int16_t x232 = -1;
	int32_t t57 = -16087;

    t57 = (x229>((x230>x231)|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 2;
	uint16_t x234 = UINT16_MAX;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 236169165;

    t58 = (x233>((x234>x235)|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 747LLU;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -1;
	static int32_t t59 = -228526563;

    t59 = (x237>((x238>x239)|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 1U;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -8;

    t60 = (x241>((x242>x243)|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = 31676U;
	volatile int8_t x246 = INT8_MIN;
	static volatile uint8_t x248 = 7U;
	static int32_t t61 = 197;

    t61 = (x245>((x246>x247)|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MIN;
	int32_t x250 = 59756;
	int32_t x251 = -15;
	int8_t x252 = -1;
	int32_t t62 = 6077115;

    t62 = (x249>((x250>x251)|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	static uint8_t x255 = UINT8_MAX;
	int32_t t63 = 162440;

    t63 = (x253>((x254>x255)|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x258 = INT8_MIN;
	uint32_t x259 = 7U;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 110417407;

    t64 = (x257>((x258>x259)|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x263 = 16U;
	volatile int64_t x264 = -54381LL;

    t65 = (x261>((x262>x263)|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = 62;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MAX;
	volatile int32_t t66 = -4633352;

    t66 = (x265>((x266>x267)|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = 0;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	static int32_t t67 = 1;

    t67 = (x269>((x270>x271)|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 9U;
	int16_t x275 = INT16_MAX;
	static volatile int32_t t68 = -1;

    t68 = (x273>((x274>x275)|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x277 = 100295U;
	uint8_t x279 = UINT8_MAX;
	static int64_t x280 = INT64_MAX;
	volatile int32_t t69 = -803544701;

    t69 = (x277>((x278>x279)|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x282 = -1116400;
	int64_t x283 = -1LL;
	uint64_t x284 = UINT64_MAX;
	int32_t t70 = -782199371;

    t70 = (x281>((x282>x283)|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x285 = UINT64_MAX;
	static int8_t x286 = INT8_MIN;
	static int64_t x287 = INT64_MIN;
	int32_t x288 = -161153;
	volatile int32_t t71 = 16972683;

    t71 = (x285>((x286>x287)|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = -1;
	int32_t x290 = INT32_MAX;
	static uint8_t x291 = 0U;
	int32_t t72 = 185;

    t72 = (x289>((x290>x291)|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 219208144LLU;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -1;
	int8_t x296 = INT8_MAX;

    t73 = (x293>((x294>x295)|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	static int64_t x298 = INT64_MIN;
	static int64_t x299 = -1LL;
	volatile int32_t t74 = -63782;

    t74 = (x297>((x298>x299)|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 251;
	int64_t x302 = -23137539904LL;
	static uint16_t x303 = 339U;
	int64_t x304 = INT64_MIN;
	int32_t t75 = -197;

    t75 = (x301>((x302>x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x305 = 6U;
	int32_t x306 = INT32_MAX;
	static uint8_t x307 = 3U;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -7550;

    t76 = (x305>((x306>x307)|x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	int16_t x310 = INT16_MIN;
	volatile int64_t x311 = INT64_MIN;
	uint16_t x312 = 9404U;

    t77 = (x309>((x310>x311)|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x314 = -409;
	uint32_t x315 = 23U;
	int32_t x316 = -623;
	volatile int32_t t78 = -1386;

    t78 = (x313>((x314>x315)|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 4382U;
	static int64_t x318 = INT64_MAX;
	volatile int32_t t79 = 33989080;

    t79 = (x317>((x318>x319)|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MIN;
	static volatile uint64_t x323 = 364155523LLU;
	int8_t x324 = -1;
	volatile int32_t t80 = 78;

    t80 = (x321>((x322>x323)|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	volatile int32_t x327 = -176;
	int32_t x328 = -1;
	volatile int32_t t81 = 1562;

    t81 = (x325>((x326>x327)|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x330 = 14581U;
	volatile int8_t x331 = -1;
	int64_t x332 = INT64_MAX;
	static volatile int32_t t82 = 1644;

    t82 = (x329>((x330>x331)|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = UINT8_MAX;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	int32_t t83 = -172389;

    t83 = (x333>((x334>x335)|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = UINT16_MAX;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	static int8_t x340 = INT8_MAX;
	int32_t t84 = 1046;

    t84 = (x337>((x338>x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	int8_t x344 = INT8_MAX;
	int32_t t85 = 495;

    t85 = (x341>((x342>x343)|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1604632661431LL;
	uint64_t x346 = 96875LLU;
	static int32_t t86 = -981;

    t86 = (x345>((x346>x347)|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = -1;
	static uint64_t x352 = 147911LLU;

    t87 = (x349>((x350>x351)|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x355 = -1;
	volatile int32_t t88 = 122890;

    t88 = (x353>((x354>x355)|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -1;
	int64_t x358 = INT64_MAX;
	static volatile int16_t x359 = -1;
	int32_t t89 = -7;

    t89 = (x357>((x358>x359)|x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 227608145685303LLU;
	static int16_t x362 = -1;
	volatile uint16_t x363 = UINT16_MAX;
	static int8_t x364 = INT8_MIN;

    t90 = (x361>((x362>x363)|x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = 1U;
	static volatile int8_t x366 = INT8_MAX;
	static uint16_t x367 = 1317U;
	static int64_t x368 = -59LL;
	volatile int32_t t91 = -3;

    t91 = (x365>((x366>x367)|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 46434U;
	uint8_t x370 = 1U;
	int32_t x372 = INT32_MAX;

    t92 = (x369>((x370>x371)|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 2U;
	int32_t x375 = INT32_MIN;
	int64_t x376 = -2608927344LL;
	volatile int32_t t93 = 101;

    t93 = (x373>((x374>x375)|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 11804042045234346LLU;
	static int32_t x378 = INT32_MIN;
	static int8_t x379 = -2;
	int64_t x380 = INT64_MIN;

    t94 = (x377>((x378>x379)|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = INT8_MIN;
	static volatile uint32_t x383 = UINT32_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = 978071854;

    t95 = (x381>((x382>x383)|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = -1;
	uint16_t x386 = 269U;
	uint8_t x387 = 1U;
	uint32_t x388 = 906264838U;
	int32_t t96 = -43;

    t96 = (x385>((x386>x387)|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = 13;
	int16_t x392 = -1;
	volatile int32_t t97 = -30693;

    t97 = (x389>((x390>x391)|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = INT32_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int16_t x396 = INT16_MAX;
	int32_t t98 = -587642921;

    t98 = (x393>((x394>x395)|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	uint32_t x398 = UINT32_MAX;
	int8_t x400 = -6;
	int32_t t99 = -5;

    t99 = (x397>((x398>x399)|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int64_t x403 = INT64_MIN;
	static int64_t x404 = 113721885LL;
	static int32_t t100 = 23282;

    t100 = (x401>((x402>x403)|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x405 = 3560236U;
	uint8_t x406 = 97U;

    t101 = (x405>((x406>x407)|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = INT64_MAX;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = -1;
	volatile int32_t t102 = -584062;

    t102 = (x409>((x410>x411)|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = UINT64_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = 227286;
	int32_t t103 = -199957421;

    t103 = (x413>((x414>x415)|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 1528U;
	int64_t x418 = INT64_MIN;
	volatile int32_t t104 = 37081;

    t104 = (x417>((x418>x419)|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 2U;
	uint64_t x422 = 1557976LLU;
	uint16_t x423 = 2259U;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t105 = 0;

    t105 = (x421>((x422>x423)|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = 1U;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = -175352360;

    t106 = (x425>((x426>x427)|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MIN;
	static int8_t x430 = 47;
	volatile int32_t x431 = INT32_MIN;
	uint32_t x432 = UINT32_MAX;

    t107 = (x429>((x430>x431)|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = 14710U;
	int64_t x435 = INT64_MIN;
	static volatile int16_t x436 = INT16_MAX;
	int32_t t108 = -4;

    t108 = (x433>((x434>x435)|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	int32_t t109 = -7364;

    t109 = (x437>((x438>x439)|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	int32_t x442 = INT32_MIN;
	uint16_t x443 = 933U;
	int32_t x444 = INT32_MIN;
	int32_t t110 = 974988005;

    t110 = (x441>((x442>x443)|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	static int16_t x446 = INT16_MIN;
	volatile int64_t x447 = INT64_MIN;
	uint32_t x448 = 1025409966U;
	volatile int32_t t111 = -7;

    t111 = (x445>((x446>x447)|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	volatile uint32_t x450 = UINT32_MAX;
	int16_t x451 = INT16_MIN;

    t112 = (x449>((x450>x451)|x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x454 = INT64_MIN;
	int32_t x455 = -1;
	volatile int64_t x456 = -2LL;
	volatile int32_t t113 = 52070045;

    t113 = (x453>((x454>x455)|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -6LL;
	int16_t x458 = 18;
	uint32_t x459 = UINT32_MAX;
	int16_t x460 = 4523;
	volatile int32_t t114 = 21;

    t114 = (x457>((x458>x459)|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = -780413LL;
	int64_t x463 = -319811236340862LL;
	int64_t x464 = -1LL;
	volatile int32_t t115 = -3543;

    t115 = (x461>((x462>x463)|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	uint8_t x466 = 8U;
	int32_t t116 = 38396900;

    t116 = (x465>((x466>x467)|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 446U;
	volatile int32_t x470 = INT32_MAX;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = 10;
	volatile int32_t t117 = -54004;

    t117 = (x469>((x470>x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 5507U;
	int32_t x475 = INT32_MIN;
	static uint32_t x476 = 2879172U;

    t118 = (x473>((x474>x475)|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -1;
	int8_t x478 = -1;
	uint32_t x479 = 1037983U;
	int32_t t119 = -193570;

    t119 = (x477>((x478>x479)|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = -637;
	volatile uint64_t x482 = 18865LLU;
	int32_t x483 = INT32_MAX;
	volatile int16_t x484 = INT16_MAX;
	static int32_t t120 = -18163386;

    t120 = (x481>((x482>x483)|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 1;
	int16_t x486 = INT16_MIN;
	static uint8_t x487 = 16U;
	uint8_t x488 = 40U;
	int32_t t121 = 1;

    t121 = (x485>((x486>x487)|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = 54;
	static int8_t x491 = 1;
	int32_t t122 = -58;

    t122 = (x489>((x490>x491)|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 2U;
	int8_t x494 = INT8_MAX;
	static volatile int32_t t123 = 105611;

    t123 = (x493>((x494>x495)|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = 0;
	uint16_t x499 = UINT16_MAX;
	static int32_t x500 = 59852702;
	int32_t t124 = 45929490;

    t124 = (x497>((x498>x499)|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	static int16_t x502 = INT16_MAX;
	int8_t x503 = INT8_MAX;
	static volatile uint8_t x504 = UINT8_MAX;
	static volatile int32_t t125 = -17256242;

    t125 = (x501>((x502>x503)|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	int32_t x506 = INT32_MIN;
	int16_t x507 = INT16_MAX;
	int32_t t126 = 13210;

    t126 = (x505>((x506>x507)|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	uint8_t x510 = 51U;
	volatile int8_t x511 = INT8_MIN;
	static volatile uint64_t x512 = 783LLU;
	volatile int32_t t127 = 1388706;

    t127 = (x509>((x510>x511)|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	uint32_t x514 = 13346616U;
	static int8_t x515 = INT8_MAX;
	static volatile uint16_t x516 = 7U;
	int32_t t128 = -898108254;

    t128 = (x513>((x514>x515)|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 13U;
	int32_t x518 = INT32_MIN;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 663LLU;
	int32_t t129 = -1;

    t129 = (x517>((x518>x519)|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MIN;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 50040306;

    t130 = (x521>((x522>x523)|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x525 = 11U;
	static uint64_t x526 = 28728LLU;
	static uint16_t x527 = UINT16_MAX;
	int32_t t131 = -400;

    t131 = (x525>((x526>x527)|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	uint16_t x530 = UINT16_MAX;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 0U;
	int32_t t132 = -5873;

    t132 = (x529>((x530>x531)|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MIN;
	uint32_t x535 = UINT32_MAX;
	int32_t t133 = 0;

    t133 = (x533>((x534>x535)|x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	uint8_t x539 = 0U;
	int16_t x540 = -24;
	int32_t t134 = 16407914;

    t134 = (x537>((x538>x539)|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = 288LL;
	volatile int32_t t135 = 1155;

    t135 = (x541>((x542>x543)|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 7229;
	uint32_t x546 = 24U;
	uint8_t x548 = 4U;
	static volatile int32_t t136 = -21;

    t136 = (x545>((x546>x547)|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -7;
	uint16_t x550 = UINT16_MAX;
	int16_t x551 = INT16_MAX;
	int8_t x552 = -1;

    t137 = (x549>((x550>x551)|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 7475429060LLU;
	static volatile uint16_t x554 = 12U;
	int64_t x555 = -515861818390LL;
	static uint32_t x556 = UINT32_MAX;
	volatile int32_t t138 = 69;

    t138 = (x553>((x554>x555)|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x558 = INT8_MIN;
	int32_t x559 = INT32_MAX;
	int64_t x560 = -3571242012LL;
	static volatile int32_t t139 = 7819;

    t139 = (x557>((x558>x559)|x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 126U;
	volatile int64_t x562 = -459214316LL;
	volatile uint16_t x563 = UINT16_MAX;
	volatile int32_t t140 = -76;

    t140 = (x561>((x562>x563)|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x567 = INT32_MIN;
	uint32_t x568 = 3318U;
	int32_t t141 = 5274;

    t141 = (x565>((x566>x567)|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 1407465476LLU;
	uint64_t x570 = 695320150893LLU;
	int32_t x571 = INT32_MIN;
	static int64_t x572 = INT64_MIN;
	volatile int32_t t142 = -11;

    t142 = (x569>((x570>x571)|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = INT64_MAX;
	uint32_t x574 = UINT32_MAX;
	uint64_t x575 = 18013336097891604LLU;
	int8_t x576 = INT8_MAX;
	volatile int32_t t143 = 1412;

    t143 = (x573>((x574>x575)|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = INT8_MIN;
	static volatile uint16_t x578 = 42U;
	int64_t x579 = 212LL;
	static int8_t x580 = INT8_MIN;

    t144 = (x577>((x578>x579)|x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -4LL;
	volatile uint32_t x582 = 53U;
	volatile int32_t x583 = INT32_MIN;
	int32_t t145 = 12533;

    t145 = (x581>((x582>x583)|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile uint8_t x586 = 48U;
	int16_t x587 = INT16_MIN;
	static int32_t x588 = INT32_MAX;

    t146 = (x585>((x586>x587)|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile uint32_t x590 = 0U;
	uint64_t x592 = UINT64_MAX;
	static volatile int32_t t147 = 0;

    t147 = (x589>((x590>x591)|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 0LL;
	int64_t x594 = INT64_MAX;
	volatile int32_t t148 = 1;

    t148 = (x593>((x594>x595)|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 203037491199186407LLU;
	int16_t x598 = INT16_MIN;
	static volatile int16_t x599 = 83;
	static int8_t x600 = -5;
	int32_t t149 = 20645;

    t149 = (x597>((x598>x599)|x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int32_t x602 = -333957277;
	volatile uint8_t x603 = 116U;
	int64_t x604 = 11448670348LL;
	volatile int32_t t150 = 6;

    t150 = (x601>((x602>x603)|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int8_t x607 = INT8_MIN;
	static volatile uint64_t x608 = 599620654844995LLU;

    t151 = (x605>((x606>x607)|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	volatile uint64_t x611 = 3700607151640LLU;
	int32_t x612 = -1;

    t152 = (x609>((x610>x611)|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MIN;
	int8_t x615 = -1;
	volatile int32_t t153 = 16355754;

    t153 = (x613>((x614>x615)|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x618 = INT8_MIN;

    t154 = (x617>((x618>x619)|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = UINT64_MAX;
	int32_t x622 = INT32_MIN;
	volatile int8_t x623 = -1;
	int64_t x624 = INT64_MIN;
	static volatile int32_t t155 = 471929921;

    t155 = (x621>((x622>x623)|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x625 = 25;
	volatile int64_t x626 = -75363LL;
	int16_t x627 = 23;
	volatile int32_t t156 = 7818;

    t156 = (x625>((x626>x627)|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 6;
	uint16_t x631 = 3312U;
	int32_t t157 = -16531747;

    t157 = (x629>((x630>x631)|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = INT16_MAX;
	int32_t x634 = INT32_MIN;
	int32_t x636 = INT32_MIN;

    t158 = (x633>((x634>x635)|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 13600U;
	int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MIN;
	volatile int16_t x640 = 1257;
	volatile int32_t t159 = -18008729;

    t159 = (x637>((x638>x639)|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x643 = -1;
	static volatile int32_t x644 = INT32_MIN;
	int32_t t160 = 28518;

    t160 = (x641>((x642>x643)|x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 13179U;
	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MAX;

    t161 = (x645>((x646>x647)|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 1458U;
	uint32_t x650 = 84684318U;
	int16_t x651 = INT16_MAX;
	int64_t x652 = INT64_MAX;
	volatile int32_t t162 = -100433914;

    t162 = (x649>((x650>x651)|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x654 = -1LL;
	static uint32_t x656 = 11U;
	int32_t t163 = 117769;

    t163 = (x653>((x654>x655)|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = -1;
	static int16_t x659 = 10;
	volatile int32_t t164 = -3;

    t164 = (x657>((x658>x659)|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x662 = -1LL;
	int16_t x663 = -1;
	int64_t x664 = INT64_MIN;
	int32_t t165 = -5842;

    t165 = (x661>((x662>x663)|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	volatile int8_t x667 = INT8_MIN;
	uint64_t x668 = 88256646LLU;

    t166 = (x665>((x666>x667)|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	volatile uint8_t x670 = 4U;
	static int8_t x671 = INT8_MAX;
	static volatile uint32_t x672 = 1742658223U;
	volatile int32_t t167 = -2224;

    t167 = (x669>((x670>x671)|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int8_t x674 = 0;
	volatile int8_t x675 = INT8_MIN;
	volatile int8_t x676 = -4;

    t168 = (x673>((x674>x675)|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x677 = -641;
	volatile int32_t t169 = -218;

    t169 = (x677>((x678>x679)|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -1;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 4287212065060LLU;
	int8_t x684 = INT8_MIN;
	static volatile int32_t t170 = -908658178;

    t170 = (x681>((x682>x683)|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	volatile uint64_t x686 = 1252064LLU;
	volatile int8_t x687 = -1;
	uint32_t x688 = 1619177406U;

    t171 = (x685>((x686>x687)|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 41465617LLU;
	static int64_t x690 = INT64_MIN;
	int16_t x691 = -1;
	volatile int32_t x692 = -1;
	int32_t t172 = 1840751;

    t172 = (x689>((x690>x691)|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MIN;
	int32_t x695 = -2;

    t173 = (x693>((x694>x695)|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -18;
	uint8_t x699 = UINT8_MAX;
	int32_t t174 = -763875790;

    t174 = (x697>((x698>x699)|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint16_t x702 = 57U;
	static int16_t x703 = INT16_MIN;
	static volatile int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 1;

    t175 = (x701>((x702>x703)|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = -1;
	int64_t x706 = INT64_MAX;
	uint64_t x707 = 20394567LLU;
	static int32_t x708 = INT32_MAX;
	int32_t t176 = -76465834;

    t176 = (x705>((x706>x707)|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 112344769;
	uint16_t x710 = 3202U;
	static volatile int64_t x711 = 116033139741472LL;
	int64_t x712 = INT64_MIN;

    t177 = (x709>((x710>x711)|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = -1;
	volatile int64_t x715 = 64765951499117LL;
	static int64_t x716 = -64693LL;
	int32_t t178 = 262633650;

    t178 = (x713>((x714>x715)|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	static int32_t x718 = -12;
	int64_t x720 = -1LL;
	volatile int32_t t179 = 910757;

    t179 = (x717>((x718>x719)|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	uint64_t x724 = 5347145654LLU;

    t180 = (x721>((x722>x723)|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 0U;
	int32_t x726 = -1;
	uint32_t x727 = 110801863U;
	int16_t x728 = -196;
	volatile int32_t t181 = 14958128;

    t181 = (x725>((x726>x727)|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = 6;
	static int16_t x731 = -1;
	static int16_t x732 = INT16_MAX;

    t182 = (x729>((x730>x731)|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MAX;
	static uint64_t x735 = 1686129842141523LLU;
	static int16_t x736 = -1;
	volatile int32_t t183 = 0;

    t183 = (x733>((x734>x735)|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x739 = 2378U;
	uint8_t x740 = 1U;

    t184 = (x737>((x738>x739)|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	uint64_t x742 = 756LLU;
	uint16_t x743 = UINT16_MAX;
	volatile int32_t t185 = 5358931;

    t185 = (x741>((x742>x743)|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	int16_t x746 = -353;
	static uint16_t x748 = UINT16_MAX;
	int32_t t186 = 4;

    t186 = (x745>((x746>x747)|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	volatile int32_t x751 = -1;
	int8_t x752 = 0;
	int32_t t187 = -151284;

    t187 = (x749>((x750>x751)|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MAX;
	uint16_t x754 = 17U;
	int16_t x756 = -957;
	static int32_t t188 = 1901;

    t188 = (x753>((x754>x755)|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x757 = 25U;
	static int16_t x758 = INT16_MIN;
	int32_t x760 = INT32_MAX;
	volatile int32_t t189 = -79603507;

    t189 = (x757>((x758>x759)|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	static int64_t x762 = -1LL;
	static int16_t x764 = 15002;
	volatile int32_t t190 = -42;

    t190 = (x761>((x762>x763)|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = UINT8_MAX;
	int32_t x767 = -3;
	int16_t x768 = 222;
	volatile int32_t t191 = 2917949;

    t191 = (x765>((x766>x767)|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x770 = 106U;
	static int16_t x772 = INT16_MIN;
	static volatile int32_t t192 = -1606;

    t192 = (x769>((x770>x771)|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = INT64_MIN;
	int32_t x774 = INT32_MAX;
	int32_t t193 = 0;

    t193 = (x773>((x774>x775)|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 0U;
	static int32_t x778 = INT32_MAX;
	int16_t x779 = INT16_MAX;

    t194 = (x777>((x778>x779)|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	int32_t x782 = INT32_MAX;
	uint32_t x783 = 42894617U;

    t195 = (x781>((x782>x783)|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x785 = INT16_MAX;
	static int16_t x786 = -1;
	int16_t x787 = INT16_MAX;
	uint8_t x788 = 0U;
	static int32_t t196 = 3481;

    t196 = (x785>((x786>x787)|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -7;
	uint16_t x790 = 175U;
	volatile int32_t x791 = -10;
	int16_t x792 = 1394;
	volatile int32_t t197 = -833928;

    t197 = (x789>((x790>x791)|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 22U;
	volatile int16_t x794 = 1850;
	int64_t x795 = 737665325794LL;
	volatile int32_t t198 = 0;

    t198 = (x793>((x794>x795)|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	volatile int32_t t199 = -162;

    t199 = (x797>((x798>x799)|x800));

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

