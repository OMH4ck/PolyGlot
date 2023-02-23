
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

volatile int32_t t0 = 125155967;
static int32_t x5 = INT32_MAX;
int16_t x9 = INT16_MAX;
uint8_t x10 = 1U;
int8_t x12 = INT8_MIN;
static volatile int32_t t2 = -25;
int16_t x16 = -1;
static volatile uint64_t t3 = UINT64_MAX;
volatile int64_t x20 = INT64_MAX;
static uint32_t x21 = 314984234U;
uint16_t x22 = 124U;
volatile int8_t x25 = INT8_MAX;
static int32_t x26 = -1;
int64_t x39 = INT64_MIN;
int64_t x40 = INT64_MIN;
uint64_t t11 = UINT64_MAX;
int16_t x49 = INT16_MAX;
static uint8_t x50 = 1U;
uint64_t t13 = UINT64_MAX;
volatile uint16_t x59 = 30535U;
int8_t x62 = -9;
uint16_t x65 = 1095U;
static volatile int8_t x67 = 0;
int32_t t16 = -13;
volatile uint32_t t18 = 441759U;
volatile int32_t x79 = -1;
uint32_t x84 = UINT32_MAX;
volatile int16_t x85 = -261;
int16_t x86 = INT16_MIN;
int32_t t21 = 0;
int32_t t23 = 227;
int8_t x100 = -1;
static int16_t x109 = INT16_MIN;
int8_t x120 = INT8_MAX;
uint16_t x127 = 15016U;
int16_t x130 = -9617;
volatile int32_t x136 = INT32_MAX;
volatile uint16_t x137 = 26U;
uint32_t x150 = 1755203884U;
volatile int64_t t37 = 844407212LL;
int64_t x153 = -1LL;
int64_t x159 = -17627683186958208LL;
int64_t x164 = 154114122427466LL;
int64_t x167 = INT64_MIN;
int8_t x172 = -1;
int32_t x175 = INT32_MAX;
static volatile int32_t t43 = -43;
int64_t x190 = INT64_MIN;
int32_t t47 = 15745;
int64_t x193 = INT64_MIN;
uint16_t x196 = 52U;
int8_t x201 = 41;
static int32_t x215 = -46503362;
int8_t x223 = -5;
static int64_t t56 = -2909344930944241LL;
int16_t x235 = INT16_MIN;
int32_t x239 = INT32_MIN;
int64_t x241 = INT64_MIN;
int16_t x245 = INT16_MIN;
uint64_t x246 = 65LLU;
int8_t x248 = -1;
volatile uint8_t x250 = 17U;
int64_t x258 = -198LL;
volatile int64_t x273 = INT64_MIN;
static int8_t x277 = -1;
static volatile int32_t x279 = INT32_MIN;
int8_t x290 = INT8_MAX;
int8_t x298 = INT8_MIN;
volatile int32_t t74 = -656;
int64_t x303 = -364731143099LL;
int8_t x304 = -34;
static uint32_t x305 = 359U;
int32_t x317 = 20;
int64_t x318 = INT64_MIN;
volatile uint32_t x320 = UINT32_MAX;
int16_t x322 = 1950;
static int16_t x328 = -8;
uint32_t x333 = 5537625U;
uint32_t t83 = UINT32_MAX;
uint8_t x338 = 1U;
uint16_t x343 = 16U;
volatile int64_t x344 = INT64_MIN;
static uint32_t x345 = 133U;
int32_t x353 = -18147557;
static int8_t x354 = INT8_MIN;
static int16_t x358 = INT16_MIN;
uint64_t x363 = 861222743857LLU;
volatile uint32_t t90 = UINT32_MAX;
uint8_t x370 = UINT8_MAX;
static int64_t x371 = 137737390672078989LL;
int64_t x372 = INT64_MAX;
int64_t t92 = 1LL;
volatile int8_t x375 = INT8_MIN;
int8_t x376 = INT8_MIN;
volatile int32_t t93 = -46;
uint16_t x382 = 2565U;
static volatile int32_t t96 = -1062;
volatile int32_t x389 = INT32_MIN;
static int32_t t97 = -70130;
static int64_t x395 = -1LL;
volatile uint64_t t98 = UINT64_MAX;
uint16_t x411 = 5012U;
int32_t t102 = 2210242;
uint32_t x414 = UINT32_MAX;
int32_t x420 = -25;
int32_t t104 = 0;
int32_t t105 = 1;
uint16_t x428 = 2U;
int32_t x430 = INT32_MIN;
volatile int32_t t107 = -538680;
uint64_t x433 = 31655146935340LLU;
static uint32_t x437 = UINT32_MAX;
volatile int32_t t111 = 57237510;
volatile int64_t x449 = INT64_MIN;
uint8_t x451 = UINT8_MAX;
int8_t x452 = -1;
int64_t t112 = 3892801605497525180LL;
int32_t x455 = 75;
int32_t x462 = INT32_MAX;
int16_t x464 = INT16_MAX;
int32_t x471 = 223434917;
int16_t x473 = -2;
uint16_t x476 = 22589U;
static volatile int32_t t118 = -270200506;
static volatile int32_t x480 = 948287034;
volatile int32_t x481 = 295242;
static uint8_t x487 = 19U;
volatile int64_t x499 = INT64_MIN;
int16_t x500 = -1;
static int8_t x510 = INT8_MIN;
int16_t x512 = INT16_MAX;
static volatile int64_t t127 = -395515378030426612LL;
int64_t x514 = -6103964551821LL;
volatile uint16_t x524 = UINT16_MAX;
int16_t x531 = 14405;
int32_t x545 = INT32_MIN;
static volatile int8_t x547 = INT8_MIN;
int64_t x550 = INT64_MIN;
int32_t x561 = 1868;
static int16_t x563 = -12713;
uint32_t x566 = UINT32_MAX;
volatile uint32_t x569 = UINT32_MAX;
uint32_t t142 = UINT32_MAX;
int8_t x575 = INT8_MAX;
int32_t x577 = INT32_MIN;
int64_t x580 = INT64_MIN;
int64_t x582 = INT64_MAX;
int32_t x583 = -1;
int32_t x590 = INT32_MAX;
int16_t x593 = INT16_MIN;
volatile int32_t t148 = -1058;
static uint32_t x601 = UINT32_MAX;
static volatile uint32_t t150 = UINT32_MAX;
uint16_t x607 = 569U;
volatile uint64_t x615 = 46736LLU;
uint64_t x629 = UINT64_MAX;
uint8_t x640 = 0U;
static volatile int32_t t159 = 365072;
int32_t x644 = -1;
int8_t x653 = -7;
volatile uint64_t x661 = 6377377519LLU;
int64_t x662 = INT64_MIN;
volatile int8_t x666 = -2;
uint16_t x671 = 377U;
static volatile int8_t x675 = -1;
int16_t x679 = INT16_MIN;
volatile int32_t x685 = 2444969;
int8_t x689 = 8;
static int32_t t173 = -517270;
int16_t x705 = -1;
int16_t x706 = INT16_MIN;
int32_t x710 = -1;
volatile uint16_t x711 = 24U;
volatile int64_t t179 = INT64_MAX;
volatile int8_t x721 = 9;
uint32_t t181 = 2268U;
int16_t x730 = -4734;
int32_t x732 = INT32_MAX;
volatile int32_t x735 = INT32_MAX;
volatile int32_t t183 = 0;
uint16_t x739 = 6829U;
static uint16_t x742 = 4U;
volatile int32_t x745 = INT32_MIN;
int32_t t186 = 15209;
volatile int16_t x754 = INT16_MIN;
static volatile uint16_t x755 = 0U;
int64_t x761 = INT64_MIN;
volatile int16_t x768 = -1;
static int32_t t191 = -1;
int32_t t192 = 761656;
static uint64_t x778 = UINT64_MAX;
uint8_t x780 = 3U;
volatile int8_t x783 = INT8_MAX;
volatile int32_t t195 = 3717341;
volatile int8_t x786 = 3;
int32_t x790 = 39428911;
int64_t x791 = -1LL;
int32_t x794 = 7;
uint32_t x800 = 613105792U;
static int64_t t199 = -73469170830954LL;


