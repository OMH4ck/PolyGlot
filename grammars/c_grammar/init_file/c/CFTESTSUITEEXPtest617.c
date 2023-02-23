
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

uint32_t x2 = 6063U;
volatile int8_t x5 = -1;
uint16_t x6 = 26092U;
uint32_t x7 = 1330087257U;
volatile int8_t x17 = INT8_MIN;
static volatile int64_t x27 = INT64_MAX;
volatile uint64_t x34 = UINT64_MAX;
int32_t x35 = 1;
int64_t x51 = INT64_MAX;
uint64_t x52 = 43574LLU;
static int8_t x55 = INT8_MIN;
uint64_t x56 = UINT64_MAX;
volatile uint64_t t12 = 414755LLU;
static int8_t x66 = -1;
static uint8_t x73 = UINT8_MAX;
static int64_t t14 = -109146LL;
uint8_t x85 = UINT8_MAX;
uint32_t x86 = 98070U;
static volatile int32_t x88 = -249;
static uint64_t x106 = 43535003761476929LLU;
volatile int64_t x108 = 3644670799521722LL;
volatile uint64_t t22 = 1388245712806656263LLU;
int32_t x117 = -1513668;
int32_t x119 = -601864573;
static int8_t x120 = 28;
static int16_t x122 = INT16_MIN;
int64_t t26 = 24250853388LL;
uint16_t x134 = UINT16_MAX;
static uint64_t x141 = UINT64_MAX;
int64_t x144 = 666276704576LL;
int8_t x149 = INT8_MIN;
int8_t x151 = INT8_MIN;
int64_t x155 = INT64_MIN;
static int32_t t32 = 120940326;
int16_t x174 = INT16_MAX;
int64_t x180 = -1LL;
int16_t x190 = -1;
volatile uint64_t x191 = 467457897365811908LLU;
uint8_t x192 = 0U;
volatile int16_t x198 = 1708;
uint16_t x199 = 49U;
static int32_t t40 = -84988205;
int16_t x207 = 19;
int32_t x214 = -1;
uint16_t x219 = 1511U;
static uint64_t t44 = 902724008601642LLU;
int8_t x221 = INT8_MIN;
volatile int16_t x231 = -250;
volatile int16_t x237 = INT16_MIN;
static uint64_t x240 = 128272189189485LLU;
volatile uint64_t t49 = 4268195149LLU;
int16_t x242 = -332;
uint64_t x244 = 3LLU;
static int32_t x246 = 145961;
static int64_t x262 = 327895552LL;
int16_t x266 = 41;
static int32_t x267 = INT32_MIN;
volatile int32_t x272 = -26;
int8_t x276 = INT8_MAX;
uint8_t x286 = 52U;
static int8_t x287 = -52;
volatile uint16_t x291 = 33U;
volatile uint32_t t59 = 7635606U;
volatile int8_t x296 = INT8_MAX;
static volatile int32_t x299 = 784485;
volatile int64_t t61 = INT64_MIN;
int64_t x301 = INT64_MIN;
uint8_t x303 = 66U;
static int64_t x304 = INT64_MAX;
int32_t x309 = INT32_MIN;
uint32_t x311 = UINT32_MAX;
uint64_t x318 = 0LLU;
volatile int8_t x319 = INT8_MIN;
int32_t x328 = -1;
volatile int32_t x330 = 1;
volatile int8_t x340 = -9;
int16_t x344 = INT16_MIN;
int16_t x346 = INT16_MIN;
int8_t x348 = -16;
int8_t x360 = -1;
static volatile uint64_t t75 = 215013092627029LLU;
uint32_t x372 = 519222U;
int64_t x377 = INT64_MAX;
volatile int8_t x380 = INT8_MAX;
static uint32_t t79 = 34357949U;
uint16_t x391 = UINT16_MAX;
int64_t t84 = INT64_MIN;
uint64_t x410 = 1719131733050LLU;
volatile uint32_t x412 = 851399U;
volatile uint64_t t85 = 263403544226827LLU;
volatile uint64_t t87 = 1083289906130727LLU;
volatile uint16_t x426 = 1U;
volatile int64_t t88 = 111733222LL;
volatile int16_t x430 = 55;
volatile uint32_t x431 = 127U;
int8_t x432 = INT8_MIN;
int64_t t90 = -263254053214LL;
static uint32_t x442 = 3U;
volatile uint64_t t94 = 12343533895770LLU;
volatile int8_t x465 = INT8_MIN;
int64_t x473 = INT64_MIN;
volatile int32_t x475 = -1;
uint64_t t100 = 5849061641997383LLU;
int8_t x481 = INT8_MIN;
uint64_t x482 = UINT64_MAX;
volatile int32_t x492 = -1;
static uint8_t x493 = 0U;
volatile int64_t x499 = -1LL;
int16_t x500 = -17;
int16_t x501 = -1;
int64_t x503 = INT64_MAX;
uint16_t x515 = UINT16_MAX;
int32_t x519 = INT32_MIN;
uint64_t x523 = UINT64_MAX;
int32_t x524 = INT32_MIN;
int64_t x533 = -1LL;
uint32_t x542 = 13842401U;
static uint8_t x544 = 23U;
int8_t x547 = -1;
static volatile int64_t x549 = 147LL;
volatile int32_t x550 = -5796;
uint64_t x552 = 3165184027LLU;
uint8_t x567 = UINT8_MAX;
int32_t t120 = 3267653;
static int16_t x580 = INT16_MIN;
static uint16_t x590 = 22U;
static int8_t x591 = INT8_MIN;
uint32_t t125 = 107U;
volatile int8_t x593 = 1;
volatile int16_t x607 = -14;
volatile int64_t x609 = 142178LL;
uint16_t x615 = UINT16_MAX;
static int16_t x619 = -31;
int32_t x620 = 215735837;
uint64_t x621 = 0LLU;
uint32_t x622 = UINT32_MAX;
uint16_t x624 = 7U;
int64_t x642 = INT64_MAX;
volatile int64_t t134 = 11055LL;
static int32_t x649 = INT32_MIN;
int16_t x651 = -504;
uint64_t x652 = 2523970447008852LLU;
uint8_t x657 = 7U;
uint64_t x659 = 461635275598640090LLU;
uint16_t x672 = 4U;
static volatile int64_t t141 = 156475532LL;
int64_t x677 = INT64_MIN;
int8_t x684 = -10;
int32_t x687 = INT32_MIN;
int64_t t145 = 155LL;
uint32_t x696 = UINT32_MAX;
uint32_t t146 = 53456U;
static int64_t t147 = 3419744089LL;
int16_t x710 = -1;
volatile int8_t x715 = 44;
int64_t t150 = -8761962LL;
uint64_t t151 = 1201215654LLU;
int64_t x729 = INT64_MIN;
static int64_t x731 = INT64_MIN;
volatile int64_t t154 = INT64_MIN;
uint8_t x733 = 15U;
static volatile int16_t x744 = INT16_MIN;
uint8_t x746 = UINT8_MAX;
volatile int64_t t158 = 788609699LL;
int64_t x750 = 441028494LL;
int16_t x754 = INT16_MIN;
uint16_t x767 = 89U;
volatile uint64_t t162 = 507806320216964968LLU;
int32_t x781 = -1;
int32_t x786 = INT32_MIN;
int8_t x787 = INT8_MIN;
int16_t x799 = INT16_MIN;
int64_t x807 = INT64_MIN;
int64_t t170 = 52811LL;
uint8_t x821 = UINT8_MAX;
uint64_t x829 = UINT64_MAX;
int32_t x830 = -2;
volatile uint64_t t173 = UINT64_MAX;
uint64_t x833 = UINT64_MAX;
uint8_t x837 = 78U;
volatile uint64_t x839 = 11LLU;
uint64_t t176 = 3298LLU;
static volatile uint16_t x845 = 31U;
volatile int64_t x857 = -15958LL;
int32_t x860 = -1;
static int64_t t180 = 36531281106900LL;
uint16_t x871 = UINT16_MAX;
static volatile int32_t x877 = INT32_MIN;
int16_t x880 = -31;
static int64_t x886 = 134212LL;
int8_t x887 = -1;
int64_t t185 = -281LL;
volatile int8_t x894 = INT8_MAX;
uint8_t x895 = 7U;
int16_t x904 = INT16_MAX;
volatile int8_t x906 = INT8_MIN;
int64_t x907 = INT64_MIN;
int16_t x914 = -3;
int8_t x919 = -1;
volatile int32_t x922 = INT32_MIN;
static volatile uint8_t x927 = UINT8_MAX;
volatile uint32_t t193 = 11U;
int16_t x941 = INT16_MIN;
static volatile uint64_t t196 = 8713918LLU;
uint32_t x951 = UINT32_MAX;
int8_t x952 = INT8_MAX;


