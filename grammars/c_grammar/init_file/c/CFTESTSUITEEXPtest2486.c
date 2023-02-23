
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

volatile int32_t x1 = -5;
int32_t x2 = INT32_MIN;
uint64_t x3 = 37568075LLU;
volatile int32_t t0 = -332130;
uint8_t x7 = UINT8_MAX;
int64_t x8 = INT64_MIN;
int32_t t3 = -3852859;
int8_t x19 = INT8_MIN;
static int16_t x20 = 931;
int16_t x28 = INT16_MIN;
uint64_t x30 = 13225LLU;
static int32_t t7 = 3691646;
uint16_t x40 = 4U;
int32_t x53 = -10;
int16_t x54 = 12;
static int64_t x59 = INT64_MIN;
int32_t t14 = -160432;
static int8_t x71 = INT8_MIN;
int16_t x76 = INT16_MIN;
volatile int16_t x77 = INT16_MIN;
volatile uint32_t x78 = UINT32_MAX;
uint32_t x82 = UINT32_MAX;
int32_t x88 = -1;
int64_t x90 = -23372LL;
int8_t x92 = INT8_MAX;
volatile int8_t x94 = INT8_MAX;
static volatile int32_t t24 = 7466;
static uint64_t x101 = 38493136LLU;
static uint8_t x103 = 13U;
int64_t x104 = -1LL;
volatile int32_t t25 = 20615327;
int8_t x108 = 0;
uint16_t x110 = 5440U;
int16_t x115 = INT16_MIN;
static int32_t x120 = 15095;
int32_t t29 = -193443;
static volatile int32_t t31 = 5;
int8_t x129 = -60;
int16_t x134 = INT16_MIN;
volatile int32_t t33 = -1756;
uint16_t x146 = 27543U;
volatile int16_t x165 = -29;
static volatile int32_t t41 = 40;
uint64_t x170 = UINT64_MAX;
int32_t x173 = INT32_MIN;
uint8_t x175 = 45U;
int64_t x178 = INT64_MIN;
int64_t x183 = -1LL;
volatile int32_t t45 = 1881802;
volatile int32_t t46 = 351561841;
int64_t x189 = INT64_MIN;
uint32_t x192 = 380410U;
int64_t x193 = -57574LL;
volatile int8_t x207 = INT8_MIN;
int16_t x209 = -10;
volatile uint64_t x210 = 56654062474370LLU;
volatile int32_t t52 = -480981336;
int32_t t54 = 673981;
static int32_t x225 = INT32_MAX;
static int16_t x226 = 673;
volatile int16_t x229 = INT16_MAX;
static int64_t x236 = -1LL;
int64_t x240 = INT64_MIN;
int32_t x243 = 2;
int32_t x244 = INT32_MIN;
uint64_t x250 = 136504822702122168LLU;
static volatile uint32_t x254 = UINT32_MAX;
volatile int8_t x260 = INT8_MIN;
int32_t t65 = -1;
int64_t x266 = INT64_MAX;
static volatile int32_t t67 = -212943;
static volatile uint8_t x274 = 49U;
int16_t x282 = INT16_MIN;
uint32_t x288 = 138U;
int8_t x293 = INT8_MIN;
static uint64_t x294 = UINT64_MAX;
int16_t x300 = -5739;
int32_t t74 = -71999029;
int8_t x319 = -1;
volatile int64_t x321 = -4365878458019LL;
static int8_t x323 = 0;
volatile int8_t x325 = 5;
uint8_t x329 = 1U;
int16_t x330 = INT16_MAX;
int8_t x331 = INT8_MIN;
static int16_t x332 = 255;
int32_t t84 = 1;
uint8_t x342 = 17U;
int32_t x347 = INT32_MAX;
static volatile int32_t t93 = -784500;
int32_t t94 = 0;
int32_t x395 = 472225738;
volatile int32_t t99 = -235774;
int32_t x402 = INT32_MAX;
uint64_t x405 = 9581532705729LLU;
int64_t x408 = -1132282033232736LL;
volatile uint8_t x426 = 11U;
static uint64_t x427 = UINT64_MAX;
int8_t x431 = -51;
uint32_t x436 = 39704806U;
int32_t x437 = INT32_MIN;
int32_t x438 = -14400596;
static volatile int32_t x440 = -3;
volatile int16_t x443 = -11743;
int8_t x444 = -18;
int32_t x446 = INT32_MIN;
volatile uint32_t x450 = UINT32_MAX;
int32_t x451 = INT32_MIN;
int32_t t112 = -449994;
static int8_t x456 = INT8_MAX;
static uint8_t x462 = UINT8_MAX;
int8_t x464 = INT8_MIN;
int8_t x465 = INT8_MIN;
uint64_t x466 = 9LLU;
static uint8_t x472 = UINT8_MAX;
int8_t x473 = -1;
static int8_t x477 = INT8_MAX;
volatile int32_t t119 = 27;
uint8_t x492 = 2U;
uint8_t x496 = 7U;
int32_t t123 = -325586407;
static int32_t x508 = -1;
int32_t x509 = -1;
volatile int8_t x515 = -49;
int8_t x521 = INT8_MAX;
static int16_t x522 = -18;
int32_t t130 = 0;
volatile int32_t t131 = 114042187;
int32_t x529 = 1012356651;
int32_t t132 = 12815;
uint16_t x533 = 0U;
static int64_t x537 = 117LL;
uint8_t x568 = UINT8_MAX;
int32_t t141 = -14;
static int16_t x570 = 481;
uint8_t x574 = 0U;
static int8_t x575 = 0;
int16_t x581 = INT16_MIN;
int8_t x584 = 1;
int32_t x585 = 15344;
uint16_t x589 = 204U;
int32_t t148 = 17;
int8_t x600 = INT8_MIN;
volatile int16_t x605 = 0;
uint32_t x607 = 381244814U;
int32_t t151 = 0;
int32_t x614 = INT32_MIN;
volatile uint16_t x617 = UINT16_MAX;
volatile uint8_t x626 = 2U;
static uint32_t x633 = UINT32_MAX;
static volatile int8_t x642 = INT8_MIN;
uint16_t x644 = 408U;
int32_t x645 = INT32_MIN;
volatile uint8_t x649 = UINT8_MAX;
int32_t x650 = INT32_MAX;
uint16_t x657 = UINT16_MAX;
int32_t x664 = 38;
volatile int32_t t167 = -65412954;
int8_t x676 = INT8_MAX;
static volatile int32_t t168 = 0;
static uint16_t x677 = UINT16_MAX;
int32_t x680 = INT32_MIN;
uint8_t x685 = 115U;
int8_t x689 = INT8_MIN;
int16_t x690 = INT16_MIN;
int16_t x694 = 3506;
int32_t x696 = 2025881;
static volatile int32_t t174 = 74;
volatile int32_t t175 = -8367376;
volatile int16_t x713 = -1;
int64_t x717 = -1LL;
static volatile int64_t x727 = -1LL;
uint64_t x732 = 366098918595460079LLU;
static int32_t t182 = 13643437;
int32_t x738 = INT32_MIN;
int64_t x743 = INT64_MIN;
int8_t x745 = INT8_MIN;
uint8_t x753 = 1U;
int8_t x754 = INT8_MIN;
volatile int32_t t190 = -7047491;
int16_t x772 = -14683;
uint16_t x773 = UINT16_MAX;
volatile uint16_t x779 = 284U;
int8_t x780 = INT8_MIN;
static volatile int32_t t196 = -1266;
int8_t x789 = -1;
static int32_t x792 = -1;
volatile int64_t x798 = INT64_MIN;


