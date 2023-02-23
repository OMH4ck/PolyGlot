
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

static int64_t x10 = 2051656128734746LL;
uint8_t x15 = 3U;
int32_t t3 = -33;
int64_t x37 = INT64_MIN;
uint16_t x38 = 10777U;
int16_t x39 = -593;
volatile int32_t t6 = 0;
int64_t x44 = INT64_MIN;
static volatile uint8_t x49 = 2U;
uint64_t x54 = 1260731577842LLU;
int8_t x67 = -1;
volatile int32_t t13 = 219101429;
int16_t x77 = -1;
int64_t x79 = -1LL;
volatile int64_t x82 = -758884397991LL;
uint32_t x90 = 25U;
static uint64_t x95 = 12015165489238LLU;
static volatile uint64_t x101 = UINT64_MAX;
int32_t x104 = INT32_MIN;
int64_t x106 = -1LL;
int16_t x111 = INT16_MIN;
int32_t t21 = -25458495;
int32_t x114 = INT32_MIN;
uint64_t x115 = 73LLU;
volatile int32_t t22 = 113868;
volatile int32_t t24 = -347;
int8_t x125 = INT8_MIN;
volatile int64_t x135 = 520LL;
volatile int32_t t28 = 22216;
volatile int8_t x153 = INT8_MIN;
int32_t t29 = -44406580;
int8_t x160 = -1;
static volatile uint16_t x173 = 1U;
static int32_t x175 = INT32_MAX;
static volatile int32_t t32 = -2;
int8_t x187 = INT8_MAX;
int32_t t33 = 1773;
int32_t x189 = 200446;
volatile int32_t t34 = -48;
uint32_t x195 = 21U;
int32_t t35 = 247059541;
int32_t x197 = -1456;
volatile uint16_t x199 = 1U;
int8_t x200 = INT8_MAX;
int16_t x202 = INT16_MIN;
int32_t t38 = -572;
int64_t x209 = INT64_MAX;
int8_t x210 = INT8_MIN;
volatile int32_t t42 = -415071;
static uint32_t x231 = 45548U;
volatile uint64_t x240 = 4298742753119LLU;
volatile int16_t x241 = INT16_MAX;
volatile int32_t x245 = INT32_MAX;
int32_t t47 = 296847209;
static volatile int16_t x253 = INT16_MIN;
volatile int32_t t48 = 1;
uint64_t x258 = 1286LLU;
uint32_t x268 = UINT32_MAX;
static int32_t t51 = -5062425;
volatile uint64_t x284 = UINT64_MAX;
volatile int8_t x285 = INT8_MIN;
int32_t x287 = -1;
uint8_t x288 = 5U;
static volatile int16_t x299 = -539;
int32_t t57 = -338189845;
uint32_t x306 = 1354U;
int64_t x307 = -1LL;
uint32_t x313 = 2U;
int16_t x316 = INT16_MAX;
static volatile int32_t t60 = -1039068292;
int32_t x317 = INT32_MAX;
uint32_t x318 = 12U;
static int64_t x325 = -1LL;
int8_t x335 = INT8_MAX;
static volatile int32_t x337 = INT32_MIN;
uint32_t x338 = 31619U;
uint32_t x347 = UINT32_MAX;
int32_t t66 = 24;
uint64_t x356 = 55099721LLU;
int8_t x357 = 17;
uint64_t x359 = 34983272LLU;
uint32_t x364 = 98U;
int32_t x384 = INT32_MIN;
uint8_t x393 = UINT8_MAX;
int64_t x397 = 2882LL;
volatile uint64_t x403 = UINT64_MAX;
volatile int32_t t79 = 6292948;
static uint64_t x413 = 56298711LLU;
int64_t x414 = INT64_MAX;
volatile uint64_t x415 = 51843LLU;
uint64_t x424 = UINT64_MAX;
int8_t x425 = 1;
volatile int32_t t84 = 2047637;
int32_t x442 = INT32_MIN;
int16_t x454 = -737;
uint32_t x455 = 8779078U;
int32_t x456 = INT32_MIN;
volatile int32_t t89 = 127;
volatile int16_t x459 = INT16_MAX;
volatile int16_t x461 = 1289;
static volatile int32_t x468 = INT32_MIN;
uint16_t x469 = 145U;
int32_t x470 = INT32_MAX;
uint64_t x471 = 1084556786954LLU;
int16_t x477 = INT16_MIN;
int16_t x478 = 1;
uint64_t x479 = 6201430540353418386LLU;
uint64_t x487 = 5467868842760807LLU;
uint16_t x488 = 1U;
static int32_t x493 = -1;
volatile int16_t x494 = INT16_MIN;
int32_t t98 = -8;
uint32_t x504 = 32690U;
static int16_t x506 = INT16_MIN;
int64_t x507 = -65421342033821LL;
volatile int32_t t100 = -32583110;
int64_t x518 = -1LL;
static volatile int16_t x519 = -136;
uint32_t x520 = 12585451U;
static volatile int32_t t104 = -1809440;
int16_t x535 = 7;
int32_t x539 = INT32_MIN;
volatile int8_t x542 = -1;
static uint64_t x550 = 66745853699764LLU;
int64_t x557 = 517821LL;
int64_t x563 = -270LL;
int16_t x565 = INT16_MAX;
uint16_t x566 = UINT16_MAX;
uint32_t x569 = UINT32_MAX;
int32_t t113 = 91;
int32_t t114 = -72544;
int16_t x587 = INT16_MIN;
volatile int8_t x592 = INT8_MAX;
static int32_t t119 = -13248;
int16_t x622 = 22;
uint32_t x635 = 379835U;
uint16_t x639 = 50U;
int32_t x642 = INT32_MIN;
int32_t t126 = 6782543;
static volatile uint32_t x646 = 3880U;
volatile int32_t x648 = INT32_MIN;
int32_t x658 = 4;
static int8_t x662 = -1;
int32_t x664 = INT32_MIN;
volatile int16_t x683 = 12955;
int32_t t132 = 437501709;
int16_t x699 = -1;
int32_t t135 = -64;
int32_t t136 = 209;
volatile int32_t x708 = -11;
uint32_t x712 = 1041133645U;
static uint8_t x726 = 0U;
uint64_t x736 = 1900759096193LLU;
static uint32_t x750 = 765771U;
static int64_t x757 = INT64_MAX;
static volatile uint8_t x759 = UINT8_MAX;
static int8_t x760 = INT8_MIN;
int32_t t147 = 441438;
int32_t x764 = -310;
int32_t t148 = -806;
int32_t x778 = 1;
int8_t x784 = INT8_MIN;
static int32_t x789 = INT32_MAX;
volatile int16_t x795 = 10082;
int64_t x797 = 1799255281501841231LL;
static volatile uint16_t x800 = 72U;
static volatile int32_t t155 = -1256144;
int32_t t157 = 22109;
int16_t x811 = INT16_MIN;
uint32_t x815 = UINT32_MAX;
uint8_t x826 = 12U;
uint16_t x829 = 824U;
static uint32_t x831 = 1U;
uint8_t x832 = 95U;
int8_t x834 = INT8_MIN;
static volatile int32_t t163 = -649618260;
volatile int8_t x852 = INT8_MIN;
volatile int32_t t165 = -11;
int32_t x869 = INT32_MIN;
volatile int8_t x872 = INT8_MIN;
int32_t x873 = -394696497;
static int16_t x876 = INT16_MAX;
volatile int32_t t167 = -34013617;
static int32_t t168 = 8;
uint16_t x883 = 26U;
int32_t x889 = INT32_MIN;
int64_t x905 = 641891004LL;
int16_t x910 = -1;
int32_t x919 = -1;
volatile uint8_t x934 = 6U;
static uint32_t x938 = UINT32_MAX;
static int32_t x949 = -335082;
int16_t x955 = -1;
uint32_t x956 = 1602973596U;
static uint8_t x964 = 3U;
int32_t t181 = 0;
volatile int32_t x965 = INT32_MIN;
int8_t x966 = -2;
static int32_t x968 = -1;
uint64_t x981 = UINT64_MAX;
volatile uint8_t x982 = UINT8_MAX;
int16_t x986 = 128;
int8_t x988 = -1;
static uint64_t x994 = 125782595026LLU;
volatile int32_t t186 = -59268622;
uint8_t x1019 = 23U;
static int16_t x1022 = INT16_MIN;
volatile int32_t x1024 = INT32_MIN;
uint64_t x1027 = UINT64_MAX;
volatile int32_t t191 = -1727970;
uint8_t x1029 = 17U;
int64_t x1036 = -67484899101160LL;
int32_t x1045 = -1;
int32_t t196 = -185322045;
int8_t x1058 = INT8_MAX;
int32_t x1060 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -4605;
	static uint16_t x2 = 6U;
	static volatile int16_t x3 = -507;
	uint64_t x4 = 169759LLU;
	static volatile int32_t t0 = -2592;

    t0 = (x1>((x2*x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = -14804245;
	uint8_t x11 = 3U;
	static int8_t x12 = 0;
	volatile int32_t t1 = 8225641;

    t1 = (x9>((x10*x11)&x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x13 = 14;
	uint64_t x14 = 34381LLU;
	uint64_t x16 = 138834928052LLU;
	volatile int32_t t2 = 856458375;

    t2 = (x13>((x14*x15)&x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MAX;
	uint32_t x20 = 24376U;

    t3 = (x17>((x18*x19)&x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x29 = INT8_MAX;
	static volatile uint64_t x30 = UINT64_MAX;
	volatile uint64_t x31 = 3779941390LLU;
	int64_t x32 = INT64_MIN;
	volatile int32_t t4 = 415;

    t4 = (x29>((x30*x31)&x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = UINT16_MAX;
	int8_t x34 = -1;
	volatile int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t5 = -31757;

    t5 = (x33>((x34*x35)&x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x40 = INT8_MAX;

    t6 = (x37>((x38*x39)&x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 641141122LLU;
	int8_t x42 = -30;
	int64_t x43 = -1LL;
	volatile int32_t t7 = 51007939;

    t7 = (x41>((x42*x43)&x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x50 = 1U;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t8 = 77;

    t8 = (x49>((x50*x51)&x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x53 = 34U;
	volatile uint64_t x55 = 2LLU;
	uint8_t x56 = 10U;
	static volatile int32_t t9 = 803976074;

    t9 = (x53>((x54*x55)&x56));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = -461959LL;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = 58;
	int32_t x60 = 944726366;
	volatile int32_t t10 = 923;

    t10 = (x57>((x58*x59)&x60));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = INT8_MIN;
	static uint16_t x62 = 1U;
	static int32_t x63 = -2457;
	int8_t x64 = INT8_MIN;
	int32_t t11 = 27569;

    t11 = (x61>((x62*x63)&x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = 2861456865305552LL;
	int32_t x66 = -18;
	int64_t x68 = -1LL;
	volatile int32_t t12 = 1;

    t12 = (x65>((x66*x67)&x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = INT8_MIN;
	static volatile uint8_t x74 = UINT8_MAX;
	int32_t x75 = -14;
	volatile int32_t x76 = INT32_MAX;

    t13 = (x73>((x74*x75)&x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x78 = 0;
	static int8_t x80 = 13;
	int32_t t14 = -88055532;

    t14 = (x77>((x78*x79)&x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x81 = 426U;
	uint8_t x83 = 26U;
	uint32_t x84 = 85256828U;
	volatile int32_t t15 = 344;

    t15 = (x81>((x82*x83)&x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x89 = 275;
	int16_t x91 = INT16_MIN;
	static volatile int64_t x92 = 7562166945LL;
	volatile int32_t t16 = -79264559;

    t16 = (x89>((x90*x91)&x92));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = INT64_MIN;
	volatile uint32_t x94 = 187029250U;
	static int32_t x96 = INT32_MIN;
	static volatile int32_t t17 = 48669;

    t17 = (x93>((x94*x95)&x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x97 = -18392LL;
	uint32_t x98 = 367U;
	int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t18 = 709388897;

    t18 = (x97>((x98*x99)&x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x102 = 4U;
	static uint8_t x103 = 3U;
	volatile int32_t t19 = -5046056;

    t19 = (x101>((x102*x103)&x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -5;
	int8_t x107 = INT8_MIN;
	volatile int64_t x108 = -5741LL;
	static int32_t t20 = 27349;

    t20 = (x105>((x106*x107)&x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x109 = 5643721U;
	uint64_t x110 = 6857231164721524LLU;
	static uint32_t x112 = UINT32_MAX;

    t21 = (x109>((x110*x111)&x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x113 = 1873832;
	static uint32_t x116 = UINT32_MAX;

    t22 = (x113>((x114*x115)&x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x117 = UINT64_MAX;
	volatile int16_t x118 = INT16_MAX;
	int64_t x119 = 44LL;
	int16_t x120 = INT16_MIN;
	int32_t t23 = 325342;

    t23 = (x117>((x118*x119)&x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = INT8_MIN;
	int16_t x122 = -196;
	int16_t x123 = INT16_MIN;
	int32_t x124 = 28459974;

    t24 = (x121>((x122*x123)&x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t25 = -24412;

    t25 = (x125>((x126*x127)&x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x133 = UINT64_MAX;
	int32_t x134 = 46158;
	int64_t x136 = INT64_MIN;
	static int32_t t26 = -9579;

    t26 = (x133>((x134*x135)&x136));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x137 = UINT64_MAX;
	static int16_t x138 = -486;
	uint64_t x139 = 1654059690150255LLU;
	static uint16_t x140 = UINT16_MAX;
	static int32_t t27 = 168350;

    t27 = (x137>((x138*x139)&x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x141 = INT16_MIN;
	uint8_t x142 = 39U;
	int32_t x143 = 1;
	uint8_t x144 = UINT8_MAX;

    t28 = (x141>((x142*x143)&x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	int32_t x156 = -1;

    t29 = (x153>((x154*x155)&x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x157 = 1U;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 0U;
	static int32_t t30 = -1665680;

    t30 = (x157>((x158*x159)&x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = -865;
	int16_t x162 = -1;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = UINT16_MAX;
	int32_t t31 = 231;

    t31 = (x161>((x162*x163)&x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x174 = 49LLU;
	volatile uint8_t x176 = 28U;

    t32 = (x173>((x174*x175)&x176));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x185 = 1056U;
	uint8_t x186 = 36U;
	int64_t x188 = INT64_MIN;

    t33 = (x185>((x186*x187)&x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x190 = -3116771;
	volatile int32_t x191 = -1;
	volatile int64_t x192 = 13333005LL;

    t34 = (x189>((x190*x191)&x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x193 = 5U;
	static uint16_t x194 = 44U;
	static uint64_t x196 = UINT64_MAX;

    t35 = (x193>((x194*x195)&x196));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x198 = 23U;
	static int32_t t36 = 1051171530;

    t36 = (x197>((x198*x199)&x200));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x201 = -1;
	volatile int8_t x203 = -1;
	int32_t x204 = -28268460;
	volatile int32_t t37 = -341631;

    t37 = (x201>((x202*x203)&x204));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x205 = INT32_MIN;
	uint64_t x206 = 38LLU;
	static volatile int32_t x207 = 6;
	uint64_t x208 = 13068842LLU;

    t38 = (x205>((x206*x207)&x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x211 = UINT16_MAX;
	int8_t x212 = -1;
	int32_t t39 = 258890;

    t39 = (x209>((x210*x211)&x212));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x213 = 498910935692521LLU;
	uint16_t x214 = 762U;
	static int16_t x215 = 343;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t40 = -46579286;

    t40 = (x213>((x214*x215)&x216));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MAX;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = -1;
	int32_t t41 = 4551;

    t41 = (x217>((x218*x219)&x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x221 = -431LL;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	int8_t x224 = INT8_MAX;

    t42 = (x221>((x222*x223)&x224));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x229 = INT32_MIN;
	uint16_t x230 = 2U;
	volatile int16_t x232 = 18;
	int32_t t43 = 313932;

    t43 = (x229>((x230*x231)&x232));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x237 = 432U;
	uint32_t x238 = UINT32_MAX;
	volatile int8_t x239 = -6;
	int32_t t44 = -24;

    t44 = (x237>((x238*x239)&x240));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x242 = INT8_MIN;
	int32_t x243 = 2238837;
	int32_t x244 = -170676;
	static volatile int32_t t45 = 302598;

    t45 = (x241>((x242*x243)&x244));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x246 = -1070;
	uint64_t x247 = 99LLU;
	int8_t x248 = INT8_MIN;
	int32_t t46 = -1440;

    t46 = (x245>((x246*x247)&x248));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x249 = 243875U;
	static uint64_t x250 = 1388310793772970874LLU;
	static uint16_t x251 = 2517U;
	int8_t x252 = INT8_MIN;

    t47 = (x249>((x250*x251)&x252));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x254 = 2092;
	uint8_t x255 = UINT8_MAX;
	volatile uint16_t x256 = 725U;

    t48 = (x253>((x254*x255)&x256));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x257 = 1;
	static volatile uint32_t x259 = 60U;
	int32_t x260 = -1;
	volatile int32_t t49 = -1019463;

    t49 = (x257>((x258*x259)&x260));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x265 = UINT8_MAX;
	volatile uint16_t x266 = 23U;
	int8_t x267 = INT8_MIN;
	volatile int32_t t50 = 17654951;

    t50 = (x265>((x266*x267)&x268));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x269 = 15885U;
	uint8_t x270 = 52U;
	int32_t x271 = -20;
	int32_t x272 = -746166;

    t51 = (x269>((x270*x271)&x272));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x273 = INT8_MIN;
	volatile int16_t x274 = -1;
	int8_t x275 = -6;
	int8_t x276 = -1;
	int32_t t52 = 2621;

    t52 = (x273>((x274*x275)&x276));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x277 = 6340U;
	int8_t x278 = 1;
	int16_t x279 = INT16_MAX;
	int16_t x280 = -1;
	static volatile int32_t t53 = -51758;

    t53 = (x277>((x278*x279)&x280));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x281 = INT32_MIN;
	static uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 315LLU;
	volatile int32_t t54 = -579158876;

    t54 = (x281>((x282*x283)&x284));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x286 = -3;
	volatile int32_t t55 = -35;

    t55 = (x285>((x286*x287)&x288));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x289 = 0LL;
	uint32_t x290 = 74520U;
	uint8_t x291 = 18U;
	int64_t x292 = INT64_MAX;
	static int32_t t56 = -1;

    t56 = (x289>((x290*x291)&x292));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	int32_t x300 = -1;

    t57 = (x297>((x298*x299)&x300));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x301 = UINT16_MAX;
	volatile int32_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MIN;
	int32_t t58 = -631;

    t58 = (x301>((x302*x303)&x304));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x305 = 278;
	int16_t x308 = 915;
	int32_t t59 = 27;

    t59 = (x305>((x306*x307)&x308));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x314 = INT8_MIN;
	int8_t x315 = -1;

    t60 = (x313>((x314*x315)&x316));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x319 = UINT16_MAX;
	int64_t x320 = -88LL;
	volatile int32_t t61 = 15124;

    t61 = (x317>((x318*x319)&x320));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x326 = -24111;
	uint16_t x327 = UINT16_MAX;
	volatile uint8_t x328 = 125U;
	int32_t t62 = -27;

    t62 = (x325>((x326*x327)&x328));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x329 = -1;
	uint16_t x330 = 7798U;
	static int16_t x331 = 11648;
	uint8_t x332 = 14U;
	volatile int32_t t63 = 47636598;

    t63 = (x329>((x330*x331)&x332));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t64 = 582693;

    t64 = (x333>((x334*x335)&x336));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x339 = 4U;
	static volatile uint64_t x340 = 1433025148596LLU;
	volatile int32_t t65 = -127623125;

    t65 = (x337>((x338*x339)&x340));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -1;
	uint32_t x348 = 27274U;

    t66 = (x345>((x346*x347)&x348));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 6U;
	static volatile uint32_t x351 = 350613808U;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t67 = 134231;

    t67 = (x349>((x350*x351)&x352));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x353 = 387215698634LLU;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -23236924147107LL;
	volatile int32_t t68 = 3953330;

    t68 = (x353>((x354*x355)&x356));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x358 = INT8_MIN;
	int16_t x360 = 1214;
	volatile int32_t t69 = -709;

    t69 = (x357>((x358*x359)&x360));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x361 = 4U;
	int16_t x362 = 1;
	uint16_t x363 = 2U;
	int32_t t70 = 2;

    t70 = (x361>((x362*x363)&x364));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MAX;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t71 = 224;

    t71 = (x365>((x366*x367)&x368));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x369 = -1;
	int64_t x370 = 2578LL;
	volatile int8_t x371 = -1;
	int32_t x372 = -1;
	int32_t t72 = -214288;

    t72 = (x369>((x370*x371)&x372));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x377 = INT8_MIN;
	uint64_t x378 = 6055050172LLU;
	static int32_t x379 = -46811;
	volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t73 = 1302117;

    t73 = (x377>((x378*x379)&x380));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x381 = 0U;
	volatile int32_t x382 = -1;
	volatile int8_t x383 = INT8_MIN;
	int32_t t74 = -39115;

    t74 = (x381>((x382*x383)&x384));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x385 = 0U;
	static int32_t x386 = INT32_MIN;
	volatile uint32_t x387 = 26684U;
	static uint8_t x388 = UINT8_MAX;
	static int32_t t75 = -6;

    t75 = (x385>((x386*x387)&x388));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x394 = INT16_MAX;
	int64_t x395 = 468297967338LL;
	static int64_t x396 = INT64_MAX;
	volatile int32_t t76 = -178159258;

    t76 = (x393>((x394*x395)&x396));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x398 = 12435U;
	int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t77 = -34434;

    t77 = (x397>((x398*x399)&x400));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x401 = 6U;
	int8_t x402 = INT8_MIN;
	volatile int32_t x404 = -1;
	static volatile int32_t t78 = -14;

    t78 = (x401>((x402*x403)&x404));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x405 = -62801994;
	volatile uint32_t x406 = UINT32_MAX;
	int8_t x407 = 1;
	int64_t x408 = -70157121093914331LL;

    t79 = (x405>((x406*x407)&x408));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x416 = INT32_MIN;
	int32_t t80 = -1;

    t80 = (x413>((x414*x415)&x416));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x421 = -1304;
	uint8_t x422 = 1U;
	int64_t x423 = -193LL;
	int32_t t81 = -53758652;

    t81 = (x421>((x422*x423)&x424));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x426 = INT8_MIN;
	int8_t x427 = -1;
	volatile int16_t x428 = -1;
	int32_t t82 = 935664;

    t82 = (x425>((x426*x427)&x428));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x429 = INT32_MIN;
	volatile int16_t x430 = -1;
	int16_t x431 = -70;
	int64_t x432 = INT64_MIN;
	volatile int32_t t83 = 1821;

    t83 = (x429>((x430*x431)&x432));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x433 = -4055444;
	uint32_t x434 = 2898U;
	int16_t x435 = INT16_MIN;
	static int32_t x436 = INT32_MAX;

    t84 = (x433>((x434*x435)&x436));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x437 = 2119921;
	static uint32_t x438 = 37425U;
	int8_t x439 = INT8_MAX;
	uint8_t x440 = 6U;
	volatile int32_t t85 = 23;

    t85 = (x437>((x438*x439)&x440));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x441 = -1;
	int16_t x443 = 1;
	int64_t x444 = -5533884579LL;
	volatile int32_t t86 = 17275;

    t86 = (x441>((x442*x443)&x444));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x445 = 27177726825307413LL;
	int16_t x446 = -1;
	uint32_t x447 = UINT32_MAX;
	static uint32_t x448 = 0U;
	volatile int32_t t87 = -166421;

    t87 = (x445>((x446*x447)&x448));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x449 = UINT8_MAX;
	volatile uint64_t x450 = 18949825LLU;
	volatile int64_t x451 = -1789759756LL;
	static int64_t x452 = -1435352342284735403LL;
	int32_t t88 = -1990851;

    t88 = (x449>((x450*x451)&x452));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x453 = 89U;

    t89 = (x453>((x454*x455)&x456));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x457 = 927803192694LLU;
	volatile uint8_t x458 = 10U;
	int32_t x460 = 76;
	int32_t t90 = 903;

    t90 = (x457>((x458*x459)&x460));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x462 = 0U;
	uint64_t x463 = 15982872587403482LLU;
	uint32_t x464 = 9U;
	static int32_t t91 = -308;

    t91 = (x461>((x462*x463)&x464));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = INT8_MIN;
	int32_t t92 = 3003146;

    t92 = (x465>((x466*x467)&x468));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x472 = INT8_MAX;
	int32_t t93 = -172717;

    t93 = (x469>((x470*x471)&x472));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x473 = 81U;
	int16_t x474 = INT16_MAX;
	static uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t94 = 5;

    t94 = (x473>((x474*x475)&x476));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x480 = 0;
	int32_t t95 = 76;

    t95 = (x477>((x478*x479)&x480));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x485 = UINT64_MAX;
	static uint8_t x486 = 3U;
	int32_t t96 = -30785;

    t96 = (x485>((x486*x487)&x488));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x489 = -1;
	static volatile int64_t x490 = -1LL;
	static int64_t x491 = INT64_MAX;
	int16_t x492 = 299;
	int32_t t97 = 17663325;

    t97 = (x489>((x490*x491)&x492));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x495 = INT16_MIN;
	volatile uint32_t x496 = UINT32_MAX;

    t98 = (x493>((x494*x495)&x496));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x501 = 7970051105046LL;
	uint32_t x502 = 1778U;
	volatile int8_t x503 = -1;
	static int32_t t99 = 1013101290;

    t99 = (x501>((x502*x503)&x504));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x505 = -1;
	uint32_t x508 = UINT32_MAX;

    t100 = (x505>((x506*x507)&x508));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x509 = 112U;
	int16_t x510 = -10;
	int16_t x511 = -1;
	uint16_t x512 = 7U;
	volatile int32_t t101 = 413543635;

    t101 = (x509>((x510*x511)&x512));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x513 = INT64_MIN;
	int64_t x514 = -3809247660754157LL;
	volatile int16_t x515 = 221;
	int64_t x516 = INT64_MIN;
	static int32_t t102 = 1;

    t102 = (x513>((x514*x515)&x516));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x517 = INT32_MIN;
	int32_t t103 = -203121264;

    t103 = (x517>((x518*x519)&x520));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x525 = -1;
	uint32_t x526 = UINT32_MAX;
	volatile int8_t x527 = INT8_MIN;
	static uint8_t x528 = UINT8_MAX;

    t104 = (x525>((x526*x527)&x528));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x534 = INT16_MIN;
	int32_t x536 = INT32_MIN;
	int32_t t105 = -158945;

    t105 = (x533>((x534*x535)&x536));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x537 = 211U;
	uint64_t x538 = UINT64_MAX;
	volatile int32_t x540 = -267;
	static int32_t t106 = 15;

    t106 = (x537>((x538*x539)&x540));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x541 = -3;
	static int64_t x543 = -1048614166697LL;
	int16_t x544 = -1;
	int32_t t107 = 0;

    t107 = (x541>((x542*x543)&x544));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x551 = 681;
	volatile uint8_t x552 = 30U;
	static volatile int32_t t108 = -36688120;

    t108 = (x549>((x550*x551)&x552));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile int32_t x554 = -30;
	int8_t x555 = -1;
	int64_t x556 = -1LL;
	static int32_t t109 = -233975553;

    t109 = (x553>((x554*x555)&x556));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x558 = INT8_MIN;
	volatile int8_t x559 = -1;
	int16_t x560 = 0;
	int32_t t110 = 129235862;

    t110 = (x557>((x558*x559)&x560));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x561 = INT8_MAX;
	uint32_t x562 = 26U;
	static int64_t x564 = -1LL;
	int32_t t111 = 4075;

    t111 = (x561>((x562*x563)&x564));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x567 = 7936U;
	static volatile uint8_t x568 = 1U;
	static int32_t t112 = -76;

    t112 = (x565>((x566*x567)&x568));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x570 = 1776U;
	uint64_t x571 = 5746LLU;
	int32_t x572 = INT32_MAX;

    t113 = (x569>((x570*x571)&x572));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x573 = -1;
	volatile int64_t x574 = 1260LL;
	int64_t x575 = -55LL;
	uint64_t x576 = 1759LLU;

    t114 = (x573>((x574*x575)&x576));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x581 = UINT32_MAX;
	int8_t x582 = -1;
	uint8_t x583 = 2U;
	static uint64_t x584 = UINT64_MAX;
	static volatile int32_t t115 = 15242;

    t115 = (x581>((x582*x583)&x584));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x585 = INT32_MAX;
	static volatile int8_t x586 = -55;
	int8_t x588 = -1;
	volatile int32_t t116 = -20223861;

    t116 = (x585>((x586*x587)&x588));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 28U;
	volatile int32_t x591 = 3;
	volatile int32_t t117 = -142095937;

    t117 = (x589>((x590*x591)&x592));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x601 = -7956953590219LL;
	int64_t x602 = INT64_MAX;
	int8_t x603 = 0;
	int16_t x604 = INT16_MAX;
	static volatile int32_t t118 = -50489;

    t118 = (x601>((x602*x603)&x604));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x609 = 250182986429054LLU;
	int8_t x610 = -1;
	volatile int32_t x611 = INT32_MAX;
	uint32_t x612 = 941172U;

    t119 = (x609>((x610*x611)&x612));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x617 = -2047;
	uint8_t x618 = 121U;
	volatile int8_t x619 = INT8_MAX;
	static int32_t x620 = INT32_MAX;
	int32_t t120 = -50177;

    t120 = (x617>((x618*x619)&x620));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x621 = 23841784LLU;
	uint8_t x623 = UINT8_MAX;
	int8_t x624 = INT8_MIN;
	static int32_t t121 = 8;

    t121 = (x621>((x622*x623)&x624));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x625 = INT8_MIN;
	uint32_t x626 = 5U;
	int16_t x627 = INT16_MIN;
	int8_t x628 = -1;
	volatile int32_t t122 = -5849;

    t122 = (x625>((x626*x627)&x628));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x629 = INT64_MIN;
	static uint8_t x630 = 5U;
	volatile int64_t x631 = -1LL;
	int8_t x632 = -1;
	int32_t t123 = 20;

    t123 = (x629>((x630*x631)&x632));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x633 = 23U;
	int16_t x634 = -10;
	static int64_t x636 = -1LL;
	int32_t t124 = -6;

    t124 = (x633>((x634*x635)&x636));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x637 = 1;
	int8_t x638 = INT8_MIN;
	static volatile uint8_t x640 = 17U;
	volatile int32_t t125 = 9837;

    t125 = (x637>((x638*x639)&x640));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x641 = INT16_MIN;
	uint32_t x643 = UINT32_MAX;
	static volatile uint32_t x644 = 495135813U;

    t126 = (x641>((x642*x643)&x644));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x645 = -1LL;
	static volatile int16_t x647 = INT16_MIN;
	static volatile int32_t t127 = 1;

    t127 = (x645>((x646*x647)&x648));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x657 = 2;
	volatile int16_t x659 = -1;
	int64_t x660 = INT64_MAX;
	static volatile int32_t t128 = 1056762587;

    t128 = (x657>((x658*x659)&x660));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x661 = 54U;
	volatile uint8_t x663 = 68U;
	int32_t t129 = -24575564;

    t129 = (x661>((x662*x663)&x664));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x665 = UINT16_MAX;
	volatile int16_t x666 = 9;
	uint8_t x667 = 5U;
	volatile int64_t x668 = -1554247LL;
	int32_t t130 = 36331159;

    t130 = (x665>((x666*x667)&x668));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x673 = UINT8_MAX;
	uint8_t x674 = UINT8_MAX;
	static volatile uint32_t x675 = UINT32_MAX;
	int64_t x676 = 34088165135LL;
	int32_t t131 = -11311581;

    t131 = (x673>((x674*x675)&x676));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x681 = 7525544;
	static int16_t x682 = -15;
	static volatile int64_t x684 = INT64_MIN;

    t132 = (x681>((x682*x683)&x684));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	static uint64_t x686 = 0LLU;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MIN;
	volatile int32_t t133 = 1;

    t133 = (x685>((x686*x687)&x688));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x689 = -1;
	volatile int8_t x690 = INT8_MIN;
	volatile int64_t x691 = -1LL;
	uint8_t x692 = 49U;
	static volatile int32_t t134 = -695;

    t134 = (x689>((x690*x691)&x692));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x697 = -1LL;
	int32_t x698 = -446;
	uint8_t x700 = 3U;

    t135 = (x697>((x698*x699)&x700));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x701 = 1115U;
	static int8_t x702 = 6;
	uint16_t x703 = 17137U;
	volatile int64_t x704 = INT64_MIN;

    t136 = (x701>((x702*x703)&x704));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x705 = -1;
	uint32_t x706 = 105064U;
	volatile uint32_t x707 = UINT32_MAX;
	int32_t t137 = 30;

    t137 = (x705>((x706*x707)&x708));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 4LLU;
	volatile int8_t x711 = INT8_MIN;
	volatile int32_t t138 = 59515;

    t138 = (x709>((x710*x711)&x712));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x713 = INT64_MIN;
	uint16_t x714 = 1U;
	int16_t x715 = INT16_MAX;
	int8_t x716 = INT8_MAX;
	volatile int32_t t139 = -17;

    t139 = (x713>((x714*x715)&x716));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x721 = INT8_MAX;
	volatile uint32_t x722 = 0U;
	uint8_t x723 = 0U;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t140 = 153;

    t140 = (x721>((x722*x723)&x724));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x725 = INT32_MAX;
	volatile int32_t x727 = INT32_MAX;
	int32_t x728 = INT32_MIN;
	static volatile int32_t t141 = 903728;

    t141 = (x725>((x726*x727)&x728));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x733 = -1LL;
	int16_t x734 = 1;
	int16_t x735 = 1105;
	volatile int32_t t142 = 8;

    t142 = (x733>((x734*x735)&x736));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x737 = -6;
	volatile uint32_t x738 = 345427755U;
	static int8_t x739 = INT8_MIN;
	int16_t x740 = 6650;
	volatile int32_t t143 = 99;

    t143 = (x737>((x738*x739)&x740));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x741 = UINT16_MAX;
	int8_t x742 = 0;
	static int16_t x743 = 1;
	uint64_t x744 = 842145LLU;
	static int32_t t144 = 29287;

    t144 = (x741>((x742*x743)&x744));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = 2070565200247LL;
	volatile int16_t x747 = INT16_MAX;
	int8_t x748 = -1;
	static volatile int32_t t145 = -2491048;

    t145 = (x745>((x746*x747)&x748));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x749 = -1;
	uint64_t x751 = 2552733LLU;
	int16_t x752 = -1;
	volatile int32_t t146 = 0;

    t146 = (x749>((x750*x751)&x752));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x758 = 0U;

    t147 = (x757>((x758*x759)&x760));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x761 = UINT8_MAX;
	static uint32_t x762 = 732U;
	static int8_t x763 = 7;

    t148 = (x761>((x762*x763)&x764));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x765 = INT16_MAX;
	volatile int32_t x766 = -1;
	volatile uint8_t x767 = 101U;
	uint64_t x768 = 15980675LLU;
	static int32_t t149 = 1;

    t149 = (x765>((x766*x767)&x768));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x769 = 175676151U;
	uint32_t x770 = 4959994U;
	int8_t x771 = -1;
	int64_t x772 = -1LL;
	int32_t t150 = -10998871;

    t150 = (x769>((x770*x771)&x772));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x777 = -9518127991LL;
	static int16_t x779 = -8326;
	int32_t x780 = -208201907;
	volatile int32_t t151 = -61643;

    t151 = (x777>((x778*x779)&x780));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x782 = -520573404727599255LL;
	volatile int32_t x783 = -1;
	volatile int32_t t152 = -22524499;

    t152 = (x781>((x782*x783)&x784));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x790 = -7;
	volatile uint32_t x791 = 18U;
	uint32_t x792 = 1475361267U;
	volatile int32_t t153 = 6;

    t153 = (x789>((x790*x791)&x792));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x793 = 6940120LL;
	volatile int16_t x794 = INT16_MIN;
	volatile int32_t x796 = -1;
	int32_t t154 = -182;

    t154 = (x793>((x794*x795)&x796));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x798 = -1LL;
	int32_t x799 = INT32_MAX;

    t155 = (x797>((x798*x799)&x800));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x801 = INT64_MIN;
	volatile uint64_t x802 = 15741LLU;
	uint8_t x803 = 92U;
	static volatile int8_t x804 = INT8_MIN;
	int32_t t156 = 2701;

    t156 = (x801>((x802*x803)&x804));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x805 = 0;
	int16_t x806 = 125;
	uint32_t x807 = 45050088U;
	static uint64_t x808 = UINT64_MAX;

    t157 = (x805>((x806*x807)&x808));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x809 = 20U;
	uint8_t x810 = 15U;
	static int64_t x812 = -1LL;
	static int32_t t158 = -21;

    t158 = (x809>((x810*x811)&x812));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x813 = -1004491;
	uint32_t x814 = 265222U;
	static int16_t x816 = INT16_MAX;
	volatile int32_t t159 = 4;

    t159 = (x813>((x814*x815)&x816));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x821 = INT8_MIN;
	uint16_t x822 = UINT16_MAX;
	static int32_t x823 = -1;
	int8_t x824 = -1;
	int32_t t160 = -4628998;

    t160 = (x821>((x822*x823)&x824));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x825 = 3427690LLU;
	int16_t x827 = -858;
	static int8_t x828 = -1;
	int32_t t161 = -88396542;

    t161 = (x825>((x826*x827)&x828));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x830 = -1;
	static volatile int32_t t162 = 32076;

    t162 = (x829>((x830*x831)&x832));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x833 = INT64_MIN;
	static uint8_t x835 = 9U;
	volatile uint32_t x836 = 3701U;

    t163 = (x833>((x834*x835)&x836));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x849 = -3;
	int8_t x850 = -19;
	int8_t x851 = -1;
	volatile int32_t t164 = 1789;

    t164 = (x849>((x850*x851)&x852));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x861 = UINT64_MAX;
	static uint32_t x862 = UINT32_MAX;
	uint64_t x863 = 1920797LLU;
	static int32_t x864 = INT32_MIN;

    t165 = (x861>((x862*x863)&x864));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x870 = 869827652315207LLU;
	int16_t x871 = INT16_MIN;
	int32_t t166 = -46106807;

    t166 = (x869>((x870*x871)&x872));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x874 = 1U;
	int64_t x875 = -1LL;

    t167 = (x873>((x874*x875)&x876));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x877 = 109U;
	int32_t x878 = -1;
	int64_t x879 = INT64_MAX;
	int64_t x880 = INT64_MAX;

    t168 = (x877>((x878*x879)&x880));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x881 = 0;
	volatile uint64_t x882 = UINT64_MAX;
	uint16_t x884 = 2248U;
	int32_t t169 = 765;

    t169 = (x881>((x882*x883)&x884));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x890 = 3;
	static int16_t x891 = INT16_MIN;
	int32_t x892 = INT32_MIN;
	volatile int32_t t170 = 390;

    t170 = (x889>((x890*x891)&x892));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x901 = -1LL;
	volatile uint64_t x902 = 21602LLU;
	int16_t x903 = INT16_MIN;
	static int64_t x904 = INT64_MIN;
	volatile int32_t t171 = 258166241;

    t171 = (x901>((x902*x903)&x904));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x906 = 666058131804LLU;
	uint8_t x907 = 65U;
	int16_t x908 = INT16_MIN;
	volatile int32_t t172 = -109178608;

    t172 = (x905>((x906*x907)&x908));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x909 = INT8_MAX;
	volatile uint32_t x911 = 498824686U;
	static uint32_t x912 = 753U;
	volatile int32_t t173 = 198;

    t173 = (x909>((x910*x911)&x912));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x917 = 9;
	volatile uint32_t x918 = 58U;
	static uint64_t x920 = UINT64_MAX;
	volatile int32_t t174 = 240966;

    t174 = (x917>((x918*x919)&x920));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x933 = -1;
	int16_t x935 = INT16_MIN;
	static int64_t x936 = INT64_MIN;
	volatile int32_t t175 = -74745132;

    t175 = (x933>((x934*x935)&x936));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x937 = INT32_MIN;
	static int16_t x939 = INT16_MIN;
	uint64_t x940 = UINT64_MAX;
	volatile int32_t t176 = 6884;

    t176 = (x937>((x938*x939)&x940));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x941 = 91639421817226989LLU;
	volatile int16_t x942 = 87;
	int8_t x943 = INT8_MAX;
	int64_t x944 = INT64_MAX;
	volatile int32_t t177 = -400;

    t177 = (x941>((x942*x943)&x944));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x945 = 0U;
	int16_t x946 = -1;
	static int16_t x947 = INT16_MAX;
	int32_t x948 = INT32_MIN;
	int32_t t178 = -159330;

    t178 = (x945>((x946*x947)&x948));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x950 = 0;
	int16_t x951 = INT16_MIN;
	uint16_t x952 = 7U;
	static int32_t t179 = -11603846;

    t179 = (x949>((x950*x951)&x952));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x953 = 5LLU;
	int8_t x954 = INT8_MIN;
	static volatile int32_t t180 = 1;

    t180 = (x953>((x954*x955)&x956));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x961 = -4226788359571LL;
	volatile int8_t x962 = INT8_MIN;
	volatile int16_t x963 = -9;

    t181 = (x961>((x962*x963)&x964));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x967 = 468313565U;
	volatile int32_t t182 = 7;

    t182 = (x965>((x966*x967)&x968));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x969 = UINT8_MAX;
	volatile int8_t x970 = -51;
	static uint32_t x971 = 654U;
	static int16_t x972 = 117;
	volatile int32_t t183 = 5525;

    t183 = (x969>((x970*x971)&x972));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x983 = 29735U;
	int32_t x984 = INT32_MIN;
	static int32_t t184 = 12891;

    t184 = (x981>((x982*x983)&x984));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x985 = -1;
	int64_t x987 = -1LL;
	static volatile int32_t t185 = 26;

    t185 = (x985>((x986*x987)&x988));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x993 = INT16_MIN;
	static int16_t x995 = -387;
	int64_t x996 = INT64_MIN;

    t186 = (x993>((x994*x995)&x996));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x997 = INT64_MIN;
	int16_t x998 = INT16_MIN;
	static uint32_t x999 = UINT32_MAX;
	uint16_t x1000 = UINT16_MAX;
	volatile int32_t t187 = 91;

    t187 = (x997>((x998*x999)&x1000));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1013 = INT8_MIN;
	uint8_t x1014 = 29U;
	int8_t x1015 = INT8_MIN;
	int8_t x1016 = -2;
	volatile int32_t t188 = -1583297;

    t188 = (x1013>((x1014*x1015)&x1016));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1017 = 14715U;
	volatile int16_t x1018 = -15172;
	static int64_t x1020 = 52892081775463LL;
	static int32_t t189 = -203668;

    t189 = (x1017>((x1018*x1019)&x1020));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1021 = 1604228344U;
	uint64_t x1023 = UINT64_MAX;
	int32_t t190 = -1;

    t190 = (x1021>((x1022*x1023)&x1024));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1025 = INT64_MIN;
	volatile uint32_t x1026 = UINT32_MAX;
	volatile int32_t x1028 = INT32_MIN;

    t191 = (x1025>((x1026*x1027)&x1028));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1030 = 1;
	uint64_t x1031 = UINT64_MAX;
	int32_t x1032 = -116871917;
	int32_t t192 = -1;

    t192 = (x1029>((x1030*x1031)&x1032));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1033 = 22935048757234LLU;
	int64_t x1034 = -774113731LL;
	uint16_t x1035 = UINT16_MAX;
	volatile int32_t t193 = 42191099;

    t193 = (x1033>((x1034*x1035)&x1036));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1037 = INT16_MIN;
	static uint64_t x1038 = 110839997LLU;
	int32_t x1039 = INT32_MIN;
	static volatile uint8_t x1040 = 89U;
	int32_t t194 = 216162;

    t194 = (x1037>((x1038*x1039)&x1040));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1041 = UINT8_MAX;
	volatile int64_t x1042 = -1LL;
	static uint8_t x1043 = 1U;
	static uint16_t x1044 = 112U;
	int32_t t195 = 137741;

    t195 = (x1041>((x1042*x1043)&x1044));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1046 = 1;
	static uint32_t x1047 = 423220978U;
	int32_t x1048 = 9126921;

    t196 = (x1045>((x1046*x1047)&x1048));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1049 = -32390;
	int8_t x1050 = -7;
	uint64_t x1051 = 58251424LLU;
	volatile int16_t x1052 = -1;
	int32_t t197 = 17027;

    t197 = (x1049>((x1050*x1051)&x1052));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1053 = INT8_MIN;
	int16_t x1054 = INT16_MIN;
	volatile int64_t x1055 = -12752925957318LL;
	uint32_t x1056 = UINT32_MAX;
	int32_t t198 = -66091232;

    t198 = (x1053>((x1054*x1055)&x1056));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1057 = -1LL;
	static int64_t x1059 = -1LL;
	int32_t t199 = 762742204;

    t199 = (x1057>((x1058*x1059)&x1060));

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

