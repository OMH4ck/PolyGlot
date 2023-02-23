
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

static int32_t x8 = 189;
volatile int64_t t2 = 987018319LL;
int8_t x18 = INT8_MAX;
int16_t x22 = INT16_MAX;
uint16_t x27 = UINT16_MAX;
volatile int64_t x32 = INT64_MAX;
int32_t x45 = INT32_MAX;
int32_t x47 = INT32_MIN;
uint64_t x51 = 253LLU;
int8_t x54 = 39;
uint32_t t13 = 6573339U;
static uint8_t x58 = 31U;
int16_t x62 = 1381;
static uint8_t x63 = 40U;
uint32_t x67 = 854U;
int32_t x68 = -333008201;
volatile int32_t t16 = 188060;
static uint64_t x71 = UINT64_MAX;
static int32_t t20 = -7025;
int16_t x85 = INT16_MAX;
static uint8_t x86 = 4U;
static int32_t x87 = 444394907;
int16_t x89 = -1;
volatile int64_t x90 = -97366LL;
uint64_t x93 = UINT64_MAX;
static uint32_t x100 = 45131U;
volatile int32_t x104 = -3334405;
int16_t x106 = -46;
uint16_t x107 = 8558U;
int8_t x115 = INT8_MIN;
int64_t x116 = -1LL;
static volatile uint8_t x124 = 1U;
int64_t x126 = INT64_MIN;
uint64_t x127 = 115283LLU;
int32_t t31 = -2225557;
int16_t x130 = INT16_MIN;
int32_t x136 = INT32_MIN;
static uint32_t t33 = 1U;
static uint64_t x140 = UINT64_MAX;
uint8_t x141 = 38U;
int8_t x147 = INT8_MAX;
int32_t t36 = -157593;
int32_t x159 = INT32_MIN;
int64_t t37 = 182LL;
volatile int32_t t42 = -33;
static int32_t x181 = 144;
uint64_t x182 = 5547LLU;
int32_t x187 = -1;
int16_t x192 = 5;
volatile uint32_t t45 = 1499U;
uint64_t x194 = 128507947883878LLU;
int8_t x199 = 2;
static volatile int64_t t47 = -103LL;
static volatile int64_t x206 = INT64_MAX;
uint8_t x210 = 53U;
int32_t t51 = -29;
int64_t x217 = INT64_MIN;
static int64_t t52 = 304001041200954809LL;
static int16_t x221 = -1;
static int32_t x229 = -1;
static int64_t t57 = -363891678LL;
int16_t x243 = INT16_MAX;
int16_t x247 = -4;
static volatile int32_t x251 = 8031393;
static int32_t x252 = -1;
static int64_t x255 = INT64_MAX;
uint32_t x256 = 400152U;
int64_t x257 = 486386240752774058LL;
uint8_t x259 = 5U;
int64_t x264 = INT64_MAX;
int64_t t63 = 53228092078671229LL;
int16_t x269 = INT16_MIN;
int8_t x270 = INT8_MIN;
int8_t x277 = INT8_MIN;
int64_t x279 = INT64_MIN;
volatile uint64_t t70 = 378500561085773LLU;
int32_t x297 = INT32_MIN;
volatile int32_t x300 = -2;
static int8_t x301 = INT8_MAX;
static uint8_t x302 = 0U;
static volatile uint64_t t73 = 2867025862876303439LLU;
int16_t x307 = INT16_MIN;
volatile int32_t x318 = INT32_MAX;
uint16_t x319 = UINT16_MAX;
int32_t x321 = -1;
int64_t x331 = -345203014268421731LL;
int32_t x334 = INT32_MIN;
static volatile int32_t t80 = 13611;
uint8_t x339 = UINT8_MAX;
uint16_t x340 = 1606U;
volatile int64_t x345 = INT64_MIN;
volatile uint32_t x348 = 79919U;
static volatile int32_t x349 = 948;
int64_t x350 = INT64_MIN;
int64_t x351 = -1LL;
static int16_t x354 = INT16_MIN;
static volatile uint8_t x358 = 31U;
static volatile int64_t x366 = INT64_MIN;
volatile int32_t x367 = INT32_MIN;
static volatile int8_t x371 = INT8_MIN;
uint64_t x372 = 252450717450LLU;
static uint16_t x376 = 83U;
uint64_t x385 = UINT64_MAX;
int16_t x388 = -4976;
uint8_t x389 = 15U;
uint8_t x390 = 14U;
int32_t x397 = -1;
static volatile int32_t x398 = 19433190;
int8_t x399 = INT8_MAX;
uint32_t x400 = 235008U;
volatile int8_t x405 = INT8_MIN;
volatile uint16_t x406 = 10U;
static int16_t x416 = -1;
int64_t x418 = -1266358LL;
volatile uint8_t x429 = UINT8_MAX;
static volatile int8_t x432 = -43;
int8_t x433 = -1;
volatile int32_t t104 = 5;
volatile int16_t x439 = INT16_MAX;
int64_t t106 = -2134828813LL;
uint8_t x458 = UINT8_MAX;
volatile int64_t t110 = -152278019805938173LL;
volatile int64_t x466 = 0LL;
uint8_t x467 = UINT8_MAX;
volatile uint16_t x471 = 0U;
static uint64_t x474 = UINT64_MAX;
volatile uint64_t t114 = 197336867336LLU;
static int32_t x482 = INT32_MIN;
volatile int8_t x488 = INT8_MIN;
volatile int64_t t116 = 36237577LL;
volatile uint16_t x492 = UINT16_MAX;
int32_t t117 = 120371050;
volatile int64_t x503 = INT64_MIN;
int64_t x512 = INT64_MIN;
int8_t x513 = INT8_MIN;
int8_t x515 = INT8_MAX;
static volatile int32_t t123 = -1775786;
int16_t x530 = -395;
uint64_t x532 = 172291516LLU;
int16_t x533 = -1;
uint8_t x535 = 28U;
static int64_t x538 = -18025567426712536LL;
int32_t t128 = -6;
int32_t x542 = -1;
uint8_t x549 = UINT8_MAX;
int64_t x550 = 87473419LL;
static volatile int8_t x551 = -44;
uint16_t x553 = 20564U;
int16_t x558 = -110;
static int8_t x562 = -1;
int16_t x564 = 20;
volatile int32_t x576 = -1;
uint32_t t138 = 11836622U;
static uint16_t x583 = 77U;
volatile int8_t x585 = 3;
int16_t x588 = INT16_MAX;
volatile int32_t t140 = 35635029;
int16_t x591 = INT16_MAX;
int64_t x593 = 823206870821LL;
uint8_t x610 = UINT8_MAX;
static volatile uint64_t x615 = 3721466424145LLU;
int8_t x619 = INT8_MIN;
int16_t x628 = 14162;
uint64_t t152 = 4065LLU;
static int64_t x643 = -1LL;
int32_t x651 = INT32_MIN;
int32_t t158 = 561;
volatile uint16_t x663 = 13U;
volatile int8_t x664 = -4;
int32_t x666 = -158;
int8_t x676 = 11;
static uint64_t t162 = 546183LLU;
static int32_t x678 = INT32_MIN;
int32_t x685 = INT32_MIN;
int32_t t165 = -4148488;
int32_t x689 = INT32_MAX;
int16_t x694 = 8;
volatile int32_t t167 = -150734;
volatile int64_t x700 = INT64_MAX;
uint16_t x701 = 21U;
static int64_t x703 = INT64_MIN;
int32_t x713 = INT32_MAX;
static int32_t x716 = -1;
volatile int32_t t172 = INT32_MAX;
int8_t x717 = INT8_MIN;
int64_t x720 = INT64_MIN;
static int32_t x728 = -1;
uint64_t x733 = UINT64_MAX;
uint16_t x743 = 315U;
static int32_t t179 = 3;
static int32_t x746 = INT32_MIN;
int32_t x750 = INT32_MAX;
volatile int64_t t182 = 2679573203725974LL;
uint64_t x757 = 31740294LLU;
int32_t x761 = INT32_MAX;
volatile uint64_t t184 = 101040931585824618LLU;
int32_t t186 = 1068681;
int16_t x776 = INT16_MIN;
volatile uint16_t x785 = UINT16_MAX;
volatile int32_t x792 = INT32_MAX;
static int32_t t191 = -1077046;
volatile int8_t x797 = -1;
static int64_t x802 = -1LL;
int16_t x807 = INT16_MAX;
static int64_t x808 = -23718LL;
int64_t t195 = -1LL;
int16_t x810 = -1;
static int16_t x814 = INT16_MIN;
uint32_t x820 = UINT32_MAX;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static int32_t x2 = 110275364;
	volatile int64_t x3 = INT64_MIN;
	uint8_t x4 = 19U;
	volatile uint64_t t0 = 135452057359516240LLU;

    t0 = (x1^((x2!=x3)%x4));

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 23548397470LLU;
	int64_t x6 = INT64_MAX;
	int32_t x7 = -51379414;
	static volatile uint64_t t1 = 14602186LLU;

    t1 = (x5^((x6!=x7)%x8));

    if (t1 != 23548397471LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -27850LL;
	static int16_t x10 = -2071;
	int32_t x11 = -1;
	int32_t x12 = INT32_MIN;

    t2 = (x9^((x10!=x11)%x12));

    if (t2 != -27849LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 6;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = -255926671;
	volatile int16_t x16 = -1;
	volatile int32_t t3 = -3551803;

    t3 = (x13^((x14!=x15)%x16));

    if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 0U;
	static uint16_t x19 = 2018U;
	uint8_t x20 = 19U;
	volatile uint32_t t4 = 81361U;

    t4 = (x17^((x18!=x19)%x20));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 28U;
	int64_t x23 = INT64_MAX;
	uint32_t x24 = UINT32_MAX;
	uint32_t t5 = 545042U;

    t5 = (x21^((x22!=x23)%x24));

    if (t5 != 29U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 1954899538157LLU;
	int64_t x26 = -1LL;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 74059508LLU;

    t6 = (x25^((x26!=x27)%x28));

    if (t6 != 1954899538156LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 24;
	int32_t x30 = INT32_MAX;
	static volatile uint32_t x31 = 63041U;
	int64_t t7 = 1171LL;

    t7 = (x29^((x30!=x31)%x32));

    if (t7 != 25LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 1;

    t8 = (x33^((x34!=x35)%x36));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 167541LL;
	uint32_t x38 = UINT32_MAX;
	uint8_t x39 = 75U;
	uint32_t x40 = 2076006155U;
	volatile int64_t t9 = -792112184043430350LL;

    t9 = (x37^((x38!=x39)%x40));

    if (t9 != 167540LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	int16_t x42 = 0;
	volatile int8_t x43 = INT8_MAX;
	int64_t x44 = -4085086181903770LL;
	volatile int64_t t10 = 0LL;

    t10 = (x41^((x42!=x43)%x44));

    if (t10 != -127LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 6842030496LLU;
	int32_t x48 = 1186574;
	volatile int32_t t11 = -118;

    t11 = (x45^((x46!=x47)%x48));

    if (t11 != 2147483646) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 20U;
	int32_t x50 = -251549788;
	uint32_t x52 = UINT32_MAX;
	uint32_t t12 = 378277U;

    t12 = (x49^((x50!=x51)%x52));

    if (t12 != 21U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 1012958U;
	int8_t x55 = 0;
	uint16_t x56 = 23033U;

    t13 = (x53^((x54!=x55)%x56));

    if (t13 != 1012959U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x59 = INT32_MAX;
	int32_t x60 = 25277;
	int64_t t14 = -99516244566168LL;

    t14 = (x57^((x58!=x59)%x60));

    if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -5;
	static int32_t x64 = 45514604;
	volatile int32_t t15 = -111698500;

    t15 = (x61^((x62!=x63)%x64));

    if (t15 != -6) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 2U;
	volatile uint64_t x66 = 3613227558853LLU;

    t16 = (x65^((x66!=x67)%x68));

    if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 199692LLU;
	volatile int16_t x70 = 1;
	static int16_t x72 = INT16_MIN;
	uint64_t t17 = 1655907421472922862LLU;

    t17 = (x69^((x70!=x71)%x72));

    if (t17 != 199693LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 1482;
	static int64_t x74 = -1LL;
	volatile int8_t x75 = -16;
	uint64_t x76 = 36898135215302231LLU;
	volatile uint64_t t18 = 115LLU;

    t18 = (x73^((x74!=x75)%x76));

    if (t18 != 1483LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -4;
	uint32_t x78 = UINT32_MAX;
	static int64_t x79 = -1LL;
	int16_t x80 = -1;
	int32_t t19 = 1304655;

    t19 = (x77^((x78!=x79)%x80));

    if (t19 != -4) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -29;
	volatile int8_t x82 = INT8_MAX;
	static int16_t x83 = INT16_MIN;
	int8_t x84 = -9;

    t20 = (x81^((x82!=x83)%x84));

    if (t20 != -30) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x88 = 135850664797LLU;
	uint64_t t21 = 369884LLU;

    t21 = (x85^((x86!=x87)%x88));

    if (t21 != 32766LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x91 = -168;
	uint32_t x92 = 20210081U;
	volatile uint32_t t22 = 3U;

    t22 = (x89^((x90!=x91)%x92));

    if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 399U;
	int32_t x95 = INT32_MIN;
	int16_t x96 = -383;
	volatile uint64_t t23 = 1393486160LLU;

    t23 = (x93^((x94!=x95)%x96));

    if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = 33U;
	volatile int32_t x98 = 121;
	int8_t x99 = INT8_MAX;
	uint32_t t24 = 2436U;

    t24 = (x97^((x98!=x99)%x100));

    if (t24 != 32U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile int8_t x102 = INT8_MIN;
	static int64_t x103 = -1LL;
	static uint32_t t25 = 479505U;

    t25 = (x101^((x102!=x103)%x104));

    if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	volatile int32_t x108 = -3985;
	int32_t t26 = -12;

    t26 = (x105^((x106!=x107)%x108));

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x109 = INT16_MAX;
	volatile int64_t x110 = -1LL;
	uint64_t x111 = 532099LLU;
	uint16_t x112 = 29U;
	int32_t t27 = -869539002;

    t27 = (x109^((x110!=x111)%x112));

    if (t27 != 32766) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	volatile uint64_t x114 = 238LLU;
	int64_t t28 = -95786LL;

    t28 = (x113^((x114!=x115)%x116));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -118;
	int64_t x118 = 22759LL;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = INT64_MAX;
	volatile int64_t t29 = 62784795967LL;

    t29 = (x117^((x118!=x119)%x120));

    if (t29 != -117LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	int32_t t30 = INT32_MIN;

    t30 = (x121^((x122!=x123)%x124));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 11230843;
	int8_t x128 = INT8_MIN;

    t31 = (x125^((x126!=x127)%x128));

    if (t31 != 11230842) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -176472871;
	volatile int8_t x131 = -1;
	int64_t x132 = INT64_MAX;
	int64_t t32 = 55036124270LL;

    t32 = (x129^((x130!=x131)%x132));

    if (t32 != -176472872LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	static volatile uint16_t x134 = 101U;
	static uint64_t x135 = 19256998543527412LLU;

    t33 = (x133^((x134!=x135)%x136));

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MAX;
	volatile int64_t x139 = 319163405LL;
	volatile uint64_t t34 = 8590835817087LLU;

    t34 = (x137^((x138!=x139)%x140));

    if (t34 != 65534LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = -1LL;
	volatile int64_t x143 = -128485986946570LL;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -56;

    t35 = (x141^((x142!=x143)%x144));

    if (t35 != 39) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	static uint16_t x146 = 12U;
	int8_t x148 = 38;

    t36 = (x145^((x146!=x147)%x148));

    if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = -5;
	static int16_t x158 = INT16_MAX;
	volatile int64_t x160 = -1319206354783861238LL;

    t37 = (x157^((x158!=x159)%x160));

    if (t37 != -6LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = 2829;
	int16_t x162 = INT16_MIN;
	static volatile int8_t x163 = 0;
	static uint8_t x164 = 57U;
	static int32_t t38 = -150;

    t38 = (x161^((x162!=x163)%x164));

    if (t38 != 2828) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x165 = 405U;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	static volatile int32_t t39 = 304892784;

    t39 = (x165^((x166!=x167)%x168));

    if (t39 != 405) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x169 = 10;
	static int32_t x170 = INT32_MIN;
	uint32_t x171 = 3U;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t40 = 3553855150115431LL;

    t40 = (x169^((x170!=x171)%x172));

    if (t40 != 11LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x173 = INT64_MAX;
	static int16_t x174 = -1526;
	uint32_t x175 = 3578U;
	int64_t x176 = INT64_MIN;
	int64_t t41 = 727133LL;

    t41 = (x173^((x174!=x175)%x176));

    if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MAX;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -1LL;
	uint8_t x180 = 7U;

    t42 = (x177^((x178!=x179)%x180));

    if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x183 = -1213;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t43 = -84;

    t43 = (x181^((x182!=x183)%x184));

    if (t43 != 145) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 1179008775LLU;
	int8_t x188 = INT8_MIN;
	uint32_t t44 = 30267U;

    t44 = (x185^((x186!=x187)%x188));

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 248468708U;
	uint8_t x190 = 0U;
	int8_t x191 = INT8_MAX;

    t45 = (x189^((x190!=x191)%x192));

    if (t45 != 248468709U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 9;
	int16_t x195 = 251;
	static int16_t x196 = INT16_MIN;
	static volatile int32_t t46 = 6783224;

    t46 = (x193^((x194!=x195)%x196));

    if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	uint32_t x198 = 474457U;
	static int64_t x200 = 1036LL;

    t47 = (x197^((x198!=x199)%x200));

    if (t47 != 254LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x201 = 38U;
	int32_t x202 = INT32_MIN;
	volatile int32_t x203 = -1;
	static int16_t x204 = INT16_MAX;
	uint32_t t48 = 983529087U;

    t48 = (x201^((x202!=x203)%x204));

    if (t48 != 39U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 8252771U;
	static int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MAX;
	uint32_t t49 = 72396U;

    t49 = (x205^((x206!=x207)%x208));

    if (t49 != 8252770U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = 202840166260LL;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MAX;
	int64_t t50 = 46509879LL;

    t50 = (x209^((x210!=x211)%x212));

    if (t50 != 202840166261LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -5;
	int32_t x214 = -1808287;
	int32_t x215 = 119394018;
	static volatile uint16_t x216 = 13U;

    t51 = (x213^((x214!=x215)%x216));

    if (t51 != -6) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x218 = INT32_MIN;
	volatile uint8_t x219 = 11U;
	volatile int16_t x220 = INT16_MIN;

    t52 = (x217^((x218!=x219)%x220));

    if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x222 = INT8_MAX;
	int64_t x223 = INT64_MAX;
	int8_t x224 = -1;
	volatile int32_t t53 = 0;

    t53 = (x221^((x222!=x223)%x224));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = 45402304LLU;
	volatile int64_t x227 = INT64_MIN;
	uint32_t x228 = 1U;
	volatile uint32_t t54 = 6144U;

    t54 = (x225^((x226!=x227)%x228));

    if (t54 != 255U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x230 = -8073585821819LL;
	static uint64_t x231 = UINT64_MAX;
	volatile int64_t x232 = INT64_MIN;
	static int64_t t55 = 954948242347827707LL;

    t55 = (x229^((x230!=x231)%x232));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MAX;
	int32_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	uint16_t x236 = 448U;
	static int32_t t56 = 150686;

    t56 = (x233^((x234!=x235)%x236));

    if (t56 != 32766) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x237 = 15380LL;
	uint32_t x238 = 1669899006U;
	static uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MIN;

    t57 = (x237^((x238!=x239)%x240));

    if (t57 != 15381LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x241 = INT8_MAX;
	static int64_t x242 = -1LL;
	int64_t x244 = -1LL;
	int64_t t58 = 1971256610907292499LL;

    t58 = (x241^((x242!=x243)%x244));

    if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = 23107U;
	int64_t x246 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;
	uint32_t t59 = 1355U;

    t59 = (x245^((x246!=x247)%x248));

    if (t59 != 23106U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x249 = 43U;
	uint64_t x250 = 160334832519510LLU;
	volatile int32_t t60 = -707240;

    t60 = (x249^((x250!=x251)%x252));

    if (t60 != 43) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x253 = -106;
	int64_t x254 = 29979397478133137LL;
	volatile uint32_t t61 = 2211418U;

    t61 = (x253^((x254!=x255)%x256));

    if (t61 != 4294967191U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x258 = 33;
	int64_t x260 = -31860LL;
	static int64_t t62 = -98003349543789279LL;

    t62 = (x257^((x258!=x259)%x260));

    if (t62 != 486386240752774059LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x261 = 12444U;
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MIN;

    t63 = (x261^((x262!=x263)%x264));

    if (t63 != 12445LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x265 = 34908;
	int32_t x266 = INT32_MIN;
	volatile uint64_t x267 = 3LLU;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t64 = 107852LLU;

    t64 = (x265^((x266!=x267)%x268));

    if (t64 != 34909LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x271 = 47U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = -2245533;

    t65 = (x269^((x270!=x271)%x272));

    if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = INT8_MIN;
	static uint8_t x274 = UINT8_MAX;
	uint8_t x275 = 11U;
	uint8_t x276 = 16U;
	volatile int32_t t66 = -4266139;

    t66 = (x273^((x274!=x275)%x276));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x278 = -1;
	int8_t x280 = 11;
	volatile int32_t t67 = 0;

    t67 = (x277^((x278!=x279)%x280));

    if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x283 = -6030839;
	int8_t x284 = INT8_MIN;
	volatile int32_t t68 = 328;

    t68 = (x281^((x282!=x283)%x284));

    if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x285 = -1LL;
	volatile int16_t x286 = 34;
	uint16_t x287 = 29U;
	int32_t x288 = -3937110;
	volatile int64_t t69 = -35456681158679339LL;

    t69 = (x285^((x286!=x287)%x288));

    if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x289 = UINT64_MAX;
	uint64_t x290 = 7546LLU;
	uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 56U;

    t70 = (x289^((x290!=x291)%x292));

    if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = -860561578117420719LL;
	uint32_t x294 = 800312981U;
	int8_t x295 = 0;
	int64_t x296 = -1LL;
	volatile int64_t t71 = 13848080775647118LL;

    t71 = (x293^((x294!=x295)%x296));

    if (t71 != -860561578117420719LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x298 = -1;
	static uint16_t x299 = 6264U;
	volatile int32_t t72 = 1;

    t72 = (x297^((x298!=x299)%x300));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x303 = 1U;
	uint64_t x304 = 849784LLU;

    t73 = (x301^((x302!=x303)%x304));

    if (t73 != 126LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	static volatile uint16_t x308 = 10047U;
	volatile int32_t t74 = -185;

    t74 = (x305^((x306!=x307)%x308));

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = 6849560LL;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = -118736927225LL;
	int64_t t75 = 12554LL;

    t75 = (x313^((x314!=x315)%x316));

    if (t75 != 6849561LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = INT8_MAX;
	uint64_t x320 = 1927LLU;
	volatile uint64_t t76 = 17631433917363528LLU;

    t76 = (x317^((x318!=x319)%x320));

    if (t76 != 126LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x322 = 322728026;
	static int16_t x323 = 126;
	volatile int64_t x324 = -198966883305430796LL;
	volatile int64_t t77 = 1801919LL;

    t77 = (x321^((x322!=x323)%x324));

    if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x325 = -1019LL;
	int64_t x326 = INT64_MIN;
	static volatile uint16_t x327 = 0U;
	volatile int8_t x328 = INT8_MIN;
	int64_t t78 = 309921178195LL;

    t78 = (x325^((x326!=x327)%x328));

    if (t78 != -1020LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x329 = 0U;
	int8_t x330 = -1;
	int32_t x332 = 994527535;
	static volatile int32_t t79 = -116;

    t79 = (x329^((x330!=x331)%x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = INT16_MIN;
	int64_t x335 = -136962457948854LL;
	int16_t x336 = 2054;

    t80 = (x333^((x334!=x335)%x336));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = 4720;
	uint32_t x338 = UINT32_MAX;
	int32_t t81 = 1;

    t81 = (x337^((x338!=x339)%x340));

    if (t81 != 4721) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = -30125;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = 5U;
	int64_t x344 = INT64_MAX;
	volatile int64_t t82 = -396541245LL;

    t82 = (x341^((x342!=x343)%x344));

    if (t82 != -30126LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x346 = 11117291589651LLU;
	int64_t x347 = 0LL;
	int64_t t83 = -546509712336621LL;

    t83 = (x345^((x346!=x347)%x348));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x352 = 17551U;
	volatile uint32_t t84 = 1261671U;

    t84 = (x349^((x350!=x351)%x352));

    if (t84 != 949U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x353 = INT64_MAX;
	int16_t x355 = INT16_MAX;
	volatile int16_t x356 = 841;
	volatile int64_t t85 = 54155147726567607LL;

    t85 = (x353^((x354!=x355)%x356));

    if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = UINT64_MAX;
	int8_t x359 = -1;
	int64_t x360 = INT64_MAX;
	volatile uint64_t t86 = 25591795952894910LLU;

    t86 = (x357^((x358!=x359)%x360));

    if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x363 = 5;
	static uint16_t x364 = UINT16_MAX;
	int64_t t87 = 276LL;

    t87 = (x361^((x362!=x363)%x364));

    if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t88 = 7805;

    t88 = (x365^((x366!=x367)%x368));

    if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x369 = 32U;
	static int8_t x370 = INT8_MIN;
	volatile uint64_t t89 = 496017805LLU;

    t89 = (x369^((x370!=x371)%x372));

    if (t89 != 32LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = -38292405809LL;
	static volatile uint32_t x374 = 211964U;
	int8_t x375 = INT8_MIN;
	int64_t t90 = 552207770LL;

    t90 = (x373^((x374!=x375)%x376));

    if (t90 != -38292405810LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = -1LL;
	int32_t x378 = INT32_MIN;
	static int32_t x379 = -1;
	uint8_t x380 = 3U;
	static int64_t t91 = -115218380475336LL;

    t91 = (x377^((x378!=x379)%x380));

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x381 = INT16_MIN;
	uint64_t x382 = UINT64_MAX;
	volatile int8_t x383 = 0;
	int8_t x384 = INT8_MAX;
	volatile int32_t t92 = -988397011;

    t92 = (x381^((x382!=x383)%x384));

    if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile uint64_t t93 = 250405178LLU;

    t93 = (x385^((x386!=x387)%x388));

    if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t94 = 5LLU;

    t94 = (x389^((x390!=x391)%x392));

    if (t94 != 14LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x393 = UINT16_MAX;
	static int64_t x394 = INT64_MIN;
	static int32_t x395 = INT32_MIN;
	uint8_t x396 = 3U;
	static volatile int32_t t95 = -457924;

    t95 = (x393^((x394!=x395)%x396));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t t96 = 38523U;

    t96 = (x397^((x398!=x399)%x400));

    if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x407 = INT32_MIN;
	int16_t x408 = -322;
	int32_t t97 = -5;

    t97 = (x405^((x406!=x407)%x408));

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x409 = INT32_MAX;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MAX;
	uint32_t x412 = 27U;
	uint32_t t98 = 12U;

    t98 = (x409^((x410!=x411)%x412));

    if (t98 != 2147483646U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	uint16_t x415 = 2U;
	volatile int32_t t99 = 28;

    t99 = (x413^((x414!=x415)%x416));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = INT64_MIN;
	volatile uint32_t x419 = 475U;
	int32_t x420 = 153225744;
	int64_t t100 = -5939892820LL;

    t100 = (x417^((x418!=x419)%x420));

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = -4407167543446LL;
	uint32_t x422 = 22U;
	int32_t x423 = -1;
	int64_t x424 = -22851370756LL;
	int64_t t101 = 610395572595372LL;

    t101 = (x421^((x422!=x423)%x424));

    if (t101 != -4407167543445LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x425 = INT32_MIN;
	static int32_t x426 = INT32_MIN;
	static volatile int64_t x427 = 2376LL;
	int8_t x428 = -1;
	volatile int32_t t102 = INT32_MIN;

    t102 = (x425^((x426!=x427)%x428));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MAX;
	int32_t t103 = 120051407;

    t103 = (x429^((x430!=x431)%x432));

    if (t103 != 254) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = 107U;

    t104 = (x433^((x434!=x435)%x436));

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x437 = INT64_MIN;
	static int16_t x438 = INT16_MIN;
	static int8_t x440 = INT8_MIN;
	int64_t t105 = -288LL;

    t105 = (x437^((x438!=x439)%x440));

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = INT32_MIN;
	volatile int16_t x442 = -1;
	volatile int8_t x443 = INT8_MAX;
	int64_t x444 = INT64_MIN;

    t106 = (x441^((x442!=x443)%x444));

    if (t106 != -2147483647LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = -13;
	uint32_t x450 = 25121U;
	uint32_t x451 = 51615640U;
	static volatile int8_t x452 = INT8_MAX;
	volatile int32_t t107 = 114982854;

    t107 = (x449^((x450!=x451)%x452));

    if (t107 != -14) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x453 = 6214724088187735211LLU;
	static int8_t x454 = INT8_MIN;
	uint32_t x455 = 1982U;
	uint64_t x456 = 149LLU;
	volatile uint64_t t108 = 11120777549LLU;

    t108 = (x453^((x454!=x455)%x456));

    if (t108 != 6214724088187735210LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x457 = 0U;
	int64_t x459 = -1LL;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t109 = 3802U;

    t109 = (x457^((x458!=x459)%x460));

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = INT64_MAX;
	volatile int64_t x462 = INT64_MAX;
	volatile uint32_t x463 = UINT32_MAX;
	int32_t x464 = INT32_MIN;

    t110 = (x461^((x462!=x463)%x464));

    if (t110 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x465 = UINT32_MAX;
	uint32_t x468 = 44U;
	uint32_t t111 = 2039110U;

    t111 = (x465^((x466!=x467)%x468));

    if (t111 != 4294967294U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = UINT32_MAX;
	int32_t x470 = 18;
	uint16_t x472 = UINT16_MAX;
	volatile uint32_t t112 = 4844758U;

    t112 = (x469^((x470!=x471)%x472));

    if (t112 != 4294967294U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x473 = INT64_MAX;
	uint8_t x475 = 7U;
	int64_t x476 = -1LL;
	static int64_t t113 = INT64_MAX;

    t113 = (x473^((x474!=x475)%x476));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;
	static int64_t x480 = INT64_MIN;

    t114 = (x477^((x478!=x479)%x480));

    if (t114 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x481 = -1;
	int8_t x483 = INT8_MIN;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t115 = 35302275820906LLU;

    t115 = (x481^((x482!=x483)%x484));

    if (t115 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x485 = -1LL;
	uint16_t x486 = 42U;
	int64_t x487 = INT64_MIN;

    t116 = (x485^((x486!=x487)%x488));

    if (t116 != -2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = INT16_MIN;
	static int64_t x490 = 2893LL;
	int8_t x491 = INT8_MIN;

    t117 = (x489^((x490!=x491)%x492));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x493 = UINT32_MAX;
	volatile int64_t x494 = INT64_MAX;
	uint64_t x495 = 0LLU;
	int8_t x496 = INT8_MIN;
	volatile uint32_t t118 = 14U;

    t118 = (x493^((x494!=x495)%x496));

    if (t118 != 4294967294U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = INT16_MAX;
	volatile uint64_t x498 = 148836LLU;
	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t119 = -192;

    t119 = (x497^((x498!=x499)%x500));

    if (t119 != 32766) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x501 = 3LLU;
	int64_t x502 = 335443210327105031LL;
	uint64_t x504 = 119LLU;
	uint64_t t120 = 3114344378281306LLU;

    t120 = (x501^((x502!=x503)%x504));

    if (t120 != 2LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x505 = -1941271567868940LL;
	int8_t x506 = -1;
	uint64_t x507 = 18360532780160LLU;
	int32_t x508 = -1;
	static volatile int64_t t121 = -109969520687LL;

    t121 = (x505^((x506!=x507)%x508));

    if (t121 != -1941271567868940LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x509 = -1;
	int32_t x510 = 3568701;
	uint8_t x511 = 80U;
	int64_t t122 = -16392816LL;

    t122 = (x509^((x510!=x511)%x512));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x514 = INT16_MIN;
	static int16_t x516 = INT16_MIN;

    t123 = (x513^((x514!=x515)%x516));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x517 = 38U;
	uint32_t x518 = 179246503U;
	uint32_t x519 = UINT32_MAX;
	int32_t x520 = INT32_MAX;
	volatile uint32_t t124 = 574U;

    t124 = (x517^((x518!=x519)%x520));

    if (t124 != 39U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MAX;
	uint64_t x526 = 399375494325LLU;
	volatile uint16_t x527 = 0U;
	uint8_t x528 = 2U;
	static int32_t t125 = 20;

    t125 = (x525^((x526!=x527)%x528));

    if (t125 != 2147483646) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = -1LL;
	int8_t x531 = -1;
	uint64_t t126 = 2261345663887110130LLU;

    t126 = (x529^((x530!=x531)%x532));

    if (t126 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x534 = INT32_MIN;
	volatile int64_t x536 = INT64_MAX;
	volatile int64_t t127 = 14070300LL;

    t127 = (x533^((x534!=x535)%x536));

    if (t127 != -2LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x537 = 3685377;
	volatile int64_t x539 = -1LL;
	uint8_t x540 = 81U;

    t128 = (x537^((x538!=x539)%x540));

    if (t128 != 3685376) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x541 = INT64_MIN;
	int16_t x543 = INT16_MIN;
	static int8_t x544 = -1;
	static int64_t t129 = INT64_MIN;

    t129 = (x541^((x542!=x543)%x544));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x545 = 115U;
	uint16_t x546 = UINT16_MAX;
	static volatile uint64_t x547 = 17LLU;
	uint64_t x548 = 926830756LLU;
	uint64_t t130 = 135329625269402LLU;

    t130 = (x545^((x546!=x547)%x548));

    if (t130 != 114LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x552 = 14;
	static volatile int32_t t131 = -8008;

    t131 = (x549^((x550!=x551)%x552));

    if (t131 != 254) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	uint32_t x556 = 919729U;
	volatile uint32_t t132 = 36140U;

    t132 = (x553^((x554!=x555)%x556));

    if (t132 != 20565U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x557 = INT8_MIN;
	volatile int64_t x559 = -1LL;
	int8_t x560 = INT8_MIN;
	static volatile int32_t t133 = -1;

    t133 = (x557^((x558!=x559)%x560));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x561 = INT8_MAX;
	int64_t x563 = INT64_MIN;
	volatile int32_t t134 = 6729260;

    t134 = (x561^((x562!=x563)%x564));

    if (t134 != 126) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x565 = INT64_MIN;
	static uint8_t x566 = 0U;
	volatile int32_t x567 = INT32_MAX;
	static int64_t x568 = INT64_MIN;
	int64_t t135 = -1353341500897980771LL;

    t135 = (x565^((x566!=x567)%x568));

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x569 = INT16_MIN;
	volatile int64_t x570 = -1LL;
	int32_t x571 = -1;
	int16_t x572 = 154;
	volatile int32_t t136 = -755696298;

    t136 = (x569^((x570!=x571)%x572));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = 4;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = 139U;
	volatile int32_t t137 = 6842996;

    t137 = (x573^((x574!=x575)%x576));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x577 = -1;
	uint8_t x578 = UINT8_MAX;
	int8_t x579 = INT8_MIN;
	static volatile uint32_t x580 = 68734916U;

    t138 = (x577^((x578!=x579)%x580));

    if (t138 != 4294967294U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x581 = INT64_MAX;
	int16_t x582 = -1;
	int32_t x584 = -16101;
	volatile int64_t t139 = 1LL;

    t139 = (x581^((x582!=x583)%x584));

    if (t139 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x586 = INT16_MAX;
	int16_t x587 = INT16_MAX;

    t140 = (x585^((x586!=x587)%x588));

    if (t140 != 3) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x589 = 29U;
	uint64_t x590 = 34705586775431516LLU;
	uint32_t x592 = 514321548U;
	volatile uint32_t t141 = 13775U;

    t141 = (x589^((x590!=x591)%x592));

    if (t141 != 28U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x594 = -1;
	int16_t x595 = INT16_MIN;
	static uint16_t x596 = 1U;
	int64_t t142 = -1057282LL;

    t142 = (x593^((x594!=x595)%x596));

    if (t142 != 823206870821LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x597 = 1;
	uint64_t x598 = UINT64_MAX;
	int64_t x599 = -1LL;
	int32_t x600 = 27;
	volatile int32_t t143 = 49;

    t143 = (x597^((x598!=x599)%x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x601 = 68126LLU;
	int16_t x602 = INT16_MAX;
	static uint16_t x603 = 12045U;
	int8_t x604 = INT8_MAX;
	volatile uint64_t t144 = 40498LLU;

    t144 = (x601^((x602!=x603)%x604));

    if (t144 != 68127LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int8_t x606 = INT8_MAX;
	uint32_t x607 = 11157746U;
	int16_t x608 = INT16_MIN;
	volatile int32_t t145 = 145444150;

    t145 = (x605^((x606!=x607)%x608));

    if (t145 != 65534) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x609 = UINT64_MAX;
	int32_t x611 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	uint64_t t146 = 30LLU;

    t146 = (x609^((x610!=x611)%x612));

    if (t146 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x613 = 0U;
	uint64_t x614 = 1221327070LLU;
	static uint16_t x616 = 5517U;
	static volatile int32_t t147 = 27;

    t147 = (x613^((x614!=x615)%x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MIN;
	int32_t x620 = 41952818;
	volatile int32_t t148 = 0;

    t148 = (x617^((x618!=x619)%x620));

    if (t148 != 65534) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x621 = INT16_MAX;
	uint32_t x622 = 991U;
	int8_t x623 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;
	static volatile int32_t t149 = -371;

    t149 = (x621^((x622!=x623)%x624));

    if (t149 != 32766) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x625 = 1U;
	uint8_t x626 = 2U;
	static int16_t x627 = -1;
	int32_t t150 = 2109;

    t150 = (x625^((x626!=x627)%x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x629 = UINT32_MAX;
	static volatile int8_t x630 = 2;
	int16_t x631 = 0;
	uint64_t x632 = UINT64_MAX;
	uint64_t t151 = 98269481682906394LLU;

    t151 = (x629^((x630!=x631)%x632));

    if (t151 != 4294967294LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x633 = 3LLU;
	int8_t x634 = INT8_MAX;
	uint8_t x635 = 22U;
	int64_t x636 = INT64_MIN;

    t152 = (x633^((x634!=x635)%x636));

    if (t152 != 2LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x637 = 12U;
	static volatile int16_t x638 = INT16_MIN;
	int8_t x639 = -36;
	int64_t x640 = INT64_MIN;
	int64_t t153 = 430LL;

    t153 = (x637^((x638!=x639)%x640));

    if (t153 != 13LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = 594609375972653LL;
	uint32_t x642 = UINT32_MAX;
	static uint64_t x644 = 24528277897LLU;
	uint64_t t154 = 0LLU;

    t154 = (x641^((x642!=x643)%x644));

    if (t154 != 594609375972652LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x645 = UINT32_MAX;
	uint16_t x646 = 35U;
	uint64_t x647 = 1057151478905612LLU;
	volatile uint32_t x648 = 1U;
	uint32_t t155 = UINT32_MAX;

    t155 = (x645^((x646!=x647)%x648));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x649 = INT8_MAX;
	uint16_t x650 = 70U;
	volatile uint64_t x652 = 5077762777LLU;
	uint64_t t156 = 2LLU;

    t156 = (x649^((x650!=x651)%x652));

    if (t156 != 126LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x653 = INT32_MAX;
	uint64_t x654 = UINT64_MAX;
	int64_t x655 = -1LL;
	volatile int16_t x656 = INT16_MIN;
	volatile int32_t t157 = INT32_MAX;

    t157 = (x653^((x654!=x655)%x656));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x657 = INT8_MIN;
	static int32_t x658 = -783;
	int8_t x659 = 40;
	int16_t x660 = 55;

    t158 = (x657^((x658!=x659)%x660));

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x661 = 9U;
	int32_t x662 = INT32_MIN;
	int32_t t159 = 9312;

    t159 = (x661^((x662!=x663)%x664));

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x667 = INT64_MIN;
	static int64_t x668 = 3774021875LL;
	int64_t t160 = -6927691494456LL;

    t160 = (x665^((x666!=x667)%x668));

    if (t160 != -32767LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x669 = UINT8_MAX;
	uint8_t x670 = 5U;
	int32_t x671 = INT32_MIN;
	volatile uint8_t x672 = 4U;
	int32_t t161 = 226;

    t161 = (x669^((x670!=x671)%x672));

    if (t161 != 254) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x673 = 12298813LLU;
	static int16_t x674 = -10587;
	int32_t x675 = INT32_MIN;

    t162 = (x673^((x674!=x675)%x676));

    if (t162 != 12298812LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x677 = INT32_MAX;
	static uint64_t x679 = 93793LLU;
	volatile uint16_t x680 = 22672U;
	int32_t t163 = -607;

    t163 = (x677^((x678!=x679)%x680));

    if (t163 != 2147483646) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MAX;
	int8_t x682 = -1;
	uint8_t x683 = 46U;
	uint64_t x684 = 284LLU;
	static volatile uint64_t t164 = 2089107LLU;

    t164 = (x681^((x682!=x683)%x684));

    if (t164 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x686 = 1;
	static int16_t x687 = INT16_MIN;
	volatile int8_t x688 = INT8_MAX;

    t165 = (x685^((x686!=x687)%x688));

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x690 = INT16_MIN;
	static int16_t x691 = -2;
	static volatile int16_t x692 = -1;
	static volatile int32_t t166 = INT32_MAX;

    t166 = (x689^((x690!=x691)%x692));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = 3293523;
	static int64_t x695 = INT64_MAX;
	volatile uint8_t x696 = 124U;

    t167 = (x693^((x694!=x695)%x696));

    if (t167 != 3293522) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x697 = INT8_MAX;
	int32_t x698 = INT32_MIN;
	int64_t x699 = INT64_MIN;
	volatile int64_t t168 = -16LL;

    t168 = (x697^((x698!=x699)%x700));

    if (t168 != 126LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x702 = -9452982971221LL;
	volatile int8_t x704 = INT8_MIN;
	int32_t t169 = -1672;

    t169 = (x701^((x702!=x703)%x704));

    if (t169 != 20) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = 1;
	int16_t x706 = INT16_MAX;
	int32_t x707 = 2566;
	volatile int16_t x708 = INT16_MIN;
	int32_t t170 = -160260;

    t170 = (x705^((x706!=x707)%x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x709 = INT64_MIN;
	static int32_t x710 = INT32_MAX;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = -125812LL;
	volatile int64_t t171 = -49469482588288559LL;

    t171 = (x709^((x710!=x711)%x712));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x714 = 1338;
	static int16_t x715 = INT16_MIN;

    t172 = (x713^((x714!=x715)%x716));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x718 = -228582;
	int16_t x719 = INT16_MIN;
	int64_t t173 = -585651584LL;

    t173 = (x717^((x718!=x719)%x720));

    if (t173 != -127LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x721 = -28477783;
	int8_t x722 = INT8_MIN;
	uint8_t x723 = 41U;
	int16_t x724 = 6;
	int32_t t174 = 226382;

    t174 = (x721^((x722!=x723)%x724));

    if (t174 != -28477784) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x725 = INT32_MAX;
	static int64_t x726 = 197345LL;
	int64_t x727 = -1LL;
	int32_t t175 = INT32_MAX;

    t175 = (x725^((x726!=x727)%x728));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x729 = -1;
	int16_t x730 = -358;
	uint32_t x731 = 1119254983U;
	int64_t x732 = INT64_MAX;
	static volatile int64_t t176 = 17665447050632LL;

    t176 = (x729^((x730!=x731)%x732));

    if (t176 != -2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x734 = 3;
	int16_t x735 = -1;
	static uint64_t x736 = 1800250719571698LLU;
	uint64_t t177 = 1011397422LLU;

    t177 = (x733^((x734!=x735)%x736));

    if (t177 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x737 = INT32_MIN;
	int32_t x738 = -1;
	int16_t x739 = INT16_MAX;
	uint16_t x740 = 26986U;
	volatile int32_t t178 = 122;

    t178 = (x737^((x738!=x739)%x740));

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int16_t x742 = 122;
	uint16_t x744 = 423U;

    t179 = (x741^((x742!=x743)%x744));

    if (t179 != 65534) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile int16_t x747 = INT16_MAX;
	volatile int32_t x748 = INT32_MIN;
	uint32_t t180 = 0U;

    t180 = (x745^((x746!=x747)%x748));

    if (t180 != 4294967294U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x749 = 0U;
	int8_t x751 = 7;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t181 = -614098;

    t181 = (x749^((x750!=x751)%x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int8_t x755 = INT8_MIN;
	static int64_t x756 = -213806434258LL;

    t182 = (x753^((x754!=x755)%x756));

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x758 = 20U;
	volatile int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;
	volatile uint64_t t183 = 36828164150LLU;

    t183 = (x757^((x758!=x759)%x760));

    if (t183 != 31740295LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x762 = INT16_MIN;
	int16_t x763 = INT16_MAX;
	uint64_t x764 = 4304886135327721574LLU;

    t184 = (x761^((x762!=x763)%x764));

    if (t184 != 2147483646LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x765 = INT32_MIN;
	static volatile int32_t x766 = -1;
	int32_t x767 = 69;
	volatile int8_t x768 = INT8_MIN;
	volatile int32_t t185 = 66835;

    t185 = (x765^((x766!=x767)%x768));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x769 = INT8_MIN;
	int16_t x770 = INT16_MAX;
	int8_t x771 = INT8_MIN;
	int16_t x772 = INT16_MAX;

    t186 = (x769^((x770!=x771)%x772));

    if (t186 != -127) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x773 = 15;
	uint8_t x774 = 8U;
	int8_t x775 = 1;
	int32_t t187 = 7024;

    t187 = (x773^((x774!=x775)%x776));

    if (t187 != 14) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x777 = 0LL;
	int16_t x778 = -1;
	static uint64_t x779 = 31643002LLU;
	int64_t x780 = INT64_MIN;
	volatile int64_t t188 = -11001985493612LL;

    t188 = (x777^((x778!=x779)%x780));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x781 = INT32_MAX;
	uint8_t x782 = 16U;
	static volatile uint64_t x783 = UINT64_MAX;
	int32_t x784 = INT32_MAX;
	int32_t t189 = 148780;

    t189 = (x781^((x782!=x783)%x784));

    if (t189 != 2147483646) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x786 = INT64_MAX;
	volatile uint64_t x787 = 638423815542829018LLU;
	uint32_t x788 = 1U;
	uint32_t t190 = 6U;

    t190 = (x785^((x786!=x787)%x788));

    if (t190 != 65535U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x789 = INT32_MAX;
	int16_t x790 = 2214;
	uint8_t x791 = UINT8_MAX;

    t191 = (x789^((x790!=x791)%x792));

    if (t191 != 2147483646) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = -3969976;
	static int32_t x794 = INT32_MIN;
	int32_t x795 = -629;
	int32_t x796 = INT32_MIN;
	static volatile int32_t t192 = -13322376;

    t192 = (x793^((x794!=x795)%x796));

    if (t192 != -3969975) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x798 = 63671064754149LLU;
	static int32_t x799 = -86888534;
	int32_t x800 = 55;
	static volatile int32_t t193 = -517442356;

    t193 = (x797^((x798!=x799)%x800));

    if (t193 != -2) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x801 = INT8_MIN;
	static int32_t x803 = INT32_MAX;
	int8_t x804 = -1;
	static int32_t t194 = -128776118;

    t194 = (x801^((x802!=x803)%x804));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x805 = 3614U;
	int8_t x806 = -1;

    t195 = (x805^((x806!=x807)%x808));

    if (t195 != 3615LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = -1;
	int32_t x811 = -1;
	int16_t x812 = -1;
	int32_t t196 = -20;

    t196 = (x809^((x810!=x811)%x812));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x813 = UINT64_MAX;
	int64_t x815 = INT64_MIN;
	uint64_t x816 = 1225471575LLU;
	uint64_t t197 = 992213027LLU;

    t197 = (x813^((x814!=x815)%x816));

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x817 = -95;
	int16_t x818 = INT16_MIN;
	int32_t x819 = -1;
	uint32_t t198 = 0U;

    t198 = (x817^((x818!=x819)%x820));

    if (t198 != 4294967200U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = -189625;
	volatile int32_t x822 = 1;
	static int16_t x823 = INT16_MIN;
	static uint8_t x824 = 3U;
	static volatile int32_t t199 = 2976210;

    t199 = (x821^((x822!=x823)%x824));

    if (t199 != -189626) { NG(); } else { ; }
	
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

