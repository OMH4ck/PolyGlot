
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

volatile int16_t x2 = -1;
volatile int64_t x5 = INT64_MIN;
volatile int32_t x7 = INT32_MIN;
int16_t x8 = INT16_MIN;
volatile int32_t t1 = 20930;
int32_t x14 = 564812471;
volatile int32_t t5 = 609272419;
int16_t x25 = INT16_MAX;
uint32_t x26 = 522946U;
int16_t x27 = INT16_MIN;
int32_t t6 = -17778;
int64_t x34 = INT64_MIN;
int64_t x47 = INT64_MAX;
volatile int32_t x50 = INT32_MAX;
int16_t x58 = 22;
int64_t x63 = INT64_MIN;
volatile int32_t t16 = -39;
int32_t x74 = -1;
int32_t t18 = 48;
volatile uint32_t x78 = 113930U;
static int16_t x79 = INT16_MIN;
int32_t x80 = INT32_MIN;
int16_t x81 = INT16_MIN;
uint16_t x87 = 115U;
int32_t t23 = 29;
int64_t x100 = INT64_MIN;
volatile int8_t x108 = -1;
uint8_t x110 = 3U;
int32_t x111 = 0;
volatile int64_t x112 = 27268226LL;
volatile int32_t t27 = 398707;
volatile int32_t t28 = 25234825;
static volatile int32_t t30 = 101185;
volatile int32_t x147 = -1;
uint32_t x148 = 57401467U;
int64_t x150 = INT64_MIN;
uint32_t x155 = 99U;
static volatile int32_t t39 = 42527;
int32_t t42 = -24;
int64_t x173 = INT64_MIN;
static int16_t x174 = INT16_MIN;
uint8_t x177 = 103U;
volatile int64_t x178 = -1LL;
uint32_t x184 = 64U;
static int16_t x186 = INT16_MIN;
volatile int32_t t47 = -1073;
volatile int32_t t49 = 66838543;
int8_t x205 = 7;
uint16_t x208 = 4073U;
uint8_t x221 = 5U;
static uint64_t x224 = UINT64_MAX;
volatile int32_t t55 = 6;
uint64_t x225 = 335346561459354814LLU;
int64_t x227 = INT64_MIN;
static volatile uint16_t x230 = 10U;
static int64_t x231 = INT64_MIN;
int8_t x241 = INT8_MAX;
volatile uint64_t x243 = UINT64_MAX;
int16_t x247 = INT16_MAX;
int64_t x254 = 54638LL;
volatile uint8_t x260 = 19U;
int32_t t66 = -388;
uint32_t x272 = UINT32_MAX;
static int16_t x273 = -1;
int16_t x278 = INT16_MIN;
int32_t x286 = INT32_MIN;
static volatile int32_t t71 = -2239514;
uint32_t x299 = 509U;
volatile int16_t x302 = INT16_MIN;
int8_t x306 = INT8_MIN;
int16_t x316 = INT16_MIN;
uint16_t x319 = UINT16_MAX;
static int8_t x329 = INT8_MAX;
int64_t x332 = INT64_MIN;
static uint8_t x337 = 11U;
static int64_t x339 = 1LL;
int32_t x342 = -6;
uint32_t x355 = 238U;
static int64_t x359 = -1LL;
volatile int64_t x367 = INT64_MIN;
int32_t x373 = INT32_MAX;
volatile uint8_t x374 = 3U;
volatile int32_t t93 = -365236887;
int32_t x383 = -5280;
volatile uint8_t x387 = 1U;
static int64_t x399 = INT64_MIN;
int8_t x401 = 0;
int8_t x406 = -1;
volatile int32_t t102 = 1677;
uint16_t x414 = 446U;
int8_t x423 = INT8_MIN;
int32_t x425 = INT32_MIN;
int64_t x435 = -2456561237567LL;
uint8_t x440 = 26U;
int16_t x446 = INT16_MIN;
int64_t x454 = -1LL;
int8_t x455 = -1;
static volatile int32_t t114 = -19716422;
static uint8_t x466 = UINT8_MAX;
static volatile int32_t x468 = INT32_MIN;
static int16_t x472 = -1;
uint8_t x477 = 1U;
int8_t x478 = INT8_MAX;
int16_t x483 = -7;
volatile int32_t x490 = 360;
int16_t x494 = INT16_MIN;
int8_t x497 = 34;
static volatile uint32_t x499 = UINT32_MAX;
uint64_t x506 = UINT64_MAX;
static volatile int32_t t128 = 784;
static int64_t x517 = INT64_MIN;
volatile int16_t x523 = INT16_MIN;
uint64_t x524 = 4197260113495LLU;
int32_t t130 = 3613;
int32_t x526 = INT32_MIN;
volatile uint32_t x529 = UINT32_MAX;
int64_t x534 = INT64_MIN;
uint8_t x538 = 0U;
volatile uint32_t x540 = 22U;
static int32_t t136 = 17;
static int16_t x551 = INT16_MAX;
int64_t x552 = INT64_MIN;
volatile int32_t t138 = -197115009;
uint32_t x560 = 339628U;
int32_t t139 = -50;
int16_t x561 = -1;
int32_t t140 = -2;
uint64_t x568 = 3454096003LLU;
volatile int8_t x580 = INT8_MIN;
int8_t x584 = INT8_MIN;
volatile int32_t t145 = -347;
int32_t x586 = 29581472;
static volatile int8_t x590 = -5;
volatile int32_t t147 = -16312928;
int64_t x596 = INT64_MIN;
volatile uint64_t x601 = 4421589988357884LLU;
int8_t x603 = INT8_MIN;
volatile int32_t t150 = -14278;
int8_t x605 = -1;
uint16_t x607 = 2U;
int16_t x609 = -92;
static uint8_t x611 = 3U;
int16_t x614 = INT16_MAX;
volatile int64_t x615 = INT64_MIN;
volatile uint32_t x619 = 626U;
static int8_t x620 = -1;
static uint8_t x622 = 1U;
int16_t x624 = -1;
int16_t x625 = INT16_MIN;
int64_t x637 = -1LL;
int16_t x638 = INT16_MIN;
uint64_t x639 = 698046789LLU;
int8_t x643 = -1;
uint64_t x645 = 224939LLU;
static volatile int32_t t167 = 50;
static volatile int64_t x674 = -1LL;
volatile int32_t t168 = 11674819;
static uint16_t x680 = UINT16_MAX;
int16_t x681 = INT16_MAX;
static int32_t x683 = INT32_MAX;
volatile int32_t x700 = -463103111;
static uint8_t x702 = 46U;
int16_t x703 = INT16_MIN;
uint8_t x704 = 0U;
int8_t x706 = INT8_MIN;
volatile int8_t x716 = INT8_MIN;
int32_t t178 = 0;
int32_t x717 = INT32_MIN;
volatile int64_t x720 = INT64_MIN;
int32_t x723 = -49672975;
int32_t x724 = -6594;
int16_t x729 = INT16_MIN;
volatile int32_t t182 = 3184;
static volatile int32_t t183 = 936706153;
int32_t x738 = INT32_MIN;
int16_t x742 = -1;
volatile int32_t x745 = INT32_MAX;
int64_t x752 = -133833564781LL;
static uint16_t x759 = 1015U;
int32_t x760 = INT32_MIN;
volatile int32_t t190 = -82257312;
int64_t x770 = INT64_MAX;
static volatile int16_t x780 = INT16_MAX;
int16_t x781 = -1;
static int32_t x788 = 1843491;
int16_t x790 = 16;
static int8_t x796 = 0;
uint16_t x798 = 19U;
volatile uint16_t x800 = 1633U;


