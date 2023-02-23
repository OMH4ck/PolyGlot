
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

volatile int8_t x1 = -1;
int64_t x9 = INT64_MAX;
volatile int32_t t3 = 20;
static int32_t x31 = INT32_MIN;
static int32_t t7 = 1480691;
int64_t x38 = -1LL;
uint64_t x45 = 3687310104LLU;
int32_t x49 = -1;
int64_t x60 = INT64_MAX;
uint8_t x72 = 1U;
int64_t x76 = 122LL;
int32_t t17 = 249190356;
int32_t x86 = -1;
volatile int32_t t20 = 59874064;
volatile int32_t t21 = -23754194;
volatile int16_t x96 = 390;
static int32_t t24 = 20438895;
static volatile int32_t t25 = -2133210;
uint64_t x117 = UINT64_MAX;
uint8_t x128 = 94U;
uint32_t x132 = 309U;
int16_t x136 = -1;
volatile int32_t t31 = 6678904;
int64_t x137 = INT64_MIN;
int8_t x141 = INT8_MIN;
static int64_t x146 = 1298939LL;
volatile int32_t t35 = -342;
volatile int32_t x154 = INT32_MIN;
int32_t t36 = -63;
uint8_t x157 = 0U;
int64_t x158 = INT64_MAX;
int64_t x163 = -1LL;
volatile uint64_t x164 = 3116LLU;
volatile int32_t t38 = 24;
static int16_t x166 = INT16_MIN;
int64_t x168 = INT64_MIN;
int16_t x170 = -1;
volatile int32_t t40 = 377016;
int64_t x174 = INT64_MAX;
int8_t x184 = 5;
uint16_t x187 = UINT16_MAX;
static uint16_t x189 = 21U;
int8_t x194 = INT8_MAX;
int32_t x195 = -646234624;
int32_t x200 = INT32_MIN;
uint32_t x202 = UINT32_MAX;
int8_t x204 = -1;
uint16_t x209 = 28776U;
static int8_t x216 = 6;
uint64_t x217 = UINT64_MAX;
uint32_t x224 = 5000U;
static int32_t x225 = -1065;
volatile uint64_t x231 = 1LLU;
int32_t t55 = 15;
int32_t x233 = INT32_MIN;
uint16_t x238 = 14907U;
int64_t x242 = 8594688358LL;
int32_t t60 = 59223579;
int8_t x256 = INT8_MIN;
int64_t x261 = 1011LL;
int32_t t63 = -323793858;
int8_t x266 = -7;
uint32_t x269 = 1U;
uint32_t x272 = 14648357U;
volatile uint32_t x273 = 640673879U;
int64_t x278 = INT64_MAX;
int8_t x279 = -1;
int32_t x283 = -8562;
uint8_t x287 = 1U;
volatile int32_t t69 = -3688;
uint64_t x291 = 1LLU;
uint64_t x299 = UINT64_MAX;
int8_t x302 = -1;
static volatile uint32_t x304 = 2130515735U;
volatile int32_t t76 = 15;
int16_t x319 = -1;
static volatile int64_t x322 = -11538LL;
static int8_t x325 = -1;
volatile int16_t x329 = -1;
int8_t x331 = 18;
volatile int16_t x332 = -1;
volatile int32_t t80 = -304656206;
int32_t x336 = INT32_MIN;
int32_t t82 = 1108288;
volatile int32_t t84 = 331;
int16_t x360 = INT16_MAX;
int32_t x361 = INT32_MAX;
volatile int32_t t88 = 3;
uint64_t x365 = 57271230048348779LLU;
static int8_t x371 = INT8_MIN;
volatile int32_t t90 = 935;
static int64_t x375 = -1LL;
int16_t x376 = 4;
uint16_t x379 = 3626U;
uint32_t x381 = UINT32_MAX;
int32_t x385 = -5;
int16_t x386 = -1;
volatile uint64_t x388 = 1910323514470384560LLU;
int16_t x391 = INT16_MAX;
int32_t x393 = 25687;
uint32_t x411 = 597808U;
volatile int64_t x416 = INT64_MAX;
static volatile int32_t t102 = 0;
uint8_t x424 = 3U;
volatile int32_t t104 = -160;
int32_t x435 = INT32_MAX;
uint16_t x436 = 1442U;
int32_t x442 = INT32_MIN;
int8_t x445 = -47;
int32_t t112 = -16416519;
static volatile int8_t x465 = -1;
int8_t x468 = INT8_MIN;
int16_t x471 = INT16_MIN;
static uint32_t x472 = 15307U;
volatile int8_t x474 = INT8_MIN;
volatile uint32_t x475 = 124396449U;
static int32_t x477 = INT32_MAX;
uint64_t x479 = 111LLU;
int8_t x481 = -1;
uint8_t x486 = UINT8_MAX;
static int64_t x487 = INT64_MIN;
uint16_t x488 = 29U;
volatile int32_t t119 = -2158637;
volatile int8_t x496 = 1;
uint64_t x501 = 49457208827786117LLU;
volatile int64_t x502 = -64404361691LL;
uint64_t x509 = 117LLU;
int16_t x512 = -5477;
static int16_t x513 = 4;
uint64_t x517 = 16141157645233LLU;
uint8_t x531 = 2U;
volatile int32_t t129 = -257;
uint16_t x533 = 12U;
int8_t x535 = 1;
uint16_t x537 = 1104U;
int32_t t133 = 2771;
volatile uint8_t x549 = 6U;
int64_t x554 = INT64_MAX;
volatile int32_t x559 = 51;
static uint16_t x560 = UINT16_MAX;
volatile uint64_t x564 = 25741772233LLU;
static volatile uint32_t x565 = UINT32_MAX;
int32_t x574 = 31375;
volatile int32_t t140 = 107;
volatile uint16_t x577 = UINT16_MAX;
uint8_t x584 = UINT8_MAX;
int32_t t143 = 128;
int8_t x596 = 43;
static volatile int32_t t145 = 521701438;
uint32_t x598 = 414260U;
int32_t t146 = -20042326;
int32_t t147 = -90522;
int64_t x606 = INT64_MAX;
int32_t x612 = INT32_MIN;
int32_t x614 = -1;
static uint64_t x618 = UINT64_MAX;
int32_t x624 = -1;
volatile int16_t x635 = INT16_MIN;
static uint32_t x641 = 160527U;
int64_t x645 = INT64_MIN;
int64_t x646 = 326LL;
int64_t x647 = -1LL;
static uint64_t x651 = 8692673722937LLU;
int32_t t159 = -1;
static volatile int16_t x656 = INT16_MIN;
static int32_t t160 = -914405147;
uint8_t x667 = 9U;
static volatile int16_t x669 = -1;
static volatile int8_t x670 = INT8_MIN;
int32_t t167 = -22928121;
int16_t x687 = INT16_MIN;
uint16_t x691 = 20790U;
uint32_t x693 = 989485U;
static uint64_t x698 = 5255LLU;
int32_t x699 = -2215;
uint32_t x702 = UINT32_MAX;
int32_t x708 = INT32_MIN;
static int32_t x709 = 16163;
int32_t t174 = 190;
static int32_t t175 = 3759;
static int32_t t177 = -56822;
int16_t x731 = 66;
int32_t t180 = -32;
static int64_t x742 = 1505407846LL;
int32_t x743 = -417;
static volatile int32_t t182 = -2001;
static uint64_t x747 = 46588814480LLU;
int16_t x749 = INT16_MAX;
int8_t x763 = 21;
int32_t t186 = 19433049;
int8_t x768 = 1;
volatile int16_t x771 = INT16_MIN;
static int32_t t188 = 8455994;
volatile uint16_t x786 = 243U;
int64_t x791 = 12878LL;
int32_t t193 = -10899;
uint64_t x795 = 347089LLU;
volatile int16_t x798 = -692;
volatile int32_t x800 = INT32_MIN;
volatile int32_t t196 = 766547625;
static int32_t t197 = -20248602;
static uint8_t x809 = 5U;


