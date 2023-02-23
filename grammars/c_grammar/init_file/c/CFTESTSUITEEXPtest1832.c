
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

static int64_t x2 = -1LL;
static uint16_t x4 = 5U;
int32_t x12 = INT32_MAX;
static int8_t x28 = INT8_MAX;
int8_t x29 = -2;
int64_t t7 = 49339064LL;
uint32_t x42 = 5633U;
uint8_t x44 = 1U;
uint64_t x48 = 13LLU;
volatile int64_t x49 = -45252533159726LL;
int64_t x53 = 1056223106960498375LL;
int64_t t13 = 8039LL;
static int16_t x57 = INT16_MIN;
int16_t x60 = -1;
uint64_t x63 = UINT64_MAX;
int16_t x77 = 102;
uint16_t x84 = UINT16_MAX;
volatile int64_t t19 = 2119431904LL;
uint8_t x93 = 13U;
int64_t x94 = INT64_MAX;
int8_t x100 = INT8_MIN;
volatile int64_t x104 = INT64_MIN;
uint64_t x108 = 3369443835040477LLU;
uint64_t x111 = UINT64_MAX;
int32_t x117 = INT32_MIN;
volatile uint64_t t29 = 44486LLU;
int8_t x126 = INT8_MIN;
uint8_t x132 = 2U;
uint64_t x133 = UINT64_MAX;
int32_t x138 = INT32_MIN;
int8_t x142 = 1;
int32_t x147 = INT32_MIN;
volatile uint32_t t38 = 1869U;
static uint8_t x165 = 101U;
int64_t x168 = INT64_MIN;
int64_t t40 = 31LL;
int64_t x169 = -4438955857813505290LL;
uint64_t x171 = 97463LLU;
int32_t x182 = INT32_MAX;
static int32_t x187 = INT32_MIN;
volatile uint8_t x193 = UINT8_MAX;
int32_t t47 = -115;
int64_t x202 = -1LL;
int64_t t49 = -8407826660038843LL;
uint32_t x205 = 17938954U;
static int8_t x207 = INT8_MIN;
uint64_t x209 = 4089047809272994014LLU;
uint64_t t51 = 213499128673LLU;
int64_t x213 = 59275300340LL;
static int16_t x215 = INT16_MIN;
int16_t x221 = 1;
static int32_t x223 = -1;
int32_t x228 = INT32_MIN;
int16_t x230 = 12310;
int64_t x231 = -6673487972LL;
int16_t x247 = 6;
int64_t x258 = -1772487LL;
int32_t x261 = INT32_MIN;
int8_t x270 = INT8_MAX;
volatile uint64_t t67 = 3258793986LLU;
uint16_t x278 = 19200U;
int16_t x279 = 565;
volatile int64_t x280 = INT64_MAX;
uint16_t x282 = 21932U;
int32_t x286 = INT32_MAX;
static uint64_t x294 = 159592035257272469LLU;
int32_t x303 = INT32_MIN;
int32_t t76 = -2;
int32_t x315 = -252575251;
int32_t t77 = -296542830;
static uint8_t x320 = 10U;
volatile uint32_t t78 = 180720U;
volatile int64_t x321 = -1LL;
int16_t x327 = INT16_MIN;
uint64_t x336 = UINT64_MAX;
int64_t x337 = INT64_MAX;
int32_t x340 = -1;
static int32_t x341 = INT32_MIN;
int64_t x344 = -1LL;
uint64_t x350 = UINT64_MAX;
int32_t t87 = 3931171;
uint64_t x361 = 448LLU;
uint64_t t89 = 19823346356LLU;
uint64_t x369 = 2126334767305LLU;
int32_t x371 = -1;
volatile int64_t x377 = 1127539669516013673LL;
int8_t x378 = INT8_MIN;
int16_t x384 = INT16_MAX;
uint32_t x389 = 47U;
int16_t x391 = INT16_MIN;
int32_t x404 = INT32_MAX;
uint64_t x409 = UINT64_MAX;
volatile uint32_t x413 = 367375U;
int8_t x414 = INT8_MIN;
volatile int8_t x416 = INT8_MIN;
static int8_t x419 = INT8_MIN;
static volatile uint32_t t104 = 19U;
int64_t x429 = INT64_MIN;
int64_t x430 = INT64_MIN;
int64_t t106 = 1747LL;
int64_t t108 = -377978790LL;
static int8_t x445 = -3;
volatile uint8_t x448 = 84U;
int8_t x464 = 26;
int16_t x466 = INT16_MAX;
int8_t x489 = 36;
static volatile uint32_t t123 = 230208397U;
uint64_t x525 = UINT64_MAX;
static uint16_t x526 = UINT16_MAX;
static volatile uint32_t t130 = 1U;
int8_t x533 = -1;
static uint32_t t132 = 1643465U;
volatile int8_t x544 = INT8_MAX;
int32_t t135 = 7746;
int32_t x553 = -1;
uint32_t x554 = UINT32_MAX;
int64_t x555 = -1760581LL;
volatile int64_t x558 = INT64_MIN;
volatile int16_t x561 = -5;
int64_t x564 = INT64_MIN;
static int64_t x566 = 2204159207661LL;
volatile int32_t x568 = -3829;
int8_t x569 = -1;
int64_t x573 = INT64_MIN;
int32_t x577 = -102;
int16_t x580 = 7198;
volatile int32_t t142 = 1463;
int64_t x583 = 2LL;
int32_t x591 = -1;
int16_t x594 = -630;
int64_t t147 = -137653959LL;
uint16_t x602 = UINT16_MAX;
static int8_t x604 = INT8_MIN;
int32_t x605 = INT32_MAX;
volatile int32_t t149 = 2446;
int16_t x609 = -1;
int8_t x610 = INT8_MIN;
int16_t x615 = INT16_MIN;
static int16_t x637 = INT16_MIN;
int16_t x643 = -147;
volatile int16_t x649 = -1;
int64_t x650 = INT64_MIN;
int64_t x659 = INT64_MAX;
volatile int8_t x660 = 2;
static volatile int64_t t162 = -23343999073030891LL;
volatile int16_t x671 = INT16_MAX;
uint32_t x675 = 14339U;
int64_t t166 = 1805LL;
int8_t x682 = 23;
int16_t x683 = INT16_MIN;
static int32_t x686 = INT32_MIN;
static int32_t x690 = INT32_MIN;
uint8_t x692 = UINT8_MAX;
int32_t x693 = INT32_MIN;
int32_t x695 = INT32_MIN;
uint16_t x709 = 1239U;
volatile int8_t x714 = -1;
volatile int64_t t174 = 4LL;
int16_t x721 = 0;
uint32_t x722 = 30551705U;
int16_t x728 = INT16_MAX;
static uint16_t x736 = 11819U;
int32_t x737 = -32;
volatile uint16_t x740 = 238U;
static int32_t x745 = INT32_MAX;
int64_t x746 = 2LL;
static uint32_t x748 = 271U;
uint32_t x750 = UINT32_MAX;
volatile int8_t x753 = INT8_MIN;
static int8_t x756 = -12;
int64_t t186 = 406594308385370LL;
int64_t x771 = -284149544827951341LL;
volatile int32_t t188 = -21670;
static uint64_t x777 = 9135210256860544097LLU;
uint8_t x781 = 38U;
int16_t x786 = INT16_MAX;
volatile int32_t x787 = INT32_MIN;
uint8_t x791 = 59U;
int64_t x799 = -30843363095829075LL;
int32_t x801 = 508345;
int64_t x802 = 224LL;
uint64_t x803 = 20LLU;
static int8_t x804 = INT8_MAX;
volatile int32_t t198 = -3;
static volatile int8_t x814 = -1;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x3 = -1;
	volatile int32_t t0 = -191612497;

    t0 = (x1&((x2<=x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 235U;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = -1;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 31296217U;

    t1 = (x5&((x6<=x7)%x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 1;
	uint64_t x10 = 17LLU;
	volatile uint8_t x11 = 0U;
	int32_t t2 = 869621008;

    t2 = (x9&((x10<=x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 6674U;
	static volatile int64_t x14 = INT64_MIN;
	static int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 38145;

    t3 = (x13&((x14<=x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 2U;
	volatile uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MAX;
	static uint16_t x20 = UINT16_MAX;
	static volatile int32_t t4 = -113;

    t4 = (x17&((x18<=x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int8_t x22 = INT8_MIN;
	int32_t x23 = 171334;
	static uint8_t x24 = UINT8_MAX;
	int64_t t5 = -13LL;

    t5 = (x21&((x22<=x23)%x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	static uint8_t x26 = 0U;
	volatile int16_t x27 = -894;
	static volatile int32_t t6 = -60;

    t6 = (x25&((x26<=x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 135U;
	uint16_t x31 = 7U;
	int64_t x32 = INT64_MIN;

    t7 = (x29&((x30<=x31)%x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 88431U;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 3752;
	static int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = 9U;

    t8 = (x33&((x34<=x35)%x36));

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x38 = -1314;
	volatile int32_t x39 = INT32_MAX;
	int8_t x40 = -2;
	int64_t t9 = 3513443271LL;

    t9 = (x37&((x38<=x39)%x40));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	static volatile int32_t t10 = -324691;

    t10 = (x41&((x42<=x43)%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -67122LL;
	volatile int64_t x46 = 130LL;
	int32_t x47 = INT32_MAX;
	volatile uint64_t t11 = 62810745737LLU;

    t11 = (x45&((x46<=x47)%x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 13;
	static volatile int8_t x51 = 4;
	volatile int8_t x52 = INT8_MIN;
	int64_t t12 = -3396498621117398501LL;

    t12 = (x49&((x50<=x51)%x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x54 = 26823U;
	uint16_t x55 = 7802U;
	uint16_t x56 = 108U;

    t13 = (x53&((x54<=x55)%x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -54;
	static int64_t x59 = 0LL;
	static int32_t t14 = 1002585212;

    t14 = (x57&((x58<=x59)%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int64_t x62 = 3217310286782LL;
	uint16_t x64 = UINT16_MAX;
	static volatile int64_t t15 = -30529110886841574LL;

    t15 = (x61&((x62<=x63)%x64));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -1;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 50U;
	static int32_t x72 = INT32_MIN;
	static volatile int32_t t16 = -3128;

    t16 = (x69&((x70<=x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 0;
	uint32_t x74 = UINT32_MAX;
	static uint16_t x75 = 6023U;
	volatile uint32_t x76 = 1485208U;
	static uint32_t t17 = 33U;

    t17 = (x73&((x74<=x75)%x76));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = 7U;
	static uint32_t x80 = UINT32_MAX;
	static volatile uint32_t t18 = 1720258814U;

    t18 = (x77&((x78<=x79)%x80));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = INT64_MIN;
	int8_t x82 = 26;
	static volatile int32_t x83 = INT32_MIN;

    t19 = (x81&((x82<=x83)%x84));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x85 = -1LL;
	uint64_t x86 = 4336618670873871LLU;
	uint64_t x87 = UINT64_MAX;
	uint8_t x88 = 97U;
	volatile int64_t t20 = -83LL;

    t20 = (x85&((x86<=x87)%x88));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	uint64_t x90 = 186961249332LLU;
	uint64_t x91 = UINT64_MAX;
	static volatile int64_t x92 = INT64_MIN;
	static int64_t t21 = 135748904742LL;

    t21 = (x89&((x90<=x91)%x92));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MIN;
	int32_t t22 = -3557;

    t22 = (x93&((x94<=x95)%x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MAX;
	int8_t x99 = INT8_MAX;
	int32_t t23 = -3771;

    t23 = (x97&((x98<=x99)%x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = INT16_MAX;
	static uint64_t x102 = 55456819137LLU;
	int32_t x103 = 3743695;
	static volatile int64_t t24 = -14865525923711LL;

    t24 = (x101&((x102<=x103)%x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 124LLU;
	int32_t x106 = -1;
	uint64_t x107 = 76321331521596050LLU;
	uint64_t t25 = 32807LLU;

    t25 = (x105&((x106<=x107)%x108));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	static uint8_t x110 = UINT8_MAX;
	int64_t x112 = 32885035530261LL;
	volatile int64_t t26 = 876LL;

    t26 = (x109&((x110<=x111)%x112));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x113 = -23861954406LL;
	uint8_t x114 = 3U;
	static volatile uint16_t x115 = UINT16_MAX;
	int16_t x116 = 4;
	static volatile int64_t t27 = 3155600913217788LL;

    t27 = (x113&((x114<=x115)%x116));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x118 = INT8_MIN;
	volatile int64_t x119 = -1373573LL;
	static uint16_t x120 = 5529U;
	volatile int32_t t28 = -7899752;

    t28 = (x117&((x118<=x119)%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x121 = 10LLU;
	volatile uint16_t x122 = 13U;
	int32_t x123 = -1;
	uint64_t x124 = 38LLU;

    t29 = (x121&((x122<=x123)%x124));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -1;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;
	int32_t t30 = 2;

    t30 = (x125&((x126<=x127)%x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x129 = -10;
	uint16_t x130 = 3U;
	int64_t x131 = INT64_MIN;
	static volatile int32_t t31 = 0;

    t31 = (x129&((x130<=x131)%x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x134 = 0U;
	static int32_t x135 = -759145455;
	volatile int64_t x136 = 99341527073412LL;
	volatile uint64_t t32 = 3421954LLU;

    t32 = (x133&((x134<=x135)%x136));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = -15053737505884LL;
	volatile int16_t x139 = INT16_MIN;
	int16_t x140 = -1;
	static int64_t t33 = 1006421LL;

    t33 = (x137&((x138<=x139)%x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x141 = -46;
	int8_t x143 = -1;
	volatile uint8_t x144 = 29U;
	volatile int32_t t34 = -639670570;

    t34 = (x141&((x142<=x143)%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MAX;
	static int64_t x146 = INT64_MIN;
	static uint32_t x148 = 15U;
	uint32_t t35 = 3U;

    t35 = (x145&((x146<=x147)%x148));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x149 = INT32_MIN;
	static int8_t x150 = INT8_MIN;
	int32_t x151 = -697810;
	int16_t x152 = -1;
	int32_t t36 = 163507192;

    t36 = (x149&((x150<=x151)%x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x153 = 3U;
	uint64_t x154 = 55087337LLU;
	uint16_t x155 = 25599U;
	static int16_t x156 = INT16_MAX;
	int32_t t37 = 3;

    t37 = (x153&((x154<=x155)%x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = -493;
	int32_t x159 = -1;
	volatile uint32_t x160 = 1104388U;

    t38 = (x157&((x158<=x159)%x160));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -1LL;
	int16_t x162 = -1;
	int16_t x163 = -255;
	uint32_t x164 = UINT32_MAX;
	int64_t t39 = -74395362LL;

    t39 = (x161&((x162<=x163)%x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x166 = 18U;
	uint16_t x167 = UINT16_MAX;

    t40 = (x165&((x166<=x167)%x168));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = 9;
	static volatile int32_t x172 = INT32_MAX;
	int64_t t41 = -3993LL;

    t41 = (x169&((x170<=x171)%x172));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = -26;
	static int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	uint32_t t42 = 245869655U;

    t42 = (x173&((x174<=x175)%x176));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	static volatile int16_t x179 = INT16_MAX;
	static int64_t x180 = -13797LL;
	int64_t t43 = -171085LL;

    t43 = (x177&((x178<=x179)%x180));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x181 = -328;
	uint64_t x183 = 377730748774LLU;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t44 = -17607569;

    t44 = (x181&((x182<=x183)%x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	volatile int32_t t45 = -1;

    t45 = (x185&((x186<=x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = INT64_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	volatile int64_t t46 = 455728283LL;

    t46 = (x189&((x190<=x191)%x192));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = 1023279U;
	int8_t x196 = INT8_MIN;

    t47 = (x193&((x194<=x195)%x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x197 = 12U;
	static uint8_t x198 = UINT8_MAX;
	uint32_t x199 = 119456U;
	volatile int16_t x200 = INT16_MIN;
	int32_t t48 = -9;

    t48 = (x197&((x198<=x199)%x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x201 = INT64_MIN;
	uint8_t x203 = 2U;
	static uint32_t x204 = UINT32_MAX;

    t49 = (x201&((x202<=x203)%x204));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x206 = INT64_MIN;
	int8_t x208 = 9;
	volatile uint32_t t50 = 1520865U;

    t50 = (x205&((x206<=x207)%x208));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x210 = INT16_MIN;
	int32_t x211 = 0;
	int16_t x212 = INT16_MIN;

    t51 = (x209&((x210<=x211)%x212));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x214 = INT64_MIN;
	uint64_t x216 = 7726436574412022LLU;
	static uint64_t t52 = 8276057160880998249LLU;

    t52 = (x213&((x214<=x215)%x216));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MAX;
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 2550359U;
	static volatile uint32_t t53 = 101565U;

    t53 = (x217&((x218<=x219)%x220));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x222 = UINT16_MAX;
	int16_t x224 = INT16_MAX;
	int32_t t54 = 951542;

    t54 = (x221&((x222<=x223)%x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = -1;
	uint8_t x226 = 7U;
	int32_t x227 = -1;
	int32_t t55 = -1;

    t55 = (x225&((x226<=x227)%x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x229 = 412871234LL;
	static volatile uint32_t x232 = 240790658U;
	static volatile int64_t t56 = -40866293451400688LL;

    t56 = (x229&((x230<=x231)%x232));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = 105030084LLU;
	static volatile uint8_t x234 = UINT8_MAX;
	volatile uint64_t x235 = 368889LLU;
	volatile uint8_t x236 = 27U;
	volatile uint64_t t57 = 8LLU;

    t57 = (x233&((x234<=x235)%x236));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = INT64_MIN;
	static int8_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int64_t x240 = 385248179907599023LL;
	volatile int64_t t58 = -65017068460815532LL;

    t58 = (x237&((x238<=x239)%x240));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x241 = INT32_MIN;
	static int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	uint64_t x244 = 1955911585LLU;
	uint64_t t59 = 1019821064815928LLU;

    t59 = (x241&((x242<=x243)%x244));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x245 = 93857367;
	int32_t x246 = INT32_MAX;
	volatile uint16_t x248 = 1U;
	int32_t t60 = -107;

    t60 = (x245&((x246<=x247)%x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x249 = UINT16_MAX;
	uint64_t x250 = 1542351LLU;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t61 = 77120;

    t61 = (x249&((x250<=x251)%x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x253 = 0;
	int8_t x254 = -8;
	volatile int64_t x255 = -1LL;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t62 = -1988;

    t62 = (x253&((x254<=x255)%x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t63 = -39616724;

    t63 = (x257&((x258<=x259)%x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x262 = INT64_MIN;
	uint64_t x263 = 498609359334LLU;
	int8_t x264 = INT8_MAX;
	volatile int32_t t64 = -1703390;

    t64 = (x261&((x262<=x263)%x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x265 = INT32_MIN;
	uint16_t x266 = 579U;
	int16_t x267 = -3998;
	static uint8_t x268 = 1U;
	volatile int32_t t65 = -187;

    t65 = (x265&((x266<=x267)%x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x269 = 2969LLU;
	static int32_t x271 = INT32_MIN;
	int64_t x272 = -1LL;
	volatile uint64_t t66 = 22902520395312169LLU;

    t66 = (x269&((x270<=x271)%x272));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = -1;
	uint32_t x276 = 40U;

    t67 = (x273&((x274<=x275)%x276));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MAX;
	int64_t t68 = -6496210014868931LL;

    t68 = (x277&((x278<=x279)%x280));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	uint64_t x283 = UINT64_MAX;
	uint16_t x284 = UINT16_MAX;
	int32_t t69 = -20279782;

    t69 = (x281&((x282<=x283)%x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x285 = INT16_MAX;
	int16_t x287 = -1;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t70 = 6;

    t70 = (x285&((x286<=x287)%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x289 = 714;
	uint8_t x290 = 6U;
	static volatile int32_t x291 = INT32_MIN;
	uint16_t x292 = 189U;
	volatile int32_t t71 = -21388;

    t71 = (x289&((x290<=x291)%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x293 = 49U;
	int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MAX;
	static volatile int32_t t72 = 174433;

    t72 = (x293&((x294<=x295)%x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = -138497;
	volatile int32_t x298 = 0;
	volatile int8_t x299 = INT8_MAX;
	static uint32_t x300 = 499U;
	volatile uint32_t t73 = 1218735U;

    t73 = (x297&((x298<=x299)%x300));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t74 = 1;

    t74 = (x301&((x302<=x303)%x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x305 = 2055U;
	uint32_t x306 = UINT32_MAX;
	volatile int16_t x307 = 102;
	int8_t x308 = INT8_MIN;
	static int32_t t75 = 1683705;

    t75 = (x305&((x306<=x307)%x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = -1;
	volatile int32_t x310 = -96708126;
	static int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;

    t76 = (x309&((x310<=x311)%x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x313 = INT8_MAX;
	static uint32_t x314 = UINT32_MAX;
	int32_t x316 = INT32_MIN;

    t77 = (x313&((x314<=x315)%x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 670503341U;
	int16_t x318 = -2693;
	static int32_t x319 = INT32_MAX;

    t78 = (x317&((x318<=x319)%x320));

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x322 = 14532455;
	int8_t x323 = INT8_MIN;
	volatile int8_t x324 = INT8_MAX;
	int64_t t79 = 820855203856629LL;

    t79 = (x321&((x322<=x323)%x324));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x325 = INT8_MIN;
	static volatile uint32_t x326 = 2102780U;
	volatile int16_t x328 = -1;
	static volatile int32_t t80 = -131593;

    t80 = (x325&((x326<=x327)%x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x329 = UINT64_MAX;
	static int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MAX;
	static int16_t x332 = 369;
	uint64_t t81 = 1021623897227011281LLU;

    t81 = (x329&((x330<=x331)%x332));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = 182086632;
	uint64_t x335 = 39324LLU;
	uint64_t t82 = 2321885992LLU;

    t82 = (x333&((x334<=x335)%x336));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x338 = -1LL;
	static uint64_t x339 = UINT64_MAX;
	int64_t t83 = 30934873525LL;

    t83 = (x337&((x338<=x339)%x340));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x342 = INT16_MAX;
	uint32_t x343 = 1046U;
	int64_t t84 = -2756298628LL;

    t84 = (x341&((x342<=x343)%x344));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x345 = 424987410U;
	uint64_t x346 = UINT64_MAX;
	static uint32_t x347 = 18396U;
	static int32_t x348 = INT32_MAX;
	volatile uint32_t t85 = 58U;

    t85 = (x345&((x346<=x347)%x348));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = -6;
	int16_t x351 = 22;
	int64_t x352 = -57654912533645LL;
	int64_t t86 = -7521483266445339LL;

    t86 = (x349&((x350<=x351)%x352));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = 20;
	int64_t x354 = -14046146553141LL;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -9;

    t87 = (x353&((x354<=x355)%x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MIN;
	volatile int16_t x358 = 1440;
	volatile int64_t x359 = -1LL;
	int32_t x360 = INT32_MIN;
	int32_t t88 = 1;

    t88 = (x357&((x358<=x359)%x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x362 = 1U;
	uint16_t x363 = 335U;
	volatile int32_t x364 = 107;

    t89 = (x361&((x362<=x363)%x364));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = 7LL;
	volatile uint8_t x368 = 1U;
	volatile uint64_t t90 = 6615LLU;

    t90 = (x365&((x366<=x367)%x368));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x370 = 14579;
	int32_t x372 = -6;
	uint64_t t91 = 74118523501910531LLU;

    t91 = (x369&((x370<=x371)%x372));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = 809;
	int64_t x374 = 13736514676851801LL;
	int64_t x375 = -1LL;
	static int32_t x376 = INT32_MIN;
	int32_t t92 = 3433866;

    t92 = (x373&((x374<=x375)%x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x379 = INT64_MAX;
	volatile int16_t x380 = INT16_MIN;
	static volatile int64_t t93 = 184602861LL;

    t93 = (x377&((x378<=x379)%x380));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = INT8_MAX;
	volatile int8_t x382 = 0;
	int16_t x383 = INT16_MAX;
	int32_t t94 = -4473806;

    t94 = (x381&((x382<=x383)%x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = INT8_MAX;
	static volatile uint16_t x386 = UINT16_MAX;
	int64_t x387 = 24837273LL;
	int16_t x388 = INT16_MAX;
	volatile int32_t t95 = 17315;

    t95 = (x385&((x386<=x387)%x388));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x390 = 0LLU;
	int8_t x392 = 14;
	uint32_t t96 = 104985457U;

    t96 = (x389&((x390<=x391)%x392));

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = INT64_MIN;
	volatile int16_t x394 = INT16_MAX;
	int16_t x395 = INT16_MAX;
	int32_t x396 = 259409;
	int64_t t97 = 4037380934791719356LL;

    t97 = (x393&((x394<=x395)%x396));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x397 = UINT16_MAX;
	int16_t x398 = -1;
	static volatile int16_t x399 = INT16_MAX;
	int32_t x400 = -16389;
	volatile int32_t t98 = 917;

    t98 = (x397&((x398<=x399)%x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 6432527U;
	int32_t x402 = -1;
	int64_t x403 = INT64_MIN;
	uint32_t t99 = 1874277505U;

    t99 = (x401&((x402<=x403)%x404));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = 455;
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 3;
	volatile int32_t t100 = 8569;

    t100 = (x405&((x406<=x407)%x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = 40U;
	uint64_t t101 = 232965787503371LLU;

    t101 = (x409&((x410<=x411)%x412));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x415 = 36LLU;
	uint32_t t102 = 98211635U;

    t102 = (x413&((x414<=x415)%x416));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x417 = 7642;
	int32_t x418 = INT32_MIN;
	volatile int16_t x420 = INT16_MAX;
	int32_t t103 = -32319009;

    t103 = (x417&((x418<=x419)%x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = -244LL;
	int64_t x423 = -1LL;
	static uint32_t x424 = 9908633U;

    t104 = (x421&((x422<=x423)%x424));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = INT64_MIN;
	volatile int64_t x426 = INT64_MAX;
	static int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	static volatile int64_t t105 = -128811603300LL;

    t105 = (x425&((x426<=x427)%x428));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x431 = -1;
	int32_t x432 = INT32_MIN;

    t106 = (x429&((x430<=x431)%x432));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = UINT32_MAX;
	int32_t x434 = INT32_MAX;
	volatile uint32_t x435 = 1700U;
	int32_t x436 = INT32_MIN;
	volatile uint32_t t107 = 797773416U;

    t107 = (x433&((x434<=x435)%x436));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x437 = UINT8_MAX;
	volatile int32_t x438 = INT32_MIN;
	int64_t x439 = -322000807784827LL;
	static int64_t x440 = -1LL;

    t108 = (x437&((x438<=x439)%x440));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x441 = UINT16_MAX;
	uint32_t x442 = 30U;
	volatile int16_t x443 = -6;
	int64_t x444 = INT64_MIN;
	int64_t t109 = -3LL;

    t109 = (x441&((x442<=x443)%x444));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x446 = -1;
	int16_t x447 = INT16_MAX;
	int32_t t110 = -3133528;

    t110 = (x445&((x446<=x447)%x448));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = 1687219LL;
	uint16_t x450 = 3141U;
	int8_t x451 = INT8_MAX;
	int8_t x452 = INT8_MIN;
	volatile int64_t t111 = 2946362579523LL;

    t111 = (x449&((x450<=x451)%x452));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MIN;
	static int32_t x455 = INT32_MIN;
	int32_t x456 = -1;
	volatile int64_t t112 = 269387837067361LL;

    t112 = (x453&((x454<=x455)%x456));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MIN;
	volatile int8_t x459 = INT8_MAX;
	int64_t x460 = 12566599176LL;
	volatile int64_t t113 = 1119053971829457317LL;

    t113 = (x457&((x458<=x459)%x460));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = -14485;
	volatile uint64_t x462 = UINT64_MAX;
	int64_t x463 = INT64_MIN;
	int32_t t114 = 89519301;

    t114 = (x461&((x462<=x463)%x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x465 = UINT16_MAX;
	int32_t x467 = -20428;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t115 = 8071581867LLU;

    t115 = (x465&((x466<=x467)%x468));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = INT64_MAX;
	int8_t x470 = 30;
	int8_t x471 = 1;
	int32_t x472 = INT32_MAX;
	static int64_t t116 = -29LL;

    t116 = (x469&((x470<=x471)%x472));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x473 = INT16_MIN;
	uint64_t x474 = UINT64_MAX;
	int32_t x475 = INT32_MAX;
	static volatile int64_t x476 = INT64_MIN;
	volatile int64_t t117 = -31347289157LL;

    t117 = (x473&((x474<=x475)%x476));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x477 = -1LL;
	int64_t x478 = 242132875552850LL;
	uint32_t x479 = 250054U;
	int32_t x480 = INT32_MIN;
	int64_t t118 = -3968991202048882343LL;

    t118 = (x477&((x478<=x479)%x480));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = 6361;
	int32_t x482 = -1292184;
	int64_t x483 = INT64_MAX;
	volatile int64_t x484 = INT64_MIN;
	int64_t t119 = 112133112147LL;

    t119 = (x481&((x482<=x483)%x484));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x485 = 26U;
	uint64_t x486 = UINT64_MAX;
	uint16_t x487 = 221U;
	static int32_t x488 = -1;
	static volatile int32_t t120 = 0;

    t120 = (x485&((x486<=x487)%x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x490 = INT32_MIN;
	int64_t x491 = -1LL;
	int64_t x492 = -1LL;
	volatile int64_t t121 = 2883195LL;

    t121 = (x489&((x490<=x491)%x492));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x497 = 1U;
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = 1U;
	int8_t x500 = -54;
	volatile int32_t t122 = 34354;

    t122 = (x497&((x498<=x499)%x500));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x501 = INT8_MAX;
	static volatile uint64_t x502 = 170749965022LLU;
	uint64_t x503 = 287596268542500948LLU;
	uint32_t x504 = 4U;

    t123 = (x501&((x502<=x503)%x504));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x505 = 1U;
	uint32_t x506 = UINT32_MAX;
	int8_t x507 = INT8_MIN;
	uint16_t x508 = UINT16_MAX;
	int32_t t124 = -6;

    t124 = (x505&((x506<=x507)%x508));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x509 = 0U;
	int64_t x510 = -1LL;
	int32_t x511 = INT32_MIN;
	int8_t x512 = INT8_MAX;
	static volatile int32_t t125 = -132;

    t125 = (x509&((x510<=x511)%x512));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = -1;
	static volatile int32_t x514 = INT32_MIN;
	int32_t x515 = INT32_MIN;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t126 = -760239;

    t126 = (x513&((x514<=x515)%x516));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x517 = 150U;
	volatile int64_t x518 = -1LL;
	uint32_t x519 = 185733U;
	uint8_t x520 = 41U;
	static volatile int32_t t127 = -196;

    t127 = (x517&((x518<=x519)%x520));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = 43176889669435315LL;
	static int16_t x522 = 11;
	int32_t x523 = INT32_MIN;
	int64_t x524 = INT64_MIN;
	int64_t t128 = -49530258955522744LL;

    t128 = (x521&((x522<=x523)%x524));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x527 = INT16_MAX;
	int64_t x528 = INT64_MIN;
	volatile uint64_t t129 = 67825686361289LLU;

    t129 = (x525&((x526<=x527)%x528));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x529 = UINT32_MAX;
	uint32_t x530 = 39U;
	volatile int16_t x531 = INT16_MIN;
	uint8_t x532 = UINT8_MAX;

    t130 = (x529&((x530<=x531)%x532));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x534 = INT32_MIN;
	uint8_t x535 = 76U;
	int32_t x536 = INT32_MAX;
	int32_t t131 = 1925874;

    t131 = (x533&((x534<=x535)%x536));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = 14U;
	uint16_t x538 = 88U;
	static uint16_t x539 = UINT16_MAX;
	uint32_t x540 = 1697U;

    t132 = (x537&((x538<=x539)%x540));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x541 = UINT32_MAX;
	uint32_t x542 = 29350850U;
	static uint32_t x543 = UINT32_MAX;
	uint32_t t133 = 353U;

    t133 = (x541&((x542<=x543)%x544));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x545 = INT8_MAX;
	volatile uint32_t x546 = UINT32_MAX;
	int16_t x547 = 1;
	static uint8_t x548 = 30U;
	int32_t t134 = -470319;

    t134 = (x545&((x546<=x547)%x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x549 = INT32_MIN;
	volatile int16_t x550 = -1;
	static volatile int16_t x551 = -1;
	int8_t x552 = -1;

    t135 = (x549&((x550<=x551)%x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x556 = 363444789LLU;
	volatile uint64_t t136 = 6436106529194LLU;

    t136 = (x553&((x554<=x555)%x556));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x557 = 28;
	int32_t x559 = INT32_MAX;
	uint16_t x560 = UINT16_MAX;
	int32_t t137 = -520;

    t137 = (x557&((x558<=x559)%x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x562 = -1;
	volatile int32_t x563 = INT32_MIN;
	static volatile int64_t t138 = -1828400372LL;

    t138 = (x561&((x562<=x563)%x564));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x565 = -1;
	int32_t x567 = INT32_MAX;
	static volatile int32_t t139 = 15440394;

    t139 = (x565&((x566<=x567)%x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x570 = INT16_MIN;
	volatile uint16_t x571 = UINT16_MAX;
	uint8_t x572 = 1U;
	volatile int32_t t140 = 8835173;

    t140 = (x569&((x570<=x571)%x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x574 = -1;
	int16_t x575 = -59;
	static int16_t x576 = -1;
	volatile int64_t t141 = 555005LL;

    t141 = (x573&((x574<=x575)%x576));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x578 = 93889266167207453LLU;
	volatile int32_t x579 = -3756258;

    t142 = (x577&((x578<=x579)%x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x581 = 68U;
	static volatile int16_t x582 = INT16_MIN;
	uint8_t x584 = UINT8_MAX;
	static volatile int32_t t143 = -66;

    t143 = (x581&((x582<=x583)%x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x585 = -1;
	uint16_t x586 = 2U;
	static uint8_t x587 = 23U;
	int64_t x588 = 1029470334LL;
	int64_t t144 = 36816504383998408LL;

    t144 = (x585&((x586<=x587)%x588));

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	uint32_t x590 = 111509551U;
	int32_t x592 = -495;
	volatile int32_t t145 = -7584;

    t145 = (x589&((x590<=x591)%x592));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x593 = 331563U;
	int64_t x595 = INT64_MAX;
	int32_t x596 = 14;
	volatile uint32_t t146 = 29473U;

    t146 = (x593&((x594<=x595)%x596));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x597 = -1LL;
	int64_t x598 = INT64_MIN;
	static uint64_t x599 = 410LLU;
	volatile int64_t x600 = -1LL;

    t147 = (x597&((x598<=x599)%x600));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x603 = -1;
	volatile int32_t t148 = 112;

    t148 = (x601&((x602<=x603)%x604));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x606 = 1U;
	volatile int8_t x607 = INT8_MIN;
	int16_t x608 = INT16_MIN;

    t149 = (x605&((x606<=x607)%x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x611 = INT16_MIN;
	uint64_t x612 = 238LLU;
	static volatile uint64_t t150 = 66018911996LLU;

    t150 = (x609&((x610<=x611)%x612));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x613 = INT32_MAX;
	int8_t x614 = INT8_MIN;
	int64_t x616 = INT64_MAX;
	int64_t t151 = -9892744LL;

    t151 = (x613&((x614<=x615)%x616));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = INT32_MIN;
	int16_t x618 = -1;
	int8_t x619 = INT8_MAX;
	static int64_t x620 = -1LL;
	int64_t t152 = -434559173268499LL;

    t152 = (x617&((x618<=x619)%x620));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x622 = INT64_MIN;
	static uint8_t x623 = UINT8_MAX;
	int64_t x624 = INT64_MIN;
	volatile int64_t t153 = 18225441079132921LL;

    t153 = (x621&((x622<=x623)%x624));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x625 = INT32_MIN;
	static int64_t x626 = INT64_MAX;
	volatile int64_t x627 = INT64_MIN;
	static int32_t x628 = INT32_MAX;
	static int32_t t154 = 765;

    t154 = (x625&((x626<=x627)%x628));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = 4156769593LL;
	int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	int64_t t155 = 124839763LL;

    t155 = (x629&((x630<=x631)%x632));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x638 = -1;
	int8_t x639 = 0;
	uint32_t x640 = UINT32_MAX;
	static volatile uint32_t t156 = 237848398U;

    t156 = (x637&((x638<=x639)%x640));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = INT64_MIN;
	int16_t x642 = -14775;
	uint64_t x644 = 156168602LLU;
	static uint64_t t157 = 8127411584LLU;

    t157 = (x641&((x642<=x643)%x644));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = INT32_MAX;
	uint32_t x646 = 983200U;
	int8_t x647 = INT8_MIN;
	static volatile int32_t x648 = INT32_MAX;
	volatile int32_t t158 = 107387109;

    t158 = (x645&((x646<=x647)%x648));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x651 = 142381748075666621LLU;
	volatile int32_t x652 = -5;
	int32_t t159 = 0;

    t159 = (x649&((x650<=x651)%x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x653 = UINT16_MAX;
	static volatile int64_t x654 = -31079940020LL;
	static int16_t x655 = 557;
	int32_t x656 = INT32_MIN;
	volatile int32_t t160 = 6438;

    t160 = (x653&((x654<=x655)%x656));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x657 = 123U;
	static int16_t x658 = INT16_MAX;
	volatile int32_t t161 = -43749912;

    t161 = (x657&((x658<=x659)%x660));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x661 = -966868808596LL;
	uint64_t x662 = 12960753438938LLU;
	int64_t x663 = INT64_MAX;
	volatile int64_t x664 = INT64_MIN;

    t162 = (x661&((x662<=x663)%x664));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = INT8_MIN;
	volatile uint16_t x666 = UINT16_MAX;
	int32_t x667 = INT32_MAX;
	int32_t x668 = -75877865;
	int32_t t163 = -404907363;

    t163 = (x665&((x666<=x667)%x668));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x669 = INT16_MAX;
	static int16_t x670 = INT16_MIN;
	uint8_t x672 = 1U;
	static volatile int32_t t164 = -16691710;

    t164 = (x669&((x670<=x671)%x672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x673 = -1346LL;
	volatile uint8_t x674 = 0U;
	static int32_t x676 = 9193;
	static int64_t t165 = 125111038112218320LL;

    t165 = (x673&((x674<=x675)%x676));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = -8941;
	int8_t x679 = INT8_MAX;
	static int8_t x680 = -1;

    t166 = (x677&((x678<=x679)%x680));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = -1LL;
	static int64_t x684 = INT64_MAX;
	int64_t t167 = -40472LL;

    t167 = (x681&((x682<=x683)%x684));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x685 = -19;
	int32_t x687 = -23;
	volatile int64_t x688 = -34155420493463LL;
	volatile int64_t t168 = -3385676LL;

    t168 = (x685&((x686<=x687)%x688));

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x689 = 34007454220363LLU;
	int16_t x691 = INT16_MIN;
	uint64_t t169 = 167594LLU;

    t169 = (x689&((x690<=x691)%x692));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x694 = -320;
	int64_t x696 = -29447843949331LL;
	int64_t t170 = -11784851LL;

    t170 = (x693&((x694<=x695)%x696));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x701 = INT64_MIN;
	int8_t x702 = INT8_MAX;
	int32_t x703 = INT32_MIN;
	int8_t x704 = INT8_MIN;
	volatile int64_t t171 = 3221484968587916LL;

    t171 = (x701&((x702<=x703)%x704));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x705 = -1;
	int32_t x706 = INT32_MAX;
	uint32_t x707 = 31U;
	int8_t x708 = -1;
	int32_t t172 = 1735658;

    t172 = (x705&((x706<=x707)%x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x710 = 23U;
	uint32_t x711 = UINT32_MAX;
	int64_t x712 = INT64_MIN;
	volatile int64_t t173 = -8244487943LL;

    t173 = (x709&((x710<=x711)%x712));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x713 = INT64_MAX;
	static int64_t x715 = INT64_MIN;
	int8_t x716 = -54;

    t174 = (x713&((x714<=x715)%x716));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = 5;
	int64_t x718 = INT64_MIN;
	int16_t x719 = -974;
	int8_t x720 = -1;
	volatile int32_t t175 = -22688140;

    t175 = (x717&((x718<=x719)%x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x723 = UINT8_MAX;
	volatile int16_t x724 = INT16_MIN;
	static int32_t t176 = -327606;

    t176 = (x721&((x722<=x723)%x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x725 = 66474075729772LL;
	volatile int8_t x726 = -1;
	volatile int64_t x727 = -1LL;
	volatile int64_t t177 = 101059LL;

    t177 = (x725&((x726<=x727)%x728));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x729 = INT32_MAX;
	static volatile int32_t x730 = -1;
	int64_t x731 = 1674676638LL;
	static uint64_t x732 = 471037345LLU;
	volatile uint64_t t178 = 10509205LLU;

    t178 = (x729&((x730<=x731)%x732));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x733 = INT32_MIN;
	int32_t x734 = -452;
	int16_t x735 = INT16_MAX;
	volatile int32_t t179 = 141981710;

    t179 = (x733&((x734<=x735)%x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x738 = 0U;
	static int64_t x739 = INT64_MIN;
	volatile int32_t t180 = -7;

    t180 = (x737&((x738<=x739)%x740));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x741 = INT8_MIN;
	int64_t x742 = -1LL;
	static uint32_t x743 = 6477U;
	int8_t x744 = INT8_MIN;
	volatile int32_t t181 = -27132087;

    t181 = (x741&((x742<=x743)%x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x747 = -515;
	uint32_t t182 = 7792523U;

    t182 = (x745&((x746<=x747)%x748));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x749 = INT8_MIN;
	static int64_t x751 = INT64_MAX;
	volatile int8_t x752 = -1;
	volatile int32_t t183 = 0;

    t183 = (x749&((x750<=x751)%x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x754 = 7983;
	int64_t x755 = INT64_MAX;
	int32_t t184 = -194;

    t184 = (x753&((x754<=x755)%x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x757 = INT8_MAX;
	uint16_t x758 = 2U;
	uint64_t x759 = 1644LLU;
	static uint8_t x760 = UINT8_MAX;
	static int32_t t185 = -456886;

    t185 = (x757&((x758<=x759)%x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x761 = -1LL;
	int8_t x762 = -21;
	static volatile int32_t x763 = INT32_MIN;
	int64_t x764 = 15034255586470310LL;

    t186 = (x761&((x762<=x763)%x764));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x765 = INT64_MIN;
	volatile uint32_t x766 = 1840510158U;
	uint16_t x767 = UINT16_MAX;
	uint64_t x768 = UINT64_MAX;
	uint64_t t187 = 99933433LLU;

    t187 = (x765&((x766<=x767)%x768));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = -9;
	uint16_t x770 = UINT16_MAX;
	uint8_t x772 = UINT8_MAX;

    t188 = (x769&((x770<=x771)%x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x773 = -591;
	int16_t x774 = -1;
	static int32_t x775 = -89400286;
	int8_t x776 = INT8_MAX;
	int32_t t189 = -456;

    t189 = (x773&((x774<=x775)%x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x778 = INT64_MIN;
	uint32_t x779 = 111611U;
	volatile uint8_t x780 = UINT8_MAX;
	volatile uint64_t t190 = 67094630258173LLU;

    t190 = (x777&((x778<=x779)%x780));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x782 = 21;
	int32_t x783 = INT32_MAX;
	static int64_t x784 = INT64_MIN;
	int64_t t191 = 17003065678122246LL;

    t191 = (x781&((x782<=x783)%x784));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint64_t x788 = 7967918LLU;
	uint64_t t192 = 44LLU;

    t192 = (x785&((x786<=x787)%x788));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = 2864;
	int8_t x790 = 56;
	uint8_t x792 = UINT8_MAX;
	static volatile int32_t t193 = 1024960;

    t193 = (x789&((x790<=x791)%x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x793 = UINT16_MAX;
	int16_t x794 = -1;
	int8_t x795 = -1;
	int8_t x796 = -1;
	static int32_t t194 = -4630;

    t194 = (x793&((x794<=x795)%x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x797 = 15;
	int16_t x798 = -1;
	static int16_t x800 = INT16_MIN;
	static int32_t t195 = 20800;

    t195 = (x797&((x798<=x799)%x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t t196 = -1;

    t196 = (x801&((x802<=x803)%x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x805 = INT16_MIN;
	uint8_t x806 = UINT8_MAX;
	volatile int8_t x807 = 1;
	static volatile int32_t x808 = 77968;
	int32_t t197 = -28;

    t197 = (x805&((x806<=x807)%x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x809 = 62;
	int8_t x810 = INT8_MIN;
	volatile int32_t x811 = 48338;
	int16_t x812 = INT16_MIN;

    t198 = (x809&((x810<=x811)%x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x813 = 1U;
	volatile int64_t x815 = INT64_MIN;
	static volatile int8_t x816 = INT8_MIN;
	int32_t t199 = -808519042;

    t199 = (x813&((x814<=x815)%x816));

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

