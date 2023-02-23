
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

int16_t x6 = INT16_MIN;
int64_t x7 = 514256LL;
uint8_t x11 = UINT8_MAX;
static volatile int16_t x15 = INT16_MIN;
volatile int16_t x21 = INT16_MAX;
static int32_t x24 = -1;
int16_t x25 = -804;
volatile int8_t x29 = 0;
volatile uint8_t x33 = 0U;
int8_t x35 = 5;
int8_t x36 = INT8_MAX;
static uint16_t x41 = 18125U;
static int16_t x43 = INT16_MIN;
int8_t x59 = -1;
volatile int8_t x61 = -1;
uint8_t x62 = 22U;
int8_t x64 = INT8_MIN;
int32_t x65 = INT32_MIN;
volatile uint32_t x72 = UINT32_MAX;
static volatile int64_t t14 = 59176096899191825LL;
uint64_t x74 = UINT64_MAX;
uint8_t x86 = 4U;
int32_t x96 = 18027570;
static int16_t x100 = -1;
static uint8_t x102 = 17U;
volatile uint64_t x103 = UINT64_MAX;
volatile int16_t x104 = INT16_MIN;
int8_t x105 = INT8_MIN;
int16_t x116 = -254;
static int32_t x117 = INT32_MIN;
uint32_t x123 = UINT32_MAX;
int16_t x127 = -290;
volatile int32_t t28 = -632942619;
int32_t x136 = INT32_MAX;
static int64_t x138 = -1LL;
volatile int32_t x140 = 1221;
static int64_t x142 = INT64_MAX;
int16_t x144 = INT16_MAX;
volatile int64_t x145 = -53877069LL;
static int32_t x158 = INT32_MIN;
int16_t x159 = INT16_MIN;
volatile int64_t t36 = 122LL;
int64_t t37 = -11039LL;
int32_t t38 = -6;
int32_t x170 = INT32_MAX;
int64_t x171 = -1LL;
int32_t x173 = INT32_MIN;
static volatile uint64_t x178 = 553LLU;
static uint32_t x182 = 3857U;
static int64_t t42 = -2753747LL;
volatile int32_t x185 = INT32_MAX;
static int16_t x187 = 0;
static int32_t x190 = -546152;
static uint16_t x197 = UINT16_MAX;
uint8_t x203 = UINT8_MAX;
int32_t x215 = INT32_MIN;
int32_t x216 = INT32_MAX;
int16_t x220 = INT16_MIN;
volatile int32_t t50 = -3;
volatile int16_t x221 = -1;
volatile int64_t x225 = INT64_MIN;
static volatile int32_t x227 = -1;
static int64_t t52 = INT64_MIN;
static uint8_t x234 = 28U;
uint8_t x251 = 84U;
uint32_t x257 = UINT32_MAX;
int32_t x263 = 273;
volatile int32_t x274 = INT32_MIN;
int8_t x279 = INT8_MIN;
static int8_t x280 = -1;
uint64_t x282 = 16550989LLU;
uint32_t x284 = 12U;
volatile uint64_t t64 = 2LLU;
uint32_t x287 = 127752U;
uint32_t x291 = UINT32_MAX;
volatile uint64_t t66 = 85836LLU;
uint8_t x294 = 51U;
uint64_t t68 = 4LLU;
int16_t x305 = -1;
uint64_t t71 = 6LLU;
volatile int16_t x318 = 4088;
uint8_t x319 = 18U;
static volatile int32_t t73 = 6555;
uint16_t x321 = 1609U;
int64_t x332 = INT64_MIN;
uint16_t x334 = UINT16_MAX;
int16_t x340 = INT16_MIN;
volatile int32_t t77 = 8656994;
static int64_t x346 = -463247512475537LL;
int64_t x348 = INT64_MIN;
uint64_t x354 = 223528751LLU;
uint8_t x356 = UINT8_MAX;
static int8_t x362 = INT8_MAX;
int16_t x367 = INT16_MIN;
volatile int16_t x385 = INT16_MAX;
static volatile int64_t x389 = INT64_MIN;
volatile int64_t t89 = 10678105414869LL;
uint64_t x401 = UINT64_MAX;
static volatile uint32_t t95 = 1496164782U;
static volatile uint32_t x419 = 485176347U;
static uint32_t t96 = 23816U;
volatile int32_t x424 = INT32_MIN;
volatile int8_t x427 = INT8_MIN;
static int16_t x430 = -1;
uint64_t x445 = UINT64_MAX;
int16_t x453 = 1;
int32_t t103 = -126465;
int16_t x475 = -50;
static volatile uint32_t t106 = 28703865U;
static uint64_t t108 = 6768531315LLU;
int32_t x486 = 137867313;
uint16_t x496 = 1724U;
uint32_t x497 = UINT32_MAX;
uint32_t x502 = UINT32_MAX;
int8_t x503 = 0;
static volatile uint32_t t112 = 114U;
int32_t x505 = 16072814;
uint32_t x517 = UINT32_MAX;
uint8_t x520 = 10U;
volatile uint8_t x524 = 109U;
int64_t x526 = -1LL;
int8_t x536 = -1;
int8_t x538 = -1;
static int8_t x540 = INT8_MIN;
int32_t x550 = INT32_MAX;
static uint8_t x572 = 57U;
static uint32_t t126 = 246235U;
volatile uint16_t x573 = UINT16_MAX;
volatile int8_t x575 = -1;
int32_t x576 = INT32_MIN;
int32_t t128 = 225787979;
int16_t x596 = 182;
volatile int32_t x601 = -1;
int16_t x624 = -250;
uint64_t t135 = 5684068810428757398LLU;
int8_t x628 = -2;
uint8_t x629 = UINT8_MAX;
static int16_t x635 = 19;
volatile int8_t x636 = INT8_MIN;
static int16_t x637 = -1;
int8_t x638 = 8;
int8_t x643 = INT8_MIN;
int16_t x644 = INT16_MIN;
volatile uint8_t x655 = 55U;
int32_t x656 = INT32_MIN;
int32_t x659 = INT32_MAX;
static volatile int32_t t142 = -15134;
int16_t x663 = INT16_MIN;
uint8_t x668 = UINT8_MAX;
static uint64_t t145 = 27LLU;
uint8_t x673 = 11U;
uint64_t x674 = UINT64_MAX;
int32_t x676 = INT32_MIN;
int16_t x680 = -1;
uint8_t x687 = 21U;
volatile uint32_t x699 = 11U;
int8_t x700 = -1;
static uint32_t x704 = 3882U;
int32_t x710 = -12212;
static uint32_t x719 = 34291941U;
static int16_t x723 = -1;
int32_t t156 = 562157310;
int16_t x726 = 72;
int16_t x727 = -1;
int16_t x728 = INT16_MIN;
volatile uint16_t x732 = 57U;
int32_t t158 = 304;
uint32_t x736 = 241425440U;
uint32_t t159 = UINT32_MAX;
int8_t x738 = 3;
static int16_t x752 = INT16_MIN;
int32_t x753 = -110712113;
static int32_t x754 = -40063;
int32_t x757 = INT32_MAX;
int8_t x758 = 12;
int16_t x762 = -46;
int64_t x766 = INT64_MIN;
volatile int64_t x767 = INT64_MIN;
volatile int64_t t168 = 58931LL;
int8_t x776 = INT8_MIN;
int64_t x780 = 669436494452250807LL;
static int16_t x785 = -7864;
static int32_t x788 = 40324;
uint8_t x791 = UINT8_MAX;
int16_t x799 = INT16_MAX;
int64_t x802 = -2939121LL;
uint32_t x803 = UINT32_MAX;
uint64_t t175 = 483602LLU;
static int64_t t176 = 597834768177368LL;
int16_t x818 = INT16_MIN;
static uint64_t t179 = 940067640LLU;
static int8_t x826 = -1;
volatile int32_t x831 = -1;
volatile uint32_t t181 = UINT32_MAX;
int64_t x842 = -1LL;
volatile int64_t x843 = INT64_MIN;
int32_t x845 = -1;
uint16_t x851 = 1U;
static uint8_t x854 = 28U;
int32_t x855 = -1;
int32_t x861 = 408345135;
uint8_t x865 = 5U;
static uint64_t x868 = 441428347LLU;
int64_t x872 = INT64_MIN;
static int8_t x875 = 28;
static volatile uint64_t x877 = 29537007949783LLU;
volatile int8_t x886 = 1;
uint32_t x900 = UINT32_MAX;
static int64_t t197 = -82LL;
int8_t x902 = -1;
uint8_t x907 = UINT8_MAX;


