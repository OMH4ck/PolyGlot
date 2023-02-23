
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

uint32_t x5 = UINT32_MAX;
volatile uint32_t x6 = UINT32_MAX;
uint32_t x7 = UINT32_MAX;
int8_t x8 = -1;
int32_t t1 = 1412652;
uint64_t x10 = UINT64_MAX;
int8_t x11 = INT8_MIN;
uint32_t x12 = 14790U;
volatile int16_t x13 = INT16_MAX;
volatile int16_t x18 = INT16_MIN;
int64_t x19 = INT64_MAX;
static int32_t x20 = INT32_MIN;
static volatile int8_t x23 = -1;
volatile int32_t t5 = 4213397;
uint16_t x26 = 6U;
int16_t x27 = 1;
int64_t x30 = INT64_MIN;
static int16_t x36 = -206;
int32_t t8 = 554954;
static int16_t x42 = INT16_MIN;
volatile int8_t x47 = INT8_MIN;
int64_t x49 = -305LL;
uint16_t x53 = 14043U;
uint32_t x57 = 47U;
int32_t x60 = -10018;
uint64_t x61 = 9LLU;
int64_t x67 = -32340398262083877LL;
volatile int64_t x74 = 4287923LL;
volatile int64_t x76 = INT64_MAX;
volatile int32_t t18 = 16178522;
static uint8_t x80 = UINT8_MAX;
int64_t x82 = INT64_MAX;
uint16_t x83 = 86U;
volatile int32_t t21 = -1;
uint16_t x89 = UINT16_MAX;
volatile uint16_t x101 = UINT16_MAX;
uint8_t x102 = 9U;
uint64_t x106 = 521655LLU;
int16_t x107 = INT16_MIN;
int32_t x113 = 6;
int16_t x116 = -452;
uint64_t x117 = 7725843524LLU;
static int8_t x119 = -1;
volatile uint8_t x123 = UINT8_MAX;
static int32_t t31 = -13581;
uint64_t x133 = 4167242143430593LLU;
static int16_t x137 = INT16_MIN;
static volatile int32_t t34 = 868641;
int64_t x141 = INT64_MIN;
static int64_t x143 = INT64_MAX;
volatile uint64_t x151 = 1743947624577574463LLU;
uint64_t x152 = 758795827LLU;
volatile int8_t x153 = 18;
volatile int32_t t42 = 64120;
int16_t x180 = INT16_MIN;
int32_t t44 = 20;
int64_t x192 = -4038753729871073408LL;
int64_t x194 = INT64_MAX;
int8_t x195 = -1;
volatile int32_t t48 = -23767;
int64_t x198 = INT64_MIN;
static int8_t x201 = 44;
uint64_t x204 = 381140866007LLU;
volatile int32_t t50 = -242777304;
uint64_t x206 = 104130888131LLU;
volatile uint16_t x212 = UINT16_MAX;
static int32_t x216 = 6;
int16_t x218 = 6;
int64_t x222 = -1LL;
static int32_t x225 = INT32_MIN;
uint8_t x228 = 39U;
int8_t x231 = -1;
volatile int64_t x244 = INT64_MAX;
uint64_t x248 = 815159LLU;
volatile int8_t x249 = -31;
static volatile uint16_t x253 = 0U;
int8_t x256 = -1;
volatile int16_t x260 = INT16_MAX;
uint8_t x261 = 124U;
int16_t x263 = INT16_MIN;
uint32_t x270 = UINT32_MAX;
int64_t x279 = -687LL;
uint8_t x280 = 11U;
int32_t t71 = 11003;
int8_t x289 = INT8_MIN;
int8_t x290 = INT8_MIN;
uint16_t x302 = 2U;
volatile int16_t x303 = -1;
int32_t t75 = -8108;
int16_t x309 = 8;
int8_t x312 = -1;
static volatile uint64_t x313 = UINT64_MAX;
uint32_t x314 = UINT32_MAX;
volatile int32_t x320 = INT32_MAX;
volatile int8_t x327 = 25;
int64_t x329 = -61757602752506033LL;
volatile int64_t x343 = INT64_MIN;
volatile int64_t x347 = -1LL;
int8_t x349 = -1;
static volatile int64_t x352 = INT64_MIN;
volatile int32_t t87 = -41;
int8_t x356 = 10;
int32_t t90 = 0;
uint64_t x373 = 14169824354386LLU;
volatile int32_t t93 = -90906;
volatile int32_t t95 = -3010969;
uint8_t x400 = 0U;
volatile int32_t x404 = -4199321;
int8_t x408 = 53;
int32_t t101 = -2222735;
int64_t x414 = -1LL;
volatile int32_t t103 = -645;
int64_t x426 = INT64_MIN;
uint64_t x430 = UINT64_MAX;
int32_t x438 = INT32_MIN;
static volatile int32_t t109 = 429856;
int8_t x445 = 1;
int64_t x448 = -1LL;
volatile int8_t x449 = INT8_MIN;
static int64_t x450 = -56308087327879178LL;
static volatile int8_t x453 = INT8_MIN;
int64_t x454 = 762110428593840725LL;
static volatile int32_t t113 = 158;
int32_t x470 = INT32_MAX;
int32_t t117 = -934748667;
uint32_t x478 = UINT32_MAX;
uint8_t x480 = UINT8_MAX;
volatile uint8_t x482 = UINT8_MAX;
int8_t x487 = INT8_MIN;
int64_t x494 = 185819346LL;
volatile int8_t x497 = -1;
uint32_t x499 = 1U;
volatile int32_t t124 = 920488793;
int64_t x504 = -1LL;
volatile int32_t t126 = 197577;
uint64_t x519 = 1LLU;
volatile int16_t x520 = INT16_MAX;
volatile int32_t t129 = 42918839;
uint64_t x526 = 4998LLU;
uint8_t x528 = UINT8_MAX;
uint16_t x529 = 1U;
volatile int8_t x530 = -2;
int8_t x531 = -7;
volatile int32_t t132 = -11556740;
int32_t x535 = INT32_MIN;
uint32_t x537 = 884641330U;
static int32_t x538 = 655829806;
volatile uint32_t x540 = 1U;
volatile int32_t t135 = 15758;
uint64_t x545 = UINT64_MAX;
int32_t x557 = INT32_MIN;
int64_t x559 = INT64_MIN;
int32_t t140 = -1861;
uint16_t x571 = UINT16_MAX;
int32_t t143 = 1711;
static int16_t x582 = INT16_MAX;
int16_t x586 = -1;
int16_t x587 = -829;
static int64_t x600 = 3456551951LL;
int32_t x603 = -1;
volatile int32_t t150 = 23602;
static uint64_t x611 = UINT64_MAX;
int32_t x625 = INT32_MAX;
static int8_t x627 = -1;
int16_t x635 = INT16_MAX;
static int16_t x639 = INT16_MIN;
int64_t x642 = INT64_MAX;
volatile uint8_t x646 = UINT8_MAX;
int64_t x648 = -420425481446620LL;
int16_t x649 = INT16_MIN;
static uint16_t x658 = 5925U;
int16_t x659 = INT16_MIN;
int32_t t164 = -29075;
int64_t x670 = -1LL;
static uint16_t x672 = 7U;
int32_t x673 = INT32_MIN;
volatile int8_t x676 = -1;
int16_t x684 = -120;
uint32_t x685 = UINT32_MAX;
int64_t x686 = INT64_MIN;
int8_t x691 = -1;
volatile uint64_t x695 = 29LLU;
volatile int64_t x701 = -15LL;
volatile int16_t x707 = 24;
volatile int32_t t176 = -292280;
int32_t t177 = 28379242;
static uint8_t x715 = 20U;
int8_t x717 = INT8_MAX;
uint64_t x718 = 1965213281LLU;
int32_t x724 = INT32_MAX;
static int16_t x726 = -1;
uint16_t x731 = 385U;
int16_t x734 = 116;
int16_t x736 = INT16_MIN;
int32_t t183 = 58706774;
static volatile uint8_t x741 = UINT8_MAX;
uint64_t x744 = 1LLU;
int64_t x749 = INT64_MIN;
uint32_t x751 = 363156U;
int64_t x760 = INT64_MIN;
int32_t t189 = 8076231;
int16_t x761 = INT16_MAX;
uint16_t x764 = 17447U;
uint32_t x777 = 20U;
int16_t x780 = INT16_MIN;
static uint32_t x783 = 1512U;
int8_t x784 = INT8_MIN;
int64_t x788 = 341455741234895LL;
volatile uint32_t x799 = UINT32_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int8_t x2 = 2;
	int64_t x3 = INT64_MAX;
	static uint32_t x4 = 416887U;
	int32_t t0 = -339542630;

    t0 = (x1!=((x2!=x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    

    t1 = (x5!=((x6!=x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t t2 = -100529899;

    t2 = (x9!=((x10!=x11)*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -2LL;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = 51;

    t3 = (x13!=((x14!=x15)*x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	static int32_t t4 = -368718;

    t4 = (x17!=((x18!=x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 1U;
	int16_t x22 = -1;
	volatile uint64_t x24 = UINT64_MAX;

    t5 = (x21!=((x22!=x23)*x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -47623;

    t6 = (x25!=((x26!=x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MAX;
	int32_t x31 = INT32_MIN;
	static volatile int64_t x32 = -1LL;
	volatile int32_t t7 = -15897342;

    t7 = (x29!=((x30!=x31)*x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 2;
	static uint8_t x34 = 92U;
	int64_t x35 = INT64_MIN;

    t8 = (x33!=((x34!=x35)*x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static volatile uint64_t x38 = UINT64_MAX;
	static uint32_t x39 = 594101U;
	static uint16_t x40 = 3642U;
	volatile int32_t t9 = 10891;

    t9 = (x37!=((x38!=x39)*x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 3U;
	int64_t x43 = INT64_MAX;
	static int32_t x44 = -32565673;
	volatile int32_t t10 = 81952;

    t10 = (x41!=((x42!=x43)*x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = -463;
	uint16_t x46 = 74U;
	int16_t x48 = 0;
	volatile int32_t t11 = -1;

    t11 = (x45!=((x46!=x47)*x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 3;
	int8_t x51 = -1;
	uint32_t x52 = 3468897U;
	volatile int32_t t12 = -1;

    t12 = (x49!=((x50!=x51)*x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x54 = 20189U;
	static int64_t x55 = -14780220302130LL;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 85;

    t13 = (x53!=((x54!=x55)*x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	volatile int16_t x59 = 22;
	volatile int32_t t14 = 53988;

    t14 = (x57!=((x58!=x59)*x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x62 = INT16_MIN;
	uint64_t x63 = 683129524LLU;
	uint64_t x64 = 4341563957096782255LLU;
	static volatile int32_t t15 = -131606245;

    t15 = (x61!=((x62!=x63)*x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 4634654U;
	uint32_t x66 = 3672U;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -6;

    t16 = (x65!=((x66!=x67)*x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 50U;
	uint32_t x71 = 26275U;
	int16_t x72 = -1;
	int32_t t17 = -14621665;

    t17 = (x69!=((x70!=x71)*x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int32_t x75 = -49413390;

    t18 = (x73!=((x74!=x75)*x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 2U;
	static int32_t x78 = 385170020;
	volatile uint16_t x79 = 182U;
	volatile int32_t t19 = -1;

    t19 = (x77!=((x78!=x79)*x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	volatile int16_t x84 = -3506;
	volatile int32_t t20 = 136774;

    t20 = (x81!=((x82!=x83)*x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	int8_t x86 = -1;
	uint32_t x87 = 370928069U;
	static int64_t x88 = -1LL;

    t21 = (x85!=((x86!=x87)*x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -323;
	static int16_t x91 = INT16_MAX;
	int64_t x92 = INT64_MAX;
	static volatile int32_t t22 = -2430678;

    t22 = (x89!=((x90!=x91)*x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MAX;
	int8_t x95 = -1;
	int64_t x96 = -3853LL;
	int32_t t23 = -1675;

    t23 = (x93!=((x94!=x95)*x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 109803LL;
	uint32_t x98 = 226111U;
	int64_t x99 = -65380LL;
	static uint64_t x100 = 65215LLU;
	int32_t t24 = -1329;

    t24 = (x97!=((x98!=x99)*x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x103 = 14271466U;
	uint8_t x104 = 1U;
	static volatile int32_t t25 = -1;

    t25 = (x101!=((x102!=x103)*x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -493278469LL;
	int8_t x108 = 2;
	volatile int32_t t26 = -36197;

    t26 = (x105!=((x106!=x107)*x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 6;
	int16_t x110 = INT16_MAX;
	int32_t x111 = -1;
	static int32_t x112 = -1473904;
	int32_t t27 = -2016111;

    t27 = (x109!=((x110!=x111)*x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MAX;
	static int16_t x115 = INT16_MIN;
	int32_t t28 = 61211193;

    t28 = (x113!=((x114!=x115)*x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = -5616;
	volatile int16_t x120 = INT16_MAX;
	int32_t t29 = 5912520;

    t29 = (x117!=((x118!=x119)*x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	static int64_t x122 = INT64_MAX;
	int64_t x124 = 273LL;
	volatile int32_t t30 = 38961;

    t30 = (x121!=((x122!=x123)*x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 1;
	int64_t x126 = 65437973029416LL;
	uint64_t x127 = 2044LLU;
	int32_t x128 = INT32_MIN;

    t31 = (x125!=((x126!=x127)*x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -798540013;
	static int8_t x130 = INT8_MIN;
	uint32_t x131 = 37U;
	uint32_t x132 = 237624791U;
	int32_t t32 = 1;

    t32 = (x129!=((x130!=x131)*x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 25024U;
	int32_t t33 = 3402;

    t33 = (x133!=((x134!=x135)*x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 9U;
	uint8_t x139 = UINT8_MAX;
	uint8_t x140 = 67U;

    t34 = (x137!=((x138!=x139)*x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x142 = INT32_MAX;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t35 = -329;

    t35 = (x141!=((x142!=x143)*x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 1;
	uint16_t x146 = 64U;
	int16_t x147 = -1;
	static volatile int64_t x148 = -1LL;
	static int32_t t36 = -1302866;

    t36 = (x145!=((x146!=x147)*x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = INT64_MIN;
	uint8_t x150 = 3U;
	volatile int32_t t37 = 0;

    t37 = (x149!=((x150!=x151)*x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	volatile int16_t x156 = -19;
	int32_t t38 = -1172;

    t38 = (x153!=((x154!=x155)*x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 13655U;
	int16_t x159 = 1;
	uint8_t x160 = 9U;
	volatile int32_t t39 = 0;

    t39 = (x157!=((x158!=x159)*x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = -30952;
	uint32_t x162 = 0U;
	uint32_t x163 = 260464586U;
	uint16_t x164 = 3U;
	static int32_t t40 = -47;

    t40 = (x161!=((x162!=x163)*x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	uint32_t x166 = UINT32_MAX;
	static uint64_t x167 = 2621363LLU;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 1;

    t41 = (x165!=((x166!=x167)*x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 7286649LLU;
	uint16_t x170 = 6U;
	static volatile int8_t x171 = 25;
	uint32_t x172 = 5517U;

    t42 = (x169!=((x170!=x171)*x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	volatile int64_t x174 = INT64_MIN;
	volatile int8_t x175 = -1;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -811;

    t43 = (x173!=((x174!=x175)*x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x177 = 1733U;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;

    t44 = (x177!=((x178!=x179)*x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	volatile int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MIN;
	int16_t x184 = 12;
	int32_t t45 = -743073;

    t45 = (x181!=((x182!=x183)*x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 1266261963834LL;
	uint64_t x186 = UINT64_MAX;
	static int64_t x187 = -1LL;
	uint8_t x188 = 91U;
	volatile int32_t t46 = 1756775;

    t46 = (x185!=((x186!=x187)*x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = 38U;
	int32_t t47 = -7547132;

    t47 = (x189!=((x190!=x191)*x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 3896322;
	volatile int16_t x196 = -1;

    t48 = (x193!=((x194!=x195)*x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = 14497061;

    t49 = (x197!=((x198!=x199)*x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MIN;

    t50 = (x201!=((x202!=x203)*x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	int32_t t51 = -8;

    t51 = (x205!=((x206!=x207)*x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static int8_t x210 = -1;
	int64_t x211 = 62267594LL;
	int32_t t52 = -108266578;

    t52 = (x209!=((x210!=x211)*x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	static uint32_t x215 = 30926U;
	int32_t t53 = 13967815;

    t53 = (x213!=((x214!=x215)*x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int32_t x219 = 2104;
	static int64_t x220 = 78273165LL;
	volatile int32_t t54 = -345778392;

    t54 = (x217!=((x218!=x219)*x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	int64_t x223 = 441406LL;
	uint8_t x224 = 1U;
	static volatile int32_t t55 = 340677;

    t55 = (x221!=((x222!=x223)*x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = -1;
	static int64_t x227 = INT64_MIN;
	static int32_t t56 = 652731;

    t56 = (x225!=((x226!=x227)*x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 1252674066LL;
	volatile int16_t x230 = INT16_MIN;
	int64_t x232 = -489492744LL;
	volatile int32_t t57 = 876;

    t57 = (x229!=((x230!=x231)*x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 7U;
	int64_t x234 = -1652087049543679157LL;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = 7340;
	int32_t t58 = 1;

    t58 = (x233!=((x234!=x235)*x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = -1;
	static int8_t x239 = -34;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 15362;

    t59 = (x237!=((x238!=x239)*x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 7408U;
	uint16_t x242 = 2U;
	int64_t x243 = -1LL;
	int32_t t60 = 15508176;

    t60 = (x241!=((x242!=x243)*x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	uint64_t x247 = UINT64_MAX;
	int32_t t61 = 53;

    t61 = (x245!=((x246!=x247)*x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x250 = INT16_MAX;
	uint64_t x251 = 1955528179406266LLU;
	int32_t x252 = -1;
	static volatile int32_t t62 = 9231;

    t62 = (x249!=((x250!=x251)*x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	volatile int32_t t63 = 14;

    t63 = (x253!=((x254!=x255)*x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	uint32_t x258 = 41163U;
	volatile int16_t x259 = INT16_MIN;
	int32_t t64 = -2486632;

    t64 = (x257!=((x258!=x259)*x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = -1LL;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 112472;

    t65 = (x261!=((x262!=x263)*x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	int16_t x268 = -1;
	volatile int32_t t66 = 441205416;

    t66 = (x265!=((x266!=x267)*x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 884362U;
	uint32_t x271 = UINT32_MAX;
	static int64_t x272 = INT64_MIN;
	int32_t t67 = -37995;

    t67 = (x269!=((x270!=x271)*x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 556U;
	uint8_t x274 = 9U;
	static uint64_t x275 = UINT64_MAX;
	volatile int32_t x276 = INT32_MAX;
	int32_t t68 = -1;

    t68 = (x273!=((x274!=x275)*x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = -261536633972774LL;
	uint64_t x278 = 219595035028LLU;
	int32_t t69 = 23;

    t69 = (x277!=((x278!=x279)*x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -2387;
	volatile uint16_t x282 = 2428U;
	uint16_t x283 = 425U;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -9;

    t70 = (x281!=((x282!=x283)*x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = -1066029328;
	int8_t x288 = INT8_MIN;

    t71 = (x285!=((x286!=x287)*x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x291 = 3886;
	static volatile int16_t x292 = -1;
	static volatile int32_t t72 = -730543;

    t72 = (x289!=((x290!=x291)*x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x294 = 2516;
	int64_t x295 = -55255294630LL;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 45;

    t73 = (x293!=((x294!=x295)*x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 0U;
	uint64_t x298 = 10898LLU;
	uint16_t x299 = 1U;
	int16_t x300 = 23;
	int32_t t74 = -15850503;

    t74 = (x297!=((x298!=x299)*x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 7986956LLU;
	int16_t x304 = INT16_MIN;

    t75 = (x301!=((x302!=x303)*x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int16_t x306 = 211;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 314;

    t76 = (x305!=((x306!=x307)*x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x310 = 319791U;
	int8_t x311 = 50;
	int32_t t77 = 171525785;

    t77 = (x309!=((x310!=x311)*x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -6;

    t78 = (x313!=((x314!=x315)*x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x317 = 3740383131LLU;
	uint16_t x318 = 0U;
	static int64_t x319 = INT64_MIN;
	volatile int32_t t79 = -67272;

    t79 = (x317!=((x318!=x319)*x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -4206595;
	volatile int16_t x322 = 103;
	uint64_t x323 = 0LLU;
	static uint8_t x324 = 113U;
	int32_t t80 = 9746;

    t80 = (x321!=((x322!=x323)*x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	volatile int32_t x326 = -1;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t81 = -1;

    t81 = (x325!=((x326!=x327)*x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = 7602LLU;
	int32_t x331 = INT32_MAX;
	static int64_t x332 = INT64_MIN;
	static int32_t t82 = -59534;

    t82 = (x329!=((x330!=x331)*x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	volatile int8_t x334 = INT8_MIN;
	static volatile int8_t x335 = INT8_MIN;
	static volatile int32_t x336 = 521958;
	int32_t t83 = -216;

    t83 = (x333!=((x334!=x335)*x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	volatile uint32_t x340 = 11657040U;
	int32_t t84 = 2;

    t84 = (x337!=((x338!=x339)*x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x341 = UINT32_MAX;
	volatile int64_t x342 = INT64_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t85 = 16992320;

    t85 = (x341!=((x342!=x343)*x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 1;
	uint16_t x346 = 1598U;
	static volatile uint8_t x348 = 48U;
	int32_t t86 = -3817470;

    t86 = (x345!=((x346!=x347)*x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MAX;
	uint64_t x351 = 179470633246LLU;

    t87 = (x349!=((x350!=x351)*x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	int32_t t88 = -15442408;

    t88 = (x353!=((x354!=x355)*x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 79689002017799LLU;
	static int16_t x358 = -4;
	uint64_t x359 = UINT64_MAX;
	static int8_t x360 = -8;
	int32_t t89 = -82;

    t89 = (x357!=((x358!=x359)*x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1259607469880LL;
	uint32_t x362 = UINT32_MAX;
	static int64_t x363 = INT64_MIN;
	static uint8_t x364 = 44U;

    t90 = (x361!=((x362!=x363)*x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	int16_t x366 = 2;
	static uint32_t x367 = 76445U;
	int8_t x368 = -1;
	int32_t t91 = 89499;

    t91 = (x365!=((x366!=x367)*x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 393058U;
	uint32_t x370 = 388U;
	static int8_t x371 = INT8_MIN;
	static volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 1;

    t92 = (x369!=((x370!=x371)*x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x374 = 6U;
	static int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

    t93 = (x373!=((x374!=x375)*x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = 6U;
	int64_t x379 = INT64_MIN;
	int32_t x380 = -23;
	volatile int32_t t94 = 129240;

    t94 = (x377!=((x378!=x379)*x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;

    t95 = (x381!=((x382!=x383)*x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -15192;
	int64_t x386 = INT64_MIN;
	int32_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	static int32_t t96 = 3080590;

    t96 = (x385!=((x386!=x387)*x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x389 = 92;
	uint64_t x390 = 40282035673033LLU;
	volatile uint8_t x391 = 2U;
	int16_t x392 = -324;
	volatile int32_t t97 = -293;

    t97 = (x389!=((x390!=x391)*x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x395 = 163978LL;
	uint32_t x396 = 1104U;
	int32_t t98 = -1965;

    t98 = (x393!=((x394!=x395)*x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	static int32_t t99 = -547;

    t99 = (x397!=((x398!=x399)*x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 8151891LLU;
	static int8_t x402 = INT8_MIN;
	int32_t x403 = -6;
	static int32_t t100 = 254656;

    t100 = (x401!=((x402!=x403)*x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int8_t x406 = -1;
	int64_t x407 = -1395151824057480986LL;

    t101 = (x405!=((x406!=x407)*x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = UINT8_MAX;
	static uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t102 = -52;

    t102 = (x409!=((x410!=x411)*x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = -1;

    t103 = (x413!=((x414!=x415)*x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 652LLU;
	uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 30U;
	uint16_t x420 = 12444U;
	int32_t t104 = 83;

    t104 = (x417!=((x418!=x419)*x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = 6929208293979918LLU;
	uint8_t x422 = 2U;
	static int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = 461852184;

    t105 = (x421!=((x422!=x423)*x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 18219U;
	uint16_t x427 = 275U;
	int8_t x428 = INT8_MAX;
	int32_t t106 = -1;

    t106 = (x425!=((x426!=x427)*x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 3657909578LLU;
	uint32_t x431 = 4621192U;
	int16_t x432 = 931;
	int32_t t107 = -384023649;

    t107 = (x429!=((x430!=x431)*x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MAX;
	static uint16_t x434 = UINT16_MAX;
	int64_t x435 = -1491LL;
	static int32_t x436 = INT32_MIN;
	static volatile int32_t t108 = -1;

    t108 = (x433!=((x434!=x435)*x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 1238017629971960703LLU;
	int32_t x439 = -1;
	volatile uint64_t x440 = 9438LLU;

    t109 = (x437!=((x438!=x439)*x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = -1;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 0;
	int64_t x444 = -628881148820361086LL;
	static int32_t t110 = 701;

    t110 = (x441!=((x442!=x443)*x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = INT64_MAX;
	static uint32_t x447 = UINT32_MAX;
	int32_t t111 = 0;

    t111 = (x445!=((x446!=x447)*x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x451 = UINT32_MAX;
	uint64_t x452 = UINT64_MAX;
	int32_t t112 = -56407841;

    t112 = (x449!=((x450!=x451)*x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x455 = -1;
	int16_t x456 = 7;

    t113 = (x453!=((x454!=x455)*x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	int32_t x458 = INT32_MIN;
	volatile uint8_t x459 = 47U;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = 164;

    t114 = (x457!=((x458!=x459)*x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 36000290301712490LLU;
	static volatile uint16_t x462 = 517U;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -1;
	static int32_t t115 = 219561197;

    t115 = (x461!=((x462!=x463)*x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = 4890823;
	volatile int8_t x466 = INT8_MAX;
	volatile uint32_t x467 = 432528U;
	int32_t x468 = -49036;
	int32_t t116 = -222562;

    t116 = (x465!=((x466!=x467)*x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	static uint16_t x471 = UINT16_MAX;
	volatile int64_t x472 = INT64_MIN;

    t117 = (x469!=((x470!=x471)*x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -9;
	volatile uint64_t x474 = 8858363571329159851LLU;
	static int16_t x475 = INT16_MIN;
	int32_t x476 = 31617;
	int32_t t118 = -1;

    t118 = (x473!=((x474!=x475)*x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	uint8_t x479 = 26U;
	int32_t t119 = -28991;

    t119 = (x477!=((x478!=x479)*x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x483 = INT8_MAX;
	int64_t x484 = INT64_MAX;
	static int32_t t120 = 8243;

    t120 = (x481!=((x482!=x483)*x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	uint16_t x486 = 24052U;
	int16_t x488 = 481;
	int32_t t121 = -783;

    t121 = (x485!=((x486!=x487)*x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MIN;
	int64_t x492 = -1LL;
	int32_t t122 = -1;

    t122 = (x489!=((x490!=x491)*x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MAX;
	uint8_t x495 = 16U;
	int8_t x496 = -1;
	int32_t t123 = 1;

    t123 = (x493!=((x494!=x495)*x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = -803;
	int32_t x500 = -74;

    t124 = (x497!=((x498!=x499)*x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 0U;
	volatile uint8_t x502 = 35U;
	uint64_t x503 = 34LLU;
	static volatile int32_t t125 = -1;

    t125 = (x501!=((x502!=x503)*x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x505 = 2U;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = INT16_MIN;
	volatile int32_t x508 = 1433394;

    t126 = (x505!=((x506!=x507)*x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	uint8_t x510 = 0U;
	uint32_t x511 = 1000281571U;
	int8_t x512 = 0;
	volatile int32_t t127 = -29075741;

    t127 = (x509!=((x510!=x511)*x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	static uint8_t x514 = UINT8_MAX;
	int16_t x515 = -7775;
	static uint32_t x516 = 568705183U;
	int32_t t128 = -728614660;

    t128 = (x513!=((x514!=x515)*x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 0U;
	uint8_t x518 = 90U;

    t129 = (x517!=((x518!=x519)*x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 1U;
	int8_t x522 = INT8_MAX;
	int64_t x523 = INT64_MIN;
	int64_t x524 = -1LL;
	volatile int32_t t130 = 0;

    t130 = (x521!=((x522!=x523)*x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	uint32_t x527 = 9U;
	volatile int32_t t131 = -1;

    t131 = (x525!=((x526!=x527)*x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x532 = 3;

    t132 = (x529!=((x530!=x531)*x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 0;
	int8_t x534 = INT8_MIN;
	int64_t x536 = INT64_MIN;
	static int32_t t133 = -3372;

    t133 = (x533!=((x534!=x535)*x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x539 = INT16_MAX;
	volatile int32_t t134 = 15952019;

    t134 = (x537!=((x538!=x539)*x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -45;
	int16_t x542 = INT16_MIN;
	static int16_t x543 = INT16_MIN;
	int64_t x544 = INT64_MIN;

    t135 = (x541!=((x542!=x543)*x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x546 = -1LL;
	int8_t x547 = INT8_MIN;
	int8_t x548 = 4;
	static volatile int32_t t136 = -1;

    t136 = (x545!=((x546!=x547)*x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -2;
	uint32_t x550 = 16U;
	volatile uint8_t x551 = 97U;
	static int64_t x552 = -1LL;
	volatile int32_t t137 = 1;

    t137 = (x549!=((x550!=x551)*x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = -1;
	uint64_t x554 = 115248911955630LLU;
	static volatile uint64_t x555 = 13846570391LLU;
	int32_t x556 = INT32_MAX;
	volatile int32_t t138 = 648570196;

    t138 = (x553!=((x554!=x555)*x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x558 = -63;
	int16_t x560 = INT16_MIN;
	int32_t t139 = -1378;

    t139 = (x557!=((x558!=x559)*x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = 4270826126LL;
	int32_t x562 = INT32_MIN;
	uint64_t x563 = 7825462497595LLU;
	static uint8_t x564 = 20U;

    t140 = (x561!=((x562!=x563)*x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x565 = 33679435U;
	int8_t x566 = INT8_MIN;
	volatile int16_t x567 = INT16_MAX;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t141 = -952861559;

    t141 = (x565!=((x566!=x567)*x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 0;
	volatile int32_t x570 = 32;
	static uint16_t x572 = UINT16_MAX;
	volatile int32_t t142 = -5224110;

    t142 = (x569!=((x570!=x571)*x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = -1LL;
	volatile uint64_t x574 = 12032023LLU;
	int16_t x575 = 11959;
	static uint32_t x576 = 3335U;

    t143 = (x573!=((x574!=x575)*x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MIN;
	uint64_t x579 = 186563821028476LLU;
	int32_t x580 = INT32_MAX;
	volatile int32_t t144 = -28013;

    t144 = (x577!=((x578!=x579)*x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = UINT8_MAX;
	int8_t x583 = INT8_MIN;
	volatile int64_t x584 = -8117LL;
	volatile int32_t t145 = -8;

    t145 = (x581!=((x582!=x583)*x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int16_t x588 = -1;
	volatile int32_t t146 = 1027;

    t146 = (x585!=((x586!=x587)*x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	volatile int16_t x590 = 23;
	int8_t x591 = INT8_MIN;
	volatile int16_t x592 = INT16_MIN;
	volatile int32_t t147 = 3043755;

    t147 = (x589!=((x590!=x591)*x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = -254474698;
	int16_t x594 = -1;
	int16_t x595 = -1;
	uint64_t x596 = 7222310699429LLU;
	int32_t t148 = 1754;

    t148 = (x593!=((x594!=x595)*x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = 368;
	static volatile uint64_t x598 = 10877664LLU;
	int16_t x599 = INT16_MIN;
	int32_t t149 = -3;

    t149 = (x597!=((x598!=x599)*x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 0U;
	uint8_t x602 = 6U;
	volatile uint16_t x604 = UINT16_MAX;

    t150 = (x601!=((x602!=x603)*x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = UINT32_MAX;
	uint32_t x607 = 209624U;
	volatile int64_t x608 = INT64_MIN;
	volatile int32_t t151 = -586;

    t151 = (x605!=((x606!=x607)*x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	static volatile uint16_t x610 = 614U;
	int32_t x612 = INT32_MIN;
	int32_t t152 = 13;

    t152 = (x609!=((x610!=x611)*x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = UINT8_MAX;
	uint8_t x615 = 0U;
	volatile int8_t x616 = -1;
	int32_t t153 = 377;

    t153 = (x613!=((x614!=x615)*x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	uint32_t x618 = 1503U;
	static uint64_t x619 = UINT64_MAX;
	int16_t x620 = INT16_MAX;
	volatile int32_t t154 = 15208978;

    t154 = (x617!=((x618!=x619)*x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MAX;
	static int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 787366401;

    t155 = (x621!=((x622!=x623)*x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = 156888113032823923LL;
	int64_t x628 = 283719467193282341LL;
	volatile int32_t t156 = 756;

    t156 = (x625!=((x626!=x627)*x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 69U;
	int64_t x630 = INT64_MIN;
	static int64_t x631 = INT64_MIN;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t157 = 185532;

    t157 = (x629!=((x630!=x631)*x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -610;
	int64_t x634 = -1LL;
	int8_t x636 = INT8_MIN;
	int32_t t158 = -236153;

    t158 = (x633!=((x634!=x635)*x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 89U;
	int32_t x638 = INT32_MIN;
	uint32_t x640 = 3467U;
	volatile int32_t t159 = -14;

    t159 = (x637!=((x638!=x639)*x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x643 = 404;
	uint32_t x644 = UINT32_MAX;
	static volatile int32_t t160 = 402974233;

    t160 = (x641!=((x642!=x643)*x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = INT16_MIN;
	int8_t x647 = 1;
	volatile int32_t t161 = 541;

    t161 = (x645!=((x646!=x647)*x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x650 = INT16_MIN;
	uint32_t x651 = 5335U;
	volatile uint64_t x652 = 7053LLU;
	static int32_t t162 = 365519;

    t162 = (x649!=((x650!=x651)*x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = -12;
	int32_t x654 = INT32_MIN;
	volatile uint8_t x655 = 7U;
	static int32_t x656 = INT32_MIN;
	int32_t t163 = -431132;

    t163 = (x653!=((x654!=x655)*x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = 0;
	uint32_t x660 = 32466U;

    t164 = (x657!=((x658!=x659)*x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int8_t x662 = 26;
	volatile int8_t x663 = -1;
	uint64_t x664 = UINT64_MAX;
	int32_t t165 = 481;

    t165 = (x661!=((x662!=x663)*x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	volatile int16_t x666 = -1;
	volatile int16_t x667 = INT16_MAX;
	int16_t x668 = -1;
	volatile int32_t t166 = -23;

    t166 = (x665!=((x666!=x667)*x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = -56295048672LL;
	uint16_t x671 = 24U;
	volatile int32_t t167 = 15517131;

    t167 = (x669!=((x670!=x671)*x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = INT16_MIN;
	static int64_t x675 = INT64_MIN;
	volatile int32_t t168 = 61;

    t168 = (x673!=((x674!=x675)*x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	static uint16_t x678 = 928U;
	static int16_t x679 = INT16_MAX;
	int8_t x680 = INT8_MAX;
	volatile int32_t t169 = -4441;

    t169 = (x677!=((x678!=x679)*x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = INT16_MAX;
	volatile int32_t x682 = -165627;
	static int8_t x683 = INT8_MIN;
	volatile int32_t t170 = -7774227;

    t170 = (x681!=((x682!=x683)*x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x687 = 837147602;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 1;

    t171 = (x685!=((x686!=x687)*x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	static int64_t x690 = -1LL;
	int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 2;

    t172 = (x689!=((x690!=x691)*x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 24582U;
	int16_t x694 = -55;
	static volatile uint32_t x696 = UINT32_MAX;
	int32_t t173 = 3034;

    t173 = (x693!=((x694!=x695)*x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x697 = INT32_MIN;
	uint32_t x698 = 31U;
	static int16_t x699 = 2177;
	int64_t x700 = INT64_MIN;
	volatile int32_t t174 = -1;

    t174 = (x697!=((x698!=x699)*x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = 588;
	static int64_t x703 = 108LL;
	static int64_t x704 = -30332282560975230LL;
	int32_t t175 = 1;

    t175 = (x701!=((x702!=x703)*x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x705 = 26534U;
	uint64_t x706 = 188586528721LLU;
	int64_t x708 = INT64_MAX;

    t176 = (x705!=((x706!=x707)*x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 51;
	uint16_t x710 = 11518U;
	int16_t x711 = INT16_MIN;
	volatile int32_t x712 = INT32_MIN;

    t177 = (x709!=((x710!=x711)*x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = UINT32_MAX;
	static int8_t x714 = -6;
	int8_t x716 = INT8_MIN;
	int32_t t178 = 967605;

    t178 = (x713!=((x714!=x715)*x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x719 = -1;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = 90;

    t179 = (x717!=((x718!=x719)*x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 98968975382382LLU;
	int8_t x722 = -1;
	uint16_t x723 = UINT16_MAX;
	volatile int32_t t180 = 55;

    t180 = (x721!=((x722!=x723)*x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -1LL;
	static int32_t x727 = INT32_MIN;
	uint64_t x728 = 4449556LLU;
	int32_t t181 = -15837;

    t181 = (x725!=((x726!=x727)*x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = INT32_MIN;
	int32_t x730 = -7601;
	volatile int16_t x732 = 1255;
	volatile int32_t t182 = 6;

    t182 = (x729!=((x730!=x731)*x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 6LLU;
	int8_t x735 = 38;

    t183 = (x733!=((x734!=x735)*x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 131875LLU;
	volatile int32_t x738 = INT32_MIN;
	static int32_t x739 = 0;
	uint32_t x740 = 254740457U;
	volatile int32_t t184 = -172;

    t184 = (x737!=((x738!=x739)*x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = 6004LL;
	uint8_t x743 = UINT8_MAX;
	static volatile int32_t t185 = -22;

    t185 = (x741!=((x742!=x743)*x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = 57220746;
	uint32_t x746 = 48856U;
	int32_t x747 = -860;
	volatile int16_t x748 = -2611;
	int32_t t186 = 72909280;

    t186 = (x745!=((x746!=x747)*x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = -1;
	static int32_t x752 = INT32_MIN;
	int32_t t187 = 434288;

    t187 = (x749!=((x750!=x751)*x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = INT16_MAX;
	int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MIN;
	volatile uint8_t x756 = 2U;
	static volatile int32_t t188 = 264432;

    t188 = (x753!=((x754!=x755)*x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	static uint64_t x758 = UINT64_MAX;
	int64_t x759 = -1LL;

    t189 = (x757!=((x758!=x759)*x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x762 = UINT16_MAX;
	volatile int16_t x763 = INT16_MIN;
	volatile int32_t t190 = 175198042;

    t190 = (x761!=((x762!=x763)*x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = INT32_MAX;
	uint64_t x766 = 0LLU;
	volatile int64_t x767 = -1LL;
	volatile int8_t x768 = INT8_MIN;
	static volatile int32_t t191 = -28473;

    t191 = (x765!=((x766!=x767)*x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	static int64_t x770 = INT64_MIN;
	static int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	volatile int32_t t192 = 10;

    t192 = (x769!=((x770!=x771)*x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 224U;
	int32_t x774 = INT32_MAX;
	int32_t x775 = -1;
	uint32_t x776 = 52317162U;
	static volatile int32_t t193 = -80252;

    t193 = (x773!=((x774!=x775)*x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x778 = -329113066LL;
	int16_t x779 = INT16_MAX;
	static volatile int32_t t194 = -23;

    t194 = (x777!=((x778!=x779)*x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 1824U;
	int32_t x782 = INT32_MAX;
	volatile int32_t t195 = 29319;

    t195 = (x781!=((x782!=x783)*x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	volatile int16_t x786 = -61;
	volatile int64_t x787 = -11052521780LL;
	int32_t t196 = -6;

    t196 = (x785!=((x786!=x787)*x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x789 = UINT32_MAX;
	int16_t x790 = INT16_MIN;
	int32_t x791 = INT32_MAX;
	static int16_t x792 = INT16_MIN;
	int32_t t197 = -18;

    t197 = (x789!=((x790!=x791)*x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MAX;
	uint16_t x794 = 6665U;
	uint64_t x795 = 119956943920LLU;
	int8_t x796 = -1;
	volatile int32_t t198 = 406;

    t198 = (x793!=((x794!=x795)*x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	int16_t x798 = -6068;
	int64_t x800 = INT64_MAX;
	static volatile int32_t t199 = -187880;

    t199 = (x797!=((x798!=x799)*x800));

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

