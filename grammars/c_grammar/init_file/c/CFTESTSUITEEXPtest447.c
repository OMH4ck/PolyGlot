
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

static volatile int8_t x1 = -1;
static int32_t x4 = INT32_MAX;
uint8_t x16 = 30U;
int64_t x25 = INT64_MAX;
uint16_t x31 = 1232U;
int32_t x36 = -1;
volatile uint64_t t6 = UINT64_MAX;
int32_t x39 = -1;
uint8_t x47 = UINT8_MAX;
static volatile int32_t x52 = -16611291;
int32_t t10 = -6;
uint8_t x53 = 4U;
static volatile uint64_t t11 = 1LLU;
volatile uint64_t t12 = 1005LLU;
uint64_t x63 = UINT64_MAX;
volatile uint8_t x64 = 14U;
int32_t t14 = 37093;
static int32_t x73 = INT32_MIN;
static volatile uint64_t x75 = UINT64_MAX;
uint32_t x94 = UINT32_MAX;
volatile uint64_t t20 = UINT64_MAX;
int8_t x105 = -1;
int8_t x106 = -1;
volatile uint32_t t23 = 17748988U;
uint8_t x114 = 54U;
static volatile int32_t x116 = 27123213;
uint64_t t24 = UINT64_MAX;
int16_t x123 = -1;
volatile int64_t t26 = 3954182023169LL;
int32_t x130 = INT32_MAX;
int16_t x148 = 175;
int32_t x149 = INT32_MIN;
volatile uint32_t t31 = 17739409U;
static int16_t x162 = INT16_MIN;
int64_t x170 = -1LL;
int16_t x171 = 783;
int64_t t35 = 820670352584LL;
int16_t x178 = INT16_MIN;
uint64_t x180 = 5623099LLU;
uint16_t x181 = UINT16_MAX;
int8_t x185 = INT8_MAX;
int16_t x195 = INT16_MIN;
volatile int16_t x208 = INT16_MAX;
uint8_t x209 = 28U;
int8_t x211 = INT8_MAX;
int64_t x213 = -1LL;
int64_t t44 = -239403525LL;
uint8_t x219 = 24U;
int8_t x221 = INT8_MAX;
static uint64_t t47 = 587LLU;
int64_t x236 = INT64_MIN;
volatile uint64_t t48 = 598686828590382264LLU;
int8_t x243 = INT8_MIN;
static int8_t x245 = 7;
int64_t t50 = -30LL;
uint8_t x255 = 4U;
uint64_t x263 = UINT64_MAX;
uint32_t x265 = 10633470U;
uint32_t t53 = 1U;
volatile uint64_t t56 = 2827983432338897LLU;
static uint64_t x296 = 1464349LLU;
static volatile uint64_t t59 = 1498599743546219826LLU;
uint16_t x298 = UINT16_MAX;
static volatile uint64_t x299 = 3757736345998188063LLU;
int32_t x300 = INT32_MAX;
uint64_t t60 = 26383008LLU;
uint32_t x301 = 444906U;
uint32_t x333 = 51422U;
int64_t t69 = -79039LL;
int16_t x355 = INT16_MIN;
static uint8_t x366 = UINT8_MAX;
volatile uint16_t x377 = UINT16_MAX;
uint32_t x378 = 54804U;
int64_t t74 = -59610182088782LL;
int32_t x386 = 6335;
static int8_t x387 = -1;
uint64_t t75 = 559044134065066LLU;
volatile uint64_t t76 = 17057249497LLU;
int8_t x427 = INT8_MIN;
volatile int32_t x433 = INT32_MIN;
static volatile uint8_t x435 = 0U;
volatile int8_t x436 = -1;
uint32_t x440 = 178884U;
uint32_t x445 = 12U;
int16_t x457 = INT16_MIN;
static int16_t x468 = INT16_MIN;
volatile uint64_t t91 = 572565LLU;
volatile int8_t x469 = INT8_MAX;
int64_t t93 = INT64_MIN;
int16_t x481 = INT16_MAX;
int16_t x511 = 710;
int32_t x514 = 410249;
int32_t x522 = INT32_MAX;
uint8_t x526 = 34U;
uint8_t x527 = UINT8_MAX;
int8_t x533 = -23;
int64_t x538 = -1LL;
uint8_t x542 = 26U;
uint64_t x548 = 17359206LLU;
uint64_t t106 = 98831351937729097LLU;
uint16_t x555 = 15593U;
uint64_t x557 = UINT64_MAX;
uint16_t x558 = 319U;
int32_t x560 = 792637451;
uint8_t x563 = 60U;
uint32_t t111 = UINT32_MAX;
uint32_t x574 = UINT32_MAX;
static int32_t x583 = INT32_MIN;
int64_t x605 = -243422509780345900LL;
volatile uint64_t t117 = 5774235LLU;
uint16_t x617 = UINT16_MAX;
int16_t x620 = -821;
uint8_t x621 = 1U;
volatile int64_t x629 = INT64_MAX;
static uint32_t x640 = 17U;
uint16_t x642 = 4812U;
int16_t x645 = INT16_MIN;
uint16_t x650 = 2U;
volatile int64_t x660 = INT64_MIN;
volatile int8_t x666 = INT8_MAX;
uint16_t x686 = UINT16_MAX;
int8_t x688 = INT8_MIN;
int8_t x695 = INT8_MAX;
static uint64_t t135 = UINT64_MAX;
uint32_t x702 = UINT32_MAX;
uint64_t t136 = 30243LLU;
static uint64_t x707 = 1LLU;
volatile int8_t x723 = INT8_MIN;
int8_t x726 = -1;
static int32_t x727 = -1;
static int8_t x731 = INT8_MAX;
int64_t x733 = -1LL;
int8_t x735 = -1;
int16_t x736 = INT16_MIN;
uint16_t x738 = 3U;
int16_t x747 = 60;
uint8_t x751 = UINT8_MAX;
volatile uint16_t x754 = 801U;
int8_t x775 = INT8_MIN;
int32_t x776 = INT32_MIN;
uint16_t x782 = 2081U;
volatile int32_t x786 = INT32_MAX;
int8_t x787 = -1;
volatile int8_t x788 = INT8_MAX;
uint64_t x801 = 30744160128207036LLU;
static uint32_t x802 = UINT32_MAX;
int8_t x805 = -27;
int32_t x809 = INT32_MIN;
uint32_t x811 = 17755751U;
static int64_t x818 = -1LL;
int16_t x829 = INT16_MAX;
uint32_t x844 = 6U;
volatile int64_t t159 = -809257386498851LL;
int16_t x846 = INT16_MAX;
uint16_t x852 = UINT16_MAX;
int8_t x853 = INT8_MIN;
static uint64_t x870 = UINT64_MAX;
int16_t x871 = INT16_MIN;
int16_t x881 = INT16_MIN;
static uint64_t x886 = UINT64_MAX;
uint64_t x892 = UINT64_MAX;
uint64_t t169 = 2689329004985396256LLU;
static int64_t t172 = 6856LL;
int64_t t173 = 1369346414339569638LL;
static volatile uint16_t x913 = UINT16_MAX;
int8_t x915 = INT8_MIN;
int16_t x927 = INT16_MIN;
uint32_t x929 = 545081392U;
uint16_t x930 = UINT16_MAX;
int64_t x941 = INT64_MAX;
static uint8_t x943 = 16U;
volatile int16_t x946 = INT16_MIN;
int8_t x951 = -1;
uint64_t t181 = UINT64_MAX;
uint64_t x954 = UINT64_MAX;
int64_t x959 = -1LL;
volatile int8_t x963 = 0;
static uint64_t x969 = 7407712688992LLU;
static volatile uint8_t x971 = 1U;
int32_t x979 = -1;
int64_t x980 = 10984287220411853LL;
static uint8_t x983 = UINT8_MAX;
uint32_t x988 = 164427U;
int16_t x1003 = -1;
int32_t x1005 = -2;
volatile int32_t x1010 = 2;
uint32_t x1013 = UINT32_MAX;
static uint32_t x1019 = UINT32_MAX;
volatile uint64_t t195 = UINT64_MAX;
int64_t x1027 = INT64_MAX;
volatile uint16_t x1030 = 1U;
int8_t x1031 = INT8_MAX;
volatile uint32_t x1033 = 2076994U;
static int8_t x1036 = -7;
int64_t x1038 = 1LL;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	int16_t x3 = -1;
	static int32_t t0 = 110100540;

    t0 = (x1|((x2*x3)/x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = 1041659;
	int8_t x10 = INT8_MIN;
	int8_t x11 = -2;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -444;

    t1 = (x9|((x10*x11)/x12));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -616;
	static uint8_t x14 = UINT8_MAX;
	int32_t x15 = -1;
	int32_t t2 = -13588;

    t2 = (x13|((x14*x15)/x16));

    if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MAX;
	volatile uint64_t x22 = 797775LLU;
	int16_t x23 = INT16_MAX;
	uint64_t x24 = 325663LLU;
	volatile uint64_t t3 = 131369129559LLU;

    t3 = (x21|((x22*x23)/x24));

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x26 = -1;
	volatile uint32_t x27 = 4U;
	int16_t x28 = -24;
	int64_t t4 = INT64_MAX;

    t4 = (x25|((x26*x27)/x28));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MAX;
	uint8_t x30 = 10U;
	static int8_t x32 = -1;
	int32_t t5 = 279939;

    t5 = (x29|((x30*x31)/x32));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	static int32_t x34 = 23;
	int8_t x35 = INT8_MAX;

    t6 = (x33|((x34*x35)/x36));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x37 = -1;
	int64_t x38 = -1LL;
	int8_t x40 = INT8_MIN;
	int64_t t7 = 382771664717LL;

    t7 = (x37|((x38*x39)/x40));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x41 = INT8_MIN;
	int8_t x42 = 0;
	volatile int16_t x43 = INT16_MAX;
	int64_t x44 = 481LL;
	int64_t t8 = 26432065949634484LL;

    t8 = (x41|((x42*x43)/x44));

    if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MAX;
	uint16_t x48 = UINT16_MAX;
	int32_t t9 = 16716;

    t9 = (x45|((x46*x47)/x48));

    if (t9 != -32641) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MAX;
	static volatile int32_t x50 = -1134;
	uint8_t x51 = 2U;

    t10 = (x49|((x50*x51)/x52));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x54 = 289820176LLU;
	volatile int16_t x55 = -1;
	uint32_t x56 = 901781482U;

    t11 = (x53|((x54*x55)/x56));

    if (t11 != 20455891412LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = UINT32_MAX;
	uint64_t x58 = 15308569LLU;
	uint8_t x59 = 0U;
	int32_t x60 = -26;

    t12 = (x57|((x58*x59)/x60));

    if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x61 = INT64_MIN;
	int32_t x62 = 199;
	static uint64_t t13 = 3378974680719293LLU;

    t13 = (x61|((x62*x63)/x64));

    if (t13 != 10540996613548315194LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x65 = 18U;
	volatile int16_t x66 = -1;
	volatile uint16_t x67 = UINT16_MAX;
	int8_t x68 = INT8_MIN;

    t14 = (x65|((x66*x67)/x68));

    if (t14 != 511) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int32_t x70 = INT32_MIN;
	volatile uint64_t x71 = 3802185764109LLU;
	int16_t x72 = INT16_MAX;
	uint64_t t15 = 23911LLU;

    t15 = (x69|((x70*x71)/x72));

    if (t15 != 18446744073709540913LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x74 = -342482989;
	static int32_t x76 = -777;
	volatile uint64_t t16 = 7LLU;

    t16 = (x73|((x74*x75)/x76));

    if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x77 = INT16_MAX;
	volatile int16_t x78 = -1;
	volatile int64_t x79 = 40381147920893LL;
	volatile int32_t x80 = INT32_MAX;
	int64_t t17 = 46735700594LL;

    t17 = (x77|((x78*x79)/x80));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x81 = UINT16_MAX;
	volatile int32_t x82 = 614;
	volatile int8_t x83 = -29;
	uint16_t x84 = 6U;
	int32_t t18 = 3870187;

    t18 = (x81|((x82*x83)/x84));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x85 = 21U;
	int16_t x86 = 580;
	uint64_t x87 = 2LLU;
	uint8_t x88 = 42U;
	volatile uint64_t t19 = 57942LLU;

    t19 = (x85|((x86*x87)/x88));

    if (t19 != 31LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	int8_t x95 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;

    t20 = (x93|((x94*x95)/x96));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 1063249253707387126LLU;
	static uint32_t x104 = UINT32_MAX;
	uint64_t t21 = 16368793348776050LLU;

    t21 = (x101|((x102*x103)/x104));

    if (t21 != 2672492543LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x107 = 2U;
	int16_t x108 = 237;
	static volatile int32_t t22 = 13198;

    t22 = (x105|((x106*x107)/x108));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 3U;

    t23 = (x109|((x110*x111)/x112));

    if (t23 != 1431634175U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	static int16_t x115 = -15;

    t24 = (x113|((x114*x115)/x116));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = 0;
	volatile int8_t x118 = 0;
	uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MIN;
	uint64_t t25 = 1036003883892963381LLU;

    t25 = (x117|((x118*x119)/x120));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x121 = 3786263LL;
	int32_t x122 = INT32_MAX;
	int64_t x124 = 1LL;

    t26 = (x121|((x122*x123)/x124));

    if (t26 != -2143697385LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	int8_t x128 = -40;
	uint32_t t27 = UINT32_MAX;

    t27 = (x125|((x126*x127)/x128));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x129 = INT32_MAX;
	static int16_t x131 = 1;
	uint8_t x132 = 37U;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x129|((x130*x131)/x132));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	uint32_t x139 = 1436858680U;
	volatile int16_t x140 = INT16_MIN;
	static int64_t t29 = 36423515887LL;

    t29 = (x137|((x138*x139)/x140));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x145 = -1;
	uint16_t x146 = 442U;
	volatile uint32_t x147 = UINT32_MAX;
	uint32_t t30 = UINT32_MAX;

    t30 = (x145|((x146*x147)/x148));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x150 = 4811663;
	static uint32_t x151 = UINT32_MAX;
	int16_t x152 = -19;

    t31 = (x149|((x150*x151)/x152));

    if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x153 = INT8_MIN;
	uint32_t x154 = 31796U;
	volatile int32_t x155 = 55968;
	volatile int16_t x156 = INT16_MIN;
	uint32_t t32 = 3686192U;

    t32 = (x153|((x154*x155)/x156));

    if (t32 != 4294967168U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x161 = 7979U;
	volatile uint8_t x163 = 22U;
	static uint8_t x164 = 6U;
	static int32_t t33 = -3;

    t33 = (x161|((x162*x163)/x164));

    if (t33 != -114773) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = -2;
	int32_t x172 = INT32_MIN;
	volatile int64_t t34 = 544413235994836872LL;

    t34 = (x169|((x170*x171)/x172));

    if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	static volatile int8_t x175 = -1;
	int8_t x176 = INT8_MIN;

    t35 = (x173|((x174*x175)/x176));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x177 = INT64_MAX;
	volatile int64_t x179 = 245066LL;
	uint64_t t36 = 44LLU;

    t36 = (x177|((x178*x179)/x180));

    if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x182 = -1;
	static volatile int16_t x183 = 1;
	int16_t x184 = 710;
	volatile int32_t t37 = -175911;

    t37 = (x181|((x182*x183)/x184));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x186 = INT16_MIN;
	uint32_t x187 = 145U;
	volatile int64_t x188 = INT64_MAX;
	static volatile int64_t t38 = -71349256658LL;

    t38 = (x185|((x186*x187)/x188));

    if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x189 = INT32_MIN;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = -1;
	int32_t x192 = INT32_MIN;
	static int32_t t39 = INT32_MIN;

    t39 = (x189|((x190*x191)/x192));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = INT16_MAX;
	uint32_t x194 = 15659U;
	static int64_t x196 = -1LL;
	volatile int64_t t40 = 1887849310898086484LL;

    t40 = (x193|((x194*x195)/x196));

    if (t40 != -3781820417LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = INT8_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	int64_t t41 = 42442023200026523LL;

    t41 = (x197|((x198*x199)/x200));

    if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = INT16_MAX;
	uint32_t x206 = 3169U;
	uint32_t x207 = 34U;
	volatile uint32_t t42 = 0U;

    t42 = (x205|((x206*x207)/x208));

    if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x210 = -8080304LL;
	static int64_t x212 = INT64_MIN;
	static int64_t t43 = 29LL;

    t43 = (x209|((x210*x211)/x212));

    if (t43 != 28LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x214 = 76U;
	int64_t x215 = -1LL;
	uint16_t x216 = 165U;

    t44 = (x213|((x214*x215)/x216));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x217 = INT16_MAX;
	int32_t x218 = -243;
	volatile uint64_t x220 = 20881410043310LLU;
	volatile uint64_t t45 = 53783697336LLU;

    t45 = (x217|((x218*x219)/x220));

    if (t45 != 884735LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = 2638U;
	uint32_t x224 = 2U;
	volatile uint32_t t46 = 2889U;

    t46 = (x221|((x222*x223)/x224));

    if (t46 != 86440703U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x229 = INT16_MAX;
	int16_t x230 = -1;
	int16_t x231 = 226;
	uint64_t x232 = 4560958535394229677LLU;

    t47 = (x229|((x230*x231)/x232));

    if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x233 = 196055973161LLU;
	int32_t x234 = -2677;
	uint64_t x235 = UINT64_MAX;

    t48 = (x233|((x234*x235)/x236));

    if (t48 != 196055973161LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	static int32_t x244 = -1;
	int64_t t49 = 4040LL;

    t49 = (x241|((x242*x243)/x244));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x246 = -1;
	int64_t x247 = 67477223634434LL;
	int64_t x248 = INT64_MIN;

    t50 = (x245|((x246*x247)/x248));

    if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x253 = -1;
	int8_t x254 = -1;
	int64_t x256 = 3394884966LL;
	volatile int64_t t51 = 7537167061036LL;

    t51 = (x253|((x254*x255)/x256));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x261 = 7U;
	static int32_t x262 = -1;
	static int8_t x264 = -11;
	static volatile uint64_t t52 = 283431257210LLU;

    t52 = (x261|((x262*x263)/x264));

    if (t52 != 7LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x266 = 37U;
	int32_t x267 = 24577752;
	static volatile int32_t x268 = INT32_MIN;

    t53 = (x265|((x266*x267)/x268));

    if (t53 != 10633470U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x269 = INT16_MIN;
	uint32_t x270 = 10957399U;
	static uint16_t x271 = 1412U;
	uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t54 = 1U;

    t54 = (x269|((x270*x271)/x272));

    if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x273 = INT64_MIN;
	uint8_t x274 = 48U;
	static uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MIN;
	static volatile int64_t t55 = INT64_MIN;

    t55 = (x273|((x274*x275)/x276));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = 1;
	int64_t x280 = -1LL;

    t56 = (x277|((x278*x279)/x280));

    if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x285 = 26LLU;
	uint32_t x286 = 1628380U;
	uint64_t x287 = 10445665832LLU;
	volatile uint64_t x288 = 861028891460049LLU;
	volatile uint64_t t57 = 27LLU;

    t57 = (x285|((x286*x287)/x288));

    if (t57 != 27LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x289 = 661U;
	int16_t x290 = INT16_MIN;
	volatile int8_t x291 = -3;
	int8_t x292 = INT8_MIN;
	uint32_t t58 = 2U;

    t58 = (x289|((x290*x291)/x292));

    if (t58 != 4294967189U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x293 = 0U;
	uint16_t x294 = UINT16_MAX;
	uint32_t x295 = UINT32_MAX;

    t59 = (x293|((x294*x295)/x296));

    if (t59 != 2932LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x297 = 0U;

    t60 = (x297|((x298*x299)/x300));

    if (t60 != 8225811203LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x302 = -3;
	int64_t x303 = -1LL;
	static uint32_t x304 = UINT32_MAX;
	volatile int64_t t61 = -5642410345765259LL;

    t61 = (x301|((x302*x303)/x304));

    if (t61 != 444906LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x309 = 9U;
	static int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 15U;
	volatile int32_t t62 = 613;

    t62 = (x309|((x310*x311)/x312));

    if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	int8_t x323 = 25;
	int8_t x324 = -1;
	int32_t t63 = -872722;

    t63 = (x321|((x322*x323)/x324));

    if (t63 != -103) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x325 = INT64_MIN;
	int16_t x326 = -297;
	int8_t x327 = INT8_MIN;
	static uint8_t x328 = UINT8_MAX;
	static volatile int64_t t64 = 12045822816397122LL;

    t64 = (x325|((x326*x327)/x328));

    if (t64 != -9223372036854775659LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x329 = UINT64_MAX;
	static int8_t x330 = -1;
	static int32_t x331 = 59287;
	uint8_t x332 = UINT8_MAX;
	volatile uint64_t t65 = UINT64_MAX;

    t65 = (x329|((x330*x331)/x332));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x334 = 139680731675290430LLU;
	static volatile int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MAX;
	uint64_t t66 = 628253076LLU;

    t66 = (x333|((x334*x335)/x336));

    if (t66 != 51422LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x341 = 2U;
	uint32_t x342 = 2875381U;
	int8_t x343 = -1;
	int8_t x344 = -12;
	uint32_t t67 = 1U;

    t67 = (x341|((x342*x343)/x344));

    if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x345 = 0;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t68 = -9;

    t68 = (x345|((x346*x347)/x348));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x349 = -1;
	volatile int16_t x350 = INT16_MIN;
	uint32_t x351 = 102U;
	int64_t x352 = INT64_MAX;

    t69 = (x349|((x350*x351)/x352));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x353 = INT32_MIN;
	volatile uint8_t x354 = 1U;
	volatile int8_t x356 = -23;
	volatile int32_t t70 = 912;

    t70 = (x353|((x354*x355)/x356));

    if (t70 != -2147482224) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x365 = INT64_MIN;
	static volatile uint32_t x367 = UINT32_MAX;
	int16_t x368 = 1311;
	static int64_t t71 = -2009LL;

    t71 = (x365|((x366*x367)/x368));

    if (t71 != -9223372036851499709LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x369 = -1;
	volatile int64_t x370 = 0LL;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = -6;
	int64_t t72 = -3146LL;

    t72 = (x369|((x370*x371)/x372));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x379 = INT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	uint32_t t73 = 1171995508U;

    t73 = (x377|((x378*x379)/x380));

    if (t73 != 65535U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	static uint16_t x382 = 423U;
	static uint8_t x383 = 1U;
	int64_t x384 = INT64_MIN;

    t74 = (x381|((x382*x383)/x384));

    if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x385 = INT64_MIN;
	uint64_t x388 = 17LLU;

    t75 = (x385|((x386*x387)/x388));

    if (t75 != 10308474629425925530LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x389 = 0U;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 311982745LL;
	volatile uint64_t x392 = 2289319067797720388LLU;

    t76 = (x389|((x390*x391)/x392));

    if (t76 != 7LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x393 = 113U;
	uint8_t x394 = UINT8_MAX;
	static volatile uint64_t x395 = 2969683LLU;
	static int16_t x396 = INT16_MIN;
	static volatile uint64_t t77 = 71585LLU;

    t77 = (x393|((x394*x395)/x396));

    if (t77 != 113LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x398 = 259120466836570LL;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = -235137521727LL;
	volatile int64_t t78 = -77925908592696888LL;

    t78 = (x397|((x398*x399)/x400));

    if (t78 != -9223372036854634753LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x405 = UINT16_MAX;
	uint32_t x406 = 19305869U;
	volatile uint16_t x407 = UINT16_MAX;
	uint8_t x408 = 10U;
	static volatile uint32_t t79 = 234557U;

    t79 = (x405|((x406*x407)/x408));

    if (t79 != 249036799U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x414 = INT16_MIN;
	uint32_t x415 = 344530U;
	volatile int16_t x416 = -223;
	static volatile uint64_t t80 = UINT64_MAX;

    t80 = (x413|((x414*x415)/x416));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x417 = UINT16_MAX;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	uint64_t t81 = 28722LLU;

    t81 = (x417|((x418*x419)/x420));

    if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint64_t x422 = 59926969LLU;
	volatile uint64_t x423 = UINT64_MAX;
	static volatile int64_t x424 = INT64_MIN;
	uint64_t t82 = 40440788844LLU;

    t82 = (x421|((x422*x423)/x424));

    if (t82 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x425 = -7;
	uint8_t x426 = UINT8_MAX;
	int16_t x428 = 121;
	volatile int32_t t83 = -78615791;

    t83 = (x425|((x426*x427)/x428));

    if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x429 = UINT32_MAX;
	static volatile int32_t x430 = INT32_MAX;
	int64_t x431 = -38LL;
	int8_t x432 = INT8_MIN;
	int64_t t84 = -129162473829382370LL;

    t84 = (x429|((x430*x431)/x432));

    if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x434 = INT32_MIN;
	int32_t t85 = INT32_MIN;

    t85 = (x433|((x434*x435)/x436));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x437 = -1;
	volatile uint64_t x438 = UINT64_MAX;
	volatile int32_t x439 = INT32_MIN;
	uint64_t t86 = UINT64_MAX;

    t86 = (x437|((x438*x439)/x440));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x446 = 3614075LLU;
	static int16_t x447 = INT16_MAX;
	int8_t x448 = -1;
	uint64_t t87 = 17363814462145979LLU;

    t87 = (x445|((x446*x447)/x448));

    if (t87 != 12LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x449 = UINT16_MAX;
	int32_t x450 = 4401205;
	static int16_t x451 = -1;
	int8_t x452 = INT8_MAX;
	int32_t t88 = 97087901;

    t88 = (x449|((x450*x451)/x452));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	volatile int32_t x454 = -1;
	int64_t x455 = INT64_MAX;
	int32_t x456 = 2016422;
	static volatile int64_t t89 = -18724818886796008LL;

    t89 = (x453|((x454*x455)/x456));

    if (t89 != -4569845202945LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x458 = INT32_MIN;
	static uint32_t x459 = 1774596U;
	int32_t x460 = 832754;
	volatile uint32_t t90 = 53014468U;

    t90 = (x457|((x458*x459)/x460));

    if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x465 = 69U;
	uint64_t x466 = UINT64_MAX;
	int16_t x467 = 7260;

    t91 = (x465|((x466*x467)/x468));

    if (t91 != 69LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x470 = INT8_MIN;
	volatile int16_t x471 = -16;
	uint16_t x472 = 9U;
	volatile int32_t t92 = -9268;

    t92 = (x469|((x470*x471)/x472));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x477 = INT64_MIN;
	uint16_t x478 = 723U;
	static int8_t x479 = 15;
	static uint16_t x480 = 12976U;

    t93 = (x477|((x478*x479)/x480));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x482 = 586U;
	int16_t x483 = INT16_MIN;
	volatile uint64_t x484 = 1793083935324LLU;
	volatile uint64_t t94 = 2457LLU;

    t94 = (x481|((x482*x483)/x484));

    if (t94 != 10289151LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x497 = -1;
	uint8_t x498 = 16U;
	int8_t x499 = INT8_MAX;
	int64_t x500 = 10234076790LL;
	int64_t t95 = 6LL;

    t95 = (x497|((x498*x499)/x500));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x501 = 987U;
	volatile int64_t x502 = INT64_MAX;
	static uint64_t x503 = 12757914646380LLU;
	static volatile int32_t x504 = -1;
	uint64_t t96 = 580012071760187965LLU;

    t96 = (x501|((x502*x503)/x504));

    if (t96 != 987LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x505 = 24U;
	int16_t x506 = INT16_MIN;
	static int8_t x507 = INT8_MAX;
	uint8_t x508 = 2U;
	int32_t t97 = 7;

    t97 = (x505|((x506*x507)/x508));

    if (t97 != -2080744) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x509 = 26U;
	int32_t x510 = -1;
	static int16_t x512 = -866;
	int32_t t98 = 0;

    t98 = (x509|((x510*x511)/x512));

    if (t98 != 26) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x513 = 11;
	uint8_t x515 = 6U;
	volatile int16_t x516 = 5328;
	int32_t t99 = -6717442;

    t99 = (x513|((x514*x515)/x516));

    if (t99 != 463) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x517 = UINT64_MAX;
	uint64_t x518 = 391850122318LLU;
	uint16_t x519 = 131U;
	int32_t x520 = INT32_MIN;
	uint64_t t100 = UINT64_MAX;

    t100 = (x517|((x518*x519)/x520));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	int32_t x523 = -1;
	int32_t x524 = 9329428;
	uint32_t t101 = UINT32_MAX;

    t101 = (x521|((x522*x523)/x524));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x525 = INT16_MIN;
	int16_t x528 = -1;
	int32_t t102 = 43;

    t102 = (x525|((x526*x527)/x528));

    if (t102 != -8670) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x534 = UINT8_MAX;
	int8_t x535 = -11;
	volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t103 = -25651093;

    t103 = (x533|((x534*x535)/x536));

    if (t103 != -23) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x537 = INT32_MIN;
	static uint64_t x539 = 264216351631LLU;
	int32_t x540 = -1;
	volatile uint64_t t104 = 125998331117LLU;

    t104 = (x537|((x538*x539)/x540));

    if (t104 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x541 = UINT64_MAX;
	volatile int16_t x543 = 3529;
	static int64_t x544 = -431LL;
	uint64_t t105 = UINT64_MAX;

    t105 = (x541|((x542*x543)/x544));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x545 = 712;
	int64_t x546 = -93960176876065LL;
	uint16_t x547 = UINT16_MAX;

    t106 = (x545|((x546*x547)/x548));

    if (t106 != 707927763711LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x553 = 5U;
	int8_t x554 = INT8_MIN;
	uint64_t x556 = 4701LLU;
	uint64_t t107 = 117471433906LLU;

    t107 = (x553|((x554*x555)/x556));

    if (t107 != 3924004270093077LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x559 = INT16_MAX;
	static uint64_t t108 = UINT64_MAX;

    t108 = (x557|((x558*x559)/x560));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x561 = INT8_MIN;
	static uint32_t x562 = 692U;
	volatile uint64_t x564 = 24807237720459LLU;
	volatile uint64_t t109 = 5011LLU;

    t109 = (x561|((x562*x563)/x564));

    if (t109 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x565 = 5U;
	uint8_t x566 = 37U;
	uint16_t x567 = 6528U;
	volatile uint16_t x568 = 4U;
	volatile int32_t t110 = -236;

    t110 = (x565|((x566*x567)/x568));

    if (t110 != 60389) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int8_t x570 = INT8_MIN;
	static int8_t x571 = INT8_MIN;
	uint8_t x572 = 10U;

    t111 = (x569|((x570*x571)/x572));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x573 = INT8_MAX;
	volatile uint16_t x575 = 1U;
	volatile int16_t x576 = -1;
	volatile uint32_t t112 = 49164624U;

    t112 = (x573|((x574*x575)/x576));

    if (t112 != 127U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x577 = INT32_MIN;
	volatile int16_t x578 = 30;
	static uint64_t x579 = UINT64_MAX;
	int8_t x580 = -1;
	volatile uint64_t t113 = 130880120604053LLU;

    t113 = (x577|((x578*x579)/x580));

    if (t113 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x581 = INT32_MIN;
	static volatile uint32_t x582 = UINT32_MAX;
	int32_t x584 = INT32_MIN;
	uint32_t t114 = 12729U;

    t114 = (x581|((x582*x583)/x584));

    if (t114 != 2147483649U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x585 = 7U;
	static uint64_t x586 = UINT64_MAX;
	volatile int8_t x587 = -14;
	int32_t x588 = -1;
	volatile uint64_t t115 = 16284817017972LLU;

    t115 = (x585|((x586*x587)/x588));

    if (t115 != 7LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint64_t x594 = 0LLU;
	uint16_t x595 = UINT16_MAX;
	uint16_t x596 = 57U;
	uint64_t t116 = 7105LLU;

    t116 = (x593|((x594*x595)/x596));

    if (t116 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x606 = INT16_MIN;
	uint64_t x607 = 560082389389678478LLU;
	uint8_t x608 = UINT8_MAX;

    t117 = (x605|((x606*x607)/x608));

    if (t117 != 18203334758622395390LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x613 = 590LL;
	uint32_t x614 = 14950152U;
	int16_t x615 = -1;
	int32_t x616 = -200911;
	volatile int64_t t118 = -1LL;

    t118 = (x613|((x614*x615)/x616));

    if (t118 != 590LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x618 = 7U;
	int32_t x619 = 4095;
	static volatile int32_t t119 = 46909757;

    t119 = (x617|((x618*x619)/x620));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x622 = -1;
	int8_t x623 = INT8_MIN;
	int64_t x624 = 13LL;
	volatile int64_t t120 = -6338796636LL;

    t120 = (x621|((x622*x623)/x624));

    if (t120 != 9LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x625 = INT64_MIN;
	int16_t x626 = INT16_MIN;
	static int16_t x627 = INT16_MAX;
	int64_t x628 = 113593822945119678LL;
	static volatile int64_t t121 = INT64_MIN;

    t121 = (x625|((x626*x627)/x628));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint32_t x630 = UINT32_MAX;
	int32_t x631 = INT32_MAX;
	int64_t x632 = INT64_MIN;
	int64_t t122 = INT64_MAX;

    t122 = (x629|((x630*x631)/x632));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x637 = 21024;
	int64_t x638 = -2052592LL;
	volatile uint16_t x639 = 18U;
	int64_t t123 = -3230618177599191466LL;

    t123 = (x637|((x638*x639)/x640));

    if (t123 != -2173332LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x641 = 763149LL;
	int64_t x643 = -343895783609LL;
	uint8_t x644 = 31U;
	int64_t t124 = 1777252350106893944LL;

    t124 = (x641|((x642*x643)/x644));

    if (t124 != -53381499722387LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x646 = 7U;
	int16_t x647 = 46;
	int8_t x648 = INT8_MIN;
	volatile int32_t t125 = -445;

    t125 = (x645|((x646*x647)/x648));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x651 = -1;
	uint64_t x652 = UINT64_MAX;
	uint64_t t126 = 491694421637LLU;

    t126 = (x649|((x650*x651)/x652));

    if (t126 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x653 = -1;
	int8_t x654 = INT8_MIN;
	uint8_t x655 = UINT8_MAX;
	int64_t x656 = -398821656001985386LL;
	int64_t t127 = -45133LL;

    t127 = (x653|((x654*x655)/x656));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x657 = 0U;
	static int8_t x658 = INT8_MIN;
	uint16_t x659 = UINT16_MAX;
	int64_t t128 = -19278LL;

    t128 = (x657|((x658*x659)/x660));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x661 = 3U;
	uint64_t x662 = UINT64_MAX;
	int16_t x663 = INT16_MIN;
	int64_t x664 = INT64_MIN;
	uint64_t t129 = 23221LLU;

    t129 = (x661|((x662*x663)/x664));

    if (t129 != 3LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x665 = 0;
	int32_t x667 = -1;
	static uint32_t x668 = 647745U;
	static volatile uint32_t t130 = 2662493U;

    t130 = (x665|((x666*x667)/x668));

    if (t130 != 6630U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x673 = INT16_MAX;
	volatile int64_t x674 = 32006787LL;
	uint8_t x675 = 68U;
	static uint64_t x676 = UINT64_MAX;
	static volatile uint64_t t131 = 7964LLU;

    t131 = (x673|((x674*x675)/x676));

    if (t131 != 32767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x681 = -1LL;
	int16_t x682 = INT16_MIN;
	int8_t x683 = 56;
	int8_t x684 = -1;
	int64_t t132 = -3481942208866LL;

    t132 = (x681|((x682*x683)/x684));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x685 = UINT16_MAX;
	int16_t x687 = INT16_MIN;
	volatile int32_t t133 = -2;

    t133 = (x685|((x686*x687)/x688));

    if (t133 != 16777215) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x693 = -10004647720LL;
	uint64_t x694 = UINT64_MAX;
	int8_t x696 = INT8_MAX;
	uint64_t t134 = 8710236374933622LLU;

    t134 = (x693|((x694*x695)/x696));

    if (t134 != 18446744063709131225LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x697 = -1;
	uint64_t x698 = 35102249015LLU;
	static int8_t x699 = INT8_MIN;
	int32_t x700 = -425427;

    t135 = (x697|((x698*x699)/x700));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x701 = 0U;
	uint8_t x703 = 7U;
	uint64_t x704 = UINT64_MAX;

    t136 = (x701|((x702*x703)/x704));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x705 = 13252U;
	int32_t x706 = INT32_MIN;
	int64_t x708 = -2123691439LL;
	volatile uint64_t t137 = 84990153851629LLU;

    t137 = (x705|((x706*x707)/x708));

    if (t137 != 13252LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x709 = INT32_MIN;
	uint8_t x710 = UINT8_MAX;
	uint16_t x711 = 1U;
	uint64_t x712 = 6726866660260081LLU;
	static volatile uint64_t t138 = 277287596762LLU;

    t138 = (x709|((x710*x711)/x712));

    if (t138 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x717 = UINT16_MAX;
	static int16_t x718 = -4;
	int16_t x719 = INT16_MIN;
	static uint16_t x720 = 1U;
	volatile int32_t t139 = -2777575;

    t139 = (x717|((x718*x719)/x720));

    if (t139 != 196607) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x721 = 0U;
	int16_t x722 = INT16_MIN;
	volatile int64_t x724 = -1LL;
	volatile int64_t t140 = -3155228465023387LL;

    t140 = (x721|((x722*x723)/x724));

    if (t140 != -4194304LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x725 = -1;
	int16_t x728 = 3876;
	int32_t t141 = 31;

    t141 = (x725|((x726*x727)/x728));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x729 = 1U;
	static uint64_t x730 = 824773988LLU;
	int32_t x732 = -1;
	uint64_t t142 = 1440805178049022LLU;

    t142 = (x729|((x730*x731)/x732));

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x734 = UINT16_MAX;
	volatile int64_t t143 = -212788816LL;

    t143 = (x733|((x734*x735)/x736));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x737 = 1805;
	static volatile uint32_t x739 = 60611U;
	uint64_t x740 = 15LLU;
	static uint64_t t144 = 2318LLU;

    t144 = (x737|((x738*x739)/x740));

    if (t144 != 12127LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x741 = 51;
	int32_t x742 = INT32_MIN;
	uint8_t x743 = 0U;
	uint32_t x744 = 37U;
	volatile uint32_t t145 = 20U;

    t145 = (x741|((x742*x743)/x744));

    if (t145 != 51U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	volatile uint32_t x746 = UINT32_MAX;
	int16_t x748 = -1;
	uint64_t t146 = UINT64_MAX;

    t146 = (x745|((x746*x747)/x748));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x749 = INT32_MAX;
	volatile int8_t x750 = 1;
	uint16_t x752 = 2498U;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x749|((x750*x751)/x752));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x753 = 10;
	volatile uint8_t x755 = 4U;
	int8_t x756 = -1;
	volatile int32_t t148 = 3;

    t148 = (x753|((x754*x755)/x756));

    if (t148 != -3202) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x769 = INT64_MIN;
	volatile int64_t x770 = -1802LL;
	int16_t x771 = -1;
	static int64_t x772 = INT64_MAX;
	int64_t t149 = INT64_MIN;

    t149 = (x769|((x770*x771)/x772));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x773 = UINT64_MAX;
	int8_t x774 = 1;
	uint64_t t150 = UINT64_MAX;

    t150 = (x773|((x774*x775)/x776));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x781 = INT64_MIN;
	int8_t x783 = -1;
	int8_t x784 = -1;
	volatile int64_t t151 = -1532853LL;

    t151 = (x781|((x782*x783)/x784));

    if (t151 != -9223372036854773727LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x785 = -6;
	int32_t t152 = 1114;

    t152 = (x785|((x786*x787)/x788));

    if (t152 != -6) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x798 = INT8_MIN;
	static int8_t x799 = -1;
	volatile uint16_t x800 = UINT16_MAX;
	volatile int64_t t153 = INT64_MIN;

    t153 = (x797|((x798*x799)/x800));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x803 = 1169064LLU;
	int64_t x804 = 122713LL;
	volatile uint64_t t154 = 43163723020414384LLU;

    t154 = (x801|((x802*x803)/x804));

    if (t154 != 30744198791387900LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x806 = -1;
	uint16_t x807 = 14181U;
	int16_t x808 = INT16_MIN;
	int32_t t155 = -57;

    t155 = (x805|((x806*x807)/x808));

    if (t155 != -27) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x810 = INT32_MAX;
	volatile int16_t x812 = INT16_MIN;
	uint32_t t156 = 31709383U;

    t156 = (x809|((x810*x811)/x812));

    if (t156 != 2147483648U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x817 = -1;
	volatile int32_t x819 = -1;
	int32_t x820 = INT32_MAX;
	volatile int64_t t157 = -2037788001838766LL;

    t157 = (x817|((x818*x819)/x820));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x830 = -1LL;
	int32_t x831 = INT32_MIN;
	volatile int32_t x832 = INT32_MIN;
	volatile int64_t t158 = 109715262LL;

    t158 = (x829|((x830*x831)/x832));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x841 = INT64_MIN;
	uint8_t x842 = 121U;
	static int8_t x843 = INT8_MIN;

    t159 = (x841|((x842*x843)/x844));

    if (t159 != -9223372036138950507LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x845 = UINT8_MAX;
	int16_t x847 = INT16_MIN;
	int8_t x848 = INT8_MAX;
	int32_t t160 = -222189455;

    t160 = (x845|((x846*x847)/x848));

    if (t160 != -8454401) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x849 = -6;
	int16_t x850 = -41;
	static volatile int32_t x851 = 584840;
	static int32_t t161 = -24;

    t161 = (x849|((x850*x851)/x852));

    if (t161 != -5) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x854 = INT16_MIN;
	int16_t x855 = 1;
	int64_t x856 = -1LL;
	int64_t t162 = 1747941280LL;

    t162 = (x853|((x854*x855)/x856));

    if (t162 != -128LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x857 = -1;
	int64_t x858 = 61884977480189LL;
	uint16_t x859 = 2U;
	volatile int32_t x860 = INT32_MIN;
	int64_t t163 = 407270816707569LL;

    t163 = (x857|((x858*x859)/x860));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x861 = -920;
	volatile uint64_t x862 = 107151149621LLU;
	uint8_t x863 = UINT8_MAX;
	int32_t x864 = INT32_MIN;
	uint64_t t164 = 35215583442928204LLU;

    t164 = (x861|((x862*x863)/x864));

    if (t164 != 18446744073709550696LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x869 = UINT32_MAX;
	uint64_t x872 = 8LLU;
	volatile uint64_t t165 = 2LLU;

    t165 = (x869|((x870*x871)/x872));

    if (t165 != 4294967295LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x877 = INT64_MIN;
	int8_t x878 = INT8_MIN;
	int8_t x879 = -2;
	int8_t x880 = INT8_MIN;
	volatile int64_t t166 = -3935276LL;

    t166 = (x877|((x878*x879)/x880));

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x882 = 179881902853441938LLU;
	int32_t x883 = -1;
	volatile int8_t x884 = 3;
	volatile uint64_t t167 = 222770124434140639LLU;

    t167 = (x881|((x882*x883)/x884));

    if (t167 != 18446744073709534415LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x885 = 66U;
	int32_t x887 = -1;
	static volatile uint8_t x888 = 9U;
	uint64_t t168 = 361946336410465858LLU;

    t168 = (x885|((x886*x887)/x888));

    if (t168 != 66LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x889 = -30110;
	int32_t x890 = -1;
	static int64_t x891 = -3439658LL;

    t169 = (x889|((x890*x891)/x892));

    if (t169 != 18446744073709521506LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x893 = -960;
	int8_t x894 = -1;
	volatile int64_t x895 = -1LL;
	int16_t x896 = INT16_MAX;
	volatile int64_t t170 = -137021358256034672LL;

    t170 = (x893|((x894*x895)/x896));

    if (t170 != -960LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x901 = 35;
	int16_t x902 = -1;
	uint64_t x903 = 61435614221151LLU;
	uint32_t x904 = 52535U;
	uint64_t t171 = 10LLU;

    t171 = (x901|((x902*x903)/x904));

    if (t171 != 351131296052067LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x905 = 1341696795U;
	volatile uint32_t x906 = 3430903U;
	volatile int64_t x907 = -1LL;
	int16_t x908 = INT16_MAX;

    t172 = (x905|((x906*x907)/x908));

    if (t172 != -101LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x909 = -1306;
	volatile int16_t x910 = 1;
	int64_t x911 = 4LL;
	uint32_t x912 = UINT32_MAX;

    t173 = (x909|((x910*x911)/x912));

    if (t173 != -1306LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x914 = -100;
	uint32_t x916 = 19022U;
	volatile uint32_t t174 = 2302U;

    t174 = (x913|((x914*x915)/x916));

    if (t174 != 65535U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x925 = 4LLU;
	uint8_t x926 = 3U;
	int16_t x928 = -24;
	volatile uint64_t t175 = 34355236978511340LLU;

    t175 = (x925|((x926*x927)/x928));

    if (t175 != 4100LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x931 = INT8_MIN;
	volatile int64_t x932 = INT64_MAX;
	static volatile int64_t t176 = 25653950837397491LL;

    t176 = (x929|((x930*x931)/x932));

    if (t176 != 545081392LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x933 = INT16_MIN;
	uint32_t x934 = 1132352236U;
	int32_t x935 = INT32_MIN;
	uint64_t x936 = 13817443073LLU;
	uint64_t t177 = 1070644913509LLU;

    t177 = (x933|((x934*x935)/x936));

    if (t177 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x937 = INT32_MIN;
	uint8_t x938 = 2U;
	uint64_t x939 = 56837033LLU;
	int8_t x940 = INT8_MAX;
	volatile uint64_t t178 = 481395540LLU;

    t178 = (x937|((x938*x939)/x940));

    if (t178 != 18446744071562963039LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x942 = 0LLU;
	int8_t x944 = -1;
	uint64_t t179 = 4057947466790815LLU;

    t179 = (x941|((x942*x943)/x944));

    if (t179 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x945 = 6731;
	int16_t x947 = INT16_MIN;
	volatile int64_t x948 = INT64_MIN;
	volatile int64_t t180 = -1LL;

    t180 = (x945|((x946*x947)/x948));

    if (t180 != 6731LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x949 = -1;
	uint64_t x950 = 15639769LLU;
	volatile uint16_t x952 = 1759U;

    t181 = (x949|((x950*x951)/x952));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x953 = -1;
	volatile uint16_t x955 = 61U;
	int8_t x956 = INT8_MIN;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = (x953|((x954*x955)/x956));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x957 = INT8_MAX;
	int32_t x958 = INT32_MIN;
	int32_t x960 = INT32_MAX;
	int64_t t183 = 1LL;

    t183 = (x957|((x958*x959)/x960));

    if (t183 != 127LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x961 = 38U;
	uint16_t x962 = UINT16_MAX;
	volatile int64_t x964 = -1LL;
	static volatile int64_t t184 = 7492406LL;

    t184 = (x961|((x962*x963)/x964));

    if (t184 != 38LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x965 = 45;
	volatile int64_t x966 = INT64_MIN;
	uint64_t x967 = UINT64_MAX;
	int32_t x968 = INT32_MAX;
	uint64_t t185 = 3865841965089197LLU;

    t185 = (x965|((x966*x967)/x968));

    if (t185 != 4294967343LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x970 = INT16_MIN;
	uint64_t x972 = UINT64_MAX;
	volatile uint64_t t186 = 2796781885378204767LLU;

    t186 = (x969|((x970*x971)/x972));

    if (t186 != 7407712688992LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x977 = 12U;
	int16_t x978 = -1;
	static int64_t t187 = -1118799276004309LL;

    t187 = (x977|((x978*x979)/x980));

    if (t187 != 12LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x981 = 4U;
	int64_t x982 = -1LL;
	int16_t x984 = 3;
	int64_t t188 = 19595LL;

    t188 = (x981|((x982*x983)/x984));

    if (t188 != -81LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x985 = INT8_MIN;
	static int16_t x986 = -1;
	volatile uint8_t x987 = UINT8_MAX;
	static volatile uint32_t t189 = 2U;

    t189 = (x985|((x986*x987)/x988));

    if (t189 != 4294967176U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1001 = 981U;
	uint32_t x1002 = 61510U;
	int64_t x1004 = -1055948358396LL;
	volatile int64_t t190 = -5813220265586LL;

    t190 = (x1001|((x1002*x1003)/x1004));

    if (t190 != 981LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1006 = -1466196;
	static int32_t x1007 = -1;
	uint16_t x1008 = 6731U;
	volatile int32_t t191 = 1;

    t191 = (x1005|((x1006*x1007)/x1008));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1009 = INT16_MIN;
	static volatile uint32_t x1011 = 39938855U;
	uint8_t x1012 = 2U;
	uint32_t t192 = 523150252U;

    t192 = (x1009|((x1010*x1011)/x1012));

    if (t192 != 4294961959U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1014 = INT16_MIN;
	int64_t x1015 = -37207LL;
	uint8_t x1016 = 6U;
	volatile int64_t t193 = -241281244699250465LL;

    t193 = (x1013|((x1014*x1015)/x1016));

    if (t193 != 4294967295LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1017 = -12;
	volatile int32_t x1018 = -1;
	int64_t x1020 = -1LL;
	int64_t t194 = 257755253159524LL;

    t194 = (x1017|((x1018*x1019)/x1020));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1021 = -1;
	int8_t x1022 = -14;
	int16_t x1023 = 1;
	uint64_t x1024 = 551975335725LLU;

    t195 = (x1021|((x1022*x1023)/x1024));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1025 = 132906364LLU;
	uint64_t x1026 = 3603764LLU;
	int16_t x1028 = -1;
	volatile uint64_t t196 = 65623432LLU;

    t196 = (x1025|((x1026*x1027)/x1028));

    if (t196 != 132906364LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = -19004146888LL;
	static uint64_t x1032 = UINT64_MAX;
	uint64_t t197 = 703307108258156753LLU;

    t197 = (x1029|((x1030*x1031)/x1032));

    if (t197 != 18446744054705404728LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1034 = -1;
	static volatile int32_t x1035 = INT32_MAX;
	uint32_t t198 = 12U;

    t198 = (x1033|((x1034*x1035)/x1036));

    if (t198 != 308262354U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1037 = INT64_MAX;
	uint8_t x1039 = 1U;
	static int8_t x1040 = INT8_MAX;
	static int64_t t199 = INT64_MAX;

    t199 = (x1037|((x1038*x1039)/x1040));

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