void f0(void) {
    	int8_t x1 = 23;
	uint32_t x2 = UINT32_MAX;
	int64_t x3 = -152989722803LL;
	volatile int32_t x4 = -473777;

    t0 = (x1|((x2<=x3)^x4));

    if (t0 != -473761) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -95545224;

    t1 = (x5|((x6<=x7)^x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = -139106844963LL;

    t2 = (x9|((x10<=x11)^x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 612804578882902033LLU;
	int8_t x14 = INT8_MIN;
	volatile int64_t x15 = INT64_MIN;

    t3 = (x13|((x14<=x15)^x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 12;
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t t4 = INT64_MAX;

    t4 = (x17|((x18<=x19)^x20));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x23 = 9184;
	uint8_t x24 = UINT8_MAX;
	uint32_t t5 = 889U;

    t5 = (x21|((x22<=x23)^x24));

    if (t5 != 314984446U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = -1;
	static int16_t x28 = -3890;
	int32_t t6 = -3030140;

    t6 = (x25|((x26<=x27)^x28));

    if (t6 != -3841) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MIN;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = INT32_MAX;

    t7 = (x29|((x30<=x31)^x32));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 15LL;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 426250362134LLU;
	int16_t x36 = 3;
	static int64_t t8 = -171729551318418LL;

    t8 = (x33|((x34<=x35)^x36));

    if (t8 != 15LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 3;
	int8_t x38 = INT8_MAX;
	int64_t t9 = 2655757302LL;

    t9 = (x37|((x38<=x39)^x40));

    if (t9 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 96795985U;
	int16_t x42 = -1;
	static volatile int64_t x43 = -365123141324887188LL;
	static volatile int64_t x44 = -455546525161LL;
	int64_t t10 = -91031LL;

    t10 = (x41|((x42<=x43)^x44));

    if (t10 != -455538114729LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int16_t x46 = INT16_MAX;
	volatile int64_t x47 = -2228193946263LL;
	uint64_t x48 = UINT64_MAX;

    t11 = (x45|((x46<=x47)^x48));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x51 = UINT8_MAX;
	volatile int64_t x52 = INT64_MIN;
	static volatile int64_t t12 = -507303LL;

    t12 = (x49|((x50<=x51)^x52));

    if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1;
	volatile uint64_t x54 = 51059174315651727LLU;
	int16_t x55 = -1;
	uint64_t x56 = UINT64_MAX;

    t13 = (x53|((x54<=x55)^x56));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x58 = -1;
	int64_t x60 = INT64_MAX;
	static volatile int64_t t14 = 13958821246182LL;

    t14 = (x57|((x58<=x59)^x60));

    if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 23994U;
	static int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;
	uint32_t t15 = UINT32_MAX;

    t15 = (x61|((x62<=x63)^x64));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	int16_t x68 = -10961;

    t16 = (x65|((x66<=x67)^x68));

    if (t16 != -10897) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 0;
	static uint64_t x70 = 8312628003LLU;
	uint16_t x71 = 0U;
	static volatile int8_t x72 = -1;
	static volatile int32_t t17 = 15;

    t17 = (x69|((x70<=x71)^x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x73 = 123U;
	int64_t x74 = -1LL;
	int64_t x75 = INT64_MAX;
	volatile uint32_t x76 = 766037986U;

    t18 = (x73|((x74<=x75)^x76));

    if (t18 != 766038011U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int64_t x78 = INT64_MAX;
	int16_t x80 = -23;
	static uint64_t t19 = UINT64_MAX;

    t19 = (x77|((x78<=x79)^x80));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MAX;
	static int8_t x82 = -1;
	static int16_t x83 = -1;
	volatile uint32_t t20 = UINT32_MAX;

    t20 = (x81|((x82<=x83)^x84));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x87 = 5436598LL;
	uint8_t x88 = 31U;

    t21 = (x85|((x86<=x87)^x88));

    if (t21 != -257) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 15769LL;
	int32_t x90 = -3389;
	uint16_t x91 = UINT16_MAX;
	volatile uint32_t x92 = 38322U;
	volatile int64_t t22 = -1LL;

    t22 = (x89|((x90<=x91)^x92));

    if (t22 != 48571LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 1033;
	static uint16_t x94 = 1533U;
	uint8_t x95 = 2U;
	uint8_t x96 = 15U;

    t23 = (x93|((x94<=x95)^x96));

    if (t23 != 1039) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = UINT32_MAX;
	int64_t t24 = -80058938829LL;

    t24 = (x97|((x98<=x99)^x100));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x102 = 368LL;
	uint64_t x103 = 203LLU;
	static int16_t x104 = -1;
	int32_t t25 = 41859577;

    t25 = (x101|((x102<=x103)^x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	uint32_t x106 = UINT32_MAX;
	volatile int8_t x107 = INT8_MIN;
	uint64_t x108 = 36393287LLU;
	static uint64_t t26 = 2635922569LLU;

    t26 = (x105|((x106<=x107)^x108));

    if (t26 != 9223372036891169095LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = UINT64_MAX;
	static volatile uint32_t x111 = 874070356U;
	static int32_t x112 = INT32_MIN;
	int32_t t27 = -6;

    t27 = (x109|((x110<=x111)^x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 11169272905LLU;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = -87865328;
	int64_t x116 = 120309184LL;
	volatile uint64_t t28 = 6872658127LLU;

    t28 = (x113|((x114<=x115)^x116));

    if (t28 != 11270084041LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 6005331U;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	volatile uint32_t t29 = 450U;

    t29 = (x117|((x118<=x119)^x120));

    if (t29 != 6005375U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile uint64_t x122 = 2LLU;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (x121|((x122<=x123)^x124));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	static volatile int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -14;

    t31 = (x125|((x126<=x127)^x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x129 = INT8_MAX;
	int32_t x131 = INT32_MIN;
	static volatile int8_t x132 = 24;
	volatile int32_t t32 = -29004;

    t32 = (x129|((x130<=x131)^x132));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 95U;
	static int64_t x134 = 3173420LL;
	int32_t x135 = INT32_MIN;
	int32_t t33 = INT32_MAX;

    t33 = (x133|((x134<=x135)^x136));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 8780241507594169LLU;
	static uint16_t x140 = UINT16_MAX;
	int32_t t34 = 28503;

    t34 = (x137|((x138<=x139)^x140));

    if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -3757904117072410LL;
	int64_t x142 = INT64_MIN;
	int32_t x143 = -2617508;
	int16_t x144 = -1;
	volatile int64_t t35 = 427180531677LL;

    t35 = (x141|((x142<=x143)^x144));

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MAX;
	static volatile int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	int64_t t36 = 32891628810LL;

    t36 = (x145|((x146<=x147)^x148));

    if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int8_t x151 = 3;
	int64_t x152 = 1207331489834809802LL;

    t37 = (x149|((x150<=x151)^x152));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x154 = -5903;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 121U;
	int64_t t38 = -31331902LL;

    t38 = (x153|((x154<=x155)^x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 7;
	int32_t x158 = -12786132;
	volatile uint64_t x160 = 637793196LLU;
	static volatile uint64_t t39 = 29LLU;

    t39 = (x157|((x158<=x159)^x160));

    if (t39 != 637793199LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 128249U;
	int8_t x162 = INT8_MIN;
	static volatile int64_t x163 = INT64_MIN;
	volatile int64_t t40 = -191LL;

    t40 = (x161|((x162<=x163)^x164));

    if (t40 != 154114122448123LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -2293339;
	int64_t x166 = -1LL;
	volatile int8_t x168 = -1;
	static volatile int32_t t41 = -100794;

    t41 = (x165|((x166<=x167)^x168));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -24LL;
	uint32_t t42 = UINT32_MAX;

    t42 = (x169|((x170<=x171)^x172));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	static int16_t x174 = INT16_MAX;
	volatile int8_t x176 = -1;

    t43 = (x173|((x174<=x175)^x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = -59;
	int64_t x178 = -1605657LL;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 708907;

    t44 = (x177|((x178<=x179)^x180));

    if (t44 != -59) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = 0U;
	int8_t x182 = -1;
	volatile uint32_t x183 = 1016421718U;
	static int32_t x184 = 482695;
	volatile int32_t t45 = -2900;

    t45 = (x181|((x182<=x183)^x184));

    if (t45 != 482695) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 1U;
	uint64_t x186 = 57881446775246LLU;
	volatile uint32_t x187 = 4017653U;
	static uint8_t x188 = 89U;
	int32_t t46 = 37591;

    t46 = (x185|((x186<=x187)^x188));

    if (t46 != 89) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 3U;
	int8_t x191 = 14;
	uint8_t x192 = 101U;

    t47 = (x189|((x190<=x191)^x192));

    if (t47 != 103) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x194 = 62U;
	int64_t x195 = INT64_MAX;
	static int64_t t48 = 199080223096LL;

    t48 = (x193|((x194<=x195)^x196));

    if (t48 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = 13633U;
	volatile int8_t x200 = 2;
	int32_t t49 = 3762;

    t49 = (x197|((x198<=x199)^x200));

    if (t49 != -32765) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x202 = -13243;
	static volatile int32_t x203 = INT32_MAX;
	volatile int64_t x204 = -111035411LL;
	int64_t t50 = -3714554LL;

    t50 = (x201|((x202<=x203)^x204));

    if (t50 != -111035411LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -8965LL;
	static int64_t t51 = 7300139752717LL;

    t51 = (x205|((x206<=x207)^x208));

    if (t51 != -8966LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 5040298781LLU;
	int32_t x210 = -1;
	uint8_t x211 = 26U;
	volatile int64_t x212 = INT64_MIN;
	volatile uint64_t t52 = 11275231553912685LLU;

    t52 = (x209|((x210<=x211)^x212));

    if (t52 != 9223372041895074589LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 48U;
	int64_t x214 = -1LL;
	static volatile int32_t x216 = INT32_MIN;
	int32_t t53 = 18971;

    t53 = (x213|((x214<=x215)^x216));

    if (t53 != -2147483600) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = INT32_MAX;
	int32_t x218 = 852;
	static volatile int32_t x219 = INT32_MIN;
	static int64_t x220 = -482LL;
	volatile int64_t t54 = -24971533645643767LL;

    t54 = (x217|((x218<=x219)^x220));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = -1;
	int8_t x222 = -1;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

    t55 = (x221|((x222<=x223)^x224));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	volatile uint8_t x226 = 1U;
	int32_t x227 = -1;
	volatile int64_t x228 = INT64_MAX;

    t56 = (x225|((x226<=x227)^x228));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = 833827840U;
	uint32_t x230 = 6U;
	uint64_t x231 = 2005715626794797495LLU;
	int32_t x232 = -1;
	static uint32_t t57 = 26U;

    t57 = (x229|((x230<=x231)^x232));

    if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MIN;
	int64_t x236 = -1LL;
	int64_t t58 = 0LL;

    t58 = (x233|((x234<=x235)^x236));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 12231947LLU;
	uint16_t x238 = 15U;
	int8_t x240 = 1;
	static volatile uint64_t t59 = 135LLU;

    t59 = (x237|((x238<=x239)^x240));

    if (t59 != 12231947LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x242 = 712LLU;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int64_t t60 = 476357269LL;

    t60 = (x241|((x242<=x243)^x244));

    if (t60 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x247 = 5U;
	int32_t t61 = -2709470;

    t61 = (x245|((x246<=x247)^x248));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MAX;
	static volatile int64_t t62 = -92455LL;

    t62 = (x249|((x250<=x251)^x252));

    if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	int64_t x254 = 188149200842650931LL;
	volatile uint8_t x255 = 59U;
	static int16_t x256 = INT16_MIN;
	int64_t t63 = 118LL;

    t63 = (x253|((x254<=x255)^x256));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -1;
	static int32_t x259 = INT32_MAX;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 210LL;

    t64 = (x257|((x258<=x259)^x260));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = 2027209391505LL;
	int64_t x262 = 25LL;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	static int64_t t65 = -473602053671146607LL;

    t65 = (x261|((x262<=x263)^x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -13;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (x265|((x266<=x267)^x268));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	uint16_t x270 = 4000U;
	int16_t x271 = INT16_MAX;
	int32_t x272 = 984648;
	int32_t t67 = -52;

    t67 = (x269|((x270<=x271)^x272));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = -1;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MAX;
	int64_t t68 = -36393729LL;

    t68 = (x273|((x274<=x275)^x276));

    if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = -1LL;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = -25;

    t69 = (x277|((x278<=x279)^x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint64_t x282 = 167LLU;
	uint8_t x283 = 0U;
	volatile int64_t x284 = -12980463LL;
	static volatile int64_t t70 = -9LL;

    t70 = (x281|((x282<=x283)^x284));

    if (t70 != -4335LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MAX;
	int64_t x286 = -955637438591710902LL;
	static int32_t x287 = INT32_MIN;
	volatile int16_t x288 = INT16_MAX;
	volatile int64_t t71 = INT64_MAX;

    t71 = (x285|((x286<=x287)^x288));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 2U;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = -1;
	static int32_t t72 = -388419;

    t72 = (x289|((x290<=x291)^x292));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	volatile int16_t x294 = -211;
	volatile uint64_t x295 = 1042683013532LLU;
	int8_t x296 = INT8_MIN;
	static volatile int64_t t73 = -68656LL;

    t73 = (x293|((x294<=x295)^x296));

    if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 0U;
	int16_t x299 = 0;
	int16_t x300 = INT16_MIN;

    t74 = (x297|((x298<=x299)^x300));

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x302 = 55;
	int32_t t75 = 8;

    t75 = (x301|((x302<=x303)^x304));

    if (t75 != -34) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	int8_t x308 = -1;
	uint32_t t76 = UINT32_MAX;

    t76 = (x305|((x306<=x307)^x308));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -14;
	static uint8_t x310 = 5U;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = UINT16_MAX;
	static int32_t t77 = 810200651;

    t77 = (x309|((x310<=x311)^x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	static uint8_t x316 = 0U;
	uint32_t t78 = UINT32_MAX;

    t78 = (x313|((x314<=x315)^x316));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x319 = INT32_MIN;
	uint32_t t79 = 26U;

    t79 = (x317|((x318<=x319)^x320));

    if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	int8_t x323 = INT8_MAX;
	volatile uint64_t x324 = 1002819LLU;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (x321|((x322<=x323)^x324));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	static uint16_t x327 = UINT16_MAX;
	int32_t t81 = 321;

    t81 = (x325|((x326<=x327)^x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -6984477954LL;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MAX;
	static volatile int8_t x332 = INT8_MIN;
	volatile int64_t t82 = -263571585860744284LL;

    t82 = (x329|((x330<=x331)^x332));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -2;

    t83 = (x333|((x334<=x335)^x336));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1022102898LL;
	volatile int16_t x339 = -1949;
	static volatile int64_t x340 = -1091901231192323LL;
	int64_t t84 = 472201779515538LL;

    t84 = (x337|((x338<=x339)^x340));

    if (t84 != -268437761LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MAX;
	uint8_t x342 = 1U;
	int64_t t85 = 1608119998831771900LL;

    t85 = (x341|((x342<=x343)^x344));

    if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = INT32_MAX;
	uint32_t t86 = 2U;

    t86 = (x345|((x346<=x347)^x348));

    if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MAX;
	int64_t x351 = INT64_MAX;
	volatile uint8_t x352 = 0U;
	static volatile int32_t t87 = 804925125;

    t87 = (x349|((x350<=x351)^x352));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -1007133048;

    t88 = (x353|((x354<=x355)^x356));

    if (t88 != -18120705) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 35U;
	int32_t x359 = INT32_MIN;
	static volatile int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -155057;

    t89 = (x357|((x358<=x359)^x360));

    if (t89 != -93) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -11;
	static int32_t x362 = -3210;
	static uint32_t x364 = UINT32_MAX;

    t90 = (x361|((x362<=x363)^x364));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 15U;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 5U;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = 9;

    t91 = (x365|((x366<=x367)^x368));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;

    t92 = (x369|((x370<=x371)^x372));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	uint32_t x374 = 2984705U;

    t93 = (x373|((x374<=x375)^x376));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x378 = 0;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	volatile int32_t t94 = -1;

    t94 = (x377|((x378<=x379)^x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 32U;
	int32_t x383 = -1;
	int16_t x384 = -1;
	volatile int32_t t95 = -36336;

    t95 = (x381|((x382<=x383)^x384));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	static int32_t x386 = -13;
	int16_t x387 = 1874;
	int8_t x388 = -5;

    t96 = (x385|((x386<=x387)^x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = 2037003562545317LLU;
	int8_t x391 = INT8_MIN;
	static int32_t x392 = -3823717;

    t97 = (x389|((x390<=x391)^x392));

    if (t97 != -3823718) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	volatile int32_t x394 = -797;
	volatile uint64_t x396 = UINT64_MAX;

    t98 = (x393|((x394<=x395)^x396));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 35U;
	static int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;
	uint32_t x400 = UINT32_MAX;
	uint32_t t99 = UINT32_MAX;

    t99 = (x397|((x398<=x399)^x400));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = INT32_MIN;
	int8_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t100 = -1336;

    t100 = (x401|((x402<=x403)^x404));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MAX;
	uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 57U;
	uint64_t x408 = 27002406LLU;
	uint64_t t101 = 33754436417LLU;

    t101 = (x405|((x406<=x407)^x408));

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MAX;
	static volatile int16_t x412 = INT16_MIN;

    t102 = (x409|((x410<=x411)^x412));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -196207382974785336LL;
	int32_t x415 = INT32_MIN;
	volatile int16_t x416 = -1;
	static int64_t t103 = 242386539LL;

    t103 = (x413|((x414<=x415)^x416));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MAX;
	uint16_t x418 = UINT16_MAX;
	uint32_t x419 = 6U;

    t104 = (x417|((x418<=x419)^x420));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MAX;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = 5U;
	int32_t x424 = INT32_MIN;

    t105 = (x421|((x422<=x423)^x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = 6135U;
	static int8_t x426 = INT8_MIN;
	uint64_t x427 = 30845215802LLU;
	uint32_t t106 = 13U;

    t106 = (x425|((x426<=x427)^x428));

    if (t106 != 6135U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -1;
	volatile int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MAX;

    t107 = (x429|((x430<=x431)^x432));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x434 = -1189472016LL;
	int64_t x435 = INT64_MIN;
	uint8_t x436 = 23U;
	volatile uint64_t t108 = 17530578LLU;

    t108 = (x433|((x434<=x435)^x436));

    if (t108 != 31655146935359LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = -6382839218LL;
	volatile int8_t x439 = 0;
	volatile int16_t x440 = 0;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (x437|((x438<=x439)^x440));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	uint8_t x442 = 1U;
	static volatile int8_t x443 = -1;
	volatile int32_t x444 = INT32_MIN;
	int32_t t110 = 1071763365;

    t110 = (x441|((x442<=x443)^x444));

    if (t110 != -2147483521) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 0U;
	static int8_t x446 = -1;
	static int16_t x447 = 87;
	int16_t x448 = INT16_MIN;

    t111 = (x445|((x446<=x447)^x448));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = INT64_MAX;

    t112 = (x449|((x450<=x451)^x452));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	volatile int64_t x454 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	int64_t t113 = 466633449799955LL;

    t113 = (x453|((x454<=x455)^x456));

    if (t113 != -32767LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 81561LLU;
	static int16_t x458 = INT16_MIN;
	int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	volatile uint64_t t114 = 1330454991757LLU;

    t114 = (x457|((x458<=x459)^x460));

    if (t114 != 18446744071562149529LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	uint32_t t115 = UINT32_MAX;

    t115 = (x461|((x462<=x463)^x464));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -1;
	static uint8_t x466 = UINT8_MAX;
	uint64_t x467 = 13050180193LLU;
	uint64_t x468 = 2837LLU;
	uint64_t t116 = UINT64_MAX;

    t116 = (x465|((x466<=x467)^x468));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 1U;
	uint8_t x470 = 13U;
	volatile int32_t x472 = INT32_MIN;
	static volatile int32_t t117 = -203511004;

    t117 = (x469|((x470<=x471)^x472));

    if (t117 != -2147483647) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x474 = 171LL;
	uint64_t x475 = 1231214490519147LLU;

    t118 = (x473|((x474<=x475)^x476));

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MAX;
	int64_t x478 = -1LL;
	int32_t x479 = INT32_MIN;
	static volatile int64_t t119 = INT64_MAX;

    t119 = (x477|((x478<=x479)^x480));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x482 = UINT32_MAX;
	static uint8_t x483 = 6U;
	int16_t x484 = INT16_MAX;
	volatile int32_t t120 = 51354;

    t120 = (x481|((x482<=x483)^x484));

    if (t120 != 327679) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	static int32_t x486 = INT32_MAX;
	uint16_t x488 = 2U;
	volatile int32_t t121 = -1186499;

    t121 = (x485|((x486<=x487)^x488));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = -1;
	int16_t x491 = -1;
	int64_t x492 = INT64_MIN;
	int64_t t122 = -9050LL;

    t122 = (x489|((x490<=x491)^x492));

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 3U;
	volatile int8_t x494 = INT8_MIN;
	static int8_t x495 = INT8_MIN;
	volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = -482657590;

    t123 = (x493|((x494<=x495)^x496));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x498 = 67331LL;
	int32_t t124 = -310854484;

    t124 = (x497|((x498<=x499)^x500));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -1;
	int64_t x502 = -3705887974201809LL;
	int16_t x503 = -1;
	static int64_t x504 = -30921667792261590LL;
	int64_t t125 = 284495462781211968LL;

    t125 = (x501|((x502<=x503)^x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	int32_t x507 = 25;
	volatile uint16_t x508 = 441U;
	volatile int32_t t126 = -1020251720;

    t126 = (x505|((x506<=x507)^x508));

    if (t126 != -2147483208) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = 138574LL;
	uint8_t x511 = UINT8_MAX;

    t127 = (x509|((x510<=x511)^x512));

    if (t127 != 163838LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	uint32_t x515 = UINT32_MAX;
	static int64_t x516 = -1LL;
	volatile int64_t t128 = -143320LL;

    t128 = (x513|((x514<=x515)^x516));

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MIN;
	int8_t x519 = INT8_MIN;
	volatile uint8_t x520 = 21U;
	volatile int32_t t129 = -125481;

    t129 = (x517|((x518<=x519)^x520));

    if (t129 != -108) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MAX;
	static int32_t x523 = -675;
	volatile int32_t t130 = -7429;

    t130 = (x521|((x522<=x523)^x524));

    if (t130 != -2147418113) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = UINT32_MAX;
	int32_t x526 = INT32_MAX;
	uint32_t x527 = 120846U;
	uint16_t x528 = 207U;
	uint32_t t131 = UINT32_MAX;

    t131 = (x525|((x526<=x527)^x528));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = 0;
	int16_t x530 = 11347;
	uint16_t x532 = 1U;
	int32_t t132 = 0;

    t132 = (x529|((x530<=x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = 1;
	uint64_t x534 = 2209LLU;
	int16_t x535 = INT16_MIN;
	int64_t x536 = 6LL;
	volatile int64_t t133 = -129094195791LL;

    t133 = (x533|((x534<=x535)^x536));

    if (t133 != 7LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MIN;
	volatile uint64_t x539 = 455882200973LLU;
	int64_t x540 = INT64_MAX;
	int64_t t134 = INT64_MAX;

    t134 = (x537|((x538<=x539)^x540));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 7LLU;
	static int32_t x542 = 0;
	volatile int16_t x543 = -1001;
	uint16_t x544 = 5U;
	uint64_t t135 = 266124991182LLU;

    t135 = (x541|((x542<=x543)^x544));

    if (t135 != 7LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x546 = INT8_MIN;
	uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t136 = 257LLU;

    t136 = (x545|((x546<=x547)^x548));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = INT16_MAX;
	int32_t x551 = INT32_MAX;
	int32_t x552 = -1;
	int32_t t137 = -7;

    t137 = (x549|((x550<=x551)^x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	static volatile int8_t x554 = INT8_MIN;
	uint32_t x555 = UINT32_MAX;
	int16_t x556 = INT16_MIN;
	static int32_t t138 = -196413681;

    t138 = (x553|((x554<=x555)^x556));

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	int32_t x558 = 426;
	int64_t x559 = INT64_MIN;
	static uint64_t x560 = UINT64_MAX;
	uint64_t t139 = UINT64_MAX;

    t139 = (x557|((x558<=x559)^x560));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -1;
	static uint16_t x564 = 0U;
	int32_t t140 = -1;

    t140 = (x561|((x562<=x563)^x564));

    if (t140 != 1868) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = INT32_MIN;
	volatile int32_t x567 = 484089787;
	int16_t x568 = INT16_MIN;
	int32_t t141 = -725028548;

    t141 = (x565|((x566<=x567)^x568));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = INT16_MIN;
	static volatile int64_t x571 = -1LL;
	uint16_t x572 = UINT16_MAX;

    t142 = (x569|((x570<=x571)^x572));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 2076069U;
	volatile int32_t x574 = INT32_MIN;
	int16_t x576 = INT16_MIN;
	volatile uint32_t t143 = 182736U;

    t143 = (x573|((x574<=x575)^x576));

    if (t143 != 4294946213U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x578 = INT16_MIN;
	volatile int64_t x579 = INT64_MIN;
	volatile int64_t t144 = 0LL;

    t144 = (x577|((x578<=x579)^x580));

    if (t144 != -2147483648LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -35;
	static int32_t x584 = INT32_MIN;
	volatile int32_t t145 = -1;

    t145 = (x581|((x582<=x583)^x584));

    if (t145 != -35) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 2175U;
	volatile int8_t x586 = INT8_MIN;
	int8_t x587 = -1;
	int16_t x588 = 20;
	int32_t t146 = 3830;

    t146 = (x585|((x586<=x587)^x588));

    if (t146 != 2175) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = -26;
	int8_t x591 = 1;
	int32_t x592 = -1;
	volatile int32_t t147 = 20714758;

    t147 = (x589|((x590<=x591)^x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = 188;
	int64_t x595 = -1LL;
	int8_t x596 = -1;

    t148 = (x593|((x594<=x595)^x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = -469LL;
	volatile int8_t x599 = 1;
	uint16_t x600 = 98U;
	volatile int64_t t149 = 56356429378LL;

    t149 = (x597|((x598<=x599)^x600));

    if (t149 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = UINT8_MAX;
	volatile int32_t x603 = INT32_MIN;
	static uint8_t x604 = 1U;

    t150 = (x601|((x602<=x603)^x604));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 119U;
	int16_t x606 = -1;
	int64_t x608 = -21648243246240920LL;
	volatile int64_t t151 = 14LL;

    t151 = (x605|((x606<=x607)^x608));

    if (t151 != -21648243246240897LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = 471LLU;
	int8_t x610 = -1;
	uint64_t x611 = 1LLU;
	uint32_t x612 = 206U;
	uint64_t t152 = 775LLU;

    t152 = (x609|((x610<=x611)^x612));

    if (t152 != 479LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 827U;
	int64_t x614 = INT64_MIN;
	static uint8_t x616 = 26U;
	volatile int32_t t153 = 3933;

    t153 = (x613|((x614<=x615)^x616));

    if (t153 != 827) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = 7;
	static int32_t x618 = -1018317238;
	int8_t x619 = INT8_MAX;
	uint8_t x620 = UINT8_MAX;
	int32_t t154 = -379;

    t154 = (x617|((x618<=x619)^x620));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint64_t x622 = 66432323660752LLU;
	int16_t x623 = 981;
	volatile int8_t x624 = INT8_MAX;
	static volatile int64_t t155 = 68538531975763524LL;

    t155 = (x621|((x622<=x623)^x624));

    if (t155 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x625 = INT16_MAX;
	int64_t x626 = 1022076329124920954LL;
	uint64_t x627 = 69514993LLU;
	uint64_t x628 = UINT64_MAX;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (x625|((x626<=x627)^x628));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = -1;
	int16_t x631 = -13;
	int16_t x632 = INT16_MIN;
	volatile uint64_t t157 = UINT64_MAX;

    t157 = (x629|((x630<=x631)^x632));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	uint16_t x634 = UINT16_MAX;
	volatile int64_t x635 = -1LL;
	int8_t x636 = INT8_MIN;
	volatile uint32_t t158 = UINT32_MAX;

    t158 = (x633|((x634<=x635)^x636));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1263U;
	int64_t x638 = -153149021623638LL;
	static uint8_t x639 = 27U;

    t159 = (x637|((x638<=x639)^x640));

    if (t159 != 1263) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static volatile int64_t x642 = -31753824497LL;
	int32_t x643 = -1;
	int32_t t160 = 14;

    t160 = (x641|((x642<=x643)^x644));

    if (t160 != -2) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	uint64_t x646 = 1493LLU;
	static int16_t x647 = INT16_MIN;
	uint32_t x648 = UINT32_MAX;
	volatile uint32_t t161 = UINT32_MAX;

    t161 = (x645|((x646<=x647)^x648));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = 6021U;
	int64_t x650 = INT64_MAX;
	uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MAX;
	static int32_t t162 = 13279;

    t162 = (x649|((x650<=x651)^x652));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	volatile int16_t x656 = 19;
	static int32_t t163 = -200;

    t163 = (x653|((x654<=x655)^x656));

    if (t163 != -5) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int16_t x658 = -1;
	uint32_t x659 = UINT32_MAX;
	int16_t x660 = 12;
	volatile int64_t t164 = INT64_MAX;

    t164 = (x657|((x658<=x659)^x660));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x663 = INT32_MAX;
	static int16_t x664 = INT16_MIN;
	static volatile uint64_t t165 = 193LLU;

    t165 = (x661|((x662<=x663)^x664));

    if (t165 != 18446744073709522671LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 2315U;
	int8_t x667 = INT8_MIN;
	volatile uint64_t x668 = 68647486770640LLU;
	volatile uint64_t t166 = 40422172768148LLU;

    t166 = (x665|((x666<=x667)^x668));

    if (t166 != 68647486770651LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -10610110160LL;
	int64_t x670 = INT64_MAX;
	int8_t x672 = -1;
	int64_t t167 = 265070659LL;

    t167 = (x669|((x670<=x671)^x672));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -5;
	int16_t x674 = -1;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -24306;

    t168 = (x673|((x674<=x675)^x676));

    if (t168 != -5) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x677 = UINT32_MAX;
	int8_t x678 = -60;
	int16_t x680 = -3;
	static volatile uint32_t t169 = UINT32_MAX;

    t169 = (x677|((x678<=x679)^x680));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = 3395LLU;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = -1;
	static int16_t x684 = -1817;
	uint64_t t170 = 5785358891LLU;

    t170 = (x681|((x682<=x683)^x684));

    if (t170 != 18446744073709551079LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -1LL;
	int16_t x687 = 5;
	static int32_t x688 = -1;
	volatile int32_t t171 = -1132;

    t171 = (x685|((x686<=x687)^x688));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x690 = UINT8_MAX;
	volatile int8_t x691 = INT8_MIN;
	uint64_t x692 = 1543535917455610058LLU;
	static uint64_t t172 = 482579LLU;

    t172 = (x689|((x690<=x691)^x692));

    if (t172 != 1543535917455610058LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	volatile int8_t x694 = -1;
	static volatile uint64_t x695 = 21849606920433752LLU;
	int32_t x696 = 38682884;

    t173 = (x693|((x694<=x695)^x696));

    if (t173 != 38683007) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -18132;
	static int8_t x698 = INT8_MIN;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = 0U;
	volatile int32_t t174 = -7470;

    t174 = (x697|((x698<=x699)^x700));

    if (t174 != -18131) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = -8;
	int64_t x702 = INT64_MAX;
	uint16_t x703 = 18U;
	int8_t x704 = -1;
	int32_t t175 = 3;

    t175 = (x701|((x702<=x703)^x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x707 = 68U;
	int8_t x708 = -1;
	volatile int32_t t176 = 841860;

    t176 = (x705|((x706<=x707)^x708));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int16_t x712 = 973;
	int32_t t177 = -1;

    t177 = (x709|((x710<=x711)^x712));

    if (t177 != -2147482676) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	int16_t x714 = INT16_MIN;
	static volatile uint16_t x715 = UINT16_MAX;
	static int16_t x716 = INT16_MIN;
	volatile int32_t t178 = -11920;

    t178 = (x713|((x714<=x715)^x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	volatile int32_t x718 = -1;
	uint8_t x719 = 4U;
	uint32_t x720 = 8574527U;

    t179 = (x717|((x718<=x719)^x720));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = -915963LL;
	volatile int8_t x723 = INT8_MAX;
	volatile int8_t x724 = INT8_MIN;
	int32_t t180 = 11;

    t180 = (x721|((x722<=x723)^x724));

    if (t180 != -119) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x725 = 66018217U;
	int32_t x726 = -1;
	volatile int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MIN;

    t181 = (x725|((x726<=x727)^x728));

    if (t181 != 4294967209U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = -1LL;
	static int64_t x731 = INT64_MAX;
	int64_t t182 = 1554355902528LL;

    t182 = (x729|((x730<=x731)^x732));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	uint32_t x734 = UINT32_MAX;
	int8_t x736 = INT8_MAX;

    t183 = (x733|((x734<=x735)^x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -7;
	static int16_t x738 = INT16_MIN;
	static int8_t x740 = INT8_MIN;
	volatile int32_t t184 = -71366899;

    t184 = (x737|((x738<=x739)^x740));

    if (t184 != -7) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MIN;
	static volatile int32_t x743 = INT32_MIN;
	int8_t x744 = 17;
	volatile int64_t t185 = -15051LL;

    t185 = (x741|((x742<=x743)^x744));

    if (t185 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x746 = 41U;
	int64_t x747 = -1LL;
	int32_t x748 = INT32_MAX;

    t186 = (x745|((x746<=x747)^x748));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	uint16_t x750 = 59U;
	int8_t x751 = 33;
	volatile int32_t x752 = -1;
	volatile int32_t t187 = -142;

    t187 = (x749|((x750<=x751)^x752));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	uint64_t x756 = UINT64_MAX;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x753|((x754<=x755)^x756));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	volatile uint16_t x758 = UINT16_MAX;
	uint16_t x759 = 1U;
	volatile uint64_t x760 = 101662363383036LLU;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (x757|((x758<=x759)^x760));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = 156;
	uint32_t x763 = 947784487U;
	volatile uint32_t x764 = 46108U;
	volatile int64_t t190 = 17821127822153591LL;

    t190 = (x761|((x762<=x763)^x764));

    if (t190 != -9223372036854729699LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	uint64_t x766 = 0LLU;
	static int32_t x767 = -84950;

    t191 = (x765|((x766<=x767)^x768));

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	int64_t x770 = -3052737909LL;
	int32_t x771 = INT32_MIN;
	int16_t x772 = INT16_MIN;

    t192 = (x769|((x770<=x771)^x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x773 = 43LLU;
	static uint64_t x774 = 11849299922895698LLU;
	uint16_t x775 = UINT16_MAX;
	int8_t x776 = INT8_MAX;
	static uint64_t t193 = 1LLU;

    t193 = (x773|((x774<=x775)^x776));

    if (t193 != 127LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 2U;
	int64_t x779 = 588485LL;
	static int32_t t194 = 13;

    t194 = (x777|((x778<=x779)^x780));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = -1;
	int32_t x782 = INT32_MIN;
	uint16_t x784 = 6819U;

    t195 = (x781|((x782<=x783)^x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	volatile uint32_t x787 = UINT32_MAX;
	int32_t x788 = -1;
	int32_t t196 = -492803;

    t196 = (x785|((x786<=x787)^x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -16;
	int32_t x792 = -248714362;
	static volatile int32_t t197 = -193;

    t197 = (x789|((x790<=x791)^x792));

    if (t197 != -10) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	uint32_t x795 = UINT32_MAX;
	uint32_t x796 = 60U;
	uint32_t t198 = 9483U;

    t198 = (x793|((x794<=x795)^x796));

    if (t198 != 61U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = 43239256848904LL;
	uint16_t x798 = 0U;
	int32_t x799 = INT32_MIN;

    t199 = (x797|((x798<=x799)^x800));

    if (t199 != 43239256849032LL) { NG(); } else { ; }
	
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

