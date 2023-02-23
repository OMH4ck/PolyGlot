
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

volatile int16_t x1 = -1;
int64_t x8 = INT64_MIN;
int32_t x9 = INT32_MAX;
volatile int64_t x12 = -38LL;
uint8_t x13 = UINT8_MAX;
static volatile uint16_t x15 = 8040U;
uint16_t x19 = 7U;
int32_t x22 = INT32_MAX;
int16_t x26 = INT16_MIN;
int32_t x32 = INT32_MIN;
volatile uint16_t x41 = UINT16_MAX;
uint16_t x56 = UINT16_MAX;
int16_t x61 = 31;
int32_t x68 = -1;
int32_t x76 = -5;
static int16_t x77 = -1;
int32_t x80 = -1;
int8_t x86 = INT8_MAX;
int16_t x89 = INT16_MAX;
uint64_t x92 = 1651027986369808LLU;
static uint16_t x98 = 7U;
volatile int32_t x99 = INT32_MAX;
static int64_t x109 = -1LL;
int32_t x110 = INT32_MAX;
volatile int32_t t26 = -56825779;
static int8_t x115 = INT8_MIN;
static int32_t t27 = -453886281;
uint16_t x117 = 0U;
volatile int32_t t30 = -1318254;
int8_t x135 = -1;
int16_t x139 = -1474;
volatile int8_t x151 = INT8_MIN;
uint16_t x152 = 244U;
volatile int32_t t36 = 5825750;
int32_t t37 = 643;
int32_t t38 = 27175736;
static int64_t x166 = 1940872LL;
volatile int32_t t39 = -2;
volatile int64_t x172 = 44500898833774473LL;
int16_t x173 = -1;
uint16_t x175 = 6206U;
int8_t x177 = 1;
static volatile int64_t x179 = 3175632730LL;
volatile int32_t x181 = INT32_MAX;
int8_t x187 = INT8_MIN;
volatile int32_t t44 = 117672006;
int16_t x190 = -5866;
uint64_t x199 = UINT64_MAX;
uint32_t x204 = 225U;
static volatile int32_t t49 = -1094265;
static int32_t x211 = INT32_MAX;
int64_t x214 = -96919570799LL;
int16_t x227 = INT16_MIN;
volatile int32_t t54 = -5;
volatile uint32_t x246 = 13633U;
int8_t x248 = INT8_MIN;
int32_t t59 = 2972;
static int32_t t63 = 3928;
static uint32_t x269 = 419U;
int8_t x279 = -1;
int32_t t66 = 279146628;
int32_t x291 = INT32_MAX;
int16_t x301 = -1;
volatile int64_t x302 = 490962382967781335LL;
uint8_t x305 = 0U;
uint32_t x306 = UINT32_MAX;
volatile int8_t x308 = 0;
volatile int16_t x309 = INT16_MIN;
static uint8_t x310 = 11U;
int8_t x311 = INT8_MIN;
static volatile int32_t t74 = -663265636;
int8_t x323 = -54;
volatile int8_t x324 = INT8_MAX;
volatile int8_t x327 = INT8_MIN;
int32_t t77 = 165699629;
volatile int16_t x332 = INT16_MAX;
int64_t x337 = INT64_MIN;
volatile int8_t x341 = INT8_MIN;
volatile int8_t x346 = -1;
volatile int32_t t81 = 796105885;
int16_t x353 = 236;
int32_t x359 = 11380;
int32_t t85 = 33271697;
uint8_t x391 = UINT8_MAX;
int32_t x404 = INT32_MAX;
uint16_t x405 = 12U;
static int8_t x408 = -5;
int32_t t96 = -52416;
int8_t x409 = INT8_MIN;
static int32_t t97 = 28292;
int8_t x415 = INT8_MIN;
uint32_t x416 = 20301096U;
volatile int16_t x419 = -1;
static int32_t t99 = 764196;
static uint8_t x428 = 22U;
static volatile uint32_t x431 = UINT32_MAX;
volatile int32_t t102 = 3846973;
int8_t x434 = INT8_MIN;
static uint16_t x454 = 13U;
int32_t t108 = -3186341;
int16_t x457 = INT16_MAX;
uint16_t x461 = 0U;
int16_t x467 = INT16_MIN;
uint64_t x471 = 619LLU;
int16_t x472 = -1;
uint16_t x479 = 1U;
int16_t x481 = INT16_MAX;
uint32_t x488 = 298141945U;
volatile int8_t x489 = -1;
int16_t x494 = -4083;
int32_t t118 = -31492646;
static int32_t x503 = -1;
uint8_t x507 = 4U;
int64_t x511 = 1LL;
volatile int32_t t123 = 13208;
uint16_t x520 = 13900U;
volatile int64_t x521 = INT64_MIN;
int64_t x522 = 3LL;
int32_t x528 = INT32_MIN;
uint16_t x532 = 18592U;
int8_t x538 = INT8_MIN;
uint8_t x541 = 78U;
uint8_t x544 = UINT8_MAX;
uint8_t x546 = UINT8_MAX;
int32_t x551 = INT32_MIN;
int32_t t132 = -304162;
int32_t x553 = INT32_MIN;
int64_t x566 = -404751997814LL;
int64_t x567 = 68040337LL;
volatile int32_t x568 = 2603485;
static int16_t x571 = INT16_MAX;
volatile int16_t x573 = INT16_MIN;
volatile uint32_t x579 = UINT32_MAX;
uint16_t x582 = 1U;
volatile int32_t t139 = 64;
int64_t x585 = -1LL;
uint16_t x588 = UINT16_MAX;
int32_t t142 = 238535;
int32_t x600 = INT32_MAX;
uint64_t x608 = UINT64_MAX;
volatile int32_t t145 = 720679994;
volatile uint32_t x613 = 840824U;
static uint32_t x615 = UINT32_MAX;
int32_t t147 = 0;
volatile int32_t t148 = 2042;
int64_t x627 = -57597071552113580LL;
static int32_t x631 = 5752312;
volatile uint64_t x633 = 8759061765379073748LLU;
static volatile int32_t t152 = 145580833;
static volatile int8_t x638 = INT8_MIN;
uint16_t x641 = 1519U;
static int16_t x649 = 14107;
static uint8_t x653 = UINT8_MAX;
int32_t x654 = 312291;
static int32_t x655 = INT32_MIN;
uint64_t x656 = UINT64_MAX;
int8_t x658 = INT8_MIN;
volatile int32_t t158 = 29996;
static uint32_t x661 = UINT32_MAX;
volatile int16_t x662 = INT16_MIN;
int64_t x663 = 432549169LL;
volatile int32_t x664 = INT32_MIN;
volatile int32_t x665 = INT32_MIN;
uint8_t x681 = 1U;
int32_t t164 = -686937722;
uint8_t x687 = 4U;
volatile int64_t x689 = INT64_MIN;
int16_t x691 = -1;
int16_t x700 = 57;
int16_t x709 = INT16_MIN;
int8_t x716 = INT8_MAX;
volatile int32_t t172 = -850503;
static int8_t x722 = INT8_MAX;
uint64_t x723 = 186LLU;
int32_t t175 = -1934;
static uint64_t x732 = UINT64_MAX;
int32_t t178 = 90200;
int8_t x742 = 6;
volatile int32_t t179 = 106444683;
int32_t x755 = INT32_MAX;
volatile uint64_t x762 = 2667040862224793LLU;
int8_t x770 = INT8_MIN;
int32_t x774 = INT32_MIN;
int64_t x783 = -2035233684808427LL;
volatile int16_t x798 = -1897;
volatile int16_t x801 = INT16_MAX;
volatile int8_t x808 = -1;
uint32_t x814 = UINT32_MAX;
uint8_t x821 = 76U;
int16_t x823 = -461;
int32_t t199 = -48;


