
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

int64_t x1 = INT64_MIN;
uint8_t x2 = 1U;
int8_t x5 = INT8_MIN;
uint8_t x7 = 37U;
volatile uint64_t x9 = 137098694585673053LLU;
int16_t x11 = -10;
int64_t x13 = INT64_MIN;
uint16_t x22 = 7U;
uint64_t x24 = UINT64_MAX;
int32_t x26 = INT32_MAX;
uint32_t x27 = 8U;
int8_t x35 = 12;
int16_t x44 = 505;
int64_t x47 = 9LL;
int32_t x48 = INT32_MAX;
int32_t x51 = -1;
int8_t x52 = INT8_MIN;
int8_t x61 = INT8_MIN;
int32_t x63 = -1;
int64_t x65 = 226015029798LL;
int32_t x66 = -1659;
int32_t x67 = INT32_MIN;
static uint32_t t17 = 3644357U;
int16_t x73 = INT16_MIN;
uint16_t x78 = 41U;
uint32_t t22 = 24351277U;
static volatile uint64_t t24 = UINT64_MAX;
int8_t x113 = 1;
int8_t x116 = INT8_MIN;
static uint64_t t31 = 143200159029LLU;
volatile uint64_t x143 = 15602057907312LLU;
int8_t x144 = INT8_MIN;
int64_t x145 = INT64_MAX;
static uint16_t x152 = UINT16_MAX;
int64_t x156 = -25745LL;
static volatile uint64_t x161 = 2155910413679823LLU;
int64_t x163 = INT64_MIN;
volatile uint8_t x164 = 2U;
static int16_t x179 = -2;
static uint64_t x181 = 0LLU;
volatile int16_t x187 = -1;
uint64_t x188 = 4503728084041439LLU;
int64_t t47 = 437LL;
int32_t x197 = 5319052;
int64_t x198 = INT64_MIN;
int32_t x206 = 1;
uint16_t x207 = UINT16_MAX;
static int64_t x215 = INT64_MIN;
volatile int64_t t57 = -371093LL;
volatile uint64_t x242 = 93044LLU;
uint64_t t59 = UINT64_MAX;
uint16_t x246 = UINT16_MAX;
int64_t x251 = INT64_MIN;
uint8_t x257 = UINT8_MAX;
int8_t x264 = INT8_MIN;
static uint8_t x269 = 59U;
uint16_t x270 = 20230U;
int8_t x272 = INT8_MIN;
int8_t x276 = 6;
volatile int64_t t67 = -467LL;
uint64_t x283 = 5302860004276331LLU;
int16_t x290 = -6100;
uint8_t x296 = UINT8_MAX;
uint8_t x301 = 7U;
int32_t x303 = INT32_MIN;
uint64_t x304 = UINT64_MAX;
int16_t x310 = INT16_MAX;
uint64_t x318 = 1753951077176LLU;
static volatile uint64_t t78 = 717465057LLU;
volatile uint32_t x333 = UINT32_MAX;
volatile int64_t t83 = -5558089204551706LL;
int16_t x341 = INT16_MAX;
int16_t x345 = INT16_MIN;
int32_t x348 = 3;
static int16_t x358 = INT16_MIN;
static int64_t t89 = 49256721164LL;
static uint64_t x365 = 2465298533127LLU;
int8_t x370 = INT8_MIN;
int64_t x374 = -2800LL;
uint16_t x389 = 8U;
int64_t x393 = INT64_MAX;
int8_t x396 = INT8_MAX;
static int16_t x400 = 1;
volatile int32_t t98 = 9;
int64_t x401 = -3338083308922997778LL;
static volatile uint64_t x405 = UINT64_MAX;
int16_t x411 = INT16_MIN;
uint64_t x413 = 28389LLU;
static uint8_t x421 = 3U;
volatile int16_t x422 = INT16_MIN;
uint8_t x425 = 0U;
int32_t x432 = INT32_MIN;
uint8_t x433 = UINT8_MAX;
int16_t x435 = INT16_MAX;
int16_t x437 = -1;
volatile int16_t x441 = INT16_MIN;
volatile int64_t t109 = 13771960622216314LL;
int64_t x446 = INT64_MIN;
volatile int64_t t110 = -66279095LL;
uint8_t x450 = UINT8_MAX;
static int16_t x465 = 9;
uint8_t x470 = 0U;
int8_t x474 = INT8_MIN;
uint8_t x478 = 9U;
int32_t x487 = -1;
int32_t x497 = -12136536;
volatile int64_t x500 = 25067LL;
uint16_t x504 = UINT16_MAX;
static int32_t t123 = 104780;
uint32_t x506 = 3U;
int64_t x509 = 13LL;
int8_t x522 = -4;
int8_t x523 = -1;
int16_t x527 = INT16_MAX;
static volatile int8_t x530 = -4;
static uint64_t x532 = UINT64_MAX;
uint64_t t130 = 153LLU;
int8_t x543 = INT8_MAX;
static volatile int32_t t133 = 1414;
int64_t x545 = INT64_MAX;
int8_t x552 = INT8_MIN;
static int32_t t135 = -1360056;
int32_t x562 = INT32_MIN;
int32_t x569 = INT32_MAX;
int64_t x573 = -1LL;
static int8_t x577 = INT8_MIN;
static int8_t x582 = INT8_MAX;
volatile uint64_t t142 = UINT64_MAX;
volatile int32_t x588 = INT32_MIN;
int8_t x589 = INT8_MAX;
volatile int8_t x590 = 1;
static int8_t x593 = -1;
int8_t x599 = INT8_MIN;
uint16_t x607 = UINT16_MAX;
int8_t x609 = 1;
static volatile int32_t x612 = INT32_MIN;
static uint32_t x618 = 1710U;
volatile int64_t x627 = INT64_MIN;
uint64_t t154 = 0LLU;
uint64_t x633 = UINT64_MAX;
static int8_t x635 = INT8_MIN;
int32_t x636 = INT32_MAX;
static uint8_t x641 = UINT8_MAX;
int64_t x642 = 0LL;
int16_t x643 = INT16_MIN;
int64_t t156 = 229898LL;
int64_t x647 = INT64_MAX;
volatile int16_t x649 = -1;
int16_t x650 = 7246;
static uint64_t x651 = UINT64_MAX;
int8_t x654 = INT8_MIN;
volatile int64_t t159 = 32723457457624230LL;
int8_t x659 = INT8_MIN;
uint16_t x666 = 30U;
int16_t x674 = INT16_MAX;
uint32_t x676 = UINT32_MAX;
volatile int32_t x678 = INT32_MIN;
volatile int64_t x680 = -1LL;
int16_t x688 = -15;
volatile int16_t x694 = INT16_MIN;
volatile uint64_t t169 = UINT64_MAX;
uint32_t x697 = UINT32_MAX;
volatile uint64_t t170 = 279524409427031LLU;
volatile int32_t x712 = INT32_MAX;
int32_t x715 = INT32_MAX;
int64_t x717 = INT64_MIN;
uint8_t x718 = 1U;
int32_t x720 = -1;
volatile int8_t x723 = INT8_MIN;
static int64_t x726 = -1LL;
uint64_t t177 = 1LLU;
int16_t x733 = INT16_MIN;
volatile int16_t x736 = -1;
int64_t t179 = -1471042557LL;
uint16_t x740 = 605U;
volatile int32_t x743 = -60402;
int8_t x747 = INT8_MIN;
uint8_t x750 = UINT8_MAX;
int16_t x761 = -20;
static int64_t x765 = -59658426401994LL;
static volatile int64_t x771 = INT64_MIN;
uint8_t x780 = UINT8_MAX;
volatile uint64_t t190 = 5566LLU;
int32_t x783 = INT32_MAX;
uint64_t t191 = 2097560540003718360LLU;
static uint32_t x785 = 3070U;
volatile int64_t t193 = 15LL;
int64_t x793 = -7147302167LL;
volatile uint8_t x795 = 16U;
static volatile int64_t t194 = -20LL;
int64_t t195 = INT64_MAX;
volatile int64_t x804 = INT64_MAX;
volatile uint64_t t198 = UINT64_MAX;
int8_t x816 = 8;
int64_t t199 = 1724LL;


