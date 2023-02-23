
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

static volatile int32_t x4 = INT32_MIN;
volatile uint16_t x10 = 313U;
uint32_t x11 = 176785885U;
static volatile int32_t x14 = -1;
uint32_t t3 = 51934U;
int64_t x17 = INT64_MIN;
uint64_t x19 = UINT64_MAX;
int8_t x20 = INT8_MAX;
uint64_t t4 = 575996957922977017LLU;
uint32_t x21 = 262808306U;
uint64_t t5 = 2200419059LLU;
int8_t x34 = -5;
int32_t x35 = INT32_MAX;
static int32_t x36 = -1;
int32_t t8 = 14083662;
uint64_t x38 = UINT64_MAX;
static uint8_t x40 = 29U;
volatile int16_t x42 = INT16_MIN;
int32_t x43 = INT32_MAX;
volatile int32_t x49 = INT32_MIN;
volatile int8_t x51 = -1;
int32_t x60 = INT32_MIN;
static int16_t x65 = -1;
int8_t x67 = 41;
int64_t t15 = -5878107667532LL;
static volatile int16_t x72 = INT16_MAX;
volatile int64_t t16 = -116182450LL;
int32_t x75 = -890957;
int64_t x76 = INT64_MIN;
uint8_t x77 = 1U;
uint32_t x80 = 745289979U;
int64_t x91 = INT64_MIN;
static uint64_t x93 = UINT64_MAX;
int8_t x99 = 3;
static int32_t x103 = INT32_MIN;
static int64_t x104 = INT64_MIN;
uint32_t x117 = 396227557U;
static int16_t x120 = INT16_MIN;
static uint64_t x121 = 109157909LLU;
int8_t x133 = INT8_MIN;
int8_t x153 = 3;
uint8_t x154 = UINT8_MAX;
int32_t t35 = -138764039;
uint8_t x160 = UINT8_MAX;
volatile uint32_t t36 = 62449349U;
uint16_t x166 = UINT16_MAX;
static uint8_t x167 = 2U;
int8_t x168 = -1;
volatile int64_t x169 = INT64_MIN;
int64_t x173 = INT64_MAX;
int64_t x174 = INT64_MIN;
static volatile int16_t x178 = 0;
static uint64_t x180 = UINT64_MAX;
int64_t x186 = INT64_MIN;
int64_t t44 = 67557503LL;
int16_t x193 = INT16_MIN;
int64_t x205 = 5560757LL;
uint32_t x212 = 230988U;
static volatile int32_t x213 = INT32_MAX;
static volatile uint64_t t50 = 134324990LLU;
int64_t x218 = -1604LL;
static int64_t x233 = -114983LL;
static int16_t x243 = -1;
int8_t x247 = INT8_MIN;
int8_t x249 = 1;
uint64_t x252 = 23619577970LLU;
uint64_t x256 = UINT64_MAX;
int8_t x260 = 4;
int32_t t59 = -270605;
volatile int32_t x266 = INT32_MIN;
int16_t x267 = -1;
int32_t t60 = 388331;
volatile int64_t x270 = INT64_MAX;
int16_t x272 = -1;
static uint32_t x283 = UINT32_MAX;
int8_t x286 = INT8_MAX;
volatile int32_t t64 = 9;
int32_t x293 = INT32_MIN;
uint32_t x297 = UINT32_MAX;
static uint16_t x299 = 3U;
int16_t x300 = -1;
int16_t x314 = -16372;
static uint16_t x338 = 13U;
int64_t x349 = INT64_MIN;
static int32_t x357 = -1;
uint64_t x363 = UINT64_MAX;
static uint64_t x366 = 61868LLU;
int8_t x368 = 1;
int8_t x370 = INT8_MIN;
uint32_t x375 = 31958U;
int16_t x381 = 28;
static volatile int16_t x384 = INT16_MAX;
static int64_t t88 = -181LL;
uint32_t x394 = 69U;
int64_t t92 = 0LL;
static int64_t t95 = -67682965720628466LL;
uint64_t x417 = 2846018956644LLU;
uint8_t x454 = 11U;
int32_t x456 = INT32_MAX;
static volatile int16_t x457 = INT16_MIN;
int64_t x468 = INT64_MAX;
volatile int64_t t109 = 161347513571692LL;
static int64_t x476 = -1LL;
int16_t x484 = INT16_MAX;
volatile int64_t t113 = 37758029235LL;
uint64_t x489 = 12LLU;
volatile int16_t x491 = 1356;
int32_t x493 = -1057346007;
static int16_t x496 = INT16_MAX;
static volatile uint32_t x499 = 1U;
static int64_t t116 = -6120LL;
static uint16_t x505 = 17U;
uint32_t x512 = 842470725U;
volatile int16_t x514 = INT16_MIN;
int8_t x516 = 4;
int32_t x522 = -1;
int16_t x523 = 15960;
static volatile int64_t x529 = INT64_MIN;
int8_t x540 = INT8_MAX;
uint16_t x546 = 1935U;
int16_t x549 = -1;
int64_t x553 = INT64_MIN;
int32_t x560 = INT32_MIN;
volatile int64_t t130 = -1LL;
int32_t x579 = -1;
int64_t x587 = INT64_MIN;
static uint64_t x589 = 93105129648988302LLU;
volatile uint8_t x592 = 26U;
int16_t x599 = -1;
int64_t x617 = INT64_MAX;
uint32_t x618 = 121186002U;
static int64_t x619 = INT64_MIN;
uint64_t x620 = UINT64_MAX;
int16_t x625 = -1;
static volatile int8_t x636 = INT8_MIN;
int64_t x642 = INT64_MIN;
int64_t t149 = -2720LL;
uint16_t x655 = 34U;
int32_t t152 = 1;
static int32_t x666 = -21928344;
int32_t x670 = -1;
int32_t x683 = INT32_MIN;
int8_t x684 = -1;
volatile int64_t t158 = 1LL;
uint8_t x685 = UINT8_MAX;
uint64_t x686 = 7164162989803LLU;
uint64_t t160 = 490052066007065LLU;
volatile uint32_t x693 = UINT32_MAX;
int64_t t161 = -443475039061175077LL;
int8_t x700 = INT8_MAX;
uint32_t x702 = 1U;
volatile int64_t x706 = INT64_MAX;
int32_t x707 = INT32_MIN;
volatile int64_t t164 = 6867548112LL;
static uint16_t x717 = 2750U;
volatile int64_t t166 = 206LL;
volatile int64_t t167 = -6LL;
int64_t x725 = -1LL;
uint64_t x731 = 4202281198543356LLU;
static volatile uint16_t x732 = 22U;
static int64_t x737 = -408606016356517038LL;
int64_t t172 = 54357580714657LL;
uint16_t x746 = 9U;
static volatile int16_t x752 = -801;
int16_t x758 = INT16_MIN;
int64_t x764 = INT64_MIN;
int8_t x765 = INT8_MIN;
volatile int8_t x775 = INT8_MIN;
uint32_t t180 = 81535U;
static int64_t x778 = INT64_MAX;
volatile uint32_t x780 = UINT32_MAX;
int64_t t181 = 2745548390762927527LL;
uint16_t x782 = 19U;
uint64_t x783 = 32179562244LLU;
int16_t x789 = -1;
int64_t x791 = INT64_MAX;
uint64_t x793 = 212493496134936832LLU;
static uint8_t x799 = UINT8_MAX;
int16_t x814 = 594;
static uint16_t x818 = UINT16_MAX;
volatile uint64_t t193 = 5697783993484LLU;
uint8_t x829 = 2U;
static int32_t x831 = INT32_MAX;
int32_t t194 = -13888;
int16_t x833 = INT16_MIN;
uint16_t x834 = 1254U;
int32_t t195 = 103;
int64_t x847 = INT64_MIN;
static volatile int64_t x848 = -7664548LL;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	static int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	volatile int32_t t0 = -1822582;

    t0 = (x1*((x2%x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = INT32_MIN;
	int16_t x8 = 1427;
	int64_t t1 = 33121464751LL;

    t1 = (x5*((x6%x7)/x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3620771498008553829LLU;
	int8_t x12 = -5;
	uint64_t t2 = 9905830332015LLU;

    t2 = (x9*((x10%x11)/x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 14;
	uint32_t x15 = 58273116U;
	volatile int32_t x16 = -1;

    t3 = (x13*((x14%x15)/x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = UINT32_MAX;

    t4 = (x17*((x18%x19)/x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 4870;
	static uint64_t x23 = 3902315936LLU;
	int16_t x24 = -1;

    t5 = (x21*((x22%x23)/x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = -1;
	uint64_t x28 = 42817716421LLU;
	uint64_t t6 = 44307898483554955LLU;

    t6 = (x25*((x26%x27)/x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 1U;
	uint16_t x30 = 969U;
	int64_t x31 = -1LL;
	int64_t x32 = INT64_MIN;
	int64_t t7 = -214763351761111552LL;

    t7 = (x29*((x30%x31)/x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;

    t8 = (x33*((x34%x35)/x36));

    if (t8 != -640) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	volatile uint64_t t9 = 532278008510LLU;

    t9 = (x37*((x38%x39)/x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile uint8_t x44 = 2U;
	volatile int32_t t10 = 3;

    t10 = (x41*((x42%x43)/x44));

    if (t10 != 2097152) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -71629385886LL;
	volatile int16_t x46 = -4052;
	static int16_t x47 = -1;
	static volatile int16_t x48 = INT16_MAX;
	int64_t t11 = -327958LL;

    t11 = (x45*((x46%x47)/x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t12 = 63862LL;

    t12 = (x49*((x50%x51)/x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 5U;
	int32_t x58 = 843;
	uint32_t x59 = 7823U;
	uint32_t t13 = 23U;

    t13 = (x57*((x58%x59)/x60));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x61 = 957236U;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	uint64_t x64 = 1539706073941029688LLU;
	volatile uint64_t t14 = 11383LLU;

    t14 = (x61*((x62%x63)/x64));

    if (t14 != 10529596LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x66 = -5732077LL;
	int8_t x68 = -1;

    t15 = (x65*((x66%x67)/x68));

    if (t15 != -31LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = UINT32_MAX;
	static int64_t x70 = INT64_MAX;
	static int8_t x71 = INT8_MIN;

    t16 = (x69*((x70%x71)/x72));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 0;
	int64_t x74 = -8533049944012593LL;
	int64_t t17 = 8383355481746090LL;

    t17 = (x73*((x74%x75)/x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x78 = INT8_MIN;
	uint8_t x79 = 5U;
	volatile uint32_t t18 = 1U;

    t18 = (x77*((x78%x79)/x80));

    if (t18 != 5U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = 3;
	int32_t x82 = 0;
	static int8_t x83 = -29;
	int16_t x84 = -1;
	volatile int32_t t19 = -1;

    t19 = (x81*((x82%x83)/x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	static int16_t x86 = INT16_MAX;
	volatile int16_t x87 = -2;
	static volatile int8_t x88 = -13;
	int32_t t20 = -755123;

    t20 = (x85*((x86%x87)/x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1846;
	int16_t x90 = 953;
	int32_t x92 = INT32_MAX;
	int64_t t21 = 37650759315782LL;

    t21 = (x89*((x90%x91)/x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x94 = INT8_MAX;
	volatile int32_t x95 = INT32_MIN;
	uint32_t x96 = 1175U;
	volatile uint64_t t22 = 158328253LLU;

    t22 = (x93*((x94%x95)/x96));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 64LL;
	int32_t x98 = INT32_MIN;
	int8_t x100 = INT8_MIN;
	volatile int64_t t23 = 3459489907825LL;

    t23 = (x97*((x98%x99)/x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = 45;
	int16_t x102 = INT16_MIN;
	int64_t t24 = 48313LL;

    t24 = (x101*((x102%x103)/x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = -1;
	uint32_t x106 = 46880765U;
	static volatile int16_t x107 = INT16_MIN;
	volatile int16_t x108 = INT16_MIN;
	volatile uint32_t t25 = 245U;

    t25 = (x105*((x106%x107)/x108));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x109 = -1;
	uint64_t x110 = 623544194LLU;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MAX;
	static uint64_t t26 = UINT64_MAX;

    t26 = (x109*((x110%x111)/x112));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x118 = INT64_MAX;
	static int64_t x119 = 1625461755757LL;
	volatile int64_t t27 = -31974656037937LL;

    t27 = (x117*((x118%x119)/x120));

    if (t27 != -16837600487287118LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x122 = 7U;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = -1;
	static uint64_t t28 = 1002573LLU;

    t28 = (x121*((x122%x123)/x124));

    if (t28 != 18446744072945446253LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x125 = INT32_MIN;
	uint32_t x126 = 11U;
	static volatile int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MAX;
	static volatile int64_t t29 = 153013184LL;

    t29 = (x125*((x126%x127)/x128));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x129 = -1LL;
	int8_t x130 = -1;
	volatile uint8_t x131 = UINT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (x129*((x130%x131)/x132));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x134 = -1;
	int64_t x135 = -666771168761LL;
	static int8_t x136 = INT8_MAX;
	volatile int64_t t31 = 254230850967619721LL;

    t31 = (x133*((x134%x135)/x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	volatile uint16_t x138 = UINT16_MAX;
	volatile int16_t x139 = -13099;
	int8_t x140 = INT8_MAX;
	static int32_t t32 = -61110283;

    t32 = (x137*((x138%x139)/x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -27;
	int64_t x144 = 4846216490372LL;
	int64_t t33 = -1055699793069783LL;

    t33 = (x141*((x142%x143)/x144));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = 9LLU;
	int8_t x146 = 0;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -1;
	volatile uint64_t t34 = 33550248LLU;

    t34 = (x145*((x146%x147)/x148));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x155 = INT16_MIN;
	volatile int16_t x156 = INT16_MIN;

    t35 = (x153*((x154%x155)/x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = 23;
	static uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;

    t36 = (x157*((x158%x159)/x160));

    if (t36 != 2944U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 93418876839749LL;
	static volatile int16_t x162 = INT16_MAX;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	static volatile int64_t t37 = 210916942782865LL;

    t37 = (x161*((x162%x163)/x164));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = 373748172LLU;
	uint64_t t38 = 483357985LLU;

    t38 = (x165*((x166%x167)/x168));

    if (t38 != 18446744073335803444LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x170 = -1;
	int16_t x171 = -1;
	volatile int64_t x172 = -1LL;
	static int64_t t39 = -108505337239LL;

    t39 = (x169*((x170%x171)/x172));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x175 = 2;
	int8_t x176 = INT8_MIN;
	static int64_t t40 = -419LL;

    t40 = (x173*((x174%x175)/x176));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x177 = -1;
	int8_t x179 = -1;
	uint64_t t41 = 46155204LLU;

    t41 = (x177*((x178%x179)/x180));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = 13909017U;
	int64_t x182 = -3422213777925636313LL;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = 8903392LL;
	volatile uint64_t t42 = 2021LLU;

    t42 = (x181*((x182%x183)/x184));

    if (t42 != 5024810059934669687LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x185 = -1LL;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	int64_t t43 = 328313624LL;

    t43 = (x185*((x186%x187)/x188));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x189 = 66093882LL;
	int16_t x190 = -1;
	int64_t x191 = INT64_MIN;
	static int8_t x192 = 1;

    t44 = (x189*((x190%x191)/x192));

    if (t44 != -66093882LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x194 = INT64_MAX;
	volatile int16_t x195 = INT16_MIN;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t45 = 167LL;

    t45 = (x193*((x194%x195)/x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x197 = 3732;
	int16_t x198 = 1;
	volatile int16_t x199 = INT16_MAX;
	int32_t x200 = -2167;
	int32_t t46 = 1686768;

    t46 = (x197*((x198%x199)/x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x201 = UINT16_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = -16;
	int64_t x204 = 4LL;
	static uint64_t t47 = 14LLU;

    t47 = (x201*((x202%x203)/x204));

    if (t47 != 196605LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x206 = INT32_MIN;
	uint32_t x207 = 39228U;
	static int32_t x208 = 1815393;
	int64_t t48 = -4080115691953247LL;

    t48 = (x205*((x206%x207)/x208));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = 390185976806658LL;
	static int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MIN;
	int64_t t49 = 13623LL;

    t49 = (x209*((x210%x211)/x212));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x214 = 52453546;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MAX;

    t50 = (x213*((x214%x215)/x216));

    if (t50 != 886953695883940LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MIN;
	int8_t x219 = -1;
	int8_t x220 = 1;
	volatile int64_t t51 = -17291074830599LL;

    t51 = (x217*((x218%x219)/x220));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x225 = INT8_MIN;
	volatile int8_t x226 = 30;
	volatile int16_t x227 = INT16_MAX;
	static int16_t x228 = -480;
	static int32_t t52 = -1210;

    t52 = (x225*((x226%x227)/x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x234 = INT32_MAX;
	static int64_t x235 = -1505949LL;
	static volatile uint8_t x236 = 52U;
	volatile int64_t t53 = 1736LL;

    t53 = (x233*((x234%x235)/x236));

    if (t53 != -804881LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = 61677U;
	int16_t x242 = INT16_MIN;
	uint16_t x244 = 32154U;
	uint32_t t54 = 40U;

    t54 = (x241*((x242%x243)/x244));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t55 = 5699;

    t55 = (x245*((x246%x247)/x248));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x250 = 23007U;
	int64_t x251 = INT64_MAX;
	volatile uint64_t t56 = 537762119239641959LLU;

    t56 = (x249*((x250%x251)/x252));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x253 = 497493037U;
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MAX;
	volatile uint64_t t57 = 565693438711159427LLU;

    t57 = (x253*((x254%x255)/x256));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x257 = UINT16_MAX;
	volatile int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = 3U;
	int32_t t58 = -134317635;

    t58 = (x257*((x258%x259)/x260));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = 1;
	int32_t x264 = INT32_MIN;

    t59 = (x261*((x262%x263)/x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = -1;
	static volatile int32_t x268 = INT32_MIN;

    t60 = (x265*((x266%x267)/x268));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x269 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	volatile uint64_t t61 = 986129LLU;

    t61 = (x269*((x270%x271)/x272));

    if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = 16281291675LLU;
	int16_t x274 = INT16_MIN;
	static int16_t x275 = -7144;
	int32_t x276 = -2927944;
	static uint64_t t62 = 40731801LLU;

    t62 = (x273*((x274%x275)/x276));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = 32;
	int8_t x282 = -1;
	int64_t x284 = INT64_MAX;
	int64_t t63 = 51496252LL;

    t63 = (x281*((x282%x283)/x284));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x285 = 117U;
	int16_t x287 = -1;
	uint8_t x288 = 1U;

    t64 = (x285*((x286%x287)/x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x289 = 12726LL;
	int32_t x290 = INT32_MAX;
	volatile int64_t x291 = INT64_MIN;
	int16_t x292 = -1;
	static volatile int64_t t65 = 282223592760570933LL;

    t65 = (x289*((x290%x291)/x292));

    if (t65 != -27328876891722LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = 34;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t66 = 220776876380470915LLU;

    t66 = (x293*((x294%x295)/x296));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x298 = -1;
	uint32_t t67 = UINT32_MAX;

    t67 = (x297*((x298%x299)/x300));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MAX;
	int8_t x307 = 1;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t68 = 431215203875789769LL;

    t68 = (x305*((x306%x307)/x308));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x309 = UINT64_MAX;
	static int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 6U;
	static uint64_t t69 = 1022546584270LLU;

    t69 = (x309*((x310%x311)/x312));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x313 = 732LL;
	int32_t x315 = 142164741;
	int16_t x316 = -51;
	static int64_t t70 = 47LL;

    t70 = (x313*((x314%x315)/x316));

    if (t70 != 234972LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x317 = 207426572646051489LL;
	int16_t x318 = 756;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	volatile int64_t t71 = 1431286167367LL;

    t71 = (x317*((x318%x319)/x320));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	volatile int8_t x323 = INT8_MIN;
	volatile uint8_t x324 = 18U;
	int64_t t72 = 32937435579457272LL;

    t72 = (x321*((x322%x323)/x324));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x325 = 97;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 27481227U;
	int32_t x328 = -12;
	volatile uint32_t t73 = 991201827U;

    t73 = (x325*((x326%x327)/x328));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	volatile uint16_t x331 = 6206U;
	int64_t x332 = -29LL;
	static volatile int64_t t74 = -257200852LL;

    t74 = (x329*((x330%x331)/x332));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = INT8_MIN;
	uint8_t x334 = 0U;
	uint32_t x335 = 195558U;
	uint16_t x336 = UINT16_MAX;
	static volatile uint32_t t75 = 986769865U;

    t75 = (x333*((x334%x335)/x336));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x337 = 100U;
	static uint32_t x339 = 60U;
	int32_t x340 = 1;
	uint32_t t76 = 10U;

    t76 = (x337*((x338%x339)/x340));

    if (t76 != 1300U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x341 = 172U;
	static volatile int32_t x342 = -1;
	uint8_t x343 = 1U;
	static volatile int8_t x344 = INT8_MAX;
	volatile int32_t t77 = -36764;

    t77 = (x341*((x342%x343)/x344));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x345 = -3;
	static int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 38U;
	volatile int64_t t78 = -3LL;

    t78 = (x345*((x346%x347)/x348));

    if (t78 != 2586LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x350 = 32;
	static int16_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	int64_t t79 = 6170523515993533LL;

    t79 = (x349*((x350%x351)/x352));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x353 = INT32_MIN;
	static int64_t x354 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	static uint64_t t80 = 1LLU;

    t80 = (x353*((x354%x355)/x356));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int64_t x360 = 3567217799LL;
	volatile int64_t t81 = -576889940497303LL;

    t81 = (x357*((x358%x359)/x360));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x361 = INT64_MIN;
	uint64_t x362 = 131569011941LLU;
	volatile uint32_t x364 = UINT32_MAX;
	uint64_t t82 = 98787338LLU;

    t82 = (x361*((x362%x363)/x364));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = -13799;
	int8_t x367 = -1;
	volatile uint64_t t83 = 464633661521976LLU;

    t83 = (x365*((x366%x367)/x368));

    if (t83 != 18446744072855835084LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x369 = UINT16_MAX;
	static int8_t x371 = INT8_MAX;
	int32_t x372 = -1;
	volatile int32_t t84 = 7359;

    t84 = (x369*((x370%x371)/x372));

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x373 = 78991624LLU;
	int32_t x374 = -1;
	volatile int8_t x376 = 1;
	uint64_t t85 = 487789209018869418LLU;

    t85 = (x373*((x374%x375)/x376));

    if (t85 != 303564811032LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	static volatile int64_t x380 = 845LL;
	uint64_t t86 = 1381LLU;

    t86 = (x377*((x378%x379)/x380));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	static volatile int32_t t87 = 13652017;

    t87 = (x381*((x382%x383)/x384));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x385 = -7;
	static volatile int64_t x386 = INT64_MAX;
	int16_t x387 = 11;
	static int16_t x388 = INT16_MAX;

    t88 = (x385*((x386%x387)/x388));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x389 = 2081139666284249648LLU;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = -40;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t89 = 14263LLU;

    t89 = (x389*((x390%x391)/x392));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MAX;
	volatile uint32_t t90 = 143768580U;

    t90 = (x393*((x394%x395)/x396));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x397 = 238436LL;
	volatile int8_t x398 = 0;
	static uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t91 = 638683LL;

    t91 = (x397*((x398%x399)/x400));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = 0;
	static volatile uint16_t x402 = UINT16_MAX;
	static int64_t x403 = -3LL;
	int8_t x404 = -4;

    t92 = (x401*((x402%x403)/x404));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x405 = 177LLU;
	uint8_t x406 = 86U;
	uint16_t x407 = 138U;
	int8_t x408 = INT8_MIN;
	uint64_t t93 = 12077593586LLU;

    t93 = (x405*((x406%x407)/x408));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = -1;
	volatile int64_t x410 = 25703564LL;
	uint64_t x411 = UINT64_MAX;
	static int8_t x412 = -1;
	volatile uint64_t t94 = 8405LLU;

    t94 = (x409*((x410%x411)/x412));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x413 = -1;
	static int64_t x414 = INT64_MIN;
	int16_t x415 = -56;
	int8_t x416 = INT8_MIN;

    t95 = (x413*((x414%x415)/x416));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x418 = INT32_MAX;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	static volatile uint64_t t96 = 222482036257LLU;

    t96 = (x417*((x418%x419)/x420));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x421 = INT8_MAX;
	volatile int8_t x422 = -1;
	int64_t x423 = INT64_MAX;
	uint32_t x424 = 2165U;
	int64_t t97 = 742909516796120330LL;

    t97 = (x421*((x422%x423)/x424));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	int64_t x427 = -1LL;
	volatile uint64_t x428 = 110381955LLU;
	uint64_t t98 = 1772378345814LLU;

    t98 = (x425*((x426%x427)/x428));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x429 = 753;
	int64_t x430 = 37082070591164LL;
	static int32_t x431 = INT32_MAX;
	volatile int64_t x432 = INT64_MIN;
	int64_t t99 = 6310146695413675LL;

    t99 = (x429*((x430%x431)/x432));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = 18364LL;
	int32_t x434 = -87260;
	int8_t x435 = INT8_MAX;
	uint32_t x436 = UINT32_MAX;
	volatile int64_t t100 = -1LL;

    t100 = (x433*((x434%x435)/x436));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x437 = INT8_MIN;
	int16_t x438 = -21;
	uint16_t x439 = 105U;
	int16_t x440 = -1;
	int32_t t101 = 947;

    t101 = (x437*((x438%x439)/x440));

    if (t101 != -2688) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x441 = -12;
	static int16_t x442 = INT16_MIN;
	volatile int32_t x443 = INT32_MIN;
	uint8_t x444 = 4U;
	volatile int32_t t102 = 0;

    t102 = (x441*((x442%x443)/x444));

    if (t102 != 98304) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x445 = -1;
	static uint64_t x446 = UINT64_MAX;
	static int32_t x447 = 5073;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t103 = 262150882780282644LLU;

    t103 = (x445*((x446%x447)/x448));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = -1;
	volatile int64_t x450 = 70603042395714LL;
	uint8_t x451 = 74U;
	uint32_t x452 = 51028148U;
	static volatile int64_t t104 = 27LL;

    t104 = (x449*((x450%x451)/x452));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x453 = -221747292LL;
	volatile int64_t x455 = -1LL;
	int64_t t105 = 30299388LL;

    t105 = (x453*((x454%x455)/x456));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x458 = 4U;
	static uint32_t x459 = 10U;
	int16_t x460 = -1;
	uint32_t t106 = 137542626U;

    t106 = (x457*((x458%x459)/x460));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x461 = UINT32_MAX;
	int16_t x462 = -1;
	uint8_t x463 = 15U;
	int64_t x464 = INT64_MAX;
	volatile int64_t t107 = -355378971315237916LL;

    t107 = (x461*((x462%x463)/x464));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = INT32_MAX;
	volatile int32_t x466 = INT32_MIN;
	int16_t x467 = 50;
	int64_t t108 = 95LL;

    t108 = (x465*((x466%x467)/x468));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x469 = UINT16_MAX;
	uint16_t x470 = 79U;
	int32_t x471 = -1;
	static int64_t x472 = -917798567049355688LL;

    t109 = (x469*((x470%x471)/x472));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = -1LL;
	volatile int64_t x474 = INT64_MIN;
	int32_t x475 = INT32_MIN;
	int64_t t110 = 563LL;

    t110 = (x473*((x474%x475)/x476));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x477 = 8927433008522956LLU;
	int8_t x478 = -1;
	volatile int16_t x479 = 2;
	volatile int32_t x480 = -60649920;
	volatile uint64_t t111 = 208082650426LLU;

    t111 = (x477*((x478%x479)/x480));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	static int32_t x483 = -1;
	volatile int32_t t112 = 2;

    t112 = (x481*((x482%x483)/x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x485 = -1;
	int32_t x486 = INT32_MAX;
	static volatile int64_t x487 = INT64_MAX;
	uint32_t x488 = 26106U;

    t113 = (x485*((x486%x487)/x488));

    if (t113 != -82260LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x490 = 0U;
	uint64_t x492 = 4421668LLU;
	uint64_t t114 = 1941433045225268LLU;

    t114 = (x489*((x490%x491)/x492));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x494 = INT8_MIN;
	volatile int16_t x495 = INT16_MIN;
	volatile int32_t t115 = 41;

    t115 = (x493*((x494%x495)/x496));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x497 = -35766769747361LL;
	volatile int16_t x498 = INT16_MIN;
	static int16_t x500 = 778;

    t116 = (x497*((x498%x499)/x500));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x501 = INT64_MIN;
	int16_t x502 = -1;
	int64_t x503 = -1LL;
	int64_t x504 = INT64_MIN;
	volatile int64_t t117 = 33274659LL;

    t117 = (x501*((x502%x503)/x504));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x506 = INT64_MIN;
	volatile int32_t x507 = INT32_MAX;
	uint16_t x508 = 2206U;
	int64_t t118 = 67897644581LL;

    t118 = (x505*((x506%x507)/x508));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x509 = 14U;
	uint32_t x510 = 1097475U;
	int32_t x511 = INT32_MIN;
	volatile uint32_t t119 = 16U;

    t119 = (x509*((x510%x511)/x512));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x513 = INT8_MAX;
	uint64_t x515 = 17370409875220LLU;
	uint64_t t120 = 4354882792500851LLU;

    t120 = (x513*((x514%x515)/x516));

    if (t120 != 364851672568119LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x517 = INT8_MAX;
	uint64_t x518 = 209526262396875LLU;
	volatile int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MIN;
	volatile uint64_t t121 = 7LLU;

    t121 = (x517*((x518%x519)/x520));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = -1LL;
	static int64_t x524 = -146459LL;
	volatile int64_t t122 = -8452147996835LL;

    t122 = (x521*((x522%x523)/x524));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = 221799;
	static volatile int8_t x526 = 0;
	int8_t x527 = -1;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t123 = -1099;

    t123 = (x525*((x526%x527)/x528));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x530 = INT16_MAX;
	volatile uint64_t x531 = UINT64_MAX;
	int16_t x532 = INT16_MIN;
	volatile uint64_t t124 = 25149757LLU;

    t124 = (x529*((x530%x531)/x532));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = -14921176870499LL;
	static int16_t x535 = -1;
	static int32_t x536 = INT32_MIN;
	int64_t t125 = -787087562984464LL;

    t125 = (x533*((x534%x535)/x536));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x537 = 23;
	int8_t x538 = 0;
	int64_t x539 = INT64_MAX;
	volatile int64_t t126 = 345611634241636267LL;

    t126 = (x537*((x538%x539)/x540));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x547 = INT16_MAX;
	uint16_t x548 = 12249U;
	int32_t t127 = -217217;

    t127 = (x545*((x546%x547)/x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x550 = -1;
	int32_t x551 = -1;
	uint32_t x552 = 824U;
	volatile uint32_t t128 = 3701982U;

    t128 = (x549*((x550%x551)/x552));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x554 = 930103901479LLU;
	uint8_t x555 = UINT8_MAX;
	uint32_t x556 = 56759555U;
	volatile uint64_t t129 = 939812703LLU;

    t129 = (x553*((x554%x555)/x556));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x557 = -1;
	volatile int8_t x558 = -25;
	int64_t x559 = INT64_MIN;

    t130 = (x557*((x558%x559)/x560));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x561 = INT64_MIN;
	static int32_t x562 = INT32_MIN;
	int32_t x563 = INT32_MIN;
	int64_t x564 = -1LL;
	int64_t t131 = 111731960825LL;

    t131 = (x561*((x562%x563)/x564));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x565 = INT8_MIN;
	uint8_t x566 = 3U;
	volatile int16_t x567 = 301;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t132 = 44298U;

    t132 = (x565*((x566%x567)/x568));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = INT32_MIN;
	uint16_t x574 = UINT16_MAX;
	static volatile int32_t x575 = -458;
	uint64_t x576 = UINT64_MAX;
	uint64_t t133 = 39780708813727LLU;

    t133 = (x573*((x574%x575)/x576));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = INT32_MIN;
	uint8_t x578 = 33U;
	int64_t x580 = -1LL;
	volatile int64_t t134 = 3171LL;

    t134 = (x577*((x578%x579)/x580));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x581 = UINT8_MAX;
	int16_t x582 = 845;
	static volatile int32_t x583 = 642931;
	static volatile int64_t x584 = -33920098251LL;
	volatile int64_t t135 = 4LL;

    t135 = (x581*((x582%x583)/x584));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x585 = 22U;
	int8_t x586 = 0;
	static volatile int32_t x588 = INT32_MIN;
	static volatile int64_t t136 = 1LL;

    t136 = (x585*((x586%x587)/x588));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x590 = 172U;
	int64_t x591 = -10927278724LL;
	volatile uint64_t t137 = 173862799509LLU;

    t137 = (x589*((x590%x591)/x592));

    if (t137 != 558630777893929812LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x593 = UINT64_MAX;
	int64_t x594 = 103484176246LL;
	uint8_t x595 = UINT8_MAX;
	static int32_t x596 = INT32_MAX;
	uint64_t t138 = 27479392704LLU;

    t138 = (x593*((x594%x595)/x596));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x597 = INT8_MAX;
	uint32_t x598 = UINT32_MAX;
	int32_t x600 = 1101;
	static volatile uint32_t t139 = 1812409U;

    t139 = (x597*((x598%x599)/x600));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x601 = INT32_MIN;
	int16_t x602 = INT16_MIN;
	int32_t x603 = 854;
	int16_t x604 = -217;
	int32_t t140 = INT32_MIN;

    t140 = (x601*((x602%x603)/x604));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x605 = 2U;
	uint8_t x606 = 7U;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = -1;
	volatile uint32_t t141 = 114U;

    t141 = (x605*((x606%x607)/x608));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x609 = 59U;
	int8_t x610 = 1;
	static volatile int16_t x611 = INT16_MIN;
	uint16_t x612 = UINT16_MAX;
	int32_t t142 = -10;

    t142 = (x609*((x610%x611)/x612));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t t143 = 4836685528756149989LLU;

    t143 = (x617*((x618%x619)/x620));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x621 = 360913850694LLU;
	int8_t x622 = -1;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -137590770LL;
	volatile uint64_t t144 = 3LLU;

    t144 = (x621*((x622%x623)/x624));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x626 = UINT8_MAX;
	static int16_t x627 = INT16_MIN;
	volatile int32_t x628 = -1;
	volatile int32_t t145 = 0;

    t145 = (x625*((x626%x627)/x628));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = 488445;
	int16_t x631 = 877;
	int8_t x632 = -1;
	volatile int32_t t146 = -25;

    t146 = (x629*((x630%x631)/x632));

    if (t146 != 106624) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x633 = 102606557066942624LLU;
	volatile int64_t x634 = -1LL;
	int32_t x635 = -982627;
	volatile uint64_t t147 = 200726LLU;

    t147 = (x633*((x634%x635)/x636));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x638 = -1;
	int16_t x639 = -9;
	volatile int64_t x640 = INT64_MIN;
	int64_t t148 = 25411751LL;

    t148 = (x637*((x638%x639)/x640));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x641 = INT8_MAX;
	int16_t x643 = INT16_MAX;
	int32_t x644 = 3518;

    t149 = (x641*((x642%x643)/x644));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x649 = INT32_MAX;
	volatile int64_t x650 = -1LL;
	int64_t x651 = -1LL;
	static int8_t x652 = -1;
	int64_t t150 = -1907LL;

    t150 = (x649*((x650%x651)/x652));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x653 = 1;
	int32_t x654 = INT32_MAX;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t151 = 2413265;

    t151 = (x653*((x654%x655)/x656));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x657 = -1;
	volatile uint8_t x658 = 0U;
	volatile int32_t x659 = -1;
	int32_t x660 = INT32_MIN;

    t152 = (x657*((x658%x659)/x660));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x661 = -1LL;
	int16_t x662 = INT16_MIN;
	volatile int8_t x663 = -1;
	static int8_t x664 = INT8_MIN;
	int64_t t153 = 1444805634676469305LL;

    t153 = (x661*((x662%x663)/x664));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x665 = -1;
	volatile int8_t x667 = INT8_MAX;
	int64_t x668 = INT64_MIN;
	volatile int64_t t154 = -94LL;

    t154 = (x665*((x666%x667)/x668));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x669 = 11U;
	int8_t x671 = 3;
	int32_t x672 = INT32_MIN;
	volatile uint32_t t155 = 158U;

    t155 = (x669*((x670%x671)/x672));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x673 = INT16_MIN;
	uint16_t x674 = UINT16_MAX;
	static int8_t x675 = INT8_MIN;
	static int32_t x676 = -943156;
	volatile int32_t t156 = -1;

    t156 = (x673*((x674%x675)/x676));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x677 = 11497842U;
	uint32_t x678 = 498856814U;
	static int8_t x679 = INT8_MIN;
	uint32_t x680 = 1479964U;
	static uint32_t t157 = 986U;

    t157 = (x677*((x678%x679)/x680));

    if (t157 != 3874772754U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x681 = 828413LL;
	int32_t x682 = INT32_MIN;

    t158 = (x681*((x682%x683)/x684));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MAX;
	uint64_t t159 = 12553172LLU;

    t159 = (x685*((x686%x687)/x688));

    if (t159 != 850680LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x689 = 1266527LLU;
	int64_t x690 = INT64_MAX;
	volatile int16_t x691 = 2;
	static uint64_t x692 = 1LLU;

    t160 = (x689*((x690%x691)/x692));

    if (t160 != 1266527LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x694 = INT64_MIN;
	int32_t x695 = -270823614;
	int64_t x696 = -1LL;

    t161 = (x693*((x694%x695)/x696));

    if (t161 != 479295629745009450LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x697 = INT16_MAX;
	int16_t x698 = -2594;
	int32_t x699 = INT32_MAX;
	volatile int32_t t162 = 32333899;

    t162 = (x697*((x698%x699)/x700));

    if (t162 != -655340) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x701 = INT16_MIN;
	static uint32_t x703 = 1437U;
	uint16_t x704 = 25U;
	static uint32_t t163 = 6522U;

    t163 = (x701*((x702%x703)/x704));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x705 = -1LL;
	static uint8_t x708 = 2U;

    t164 = (x705*((x706%x707)/x708));

    if (t164 != -1073741823LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x709 = -147;
	int64_t x710 = INT64_MIN;
	int8_t x711 = -6;
	static int32_t x712 = 43297;
	volatile int64_t t165 = -37060385163224128LL;

    t165 = (x709*((x710%x711)/x712));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x718 = 77U;
	int64_t x719 = INT64_MAX;
	volatile int64_t x720 = INT64_MIN;

    t166 = (x717*((x718%x719)/x720));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x721 = 1372;
	int64_t x722 = INT64_MAX;
	volatile int8_t x723 = 16;
	uint16_t x724 = 4053U;

    t167 = (x721*((x722%x723)/x724));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x726 = INT32_MIN;
	uint64_t x727 = 409726058641LLU;
	uint16_t x728 = 1515U;
	uint64_t t168 = 5LLU;

    t168 = (x725*((x726%x727)/x728));

    if (t168 != 18446744073645011183LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x729 = -2069021859555LL;
	int8_t x730 = INT8_MAX;
	uint64_t t169 = 21868075430541LLU;

    t169 = (x729*((x730%x731)/x732));

    if (t169 != 18446733728600253841LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x733 = -1;
	uint16_t x734 = 2U;
	volatile int8_t x735 = 4;
	volatile int64_t x736 = INT64_MIN;
	static int64_t t170 = -40898480351521LL;

    t170 = (x733*((x734%x735)/x736));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x738 = -1LL;
	volatile int8_t x739 = 3;
	volatile int32_t x740 = INT32_MAX;
	int64_t t171 = 192042601254LL;

    t171 = (x737*((x738%x739)/x740));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = 57065222U;
	volatile int8_t x743 = -23;
	volatile int64_t x744 = -1LL;

    t172 = (x741*((x742%x743)/x744));

    if (t172 != 122546631114489856LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x745 = -1LL;
	volatile int64_t x747 = 80664714237023444LL;
	uint16_t x748 = 46U;
	int64_t t173 = 3552869088LL;

    t173 = (x745*((x746%x747)/x748));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x749 = 108324415U;
	uint64_t x750 = UINT64_MAX;
	int16_t x751 = INT16_MAX;
	volatile uint64_t t174 = 507242502LLU;

    t174 = (x749*((x750%x751)/x752));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x753 = UINT32_MAX;
	int64_t x754 = INT64_MIN;
	static int16_t x755 = INT16_MAX;
	int16_t x756 = 3881;
	int64_t t175 = 20377LL;

    t175 = (x753*((x754%x755)/x756));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x757 = 8;
	int16_t x759 = INT16_MIN;
	int16_t x760 = -1;
	int32_t t176 = 113503;

    t176 = (x757*((x758%x759)/x760));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x761 = 31;
	int64_t x762 = INT64_MIN;
	volatile int64_t x763 = INT64_MIN;
	volatile int64_t t177 = 882077764862209718LL;

    t177 = (x761*((x762%x763)/x764));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x766 = INT8_MIN;
	volatile int64_t x767 = 232728444341618822LL;
	int32_t x768 = INT32_MIN;
	static int64_t t178 = 2610LL;

    t178 = (x765*((x766%x767)/x768));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x769 = 26LL;
	volatile int32_t x770 = -1;
	int16_t x771 = INT16_MIN;
	int8_t x772 = -1;
	int64_t t179 = 0LL;

    t179 = (x769*((x770%x771)/x772));

    if (t179 != 26LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x773 = 118U;
	int16_t x774 = -1;
	uint16_t x776 = 1U;

    t180 = (x773*((x774%x775)/x776));

    if (t180 != 4294967178U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x777 = INT8_MAX;
	volatile int32_t x779 = INT32_MIN;

    t181 = (x777*((x778%x779)/x780));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x781 = -1;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t182 = 1709913280LLU;

    t182 = (x781*((x782%x783)/x784));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x785 = INT64_MAX;
	static int8_t x786 = 1;
	static uint16_t x787 = 105U;
	static int64_t x788 = -176154980069LL;
	static int64_t t183 = -747LL;

    t183 = (x785*((x786%x787)/x788));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x790 = -1;
	static volatile uint8_t x792 = 2U;
	static int64_t t184 = -755516993244103LL;

    t184 = (x789*((x790%x791)/x792));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x794 = INT16_MIN;
	int32_t x795 = -1;
	static int16_t x796 = INT16_MAX;
	static uint64_t t185 = 1LLU;

    t185 = (x793*((x794%x795)/x796));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x798 = UINT16_MAX;
	int64_t x800 = -6027494444564779LL;
	volatile int64_t t186 = 775023499005718LL;

    t186 = (x797*((x798%x799)/x800));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile uint16_t x802 = 1U;
	int16_t x803 = INT16_MAX;
	uint8_t x804 = UINT8_MAX;
	uint64_t t187 = 6962LLU;

    t187 = (x801*((x802%x803)/x804));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x805 = 112935813629002LL;
	int64_t x806 = -578LL;
	static uint16_t x807 = 54U;
	uint8_t x808 = UINT8_MAX;
	volatile int64_t t188 = -8249844184LL;

    t188 = (x805*((x806%x807)/x808));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x809 = 27;
	volatile uint8_t x810 = 0U;
	int32_t x811 = 50;
	int64_t x812 = -1LL;
	volatile int64_t t189 = -28625LL;

    t189 = (x809*((x810%x811)/x812));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x813 = INT32_MIN;
	int8_t x815 = 28;
	int32_t x816 = INT32_MIN;
	volatile int32_t t190 = 4;

    t190 = (x813*((x814%x815)/x816));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x817 = -1;
	volatile int8_t x819 = 15;
	uint64_t x820 = 599124723582LLU;
	uint64_t t191 = 51080077166781LLU;

    t191 = (x817*((x818%x819)/x820));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x821 = -18;
	static uint32_t x822 = 15U;
	int64_t x823 = INT64_MAX;
	int32_t x824 = INT32_MIN;
	int64_t t192 = -21932LL;

    t192 = (x821*((x822%x823)/x824));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x825 = UINT8_MAX;
	uint16_t x826 = 3U;
	static int32_t x827 = -1;
	uint64_t x828 = UINT64_MAX;

    t193 = (x825*((x826%x827)/x828));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x830 = UINT16_MAX;
	volatile uint8_t x832 = 1U;

    t194 = (x829*((x830%x831)/x832));

    if (t194 != 131070) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x835 = INT16_MAX;
	volatile uint16_t x836 = UINT16_MAX;

    t195 = (x833*((x834%x835)/x836));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x837 = 1112U;
	static uint16_t x838 = 9U;
	static volatile int8_t x839 = INT8_MAX;
	int8_t x840 = INT8_MIN;
	volatile int32_t t196 = 617197;

    t196 = (x837*((x838%x839)/x840));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x841 = 2U;
	volatile uint8_t x842 = 3U;
	int32_t x843 = INT32_MAX;
	uint16_t x844 = 29710U;
	uint32_t t197 = 1032985035U;

    t197 = (x841*((x842%x843)/x844));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x845 = 86924613493195173LLU;
	uint64_t x846 = 476976339LLU;
	uint64_t t198 = 29483714LLU;

    t198 = (x845*((x846%x847)/x848));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x849 = UINT8_MAX;
	int16_t x850 = INT16_MIN;
	volatile uint64_t x851 = 385528LLU;
	uint16_t x852 = 302U;
	uint64_t t199 = 9566733925429948LLU;

    t199 = (x849*((x850%x851)/x852));

    if (t199 != 160650LLU) { NG(); } else { ; }
	
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