void f0(void) {
    	static volatile uint16_t x2 = 650U;
	int16_t x3 = 4300;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -117646;

    t0 = (x1==((x2/x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 30;
	int32_t x6 = INT32_MAX;
	int32_t x7 = -1;
	volatile int32_t t1 = 71669;

    t1 = (x5==((x6/x7)|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 995196629001420335LLU;
	int16_t x11 = INT16_MIN;
	int32_t t2 = -42394811;

    t2 = (x9==((x10/x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 57;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = 15;

    t3 = (x13==((x14/x15)|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static uint16_t x18 = 314U;
	uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = 128602;

    t4 = (x17==((x18/x19)|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = 3;
	int32_t t5 = -1346;

    t5 = (x21==((x22/x23)|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 121229U;
	static int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 3533;

    t6 = (x25==((x26/x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 4050U;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -7461;

    t7 = (x29==((x30/x31)|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	volatile uint64_t x34 = 820LLU;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = -371;

    t8 = (x33==((x34/x35)|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 0;
	uint32_t x38 = UINT32_MAX;
	static int64_t x39 = INT64_MIN;
	int8_t x40 = -1;
	volatile int32_t t9 = 101;

    t9 = (x37==((x38/x39)|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x42 = 10;
	uint8_t x43 = 105U;
	volatile int8_t x44 = INT8_MAX;
	int32_t t10 = -485284;

    t10 = (x41==((x42/x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	static uint8_t x51 = 107U;
	int16_t x52 = 765;
	int32_t t11 = 57718;

    t11 = (x49==((x50/x51)|x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -486;
	int16_t x54 = 43;
	int16_t x55 = -1;
	int32_t t12 = 69796;

    t12 = (x53==((x54/x55)|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 11U;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = -12;
	volatile int16_t x60 = INT16_MIN;
	static volatile int32_t t13 = -6;

    t13 = (x57==((x58/x59)|x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MIN;
	static uint64_t x64 = UINT64_MAX;
	int32_t t14 = 1606;

    t14 = (x61==((x62/x63)|x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 2962;
	int8_t x66 = INT8_MAX;
	volatile int32_t x67 = -1;
	int32_t t15 = 28;

    t15 = (x65==((x66/x67)|x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x69 = -546LL;
	static int16_t x70 = INT16_MIN;
	uint16_t x71 = 5U;
	uint64_t x72 = 23073104825LLU;
	static int32_t t16 = -2;

    t16 = (x69==((x70/x71)|x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -1LL;
	static int8_t x74 = 8;
	int16_t x75 = INT16_MIN;
	volatile int32_t t17 = -1;

    t17 = (x73==((x74/x75)|x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x78 = -56839;
	int16_t x79 = -1;
	int32_t t18 = -1456665;

    t18 = (x77==((x78/x79)|x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x81 = INT32_MIN;
	int32_t x82 = -1682;
	int32_t x83 = -23924705;
	uint32_t x84 = 12849410U;
	volatile int32_t t19 = 0;

    t19 = (x81==((x82/x83)|x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	static volatile int16_t x88 = -1;
	int32_t t20 = 52053;

    t20 = (x85==((x86/x87)|x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = 111;
	volatile uint64_t x91 = 226191LLU;
	int32_t t21 = -9584584;

    t21 = (x89==((x90/x91)|x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = INT64_MIN;
	static volatile int64_t x94 = INT64_MAX;
	int8_t x95 = -1;
	uint16_t x96 = 3281U;
	static int32_t t22 = 1;

    t22 = (x93==((x94/x95)|x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -1LL;
	uint16_t x100 = UINT16_MAX;
	int32_t t23 = -758898393;

    t23 = (x97==((x98/x99)|x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x101 = 11275725734793142LLU;
	int16_t x102 = -1;
	volatile uint16_t x103 = 6U;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t24 = 752011911;

    t24 = (x101==((x102/x103)|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = INT16_MIN;
	static int64_t x106 = -160849LL;
	int32_t x107 = -1;
	volatile int32_t x108 = -1;
	volatile int32_t t25 = 81738156;

    t25 = (x105==((x106/x107)|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x111 = 2U;
	int32_t x112 = -47396;

    t26 = (x109==((x110/x111)|x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x113 = 8U;
	static volatile uint8_t x114 = 6U;
	uint8_t x116 = UINT8_MAX;

    t27 = (x113==((x114/x115)|x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	static uint8_t x120 = 97U;
	int32_t t28 = 394;

    t28 = (x117==((x118/x119)|x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = 58429836500LL;
	int32_t x122 = -2063300;
	volatile int64_t x123 = -1LL;
	uint16_t x124 = UINT16_MAX;
	int32_t t29 = 0;

    t29 = (x121==((x122/x123)|x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x125 = INT8_MIN;
	uint8_t x126 = 100U;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;

    t30 = (x125==((x126/x127)|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = UINT8_MAX;
	int32_t x130 = 505825;
	int64_t x131 = -743229203297263LL;
	int64_t x132 = INT64_MIN;
	int32_t t31 = -32794;

    t31 = (x129==((x130/x131)|x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t32 = -905;

    t32 = (x133==((x134/x135)|x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = INT8_MIN;
	uint64_t x138 = UINT64_MAX;
	volatile int8_t x140 = 55;
	static volatile int32_t t33 = 13487625;

    t33 = (x137==((x138/x139)|x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x141 = 0;
	volatile int16_t x142 = -1;
	int16_t x143 = -1;
	int64_t x144 = -17391507429547865LL;
	static volatile int32_t t34 = -35694931;

    t34 = (x141==((x142/x143)|x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x145 = 25535LLU;
	static int32_t x146 = INT32_MIN;
	volatile int64_t x147 = 185641910473LL;
	volatile int64_t x148 = -1LL;
	volatile int32_t t35 = 6004277;

    t35 = (x145==((x146/x147)|x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = 1U;
	uint16_t x150 = 74U;

    t36 = (x149==((x150/x151)|x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x153 = 37274U;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 939U;

    t37 = (x153==((x154/x155)|x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MAX;
	volatile uint8_t x162 = 48U;
	int8_t x163 = -9;
	uint64_t x164 = 185LLU;

    t38 = (x161==((x162/x163)|x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x165 = -12906609;
	static int32_t x167 = INT32_MIN;
	static int64_t x168 = INT64_MIN;

    t39 = (x165==((x166/x167)|x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = 4U;
	static int16_t x170 = INT16_MIN;
	volatile int16_t x171 = -21;
	static volatile int32_t t40 = 36;

    t40 = (x169==((x170/x171)|x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = 958028505151619LL;
	int32_t x176 = INT32_MIN;
	int32_t t41 = 84503;

    t41 = (x173==((x174/x175)|x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x178 = INT64_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t42 = -528994;

    t42 = (x177==((x178/x179)|x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x182 = 9U;
	volatile uint16_t x183 = UINT16_MAX;
	static volatile int64_t x184 = 1938LL;
	volatile int32_t t43 = -691;

    t43 = (x181==((x182/x183)|x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = 2615479746LL;
	static uint32_t x186 = 60191U;
	static int64_t x188 = 1LL;

    t44 = (x185==((x186/x187)|x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 2U;
	uint64_t x191 = 11245716631875311LLU;
	static int8_t x192 = 1;
	volatile int32_t t45 = -23351;

    t45 = (x189==((x190/x191)|x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = 29U;
	static int32_t t46 = 19550452;

    t46 = (x193==((x194/x195)|x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = INT32_MAX;
	static volatile int8_t x198 = INT8_MIN;
	int32_t x200 = -2;
	int32_t t47 = -341704493;

    t47 = (x197==((x198/x199)|x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 10U;
	uint16_t x202 = 4858U;
	int8_t x203 = -1;
	static int32_t t48 = -382;

    t48 = (x201==((x202/x203)|x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -2081050;
	int16_t x206 = INT16_MIN;
	int16_t x207 = -15849;
	uint32_t x208 = UINT32_MAX;

    t49 = (x205==((x206/x207)|x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x209 = -1;
	static int64_t x210 = -4909749589940473LL;
	int64_t x212 = 3681LL;
	static int32_t t50 = -435;

    t50 = (x209==((x210/x211)|x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x213 = 0U;
	int32_t x215 = INT32_MAX;
	int8_t x216 = 11;
	volatile int32_t t51 = 427;

    t51 = (x213==((x214/x215)|x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MAX;
	static uint64_t x218 = 5149806962LLU;
	uint8_t x219 = 82U;
	static uint8_t x220 = 114U;
	static volatile int32_t t52 = 21;

    t52 = (x217==((x218/x219)|x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = 248229LL;
	static int32_t t53 = 93049147;

    t53 = (x221==((x222/x223)|x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -15;
	volatile int32_t x226 = 40;
	volatile int64_t x228 = INT64_MIN;

    t54 = (x225==((x226/x227)|x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	static volatile int32_t x230 = -1;
	static volatile int32_t x231 = -1;
	int64_t x232 = 5109LL;
	volatile int32_t t55 = -4376116;

    t55 = (x229==((x230/x231)|x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x233 = 146U;
	int32_t x234 = INT32_MAX;
	int32_t x235 = 218477;
	volatile int8_t x236 = 17;
	volatile int32_t t56 = -791;

    t56 = (x233==((x234/x235)|x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x237 = -25972004697562LL;
	int32_t x238 = -2694164;
	static int64_t x239 = INT64_MAX;
	int8_t x240 = 38;
	volatile int32_t t57 = 6544;

    t57 = (x237==((x238/x239)|x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	static uint32_t x243 = 8U;
	volatile int32_t x244 = 444;
	int32_t t58 = -9095376;

    t58 = (x241==((x242/x243)|x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x245 = 105U;
	int16_t x247 = 1347;

    t59 = (x245==((x246/x247)|x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = 0U;
	volatile int64_t x251 = -65321963405307LL;
	volatile int16_t x252 = INT16_MAX;
	volatile int32_t t60 = 0;

    t60 = (x249==((x250/x251)|x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x257 = 0U;
	volatile uint8_t x258 = UINT8_MAX;
	volatile uint32_t x259 = 843754U;
	uint32_t x260 = 4669U;
	static volatile int32_t t61 = 970491023;

    t61 = (x257==((x258/x259)|x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x261 = 5460876U;
	int16_t x262 = -769;
	int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = 108U;
	volatile int32_t t62 = 1063;

    t62 = (x261==((x262/x263)|x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = 13U;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;

    t63 = (x265==((x266/x267)|x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x270 = INT64_MIN;
	volatile int8_t x271 = 8;
	static int8_t x272 = INT8_MIN;
	int32_t t64 = 264983612;

    t64 = (x269==((x270/x271)|x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 729U;
	int32_t t65 = 6796;

    t65 = (x273==((x274/x275)|x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = INT8_MIN;
	volatile int16_t x278 = -13612;
	volatile int8_t x280 = -1;

    t66 = (x277==((x278/x279)|x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x281 = INT32_MIN;
	uint8_t x282 = 15U;
	volatile uint32_t x283 = 66U;
	int64_t x284 = INT64_MIN;
	volatile int32_t t67 = -47679813;

    t67 = (x281==((x282/x283)|x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = -1;
	int8_t x286 = -1;
	uint64_t x287 = 14076348LLU;
	uint8_t x288 = 47U;
	static volatile int32_t t68 = 2907;

    t68 = (x285==((x286/x287)|x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MAX;
	static volatile uint32_t x292 = 89145U;
	static int32_t t69 = -978644;

    t69 = (x289==((x290/x291)|x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = -53;
	uint8_t x295 = 21U;
	static int64_t x296 = 3251101LL;
	volatile int32_t t70 = -19292589;

    t70 = (x293==((x294/x295)|x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MIN;
	static uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MAX;
	int32_t t71 = -3;

    t71 = (x297==((x298/x299)|x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x303 = 668;
	int64_t x304 = INT64_MIN;
	volatile int32_t t72 = 53091;

    t72 = (x301==((x302/x303)|x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x307 = INT16_MIN;
	volatile int32_t t73 = -810723;

    t73 = (x305==((x306/x307)|x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x312 = INT8_MAX;

    t74 = (x309==((x310/x311)|x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x317 = INT16_MIN;
	volatile int64_t x318 = -256264370273749943LL;
	uint16_t x319 = UINT16_MAX;
	static int64_t x320 = -450142488053742246LL;
	volatile int32_t t75 = 1378;

    t75 = (x317==((x318/x319)|x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x321 = UINT16_MAX;
	static int8_t x322 = INT8_MAX;
	static volatile int32_t t76 = 1797;

    t76 = (x321==((x322/x323)|x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x325 = 1;
	volatile uint32_t x326 = 5841515U;
	int8_t x328 = -1;

    t77 = (x325==((x326/x327)|x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x329 = INT32_MIN;
	uint16_t x330 = 1944U;
	int8_t x331 = INT8_MIN;
	int32_t t78 = 614326;

    t78 = (x329==((x330/x331)|x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x338 = INT32_MAX;
	int64_t x339 = INT64_MAX;
	int64_t x340 = 23393858535870LL;
	int32_t t79 = 2;

    t79 = (x337==((x338/x339)|x340));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x342 = INT16_MAX;
	int32_t x343 = -1;
	static uint64_t x344 = 237055805743167063LLU;
	int32_t t80 = 0;

    t80 = (x341==((x342/x343)|x344));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = -150914244352426571LL;
	volatile int64_t x347 = -1LL;
	static int64_t x348 = INT64_MAX;

    t81 = (x345==((x346/x347)|x348));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = INT64_MIN;
	volatile uint32_t x350 = 1989987U;
	volatile uint8_t x351 = UINT8_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t82 = 3318467;

    t82 = (x349==((x350/x351)|x352));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x354 = UINT64_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	static int16_t x356 = -10210;
	volatile int32_t t83 = 25334;

    t83 = (x353==((x354/x355)|x356));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t84 = 234477;

    t84 = (x357==((x358/x359)|x360));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x362 = -27;
	uint32_t x363 = UINT32_MAX;
	volatile uint32_t x364 = UINT32_MAX;

    t85 = (x361==((x362/x363)|x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x365 = 94U;
	int32_t x366 = INT32_MIN;
	volatile uint64_t x367 = UINT64_MAX;
	volatile int32_t x368 = -1;
	int32_t t86 = -53792;

    t86 = (x365==((x366/x367)|x368));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = 112242892902664094LL;
	int32_t x370 = -51677;
	uint16_t x371 = 10126U;
	int8_t x372 = INT8_MIN;
	int32_t t87 = -1;

    t87 = (x369==((x370/x371)|x372));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = 5;
	int8_t x375 = -1;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t88 = 5570925;

    t88 = (x373==((x374/x375)|x376));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x377 = INT8_MAX;
	int64_t x378 = -849512855664247701LL;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	int32_t t89 = -921;

    t89 = (x377==((x378/x379)|x380));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x381 = 45647141971152875LLU;
	static int8_t x382 = -1;
	int32_t x383 = -96;
	uint16_t x384 = 2U;
	volatile int32_t t90 = 3;

    t90 = (x381==((x382/x383)|x384));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x385 = INT64_MIN;
	int32_t x386 = -1033222;
	int64_t x387 = -244882058355LL;
	int8_t x388 = -1;
	static int32_t t91 = -731701;

    t91 = (x385==((x386/x387)|x388));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = -1LL;
	uint8_t x390 = 1U;
	int8_t x392 = -1;
	static volatile int32_t t92 = -44628;

    t92 = (x389==((x390/x391)|x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	static int32_t x396 = INT32_MIN;
	static int32_t t93 = -46233024;

    t93 = (x393==((x394/x395)|x396));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x397 = INT64_MAX;
	uint64_t x398 = 127989614LLU;
	static uint8_t x399 = UINT8_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t94 = -25025977;

    t94 = (x397==((x398/x399)|x400));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x401 = -1137;
	volatile int32_t x402 = INT32_MAX;
	int32_t x403 = INT32_MIN;
	int32_t t95 = -17402;

    t95 = (x401==((x402/x403)|x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x406 = 30;
	int64_t x407 = -59LL;

    t96 = (x405==((x406/x407)|x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x410 = INT64_MAX;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;

    t97 = (x409==((x410/x411)|x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x413 = -1;
	static int64_t x414 = -1LL;
	volatile int32_t t98 = -469070;

    t98 = (x413==((x414/x415)|x416));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = INT16_MAX;
	static int16_t x418 = 349;
	volatile uint16_t x420 = UINT16_MAX;

    t99 = (x417==((x418/x419)|x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = -1;
	int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	int8_t x424 = -1;
	volatile int32_t t100 = 295689630;

    t100 = (x421==((x422/x423)|x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x425 = 59536981U;
	int32_t x426 = INT32_MIN;
	static volatile int16_t x427 = INT16_MAX;
	volatile int32_t t101 = -233;

    t101 = (x425==((x426/x427)|x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = -14;
	uint64_t x430 = 33769333LLU;
	uint32_t x432 = UINT32_MAX;

    t102 = (x429==((x430/x431)|x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x433 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t103 = 14756;

    t103 = (x433==((x434/x435)|x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x437 = UINT64_MAX;
	int64_t x438 = INT64_MIN;
	int32_t x439 = 127679847;
	static int16_t x440 = 47;
	int32_t t104 = -3;

    t104 = (x437==((x438/x439)|x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = INT32_MIN;
	static int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MAX;
	volatile uint8_t x444 = 0U;
	static volatile int32_t t105 = -1166;

    t105 = (x441==((x442/x443)|x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = -119911704LL;
	uint16_t x446 = 1248U;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = -8;
	volatile int32_t t106 = -12236;

    t106 = (x445==((x446/x447)|x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	volatile int8_t x450 = 1;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = 30570LLU;
	volatile int32_t t107 = 2;

    t107 = (x449==((x450/x451)|x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint8_t x453 = 7U;
	int64_t x455 = -47LL;
	int64_t x456 = INT64_MAX;

    t108 = (x453==((x454/x455)|x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x458 = INT32_MAX;
	uint8_t x459 = UINT8_MAX;
	int8_t x460 = -2;
	int32_t t109 = 339178702;

    t109 = (x457==((x458/x459)|x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x462 = -1LL;
	int32_t x463 = -1307740;
	static uint16_t x464 = UINT16_MAX;
	static volatile int32_t t110 = -158480687;

    t110 = (x461==((x462/x463)|x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x465 = -1;
	int64_t x466 = -7LL;
	int64_t x468 = -13644439447LL;
	static volatile int32_t t111 = -943451394;

    t111 = (x465==((x466/x467)|x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x469 = INT8_MIN;
	int64_t x470 = -100236762703657698LL;
	int32_t t112 = 15439012;

    t112 = (x469==((x470/x471)|x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x473 = -39;
	uint8_t x474 = 2U;
	static int32_t x475 = 539310190;
	int8_t x476 = INT8_MAX;
	static volatile int32_t t113 = 96958659;

    t113 = (x473==((x474/x475)|x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x477 = -1642222499898LL;
	int32_t x478 = -1;
	int32_t x480 = INT32_MIN;
	int32_t t114 = -7733354;

    t114 = (x477==((x478/x479)|x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x482 = UINT32_MAX;
	int16_t x483 = 1;
	int8_t x484 = -7;
	int32_t t115 = 18748;

    t115 = (x481==((x482/x483)|x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x485 = 114U;
	int8_t x486 = -1;
	int8_t x487 = -6;
	volatile int32_t t116 = 1671;

    t116 = (x485==((x486/x487)|x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	volatile int8_t x492 = -1;
	int32_t t117 = -7;

    t117 = (x489==((x490/x491)|x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x493 = INT16_MAX;
	static uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MAX;

    t118 = (x493==((x494/x495)|x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x498 = UINT16_MAX;
	volatile int16_t x499 = INT16_MIN;
	int32_t x500 = INT32_MIN;
	static volatile int32_t t119 = 6;

    t119 = (x497==((x498/x499)|x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x502 = 396209780;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t120 = -1;

    t120 = (x501==((x502/x503)|x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = UINT32_MAX;
	static int8_t x506 = -1;
	uint8_t x508 = 1U;
	int32_t t121 = 33119281;

    t121 = (x505==((x506/x507)|x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MIN;
	uint16_t x512 = UINT16_MAX;
	volatile int32_t t122 = 785;

    t122 = (x509==((x510/x511)|x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x513 = 50U;
	uint8_t x514 = UINT8_MAX;
	static int64_t x515 = -1LL;
	uint16_t x516 = 4U;

    t123 = (x513==((x514/x515)|x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x517 = 1118LLU;
	uint8_t x518 = 91U;
	int32_t x519 = INT32_MAX;
	static volatile int32_t t124 = 0;

    t124 = (x517==((x518/x519)|x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x523 = 3536LLU;
	uint64_t x524 = 1810793LLU;
	volatile int32_t t125 = -180119;

    t125 = (x521==((x522/x523)|x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = -2;
	static uint64_t x526 = 10460810LLU;
	int64_t x527 = INT64_MIN;
	int32_t t126 = 227548;

    t126 = (x525==((x526/x527)|x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = -29680022879LL;
	static int16_t x530 = -19;
	int64_t x531 = INT64_MIN;
	volatile int32_t t127 = 4;

    t127 = (x529==((x530/x531)|x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x533 = 45U;
	static int16_t x534 = INT16_MIN;
	int16_t x535 = -2684;
	uint16_t x536 = 20U;
	volatile int32_t t128 = 231257576;

    t128 = (x533==((x534/x535)|x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x537 = INT8_MIN;
	static int64_t x539 = INT64_MIN;
	uint64_t x540 = UINT64_MAX;
	static volatile int32_t t129 = -20361;

    t129 = (x537==((x538/x539)|x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x542 = 32258199LL;
	static uint32_t x543 = UINT32_MAX;
	int32_t t130 = 6281;

    t130 = (x541==((x542/x543)|x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = INT32_MAX;
	uint64_t x547 = 502622556563LLU;
	int16_t x548 = INT16_MIN;
	volatile int32_t t131 = 7;

    t131 = (x545==((x546/x547)|x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x549 = INT16_MAX;
	int8_t x550 = -1;
	volatile uint8_t x552 = 6U;

    t132 = (x549==((x550/x551)|x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x554 = INT8_MIN;
	volatile int32_t x555 = 15874238;
	int64_t x556 = INT64_MIN;
	static int32_t t133 = -8306063;

    t133 = (x553==((x554/x555)|x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = -1;
	int32_t x562 = -16;
	uint64_t x563 = 243LLU;
	int8_t x564 = 9;
	volatile int32_t t134 = -1115332;

    t134 = (x561==((x562/x563)|x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x565 = -1LL;
	volatile int32_t t135 = -7052520;

    t135 = (x565==((x566/x567)|x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x569 = 1U;
	int32_t x570 = -438895;
	int16_t x572 = -1;
	int32_t t136 = -1762033;

    t136 = (x569==((x570/x571)|x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MIN;
	static int32_t x576 = -1;
	static volatile int32_t t137 = 1501355;

    t137 = (x573==((x574/x575)|x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x577 = -1;
	static int8_t x578 = 3;
	static uint16_t x580 = UINT16_MAX;
	static int32_t t138 = -948940453;

    t138 = (x577==((x578/x579)|x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x581 = -13734;
	volatile int64_t x583 = INT64_MIN;
	uint32_t x584 = 15U;

    t139 = (x581==((x582/x583)|x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x586 = 0;
	uint8_t x587 = 11U;
	volatile int32_t t140 = -3;

    t140 = (x585==((x586/x587)|x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x589 = 21LLU;
	int16_t x590 = INT16_MAX;
	volatile int64_t x591 = INT64_MAX;
	uint32_t x592 = UINT32_MAX;
	static volatile int32_t t141 = -26081;

    t141 = (x589==((x590/x591)|x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x593 = INT64_MAX;
	static volatile int32_t x594 = -1;
	int64_t x595 = INT64_MIN;
	int8_t x596 = INT8_MIN;

    t142 = (x593==((x594/x595)|x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x597 = 7356619110246143LL;
	volatile uint64_t x598 = 877680617496198347LLU;
	volatile int32_t x599 = INT32_MIN;
	static int32_t t143 = 0;

    t143 = (x597==((x598/x599)|x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x601 = INT8_MAX;
	int32_t x602 = INT32_MAX;
	uint64_t x603 = 40LLU;
	int32_t x604 = INT32_MIN;
	int32_t t144 = 2834;

    t144 = (x601==((x602/x603)|x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x605 = -1;
	static int32_t x606 = INT32_MIN;
	static int32_t x607 = INT32_MIN;

    t145 = (x605==((x606/x607)|x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x609 = -510;
	int32_t x610 = -944;
	int64_t x611 = INT64_MAX;
	static int32_t x612 = INT32_MIN;
	int32_t t146 = 17917396;

    t146 = (x609==((x610/x611)|x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x614 = 1U;
	int64_t x616 = -5284447807147183LL;

    t147 = (x613==((x614/x615)|x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = -1;
	uint8_t x618 = 0U;
	static volatile int8_t x619 = INT8_MIN;
	volatile int32_t x620 = INT32_MIN;

    t148 = (x617==((x618/x619)|x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x621 = 239U;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = 1246955U;
	int16_t x624 = 444;
	static volatile int32_t t149 = -5440913;

    t149 = (x621==((x622/x623)|x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x625 = UINT32_MAX;
	volatile int32_t x626 = -478;
	int64_t x628 = -1LL;
	volatile int32_t t150 = -731301;

    t150 = (x625==((x626/x627)|x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x629 = 71U;
	int8_t x630 = INT8_MIN;
	uint16_t x632 = UINT16_MAX;
	static volatile int32_t t151 = -29;

    t151 = (x629==((x630/x631)|x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x634 = INT64_MIN;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = 9U;

    t152 = (x633==((x634/x635)|x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x637 = INT16_MAX;
	int32_t x639 = 28479;
	int64_t x640 = INT64_MAX;
	int32_t t153 = -1018285;

    t153 = (x637==((x638/x639)|x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x642 = UINT16_MAX;
	int16_t x643 = -1;
	int64_t x644 = 160640630348LL;
	static int32_t t154 = -1795;

    t154 = (x641==((x642/x643)|x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x645 = 26U;
	volatile uint16_t x646 = 1U;
	static int8_t x647 = 5;
	static int8_t x648 = -1;
	volatile int32_t t155 = -57105127;

    t155 = (x645==((x646/x647)|x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x650 = 53U;
	int32_t x651 = -1;
	int8_t x652 = INT8_MAX;
	int32_t t156 = 11883703;

    t156 = (x649==((x650/x651)|x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t t157 = 0;

    t157 = (x653==((x654/x655)|x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x657 = 3097759781LLU;
	int64_t x659 = INT64_MIN;
	static int64_t x660 = INT64_MAX;

    t158 = (x657==((x658/x659)|x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t t159 = 50;

    t159 = (x661==((x662/x663)|x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x666 = -170;
	int8_t x667 = -1;
	static uint32_t x668 = 92U;
	int32_t t160 = 3451;

    t160 = (x665==((x666/x667)|x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x669 = 117U;
	volatile uint16_t x670 = 21724U;
	int64_t x671 = INT64_MIN;
	static volatile int64_t x672 = -1LL;
	int32_t t161 = 67890555;

    t161 = (x669==((x670/x671)|x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x673 = 6606494603LLU;
	volatile int8_t x674 = -37;
	uint8_t x675 = 6U;
	int32_t x676 = -7;
	volatile int32_t t162 = 568;

    t162 = (x673==((x674/x675)|x676));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x677 = 2094LLU;
	volatile int32_t x678 = INT32_MIN;
	volatile int8_t x679 = INT8_MIN;
	volatile int8_t x680 = 1;
	int32_t t163 = -10;

    t163 = (x677==((x678/x679)|x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x682 = INT16_MAX;
	int32_t x683 = INT32_MIN;
	static int8_t x684 = INT8_MIN;

    t164 = (x681==((x682/x683)|x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = INT32_MIN;
	volatile int16_t x686 = -99;
	int8_t x688 = INT8_MIN;
	static volatile int32_t t165 = -605210;

    t165 = (x685==((x686/x687)|x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x690 = -1LL;
	uint64_t x692 = 3164942LLU;
	int32_t t166 = -10048;

    t166 = (x689==((x690/x691)|x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x693 = INT32_MAX;
	int16_t x694 = -1;
	volatile uint32_t x695 = UINT32_MAX;
	uint32_t x696 = 1967739340U;
	int32_t t167 = 51199;

    t167 = (x693==((x694/x695)|x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x697 = 2U;
	volatile uint32_t x698 = UINT32_MAX;
	volatile int64_t x699 = -1LL;
	volatile int32_t t168 = 701891524;

    t168 = (x697==((x698/x699)|x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x701 = INT64_MIN;
	uint8_t x702 = UINT8_MAX;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = 12U;
	int32_t t169 = -33104;

    t169 = (x701==((x702/x703)|x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = 1LL;
	int8_t x706 = INT8_MIN;
	int32_t x707 = INT32_MIN;
	volatile int16_t x708 = INT16_MAX;
	volatile int32_t t170 = -5;

    t170 = (x705==((x706/x707)|x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x710 = -30;
	int32_t x711 = -227979746;
	int8_t x712 = 14;
	volatile int32_t t171 = 111119;

    t171 = (x709==((x710/x711)|x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x713 = -1;
	uint64_t x714 = UINT64_MAX;
	uint16_t x715 = UINT16_MAX;

    t172 = (x713==((x714/x715)|x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = -19674990520144LL;
	uint32_t x718 = UINT32_MAX;
	int32_t x719 = -14109;
	int32_t x720 = 202277;
	volatile int32_t t173 = 357359115;

    t173 = (x717==((x718/x719)|x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x721 = UINT64_MAX;
	int32_t x724 = -394;
	int32_t t174 = 116864299;

    t174 = (x721==((x722/x723)|x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x725 = 5876752570514LLU;
	volatile int64_t x726 = INT64_MIN;
	int8_t x727 = INT8_MAX;
	int32_t x728 = -1;

    t175 = (x725==((x726/x727)|x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = -51;
	int16_t x730 = INT16_MIN;
	volatile uint32_t x731 = UINT32_MAX;
	static volatile int32_t t176 = -1;

    t176 = (x729==((x730/x731)|x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x733 = 3U;
	int16_t x734 = INT16_MIN;
	int16_t x735 = INT16_MIN;
	static int64_t x736 = 35340LL;
	int32_t t177 = 232144;

    t177 = (x733==((x734/x735)|x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x737 = -1;
	static int64_t x738 = INT64_MIN;
	volatile uint64_t x739 = 35LLU;
	volatile int32_t x740 = INT32_MAX;

    t178 = (x737==((x738/x739)|x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x741 = 13104U;
	volatile uint8_t x743 = 2U;
	uint32_t x744 = 774U;

    t179 = (x741==((x742/x743)|x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x745 = UINT8_MAX;
	static uint8_t x746 = UINT8_MAX;
	static int32_t x747 = INT32_MIN;
	uint16_t x748 = 3846U;
	int32_t t180 = -12159;

    t180 = (x745==((x746/x747)|x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = 11;
	volatile int8_t x750 = INT8_MAX;
	int32_t x751 = INT32_MAX;
	int64_t x752 = -245145723001000LL;
	int32_t t181 = 63;

    t181 = (x749==((x750/x751)|x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = -1LL;
	static int16_t x754 = -477;
	static int32_t x756 = 3405;
	volatile int32_t t182 = 57;

    t182 = (x753==((x754/x755)|x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = INT16_MIN;
	uint64_t x759 = 4098696LLU;
	int32_t x760 = -1;
	volatile int32_t t183 = 339;

    t183 = (x757==((x758/x759)|x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x761 = 18U;
	uint16_t x763 = UINT16_MAX;
	int32_t x764 = INT32_MAX;
	static int32_t t184 = 517671454;

    t184 = (x761==((x762/x763)|x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = -1;
	uint64_t x766 = UINT64_MAX;
	static int16_t x767 = INT16_MIN;
	uint32_t x768 = 100152U;
	volatile int32_t t185 = -158;

    t185 = (x765==((x766/x767)|x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x769 = 14454U;
	int64_t x771 = INT64_MIN;
	uint8_t x772 = 44U;
	int32_t t186 = 360608895;

    t186 = (x769==((x770/x771)|x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x773 = INT32_MAX;
	volatile uint16_t x775 = 30U;
	int64_t x776 = -770LL;
	static volatile int32_t t187 = 374;

    t187 = (x773==((x774/x775)|x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x777 = UINT16_MAX;
	int8_t x778 = -14;
	uint32_t x779 = 461U;
	uint16_t x780 = 29U;
	int32_t t188 = -66475;

    t188 = (x777==((x778/x779)|x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x781 = UINT16_MAX;
	static uint16_t x782 = 41U;
	static volatile int64_t x784 = INT64_MAX;
	static int32_t t189 = 5591858;

    t189 = (x781==((x782/x783)|x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = 49412394724370LL;
	int16_t x786 = INT16_MAX;
	int64_t x787 = INT64_MIN;
	volatile uint64_t x788 = 255667517LLU;
	static volatile int32_t t190 = 12088;

    t190 = (x785==((x786/x787)|x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x789 = 1;
	uint32_t x790 = UINT32_MAX;
	volatile uint64_t x791 = UINT64_MAX;
	volatile uint32_t x792 = 2U;
	int32_t t191 = 3473125;

    t191 = (x789==((x790/x791)|x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x793 = UINT64_MAX;
	int64_t x794 = -218176822504651944LL;
	int8_t x795 = INT8_MIN;
	int64_t x796 = INT64_MIN;
	int32_t t192 = 473856;

    t192 = (x793==((x794/x795)|x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x797 = 24U;
	volatile int8_t x799 = INT8_MIN;
	volatile int8_t x800 = -1;
	static volatile int32_t t193 = -19;

    t193 = (x797==((x798/x799)|x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x802 = -226;
	int64_t x803 = INT64_MAX;
	int8_t x804 = 49;
	volatile int32_t t194 = -57611510;

    t194 = (x801==((x802/x803)|x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x805 = -1;
	int64_t x806 = -1LL;
	int32_t x807 = INT32_MIN;
	int32_t t195 = 10;

    t195 = (x805==((x806/x807)|x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x809 = 1925103066381LLU;
	int64_t x810 = 6992745433480853LL;
	static int16_t x811 = -1;
	uint32_t x812 = UINT32_MAX;
	int32_t t196 = 186974;

    t196 = (x809==((x810/x811)|x812));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = INT64_MIN;
	int16_t x815 = -67;
	volatile int16_t x816 = -1;
	int32_t t197 = -2623;

    t197 = (x813==((x814/x815)|x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x817 = 0;
	int16_t x818 = -673;
	int64_t x819 = INT64_MAX;
	static int64_t x820 = INT64_MAX;
	volatile int32_t t198 = 103;

    t198 = (x817==((x818/x819)|x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x822 = UINT32_MAX;
	static int32_t x824 = -1;

    t199 = (x821==((x822/x823)|x824));

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

