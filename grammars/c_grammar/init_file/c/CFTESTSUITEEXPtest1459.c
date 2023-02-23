
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

static volatile int8_t x4 = INT8_MAX;
int8_t x13 = -1;
static uint32_t x16 = UINT32_MAX;
int64_t x20 = INT64_MIN;
volatile uint16_t x22 = 185U;
static int64_t x23 = 3285565LL;
uint8_t x24 = UINT8_MAX;
static uint32_t x35 = UINT32_MAX;
volatile int64_t x37 = INT64_MIN;
int64_t t11 = 635269249093912824LL;
uint8_t x51 = 2U;
int64_t x60 = -1LL;
int16_t x75 = -12;
int32_t x82 = INT32_MIN;
volatile uint32_t t22 = 5U;
uint8_t x93 = 9U;
volatile uint8_t x100 = 34U;
uint64_t x115 = UINT64_MAX;
int8_t x116 = -9;
int64_t x121 = -2060654751526LL;
static int64_t x124 = -1LL;
static int64_t t30 = -12938830487748254LL;
volatile uint32_t x125 = 9616337U;
volatile uint32_t t31 = 15570701U;
uint32_t x135 = 0U;
static volatile int16_t x142 = -1;
static uint16_t x161 = 10U;
uint8_t x168 = 9U;
volatile int16_t x171 = 47;
int32_t t42 = INT32_MAX;
static uint16_t x180 = UINT16_MAX;
int32_t x182 = INT32_MIN;
int32_t t46 = -124;
uint64_t x194 = 15860672888434LLU;
volatile int64_t x196 = INT64_MIN;
volatile int8_t x199 = INT8_MIN;
static int16_t x213 = -2;
volatile int32_t t53 = 0;
volatile int64_t x220 = -3060149LL;
static int8_t x224 = -1;
int16_t x225 = -1;
int32_t t56 = 322055;
static int16_t x241 = INT16_MIN;
uint16_t x244 = 0U;
int32_t t60 = -1819712;
int64_t x253 = -1LL;
volatile uint32_t x254 = 38871U;
int8_t x260 = INT8_MIN;
static int8_t x271 = -1;
int32_t x275 = INT32_MAX;
uint64_t x277 = UINT64_MAX;
uint64_t x278 = 4141LLU;
volatile int32_t x279 = 10;
static int32_t x282 = INT32_MIN;
int8_t x284 = 58;
volatile int16_t x287 = -4;
uint16_t x291 = UINT16_MAX;
int64_t t73 = 719307815858012LL;
static int16_t x298 = -1;
int16_t x299 = INT16_MAX;
int32_t t74 = 152906;
uint16_t x310 = 4064U;
int32_t t79 = INT32_MIN;
int32_t x321 = INT32_MIN;
int8_t x340 = -1;
static volatile uint64_t t85 = UINT64_MAX;
int64_t x347 = INT64_MIN;
static uint8_t x350 = 0U;
int32_t t88 = -853;
uint16_t x358 = UINT16_MAX;
uint32_t x361 = UINT32_MAX;
int64_t x364 = INT64_MIN;
int16_t x368 = -1;
int32_t x373 = -49291;
volatile int32_t x375 = INT32_MAX;
uint32_t x377 = 1099U;
int8_t x381 = INT8_MIN;
volatile int32_t x386 = INT32_MIN;
int8_t x396 = INT8_MIN;
volatile int32_t t98 = INT32_MIN;
int8_t x401 = INT8_MIN;
static uint16_t x404 = UINT16_MAX;
static volatile int32_t t101 = 3943440;
uint32_t x411 = 53059824U;
int64_t x413 = -1LL;
int16_t x414 = -1;
int32_t x429 = -1;
uint8_t x430 = 59U;
volatile int32_t t107 = 0;
int64_t x433 = -7LL;
volatile uint8_t x435 = 47U;
uint16_t x437 = 29642U;
int64_t x442 = INT64_MAX;
uint32_t x447 = UINT32_MAX;
uint8_t x451 = 0U;
uint64_t t118 = 8290450037637348368LLU;
int64_t x480 = INT64_MIN;
static uint16_t x483 = UINT16_MAX;
static int16_t x488 = -86;
volatile int64_t t121 = INT64_MIN;
uint64_t x493 = 1025027566000262416LLU;
uint64_t t123 = 20592596576LLU;
int64_t x507 = -1921409307482891LL;
uint16_t x508 = 0U;
int32_t x509 = INT32_MIN;
uint32_t x512 = 1622195U;
uint16_t x513 = 4035U;
int64_t x514 = 6903368LL;
uint32_t x515 = UINT32_MAX;
int32_t x520 = 2301;
int64_t x527 = -1LL;
uint8_t x528 = 3U;
int16_t x530 = INT16_MIN;
int32_t t132 = -97936;
int64_t x535 = INT64_MAX;
int64_t x538 = INT64_MAX;
volatile int32_t x551 = INT32_MIN;
int8_t x552 = INT8_MAX;
volatile int32_t t137 = 3560;
volatile int64_t t138 = INT64_MAX;
int32_t t139 = 17;
int64_t x561 = 26422LL;
static int64_t x566 = -1LL;
int64_t x574 = 30420794461274725LL;
static int16_t x580 = -12216;
static int32_t t144 = 1;
uint16_t x587 = UINT16_MAX;
int32_t x590 = INT32_MAX;
int64_t x597 = INT64_MIN;
volatile uint8_t x612 = 113U;
int32_t t152 = INT32_MAX;
uint32_t x619 = 86289U;
uint64_t x622 = UINT64_MAX;
uint16_t x625 = 11215U;
int32_t x630 = INT32_MAX;
uint32_t x634 = UINT32_MAX;
uint8_t x636 = UINT8_MAX;
volatile uint8_t x637 = 0U;
volatile uint64_t x639 = 5187159085813455LLU;
uint32_t x641 = UINT32_MAX;
int64_t x643 = INT64_MAX;
volatile int32_t t161 = 1735;
int8_t x650 = INT8_MIN;
int32_t t162 = -55805;
int64_t x656 = INT64_MIN;
int32_t t163 = 4119060;
uint16_t x659 = 16238U;
uint32_t x663 = 43490536U;
int8_t x664 = INT8_MIN;
static uint32_t x668 = UINT32_MAX;
int64_t t166 = 3111009617349049LL;
int32_t x684 = INT32_MIN;
volatile int64_t x691 = INT64_MAX;
static int8_t x695 = -1;
int64_t t173 = INT64_MIN;
int64_t x707 = INT64_MIN;
int16_t x708 = -248;
uint64_t x710 = UINT64_MAX;
uint32_t x711 = 10680579U;
int8_t x712 = 9;
uint64_t x715 = 19651218727LLU;
static int8_t x718 = -1;
int16_t x719 = 1;
volatile int64_t x722 = INT64_MIN;
volatile int32_t x725 = -6;
static int16_t x732 = INT16_MIN;
volatile int32_t x748 = -1;
uint32_t x756 = 4014021U;
static int16_t x762 = INT16_MIN;
uint8_t x765 = UINT8_MAX;
volatile int32_t x767 = INT32_MAX;
volatile int16_t x771 = INT16_MIN;
uint64_t x773 = 0LLU;
volatile int64_t x774 = -372782LL;
int16_t x780 = INT16_MIN;
uint16_t x784 = 8015U;
static int16_t x785 = INT16_MIN;
int8_t x786 = -1;
int16_t x798 = -1;


