
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

int32_t x1 = 0;
uint16_t x13 = 1U;
static volatile int8_t x27 = INT8_MIN;
static volatile int8_t x28 = 1;
volatile int32_t t6 = -1;
uint32_t x31 = 1012249588U;
static int32_t x33 = INT32_MAX;
static int32_t x37 = INT32_MAX;
int16_t x39 = INT16_MAX;
int16_t x68 = 32;
int32_t t16 = -42633;
int64_t x69 = -3230517LL;
int16_t x75 = INT16_MIN;
int32_t t19 = -80822880;
uint16_t x81 = 2U;
int64_t x82 = 0LL;
uint64_t x83 = 1130832LLU;
volatile uint32_t x84 = 772U;
volatile int32_t t20 = -5;
volatile int32_t t23 = INT32_MIN;
int64_t t27 = 1004644228LL;
int64_t t28 = 1LL;
int32_t x126 = -3957157;
static volatile uint16_t x135 = 2U;
int16_t x144 = -1;
volatile uint64_t t35 = 307134LLU;
volatile int32_t x152 = INT32_MAX;
int64_t x153 = -435417932LL;
int64_t x155 = INT64_MIN;
int32_t x160 = 1;
volatile int64_t t39 = 20589917968359LL;
int8_t x165 = INT8_MIN;
int32_t x171 = INT32_MAX;
int64_t t42 = 210970LL;
static volatile int8_t x180 = INT8_MIN;
static int64_t x181 = INT64_MIN;
int32_t x183 = INT32_MIN;
volatile int64_t t45 = INT64_MIN;
int64_t x199 = INT64_MIN;
uint64_t x200 = 45082LLU;
volatile int16_t x203 = INT16_MAX;
int8_t x205 = INT8_MIN;
static int32_t x208 = INT32_MIN;
int32_t x218 = INT32_MIN;
static volatile uint64_t t54 = UINT64_MAX;
int32_t x229 = INT32_MIN;
int32_t t57 = 881189924;
static int8_t x234 = -1;
int32_t x237 = 82;
static int32_t x238 = INT32_MAX;
static volatile int64_t x239 = -1LL;
static int32_t t59 = 6147240;
uint32_t x247 = UINT32_MAX;
volatile int16_t x256 = INT16_MIN;
volatile int16_t x257 = INT16_MAX;
int8_t x276 = INT8_MIN;
static int32_t x283 = INT32_MIN;
int16_t x284 = INT16_MIN;
volatile int32_t t70 = -2142;
int16_t x285 = INT16_MIN;
static int64_t x291 = 33LL;
volatile int64_t x298 = 126653951133044956LL;
int32_t x302 = -1;
int16_t x306 = INT16_MAX;
volatile int64_t x309 = -1LL;
volatile uint32_t x312 = 531525318U;
int32_t x317 = INT32_MIN;
volatile uint16_t x322 = 3U;
int32_t x323 = -31756;
int8_t x327 = INT8_MIN;
int64_t x328 = INT64_MIN;
uint32_t x332 = 787713546U;
uint16_t x336 = 9872U;
static int64_t x338 = -1951815LL;
int32_t t85 = 327;
uint16_t x345 = 13239U;
int16_t x349 = INT16_MIN;
static int64_t x356 = INT64_MAX;
int16_t x357 = 5;
int64_t x360 = -1LL;
uint64_t x382 = UINT64_MAX;
volatile int32_t x384 = INT32_MIN;
uint32_t x387 = UINT32_MAX;
volatile int16_t x392 = 1351;
int64_t x402 = INT64_MAX;
volatile int64_t t100 = -406LL;
volatile uint64_t t101 = 14LLU;
int8_t x410 = INT8_MIN;
int64_t x414 = INT64_MIN;
volatile uint64_t t103 = 1LLU;
int32_t x417 = INT32_MIN;
int64_t x424 = INT64_MAX;
volatile int32_t t108 = 4789538;
static volatile uint16_t x438 = 3747U;
int32_t x447 = INT32_MAX;
int64_t x451 = 1576732LL;
volatile int16_t x455 = INT16_MIN;
int16_t x457 = INT16_MIN;
static int64_t x458 = INT64_MAX;
uint8_t x464 = 1U;
static int32_t t115 = 319393;
int8_t x465 = 20;
static uint16_t x471 = 1U;
volatile int64_t x481 = -1LL;
int32_t x484 = INT32_MIN;
volatile int32_t t126 = 97028682;
int64_t x509 = INT64_MIN;
volatile int8_t x514 = INT8_MIN;
static int64_t x515 = -602710777629LL;
int8_t x519 = INT8_MIN;
static int64_t x520 = INT64_MAX;
int64_t x522 = 536715276798LL;
int64_t x523 = -1LL;
volatile int32_t x526 = -1;
volatile int64_t t131 = 1572339506542871LL;
volatile uint16_t x533 = 9U;
int16_t x536 = INT16_MIN;
uint8_t x542 = 22U;
volatile uint32_t x547 = UINT32_MAX;
static int16_t x548 = 15249;
int32_t t136 = -6076;
int64_t x549 = -682940372LL;
static int16_t x551 = -1;
int8_t x553 = INT8_MAX;
volatile int16_t x556 = 5344;
volatile int8_t x557 = -1;
int64_t x559 = -3814957725444898LL;
int32_t x560 = INT32_MAX;
volatile int32_t t141 = -46856851;
int8_t x572 = INT8_MIN;
int64_t x579 = INT64_MIN;
int64_t x587 = -1LL;
int32_t x588 = INT32_MAX;
volatile uint64_t x595 = 11781666983038LLU;
uint16_t x597 = 3200U;
volatile uint8_t x601 = 1U;
static int8_t x603 = 0;
volatile uint16_t x604 = UINT16_MAX;
volatile int32_t t150 = 30263464;
static volatile uint32_t x608 = 1874199U;
volatile int32_t t151 = -659686;
int32_t x611 = INT32_MIN;
static int16_t x612 = INT16_MIN;
volatile int32_t t152 = 413871;
int16_t x619 = 15;
uint8_t x625 = UINT8_MAX;
int16_t x628 = INT16_MAX;
int32_t t158 = 31330907;
uint8_t x644 = 3U;
int8_t x652 = INT8_MAX;
static int64_t x658 = -1LL;
volatile uint64_t x659 = UINT64_MAX;
volatile int32_t t165 = -330044203;
int8_t x670 = -31;
volatile int32_t t167 = -15744;
static uint64_t x673 = UINT64_MAX;
static uint16_t x675 = 1U;
volatile int64_t t170 = INT64_MAX;
uint8_t x685 = UINT8_MAX;
volatile uint64_t x692 = UINT64_MAX;
int64_t x694 = 763232LL;
uint64_t x695 = UINT64_MAX;
static int16_t x698 = INT16_MAX;
int16_t x703 = INT16_MAX;
int32_t t178 = -333978;
volatile uint64_t x719 = 470424LLU;
int32_t t179 = -659467;
int16_t x722 = -1;
int32_t x732 = -1;
static int16_t x733 = -3;
int32_t x743 = INT32_MIN;
static uint16_t x744 = 712U;
uint16_t x746 = UINT16_MAX;
int8_t x753 = INT8_MAX;
volatile int32_t t188 = -10763;
static uint16_t x759 = 5312U;
static uint16_t x761 = UINT16_MAX;
int32_t t190 = 16482469;
uint64_t t191 = UINT64_MAX;
static volatile uint64_t x770 = 15701876466513LLU;
volatile uint32_t x779 = 361U;
volatile int32_t t194 = 15;
static volatile int64_t t197 = 2745954146738LL;
uint16_t x794 = UINT16_MAX;
volatile int32_t t199 = -3764;


