
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

volatile int32_t t4 = 5;
static volatile int8_t x21 = INT8_MIN;
volatile int32_t x22 = INT32_MAX;
int32_t x24 = INT32_MIN;
volatile int32_t x27 = -1;
static int64_t x33 = INT64_MAX;
int32_t x34 = -98333;
volatile uint8_t x43 = 107U;
static volatile uint8_t x45 = UINT8_MAX;
uint32_t x47 = 666247U;
volatile int64_t x48 = -962837562323968LL;
static volatile int32_t t11 = 4345174;
int8_t x50 = INT8_MIN;
static int64_t x54 = INT64_MIN;
int32_t x56 = INT32_MIN;
int64_t x58 = INT64_MAX;
volatile int32_t t14 = -39;
volatile uint16_t x61 = UINT16_MAX;
int16_t x65 = -1;
int16_t x67 = 403;
static uint64_t x68 = UINT64_MAX;
int8_t x69 = INT8_MAX;
int64_t x70 = INT64_MIN;
int64_t x71 = -1LL;
volatile int32_t t17 = 1;
volatile int16_t x75 = INT16_MAX;
static volatile int32_t t18 = -384;
volatile int16_t x77 = 698;
int32_t t20 = 158150;
uint16_t x87 = UINT16_MAX;
volatile int16_t x88 = INT16_MIN;
static volatile int32_t x94 = 2067686;
int32_t t26 = 33198551;
volatile int32_t t27 = 103151849;
static int16_t x113 = -1;
int8_t x114 = INT8_MIN;
int32_t t31 = 1;
int8_t x131 = INT8_MIN;
int16_t x132 = -1;
static int32_t t32 = -6531301;
int8_t x133 = INT8_MIN;
static int8_t x134 = INT8_MAX;
uint8_t x136 = UINT8_MAX;
static uint64_t x137 = 271251228LLU;
int32_t x141 = 339623;
int8_t x142 = -1;
uint16_t x149 = UINT16_MAX;
static volatile int32_t t37 = 202166629;
int32_t x168 = -1007106;
static volatile int32_t t41 = 47926;
volatile int8_t x181 = -6;
uint16_t x191 = UINT16_MAX;
volatile int32_t t48 = 1;
volatile int32_t t49 = 9162;
uint32_t x212 = 531540629U;
uint64_t x214 = UINT64_MAX;
uint64_t x220 = UINT64_MAX;
static volatile int32_t x221 = INT32_MIN;
volatile int32_t t55 = -2034;
int32_t t57 = -413643142;
int16_t x234 = INT16_MIN;
static volatile int32_t x244 = INT32_MIN;
int64_t x249 = INT64_MAX;
uint32_t x255 = 9174743U;
volatile int16_t x259 = INT16_MAX;
int32_t t66 = 856723;
int64_t x277 = INT64_MIN;
int8_t x278 = -1;
int8_t x279 = INT8_MAX;
volatile uint32_t x281 = 9U;
uint32_t x288 = UINT32_MAX;
int8_t x292 = 6;
int64_t x295 = -1LL;
static int16_t x296 = -1;
volatile int8_t x297 = INT8_MAX;
int16_t x298 = INT16_MIN;
int64_t x301 = -492945682493573981LL;
static uint32_t x303 = 1696351809U;
volatile int8_t x307 = 12;
uint16_t x311 = UINT16_MAX;
int8_t x315 = INT8_MIN;
uint16_t x323 = UINT16_MAX;
int64_t x325 = -13321LL;
int8_t x327 = INT8_MAX;
uint64_t x331 = UINT64_MAX;
int8_t x335 = INT8_MIN;
int8_t x346 = -1;
int32_t x362 = INT32_MIN;
uint16_t x377 = UINT16_MAX;
volatile uint8_t x382 = UINT8_MAX;
int16_t x386 = -18;
static volatile int32_t t96 = 259646210;
static int32_t x394 = -557;
volatile int8_t x398 = INT8_MIN;
int64_t x411 = -1LL;
int16_t x417 = -1;
volatile uint16_t x419 = UINT16_MAX;
uint8_t x422 = 0U;
int64_t x427 = INT64_MAX;
uint32_t x430 = UINT32_MAX;
int32_t t107 = -789052370;
static int8_t x435 = 7;
uint64_t x437 = 6LLU;
int32_t t109 = -4629;
uint64_t x446 = 2145211099295489LLU;
static volatile uint64_t x447 = 460440689369LLU;
int32_t t113 = 689;
static int16_t x457 = 0;
uint32_t x460 = 67386U;
int16_t x461 = -1;
int64_t x463 = INT64_MIN;
volatile uint64_t x468 = 25896198117LLU;
int8_t x470 = INT8_MAX;
int32_t x472 = INT32_MIN;
volatile int32_t t118 = -22;
static int16_t x477 = 2;
volatile uint64_t x481 = UINT64_MAX;
static int32_t x500 = INT32_MAX;
uint64_t x501 = UINT64_MAX;
volatile uint64_t x513 = 166LLU;
uint8_t x517 = UINT8_MAX;
int32_t x518 = INT32_MAX;
static int8_t x519 = 0;
volatile int32_t t129 = -207;
int8_t x523 = -14;
int8_t x524 = -1;
uint8_t x534 = 0U;
int32_t x549 = INT32_MIN;
static int8_t x550 = INT8_MIN;
volatile int8_t x552 = 11;
int32_t t137 = 11889;
volatile uint64_t x556 = 9097775040312460957LLU;
volatile int32_t t138 = 39719;
int32_t t139 = 683524;
static volatile int32_t t140 = -223956;
static uint8_t x568 = UINT8_MAX;
int32_t t141 = 108;
int32_t x572 = 109444;
static volatile int32_t t142 = -342104;
int32_t t144 = -57658680;
volatile int32_t t146 = 21;
volatile int64_t x605 = -1LL;
uint8_t x606 = UINT8_MAX;
volatile uint16_t x607 = UINT16_MAX;
uint32_t x609 = 8721U;
volatile uint32_t x617 = 13820U;
volatile int16_t x621 = 122;
static int64_t x624 = -5013060784LL;
static volatile int32_t t155 = -10372;
int16_t x630 = INT16_MIN;
int64_t x631 = INT64_MIN;
int16_t x633 = INT16_MAX;
static uint32_t x637 = UINT32_MAX;
int16_t x641 = INT16_MIN;
int16_t x643 = INT16_MIN;
static volatile uint16_t x644 = UINT16_MAX;
int32_t x645 = INT32_MIN;
int16_t x646 = INT16_MAX;
volatile uint32_t x651 = 125084U;
volatile int64_t x657 = INT64_MAX;
uint8_t x659 = 12U;
int64_t x661 = -1LL;
static int32_t x662 = INT32_MIN;
static volatile uint64_t x663 = 38645407859879LLU;
uint8_t x684 = 114U;
int8_t x688 = INT8_MIN;
volatile uint16_t x698 = UINT16_MAX;
int16_t x703 = INT16_MIN;
volatile int32_t t175 = -457;
volatile int64_t x707 = -1LL;
static uint64_t x708 = 3927LLU;
volatile int32_t t176 = -7;
int8_t x712 = 0;
int32_t x714 = INT32_MIN;
int64_t x715 = 133305952576359LL;
uint16_t x717 = 111U;
volatile int32_t x721 = -1;
volatile int32_t t181 = 47993081;
uint32_t x732 = 59199U;
int32_t t182 = -2;
static uint32_t x737 = 50771U;
int8_t x741 = -1;
int16_t x747 = -1;
int8_t x763 = 10;
int64_t x765 = -1LL;
volatile uint32_t x767 = UINT32_MAX;
uint32_t x778 = 567U;
volatile int32_t t196 = 461433;
uint64_t x791 = 27256089567LLU;
int64_t x796 = -1LL;
volatile uint64_t x798 = 39735734928LLU;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint64_t x2 = 204LLU;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = 144U;
	static volatile int32_t t0 = 14980;

    t0 = (x1!=((x2<=x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 2U;
	static volatile int8_t x6 = INT8_MIN;
	uint8_t x7 = 6U;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 2834;

    t1 = (x5!=((x6<=x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int32_t x10 = 127604;
	int64_t x11 = -1LL;
	volatile uint64_t x12 = 154273674LLU;
	volatile int32_t t2 = 59110;

    t2 = (x9!=((x10<=x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = -1;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = INT8_MAX;
	static int32_t t3 = -15455928;

    t3 = (x13!=((x14<=x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	uint32_t x18 = 3413444U;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;

    t4 = (x17!=((x18<=x19)&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x23 = INT8_MAX;
	int32_t t5 = -17077814;

    t5 = (x21!=((x22<=x23)&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x25 = UINT64_MAX;
	uint16_t x26 = UINT16_MAX;
	int8_t x28 = -1;
	int32_t t6 = 106853;

    t6 = (x25!=((x26<=x27)&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static uint64_t x30 = 24LLU;
	volatile int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 0;

    t7 = (x29!=((x30<=x31)&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x35 = 745711933862LLU;
	int64_t x36 = 166050609497LL;
	volatile int32_t t8 = -106632;

    t8 = (x33!=((x34<=x35)&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 27U;
	uint32_t x38 = 499216U;
	int64_t x39 = 2496754795LL;
	int64_t x40 = -566LL;
	volatile int32_t t9 = -107197941;

    t9 = (x37!=((x38<=x39)&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint32_t x42 = UINT32_MAX;
	int8_t x44 = 1;
	volatile int32_t t10 = -13;

    t10 = (x41!=((x42<=x43)&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = 1807678U;

    t11 = (x45!=((x46<=x47)&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	uint64_t x51 = 247728LLU;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = 520582;

    t12 = (x49!=((x50<=x51)&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	static int32_t x55 = -7993;
	volatile int32_t t13 = 1;

    t13 = (x53!=((x54<=x55)&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 5199044710654LL;
	int8_t x59 = -1;
	int16_t x60 = 12138;

    t14 = (x57!=((x58<=x59)&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = 5569998;
	uint16_t x63 = 28U;
	volatile uint8_t x64 = UINT8_MAX;
	int32_t t15 = -5;

    t15 = (x61!=((x62<=x63)&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MAX;
	volatile int32_t t16 = -27174;

    t16 = (x65!=((x66<=x67)&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x72 = -1;

    t17 = (x69!=((x70<=x71)&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	int64_t x74 = INT64_MIN;
	int64_t x76 = 19245482833LL;

    t18 = (x73!=((x74<=x75)&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x78 = -4;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 271;

    t19 = (x77!=((x78<=x79)&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	uint16_t x82 = 3156U;
	volatile int8_t x83 = INT8_MAX;
	uint16_t x84 = UINT16_MAX;

    t20 = (x81!=((x82<=x83)&x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 21U;
	static int32_t t21 = 882264426;

    t21 = (x85!=((x86<=x87)&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MAX;
	volatile int8_t x90 = -1;
	int16_t x91 = 710;
	uint16_t x92 = 3U;
	int32_t t22 = -218002;

    t22 = (x89!=((x90<=x91)&x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = UINT8_MAX;
	static uint32_t x95 = 1U;
	int32_t x96 = -520980289;
	static int32_t t23 = -9039;

    t23 = (x93!=((x94<=x95)&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 23247U;
	int8_t x98 = INT8_MAX;
	int8_t x99 = 5;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = 5735;

    t24 = (x97!=((x98<=x99)&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	volatile int64_t x102 = 41LL;
	int32_t x103 = -1;
	static uint16_t x104 = UINT16_MAX;
	int32_t t25 = 598557;

    t25 = (x101!=((x102<=x103)&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = -11LL;
	volatile int64_t x107 = INT64_MIN;
	volatile int64_t x108 = INT64_MIN;

    t26 = (x105!=((x106<=x107)&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	uint64_t x110 = 1091LLU;
	static int32_t x111 = INT32_MIN;
	uint16_t x112 = 45U;

    t27 = (x109!=((x110<=x111)&x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x115 = UINT32_MAX;
	int8_t x116 = 0;
	volatile int32_t t28 = 133095;

    t28 = (x113!=((x114<=x115)&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	uint64_t x118 = UINT64_MAX;
	uint16_t x119 = 51U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = 291476;

    t29 = (x117!=((x118<=x119)&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 12U;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -2773950;

    t30 = (x121!=((x122<=x123)&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -1LL;
	int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MAX;
	int64_t x128 = 437364345673384839LL;

    t31 = (x125!=((x126<=x127)&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int64_t x130 = INT64_MAX;

    t32 = (x129!=((x130<=x131)&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x135 = 1;
	int32_t t33 = -1567307;

    t33 = (x133!=((x134<=x135)&x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	uint16_t x140 = 4U;
	int32_t t34 = 2563179;

    t34 = (x137!=((x138<=x139)&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x143 = -1271;
	static int32_t x144 = -1;
	int32_t t35 = -2;

    t35 = (x141!=((x142<=x143)&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 1522749094LLU;
	static int32_t x146 = INT32_MIN;
	uint16_t x147 = 6647U;
	static uint64_t x148 = UINT64_MAX;
	int32_t t36 = 1;

    t36 = (x145!=((x146<=x147)&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MIN;
	static int8_t x152 = 0;

    t37 = (x149!=((x150<=x151)&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int32_t x154 = -2454016;
	volatile uint16_t x155 = 2U;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = 117;

    t38 = (x153!=((x154<=x155)&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	volatile int32_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = 0LL;
	static int32_t t39 = 236;

    t39 = (x157!=((x158<=x159)&x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = 0;
	volatile uint64_t x162 = 222498939LLU;
	uint32_t x163 = 3020U;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 34;

    t40 = (x161!=((x162<=x163)&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = 81633208LL;
	static int8_t x166 = 6;
	uint64_t x167 = 253164319970LLU;

    t41 = (x165!=((x166<=x167)&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = -655LL;
	int64_t x170 = -1LL;
	uint16_t x171 = 14533U;
	int32_t x172 = INT32_MAX;
	volatile int32_t t42 = -50;

    t42 = (x169!=((x170<=x171)&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	int32_t x176 = 3;
	int32_t t43 = -98960460;

    t43 = (x173!=((x174<=x175)&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 869;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -8LL;
	uint32_t x180 = 5U;
	volatile int32_t t44 = 0;

    t44 = (x177!=((x178<=x179)&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MAX;
	int8_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 0;

    t45 = (x181!=((x182<=x183)&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = 1;
	uint16_t x187 = 7842U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -2;

    t46 = (x185!=((x186<=x187)&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	int64_t x190 = -1108012545007LL;
	volatile uint8_t x192 = 3U;
	int32_t t47 = 11;

    t47 = (x189!=((x190<=x191)&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 115U;
	int32_t x194 = -232;
	uint64_t x195 = 231059582LLU;
	int16_t x196 = -157;

    t48 = (x193!=((x194<=x195)&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = 8U;
	static int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;

    t49 = (x197!=((x198<=x199)&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x201 = UINT8_MAX;
	volatile int8_t x202 = INT8_MIN;
	static int64_t x203 = INT64_MAX;
	static int8_t x204 = INT8_MAX;
	int32_t t50 = -11;

    t50 = (x201!=((x202<=x203)&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	volatile int8_t x206 = 0;
	int64_t x207 = -11126078988939729LL;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -659448;

    t51 = (x205!=((x206<=x207)&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 98447230050625LLU;
	uint32_t x210 = 957912349U;
	static int8_t x211 = -1;
	static int32_t t52 = -17;

    t52 = (x209!=((x210<=x211)&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = 437510064167LL;
	int32_t t53 = -89;

    t53 = (x213!=((x214<=x215)&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = -1LL;
	volatile int32_t x218 = INT32_MIN;
	uint16_t x219 = UINT16_MAX;
	int32_t t54 = -925484790;

    t54 = (x217!=((x218<=x219)&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = 977U;
	int16_t x223 = -1;
	uint16_t x224 = UINT16_MAX;

    t55 = (x221!=((x222<=x223)&x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = 5U;
	int32_t t56 = -1;

    t56 = (x225!=((x226<=x227)&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MAX;
	uint8_t x230 = UINT8_MAX;
	volatile int16_t x231 = -1;
	int8_t x232 = -1;

    t57 = (x229!=((x230<=x231)&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	volatile uint8_t x235 = 0U;
	uint32_t x236 = 3388778U;
	int32_t t58 = -135856;

    t58 = (x233!=((x234<=x235)&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	static int16_t x239 = INT16_MIN;
	uint32_t x240 = UINT32_MAX;
	int32_t t59 = -814324;

    t59 = (x237!=((x238<=x239)&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 10U;
	uint32_t x242 = 1835U;
	static int16_t x243 = 13;
	static volatile int32_t t60 = -263824;

    t60 = (x241!=((x242<=x243)&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	uint32_t x246 = 0U;
	uint16_t x247 = UINT16_MAX;
	volatile uint32_t x248 = 574U;
	int32_t t61 = 0;

    t61 = (x245!=((x246<=x247)&x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x250 = -7;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = -1;
	volatile int32_t t62 = 575918;

    t62 = (x249!=((x250<=x251)&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 35879917LLU;
	volatile int8_t x254 = -1;
	uint8_t x256 = 16U;
	int32_t t63 = 837937;

    t63 = (x253!=((x254<=x255)&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -1572;
	int64_t x258 = INT64_MIN;
	uint8_t x260 = 30U;
	int32_t t64 = 0;

    t64 = (x257!=((x258<=x259)&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 12U;
	static int64_t x262 = 6748610LL;
	int64_t x263 = 469655LL;
	int16_t x264 = INT16_MAX;
	int32_t t65 = 13235;

    t65 = (x261!=((x262<=x263)&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -35574764;
	volatile int16_t x266 = -77;
	int64_t x267 = 484LL;
	int16_t x268 = INT16_MAX;

    t66 = (x265!=((x266<=x267)&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = 44;
	static volatile int8_t x270 = INT8_MAX;
	volatile uint32_t x271 = 96U;
	volatile uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = 1;

    t67 = (x269!=((x270<=x271)&x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MAX;
	int32_t x274 = 32743;
	int16_t x275 = -796;
	int32_t x276 = -1;
	volatile int32_t t68 = -249883;

    t68 = (x273!=((x274<=x275)&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x280 = 63U;
	volatile int32_t t69 = -22521;

    t69 = (x277!=((x278<=x279)&x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x282 = 459541082LLU;
	int32_t x283 = INT32_MIN;
	int8_t x284 = -1;
	volatile int32_t t70 = 705647996;

    t70 = (x281!=((x282<=x283)&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = -3;
	int64_t x286 = INT64_MAX;
	static volatile int64_t x287 = INT64_MAX;
	int32_t t71 = -216253;

    t71 = (x285!=((x286<=x287)&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -3;
	static uint16_t x290 = 623U;
	static int16_t x291 = 1;
	int32_t t72 = 7824028;

    t72 = (x289!=((x290<=x291)&x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = -1LL;
	uint16_t x294 = 1U;
	volatile int32_t t73 = -9785;

    t73 = (x293!=((x294<=x295)&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x299 = 12LL;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -121741734;

    t74 = (x297!=((x298<=x299)&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x302 = UINT32_MAX;
	static uint64_t x304 = 6511392047857001LLU;
	static int32_t t75 = -83873;

    t75 = (x301!=((x302<=x303)&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -212543;
	int8_t x306 = -1;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -425479;

    t76 = (x305!=((x306<=x307)&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 1636098319993LLU;
	volatile int64_t x310 = -1LL;
	static int16_t x312 = 86;
	int32_t t77 = 32778982;

    t77 = (x309!=((x310<=x311)&x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MAX;
	int16_t x314 = -4;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 5100;

    t78 = (x313!=((x314<=x315)&x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = 11506LLU;
	int64_t x318 = 570772079279274611LL;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 0U;
	static int32_t t79 = -910179339;

    t79 = (x317!=((x318<=x319)&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MAX;
	uint64_t x322 = UINT64_MAX;
	static uint32_t x324 = 2397U;
	volatile int32_t t80 = -33441490;

    t80 = (x321!=((x322<=x323)&x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x326 = 6U;
	static uint8_t x328 = 5U;
	volatile int32_t t81 = 4;

    t81 = (x325!=((x326<=x327)&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = 7;
	volatile int8_t x330 = -27;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = -159;

    t82 = (x329!=((x330<=x331)&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x333 = 20U;
	uint16_t x334 = 24233U;
	static int32_t x336 = INT32_MIN;
	int32_t t83 = -21955;

    t83 = (x333!=((x334<=x335)&x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MIN;
	static int8_t x338 = INT8_MIN;
	uint8_t x339 = 102U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -2;

    t84 = (x337!=((x338<=x339)&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 6548U;
	int32_t x342 = 22;
	volatile int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -48;

    t85 = (x341!=((x342<=x343)&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x345 = INT32_MIN;
	volatile int16_t x347 = -1;
	uint8_t x348 = 4U;
	static int32_t t86 = -43033220;

    t86 = (x345!=((x346<=x347)&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 0;
	int64_t x350 = -1LL;
	int16_t x351 = -1;
	static volatile uint64_t x352 = UINT64_MAX;
	static volatile int32_t t87 = -70202;

    t87 = (x349!=((x350<=x351)&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 11;
	int8_t x354 = INT8_MAX;
	uint32_t x355 = 0U;
	static volatile int16_t x356 = -1;
	volatile int32_t t88 = -44;

    t88 = (x353!=((x354<=x355)&x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	static int32_t x359 = INT32_MIN;
	volatile int32_t x360 = -1;
	static volatile int32_t t89 = 50589;

    t89 = (x357!=((x358<=x359)&x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -1;
	volatile uint8_t x363 = 0U;
	volatile uint64_t x364 = 451LLU;
	volatile int32_t t90 = 4;

    t90 = (x361!=((x362<=x363)&x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 1049;
	static int8_t x366 = INT8_MIN;
	volatile int64_t x367 = INT64_MAX;
	int8_t x368 = -1;
	volatile int32_t t91 = -482;

    t91 = (x365!=((x366<=x367)&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int32_t x370 = 65256341;
	int32_t x371 = 2938691;
	static int8_t x372 = INT8_MIN;
	int32_t t92 = -5828297;

    t92 = (x369!=((x370<=x371)&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MIN;
	volatile uint32_t x374 = 59137U;
	uint8_t x375 = 1U;
	static volatile int32_t x376 = INT32_MIN;
	int32_t t93 = -2;

    t93 = (x373!=((x374<=x375)&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MAX;
	static int16_t x379 = INT16_MIN;
	static int16_t x380 = 54;
	int32_t t94 = -476;

    t94 = (x377!=((x378<=x379)&x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	int16_t x383 = -1156;
	static int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 14357;

    t95 = (x381!=((x382<=x383)&x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 5U;
	static int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = 102292U;

    t96 = (x385!=((x386<=x387)&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x389 = -1LL;
	uint64_t x390 = 35995044LLU;
	volatile uint8_t x391 = 1U;
	static int64_t x392 = INT64_MIN;
	volatile int32_t t97 = -1718;

    t97 = (x389!=((x390<=x391)&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 95;

    t98 = (x393!=((x394<=x395)&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -1;
	static volatile int32_t t99 = 1;

    t99 = (x397!=((x398<=x399)&x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	static int16_t x404 = 2;
	int32_t t100 = -4569498;

    t100 = (x401!=((x402<=x403)&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = INT32_MIN;
	static int64_t x406 = INT64_MIN;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 29U;
	volatile int32_t t101 = 5066;

    t101 = (x405!=((x406<=x407)&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	uint8_t x410 = 0U;
	uint16_t x412 = 3697U;
	volatile int32_t t102 = 36778;

    t102 = (x409!=((x410<=x411)&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 19U;
	uint32_t x414 = 44043U;
	int32_t x415 = -1;
	int16_t x416 = 7437;
	volatile int32_t t103 = -1;

    t103 = (x413!=((x414<=x415)&x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x418 = -22;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -521277302;

    t104 = (x417!=((x418<=x419)&x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	static volatile int8_t x423 = INT8_MAX;
	static volatile int16_t x424 = INT16_MIN;
	int32_t t105 = -231;

    t105 = (x421!=((x422<=x423)&x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int64_t x426 = -1187LL;
	int8_t x428 = INT8_MIN;
	int32_t t106 = 1662772;

    t106 = (x425!=((x426<=x427)&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	int32_t x431 = -1;
	volatile uint64_t x432 = 245088247079316LLU;

    t107 = (x429!=((x430<=x431)&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	int32_t x436 = INT32_MIN;
	int32_t t108 = 10363;

    t108 = (x433!=((x434<=x435)&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x438 = 49355;
	static volatile uint32_t x439 = 814U;
	int16_t x440 = 12;

    t109 = (x437!=((x438<=x439)&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 13U;
	uint16_t x442 = UINT16_MAX;
	int64_t x443 = 4085021LL;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t110 = 9587375;

    t110 = (x441!=((x442<=x443)&x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	uint64_t x448 = UINT64_MAX;
	static int32_t t111 = 328341578;

    t111 = (x445!=((x446<=x447)&x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = -636486095292LL;
	int8_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	static uint8_t x452 = 4U;
	volatile int32_t t112 = -7068706;

    t112 = (x449!=((x450<=x451)&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 973259U;
	volatile int8_t x454 = -1;
	int16_t x455 = 979;
	int32_t x456 = -6;

    t113 = (x453!=((x454<=x455)&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x458 = UINT64_MAX;
	static uint32_t x459 = 2733439U;
	volatile int32_t t114 = -2935405;

    t114 = (x457!=((x458<=x459)&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = -1LL;
	volatile int8_t x464 = 44;
	int32_t t115 = 5576;

    t115 = (x461!=((x462<=x463)&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MAX;
	int32_t x466 = -11242498;
	uint8_t x467 = 1U;
	int32_t t116 = -2010;

    t116 = (x465!=((x466<=x467)&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	volatile uint32_t x471 = 32U;
	int32_t t117 = -12496722;

    t117 = (x469!=((x470<=x471)&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	int32_t x474 = INT32_MIN;
	static int64_t x475 = INT64_MIN;
	static uint64_t x476 = 8LLU;

    t118 = (x473!=((x474<=x475)&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x478 = -52;
	volatile int16_t x479 = INT16_MIN;
	uint32_t x480 = 0U;
	int32_t t119 = -146703;

    t119 = (x477!=((x478<=x479)&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MAX;
	volatile int32_t x483 = -1;
	int32_t x484 = INT32_MAX;
	volatile int32_t t120 = 24705;

    t120 = (x481!=((x482<=x483)&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 3538U;
	uint16_t x486 = UINT16_MAX;
	volatile uint16_t x487 = UINT16_MAX;
	int32_t x488 = INT32_MIN;
	int32_t t121 = 966655834;

    t121 = (x485!=((x486<=x487)&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -223194189445LL;
	int16_t x490 = -1376;
	int8_t x491 = INT8_MAX;
	int32_t x492 = -32779818;
	int32_t t122 = 62127924;

    t122 = (x489!=((x490<=x491)&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	uint8_t x494 = UINT8_MAX;
	int16_t x495 = INT16_MIN;
	int64_t x496 = -1LL;
	volatile int32_t t123 = 4;

    t123 = (x493!=((x494<=x495)&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 32;
	static uint32_t x498 = 330083U;
	uint8_t x499 = UINT8_MAX;
	volatile int32_t t124 = -15534606;

    t124 = (x497!=((x498<=x499)&x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 349926142LLU;
	int16_t x503 = INT16_MAX;
	static int16_t x504 = -6;
	volatile int32_t t125 = 57;

    t125 = (x501!=((x502<=x503)&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	volatile int64_t x506 = -1LL;
	uint8_t x507 = 2U;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 287;

    t126 = (x505!=((x506<=x507)&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	static int32_t x510 = -101;
	int16_t x511 = INT16_MIN;
	uint32_t x512 = 44U;
	int32_t t127 = 640543;

    t127 = (x509!=((x510<=x511)&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x514 = -93;
	int16_t x515 = INT16_MAX;
	uint8_t x516 = 81U;
	int32_t t128 = -18;

    t128 = (x513!=((x514<=x515)&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x520 = UINT8_MAX;

    t129 = (x517!=((x518<=x519)&x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	int16_t x522 = -1;
	static int32_t t130 = -63450482;

    t130 = (x521!=((x522<=x523)&x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = UINT32_MAX;
	int32_t x526 = -2069623;
	int8_t x527 = -1;
	volatile int16_t x528 = 89;
	volatile int32_t t131 = -205688;

    t131 = (x525!=((x526<=x527)&x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -8273;
	int16_t x530 = -1;
	uint8_t x531 = 29U;
	uint64_t x532 = UINT64_MAX;
	int32_t t132 = 187;

    t132 = (x529!=((x530<=x531)&x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = 3;
	int64_t x535 = -1LL;
	volatile uint32_t x536 = UINT32_MAX;
	int32_t t133 = 96569;

    t133 = (x533!=((x534<=x535)&x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = -1;
	int32_t x538 = 26;
	volatile int32_t x539 = 665564469;
	static volatile int16_t x540 = INT16_MIN;
	volatile int32_t t134 = -187959;

    t134 = (x537!=((x538<=x539)&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = -1;
	static uint8_t x542 = UINT8_MAX;
	volatile int64_t x543 = 2005LL;
	volatile int16_t x544 = INT16_MAX;
	int32_t t135 = 25797;

    t135 = (x541!=((x542<=x543)&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	uint8_t x546 = 4U;
	uint32_t x547 = UINT32_MAX;
	uint8_t x548 = 25U;
	volatile int32_t t136 = 56355789;

    t136 = (x545!=((x546<=x547)&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x551 = INT16_MIN;

    t137 = (x549!=((x550<=x551)&x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MIN;
	int64_t x555 = -1LL;

    t138 = (x553!=((x554<=x555)&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 114592058275LLU;
	int16_t x558 = -1;
	int16_t x559 = INT16_MAX;
	int32_t x560 = -1;

    t139 = (x557!=((x558<=x559)&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	uint64_t x562 = UINT64_MAX;
	uint16_t x563 = 3U;
	int32_t x564 = INT32_MAX;

    t140 = (x561!=((x562<=x563)&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 6U;
	uint64_t x566 = 271812818LLU;
	uint16_t x567 = 3662U;

    t141 = (x565!=((x566<=x567)&x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 363209273574221135LL;
	static int32_t x570 = -43;
	uint32_t x571 = UINT32_MAX;

    t142 = (x569!=((x570<=x571)&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 442837075277834997LL;
	int32_t x574 = 6;
	volatile uint8_t x575 = 1U;
	uint32_t x576 = 81412U;
	volatile int32_t t143 = -414929942;

    t143 = (x573!=((x574<=x575)&x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	int64_t x578 = -377LL;
	uint64_t x579 = UINT64_MAX;
	int8_t x580 = -1;

    t144 = (x577!=((x578<=x579)&x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int64_t x582 = -1LL;
	int16_t x583 = -1;
	static int64_t x584 = INT64_MAX;
	volatile int32_t t145 = -8;

    t145 = (x581!=((x582<=x583)&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 13;
	static int64_t x586 = 309592115381947LL;
	uint16_t x587 = 0U;
	volatile int64_t x588 = INT64_MIN;

    t146 = (x585!=((x586<=x587)&x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	static int32_t x590 = INT32_MIN;
	volatile int8_t x591 = 3;
	int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -1310;

    t147 = (x589!=((x590<=x591)&x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -59;
	int8_t x594 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	int8_t x596 = -1;
	int32_t t148 = 372563;

    t148 = (x593!=((x594<=x595)&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x597 = UINT64_MAX;
	int16_t x598 = -1;
	int64_t x599 = 132240116912LL;
	int16_t x600 = INT16_MAX;
	volatile int32_t t149 = -57246001;

    t149 = (x597!=((x598<=x599)&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 28478U;
	uint64_t x602 = UINT64_MAX;
	uint32_t x603 = 1315U;
	volatile int32_t x604 = INT32_MAX;
	static int32_t t150 = 4;

    t150 = (x601!=((x602<=x603)&x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x608 = 0;
	static volatile int32_t t151 = 314693;

    t151 = (x605!=((x606<=x607)&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = -1;
	int16_t x611 = 194;
	int64_t x612 = -164813015476LL;
	volatile int32_t t152 = -35565;

    t152 = (x609!=((x610<=x611)&x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = -1;
	volatile uint8_t x614 = 0U;
	uint16_t x615 = 82U;
	int32_t x616 = INT32_MIN;
	static int32_t t153 = -93;

    t153 = (x613!=((x614<=x615)&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = -1;
	int64_t x619 = INT64_MAX;
	uint16_t x620 = 3994U;
	static volatile int32_t t154 = 188400;

    t154 = (x617!=((x618<=x619)&x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x622 = INT16_MIN;
	uint16_t x623 = 2U;

    t155 = (x621!=((x622<=x623)&x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 0;
	int32_t x626 = -1;
	int32_t x627 = INT32_MIN;
	static int8_t x628 = 0;
	volatile int32_t t156 = -965663844;

    t156 = (x625!=((x626<=x627)&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = 131;
	volatile int32_t x632 = 1194;
	int32_t t157 = 3449;

    t157 = (x629!=((x630<=x631)&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = -198LL;
	int64_t x635 = -1LL;
	uint32_t x636 = 594U;
	volatile int32_t t158 = -32743235;

    t158 = (x633!=((x634<=x635)&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x638 = -1;
	uint64_t x639 = 121318LLU;
	int64_t x640 = -761599277453LL;
	static volatile int32_t t159 = 15731;

    t159 = (x637!=((x638<=x639)&x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x642 = 16LLU;
	int32_t t160 = 12369;

    t160 = (x641!=((x642<=x643)&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x647 = 2407U;
	uint32_t x648 = 7906U;
	volatile int32_t t161 = 1275656;

    t161 = (x645!=((x646<=x647)&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	uint8_t x650 = UINT8_MAX;
	volatile int16_t x652 = INT16_MIN;
	int32_t t162 = 602;

    t162 = (x649!=((x650<=x651)&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 1;
	int32_t x654 = -65;
	int64_t x655 = 6066502975137LL;
	int64_t x656 = INT64_MAX;
	static int32_t t163 = -710239417;

    t163 = (x653!=((x654<=x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x658 = INT16_MIN;
	volatile int32_t x660 = 7428;
	volatile int32_t t164 = -3695;

    t164 = (x657!=((x658<=x659)&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x664 = UINT8_MAX;
	volatile int32_t t165 = 1069859841;

    t165 = (x661!=((x662<=x663)&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	uint16_t x666 = 181U;
	int16_t x667 = INT16_MIN;
	int32_t x668 = INT32_MIN;
	static int32_t t166 = 9;

    t166 = (x665!=((x666<=x667)&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x669 = UINT64_MAX;
	int32_t x670 = 23404;
	int16_t x671 = INT16_MAX;
	static int64_t x672 = -69500308673183255LL;
	int32_t t167 = 2584228;

    t167 = (x669!=((x670<=x671)&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MAX;
	static int64_t x674 = -1LL;
	int32_t x675 = INT32_MAX;
	static volatile int64_t x676 = INT64_MIN;
	int32_t t168 = 5756503;

    t168 = (x673!=((x674<=x675)&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x678 = UINT16_MAX;
	volatile int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MAX;
	int32_t t169 = 76;

    t169 = (x677!=((x678<=x679)&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int16_t x682 = INT16_MIN;
	volatile uint64_t x683 = UINT64_MAX;
	int32_t t170 = -83760059;

    t170 = (x681!=((x682<=x683)&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	static int8_t x686 = INT8_MIN;
	volatile uint16_t x687 = 2130U;
	static int32_t t171 = -8875;

    t171 = (x685!=((x686<=x687)&x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x689 = 8179696823LLU;
	int8_t x690 = INT8_MAX;
	uint64_t x691 = UINT64_MAX;
	volatile uint8_t x692 = UINT8_MAX;
	volatile int32_t t172 = 352633;

    t172 = (x689!=((x690<=x691)&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = -705;
	int16_t x694 = INT16_MIN;
	static int32_t x695 = INT32_MIN;
	volatile int16_t x696 = INT16_MIN;
	int32_t t173 = -6;

    t173 = (x693!=((x694<=x695)&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = -1;
	volatile int64_t x699 = INT64_MIN;
	uint8_t x700 = 31U;
	int32_t t174 = -120622772;

    t174 = (x697!=((x698<=x699)&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	int16_t x702 = INT16_MIN;
	volatile uint8_t x704 = 82U;

    t175 = (x701!=((x702<=x703)&x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = 16U;
	uint64_t x706 = 5444990850975LLU;

    t176 = (x705!=((x706<=x707)&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = -267356063;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = 14U;
	volatile int32_t t177 = 6;

    t177 = (x709!=((x710<=x711)&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t178 = -126;

    t178 = (x713!=((x714<=x715)&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x718 = 15U;
	volatile int32_t x719 = -64260400;
	uint32_t x720 = 168U;
	int32_t t179 = -9814;

    t179 = (x717!=((x718<=x719)&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = 865;
	uint8_t x723 = 44U;
	int64_t x724 = INT64_MIN;
	int32_t t180 = -2558;

    t180 = (x721!=((x722<=x723)&x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x725 = 6U;
	int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	int16_t x728 = 28;

    t181 = (x725!=((x726<=x727)&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 0;
	int8_t x730 = -1;
	int64_t x731 = -6994621785886083LL;

    t182 = (x729!=((x730<=x731)&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	static int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MIN;
	volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 9171218;

    t183 = (x733!=((x734<=x735)&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x738 = UINT16_MAX;
	int32_t x739 = -951;
	int8_t x740 = 0;
	static volatile int32_t t184 = 42429469;

    t184 = (x737!=((x738<=x739)&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x742 = 1940;
	int16_t x743 = 260;
	int32_t x744 = INT32_MAX;
	int32_t t185 = -4100;

    t185 = (x741!=((x742<=x743)&x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint32_t x746 = 1U;
	int16_t x748 = -1;
	static int32_t t186 = 5;

    t186 = (x745!=((x746<=x747)&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	volatile int16_t x750 = INT16_MIN;
	int32_t x751 = -5018;
	int32_t x752 = -1;
	int32_t t187 = -53942702;

    t187 = (x749!=((x750<=x751)&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = -1;
	uint8_t x754 = UINT8_MAX;
	uint16_t x755 = 2187U;
	int64_t x756 = INT64_MIN;
	static volatile int32_t t188 = -31208;

    t188 = (x753!=((x754<=x755)&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MAX;
	uint64_t x758 = UINT64_MAX;
	static uint64_t x759 = 2LLU;
	int8_t x760 = 4;
	volatile int32_t t189 = 8311;

    t189 = (x757!=((x758<=x759)&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 1U;
	int8_t x762 = INT8_MIN;
	int16_t x764 = INT16_MIN;
	volatile int32_t t190 = 235;

    t190 = (x761!=((x762<=x763)&x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x766 = 180367134U;
	static volatile uint16_t x768 = 195U;
	volatile int32_t t191 = -2;

    t191 = (x765!=((x766<=x767)&x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x769 = UINT32_MAX;
	volatile uint64_t x770 = UINT64_MAX;
	uint64_t x771 = 133583816214LLU;
	int64_t x772 = -2207433046672326448LL;
	volatile int32_t t192 = -16078472;

    t192 = (x769!=((x770<=x771)&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	int8_t x774 = -1;
	uint64_t x775 = UINT64_MAX;
	int8_t x776 = -12;
	volatile int32_t t193 = 11;

    t193 = (x773!=((x774<=x775)&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 3728319495092049830LLU;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 0;

    t194 = (x777!=((x778<=x779)&x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	static int16_t x782 = INT16_MAX;
	int16_t x783 = -1;
	int8_t x784 = 1;
	static volatile int32_t t195 = -58409;

    t195 = (x781!=((x782<=x783)&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	int16_t x786 = 0;
	int32_t x787 = INT32_MIN;
	static int64_t x788 = 6608813LL;

    t196 = (x785!=((x786<=x787)&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MIN;
	int16_t x790 = -1;
	int32_t x792 = INT32_MIN;
	int32_t t197 = 6;

    t197 = (x789!=((x790<=x791)&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MIN;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = INT8_MIN;
	volatile int32_t t198 = 7420875;

    t198 = (x793!=((x794<=x795)&x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	static volatile uint8_t x799 = 9U;
	volatile int16_t x800 = INT16_MIN;
	static int32_t t199 = 0;

    t199 = (x797!=((x798<=x799)&x800));

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

