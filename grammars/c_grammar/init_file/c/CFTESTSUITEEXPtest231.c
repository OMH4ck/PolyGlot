
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

static int8_t x1 = 1;
volatile int16_t x7 = -485;
int64_t x8 = -1LL;
volatile int32_t t1 = 1744;
int64_t x10 = INT64_MAX;
int16_t x12 = -1;
volatile uint64_t x25 = UINT64_MAX;
static int32_t x28 = -364;
int32_t t3 = -4082;
int8_t x38 = INT8_MIN;
static uint16_t x39 = 28512U;
volatile uint16_t x47 = 25U;
int32_t t6 = -1;
uint8_t x52 = UINT8_MAX;
int64_t x57 = INT64_MIN;
uint32_t x58 = 3U;
int32_t x61 = INT32_MAX;
int8_t x62 = -1;
static int8_t x65 = -1;
static int8_t x72 = 3;
volatile int32_t t14 = 72;
static volatile int8_t x98 = INT8_MAX;
int32_t x100 = -4327029;
volatile int32_t t15 = 187;
int32_t x101 = -1;
volatile int32_t t16 = 157;
volatile int8_t x105 = -1;
int8_t x110 = -1;
int16_t x111 = 0;
volatile int8_t x112 = -1;
volatile int8_t x123 = INT8_MAX;
volatile int8_t x134 = -29;
volatile uint16_t x136 = 1U;
int64_t x158 = INT64_MAX;
uint16_t x160 = 5U;
uint8_t x175 = 0U;
int64_t x179 = -1LL;
volatile int16_t x186 = -49;
volatile int32_t t33 = -2337766;
static uint8_t x192 = 0U;
int32_t t35 = 1028079359;
volatile int32_t t36 = -1546878;
static int16_t x213 = INT16_MAX;
uint32_t x214 = UINT32_MAX;
int32_t t39 = 5249169;
uint64_t x240 = UINT64_MAX;
uint64_t x248 = 139587162350729LLU;
int32_t x250 = INT32_MIN;
static int32_t x251 = INT32_MIN;
static uint64_t x258 = 164699LLU;
int32_t t45 = 166877720;
volatile int32_t t48 = -3574;
static int8_t x302 = INT8_MIN;
static int64_t x305 = -824051328119028LL;
int32_t x308 = 6;
uint64_t x317 = UINT64_MAX;
uint8_t x322 = UINT8_MAX;
uint8_t x323 = 32U;
uint64_t x324 = 49959573064228147LLU;
int16_t x328 = INT16_MIN;
int32_t x336 = INT32_MIN;
uint64_t x339 = 1LLU;
int32_t t58 = 94;
int8_t x356 = INT8_MAX;
static volatile int64_t x360 = 1618518771055630LL;
volatile int8_t x368 = INT8_MIN;
uint8_t x372 = 27U;
int32_t t64 = -58123;
volatile int32_t x385 = 353926;
uint16_t x387 = UINT16_MAX;
volatile int64_t x396 = INT64_MAX;
volatile int32_t t66 = -1;
int16_t x406 = 365;
int8_t x407 = 6;
int32_t t68 = 10;
volatile int32_t t69 = -288497159;
int64_t x433 = -1LL;
int8_t x434 = INT8_MIN;
volatile int32_t x437 = INT32_MIN;
static int8_t x445 = INT8_MIN;
int16_t x447 = -983;
static int32_t t75 = 158;
volatile int32_t t76 = 14505241;
uint32_t x460 = 88U;
static uint8_t x465 = 63U;
int8_t x469 = -2;
uint16_t x472 = 7705U;
volatile uint64_t x475 = 27004826668LLU;
int16_t x476 = -929;
int16_t x477 = -787;
int8_t x479 = INT8_MIN;
volatile int8_t x486 = -1;
int8_t x488 = -31;
static int32_t t84 = -4;
static volatile uint8_t x489 = 21U;
int32_t t85 = 16338511;
int16_t x504 = INT16_MIN;
volatile int32_t t86 = 250158564;
static uint16_t x505 = UINT16_MAX;
static int8_t x513 = -1;
int64_t x517 = -3531011737LL;
static uint64_t x520 = 4644298984914692LLU;
int32_t t89 = -55208505;
int16_t x533 = INT16_MIN;
static int32_t t92 = -1144011;
int16_t x538 = INT16_MIN;
int64_t x541 = INT64_MIN;
int16_t x542 = INT16_MAX;
uint64_t x543 = 18684046287277LLU;
uint8_t x548 = 19U;
int32_t x564 = -1;
uint32_t x567 = 1869518U;
int32_t t98 = -3390930;
int8_t x581 = INT8_MIN;
volatile int64_t x584 = -1LL;
uint8_t x585 = 50U;
int16_t x586 = INT16_MIN;
uint32_t x588 = UINT32_MAX;
uint8_t x593 = 101U;
static int8_t x595 = -1;
int32_t t106 = -2;
int64_t x619 = INT64_MIN;
int32_t x621 = -1;
int64_t x625 = INT64_MIN;
int8_t x632 = 1;
static int8_t x646 = 8;
uint8_t x659 = 4U;
int32_t t114 = 0;
int32_t x664 = INT32_MIN;
int64_t x665 = INT64_MIN;
volatile int32_t t116 = -18658694;
int32_t t117 = 92;
int64_t x674 = -16840799801LL;
volatile int32_t t118 = 512626;
int8_t x678 = -10;
int32_t t119 = 0;
int32_t t120 = -30;
uint64_t x690 = 566074320164890102LLU;
volatile int32_t t121 = 5647;
int64_t x713 = INT64_MIN;
static int8_t x715 = INT8_MIN;
int8_t x721 = 0;
int32_t x733 = -1;
volatile int32_t t130 = -12;
int32_t x757 = -3;
int32_t x765 = -3807339;
volatile int32_t t133 = -185;
uint32_t x785 = 1U;
uint8_t x790 = UINT8_MAX;
int16_t x804 = -1;
static volatile int32_t t138 = 2;
static volatile int32_t x813 = -7;
static int8_t x814 = INT8_MAX;
int16_t x816 = -4;
volatile int8_t x820 = INT8_MAX;
static volatile int64_t x823 = 1566477873LL;
int8_t x824 = -1;
int32_t x827 = INT32_MIN;
int8_t x832 = -14;
static int32_t t143 = 9834656;
static int16_t x834 = INT16_MIN;
volatile int16_t x836 = INT16_MIN;
int32_t x846 = -1;
int8_t x847 = INT8_MAX;
int32_t t146 = -149601;
volatile int8_t x853 = INT8_MIN;
volatile int32_t t148 = 2173092;
uint8_t x862 = UINT8_MAX;
int64_t x864 = -1LL;
static volatile int32_t t150 = 35262;
volatile int8_t x880 = -1;
volatile int32_t t153 = -371;
static int32_t x883 = -132207;
int32_t x884 = -1;
static volatile int16_t x890 = -1;
int8_t x892 = INT8_MIN;
volatile int16_t x898 = 3083;
int32_t x899 = 1;
uint64_t x906 = 23LLU;
int16_t x910 = INT16_MIN;
int64_t x918 = -1LL;
int8_t x921 = INT8_MIN;
uint8_t x922 = 62U;
int32_t x924 = INT32_MIN;
uint64_t x939 = 249443677975467927LLU;
volatile int32_t t164 = 0;
volatile int32_t x945 = INT32_MIN;
volatile int32_t t165 = -24;
int8_t x949 = INT8_MIN;
uint16_t x972 = 13302U;
volatile int32_t t169 = -102867228;
int32_t t171 = 54;
int16_t x994 = INT16_MIN;
uint32_t x995 = 3500410U;
int32_t x1000 = -1;
int64_t x1007 = 0LL;
int64_t x1008 = -76152446949545LL;
static uint8_t x1019 = 0U;
int16_t x1047 = INT16_MAX;
int8_t x1048 = -1;
static uint16_t x1072 = 2982U;
int32_t t182 = -26;
volatile int32_t x1075 = 1401;
uint8_t x1076 = 1U;
int64_t x1087 = -19LL;
static uint8_t x1097 = 4U;
uint16_t x1100 = 3970U;
static volatile int32_t t188 = 2371542;
int64_t x1106 = INT64_MIN;
static volatile int32_t t190 = 40825;
int32_t t191 = -164173892;
int8_t x1121 = -1;
volatile int32_t t192 = -719261;
uint32_t x1125 = 1211154136U;
int32_t t193 = 3411390;
int64_t x1140 = -1LL;
volatile int16_t x1167 = -1;
uint32_t x1168 = UINT32_MAX;
int8_t x1169 = -1;
int16_t x1170 = INT16_MIN;


