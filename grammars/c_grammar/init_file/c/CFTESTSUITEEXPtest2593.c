
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
int16_t x17 = INT16_MAX;
int64_t x18 = INT64_MIN;
uint8_t x25 = UINT8_MAX;
int8_t x28 = 5;
uint16_t x35 = 117U;
volatile int8_t x38 = 16;
int64_t x40 = 15196403356557961LL;
static int16_t x47 = -692;
volatile int64_t x59 = 6840231154LL;
int64_t t13 = 10964117117442LL;
int64_t t17 = -7LL;
int32_t x85 = -1;
static uint16_t x90 = 427U;
static int64_t x96 = INT64_MAX;
static int16_t x98 = INT16_MIN;
uint32_t x104 = UINT32_MAX;
volatile uint64_t t23 = 272810LLU;
int8_t x105 = INT8_MIN;
int32_t t24 = -2;
int8_t x131 = -1;
volatile uint32_t t28 = 927940234U;
int16_t x136 = 2876;
uint16_t x137 = UINT16_MAX;
volatile int32_t x147 = 98293;
int32_t x151 = -527218634;
uint64_t x157 = 4336793LLU;
volatile uint64_t t34 = 85984LLU;
static int16_t x161 = INT16_MIN;
int64_t x163 = -1LL;
static int8_t x164 = INT8_MIN;
uint8_t x183 = 0U;
static int8_t x192 = -1;
volatile uint8_t x201 = 3U;
volatile int32_t x227 = -1;
int64_t x235 = -1LL;
int16_t x240 = -4;
int64_t x242 = -1LL;
uint64_t t51 = 31781239434259LLU;
static volatile int16_t x253 = -1;
static int64_t x256 = INT64_MIN;
int64_t x259 = INT64_MIN;
static int64_t x260 = INT64_MIN;
int64_t t54 = 148697LL;
int64_t t56 = 134651267731LL;
uint8_t x281 = 125U;
static volatile int32_t t63 = -32;
volatile uint32_t x311 = 1339872048U;
int16_t x312 = -1;
int8_t x314 = 1;
uint8_t x317 = UINT8_MAX;
static volatile int32_t t67 = -2;
static int32_t x323 = -18927;
uint16_t x324 = 11U;
int8_t x337 = INT8_MAX;
static int32_t x339 = INT32_MAX;
int8_t x340 = INT8_MAX;
int16_t x347 = -1;
int16_t x352 = INT16_MIN;
int8_t x353 = INT8_MIN;
uint8_t x355 = 26U;
int32_t x362 = 0;
static int8_t x372 = -1;
int8_t x408 = INT8_MIN;
volatile int16_t x411 = INT16_MIN;
uint32_t x412 = 68U;
volatile uint64_t t85 = 0LLU;
volatile int8_t x419 = -31;
int32_t t86 = -47475968;
static int32_t x422 = -1;
static volatile int32_t x424 = INT32_MAX;
int8_t x433 = INT8_MAX;
int8_t x435 = INT8_MAX;
static int32_t x454 = INT32_MIN;
uint8_t x459 = UINT8_MAX;
int32_t t93 = 6327036;
volatile int64_t t94 = -16010290LL;
int64_t x470 = -1LL;
int8_t x471 = INT8_MIN;
int32_t x479 = INT32_MIN;
volatile int32_t x481 = 0;
int8_t x483 = -5;
static int32_t x484 = INT32_MIN;
int64_t x512 = INT64_MIN;
uint32_t x513 = 183U;
volatile uint64_t t107 = 13LLU;
int32_t x528 = INT32_MAX;
static int32_t x530 = -185471;
volatile int16_t x534 = -482;
uint16_t x536 = UINT16_MAX;
int8_t x539 = -1;
uint32_t x550 = 884U;
int8_t x552 = INT8_MIN;
int8_t x557 = INT8_MAX;
uint64_t t116 = 3244388841889LLU;
uint64_t t117 = 11124564LLU;
static volatile uint32_t x574 = 480640796U;
volatile int16_t x578 = 3410;
uint64_t x582 = UINT64_MAX;
volatile uint64_t t121 = 216991893337181LLU;
int8_t x586 = -1;
int64_t x589 = 5LL;
int32_t x591 = -174;
int64_t x592 = INT64_MAX;
int8_t x598 = INT8_MIN;
uint32_t t124 = 962238U;
static int64_t x602 = INT64_MIN;
volatile int16_t x603 = INT16_MIN;
static int64_t x606 = 26872LL;
uint8_t x610 = 4U;
int16_t x612 = INT16_MIN;
int64_t x616 = INT64_MAX;
uint16_t x620 = 1U;
uint16_t x625 = UINT16_MAX;
int16_t x627 = INT16_MIN;
volatile uint64_t t131 = 39604869LLU;
int16_t x636 = -1;
static int64_t x640 = INT64_MIN;
uint16_t x642 = 30U;
int64_t t136 = 5508LL;
volatile uint32_t t138 = 18733U;
static uint64_t x675 = 44641875114180LLU;
uint8_t x682 = 26U;
uint32_t x684 = 1913344U;
static int16_t x693 = 0;
static int16_t x699 = INT16_MAX;
volatile int16_t x702 = -1;
static int64_t t148 = 1718572730152LL;
static int16_t x709 = INT16_MAX;
uint8_t x710 = 99U;
int32_t x711 = -1;
uint64_t x716 = UINT64_MAX;
static volatile uint32_t t151 = 1029619U;
static uint64_t x724 = UINT64_MAX;
int64_t x730 = INT64_MAX;
volatile uint64_t t154 = 301LLU;
int64_t x755 = -511LL;
static uint8_t x768 = 104U;
volatile int32_t x780 = 30;
uint16_t x783 = UINT16_MAX;
int32_t x786 = 1;
volatile uint16_t x788 = UINT16_MAX;
int64_t x795 = -46LL;
int32_t x797 = INT32_MIN;
static int64_t x798 = -17787LL;
int8_t x800 = 1;
static int64_t t168 = 145519207160932LL;
uint32_t t169 = 228844U;
volatile int64_t x812 = -2207042914LL;
int8_t x823 = 1;
int8_t x829 = INT8_MIN;
int64_t t179 = -289739LL;
static uint32_t x855 = 349U;
int16_t x856 = INT16_MIN;
int32_t x860 = -1788320;
static int32_t t181 = 5;
static int8_t x864 = 6;
uint32_t t182 = 2168U;
int64_t t183 = -752805181LL;
volatile int16_t x873 = -1321;
int32_t x874 = INT32_MIN;
int32_t x876 = INT32_MIN;
static int64_t x884 = -39112301441539LL;
static int64_t t187 = 121916442828LL;
uint8_t x897 = UINT8_MAX;
int8_t x901 = -1;
int16_t x905 = 333;
int8_t x910 = INT8_MIN;
uint16_t x914 = 29032U;
static uint32_t x915 = 4908U;
int64_t x926 = 12656874LL;
static volatile int16_t x929 = -1;


