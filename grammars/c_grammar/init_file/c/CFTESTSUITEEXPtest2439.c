
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

static int32_t x5 = INT32_MIN;
volatile int64_t x6 = INT64_MIN;
int32_t t2 = 8;
int16_t x14 = INT16_MIN;
int32_t t3 = -2252;
uint64_t x19 = 253506845663397380LLU;
int32_t t4 = INT32_MAX;
volatile uint16_t x21 = UINT16_MAX;
volatile int8_t x30 = -1;
volatile int16_t x36 = INT16_MIN;
int32_t x49 = 6;
int8_t x54 = -6;
int8_t x57 = -1;
volatile int32_t x70 = -575803849;
uint64_t x71 = UINT64_MAX;
uint8_t x75 = 3U;
int8_t x76 = INT8_MAX;
uint64_t x98 = 70775475858LLU;
int32_t t24 = 583897462;
int32_t x102 = -12692571;
int16_t x103 = 62;
static int8_t x105 = -1;
uint64_t x109 = UINT64_MAX;
static volatile int8_t x111 = INT8_MIN;
volatile uint16_t x118 = 6277U;
int16_t x122 = -57;
int32_t x124 = -72803;
uint32_t x126 = UINT32_MAX;
int16_t x130 = -1;
int32_t x132 = INT32_MAX;
static int32_t t32 = -16596791;
volatile int32_t x135 = 5643;
static uint32_t x147 = UINT32_MAX;
static uint16_t x151 = 498U;
uint16_t x154 = UINT16_MAX;
volatile int8_t x157 = INT8_MAX;
uint16_t x163 = UINT16_MAX;
volatile int32_t t42 = 2;
volatile int8_t x174 = -1;
volatile uint32_t t43 = UINT32_MAX;
uint8_t x181 = UINT8_MAX;
static int32_t x183 = INT32_MIN;
int32_t x189 = INT32_MIN;
static volatile int64_t x196 = INT64_MAX;
int32_t x199 = 96554;
uint32_t t49 = UINT32_MAX;
uint64_t t51 = UINT64_MAX;
int16_t x211 = -1;
static uint64_t x219 = UINT64_MAX;
static int64_t t54 = INT64_MIN;
int64_t x225 = -36702LL;
volatile int64_t x232 = -25934LL;
static uint64_t x235 = 427405601LLU;
static int32_t t58 = -3956;
static volatile int8_t x238 = 1;
int32_t t59 = -187846;
volatile int16_t x245 = -4;
uint64_t x248 = 229LLU;
volatile uint32_t x251 = 6471878U;
volatile int32_t t62 = INT32_MIN;
volatile uint64_t x261 = 564LLU;
uint16_t x267 = UINT16_MAX;
volatile int64_t x270 = 3805441911LL;
int32_t x272 = INT32_MAX;
int16_t x275 = 7;
uint16_t x282 = UINT16_MAX;
int32_t x284 = INT32_MAX;
static int32_t t70 = -6359120;
static uint16_t x286 = 14485U;
volatile int32_t t72 = 5249;
int32_t x293 = -148287;
volatile int8_t x297 = INT8_MAX;
volatile uint64_t x298 = 682532803619035887LLU;
int32_t x302 = -12111;
volatile int32_t t76 = -10;
static volatile int32_t x309 = 54;
volatile int64_t t79 = INT64_MAX;
int8_t x323 = INT8_MAX;
volatile int64_t t80 = -21093LL;
int64_t x327 = 19121034877108LL;
int8_t x333 = 0;
volatile int64_t x335 = INT64_MIN;
static int32_t t84 = 5264;
uint64_t x341 = 87198673150580LLU;
uint32_t x347 = 1467863U;
uint8_t x348 = 29U;
int8_t x355 = -61;
int32_t x357 = 9898;
volatile uint8_t x369 = 1U;
int32_t x372 = -1749531;
int16_t x375 = INT16_MAX;
uint32_t x376 = 1U;
int32_t x382 = INT32_MIN;
uint32_t x383 = UINT32_MAX;
volatile int16_t x384 = INT16_MIN;
volatile int32_t t96 = -474277;
int64_t x397 = -228LL;
int16_t x399 = INT16_MIN;
static volatile int8_t x409 = 3;
int32_t t102 = -559608911;
int8_t x416 = -2;
volatile uint32_t t103 = 130798U;
volatile uint64_t x419 = 48610607871LLU;
int8_t x422 = -1;
int8_t x423 = INT8_MIN;
volatile int32_t t105 = -7547;
uint64_t x426 = 2223397588047978762LLU;
static int16_t x427 = -1;
uint16_t x431 = UINT16_MAX;
int64_t x436 = -348271272014301LL;
int64_t x437 = INT64_MIN;
volatile int64_t t110 = INT64_MAX;
int8_t x447 = INT8_MIN;
volatile int8_t x448 = 35;
uint8_t x454 = 19U;
int8_t x459 = INT8_MIN;
uint64_t t114 = 821821086543085655LLU;
static int32_t x465 = -737474260;
int8_t x466 = -1;
uint8_t x467 = 6U;
uint32_t x468 = 99867253U;
volatile int32_t t117 = 10;
uint32_t x473 = 51056U;
static uint32_t x474 = UINT32_MAX;
static int8_t x478 = 49;
uint16_t x479 = UINT16_MAX;
int16_t x483 = INT16_MIN;
static int32_t x487 = INT32_MIN;
uint32_t t122 = 198117U;
int64_t x497 = -47LL;
int64_t t124 = -27LL;
int32_t x502 = INT32_MIN;
uint8_t x507 = 31U;
int32_t x514 = 22862550;
int64_t x516 = 634161238368782LL;
uint16_t x524 = 464U;
int32_t x525 = INT32_MIN;
int32_t x526 = 1336;
static int32_t x533 = -1;
static volatile int8_t x536 = -1;
uint8_t x539 = 12U;
volatile uint64_t t134 = UINT64_MAX;
int8_t x542 = -1;
int8_t x548 = INT8_MAX;
volatile uint32_t t136 = 1018U;
uint32_t x551 = UINT32_MAX;
int32_t x552 = -1;
int8_t x554 = 1;
volatile int32_t t139 = 92788;
int32_t x561 = INT32_MIN;
volatile uint32_t x563 = UINT32_MAX;
int64_t x565 = 443077937951LL;
static int64_t x566 = 3620LL;
int16_t x573 = -62;
volatile int32_t t143 = 1205804;
volatile uint8_t x585 = UINT8_MAX;
uint16_t x587 = UINT16_MAX;
volatile uint32_t x589 = UINT32_MAX;
int16_t x590 = INT16_MIN;
volatile int8_t x592 = -1;
static int16_t x594 = -37;
int64_t x602 = -1LL;
volatile int32_t x611 = INT32_MAX;
volatile int32_t t152 = -1530881;
uint64_t x613 = UINT64_MAX;
uint32_t x614 = 117292U;
static int16_t x615 = -1;
int32_t x622 = INT32_MAX;
int8_t x623 = -3;
int64_t x632 = -1LL;
volatile uint8_t x634 = 88U;
volatile uint64_t x637 = UINT64_MAX;
uint64_t x642 = 2245559687969497449LLU;
int16_t x643 = 14;
int8_t x646 = 1;
int16_t x647 = INT16_MIN;
uint16_t x649 = 1844U;
uint32_t x650 = 1111133U;
int32_t x658 = INT32_MIN;
int16_t x660 = -1;
uint32_t x663 = UINT32_MAX;
int32_t t165 = -16;
int32_t x670 = INT32_MIN;
uint64_t x671 = UINT64_MAX;
static uint8_t x676 = 14U;
int8_t x682 = -1;
uint8_t x684 = 10U;
static volatile int32_t t170 = -539118;
static uint8_t x686 = 7U;
uint16_t x693 = 1624U;
int16_t x699 = INT16_MIN;
volatile int32_t t175 = 2;
static uint64_t t176 = 885953LLU;
int32_t x712 = INT32_MIN;
uint64_t x715 = UINT64_MAX;
static int8_t x719 = 20;
volatile uint16_t x721 = 1U;
volatile uint64_t x722 = 5098996657LLU;
static volatile int32_t t180 = 1036672760;
uint8_t x733 = 30U;
volatile uint8_t x739 = 6U;
volatile int8_t x743 = 44;
volatile int32_t t185 = -82175336;
int8_t x748 = 12;
int8_t x749 = 12;
int64_t x758 = -212158578565887098LL;
uint32_t x759 = 2087711578U;
static int32_t t189 = 9676911;
int8_t x764 = INT8_MAX;
volatile int32_t x781 = INT32_MIN;
static volatile int32_t x783 = -259515898;
int16_t x787 = INT16_MIN;
int32_t t196 = INT32_MAX;
volatile int8_t x791 = -1;
int8_t x799 = INT8_MAX;


