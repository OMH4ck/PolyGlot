
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

static int16_t x10 = -913;
static int16_t x11 = -1;
static volatile uint16_t x16 = UINT16_MAX;
volatile int16_t x18 = -1;
int32_t x24 = INT32_MIN;
int8_t x35 = INT8_MIN;
volatile int64_t x41 = INT64_MIN;
volatile uint32_t x43 = 440U;
uint32_t x44 = 5324301U;
static uint16_t x50 = UINT16_MAX;
int64_t x56 = INT64_MIN;
uint16_t x60 = UINT16_MAX;
volatile uint16_t x62 = 1149U;
int8_t x66 = INT8_MAX;
static uint8_t x67 = UINT8_MAX;
static uint8_t x75 = 26U;
int16_t x85 = 2256;
int8_t x90 = -11;
uint8_t x97 = UINT8_MAX;
int8_t x98 = -3;
int32_t x99 = 59;
int64_t x115 = 266067406240LL;
int32_t x116 = INT32_MIN;
static uint64_t x119 = UINT64_MAX;
static volatile int32_t t27 = 15370928;
int16_t x134 = INT16_MIN;
int64_t x138 = 1176353599782758518LL;
volatile int32_t t30 = 2570;
int16_t x147 = -11934;
int32_t x148 = -1;
static int32_t t31 = 1;
int32_t x166 = INT32_MIN;
volatile int32_t t36 = 3;
int64_t x178 = -8127347LL;
static uint16_t x179 = UINT16_MAX;
int32_t t39 = -52552158;
int16_t x181 = 55;
uint64_t x183 = 13719891155LLU;
uint8_t x186 = 37U;
volatile int32_t t42 = -13;
uint16_t x204 = UINT16_MAX;
int64_t x216 = INT64_MAX;
int8_t x223 = -2;
int64_t x226 = -1LL;
uint64_t x231 = 3373716580LLU;
volatile int32_t t49 = -382001;
static uint32_t x239 = 31U;
volatile int32_t x241 = -1;
int32_t t52 = 993;
int8_t x252 = -32;
uint8_t x262 = 15U;
volatile int32_t x264 = -1;
volatile int32_t t56 = 85148503;
static int16_t x266 = INT16_MIN;
int8_t x268 = INT8_MIN;
static volatile uint32_t x275 = 294706215U;
static int32_t x277 = INT32_MAX;
volatile uint8_t x282 = 17U;
int32_t x287 = 825125;
int64_t x299 = 4066502LL;
uint64_t x305 = UINT64_MAX;
int64_t x309 = 375LL;
int16_t x310 = INT16_MIN;
static uint64_t x312 = 128576LLU;
volatile int16_t x313 = -7;
int16_t x314 = 15;
static volatile int32_t t68 = 122944935;
int16_t x328 = INT16_MIN;
int8_t x341 = INT8_MIN;
int32_t x342 = -1;
uint8_t x350 = 3U;
int8_t x352 = INT8_MIN;
static volatile int32_t t73 = -5;
int8_t x363 = -11;
uint32_t x366 = UINT32_MAX;
static int16_t x371 = INT16_MAX;
static int64_t x372 = INT64_MAX;
volatile int32_t t77 = -3671;
static int8_t x375 = INT8_MAX;
static uint64_t x376 = 393731431435071286LLU;
uint8_t x380 = 4U;
int32_t x384 = -1;
int32_t t82 = -1;
int32_t x393 = -1;
int16_t x398 = INT16_MIN;
int8_t x402 = -1;
volatile int32_t t85 = -16768430;
volatile int64_t x407 = -1LL;
static volatile uint64_t x410 = UINT64_MAX;
int8_t x411 = INT8_MIN;
int64_t x415 = INT64_MIN;
static int32_t t90 = -2;
volatile int32_t x443 = INT32_MIN;
volatile int8_t x444 = 8;
static int8_t x446 = INT8_MAX;
int32_t x474 = 2;
int32_t t98 = -45226;
volatile int64_t x483 = -34538738593984383LL;
int8_t x485 = -1;
int8_t x489 = -1;
uint64_t x490 = 1588556782389LLU;
int16_t x502 = -1;
volatile int8_t x504 = -59;
uint32_t x505 = 227661U;
volatile int64_t x523 = -138305849267703LL;
int32_t x530 = INT32_MIN;
int16_t x531 = -1;
volatile int32_t t111 = -28;
static volatile int32_t t112 = 60727;
int16_t x538 = INT16_MIN;
volatile uint16_t x539 = 4U;
static volatile int32_t t113 = 5;
uint64_t x542 = 101014LLU;
static int32_t x545 = INT32_MIN;
static int16_t x546 = INT16_MIN;
int16_t x550 = -1;
int16_t x557 = 0;
volatile int32_t t117 = -492703142;
static int16_t x563 = INT16_MIN;
int32_t x570 = -1;
static volatile int32_t t119 = -17532;
int16_t x574 = INT16_MIN;
int16_t x578 = 2043;
int32_t t121 = 417324588;
uint8_t x586 = UINT8_MAX;
int8_t x587 = INT8_MIN;
static int16_t x595 = INT16_MAX;
volatile int16_t x598 = -862;
static int16_t x599 = -101;
static int32_t t126 = -29647008;
uint64_t x604 = UINT64_MAX;
volatile uint16_t x607 = 4868U;
int8_t x613 = 1;
static int32_t x617 = INT32_MIN;
int32_t x621 = -213;
static int32_t x627 = -1;
int64_t x632 = INT64_MAX;
int32_t t134 = 35;
uint8_t x634 = UINT8_MAX;
volatile int32_t t135 = 1313180;
int64_t x637 = 1070LL;
static int32_t x641 = -1;
volatile int32_t t137 = 2512;
int64_t x645 = -1LL;
uint16_t x648 = UINT16_MAX;
static volatile int16_t x653 = -1;
uint64_t x656 = 53997LLU;
int32_t x661 = 49781251;
static int8_t x662 = INT8_MIN;
int32_t x664 = 136012;
int8_t x665 = -1;
int64_t x666 = INT64_MIN;
int64_t x672 = INT64_MAX;
int32_t t144 = 309;
int32_t t145 = -1127;
int16_t x679 = INT16_MIN;
int16_t x693 = INT16_MIN;
int64_t x699 = 900875694052LL;
int64_t x700 = -1LL;
volatile int32_t t149 = -500288506;
int32_t t150 = -14726;
volatile int8_t x709 = INT8_MIN;
int64_t x712 = -1LL;
static int64_t x714 = INT64_MIN;
volatile int16_t x720 = INT16_MIN;
int8_t x724 = 1;
static uint16_t x725 = 27356U;
int16_t x734 = -42;
int32_t x736 = -1;
uint64_t x744 = 433LLU;
volatile int32_t x753 = INT32_MIN;
uint8_t x754 = UINT8_MAX;
uint32_t x756 = 1931U;
static int64_t x776 = -4047650334528LL;
static uint16_t x782 = UINT16_MAX;
int32_t t168 = 5;
volatile int32_t x791 = 162659;
uint64_t x807 = 1301336LLU;
static uint8_t x813 = UINT8_MAX;
volatile uint32_t x815 = 0U;
int64_t x837 = INT64_MIN;
int64_t x841 = INT64_MAX;
uint8_t x842 = UINT8_MAX;
int32_t t177 = -411040602;
volatile int64_t x847 = -1LL;
volatile int64_t x852 = INT64_MAX;
static volatile uint16_t x853 = UINT16_MAX;
uint64_t x854 = 34789LLU;
uint8_t x861 = 1U;
int16_t x869 = INT16_MIN;
int16_t x870 = 140;
volatile uint32_t x872 = UINT32_MAX;
int32_t x895 = 43;
uint8_t x902 = UINT8_MAX;
int16_t x910 = 198;
int8_t x911 = INT8_MIN;
int16_t x932 = 31;
static int16_t x935 = -1;