void f0(void) {
    	int32_t x4 = INT32_MAX;

    t0 = (x1==((x2|x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int64_t x6 = -1447302LL;
	volatile int32_t t1 = -4523050;

    t1 = (x5==((x6|x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 6795157908411LLU;
	int16_t x10 = INT16_MIN;
	static int32_t x11 = INT32_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 136509;

    t2 = (x9==((x10|x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = 268;
	volatile int64_t x16 = -1LL;

    t3 = (x13==((x14|x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MAX;
	int8_t x18 = -1;
	int32_t t4 = 477097;

    t4 = (x17==((x18|x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 131438621U;
	volatile uint64_t x22 = UINT64_MAX;
	static volatile int32_t x23 = 1;
	int8_t x24 = -4;
	int32_t t5 = 11;

    t5 = (x21==((x22|x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile uint64_t x26 = 21643089LLU;
	static int8_t x27 = 4;
	static volatile int32_t t6 = -57946856;

    t6 = (x25==((x26|x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 7509;
	volatile uint16_t x31 = 1U;
	int32_t x32 = INT32_MIN;

    t7 = (x29==((x30|x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 127211201U;
	volatile uint32_t x34 = 6515380U;
	uint64_t x35 = 127070LLU;
	volatile uint64_t x36 = 2777116LLU;
	volatile int32_t t8 = 14;

    t8 = (x33==((x34|x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	volatile int8_t x38 = INT8_MIN;
	static int32_t x39 = INT32_MIN;
	volatile int32_t t9 = -61;

    t9 = (x37==((x38|x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = 20;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 9313U;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -17282971;

    t10 = (x41==((x42|x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 0;
	int32_t x46 = -20825011;
	static uint16_t x47 = 29229U;
	int8_t x48 = INT8_MAX;
	static int32_t t11 = 238;

    t11 = (x45==((x46|x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -3191;
	int32_t x50 = 163047097;
	static int16_t x51 = 214;
	uint64_t x52 = 2406941064LLU;
	volatile int32_t t12 = -13;

    t12 = (x49==((x50|x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x55 = -5;
	static volatile int32_t x56 = INT32_MIN;
	int32_t t13 = 7;

    t13 = (x53==((x54|x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 2248U;
	static int32_t x58 = -3;
	uint8_t x60 = 6U;

    t14 = (x57==((x58|x59)<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint8_t x62 = 2U;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = 295733710535067LL;
	int32_t t15 = -36355;

    t15 = (x61==((x62|x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int16_t x68 = 0;
	int32_t t16 = -472274963;

    t16 = (x65==((x66|x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int32_t x70 = INT32_MAX;
	int64_t x72 = -1LL;
	volatile int32_t t17 = 125;

    t17 = (x69==((x70|x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = 3;
	static uint32_t x74 = 116U;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 986998483;

    t18 = (x73==((x74|x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x79 = 6;
	volatile int8_t x80 = -3;
	int32_t t19 = -415;

    t19 = (x77==((x78|x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	uint64_t x83 = 16998869104056824LLU;
	int8_t x84 = -1;
	static volatile int32_t t20 = -3;

    t20 = (x81==((x82|x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	volatile int16_t x86 = INT16_MIN;
	int32_t x87 = -4660719;
	volatile int32_t t21 = -8314401;

    t21 = (x85==((x86|x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	int32_t t22 = 2943;

    t22 = (x89==((x90|x91)<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 547208631;

    t23 = (x93==((x94|x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 28001U;
	static int32_t x98 = INT32_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int8_t x100 = -5;

    t24 = (x97==((x98|x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x102 = 1;

    t25 = (x101==((x102|x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	int16_t x106 = 1;
	int64_t x107 = 797301218798LL;
	static int32_t t26 = -238547670;

    t26 = (x105==((x106|x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static int64_t x111 = -115256787831033LL;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 84831;

    t27 = (x109==((x110|x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 1;
	uint8_t x114 = 4U;
	static int32_t x116 = -29730;
	int32_t t28 = -2;

    t28 = (x113==((x114|x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	uint64_t x118 = 6447LLU;
	int64_t x119 = INT64_MAX;

    t29 = (x117==((x118|x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	static volatile int64_t x123 = INT64_MIN;
	int32_t x124 = -97572;
	int32_t t30 = -2;

    t30 = (x121==((x122|x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int32_t x126 = -3021104;
	uint8_t x127 = 80U;
	volatile uint64_t x128 = 1LLU;

    t31 = (x125==((x126|x127)<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = -2229;
	volatile int16_t x131 = -1;
	int64_t x132 = 1934669979LL;
	static volatile int32_t t32 = 6432;

    t32 = (x129==((x130|x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	volatile int32_t x135 = INT32_MIN;
	int32_t x136 = 3668856;

    t33 = (x133==((x134|x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MAX;
	int64_t x139 = INT64_MIN;
	volatile int16_t x140 = -310;
	volatile int32_t t34 = 916;

    t34 = (x137==((x138|x139)<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = 271490566923066LL;
	uint8_t x143 = UINT8_MAX;
	volatile int16_t x144 = -1;
	volatile int32_t t35 = 245181;

    t35 = (x141==((x142|x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MIN;
	int16_t x147 = -5278;
	uint32_t x148 = UINT32_MAX;
	static volatile int32_t t36 = 120799;

    t36 = (x145==((x146|x147)<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MIN;
	static int32_t x150 = INT32_MAX;
	volatile uint32_t x151 = 9343U;
	volatile int64_t x152 = INT64_MAX;
	static int32_t t37 = -28956784;

    t37 = (x149==((x150|x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 7U;
	static int8_t x154 = INT8_MIN;
	volatile uint32_t x155 = 10798U;
	int16_t x156 = -1;
	int32_t t38 = -115962124;

    t38 = (x153==((x154|x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	volatile int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 386666031U;
	volatile int32_t t39 = 2;

    t39 = (x157==((x158|x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = -62;
	int16_t x162 = 127;
	uint16_t x163 = 4987U;
	int8_t x164 = -1;
	int32_t t40 = 9719;

    t40 = (x161==((x162|x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = -11;
	int64_t x167 = -777750869925090LL;
	volatile uint32_t x168 = UINT32_MAX;

    t41 = (x165==((x166|x167)<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 1452U;
	uint64_t x171 = 209919143068230327LLU;
	uint32_t x172 = 388819U;
	int32_t t42 = 207;

    t42 = (x169==((x170|x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MIN;
	uint8_t x176 = 65U;
	volatile int32_t t43 = -386416;

    t43 = (x173==((x174|x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -110414741226553LL;
	static int8_t x179 = -11;
	int64_t x180 = -1LL;
	int32_t t44 = 174730;

    t44 = (x177==((x178|x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	int64_t x182 = -1LL;
	int16_t x184 = INT16_MIN;

    t45 = (x181==((x182|x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 683704236289LLU;
	uint64_t x187 = 52799LLU;
	static int8_t x188 = 3;

    t46 = (x185==((x186|x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	static volatile int32_t t47 = 129;

    t47 = (x189==((x190|x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = 5339772453LL;
	int32_t x195 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 30861;

    t48 = (x193==((x194|x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1796666573U;
	int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	static volatile uint8_t x200 = 0U;
	volatile int32_t t49 = 659;

    t49 = (x197==((x198|x199)<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 0U;
	int32_t t50 = -409121126;

    t50 = (x201==((x202|x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 5332U;
	static uint64_t x206 = UINT64_MAX;
	volatile int64_t x208 = INT64_MAX;
	int32_t t51 = 491668;

    t51 = (x205==((x206|x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x211 = -1;
	int64_t x212 = INT64_MIN;

    t52 = (x209==((x210|x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	static int8_t x214 = -1;
	volatile uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t53 = 74838;

    t53 = (x213==((x214|x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 54LLU;
	int64_t x218 = INT64_MAX;
	int8_t x219 = -1;
	int8_t x220 = -1;

    t54 = (x217==((x218|x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -63;
	static volatile uint64_t x222 = 46068791LLU;
	static uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 1091507U;
	int32_t t55 = -10516;

    t55 = (x221==((x222|x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 144;

    t56 = (x225==((x226|x227)<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 935U;
	volatile int32_t t57 = -1332;

    t57 = (x229==((x230|x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 1285;
	int32_t x234 = -1825232;
	volatile int32_t x235 = INT32_MAX;
	int32_t t58 = -772856658;

    t58 = (x233==((x234|x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	static volatile int32_t x239 = INT32_MAX;
	volatile int32_t t59 = -349;

    t59 = (x237==((x238|x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = 13;
	int64_t x242 = INT64_MIN;
	static int32_t t60 = -318803;

    t60 = (x241==((x242|x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	static uint32_t x246 = UINT32_MAX;
	int8_t x247 = 9;
	int16_t x248 = -771;
	static int32_t t61 = -4025;

    t61 = (x245==((x246|x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 14721295104LLU;
	static int8_t x251 = -1;
	volatile uint32_t x252 = 42U;
	static int32_t t62 = -62199;

    t62 = (x249==((x250|x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = 215486U;
	int32_t x255 = -210;
	int32_t x256 = 0;
	int32_t t63 = -173844;

    t63 = (x253==((x254|x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 252U;
	int16_t x258 = INT16_MIN;
	volatile int8_t x259 = -1;
	int32_t t64 = 104974841;

    t64 = (x257==((x258|x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	volatile uint8_t x262 = 1U;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;

    t65 = (x261==((x262|x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 222223U;
	uint16_t x267 = 41U;
	static int32_t x268 = 2720;
	static volatile int32_t t66 = -1;

    t66 = (x265==((x266|x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	uint32_t x270 = 265188633U;
	uint32_t x271 = 1163U;
	int8_t x272 = 1;

    t67 = (x269==((x270|x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 11U;
	static volatile int16_t x275 = 9973;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -32955;

    t68 = (x273==((x274|x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -580917956486LL;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = 1098889306906145896LLU;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -71881100;

    t69 = (x277==((x278|x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 505464423LL;
	volatile int16_t x283 = INT16_MAX;
	static volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = -355;

    t70 = (x281==((x282|x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 2039402LL;
	int32_t x286 = 669130650;
	int32_t x287 = INT32_MIN;
	static int32_t t71 = 1;

    t71 = (x285==((x286|x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 31U;
	int16_t x290 = -86;
	int64_t x291 = -1LL;
	static uint32_t x292 = 2371793U;
	volatile int32_t t72 = -117;

    t72 = (x289==((x290|x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	static int32_t t73 = -26361;

    t73 = (x293==((x294|x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 938U;
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MAX;

    t74 = (x297==((x298|x299)<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 121964007LLU;
	int16_t x302 = 4299;
	uint64_t x303 = 91LLU;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -6988336;

    t75 = (x301==((x302|x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MAX;
	int64_t x307 = -301236LL;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = -9;

    t76 = (x305==((x306|x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MAX;
	static uint32_t x312 = UINT32_MAX;
	int32_t t77 = 184470;

    t77 = (x309==((x310|x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 74424003380LLU;
	int8_t x314 = INT8_MIN;
	static volatile uint16_t x315 = 70U;
	uint8_t x316 = 13U;
	static volatile int32_t t78 = -6239;

    t78 = (x313==((x314|x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MAX;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = -1;

    t79 = (x317==((x318|x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x322 = UINT32_MAX;
	volatile int8_t x324 = INT8_MIN;
	int32_t t80 = 787;

    t80 = (x321==((x322|x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x326 = 62U;
	int8_t x327 = INT8_MIN;
	volatile int8_t x328 = -1;
	volatile int32_t t81 = -56502;

    t81 = (x325==((x326|x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t t82 = 1956309;

    t82 = (x329==((x330|x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MIN;
	volatile int16_t x334 = -1;
	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = 0;
	int32_t t83 = -3847;

    t83 = (x333==((x334|x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MAX;
	volatile int16_t x338 = 3;
	static volatile int16_t x339 = INT16_MAX;
	static volatile int16_t x340 = INT16_MIN;

    t84 = (x337==((x338|x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	uint32_t x343 = UINT32_MAX;
	volatile uint8_t x344 = 20U;
	int32_t t85 = 15970131;

    t85 = (x341==((x342|x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	static int16_t x346 = -1;
	int8_t x348 = -1;
	int32_t t86 = -2173728;

    t86 = (x345==((x346|x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = 1U;
	int64_t x351 = -1128LL;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 77767694;

    t87 = (x349==((x350|x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 0;

    t88 = (x353==((x354|x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 0U;
	int32_t x358 = -50605156;
	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	volatile int32_t t89 = -222924;

    t89 = (x357==((x358|x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 1U;
	static int64_t x362 = 63819682LL;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 0;

    t90 = (x361==((x362|x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 291U;
	volatile int8_t x368 = 43;
	static volatile int32_t t91 = -2021399;

    t91 = (x365==((x366|x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 1114U;
	int32_t x370 = -955019;
	volatile uint64_t x371 = 268241461839685938LLU;
	volatile int32_t x372 = 0;
	static volatile int32_t t92 = -81941277;

    t92 = (x369==((x370|x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 15489586U;
	int64_t x374 = 7399598827894LL;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;

    t93 = (x373==((x374|x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x377 = UINT32_MAX;
	uint32_t x378 = UINT32_MAX;
	static int32_t x379 = INT32_MIN;
	int32_t x380 = -66344;

    t94 = (x377==((x378|x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	uint64_t x383 = 176045865953051434LLU;
	int32_t x384 = -1;
	int32_t t95 = -3289;

    t95 = (x381==((x382|x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 95605141U;
	uint16_t x386 = 248U;
	static volatile int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 3111;

    t96 = (x385==((x386|x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	uint8_t x390 = 4U;
	static volatile uint64_t x391 = 13513LLU;
	static uint16_t x392 = 0U;
	int32_t t97 = 4;

    t97 = (x389==((x390|x391)<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	int64_t x396 = 618428331LL;
	static int32_t t98 = -20605;

    t98 = (x393==((x394|x395)<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -206169LL;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 507U;
	static int8_t x400 = 1;

    t99 = (x397==((x398|x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = -1;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = 1069U;
	static volatile int32_t t100 = 27;

    t100 = (x401==((x402|x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	uint16_t x407 = 1762U;
	static int32_t t101 = 530672;

    t101 = (x405==((x406|x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 273U;
	uint64_t x410 = 13024164472395LLU;
	volatile int8_t x411 = 0;
	static volatile int64_t x412 = INT64_MIN;
	int32_t t102 = 56201;

    t102 = (x409==((x410|x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 3;
	uint64_t x414 = 67961752641LLU;
	int16_t x415 = -1;
	int64_t x416 = INT64_MIN;
	int32_t t103 = 2;

    t103 = (x413==((x414|x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x417 = UINT32_MAX;
	int16_t x418 = 105;
	int32_t x419 = INT32_MAX;
	volatile uint16_t x420 = 1U;
	int32_t t104 = 44692402;

    t104 = (x417==((x418|x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 41118396LLU;
	int32_t x422 = INT32_MIN;
	int64_t x423 = -23024LL;
	static int32_t x424 = -50452;
	int32_t t105 = 2;

    t105 = (x421==((x422|x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 1475504403026473LLU;
	int16_t x428 = 1810;
	volatile int32_t t106 = 1720;

    t106 = (x425==((x426|x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MAX;
	volatile int16_t x432 = INT16_MIN;
	int32_t t107 = 1;

    t107 = (x429==((x430|x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 3U;
	int64_t x434 = -1LL;
	int64_t x435 = -1LL;
	volatile int32_t t108 = 13693835;

    t108 = (x433==((x434|x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x439 = 7954263LLU;
	int32_t t109 = -7799;

    t109 = (x437==((x438|x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 0U;
	uint16_t x442 = 121U;
	volatile int32_t t110 = 24373862;

    t110 = (x441==((x442|x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = -102LL;
	int64_t x447 = INT64_MIN;
	volatile uint16_t x448 = 2U;
	volatile int32_t t111 = -670734;

    t111 = (x445==((x446|x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = 0;
	int16_t x452 = 15482;

    t112 = (x449==((x450|x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x453 = 3U;
	uint8_t x454 = 27U;
	int16_t x455 = INT16_MIN;
	int32_t t113 = 637;

    t113 = (x453==((x454|x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 0;
	static int32_t x458 = -63;
	int32_t x459 = INT32_MAX;
	uint8_t x460 = 10U;
	volatile int32_t t114 = -7798293;

    t114 = (x457==((x458|x459)<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MAX;
	int8_t x463 = 1;
	static int32_t t115 = -453968;

    t115 = (x461==((x462|x463)<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x467 = 2U;
	int64_t x468 = INT64_MAX;
	int32_t t116 = -9174757;

    t116 = (x465==((x466|x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 53063313515611LLU;
	int64_t x470 = 1741703LL;
	volatile int64_t x471 = INT64_MIN;
	volatile int32_t t117 = -1;

    t117 = (x469==((x470|x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x474 = 3901U;
	static int32_t x475 = 479921856;
	static volatile int8_t x476 = INT8_MAX;
	int32_t t118 = 117560;

    t118 = (x473==((x474|x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	static volatile int32_t x479 = 0;
	uint8_t x480 = 7U;

    t119 = (x477==((x478|x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	volatile int8_t x482 = INT8_MIN;
	uint16_t x483 = 165U;
	int8_t x484 = INT8_MIN;
	int32_t t120 = -4928;

    t120 = (x481==((x482|x483)<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	volatile int8_t x486 = INT8_MIN;
	volatile uint64_t x487 = UINT64_MAX;
	int64_t x488 = -6579LL;
	volatile int32_t t121 = -117;

    t121 = (x485==((x486|x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = 244;
	int64_t x490 = -1LL;
	uint16_t x491 = UINT16_MAX;
	static int32_t t122 = -5005;

    t122 = (x489==((x490|x491)<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	int16_t x494 = -284;
	volatile int16_t x495 = INT16_MAX;

    t123 = (x493==((x494|x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 126032U;
	static int32_t x498 = INT32_MIN;
	volatile uint8_t x499 = 3U;
	uint64_t x500 = UINT64_MAX;
	volatile int32_t t124 = 51026;

    t124 = (x497==((x498|x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	int64_t x502 = -1LL;
	uint32_t x503 = 362U;
	int64_t x504 = -175865LL;
	volatile int32_t t125 = 650574;

    t125 = (x501==((x502|x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	static int32_t t126 = -64563212;

    t126 = (x505==((x506|x507)<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = 1934;
	int16_t x511 = INT16_MAX;
	volatile int16_t x512 = -1;
	volatile int32_t t127 = -8965918;

    t127 = (x509==((x510|x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	int64_t x514 = INT64_MAX;
	int64_t x516 = 2LL;
	volatile int32_t t128 = -21058;

    t128 = (x513==((x514|x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	int64_t x518 = INT64_MIN;
	static int8_t x519 = -1;
	int64_t x520 = 95587945533677LL;
	static int32_t t129 = 2;

    t129 = (x517==((x518|x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x523 = INT8_MAX;
	int64_t x524 = INT64_MIN;

    t130 = (x521==((x522|x523)<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 29862U;
	volatile int16_t x526 = -1;
	int16_t x527 = 5;
	int16_t x528 = 4970;

    t131 = (x525==((x526|x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = INT32_MIN;
	static uint64_t x531 = UINT64_MAX;
	static int16_t x532 = -4174;

    t132 = (x529==((x530|x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MIN;
	int8_t x536 = -1;
	static volatile int32_t t133 = 839370;

    t133 = (x533==((x534|x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MAX;
	static uint32_t x539 = UINT32_MAX;
	volatile int64_t x540 = 103599LL;
	volatile int32_t t134 = 34281;

    t134 = (x537==((x538|x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	int16_t x542 = INT16_MAX;
	volatile int64_t x543 = -1LL;
	uint64_t x544 = UINT64_MAX;
	int32_t t135 = 9729;

    t135 = (x541==((x542|x543)<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = -1;
	volatile int8_t x546 = INT8_MIN;
	uint16_t x547 = UINT16_MAX;
	static volatile int64_t x548 = -1LL;
	static int32_t t136 = 1;

    t136 = (x545==((x546|x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 1884577360815650LL;
	uint16_t x550 = UINT16_MAX;
	uint64_t x551 = 27859223LLU;
	uint16_t x552 = 13U;
	volatile int32_t t137 = -173;

    t137 = (x549==((x550|x551)<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	volatile uint32_t x554 = UINT32_MAX;
	static uint32_t x555 = UINT32_MAX;
	int8_t x556 = -1;
	int32_t t138 = 501604970;

    t138 = (x553==((x554|x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 58567835433700130LLU;
	volatile int8_t x558 = INT8_MAX;
	volatile int64_t x559 = 39669490379LL;
	static volatile int16_t x560 = 63;
	int32_t t139 = 1510;

    t139 = (x557==((x558|x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -9;
	volatile uint16_t x562 = UINT16_MAX;
	int64_t x563 = -1LL;
	volatile uint16_t x564 = 3171U;
	static volatile int32_t t140 = -28011761;

    t140 = (x561==((x562|x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile uint64_t x566 = 51LLU;
	static uint64_t x567 = 75810319668LLU;

    t141 = (x565==((x566|x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = 4;
	static uint8_t x571 = UINT8_MAX;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t142 = 63127300;

    t142 = (x569==((x570|x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MIN;
	int64_t x576 = INT64_MAX;
	static int32_t t143 = 1;

    t143 = (x573==((x574|x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x577 = UINT16_MAX;
	static volatile int64_t x578 = INT64_MIN;
	int32_t x579 = 323;
	int64_t x580 = INT64_MAX;
	volatile int32_t t144 = -12777174;

    t144 = (x577==((x578|x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x582 = 0U;
	volatile int16_t x583 = INT16_MAX;
	volatile int32_t t145 = 1;

    t145 = (x581==((x582|x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = -1;
	volatile uint64_t x587 = UINT64_MAX;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t146 = 573711002;

    t146 = (x585==((x586|x587)<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x590 = UINT32_MAX;
	volatile int8_t x591 = INT8_MIN;
	volatile int8_t x592 = INT8_MAX;
	volatile int32_t t147 = 63;

    t147 = (x589==((x590|x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 7238U;
	int16_t x594 = -95;
	static int32_t x595 = -1;
	int64_t x596 = 212LL;

    t148 = (x593==((x594|x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 54;
	uint8_t x598 = UINT8_MAX;
	int8_t x599 = 26;
	volatile int32_t t149 = -3592;

    t149 = (x597==((x598|x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static int16_t x602 = -1;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = 41539921900LLU;
	static volatile int32_t t150 = 0;

    t150 = (x601==((x602|x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	int32_t x608 = INT32_MIN;

    t151 = (x605==((x606|x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	static int16_t x610 = INT16_MAX;
	static int64_t x611 = INT64_MIN;
	int16_t x612 = -1;
	volatile int32_t t152 = 447179;

    t152 = (x609==((x610|x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = 95;
	volatile int16_t x615 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	static volatile int32_t t153 = 4;

    t153 = (x613==((x614|x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x618 = 767U;
	int16_t x619 = INT16_MAX;
	static int8_t x620 = INT8_MIN;
	int32_t t154 = 5001;

    t154 = (x617==((x618|x619)<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = 3665;
	int64_t x622 = INT64_MAX;
	int8_t x623 = INT8_MAX;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t155 = 645978;

    t155 = (x621==((x622|x623)<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	int8_t x627 = 13;
	int64_t x628 = 503470LL;
	int32_t t156 = 247;

    t156 = (x625==((x626|x627)<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	int32_t x630 = 238;
	static uint32_t x631 = UINT32_MAX;
	int64_t x632 = INT64_MAX;
	int32_t t157 = -1670;

    t157 = (x629==((x630|x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x634 = INT16_MAX;
	int16_t x635 = INT16_MAX;
	int64_t x636 = 774664072481LL;
	volatile int32_t t158 = 2848;

    t158 = (x633==((x634|x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = -1;
	static int8_t x639 = INT8_MAX;
	static int16_t x640 = INT16_MAX;
	volatile int32_t t159 = 6;

    t159 = (x637==((x638|x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -5472234;
	int16_t x643 = INT16_MIN;
	volatile int32_t t160 = 374136420;

    t160 = (x641==((x642|x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x646 = UINT32_MAX;
	int64_t x647 = -1LL;
	int64_t x648 = INT64_MIN;
	static volatile int32_t t161 = 0;

    t161 = (x645==((x646|x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x651 = -1;
	uint64_t x652 = 114690535LLU;
	volatile int32_t t162 = 38178;

    t162 = (x649==((x650|x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = -43;
	int64_t x654 = INT64_MIN;
	int32_t x655 = INT32_MAX;
	volatile int64_t x656 = INT64_MAX;
	int32_t t163 = -25774;

    t163 = (x653==((x654|x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = UINT32_MAX;
	volatile int64_t x659 = 3333085272500637LL;
	int16_t x660 = INT16_MIN;
	int32_t t164 = 276103276;

    t164 = (x657==((x658|x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	uint16_t x662 = 7085U;
	int32_t x663 = INT32_MIN;
	int32_t t165 = -2801;

    t165 = (x661==((x662|x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = 482596U;
	static uint8_t x666 = UINT8_MAX;
	uint8_t x667 = 3U;
	int16_t x668 = 1;
	volatile int32_t t166 = -1;

    t166 = (x665==((x666|x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x669 = UINT32_MAX;
	static int8_t x670 = -1;
	uint64_t x671 = 24706996433LLU;
	int16_t x672 = INT16_MIN;

    t167 = (x669==((x670|x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = 26U;
	int64_t x674 = INT64_MIN;
	int16_t x675 = INT16_MIN;

    t168 = (x673==((x674|x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = 78200LL;
	int8_t x679 = INT8_MIN;
	int32_t t169 = 54234821;

    t169 = (x677==((x678|x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = 45;
	uint16_t x682 = 645U;
	int32_t x683 = -61;
	int32_t x684 = INT32_MAX;
	int32_t t170 = -97846;

    t170 = (x681==((x682|x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x686 = INT16_MIN;
	int16_t x687 = 1350;
	int8_t x688 = INT8_MAX;
	volatile int32_t t171 = -696779796;

    t171 = (x685==((x686|x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x691 = 0;
	int32_t x692 = -1;
	int32_t t172 = 920405788;

    t172 = (x689==((x690|x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	static uint8_t x695 = 15U;
	volatile int32_t t173 = -1;

    t173 = (x693==((x694|x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	static int64_t x698 = INT64_MAX;
	static volatile uint8_t x699 = UINT8_MAX;
	int16_t x700 = INT16_MIN;

    t174 = (x697==((x698|x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MIN;
	int32_t x703 = INT32_MAX;
	int8_t x704 = INT8_MIN;

    t175 = (x701==((x702|x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 925245LLU;
	uint16_t x706 = 38U;
	uint8_t x707 = UINT8_MAX;
	int8_t x708 = -52;
	int32_t t176 = -115130663;

    t176 = (x705==((x706|x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	static uint8_t x710 = UINT8_MAX;
	int16_t x711 = 372;
	static int8_t x712 = -1;
	int32_t t177 = -472130;

    t177 = (x709==((x710|x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = INT32_MAX;
	uint32_t x715 = 8819795U;
	uint8_t x716 = 60U;
	volatile int32_t t178 = 1;

    t178 = (x713==((x714|x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x718 = -1;
	static volatile uint64_t x719 = UINT64_MAX;
	uint64_t x720 = 245165183723276LLU;
	int32_t t179 = 11880;

    t179 = (x717==((x718|x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MIN;
	int8_t x723 = -1;
	int32_t x724 = INT32_MIN;
	int32_t t180 = -212439102;

    t180 = (x721==((x722|x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = -1LL;
	int64_t x726 = 11615586LL;
	volatile uint64_t x728 = 9833448302264LLU;
	static int32_t t181 = 0;

    t181 = (x725==((x726|x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = INT64_MIN;
	static int16_t x730 = 11372;
	static volatile uint8_t x731 = 29U;

    t182 = (x729==((x730|x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 9U;
	uint8_t x734 = UINT8_MAX;
	static int16_t x735 = 155;
	int8_t x736 = 38;
	int32_t t183 = 199532;

    t183 = (x733==((x734|x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	volatile int8_t x739 = INT8_MAX;
	int64_t x740 = -1LL;
	int32_t t184 = -101;

    t184 = (x737==((x738|x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MAX;
	uint64_t x742 = 43863LLU;
	int16_t x744 = -1;
	int32_t t185 = 14;

    t185 = (x741==((x742|x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = INT32_MAX;
	uint8_t x747 = 1U;
	int16_t x748 = -1;
	volatile int32_t t186 = 3318065;

    t186 = (x745==((x746|x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	uint8_t x750 = 42U;
	int16_t x751 = -13;
	static int8_t x752 = -1;
	volatile int32_t t187 = 40;

    t187 = (x749==((x750|x751)<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x755 = UINT32_MAX;
	volatile int8_t x756 = INT8_MIN;
	int32_t t188 = 6654064;

    t188 = (x753==((x754|x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	static int8_t x758 = INT8_MIN;
	int64_t x759 = INT64_MIN;
	int16_t x760 = INT16_MAX;
	volatile int32_t t189 = 57;

    t189 = (x757==((x758|x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 1U;
	int64_t x762 = INT64_MIN;
	volatile int16_t x763 = 159;
	static int32_t x764 = INT32_MIN;

    t190 = (x761==((x762|x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	volatile uint32_t x766 = UINT32_MAX;
	static int8_t x767 = -1;
	volatile uint64_t x768 = UINT64_MAX;
	int32_t t191 = -33;

    t191 = (x765==((x766|x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = 1624U;
	static uint16_t x770 = 19U;
	volatile int8_t x771 = INT8_MAX;
	int32_t t192 = 490121;

    t192 = (x769==((x770|x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = -1;
	volatile int32_t x775 = INT32_MAX;
	static int8_t x776 = INT8_MIN;
	int32_t t193 = 106;

    t193 = (x773==((x774|x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = 0;
	volatile uint16_t x778 = 19351U;
	int32_t t194 = -375858767;

    t194 = (x777==((x778|x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -790467488107732LL;
	volatile uint64_t x782 = UINT64_MAX;
	volatile int64_t x783 = -1LL;
	uint8_t x784 = 5U;
	int32_t t195 = 53040;

    t195 = (x781==((x782|x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	int8_t x787 = INT8_MAX;
	int8_t x788 = 0;

    t196 = (x785==((x786|x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = INT32_MAX;
	int64_t x791 = 15193326145LL;
	volatile int32_t t197 = 414366;

    t197 = (x789==((x790|x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 0U;
	static uint8_t x794 = 54U;
	uint8_t x795 = 12U;
	int16_t x796 = INT16_MIN;
	static volatile int32_t t198 = 0;

    t198 = (x793==((x794|x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x797 = 124043LLU;
	uint32_t x799 = UINT32_MAX;
	static int16_t x800 = 3;
	volatile int32_t t199 = -21859853;

    t199 = (x797==((x798|x799)<=x800));

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