void f0(void) {
    	int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 109U;
	volatile int32_t t0 = 871787485;

    t0 = (x1!=((x2-x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -5417107207LL;
	static volatile uint32_t x6 = 48U;

    t1 = (x5!=((x6-x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -9661;
	uint64_t x11 = 1043780499LLU;
	int32_t t2 = -1;

    t2 = (x9!=((x10-x11)*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x26 = 12U;
	static int16_t x27 = INT16_MIN;

    t3 = (x25!=((x26-x27)*x28));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x37 = 65497908300LL;
	int8_t x40 = -1;
	int32_t t4 = -611;

    t4 = (x37!=((x38-x39)*x40));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = -1616331LL;
	static volatile int16_t x43 = INT16_MIN;
	volatile int8_t x44 = 0;
	volatile int32_t t5 = -2455903;

    t5 = (x41!=((x42-x43)*x44));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x45 = -1;
	uint16_t x46 = 7886U;
	uint8_t x48 = 1U;

    t6 = (x45!=((x46-x47)*x48));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x49 = 1;
	int16_t x50 = INT16_MIN;
	static volatile int8_t x51 = -2;
	volatile int32_t t7 = -19227028;

    t7 = (x49!=((x50-x51)*x52));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x53 = -10937686718083LL;
	int8_t x54 = 11;
	int8_t x55 = -1;
	uint8_t x56 = 45U;
	int32_t t8 = 2034699;

    t8 = (x53!=((x54-x55)*x56));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x59 = INT32_MIN;
	uint16_t x60 = 108U;
	volatile int32_t t9 = -6881;

    t9 = (x57!=((x58-x59)*x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x63 = 234462U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t10 = 190;

    t10 = (x61!=((x62-x63)*x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x66 = -1;
	volatile int8_t x67 = INT8_MIN;
	int8_t x68 = -1;
	static int32_t t11 = -291645;

    t11 = (x65!=((x66-x67)*x68));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x69 = -5266LL;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = -1;
	volatile int32_t t12 = 3162189;

    t12 = (x69!=((x70-x71)*x72));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x81 = 208U;
	uint64_t x82 = 12603160265LLU;
	volatile uint64_t x83 = UINT64_MAX;
	static int32_t x84 = -158;
	static volatile int32_t t13 = -1004290;

    t13 = (x81!=((x82-x83)*x84));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	volatile uint16_t x90 = 1U;
	int32_t x91 = 3262;
	volatile int16_t x92 = INT16_MIN;

    t14 = (x89!=((x90-x91)*x92));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x97 = -1;
	static uint64_t x99 = 187995LLU;

    t15 = (x97!=((x98-x99)*x100));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x102 = INT8_MAX;
	uint64_t x103 = 419917676342602LLU;
	volatile uint32_t x104 = 12U;

    t16 = (x101!=((x102-x103)*x104));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x106 = -1;
	int8_t x107 = -11;
	int64_t x108 = -1LL;
	volatile int32_t t17 = 510081003;

    t17 = (x105!=((x106-x107)*x108));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x109 = 0;
	int32_t t18 = 2850;

    t18 = (x109!=((x110-x111)*x112));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x117 = 2074173091U;
	int8_t x118 = INT8_MAX;
	volatile int8_t x119 = INT8_MIN;
	uint8_t x120 = 3U;
	static int32_t t19 = 82;

    t19 = (x117!=((x118-x119)*x120));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x121 = -456;
	int32_t x122 = -1468;
	static int32_t x124 = 9050;
	int32_t t20 = -2199221;

    t20 = (x121!=((x122-x123)*x124));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x129 = 375410U;
	int32_t x130 = -798217;
	int64_t x131 = INT64_MIN;
	int16_t x132 = -1;
	int32_t t21 = -633692;

    t21 = (x129!=((x130-x131)*x132));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x133 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	static int32_t t22 = 5;

    t22 = (x133!=((x134-x135)*x136));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x137 = 137U;
	static int64_t x138 = 105LL;
	int16_t x139 = 7101;
	uint16_t x140 = UINT16_MAX;
	int32_t t23 = -188759137;

    t23 = (x137!=((x138-x139)*x140));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x141 = -487789;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -1LL;
	int32_t t24 = -57354;

    t24 = (x141!=((x142-x143)*x144));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MAX;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = 64855015U;
	volatile int32_t t25 = 1436388;

    t25 = (x145!=((x146-x147)*x148));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x149 = 90587680LLU;
	static volatile int8_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t26 = 39;

    t26 = (x149!=((x150-x151)*x152));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x157 = 6;
	static volatile uint64_t x159 = 4847LLU;
	int32_t t27 = 37498;

    t27 = (x157!=((x158-x159)*x160));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x161 = INT64_MAX;
	volatile int32_t x162 = -1;
	volatile int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t28 = 11;

    t28 = (x161!=((x162-x163)*x164));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x169 = -1496218LL;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 10812U;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t29 = 3790;

    t29 = (x169!=((x170-x171)*x172));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 14348716LLU;
	static int8_t x176 = -1;
	static int32_t t30 = 0;

    t30 = (x173!=((x174-x175)*x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x177 = 25U;
	int16_t x178 = INT16_MIN;
	int16_t x180 = 1;
	int32_t t31 = -110;

    t31 = (x177!=((x178-x179)*x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x181 = 1445689;
	uint16_t x182 = 1U;
	int16_t x183 = INT16_MAX;
	static int64_t x184 = 6198LL;
	int32_t t32 = 672;

    t32 = (x181!=((x182-x183)*x184));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x185 = -1;
	volatile uint8_t x187 = UINT8_MAX;
	int32_t x188 = -1;

    t33 = (x185!=((x186-x187)*x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MAX;
	int32_t t34 = 2065030;

    t34 = (x189!=((x190-x191)*x192));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x193 = 2811;
	uint16_t x194 = 99U;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;

    t35 = (x193!=((x194-x195)*x196));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x197 = INT8_MIN;
	uint8_t x198 = 13U;
	int8_t x199 = -55;
	static int8_t x200 = INT8_MAX;

    t36 = (x197!=((x198-x199)*x200));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	int32_t x203 = -1;
	int64_t x204 = INT64_MIN;
	int32_t t37 = -1264040;

    t37 = (x201!=((x202-x203)*x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x215 = -1;
	int32_t x216 = -1;
	volatile int32_t t38 = -2487963;

    t38 = (x213!=((x214-x215)*x216));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x221 = 31U;
	uint32_t x222 = UINT32_MAX;
	volatile int16_t x223 = INT16_MIN;
	int32_t x224 = -1;

    t39 = (x221!=((x222-x223)*x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x233 = 658;
	static int64_t x234 = 28LL;
	uint8_t x235 = UINT8_MAX;
	static uint8_t x236 = UINT8_MAX;
	volatile int32_t t40 = 16;

    t40 = (x233!=((x234-x235)*x236));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = INT32_MAX;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = -1LL;
	int32_t t41 = 7627;

    t41 = (x237!=((x238-x239)*x240));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x245 = 27252375LL;
	volatile int8_t x246 = 1;
	uint64_t x247 = 2250933041195LLU;
	int32_t t42 = 1;

    t42 = (x245!=((x246-x247)*x248));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x249 = 115U;
	uint32_t x252 = 223317476U;
	volatile int32_t t43 = -526;

    t43 = (x249!=((x250-x251)*x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x259 = -3125210254239LL;
	int64_t x260 = -1LL;
	int32_t t44 = -13584060;

    t44 = (x257!=((x258-x259)*x260));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x261 = -1;
	int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = -1;

    t45 = (x261!=((x262-x263)*x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x273 = INT16_MAX;
	int64_t x274 = -129340005327553LL;
	int16_t x275 = -412;
	uint32_t x276 = 56U;
	int32_t t46 = -20774603;

    t46 = (x273!=((x274-x275)*x276));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x281 = 147130337LLU;
	int64_t x282 = -846LL;
	uint32_t x283 = 125U;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t47 = -71290532;

    t47 = (x281!=((x282-x283)*x284));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MAX;
	uint8_t x287 = UINT8_MAX;
	static int16_t x288 = INT16_MIN;

    t48 = (x285!=((x286-x287)*x288));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x301 = UINT8_MAX;
	static uint64_t x303 = UINT64_MAX;
	uint8_t x304 = 69U;
	static int32_t t49 = 14;

    t49 = (x301!=((x302-x303)*x304));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x306 = UINT32_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile int32_t t50 = -17;

    t50 = (x305!=((x306-x307)*x308));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x309 = INT16_MIN;
	uint64_t x310 = 4192153104499609LLU;
	uint64_t x311 = 4310523069623124633LLU;
	int32_t x312 = -1;
	int32_t t51 = -1431319;

    t51 = (x309!=((x310-x311)*x312));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x318 = -454079LL;
	static int8_t x319 = 0;
	static int32_t x320 = 519043708;
	volatile int32_t t52 = -13;

    t52 = (x317!=((x318-x319)*x320));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x321 = INT64_MAX;
	int32_t t53 = -1;

    t53 = (x321!=((x322-x323)*x324));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x325 = -17;
	int64_t x326 = 11912384683LL;
	int32_t x327 = INT32_MAX;
	static int32_t t54 = 7435;

    t54 = (x325!=((x326-x327)*x328));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x330 = -1LL;
	volatile int16_t x331 = INT16_MAX;
	static int32_t x332 = 0;
	volatile int32_t t55 = 3871;

    t55 = (x329!=((x330-x331)*x332));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x333 = 1964U;
	uint64_t x334 = 2260931620198LLU;
	int32_t x335 = INT32_MIN;
	volatile int32_t t56 = -50;

    t56 = (x333!=((x334-x335)*x336));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x337 = -46788972LL;
	static uint32_t x338 = 1779U;
	uint8_t x340 = 109U;
	volatile int32_t t57 = -772667;

    t57 = (x337!=((x338-x339)*x340));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x345 = -1LL;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = -1;
	uint64_t x348 = 1011697334897361349LLU;

    t58 = (x345!=((x346-x347)*x348));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x353 = -1;
	static uint32_t x354 = 436033U;
	volatile int32_t x355 = INT32_MAX;
	static volatile int32_t t59 = -7;

    t59 = (x353!=((x354-x355)*x356));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x357 = 982218238LLU;
	static int16_t x358 = -1;
	int32_t x359 = -1;
	static int32_t t60 = -178912;

    t60 = (x357!=((x358-x359)*x360));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x365 = INT32_MIN;
	static volatile int8_t x366 = INT8_MAX;
	int64_t x367 = -3128789845375425LL;
	static int32_t t61 = 27798;

    t61 = (x365!=((x366-x367)*x368));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x369 = 435U;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t62 = -3441414;

    t62 = (x369!=((x370-x371)*x372));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = UINT64_MAX;
	uint16_t x379 = UINT16_MAX;
	static int64_t x380 = INT64_MIN;
	int32_t t63 = -422658666;

    t63 = (x377!=((x378-x379)*x380));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x381 = 88U;
	int8_t x382 = 2;
	volatile uint8_t x383 = 4U;
	int8_t x384 = INT8_MAX;

    t64 = (x381!=((x382-x383)*x384));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x386 = INT16_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t65 = -1774776;

    t65 = (x385!=((x386-x387)*x388));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x393 = -86809953LL;
	static uint64_t x394 = UINT64_MAX;
	volatile int16_t x395 = -4847;

    t66 = (x393!=((x394-x395)*x396));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x405 = -661;
	int16_t x408 = -3;
	volatile int32_t t67 = 234137854;

    t67 = (x405!=((x406-x407)*x408));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x409 = 8;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 0U;
	int8_t x412 = INT8_MIN;

    t68 = (x409!=((x410-x411)*x412));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x413 = 40;
	int8_t x414 = INT8_MIN;
	static uint8_t x415 = 1U;
	int32_t x416 = 1168;

    t69 = (x413!=((x414-x415)*x416));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x417 = INT16_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	volatile int64_t x420 = -1LL;
	int32_t t70 = 30;

    t70 = (x417!=((x418-x419)*x420));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x421 = 635;
	int16_t x422 = 1;
	uint64_t x423 = UINT64_MAX;
	static int32_t x424 = INT32_MAX;
	int32_t t71 = 433165582;

    t71 = (x421!=((x422-x423)*x424));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x429 = 5157U;
	uint64_t x430 = 14569882LLU;
	int64_t x431 = -1005LL;
	int64_t x432 = INT64_MIN;
	volatile int32_t t72 = 0;

    t72 = (x429!=((x430-x431)*x432));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x435 = 3594341U;
	int16_t x436 = -1;
	int32_t t73 = -7038;

    t73 = (x433!=((x434-x435)*x436));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x438 = INT16_MIN;
	int8_t x439 = -21;
	int8_t x440 = INT8_MIN;
	int32_t t74 = 263387;

    t74 = (x437!=((x438-x439)*x440));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x446 = -1;
	int16_t x448 = INT16_MIN;

    t75 = (x445!=((x446-x447)*x448));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x449 = INT8_MIN;
	static int8_t x450 = -43;
	uint16_t x451 = 25023U;
	volatile uint64_t x452 = 6LLU;

    t76 = (x449!=((x450-x451)*x452));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x453 = 683LLU;
	static volatile uint16_t x454 = UINT16_MAX;
	static uint16_t x455 = UINT16_MAX;
	int32_t x456 = -10606;
	volatile int32_t t77 = -59145;

    t77 = (x453!=((x454-x455)*x456));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x457 = 25278U;
	uint32_t x458 = 214U;
	uint16_t x459 = UINT16_MAX;
	static int32_t t78 = -24805910;

    t78 = (x457!=((x458-x459)*x460));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = 37;
	int64_t x463 = -1LL;
	uint32_t x464 = 3U;
	volatile int32_t t79 = 12;

    t79 = (x461!=((x462-x463)*x464));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x466 = INT64_MIN;
	static volatile uint64_t x467 = 1043262587564895LLU;
	int64_t x468 = -1LL;
	int32_t t80 = -553543;

    t80 = (x465!=((x466-x467)*x468));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x470 = 7LL;
	int32_t x471 = 742;
	int32_t t81 = -234;

    t81 = (x469!=((x470-x471)*x472));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x473 = INT64_MIN;
	uint16_t x474 = UINT16_MAX;
	int32_t t82 = 3199190;

    t82 = (x473!=((x474-x475)*x476));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x478 = INT8_MIN;
	int32_t x480 = INT32_MIN;
	static int32_t t83 = -7802;

    t83 = (x477!=((x478-x479)*x480));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x485 = INT32_MIN;
	static volatile uint8_t x487 = UINT8_MAX;

    t84 = (x485!=((x486-x487)*x488));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x490 = 7492525937LLU;
	static int16_t x491 = INT16_MIN;
	volatile uint8_t x492 = UINT8_MAX;

    t85 = (x489!=((x490-x491)*x492));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x502 = -1862221609LL;
	int16_t x503 = INT16_MAX;

    t86 = (x501!=((x502-x503)*x504));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x506 = 1743379909U;
	static volatile int16_t x507 = INT16_MIN;
	static int32_t x508 = INT32_MIN;
	int32_t t87 = -10164;

    t87 = (x505!=((x506-x507)*x508));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x514 = -1;
	volatile uint32_t x515 = 26076U;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t88 = 241;

    t88 = (x513!=((x514-x515)*x516));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x518 = 604;
	uint32_t x519 = UINT32_MAX;

    t89 = (x517!=((x518-x519)*x520));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x521 = INT16_MAX;
	uint8_t x522 = 27U;
	static uint16_t x523 = UINT16_MAX;
	int8_t x524 = 0;
	int32_t t90 = 176573187;

    t90 = (x521!=((x522-x523)*x524));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x525 = INT32_MIN;
	uint32_t x526 = 0U;
	volatile int32_t x527 = -21705657;
	int32_t x528 = INT32_MAX;
	volatile int32_t t91 = 264;

    t91 = (x525!=((x526-x527)*x528));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x534 = 7;
	int8_t x535 = INT8_MIN;
	uint8_t x536 = 15U;

    t92 = (x533!=((x534-x535)*x536));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x537 = INT32_MIN;
	int16_t x539 = INT16_MIN;
	uint64_t x540 = 3563252LLU;
	int32_t t93 = -3036189;

    t93 = (x537!=((x538-x539)*x540));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x544 = 10U;
	volatile int32_t t94 = 25;

    t94 = (x541!=((x542-x543)*x544));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x545 = INT32_MIN;
	static uint32_t x546 = UINT32_MAX;
	int32_t x547 = -1;
	int32_t t95 = -13;

    t95 = (x545!=((x546-x547)*x548));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x549 = INT8_MIN;
	int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MIN;
	uint16_t x552 = 37U;
	volatile int32_t t96 = 20508028;

    t96 = (x549!=((x550-x551)*x552));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x561 = INT64_MIN;
	int16_t x562 = 0;
	int64_t x563 = INT64_MAX;
	static volatile int32_t t97 = -775;

    t97 = (x561!=((x562-x563)*x564));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x565 = -1;
	static int32_t x566 = INT32_MIN;
	int64_t x568 = 12LL;

    t98 = (x565!=((x566-x567)*x568));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x577 = -1;
	int16_t x578 = -61;
	uint16_t x579 = 250U;
	int32_t x580 = -1;
	int32_t t99 = 1;

    t99 = (x577!=((x578-x579)*x580));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x582 = INT32_MIN;
	static int32_t x583 = INT32_MIN;
	int32_t t100 = 14;

    t100 = (x581!=((x582-x583)*x584));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x587 = 2;
	volatile int32_t t101 = 1407;

    t101 = (x585!=((x586-x587)*x588));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x589 = INT64_MAX;
	int64_t x590 = 170407001493239LL;
	volatile int8_t x591 = INT8_MIN;
	int32_t x592 = -1;
	volatile int32_t t102 = -25922176;

    t102 = (x589!=((x590-x591)*x592));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x594 = 36U;
	int8_t x596 = INT8_MIN;
	int32_t t103 = 0;

    t103 = (x593!=((x594-x595)*x596));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x597 = INT32_MIN;
	uint16_t x598 = 763U;
	int8_t x599 = INT8_MAX;
	uint16_t x600 = 2U;
	static volatile int32_t t104 = 62970202;

    t104 = (x597!=((x598-x599)*x600));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x605 = UINT64_MAX;
	int16_t x606 = -1;
	int16_t x607 = -650;
	volatile int64_t x608 = -1LL;
	int32_t t105 = 179;

    t105 = (x605!=((x606-x607)*x608));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x609 = INT64_MIN;
	uint64_t x610 = UINT64_MAX;
	int8_t x611 = INT8_MAX;
	int8_t x612 = -18;

    t106 = (x609!=((x610-x611)*x612));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x617 = 10792791109LLU;
	uint64_t x618 = 283530371LLU;
	int16_t x620 = 0;
	int32_t t107 = -3026;

    t107 = (x617!=((x618-x619)*x620));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x622 = 8616U;
	uint8_t x623 = 1U;
	uint64_t x624 = UINT64_MAX;
	int32_t t108 = -725903980;

    t108 = (x621!=((x622-x623)*x624));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x626 = UINT16_MAX;
	int8_t x627 = INT8_MAX;
	static int64_t x628 = -1LL;
	volatile int32_t t109 = -2;

    t109 = (x625!=((x626-x627)*x628));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x629 = -1;
	static int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	int32_t t110 = -200445;

    t110 = (x629!=((x630-x631)*x632));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x637 = 31;
	volatile int64_t x638 = INT64_MIN;
	int64_t x639 = INT64_MIN;
	static int64_t x640 = -1LL;
	static volatile int32_t t111 = 120;

    t111 = (x637!=((x638-x639)*x640));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x641 = -1;
	static uint32_t x642 = 385742U;
	int16_t x643 = INT16_MIN;
	static int64_t x644 = -6721810LL;
	volatile int32_t t112 = 1;

    t112 = (x641!=((x642-x643)*x644));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x645 = INT8_MAX;
	int32_t x647 = -7;
	volatile int16_t x648 = INT16_MIN;
	int32_t t113 = -47;

    t113 = (x645!=((x646-x647)*x648));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x657 = -1;
	int8_t x658 = -1;
	volatile uint64_t x660 = 14671LLU;

    t114 = (x657!=((x658-x659)*x660));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x661 = INT8_MIN;
	static uint16_t x662 = 15706U;
	uint64_t x663 = UINT64_MAX;
	static int32_t t115 = -13626091;

    t115 = (x661!=((x662-x663)*x664));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x666 = -1;
	static int64_t x667 = INT64_MIN;
	uint64_t x668 = 6587630970876281050LLU;

    t116 = (x665!=((x666-x667)*x668));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x669 = INT32_MAX;
	volatile int32_t x670 = -1;
	volatile int32_t x671 = -1;
	int64_t x672 = 219964503700676448LL;

    t117 = (x669!=((x670-x671)*x672));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x673 = UINT16_MAX;
	uint32_t x675 = 45U;
	int16_t x676 = INT16_MIN;

    t118 = (x673!=((x674-x675)*x676));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x677 = UINT32_MAX;
	int64_t x679 = -29683901878LL;
	uint64_t x680 = UINT64_MAX;

    t119 = (x677!=((x678-x679)*x680));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x681 = -12;
	static int8_t x682 = -14;
	int16_t x683 = 113;
	uint16_t x684 = UINT16_MAX;

    t120 = (x681!=((x682-x683)*x684));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x689 = INT64_MAX;
	int64_t x691 = -1LL;
	uint16_t x692 = UINT16_MAX;

    t121 = (x689!=((x690-x691)*x692));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x693 = -2064611;
	uint16_t x694 = 11U;
	uint32_t x695 = 1415945623U;
	static int16_t x696 = INT16_MIN;
	volatile int32_t t122 = -42;

    t122 = (x693!=((x694-x695)*x696));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x697 = 7945615LLU;
	static volatile uint32_t x698 = 6245520U;
	static int8_t x699 = -1;
	int32_t x700 = 47140721;
	volatile int32_t t123 = -2448;

    t123 = (x697!=((x698-x699)*x700));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x701 = INT8_MIN;
	volatile int16_t x702 = -1;
	int64_t x703 = -1LL;
	volatile uint8_t x704 = 3U;
	int32_t t124 = 4353;

    t124 = (x701!=((x702-x703)*x704));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x709 = 187473656289028LL;
	uint8_t x710 = 4U;
	int64_t x711 = 113651571156703LL;
	volatile int8_t x712 = -31;
	static int32_t t125 = 2069;

    t125 = (x709!=((x710-x711)*x712));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x714 = 11U;
	int16_t x716 = INT16_MIN;
	int32_t t126 = 407914;

    t126 = (x713!=((x714-x715)*x716));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x722 = UINT32_MAX;
	int16_t x723 = 1441;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t127 = -8;

    t127 = (x721!=((x722-x723)*x724));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x729 = 1026755149527LL;
	volatile int8_t x730 = INT8_MAX;
	volatile int32_t x731 = 162;
	volatile uint64_t x732 = 5657793LLU;
	int32_t t128 = -102769;

    t128 = (x729!=((x730-x731)*x732));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x734 = -1LL;
	int32_t x735 = -5181;
	uint32_t x736 = 345U;
	int32_t t129 = -105634730;

    t129 = (x733!=((x734-x735)*x736));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x745 = INT16_MAX;
	static volatile int32_t x746 = INT32_MIN;
	volatile uint32_t x747 = UINT32_MAX;
	int32_t x748 = INT32_MIN;

    t130 = (x745!=((x746-x747)*x748));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x749 = -1;
	volatile int64_t x750 = 26404674424064LL;
	uint16_t x751 = 1U;
	int16_t x752 = -15;
	int32_t t131 = -1767321;

    t131 = (x749!=((x750-x751)*x752));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x758 = UINT8_MAX;
	uint8_t x759 = UINT8_MAX;
	static int64_t x760 = INT64_MAX;
	volatile int32_t t132 = 897;

    t132 = (x757!=((x758-x759)*x760));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x766 = UINT16_MAX;
	int32_t x767 = -1;
	uint64_t x768 = UINT64_MAX;

    t133 = (x765!=((x766-x767)*x768));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x781 = 652U;
	uint64_t x782 = 826751257284921LLU;
	int16_t x783 = 3828;
	volatile uint8_t x784 = UINT8_MAX;
	static volatile int32_t t134 = 7936695;

    t134 = (x781!=((x782-x783)*x784));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x786 = 647640382U;
	uint32_t x787 = 6U;
	int8_t x788 = -21;
	int32_t t135 = 8272594;

    t135 = (x785!=((x786-x787)*x788));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x789 = -28;
	int32_t x791 = INT32_MAX;
	int64_t x792 = -1LL;
	volatile int32_t t136 = -734;

    t136 = (x789!=((x790-x791)*x792));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x797 = -1292;
	static volatile int32_t x798 = 0;
	int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MAX;
	volatile int32_t t137 = -1069640257;

    t137 = (x797!=((x798-x799)*x800));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x801 = 2777LL;
	int8_t x802 = -1;
	uint8_t x803 = UINT8_MAX;

    t138 = (x801!=((x802-x803)*x804));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x815 = 22U;
	volatile int32_t t139 = 88598;

    t139 = (x813!=((x814-x815)*x816));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x817 = -40;
	volatile uint8_t x818 = UINT8_MAX;
	uint32_t x819 = 5568321U;
	volatile int32_t t140 = -2096795;

    t140 = (x817!=((x818-x819)*x820));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x821 = INT8_MAX;
	int16_t x822 = -1;
	volatile int32_t t141 = -356;

    t141 = (x821!=((x822-x823)*x824));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x825 = 43;
	int32_t x826 = INT32_MIN;
	int16_t x828 = 0;
	static volatile int32_t t142 = 523210;

    t142 = (x825!=((x826-x827)*x828));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x829 = INT64_MAX;
	static uint64_t x830 = UINT64_MAX;
	int64_t x831 = 1LL;

    t143 = (x829!=((x830-x831)*x832));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x833 = 506534027877058447LLU;
	volatile uint32_t x835 = 407U;
	volatile int32_t t144 = -1043315;

    t144 = (x833!=((x834-x835)*x836));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x841 = 4349U;
	volatile int16_t x842 = INT16_MIN;
	volatile uint32_t x843 = 44102511U;
	static volatile int32_t x844 = INT32_MAX;
	volatile int32_t t145 = 6150;

    t145 = (x841!=((x842-x843)*x844));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x845 = 6643;
	uint64_t x848 = UINT64_MAX;

    t146 = (x845!=((x846-x847)*x848));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x849 = -1;
	volatile uint64_t x850 = 9059361712539436233LLU;
	volatile int16_t x851 = INT16_MIN;
	volatile uint8_t x852 = UINT8_MAX;
	static volatile int32_t t147 = 0;

    t147 = (x849!=((x850-x851)*x852));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x854 = 0LLU;
	static int32_t x855 = INT32_MIN;
	int16_t x856 = INT16_MIN;

    t148 = (x853!=((x854-x855)*x856));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x861 = INT16_MIN;
	uint32_t x863 = 286656887U;
	int32_t t149 = 194359;

    t149 = (x861!=((x862-x863)*x864));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x865 = -1;
	int8_t x866 = INT8_MIN;
	static volatile int16_t x867 = 2;
	int8_t x868 = INT8_MAX;

    t150 = (x865!=((x866-x867)*x868));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x869 = UINT16_MAX;
	uint32_t x870 = 15372268U;
	int16_t x871 = 0;
	static volatile int8_t x872 = INT8_MIN;
	int32_t t151 = 484421079;

    t151 = (x869!=((x870-x871)*x872));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x873 = INT64_MIN;
	static int8_t x874 = INT8_MIN;
	volatile uint64_t x875 = UINT64_MAX;
	int32_t x876 = INT32_MIN;
	volatile int32_t t152 = 320;

    t152 = (x873!=((x874-x875)*x876));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x877 = UINT16_MAX;
	static uint16_t x878 = UINT16_MAX;
	volatile uint32_t x879 = 26U;

    t153 = (x877!=((x878-x879)*x880));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x881 = INT16_MAX;
	int32_t x882 = -87;
	volatile int32_t t154 = -56462449;

    t154 = (x881!=((x882-x883)*x884));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x889 = 55316U;
	int8_t x891 = INT8_MAX;
	int32_t t155 = -28;

    t155 = (x889!=((x890-x891)*x892));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x897 = UINT16_MAX;
	int8_t x900 = -1;
	volatile int32_t t156 = 17822;

    t156 = (x897!=((x898-x899)*x900));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x901 = INT64_MIN;
	int32_t x902 = 118443;
	static uint16_t x903 = 805U;
	int8_t x904 = INT8_MIN;
	volatile int32_t t157 = 0;

    t157 = (x901!=((x902-x903)*x904));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x905 = 151233345U;
	static int32_t x907 = -457361;
	static uint16_t x908 = 1216U;
	volatile int32_t t158 = -121966000;

    t158 = (x905!=((x906-x907)*x908));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x909 = 6U;
	int8_t x911 = INT8_MAX;
	int16_t x912 = INT16_MIN;
	static int32_t t159 = -241524699;

    t159 = (x909!=((x910-x911)*x912));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x917 = 210U;
	int16_t x919 = INT16_MAX;
	int16_t x920 = -938;
	static int32_t t160 = 324561256;

    t160 = (x917!=((x918-x919)*x920));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x923 = 4U;
	volatile int32_t t161 = 7;

    t161 = (x921!=((x922-x923)*x924));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x925 = 737LLU;
	static int32_t x926 = 12015881;
	static uint64_t x927 = 6LLU;
	volatile uint32_t x928 = 1756U;
	volatile int32_t t162 = 81101080;

    t162 = (x925!=((x926-x927)*x928));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x929 = 228;
	static int8_t x930 = -1;
	uint64_t x931 = 44924171391261630LLU;
	int64_t x932 = INT64_MIN;
	volatile int32_t t163 = 10584365;

    t163 = (x929!=((x930-x931)*x932));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x937 = 9406U;
	uint64_t x938 = 0LLU;
	int16_t x940 = INT16_MIN;

    t164 = (x937!=((x938-x939)*x940));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x946 = 70390U;
	volatile int8_t x947 = INT8_MIN;
	int8_t x948 = INT8_MIN;

    t165 = (x945!=((x946-x947)*x948));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x950 = 51208781U;
	uint32_t x951 = 13382U;
	static int64_t x952 = 86554LL;
	static int32_t t166 = 44678147;

    t166 = (x949!=((x950-x951)*x952));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x953 = INT16_MIN;
	int16_t x954 = INT16_MIN;
	static uint16_t x955 = 196U;
	int32_t x956 = -1680;
	int32_t t167 = 1;

    t167 = (x953!=((x954-x955)*x956));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x969 = INT8_MIN;
	static uint8_t x970 = 2U;
	int32_t x971 = -146217;
	int32_t t168 = -858543905;

    t168 = (x969!=((x970-x971)*x972));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x973 = -4;
	int16_t x974 = INT16_MAX;
	volatile int16_t x975 = INT16_MIN;
	uint8_t x976 = 62U;

    t169 = (x973!=((x974-x975)*x976));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x977 = -1;
	int32_t x978 = -1;
	int8_t x979 = -1;
	static volatile uint32_t x980 = 10U;
	volatile int32_t t170 = 132075894;

    t170 = (x977!=((x978-x979)*x980));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x981 = INT64_MAX;
	int8_t x982 = -1;
	uint32_t x983 = UINT32_MAX;
	uint32_t x984 = 56484796U;

    t171 = (x981!=((x982-x983)*x984));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x985 = 165U;
	uint64_t x986 = 66LLU;
	uint64_t x987 = UINT64_MAX;
	static int32_t x988 = INT32_MIN;
	volatile int32_t t172 = 10;

    t172 = (x985!=((x986-x987)*x988));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x989 = 0;
	int8_t x990 = INT8_MIN;
	uint64_t x991 = UINT64_MAX;
	static volatile int64_t x992 = INT64_MIN;
	int32_t t173 = -841089131;

    t173 = (x989!=((x990-x991)*x992));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x993 = -1;
	static int32_t x996 = 12179635;
	volatile int32_t t174 = 85953;

    t174 = (x993!=((x994-x995)*x996));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x997 = 5140728U;
	static int32_t x998 = INT32_MIN;
	volatile int64_t x999 = INT64_MIN;
	volatile int32_t t175 = 532361057;

    t175 = (x997!=((x998-x999)*x1000));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1005 = 586573LLU;
	int32_t x1006 = 8707;
	volatile int32_t t176 = 973;

    t176 = (x1005!=((x1006-x1007)*x1008));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1013 = INT32_MIN;
	int64_t x1014 = 1167LL;
	static uint16_t x1015 = UINT16_MAX;
	int16_t x1016 = 18;
	int32_t t177 = 968165738;

    t177 = (x1013!=((x1014-x1015)*x1016));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1017 = 12U;
	int16_t x1018 = INT16_MIN;
	int8_t x1020 = 1;
	int32_t t178 = 187;

    t178 = (x1017!=((x1018-x1019)*x1020));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1025 = UINT8_MAX;
	int8_t x1026 = INT8_MIN;
	int16_t x1027 = INT16_MIN;
	int16_t x1028 = 3;
	volatile int32_t t179 = -78;

    t179 = (x1025!=((x1026-x1027)*x1028));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1045 = -1076715575LL;
	int32_t x1046 = -271462;
	static volatile int32_t t180 = -43236;

    t180 = (x1045!=((x1046-x1047)*x1048));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1049 = 0U;
	int8_t x1050 = 0;
	volatile int32_t x1051 = 35039;
	uint8_t x1052 = 2U;
	volatile int32_t t181 = 4;

    t181 = (x1049!=((x1050-x1051)*x1052));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1069 = 17U;
	uint64_t x1070 = UINT64_MAX;
	volatile int32_t x1071 = INT32_MIN;

    t182 = (x1069!=((x1070-x1071)*x1072));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1073 = UINT64_MAX;
	int32_t x1074 = -1;
	volatile int32_t t183 = 24;

    t183 = (x1073!=((x1074-x1075)*x1076));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1077 = 70;
	uint64_t x1078 = UINT64_MAX;
	volatile uint64_t x1079 = UINT64_MAX;
	volatile int64_t x1080 = INT64_MIN;
	int32_t t184 = -355;

    t184 = (x1077!=((x1078-x1079)*x1080));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1085 = 2;
	int16_t x1086 = INT16_MAX;
	int8_t x1088 = INT8_MAX;
	volatile int32_t t185 = 15596;

    t185 = (x1085!=((x1086-x1087)*x1088));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1089 = 22U;
	static uint8_t x1090 = 13U;
	int16_t x1091 = INT16_MIN;
	static volatile uint64_t x1092 = 2311819604919308890LLU;
	volatile int32_t t186 = -2429;

    t186 = (x1089!=((x1090-x1091)*x1092));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1093 = UINT32_MAX;
	uint64_t x1094 = 3223767001895LLU;
	uint8_t x1095 = 3U;
	uint16_t x1096 = 25U;
	int32_t t187 = -6238065;

    t187 = (x1093!=((x1094-x1095)*x1096));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1098 = -1;
	volatile uint8_t x1099 = UINT8_MAX;

    t188 = (x1097!=((x1098-x1099)*x1100));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1105 = INT32_MIN;
	uint64_t x1107 = 24142LLU;
	int64_t x1108 = -13020027LL;
	volatile int32_t t189 = -132623188;

    t189 = (x1105!=((x1106-x1107)*x1108));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x1113 = 87U;
	uint64_t x1114 = UINT64_MAX;
	volatile uint16_t x1115 = 11218U;
	static int32_t x1116 = INT32_MIN;

    t190 = (x1113!=((x1114-x1115)*x1116));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1117 = 26U;
	static uint8_t x1118 = UINT8_MAX;
	int32_t x1119 = -3087;
	uint64_t x1120 = UINT64_MAX;

    t191 = (x1117!=((x1118-x1119)*x1120));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1122 = 4LL;
	int32_t x1123 = INT32_MIN;
	uint64_t x1124 = 121035547983182LLU;

    t192 = (x1121!=((x1122-x1123)*x1124));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1126 = 56817LLU;
	static int32_t x1127 = -1;
	int64_t x1128 = 7226LL;

    t193 = (x1125!=((x1126-x1127)*x1128));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1129 = 1202182U;
	int16_t x1130 = -8;
	static volatile uint8_t x1131 = UINT8_MAX;
	int64_t x1132 = 85198263767LL;
	int32_t t194 = 1;

    t194 = (x1129!=((x1130-x1131)*x1132));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1133 = -12203LL;
	int8_t x1134 = INT8_MAX;
	int64_t x1135 = 10072770731LL;
	static uint8_t x1136 = UINT8_MAX;
	int32_t t195 = 61533645;

    t195 = (x1133!=((x1134-x1135)*x1136));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1137 = 31U;
	uint16_t x1138 = 293U;
	int8_t x1139 = 0;
	volatile int32_t t196 = 49;

    t196 = (x1137!=((x1138-x1139)*x1140));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1161 = -1;
	int8_t x1162 = INT8_MAX;
	volatile int64_t x1163 = 1LL;
	volatile int32_t x1164 = INT32_MAX;
	static volatile int32_t t197 = -1692;

    t197 = (x1161!=((x1162-x1163)*x1164));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1165 = INT64_MAX;
	int32_t x1166 = -1;
	volatile int32_t t198 = -3369427;

    t198 = (x1165!=((x1166-x1167)*x1168));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1171 = 10957U;
	uint64_t x1172 = UINT64_MAX;
	volatile int32_t t199 = -39;

    t199 = (x1169!=((x1170-x1171)*x1172));

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