void f0(void) {
    	static volatile int64_t x5 = -1LL;
	int8_t x8 = INT8_MIN;
	int64_t t0 = -50785036349748629LL;

    t0 = (x5^((x6-x7)/x8));

    if (t0 != -4274LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 6909LL;
	int32_t x10 = INT32_MAX;
	int32_t x12 = 172069387;
	static int64_t t1 = -5397585119370642LL;

    t1 = (x9^((x10-x11)/x12));

    if (t1 != 6897LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = INT16_MIN;
	uint32_t x14 = 1203U;
	uint16_t x16 = 11758U;
	uint32_t t2 = 89112U;

    t2 = (x13^((x14-x15)/x16));

    if (t2 != 4294934530U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -1;
	int8_t x18 = -3;
	int16_t x19 = 3936;
	int64_t x20 = INT64_MAX;
	int64_t t3 = -2207191443370412LL;

    t3 = (x17^((x18-x19)/x20));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	int32_t t4 = 243646886;

    t4 = (x21^((x22-x23)/x24));

    if (t4 != -2147418113) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x26 = 1;
	static int32_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;
	int32_t t5 = -481815822;

    t5 = (x25^((x26-x27)/x28));

    if (t5 != -804) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = 5;
	int16_t x31 = INT16_MIN;
	int32_t x32 = 45644;
	int32_t t6 = -9974134;

    t6 = (x29^((x30-x31)/x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x34 = INT16_MAX;
	int32_t t7 = 881477;

    t7 = (x33^((x34-x35)/x36));

    if (t7 != 257) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x37 = 1693U;
	uint16_t x38 = UINT16_MAX;
	uint8_t x39 = 89U;
	static int32_t x40 = INT32_MAX;
	int32_t t8 = 2115;

    t8 = (x37^((x38-x39)/x40));

    if (t8 != 1693) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MIN;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -1;

    t9 = (x41^((x42-x43)/x44));

    if (t9 != 18125) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 9247493598018LLU;
	static volatile uint64_t t10 = 776063383LLU;

    t10 = (x45^((x46-x47)/x48));

    if (t10 != 2002912LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = 88825LL;
	static volatile int64_t x58 = 235208143071698192LL;
	volatile uint32_t x60 = UINT32_MAX;
	volatile int64_t t11 = 735954554717LL;

    t11 = (x57^((x58-x59)/x60));

    if (t11 != 54721142LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x63 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x61^((x62-x63)/x64));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x66 = 25U;
	volatile uint8_t x67 = 64U;
	int64_t x68 = -26LL;
	volatile int64_t t13 = -24LL;

    t13 = (x65^((x66-x67)/x68));

    if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = -1;
	int64_t x70 = -808765LL;
	static uint8_t x71 = 11U;

    t14 = (x69^((x70-x71)/x72));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x73 = INT32_MAX;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t15 = 1971629117LLU;

    t15 = (x73^((x74-x75)/x76));

    if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	volatile int8_t x78 = INT8_MIN;
	uint64_t x79 = 55090286352029LLU;
	int16_t x80 = INT16_MIN;
	uint64_t t16 = UINT64_MAX;

    t16 = (x77^((x78-x79)/x80));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MAX;
	int16_t x82 = -1;
	static uint64_t x83 = UINT64_MAX;
	int16_t x84 = -1;
	static volatile uint64_t t17 = 85361LLU;

    t17 = (x81^((x82-x83)/x84));

    if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x85 = 1U;
	uint64_t x87 = 250LLU;
	volatile int64_t x88 = INT64_MIN;
	uint64_t t18 = 65897137510412847LLU;

    t18 = (x85^((x86-x87)/x88));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x89 = 776;
	uint64_t x90 = 122133LLU;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	uint64_t t19 = 1181250078266287LLU;

    t19 = (x89^((x90-x91)/x92));

    if (t19 != 776LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = 24U;
	int16_t x94 = -2;
	int32_t x95 = -1;
	volatile int32_t t20 = 3147501;

    t20 = (x93^((x94-x95)/x96));

    if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x97 = 21981U;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	int64_t t21 = -324088LL;

    t21 = (x97^((x98-x99)/x100));

    if (t21 != -9223372034707270179LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x101 = 1U;
	volatile uint64_t t22 = 1307407633266500060LLU;

    t22 = (x101^((x102-x103)/x104));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x106 = 472537694700928536LL;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t23 = 19181939810LLU;

    t23 = (x105^((x106-x107)/x108));

    if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = 599610285;
	static int32_t x110 = -130550;
	int16_t x111 = 0;
	int8_t x112 = INT8_MIN;
	volatile int32_t t24 = -1822;

    t24 = (x109^((x110-x111)/x112));

    if (t24 != 599609430) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MAX;
	int64_t x114 = -1LL;
	uint32_t x115 = UINT32_MAX;
	int64_t t25 = -8270522332677LL;

    t25 = (x113^((x114-x115)/x116));

    if (t25 != 16940023LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x118 = 62U;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = 1;
	int32_t t26 = -2799485;

    t26 = (x117^((x118-x119)/x120));

    if (t26 != -2147450818) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x121 = INT16_MAX;
	uint8_t x122 = 2U;
	static volatile int16_t x124 = 24;
	uint32_t t27 = 21072U;

    t27 = (x121^((x122-x123)/x124));

    if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int32_t x128 = INT32_MIN;

    t28 = (x125^((x126-x127)/x128));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x129 = -97;
	int8_t x130 = INT8_MIN;
	static uint64_t x131 = UINT64_MAX;
	int16_t x132 = 5287;
	static uint64_t t29 = 8414389887465276131LLU;

    t29 = (x129^((x130-x131)/x132));

    if (t29 != 18443254997849194124LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = UINT32_MAX;
	static int32_t x134 = INT32_MIN;
	int64_t x135 = 2888LL;
	static int64_t t30 = -9686214567556LL;

    t30 = (x133^((x134-x135)/x136));

    if (t30 != -4294967296LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x137 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	int64_t t31 = 59LL;

    t31 = (x137^((x138-x139)/x140));

    if (t31 != -102LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -178LL;
	uint32_t x143 = 10542U;
	static int64_t t32 = -47LL;

    t32 = (x141^((x142-x143)/x144));

    if (t32 != -281483566907575LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x146 = INT32_MAX;
	static uint16_t x147 = 3948U;
	uint8_t x148 = UINT8_MAX;
	volatile int64_t t33 = -11030080035096LL;

    t33 = (x145^((x146-x147)/x148));

    if (t33 != -62298430LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = -1;
	int32_t x150 = -438895061;
	int16_t x151 = -1;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t34 = -152;

    t34 = (x149^((x150-x151)/x152));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x153 = UINT32_MAX;
	uint64_t x154 = 66488120856566LLU;
	int64_t x155 = -159063391974LL;
	static int16_t x156 = -7;
	uint64_t t35 = 54411085242466515LLU;

    t35 = (x153^((x154-x155)/x156));

    if (t35 != 4294967295LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = UINT32_MAX;
	volatile int64_t x160 = INT64_MAX;

    t36 = (x157^((x158-x159)/x160));

    if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = INT32_MIN;
	static int8_t x162 = -1;
	static int64_t x163 = 120700038583550963LL;
	int64_t x164 = -1LL;

    t37 = (x161^((x162-x163)/x164));

    if (t37 != -120700039249656844LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MIN;
	int32_t x166 = 414240124;
	int8_t x167 = -14;
	uint8_t x168 = 60U;

    t38 = (x165^((x166-x167)/x168));

    if (t38 != -6903998) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	uint8_t x172 = 31U;
	int64_t t39 = 86786750593LL;

    t39 = (x169^((x170-x171)/x172));

    if (t39 != -69273662LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x174 = 2;
	uint16_t x175 = UINT16_MAX;
	static volatile uint8_t x176 = 48U;
	volatile int32_t t40 = 0;

    t40 = (x173^((x174-x175)/x176));

    if (t40 != 2147482283) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x177 = 10U;
	int64_t x179 = -1LL;
	int8_t x180 = 1;
	volatile uint64_t t41 = 10035499263320599LLU;

    t41 = (x177^((x178-x179)/x180));

    if (t41 != 544LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = INT64_MAX;
	volatile int16_t x183 = INT16_MAX;
	int8_t x184 = 8;

    t42 = (x181^((x182-x183)/x184));

    if (t42 != 9223372036317908509LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x186 = INT32_MIN;
	uint16_t x188 = UINT16_MAX;
	int32_t t43 = -32410527;

    t43 = (x185^((x186-x187)/x188));

    if (t43 != -2147450881) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x189 = INT16_MIN;
	volatile int8_t x191 = INT8_MAX;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t44 = -29;

    t44 = (x189^((x190-x191)/x192));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x193 = 213878295936415102LL;
	static uint32_t x194 = 4704U;
	static int16_t x195 = -8;
	static uint32_t x196 = 125U;
	int64_t t45 = 10609LL;

    t45 = (x193^((x194-x195)/x196));

    if (t45 != 213878295936415067LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x198 = 6U;
	static uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 16156U;
	static volatile uint32_t t46 = 0U;

    t46 = (x197^((x198-x199)/x200));

    if (t46 != 65535U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x201 = INT16_MAX;
	volatile uint8_t x202 = 18U;
	uint32_t x204 = UINT32_MAX;
	uint32_t t47 = 1044787220U;

    t47 = (x201^((x202-x203)/x204));

    if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 15U;
	int16_t x210 = INT16_MIN;
	volatile int16_t x211 = INT16_MAX;
	uint64_t x212 = 2540258401LLU;
	volatile uint64_t t48 = 2184319300474225470LLU;

    t48 = (x209^((x210-x211)/x212));

    if (t48 != 7261758899LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x213 = INT64_MIN;
	static int64_t x214 = -1LL;
	int64_t t49 = 121LL;

    t49 = (x213^((x214-x215)/x216));

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x217 = -1;
	int8_t x218 = -1;
	static uint8_t x219 = 0U;

    t50 = (x217^((x218-x219)/x220));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	volatile int8_t x224 = INT8_MAX;
	int64_t t51 = 1305341LL;

    t51 = (x221^((x222-x223)/x224));

    if (t51 != 72624976668147581LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x226 = -1;
	volatile uint16_t x228 = 181U;

    t52 = (x225^((x226-x227)/x228));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x229 = -2599;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MIN;
	static int64_t t53 = -5527188991LL;

    t53 = (x229^((x230-x231)/x232));

    if (t53 != -2599LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = 1;
	int64_t x235 = 200423241184500LL;
	static volatile int32_t x236 = -1;
	int64_t t54 = 972525854322LL;

    t54 = (x233^((x234-x235)/x236));

    if (t54 != 200423241184473LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = -1;
	int64_t x242 = -260171909LL;
	uint16_t x243 = 103U;
	int64_t x244 = -1590LL;
	volatile int64_t t55 = -128799LL;

    t55 = (x241^((x242-x243)/x244));

    if (t55 != -163631LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x249 = -39;
	volatile uint32_t x250 = UINT32_MAX;
	uint16_t x252 = 755U;
	uint32_t t56 = 1U;

    t56 = (x249^((x250-x251)/x252));

    if (t56 != 4289278627U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = INT16_MIN;
	static int16_t x254 = INT16_MIN;
	volatile uint64_t x255 = 3LLU;
	uint16_t x256 = 29U;
	static volatile uint64_t t57 = 4361646283366LLU;

    t57 = (x253^((x254-x255)/x256));

    if (t57 != 17810649450478192286LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x258 = 11700LLU;
	volatile int64_t x259 = INT64_MAX;
	int32_t x260 = -15;
	uint64_t t58 = 57518112LLU;

    t58 = (x257^((x258-x259)/x260));

    if (t58 != 4294967295LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x261 = -15;
	static volatile int8_t x262 = -5;
	int8_t x264 = INT8_MIN;
	static int32_t t59 = -208493513;

    t59 = (x261^((x262-x263)/x264));

    if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = 668U;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = UINT32_MAX;
	uint64_t x268 = 206749070494474LLU;
	static uint64_t t60 = 27493LLU;

    t60 = (x265^((x266-x267)/x268));

    if (t60 != 668LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = INT16_MIN;
	uint16_t x270 = 1U;
	int32_t x271 = 2022;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t61 = -82980;

    t61 = (x269^((x270-x271)/x272));

    if (t61 != -32753) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x273 = INT64_MAX;
	int16_t x275 = -1;
	static uint32_t x276 = 51243430U;
	static int64_t t62 = -29LL;

    t62 = (x273^((x274-x275)/x276));

    if (t62 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = INT8_MAX;
	uint16_t x278 = 2623U;
	volatile int32_t t63 = -39193844;

    t63 = (x277^((x278-x279)/x280));

    if (t63 != -2754) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x281 = -1;
	static uint32_t x283 = 14466594U;

    t64 = (x281^((x282-x283)/x284));

    if (t64 != 18446744073709377916LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = 31U;
	int32_t x286 = -13;
	int64_t x288 = -16032923818528LL;
	static volatile int64_t t65 = -64209LL;

    t65 = (x285^((x286-x287)/x288));

    if (t65 != 31LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x289 = 1LLU;
	int16_t x290 = INT16_MIN;
	volatile int8_t x292 = INT8_MIN;

    t66 = (x289^((x290-x291)/x292));

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x293 = -1LL;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int64_t t67 = 71LL;

    t67 = (x293^((x294-x295)/x296));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x297 = INT64_MIN;
	uint64_t x298 = 87553056396756358LLU;
	int8_t x299 = -1;
	static uint32_t x300 = 75U;

    t68 = (x297^((x298-x299)/x300));

    if (t68 != 9224539410940065892LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x301 = 1220U;
	volatile int16_t x302 = -1;
	static uint32_t x303 = 2371678U;
	uint16_t x304 = UINT16_MAX;
	static uint32_t t69 = 3614U;

    t69 = (x301^((x302-x303)/x304));

    if (t69 != 64280U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x306 = INT32_MIN;
	volatile int16_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t70 = 427438918LL;

    t70 = (x305^((x306-x307)/x308));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	static volatile int16_t x310 = INT16_MIN;
	volatile int64_t x311 = INT64_MIN;
	int32_t x312 = -3381;

    t71 = (x309^((x310-x311)/x312));

    if (t71 != 2728001193982472LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = -422161LL;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x315 = INT64_MAX;
	int16_t x316 = 119;
	volatile uint64_t t72 = 324LLU;

    t72 = (x313^((x314-x315)/x316));

    if (t72 != 18369236745668857852LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x317 = INT8_MAX;
	static volatile int16_t x320 = INT16_MIN;

    t73 = (x317^((x318-x319)/x320));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = 0;
	int8_t x323 = INT8_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t74 = 500216083LLU;

    t74 = (x321^((x322-x323)/x324));

    if (t74 != 1609LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MAX;
	static int8_t x330 = -1;
	int16_t x331 = INT16_MAX;
	volatile int64_t t75 = -13554583LL;

    t75 = (x329^((x330-x331)/x332));

    if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x333 = -1;
	static uint32_t x335 = UINT32_MAX;
	static int64_t x336 = INT64_MAX;
	int64_t t76 = 1398257089368LL;

    t76 = (x333^((x334-x335)/x336));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x337 = -1;
	int32_t x338 = 2;
	uint8_t x339 = 3U;

    t77 = (x337^((x338-x339)/x340));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = INT32_MAX;
	int32_t x342 = -1;
	uint32_t x343 = 2U;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t78 = 855U;

    t78 = (x341^((x342-x343)/x344));

    if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x345 = UINT8_MAX;
	static volatile int8_t x347 = INT8_MIN;
	int64_t t79 = 536415218924522LL;

    t79 = (x345^((x346-x347)/x348));

    if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MAX;
	uint8_t x350 = 6U;
	uint64_t x351 = 5690286572904074LLU;
	static int32_t x352 = -1;
	volatile uint64_t t80 = 3090879567460821LLU;

    t80 = (x349^((x350-x351)/x352));

    if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x353 = 1U;
	int8_t x355 = -1;
	volatile uint64_t t81 = 312LLU;

    t81 = (x353^((x354-x355)/x356));

    if (t81 != 876582LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x357 = 3LL;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = 1157227U;
	int32_t x360 = 30304733;
	int64_t t82 = 286462520312721426LL;

    t82 = (x357^((x358-x359)/x360));

    if (t82 != 142LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x361 = 1971U;
	uint16_t x363 = 1644U;
	volatile int8_t x364 = INT8_MAX;
	int32_t t83 = 625507;

    t83 = (x361^((x362-x363)/x364));

    if (t83 != -1978) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = INT8_MIN;
	int8_t x368 = -1;
	volatile uint32_t t84 = 311690938U;

    t84 = (x365^((x366-x367)/x368));

    if (t84 != 32639U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = INT8_MIN;
	static volatile int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = 476U;
	volatile int64_t x372 = 870631633LL;
	int64_t t85 = -799222102644LL;

    t85 = (x369^((x370-x371)/x372));

    if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x373 = 0;
	volatile uint16_t x374 = 226U;
	volatile int64_t x375 = 1LL;
	int16_t x376 = INT16_MAX;
	volatile int64_t t86 = -1023738649443165LL;

    t86 = (x373^((x374-x375)/x376));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = -30;
	uint32_t x378 = 2U;
	int16_t x379 = 3086;
	static uint32_t x380 = UINT32_MAX;
	uint32_t t87 = 228U;

    t87 = (x377^((x378-x379)/x380));

    if (t87 != 4294967266U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x386 = -3;
	int64_t x387 = -1LL;
	static int16_t x388 = -1;
	int64_t t88 = -31957LL;

    t88 = (x385^((x386-x387)/x388));

    if (t88 != 32765LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x390 = INT8_MIN;
	static int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;

    t89 = (x389^((x390-x391)/x392));

    if (t89 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = UINT8_MAX;
	int8_t x395 = INT8_MIN;
	volatile int32_t x396 = 15;
	volatile int64_t t90 = -5224131772202740LL;

    t90 = (x393^((x394-x395)/x396));

    if (t90 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x397 = 7U;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = INT8_MIN;
	volatile int64_t t91 = -2153690861872040LL;

    t91 = (x397^((x398-x399)/x400));

    if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x402 = 31;
	int16_t x403 = -1;
	int8_t x404 = INT8_MIN;
	uint64_t t92 = UINT64_MAX;

    t92 = (x401^((x402-x403)/x404));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x405 = 6803LLU;
	int16_t x406 = -15008;
	int32_t x407 = -823126;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t93 = 18229138LLU;

    t93 = (x405^((x406-x407)/x408));

    if (t93 != 18446744073709551044LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x409 = INT16_MAX;
	volatile uint64_t x410 = 943179608873LLU;
	volatile int32_t x411 = INT32_MIN;
	int64_t x412 = 43423331718016394LL;
	static uint64_t t94 = 4305331LLU;

    t94 = (x409^((x410-x411)/x412));

    if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x413 = 1666U;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MAX;
	static int16_t x416 = 1174;

    t95 = (x413^((x414-x415)/x416));

    if (t95 != 1717U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x417 = 89972927;
	volatile int8_t x418 = INT8_MAX;
	int8_t x420 = -1;

    t96 = (x417^((x418-x419)/x420));

    if (t96 != 89972927U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = INT16_MAX;
	uint8_t x422 = UINT8_MAX;
	volatile uint16_t x423 = 11U;
	static int32_t t97 = -835308227;

    t97 = (x421^((x422-x423)/x424));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = -1;
	static int32_t x426 = INT32_MIN;
	int16_t x428 = -39;
	int32_t t98 = 401;

    t98 = (x425^((x426-x427)/x428));

    if (t98 != -55063681) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x429 = UINT8_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 1167U;
	static int32_t t99 = 104;

    t99 = (x429^((x430-x431)/x432));

    if (t99 != 1840337) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x434 = -1LL;
	int64_t x435 = INT64_MAX;
	volatile int32_t x436 = INT32_MIN;
	volatile int64_t t100 = 4255824770246LL;

    t100 = (x433^((x434-x435)/x436));

    if (t100 != -4295000064LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x437 = 1590022U;
	volatile uint8_t x438 = UINT8_MAX;
	int16_t x439 = 811;
	volatile int32_t x440 = INT32_MIN;
	volatile uint32_t t101 = 241890U;

    t101 = (x437^((x438-x439)/x440));

    if (t101 != 1590022U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x446 = -10;
	uint32_t x447 = 3U;
	uint16_t x448 = UINT16_MAX;
	uint64_t t102 = 0LLU;

    t102 = (x445^((x446-x447)/x448));

    if (t102 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x454 = INT32_MIN;
	static int16_t x455 = INT16_MIN;
	int16_t x456 = INT16_MIN;

    t103 = (x453^((x454-x455)/x456));

    if (t103 != 65534) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MIN;
	uint32_t x458 = UINT32_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	volatile int64_t x460 = INT64_MIN;
	volatile int64_t t104 = INT64_MIN;

    t104 = (x457^((x458-x459)/x460));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = INT16_MAX;
	static volatile uint32_t x466 = 224392847U;
	volatile int32_t x467 = -1;
	volatile int64_t x468 = INT64_MAX;
	static int64_t t105 = 2812456590LL;

    t105 = (x465^((x466-x467)/x468));

    if (t105 != 32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x473 = 50U;
	uint32_t x474 = 49059880U;
	int8_t x476 = -16;

    t106 = (x473^((x474-x475)/x476));

    if (t106 != 50U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x477 = -92LL;
	int8_t x478 = 0;
	int32_t x479 = INT32_MAX;
	int16_t x480 = 2;
	static int64_t t107 = -37486757LL;

    t107 = (x477^((x478-x479)/x480));

    if (t107 != 1073741733LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = 0U;
	static int16_t x482 = INT16_MIN;
	uint64_t x483 = 3639529LLU;
	int8_t x484 = 1;

    t108 = (x481^((x482-x483)/x484));

    if (t108 != 18446744073705879319LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x485 = 4U;
	int8_t x487 = 1;
	static uint8_t x488 = UINT8_MAX;
	int32_t t109 = 2676682;

    t109 = (x485^((x486-x487)/x488));

    if (t109 != 540660) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = -1;
	static uint32_t x494 = 7959U;
	uint64_t x495 = 137LLU;
	uint64_t t110 = 374LLU;

    t110 = (x493^((x494-x495)/x496));

    if (t110 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	int64_t t111 = 1087830532238LL;

    t111 = (x497^((x498-x499)/x500));

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x501 = 8769U;
	uint32_t x504 = 65567680U;

    t112 = (x501^((x502-x503)/x504));

    if (t112 != 8704U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x506 = 1;
	int16_t x507 = INT16_MIN;
	static int32_t x508 = -959;
	volatile int32_t t113 = 39729291;

    t113 = (x505^((x506-x507)/x508));

    if (t113 != -16072784) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x513 = -6797;
	static uint32_t x514 = 3512U;
	static volatile int16_t x515 = -910;
	uint8_t x516 = 1U;
	volatile uint32_t t114 = 68272216U;

    t114 = (x513^((x514-x515)/x516));

    if (t114 != 4294964277U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x518 = 1U;
	int8_t x519 = INT8_MIN;
	volatile uint32_t t115 = 144U;

    t115 = (x517^((x518-x519)/x520));

    if (t115 != 4294967283U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x521 = 973836589U;
	int8_t x522 = -1;
	uint16_t x523 = UINT16_MAX;
	uint32_t t116 = 2337515U;

    t116 = (x521^((x522-x523)/x524));

    if (t116 != 3321130122U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile int8_t x527 = 5;
	uint32_t x528 = UINT32_MAX;
	volatile int64_t t117 = 77LL;

    t117 = (x525^((x526-x527)/x528));

    if (t117 != 255LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x529 = 26172LL;
	int8_t x530 = 0;
	uint16_t x531 = 2U;
	int8_t x532 = INT8_MIN;
	int64_t t118 = -186838LL;

    t118 = (x529^((x530-x531)/x532));

    if (t118 != 26172LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x533 = 0LL;
	uint32_t x534 = 4097010U;
	volatile int8_t x535 = -1;
	volatile int64_t t119 = -1520465914260267367LL;

    t119 = (x533^((x534-x535)/x536));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x537 = INT64_MAX;
	int16_t x539 = -1;
	static volatile int64_t t120 = INT64_MAX;

    t120 = (x537^((x538-x539)/x540));

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x541 = -320950906578LL;
	int64_t x542 = -1LL;
	int64_t x543 = INT64_MAX;
	static int8_t x544 = INT8_MIN;
	volatile int64_t t121 = 543LL;

    t121 = (x541^((x542-x543)/x544));

    if (t121 != -72057914988834514LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x549 = 45365965505LL;
	uint64_t x551 = 178351LLU;
	static int16_t x552 = INT16_MIN;
	uint64_t t122 = 1332167687185LLU;

    t122 = (x549^((x550-x551)/x552));

    if (t122 != 45365965505LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x557 = INT8_MAX;
	uint64_t x558 = 1448847924838LLU;
	int32_t x559 = INT32_MIN;
	int32_t x560 = -1;
	uint64_t t123 = 525894LLU;

    t123 = (x557^((x558-x559)/x560));

    if (t123 != 127LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x561 = 37U;
	int32_t x562 = INT32_MAX;
	uint32_t x563 = 194179747U;
	int64_t x564 = 219766353LL;
	static int64_t t124 = 4093LL;

    t124 = (x561^((x562-x563)/x564));

    if (t124 != 45LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x565 = 123531502LLU;
	int32_t x566 = -1;
	uint32_t x567 = 51U;
	static int8_t x568 = -1;
	uint64_t t125 = 2591254LLU;

    t125 = (x565^((x566-x567)/x568));

    if (t125 != 123531502LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x569 = 0;
	uint32_t x570 = UINT32_MAX;
	uint16_t x571 = UINT16_MAX;

    t126 = (x569^((x570-x571)/x572));

    if (t126 != 75349153U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x574 = 7U;
	volatile uint32_t t127 = 3570893U;

    t127 = (x573^((x574-x575)/x576));

    if (t127 != 65535U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = 1875U;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 28991U;

    t128 = (x577^((x578-x579)/x580));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x589 = INT16_MAX;
	volatile int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t129 = 2041;

    t129 = (x589^((x590-x591)/x592));

    if (t129 != 32256) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x593 = 7U;
	int16_t x594 = -11925;
	int16_t x595 = 1501;
	int32_t t130 = -115623;

    t130 = (x593^((x594-x595)/x596));

    if (t130 != -80) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x602 = -1;
	int16_t x603 = -1;
	uint32_t x604 = UINT32_MAX;
	uint32_t t131 = UINT32_MAX;

    t131 = (x601^((x602-x603)/x604));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x605 = INT8_MIN;
	static int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	int32_t x608 = 141607;
	volatile int32_t t132 = 7390456;

    t132 = (x605^((x606-x607)/x608));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x609 = 3U;
	int8_t x610 = -15;
	int16_t x611 = INT16_MAX;
	int8_t x612 = INT8_MIN;
	volatile int32_t t133 = 1;

    t133 = (x609^((x610-x611)/x612));

    if (t133 != 259) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x617 = 25793980LLU;
	int16_t x618 = INT16_MAX;
	uint64_t x619 = 1724588994126LLU;
	int32_t x620 = INT32_MAX;
	volatile uint64_t t134 = 264879056001741LLU;

    t134 = (x617^((x618-x619)/x620));

    if (t134 != 8564140380LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x621 = 3;
	int8_t x622 = -2;
	volatile uint64_t x623 = UINT64_MAX;

    t135 = (x621^((x622-x623)/x624));

    if (t135 != 2LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x625 = INT32_MIN;
	uint64_t x626 = UINT64_MAX;
	volatile uint32_t x627 = UINT32_MAX;
	uint64_t t136 = 1479035266LLU;

    t136 = (x625^((x626-x627)/x628));

    if (t136 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x630 = 3U;
	int16_t x631 = -1;
	static int8_t x632 = -6;
	int32_t t137 = 6534;

    t137 = (x629^((x630-x631)/x632));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = INT32_MIN;
	static int8_t x634 = INT8_MAX;
	int32_t t138 = INT32_MIN;

    t138 = (x633^((x634-x635)/x636));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x639 = UINT64_MAX;
	volatile uint64_t x640 = 25292289942428299LLU;
	uint64_t t139 = UINT64_MAX;

    t139 = (x637^((x638-x639)/x640));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x641 = 1533U;
	static int32_t x642 = INT32_MIN;
	int32_t t140 = -12;

    t140 = (x641^((x642-x643)/x644));

    if (t140 != 64002) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x653 = 1878U;
	uint8_t x654 = 0U;
	volatile int32_t t141 = -233378969;

    t141 = (x653^((x654-x655)/x656));

    if (t141 != 1878) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x657 = 3U;
	uint8_t x658 = UINT8_MAX;
	uint8_t x660 = 30U;

    t142 = (x657^((x658-x659)/x660));

    if (t142 != -71582778) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = 12U;
	static volatile int16_t x664 = -3;
	static volatile int32_t t143 = 463946;

    t143 = (x661^((x662-x663)/x664));

    if (t143 != 21842) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x665 = UINT64_MAX;
	uint64_t x666 = 0LLU;
	int8_t x667 = 13;
	uint64_t t144 = 15LLU;

    t144 = (x665^((x666-x667)/x668));

    if (t144 != 18374403900871474943LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	int16_t x671 = 10024;
	int8_t x672 = INT8_MIN;

    t145 = (x669^((x670-x671)/x672));

    if (t145 != 72057594037927856LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x675 = 890U;
	uint64_t t146 = 117835LLU;

    t146 = (x673^((x674-x675)/x676));

    if (t146 != 10LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x677 = INT32_MAX;
	int16_t x678 = INT16_MIN;
	volatile int16_t x679 = INT16_MIN;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x677^((x678-x679)/x680));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x685 = 83U;
	int16_t x686 = INT16_MIN;
	volatile int8_t x688 = INT8_MIN;
	static volatile uint32_t t148 = 14U;

    t148 = (x685^((x686-x687)/x688));

    if (t148 != 339U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x689 = 683066592191526367LLU;
	int32_t x690 = INT32_MIN;
	volatile int64_t x691 = INT64_MIN;
	static int16_t x692 = -1;
	uint64_t t149 = 3084LLU;

    t149 = (x689^((x690-x691)/x692));

    if (t149 != 9906438631193785823LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x697 = INT64_MIN;
	volatile int8_t x698 = INT8_MAX;
	int64_t t150 = INT64_MIN;

    t150 = (x697^((x698-x699)/x700));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x701 = INT32_MAX;
	static uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	volatile uint32_t t151 = 709147916U;

    t151 = (x701^((x702-x703)/x704));

    if (t151 != 2147483647U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x705 = INT32_MAX;
	int32_t x706 = INT32_MIN;
	uint64_t x707 = 1626489910136LLU;
	volatile uint64_t x708 = 144442277069750416LLU;
	volatile uint64_t t152 = 510756LLU;

    t152 = (x705^((x706-x707)/x708));

    if (t152 != 2147483520LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x709 = INT8_MIN;
	static uint64_t x711 = 121483466014LLU;
	static int64_t x712 = -1LL;
	static volatile uint64_t t153 = 1786383944106LLU;

    t153 = (x709^((x710-x711)/x712));

    if (t153 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x713 = 22098613910106759LLU;
	uint64_t x714 = 24311077809430587LLU;
	int64_t x715 = -1LL;
	int8_t x716 = 4;
	static volatile uint64_t t154 = 30017526807203528LLU;

    t154 = (x713^((x714-x715)/x716));

    if (t154 != 25637452095945352LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x717 = INT8_MIN;
	uint8_t x718 = 1U;
	volatile uint32_t x720 = 35U;
	static uint32_t t155 = 14089455U;

    t155 = (x717^((x718-x719)/x720));

    if (t155 != 4173233741U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MIN;
	static volatile int16_t x724 = 3;

    t156 = (x721^((x722-x723)/x724));

    if (t156 != -715838807) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x725 = -1;
	int32_t t157 = 6315099;

    t157 = (x725^((x726-x727)/x728));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x729 = INT32_MIN;
	int8_t x730 = -6;
	int8_t x731 = INT8_MIN;

    t158 = (x729^((x730-x731)/x732));

    if (t158 != -2147483646) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x733 = -1;
	int8_t x734 = INT8_MAX;
	static int8_t x735 = INT8_MAX;

    t159 = (x733^((x734-x735)/x736));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x737 = -1LL;
	int64_t x739 = INT64_MAX;
	uint16_t x740 = 5U;
	int64_t t160 = 0LL;

    t160 = (x737^((x738-x739)/x740));

    if (t160 != 1844674407370955159LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x741 = -1;
	static volatile uint8_t x742 = 71U;
	static int16_t x743 = INT16_MIN;
	int16_t x744 = -5367;
	volatile int32_t t161 = 225;

    t161 = (x741^((x742-x743)/x744));

    if (t161 != 5) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x745 = INT32_MAX;
	volatile uint16_t x746 = UINT16_MAX;
	int8_t x747 = 7;
	volatile uint16_t x748 = 116U;
	int32_t t162 = -38233;

    t162 = (x745^((x746-x747)/x748));

    if (t162 != 2147483083) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x749 = INT64_MIN;
	int64_t x750 = -1LL;
	int32_t x751 = -10;
	volatile int64_t t163 = INT64_MIN;

    t163 = (x749^((x750-x751)/x752));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x755 = UINT32_MAX;
	volatile int32_t x756 = 17;
	volatile uint32_t t164 = 4084238U;

    t164 = (x753^((x754-x755)/x756));

    if (t164 != 4134121237U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x759 = INT16_MIN;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t165 = INT32_MAX;

    t165 = (x757^((x758-x759)/x760));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x761 = -7247;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MAX;
	int32_t t166 = 8806112;

    t166 = (x761^((x762-x763)/x764));

    if (t166 != 7247) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x765 = 517LL;
	int8_t x768 = -1;
	int64_t t167 = -2661845702101586154LL;

    t167 = (x765^((x766-x767)/x768));

    if (t167 != 517LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x769 = 598096;
	int32_t x770 = INT32_MIN;
	int64_t x771 = 6LL;
	int32_t x772 = INT32_MIN;

    t168 = (x769^((x770-x771)/x772));

    if (t168 != 598097LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x773 = 12;
	int32_t x774 = 2540339;
	uint16_t x775 = UINT16_MAX;
	static volatile int32_t t169 = 103751;

    t169 = (x773^((x774-x775)/x776));

    if (t169 != -19338) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x777 = 0U;
	static uint16_t x778 = 370U;
	volatile uint64_t x779 = 3306LLU;
	static uint64_t t170 = 32645036655233LLU;

    t170 = (x777^((x778-x779)/x780));

    if (t170 != 27LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x786 = 524112LLU;
	volatile int64_t x787 = -1LL;
	uint64_t t171 = 3044094733969790312LLU;

    t171 = (x785^((x786-x787)/x788));

    if (t171 != 18446744073709543748LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x789 = INT16_MIN;
	int8_t x790 = INT8_MIN;
	volatile int16_t x792 = INT16_MIN;
	int32_t t172 = 0;

    t172 = (x789^((x790-x791)/x792));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x793 = 1542941LLU;
	uint64_t x794 = 217LLU;
	static int32_t x795 = 7;
	int16_t x796 = -1;
	volatile uint64_t t173 = 103LLU;

    t173 = (x793^((x794-x795)/x796));

    if (t173 != 1542941LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x797 = -66440500893971589LL;
	static int16_t x798 = INT16_MIN;
	static volatile int16_t x800 = INT16_MIN;
	int64_t t174 = 3797054944923958LL;

    t174 = (x797^((x798-x799)/x800));

    if (t174 != -66440500893971590LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x801 = 69U;
	volatile uint64_t x804 = 61LLU;

    t175 = (x801^((x802-x803)/x804));

    if (t175 != 302405640482158179LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x805 = -6136;
	int16_t x806 = -11;
	volatile int16_t x807 = INT16_MIN;
	int64_t x808 = -6703LL;

    t176 = (x805^((x806-x807)/x808));

    if (t176 != 6132LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x809 = INT64_MAX;
	uint16_t x810 = UINT16_MAX;
	int64_t x811 = -20LL;
	int16_t x812 = INT16_MIN;
	int64_t t177 = -7LL;

    t177 = (x809^((x810-x811)/x812));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x813 = 9U;
	int32_t x814 = -2751347;
	int16_t x815 = INT16_MIN;
	static int64_t x816 = -1LL;
	static int64_t t178 = 9LL;

    t178 = (x813^((x814-x815)/x816));

    if (t178 != 2718586LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x817 = UINT64_MAX;
	volatile int32_t x819 = 2;
	int8_t x820 = INT8_MIN;

    t179 = (x817^((x818-x819)/x820));

    if (t179 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x825 = UINT32_MAX;
	volatile int64_t x827 = INT64_MIN;
	int8_t x828 = -1;
	int64_t t180 = -194817816724827LL;

    t180 = (x825^((x826-x827)/x828));

    if (t180 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x829 = UINT32_MAX;
	int8_t x830 = -1;
	uint16_t x832 = UINT16_MAX;

    t181 = (x829^((x830-x831)/x832));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x833 = 1904391044928564LL;
	int16_t x834 = INT16_MIN;
	int16_t x835 = -1;
	volatile uint64_t x836 = 13565673LLU;
	static uint64_t t182 = 15017633545453LLU;

    t182 = (x833^((x834-x835)/x836));

    if (t182 != 1905677202757212LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x841 = 63U;
	static uint32_t x844 = 186U;
	volatile int64_t t183 = -3900738902395404LL;

    t183 = (x841^((x842-x843)/x844));

    if (t183 != 49588021703520275LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x846 = 6U;
	int8_t x847 = -1;
	int64_t x848 = INT64_MIN;
	volatile int64_t t184 = 70340115950578LL;

    t184 = (x845^((x846-x847)/x848));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x849 = 26;
	uint8_t x850 = 0U;
	int32_t x852 = INT32_MIN;
	int32_t t185 = 76268;

    t185 = (x849^((x850-x851)/x852));

    if (t185 != 26) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x853 = -1;
	int16_t x856 = INT16_MIN;
	int32_t t186 = -500641;

    t186 = (x853^((x854-x855)/x856));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x857 = 1U;
	int16_t x858 = INT16_MIN;
	int32_t x859 = 9393642;
	volatile int16_t x860 = INT16_MIN;
	int32_t t187 = -17439;

    t187 = (x857^((x858-x859)/x860));

    if (t187 != 286) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x862 = UINT32_MAX;
	int8_t x863 = INT8_MAX;
	int16_t x864 = INT16_MIN;
	volatile uint32_t t188 = 12U;

    t188 = (x861^((x862-x863)/x864));

    if (t188 != 408345134U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x866 = -421LL;
	int8_t x867 = -1;
	static uint64_t t189 = 1505LLU;

    t189 = (x865^((x866-x867)/x868));

    if (t189 != 41788761871LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x869 = INT8_MAX;
	int8_t x870 = INT8_MIN;
	uint32_t x871 = UINT32_MAX;
	int64_t t190 = 6398026408920LL;

    t190 = (x869^((x870-x871)/x872));

    if (t190 != 127LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x873 = 14U;
	uint8_t x874 = UINT8_MAX;
	uint32_t x876 = UINT32_MAX;
	static uint32_t t191 = 199686U;

    t191 = (x873^((x874-x875)/x876));

    if (t191 != 14U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x878 = UINT16_MAX;
	int8_t x879 = -1;
	int64_t x880 = INT64_MAX;
	static volatile uint64_t t192 = 22063561LLU;

    t192 = (x877^((x878-x879)/x880));

    if (t192 != 29537007949783LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x881 = -1;
	static int8_t x882 = INT8_MIN;
	int16_t x883 = INT16_MIN;
	static int16_t x884 = INT16_MAX;
	volatile int32_t t193 = 33218653;

    t193 = (x881^((x882-x883)/x884));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x885 = 594444358LLU;
	volatile uint64_t x887 = UINT64_MAX;
	int32_t x888 = -1;
	static uint64_t t194 = 464LLU;

    t194 = (x885^((x886-x887)/x888));

    if (t194 != 594444358LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x889 = INT32_MIN;
	int32_t x890 = 9;
	volatile uint8_t x891 = 14U;
	int32_t x892 = -1;
	volatile int32_t t195 = -917706279;

    t195 = (x889^((x890-x891)/x892));

    if (t195 != -2147483643) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x893 = 1;
	int16_t x894 = INT16_MAX;
	static int16_t x895 = INT16_MIN;
	int16_t x896 = INT16_MAX;
	int32_t t196 = 465020153;

    t196 = (x893^((x894-x895)/x896));

    if (t196 != 3) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x897 = -1LL;
	int16_t x898 = INT16_MIN;
	int16_t x899 = -304;

    t197 = (x897^((x898-x899)/x900));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x901 = UINT64_MAX;
	uint32_t x903 = 1969U;
	uint8_t x904 = 9U;
	uint64_t t198 = 4138111751LLU;

    t198 = (x901^((x902-x903)/x904));

    if (t198 != 18446744073232333246LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x905 = 0;
	static uint8_t x906 = 1U;
	int16_t x908 = -3628;
	int32_t t199 = -1351071;

    t199 = (x905^((x906-x907)/x908));

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

