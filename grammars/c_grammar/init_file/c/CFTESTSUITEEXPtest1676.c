
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

volatile int32_t x1 = INT32_MIN;
int16_t x3 = -1;
uint64_t x8 = 231LLU;
uint64_t x9 = 885134LLU;
int16_t x11 = 3;
int32_t t2 = -1;
int16_t x13 = INT16_MIN;
uint32_t x14 = UINT32_MAX;
uint64_t x21 = 907282702670591315LLU;
static uint8_t x24 = UINT8_MAX;
static int8_t x26 = INT8_MAX;
int64_t x39 = INT64_MIN;
int32_t t9 = -445857;
volatile int8_t x44 = INT8_MIN;
int32_t t10 = 20;
int64_t x48 = INT64_MAX;
int16_t x52 = INT16_MAX;
int8_t x55 = 1;
volatile int32_t t13 = -1;
int16_t x57 = 184;
int8_t x59 = 1;
uint32_t x64 = UINT32_MAX;
volatile int32_t t18 = 474586;
volatile int32_t t19 = 699224;
int8_t x81 = INT8_MAX;
volatile int32_t t22 = -2;
static int32_t x100 = 6616;
uint64_t x102 = 420835195722428LLU;
volatile int32_t t25 = -1;
int8_t x120 = -1;
static volatile int32_t t29 = 37038317;
volatile int64_t x121 = 2358613993668563LL;
int8_t x123 = INT8_MIN;
int32_t x131 = -47660167;
int64_t x138 = 2466044166150LL;
int8_t x140 = 6;
volatile int32_t t35 = 192994;
static int16_t x157 = -397;
int32_t x160 = -1;
int32_t x175 = 179;
int32_t x181 = INT32_MIN;
volatile int32_t t47 = 16;
int8_t x196 = -10;
static uint16_t x197 = 15755U;
uint32_t x199 = UINT32_MAX;
int8_t x203 = -1;
int16_t x210 = -1;
int16_t x217 = INT16_MIN;
volatile int32_t t54 = -832925152;
static uint64_t x222 = 7367726631016LLU;
static int32_t x224 = -17;
uint8_t x235 = UINT8_MAX;
int32_t x244 = INT32_MAX;
static int16_t x246 = -1;
volatile int32_t t61 = 178076;
volatile int32_t t62 = 31;
uint64_t x253 = 75798LLU;
int32_t t64 = 4921188;
uint32_t x270 = UINT32_MAX;
int32_t x271 = -1917;
static int32_t x284 = 204559108;
int16_t x286 = -1;
uint64_t x287 = UINT64_MAX;
int16_t x290 = -2429;
uint8_t x297 = 2U;
uint16_t x298 = 12348U;
static uint64_t x299 = UINT64_MAX;
static int32_t t74 = -38618;
uint16_t x312 = UINT16_MAX;
int8_t x319 = INT8_MIN;
int32_t x320 = 0;
uint32_t x321 = 350096461U;
volatile int16_t x325 = 340;
uint16_t x331 = 1U;
static int32_t x334 = -820952;
int32_t x336 = INT32_MAX;
int64_t x342 = -217145LL;
static int64_t x344 = INT64_MIN;
int8_t x345 = -1;
uint64_t x350 = 73426773708160LLU;
uint8_t x357 = UINT8_MAX;
int32_t x358 = INT32_MIN;
volatile int8_t x360 = INT8_MIN;
int8_t x363 = INT8_MAX;
int32_t x364 = 15293;
uint64_t x375 = 40473LLU;
int32_t x376 = -1;
int32_t t95 = -2846975;
volatile int32_t t97 = -6;
int64_t x400 = INT64_MIN;
static int32_t t101 = -145990048;
static int64_t x411 = INT64_MIN;
int16_t x413 = INT16_MIN;
volatile int32_t t103 = 8770163;
uint32_t x423 = 17090U;
int32_t t105 = 3551650;
volatile int16_t x427 = -5961;
int32_t x431 = -4162478;
volatile int16_t x433 = INT16_MIN;
uint8_t x441 = 27U;
uint8_t x442 = 89U;
static int32_t x443 = INT32_MAX;
volatile uint8_t x444 = 5U;
int32_t t110 = 254526;
volatile int32_t t111 = 200608279;
static int32_t x450 = 65166;
uint32_t x451 = 75176994U;
static volatile int64_t x456 = -527107609LL;
int16_t x458 = INT16_MAX;
static uint32_t x459 = 90591U;
int16_t x460 = -1;
int8_t x462 = INT8_MAX;
int8_t x470 = -24;
int64_t x475 = 1LL;
static uint64_t x476 = 2011261591390LLU;
volatile int16_t x480 = INT16_MIN;
volatile int32_t t120 = -1234289;
int16_t x485 = INT16_MIN;
int32_t t121 = -254221109;
static int64_t x490 = 148LL;
uint32_t x493 = 20806U;
int32_t t123 = 1736577;
int16_t x502 = INT16_MAX;
uint64_t x504 = 1255190648689471761LLU;
uint16_t x505 = UINT16_MAX;
int32_t x511 = -2;
int8_t x513 = 1;
int16_t x520 = INT16_MIN;
int8_t x521 = INT8_MAX;
static int32_t t130 = -1896938;
static volatile uint32_t x525 = 662U;
int32_t x529 = INT32_MIN;
volatile int32_t t133 = -9271249;
uint16_t x539 = UINT16_MAX;
int32_t t134 = 1466686;
int16_t x543 = 10354;
int8_t x549 = 9;
uint8_t x557 = 0U;
uint8_t x558 = 73U;
uint64_t x559 = 692919752192368LLU;
static int32_t t140 = 328691850;
volatile uint16_t x569 = UINT16_MAX;
uint32_t x570 = 323U;
volatile int32_t t142 = 0;
int8_t x574 = INT8_MAX;
int64_t x577 = INT64_MIN;
volatile int8_t x579 = INT8_MIN;
int16_t x584 = -6433;
int64_t x585 = INT64_MIN;
int8_t x588 = INT8_MIN;
uint64_t x600 = 10860LLU;
int16_t x602 = -119;
int64_t x604 = -869LL;
static uint16_t x616 = 26U;
int8_t x618 = INT8_MIN;
volatile int32_t t155 = -228777;
static volatile int64_t x630 = INT64_MIN;
volatile uint32_t x639 = 0U;
volatile uint16_t x653 = 593U;
int32_t t163 = 1;
uint64_t x657 = 23650024065LLU;
int64_t x663 = 1977482453LL;
int16_t x671 = INT16_MIN;
int16_t x676 = -1;
uint32_t x678 = UINT32_MAX;
volatile int32_t t171 = 2;
int32_t x691 = INT32_MIN;
static int8_t x695 = -4;
int32_t x697 = 67;
int64_t x705 = INT64_MIN;
int64_t x709 = INT64_MAX;
int32_t x718 = 459600;
int8_t x720 = INT8_MIN;
static volatile int32_t t179 = -6309273;
uint8_t x724 = 21U;
static volatile uint32_t x726 = 3548345U;
uint64_t x728 = UINT64_MAX;
int64_t x730 = 3675926LL;
int64_t x737 = -1LL;
static volatile uint16_t x740 = UINT16_MAX;
int32_t x755 = INT32_MIN;
int32_t t188 = -492802556;
int8_t x759 = INT8_MIN;
uint8_t x766 = 0U;
int16_t x774 = -6347;
uint8_t x779 = 0U;
int16_t x780 = INT16_MIN;
int8_t x783 = INT8_MIN;
int32_t t196 = -3971;
int64_t x790 = -1LL;
volatile int32_t t198 = -414599723;
int64_t x798 = INT64_MIN;