void f0(void) {
    	uint64_t x3 = 7525500LLU;
	int32_t x4 = -1;
	uint64_t t0 = 5280LLU;

    t0 = (x1|((x2^x3)%x4));

    if (t0 != 9223372036862301309LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 156661272410279LL;
	int16_t x8 = -1;
	volatile int64_t t1 = 480292791161996093LL;

    t1 = (x5|((x6^x7)%x8));

    if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 1U;
	int16_t x12 = INT16_MIN;
	static uint64_t t2 = UINT64_MAX;

    t2 = (x9|((x10^x11)%x12));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x14 = INT64_MIN;
	uint32_t x15 = UINT32_MAX;
	uint32_t x16 = 121U;
	static int64_t t3 = -1190700938772939276LL;

    t3 = (x13|((x14^x15)%x16));

    if (t3 != -49LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = 1;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -118941202771704LL;

    t4 = (x17|((x18^x19)%x20));

    if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MIN;
	static uint16_t x23 = 0U;
	uint64_t t5 = 28LLU;

    t5 = (x21|((x22^x23)%x24));

    if (t5 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int16_t x28 = -18;
	volatile uint32_t t6 = 10771889U;

    t6 = (x25|((x26^x27)%x28));

    if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 23LL;
	static uint32_t x30 = UINT32_MAX;
	volatile int16_t x31 = INT16_MIN;
	volatile int32_t x32 = -1;
	int64_t t7 = -4018LL;

    t7 = (x29|((x30^x31)%x32));

    if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	int8_t x34 = -21;
	static int64_t x36 = -1227459334962LL;
	int64_t t8 = 144LL;

    t8 = (x33|((x34^x35)%x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	static int8_t x38 = INT8_MAX;
	uint64_t x39 = 8603413410205LLU;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 11517915LLU;

    t9 = (x37|((x38^x39)%x40));

    if (t9 != 18446744072155984354LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 18485U;
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = 267020185793763162LL;
	uint64_t t10 = 3830477080LLU;

    t10 = (x41|((x42^x43)%x44));

    if (t10 != 18933LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	static int64_t x46 = INT64_MIN;
	static volatile int64_t t11 = -418LL;

    t11 = (x45|((x46^x47)%x48));

    if (t11 != -2147483521LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 213047LLU;
	int8_t x50 = INT8_MIN;
	static volatile uint64_t t12 = 11295348LLU;

    t12 = (x49|((x50^x51)%x52));

    if (t12 != 213119LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile int64_t x54 = INT64_MIN;
	static int16_t x55 = -1;
	int8_t x56 = INT8_MIN;
	int64_t t13 = 232087345372586LL;

    t13 = (x53|((x54^x55)%x56));

    if (t13 != -2147483521LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint32_t x58 = 1632U;
	static int64_t x59 = 7959414LL;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = -856195645LL;

    t14 = (x57|((x58^x59)%x60));

    if (t14 != -106LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x62 = -1736852615225513261LL;
	uint8_t x64 = UINT8_MAX;
	static int64_t t15 = 33685727162572LL;

    t15 = (x61|((x62^x63)%x64));

    if (t15 != -51LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x68 = 9U;
	int64_t t16 = 1940351840LL;

    t16 = (x65|((x66^x67)%x68));

    if (t16 != 226015029806LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 54945;
	int16_t x70 = INT16_MAX;
	uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;

    t17 = (x69|((x70^x71)%x72));

    if (t17 != 54945U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = INT16_MAX;
	uint32_t x75 = 26U;
	volatile int32_t x76 = INT32_MAX;
	uint32_t t18 = 166796U;

    t18 = (x73|((x74^x75)%x76));

    if (t18 != 4294967269U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 350U;
	int32_t x79 = 12;
	volatile uint32_t x80 = 301U;
	volatile uint32_t t19 = 51U;

    t19 = (x77|((x78^x79)%x80));

    if (t19 != 383U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 2U;
	int32_t x82 = INT32_MAX;
	static volatile uint16_t x83 = 7U;
	int16_t x84 = -1;
	static int32_t t20 = -1;

    t20 = (x81|((x82^x83)%x84));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -42;
	uint32_t x86 = 760132U;
	volatile uint32_t x87 = 5593U;
	int64_t x88 = -1LL;
	int64_t t21 = 809292969115793LL;

    t21 = (x85|((x86^x87)%x88));

    if (t21 != -42LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 588U;
	int8_t x90 = INT8_MIN;
	volatile int8_t x91 = -14;
	int16_t x92 = INT16_MIN;

    t22 = (x89|((x90^x91)%x92));

    if (t22 != 638U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint32_t x94 = 63189U;
	int16_t x95 = -1;
	int32_t x96 = -233829042;
	volatile uint32_t t23 = 1033U;

    t23 = (x93|((x94^x95)%x96));

    if (t23 != 2381249500U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	static volatile int8_t x103 = INT8_MIN;
	uint64_t x104 = 4905489LLU;

    t24 = (x101|((x102^x103)%x104));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x105 = 13753LLU;
	volatile int16_t x106 = -1;
	static volatile int64_t x107 = -28LL;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t25 = 1LLU;

    t25 = (x105|((x106^x107)%x108));

    if (t25 != 13755LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -1;
	static int8_t x110 = INT8_MIN;
	uint32_t x111 = 33U;
	int32_t x112 = 1;
	uint32_t t26 = UINT32_MAX;

    t26 = (x109|((x110^x111)%x112));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x114 = 148056547935414392LL;
	volatile int8_t x115 = -1;
	volatile int64_t t27 = 962773LL;

    t27 = (x113|((x114^x115)%x116));

    if (t27 != -121LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x117 = -272051;
	int32_t x118 = 0;
	volatile int8_t x119 = 17;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 90476;

    t28 = (x117|((x118^x119)%x120));

    if (t28 != -272035) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MAX;
	uint16_t x122 = 1U;
	int32_t x123 = 241;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t29 = 218745524354943193LLU;

    t29 = (x121|((x122^x123)%x124));

    if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = INT32_MIN;
	uint8_t x126 = UINT8_MAX;
	volatile int32_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t30 = -456317;

    t30 = (x125|((x126^x127)%x128));

    if (t30 != -256) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MAX;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -1;

    t31 = (x129|((x130^x131)%x132));

    if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MIN;
	int64_t x134 = -900LL;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;
	int64_t t32 = -87744112LL;

    t32 = (x133|((x134^x135)%x136));

    if (t32 != -4LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	static volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -2069820LL;
	volatile int64_t t33 = -8107LL;

    t33 = (x137|((x138^x139)%x140));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 125807879U;
	uint64_t x142 = UINT64_MAX;
	volatile uint64_t t34 = 186LLU;

    t34 = (x141|((x142^x143)%x144));

    if (t34 != 18446728471703977871LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x146 = INT64_MIN;
	volatile uint64_t x147 = 7833807423LLU;
	volatile int8_t x148 = -8;
	uint64_t t35 = UINT64_MAX;

    t35 = (x145|((x146^x147)%x148));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	volatile int64_t x151 = INT64_MAX;
	int64_t t36 = 830026627LL;

    t36 = (x149|((x150^x151)%x152));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 2817522LLU;
	static volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	volatile uint64_t t37 = 149234976LLU;

    t37 = (x153|((x154^x155)%x156));

    if (t37 != 2817531LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -1;
	int32_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MIN;
	uint32_t t38 = UINT32_MAX;

    t38 = (x157|((x158^x159)%x160));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x162 = INT32_MAX;
	static volatile uint64_t t39 = UINT64_MAX;

    t39 = (x161|((x162^x163)%x164));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 13752512LLU;
	uint8_t x166 = UINT8_MAX;
	static int8_t x167 = INT8_MIN;
	volatile uint32_t x168 = 1798U;
	volatile uint64_t t40 = 1049516573LLU;

    t40 = (x165|((x166^x167)%x168));

    if (t40 != 13752573LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x169 = 19411U;
	int64_t x170 = -29333535910372LL;
	static int32_t x171 = 222443;
	uint32_t x172 = UINT32_MAX;
	static volatile int64_t t41 = -3941504963430LL;

    t41 = (x169|((x170^x171)%x172));

    if (t41 != -3204424741LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x173 = 0U;
	uint32_t x174 = 128642802U;
	int16_t x175 = -159;
	static uint32_t x176 = 202U;
	volatile uint32_t t42 = 28695U;

    t42 = (x173|((x174^x175)%x176));

    if (t42 != 89U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	static volatile int8_t x178 = -3;
	uint64_t x180 = 450LLU;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = (x177|((x178^x179)%x180));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MIN;
	uint64_t t44 = UINT64_MAX;

    t44 = (x181|((x182^x183)%x184));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x185 = 60U;
	int16_t x186 = -3;
	volatile uint64_t t45 = 0LLU;

    t45 = (x185|((x186^x187)%x188));

    if (t45 != 62LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = 1;
	static volatile uint32_t x190 = 1393241U;
	static int8_t x191 = INT8_MIN;
	uint8_t x192 = 46U;
	volatile uint32_t t46 = 937708U;

    t46 = (x189|((x190^x191)%x192));

    if (t46 != 23U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = -1LL;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;

    t47 = (x193|((x194^x195)%x196));

    if (t47 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t48 = 146892171844675LLU;

    t48 = (x197|((x198^x199)%x200));

    if (t48 != 9223372036854775692LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x201 = 255737096991LLU;
	static int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -5;
	volatile uint64_t t49 = 14470735065LLU;

    t49 = (x201|((x202^x203)%x204));

    if (t49 != 255737096991LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x205 = 1;
	static int64_t x208 = INT64_MAX;
	volatile int64_t t50 = 275219010LL;

    t50 = (x205|((x206^x207)%x208));

    if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -27;
	int32_t x210 = -1;
	int32_t x211 = -9406;
	uint16_t x212 = 93U;
	volatile int32_t t51 = -1;

    t51 = (x209|((x210^x211)%x212));

    if (t51 != -19) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = 19657043605LL;
	int16_t x214 = 272;
	uint64_t x216 = 3224739LLU;
	volatile uint64_t t52 = 62690082891755283LLU;

    t52 = (x213|((x214^x215)%x216));

    if (t52 != 19657125813LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	int32_t x218 = 9483499;
	int32_t x219 = -1;
	int64_t x220 = 114198813LL;
	int64_t t53 = -1279553657894LL;

    t53 = (x217|((x218^x219)%x220));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	static volatile uint32_t x222 = 72U;
	int8_t x223 = -10;
	int64_t x224 = INT64_MIN;
	int64_t t54 = -44137184LL;

    t54 = (x221|((x222^x223)%x224));

    if (t54 != -66LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -1LL;
	uint8_t x226 = 30U;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = INT8_MAX;
	int64_t t55 = -874LL;

    t55 = (x225|((x226^x227)%x228));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = 34281072706120LLU;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	volatile uint64_t t56 = 6069LLU;

    t56 = (x229|((x230^x231)%x232));

    if (t56 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -1LL;
	static int64_t x236 = INT64_MIN;

    t57 = (x233|((x234^x235)%x236));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = 14U;
	volatile uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = 1U;
	static volatile int32_t t58 = -410918029;

    t58 = (x237|((x238^x239)%x240));

    if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = -1;
	static int8_t x243 = INT8_MIN;
	static volatile uint32_t x244 = 13562835U;

    t59 = (x241|((x242^x243)%x244));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = -2725256728878528LL;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = 15910742LL;
	int64_t t60 = 6885LL;

    t60 = (x245|((x246^x247)%x248));

    if (t60 != -2725256728878528LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MIN;
	int16_t x252 = 1;
	uint64_t t61 = UINT64_MAX;

    t61 = (x249|((x250^x251)%x252));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 21U;
	int64_t x254 = INT64_MAX;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	int64_t t62 = -49103331LL;

    t62 = (x253|((x254^x255)%x256));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x258 = INT64_MIN;
	uint8_t x259 = UINT8_MAX;
	static volatile uint16_t x260 = UINT16_MAX;
	volatile int64_t t63 = -199214683648LL;

    t63 = (x257|((x258^x259)%x260));

    if (t63 != -32513LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x261 = INT32_MAX;
	static uint16_t x262 = 31088U;
	int32_t x263 = 1;
	static volatile int32_t t64 = INT32_MAX;

    t64 = (x261|((x262^x263)%x264));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 73734LLU;
	int64_t x268 = -768LL;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = (x265|((x266^x267)%x268));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x271 = 246092349018LLU;
	volatile uint64_t t66 = 5249972001177686LLU;

    t66 = (x269|((x270^x271)%x272));

    if (t66 != 246092362111LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = INT64_MIN;
	uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MIN;

    t67 = (x273|((x274^x275)%x276));

    if (t67 != -5LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = -1;
	int8_t x278 = 1;
	int16_t x279 = 101;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t68 = -957767;

    t68 = (x277|((x278^x279)%x280));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = INT16_MIN;
	volatile int16_t x282 = INT16_MIN;
	volatile uint64_t x284 = 129607224561015LLU;
	static volatile uint64_t t69 = 67720504537631LLU;

    t69 = (x281|((x282^x283)%x284));

    if (t69 != 18446744073709541426LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x285 = -39235765485947455LL;
	int16_t x286 = -1;
	int8_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;
	volatile int64_t t70 = 105LL;

    t70 = (x285|((x286^x287)%x288));

    if (t70 != -39235765485947455LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x289 = 1U;
	static volatile int8_t x291 = INT8_MIN;
	volatile int8_t x292 = INT8_MIN;
	int32_t t71 = 6059;

    t71 = (x289|((x290^x291)%x292));

    if (t71 != 45) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	volatile int64_t x295 = -2348170438LL;
	int64_t t72 = -1719687LL;

    t72 = (x293|((x294^x295)%x296));

    if (t72 != -2147483516LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x297 = INT32_MAX;
	uint64_t x298 = 10460127LLU;
	int16_t x299 = INT16_MAX;
	int64_t x300 = -4326020520684LL;
	volatile uint64_t t73 = 16258152LLU;

    t73 = (x297|((x298^x299)%x300));

    if (t73 != 2147483647LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x302 = -1;
	volatile uint64_t t74 = 21812LLU;

    t74 = (x301|((x302^x303)%x304));

    if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MAX;
	volatile uint16_t x308 = 423U;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x305|((x306^x307)%x308));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x309 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	int8_t x312 = -1;
	volatile int32_t t76 = 27;

    t76 = (x309|((x310^x311)%x312));

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MIN;
	static uint64_t x314 = 281078748130LLU;
	int16_t x315 = -2;
	int64_t x316 = INT64_MAX;
	static uint64_t t77 = 5114LLU;

    t77 = (x313|((x314^x315)%x316));

    if (t77 != 18446744071803677725LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 18393U;
	volatile int8_t x319 = INT8_MIN;
	uint32_t x320 = 2146337047U;

    t78 = (x317|((x318^x319)%x320));

    if (t78 != 2002276317LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = -1;
	static volatile int32_t x322 = -1;
	int32_t x323 = 346521;
	int8_t x324 = INT8_MIN;
	int32_t t79 = -578037;

    t79 = (x321|((x322^x323)%x324));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	static volatile int8_t x326 = INT8_MAX;
	static uint64_t x327 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;
	static volatile uint64_t t80 = 204555LLU;

    t80 = (x325|((x326^x327)%x328));

    if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = INT64_MAX;
	int64_t x330 = 484687641LL;
	uint8_t x331 = 18U;
	uint32_t x332 = 3648568U;
	static int64_t t81 = INT64_MAX;

    t81 = (x329|((x330^x331)%x332));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x334 = 437486090220769LL;
	static volatile uint8_t x335 = 10U;
	int16_t x336 = INT16_MIN;
	volatile int64_t t82 = 45LL;

    t82 = (x333|((x334^x335)%x336));

    if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x337 = INT64_MIN;
	int64_t x338 = 66858123170LL;
	volatile int64_t x339 = INT64_MAX;
	uint8_t x340 = 5U;

    t83 = (x337|((x338^x339)%x340));

    if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x342 = -1LL;
	volatile int16_t x343 = -1;
	uint8_t x344 = 21U;
	int64_t t84 = -4LL;

    t84 = (x341|((x342^x343)%x344));

    if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x346 = -1;
	uint8_t x347 = 1U;
	int32_t t85 = 66367740;

    t85 = (x345|((x346^x347)%x348));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = INT32_MIN;
	uint8_t x350 = 4U;
	volatile uint16_t x351 = 83U;
	uint8_t x352 = 4U;
	volatile int32_t t86 = 13;

    t86 = (x349|((x350^x351)%x352));

    if (t86 != -2147483645) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x353 = UINT8_MAX;
	uint16_t x354 = 1899U;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t87 = -308;

    t87 = (x353|((x354^x355)%x356));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x357 = INT32_MIN;
	uint64_t x359 = 27931687LLU;
	int8_t x360 = INT8_MIN;
	static uint64_t t88 = 569LLU;

    t88 = (x357|((x358^x359)%x360));

    if (t88 != 18446744073681613863LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 1U;
	int8_t x362 = INT8_MIN;
	int64_t x363 = 1674727LL;
	int8_t x364 = 14;

    t89 = (x361|((x362^x363)%x364));

    if (t89 != -11LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x366 = 3698435893538756LL;
	volatile uint32_t x367 = 38U;
	int16_t x368 = -821;
	uint64_t t90 = 392677018847070763LLU;

    t90 = (x365|((x366^x367)%x368));

    if (t90 != 2465298533239LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = 1142501288993746912LL;
	uint8_t x371 = 42U;
	volatile int8_t x372 = 7;
	int64_t t91 = -1562LL;

    t91 = (x369|((x370^x371)%x372));

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x373 = 2038U;
	int64_t x375 = INT64_MAX;
	int8_t x376 = 3;
	static volatile int64_t t92 = 100827794462754407LL;

    t92 = (x373|((x374^x375)%x376));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x377 = INT16_MIN;
	uint32_t x378 = 1527073385U;
	volatile uint16_t x379 = 1990U;
	int8_t x380 = INT8_MAX;
	static volatile uint32_t t93 = 7489U;

    t93 = (x377|((x378^x379)%x380));

    if (t93 != 4294934589U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = INT32_MIN;
	static uint8_t x382 = 7U;
	volatile int16_t x383 = 483;
	static int8_t x384 = INT8_MIN;
	int32_t t94 = -12;

    t94 = (x381|((x382^x383)%x384));

    if (t94 != -2147483548) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = -1LL;
	volatile int16_t x386 = INT16_MIN;
	uint64_t x387 = 949672LLU;
	uint16_t x388 = 1685U;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = (x385|((x386^x387)%x388));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x390 = -29;
	int16_t x391 = -6;
	int32_t x392 = INT32_MIN;
	int32_t t96 = 4243469;

    t96 = (x389|((x390^x391)%x392));

    if (t96 != 25) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x394 = -1LL;
	volatile int64_t x395 = -260089595100513387LL;
	int64_t t97 = INT64_MAX;

    t97 = (x393|((x394^x395)%x396));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x397 = 14;
	volatile int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;

    t98 = (x397|((x398^x399)%x400));

    if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	uint32_t x404 = 99U;
	volatile int64_t t99 = 77886545469093404LL;

    t99 = (x401|((x402^x403)%x404));

    if (t99 != -3338083308922997777LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x406 = 165372076LLU;
	uint8_t x407 = 0U;
	uint32_t x408 = 108094U;
	uint64_t t100 = UINT64_MAX;

    t100 = (x405|((x406^x407)%x408));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x409 = 509U;
	uint32_t x410 = UINT32_MAX;
	volatile uint16_t x412 = UINT16_MAX;
	uint32_t t101 = 114U;

    t101 = (x409|((x410^x411)%x412));

    if (t101 != 32767U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x414 = 63;
	volatile int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t102 = 106515482983327LLU;

    t102 = (x413|((x414^x415)%x416));

    if (t102 != 18446744071562096383LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = -1;
	volatile uint16_t x418 = UINT16_MAX;
	uint32_t x419 = 1925526304U;
	static int64_t x420 = -1LL;
	int64_t t103 = -381LL;

    t103 = (x417|((x418^x419)%x420));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x423 = UINT8_MAX;
	uint8_t x424 = 116U;
	static volatile int32_t t104 = 14504;

    t104 = (x421|((x422^x423)%x424));

    if (t104 != -33) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 154182U;
	uint8_t x428 = 11U;
	volatile uint32_t t105 = 470960424U;

    t105 = (x425|((x426^x427)%x428));

    if (t105 != 8U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = INT64_MAX;
	int8_t x431 = 29;
	int64_t t106 = -117924759824LL;

    t106 = (x429|((x430^x431)%x432));

    if (t106 != -30LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x434 = UINT16_MAX;
	uint8_t x436 = 5U;
	int32_t t107 = 1;

    t107 = (x433|((x434^x435)%x436));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x438 = UINT64_MAX;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (x437|((x438^x439)%x440));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MAX;
	volatile int64_t x444 = INT64_MIN;

    t109 = (x441|((x442^x443)%x444));

    if (t109 != -32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = -645852178957724589LL;
	uint8_t x447 = 2U;
	int16_t x448 = -1;

    t110 = (x445|((x446^x447)%x448));

    if (t110 != -645852178957724589LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x449 = 376055174863506570LL;
	volatile int32_t x451 = INT32_MIN;
	int16_t x452 = 15303;
	int64_t t111 = -230300139657LL;

    t111 = (x449|((x450^x451)%x452));

    if (t111 != -12369LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x453 = 40449159795130990LLU;
	uint16_t x454 = 21060U;
	volatile uint16_t x455 = 895U;
	static int64_t x456 = -1LL;
	volatile uint64_t t112 = 92553786LLU;

    t112 = (x453|((x454^x455)%x456));

    if (t112 != 40449159795130990LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x457 = INT32_MIN;
	int16_t x458 = INT16_MAX;
	int8_t x459 = INT8_MIN;
	uint32_t x460 = 1U;
	volatile uint32_t t113 = 48295577U;

    t113 = (x457|((x458^x459)%x460));

    if (t113 != 2147483648U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x462 = INT16_MAX;
	static volatile uint16_t x463 = 1U;
	volatile uint32_t x464 = UINT32_MAX;
	volatile uint32_t t114 = 6066451U;

    t114 = (x461|((x462^x463)%x464));

    if (t114 != 4294967294U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x466 = -2;
	volatile uint8_t x467 = 5U;
	static volatile int8_t x468 = INT8_MIN;
	volatile int32_t t115 = 86;

    t115 = (x465|((x466^x467)%x468));

    if (t115 != -5) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x469 = UINT32_MAX;
	int32_t x471 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	uint32_t t116 = UINT32_MAX;

    t116 = (x469|((x470^x471)%x472));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x473 = -4;
	int16_t x475 = INT16_MAX;
	int64_t x476 = INT64_MIN;
	static int64_t t117 = -150719039538299LL;

    t117 = (x473|((x474^x475)%x476));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = -1LL;
	static int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	volatile int64_t t118 = 4067912063640LL;

    t118 = (x477|((x478^x479)%x480));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x485 = INT64_MIN;
	int32_t x486 = 7;
	int16_t x488 = INT16_MAX;
	int64_t t119 = -1005790648510LL;

    t119 = (x485|((x486^x487)%x488));

    if (t119 != -8LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x489 = 1;
	volatile int64_t x490 = -2216519717756239LL;
	uint64_t x491 = UINT64_MAX;
	int16_t x492 = INT16_MAX;
	volatile uint64_t t120 = 847367835129LLU;

    t120 = (x489|((x490^x491)%x492));

    if (t120 != 2569LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x493 = 24;
	static volatile uint16_t x494 = UINT16_MAX;
	uint32_t x495 = UINT32_MAX;
	static uint32_t x496 = 22U;
	volatile uint32_t t121 = 618420U;

    t121 = (x493|((x494^x495)%x496));

    if (t121 != 30U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x498 = 2U;
	int64_t x499 = -519040215LL;
	int64_t t122 = -20LL;

    t122 = (x497|((x498^x499)%x500));

    if (t122 != -87LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x501 = -1;
	int16_t x502 = -1;
	int8_t x503 = 5;

    t123 = (x501|((x502^x503)%x504));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x505 = -64448191;
	int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t124 = 734402531U;

    t124 = (x505|((x506^x507)%x508));

    if (t124 != 4294940995U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x510 = 122U;
	volatile uint32_t x511 = 402U;
	static int16_t x512 = -1;
	int64_t t125 = 7708LL;

    t125 = (x509|((x510^x511)%x512));

    if (t125 != 493LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x514 = -1;
	uint64_t x515 = 3436LLU;
	uint16_t x516 = 1661U;
	volatile uint64_t t126 = 434558284460250LLU;

    t126 = (x513|((x514^x515)%x516));

    if (t126 != 2147483647LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x517 = INT32_MIN;
	int32_t x518 = INT32_MIN;
	volatile uint16_t x519 = UINT16_MAX;
	volatile int16_t x520 = INT16_MIN;
	volatile int32_t t127 = -1663;

    t127 = (x517|((x518^x519)%x520));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = INT64_MIN;
	int16_t x524 = INT16_MIN;
	static volatile int64_t t128 = -50512LL;

    t128 = (x521|((x522^x523)%x524));

    if (t128 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int64_t x528 = INT64_MIN;
	volatile int64_t t129 = -1772371320LL;

    t129 = (x525|((x526^x527)%x528));

    if (t129 != -32641LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x529 = INT16_MIN;
	int16_t x531 = 1;

    t130 = (x529|((x530^x531)%x532));

    if (t130 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -1;
	static uint16_t x534 = 141U;
	int16_t x535 = INT16_MIN;
	volatile int32_t x536 = -494;
	volatile int32_t t131 = 0;

    t131 = (x533|((x534^x535)%x536));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x537 = INT16_MIN;
	static volatile int64_t x538 = INT64_MIN;
	static int16_t x539 = INT16_MIN;
	uint32_t x540 = UINT32_MAX;
	volatile int64_t t132 = -23820336499062351LL;

    t132 = (x537|((x538^x539)%x540));

    if (t132 != -32768LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x541 = 12U;
	static volatile uint8_t x542 = UINT8_MAX;
	int32_t x544 = 32889181;

    t133 = (x541|((x542^x543)%x544));

    if (t133 != 140) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x546 = 0U;
	uint8_t x547 = 55U;
	uint32_t x548 = UINT32_MAX;
	volatile int64_t t134 = INT64_MAX;

    t134 = (x545|((x546^x547)%x548));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = INT8_MIN;
	int8_t x551 = 1;

    t135 = (x549|((x550^x551)%x552));

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x553 = 0LL;
	uint16_t x554 = 32U;
	volatile uint32_t x555 = UINT32_MAX;
	static volatile uint32_t x556 = UINT32_MAX;
	volatile int64_t t136 = -2708297517021558423LL;

    t136 = (x553|((x554^x555)%x556));

    if (t136 != 4294967263LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = -1;
	static int64_t x558 = INT64_MIN;
	static int8_t x559 = INT8_MIN;
	static int16_t x560 = INT16_MAX;
	volatile int64_t t137 = -1102176532LL;

    t137 = (x557|((x558^x559)%x560));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x561 = INT16_MAX;
	static uint8_t x563 = 4U;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t138 = 11596213;

    t138 = (x561|((x562^x563)%x564));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x570 = INT16_MIN;
	volatile int64_t x571 = INT64_MAX;
	volatile uint8_t x572 = UINT8_MAX;
	volatile int64_t t139 = 9584LL;

    t139 = (x569|((x570^x571)%x572));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x574 = 7U;
	int32_t x575 = 0;
	uint32_t x576 = 2U;
	static int64_t t140 = -12160LL;

    t140 = (x573|((x574^x575)%x576));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x578 = -1LL;
	int32_t x579 = INT32_MIN;
	int8_t x580 = -1;
	int64_t t141 = 167670LL;

    t141 = (x577|((x578^x579)%x580));

    if (t141 != -128LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x581 = UINT32_MAX;
	uint64_t x583 = UINT64_MAX;
	static volatile int8_t x584 = -1;

    t142 = (x581|((x582^x583)%x584));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x585 = -1;
	int8_t x586 = -27;
	volatile int32_t x587 = INT32_MIN;
	int32_t t143 = -790;

    t143 = (x585|((x586^x587)%x588));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x591 = 26715138245LLU;
	static int8_t x592 = INT8_MIN;
	uint64_t t144 = 2024087324936167039LLU;

    t144 = (x589|((x590^x591)%x592));

    if (t144 != 26715138303LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x594 = INT32_MIN;
	uint8_t x595 = 114U;
	uint8_t x596 = 27U;
	static int32_t t145 = 33489971;

    t145 = (x593|((x594^x595)%x596));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x597 = 96127LLU;
	int8_t x598 = INT8_MAX;
	static volatile int64_t x600 = INT64_MIN;
	static uint64_t t146 = UINT64_MAX;

    t146 = (x597|((x598^x599)%x600));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x601 = INT8_MIN;
	static int16_t x602 = -256;
	uint32_t x603 = 0U;
	int32_t x604 = -1;
	uint32_t t147 = 9655245U;

    t147 = (x601|((x602^x603)%x604));

    if (t147 != 4294967168U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x605 = 69U;
	uint32_t x606 = UINT32_MAX;
	volatile int16_t x608 = INT16_MIN;
	volatile uint32_t t148 = 1182792998U;

    t148 = (x605|((x606^x607)%x608));

    if (t148 != 4294901829U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x610 = UINT32_MAX;
	uint16_t x611 = UINT16_MAX;
	uint32_t t149 = 453421588U;

    t149 = (x609|((x610^x611)%x612));

    if (t149 != 2147418113U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = 468937755LLU;
	uint8_t x615 = 0U;
	int64_t x616 = INT64_MIN;
	static volatile uint64_t t150 = 4049980136LLU;

    t150 = (x613|((x614^x615)%x616));

    if (t150 != 4294967295LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x617 = INT32_MAX;
	static int32_t x619 = 3;
	int8_t x620 = INT8_MIN;
	volatile uint32_t t151 = 246U;

    t151 = (x617|((x618^x619)%x620));

    if (t151 != 2147483647U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x621 = 19013820321LLU;
	int16_t x622 = INT16_MIN;
	int8_t x623 = 26;
	int64_t x624 = INT64_MIN;
	volatile uint64_t t152 = 58844110954LLU;

    t152 = (x621|((x622^x623)%x624));

    if (t152 != 18446744073709543355LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = 6716062150661LL;
	uint8_t x626 = 6U;
	int64_t x628 = INT64_MIN;
	int64_t t153 = 4093928412863262555LL;

    t153 = (x625|((x626^x627)%x628));

    if (t153 != -9223365320792625145LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x629 = UINT32_MAX;
	static uint64_t x630 = UINT64_MAX;
	uint16_t x631 = UINT16_MAX;
	volatile int32_t x632 = INT32_MIN;

    t154 = (x629|((x630^x631)%x632));

    if (t154 != 4294967295LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x634 = INT8_MIN;
	uint64_t t155 = UINT64_MAX;

    t155 = (x633|((x634^x635)%x636));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x644 = INT32_MIN;

    t156 = (x641|((x642^x643)%x644));

    if (t156 != -32513LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MAX;
	int16_t x648 = INT16_MIN;
	static int64_t t157 = 7470308191948669LL;

    t157 = (x645|((x646^x647)%x648));

    if (t157 != -32768LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x652 = INT8_MAX;
	volatile uint64_t t158 = UINT64_MAX;

    t158 = (x649|((x650^x651)%x652));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = INT64_MIN;
	static uint32_t x655 = 8982199U;
	uint16_t x656 = 7U;

    t159 = (x653|((x654^x655)%x656));

    if (t159 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x657 = 6381338847207LL;
	int16_t x658 = 1435;
	static int16_t x660 = -1;
	static volatile int64_t t160 = -15496707250189LL;

    t160 = (x657|((x658^x659)%x660));

    if (t160 != 6381338847207LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x661 = 420U;
	int64_t x662 = INT64_MIN;
	uint8_t x663 = UINT8_MAX;
	static volatile int64_t x664 = INT64_MAX;
	volatile int64_t t161 = -21LL;

    t161 = (x661|((x662^x663)%x664));

    if (t161 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x665 = 1043283310U;
	int8_t x667 = -4;
	int16_t x668 = INT16_MIN;
	volatile uint32_t t162 = 102324502U;

    t162 = (x665|((x666^x667)%x668));

    if (t162 != 4294967278U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	static int32_t x671 = -11;
	int32_t x672 = INT32_MAX;
	int32_t t163 = 2598;

    t163 = (x669|((x670^x671)%x672));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x673 = 27;
	int64_t x675 = -1LL;
	volatile int64_t t164 = 21684188LL;

    t164 = (x673|((x674^x675)%x676));

    if (t164 != -32741LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = INT32_MIN;
	int16_t x679 = -3;
	volatile int64_t t165 = -1652LL;

    t165 = (x677|((x678^x679)%x680));

    if (t165 != -2147483648LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = INT32_MAX;
	static int64_t x682 = INT64_MAX;
	uint16_t x683 = 724U;
	volatile uint8_t x684 = UINT8_MAX;
	int64_t t166 = 7746LL;

    t166 = (x681|((x682^x683)%x684));

    if (t166 != 2147483647LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = INT16_MAX;
	volatile int32_t x686 = INT32_MIN;
	uint16_t x687 = 8083U;
	static volatile int32_t t167 = 788;

    t167 = (x685|((x686^x687)%x688));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = 3275U;
	uint8_t x690 = UINT8_MAX;
	int8_t x691 = -1;
	int8_t x692 = -1;
	uint32_t t168 = 1U;

    t168 = (x689|((x690^x691)%x692));

    if (t168 != 3275U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = -1;
	volatile int16_t x695 = -1;
	volatile uint64_t x696 = UINT64_MAX;

    t169 = (x693|((x694^x695)%x696));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x698 = -173380901631978501LL;
	volatile int16_t x699 = 238;
	uint64_t x700 = 1353698914738LLU;

    t170 = (x697|((x698^x699)%x700));

    if (t170 != 824633720831LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x701 = INT16_MIN;
	int8_t x702 = 2;
	static int8_t x703 = -62;
	static volatile int16_t x704 = INT16_MIN;
	int32_t t171 = 3;

    t171 = (x701|((x702^x703)%x704));

    if (t171 != -64) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = INT64_MAX;
	int8_t x706 = -43;
	volatile int16_t x707 = INT16_MAX;
	static int8_t x708 = INT8_MIN;
	int64_t t172 = -7020501428LL;

    t172 = (x705|((x706^x707)%x708));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MAX;
	int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MAX;
	volatile int64_t t173 = -3434079119LL;

    t173 = (x709|((x710^x711)%x712));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x713 = -12;
	int32_t x714 = -15802;
	int16_t x716 = -1;
	volatile int32_t t174 = -38487;

    t174 = (x713|((x714^x715)%x716));

    if (t174 != -12) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x719 = -1;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x717|((x718^x719)%x720));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x721 = 1U;
	uint32_t x722 = 2461064U;
	int8_t x724 = -1;
	uint32_t t176 = 7212934U;

    t176 = (x721|((x722^x723)%x724));

    if (t176 != 4292506121U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x725 = -327;
	int8_t x727 = -1;
	uint64_t x728 = 8119874017845921185LLU;

    t177 = (x725|((x726^x727)%x728));

    if (t177 != 18446744073709551289LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = 3459;
	int64_t x730 = INT64_MIN;
	int16_t x731 = -1;
	int64_t x732 = INT64_MAX;
	int64_t t178 = -3731033LL;

    t178 = (x729|((x730^x731)%x732));

    if (t178 != 3459LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x734 = INT32_MAX;
	volatile int64_t x735 = 75164318748001LL;

    t179 = (x733|((x734^x735)%x736));

    if (t179 != -32768LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x737 = 9188358316677164823LLU;
	uint32_t x738 = UINT32_MAX;
	uint16_t x739 = 2U;
	static volatile uint64_t t180 = 13280LLU;

    t180 = (x737|((x738^x739)%x740));

    if (t180 != 9188358316677164863LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x741 = -1;
	int32_t x742 = 62692048;
	static int16_t x744 = INT16_MAX;
	volatile int32_t t181 = -100662;

    t181 = (x741|((x742^x743)%x744));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x745 = INT16_MIN;
	volatile int16_t x746 = INT16_MIN;
	uint8_t x748 = 2U;
	volatile int32_t t182 = 6845105;

    t182 = (x745|((x746^x747)%x748));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x749 = -274060971;
	uint32_t x751 = 1644105U;
	int32_t x752 = 1297200;
	uint32_t t183 = 1619144518U;

    t183 = (x749|((x750^x751)%x752));

    if (t183 != 4021251031U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x753 = 53099U;
	volatile uint16_t x754 = 4669U;
	volatile uint16_t x755 = UINT16_MAX;
	int16_t x756 = INT16_MIN;
	volatile uint32_t t184 = 525038016U;

    t184 = (x753|((x754^x755)%x756));

    if (t184 != 61419U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x757 = INT16_MIN;
	static uint32_t x758 = UINT32_MAX;
	int8_t x759 = INT8_MAX;
	volatile int8_t x760 = -1;
	uint32_t t185 = 28U;

    t185 = (x757|((x758^x759)%x760));

    if (t185 != 4294967168U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x762 = -1LL;
	uint8_t x763 = 10U;
	int16_t x764 = -1;
	static volatile int64_t t186 = -178263LL;

    t186 = (x761|((x762^x763)%x764));

    if (t186 != -20LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x766 = UINT32_MAX;
	int8_t x767 = -1;
	uint8_t x768 = UINT8_MAX;
	static volatile int64_t t187 = -1197534824613809658LL;

    t187 = (x765|((x766^x767)%x768));

    if (t187 != -59658426401994LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x769 = INT16_MAX;
	volatile int16_t x770 = -1218;
	volatile int64_t x772 = 9467LL;
	int64_t t188 = -1683850500LL;

    t188 = (x769|((x770^x771)%x772));

    if (t188 != 32767LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x773 = -27;
	int8_t x774 = INT8_MIN;
	uint8_t x775 = 1U;
	int64_t x776 = -524313047751LL;
	volatile int64_t t189 = -32937204099951LL;

    t189 = (x773|((x774^x775)%x776));

    if (t189 != -27LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x777 = UINT8_MAX;
	int16_t x778 = INT16_MIN;
	uint64_t x779 = 197556457LLU;

    t190 = (x777|((x778^x779)%x780));

    if (t190 != 255LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x781 = INT8_MIN;
	static volatile uint64_t x782 = 208654LLU;
	int8_t x784 = INT8_MIN;

    t191 = (x781|((x782^x783)%x784));

    if (t191 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x786 = 813U;
	volatile int16_t x787 = 454;
	int16_t x788 = INT16_MIN;
	volatile uint32_t t192 = 621U;

    t192 = (x785|((x786^x787)%x788));

    if (t192 != 3071U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x789 = -1;
	volatile int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MAX;
	int16_t x792 = INT16_MIN;

    t193 = (x789|((x790^x791)%x792));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x794 = 11U;
	int16_t x796 = INT16_MIN;

    t194 = (x793|((x794^x795)%x796));

    if (t194 != -7147302149LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x797 = INT64_MAX;
	volatile int16_t x798 = -1;
	uint32_t x799 = 108U;
	uint32_t x800 = UINT32_MAX;

    t195 = (x797|((x798^x799)%x800));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = -1438908LL;
	int8_t x802 = INT8_MIN;
	static uint16_t x803 = 327U;
	volatile int64_t t196 = 2085013932900LL;

    t196 = (x801|((x802^x803)%x804));

    if (t196 != -57LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x805 = 5U;
	volatile int32_t x806 = -270620;
	uint64_t x807 = 46743764423773LLU;
	static volatile int64_t x808 = INT64_MIN;
	static uint64_t t197 = 40499188932567LLU;

    t197 = (x805|((x806^x807)%x808));

    if (t197 != 9223325293090081469LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x809 = -1;
	uint64_t x810 = UINT64_MAX;
	uint8_t x811 = 5U;
	int32_t x812 = INT32_MAX;

    t198 = (x809|((x810^x811)%x812));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = INT8_MAX;
	static int64_t x815 = INT64_MIN;

    t199 = (x813|((x814^x815)%x816));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