void f0(void) {
    	int64_t x2 = -1LL;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = 89889229;

    t0 = (x1<=((x2/x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	volatile uint32_t x6 = 67935834U;
	static int16_t x7 = INT16_MIN;
	static volatile uint64_t x8 = 214157LLU;
	volatile int32_t t1 = -1;

    t1 = (x5<=((x6/x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -1LL;
	int32_t x11 = -92312;
	int16_t x12 = INT16_MAX;
	int32_t t2 = -5556;

    t2 = (x9<=((x10/x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 0;
	static int32_t x14 = INT32_MAX;
	int64_t x15 = -1LL;
	volatile int64_t x16 = INT64_MAX;

    t3 = (x13<=((x14/x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x19 = INT32_MIN;
	int64_t x20 = -460294401LL;
	volatile int32_t t4 = 1390530;

    t4 = (x17<=((x18/x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 1440487;
	uint8_t x26 = 0U;
	volatile uint8_t x27 = 2U;
	uint64_t x28 = 2781662330637770846LLU;
	volatile int32_t t5 = -536208613;

    t5 = (x25<=((x26/x27)==x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -129753646341400LL;
	int16_t x32 = -1;
	int32_t t6 = 263072;

    t6 = (x29<=((x30/x31)==x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = 93854;
	int64_t x34 = INT64_MAX;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = 7392;

    t7 = (x33<=((x34/x35)==x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x37 = -8;
	int16_t x39 = INT16_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t8 = -3229;

    t8 = (x37<=((x38/x39)==x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -74892LL;
	int64_t x42 = 6194LL;
	int16_t x43 = INT16_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -529461;

    t9 = (x41<=((x42/x43)==x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = 316;
	int64_t x47 = INT64_MIN;
	int16_t x48 = 19;
	static int32_t t10 = -4641;

    t10 = (x45<=((x46/x47)==x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x50 = INT32_MIN;
	static uint16_t x51 = UINT16_MAX;
	int16_t x52 = -4054;
	volatile int32_t t11 = 2306;

    t11 = (x49<=((x50/x51)==x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x53 = 1U;
	int32_t x54 = -1;
	static volatile uint8_t x55 = UINT8_MAX;
	int16_t x56 = -97;
	int32_t t12 = 224016;

    t12 = (x53<=((x54/x55)==x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x57 = INT8_MIN;
	int16_t x58 = 96;
	uint32_t x59 = 24996U;
	static volatile int32_t t13 = -15289;

    t13 = (x57<=((x58/x59)==x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile uint32_t x63 = 1456003700U;
	uint32_t x64 = 13340U;
	static volatile int32_t t14 = 3;

    t14 = (x61<=((x62/x63)==x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -1;
	static uint16_t x66 = 2801U;
	static int8_t x67 = INT8_MAX;
	static int8_t x68 = -1;
	static int32_t t15 = -759;

    t15 = (x65<=((x66/x67)==x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	static int32_t x70 = -3598;
	int64_t x71 = INT64_MIN;
	volatile int32_t t16 = 7829955;

    t16 = (x69<=((x70/x71)==x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 6339U;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 116157146486562721LLU;

    t17 = (x73<=((x74/x75)==x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = -1;
	static volatile int64_t x80 = 669369302799LL;
	volatile int32_t t18 = -87684;

    t18 = (x77<=((x78/x79)==x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x81 = INT16_MIN;
	int64_t x82 = 3LL;
	static int32_t x83 = -193498;
	static int8_t x84 = -1;
	volatile int32_t t19 = 3621026;

    t19 = (x81<=((x82/x83)==x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 1LLU;
	volatile uint8_t x87 = UINT8_MAX;
	static int64_t x88 = INT64_MAX;

    t20 = (x85<=((x86/x87)==x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	int8_t x92 = 1;

    t21 = (x89<=((x90/x91)==x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 1U;
	static int64_t x94 = 10464LL;
	volatile int16_t x95 = 12;
	volatile int32_t t22 = 461362;

    t22 = (x93<=((x94/x95)==x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 1563578U;
	static int8_t x98 = -7;
	int64_t x99 = INT64_MAX;
	static volatile int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -1;

    t23 = (x97<=((x98/x99)==x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = INT16_MIN;
	static int16_t x102 = -1;
	static int64_t x103 = -1837LL;
	int8_t x104 = -1;

    t24 = (x101<=((x102/x103)==x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	static volatile uint16_t x106 = 30156U;
	volatile int32_t x107 = -311;
	static uint64_t x108 = 207828219338354680LLU;

    t25 = (x105<=((x106/x107)==x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x109 = UINT16_MAX;
	static uint32_t x110 = 679814U;
	uint32_t x111 = UINT32_MAX;
	static uint32_t x112 = 14U;
	int32_t t26 = 24126033;

    t26 = (x109<=((x110/x111)==x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 15U;
	int32_t x114 = INT32_MAX;
	int64_t x115 = -1LL;
	volatile uint32_t x116 = 29961506U;
	int32_t t27 = -130261;

    t27 = (x113<=((x114/x115)==x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x118 = -6876039219158LL;
	int32_t x119 = INT32_MAX;
	int8_t x120 = 18;
	volatile int32_t t28 = 36844;

    t28 = (x117<=((x118/x119)==x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = -9;
	uint16_t x126 = UINT16_MAX;
	uint64_t x127 = 5346910LLU;
	volatile int32_t t29 = 8353;

    t29 = (x125<=((x126/x127)==x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x129 = 960163LL;
	int8_t x130 = 3;
	int8_t x131 = -12;
	static volatile int32_t t30 = -4;

    t30 = (x129<=((x130/x131)==x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MAX;
	int64_t x134 = 25LL;
	uint64_t x135 = 161208171328698722LLU;

    t31 = (x133<=((x134/x135)==x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x138 = INT32_MAX;
	static int64_t x139 = 41625194LL;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t32 = 1;

    t32 = (x137<=((x138/x139)==x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x142 = 7U;
	volatile int64_t x143 = INT64_MIN;
	volatile int32_t x144 = -1;
	int32_t t33 = 54013;

    t33 = (x141<=((x142/x143)==x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	uint32_t x147 = 5219U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 6132695;

    t34 = (x145<=((x146/x147)==x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = -1;
	uint64_t x150 = 172LLU;
	static int64_t x151 = -629486155748080534LL;
	int32_t x152 = INT32_MIN;

    t35 = (x149<=((x150/x151)==x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x153 = -1;
	volatile int64_t x155 = 2077848953974503607LL;
	int16_t x156 = -1;

    t36 = (x153<=((x154/x155)==x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x159 = INT32_MAX;
	uint32_t x160 = 4413U;
	int32_t t37 = -76653674;

    t37 = (x157<=((x158/x159)==x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 889578508;
	int16_t x162 = -1;

    t38 = (x161<=((x162/x163)==x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = -2451;
	volatile int32_t x167 = INT32_MAX;
	int32_t t39 = -243;

    t39 = (x165<=((x166/x167)==x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	int64_t x171 = -209331463695470LL;
	int8_t x172 = -2;

    t40 = (x169<=((x170/x171)==x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x173 = INT16_MIN;
	int8_t x175 = -7;
	int64_t x176 = -1LL;
	static volatile int32_t t41 = -6;

    t41 = (x173<=((x174/x175)==x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = 1;
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = -1LL;
	int8_t x180 = 31;
	volatile int32_t t42 = 50625;

    t42 = (x177<=((x178/x179)==x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x181 = -1;
	uint32_t x182 = 14115U;
	int64_t x183 = INT64_MIN;
	volatile int32_t t43 = -341795541;

    t43 = (x181<=((x182/x183)==x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x185 = UINT64_MAX;
	volatile int8_t x186 = INT8_MIN;
	volatile uint32_t x188 = 2779U;
	volatile int32_t t44 = -34729651;

    t44 = (x185<=((x186/x187)==x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x190 = INT8_MAX;
	int8_t x191 = -14;
	int32_t x192 = INT32_MAX;
	volatile int32_t t45 = 44945;

    t45 = (x189<=((x190/x191)==x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = 110;
	volatile int8_t x196 = -6;
	volatile int32_t t46 = -2;

    t46 = (x193<=((x194/x195)==x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MAX;
	int16_t x199 = INT16_MIN;
	volatile int32_t t47 = 45;

    t47 = (x197<=((x198/x199)==x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -811986517;
	int16_t x203 = 141;
	volatile int32_t t48 = 32726;

    t48 = (x201<=((x202/x203)==x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x205 = -1;
	uint32_t x206 = 12351U;
	int64_t x207 = -1LL;
	int64_t x208 = -179530456LL;
	int32_t t49 = -106024141;

    t49 = (x205<=((x206/x207)==x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = 256575103;
	int32_t t50 = 293;

    t50 = (x209<=((x210/x211)==x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = -1;
	int8_t x214 = INT8_MAX;
	uint64_t x215 = 212078908596240576LLU;
	int32_t t51 = -61;

    t51 = (x213<=((x214/x215)==x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x218 = -1;
	static volatile int32_t x219 = -1;
	volatile int64_t x220 = INT64_MAX;
	volatile int32_t t52 = 908257201;

    t52 = (x217<=((x218/x219)==x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = -3LL;
	int32_t x222 = INT32_MIN;
	volatile int64_t x223 = -1774LL;
	volatile int32_t t53 = 5807012;

    t53 = (x221<=((x222/x223)==x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x226 = -1;
	int32_t x227 = -12;
	int8_t x228 = INT8_MIN;
	volatile int32_t t54 = 671166327;

    t54 = (x225<=((x226/x227)==x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = -1;
	volatile int8_t x230 = INT8_MIN;
	int32_t x232 = INT32_MIN;

    t55 = (x229<=((x230/x231)==x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x234 = UINT16_MAX;
	int16_t x235 = -1;
	static volatile int64_t x236 = INT64_MAX;
	static volatile int32_t t56 = 574049;

    t56 = (x233<=((x234/x235)==x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MAX;
	int8_t x239 = -1;
	volatile int64_t x240 = -10108513313911LL;
	int32_t t57 = 0;

    t57 = (x237<=((x238/x239)==x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = 3;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 175347335U;
	static int32_t t58 = -1;

    t58 = (x241<=((x242/x243)==x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x245 = UINT16_MAX;
	uint8_t x246 = 11U;
	int32_t x247 = INT32_MAX;
	volatile int16_t x248 = -3845;
	static volatile int32_t t59 = -1203506;

    t59 = (x245<=((x246/x247)==x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x249 = INT16_MAX;
	volatile int16_t x250 = INT16_MAX;
	int16_t x251 = 578;
	uint8_t x252 = 50U;

    t60 = (x249<=((x250/x251)==x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -7452;
	volatile int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = UINT64_MAX;
	volatile int32_t t61 = 0;

    t61 = (x253<=((x254/x255)==x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x257 = 22916974LLU;
	int8_t x258 = INT8_MIN;
	int64_t x259 = -1LL;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int32_t t62 = -30;

    t62 = (x257<=((x258/x259)==x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	int32_t x264 = -1;

    t63 = (x261<=((x262/x263)==x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MAX;
	static int32_t x267 = -30526;
	int32_t x268 = -1;
	volatile int32_t t64 = -386304811;

    t64 = (x265<=((x266/x267)==x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x270 = 3U;
	int64_t x271 = INT64_MIN;
	int32_t t65 = 653938692;

    t65 = (x269<=((x270/x271)==x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x274 = INT16_MIN;
	int16_t x275 = 6712;
	volatile int32_t x276 = -1;
	volatile int32_t t66 = -7225;

    t66 = (x273<=((x274/x275)==x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x277 = 0U;
	uint64_t x280 = 1629110304LLU;
	int32_t t67 = 96;

    t67 = (x277<=((x278/x279)==x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x281 = 6901319488690926LLU;
	volatile uint8_t x282 = 1U;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t68 = -9466;

    t68 = (x281<=((x282/x283)==x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x285 = 1U;
	uint64_t x286 = 941044656LLU;
	uint32_t x288 = 13U;

    t69 = (x285<=((x286/x287)==x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	int8_t x290 = 3;
	int8_t x292 = 48;
	int32_t t70 = -2028;

    t70 = (x289<=((x290/x291)==x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = 4;
	static uint16_t x294 = 231U;
	static int16_t x295 = INT16_MIN;
	uint8_t x296 = 106U;
	int32_t t71 = -1;

    t71 = (x293<=((x294/x295)==x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MAX;
	static volatile int8_t x298 = -2;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t72 = 3858;

    t72 = (x297<=((x298/x299)==x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x301 = 2U;
	int8_t x303 = -1;
	int32_t t73 = 4;

    t73 = (x301<=((x302/x303)==x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	volatile int32_t x306 = INT32_MAX;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t74 = -16;

    t74 = (x305<=((x306/x307)==x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = -28;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t75 = -712731957;

    t75 = (x309<=((x310/x311)==x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = UINT32_MAX;
	static int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MIN;
	int16_t x316 = -1;

    t76 = (x313<=((x314/x315)==x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MIN;
	uint16_t x318 = 8U;
	static volatile int64_t x320 = INT64_MIN;
	int32_t t77 = -1;

    t77 = (x317<=((x318/x319)==x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = -121241;
	uint16_t x323 = 386U;
	volatile int16_t x324 = INT16_MIN;
	int32_t t78 = -52427831;

    t78 = (x321<=((x322/x323)==x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x326 = UINT32_MAX;
	int8_t x327 = INT8_MAX;
	static int64_t x328 = INT64_MIN;
	int32_t t79 = -3541;

    t79 = (x325<=((x326/x327)==x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x330 = -5;

    t80 = (x329<=((x330/x331)==x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	static int32_t x335 = 26;
	volatile int32_t t81 = 20105;

    t81 = (x333<=((x334/x335)==x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = 286;
	int32_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MIN;

    t82 = (x337<=((x338/x339)==x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = -1;
	int64_t x342 = INT64_MIN;
	static int32_t x343 = INT32_MIN;
	volatile uint64_t x344 = 135718328909101989LLU;
	int32_t t83 = -190;

    t83 = (x341<=((x342/x343)==x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = INT16_MIN;
	volatile int8_t x346 = -1;
	volatile int8_t x347 = -1;
	uint16_t x348 = UINT16_MAX;

    t84 = (x345<=((x346/x347)==x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x349 = 121U;
	uint32_t x350 = UINT32_MAX;
	static int16_t x351 = INT16_MIN;
	volatile int16_t x352 = INT16_MAX;
	int32_t t85 = -6020;

    t85 = (x349<=((x350/x351)==x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x353 = UINT16_MAX;
	int64_t x354 = -230299868881LL;
	int16_t x355 = -1;
	static int16_t x356 = -231;
	int32_t t86 = 71581;

    t86 = (x353<=((x354/x355)==x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 0U;
	int16_t x358 = -915;
	uint8_t x359 = 8U;
	volatile int32_t t87 = -42;

    t87 = (x357<=((x358/x359)==x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x362 = INT16_MIN;
	int16_t x363 = -720;
	int32_t x364 = INT32_MAX;

    t88 = (x361<=((x362/x363)==x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x366 = 16U;
	static int8_t x367 = -1;
	int64_t x368 = 12827733125669463LL;
	int32_t t89 = 2735413;

    t89 = (x365<=((x366/x367)==x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = INT8_MIN;
	uint16_t x370 = 3090U;
	uint8_t x372 = UINT8_MAX;

    t90 = (x369<=((x370/x371)==x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	int32_t t91 = -343693019;

    t91 = (x373<=((x374/x375)==x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = INT8_MIN;
	static int32_t x378 = INT32_MAX;
	uint8_t x380 = 17U;
	static int32_t t92 = 22002;

    t92 = (x377<=((x378/x379)==x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x382 = -37;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = 6967005;

    t93 = (x381<=((x382/x383)==x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x387 = -1;
	int32_t t94 = -1;

    t94 = (x385<=((x386/x387)==x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x389 = -1LL;
	uint16_t x390 = 400U;
	static int64_t x392 = -1976LL;
	static volatile int32_t t95 = -2412;

    t95 = (x389<=((x390/x391)==x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x394 = INT32_MAX;
	int16_t x395 = INT16_MIN;
	volatile int32_t x396 = 1;
	volatile int32_t t96 = 194;

    t96 = (x393<=((x394/x395)==x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x397 = -407018;
	static int64_t x398 = 4906928299LL;
	int16_t x399 = INT16_MAX;
	uint16_t x400 = 14U;
	int32_t t97 = -1474;

    t97 = (x397<=((x398/x399)==x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 86627U;
	int16_t x402 = INT16_MIN;
	uint64_t x403 = 1011344177332897LLU;
	int64_t x404 = INT64_MAX;
	volatile int32_t t98 = 13786;

    t98 = (x401<=((x402/x403)==x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = 5389480LLU;
	int64_t x407 = INT64_MAX;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t99 = -2705;

    t99 = (x405<=((x406/x407)==x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = 53317546LLU;
	static uint16_t x410 = UINT16_MAX;
	int32_t x412 = INT32_MAX;
	volatile int32_t t100 = -43728;

    t100 = (x409<=((x410/x411)==x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x413 = -4;
	int64_t x414 = -1LL;
	int32_t x415 = INT32_MIN;
	int32_t t101 = -361;

    t101 = (x413<=((x414/x415)==x416));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = UINT8_MAX;
	int32_t x418 = -1;
	static int64_t x419 = -100851934744LL;
	int64_t x420 = INT64_MIN;

    t102 = (x417<=((x418/x419)==x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x421 = 224886447LLU;
	volatile uint16_t x422 = 93U;
	volatile int64_t x423 = 856983187919238605LL;
	volatile int32_t t103 = 124952;

    t103 = (x421<=((x422/x423)==x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x425 = 25722U;
	int8_t x426 = INT8_MIN;
	int32_t x427 = -1;
	uint8_t x428 = 15U;

    t104 = (x425<=((x426/x427)==x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x430 = -59332;
	int32_t x431 = INT32_MIN;
	int16_t x432 = 0;
	int32_t t105 = 35419190;

    t105 = (x429<=((x430/x431)==x432));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x433 = 148U;
	int8_t x434 = 56;
	volatile int32_t t106 = 7861;

    t106 = (x433<=((x434/x435)==x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	static int16_t x439 = INT16_MAX;
	static int8_t x440 = INT8_MIN;
	static volatile int32_t t107 = -38955;

    t107 = (x437<=((x438/x439)==x440));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x441 = 1675176926U;
	uint16_t x443 = UINT16_MAX;
	uint8_t x444 = UINT8_MAX;
	int32_t t108 = -237668;

    t108 = (x441<=((x442/x443)==x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x446 = UINT16_MAX;
	int64_t x447 = INT64_MIN;
	int8_t x448 = -1;
	volatile int32_t t109 = 13674409;

    t109 = (x445<=((x446/x447)==x448));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MAX;
	volatile uint16_t x451 = 29053U;
	int64_t x452 = INT64_MIN;
	int32_t t110 = -13048313;

    t110 = (x449<=((x450/x451)==x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	int8_t x454 = 6;
	volatile int64_t x455 = -1LL;
	uint32_t x456 = 378199U;
	volatile int32_t t111 = 232647885;

    t111 = (x453<=((x454/x455)==x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x457 = 5U;
	int16_t x458 = INT16_MAX;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;

    t112 = (x457<=((x458/x459)==x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MIN;
	static int32_t x463 = INT32_MIN;
	int32_t x464 = -73926;
	volatile int32_t t113 = -5622;

    t113 = (x461<=((x462/x463)==x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MIN;
	int32_t t114 = 774;

    t114 = (x465<=((x466/x467)==x468));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x469 = INT8_MAX;
	int32_t x470 = 800;
	volatile int32_t t115 = -599;

    t115 = (x469<=((x470/x471)==x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x473 = UINT64_MAX;
	static int8_t x476 = -1;
	static volatile int32_t t116 = 54452;

    t116 = (x473<=((x474/x475)==x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x478 = INT8_MAX;
	int16_t x480 = -1;
	volatile int32_t t117 = -74;

    t117 = (x477<=((x478/x479)==x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x482 = 381389;
	int16_t x483 = -3392;
	int32_t x484 = 16318;
	volatile int32_t t118 = 19597;

    t118 = (x481<=((x482/x483)==x484));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = -1;

    t119 = (x485<=((x486/x487)==x488));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x493 = INT64_MAX;
	int64_t x494 = INT64_MAX;
	static int64_t x495 = -9LL;
	int32_t t120 = -23035236;

    t120 = (x493<=((x494/x495)==x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x497 = -1;
	static uint16_t x498 = 6939U;
	int16_t x499 = -695;
	static uint16_t x500 = 0U;
	static int32_t t121 = 129344929;

    t121 = (x497<=((x498/x499)==x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 741532U;
	volatile int32_t t122 = 393;

    t122 = (x501<=((x502/x503)==x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = 14463;
	int32_t x506 = INT32_MIN;
	int32_t x507 = INT32_MIN;
	static int32_t x508 = INT32_MAX;
	static volatile int32_t t123 = -64074;

    t123 = (x505<=((x506/x507)==x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x510 = INT8_MIN;
	uint16_t x511 = 14U;
	int32_t t124 = -6758822;

    t124 = (x509<=((x510/x511)==x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x514 = INT16_MAX;
	uint64_t x515 = UINT64_MAX;
	int16_t x516 = -1;
	static volatile int32_t t125 = 1;

    t125 = (x513<=((x514/x515)==x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x518 = 3213393335LLU;
	static int32_t x519 = INT32_MIN;
	volatile uint8_t x520 = 127U;
	int32_t t126 = -140026154;

    t126 = (x517<=((x518/x519)==x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x522 = -1LL;
	int64_t x523 = INT64_MAX;
	volatile uint16_t x524 = 7U;
	int32_t t127 = -119;

    t127 = (x521<=((x522/x523)==x524));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x525 = INT16_MAX;
	int64_t x526 = INT64_MIN;
	volatile uint8_t x527 = 24U;
	uint64_t x528 = UINT64_MAX;
	int32_t t128 = 13;

    t128 = (x525<=((x526/x527)==x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x529 = UINT16_MAX;
	static volatile uint8_t x530 = 97U;
	uint8_t x532 = 1U;

    t129 = (x529<=((x530/x531)==x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x534 = INT8_MIN;
	int32_t x536 = -1;
	int32_t t130 = -450267333;

    t130 = (x533<=((x534/x535)==x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x538 = UINT32_MAX;
	static volatile int16_t x539 = 876;
	int8_t x540 = -1;
	int32_t t131 = -302327130;

    t131 = (x537<=((x538/x539)==x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x541 = INT64_MIN;
	int16_t x542 = INT16_MIN;
	uint64_t x543 = UINT64_MAX;
	int64_t x544 = INT64_MIN;
	int32_t t132 = 780591;

    t132 = (x541<=((x542/x543)==x544));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x545 = UINT16_MAX;
	static int64_t x546 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	int64_t x548 = -1LL;

    t133 = (x545<=((x546/x547)==x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x550 = -4LL;
	static uint32_t x551 = UINT32_MAX;
	volatile int8_t x552 = INT8_MAX;
	volatile int32_t t134 = 148318031;

    t134 = (x549<=((x550/x551)==x552));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile int8_t x555 = -1;
	uint8_t x556 = 26U;
	volatile int32_t t135 = 2;

    t135 = (x553<=((x554/x555)==x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = -1;
	static volatile uint32_t x558 = UINT32_MAX;
	int32_t t136 = -34454;

    t136 = (x557<=((x558/x559)==x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x561 = INT32_MAX;
	int16_t x562 = INT16_MIN;
	int8_t x563 = -14;
	volatile int32_t t137 = 285389;

    t137 = (x561<=((x562/x563)==x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x566 = INT16_MAX;
	uint32_t x567 = UINT32_MAX;
	uint16_t x568 = 6U;
	static volatile int32_t t138 = 53412;

    t138 = (x565<=((x566/x567)==x568));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = INT32_MIN;
	volatile int16_t x570 = INT16_MIN;
	int64_t x571 = INT64_MAX;
	uint64_t x572 = 6950463LLU;
	int32_t t139 = -102;

    t139 = (x569<=((x570/x571)==x572));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = UINT64_MAX;
	static int8_t x575 = -1;
	uint32_t x576 = 6U;

    t140 = (x573<=((x574/x575)==x576));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x578 = UINT8_MAX;
	static int64_t x579 = -248193575367610786LL;
	uint64_t x580 = 948578118988270367LLU;
	volatile int32_t t141 = 58332047;

    t141 = (x577<=((x578/x579)==x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x581 = 1U;
	uint16_t x582 = 180U;
	static int16_t x583 = INT16_MIN;
	static int32_t t142 = 133832198;

    t142 = (x581<=((x582/x583)==x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = 6;
	uint32_t x586 = 29673981U;
	int64_t x587 = INT64_MIN;
	volatile uint64_t x588 = 47852LLU;

    t143 = (x585<=((x586/x587)==x588));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = INT32_MIN;
	int32_t x590 = -1;
	volatile int8_t x591 = INT8_MIN;
	static int8_t x592 = -1;
	volatile int32_t t144 = 9;

    t144 = (x589<=((x590/x591)==x592));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x593 = INT64_MIN;
	int32_t x594 = -35230;
	uint16_t x595 = UINT16_MAX;

    t145 = (x593<=((x594/x595)==x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x597 = UINT32_MAX;
	static int8_t x599 = INT8_MIN;
	int8_t x600 = -7;

    t146 = (x597<=((x598/x599)==x600));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x601 = 5U;
	int64_t x602 = 3339873LL;
	int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MIN;

    t147 = (x601<=((x602/x603)==x604));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x605 = -1;
	int8_t x607 = 50;
	uint8_t x608 = 9U;
	static volatile int32_t t148 = -29220;

    t148 = (x605<=((x606/x607)==x608));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 6U;
	uint16_t x610 = 14654U;
	int32_t x611 = -1;
	static int32_t t149 = 2790;

    t149 = (x609<=((x610/x611)==x612));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x615 = INT8_MIN;
	static int32_t x616 = 0;
	int32_t t150 = -1738;

    t150 = (x613<=((x614/x615)==x616));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = -1;
	int8_t x619 = INT8_MIN;
	int32_t x620 = -1;
	volatile int32_t t151 = 517202;

    t151 = (x617<=((x618/x619)==x620));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = INT8_MAX;
	volatile int8_t x622 = INT8_MIN;
	int64_t x623 = INT64_MAX;
	static volatile int32_t t152 = 35702346;

    t152 = (x621<=((x622/x623)==x624));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = 32397U;
	uint64_t x626 = 28614146883630LLU;
	static int64_t x627 = INT64_MIN;
	volatile int8_t x628 = INT8_MIN;
	volatile int32_t t153 = -212916;

    t153 = (x625<=((x626/x627)==x628));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x629 = 7U;
	uint8_t x630 = 61U;
	static int32_t x631 = INT32_MIN;
	volatile int16_t x632 = 18;
	volatile int32_t t154 = -15528208;

    t154 = (x629<=((x630/x631)==x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x633 = 1U;
	static int32_t x634 = INT32_MIN;
	uint64_t x636 = 26056945929LLU;
	volatile int32_t t155 = 32990;

    t155 = (x633<=((x634/x635)==x636));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = 662;
	static int64_t x638 = INT64_MIN;
	static int32_t x639 = 606;
	int8_t x640 = 2;
	static int32_t t156 = 4655;

    t156 = (x637<=((x638/x639)==x640));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x642 = 47U;
	int8_t x643 = 1;
	int64_t x644 = INT64_MIN;
	volatile int32_t t157 = 5;

    t157 = (x641<=((x642/x643)==x644));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x648 = -954550627051998LL;
	int32_t t158 = -1044861;

    t158 = (x645<=((x646/x647)==x648));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x649 = 1369771U;
	int16_t x650 = 0;
	volatile int16_t x652 = INT16_MIN;

    t159 = (x649<=((x650/x651)==x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MAX;
	volatile uint8_t x655 = 6U;

    t160 = (x653<=((x654/x655)==x656));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x657 = INT32_MAX;
	uint16_t x658 = 47U;
	uint8_t x659 = UINT8_MAX;
	int8_t x660 = -1;
	int32_t t161 = 43;

    t161 = (x657<=((x658/x659)==x660));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = INT64_MIN;
	volatile int64_t x662 = 3223LL;
	uint8_t x663 = 4U;
	int32_t x664 = -216;
	int32_t t162 = 87005;

    t162 = (x661<=((x662/x663)==x664));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = -115748;
	int64_t x666 = INT64_MAX;
	int64_t x668 = INT64_MIN;
	volatile int32_t t163 = -1;

    t163 = (x665<=((x666/x667)==x668));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x671 = INT16_MIN;
	int16_t x672 = INT16_MAX;
	volatile int32_t t164 = -62;

    t164 = (x669<=((x670/x671)==x672));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x673 = INT8_MIN;
	int32_t x674 = INT32_MIN;
	static int32_t x675 = 2631032;
	uint32_t x676 = 65487U;
	int32_t t165 = -151998;

    t165 = (x673<=((x674/x675)==x676));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x677 = INT16_MAX;
	uint8_t x678 = 6U;
	int32_t x679 = -1;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t166 = 14586858;

    t166 = (x677<=((x678/x679)==x680));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x681 = INT8_MIN;
	uint32_t x682 = 521894268U;
	uint16_t x683 = UINT16_MAX;
	int64_t x684 = 23LL;

    t167 = (x681<=((x682/x683)==x684));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x685 = -1;
	static volatile uint32_t x686 = UINT32_MAX;
	int16_t x688 = INT16_MIN;
	volatile int32_t t168 = 85649;

    t168 = (x685<=((x686/x687)==x688));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = -198;
	uint64_t x690 = 924253753684718841LLU;
	volatile int8_t x692 = -1;
	int32_t t169 = 41043;

    t169 = (x689<=((x690/x691)==x692));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x694 = -1;
	volatile int32_t x695 = INT32_MAX;
	static uint64_t x696 = 226397508207943346LLU;
	volatile int32_t t170 = 1;

    t170 = (x693<=((x694/x695)==x696));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x697 = INT32_MIN;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t171 = 768941;

    t171 = (x697<=((x698/x699)==x700));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x701 = UINT16_MAX;
	int8_t x703 = 1;
	volatile uint64_t x704 = 0LLU;
	volatile int32_t t172 = -2;

    t172 = (x701<=((x702/x703)==x704));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x705 = 298009973947263LL;
	int32_t x706 = INT32_MAX;
	uint8_t x707 = UINT8_MAX;
	int32_t t173 = 234303760;

    t173 = (x705<=((x706/x707)==x708));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x710 = INT16_MIN;
	int64_t x711 = -252499085130286395LL;
	static int32_t x712 = INT32_MIN;

    t174 = (x709<=((x710/x711)==x712));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x713 = 110LLU;
	int32_t x714 = -1;
	uint16_t x715 = 1036U;
	static uint16_t x716 = 26U;

    t175 = (x713<=((x714/x715)==x716));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x717 = -1LL;
	uint8_t x718 = 20U;
	static uint16_t x719 = UINT16_MAX;
	int64_t x720 = INT64_MAX;
	static volatile int32_t t176 = 85;

    t176 = (x717<=((x718/x719)==x720));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x722 = -1;
	static int64_t x723 = INT64_MIN;
	uint64_t x724 = 5582869LLU;

    t177 = (x721<=((x722/x723)==x724));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x725 = 110U;
	int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MAX;
	static int64_t x728 = -484438974797493620LL;
	static int32_t t178 = 499506647;

    t178 = (x725<=((x726/x727)==x728));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x729 = 7U;
	volatile int16_t x730 = INT16_MIN;
	int8_t x732 = -1;
	volatile int32_t t179 = 2;

    t179 = (x729<=((x730/x731)==x732));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x733 = INT32_MIN;
	int8_t x734 = INT8_MIN;
	static volatile int8_t x735 = INT8_MIN;
	int16_t x736 = INT16_MIN;

    t180 = (x733<=((x734/x735)==x736));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x737 = -1;
	static int64_t x738 = INT64_MAX;
	int64_t x739 = INT64_MIN;
	volatile uint8_t x740 = 2U;
	int32_t t181 = 36;

    t181 = (x737<=((x738/x739)==x740));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x741 = -1;
	int32_t x744 = INT32_MIN;

    t182 = (x741<=((x742/x743)==x744));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x745 = UINT32_MAX;
	int8_t x746 = 7;
	int16_t x748 = 1;
	volatile int32_t t183 = -66899;

    t183 = (x745<=((x746/x747)==x748));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x750 = -1LL;
	int16_t x751 = INT16_MIN;
	volatile int16_t x752 = INT16_MAX;
	int32_t t184 = -2;

    t184 = (x749<=((x750/x751)==x752));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x757 = -1395214101085467LL;
	int32_t x758 = -1;
	int32_t x759 = 7;
	int8_t x760 = 0;
	int32_t t185 = 0;

    t185 = (x757<=((x758/x759)==x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x761 = 6033U;
	int32_t x762 = 374648504;
	int16_t x764 = -1;

    t186 = (x761<=((x762/x763)==x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x765 = INT32_MIN;
	uint32_t x766 = 843452026U;
	uint64_t x767 = 340298LLU;
	int32_t t187 = 73838385;

    t187 = (x765<=((x766/x767)==x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x769 = 454U;
	volatile int16_t x770 = INT16_MIN;
	uint32_t x772 = 14U;

    t188 = (x769<=((x770/x771)==x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x773 = -1LL;
	int64_t x774 = INT64_MIN;
	volatile uint32_t x775 = 24821U;
	int64_t x776 = INT64_MIN;
	int32_t t189 = -36;

    t189 = (x773<=((x774/x775)==x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x777 = -15965771LL;
	static int8_t x778 = INT8_MIN;
	int8_t x779 = 19;
	uint8_t x780 = UINT8_MAX;
	static int32_t t190 = 0;

    t190 = (x777<=((x778/x779)==x780));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x781 = -1;
	uint32_t x782 = 35333368U;
	int32_t x783 = -349;
	uint64_t x784 = 67385797446215LLU;
	int32_t t191 = -130241;

    t191 = (x781<=((x782/x783)==x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = -39;
	int32_t x787 = -1;
	int64_t x788 = -383537876382943913LL;
	volatile int32_t t192 = 47;

    t192 = (x785<=((x786/x787)==x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x790 = -1;
	int64_t x792 = INT64_MAX;

    t193 = (x789<=((x790/x791)==x792));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x793 = 10LL;
	int8_t x794 = -1;
	static int8_t x796 = INT8_MAX;
	int32_t t194 = 713609;

    t194 = (x793<=((x794/x795)==x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x797 = INT16_MIN;
	int8_t x799 = INT8_MAX;
	int32_t t195 = 14330;

    t195 = (x797<=((x798/x799)==x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = INT8_MIN;
	static volatile int8_t x802 = INT8_MAX;
	uint8_t x803 = UINT8_MAX;
	int64_t x804 = INT64_MIN;

    t196 = (x801<=((x802/x803)==x804));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x805 = -1;
	volatile int32_t x806 = INT32_MIN;
	volatile int64_t x807 = 919554067620825LL;
	int32_t x808 = INT32_MIN;

    t197 = (x805<=((x806/x807)==x808));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x810 = INT8_MIN;
	int64_t x811 = INT64_MAX;
	int8_t x812 = -1;
	static int32_t t198 = 7019551;

    t198 = (x809<=((x810/x811)==x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x813 = -1;
	int16_t x814 = INT16_MIN;
	uint32_t x815 = UINT32_MAX;
	int64_t x816 = INT64_MAX;
	volatile int32_t t199 = -13963;

    t199 = (x813<=((x814/x815)==x816));

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

