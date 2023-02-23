
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

int16_t x2 = INT16_MAX;
static int32_t x8 = -1;
int16_t x9 = INT16_MAX;
static uint16_t x12 = 742U;
int16_t x22 = INT16_MIN;
int64_t t5 = -4722308LL;
static volatile int16_t x32 = 2;
volatile int32_t t7 = -242432294;
int16_t x36 = INT16_MIN;
static volatile int64_t t8 = -20063105LL;
volatile int32_t t10 = -92003599;
volatile int32_t t12 = 45070302;
static int32_t x62 = INT32_MIN;
volatile int32_t t15 = 212;
volatile int64_t x67 = INT64_MAX;
int32_t t16 = 59;
volatile uint8_t x79 = 3U;
int16_t x81 = INT16_MIN;
uint32_t t20 = 121239596U;
int16_t x88 = -1;
volatile uint64_t t21 = 142895LLU;
int32_t x96 = -1;
volatile uint32_t x100 = 373U;
static int64_t x101 = -15520LL;
volatile uint64_t x108 = 760LLU;
static uint8_t x114 = 5U;
volatile uint64_t t27 = 1133542993249365424LLU;
int64_t x118 = INT64_MIN;
static uint64_t t28 = 52136944LLU;
uint8_t x122 = UINT8_MAX;
int64_t x127 = INT64_MIN;
int32_t x128 = -2;
volatile int16_t x132 = INT16_MAX;
uint32_t x136 = 110U;
int32_t x139 = INT32_MIN;
volatile uint64_t t33 = 10LLU;
int16_t x144 = INT16_MIN;
int32_t x146 = -811554509;
int32_t x147 = 5617282;
uint8_t x151 = 12U;
uint8_t x154 = UINT8_MAX;
volatile int64_t t38 = -1935449287756197825LL;
int8_t x163 = INT8_MIN;
int32_t x165 = INT32_MIN;
static int32_t x168 = -1105817;
static uint64_t x169 = 96604686859587880LLU;
int16_t x172 = INT16_MIN;
volatile uint64_t t41 = 768335452459LLU;
uint32_t x174 = 25732437U;
uint32_t x180 = UINT32_MAX;
volatile int64_t x181 = -37123032LL;
int8_t x183 = INT8_MAX;
volatile int16_t x189 = -1726;
volatile int64_t x190 = INT64_MIN;
int16_t x206 = INT16_MIN;
volatile uint8_t x210 = UINT8_MAX;
uint32_t x212 = 772413U;
int32_t x213 = -16429;
int8_t x215 = 15;
volatile int32_t t52 = 235;
uint16_t x220 = UINT16_MAX;
static volatile uint16_t x221 = UINT16_MAX;
int64_t x222 = 42LL;
static int8_t x223 = INT8_MIN;
int32_t x227 = 32375;
uint32_t x232 = UINT32_MAX;
volatile int32_t t57 = -778831;
int64_t x242 = 8066LL;
int8_t x243 = -28;
static uint16_t x248 = UINT16_MAX;
static int8_t x254 = INT8_MIN;
int64_t t61 = -3383120730288LL;
int32_t x262 = INT32_MIN;
int64_t t63 = 7551131116LL;
static volatile int32_t x267 = -1;
uint16_t x277 = UINT16_MAX;
volatile uint8_t x278 = 7U;
int16_t x279 = -332;
uint8_t x284 = 2U;
static int64_t x292 = INT64_MIN;
static int32_t x304 = -1;
uint32_t t73 = 191281003U;
volatile uint16_t x307 = 6592U;
static volatile int64_t t75 = 1436103916LL;
volatile int8_t x316 = INT8_MAX;
uint64_t x323 = 0LLU;
uint8_t x329 = UINT8_MAX;
static int64_t t80 = -1759984144LL;
int16_t x334 = -5;
int16_t x335 = 14;
int8_t x337 = -52;
int64_t x342 = -115934LL;
volatile int32_t t83 = -2601;
int32_t x346 = INT32_MIN;
int8_t x348 = INT8_MAX;
static int16_t x349 = INT16_MAX;
int64_t x359 = -4896298048794124LL;
static volatile uint32_t t87 = 118342700U;
int16_t x361 = -2;
int32_t x365 = 914;
uint64_t x371 = 108138779282LLU;
uint8_t x373 = 0U;
int32_t x375 = INT32_MIN;
uint8_t x377 = UINT8_MAX;
uint8_t x378 = 0U;
int32_t t92 = -31057;
int8_t x382 = INT8_MIN;
uint8_t x383 = 3U;
uint64_t x389 = 322393597710280LLU;
volatile int32_t x398 = INT32_MAX;
volatile int16_t x400 = INT16_MAX;
int64_t x404 = INT64_MIN;
int64_t x409 = -1LL;
int16_t x410 = 3;
int32_t x420 = INT32_MIN;
int32_t t102 = -4780032;
volatile uint16_t x422 = UINT16_MAX;
volatile uint32_t x424 = 28842515U;
volatile uint32_t t103 = 84U;
int32_t x451 = 4331504;
static volatile int64_t x457 = INT64_MIN;
static volatile int8_t x458 = INT8_MIN;
static uint32_t x465 = 1U;
static int16_t x473 = 8916;
int32_t x475 = -1;
volatile uint64_t t117 = 119LLU;
uint16_t x482 = 1U;
static int16_t x483 = -1;
static volatile uint64_t x486 = 1028LLU;
int32_t t120 = -1487190;
static int8_t x496 = -1;
uint8_t x501 = 1U;
uint32_t t123 = 83165U;
int32_t x508 = 0;
static volatile int32_t x510 = -1;
int64_t x518 = INT64_MIN;
static int8_t x529 = -1;
int64_t x545 = 6838599180128810LL;
uint16_t x548 = 92U;
int64_t t134 = 3855762258236359LL;
int64_t x550 = INT64_MAX;
volatile uint8_t x569 = 7U;
volatile uint32_t x573 = 0U;
int64_t x576 = 6112392773812032LL;
uint64_t t142 = 212167944441250LLU;
volatile uint16_t x587 = 70U;
int8_t x589 = INT8_MIN;
int64_t x593 = INT64_MAX;
volatile int8_t x597 = INT8_MAX;
int32_t t147 = 14583542;
volatile int64_t x609 = INT64_MAX;
static int64_t x613 = INT64_MIN;
int16_t x620 = 0;
int16_t x622 = -116;
uint16_t x624 = 5303U;
int32_t x625 = INT32_MIN;
int64_t x627 = 6328315942143487LL;
int64_t x628 = 61088714LL;
static volatile int32_t t155 = 123249;
int32_t x637 = -1;
int32_t t158 = -1;
int32_t t161 = -875;
uint32_t x657 = 648927096U;
int16_t x660 = -1527;
static volatile int64_t t163 = -426725980165276LL;
static int64_t x667 = -1LL;
int8_t x670 = INT8_MAX;
uint8_t x672 = 4U;
int32_t x673 = INT32_MIN;
int64_t x685 = INT64_MAX;
volatile int64_t t169 = 940986014197LL;
volatile int32_t t172 = 14;
uint32_t x707 = UINT32_MAX;
volatile int16_t x709 = INT16_MIN;
uint32_t x712 = UINT32_MAX;
static uint32_t x716 = 446095807U;
int32_t t177 = -634138;
int8_t x727 = INT8_MAX;
uint8_t x728 = 55U;
volatile uint32_t t178 = 59409U;
uint64_t t180 = 33573329927021195LLU;
int64_t x737 = INT64_MIN;
int8_t x739 = -3;
volatile int32_t t182 = 1;
int8_t x745 = INT8_MIN;
static volatile int32_t t183 = -3057992;
volatile int32_t t184 = 0;
static int16_t x760 = -794;
int16_t x762 = -6899;
int16_t x777 = -1;
int16_t x778 = 0;
static int32_t x780 = INT32_MIN;
static int64_t x783 = 70LL;
static volatile int8_t x785 = -41;
int8_t x789 = INT8_MIN;
int16_t x790 = 5721;
static int32_t t194 = -4806;
int16_t x802 = INT16_MIN;
static volatile int32_t x804 = -1;
int8_t x808 = -5;
int8_t x809 = -11;


