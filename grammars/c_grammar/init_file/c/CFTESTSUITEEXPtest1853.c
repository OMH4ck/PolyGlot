
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

static int32_t x1 = 3361;
int16_t x9 = -399;
static volatile uint32_t x10 = 12221U;
int16_t x19 = -1;
uint16_t x20 = 718U;
static uint64_t x24 = UINT64_MAX;
volatile int64_t t5 = 3LL;
volatile int32_t t6 = 13715;
uint8_t x37 = UINT8_MAX;
int8_t x40 = INT8_MIN;
uint16_t x41 = UINT16_MAX;
static volatile int32_t t10 = -45174093;
volatile int32_t t11 = -34085738;
int64_t x49 = -1LL;
uint8_t x52 = 2U;
int32_t x56 = INT32_MIN;
int16_t x57 = -1;
int32_t x62 = -1;
static int8_t x67 = INT8_MAX;
uint64_t x68 = 490281LLU;
int64_t x77 = INT64_MIN;
static int64_t x83 = -1LL;
int64_t x85 = -1LL;
int64_t x94 = INT64_MAX;
int16_t x101 = INT16_MIN;
int16_t x106 = INT16_MAX;
int64_t x113 = INT64_MIN;
int32_t x123 = -1;
int64_t x126 = -1LL;
int64_t x128 = INT64_MIN;
uint16_t x141 = UINT16_MAX;
int64_t x142 = INT64_MIN;
int32_t x144 = 1364;
static volatile uint16_t x153 = 4U;
static int64_t x154 = INT64_MAX;
static int64_t x159 = INT64_MIN;
static int32_t t40 = 3692;
static uint16_t x167 = UINT16_MAX;
volatile int32_t x169 = INT32_MIN;
int64_t x170 = INT64_MAX;
int32_t t42 = 2367057;
uint64_t x173 = 2LLU;
int32_t x175 = 293508;
uint64_t x182 = 26062603LLU;
int32_t x186 = -23;
volatile uint16_t x187 = 1U;
static uint8_t x194 = 19U;
volatile int64_t x203 = INT64_MAX;
int16_t x206 = INT16_MIN;
static int16_t x208 = -1;
int32_t t50 = 459;
static int64_t x214 = -11LL;
int8_t x215 = -1;
int32_t x224 = 14570085;
volatile int32_t t56 = -19;
volatile uint32_t x239 = 4633251U;
uint8_t x246 = 0U;
int8_t x255 = 1;
volatile int32_t x256 = 1;
static int64_t x257 = -1LL;
int8_t x279 = INT8_MAX;
int64_t x282 = 594106494641044920LL;
int16_t x289 = 1;
static int64_t x292 = INT64_MAX;
int32_t x296 = -15;
static int64_t t70 = -461148763578LL;
int16_t x299 = -62;
int8_t x302 = -1;
static uint16_t x314 = UINT16_MAX;
volatile int32_t x318 = INT32_MAX;
int16_t x320 = INT16_MIN;
uint32_t t77 = 65233462U;
int64_t x329 = INT64_MAX;
int8_t x340 = INT8_MAX;
volatile int32_t t81 = -16461794;
int32_t t83 = -94942250;
uint32_t x350 = 115U;
volatile uint32_t t86 = 5710U;
uint16_t x366 = UINT16_MAX;
volatile int32_t x367 = INT32_MAX;
int8_t x371 = INT8_MIN;
int32_t t90 = 266194;
volatile int64_t t93 = -2167532604526652297LL;
int8_t x393 = INT8_MIN;
int16_t x402 = -77;
int64_t x408 = -64421599569562887LL;
uint64_t x415 = UINT64_MAX;
int32_t x416 = -1;
volatile int8_t x417 = 1;
int32_t x421 = -30655;
volatile int32_t x435 = INT32_MIN;
volatile uint32_t x438 = UINT32_MAX;
int8_t x439 = 36;
static int64_t x445 = INT64_MIN;
volatile int64_t x448 = -2812132466833718LL;
int64_t t107 = 23292571794933284LL;
uint16_t x453 = 6184U;
volatile uint16_t x460 = UINT16_MAX;
uint8_t x472 = 1U;
uint16_t x479 = 10U;
uint32_t x482 = 1U;
int16_t x489 = INT16_MAX;
volatile uint32_t x490 = 177538744U;
static int32_t x494 = INT32_MIN;
static volatile uint16_t x496 = 1U;
int64_t x497 = INT64_MIN;
static int16_t x498 = 108;
volatile int32_t x507 = INT32_MIN;
int8_t x508 = INT8_MAX;
uint32_t x513 = UINT32_MAX;
volatile uint8_t x522 = 0U;
volatile int16_t x525 = -1;
uint32_t x529 = UINT32_MAX;
static uint8_t x530 = UINT8_MAX;
int16_t x543 = INT16_MIN;
static int64_t x549 = -488601729LL;
int64_t x554 = -262957456LL;
int8_t x557 = -36;
int16_t x561 = INT16_MAX;
uint8_t x566 = UINT8_MAX;
static int8_t x571 = INT8_MIN;
volatile int8_t x572 = INT8_MAX;
volatile int32_t t137 = 238;
volatile uint8_t x579 = UINT8_MAX;
static uint64_t t140 = 11741531133436LLU;
int32_t t141 = 4453;
uint8_t x590 = UINT8_MAX;
int32_t x592 = INT32_MIN;
int16_t x595 = INT16_MAX;
uint32_t x597 = 1U;
int32_t x598 = INT32_MAX;
uint32_t t144 = 1926U;
uint64_t x606 = 1845247663098565LLU;
int64_t x610 = -1LL;
int64_t x612 = INT64_MAX;
static int32_t t147 = -22652043;
int16_t x625 = INT16_MIN;
uint16_t x631 = 23U;
int64_t x633 = -47515792LL;
uint32_t x636 = 34352U;
static int16_t x638 = -2;
int8_t x640 = -2;
volatile int64_t x653 = -3300LL;
int64_t x654 = INT64_MIN;
int16_t x664 = INT16_MIN;
static volatile int32_t t160 = -2;
int16_t x666 = 9148;
int64_t x672 = INT64_MIN;
static volatile int32_t t163 = -312358;
volatile int64_t x682 = INT64_MIN;
static volatile uint8_t x684 = UINT8_MAX;
uint16_t x688 = 11U;
int16_t x693 = INT16_MIN;
static int16_t x697 = INT16_MIN;
int8_t x698 = INT8_MIN;
int16_t x700 = INT16_MIN;
volatile int64_t x711 = 11865671280102607LL;
uint64_t x715 = 7LLU;
uint8_t x730 = 0U;
volatile int32_t t176 = -15618;
int64_t x739 = -1LL;
int32_t t178 = -1;
static int64_t x746 = INT64_MAX;
volatile int32_t t180 = -1679;
int64_t x751 = INT64_MIN;
uint16_t x752 = 4U;
int64_t x759 = -1LL;
uint8_t x761 = 2U;
int16_t x769 = INT16_MIN;
uint64_t x771 = 611LLU;
volatile int64_t x776 = 922420698LL;
int16_t x782 = -1;
int64_t x786 = INT64_MIN;
uint32_t x787 = UINT32_MAX;
int64_t x791 = -2200LL;
uint32_t x793 = 4U;
static int8_t x798 = -24;
int16_t x799 = INT16_MAX;
static volatile uint64_t t193 = 10282173618288914LLU;
int64_t x806 = -1LL;
uint32_t x812 = 7235U;
static volatile int8_t x818 = 1;
static int16_t x820 = INT16_MAX;
int32_t t196 = 21890;
uint16_t x822 = 227U;
int32_t t198 = -683864677;
volatile int64_t x829 = INT64_MIN;
int32_t x831 = INT32_MIN;
static volatile int64_t t199 = -916663LL;


