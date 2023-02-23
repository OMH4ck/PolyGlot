
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

int32_t t0 = 3150;
int8_t x8 = 0;
volatile int32_t x9 = 9987;
static volatile int64_t x11 = -6377968204LL;
uint16_t x13 = 8760U;
volatile int16_t x37 = -1;
volatile int32_t t9 = -3;
static int64_t x57 = -1LL;
volatile int64_t x58 = INT64_MIN;
static int16_t x61 = INT16_MIN;
int64_t x63 = INT64_MIN;
int32_t x67 = INT32_MIN;
static int8_t x70 = INT8_MIN;
uint16_t x72 = 67U;
int16_t x75 = -1;
int32_t t18 = -5868;
int64_t x77 = -1LL;
int64_t x81 = 6254554203LL;
volatile int32_t t20 = 1;
volatile int32_t t21 = 129642;
volatile int32_t x89 = INT32_MAX;
uint16_t x93 = UINT16_MAX;
int16_t x94 = INT16_MIN;
static volatile int32_t t23 = -1696417;
static int32_t x99 = -1;
int32_t x103 = 5516;
int32_t x104 = -1;
int16_t x105 = INT16_MIN;
uint64_t x106 = 24097275047335882LLU;
volatile int32_t t27 = -197;
static int16_t x113 = -1;
uint32_t x119 = 90226U;
uint32_t x122 = 733696965U;
int32_t x124 = INT32_MAX;
static volatile int16_t x128 = -1;
int16_t x133 = 1049;
uint16_t x134 = 2U;
int32_t x137 = -1;
int64_t x138 = INT64_MIN;
uint32_t x142 = 2645U;
static int32_t x152 = -1;
int32_t t39 = 0;
int64_t x164 = -1LL;
int8_t x168 = -1;
int32_t x175 = -73;
static int64_t x183 = INT64_MIN;
static int32_t t45 = -7213269;
int16_t x199 = 53;
static int8_t x201 = 0;
static int64_t x203 = INT64_MAX;
uint16_t x207 = UINT16_MAX;
volatile int64_t x211 = INT64_MIN;
static int16_t x214 = INT16_MIN;
uint64_t x231 = UINT64_MAX;
int32_t t59 = -133299130;
static int32_t x256 = INT32_MIN;
int32_t t63 = -3;
uint8_t x262 = 27U;
static int32_t x263 = INT32_MIN;
int32_t t66 = -15;
int16_t x270 = -1;
volatile uint8_t x272 = 112U;
uint32_t x273 = UINT32_MAX;
int32_t x276 = -7026;
volatile int32_t t68 = 2281;
int16_t x277 = INT16_MIN;
static volatile uint16_t x284 = 3082U;
uint64_t x285 = 453559LLU;
volatile int32_t t72 = -425;
int32_t t73 = 310314673;
int32_t x313 = INT32_MIN;
int32_t t79 = 27;
volatile int8_t x321 = -1;
static volatile int64_t x327 = 2289LL;
static int64_t x334 = -1LL;
uint64_t x339 = UINT64_MAX;
int16_t x342 = INT16_MAX;
static volatile uint64_t x350 = UINT64_MAX;
uint8_t x352 = UINT8_MAX;
int64_t x354 = INT64_MAX;
static uint16_t x357 = 18U;
int16_t x360 = 5523;
static int32_t t90 = -16576725;
static int8_t x372 = INT8_MIN;
volatile int32_t t93 = 4324890;
volatile int32_t t97 = -23988664;
uint64_t x394 = 209610LLU;
volatile int32_t t99 = 397633686;
static uint16_t x401 = 0U;
uint32_t x404 = 2460193U;
static int16_t x408 = INT16_MIN;
int16_t x411 = INT16_MAX;
int64_t x415 = INT64_MIN;
int32_t t103 = 179558;
volatile uint8_t x423 = UINT8_MAX;
int32_t t106 = 12;
int64_t x430 = -1020322034LL;
volatile int32_t t107 = -3236;
int64_t x435 = INT64_MIN;
static volatile int8_t x437 = INT8_MIN;
int16_t x438 = -608;
volatile int64_t x440 = INT64_MIN;
int8_t x441 = INT8_MIN;
int64_t x442 = INT64_MIN;
uint8_t x449 = 7U;
int32_t t112 = 546824693;
volatile int64_t x460 = INT64_MIN;
uint64_t x461 = 120121275092LLU;
static int32_t x463 = INT32_MIN;
static volatile int16_t x468 = -1;
int32_t x469 = 12786;
static uint8_t x470 = UINT8_MAX;
int16_t x471 = 80;
static volatile int32_t t117 = -329;
static volatile int16_t x473 = -47;
static int32_t x476 = INT32_MIN;
static volatile int64_t x477 = -1LL;
uint32_t x482 = UINT32_MAX;
uint8_t x489 = UINT8_MAX;
uint16_t x491 = UINT16_MAX;
volatile uint32_t x499 = UINT32_MAX;
static int32_t x500 = -990988513;
static uint8_t x501 = 2U;
volatile int32_t t125 = 112;
static int16_t x513 = -1;
int64_t x514 = 26201688715803319LL;
int8_t x522 = -1;
static int32_t t130 = 3895;
static int8_t x525 = INT8_MIN;
uint64_t x529 = 213736066LLU;
uint8_t x531 = UINT8_MAX;
volatile uint8_t x534 = UINT8_MAX;
int8_t x535 = -1;
static int64_t x540 = INT64_MIN;
volatile uint16_t x554 = UINT16_MAX;
int32_t t138 = 48;
int16_t x559 = -1;
int32_t t139 = 465315400;
int32_t x564 = -1;
uint64_t x568 = UINT64_MAX;
volatile int32_t t144 = 783265;
uint8_t x587 = 8U;
uint64_t x593 = UINT64_MAX;
volatile int8_t x596 = -1;
volatile uint64_t x599 = UINT64_MAX;
int8_t x611 = INT8_MAX;
int16_t x613 = -1;
int8_t x615 = -1;
int64_t x616 = INT64_MIN;
uint32_t x621 = UINT32_MAX;
int64_t x622 = INT64_MAX;
int32_t t155 = -9817;
uint16_t x625 = 1U;
int32_t x627 = INT32_MAX;
volatile uint8_t x631 = UINT8_MAX;
int64_t x636 = INT64_MIN;
uint64_t x651 = UINT64_MAX;
int8_t x658 = INT8_MAX;
volatile uint32_t x665 = UINT32_MAX;
int16_t x668 = INT16_MIN;
int32_t t166 = -219085135;
volatile int32_t x669 = -31;
int16_t x670 = 0;
uint64_t x676 = UINT64_MAX;
int32_t x684 = INT32_MAX;
volatile int64_t x688 = INT64_MAX;
uint8_t x693 = UINT8_MAX;
static volatile uint16_t x694 = 27211U;
uint64_t x695 = 91407973017764LLU;
static int32_t x698 = INT32_MIN;
int16_t x706 = INT16_MIN;
uint8_t x707 = 7U;
static int32_t t176 = 66936053;
static int8_t x712 = -1;
static uint64_t x719 = UINT64_MAX;
int16_t x720 = -1;
int64_t x735 = -1LL;
int8_t x750 = INT8_MIN;
volatile int32_t t188 = -138;
int32_t x761 = -1773;
int32_t x767 = -6274;
static uint8_t x768 = 19U;
static volatile uint16_t x773 = UINT16_MAX;
int16_t x780 = INT16_MAX;
int64_t x788 = INT64_MAX;
uint64_t x791 = 238759778910LLU;
static int32_t x792 = -1;
int32_t t197 = -52825600;
int16_t x793 = -1;
int8_t x795 = INT8_MAX;
int32_t t198 = -1;
static int32_t x799 = 91;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint16_t x2 = 1U;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MIN;

    t0 = (x1>((x2!=x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -58LL;
	volatile int32_t x6 = INT32_MIN;
	uint64_t x7 = 36LLU;
	int32_t t1 = -418;

    t1 = (x5>((x6!=x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -4;

    t2 = (x9>((x10!=x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	uint8_t x15 = 93U;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -118;

    t3 = (x13>((x14!=x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 46448997;
	volatile int16_t x18 = -1;
	static int32_t x19 = INT32_MAX;
	int8_t x20 = 0;
	volatile int32_t t4 = -33;

    t4 = (x17>((x18!=x19)^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1403627;
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	static int16_t x24 = -45;
	static int32_t t5 = 7743;

    t5 = (x21>((x22!=x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static uint16_t x26 = UINT16_MAX;
	static int32_t x27 = 761;
	int64_t x28 = INT64_MAX;
	static volatile int32_t t6 = 3699757;

    t6 = (x25>((x26!=x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 107528LLU;
	uint32_t x30 = 26421005U;
	uint64_t x31 = 32149075LLU;
	volatile uint32_t x32 = 2994U;
	volatile int32_t t7 = 10274;

    t7 = (x29>((x30!=x31)^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -257640566;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 1289U;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 10208;

    t8 = (x33>((x34!=x35)^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x38 = 59U;
	static int8_t x39 = INT8_MIN;
	volatile int8_t x40 = INT8_MIN;

    t9 = (x37>((x38!=x39)^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = 1523128287LL;
	uint8_t x44 = 93U;
	volatile int32_t t10 = -21;

    t10 = (x41>((x42!=x43)^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int8_t x46 = INT8_MIN;
	int32_t x47 = 1812;
	int32_t x48 = 15;
	volatile int32_t t11 = -1201459;

    t11 = (x45>((x46!=x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 267;
	volatile uint16_t x50 = 32476U;
	uint16_t x51 = UINT16_MAX;
	uint32_t x52 = 14U;
	int32_t t12 = 99797;

    t12 = (x49>((x50!=x51)^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 1356700920170LLU;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = 0U;
	int32_t t13 = 10460;

    t13 = (x53>((x54!=x55)^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = 35U;
	volatile int32_t t14 = -11510164;

    t14 = (x57>((x58!=x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = INT64_MIN;
	static int64_t x64 = INT64_MAX;
	volatile int32_t t15 = -898631;

    t15 = (x61>((x62!=x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 17587526U;
	volatile int32_t x68 = INT32_MAX;
	int32_t t16 = 58571747;

    t16 = (x65>((x66!=x67)^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 12169597U;
	static int32_t x71 = INT32_MAX;
	int32_t t17 = 22328747;

    t17 = (x69>((x70!=x71)^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 28603630216903LLU;
	int32_t x74 = -1;
	int32_t x76 = 1;

    t18 = (x73>((x74!=x75)^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x78 = INT8_MIN;
	int32_t x79 = -40777509;
	uint16_t x80 = 1U;
	int32_t t19 = -994110518;

    t19 = (x77>((x78!=x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 2U;
	uint16_t x83 = 17238U;
	int32_t x84 = -1;

    t20 = (x81>((x82!=x83)^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int16_t x86 = INT16_MAX;
	int16_t x87 = 114;
	volatile uint64_t x88 = 1493247229LLU;

    t21 = (x85>((x86!=x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -1LL;
	volatile int8_t x91 = -1;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -456;

    t22 = (x89>((x90!=x91)^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x95 = -1LL;
	volatile uint32_t x96 = 1706367390U;

    t23 = (x93>((x94!=x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint16_t x98 = 1909U;
	int32_t x100 = -216;
	volatile int32_t t24 = 26442578;

    t24 = (x97>((x98!=x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x102 = -52;
	int32_t t25 = 170;

    t25 = (x101>((x102!=x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x107 = -1;
	static int16_t x108 = 27;
	static volatile int32_t t26 = 1102;

    t26 = (x105>((x106!=x107)^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 692LLU;
	volatile uint16_t x110 = 7U;
	static uint8_t x111 = 1U;
	volatile int8_t x112 = -1;

    t27 = (x109>((x110!=x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = -1;
	static int8_t x115 = -3;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t28 = -55139238;

    t28 = (x113>((x114!=x115)^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -2;
	static uint16_t x118 = 25U;
	uint64_t x120 = UINT64_MAX;
	int32_t t29 = 87;

    t29 = (x117>((x118!=x119)^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint16_t x123 = 120U;
	volatile int32_t t30 = -161645;

    t30 = (x121>((x122!=x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 95U;
	int32_t x126 = -80644728;
	uint16_t x127 = UINT16_MAX;
	int32_t t31 = -187771;

    t31 = (x125>((x126!=x127)^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MAX;
	uint8_t x131 = 79U;
	volatile uint64_t x132 = 10886LLU;
	volatile int32_t t32 = -7873348;

    t32 = (x129>((x130!=x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x135 = -1;
	uint64_t x136 = 585999802518LLU;
	int32_t t33 = -4993571;

    t33 = (x133>((x134!=x135)^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x139 = 12;
	uint16_t x140 = UINT16_MAX;
	static volatile int32_t t34 = 13;

    t34 = (x137>((x138!=x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	uint64_t x143 = 11LLU;
	int16_t x144 = -2530;
	int32_t t35 = 7;

    t35 = (x141>((x142!=x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	int16_t x147 = -1;
	int64_t x148 = -1LL;
	int32_t t36 = 0;

    t36 = (x145>((x146!=x147)^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	volatile int32_t t37 = -54;

    t37 = (x149>((x150!=x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	static volatile int16_t x154 = INT16_MIN;
	int64_t x155 = -156240398383LL;
	static uint16_t x156 = 1119U;
	int32_t t38 = 85;

    t38 = (x153>((x154!=x155)^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int32_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = -1;

    t39 = (x157>((x158!=x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile int16_t x162 = 38;
	int8_t x163 = 0;
	int32_t t40 = 79;

    t40 = (x161>((x162!=x163)^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -304;
	int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	int32_t t41 = -113726189;

    t41 = (x165>((x166!=x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = -200467;
	int16_t x170 = -26;
	int64_t x171 = INT64_MAX;
	static volatile uint16_t x172 = 0U;
	int32_t t42 = -105135;

    t42 = (x169>((x170!=x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	static int32_t x174 = INT32_MAX;
	int64_t x176 = 3LL;
	int32_t t43 = -372368;

    t43 = (x173>((x174!=x175)^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 836269U;
	int16_t x178 = 1;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = -4;
	static int32_t t44 = 128298;

    t44 = (x177>((x178!=x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	static uint8_t x184 = UINT8_MAX;

    t45 = (x181>((x182!=x183)^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	uint64_t x187 = 370541868632225LLU;
	uint64_t x188 = 37264100928411LLU;
	volatile int32_t t46 = -58949;

    t46 = (x185>((x186!=x187)^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MAX;
	int64_t x190 = -1LL;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 341753;

    t47 = (x189>((x190!=x191)^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = INT64_MAX;
	int8_t x195 = 24;
	static uint64_t x196 = UINT64_MAX;
	int32_t t48 = 514;

    t48 = (x193>((x194!=x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile uint32_t x198 = 213U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 16686640;

    t49 = (x197>((x198!=x199)^x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 104U;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -2066892;

    t50 = (x201>((x202!=x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 11;
	int8_t x206 = 1;
	int64_t x208 = -1LL;
	volatile int32_t t51 = 851451;

    t51 = (x205>((x206!=x207)^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	int64_t x210 = -1LL;
	static int32_t x212 = 3460;
	volatile int32_t t52 = -21992;

    t52 = (x209>((x210!=x211)^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 106U;
	static uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MIN;
	static int32_t t53 = -45;

    t53 = (x213>((x214!=x215)^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int64_t x218 = 33111088286132LL;
	static uint16_t x219 = 904U;
	int16_t x220 = -1;
	int32_t t54 = -50;

    t54 = (x217>((x218!=x219)^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 1409;
	int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	volatile int32_t x224 = -27;
	int32_t t55 = 132792911;

    t55 = (x221>((x222!=x223)^x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	volatile uint16_t x226 = 12U;
	int8_t x227 = 0;
	static uint32_t x228 = 1382268378U;
	int32_t t56 = -838121;

    t56 = (x225>((x226!=x227)^x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 1743U;
	static uint8_t x230 = 2U;
	static uint32_t x232 = 52551U;
	int32_t t57 = -4125683;

    t57 = (x229>((x230!=x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = -5201;
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = -1;
	volatile int32_t t58 = 29;

    t58 = (x233>((x234!=x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	static volatile int16_t x239 = INT16_MIN;
	int16_t x240 = -1;

    t59 = (x237>((x238!=x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 1;
	uint8_t x242 = UINT8_MAX;
	volatile uint16_t x243 = 14U;
	static uint32_t x244 = 12U;
	volatile int32_t t60 = -86275713;

    t60 = (x241>((x242!=x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	uint16_t x246 = 48U;
	uint32_t x247 = 22927U;
	int32_t x248 = INT32_MAX;
	volatile int32_t t61 = 185;

    t61 = (x245>((x246!=x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MAX;
	volatile int64_t x251 = 5LL;
	int8_t x252 = 0;
	int32_t t62 = -78002173;

    t62 = (x249>((x250!=x251)^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -30898927;
	int16_t x254 = -7;
	uint32_t x255 = 7112542U;

    t63 = (x253>((x254!=x255)^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 52;
	int32_t x258 = INT32_MIN;
	int8_t x259 = 1;
	volatile uint32_t x260 = 221U;
	int32_t t64 = -1;

    t64 = (x257>((x258!=x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	int16_t x264 = -385;
	static int32_t t65 = 8273873;

    t65 = (x261>((x262!=x263)^x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x265 = INT64_MIN;
	static uint16_t x266 = 252U;
	static volatile int16_t x267 = -4;
	int64_t x268 = INT64_MAX;

    t66 = (x265>((x266!=x267)^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = 2;
	volatile int32_t x271 = -1;
	volatile int32_t t67 = -4300150;

    t67 = (x269>((x270!=x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 6U;
	static volatile int32_t x275 = 5873;

    t68 = (x273>((x274!=x275)^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = -1;
	static volatile int16_t x279 = -33;
	int16_t x280 = -12859;
	int32_t t69 = 385945;

    t69 = (x277>((x278!=x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -188;
	int8_t x282 = 1;
	int64_t x283 = 2798796014209824991LL;
	volatile int32_t t70 = -301591372;

    t70 = (x281>((x282!=x283)^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = INT64_MIN;
	static volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 120370928;

    t71 = (x285>((x286!=x287)^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = -37;
	uint8_t x290 = 3U;
	volatile uint64_t x291 = 2860479408LLU;
	int16_t x292 = 7;

    t72 = (x289>((x290!=x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	int32_t x295 = 570259;
	int8_t x296 = 20;

    t73 = (x293>((x294!=x295)^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = 42636893086LL;
	uint16_t x298 = 1U;
	int32_t x299 = 97;
	static volatile int64_t x300 = -110751785401LL;
	int32_t t74 = 683461074;

    t74 = (x297>((x298!=x299)^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	uint64_t x302 = 2794810894314807089LLU;
	volatile uint64_t x303 = 93016537LLU;
	int8_t x304 = 0;
	volatile int32_t t75 = 147;

    t75 = (x301>((x302!=x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -10879;
	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 7U;
	volatile int32_t t76 = -15;

    t76 = (x305>((x306!=x307)^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x310 = 14U;
	volatile int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -1;

    t77 = (x309>((x310!=x311)^x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -5305507263065LL;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t78 = -6935;

    t78 = (x313>((x314!=x315)^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	uint16_t x318 = 252U;
	volatile uint8_t x319 = 0U;
	int16_t x320 = 46;

    t79 = (x317>((x318!=x319)^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x322 = 32U;
	static uint16_t x323 = 309U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -28072705;

    t80 = (x321>((x322!=x323)^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = UINT16_MAX;
	uint32_t x328 = 210554274U;
	volatile int32_t t81 = -366;

    t81 = (x325>((x326!=x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1559720;
	int64_t x330 = 1LL;
	uint16_t x331 = 43U;
	int64_t x332 = -1LL;
	int32_t t82 = -4469209;

    t82 = (x329>((x330!=x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 117;

    t83 = (x333>((x334!=x335)^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = -1LL;
	int8_t x338 = -1;
	volatile int8_t x340 = -1;
	int32_t t84 = 1371754;

    t84 = (x337>((x338!=x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 10;
	static int32_t x343 = 90176472;
	int8_t x344 = -1;
	static int32_t t85 = -153572;

    t85 = (x341>((x342!=x343)^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	static uint64_t x346 = 1LLU;
	volatile int16_t x347 = -1;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 246717506;

    t86 = (x345>((x346!=x347)^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = UINT16_MAX;
	int32_t x351 = 43549102;
	volatile int32_t t87 = 1;

    t87 = (x349>((x350!=x351)^x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	int16_t x356 = -1;
	volatile int32_t t88 = -160;

    t88 = (x353>((x354!=x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = 2187;
	static int64_t x359 = -133879511738LL;
	volatile int32_t t89 = 0;

    t89 = (x357>((x358!=x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MIN;
	volatile int64_t x364 = -1LL;

    t90 = (x361>((x362!=x363)^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int64_t x367 = 325752608467475LL;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -40;

    t91 = (x365>((x366!=x367)^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -839;
	uint8_t x370 = 0U;
	uint8_t x371 = 27U;
	volatile int32_t t92 = 139353;

    t92 = (x369>((x370!=x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	static int32_t x374 = -5252;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 96U;

    t93 = (x373>((x374!=x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 837963798U;
	uint8_t x378 = UINT8_MAX;
	int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = 109;

    t94 = (x377>((x378!=x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -85270631LL;
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = 133699626LLU;
	uint16_t x384 = 2950U;
	volatile int32_t t95 = 6586;

    t95 = (x381>((x382!=x383)^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 11;
	int64_t x386 = 427LL;
	volatile int32_t x387 = -1;
	uint64_t x388 = 34783936100470600LLU;
	int32_t t96 = 48125;

    t96 = (x385>((x386!=x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 6650064U;
	uint8_t x392 = 1U;

    t97 = (x389>((x390!=x391)^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 34667671268680333LL;
	static uint32_t x395 = 11073U;
	volatile uint8_t x396 = 1U;
	int32_t t98 = 3015246;

    t98 = (x393>((x394!=x395)^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 465920115206LLU;
	static uint16_t x398 = 115U;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = UINT32_MAX;

    t99 = (x397>((x398!=x399)^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -1;
	volatile int32_t x403 = INT32_MIN;
	int32_t t100 = -29482196;

    t100 = (x401>((x402!=x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = UINT32_MAX;
	static uint8_t x407 = 31U;
	volatile int32_t t101 = 158366960;

    t101 = (x405>((x406!=x407)^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	volatile int32_t x410 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t102 = -3;

    t102 = (x409>((x410!=x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 0U;
	int8_t x414 = 0;
	int8_t x416 = INT8_MIN;

    t103 = (x413>((x414!=x415)^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MIN;
	static int16_t x420 = 0;
	volatile int32_t t104 = -3652709;

    t104 = (x417>((x418!=x419)^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -3;
	uint32_t x422 = 14772004U;
	static uint16_t x424 = 1U;
	volatile int32_t t105 = -448;

    t105 = (x421>((x422!=x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 13U;
	uint64_t x426 = 9946798033634229LLU;
	int8_t x427 = INT8_MAX;
	uint8_t x428 = UINT8_MAX;

    t106 = (x425>((x426!=x427)^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -25953937582128846LL;
	static volatile int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MIN;

    t107 = (x429>((x430!=x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MIN;
	static uint8_t x434 = 32U;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -7135319;

    t108 = (x433>((x434!=x435)^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x439 = INT8_MIN;
	volatile int32_t t109 = 1652002;

    t109 = (x437>((x438!=x439)^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x443 = 0;
	int8_t x444 = -1;
	volatile int32_t t110 = -664323222;

    t110 = (x441>((x442!=x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MIN;
	int8_t x446 = INT8_MIN;
	int64_t x447 = 78985285056096967LL;
	static volatile uint32_t x448 = UINT32_MAX;
	static int32_t t111 = -80;

    t111 = (x445>((x446!=x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x450 = 484U;
	static uint32_t x451 = UINT32_MAX;
	volatile int64_t x452 = INT64_MAX;

    t112 = (x449>((x450!=x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 1779734U;
	int8_t x454 = 11;
	int16_t x455 = INT16_MAX;
	int8_t x456 = 7;
	volatile int32_t t113 = 5;

    t113 = (x453>((x454!=x455)^x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = -47959LL;
	static volatile int32_t x458 = -1717;
	volatile uint16_t x459 = 2U;
	static int32_t t114 = 12;

    t114 = (x457>((x458!=x459)^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x462 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = 441939;

    t115 = (x461>((x462!=x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	int64_t x466 = -80680726471562102LL;
	uint64_t x467 = 246LLU;
	int32_t t116 = -71584083;

    t116 = (x465>((x466!=x467)^x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x472 = INT16_MIN;

    t117 = (x469>((x470!=x471)^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x474 = 14700182114LLU;
	uint16_t x475 = 591U;
	volatile int32_t t118 = 155;

    t118 = (x473>((x474!=x475)^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x478 = INT8_MIN;
	static int32_t x479 = 2907709;
	uint8_t x480 = 12U;
	volatile int32_t t119 = 424;

    t119 = (x477>((x478!=x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = -1;
	volatile int32_t t120 = 22134000;

    t120 = (x481>((x482!=x483)^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x485 = INT32_MIN;
	uint8_t x486 = 1U;
	int32_t x487 = -3014;
	int32_t x488 = INT32_MAX;
	static int32_t t121 = -134560;

    t121 = (x485>((x486!=x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = 12U;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = 1376;

    t122 = (x489>((x490!=x491)^x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	static int16_t x494 = -1;
	uint64_t x495 = 3573428912219445432LLU;
	uint16_t x496 = 1U;
	volatile int32_t t123 = -1;

    t123 = (x493>((x494!=x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	uint64_t x498 = 54263709466352986LLU;
	int32_t t124 = 4022;

    t124 = (x497>((x498!=x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 29150834798228LLU;
	int64_t x503 = 19010219343699LL;
	int16_t x504 = 65;

    t125 = (x501>((x502!=x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 7;
	int8_t x506 = -1;
	int32_t x507 = INT32_MIN;
	uint64_t x508 = 969284873LLU;
	int32_t t126 = -251291;

    t126 = (x505>((x506!=x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = -19322408;
	uint64_t x510 = UINT64_MAX;
	volatile uint64_t x511 = 4511158601273LLU;
	int32_t x512 = -1;
	static volatile int32_t t127 = 2;

    t127 = (x509>((x510!=x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x515 = 2012;
	int8_t x516 = -10;
	volatile int32_t t128 = -238;

    t128 = (x513>((x514!=x515)^x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 23949U;
	static volatile uint8_t x518 = 0U;
	uint32_t x519 = UINT32_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = 1;

    t129 = (x517>((x518!=x519)^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	int16_t x523 = -70;
	int64_t x524 = -1593LL;

    t130 = (x521>((x522!=x523)^x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x526 = 1111348785436351393LLU;
	static int32_t x527 = INT32_MAX;
	static int16_t x528 = INT16_MAX;
	int32_t t131 = 7356154;

    t131 = (x525>((x526!=x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x530 = 17U;
	volatile int8_t x532 = -20;
	volatile int32_t t132 = -6;

    t132 = (x529>((x530!=x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = INT64_MIN;
	int8_t x536 = -1;
	int32_t t133 = -77;

    t133 = (x533>((x534!=x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = 1343289690409LLU;
	int64_t x539 = INT64_MIN;
	volatile int32_t t134 = -1;

    t134 = (x537>((x538!=x539)^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = 57403399399094399LLU;
	int16_t x542 = -1;
	int8_t x543 = -2;
	static volatile int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 163179854;

    t135 = (x541>((x542!=x543)^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = 1447547476475026595LLU;
	uint32_t x546 = 15024U;
	int8_t x547 = INT8_MAX;
	static volatile uint32_t x548 = 0U;
	volatile int32_t t136 = -25778;

    t136 = (x545>((x546!=x547)^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = UINT32_MAX;
	volatile uint16_t x550 = 15U;
	uint64_t x551 = 1661514639770LLU;
	int8_t x552 = -1;
	int32_t t137 = -40719;

    t137 = (x549>((x550!=x551)^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x553 = 3U;
	volatile int64_t x555 = INT64_MIN;
	uint8_t x556 = UINT8_MAX;

    t138 = (x553>((x554!=x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 0U;
	volatile uint8_t x558 = 9U;
	int64_t x560 = INT64_MIN;

    t139 = (x557>((x558!=x559)^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 1742U;
	int16_t x562 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	volatile int32_t t140 = 2;

    t140 = (x561>((x562!=x563)^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 4U;
	int32_t x566 = 0;
	static int32_t x567 = 234;
	static volatile int32_t t141 = 6232;

    t141 = (x565>((x566!=x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	uint64_t x570 = 119666501281098LLU;
	volatile uint32_t x571 = UINT32_MAX;
	int16_t x572 = -6;
	static volatile int32_t t142 = 5033668;

    t142 = (x569>((x570!=x571)^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int32_t x574 = INT32_MIN;
	volatile int16_t x575 = 7;
	int8_t x576 = INT8_MAX;
	volatile int32_t t143 = 1972187;

    t143 = (x573>((x574!=x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 195303772;
	int64_t x578 = -5611560LL;
	uint32_t x579 = 19939U;
	static uint16_t x580 = 403U;

    t144 = (x577>((x578!=x579)^x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	uint8_t x582 = UINT8_MAX;
	int32_t x583 = -1;
	uint32_t x584 = 7540U;
	int32_t t145 = -19704;

    t145 = (x581>((x582!=x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 484121928LLU;
	int16_t x586 = -1;
	int64_t x588 = INT64_MIN;
	int32_t t146 = -65835;

    t146 = (x585>((x586!=x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 129331703782428LLU;
	int32_t x590 = -29016497;
	int32_t x591 = 179547669;
	static int16_t x592 = INT16_MIN;
	static volatile int32_t t147 = 17;

    t147 = (x589>((x590!=x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = 451U;
	volatile int16_t x595 = INT16_MIN;
	static volatile int32_t t148 = 455;

    t148 = (x593>((x594!=x595)^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = -1;
	volatile int8_t x598 = -6;
	static int32_t x600 = -14347198;
	static int32_t t149 = -26168;

    t149 = (x597>((x598!=x599)^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 5835LL;
	int8_t x602 = -10;
	uint32_t x603 = 753U;
	int16_t x604 = INT16_MIN;
	volatile int32_t t150 = -932388733;

    t150 = (x601>((x602!=x603)^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	uint64_t x606 = UINT64_MAX;
	uint32_t x607 = 8457465U;
	int16_t x608 = -15753;
	volatile int32_t t151 = 0;

    t151 = (x605>((x606!=x607)^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x609 = 464U;
	volatile int16_t x610 = INT16_MIN;
	static volatile int8_t x612 = 1;
	static volatile int32_t t152 = 20377101;

    t152 = (x609>((x610!=x611)^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MIN;
	int32_t t153 = 15074;

    t153 = (x613>((x614!=x615)^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x617 = UINT16_MAX;
	int64_t x618 = 4519706492834448LL;
	uint64_t x619 = UINT64_MAX;
	uint32_t x620 = 8436U;
	int32_t t154 = -32189519;

    t154 = (x617>((x618!=x619)^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x623 = -1LL;
	int8_t x624 = -1;

    t155 = (x621>((x622!=x623)^x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MIN;
	int16_t x628 = 3;
	int32_t t156 = -136762;

    t156 = (x625>((x626!=x627)^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 83U;
	uint16_t x630 = 62U;
	volatile uint32_t x632 = UINT32_MAX;
	int32_t t157 = -392278;

    t157 = (x629>((x630!=x631)^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 180189186363LLU;
	uint64_t x634 = 25425710415LLU;
	int16_t x635 = INT16_MIN;
	int32_t t158 = -11;

    t158 = (x633>((x634!=x635)^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	int8_t x638 = 3;
	static int8_t x639 = 1;
	uint64_t x640 = UINT64_MAX;
	static volatile int32_t t159 = -55583;

    t159 = (x637>((x638!=x639)^x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -20;
	int8_t x642 = -1;
	int64_t x643 = -108607377413LL;
	volatile int16_t x644 = INT16_MIN;
	static volatile int32_t t160 = -470;

    t160 = (x641>((x642!=x643)^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -759717150449642328LL;
	int64_t x646 = INT64_MIN;
	volatile int64_t x647 = -630636606697LL;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -35310;

    t161 = (x645>((x646!=x647)^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 2878LLU;
	uint64_t x650 = 196902043466555014LLU;
	int16_t x652 = -3694;
	volatile int32_t t162 = -588864744;

    t162 = (x649>((x650!=x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	int32_t x654 = INT32_MIN;
	int64_t x655 = 13064840114LL;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t163 = 29768;

    t163 = (x653>((x654!=x655)^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 9039784U;
	volatile int64_t x659 = INT64_MAX;
	static uint64_t x660 = UINT64_MAX;
	int32_t t164 = 140497937;

    t164 = (x657>((x658!=x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 919526778004LL;
	static int8_t x662 = INT8_MIN;
	static int8_t x663 = 1;
	int32_t x664 = -741912;
	int32_t t165 = -1;

    t165 = (x661>((x662!=x663)^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x666 = -1;
	int8_t x667 = -15;

    t166 = (x665>((x666!=x667)^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x671 = 45928U;
	uint64_t x672 = UINT64_MAX;
	static volatile int32_t t167 = -161;

    t167 = (x669>((x670!=x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	uint16_t x674 = 66U;
	int8_t x675 = -1;
	volatile int32_t t168 = -70328;

    t168 = (x673>((x674!=x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 1U;
	uint16_t x678 = 355U;
	static int32_t x679 = INT32_MAX;
	uint64_t x680 = 1046137LLU;
	volatile int32_t t169 = -890;

    t169 = (x677>((x678!=x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = INT32_MIN;
	uint32_t x683 = UINT32_MAX;
	volatile int32_t t170 = 1584784;

    t170 = (x681>((x682!=x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint8_t x686 = 108U;
	uint16_t x687 = 0U;
	int32_t t171 = -266569910;

    t171 = (x685>((x686!=x687)^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	volatile uint8_t x690 = UINT8_MAX;
	int32_t x691 = INT32_MAX;
	int32_t x692 = INT32_MAX;
	int32_t t172 = -1;

    t172 = (x689>((x690!=x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x696 = -595;
	int32_t t173 = 6220;

    t173 = (x693>((x694!=x695)^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 31180031278984LLU;
	int16_t x699 = -1;
	uint64_t x700 = 35038229628335LLU;
	volatile int32_t t174 = 143;

    t174 = (x697>((x698!=x699)^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x702 = INT32_MAX;
	int32_t x703 = -1;
	int16_t x704 = INT16_MAX;
	volatile int32_t t175 = 1580796;

    t175 = (x701>((x702!=x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 16LLU;
	static uint16_t x708 = 211U;

    t176 = (x705>((x706!=x707)^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 29636250428LLU;
	volatile int64_t x710 = INT64_MIN;
	int32_t x711 = -1;
	int32_t t177 = -206;

    t177 = (x709>((x710!=x711)^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 0;
	int16_t x714 = -2054;
	volatile int64_t x715 = INT64_MAX;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = -35;

    t178 = (x713>((x714!=x715)^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	int32_t x718 = INT32_MIN;
	volatile int32_t t179 = -7806719;

    t179 = (x717>((x718!=x719)^x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int64_t x722 = INT64_MIN;
	int32_t x723 = -1;
	uint16_t x724 = 17324U;
	volatile int32_t t180 = 3;

    t180 = (x721>((x722!=x723)^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = -1;
	uint32_t x726 = 251854U;
	static int64_t x727 = -417LL;
	volatile int8_t x728 = INT8_MIN;
	int32_t t181 = 20;

    t181 = (x725>((x726!=x727)^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x729 = 5U;
	int8_t x730 = INT8_MIN;
	uint64_t x731 = 123495056632261084LLU;
	uint8_t x732 = 22U;
	int32_t t182 = 68789;

    t182 = (x729>((x730!=x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x733 = 37935388198LLU;
	int16_t x734 = INT16_MAX;
	int32_t x736 = 137700175;
	static volatile int32_t t183 = -58097306;

    t183 = (x733>((x734!=x735)^x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = 51;
	int32_t x738 = INT32_MIN;
	static int16_t x739 = INT16_MIN;
	int64_t x740 = -1894334LL;
	int32_t t184 = -25046190;

    t184 = (x737>((x738!=x739)^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	volatile int8_t x742 = -1;
	int16_t x743 = -1;
	static int16_t x744 = INT16_MAX;
	volatile int32_t t185 = -16;

    t185 = (x741>((x742!=x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	uint8_t x746 = UINT8_MAX;
	static volatile int32_t x747 = INT32_MIN;
	int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -3205;

    t186 = (x745>((x746!=x747)^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -54078466029984LL;
	static int64_t x751 = 0LL;
	uint8_t x752 = 0U;
	static volatile int32_t t187 = -29399008;

    t187 = (x749>((x750!=x751)^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = INT16_MIN;
	int8_t x754 = INT8_MAX;
	int64_t x755 = INT64_MIN;
	static uint64_t x756 = 188786422393611179LLU;

    t188 = (x753>((x754!=x755)^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 42U;
	int16_t x758 = -1;
	static int16_t x759 = -1;
	volatile int16_t x760 = -19;
	static volatile int32_t t189 = 197603892;

    t189 = (x757>((x758!=x759)^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = INT8_MIN;
	uint8_t x763 = 60U;
	int8_t x764 = -1;
	volatile int32_t t190 = -11787;

    t190 = (x761>((x762!=x763)^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = 23;
	static uint32_t x766 = UINT32_MAX;
	int32_t t191 = 58462574;

    t191 = (x765>((x766!=x767)^x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	uint16_t x770 = UINT16_MAX;
	uint64_t x771 = 1312258787760431LLU;
	int16_t x772 = INT16_MAX;
	volatile int32_t t192 = 0;

    t192 = (x769>((x770!=x771)^x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = -3;
	int8_t x775 = INT8_MIN;
	static uint64_t x776 = 473LLU;
	volatile int32_t t193 = -234450897;

    t193 = (x773>((x774!=x775)^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 32U;
	uint16_t x778 = 235U;
	uint16_t x779 = 29U;
	int32_t t194 = 279112;

    t194 = (x777>((x778!=x779)^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	static uint8_t x782 = UINT8_MAX;
	uint32_t x783 = 72803U;
	uint8_t x784 = UINT8_MAX;
	volatile int32_t t195 = 0;

    t195 = (x781>((x782!=x783)^x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = -1;
	static volatile uint64_t x787 = 21963004049LLU;
	volatile int32_t t196 = 87666090;

    t196 = (x785>((x786!=x787)^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	uint64_t x790 = 170557706182LLU;

    t197 = (x789>((x790!=x791)^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = 7;
	static int64_t x796 = 798258445202247944LL;

    t198 = (x793>((x794!=x795)^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	int32_t x798 = -161394428;
	int8_t x800 = INT8_MIN;
	int32_t t199 = 4;

    t199 = (x797>((x798!=x799)^x800));

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

