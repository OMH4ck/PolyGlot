
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

int16_t x4 = -1;
uint64_t x8 = UINT64_MAX;
uint16_t x12 = 0U;
volatile uint8_t x19 = 35U;
volatile uint8_t x22 = 3U;
uint16_t x23 = 4U;
int8_t x24 = 24;
static int64_t x27 = -1LL;
int32_t t6 = 1133400;
static volatile int64_t x30 = 76218409067593LL;
volatile int32_t t8 = 2429416;
volatile int8_t x43 = 0;
uint64_t x51 = 23437331975942863LLU;
static int8_t x52 = INT8_MAX;
uint8_t x58 = 6U;
int64_t x64 = INT64_MIN;
int32_t t15 = 5867;
int32_t x66 = INT32_MIN;
volatile int32_t t18 = 69882681;
int8_t x79 = -1;
volatile int32_t t19 = 47833455;
static int16_t x84 = 0;
int32_t t21 = -47554;
int32_t x92 = -1;
int64_t x95 = 4LL;
volatile int32_t t23 = 52309;
int32_t t24 = 305;
static volatile uint64_t x102 = 505204LLU;
volatile int32_t t25 = 909820757;
volatile int64_t x109 = 545LL;
static volatile int32_t t28 = 4671772;
volatile int32_t t29 = 92579479;
int16_t x123 = 3479;
volatile uint16_t x125 = UINT16_MAX;
int64_t x126 = INT64_MAX;
static int32_t x127 = -1;
static uint16_t x128 = 557U;
uint32_t x134 = 8163287U;
volatile int8_t x137 = -1;
int64_t x142 = INT64_MAX;
volatile int32_t t35 = -26051;
volatile uint64_t x158 = UINT64_MAX;
volatile uint16_t x176 = 4U;
int8_t x181 = 1;
static int16_t x183 = -1;
int32_t t46 = -4368231;
static volatile int64_t x191 = INT64_MAX;
int16_t x195 = 508;
int32_t x197 = -1;
uint8_t x200 = UINT8_MAX;
int32_t x201 = INT32_MIN;
int8_t x204 = INT8_MAX;
int32_t t50 = 548832323;
int32_t x206 = INT32_MIN;
volatile int32_t x211 = INT32_MIN;
static volatile int32_t t54 = -7;
int16_t x228 = INT16_MIN;
int64_t x229 = 109LL;
int64_t x232 = -1LL;
int32_t t58 = -63666034;
int32_t x240 = INT32_MAX;
volatile int32_t t59 = -28283791;
int16_t x241 = INT16_MIN;
int32_t x242 = 6;
static int16_t x246 = INT16_MAX;
int8_t x251 = INT8_MAX;
int8_t x265 = -38;
static int64_t x270 = -1LL;
static int8_t x271 = INT8_MIN;
static volatile int8_t x273 = INT8_MIN;
static int32_t x274 = INT32_MIN;
int16_t x279 = -2006;
int16_t x281 = -1;
int32_t t70 = 1;
int64_t x286 = -1LL;
int8_t x287 = INT8_MIN;
static volatile int32_t x288 = INT32_MAX;
volatile uint16_t x293 = 382U;
volatile int32_t x294 = -1;
uint64_t x298 = UINT64_MAX;
int32_t x300 = -106;
static volatile int8_t x309 = -10;
int32_t t77 = 34;
int16_t x322 = INT16_MIN;
uint64_t x329 = 14766LLU;
volatile uint64_t x339 = 3314LLU;
static uint64_t x347 = 2LLU;
int8_t x349 = INT8_MAX;
static uint16_t x356 = 470U;
volatile int32_t t88 = 372;
int32_t x358 = 17;
volatile int64_t x362 = INT64_MIN;
volatile int16_t x367 = INT16_MIN;
uint64_t x370 = UINT64_MAX;
static volatile int16_t x380 = INT16_MAX;
static uint64_t x384 = 556679LLU;
int32_t t95 = -32884845;
uint32_t x387 = UINT32_MAX;
int32_t t96 = 1;
static uint32_t x389 = 0U;
volatile uint32_t x393 = 23U;
int64_t x395 = INT64_MIN;
static int32_t x402 = 1;
static int8_t x403 = INT8_MIN;
int32_t x405 = INT32_MAX;
int16_t x409 = -1;
volatile int32_t t102 = 418122421;
static uint8_t x419 = UINT8_MAX;
uint8_t x426 = 0U;
uint32_t x428 = 75483933U;
volatile int32_t t107 = -2;
int32_t t108 = 5232427;
int32_t x439 = INT32_MIN;
int16_t x440 = 8060;
static volatile int32_t t111 = -31;
int32_t t112 = -37029;
int32_t x457 = INT32_MIN;
static volatile int32_t t114 = 1;
volatile uint16_t x471 = 15U;
volatile int16_t x472 = -6;
int64_t x474 = -131821594053076685LL;
uint64_t x477 = 18841900237794LLU;
uint16_t x480 = 346U;
int32_t x485 = INT32_MIN;
volatile int8_t x491 = -1;
int64_t x494 = INT64_MAX;
static volatile int32_t t123 = -32;
int8_t x499 = INT8_MAX;
int8_t x514 = INT8_MIN;
int8_t x519 = -1;
uint8_t x521 = UINT8_MAX;
int64_t x531 = -2132158760529605004LL;
volatile int32_t t132 = -20947997;
volatile int64_t x541 = -1LL;
int8_t x549 = -1;
int64_t x556 = INT64_MIN;
static uint32_t x557 = 5U;
int16_t x560 = INT16_MIN;
uint16_t x563 = 314U;
int64_t x565 = INT64_MIN;
int64_t x567 = INT64_MAX;
static uint8_t x570 = UINT8_MAX;
int8_t x571 = -1;
volatile int32_t t142 = -7760;
uint64_t x577 = 3059LLU;
int8_t x584 = -4;
int32_t t146 = 596;
static volatile int64_t x589 = INT64_MIN;
static volatile int16_t x590 = 1811;
volatile uint16_t x595 = UINT16_MAX;
volatile uint8_t x598 = 5U;
static int16_t x606 = INT16_MAX;
int32_t x612 = -1025130;
static int32_t t152 = 10;
int8_t x629 = INT8_MAX;
uint8_t x631 = 60U;
int32_t x639 = -1;
static uint32_t x657 = UINT32_MAX;
int8_t x660 = INT8_MIN;
uint8_t x667 = UINT8_MAX;
uint8_t x670 = 1U;
volatile int32_t t167 = -97635640;
int64_t x674 = -1LL;
volatile int8_t x676 = INT8_MAX;
volatile uint64_t x700 = UINT64_MAX;
volatile int8_t x708 = 1;
int32_t t176 = 2559426;
static uint16_t x711 = 1259U;
int32_t t177 = 4513;
volatile int16_t x713 = INT16_MIN;
static uint8_t x716 = UINT8_MAX;
uint64_t x723 = 60103464853043935LLU;
int16_t x729 = INT16_MIN;
volatile uint64_t x732 = 385LLU;
volatile int32_t t183 = 130;
uint64_t x737 = 182LLU;
static int64_t x746 = -296456351309115LL;
int16_t x748 = -2;
int16_t x753 = INT16_MIN;
uint8_t x754 = UINT8_MAX;
int32_t t188 = 0;
uint64_t x761 = 1LLU;
static volatile uint64_t x762 = 1143579108541275188LLU;
int8_t x768 = 2;
volatile uint32_t x771 = 1885155376U;
int8_t x777 = INT8_MIN;
uint16_t x781 = UINT16_MAX;
uint8_t x785 = 0U;
int32_t x787 = 11871;
volatile int32_t t196 = -2;
int16_t x790 = INT16_MIN;


