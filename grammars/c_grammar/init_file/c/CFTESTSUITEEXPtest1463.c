
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

int32_t x3 = -1;
uint64_t x6 = UINT64_MAX;
int64_t x10 = INT64_MIN;
int16_t x16 = -1;
int32_t t3 = -15;
int64_t x18 = -1LL;
uint32_t x19 = 38094U;
volatile int32_t t5 = 28360;
int64_t x26 = -1LL;
int8_t x27 = INT8_MAX;
int64_t x33 = INT64_MIN;
int8_t x39 = 1;
int32_t x40 = -354376;
int32_t x42 = 18196661;
static volatile int32_t t12 = -248108101;
static uint32_t x57 = 48U;
int32_t x64 = INT32_MAX;
int32_t x68 = INT32_MIN;
volatile int32_t t16 = 394686077;
static volatile int32_t t17 = 1;
int16_t x73 = INT16_MAX;
static int64_t x79 = -1LL;
int32_t t19 = -1;
uint32_t x82 = UINT32_MAX;
int32_t t21 = -45830;
volatile uint64_t x96 = UINT64_MAX;
volatile int8_t x97 = INT8_MIN;
static int8_t x100 = INT8_MIN;
static int64_t x106 = INT64_MIN;
static int32_t x108 = 11329;
volatile int64_t x110 = -6692167461776LL;
int64_t x115 = -497169972345LL;
int32_t t29 = -1038;
uint32_t x121 = 1420807091U;
static volatile uint16_t x127 = UINT16_MAX;
volatile int16_t x139 = INT16_MIN;
int32_t x142 = 374101;
uint16_t x146 = 1315U;
int8_t x147 = -3;
uint32_t x148 = 52289932U;
static int64_t x150 = INT64_MIN;
volatile int16_t x156 = INT16_MIN;
uint32_t x170 = UINT32_MAX;
int64_t x181 = -1LL;
int64_t x187 = INT64_MIN;
int64_t x191 = 787LL;
uint8_t x195 = 9U;
int64_t x196 = INT64_MIN;
volatile int64_t x202 = INT64_MIN;
uint16_t x204 = 352U;
uint64_t x206 = 211439784444LLU;
static volatile uint16_t x208 = 2U;
uint32_t x209 = 112U;
volatile uint64_t x216 = UINT64_MAX;
volatile int64_t x223 = INT64_MIN;
volatile uint16_t x225 = UINT16_MAX;
static uint64_t x228 = 1558871718123621481LLU;
uint16_t x230 = 1372U;
int8_t x245 = INT8_MAX;
volatile uint8_t x252 = 11U;
volatile int32_t x261 = INT32_MAX;
volatile int32_t t65 = 1;
volatile int32_t t66 = 1668941;
int16_t x280 = INT16_MIN;
int32_t t69 = 697383;
int8_t x283 = INT8_MIN;
volatile int32_t t70 = -109144603;
uint16_t x286 = 16728U;
int8_t x288 = 3;
int64_t x290 = INT64_MIN;
uint64_t x303 = UINT64_MAX;
volatile int32_t x305 = INT32_MIN;
volatile int32_t t78 = 730112197;
int64_t x317 = -1LL;
static volatile int32_t x318 = 6;
static int64_t x319 = INT64_MAX;
int8_t x320 = INT8_MIN;
static int64_t x323 = INT64_MAX;
int8_t x325 = -1;
volatile int16_t x334 = INT16_MIN;
int32_t x337 = -1;
int64_t x343 = INT64_MIN;
volatile int32_t t86 = -2934154;
volatile int8_t x349 = INT8_MIN;
int16_t x351 = INT16_MAX;
volatile int8_t x360 = -7;
static int64_t x364 = 15589054LL;
static volatile int32_t t91 = 31125526;
uint8_t x369 = UINT8_MAX;
int8_t x379 = 4;
volatile int32_t t94 = -1;
int16_t x381 = INT16_MIN;
int16_t x382 = -160;
int8_t x386 = -1;
int16_t x388 = INT16_MIN;
uint32_t x395 = 1546485631U;
int16_t x398 = INT16_MIN;
static int32_t x410 = 10007094;
int32_t x416 = INT32_MIN;
volatile uint64_t x421 = 2867009LLU;
static int8_t x423 = 12;
static uint8_t x427 = 3U;
volatile int8_t x440 = 13;
uint16_t x456 = 7U;
static uint32_t x458 = 1219155U;
static int32_t x459 = -254102;
int16_t x461 = 3612;
volatile uint8_t x463 = 15U;
static int32_t x464 = 417174062;
int32_t t115 = -1;
int16_t x468 = INT16_MAX;
int64_t x476 = INT64_MIN;
int16_t x479 = -1484;
volatile int8_t x480 = INT8_MIN;
volatile int32_t t121 = -22240;
int32_t x495 = -1;
int8_t x497 = 4;
static volatile int32_t x498 = INT32_MAX;
uint32_t x510 = UINT32_MAX;
int16_t x511 = INT16_MIN;
static uint64_t x522 = UINT64_MAX;
int32_t t131 = 7;
int64_t x529 = -1LL;
volatile int64_t x534 = 217956351716LL;
static int32_t x539 = INT32_MIN;
static int64_t x540 = INT64_MIN;
int32_t t134 = -6608;
int8_t x547 = INT8_MIN;
int32_t t136 = -3666;
volatile int64_t x551 = -649568LL;
int16_t x554 = INT16_MIN;
volatile int32_t t138 = 24557;
int16_t x560 = INT16_MAX;
volatile int32_t x562 = -1814246;
volatile int32_t t141 = 7588775;
int8_t x569 = INT8_MIN;
static int64_t x577 = INT64_MAX;
int32_t x581 = INT32_MAX;
int8_t x583 = INT8_MIN;
uint64_t x586 = 499333LLU;
static volatile uint64_t x587 = 2663LLU;
int8_t x593 = -1;
static int8_t x595 = 2;
uint64_t x606 = 1028LLU;
int16_t x621 = INT16_MIN;
int64_t x626 = INT64_MIN;
uint32_t x628 = 29047524U;
uint8_t x629 = 114U;
int16_t x636 = -1;
static volatile uint64_t x639 = 120459LLU;
volatile uint16_t x641 = UINT16_MAX;
uint64_t x644 = UINT64_MAX;
volatile int32_t t161 = -126526;
static int64_t x651 = INT64_MIN;
volatile int32_t t162 = -43363;
int64_t x664 = INT64_MAX;
int16_t x667 = INT16_MAX;
int8_t x668 = -1;
uint16_t x680 = 26U;
int64_t x684 = -2614721639379242LL;
int32_t x687 = INT32_MIN;
int32_t t171 = 27772161;
uint16_t x692 = 26U;
volatile int32_t x693 = INT32_MAX;
int32_t x698 = INT32_MIN;
static volatile int32_t t176 = 249;
int8_t x709 = INT8_MIN;
int64_t x720 = INT64_MAX;
int32_t t179 = -280;
volatile int32_t t181 = 12641;
int32_t t182 = -1;
static int32_t x736 = 201700;
uint64_t x737 = 76311069747LLU;
volatile uint16_t x744 = 6594U;
volatile int16_t x757 = INT16_MIN;
int8_t x758 = -11;
static int32_t t189 = -939941456;
int32_t x771 = -1;
int32_t t192 = -266722810;
int8_t x773 = INT8_MAX;
volatile int8_t x775 = INT8_MAX;
int8_t x782 = INT8_MIN;
int32_t t196 = -1194934;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	uint16_t x2 = 1U;
	static uint64_t x4 = 60886746827606LLU;
	int32_t t0 = 15;

    t0 = (x1!=((x2==x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 460654132U;
	static volatile int32_t t1 = -226;

    t1 = (x5!=((x6==x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint32_t x11 = 720121739U;
	int16_t x12 = -11729;
	int32_t t2 = -12508;

    t2 = (x9!=((x10==x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 262311241U;
	static int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;

    t3 = (x13!=((x14==x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -3;

    t4 = (x17!=((x18==x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = -26;
	uint64_t x24 = 890999983423LLU;

    t5 = (x21!=((x22==x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x28 = 79149624U;
	volatile int32_t t6 = -107488;

    t6 = (x25!=((x26==x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint64_t x30 = 321435265684920128LLU;
	int8_t x31 = INT8_MAX;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = 27;

    t7 = (x29!=((x30==x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = 7971LL;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = 106533;

    t8 = (x33!=((x34==x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	int64_t x38 = -1LL;
	volatile int32_t t9 = 1;

    t9 = (x37!=((x38==x39)!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 423213U;
	static uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -1;
	static int32_t t10 = 3;

    t10 = (x41!=((x42==x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	int64_t x46 = -3LL;
	static int32_t x47 = -71888;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = -1682;

    t11 = (x45!=((x46==x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	static int8_t x50 = INT8_MIN;
	uint64_t x51 = 317430LLU;
	uint32_t x52 = UINT32_MAX;

    t12 = (x49!=((x50==x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	static int16_t x54 = 7;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 4U;
	volatile int32_t t13 = 1939;

    t13 = (x53!=((x54==x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 0;

    t14 = (x57!=((x58==x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	volatile uint32_t x62 = 10763777U;
	static int8_t x63 = -1;
	static int32_t t15 = -25054;

    t15 = (x61!=((x62==x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MAX;
	uint8_t x67 = UINT8_MAX;

    t16 = (x65!=((x66==x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 25U;
	static int8_t x70 = -1;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MAX;

    t17 = (x69!=((x70==x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -4;
	volatile int8_t x75 = INT8_MIN;
	uint8_t x76 = 6U;
	int32_t t18 = 452206607;

    t18 = (x73!=((x74==x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MAX;
	volatile uint8_t x80 = 8U;

    t19 = (x77!=((x78==x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 275958;

    t20 = (x81!=((x82==x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 10768LL;
	int16_t x86 = 2255;
	uint32_t x87 = 38U;
	int32_t x88 = INT32_MIN;

    t21 = (x85!=((x86==x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = -66;

    t22 = (x89!=((x90==x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	int8_t x94 = INT8_MIN;
	volatile int8_t x95 = INT8_MAX;
	int32_t t23 = 5481;

    t23 = (x93!=((x94==x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MIN;
	uint32_t x99 = 20U;
	volatile int32_t t24 = 0;

    t24 = (x97!=((x98==x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int32_t x102 = -1;
	static volatile uint16_t x103 = 15428U;
	int16_t x104 = 235;
	volatile int32_t t25 = -1;

    t25 = (x101!=((x102==x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	static uint64_t x107 = 5LLU;
	volatile int32_t t26 = -1213936;

    t26 = (x105!=((x106==x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = 30;
	static uint16_t x111 = 1U;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 80;

    t27 = (x109!=((x110==x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 14U;
	int32_t x114 = 0;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = 31;

    t28 = (x113!=((x114==x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static uint16_t x119 = 550U;
	volatile int32_t x120 = INT32_MIN;

    t29 = (x117!=((x118==x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x122 = 49438095U;
	int64_t x123 = -24LL;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = 2;

    t30 = (x121!=((x122==x123)!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	volatile int16_t x126 = -1;
	volatile int64_t x128 = -66785428090LL;
	int32_t t31 = 218655444;

    t31 = (x125!=((x126==x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = -1;
	volatile int64_t x130 = -1LL;
	uint16_t x131 = UINT16_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	static int32_t t32 = -1108690;

    t32 = (x129!=((x130==x131)!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = -1268;
	int16_t x136 = -7;
	static int32_t t33 = -176920;

    t33 = (x133!=((x134==x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 827735U;
	volatile int16_t x138 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	int32_t t34 = 5;

    t34 = (x137!=((x138==x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = 1;
	uint16_t x143 = 7398U;
	volatile int16_t x144 = INT16_MAX;
	static volatile int32_t t35 = 0;

    t35 = (x141!=((x142==x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	volatile int32_t t36 = 50141721;

    t36 = (x145!=((x146==x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 1U;
	int8_t x151 = INT8_MIN;
	int16_t x152 = -162;
	int32_t t37 = -8276362;

    t37 = (x149!=((x150==x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = 1;
	int16_t x154 = INT16_MIN;
	uint16_t x155 = 3U;
	static int32_t t38 = 673474;

    t38 = (x153!=((x154==x155)!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 55U;
	volatile int64_t x158 = 4133811470684LL;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -1;
	volatile int32_t t39 = -19912658;

    t39 = (x157!=((x158==x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 238654153;
	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = 15484U;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = 526813375;

    t40 = (x161!=((x162==x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	int8_t x166 = 0;
	uint8_t x167 = 90U;
	uint8_t x168 = 89U;
	volatile int32_t t41 = -680467281;

    t41 = (x165!=((x166==x167)!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	uint16_t x171 = 1U;
	int32_t x172 = -1;
	int32_t t42 = -3745501;

    t42 = (x169!=((x170==x171)!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x173 = 0U;
	int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MAX;
	volatile uint32_t x176 = 17029105U;
	int32_t t43 = -7;

    t43 = (x173!=((x174==x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	static int32_t x178 = -16019084;
	static int16_t x179 = 0;
	volatile uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = -643;

    t44 = (x177!=((x178==x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = -1;
	static int32_t t45 = 8730;

    t45 = (x181!=((x182==x183)!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int16_t x186 = INT16_MAX;
	static volatile int16_t x188 = -7919;
	volatile int32_t t46 = -626936008;

    t46 = (x185!=((x186==x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MAX;
	volatile uint64_t x190 = 128556254838011349LLU;
	static int64_t x192 = INT64_MIN;
	int32_t t47 = 8496821;

    t47 = (x189!=((x190==x191)!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = 0LL;
	int64_t x194 = INT64_MIN;
	volatile int32_t t48 = 123428;

    t48 = (x193!=((x194==x195)!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 3691U;
	int32_t x198 = INT32_MIN;
	static volatile int8_t x199 = INT8_MAX;
	int32_t x200 = -28440;
	int32_t t49 = -1408211;

    t49 = (x197!=((x198==x199)!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 121630U;
	uint8_t x203 = UINT8_MAX;
	static int32_t t50 = 3891;

    t50 = (x201!=((x202==x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 2795769174LLU;
	int8_t x207 = -1;
	int32_t t51 = 18175;

    t51 = (x205!=((x206==x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -17798190505LL;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 1;

    t52 = (x209!=((x210==x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = 634747231498749127LLU;
	int64_t x214 = 5022694183195LL;
	int64_t x215 = INT64_MIN;
	int32_t t53 = 24691;

    t53 = (x213!=((x214==x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x217 = -14;
	uint32_t x218 = 4363U;
	int32_t x219 = INT32_MAX;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -8065309;

    t54 = (x217!=((x218==x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x221 = UINT64_MAX;
	static int64_t x222 = -1LL;
	int32_t x224 = -98133;
	int32_t t55 = -1;

    t55 = (x221!=((x222==x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = INT64_MAX;
	volatile uint8_t x227 = UINT8_MAX;
	int32_t t56 = 92203;

    t56 = (x225!=((x226==x227)!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	volatile int16_t x231 = -170;
	int64_t x232 = -8LL;
	int32_t t57 = -32237068;

    t57 = (x229!=((x230==x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MIN;
	static int32_t x235 = -114;
	int16_t x236 = -54;
	volatile int32_t t58 = 0;

    t58 = (x233!=((x234==x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = 491989;
	int8_t x238 = INT8_MAX;
	static int16_t x239 = 3;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = 189;

    t59 = (x237!=((x238==x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x241 = INT32_MAX;
	static int64_t x242 = INT64_MIN;
	volatile uint16_t x243 = 2U;
	uint16_t x244 = 3285U;
	static int32_t t60 = 0;

    t60 = (x241!=((x242==x243)!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x246 = 14264LLU;
	uint16_t x247 = 5975U;
	int8_t x248 = 11;
	static int32_t t61 = 6;

    t61 = (x245!=((x246==x247)!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 107U;
	int32_t x250 = INT32_MAX;
	static int32_t x251 = INT32_MIN;
	int32_t t62 = 3644;

    t62 = (x249!=((x250==x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 59U;
	volatile int64_t x254 = 32683928LL;
	uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -1157965;

    t63 = (x253!=((x254==x255)!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x257 = 4U;
	static int8_t x258 = -30;
	int16_t x259 = 35;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 1;

    t64 = (x257!=((x258==x259)!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x262 = -1LL;
	static int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MIN;

    t65 = (x261!=((x262==x263)!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = 1644U;
	uint64_t x268 = 12695531881320924LLU;

    t66 = (x265!=((x266==x267)!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	volatile uint64_t x270 = 3694LLU;
	static uint16_t x271 = UINT16_MAX;
	int8_t x272 = -1;
	int32_t t67 = 814;

    t67 = (x269!=((x270==x271)!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 2;
	int8_t x274 = -7;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 0;
	volatile int32_t t68 = -54;

    t68 = (x273!=((x274==x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = 12806908;
	uint8_t x279 = 3U;

    t69 = (x277!=((x278==x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = -9325164;
	uint32_t x282 = UINT32_MAX;
	uint32_t x284 = UINT32_MAX;

    t70 = (x281!=((x282==x283)!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	volatile int8_t x287 = INT8_MAX;
	int32_t t71 = 936301280;

    t71 = (x285!=((x286==x287)!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = INT32_MAX;
	uint32_t x291 = 3274908U;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -203075251;

    t72 = (x289!=((x290==x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 559271803LLU;
	static uint8_t x294 = 17U;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 1009U;
	int32_t t73 = 1599620;

    t73 = (x293!=((x294==x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 1;
	int64_t x298 = -1LL;
	int8_t x299 = 6;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -898085019;

    t74 = (x297!=((x298==x299)!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 8432LLU;
	static int8_t x302 = INT8_MIN;
	static volatile uint32_t x304 = 9U;
	int32_t t75 = 28354;

    t75 = (x301!=((x302==x303)!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = 13U;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 2244;

    t76 = (x305!=((x306==x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 22U;
	volatile int32_t x310 = INT32_MIN;
	volatile uint32_t x311 = 613U;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t77 = 31;

    t77 = (x309!=((x310==x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = -1;
	int64_t x314 = INT64_MIN;
	uint16_t x315 = 1U;
	static uint64_t x316 = 11671256LLU;

    t78 = (x313!=((x314==x315)!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t t79 = -1;

    t79 = (x317!=((x318==x319)!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = 1U;
	volatile int8_t x324 = 0;
	volatile int32_t t80 = -506;

    t80 = (x321!=((x322==x323)!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	volatile int32_t t81 = -35105;

    t81 = (x325!=((x326==x327)!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int64_t x330 = -48765LL;
	static uint32_t x331 = UINT32_MAX;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = -246226564;

    t82 = (x329!=((x330==x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 5;
	uint64_t x335 = 391LLU;
	uint8_t x336 = 96U;
	int32_t t83 = -7333;

    t83 = (x333!=((x334==x335)!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = -3;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 635;
	int32_t t84 = 203113;

    t84 = (x337!=((x338==x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x341 = 3727061142LLU;
	volatile uint64_t x342 = 268492455030988LLU;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 77681047;

    t85 = (x341!=((x342==x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -102;
	int8_t x346 = INT8_MIN;
	static volatile uint16_t x347 = 5U;
	volatile uint8_t x348 = UINT8_MAX;

    t86 = (x345!=((x346==x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MAX;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t87 = -5957;

    t87 = (x349!=((x350==x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 1;
	uint8_t x354 = 0U;
	static uint16_t x355 = 4739U;
	volatile int8_t x356 = 0;
	int32_t t88 = -1;

    t88 = (x353!=((x354==x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	int16_t x359 = INT16_MIN;
	int32_t t89 = -44457;

    t89 = (x357!=((x358==x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	int8_t x362 = -1;
	static uint16_t x363 = 533U;
	int32_t t90 = -2;

    t90 = (x361!=((x362==x363)!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -346211615;
	int32_t x366 = INT32_MIN;
	int32_t x367 = -1;
	static int32_t x368 = -28;

    t91 = (x365!=((x366==x367)!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = INT8_MIN;
	int32_t x371 = 21027;
	volatile int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -193352;

    t92 = (x369!=((x370==x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 5U;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	int16_t x376 = 2;
	volatile int32_t t93 = 88;

    t93 = (x373!=((x374==x375)!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	volatile int32_t x378 = -1;
	uint32_t x380 = UINT32_MAX;

    t94 = (x377!=((x378==x379)!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x383 = INT32_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -4861;

    t95 = (x381!=((x382==x383)!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	int8_t x387 = -1;
	volatile int32_t t96 = -951647882;

    t96 = (x385!=((x386==x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 2U;
	static uint64_t x390 = 15651342722488LLU;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	int32_t t97 = -122546332;

    t97 = (x389!=((x390==x391)!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	uint32_t x394 = 7U;
	volatile int64_t x396 = -1LL;
	volatile int32_t t98 = 5;

    t98 = (x393!=((x394==x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 3U;
	uint64_t x399 = 488LLU;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t99 = -38568;

    t99 = (x397!=((x398==x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = UINT16_MAX;
	int16_t x402 = -166;
	int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = -824428;

    t100 = (x401!=((x402==x403)!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = UINT16_MAX;
	static int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	uint8_t x408 = UINT8_MAX;
	static volatile int32_t t101 = -20;

    t101 = (x405!=((x406==x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 120U;
	uint16_t x411 = 27117U;
	static volatile int8_t x412 = -1;
	volatile int32_t t102 = 483;

    t102 = (x409!=((x410==x411)!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	int32_t t103 = 1015480163;

    t103 = (x413!=((x414==x415)!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = 46;
	uint8_t x418 = 27U;
	volatile int8_t x419 = INT8_MIN;
	int64_t x420 = 1450057LL;
	static int32_t t104 = 909699;

    t104 = (x417!=((x418==x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = 407384570593104183LL;
	int32_t x424 = -1;
	int32_t t105 = -51932;

    t105 = (x421!=((x422==x423)!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = -14469;
	int32_t x426 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	volatile int32_t t106 = 14807;

    t106 = (x425!=((x426==x427)!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -52;
	volatile int64_t x430 = INT64_MAX;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MAX;
	static volatile int32_t t107 = -814;

    t107 = (x429!=((x430==x431)!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MAX;
	int32_t x434 = -32;
	int16_t x435 = 5430;
	int8_t x436 = INT8_MAX;
	volatile int32_t t108 = -56826;

    t108 = (x433!=((x434==x435)!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	uint8_t x438 = 2U;
	uint16_t x439 = 115U;
	volatile int32_t t109 = -29706077;

    t109 = (x437!=((x438==x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x441 = -1LL;
	int8_t x442 = -1;
	volatile uint32_t x443 = 6135880U;
	volatile int64_t x444 = INT64_MAX;
	int32_t t110 = 28786;

    t110 = (x441!=((x442==x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	int32_t x446 = 215;
	int8_t x447 = -7;
	static int32_t x448 = INT32_MIN;
	int32_t t111 = -7313243;

    t111 = (x445!=((x446==x447)!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MIN;
	int32_t t112 = -2643;

    t112 = (x449!=((x450==x451)!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	int16_t x454 = INT16_MAX;
	int64_t x455 = -1LL;
	static volatile int32_t t113 = 4428;

    t113 = (x453!=((x454==x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint8_t x460 = 40U;
	volatile int32_t t114 = -4782;

    t114 = (x457!=((x458==x459)!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = 2;

    t115 = (x461!=((x462==x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = -3201546027727097LL;
	static int64_t x466 = -1LL;
	volatile uint32_t x467 = 144646U;
	volatile int32_t t116 = -48;

    t116 = (x465!=((x466==x467)!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 49;
	int8_t x470 = INT8_MIN;
	static uint8_t x471 = 2U;
	volatile int16_t x472 = INT16_MIN;
	int32_t t117 = -2839;

    t117 = (x469!=((x470==x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 27283488U;
	static int64_t x474 = INT64_MAX;
	uint16_t x475 = 315U;
	volatile int32_t t118 = 489;

    t118 = (x473!=((x474==x475)!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 5749U;
	static uint64_t x478 = UINT64_MAX;
	static int32_t t119 = 7288712;

    t119 = (x477!=((x478==x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 2081LLU;
	int8_t x482 = 2;
	int32_t x483 = -1;
	int8_t x484 = 1;
	int32_t t120 = -111075687;

    t120 = (x481!=((x482==x483)!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 122U;
	volatile int16_t x486 = INT16_MAX;
	int16_t x487 = INT16_MAX;
	volatile uint16_t x488 = 1259U;

    t121 = (x485!=((x486==x487)!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -7536840;
	static int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MIN;
	static uint64_t x492 = 75209569LLU;
	volatile int32_t t122 = -475077;

    t122 = (x489!=((x490==x491)!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint32_t x494 = 51U;
	int32_t x496 = INT32_MIN;
	volatile int32_t t123 = 6;

    t123 = (x493!=((x494==x495)!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x499 = 95U;
	int64_t x500 = 0LL;
	volatile int32_t t124 = 713166;

    t124 = (x497!=((x498==x499)!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = -1LL;
	static int64_t x502 = 89187187753495LL;
	static uint8_t x503 = UINT8_MAX;
	uint32_t x504 = 113U;
	volatile int32_t t125 = 126;

    t125 = (x501!=((x502==x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 9328U;
	static uint16_t x506 = 353U;
	int8_t x507 = -1;
	int16_t x508 = -4300;
	int32_t t126 = 2578111;

    t126 = (x505!=((x506==x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 84050736355528144LL;
	uint64_t x512 = UINT64_MAX;
	int32_t t127 = -3552;

    t127 = (x509!=((x510==x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x513 = 380636992297184150LLU;
	static int32_t x514 = -198547592;
	uint64_t x515 = 26LLU;
	int16_t x516 = -1;
	volatile int32_t t128 = -244896317;

    t128 = (x513!=((x514==x515)!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 6U;
	volatile uint16_t x518 = UINT16_MAX;
	static uint32_t x519 = 274141U;
	int8_t x520 = INT8_MIN;
	static volatile int32_t t129 = 29071;

    t129 = (x517!=((x518==x519)!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	volatile int16_t x523 = INT16_MIN;
	uint32_t x524 = UINT32_MAX;
	volatile int32_t t130 = 8126;

    t130 = (x521!=((x522==x523)!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = UINT32_MAX;
	int64_t x526 = INT64_MAX;
	int16_t x527 = 48;
	int16_t x528 = 5;

    t131 = (x525!=((x526==x527)!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x530 = -59875129;
	volatile int16_t x531 = -1;
	static volatile int32_t x532 = INT32_MIN;
	volatile int32_t t132 = -27118737;

    t132 = (x529!=((x530==x531)!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 2151427103LLU;
	volatile uint32_t x535 = UINT32_MAX;
	uint64_t x536 = 528731518LLU;
	int32_t t133 = 107291722;

    t133 = (x533!=((x534==x535)!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -728;
	int32_t x538 = -7;

    t134 = (x537!=((x538==x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MIN;
	uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MIN;
	static int8_t x544 = 4;
	int32_t t135 = 412049094;

    t135 = (x541!=((x542==x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x546 = -842;
	static int8_t x548 = 9;

    t136 = (x545!=((x546==x547)!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	volatile int64_t x550 = INT64_MIN;
	uint16_t x552 = UINT16_MAX;
	static volatile int32_t t137 = 526909;

    t137 = (x549!=((x550==x551)!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -1;
	int32_t x555 = INT32_MIN;
	volatile int32_t x556 = 0;

    t138 = (x553!=((x554==x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = INT16_MAX;
	int64_t x558 = INT64_MIN;
	volatile int32_t x559 = -176196;
	int32_t t139 = 5606046;

    t139 = (x557!=((x558==x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -41;
	int32_t x563 = INT32_MIN;
	uint64_t x564 = UINT64_MAX;
	int32_t t140 = -7384533;

    t140 = (x561!=((x562==x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int64_t x566 = -136895LL;
	uint8_t x567 = UINT8_MAX;
	static volatile int8_t x568 = -1;

    t141 = (x565!=((x566==x567)!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -338083571LL;
	int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MIN;
	volatile int32_t t142 = -43;

    t142 = (x569!=((x570==x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 4U;
	int16_t x574 = -91;
	volatile int32_t x575 = 122789626;
	uint64_t x576 = 3890LLU;
	int32_t t143 = 154;

    t143 = (x573!=((x574==x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x578 = INT32_MIN;
	int32_t x579 = 49728967;
	static uint64_t x580 = 7LLU;
	int32_t t144 = 516598;

    t144 = (x577!=((x578==x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = INT32_MIN;
	volatile uint8_t x584 = 3U;
	static int32_t t145 = 28024895;

    t145 = (x581!=((x582==x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	uint64_t x588 = 527982463LLU;
	int32_t t146 = -395757;

    t146 = (x585!=((x586==x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x589 = INT16_MIN;
	int64_t x590 = INT64_MIN;
	int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MAX;
	volatile int32_t t147 = 250224;

    t147 = (x589!=((x590==x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = -1LL;
	int8_t x596 = INT8_MAX;
	volatile int32_t t148 = -1729496;

    t148 = (x593!=((x594==x595)!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 5U;
	int8_t x598 = -7;
	volatile int32_t x599 = INT32_MIN;
	static volatile int16_t x600 = INT16_MIN;
	int32_t t149 = 119866;

    t149 = (x597!=((x598==x599)!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = -1;
	static volatile int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MIN;
	volatile int32_t t150 = -7530;

    t150 = (x601!=((x602==x603)!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 185162614167038867LLU;
	int32_t x607 = 13;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = 123975960;

    t151 = (x605!=((x606==x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	uint32_t x610 = 29U;
	int16_t x611 = INT16_MAX;
	volatile uint16_t x612 = UINT16_MAX;
	int32_t t152 = 203583793;

    t152 = (x609!=((x610==x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int32_t x614 = -1;
	uint64_t x615 = UINT64_MAX;
	int64_t x616 = -1LL;
	volatile int32_t t153 = 16;

    t153 = (x613!=((x614==x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x617 = -3827971;
	int64_t x618 = INT64_MIN;
	int32_t x619 = INT32_MIN;
	volatile uint32_t x620 = 6U;
	static volatile int32_t t154 = 78;

    t154 = (x617!=((x618==x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = -227;
	volatile uint32_t x623 = 1102502042U;
	static volatile uint32_t x624 = 51U;
	int32_t t155 = 144956270;

    t155 = (x621!=((x622==x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	uint8_t x627 = 2U;
	int32_t t156 = 15778;

    t156 = (x625!=((x626==x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x630 = -1;
	int32_t x631 = INT32_MAX;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t157 = 97160085;

    t157 = (x629!=((x630==x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 103987698U;
	uint16_t x634 = 4U;
	int16_t x635 = 4;
	int32_t t158 = -7256039;

    t158 = (x633!=((x634==x635)!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	static int8_t x638 = INT8_MIN;
	uint32_t x640 = 967955U;
	static int32_t t159 = 75714520;

    t159 = (x637!=((x638==x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = UINT8_MAX;
	int16_t x643 = 1;
	static volatile int32_t t160 = 2155;

    t160 = (x641!=((x642==x643)!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 214966687388405449LLU;
	int8_t x646 = INT8_MIN;
	int64_t x647 = INT64_MAX;
	int32_t x648 = -7992;

    t161 = (x645!=((x646==x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 491469949LLU;
	uint64_t x650 = UINT64_MAX;
	uint16_t x652 = 9285U;

    t162 = (x649!=((x650==x651)!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 49072362812834176LL;
	volatile int8_t x654 = 29;
	int8_t x655 = INT8_MIN;
	int16_t x656 = -1;
	int32_t t163 = -122638155;

    t163 = (x653!=((x654==x655)!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x657 = INT32_MIN;
	int16_t x658 = -1065;
	static int8_t x659 = INT8_MIN;
	int16_t x660 = -1;
	volatile int32_t t164 = -619849515;

    t164 = (x657!=((x658==x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int8_t x662 = 19;
	uint8_t x663 = 38U;
	int32_t t165 = 27620971;

    t165 = (x661!=((x662==x663)!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x665 = 2U;
	volatile uint32_t x666 = UINT32_MAX;
	int32_t t166 = 210234727;

    t166 = (x665!=((x666==x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	static int32_t x670 = INT32_MAX;
	static volatile uint8_t x671 = UINT8_MAX;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t167 = -98236;

    t167 = (x669!=((x670==x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MAX;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -1LL;
	int64_t x676 = -4618932227737LL;
	volatile int32_t t168 = 1;

    t168 = (x673!=((x674==x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 2U;
	volatile int16_t x678 = INT16_MIN;
	uint64_t x679 = 34808LLU;
	int32_t t169 = -812362;

    t169 = (x677!=((x678==x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	int32_t x682 = INT32_MIN;
	volatile int32_t x683 = -1;
	volatile int32_t t170 = 26986980;

    t170 = (x681!=((x682==x683)!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	int16_t x686 = INT16_MAX;
	static int16_t x688 = INT16_MIN;

    t171 = (x685!=((x686==x687)!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 38U;
	int16_t x690 = -2925;
	uint32_t x691 = 34U;
	int32_t t172 = 15969;

    t172 = (x689!=((x690==x691)!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = 16U;
	int64_t x695 = INT64_MIN;
	int64_t x696 = -4136418142146LL;
	static int32_t t173 = -34852;

    t173 = (x693!=((x694==x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int8_t x699 = -1;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t174 = -2101;

    t174 = (x697!=((x698==x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	int32_t x702 = INT32_MIN;
	uint16_t x703 = UINT16_MAX;
	volatile int64_t x704 = 2891127577073LL;
	volatile int32_t t175 = -528944;

    t175 = (x701!=((x702==x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = 32476207U;
	int32_t x706 = -2484;
	int16_t x707 = 1;
	volatile int32_t x708 = -1;

    t176 = (x705!=((x706==x707)!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -16706292329LL;
	static int64_t x711 = INT64_MIN;
	int8_t x712 = -1;
	static volatile int32_t t177 = -33771142;

    t177 = (x709!=((x710==x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int32_t x714 = INT32_MAX;
	int64_t x715 = -1LL;
	volatile uint64_t x716 = 57LLU;
	volatile int32_t t178 = 50141;

    t178 = (x713!=((x714==x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = UINT64_MAX;
	volatile int16_t x718 = -1;
	int64_t x719 = INT64_MIN;

    t179 = (x717!=((x718==x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 26;
	int8_t x722 = INT8_MIN;
	static int8_t x723 = INT8_MIN;
	int16_t x724 = 29;
	int32_t t180 = -1278701;

    t180 = (x721!=((x722==x723)!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	int8_t x726 = INT8_MIN;
	static volatile int16_t x727 = INT16_MIN;
	int32_t x728 = INT32_MIN;

    t181 = (x725!=((x726==x727)!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 56U;
	static int32_t x730 = 52988958;
	volatile int8_t x731 = INT8_MIN;
	volatile int8_t x732 = INT8_MIN;

    t182 = (x729!=((x730==x731)!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	uint16_t x734 = 3U;
	static uint16_t x735 = UINT16_MAX;
	volatile int32_t t183 = 644437;

    t183 = (x733!=((x734==x735)!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x738 = 6;
	int32_t x739 = INT32_MIN;
	int16_t x740 = 10;
	volatile int32_t t184 = 56190322;

    t184 = (x737!=((x738==x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = INT16_MIN;
	volatile int32_t x742 = 3195;
	int16_t x743 = -218;
	volatile int32_t t185 = 1;

    t185 = (x741!=((x742==x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = 28;
	int8_t x746 = INT8_MAX;
	volatile int8_t x747 = INT8_MAX;
	int16_t x748 = -1;
	volatile int32_t t186 = -89;

    t186 = (x745!=((x746==x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 6240143;
	uint64_t x750 = 81999460498201818LLU;
	volatile int32_t x751 = INT32_MIN;
	int32_t x752 = -1;
	static int32_t t187 = -29;

    t187 = (x749!=((x750==x751)!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = UINT64_MAX;
	uint64_t x756 = 387719465620158169LLU;
	int32_t t188 = -2109;

    t188 = (x753!=((x754==x755)!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x759 = -6;
	uint8_t x760 = 1U;

    t189 = (x757!=((x758==x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	uint8_t x762 = 39U;
	int8_t x763 = INT8_MIN;
	volatile int8_t x764 = 15;
	int32_t t190 = -8143;

    t190 = (x761!=((x762==x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	static volatile uint8_t x766 = 2U;
	static volatile int16_t x767 = INT16_MAX;
	int8_t x768 = 0;
	static int32_t t191 = 22;

    t191 = (x765!=((x766==x767)!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = -130497LL;
	uint64_t x770 = UINT64_MAX;
	int64_t x772 = INT64_MIN;

    t192 = (x769!=((x770==x771)!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x774 = 53601038088050658LLU;
	int64_t x776 = INT64_MAX;
	volatile int32_t t193 = -13150;

    t193 = (x773!=((x774==x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	int64_t x778 = INT64_MAX;
	int16_t x779 = 241;
	static volatile int32_t x780 = 36386359;
	volatile int32_t t194 = -7461693;

    t194 = (x777!=((x778==x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x783 = INT16_MIN;
	uint8_t x784 = 31U;
	volatile int32_t t195 = -39;

    t195 = (x781!=((x782==x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -1;
	uint16_t x786 = 3U;
	int32_t x787 = -7;
	volatile uint32_t x788 = UINT32_MAX;

    t196 = (x785!=((x786==x787)!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	volatile int32_t x790 = INT32_MIN;
	volatile int8_t x791 = INT8_MIN;
	int16_t x792 = INT16_MAX;
	volatile int32_t t197 = -6;

    t197 = (x789!=((x790==x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = UINT32_MAX;
	int8_t x794 = INT8_MAX;
	int64_t x795 = -1376LL;
	uint64_t x796 = 1663759514253LLU;
	int32_t t198 = 77434430;

    t198 = (x793!=((x794==x795)!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	uint32_t x798 = 791645751U;
	int64_t x799 = -1LL;
	int32_t x800 = -3;
	volatile int32_t t199 = 684;

    t199 = (x797!=((x798==x799)!=x800));

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