void f0(void) {
    	uint16_t x1 = 7U;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -14;
	int32_t t0 = 112;

    t0 = (x1!=((x2>x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MAX;

    t1 = (x5!=((x6>x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 1;
	static uint16_t x10 = 7U;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = 0U;
	static int32_t t2 = 207020;

    t2 = (x9!=((x10>x11)*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 9U;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -45971;

    t3 = (x13!=((x14>x15)*x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = 253091833;
	volatile int32_t t4 = 1090915;

    t4 = (x17!=((x18>x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 7U;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = 114444533LLU;
	static int32_t x24 = -1;

    t5 = (x21!=((x22>x23)*x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x28 = INT64_MIN;

    t6 = (x25!=((x26>x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 4U;
	volatile int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -1;

    t7 = (x29!=((x30>x31)*x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x35 = -88;
	static volatile uint64_t x36 = 8220127889134708404LLU;
	volatile int32_t t8 = 2;

    t8 = (x33!=((x34>x35)*x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = 5U;
	uint16_t x38 = UINT16_MAX;
	static uint32_t x39 = 2U;
	int8_t x40 = INT8_MAX;
	static int32_t t9 = 3547;

    t9 = (x37!=((x38>x39)*x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = -208605695133814349LL;
	static uint64_t x42 = 129014358LLU;
	int64_t x43 = -10917319405401LL;
	static uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -285179175;

    t10 = (x41!=((x42>x43)*x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 821U;
	int64_t x46 = INT64_MIN;
	int64_t x48 = -1LL;
	int32_t t11 = 1;

    t11 = (x45!=((x46>x47)*x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	int32_t x51 = INT32_MAX;
	volatile int8_t x52 = -1;
	volatile int32_t t12 = 661979;

    t12 = (x49!=((x50>x51)*x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static volatile uint32_t x56 = UINT32_MAX;
	static volatile int32_t t13 = 6670027;

    t13 = (x53!=((x54>x55)*x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 137820874449LLU;
	int32_t t14 = 811775;

    t14 = (x57!=((x58>x59)*x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	static volatile uint32_t x64 = 11179933U;
	static volatile int32_t t15 = 230488;

    t15 = (x61!=((x62>x63)*x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MAX;
	volatile uint16_t x66 = 0U;
	volatile uint64_t x67 = 1047271454LLU;
	int8_t x68 = INT8_MIN;

    t16 = (x65!=((x66>x67)*x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MIN;
	uint16_t x70 = 86U;
	int8_t x71 = INT8_MIN;
	volatile int16_t x72 = 1;
	int32_t t17 = -53;

    t17 = (x69!=((x70>x71)*x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	volatile int32_t x75 = INT32_MIN;
	uint32_t x76 = 655U;

    t18 = (x73!=((x74>x75)*x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 251373261LLU;
	volatile int32_t t19 = 364362882;

    t19 = (x77!=((x78>x79)*x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = -32;
	uint32_t x83 = 885U;
	static volatile int64_t x84 = -154LL;
	volatile int32_t t20 = 184694;

    t20 = (x81!=((x82>x83)*x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = UINT16_MAX;
	static uint32_t x86 = 871098U;
	int8_t x88 = -51;
	int32_t t21 = -1;

    t21 = (x85!=((x86>x87)*x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 0U;
	int32_t x90 = INT32_MIN;
	int64_t x91 = 582937116122LL;
	volatile int64_t x92 = INT64_MIN;
	int32_t t22 = 8;

    t22 = (x89!=((x90>x91)*x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 5490834U;
	static volatile uint16_t x94 = 0U;
	int32_t x95 = -48196;
	static int64_t x96 = -1LL;

    t23 = (x93!=((x94>x95)*x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int8_t x98 = -1;
	static uint8_t x99 = 41U;
	int32_t t24 = 12687;

    t24 = (x97!=((x98>x99)*x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -348;

    t25 = (x101!=((x102>x103)*x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -646;
	static int8_t x106 = INT8_MAX;
	static int32_t x107 = INT32_MIN;
	int32_t t26 = -1937;

    t26 = (x105!=((x106>x107)*x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;

    t27 = (x109!=((x110>x111)*x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 29256U;
	int8_t x114 = 15;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = 5716740U;

    t28 = (x113!=((x114>x115)*x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -5763023428LL;
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = INT32_MIN;
	int32_t t29 = 30;

    t29 = (x117!=((x118>x119)*x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 371600864445LLU;
	static int64_t x122 = -37621860192023959LL;
	static uint16_t x123 = 1411U;
	int64_t x124 = INT64_MIN;

    t30 = (x121!=((x122>x123)*x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 1922;
	static volatile int32_t x126 = INT32_MIN;
	uint64_t x127 = 706032LLU;
	int64_t x128 = INT64_MAX;
	int32_t t31 = 317667;

    t31 = (x125!=((x126>x127)*x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 107U;
	static volatile int64_t x130 = INT64_MAX;
	volatile int16_t x131 = -1;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = 251555497;

    t32 = (x129!=((x130>x131)*x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = -1;
	int32_t x134 = -1;
	int64_t x135 = 957002LL;
	static int32_t x136 = -1;
	static volatile int32_t t33 = -1895837;

    t33 = (x133!=((x134>x135)*x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = UINT64_MAX;
	volatile int64_t x138 = -69LL;
	static uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -351458006;

    t34 = (x137!=((x138>x139)*x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	static int64_t x142 = -1LL;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = 946;

    t35 = (x141!=((x142>x143)*x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -23;
	static uint8_t x146 = UINT8_MAX;
	int32_t t36 = -564;

    t36 = (x145!=((x146>x147)*x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = -27413809;

    t37 = (x149!=((x150>x151)*x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	uint32_t x154 = 118U;
	uint8_t x156 = 0U;
	int32_t t38 = -1040586374;

    t38 = (x153!=((x154>x155)*x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 0U;
	int32_t x158 = INT32_MAX;
	int16_t x159 = -1;
	uint32_t x160 = UINT32_MAX;

    t39 = (x157!=((x158>x159)*x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 5U;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 6360153440LLU;
	volatile int32_t t40 = -3812072;

    t40 = (x161!=((x162>x163)*x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MIN;
	volatile int8_t x167 = INT8_MAX;
	static int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 470291784;

    t41 = (x165!=((x166>x167)*x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x169 = INT32_MIN;
	uint8_t x170 = 1U;
	int16_t x171 = -3560;
	int64_t x172 = INT64_MIN;

    t42 = (x169!=((x170>x171)*x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x175 = -4;
	volatile int16_t x176 = -143;
	int32_t t43 = -7576;

    t43 = (x173!=((x174>x175)*x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x179 = INT8_MIN;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -3895;

    t44 = (x177!=((x178>x179)*x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	int64_t x182 = -4183530272LL;
	uint64_t x183 = 111081623LLU;
	volatile int32_t t45 = 0;

    t45 = (x181!=((x182>x183)*x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -5933675759116LL;
	volatile int32_t x187 = -1;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = -20607076;

    t46 = (x185!=((x186>x187)*x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MIN;
	int8_t x190 = 1;
	static int64_t x191 = INT64_MIN;
	uint64_t x192 = UINT64_MAX;

    t47 = (x189!=((x190>x191)*x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile int8_t x194 = 1;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 438;

    t48 = (x193!=((x194>x195)*x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MAX;
	int16_t x198 = 9;
	static volatile int32_t x199 = -206;
	uint64_t x200 = 1739991LLU;

    t49 = (x197!=((x198>x199)*x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 1719551566U;
	int64_t x202 = -1LL;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = UINT64_MAX;
	static int32_t t50 = 97378277;

    t50 = (x201!=((x202>x203)*x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = INT64_MIN;
	static int16_t x207 = -1;
	static volatile int32_t t51 = 0;

    t51 = (x205!=((x206>x207)*x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MAX;
	uint16_t x210 = 290U;
	int32_t x211 = 599523;
	static int16_t x212 = -29;
	int32_t t52 = -1974244;

    t52 = (x209!=((x210>x211)*x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = UINT32_MAX;
	uint16_t x214 = 7U;
	int32_t x215 = INT32_MIN;
	static volatile uint64_t x216 = 735LLU;
	int32_t t53 = 1;

    t53 = (x213!=((x214>x215)*x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	volatile int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -9876;

    t54 = (x217!=((x218>x219)*x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = 51162;
	volatile int64_t x223 = -1LL;

    t55 = (x221!=((x222>x223)*x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x226 = -1;
	static int32_t x228 = 84;
	int32_t t56 = 5034;

    t56 = (x225!=((x226>x227)*x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MIN;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t57 = -420;

    t57 = (x229!=((x230>x231)*x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = 6963;
	uint32_t x236 = 5U;
	volatile int32_t t58 = -47;

    t58 = (x233!=((x234>x235)*x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = 6LL;
	static int8_t x239 = 18;
	uint16_t x240 = 18679U;
	static volatile int32_t t59 = 0;

    t59 = (x237!=((x238>x239)*x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x242 = 30U;
	int16_t x244 = -6616;
	static int32_t t60 = 8918;

    t60 = (x241!=((x242>x243)*x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = 469;
	int16_t x246 = INT16_MIN;
	int16_t x248 = -1;
	int32_t t61 = 89;

    t61 = (x245!=((x246>x247)*x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	int8_t x250 = -32;
	uint8_t x251 = 12U;
	volatile uint16_t x252 = 3U;
	int32_t t62 = 7925;

    t62 = (x249!=((x250>x251)*x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 124586944703267543LLU;
	int8_t x255 = -1;
	uint32_t x256 = 3709U;
	volatile int32_t t63 = 1;

    t63 = (x253!=((x254>x255)*x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile int32_t x258 = -2;
	static int8_t x259 = -1;
	int32_t t64 = -12;

    t64 = (x257!=((x258>x259)*x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 1;
	int8_t x262 = INT8_MIN;
	static int64_t x263 = 195401975994LL;
	static int8_t x264 = -1;
	static int32_t t65 = 68583;

    t65 = (x261!=((x262>x263)*x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 7LLU;
	int32_t x266 = INT32_MIN;
	static volatile uint64_t x267 = 2048608722010LLU;
	uint32_t x268 = 579211391U;

    t66 = (x265!=((x266>x267)*x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 27922960U;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	volatile int32_t t67 = -21128316;

    t67 = (x269!=((x270>x271)*x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MAX;
	int16_t x276 = -1;
	static int32_t t68 = -133363;

    t68 = (x273!=((x274>x275)*x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 25132U;
	int16_t x279 = -7560;
	static volatile int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -30788172;

    t69 = (x277!=((x278>x279)*x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MIN;
	static volatile uint16_t x282 = UINT16_MAX;
	volatile int32_t x283 = INT32_MIN;
	static uint32_t x284 = 50586634U;
	volatile int32_t t70 = -816871;

    t70 = (x281!=((x282>x283)*x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 7;
	static uint64_t x287 = 1LLU;
	uint32_t x288 = UINT32_MAX;

    t71 = (x285!=((x286>x287)*x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -114889;
	static int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -3;
	static int32_t t72 = -1;

    t72 = (x289!=((x290>x291)*x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	int16_t x294 = -433;
	volatile uint64_t x295 = 185428675526258248LLU;
	static int16_t x296 = 58;
	volatile int32_t t73 = 178757;

    t73 = (x293!=((x294>x295)*x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 1U;
	volatile int32_t x298 = INT32_MAX;
	uint16_t x300 = 754U;
	volatile int32_t t74 = 553;

    t74 = (x297!=((x298>x299)*x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 2194233404223416654LLU;
	int32_t x303 = INT32_MIN;
	static uint32_t x304 = UINT32_MAX;
	static volatile int32_t t75 = 544;

    t75 = (x301!=((x302>x303)*x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 206U;
	uint16_t x307 = 507U;
	uint64_t x308 = 33933568848212055LLU;
	static int32_t t76 = -424080134;

    t76 = (x305!=((x306>x307)*x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	static volatile int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -2679;

    t77 = (x309!=((x310>x311)*x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x313 = 10;
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 14557333U;
	volatile int32_t t78 = 43531048;

    t78 = (x313!=((x314>x315)*x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MIN;
	int32_t x318 = -8009414;
	uint64_t x320 = 11LLU;
	int32_t t79 = 5504520;

    t79 = (x317!=((x318>x319)*x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = -1;
	static volatile int64_t x322 = -593315091338LL;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t80 = -1;

    t80 = (x321!=((x322>x323)*x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	uint16_t x326 = 1U;
	int64_t x327 = -14455921673827377LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 1;

    t81 = (x325!=((x326>x327)*x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = -1;
	int8_t x331 = INT8_MAX;
	volatile int32_t t82 = -2920;

    t82 = (x329!=((x330>x331)*x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 2814297093425966LL;
	int32_t x334 = -385;
	int32_t x335 = INT32_MIN;
	volatile uint16_t x336 = 43U;
	volatile int32_t t83 = 120188230;

    t83 = (x333!=((x334>x335)*x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x338 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 2925;

    t84 = (x337!=((x338>x339)*x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	int64_t x343 = 1174718504483LL;
	int64_t x344 = -4326983922803945116LL;
	volatile int32_t t85 = -130023757;

    t85 = (x341!=((x342>x343)*x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -2;
	uint16_t x346 = UINT16_MAX;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = -27591821;
	volatile int32_t t86 = -21572462;

    t86 = (x345!=((x346>x347)*x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 935204LLU;
	volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = 125U;
	volatile uint8_t x352 = 2U;
	static volatile int32_t t87 = 272;

    t87 = (x349!=((x350>x351)*x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = -1;
	static uint8_t x354 = UINT8_MAX;
	int64_t x356 = -1LL;
	static int32_t t88 = -150946;

    t88 = (x353!=((x354>x355)*x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 70LLU;
	volatile int16_t x358 = INT16_MAX;
	int64_t x360 = -1LL;
	int32_t t89 = 215147;

    t89 = (x357!=((x358>x359)*x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = 1;
	int32_t x364 = -61;
	volatile int32_t t90 = -4995332;

    t90 = (x361!=((x362>x363)*x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -184766LL;
	int16_t x366 = INT16_MIN;
	static volatile int64_t x368 = -1LL;
	volatile int32_t t91 = 40206724;

    t91 = (x365!=((x366>x367)*x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 990142U;
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t92 = 189548725;

    t92 = (x369!=((x370>x371)*x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x375 = -1;
	volatile int16_t x376 = 885;

    t93 = (x373!=((x374>x375)*x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	static int8_t x378 = INT8_MAX;
	uint32_t x379 = 4U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 17193;

    t94 = (x377!=((x378>x379)*x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MIN;
	uint32_t x382 = 3U;
	int32_t x384 = -21711;
	volatile int32_t t95 = -1296654;

    t95 = (x381!=((x382>x383)*x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -4665152;
	int8_t x386 = 7;
	uint16_t x388 = 80U;
	int32_t t96 = -1273274;

    t96 = (x385!=((x386>x387)*x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -368;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = -26;
	int8_t x392 = INT8_MIN;
	static int32_t t97 = 1;

    t97 = (x389!=((x390>x391)*x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 44630455484465505LL;
	int64_t x394 = -2089LL;
	volatile int32_t x395 = -1;
	static int16_t x396 = -1;
	volatile int32_t t98 = -3984;

    t98 = (x393!=((x394>x395)*x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	static uint16_t x398 = 1U;
	uint32_t x400 = 16401863U;
	static int32_t t99 = 374660797;

    t99 = (x397!=((x398>x399)*x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = INT16_MIN;
	uint64_t x403 = 11433108694893250LLU;
	uint8_t x404 = UINT8_MAX;
	int32_t t100 = -24;

    t100 = (x401!=((x402>x403)*x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = 24LL;
	int8_t x407 = 53;
	static uint16_t x408 = 5458U;
	volatile int32_t t101 = 2681936;

    t101 = (x405!=((x406>x407)*x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -1;
	int8_t x410 = INT8_MIN;
	static int16_t x411 = -1;
	static int64_t x412 = 5483LL;

    t102 = (x409!=((x410>x411)*x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	static volatile uint8_t x415 = 28U;
	static uint64_t x416 = 31992029333LLU;
	int32_t t103 = 297418;

    t103 = (x413!=((x414>x415)*x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int16_t x418 = -806;
	static uint16_t x419 = 0U;
	uint64_t x420 = UINT64_MAX;
	int32_t t104 = -35910315;

    t104 = (x417!=((x418>x419)*x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MIN;
	volatile int8_t x424 = 4;
	static volatile int32_t t105 = 2123;

    t105 = (x421!=((x422>x423)*x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = -1;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -461557648690949LL;
	int32_t t106 = 9;

    t106 = (x425!=((x426>x427)*x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	int32_t x430 = 1;
	int16_t x431 = INT16_MIN;
	static volatile uint32_t x432 = 92U;
	static volatile int32_t t107 = -325478945;

    t107 = (x429!=((x430>x431)*x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MIN;
	static volatile uint64_t x434 = 10084315LLU;
	static int8_t x436 = INT8_MAX;
	volatile int32_t t108 = 1;

    t108 = (x433!=((x434>x435)*x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 129377339;
	static int16_t x438 = -356;
	int16_t x439 = INT16_MIN;
	static volatile int32_t t109 = -2;

    t109 = (x437!=((x438>x439)*x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 39LLU;
	uint64_t x442 = UINT64_MAX;
	int32_t x443 = -1;
	uint32_t x444 = 0U;
	int32_t t110 = -2792683;

    t110 = (x441!=((x442>x443)*x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = INT64_MAX;
	uint64_t x447 = 6247043149607390LLU;
	uint32_t x448 = UINT32_MAX;
	static volatile int32_t t111 = -355556599;

    t111 = (x445!=((x446>x447)*x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MIN;
	static int64_t x451 = 20506044010LL;
	static volatile uint16_t x452 = 3U;
	int32_t t112 = -309520080;

    t112 = (x449!=((x450>x451)*x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MIN;
	int32_t x456 = 3;
	volatile int32_t t113 = -23405335;

    t113 = (x453!=((x454>x455)*x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	uint32_t x458 = 12U;
	static int32_t x459 = -87685;
	static volatile int64_t x460 = INT64_MIN;

    t114 = (x457!=((x458>x459)*x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	static int8_t x462 = INT8_MIN;
	uint64_t x463 = 1111422276185770LLU;
	volatile uint8_t x464 = 34U;
	static volatile int32_t t115 = 1;

    t115 = (x461!=((x462>x463)*x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	volatile uint16_t x467 = UINT16_MAX;
	int32_t t116 = -20;

    t116 = (x465!=((x466>x467)*x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	uint8_t x470 = 11U;
	volatile int8_t x471 = INT8_MAX;
	int32_t t117 = -38422;

    t117 = (x469!=((x470>x471)*x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3U;
	int32_t x474 = INT32_MAX;
	static int8_t x475 = -1;
	int8_t x476 = 3;
	volatile int32_t t118 = -14338170;

    t118 = (x473!=((x474>x475)*x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x479 = 9;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -15;

    t119 = (x477!=((x478>x479)*x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MIN;
	int64_t x482 = -1LL;
	int64_t x484 = INT64_MAX;
	static volatile int32_t t120 = -287;

    t120 = (x481!=((x482>x483)*x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MAX;
	int32_t x486 = -1;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	volatile int32_t t121 = 334189;

    t121 = (x485!=((x486>x487)*x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = 17;
	volatile uint32_t x491 = UINT32_MAX;
	static int64_t x492 = -48LL;
	volatile int32_t t122 = -10703263;

    t122 = (x489!=((x490>x491)*x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = UINT8_MAX;
	int32_t t123 = 19;

    t123 = (x493!=((x494>x495)*x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = 9U;
	volatile int32_t x500 = -1;
	int32_t t124 = -245882624;

    t124 = (x497!=((x498>x499)*x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = -1;
	volatile int8_t x503 = INT8_MIN;
	static int8_t x504 = INT8_MIN;
	int32_t t125 = 108603;

    t125 = (x501!=((x502>x503)*x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	volatile int8_t x507 = INT8_MAX;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = 46;

    t126 = (x505!=((x506>x507)*x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = 1021704275181LLU;
	uint16_t x510 = 31569U;
	uint16_t x511 = 23U;
	uint16_t x512 = 27U;
	volatile int32_t t127 = -77009;

    t127 = (x509!=((x510>x511)*x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile int64_t x514 = INT64_MAX;
	uint32_t x515 = 462039U;
	int64_t x516 = INT64_MAX;

    t128 = (x513!=((x514>x515)*x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = -1;
	volatile int64_t x519 = INT64_MAX;
	static int8_t x520 = INT8_MIN;
	volatile int32_t t129 = 429433843;

    t129 = (x517!=((x518>x519)*x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	int16_t x522 = INT16_MAX;

    t130 = (x521!=((x522>x523)*x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 163641359744296LL;
	int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MAX;
	int32_t t131 = -10420116;

    t131 = (x525!=((x526>x527)*x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = 111832880;
	uint64_t x531 = 31LLU;
	int32_t x532 = INT32_MAX;
	static int32_t t132 = -678762;

    t132 = (x529!=((x530>x531)*x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	volatile int16_t x535 = INT16_MIN;
	volatile uint64_t x536 = UINT64_MAX;
	static volatile int32_t t133 = -111;

    t133 = (x533!=((x534>x535)*x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MIN;
	int64_t x539 = INT64_MIN;
	int32_t t134 = -3880;

    t134 = (x537!=((x538>x539)*x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	volatile uint32_t x542 = 24870729U;
	int64_t x543 = -1LL;
	static volatile uint16_t x544 = 146U;
	volatile int32_t t135 = -26;

    t135 = (x541!=((x542>x543)*x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = UINT8_MAX;
	uint8_t x547 = 9U;
	volatile uint16_t x548 = 233U;

    t136 = (x545!=((x546>x547)*x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -39;
	static volatile int8_t x550 = INT8_MIN;
	volatile int32_t t137 = 3433150;

    t137 = (x549!=((x550>x551)*x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MIN;
	uint16_t x554 = UINT16_MAX;
	static volatile int32_t x555 = INT32_MAX;
	int64_t x556 = INT64_MAX;

    t138 = (x553!=((x554>x555)*x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int8_t x558 = -1;
	static int64_t x559 = INT64_MIN;

    t139 = (x557!=((x558>x559)*x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = UINT32_MAX;
	uint32_t x563 = 46U;
	int64_t x564 = 795535511400544LL;

    t140 = (x561!=((x562>x563)*x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x565 = INT64_MIN;
	static int16_t x566 = 0;
	static uint16_t x567 = 1694U;
	int32_t t141 = -12630;

    t141 = (x565!=((x566>x567)*x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MAX;
	static int64_t x570 = -1749474091400LL;
	static int64_t x571 = INT64_MAX;
	int16_t x572 = -1;
	static int32_t t142 = -916123994;

    t142 = (x569!=((x570>x571)*x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x573 = UINT32_MAX;
	uint64_t x574 = UINT64_MAX;
	static int32_t x575 = 158346;
	static int16_t x576 = -1;
	int32_t t143 = -7;

    t143 = (x573!=((x574>x575)*x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MIN;
	volatile uint16_t x579 = 31U;
	int32_t t144 = 14561;

    t144 = (x577!=((x578>x579)*x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 14U;
	static int64_t x582 = -1LL;
	uint64_t x583 = 23493343415388LLU;

    t145 = (x581!=((x582>x583)*x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 63;
	int32_t x587 = INT32_MAX;
	int16_t x588 = INT16_MIN;
	volatile int32_t t146 = -6044;

    t146 = (x585!=((x586>x587)*x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = 6;
	int16_t x591 = INT16_MAX;
	static volatile int16_t x592 = 9;

    t147 = (x589!=((x590>x591)*x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 1003719U;
	uint8_t x594 = UINT8_MAX;
	static int16_t x595 = INT16_MAX;
	volatile int32_t t148 = -1419682;

    t148 = (x593!=((x594>x595)*x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = -17;
	volatile int16_t x598 = 1;
	int64_t x599 = INT64_MIN;
	volatile uint64_t x600 = 46001118247LLU;
	int32_t t149 = 337608;

    t149 = (x597!=((x598>x599)*x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = 8;
	volatile int8_t x604 = -1;

    t150 = (x601!=((x602>x603)*x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x606 = 28748768492464LLU;
	static volatile uint32_t x608 = UINT32_MAX;
	int32_t t151 = -1806;

    t151 = (x605!=((x606>x607)*x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x610 = INT32_MAX;
	int32_t x612 = -1;
	volatile int32_t t152 = -3369282;

    t152 = (x609!=((x610>x611)*x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = 0;
	volatile int16_t x616 = INT16_MIN;
	int32_t t153 = -2016;

    t153 = (x613!=((x614>x615)*x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x618 = INT32_MAX;
	int32_t t154 = -25402;

    t154 = (x617!=((x618>x619)*x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 712430432LLU;
	int8_t x623 = -1;
	volatile int32_t t155 = 113108674;

    t155 = (x621!=((x622>x623)*x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MIN;
	static volatile int8_t x627 = INT8_MIN;
	uint32_t x628 = UINT32_MAX;
	volatile int32_t t156 = -481836249;

    t156 = (x625!=((x626>x627)*x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = UINT32_MAX;
	static uint8_t x630 = 121U;
	int64_t x631 = -1LL;
	int32_t x632 = -1;
	int32_t t157 = 296194354;

    t157 = (x629!=((x630>x631)*x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = 609062351;
	int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MAX;
	static int32_t t158 = 10123;

    t158 = (x633!=((x634>x635)*x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x640 = 59U;
	int32_t t159 = 6068;

    t159 = (x637!=((x638>x639)*x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = -1LL;
	int8_t x642 = INT8_MIN;
	volatile int16_t x644 = -10;
	int32_t t160 = -4532;

    t160 = (x641!=((x642>x643)*x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x646 = INT32_MIN;
	static int8_t x647 = INT8_MAX;
	int8_t x648 = -27;
	int32_t t161 = 14;

    t161 = (x645!=((x646>x647)*x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	uint32_t x650 = UINT32_MAX;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MIN;
	volatile int32_t t162 = -1;

    t162 = (x649!=((x650>x651)*x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MAX;
	int64_t x654 = -1LL;
	volatile int32_t x655 = 412;
	uint16_t x656 = 7443U;
	volatile int32_t t163 = 34529;

    t163 = (x653!=((x654>x655)*x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	int64_t x658 = INT64_MIN;
	volatile uint8_t x659 = 34U;
	uint16_t x660 = 4129U;
	volatile int32_t t164 = 773;

    t164 = (x657!=((x658>x659)*x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile int16_t x662 = -1;
	volatile int32_t x663 = INT32_MIN;
	int32_t x664 = 50619;
	int32_t t165 = 1729711;

    t165 = (x661!=((x662>x663)*x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	int32_t x666 = 25085226;
	volatile int16_t x667 = -1;
	int8_t x668 = INT8_MIN;
	int32_t t166 = -21;

    t166 = (x665!=((x666>x667)*x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int64_t x670 = -1LL;
	int8_t x671 = -11;
	uint8_t x672 = 6U;

    t167 = (x669!=((x670>x671)*x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = UINT64_MAX;
	int8_t x675 = INT8_MIN;
	int16_t x676 = INT16_MIN;

    t168 = (x673!=((x674>x675)*x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 26U;
	int64_t x678 = INT64_MIN;
	static int8_t x679 = -21;
	volatile int32_t t169 = -3995962;

    t169 = (x677!=((x678>x679)*x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x682 = INT16_MAX;
	int16_t x684 = -633;
	volatile int32_t t170 = -10737652;

    t170 = (x681!=((x682>x683)*x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 30U;
	int64_t x686 = -891LL;
	static volatile int32_t x687 = 126396;
	int8_t x688 = 1;
	static volatile int32_t t171 = -1461322;

    t171 = (x685!=((x686>x687)*x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 90459104516206LLU;
	uint64_t x690 = 728LLU;
	uint16_t x691 = UINT16_MAX;
	int32_t x692 = -1;
	int32_t t172 = 89521;

    t172 = (x689!=((x690>x691)*x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = 2413011869305849024LL;
	uint64_t x694 = 18LLU;
	int32_t x695 = -1;
	static int32_t x696 = 1;
	int32_t t173 = 44;

    t173 = (x693!=((x694>x695)*x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;
	int32_t x698 = 20;
	static int64_t x699 = -443LL;
	int32_t t174 = 1780441;

    t174 = (x697!=((x698>x699)*x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	volatile int32_t t175 = 1;

    t175 = (x701!=((x702>x703)*x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x707 = INT32_MIN;
	int32_t x708 = INT32_MIN;
	static int32_t t176 = 165513;

    t176 = (x705!=((x706>x707)*x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 228396980995019LL;
	static int32_t x710 = INT32_MAX;
	int32_t x711 = 4197;
	int64_t x712 = 88LL;
	int32_t t177 = 95448;

    t177 = (x709!=((x710>x711)*x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	volatile uint16_t x714 = UINT16_MAX;
	static uint16_t x715 = 30499U;

    t178 = (x713!=((x714>x715)*x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MAX;
	int64_t x719 = -1LL;
	volatile int32_t t179 = -3253;

    t179 = (x717!=((x718>x719)*x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = INT32_MIN;
	static int32_t t180 = 35940;

    t180 = (x721!=((x722>x723)*x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	int64_t x726 = 2462979584834303LL;
	uint32_t x727 = UINT32_MAX;
	uint8_t x728 = 2U;
	volatile int32_t t181 = 94;

    t181 = (x725!=((x726>x727)*x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MIN;
	int8_t x731 = INT8_MIN;
	static uint16_t x732 = 78U;

    t182 = (x729!=((x730>x731)*x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 3U;
	volatile uint16_t x734 = UINT16_MAX;
	uint8_t x735 = 5U;
	int32_t x736 = INT32_MAX;

    t183 = (x733!=((x734>x735)*x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MAX;
	int64_t x739 = 2139131LL;
	static int64_t x740 = -256LL;
	int32_t t184 = 217345775;

    t184 = (x737!=((x738>x739)*x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = 246320;
	uint8_t x743 = 10U;
	int16_t x744 = -10;
	int32_t t185 = -9;

    t185 = (x741!=((x742>x743)*x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x746 = 14U;
	static int8_t x747 = INT8_MAX;
	static int16_t x748 = INT16_MAX;
	int32_t t186 = -247127;

    t186 = (x745!=((x746>x747)*x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	uint16_t x751 = 25U;
	volatile int32_t t187 = -59;

    t187 = (x749!=((x750>x751)*x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	uint32_t x754 = UINT32_MAX;
	int32_t x755 = -1;
	int64_t x756 = 16752746145LL;
	static int32_t t188 = -7;

    t188 = (x753!=((x754>x755)*x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	static int8_t x758 = INT8_MIN;
	static volatile int32_t t189 = 291484382;

    t189 = (x757!=((x758>x759)*x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	static int32_t x762 = 5;
	uint8_t x763 = 5U;
	static int64_t x764 = -1LL;

    t190 = (x761!=((x762>x763)*x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 4U;
	int64_t x766 = INT64_MAX;
	uint64_t x767 = 32202545458LLU;
	volatile int8_t x768 = -1;
	static volatile int32_t t191 = -230627;

    t191 = (x765!=((x766>x767)*x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	volatile int8_t x771 = INT8_MIN;
	volatile uint8_t x772 = 0U;
	volatile int32_t t192 = -5516;

    t192 = (x769!=((x770>x771)*x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint16_t x773 = UINT16_MAX;
	int8_t x774 = INT8_MIN;
	static int8_t x775 = 52;
	int8_t x776 = INT8_MIN;
	volatile int32_t t193 = 277;

    t193 = (x773!=((x774>x775)*x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 18517545181LL;
	int64_t x778 = 95177776921LL;
	volatile int8_t x779 = -1;
	volatile int32_t t194 = -204;

    t194 = (x777!=((x778>x779)*x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x782 = 919102;
	int16_t x783 = INT16_MIN;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 5661253;

    t195 = (x781!=((x782>x783)*x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	static volatile int8_t x787 = 5;
	static int32_t t196 = -3847314;

    t196 = (x785!=((x786>x787)*x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 77U;
	uint32_t x791 = 2U;
	uint8_t x792 = 3U;
	static volatile int32_t t197 = -1927;

    t197 = (x789!=((x790>x791)*x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = 1292;
	volatile uint64_t x794 = UINT64_MAX;
	uint8_t x795 = 1U;
	volatile int32_t t198 = 38143;

    t198 = (x793!=((x794>x795)*x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	volatile int32_t x799 = INT32_MIN;
	volatile int32_t t199 = -287;

    t199 = (x797!=((x798>x799)*x800));

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

