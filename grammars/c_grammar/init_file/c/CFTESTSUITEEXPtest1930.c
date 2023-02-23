
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

static int32_t x2 = -1;
uint64_t x11 = 59564103295067LLU;
volatile int16_t x14 = 0;
int8_t x22 = -16;
int64_t t6 = -30350478618240023LL;
static int32_t x32 = -1;
volatile int64_t x35 = INT64_MIN;
volatile int32_t x47 = -1;
int16_t x48 = INT16_MIN;
static uint32_t t11 = 9423U;
int8_t x60 = INT8_MIN;
int8_t x64 = -17;
int64_t x72 = 1668LL;
static volatile int64_t t17 = 439786179338LL;
int32_t x78 = INT32_MIN;
uint32_t x81 = UINT32_MAX;
volatile int64_t t22 = 97358258LL;
int64_t x95 = 191312LL;
int8_t x96 = INT8_MIN;
static uint64_t x99 = UINT64_MAX;
uint16_t x101 = 26U;
static int32_t x107 = 1;
volatile uint8_t x111 = UINT8_MAX;
int16_t x112 = -1;
static int32_t x120 = INT32_MIN;
volatile int64_t t29 = 73656920423206031LL;
volatile uint16_t x121 = 48U;
int32_t x123 = -1;
int64_t x125 = -21634481695406856LL;
static int64_t x126 = INT64_MIN;
uint8_t x129 = 25U;
uint8_t x137 = UINT8_MAX;
int64_t x138 = INT64_MAX;
int64_t t36 = -85461577913844027LL;
int8_t x151 = 5;
static int32_t x159 = INT32_MIN;
uint64_t t40 = 62031856LLU;
int32_t t42 = -6;
int16_t x173 = -1;
static uint8_t x177 = 9U;
volatile uint64_t t45 = 306LLU;
uint64_t x185 = UINT64_MAX;
uint64_t x187 = UINT64_MAX;
int8_t x194 = INT8_MIN;
int64_t x196 = -1787127894LL;
volatile int64_t t48 = -7244188394139606LL;
uint8_t x204 = UINT8_MAX;
int16_t x214 = 5;
int32_t x216 = INT32_MAX;
volatile int32_t x220 = 135;
volatile int32_t t54 = 62;
volatile uint32_t t55 = 897097294U;
int32_t t56 = 426;
int8_t x232 = -1;
static volatile int32_t t57 = 352767825;
int16_t x233 = -87;
static uint8_t x234 = 2U;
int64_t x236 = INT64_MIN;
int64_t x244 = INT64_MAX;
int16_t x247 = 399;
int64_t x250 = INT64_MIN;
volatile int16_t x251 = INT16_MIN;
int8_t x252 = INT8_MIN;
int64_t t62 = -671098LL;
int32_t x258 = -802026624;
int16_t x259 = INT16_MIN;
int16_t x260 = INT16_MAX;
int64_t x263 = -1LL;
int16_t x266 = 125;
volatile int64_t t66 = 8141591761020LL;
static int64_t t67 = -241LL;
int64_t t69 = 1369223994LL;
int32_t x281 = -9980227;
int64_t x285 = 2598770046546LL;
int64_t x297 = -1LL;
int8_t x299 = 15;
volatile int32_t t75 = -327168562;
uint32_t t76 = 2244U;
int32_t x311 = INT32_MIN;
static volatile uint64_t t77 = 6344214223LLU;
int32_t t78 = 215047;
static volatile uint64_t x324 = 5678071279LLU;
volatile int16_t x326 = 1169;
int32_t t82 = 181968398;
uint8_t x335 = 115U;
int16_t x337 = INT16_MAX;
int64_t x343 = INT64_MAX;
int32_t x356 = INT32_MIN;
static int8_t x357 = -1;
uint8_t x365 = 29U;
int64_t x366 = INT64_MIN;
volatile int32_t t91 = -37470093;
int16_t x372 = INT16_MAX;
static volatile int64_t x373 = INT64_MAX;
int64_t x374 = INT64_MIN;
volatile int64_t t93 = -5LL;
int64_t x377 = INT64_MIN;
volatile int64_t x380 = INT64_MIN;
volatile int64_t t94 = 341405847848260778LL;
uint8_t x381 = UINT8_MAX;
static uint16_t x385 = UINT16_MAX;
volatile int16_t x390 = INT16_MIN;
volatile int16_t x391 = INT16_MAX;
int64_t x404 = 32341451876288486LL;
int32_t x414 = 3420;
int8_t x415 = INT8_MAX;
uint8_t x422 = UINT8_MAX;
static uint8_t x430 = 0U;
int32_t x435 = INT32_MIN;
uint64_t x437 = UINT64_MAX;
volatile uint64_t x438 = UINT64_MAX;
static int32_t x449 = -23375242;
uint64_t x451 = 258939660160319954LLU;
int64_t x455 = -1LL;
static int16_t x458 = -1;
volatile int16_t x461 = INT16_MIN;
int64_t x467 = INT64_MAX;
int16_t x468 = INT16_MAX;
int8_t x484 = -1;
volatile int32_t t124 = 50422099;
int16_t x507 = -32;
static volatile int16_t x514 = INT16_MIN;
volatile int32_t t128 = 6923;
int8_t x520 = -12;
int64_t x521 = 1760871077074796569LL;
volatile int64_t t130 = -38879LL;
uint64_t x528 = 30956LLU;
int32_t x532 = INT32_MAX;
int64_t x538 = -1LL;
int16_t x542 = INT16_MIN;
volatile int32_t t135 = 42819;
uint64_t x549 = 722033560857LLU;
int32_t x551 = INT32_MAX;
int16_t x553 = INT16_MAX;
int32_t x558 = INT32_MAX;
static uint32_t x562 = 3589971U;
volatile int64_t t142 = 1494675679696097LL;
uint32_t x579 = 20316U;
static int8_t x580 = INT8_MIN;
static uint8_t x582 = UINT8_MAX;
static int32_t t145 = -530;
uint32_t x594 = UINT32_MAX;
volatile int64_t t148 = 2629113363127380LL;
volatile int32_t t158 = -29131946;
uint64_t x638 = 160891713493LLU;
int64_t t159 = -7943415766252789LL;
static int32_t x641 = INT32_MIN;
volatile int32_t t161 = -11;
int16_t x653 = 160;
uint32_t x655 = 17795U;
volatile uint32_t t165 = 36537U;
volatile int64_t t166 = 32LL;
volatile int32_t t167 = -3371;
volatile int64_t t168 = 319858LL;
static uint16_t x681 = UINT16_MAX;
int16_t x692 = INT16_MIN;
int64_t x697 = INT64_MIN;
static int32_t x700 = 37825;
int32_t x701 = -397268338;
uint32_t x710 = 22932U;
int32_t t177 = -5;
static int8_t x717 = 16;
static int64_t x719 = INT64_MAX;
static int32_t t180 = 1;
static int64_t x729 = INT64_MIN;
static volatile int64_t t182 = 1434193608896282LL;
static int32_t x734 = INT32_MAX;
static int16_t x739 = -3003;
uint8_t x748 = UINT8_MAX;
int64_t x749 = -1LL;
uint8_t x752 = 50U;
int16_t x753 = -1;
int64_t x758 = 199708283604691LL;
int32_t x761 = INT32_MIN;
static volatile uint64_t t193 = 2867781LLU;
static int8_t x777 = INT8_MAX;
int32_t x779 = INT32_MIN;
volatile uint32_t t194 = 529543U;
int64_t x786 = -1LL;
static int32_t x788 = -1;
static volatile int32_t x796 = -508;
static int32_t t198 = -2779;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint8_t x3 = 123U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 190154686046752LL;

    t0 = (x1&((x2<=x3)&x4));

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint64_t x6 = UINT64_MAX;
	static volatile int64_t x7 = INT64_MIN;
	int16_t x8 = 31;
	int32_t t1 = -777215563;

    t1 = (x5&((x6<=x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint32_t x10 = 0U;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 45582454U;

    t2 = (x9&((x10<=x11)&x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	uint8_t x16 = 0U;
	int64_t t3 = 205715LL;

    t3 = (x13&((x14<=x15)&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 382626374;
	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	int64_t x20 = 2212277745872816LL;
	volatile int64_t t4 = -33647135764485732LL;

    t4 = (x17&((x18<=x19)&x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	int64_t x23 = INT64_MIN;
	static volatile int16_t x24 = INT16_MAX;
	int32_t t5 = 1904;

    t5 = (x21&((x22<=x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -14260855626LL;
	uint8_t x26 = UINT8_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	static volatile int32_t x28 = 39;

    t6 = (x25&((x26<=x27)&x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MAX;
	volatile int32_t x30 = INT32_MIN;
	uint64_t x31 = 142893503317253706LLU;
	int32_t t7 = -14922;

    t7 = (x29&((x30<=x31)&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int32_t x34 = -1;
	uint64_t x36 = 3770672229584LLU;
	static uint64_t t8 = 337965264LLU;

    t8 = (x33&((x34<=x35)&x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = -26;
	int16_t x39 = INT16_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -4477908798LL;

    t9 = (x37&((x38<=x39)&x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	volatile int8_t x42 = INT8_MAX;
	uint16_t x43 = 108U;
	static volatile uint16_t x44 = 11290U;
	int32_t t10 = 26620059;

    t10 = (x41&((x42<=x43)&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	static uint64_t x46 = UINT64_MAX;

    t11 = (x45&((x46<=x47)&x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = 1972LL;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	static volatile int64_t t12 = -12610048823LL;

    t12 = (x49&((x50<=x51)&x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	static int32_t x54 = INT32_MAX;
	static int16_t x55 = INT16_MIN;
	volatile int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 188LL;

    t13 = (x53&((x54<=x55)&x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint16_t x58 = 42U;
	int8_t x59 = INT8_MAX;
	int64_t t14 = -13860LL;

    t14 = (x57&((x58<=x59)&x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1302;
	static uint32_t x62 = 13U;
	volatile int8_t x63 = -1;
	volatile int32_t t15 = -3756808;

    t15 = (x61&((x62<=x63)&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 12492U;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 1064362431505445LLU;
	static volatile int64_t x68 = -89497653LL;
	volatile int64_t t16 = 27888454LL;

    t16 = (x65&((x66<=x67)&x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -25737283;
	int32_t x70 = INT32_MAX;
	uint64_t x71 = UINT64_MAX;

    t17 = (x69&((x70<=x71)&x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 1;
	volatile uint16_t x74 = 0U;
	int64_t x75 = 559704528087LL;
	uint8_t x76 = 7U;
	int32_t t18 = -8;

    t18 = (x73&((x74<=x75)&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	volatile uint64_t x79 = 220529LLU;
	int8_t x80 = 2;
	int32_t t19 = -3283;

    t19 = (x77&((x78<=x79)&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	int64_t x84 = -1LL;
	volatile int64_t t20 = 15986254692904LL;

    t20 = (x81&((x82<=x83)&x84));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 1986;

    t21 = (x85&((x86<=x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -112786962835174613LL;
	uint64_t x90 = 359LLU;
	uint32_t x91 = 1163373U;
	uint32_t x92 = 141574U;

    t22 = (x89&((x90<=x91)&x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 841503494U;
	uint8_t x94 = 13U;
	static uint32_t t23 = 4U;

    t23 = (x93&((x94<=x95)&x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	static int16_t x98 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -2446;

    t24 = (x97&((x98<=x99)&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 10864017;

    t25 = (x101&((x102<=x103)&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	uint32_t x106 = 625572586U;
	uint8_t x108 = 59U;
	int64_t t26 = 398810146LL;

    t26 = (x105&((x106<=x107)&x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = UINT32_MAX;
	uint16_t x110 = UINT16_MAX;
	volatile uint32_t t27 = 0U;

    t27 = (x109&((x110<=x111)&x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MAX;
	volatile int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	static int64_t t28 = -12976540114775065LL;

    t28 = (x113&((x114<=x115)&x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -203251363171LL;
	static int8_t x118 = 0;
	int64_t x119 = INT64_MAX;

    t29 = (x117&((x118<=x119)&x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	int16_t x124 = -1;
	static int32_t t30 = 15;

    t30 = (x121&((x122<=x123)&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x127 = 79229158U;
	int64_t x128 = 19718309339894LL;
	volatile int64_t t31 = 3127255481039136LL;

    t31 = (x125&((x126<=x127)&x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MIN;
	uint32_t x131 = 6107U;
	uint16_t x132 = 7046U;
	volatile int32_t t32 = 460871559;

    t32 = (x129&((x130<=x131)&x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	volatile int16_t x134 = -1;
	static int16_t x135 = INT16_MAX;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -973LL;

    t33 = (x133&((x134<=x135)&x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x139 = -393;
	int32_t x140 = -1;
	volatile int32_t t34 = 30336230;

    t34 = (x137&((x138<=x139)&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	static int64_t x143 = -101657380280276579LL;
	static int16_t x144 = -3797;
	int32_t t35 = 2773284;

    t35 = (x141&((x142<=x143)&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -3341630LL;
	volatile int64_t x146 = INT64_MIN;
	int32_t x147 = 14;
	uint16_t x148 = UINT16_MAX;

    t36 = (x145&((x146<=x147)&x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = 1LL;
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	static int64_t t37 = -2922177LL;

    t37 = (x149&((x150<=x151)&x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	static int32_t x154 = -1;
	uint8_t x155 = 0U;
	uint16_t x156 = 2U;
	int32_t t38 = 5;

    t38 = (x153&((x154<=x155)&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	uint8_t x158 = 91U;
	uint64_t x160 = 1LLU;
	volatile uint64_t t39 = 4575042657232525329LLU;

    t39 = (x157&((x158<=x159)&x160));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile uint64_t x164 = 201920533LLU;

    t40 = (x161&((x162<=x163)&x164));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint8_t x166 = 1U;
	volatile uint16_t x167 = 672U;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -62188106;

    t41 = (x165&((x166<=x167)&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = -1;
	int16_t x170 = -1;
	uint8_t x171 = 35U;
	static int32_t x172 = -1;

    t42 = (x169&((x170<=x171)&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = -1;
	static int32_t x175 = 212;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -2403;

    t43 = (x173&((x174<=x175)&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x178 = 468441;
	volatile uint64_t x179 = 1940325712LLU;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 2008234;

    t44 = (x177&((x178<=x179)&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 321207708LLU;
	int8_t x182 = 1;
	int64_t x183 = INT64_MIN;
	volatile int8_t x184 = INT8_MAX;

    t45 = (x181&((x182<=x183)&x184));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MAX;
	int8_t x188 = INT8_MAX;
	uint64_t t46 = 1LLU;

    t46 = (x185&((x186<=x187)&x188));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -2;
	int32_t x190 = INT32_MIN;
	static int8_t x191 = -1;
	static volatile int64_t x192 = INT64_MIN;
	volatile int64_t t47 = 25663268390560479LL;

    t47 = (x189&((x190<=x191)&x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 659U;
	int8_t x195 = INT8_MAX;

    t48 = (x193&((x194<=x195)&x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 15348U;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = -1;
	volatile int64_t x200 = -970482718LL;
	volatile int64_t t49 = -846691396463022247LL;

    t49 = (x197&((x198<=x199)&x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -3905710684113LL;
	int64_t x202 = -1786984990234110LL;
	static uint8_t x203 = 17U;
	int64_t t50 = 572018LL;

    t50 = (x201&((x202<=x203)&x204));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = -1LL;
	int8_t x208 = -25;
	int32_t t51 = 57331;

    t51 = (x205&((x206<=x207)&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 1;
	volatile uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 6911100249311286LLU;
	int64_t x212 = 41323210530265LL;
	volatile int64_t t52 = 0LL;

    t52 = (x209&((x210<=x211)&x212));

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	int32_t x215 = INT32_MIN;
	int64_t t53 = 1022034320LL;

    t53 = (x213&((x214<=x215)&x216));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	uint64_t x218 = 221708LLU;
	int8_t x219 = INT8_MIN;

    t54 = (x217&((x218<=x219)&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -11;
	static int16_t x222 = INT16_MIN;
	int8_t x223 = -7;
	uint32_t x224 = 10U;

    t55 = (x221&((x222<=x223)&x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = 1;
	uint8_t x226 = UINT8_MAX;
	uint8_t x227 = 5U;
	static int16_t x228 = -1;

    t56 = (x225&((x226<=x227)&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -3;
	uint64_t x230 = 3915057527LLU;
	volatile int16_t x231 = -1;

    t57 = (x229&((x230<=x231)&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x235 = 27U;
	volatile int64_t t58 = -2638098496215600043LL;

    t58 = (x233&((x234<=x235)&x236));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int64_t x238 = -3998LL;
	volatile int8_t x239 = 49;
	static int8_t x240 = -1;
	volatile int32_t t59 = -1337826;

    t59 = (x237&((x238<=x239)&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = -1;
	static int16_t x243 = INT16_MAX;
	static volatile int64_t t60 = 7LL;

    t60 = (x241&((x242<=x243)&x244));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = 28761808513LL;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = 198028LL;

    t61 = (x245&((x246<=x247)&x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MIN;

    t62 = (x249&((x250<=x251)&x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 31875342U;
	volatile uint8_t x255 = 1U;
	int8_t x256 = -3;
	static volatile uint64_t t63 = 37713687113717947LLU;

    t63 = (x253&((x254<=x255)&x256));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x257 = 56U;
	volatile int32_t t64 = 1871;

    t64 = (x257&((x258<=x259)&x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 913U;
	uint64_t x262 = 9184642495372415366LLU;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = 168U;

    t65 = (x261&((x262<=x263)&x264));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 564U;
	volatile int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;

    t66 = (x265&((x266<=x267)&x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	uint8_t x270 = 13U;
	volatile int32_t x271 = -11558;
	uint16_t x272 = 12U;

    t67 = (x269&((x270<=x271)&x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 10U;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -1;
	int32_t x276 = 4247752;
	volatile uint32_t t68 = 953U;

    t68 = (x273&((x274<=x275)&x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	int32_t x278 = -4076;
	uint64_t x279 = 869774914637LLU;
	static uint16_t x280 = 1U;

    t69 = (x277&((x278<=x279)&x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = 0U;
	int64_t x283 = INT64_MAX;
	uint64_t x284 = 815814602506103982LLU;
	volatile uint64_t t70 = 774964821341977559LLU;

    t70 = (x281&((x282<=x283)&x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -2;
	static int8_t x287 = -1;
	uint32_t x288 = UINT32_MAX;
	static int64_t t71 = -262744183426LL;

    t71 = (x285&((x286<=x287)&x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 1U;
	uint8_t x290 = 11U;
	int8_t x291 = 6;
	int16_t x292 = INT16_MIN;
	uint32_t t72 = 36517694U;

    t72 = (x289&((x290<=x291)&x292));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x293 = 0U;
	uint8_t x294 = 2U;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 53U;
	static volatile int32_t t73 = -264379974;

    t73 = (x293&((x294<=x295)&x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MAX;
	static volatile int16_t x300 = -1;
	volatile int64_t t74 = -12LL;

    t74 = (x297&((x298<=x299)&x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MAX;
	static volatile uint64_t x303 = 765590202784567LLU;
	int16_t x304 = -1;

    t75 = (x301&((x302<=x303)&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 9774282U;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;

    t76 = (x305&((x306<=x307)&x308));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -1;
	int64_t x310 = INT64_MAX;
	uint64_t x312 = UINT64_MAX;

    t77 = (x309&((x310<=x311)&x312));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = -21247239;
	static int64_t x314 = -224201231579LL;
	uint64_t x315 = 49028060632LLU;
	uint16_t x316 = 107U;

    t78 = (x313&((x314<=x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MAX;
	static volatile int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MIN;
	static int32_t t79 = 19245;

    t79 = (x317&((x318<=x319)&x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = -1;
	uint16_t x323 = 10062U;
	uint64_t t80 = 1491LLU;

    t80 = (x321&((x322<=x323)&x324));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	int16_t x327 = 0;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 12673999;

    t81 = (x325&((x326<=x327)&x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 1;
	int8_t x330 = -1;
	uint16_t x331 = 1U;
	uint16_t x332 = UINT16_MAX;

    t82 = (x329&((x330<=x331)&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = -94LL;
	static volatile uint16_t x334 = UINT16_MAX;
	int32_t x336 = -28701;
	int64_t t83 = 523679410602566LL;

    t83 = (x333&((x334<=x335)&x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x338 = 19;
	int16_t x339 = INT16_MAX;
	volatile int64_t x340 = -1LL;
	static int64_t t84 = 504477309955LL;

    t84 = (x337&((x338<=x339)&x340));

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int32_t x342 = -478860999;
	static int64_t x344 = INT64_MIN;
	volatile int64_t t85 = 896426784535LL;

    t85 = (x341&((x342<=x343)&x344));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MIN;
	int16_t x347 = -898;
	volatile uint16_t x348 = 275U;
	int32_t t86 = -1;

    t86 = (x345&((x346<=x347)&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	static volatile int64_t x350 = INT64_MIN;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = 971;
	volatile int64_t t87 = -3118244520263LL;

    t87 = (x349&((x350<=x351)&x352));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	volatile int32_t t88 = -7578727;

    t88 = (x353&((x354<=x355)&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MAX;
	int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t89 = -488003LL;

    t89 = (x357&((x358<=x359)&x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 122LLU;
	static volatile uint32_t x362 = 9555U;
	int32_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	volatile uint64_t t90 = 165180889610549393LLU;

    t90 = (x361&((x362<=x363)&x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x367 = INT32_MAX;
	volatile uint8_t x368 = UINT8_MAX;

    t91 = (x365&((x366<=x367)&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -1433;
	int32_t x370 = -1;
	uint64_t x371 = 417095065969LLU;
	volatile int32_t t92 = 524032;

    t92 = (x369&((x370<=x371)&x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;

    t93 = (x373&((x374<=x375)&x376));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x378 = INT16_MIN;
	static uint32_t x379 = UINT32_MAX;

    t94 = (x377&((x378<=x379)&x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -99201930;

    t95 = (x381&((x382<=x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x386 = INT16_MIN;
	static uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 7U;
	static int32_t t96 = -1551;

    t96 = (x385&((x386<=x387)&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = -4;
	volatile uint64_t x392 = 5713642957LLU;
	uint64_t t97 = 46234554356469LLU;

    t97 = (x389&((x390<=x391)&x392));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = 0;
	int32_t x396 = -106;
	volatile int64_t t98 = -1466LL;

    t98 = (x393&((x394<=x395)&x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 1;
	int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 25079;

    t99 = (x397&((x398<=x399)&x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = INT16_MIN;
	uint8_t x402 = 28U;
	int32_t x403 = INT32_MIN;
	static int64_t t100 = -6171350044548774LL;

    t100 = (x401&((x402<=x403)&x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x405 = 535U;
	int32_t x406 = INT32_MIN;
	volatile int32_t x407 = 357166;
	int32_t x408 = 5683;
	volatile int32_t t101 = 80408616;

    t101 = (x405&((x406<=x407)&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x409 = 7940109545903966LLU;
	static volatile int64_t x410 = -1LL;
	volatile int64_t x411 = INT64_MIN;
	volatile int16_t x412 = INT16_MIN;
	uint64_t t102 = 11553797066820LLU;

    t102 = (x409&((x410<=x411)&x412));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t103 = -1353154;

    t103 = (x413&((x414<=x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	int32_t x419 = 419;
	int8_t x420 = INT8_MIN;
	volatile int64_t t104 = 3026176199390LL;

    t104 = (x417&((x418<=x419)&x420));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint64_t x423 = 889886LLU;
	int16_t x424 = -2798;
	volatile int64_t t105 = 33263152884924034LL;

    t105 = (x421&((x422<=x423)&x424));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 31U;
	uint32_t x426 = 30353103U;
	static int16_t x427 = -4;
	uint16_t x428 = 14251U;
	uint32_t t106 = 65778U;

    t106 = (x425&((x426<=x427)&x428));

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 31U;
	int8_t x431 = INT8_MAX;
	int64_t x432 = -1LL;
	volatile int64_t t107 = -2461420121LL;

    t107 = (x429&((x430<=x431)&x432));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 0;
	int32_t x434 = INT32_MIN;
	static int16_t x436 = -11;
	volatile int32_t t108 = -101;

    t108 = (x433&((x434<=x435)&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x439 = 2U;
	uint8_t x440 = 27U;
	volatile uint64_t t109 = 2135889968590885LLU;

    t109 = (x437&((x438<=x439)&x440));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 30LL;
	volatile int32_t x442 = -1;
	int16_t x443 = -3;
	int16_t x444 = -1;
	volatile int64_t t110 = -25LL;

    t110 = (x441&((x442<=x443)&x444));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MAX;
	uint8_t x446 = 1U;
	static int32_t x447 = -7135176;
	int64_t x448 = 5370LL;
	int64_t t111 = -31717110134512455LL;

    t111 = (x445&((x446<=x447)&x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x450 = 1763341LLU;
	int32_t x452 = -1;
	int32_t t112 = 15786648;

    t112 = (x449&((x450<=x451)&x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -57;
	int8_t x454 = INT8_MIN;
	uint16_t x456 = 0U;
	int32_t t113 = 58433285;

    t113 = (x453&((x454<=x455)&x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -16;
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 187;

    t114 = (x457&((x458<=x459)&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = -411LL;
	int16_t x463 = 21;
	uint64_t x464 = UINT64_MAX;
	static uint64_t t115 = 0LLU;

    t115 = (x461&((x462<=x463)&x464));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -1;
	static uint64_t x466 = UINT64_MAX;
	volatile int32_t t116 = 378987;

    t116 = (x465&((x466<=x467)&x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = 11092;
	int16_t x470 = 1;
	volatile uint16_t x471 = UINT16_MAX;
	volatile int32_t x472 = -12575;
	volatile int32_t t117 = 149993086;

    t117 = (x469&((x470<=x471)&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MAX;
	uint32_t x474 = 108762758U;
	int8_t x475 = INT8_MIN;
	int32_t x476 = -1;
	int32_t t118 = 20;

    t118 = (x473&((x474<=x475)&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int32_t x478 = -1044;
	int8_t x479 = -1;
	int8_t x480 = -26;
	uint64_t t119 = 3639LLU;

    t119 = (x477&((x478<=x479)&x480));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -4600572598666879LL;
	static int16_t x482 = 4;
	uint8_t x483 = 73U;
	int64_t t120 = 979174815LL;

    t120 = (x481&((x482<=x483)&x484));

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	int32_t x486 = -1;
	uint8_t x487 = 12U;
	uint16_t x488 = 30855U;
	static volatile int32_t t121 = -443953;

    t121 = (x485&((x486<=x487)&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = -1LL;
	volatile int32_t x490 = 125994070;
	int8_t x491 = -1;
	int32_t x492 = INT32_MIN;
	static volatile int64_t t122 = -27702135888LL;

    t122 = (x489&((x490<=x491)&x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	static int8_t x494 = INT8_MAX;
	static int64_t x495 = -1LL;
	static uint16_t x496 = 0U;
	static int32_t t123 = -574424807;

    t123 = (x493&((x494<=x495)&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	static uint8_t x498 = 16U;
	int32_t x499 = -3;
	static int32_t x500 = INT32_MAX;

    t124 = (x497&((x498<=x499)&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	int16_t x502 = INT16_MAX;
	int16_t x503 = -1;
	int64_t x504 = -1LL;
	volatile int64_t t125 = 12416100LL;

    t125 = (x501&((x502<=x503)&x504));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MAX;
	volatile int8_t x506 = INT8_MIN;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 94835;

    t126 = (x505&((x506<=x507)&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 233515373620067487LLU;
	volatile int64_t x510 = -1LL;
	static int64_t x511 = INT64_MAX;
	static uint64_t x512 = 11778812657822LLU;
	volatile uint64_t t127 = 4912LLU;

    t127 = (x509&((x510<=x511)&x512));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	int32_t x515 = INT32_MIN;
	uint16_t x516 = 38U;

    t128 = (x513&((x514<=x515)&x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MIN;
	static int32_t x519 = INT32_MAX;
	volatile uint64_t t129 = 4281326LLU;

    t129 = (x517&((x518<=x519)&x520));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MAX;
	static volatile uint16_t x523 = UINT16_MAX;
	uint32_t x524 = 1715300771U;

    t130 = (x521&((x522<=x523)&x524));

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	uint8_t x526 = 6U;
	uint64_t x527 = 3015346246530497LLU;
	volatile uint64_t t131 = 16371084822837LLU;

    t131 = (x525&((x526<=x527)&x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	int16_t x530 = -1;
	uint8_t x531 = 10U;
	int32_t t132 = 29;

    t132 = (x529&((x530<=x531)&x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int64_t x534 = 19067568LL;
	int32_t x535 = -4;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t133 = -32358467;

    t133 = (x533&((x534<=x535)&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	volatile int32_t x539 = 5;
	uint8_t x540 = 125U;
	volatile int32_t t134 = 22722584;

    t134 = (x537&((x538<=x539)&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MAX;
	uint64_t x543 = 372790194886LLU;
	int32_t x544 = INT32_MAX;

    t135 = (x541&((x542<=x543)&x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	static int32_t x546 = 1030117;
	volatile int64_t x547 = INT64_MAX;
	static uint32_t x548 = 595268255U;
	uint32_t t136 = 222U;

    t136 = (x545&((x546<=x547)&x548));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x550 = INT8_MIN;
	uint32_t x552 = 1074U;
	uint64_t t137 = 3610950LLU;

    t137 = (x549&((x550<=x551)&x552));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = INT32_MIN;
	volatile int16_t x555 = -1;
	uint16_t x556 = 9U;
	int32_t t138 = 6;

    t138 = (x553&((x554<=x555)&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = -7216554955LL;
	uint32_t x559 = 12009874U;
	volatile uint32_t x560 = UINT32_MAX;
	int64_t t139 = 35847680533318942LL;

    t139 = (x557&((x558<=x559)&x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = 52U;
	volatile int16_t x563 = 492;
	static uint32_t x564 = 385416015U;
	volatile uint32_t t140 = 3230U;

    t140 = (x561&((x562<=x563)&x564));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = INT64_MIN;
	int8_t x567 = -1;
	int64_t x568 = -1LL;
	volatile int64_t t141 = -56426791110LL;

    t141 = (x565&((x566<=x567)&x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x569 = INT64_MAX;
	static volatile int16_t x570 = INT16_MAX;
	int8_t x571 = 2;
	static int8_t x572 = INT8_MIN;

    t142 = (x569&((x570<=x571)&x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 441250041302714929LLU;
	volatile int8_t x574 = 1;
	int64_t x575 = 0LL;
	uint64_t x576 = UINT64_MAX;
	uint64_t t143 = 2923982497923LLU;

    t143 = (x573&((x574<=x575)&x576));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -314913;
	int32_t x578 = -1;
	int32_t t144 = 0;

    t144 = (x577&((x578<=x579)&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	int32_t x583 = INT32_MIN;
	static int8_t x584 = -3;

    t145 = (x581&((x582<=x583)&x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = 710U;
	volatile int16_t x586 = -1;
	volatile int32_t x587 = INT32_MIN;
	volatile int16_t x588 = 11;
	uint32_t t146 = 104164U;

    t146 = (x585&((x586<=x587)&x588));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x589 = INT64_MAX;
	uint16_t x590 = UINT16_MAX;
	uint8_t x591 = UINT8_MAX;
	int32_t x592 = 0;
	volatile int64_t t147 = -908838053LL;

    t147 = (x589&((x590<=x591)&x592));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -14871;
	uint64_t x595 = 1050290LLU;
	int64_t x596 = 81082LL;

    t148 = (x593&((x594<=x595)&x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = INT8_MIN;
	int16_t x598 = -1;
	static volatile int32_t x599 = INT32_MAX;
	int16_t x600 = 0;
	volatile int32_t t149 = 36544;

    t149 = (x597&((x598<=x599)&x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	int32_t x602 = INT32_MAX;
	int32_t x603 = 475;
	int16_t x604 = INT16_MIN;
	int32_t t150 = 14489;

    t150 = (x601&((x602<=x603)&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int16_t x606 = -1;
	int32_t x607 = INT32_MIN;
	volatile int8_t x608 = INT8_MAX;
	int32_t t151 = 315919;

    t151 = (x605&((x606<=x607)&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	static int8_t x610 = INT8_MAX;
	uint8_t x611 = 3U;
	static int32_t x612 = INT32_MAX;
	int32_t t152 = 25299423;

    t152 = (x609&((x610<=x611)&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 1537708599055661845LLU;
	uint16_t x614 = 1U;
	int32_t x615 = 2152;
	volatile uint64_t x616 = UINT64_MAX;
	volatile uint64_t t153 = 1LLU;

    t153 = (x613&((x614<=x615)&x616));

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	volatile int32_t x618 = -184;
	volatile int8_t x619 = INT8_MAX;
	static uint16_t x620 = 1U;
	int32_t t154 = -30718239;

    t154 = (x617&((x618<=x619)&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = UINT32_MAX;
	static int16_t x622 = INT16_MIN;
	volatile int16_t x623 = INT16_MAX;
	int16_t x624 = 642;
	volatile uint32_t t155 = 13163U;

    t155 = (x621&((x622<=x623)&x624));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = 33LL;
	uint64_t x626 = UINT64_MAX;
	static int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MIN;
	volatile int64_t t156 = 57618568LL;

    t156 = (x625&((x626<=x627)&x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = INT32_MAX;
	uint64_t x630 = 3012204068084802LLU;
	static int8_t x631 = INT8_MAX;
	int16_t x632 = INT16_MIN;
	int32_t t157 = -123438693;

    t157 = (x629&((x630<=x631)&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MIN;
	uint16_t x635 = 62U;
	uint16_t x636 = 18652U;

    t158 = (x633&((x634<=x635)&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int64_t x639 = INT64_MIN;
	int64_t x640 = -1LL;

    t159 = (x637&((x638<=x639)&x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = 0;
	uint64_t x643 = UINT64_MAX;
	static uint64_t x644 = 295250154LLU;
	uint64_t t160 = 10499014614799LLU;

    t160 = (x641&((x642<=x643)&x644));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = -1;
	volatile uint16_t x646 = UINT16_MAX;
	int16_t x647 = INT16_MAX;
	uint16_t x648 = 3U;

    t161 = (x645&((x646<=x647)&x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int16_t x650 = 3119;
	uint64_t x651 = UINT64_MAX;
	static uint16_t x652 = 1864U;
	volatile int64_t t162 = -876LL;

    t162 = (x649&((x650<=x651)&x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x654 = 135U;
	uint8_t x656 = 3U;
	int32_t t163 = 31851;

    t163 = (x653&((x654<=x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x657 = 1U;
	int8_t x658 = INT8_MIN;
	static int16_t x659 = INT16_MIN;
	uint32_t x660 = UINT32_MAX;
	static volatile uint32_t t164 = 20560217U;

    t164 = (x657&((x658<=x659)&x660));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = 1;
	volatile int64_t x662 = INT64_MIN;
	int8_t x663 = -1;
	uint32_t x664 = 8153814U;

    t165 = (x661&((x662<=x663)&x664));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	volatile int16_t x666 = INT16_MAX;
	int64_t x667 = -4246954758LL;
	int16_t x668 = INT16_MIN;

    t166 = (x665&((x666<=x667)&x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	uint32_t x670 = 2182U;
	int8_t x671 = -1;
	int8_t x672 = 1;

    t167 = (x669&((x670<=x671)&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	uint16_t x674 = 13120U;
	int8_t x675 = 20;
	int64_t x676 = INT64_MIN;

    t168 = (x673&((x674<=x675)&x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 6018;
	int32_t x678 = -1;
	static int8_t x679 = -1;
	volatile uint16_t x680 = UINT16_MAX;
	static volatile int32_t t169 = -57;

    t169 = (x677&((x678<=x679)&x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = -1;
	static int64_t x683 = INT64_MAX;
	int8_t x684 = 7;
	int32_t t170 = 0;

    t170 = (x681&((x682<=x683)&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 43203LLU;
	int32_t x686 = INT32_MAX;
	volatile int8_t x687 = INT8_MAX;
	int16_t x688 = INT16_MIN;
	uint64_t t171 = 43LLU;

    t171 = (x685&((x686<=x687)&x688));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = 82U;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = -21;
	int32_t t172 = 120484380;

    t172 = (x689&((x690<=x691)&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 4892;
	uint32_t x694 = UINT32_MAX;
	volatile uint8_t x695 = UINT8_MAX;
	uint8_t x696 = 29U;
	int32_t t173 = 361291;

    t173 = (x693&((x694<=x695)&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = -23418033059426LL;
	uint16_t x699 = 389U;
	int64_t t174 = 430430LL;

    t174 = (x697&((x698<=x699)&x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x702 = 7071125121662382831LLU;
	static int32_t x703 = -2883;
	int16_t x704 = INT16_MIN;
	static int32_t t175 = 402572936;

    t175 = (x701&((x702<=x703)&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -646;
	volatile int64_t x706 = INT64_MIN;
	int8_t x707 = -1;
	uint32_t x708 = UINT32_MAX;
	uint32_t t176 = 13U;

    t176 = (x705&((x706<=x707)&x708));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 1U;
	int32_t x711 = INT32_MAX;
	int8_t x712 = 1;

    t177 = (x709&((x710<=x711)&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	static uint16_t x714 = 1476U;
	int16_t x715 = INT16_MIN;
	static uint64_t x716 = UINT64_MAX;
	uint64_t t178 = 1375576220LLU;

    t178 = (x713&((x714<=x715)&x716));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x718 = -7590586;
	static volatile int32_t x720 = 438525174;
	static volatile int32_t t179 = 2084;

    t179 = (x717&((x718<=x719)&x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 64U;
	static int32_t x722 = INT32_MAX;
	static int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MAX;

    t180 = (x721&((x722<=x723)&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -643391959393847LL;
	int16_t x726 = INT16_MIN;
	static uint32_t x727 = UINT32_MAX;
	int16_t x728 = 7;
	static int64_t t181 = -23124LL;

    t181 = (x725&((x726<=x727)&x728));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x730 = 1114951589100LLU;
	static int16_t x731 = -1;
	int8_t x732 = -13;

    t182 = (x729&((x730<=x731)&x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	volatile int8_t x735 = 1;
	uint32_t x736 = UINT32_MAX;
	int64_t t183 = 232855645LL;

    t183 = (x733&((x734<=x735)&x736));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	int32_t x738 = 9;
	int8_t x740 = INT8_MIN;
	volatile int64_t t184 = 101657553628LL;

    t184 = (x737&((x738<=x739)&x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 0;
	uint32_t x742 = 8U;
	volatile int32_t x743 = -1;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t185 = -52;

    t185 = (x741&((x742<=x743)&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -71953;
	int32_t x746 = -1;
	int32_t x747 = INT32_MAX;
	int32_t t186 = -1244;

    t186 = (x745&((x746<=x747)&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x750 = 977U;
	static uint8_t x751 = 3U;
	static int64_t t187 = -1224984058LL;

    t187 = (x749&((x750<=x751)&x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x754 = UINT8_MAX;
	int8_t x755 = -6;
	uint64_t x756 = 378531LLU;
	volatile uint64_t t188 = 1LLU;

    t188 = (x753&((x754<=x755)&x756));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 3;
	static int8_t x759 = -1;
	int16_t x760 = -17;
	volatile int32_t t189 = 124;

    t189 = (x757&((x758<=x759)&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x762 = INT32_MIN;
	int16_t x763 = -1;
	static int8_t x764 = INT8_MIN;
	int32_t t190 = 81;

    t190 = (x761&((x762<=x763)&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 0U;
	int32_t x766 = -1;
	uint16_t x767 = 9U;
	static int32_t x768 = 251;
	static int32_t t191 = -14469;

    t191 = (x765&((x766<=x767)&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MIN;
	static volatile uint16_t x770 = UINT16_MAX;
	volatile int8_t x771 = 31;
	uint8_t x772 = 45U;
	volatile int32_t t192 = 930421;

    t192 = (x769&((x770<=x771)&x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 24;
	static int16_t x774 = INT16_MAX;
	volatile int32_t x775 = -1;
	uint64_t x776 = 413LLU;

    t193 = (x773&((x774<=x775)&x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = -1LL;
	uint32_t x780 = 6U;

    t194 = (x777&((x778<=x779)&x780));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = 356;
	int64_t x782 = INT64_MAX;
	uint32_t x783 = 10402669U;
	static volatile int16_t x784 = 1948;
	volatile int32_t t195 = 0;

    t195 = (x781&((x782<=x783)&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	volatile int32_t x787 = INT32_MIN;
	volatile int32_t t196 = -32446323;

    t196 = (x785&((x786<=x787)&x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	uint32_t x790 = UINT32_MAX;
	static int32_t x791 = INT32_MIN;
	volatile int32_t x792 = 6556863;
	int32_t t197 = 7457523;

    t197 = (x789&((x790<=x791)&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 91U;
	static volatile int16_t x794 = 42;
	static uint8_t x795 = 0U;

    t198 = (x793&((x794<=x795)&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 198;
	int16_t x798 = INT16_MIN;
	uint32_t x799 = 3835U;
	int64_t x800 = INT64_MAX;
	int64_t t199 = -15592389150427881LL;

    t199 = (x797&((x798<=x799)&x800));

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

