
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

static uint32_t x9 = UINT32_MAX;
int32_t x12 = INT32_MAX;
volatile int32_t t2 = -2;
int32_t x14 = -6537397;
uint64_t x17 = UINT64_MAX;
int8_t x20 = INT8_MIN;
int8_t x29 = INT8_MIN;
uint8_t x32 = 21U;
int8_t x33 = -1;
uint32_t x34 = 1580941201U;
volatile int8_t x37 = 28;
int32_t t10 = 158815;
int32_t x45 = -1;
volatile int32_t t12 = -14383;
uint32_t x54 = UINT32_MAX;
int32_t t14 = -81197049;
volatile int32_t x66 = INT32_MIN;
int32_t t16 = 528194106;
int8_t x71 = -1;
int8_t x75 = INT8_MIN;
int32_t x87 = INT32_MIN;
int16_t x89 = -1;
int16_t x92 = INT16_MAX;
int32_t x102 = INT32_MIN;
static int64_t x103 = INT64_MIN;
static uint8_t x104 = 4U;
uint64_t x107 = 29452493LLU;
int64_t x124 = INT64_MAX;
static volatile int32_t t30 = 430131756;
uint8_t x134 = 95U;
int16_t x138 = -14635;
static uint16_t x139 = 6U;
int16_t x144 = INT16_MAX;
volatile int8_t x151 = INT8_MIN;
volatile int32_t t35 = -458935;
int16_t x155 = 701;
int32_t t37 = 48301567;
int64_t x164 = INT64_MIN;
int32_t x165 = 317321289;
uint16_t x166 = 727U;
int32_t t39 = -51733;
int32_t x173 = 34150;
int32_t t46 = 0;
volatile int32_t t49 = -537043637;
uint64_t x216 = 52824211310265LLU;
uint16_t x220 = 303U;
volatile int32_t t52 = -365;
int32_t x221 = -1;
volatile int32_t t53 = -1007;
volatile int8_t x226 = INT8_MIN;
int16_t x227 = INT16_MIN;
uint8_t x228 = 52U;
uint8_t x231 = 3U;
int8_t x237 = INT8_MIN;
static volatile uint8_t x242 = 34U;
int64_t x243 = -932LL;
uint32_t x245 = UINT32_MAX;
static uint32_t x251 = 41899U;
int8_t x252 = INT8_MIN;
volatile int32_t t60 = 2690866;
static uint32_t x254 = UINT32_MAX;
int32_t x263 = INT32_MIN;
uint32_t x269 = UINT32_MAX;
int16_t x271 = INT16_MIN;
int8_t x272 = -1;
int32_t x280 = INT32_MAX;
volatile int32_t x281 = -1;
volatile int32_t x282 = -1;
uint16_t x284 = 1U;
int32_t t67 = 5031;
volatile int32_t t71 = 4537;
static int16_t x301 = -1;
uint16_t x305 = UINT16_MAX;
volatile int32_t t77 = 1349080;
static int8_t x330 = -1;
static int32_t t79 = 947298;
volatile int8_t x333 = INT8_MIN;
uint16_t x336 = 295U;
int8_t x342 = INT8_MAX;
int64_t x368 = 3562255654LL;
int32_t x371 = INT32_MIN;
static volatile int32_t t88 = -300446187;
static int16_t x386 = -1;
volatile int32_t t94 = -931369;
uint16_t x401 = UINT16_MAX;
int32_t x403 = 10;
static int8_t x407 = 3;
int64_t x408 = -5319LL;
static int32_t x410 = 48265;
static int32_t x412 = INT32_MIN;
uint16_t x417 = 6U;
int64_t x420 = -2543034470LL;
static uint64_t x423 = UINT64_MAX;
uint64_t x428 = 6472165084278258LLU;
static int16_t x436 = INT16_MIN;
static int64_t x439 = INT64_MIN;
volatile int32_t t103 = -7;
uint32_t x441 = 396243337U;
int8_t x444 = INT8_MIN;
int8_t x447 = -1;
static uint32_t x448 = 116U;
int8_t x452 = INT8_MAX;
volatile int32_t t107 = 24;
static int16_t x457 = INT16_MAX;
volatile int32_t t108 = -3;
static int8_t x461 = -1;
uint64_t x463 = 655334481647738980LLU;
int8_t x467 = -3;
volatile int32_t t110 = -3;
int16_t x478 = INT16_MIN;
volatile int64_t x480 = 1LL;
int32_t t114 = 42;
uint8_t x487 = 2U;
uint32_t x491 = 137161U;
int32_t x504 = 0;
volatile int16_t x508 = -8;
static uint32_t x510 = UINT32_MAX;
volatile int16_t x514 = INT16_MIN;
volatile uint8_t x516 = 0U;
volatile int64_t x523 = INT64_MIN;
int8_t x525 = -34;
static int16_t x526 = -818;
volatile int32_t t125 = -7915093;
int64_t x538 = INT64_MIN;
volatile int64_t x539 = 13268352595759LL;
static int64_t x547 = -1LL;
uint32_t x555 = 1039278996U;
uint64_t x557 = 8LLU;
uint64_t x560 = 22371967LLU;
volatile int64_t x563 = INT64_MIN;
static volatile int16_t x572 = INT16_MIN;
static int32_t x573 = INT32_MAX;
volatile int16_t x579 = -1;
static int8_t x580 = INT8_MAX;
int64_t x582 = -88LL;
volatile int32_t t137 = -2539;
int32_t x587 = INT32_MAX;
int8_t x599 = INT8_MIN;
volatile int32_t x600 = -24;
int32_t x604 = INT32_MAX;
static volatile int8_t x608 = INT8_MIN;
int16_t x610 = INT16_MIN;
volatile int16_t x622 = INT16_MIN;
static int32_t x634 = -2028;
int16_t x635 = -33;
uint64_t x636 = 2630647005LLU;
uint16_t x637 = UINT16_MAX;
int8_t x641 = INT8_MAX;
int32_t t151 = -313514;
static int32_t x645 = INT32_MIN;
static int16_t x648 = INT16_MIN;
int64_t x651 = 45725289814379446LL;
volatile int16_t x652 = INT16_MAX;
int16_t x655 = -84;
volatile int64_t x656 = INT64_MAX;
volatile int32_t x662 = INT32_MAX;
volatile uint8_t x663 = 10U;
volatile int16_t x665 = INT16_MIN;
int8_t x666 = INT8_MIN;
static uint16_t x674 = 942U;
uint64_t x675 = 27362114840466LLU;
int32_t x679 = INT32_MAX;
volatile int32_t x682 = -1;
int16_t x693 = -1;
static int32_t t162 = 204955;
int32_t x697 = 1931;
static int8_t x704 = -1;
int32_t t165 = -2326644;
int32_t t166 = 31413;
volatile int32_t t167 = -13387;
int64_t x723 = INT64_MAX;
volatile uint8_t x724 = 3U;
int32_t x732 = INT32_MAX;
static uint8_t x733 = 14U;
int32_t x747 = INT32_MAX;
int64_t x750 = -85497LL;
uint16_t x753 = UINT16_MAX;
int8_t x776 = INT8_MAX;
int32_t t182 = -824877784;
int32_t x779 = -1;
int32_t t183 = -1;
int16_t x781 = -24;
volatile int32_t t184 = -26033;
int16_t x788 = INT16_MAX;
volatile uint8_t x793 = 15U;
int32_t x795 = INT32_MIN;
volatile uint16_t x802 = 1149U;
int8_t x805 = INT8_MIN;
static volatile int64_t x813 = INT64_MIN;
volatile int16_t x815 = INT16_MIN;
int32_t t193 = -1;
int64_t x832 = 8293858111LL;
static uint16_t x842 = 9U;
volatile int8_t x843 = INT8_MAX;
int32_t x844 = -7853166;
volatile int32_t t198 = 127530541;
static uint32_t x847 = UINT32_MAX;
uint32_t x848 = 1839159994U;