void f0(void) {
    	int64_t x1 = -1LL;
	uint32_t x2 = 1824996U;
	int32_t x3 = 121092;
	static int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 32257869808LL;

    t0 = (x1*((x2|x3)!=x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = -10;
	int32_t x8 = 58197;
	static volatile int32_t t1 = INT32_MIN;

    t1 = (x5*((x6|x7)!=x8));

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 1;
	volatile int8_t x10 = 0;
	int8_t x11 = -37;
	uint32_t x12 = 5726444U;

    t2 = (x9*((x10|x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	int64_t x15 = -873495LL;
	int32_t x16 = INT32_MIN;

    t3 = (x13*((x14|x15)!=x16));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MAX;
	static uint64_t x18 = UINT64_MAX;
	volatile int64_t x20 = INT64_MIN;

    t4 = (x17*((x18|x19)!=x20));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	int32_t x23 = -941964;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -174;

    t5 = (x21*((x22|x23)!=x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -1;
	volatile int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	volatile int32_t t6 = 653;

    t6 = (x25*((x26|x27)!=x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1965U;
	static int8_t x31 = 0;
	uint32_t x32 = 52907579U;
	volatile int32_t t7 = -30;

    t7 = (x29*((x30|x31)!=x32));

    if (t7 != 1965) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 30;
	uint32_t x34 = 977290U;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 21;

    t8 = (x33*((x34|x35)!=x36));

    if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 0;
	int16_t x38 = INT16_MAX;
	int64_t x39 = INT64_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -2677192;

    t9 = (x37*((x38|x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	static int8_t x42 = INT8_MAX;
	volatile int16_t x43 = -136;
	volatile int64_t x44 = INT64_MIN;
	int64_t t10 = INT64_MIN;

    t10 = (x41*((x42|x43)!=x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = 50700;
	uint64_t x47 = 29026340179386LLU;
	int64_t x48 = -1LL;
	volatile int32_t t11 = INT32_MIN;

    t11 = (x45*((x46|x47)!=x48));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x50 = 1194068LL;
	int32_t x51 = 36115285;
	static int64_t x52 = INT64_MIN;
	static volatile int32_t t12 = 20291;

    t12 = (x49*((x50|x51)!=x52));

    if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	int8_t x55 = -1;
	int16_t x56 = 344;
	volatile int64_t t13 = INT64_MIN;

    t13 = (x53*((x54|x55)!=x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	int32_t x59 = -1;
	uint64_t x60 = 5570163582423107LLU;
	int32_t t14 = 63317972;

    t14 = (x57*((x58|x59)!=x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = 6U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -412;

    t15 = (x61*((x62|x63)!=x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	static uint32_t x66 = 1932636981U;
	int64_t x67 = 2537350443876667396LL;
	volatile uint64_t x68 = UINT64_MAX;
	int32_t t16 = 1174577;

    t16 = (x65*((x66|x67)!=x68));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int16_t x72 = -49;
	int32_t t17 = -847;

    t17 = (x69*((x70|x71)!=x72));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = 16U;
	volatile int32_t t18 = 233093;

    t18 = (x73*((x74|x75)!=x76));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = 3775098U;
	static volatile int16_t x79 = 69;
	static int64_t x80 = INT64_MAX;
	static int32_t t19 = 69;

    t19 = (x77*((x78|x79)!=x80));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	volatile int16_t x82 = 387;
	int8_t x83 = -3;
	int16_t x84 = 1;
	volatile int64_t t20 = INT64_MAX;

    t20 = (x81*((x82|x83)!=x84));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	static volatile int32_t x86 = INT32_MIN;
	volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = 6711;
	volatile int32_t t21 = 892221;

    t21 = (x85*((x86|x87)!=x88));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 1;
	uint64_t x90 = 3227299209LLU;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 381744;

    t22 = (x89*((x90|x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 1046U;
	int8_t x94 = -17;
	int32_t x95 = INT32_MAX;
	uint8_t x96 = 56U;
	volatile int32_t t23 = 948741;

    t23 = (x93*((x94|x95)!=x96));

    if (t23 != 1046) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	uint16_t x99 = 219U;
	static int8_t x100 = INT8_MIN;

    t24 = (x97*((x98|x99)!=x100));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MAX;
	static volatile uint32_t x104 = 7671U;
	static volatile int32_t t25 = -1457595;

    t25 = (x101*((x102|x103)!=x104));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MIN;
	static int32_t x107 = -1;
	uint64_t x108 = 8299921923LLU;
	int32_t t26 = -29610;

    t26 = (x105*((x106|x107)!=x108));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1LL;
	uint8_t x112 = 1U;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (x109*((x110|x111)!=x112));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 1063;
	static uint32_t x114 = 4055452U;
	volatile int64_t x115 = INT64_MAX;
	uint32_t x116 = 2U;
	int32_t t28 = -467292;

    t28 = (x113*((x114|x115)!=x116));

    if (t28 != 1063) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x117 = INT8_MIN;
	volatile int64_t x119 = -5038877031LL;
	int16_t x120 = -48;
	static int32_t t29 = 133169;

    t29 = (x117*((x118|x119)!=x120));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	volatile int32_t x123 = -1;
	int32_t t30 = -1505218;

    t30 = (x121*((x122|x123)!=x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 1;
	int64_t x127 = INT64_MAX;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = 105795;

    t31 = (x125*((x126|x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static volatile int16_t x131 = -693;

    t32 = (x129*((x130|x131)!=x132));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 0;
	int8_t x134 = -1;
	uint32_t x136 = 491365013U;
	static volatile int32_t t33 = -2;

    t33 = (x133*((x134|x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 3777815U;
	uint16_t x138 = 11U;
	uint32_t x139 = 0U;
	volatile int64_t x140 = 91758415796LL;
	uint32_t t34 = 58U;

    t34 = (x137*((x138|x139)!=x140));

    if (t34 != 3777815U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	static volatile uint32_t x143 = 67U;
	int64_t x144 = INT64_MAX;
	static int32_t t35 = -1;

    t35 = (x141*((x142|x143)!=x144));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -14672563LL;
	int16_t x146 = INT16_MAX;
	volatile uint32_t x148 = UINT32_MAX;
	static volatile int64_t t36 = 767009038LL;

    t36 = (x145*((x146|x147)!=x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	uint8_t x150 = UINT8_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -3290;

    t37 = (x149*((x150|x151)!=x152));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	int64_t x155 = -1LL;
	static uint16_t x156 = 3911U;
	int32_t t38 = 2753269;

    t38 = (x153*((x154|x155)!=x156));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -1LL;
	static volatile uint32_t x159 = UINT32_MAX;
	static volatile uint8_t x160 = UINT8_MAX;
	int32_t t39 = 4;

    t39 = (x157*((x158|x159)!=x160));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = -29338;
	int32_t x164 = INT32_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x161*((x162|x163)!=x164));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 124588434U;
	uint16_t x166 = 0U;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = -3;
	static uint32_t t41 = 435371815U;

    t41 = (x165*((x166|x167)!=x168));

    if (t41 != 124588434U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	volatile int32_t x172 = 403;

    t42 = (x169*((x170|x171)!=x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x175 = INT16_MAX;
	int64_t x176 = 4637664385LL;

    t43 = (x173*((x174|x175)!=x176));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MIN;
	volatile int16_t x179 = INT16_MAX;
	static int16_t x180 = INT16_MAX;
	int32_t t44 = INT32_MAX;

    t44 = (x177*((x178|x179)!=x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = 681;
	int16_t x184 = -1;
	volatile int32_t t45 = 55111;

    t45 = (x181*((x182|x183)!=x184));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = 139958;
	int64_t x186 = -1LL;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 5924;

    t46 = (x185*((x186|x187)!=x188));

    if (t46 != 139958) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -4;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = INT32_MIN;

    t47 = (x189*((x190|x191)!=x192));

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MIN;
	uint16_t x194 = 17065U;
	volatile int8_t x195 = INT8_MAX;
	volatile int32_t t48 = INT32_MIN;

    t48 = (x193*((x194|x195)!=x196));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MAX;
	volatile int16_t x200 = INT16_MAX;

    t49 = (x197*((x198|x199)!=x200));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MAX;
	volatile uint64_t x203 = 119530799750LLU;
	int16_t x204 = -957;
	int32_t t50 = 102;

    t50 = (x201*((x202|x203)!=x204));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = 207751972216LLU;

    t51 = (x205*((x206|x207)!=x208));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = 2U;
	int64_t x210 = INT64_MAX;
	uint16_t x212 = 69U;
	int32_t t52 = 1366680;

    t52 = (x209*((x210|x211)!=x212));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	static volatile int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	int16_t x216 = -1;
	volatile int32_t t53 = -295;

    t53 = (x213*((x214|x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint16_t x218 = 25865U;
	static int64_t x220 = 361349880LL;

    t54 = (x217*((x218|x219)!=x220));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = INT8_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -203;

    t55 = (x221*((x222|x223)!=x224));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	static uint16_t x228 = 4131U;
	static volatile int64_t t56 = 0LL;

    t56 = (x225*((x226|x227)!=x228));

    if (t56 != -36702LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 1U;
	int64_t x230 = INT64_MIN;
	static uint32_t x231 = 69200835U;
	volatile int32_t t57 = 687652617;

    t57 = (x229*((x230|x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	uint16_t x234 = 1U;
	static uint32_t x236 = 305339U;

    t58 = (x233*((x234|x235)!=x236));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 70;
	int64_t x239 = 2LL;
	int16_t x240 = 48;

    t59 = (x237*((x238|x239)!=x240));

    if (t59 != 70) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 534;

    t60 = (x241*((x242|x243)!=x244));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	static int32_t t61 = 204616865;

    t61 = (x245*((x246|x247)!=x248));

    if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x252 = -1LL;

    t62 = (x249*((x250|x251)!=x252));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	uint16_t x254 = 5U;
	uint64_t x255 = 19120229062LLU;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 8273130;

    t63 = (x253*((x254|x255)!=x256));

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int8_t x259 = 14;
	volatile int8_t x260 = INT8_MAX;
	volatile int64_t t64 = INT64_MIN;

    t64 = (x257*((x258|x259)!=x260));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x262 = UINT8_MAX;
	uint16_t x263 = 21U;
	int8_t x264 = -1;
	uint64_t t65 = 19836LLU;

    t65 = (x261*((x262|x263)!=x264));

    if (t65 != 564LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 1053013U;
	int8_t x266 = INT8_MAX;
	uint32_t x268 = 6902518U;
	volatile uint32_t t66 = 1610U;

    t66 = (x265*((x266|x267)!=x268));

    if (t66 != 1053013U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	volatile int64_t x271 = -63506101LL;
	int64_t t67 = INT64_MIN;

    t67 = (x269*((x270|x271)!=x272));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	static int64_t x274 = 100317553600262851LL;
	volatile int8_t x276 = 1;
	volatile int32_t t68 = -1;

    t68 = (x273*((x274|x275)!=x276));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int64_t x278 = 288LL;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = -44;
	volatile int32_t t69 = -23116063;

    t69 = (x277*((x278|x279)!=x280));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = 0;
	static volatile int16_t x283 = -1;

    t70 = (x281*((x282|x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	static int8_t x287 = 30;
	static volatile int16_t x288 = -1;
	volatile int32_t t71 = 414;

    t71 = (x285*((x286|x287)!=x288));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	int8_t x292 = INT8_MIN;

    t72 = (x289*((x290|x291)!=x292));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = -1;
	volatile uint32_t x295 = 8181U;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -12859;

    t73 = (x293*((x294|x295)!=x296));

    if (t73 != -148287) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t74 = -513073;

    t74 = (x297*((x298|x299)!=x300));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	uint16_t x303 = 7033U;
	uint16_t x304 = 1059U;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x301*((x302|x303)!=x304));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -1;
	int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MAX;
	int64_t x308 = INT64_MAX;

    t76 = (x305*((x306|x307)!=x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 441557;

    t77 = (x309*((x310|x311)!=x312));

    if (t77 != 54) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint64_t x314 = UINT64_MAX;
	static int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t78 = INT32_MIN;

    t78 = (x313*((x314|x315)!=x316));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = -183888;

    t79 = (x317*((x318|x319)!=x320));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	int16_t x322 = INT16_MAX;
	int8_t x324 = INT8_MIN;

    t80 = (x321*((x322|x323)!=x324));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 5U;
	static volatile int64_t x326 = -409677651LL;
	volatile int16_t x328 = -1;
	static volatile int32_t t81 = 117463;

    t81 = (x325*((x326|x327)!=x328));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 20547LL;
	volatile uint8_t x330 = 25U;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = 534559479846308LL;
	static int64_t t82 = 40LL;

    t82 = (x329*((x330|x331)!=x332));

    if (t82 != 20547LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	int32_t t83 = 665;

    t83 = (x333*((x334|x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = -297;
	volatile uint32_t x338 = UINT32_MAX;
	volatile uint32_t x339 = 60155358U;
	static uint32_t x340 = 2256U;

    t84 = (x337*((x338|x339)!=x340));

    if (t84 != -297) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = INT16_MAX;
	int16_t x343 = -7;
	volatile uint32_t x344 = 7U;
	volatile uint64_t t85 = 231406LLU;

    t85 = (x341*((x342|x343)!=x344));

    if (t85 != 87198673150580LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	int64_t x346 = -4406LL;
	volatile int32_t t86 = -985005432;

    t86 = (x345*((x346|x347)!=x348));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = INT64_MIN;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = 1389996;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

    t87 = (x349*((x350|x351)!=x352));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = 501;
	int32_t x354 = INT32_MAX;
	volatile int32_t x356 = 1619499;
	static int32_t t88 = 0;

    t88 = (x353*((x354|x355)!=x356));

    if (t88 != 501) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = -1;
	uint64_t x359 = 6151045794829033353LLU;
	uint32_t x360 = 337U;
	volatile int32_t t89 = 14679585;

    t89 = (x357*((x358|x359)!=x360));

    if (t89 != 9898) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MAX;
	static volatile uint16_t x362 = UINT16_MAX;
	static uint8_t x363 = 1U;
	static int16_t x364 = -127;
	volatile int64_t t90 = INT64_MAX;

    t90 = (x361*((x362|x363)!=x364));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = -260141588LL;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 436196239;

    t91 = (x365*((x366|x367)!=x368));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x370 = UINT8_MAX;
	int64_t x371 = -4715784334458597LL;
	static int32_t t92 = -4893128;

    t92 = (x369*((x370|x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -81;
	static int64_t x374 = 441821264814LL;
	int32_t t93 = 481;

    t93 = (x373*((x374|x375)!=x376));

    if (t93 != -81) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = 6U;
	volatile uint8_t x378 = 2U;
	int64_t x379 = 1559LL;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -105;

    t94 = (x377*((x378|x379)!=x380));

    if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x381 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

    t95 = (x381*((x382|x383)!=x384));

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 84U;
	uint8_t x386 = 7U;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = 149U;

    t96 = (x385*((x386|x387)!=x388));

    if (t96 != 84) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	static int32_t x391 = -1;
	static volatile int64_t x392 = INT64_MAX;
	int32_t t97 = -22155388;

    t97 = (x389*((x390|x391)!=x392));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MIN;
	static int64_t x395 = INT64_MIN;
	volatile int16_t x396 = -1;
	int32_t t98 = INT32_MAX;

    t98 = (x393*((x394|x395)!=x396));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x398 = UINT64_MAX;
	static uint32_t x400 = 0U;
	static int64_t t99 = 23271413466018LL;

    t99 = (x397*((x398|x399)!=x400));

    if (t99 != -228LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int16_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = -1;
	volatile int32_t t100 = 16586;

    t100 = (x401*((x402|x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x405 = -1;
	volatile int32_t x406 = INT32_MAX;
	int32_t x407 = INT32_MIN;
	static volatile int64_t x408 = INT64_MAX;
	volatile int32_t t101 = -2150;

    t101 = (x405*((x406|x407)!=x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -8944;
	static uint32_t x411 = 1722598U;
	static volatile uint32_t x412 = 419793U;

    t102 = (x409*((x410|x411)!=x412));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 10375194U;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;

    t103 = (x413*((x414|x415)!=x416));

    if (t103 != 10375194U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MIN;
	static int32_t x420 = -1;
	int32_t t104 = INT32_MAX;

    t104 = (x417*((x418|x419)!=x420));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = 4;
	volatile int8_t x424 = -15;

    t105 = (x421*((x422|x423)!=x424));

    if (t105 != 4) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x425 = UINT8_MAX;
	int8_t x428 = -1;
	int32_t t106 = -1;

    t106 = (x425*((x426|x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MAX;
	int32_t x430 = INT32_MAX;
	int32_t x432 = -1;
	int64_t t107 = INT64_MAX;

    t107 = (x429*((x430|x431)!=x432));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 227U;
	static int32_t x434 = -76;
	int64_t x435 = -70461208230LL;
	volatile int32_t t108 = 8730;

    t108 = (x433*((x434|x435)!=x436));

    if (t108 != 227) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = -26;
	int8_t x439 = -3;
	static volatile uint8_t x440 = 70U;
	volatile int64_t t109 = INT64_MIN;

    t109 = (x437*((x438|x439)!=x440));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = INT64_MAX;
	uint16_t x442 = 829U;
	int64_t x443 = 0LL;
	uint64_t x444 = 27476571090774LLU;

    t110 = (x441*((x442|x443)!=x444));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	volatile uint8_t x446 = 102U;
	volatile int32_t t111 = -510600189;

    t111 = (x445*((x446|x447)!=x448));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = -1LL;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -1972;
	volatile uint64_t x452 = 906LLU;
	volatile int64_t t112 = -4013551308686004912LL;

    t112 = (x449*((x450|x451)!=x452));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = 6102449292LL;
	uint64_t x455 = 64878120LLU;
	int64_t x456 = INT64_MAX;
	static int64_t t113 = 3937802137336054562LL;

    t113 = (x453*((x454|x455)!=x456));

    if (t113 != 6102449292LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 47660805LLU;
	uint16_t x458 = 12992U;
	uint16_t x460 = UINT16_MAX;

    t114 = (x457*((x458|x459)!=x460));

    if (t114 != 47660805LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = -5;
	uint8_t x462 = 0U;
	uint32_t x463 = 471U;
	int32_t x464 = INT32_MIN;
	static int32_t t115 = 32070414;

    t115 = (x461*((x462|x463)!=x464));

    if (t115 != -5) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t t116 = 11379;

    t116 = (x465*((x466|x467)!=x468));

    if (t116 != -737474260) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -45;
	volatile int32_t x470 = 97373756;
	static uint8_t x471 = 43U;
	int8_t x472 = 13;

    t117 = (x469*((x470|x471)!=x472));

    if (t117 != -45) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x475 = -1805;
	uint8_t x476 = UINT8_MAX;
	volatile uint32_t t118 = 336007844U;

    t118 = (x473*((x474|x475)!=x476));

    if (t118 != 51056U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = 8557;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -3283;

    t119 = (x477*((x478|x479)!=x480));

    if (t119 != 8557) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	static volatile int64_t x482 = 681205LL;
	volatile int64_t x484 = -1LL;
	int32_t t120 = -2472;

    t120 = (x481*((x482|x483)!=x484));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MAX;
	int32_t x486 = 6263;
	volatile int16_t x488 = INT16_MIN;
	volatile int64_t t121 = INT64_MAX;

    t121 = (x485*((x486|x487)!=x488));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 7U;
	volatile int64_t x490 = -1LL;
	uint64_t x491 = 3968612653741599LLU;
	static int32_t x492 = -912;

    t122 = (x489*((x490|x491)!=x492));

    if (t122 != 7U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -119286392536637479LL;
	int8_t x494 = INT8_MIN;
	static volatile uint32_t x495 = UINT32_MAX;
	uint64_t x496 = 101722LLU;
	volatile int64_t t123 = -3767LL;

    t123 = (x493*((x494|x495)!=x496));

    if (t123 != -119286392536637479LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x498 = -1;
	volatile int16_t x499 = -1;
	int16_t x500 = -1;

    t124 = (x497*((x498|x499)!=x500));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -7;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = 2590880U;
	static int32_t t125 = -30395;

    t125 = (x501*((x502|x503)!=x504));

    if (t125 != -7) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 1U;
	volatile int32_t x506 = -1;
	static uint16_t x508 = UINT16_MAX;
	volatile int32_t t126 = -4;

    t126 = (x505*((x506|x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MAX;
	int16_t x511 = INT16_MIN;
	int8_t x512 = -1;
	int32_t t127 = -60247;

    t127 = (x509*((x510|x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = -1LL;
	int32_t x515 = INT32_MAX;
	volatile int64_t t128 = 30591600684388774LL;

    t128 = (x513*((x514|x515)!=x516));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = -14;
	volatile int32_t x518 = -1;
	int16_t x519 = INT16_MIN;
	volatile int8_t x520 = 39;
	int32_t t129 = 1;

    t129 = (x517*((x518|x519)!=x520));

    if (t129 != -14) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	volatile int16_t x522 = INT16_MAX;
	static int64_t x523 = 64156672LL;
	volatile int32_t t130 = 3772;

    t130 = (x521*((x522|x523)!=x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x527 = UINT8_MAX;
	static uint8_t x528 = UINT8_MAX;
	static volatile int32_t t131 = INT32_MIN;

    t131 = (x525*((x526|x527)!=x528));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	uint64_t x530 = 989023049078LLU;
	int64_t x531 = INT64_MIN;
	volatile int32_t x532 = -1;
	int64_t t132 = -20857LL;

    t132 = (x529*((x530|x531)!=x532));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x534 = 4;
	uint64_t x535 = 30406LLU;
	volatile int32_t t133 = -12;

    t133 = (x533*((x534|x535)!=x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	volatile int8_t x540 = -34;

    t134 = (x537*((x538|x539)!=x540));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 0;
	static int16_t x543 = -7249;
	int16_t x544 = INT16_MAX;
	volatile int32_t t135 = -165;

    t135 = (x541*((x542|x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 960418U;
	volatile int64_t x546 = INT64_MIN;
	volatile uint32_t x547 = 498014375U;

    t136 = (x545*((x546|x547)!=x548));

    if (t136 != 960418U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -1;
	int64_t x550 = INT64_MIN;
	int32_t t137 = -535641135;

    t137 = (x549*((x550|x551)!=x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	uint64_t x555 = 50040730891927LLU;
	uint64_t x556 = 15753LLU;
	static volatile int32_t t138 = 10576;

    t138 = (x553*((x554|x555)!=x556));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 0;
	int64_t x558 = INT64_MIN;
	volatile int16_t x559 = 555;
	int64_t x560 = INT64_MIN;

    t139 = (x557*((x558|x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = 200U;
	int32_t x564 = INT32_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x561*((x562|x563)!=x564));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x567 = 5993U;
	uint16_t x568 = 20239U;
	volatile int64_t t141 = -463878LL;

    t141 = (x565*((x566|x567)!=x568));

    if (t141 != 443077937951LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 0LL;
	int8_t x570 = INT8_MIN;
	uint16_t x571 = UINT16_MAX;
	static uint16_t x572 = 1U;
	int64_t t142 = -1527715066783330LL;

    t142 = (x569*((x570|x571)!=x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x574 = -1;
	int8_t x575 = INT8_MAX;
	int32_t x576 = INT32_MIN;

    t143 = (x573*((x574|x575)!=x576));

    if (t143 != -62) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MIN;
	int32_t x578 = -1;
	int64_t x579 = INT64_MIN;
	uint64_t x580 = UINT64_MAX;
	int64_t t144 = -15757193141833967LL;

    t144 = (x577*((x578|x579)!=x580));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	volatile int16_t x582 = INT16_MAX;
	uint32_t x583 = 22344587U;
	int16_t x584 = -1;
	volatile int64_t t145 = INT64_MIN;

    t145 = (x581*((x582|x583)!=x584));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MIN;
	static int32_t x588 = INT32_MIN;
	int32_t t146 = 404320;

    t146 = (x585*((x586|x587)!=x588));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x591 = -7;
	volatile uint32_t t147 = UINT32_MAX;

    t147 = (x589*((x590|x591)!=x592));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	static int16_t x595 = 30;
	int8_t x596 = -5;
	int64_t t148 = 24733432903886LL;

    t148 = (x593*((x594|x595)!=x596));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	uint64_t x598 = UINT64_MAX;
	uint8_t x599 = 1U;
	int64_t x600 = 883827595962LL;
	int32_t t149 = 1;

    t149 = (x597*((x598|x599)!=x600));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	int32_t x604 = 57698;
	volatile int64_t t150 = INT64_MIN;

    t150 = (x601*((x602|x603)!=x604));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = UINT64_MAX;
	int16_t x606 = INT16_MIN;
	volatile uint32_t x607 = 9489U;
	volatile int16_t x608 = INT16_MIN;
	static volatile uint64_t t151 = UINT64_MAX;

    t151 = (x605*((x606|x607)!=x608));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MIN;
	static int16_t x610 = -67;
	int64_t x612 = -1LL;

    t152 = (x609*((x610|x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x616 = INT16_MAX;
	static uint64_t t153 = UINT64_MAX;

    t153 = (x613*((x614|x615)!=x616));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	static int64_t x618 = INT64_MIN;
	uint64_t x619 = 482909977628192536LLU;
	uint16_t x620 = 38U;
	volatile int64_t t154 = -5037825992LL;

    t154 = (x617*((x618|x619)!=x620));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int16_t x624 = INT16_MIN;
	volatile int32_t t155 = 26;

    t155 = (x621*((x622|x623)!=x624));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = INT8_MAX;
	int64_t x626 = INT64_MAX;
	int64_t x627 = INT64_MIN;
	uint16_t x628 = 0U;
	int32_t t156 = -6894;

    t156 = (x625*((x626|x627)!=x628));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	static int32_t x630 = INT32_MAX;
	static uint8_t x631 = 3U;
	volatile int32_t t157 = 14;

    t157 = (x629*((x630|x631)!=x632));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	static int32_t x635 = INT32_MIN;
	static int32_t x636 = INT32_MAX;
	static volatile int32_t t158 = 360;

    t158 = (x633*((x634|x635)!=x636));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x638 = INT8_MAX;
	int16_t x639 = 545;
	volatile int8_t x640 = INT8_MAX;
	uint64_t t159 = UINT64_MAX;

    t159 = (x637*((x638|x639)!=x640));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = -3;
	int8_t x644 = INT8_MAX;
	int32_t t160 = 322;

    t160 = (x641*((x642|x643)!=x644));

    if (t160 != -3) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = -958;

    t161 = (x645*((x646|x647)!=x648));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x651 = 63417486LLU;
	int32_t x652 = -14239;
	volatile int32_t t162 = -43;

    t162 = (x649*((x650|x651)!=x652));

    if (t162 != 1844) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	uint8_t x654 = 60U;
	int16_t x655 = INT16_MAX;
	int64_t x656 = INT64_MIN;
	static volatile uint32_t t163 = UINT32_MAX;

    t163 = (x653*((x654|x655)!=x656));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	volatile uint8_t x659 = 116U;
	volatile int32_t t164 = -232477963;

    t164 = (x657*((x658|x659)!=x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	volatile uint16_t x662 = 16586U;
	volatile uint8_t x664 = 120U;

    t165 = (x661*((x662|x663)!=x664));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int8_t x666 = -1;
	volatile int32_t x667 = -9;
	volatile int64_t x668 = -111267418LL;
	volatile uint32_t t166 = UINT32_MAX;

    t166 = (x665*((x666|x667)!=x668));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static int8_t x672 = INT8_MIN;
	int32_t t167 = 0;

    t167 = (x669*((x670|x671)!=x672));

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 57LLU;
	int16_t x674 = -12064;
	int8_t x675 = -21;
	uint64_t t168 = 21365755824369544LLU;

    t168 = (x673*((x674|x675)!=x676));

    if (t168 != 57LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x677 = 125LLU;
	int64_t x678 = -1LL;
	static int64_t x679 = 5121LL;
	int64_t x680 = INT64_MIN;
	uint64_t t169 = 96390723396408036LLU;

    t169 = (x677*((x678|x679)!=x680));

    if (t169 != 125LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 26;
	int16_t x683 = INT16_MIN;

    t170 = (x681*((x682|x683)!=x684));

    if (t170 != 26) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MAX;
	static int8_t x687 = INT8_MAX;
	static uint32_t x688 = 1082023U;
	volatile int64_t t171 = INT64_MAX;

    t171 = (x685*((x686|x687)!=x688));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 79421446U;
	uint32_t x690 = 198093U;
	int16_t x691 = -587;
	uint16_t x692 = UINT16_MAX;
	volatile uint32_t t172 = 7550U;

    t172 = (x689*((x690|x691)!=x692));

    if (t172 != 79421446U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = -1;
	volatile int16_t x695 = -1;
	int16_t x696 = -1;
	volatile int32_t t173 = 38867073;

    t173 = (x693*((x694|x695)!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = -275;
	volatile int16_t x698 = INT16_MAX;
	volatile int8_t x700 = INT8_MAX;
	volatile int32_t t174 = 10;

    t174 = (x697*((x698|x699)!=x700));

    if (t174 != -275) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	uint32_t x702 = 31U;
	int16_t x703 = -1;
	uint32_t x704 = 55323U;

    t175 = (x701*((x702|x703)!=x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 194442511496LLU;
	static int16_t x706 = -15;
	int8_t x707 = 28;
	int32_t x708 = -201987;

    t176 = (x705*((x706|x707)!=x708));

    if (t176 != 194442511496LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = -27660LL;
	static uint8_t x710 = 25U;
	uint16_t x711 = 4573U;
	int64_t t177 = 1LL;

    t177 = (x709*((x710|x711)!=x712));

    if (t177 != -27660LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	int16_t x716 = 1;
	int64_t t178 = INT64_MIN;

    t178 = (x713*((x714|x715)!=x716));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MAX;
	static volatile uint8_t x718 = 113U;
	int16_t x720 = -1;
	volatile int32_t t179 = -867719340;

    t179 = (x717*((x718|x719)!=x720));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x723 = INT32_MIN;
	volatile int64_t x724 = INT64_MIN;

    t180 = (x721*((x722|x723)!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int64_t x726 = -1988423670188048LL;
	static uint16_t x727 = 1U;
	int16_t x728 = -1;
	static volatile int32_t t181 = INT32_MIN;

    t181 = (x725*((x726|x727)!=x728));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x729 = 3719264U;
	volatile int16_t x730 = INT16_MAX;
	volatile uint64_t x731 = 87LLU;
	int16_t x732 = -4763;
	uint32_t t182 = 248764177U;

    t182 = (x729*((x730|x731)!=x732));

    if (t182 != 3719264U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	uint16_t x735 = UINT16_MAX;
	uint16_t x736 = 593U;
	volatile int32_t t183 = 0;

    t183 = (x733*((x734|x735)!=x736));

    if (t183 != 30) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	volatile int8_t x738 = INT8_MIN;
	int64_t x740 = 115040LL;
	static volatile int32_t t184 = 506152;

    t184 = (x737*((x738|x739)!=x740));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MIN;
	static volatile int32_t x742 = -5830846;
	int64_t x744 = INT64_MIN;

    t185 = (x741*((x742|x743)!=x744));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int64_t x746 = INT64_MAX;
	int8_t x747 = INT8_MIN;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (x745*((x746|x747)!=x748));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MAX;
	static int16_t x751 = -1;
	int32_t x752 = INT32_MIN;
	int32_t t187 = 768284526;

    t187 = (x749*((x750|x751)!=x752));

    if (t187 != 12) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = UINT32_MAX;
	int8_t x754 = 8;
	int64_t x755 = 8284383LL;
	int16_t x756 = -1;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (x753*((x754|x755)!=x756));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 193058;
	static int8_t x760 = INT8_MIN;

    t189 = (x757*((x758|x759)!=x760));

    if (t189 != 193058) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 14U;
	static volatile int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MAX;
	volatile int32_t t190 = 25904;

    t190 = (x761*((x762|x763)!=x764));

    if (t190 != 14) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = INT64_MIN;
	int8_t x767 = INT8_MAX;
	int32_t x768 = INT32_MAX;
	int32_t t191 = INT32_MIN;

    t191 = (x765*((x766|x767)!=x768));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 177U;
	uint16_t x770 = UINT16_MAX;
	volatile int64_t x771 = -8765815117415311LL;
	int64_t x772 = -401139909604354LL;
	volatile uint32_t t192 = 325U;

    t192 = (x769*((x770|x771)!=x772));

    if (t192 != 177U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -5;
	static int16_t x774 = -1;
	int64_t x775 = INT64_MIN;
	int32_t x776 = -3934;
	int32_t t193 = -48;

    t193 = (x773*((x774|x775)!=x776));

    if (t193 != -5) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	int64_t x778 = 7252247653879194LL;
	static uint16_t x779 = 23U;
	static int64_t x780 = INT64_MIN;
	int32_t t194 = 784242;

    t194 = (x777*((x778|x779)!=x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x782 = 31U;
	uint64_t x784 = 85823LLU;
	volatile int32_t t195 = INT32_MIN;

    t195 = (x781*((x782|x783)!=x784));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MAX;
	uint64_t x786 = 30524350LLU;
	volatile int32_t x788 = -936386399;

    t196 = (x785*((x786|x787)!=x788));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -1;
	int8_t x790 = -12;
	int32_t x792 = 204;
	volatile int32_t t197 = -13;

    t197 = (x789*((x790|x791)!=x792));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = UINT64_MAX;
	uint16_t x794 = UINT16_MAX;
	static uint32_t x795 = 2U;
	int16_t x796 = INT16_MAX;
	static volatile uint64_t t198 = UINT64_MAX;

    t198 = (x793*((x794|x795)!=x796));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int64_t x798 = -1LL;
	static uint64_t x800 = 11146470738517LLU;
	volatile int32_t t199 = 13524;

    t199 = (x797*((x798|x799)!=x800));

    if (t199 != -1) { NG(); } else { ; }
	
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