void f0(void) {
    	int8_t x1 = -2;
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -4125808270240217LL;

    t0 = (x1/((x2!=x3)^x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	uint8_t x6 = 45U;
	int8_t x7 = -1;
	int64_t t1 = -2025524436LL;

    t1 = (x5/((x6!=x7)^x8));

    if (t1 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 448530U;
	volatile int32_t t2 = 4;

    t2 = (x9/((x10!=x11)^x12));

    if (t2 != 44) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	volatile int64_t x15 = INT64_MAX;
	uint64_t x16 = 131579179LLU;
	volatile uint64_t t3 = 877575LLU;

    t3 = (x13/((x14!=x15)^x16));

    if (t3 != 140195009226LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int32_t x18 = -1;
	int8_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 3602843;

    t4 = (x17/((x18!=x19)^x20));

    if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	int32_t x23 = -35049;
	uint32_t x24 = 45978U;

    t5 = (x21/((x22!=x23)^x24));

    if (t5 != -200599665866042LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int64_t x26 = -1LL;
	int8_t x27 = 1;
	static int32_t x28 = INT32_MIN;
	int32_t t6 = -24;

    t6 = (x25/((x26!=x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -37352236;
	int32_t x30 = 22;
	static uint16_t x31 = 884U;

    t7 = (x29/((x30!=x31)^x32));

    if (t7 != -12450745) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 50105626944147800LL;
	int32_t x34 = -1;
	volatile int8_t x35 = 1;

    t8 = (x33/((x34!=x35)^x36));

    if (t8 != -1529149050695LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int16_t x38 = -1;
	uint32_t x39 = 3654U;
	int32_t x40 = 0;
	volatile int32_t t9 = 119;

    t9 = (x37/((x38!=x39)^x40));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x42 = 224020U;
	static volatile int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

    t10 = (x41/((x42!=x43)^x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 0U;
	uint64_t x46 = UINT64_MAX;
	volatile int64_t x47 = INT64_MAX;
	uint8_t x48 = 6U;
	int32_t t11 = 417646;

    t11 = (x45/((x46!=x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = -1LL;
	static int32_t x51 = 423;
	volatile uint16_t x52 = UINT16_MAX;

    t12 = (x49/((x50!=x51)^x52));

    if (t12 != -32769) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	volatile int8_t x54 = -1;
	int32_t x55 = -164436;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 116919458;

    t13 = (x53/((x54!=x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x58 = 7744;
	static volatile int32_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 198;

    t14 = (x57/((x58!=x59)^x60));

    if (t14 != 8454660) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static volatile int8_t x63 = 10;
	static volatile int16_t x64 = INT16_MIN;

    t15 = (x61/((x62!=x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x66 = 14589U;
	static volatile int32_t x68 = -8004;

    t16 = (x65/((x66!=x67)^x68));

    if (t16 != 268334) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = 6U;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 6U;
	int32_t t17 = 72;

    t17 = (x69/((x70!=x71)^x72));

    if (t17 != 306783378) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = 7U;
	uint32_t x74 = 4444U;
	int64_t x75 = -1LL;
	static int32_t x76 = INT32_MIN;
	int32_t t18 = -57420076;

    t18 = (x73/((x74!=x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 11U;
	int32_t x78 = INT32_MIN;
	volatile int64_t x80 = INT64_MIN;
	int64_t t19 = 2725436LL;

    t19 = (x77/((x78!=x79)^x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x82 = -1;
	static uint8_t x83 = 9U;
	static uint32_t x84 = 12158U;

    t20 = (x81/((x82!=x83)^x84));

    if (t20 != 353230U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = UINT16_MAX;

    t21 = (x85/((x86!=x87)^x88));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 3114U;
	int8_t x90 = -1;
	int8_t x91 = -4;
	int64_t x92 = INT64_MAX;
	int64_t t22 = 369LL;

    t22 = (x89/((x90!=x91)^x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	static volatile int64_t x94 = INT64_MIN;
	int16_t x95 = -1;
	int32_t t23 = -5180724;

    t23 = (x93/((x94!=x95)^x96));

    if (t23 != 16384) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	int8_t x98 = -1;
	volatile uint16_t x99 = UINT16_MAX;
	volatile uint32_t t24 = 12139U;

    t24 = (x97/((x98!=x99)^x100));

    if (t24 != 88U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x102 = 216297765U;
	int16_t x103 = 0;
	uint8_t x104 = 5U;
	int64_t t25 = -5063614364571575LL;

    t25 = (x101/((x102!=x103)^x104));

    if (t25 != -3880LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 76U;
	uint64_t x106 = 52894087113621748LLU;
	static uint8_t x107 = UINT8_MAX;
	uint64_t t26 = 999887851853888896LLU;

    t26 = (x105/((x106!=x107)^x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x113 = UINT16_MAX;
	static int16_t x115 = INT16_MAX;
	uint64_t x116 = 155661039037LLU;

    t27 = (x113/((x114!=x115)^x116));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x117 = INT16_MIN;
	uint64_t x119 = 515606564LLU;
	uint64_t x120 = UINT64_MAX;

    t28 = (x117/((x118!=x119)^x120));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	volatile int64_t x123 = -230441903277154045LL;
	int8_t x124 = INT8_MIN;
	volatile int32_t t29 = 3914517;

    t29 = (x121/((x122!=x123)^x124));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -1;
	volatile int16_t x126 = -1;
	int32_t t30 = -13;

    t30 = (x125/((x126!=x127)^x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 422734957U;
	int32_t x131 = INT32_MIN;
	volatile uint32_t t31 = 359189U;

    t31 = (x129/((x130!=x131)^x132));

    if (t31 != 131080U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x133 = INT16_MIN;
	static int16_t x134 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	uint32_t t32 = 145471806U;

    t32 = (x133/((x134!=x135)^x136));

    if (t32 != 38693103U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = INT32_MIN;
	int16_t x138 = -296;
	volatile uint64_t x140 = UINT64_MAX;

    t33 = (x137/((x138!=x139)^x140));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -192;
	static volatile int32_t x142 = -142857;
	static uint8_t x143 = UINT8_MAX;
	int32_t t34 = -21145927;

    t34 = (x141/((x142!=x143)^x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x145 = -253824821LL;
	volatile uint16_t x148 = 31904U;
	int64_t t35 = 1916241342LL;

    t35 = (x145/((x146!=x147)^x148));

    if (t35 != -7955LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	static uint32_t x152 = UINT32_MAX;
	uint32_t t36 = 3273656U;

    t36 = (x149/((x150!=x151)^x152));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = -1;
	int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile int32_t t37 = 6452870;

    t37 = (x153/((x154!=x155)^x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = 1;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = -1LL;

    t38 = (x157/((x158!=x159)^x160));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 5983001U;
	int16_t x162 = -15186;
	static int64_t x164 = -1LL;
	int64_t t39 = 91471709659LL;

    t39 = (x161/((x162!=x163)^x164));

    if (t39 != -2991500LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x166 = 3U;
	int8_t x167 = INT8_MIN;
	static int32_t t40 = -43;

    t40 = (x165/((x166!=x167)^x168));

    if (t40 != 1941) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;

    t41 = (x169/((x170!=x171)^x172));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = 1;
	volatile int64_t x175 = 4LL;
	volatile int8_t x176 = INT8_MIN;
	int32_t t42 = 256561;

    t42 = (x173/((x174!=x175)^x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x177 = -1;
	static volatile uint32_t x178 = 242361078U;
	volatile int64_t x179 = INT64_MIN;
	volatile uint32_t t43 = 2053088974U;

    t43 = (x177/((x178!=x179)^x180));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x182 = INT8_MIN;
	int16_t x184 = -1040;
	volatile int64_t t44 = 1LL;

    t44 = (x181/((x182!=x183)^x184));

    if (t44 != 35729LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = UINT16_MAX;
	static uint32_t x186 = 1U;
	static int64_t x187 = 1LL;
	int8_t x188 = INT8_MIN;
	static int32_t t45 = 1817;

    t45 = (x185/((x186!=x187)^x188));

    if (t45 != -511) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x191 = 0;
	uint64_t x192 = 1261LLU;
	uint64_t t46 = 236542402LLU;

    t46 = (x189/((x190!=x191)^x192));

    if (t46 != 14640273074372658LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = 35;
	volatile int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MAX;
	uint32_t x196 = UINT32_MAX;
	uint32_t t47 = 292U;

    t47 = (x193/((x194!=x195)^x196));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = 2U;
	uint32_t x198 = UINT32_MAX;
	static int16_t x199 = INT16_MAX;
	volatile int32_t x200 = INT32_MAX;
	int32_t t48 = -52714301;

    t48 = (x197/((x198!=x199)^x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 14366756LLU;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = UINT16_MAX;
	static uint64_t x204 = 2286365610LLU;
	static uint64_t t49 = 56778203889834LLU;

    t49 = (x201/((x202!=x203)^x204));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = INT16_MAX;
	int32_t x207 = -7;
	int32_t x208 = INT32_MAX;
	volatile int32_t t50 = -1;

    t50 = (x205/((x206!=x207)^x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MIN;
	int8_t x211 = -1;
	volatile uint32_t t51 = 3127244U;

    t51 = (x209/((x210!=x211)^x212));

    if (t51 != 5560U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x214 = INT64_MIN;
	uint8_t x216 = 18U;

    t52 = (x213/((x214!=x215)^x216));

    if (t52 != -864) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 386U;
	int16_t x218 = INT16_MAX;
	static int64_t x219 = INT64_MIN;
	uint32_t t53 = 2U;

    t53 = (x217/((x218!=x219)^x220));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x224 = -1;
	static volatile int32_t t54 = -1;

    t54 = (x221/((x222!=x223)^x224));

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = 30;
	static int8_t x226 = -3;
	volatile int64_t x228 = 536715737430LL;
	int64_t t55 = 23846487LL;

    t55 = (x225/((x226!=x227)^x228));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	uint8_t x230 = 57U;
	int64_t x231 = INT64_MIN;
	volatile int64_t t56 = -668156708LL;

    t56 = (x229/((x230!=x231)^x232));

    if (t56 != -2147483649LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x233 = 1U;
	volatile int64_t x234 = -2806609436898LL;
	volatile int16_t x235 = 0;
	volatile int8_t x236 = INT8_MIN;

    t57 = (x233/((x234!=x235)^x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x241 = 479U;
	int8_t x244 = -1;
	static volatile int32_t t58 = 48;

    t58 = (x241/((x242!=x243)^x244));

    if (t58 != -239) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x245 = INT32_MIN;
	uint32_t x246 = 110256062U;
	int64_t x247 = -190LL;
	int32_t t59 = 0;

    t59 = (x245/((x246!=x247)^x248));

    if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = -1LL;
	volatile int8_t x250 = -1;
	static int16_t x251 = -1;
	uint8_t x252 = 52U;
	static volatile int64_t t60 = -571215308LL;

    t60 = (x249/((x250!=x251)^x252));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 136133U;
	static int32_t x255 = -483474;
	int64_t x256 = -1LL;

    t61 = (x253/((x254!=x255)^x256));

    if (t61 != -68066LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	static int32_t x258 = -1;
	int64_t x259 = -1718392LL;
	volatile int16_t x260 = 53;
	volatile int64_t t62 = 387814769277660LL;

    t62 = (x257/((x258!=x259)^x260));

    if (t62 != -177372539170284150LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x261 = INT64_MIN;
	int32_t x263 = -56;
	static int32_t x264 = INT32_MAX;

    t63 = (x261/((x262!=x263)^x264));

    if (t63 != -4294967300LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 25765064U;
	uint16_t x268 = 323U;
	uint32_t t64 = 7U;

    t64 = (x265/((x266!=x267)^x268));

    if (t64 != 13338407U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x269 = -51;
	static uint16_t x270 = 288U;
	int32_t x271 = 0;
	int32_t x272 = -14;
	int32_t t65 = 477922102;

    t65 = (x269/((x270!=x271)^x272));

    if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = 2;
	uint64_t x274 = UINT64_MAX;
	int32_t x275 = -1;
	int16_t x276 = -2262;
	int32_t t66 = 6;

    t66 = (x273/((x274!=x275)^x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x280 = INT8_MAX;
	int32_t t67 = -3;

    t67 = (x277/((x278!=x279)^x280));

    if (t67 != 520) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	static volatile int32_t x282 = 2610;
	int64_t x283 = INT64_MIN;
	static volatile int32_t t68 = -856601703;

    t68 = (x281/((x282!=x283)^x284));

    if (t68 != 21845) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = -1;
	static int32_t x286 = 61153838;
	int8_t x287 = INT8_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	static uint32_t t69 = 107221557U;

    t69 = (x285/((x286!=x287)^x288));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = INT32_MIN;
	static int64_t t70 = 1LL;

    t70 = (x289/((x290!=x291)^x292));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = -1775;
	static uint8_t x294 = 26U;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 3U;
	volatile uint32_t t71 = 5994U;

    t71 = (x293/((x294!=x295)^x296));

    if (t71 != 2147482760U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x297 = INT64_MIN;
	volatile int64_t x298 = -750224712LL;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -8;
	int64_t t72 = -134904233751LL;

    t72 = (x297/((x298!=x299)^x300));

    if (t72 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = 1;
	static int32_t x303 = INT32_MAX;

    t73 = (x301/((x302!=x303)^x304));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = -1LL;
	static int64_t x308 = INT64_MIN;
	static volatile int64_t t74 = -17LL;

    t74 = (x305/((x306!=x307)^x308));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -13150652LL;
	static volatile uint32_t x310 = 175221U;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = -230;

    t75 = (x309/((x310!=x311)^x312));

    if (t75 != 57426LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = INT64_MIN;
	static int16_t x314 = -5;
	int64_t x315 = -1LL;
	volatile int64_t t76 = 113LL;

    t76 = (x313/((x314!=x315)^x316));

    if (t76 != -73201365371863300LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x317 = 304151873980274LLU;
	static int64_t x318 = INT64_MIN;
	volatile uint8_t x319 = UINT8_MAX;
	static volatile int16_t x320 = INT16_MAX;
	uint64_t t77 = 252012649465LLU;

    t77 = (x317/((x318!=x319)^x320));

    if (t77 != 9282545137LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 1U;
	static int8_t x322 = INT8_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t78 = 261927LL;

    t78 = (x321/((x322!=x323)^x324));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = -1;
	int8_t x326 = -1;
	uint16_t x327 = 0U;
	uint32_t x328 = 517020U;
	uint32_t t79 = 923687622U;

    t79 = (x325/((x326!=x327)^x328));

    if (t79 != 8307U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x330 = -10;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = 32609348378263LL;

    t80 = (x329/((x330!=x331)^x332));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = 5;
	volatile uint8_t x336 = 76U;
	static int32_t t81 = -8505200;

    t81 = (x333/((x334!=x335)^x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x338 = -1;
	uint32_t x339 = 391U;
	int16_t x340 = INT16_MAX;
	volatile int32_t t82 = 166596843;

    t82 = (x337/((x338!=x339)^x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x341 = 2281;
	uint8_t x343 = 35U;
	int8_t x344 = INT8_MIN;

    t83 = (x341/((x342!=x343)^x344));

    if (t83 != -17) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = 363U;
	static int16_t x347 = INT16_MIN;
	static int32_t t84 = -271;

    t84 = (x345/((x346!=x347)^x348));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = -2774;
	int64_t x351 = 611127076LL;
	int16_t x352 = 43;
	volatile int32_t t85 = 13644332;

    t85 = (x349/((x350!=x351)^x352));

    if (t85 != 780) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	int64_t t86 = 255455354LL;

    t86 = (x353/((x354!=x355)^x356));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	uint32_t x360 = 33020288U;

    t87 = (x357/((x358!=x359)^x360));

    if (t87 != 130U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x362 = 0;
	uint32_t x363 = 450U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t88 = 82115605LL;

    t88 = (x361/((x362!=x363)^x364));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x366 = -1LL;
	int8_t x367 = 6;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t89 = -527;

    t89 = (x365/((x366!=x367)^x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x370 = 1025;
	uint16_t x372 = 204U;
	static volatile int64_t t90 = 2582876LL;

    t90 = (x369/((x370!=x371)^x372));

    if (t90 != -44992058716364760LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x374 = -937484468756137LL;
	uint16_t x376 = UINT16_MAX;
	int32_t t91 = -565914;

    t91 = (x373/((x374!=x375)^x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x379 = INT16_MAX;
	static int8_t x380 = INT8_MAX;

    t92 = (x377/((x378!=x379)^x380));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = -1LL;
	static int64_t x384 = -1LL;
	int64_t t93 = -2031521572LL;

    t93 = (x381/((x382!=x383)^x384));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x385 = -61054868;
	int16_t x386 = INT16_MIN;
	volatile uint64_t x387 = UINT64_MAX;
	int16_t x388 = -32;
	static int32_t t94 = 95;

    t94 = (x385/((x386!=x387)^x388));

    if (t94 != 1969511) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x390 = INT16_MIN;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	volatile uint64_t t95 = 126954507157LLU;

    t95 = (x389/((x390!=x391)^x392));

    if (t95 != 150126LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x393 = 45U;
	int8_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t96 = 39;

    t96 = (x393/((x394!=x395)^x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x397 = 250354753846450427LLU;
	int64_t x399 = INT64_MIN;
	uint64_t t97 = 421276700371497695LLU;

    t97 = (x397/((x398!=x399)^x400));

    if (t97 != 7640687110005LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	volatile int8_t x402 = -1;
	int64_t x403 = -7637353536223061LL;
	int64_t t98 = 3502193931871LL;

    t98 = (x401/((x402!=x403)^x404));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x405 = -1LL;
	int64_t x406 = -6312383LL;
	uint32_t x407 = 30664999U;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t99 = 441260LLU;

    t99 = (x405/((x406!=x407)^x408));

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x411 = 16371837405LLU;
	volatile int32_t x412 = 10464;
	int64_t t100 = -166055686LL;

    t100 = (x409/((x410!=x411)^x412));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = 24172174810422252LL;
	volatile int16_t x414 = 55;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	int64_t t101 = 1LL;

    t101 = (x413/((x414!=x415)^x416));

    if (t101 != -737698746007LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x417 = -1;
	static volatile int64_t x418 = INT64_MIN;
	volatile uint8_t x419 = 19U;

    t102 = (x417/((x418!=x419)^x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = 1;
	static int64_t x423 = INT64_MAX;

    t103 = (x421/((x422!=x423)^x424));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = 571809451003904LL;
	int8_t x426 = -1;
	int32_t x427 = INT32_MIN;
	static int8_t x428 = INT8_MAX;
	static volatile int64_t t104 = 721699401LL;

    t104 = (x425/((x426!=x427)^x428));

    if (t104 != 4538170246062LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = -1;
	uint16_t x430 = 30932U;
	static uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t105 = 1966149;

    t105 = (x429/((x430!=x431)^x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x433 = 53U;
	uint32_t x434 = 61070U;
	volatile uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MAX;
	volatile int64_t t106 = -229390398478891474LL;

    t106 = (x433/((x434!=x435)^x436));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x437 = 7U;
	int64_t x438 = INT64_MIN;
	int64_t x439 = INT64_MAX;
	int32_t x440 = INT32_MIN;
	volatile int32_t t107 = 4977;

    t107 = (x437/((x438!=x439)^x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x441 = UINT8_MAX;
	uint16_t x442 = 79U;
	uint16_t x443 = 503U;
	uint16_t x444 = 3968U;
	volatile int32_t t108 = -17;

    t108 = (x441/((x442!=x443)^x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = INT16_MAX;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = 2815U;
	int32_t x448 = INT32_MAX;
	volatile int32_t t109 = 6558;

    t109 = (x445/((x446!=x447)^x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x449 = UINT64_MAX;
	int8_t x450 = -1;
	int8_t x452 = 29;
	static uint64_t t110 = 17444667184442621LLU;

    t110 = (x449/((x450!=x451)^x452));

    if (t110 != 658812288346769700LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x453 = 3804U;
	int16_t x454 = INT16_MAX;
	int16_t x455 = INT16_MIN;
	static uint32_t x456 = 97549309U;
	uint32_t t111 = 1647U;

    t111 = (x453/((x454!=x455)^x456));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x459 = 1U;
	uint64_t x460 = 532728065209LLU;
	volatile uint64_t t112 = 398740253186845LLU;

    t112 = (x457/((x458!=x459)^x460));

    if (t112 != 17313471LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int32_t x462 = -11922;
	int8_t x463 = -5;
	uint16_t x464 = 3U;
	int32_t t113 = 5834;

    t113 = (x461/((x462!=x463)^x464));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x466 = 47224U;
	uint8_t x467 = 1U;
	int32_t x468 = -1;
	uint32_t t114 = 3400746U;

    t114 = (x465/((x466!=x467)^x468));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x469 = 2U;
	int32_t x470 = 618;
	volatile int8_t x471 = INT8_MAX;
	int8_t x472 = INT8_MAX;
	int32_t t115 = 4091797;

    t115 = (x469/((x470!=x471)^x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x474 = -1LL;
	volatile int16_t x476 = 27;
	volatile int32_t t116 = -3633106;

    t116 = (x473/((x474!=x475)^x476));

    if (t116 != 330) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = INT32_MAX;
	static int32_t x478 = 0;
	int16_t x479 = -1;
	static uint64_t x480 = 4116953792933703LLU;

    t117 = (x477/((x478!=x479)^x480));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x481 = INT32_MIN;
	int64_t x484 = INT64_MIN;
	volatile int64_t t118 = -47145637LL;

    t118 = (x481/((x482!=x483)^x484));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x485 = -49;
	int32_t x487 = INT32_MIN;
	uint8_t x488 = 5U;
	volatile int32_t t119 = -232542497;

    t119 = (x485/((x486!=x487)^x488));

    if (t119 != -12) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = -21;
	static int32_t x490 = INT32_MAX;
	volatile uint16_t x491 = 18590U;
	int16_t x492 = INT16_MIN;

    t120 = (x489/((x490!=x491)^x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x493 = 1054220771LLU;
	int32_t x494 = -1;
	int32_t x495 = 0;
	uint64_t t121 = 120826733583283LLU;

    t121 = (x493/((x494!=x495)^x496));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x497 = 0;
	int8_t x498 = INT8_MAX;
	uint64_t x499 = 471921926LLU;
	uint32_t x500 = 348113710U;
	volatile uint32_t t122 = 755869563U;

    t122 = (x497/((x498!=x499)^x500));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x502 = INT32_MIN;
	volatile int16_t x503 = -1;
	uint32_t x504 = UINT32_MAX;

    t123 = (x501/((x502!=x503)^x504));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	static int16_t x506 = -1;
	volatile uint32_t x507 = 783U;
	volatile int32_t t124 = 2;

    t124 = (x505/((x506!=x507)^x508));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x509 = 13U;
	volatile int32_t x511 = -11204;
	int32_t x512 = INT32_MAX;
	volatile int32_t t125 = 2934701;

    t125 = (x509/((x510!=x511)^x512));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x513 = 4U;
	int64_t x514 = INT64_MIN;
	static int16_t x515 = INT16_MIN;
	volatile int64_t x516 = -1LL;
	volatile int64_t t126 = -1976LL;

    t126 = (x513/((x514!=x515)^x516));

    if (t126 != -2LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x517 = INT16_MIN;
	volatile uint8_t x519 = 7U;
	uint64_t x520 = 48485678241LLU;
	static volatile uint64_t t127 = 116LLU;

    t127 = (x517/((x518!=x519)^x520));

    if (t127 != 380457585LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x521 = 2011962457U;
	int8_t x522 = INT8_MAX;
	static uint32_t x523 = UINT32_MAX;
	static volatile int64_t x524 = 26LL;
	int64_t t128 = 44994LL;

    t128 = (x521/((x522!=x523)^x524));

    if (t128 != 74517128LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x525 = -212;
	volatile int64_t x526 = INT64_MIN;
	int64_t x527 = -118983511040230LL;
	volatile int32_t x528 = INT32_MAX;
	int32_t t129 = 509205;

    t129 = (x525/((x526!=x527)^x528));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x530 = 24;
	int16_t x531 = INT16_MIN;
	int16_t x532 = -1;
	volatile int32_t t130 = 24;

    t130 = (x529/((x530!=x531)^x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -427466542;
	uint64_t x534 = 43349504586520LLU;
	int8_t x535 = 0;
	volatile int8_t x536 = INT8_MIN;
	int32_t t131 = 12931489;

    t131 = (x533/((x534!=x535)^x536));

    if (t131 != 3365878) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x537 = 2328U;
	int64_t x538 = INT64_MIN;
	static int32_t x539 = INT32_MIN;
	int16_t x540 = -1;
	volatile uint32_t t132 = 70979U;

    t132 = (x537/((x538!=x539)^x540));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x541 = -75623630;
	volatile uint8_t x542 = 1U;
	volatile int64_t x543 = -194711520649130LL;
	uint8_t x544 = 14U;
	static int32_t t133 = -76;

    t133 = (x541/((x542!=x543)^x544));

    if (t133 != -5041575) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x546 = INT16_MIN;
	int16_t x547 = INT16_MIN;

    t134 = (x545/((x546!=x547)^x548));

    if (t134 != 74332599784008LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x549 = UINT32_MAX;
	int8_t x551 = INT8_MAX;
	int32_t x552 = -1;
	static volatile uint32_t t135 = 422066348U;

    t135 = (x549/((x550!=x551)^x552));

    if (t135 != 1U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x553 = 19223941976887LLU;
	int32_t x554 = -1;
	int64_t x555 = -82575LL;
	uint32_t x556 = 9692690U;
	volatile uint64_t t136 = 1219224085150439457LLU;

    t136 = (x553/((x554!=x555)^x556));

    if (t136 != 1983344LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x557 = INT64_MAX;
	int32_t x558 = -75463839;
	static uint8_t x559 = 8U;
	static int64_t x560 = INT64_MAX;
	static int64_t t137 = 3184031961LL;

    t137 = (x557/((x558!=x559)^x560));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x561 = INT64_MIN;
	uint64_t x562 = 310540347732889LLU;
	volatile int16_t x563 = INT16_MAX;
	int16_t x564 = 160;
	static int64_t t138 = 382964270292729LL;

    t138 = (x561/((x562!=x563)^x564));

    if (t138 != -57288025073632147LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x565 = INT8_MIN;
	int16_t x566 = 112;
	int64_t x567 = INT64_MAX;
	int32_t x568 = -1;
	int32_t t139 = 118262968;

    t139 = (x565/((x566!=x567)^x568));

    if (t139 != 64) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MAX;
	volatile int32_t t140 = 21;

    t140 = (x569/((x570!=x571)^x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x574 = -1;
	volatile uint64_t x575 = 1LLU;
	volatile int64_t t141 = 128728252LL;

    t141 = (x573/((x574!=x575)^x576));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x578 = UINT8_MAX;
	int8_t x579 = INT8_MIN;
	static int16_t x580 = 296;

    t142 = (x577/((x578!=x579)^x580));

    if (t142 != 62110249406429466LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x581 = INT64_MAX;
	static volatile int32_t x582 = -1;
	static int32_t x583 = INT32_MIN;
	int16_t x584 = -309;
	volatile int64_t t143 = -23239711934LL;

    t143 = (x581/((x582!=x583)^x584));

    if (t143 != -29752813022112180LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x585 = INT64_MIN;
	int32_t x586 = INT32_MIN;
	int64_t x588 = -5458125957864265LL;
	volatile int64_t t144 = -1633656449064LL;

    t144 = (x585/((x586!=x587)^x588));

    if (t144 != 1689LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x590 = 1146861;
	uint16_t x591 = 978U;
	volatile int32_t x592 = 195951;
	volatile int32_t t145 = -3059100;

    t145 = (x589/((x590!=x591)^x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x594 = 7114U;
	uint16_t x595 = UINT16_MAX;
	uint16_t x596 = UINT16_MAX;
	volatile int64_t t146 = -678762016539LL;

    t146 = (x593/((x594!=x595)^x596));

    if (t146 != 140741783453700LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x598 = 71U;
	static int64_t x599 = INT64_MAX;
	uint16_t x600 = 2178U;

    t147 = (x597/((x598!=x599)^x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x601 = 2373188222536398LLU;
	static volatile int64_t x602 = INT64_MIN;
	uint16_t x603 = 251U;
	static volatile uint16_t x604 = UINT16_MAX;
	uint64_t t148 = 275403049209133LLU;

    t148 = (x601/((x602!=x603)^x604));

    if (t148 != 36213083628LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x605 = -2;
	int64_t x606 = 1142360129LL;
	static int32_t x607 = INT32_MAX;
	int64_t x608 = 54000LL;
	int64_t t149 = -132607625387743LL;

    t149 = (x605/((x606!=x607)^x608));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x610 = INT64_MIN;
	uint64_t x611 = 170175LLU;
	int16_t x612 = INT16_MIN;
	int64_t t150 = -179253134595820824LL;

    t150 = (x609/((x610!=x611)^x612));

    if (t150 != -281483566907400LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x614 = 2475U;
	uint32_t x615 = 0U;
	int8_t x616 = -1;
	volatile int64_t t151 = 1808853895486770583LL;

    t151 = (x613/((x614!=x615)^x616));

    if (t151 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = INT64_MAX;
	int16_t x619 = INT16_MAX;
	static int32_t t152 = 2135;

    t152 = (x617/((x618!=x619)^x620));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x621 = -827668LL;
	static int16_t x623 = -1;
	volatile int64_t t153 = 3644LL;

    t153 = (x621/((x622!=x623)^x624));

    if (t153 != -156LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x626 = UINT16_MAX;
	volatile int64_t t154 = 0LL;

    t154 = (x625/((x626!=x627)^x628));

    if (t154 != -35LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x629 = -1;
	int8_t x630 = INT8_MIN;
	int64_t x631 = 16329303LL;
	volatile int32_t x632 = 2207;

    t155 = (x629/((x630!=x631)^x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	int64_t x634 = INT64_MAX;
	uint32_t x635 = UINT32_MAX;
	volatile uint64_t x636 = UINT64_MAX;
	uint64_t t156 = 191LLU;

    t156 = (x633/((x634!=x635)^x636));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x638 = -1LL;
	int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MAX;
	int32_t t157 = -96993;

    t157 = (x637/((x638!=x639)^x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x641 = INT32_MIN;
	uint64_t x642 = 31898774978LLU;
	int64_t x643 = INT64_MAX;
	int16_t x644 = INT16_MIN;

    t158 = (x641/((x642!=x643)^x644));

    if (t158 != 65538) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = INT8_MIN;
	volatile int32_t x646 = INT32_MAX;
	static volatile uint32_t x647 = 21U;
	volatile int8_t x648 = -1;
	int32_t t159 = 0;

    t159 = (x645/((x646!=x647)^x648));

    if (t159 != 64) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x649 = 384U;
	int32_t x650 = -477443463;
	int32_t x651 = -1;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t160 = 62151;

    t160 = (x649/((x650!=x651)^x652));

    if (t160 != -3) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x653 = INT8_MIN;
	static int16_t x654 = INT16_MIN;
	uint16_t x655 = 21677U;
	uint16_t x656 = UINT16_MAX;

    t161 = (x653/((x654!=x655)^x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x658 = INT16_MIN;
	int16_t x659 = -1;
	volatile uint32_t t162 = 88189U;

    t162 = (x657/((x658!=x659)^x660));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x661 = INT64_MIN;
	volatile uint32_t x662 = 770176U;
	uint32_t x663 = 55882U;
	volatile int64_t x664 = INT64_MAX;

    t163 = (x661/((x662!=x663)^x664));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = -29;
	int32_t x666 = INT32_MIN;
	volatile uint16_t x668 = 26182U;
	volatile int32_t t164 = 62;

    t164 = (x665/((x666!=x667)^x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x669 = -1;
	int64_t x671 = INT64_MIN;
	volatile int32_t t165 = -2;

    t165 = (x669/((x670!=x671)^x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x674 = -1;
	uint64_t x675 = 409020303236044925LLU;
	int8_t x676 = INT8_MAX;
	static volatile int32_t t166 = 39;

    t166 = (x673/((x674!=x675)^x676));

    if (t166 != -17043521) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x677 = 14U;
	uint16_t x678 = UINT16_MAX;
	static uint8_t x679 = 1U;
	uint8_t x680 = 103U;
	static volatile int32_t t167 = -61929;

    t167 = (x677/((x678!=x679)^x680));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x681 = UINT16_MAX;
	static int16_t x682 = 85;
	volatile int8_t x683 = INT8_MAX;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t168 = 145;

    t168 = (x681/((x682!=x683)^x684));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x686 = -1;
	uint16_t x687 = 2U;
	int8_t x688 = INT8_MIN;

    t169 = (x685/((x686!=x687)^x688));

    if (t169 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int32_t x690 = INT32_MIN;
	uint16_t x691 = 14486U;
	int16_t x692 = INT16_MIN;
	volatile int32_t t170 = 2;

    t170 = (x689/((x690!=x691)^x692));

    if (t170 != -65538) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	volatile uint16_t x698 = 8U;
	int64_t x699 = INT64_MIN;
	volatile int64_t x700 = -1LL;
	volatile int64_t t171 = -256948264682578137LL;

    t171 = (x697/((x698!=x699)^x700));

    if (t171 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x701 = INT32_MIN;
	volatile int8_t x702 = INT8_MIN;
	static volatile int8_t x703 = INT8_MIN;
	static volatile int8_t x704 = INT8_MIN;

    t172 = (x701/((x702!=x703)^x704));

    if (t172 != 16777216) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x705 = INT16_MIN;
	int64_t x706 = INT64_MIN;
	static uint8_t x708 = 86U;
	volatile int32_t t173 = -8;

    t173 = (x705/((x706!=x707)^x708));

    if (t173 != -376) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x710 = 3;
	volatile uint8_t x711 = 6U;
	uint32_t t174 = 3557U;

    t174 = (x709/((x710!=x711)^x712));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x713 = 383;
	static int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MAX;
	static uint32_t t175 = 6757U;

    t175 = (x713/((x714!=x715)^x716));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x717 = 2;
	volatile int32_t x718 = INT32_MIN;
	uint64_t x719 = UINT64_MAX;
	int16_t x720 = INT16_MIN;
	int32_t t176 = 15510199;

    t176 = (x717/((x718!=x719)^x720));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x721 = 121;
	uint16_t x722 = UINT16_MAX;
	static volatile int64_t x723 = 515417177231869LL;
	static volatile int8_t x724 = INT8_MIN;

    t177 = (x721/((x722!=x723)^x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x725 = 129306U;
	int8_t x726 = INT8_MAX;

    t178 = (x725/((x726!=x727)^x728));

    if (t178 != 2351U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x729 = UINT64_MAX;
	uint64_t x730 = 6914907LLU;
	volatile uint32_t x731 = 93U;
	volatile int64_t x732 = 13238LL;
	volatile uint64_t t179 = 478744LLU;

    t179 = (x729/((x730!=x731)^x732));

    if (t179 != 1393363854800932LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x733 = INT64_MIN;
	volatile uint64_t x734 = 496506715950177549LLU;
	volatile int32_t x735 = -407;
	uint64_t x736 = UINT64_MAX;

    t180 = (x733/((x734!=x735)^x736));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x738 = -1;
	int16_t x740 = INT16_MIN;
	volatile int64_t t181 = -62LL;

    t181 = (x737/((x738!=x739)^x740));

    if (t181 != 281483566907400LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x741 = UINT8_MAX;
	int16_t x742 = 4002;
	static int8_t x743 = INT8_MIN;
	volatile uint8_t x744 = 2U;

    t182 = (x741/((x742!=x743)^x744));

    if (t182 != 85) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x746 = INT64_MAX;
	static int16_t x747 = 5;
	int16_t x748 = INT16_MAX;

    t183 = (x745/((x746!=x747)^x748));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x749 = 8U;
	int64_t x750 = INT64_MAX;
	int32_t x751 = -459288841;
	static volatile uint8_t x752 = 14U;

    t184 = (x749/((x750!=x751)^x752));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x753 = UINT8_MAX;
	static int32_t x754 = INT32_MIN;
	static uint32_t x755 = UINT32_MAX;
	int8_t x756 = INT8_MAX;
	volatile int32_t t185 = 3675522;

    t185 = (x753/((x754!=x755)^x756));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x757 = -1;
	static int8_t x758 = 8;
	static uint64_t x759 = UINT64_MAX;
	static int32_t t186 = 1;

    t186 = (x757/((x758!=x759)^x760));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = INT32_MIN;
	uint16_t x763 = 0U;
	int16_t x764 = INT16_MAX;
	volatile int32_t t187 = -33734012;

    t187 = (x761/((x762!=x763)^x764));

    if (t187 != -65540) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x765 = UINT32_MAX;
	static uint8_t x766 = 127U;
	int8_t x767 = INT8_MIN;
	volatile int64_t x768 = -4LL;
	volatile int64_t t188 = -962534416563691061LL;

    t188 = (x765/((x766!=x767)^x768));

    if (t188 != -1431655765LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x769 = -1;
	volatile int16_t x770 = -14224;
	volatile int16_t x771 = 712;
	int8_t x772 = INT8_MIN;
	int32_t t189 = 4;

    t189 = (x769/((x770!=x771)^x772));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x773 = INT8_MAX;
	static int64_t x774 = INT64_MIN;
	uint16_t x775 = UINT16_MAX;
	uint8_t x776 = UINT8_MAX;
	static int32_t t190 = 5491;

    t190 = (x773/((x774!=x775)^x776));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x779 = 21U;
	volatile int32_t t191 = -9;

    t191 = (x777/((x778!=x779)^x780));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x781 = 19U;
	int64_t x782 = -903575688LL;
	int8_t x784 = INT8_MIN;
	uint32_t t192 = 41671U;

    t192 = (x781/((x782!=x783)^x784));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x786 = INT64_MIN;
	int8_t x787 = -1;
	int32_t x788 = -7495484;
	volatile int32_t t193 = 6;

    t193 = (x785/((x786!=x787)^x788));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x791 = 13152132;
	static int32_t x792 = INT32_MAX;

    t194 = (x789/((x790!=x791)^x792));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x793 = -1;
	static int8_t x794 = INT8_MAX;
	volatile int64_t x795 = INT64_MIN;
	int64_t x796 = INT64_MIN;
	int64_t t195 = -1331108682193073LL;

    t195 = (x793/((x794!=x795)^x796));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x797 = 13284481U;
	static int16_t x798 = INT16_MIN;
	int64_t x799 = INT64_MIN;
	volatile int16_t x800 = INT16_MIN;
	volatile uint32_t t196 = 5028335U;

    t196 = (x797/((x798!=x799)^x800));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x801 = -82599263788661755LL;
	static uint8_t x803 = 8U;
	int64_t t197 = 3529806090584093440LL;

    t197 = (x801/((x802!=x803)^x804));

    if (t197 != 41299631894330877LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x805 = 4943361743LLU;
	uint16_t x806 = UINT16_MAX;
	int32_t x807 = -122249444;
	volatile uint64_t t198 = 10319856LLU;

    t198 = (x805/((x806!=x807)^x808));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x810 = INT64_MAX;
	volatile int8_t x811 = 2;
	uint8_t x812 = 17U;
	int32_t t199 = 3727621;

    t199 = (x809/((x810!=x811)^x812));

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

