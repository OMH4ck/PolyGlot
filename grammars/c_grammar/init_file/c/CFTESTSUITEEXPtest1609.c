
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

uint8_t x1 = UINT8_MAX;
static volatile uint32_t x4 = UINT32_MAX;
int8_t x11 = -1;
uint32_t x12 = UINT32_MAX;
static int64_t t4 = 2177512768394232868LL;
int16_t x22 = INT16_MAX;
volatile int8_t x28 = -62;
volatile int32_t x32 = INT32_MIN;
static volatile int64_t t7 = 137674667730976477LL;
static uint8_t x33 = UINT8_MAX;
int64_t x36 = INT64_MAX;
volatile int64_t x41 = INT64_MAX;
static int32_t x50 = INT32_MIN;
volatile int32_t x52 = -429;
uint16_t x53 = UINT16_MAX;
volatile int32_t t13 = 195;
int64_t x64 = INT64_MAX;
uint32_t x67 = 1037840502U;
static volatile int16_t x69 = INT16_MIN;
volatile uint64_t x71 = 13LLU;
uint64_t x72 = UINT64_MAX;
volatile uint64_t x75 = UINT64_MAX;
static volatile int32_t x77 = -1;
int8_t x81 = -1;
uint64_t x89 = 1985653268LLU;
uint32_t x95 = 1471917U;
static volatile int32_t t23 = 29;
static int16_t x98 = -1;
volatile uint32_t t24 = UINT32_MAX;
int64_t x102 = 476506LL;
volatile uint64_t t25 = 255LLU;
int32_t x105 = 110157053;
uint64_t x108 = UINT64_MAX;
int32_t t29 = 85;
int16_t x122 = 1;
uint32_t x123 = UINT32_MAX;
volatile int16_t x124 = -1;
volatile int64_t t30 = -258713LL;
int8_t x125 = 1;
static int32_t t31 = -2181;
static int32_t x132 = -1;
int32_t x136 = INT32_MAX;
int16_t x147 = INT16_MAX;
int64_t x148 = INT64_MIN;
int16_t x149 = 15212;
uint64_t x153 = 12432001240645LLU;
int32_t x155 = -1;
volatile uint64_t x159 = 585326651742221LLU;
volatile uint32_t x161 = UINT32_MAX;
int32_t x174 = -11;
uint16_t x178 = 131U;
static volatile uint64_t x181 = UINT64_MAX;
volatile int16_t x184 = INT16_MIN;
uint64_t x188 = 1257111LLU;
int16_t x190 = -1;
volatile int64_t x203 = INT64_MIN;
int32_t x214 = INT32_MAX;
volatile int16_t x216 = INT16_MIN;
int64_t x220 = INT64_MIN;
int64_t x224 = -1LL;
int64_t x225 = INT64_MIN;
static volatile int16_t x235 = 3;
uint16_t x239 = UINT16_MAX;
volatile int16_t x251 = INT16_MIN;
int32_t x252 = -1;
int8_t x254 = -1;
volatile int16_t x256 = INT16_MIN;
int64_t t63 = INT64_MAX;
int64_t t66 = 30697901375LL;
volatile uint32_t x269 = UINT32_MAX;
int8_t x274 = INT8_MIN;
static int64_t t69 = 86436498364110LL;
int8_t x283 = -1;
volatile int32_t t70 = 6;
uint64_t x287 = UINT64_MAX;
volatile int16_t x289 = INT16_MIN;
int8_t x290 = -11;
uint64_t t75 = UINT64_MAX;
volatile int32_t t76 = INT32_MIN;
uint64_t x310 = 16209829751753803LLU;
volatile int64_t x319 = INT64_MIN;
int64_t x322 = 3334326247LL;
uint32_t t80 = 177418762U;
static volatile int16_t x330 = 0;
uint8_t x349 = 2U;
uint8_t x351 = 4U;
int64_t x353 = INT64_MIN;
volatile int32_t x355 = INT32_MAX;
volatile int32_t x359 = INT32_MIN;
uint64_t x362 = 94512124LLU;
static uint64_t x366 = 1691LLU;
uint16_t x368 = 33U;
int16_t x376 = -12;
int32_t t95 = -701;
volatile int64_t x392 = INT64_MAX;
static int64_t x396 = -1LL;
int8_t x398 = INT8_MIN;
int32_t x402 = -1;
uint8_t x408 = UINT8_MAX;
static volatile uint64_t t103 = 4672332LLU;
int32_t x422 = INT32_MAX;
int8_t x466 = -1;
uint32_t x477 = 17253U;
int32_t t121 = -23419;
volatile int16_t x494 = 339;
int32_t t126 = 35779875;
int8_t x514 = INT8_MIN;
static uint8_t x515 = 5U;
int8_t x522 = INT8_MAX;
static uint16_t x537 = 13762U;
static uint8_t x544 = 2U;
uint8_t x552 = 3U;
uint64_t x558 = UINT64_MAX;
int64_t t139 = -35086LL;
uint32_t x565 = 1904873286U;
static int64_t x572 = INT64_MAX;
int64_t t142 = -1433LL;
uint16_t x576 = 14627U;
int8_t x579 = INT8_MIN;
int8_t x580 = 1;
volatile int16_t x584 = -1;
uint64_t x587 = 550117688119895673LLU;
int32_t x599 = -1;
volatile int64_t x601 = INT64_MIN;
static int64_t t150 = INT64_MIN;
static int32_t x616 = -1;
volatile int16_t x617 = INT16_MAX;
volatile int16_t x619 = -182;
static uint16_t x624 = UINT16_MAX;
static int32_t t155 = 120;
uint16_t x625 = UINT16_MAX;
volatile int32_t t156 = 147788058;
uint8_t x630 = 24U;
uint8_t x634 = 107U;
int64_t x635 = -1LL;
static int64_t t159 = INT64_MIN;
int8_t x643 = 3;
volatile int64_t x644 = -1LL;
int64_t x646 = -1LL;
static int8_t x647 = INT8_MIN;
uint32_t x648 = 6938730U;
int16_t x649 = INT16_MIN;
static volatile uint32_t x661 = 0U;
static uint32_t t165 = 646147U;
int64_t x670 = INT64_MIN;
int32_t t168 = 0;
uint64_t x678 = 359740LLU;
static uint8_t x680 = 18U;
static int32_t t170 = 36542;
int32_t t171 = -182571187;
int16_t x689 = INT16_MAX;
int64_t t173 = -476688550307368949LL;
int8_t x707 = 25;
volatile uint16_t x712 = UINT16_MAX;
uint32_t x719 = 214U;
int16_t x721 = INT16_MAX;
volatile int16_t x722 = 244;
static int16_t x723 = 1;
static volatile int8_t x727 = -1;
volatile int64_t x734 = INT64_MAX;
static int64_t x738 = INT64_MIN;
uint32_t x741 = 2103307032U;
uint32_t t185 = 94326U;
uint8_t x748 = 6U;
int8_t x749 = -1;
uint16_t x755 = 26U;
static int32_t x756 = INT32_MAX;
int16_t x786 = INT16_MAX;
static uint16_t x789 = UINT16_MAX;
int16_t x790 = 13294;
int32_t x791 = -1;
static uint64_t x793 = 12543066LLU;
uint8_t x796 = 1U;
volatile int8_t x797 = 1;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	uint32_t x3 = 5U;
	volatile uint32_t t0 = 1510801152U;

    t0 = (x1|((x2>x3)*x4));

    if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 7452274LLU;
	int64_t x6 = 15210445LL;
	volatile uint16_t x7 = 30U;
	int16_t x8 = 6;
	volatile uint64_t t1 = 511062443223LLU;

    t1 = (x5|((x6>x7)*x8));

    if (t1 != 7452278LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	static uint64_t x10 = 1207LLU;
	volatile uint32_t t2 = 5U;

    t2 = (x9|((x10>x11)*x12));

    if (t2 != 255U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MAX;
	static int16_t x15 = -1530;
	uint16_t x16 = 1933U;
	int32_t t3 = 109302;

    t3 = (x13|((x14>x15)*x16));

    if (t3 != -2147481715) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 76922673620838LL;
	int8_t x18 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;

    t4 = (x17|((x18>x19)*x20));

    if (t4 != 76922673620838LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	static uint16_t x23 = 270U;
	int8_t x24 = INT8_MAX;
	volatile int64_t t5 = 124212612516906LL;

    t5 = (x21|((x22>x23)*x24));

    if (t5 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int64_t x26 = -13LL;
	int16_t x27 = 252;
	int32_t t6 = 106302565;

    t6 = (x25|((x26>x27)*x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = 6768;

    t7 = (x29|((x30>x31)*x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -10990;
	volatile int16_t x35 = INT16_MIN;
	volatile int64_t t8 = INT64_MAX;

    t8 = (x33|((x34>x35)*x36));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	uint64_t x38 = UINT64_MAX;
	static uint8_t x39 = 96U;
	int32_t x40 = -1;
	volatile int32_t t9 = -19878;

    t9 = (x37|((x38>x39)*x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 1;
	uint8_t x43 = 62U;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = INT64_MAX;

    t10 = (x41|((x42>x43)*x44));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 5981;
	int8_t x46 = INT8_MAX;
	static uint32_t x47 = 1428U;
	static uint32_t x48 = 246447U;
	volatile uint32_t t11 = 318U;

    t11 = (x45|((x46>x47)*x48));

    if (t11 != 5981U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 12549923;
	uint16_t x51 = 14194U;
	static int32_t t12 = -4;

    t12 = (x49|((x50>x51)*x52));

    if (t12 != 12549923) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = INT16_MIN;
	uint64_t x55 = 817676076676LLU;
	uint16_t x56 = 7U;

    t13 = (x53|((x54>x55)*x56));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = -1;
	uint8_t x60 = 1U;
	static volatile int32_t t14 = 1;

    t14 = (x57|((x58>x59)*x60));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x61 = INT8_MIN;
	int8_t x62 = 47;
	volatile int32_t x63 = INT32_MAX;
	static int64_t t15 = -107529824890LL;

    t15 = (x61|((x62>x63)*x64));

    if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MAX;
	uint8_t x66 = 4U;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 90539394U;

    t16 = (x65|((x66>x67)*x68));

    if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x70 = UINT8_MAX;
	uint64_t t17 = UINT64_MAX;

    t17 = (x69|((x70>x71)*x72));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 36U;
	int8_t x74 = -2;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -2742450902LL;

    t18 = (x73|((x74>x75)*x76));

    if (t18 != 36LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x78 = INT64_MIN;
	static uint8_t x79 = 94U;
	static int8_t x80 = 2;
	volatile int32_t t19 = 19862610;

    t19 = (x77|((x78>x79)*x80));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 16U;
	int32_t x83 = 603920;
	uint32_t x84 = UINT32_MAX;
	static uint32_t t20 = UINT32_MAX;

    t20 = (x81|((x82>x83)*x84));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 148911173350LLU;
	int64_t x86 = 1LL;
	int16_t x87 = 11;
	uint32_t x88 = 181076315U;
	volatile uint64_t t21 = 4850209035LLU;

    t21 = (x85|((x86>x87)*x88));

    if (t21 != 148911173350LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = 175332U;
	volatile int32_t x91 = 6;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t22 = 2994670907190205343LLU;

    t22 = (x89|((x90>x91)*x92));

    if (t22 != 18446744073709529620LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	uint16_t x94 = UINT16_MAX;
	volatile uint16_t x96 = 0U;

    t23 = (x93|((x94>x95)*x96));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int32_t x99 = INT32_MAX;
	static int32_t x100 = INT32_MIN;

    t24 = (x97|((x98>x99)*x100));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	volatile int16_t x103 = INT16_MIN;
	uint64_t x104 = 6744LLU;

    t25 = (x101|((x102>x103)*x104));

    if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x106 = -1;
	volatile int64_t x107 = INT64_MIN;
	uint64_t t26 = UINT64_MAX;

    t26 = (x105|((x106>x107)*x108));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	uint8_t x110 = 81U;
	static int64_t x111 = -1LL;
	volatile int32_t x112 = -17;
	volatile int64_t t27 = 159LL;

    t27 = (x109|((x110>x111)*x112));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -222412080407928LL;
	int32_t x114 = INT32_MIN;
	static int64_t x115 = 1653816482137273LL;
	static int32_t x116 = 923392438;
	volatile int64_t t28 = 65082LL;

    t28 = (x113|((x114>x115)*x116));

    if (t28 != -222412080407928LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1;
	int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;

    t29 = (x117|((x118>x119)*x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 5164104872786LL;

    t30 = (x121|((x122>x123)*x124));

    if (t30 != 5164104872786LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = 0;
	static int16_t x127 = 1129;
	uint16_t x128 = 44U;

    t31 = (x125|((x126>x127)*x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -74547649LL;
	static int16_t x130 = INT16_MAX;
	int8_t x131 = -1;
	volatile int64_t t32 = 163980142LL;

    t32 = (x129|((x130>x131)*x132));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 2U;
	volatile uint32_t x134 = 13808U;
	int8_t x135 = 4;
	int32_t t33 = INT32_MAX;

    t33 = (x133|((x134>x135)*x136));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	static int32_t x138 = INT32_MIN;
	static uint32_t x139 = 23520363U;
	static uint32_t x140 = 1273592736U;
	volatile int64_t t34 = -5LL;

    t34 = (x137|((x138>x139)*x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	uint32_t x142 = 1U;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = INT32_MAX;
	volatile int32_t t35 = 58166661;

    t35 = (x141|((x142>x143)*x144));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MAX;
	volatile int8_t x146 = INT8_MAX;
	volatile int64_t t36 = 33473955124289LL;

    t36 = (x145|((x146>x147)*x148));

    if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 31986U;
	int16_t x151 = -927;
	static int64_t x152 = INT64_MAX;
	static int64_t t37 = INT64_MAX;

    t37 = (x149|((x150>x151)*x152));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = -1;
	static int64_t x156 = INT64_MIN;
	volatile uint64_t t38 = 450991979LLU;

    t38 = (x153|((x154>x155)*x156));

    if (t38 != 12432001240645LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 2198U;
	volatile uint64_t x158 = 756LLU;
	static volatile uint16_t x160 = 27U;
	volatile uint32_t t39 = 24773U;

    t39 = (x157|((x158>x159)*x160));

    if (t39 != 2198U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = INT32_MIN;
	uint32_t x163 = 211031771U;
	int64_t x164 = INT64_MIN;
	int64_t t40 = -1681785192LL;

    t40 = (x161|((x162>x163)*x164));

    if (t40 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile int8_t x167 = -4;
	int8_t x168 = -38;
	volatile int32_t t41 = -4116971;

    t41 = (x165|((x166>x167)*x168));

    if (t41 != -38) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = INT16_MIN;
	uint16_t x170 = 3976U;
	volatile uint8_t x171 = 95U;
	volatile int32_t x172 = -1;
	volatile int32_t t42 = -842008;

    t42 = (x169|((x170>x171)*x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	static int16_t x175 = -41;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -4468;

    t43 = (x173|((x174>x175)*x176));

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 22422U;
	volatile int16_t x179 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile uint32_t t44 = 26824U;

    t44 = (x177|((x178>x179)*x180));

    if (t44 != 22422U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x182 = INT8_MIN;
	static int32_t x183 = -1;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = (x181|((x182>x183)*x184));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	static int32_t x187 = 305;
	uint64_t t46 = UINT64_MAX;

    t46 = (x185|((x186>x187)*x188));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 1;
	uint32_t x191 = 14U;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 126294;

    t47 = (x189|((x190>x191)*x192));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	static int64_t t48 = INT64_MAX;

    t48 = (x193|((x194>x195)*x196));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x198 = 2;
	volatile uint16_t x199 = 14419U;
	int32_t x200 = -185666;
	volatile int32_t t49 = 1;

    t49 = (x197|((x198>x199)*x200));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	static uint32_t x202 = 7183U;
	int64_t x204 = 1743184721058647LL;
	static uint64_t t50 = UINT64_MAX;

    t50 = (x201|((x202>x203)*x204));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = INT64_MIN;
	volatile int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	volatile int32_t t51 = -4792;

    t51 = (x205|((x206>x207)*x208));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 90U;
	int32_t x210 = -22741100;
	int64_t x211 = -1LL;
	static int16_t x212 = -27;
	volatile int32_t t52 = 417861;

    t52 = (x209|((x210>x211)*x212));

    if (t52 != 90) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 65303U;
	static int64_t x215 = INT64_MIN;
	volatile uint32_t t53 = 79598U;

    t53 = (x213|((x214>x215)*x216));

    if (t53 != 4294967063U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = 375431959U;
	static volatile uint32_t x218 = 112469794U;
	static uint8_t x219 = 3U;
	int64_t t54 = 1LL;

    t54 = (x217|((x218>x219)*x220));

    if (t54 != -9223372036479343849LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 674;
	int8_t x222 = INT8_MIN;
	static int16_t x223 = INT16_MIN;
	int64_t t55 = -100719LL;

    t55 = (x221|((x222>x223)*x224));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = -1056015313LL;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = 1;
	int64_t t56 = 85200273LL;

    t56 = (x225|((x226>x227)*x228));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -464514578;
	static volatile uint16_t x230 = 3981U;
	static int64_t x231 = -1LL;
	static volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -410702392;

    t57 = (x229|((x230>x231)*x232));

    if (t57 != -464514578) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 636959155518251LLU;
	int64_t x234 = INT64_MIN;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t58 = 472346410601LLU;

    t58 = (x233|((x234>x235)*x236));

    if (t58 != 636959155518251LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	volatile int8_t x238 = -59;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t59 = INT32_MAX;

    t59 = (x237|((x238>x239)*x240));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 2801U;
	int64_t x242 = INT64_MIN;
	static uint16_t x243 = 6348U;
	int16_t x244 = 0;
	static int32_t t60 = -4345207;

    t60 = (x241|((x242>x243)*x244));

    if (t60 != 2801) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	volatile int32_t x246 = INT32_MIN;
	static int16_t x247 = -1;
	int64_t x248 = INT64_MAX;
	int64_t t61 = -1275497LL;

    t61 = (x245|((x246>x247)*x248));

    if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -10539702;
	volatile int32_t x250 = 8892194;
	volatile int32_t t62 = -11913258;

    t62 = (x249|((x250>x251)*x252));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MAX;
	uint16_t x255 = 7185U;

    t63 = (x253|((x254>x255)*x256));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 248297291;

    t64 = (x257|((x258>x259)*x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = UINT16_MAX;
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MAX;
	volatile int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 668118;

    t65 = (x261|((x262>x263)*x264));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 26;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = 7414022329641366LL;
	static volatile int64_t x268 = 263209967177703LL;

    t66 = (x265|((x266>x267)*x268));

    if (t66 != 26LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 50891U;
	uint32_t t67 = UINT32_MAX;

    t67 = (x269|((x270>x271)*x272));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = 1LLU;
	int16_t x275 = INT16_MAX;
	static int32_t x276 = INT32_MAX;
	static uint64_t t68 = 21988525LLU;

    t68 = (x273|((x274>x275)*x276));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 25013U;
	int16_t x278 = INT16_MIN;
	volatile int32_t x279 = 84094;
	volatile int64_t x280 = 4561854228592610347LL;

    t69 = (x277|((x278>x279)*x280));

    if (t69 != 25013LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = 2;
	int16_t x284 = 1325;

    t70 = (x281|((x282>x283)*x284));

    if (t70 != -31443) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = -208;
	uint16_t x286 = UINT16_MAX;
	int16_t x288 = -2;
	static volatile int32_t t71 = -17487704;

    t71 = (x285|((x286>x287)*x288));

    if (t71 != -208) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x291 = 711950972LLU;
	uint64_t x292 = 14195LLU;
	volatile uint64_t t72 = 107934309703LLU;

    t72 = (x289|((x290>x291)*x292));

    if (t72 != 18446744073709533043LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 1U;
	volatile uint8_t x294 = 2U;
	int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MIN;
	static int32_t t73 = 3;

    t73 = (x293|((x294>x295)*x296));

    if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MAX;
	int64_t x298 = 81088942277LL;
	uint8_t x299 = 7U;
	int8_t x300 = -7;
	volatile int32_t t74 = -50;

    t74 = (x297|((x298>x299)*x300));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	int32_t x302 = -1;
	volatile uint32_t x303 = 65578970U;
	uint8_t x304 = 4U;

    t75 = (x301|((x302>x303)*x304));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	int32_t x307 = -1;
	int8_t x308 = INT8_MAX;

    t76 = (x305|((x306>x307)*x308));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x309 = 11703U;
	static volatile int8_t x311 = INT8_MIN;
	static int8_t x312 = INT8_MAX;
	volatile uint32_t t77 = 930U;

    t77 = (x309|((x310>x311)*x312));

    if (t77 != 11703U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static int64_t x314 = INT64_MAX;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MAX;
	static int32_t t78 = -976357;

    t78 = (x313|((x314>x315)*x316));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	uint64_t x320 = 3583LLU;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = (x317|((x318>x319)*x320));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 133U;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 168U;

    t80 = (x321|((x322>x323)*x324));

    if (t80 != 173U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 1U;
	uint32_t x326 = 4161031U;
	volatile int32_t x327 = INT32_MIN;
	static uint64_t x328 = 479422LLU;
	uint64_t t81 = 5LLU;

    t81 = (x325|((x326>x327)*x328));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x329 = INT32_MAX;
	int64_t x331 = -65LL;
	uint64_t x332 = 52607727LLU;
	volatile uint64_t t82 = 1198803561954894LLU;

    t82 = (x329|((x330>x331)*x332));

    if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 55731U;
	int16_t x334 = 174;
	int32_t x335 = INT32_MIN;
	int64_t x336 = 1794490710LL;
	static int64_t t83 = -1LL;

    t83 = (x333|((x334>x335)*x336));

    if (t83 != 1794497015LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -1;
	int8_t x338 = INT8_MIN;
	int16_t x339 = 1;
	uint32_t x340 = 15316730U;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = (x337|((x338>x339)*x340));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -788440;
	uint64_t x342 = 18456362531902LLU;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1;
	int32_t t85 = -1156;

    t85 = (x341|((x342>x343)*x344));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MIN;
	uint64_t x346 = 2720593083975816LLU;
	uint32_t x347 = 8886U;
	int64_t x348 = -1LL;
	int64_t t86 = 32535504LL;

    t86 = (x345|((x346>x347)*x348));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x350 = INT32_MAX;
	int16_t x352 = -1;
	volatile int32_t t87 = -6;

    t87 = (x349|((x350>x351)*x352));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = -1;
	int16_t x356 = INT16_MIN;
	volatile int64_t t88 = INT64_MIN;

    t88 = (x353|((x354>x355)*x356));

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	uint32_t x358 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 453308693;

    t89 = (x357|((x358>x359)*x360));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -13252688;
	volatile uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t90 = 72897300;

    t90 = (x361|((x362>x363)*x364));

    if (t90 != -13252609) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x367 = 473LLU;
	static int64_t t91 = 33315301371865172LL;

    t91 = (x365|((x366>x367)*x368));

    if (t91 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	volatile int16_t x370 = -1;
	int8_t x371 = -7;
	static int64_t x372 = 6613980054583LL;
	int64_t t92 = 60526761228LL;

    t92 = (x369|((x370>x371)*x372));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MAX;
	int64_t x374 = 14435LL;
	static uint32_t x375 = UINT32_MAX;
	volatile int64_t t93 = INT64_MAX;

    t93 = (x373|((x374>x375)*x376));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 11305646298498755LLU;
	int64_t x378 = -473968388LL;
	uint64_t x379 = 23236093033LLU;
	uint64_t x380 = 2148917974158LLU;
	uint64_t t94 = 966700316115557698LLU;

    t94 = (x377|((x378>x379)*x380));

    if (t94 != 11307364560803535LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x381 = UINT8_MAX;
	static int32_t x382 = -1;
	volatile int32_t x383 = INT32_MAX;
	volatile int8_t x384 = -1;

    t95 = (x381|((x382>x383)*x384));

    if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 75U;
	volatile int16_t x386 = 85;
	int16_t x387 = -13;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 6;

    t96 = (x385|((x386>x387)*x388));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 22U;
	int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	volatile int64_t t97 = INT64_MAX;

    t97 = (x389|((x390>x391)*x392));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	static uint8_t x394 = 1U;
	volatile int8_t x395 = INT8_MAX;
	static int64_t t98 = 27712608951LL;

    t98 = (x393|((x394>x395)*x396));

    if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	uint64_t x399 = 27196706850LLU;
	int64_t x400 = INT64_MIN;
	static int64_t t99 = 1038791LL;

    t99 = (x397|((x398>x399)*x400));

    if (t99 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x403 = -20;
	static int16_t x404 = INT16_MIN;
	int64_t t100 = -8569LL;

    t100 = (x401|((x402>x403)*x404));

    if (t100 != -32768LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	int32_t x407 = 21140;
	static volatile int32_t t101 = 48277401;

    t101 = (x405|((x406>x407)*x408));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static volatile uint8_t x410 = 64U;
	int64_t x411 = -259281242591747LL;
	static int32_t x412 = 590582;
	int64_t t102 = -2118515519041338LL;

    t102 = (x409|((x410>x411)*x412));

    if (t102 != -9223372036854185226LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = 181440724LL;
	static volatile int8_t x414 = -1;
	int8_t x415 = 29;
	volatile uint64_t x416 = 4858LLU;

    t103 = (x413|((x414>x415)*x416));

    if (t103 != 181440724LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	volatile int16_t x418 = -1;
	int64_t x419 = -1LL;
	static volatile uint16_t x420 = 3U;
	uint32_t t104 = UINT32_MAX;

    t104 = (x417|((x418>x419)*x420));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x421 = -1;
	int16_t x423 = -50;
	uint16_t x424 = 586U;
	volatile int32_t t105 = 1;

    t105 = (x421|((x422>x423)*x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 42U;
	uint16_t x426 = 3U;
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t106 = 3;

    t106 = (x425|((x426>x427)*x428));

    if (t106 != -86) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile int8_t x430 = INT8_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile uint16_t x432 = 5360U;
	static int32_t t107 = INT32_MIN;

    t107 = (x429|((x430>x431)*x432));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	uint16_t x434 = UINT16_MAX;
	static volatile int64_t x435 = -1LL;
	int64_t x436 = 29891203350LL;
	int64_t t108 = 614778LL;

    t108 = (x433|((x434>x435)*x436));

    if (t108 != -173567722LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x437 = 17803LLU;
	int32_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	uint64_t t109 = 7822684988793LLU;

    t109 = (x437|((x438>x439)*x440));

    if (t109 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = INT8_MAX;
	volatile uint16_t x442 = 37U;
	uint8_t x443 = 28U;
	int32_t x444 = -1;
	volatile int32_t t110 = -675256817;

    t110 = (x441|((x442>x443)*x444));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int16_t x446 = -33;
	int16_t x447 = INT16_MAX;
	int16_t x448 = -1;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x445|((x446>x447)*x448));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 9992978043LL;
	int32_t x450 = -52;
	volatile uint8_t x451 = 0U;
	int32_t x452 = INT32_MIN;
	volatile int64_t t112 = -6176088191954658LL;

    t112 = (x449|((x450>x451)*x452));

    if (t112 != 9992978043LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 27;
	uint8_t x454 = 1U;
	static int16_t x455 = INT16_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t113 = 13;

    t113 = (x453|((x454>x455)*x456));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = UINT8_MAX;
	volatile uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 154851159U;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = 147;

    t114 = (x457|((x458>x459)*x460));

    if (t114 != -32513) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = -1316;
	static uint8_t x462 = 6U;
	int64_t x463 = INT64_MIN;
	volatile int8_t x464 = -1;
	int32_t t115 = 45110;

    t115 = (x461|((x462>x463)*x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	int32_t x467 = INT32_MAX;
	volatile int8_t x468 = INT8_MIN;
	uint64_t t116 = UINT64_MAX;

    t116 = (x465|((x466>x467)*x468));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MIN;
	int64_t x471 = -118810168029LL;
	int8_t x472 = 7;
	volatile int32_t t117 = -784;

    t117 = (x469|((x470>x471)*x472));

    if (t117 != -32761) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x473 = 59934390LLU;
	int32_t x474 = INT32_MAX;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MIN;
	static volatile uint64_t t118 = 274234829196801377LLU;

    t118 = (x473|((x474>x475)*x476));

    if (t118 != 18446744073709520566LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MAX;
	uint16_t x479 = 640U;
	int16_t x480 = INT16_MAX;
	volatile uint32_t t119 = 125818U;

    t119 = (x477|((x478>x479)*x480));

    if (t119 != 32767U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	uint16_t x482 = 1U;
	uint32_t x483 = 429381971U;
	static uint16_t x484 = 0U;
	int32_t t120 = -4907;

    t120 = (x481|((x482>x483)*x484));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int8_t x486 = -1;
	int32_t x487 = INT32_MIN;
	int16_t x488 = -1594;

    t121 = (x485|((x486>x487)*x488));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x489 = 13U;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	volatile int16_t x492 = -2;
	volatile uint32_t t122 = 159U;

    t122 = (x489|((x490>x491)*x492));

    if (t122 != 13U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 250449931436120LLU;
	static int16_t x495 = -1;
	int64_t x496 = 2908676655318822936LL;
	uint64_t t123 = 268281378718775LLU;

    t123 = (x493|((x494>x495)*x496));

    if (t123 != 2908748983255953496LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = INT32_MIN;
	int8_t x498 = -11;
	static int8_t x499 = -1;
	volatile int16_t x500 = 9072;
	static volatile int32_t t124 = INT32_MIN;

    t124 = (x497|((x498>x499)*x500));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = -3938;
	uint8_t x502 = UINT8_MAX;
	volatile int64_t x503 = -242346667979LL;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t125 = -260;

    t125 = (x501|((x502>x503)*x504));

    if (t125 != -3938) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x505 = -723400;
	static uint16_t x506 = UINT16_MAX;
	int64_t x507 = 126755921556LL;
	int32_t x508 = INT32_MAX;

    t126 = (x505|((x506>x507)*x508));

    if (t126 != -723400) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 1986LLU;
	int32_t x510 = INT32_MAX;
	volatile int16_t x511 = -1;
	int8_t x512 = -3;
	uint64_t t127 = UINT64_MAX;

    t127 = (x509|((x510>x511)*x512));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 3;
	int8_t x516 = INT8_MIN;
	volatile int32_t t128 = 0;

    t128 = (x513|((x514>x515)*x516));

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = -31;
	int64_t x518 = 20204022155636LL;
	int8_t x519 = 1;
	volatile int64_t x520 = INT64_MIN;
	static int64_t t129 = 1245214802LL;

    t129 = (x517|((x518>x519)*x520));

    if (t129 != -31LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	uint8_t x523 = 3U;
	int64_t x524 = INT64_MIN;
	uint64_t t130 = UINT64_MAX;

    t130 = (x521|((x522>x523)*x524));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint64_t x526 = 46944844594004729LLU;
	static uint64_t x527 = 252724LLU;
	static uint16_t x528 = 15U;
	volatile int64_t t131 = 1LL;

    t131 = (x525|((x526>x527)*x528));

    if (t131 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint8_t x530 = 66U;
	volatile int16_t x531 = 0;
	int16_t x532 = INT16_MAX;
	volatile int64_t t132 = 33LL;

    t132 = (x529|((x530>x531)*x532));

    if (t132 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 1;
	uint64_t x534 = UINT64_MAX;
	int16_t x535 = 8183;
	int32_t x536 = INT32_MAX;
	volatile int32_t t133 = INT32_MAX;

    t133 = (x533|((x534>x535)*x536));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = -7636477905743LL;
	uint8_t x539 = UINT8_MAX;
	int64_t x540 = -1LL;
	int64_t t134 = -5935600496LL;

    t134 = (x537|((x538>x539)*x540));

    if (t134 != 13762LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MAX;
	uint8_t x542 = 62U;
	int16_t x543 = INT16_MIN;
	volatile int64_t t135 = INT64_MAX;

    t135 = (x541|((x542>x543)*x544));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 0U;
	int16_t x546 = -1;
	int16_t x547 = -1;
	volatile int64_t x548 = -1LL;
	volatile int64_t t136 = 7LL;

    t136 = (x545|((x546>x547)*x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	volatile uint32_t x550 = 4793U;
	int32_t x551 = INT32_MIN;
	int32_t t137 = INT32_MIN;

    t137 = (x549|((x550>x551)*x552));

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 7100;
	uint64_t x554 = 27490462092LLU;
	int64_t x555 = INT64_MAX;
	int8_t x556 = INT8_MIN;
	int32_t t138 = 14;

    t138 = (x553|((x554>x555)*x556));

    if (t138 != 7100) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	uint32_t x559 = 178870U;
	int64_t x560 = 94997301LL;

    t139 = (x557|((x558>x559)*x560));

    if (t139 != -2052486347LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x561 = UINT16_MAX;
	int32_t x562 = INT32_MIN;
	static int16_t x563 = -1;
	int8_t x564 = -15;
	static volatile int32_t t140 = -43;

    t140 = (x561|((x562>x563)*x564));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = 4354536419676LL;
	int16_t x567 = -1;
	static int64_t x568 = INT64_MIN;
	volatile int64_t t141 = -2542008382LL;

    t141 = (x565|((x566>x567)*x568));

    if (t141 != -9223372034949902522LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	int8_t x570 = -7;
	volatile int8_t x571 = 0;

    t142 = (x569|((x570>x571)*x572));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	int32_t x574 = INT32_MIN;
	int64_t x575 = INT64_MAX;
	uint32_t t143 = UINT32_MAX;

    t143 = (x573|((x574>x575)*x576));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = UINT32_MAX;
	static volatile int64_t x578 = -1LL;
	uint32_t t144 = UINT32_MAX;

    t144 = (x577|((x578>x579)*x580));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 5U;
	static int16_t x582 = INT16_MIN;
	int64_t x583 = 13368175LL;
	int32_t t145 = 250613;

    t145 = (x581|((x582>x583)*x584));

    if (t145 != 5) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x585 = INT64_MAX;
	int8_t x586 = 0;
	int64_t x588 = INT64_MIN;
	int64_t t146 = INT64_MAX;

    t146 = (x585|((x586>x587)*x588));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MIN;
	int8_t x591 = 12;
	uint32_t x592 = UINT32_MAX;
	volatile uint32_t t147 = 1U;

    t147 = (x589|((x590>x591)*x592));

    if (t147 != 32767U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = INT16_MIN;
	uint32_t x594 = 17579U;
	static int32_t x595 = INT32_MAX;
	uint32_t x596 = 37700955U;
	static uint32_t t148 = 368596420U;

    t148 = (x593|((x594>x595)*x596));

    if (t148 != 4294934528U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	int32_t x598 = 971982973;
	uint32_t x600 = 1U;
	static uint32_t t149 = 1036U;

    t149 = (x597|((x598>x599)*x600));

    if (t149 != 65535U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MIN;
	volatile uint8_t x603 = 1U;
	uint16_t x604 = 5389U;

    t150 = (x601|((x602>x603)*x604));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = INT64_MIN;
	static int64_t x606 = -281941LL;
	int8_t x607 = INT8_MAX;
	int64_t x608 = INT64_MIN;
	int64_t t151 = INT64_MIN;

    t151 = (x605|((x606>x607)*x608));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -44;
	uint64_t x610 = 240LLU;
	int64_t x611 = -2013LL;
	int64_t x612 = -14000500414047215LL;
	int64_t t152 = 1LL;

    t152 = (x609|((x610>x611)*x612));

    if (t152 != -44LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 468U;
	int64_t x614 = -2LL;
	volatile int16_t x615 = INT16_MAX;
	volatile int32_t t153 = -4066;

    t153 = (x613|((x614>x615)*x616));

    if (t153 != 468) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x618 = 8990309031LLU;
	int32_t x620 = -1;
	volatile int32_t t154 = 180279;

    t154 = (x617|((x618>x619)*x620));

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MAX;
	int64_t x622 = INT64_MAX;
	int32_t x623 = INT32_MIN;

    t155 = (x621|((x622>x623)*x624));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 0U;
	int64_t x627 = INT64_MIN;
	uint8_t x628 = 5U;

    t156 = (x625|((x626>x627)*x628));

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -797593597LL;
	volatile int32_t x631 = 238931;
	uint16_t x632 = UINT16_MAX;
	static int64_t t157 = 856069722825434611LL;

    t157 = (x629|((x630>x631)*x632));

    if (t157 != -797593597LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = INT16_MAX;
	uint8_t x636 = 98U;
	int32_t t158 = 18780362;

    t158 = (x633|((x634>x635)*x636));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = -1;
	uint16_t x639 = UINT16_MAX;
	volatile int8_t x640 = INT8_MIN;

    t159 = (x637|((x638>x639)*x640));

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	uint16_t x642 = 25700U;
	int64_t t160 = 15676438488955977LL;

    t160 = (x641|((x642>x643)*x644));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 967184735680LLU;
	static uint64_t t161 = 825541048244LLU;

    t161 = (x645|((x646>x647)*x648));

    if (t161 != 967189462506LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = INT16_MIN;
	volatile int64_t x651 = -1LL;
	int32_t x652 = 0;
	volatile int32_t t162 = -7003230;

    t162 = (x649|((x650>x651)*x652));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = -1;
	int16_t x655 = 914;
	volatile int8_t x656 = -1;
	int32_t t163 = -934834801;

    t163 = (x653|((x654>x655)*x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 15875U;
	uint8_t x658 = 87U;
	int16_t x659 = INT16_MIN;
	uint32_t x660 = 1807687851U;
	static volatile uint32_t t164 = 752917U;

    t164 = (x657|((x658>x659)*x660));

    if (t164 != 1807695531U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x662 = UINT16_MAX;
	volatile uint64_t x663 = UINT64_MAX;
	static uint32_t x664 = 256557U;

    t165 = (x661|((x662>x663)*x664));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = INT32_MIN;
	uint64_t x667 = 1078875074200LLU;
	static int16_t x668 = INT16_MIN;
	int32_t t166 = 8;

    t166 = (x665|((x666>x667)*x668));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 16U;
	static int32_t x671 = INT32_MAX;
	static uint16_t x672 = 379U;
	volatile int32_t t167 = 23337;

    t167 = (x669|((x670>x671)*x672));

    if (t167 != 16) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 3799U;
	uint64_t x674 = UINT64_MAX;
	uint16_t x675 = UINT16_MAX;
	int8_t x676 = INT8_MIN;

    t168 = (x673|((x674>x675)*x676));

    if (t168 != -41) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = 7497466LL;
	uint8_t x679 = UINT8_MAX;
	int64_t t169 = -383165LL;

    t169 = (x677|((x678>x679)*x680));

    if (t169 != 7497466LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 532U;
	uint32_t x682 = UINT32_MAX;
	static int16_t x683 = INT16_MIN;
	static int8_t x684 = -3;

    t170 = (x681|((x682>x683)*x684));

    if (t170 != -3) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int16_t x686 = -1;
	volatile int64_t x687 = 13044610257283067LL;
	int8_t x688 = -14;

    t171 = (x685|((x686>x687)*x688));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = UINT32_MAX;
	uint64_t x691 = 302904755460223515LLU;
	static int8_t x692 = INT8_MIN;
	static volatile int32_t t172 = 24;

    t172 = (x689|((x690>x691)*x692));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = -1;
	int32_t x694 = INT32_MIN;
	static volatile int16_t x695 = -1;
	static int64_t x696 = INT64_MIN;

    t173 = (x693|((x694>x695)*x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = 0LL;
	volatile int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MIN;
	static uint32_t x700 = UINT32_MAX;
	volatile int64_t t174 = -193057264124516LL;

    t174 = (x697|((x698>x699)*x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MAX;
	uint16_t x703 = 56U;
	int16_t x704 = -1;
	static volatile int32_t t175 = -1;

    t175 = (x701|((x702>x703)*x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	uint32_t x706 = UINT32_MAX;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (x705|((x706>x707)*x708));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	volatile int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	int32_t t177 = 11;

    t177 = (x709|((x710>x711)*x712));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 27272507LLU;
	volatile int8_t x714 = 13;
	int16_t x715 = INT16_MIN;
	static uint32_t x716 = UINT32_MAX;
	static volatile uint64_t t178 = 13230863LLU;

    t178 = (x713|((x714>x715)*x716));

    if (t178 != 4294967295LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	int64_t x718 = INT64_MAX;
	volatile uint64_t x720 = 3617LLU;
	uint64_t t179 = UINT64_MAX;

    t179 = (x717|((x718>x719)*x720));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x724 = INT16_MIN;
	volatile int32_t t180 = 4;

    t180 = (x721|((x722>x723)*x724));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = INT16_MIN;
	int32_t x726 = -1;
	static int32_t x728 = 2906645;
	int32_t t181 = -2349;

    t181 = (x725|((x726>x727)*x728));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MIN;
	int8_t x730 = INT8_MIN;
	static int32_t x731 = -1;
	int16_t x732 = 19;
	volatile int32_t t182 = 1;

    t182 = (x729|((x730>x731)*x732));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	int8_t x735 = INT8_MAX;
	static int8_t x736 = -2;
	int32_t t183 = 617762;

    t183 = (x733|((x734>x735)*x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 10703U;
	static int64_t x739 = INT64_MIN;
	int8_t x740 = -37;
	uint32_t t184 = 903910672U;

    t184 = (x737|((x738>x739)*x740));

    if (t184 != 10703U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = -924;
	static int16_t x743 = -167;
	int16_t x744 = INT16_MIN;

    t185 = (x741|((x742>x743)*x744));

    if (t185 != 2103307032U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 27536332699078925LL;
	uint64_t x746 = 505LLU;
	volatile int8_t x747 = -1;
	static volatile int64_t t186 = 4297127861168493LL;

    t186 = (x745|((x746>x747)*x748));

    if (t186 != 27536332699078925LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = -1;
	volatile uint8_t x751 = 14U;
	int64_t x752 = -1LL;
	volatile int64_t t187 = 15378330463833928LL;

    t187 = (x749|((x750>x751)*x752));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	volatile int8_t x754 = 6;
	volatile int32_t t188 = -3024963;

    t188 = (x753|((x754>x755)*x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MAX;
	int8_t x759 = INT8_MIN;
	int16_t x760 = 598;
	volatile int64_t t189 = INT64_MAX;

    t189 = (x757|((x758>x759)*x760));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	volatile int8_t x762 = 44;
	volatile int64_t x763 = -631698728284LL;
	int64_t x764 = 1620445672LL;
	int64_t t190 = 1LL;

    t190 = (x761|((x762>x763)*x764));

    if (t190 != -24LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 166U;
	uint64_t x766 = 0LLU;
	static int64_t x767 = -259473LL;
	uint64_t x768 = UINT64_MAX;
	uint64_t t191 = 58455191517LLU;

    t191 = (x765|((x766>x767)*x768));

    if (t191 != 166LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 14;
	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MAX;
	int16_t x772 = INT16_MAX;
	int32_t t192 = -50867;

    t192 = (x769|((x770>x771)*x772));

    if (t192 != 14) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -1;
	static int64_t x774 = 46794LL;
	static uint64_t x775 = 323762064LLU;
	int32_t x776 = INT32_MIN;
	volatile int32_t t193 = -27731182;

    t193 = (x773|((x774>x775)*x776));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 60;
	int16_t x778 = -20;
	int8_t x779 = -1;
	static volatile int32_t x780 = INT32_MIN;
	int32_t t194 = 62214975;

    t194 = (x777|((x778>x779)*x780));

    if (t194 != 60) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 55445LL;
	volatile int16_t x782 = INT16_MAX;
	static uint32_t x783 = 108869U;
	uint16_t x784 = UINT16_MAX;
	int64_t t195 = 111463208602317551LL;

    t195 = (x781|((x782>x783)*x784));

    if (t195 != 55445LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x785 = 1062U;
	int32_t x787 = -1;
	int32_t x788 = -1;
	int32_t t196 = 30237;

    t196 = (x785|((x786>x787)*x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x792 = 8U;
	volatile int32_t t197 = -1526928;

    t197 = (x789|((x790>x791)*x792));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = 1U;
	uint32_t x795 = 1489823085U;
	uint64_t t198 = 6314987454864LLU;

    t198 = (x793|((x794>x795)*x796));

    if (t198 != 12543066LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 2U;
	uint64_t x799 = UINT64_MAX;
	static volatile int32_t x800 = INT32_MAX;
	int32_t t199 = 52622647;

    t199 = (x797|((x798>x799)*x800));

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