void f0(void) {
    	uint8_t x1 = 0U;
	int8_t x2 = -1;
	int8_t x3 = -1;
	int32_t t0 = 0;

    t0 = (x1*((x2==x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MAX;
	volatile int8_t x7 = -1;
	int64_t x8 = 198942616749LL;
	int64_t t1 = INT64_MIN;

    t1 = (x5*((x6==x7)!=x8));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MAX;
	volatile int32_t x12 = -1;
	int64_t t2 = INT64_MIN;

    t2 = (x9*((x10==x11)!=x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 16325972007LLU;
	int8_t x15 = -15;
	int32_t t3 = 6834;

    t3 = (x13*((x14==x15)!=x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	volatile uint8_t x18 = 30U;
	volatile int16_t x19 = INT16_MAX;
	static volatile int32_t t4 = 412491;

    t4 = (x17*((x18==x19)!=x20));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -50;
	int32_t t5 = 1790107;

    t5 = (x21*((x22==x23)!=x24));

    if (t5 != -50) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 211965LL;
	uint16_t x26 = 6768U;
	volatile int8_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t6 = 0LL;

    t6 = (x25*((x26==x27)!=x28));

    if (t6 != 211965LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	int64_t x30 = -5548LL;
	int64_t x31 = 55456LL;
	int16_t x32 = 1021;
	int32_t t7 = -1673919;

    t7 = (x29*((x30==x31)!=x32));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = -5160;
	int32_t x36 = -1;
	volatile int32_t t8 = -114246557;

    t8 = (x33*((x34==x35)!=x36));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = UINT8_MAX;
	int32_t x39 = 13263;
	volatile int16_t x40 = INT16_MIN;
	int64_t t9 = INT64_MIN;

    t9 = (x37*((x38==x39)!=x40));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 159152328LL;
	int8_t x42 = 2;
	int64_t x43 = INT64_MAX;
	uint16_t x44 = 1U;
	volatile int64_t t10 = -239756146475LL;

    t10 = (x41*((x42==x43)!=x44));

    if (t10 != 159152328LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	uint64_t x46 = UINT64_MAX;
	static int16_t x47 = INT16_MAX;
	static volatile int8_t x48 = INT8_MAX;

    t11 = (x45*((x46==x47)!=x48));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	static int32_t x50 = -510474;
	int64_t x52 = 26997336949766090LL;
	static int32_t t12 = 118;

    t12 = (x49*((x50==x51)!=x52));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -31;
	int64_t x54 = INT64_MAX;
	int32_t x55 = -728;
	int64_t x56 = INT64_MAX;
	int32_t t13 = 225;

    t13 = (x53*((x54==x55)!=x56));

    if (t13 != -31) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	uint8_t x58 = 1U;
	int8_t x59 = INT8_MIN;
	int32_t t14 = 6790;

    t14 = (x57*((x58==x59)!=x60));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int8_t x62 = -1;
	int8_t x63 = INT8_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t15 = INT32_MIN;

    t15 = (x61*((x62==x63)!=x64));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 400U;
	int16_t x66 = INT16_MAX;
	int32_t x67 = -1;
	static uint32_t x68 = 633733U;
	volatile int32_t t16 = 0;

    t16 = (x65*((x66==x67)!=x68));

    if (t16 != 400) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 1;
	int16_t x70 = -3;
	uint16_t x71 = UINT16_MAX;
	volatile int8_t x72 = -6;
	int32_t t17 = -127;

    t17 = (x69*((x70==x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x73 = UINT8_MAX;
	uint8_t x74 = 30U;
	int16_t x76 = -1;
	volatile int32_t t18 = -559;

    t18 = (x73*((x74==x75)!=x76));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = 33283745713072576LL;
	int32_t x80 = INT32_MAX;
	int32_t t19 = 0;

    t19 = (x77*((x78==x79)!=x80));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MAX;
	int8_t x83 = INT8_MAX;
	int8_t x84 = -1;
	static volatile int32_t t20 = INT32_MAX;

    t20 = (x81*((x82==x83)!=x84));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int32_t x86 = 437747;
	static volatile int32_t x87 = -181652946;
	int8_t x88 = -1;
	int32_t t21 = 659841;

    t21 = (x85*((x86==x87)!=x88));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 1U;
	int32_t x90 = INT32_MIN;
	static int32_t x91 = -43265;
	volatile int16_t x92 = -51;

    t22 = (x89*((x90==x91)!=x92));

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x94 = -1;
	volatile int8_t x95 = INT8_MAX;
	volatile int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 61466811;

    t23 = (x93*((x94==x95)!=x96));

    if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = 0;
	int32_t t24 = -114;

    t24 = (x97*((x98==x99)!=x100));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static uint16_t x102 = UINT16_MAX;
	int64_t x103 = -1143120LL;
	int16_t x104 = 953;
	int64_t t25 = INT64_MIN;

    t25 = (x101*((x102==x103)!=x104));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x105 = 15693U;
	int32_t x106 = INT32_MAX;
	static int64_t x107 = INT64_MAX;
	volatile uint8_t x108 = 27U;
	static volatile int32_t t26 = -105;

    t26 = (x105*((x106==x107)!=x108));

    if (t26 != 15693) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	static uint64_t x110 = 2981699575733LLU;
	volatile uint16_t x111 = 237U;
	volatile int64_t x112 = INT64_MIN;
	int32_t t27 = -13311522;

    t27 = (x109*((x110==x111)!=x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	int8_t x114 = -3;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x113*((x114==x115)!=x116));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint64_t x118 = 1805323418732393504LLU;
	static uint16_t x119 = 0U;
	volatile int32_t x120 = -1;
	static volatile int32_t t29 = 839738;

    t29 = (x117*((x118==x119)!=x120));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = -1;
	int8_t x123 = INT8_MIN;

    t30 = (x121*((x122==x123)!=x124));

    if (t30 != -2060654751526LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x126 = 5U;
	int64_t x127 = -3658998LL;
	int64_t x128 = -3291974962LL;

    t31 = (x125*((x126==x127)!=x128));

    if (t31 != 9616337U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int8_t x131 = -1;
	uint32_t x132 = 25349917U;
	volatile int64_t t32 = INT64_MAX;

    t32 = (x129*((x130==x131)!=x132));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = UINT64_MAX;
	static uint64_t x134 = 527576835162967LLU;
	int8_t x136 = -22;
	uint64_t t33 = UINT64_MAX;

    t33 = (x133*((x134==x135)!=x136));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 80U;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = 181918219878693173LL;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 63361928;

    t34 = (x137*((x138==x139)!=x140));

    if (t34 != 80) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	volatile int16_t x144 = INT16_MIN;
	int64_t t35 = INT64_MAX;

    t35 = (x141*((x142==x143)!=x144));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 1108872383U;
	uint8_t x146 = 89U;
	uint32_t x147 = 25472787U;
	uint8_t x148 = 46U;
	uint32_t t36 = 124557927U;

    t36 = (x145*((x146==x147)!=x148));

    if (t36 != 1108872383U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = UINT8_MAX;
	static volatile int16_t x151 = -1;
	int64_t x152 = INT64_MAX;
	static volatile uint32_t t37 = UINT32_MAX;

    t37 = (x149*((x150==x151)!=x152));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = 3860410336608164714LLU;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MAX;
	uint64_t t38 = 88241133611LLU;

    t38 = (x153*((x154==x155)!=x156));

    if (t38 != 3860410336608164714LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 116U;
	uint16_t x160 = UINT16_MAX;
	static uint32_t t39 = UINT32_MAX;

    t39 = (x157*((x158==x159)!=x160));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 1U;
	int32_t t40 = -3941448;

    t40 = (x161*((x162==x163)!=x164));

    if (t40 != 10) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -6868729LL;
	int32_t x166 = 5691;
	int32_t x167 = INT32_MIN;
	volatile int64_t t41 = 7LL;

    t41 = (x165*((x166==x167)!=x168));

    if (t41 != -6868729LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MAX;
	int32_t x170 = -1;
	int64_t x172 = 6840LL;

    t42 = (x169*((x170==x171)!=x172));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -5123;
	int32_t x174 = -1213;
	int32_t x175 = 254546344;
	int64_t x176 = 313058862749676LL;
	int32_t t43 = -121222308;

    t43 = (x173*((x174==x175)!=x176));

    if (t43 != -5123) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = 101;
	int32_t x179 = -13986;
	volatile int32_t t44 = -567585796;

    t44 = (x177*((x178==x179)!=x180));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -1;
	uint64_t x183 = 1054564934815399LLU;
	static volatile uint64_t x184 = UINT64_MAX;
	static int32_t t45 = -15726;

    t45 = (x181*((x182==x183)!=x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = -1;
	uint8_t x186 = 1U;
	volatile uint16_t x187 = 3848U;
	static int64_t x188 = INT64_MIN;

    t46 = (x185*((x186==x187)!=x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	volatile int8_t x192 = INT8_MAX;
	static int32_t t47 = 13689240;

    t47 = (x189*((x190==x191)!=x192));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	int32_t x195 = -855;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x193*((x194==x195)!=x196));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = 3;
	volatile int64_t x198 = INT64_MIN;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = -7906545;

    t49 = (x197*((x198==x199)!=x200));

    if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 52U;
	int16_t x202 = INT16_MAX;
	uint64_t x203 = 8571200214148075528LLU;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 185078745;

    t50 = (x201*((x202==x203)!=x204));

    if (t50 != 52) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -1LL;
	volatile uint16_t x207 = UINT16_MAX;
	uint32_t x208 = UINT32_MAX;
	int32_t t51 = 13774;

    t51 = (x205*((x206==x207)!=x208));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = 1;
	uint64_t x210 = 27463471555281LLU;
	volatile int32_t x211 = -1;
	static uint64_t x212 = UINT64_MAX;
	static volatile int32_t t52 = -6;

    t52 = (x209*((x210==x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x214 = 1;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MAX;

    t53 = (x213*((x214==x215)!=x216));

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint8_t x218 = 26U;
	int64_t x219 = -1552386131LL;
	volatile int64_t t54 = INT64_MIN;

    t54 = (x217*((x218==x219)!=x220));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MIN;
	int32_t x222 = 578;
	int64_t x223 = -1LL;
	int64_t t55 = INT64_MIN;

    t55 = (x221*((x222==x223)!=x224));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x226 = 6440U;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;

    t56 = (x225*((x226==x227)!=x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 5U;
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = INT32_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = 10;

    t57 = (x229*((x230==x231)!=x232));

    if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 1759932138633LL;
	volatile uint32_t x234 = 119822663U;
	int32_t x235 = INT32_MIN;
	volatile int64_t x236 = -485721736079810LL;
	int64_t t58 = 1856226015618326LL;

    t58 = (x233*((x234==x235)!=x236));

    if (t58 != 1759932138633LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int64_t x238 = -1LL;
	uint64_t x239 = 129025LLU;
	int16_t x240 = 1011;
	uint32_t t59 = UINT32_MAX;

    t59 = (x237*((x238==x239)!=x240));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x242 = 9U;
	int16_t x243 = INT16_MIN;

    t60 = (x241*((x242==x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	uint8_t x246 = 117U;
	int16_t x247 = -1;
	int32_t x248 = -1;
	static volatile int32_t t61 = 124347;

    t61 = (x245*((x246==x247)!=x248));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 25926U;
	int64_t x250 = -2095810491024685LL;
	int8_t x251 = -1;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 8006015;

    t62 = (x249*((x250==x251)!=x252));

    if (t62 != 25926) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x255 = INT64_MIN;
	int16_t x256 = 0;
	static int64_t t63 = -628LL;

    t63 = (x253*((x254==x255)!=x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	int8_t x258 = 0;
	volatile int32_t x259 = -1;
	volatile int32_t t64 = 30230;

    t64 = (x257*((x258==x259)!=x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 1U;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = -12582029;
	static int64_t x264 = INT64_MIN;
	static int32_t t65 = 2874;

    t65 = (x261*((x262==x263)!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int16_t x266 = 3;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = INT32_MAX;

    t66 = (x265*((x266==x267)!=x268));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 296LLU;
	int32_t x270 = 50;
	uint16_t x272 = 3U;
	uint64_t t67 = 11423628909422LLU;

    t67 = (x269*((x270==x271)!=x272));

    if (t67 != 296LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	int16_t x274 = -1;
	uint16_t x276 = 472U;
	static int32_t t68 = -86;

    t68 = (x273*((x274==x275)!=x276));

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x280 = 110U;
	volatile uint64_t t69 = UINT64_MAX;

    t69 = (x277*((x278==x279)!=x280));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	int32_t x283 = -143834580;
	volatile int32_t t70 = 10332836;

    t70 = (x281*((x282==x283)!=x284));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 1014226U;
	static volatile uint8_t x286 = 28U;
	volatile int16_t x288 = INT16_MAX;
	uint32_t t71 = 6U;

    t71 = (x285*((x286==x287)!=x288));

    if (t71 != 1014226U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MAX;
	int8_t x290 = 1;
	int8_t x292 = 0;
	int32_t t72 = 2;

    t72 = (x289*((x290==x291)!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -11348LL;
	int32_t x294 = INT32_MAX;
	static uint64_t x295 = 2453LLU;
	int32_t x296 = -3154480;

    t73 = (x293*((x294==x295)!=x296));

    if (t73 != -11348LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	uint32_t x300 = 14587U;

    t74 = (x297*((x298==x299)!=x300));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	uint64_t x302 = 2906224869563168422LLU;
	int8_t x303 = 27;
	uint64_t x304 = 24759430LLU;
	static volatile uint64_t t75 = UINT64_MAX;

    t75 = (x301*((x302==x303)!=x304));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = 1U;
	int8_t x306 = INT8_MIN;
	int64_t x307 = -1LL;
	int32_t x308 = -32491161;
	volatile uint32_t t76 = 12790U;

    t76 = (x305*((x306==x307)!=x308));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 5907U;
	int32_t x311 = INT32_MAX;
	int32_t x312 = -507149;
	int32_t t77 = 32218411;

    t77 = (x309*((x310==x311)!=x312));

    if (t77 != 5907) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile int8_t x314 = INT8_MIN;
	static volatile uint8_t x315 = 91U;
	static int32_t x316 = INT32_MIN;
	uint64_t t78 = UINT64_MAX;

    t78 = (x313*((x314==x315)!=x316));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	static uint64_t x318 = 1054931976096LLU;
	uint64_t x319 = 392601LLU;
	static uint16_t x320 = 142U;

    t79 = (x317*((x318==x319)!=x320));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	static int64_t x324 = INT64_MIN;
	static volatile int32_t t80 = INT32_MIN;

    t80 = (x321*((x322==x323)!=x324));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 93294U;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = 39867832LL;
	int32_t x328 = INT32_MIN;
	static volatile uint32_t t81 = 2892951U;

    t81 = (x325*((x326==x327)!=x328));

    if (t81 != 93294U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = UINT16_MAX;
	static int16_t x332 = 12565;
	static int32_t t82 = -207420632;

    t82 = (x329*((x330==x331)!=x332));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	volatile int8_t x335 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x333*((x334==x335)!=x336));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 230;
	int8_t x338 = -14;
	volatile int32_t x339 = INT32_MAX;
	int32_t t84 = 118985;

    t84 = (x337*((x338==x339)!=x340));

    if (t84 != 230) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = UINT64_MAX;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	volatile int8_t x344 = 1;

    t85 = (x341*((x342==x343)!=x344));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	uint32_t x348 = 25U;
	static uint64_t t86 = UINT64_MAX;

    t86 = (x345*((x346==x347)!=x348));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	int16_t x351 = -9;
	volatile int16_t x352 = 3;
	volatile int64_t t87 = 1LL;

    t87 = (x349*((x350==x351)!=x352));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	int64_t x355 = INT64_MAX;
	static volatile int64_t x356 = INT64_MIN;

    t88 = (x353*((x354==x355)!=x356));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 14967166LLU;
	int64_t x359 = INT64_MAX;
	int64_t x360 = INT64_MIN;
	uint64_t t89 = 461327021154747LLU;

    t89 = (x357*((x358==x359)!=x360));

    if (t89 != 14967166LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	volatile uint32_t t90 = UINT32_MAX;

    t90 = (x361*((x362==x363)!=x364));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;
	int32_t t91 = -2;

    t91 = (x365*((x366==x367)!=x368));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	static uint32_t x370 = 195U;
	int16_t x371 = 946;
	uint8_t x372 = 15U;
	volatile int32_t t92 = -7480;

    t92 = (x369*((x370==x371)!=x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x374 = -1LL;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -46839;

    t93 = (x373*((x374==x375)!=x376));

    if (t93 != -49291) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x378 = UINT16_MAX;
	int64_t x379 = -1LL;
	int64_t x380 = INT64_MIN;
	volatile uint32_t t94 = 412105012U;

    t94 = (x377*((x378==x379)!=x380));

    if (t94 != 1099U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = -1;
	uint8_t x383 = 5U;
	int16_t x384 = 14;
	int32_t t95 = -2277;

    t95 = (x381*((x382==x383)!=x384));

    if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = 28;
	int64_t t96 = INT64_MIN;

    t96 = (x385*((x386==x387)!=x388));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 126182183U;
	int8_t x390 = INT8_MIN;
	volatile int8_t x391 = INT8_MIN;
	volatile int16_t x392 = INT16_MIN;
	uint32_t t97 = 411U;

    t97 = (x389*((x390==x391)!=x392));

    if (t97 != 126182183U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = -16;
	volatile int32_t x395 = INT32_MAX;

    t98 = (x393*((x394==x395)!=x396));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	static int64_t x398 = INT64_MIN;
	static uint8_t x399 = 6U;
	static int16_t x400 = -1;
	static int64_t t99 = INT64_MAX;

    t99 = (x397*((x398==x399)!=x400));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = -102531LL;
	int8_t x403 = INT8_MIN;
	static int32_t t100 = -2;

    t100 = (x401*((x402==x403)!=x404));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = 3871;
	static volatile uint64_t x406 = 291383LLU;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = UINT8_MAX;

    t101 = (x405*((x406==x407)!=x408));

    if (t101 != 3871) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -56685;
	uint8_t x410 = UINT8_MAX;
	uint32_t x412 = UINT32_MAX;
	static int32_t t102 = -476;

    t102 = (x409*((x410==x411)!=x412));

    if (t102 != -56685) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x415 = -1;
	int32_t x416 = -15883319;
	int64_t t103 = -1633191151951272140LL;

    t103 = (x413*((x414==x415)!=x416));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 34U;
	int32_t x418 = -1;
	int32_t x419 = -1028;
	int8_t x420 = -42;
	volatile int32_t t104 = 25877;

    t104 = (x417*((x418==x419)!=x420));

    if (t104 != 34) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	static int8_t x423 = 3;
	int32_t x424 = -763700;
	volatile int64_t t105 = INT64_MIN;

    t105 = (x421*((x422==x423)!=x424));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 4U;
	int64_t x426 = -1LL;
	uint16_t x427 = 4026U;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = 1958988;

    t106 = (x425*((x426==x427)!=x428));

    if (t106 != 4) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x431 = 1241815LL;
	volatile uint16_t x432 = 25190U;

    t107 = (x429*((x430==x431)!=x432));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = -52931;
	int16_t x436 = INT16_MAX;
	static volatile int64_t t108 = 332LL;

    t108 = (x433*((x434==x435)!=x436));

    if (t108 != -7LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = 2698;
	int16_t x439 = -147;
	uint32_t x440 = 1065U;
	int32_t t109 = 110;

    t109 = (x437*((x438==x439)!=x440));

    if (t109 != 29642) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int32_t x443 = 0;
	int16_t x444 = INT16_MIN;
	int32_t t110 = -7;

    t110 = (x441*((x442==x443)!=x444));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int8_t x446 = INT8_MIN;
	int8_t x448 = 0;
	int32_t t111 = 1014;

    t111 = (x445*((x446==x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	volatile int64_t x450 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t112 = 5908;

    t112 = (x449*((x450==x451)!=x452));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int64_t x454 = INT64_MIN;
	int32_t x455 = -1;
	int64_t x456 = INT64_MIN;
	static uint64_t t113 = UINT64_MAX;

    t113 = (x453*((x454==x455)!=x456));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = INT32_MAX;
	static uint64_t x458 = 497266474LLU;
	int16_t x459 = INT16_MIN;
	int8_t x460 = -2;
	static int32_t t114 = INT32_MAX;

    t114 = (x457*((x458==x459)!=x460));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 1434165153U;
	volatile int16_t x462 = INT16_MIN;
	uint8_t x463 = 41U;
	int64_t x464 = INT64_MIN;
	uint32_t t115 = 124491267U;

    t115 = (x461*((x462==x463)!=x464));

    if (t115 != 1434165153U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 9LLU;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = 80U;
	volatile int32_t t116 = -197183065;

    t116 = (x465*((x466==x467)!=x468));

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -215166537264031045LL;
	int16_t x470 = INT16_MIN;
	static volatile int64_t x471 = -382231223116912110LL;
	uint8_t x472 = UINT8_MAX;
	volatile int64_t t117 = -139LL;

    t117 = (x469*((x470==x471)!=x472));

    if (t117 != -215166537264031045LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 903480741948LLU;
	static uint64_t x474 = 3768597815191LLU;
	static volatile int32_t x475 = 172074;
	uint64_t x476 = UINT64_MAX;

    t118 = (x473*((x474==x475)!=x476));

    if (t118 != 903480741948LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = UINT64_MAX;
	volatile uint8_t x478 = 119U;
	int32_t x479 = -494077;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (x477*((x478==x479)!=x480));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	int64_t x482 = INT64_MAX;
	int16_t x484 = 185;
	volatile uint64_t t120 = UINT64_MAX;

    t120 = (x481*((x482==x483)!=x484));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	int16_t x486 = INT16_MAX;
	int32_t x487 = INT32_MIN;

    t121 = (x485*((x486==x487)!=x488));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MIN;
	volatile int32_t x490 = INT32_MAX;
	uint64_t x491 = 173781341LLU;
	int8_t x492 = 0;
	volatile int32_t t122 = -12;

    t122 = (x489*((x490==x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = 21449;
	int8_t x495 = INT8_MIN;
	uint16_t x496 = 36U;

    t123 = (x493*((x494==x495)!=x496));

    if (t123 != 1025027566000262416LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	uint8_t x498 = 2U;
	int8_t x499 = -33;
	uint32_t x500 = 27885U;
	int64_t t124 = INT64_MIN;

    t124 = (x497*((x498==x499)!=x500));

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MAX;
	int16_t x502 = INT16_MIN;
	static volatile int32_t x503 = INT32_MAX;
	static volatile uint32_t x504 = 32855U;
	volatile int32_t t125 = 24710;

    t125 = (x501*((x502==x503)!=x504));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = 13191385;
	uint8_t x506 = UINT8_MAX;
	volatile int32_t t126 = 6162;

    t126 = (x505*((x506==x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x510 = 1;
	static volatile int8_t x511 = 1;
	int32_t t127 = INT32_MIN;

    t127 = (x509*((x510==x511)!=x512));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x516 = 22U;
	static volatile int32_t t128 = -343627436;

    t128 = (x513*((x514==x515)!=x516));

    if (t128 != 4035) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (x517*((x518==x519)!=x520));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	uint8_t x522 = UINT8_MAX;
	uint32_t x523 = 4760750U;
	int8_t x524 = -5;
	int32_t t130 = 130928;

    t130 = (x521*((x522==x523)!=x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	int16_t x526 = INT16_MIN;
	volatile int32_t t131 = 169242330;

    t131 = (x525*((x526==x527)!=x528));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	static int16_t x531 = 19;
	int64_t x532 = 3707035LL;

    t132 = (x529*((x530==x531)!=x532));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int64_t x534 = INT64_MIN;
	uint8_t x536 = 1U;
	int32_t t133 = -10999;

    t133 = (x533*((x534==x535)!=x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = UINT8_MAX;
	uint64_t x539 = UINT64_MAX;
	uint32_t x540 = UINT32_MAX;
	int32_t t134 = 6980934;

    t134 = (x537*((x538==x539)!=x540));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	uint8_t x542 = 10U;
	static int64_t x543 = INT64_MIN;
	volatile uint8_t x544 = UINT8_MAX;
	static int32_t t135 = INT32_MAX;

    t135 = (x541*((x542==x543)!=x544));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -1LL;
	int16_t x546 = -1;
	int64_t x547 = INT64_MAX;
	int16_t x548 = INT16_MIN;
	volatile int64_t t136 = 2189812094989LL;

    t136 = (x545*((x546==x547)!=x548));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -1;
	uint8_t x550 = 1U;

    t137 = (x549*((x550==x551)!=x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int64_t x554 = -1LL;
	int64_t x555 = INT64_MIN;
	uint32_t x556 = 12U;

    t138 = (x553*((x554==x555)!=x556));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	int16_t x558 = -1;
	int32_t x559 = 120333;
	uint8_t x560 = 22U;

    t139 = (x557*((x558==x559)!=x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = 952;
	int64_t x563 = INT64_MAX;
	static int32_t x564 = INT32_MIN;
	volatile int64_t t140 = 264337188441LL;

    t140 = (x561*((x562==x563)!=x564));

    if (t140 != 26422LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 13;
	int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MIN;
	volatile int32_t t141 = -258;

    t141 = (x565*((x566==x567)!=x568));

    if (t141 != 13) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 350;
	volatile uint64_t x570 = 171075929271345843LLU;
	int64_t x571 = 1935LL;
	int16_t x572 = 3743;
	int32_t t142 = 1237;

    t142 = (x569*((x570==x571)!=x572));

    if (t142 != 350) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 689U;
	int64_t x575 = INT64_MAX;
	volatile int64_t x576 = INT64_MAX;
	volatile uint32_t t143 = 2464375U;

    t143 = (x573*((x574==x575)!=x576));

    if (t143 != 689U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -7892454;
	uint8_t x578 = 1U;
	int8_t x579 = -1;

    t144 = (x577*((x578==x579)!=x580));

    if (t144 != -7892454) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = INT32_MIN;
	int64_t x582 = INT64_MIN;
	static volatile int64_t x583 = -1LL;
	int64_t x584 = INT64_MAX;
	static volatile int32_t t145 = INT32_MIN;

    t145 = (x581*((x582==x583)!=x584));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 2148;
	int64_t x586 = -728401767LL;
	uint64_t x588 = UINT64_MAX;
	int32_t t146 = 0;

    t146 = (x585*((x586==x587)!=x588));

    if (t146 != 2148) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 16922071;
	int32_t x591 = INT32_MAX;
	int64_t x592 = 15LL;
	int32_t t147 = -3110;

    t147 = (x589*((x590==x591)!=x592));

    if (t147 != 16922071) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	uint32_t x594 = 0U;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = INT8_MIN;
	uint32_t t148 = UINT32_MAX;

    t148 = (x593*((x594==x595)!=x596));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x598 = UINT16_MAX;
	volatile uint16_t x599 = UINT16_MAX;
	int16_t x600 = 4618;
	int64_t t149 = INT64_MIN;

    t149 = (x597*((x598==x599)!=x600));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	static int16_t x602 = INT16_MIN;
	uint32_t x603 = 331U;
	int8_t x604 = 13;
	volatile int64_t t150 = INT64_MAX;

    t150 = (x601*((x602==x603)!=x604));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	volatile uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 2U;
	static volatile int8_t x608 = 40;
	static volatile int64_t t151 = INT64_MIN;

    t151 = (x605*((x606==x607)!=x608));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	int16_t x610 = -1;
	uint16_t x611 = 15U;

    t152 = (x609*((x610==x611)!=x612));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	static int16_t x614 = INT16_MAX;
	static int16_t x615 = -2741;
	volatile int32_t x616 = 35;
	volatile int32_t t153 = INT32_MIN;

    t153 = (x613*((x614==x615)!=x616));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 6U;
	int32_t x618 = INT32_MIN;
	static uint32_t x620 = UINT32_MAX;
	int32_t t154 = 78;

    t154 = (x617*((x618==x619)!=x620));

    if (t154 != 6) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x621 = -1LL;
	volatile uint8_t x623 = 2U;
	static int64_t x624 = 9522LL;
	int64_t t155 = 64382972379LL;

    t155 = (x621*((x622==x623)!=x624));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 0U;
	int32_t x627 = INT32_MAX;
	int64_t x628 = 1319743064478635616LL;
	int32_t t156 = 2478569;

    t156 = (x625*((x626==x627)!=x628));

    if (t156 != 11215) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 1111754161U;
	uint16_t x631 = 339U;
	static int16_t x632 = 12;
	volatile uint32_t t157 = 29U;

    t157 = (x629*((x630==x631)!=x632));

    if (t157 != 1111754161U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = 31278LL;
	uint64_t x635 = 2015175LLU;
	int64_t t158 = 3LL;

    t158 = (x633*((x634==x635)!=x636));

    if (t158 != 31278LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x638 = 3524;
	uint64_t x640 = UINT64_MAX;
	int32_t t159 = -4;

    t159 = (x637*((x638==x639)!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = -1;
	int64_t x644 = INT64_MAX;
	static uint32_t t160 = UINT32_MAX;

    t160 = (x641*((x642==x643)!=x644));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 8U;
	int16_t x646 = 3430;
	volatile int64_t x647 = INT64_MAX;
	int32_t x648 = 621;

    t161 = (x645*((x646==x647)!=x648));

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile uint16_t x651 = 3276U;
	volatile int32_t x652 = INT32_MIN;

    t162 = (x649*((x650==x651)!=x652));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	int16_t x654 = INT16_MIN;
	int16_t x655 = 1;

    t163 = (x653*((x654==x655)!=x656));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = 37;
	uint8_t x658 = 0U;
	volatile int16_t x660 = 690;
	int32_t t164 = -64602412;

    t164 = (x657*((x658==x659)!=x660));

    if (t164 != 37) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = INT64_MIN;
	int32_t t165 = INT32_MIN;

    t165 = (x661*((x662==x663)!=x664));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = -1LL;
	uint32_t x666 = 258723U;
	uint32_t x667 = 239U;

    t166 = (x665*((x666==x667)!=x668));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = INT64_MAX;
	static int32_t x670 = INT32_MIN;
	int8_t x671 = INT8_MIN;
	volatile uint32_t x672 = 1U;
	static int64_t t167 = INT64_MAX;

    t167 = (x669*((x670==x671)!=x672));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MIN;
	static int32_t x674 = INT32_MAX;
	uint32_t x675 = UINT32_MAX;
	volatile int8_t x676 = 1;
	int32_t t168 = -738085161;

    t168 = (x673*((x674==x675)!=x676));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MIN;
	volatile int64_t x678 = 1357437644498654544LL;
	static int64_t x679 = -67003768956LL;
	int16_t x680 = INT16_MAX;
	volatile int32_t t169 = INT32_MIN;

    t169 = (x677*((x678==x679)!=x680));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	static uint64_t x682 = 181090492729358467LLU;
	uint32_t x683 = 269047528U;
	static volatile int32_t t170 = INT32_MIN;

    t170 = (x681*((x682==x683)!=x684));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MIN;
	static uint16_t x688 = 189U;
	volatile int32_t t171 = INT32_MIN;

    t171 = (x685*((x686==x687)!=x688));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 11;
	int16_t x690 = 282;
	int32_t x692 = -32;
	int32_t t172 = -60792540;

    t172 = (x689*((x690==x691)!=x692));

    if (t172 != 11) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int16_t x694 = INT16_MIN;
	volatile int8_t x696 = -1;

    t173 = (x693*((x694==x695)!=x696));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile uint32_t x698 = 25U;
	uint32_t x699 = UINT32_MAX;
	uint32_t x700 = 11U;
	static volatile uint64_t t174 = UINT64_MAX;

    t174 = (x697*((x698==x699)!=x700));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -102649947014545769LL;
	int8_t x702 = 4;
	int8_t x703 = 1;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int64_t t175 = 567415548185LL;

    t175 = (x701*((x702==x703)!=x704));

    if (t175 != -102649947014545769LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MIN;
	int32_t t176 = 151;

    t176 = (x705*((x706==x707)!=x708));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x709 = 2891;
	volatile int32_t t177 = -1;

    t177 = (x709*((x710==x711)!=x712));

    if (t177 != 2891) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	volatile int64_t x714 = INT64_MIN;
	uint16_t x716 = 1200U;
	volatile int32_t t178 = 70;

    t178 = (x713*((x714==x715)!=x716));

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 55566;
	uint16_t x720 = 6U;
	static int32_t t179 = -217290;

    t179 = (x717*((x718==x719)!=x720));

    if (t179 != 55566) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 479LLU;
	uint64_t x723 = 902520765442LLU;
	uint64_t x724 = 23575280043224LLU;
	uint64_t t180 = 6890467660257LLU;

    t180 = (x721*((x722==x723)!=x724));

    if (t180 != 479LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MIN;
	uint32_t x727 = 64604149U;
	int8_t x728 = -17;
	volatile int32_t t181 = -261456;

    t181 = (x725*((x726==x727)!=x728));

    if (t181 != -6) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 66U;
	uint32_t x730 = UINT32_MAX;
	uint32_t x731 = 83545012U;
	volatile int32_t t182 = -155471504;

    t182 = (x729*((x730==x731)!=x732));

    if (t182 != 66) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -3;
	uint16_t x734 = 0U;
	volatile uint64_t x735 = 738919LLU;
	int16_t x736 = -1;
	int32_t t183 = -312;

    t183 = (x733*((x734==x735)!=x736));

    if (t183 != -3) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = 1955LL;
	int16_t x738 = -6297;
	static int32_t x739 = -1;
	int16_t x740 = INT16_MIN;
	static volatile int64_t t184 = 6610646256851LL;

    t184 = (x737*((x738==x739)!=x740));

    if (t184 != 1955LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	uint16_t x742 = 1U;
	volatile int64_t x743 = -1LL;
	int16_t x744 = -7829;
	static int32_t t185 = 129678;

    t185 = (x741*((x742==x743)!=x744));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = -15949860505403LL;
	int16_t x746 = INT16_MAX;
	static int16_t x747 = -1;
	static volatile int64_t t186 = -229438287870370LL;

    t186 = (x745*((x746==x747)!=x748));

    if (t186 != -15949860505403LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 484469586U;
	uint32_t x750 = 143009U;
	volatile uint8_t x751 = 120U;
	uint8_t x752 = 100U;
	uint32_t t187 = 1372413U;

    t187 = (x749*((x750==x751)!=x752));

    if (t187 != 484469586U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = -1;
	static int64_t x755 = INT64_MAX;
	volatile int32_t t188 = -6914774;

    t188 = (x753*((x754==x755)!=x756));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	static int16_t x758 = -57;
	int64_t x759 = -1LL;
	uint32_t x760 = 27971U;
	int32_t t189 = INT32_MIN;

    t189 = (x757*((x758==x759)!=x760));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	uint32_t x763 = UINT32_MAX;
	volatile int64_t x764 = INT64_MAX;
	volatile int32_t t190 = INT32_MIN;

    t190 = (x761*((x762==x763)!=x764));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = 3367;
	int16_t x768 = INT16_MAX;
	volatile int32_t t191 = 4363420;

    t191 = (x765*((x766==x767)!=x768));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 296719U;
	int32_t x770 = INT32_MIN;
	int8_t x772 = -1;
	uint32_t t192 = 28503U;

    t192 = (x769*((x770==x771)!=x772));

    if (t192 != 296719U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x775 = INT16_MAX;
	int32_t x776 = 83;
	uint64_t t193 = 2515674461LLU;

    t193 = (x773*((x774==x775)!=x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	int16_t x778 = INT16_MAX;
	volatile int64_t x779 = INT64_MAX;
	volatile int32_t t194 = 314;

    t194 = (x777*((x778==x779)!=x780));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	int64_t x782 = INT64_MIN;
	uint8_t x783 = 0U;
	volatile int32_t t195 = 16633;

    t195 = (x781*((x782==x783)!=x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x787 = INT8_MIN;
	static volatile uint32_t x788 = 29U;
	int32_t t196 = 254894815;

    t196 = (x785*((x786==x787)!=x788));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = 116;
	uint32_t x790 = 28074827U;
	volatile uint8_t x791 = UINT8_MAX;
	static int8_t x792 = -1;
	volatile int32_t t197 = 60595784;

    t197 = (x789*((x790==x791)!=x792));

    if (t197 != 116) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 3985863561803158486LLU;
	int64_t x794 = INT64_MIN;
	uint8_t x795 = UINT8_MAX;
	uint16_t x796 = UINT16_MAX;
	volatile uint64_t t198 = 942323049580232596LLU;

    t198 = (x793*((x794==x795)!=x796));

    if (t198 != 3985863561803158486LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	volatile uint16_t x799 = 714U;
	int64_t x800 = INT64_MAX;
	int64_t t199 = INT64_MAX;

    t199 = (x797*((x798==x799)!=x800));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