void f0(void) {
    	volatile uint8_t x1 = 7U;
	uint8_t x2 = 0U;
	static int16_t x3 = -63;
	int32_t t0 = 463;

    t0 = (x1>((x2|x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 19;
	int8_t x6 = 0;
	int32_t x7 = INT32_MIN;
	int32_t t1 = 822278;

    t1 = (x5>((x6|x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x10 = -21;
	static int8_t x11 = -17;
	volatile int32_t t2 = -3263163;

    t2 = (x9>((x10|x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MAX;
	uint8_t x16 = 52U;
	int32_t t3 = -95;

    t3 = (x13>((x14|x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -6;
	int64_t x18 = 18LL;
	static uint64_t x20 = 1396819294LLU;
	int32_t t4 = -1;

    t4 = (x17>((x18|x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	static int32_t t5 = 1229232;

    t5 = (x21>((x22|x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 67U;
	uint8_t x26 = 0U;
	uint16_t x28 = UINT16_MAX;

    t6 = (x25>((x26|x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 466744;
	uint16_t x31 = 90U;
	volatile int16_t x32 = INT16_MAX;
	int32_t t7 = -326860551;

    t7 = (x29>((x30|x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 776099581176436LLU;
	int8_t x34 = INT8_MIN;
	static volatile uint8_t x35 = UINT8_MAX;
	int8_t x36 = INT8_MAX;

    t8 = (x33>((x34|x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 1;
	volatile int32_t x38 = INT32_MAX;
	int32_t x39 = -1;
	int8_t x40 = 1;
	static volatile int32_t t9 = -491274;

    t9 = (x37>((x38|x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 813U;
	int16_t x42 = INT16_MIN;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = -146;

    t10 = (x41>((x42|x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	int16_t x46 = 6;
	volatile int16_t x47 = 0;
	static int16_t x48 = -194;
	static volatile int32_t t11 = -49445;

    t11 = (x45>((x46|x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x49 = UINT16_MAX;
	int8_t x50 = -1;
	volatile int32_t t12 = -99;

    t12 = (x49>((x50|x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = UINT16_MAX;
	volatile uint32_t x54 = 19U;
	volatile int16_t x55 = INT16_MAX;
	volatile int64_t x56 = -1LL;
	int32_t t13 = 53796;

    t13 = (x53>((x54|x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 12693;

    t14 = (x57>((x58|x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	volatile uint8_t x62 = 1U;
	int8_t x63 = -1;

    t15 = (x61>((x62|x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 6886U;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = -3209;
	int32_t t16 = 87911;

    t16 = (x65>((x66|x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 574U;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -9006240760344LL;
	int64_t x72 = 191776422067LL;
	static int32_t t17 = 22;

    t17 = (x69>((x70|x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = 2;
	int16_t x74 = -1;
	int8_t x75 = 23;
	volatile int64_t x76 = INT64_MIN;

    t18 = (x73>((x74|x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MAX;
	uint32_t x78 = UINT32_MAX;
	volatile int16_t x80 = 0;

    t19 = (x77>((x78|x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = UINT8_MAX;
	volatile uint8_t x82 = 43U;
	uint32_t x83 = 2715987U;
	int32_t t20 = -3558014;

    t20 = (x81>((x82|x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int32_t x86 = -1;
	volatile int16_t x87 = -1;
	int64_t x88 = INT64_MAX;

    t21 = (x85>((x86|x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 47477LL;
	int32_t x90 = INT32_MAX;
	static volatile uint32_t x91 = 6937238U;
	int32_t t22 = -421;

    t22 = (x89>((x90|x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1517LL;
	volatile uint32_t x94 = UINT32_MAX;
	volatile int8_t x96 = INT8_MAX;

    t23 = (x93>((x94|x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	int32_t x98 = -87941;
	int8_t x99 = -29;
	volatile int64_t x100 = 1941099765184LL;

    t24 = (x97>((x98|x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -66;
	int64_t x103 = -459977132335LL;
	uint64_t x104 = 255113270LLU;

    t25 = (x101>((x102|x103)!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = UINT32_MAX;
	int32_t x106 = -9532659;
	int32_t x107 = -1;
	volatile int64_t x108 = 22990LL;
	volatile int32_t t26 = 2920;

    t26 = (x105>((x106|x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -1LL;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 1;

    t27 = (x109>((x110|x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MAX;
	uint64_t x114 = 944608667219LLU;
	static int32_t x115 = INT32_MIN;
	uint8_t x116 = 0U;

    t28 = (x113>((x114|x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 379887965067LL;
	static uint16_t x118 = 9087U;
	int16_t x119 = 1;
	int32_t x120 = -1;

    t29 = (x117>((x118|x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	volatile int8_t x122 = INT8_MIN;
	int32_t x124 = -1;
	volatile int32_t t30 = -46116;

    t30 = (x121>((x122|x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t t31 = -2;

    t31 = (x125>((x126|x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = 7;
	volatile int8_t x130 = 2;
	int32_t x131 = INT32_MIN;
	uint16_t x132 = 14710U;
	int32_t t32 = -5;

    t32 = (x129>((x130|x131)!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 5544LL;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 1097742831571LLU;
	volatile int32_t t33 = 1577;

    t33 = (x133>((x134|x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x138 = INT32_MIN;
	uint32_t x139 = 116079630U;
	int8_t x140 = 27;
	volatile int32_t t34 = -47288;

    t34 = (x137>((x138|x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	uint16_t x143 = UINT16_MAX;
	static int16_t x144 = -1;

    t35 = (x141>((x142|x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 24240U;
	int64_t x147 = -60LL;
	int32_t x148 = -6752;
	volatile int32_t t36 = 5680;

    t36 = (x145>((x146|x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	static uint32_t x150 = 1894U;
	int64_t x151 = INT64_MIN;
	volatile int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -1576;

    t37 = (x149>((x150|x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 1U;
	static int32_t x154 = INT32_MIN;
	volatile int8_t x155 = -1;
	int16_t x156 = -1;
	volatile int32_t t38 = 881;

    t38 = (x153>((x154|x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int8_t x159 = INT8_MIN;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -1939215;

    t39 = (x157>((x158|x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	static int64_t x163 = INT64_MIN;
	static uint32_t x164 = 44569U;
	static int32_t t40 = 5;

    t40 = (x161>((x162|x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 12U;
	static int16_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	static int32_t x168 = 25715;
	volatile int32_t t41 = -78276511;

    t41 = (x165>((x166|x167)!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 0;
	volatile int16_t x170 = -1;
	int8_t x171 = INT8_MAX;
	static int64_t x172 = 2327255161058602LL;
	int32_t t42 = -5;

    t42 = (x169>((x170|x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	uint64_t x174 = 5015026860427078LLU;
	static int64_t x175 = -1143LL;
	static volatile int32_t t43 = 1221;

    t43 = (x173>((x174|x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 40U;
	int8_t x178 = 1;
	uint64_t x179 = 477300557LLU;
	uint64_t x180 = 29492959514281LLU;
	int32_t t44 = 2342350;

    t44 = (x177>((x178|x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x182 = UINT8_MAX;
	volatile int64_t x184 = 491515670966868LL;
	int32_t t45 = 5425;

    t45 = (x181>((x182|x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 41U;
	volatile uint64_t x186 = 3LLU;
	int32_t x187 = -29757;
	static int64_t x188 = 148848430584822345LL;

    t46 = (x185>((x186|x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -19;
	uint16_t x190 = UINT16_MAX;
	int32_t x192 = -374120376;
	static int32_t t47 = -500006361;

    t47 = (x189>((x190|x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x194 = 2;
	int32_t x196 = -1;
	static volatile int32_t t48 = 1550244;

    t48 = (x193>((x194|x195)!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x198 = 1;
	int32_t x199 = INT32_MIN;
	volatile int32_t t49 = 171394159;

    t49 = (x197>((x198|x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = INT32_MAX;
	int8_t x203 = 25;

    t50 = (x201>((x202|x203)!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x207 = 9428LL;
	static volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = 26858;

    t51 = (x205>((x206|x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	uint8_t x210 = 14U;
	static int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -15341492;

    t52 = (x209>((x210|x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	int32_t x215 = -1;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -4;

    t53 = (x213>((x214|x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -474;

    t54 = (x217>((x218|x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 6470334409LLU;
	volatile int32_t t55 = -47070112;

    t55 = (x221>((x222|x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = -32;
	static int16_t x226 = INT16_MIN;
	uint16_t x227 = 6U;
	volatile int32_t t56 = 14176890;

    t56 = (x225>((x226|x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = 0;
	int32_t x231 = 694135272;
	static volatile int32_t t57 = 64335;

    t57 = (x229>((x230|x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 2476U;
	int8_t x234 = INT8_MAX;
	int16_t x235 = 1;
	int64_t x236 = INT64_MIN;

    t58 = (x233>((x234|x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	static int32_t x238 = -573219;
	int32_t x239 = 515974;

    t59 = (x237>((x238|x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x243 = 1U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 759482;

    t60 = (x241>((x242|x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -1;
	int32_t t61 = 12298261;

    t61 = (x245>((x246|x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MAX;
	uint8_t x250 = 7U;
	int16_t x252 = INT16_MIN;
	static int32_t t62 = -31049155;

    t62 = (x249>((x250|x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	uint8_t x254 = 25U;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = INT64_MIN;
	int32_t t63 = -220554133;

    t63 = (x253>((x254|x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = 9784U;
	int8_t x259 = -1;
	int64_t x260 = -1LL;
	int32_t t64 = 68105;

    t64 = (x257>((x258|x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -6;
	static volatile int32_t x262 = INT32_MAX;
	uint8_t x263 = 4U;
	int8_t x264 = INT8_MIN;
	int32_t t65 = 4126;

    t65 = (x261>((x262|x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t66 = 0;

    t66 = (x265>((x266|x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x272 = 7660261349331310585LLU;
	int32_t t67 = 27373304;

    t67 = (x269>((x270|x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x275 = 150LLU;
	static int16_t x276 = INT16_MIN;
	static volatile int32_t t68 = -7138442;

    t68 = (x273>((x274|x275)!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 13U;
	int32_t x278 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	int32_t t69 = -4405;

    t69 = (x277>((x278|x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = -1;
	int32_t x283 = -5198019;
	int32_t x284 = -3198331;

    t70 = (x281>((x282|x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int32_t t71 = 43528;

    t71 = (x285>((x286|x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x289 = 2354U;
	int8_t x290 = 0;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = 2824475;

    t72 = (x289>((x290|x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x295 = 192974297U;
	volatile int8_t x296 = INT8_MAX;
	int32_t t73 = -1651;

    t73 = (x293>((x294|x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	uint64_t x299 = 14LLU;
	volatile int32_t t74 = -79003;

    t74 = (x297>((x298|x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 120894567837LLU;
	int32_t t75 = 5;

    t75 = (x301>((x302|x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 26227;

    t76 = (x305>((x306|x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x310 = 24;
	volatile int64_t x311 = INT64_MIN;
	uint16_t x312 = 26U;

    t77 = (x309>((x310|x311)!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -49237360846462379LL;
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = 104090LL;
	int32_t t78 = 1499;

    t78 = (x313>((x314|x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MAX;
	int8_t x318 = -7;
	volatile int16_t x319 = INT16_MIN;
	uint32_t x320 = 13283614U;
	int32_t t79 = -76948;

    t79 = (x317>((x318|x319)!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 4U;
	int16_t x323 = INT16_MIN;
	static int64_t x324 = INT64_MIN;
	int32_t t80 = -21;

    t80 = (x321>((x322|x323)!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 37U;
	volatile uint8_t x326 = 125U;
	uint16_t x327 = 14U;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = 1;

    t81 = (x325>((x326|x327)!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = UINT64_MAX;
	volatile uint64_t x331 = 7314923057LLU;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 1934;

    t82 = (x329>((x330|x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = UINT32_MAX;
	static volatile int64_t x334 = INT64_MAX;
	int32_t x335 = INT32_MAX;
	int8_t x336 = -20;
	int32_t t83 = -11412;

    t83 = (x333>((x334|x335)!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = 3011632431598293643LL;
	volatile uint16_t x338 = 1202U;
	int16_t x340 = 601;
	volatile int32_t t84 = 7997319;

    t84 = (x337>((x338|x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = 551304858198966747LL;
	int16_t x342 = INT16_MAX;
	int32_t x343 = 234182;
	static int8_t x344 = -1;
	int32_t t85 = -926129;

    t85 = (x341>((x342|x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 14;
	uint32_t x346 = 315741U;
	uint32_t x348 = 906U;
	volatile int32_t t86 = 1;

    t86 = (x345>((x346|x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = 76U;
	static int32_t x351 = 97230049;
	volatile int16_t x352 = -1;
	volatile int32_t t87 = -70799;

    t87 = (x349>((x350|x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x353 = 9080818786364408970LLU;
	uint16_t x354 = 851U;
	int64_t x355 = INT64_MIN;

    t88 = (x353>((x354|x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MAX;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = 1381;

    t89 = (x357>((x358|x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x363 = -1;
	int8_t x364 = -1;
	volatile int32_t t90 = 1309883;

    t90 = (x361>((x362|x363)!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -125441594742578297LL;
	int32_t x366 = -1;
	int16_t x368 = 0;
	int32_t t91 = 1;

    t91 = (x365>((x366|x367)!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -9;
	int16_t x371 = INT16_MIN;
	volatile int16_t x372 = 44;
	volatile int32_t t92 = -67427526;

    t92 = (x369>((x370|x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 4057U;
	int32_t x374 = -5208;
	uint32_t x375 = 38251U;
	int32_t x376 = INT32_MAX;
	int32_t t93 = -3;

    t93 = (x373>((x374|x375)!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 0U;
	int64_t x378 = INT64_MAX;
	static int32_t x379 = -1;
	int32_t t94 = 14354169;

    t94 = (x377>((x378|x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -113210052;
	static int64_t x382 = -1LL;
	uint16_t x383 = UINT16_MAX;

    t95 = (x381>((x382|x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 124U;
	uint8_t x386 = 96U;
	int64_t x388 = -2961525564803LL;

    t96 = (x385>((x386|x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x390 = 12U;
	static int16_t x391 = 165;
	static int64_t x392 = 1LL;
	volatile int32_t t97 = 27924699;

    t97 = (x389>((x390|x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = 3;
	int64_t x396 = INT64_MIN;
	static int32_t t98 = -1779;

    t98 = (x393>((x394|x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = -1;
	static int32_t x398 = -1;
	int64_t x399 = -30458438022056333LL;
	int32_t x400 = -7969237;
	volatile int32_t t99 = -174693867;

    t99 = (x397>((x398|x399)!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x401 = -1;
	volatile uint8_t x404 = 102U;
	int32_t t100 = -46911555;

    t100 = (x401>((x402|x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x406 = -4599;
	static volatile uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 6U;
	int32_t t101 = 1;

    t101 = (x405>((x406|x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = UINT8_MAX;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = 245138U;

    t102 = (x409>((x410|x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint8_t x414 = UINT8_MAX;
	uint8_t x415 = 7U;
	volatile uint16_t x416 = 0U;
	int32_t t103 = -393801379;

    t103 = (x413>((x414|x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	volatile int16_t x418 = INT16_MIN;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -20;

    t104 = (x417>((x418|x419)!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 34952261;
	int64_t x422 = INT64_MIN;
	static int8_t x423 = 0;
	static int16_t x424 = 206;
	int32_t t105 = -500;

    t105 = (x421>((x422|x423)!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -1;
	volatile int64_t x427 = -815LL;
	int32_t t106 = -1482405;

    t106 = (x425>((x426|x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -123;
	volatile int32_t x430 = 868;
	static uint16_t x431 = 2U;
	int8_t x432 = 14;

    t107 = (x429>((x430|x431)!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -457;
	int64_t x434 = -1LL;
	static uint64_t x435 = UINT64_MAX;
	static int16_t x436 = INT16_MAX;

    t108 = (x433>((x434|x435)!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MIN;
	uint32_t x438 = UINT32_MAX;
	volatile int32_t t109 = 272302;

    t109 = (x437>((x438|x439)!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = UINT16_MAX;
	int64_t x442 = INT64_MIN;
	volatile int32_t x443 = -1;
	static int64_t x444 = 52166LL;
	volatile int32_t t110 = 1193994;

    t110 = (x441>((x442|x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	int16_t x446 = -729;
	int64_t x447 = INT64_MIN;
	uint8_t x448 = UINT8_MAX;

    t111 = (x445>((x446|x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int64_t x450 = -33359267194LL;
	volatile int8_t x451 = INT8_MIN;
	static int8_t x452 = -1;

    t112 = (x449>((x450|x451)!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	uint64_t x454 = 102LLU;
	static uint16_t x455 = 733U;
	int32_t x456 = INT32_MIN;
	volatile int32_t t113 = 14036429;

    t113 = (x453>((x454|x455)!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	volatile uint16_t x460 = 3U;

    t114 = (x457>((x458|x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -25;
	int16_t x462 = -48;
	int32_t x463 = INT32_MAX;
	int8_t x464 = -16;
	volatile int32_t t115 = 0;

    t115 = (x461>((x462|x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MIN;
	int16_t x467 = 12495;
	volatile uint32_t x468 = UINT32_MAX;
	static volatile int32_t t116 = -139848385;

    t116 = (x465>((x466|x467)!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = INT8_MAX;
	static uint32_t x470 = 6638194U;
	int32_t t117 = 1;

    t117 = (x469>((x470|x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -19;
	int32_t x475 = -1;
	static uint32_t x476 = 213277024U;
	int32_t t118 = -8651;

    t118 = (x473>((x474|x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	int8_t x479 = -1;
	static volatile int32_t t119 = -77133591;

    t119 = (x477>((x478|x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 0U;
	int16_t x482 = INT16_MAX;
	uint64_t x483 = 61891282802LLU;
	static int64_t x484 = 91224099299782518LL;
	static int32_t t120 = -15;

    t120 = (x481>((x482|x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = INT16_MIN;
	int64_t x487 = -1LL;
	uint16_t x488 = UINT16_MAX;
	static volatile int32_t t121 = -209362694;

    t121 = (x485>((x486|x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -29794670;
	uint8_t x490 = 2U;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = -3475;

    t122 = (x489>((x490|x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	volatile int32_t x495 = -1;
	int32_t x496 = -1;

    t123 = (x493>((x494|x495)!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	volatile int16_t x498 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	volatile int32_t t124 = 60095;

    t124 = (x497>((x498|x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 31796U;
	static uint8_t x502 = 31U;
	int64_t x503 = -28380741554056027LL;
	int8_t x504 = -2;
	volatile int32_t t125 = -1222;

    t125 = (x501>((x502|x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MIN;
	volatile int64_t x507 = INT64_MIN;
	int64_t x508 = INT64_MIN;
	static int32_t t126 = -333086;

    t126 = (x505>((x506|x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	uint32_t x510 = UINT32_MAX;
	int64_t x511 = -166LL;
	static uint64_t x512 = UINT64_MAX;
	volatile int32_t t127 = 384955;

    t127 = (x509>((x510|x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	uint64_t x515 = 716863690LLU;
	static int32_t x516 = -2512927;
	volatile int32_t t128 = -229243;

    t128 = (x513>((x514|x515)!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -1;
	int8_t x518 = -10;
	int8_t x520 = INT8_MIN;
	volatile int32_t t129 = 985845699;

    t129 = (x517>((x518|x519)!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MIN;
	int16_t x524 = -225;
	int32_t t130 = -3;

    t130 = (x521>((x522|x523)!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int32_t x526 = INT32_MAX;
	static uint8_t x527 = 1U;
	static int32_t x528 = INT32_MIN;
	int32_t t131 = -198585115;

    t131 = (x525>((x526|x527)!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1375;
	volatile uint16_t x530 = UINT16_MAX;
	volatile int16_t x532 = 2;

    t132 = (x529>((x530|x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = 22;
	uint8_t x534 = UINT8_MAX;
	volatile int64_t x535 = INT64_MIN;
	uint64_t x536 = UINT64_MAX;
	int32_t t133 = 83011;

    t133 = (x533>((x534|x535)!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 93441277427234LLU;
	static int64_t x538 = -1LL;
	static int16_t x539 = -1840;
	int64_t x540 = INT64_MIN;
	volatile int32_t t134 = 957940;

    t134 = (x537>((x538|x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = -22;
	int8_t x543 = -1;
	static uint64_t x544 = 3836332273265755114LLU;
	volatile int32_t t135 = -255419506;

    t135 = (x541>((x542|x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = -1;
	int8_t x547 = -1;
	static uint16_t x548 = UINT16_MAX;
	volatile int32_t t136 = -44864;

    t136 = (x545>((x546|x547)!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = INT16_MAX;
	static int16_t x551 = INT16_MIN;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t137 = -792564;

    t137 = (x549>((x550|x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	volatile uint64_t x554 = UINT64_MAX;
	int64_t x555 = INT64_MAX;
	volatile int32_t t138 = 0;

    t138 = (x553>((x554|x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	volatile int8_t x559 = -1;
	volatile int32_t t139 = -7264595;

    t139 = (x557>((x558|x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 57U;
	uint8_t x562 = UINT8_MAX;
	int32_t x564 = 7496;
	int32_t t140 = -56;

    t140 = (x561>((x562|x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 2U;
	int8_t x568 = 0;
	int32_t t141 = -106;

    t141 = (x565>((x566|x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 2U;
	int8_t x572 = INT8_MIN;

    t142 = (x569>((x570|x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	uint8_t x574 = 3U;
	static int16_t x575 = -11;
	uint8_t x576 = 3U;
	int32_t t143 = -4700;

    t143 = (x573>((x574|x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MAX;
	uint32_t x579 = UINT32_MAX;
	static int32_t x580 = -1009624111;
	volatile int32_t t144 = -723246398;

    t144 = (x577>((x578|x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	int16_t x582 = -1;
	uint16_t x583 = UINT16_MAX;
	int32_t t145 = 204744827;

    t145 = (x581>((x582|x583)!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = 498U;
	int64_t x586 = -1LL;
	uint16_t x587 = 9U;
	uint16_t x588 = UINT16_MAX;

    t146 = (x585>((x586|x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = INT16_MIN;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t147 = 20;

    t147 = (x589>((x590|x591)!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -2;
	int32_t x594 = -1;
	int32_t x596 = -1;
	int32_t t148 = 0;

    t148 = (x593>((x594|x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 1U;
	int8_t x599 = 53;
	static volatile uint8_t x600 = UINT8_MAX;
	int32_t t149 = 197503291;

    t149 = (x597>((x598|x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x601 = INT8_MIN;
	int32_t x602 = 834887;
	int32_t x603 = -14701922;
	volatile uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = 719;

    t150 = (x601>((x602|x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 2U;
	volatile int8_t x607 = INT8_MIN;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = -30171858;

    t151 = (x605>((x606|x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = 14U;

    t152 = (x609>((x610|x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = 3;
	int16_t x615 = INT16_MIN;
	volatile int16_t x616 = INT16_MAX;
	static volatile int32_t t153 = -6;

    t153 = (x613>((x614|x615)!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	int16_t x618 = INT16_MIN;
	uint8_t x619 = 0U;
	uint16_t x620 = 25885U;
	volatile int32_t t154 = -6758;

    t154 = (x617>((x618|x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 41;
	volatile uint8_t x622 = 0U;
	int64_t x623 = -1LL;
	int16_t x624 = -1;
	static volatile int32_t t155 = -108347;

    t155 = (x621>((x622|x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = -1;
	volatile int8_t x626 = -20;
	int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MIN;
	static int32_t t156 = -3629919;

    t156 = (x625>((x626|x627)!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 432720701LLU;
	volatile int8_t x632 = -1;
	int32_t t157 = -1111970;

    t157 = (x629>((x630|x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x633 = 2041566U;
	int16_t x634 = INT16_MAX;
	static int64_t x635 = INT64_MAX;
	uint8_t x636 = UINT8_MAX;
	int32_t t158 = -171580557;

    t158 = (x633>((x634|x635)!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x638 = INT64_MIN;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t159 = 1702157;

    t159 = (x637>((x638|x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	int8_t x642 = -1;
	volatile uint8_t x643 = 6U;
	volatile int64_t x644 = 456089LL;
	volatile int32_t t160 = 11;

    t160 = (x641>((x642|x643)!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int32_t x646 = INT32_MAX;
	static volatile int8_t x647 = 0;
	int8_t x648 = INT8_MAX;
	volatile int32_t t161 = 2;

    t161 = (x645>((x646|x647)!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	int32_t x650 = -1;
	volatile uint8_t x651 = 2U;
	int32_t x652 = 155677;
	volatile int32_t t162 = -1227483;

    t162 = (x649>((x650|x651)!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 0U;
	int16_t x654 = -1;
	int8_t x655 = 58;
	uint32_t x656 = 224164U;
	volatile int32_t t163 = 186;

    t163 = (x653>((x654|x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MIN;
	volatile uint16_t x659 = 2U;
	int32_t t164 = 11697;

    t164 = (x657>((x658|x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	int8_t x662 = -3;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = INT16_MIN;
	volatile int32_t t165 = 63817;

    t165 = (x661>((x662|x663)!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	uint16_t x666 = UINT16_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = -535818659;

    t166 = (x665>((x666|x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile uint16_t x671 = 27U;
	uint64_t x672 = 2LLU;

    t167 = (x669>((x670|x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	int16_t x675 = INT16_MIN;
	volatile int32_t t168 = 4935;

    t168 = (x673>((x674|x675)!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	volatile int8_t x678 = -8;
	static int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -397;

    t169 = (x677>((x678|x679)!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 34;
	volatile int64_t x682 = INT64_MIN;
	int64_t x683 = -1LL;
	uint64_t x684 = 82309457LLU;
	int32_t t170 = 322;

    t170 = (x681>((x682|x683)!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	int32_t x686 = INT32_MIN;
	uint8_t x687 = 48U;
	uint16_t x688 = 25U;
	static volatile int32_t t171 = -338537;

    t171 = (x685>((x686|x687)!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 6;
	uint64_t x690 = 3582LLU;
	int32_t x691 = 15;
	int32_t x692 = -70584;
	int32_t t172 = 92;

    t172 = (x689>((x690|x691)!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	int8_t x694 = -1;
	int64_t x695 = -18907LL;
	static int64_t x696 = 469722743336LL;
	static int32_t t173 = -7096;

    t173 = (x693>((x694|x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x697 = 2019237861281LLU;
	uint16_t x698 = 12580U;
	static uint16_t x699 = 144U;
	static int32_t t174 = 9176085;

    t174 = (x697>((x698|x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	int64_t x703 = -2956783371898498653LL;
	static uint64_t x704 = UINT64_MAX;
	volatile int32_t t175 = -110;

    t175 = (x701>((x702|x703)!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	volatile uint32_t x706 = 16679249U;
	int32_t x707 = 890;

    t176 = (x705>((x706|x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 9045156;
	int32_t x710 = INT32_MIN;
	int8_t x712 = INT8_MIN;

    t177 = (x709>((x710|x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x714 = -19LL;
	uint8_t x715 = UINT8_MAX;
	volatile int32_t t178 = -45218;

    t178 = (x713>((x714|x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 0;
	volatile int16_t x718 = INT16_MIN;
	static int64_t x719 = 67614561267LL;
	static int64_t x720 = INT64_MIN;
	int32_t t179 = -155;

    t179 = (x717>((x718|x719)!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -1;
	int32_t x722 = INT32_MIN;
	volatile uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = -47;

    t180 = (x721>((x722|x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MAX;
	static uint16_t x726 = 597U;
	static int64_t x727 = 7032588LL;
	int32_t x728 = 1004156;
	volatile int32_t t181 = 223737681;

    t181 = (x725>((x726|x727)!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = 921130949553221412LL;
	int16_t x731 = INT16_MAX;
	static int32_t t182 = -474149359;

    t182 = (x729>((x730|x731)!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	static int8_t x734 = INT8_MAX;
	volatile int64_t x735 = -1LL;
	int8_t x736 = INT8_MIN;

    t183 = (x733>((x734|x735)!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MIN;
	volatile int64_t x740 = -1LL;
	volatile int32_t t184 = 889861;

    t184 = (x737>((x738|x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 12431176U;
	uint32_t x742 = 3537U;
	volatile int16_t x743 = INT16_MAX;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t185 = -10167454;

    t185 = (x741>((x742|x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = 7593;
	int16_t x747 = 2016;
	int32_t t186 = -1608;

    t186 = (x745>((x746|x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 0;
	static int8_t x750 = -1;
	volatile int8_t x751 = INT8_MAX;
	uint16_t x752 = UINT16_MAX;
	static int32_t t187 = -340;

    t187 = (x749>((x750|x751)!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x755 = INT32_MIN;
	uint32_t x756 = 79U;

    t188 = (x753>((x754|x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = 114U;
	uint32_t x758 = 1268310579U;
	volatile int8_t x759 = -1;
	static int8_t x760 = INT8_MAX;
	int32_t t189 = -10936075;

    t189 = (x757>((x758|x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x763 = 1872124U;
	int16_t x764 = INT16_MAX;
	int32_t t190 = 1093;

    t190 = (x761>((x762|x763)!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	static int16_t x766 = -669;
	volatile int16_t x767 = INT16_MIN;
	volatile int32_t t191 = -1113720;

    t191 = (x765>((x766|x767)!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	static uint8_t x770 = UINT8_MAX;
	uint8_t x772 = 8U;
	volatile int32_t t192 = -686;

    t192 = (x769>((x770|x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	int16_t x774 = 6;
	int32_t x775 = INT32_MIN;
	static int8_t x776 = -1;
	int32_t t193 = 61;

    t193 = (x773>((x774|x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	volatile int64_t x779 = 16336210634019184LL;
	int16_t x780 = -1;
	volatile int32_t t194 = 37;

    t194 = (x777>((x778|x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = 81U;
	static volatile int64_t x783 = INT64_MAX;
	int16_t x784 = 2;
	static volatile int32_t t195 = -4;

    t195 = (x781>((x782|x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = -16;
	int64_t x788 = 0LL;

    t196 = (x785>((x786|x787)!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int32_t x791 = -5;
	static volatile int32_t x792 = 436;
	int32_t t197 = -6798209;

    t197 = (x789>((x790|x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MIN;
	static int32_t x794 = -963;
	int64_t x795 = -673843488449797LL;
	volatile int8_t x796 = -1;
	volatile int32_t t198 = 1;

    t198 = (x793>((x794|x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 39541669820234LLU;
	int16_t x798 = -3376;
	static volatile int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MIN;
	volatile int32_t t199 = -4119707;

    t199 = (x797>((x798|x799)!=x800));

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