void f0(void) {
    	static volatile int16_t x2 = INT16_MAX;
	uint32_t x3 = 15283U;
	static int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = -120;

    t0 = (x1%((x2<=x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -3;
	static int64_t x6 = INT64_MIN;
	uint16_t x7 = UINT16_MAX;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 3119494;

    t1 = (x5%((x6<=x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = -1LL;
	int64_t x12 = -3259853788LL;
	static int32_t t2 = 230;

    t2 = (x9%((x10<=x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint8_t x14 = 1U;
	int32_t x15 = -1;
	static int32_t x16 = -230064874;
	int64_t t3 = -9398LL;

    t3 = (x13%((x14<=x15)!=x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 10U;
	int32_t x18 = -14379;
	static volatile int32_t t4 = -40717;

    t4 = (x17%((x18<=x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	uint32_t x22 = 225U;
	uint8_t x23 = UINT8_MAX;

    t5 = (x21%((x22<=x23)!=x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 1U;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	volatile uint16_t x28 = 19994U;

    t6 = (x25%((x26<=x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MAX;
	volatile int8_t x30 = INT8_MIN;
	volatile int8_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -57237108;

    t7 = (x29%((x30<=x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = -47;
	volatile uint8_t x35 = 1U;
	volatile uint64_t x36 = 334971746320LLU;
	static int64_t t8 = 1LL;

    t8 = (x33%((x34<=x35)!=x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	int32_t x39 = -3;
	volatile int32_t t9 = -280;

    t9 = (x37%((x38<=x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x42 = -1LL;
	static volatile int32_t x43 = -101779;
	int32_t x44 = -79822054;

    t10 = (x41%((x42<=x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MAX;
	static int16_t x47 = 1;
	int8_t x48 = -4;

    t11 = (x45%((x46<=x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = INT16_MIN;
	volatile int16_t x51 = 0;
	int64_t t12 = 0LL;

    t12 = (x49%((x50<=x51)!=x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MIN;
	uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 241189791011409006LLU;
	volatile int32_t t13 = -8305;

    t13 = (x53%((x54<=x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	uint64_t x59 = 324439090166577265LLU;
	int8_t x60 = -4;
	int32_t t14 = 19742070;

    t14 = (x57%((x58<=x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 6401U;
	volatile uint16_t x63 = UINT16_MAX;
	int16_t x64 = -30;
	int32_t t15 = -7215263;

    t15 = (x61%((x62<=x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	uint8_t x66 = 50U;
	volatile int32_t t16 = 3;

    t16 = (x65%((x66<=x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -147;
	int32_t x70 = 3447818;
	int16_t x71 = -4598;
	int8_t x72 = -41;
	int32_t t17 = 1987600;

    t17 = (x69%((x70<=x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 31096U;
	int32_t t18 = -57674;

    t18 = (x73%((x74<=x75)!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 353U;
	int8_t x79 = -49;
	int8_t x80 = INT8_MAX;
	volatile int64_t t19 = -115698858247556LL;

    t19 = (x77%((x78<=x79)!=x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 3544;
	static volatile int8_t x82 = INT8_MIN;
	int64_t x84 = INT64_MAX;
	int32_t t20 = 0;

    t20 = (x81%((x82<=x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = -7272;
	volatile int64_t t21 = -18918380974LL;

    t21 = (x85%((x86<=x87)!=x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1662;
	uint64_t x90 = UINT64_MAX;
	static int16_t x91 = -1;
	uint64_t x92 = 2051081735072210LLU;
	int32_t t22 = -37243540;

    t22 = (x89%((x90<=x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -122;
	uint16_t x95 = 1310U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 1;

    t23 = (x93%((x94<=x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = 15423;
	volatile int32_t x99 = -1;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -228;

    t24 = (x97%((x98<=x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x102 = INT64_MIN;
	uint64_t x103 = 4392090027LLU;
	volatile int8_t x104 = INT8_MAX;
	int32_t t25 = -47409412;

    t25 = (x101%((x102<=x103)!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x107 = 730846226118LL;
	volatile int32_t x108 = INT32_MAX;
	static volatile int32_t t26 = 13;

    t26 = (x105%((x106<=x107)!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -56;
	int32_t x110 = INT32_MAX;
	int8_t x111 = INT8_MAX;
	volatile int64_t x112 = -4045015LL;
	static volatile int32_t t27 = 51896;

    t27 = (x109%((x110<=x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = UINT16_MAX;
	int16_t x115 = 0;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t28 = -12145740676LL;

    t28 = (x113%((x114<=x115)!=x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	static uint64_t x118 = 101405276841409914LLU;
	int64_t x119 = INT64_MIN;
	int64_t x120 = -471529674825198LL;
	int32_t t29 = -5;

    t29 = (x117%((x118<=x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = -2;
	uint8_t x122 = 23U;
	volatile int8_t x124 = -1;
	int32_t t30 = 127355647;

    t30 = (x121%((x122<=x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 126U;
	int8_t x127 = -20;
	int32_t t31 = -43;

    t31 = (x125%((x126<=x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -10;
	int32_t x130 = INT32_MAX;
	uint8_t x131 = 0U;
	volatile uint64_t x132 = 2595435439846921LLU;
	volatile int32_t t32 = 1866;

    t32 = (x129%((x130<=x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -1319519211103237LL;
	int16_t x134 = 1755;
	uint8_t x135 = 104U;
	int32_t x136 = -20467785;
	int64_t t33 = 1613428954LL;

    t33 = (x133%((x134<=x135)!=x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = 5752U;
	int16_t x140 = INT16_MAX;
	int64_t t34 = 16493716LL;

    t34 = (x137%((x138<=x139)!=x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x143 = -1LL;
	int32_t t35 = 28;

    t35 = (x141%((x142<=x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 1106967424LL;
	int8_t x146 = 19;
	int32_t x147 = INT32_MAX;
	int8_t x148 = -47;
	static int64_t t36 = -816066616LL;

    t36 = (x145%((x146<=x147)!=x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MAX;
	static int8_t x150 = INT8_MIN;
	int16_t x151 = -49;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -681285581;

    t37 = (x149%((x150<=x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -121727793;

    t38 = (x153%((x154<=x155)!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	int8_t x158 = 0;
	static int64_t x160 = INT64_MAX;
	int32_t t39 = 457;

    t39 = (x157%((x158<=x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -615042758;
	int64_t x163 = -1LL;
	int32_t x164 = 4531682;

    t40 = (x161%((x162<=x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -1338974;

    t41 = (x165%((x166<=x167)!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x171 = 0;
	int32_t x172 = 100;

    t42 = (x169%((x170<=x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MAX;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t43 = 54911LLU;

    t43 = (x173%((x174<=x175)!=x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	static int32_t t44 = -2;

    t44 = (x181%((x182<=x183)!=x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t45 = 209373946;

    t45 = (x185%((x186<=x187)!=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x189 = 1U;
	int64_t x190 = INT64_MAX;
	int8_t x191 = 0;
	volatile uint8_t x192 = 2U;
	volatile int32_t t46 = 1;

    t46 = (x189%((x190<=x191)!=x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = 5085375026894LL;
	int64_t x195 = INT64_MIN;
	volatile uint64_t x196 = 23854297438176787LLU;
	volatile int64_t t47 = -1041432887656578LL;

    t47 = (x193%((x194<=x195)!=x196));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = 17198LL;
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int64_t t48 = -6695382255679LL;

    t48 = (x197%((x198<=x199)!=x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x201 = 968U;
	static uint64_t x202 = 540221702020724LLU;
	static uint64_t x204 = 463091301152LLU;
	static int32_t t49 = -1035253;

    t49 = (x201%((x202<=x203)!=x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 2U;
	uint16_t x207 = 5U;

    t50 = (x205%((x206<=x207)!=x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = INT32_MIN;
	uint16_t x210 = 2U;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	static int32_t t51 = -3;

    t51 = (x209%((x210<=x211)!=x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x213 = INT64_MIN;
	int32_t x216 = -454437;
	static volatile int64_t t52 = 56443121470LL;

    t52 = (x213%((x214<=x215)!=x216));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	int32_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	int32_t t53 = 3;

    t53 = (x221%((x222<=x223)!=x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	static int64_t x226 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = INT16_MIN;
	static volatile uint64_t t54 = 1LLU;

    t54 = (x225%((x226<=x227)!=x228));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int8_t x231 = -15;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = -23;

    t55 = (x229%((x230<=x231)!=x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x233 = INT8_MIN;
	volatile uint8_t x234 = 49U;
	int32_t x235 = -1;
	static uint64_t x236 = 5006237987678782LLU;

    t56 = (x233%((x234<=x235)!=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = 230U;
	int64_t x238 = -5783782460LL;
	static int64_t x240 = -755198070LL;
	volatile uint32_t t57 = 2490U;

    t57 = (x237%((x238<=x239)!=x240));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = -1;
	volatile int64_t x242 = INT64_MAX;
	int16_t x243 = -15174;
	static int64_t x244 = -1457360751444781LL;
	volatile int32_t t58 = 3;

    t58 = (x241%((x242<=x243)!=x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MAX;
	int32_t x247 = 110222;
	volatile uint32_t x248 = 1863755U;
	int64_t t59 = -75074602LL;

    t59 = (x245%((x246<=x247)!=x248));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int32_t x251 = -1;
	int16_t x252 = -1;
	volatile int32_t t60 = -13;

    t60 = (x249%((x250<=x251)!=x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x253 = UINT8_MAX;
	volatile int64_t x254 = INT64_MAX;
	volatile int32_t t61 = 15544498;

    t61 = (x253%((x254<=x255)!=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x258 = INT8_MAX;
	static int64_t x259 = INT64_MIN;
	int32_t x260 = 5893;
	volatile int64_t t62 = -64308715236LL;

    t62 = (x257%((x258<=x259)!=x260));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	static volatile int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 98063108997LLU;
	int32_t t63 = 182;

    t63 = (x261%((x262<=x263)!=x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	int64_t t64 = -577078625LL;

    t64 = (x265%((x266<=x267)!=x268));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = 257214588;
	volatile int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MIN;
	int8_t x276 = -1;
	volatile int32_t t65 = 792;

    t65 = (x273%((x274<=x275)!=x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x277 = 2401U;
	static int64_t x278 = INT64_MIN;
	volatile int32_t x280 = -1;
	volatile uint32_t t66 = 194563U;

    t66 = (x277%((x278<=x279)!=x280));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = -1;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t67 = 119710;

    t67 = (x281%((x282<=x283)!=x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x285 = INT64_MIN;
	int8_t x286 = -1;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	volatile int64_t t68 = -90417LL;

    t68 = (x285%((x286<=x287)!=x288));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x290 = INT8_MAX;
	volatile int8_t x291 = INT8_MIN;
	int32_t t69 = -339115813;

    t69 = (x289%((x290<=x291)!=x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x293 = INT64_MAX;
	volatile uint64_t x294 = 10LLU;
	volatile int8_t x295 = 0;

    t70 = (x293%((x294<=x295)!=x296));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MAX;
	static volatile int64_t x300 = -11318983LL;
	int32_t t71 = -57834;

    t71 = (x297%((x298<=x299)!=x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = 0;
	static uint16_t x303 = 1U;
	static volatile uint64_t x304 = 2925LLU;
	int32_t t72 = 74;

    t72 = (x301%((x302<=x303)!=x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MIN;
	volatile int64_t x307 = INT64_MIN;
	static volatile int32_t x308 = -46707;
	uint32_t t73 = 205295U;

    t73 = (x305%((x306<=x307)!=x308));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 1767087126U;
	int64_t x310 = -1LL;
	uint64_t x311 = UINT64_MAX;
	volatile int8_t x312 = INT8_MAX;
	uint32_t t74 = 5U;

    t74 = (x309%((x310<=x311)!=x312));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -148552405;
	volatile int16_t x315 = -30;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t75 = -389274743;

    t75 = (x313%((x314<=x315)!=x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x317 = 268422257934301LLU;
	uint16_t x319 = 54U;
	static uint64_t t76 = 2123091537LLU;

    t76 = (x317%((x318<=x319)!=x320));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = 90889U;
	int32_t x322 = -283;
	uint32_t x323 = 44U;
	int32_t x324 = -87;

    t77 = (x321%((x322<=x323)!=x324));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = 295;
	int8_t x326 = -14;
	volatile int64_t x327 = -1LL;
	uint32_t x328 = 0U;
	int32_t t78 = -7;

    t78 = (x325%((x326<=x327)!=x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x330 = 13LLU;
	static int8_t x331 = -62;
	static int8_t x332 = INT8_MAX;
	volatile int64_t t79 = 501LL;

    t79 = (x329%((x330<=x331)!=x332));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MIN;
	static volatile uint32_t x335 = UINT32_MAX;
	int16_t x336 = -296;
	static volatile int64_t t80 = 129166783023LL;

    t80 = (x333%((x334<=x335)!=x336));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = 6;
	uint16_t x338 = 9U;
	volatile int32_t x339 = INT32_MIN;

    t81 = (x337%((x338<=x339)!=x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	static int64_t x343 = 62466783LL;
	static int8_t x344 = INT8_MIN;
	int32_t t82 = -4664;

    t82 = (x341%((x342<=x343)!=x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x345 = 12U;
	int32_t x346 = -1;
	volatile int16_t x347 = 1270;
	int32_t x348 = INT32_MAX;

    t83 = (x345%((x346<=x347)!=x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = 1U;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t84 = 910561;

    t84 = (x349%((x350<=x351)!=x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x353 = 1935132324380031470LLU;
	int8_t x354 = 0;
	int8_t x355 = 55;
	int16_t x356 = INT16_MAX;
	static volatile uint64_t t85 = 852493741LLU;

    t85 = (x353%((x354<=x355)!=x356));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = UINT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MAX;
	static int64_t x360 = INT64_MAX;

    t86 = (x357%((x358<=x359)!=x360));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = -55;
	uint16_t x362 = 472U;
	static int16_t x363 = 12;
	int8_t x364 = INT8_MAX;
	volatile int32_t t87 = 14080;

    t87 = (x361%((x362<=x363)!=x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = 1;
	int64_t x368 = INT64_MIN;
	volatile int32_t t88 = 5;

    t88 = (x365%((x366<=x367)!=x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x369 = 0U;
	uint64_t x370 = 98951LLU;
	volatile uint16_t x372 = 49U;
	int32_t t89 = 0;

    t89 = (x369%((x370<=x371)!=x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x373 = UINT8_MAX;
	static int16_t x374 = -1;
	int8_t x375 = -1;
	static int64_t x376 = -1LL;

    t90 = (x373%((x374<=x375)!=x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x377 = INT16_MAX;
	volatile int64_t x378 = 2586406266LL;
	int16_t x379 = -1;
	int32_t x380 = -11897875;
	static volatile int32_t t91 = 499444;

    t91 = (x377%((x378<=x379)!=x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 1371U;
	int16_t x384 = -1;
	volatile int32_t t92 = 179031339;

    t92 = (x381%((x382<=x383)!=x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = -1LL;
	uint32_t x386 = 1857975U;
	int8_t x387 = 9;
	uint8_t x388 = UINT8_MAX;

    t93 = (x385%((x386<=x387)!=x388));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = 14;
	uint8_t x390 = 3U;
	int16_t x391 = 14;
	uint16_t x392 = 1786U;
	int32_t t94 = 0;

    t94 = (x389%((x390<=x391)!=x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x394 = 103248U;
	int64_t x395 = 56LL;
	uint32_t x396 = UINT32_MAX;
	int32_t t95 = -198;

    t95 = (x393%((x394<=x395)!=x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x397 = 400U;
	static volatile uint16_t x398 = 3U;
	volatile uint64_t x399 = 1931774864LLU;
	int64_t x400 = INT64_MAX;
	uint32_t t96 = 4240U;

    t96 = (x397%((x398<=x399)!=x400));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x401 = 22174U;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = INT8_MIN;
	uint32_t t97 = 5119U;

    t97 = (x401%((x402<=x403)!=x404));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x405 = UINT8_MAX;
	volatile int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	volatile int32_t t98 = -246349;

    t98 = (x405%((x406<=x407)!=x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int32_t x411 = -27363789;
	int32_t x412 = -140;
	int32_t t99 = -674;

    t99 = (x409%((x410<=x411)!=x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = INT32_MAX;
	static int32_t x414 = INT32_MIN;
	static int32_t t100 = -958864438;

    t100 = (x413%((x414<=x415)!=x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x418 = 2084212889LLU;
	int64_t x419 = 2151LL;
	int8_t x420 = INT8_MIN;
	int32_t t101 = -1342231;

    t101 = (x417%((x418<=x419)!=x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x422 = UINT64_MAX;
	volatile int32_t x423 = INT32_MIN;
	uint16_t x424 = 32U;
	static volatile int32_t t102 = -15;

    t102 = (x421%((x422<=x423)!=x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x429 = 400U;
	volatile uint32_t x430 = 41531279U;
	int16_t x431 = INT16_MIN;
	static int16_t x432 = INT16_MIN;
	static volatile uint32_t t103 = 7U;

    t103 = (x429%((x430<=x431)!=x432));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x433 = 8U;
	uint32_t x434 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	int32_t t104 = -8499525;

    t104 = (x433%((x434<=x435)!=x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = INT8_MAX;
	volatile int8_t x440 = INT8_MIN;
	static int32_t t105 = -113305525;

    t105 = (x437%((x438<=x439)!=x440));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 1312733015733876LLU;
	volatile int16_t x443 = -1;
	int16_t x444 = 0;
	volatile uint32_t t106 = 16307383U;

    t106 = (x441%((x442<=x443)!=x444));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x446 = 173LL;
	static int16_t x447 = INT16_MIN;

    t107 = (x445%((x446<=x447)!=x448));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x449 = 5267U;
	uint32_t x450 = 10516U;
	int16_t x451 = 47;
	volatile uint16_t x452 = 504U;
	static uint32_t t108 = 2U;

    t108 = (x449%((x450<=x451)!=x452));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x454 = 0U;
	static volatile int64_t x455 = INT64_MIN;
	int8_t x456 = 9;
	int32_t t109 = -1;

    t109 = (x453%((x454<=x455)!=x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x457 = INT32_MIN;
	int8_t x458 = 0;
	static int32_t x459 = INT32_MAX;
	volatile int32_t t110 = 1943212;

    t110 = (x457%((x458<=x459)!=x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x461 = 0U;
	uint32_t x462 = UINT32_MAX;
	uint32_t x463 = 29U;
	static int32_t x464 = INT32_MIN;
	static uint32_t t111 = 4225U;

    t111 = (x461%((x462<=x463)!=x464));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = 4858;
	static int32_t x466 = 3126905;
	static uint64_t x467 = 502050LLU;
	uint32_t x468 = 72251U;
	static int32_t t112 = -56302292;

    t112 = (x465%((x466<=x467)!=x468));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x469 = UINT16_MAX;
	static uint16_t x470 = UINT16_MAX;
	volatile int8_t x471 = INT8_MIN;
	volatile int32_t t113 = -10058397;

    t113 = (x469%((x470<=x471)!=x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x473 = INT16_MAX;
	int8_t x474 = -1;
	uint64_t x475 = 3680301375229770087LLU;
	int16_t x476 = 4;
	int32_t t114 = -438113;

    t114 = (x473%((x474<=x475)!=x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = 3LL;
	volatile uint8_t x478 = 14U;
	static int64_t x480 = INT64_MIN;
	volatile int64_t t115 = 20LL;

    t115 = (x477%((x478<=x479)!=x480));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = 0;
	int8_t x483 = -30;
	int16_t x484 = -12488;
	int32_t t116 = -23242610;

    t116 = (x481%((x482<=x483)!=x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	int32_t t117 = 5851020;

    t117 = (x489%((x490<=x491)!=x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x493 = 90697443;
	uint32_t x495 = 0U;
	volatile int32_t t118 = 526293373;

    t118 = (x493%((x494<=x495)!=x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x499 = UINT16_MAX;
	static volatile uint64_t x500 = UINT64_MAX;
	int64_t t119 = -6962511452291875LL;

    t119 = (x497%((x498<=x499)!=x500));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x501 = INT64_MIN;
	volatile uint64_t x502 = 169580574472770LLU;
	volatile int8_t x503 = -1;
	volatile int64_t x504 = 2060LL;
	int64_t t120 = 9215777055571LL;

    t120 = (x501%((x502<=x503)!=x504));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x505 = 24371U;
	uint16_t x506 = 2U;
	int32_t t121 = -12356604;

    t121 = (x505%((x506<=x507)!=x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = -1795468244669LL;
	static int16_t x510 = INT16_MAX;
	int16_t x511 = -1;
	int8_t x512 = INT8_MAX;
	int64_t t122 = -278LL;

    t122 = (x509%((x510<=x511)!=x512));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x514 = -1;
	int8_t x515 = INT8_MAX;
	uint64_t x516 = UINT64_MAX;
	static uint32_t t123 = 328U;

    t123 = (x513%((x514<=x515)!=x516));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x517 = 13922U;
	uint64_t x518 = 29803084LLU;
	uint8_t x519 = 3U;
	volatile uint8_t x520 = UINT8_MAX;
	uint32_t t124 = 40513076U;

    t124 = (x517%((x518<=x519)!=x520));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x521 = INT64_MAX;
	int64_t x523 = -2403086LL;
	uint16_t x524 = 74U;
	int64_t t125 = 9LL;

    t125 = (x521%((x522<=x523)!=x524));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x526 = UINT8_MAX;
	static uint16_t x527 = 6938U;
	static volatile int32_t x528 = INT32_MIN;
	static volatile int32_t t126 = -3981289;

    t126 = (x525%((x526<=x527)!=x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x531 = INT16_MIN;
	int16_t x532 = -11486;
	uint32_t t127 = 98253577U;

    t127 = (x529%((x530<=x531)!=x532));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	static volatile int32_t x534 = 40229;
	uint16_t x535 = 839U;
	uint16_t x536 = 3811U;
	int64_t t128 = -80LL;

    t128 = (x533%((x534<=x535)!=x536));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = 77U;
	int64_t x538 = INT64_MIN;
	volatile uint32_t x539 = 435U;
	uint64_t x540 = 16805255LLU;
	volatile int32_t t129 = 0;

    t129 = (x537%((x538<=x539)!=x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x541 = 0;
	int64_t x542 = INT64_MIN;
	int64_t x544 = 410922955033322043LL;
	volatile int32_t t130 = 213212000;

    t130 = (x541%((x542<=x543)!=x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x545 = 6U;
	volatile int16_t x546 = -1;
	static int8_t x547 = INT8_MIN;
	volatile int64_t x548 = INT64_MIN;
	int32_t t131 = -31821;

    t131 = (x545%((x546<=x547)!=x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x550 = INT16_MAX;
	uint8_t x551 = 82U;
	int8_t x552 = INT8_MIN;
	int64_t t132 = -1229555837813160970LL;

    t132 = (x549%((x550<=x551)!=x552));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -4122247269LL;
	volatile uint64_t x555 = 6266355400009352LLU;
	int16_t x556 = -4639;
	int64_t t133 = -1212435476020LL;

    t133 = (x553%((x554<=x555)!=x556));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x558 = INT32_MIN;
	static volatile uint8_t x559 = 0U;
	uint64_t x560 = UINT64_MAX;
	static volatile int32_t t134 = -18344857;

    t134 = (x557%((x558<=x559)!=x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x562 = 381U;
	static int8_t x563 = -1;
	static int32_t x564 = -1;
	int32_t t135 = 1;

    t135 = (x561%((x562<=x563)!=x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x565 = UINT8_MAX;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 24U;
	int32_t t136 = -17549801;

    t136 = (x565%((x566<=x567)!=x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x569 = -42;
	int8_t x570 = -1;

    t137 = (x569%((x570<=x571)!=x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x573 = 31262771616LLU;
	volatile int16_t x574 = -25;
	static int64_t x575 = -1LL;
	static int16_t x576 = INT16_MAX;
	uint64_t t138 = 29623522008LLU;

    t138 = (x573%((x574<=x575)!=x576));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int8_t x578 = 1;
	int16_t x580 = -403;
	int32_t t139 = -7330493;

    t139 = (x577%((x578<=x579)!=x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x581 = 1309119LLU;
	volatile uint8_t x582 = UINT8_MAX;
	int64_t x583 = INT64_MIN;
	static volatile uint16_t x584 = 12738U;

    t140 = (x581%((x582<=x583)!=x584));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MIN;
	uint8_t x586 = 11U;
	volatile uint32_t x587 = UINT32_MAX;
	int16_t x588 = INT16_MAX;

    t141 = (x585%((x586<=x587)!=x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x589 = 888U;
	static uint32_t x591 = UINT32_MAX;
	int32_t t142 = 7220;

    t142 = (x589%((x590<=x591)!=x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x593 = 1;
	static int8_t x594 = INT8_MIN;
	int8_t x596 = -11;
	volatile int32_t t143 = -24828437;

    t143 = (x593%((x594<=x595)!=x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x599 = UINT16_MAX;
	uint32_t x600 = UINT32_MAX;

    t144 = (x597%((x598<=x599)!=x600));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x601 = -2932;
	int8_t x602 = 0;
	volatile uint32_t x603 = 1663403841U;
	static volatile int16_t x604 = -903;
	volatile int32_t t145 = 200;

    t145 = (x601%((x602<=x603)!=x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x605 = UINT32_MAX;
	static int64_t x607 = INT64_MIN;
	volatile int16_t x608 = -1;
	static uint32_t t146 = 1232U;

    t146 = (x605%((x606<=x607)!=x608));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = INT16_MIN;
	uint64_t x611 = UINT64_MAX;

    t147 = (x609%((x610<=x611)!=x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x613 = INT8_MIN;
	int32_t x614 = -384;
	static int16_t x615 = -1;
	int16_t x616 = INT16_MAX;
	int32_t t148 = 207019;

    t148 = (x613%((x614<=x615)!=x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = 23100U;
	int16_t x618 = -1;
	int16_t x619 = 14797;
	int16_t x620 = INT16_MIN;
	int32_t t149 = -245084;

    t149 = (x617%((x618<=x619)!=x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x621 = INT16_MIN;
	volatile int32_t x622 = -1;
	int64_t x623 = -1LL;
	static uint16_t x624 = 64U;
	volatile int32_t t150 = -52469;

    t150 = (x621%((x622<=x623)!=x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x626 = INT64_MAX;
	uint64_t x627 = UINT64_MAX;
	volatile int8_t x628 = -53;
	static int32_t t151 = -3726;

    t151 = (x625%((x626<=x627)!=x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MIN;
	uint16_t x630 = UINT16_MAX;
	int32_t x632 = -1;
	volatile int32_t t152 = 23650055;

    t152 = (x629%((x630<=x631)!=x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x634 = 0;
	int8_t x635 = INT8_MIN;
	volatile int64_t t153 = -2176330059912835994LL;

    t153 = (x633%((x634<=x635)!=x636));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x637 = -565451;
	static uint64_t x639 = UINT64_MAX;
	volatile int32_t t154 = -984;

    t154 = (x637%((x638<=x639)!=x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = INT16_MAX;
	uint32_t x642 = UINT32_MAX;
	int16_t x643 = INT16_MIN;
	int16_t x644 = INT16_MAX;
	volatile int32_t t155 = 1;

    t155 = (x641%((x642<=x643)!=x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = INT32_MIN;
	volatile uint8_t x646 = 1U;
	int64_t x647 = INT64_MIN;
	int32_t x648 = -1;
	volatile int32_t t156 = -84523453;

    t156 = (x645%((x646<=x647)!=x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MIN;
	static uint16_t x651 = 203U;
	int32_t x652 = INT32_MIN;
	volatile int64_t t157 = 384035642LL;

    t157 = (x649%((x650<=x651)!=x652));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x655 = -1;
	static int64_t x656 = INT64_MAX;
	static volatile int64_t t158 = -8083507551LL;

    t158 = (x653%((x654<=x655)!=x656));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x657 = -342;
	int8_t x658 = INT8_MIN;
	volatile int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;
	int32_t t159 = 7492757;

    t159 = (x657%((x658<=x659)!=x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x661 = -1992;
	int64_t x662 = INT64_MIN;
	int64_t x663 = -1963180440414356LL;

    t160 = (x661%((x662<=x663)!=x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = -1LL;
	volatile int32_t x667 = INT32_MIN;
	int32_t x668 = -1;
	static int64_t t161 = -154026503149LL;

    t161 = (x665%((x666<=x667)!=x668));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x669 = INT32_MAX;
	uint8_t x670 = 3U;
	int8_t x671 = INT8_MIN;
	volatile int32_t t162 = -717;

    t162 = (x669%((x670<=x671)!=x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x673 = 82U;
	volatile int16_t x674 = 4354;
	int32_t x675 = INT32_MAX;
	int32_t x676 = INT32_MAX;

    t163 = (x673%((x674<=x675)!=x676));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x677 = INT8_MIN;
	volatile uint32_t x678 = 61791424U;
	uint16_t x679 = UINT16_MAX;
	volatile uint32_t x680 = UINT32_MAX;
	int32_t t164 = -765;

    t164 = (x677%((x678<=x679)!=x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x681 = UINT16_MAX;
	static int8_t x683 = -1;
	volatile int32_t t165 = 1397449;

    t165 = (x681%((x682<=x683)!=x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x685 = 3;
	static volatile int64_t x686 = -13LL;
	static int16_t x687 = INT16_MAX;
	volatile int32_t t166 = -11;

    t166 = (x685%((x686<=x687)!=x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x694 = 112;
	int16_t x695 = INT16_MIN;
	volatile int8_t x696 = -39;
	volatile int32_t t167 = 859;

    t167 = (x693%((x694<=x695)!=x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x699 = -1;
	volatile int32_t t168 = -1012964989;

    t168 = (x697%((x698<=x699)!=x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = -1;
	int32_t x702 = INT32_MIN;
	volatile uint64_t x703 = 16LLU;
	int8_t x704 = 3;
	int32_t t169 = 0;

    t169 = (x701%((x702<=x703)!=x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = INT16_MAX;
	uint8_t x706 = 44U;
	int32_t x707 = INT32_MIN;
	static int64_t x708 = INT64_MIN;
	static volatile int32_t t170 = 736540;

    t170 = (x705%((x706<=x707)!=x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x709 = 0U;
	int8_t x710 = INT8_MAX;
	int16_t x712 = -42;
	int32_t t171 = -138;

    t171 = (x709%((x710<=x711)!=x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x713 = INT8_MIN;
	int64_t x714 = INT64_MIN;
	int8_t x716 = INT8_MIN;
	static volatile int32_t t172 = -9934;

    t172 = (x713%((x714<=x715)!=x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x717 = INT16_MAX;
	static uint8_t x718 = 2U;
	int64_t x719 = INT64_MAX;
	int64_t x720 = INT64_MAX;
	static int32_t t173 = 44;

    t173 = (x717%((x718<=x719)!=x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x721 = 2U;
	int16_t x722 = -2047;
	int16_t x723 = INT16_MIN;
	int32_t x724 = 844;
	static int32_t t174 = -40003035;

    t174 = (x721%((x722<=x723)!=x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x725 = UINT64_MAX;
	int8_t x726 = INT8_MIN;
	uint16_t x727 = 4776U;
	static int32_t x728 = 0;
	volatile uint64_t t175 = 0LLU;

    t175 = (x725%((x726<=x727)!=x728));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x729 = INT16_MIN;
	uint8_t x731 = 5U;
	uint32_t x732 = 44U;

    t176 = (x729%((x730<=x731)!=x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x733 = 56U;
	uint16_t x734 = 11916U;
	volatile uint8_t x735 = 32U;
	volatile uint16_t x736 = 6412U;
	volatile int32_t t177 = -1687;

    t177 = (x733%((x734<=x735)!=x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x737 = INT32_MIN;
	static int8_t x738 = INT8_MAX;
	static uint64_t x740 = 20938LLU;

    t178 = (x737%((x738<=x739)!=x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x741 = INT64_MIN;
	uint64_t x742 = UINT64_MAX;
	static volatile int16_t x743 = -6;
	uint64_t x744 = 211167351588317307LLU;
	int64_t t179 = 51167239138866512LL;

    t179 = (x741%((x742<=x743)!=x744));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x745 = -83;
	int64_t x747 = INT64_MIN;
	volatile int16_t x748 = INT16_MIN;

    t180 = (x745%((x746<=x747)!=x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x749 = -1;
	uint32_t x750 = UINT32_MAX;
	int32_t t181 = -1018369875;

    t181 = (x749%((x750<=x751)!=x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = INT32_MIN;
	static volatile int32_t x755 = 26;
	static uint32_t x756 = 41055U;
	int32_t t182 = -501;

    t182 = (x753%((x754<=x755)!=x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	int8_t x758 = -1;
	int8_t x760 = -1;
	static volatile uint32_t t183 = 5U;

    t183 = (x757%((x758<=x759)!=x760));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x762 = UINT64_MAX;
	uint16_t x763 = UINT16_MAX;
	uint64_t x764 = 3258598808311LLU;
	volatile int32_t t184 = 14417752;

    t184 = (x761%((x762<=x763)!=x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x765 = 4329U;
	static int32_t x766 = -394533736;
	int16_t x767 = -1;
	static volatile int16_t x768 = -1;
	int32_t t185 = 4;

    t185 = (x765%((x766<=x767)!=x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x770 = 2190;
	int8_t x772 = INT8_MIN;
	int32_t t186 = 191001;

    t186 = (x769%((x770<=x771)!=x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = -1;
	int16_t x774 = 0;
	static uint64_t x775 = 142LLU;
	int32_t t187 = 16;

    t187 = (x773%((x774<=x775)!=x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = 0;
	int16_t x778 = 1;
	volatile uint8_t x779 = 3U;
	uint8_t x780 = 39U;
	int32_t t188 = -1;

    t188 = (x777%((x778<=x779)!=x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = 94019161LL;
	uint8_t x783 = 19U;
	uint16_t x784 = 176U;
	volatile int64_t t189 = 8550793130472LL;

    t189 = (x781%((x782<=x783)!=x784));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	int32_t x788 = -1;
	static volatile uint32_t t190 = 61056U;

    t190 = (x785%((x786<=x787)!=x788));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x789 = UINT32_MAX;
	int8_t x790 = INT8_MIN;
	uint32_t x792 = UINT32_MAX;
	uint32_t t191 = 13280527U;

    t191 = (x789%((x790<=x791)!=x792));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x794 = 476473U;
	int8_t x795 = -6;
	uint8_t x796 = UINT8_MAX;
	uint32_t t192 = 4U;

    t192 = (x793%((x794<=x795)!=x796));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x797 = 1427LLU;
	volatile uint16_t x800 = 4U;

    t193 = (x797%((x798<=x799)!=x800));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x805 = UINT8_MAX;
	static int32_t x807 = INT32_MIN;
	static int64_t x808 = 1LL;
	int32_t t194 = 97582457;

    t194 = (x805%((x806<=x807)!=x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x809 = UINT32_MAX;
	int8_t x810 = INT8_MIN;
	uint32_t x811 = 135U;
	volatile uint32_t t195 = 11788U;

    t195 = (x809%((x810<=x811)!=x812));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x817 = UINT8_MAX;
	static uint16_t x819 = 82U;

    t196 = (x817%((x818<=x819)!=x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = -1;
	uint32_t x823 = 2233U;
	uint64_t x824 = 169LLU;
	volatile int32_t t197 = -989;

    t197 = (x821%((x822<=x823)!=x824));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x825 = INT32_MIN;
	uint64_t x826 = UINT64_MAX;
	uint16_t x827 = 6071U;
	int16_t x828 = INT16_MAX;

    t198 = (x825%((x826<=x827)!=x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x830 = INT16_MIN;
	int16_t x832 = -1;

    t199 = (x829%((x830<=x831)!=x832));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