void f0(void) {
    	int32_t x1 = -21;
	volatile int16_t x2 = INT16_MIN;
	int8_t x3 = 4;
	volatile int64_t x4 = -277427986916741156LL;
	volatile int32_t t0 = 276;

    t0 = (x1<=((x2/x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 357U;
	uint32_t x6 = 53U;
	volatile int16_t x7 = -1;
	int8_t x8 = -1;
	int32_t t1 = -16932899;

    t1 = (x5<=((x6/x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	static uint32_t x11 = 535441U;

    t2 = (x9<=((x10/x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile int16_t x15 = -4;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -62828990;

    t3 = (x13<=((x14/x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = 2;
	static volatile int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -18738370;

    t4 = (x17<=((x18/x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile uint8_t x22 = 13U;
	int8_t x23 = INT8_MIN;
	static uint64_t x24 = 64148276438920506LLU;
	volatile int32_t t5 = 545802;

    t5 = (x21<=((x22/x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 827U;
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	int32_t x28 = -1;
	static int32_t t6 = -10893;

    t6 = (x25<=((x26/x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MAX;
	uint16_t x31 = 9U;
	volatile int32_t t7 = 629650;

    t7 = (x29<=((x30/x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x35 = 733857213U;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 385;

    t8 = (x33<=((x34/x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	int64_t x39 = 43LL;
	static int16_t x40 = -1;
	int32_t t9 = 0;

    t9 = (x37<=((x38/x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;

    t10 = (x41<=((x42/x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = UINT16_MAX;
	int8_t x47 = 43;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -132;

    t11 = (x45<=((x46/x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int16_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -1;

    t12 = (x49<=((x50/x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 0U;
	int32_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 330447;

    t13 = (x53<=((x54/x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	uint32_t x58 = 2371060U;
	int16_t x59 = -1;
	int32_t x60 = INT32_MAX;

    t14 = (x57<=((x58/x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 714916176146980LLU;
	volatile uint64_t x62 = 47812321080LLU;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 176991;

    t15 = (x61<=((x62/x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	static int8_t x67 = INT8_MIN;
	int8_t x68 = -1;

    t16 = (x65<=((x66/x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 353545077083615LLU;
	uint16_t x70 = UINT16_MAX;
	int8_t x72 = 9;
	int32_t t17 = -4345086;

    t17 = (x69<=((x70/x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -1;
	volatile uint64_t x74 = UINT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = -9680892;

    t18 = (x73<=((x74/x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 65;

    t19 = (x77<=((x78/x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MAX;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t20 = 586327823;

    t20 = (x81<=((x82/x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MIN;
	volatile int8_t x86 = 1;
	uint64_t x88 = UINT64_MAX;
	static int32_t t21 = -4001448;

    t21 = (x85<=((x86/x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = 9821856U;
	int64_t x91 = INT64_MAX;
	static int32_t t22 = -3977123;

    t22 = (x89<=((x90/x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -1;
	volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = 3997562234LLU;
	int8_t x96 = 0;
	int32_t t23 = 5;

    t23 = (x93<=((x94/x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = UINT32_MAX;
	static int16_t x99 = INT16_MIN;
	static int32_t x100 = 966341;
	static volatile int32_t t24 = -12;

    t24 = (x97<=((x98/x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	volatile int32_t t25 = -428247;

    t25 = (x101<=((x102/x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	int32_t x106 = -7;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -66368;

    t26 = (x105<=((x106/x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	static volatile uint32_t x110 = 1620U;
	static uint16_t x111 = 1439U;
	int32_t x112 = 72690580;
	volatile int32_t t27 = -12235;

    t27 = (x109<=((x110/x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	uint32_t x114 = 1132U;
	volatile int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = INT8_MAX;
	volatile int32_t t28 = 0;

    t28 = (x113<=((x114/x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -146649816822871LL;
	static uint32_t x122 = 105847U;
	static int32_t x123 = INT32_MAX;
	static int32_t t29 = 4908;

    t29 = (x121<=((x122/x123)!=x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -89LL;
	int16_t x126 = -406;
	int16_t x127 = -1;
	uint8_t x128 = 28U;

    t30 = (x125<=((x126/x127)!=x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = -908;
	static volatile int64_t x135 = 964LL;
	static int64_t x136 = -4284304453498244755LL;
	volatile int32_t t31 = 89034012;

    t31 = (x133<=((x134/x135)!=x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	uint8_t x140 = 29U;
	static int32_t t32 = 66409388;

    t32 = (x137<=((x138/x139)!=x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	static volatile uint32_t x142 = 33U;
	int8_t x143 = 1;
	volatile int32_t t33 = 1;

    t33 = (x141<=((x142/x143)!=x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MIN;
	static uint64_t x146 = 294LLU;
	int16_t x147 = INT16_MAX;
	int8_t x148 = -8;
	int32_t t34 = 1;

    t34 = (x145<=((x146/x147)!=x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MAX;
	uint64_t x150 = UINT64_MAX;
	static uint16_t x152 = 3U;

    t35 = (x149<=((x150/x151)!=x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MIN;
	static volatile int8_t x156 = -27;
	volatile int32_t t36 = -761;

    t36 = (x153<=((x154/x155)!=x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = 2329369410403525603LLU;
	uint32_t x158 = UINT32_MAX;
	int64_t x159 = -1LL;
	uint64_t x160 = UINT64_MAX;

    t37 = (x157<=((x158/x159)!=x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = 26098U;
	int16_t x162 = -10;
	uint8_t x163 = 1U;
	int32_t t38 = 2005;

    t38 = (x161<=((x162/x163)!=x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x167 = -256728LL;
	volatile int16_t x168 = INT16_MIN;

    t39 = (x165<=((x166/x167)!=x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -1LL;
	int32_t x170 = -1;
	int32_t x171 = -50175;
	int64_t x172 = INT64_MIN;
	volatile int32_t t40 = 0;

    t40 = (x169<=((x170/x171)!=x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x174 = -1;
	uint32_t x175 = 4U;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t41 = 33310234;

    t41 = (x173<=((x174/x175)!=x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = -1;
	int8_t x178 = INT8_MAX;
	uint8_t x179 = 87U;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t42 = 26614;

    t42 = (x177<=((x178/x179)!=x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = 3;
	int8_t x182 = INT8_MIN;
	volatile int32_t x183 = -481994;
	uint64_t x184 = UINT64_MAX;
	int32_t t43 = 0;

    t43 = (x181<=((x182/x183)!=x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = 24940576LL;
	volatile uint64_t x186 = UINT64_MAX;
	static int16_t x187 = INT16_MIN;
	uint16_t x188 = UINT16_MAX;
	static int32_t t44 = -1443;

    t44 = (x185<=((x186/x187)!=x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x189 = INT16_MIN;
	int32_t x190 = -1371597;
	static int16_t x191 = -1;
	int16_t x192 = 7380;
	volatile int32_t t45 = 653982521;

    t45 = (x189<=((x190/x191)!=x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = 449714LLU;
	volatile uint32_t x194 = 122U;
	int8_t x195 = -1;
	int32_t x196 = -1;

    t46 = (x193<=((x194/x195)!=x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 35;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 720U;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t47 = 10513;

    t47 = (x197<=((x198/x199)!=x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -1;
	uint32_t x202 = 1399443018U;
	volatile int64_t x203 = INT64_MAX;
	static volatile uint8_t x204 = 12U;
	static int32_t t48 = -267678231;

    t48 = (x201<=((x202/x203)!=x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 27U;
	int64_t x206 = INT64_MIN;
	int32_t x207 = 411123;
	static int8_t x208 = INT8_MAX;

    t49 = (x205<=((x206/x207)!=x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	uint16_t x210 = 7U;
	static int64_t x211 = 25LL;
	int16_t x212 = INT16_MIN;
	int32_t t50 = 22;

    t50 = (x209<=((x210/x211)!=x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = 1;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = 3630U;
	volatile int32_t t51 = 2983131;

    t51 = (x213<=((x214/x215)!=x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x217 = INT64_MIN;
	uint64_t x218 = 3172159748240LLU;
	uint64_t x219 = 290044224LLU;

    t52 = (x217<=((x218/x219)!=x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	int16_t x224 = 1;

    t53 = (x221<=((x222/x223)!=x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = 49U;
	int32_t t54 = -267345478;

    t54 = (x225<=((x226/x227)!=x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x229 = 8U;
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t55 = -439265465;

    t55 = (x229<=((x230/x231)!=x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	static volatile int8_t x234 = 20;
	volatile int32_t x235 = INT32_MAX;
	static int8_t x236 = -1;
	int32_t t56 = 13528817;

    t56 = (x233<=((x234/x235)!=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x238 = -12805;
	int64_t x239 = -241LL;
	uint8_t x240 = UINT8_MAX;
	int32_t t57 = 44679400;

    t57 = (x237<=((x238/x239)!=x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = 0;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t58 = 1747870;

    t58 = (x241<=((x242/x243)!=x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x246 = -1012;
	int64_t x247 = -1LL;
	uint64_t x248 = 4268LLU;
	volatile int32_t t59 = 10054;

    t59 = (x245<=((x246/x247)!=x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = 610370U;
	int16_t x250 = -6;

    t60 = (x249<=((x250/x251)!=x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 1345U;
	static uint32_t x255 = 79341292U;
	static int64_t x256 = 12323762284221434LL;
	volatile int32_t t61 = 392658;

    t61 = (x253<=((x254/x255)!=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	uint32_t x264 = 770U;
	volatile int32_t t62 = -1871270;

    t62 = (x261<=((x262/x263)!=x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	int32_t x266 = 56;
	uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 3U;
	int32_t t63 = -20;

    t63 = (x265<=((x266/x267)!=x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x270 = 12;
	int32_t t64 = -475476;

    t64 = (x269<=((x270/x271)!=x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = INT32_MAX;
	static int8_t x274 = 0;
	uint8_t x275 = 12U;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t65 = -577;

    t65 = (x273<=((x274/x275)!=x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	static int64_t x279 = -16330823163599230LL;
	volatile int32_t t66 = -6;

    t66 = (x277<=((x278/x279)!=x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x283 = UINT32_MAX;

    t67 = (x281<=((x282/x283)!=x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = INT8_MAX;
	uint16_t x287 = 42U;
	static int64_t x288 = INT64_MAX;
	static int32_t t68 = -24795251;

    t68 = (x285<=((x286/x287)!=x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x289 = 1U;
	int16_t x290 = INT16_MIN;
	int32_t x291 = -1;
	uint64_t x292 = 0LLU;
	volatile int32_t t69 = -30;

    t69 = (x289<=((x290/x291)!=x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = -30344;
	int16_t x294 = -16;
	int8_t x295 = -1;
	int8_t x296 = -1;
	int32_t t70 = 674012999;

    t70 = (x293<=((x294/x295)!=x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MIN;
	uint64_t x298 = UINT64_MAX;
	static int16_t x299 = INT16_MIN;
	int32_t x300 = -1;

    t71 = (x297<=((x298/x299)!=x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x302 = INT8_MIN;
	int64_t x303 = 1251768243LL;
	int64_t x304 = INT64_MIN;
	volatile int32_t t72 = 135665318;

    t72 = (x301<=((x302/x303)!=x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x306 = 342208707573LL;
	volatile int64_t x307 = INT64_MIN;
	static volatile int8_t x308 = INT8_MIN;
	volatile int32_t t73 = -5;

    t73 = (x305<=((x306/x307)!=x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x309 = 1469628538U;
	static int8_t x310 = 1;
	int32_t x311 = -25147765;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t74 = 315612110;

    t74 = (x309<=((x310/x311)!=x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	int16_t x315 = 26;
	int16_t x316 = INT16_MIN;
	volatile int32_t t75 = 4181020;

    t75 = (x313<=((x314/x315)!=x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int32_t x318 = 35638241;
	static int64_t x319 = -1LL;
	uint64_t x320 = 3603697LLU;
	static int32_t t76 = 13458347;

    t76 = (x317<=((x318/x319)!=x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x321 = -1LL;
	static int16_t x322 = 6332;
	static int8_t x323 = INT8_MIN;
	volatile int8_t x324 = 0;

    t77 = (x321<=((x322/x323)!=x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = -1890239;
	static int16_t x326 = -1;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t78 = 5644784;

    t78 = (x325<=((x326/x327)!=x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = 0U;
	volatile int32_t x331 = -1;
	int64_t x332 = -1LL;

    t79 = (x329<=((x330/x331)!=x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x334 = 12617;
	volatile int16_t x335 = INT16_MAX;
	static volatile int32_t t80 = -84446374;

    t80 = (x333<=((x334/x335)!=x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = 13150870LLU;
	uint64_t x338 = 2551219695121794476LLU;
	int16_t x339 = INT16_MIN;
	static volatile uint8_t x340 = UINT8_MAX;
	int32_t t81 = 697945258;

    t81 = (x337<=((x338/x339)!=x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t82 = -36535;

    t82 = (x341<=((x342/x343)!=x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x345 = INT64_MIN;
	int16_t x346 = -1405;
	int16_t x347 = INT16_MIN;
	volatile uint32_t x348 = UINT32_MAX;
	volatile int32_t t83 = 2880;

    t83 = (x345<=((x346/x347)!=x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MIN;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = 9;
	uint16_t x356 = 216U;
	volatile int32_t t84 = -1;

    t84 = (x353<=((x354/x355)!=x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	uint32_t x358 = 30U;
	int8_t x359 = 6;
	uint8_t x360 = 36U;
	volatile int32_t t85 = -196;

    t85 = (x357<=((x358/x359)!=x360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x361 = 61159685LLU;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 32U;
	int32_t t86 = 36;

    t86 = (x361<=((x362/x363)!=x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = 63833645;
	int64_t x366 = -1787LL;
	int32_t x367 = -902;
	static int32_t t87 = 1;

    t87 = (x365<=((x366/x367)!=x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x369 = 0U;
	static uint32_t x370 = UINT32_MAX;
	int8_t x372 = INT8_MIN;

    t88 = (x369<=((x370/x371)!=x372));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -247900129;
	int64_t x380 = -1LL;
	static volatile int32_t t89 = 811672;

    t89 = (x377<=((x378/x379)!=x380));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x381 = -1;
	int32_t x382 = 54289;
	int32_t x383 = -1;
	int16_t x384 = 67;
	volatile int32_t t90 = 826674;

    t90 = (x381<=((x382/x383)!=x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x385 = UINT64_MAX;
	volatile int16_t x387 = -365;
	uint32_t x388 = 53694018U;
	int32_t t91 = 152061009;

    t91 = (x385<=((x386/x387)!=x388));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = UINT16_MAX;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -1LL;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t92 = -15;

    t92 = (x389<=((x390/x391)!=x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MIN;
	volatile uint8_t x394 = 3U;
	uint16_t x395 = UINT16_MAX;
	volatile int8_t x396 = -3;
	int32_t t93 = 5571;

    t93 = (x393<=((x394/x395)!=x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x397 = 1U;
	int64_t x398 = 74587811LL;
	int32_t x399 = -1;
	volatile int16_t x400 = -1;

    t94 = (x397<=((x398/x399)!=x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x402 = 80841;
	static int16_t x404 = -1;
	volatile int32_t t95 = 0;

    t95 = (x401<=((x402/x403)!=x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x405 = -9;
	static volatile uint8_t x406 = UINT8_MAX;
	volatile int32_t t96 = -64412;

    t96 = (x405<=((x406/x407)!=x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = INT32_MAX;
	uint32_t x411 = 18768U;
	static volatile int32_t t97 = 56244;

    t97 = (x409<=((x410/x411)!=x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x418 = 5U;
	uint8_t x419 = UINT8_MAX;
	int32_t t98 = 1;

    t98 = (x417<=((x418/x419)!=x420));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x422 = 217773097398LLU;
	int8_t x424 = INT8_MIN;
	volatile int32_t t99 = -899284543;

    t99 = (x421<=((x422/x423)!=x424));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	uint8_t x426 = UINT8_MAX;
	int16_t x427 = 24;
	volatile int32_t t100 = -154038083;

    t100 = (x425<=((x426/x427)!=x428));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = 1;
	int64_t x432 = 3LL;
	int32_t t101 = 226;

    t101 = (x429<=((x430/x431)!=x432));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x433 = -1;
	int8_t x434 = INT8_MAX;
	uint16_t x435 = 2U;
	static int32_t t102 = -6876;

    t102 = (x433<=((x434/x435)!=x436));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x437 = INT16_MAX;
	int16_t x438 = 123;
	uint16_t x440 = UINT16_MAX;

    t103 = (x437<=((x438/x439)!=x440));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x442 = 11409U;
	int32_t x443 = INT32_MAX;
	int32_t t104 = -362;

    t104 = (x441<=((x442/x443)!=x444));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = 6;
	int16_t x446 = 6;
	volatile int32_t t105 = 914;

    t105 = (x445<=((x446/x447)!=x448));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x449 = 972U;
	static int16_t x450 = INT16_MIN;
	uint16_t x451 = UINT16_MAX;
	int32_t t106 = -396685;

    t106 = (x449<=((x450/x451)!=x452));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = 218380453605947LLU;
	int32_t x454 = 6;
	int32_t x455 = INT32_MIN;
	static int8_t x456 = 21;

    t107 = (x453<=((x454/x455)!=x456));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x458 = 1974LLU;
	volatile uint16_t x459 = UINT16_MAX;
	static uint32_t x460 = 454602U;

    t108 = (x457<=((x458/x459)!=x460));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x462 = 1572668LLU;
	volatile uint16_t x464 = 11156U;
	static int32_t t109 = 347;

    t109 = (x461<=((x462/x463)!=x464));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x465 = -1LL;
	int8_t x466 = -1;
	static int32_t x468 = INT32_MIN;

    t110 = (x465<=((x466/x467)!=x468));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x469 = INT8_MAX;
	static int16_t x470 = INT16_MIN;
	int8_t x471 = 17;
	static uint8_t x472 = 2U;
	volatile int32_t t111 = 91642;

    t111 = (x469<=((x470/x471)!=x472));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MAX;
	uint8_t x474 = UINT8_MAX;
	volatile int64_t x475 = INT64_MIN;
	static volatile uint32_t x476 = 6U;
	int32_t t112 = -20646940;

    t112 = (x473<=((x474/x475)!=x476));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = INT16_MAX;
	uint16_t x479 = 3067U;
	volatile int32_t t113 = -834;

    t113 = (x477<=((x478/x479)!=x480));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x481 = INT32_MAX;
	volatile int8_t x482 = -1;
	int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;

    t114 = (x481<=((x482/x483)!=x484));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x485 = -1121733030951LL;
	int32_t x486 = 2182;
	int64_t x488 = INT64_MAX;
	int32_t t115 = -164946;

    t115 = (x485<=((x486/x487)!=x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 2U;
	int16_t x492 = -1;
	int32_t t116 = 17;

    t116 = (x489<=((x490/x491)!=x492));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x493 = 212458239LL;
	int16_t x494 = -1;
	int64_t x495 = -1LL;
	static int64_t x496 = INT64_MIN;
	volatile int32_t t117 = -584933385;

    t117 = (x493<=((x494/x495)!=x496));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = 0;
	int32_t x499 = INT32_MAX;
	int64_t x500 = INT64_MIN;
	volatile int32_t t118 = -1706686;

    t118 = (x497<=((x498/x499)!=x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -1;
	volatile uint64_t x502 = 877LLU;
	volatile uint8_t x503 = 12U;
	int32_t t119 = 11;

    t119 = (x501<=((x502/x503)!=x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x505 = 8U;
	static uint8_t x506 = 10U;
	static int8_t x507 = -1;
	int32_t t120 = -10017;

    t120 = (x505<=((x506/x507)!=x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x509 = UINT32_MAX;
	uint8_t x511 = 6U;
	static int64_t x512 = -413841047420LL;
	int32_t t121 = -3887;

    t121 = (x509<=((x510/x511)!=x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = 0;
	int8_t x515 = INT8_MAX;
	static int32_t t122 = -863;

    t122 = (x513<=((x514/x515)!=x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x521 = 356992927U;
	uint64_t x522 = UINT64_MAX;
	int32_t x524 = INT32_MAX;
	volatile int32_t t123 = -732917857;

    t123 = (x521<=((x522/x523)!=x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x527 = INT64_MIN;
	static int64_t x528 = INT64_MAX;
	volatile int32_t t124 = -6930;

    t124 = (x525<=((x526/x527)!=x528));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x529 = INT32_MIN;
	volatile uint32_t x530 = UINT32_MAX;
	volatile int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;

    t125 = (x529<=((x530/x531)!=x532));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -1;
	static int16_t x534 = INT16_MAX;
	int32_t x535 = -1;
	static int8_t x536 = INT8_MIN;
	int32_t t126 = 161;

    t126 = (x533<=((x534/x535)!=x536));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = -1;
	int64_t x540 = -1LL;
	volatile int32_t t127 = 23;

    t127 = (x537<=((x538/x539)!=x540));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x545 = UINT8_MAX;
	uint8_t x546 = UINT8_MAX;
	volatile int8_t x548 = -13;
	static int32_t t128 = 13;

    t128 = (x545<=((x546/x547)!=x548));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x549 = 20988U;
	int8_t x550 = INT8_MIN;
	uint64_t x551 = 45904714522LLU;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t129 = 104690405;

    t129 = (x549<=((x550/x551)!=x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x553 = 94U;
	int32_t x554 = INT32_MIN;
	int64_t x556 = -1LL;
	volatile int32_t t130 = 7286;

    t130 = (x553<=((x554/x555)!=x556));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x558 = 41841U;
	volatile uint64_t x559 = 1038255473909LLU;
	int32_t t131 = 26502;

    t131 = (x557<=((x558/x559)!=x560));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x561 = 4U;
	uint8_t x562 = 8U;
	uint64_t x564 = 6363737299625LLU;
	int32_t t132 = -1;

    t132 = (x561<=((x562/x563)!=x564));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = 263943032659LL;
	int64_t x566 = INT64_MIN;
	static volatile uint16_t x567 = 5U;
	int32_t x568 = -1;
	volatile int32_t t133 = 13768;

    t133 = (x565<=((x566/x567)!=x568));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x569 = 16U;
	volatile int8_t x570 = INT8_MIN;
	volatile int64_t x571 = INT64_MAX;
	static int32_t t134 = 7718578;

    t134 = (x569<=((x570/x571)!=x572));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x574 = UINT32_MAX;
	static int32_t x575 = -26;
	int32_t x576 = INT32_MIN;
	volatile int32_t t135 = -21208;

    t135 = (x573<=((x574/x575)!=x576));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x577 = 3829885U;
	uint32_t x578 = 880061919U;
	static volatile int32_t t136 = -108053443;

    t136 = (x577<=((x578/x579)!=x580));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x581 = 7940U;
	uint8_t x583 = 4U;
	int8_t x584 = -33;

    t137 = (x581<=((x582/x583)!=x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = -2;
	int8_t x588 = -1;
	int32_t t138 = 1;

    t138 = (x585<=((x586/x587)!=x588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x589 = UINT32_MAX;
	int8_t x590 = 1;
	int32_t x591 = -104;
	int16_t x592 = 16353;
	static volatile int32_t t139 = 4;

    t139 = (x589<=((x590/x591)!=x592));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x593 = UINT32_MAX;
	uint64_t x594 = 3LLU;
	static uint32_t x595 = 56U;
	static int8_t x596 = -1;
	volatile int32_t t140 = -925532;

    t140 = (x593<=((x594/x595)!=x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x597 = 25U;
	int64_t x598 = -444286245982288LL;
	static volatile int32_t t141 = -758834897;

    t141 = (x597<=((x598/x599)!=x600));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x601 = 30LLU;
	static volatile uint16_t x602 = 27U;
	static int64_t x603 = INT64_MAX;
	int32_t t142 = 1;

    t142 = (x601<=((x602/x603)!=x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x605 = INT8_MIN;
	static int64_t x606 = -1206LL;
	static uint64_t x607 = 121316363441618881LLU;
	volatile int32_t t143 = -1;

    t143 = (x605<=((x606/x607)!=x608));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x609 = 2U;
	uint32_t x611 = UINT32_MAX;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t144 = -426251;

    t144 = (x609<=((x610/x611)!=x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = 238U;
	static uint16_t x619 = UINT16_MAX;
	int32_t x620 = -2544546;
	volatile int32_t t145 = -1677;

    t145 = (x617<=((x618/x619)!=x620));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x621 = UINT16_MAX;
	int64_t x623 = INT64_MIN;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t146 = -57;

    t146 = (x621<=((x622/x623)!=x624));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x625 = 1267;
	uint64_t x626 = UINT64_MAX;
	int8_t x627 = INT8_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t147 = 8221461;

    t147 = (x625<=((x626/x627)!=x628));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x629 = INT32_MIN;
	int16_t x630 = 1;
	int32_t x631 = INT32_MAX;
	uint16_t x632 = 18U;
	int32_t t148 = -18433183;

    t148 = (x629<=((x630/x631)!=x632));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x633 = 4U;
	int32_t t149 = -3561;

    t149 = (x633<=((x634/x635)!=x636));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x638 = INT8_MIN;
	static uint32_t x639 = UINT32_MAX;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t150 = -53869;

    t150 = (x637<=((x638/x639)!=x640));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MAX;
	int8_t x644 = 1;

    t151 = (x641<=((x642/x643)!=x644));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x646 = UINT32_MAX;
	volatile int64_t x647 = 51511669301634006LL;
	volatile int32_t t152 = -26016;

    t152 = (x645<=((x646/x647)!=x648));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = INT16_MIN;
	int16_t x650 = INT16_MIN;
	volatile int32_t t153 = 57260;

    t153 = (x649<=((x650/x651)!=x652));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x653 = INT64_MAX;
	static int64_t x654 = INT64_MIN;
	int32_t t154 = 5930;

    t154 = (x653<=((x654/x655)!=x656));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x661 = 1299U;
	int16_t x664 = INT16_MIN;
	volatile int32_t t155 = -1;

    t155 = (x661<=((x662/x663)!=x664));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x667 = 1406U;
	static int32_t x668 = -3990360;
	volatile int32_t t156 = -118348734;

    t156 = (x665<=((x666/x667)!=x668));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x669 = UINT32_MAX;
	int8_t x670 = -2;
	int32_t x671 = INT32_MIN;
	uint8_t x672 = UINT8_MAX;
	int32_t t157 = 7985;

    t157 = (x669<=((x670/x671)!=x672));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = -6;
	int16_t x676 = 0;
	volatile int32_t t158 = 304633;

    t158 = (x673<=((x674/x675)!=x676));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x677 = UINT64_MAX;
	int16_t x678 = -13;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t159 = -341675794;

    t159 = (x677<=((x678/x679)!=x680));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x681 = INT64_MIN;
	static int16_t x683 = INT16_MAX;
	int8_t x684 = INT8_MAX;
	static int32_t t160 = 8385668;

    t160 = (x681<=((x682/x683)!=x684));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x689 = UINT16_MAX;
	volatile int64_t x690 = -10345LL;
	volatile uint16_t x691 = 2667U;
	int8_t x692 = INT8_MIN;
	volatile int32_t t161 = 7831327;

    t161 = (x689<=((x690/x691)!=x692));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x694 = -1;
	static int64_t x695 = INT64_MAX;
	volatile uint8_t x696 = 113U;

    t162 = (x693<=((x694/x695)!=x696));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x698 = INT16_MIN;
	volatile int32_t x699 = -203356700;
	int64_t x700 = -1LL;
	static volatile int32_t t163 = 112694;

    t163 = (x697<=((x698/x699)!=x700));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x701 = 14234U;
	volatile int32_t x702 = INT32_MAX;
	int16_t x703 = INT16_MAX;
	int32_t t164 = 19452136;

    t164 = (x701<=((x702/x703)!=x704));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x705 = 1U;
	uint64_t x706 = 1005882115751091923LLU;
	volatile uint64_t x707 = UINT64_MAX;
	static int16_t x708 = -98;

    t165 = (x705<=((x706/x707)!=x708));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint32_t x710 = 180U;
	int16_t x711 = INT16_MAX;
	int8_t x712 = -7;

    t166 = (x709<=((x710/x711)!=x712));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MIN;
	uint16_t x715 = UINT16_MAX;
	volatile int32_t x716 = INT32_MAX;

    t167 = (x713<=((x714/x715)!=x716));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = 45436908543180LL;
	int8_t x718 = INT8_MAX;
	int32_t x719 = 1548055;
	uint16_t x720 = 1U;
	volatile int32_t t168 = 124405429;

    t168 = (x717<=((x718/x719)!=x720));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x721 = INT8_MIN;
	uint32_t x722 = UINT32_MAX;
	volatile int32_t t169 = 388;

    t169 = (x721<=((x722/x723)!=x724));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x725 = 630381550LLU;
	int64_t x726 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	int32_t t170 = 85078775;

    t170 = (x725<=((x726/x727)!=x728));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x729 = INT8_MAX;
	uint64_t x730 = 1720775LLU;
	int8_t x731 = INT8_MIN;
	volatile int32_t t171 = -69863886;

    t171 = (x729<=((x730/x731)!=x732));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x734 = 15;
	static uint8_t x735 = 8U;
	int16_t x736 = INT16_MAX;
	volatile int32_t t172 = 9362;

    t172 = (x733<=((x734/x735)!=x736));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x737 = -10;
	int64_t x738 = INT64_MIN;
	uint32_t x739 = 456601U;
	uint16_t x740 = 7692U;
	volatile int32_t t173 = -35706349;

    t173 = (x737<=((x738/x739)!=x740));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x741 = 25U;
	volatile int64_t x742 = -159386490927267LL;
	static volatile int16_t x743 = INT16_MIN;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t174 = 232178;

    t174 = (x741<=((x742/x743)!=x744));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x745 = UINT64_MAX;
	static uint8_t x746 = 7U;
	uint32_t x748 = UINT32_MAX;
	int32_t t175 = 4167293;

    t175 = (x745<=((x746/x747)!=x748));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x749 = -215;
	static uint64_t x751 = UINT64_MAX;
	int16_t x752 = -70;
	int32_t t176 = -2;

    t176 = (x749<=((x750/x751)!=x752));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x754 = INT64_MAX;
	uint32_t x755 = UINT32_MAX;
	uint32_t x756 = UINT32_MAX;
	int32_t t177 = 16;

    t177 = (x753<=((x754/x755)!=x756));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x757 = -1;
	uint16_t x758 = 709U;
	int64_t x759 = 113LL;
	int16_t x760 = 3;
	volatile int32_t t178 = 47;

    t178 = (x757<=((x758/x759)!=x760));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile int16_t x762 = INT16_MIN;
	static uint8_t x763 = 1U;
	uint32_t x764 = 54498U;
	volatile int32_t t179 = -63986281;

    t179 = (x761<=((x762/x763)!=x764));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x765 = INT32_MAX;
	int64_t x766 = INT64_MIN;
	static uint8_t x767 = 37U;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t180 = -505594060;

    t180 = (x765<=((x766/x767)!=x768));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x769 = 1U;
	int64_t x770 = 17141287710020LL;
	int8_t x771 = -1;
	int16_t x772 = -6;
	volatile int32_t t181 = 35;

    t181 = (x769<=((x770/x771)!=x772));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x773 = 107U;
	int64_t x774 = 15270LL;
	int16_t x775 = 78;

    t182 = (x773<=((x774/x775)!=x776));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MAX;
	volatile int64_t x780 = INT64_MAX;

    t183 = (x777<=((x778/x779)!=x780));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x782 = 27;
	static int64_t x783 = -1LL;
	static volatile uint32_t x784 = UINT32_MAX;

    t184 = (x781<=((x782/x783)!=x784));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x785 = 1252LLU;
	int32_t x786 = INT32_MIN;
	static volatile int64_t x787 = 63413806LL;
	int32_t t185 = 1245;

    t185 = (x785<=((x786/x787)!=x788));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x789 = 2U;
	uint32_t x790 = UINT32_MAX;
	volatile uint8_t x791 = UINT8_MAX;
	int64_t x792 = -1LL;
	volatile int32_t t186 = 0;

    t186 = (x789<=((x790/x791)!=x792));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x794 = INT32_MAX;
	int8_t x796 = -1;
	volatile int32_t t187 = -14;

    t187 = (x793<=((x794/x795)!=x796));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x797 = 599U;
	volatile int8_t x798 = INT8_MIN;
	volatile int64_t x799 = -1LL;
	static int64_t x800 = -925834141LL;
	int32_t t188 = 538581;

    t188 = (x797<=((x798/x799)!=x800));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x801 = -1;
	uint64_t x803 = 7562257927646034409LLU;
	uint64_t x804 = 1860120647LLU;
	volatile int32_t t189 = -30;

    t189 = (x801<=((x802/x803)!=x804));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x806 = -1;
	uint32_t x807 = 28U;
	uint32_t x808 = UINT32_MAX;
	volatile int32_t t190 = 752982391;

    t190 = (x805<=((x806/x807)!=x808));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x809 = INT16_MAX;
	static int32_t x810 = INT32_MIN;
	int16_t x811 = INT16_MIN;
	int32_t x812 = 400;
	int32_t t191 = 295946488;

    t191 = (x809<=((x810/x811)!=x812));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x814 = 9633022LLU;
	int64_t x816 = INT64_MAX;
	volatile int32_t t192 = -80779;

    t192 = (x813<=((x814/x815)!=x816));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x817 = UINT64_MAX;
	uint16_t x818 = 2145U;
	uint16_t x819 = UINT16_MAX;
	int8_t x820 = INT8_MIN;

    t193 = (x817<=((x818/x819)!=x820));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x821 = INT64_MIN;
	int64_t x822 = -98810LL;
	uint16_t x823 = UINT16_MAX;
	int32_t x824 = INT32_MAX;
	static int32_t t194 = -19602218;

    t194 = (x821<=((x822/x823)!=x824));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x825 = UINT8_MAX;
	int8_t x826 = -1;
	int8_t x827 = INT8_MIN;
	int8_t x828 = -1;
	volatile int32_t t195 = -25276;

    t195 = (x825<=((x826/x827)!=x828));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x829 = INT8_MIN;
	int64_t x830 = -1LL;
	uint16_t x831 = 9763U;
	int32_t t196 = -67647;

    t196 = (x829<=((x830/x831)!=x832));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x833 = 207753222;
	static uint64_t x834 = UINT64_MAX;
	int16_t x835 = 10;
	static uint16_t x836 = 4804U;
	volatile int32_t t197 = 17879;

    t197 = (x833<=((x834/x835)!=x836));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x841 = 14U;

    t198 = (x841<=((x842/x843)!=x844));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x845 = -1;
	int64_t x846 = INT64_MIN;
	int32_t t199 = 729957609;

    t199 = (x845<=((x846/x847)!=x848));

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

