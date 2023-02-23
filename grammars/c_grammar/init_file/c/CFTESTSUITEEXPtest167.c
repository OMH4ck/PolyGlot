
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

int32_t x2 = INT32_MAX;
static int32_t x3 = INT32_MIN;
int8_t x8 = INT8_MIN;
int16_t x13 = 5;
uint16_t x33 = UINT16_MAX;
static int16_t x36 = -1;
static int32_t x40 = 3878;
int32_t t8 = 34680;
int32_t x49 = -1;
int64_t x54 = -209162865482LL;
uint8_t x56 = UINT8_MAX;
uint16_t x64 = 1U;
int64_t t14 = -1692481LL;
uint32_t x71 = UINT32_MAX;
volatile int64_t t15 = -184628552810LL;
volatile int8_t x74 = -1;
volatile int64_t t16 = 99986LL;
int8_t x78 = -1;
volatile int32_t x100 = 447767850;
int8_t x102 = -1;
static int8_t x103 = INT8_MAX;
volatile int64_t t21 = -400952956844LL;
int32_t x105 = INT32_MAX;
int16_t x108 = -1;
volatile int32_t x110 = -1;
int8_t x113 = -2;
volatile int32_t x114 = INT32_MAX;
uint16_t x117 = 76U;
static volatile int64_t t28 = -1LL;
int64_t x137 = INT64_MIN;
int16_t x140 = -1;
volatile int64_t t30 = 3206LL;
static int32_t x148 = -1;
int16_t x151 = -2;
int8_t x153 = INT8_MIN;
int32_t x156 = INT32_MIN;
static int64_t x161 = 13746LL;
static int8_t x174 = INT8_MIN;
uint8_t x175 = 65U;
static int16_t x185 = 6690;
uint8_t x187 = 20U;
int8_t x191 = -1;
int8_t x203 = INT8_MAX;
volatile uint32_t t46 = 216U;
int64_t t47 = INT64_MAX;
int16_t x217 = INT16_MIN;
static int16_t x219 = INT16_MAX;
static uint32_t x224 = 1639U;
uint32_t x233 = UINT32_MAX;
int8_t x238 = INT8_MAX;
int64_t t53 = 2744307294015346073LL;
uint64_t x242 = UINT64_MAX;
uint8_t x243 = UINT8_MAX;
uint32_t x245 = UINT32_MAX;
uint8_t x250 = 0U;
static uint32_t x254 = UINT32_MAX;
int16_t x259 = -1;
static volatile int8_t x263 = INT8_MIN;
int64_t x266 = -247317915189LL;
static int64_t t60 = 19359752LL;
volatile int32_t x271 = 56;
static uint16_t x273 = 3401U;
volatile int64_t x275 = -1LL;
uint64_t x281 = UINT64_MAX;
int64_t x303 = INT64_MIN;
int16_t x311 = INT16_MIN;
int64_t x312 = INT64_MIN;
int64_t t69 = 106632374191900532LL;
static volatile uint32_t x317 = UINT32_MAX;
uint8_t x321 = 91U;
uint32_t x333 = UINT32_MAX;
volatile int32_t x336 = -95;
uint8_t x339 = 2U;
uint64_t x344 = 132LLU;
int64_t x348 = -1LL;
uint16_t x350 = 1318U;
int64_t x355 = 0LL;
uint8_t x366 = 0U;
int64_t t81 = 238190795252302320LL;
int8_t x375 = 2;
int32_t x381 = INT32_MAX;
int64_t x383 = 5940477107LL;
int16_t x386 = INT16_MIN;
int16_t x392 = 9;
uint32_t t86 = 115362976U;
uint64_t x393 = 7601LLU;
static volatile int16_t x394 = 216;
static uint64_t x397 = 7037863037708454LLU;
static uint64_t x398 = 1536297617518671LLU;
volatile int64_t x399 = INT64_MAX;
uint64_t x404 = UINT64_MAX;
int32_t x407 = INT32_MIN;
volatile uint64_t t90 = 6593LLU;
int8_t x418 = INT8_MIN;
int64_t x420 = INT64_MIN;
volatile int64_t t91 = 102172621LL;
int32_t x421 = -1;
static int64_t x424 = 265502935LL;
int64_t x428 = INT64_MAX;
volatile int8_t x431 = -1;
static int8_t x433 = INT8_MAX;
static uint64_t x435 = 3LLU;
uint64_t t95 = 19672LLU;
int16_t x438 = -1;
uint64_t t96 = 80603685983LLU;
uint32_t x450 = UINT32_MAX;
int64_t t100 = 81380592160592LL;
int8_t x457 = INT8_MAX;
int8_t x471 = -1;
uint64_t x474 = 250584778LLU;
uint32_t x475 = 734058U;
uint8_t x488 = 13U;
int32_t t107 = 6;
volatile int16_t x489 = -1;
volatile uint16_t x490 = 1U;
int8_t x492 = 5;
uint16_t x496 = 23U;
uint64_t t109 = UINT64_MAX;
static int8_t x500 = -30;
volatile uint64_t t110 = UINT64_MAX;
uint16_t x507 = UINT16_MAX;
static int64_t x512 = INT64_MIN;
volatile int64_t t112 = 259964586LL;
uint8_t x521 = 17U;
int16_t x523 = -1;
uint64_t x536 = 21097604545975LLU;
volatile uint64_t t118 = 882044794LLU;
static int16_t x562 = 108;
int8_t x565 = INT8_MIN;
int16_t x566 = -1;
static volatile int64_t x568 = 134316428503LL;
int64_t x573 = INT64_MAX;
int8_t x590 = INT8_MIN;
uint64_t x592 = 2261045065019431LLU;
volatile uint64_t t129 = 134940625784954073LLU;
uint32_t t130 = 2U;
int16_t x602 = INT16_MIN;
uint64_t t132 = UINT64_MAX;
static int32_t x608 = INT32_MIN;
int8_t x610 = 1;
int32_t t134 = 23;
uint32_t x616 = 3289U;
static int64_t t135 = 9LL;
int16_t x617 = INT16_MIN;
volatile int64_t x622 = INT64_MIN;
static uint16_t x626 = 1U;
static int32_t x629 = INT32_MIN;
int32_t x631 = INT32_MIN;
static int32_t t139 = 71686799;
int16_t x633 = INT16_MIN;
uint32_t x642 = 16U;
volatile int64_t t141 = 309003492433LL;
uint32_t x649 = 408U;
uint64_t t142 = 1129110364396880LLU;
int64_t x656 = -1LL;
uint8_t x664 = 0U;
int16_t x666 = INT16_MAX;
int64_t t146 = 6057099LL;
int16_t x690 = 3;
int16_t x691 = INT16_MAX;
volatile uint64_t t150 = 20571LLU;
volatile int8_t x697 = INT8_MIN;
int16_t x698 = INT16_MIN;
volatile int64_t x717 = INT64_MIN;
static uint8_t x723 = UINT8_MAX;
int64_t x726 = -1LL;
volatile uint64_t x734 = 25045747529LLU;
volatile uint64_t t160 = 9580995374LLU;
uint32_t x766 = UINT32_MAX;
int64_t x767 = INT64_MIN;
uint8_t x771 = 90U;
int8_t x774 = 0;
uint32_t x775 = 33112745U;
int64_t x776 = INT64_MIN;
uint64_t x777 = 254165369LLU;
int32_t x778 = -1;
int8_t x784 = INT8_MIN;
int16_t x787 = -1;
uint64_t x799 = 1580298LLU;
static int16_t x801 = -2;
uint8_t x804 = 54U;
uint32_t x819 = 327475571U;
int32_t x823 = -1;
volatile uint32_t t178 = 13U;
uint32_t x825 = 250U;
uint32_t x826 = UINT32_MAX;
static int8_t x831 = 1;
int8_t x832 = INT8_MIN;
int64_t x841 = INT64_MIN;
int16_t x846 = -1;
uint32_t x847 = UINT32_MAX;
volatile uint64_t x851 = 37572741713597275LLU;
static volatile uint64_t t184 = 8594531616582074789LLU;
uint64_t x853 = UINT64_MAX;
static volatile uint64_t t185 = UINT64_MAX;
uint16_t x857 = UINT16_MAX;
volatile uint64_t x858 = 16778297124LLU;
static uint16_t x864 = 473U;
int32_t t189 = -64620668;
uint64_t x889 = UINT64_MAX;
static volatile int32_t x906 = 0;
int16_t x907 = INT16_MAX;
int32_t t198 = 1;
uint16_t x913 = 2U;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 141617317680208641LL;

    t0 = (x1|((x2+x3)&x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x6 = -1947;
	int32_t x7 = -1;
	static volatile int64_t t1 = 143LL;

    t1 = (x5|((x6+x7)&x8));

    if (t1 != -2048LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x14 = 41656112U;
	int32_t x15 = INT32_MIN;
	int8_t x16 = -1;
	uint32_t t2 = 88751U;

    t2 = (x13|((x14+x15)&x16));

    if (t2 != 2189139765U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 1025675259794524093LLU;
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 14343293545LLU;

    t3 = (x17|((x18+x19)&x20));

    if (t3 != 1025675260147531775LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -1;
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 1;

    t4 = (x21|((x22+x23)&x24));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint8_t x26 = 15U;
	static int64_t x27 = 159389LL;
	static int64_t x28 = INT64_MIN;
	int64_t t5 = 55LL;

    t5 = (x25|((x26+x27)&x28));

    if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 0U;
	int32_t x30 = INT32_MIN;
	int32_t x31 = 1;
	int16_t x32 = 0;
	volatile int32_t t6 = -39183329;

    t6 = (x29|((x30+x31)&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x34 = 739LLU;
	int32_t x35 = -1;
	static uint64_t t7 = 184807422054LLU;

    t7 = (x33|((x34+x35)&x36));

    if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 338798;
	volatile int16_t x38 = 1;
	int16_t x39 = -1142;

    t8 = (x37|((x38+x39)&x40));

    if (t8 != 338798) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	uint64_t x42 = 1813140560LLU;
	volatile int64_t x43 = -125848177LL;
	volatile int64_t x44 = -2062179196LL;
	uint64_t t9 = UINT64_MAX;

    t9 = (x41|((x42+x43)&x44));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x50 = UINT8_MAX;
	int32_t x51 = 27585262;
	int64_t x52 = INT64_MIN;
	volatile int64_t t10 = -1547892341961136LL;

    t10 = (x49|((x50+x51)&x52));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	volatile int64_t t11 = -205LL;

    t11 = (x53|((x54+x55)&x56));

    if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MAX;
	int16_t x58 = 1;
	int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t12 = -3872;

    t12 = (x57|((x58+x59)&x60));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = 11790;
	int8_t x62 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	int32_t t13 = -1893736;

    t13 = (x61|((x62+x63)&x64));

    if (t13 != 11791) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = INT64_MAX;
	int64_t x66 = -170192127417LL;
	int8_t x67 = INT8_MIN;
	static int16_t x68 = -1;

    t14 = (x65|((x66+x67)&x68));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	static uint32_t x70 = 421987898U;
	volatile int64_t x72 = INT64_MIN;

    t15 = (x69|((x70+x71)&x72));

    if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int8_t x75 = -1;
	static volatile uint32_t x76 = 241212461U;

    t16 = (x73|((x74+x75)&x76));

    if (t16 != -9223372036613563348LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x79 = 1;
	static uint8_t x80 = UINT8_MAX;
	volatile int32_t t17 = -201566;

    t17 = (x77|((x78+x79)&x80));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x81 = 0;
	int8_t x82 = -1;
	static int16_t x83 = -1;
	int32_t x84 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

    t18 = (x81|((x82+x83)&x84));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = -1;
	volatile int64_t x96 = -1LL;
	static volatile int64_t t19 = -484469502LL;

    t19 = (x93|((x94+x95)&x96));

    if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 1U;
	int64_t x98 = 99771LL;
	volatile int8_t x99 = INT8_MIN;
	volatile int64_t t20 = -21LL;

    t20 = (x97|((x98+x99)&x100));

    if (t20 != 1323LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x104 = INT64_MIN;

    t21 = (x101|((x102+x103)&x104));

    if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x106 = 16573563167070774LLU;
	volatile int32_t x107 = INT32_MIN;
	static volatile uint64_t t22 = 22679693LLU;

    t22 = (x105|((x106+x107)&x108));

    if (t22 != 16573561535725567LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x109 = 3761U;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MAX;
	int64_t t23 = 29LL;

    t23 = (x109|((x110+x111)&x112));

    if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x115 = 205282747U;
	static uint8_t x116 = 8U;
	volatile uint32_t t24 = 429524398U;

    t24 = (x113|((x114+x115)&x116));

    if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x118 = -1;
	static volatile int8_t x119 = INT8_MIN;
	uint64_t x120 = 62773203LLU;
	uint64_t t25 = 439LLU;

    t25 = (x117|((x118+x119)&x120));

    if (t25 != 62773087LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x121 = INT16_MIN;
	volatile int8_t x122 = -1;
	int64_t x123 = -1LL;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t26 = 1835LL;

    t26 = (x121|((x122+x123)&x124));

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x125 = INT8_MIN;
	static volatile int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -1;
	uint32_t x128 = 50688U;
	uint32_t t27 = 37U;

    t27 = (x125|((x126+x127)&x128));

    if (t27 != 4294967168U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = -764396952408LL;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = 23U;
	uint32_t x132 = UINT32_MAX;

    t28 = (x129|((x130+x131)&x132));

    if (t28 != -764396919618LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = -1LL;
	static int64_t x134 = -13096300775684LL;
	int16_t x135 = -454;
	uint16_t x136 = 31311U;
	volatile int64_t t29 = 312240633973503LL;

    t29 = (x133|((x134+x135)&x136));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x138 = -1LL;
	int32_t x139 = INT32_MAX;

    t30 = (x137|((x138+x139)&x140));

    if (t30 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x141 = 795891330187LLU;
	static volatile uint16_t x142 = 3U;
	int8_t x143 = INT8_MAX;
	static volatile int32_t x144 = INT32_MIN;
	volatile uint64_t t31 = 785521527LLU;

    t31 = (x141|((x142+x143)&x144));

    if (t31 != 795891330187LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x145 = INT8_MIN;
	int32_t x146 = 26135;
	int8_t x147 = INT8_MAX;
	int32_t t32 = 698018;

    t32 = (x145|((x146+x147)&x148));

    if (t32 != -106) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = 18;
	int32_t x150 = -6376;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t33 = -191939530;

    t33 = (x149|((x150+x151)&x152));

    if (t33 != 59158) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = 2363;
	volatile uint32_t t34 = 307U;

    t34 = (x153|((x154+x155)&x156));

    if (t34 != 4294967168U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	int32_t x158 = -1;
	uint32_t x159 = 31528706U;
	static int8_t x160 = INT8_MAX;
	static uint32_t t35 = UINT32_MAX;

    t35 = (x157|((x158+x159)&x160));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x162 = 46U;
	volatile uint8_t x163 = 27U;
	int32_t x164 = INT32_MIN;
	volatile int64_t t36 = 221444LL;

    t36 = (x161|((x162+x163)&x164));

    if (t36 != 13746LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x165 = UINT64_MAX;
	int8_t x166 = 3;
	int64_t x167 = -4089702398054320064LL;
	static int8_t x168 = -6;
	volatile uint64_t t37 = UINT64_MAX;

    t37 = (x165|((x166+x167)&x168));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x169 = INT8_MIN;
	int8_t x170 = 0;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = INT16_MIN;
	static int64_t t38 = -103491109513612555LL;

    t38 = (x169|((x170+x171)&x172));

    if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = -1;
	volatile uint8_t x176 = UINT8_MAX;
	int32_t t39 = 35067;

    t39 = (x173|((x174+x175)&x176));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = -1;
	uint8_t x178 = 5U;
	uint16_t x179 = 0U;
	static int32_t x180 = INT32_MIN;
	static volatile int32_t t40 = -4572524;

    t40 = (x177|((x178+x179)&x180));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x186 = -77;
	volatile uint64_t x188 = UINT64_MAX;
	static uint64_t t41 = 166207746844387LLU;

    t41 = (x185|((x186+x187)&x188));

    if (t41 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = 1U;
	uint32_t x190 = UINT32_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile uint32_t t42 = 1673U;

    t42 = (x189|((x190+x191)&x192));

    if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x193 = INT16_MIN;
	volatile uint64_t x194 = 126LLU;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = 54962558U;
	uint64_t t43 = 804798LLU;

    t43 = (x193|((x194+x195)&x196));

    if (t43 != 18446744073709518972LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MAX;
	uint32_t x199 = UINT32_MAX;
	volatile uint32_t x200 = 6406U;
	volatile uint32_t t44 = 12U;

    t44 = (x197|((x198+x199)&x200));

    if (t44 != 6655U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	static volatile int32_t x204 = 631738920;
	int32_t t45 = 14;

    t45 = (x201|((x202+x203)&x204));

    if (t45 != -32728) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = INT32_MAX;
	uint8_t x210 = 37U;
	int8_t x211 = -14;
	uint32_t x212 = 61085U;

    t46 = (x209|((x210+x211)&x212));

    if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = 22;

    t47 = (x213|((x214+x215)&x216));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x218 = -1;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t48 = 63799;

    t48 = (x217|((x218+x219)&x220));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 1U;
	int8_t x223 = -1;
	uint32_t t49 = 288877255U;

    t49 = (x221|((x222+x223)&x224));

    if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	volatile int8_t x227 = -1;
	int32_t x228 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (x225|((x226+x227)&x228));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x229 = -1;
	static int64_t x230 = INT64_MIN;
	volatile uint8_t x231 = 5U;
	int16_t x232 = -3956;
	static int64_t t51 = -1132LL;

    t51 = (x229|((x230+x231)&x232));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

    t52 = (x233|((x234+x235)&x236));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x239 = -392;
	int64_t x240 = 8608902644782872LL;

    t53 = (x237|((x238+x239)&x240));

    if (t53 != 8608905462546431LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x241 = INT16_MAX;
	uint32_t x244 = UINT32_MAX;
	static volatile uint64_t t54 = 210454976016543LLU;

    t54 = (x241|((x242+x243)&x244));

    if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x246 = -1;
	int64_t x247 = -1LL;
	uint64_t x248 = 1282776832325115LLU;
	uint64_t t55 = 495958306647252LLU;

    t55 = (x245|((x246+x247)&x248));

    if (t55 != 1282777882296319LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = INT32_MIN;
	volatile int32_t x251 = -1;
	int64_t x252 = -626LL;
	int64_t t56 = -67935231713427682LL;

    t56 = (x249|((x250+x251)&x252));

    if (t56 != -626LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x253 = -1;
	volatile uint32_t x255 = 6U;
	volatile int8_t x256 = INT8_MIN;
	volatile uint32_t t57 = UINT32_MAX;

    t57 = (x253|((x254+x255)&x256));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x257 = UINT16_MAX;
	static int16_t x258 = 12;
	int16_t x260 = INT16_MAX;
	int32_t t58 = 10514;

    t58 = (x257|((x258+x259)&x260));

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x261 = 26;
	static uint16_t x262 = UINT16_MAX;
	static volatile int64_t x264 = 3928808833304LL;
	static volatile int64_t t59 = 123246786396321649LL;

    t59 = (x261|((x262+x263)&x264));

    if (t59 != 16666LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x265 = 0U;
	uint16_t x267 = 3U;
	int16_t x268 = 1713;

    t60 = (x265|((x266+x267)&x268));

    if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = -972;
	static int32_t x270 = -12626705;
	int16_t x272 = INT16_MAX;
	int32_t t61 = 605268739;

    t61 = (x269|((x270+x271)&x272));

    if (t61 != -713) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x274 = 30U;
	int16_t x276 = -5762;
	volatile int64_t t62 = 340811711567LL;

    t62 = (x273|((x274+x275)&x276));

    if (t62 != 3421LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = -41LL;
	static int16_t x278 = -97;
	static int64_t x279 = 1725425LL;
	static volatile int16_t x280 = INT16_MIN;
	volatile int64_t t63 = -1LL;

    t63 = (x277|((x278+x279)&x280));

    if (t63 != -41LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x282 = -1;
	uint32_t x283 = 2U;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (x281|((x282+x283)&x284));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x289 = 389LLU;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 88U;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t65 = 31031LLU;

    t65 = (x289|((x290+x291)&x292));

    if (t65 != 389LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = 20;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t66 = 277770203;

    t66 = (x293|((x294+x295)&x296));

    if (t66 != 20) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MIN;
	uint32_t x302 = 0U;
	static int64_t x304 = -1LL;
	static int64_t t67 = 8068241LL;

    t67 = (x301|((x302+x303)&x304));

    if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 9091LLU;
	static volatile uint64_t t68 = 12766377152022LLU;

    t68 = (x305|((x306+x307)&x308));

    if (t68 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x309 = UINT16_MAX;
	static volatile int16_t x310 = -1;

    t69 = (x309|((x310+x311)&x312));

    if (t69 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x313 = UINT16_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	int8_t x315 = -1;
	int64_t x316 = 1LL;
	volatile int64_t t70 = 1LL;

    t70 = (x313|((x314+x315)&x316));

    if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x318 = 3U;
	uint32_t x319 = 1107316U;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t71 = -1820680917753625LL;

    t71 = (x317|((x318+x319)&x320));

    if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x322 = 3426;
	uint64_t x323 = UINT64_MAX;
	uint16_t x324 = 76U;
	uint64_t t72 = 162827800LLU;

    t72 = (x321|((x322+x323)&x324));

    if (t72 != 91LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x334 = -74030;
	uint32_t x335 = 48300444U;
	uint32_t t73 = UINT32_MAX;

    t73 = (x333|((x334+x335)&x336));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x337 = 6379U;
	int16_t x338 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t74 = 6;

    t74 = (x337|((x338+x339)&x340));

    if (t74 != 6379) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x341 = 26478674795LLU;
	static uint16_t x342 = 3862U;
	volatile uint8_t x343 = UINT8_MAX;
	volatile uint64_t t75 = 274759487674LLU;

    t75 = (x341|((x342+x343)&x344));

    if (t75 != 26478674799LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x345 = INT8_MAX;
	volatile int16_t x346 = 121;
	int64_t x347 = INT64_MIN;
	static volatile int64_t t76 = -80486963611449LL;

    t76 = (x345|((x346+x347)&x348));

    if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x349 = 511;
	int64_t x351 = 1LL;
	static int32_t x352 = 101960;
	int64_t t77 = 1231090512LL;

    t77 = (x349|((x350+x351)&x352));

    if (t77 != 1535LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = 1;
	static volatile int16_t x354 = INT16_MIN;
	volatile int64_t x356 = 156361363LL;
	static int64_t t78 = -1328250952LL;

    t78 = (x353|((x354+x355)&x356));

    if (t78 != 156336129LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x357 = UINT64_MAX;
	int16_t x358 = 1901;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -2346635905LL;
	uint64_t t79 = UINT64_MAX;

    t79 = (x357|((x358+x359)&x360));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x361 = 470456U;
	static uint32_t x362 = 3413U;
	int64_t x363 = -1024410339LL;
	uint16_t x364 = 7718U;
	int64_t t80 = 8262498LL;

    t80 = (x361|((x362+x363)&x364));

    if (t80 != 470970LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x365 = -1LL;
	int32_t x367 = -2;
	int32_t x368 = -2644;

    t81 = (x365|((x366+x367)&x368));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x373 = INT32_MIN;
	static int64_t x374 = INT64_MIN;
	volatile int64_t x376 = -1LL;
	volatile int64_t t82 = 1109586157825151364LL;

    t82 = (x373|((x374+x375)&x376));

    if (t82 != -2147483646LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x377 = 6U;
	int16_t x378 = -1;
	int64_t x379 = INT64_MAX;
	int8_t x380 = -1;
	volatile int64_t t83 = 1LL;

    t83 = (x377|((x378+x379)&x380));

    if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x382 = 1432629985U;
	int8_t x384 = -1;
	volatile int64_t t84 = 474501189796346175LL;

    t84 = (x381|((x382+x383)&x384));

    if (t84 != 8589934591LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x385 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;
	static uint32_t t85 = 818181629U;

    t85 = (x385|((x386+x387)&x388));

    if (t85 != 4294967168U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x389 = 1;
	uint32_t x390 = 1514354782U;
	static int8_t x391 = -28;

    t86 = (x389|((x390+x391)&x392));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x395 = 202317374737261377LLU;
	uint16_t x396 = 4120U;
	uint64_t t87 = 463LLU;

    t87 = (x393|((x394+x395)&x396));

    if (t87 != 7609LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x400 = INT8_MIN;
	volatile uint64_t t88 = 491746LLU;

    t88 = (x397|((x398+x399)&x400));

    if (t88 != 9231664446979963046LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x401 = 102435256117922LLU;
	int16_t x402 = INT16_MIN;
	int32_t x403 = -186;
	uint64_t t89 = 57055219987121LLU;

    t89 = (x401|((x402+x403)&x404));

    if (t89 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x405 = INT32_MIN;
	uint64_t x406 = 41628540LLU;
	volatile int16_t x408 = -6865;

    t90 = (x405|((x406+x407)&x408));

    if (t90 != 18446744071603691820LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = -1;
	int64_t x419 = 1033952447LL;

    t91 = (x417|((x418+x419)&x420));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x422 = 394U;
	static int64_t x423 = INT64_MIN;
	static int64_t t92 = -273424602120879LL;

    t92 = (x421|((x422+x423)&x424));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = -9;
	int8_t x426 = 1;
	uint64_t x427 = UINT64_MAX;
	static uint64_t t93 = 49862980781LLU;

    t93 = (x425|((x426+x427)&x428));

    if (t93 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x429 = -1063751768540898LL;
	int8_t x430 = INT8_MAX;
	int64_t x432 = INT64_MIN;
	volatile int64_t t94 = -1567580190556718LL;

    t94 = (x429|((x430+x431)&x432));

    if (t94 != -1063751768540898LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x434 = -25920739LL;
	static uint32_t x436 = UINT32_MAX;

    t95 = (x433|((x434+x435)&x436));

    if (t95 != 4269046655LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = INT32_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	uint8_t x440 = 23U;

    t96 = (x437|((x438+x439)&x440));

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x441 = INT8_MAX;
	uint32_t x442 = 2U;
	uint32_t x443 = 30U;
	static int16_t x444 = -1;
	volatile uint32_t t97 = 54U;

    t97 = (x441|((x442+x443)&x444));

    if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x445 = 14632272059587LL;
	static int16_t x446 = INT16_MAX;
	volatile int64_t x447 = -736651740LL;
	int8_t x448 = INT8_MIN;
	int64_t t98 = 1653029114LL;

    t98 = (x445|((x446+x447)&x448));

    if (t98 != -679944509LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x449 = UINT8_MAX;
	uint16_t x451 = 83U;
	uint64_t x452 = 8528455LLU;
	uint64_t t99 = 3374388442053LLU;

    t99 = (x449|((x450+x451)&x452));

    if (t99 != 255LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x453 = INT32_MIN;
	int64_t x454 = -351253536268LL;
	static uint16_t x455 = 45U;
	volatile int64_t x456 = 353LL;

    t100 = (x453|((x454+x455)&x456));

    if (t100 != -2147483615LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x458 = 165510790LLU;
	int8_t x459 = INT8_MIN;
	int16_t x460 = 120;
	uint64_t t101 = 412833388878847263LLU;

    t101 = (x457|((x458+x459)&x460));

    if (t101 != 127LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x461 = 186;
	volatile int64_t x462 = -1LL;
	int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MAX;
	int64_t t102 = -1LL;

    t102 = (x461|((x462+x463)&x464));

    if (t102 != 254LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x465 = INT64_MIN;
	static int16_t x466 = -1;
	static int8_t x467 = -1;
	int16_t x468 = INT16_MIN;
	volatile int64_t t103 = 1978891874LL;

    t103 = (x465|((x466+x467)&x468));

    if (t103 != -32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x469 = 1422;
	volatile uint8_t x470 = UINT8_MAX;
	uint8_t x472 = UINT8_MAX;
	int32_t t104 = -1704602;

    t104 = (x469|((x470+x471)&x472));

    if (t104 != 1534) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x473 = INT16_MIN;
	volatile int32_t x476 = -1;
	static volatile uint64_t t105 = 45023008148182009LLU;

    t105 = (x473|((x474+x475)&x476));

    if (t105 != 18446744073709539892LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x477 = INT64_MAX;
	int16_t x478 = INT16_MIN;
	static int8_t x479 = INT8_MIN;
	uint64_t x480 = UINT64_MAX;
	uint64_t t106 = UINT64_MAX;

    t106 = (x477|((x478+x479)&x480));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x486 = 2;
	volatile int16_t x487 = INT16_MIN;

    t107 = (x485|((x486+x487)&x488));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x491 = INT16_MIN;
	volatile int32_t t108 = 224577;

    t108 = (x489|((x490+x491)&x492));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x493 = -1;
	static uint64_t x494 = 43170LLU;
	int16_t x495 = -1;

    t109 = (x493|((x494+x495)&x496));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = -1;
	volatile uint16_t x499 = 2144U;

    t110 = (x497|((x498+x499)&x500));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x505 = 28229U;
	volatile int16_t x506 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t111 = 0;

    t111 = (x505|((x506+x507)&x508));

    if (t111 != 32709) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x509 = 1126U;
	int16_t x510 = 5067;
	volatile uint16_t x511 = UINT16_MAX;

    t112 = (x509|((x510+x511)&x512));

    if (t112 != 1126LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x513 = -15;
	uint8_t x514 = UINT8_MAX;
	uint16_t x515 = UINT16_MAX;
	volatile uint32_t x516 = 0U;
	static uint32_t t113 = 25219741U;

    t113 = (x513|((x514+x515)&x516));

    if (t113 != 4294967281U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x517 = 101070742062LLU;
	int16_t x518 = 6;
	volatile int16_t x519 = INT16_MAX;
	static int8_t x520 = INT8_MIN;
	uint64_t t114 = 389416119LLU;

    t114 = (x517|((x518+x519)&x520));

    if (t114 != 101070774830LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x522 = UINT64_MAX;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t115 = 1915571768565702LLU;

    t115 = (x521|((x522+x523)&x524));

    if (t115 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = 11;
	uint32_t x530 = UINT32_MAX;
	static volatile int8_t x531 = INT8_MIN;
	static int64_t x532 = 72LL;
	volatile int64_t t116 = 638637131130LL;

    t116 = (x529|((x530+x531)&x532));

    if (t116 != 75LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = 0;
	volatile uint8_t x535 = 122U;
	uint64_t t117 = 30252939LLU;

    t117 = (x533|((x534+x535)&x536));

    if (t117 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int64_t x538 = -1LL;
	uint64_t x539 = 3547319503LLU;
	int8_t x540 = 29;

    t118 = (x537|((x538+x539)&x540));

    if (t118 != 65535LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x541 = INT16_MAX;
	int32_t x542 = 2;
	static uint64_t x543 = 268LLU;
	static int8_t x544 = -1;
	uint64_t t119 = 2172LLU;

    t119 = (x541|((x542+x543)&x544));

    if (t119 != 32767LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	int32_t x546 = INT32_MAX;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	volatile int32_t t120 = INT32_MAX;

    t120 = (x545|((x546+x547)&x548));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x553 = 8U;
	int8_t x554 = -1;
	int8_t x555 = -1;
	int16_t x556 = 7;
	volatile int32_t t121 = 20636;

    t121 = (x553|((x554+x555)&x556));

    if (t121 != 14) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x557 = 9;
	static int64_t x558 = -1LL;
	int16_t x559 = INT16_MIN;
	int16_t x560 = -1;
	static int64_t t122 = -1644674625763374LL;

    t122 = (x557|((x558+x559)&x560));

    if (t122 != -32769LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x561 = UINT8_MAX;
	static volatile int32_t x563 = INT32_MIN;
	volatile int64_t x564 = INT64_MIN;
	volatile int64_t t123 = -1380LL;

    t123 = (x561|((x562+x563)&x564));

    if (t123 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x567 = UINT16_MAX;
	volatile int64_t t124 = 16294064929731314LL;

    t124 = (x565|((x566+x567)&x568));

    if (t124 != -42LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x569 = -342956LL;
	static int8_t x570 = -62;
	int32_t x571 = -14962;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t125 = 3527045263380759LLU;

    t125 = (x569|((x570+x571)&x572));

    if (t125 != 18446744073709536596LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x574 = UINT8_MAX;
	static uint8_t x575 = 2U;
	uint32_t x576 = 66974U;
	static volatile int64_t t126 = INT64_MAX;

    t126 = (x573|((x574+x575)&x576));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x577 = 5U;
	static int8_t x578 = -8;
	uint64_t x579 = 8378980646LLU;
	int64_t x580 = 2274362725298443748LL;
	volatile uint64_t t127 = 82842168LLU;

    t127 = (x577|((x578+x579)&x580));

    if (t127 != 5155655941LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x582 = 50;
	int64_t x583 = -5639851495265324LL;
	volatile int64_t x584 = -202LL;
	int64_t t128 = -1LL;

    t128 = (x581|((x582+x583)&x584));

    if (t128 != -5639851495265274LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x589 = 76240299762001766LLU;
	volatile uint16_t x591 = 0U;

    t129 = (x589|((x590+x591)&x592));

    if (t129 != 76240611198105446LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x593 = 209761019U;
	int16_t x594 = INT16_MAX;
	static int16_t x595 = INT16_MIN;
	int8_t x596 = INT8_MIN;

    t130 = (x593|((x594+x595)&x596));

    if (t130 != 4294967291U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MIN;
	uint32_t x598 = 383529630U;
	volatile int16_t x599 = INT16_MIN;
	int16_t x600 = 7;
	volatile uint32_t t131 = 825681645U;

    t131 = (x597|((x598+x599)&x600));

    if (t131 != 4294934534U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x601 = UINT64_MAX;
	uint64_t x603 = 3675756035LLU;
	volatile uint32_t x604 = UINT32_MAX;

    t132 = (x601|((x602+x603)&x604));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x605 = 6365292832931702850LLU;
	static int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MIN;
	volatile uint64_t t133 = 127676562518LLU;

    t133 = (x605|((x606+x607)&x608));

    if (t133 != 18446744073008834626LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = -1;
	volatile uint8_t x611 = 127U;
	uint16_t x612 = 359U;

    t134 = (x609|((x610+x611)&x612));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = 1736U;
	volatile int64_t x614 = INT64_MIN;
	uint16_t x615 = 1117U;

    t135 = (x613|((x614+x615)&x616));

    if (t135 != 1753LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x618 = UINT16_MAX;
	uint8_t x619 = 0U;
	int8_t x620 = INT8_MIN;
	volatile int32_t t136 = -64006;

    t136 = (x617|((x618+x619)&x620));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x623 = 81455834291LL;
	volatile int8_t x624 = INT8_MAX;
	int64_t t137 = -505332644LL;

    t137 = (x621|((x622+x623)&x624));

    if (t137 != -77LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x625 = INT64_MIN;
	uint32_t x627 = 1240599151U;
	int32_t x628 = 1;
	static volatile int64_t t138 = INT64_MIN;

    t138 = (x625|((x626+x627)&x628));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x630 = INT8_MAX;
	volatile int16_t x632 = -1;

    t139 = (x629|((x630+x631)&x632));

    if (t139 != -2147483521) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x634 = 7663286U;
	int16_t x635 = 1;
	uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t140 = 243058465568LLU;

    t140 = (x633|((x634+x635)&x636));

    if (t140 != 18446744073709547191LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x641 = INT16_MIN;
	volatile int16_t x643 = -1;
	volatile int64_t x644 = INT64_MIN;

    t141 = (x641|((x642+x643)&x644));

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x650 = 1806173296022LLU;
	int8_t x651 = INT8_MAX;
	int16_t x652 = INT16_MIN;

    t142 = (x649|((x650+x651)&x652));

    if (t142 != 1806173274520LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x653 = INT64_MAX;
	volatile uint32_t x654 = 498931U;
	int16_t x655 = -14621;
	static int64_t t143 = INT64_MAX;

    t143 = (x653|((x654+x655)&x656));

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x661 = INT64_MIN;
	volatile uint16_t x662 = 0U;
	volatile uint8_t x663 = UINT8_MAX;
	int64_t t144 = INT64_MIN;

    t144 = (x661|((x662+x663)&x664));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x665 = INT16_MAX;
	static volatile uint16_t x667 = 10988U;
	int8_t x668 = INT8_MIN;
	int32_t t145 = 372;

    t145 = (x665|((x666+x667)&x668));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x669 = -5803293LL;
	int8_t x670 = 0;
	int64_t x671 = -1LL;
	volatile int32_t x672 = INT32_MAX;

    t146 = (x669|((x670+x671)&x672));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x673 = INT32_MIN;
	int8_t x674 = 0;
	uint32_t x675 = 59208803U;
	uint8_t x676 = UINT8_MAX;
	volatile uint32_t t147 = 6855269U;

    t147 = (x673|((x674+x675)&x676));

    if (t147 != 2147483747U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x677 = UINT32_MAX;
	uint16_t x678 = 28U;
	volatile uint64_t x679 = UINT64_MAX;
	volatile uint32_t x680 = 9167714U;
	static volatile uint64_t t148 = 1022LLU;

    t148 = (x677|((x678+x679)&x680));

    if (t148 != 4294967295LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x685 = 2583U;
	int16_t x686 = 10;
	volatile uint32_t x687 = UINT32_MAX;
	static int16_t x688 = INT16_MIN;
	uint32_t t149 = 3777U;

    t149 = (x685|((x686+x687)&x688));

    if (t149 != 2583U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x689 = 324474LLU;
	int64_t x692 = -1LL;

    t150 = (x689|((x690+x691)&x692));

    if (t150 != 324474LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x693 = INT64_MIN;
	int8_t x694 = -20;
	volatile int8_t x695 = 0;
	int16_t x696 = -116;
	int64_t t151 = 17819400403LL;

    t151 = (x693|((x694+x695)&x696));

    if (t151 != -116LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x699 = UINT8_MAX;
	uint16_t x700 = 5U;
	int32_t t152 = -993;

    t152 = (x697|((x698+x699)&x700));

    if (t152 != -123) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x702 = INT64_MAX;
	int32_t x703 = INT32_MIN;
	int16_t x704 = 0;
	volatile int64_t t153 = -33295748LL;

    t153 = (x701|((x702+x703)&x704));

    if (t153 != 255LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x709 = INT32_MIN;
	int64_t x710 = 1182481745055LL;
	int32_t x711 = INT32_MIN;
	uint32_t x712 = UINT32_MAX;
	static volatile int64_t t154 = 17077615295271LL;

    t154 = (x709|((x710+x711)&x712));

    if (t154 != -781744993LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x713 = 171;
	volatile uint8_t x714 = 27U;
	static volatile int8_t x715 = 6;
	volatile uint8_t x716 = UINT8_MAX;
	static volatile int32_t t155 = -54792;

    t155 = (x713|((x714+x715)&x716));

    if (t155 != 171) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x718 = -562539753LL;
	int64_t x719 = -1LL;
	volatile int8_t x720 = -7;
	int64_t t156 = 73313985842LL;

    t156 = (x717|((x718+x719)&x720));

    if (t156 != -562539760LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x721 = 527849193654886LLU;
	static uint64_t x722 = 1011442272223LLU;
	int64_t x724 = INT64_MAX;
	static uint64_t t157 = 3516049169LLU;

    t157 = (x721|((x722+x723)&x724));

    if (t157 != 528845760285438LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x725 = 2U;
	int32_t x727 = -6492765;
	int32_t x728 = INT32_MAX;
	volatile int64_t t158 = -64396358302502533LL;

    t158 = (x725|((x726+x727)&x728));

    if (t158 != 2140990882LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x729 = INT16_MIN;
	static int8_t x730 = -1;
	uint64_t x731 = 5278682274890465LLU;
	static uint8_t x732 = 16U;
	uint64_t t159 = 44LLU;

    t159 = (x729|((x730+x731)&x732));

    if (t159 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x733 = -1625;
	volatile uint8_t x735 = 43U;
	uint32_t x736 = 6U;

    t160 = (x733|((x734+x735)&x736));

    if (t160 != 18446744073709549991LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x737 = 30818302;
	uint32_t x738 = UINT32_MAX;
	volatile int8_t x739 = -49;
	int16_t x740 = -1;
	volatile uint32_t t161 = 986712929U;

    t161 = (x737|((x738+x739)&x740));

    if (t161 != 4294967294U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x741 = 76347LLU;
	volatile int64_t x742 = -1LL;
	int32_t x743 = INT32_MIN;
	int64_t x744 = -48656629696LL;
	static volatile uint64_t t162 = 37152899LLU;

    t162 = (x741|((x742+x743)&x744));

    if (t162 != 18446744022905514619LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	int16_t x747 = -178;
	int64_t x748 = INT64_MAX;
	volatile int64_t t163 = -450405964437042570LL;

    t163 = (x745|((x746+x747)&x748));

    if (t163 != -50LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x757 = INT32_MIN;
	uint64_t x758 = 0LLU;
	int32_t x759 = -4;
	volatile int16_t x760 = 265;
	volatile uint64_t t164 = 6016595LLU;

    t164 = (x757|((x758+x759)&x760));

    if (t164 != 18446744071562068232LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x761 = INT16_MIN;
	uint32_t x762 = UINT32_MAX;
	uint8_t x763 = UINT8_MAX;
	uint16_t x764 = 29138U;
	static uint32_t t165 = 1232224260U;

    t165 = (x761|((x762+x763)&x764));

    if (t165 != 4294934738U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x765 = 29702877U;
	static int64_t x768 = INT64_MAX;
	static volatile int64_t t166 = -106653971999LL;

    t166 = (x765|((x766+x767)&x768));

    if (t166 != 4294967295LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x769 = 2018926963983LL;
	int8_t x770 = -1;
	int16_t x772 = -1;
	volatile int64_t t167 = 42531737145LL;

    t167 = (x769|((x770+x771)&x772));

    if (t167 != 2018926964063LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = INT32_MAX;
	volatile int64_t t168 = 18453836977LL;

    t168 = (x773|((x774+x775)&x776));

    if (t168 != 2147483647LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x779 = 32856602LL;
	int32_t x780 = 12147;
	uint64_t t169 = 2769468870LLU;

    t169 = (x777|((x778+x779)&x780));

    if (t169 != 254167929LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x781 = INT16_MAX;
	int32_t x782 = 131278111;
	static int64_t x783 = -1954129442LL;
	int64_t t170 = -794294LL;

    t170 = (x781|((x782+x783)&x784));

    if (t170 != -1822851073LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x785 = 24U;
	int32_t x786 = -1;
	int64_t x788 = -1LL;
	static int64_t t171 = -1560692830859416LL;

    t171 = (x785|((x786+x787)&x788));

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x793 = -1LL;
	static uint16_t x794 = 0U;
	int16_t x795 = INT16_MAX;
	int16_t x796 = INT16_MAX;
	volatile int64_t t172 = 3045757567620023035LL;

    t172 = (x793|((x794+x795)&x796));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x797 = 0;
	int32_t x798 = INT32_MAX;
	volatile int64_t x800 = INT64_MIN;
	volatile uint64_t t173 = 23663729245LLU;

    t173 = (x797|((x798+x799)&x800));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x802 = 121U;
	volatile uint16_t x803 = 11U;
	volatile int32_t t174 = 190579705;

    t174 = (x801|((x802+x803)&x804));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x805 = -86748032215045LL;
	int64_t x806 = -1LL;
	uint32_t x807 = UINT32_MAX;
	volatile int64_t x808 = -27315LL;
	int64_t t175 = -220LL;

    t175 = (x805|((x806+x807)&x808));

    if (t175 != -86745454487553LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x809 = UINT8_MAX;
	int32_t x810 = -1;
	static uint64_t x811 = UINT64_MAX;
	int64_t x812 = -1516410817342536LL;
	uint64_t t176 = 1907LLU;

    t176 = (x809|((x810+x811)&x812));

    if (t176 != 18445227662892209151LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x817 = INT8_MAX;
	static volatile int64_t x818 = 224064552712243666LL;
	uint32_t x820 = UINT32_MAX;
	volatile int64_t t177 = 27126LL;

    t177 = (x817|((x818+x819)&x820));

    if (t177 != 447769471LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x821 = INT8_MIN;
	uint32_t x822 = 1U;
	uint32_t x824 = 8U;

    t178 = (x821|((x822+x823)&x824));

    if (t178 != 4294967168U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x827 = -1;
	int32_t x828 = -1091328;
	static uint32_t t179 = 636U;

    t179 = (x825|((x826+x827)&x828));

    if (t179 != 4293876218U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x829 = 0LLU;
	uint64_t x830 = UINT64_MAX;
	static uint64_t t180 = 155381LLU;

    t180 = (x829|((x830+x831)&x832));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x833 = -1;
	static int32_t x834 = 30;
	uint8_t x835 = 3U;
	volatile int8_t x836 = -1;
	int32_t t181 = -1111540;

    t181 = (x833|((x834+x835)&x836));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x842 = 7U;
	uint32_t x843 = 6283970U;
	static uint16_t x844 = 2720U;
	int64_t t182 = 1333988LL;

    t182 = (x841|((x842+x843)&x844));

    if (t182 != -9223372036854775168LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x845 = 1332LLU;
	int32_t x848 = INT32_MIN;
	volatile uint64_t t183 = 15971717465972762LLU;

    t183 = (x845|((x846+x847)&x848));

    if (t183 != 2147484980LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x849 = INT32_MAX;
	static uint8_t x850 = 1U;
	uint32_t x852 = 295499212U;

    t184 = (x849|((x850+x851)&x852));

    if (t184 != 2147483647LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x854 = INT16_MAX;
	int64_t x855 = INT64_MIN;
	int8_t x856 = INT8_MIN;

    t185 = (x853|((x854+x855)&x856));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x859 = 4246U;
	static volatile uint16_t x860 = UINT16_MAX;
	uint64_t t186 = 7926LLU;

    t186 = (x857|((x858+x859)&x860));

    if (t186 != 65535LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x861 = INT8_MAX;
	int16_t x862 = INT16_MIN;
	int16_t x863 = INT16_MAX;
	int32_t t187 = -229339329;

    t187 = (x861|((x862+x863)&x864));

    if (t187 != 511) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x865 = INT64_MIN;
	int8_t x866 = 54;
	int16_t x867 = INT16_MAX;
	volatile int64_t x868 = 157LL;
	int64_t t188 = 4877LL;

    t188 = (x865|((x866+x867)&x868));

    if (t188 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x869 = -13944;
	volatile int8_t x870 = INT8_MIN;
	uint8_t x871 = 91U;
	volatile int32_t x872 = INT32_MAX;

    t189 = (x869|((x870+x871)&x872));

    if (t189 != -37) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x873 = UINT64_MAX;
	int8_t x874 = INT8_MIN;
	volatile int16_t x875 = INT16_MIN;
	int8_t x876 = INT8_MIN;
	static volatile uint64_t t190 = UINT64_MAX;

    t190 = (x873|((x874+x875)&x876));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x877 = INT16_MAX;
	volatile int8_t x878 = INT8_MIN;
	uint8_t x879 = 5U;
	int16_t x880 = INT16_MIN;
	int32_t t191 = 73280;

    t191 = (x877|((x878+x879)&x880));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x881 = -394990;
	volatile uint8_t x882 = UINT8_MAX;
	int64_t x883 = 175420007LL;
	volatile int64_t x884 = INT64_MIN;
	static volatile int64_t t192 = -285672690590094923LL;

    t192 = (x881|((x882+x883)&x884));

    if (t192 != -394990LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x885 = 51U;
	static volatile int8_t x886 = -1;
	int16_t x887 = INT16_MIN;
	int32_t x888 = 135861829;
	volatile int32_t t193 = 451;

    t193 = (x885|((x886+x887)&x888));

    if (t193 != 135861879) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x890 = UINT16_MAX;
	int32_t x891 = -1;
	int64_t x892 = INT64_MIN;
	static volatile uint64_t t194 = UINT64_MAX;

    t194 = (x889|((x890+x891)&x892));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x897 = UINT16_MAX;
	volatile int32_t x898 = INT32_MIN;
	uint32_t x899 = UINT32_MAX;
	int32_t x900 = INT32_MAX;
	volatile uint32_t t195 = 2013U;

    t195 = (x897|((x898+x899)&x900));

    if (t195 != 2147483647U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x901 = INT8_MIN;
	int16_t x902 = -242;
	int32_t x903 = INT32_MAX;
	static int8_t x904 = INT8_MAX;
	volatile int32_t t196 = 0;

    t196 = (x901|((x902+x903)&x904));

    if (t196 != -115) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x905 = 1U;
	int32_t x908 = -191426;
	static volatile uint32_t t197 = 366330U;

    t197 = (x905|((x906+x907)&x908));

    if (t197 != 5183U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x909 = -24;
	int32_t x910 = -1;
	static uint8_t x911 = 0U;
	int8_t x912 = INT8_MIN;

    t198 = (x909|((x910+x911)&x912));

    if (t198 != -24) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x914 = -7LL;
	uint32_t x915 = 7U;
	int64_t x916 = -1349715837513882096LL;
	volatile int64_t t199 = 6960633376040723LL;

    t199 = (x913|((x914+x915)&x916));

    if (t199 != 2LL) { NG(); } else { ; }
	
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