void f0(void) {
    	volatile int32_t x2 = 85;
	static volatile int64_t x3 = -2849219LL;
	int16_t x4 = 6341;
	volatile int32_t t0 = 163;

    t0 = (x1*((x2==x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MAX;
	int8_t x7 = -1;
	int64_t x8 = -1LL;
	int32_t t1 = -1;

    t1 = (x5*((x6==x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int32_t x10 = INT32_MIN;
	volatile uint32_t x11 = 5467949U;
	volatile uint64_t x12 = 63LLU;
	int32_t t2 = 2635;

    t2 = (x9*((x10==x11)<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -370;

    t3 = (x13*((x14==x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	volatile uint16_t x18 = UINT16_MAX;
	int32_t x19 = 1100;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 236;

    t4 = (x17*((x18==x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 2;
	volatile int32_t x22 = INT32_MIN;
	uint32_t x23 = 182535107U;
	int32_t x24 = -1;
	int32_t t5 = 578467209;

    t5 = (x21*((x22==x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 55U;
	uint8_t x26 = UINT8_MAX;

    t6 = (x25*((x26==x27)<=x28));

    if (t6 != 55) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	volatile int16_t x30 = INT16_MAX;
	uint32_t x32 = 1351226515U;
	static int32_t t7 = INT32_MAX;

    t7 = (x29*((x30==x31)<=x32));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = INT32_MAX;

    t8 = (x33*((x34==x35)<=x36));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	uint32_t x40 = 28U;
	int32_t t9 = INT32_MAX;

    t9 = (x37*((x38==x39)<=x40));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = -1;
	static uint64_t x43 = 389LLU;
	volatile int8_t x44 = 9;
	static volatile int32_t t10 = 15199;

    t10 = (x41*((x42==x43)<=x44));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 3;
	uint16_t x46 = 2U;
	static uint64_t x47 = UINT64_MAX;
	volatile uint16_t x48 = 1U;
	volatile int32_t t11 = 636;

    t11 = (x45*((x46==x47)<=x48));

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 53267U;
	uint8_t x50 = 3U;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -1;
	static volatile uint32_t t12 = 214U;

    t12 = (x49*((x50==x51)<=x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	static volatile int8_t x54 = INT8_MIN;
	static int16_t x55 = INT16_MAX;
	static uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 7970395;

    t13 = (x53*((x54==x55)<=x56));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int16_t x58 = -2;
	uint8_t x59 = 2U;
	uint8_t x60 = 0U;
	volatile int32_t t14 = INT32_MIN;

    t14 = (x57*((x58==x59)<=x60));

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 411466U;
	uint64_t x62 = 222733170574LLU;
	uint16_t x63 = 0U;
	int32_t x64 = INT32_MIN;
	uint32_t t15 = 7U;

    t15 = (x61*((x62==x63)<=x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 43;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = -1;

    t16 = (x65*((x66==x67)<=x68));

    if (t16 != 43) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 202829311LLU;
	int64_t x71 = 1703LL;
	volatile uint64_t x72 = 969224685712684LLU;
	volatile int64_t t17 = -60LL;

    t17 = (x69*((x70==x71)<=x72));

    if (t17 != -3230517LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 31;

    t18 = (x73*((x74==x75)<=x76));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MIN;
	volatile uint32_t x78 = 53U;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;

    t19 = (x77*((x78==x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    

    t20 = (x81*((x82==x83)<=x84));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	static int32_t x86 = INT32_MIN;
	volatile int16_t x87 = 0;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 383340;

    t21 = (x85*((x86==x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	int64_t x90 = 4395108LL;
	static uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 105U;
	volatile int32_t t22 = -8955853;

    t22 = (x89*((x90==x91)<=x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 635U;

    t23 = (x93*((x94==x95)<=x96));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MIN;
	static volatile int8_t x99 = INT8_MIN;
	volatile uint8_t x100 = 112U;
	static int32_t t24 = -6;

    t24 = (x97*((x98==x99)<=x100));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 91050659484991LLU;
	static int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	uint64_t t25 = 24411LLU;

    t25 = (x101*((x102==x103)<=x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile int16_t x106 = -110;
	static int64_t x107 = INT64_MIN;
	volatile uint64_t x108 = 13LLU;
	volatile int64_t t26 = INT64_MIN;

    t26 = (x105*((x106==x107)<=x108));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;

    t27 = (x109*((x110==x111)<=x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -9;
	static int32_t x116 = INT32_MIN;

    t28 = (x113*((x114==x115)<=x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = 11U;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 13U;
	int16_t x120 = -165;
	int32_t t29 = -74697408;

    t29 = (x117*((x118==x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	int32_t x124 = 1;
	int32_t t30 = 554;

    t30 = (x121*((x122==x123)<=x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	volatile uint8_t x127 = 15U;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 70787978;

    t31 = (x125*((x126==x127)<=x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -2;
	uint32_t x130 = 6665U;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -198281287;

    t32 = (x129*((x130==x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x134 = 54;
	static int8_t x136 = -28;
	volatile uint32_t t33 = 1628120512U;

    t33 = (x133*((x134==x135)<=x136));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	uint16_t x138 = 38U;
	int16_t x139 = 2;
	volatile int8_t x140 = 31;
	int32_t t34 = INT32_MIN;

    t34 = (x137*((x138==x139)<=x140));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 1414347986468LLU;
	uint16_t x142 = 117U;
	uint16_t x143 = 10U;

    t35 = (x141*((x142==x143)<=x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 102453131353LLU;
	static int64_t x146 = INT64_MIN;
	int64_t x147 = -10507214346270LL;
	volatile uint8_t x148 = 7U;
	static uint64_t t36 = 3376932LLU;

    t36 = (x145*((x146==x147)<=x148));

    if (t36 != 102453131353LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 1516;
	int16_t x150 = INT16_MIN;
	int64_t x151 = 478655152779046LL;
	static int32_t t37 = 69670;

    t37 = (x149*((x150==x151)<=x152));

    if (t37 != 1516) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 274463587398LLU;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t38 = -21168493LL;

    t38 = (x153*((x154==x155)<=x156));

    if (t38 != -435417932LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int16_t x158 = 1052;
	uint16_t x159 = 16181U;

    t39 = (x157*((x158==x159)<=x160));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	static volatile uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 326565U;
	int32_t t40 = -1511;

    t40 = (x161*((x162==x163)<=x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x166 = UINT8_MAX;
	static int16_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = -25;

    t41 = (x165*((x166==x167)<=x168));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -1LL;
	int32_t x170 = INT32_MIN;
	int32_t x172 = INT32_MAX;

    t42 = (x169*((x170==x171)<=x172));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 20;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;
	static volatile int32_t t43 = -873480226;

    t43 = (x173*((x174==x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = 1;
	int64_t x178 = -1LL;
	int16_t x179 = -121;
	int32_t t44 = 3;

    t44 = (x177*((x178==x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MAX;
	uint64_t x184 = UINT64_MAX;

    t45 = (x181*((x182==x183)<=x184));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -1LL;
	static int64_t x186 = INT64_MIN;
	static int16_t x187 = -14473;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = 0LL;

    t46 = (x185*((x186==x187)<=x188));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	volatile int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MAX;
	int32_t t47 = 3;

    t47 = (x189*((x190==x191)<=x192));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 2317884LLU;
	int8_t x194 = -46;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t x196 = 20;
	volatile uint64_t t48 = 777198562LLU;

    t48 = (x193*((x194==x195)<=x196));

    if (t48 != 2317884LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MAX;
	int32_t t49 = 85953;

    t49 = (x197*((x198==x199)<=x200));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 1;
	volatile int32_t x202 = 14;
	int64_t x204 = 28036LL;
	volatile int32_t t50 = 191;

    t50 = (x201*((x202==x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = -27371LL;
	int64_t x207 = INT64_MAX;
	volatile int32_t t51 = 568419404;

    t51 = (x205*((x206==x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	int16_t x210 = 0;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = 60;
	int64_t t52 = INT64_MAX;

    t52 = (x209*((x210==x211)<=x212));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 1676981560U;
	volatile int8_t x214 = -1;
	volatile int8_t x215 = 28;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t53 = 360615697U;

    t53 = (x213*((x214==x215)<=x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	static int32_t x219 = INT32_MIN;
	uint8_t x220 = 27U;

    t54 = (x217*((x218==x219)<=x220));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MAX;
	int16_t x222 = -1;
	int8_t x223 = -1;
	int16_t x224 = 225;
	int64_t t55 = INT64_MAX;

    t55 = (x221*((x222==x223)<=x224));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = -436778533663588LL;
	int8_t x226 = 36;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile int64_t t56 = -544602219729479290LL;

    t56 = (x225*((x226==x227)<=x228));

    if (t56 != -436778533663588LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MIN;
	int32_t x231 = -67156609;
	int32_t x232 = INT32_MIN;

    t57 = (x229*((x230==x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	static int32_t x236 = -1;
	int32_t t58 = -219920;

    t58 = (x233*((x234==x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x240 = -1LL;

    t59 = (x237*((x238==x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 16065LLU;
	uint16_t x242 = 7403U;
	int64_t x243 = INT64_MIN;
	int32_t x244 = 60;
	volatile uint64_t t60 = 1702542714708876853LLU;

    t60 = (x241*((x242==x243)<=x244));

    if (t60 != 16065LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	static int32_t t61 = -416;

    t61 = (x245*((x246==x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	static int32_t x250 = 56994;
	static int16_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	static volatile int32_t t62 = 302171518;

    t62 = (x249*((x250==x251)<=x252));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 2;
	uint64_t x254 = 5LLU;
	int64_t x255 = INT64_MIN;
	int32_t t63 = 1233341;

    t63 = (x253*((x254==x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = -1;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = -5;
	static volatile int32_t t64 = 0;

    t64 = (x257*((x258==x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MAX;
	uint64_t x263 = UINT64_MAX;
	uint16_t x264 = 12100U;
	uint64_t t65 = UINT64_MAX;

    t65 = (x261*((x262==x263)<=x264));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 6731U;
	int16_t x266 = INT16_MAX;
	volatile uint64_t x267 = 2527788440677LLU;
	volatile int8_t x268 = 0;
	volatile uint32_t t66 = 126802165U;

    t66 = (x265*((x266==x267)<=x268));

    if (t66 != 6731U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = 3U;
	int32_t x272 = 424414140;
	volatile int32_t t67 = -4209416;

    t67 = (x269*((x270==x271)<=x272));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 23U;
	int32_t x274 = -1;
	int16_t x275 = 0;
	int32_t t68 = -15;

    t68 = (x273*((x274==x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	static int64_t x278 = -1LL;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int32_t t69 = -131;

    t69 = (x277*((x278==x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	static int32_t x282 = -41;

    t70 = (x281*((x282==x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x286 = UINT64_MAX;
	int16_t x287 = 3;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 2357;

    t71 = (x285*((x286==x287)<=x288));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x292 = 74;
	int32_t t72 = 6;

    t72 = (x289*((x290==x291)<=x292));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x293 = INT32_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	static uint32_t x295 = 232966328U;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = INT32_MIN;

    t73 = (x293*((x294==x295)<=x296));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int16_t x300 = 8056;
	int32_t t74 = 7;

    t74 = (x297*((x298==x299)<=x300));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	static uint16_t x303 = 2757U;
	uint32_t x304 = 20577U;
	int64_t t75 = INT64_MAX;

    t75 = (x301*((x302==x303)<=x304));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 187439454141874LLU;
	uint32_t x307 = 1791079293U;
	uint8_t x308 = UINT8_MAX;
	uint64_t t76 = 0LLU;

    t76 = (x305*((x306==x307)<=x308));

    if (t76 != 187439454141874LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = 20;
	uint32_t x311 = 0U;
	volatile int64_t t77 = -8949697824712808LL;

    t77 = (x309*((x310==x311)<=x312));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 48900022763265LLU;
	static volatile int16_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = 0;
	static volatile uint64_t t78 = 281LLU;

    t78 = (x313*((x314==x315)<=x316));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = -1;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t79 = INT32_MIN;

    t79 = (x317*((x318==x319)<=x320));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 2U;
	static int64_t x324 = INT64_MIN;
	int32_t t80 = 38;

    t80 = (x321*((x322==x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -29;
	volatile uint32_t x326 = UINT32_MAX;
	int32_t t81 = 163715019;

    t81 = (x325*((x326==x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	static int16_t x331 = 1305;
	volatile int32_t t82 = 3800148;

    t82 = (x329*((x330==x331)<=x332));

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = INT8_MIN;
	int32_t x334 = 113;
	static int64_t x335 = INT64_MIN;
	static volatile int32_t t83 = -147119390;

    t83 = (x333*((x334==x335)<=x336));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 66491417888769190LLU;
	int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	static volatile uint64_t t84 = 7415022666LLU;

    t84 = (x337*((x338==x339)<=x340));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = -13263;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	uint8_t x344 = 15U;

    t85 = (x341*((x342==x343)<=x344));

    if (t85 != -13263) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = INT64_MIN;
	uint8_t x348 = 29U;
	static int32_t t86 = 2154;

    t86 = (x345*((x346==x347)<=x348));

    if (t86 != 13239) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x350 = INT32_MIN;
	volatile int64_t x351 = INT64_MIN;
	static int16_t x352 = -1374;
	int32_t t87 = -92073548;

    t87 = (x349*((x350==x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	static uint32_t x354 = UINT32_MAX;
	static int32_t x355 = INT32_MIN;
	static volatile int64_t t88 = INT64_MAX;

    t88 = (x353*((x354==x355)<=x356));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x358 = 447531455490LLU;
	int32_t x359 = -1008;
	int32_t t89 = -1645013;

    t89 = (x357*((x358==x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	uint8_t x362 = 1U;
	static uint64_t x363 = 125922741168LLU;
	volatile int16_t x364 = INT16_MIN;
	volatile uint32_t t90 = 36U;

    t90 = (x361*((x362==x363)<=x364));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 788367LLU;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = -1;
	uint64_t x368 = UINT64_MAX;
	uint64_t t91 = 10211253LLU;

    t91 = (x365*((x366==x367)<=x368));

    if (t91 != 788367LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	static int8_t x372 = 24;
	uint32_t t92 = UINT32_MAX;

    t92 = (x369*((x370==x371)<=x372));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = INT8_MIN;
	uint16_t x374 = 500U;
	int64_t x375 = -340208976LL;
	volatile uint64_t x376 = 43173730LLU;
	int32_t t93 = 112804;

    t93 = (x373*((x374==x375)<=x376));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = -10466LL;
	int8_t x378 = INT8_MAX;
	int32_t x379 = -1;
	static uint32_t x380 = UINT32_MAX;
	static int64_t t94 = 15455184578657LL;

    t94 = (x377*((x378==x379)<=x380));

    if (t94 != -10466LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 63520910823LLU;
	static uint32_t x383 = UINT32_MAX;
	static volatile uint64_t t95 = 8658683070LLU;

    t95 = (x381*((x382==x383)<=x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x385 = 19174U;
	int64_t x386 = 16166475454657488LL;
	static uint64_t x388 = 1137LLU;
	volatile uint32_t t96 = 193777954U;

    t96 = (x385*((x386==x387)<=x388));

    if (t96 != 19174U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 1239852401748178654LL;
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	int64_t t97 = -529718410329LL;

    t97 = (x389*((x390==x391)<=x392));

    if (t97 != 1239852401748178654LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = UINT16_MAX;
	uint32_t x394 = 1972U;
	volatile int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = 1418982;

    t98 = (x393*((x394==x395)<=x396));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MAX;
	int16_t x400 = 9298;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x397*((x398==x399)<=x400));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -262LL;
	volatile int8_t x403 = 0;
	int32_t x404 = 16736929;

    t100 = (x401*((x402==x403)<=x404));

    if (t100 != -262LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 94980LLU;
	int64_t x406 = INT64_MAX;
	int64_t x407 = -820207560834LL;
	uint8_t x408 = 3U;

    t101 = (x405*((x406==x407)<=x408));

    if (t101 != 94980LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	int16_t x411 = -3839;
	uint8_t x412 = 3U;
	static int32_t t102 = 7339;

    t102 = (x409*((x410==x411)<=x412));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 5004521354974421051LLU;
	uint8_t x415 = 18U;
	uint32_t x416 = 264868395U;

    t103 = (x413*((x414==x415)<=x416));

    if (t103 != 5004521354974421051LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x418 = UINT16_MAX;
	static int32_t x419 = -99594142;
	volatile uint16_t x420 = 1848U;
	static int32_t t104 = INT32_MIN;

    t104 = (x417*((x418==x419)<=x420));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = 366;
	int64_t x422 = INT64_MIN;
	static int64_t x423 = INT64_MAX;
	volatile int32_t t105 = 75025066;

    t105 = (x421*((x422==x423)<=x424));

    if (t105 != 366) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int16_t x426 = 4;
	int8_t x427 = 34;
	int8_t x428 = INT8_MAX;
	static int32_t t106 = 0;

    t106 = (x425*((x426==x427)<=x428));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 186651909713634650LLU;
	volatile int8_t x430 = -31;
	volatile int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	uint64_t t107 = 5966LLU;

    t107 = (x429*((x430==x431)<=x432));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -860;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MAX;
	int16_t x436 = -1;

    t108 = (x433*((x434==x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = 36330090414LL;
	static volatile int64_t x439 = 94793384981633LL;
	uint64_t x440 = 10768244167401519LLU;
	volatile int64_t t109 = 48698129633669090LL;

    t109 = (x437*((x438==x439)<=x440));

    if (t109 != 36330090414LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	static volatile int32_t x442 = -2778;
	static int16_t x443 = -3;
	volatile uint64_t x444 = 468664LLU;
	int32_t t110 = 21856;

    t110 = (x441*((x442==x443)<=x444));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = 280097955;
	volatile int32_t x446 = 33;
	int16_t x448 = -1;
	int32_t t111 = 54425548;

    t111 = (x445*((x446==x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = 0;
	static volatile uint16_t x450 = UINT16_MAX;
	volatile uint64_t x452 = UINT64_MAX;
	int32_t t112 = 755;

    t112 = (x449*((x450==x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 2757634U;
	static volatile uint64_t x454 = 3113537679738571LLU;
	int16_t x456 = -1;
	volatile uint32_t t113 = 1566U;

    t113 = (x453*((x454==x455)<=x456));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x459 = UINT16_MAX;
	static int64_t x460 = 6078LL;
	int32_t t114 = -6217148;

    t114 = (x457*((x458==x459)<=x460));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 38884;
	uint64_t x462 = 10491941LLU;
	volatile int16_t x463 = INT16_MIN;

    t115 = (x461*((x462==x463)<=x464));

    if (t115 != 38884) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x466 = 534702201643LLU;
	uint16_t x467 = 14U;
	int32_t x468 = -1;
	volatile int32_t t116 = -139;

    t116 = (x465*((x466==x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = 1U;
	uint64_t x470 = 207069028842224LLU;
	static volatile int32_t x472 = INT32_MIN;
	static int32_t t117 = 940757195;

    t117 = (x469*((x470==x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3152U;
	static int64_t x474 = 500963212952829LL;
	static int16_t x475 = -5853;
	int16_t x476 = 3914;
	int32_t t118 = -1;

    t118 = (x473*((x474==x475)<=x476));

    if (t118 != 3152) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 11385U;
	uint32_t x478 = 13942784U;
	uint16_t x479 = 12U;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t119 = 1844003021U;

    t119 = (x477*((x478==x479)<=x480));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = UINT16_MAX;
	int64_t x483 = INT64_MAX;
	static volatile int64_t t120 = -6302543579236LL;

    t120 = (x481*((x482==x483)<=x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = 309U;
	int64_t x486 = INT64_MIN;
	int64_t x487 = -899295090447529LL;
	static int8_t x488 = INT8_MAX;
	int32_t t121 = -1;

    t121 = (x485*((x486==x487)<=x488));

    if (t121 != 309) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = 0U;
	volatile int16_t x490 = -1;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 1648827971U;
	static volatile int32_t t122 = 736;

    t122 = (x489*((x490==x491)<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	static volatile int64_t x494 = -64812897866051LL;
	static int16_t x495 = -30;
	uint32_t x496 = 0U;
	int32_t t123 = 7919;

    t123 = (x493*((x494==x495)<=x496));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	static int16_t x498 = INT16_MIN;
	int64_t x499 = -1LL;
	int64_t x500 = -1LL;
	int64_t t124 = -31620655LL;

    t124 = (x497*((x498==x499)<=x500));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = INT16_MAX;
	uint64_t x502 = UINT64_MAX;
	uint16_t x503 = UINT16_MAX;
	int8_t x504 = 1;
	volatile int32_t t125 = 32184072;

    t125 = (x501*((x502==x503)<=x504));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 122U;
	uint8_t x506 = 0U;
	int64_t x507 = INT64_MIN;
	uint32_t x508 = 7U;

    t126 = (x505*((x506==x507)<=x508));

    if (t126 != 122) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = -3245;
	uint64_t x511 = 1394708173LLU;
	uint8_t x512 = UINT8_MAX;
	static int64_t t127 = INT64_MIN;

    t127 = (x509*((x510==x511)<=x512));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	static int64_t x516 = -535080685339743LL;
	int32_t t128 = -1497090;

    t128 = (x513*((x514==x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -126;
	static volatile int64_t x518 = INT64_MIN;
	volatile int32_t t129 = -519042931;

    t129 = (x517*((x518==x519)<=x520));

    if (t129 != -126) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	static uint64_t x524 = UINT64_MAX;
	int64_t t130 = INT64_MIN;

    t130 = (x521*((x522==x523)<=x524));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1LL;
	uint64_t x527 = UINT64_MAX;
	static int64_t x528 = -1LL;

    t131 = (x525*((x526==x527)<=x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 1163U;
	volatile int8_t x530 = -1;
	uint64_t x531 = 8LLU;
	int32_t x532 = INT32_MAX;
	volatile uint32_t t132 = 651661722U;

    t132 = (x529*((x530==x531)<=x532));

    if (t132 != 1163U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x534 = INT16_MAX;
	static int8_t x535 = -2;
	volatile int32_t t133 = 3876;

    t133 = (x533*((x534==x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	int8_t x538 = -1;
	uint8_t x539 = 0U;
	int8_t x540 = -51;
	volatile int32_t t134 = -131;

    t134 = (x537*((x538==x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	uint16_t x543 = UINT16_MAX;
	volatile uint16_t x544 = 1172U;
	volatile int32_t t135 = -13192785;

    t135 = (x541*((x542==x543)<=x544));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = 50056;
	int16_t x546 = INT16_MAX;

    t136 = (x545*((x546==x547)<=x548));

    if (t136 != 50056) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x550 = 168U;
	uint32_t x552 = 2U;
	int64_t t137 = 12961042214501LL;

    t137 = (x549*((x550==x551)<=x552));

    if (t137 != -682940372LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x554 = INT32_MIN;
	uint64_t x555 = 21357LLU;
	int32_t t138 = 106342333;

    t138 = (x553*((x554==x555)<=x556));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MAX;
	int32_t t139 = 21308;

    t139 = (x557*((x558==x559)<=x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MIN;
	int8_t x562 = -1;
	int32_t x563 = INT32_MIN;
	int64_t x564 = -1LL;
	volatile int32_t t140 = 23885634;

    t140 = (x561*((x562==x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	uint16_t x567 = UINT16_MAX;
	volatile int16_t x568 = -2123;

    t141 = (x565*((x566==x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 34U;
	uint32_t x570 = 2044859928U;
	int64_t x571 = -1LL;
	volatile int32_t t142 = 472486;

    t142 = (x569*((x570==x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = INT16_MIN;
	volatile int16_t x574 = INT16_MAX;
	static int8_t x575 = INT8_MIN;
	uint8_t x576 = 3U;
	static volatile int32_t t143 = -1144;

    t143 = (x573*((x574==x575)<=x576));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	uint32_t x580 = 185U;
	volatile int32_t t144 = -567;

    t144 = (x577*((x578==x579)<=x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = 271304374532362108LL;
	int64_t x582 = INT64_MIN;
	int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	volatile int64_t t145 = 2LL;

    t145 = (x581*((x582==x583)<=x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -11;
	volatile int32_t x586 = -5;
	static volatile int32_t t146 = 5630;

    t146 = (x585*((x586==x587)<=x588));

    if (t146 != -11) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 0U;
	static int64_t x590 = INT64_MIN;
	static uint32_t x591 = 654U;
	uint64_t x592 = 3996987125LLU;
	int32_t t147 = 0;

    t147 = (x589*((x590==x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 55789337758LLU;
	volatile int64_t x594 = INT64_MAX;
	static volatile uint32_t x596 = UINT32_MAX;
	static uint64_t t148 = 299505414LLU;

    t148 = (x593*((x594==x595)<=x596));

    if (t148 != 55789337758LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x598 = UINT16_MAX;
	static int16_t x599 = INT16_MIN;
	static uint32_t x600 = 6446U;
	volatile int32_t t149 = -1;

    t149 = (x597*((x598==x599)<=x600));

    if (t149 != 3200) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = 110U;

    t150 = (x601*((x602==x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = INT8_MAX;
	static uint32_t x606 = UINT32_MAX;
	uint64_t x607 = 4972521LLU;

    t151 = (x605*((x606==x607)<=x608));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = INT16_MIN;
	static volatile int64_t x610 = -1179010132129LL;

    t152 = (x609*((x610==x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	static uint32_t x614 = 720235217U;
	int32_t x615 = -1;
	int8_t x616 = INT8_MAX;
	volatile int32_t t153 = INT32_MIN;

    t153 = (x613*((x614==x615)<=x616));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 6729300142483767109LLU;
	static uint32_t x620 = 43205238U;
	volatile int32_t t154 = INT32_MIN;

    t154 = (x617*((x618==x619)<=x620));

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static int16_t x622 = INT16_MAX;
	volatile uint32_t x623 = UINT32_MAX;
	static uint32_t x624 = UINT32_MAX;
	static int32_t t155 = 1;

    t155 = (x621*((x622==x623)<=x624));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x626 = INT32_MAX;
	static int8_t x627 = 6;
	volatile int32_t t156 = 1;

    t156 = (x625*((x626==x627)<=x628));

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MAX;
	static uint16_t x630 = UINT16_MAX;
	uint16_t x631 = UINT16_MAX;
	uint16_t x632 = 978U;
	volatile int64_t t157 = INT64_MAX;

    t157 = (x629*((x630==x631)<=x632));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = UINT8_MAX;
	static uint8_t x634 = 1U;
	int8_t x635 = -1;
	uint16_t x636 = 122U;

    t158 = (x633*((x634==x635)<=x636));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	int64_t x639 = -1LL;
	static int64_t x640 = 35981LL;
	volatile int32_t t159 = -1325;

    t159 = (x637*((x638==x639)<=x640));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 1481986LLU;
	int64_t x642 = INT64_MIN;
	uint8_t x643 = UINT8_MAX;
	uint64_t t160 = 23LLU;

    t160 = (x641*((x642==x643)<=x644));

    if (t160 != 1481986LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 8U;
	static uint8_t x646 = UINT8_MAX;
	volatile uint64_t x647 = UINT64_MAX;
	uint32_t x648 = 2542380U;
	int32_t t161 = -210624481;

    t161 = (x645*((x646==x647)<=x648));

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	static int16_t x650 = INT16_MIN;
	static uint16_t x651 = 8111U;
	int32_t t162 = -322002142;

    t162 = (x649*((x650==x651)<=x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	int64_t x654 = -1LL;
	static int64_t x655 = -1LL;
	int8_t x656 = -2;
	int32_t t163 = -2829;

    t163 = (x653*((x654==x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = 1068995110U;
	int16_t x660 = 13839;
	uint32_t t164 = 17U;

    t164 = (x657*((x658==x659)<=x660));

    if (t164 != 1068995110U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -3;
	int32_t x662 = 375440640;
	int32_t x663 = -10;
	int64_t x664 = INT64_MIN;

    t165 = (x661*((x662==x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	int8_t x666 = 0;
	uint16_t x667 = 226U;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t166 = -857;

    t166 = (x665*((x666==x667)<=x668));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int64_t x671 = -1LL;
	int8_t x672 = -1;

    t167 = (x669*((x670==x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = 208U;
	uint16_t x676 = UINT16_MAX;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (x673*((x674==x675)<=x676));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	int8_t x679 = INT8_MIN;
	volatile int32_t x680 = INT32_MAX;
	int32_t t169 = 570;

    t169 = (x677*((x678==x679)<=x680));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MAX;
	int8_t x682 = INT8_MIN;
	volatile uint8_t x683 = 0U;
	int16_t x684 = 14623;

    t170 = (x681*((x682==x683)<=x684));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x686 = -1;
	uint8_t x687 = 3U;
	int16_t x688 = 1;
	volatile int32_t t171 = -74;

    t171 = (x685*((x686==x687)<=x688));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	static uint64_t x690 = 3673LLU;
	int64_t x691 = -1LL;
	int32_t t172 = 53;

    t172 = (x689*((x690==x691)<=x692));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int32_t x696 = 914;
	static volatile int32_t t173 = -13;

    t173 = (x693*((x694==x695)<=x696));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 0U;
	int8_t x699 = INT8_MIN;
	int64_t x700 = 121850612979LL;
	static int32_t t174 = -203;

    t174 = (x697*((x698==x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MIN;
	int16_t x704 = 1170;
	int32_t t175 = 5661;

    t175 = (x701*((x702==x703)<=x704));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	volatile int16_t x706 = -1;
	volatile uint32_t x707 = 85544U;
	volatile int16_t x708 = INT16_MIN;
	volatile int64_t t176 = 942564LL;

    t176 = (x705*((x706==x707)<=x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 2334126132948LLU;
	static int64_t x710 = INT64_MIN;
	uint16_t x711 = 65U;
	int32_t x712 = -1;
	uint64_t t177 = 2223989559075446LLU;

    t177 = (x709*((x710==x711)<=x712));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 0;
	volatile uint8_t x714 = UINT8_MAX;
	volatile int32_t x715 = 45768;
	int64_t x716 = INT64_MAX;

    t178 = (x713*((x714==x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -959;
	uint16_t x718 = 2342U;
	int16_t x720 = -1;

    t179 = (x717*((x718==x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	volatile int8_t x723 = -1;
	int64_t x724 = -1LL;
	int32_t t180 = 8240;

    t180 = (x721*((x722==x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	volatile uint16_t x726 = 408U;
	static int16_t x727 = INT16_MIN;
	int8_t x728 = 1;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x725*((x726==x727)<=x728));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = -1;
	int64_t x730 = INT64_MAX;
	int16_t x731 = INT16_MAX;
	int32_t t182 = 349413298;

    t182 = (x729*((x730==x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MIN;
	int32_t x735 = INT32_MIN;
	int64_t x736 = -1LL;
	int32_t t183 = 1653905;

    t183 = (x733*((x734==x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	int64_t x738 = 91136966LL;
	static int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	int32_t t184 = 243505558;

    t184 = (x737*((x738==x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -87;
	int8_t x742 = 0;
	volatile int32_t t185 = -129746;

    t185 = (x741*((x742==x743)<=x744));

    if (t185 != -87) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x747 = 11U;
	int64_t x748 = 55572LL;
	int32_t t186 = 7645;

    t186 = (x745*((x746==x747)<=x748));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	static int8_t x750 = 3;
	volatile uint32_t x751 = 843U;
	uint8_t x752 = UINT8_MAX;
	static volatile int32_t t187 = -104402294;

    t187 = (x749*((x750==x751)<=x752));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = INT32_MAX;
	static int16_t x755 = 1348;
	volatile int32_t x756 = 0;

    t188 = (x753*((x754==x755)<=x756));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 30U;
	static int16_t x758 = -1;
	volatile int64_t x760 = INT64_MIN;
	int32_t t189 = 2788;

    t189 = (x757*((x758==x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x762 = UINT64_MAX;
	int16_t x763 = -1;
	int8_t x764 = -47;

    t190 = (x761*((x762==x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x766 = 73497528094LL;
	int16_t x767 = INT16_MIN;
	volatile int32_t x768 = 253;

    t191 = (x765*((x766==x767)<=x768));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int64_t x771 = INT64_MIN;
	volatile int16_t x772 = INT16_MIN;
	int32_t t192 = 9365;

    t192 = (x769*((x770==x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x774 = 51LL;
	uint16_t x775 = 18206U;
	uint16_t x776 = 2U;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = (x773*((x774==x775)<=x776));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	volatile int64_t x778 = -1LL;
	int64_t x780 = INT64_MIN;

    t194 = (x777*((x778==x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	static int64_t x782 = INT64_MIN;
	uint16_t x783 = 2U;
	uint32_t x784 = UINT32_MAX;
	static uint32_t t195 = UINT32_MAX;

    t195 = (x781*((x782==x783)<=x784));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x785 = 7U;
	uint16_t x786 = UINT16_MAX;
	int32_t x787 = 7201221;
	volatile int8_t x788 = INT8_MIN;
	int32_t t196 = -4470;

    t196 = (x785*((x786==x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -11586231156732728LL;
	uint64_t x790 = 71937080295LLU;
	int8_t x791 = -1;
	static int64_t x792 = -16036524LL;

    t197 = (x789*((x790==x791)<=x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	static volatile uint16_t x795 = UINT16_MAX;
	int8_t x796 = INT8_MIN;
	uint32_t t198 = 32U;

    t198 = (x793*((x794==x795)<=x796));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	int8_t x798 = INT8_MAX;
	uint8_t x799 = 1U;
	int8_t x800 = -4;

    t199 = (x797*((x798==x799)<=x800));

    if (t199 != 0) { NG(); } else { ; }
	
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

