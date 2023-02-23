
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

static int16_t x3 = -1;
int64_t x4 = -1LL;
static volatile uint16_t x6 = 2U;
static volatile int8_t x10 = 0;
volatile int32_t t2 = -573183030;
uint16_t x15 = 1309U;
volatile int32_t t5 = 0;
int64_t x33 = -1LL;
int64_t x42 = -5137424075LL;
int32_t t10 = -1726642;
static uint64_t x45 = 627LLU;
uint64_t t11 = 4199819388747530LLU;
uint8_t x49 = UINT8_MAX;
int64_t x50 = INT64_MIN;
volatile int32_t t13 = 987;
int32_t x57 = INT32_MIN;
static volatile uint32_t x67 = 220898574U;
static int64_t x72 = -24402819739LL;
uint8_t x74 = 28U;
uint16_t x75 = 0U;
int16_t x80 = INT16_MIN;
volatile int64_t t19 = 28999120919108LL;
int32_t x84 = INT32_MAX;
static int64_t x85 = 173954789LL;
volatile int32_t x86 = INT32_MIN;
int64_t x91 = 1628557172016694967LL;
volatile uint64_t x106 = UINT64_MAX;
volatile uint64_t x108 = 8146810775409LLU;
volatile int32_t x110 = INT32_MAX;
int32_t t28 = -941192834;
uint8_t x117 = UINT8_MAX;
volatile uint8_t x119 = UINT8_MAX;
uint64_t x132 = 15180351322304887LLU;
int16_t x135 = -8494;
int64_t t33 = -758474420LL;
volatile int8_t x141 = -47;
uint16_t x143 = 202U;
int16_t x147 = 192;
volatile uint8_t x156 = UINT8_MAX;
int32_t t37 = 338;
int32_t x159 = -36238118;
static volatile int8_t x160 = INT8_MIN;
uint8_t x171 = 35U;
static int16_t x172 = 6;
uint8_t x173 = 30U;
int32_t x175 = INT32_MIN;
volatile int32_t x178 = INT32_MIN;
int16_t x180 = INT16_MIN;
int16_t x182 = -1;
int8_t x195 = INT8_MIN;
int8_t x197 = 3;
volatile int8_t x202 = -27;
volatile int32_t x212 = -1;
int64_t t49 = -87LL;
uint8_t x216 = 47U;
static int32_t x223 = -1;
int32_t t52 = -1002789;
static int8_t x233 = INT8_MIN;
static int64_t x234 = INT64_MAX;
volatile int8_t x246 = INT8_MIN;
static int8_t x248 = -1;
volatile uint32_t t56 = 15323U;
int32_t x252 = -1;
uint64_t x257 = 1LLU;
static volatile int32_t t60 = 80848;
int64_t x265 = INT64_MIN;
int32_t x269 = -1;
int16_t x273 = -1;
int64_t x275 = INT64_MIN;
int32_t t63 = 0;
static int16_t x288 = 197;
volatile int64_t x291 = -1182LL;
int8_t x301 = -6;
static volatile int32_t t69 = 326997098;
int32_t x316 = 836181;
volatile int32_t t71 = -1;
volatile int64_t t73 = -534654183LL;
int64_t x333 = INT64_MIN;
int16_t x336 = INT16_MIN;
static int16_t x339 = INT16_MIN;
volatile int32_t t78 = 308;
volatile int32_t x345 = -1;
static volatile int32_t t79 = 6;
static int8_t x349 = INT8_MIN;
uint32_t x368 = UINT32_MAX;
int16_t x370 = INT16_MAX;
volatile int64_t x375 = 2297242LL;
volatile uint8_t x376 = UINT8_MAX;
int64_t x378 = INT64_MIN;
volatile int64_t t86 = 383320954499772LL;
int32_t x382 = -1;
static int16_t x384 = 185;
volatile int32_t x385 = 19167;
volatile int64_t x387 = -1LL;
uint8_t x395 = UINT8_MAX;
uint16_t x396 = 416U;
uint32_t x415 = UINT32_MAX;
volatile uint64_t x417 = 8151964444094LLU;
volatile uint8_t x421 = UINT8_MAX;
uint64_t x427 = 3772377389928749405LLU;
int32_t x434 = -6278;
volatile uint16_t x441 = UINT16_MAX;
int32_t x446 = INT32_MAX;
int32_t x457 = -1;
int16_t x459 = INT16_MIN;
uint32_t x462 = 5U;
volatile int16_t x463 = -1;
int16_t x465 = -1;
static volatile int16_t x466 = 527;
uint8_t x470 = 28U;
int16_t x477 = -15054;
int16_t x478 = INT16_MIN;
int64_t x479 = INT64_MAX;
volatile uint16_t x490 = 3U;
int32_t x499 = -14877014;
static int32_t t116 = 23172;
static volatile int8_t x501 = -35;
int32_t x509 = 226532;
static uint16_t x519 = 25U;
int8_t x520 = INT8_MAX;
volatile int64_t t121 = -430980LL;
volatile int64_t t122 = -69682637404355LL;
uint8_t x525 = UINT8_MAX;
int8_t x531 = INT8_MAX;
int32_t x540 = -67992;
volatile uint16_t x542 = 1U;
int16_t x543 = -1097;
int32_t x548 = INT32_MIN;
static volatile int64_t x554 = INT64_MIN;
int8_t x558 = INT8_MIN;
int8_t x563 = 1;
volatile int64_t t133 = 1LL;
static int32_t x570 = INT32_MAX;
uint64_t x571 = UINT64_MAX;
uint8_t x572 = UINT8_MAX;
uint64_t x574 = UINT64_MAX;
int32_t x576 = -1;
volatile int8_t x582 = -1;
static int8_t x583 = -4;
static int64_t t139 = 28LL;
int64_t x602 = INT64_MIN;
uint16_t x610 = 22U;
int8_t x618 = 1;
volatile int32_t x623 = INT32_MAX;
volatile int32_t t145 = 449435634;
volatile int8_t x639 = INT8_MIN;
volatile int32_t t149 = -12;
int16_t x643 = INT16_MIN;
int64_t x648 = 777LL;
static uint32_t x650 = 25489U;
int8_t x651 = INT8_MAX;
static uint64_t x654 = 1294426649338003413LLU;
int64_t t154 = -54695043561336631LL;
int64_t x666 = INT64_MAX;
int64_t x672 = INT64_MIN;
int8_t x675 = -30;
int32_t x678 = -12;
volatile int8_t x679 = INT8_MAX;
uint32_t x682 = 31U;
int16_t x685 = INT16_MIN;
int32_t x696 = INT32_MAX;
int32_t x700 = INT32_MIN;
volatile int32_t t163 = -89166;
static uint64_t x702 = UINT64_MAX;
int8_t x703 = 24;
volatile int32_t t164 = -1;
volatile int8_t x709 = -1;
static int32_t x716 = INT32_MAX;
int64_t x720 = INT64_MIN;
static uint64_t x724 = UINT64_MAX;
int16_t x731 = INT16_MAX;
volatile int32_t x741 = INT32_MIN;
int16_t x746 = -1;
volatile int32_t t175 = -1;
static uint32_t t177 = 12U;
int32_t t178 = -36502808;
static uint64_t x769 = UINT64_MAX;
uint32_t x770 = 3U;
int32_t x774 = INT32_MIN;
int64_t x775 = 1618LL;
uint32_t x783 = 1U;
uint32_t x786 = 15347U;
int64_t x792 = -1644130219358869LL;
int8_t x795 = -55;
int32_t x796 = -1;
int32_t t187 = 15;
int32_t x803 = INT32_MIN;
uint32_t x806 = UINT32_MAX;
volatile uint16_t x816 = 194U;
static uint8_t x818 = 4U;
int16_t x821 = INT16_MIN;
int32_t x826 = -1;
volatile int32_t t194 = 21556121;
int32_t t195 = -5;
uint64_t x836 = 370908230LLU;
volatile int8_t x848 = -1;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	volatile uint8_t x2 = UINT8_MAX;
	int64_t t0 = -2169133244492615LL;

    t0 = (x1+((x2>x3)!=x4));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint16_t x7 = 2U;
	int64_t x8 = 18251659225LL;
	volatile int32_t t1 = 16258396;

    t1 = (x5+((x6>x7)!=x8));

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 2156;
	static int32_t x11 = INT32_MAX;
	uint8_t x12 = 17U;

    t2 = (x9+((x10>x11)!=x12));

    if (t2 != 2157) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 628U;
	int64_t x14 = INT64_MIN;
	static volatile uint8_t x16 = 12U;
	static int32_t t3 = 235642;

    t3 = (x13+((x14>x15)!=x16));

    if (t3 != 629) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 26U;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = 8286511133LLU;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 2;

    t4 = (x17+((x18>x19)!=x20));

    if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int32_t x22 = 0;
	int16_t x23 = INT16_MIN;
	volatile uint64_t x24 = 999730686925774309LLU;

    t5 = (x21+((x22>x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -57;
	static int64_t x28 = INT64_MAX;
	int32_t t6 = -67923;

    t6 = (x25+((x26>x27)!=x28));

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 3U;
	static int16_t x30 = -14569;
	int16_t x31 = -1;
	static volatile int8_t x32 = 3;
	volatile int32_t t7 = -1;

    t7 = (x29+((x30>x31)!=x32));

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 3LLU;
	volatile int64_t x35 = 9778LL;
	int32_t x36 = 0;
	int64_t t8 = 6559604712655LL;

    t8 = (x33+((x34>x35)!=x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 2U;
	static int32_t x38 = -31122559;
	int16_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 25;

    t9 = (x37+((x38>x39)!=x40));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = -1;
	static int16_t x43 = -1;
	uint64_t x44 = UINT64_MAX;

    t10 = (x41+((x42>x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x46 = UINT64_MAX;
	uint32_t x47 = 3951U;
	int16_t x48 = INT16_MIN;

    t11 = (x45+((x46>x47)!=x48));

    if (t11 != 628LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x51 = 885003967703309530LL;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -2433;

    t12 = (x49+((x50>x51)!=x52));

    if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t x55 = -1;
	uint8_t x56 = UINT8_MAX;

    t13 = (x53+((x54>x55)!=x56));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -1;
	uint8_t x59 = 34U;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 5;

    t14 = (x57+((x58>x59)!=x60));

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 497;
	int16_t x62 = 1;
	static volatile int16_t x63 = INT16_MAX;
	volatile int64_t x64 = INT64_MAX;
	static int32_t t15 = -87;

    t15 = (x61+((x62>x63)!=x64));

    if (t15 != 498) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 18U;
	int16_t x66 = 1714;
	uint16_t x68 = 32033U;
	int32_t t16 = -849;

    t16 = (x65+((x66>x67)!=x68));

    if (t16 != 19) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MIN;
	volatile int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MAX;
	volatile int32_t t17 = -37460845;

    t17 = (x69+((x70>x71)!=x72));

    if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int8_t x76 = -1;
	int32_t t18 = 2206;

    t18 = (x73+((x74>x75)!=x76));

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x78 = -4349;
	uint32_t x79 = UINT32_MAX;

    t19 = (x77+((x78>x79)!=x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -1;
	static int32_t t20 = -12;

    t20 = (x81+((x82>x83)!=x84));

    if (t20 != 65536) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x87 = INT8_MAX;
	volatile int64_t x88 = -1LL;
	volatile int64_t t21 = 2893LL;

    t21 = (x85+((x86>x87)!=x88));

    if (t21 != 173954790LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 1U;
	int64_t x90 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t22 = 20787455;

    t22 = (x89+((x90>x91)!=x92));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	static uint64_t x94 = 101839772LLU;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = 1U;
	int32_t t23 = -55337;

    t23 = (x93+((x94>x95)!=x96));

    if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 1;
	uint64_t x98 = 1LLU;
	int64_t x99 = -1LL;
	uint8_t x100 = 0U;
	static int32_t t24 = 13202;

    t24 = (x97+((x98>x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x101 = 48U;
	volatile int8_t x102 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = 9428905868206252LLU;
	int32_t t25 = 28958;

    t25 = (x101+((x102>x103)!=x104));

    if (t25 != 49) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	static uint8_t x107 = 4U;
	volatile int32_t t26 = -7173;

    t26 = (x105+((x106>x107)!=x108));

    if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 44336404179222LL;
	static int16_t x111 = 1;
	uint16_t x112 = 1U;
	volatile int64_t t27 = 90038781LL;

    t27 = (x109+((x110>x111)!=x112));

    if (t27 != 44336404179222LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 1;
	int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	static int64_t x116 = INT64_MIN;

    t28 = (x113+((x114>x115)!=x116));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x118 = 3U;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 569439272;

    t29 = (x117+((x118>x119)!=x120));

    if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = INT32_MIN;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	volatile int32_t x124 = -995222;
	static int32_t t30 = -6239;

    t30 = (x121+((x122>x123)!=x124));

    if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = UINT64_MAX;
	uint32_t x130 = 3542973U;
	int64_t x131 = INT64_MAX;
	volatile uint64_t t31 = 9312837316LLU;

    t31 = (x129+((x130>x131)!=x132));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -193100LL;
	volatile uint32_t x134 = UINT32_MAX;
	uint8_t x136 = 7U;
	static int64_t t32 = -3124185602822007576LL;

    t32 = (x133+((x134>x135)!=x136));

    if (t32 != -193099LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = INT64_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = -1;
	volatile uint32_t x140 = 1063497364U;

    t33 = (x137+((x138>x139)!=x140));

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = INT8_MIN;
	volatile int8_t x144 = -10;
	volatile int32_t t34 = 243631;

    t34 = (x141+((x142>x143)!=x144));

    if (t34 != -46) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = 9U;
	int32_t x146 = -2;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t35 = -19;

    t35 = (x145+((x146>x147)!=x148));

    if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = 102469255054562593LL;
	uint16_t x150 = UINT16_MAX;
	uint64_t x151 = 281591127834687LLU;
	static int8_t x152 = 1;
	int64_t t36 = -144984588662645182LL;

    t36 = (x149+((x150>x151)!=x152));

    if (t36 != 102469255054562594LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	volatile int16_t x154 = 11771;
	volatile int8_t x155 = INT8_MIN;

    t37 = (x153+((x154>x155)!=x156));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	uint64_t x158 = 20155130635061714LLU;
	static int32_t t38 = -16747;

    t38 = (x157+((x158>x159)!=x160));

    if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x161 = UINT8_MAX;
	int16_t x162 = 174;
	uint64_t x163 = 4102231LLU;
	volatile int64_t x164 = INT64_MIN;
	int32_t t39 = -1;

    t39 = (x161+((x162>x163)!=x164));

    if (t39 != 256) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = -3;
	volatile int16_t x170 = INT16_MAX;
	volatile int32_t t40 = -90314866;

    t40 = (x169+((x170>x171)!=x172));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x174 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t41 = 294;

    t41 = (x173+((x174>x175)!=x176));

    if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	int32_t t42 = -13999598;

    t42 = (x177+((x178>x179)!=x180));

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = 25U;
	volatile int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t43 = 1;

    t43 = (x181+((x182>x183)!=x184));

    if (t43 != 26) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile uint8_t x190 = 85U;
	uint32_t x191 = 72341U;
	uint8_t x192 = 42U;
	static uint32_t t44 = 12436U;

    t44 = (x189+((x190>x191)!=x192));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -1LL;
	int16_t x194 = -11532;
	int32_t x196 = 286143183;
	volatile int64_t t45 = -4398594LL;

    t45 = (x193+((x194>x195)!=x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = INT32_MAX;
	static volatile uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t46 = 0;

    t46 = (x197+((x198>x199)!=x200));

    if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = INT32_MAX;
	int32_t t47 = 424011872;

    t47 = (x201+((x202>x203)!=x204));

    if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 22U;
	uint16_t x206 = 4089U;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t48 = -62839131;

    t48 = (x205+((x206>x207)!=x208));

    if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = 52760858007284430LL;
	int8_t x210 = 1;
	int64_t x211 = INT64_MIN;

    t49 = (x209+((x210>x211)!=x212));

    if (t49 != 52760858007284431LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = 22;
	int32_t x214 = 115002338;
	int64_t x215 = 24955LL;
	volatile int32_t t50 = -176093;

    t50 = (x213+((x214>x215)!=x216));

    if (t50 != 23) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = INT32_MIN;
	uint64_t x218 = 9167874438690058268LLU;
	int16_t x219 = -3;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t51 = 10;

    t51 = (x217+((x218>x219)!=x220));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int32_t x222 = -1;
	int16_t x224 = -1;

    t52 = (x221+((x222>x223)!=x224));

    if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x235 = -1;
	volatile int16_t x236 = -268;
	static volatile int32_t t53 = 702;

    t53 = (x233+((x234>x235)!=x236));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x237 = -58;
	uint8_t x238 = 6U;
	int16_t x239 = 3519;
	static int16_t x240 = -2;
	int32_t t54 = 115502887;

    t54 = (x237+((x238>x239)!=x240));

    if (t54 != -57) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x241 = 31206357LLU;
	volatile uint16_t x242 = UINT16_MAX;
	static uint8_t x243 = 4U;
	int64_t x244 = 1399LL;
	volatile uint64_t t55 = 9612886820167547LLU;

    t55 = (x241+((x242>x243)!=x244));

    if (t55 != 31206358LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x245 = UINT32_MAX;
	uint64_t x247 = 122360599891062971LLU;

    t56 = (x245+((x246>x247)!=x248));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x249 = -1;
	volatile int16_t x250 = -3;
	uint8_t x251 = 3U;
	volatile int32_t t57 = 1;

    t57 = (x249+((x250>x251)!=x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x253 = 16;
	volatile uint16_t x254 = 2289U;
	int64_t x255 = -1LL;
	static int32_t x256 = 26887928;
	static int32_t t58 = 72788;

    t58 = (x253+((x254>x255)!=x256));

    if (t58 != 17) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x258 = INT32_MAX;
	static uint16_t x259 = 23U;
	static int16_t x260 = 39;
	static uint64_t t59 = 20103946302543413LLU;

    t59 = (x257+((x258>x259)!=x260));

    if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = 13;
	int32_t x262 = 3334967;
	uint8_t x263 = 3U;
	uint64_t x264 = 8698458546053016LLU;

    t60 = (x261+((x262>x263)!=x264));

    if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x266 = -1LL;
	int8_t x267 = -1;
	static int8_t x268 = -1;
	volatile int64_t t61 = 137659257278396LL;

    t61 = (x265+((x266>x267)!=x268));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x270 = 182U;
	static int16_t x271 = INT16_MIN;
	uint64_t x272 = UINT64_MAX;
	static int32_t t62 = 6552142;

    t62 = (x269+((x270>x271)!=x272));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x274 = -1;
	static int32_t x276 = INT32_MAX;

    t63 = (x273+((x274>x275)!=x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x281 = INT64_MIN;
	int16_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t64 = 488390376202815714LL;

    t64 = (x281+((x282>x283)!=x284));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x285 = -1;
	uint16_t x286 = 5811U;
	int8_t x287 = INT8_MAX;
	volatile int32_t t65 = -325;

    t65 = (x285+((x286>x287)!=x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MIN;
	static int8_t x290 = INT8_MIN;
	static volatile int32_t x292 = INT32_MIN;
	volatile int32_t t66 = -4;

    t66 = (x289+((x290>x291)!=x292));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = 3593U;
	int64_t x294 = -1LL;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	volatile uint32_t t67 = 5U;

    t67 = (x293+((x294>x295)!=x296));

    if (t67 != 3594U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x297 = UINT32_MAX;
	static int16_t x298 = 4;
	int32_t x299 = 216565;
	uint64_t x300 = 0LLU;
	static uint32_t t68 = UINT32_MAX;

    t68 = (x297+((x298>x299)!=x300));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x302 = -1;
	int8_t x303 = INT8_MAX;
	int8_t x304 = -1;

    t69 = (x301+((x302>x303)!=x304));

    if (t69 != -5) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x305 = 11U;
	volatile int8_t x306 = INT8_MAX;
	static int8_t x307 = INT8_MIN;
	uint64_t x308 = 36599483667767LLU;
	volatile int32_t t70 = -215114540;

    t70 = (x305+((x306>x307)!=x308));

    if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = -1762665;
	static uint32_t x315 = 7108U;

    t71 = (x313+((x314>x315)!=x316));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = INT16_MIN;
	int16_t x318 = 4;
	int32_t x319 = 94792;
	volatile int64_t x320 = -31816LL;
	volatile int32_t t72 = -122;

    t72 = (x317+((x318>x319)!=x320));

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -10464365639656644LL;
	static volatile uint8_t x322 = 0U;
	int8_t x323 = 1;
	volatile uint16_t x324 = 11636U;

    t73 = (x321+((x322>x323)!=x324));

    if (t73 != -10464365639656643LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x325 = INT8_MIN;
	int64_t x326 = -1LL;
	int32_t x327 = -1;
	uint32_t x328 = 202779U;
	volatile int32_t t74 = -306816621;

    t74 = (x325+((x326>x327)!=x328));

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x329 = INT16_MIN;
	volatile int64_t x330 = INT64_MAX;
	volatile int64_t x331 = INT64_MIN;
	uint8_t x332 = 6U;
	int32_t t75 = -55647895;

    t75 = (x329+((x330>x331)!=x332));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x334 = -1;
	int64_t x335 = -343509LL;
	int64_t t76 = 4LL;

    t76 = (x333+((x334>x335)!=x336));

    if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x337 = INT16_MIN;
	static int32_t x338 = INT32_MAX;
	uint64_t x340 = 161836606LLU;
	volatile int32_t t77 = -583;

    t77 = (x337+((x338>x339)!=x340));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x341 = 45U;
	uint16_t x342 = 7788U;
	uint8_t x343 = UINT8_MAX;
	static int8_t x344 = -1;

    t78 = (x341+((x342>x343)!=x344));

    if (t78 != 46) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x346 = UINT64_MAX;
	volatile uint16_t x347 = 6125U;
	uint64_t x348 = UINT64_MAX;

    t79 = (x345+((x346>x347)!=x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x350 = -1LL;
	volatile uint8_t x351 = 3U;
	volatile uint64_t x352 = UINT64_MAX;
	static int32_t t80 = -54620692;

    t80 = (x349+((x350>x351)!=x352));

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x353 = 1;
	int32_t x354 = 0;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t81 = -4;

    t81 = (x353+((x354>x355)!=x356));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x361 = -1;
	uint32_t x362 = 321392852U;
	int8_t x363 = -7;
	int64_t x364 = -1LL;
	volatile int32_t t82 = 14103;

    t82 = (x361+((x362>x363)!=x364));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x365 = 135054825424494028LLU;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	uint64_t t83 = 13677586LLU;

    t83 = (x365+((x366>x367)!=x368));

    if (t83 != 135054825424494029LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x369 = UINT16_MAX;
	int16_t x371 = 14;
	int8_t x372 = -2;
	static volatile int32_t t84 = 647;

    t84 = (x369+((x370>x371)!=x372));

    if (t84 != 65536) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x373 = -1;
	static uint64_t x374 = 574757686389467465LLU;
	volatile int32_t t85 = -719532;

    t85 = (x373+((x374>x375)!=x376));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x377 = INT64_MIN;
	int8_t x379 = 12;
	uint32_t x380 = 3614416U;

    t86 = (x377+((x378>x379)!=x380));

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x381 = UINT16_MAX;
	static volatile int16_t x383 = INT16_MIN;
	volatile int32_t t87 = -87;

    t87 = (x381+((x382>x383)!=x384));

    if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x386 = UINT16_MAX;
	uint8_t x388 = 1U;
	int32_t t88 = -220181889;

    t88 = (x385+((x386>x387)!=x388));

    if (t88 != 19167) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x389 = -4;
	int64_t x390 = -7047377596LL;
	int8_t x391 = 35;
	uint64_t x392 = 14521LLU;
	volatile int32_t t89 = 574200744;

    t89 = (x389+((x390>x391)!=x392));

    if (t89 != -3) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x393 = 5;
	static int32_t x394 = 1013113;
	static int32_t t90 = 14;

    t90 = (x393+((x394>x395)!=x396));

    if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x397 = 5485;
	uint16_t x398 = 211U;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = 479047U;
	static volatile int32_t t91 = 3786;

    t91 = (x397+((x398>x399)!=x400));

    if (t91 != 5486) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x401 = UINT32_MAX;
	static volatile uint8_t x402 = 47U;
	volatile int32_t x403 = INT32_MIN;
	static uint8_t x404 = UINT8_MAX;
	volatile uint32_t t92 = 15288U;

    t92 = (x401+((x402>x403)!=x404));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x405 = UINT64_MAX;
	int8_t x406 = -50;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = -1;
	uint64_t t93 = 53555LLU;

    t93 = (x405+((x406>x407)!=x408));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = 355512762126366458LLU;
	uint64_t x410 = 9106LLU;
	volatile int16_t x411 = INT16_MIN;
	volatile int32_t x412 = 46293;
	volatile uint64_t t94 = 54LLU;

    t94 = (x409+((x410>x411)!=x412));

    if (t94 != 355512762126366459LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x413 = 78242831716706229LLU;
	int16_t x414 = 1;
	volatile uint16_t x416 = 972U;
	uint64_t t95 = 43310LLU;

    t95 = (x413+((x414>x415)!=x416));

    if (t95 != 78242831716706230LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x418 = 5;
	int32_t x419 = -1;
	volatile int16_t x420 = INT16_MIN;
	static uint64_t t96 = 11076492020684814LLU;

    t96 = (x417+((x418>x419)!=x420));

    if (t96 != 8151964444095LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x422 = -6416LL;
	int32_t x423 = 110;
	static volatile int64_t x424 = INT64_MAX;
	int32_t t97 = 2593;

    t97 = (x421+((x422>x423)!=x424));

    if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x425 = -1;
	static int64_t x426 = INT64_MIN;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t98 = -952828448;

    t98 = (x425+((x426>x427)!=x428));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x429 = INT8_MAX;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MAX;
	static uint8_t x432 = 1U;
	volatile int32_t t99 = -59;

    t99 = (x429+((x430>x431)!=x432));

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x433 = -1;
	int8_t x435 = INT8_MIN;
	static uint64_t x436 = 7067534LLU;
	int32_t t100 = -18;

    t100 = (x433+((x434>x435)!=x436));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x437 = 123910594212949380LLU;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	int8_t x440 = -17;
	static volatile uint64_t t101 = 89751776LLU;

    t101 = (x437+((x438>x439)!=x440));

    if (t101 != 123910594212949381LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x442 = INT64_MIN;
	int32_t x443 = -4897763;
	static int32_t x444 = 9;
	int32_t t102 = -125923249;

    t102 = (x441+((x442>x443)!=x444));

    if (t102 != 65536) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = 929U;
	uint32_t x447 = 256323567U;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t103 = 241408302;

    t103 = (x445+((x446>x447)!=x448));

    if (t103 != 930) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MIN;
	uint32_t x450 = UINT32_MAX;
	static int64_t x451 = INT64_MAX;
	uint8_t x452 = 6U;
	static int32_t t104 = 2408;

    t104 = (x449+((x450>x451)!=x452));

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = -613;
	volatile int16_t x454 = INT16_MIN;
	volatile int8_t x455 = INT8_MIN;
	volatile int8_t x456 = -1;
	volatile int32_t t105 = 1773419;

    t105 = (x453+((x454>x455)!=x456));

    if (t105 != -612) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x458 = -12448395LL;
	uint8_t x460 = UINT8_MAX;
	int32_t t106 = -109137;

    t106 = (x457+((x458>x459)!=x460));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x461 = 2U;
	uint8_t x464 = UINT8_MAX;
	static volatile int32_t t107 = 2827;

    t107 = (x461+((x462>x463)!=x464));

    if (t107 != 3) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t108 = 3654;

    t108 = (x465+((x466>x467)!=x468));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = -17598726169502238LL;
	uint16_t x471 = UINT16_MAX;
	uint16_t x472 = 3U;
	int64_t t109 = -136823604755900LL;

    t109 = (x469+((x470>x471)!=x472));

    if (t109 != -17598726169502237LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x473 = -1;
	int32_t x474 = INT32_MIN;
	uint8_t x475 = 3U;
	int16_t x476 = -1;
	int32_t t110 = -954;

    t110 = (x473+((x474>x475)!=x476));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x480 = -1;
	static int32_t t111 = -88023312;

    t111 = (x477+((x478>x479)!=x480));

    if (t111 != -15053) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x481 = 7U;
	int8_t x482 = INT8_MAX;
	int64_t x483 = INT64_MAX;
	uint32_t x484 = UINT32_MAX;
	int32_t t112 = -592;

    t112 = (x481+((x482>x483)!=x484));

    if (t112 != 8) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = -1;
	int64_t x486 = -16493375616509768LL;
	uint32_t x487 = UINT32_MAX;
	static int32_t x488 = 111463;
	volatile int32_t t113 = 318988813;

    t113 = (x485+((x486>x487)!=x488));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x489 = 8583;
	static int16_t x491 = 0;
	int16_t x492 = 66;
	volatile int32_t t114 = 667;

    t114 = (x489+((x490>x491)!=x492));

    if (t114 != 8584) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	uint8_t x495 = UINT8_MAX;
	volatile uint8_t x496 = 0U;
	int32_t t115 = 351285794;

    t115 = (x493+((x494>x495)!=x496));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x498 = -1;
	uint16_t x500 = 14917U;

    t116 = (x497+((x498>x499)!=x500));

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x502 = INT16_MAX;
	int16_t x503 = 7068;
	int8_t x504 = -15;
	volatile int32_t t117 = 12;

    t117 = (x501+((x502>x503)!=x504));

    if (t117 != -34) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t118 = -60519061;

    t118 = (x505+((x506>x507)!=x508));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x510 = UINT8_MAX;
	static int32_t x511 = -1;
	int32_t x512 = INT32_MAX;
	static volatile int32_t t119 = 1;

    t119 = (x509+((x510>x511)!=x512));

    if (t119 != 226533) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x513 = -1;
	static volatile uint64_t x514 = 10284317101LLU;
	int64_t x515 = 6533991718956LL;
	static volatile int32_t x516 = INT32_MAX;
	int32_t t120 = -352933;

    t120 = (x513+((x514>x515)!=x516));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x517 = 1LL;
	int64_t x518 = INT64_MAX;

    t121 = (x517+((x518>x519)!=x520));

    if (t121 != 2LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = 13LL;
	int64_t x522 = INT64_MAX;
	int16_t x523 = -1;
	int8_t x524 = INT8_MIN;

    t122 = (x521+((x522>x523)!=x524));

    if (t122 != 14LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x526 = 1;
	int16_t x527 = -1;
	volatile int8_t x528 = -1;
	static int32_t t123 = 19558;

    t123 = (x525+((x526>x527)!=x528));

    if (t123 != 256) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x529 = 83175;
	static uint64_t x530 = 15312480897169LLU;
	uint64_t x532 = 63599141LLU;
	volatile int32_t t124 = 2;

    t124 = (x529+((x530>x531)!=x532));

    if (t124 != 83176) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x533 = 54543U;
	static int32_t x534 = INT32_MIN;
	volatile int8_t x535 = -1;
	static uint32_t x536 = UINT32_MAX;
	uint32_t t125 = 1764484U;

    t125 = (x533+((x534>x535)!=x536));

    if (t125 != 54544U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x537 = 13;
	uint8_t x538 = UINT8_MAX;
	static int64_t x539 = -50498259960475843LL;
	static int32_t t126 = 0;

    t126 = (x537+((x538>x539)!=x540));

    if (t126 != 14) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = 1;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t127 = -1752603;

    t127 = (x541+((x542>x543)!=x544));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint64_t x546 = UINT64_MAX;
	static int32_t x547 = INT32_MAX;
	volatile int32_t t128 = -14;

    t128 = (x545+((x546>x547)!=x548));

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x549 = -1;
	static int16_t x550 = -1;
	int32_t x551 = INT32_MAX;
	int8_t x552 = INT8_MIN;
	int32_t t129 = 7764;

    t129 = (x549+((x550>x551)!=x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = INT32_MIN;
	static volatile int64_t x555 = INT64_MIN;
	int8_t x556 = -1;
	volatile int32_t t130 = 3321;

    t130 = (x553+((x554>x555)!=x556));

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x557 = -10276;
	int8_t x559 = INT8_MIN;
	int16_t x560 = -51;
	static volatile int32_t t131 = 4271;

    t131 = (x557+((x558>x559)!=x560));

    if (t131 != -10275) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x561 = UINT32_MAX;
	int8_t x562 = -13;
	int64_t x564 = 1LL;
	volatile uint32_t t132 = 29757U;

    t132 = (x561+((x562>x563)!=x564));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = INT64_MIN;
	int16_t x566 = INT16_MIN;
	volatile int8_t x567 = INT8_MIN;
	volatile uint8_t x568 = 3U;

    t133 = (x565+((x566>x567)!=x568));

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x569 = 256732LL;
	int64_t t134 = -234420384906LL;

    t134 = (x569+((x570>x571)!=x572));

    if (t134 != 256733LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x573 = 0LL;
	volatile int32_t x575 = 1905912;
	volatile int64_t t135 = 16637153LL;

    t135 = (x573+((x574>x575)!=x576));

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x577 = INT32_MIN;
	static uint64_t x578 = 26290LLU;
	int64_t x579 = INT64_MAX;
	static int16_t x580 = -58;
	static volatile int32_t t136 = 0;

    t136 = (x577+((x578>x579)!=x580));

    if (t136 != -2147483647) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x581 = -1;
	int16_t x584 = -1;
	volatile int32_t t137 = -1049;

    t137 = (x581+((x582>x583)!=x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x585 = -1LL;
	int32_t x586 = 1566117;
	static uint8_t x587 = 13U;
	volatile int16_t x588 = INT16_MIN;
	volatile int64_t t138 = 1493LL;

    t138 = (x585+((x586>x587)!=x588));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = INT64_MIN;
	uint16_t x590 = 6U;
	int64_t x591 = INT64_MIN;
	volatile int16_t x592 = 26;

    t139 = (x589+((x590>x591)!=x592));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x597 = 21615990890118LLU;
	int64_t x598 = 3607180350LL;
	static int8_t x599 = -1;
	int32_t x600 = INT32_MIN;
	uint64_t t140 = 49561LLU;

    t140 = (x597+((x598>x599)!=x600));

    if (t140 != 21615990890119LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x601 = -6LL;
	static int32_t x603 = -658;
	volatile int32_t x604 = -112510;
	volatile int64_t t141 = -2LL;

    t141 = (x601+((x602>x603)!=x604));

    if (t141 != -5LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x605 = 1343119U;
	int64_t x606 = INT64_MIN;
	int8_t x607 = INT8_MAX;
	static volatile int32_t x608 = -124259279;
	uint32_t t142 = 1081U;

    t142 = (x605+((x606>x607)!=x608));

    if (t142 != 1343120U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x609 = -1LL;
	static int16_t x611 = INT16_MAX;
	int16_t x612 = INT16_MIN;
	volatile int64_t t143 = -18LL;

    t143 = (x609+((x610>x611)!=x612));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x617 = -1LL;
	int32_t x619 = -139564311;
	int16_t x620 = INT16_MIN;
	volatile int64_t t144 = -3131714961554LL;

    t144 = (x617+((x618>x619)!=x620));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = -9401324LL;
	uint64_t x624 = 662821113LLU;

    t145 = (x621+((x622>x623)!=x624));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x625 = INT32_MIN;
	uint8_t x626 = 2U;
	uint16_t x627 = 1U;
	int32_t x628 = 512718;
	volatile int32_t t146 = 696;

    t146 = (x625+((x626>x627)!=x628));

    if (t146 != -2147483647) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x629 = INT32_MIN;
	int8_t x630 = -1;
	int64_t x631 = -402976812942853818LL;
	static uint8_t x632 = UINT8_MAX;
	volatile int32_t t147 = -30725;

    t147 = (x629+((x630>x631)!=x632));

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x633 = -39;
	static int16_t x634 = INT16_MIN;
	volatile uint64_t x635 = 24LLU;
	uint64_t x636 = 502855LLU;
	static int32_t t148 = -90115137;

    t148 = (x633+((x634>x635)!=x636));

    if (t148 != -38) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x637 = -1;
	static uint64_t x638 = 111LLU;
	static int32_t x640 = -1;

    t149 = (x637+((x638>x639)!=x640));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x641 = 15936U;
	uint32_t x642 = 861183U;
	volatile int8_t x644 = 52;
	int32_t t150 = 31;

    t150 = (x641+((x642>x643)!=x644));

    if (t150 != 15937) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = INT16_MAX;
	int16_t x647 = INT16_MAX;
	static int32_t t151 = 3492452;

    t151 = (x645+((x646>x647)!=x648));

    if (t151 != 65536) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x649 = INT8_MIN;
	int64_t x652 = -28332935680702LL;
	static int32_t t152 = -3612830;

    t152 = (x649+((x650>x651)!=x652));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x653 = INT8_MIN;
	int8_t x655 = 0;
	int16_t x656 = 0;
	volatile int32_t t153 = -245848846;

    t153 = (x653+((x654>x655)!=x656));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x657 = INT64_MIN;
	int64_t x658 = INT64_MIN;
	static volatile uint8_t x659 = 0U;
	int8_t x660 = 2;

    t154 = (x657+((x658>x659)!=x660));

    if (t154 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x661 = INT32_MIN;
	int64_t x662 = 432181282594LL;
	uint32_t x663 = 301097U;
	uint32_t x664 = UINT32_MAX;
	int32_t t155 = -361468894;

    t155 = (x661+((x662>x663)!=x664));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	static volatile int16_t x667 = -1;
	uint32_t x668 = 231378302U;
	static int32_t t156 = -3760;

    t156 = (x665+((x666>x667)!=x668));

    if (t156 != 256) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x669 = 38U;
	uint32_t x670 = UINT32_MAX;
	int32_t x671 = INT32_MAX;
	static volatile int32_t t157 = -201;

    t157 = (x669+((x670>x671)!=x672));

    if (t157 != 39) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x673 = 1U;
	static uint16_t x674 = 311U;
	int64_t x676 = -1LL;
	volatile int32_t t158 = -757;

    t158 = (x673+((x674>x675)!=x676));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x677 = INT16_MIN;
	uint64_t x680 = 230433LLU;
	static int32_t t159 = -21997;

    t159 = (x677+((x678>x679)!=x680));

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x683 = -1;
	volatile uint32_t x684 = 505433U;
	volatile int32_t t160 = -2186723;

    t160 = (x681+((x682>x683)!=x684));

    if (t160 != 65536) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x686 = -232265385101LL;
	static int64_t x687 = INT64_MIN;
	volatile int32_t x688 = 4260048;
	volatile int32_t t161 = 241668;

    t161 = (x685+((x686>x687)!=x688));

    if (t161 != -32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x694 = -39815757185555LL;
	volatile int16_t x695 = 10;
	uint32_t t162 = 433054U;

    t162 = (x693+((x694>x695)!=x696));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MIN;

    t163 = (x697+((x698>x699)!=x700));

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x701 = INT16_MIN;
	static uint32_t x704 = 2843U;

    t164 = (x701+((x702>x703)!=x704));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile uint8_t x706 = 21U;
	volatile uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 17941004U;
	volatile int32_t t165 = -248515;

    t165 = (x705+((x706>x707)!=x708));

    if (t165 != 65536) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x710 = 9;
	int16_t x711 = INT16_MIN;
	int8_t x712 = -1;
	int32_t t166 = 59809200;

    t166 = (x709+((x710>x711)!=x712));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = -4860;
	static int64_t x714 = INT64_MIN;
	static uint16_t x715 = 41U;
	int32_t t167 = -6557787;

    t167 = (x713+((x714>x715)!=x716));

    if (t167 != -4859) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x717 = INT64_MIN;
	int16_t x718 = -355;
	uint32_t x719 = 24U;
	volatile int64_t t168 = -15LL;

    t168 = (x717+((x718>x719)!=x720));

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x721 = INT16_MAX;
	int8_t x722 = INT8_MAX;
	int32_t x723 = -1;
	static int32_t t169 = -15573031;

    t169 = (x721+((x722>x723)!=x724));

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MIN;
	uint32_t x727 = 6840296U;
	static int8_t x728 = INT8_MIN;
	volatile int32_t t170 = -141;

    t170 = (x725+((x726>x727)!=x728));

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x729 = 141690U;
	int32_t x730 = INT32_MIN;
	int16_t x732 = INT16_MAX;
	static uint32_t t171 = 4U;

    t171 = (x729+((x730>x731)!=x732));

    if (t171 != 141691U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x733 = 3324;
	uint64_t x734 = UINT64_MAX;
	uint32_t x735 = UINT32_MAX;
	int32_t x736 = INT32_MIN;
	volatile int32_t t172 = -295334;

    t172 = (x733+((x734>x735)!=x736));

    if (t172 != 3325) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = -81;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MIN;
	static int32_t t173 = 557818680;

    t173 = (x737+((x738>x739)!=x740));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x742 = 2926557012493938385LLU;
	uint8_t x743 = 1U;
	uint64_t x744 = 557016716437192LLU;
	volatile int32_t t174 = -395;

    t174 = (x741+((x742>x743)!=x744));

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x745 = INT8_MIN;
	uint8_t x747 = 31U;
	volatile int8_t x748 = 20;

    t175 = (x745+((x746>x747)!=x748));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x749 = 274U;
	uint8_t x750 = 1U;
	int64_t x751 = INT64_MAX;
	int8_t x752 = 23;
	volatile int32_t t176 = -351;

    t176 = (x749+((x750>x751)!=x752));

    if (t176 != 275) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x753 = 3813242U;
	static int64_t x754 = INT64_MAX;
	int8_t x755 = INT8_MAX;
	volatile int32_t x756 = INT32_MIN;

    t177 = (x753+((x754>x755)!=x756));

    if (t177 != 3813243U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x757 = INT32_MIN;
	static uint16_t x758 = UINT16_MAX;
	int32_t x759 = INT32_MIN;
	uint64_t x760 = 1613516439065044LLU;

    t178 = (x757+((x758>x759)!=x760));

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x761 = -1LL;
	volatile int16_t x762 = -1;
	static int16_t x763 = -1;
	int32_t x764 = -1;
	static volatile int64_t t179 = 379540797726101957LL;

    t179 = (x761+((x762>x763)!=x764));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x765 = -1;
	static volatile int8_t x766 = INT8_MAX;
	volatile uint16_t x767 = 1294U;
	int64_t x768 = 64411717705512LL;
	volatile int32_t t180 = -436281106;

    t180 = (x765+((x766>x767)!=x768));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x771 = 1901510083477888LLU;
	static int64_t x772 = INT64_MIN;
	volatile uint64_t t181 = 80934693LLU;

    t181 = (x769+((x770>x771)!=x772));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint64_t x776 = 5342059869LLU;
	static int32_t t182 = -479387111;

    t182 = (x773+((x774>x775)!=x776));

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x777 = 13U;
	int16_t x778 = INT16_MIN;
	static int16_t x779 = 1860;
	static int32_t x780 = INT32_MAX;
	volatile int32_t t183 = 384;

    t183 = (x777+((x778>x779)!=x780));

    if (t183 != 14) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = UINT8_MAX;
	static volatile uint16_t x784 = UINT16_MAX;
	int32_t t184 = -63927283;

    t184 = (x781+((x782>x783)!=x784));

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x787 = -1LL;
	volatile uint32_t x788 = 14659U;
	volatile int64_t t185 = -1985006042LL;

    t185 = (x785+((x786>x787)!=x788));

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x789 = -1;
	static volatile int64_t x790 = -63LL;
	volatile int8_t x791 = INT8_MIN;
	static int32_t t186 = -234084630;

    t186 = (x789+((x790>x791)!=x792));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x793 = INT8_MIN;
	int32_t x794 = INT32_MIN;

    t187 = (x793+((x794>x795)!=x796));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x801 = -3;
	uint64_t x802 = 283398990320528630LLU;
	uint8_t x804 = 1U;
	int32_t t188 = 839831279;

    t188 = (x801+((x802>x803)!=x804));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x805 = INT16_MIN;
	int32_t x807 = -1;
	static int32_t x808 = INT32_MIN;
	int32_t t189 = 2847544;

    t189 = (x805+((x806>x807)!=x808));

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x809 = 254934742333326LLU;
	uint8_t x810 = UINT8_MAX;
	volatile int16_t x811 = -8917;
	static uint32_t x812 = 480696U;
	uint64_t t190 = 106925LLU;

    t190 = (x809+((x810>x811)!=x812));

    if (t190 != 254934742333327LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x813 = 30;
	volatile int64_t x814 = INT64_MIN;
	int16_t x815 = INT16_MIN;
	static int32_t t191 = 280213;

    t191 = (x813+((x814>x815)!=x816));

    if (t191 != 31) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x817 = INT32_MIN;
	int16_t x819 = -1;
	uint8_t x820 = UINT8_MAX;
	int32_t t192 = 981979880;

    t192 = (x817+((x818>x819)!=x820));

    if (t192 != -2147483647) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x822 = -1;
	volatile int64_t x823 = INT64_MIN;
	int16_t x824 = INT16_MIN;
	int32_t t193 = 0;

    t193 = (x821+((x822>x823)!=x824));

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = -9;
	int32_t x827 = 164;
	static int16_t x828 = -3650;

    t194 = (x825+((x826>x827)!=x828));

    if (t194 != -8) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x829 = 1U;
	volatile int8_t x830 = -32;
	int64_t x831 = INT64_MIN;
	int64_t x832 = INT64_MIN;

    t195 = (x829+((x830>x831)!=x832));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x833 = 105U;
	uint16_t x834 = UINT16_MAX;
	static uint16_t x835 = 601U;
	volatile int32_t t196 = 10146361;

    t196 = (x833+((x834>x835)!=x836));

    if (t196 != 106) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x837 = 7484U;
	static uint8_t x838 = UINT8_MAX;
	int16_t x839 = -12;
	int32_t x840 = 21409;
	volatile int32_t t197 = -43;

    t197 = (x837+((x838>x839)!=x840));

    if (t197 != 7485) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x841 = INT16_MIN;
	int64_t x842 = 3899338547053LL;
	static int16_t x843 = INT16_MAX;
	volatile uint32_t x844 = 1307871U;
	volatile int32_t t198 = 8472131;

    t198 = (x841+((x842>x843)!=x844));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x845 = 3LL;
	uint64_t x846 = 36587LLU;
	uint64_t x847 = 3639LLU;
	volatile int64_t t199 = -117656977311LL;

    t199 = (x845+((x846>x847)!=x848));

    if (t199 != 4LL) { NG(); } else { ; }
	
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