void f0(void) {
    	volatile uint16_t x1 = 5U;
	int8_t x2 = 38;
	uint16_t x3 = 185U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 433;

    t0 = (x1!=((x2-x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = 0;
	uint32_t x12 = 64850086U;
	static int32_t t1 = -13181;

    t1 = (x9!=((x10-x11)!=x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x13 = -1LL;
	uint16_t x14 = 2902U;
	int16_t x15 = INT16_MIN;
	volatile int32_t t2 = 349811264;

    t2 = (x13!=((x14-x15)!=x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 533U;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 17898922208404091LLU;
	volatile int32_t t3 = 2;

    t3 = (x17!=((x18-x19)!=x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = UINT32_MAX;
	int8_t x22 = 1;
	int32_t x23 = -1;
	int32_t t4 = 26546468;

    t4 = (x21!=((x22-x23)!=x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = UINT32_MAX;
	int64_t x26 = -1LL;
	uint64_t x27 = 2LLU;
	static int32_t x28 = INT32_MIN;
	static int32_t t5 = 64943740;

    t5 = (x25!=((x26-x27)!=x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 2988U;
	static int16_t x31 = -1;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t6 = -1109406;

    t6 = (x29!=((x30-x31)!=x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = 0;
	uint16_t x34 = UINT16_MAX;
	static int8_t x36 = -1;
	int32_t t7 = -10024;

    t7 = (x33!=((x34-x35)!=x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;
	volatile uint16_t x40 = 0U;
	volatile int32_t t8 = -1;

    t8 = (x37!=((x38-x39)!=x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x42 = 330580595296LL;
	int32_t t9 = 458;

    t9 = (x41!=((x42-x43)!=x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 1;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MIN;
	volatile int8_t x48 = -1;
	volatile int32_t t10 = 55401;

    t10 = (x45!=((x46-x47)!=x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	int64_t x51 = -1LL;
	int64_t x52 = -7LL;
	volatile int32_t t11 = 7520091;

    t11 = (x49!=((x50-x51)!=x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x53 = INT16_MAX;
	volatile int16_t x54 = -704;
	int8_t x55 = INT8_MIN;
	int32_t t12 = 276417;

    t12 = (x53!=((x54-x55)!=x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = -1;
	volatile int32_t t13 = -27;

    t13 = (x57!=((x58-x59)!=x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -1;
	volatile int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t14 = -1;

    t14 = (x61!=((x62-x63)!=x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	uint8_t x68 = 2U;
	static int32_t t15 = 4611;

    t15 = (x65!=((x66-x67)!=x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	int32_t x70 = -36748;
	static volatile int32_t x71 = 2;
	int32_t x72 = INT32_MAX;
	int32_t t16 = 3;

    t16 = (x69!=((x70-x71)!=x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	uint64_t x74 = UINT64_MAX;
	volatile uint64_t x76 = 4LLU;
	static volatile int32_t t17 = 3838;

    t17 = (x73!=((x74-x75)!=x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -1;
	volatile uint16_t x78 = 21576U;
	uint8_t x79 = 46U;
	int8_t x80 = -3;
	volatile int32_t t18 = 509142;

    t18 = (x77!=((x78-x79)!=x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x81 = 6U;
	volatile uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = 16U;
	int32_t t19 = -883192350;

    t19 = (x81!=((x82-x83)!=x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MIN;
	volatile int32_t t20 = -307;

    t20 = (x85!=((x86-x87)!=x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 62277U;
	volatile uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 3U;
	volatile int32_t t21 = -66163902;

    t21 = (x89!=((x90-x91)!=x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -374;
	uint32_t x94 = 6U;
	volatile uint32_t x95 = 94263348U;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t22 = 2039158;

    t22 = (x93!=((x94-x95)!=x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x100 = 215;
	int32_t t23 = -3834;

    t23 = (x97!=((x98-x99)!=x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	static int32_t x103 = INT32_MAX;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = -8641;

    t24 = (x101!=((x102-x103)!=x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x110 = 60;
	static volatile int16_t x111 = -1;
	volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = -19;

    t25 = (x109!=((x110-x111)!=x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	volatile int16_t x114 = -1767;
	int32_t t26 = 1;

    t26 = (x113!=((x114-x115)!=x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x117 = 958U;
	int32_t x118 = 0;
	int32_t x120 = INT32_MIN;

    t27 = (x117!=((x118-x119)!=x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	uint8_t x135 = 5U;
	static uint16_t x136 = UINT16_MAX;
	int32_t t28 = 7;

    t28 = (x133!=((x134-x135)!=x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x137 = -1;
	static int8_t x139 = INT8_MAX;
	static volatile uint32_t x140 = 50647U;
	volatile int32_t t29 = -1;

    t29 = (x137!=((x138-x139)!=x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x141 = 39U;
	uint64_t x142 = 2023896632550740119LLU;
	static volatile int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;

    t30 = (x141!=((x142-x143)!=x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = 25;
	static int32_t x146 = 23312406;

    t31 = (x145!=((x146-x147)!=x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x149 = -388;
	int8_t x150 = 3;
	int16_t x151 = -45;
	volatile int64_t x152 = -1LL;
	volatile int32_t t32 = -213883689;

    t32 = (x149!=((x150-x151)!=x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x153 = -1LL;
	int64_t x154 = -1LL;
	int32_t x155 = -1;
	int64_t x156 = INT64_MIN;
	int32_t t33 = -2283134;

    t33 = (x153!=((x154-x155)!=x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x157 = 156160LLU;
	static int8_t x158 = INT8_MIN;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 53U;
	volatile int32_t t34 = -21186;

    t34 = (x157!=((x158-x159)!=x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x161 = 1008725LLU;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 1126LLU;
	volatile int16_t x164 = INT16_MAX;
	int32_t t35 = 6391;

    t35 = (x161!=((x162-x163)!=x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x165 = -52;
	volatile uint64_t x167 = 110903862122927139LLU;
	int16_t x168 = -16;

    t36 = (x165!=((x166-x167)!=x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = 15U;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = 3U;
	uint32_t x172 = UINT32_MAX;
	int32_t t37 = -429;

    t37 = (x169!=((x170-x171)!=x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x173 = -1;
	int8_t x174 = -1;
	static uint32_t x175 = 1906966171U;
	int64_t x176 = 22731766208692805LL;
	int32_t t38 = -786;

    t38 = (x173!=((x174-x175)!=x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	uint8_t x180 = 25U;

    t39 = (x177!=((x178-x179)!=x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x182 = -1;
	int32_t x184 = -2229481;
	int32_t t40 = 3;

    t40 = (x181!=((x182-x183)!=x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = UINT32_MAX;
	int16_t x187 = -1;
	int64_t x188 = INT64_MIN;
	volatile int32_t t41 = -501145017;

    t41 = (x185!=((x186-x187)!=x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x193 = 4991U;
	static int16_t x194 = INT16_MIN;
	int64_t x195 = -959413131988LL;
	static uint8_t x196 = 30U;

    t42 = (x193!=((x194-x195)!=x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x197 = INT32_MIN;
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = 0;
	static int8_t x200 = 2;
	volatile int32_t t43 = 17;

    t43 = (x197!=((x198-x199)!=x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x201 = 27937U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	volatile int32_t t44 = 76637287;

    t44 = (x201!=((x202-x203)!=x204));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = -52;
	static int32_t x206 = -47677065;
	static int16_t x207 = -1;
	int8_t x208 = 12;
	static volatile int32_t t45 = 25;

    t45 = (x205!=((x206-x207)!=x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	int32_t t46 = -10932281;

    t46 = (x213!=((x214-x215)!=x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x221 = INT32_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t47 = -9;

    t47 = (x221!=((x222-x223)!=x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x225 = INT64_MIN;
	int64_t x227 = INT64_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t48 = 18;

    t48 = (x225!=((x226-x227)!=x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x229 = 178;
	int64_t x230 = -1LL;
	int32_t x232 = 3;

    t49 = (x229!=((x230-x231)!=x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x233 = -10;
	uint64_t x234 = 67823085LLU;
	static uint32_t x235 = 5847U;
	int32_t x236 = -4458870;
	volatile int32_t t50 = -212458180;

    t50 = (x233!=((x234-x235)!=x236));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x237 = INT32_MAX;
	uint16_t x238 = 2284U;
	static int8_t x240 = INT8_MIN;
	static int32_t t51 = -4811466;

    t51 = (x237!=((x238-x239)!=x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	volatile uint8_t x244 = 0U;

    t52 = (x241!=((x242-x243)!=x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x245 = 1978U;
	int32_t x246 = INT32_MIN;
	int8_t x247 = -1;
	int16_t x248 = INT16_MAX;
	volatile int32_t t53 = -6417;

    t53 = (x245!=((x246-x247)!=x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MAX;
	static uint64_t x251 = UINT64_MAX;
	volatile int32_t t54 = 11;

    t54 = (x249!=((x250-x251)!=x252));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = 336782LLU;
	int32_t t55 = -384526702;

    t55 = (x257!=((x258-x259)!=x260));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x261 = 3U;
	int16_t x263 = INT16_MIN;

    t56 = (x261!=((x262-x263)!=x264));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x265 = 304U;
	int8_t x267 = 5;
	int32_t t57 = -23626;

    t57 = (x265!=((x266-x267)!=x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x273 = INT16_MAX;
	volatile uint64_t x274 = UINT64_MAX;
	volatile int8_t x276 = -23;
	volatile int32_t t58 = 1;

    t58 = (x273!=((x274-x275)!=x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x278 = INT32_MAX;
	uint32_t x279 = 173770546U;
	volatile uint8_t x280 = 31U;
	int32_t t59 = -62261;

    t59 = (x277!=((x278-x279)!=x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x281 = UINT8_MAX;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = -12078399;
	int32_t t60 = -36797894;

    t60 = (x281!=((x282-x283)!=x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MIN;
	static int16_t x288 = INT16_MIN;
	int32_t t61 = -78950;

    t61 = (x285!=((x286-x287)!=x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x289 = 5050U;
	int16_t x290 = -1;
	volatile uint8_t x291 = 28U;
	int8_t x292 = INT8_MAX;
	int32_t t62 = -5923703;

    t62 = (x289!=((x290-x291)!=x292));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x297 = -24173115244460LL;
	int32_t x298 = -1;
	static uint16_t x300 = 114U;
	volatile int32_t t63 = 0;

    t63 = (x297!=((x298-x299)!=x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MIN;
	static int32_t x304 = -439;
	int32_t t64 = 106;

    t64 = (x301!=((x302-x303)!=x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x306 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = -2291467857449969411LL;
	volatile int32_t t65 = 10858;

    t65 = (x305!=((x306-x307)!=x308));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x311 = 0LLU;
	static volatile int32_t t66 = -371279075;

    t66 = (x309!=((x310-x311)!=x312));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x315 = 7;
	static uint16_t x316 = 1U;
	volatile int32_t t67 = 1;

    t67 = (x313!=((x314-x315)!=x316));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x317 = 7433498662053LLU;
	int32_t x318 = 504431;
	volatile int16_t x319 = INT16_MIN;
	static int64_t x320 = INT64_MIN;

    t68 = (x317!=((x318-x319)!=x320));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x325 = INT16_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	static uint8_t x327 = UINT8_MAX;
	int32_t t69 = 1;

    t69 = (x325!=((x326-x327)!=x328));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	volatile int32_t t70 = 12359985;

    t70 = (x329!=((x330-x331)!=x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x333 = 159163786LLU;
	static int16_t x334 = INT16_MIN;
	static int32_t x335 = INT32_MIN;
	static volatile int8_t x336 = -1;
	volatile int32_t t71 = -576;

    t71 = (x333!=((x334-x335)!=x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x343 = -338992489990371LL;
	static uint32_t x344 = 3U;
	int32_t t72 = 769;

    t72 = (x341!=((x342-x343)!=x344));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x349 = INT8_MAX;
	int32_t x351 = -4;

    t73 = (x349!=((x350-x351)!=x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x353 = 42883866LL;
	int8_t x354 = INT8_MIN;
	static int16_t x355 = INT16_MAX;
	static volatile int32_t x356 = -392;
	int32_t t74 = -279143;

    t74 = (x353!=((x354-x355)!=x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	int32_t x364 = -502978;
	volatile int32_t t75 = 2;

    t75 = (x361!=((x362-x363)!=x364));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x365 = 232LL;
	int32_t x367 = -1;
	int16_t x368 = INT16_MIN;
	static int32_t t76 = -293295;

    t76 = (x365!=((x366-x367)!=x368));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x369 = 341858235167818893LLU;
	static uint32_t x370 = 2U;

    t77 = (x369!=((x370-x371)!=x372));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MIN;
	int32_t t78 = 49;

    t78 = (x373!=((x374-x375)!=x376));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = -1;
	uint32_t x378 = 63878557U;
	int64_t x379 = INT64_MAX;
	static volatile int32_t t79 = 690738996;

    t79 = (x377!=((x378-x379)!=x380));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x381 = INT16_MIN;
	static uint64_t x382 = 257956581160018LLU;
	static int32_t x383 = INT32_MIN;
	static volatile int32_t t80 = 0;

    t80 = (x381!=((x382-x383)!=x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x385 = -6;
	volatile int16_t x386 = INT16_MIN;
	uint64_t x387 = 176786483LLU;
	int64_t x388 = 261169630480208028LL;
	int32_t t81 = -650413;

    t81 = (x385!=((x386-x387)!=x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x389 = 118U;
	int8_t x390 = 47;
	volatile int8_t x391 = -20;
	volatile int16_t x392 = INT16_MIN;

    t82 = (x389!=((x390-x391)!=x392));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x394 = -1;
	static uint8_t x395 = UINT8_MAX;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t83 = 192272;

    t83 = (x393!=((x394-x395)!=x396));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x397 = 37U;
	uint32_t x399 = 782U;
	int16_t x400 = 1;
	int32_t t84 = -2;

    t84 = (x397!=((x398-x399)!=x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = -1;
	volatile uint8_t x403 = 1U;
	volatile int64_t x404 = -2LL;

    t85 = (x401!=((x402-x403)!=x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x405 = 3U;
	volatile uint8_t x406 = UINT8_MAX;
	int8_t x408 = -31;
	int32_t t86 = -119616;

    t86 = (x405!=((x406-x407)!=x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x409 = UINT32_MAX;
	int32_t x412 = INT32_MAX;
	int32_t t87 = 2587394;

    t87 = (x409!=((x410-x411)!=x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x413 = INT32_MAX;
	int16_t x414 = -1;
	volatile int16_t x416 = -1;
	int32_t t88 = -11021;

    t88 = (x413!=((x414-x415)!=x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x417 = 34U;
	static uint32_t x418 = 1951349U;
	int8_t x419 = INT8_MAX;
	uint32_t x420 = 381953276U;
	int32_t t89 = 1;

    t89 = (x417!=((x418-x419)!=x420));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x421 = 11605414570761237LLU;
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;

    t90 = (x421!=((x422-x423)!=x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x425 = 16671U;
	int32_t x426 = -503;
	uint32_t x427 = 135818683U;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t91 = 2729;

    t91 = (x425!=((x426-x427)!=x428));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x429 = INT16_MAX;
	int64_t x430 = -606646997555LL;
	volatile int64_t x431 = INT64_MIN;
	volatile int16_t x432 = INT16_MIN;
	static volatile int32_t t92 = -14491;

    t92 = (x429!=((x430-x431)!=x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x433 = UINT64_MAX;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -1;
	int64_t x436 = INT64_MAX;
	int32_t t93 = -188;

    t93 = (x433!=((x434-x435)!=x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x441 = 1U;
	int16_t x442 = INT16_MIN;
	int32_t t94 = -4887280;

    t94 = (x441!=((x442-x443)!=x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x447 = 4;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t95 = 748;

    t95 = (x445!=((x446-x447)!=x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = INT64_MAX;
	int64_t x450 = -18937LL;
	int32_t x451 = 2;
	int32_t x452 = INT32_MIN;
	volatile int32_t t96 = 58;

    t96 = (x449!=((x450-x451)!=x452));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x469 = -1;
	int32_t x470 = -1;
	int16_t x471 = INT16_MIN;
	static volatile uint16_t x472 = 3670U;
	volatile int32_t t97 = -1;

    t97 = (x469!=((x470-x471)!=x472));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x473 = -122;
	int64_t x475 = 25137201951939069LL;
	volatile int8_t x476 = -1;

    t98 = (x473!=((x474-x475)!=x476));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x477 = UINT32_MAX;
	int16_t x478 = -1;
	volatile uint64_t x479 = 3773699912960034LLU;
	int16_t x480 = INT16_MIN;
	int32_t t99 = -1578;

    t99 = (x477!=((x478-x479)!=x480));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x481 = -13731253818090LL;
	static uint16_t x482 = 1U;
	uint16_t x484 = 534U;
	volatile int32_t t100 = -6728;

    t100 = (x481!=((x482-x483)!=x484));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x486 = INT64_MIN;
	int8_t x487 = INT8_MIN;
	static int16_t x488 = INT16_MIN;
	int32_t t101 = 794;

    t101 = (x485!=((x486-x487)!=x488));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x491 = INT32_MIN;
	int32_t x492 = -1;
	static int32_t t102 = -45037614;

    t102 = (x489!=((x490-x491)!=x492));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x493 = INT32_MIN;
	volatile int16_t x494 = INT16_MAX;
	static int8_t x495 = INT8_MAX;
	static volatile int64_t x496 = INT64_MIN;
	volatile int32_t t103 = -120;

    t103 = (x493!=((x494-x495)!=x496));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x497 = 208310903;
	static int8_t x498 = INT8_MIN;
	int64_t x499 = 173764629195862LL;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t104 = 9524;

    t104 = (x497!=((x498-x499)!=x500));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x501 = UINT8_MAX;
	int32_t x503 = -1;
	static volatile int32_t t105 = 1;

    t105 = (x501!=((x502-x503)!=x504));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x506 = 882862234U;
	static int32_t x507 = INT32_MIN;
	int8_t x508 = INT8_MIN;
	int32_t t106 = -253;

    t106 = (x505!=((x506-x507)!=x508));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x509 = -1LL;
	int8_t x510 = -1;
	static uint64_t x511 = UINT64_MAX;
	int16_t x512 = 148;
	static int32_t t107 = 7440359;

    t107 = (x509!=((x510-x511)!=x512));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x513 = INT16_MAX;
	static volatile int8_t x514 = -47;
	uint32_t x515 = 15069U;
	int8_t x516 = -14;
	volatile int32_t t108 = 6951972;

    t108 = (x513!=((x514-x515)!=x516));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x517 = -1;
	uint8_t x518 = 0U;
	int16_t x519 = INT16_MIN;
	int16_t x520 = 208;
	volatile int32_t t109 = 124506227;

    t109 = (x517!=((x518-x519)!=x520));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x521 = -1LL;
	volatile int16_t x522 = -1;
	volatile uint16_t x524 = UINT16_MAX;
	volatile int32_t t110 = 44276;

    t110 = (x521!=((x522-x523)!=x524));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x529 = 1U;
	static int8_t x532 = 1;

    t111 = (x529!=((x530-x531)!=x532));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x533 = -13014797194885355LL;
	uint8_t x534 = 0U;
	int16_t x535 = 5;
	volatile int16_t x536 = -1;

    t112 = (x533!=((x534-x535)!=x536));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x537 = -1;
	int32_t x540 = INT32_MIN;

    t113 = (x537!=((x538-x539)!=x540));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x541 = INT8_MIN;
	static int16_t x543 = 1;
	int16_t x544 = INT16_MIN;
	volatile int32_t t114 = 162410;

    t114 = (x541!=((x542-x543)!=x544));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x547 = INT64_MIN;
	static int8_t x548 = INT8_MIN;
	int32_t t115 = -14;

    t115 = (x545!=((x546-x547)!=x548));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x549 = INT64_MAX;
	uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MAX;
	int32_t t116 = 7;

    t116 = (x549!=((x550-x551)!=x552));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x558 = INT16_MIN;
	static uint8_t x559 = 2U;
	uint8_t x560 = UINT8_MAX;

    t117 = (x557!=((x558-x559)!=x560));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x561 = INT32_MIN;
	int16_t x562 = -1;
	static volatile uint64_t x564 = 287926504LLU;
	int32_t t118 = 217340;

    t118 = (x561!=((x562-x563)!=x564));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x569 = INT64_MIN;
	int8_t x571 = INT8_MIN;
	static int8_t x572 = INT8_MIN;

    t119 = (x569!=((x570-x571)!=x572));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x573 = INT8_MAX;
	volatile uint16_t x575 = 3424U;
	uint64_t x576 = 4050593334325LLU;
	volatile int32_t t120 = -31;

    t120 = (x573!=((x574-x575)!=x576));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x577 = -35LL;
	int64_t x579 = INT64_MAX;
	int64_t x580 = -14637262LL;

    t121 = (x577!=((x578-x579)!=x580));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x581 = 7;
	int8_t x582 = 0;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = 0;
	int32_t t122 = 10019;

    t122 = (x581!=((x582-x583)!=x584));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x585 = UINT8_MAX;
	uint32_t x588 = 18U;
	volatile int32_t t123 = 964;

    t123 = (x585!=((x586-x587)!=x588));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x589 = 12884086U;
	volatile int64_t x590 = -10315057057LL;
	uint32_t x591 = 0U;
	int16_t x592 = -50;
	int32_t t124 = -23634899;

    t124 = (x589!=((x590-x591)!=x592));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x593 = INT16_MIN;
	volatile uint16_t x594 = 10088U;
	volatile int16_t x596 = INT16_MIN;
	int32_t t125 = 14630;

    t125 = (x593!=((x594-x595)!=x596));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int16_t x600 = INT16_MIN;

    t126 = (x597!=((x598-x599)!=x600));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x601 = -1;
	static uint16_t x602 = 1U;
	static int8_t x603 = -1;
	volatile int32_t t127 = -911924302;

    t127 = (x601!=((x602-x603)!=x604));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x605 = INT32_MIN;
	int8_t x606 = INT8_MAX;
	int64_t x608 = 47LL;
	int32_t t128 = 1;

    t128 = (x605!=((x606-x607)!=x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x609 = 15U;
	int16_t x610 = 7;
	int16_t x611 = 294;
	int32_t x612 = 15407373;
	volatile int32_t t129 = 28113485;

    t129 = (x609!=((x610-x611)!=x612));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x614 = -1;
	static volatile uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MIN;
	volatile int32_t t130 = 5103;

    t130 = (x613!=((x614-x615)!=x616));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x618 = UINT8_MAX;
	volatile uint8_t x619 = 6U;
	static uint32_t x620 = 40U;
	static int32_t t131 = -1572;

    t131 = (x617!=((x618-x619)!=x620));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x622 = 191LLU;
	int64_t x623 = INT64_MIN;
	int64_t x624 = INT64_MAX;
	volatile int32_t t132 = -1834198;

    t132 = (x621!=((x622-x623)!=x624));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x625 = -1LL;
	static uint64_t x626 = 545144599366856040LLU;
	int8_t x628 = INT8_MAX;
	static volatile int32_t t133 = 1882159;

    t133 = (x625!=((x626-x627)!=x628));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x629 = INT8_MAX;
	uint32_t x630 = UINT32_MAX;
	int64_t x631 = INT64_MAX;

    t134 = (x629!=((x630-x631)!=x632));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x635 = INT64_MAX;
	static uint32_t x636 = 91U;

    t135 = (x633!=((x634-x635)!=x636));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x638 = 6447U;
	volatile int64_t x639 = -1LL;
	volatile uint8_t x640 = 15U;
	volatile int32_t t136 = 0;

    t136 = (x637!=((x638-x639)!=x640));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x642 = 44U;
	int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MIN;

    t137 = (x641!=((x642-x643)!=x644));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x646 = INT16_MIN;
	int8_t x647 = 5;
	int32_t t138 = 1039805;

    t138 = (x645!=((x646-x647)!=x648));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x649 = 0U;
	static int64_t x650 = INT64_MIN;
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = INT32_MIN;
	static volatile int32_t t139 = 29148829;

    t139 = (x649!=((x650-x651)!=x652));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MIN;
	int32_t t140 = 63;

    t140 = (x653!=((x654-x655)!=x656));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x657 = 235870LLU;
	uint64_t x658 = 70599241550585816LLU;
	volatile int8_t x659 = INT8_MIN;
	int8_t x660 = -11;
	volatile int32_t t141 = -1659;

    t141 = (x657!=((x658-x659)!=x660));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x663 = UINT16_MAX;
	volatile int32_t t142 = 0;

    t142 = (x661!=((x662-x663)!=x664));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x667 = INT8_MIN;
	int16_t x668 = -1;
	int32_t t143 = 2;

    t143 = (x665!=((x666-x667)!=x668));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MIN;
	static uint64_t x671 = UINT64_MAX;

    t144 = (x669!=((x670-x671)!=x672));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x673 = 40271355;
	static int64_t x674 = -1LL;
	int16_t x675 = -1398;
	uint16_t x676 = 23U;

    t145 = (x673!=((x674-x675)!=x676));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x677 = -1LL;
	uint16_t x678 = UINT16_MAX;
	int16_t x680 = INT16_MIN;
	volatile int32_t t146 = -89231;

    t146 = (x677!=((x678-x679)!=x680));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x685 = 100;
	static volatile int16_t x686 = INT16_MIN;
	volatile int64_t x687 = INT64_MIN;
	uint16_t x688 = 8U;
	int32_t t147 = 7629532;

    t147 = (x685!=((x686-x687)!=x688));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x694 = INT16_MIN;
	volatile uint32_t x695 = 15U;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t148 = -91346189;

    t148 = (x693!=((x694-x695)!=x696));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x697 = -11;
	int64_t x698 = -1592049LL;

    t149 = (x697!=((x698-x699)!=x700));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x705 = INT32_MIN;
	volatile int32_t x706 = -1;
	uint32_t x707 = 7934U;
	static volatile uint8_t x708 = UINT8_MAX;

    t150 = (x705!=((x706-x707)!=x708));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x710 = 51LLU;
	static int64_t x711 = INT64_MIN;
	int32_t t151 = 402262549;

    t151 = (x709!=((x710-x711)!=x712));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	static int32_t x715 = INT32_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t152 = -1;

    t152 = (x713!=((x714-x715)!=x716));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x717 = UINT16_MAX;
	uint16_t x718 = 2U;
	uint16_t x719 = 3U;
	int32_t t153 = 174241;

    t153 = (x717!=((x718-x719)!=x720));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x721 = INT64_MAX;
	volatile int8_t x722 = INT8_MIN;
	uint64_t x723 = 471505281738LLU;
	volatile int32_t t154 = -499335;

    t154 = (x721!=((x722-x723)!=x724));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	int64_t x728 = INT64_MAX;
	static int32_t t155 = -73;

    t155 = (x725!=((x726-x727)!=x728));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = -1;
	int8_t x730 = INT8_MAX;
	int16_t x731 = -1;
	volatile int32_t x732 = INT32_MAX;
	static int32_t t156 = -378876;

    t156 = (x729!=((x730-x731)!=x732));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x733 = 122151923;
	int64_t x735 = -103681328LL;
	static volatile int32_t t157 = -11565;

    t157 = (x733!=((x734-x735)!=x736));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MIN;
	int8_t x739 = -4;
	static volatile int8_t x740 = INT8_MAX;
	volatile int32_t t158 = -782696;

    t158 = (x737!=((x738-x739)!=x740));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x741 = INT16_MIN;
	uint64_t x742 = 31019469065LLU;
	int64_t x743 = 22859404532657LL;
	volatile int32_t t159 = 52;

    t159 = (x741!=((x742-x743)!=x744));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x749 = INT32_MIN;
	volatile int16_t x750 = INT16_MIN;
	static uint64_t x751 = 479272695765LLU;
	volatile uint8_t x752 = UINT8_MAX;
	int32_t t160 = 7443;

    t160 = (x749!=((x750-x751)!=x752));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x755 = INT8_MAX;
	volatile int32_t t161 = -489081481;

    t161 = (x753!=((x754-x755)!=x756));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x757 = 19U;
	volatile int16_t x758 = INT16_MIN;
	static int16_t x759 = -1834;
	int64_t x760 = -1LL;
	volatile int32_t t162 = -156;

    t162 = (x757!=((x758-x759)!=x760));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x765 = 0;
	static uint64_t x766 = UINT64_MAX;
	uint8_t x767 = 9U;
	volatile uint64_t x768 = 195411681826933733LLU;
	int32_t t163 = 209676031;

    t163 = (x765!=((x766-x767)!=x768));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x769 = 0U;
	int16_t x770 = INT16_MAX;
	int16_t x771 = 1780;
	int8_t x772 = INT8_MIN;
	volatile int32_t t164 = 25750686;

    t164 = (x769!=((x770-x771)!=x772));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x773 = 1935774548062190356LLU;
	int32_t x774 = INT32_MIN;
	static volatile int64_t x775 = -884549664504029158LL;
	volatile int32_t t165 = 2582;

    t165 = (x773!=((x774-x775)!=x776));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x777 = -472402716LL;
	int8_t x778 = -2;
	volatile int16_t x779 = -1;
	uint32_t x780 = UINT32_MAX;
	static int32_t t166 = -475;

    t166 = (x777!=((x778-x779)!=x780));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x781 = -1;
	int8_t x783 = -56;
	int8_t x784 = -1;
	volatile int32_t t167 = 130;

    t167 = (x781!=((x782-x783)!=x784));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x785 = 61542841325LLU;
	int64_t x786 = -1LL;
	uint32_t x787 = UINT32_MAX;
	static int8_t x788 = INT8_MAX;

    t168 = (x785!=((x786-x787)!=x788));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x789 = INT8_MIN;
	int16_t x790 = INT16_MIN;
	uint8_t x792 = 16U;
	static volatile int32_t t169 = 356245;

    t169 = (x789!=((x790-x791)!=x792));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = INT16_MIN;
	volatile uint16_t x795 = UINT16_MAX;
	volatile uint8_t x796 = 119U;
	int32_t t170 = 1;

    t170 = (x793!=((x794-x795)!=x796));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x801 = -1LL;
	uint32_t x802 = 420437271U;
	static int8_t x803 = -1;
	int32_t x804 = INT32_MIN;
	volatile int32_t t171 = -530;

    t171 = (x801!=((x802-x803)!=x804));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x805 = INT64_MAX;
	int64_t x806 = INT64_MIN;
	static int8_t x808 = INT8_MIN;
	volatile int32_t t172 = 47189;

    t172 = (x805!=((x806-x807)!=x808));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x809 = 1041730337LLU;
	static int32_t x810 = 425506;
	static int32_t x811 = -7;
	int32_t x812 = INT32_MIN;
	int32_t t173 = 1;

    t173 = (x809!=((x810-x811)!=x812));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x814 = 1009737157U;
	uint32_t x816 = UINT32_MAX;
	volatile int32_t t174 = 265338314;

    t174 = (x813!=((x814-x815)!=x816));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x825 = 82323208;
	static int16_t x826 = INT16_MIN;
	int8_t x827 = -1;
	static uint8_t x828 = 3U;
	volatile int32_t t175 = 31672252;

    t175 = (x825!=((x826-x827)!=x828));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x838 = 501266U;
	int16_t x839 = INT16_MIN;
	int8_t x840 = -1;
	int32_t t176 = -2103;

    t176 = (x837!=((x838-x839)!=x840));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x843 = -34070;
	static int8_t x844 = -1;

    t177 = (x841!=((x842-x843)!=x844));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x845 = 5;
	int16_t x846 = 3393;
	int16_t x848 = INT16_MAX;
	volatile int32_t t178 = 1141;

    t178 = (x845!=((x846-x847)!=x848));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x849 = -1LL;
	static uint8_t x850 = 0U;
	static volatile int64_t x851 = -678717305248301570LL;
	int32_t t179 = -15961;

    t179 = (x849!=((x850-x851)!=x852));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x855 = UINT64_MAX;
	volatile uint32_t x856 = 18U;
	int32_t t180 = -6;

    t180 = (x853!=((x854-x855)!=x856));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x857 = 815874U;
	static int16_t x858 = INT16_MIN;
	uint32_t x859 = 77U;
	uint32_t x860 = 1572331566U;
	int32_t t181 = -11910;

    t181 = (x857!=((x858-x859)!=x860));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x862 = INT64_MAX;
	static int32_t x863 = INT32_MAX;
	uint32_t x864 = 2U;
	int32_t t182 = -14411;

    t182 = (x861!=((x862-x863)!=x864));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x871 = 20240U;
	int32_t t183 = -1;

    t183 = (x869!=((x870-x871)!=x872));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x873 = INT8_MAX;
	int32_t x874 = -2;
	volatile uint8_t x875 = 54U;
	static uint16_t x876 = 20304U;
	volatile int32_t t184 = -13237365;

    t184 = (x873!=((x874-x875)!=x876));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x877 = 23443441U;
	int32_t x878 = -126054;
	uint16_t x879 = 0U;
	int8_t x880 = -1;
	int32_t t185 = 3034175;

    t185 = (x877!=((x878-x879)!=x880));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x881 = -1;
	int16_t x882 = INT16_MAX;
	int16_t x883 = 91;
	uint64_t x884 = 100511749LLU;
	volatile int32_t t186 = 22351357;

    t186 = (x881!=((x882-x883)!=x884));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x885 = INT64_MIN;
	uint16_t x886 = UINT16_MAX;
	static int16_t x887 = INT16_MAX;
	uint32_t x888 = 293U;
	volatile int32_t t187 = 7;

    t187 = (x885!=((x886-x887)!=x888));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x893 = INT8_MIN;
	int64_t x894 = INT64_MAX;
	int8_t x896 = -3;
	volatile int32_t t188 = 5043808;

    t188 = (x893!=((x894-x895)!=x896));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x901 = 29025LLU;
	uint64_t x903 = 114995678029550LLU;
	int16_t x904 = INT16_MIN;
	int32_t t189 = -13678;

    t189 = (x901!=((x902-x903)!=x904));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x905 = UINT8_MAX;
	int8_t x906 = 0;
	volatile uint64_t x907 = 12306464538LLU;
	int64_t x908 = -1778877LL;
	int32_t t190 = 5;

    t190 = (x905!=((x906-x907)!=x908));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x909 = INT32_MIN;
	static int64_t x912 = INT64_MAX;
	static volatile int32_t t191 = -7;

    t191 = (x909!=((x910-x911)!=x912));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x917 = INT16_MIN;
	int16_t x918 = INT16_MIN;
	int16_t x919 = INT16_MIN;
	int64_t x920 = INT64_MAX;
	int32_t t192 = -54;

    t192 = (x917!=((x918-x919)!=x920));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x922 = 9;
	volatile int16_t x923 = INT16_MAX;
	int16_t x924 = INT16_MIN;
	volatile int32_t t193 = 659;

    t193 = (x921!=((x922-x923)!=x924));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x925 = 639542345LLU;
	uint8_t x926 = 2U;
	static uint8_t x927 = UINT8_MAX;
	int32_t x928 = INT32_MIN;
	static int32_t t194 = 393;

    t194 = (x925!=((x926-x927)!=x928));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x929 = 71U;
	volatile int16_t x930 = -7;
	static uint32_t x931 = 400963U;
	volatile int32_t t195 = 2;

    t195 = (x929!=((x930-x931)!=x932));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x933 = INT16_MIN;
	static int16_t x934 = INT16_MIN;
	int8_t x936 = INT8_MIN;
	volatile int32_t t196 = -6;

    t196 = (x933!=((x934-x935)!=x936));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x937 = 20;
	int8_t x938 = 1;
	int8_t x939 = INT8_MAX;
	int16_t x940 = 290;
	volatile int32_t t197 = 1003659;

    t197 = (x937!=((x938-x939)!=x940));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x941 = 20U;
	volatile uint32_t x942 = 62579U;
	int32_t x943 = -1;
	int32_t x944 = -7352;
	volatile int32_t t198 = -5877;

    t198 = (x941!=((x942-x943)!=x944));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x945 = 70U;
	int64_t x946 = -814193LL;
	static int8_t x947 = -1;
	uint16_t x948 = 1889U;
	static volatile int32_t t199 = 118462164;

    t199 = (x945!=((x946-x947)!=x948));

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