void f0(void) {
    	int16_t x1 = -1;
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = -1;
	int32_t t0 = 121648843;

    t0 = (x1*((x2^x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 338;
	static volatile int32_t x6 = -1;
	int16_t x7 = -1;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 94357212;

    t1 = (x5*((x6^x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	static uint8_t x12 = 115U;
	static volatile uint32_t t2 = 5U;

    t2 = (x9*((x10^x11)/x12));

    if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	int16_t x15 = INT16_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile uint64_t t3 = 1993075089896555LLU;

    t3 = (x13*((x14^x15)/x16));

    if (t3 != 128LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x19 = INT16_MAX;
	static volatile int32_t x20 = INT32_MIN;
	int64_t t4 = 1184LL;

    t4 = (x17*((x18^x19)/x20));

    if (t4 != 140733193355265LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 12;
	volatile int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -7;
	static volatile int32_t t5 = -1;

    t5 = (x21*((x22^x23)/x24));

    if (t5 != -216) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = 29;
	volatile uint16_t x27 = 26588U;
	volatile int32_t t6 = 0;

    t6 = (x25*((x26^x27)/x28));

    if (t6 != 1354560) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -7426824;
	uint8_t x30 = 2U;
	static volatile uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	static volatile uint32_t t7 = 2345747U;

    t7 = (x29*((x30^x31)/x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 1485LLU;
	int16_t x34 = INT16_MIN;
	volatile uint8_t x36 = 59U;
	static uint64_t t8 = 3468998563470930LLU;

    t8 = (x33*((x34^x35)/x36));

    if (t8 != 18446744073708730411LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 15831U;
	int64_t x39 = 540776985310LL;
	int64_t t9 = 8122LL;

    t9 = (x37*((x38^x39)/x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int64_t x42 = INT64_MIN;
	int16_t x43 = 17;
	volatile int32_t x44 = -126233418;
	static volatile int64_t t10 = -57326770LL;

    t10 = (x41*((x42^x43)/x44));

    if (t10 != -73066008850LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x46 = 1;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -64162048;

    t11 = (x45*((x46^x47)/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = UINT32_MAX;
	uint32_t t12 = 7275U;

    t12 = (x53*((x54^x55)/x56));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -96LL;
	static int64_t x58 = -1LL;
	int64_t x60 = -47979492714LL;

    t13 = (x57*((x58^x59)/x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = 5U;
	static volatile int16_t x66 = INT16_MAX;
	uint64_t x67 = 589780577219LLU;
	int16_t x68 = -287;
	static uint64_t t14 = 1456167797200933373LLU;

    t14 = (x65*((x66^x67)/x68));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MAX;
	uint32_t x70 = 65297582U;
	static uint8_t x71 = 1U;
	static int8_t x72 = INT8_MIN;
	volatile uint32_t t15 = 1944U;

    t15 = (x69*((x70^x71)/x72));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = -1;
	static int64_t x74 = -4412229218LL;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;
	volatile int64_t t16 = -16128584288224LL;

    t16 = (x73*((x74^x75)/x76));

    if (t16 != 34470540LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -52125609LL;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 17U;
	int32_t x80 = 12574653;

    t17 = (x77*((x78^x79)/x80));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = 0;
	int64_t x82 = -1232897925LL;
	int16_t x83 = -377;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t18 = -2027204330080624939LL;

    t18 = (x81*((x82^x83)/x84));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	static int64_t x88 = -1980LL;
	int64_t t19 = 1814961426953799LL;

    t19 = (x85*((x86^x87)/x88));

    if (t19 != 1084571LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 54;
	static volatile int16_t x91 = INT16_MIN;
	static uint8_t x92 = 1U;
	static volatile int32_t t20 = 9738;

    t20 = (x89*((x90^x91)/x92));

    if (t20 != -1746414) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MAX;
	static uint8_t x94 = 11U;
	uint8_t x95 = 1U;
	static volatile int64_t t21 = 40LL;

    t21 = (x93*((x94^x95)/x96));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 1U;
	volatile int8_t x99 = 1;
	int64_t x100 = -1LL;
	int64_t t22 = -165374LL;

    t22 = (x97*((x98^x99)/x100));

    if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x101 = INT64_MIN;
	int32_t x102 = -1;
	static uint64_t x103 = 1386528473659015LLU;

    t23 = (x101*((x102^x103)/x104));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;

    t24 = (x105*((x106^x107)/x108));

    if (t24 != -16384) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x113 = 6;
	int8_t x114 = -1;
	uint32_t x115 = 133721242U;
	volatile int16_t x116 = INT16_MAX;
	uint32_t t25 = 13020U;

    t25 = (x113*((x114^x115)/x116));

    if (t25 != 761970U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = 4020430699544109157LLU;
	static volatile uint16_t x118 = UINT16_MAX;
	int32_t x119 = 12113;
	int32_t x120 = -18;
	uint64_t t26 = 6LLU;

    t26 = (x117*((x118^x119)/x120));

    if (t26 != 6425530142708026733LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = 0U;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = -3387LL;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t27 = 4363217921LLU;

    t27 = (x121*((x122^x123)/x124));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x129 = INT8_MAX;
	int16_t x130 = -1;
	uint32_t x132 = UINT32_MAX;

    t28 = (x129*((x130^x131)/x132));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = 1U;
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = INT16_MIN;
	volatile uint32_t t29 = 1909561U;

    t29 = (x133*((x134^x135)/x136));

    if (t29 != 4294967285U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x138 = 98;
	static volatile int16_t x139 = INT16_MIN;
	uint64_t x140 = 8183532128660352LLU;
	uint64_t t30 = 2306448617017LLU;

    t30 = (x137*((x138^x139)/x140));

    if (t30 != 147715890LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x145 = -9614579230058076LL;
	int64_t x146 = 681992865726058LL;
	volatile int64_t x148 = INT64_MAX;
	volatile int64_t t31 = 200168647197364LL;

    t31 = (x145*((x146^x147)/x148));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x149 = 516U;
	int32_t x150 = 2222;
	volatile int8_t x152 = INT8_MIN;
	uint32_t t32 = 54802U;

    t32 = (x149*((x150^x151)/x152));

    if (t32 != 2125357560U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x153 = 5830779336312391LLU;
	static volatile uint32_t x154 = 186309U;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 3LLU;
	uint64_t t33 = 685000160641874LLU;

    t33 = (x153*((x154^x155)/x156));

    if (t33 != 12683806917334831585LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x158 = -1734177;
	volatile uint8_t x159 = 0U;
	int16_t x160 = INT16_MAX;

    t34 = (x157*((x158^x159)/x160));

    if (t34 != 18446744073484038380LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x162 = 23219384186826LL;
	int64_t t35 = -2LL;

    t35 = (x161*((x162^x163)/x164));

    if (t35 != -5944162351808512LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = -1;
	int8_t x166 = -1;
	static uint8_t x167 = 20U;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t36 = -2;

    t36 = (x165*((x166^x167)/x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = 15489157486LLU;
	uint64_t x174 = 35409946408350LLU;
	static uint64_t x175 = UINT64_MAX;
	int8_t x176 = INT8_MAX;
	volatile uint64_t t37 = 34506181740210902LLU;

    t37 = (x173*((x174^x175)/x176));

    if (t37 != 15740578050425204990LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x177 = -1;
	int8_t x178 = INT8_MAX;
	volatile int8_t x179 = -35;
	int16_t x180 = -1708;
	static int32_t t38 = -246616352;

    t38 = (x177*((x178^x179)/x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x181 = UINT8_MAX;
	uint16_t x182 = 49U;
	int64_t x184 = INT64_MIN;
	int64_t t39 = 457620308977LL;

    t39 = (x181*((x182^x183)/x184));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = -1;
	uint64_t x186 = 3755442540380181LLU;
	static int8_t x187 = -1;
	int16_t x188 = INT16_MIN;
	uint64_t t40 = 77611LLU;

    t40 = (x185*((x186^x187)/x188));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = INT32_MIN;
	static uint32_t x190 = 1717540U;
	static int16_t x191 = INT16_MAX;
	uint32_t t41 = 3874U;

    t41 = (x189*((x190^x191)/x192));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 998699LL;
	volatile uint32_t x194 = 12698874U;
	int32_t x195 = -1;
	uint64_t x196 = 15341LLU;
	volatile uint64_t t42 = 6721515870165LLU;

    t42 = (x193*((x194^x195)/x196));

    if (t42 != 278774841462LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x197 = INT16_MIN;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = INT64_MAX;
	volatile int64_t t43 = -185276884559LL;

    t43 = (x197*((x198^x199)/x200));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x202 = 3376221981703LLU;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = 1604;
	uint64_t t44 = 8793727663510921LLU;

    t44 = (x201*((x202^x203)/x204));

    if (t44 != 6321249828LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = 26;
	uint16_t x214 = 17730U;
	volatile int64_t x215 = -1LL;
	volatile uint8_t x216 = 1U;
	volatile int64_t t45 = -963LL;

    t45 = (x213*((x214^x215)/x216));

    if (t45 != -461006LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	volatile int8_t x218 = -1;
	int8_t x219 = 3;
	uint16_t x220 = UINT16_MAX;
	uint64_t t46 = 11806490LLU;

    t46 = (x217*((x218^x219)/x220));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = 627312448LLU;
	int64_t x226 = -1LL;
	int16_t x228 = INT16_MAX;
	volatile uint64_t t47 = 450146LLU;

    t47 = (x225*((x226^x227)/x228));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x233 = 0;
	volatile int8_t x234 = 4;
	uint16_t x236 = UINT16_MAX;
	int64_t t48 = -17533285427324LL;

    t48 = (x233*((x234^x235)/x236));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x237 = 166U;
	uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 57362248835LLU;
	uint64_t t49 = 2004982620731868140LLU;

    t49 = (x237*((x238^x239)/x240));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x241 = INT8_MIN;
	int16_t x243 = 10442;
	volatile int16_t x244 = 1129;
	int64_t t50 = -3261617350LL;

    t50 = (x241*((x242^x243)/x244));

    if (t50 != 1152LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x245 = INT8_MIN;
	static int16_t x246 = -1;
	volatile uint64_t x247 = 71669715237595105LLU;
	int64_t x248 = -1LL;

    t51 = (x245*((x246^x247)/x248));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x249 = -55LL;
	int16_t x250 = INT16_MAX;
	uint16_t x251 = UINT16_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t52 = 126823LL;

    t52 = (x249*((x250^x251)/x252));

    if (t52 != -7040LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x254 = 5746933642057LLU;
	int64_t x255 = INT64_MIN;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (x253*((x254^x255)/x256));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = -2077;
	static int32_t x258 = -29840;

    t54 = (x257*((x258^x259)/x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x265 = 6U;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = 0U;
	int32_t x268 = INT32_MAX;
	int64_t t55 = -4176LL;

    t55 = (x265*((x266^x267)/x268));

    if (t55 != -25769803788LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;

    t56 = (x269*((x270^x271)/x272));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;
	static uint8_t x276 = 3U;
	int64_t t57 = 425787627829955468LL;

    t57 = (x273*((x274^x275)/x276));

    if (t57 != -3074457344902430720LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x277 = INT64_MIN;
	uint8_t x278 = 37U;
	uint32_t x279 = 8U;
	volatile int8_t x280 = INT8_MAX;
	static int64_t t58 = -311LL;

    t58 = (x277*((x278^x279)/x280));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x282 = -1;
	int8_t x283 = 26;
	int32_t x284 = -1;
	int32_t t59 = 35199657;

    t59 = (x281*((x282^x283)/x284));

    if (t59 != 3375) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x285 = 24482U;
	int8_t x286 = INT8_MAX;
	int8_t x287 = 0;
	int64_t x288 = 483716215111LL;
	static volatile int64_t t60 = 7668LL;

    t60 = (x285*((x286^x287)/x288));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x289 = INT32_MIN;
	volatile int8_t x290 = INT8_MIN;
	uint64_t x291 = 32083731130LLU;
	static int8_t x292 = 63;
	static volatile uint64_t t61 = 3LLU;

    t61 = (x289*((x290^x291)/x292));

    if (t61 != 508028570224820224LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = INT16_MAX;
	uint8_t x294 = 1U;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	static int32_t t62 = 18010105;

    t62 = (x293*((x294^x295)/x296));

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	uint16_t x299 = 10U;
	int32_t x300 = -808420013;

    t63 = (x297*((x298^x299)/x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x305 = 51689;
	int16_t x306 = -1;
	uint32_t x307 = 62U;
	static int8_t x308 = 1;
	volatile uint32_t t64 = 345U;

    t64 = (x305*((x306^x307)/x308));

    if (t64 != 4291710889U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -4080134111162LL;
	volatile uint64_t x310 = 2245LLU;
	volatile uint64_t t65 = 3320LLU;

    t65 = (x309*((x310^x311)/x312));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x313 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	int64_t x316 = -33470839LL;
	volatile int64_t t66 = 2580219LL;

    t66 = (x313*((x314^x315)/x316));

    if (t66 != -8192LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x318 = INT32_MIN;
	volatile int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MIN;

    t67 = (x317*((x318^x319)/x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	static volatile uint64_t t68 = 2055030LLU;

    t68 = (x321*((x322^x323)/x324));

    if (t68 != 18446744073709549896LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x325 = INT32_MIN;
	uint64_t x326 = 31LLU;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = -1;
	uint64_t t69 = 50716932033271051LLU;

    t69 = (x325*((x326^x327)/x328));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x329 = 20;
	int32_t x330 = -1;
	int64_t x331 = INT64_MAX;
	int64_t x332 = 63LL;
	volatile int64_t t70 = 34759390633270337LL;

    t70 = (x329*((x330^x331)/x332));

    if (t70 != -2928054614874532000LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x338 = INT32_MAX;
	int32_t t71 = 112;

    t71 = (x337*((x338^x339)/x340));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = INT16_MAX;
	static uint16_t x346 = 0U;
	static int16_t x348 = -3;
	int32_t t72 = -121964154;

    t72 = (x345*((x346^x347)/x348));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x349 = INT64_MIN;
	volatile uint32_t x350 = UINT32_MAX;
	int8_t x351 = -8;
	int64_t t73 = 111LL;

    t73 = (x349*((x350^x351)/x352));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x354 = 25U;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t74 = 4091;

    t74 = (x353*((x354^x355)/x356));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x357 = 8988U;
	int8_t x358 = INT8_MIN;
	int16_t x359 = -3;
	volatile int32_t x360 = -3964;
	volatile uint32_t t75 = 772692053U;

    t75 = (x357*((x358^x359)/x360));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x361 = 0LL;
	int32_t x363 = INT32_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	int64_t t76 = 17923208LL;

    t76 = (x361*((x362^x363)/x364));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x369 = INT8_MAX;
	volatile uint16_t x370 = 102U;
	int8_t x371 = INT8_MIN;
	volatile int32_t t77 = -2;

    t77 = (x369*((x370^x371)/x372));

    if (t77 != 3302) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x373 = INT8_MIN;
	uint32_t x374 = 49U;
	uint32_t x375 = 35276588U;
	static volatile int16_t x376 = INT16_MIN;
	uint32_t t78 = 835116U;

    t78 = (x373*((x374^x375)/x376));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x381 = INT32_MAX;
	static int16_t x382 = 2;
	uint16_t x383 = 0U;
	int16_t x384 = INT16_MIN;
	int32_t t79 = 90524;

    t79 = (x381*((x382^x383)/x384));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	uint64_t t80 = 2854133430733517936LLU;

    t80 = (x385*((x386^x387)/x388));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x389 = UINT64_MAX;
	int32_t x390 = -6;
	volatile uint16_t x391 = 2024U;
	uint8_t x392 = UINT8_MAX;
	volatile uint64_t t81 = 2850493806371549LLU;

    t81 = (x389*((x390^x391)/x392));

    if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MAX;
	volatile int32_t x395 = -1;
	int8_t x396 = 23;
	int32_t t82 = -3;

    t82 = (x393*((x394^x395)/x396));

    if (t82 != -1275) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x405 = 120U;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -134978754474739549LL;
	volatile int64_t t83 = -1341269138LL;

    t83 = (x405*((x406^x407)/x408));

    if (t83 != -8520368702231283960LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x409 = 11;
	uint16_t x410 = 23U;
	volatile uint32_t t84 = 504659942U;

    t84 = (x409*((x410^x411)/x412));

    if (t84 != 694768822U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x413 = 26320U;
	uint64_t x414 = UINT64_MAX;
	static uint32_t x415 = 0U;
	int64_t x416 = INT64_MIN;

    t85 = (x413*((x414^x415)/x416));

    if (t85 != 26320LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x417 = INT8_MAX;
	static int32_t x418 = -974687;
	static int8_t x420 = -6;

    t86 = (x417*((x418^x419)/x420));

    if (t86 != -20630134) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x421 = 0U;
	static uint8_t x423 = 0U;
	int32_t t87 = -3;

    t87 = (x421*((x422^x423)/x424));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x429 = INT32_MIN;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = 99855884;
	int16_t x432 = -12;
	volatile uint64_t t88 = 20745LLU;

    t88 = (x429*((x430^x431)/x432));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x434 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t89 = 3407;

    t89 = (x433*((x434^x435)/x436));

    if (t89 != 32385) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x441 = -1;
	int32_t x442 = -201;
	int32_t x443 = -1;
	static uint64_t x444 = 3921910109874810LLU;
	volatile uint64_t t90 = 4LLU;

    t90 = (x441*((x442^x443)/x444));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x449 = -43212888118845LL;
	static volatile uint8_t x450 = 12U;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MAX;
	volatile int64_t t91 = -87317LL;

    t91 = (x449*((x450^x451)/x452));

    if (t91 != 2832043048644744765LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x453 = INT64_MIN;
	int64_t x455 = 1075661459950LL;
	int64_t x456 = INT64_MAX;
	int64_t t92 = 12392305331LL;

    t92 = (x453*((x454^x455)/x456));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x457 = -1;
	int8_t x458 = INT8_MIN;
	int32_t x460 = 179;

    t93 = (x457*((x458^x459)/x460));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	static int32_t x463 = -1;
	static int32_t x464 = INT32_MIN;

    t94 = (x461*((x462^x463)/x464));

    if (t94 != -9223372030412324865LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x465 = 197U;
	uint32_t x466 = 15U;
	volatile int8_t x467 = -1;
	int64_t x468 = INT64_MAX;
	static int64_t t95 = -1272657LL;

    t95 = (x465*((x466^x467)/x468));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x469 = INT8_MIN;
	volatile uint32_t x472 = 18715658U;
	volatile int64_t t96 = -1013664LL;

    t96 = (x469*((x470^x471)/x472));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x473 = 237U;
	static uint64_t x474 = UINT64_MAX;
	uint16_t x475 = UINT16_MAX;
	int64_t x476 = 3361706505LL;
	static volatile uint64_t t97 = 2019305758LLU;

    t97 = (x473*((x474^x475)/x476));

    if (t97 != 1300493763783LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x477 = 3U;
	static int64_t x478 = INT64_MAX;
	int32_t x480 = INT32_MIN;
	static volatile int64_t t98 = 78732520285259LL;

    t98 = (x477*((x478^x479)/x480));

    if (t98 != 12884901885LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x482 = 4U;
	int32_t t99 = 8281;

    t99 = (x481*((x482^x483)/x484));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x489 = INT16_MAX;
	uint32_t x490 = 4270634U;
	int32_t x491 = INT32_MAX;
	uint8_t x492 = UINT8_MAX;
	uint32_t t100 = 817113542U;

    t100 = (x489*((x490^x491)/x492));

    if (t100 != 520732908U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x493 = 141701486;
	uint16_t x494 = 921U;
	volatile int8_t x495 = INT8_MAX;
	int64_t x496 = -21782LL;
	static volatile int64_t t101 = -760LL;

    t101 = (x493*((x494^x495)/x496));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x498 = 8086530U;
	int8_t x499 = -1;
	volatile uint64_t x500 = 1LLU;
	volatile uint64_t t102 = 3825142606096312946LLU;

    t102 = (x497*((x498^x499)/x500));

    if (t102 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x501 = INT64_MIN;
	uint64_t x502 = UINT64_MAX;
	volatile uint16_t x503 = 13853U;
	int32_t x504 = -972625;
	volatile uint64_t t103 = 297LLU;

    t103 = (x501*((x502^x503)/x504));

    if (t103 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x505 = 15LLU;
	int64_t x506 = -4315725731862181783LL;
	uint8_t x507 = 28U;
	int32_t x508 = -11959;
	volatile uint64_t t104 = 171080530LLU;

    t104 = (x505*((x506^x507)/x508));

    if (t104 != 5413152101173395LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x509 = 417694558689LLU;
	uint16_t x510 = 10U;
	static int8_t x511 = INT8_MIN;
	uint64_t t105 = 62645495002LLU;

    t105 = (x509*((x510^x511)/x512));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x514 = 53629LLU;
	static int32_t x515 = INT32_MIN;
	int16_t x516 = INT16_MIN;
	uint64_t t106 = 6915117LLU;

    t106 = (x513*((x514^x515)/x516));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x517 = INT16_MAX;
	static int64_t x518 = -1516910828LL;
	int32_t x519 = 34;
	uint64_t x520 = 3385061768134828LLU;

    t107 = (x517*((x518^x519)/x520));

    if (t107 != 178547383LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x525 = 26;
	int64_t x526 = 1LL;
	int64_t x527 = -1LL;
	volatile int64_t t108 = -498147619LL;

    t108 = (x525*((x526^x527)/x528));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x529 = 0U;
	uint32_t x531 = UINT32_MAX;
	static int32_t x532 = -1;
	volatile uint32_t t109 = 680314U;

    t109 = (x529*((x530^x531)/x532));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x533 = INT64_MAX;
	uint16_t x535 = UINT16_MAX;
	volatile int64_t t110 = -6167872LL;

    t110 = (x533*((x534^x535)/x536));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x537 = INT8_MAX;
	static int8_t x538 = INT8_MIN;
	static int32_t x540 = INT32_MIN;
	volatile int32_t t111 = -177548;

    t111 = (x537*((x538^x539)/x540));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x541 = 0U;
	static int8_t x542 = INT8_MAX;
	int64_t x543 = INT64_MIN;
	int32_t x544 = INT32_MIN;
	volatile int64_t t112 = -68645874845LL;

    t112 = (x541*((x542^x543)/x544));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x545 = 99520206;
	int8_t x546 = -21;
	int8_t x547 = INT8_MAX;
	int64_t x548 = 40229LL;
	int64_t t113 = 67449505247807LL;

    t113 = (x545*((x546^x547)/x548));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x549 = 3U;
	uint8_t x551 = 1U;
	static uint32_t t114 = 253808U;

    t114 = (x549*((x550^x551)/x552));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x553 = -1;
	uint64_t x554 = 3745224192549952697LLU;
	static uint16_t x555 = UINT16_MAX;
	int16_t x556 = INT16_MIN;
	static uint64_t t115 = 6604881187LLU;

    t115 = (x553*((x554^x555)/x556));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x558 = INT16_MIN;
	uint64_t x559 = 752LLU;
	uint16_t x560 = 11345U;

    t116 = (x557*((x558^x559)/x560));

    if (t116 != 206499470900053638LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = 3244150729LLU;
	int8_t x563 = INT8_MIN;
	static volatile uint32_t x564 = 10U;

    t117 = (x561*((x562^x563)/x564));

    if (t117 != 4386024876167659520LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x565 = UINT16_MAX;
	volatile int32_t x566 = -564160;
	volatile int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MAX;
	volatile int32_t t118 = -639423447;

    t118 = (x565*((x566^x567)/x568));

    if (t118 != 1114095) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x573 = INT64_MIN;
	static int8_t x575 = INT8_MIN;
	uint32_t x576 = UINT32_MAX;
	int64_t t119 = 1120440LL;

    t119 = (x573*((x574^x575)/x576));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x577 = INT16_MAX;
	int16_t x579 = -1;
	volatile uint64_t x580 = 7LLU;
	volatile uint64_t t120 = 318827005808LLU;

    t120 = (x577*((x578^x579)/x580));

    if (t120 != 18446744073693584725LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x581 = INT64_MIN;
	int32_t x583 = INT32_MIN;
	int8_t x584 = INT8_MAX;

    t121 = (x581*((x582^x583)/x584));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x585 = UINT16_MAX;
	static int64_t x587 = INT64_MAX;
	volatile int64_t x588 = INT64_MIN;
	volatile int64_t t122 = 1LL;

    t122 = (x585*((x586^x587)/x588));

    if (t122 != 65535LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x590 = 1133;
	volatile int64_t t123 = 1468LL;

    t123 = (x589*((x590^x591)/x592));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x599 = 0;
	static uint32_t x600 = UINT32_MAX;

    t124 = (x597*((x598^x599)/x600));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x601 = 1159229LLU;
	static int64_t x604 = -1LL;
	uint64_t t125 = 7LLU;

    t125 = (x601*((x602^x603)/x604));

    if (t125 != 9223372074840391680LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x605 = -1;
	uint64_t x607 = 386546503216989228LLU;
	volatile uint8_t x608 = 12U;
	static volatile uint64_t t126 = 4825979376060LLU;

    t126 = (x605*((x606^x607)/x608));

    if (t126 != 18414531865108133615LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x609 = INT8_MIN;
	uint16_t x611 = 6166U;
	static volatile int32_t t127 = 172475;

    t127 = (x609*((x610^x611)/x612));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x613 = -1;
	static uint32_t x614 = 1962140U;
	static uint64_t x615 = UINT64_MAX;
	uint64_t t128 = UINT64_MAX;

    t128 = (x613*((x614^x615)/x616));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x617 = -1;
	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = INT64_MIN;
	static volatile int64_t t129 = 247706813898LL;

    t129 = (x617*((x618^x619)/x620));

    if (t129 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x621 = -1;
	uint16_t x622 = 14U;
	uint64_t x623 = UINT64_MAX;
	static int8_t x624 = INT8_MIN;
	uint64_t t130 = UINT64_MAX;

    t130 = (x621*((x622^x623)/x624));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x626 = 120895991LLU;
	int8_t x628 = INT8_MIN;

    t131 = (x625*((x626^x627)/x628));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x629 = 22U;
	int64_t x630 = INT64_MAX;
	int32_t x631 = -432935;
	static int16_t x632 = -25;
	int64_t t132 = -12163923623208387LL;

    t132 = (x629*((x630^x631)/x632));

    if (t132 != 8116567392431821708LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x633 = -1;
	uint8_t x634 = 30U;
	volatile int8_t x635 = -18;
	int32_t t133 = -1;

    t133 = (x633*((x634^x635)/x636));

    if (t133 != -16) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x637 = UINT8_MAX;
	static int32_t x638 = -1;
	volatile int16_t x639 = INT16_MIN;
	int64_t t134 = 232606LL;

    t134 = (x637*((x638^x639)/x640));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x643 = -1;
	static volatile int16_t x644 = -274;
	volatile uint32_t t135 = 774749U;

    t135 = (x641*((x642^x643)/x644));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x645 = 1;
	uint16_t x646 = 14791U;
	int64_t x647 = 559LL;
	int32_t x648 = INT32_MIN;

    t136 = (x645*((x646^x647)/x648));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x653 = INT16_MAX;
	int16_t x654 = INT16_MIN;
	static int8_t x655 = 1;
	uint64_t x656 = 1429359LLU;
	uint64_t t137 = 1976911883857351LLU;

    t137 = (x653*((x654^x655)/x656));

    if (t137 != 422877991507522971LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x657 = INT8_MAX;
	uint32_t x658 = 3783338U;
	int16_t x659 = -1;
	int8_t x660 = -1;

    t138 = (x657*((x658^x659)/x660));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x661 = INT64_MAX;
	int16_t x662 = INT16_MIN;
	int16_t x663 = INT16_MIN;
	int16_t x664 = INT16_MAX;
	int64_t t139 = 421370063545674934LL;

    t139 = (x661*((x662^x663)/x664));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x665 = -1;
	int32_t x666 = -1885391;
	volatile uint16_t x667 = UINT16_MAX;
	int64_t x668 = -1LL;
	volatile int64_t t140 = 51434LL;

    t140 = (x665*((x666^x667)/x668));

    if (t140 != -1850162LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x673 = 16U;
	static int8_t x674 = -11;
	volatile int64_t x676 = -1LL;
	volatile uint64_t t141 = 1630793954216294LLU;

    t141 = (x673*((x674^x675)/x676));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x677 = 3;
	int8_t x678 = INT8_MIN;
	uint32_t x679 = 25U;
	uint8_t x680 = 12U;
	static uint32_t t142 = 2782819U;

    t142 = (x677*((x678^x679)/x680));

    if (t142 != 1073741796U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x681 = INT16_MIN;
	volatile int64_t x683 = INT64_MIN;
	int64_t t143 = 19527198109804886LL;

    t143 = (x681*((x682^x683)/x684));

    if (t143 != 157959810104000512LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x685 = -1;
	int8_t x686 = -3;
	int64_t x687 = -20LL;
	uint8_t x688 = 4U;
	int64_t t144 = 2824045404564166730LL;

    t144 = (x685*((x686^x687)/x688));

    if (t144 != -4LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x689 = INT64_MIN;
	volatile int32_t x690 = -1;
	volatile int32_t x691 = -1;
	uint8_t x692 = 6U;
	int64_t t145 = 542116431200827LL;

    t145 = (x689*((x690^x691)/x692));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x694 = UINT8_MAX;
	uint32_t x695 = UINT32_MAX;
	int8_t x696 = 27;
	uint32_t t146 = 0U;

    t146 = (x693*((x694^x695)/x696));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x697 = -1;
	volatile int32_t x698 = -1;
	int64_t x700 = INT64_MIN;
	int64_t t147 = -131LL;

    t147 = (x697*((x698^x699)/x700));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x701 = -110194623977711525LL;
	int8_t x703 = -1;
	int64_t x704 = 990402LL;

    t148 = (x701*((x702^x703)/x704));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x712 = -13;
	volatile int32_t t149 = 621126160;

    t149 = (x709*((x710^x711)/x712));

    if (t149 != 229369) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x713 = -2735752231LL;
	int32_t x714 = INT32_MIN;
	uint64_t x715 = 122644LLU;
	static uint64_t t150 = 6510787919292LLU;

    t150 = (x713*((x714^x715)/x716));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x717 = UINT16_MAX;
	int32_t x718 = INT32_MIN;
	uint32_t x719 = 2931U;
	volatile int16_t x720 = -3;

    t151 = (x717*((x718^x719)/x720));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x721 = INT8_MIN;
	static uint16_t x722 = UINT16_MAX;
	int64_t x723 = -1LL;
	volatile uint64_t t152 = 7LLU;

    t152 = (x721*((x722^x723)/x724));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x725 = 0U;
	int32_t x726 = INT32_MIN;
	uint64_t x727 = 1164613250501420LLU;
	int16_t x728 = -1;
	uint64_t t153 = 7412390445739327078LLU;

    t153 = (x725*((x726^x727)/x728));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x729 = -21;
	int32_t x731 = INT32_MIN;
	uint64_t x732 = 1317LLU;

    t154 = (x729*((x730^x731)/x732));

    if (t154 != 18299674360103593039LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x733 = 13399;
	uint8_t x734 = UINT8_MAX;
	uint16_t x735 = UINT16_MAX;
	static int64_t x736 = 767598945610490940LL;
	int64_t t155 = -328327540LL;

    t155 = (x733*((x734^x735)/x736));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x741 = -41335LL;
	uint64_t x742 = UINT64_MAX;
	int32_t x743 = 2341615;
	uint8_t x744 = 6U;
	uint64_t t156 = 2071417331415LLU;

    t156 = (x741*((x742^x743)/x744));

    if (t156 != 15372286744223089685LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x749 = 1820U;
	int16_t x750 = INT16_MIN;
	int64_t x751 = -2924049LL;
	int16_t x752 = INT16_MIN;
	int64_t t157 = -72LL;

    t157 = (x749*((x750^x751)/x752));

    if (t157 != -161980LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x753 = INT8_MAX;
	uint8_t x754 = 126U;
	static volatile int32_t x756 = -1;
	volatile int64_t t158 = -352LL;

    t158 = (x753*((x754^x755)/x756));

    if (t158 != 48895LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x757 = 279U;
	int64_t x758 = -29348196419679LL;
	int32_t x759 = -1;
	static uint32_t x760 = UINT32_MAX;
	volatile int64_t t159 = -135LL;

    t159 = (x757*((x758^x759)/x760));

    if (t159 != 1906407LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x761 = 31823072U;
	int64_t x762 = -46493279534LL;
	uint32_t x763 = 1U;
	uint32_t x764 = 21953U;
	static volatile int64_t t160 = -8748011LL;

    t160 = (x761*((x762^x763)/x764));

    if (t160 != -67396652150560LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x765 = -30339LL;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	uint64_t t161 = 11318LLU;

    t161 = (x765*((x766^x767)/x768));

    if (t161 != 18446743447243150957LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x773 = 1;
	static int64_t x774 = -1LL;
	int16_t x775 = 893;
	uint8_t x776 = 31U;
	static int64_t t162 = -58918LL;

    t162 = (x773*((x774^x775)/x776));

    if (t162 != -28LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x777 = INT16_MIN;
	static int16_t x778 = 13477;
	uint16_t x779 = 200U;
	volatile int32_t t163 = 796356668;

    t163 = (x777*((x778^x779)/x780));

    if (t163 != -14647296) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x781 = INT16_MAX;
	int32_t x782 = -1;
	int16_t x784 = INT16_MIN;
	static int32_t t164 = -24;

    t164 = (x781*((x782^x783)/x784));

    if (t164 != 65534) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	int32_t x787 = -1;
	int32_t t165 = -12;

    t165 = (x785*((x786^x787)/x788));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x789 = 43384LLU;
	volatile int8_t x790 = INT8_MIN;
	static int32_t x791 = -1;
	static uint8_t x792 = 1U;
	volatile uint64_t t166 = 215473086585LLU;

    t166 = (x789*((x790^x791)/x792));

    if (t166 != 5509768LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x793 = 3057U;
	int64_t x794 = INT64_MAX;
	int64_t x796 = INT64_MIN;
	int64_t t167 = 56326226LL;

    t167 = (x793*((x794^x795)/x796));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x799 = UINT8_MAX;

    t168 = (x797*((x798^x799)/x800));

    if (t168 != 38220913967104LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x801 = UINT32_MAX;
	static uint16_t x802 = 49U;
	static volatile int8_t x803 = INT8_MIN;
	volatile int16_t x804 = INT16_MIN;

    t169 = (x801*((x802^x803)/x804));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x805 = 31U;
	uint32_t x806 = 3395U;
	volatile uint8_t x807 = 26U;
	uint16_t x808 = 580U;
	uint32_t t170 = 487929118U;

    t170 = (x805*((x806^x807)/x808));

    if (t170 != 155U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x809 = 5772LL;
	int16_t x810 = INT16_MAX;
	int16_t x811 = INT16_MAX;
	volatile int64_t t171 = 50114033912LL;

    t171 = (x809*((x810^x811)/x812));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x813 = 120U;
	static volatile int16_t x814 = INT16_MAX;
	uint8_t x815 = UINT8_MAX;
	volatile int8_t x816 = -52;
	volatile int32_t t172 = -1342;

    t172 = (x813*((x814^x815)/x816));

    if (t172 != -75000) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x817 = 10060715U;
	uint64_t x818 = UINT64_MAX;
	volatile int16_t x819 = -13;
	uint8_t x820 = 5U;
	volatile uint64_t t173 = 1398242LLU;

    t173 = (x817*((x818^x819)/x820));

    if (t173 != 20121430LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x821 = 1U;
	volatile int64_t x822 = -282158683259311LL;
	volatile uint32_t x824 = UINT32_MAX;
	volatile int64_t t174 = -15663139356399277LL;

    t174 = (x821*((x822^x823)/x824));

    if (t174 != -65695LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x825 = INT32_MIN;
	static volatile int64_t x826 = INT64_MAX;
	static int64_t x827 = INT64_MIN;
	int64_t x828 = INT64_MIN;
	int64_t t175 = 1932690217011LL;

    t175 = (x825*((x826^x827)/x828));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x830 = INT8_MIN;
	int32_t x831 = 3614782;
	int32_t x832 = INT32_MIN;
	volatile int32_t t176 = -37145649;

    t176 = (x829*((x830^x831)/x832));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x837 = UINT16_MAX;
	static volatile int64_t x838 = INT64_MIN;
	uint64_t x839 = 158821251LLU;
	int32_t x840 = INT32_MAX;
	static volatile uint64_t t177 = 235352710867571855LLU;

    t177 = (x837*((x838^x839)/x840));

    if (t177 != 281470681874430LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x845 = 0;
	int32_t x846 = INT32_MIN;
	static int8_t x847 = INT8_MIN;
	static volatile uint64_t x848 = UINT64_MAX;
	uint64_t t178 = 2LLU;

    t178 = (x845*((x846^x847)/x848));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x849 = -1LL;
	uint32_t x850 = UINT32_MAX;
	static int32_t x851 = INT32_MIN;
	int16_t x852 = INT16_MAX;

    t179 = (x849*((x850^x851)/x852));

    if (t179 != -65538LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x853 = 495;
	int32_t x854 = INT32_MAX;
	uint32_t t180 = 57981U;

    t180 = (x853*((x854^x855)/x856));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x857 = INT16_MIN;
	uint16_t x858 = 3454U;
	static int8_t x859 = 5;

    t181 = (x857*((x858^x859)/x860));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x861 = INT8_MAX;
	int16_t x862 = -7436;
	uint32_t x863 = 8552291U;

    t182 = (x861*((x862^x863)/x864));

    if (t182 != 534961383U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x865 = 8U;
	uint32_t x866 = UINT32_MAX;
	uint32_t x867 = 106435U;
	int64_t x868 = -1LL;

    t183 = (x865*((x866^x867)/x868));

    if (t183 != -34358886880LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x869 = 20;
	volatile uint64_t x870 = 17046865889028LLU;
	int8_t x871 = INT8_MIN;
	uint8_t x872 = 62U;
	volatile uint64_t t184 = 42794709582441753LLU;

    t184 = (x869*((x870^x871)/x872));

    if (t184 != 5950557105433439500LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x875 = UINT64_MAX;
	volatile uint64_t t185 = 84625531LLU;

    t185 = (x873*((x874^x875)/x876));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x877 = 1U;
	int8_t x878 = -1;
	int16_t x879 = -1;
	volatile int16_t x880 = -1;
	static volatile int32_t t186 = -1992;

    t186 = (x877*((x878^x879)/x880));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	int16_t x882 = 1484;
	static volatile int32_t x883 = INT32_MIN;

    t187 = (x881*((x882^x883)/x884));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x885 = 1283749874511LLU;
	uint64_t x886 = UINT64_MAX;
	int64_t x887 = -208342995243217LL;
	int32_t x888 = INT32_MAX;
	uint64_t t188 = 77544094197699232LLU;

    t188 = (x885*((x886^x887)/x888));

    if (t188 != 124545561575433687LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x889 = UINT8_MAX;
	static volatile int16_t x890 = INT16_MIN;
	uint64_t x891 = 43350474143LLU;
	int32_t x892 = 410330732;
	volatile uint64_t t189 = 1303LLU;

    t189 = (x889*((x890^x891)/x892));

    if (t189 != 11463727576080LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x893 = INT64_MIN;
	int8_t x894 = 0;
	int16_t x895 = 1;
	int64_t x896 = INT64_MAX;
	static int64_t t190 = 162137896922LL;

    t190 = (x893*((x894^x895)/x896));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x898 = 1787335U;
	uint8_t x899 = 104U;
	int32_t x900 = -1;
	uint32_t t191 = 34960738U;

    t191 = (x897*((x898^x899)/x900));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x902 = -1LL;
	static uint8_t x903 = 122U;
	int32_t x904 = INT32_MIN;
	int64_t t192 = 13057461488LL;

    t192 = (x901*((x902^x903)/x904));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x906 = -1;
	int16_t x907 = -1;
	volatile uint64_t x908 = UINT64_MAX;
	uint64_t t193 = 349LLU;

    t193 = (x905*((x906^x907)/x908));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x909 = 80LLU;
	int64_t x911 = INT64_MAX;
	uint64_t x912 = UINT64_MAX;
	volatile uint64_t t194 = 1484374898LLU;

    t194 = (x909*((x910^x911)/x912));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x913 = 984954857U;
	uint16_t x916 = UINT16_MAX;
	volatile uint32_t t195 = 236292329U;

    t195 = (x913*((x914^x915)/x916));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x917 = 236222U;
	uint16_t x918 = UINT16_MAX;
	volatile int8_t x919 = INT8_MIN;
	uint16_t x920 = 6628U;
	static uint32_t t196 = 112U;

    t196 = (x917*((x918^x919)/x920));

    if (t196 != 4292841298U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x921 = 1;
	uint64_t x922 = UINT64_MAX;
	int64_t x923 = 7417940779LL;
	volatile uint8_t x924 = 2U;
	static uint64_t t197 = 54830115LLU;

    t197 = (x921*((x922^x923)/x924));

    if (t197 != 9223372033145805418LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x925 = 33543801764372LLU;
	volatile int64_t x927 = INT64_MAX;
	uint16_t x928 = UINT16_MAX;
	volatile uint64_t t198 = 88131146435446023LLU;

    t198 = (x925*((x926^x927)/x928));

    if (t198 != 14944562272029832940LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x930 = 55;
	int8_t x931 = 47;
	int64_t x932 = INT64_MIN;
	volatile int64_t t199 = 20676625079179139LL;

    t199 = (x929*((x930^x931)/x932));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