void f0(void) {
    	int32_t x1 = 15;
	static volatile uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 1258210550LLU;
	uint64_t t0 = 761760LLU;

    t0 = (x1+((x2/x3)*x4));

    if (t0 != 15LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x8 = 3U;
	uint32_t t1 = UINT32_MAX;

    t1 = (x5+((x6/x7)*x8));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 5938;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = -4026;
	int8_t x12 = INT8_MAX;
	uint64_t t2 = 41LLU;

    t2 = (x9+((x10/x11)*x12));

    if (t2 != 6065LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	volatile int32_t x16 = INT32_MIN;
	static volatile uint64_t t3 = UINT64_MAX;

    t3 = (x13+((x14/x15)*x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x18 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	static uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 817LLU;

    t4 = (x17+((x18/x19)*x20));

    if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 18U;
	volatile int32_t x26 = -314;
	int64_t x28 = -6861126226436LL;
	static volatile int64_t t5 = 408283LL;

    t5 = (x25+((x26/x27)*x28));

    if (t5 != 18LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MAX;
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -49;
	volatile int64_t t6 = -630720424902LL;

    t6 = (x29+((x30/x31)*x32));

    if (t6 != 9223372036032692223LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t7 = 8358339117498525270LLU;

    t7 = (x33+((x34/x35)*x36));

    if (t7 != 4295000063LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = 23;
	static uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t8 = 50041;

    t8 = (x45+((x46/x47)*x48));

    if (t8 != 23) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x49 = 0LL;
	static int8_t x50 = -1;
	uint64_t t9 = 398LLU;

    t9 = (x49+((x50/x51)*x52));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = INT32_MIN;
	int8_t x54 = -1;
	static uint64_t t10 = 62121232LLU;

    t10 = (x53+((x54/x55)*x56));

    if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = 17;
	int8_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t11 = 82;

    t11 = (x57+((x58/x59)*x60));

    if (t11 != -32751) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x61 = 1U;
	volatile uint32_t x62 = 317700331U;
	uint8_t x63 = 3U;
	uint64_t x64 = 4129070LLU;

    t12 = (x61+((x62/x63)*x64));

    if (t12 != 437268967197701LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x65 = -1;
	int32_t x67 = INT32_MAX;
	static uint8_t x68 = 8U;
	volatile int32_t t13 = 497400;

    t13 = (x65+((x66/x67)*x68));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x74 = 6325LL;
	uint16_t x75 = UINT16_MAX;
	volatile int16_t x76 = 28;

    t14 = (x73+((x74/x75)*x76));

    if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x77 = -11;
	int16_t x78 = INT16_MAX;
	volatile int64_t x79 = INT64_MAX;
	int64_t x80 = INT64_MAX;
	volatile int64_t t15 = 234059257723LL;

    t15 = (x77+((x78/x79)*x80));

    if (t15 != -11LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x87 = 1;
	static volatile uint32_t t16 = 1606491U;

    t16 = (x85+((x86/x87)*x88));

    if (t16 != 4270548121U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = -1;
	static uint16_t x90 = UINT16_MAX;
	uint16_t x91 = UINT16_MAX;
	static int16_t x92 = -1;
	static int32_t t17 = 18;

    t17 = (x89+((x90/x91)*x92));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x93 = -1;
	int16_t x94 = -1;
	static int8_t x95 = 6;
	volatile int8_t x96 = -1;
	static volatile int32_t t18 = 14;

    t18 = (x93+((x94/x95)*x96));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x97 = -1;
	int8_t x98 = -7;
	static volatile uint16_t x99 = 26790U;
	static int64_t x100 = -1LL;
	int64_t t19 = -28669LL;

    t19 = (x97+((x98/x99)*x100));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x107 = -3029;
	uint64_t t20 = 77251759573740849LLU;

    t20 = (x105+((x106/x107)*x108));

    if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x109 = 3U;
	volatile uint8_t x110 = 3U;
	int32_t x111 = INT32_MAX;
	volatile int32_t x112 = 3;
	volatile int32_t t21 = 1186997;

    t21 = (x109+((x110/x111)*x112));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x113 = 284043542577939LLU;
	volatile uint8_t x114 = 55U;
	uint8_t x115 = 4U;
	static uint32_t x116 = 51U;

    t22 = (x113+((x114/x115)*x116));

    if (t22 != 284043542578602LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x118 = INT64_MIN;
	volatile int64_t t23 = 221399444325161LL;

    t23 = (x117+((x118/x119)*x120));

    if (t23 != 429089063520LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x121 = 6065U;
	int16_t x123 = INT16_MIN;
	volatile int64_t x124 = -1LL;
	static int64_t t24 = -2790156264354264832LL;

    t24 = (x121+((x122/x123)*x124));

    if (t24 != 6064LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	volatile uint64_t x126 = 100LLU;
	static int64_t x127 = -5LL;
	int32_t x128 = 0;
	uint64_t t25 = UINT64_MAX;

    t25 = (x125+((x126/x127)*x128));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = 8;
	int64_t x130 = -1LL;
	uint8_t x131 = 41U;
	int64_t x132 = INT64_MAX;

    t26 = (x129+((x130/x131)*x132));

    if (t26 != 8LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = -2098178986459LL;
	volatile int64_t t27 = -31259393026LL;

    t27 = (x133+((x134/x135)*x136));

    if (t27 != -1082656062045549LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x142 = UINT32_MAX;
	volatile uint64_t x143 = 5976LLU;
	static volatile uint64_t t28 = 1LLU;

    t28 = (x141+((x142/x143)*x144));

    if (t28 != 478854400132180351LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x150 = INT16_MAX;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t29 = 23LLU;

    t29 = (x149+((x150/x151)*x152));

    if (t29 != 127LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x153 = -1;
	volatile uint16_t x154 = 6705U;
	uint64_t x156 = 55775LLU;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (x153+((x154/x155)*x156));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x157 = 158U;
	uint64_t x158 = 143571167LLU;
	int8_t x159 = INT8_MIN;
	static volatile int16_t x160 = INT16_MAX;
	static uint64_t t31 = 247256733196609856LLU;

    t31 = (x157+((x158/x159)*x160));

    if (t31 != 158LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = 648;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x163 = 167U;
	int16_t x164 = -1;

    t32 = (x161+((x162/x163)*x164));

    if (t32 != 12859831) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = -1;
	int64_t x166 = INT64_MIN;
	int32_t x167 = -121;
	static uint16_t x168 = 3U;
	volatile int64_t t33 = -7LL;

    t33 = (x165+((x166/x167)*x168));

    if (t33 != 228678645541853942LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 56U;
	int32_t x171 = 7;
	static int32_t x172 = -7;
	int32_t t34 = -184;

    t34 = (x169+((x170/x171)*x172));

    if (t34 != 65479) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x173 = -1;
	static int16_t x175 = INT16_MIN;
	volatile int8_t x176 = 0;
	volatile int32_t t35 = -1988060;

    t35 = (x173+((x174/x175)*x176));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x177 = 31413U;
	static int8_t x178 = -1;
	int32_t x179 = -1;
	volatile int64_t t36 = 33239932886LL;

    t36 = (x177+((x178/x179)*x180));

    if (t36 != 31412LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x181 = 2;
	static int8_t x182 = -8;
	int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = UINT8_MAX;
	int32_t t37 = -97910999;

    t37 = (x181+((x182/x183)*x184));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x189 = 159144820108443487LLU;
	uint64_t t38 = 51345980144LLU;

    t38 = (x189+((x190/x191)*x192));

    if (t38 != 159144820108443487LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x193 = -4;
	int8_t x194 = -1;
	volatile int64_t x195 = INT64_MIN;
	static volatile int64_t x196 = INT64_MIN;
	volatile int64_t t39 = 276605590492LL;

    t39 = (x193+((x194/x195)*x196));

    if (t39 != -4LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x197 = 32678U;
	uint16_t x200 = 270U;

    t40 = (x197+((x198/x199)*x200));

    if (t40 != 41858) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x201 = 2;
	volatile int64_t x202 = -1489LL;
	static int16_t x203 = -14;
	volatile uint16_t x204 = 23825U;
	int64_t t41 = -16195LL;

    t41 = (x201+((x202/x203)*x204));

    if (t41 != 2525452LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x205 = 0;
	int16_t x206 = 27;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t42 = 805764379;

    t42 = (x205+((x206/x207)*x208));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = INT16_MAX;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t43 = -1117708545308802LL;

    t43 = (x213+((x214/x215)*x216));

    if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	uint64_t x218 = UINT64_MAX;
	uint64_t x220 = 417299LLU;

    t44 = (x217+((x218/x219)*x220));

    if (t44 != 3210783382782931478LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t45 = 11534LLU;

    t45 = (x221+((x222/x223)*x224));

    if (t45 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t46 = -52681;

    t46 = (x225+((x226/x227)*x228));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = INT8_MAX;
	static int32_t x230 = INT32_MAX;
	static uint32_t x232 = UINT32_MAX;
	volatile uint32_t t47 = 4073489U;

    t47 = (x229+((x230/x231)*x232));

    if (t47 != 8590061U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x233 = INT16_MIN;
	uint64_t x234 = 902902LLU;
	int64_t x235 = INT64_MAX;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t48 = 1435979741300454626LLU;

    t48 = (x233+((x234/x235)*x236));

    if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x238 = -620167926LL;
	volatile int32_t x239 = INT32_MAX;

    t49 = (x237+((x238/x239)*x240));

    if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x241 = INT32_MIN;
	int64_t x243 = 4745LL;
	volatile uint64_t t50 = 9805LLU;

    t50 = (x241+((x242/x243)*x244));

    if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = -11;
	static uint32_t x247 = 428976397U;
	volatile uint16_t x248 = 3800U;
	uint32_t t51 = 103U;

    t51 = (x245+((x246/x247)*x248));

    if (t51 != 4294967285U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = -2;
	volatile uint8_t x250 = 21U;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -3387253;
	static int32_t t52 = -144220;

    t52 = (x249+((x250/x251)*x252));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = -947681164;
	static uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MAX;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t53 = 1788854LLU;

    t53 = (x257+((x258/x259)*x260));

    if (t53 != 18446744064171935856LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x261 = 116587;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = INT16_MIN;
	volatile int64_t t54 = 1048LL;

    t54 = (x261+((x262/x263)*x264));

    if (t54 != 116587LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x265 = -11;
	static int16_t x268 = INT16_MAX;
	volatile int32_t t55 = -460;

    t55 = (x265+((x266/x267)*x268));

    if (t55 != -11) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x269 = 12;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 64U;
	static int32_t t56 = -319483713;

    t56 = (x269+((x270/x271)*x272));

    if (t56 != 872415244) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x273 = 103U;
	int64_t x274 = 1397LL;
	int8_t x275 = -4;
	volatile int64_t t57 = -463074LL;

    t57 = (x273+((x274/x275)*x276));

    if (t57 != -44220LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x285 = 0;
	uint64_t x288 = 139700632799636LLU;
	uint64_t t58 = 0LLU;

    t58 = (x285+((x286/x287)*x288));

    if (t58 != 18446604373076751980LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x289 = INT16_MAX;
	static volatile uint16_t x290 = 43U;
	uint32_t x292 = 6U;

    t59 = (x289+((x290/x291)*x292));

    if (t59 != 32773U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 9138458LLU;
	int64_t x295 = INT64_MIN;
	static uint64_t t60 = 0LLU;

    t60 = (x293+((x294/x295)*x296));

    if (t60 != 4294967295LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x297 = INT64_MIN;
	static int64_t x298 = -1LL;
	int64_t x300 = INT64_MAX;

    t61 = (x297+((x298/x299)*x300));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x302 = 1U;
	volatile int64_t t62 = INT64_MIN;

    t62 = (x301+((x302/x303)*x304));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x305 = 747808284;
	volatile int16_t x306 = 0;
	int8_t x307 = -10;
	static int16_t x308 = 10;
	static int32_t t63 = -18;

    t63 = (x305+((x306/x307)*x308));

    if (t63 != 747808284) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x310 = INT16_MAX;
	uint16_t x312 = UINT16_MAX;
	uint32_t t64 = 1U;

    t64 = (x309+((x310/x311)*x312));

    if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int64_t x315 = 12468238891440LL;
	int64_t x316 = INT64_MAX;
	volatile int64_t t65 = -105163673LL;

    t65 = (x313+((x314/x315)*x316));

    if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x317 = 17448076LL;
	int32_t x320 = INT32_MIN;
	uint64_t t66 = 1272LLU;

    t66 = (x317+((x318/x319)*x320));

    if (t66 != 17448076LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x321 = 37U;
	uint64_t x322 = 2219823192093632LLU;
	int8_t x323 = INT8_MAX;
	static int32_t x324 = INT32_MIN;
	volatile uint64_t t67 = 7501588508153LLU;

    t67 = (x321+((x322/x323)*x324));

    if (t67 != 3423351636586659877LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x325 = -256;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	volatile int64_t t68 = 4071665706962424LL;

    t68 = (x325+((x326/x327)*x328));

    if (t68 != 281483566907144LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x329 = -1;
	int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t69 = -9010711;

    t69 = (x329+((x330/x331)*x332));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x333 = INT16_MIN;
	static volatile uint16_t x334 = UINT16_MAX;
	uint32_t x335 = UINT32_MAX;
	static int32_t x336 = -1;
	static volatile uint32_t t70 = 25U;

    t70 = (x333+((x334/x335)*x336));

    if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = INT64_MIN;
	uint16_t x338 = 79U;
	uint8_t x339 = UINT8_MAX;
	int64_t t71 = INT64_MIN;

    t71 = (x337+((x338/x339)*x340));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	static int16_t x343 = INT16_MIN;
	volatile int64_t t72 = INT64_MAX;

    t72 = (x341+((x342/x343)*x344));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	volatile int32_t t73 = 195413;

    t73 = (x345+((x346/x347)*x348));

    if (t73 != -112) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x357 = 1;
	volatile int32_t x358 = -135;
	int32_t x359 = INT32_MAX;
	static volatile int32_t t74 = 0;

    t74 = (x357+((x358/x359)*x360));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x365 = 81398381;
	uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 20125981LLU;
	volatile uint16_t x368 = 233U;

    t75 = (x365+((x366/x367)*x368));

    if (t75 != 213559428849459LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x369 = 1U;
	int64_t x370 = -1LL;
	int8_t x371 = -8;
	int64_t t76 = -1673471LL;

    t76 = (x369+((x370/x371)*x372));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x373 = -273784481693719LL;
	int8_t x374 = -1;
	uint16_t x375 = 785U;
	int32_t x376 = INT32_MIN;
	static int64_t t77 = -543833457069573LL;

    t77 = (x373+((x374/x375)*x376));

    if (t77 != -273784481693719LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x378 = 9;
	int8_t x379 = INT8_MIN;
	int64_t t78 = INT64_MAX;

    t78 = (x377+((x378/x379)*x380));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x381 = 499;
	int8_t x382 = -45;
	uint32_t x383 = 182832495U;
	int32_t x384 = 4293918;

    t79 = (x381+((x382/x383)*x384));

    if (t79 != 98760613U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x389 = 6607U;
	uint64_t x390 = 3198923542LLU;
	static int32_t x392 = INT32_MAX;
	static uint64_t t80 = 987LLU;

    t80 = (x389+((x390/x391)*x392));

    if (t80 != 104822971783971LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	static int16_t x395 = INT16_MIN;
	uint8_t x396 = 0U;
	volatile int32_t t81 = -293581;

    t81 = (x393+((x394/x395)*x396));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MIN;
	static volatile int64_t t82 = 152565748LL;

    t82 = (x397+((x398/x399)*x400));

    if (t82 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x401 = INT32_MIN;
	uint64_t x402 = 8636032344LLU;
	volatile int32_t x403 = -67;
	int16_t x404 = -13193;
	volatile uint64_t t83 = 3500861843851095909LLU;

    t83 = (x401+((x402/x403)*x404));

    if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x405 = INT64_MIN;
	int64_t x406 = -42424LL;
	volatile int32_t x407 = INT32_MAX;
	int64_t x408 = 1783760481459LL;

    t84 = (x405+((x406/x407)*x408));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x411 = INT8_MAX;

    t85 = (x409+((x410/x411)*x412));

    if (t85 != 11524937309335629LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x413 = INT16_MAX;
	volatile uint64_t x414 = 4625949239937LLU;
	int8_t x415 = INT8_MAX;
	static int32_t x416 = 237312944;
	volatile uint64_t t86 = 1609828021601898738LLU;

    t86 = (x413+((x414/x415)*x416));

    if (t86 != 8644075849591723583LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x421 = 92310LLU;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	int32_t x424 = -1;

    t87 = (x421+((x422/x423)*x424));

    if (t87 != 92309LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x425 = INT64_MIN;
	int16_t x427 = -1;
	int64_t x428 = -1LL;

    t88 = (x425+((x426/x427)*x428));

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x429 = 0;
	static uint32_t t89 = 3885025U;

    t89 = (x429+((x430/x431)*x432));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MIN;
	static int64_t x435 = -1611712LL;
	uint16_t x436 = 3U;

    t90 = (x433+((x434/x435)*x436));

    if (t90 != -9223372036854771812LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x441 = -1;
	static int32_t x443 = 1586;
	volatile int32_t x444 = -435007754;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (x441+((x442/x443)*x444));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile int8_t x446 = -26;
	int64_t x447 = -1LL;
	static int32_t x448 = INT32_MIN;
	int64_t t92 = -3530792348716LL;

    t92 = (x445+((x446/x447)*x448));

    if (t92 != -55834574593LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x450 = -1;
	volatile uint64_t x451 = UINT64_MAX;
	static uint16_t x452 = 32326U;
	volatile uint64_t t93 = 36460LLU;

    t93 = (x449+((x450/x451)*x452));

    if (t93 != 32198LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x453 = INT8_MIN;
	static uint16_t x454 = 5744U;
	int16_t x455 = -1;
	uint64_t x456 = 60611241134373LLU;

    t94 = (x453+((x454/x455)*x456));

    if (t94 != 18098593104633712976LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x457 = 23U;
	int16_t x458 = INT16_MIN;
	uint8_t x459 = 22U;
	static int8_t x460 = -8;
	static volatile int32_t t95 = 65464154;

    t95 = (x457+((x458/x459)*x460));

    if (t95 != 11935) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x461 = 0U;
	int64_t x462 = -1LL;
	static int64_t x463 = 127814482798833139LL;
	int64_t x464 = 680479LL;
	volatile int64_t t96 = 6495491LL;

    t96 = (x461+((x462/x463)*x464));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x466 = UINT8_MAX;
	uint64_t x467 = 11152LLU;
	int8_t x468 = -1;
	volatile uint64_t t97 = 574407846381429162LLU;

    t97 = (x465+((x466/x467)*x468));

    if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x469 = INT64_MIN;
	int8_t x470 = 17;
	volatile int16_t x471 = -206;
	int32_t x472 = -1;
	volatile int64_t t98 = INT64_MIN;

    t98 = (x469+((x470/x471)*x472));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x474 = 6U;
	static int16_t x476 = INT16_MIN;
	int64_t t99 = INT64_MIN;

    t99 = (x473+((x474/x475)*x476));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x477 = INT32_MIN;
	volatile uint64_t x478 = 142246857970LLU;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = -1;

    t100 = (x477+((x478/x479)*x480));

    if (t100 != 18446744071559897421LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x483 = -1;
	int8_t x484 = INT8_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = (x481+((x482/x483)*x484));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 92U;
	volatile int8_t x488 = -1;
	uint32_t t102 = 669809U;

    t102 = (x485+((x486/x487)*x488));

    if (t102 != 23342212U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x489 = -1;
	int32_t x490 = -2140244;
	uint32_t x491 = 1581164330U;
	volatile uint32_t t103 = 16578096U;

    t103 = (x489+((x490/x491)*x492));

    if (t103 != 4294967293U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x494 = -1;
	int64_t x495 = 20438216006279548LL;
	static int16_t x496 = INT16_MIN;
	int64_t t104 = -117472432LL;

    t104 = (x493+((x494/x495)*x496));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x497 = UINT8_MAX;
	static int16_t x498 = -1;
	volatile int64_t t105 = 1LL;

    t105 = (x497+((x498/x499)*x500));

    if (t105 != 238LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x502 = INT32_MIN;
	volatile int8_t x504 = INT8_MAX;
	volatile int64_t t106 = 18LL;

    t106 = (x501+((x502/x503)*x504));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MAX;
	int8_t x511 = -1;
	uint32_t x512 = 1775480U;
	volatile uint32_t t107 = 3U;

    t107 = (x509+((x510/x511)*x512));

    if (t107 != 1775607U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x513 = -41169944;
	int32_t x514 = INT32_MIN;
	uint64_t x516 = 68062682080LLU;
	uint64_t t108 = 2783695649LLU;

    t108 = (x513+((x514/x515)*x516));

    if (t108 != 18444513795701984232LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x517 = 1U;
	int8_t x518 = INT8_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t109 = -1691543;

    t109 = (x517+((x518/x519)*x520));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x521 = INT16_MIN;
	uint16_t x522 = 434U;
	uint64_t t110 = 3914381928913LLU;

    t110 = (x521+((x522/x523)*x524));

    if (t110 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = INT16_MIN;
	uint8_t x530 = 88U;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = 595233190U;
	uint32_t t111 = 13U;

    t111 = (x529+((x530/x531)*x532));

    if (t111 != 4294934528U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x534 = 0U;
	volatile int64_t x535 = INT64_MAX;
	static volatile uint64_t x536 = 3LLU;
	uint64_t t112 = UINT64_MAX;

    t112 = (x533+((x534/x535)*x536));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x537 = UINT16_MAX;
	int8_t x538 = 53;
	int8_t x539 = INT8_MIN;
	int64_t x540 = 31556085597887LL;
	int64_t t113 = 2365639LL;

    t113 = (x537+((x538/x539)*x540));

    if (t113 != 65535LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x541 = 42;
	int16_t x543 = INT16_MIN;
	static uint32_t t114 = 141498U;

    t114 = (x541+((x542/x543)*x544));

    if (t114 != 42U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x545 = 53079;
	uint64_t x546 = 534658515LLU;
	int8_t x548 = INT8_MIN;
	volatile uint64_t t115 = 46497399704LLU;

    t115 = (x545+((x546/x547)*x548));

    if (t115 != 53079LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x551 = 1213U;
	static volatile uint64_t t116 = 24218554LLU;

    t116 = (x549+((x550/x551)*x552));

    if (t116 != 18446744061048815655LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x553 = 1;
	int8_t x554 = 3;
	int64_t x555 = -1LL;
	int64_t x556 = -398224109LL;
	volatile int64_t t117 = -29654216LL;

    t117 = (x553+((x554/x555)*x556));

    if (t117 != 1194672328LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x557 = INT16_MAX;
	static int32_t x558 = 0;
	int16_t x559 = -1;
	static int64_t x560 = -3739568581428544882LL;
	volatile int64_t t118 = 62795LL;

    t118 = (x557+((x558/x559)*x560));

    if (t118 != 32767LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x561 = 1;
	int64_t x562 = INT64_MIN;
	volatile uint16_t x563 = UINT16_MAX;
	static int32_t x564 = -1;
	volatile int64_t t119 = -143457689851414679LL;

    t119 = (x561+((x562/x563)*x564));

    if (t119 != 140739635871745LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x565 = 1;
	static uint8_t x566 = 33U;
	int32_t x568 = 1013285;

    t120 = (x565+((x566/x567)*x568));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x573 = -1825875;
	int32_t x574 = INT32_MIN;
	int32_t x575 = INT32_MIN;
	int16_t x576 = INT16_MIN;
	int32_t t121 = 3355991;

    t121 = (x573+((x574/x575)*x576));

    if (t121 != -1858643) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x577 = -1;
	volatile int32_t x578 = INT32_MIN;
	uint32_t x579 = UINT32_MAX;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = (x577+((x578/x579)*x580));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x581 = -1;
	uint64_t x582 = 41162018861562LLU;
	int64_t x583 = -1LL;
	uint32_t x584 = UINT32_MAX;
	volatile uint64_t t123 = UINT64_MAX;

    t123 = (x581+((x582/x583)*x584));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x585 = 3444;
	static int16_t x586 = INT16_MAX;
	static int32_t x587 = INT32_MIN;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t124 = 6593;

    t124 = (x585+((x586/x587)*x588));

    if (t124 != 3444) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x589 = 115009721U;
	volatile uint8_t x592 = 1U;

    t125 = (x589+((x590/x591)*x592));

    if (t125 != 115009721U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x594 = -242841727871LL;
	uint16_t x595 = 1405U;
	volatile int8_t x596 = INT8_MAX;
	int64_t t126 = 1135999LL;

    t126 = (x593+((x594/x595)*x596));

    if (t126 != -21950818048LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x601 = INT16_MIN;
	static int64_t x602 = -34041789212LL;
	int32_t x603 = 7325116;
	uint16_t x604 = 17U;
	int64_t t127 = 1719194793LL;

    t127 = (x601+((x602/x603)*x604));

    if (t127 != -111767LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x605 = INT8_MAX;
	uint32_t x606 = UINT32_MAX;
	static volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t128 = 5452U;

    t128 = (x605+((x606/x607)*x608));

    if (t128 != 126U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x610 = 12U;
	uint64_t x611 = 47922181406LLU;
	static int16_t x612 = -1;
	volatile uint64_t t129 = 158837714738685LLU;

    t129 = (x609+((x610/x611)*x612));

    if (t129 != 142178LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x613 = 107U;
	uint32_t x614 = 31828U;
	static int64_t x616 = 1533871731LL;
	volatile int64_t t130 = 24004277LL;

    t130 = (x613+((x614/x615)*x616));

    if (t130 != 107LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x617 = 21276955591LLU;
	uint8_t x618 = UINT8_MAX;
	volatile uint64_t t131 = 6040238557720165LLU;

    t131 = (x617+((x618/x619)*x620));

    if (t131 != 19551068895LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x623 = -37;
	static uint64_t t132 = 4845LLU;

    t132 = (x621+((x622/x623)*x624));

    if (t132 != 7LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x633 = INT16_MAX;
	int16_t x634 = -1;
	volatile uint8_t x635 = 3U;
	static uint8_t x636 = 19U;
	volatile int32_t t133 = -21080;

    t133 = (x633+((x634/x635)*x636));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x641 = INT32_MIN;
	static volatile uint32_t x643 = UINT32_MAX;
	volatile int16_t x644 = -1;

    t134 = (x641+((x642/x643)*x644));

    if (t134 != -4294967296LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x650 = INT8_MAX;
	uint64_t t135 = 686LLU;

    t135 = (x649+((x650/x651)*x652));

    if (t135 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x653 = INT64_MIN;
	uint32_t x654 = UINT32_MAX;
	static volatile int64_t x655 = INT64_MIN;
	uint32_t x656 = 1488335676U;
	int64_t t136 = INT64_MIN;

    t136 = (x653+((x654/x655)*x656));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x658 = -63;
	int8_t x660 = 11;
	static volatile uint64_t t137 = 353LLU;

    t137 = (x657+((x658/x659)*x660));

    if (t137 != 436LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x661 = 218U;
	int16_t x662 = INT16_MAX;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = 1U;
	volatile int64_t t138 = -4179373775LL;

    t138 = (x661+((x662/x663)*x664));

    if (t138 != 218LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x666 = UINT64_MAX;
	volatile int64_t x667 = INT64_MIN;
	int32_t x668 = INT32_MAX;
	uint64_t t139 = UINT64_MAX;

    t139 = (x665+((x666/x667)*x668));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x669 = 84U;
	uint8_t x670 = 0U;
	static int16_t x671 = INT16_MIN;
	int32_t t140 = -1685;

    t140 = (x669+((x670/x671)*x672));

    if (t140 != 84) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x673 = 507469094LL;
	volatile uint8_t x674 = 41U;
	int32_t x675 = -1;
	uint32_t x676 = 868715U;

    t141 = (x673+((x674/x675)*x676));

    if (t141 != 4766819075LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x678 = 24U;
	volatile uint32_t x679 = 15599U;
	uint16_t x680 = 2U;
	volatile int64_t t142 = INT64_MIN;

    t142 = (x677+((x678/x679)*x680));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x681 = INT32_MAX;
	uint32_t x682 = 1307006U;
	int16_t x683 = -13;
	static uint32_t t143 = 719461U;

    t143 = (x681+((x682/x683)*x684));

    if (t143 != 2147483647U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x685 = INT32_MIN;
	static volatile int8_t x686 = INT8_MIN;
	int32_t x688 = INT32_MAX;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x685+((x686/x687)*x688));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x689 = 155U;
	static int32_t x690 = 4;
	volatile uint8_t x691 = 3U;
	int64_t x692 = INT64_MIN;

    t145 = (x689+((x690/x691)*x692));

    if (t145 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = 117U;

    t146 = (x693+((x694/x695)*x696));

    if (t146 != 4294967293U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x701 = -1LL;
	static int16_t x702 = 402;
	volatile uint16_t x703 = 13394U;
	int64_t x704 = -8315934LL;

    t147 = (x701+((x702/x703)*x704));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x705 = 11;
	int16_t x706 = INT16_MIN;
	int8_t x707 = INT8_MAX;
	int8_t x708 = -3;
	int32_t t148 = 284;

    t148 = (x705+((x706/x707)*x708));

    if (t148 != 785) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x709 = INT8_MIN;
	int64_t x711 = -3096290000764603LL;
	static uint32_t x712 = UINT32_MAX;
	int64_t t149 = -519277549376LL;

    t149 = (x709+((x710/x711)*x712));

    if (t149 != -128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x713 = INT8_MIN;
	volatile int8_t x714 = 19;
	int64_t x716 = -1LL;

    t150 = (x713+((x714/x715)*x716));

    if (t150 != -128LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x717 = INT8_MIN;
	uint64_t x718 = 146995LLU;
	int16_t x719 = INT16_MIN;
	volatile int32_t x720 = -1;

    t151 = (x717+((x718/x719)*x720));

    if (t151 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = -1;
	int16_t x723 = INT16_MAX;
	uint8_t x724 = 15U;
	uint32_t t152 = UINT32_MAX;

    t152 = (x721+((x722/x723)*x724));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x725 = -1;
	static int16_t x726 = -1;
	uint8_t x727 = 2U;
	int8_t x728 = INT8_MAX;
	int32_t t153 = -9971033;

    t153 = (x725+((x726/x727)*x728));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x730 = 4177U;
	volatile uint8_t x732 = UINT8_MAX;

    t154 = (x729+((x730/x731)*x732));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x734 = -52;
	static uint64_t x735 = UINT64_MAX;
	uint32_t x736 = UINT32_MAX;
	volatile uint64_t t155 = 220432395465919129LLU;

    t155 = (x733+((x734/x735)*x736));

    if (t155 != 15LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x737 = -50;
	static int16_t x738 = 25;
	int64_t x739 = INT64_MIN;
	uint64_t x740 = 95317211LLU;
	uint64_t t156 = 808646488791917551LLU;

    t156 = (x737+((x738/x739)*x740));

    if (t156 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x741 = 1U;
	uint8_t x742 = 5U;
	volatile int32_t x743 = INT32_MIN;
	int32_t t157 = 53021615;

    t157 = (x741+((x742/x743)*x744));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x745 = INT64_MAX;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 88U;

    t158 = (x745+((x746/x747)*x748));

    if (t158 != 9223372036854775719LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x749 = INT16_MAX;
	uint64_t x751 = UINT64_MAX;
	uint16_t x752 = 29128U;
	static volatile uint64_t t159 = 7388235369357330LLU;

    t159 = (x749+((x750/x751)*x752));

    if (t159 != 32767LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x753 = UINT64_MAX;
	int64_t x755 = -1LL;
	int16_t x756 = INT16_MIN;
	uint64_t t160 = 1142420584561197LLU;

    t160 = (x753+((x754/x755)*x756));

    if (t160 != 18446744072635809791LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x761 = -1;
	uint32_t x762 = 47546831U;
	static uint8_t x763 = 20U;
	int8_t x764 = 28;
	uint32_t t161 = 2589149U;

    t161 = (x761+((x762/x763)*x764));

    if (t161 != 66565547U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x765 = UINT8_MAX;
	uint64_t x766 = UINT64_MAX;
	int32_t x768 = -1;

    t162 = (x765+((x766/x767)*x768));

    if (t162 != 18239477286364500730LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x769 = UINT32_MAX;
	volatile uint32_t x770 = 873U;
	int64_t x771 = -1LL;
	int64_t x772 = -1LL;
	int64_t t163 = 3LL;

    t163 = (x769+((x770/x771)*x772));

    if (t163 != 4294968168LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x777 = INT8_MIN;
	volatile int32_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	uint64_t x780 = 4LLU;
	volatile uint64_t t164 = 2018199143086LLU;

    t164 = (x777+((x778/x779)*x780));

    if (t164 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x782 = -3197;
	int64_t x783 = INT64_MIN;
	int8_t x784 = INT8_MIN;
	volatile int64_t t165 = -48334072595177LL;

    t165 = (x781+((x782/x783)*x784));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x785 = -1;
	uint32_t x788 = 3120539U;
	static volatile uint32_t t166 = 8047310U;

    t166 = (x785+((x786/x787)*x788));

    if (t166 != 2600468479U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x789 = INT32_MIN;
	volatile int8_t x790 = -1;
	volatile int32_t x791 = -25;
	uint64_t x792 = UINT64_MAX;
	uint64_t t167 = 70848LLU;

    t167 = (x789+((x790/x791)*x792));

    if (t167 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x793 = 11183149958910683LLU;
	int8_t x794 = INT8_MIN;
	volatile int16_t x795 = INT16_MIN;
	int32_t x796 = INT32_MIN;
	uint64_t t168 = 32646657489LLU;

    t168 = (x793+((x794/x795)*x796));

    if (t168 != 11183149958910683LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x797 = INT8_MIN;
	int8_t x798 = INT8_MIN;
	uint32_t x800 = UINT32_MAX;
	volatile uint32_t t169 = 207123854U;

    t169 = (x797+((x798/x799)*x800));

    if (t169 != 4294967168U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x805 = 629788940LL;
	uint8_t x806 = UINT8_MAX;
	int64_t x808 = 9LL;

    t170 = (x805+((x806/x807)*x808));

    if (t170 != 629788940LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x809 = UINT32_MAX;
	uint64_t x810 = 20LLU;
	volatile int8_t x811 = -1;
	static volatile int16_t x812 = -1;
	static uint64_t t171 = 223214784176LLU;

    t171 = (x809+((x810/x811)*x812));

    if (t171 != 4294967295LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x822 = INT8_MIN;
	volatile int64_t x823 = -1LL;
	int32_t x824 = 54132110;
	int64_t t172 = -14497LL;

    t172 = (x821+((x822/x823)*x824));

    if (t172 != 6928910335LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x831 = UINT32_MAX;
	int64_t x832 = INT64_MIN;

    t173 = (x829+((x830/x831)*x832));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x834 = -1;
	static int8_t x835 = INT8_MAX;
	int32_t x836 = INT32_MIN;
	volatile uint64_t t174 = UINT64_MAX;

    t174 = (x833+((x834/x835)*x836));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x838 = -1;
	int8_t x840 = -1;
	uint64_t t175 = 157LLU;

    t175 = (x837+((x838/x839)*x840));

    if (t175 != 16769767339735956093LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x841 = 18361LLU;
	uint8_t x842 = 2U;
	int16_t x843 = INT16_MIN;
	uint32_t x844 = 807425947U;

    t176 = (x841+((x842/x843)*x844));

    if (t176 != 18361LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x846 = INT32_MIN;
	uint8_t x847 = 37U;
	int16_t x848 = -1;
	int32_t t177 = -8722;

    t177 = (x845+((x846/x847)*x848));

    if (t177 != 58040129) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x849 = 16005U;
	volatile int16_t x850 = -1;
	static uint16_t x851 = UINT16_MAX;
	uint16_t x852 = UINT16_MAX;
	volatile int32_t t178 = -436706539;

    t178 = (x849+((x850/x851)*x852));

    if (t178 != 16005) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x858 = INT32_MIN;
	uint32_t x859 = UINT32_MAX;
	int64_t t179 = -683LL;

    t179 = (x857+((x858/x859)*x860));

    if (t179 != -15958LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x865 = INT64_MIN;
	int32_t x866 = -3775;
	uint8_t x867 = UINT8_MAX;
	int16_t x868 = INT16_MIN;

    t180 = (x865+((x866/x867)*x868));

    if (t180 != -9223372036854317056LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x869 = 63151060LLU;
	static int64_t x870 = INT64_MAX;
	int8_t x872 = INT8_MAX;
	uint64_t t181 = 307805LLU;

    t181 = (x869+((x870/x871)*x872));

    if (t181 != 17873933818862548LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x878 = 4U;
	int16_t x879 = INT16_MIN;
	static volatile int32_t t182 = INT32_MIN;

    t182 = (x877+((x878/x879)*x880));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x881 = -1;
	int64_t x882 = -1LL;
	static uint16_t x883 = 7U;
	int16_t x884 = -1;
	int64_t t183 = -3391112LL;

    t183 = (x881+((x882/x883)*x884));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x885 = 8;
	int8_t x888 = 3;
	static volatile int64_t t184 = -923578304LL;

    t184 = (x885+((x886/x887)*x888));

    if (t184 != -402628LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x889 = -13484644633LL;
	int8_t x890 = -1;
	int64_t x891 = INT64_MIN;
	volatile uint16_t x892 = UINT16_MAX;

    t185 = (x889+((x890/x891)*x892));

    if (t185 != -13484644633LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x893 = INT8_MIN;
	uint32_t x896 = 4603772U;
	uint32_t t186 = 3385644U;

    t186 = (x893+((x894/x895)*x896));

    if (t186 != 82867768U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x901 = 3048525262LLU;
	int32_t x902 = -1;
	uint8_t x903 = UINT8_MAX;
	volatile uint64_t t187 = 1702475719555779933LLU;

    t187 = (x901+((x902/x903)*x904));

    if (t187 != 3048525262LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x905 = 1760574U;
	uint64_t x908 = 3284291201LLU;
	volatile uint64_t t188 = 4267687LLU;

    t188 = (x905+((x906/x907)*x908));

    if (t188 != 1760574LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x909 = 97282LL;
	volatile int16_t x910 = INT16_MAX;
	volatile uint32_t x911 = 14U;
	int8_t x912 = -14;
	int64_t t189 = -8431895585539007LL;

    t189 = (x909+((x910/x911)*x912));

    if (t189 != 4295031818LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x913 = -1;
	int32_t x915 = 1;
	static volatile int32_t x916 = -1;
	volatile int32_t t190 = -23806;

    t190 = (x913+((x914/x915)*x916));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x917 = INT64_MAX;
	static uint16_t x918 = UINT16_MAX;
	static uint64_t x920 = 42802LLU;
	static uint64_t t191 = 5853LLU;

    t191 = (x917+((x918/x919)*x920));

    if (t191 != 9223372034049746737LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x921 = -1LL;
	uint64_t x923 = UINT64_MAX;
	static int8_t x924 = INT8_MIN;
	uint64_t t192 = UINT64_MAX;

    t192 = (x921+((x922/x923)*x924));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x925 = 16;
	uint32_t x926 = 359U;
	volatile int16_t x928 = INT16_MIN;

    t193 = (x925+((x926/x927)*x928));

    if (t193 != 4294934544U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x929 = 1777U;
	int32_t x930 = INT32_MIN;
	int32_t x931 = 49606597;
	int16_t x932 = INT16_MIN;
	volatile int32_t t194 = -1010754;

    t194 = (x929+((x930/x931)*x932));

    if (t194 != 1410801) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x937 = INT32_MIN;
	uint64_t x938 = 0LLU;
	int32_t x939 = INT32_MIN;
	int8_t x940 = INT8_MAX;
	uint64_t t195 = 8LLU;

    t195 = (x937+((x938/x939)*x940));

    if (t195 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x942 = 10652245453720LLU;
	volatile int32_t x943 = INT32_MIN;
	uint8_t x944 = 38U;

    t196 = (x941+((x942/x943)*x944));

    if (t196 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x945 = 290;
	uint64_t x946 = 927026967636LLU;
	int32_t x947 = -1;
	int64_t x948 = 95305LL;
	volatile uint64_t t197 = 12083519047989610LLU;

    t197 = (x945+((x946/x947)*x948));

    if (t197 != 290LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x949 = 44U;
	static uint16_t x950 = UINT16_MAX;
	uint32_t t198 = 7528430U;

    t198 = (x949+((x950/x951)*x952));

    if (t198 != 44U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x953 = INT16_MIN;
	volatile uint64_t x954 = 344795793470253LLU;
	uint64_t x955 = 12920638515151LLU;
	uint16_t x956 = UINT16_MAX;
	volatile uint64_t t199 = 140LLU;

    t199 = (x953+((x954/x955)*x956));

    if (t199 != 1671142LLU) { NG(); } else { ; }
	
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