void f0(void) {
    	int32_t x2 = -1;
	static uint64_t x4 = 574624616376334523LLU;
	static int32_t t0 = 26514117;

    t0 = (x1<=((x2>x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -541;
	uint16_t x6 = 24U;
	static uint32_t x7 = 1005U;
	volatile int32_t t1 = -225;

    t1 = (x5<=((x6>x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x10 = 130027765822439LLU;
	int64_t x12 = INT64_MAX;

    t2 = (x9<=((x10>x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 4U;
	volatile int32_t t3 = 61125489;

    t3 = (x13<=((x14>x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = -57659387;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = -1LL;
	int32_t t4 = -424077;

    t4 = (x17<=((x18>x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x22 = 9U;
	volatile int32_t x23 = INT32_MIN;
	volatile int32_t t5 = 57;

    t5 = (x21<=((x22>x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 7U;
	volatile uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -51217606;

    t6 = (x25<=((x26>x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	volatile int64_t x30 = INT64_MAX;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = 31194094458LL;
	volatile int32_t t7 = 0;

    t7 = (x29<=((x30>x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = -56;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t x36 = -1;
	volatile int32_t t8 = -5243;

    t8 = (x33<=((x34>x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	volatile int32_t x38 = 245;
	static volatile int8_t x40 = 16;

    t9 = (x37<=((x38>x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	static volatile int16_t x42 = 0;
	int64_t x43 = INT64_MIN;

    t10 = (x41<=((x42>x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int16_t x46 = -1;
	uint32_t x47 = 25524407U;
	static volatile int32_t t11 = -5;

    t11 = (x45<=((x46>x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 124U;
	static uint64_t x50 = 1107563013LLU;
	volatile int16_t x51 = -1;
	int32_t t12 = 1;

    t12 = (x49<=((x50>x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile uint16_t x54 = 3735U;
	uint8_t x56 = 2U;

    t13 = (x53<=((x54>x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = 1290462955434677458LL;
	volatile int16_t x60 = -1761;
	int32_t t14 = -1415062;

    t14 = (x57<=((x58>x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 725U;
	static uint16_t x63 = UINT16_MAX;
	volatile int32_t t15 = -152141;

    t15 = (x61<=((x62>x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 1U;
	static int8_t x66 = INT8_MIN;
	static uint32_t x67 = 23000U;
	int8_t x68 = -1;
	int32_t t16 = 183466;

    t16 = (x65<=((x66>x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = -23487978029281326LL;
	int32_t t17 = -7;

    t17 = (x69<=((x70>x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 77U;
	volatile int32_t x74 = 5637;
	int64_t x75 = INT64_MIN;
	static uint64_t x76 = 240600954137180LLU;

    t18 = (x73<=((x74>x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	volatile int32_t x78 = 35254368;
	static int32_t x79 = INT32_MIN;
	int16_t x80 = -4183;

    t19 = (x77<=((x78>x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = UINT8_MAX;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = 3608472397265226LL;
	volatile int32_t t20 = 294830894;

    t20 = (x81<=((x82>x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 16LL;
	uint8_t x86 = 0U;
	static volatile uint64_t x87 = 3LLU;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -376638;

    t21 = (x85<=((x86>x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	volatile uint64_t x91 = UINT64_MAX;
	volatile uint16_t x92 = UINT16_MAX;

    t22 = (x89<=((x90>x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x94 = -335;
	static int16_t x95 = 2875;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 23576;

    t23 = (x93<=((x94>x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t t24 = -19355265;

    t24 = (x97<=((x98>x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 716687243688LLU;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;

    t25 = (x101<=((x102>x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 13;
	int64_t x106 = -1LL;
	int16_t x107 = -13;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 216712;

    t26 = (x105<=((x106>x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static volatile uint64_t x110 = 7428595LLU;
	int16_t x111 = INT16_MIN;
	volatile uint16_t x112 = 11U;
	volatile int32_t t27 = 515;

    t27 = (x109<=((x110>x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = 3U;
	uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 17167189546LLU;
	volatile int64_t x116 = -187591076403LL;
	int32_t t28 = -3613;

    t28 = (x113<=((x114>x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	static int32_t x118 = INT32_MAX;
	static uint16_t x119 = UINT16_MAX;

    t29 = (x117<=((x118>x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = 1U;
	static int16_t x124 = INT16_MIN;
	int32_t t30 = -52520;

    t30 = (x121<=((x122>x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -1LL;
	static int32_t x126 = -49674;
	volatile int16_t x127 = 383;
	static int64_t x128 = INT64_MIN;
	int32_t t31 = -1240112;

    t31 = (x125<=((x126>x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -24;
	uint64_t x130 = 349226LLU;
	uint64_t x132 = 3581340748847LLU;
	volatile int32_t t32 = -2686096;

    t32 = (x129<=((x130>x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 54;
	int16_t x134 = INT16_MAX;
	static int16_t x135 = 0;
	uint8_t x136 = 1U;
	volatile int32_t t33 = 2890;

    t33 = (x133<=((x134>x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	static uint32_t x139 = 309U;
	static int32_t t34 = 2025349;

    t34 = (x137<=((x138>x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	static uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 885U;

    t35 = (x141<=((x142>x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 0;
	uint16_t x146 = 17U;
	int64_t x147 = 51439521172314LL;
	static int32_t x148 = -1;
	volatile int32_t t36 = 114811;

    t36 = (x145<=((x146>x147)==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 50893610U;
	int8_t x150 = -40;
	int8_t x151 = INT8_MIN;
	static uint64_t x152 = 11963718468LLU;
	int32_t t37 = -98;

    t37 = (x149<=((x150>x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int64_t x154 = -1863970720856LL;
	int64_t x155 = -64032234336LL;
	static int32_t x156 = -54;
	static int32_t t38 = -733;

    t38 = (x153<=((x154>x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	volatile int32_t t39 = 3591;

    t39 = (x157<=((x158>x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	static uint32_t x162 = 10644U;
	static int16_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 24605;

    t40 = (x161<=((x162>x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	static uint32_t x168 = 0U;
	volatile int32_t t41 = 396;

    t41 = (x165<=((x166>x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	static int16_t x170 = -61;
	static uint16_t x171 = UINT16_MAX;
	int32_t x172 = -1;
	int32_t t42 = 251075331;

    t42 = (x169<=((x170>x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	uint64_t x174 = 61270988207824530LLU;
	static uint16_t x176 = 163U;
	volatile int32_t t43 = -7439;

    t43 = (x173<=((x174>x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1471125LL;
	int16_t x178 = 598;
	int32_t x179 = -1;
	int32_t x180 = -79673;
	static int32_t t44 = -1011;

    t44 = (x177<=((x178>x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x182 = -2021;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = 127;

    t45 = (x181<=((x182>x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = -1;
	uint32_t x186 = 4313800U;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -234388559;

    t46 = (x185<=((x186>x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 10628U;
	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	static int16_t x192 = -143;

    t47 = (x189<=((x190>x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = 3U;
	int16_t x194 = INT16_MAX;
	static uint32_t x195 = 256383U;
	int32_t t48 = -10648973;

    t48 = (x193<=((x194>x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	uint64_t x200 = 73446975047LLU;
	int32_t t49 = 114703;

    t49 = (x197<=((x198>x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 14543U;
	int64_t x202 = INT64_MIN;
	uint8_t x204 = 0U;
	static int32_t t50 = -253886771;

    t50 = (x201<=((x202>x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	int16_t x207 = -11;
	int8_t x208 = -8;
	static int32_t t51 = 2518862;

    t51 = (x205<=((x206>x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 42988119831LLU;
	int8_t x211 = INT8_MIN;
	static int32_t x212 = 7;
	volatile int32_t t52 = -3755;

    t52 = (x209<=((x210>x211)==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MIN;
	int32_t x215 = -2858218;
	int8_t x216 = -1;
	static volatile int32_t t53 = -375049;

    t53 = (x213<=((x214>x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x218 = 49U;
	uint16_t x219 = UINT16_MAX;
	uint32_t x220 = UINT32_MAX;

    t54 = (x217<=((x218>x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -376;
	static uint64_t x223 = 48197LLU;
	static volatile int32_t t55 = -60;

    t55 = (x221<=((x222>x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MAX;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 206;

    t56 = (x225<=((x226>x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = 2;
	int32_t x230 = INT32_MIN;
	volatile int32_t x231 = INT32_MIN;
	volatile int32_t x232 = -729468748;
	static int32_t t57 = -14843583;

    t57 = (x229<=((x230>x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	int32_t x236 = -3;
	static int32_t t58 = -200995858;

    t58 = (x233<=((x234>x235)==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 0U;
	int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 103633894;

    t59 = (x237<=((x238>x239)==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 27429790368235LLU;
	int32_t x242 = INT32_MAX;
	int64_t x243 = INT64_MIN;
	int32_t t60 = 1946135;

    t60 = (x241<=((x242>x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = -2932766505LL;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = INT64_MIN;

    t61 = (x245<=((x246>x247)==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = UINT16_MAX;
	int8_t x250 = 0;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 33982839216161731LLU;

    t62 = (x249<=((x250>x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x254 = -1;
	int8_t x255 = -1;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 53522;

    t63 = (x253<=((x254>x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	int8_t x258 = -5;
	uint64_t x259 = 87LLU;
	uint8_t x260 = 25U;

    t64 = (x257<=((x258>x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 1825;
	volatile int16_t x262 = -1;
	uint64_t x263 = 769330LLU;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 15593551;

    t65 = (x261<=((x262>x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	static uint64_t x267 = 20LLU;
	int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -1653;

    t66 = (x265<=((x266>x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -304534;

    t67 = (x269<=((x270>x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 47U;
	int16_t x274 = -358;
	volatile int8_t x275 = 1;
	static uint8_t x276 = 0U;
	volatile int32_t t68 = -188;

    t68 = (x273<=((x274>x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 2039;
	static int8_t x278 = INT8_MIN;
	int64_t x279 = 3469750LL;
	int8_t x280 = 13;
	int32_t t69 = 82584;

    t69 = (x277<=((x278>x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int64_t x282 = INT64_MIN;
	volatile int32_t x283 = INT32_MAX;
	int32_t t70 = 44147588;

    t70 = (x281<=((x282>x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = -1;
	int32_t x288 = -1;
	volatile int32_t t71 = 252;

    t71 = (x285<=((x286>x287)==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	uint8_t x291 = 17U;
	volatile int32_t x292 = -502;
	int32_t t72 = 19012938;

    t72 = (x289<=((x290>x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	int32_t x294 = INT32_MIN;
	int32_t x295 = 926276;
	int16_t x296 = -16;
	volatile int32_t t73 = -233;

    t73 = (x293<=((x294>x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x300 = -1;

    t74 = (x297<=((x298>x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 1U;
	static int64_t x302 = INT64_MAX;
	static int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 24U;
	static int32_t t75 = -1640438;

    t75 = (x301<=((x302>x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 4113276U;
	int8_t x306 = 2;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 0;

    t76 = (x305<=((x306>x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	int32_t t77 = -22;

    t77 = (x309<=((x310>x311)==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x313 = 64673;
	volatile uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = 887658585698LLU;
	int32_t t78 = 76369640;

    t78 = (x313<=((x314>x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = INT32_MAX;
	int8_t x318 = INT8_MAX;
	static volatile int32_t t79 = 944794133;

    t79 = (x317<=((x318>x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = 2866041;
	static int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -119849931;

    t80 = (x321<=((x322>x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = 0U;
	int32_t t81 = 1;

    t81 = (x325<=((x326>x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x329 = 17534U;
	static int64_t x330 = INT64_MAX;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = -60;

    t82 = (x329<=((x330>x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	static int32_t t83 = -846045;

    t83 = (x333<=((x334>x335)==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 130745U;
	volatile uint8_t x338 = 0U;
	volatile int16_t x339 = -105;
	static int64_t x340 = INT64_MAX;
	volatile int32_t t84 = -61415;

    t84 = (x337<=((x338>x339)==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	static int32_t t85 = 1;

    t85 = (x341<=((x342>x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 13411774LLU;
	static uint16_t x347 = 8595U;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 1;

    t86 = (x345<=((x346>x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 0U;
	static uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = INT32_MIN;
	static int32_t t87 = -47732567;

    t87 = (x349<=((x350>x351)==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -2130279;

    t88 = (x353<=((x354>x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x359 = INT32_MIN;
	static int32_t t89 = 9516190;

    t89 = (x357<=((x358>x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = -1;
	int32_t t90 = 1;

    t90 = (x361<=((x362>x363)==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 39U;
	uint8_t x366 = 112U;
	int16_t x367 = -1;
	uint64_t x368 = UINT64_MAX;
	int32_t t91 = 839;

    t91 = (x365<=((x366>x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 84U;
	uint64_t x370 = 1153227044716LLU;
	int16_t x371 = INT16_MAX;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -6811322;

    t92 = (x369<=((x370>x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MIN;
	int32_t t93 = 12504611;

    t93 = (x373<=((x374>x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -1LL;
	static int64_t x378 = -1LL;
	int8_t x379 = -10;
	static int16_t x380 = -740;
	int32_t t94 = 192700358;

    t94 = (x377<=((x378>x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MAX;
	int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	static int16_t x384 = -6;

    t95 = (x381<=((x382>x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = -5;
	static volatile uint64_t x386 = 36014442737LLU;
	volatile int32_t x387 = 585827;
	int64_t x388 = 14403207862788825LL;
	int32_t t96 = 0;

    t96 = (x385<=((x386>x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	int16_t x391 = 159;
	uint16_t x392 = 16324U;

    t97 = (x389<=((x390>x391)==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MIN;
	static uint8_t x394 = 3U;
	static int32_t x395 = -91152;
	volatile int8_t x396 = 7;
	static volatile int32_t t98 = 1;

    t98 = (x393<=((x394>x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	int32_t x398 = -1;
	volatile uint16_t x399 = 1185U;
	volatile int32_t t99 = -40;

    t99 = (x397<=((x398>x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int8_t x402 = -1;
	volatile int16_t x403 = INT16_MIN;
	uint64_t x404 = 1771441129389391LLU;
	volatile int32_t t100 = -255015;

    t100 = (x401<=((x402>x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = -1;
	volatile uint64_t x406 = UINT64_MAX;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;

    t101 = (x405<=((x406>x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	uint32_t x410 = UINT32_MAX;
	int16_t x412 = 1;
	int32_t t102 = 7;

    t102 = (x409<=((x410>x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	static uint32_t x415 = UINT32_MAX;
	int64_t x416 = -1LL;

    t103 = (x413<=((x414>x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	volatile int64_t x418 = -18158258LL;
	static uint64_t x419 = 15059LLU;
	uint32_t x420 = UINT32_MAX;
	int32_t t104 = -21697;

    t104 = (x417<=((x418>x419)==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -235;
	uint16_t x422 = 2U;
	int8_t x424 = -1;

    t105 = (x421<=((x422>x423)==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = 14;
	int32_t x426 = INT32_MIN;
	static int64_t x428 = 19605173623465LL;
	int32_t t106 = -61;

    t106 = (x425<=((x426>x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 12U;
	volatile int8_t x430 = 2;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = 1;

    t107 = (x429<=((x430>x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x434 = 15049U;
	uint8_t x435 = 23U;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t108 = 191;

    t108 = (x433<=((x434>x435)==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 5U;
	uint16_t x438 = UINT16_MAX;
	static uint32_t x439 = 301500910U;
	volatile int32_t x440 = INT32_MIN;
	int32_t t109 = 1895;

    t109 = (x437<=((x438>x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    

    t110 = (x441<=((x442>x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	uint16_t x447 = 1281U;
	static uint16_t x448 = 5262U;

    t111 = (x445<=((x446>x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = 254866406;
	static volatile int64_t x452 = INT64_MAX;
	volatile int32_t t112 = 135;

    t112 = (x449<=((x450>x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -1;
	int64_t x454 = -1LL;
	int32_t x455 = -1;
	int32_t t113 = -37689554;

    t113 = (x453<=((x454>x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 14U;
	volatile int32_t t114 = 72;

    t114 = (x457<=((x458>x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	uint64_t x463 = 21142427LLU;
	volatile int16_t x464 = INT16_MAX;
	static volatile int32_t t115 = 152701990;

    t115 = (x461<=((x462>x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x465 = 21828U;
	int8_t x466 = 3;
	static int32_t x467 = INT32_MIN;
	int8_t x468 = INT8_MIN;
	static int32_t t116 = 26108468;

    t116 = (x465<=((x466>x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	int32_t x471 = 0;
	static uint8_t x472 = 106U;
	int32_t t117 = 803;

    t117 = (x469<=((x470>x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	volatile int32_t x474 = INT32_MIN;
	static volatile int32_t t118 = -13898025;

    t118 = (x473<=((x474>x475)==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	static int8_t x478 = INT8_MAX;
	static int16_t x479 = INT16_MAX;
	int32_t t119 = -1;

    t119 = (x477<=((x478>x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x482 = -1;
	static uint32_t x483 = 485635132U;
	int8_t x484 = 41;

    t120 = (x481<=((x482>x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x486 = 2069078362LLU;
	static int64_t x487 = 28137678LL;
	int32_t x488 = 1001;

    t121 = (x485<=((x486>x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = -1;
	int32_t x491 = -1;
	static int8_t x492 = INT8_MAX;
	int32_t t122 = -44838698;

    t122 = (x489<=((x490>x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = -24;
	int8_t x495 = -15;
	uint64_t x496 = 3455365561571LLU;

    t123 = (x493<=((x494>x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MAX;
	static volatile uint32_t x498 = 1871030384U;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = 63939399U;
	int32_t t124 = 25;

    t124 = (x497<=((x498>x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 838U;
	int16_t x503 = INT16_MAX;
	static volatile int32_t t125 = 277627;

    t125 = (x501<=((x502>x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x506 = -1;
	uint32_t x507 = UINT32_MAX;
	int32_t x508 = -1;
	volatile int32_t t126 = 0;

    t126 = (x505<=((x506>x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	uint64_t x510 = 29618433668272LLU;
	int16_t x512 = -1;
	volatile int32_t t127 = -523707;

    t127 = (x509<=((x510>x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x514 = INT16_MIN;
	static volatile uint16_t x515 = UINT16_MAX;
	static volatile int64_t x516 = 0LL;
	int32_t t128 = -16;

    t128 = (x513<=((x514>x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = INT64_MAX;
	volatile int32_t x518 = -1;
	uint16_t x519 = 0U;
	static volatile int32_t t129 = 42;

    t129 = (x517<=((x518>x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x522 = 26675LL;
	int64_t x523 = INT64_MIN;
	volatile int16_t x524 = -353;

    t130 = (x521<=((x522>x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = -1;
	volatile int32_t x527 = -311;
	int8_t x528 = INT8_MAX;
	volatile int32_t t131 = 0;

    t131 = (x525<=((x526>x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = INT16_MAX;
	uint16_t x531 = UINT16_MAX;
	int64_t x532 = -183LL;
	int32_t t132 = 584;

    t132 = (x529<=((x530>x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	uint32_t x534 = UINT32_MAX;
	int64_t x535 = INT64_MAX;
	uint32_t x536 = UINT32_MAX;

    t133 = (x533<=((x534>x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MAX;
	volatile int32_t x540 = INT32_MIN;

    t134 = (x537<=((x538>x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = -13187;
	static uint64_t x542 = 6LLU;
	int8_t x544 = 1;
	int32_t t135 = 6787;

    t135 = (x541<=((x542>x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 0;
	uint16_t x546 = UINT16_MAX;
	uint64_t x547 = 5483408120053418291LLU;
	static uint16_t x548 = UINT16_MAX;
	int32_t t136 = 303041312;

    t136 = (x545<=((x546>x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x550 = 2098LL;
	int64_t x551 = 85463754676LL;
	int32_t x552 = -1;
	static int32_t t137 = 10164;

    t137 = (x549<=((x550>x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x553 = 761U;
	int8_t x554 = -1;
	int64_t x555 = INT64_MIN;
	int8_t x556 = INT8_MIN;
	volatile int32_t t138 = 722;

    t138 = (x553<=((x554>x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x560 = -187638909;
	int32_t t139 = -1;

    t139 = (x557<=((x558>x559)==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = 4776LLU;
	static uint8_t x562 = 6U;
	static int64_t x563 = -24141LL;
	uint32_t x564 = 9U;

    t140 = (x561<=((x562>x563)==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	uint8_t x566 = 15U;
	uint16_t x567 = 5135U;
	int16_t x568 = -1;
	volatile int32_t t141 = 4489;

    t141 = (x565<=((x566>x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x571 = -1;
	static volatile int64_t x572 = INT64_MAX;

    t142 = (x569<=((x570>x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -3675;
	volatile int64_t x575 = INT64_MAX;
	volatile int16_t x576 = -10;
	volatile int32_t t143 = 46157;

    t143 = (x573<=((x574>x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = UINT64_MAX;
	static volatile uint16_t x580 = UINT16_MAX;
	volatile int32_t t144 = -4;

    t144 = (x577<=((x578>x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = UINT64_MAX;
	int16_t x582 = -1;
	static int32_t x583 = INT32_MIN;
	int32_t t145 = 0;

    t145 = (x581<=((x582>x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = 2U;
	int16_t x587 = INT16_MAX;
	int32_t t146 = 550;

    t146 = (x585<=((x586>x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 1;
	volatile int64_t x590 = INT64_MIN;
	int32_t x591 = -1;
	volatile int16_t x592 = INT16_MAX;
	int32_t t147 = 107728909;

    t147 = (x589<=((x590>x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x594 = -1;
	int32_t x595 = INT32_MIN;
	int8_t x596 = INT8_MAX;
	volatile int32_t t148 = 33431;

    t148 = (x593<=((x594>x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = INT16_MIN;
	int32_t x598 = -1;
	int16_t x599 = -3;
	int32_t t149 = -1309108;

    t149 = (x597<=((x598>x599)==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 4U;
	volatile int16_t x603 = INT16_MIN;
	static volatile int32_t t150 = 13255864;

    t150 = (x601<=((x602>x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = 4U;
	volatile int8_t x608 = -1;
	int32_t t151 = -8681;

    t151 = (x605<=((x606>x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MIN;
	int8_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 6;

    t152 = (x609<=((x610>x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	uint16_t x614 = 961U;
	uint8_t x615 = 6U;
	int32_t t153 = 11221;

    t153 = (x613<=((x614>x615)==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 71U;
	static uint64_t x619 = 218690384345600LLU;
	uint16_t x620 = 737U;
	static int32_t t154 = 15173666;

    t154 = (x617<=((x618>x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint64_t x622 = 276790065885045829LLU;
	static int64_t x623 = INT64_MIN;
	static uint64_t x624 = UINT64_MAX;

    t155 = (x621<=((x622>x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	int16_t x626 = INT16_MAX;
	static int64_t x627 = INT64_MIN;
	static uint32_t x628 = 12U;
	int32_t t156 = 490265972;

    t156 = (x625<=((x626>x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	static volatile uint64_t x631 = 3878376017544932290LLU;
	uint8_t x632 = 6U;
	volatile int32_t t157 = -54;

    t157 = (x629<=((x630>x631)==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 269674786U;
	int32_t x634 = INT32_MAX;
	static uint32_t x635 = 717507235U;
	uint8_t x636 = 95U;
	int32_t t158 = -393019;

    t158 = (x633<=((x634>x635)==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = INT8_MAX;
	volatile int8_t x638 = INT8_MIN;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = 56431038;

    t159 = (x637<=((x638>x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	uint64_t x642 = UINT64_MAX;
	uint32_t x643 = 706U;
	int8_t x644 = -29;
	int32_t t160 = 17467;

    t160 = (x641<=((x642>x643)==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -1LL;
	volatile uint32_t x646 = UINT32_MAX;
	static int16_t x647 = -1;
	uint64_t x648 = 3LLU;
	int32_t t161 = 19;

    t161 = (x645<=((x646>x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MIN;
	int16_t x650 = INT16_MAX;
	static volatile int16_t x651 = INT16_MAX;
	int16_t x652 = INT16_MIN;
	volatile int32_t t162 = -640;

    t162 = (x649<=((x650>x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = INT8_MAX;
	volatile uint32_t x655 = UINT32_MAX;
	uint8_t x656 = UINT8_MAX;

    t163 = (x653<=((x654>x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x658 = 280U;
	static uint16_t x659 = 308U;
	static int32_t x660 = 46746905;
	static int32_t t164 = 1367;

    t164 = (x657<=((x658>x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	int64_t x662 = -22638LL;
	int8_t x664 = -1;
	volatile int32_t t165 = 2168564;

    t165 = (x661<=((x662>x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = -1;
	int8_t x666 = 5;
	int8_t x667 = 11;
	int64_t x668 = 57630226LL;
	int32_t t166 = 385805634;

    t166 = (x665<=((x666>x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 0;
	static uint64_t x670 = 3074287548973117LLU;
	volatile uint8_t x672 = UINT8_MAX;
	int32_t t167 = 308;

    t167 = (x669<=((x670>x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	static int32_t x674 = INT32_MIN;
	static int16_t x675 = INT16_MIN;
	volatile int32_t t168 = 0;

    t168 = (x673<=((x674>x675)==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint32_t x679 = 220270U;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = -239381532;

    t169 = (x677<=((x678>x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 0;
	int16_t x682 = INT16_MIN;
	uint16_t x683 = 691U;
	static uint64_t x684 = 11405LLU;
	static volatile int32_t t170 = -1;

    t170 = (x681<=((x682>x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 2484;
	uint32_t x686 = 95U;
	static volatile uint64_t x687 = 507117889503LLU;
	int16_t x688 = -12648;

    t171 = (x685<=((x686>x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = -53;
	static uint16_t x690 = 5U;
	int64_t x692 = -1LL;
	int32_t t172 = -8522369;

    t172 = (x689<=((x690>x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x693 = 6633667686LL;
	int16_t x694 = INT16_MAX;
	volatile int64_t x696 = INT64_MIN;
	int32_t t173 = -15593;

    t173 = (x693<=((x694>x695)==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x698 = -1;
	uint8_t x699 = 55U;
	int16_t x700 = -1;
	int32_t t174 = -1;

    t174 = (x697<=((x698>x699)==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	volatile int16_t x702 = INT16_MAX;
	static uint16_t x703 = 8371U;
	int16_t x704 = INT16_MIN;
	volatile int32_t t175 = -46939511;

    t175 = (x701<=((x702>x703)==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 3U;
	int8_t x707 = -30;
	int16_t x708 = 63;
	volatile int32_t t176 = -410212015;

    t176 = (x705<=((x706>x707)==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = 1;
	int8_t x711 = 2;
	int32_t x712 = INT32_MIN;
	static int32_t t177 = -29891;

    t177 = (x709<=((x710>x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x714 = INT16_MAX;
	int64_t x715 = INT64_MAX;
	volatile uint32_t x716 = 514730U;
	int32_t t178 = -2;

    t178 = (x713<=((x714>x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = INT32_MAX;
	int32_t x719 = INT32_MAX;

    t179 = (x717<=((x718>x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 3194278U;
	volatile uint8_t x722 = 5U;
	int8_t x723 = -1;
	volatile int32_t t180 = -4;

    t180 = (x721<=((x722>x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	int32_t x727 = 20967056;
	static volatile int32_t t181 = -1;

    t181 = (x725<=((x726>x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 15752U;
	static int8_t x731 = -1;
	static int32_t x732 = INT32_MIN;
	volatile int32_t t182 = 806;

    t182 = (x729<=((x730>x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint8_t x734 = 2U;
	int16_t x735 = 24;
	int8_t x736 = -1;
	volatile int32_t t183 = -865563314;

    t183 = (x733<=((x734>x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = -5566576215606LL;
	static int16_t x739 = INT16_MAX;
	int32_t t184 = 5;

    t184 = (x737<=((x738>x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x742 = INT32_MIN;
	static int8_t x743 = 1;
	volatile int32_t x744 = INT32_MIN;
	int32_t t185 = 116;

    t185 = (x741<=((x742>x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 2547U;
	uint64_t x746 = UINT64_MAX;
	int32_t x747 = INT32_MIN;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t186 = -11;

    t186 = (x745<=((x746>x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = INT64_MIN;
	uint32_t x750 = 118196U;
	uint16_t x751 = UINT16_MAX;
	int64_t x752 = INT64_MIN;
	int32_t t187 = -4357;

    t187 = (x749<=((x750>x751)==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	uint16_t x754 = 54U;
	uint8_t x756 = 120U;

    t188 = (x753<=((x754>x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 2LL;
	static int32_t x758 = INT32_MIN;
	static uint64_t x760 = UINT64_MAX;
	static volatile int32_t t189 = -164295;

    t189 = (x757<=((x758>x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	volatile uint64_t x762 = 4180500393906575LLU;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	int32_t t190 = -22;

    t190 = (x761<=((x762>x763)==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -2078170535LL;
	volatile uint64_t x767 = UINT64_MAX;
	int32_t x768 = -41393;
	volatile int32_t t191 = 327857510;

    t191 = (x765<=((x766>x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = 0U;
	volatile int16_t x770 = -1;
	int32_t x771 = -427;
	int8_t x772 = INT8_MIN;
	int32_t t192 = 84;

    t192 = (x769<=((x770>x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	volatile uint8_t x776 = 50U;
	volatile int32_t t193 = 58109;

    t193 = (x773<=((x774>x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 1958052271637304LLU;
	volatile int16_t x778 = INT16_MAX;
	int32_t t194 = -2;

    t194 = (x777<=((x778>x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	volatile int32_t x782 = INT32_MAX;
	uint32_t x784 = UINT32_MAX;
	static int32_t t195 = -12518742;

    t195 = (x781<=((x782>x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = 27;
	uint32_t x787 = 0U;
	uint8_t x788 = UINT8_MAX;

    t196 = (x785<=((x786>x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = 53413007U;
	static int64_t x791 = -31197705LL;
	int8_t x792 = -8;
	static volatile int32_t t197 = -62424319;

    t197 = (x789<=((x790>x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 0LL;
	uint16_t x794 = 0U;
	int32_t x795 = INT32_MAX;
	uint64_t x796 = UINT64_MAX;

    t198 = (x793<=((x794>x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -47;
	uint16_t x799 = 768U;
	static int16_t x800 = 10;
	volatile int32_t t199 = 2814308;

    t199 = (x797<=((x798>x799)==x800));

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

