
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

int32_t x2 = -1552;
int8_t x10 = -3;
int32_t t2 = 1451844;
uint8_t x35 = 14U;
uint64_t t8 = UINT64_MAX;
static int16_t x39 = INT16_MIN;
static volatile uint16_t x40 = UINT16_MAX;
static int8_t x42 = INT8_MIN;
int64_t x43 = 13247309LL;
uint16_t x46 = 40U;
int64_t x48 = -17550632130746LL;
volatile int32_t x50 = INT32_MIN;
static volatile uint64_t t12 = 164LLU;
static int16_t x56 = INT16_MAX;
int64_t x57 = INT64_MAX;
volatile int64_t t14 = INT64_MAX;
int32_t x61 = INT32_MIN;
volatile uint64_t x68 = 2947LLU;
uint8_t x75 = 1U;
int64_t x76 = INT64_MAX;
volatile int64_t t19 = 397847049310LL;
int8_t x84 = INT8_MIN;
volatile uint64_t t21 = 28169LLU;
int8_t x94 = INT8_MIN;
volatile int32_t t23 = -1001200693;
int16_t x106 = 1967;
uint8_t x107 = 50U;
uint64_t t29 = 325906698154662775LLU;
static uint8_t x130 = 1U;
static int16_t x140 = INT16_MIN;
int8_t x148 = INT8_MAX;
uint64_t t35 = 32711291872926LLU;
int64_t x150 = INT64_MAX;
int8_t x152 = -6;
static int16_t x157 = INT16_MIN;
uint16_t x158 = UINT16_MAX;
volatile int32_t x162 = -1;
int16_t x163 = INT16_MAX;
uint8_t x164 = UINT8_MAX;
static volatile uint64_t t38 = UINT64_MAX;
static int64_t x175 = -98809LL;
int64_t x181 = 48330438775LL;
uint32_t x184 = 201902611U;
uint64_t x187 = 1116760970LLU;
volatile int64_t x191 = -1LL;
int64_t t44 = 9065135LL;
int8_t x199 = INT8_MIN;
int32_t x211 = INT32_MIN;
int8_t x217 = -1;
uint64_t x218 = UINT64_MAX;
int64_t x223 = INT64_MIN;
int32_t x239 = INT32_MAX;
volatile int32_t x240 = -9;
int32_t x241 = INT32_MIN;
int8_t x260 = -5;
uint16_t x263 = 6U;
uint32_t x267 = UINT32_MAX;
static volatile uint64_t t60 = UINT64_MAX;
int32_t x269 = INT32_MAX;
volatile int32_t x277 = INT32_MIN;
int16_t x281 = INT16_MIN;
int32_t x288 = INT32_MIN;
int16_t x291 = INT16_MIN;
int32_t t66 = -2465591;
static int64_t t67 = 24354509053LL;
uint64_t x301 = 1976LLU;
static volatile int8_t x302 = -2;
uint32_t x303 = UINT32_MAX;
static volatile uint64_t t69 = UINT64_MAX;
static int32_t x310 = INT32_MIN;
int16_t x311 = -42;
volatile int32_t x314 = -1;
int32_t x315 = -53365;
uint16_t x316 = 48U;
static uint32_t x333 = UINT32_MAX;
int16_t x337 = -45;
uint8_t x343 = UINT8_MAX;
int64_t x349 = -1LL;
static uint16_t x357 = UINT16_MAX;
volatile uint64_t x358 = 9477LLU;
int8_t x359 = INT8_MIN;
static uint64_t x360 = 492533928523426LLU;
static uint16_t x361 = 296U;
int32_t t81 = 5;
int32_t x374 = INT32_MAX;
static int64_t x382 = INT64_MIN;
int64_t t86 = 0LL;
int32_t x389 = 7440;
static volatile int64_t x392 = -3LL;
volatile int32_t t89 = -2211811;
int8_t x401 = INT8_MAX;
uint16_t x402 = 22U;
int32_t t90 = 498500;
volatile uint64_t t91 = 57614965LLU;
int16_t x409 = -4521;
int32_t t92 = 1;
int64_t t93 = -2455295327250LL;
int32_t x421 = -6290;
uint64_t x422 = 61135433640351523LLU;
static uint32_t x423 = 65268138U;
uint64_t t98 = 125923247308LLU;
int8_t x440 = 8;
static uint64_t x441 = 22899534835117LLU;
static volatile int8_t x445 = -1;
uint8_t x446 = 0U;
int64_t x451 = 100498613558408LL;
volatile int32_t x452 = INT32_MAX;
static uint8_t x454 = UINT8_MAX;
int32_t x455 = INT32_MAX;
static int32_t t103 = 30094397;
volatile uint64_t t104 = 34334LLU;
volatile uint8_t x462 = 1U;
int32_t x464 = INT32_MIN;
volatile uint64_t t105 = 422635706096437LLU;
int8_t x471 = INT8_MAX;
static uint16_t x475 = 185U;
int64_t x478 = INT64_MAX;
volatile int64_t x479 = INT64_MAX;
int64_t x480 = -179507LL;
int16_t x487 = INT16_MAX;
int64_t x489 = 13016LL;
volatile uint64_t t114 = 13307907275428467LLU;
static volatile int64_t t115 = 0LL;
uint32_t t116 = 6414038U;
uint16_t x522 = 2228U;
uint64_t t120 = 3LLU;
int8_t x533 = INT8_MAX;
uint32_t x536 = 435741U;
uint32_t t123 = 16487068U;
uint64_t x560 = UINT64_MAX;
int8_t x564 = -1;
static volatile uint32_t x565 = 157440U;
volatile uint32_t t128 = 8605U;
int16_t x577 = INT16_MAX;
int32_t x583 = INT32_MIN;
volatile int16_t x585 = -1;
static uint16_t x588 = UINT16_MAX;
int32_t t133 = 33490376;
int32_t x589 = -7;
static int8_t x592 = INT8_MAX;
static uint32_t t134 = 0U;
int64_t t137 = 192575918LL;
int32_t x606 = INT32_MIN;
volatile int32_t t138 = 72;
int16_t x613 = -56;
volatile int64_t t140 = 14797LL;
uint8_t x633 = 45U;
uint64_t x634 = 9611635LLU;
int64_t x635 = 25LL;
volatile int64_t x636 = INT64_MIN;
volatile uint64_t x641 = 266033LLU;
volatile int32_t x652 = INT32_MIN;
volatile uint32_t t147 = UINT32_MAX;
static volatile int8_t x655 = INT8_MAX;
static int16_t x657 = INT16_MIN;
static volatile uint8_t x658 = 0U;
int8_t x671 = INT8_MIN;
int64_t t151 = 15347102242815LL;
volatile int64_t x675 = 82398565827513896LL;
uint64_t t154 = 10258885LLU;
volatile int64_t t155 = -1228782871821LL;
volatile int8_t x691 = -3;
int32_t t156 = -4671431;
uint64_t x700 = 1534198808714742LLU;
volatile int32_t x703 = INT32_MIN;
volatile int32_t x704 = 8861;
int16_t x714 = 47;
int16_t x725 = -1;
uint16_t x726 = 3356U;
int64_t x728 = -1LL;
uint64_t x729 = UINT64_MAX;
static volatile uint32_t x739 = UINT32_MAX;
volatile uint32_t t166 = UINT32_MAX;
uint8_t x742 = 5U;
int64_t x743 = -1LL;
uint16_t x749 = 0U;
int32_t t172 = 27375778;
static uint32_t x765 = 1538419U;
int8_t x770 = INT8_MIN;
int8_t x771 = INT8_MIN;
uint16_t x774 = 418U;
volatile int32_t t175 = 69;
volatile uint8_t x785 = 11U;
static int32_t t177 = -7;
int16_t x791 = INT16_MIN;
volatile uint64_t t178 = 12635487596541LLU;
volatile uint8_t x795 = 2U;
volatile int8_t x808 = 13;
volatile uint64_t x809 = 19824948437511132LLU;
volatile int16_t x817 = INT16_MAX;
static volatile uint32_t x819 = UINT32_MAX;
int8_t x827 = -1;
uint64_t x828 = 9166400834597852LLU;
int32_t x833 = INT32_MIN;
static uint64_t x843 = UINT64_MAX;
uint16_t x858 = UINT16_MAX;
volatile int32_t x866 = -1;
volatile int32_t x875 = -1136259;
uint64_t t196 = UINT64_MAX;
volatile int8_t x877 = 0;
uint8_t x886 = 2U;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int32_t x3 = -6362;
	int64_t x4 = -1LL;
	static int64_t t0 = -1848261543LL;

    t0 = (x1|((x2/x3)-x4));

    if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MAX;
	volatile int32_t x7 = 897746290;
	int32_t x8 = -4002;
	volatile int64_t t1 = -13298286647149LL;

    t1 = (x5|((x6/x7)-x8));

    if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	int8_t x11 = -5;
	static uint16_t x12 = 1733U;

    t2 = (x9|((x10/x11)-x12));

    if (t2 != -1733) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -41993;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	uint16_t x16 = 4U;
	static int32_t t3 = -1112;

    t3 = (x13|((x14/x15)-x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	int32_t x18 = 256367375;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = -1;
	static int32_t t4 = -2183;

    t4 = (x17|((x18/x19)-x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -71;
	volatile uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 1983024U;
	uint32_t x24 = UINT32_MAX;
	uint32_t t5 = 152U;

    t5 = (x21|((x22/x23)-x24));

    if (t5 != 4294967225U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -445129071LL;
	uint16_t x26 = 206U;
	volatile uint16_t x27 = 503U;
	uint64_t x28 = 105153LLU;
	volatile uint64_t t6 = 7441572119417LLU;

    t6 = (x25|((x26/x27)-x28));

    if (t6 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x29 = UINT32_MAX;
	int8_t x30 = 61;
	int32_t x31 = 21585;
	static int16_t x32 = 13;
	static uint32_t t7 = UINT32_MAX;

    t7 = (x29|((x30/x31)-x32));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	volatile int8_t x34 = INT8_MIN;
	static int16_t x36 = -1;

    t8 = (x33|((x34/x35)-x36));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	volatile uint8_t x38 = 18U;
	int32_t t9 = 741731898;

    t9 = (x37|((x38/x39)-x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int8_t x44 = -1;
	int64_t t10 = -2LL;

    t10 = (x41|((x42/x43)-x44));

    if (t10 != -127LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 47777852LL;
	volatile uint64_t x47 = UINT64_MAX;
	uint64_t t11 = 7406913539873LLU;

    t11 = (x45|((x46/x47)-x48));

    if (t11 != 17550645237950LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x49 = 3535U;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 91364760974596LLU;

    t12 = (x49|((x50/x51)-x52));

    if (t12 != 18446652708948578303LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	static int64_t x54 = -1LL;
	static int64_t x55 = -12412749506345LL;
	volatile int64_t t13 = -164LL;

    t13 = (x53|((x54/x55)-x56));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	volatile int16_t x60 = -9;

    t14 = (x57|((x58/x59)-x60));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 35U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MAX;
	int32_t t15 = -424174587;

    t15 = (x61|((x62/x63)-x64));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65|((x66/x67)-x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1909LL;
	int64_t x70 = INT64_MIN;
	static volatile uint16_t x71 = 318U;
	static int32_t x72 = -1;
	volatile int64_t t17 = -2420698793925LL;

    t17 = (x69|((x70/x71)-x72));

    if (t17 != -1029LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint64_t x74 = 1201LLU;
	uint64_t t18 = 1595436654576LLU;

    t18 = (x73|((x74/x75)-x76));

    if (t18 != 9223372036854777010LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x77 = INT64_MAX;
	volatile int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;

    t19 = (x77|((x78/x79)-x80));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 1984156941237804315LL;
	static int8_t x82 = -59;
	int16_t x83 = -1;
	int64_t t20 = -8967LL;

    t20 = (x81|((x82/x83)-x84));

    if (t20 != 1984156941237804475LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 4529250U;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = -3LL;

    t21 = (x85|((x86/x87)-x88));

    if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 178460473U;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 834LLU;
	uint64_t t22 = 2355517060090903LLU;

    t22 = (x89|((x90/x91)-x92));

    if (t22 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 1223;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 153U;

    t23 = (x93|((x94/x95)-x96));

    if (t23 != -17) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 93U;
	static int32_t x98 = INT32_MIN;
	int32_t x99 = -9505357;
	static uint64_t x100 = 25LLU;
	static volatile uint64_t t24 = 6990065954241416184LLU;

    t24 = (x97|((x98/x99)-x100));

    if (t24 != 221LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static uint8_t x102 = 12U;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = INT32_MIN;
	uint64_t t25 = UINT64_MAX;

    t25 = (x101|((x102/x103)-x104));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = -13299;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = 2985212;

    t26 = (x105|((x106/x107)-x108));

    if (t26 != -211) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MAX;
	uint32_t x110 = 276978U;
	volatile int32_t x111 = 1;
	int64_t x112 = 386000003447999708LL;
	static int64_t t27 = -101971LL;

    t27 = (x109|((x110/x111)-x112));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -1956493216845775LL;
	volatile int8_t x115 = -1;
	int32_t x116 = INT32_MAX;
	volatile int64_t t28 = 6422970182356LL;

    t28 = (x113|((x114/x115)-x116));

    if (t28 != -28720LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 9LLU;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	static uint8_t x120 = UINT8_MAX;

    t29 = (x117|((x118/x119)-x120));

    if (t29 != 18446744071562067721LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	int16_t x122 = INT16_MIN;
	int32_t x123 = 454371;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 12845;

    t30 = (x121|((x122/x123)-x124));

    if (t30 != -65535) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = 14;
	static int32_t x126 = INT32_MIN;
	int16_t x127 = -301;
	int32_t x128 = 46950;
	int32_t t31 = -37698;

    t31 = (x125|((x126/x127)-x128));

    if (t31 != 7087551) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	static int32_t x131 = INT32_MIN;
	uint16_t x132 = 14627U;
	int32_t t32 = -654087242;

    t32 = (x129|((x130/x131)-x132));

    if (t32 != -35) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x137 = 15U;
	volatile uint32_t x138 = 1731139U;
	int8_t x139 = INT8_MIN;
	uint32_t t33 = 0U;

    t33 = (x137|((x138/x139)-x140));

    if (t33 != 32783U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 65164208037LLU;
	int16_t x144 = INT16_MIN;
	uint64_t t34 = 409LLU;

    t34 = (x141|((x142/x143)-x144));

    if (t34 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = 39;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = 53;

    t35 = (x145|((x146/x147)-x148));

    if (t35 != 348051774975651823LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = -1;
	uint64_t x151 = 740170957211760LLU;
	uint64_t t36 = UINT64_MAX;

    t36 = (x149|((x150/x151)-x152));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;
	static int64_t t37 = 3LL;

    t37 = (x157|((x158/x159)-x160));

    if (t37 != -32767LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = UINT64_MAX;

    t38 = (x161|((x162/x163)-x164));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 25;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = UINT8_MAX;
	int64_t t39 = 90938726LL;

    t39 = (x165|((x166/x167)-x168));

    if (t39 != -281474976710885LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x169 = UINT8_MAX;
	uint16_t x170 = 253U;
	static volatile int64_t x171 = INT64_MIN;
	int32_t x172 = -306;
	static volatile int64_t t40 = 0LL;

    t40 = (x169|((x170/x171)-x172));

    if (t40 != 511LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = 54;
	volatile uint8_t x174 = 1U;
	uint8_t x176 = 0U;
	volatile int64_t t41 = -66753374323166737LL;

    t41 = (x173|((x174/x175)-x176));

    if (t41 != 54LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = 1;
	int32_t x183 = INT32_MAX;
	volatile int64_t t42 = 3029386541458655LL;

    t42 = (x181|((x182/x183)-x184));

    if (t42 != 51337756159LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	int8_t x186 = 2;
	int64_t x188 = -52215702478LL;
	static volatile uint64_t t43 = 62908770LLU;

    t43 = (x185|((x186/x187)-x188));

    if (t43 != 18446744072238162894LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x189 = 43U;
	static int16_t x190 = -6640;
	static int8_t x192 = -1;

    t44 = (x189|((x190/x191)-x192));

    if (t44 != 6651LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x197 = -14081;
	int16_t x198 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t45 = -1;

    t45 = (x197|((x198/x199)-x200));

    if (t45 != -13825) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x205 = 0U;
	static uint64_t x206 = 46LLU;
	uint64_t x207 = UINT64_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile uint64_t t46 = 12267415740LLU;

    t46 = (x205|((x206/x207)-x208));

    if (t46 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 3U;
	int64_t x212 = -243852676LL;
	int64_t t47 = -1LL;

    t47 = (x209|((x210/x211)-x212));

    if (t47 != 243859455LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x213 = UINT8_MAX;
	int64_t x214 = -1LL;
	uint32_t x215 = 109680815U;
	static int8_t x216 = INT8_MIN;
	volatile int64_t t48 = -13622848LL;

    t48 = (x213|((x214/x215)-x216));

    if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x219 = INT8_MIN;
	int16_t x220 = -49;
	volatile uint64_t t49 = UINT64_MAX;

    t49 = (x217|((x218/x219)-x220));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	uint32_t x224 = UINT32_MAX;
	volatile int64_t t50 = -367312214084127LL;

    t50 = (x221|((x222/x223)-x224));

    if (t50 != -2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x225 = -1LL;
	uint16_t x226 = 151U;
	volatile uint16_t x227 = UINT16_MAX;
	uint64_t x228 = 18963392LLU;
	uint64_t t51 = UINT64_MAX;

    t51 = (x225|((x226/x227)-x228));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = -31;
	volatile uint8_t x230 = 2U;
	volatile uint32_t x231 = UINT32_MAX;
	uint8_t x232 = 92U;
	uint32_t t52 = 3330062U;

    t52 = (x229|((x230/x231)-x232));

    if (t52 != 4294967269U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -1;
	int64_t x238 = INT64_MAX;
	volatile int64_t t53 = 1571549467LL;

    t53 = (x237|((x238/x239)-x240));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x242 = 1595725;
	int64_t x243 = 344181031LL;
	int32_t x244 = INT32_MAX;
	int64_t t54 = -8979599579778736LL;

    t54 = (x241|((x242/x243)-x244));

    if (t54 != -2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 2022010U;
	int64_t x246 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	static volatile int32_t x248 = -21941;
	volatile int64_t t55 = -8693667551843986LL;

    t55 = (x245|((x246/x247)-x248));

    if (t55 != -36170086419013761LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = -1;
	int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t56 = 0;

    t56 = (x249|((x250/x251)-x252));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = -1LL;
	static int64_t x254 = -919101626964143683LL;
	volatile int32_t x255 = INT32_MAX;
	static int16_t x256 = 9576;
	volatile int64_t t57 = 181LL;

    t57 = (x253|((x254/x255)-x256));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = -1;
	volatile int8_t x258 = -2;
	int8_t x259 = -2;
	volatile int32_t t58 = -3;

    t58 = (x257|((x258/x259)-x260));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x261 = -1;
	uint32_t x262 = 506712U;
	static uint8_t x264 = UINT8_MAX;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = (x261|((x262/x263)-x264));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	int16_t x268 = 1542;

    t60 = (x265|((x266/x267)-x268));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x270 = INT8_MIN;
	static int64_t x271 = -1LL;
	static uint16_t x272 = 14U;
	static int64_t t61 = 26LL;

    t61 = (x269|((x270/x271)-x272));

    if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x273 = -1;
	uint8_t x274 = 54U;
	int16_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = (x273|((x274/x275)-x276));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x278 = 53U;
	static uint32_t x279 = 255599530U;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t63 = 136594817831566626LL;

    t63 = (x277|((x278/x279)-x280));

    if (t63 != -2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x282 = 122731644;
	int32_t x283 = 59800;
	int16_t x284 = -6;
	volatile int32_t t64 = 113;

    t64 = (x281|((x282/x283)-x284));

    if (t64 != -30710) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = -1;
	int32_t x286 = -629467456;
	uint8_t x287 = UINT8_MAX;
	static int32_t t65 = 1778;

    t65 = (x285|((x286/x287)-x288));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = UINT8_MAX;
	int16_t x292 = INT16_MIN;

    t66 = (x289|((x290/x291)-x292));

    if (t66 != 33023) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = -1LL;
	static volatile int16_t x298 = -965;
	int64_t x299 = INT64_MIN;
	int16_t x300 = -103;

    t67 = (x297|((x298/x299)-x300));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x304 = INT16_MIN;
	volatile uint64_t t68 = 416LLU;

    t68 = (x301|((x302/x303)-x304));

    if (t68 != 34744LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x305 = -2;
	static int64_t x306 = -1466LL;
	static int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;

    t69 = (x305|((x306/x307)-x308));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MIN;
	static int16_t x312 = INT16_MIN;
	static volatile int64_t t70 = -9238560LL;

    t70 = (x309|((x310/x311)-x312));

    if (t70 != -9223372036803612477LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = 1;
	static int32_t t71 = 188419723;

    t71 = (x313|((x314/x315)-x316));

    if (t71 != -47) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x321 = 6U;
	volatile uint32_t x322 = 41110U;
	static uint32_t x323 = 73019U;
	int16_t x324 = -441;
	volatile uint32_t t72 = 12U;

    t72 = (x321|((x322/x323)-x324));

    if (t72 != 447U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x325 = INT16_MIN;
	int32_t x326 = -54314;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	uint32_t t73 = 56590274U;

    t73 = (x325|((x326/x327)-x328));

    if (t73 != 4294934528U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile int8_t x330 = 1;
	uint16_t x331 = 7U;
	static int8_t x332 = -2;
	volatile int32_t t74 = -1;

    t74 = (x329|((x330/x331)-x332));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x334 = 2923112319529LLU;
	uint8_t x335 = 29U;
	int32_t x336 = -1;
	static volatile uint64_t t75 = 117559851734LLU;

    t75 = (x333|((x334/x335)-x336));

    if (t75 != 103079215103LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x338 = 341;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	volatile int64_t t76 = -201044943672274342LL;

    t76 = (x337|((x338/x339)-x340));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = 1;
	uint64_t x342 = 846LLU;
	int16_t x344 = INT16_MAX;
	volatile uint64_t t77 = 10043753338158LLU;

    t77 = (x341|((x342/x343)-x344));

    if (t77 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x350 = INT32_MIN;
	int64_t x351 = -1LL;
	static uint32_t x352 = 56842U;
	static int64_t t78 = 438618135217975297LL;

    t78 = (x349|((x350/x351)-x352));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x353 = INT16_MIN;
	uint16_t x354 = 2U;
	int8_t x355 = 1;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t79 = -24;

    t79 = (x353|((x354/x355)-x356));

    if (t79 != -32638) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t t80 = 91726731462994LLU;

    t80 = (x357|((x358/x359)-x360));

    if (t80 != 18446251539781058559LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = -25;
	static int8_t x364 = -1;

    t81 = (x361|((x362/x363)-x364));

    if (t81 != -1045) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x365 = INT8_MAX;
	uint8_t x366 = 41U;
	int16_t x367 = INT16_MAX;
	static volatile int8_t x368 = INT8_MIN;
	int32_t t82 = -219461639;

    t82 = (x365|((x366/x367)-x368));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x369 = -1;
	uint32_t x370 = 5958U;
	int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 7U;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (x369|((x370/x371)-x372));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x373 = INT8_MIN;
	int32_t x375 = -24;
	int64_t x376 = -1LL;
	volatile int64_t t84 = -1LL;

    t84 = (x373|((x374/x375)-x376));

    if (t84 != -84LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x377 = INT32_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	int64_t x379 = INT64_MAX;
	int8_t x380 = -1;
	volatile int64_t t85 = -989775975149395LL;

    t85 = (x377|((x378/x379)-x380));

    if (t85 != 2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = 1;
	int64_t x383 = INT64_MAX;
	uint32_t x384 = 1654040618U;

    t86 = (x381|((x382/x383)-x384));

    if (t86 != -1654040619LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x390 = INT16_MAX;
	int64_t x391 = 6197LL;
	volatile int64_t t87 = -785531LL;

    t87 = (x389|((x390/x391)-x392));

    if (t87 != 7448LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = INT16_MIN;
	uint32_t x394 = 1745900U;
	int16_t x395 = 3118;
	static volatile uint16_t x396 = 27U;
	static uint32_t t88 = 739529253U;

    t88 = (x393|((x394/x395)-x396));

    if (t88 != 4294935060U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x397 = INT16_MIN;
	volatile uint16_t x398 = 452U;
	volatile int8_t x399 = -60;
	volatile int32_t x400 = -1287;

    t89 = (x397|((x398/x399)-x400));

    if (t89 != -31488) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x403 = 3U;
	static int16_t x404 = -1507;

    t90 = (x401|((x402/x403)-x404));

    if (t90 != 1535) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x405 = 2466U;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = -1;
	uint64_t x408 = 376637LLU;

    t91 = (x405|((x406/x407)-x408));

    if (t91 != 18446744073709177318LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x410 = 3;
	int16_t x411 = -1;
	int8_t x412 = INT8_MIN;

    t92 = (x409|((x410/x411)-x412));

    if (t92 != -4481) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = -1;
	int16_t x414 = -48;
	int64_t x415 = INT64_MAX;
	int8_t x416 = INT8_MIN;

    t93 = (x413|((x414/x415)-x416));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x417 = 30U;
	volatile uint8_t x418 = UINT8_MAX;
	uint16_t x419 = UINT16_MAX;
	uint32_t x420 = 855629123U;
	uint32_t t94 = 1U;

    t94 = (x417|((x418/x419)-x420));

    if (t94 != 3439338175U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x424 = INT64_MAX;
	static uint64_t t95 = 17LLU;

    t95 = (x421|((x422/x423)-x424));

    if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x425 = 3703768919640824522LL;
	int8_t x426 = 0;
	static volatile int16_t x427 = 14228;
	volatile uint32_t x428 = 433398U;
	int64_t t96 = -904LL;

    t96 = (x425|((x426/x427)-x428));

    if (t96 != 3703768921765837770LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x429 = -1;
	static int32_t x430 = -1;
	int32_t x431 = INT32_MAX;
	int8_t x432 = 22;
	volatile int32_t t97 = -207743589;

    t97 = (x429|((x430/x431)-x432));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x433 = 26261290851651726LLU;
	static int8_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	int64_t x436 = INT64_MIN;

    t98 = (x433|((x434/x435)-x436));

    if (t98 != 9249633327706427535LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x437 = INT64_MIN;
	int16_t x438 = -53;
	int16_t x439 = INT16_MIN;
	static volatile int64_t t99 = 8407306411217485LL;

    t99 = (x437|((x438/x439)-x440));

    if (t99 != -8LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x442 = -1LL;
	volatile int64_t x443 = -1LL;
	uint32_t x444 = 1U;
	volatile uint64_t t100 = 7LLU;

    t100 = (x441|((x442/x443)-x444));

    if (t100 != 22899534835117LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x447 = 41LLU;
	uint64_t x448 = 1LLU;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x445|((x446/x447)-x448));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = INT64_MIN;
	int8_t x450 = INT8_MIN;
	int64_t t102 = 247LL;

    t102 = (x449|((x450/x451)-x452));

    if (t102 != -2147483647LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = 3136;
	volatile int32_t x456 = -1;

    t103 = (x453|((x454/x455)-x456));

    if (t103 != 3137) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x457 = 874963LLU;
	volatile uint16_t x458 = 302U;
	uint32_t x459 = 58U;
	static int8_t x460 = INT8_MAX;

    t104 = (x457|((x458/x459)-x460));

    if (t104 != 4294967255LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = INT64_MIN;
	uint64_t x463 = 127808564086121968LLU;

    t105 = (x461|((x462/x463)-x464));

    if (t105 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x465 = -106;
	int32_t x466 = INT32_MAX;
	static int64_t x467 = -1867127774954LL;
	static int8_t x468 = 5;
	volatile int64_t t106 = 8657833LL;

    t106 = (x465|((x466/x467)-x468));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x469 = -187036210;
	uint16_t x470 = 11U;
	int16_t x472 = -1;
	volatile int32_t t107 = 253;

    t107 = (x469|((x470/x471)-x472));

    if (t107 != -187036209) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	int64_t x474 = -1LL;
	int16_t x476 = -1;
	int64_t t108 = 265LL;

    t108 = (x473|((x474/x475)-x476));

    if (t108 != 255LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x477 = -7LL;
	volatile int64_t t109 = -169619225586LL;

    t109 = (x477|((x478/x479)-x480));

    if (t109 != -3LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x481 = -1;
	int32_t x482 = -1;
	uint16_t x483 = 4044U;
	static uint8_t x484 = 60U;
	int32_t t110 = -22;

    t110 = (x481|((x482/x483)-x484));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x485 = 2110514933LLU;
	uint32_t x486 = 124699U;
	volatile int32_t x488 = 784;
	uint64_t t111 = 33787361549910LLU;

    t111 = (x485|((x486/x487)-x488));

    if (t111 != 4294967031LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x490 = 36U;
	int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MIN;
	int64_t t112 = 149LL;

    t112 = (x489|((x490/x491)-x492));

    if (t112 != 45784LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x493 = 12U;
	uint32_t x494 = UINT32_MAX;
	int16_t x495 = -59;
	static int32_t x496 = INT32_MIN;
	uint32_t t113 = 0U;

    t113 = (x493|((x494/x495)-x496));

    if (t113 != 2147483661U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x501 = 1;
	static uint8_t x502 = UINT8_MAX;
	static volatile uint8_t x503 = 2U;
	uint64_t x504 = UINT64_MAX;

    t114 = (x501|((x502/x503)-x504));

    if (t114 != 129LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x505 = INT32_MIN;
	uint32_t x506 = UINT32_MAX;
	volatile uint32_t x507 = 1072U;
	static int64_t x508 = -1LL;

    t115 = (x505|((x506/x507)-x508));

    if (t115 != -2143477148LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = 813;
	int32_t x510 = 251;
	uint32_t x511 = UINT32_MAX;
	int16_t x512 = INT16_MIN;

    t116 = (x509|((x510/x511)-x512));

    if (t116 != 33581U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x513 = 7054903230LLU;
	uint16_t x514 = UINT16_MAX;
	int64_t x515 = INT64_MIN;
	int8_t x516 = INT8_MIN;
	static volatile uint64_t t117 = 14282062LLU;

    t117 = (x513|((x514/x515)-x516));

    if (t117 != 7054903230LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x517 = UINT32_MAX;
	uint64_t x518 = 7664834009340LLU;
	volatile int16_t x519 = -1;
	volatile int16_t x520 = 1;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (x517|((x518/x519)-x520));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x521 = UINT32_MAX;
	int16_t x523 = -1;
	static volatile int64_t x524 = INT64_MIN;
	static int64_t t119 = INT64_MAX;

    t119 = (x521|((x522/x523)-x524));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = 60;
	uint32_t x526 = 2U;
	static volatile int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;

    t120 = (x525|((x526/x527)-x528));

    if (t120 != 61LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x529 = INT32_MAX;
	volatile uint32_t x530 = 1039847U;
	int64_t x531 = -6136LL;
	int32_t x532 = INT32_MIN;
	int64_t t121 = 2168286739LL;

    t121 = (x529|((x530/x531)-x532));

    if (t121 != 2147483647LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x534 = INT32_MIN;
	uint32_t x535 = 65U;
	volatile uint32_t t122 = 53709U;

    t122 = (x533|((x534/x535)-x536));

    if (t122 != 32602495U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = 6U;
	int8_t x538 = 3;
	int16_t x539 = -263;
	static uint32_t x540 = 173U;

    t123 = (x537|((x538/x539)-x540));

    if (t123 != 4294967127U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x541 = INT8_MAX;
	int32_t x542 = -14;
	uint16_t x543 = 6U;
	int32_t x544 = -1;
	int32_t t124 = -88582800;

    t124 = (x541|((x542/x543)-x544));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x549 = 555557U;
	volatile int64_t x550 = 46619263LL;
	volatile int32_t x551 = INT32_MIN;
	uint32_t x552 = 302U;
	volatile int64_t t125 = -197721LL;

    t125 = (x549|((x550/x551)-x552));

    if (t125 != -265LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x557 = INT8_MIN;
	static uint16_t x558 = 23333U;
	static int64_t x559 = -26809449LL;
	uint64_t t126 = 638858030031814LLU;

    t126 = (x557|((x558/x559)-x560));

    if (t126 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x561 = UINT8_MAX;
	int32_t x562 = 221512;
	uint8_t x563 = 7U;
	int32_t t127 = -51792;

    t127 = (x561|((x562/x563)-x564));

    if (t127 != 31743) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x566 = -17;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t x568 = INT32_MAX;

    t128 = (x565|((x566/x567)-x568));

    if (t128 != 2147641089U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x569 = UINT64_MAX;
	int32_t x570 = -1;
	volatile int8_t x571 = -3;
	static int8_t x572 = INT8_MIN;
	static uint64_t t129 = UINT64_MAX;

    t129 = (x569|((x570/x571)-x572));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x573 = INT64_MIN;
	uint32_t x574 = 330068561U;
	uint32_t x575 = 82U;
	volatile int16_t x576 = INT16_MIN;
	int64_t t130 = 135683219133456020LL;

    t130 = (x573|((x574/x575)-x576));

    if (t130 != -9223372036850717814LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x578 = INT8_MIN;
	int32_t x579 = INT32_MIN;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t131 = 10653685455LLU;

    t131 = (x577|((x578/x579)-x580));

    if (t131 != 32767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x581 = UINT16_MAX;
	int16_t x582 = INT16_MIN;
	static uint32_t x584 = 311602472U;
	uint32_t t132 = 12950U;

    t132 = (x581|((x582/x583)-x584));

    if (t132 != 3983409151U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x586 = INT8_MAX;
	uint16_t x587 = 15U;

    t133 = (x585|((x586/x587)-x588));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x590 = INT16_MIN;
	volatile uint32_t x591 = UINT32_MAX;

    t134 = (x589|((x590/x591)-x592));

    if (t134 != 4294967289U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x593 = 1844LLU;
	static int32_t x594 = -70;
	int32_t x595 = 3751;
	int32_t x596 = -1;
	volatile uint64_t t135 = 1LLU;

    t135 = (x593|((x594/x595)-x596));

    if (t135 != 1845LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x597 = 10513491205230LLU;
	static int8_t x598 = 0;
	int64_t x599 = 135360745255689023LL;
	static uint8_t x600 = UINT8_MAX;
	static volatile uint64_t t136 = 619LLU;

    t136 = (x597|((x598/x599)-x600));

    if (t136 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x601 = INT32_MIN;
	volatile int64_t x602 = INT64_MIN;
	volatile uint8_t x603 = UINT8_MAX;
	int32_t x604 = 249371892;

    t137 = (x601|((x602/x603)-x604));

    if (t137 != -257793396LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x605 = INT8_MAX;
	uint8_t x607 = 14U;
	volatile int8_t x608 = INT8_MAX;

    t138 = (x605|((x606/x607)-x608));

    if (t138 != -153391745) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x609 = -1234246923507737531LL;
	uint16_t x610 = 24771U;
	volatile uint16_t x611 = UINT16_MAX;
	int16_t x612 = INT16_MIN;
	static volatile int64_t t139 = -2161650741856559LL;

    t139 = (x609|((x610/x611)-x612));

    if (t139 != -1234246923507737531LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x614 = 349;
	int64_t x615 = INT64_MIN;
	int64_t x616 = INT64_MAX;

    t140 = (x613|((x614/x615)-x616));

    if (t140 != -55LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = INT16_MAX;
	int16_t x618 = INT16_MAX;
	static int16_t x619 = INT16_MIN;
	int32_t x620 = INT32_MAX;
	int32_t t141 = -1770;

    t141 = (x617|((x618/x619)-x620));

    if (t141 != -2147450881) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x621 = -15;
	int32_t x622 = -1;
	uint32_t x623 = 12524611U;
	static volatile uint64_t x624 = UINT64_MAX;
	uint64_t t142 = 190LLU;

    t142 = (x621|((x622/x623)-x624));

    if (t142 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x625 = INT64_MIN;
	int32_t x626 = INT32_MAX;
	uint64_t x627 = UINT64_MAX;
	int64_t x628 = INT64_MIN;
	volatile uint64_t t143 = 514707LLU;

    t143 = (x625|((x626/x627)-x628));

    if (t143 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t t144 = 63965030LLU;

    t144 = (x633|((x634/x635)-x636));

    if (t144 != 9223372036855160317LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x642 = UINT64_MAX;
	static uint32_t x643 = UINT32_MAX;
	int32_t x644 = INT32_MIN;
	uint64_t t145 = 21323024380789LLU;

    t145 = (x641|((x642/x643)-x644));

    if (t145 != 6442716977LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x645 = -799;
	volatile int16_t x646 = INT16_MAX;
	volatile uint64_t x647 = UINT64_MAX;
	static volatile uint32_t x648 = UINT32_MAX;
	volatile uint64_t t146 = 1271397392379LLU;

    t146 = (x645|((x646/x647)-x648));

    if (t146 != 18446744073709550817LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x649 = -1;
	static volatile uint32_t x650 = 220U;
	uint32_t x651 = UINT32_MAX;

    t147 = (x649|((x650/x651)-x652));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x653 = 2834387287LLU;
	int16_t x654 = -1;
	uint64_t x656 = 20350370446216633LLU;
	static volatile uint64_t t148 = 320270LLU;

    t148 = (x653|((x654/x655)-x656));

    if (t148 != 18426393705552376663LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;
	int32_t t149 = 140247;

    t149 = (x657|((x658/x659)-x660));

    if (t149 != -32640) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x661 = INT64_MIN;
	uint64_t x662 = UINT64_MAX;
	int8_t x663 = -1;
	int8_t x664 = INT8_MAX;
	volatile uint64_t t150 = 31LLU;

    t150 = (x661|((x662/x663)-x664));

    if (t150 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x669 = 82U;
	volatile int64_t x670 = -1632154892LL;
	int8_t x672 = -28;

    t151 = (x669|((x670/x671)-x672));

    if (t151 != 12751318LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x673 = 731019LLU;
	volatile int32_t x674 = INT32_MIN;
	int32_t x676 = -1;
	uint64_t t152 = 276101675471LLU;

    t152 = (x673|((x674/x675)-x676));

    if (t152 != 731019LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x677 = UINT16_MAX;
	int32_t x678 = INT32_MAX;
	int64_t x679 = -1LL;
	static int16_t x680 = -1;
	volatile int64_t t153 = -439LL;

    t153 = (x677|((x678/x679)-x680));

    if (t153 != -2147418113LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint64_t x682 = 3775518626989LLU;
	int32_t x683 = -1;
	volatile int16_t x684 = -1;

    t154 = (x681|((x682/x683)-x684));

    if (t154 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x685 = 0U;
	uint16_t x686 = 1U;
	int64_t x687 = -1LL;
	int8_t x688 = INT8_MIN;

    t155 = (x685|((x686/x687)-x688));

    if (t155 != 127LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = INT16_MAX;
	static int8_t x690 = -1;
	uint16_t x692 = UINT16_MAX;

    t156 = (x689|((x690/x691)-x692));

    if (t156 != -32769) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x693 = INT64_MAX;
	volatile int8_t x694 = INT8_MIN;
	uint8_t x695 = UINT8_MAX;
	static uint16_t x696 = 2410U;
	static volatile int64_t t157 = -2478789956LL;

    t157 = (x693|((x694/x695)-x696));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x697 = 45U;
	int16_t x698 = -1369;
	int16_t x699 = INT16_MIN;
	volatile uint64_t t158 = 99183LLU;

    t158 = (x697|((x698/x699)-x700));

    if (t158 != 18445209874900836911LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = INT32_MIN;
	int16_t x702 = -1;
	static int32_t t159 = 79770292;

    t159 = (x701|((x702/x703)-x704));

    if (t159 != -8861) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x705 = INT64_MAX;
	int16_t x706 = -1;
	int8_t x707 = 1;
	static uint64_t x708 = 21922511834LLU;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = (x705|((x706/x707)-x708));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x713 = INT32_MIN;
	int32_t x715 = 1;
	volatile int16_t x716 = -1;
	volatile int32_t t161 = -1477319;

    t161 = (x713|((x714/x715)-x716));

    if (t161 != -2147483600) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x717 = 6U;
	static uint8_t x718 = UINT8_MAX;
	volatile uint64_t x719 = UINT64_MAX;
	uint16_t x720 = 314U;
	uint64_t t162 = 1394880276LLU;

    t162 = (x717|((x718/x719)-x720));

    if (t162 != 18446744073709551302LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x727 = INT8_MIN;
	volatile int64_t t163 = -491LL;

    t163 = (x725|((x726/x727)-x728));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x730 = UINT32_MAX;
	static int64_t x731 = -1LL;
	int64_t x732 = INT64_MIN;
	uint64_t t164 = UINT64_MAX;

    t164 = (x729|((x730/x731)-x732));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x733 = INT8_MIN;
	uint8_t x734 = 12U;
	uint32_t x735 = 1830U;
	static uint32_t x736 = 1056274U;
	static volatile uint32_t t165 = 785056U;

    t165 = (x733|((x734/x735)-x736));

    if (t165 != 4294967278U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x737 = UINT32_MAX;
	static uint32_t x738 = 101165231U;
	volatile int16_t x740 = 9;

    t166 = (x737|((x738/x739)-x740));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x741 = -1LL;
	int32_t x744 = INT32_MIN;
	volatile int64_t t167 = 115179488875917231LL;

    t167 = (x741|((x742/x743)-x744));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x745 = INT64_MIN;
	static int8_t x746 = INT8_MIN;
	static uint8_t x747 = UINT8_MAX;
	int16_t x748 = INT16_MAX;
	int64_t t168 = 23473454432886LL;

    t168 = (x745|((x746/x747)-x748));

    if (t168 != -32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x750 = INT32_MAX;
	int8_t x751 = INT8_MIN;
	static volatile uint8_t x752 = UINT8_MAX;
	int32_t t169 = -9996933;

    t169 = (x749|((x750/x751)-x752));

    if (t169 != -16777470) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x753 = INT64_MAX;
	int16_t x754 = -264;
	int64_t x755 = -1LL;
	int32_t x756 = INT32_MIN;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x753|((x754/x755)-x756));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x757 = -1;
	volatile int16_t x758 = -1;
	static volatile int8_t x759 = INT8_MIN;
	int16_t x760 = INT16_MAX;
	volatile int32_t t171 = -3699544;

    t171 = (x757|((x758/x759)-x760));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x761 = INT16_MIN;
	uint16_t x762 = 1279U;
	int16_t x763 = -549;
	static int8_t x764 = -1;

    t172 = (x761|((x762/x763)-x764));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x766 = 4U;
	int16_t x767 = INT16_MIN;
	uint32_t x768 = 6364U;
	volatile uint32_t t173 = 0U;

    t173 = (x765|((x766/x767)-x768));

    if (t173 != 4294967159U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x769 = UINT32_MAX;
	int8_t x772 = -2;
	volatile uint32_t t174 = UINT32_MAX;

    t174 = (x769|((x770/x771)-x772));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x773 = -1;
	int32_t x775 = INT32_MAX;
	volatile int8_t x776 = INT8_MIN;

    t175 = (x773|((x774/x775)-x776));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x777 = -1LL;
	uint16_t x778 = 314U;
	uint64_t x779 = 1955445013874LLU;
	int32_t x780 = INT32_MIN;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (x777|((x778/x779)-x780));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x786 = INT16_MIN;
	int16_t x787 = INT16_MIN;
	int32_t x788 = INT32_MAX;

    t177 = (x785|((x786/x787)-x788));

    if (t177 != -2147483637) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x789 = 0;
	uint64_t x790 = UINT64_MAX;
	volatile int16_t x792 = INT16_MIN;

    t178 = (x789|((x790/x791)-x792));

    if (t178 != 32769LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x793 = 526111584595394LLU;
	volatile int16_t x794 = INT16_MAX;
	uint16_t x796 = 13895U;
	volatile uint64_t t179 = 113267031837503702LLU;

    t179 = (x793|((x794/x795)-x796));

    if (t179 != 526111584595450LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MIN;
	volatile uint64_t x798 = 14173LLU;
	int16_t x799 = 1;
	int32_t x800 = -1;
	uint64_t t180 = 86681360522LLU;

    t180 = (x797|((x798/x799)-x800));

    if (t180 != 18446744071562082142LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x801 = 0;
	volatile int64_t x802 = 4558LL;
	int8_t x803 = INT8_MAX;
	uint8_t x804 = 93U;
	int64_t t181 = 505225LL;

    t181 = (x801|((x802/x803)-x804));

    if (t181 != -58LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x805 = -1;
	int32_t x806 = -1;
	uint16_t x807 = 2088U;
	volatile int32_t t182 = -33;

    t182 = (x805|((x806/x807)-x808));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x810 = 363LLU;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = INT32_MIN;
	volatile uint64_t t183 = 29LLU;

    t183 = (x809|((x810/x811)-x812));

    if (t183 != 19824948437511132LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x813 = INT64_MAX;
	int64_t x814 = -1LL;
	int8_t x815 = -1;
	int32_t x816 = INT32_MIN;
	static int64_t t184 = INT64_MAX;

    t184 = (x813|((x814/x815)-x816));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x818 = INT8_MAX;
	int16_t x820 = -42;
	static uint32_t t185 = 4849094U;

    t185 = (x817|((x818/x819)-x820));

    if (t185 != 32767U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x825 = -27852189LL;
	uint16_t x826 = UINT16_MAX;
	volatile uint64_t t186 = 29605LLU;

    t186 = (x825|((x826/x827)-x828));

    if (t186 != 18446744073683832423LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x834 = UINT64_MAX;
	uint64_t x835 = 510006LLU;
	volatile uint64_t x836 = UINT64_MAX;
	uint64_t t187 = 56743615045337177LLU;

    t187 = (x833|((x834/x835)-x836));

    if (t187 != 18446744073303361969LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x837 = INT64_MAX;
	uint8_t x838 = 2U;
	uint64_t x839 = 39LLU;
	static int8_t x840 = 1;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x837|((x838/x839)-x840));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x841 = UINT16_MAX;
	int32_t x842 = -1;
	uint8_t x844 = 2U;
	uint64_t t189 = UINT64_MAX;

    t189 = (x841|((x842/x843)-x844));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	uint64_t x850 = UINT64_MAX;
	int32_t x851 = -3208;
	int64_t x852 = INT64_MAX;
	uint64_t t190 = 323570LLU;

    t190 = (x849|((x850/x851)-x852));

    if (t190 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x853 = INT16_MIN;
	static int32_t x854 = 53763224;
	volatile int16_t x855 = -637;
	static uint32_t x856 = UINT32_MAX;
	volatile uint32_t t191 = 1919159U;

    t191 = (x853|((x854/x855)-x856));

    if (t191 != 4294948433U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x857 = INT16_MAX;
	uint16_t x859 = 4U;
	int64_t x860 = -485775511015LL;
	volatile int64_t t192 = -3LL;

    t192 = (x857|((x858/x859)-x860));

    if (t192 != 485775540223LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x861 = 13U;
	static int64_t x862 = -1LL;
	static uint32_t x863 = 51562367U;
	int32_t x864 = -1;
	int64_t t193 = -989970696367704LL;

    t193 = (x861|((x862/x863)-x864));

    if (t193 != 13LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x865 = 14;
	int32_t x867 = 4155645;
	static int8_t x868 = INT8_MAX;
	int32_t t194 = -3767;

    t194 = (x865|((x866/x867)-x868));

    if (t194 != -113) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x869 = -21LL;
	volatile int32_t x870 = INT32_MIN;
	int64_t x871 = 282387LL;
	int8_t x872 = 1;
	int64_t t195 = -18365869873LL;

    t195 = (x869|((x870/x871)-x872));

    if (t195 != -21LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x873 = INT64_MAX;
	static uint64_t x874 = 278239511LLU;
	static int64_t x876 = INT64_MAX;

    t196 = (x873|((x874/x875)-x876));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x878 = -50;
	int64_t x879 = -1LL;
	uint64_t x880 = UINT64_MAX;
	uint64_t t197 = 18364001LLU;

    t197 = (x877|((x878/x879)-x880));

    if (t197 != 51LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x881 = UINT64_MAX;
	int32_t x882 = 18292467;
	int8_t x883 = INT8_MIN;
	int32_t x884 = -1;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = (x881|((x882/x883)-x884));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x885 = -621703;
	volatile int64_t x887 = -1LL;
	int8_t x888 = INT8_MAX;
	int64_t t199 = -1084326281578LL;

    t199 = (x885|((x886/x887)-x888));

    if (t199 != -129LL) { NG(); } else { ; }
	
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

