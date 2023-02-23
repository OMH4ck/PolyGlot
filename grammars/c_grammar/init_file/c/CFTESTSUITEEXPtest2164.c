
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

int64_t x4 = INT64_MIN;
int8_t x10 = INT8_MAX;
uint64_t x14 = 12351380411857586LLU;
uint8_t x20 = 0U;
uint16_t x27 = 25U;
static int32_t x31 = INT32_MAX;
volatile int32_t t7 = 30002;
static int64_t x33 = INT64_MIN;
int16_t x34 = INT16_MIN;
int16_t x35 = 7;
int32_t t8 = -53544330;
uint8_t x38 = UINT8_MAX;
int16_t x43 = INT16_MAX;
static volatile int16_t x50 = INT16_MIN;
int16_t x52 = -1;
static volatile uint16_t x54 = UINT16_MAX;
uint32_t x57 = 3689951U;
static int8_t x64 = 5;
volatile int32_t t15 = 21542;
int64_t x71 = INT64_MIN;
int8_t x72 = 15;
volatile uint64_t x74 = 265396680618LLU;
uint16_t x75 = 22U;
volatile int64_t x77 = INT64_MIN;
volatile int32_t t19 = 51980874;
int64_t x85 = -1LL;
volatile int64_t x86 = -16049717563150LL;
int8_t x87 = 1;
uint8_t x88 = 23U;
uint8_t x91 = 45U;
int16_t x92 = INT16_MIN;
uint32_t x96 = UINT32_MAX;
int32_t t23 = 931178603;
static int32_t t24 = -127;
uint16_t x101 = 3U;
volatile int32_t t27 = 451783;
int64_t x120 = 170LL;
volatile int32_t t28 = 56;
uint64_t x124 = UINT64_MAX;
uint32_t x129 = 6154U;
int32_t x133 = 437;
int8_t x139 = INT8_MAX;
volatile int32_t t33 = -105;
static uint8_t x150 = 71U;
volatile int8_t x152 = 11;
int32_t x153 = -31;
static uint16_t x180 = 1U;
int32_t t43 = -3;
int8_t x188 = INT8_MIN;
static volatile int32_t t46 = 13;
int16_t x194 = -135;
volatile int8_t x195 = -1;
int32_t t47 = 1;
int64_t x223 = -1LL;
uint16_t x227 = UINT16_MAX;
volatile int16_t x235 = INT16_MIN;
int16_t x238 = 17;
int32_t x239 = INT32_MIN;
int64_t x242 = INT64_MAX;
uint8_t x243 = UINT8_MAX;
int32_t t59 = -3261619;
static uint8_t x253 = 52U;
static int32_t x256 = INT32_MIN;
static volatile int32_t t63 = -705;
static uint16_t x268 = 135U;
int32_t x279 = INT32_MAX;
int16_t x280 = INT16_MAX;
volatile int32_t t67 = 28607760;
volatile int16_t x286 = 7;
volatile int32_t t69 = 1372;
uint8_t x289 = 2U;
int32_t x296 = 231;
volatile int32_t t71 = -30567471;
static int16_t x299 = -1;
volatile int8_t x300 = INT8_MIN;
int32_t x305 = -939489;
int16_t x316 = 30;
volatile int32_t x319 = INT32_MIN;
volatile int8_t x326 = -3;
volatile int32_t x334 = -2980112;
static volatile uint64_t x335 = UINT64_MAX;
static volatile int8_t x339 = 1;
int64_t x340 = 0LL;
uint8_t x341 = 5U;
int8_t x342 = INT8_MIN;
static int64_t x348 = INT64_MIN;
uint8_t x351 = UINT8_MAX;
uint32_t x358 = 1U;
int8_t x362 = -1;
int32_t t87 = 34;
static volatile int16_t x365 = INT16_MAX;
volatile uint64_t x367 = 231167253324073051LLU;
int8_t x369 = INT8_MIN;
uint32_t x370 = 246792843U;
int32_t x373 = -1;
uint64_t x380 = UINT64_MAX;
static volatile int8_t x386 = -10;
volatile int32_t t93 = 56;
int64_t x394 = -33LL;
static uint8_t x397 = UINT8_MAX;
int32_t t98 = 449045349;
volatile uint8_t x421 = 1U;
int64_t x422 = INT64_MIN;
int32_t x425 = -3169170;
int64_t x433 = INT64_MIN;
static int8_t x434 = 3;
static volatile int32_t t103 = 6054;
uint16_t x438 = 3502U;
int32_t x440 = 45507700;
int32_t x443 = INT32_MIN;
volatile int32_t t105 = 8;
static uint16_t x446 = 942U;
int16_t x448 = -1;
static uint16_t x453 = UINT16_MAX;
volatile uint8_t x454 = 1U;
static int64_t x457 = INT64_MIN;
static int32_t x466 = INT32_MIN;
uint64_t x468 = 150LLU;
int64_t x469 = INT64_MIN;
int64_t x474 = -1LL;
static uint16_t x476 = UINT16_MAX;
volatile int32_t x482 = INT32_MIN;
int8_t x487 = INT8_MIN;
int32_t t117 = -2;
uint32_t x497 = UINT32_MAX;
volatile int32_t t120 = 1;
volatile uint8_t x512 = UINT8_MAX;
int8_t x526 = 1;
uint32_t x539 = 62717770U;
static int32_t x540 = INT32_MIN;
static int32_t t127 = 109;
uint16_t x543 = UINT16_MAX;
volatile int32_t x544 = INT32_MIN;
volatile int64_t x551 = INT64_MIN;
int32_t t130 = -754184298;
uint8_t x553 = UINT8_MAX;
uint64_t x556 = 226274678527LLU;
int8_t x558 = INT8_MIN;
volatile int8_t x572 = INT8_MIN;
static int16_t x586 = -18;
static int32_t x588 = -66447374;
static int8_t x592 = INT8_MIN;
static int8_t x598 = INT8_MIN;
uint16_t x602 = 1U;
int64_t x603 = -1LL;
volatile int32_t t142 = 3824;
uint16_t x614 = UINT16_MAX;
int16_t x616 = -1;
int32_t x618 = INT32_MAX;
volatile int16_t x624 = 5503;
volatile uint16_t x625 = 9U;
volatile int16_t x626 = INT16_MIN;
int8_t x632 = 31;
int32_t x633 = -11;
volatile int64_t x637 = -8479125755673909LL;
int64_t x644 = -84LL;
volatile int8_t x655 = -1;
uint16_t x671 = 1171U;
int32_t x674 = -1;
volatile int32_t t158 = -13;
static int32_t x677 = INT32_MIN;
uint32_t x678 = 48170U;
int8_t x687 = INT8_MIN;
static int16_t x690 = -1;
static int8_t x691 = 47;
int64_t x698 = -3756344394LL;
int32_t x702 = INT32_MAX;
int32_t t165 = 4482;
volatile int64_t x709 = INT64_MIN;
int16_t x712 = 1;
int8_t x715 = 1;
uint32_t x717 = 28550531U;
int8_t x720 = -1;
int32_t x725 = -1;
volatile uint32_t x726 = UINT32_MAX;
int64_t x728 = 14982LL;
volatile int8_t x735 = INT8_MAX;
int32_t x740 = INT32_MIN;
uint64_t x743 = 948958991227206444LLU;
int64_t x744 = INT64_MIN;
uint16_t x746 = 84U;
int16_t x748 = -63;
static int64_t x753 = INT64_MIN;
uint8_t x754 = 63U;
uint64_t x764 = 853782LLU;
volatile int32_t t180 = 141175;
int64_t x765 = -1614275774937643LL;
static volatile uint32_t x768 = 2U;
volatile int32_t t181 = -11467;
static volatile int16_t x772 = INT16_MIN;
static uint16_t x781 = UINT16_MAX;
volatile int32_t t187 = -6;
uint64_t x793 = UINT64_MAX;
uint16_t x798 = 0U;
static volatile int8_t x808 = INT8_MIN;
int64_t x810 = -1LL;
int32_t t192 = 703;
int8_t x814 = -8;
int16_t x820 = INT16_MIN;
volatile uint8_t x829 = UINT8_MAX;
uint32_t x830 = UINT32_MAX;
int32_t t197 = 1;
int32_t t198 = 85817980;
static int16_t x837 = INT16_MAX;
uint32_t x839 = UINT32_MAX;
static volatile int32_t t199 = 42;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	volatile int16_t x3 = INT16_MAX;
	volatile int32_t t0 = 4;

    t0 = (x1==((x2&x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 13;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -5;

    t1 = (x5==((x6&x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = -406135721115LL;
	int32_t x11 = INT32_MAX;
	static uint16_t x12 = 6312U;
	static volatile int32_t t2 = 0;

    t2 = (x9==((x10&x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 21U;
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 797229840;

    t3 = (x13==((x14&x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 890U;
	uint64_t x18 = 198247165702093LLU;
	static uint8_t x19 = 127U;
	volatile int32_t t4 = 503419;

    t4 = (x17==((x18&x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static uint8_t x22 = 11U;
	volatile int64_t x23 = 1781070LL;
	static int64_t x24 = 2LL;
	volatile int32_t t5 = -106;

    t5 = (x21==((x22&x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -213664246;
	volatile int16_t x26 = -44;
	int16_t x28 = -5;
	int32_t t6 = -1053;

    t6 = (x25==((x26&x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static int8_t x30 = INT8_MIN;
	static int32_t x32 = INT32_MIN;

    t7 = (x29==((x30&x31)+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x36 = -168;

    t8 = (x33==((x34&x35)+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	static int8_t x39 = -4;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = 411;

    t9 = (x37==((x38&x39)+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	volatile uint32_t x42 = 1773183U;
	int32_t x44 = 30;
	int32_t t10 = -28;

    t10 = (x41==((x42&x43)+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MAX;
	int8_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;
	int32_t t11 = -3801037;

    t11 = (x45==((x46&x47)+x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 171268503U;
	static volatile uint32_t x51 = 7637U;
	int32_t t12 = 272702400;

    t12 = (x49==((x50&x51)+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1;
	int16_t x55 = 7849;
	static int32_t x56 = 647109178;
	volatile int32_t t13 = -6;

    t13 = (x53==((x54&x55)+x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -1;
	volatile uint64_t x59 = 485100015LLU;
	volatile uint8_t x60 = 92U;
	int32_t t14 = -15030;

    t14 = (x57==((x58&x59)+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = UINT64_MAX;
	int16_t x62 = 4;
	uint16_t x63 = 27U;

    t15 = (x61==((x62&x63)+x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int64_t x66 = -3LL;
	uint16_t x67 = UINT16_MAX;
	static uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = -3400642;

    t16 = (x65==((x66&x67)+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 119U;
	uint64_t x70 = 2222627176125876611LLU;
	int32_t t17 = -50395;

    t17 = (x69==((x70&x71)+x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MIN;
	volatile int16_t x76 = 10;
	int32_t t18 = -422458626;

    t18 = (x73==((x74&x75)+x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x78 = INT32_MIN;
	static uint32_t x79 = 14U;
	static int8_t x80 = INT8_MIN;

    t19 = (x77==((x78&x79)+x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int8_t x82 = -1;
	int32_t x83 = 670123;
	static uint32_t x84 = 22705U;
	volatile int32_t t20 = -117;

    t20 = (x81==((x82&x83)+x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t t21 = 30581;

    t21 = (x85==((x86&x87)+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -553208LL;
	volatile int8_t x90 = INT8_MIN;
	int32_t t22 = 15695;

    t22 = (x89==((x90&x91)+x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int8_t x94 = -1;
	uint8_t x95 = 8U;

    t23 = (x93==((x94&x95)+x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int64_t x98 = -1LL;
	volatile uint64_t x99 = 1400044721465051LLU;
	uint64_t x100 = 235837LLU;

    t24 = (x97==((x98&x99)+x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x102 = 1U;
	int32_t x103 = 1;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -44891247;

    t25 = (x101==((x102&x103)+x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = 3U;
	static volatile uint64_t x110 = 243402639LLU;
	volatile int16_t x111 = -1;
	int64_t x112 = 1894916LL;
	volatile int32_t t26 = -374636708;

    t26 = (x109==((x110&x111)+x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x113 = 27U;
	int16_t x114 = -13219;
	int8_t x115 = -1;
	uint8_t x116 = 102U;

    t27 = (x113==((x114&x115)+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 26U;
	uint32_t x118 = 385387168U;
	int8_t x119 = 0;

    t28 = (x117==((x118&x119)+x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	int32_t x123 = 35014859;
	volatile int32_t t29 = 30944173;

    t29 = (x121==((x122&x123)+x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 90670873LLU;
	static int64_t x126 = 108LL;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = UINT64_MAX;
	int32_t t30 = 916;

    t30 = (x125==((x126&x127)+x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x130 = 25U;
	int8_t x131 = INT8_MAX;
	int16_t x132 = 1;
	int32_t t31 = 1;

    t31 = (x129==((x130&x131)+x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x134 = 12308056712241661LLU;
	int32_t x135 = -1;
	volatile int32_t x136 = 468918771;
	static volatile int32_t t32 = -4;

    t32 = (x133==((x134&x135)+x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = 1907;
	uint8_t x138 = UINT8_MAX;
	int8_t x140 = 1;

    t33 = (x137==((x138&x139)+x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -1;
	int32_t x142 = 1;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 5U;
	int32_t t34 = 3305451;

    t34 = (x141==((x142&x143)+x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MAX;
	int64_t x146 = -700016739645101896LL;
	volatile uint64_t x147 = 1445725622875211LLU;
	int32_t x148 = -1;
	int32_t t35 = -6035;

    t35 = (x145==((x146&x147)+x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x149 = -1;
	int64_t x151 = INT64_MIN;
	int32_t t36 = 121;

    t36 = (x149==((x150&x151)+x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x154 = 53;
	static uint8_t x155 = 15U;
	uint8_t x156 = 55U;
	int32_t t37 = 273797955;

    t37 = (x153==((x154&x155)+x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x157 = -1;
	volatile int16_t x158 = INT16_MIN;
	volatile int64_t x159 = INT64_MAX;
	static int32_t x160 = INT32_MIN;
	static volatile int32_t t38 = 402;

    t38 = (x157==((x158&x159)+x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -1LL;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	static uint8_t x164 = 26U;
	volatile int32_t t39 = 4;

    t39 = (x161==((x162&x163)+x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t40 = -20804054;

    t40 = (x165==((x166&x167)+x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MIN;
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 24U;
	static int64_t x172 = INT64_MAX;
	static volatile int32_t t41 = 190;

    t41 = (x169==((x170&x171)+x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = -126;
	int64_t x174 = INT64_MAX;
	uint8_t x175 = 1U;
	int32_t x176 = -1;
	static int32_t t42 = -21702447;

    t42 = (x173==((x174&x175)+x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x177 = -650;
	static uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;

    t43 = (x177==((x178&x179)+x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = 6;
	static int16_t x182 = -127;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = 20732;
	volatile int32_t t44 = -2711646;

    t44 = (x181==((x182&x183)+x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = 1490100927248132717LL;
	uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 10U;
	int32_t t45 = -91597728;

    t45 = (x185==((x186&x187)+x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -78909218;
	uint32_t x192 = 6U;

    t46 = (x189==((x190&x191)+x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = 386;
	uint64_t x196 = UINT64_MAX;

    t47 = (x193==((x194&x195)+x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x197 = 6U;
	volatile int64_t x198 = INT64_MIN;
	static volatile int8_t x199 = -41;
	uint16_t x200 = 27U;
	int32_t t48 = -296;

    t48 = (x197==((x198&x199)+x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x201 = -5;
	volatile int64_t x202 = -1LL;
	volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t49 = 3260;

    t49 = (x201==((x202&x203)+x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x209 = 4092717U;
	uint16_t x210 = 0U;
	static volatile int16_t x211 = -1;
	int64_t x212 = -524154556LL;
	volatile int32_t t50 = 421;

    t50 = (x209==((x210&x211)+x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x213 = 53U;
	int8_t x214 = INT8_MAX;
	volatile int64_t x215 = 3656466946619763124LL;
	int16_t x216 = INT16_MIN;
	int32_t t51 = -3005;

    t51 = (x213==((x214&x215)+x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = -1LL;
	int32_t x219 = 19;
	int32_t x220 = -1;
	static volatile int32_t t52 = 7849176;

    t52 = (x217==((x218&x219)+x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x221 = 3U;
	int16_t x222 = INT16_MAX;
	int8_t x224 = -14;
	int32_t t53 = -97674;

    t53 = (x221==((x222&x223)+x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -1;
	int16_t x226 = INT16_MIN;
	static int16_t x228 = 1074;
	int32_t t54 = 1946;

    t54 = (x225==((x226&x227)+x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x229 = UINT16_MAX;
	int16_t x230 = INT16_MAX;
	int32_t x231 = -2494;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t55 = 0;

    t55 = (x229==((x230&x231)+x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x233 = INT64_MIN;
	volatile int32_t x234 = -1;
	int64_t x236 = 15816932908760056LL;
	int32_t t56 = 73704759;

    t56 = (x233==((x234&x235)+x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x237 = 1;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t57 = 1;

    t57 = (x237==((x238&x239)+x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -17;
	static int8_t x244 = -1;
	int32_t t58 = 905981;

    t58 = (x241==((x242&x243)+x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 20U;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MAX;
	uint32_t x248 = UINT32_MAX;

    t59 = (x245==((x246&x247)+x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x249 = INT32_MIN;
	static int8_t x250 = INT8_MIN;
	volatile uint8_t x251 = 0U;
	int16_t x252 = -1;
	int32_t t60 = 2001595;

    t60 = (x249==((x250&x251)+x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x254 = INT32_MIN;
	int64_t x255 = -1LL;
	volatile int32_t t61 = -1513;

    t61 = (x253==((x254&x255)+x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -36378245;
	uint32_t x260 = UINT32_MAX;
	static int32_t t62 = 0;

    t62 = (x257==((x258&x259)+x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	static uint8_t x262 = 0U;
	static int16_t x263 = 7;
	volatile uint8_t x264 = UINT8_MAX;

    t63 = (x261==((x262&x263)+x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MIN;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t64 = 13355487;

    t64 = (x265==((x266&x267)+x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = 864352555;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = 923216461267533LL;
	int32_t x272 = INT32_MIN;
	static int32_t t65 = -7406195;

    t65 = (x269==((x270&x271)+x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x273 = INT64_MIN;
	static int8_t x274 = INT8_MIN;
	static int16_t x275 = -1;
	static int8_t x276 = 13;
	volatile int32_t t66 = -6797867;

    t66 = (x273==((x274&x275)+x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = -2;
	static uint64_t x278 = 8541LLU;

    t67 = (x277==((x278&x279)+x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -19968LL;
	volatile int32_t x282 = INT32_MIN;
	int32_t x283 = -1349794;
	int32_t x284 = INT32_MAX;
	int32_t t68 = -4514;

    t68 = (x281==((x282&x283)+x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = UINT16_MAX;
	int32_t x287 = INT32_MAX;
	uint16_t x288 = 6U;

    t69 = (x285==((x286&x287)+x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x290 = 0;
	uint8_t x291 = 14U;
	int16_t x292 = INT16_MAX;
	int32_t t70 = 15942770;

    t70 = (x289==((x290&x291)+x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x293 = 4U;
	static int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;

    t71 = (x293==((x294&x295)+x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MIN;
	static uint32_t x298 = 1785U;
	volatile int32_t t72 = -21943446;

    t72 = (x297==((x298&x299)+x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = 108;
	int8_t x303 = 20;
	uint64_t x304 = 3064345559214980LLU;
	volatile int32_t t73 = 7;

    t73 = (x301==((x302&x303)+x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t74 = -7726;

    t74 = (x305==((x306&x307)+x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x313 = -8696584765827LL;
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = -4;
	static int32_t t75 = 37081077;

    t75 = (x313==((x314&x315)+x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = UINT8_MAX;
	uint8_t x318 = 97U;
	static uint32_t x320 = UINT32_MAX;
	static volatile int32_t t76 = 0;

    t76 = (x317==((x318&x319)+x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MIN;
	volatile uint32_t x323 = 3509U;
	static int64_t x324 = -177LL;
	volatile int32_t t77 = -312;

    t77 = (x321==((x322&x323)+x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = -1LL;
	int8_t x327 = 1;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t78 = 16116;

    t78 = (x325==((x326&x327)+x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MAX;
	static int8_t x330 = INT8_MIN;
	static uint8_t x331 = 1U;
	int32_t x332 = INT32_MIN;
	int32_t t79 = -28;

    t79 = (x329==((x330&x331)+x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = -2708888;
	int8_t x336 = INT8_MAX;
	int32_t t80 = 128538;

    t80 = (x333==((x334&x335)+x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MAX;
	static volatile int32_t t81 = -4079;

    t81 = (x337==((x338&x339)+x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x343 = 0U;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t82 = -465522002;

    t82 = (x341==((x342&x343)+x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x345 = 3U;
	static uint8_t x346 = UINT8_MAX;
	static uint16_t x347 = UINT16_MAX;
	static volatile int32_t t83 = 0;

    t83 = (x345==((x346&x347)+x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x349 = -146087;
	int8_t x350 = 23;
	int64_t x352 = INT64_MIN;
	volatile int32_t t84 = -226;

    t84 = (x349==((x350&x351)+x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x353 = INT8_MIN;
	int8_t x354 = -1;
	static uint32_t x355 = UINT32_MAX;
	static uint8_t x356 = 1U;
	volatile int32_t t85 = 423;

    t85 = (x353==((x354&x355)+x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = -13;
	int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	int32_t t86 = -1592;

    t86 = (x357==((x358&x359)+x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x361 = 32941993451542105LLU;
	uint16_t x363 = 165U;
	static uint64_t x364 = UINT64_MAX;

    t87 = (x361==((x362&x363)+x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x366 = -1;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = -777;

    t88 = (x365==((x366&x367)+x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x371 = 0U;
	int64_t x372 = -1LL;
	volatile int32_t t89 = -2639;

    t89 = (x369==((x370&x371)+x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t90 = -830276;

    t90 = (x373==((x374&x375)+x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x377 = -1;
	uint32_t x378 = 293476U;
	int16_t x379 = INT16_MAX;
	int32_t t91 = 265;

    t91 = (x377==((x378&x379)+x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x381 = 18384U;
	int16_t x382 = INT16_MAX;
	volatile int64_t x383 = INT64_MAX;
	int8_t x384 = -1;
	int32_t t92 = 824;

    t92 = (x381==((x382&x383)+x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = INT16_MAX;
	volatile int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;

    t93 = (x385==((x386&x387)+x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = INT16_MAX;
	volatile int32_t x392 = 807017;
	int32_t t94 = 1804004;

    t94 = (x389==((x390&x391)+x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = INT8_MIN;
	volatile int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	int32_t t95 = 460;

    t95 = (x393==((x394&x395)+x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x398 = -3;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = 1;
	static volatile int32_t t96 = -10378543;

    t96 = (x397==((x398&x399)+x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = 285;
	uint32_t x402 = 2550509U;
	static int32_t x403 = INT32_MIN;
	uint8_t x404 = 23U;
	volatile int32_t t97 = 26078756;

    t97 = (x401==((x402&x403)+x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MAX;
	volatile uint64_t x411 = 1610764462061LLU;
	int8_t x412 = -1;

    t98 = (x409==((x410&x411)+x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x417 = 3426286U;
	static int16_t x418 = INT16_MIN;
	static volatile int64_t x419 = -1LL;
	uint32_t x420 = 5800U;
	volatile int32_t t99 = -669646647;

    t99 = (x417==((x418&x419)+x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x423 = 979;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t100 = -27951711;

    t100 = (x421==((x422&x423)+x424));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x426 = INT16_MAX;
	int32_t x427 = -1;
	int8_t x428 = -1;
	int32_t t101 = 1;

    t101 = (x425==((x426&x427)+x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = INT64_MAX;
	int64_t x430 = -1LL;
	static volatile int32_t x431 = INT32_MAX;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t102 = -47031523;

    t102 = (x429==((x430&x431)+x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x435 = 7U;
	static uint64_t x436 = 501920LLU;

    t103 = (x433==((x434&x435)+x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x437 = 4712U;
	uint8_t x439 = UINT8_MAX;
	int32_t t104 = 155796667;

    t104 = (x437==((x438&x439)+x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = -6366;
	volatile int16_t x442 = INT16_MIN;
	volatile int64_t x444 = -1LL;

    t105 = (x441==((x442&x443)+x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x445 = 5879U;
	int32_t x447 = -144733;
	volatile int32_t t106 = -24;

    t106 = (x445==((x446&x447)+x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = INT64_MAX;
	volatile int16_t x450 = INT16_MAX;
	uint32_t x451 = 868U;
	int64_t x452 = INT64_MIN;
	volatile int32_t t107 = -2390086;

    t107 = (x449==((x450&x451)+x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t108 = -5203793;

    t108 = (x453==((x454&x455)+x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x458 = 349313515U;
	int32_t x459 = INT32_MIN;
	volatile uint16_t x460 = UINT16_MAX;
	int32_t t109 = -33009414;

    t109 = (x457==((x458&x459)+x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x461 = 1088062175U;
	int32_t x462 = INT32_MIN;
	int64_t x463 = 2756714305817668LL;
	static int32_t x464 = INT32_MIN;
	volatile int32_t t110 = -1;

    t110 = (x461==((x462&x463)+x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = 5071LLU;
	int8_t x467 = INT8_MIN;
	static int32_t t111 = 14790;

    t111 = (x465==((x466&x467)+x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x470 = INT64_MAX;
	uint16_t x471 = UINT16_MAX;
	int32_t x472 = 739478079;
	int32_t t112 = -5434;

    t112 = (x469==((x470&x471)+x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = 5U;
	int64_t x475 = -1LL;
	int32_t t113 = -71638080;

    t113 = (x473==((x474&x475)+x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x477 = -421552767634LL;
	int32_t x478 = INT32_MIN;
	int16_t x479 = -1;
	volatile uint8_t x480 = 77U;
	int32_t t114 = 411;

    t114 = (x477==((x478&x479)+x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = 3576LL;
	volatile uint16_t x483 = 28176U;
	uint16_t x484 = UINT16_MAX;
	static volatile int32_t t115 = -29169;

    t115 = (x481==((x482&x483)+x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = INT8_MAX;
	int32_t x486 = -1;
	int64_t x488 = -1LL;
	static int32_t t116 = -41523474;

    t116 = (x485==((x486&x487)+x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = 985445670;
	int32_t x490 = -1;
	volatile int8_t x491 = -6;
	uint32_t x492 = UINT32_MAX;

    t117 = (x489==((x490&x491)+x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = INT16_MIN;
	static uint8_t x494 = UINT8_MAX;
	static volatile uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MAX;
	static int32_t t118 = 7;

    t118 = (x493==((x494&x495)+x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x498 = -13767857097425079LL;
	int32_t x499 = 7042808;
	uint16_t x500 = UINT16_MAX;
	static volatile int32_t t119 = -408;

    t119 = (x497==((x498&x499)+x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x505 = INT8_MAX;
	int16_t x506 = INT16_MAX;
	int8_t x507 = 7;
	uint64_t x508 = 1LLU;

    t120 = (x505==((x506&x507)+x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = -1LL;
	int8_t x510 = INT8_MAX;
	int8_t x511 = -1;
	int32_t t121 = 75;

    t121 = (x509==((x510&x511)+x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x513 = 196127769U;
	uint8_t x514 = 49U;
	int16_t x515 = INT16_MAX;
	int16_t x516 = INT16_MIN;
	int32_t t122 = 14;

    t122 = (x513==((x514&x515)+x516));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x517 = 39LLU;
	volatile int32_t x518 = -4629;
	uint16_t x519 = 893U;
	volatile int8_t x520 = -1;
	volatile int32_t t123 = -29653365;

    t123 = (x517==((x518&x519)+x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x525 = INT32_MIN;
	int64_t x527 = -1LL;
	static int8_t x528 = INT8_MIN;
	static volatile int32_t t124 = -5670689;

    t124 = (x525==((x526&x527)+x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x529 = -1;
	volatile int8_t x530 = INT8_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	static uint32_t x532 = UINT32_MAX;
	static int32_t t125 = -1341299;

    t125 = (x529==((x530&x531)+x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x533 = 548460LLU;
	int64_t x534 = -1LL;
	volatile int16_t x535 = INT16_MIN;
	int8_t x536 = -1;
	static int32_t t126 = -3836988;

    t126 = (x533==((x534&x535)+x536));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x537 = INT64_MIN;
	static int8_t x538 = INT8_MIN;

    t127 = (x537==((x538&x539)+x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = INT32_MIN;
	uint32_t x542 = 1023356U;
	static volatile int32_t t128 = -519;

    t128 = (x541==((x542&x543)+x544));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x546 = -25;
	int32_t x547 = -1;
	int16_t x548 = INT16_MIN;
	int32_t t129 = -2689586;

    t129 = (x545==((x546&x547)+x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = INT8_MIN;
	static uint16_t x550 = UINT16_MAX;
	uint64_t x552 = 112895671440509594LLU;

    t130 = (x549==((x550&x551)+x552));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x554 = INT16_MAX;
	static int8_t x555 = 0;
	volatile int32_t t131 = 126133776;

    t131 = (x553==((x554&x555)+x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x557 = 1856U;
	int64_t x559 = -1732LL;
	volatile uint16_t x560 = 13U;
	volatile int32_t t132 = 3;

    t132 = (x557==((x558&x559)+x560));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x561 = -1;
	static uint8_t x562 = 3U;
	int64_t x563 = INT64_MIN;
	int16_t x564 = 1;
	static volatile int32_t t133 = 4453;

    t133 = (x561==((x562&x563)+x564));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x565 = UINT32_MAX;
	uint32_t x566 = 1040459U;
	int64_t x567 = 4LL;
	int8_t x568 = INT8_MAX;
	int32_t t134 = -20622;

    t134 = (x565==((x566&x567)+x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x569 = 0;
	int64_t x570 = INT64_MIN;
	int32_t x571 = INT32_MAX;
	volatile int32_t t135 = 61902986;

    t135 = (x569==((x570&x571)+x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x577 = 14767U;
	int8_t x578 = INT8_MIN;
	int32_t x579 = -1;
	int64_t x580 = 172843542201LL;
	volatile int32_t t136 = -54591;

    t136 = (x577==((x578&x579)+x580));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x581 = 3U;
	uint64_t x582 = 25591LLU;
	static volatile int32_t x583 = 5;
	int8_t x584 = -11;
	int32_t t137 = -3;

    t137 = (x581==((x582&x583)+x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x585 = -57028540274LL;
	static int16_t x587 = INT16_MAX;
	volatile int32_t t138 = 98842392;

    t138 = (x585==((x586&x587)+x588));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = -1;
	uint64_t x590 = 1828180606994LLU;
	volatile int64_t x591 = INT64_MAX;
	static int32_t t139 = -155182852;

    t139 = (x589==((x590&x591)+x592));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x593 = UINT32_MAX;
	static int32_t x594 = INT32_MIN;
	int16_t x595 = INT16_MAX;
	volatile int16_t x596 = 0;
	volatile int32_t t140 = 15348038;

    t140 = (x593==((x594&x595)+x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x597 = 4550;
	static volatile int64_t x599 = INT64_MIN;
	int32_t x600 = 1136;
	int32_t t141 = 158400821;

    t141 = (x597==((x598&x599)+x600));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x601 = INT32_MAX;
	int32_t x604 = INT32_MIN;

    t142 = (x601==((x602&x603)+x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x605 = INT32_MAX;
	static volatile int64_t x606 = INT64_MIN;
	uint32_t x607 = UINT32_MAX;
	int16_t x608 = INT16_MAX;
	volatile int32_t t143 = -118368751;

    t143 = (x605==((x606&x607)+x608));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x610 = 2871421087461378LL;
	int32_t x611 = -787;
	uint8_t x612 = 3U;
	volatile int32_t t144 = -1;

    t144 = (x609==((x610&x611)+x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x613 = INT8_MIN;
	static uint32_t x615 = UINT32_MAX;
	volatile int32_t t145 = 844;

    t145 = (x613==((x614&x615)+x616));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x617 = INT64_MAX;
	uint32_t x619 = 90561461U;
	uint32_t x620 = UINT32_MAX;
	static volatile int32_t t146 = -7;

    t146 = (x617==((x618&x619)+x620));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x621 = INT8_MAX;
	volatile int16_t x622 = INT16_MIN;
	uint32_t x623 = 7199465U;
	volatile int32_t t147 = 6;

    t147 = (x621==((x622&x623)+x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x627 = -1LL;
	int8_t x628 = 1;
	volatile int32_t t148 = -180281453;

    t148 = (x625==((x626&x627)+x628));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x629 = -1;
	int64_t x630 = INT64_MIN;
	uint64_t x631 = UINT64_MAX;
	volatile int32_t t149 = 200;

    t149 = (x629==((x630&x631)+x632));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x634 = INT64_MIN;
	static int16_t x635 = INT16_MIN;
	int16_t x636 = 711;
	int32_t t150 = -362;

    t150 = (x633==((x634&x635)+x636));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x638 = -1;
	static uint64_t x639 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	int32_t t151 = -4651525;

    t151 = (x637==((x638&x639)+x640));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = 3U;
	uint64_t x642 = 214895346753163LLU;
	int64_t x643 = INT64_MIN;
	volatile int32_t t152 = 81892044;

    t152 = (x641==((x642&x643)+x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x649 = 2U;
	int32_t x650 = INT32_MIN;
	uint64_t x651 = UINT64_MAX;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t153 = 7985;

    t153 = (x649==((x650&x651)+x652));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = INT16_MIN;
	int8_t x654 = 0;
	static volatile int32_t x656 = INT32_MAX;
	volatile int32_t t154 = -774;

    t154 = (x653==((x654&x655)+x656));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x657 = UINT16_MAX;
	int16_t x658 = -12;
	uint16_t x659 = 27U;
	int8_t x660 = 1;
	static int32_t t155 = -329370;

    t155 = (x657==((x658&x659)+x660));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x665 = INT8_MIN;
	uint64_t x666 = 139529782LLU;
	static int8_t x667 = 24;
	volatile int64_t x668 = INT64_MAX;
	volatile int32_t t156 = -906;

    t156 = (x665==((x666&x667)+x668));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x669 = INT8_MIN;
	int8_t x670 = -1;
	uint16_t x672 = 51U;
	volatile int32_t t157 = -741295067;

    t157 = (x669==((x670&x671)+x672));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x673 = INT32_MIN;
	uint32_t x675 = 7819U;
	int8_t x676 = INT8_MIN;

    t158 = (x673==((x674&x675)+x676));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x679 = -3;
	uint8_t x680 = 1U;
	volatile int32_t t159 = 1;

    t159 = (x677==((x678&x679)+x680));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x681 = UINT8_MAX;
	volatile int32_t x682 = -1;
	static volatile uint8_t x683 = 50U;
	uint64_t x684 = 72LLU;
	int32_t t160 = -2207265;

    t160 = (x681==((x682&x683)+x684));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x685 = INT32_MIN;
	int8_t x686 = INT8_MIN;
	int16_t x688 = INT16_MAX;
	int32_t t161 = -4;

    t161 = (x685==((x686&x687)+x688));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x689 = -401377395152LL;
	int8_t x692 = 0;
	int32_t t162 = 2;

    t162 = (x689==((x690&x691)+x692));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x693 = -1;
	volatile int16_t x694 = INT16_MIN;
	static uint16_t x695 = 1U;
	volatile uint64_t x696 = 2186218LLU;
	volatile int32_t t163 = 0;

    t163 = (x693==((x694&x695)+x696));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x699 = -1;
	int32_t x700 = -1;
	int32_t t164 = -29;

    t164 = (x697==((x698&x699)+x700));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x701 = 10235766219LLU;
	int32_t x703 = 44466;
	static int8_t x704 = -1;

    t165 = (x701==((x702&x703)+x704));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x705 = 4693;
	static int16_t x706 = INT16_MAX;
	uint8_t x707 = 16U;
	volatile int8_t x708 = INT8_MIN;
	int32_t t166 = -126325;

    t166 = (x705==((x706&x707)+x708));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x710 = INT64_MAX;
	volatile int64_t x711 = 348273209758026728LL;
	int32_t t167 = 26;

    t167 = (x709==((x710&x711)+x712));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x713 = INT16_MAX;
	volatile uint8_t x714 = 3U;
	static volatile int32_t x716 = INT32_MIN;
	volatile int32_t t168 = -16058;

    t168 = (x713==((x714&x715)+x716));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x718 = INT8_MIN;
	int32_t x719 = 625;
	volatile int32_t t169 = -193;

    t169 = (x717==((x718&x719)+x720));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x721 = 280237903334808LL;
	int8_t x722 = INT8_MAX;
	uint32_t x723 = 4363773U;
	static uint8_t x724 = 7U;
	int32_t t170 = 531;

    t170 = (x721==((x722&x723)+x724));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x727 = INT8_MAX;
	static int32_t t171 = 540091;

    t171 = (x725==((x726&x727)+x728));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x729 = INT32_MIN;
	uint16_t x730 = 0U;
	static int16_t x731 = -1;
	uint16_t x732 = UINT16_MAX;
	static volatile int32_t t172 = 4136;

    t172 = (x729==((x730&x731)+x732));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x733 = INT16_MIN;
	static int64_t x734 = -1LL;
	volatile int8_t x736 = -1;
	volatile int32_t t173 = 371459970;

    t173 = (x733==((x734&x735)+x736));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x737 = UINT8_MAX;
	int64_t x738 = -1LL;
	static int32_t x739 = 406677;
	volatile int32_t t174 = 132956;

    t174 = (x737==((x738&x739)+x740));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x741 = UINT32_MAX;
	int8_t x742 = -14;
	volatile int32_t t175 = -1849141;

    t175 = (x741==((x742&x743)+x744));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = -1;
	uint8_t x747 = 18U;
	int32_t t176 = 3295;

    t176 = (x745==((x746&x747)+x748));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x749 = -1;
	static volatile uint16_t x750 = 3284U;
	int8_t x751 = -1;
	uint8_t x752 = 98U;
	int32_t t177 = -16953;

    t177 = (x749==((x750&x751)+x752));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x755 = 34371;
	static volatile int8_t x756 = INT8_MIN;
	volatile int32_t t178 = -42;

    t178 = (x753==((x754&x755)+x756));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x757 = -159LL;
	int16_t x758 = INT16_MIN;
	int16_t x759 = 267;
	uint16_t x760 = 2U;
	int32_t t179 = -48404258;

    t179 = (x757==((x758&x759)+x760));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x761 = UINT64_MAX;
	uint64_t x762 = 19352999312546LLU;
	uint32_t x763 = 1U;

    t180 = (x761==((x762&x763)+x764));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x766 = 2U;
	static uint8_t x767 = 105U;

    t181 = (x765==((x766&x767)+x768));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	int16_t x770 = -1;
	int8_t x771 = INT8_MAX;
	int32_t t182 = 127;

    t182 = (x769==((x770&x771)+x772));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x773 = INT8_MIN;
	int16_t x774 = INT16_MIN;
	uint16_t x775 = 1548U;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t183 = 0;

    t183 = (x773==((x774&x775)+x776));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x777 = INT16_MAX;
	static uint16_t x778 = UINT16_MAX;
	static uint64_t x779 = 357747320883444LLU;
	int32_t x780 = INT32_MIN;
	int32_t t184 = -13;

    t184 = (x777==((x778&x779)+x780));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x782 = -935;
	uint64_t x783 = 2300680586968598850LLU;
	int64_t x784 = INT64_MIN;
	static int32_t t185 = -248948159;

    t185 = (x781==((x782&x783)+x784));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x785 = -1;
	int16_t x786 = INT16_MAX;
	int8_t x787 = INT8_MIN;
	volatile int8_t x788 = INT8_MAX;
	volatile int32_t t186 = -13051209;

    t186 = (x785==((x786&x787)+x788));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x789 = INT64_MIN;
	static uint8_t x790 = 17U;
	uint8_t x791 = UINT8_MAX;
	volatile uint64_t x792 = 312534874834LLU;

    t187 = (x789==((x790&x791)+x792));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x794 = 460900486853184LLU;
	static int64_t x795 = -1LL;
	int16_t x796 = -1;
	volatile int32_t t188 = 66469863;

    t188 = (x793==((x794&x795)+x796));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x797 = 3847U;
	int8_t x799 = INT8_MIN;
	static int32_t x800 = 2;
	volatile int32_t t189 = -401693;

    t189 = (x797==((x798&x799)+x800));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x801 = -1LL;
	static int64_t x802 = INT64_MIN;
	int32_t x803 = INT32_MIN;
	volatile uint64_t x804 = 2025507LLU;
	int32_t t190 = 4760824;

    t190 = (x801==((x802&x803)+x804));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x805 = INT16_MIN;
	int8_t x806 = -1;
	static volatile int32_t x807 = INT32_MAX;
	int32_t t191 = -179446;

    t191 = (x805==((x806&x807)+x808));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x809 = -1;
	static int16_t x811 = 1;
	volatile int64_t x812 = INT64_MIN;

    t192 = (x809==((x810&x811)+x812));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x813 = 1719069280714851LLU;
	volatile uint16_t x815 = 2089U;
	uint32_t x816 = UINT32_MAX;
	int32_t t193 = -149572950;

    t193 = (x813==((x814&x815)+x816));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x817 = UINT16_MAX;
	static int8_t x818 = 1;
	volatile int32_t x819 = INT32_MAX;
	static int32_t t194 = -63;

    t194 = (x817==((x818&x819)+x820));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x821 = INT8_MAX;
	int8_t x822 = INT8_MAX;
	int64_t x823 = 18933882LL;
	int32_t x824 = -1;
	int32_t t195 = -440983872;

    t195 = (x821==((x822&x823)+x824));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x825 = 0;
	int64_t x826 = -19211020486512LL;
	uint8_t x827 = UINT8_MAX;
	int64_t x828 = 183831518549LL;
	volatile int32_t t196 = 3816669;

    t196 = (x825==((x826&x827)+x828));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x831 = INT64_MAX;
	volatile int8_t x832 = INT8_MIN;

    t197 = (x829==((x830&x831)+x832));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = -3734918087LL;
	int16_t x834 = INT16_MIN;
	int16_t x835 = -1;
	uint64_t x836 = UINT64_MAX;

    t198 = (x833==((x834&x835)+x836));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x838 = 105937434402LL;
	static int16_t x840 = INT16_MAX;

    t199 = (x837==((x838&x839)+x840));

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

