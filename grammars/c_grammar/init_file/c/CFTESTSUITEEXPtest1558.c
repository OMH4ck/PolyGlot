
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

int64_t x8 = INT64_MAX;
static uint8_t x11 = 25U;
volatile int8_t x13 = -1;
volatile int8_t x16 = -10;
uint8_t x21 = 2U;
uint16_t x23 = UINT16_MAX;
int16_t x25 = INT16_MAX;
static uint16_t x32 = 126U;
int8_t x33 = INT8_MIN;
int16_t x34 = INT16_MIN;
static volatile int16_t x35 = INT16_MAX;
int32_t t9 = 14724917;
volatile int64_t x52 = -1LL;
static int64_t t11 = -82520878262LL;
static volatile int32_t x53 = INT32_MIN;
int32_t x58 = INT32_MAX;
volatile uint64_t t13 = 1673061LLU;
int8_t x72 = -1;
int64_t x73 = INT64_MIN;
int32_t t18 = -1;
uint32_t x81 = 105885493U;
uint64_t x89 = 227136LLU;
uint8_t x93 = 68U;
volatile int8_t x99 = INT8_MIN;
int16_t x103 = INT16_MIN;
int64_t x111 = -1LL;
int16_t x115 = INT16_MIN;
int64_t x116 = INT64_MIN;
static int8_t x117 = INT8_MIN;
volatile int32_t t28 = 490;
int8_t x124 = INT8_MAX;
uint8_t x135 = UINT8_MAX;
uint16_t x137 = 9942U;
int32_t t33 = 4;
uint64_t x148 = 48291811LLU;
static volatile int64_t x157 = 77748491227800433LL;
static int8_t x161 = INT8_MIN;
static int32_t t39 = -1012931;
uint64_t x177 = 0LLU;
volatile int64_t x185 = INT64_MIN;
uint16_t x186 = 26U;
volatile int32_t t43 = 0;
static uint64_t x198 = 317218LLU;
uint16_t x199 = UINT16_MAX;
int8_t x208 = -1;
int32_t t47 = 53;
volatile uint32_t x216 = 2U;
uint32_t x221 = 6127U;
uint32_t t51 = 217722578U;
uint64_t x231 = UINT64_MAX;
volatile uint32_t x233 = UINT32_MAX;
int8_t x238 = -2;
int8_t x240 = INT8_MAX;
int8_t x241 = -46;
int16_t x246 = -1;
uint16_t x251 = 1681U;
static int8_t x253 = INT8_MIN;
int32_t x258 = INT32_MAX;
int16_t x264 = -4371;
static volatile int16_t x273 = INT16_MIN;
uint8_t x279 = UINT8_MAX;
int16_t x281 = -1;
int32_t x285 = INT32_MAX;
volatile int64_t x291 = -1LL;
int8_t x306 = INT8_MIN;
volatile int16_t x307 = -20;
volatile int64_t x310 = INT64_MIN;
uint64_t x313 = UINT64_MAX;
int8_t x315 = -1;
int8_t x325 = 44;
volatile int32_t t75 = 66514;
uint64_t x336 = 267604393058LLU;
uint16_t x337 = 82U;
volatile uint64_t x339 = 12111LLU;
volatile int64_t x345 = -13113184575LL;
uint64_t x349 = UINT64_MAX;
volatile int64_t t82 = -484369234670LL;
uint32_t x357 = 61094U;
uint32_t x367 = 5U;
uint32_t x370 = UINT32_MAX;
int8_t x371 = INT8_MIN;
uint8_t x377 = 80U;
volatile int8_t x379 = INT8_MIN;
uint8_t x381 = 74U;
static int64_t x386 = -1LL;
volatile int16_t x394 = -1;
int32_t t92 = 393869;
int64_t x397 = -1LL;
int8_t x401 = -1;
uint32_t x403 = 1291469U;
volatile int32_t t94 = 0;
static int64_t x405 = INT64_MAX;
static int32_t x406 = INT32_MAX;
uint16_t x410 = 690U;
static int64_t t98 = -17306475047280LL;
int16_t x425 = INT16_MIN;
volatile uint16_t x428 = 6U;
int32_t t100 = -289805274;
volatile uint64_t x431 = 7850454383911939470LLU;
int64_t x436 = INT64_MIN;
int8_t x438 = INT8_MAX;
int8_t x442 = INT8_MIN;
volatile int8_t x460 = INT8_MAX;
int64_t t108 = 1934574644905LL;
volatile int16_t x461 = -400;
static int64_t x465 = -77611824313417204LL;
int16_t x466 = INT16_MIN;
int16_t x467 = -164;
uint16_t x473 = UINT16_MAX;
volatile int32_t t112 = -32755;
int8_t x491 = 3;
volatile int64_t x494 = INT64_MIN;
volatile uint8_t x496 = UINT8_MAX;
int32_t t117 = -87;
int64_t x499 = INT64_MIN;
volatile int32_t t118 = -30281;
volatile int32_t x505 = INT32_MIN;
uint32_t x506 = UINT32_MAX;
uint32_t x514 = 31881276U;
int32_t x515 = INT32_MIN;
int64_t x516 = INT64_MIN;
int16_t x518 = INT16_MIN;
volatile uint8_t x526 = 5U;
int64_t x528 = -1LL;
static volatile int64_t t124 = -1LL;
uint64_t t125 = 7048969050242978LLU;
uint16_t x540 = 12U;
uint8_t x542 = 63U;
int64_t x545 = INT64_MIN;
uint16_t x548 = 22U;
volatile int64_t x550 = INT64_MAX;
static uint8_t x551 = 53U;
static volatile uint32_t x555 = 1953U;
int16_t x558 = INT16_MIN;
uint32_t t135 = 37U;
int8_t x574 = -1;
static volatile int64_t x576 = INT64_MIN;
int64_t t136 = -704LL;
volatile uint32_t x577 = 25339U;
static int32_t x578 = INT32_MAX;
int64_t x579 = INT64_MIN;
int16_t x588 = 55;
static volatile int32_t t139 = 0;
uint64_t x590 = UINT64_MAX;
static volatile int64_t t140 = -1577762604LL;
uint32_t x596 = 945336775U;
int16_t x597 = INT16_MIN;
static int64_t x609 = INT64_MIN;
static uint64_t x610 = UINT64_MAX;
uint8_t x616 = UINT8_MAX;
int32_t t146 = 1514361;
int32_t x617 = -1;
uint64_t x621 = 4963LLU;
static uint8_t x622 = 14U;
uint16_t x633 = 253U;
int32_t t151 = 5808727;
int8_t x638 = INT8_MIN;
uint16_t x641 = UINT16_MAX;
uint64_t x642 = 5639273298LLU;
int16_t x646 = INT16_MAX;
int8_t x650 = INT8_MIN;
uint32_t x652 = 1829867631U;
static uint32_t t155 = 0U;
int32_t x661 = -40;
int64_t x669 = INT64_MIN;
static int32_t x678 = INT32_MIN;
uint64_t x679 = UINT64_MAX;
int16_t x689 = 47;
int32_t t165 = 6472;
uint64_t x696 = 21680421500026091LLU;
uint8_t x698 = UINT8_MAX;
int32_t x699 = INT32_MIN;
volatile uint64_t t167 = 77162759LLU;
uint8_t x702 = 3U;
volatile int16_t x703 = INT16_MAX;
uint16_t x709 = 245U;
int32_t x712 = INT32_MIN;
static int64_t x713 = INT64_MIN;
static int32_t x715 = 158;
uint8_t x716 = 7U;
static int8_t x720 = -1;
int32_t x724 = -1;
uint32_t t174 = 33U;
uint8_t x731 = 75U;
uint64_t x735 = 21122866LLU;
int32_t t176 = 21;
volatile int16_t x749 = 1;
static uint16_t x750 = 10U;
static uint32_t x753 = 2U;
uint32_t t180 = 27U;
int32_t x757 = INT32_MAX;
static uint8_t x772 = UINT8_MAX;
static int8_t x784 = INT8_MIN;
int32_t x785 = -1;
volatile int8_t x794 = INT8_MIN;
int8_t x797 = INT8_MIN;
uint16_t x798 = 7U;
int16_t x805 = INT16_MIN;
static volatile int64_t x808 = -1LL;
volatile int16_t x812 = INT16_MIN;
uint64_t x816 = 102361324832LLU;
int8_t x817 = 0;
uint64_t t196 = 1LLU;
static int8_t x832 = -51;
volatile uint32_t t199 = 198511U;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MIN;
	uint32_t x4 = 256200480U;
	uint32_t t0 = 2945U;

    t0 = (x1/((x2==x3)^x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	static int8_t x6 = -1;
	uint16_t x7 = UINT16_MAX;
	volatile int64_t t1 = -96090992243657LL;

    t1 = (x5/((x6==x7)^x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 53U;
	static int64_t x10 = 3785950LL;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 41905910643848628LL;

    t2 = (x9/((x10==x11)^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	int64_t x15 = 88114215LL;
	volatile int32_t t3 = 239898136;

    t3 = (x13/((x14==x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1088;
	int8_t x18 = INT8_MAX;
	volatile int32_t x19 = 1794995;
	uint8_t x20 = 30U;
	int32_t t4 = 206246997;

    t4 = (x17/((x18==x19)^x20));

    if (t4 != -36) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 202065U;

    t5 = (x21/((x22==x23)^x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = 144;
	int32_t x27 = -1;
	int64_t x28 = -1LL;
	volatile int64_t t6 = 31585LL;

    t6 = (x25/((x26==x27)^x28));

    if (t6 != -32767LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 0U;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int32_t t7 = 287;

    t7 = (x29/((x30==x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 414152LL;

    t8 = (x33/((x34==x35)^x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 6;
	uint16_t x42 = 216U;
	uint64_t x43 = 21607LLU;
	int32_t x44 = 195462023;

    t9 = (x41/((x42==x43)^x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	int16_t x48 = 43;
	int32_t t10 = -61483307;

    t10 = (x45/((x46==x47)^x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	static int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;

    t11 = (x49/((x50==x51)^x52));

    if (t11 != -2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MAX;
	uint8_t x55 = 1U;
	static volatile int16_t x56 = INT16_MAX;
	static volatile int32_t t12 = -24;

    t12 = (x53/((x54==x55)^x56));

    if (t12 != -65538) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x57 = 3169978614LLU;
	int16_t x59 = INT16_MIN;
	static int32_t x60 = -2488;

    t13 = (x57/((x58==x59)^x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = 0U;
	static volatile uint64_t x62 = UINT64_MAX;
	static int8_t x63 = INT8_MIN;
	static int16_t x64 = 14;
	int32_t t14 = 0;

    t14 = (x61/((x62==x63)^x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = 16695036133223LL;
	static uint32_t x66 = 183U;
	static uint64_t x67 = 12961002496LLU;
	static uint8_t x68 = 11U;
	static volatile int64_t t15 = -2379281LL;

    t15 = (x65/((x66==x67)^x68));

    if (t15 != 1517730557565LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = 0;
	int64_t x70 = INT64_MIN;
	static uint64_t x71 = 9103680LLU;
	int32_t t16 = 773063;

    t16 = (x69/((x70==x71)^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x74 = -62624;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t17 = 1153956248LLU;

    t17 = (x73/((x74==x75)^x76));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	volatile int32_t x78 = INT32_MIN;
	static int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;

    t18 = (x77/((x78==x79)^x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x82 = -204976;
	int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	volatile uint32_t t19 = 2590759U;

    t19 = (x81/((x82==x83)^x84));

    if (t19 != 415237U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = INT64_MAX;
	static volatile int32_t x86 = 103;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MIN;
	int64_t t20 = 235LL;

    t20 = (x85/((x86==x87)^x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x90 = 143;
	static int32_t x91 = 183443952;
	uint16_t x92 = 1U;
	volatile uint64_t t21 = 212974077678882701LLU;

    t21 = (x89/((x90==x91)^x92));

    if (t21 != 227136LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = 0;
	int64_t x95 = -1LL;
	int16_t x96 = INT16_MIN;
	int32_t t22 = 5164;

    t22 = (x93/((x94==x95)^x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x97 = 71U;
	volatile int32_t x98 = -45;
	static volatile uint64_t x100 = 509LLU;
	volatile uint64_t t23 = 2LLU;

    t23 = (x97/((x98==x99)^x100));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -9;
	static int32_t x102 = INT32_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t24 = -2430120;

    t24 = (x101/((x102==x103)^x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 4;
	static int16_t x106 = INT16_MIN;
	static uint64_t x107 = 20453229309LLU;
	int32_t x108 = 11313;
	int32_t t25 = -3;

    t25 = (x105/((x106==x107)^x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MIN;
	volatile int16_t x112 = 1;
	static int32_t t26 = 7160;

    t26 = (x109/((x110==x111)^x112));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x113 = INT64_MIN;
	volatile int32_t x114 = INT32_MIN;
	volatile int64_t t27 = 253125188950507506LL;

    t27 = (x113/((x114==x115)^x116));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MIN;
	int8_t x120 = -1;

    t28 = (x117/((x118==x119)^x120));

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = -178188;
	int32_t x122 = INT32_MAX;
	int64_t x123 = 87314198520LL;
	volatile int32_t t29 = 55;

    t29 = (x121/((x122==x123)^x124));

    if (t29 != -1403) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = -260;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 46U;
	static uint8_t x132 = 7U;
	volatile int32_t t30 = 705129;

    t30 = (x129/((x130==x131)^x132));

    if (t30 != -37) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = UINT32_MAX;
	volatile uint32_t x134 = 4187781U;
	static uint32_t x136 = 5996U;
	static volatile uint32_t t31 = 14220465U;

    t31 = (x133/((x134==x135)^x136));

    if (t31 != 716305U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x138 = 564367161269828LLU;
	static int8_t x139 = INT8_MAX;
	static int8_t x140 = 2;
	static int32_t t32 = 408005506;

    t32 = (x137/((x138==x139)^x140));

    if (t32 != 4971) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = -13;
	int64_t x142 = INT64_MAX;
	int8_t x143 = -1;
	int16_t x144 = -3;

    t33 = (x141/((x142==x143)^x144));

    if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x145 = 160367343U;
	uint64_t x146 = 797900265680025780LLU;
	static int16_t x147 = INT16_MIN;
	static volatile uint64_t t34 = 683LLU;

    t34 = (x145/((x146==x147)^x148));

    if (t34 != 3LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	int64_t t35 = 100LL;

    t35 = (x157/((x158==x159)^x160));

    if (t35 != -607410087717190LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = 40065232337560533LLU;
	uint64_t t36 = 51LLU;

    t36 = (x161/((x162==x163)^x164));

    if (t36 != 460LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x165 = -1;
	int64_t x166 = -1LL;
	uint8_t x167 = 0U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t37 = 5;

    t37 = (x165/((x166==x167)^x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x169 = INT8_MAX;
	uint8_t x170 = UINT8_MAX;
	static int32_t x171 = INT32_MIN;
	static int64_t x172 = 18LL;
	int64_t t38 = 8925647406405414LL;

    t38 = (x169/((x170==x171)^x172));

    if (t38 != 7LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int8_t x176 = 1;

    t39 = (x173/((x174==x175)^x176));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x178 = -240LL;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MAX;
	uint64_t t40 = 6141034703LLU;

    t40 = (x177/((x178==x179)^x180));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x181 = -1;
	uint8_t x182 = 33U;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = -1;
	int32_t t41 = -242;

    t41 = (x181/((x182==x183)^x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t42 = -337330288582615LL;

    t42 = (x185/((x186==x187)^x188));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = -1;
	int64_t x190 = -1LL;
	int32_t x191 = -10008;
	int16_t x192 = INT16_MIN;

    t43 = (x189/((x190==x191)^x192));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = -16;
	uint32_t x194 = 1U;
	volatile int16_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t44 = -49119;

    t44 = (x193/((x194==x195)^x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x197 = 2173;
	static int16_t x200 = -1;
	int32_t t45 = -14959774;

    t45 = (x197/((x198==x199)^x200));

    if (t45 != -2173) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x201 = 29U;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = 11881654LL;
	int32_t x204 = -1;
	static volatile int32_t t46 = 1936;

    t46 = (x201/((x202==x203)^x204));

    if (t46 != -29) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = -1;
	uint32_t x206 = 489U;
	int8_t x207 = -1;

    t47 = (x205/((x206==x207)^x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = 0;
	uint16_t x212 = 7U;
	int32_t t48 = 10427;

    t48 = (x209/((x210==x211)^x212));

    if (t48 != 4681) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x213 = 368U;
	uint16_t x214 = 0U;
	volatile int64_t x215 = 487089LL;
	volatile uint32_t t49 = 2669U;

    t49 = (x213/((x214==x215)^x216));

    if (t49 != 184U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = 6032077801593430LL;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -1;
	int32_t t50 = -177963;

    t50 = (x217/((x218==x219)^x220));

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x222 = -7;
	int8_t x223 = -1;
	int16_t x224 = INT16_MIN;

    t51 = (x221/((x222==x223)^x224));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x226 = 2;
	uint8_t x227 = UINT8_MAX;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t52 = 20991307319LL;

    t52 = (x225/((x226==x227)^x228));

    if (t52 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x229 = UINT32_MAX;
	static volatile int32_t x230 = INT32_MIN;
	int16_t x232 = 1885;
	static volatile uint32_t t53 = 1U;

    t53 = (x229/((x230==x231)^x232));

    if (t53 != 2278497U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x234 = -1;
	uint16_t x235 = UINT16_MAX;
	static int16_t x236 = 11;
	static volatile uint32_t t54 = 23U;

    t54 = (x233/((x234==x235)^x236));

    if (t54 != 390451572U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	volatile uint16_t x239 = UINT16_MAX;
	volatile uint32_t t55 = 16138U;

    t55 = (x237/((x238==x239)^x240));

    if (t55 != 33818640U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x242 = INT64_MIN;
	uint16_t x243 = 25630U;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t56 = -218999;

    t56 = (x241/((x242==x243)^x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x245 = UINT16_MAX;
	volatile int32_t x247 = INT32_MIN;
	uint32_t x248 = 26U;
	uint32_t t57 = 35U;

    t57 = (x245/((x246==x247)^x248));

    if (t57 != 2520U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x249 = 867288;
	static int16_t x250 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t58 = 57748;

    t58 = (x249/((x250==x251)^x252));

    if (t58 != -26) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x254 = 368LL;
	int32_t x255 = 50161696;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t59 = 1041735U;

    t59 = (x253/((x254==x255)^x256));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x257 = 657165753197764LLU;
	volatile uint32_t x259 = 567301U;
	static int32_t x260 = -1;
	volatile uint64_t t60 = 1494913269LLU;

    t60 = (x257/((x258==x259)^x260));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = INT8_MIN;
	static int32_t x262 = INT32_MAX;
	int16_t x263 = INT16_MAX;
	volatile int32_t t61 = -963;

    t61 = (x261/((x262==x263)^x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x265 = -1;
	int32_t x266 = 15870685;
	static int64_t x267 = 1153425090LL;
	static int16_t x268 = INT16_MIN;
	int32_t t62 = 453639;

    t62 = (x265/((x266==x267)^x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x274 = INT16_MIN;
	uint64_t x275 = UINT64_MAX;
	static volatile int8_t x276 = -44;
	static int32_t t63 = 3207;

    t63 = (x273/((x274==x275)^x276));

    if (t63 != 744) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = 46;
	int8_t x278 = INT8_MIN;
	int32_t x280 = -1;
	static volatile int32_t t64 = -1042172346;

    t64 = (x277/((x278==x279)^x280));

    if (t64 != -46) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x282 = INT32_MIN;
	int16_t x283 = 1791;
	static volatile int64_t x284 = INT64_MAX;
	int64_t t65 = 384599712LL;

    t65 = (x281/((x282==x283)^x284));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x286 = INT8_MAX;
	uint8_t x287 = 8U;
	volatile int8_t x288 = INT8_MIN;
	static volatile int32_t t66 = 25749;

    t66 = (x285/((x286==x287)^x288));

    if (t66 != -16777215) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x289 = INT32_MIN;
	static int64_t x290 = INT64_MIN;
	uint8_t x292 = 3U;
	volatile int32_t t67 = 34406;

    t67 = (x289/((x290==x291)^x292));

    if (t67 != -715827882) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	static int32_t x294 = -1;
	static int16_t x295 = INT16_MIN;
	int8_t x296 = -2;
	static volatile int32_t t68 = -5;

    t68 = (x293/((x294==x295)^x296));

    if (t68 != 1073741824) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x297 = INT32_MAX;
	volatile int16_t x298 = INT16_MAX;
	static int64_t x299 = INT64_MIN;
	int32_t x300 = -1;
	volatile int32_t t69 = -12673;

    t69 = (x297/((x298==x299)^x300));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = -1LL;
	uint32_t x303 = 1289213952U;
	int64_t x304 = INT64_MAX;
	volatile int64_t t70 = -125075374099777275LL;

    t70 = (x301/((x302==x303)^x304));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t71 = 241U;

    t71 = (x305/((x306==x307)^x308));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x309 = INT64_MAX;
	int32_t x311 = INT32_MIN;
	static volatile int8_t x312 = INT8_MIN;
	static volatile int64_t t72 = -1963LL;

    t72 = (x309/((x310==x311)^x312));

    if (t72 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x314 = INT32_MAX;
	static int8_t x316 = -1;
	volatile uint64_t t73 = 307840470LLU;

    t73 = (x313/((x314==x315)^x316));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	volatile int8_t x322 = -1;
	uint16_t x323 = 661U;
	int16_t x324 = -4;
	uint32_t t74 = 1508982741U;

    t74 = (x321/((x322==x323)^x324));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = UINT8_MAX;

    t75 = (x325/((x326==x327)^x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x329 = 1516LLU;
	static volatile uint64_t x330 = UINT64_MAX;
	static int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	uint64_t t76 = 6828LLU;

    t76 = (x329/((x330==x331)^x332));

    if (t76 != 5LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = 30602633U;
	int16_t x334 = INT16_MIN;
	uint16_t x335 = 3427U;
	static uint64_t t77 = 10462LLU;

    t77 = (x333/((x334==x335)^x336));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x338 = INT8_MIN;
	uint64_t x340 = 14293867143691450LLU;
	volatile uint64_t t78 = 348581357359LLU;

    t78 = (x337/((x338==x339)^x340));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = -1;
	uint32_t x342 = 1936010922U;
	int8_t x343 = -40;
	uint32_t x344 = 3117U;
	uint32_t t79 = 1U;

    t79 = (x341/((x342==x343)^x344));

    if (t79 != 1377917U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x346 = INT64_MIN;
	volatile int16_t x347 = INT16_MAX;
	int16_t x348 = -92;
	int64_t t80 = -24083842LL;

    t80 = (x345/((x346==x347)^x348));

    if (t80 != 142534614LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	uint64_t t81 = 28930792899156459LLU;

    t81 = (x349/((x350==x351)^x352));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x353 = -1837802806938LL;
	int32_t x354 = 840;
	static int32_t x355 = -1;
	volatile int8_t x356 = -1;

    t82 = (x353/((x354==x355)^x356));

    if (t82 != 1837802806938LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x358 = 2U;
	uint8_t x359 = 4U;
	int16_t x360 = -1;
	uint32_t t83 = 2822U;

    t83 = (x357/((x358==x359)^x360));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x361 = 10U;
	volatile uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t84 = 102080833U;

    t84 = (x361/((x362==x363)^x364));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -1;
	volatile uint64_t x366 = 41537LLU;
	int64_t x368 = INT64_MIN;
	int64_t t85 = -234301670039237LL;

    t85 = (x365/((x366==x367)^x368));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x369 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t86 = -114345715;

    t86 = (x369/((x370==x371)^x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = INT32_MAX;
	int16_t x374 = -10315;
	int8_t x375 = -1;
	int64_t x376 = 30LL;
	int64_t t87 = 685511965522949LL;

    t87 = (x373/((x374==x375)^x376));

    if (t87 != 71582788LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x378 = -1LL;
	int16_t x380 = INT16_MIN;
	int32_t t88 = 134210;

    t88 = (x377/((x378==x379)^x380));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x382 = INT64_MIN;
	uint8_t x383 = 5U;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t89 = 710;

    t89 = (x381/((x382==x383)^x384));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x385 = 1310760U;
	int64_t x387 = 1175564243530817924LL;
	volatile int8_t x388 = -1;
	static volatile uint32_t t90 = 4891137U;

    t90 = (x385/((x386==x387)^x388));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = INT8_MIN;
	volatile int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MAX;
	volatile int8_t x392 = INT8_MAX;
	int32_t t91 = -1;

    t91 = (x389/((x390==x391)^x392));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x393 = -1;
	uint32_t x395 = 56088106U;
	int8_t x396 = INT8_MIN;

    t92 = (x393/((x394==x395)^x396));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x398 = INT16_MIN;
	int8_t x399 = 1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t93 = 2886631193058521065LL;

    t93 = (x397/((x398==x399)^x400));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x402 = INT8_MAX;
	int16_t x404 = INT16_MIN;

    t94 = (x401/((x402==x403)^x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x407 = 33441U;
	int8_t x408 = INT8_MIN;
	volatile int64_t t95 = -10173840239417565LL;

    t95 = (x405/((x406==x407)^x408));

    if (t95 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x409 = 93441047U;
	int16_t x411 = -1;
	volatile int8_t x412 = INT8_MIN;
	volatile uint32_t t96 = 7229U;

    t96 = (x409/((x410==x411)^x412));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x413 = INT64_MAX;
	volatile int16_t x414 = -1;
	int32_t x415 = INT32_MIN;
	int32_t x416 = INT32_MAX;
	volatile int64_t t97 = 0LL;

    t97 = (x413/((x414==x415)^x416));

    if (t97 != 4294967298LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x417 = INT32_MIN;
	int32_t x418 = 4410;
	uint64_t x419 = 15761803896LLU;
	int64_t x420 = INT64_MIN;

    t98 = (x417/((x418==x419)^x420));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x421 = INT64_MIN;
	static uint8_t x422 = 29U;
	int64_t x423 = -3LL;
	volatile int64_t x424 = INT64_MIN;
	int64_t t99 = 283779017354692LL;

    t99 = (x421/((x422==x423)^x424));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x426 = 0U;
	int16_t x427 = INT16_MIN;

    t100 = (x425/((x426==x427)^x428));

    if (t100 != -5461) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x429 = INT32_MIN;
	uint8_t x430 = 0U;
	static int8_t x432 = INT8_MIN;
	volatile int32_t t101 = 417;

    t101 = (x429/((x430==x431)^x432));

    if (t101 != 16777216) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x433 = -14505;
	uint8_t x434 = UINT8_MAX;
	static int32_t x435 = INT32_MAX;
	int64_t t102 = -473230326836293511LL;

    t102 = (x433/((x434==x435)^x436));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x437 = INT16_MIN;
	int32_t x439 = -33;
	int64_t x440 = -1LL;
	static volatile int64_t t103 = 98417888237739LL;

    t103 = (x437/((x438==x439)^x440));

    if (t103 != 32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x441 = INT8_MIN;
	static uint16_t x443 = 15464U;
	int64_t x444 = -1LL;
	int64_t t104 = -7944945LL;

    t104 = (x441/((x442==x443)^x444));

    if (t104 != 128LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x445 = 28U;
	static uint8_t x446 = 7U;
	int32_t x447 = INT32_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t105 = -638784447938365LL;

    t105 = (x445/((x446==x447)^x448));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	uint8_t x450 = 1U;
	volatile int8_t x451 = 1;
	int16_t x452 = INT16_MAX;
	volatile int32_t t106 = 928;

    t106 = (x449/((x450==x451)^x452));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x453 = INT32_MIN;
	int8_t x454 = 6;
	uint16_t x455 = UINT16_MAX;
	static uint64_t x456 = 1665788121623LLU;
	volatile uint64_t t107 = 143271060616LLU;

    t107 = (x453/((x454==x455)^x456));

    if (t107 != 11073883LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x458 = INT64_MAX;
	volatile int8_t x459 = -1;

    t108 = (x457/((x458==x459)^x460));

    if (t108 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x462 = INT32_MIN;
	int16_t x463 = 2;
	uint64_t x464 = 3645233699LLU;
	volatile uint64_t t109 = 26LLU;

    t109 = (x461/((x462==x463)^x464));

    if (t109 != 5060510682LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x468 = -424324367977503575LL;
	volatile int64_t t110 = -865527583194LL;

    t110 = (x465/((x466==x467)^x468));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x469 = INT8_MIN;
	static uint64_t x470 = 112289154511748223LLU;
	static uint8_t x471 = 57U;
	int32_t x472 = -1;
	int32_t t111 = 1;

    t111 = (x469/((x470==x471)^x472));

    if (t111 != 128) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x474 = -3899091792LL;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = -1;

    t112 = (x473/((x474==x475)^x476));

    if (t112 != -65535) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x477 = INT32_MIN;
	int32_t x478 = INT32_MAX;
	volatile uint64_t x479 = 107104770514464LLU;
	int16_t x480 = -1658;
	static volatile int32_t t113 = -1462271;

    t113 = (x477/((x478==x479)^x480));

    if (t113 != 1295225) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x481 = 13683U;
	static int32_t x482 = -1;
	volatile int8_t x483 = INT8_MIN;
	uint64_t x484 = 13583118941LLU;
	static volatile uint64_t t114 = 330131825136605124LLU;

    t114 = (x481/((x482==x483)^x484));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile uint64_t x486 = 149435491185LLU;
	int8_t x487 = INT8_MIN;
	volatile uint64_t x488 = 36489224990697775LLU;
	volatile uint64_t t115 = 11990222LLU;

    t115 = (x485/((x486==x487)^x488));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x489 = INT16_MAX;
	int8_t x490 = 31;
	int16_t x492 = INT16_MIN;
	volatile int32_t t116 = 892;

    t116 = (x489/((x490==x491)^x492));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x495 = INT8_MIN;

    t117 = (x493/((x494==x495)^x496));

    if (t117 != -8421504) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x497 = -1008207994;
	static uint16_t x498 = 10U;
	int32_t x500 = -7;

    t118 = (x497/((x498==x499)^x500));

    if (t118 != 144029713) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	uint16_t x502 = UINT16_MAX;
	volatile int32_t x503 = INT32_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t119 = 2492573;

    t119 = (x501/((x502==x503)^x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x507 = INT16_MIN;
	static int8_t x508 = 4;
	volatile int32_t t120 = -1004279;

    t120 = (x505/((x506==x507)^x508));

    if (t120 != -536870912) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x509 = 12474U;
	int64_t x510 = 6LL;
	int64_t x511 = -1LL;
	uint8_t x512 = 15U;
	volatile int32_t t121 = 17234;

    t121 = (x509/((x510==x511)^x512));

    if (t121 != 831) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = -488;
	int64_t t122 = 3958LL;

    t122 = (x513/((x514==x515)^x516));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x517 = UINT8_MAX;
	int32_t x519 = -116;
	int64_t x520 = INT64_MAX;
	int64_t t123 = -4149648LL;

    t123 = (x517/((x518==x519)^x520));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x525 = INT32_MIN;
	volatile int16_t x527 = -1554;

    t124 = (x525/((x526==x527)^x528));

    if (t124 != 2147483648LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x529 = 151888609559LLU;
	uint32_t x530 = 3754206U;
	volatile int32_t x531 = INT32_MAX;
	static volatile int8_t x532 = -1;

    t125 = (x529/((x530==x531)^x532));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = -1;
	int8_t x534 = INT8_MAX;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 1673332260302847124LLU;
	static uint64_t t126 = 321LLU;

    t126 = (x533/((x534==x535)^x536));

    if (t126 != 11LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x537 = INT8_MIN;
	volatile int16_t x538 = INT16_MIN;
	static int16_t x539 = INT16_MAX;
	int32_t t127 = -12269;

    t127 = (x537/((x538==x539)^x540));

    if (t127 != -10) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = -5796448;
	volatile int32_t x543 = -1;
	static int8_t x544 = INT8_MAX;
	static volatile int32_t t128 = 0;

    t128 = (x541/((x542==x543)^x544));

    if (t128 != -45641) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x546 = 16;
	int64_t x547 = INT64_MIN;
	volatile int64_t t129 = 570594839685043LL;

    t129 = (x545/((x546==x547)^x548));

    if (t129 != -419244183493398900LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x552 = 148132U;
	uint32_t t130 = 1809562U;

    t130 = (x549/((x550==x551)^x552));

    if (t130 != 28993U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x553 = INT32_MIN;
	volatile int32_t x554 = 1;
	int32_t x556 = INT32_MIN;
	int32_t t131 = -66295;

    t131 = (x553/((x554==x555)^x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x557 = -1;
	uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MAX;
	int64_t t132 = -21LL;

    t132 = (x557/((x558==x559)^x560));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x561 = -1LL;
	int16_t x562 = 3681;
	uint8_t x563 = UINT8_MAX;
	int64_t x564 = INT64_MIN;
	int64_t t133 = 971871687LL;

    t133 = (x561/((x562==x563)^x564));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x565 = 42;
	int8_t x566 = -1;
	volatile int64_t x567 = 38125312379415010LL;
	static uint32_t x568 = 4155U;
	uint32_t t134 = 558373480U;

    t134 = (x565/((x566==x567)^x568));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x569 = UINT8_MAX;
	int32_t x570 = INT32_MIN;
	uint8_t x571 = UINT8_MAX;
	volatile uint32_t x572 = 3661434U;

    t135 = (x569/((x570==x571)^x572));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x573 = 49723395LL;
	uint16_t x575 = UINT16_MAX;

    t136 = (x573/((x574==x575)^x576));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x580 = -210832696LL;
	static int64_t t137 = -43739LL;

    t137 = (x577/((x578==x579)^x580));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = INT16_MIN;
	int32_t x582 = 0;
	uint32_t x583 = 5049U;
	int64_t x584 = 502LL;
	int64_t t138 = 27771478641LL;

    t138 = (x581/((x582==x583)^x584));

    if (t138 != -65LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x585 = INT32_MIN;
	int16_t x586 = -2397;
	uint8_t x587 = 5U;

    t139 = (x585/((x586==x587)^x588));

    if (t139 != -39045157) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x589 = INT16_MAX;
	static int8_t x591 = INT8_MIN;
	static volatile int64_t x592 = 42657982439506LL;

    t140 = (x589/((x590==x591)^x592));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x593 = UINT32_MAX;
	int16_t x594 = INT16_MIN;
	int32_t x595 = 342287724;
	static volatile uint32_t t141 = 649U;

    t141 = (x593/((x594==x595)^x596));

    if (t141 != 4U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x598 = -1;
	volatile int64_t x599 = INT64_MAX;
	int8_t x600 = INT8_MIN;
	static volatile int32_t t142 = -267062717;

    t142 = (x597/((x598==x599)^x600));

    if (t142 != 256) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x601 = 1U;
	int16_t x602 = INT16_MIN;
	uint8_t x603 = UINT8_MAX;
	volatile uint8_t x604 = UINT8_MAX;
	int32_t t143 = 61690;

    t143 = (x601/((x602==x603)^x604));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = -1LL;
	static uint8_t x606 = UINT8_MAX;
	static int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MIN;
	static volatile int64_t t144 = -10292267415831LL;

    t144 = (x605/((x606==x607)^x608));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x611 = -2;
	int32_t x612 = INT32_MIN;
	volatile int64_t t145 = -1625359310635LL;

    t145 = (x609/((x610==x611)^x612));

    if (t145 != 4294967296LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x613 = 3U;
	uint8_t x614 = 2U;
	volatile uint16_t x615 = 1420U;

    t146 = (x613/((x614==x615)^x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x618 = -402;
	int8_t x619 = 1;
	uint16_t x620 = 22054U;
	int32_t t147 = -388;

    t147 = (x617/((x618==x619)^x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x623 = 62767372LL;
	int8_t x624 = -2;
	uint64_t t148 = 70201779584365LLU;

    t148 = (x621/((x622==x623)^x624));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MIN;
	static int8_t x627 = INT8_MIN;
	static uint8_t x628 = 50U;
	uint32_t t149 = 7U;

    t149 = (x625/((x626==x627)^x628));

    if (t149 != 85899345U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x629 = INT32_MIN;
	volatile int8_t x630 = INT8_MIN;
	uint8_t x631 = 7U;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t150 = 187;

    t150 = (x629/((x630==x631)^x632));

    if (t150 != 65536) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x634 = INT16_MIN;
	static int16_t x635 = -12;
	volatile int16_t x636 = INT16_MAX;

    t151 = (x633/((x634==x635)^x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x637 = UINT8_MAX;
	int16_t x639 = -1;
	volatile uint32_t x640 = 23U;
	volatile uint32_t t152 = 3U;

    t152 = (x637/((x638==x639)^x640));

    if (t152 != 11U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x643 = INT8_MAX;
	int64_t x644 = -1LL;
	static volatile int64_t t153 = -1747886715493360763LL;

    t153 = (x641/((x642==x643)^x644));

    if (t153 != -65535LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x645 = 24537978LL;
	int8_t x647 = -1;
	int16_t x648 = -9;
	static volatile int64_t t154 = -1041127908LL;

    t154 = (x645/((x646==x647)^x648));

    if (t154 != -2726442LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x649 = 0;
	uint64_t x651 = 16937LLU;

    t155 = (x649/((x650==x651)^x652));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x653 = 8823158644016610LLU;
	volatile int8_t x654 = -1;
	static uint8_t x655 = 0U;
	uint8_t x656 = UINT8_MAX;
	uint64_t t156 = 4LLU;

    t156 = (x653/((x654==x655)^x656));

    if (t156 != 34600622133398LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x657 = INT32_MIN;
	uint64_t x658 = 1LLU;
	int64_t x659 = 31LL;
	uint8_t x660 = 4U;
	int32_t t157 = 4067;

    t157 = (x657/((x658==x659)^x660));

    if (t157 != -536870912) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x662 = INT16_MIN;
	static int16_t x663 = INT16_MIN;
	uint16_t x664 = 3642U;
	volatile int32_t t158 = -64606748;

    t158 = (x661/((x662==x663)^x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x665 = -1;
	uint32_t x666 = 18377773U;
	uint64_t x667 = UINT64_MAX;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t159 = 15266835;

    t159 = (x665/((x666==x667)^x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x670 = -1;
	uint16_t x671 = 224U;
	uint16_t x672 = 855U;
	volatile int64_t t160 = -10175748391LL;

    t160 = (x669/((x670==x671)^x672));

    if (t160 != -10787569633748275LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = -1;
	int8_t x674 = -1;
	int64_t x675 = INT64_MIN;
	volatile uint64_t x676 = UINT64_MAX;
	volatile uint64_t t161 = 120590LLU;

    t161 = (x673/((x674==x675)^x676));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x677 = 582161194149LL;
	int32_t x680 = INT32_MAX;
	static volatile int64_t t162 = 2811907424248689LL;

    t162 = (x677/((x678==x679)^x680));

    if (t162 != 271LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x681 = 319614962U;
	int32_t x682 = 3525;
	uint16_t x683 = 3317U;
	int32_t x684 = -1;
	uint32_t t163 = 3319553U;

    t163 = (x681/((x682==x683)^x684));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x685 = UINT16_MAX;
	static int8_t x686 = INT8_MIN;
	int16_t x687 = -1;
	uint8_t x688 = 19U;
	volatile int32_t t164 = -28391467;

    t164 = (x685/((x686==x687)^x688));

    if (t164 != 3449) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x690 = 5U;
	static volatile int32_t x691 = -111;
	volatile int16_t x692 = INT16_MIN;

    t165 = (x689/((x690==x691)^x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x693 = UINT32_MAX;
	uint32_t x694 = UINT32_MAX;
	static int64_t x695 = INT64_MIN;
	uint64_t t166 = 23794353LLU;

    t166 = (x693/((x694==x695)^x696));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x697 = INT64_MAX;
	uint64_t x700 = 56608144LLU;

    t167 = (x697/((x698==x699)^x700));

    if (t167 != 162933659101LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = 1;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t168 = -4725885;

    t168 = (x701/((x702==x703)^x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x705 = 1;
	uint64_t x706 = UINT64_MAX;
	uint64_t x707 = UINT64_MAX;
	static uint32_t x708 = 6U;
	uint32_t t169 = 109275952U;

    t169 = (x705/((x706==x707)^x708));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x710 = -118;
	uint16_t x711 = UINT16_MAX;
	static int32_t t170 = 6475111;

    t170 = (x709/((x710==x711)^x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x714 = INT64_MAX;
	volatile int64_t t171 = -260940826LL;

    t171 = (x713/((x714==x715)^x716));

    if (t171 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = UINT32_MAX;
	volatile int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	uint32_t t172 = 98836015U;

    t172 = (x717/((x718==x719)^x720));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x721 = -1;
	int32_t x722 = 30545689;
	volatile int8_t x723 = INT8_MIN;
	static volatile int32_t t173 = -377336;

    t173 = (x721/((x722==x723)^x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int8_t x726 = -1;
	int16_t x727 = 1;
	static int32_t x728 = INT32_MAX;

    t174 = (x725/((x726==x727)^x728));

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 12U;
	volatile int64_t x730 = INT64_MIN;
	int8_t x732 = -1;
	int32_t t175 = 4248255;

    t175 = (x729/((x730==x731)^x732));

    if (t175 != -12) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x733 = 46;
	static int64_t x734 = INT64_MIN;
	int8_t x736 = INT8_MIN;

    t176 = (x733/((x734==x735)^x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x741 = INT64_MIN;
	uint8_t x742 = UINT8_MAX;
	int64_t x743 = INT64_MIN;
	static int64_t x744 = INT64_MIN;
	volatile int64_t t177 = 1901346LL;

    t177 = (x741/((x742==x743)^x744));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x745 = 5;
	int8_t x746 = -5;
	uint64_t x747 = UINT64_MAX;
	volatile int32_t x748 = INT32_MAX;
	static int32_t t178 = -3;

    t178 = (x745/((x746==x747)^x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x751 = 60LL;
	uint32_t x752 = UINT32_MAX;
	volatile uint32_t t179 = 7U;

    t179 = (x749/((x750==x751)^x752));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x754 = -16239019052901LL;
	volatile int8_t x755 = INT8_MAX;
	int32_t x756 = 11534446;

    t180 = (x753/((x754==x755)^x756));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x758 = INT8_MIN;
	int8_t x759 = -1;
	int16_t x760 = -1;
	volatile int32_t t181 = 98928013;

    t181 = (x757/((x758==x759)^x760));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = 6227901U;
	static int8_t x762 = 1;
	uint64_t x763 = 2488493908LLU;
	static volatile uint8_t x764 = 1U;
	volatile uint32_t t182 = 114829U;

    t182 = (x761/((x762==x763)^x764));

    if (t182 != 6227901U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x765 = -1;
	uint64_t x766 = 281676LLU;
	int16_t x767 = 3;
	static int16_t x768 = INT16_MIN;
	static volatile int32_t t183 = 13;

    t183 = (x765/((x766==x767)^x768));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x769 = 3U;
	static uint16_t x770 = 0U;
	uint64_t x771 = UINT64_MAX;
	static volatile int32_t t184 = 7942659;

    t184 = (x769/((x770==x771)^x772));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x773 = 12919326;
	static int16_t x774 = INT16_MIN;
	static int64_t x775 = -42598LL;
	volatile int64_t x776 = -5LL;
	volatile int64_t t185 = -3139386383038839LL;

    t185 = (x773/((x774==x775)^x776));

    if (t185 != -2583865LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x777 = -25;
	uint16_t x778 = UINT16_MAX;
	volatile int32_t x779 = 10297529;
	static int16_t x780 = -1;
	static int32_t t186 = 63386476;

    t186 = (x777/((x778==x779)^x780));

    if (t186 != 25) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x781 = 1U;
	volatile uint32_t x782 = 1220659829U;
	static int16_t x783 = 483;
	int32_t t187 = -1;

    t187 = (x781/((x782==x783)^x784));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x786 = -972;
	volatile int32_t x787 = INT32_MIN;
	int8_t x788 = INT8_MIN;
	int32_t t188 = -182;

    t188 = (x785/((x786==x787)^x788));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x789 = INT64_MIN;
	int32_t x790 = INT32_MAX;
	int64_t x791 = INT64_MIN;
	int16_t x792 = -3502;
	int64_t t189 = 100544287LL;

    t189 = (x789/((x790==x791)^x792));

    if (t189 != 2633744156726092LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x793 = INT32_MIN;
	static int64_t x795 = INT64_MAX;
	int8_t x796 = 2;
	int32_t t190 = 498;

    t190 = (x793/((x794==x795)^x796));

    if (t190 != -1073741824) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x799 = INT64_MIN;
	volatile uint64_t x800 = 19241359LLU;
	uint64_t t191 = 214871116LLU;

    t191 = (x797/((x798==x799)^x800));

    if (t191 != 958702764898LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x801 = UINT32_MAX;
	int16_t x802 = 467;
	uint8_t x803 = 9U;
	int8_t x804 = INT8_MIN;
	uint32_t t192 = 19U;

    t192 = (x801/((x802==x803)^x804));

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x806 = 77442456U;
	int16_t x807 = INT16_MAX;
	volatile int64_t t193 = 474948875595968149LL;

    t193 = (x805/((x806==x807)^x808));

    if (t193 != 32768LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x810 = -1;
	static uint16_t x811 = 15U;
	int32_t t194 = 2818161;

    t194 = (x809/((x810==x811)^x812));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x813 = INT8_MAX;
	int8_t x814 = -1;
	volatile uint64_t x815 = 197276567LLU;
	uint64_t t195 = 697462226LLU;

    t195 = (x813/((x814==x815)^x816));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x818 = INT16_MIN;
	static uint8_t x819 = UINT8_MAX;
	uint64_t x820 = 6138LLU;

    t196 = (x817/((x818==x819)^x820));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x821 = INT64_MIN;
	int64_t x822 = -1LL;
	static volatile int32_t x823 = INT32_MIN;
	uint64_t x824 = 6664183681705156157LLU;
	uint64_t t197 = 7064342295LLU;

    t197 = (x821/((x822==x823)^x824));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x825 = -1;
	uint8_t x826 = UINT8_MAX;
	uint16_t x827 = 53U;
	uint32_t x828 = UINT32_MAX;
	uint32_t t198 = 1U;

    t198 = (x825/((x826==x827)^x828));

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x829 = 208U;
	uint64_t x830 = 34459258401917225LLU;
	static int64_t x831 = 113137178LL;

    t199 = (x829/((x830==x831)^x832));

    if (t199 != 0U) { NG(); } else { ; }
	
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

