
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

uint8_t x3 = UINT8_MAX;
int64_t x7 = INT64_MAX;
int32_t x20 = INT32_MIN;
static int64_t t3 = INT64_MIN;
static int8_t x23 = -1;
int16_t x31 = -773;
int32_t t6 = -1;
int8_t x34 = INT8_MIN;
static uint64_t t7 = 3LLU;
uint16_t x59 = 17823U;
static int32_t x62 = INT32_MAX;
int32_t x70 = INT32_MAX;
int32_t t17 = 270823440;
volatile int8_t x77 = INT8_MIN;
volatile int16_t x78 = -1;
volatile uint8_t x88 = 1U;
volatile uint32_t t19 = 469800U;
uint32_t t21 = 127U;
int8_t x103 = 16;
int64_t t23 = 22469LL;
int64_t x107 = INT64_MIN;
uint64_t t24 = 5448825410668389LLU;
static uint32_t x113 = UINT32_MAX;
uint8_t x120 = 28U;
int64_t t27 = 20603276LL;
int16_t x121 = -1;
int32_t t28 = 17179220;
int64_t x126 = -435LL;
volatile int32_t x127 = -1;
static int64_t x128 = INT64_MIN;
int32_t x134 = -1;
int8_t x135 = -1;
int16_t x138 = INT16_MAX;
int64_t x140 = -1LL;
static int64_t t32 = 2449588415439091LL;
int32_t x141 = -1;
volatile int64_t x146 = -1LL;
volatile int64_t t34 = 900914LL;
static int16_t x149 = INT16_MIN;
int64_t x157 = 764366LL;
int16_t x159 = 186;
uint64_t x165 = 7017948101752405LLU;
static volatile uint64_t x168 = 420030673016967LLU;
int64_t t41 = -654101635731788LL;
uint32_t x179 = 6281U;
uint32_t t42 = 715304004U;
int64_t x184 = 168LL;
int32_t x188 = INT32_MIN;
volatile int32_t t44 = -325;
volatile int16_t x189 = -1;
volatile int16_t x193 = INT16_MAX;
volatile int64_t x205 = -1LL;
volatile uint16_t x208 = 6696U;
int32_t x209 = -139009790;
static volatile int64_t x212 = -1LL;
volatile uint32_t x221 = UINT32_MAX;
uint32_t t52 = 250310760U;
int64_t x229 = -38LL;
int32_t x233 = 133141773;
volatile uint32_t t55 = 783021U;
static uint64_t t56 = 46722366772LLU;
static uint8_t x243 = UINT8_MAX;
uint16_t x254 = 3U;
int32_t t60 = 528145119;
int32_t x264 = 5597307;
uint32_t x268 = 1078U;
int32_t x269 = INT32_MAX;
volatile int32_t t63 = INT32_MAX;
static volatile int32_t x274 = -1284730;
uint32_t x275 = 31441367U;
static int8_t x278 = INT8_MIN;
int8_t x295 = INT8_MIN;
volatile int32_t t68 = -76745;
int64_t x305 = INT64_MIN;
uint16_t x312 = 1206U;
static uint16_t x323 = UINT16_MAX;
uint32_t t74 = 870542U;
static volatile int64_t t75 = -759155LL;
int16_t x329 = INT16_MIN;
static int8_t x331 = INT8_MIN;
volatile int32_t t76 = 16236581;
int16_t x335 = -1;
uint16_t x345 = 2019U;
int32_t x346 = INT32_MIN;
uint64_t x352 = UINT64_MAX;
static uint8_t x354 = 5U;
volatile uint64_t x359 = 3867269980191LLU;
static int8_t x361 = -1;
int32_t x366 = INT32_MIN;
uint64_t t85 = 191143349672013LLU;
volatile int32_t t86 = -5780;
int16_t x374 = 14;
static int32_t x382 = INT32_MIN;
int32_t x383 = -7780;
volatile int32_t t89 = 1;
uint16_t x397 = 500U;
uint16_t x405 = 2U;
static volatile int32_t t94 = -19141;
static int16_t x410 = INT16_MAX;
uint16_t x415 = 133U;
int16_t x426 = 1317;
static int32_t x428 = -1;
static volatile int32_t x436 = INT32_MIN;
static int32_t x437 = INT32_MIN;
static int8_t x439 = INT8_MIN;
static uint64_t x447 = UINT64_MAX;
int32_t t106 = 0;
uint8_t x459 = 0U;
volatile int16_t x468 = -1;
int32_t x470 = INT32_MAX;
int8_t x478 = -26;
static uint64_t t112 = 30450013LLU;
uint16_t x487 = UINT16_MAX;
uint16_t x491 = 967U;
uint8_t x492 = UINT8_MAX;
static uint8_t x500 = 30U;
int64_t x501 = 3LL;
volatile uint16_t x502 = UINT16_MAX;
volatile int64_t t117 = -89770338017471197LL;
static uint16_t x506 = UINT16_MAX;
static int32_t x514 = INT32_MAX;
int16_t x518 = INT16_MIN;
int16_t x523 = -31;
static volatile uint8_t x524 = UINT8_MAX;
int8_t x526 = INT8_MIN;
static int32_t x527 = INT32_MAX;
volatile int16_t x534 = 273;
int32_t t125 = 31838;
volatile uint64_t t127 = 28348457852997995LLU;
int32_t x546 = -1;
int8_t x548 = 1;
volatile uint32_t t129 = 69U;
int8_t x558 = INT8_MIN;
static uint8_t x559 = 14U;
uint64_t t130 = 86299LLU;
volatile uint32_t x577 = 1713828U;
volatile uint64_t x579 = 1813LLU;
int64_t x581 = -124050LL;
static int8_t x583 = -50;
volatile int64_t t136 = -4LL;
static volatile int32_t t137 = 895;
static int64_t x590 = INT64_MIN;
uint64_t x597 = UINT64_MAX;
int8_t x602 = INT8_MAX;
int64_t x616 = 339668379486981310LL;
int32_t x620 = -1;
volatile int32_t x626 = INT32_MAX;
volatile int8_t x629 = 9;
int32_t x633 = -1;
uint64_t x634 = 1901LLU;
int64_t x642 = -1LL;
static int32_t x645 = INT32_MIN;
int32_t x652 = -1;
uint16_t x660 = 24U;
static volatile int32_t t156 = INT32_MIN;
uint32_t x673 = UINT32_MAX;
volatile uint32_t t157 = 3U;
int16_t x677 = INT16_MIN;
int64_t x679 = INT64_MIN;
int16_t x683 = INT16_MIN;
volatile uint64_t t160 = 316719983175979401LLU;
int64_t x689 = 14194LL;
static int64_t x693 = 16452LL;
uint64_t x694 = 0LLU;
static int16_t x701 = -1;
static volatile int32_t t164 = -1417704;
volatile int16_t x706 = INT16_MAX;
volatile uint32_t t165 = 159896977U;
uint16_t x709 = UINT16_MAX;
uint16_t x724 = 10301U;
static int64_t x726 = INT64_MIN;
int16_t x730 = 1;
int8_t x738 = INT8_MAX;
uint8_t x755 = 4U;
int8_t x763 = 3;
int8_t x765 = -1;
uint8_t x766 = 1U;
static int16_t x774 = INT16_MAX;
int8_t x782 = -56;
volatile int8_t x785 = 3;
static int64_t x788 = INT64_MIN;
int32_t x789 = -58305;
int32_t x794 = INT32_MIN;
int8_t x798 = INT8_MIN;
int8_t x805 = 15;
int32_t x808 = INT32_MAX;
uint32_t x811 = 1169500U;
static volatile int32_t x813 = INT32_MAX;
uint8_t x818 = UINT8_MAX;
int32_t t193 = 369374;
int64_t x835 = 8458139013733515LL;
int64_t t196 = -12415282436172863LL;
int64_t x846 = 94066LL;
int8_t x851 = INT8_MAX;
uint16_t x855 = 1981U;
static int16_t x856 = -1;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	uint64_t x2 = UINT64_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 518208369;

    t0 = (x1+((x2>x3)*x4));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MIN;
	static int32_t x8 = INT32_MIN;
	uint64_t t1 = UINT64_MAX;

    t1 = (x5+((x6>x7)*x8));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = 7298;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int32_t x12 = -1;
	uint32_t t2 = 146574U;

    t2 = (x9+((x10>x11)*x12));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x18 = -7LL;
	volatile int64_t x19 = 1635338905594LL;

    t3 = (x17+((x18>x19)*x20));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	uint64_t x22 = 1931928629094040250LLU;
	int64_t x24 = 1LL;
	int64_t t4 = 240384LL;

    t4 = (x21+((x22>x23)*x24));

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 1674U;
	volatile int64_t x26 = INT64_MAX;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -979;

    t5 = (x25+((x26>x27)*x28));

    if (t5 != 1546) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	static uint8_t x30 = UINT8_MAX;
	static int8_t x32 = INT8_MIN;

    t6 = (x29+((x30>x31)*x32));

    if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = 14LLU;
	int8_t x35 = -1;
	static int16_t x36 = -1;

    t7 = (x33+((x34>x35)*x36));

    if (t7 != 14LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = 3LL;
	int16_t x38 = 13190;
	static int8_t x39 = INT8_MAX;
	static uint8_t x40 = 1U;
	static int64_t t8 = 297122725990LL;

    t8 = (x37+((x38>x39)*x40));

    if (t8 != 4LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x41 = 249U;
	int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MIN;
	volatile int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = 453;

    t9 = (x41+((x42>x43)*x44));

    if (t9 != 121) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = INT64_MIN;
	uint64_t x46 = 231LLU;
	static int32_t x47 = -7747;
	volatile int16_t x48 = -568;
	int64_t t10 = INT64_MIN;

    t10 = (x45+((x46>x47)*x48));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = 161959372;
	volatile int32_t x50 = -1;
	int32_t x51 = 185342;
	int8_t x52 = 1;
	volatile int32_t t11 = 11;

    t11 = (x49+((x50>x51)*x52));

    if (t11 != 161959372) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x53 = INT32_MIN;
	volatile int32_t x54 = INT32_MIN;
	volatile int32_t x55 = INT32_MIN;
	static int64_t x56 = INT64_MAX;
	int64_t t12 = 4LL;

    t12 = (x53+((x54>x55)*x56));

    if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 1U;
	volatile uint16_t x60 = 443U;
	static int32_t t13 = -36948387;

    t13 = (x57+((x58>x59)*x60));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 6U;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t14 = 30956085;

    t14 = (x61+((x62>x63)*x64));

    if (t14 != -32762) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 115;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	volatile int8_t x68 = INT8_MIN;
	int32_t t15 = -58179378;

    t15 = (x65+((x66>x67)*x68));

    if (t15 != 115) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -1LL;
	int32_t x71 = INT32_MIN;
	static int16_t x72 = 2;
	static volatile int64_t t16 = 45LL;

    t16 = (x69+((x70>x71)*x72));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 980U;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	static uint16_t x76 = 0U;

    t17 = (x73+((x74>x75)*x76));

    if (t17 != 980) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x79 = 1702875651042LL;
	uint64_t x80 = 11560615782089LLU;
	volatile uint64_t t18 = 88791851544LLU;

    t18 = (x77+((x78>x79)*x80));

    if (t18 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 0U;
	int64_t x86 = INT64_MIN;
	static int32_t x87 = INT32_MIN;

    t19 = (x85+((x86>x87)*x88));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = 21;
	int16_t x90 = -1;
	int64_t x91 = -1LL;
	int8_t x92 = 0;
	int32_t t20 = -48870;

    t20 = (x89+((x90>x91)*x92));

    if (t20 != 21) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x93 = 228913U;
	static int32_t x94 = INT32_MIN;
	volatile int8_t x95 = -29;
	int8_t x96 = INT8_MAX;

    t21 = (x93+((x94>x95)*x96));

    if (t21 != 228913U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = -1;
	static uint16_t x98 = 5U;
	uint16_t x99 = 1562U;
	int16_t x100 = INT16_MIN;
	static int32_t t22 = -266;

    t22 = (x97+((x98>x99)*x100));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = INT64_MIN;
	static int16_t x102 = INT16_MAX;
	int8_t x104 = 7;

    t23 = (x101+((x102>x103)*x104));

    if (t23 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = -8;
	static uint64_t x106 = UINT64_MAX;
	uint64_t x108 = 2532549185LLU;

    t24 = (x105+((x106>x107)*x108));

    if (t24 != 2532549177LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -15556;
	volatile int8_t x111 = -29;
	static int64_t x112 = 0LL;
	static volatile int64_t t25 = -3397961LL;

    t25 = (x109+((x110>x111)*x112));

    if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x114 = -52;
	volatile int16_t x115 = INT16_MAX;
	volatile int32_t x116 = INT32_MIN;
	uint32_t t26 = UINT32_MAX;

    t26 = (x113+((x114>x115)*x116));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x117 = -2872393966911039LL;
	int64_t x118 = 0LL;
	static volatile int64_t x119 = -1LL;

    t27 = (x117+((x118>x119)*x120));

    if (t27 != -2872393966911011LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	static int32_t x124 = -1;

    t28 = (x121+((x122>x123)*x124));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t t29 = -102434614164023LL;

    t29 = (x125+((x126>x127)*x128));

    if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 0U;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = -2789;
	volatile uint16_t x132 = 12U;
	int32_t t30 = -22;

    t30 = (x129+((x130>x131)*x132));

    if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x133 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t31 = -1252;

    t31 = (x133+((x134>x135)*x136));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MAX;
	uint64_t x139 = 1312142434LLU;

    t32 = (x137+((x138>x139)*x140));

    if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x142 = INT32_MAX;
	int8_t x143 = 24;
	int16_t x144 = INT16_MIN;
	int32_t t33 = -12672;

    t33 = (x141+((x142>x143)*x144));

    if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -1LL;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -1LL;

    t34 = (x145+((x146>x147)*x148));

    if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x150 = INT16_MIN;
	static uint32_t x151 = 929U;
	static uint32_t x152 = 932139U;
	volatile uint32_t t35 = 371U;

    t35 = (x149+((x150>x151)*x152));

    if (t35 != 899371U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = 31415346124LL;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t36 = -209065283;

    t36 = (x153+((x154>x155)*x156));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x158 = 120U;
	uint64_t x160 = 74LLU;
	static volatile uint64_t t37 = 58782917005503226LLU;

    t37 = (x157+((x158>x159)*x160));

    if (t37 != 764366LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 6973U;
	uint64_t x164 = 27229226554862475LLU;
	uint64_t t38 = 273819174114184660LLU;

    t38 = (x161+((x162>x163)*x164));

    if (t38 != 27229226554862474LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x166 = UINT32_MAX;
	uint64_t x167 = 3370164LLU;
	volatile uint64_t t39 = 2529133118380410LLU;

    t39 = (x165+((x166>x167)*x168));

    if (t39 != 7437978774769372LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = 1;
	static int64_t x170 = -1LL;
	static uint8_t x171 = 28U;
	static int16_t x172 = -833;
	int32_t t40 = -315952;

    t40 = (x169+((x170>x171)*x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	int16_t x174 = INT16_MIN;
	static int64_t x175 = 5840628282LL;
	int8_t x176 = 17;

    t41 = (x173+((x174>x175)*x176));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x177 = 10478U;
	static volatile uint16_t x178 = 34U;
	uint32_t x180 = UINT32_MAX;

    t42 = (x177+((x178>x179)*x180));

    if (t42 != 10478U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = -1;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	volatile int64_t t43 = 3172684072782339953LL;

    t43 = (x181+((x182>x183)*x184));

    if (t43 != 167LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x187 = 26756;

    t44 = (x185+((x186>x187)*x188));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x190 = -91342392LL;
	int32_t x191 = INT32_MIN;
	int16_t x192 = -13934;
	volatile int32_t t45 = -6;

    t45 = (x189+((x190>x191)*x192));

    if (t45 != -13935) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x194 = -1;
	int16_t x195 = 628;
	int64_t x196 = -2LL;
	int64_t t46 = 15651668561599LL;

    t46 = (x193+((x194>x195)*x196));

    if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 7901496983880LLU;
	volatile uint64_t x198 = UINT64_MAX;
	int8_t x199 = -1;
	int64_t x200 = INT64_MIN;
	uint64_t t47 = 828238LLU;

    t47 = (x197+((x198>x199)*x200));

    if (t47 != 7901496983880LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = 248;
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = 0U;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t48 = -39470685LL;

    t48 = (x201+((x202>x203)*x204));

    if (t48 != -9223372036854775560LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int64_t t49 = 235602LL;

    t49 = (x205+((x206>x207)*x208));

    if (t49 != 6695LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x210 = 787LL;
	int8_t x211 = -1;
	int64_t t50 = 3201561854267862LL;

    t50 = (x209+((x210>x211)*x212));

    if (t50 != -139009791LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = -33241LL;
	int8_t x218 = INT8_MIN;
	int64_t x219 = -407520500230LL;
	uint16_t x220 = 6601U;
	volatile int64_t t51 = -10775220852675LL;

    t51 = (x217+((x218>x219)*x220));

    if (t51 != -26640LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x222 = -1;
	static int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MAX;

    t52 = (x221+((x222>x223)*x224));

    if (t52 != 32766U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x225 = 86334275497LL;
	int64_t x226 = 377499285049882LL;
	int32_t x227 = 4576278;
	int16_t x228 = -343;
	int64_t t53 = 11LL;

    t53 = (x225+((x226>x227)*x228));

    if (t53 != 86334275154LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	int32_t x232 = -17131602;
	volatile int64_t t54 = 31598818990064501LL;

    t54 = (x229+((x230>x231)*x232));

    if (t54 != -17131640LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x234 = 40U;
	int64_t x235 = -1LL;
	uint32_t x236 = UINT32_MAX;

    t55 = (x233+((x234>x235)*x236));

    if (t55 != 133141772U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 42U;
	volatile int32_t x238 = INT32_MAX;
	uint32_t x239 = 154632436U;
	uint64_t x240 = 3658910847297LLU;

    t56 = (x237+((x238>x239)*x240));

    if (t56 != 3658910847339LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MIN;
	volatile uint16_t x242 = 283U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t57 = -493843453;

    t57 = (x241+((x242>x243)*x244));

    if (t57 != -2147450881) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x245 = 39U;
	int16_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t58 = 21548;

    t58 = (x245+((x246>x247)*x248));

    if (t58 != 32806) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	uint16_t x250 = 0U;
	uint16_t x251 = 858U;
	int16_t x252 = INT16_MIN;
	static volatile int64_t t59 = INT64_MAX;

    t59 = (x249+((x250>x251)*x252));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MIN;
	volatile int32_t x255 = 1559;
	volatile uint16_t x256 = 27U;

    t60 = (x253+((x254>x255)*x256));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x261 = INT32_MIN;
	int8_t x262 = 6;
	volatile int32_t x263 = -1;
	volatile int32_t t61 = 26;

    t61 = (x261+((x262>x263)*x264));

    if (t61 != -2141886341) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 32017U;
	uint32_t t62 = 6U;

    t62 = (x265+((x266>x267)*x268));

    if (t62 != 4294935606U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x270 = -3252983;
	volatile int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;

    t63 = (x269+((x270>x271)*x272));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t64 = 1478382;

    t64 = (x273+((x274>x275)*x276));

    if (t64 != 65407) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	uint32_t x280 = 485649234U;
	static int64_t t65 = INT64_MIN;

    t65 = (x277+((x278>x279)*x280));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x281 = INT16_MIN;
	static int32_t x282 = INT32_MIN;
	volatile int64_t x283 = INT64_MAX;
	int32_t x284 = -1071642;
	volatile int32_t t66 = 9408569;

    t66 = (x281+((x282>x283)*x284));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = -1;
	static uint64_t x286 = 94877886LLU;
	int16_t x287 = 2;
	static volatile int32_t x288 = 14284878;
	volatile int32_t t67 = -28;

    t67 = (x285+((x286>x287)*x288));

    if (t67 != 14284877) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x293 = -17;
	volatile uint16_t x294 = UINT16_MAX;
	int16_t x296 = -497;

    t68 = (x293+((x294>x295)*x296));

    if (t68 != -514) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x301 = 4148U;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	static volatile int32_t t69 = -1665;

    t69 = (x301+((x302>x303)*x304));

    if (t69 != 4147) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x306 = 539594525913897LLU;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 16U;
	int64_t t70 = INT64_MIN;

    t70 = (x305+((x306>x307)*x308));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	static int32_t t71 = -6235292;

    t71 = (x309+((x310>x311)*x312));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static uint32_t x314 = 142U;
	uint64_t x315 = UINT64_MAX;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t72 = 7739056;

    t72 = (x313+((x314>x315)*x316));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x317 = 4827997870667298684LLU;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = 8102;
	int16_t x320 = -1;
	volatile uint64_t t73 = 31026737LLU;

    t73 = (x317+((x318>x319)*x320));

    if (t73 != 4827997870667298684LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MIN;
	static volatile uint32_t x324 = 64026697U;

    t74 = (x321+((x322>x323)*x324));

    if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -7;
	uint8_t x326 = 3U;
	volatile int32_t x327 = INT32_MAX;
	int64_t x328 = 237392173668LL;

    t75 = (x325+((x326>x327)*x328));

    if (t75 != -7LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x330 = 59323093816LLU;
	volatile int8_t x332 = INT8_MAX;

    t76 = (x329+((x330>x331)*x332));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x333 = 89U;
	int32_t x334 = 7;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t77 = 3635U;

    t77 = (x333+((x334>x335)*x336));

    if (t77 != 88U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	uint64_t x339 = 9096099447709523304LLU;
	static uint8_t x340 = 8U;
	int32_t t78 = -30;

    t78 = (x337+((x338>x339)*x340));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x341 = 8LL;
	int16_t x342 = 3;
	volatile int32_t x343 = -1;
	uint8_t x344 = 1U;
	volatile int64_t t79 = 2896639LL;

    t79 = (x341+((x342>x343)*x344));

    if (t79 != 9LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x347 = 220207063U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t80 = -1;

    t80 = (x345+((x346>x347)*x348));

    if (t80 != 1891) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x349 = 1;
	int16_t x350 = -55;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t t81 = 536459833LLU;

    t81 = (x349+((x350>x351)*x352));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x353 = 1960U;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = 123576U;
	static volatile uint32_t t82 = 131441086U;

    t82 = (x353+((x354>x355)*x356));

    if (t82 != 125536U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	static uint8_t x360 = 4U;
	volatile int32_t t83 = 13981436;

    t83 = (x357+((x358>x359)*x360));

    if (t83 != -124) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -15;
	volatile int32_t t84 = 8900;

    t84 = (x361+((x362>x363)*x364));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x365 = 395LLU;
	static uint32_t x367 = 13538129U;
	int64_t x368 = -530565545319816294LL;

    t85 = (x365+((x366>x367)*x368));

    if (t85 != 17916178528389735717LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = -1;
	static uint64_t x370 = UINT64_MAX;
	uint32_t x371 = 752250622U;
	int16_t x372 = INT16_MIN;

    t86 = (x369+((x370>x371)*x372));

    if (t86 != -32769) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x373 = UINT64_MAX;
	static int32_t x375 = -39988;
	static int8_t x376 = INT8_MIN;
	volatile uint64_t t87 = 1050394455334926342LLU;

    t87 = (x373+((x374>x375)*x376));

    if (t87 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x377 = 16142U;
	static volatile uint16_t x378 = 10293U;
	int64_t x379 = -1LL;
	static volatile int64_t x380 = INT64_MIN;
	volatile int64_t t88 = 160111LL;

    t88 = (x377+((x378>x379)*x380));

    if (t88 != -9223372036854759666LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x381 = -8314;
	int32_t x384 = INT32_MIN;

    t89 = (x381+((x382>x383)*x384));

    if (t89 != -8314) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x385 = UINT32_MAX;
	uint8_t x386 = UINT8_MAX;
	volatile int64_t x387 = INT64_MAX;
	int64_t x388 = -1LL;
	int64_t t90 = 165345912LL;

    t90 = (x385+((x386>x387)*x388));

    if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x393 = 2;
	int16_t x394 = 0;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = -1;
	int32_t t91 = 59439;

    t91 = (x393+((x394>x395)*x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x398 = 372142U;
	static int64_t x399 = 3484LL;
	static int8_t x400 = INT8_MIN;
	static volatile int32_t t92 = -5334;

    t92 = (x397+((x398>x399)*x400));

    if (t92 != 372) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x401 = INT16_MAX;
	int8_t x402 = -11;
	static int64_t x403 = 190LL;
	static uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t93 = 231088262LLU;

    t93 = (x401+((x402>x403)*x404));

    if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x406 = INT32_MAX;
	volatile uint8_t x407 = UINT8_MAX;
	uint16_t x408 = UINT16_MAX;

    t94 = (x405+((x406>x407)*x408));

    if (t94 != 65537) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = INT64_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;
	int64_t t95 = -6072001LL;

    t95 = (x409+((x410>x411)*x412));

    if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x413 = -5;
	static int64_t x414 = 46046637149679729LL;
	volatile uint16_t x416 = 618U;
	volatile int32_t t96 = 1346;

    t96 = (x413+((x414>x415)*x416));

    if (t96 != 613) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = INT16_MAX;
	volatile int16_t x418 = 3491;
	int64_t x419 = INT64_MIN;
	uint16_t x420 = 17U;
	int32_t t97 = -120058;

    t97 = (x417+((x418>x419)*x420));

    if (t97 != 32784) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x421 = -1LL;
	volatile int16_t x422 = INT16_MIN;
	uint32_t x423 = 344907231U;
	int8_t x424 = INT8_MIN;
	volatile int64_t t98 = -244327155465791508LL;

    t98 = (x421+((x422>x423)*x424));

    if (t98 != -129LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x425 = UINT8_MAX;
	volatile uint64_t x427 = 76075546497483LLU;
	int32_t t99 = 23;

    t99 = (x425+((x426>x427)*x428));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MIN;
	uint16_t x430 = UINT16_MAX;
	static int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MIN;
	int64_t t100 = INT64_MIN;

    t100 = (x429+((x430>x431)*x432));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x433 = 233043U;
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MAX;
	uint32_t t101 = 95534U;

    t101 = (x433+((x434>x435)*x436));

    if (t101 != 233043U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x438 = INT32_MIN;
	int16_t x440 = -1;
	int32_t t102 = INT32_MIN;

    t102 = (x437+((x438>x439)*x440));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	uint8_t x443 = UINT8_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t103 = INT32_MIN;

    t103 = (x441+((x442>x443)*x444));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x445 = -4;
	int8_t x446 = -1;
	uint64_t x448 = 241241LLU;
	volatile uint64_t t104 = 6214053LLU;

    t104 = (x445+((x446>x447)*x448));

    if (t104 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = -30779;
	uint64_t x451 = 6794LLU;
	uint16_t x452 = UINT16_MAX;
	int64_t t105 = 1LL;

    t105 = (x449+((x450>x451)*x452));

    if (t105 != 65534LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x453 = 0U;
	int64_t x454 = INT64_MIN;
	int8_t x455 = INT8_MIN;
	int16_t x456 = 317;

    t106 = (x453+((x454>x455)*x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x457 = UINT32_MAX;
	volatile int64_t x458 = 1580216517252876LL;
	static uint8_t x460 = UINT8_MAX;
	uint32_t t107 = 1711208U;

    t107 = (x457+((x458>x459)*x460));

    if (t107 != 254U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = -1;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 116U;
	static int64_t x464 = -1LL;
	volatile int64_t t108 = -61961709LL;

    t108 = (x461+((x462>x463)*x464));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	static int8_t x466 = INT8_MAX;
	int8_t x467 = INT8_MAX;
	uint64_t t109 = UINT64_MAX;

    t109 = (x465+((x466>x467)*x468));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x469 = -2063LL;
	int8_t x471 = -1;
	volatile uint64_t x472 = 2757675818LLU;
	volatile uint64_t t110 = 129610295016LLU;

    t110 = (x469+((x470>x471)*x472));

    if (t110 != 2757673755LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x477 = UINT8_MAX;
	volatile uint64_t x479 = 2870872LLU;
	int8_t x480 = -4;
	int32_t t111 = 16671;

    t111 = (x477+((x478>x479)*x480));

    if (t111 != 251) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	uint64_t x482 = 7749406328660952561LLU;
	int64_t x483 = 531963041751849LL;
	static uint64_t x484 = 144LLU;

    t112 = (x481+((x482>x483)*x484));

    if (t112 != 399LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x485 = INT64_MAX;
	int64_t x486 = INT64_MIN;
	int32_t x488 = INT32_MIN;
	volatile int64_t t113 = INT64_MAX;

    t113 = (x485+((x486>x487)*x488));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x489 = UINT16_MAX;
	int16_t x490 = 0;
	int32_t t114 = 3219;

    t114 = (x489+((x490>x491)*x492));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x493 = -723;
	int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = 12668U;
	int32_t t115 = 190255519;

    t115 = (x493+((x494>x495)*x496));

    if (t115 != 11945) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x497 = UINT64_MAX;
	static volatile int8_t x498 = INT8_MIN;
	volatile int16_t x499 = INT16_MIN;
	volatile uint64_t t116 = 6290308188264046LLU;

    t116 = (x497+((x498>x499)*x500));

    if (t116 != 29LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x503 = INT64_MIN;
	int8_t x504 = INT8_MAX;

    t117 = (x501+((x502>x503)*x504));

    if (t117 != 130LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MIN;
	volatile uint64_t t118 = 512590LLU;

    t118 = (x505+((x506>x507)*x508));

    if (t118 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x509 = 1946316450U;
	static volatile uint8_t x510 = 9U;
	uint32_t x511 = 30993U;
	volatile int32_t x512 = INT32_MIN;
	volatile uint32_t t119 = 1324907U;

    t119 = (x509+((x510>x511)*x512));

    if (t119 != 1946316450U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x513 = UINT16_MAX;
	uint64_t x515 = 233562424LLU;
	int64_t x516 = -8255075691726LL;
	volatile int64_t t120 = -12534999620LL;

    t120 = (x513+((x514>x515)*x516));

    if (t120 != -8255075626191LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x517 = 211915012002386278LLU;
	int32_t x519 = INT32_MAX;
	int32_t x520 = INT32_MIN;
	volatile uint64_t t121 = 424483344063621LLU;

    t121 = (x517+((x518>x519)*x520));

    if (t121 != 211915012002386278LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x522 = 125;
	volatile int32_t t122 = 3091;

    t122 = (x521+((x522>x523)*x524));

    if (t122 != 33022) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = 1;
	uint64_t x528 = 1192246LLU;
	uint64_t t123 = 269313313179LLU;

    t123 = (x525+((x526>x527)*x528));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x529 = 3038923340LLU;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = 97U;
	volatile int32_t x532 = INT32_MAX;
	uint64_t t124 = 1LLU;

    t124 = (x529+((x530>x531)*x532));

    if (t124 != 3038923340LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = -275614662;
	static volatile int32_t x535 = 110017090;
	int32_t x536 = 12084;

    t125 = (x533+((x534>x535)*x536));

    if (t125 != -275614662) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x537 = 32U;
	int64_t x538 = 10417239019965LL;
	int32_t x539 = -12856;
	uint8_t x540 = 14U;
	int32_t t126 = 178;

    t126 = (x537+((x538>x539)*x540));

    if (t126 != 46) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x541 = INT16_MIN;
	int8_t x542 = -30;
	volatile int16_t x543 = INT16_MIN;
	uint64_t x544 = 15794033572265714LLU;

    t127 = (x541+((x542>x543)*x544));

    if (t127 != 15794033572232946LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	static uint8_t x547 = UINT8_MAX;
	int32_t t128 = 0;

    t128 = (x545+((x546>x547)*x548));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x553 = INT8_MAX;
	volatile int16_t x554 = INT16_MIN;
	static uint16_t x555 = UINT16_MAX;
	static volatile uint32_t x556 = UINT32_MAX;

    t129 = (x553+((x554>x555)*x556));

    if (t129 != 127U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x557 = INT16_MAX;
	volatile uint64_t x560 = 106715LLU;

    t130 = (x557+((x558>x559)*x560));

    if (t130 != 32767LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x561 = 5442U;
	int64_t x562 = 31085295251391640LL;
	static uint8_t x563 = UINT8_MAX;
	static int32_t x564 = -3;
	uint32_t t131 = 33793680U;

    t131 = (x561+((x562>x563)*x564));

    if (t131 != 5439U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x566 = INT32_MAX;
	uint64_t x567 = UINT64_MAX;
	int16_t x568 = -1;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x565+((x566>x567)*x568));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x569 = UINT16_MAX;
	int16_t x570 = INT16_MIN;
	static uint8_t x571 = UINT8_MAX;
	uint8_t x572 = 14U;
	volatile int32_t t133 = 24;

    t133 = (x569+((x570>x571)*x572));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x573 = INT16_MIN;
	uint16_t x574 = 41U;
	volatile int64_t x575 = 29517891417118881LL;
	static int64_t x576 = INT64_MAX;
	volatile int64_t t134 = -36863776LL;

    t134 = (x573+((x574>x575)*x576));

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x578 = 80288176U;
	uint64_t x580 = 0LLU;
	uint64_t t135 = 15449596LLU;

    t135 = (x577+((x578>x579)*x580));

    if (t135 != 1713828LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x582 = 161;
	int8_t x584 = INT8_MIN;

    t136 = (x581+((x582>x583)*x584));

    if (t136 != -124178LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x585 = INT16_MAX;
	volatile int8_t x586 = -1;
	int8_t x587 = 54;
	uint8_t x588 = 76U;

    t137 = (x585+((x586>x587)*x588));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x589 = INT16_MIN;
	int16_t x591 = 1;
	volatile int32_t x592 = 25696230;
	volatile int32_t t138 = 16062854;

    t138 = (x589+((x590>x591)*x592));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x593 = -1;
	static int64_t x594 = -3LL;
	volatile int16_t x595 = INT16_MAX;
	int64_t x596 = INT64_MIN;
	int64_t t139 = -1041661LL;

    t139 = (x593+((x594>x595)*x596));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x598 = INT16_MIN;
	uint64_t x599 = 45427111984984874LLU;
	static volatile uint16_t x600 = UINT16_MAX;
	static volatile uint64_t t140 = 806394687LLU;

    t140 = (x597+((x598>x599)*x600));

    if (t140 != 65534LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x601 = -1;
	int16_t x603 = -1;
	uint64_t x604 = UINT64_MAX;
	static uint64_t t141 = 6668681916516358LLU;

    t141 = (x601+((x602>x603)*x604));

    if (t141 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x605 = 241697693;
	uint32_t x606 = 1U;
	int64_t x607 = INT64_MIN;
	static volatile uint8_t x608 = UINT8_MAX;
	volatile int32_t t142 = 1;

    t142 = (x605+((x606>x607)*x608));

    if (t142 != 241697948) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x609 = INT16_MIN;
	int64_t x610 = 255LL;
	static uint32_t x611 = UINT32_MAX;
	uint32_t x612 = 341U;
	volatile uint32_t t143 = 1349479036U;

    t143 = (x609+((x610>x611)*x612));

    if (t143 != 4294934528U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = 6550;
	int64_t x615 = -2112616659784LL;
	int64_t t144 = -38682898821LL;

    t144 = (x613+((x614>x615)*x616));

    if (t144 != 339668377339497662LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x617 = UINT8_MAX;
	int8_t x618 = INT8_MIN;
	volatile uint32_t x619 = 204104U;
	volatile int32_t t145 = -26358;

    t145 = (x617+((x618>x619)*x620));

    if (t145 != 254) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x621 = UINT32_MAX;
	int8_t x622 = -3;
	int64_t x623 = 216096802432788687LL;
	static volatile uint16_t x624 = UINT16_MAX;
	volatile uint32_t t146 = UINT32_MAX;

    t146 = (x621+((x622>x623)*x624));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x625 = 23474368442477387LLU;
	int32_t x627 = INT32_MAX;
	uint8_t x628 = UINT8_MAX;
	volatile uint64_t t147 = 4LLU;

    t147 = (x625+((x626>x627)*x628));

    if (t147 != 23474368442477387LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x630 = 9U;
	int16_t x631 = 2713;
	int32_t x632 = 87817;
	volatile int32_t t148 = 28160;

    t148 = (x629+((x630>x631)*x632));

    if (t148 != 9) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x635 = 809U;
	int32_t x636 = 6;
	volatile int32_t t149 = -1917;

    t149 = (x633+((x634>x635)*x636));

    if (t149 != 5) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x641 = -1;
	static uint32_t x643 = UINT32_MAX;
	int16_t x644 = 1;
	volatile int32_t t150 = 4705;

    t150 = (x641+((x642>x643)*x644));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x646 = -24;
	uint16_t x647 = 6341U;
	static uint32_t x648 = 51396381U;
	static uint32_t t151 = 103683069U;

    t151 = (x645+((x646>x647)*x648));

    if (t151 != 2147483648U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x649 = 1641U;
	static int64_t x650 = INT64_MAX;
	volatile uint8_t x651 = 4U;
	volatile uint32_t t152 = 2086923374U;

    t152 = (x649+((x650>x651)*x652));

    if (t152 != 1640U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x657 = 60;
	uint32_t x658 = UINT32_MAX;
	uint8_t x659 = 30U;
	volatile int32_t t153 = 9;

    t153 = (x657+((x658>x659)*x660));

    if (t153 != 84) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x661 = 127336542U;
	uint64_t x662 = 6464005076LLU;
	int32_t x663 = INT32_MIN;
	int8_t x664 = -31;
	volatile uint32_t t154 = 4163013U;

    t154 = (x661+((x662>x663)*x664));

    if (t154 != 127336542U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x665 = -25;
	static int32_t x666 = 676087540;
	int64_t x667 = 1589LL;
	int8_t x668 = INT8_MIN;
	int32_t t155 = -518305402;

    t155 = (x665+((x666>x667)*x668));

    if (t155 != -153) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x669 = INT32_MIN;
	uint16_t x670 = 7625U;
	static uint32_t x671 = 92834680U;
	volatile uint8_t x672 = 4U;

    t156 = (x669+((x670>x671)*x672));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MIN;
	static int32_t x676 = INT32_MAX;

    t157 = (x673+((x674>x675)*x676));

    if (t157 != 2147483646U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x678 = 1;
	uint8_t x680 = 1U;
	int32_t t158 = 2;

    t158 = (x677+((x678>x679)*x680));

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x681 = -49282092872488LL;
	int16_t x682 = INT16_MAX;
	uint32_t x684 = UINT32_MAX;
	static volatile int64_t t159 = -2LL;

    t159 = (x681+((x682>x683)*x684));

    if (t159 != -49277797905193LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x685 = 45224205422LLU;
	static int64_t x686 = -2098459147LL;
	int32_t x687 = INT32_MIN;
	volatile uint32_t x688 = 0U;

    t160 = (x685+((x686>x687)*x688));

    if (t160 != 45224205422LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x690 = 4583806LLU;
	static volatile int16_t x691 = INT16_MAX;
	uint32_t x692 = 0U;
	volatile int64_t t161 = 26812028LL;

    t161 = (x689+((x690>x691)*x692));

    if (t161 != 14194LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x695 = 25U;
	static int32_t x696 = INT32_MAX;
	static volatile int64_t t162 = 26157LL;

    t162 = (x693+((x694>x695)*x696));

    if (t162 != 16452LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x697 = -2341;
	uint16_t x698 = UINT16_MAX;
	uint8_t x699 = 0U;
	static int32_t x700 = 40;
	volatile int32_t t163 = -1;

    t163 = (x697+((x698>x699)*x700));

    if (t163 != -2301) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x702 = INT8_MIN;
	static uint8_t x703 = UINT8_MAX;
	static int32_t x704 = INT32_MIN;

    t164 = (x701+((x702>x703)*x704));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x705 = -203507345;
	int8_t x707 = -2;
	uint32_t x708 = UINT32_MAX;

    t165 = (x705+((x706>x707)*x708));

    if (t165 != 4091459950U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x710 = -437;
	uint64_t x711 = 4407279391089LLU;
	uint64_t x712 = 248LLU;
	static uint64_t t166 = 12077051832763LLU;

    t166 = (x709+((x710>x711)*x712));

    if (t166 != 65783LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x713 = INT32_MAX;
	uint32_t x714 = 28965640U;
	int32_t x715 = INT32_MAX;
	volatile int64_t x716 = INT64_MIN;
	static volatile int64_t t167 = 334577LL;

    t167 = (x713+((x714>x715)*x716));

    if (t167 != 2147483647LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x717 = 30U;
	uint64_t x718 = 100912693190LLU;
	int8_t x719 = INT8_MIN;
	int8_t x720 = -1;
	int32_t t168 = -5;

    t168 = (x717+((x718>x719)*x720));

    if (t168 != 30) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x721 = INT8_MAX;
	int64_t x722 = -2323120005LL;
	static uint32_t x723 = UINT32_MAX;
	static int32_t t169 = 101900;

    t169 = (x721+((x722>x723)*x724));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x725 = 1317;
	uint16_t x727 = UINT16_MAX;
	int32_t x728 = INT32_MAX;
	int32_t t170 = -5888932;

    t170 = (x725+((x726>x727)*x728));

    if (t170 != 1317) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x729 = 12883LL;
	int16_t x731 = -649;
	int16_t x732 = INT16_MAX;
	int64_t t171 = -1372982266783927LL;

    t171 = (x729+((x730>x731)*x732));

    if (t171 != 45650LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x733 = -1;
	int32_t x734 = 318365449;
	int64_t x735 = -6479944611344LL;
	int16_t x736 = 201;
	volatile int32_t t172 = 306616;

    t172 = (x733+((x734>x735)*x736));

    if (t172 != 200) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x737 = UINT8_MAX;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 13332U;
	volatile int32_t t173 = 3;

    t173 = (x737+((x738>x739)*x740));

    if (t173 != 13587) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x741 = INT8_MAX;
	int64_t x742 = INT64_MIN;
	int8_t x743 = INT8_MAX;
	uint64_t x744 = 539978438917793216LLU;
	volatile uint64_t t174 = 88LLU;

    t174 = (x741+((x742>x743)*x744));

    if (t174 != 127LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x745 = -963457;
	int64_t x746 = -6604027161586075LL;
	uint16_t x747 = 11855U;
	static int8_t x748 = INT8_MIN;
	int32_t t175 = 23218973;

    t175 = (x745+((x746>x747)*x748));

    if (t175 != -963457) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x749 = 59507135LLU;
	int8_t x750 = 2;
	volatile int64_t x751 = -1LL;
	int16_t x752 = INT16_MIN;
	uint64_t t176 = 38952LLU;

    t176 = (x749+((x750>x751)*x752));

    if (t176 != 59474367LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x753 = -1;
	static int8_t x754 = INT8_MIN;
	static int64_t x756 = INT64_MIN;
	volatile int64_t t177 = 12409149LL;

    t177 = (x753+((x754>x755)*x756));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x761 = UINT16_MAX;
	int32_t x762 = INT32_MAX;
	uint64_t x764 = 267616162698747912LLU;
	volatile uint64_t t178 = 23LLU;

    t178 = (x761+((x762>x763)*x764));

    if (t178 != 267616162698813447LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x767 = INT8_MIN;
	static int8_t x768 = -17;
	int32_t t179 = 2583;

    t179 = (x765+((x766>x767)*x768));

    if (t179 != -18) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x769 = 7U;
	volatile uint16_t x770 = 0U;
	static int64_t x771 = INT64_MAX;
	static int32_t x772 = INT32_MIN;
	volatile int32_t t180 = 15702;

    t180 = (x769+((x770>x771)*x772));

    if (t180 != 7) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x773 = UINT8_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MAX;
	volatile int32_t t181 = -1926;

    t181 = (x773+((x774>x775)*x776));

    if (t181 != 33022) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x781 = 65932956014196LLU;
	static int8_t x783 = INT8_MIN;
	static uint8_t x784 = 0U;
	volatile uint64_t t182 = 126877097132490LLU;

    t182 = (x781+((x782>x783)*x784));

    if (t182 != 65932956014196LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x786 = -137298145LL;
	volatile uint16_t x787 = UINT16_MAX;
	volatile int64_t t183 = -1093325024384479614LL;

    t183 = (x785+((x786>x787)*x788));

    if (t183 != 3LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x790 = UINT16_MAX;
	int8_t x791 = 1;
	static int32_t x792 = INT32_MAX;
	volatile int32_t t184 = 522392;

    t184 = (x789+((x790>x791)*x792));

    if (t184 != 2147425342) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x793 = 4755347538117LLU;
	int32_t x795 = -1;
	static uint64_t x796 = 49021LLU;
	volatile uint64_t t185 = 55LLU;

    t185 = (x793+((x794>x795)*x796));

    if (t185 != 4755347538117LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x797 = 27;
	int64_t x799 = INT64_MIN;
	volatile int16_t x800 = INT16_MIN;
	int32_t t186 = -84711088;

    t186 = (x797+((x798>x799)*x800));

    if (t186 != -32741) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x801 = INT16_MAX;
	static int8_t x802 = INT8_MIN;
	int64_t x803 = INT64_MIN;
	volatile int8_t x804 = INT8_MIN;
	static volatile int32_t t187 = -6572229;

    t187 = (x801+((x802>x803)*x804));

    if (t187 != 32639) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x806 = 30805999572LLU;
	int8_t x807 = -1;
	volatile int32_t t188 = 11;

    t188 = (x805+((x806>x807)*x808));

    if (t188 != 15) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x809 = 1012U;
	volatile int8_t x810 = -26;
	static int32_t x812 = -1;
	static int32_t t189 = -13649;

    t189 = (x809+((x810>x811)*x812));

    if (t189 != 1011) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x814 = -1LL;
	int8_t x815 = -24;
	static uint8_t x816 = 0U;
	volatile int32_t t190 = INT32_MAX;

    t190 = (x813+((x814>x815)*x816));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x817 = 139825212887110858LL;
	int16_t x819 = INT16_MIN;
	static int16_t x820 = -1;
	static int64_t t191 = -321563964667LL;

    t191 = (x817+((x818>x819)*x820));

    if (t191 != 139825212887110857LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x821 = 8;
	int32_t x822 = -1;
	int16_t x823 = -1;
	static volatile int8_t x824 = INT8_MIN;
	static volatile int32_t t192 = 0;

    t192 = (x821+((x822>x823)*x824));

    if (t192 != 8) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x825 = INT8_MAX;
	static volatile int8_t x826 = INT8_MAX;
	static uint16_t x827 = UINT16_MAX;
	uint8_t x828 = 0U;

    t193 = (x825+((x826>x827)*x828));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x833 = 3U;
	uint64_t x834 = 2001878597LLU;
	static int8_t x836 = 10;
	volatile int32_t t194 = 75470282;

    t194 = (x833+((x834>x835)*x836));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x837 = 18118U;
	static volatile int32_t x838 = INT32_MIN;
	volatile int16_t x839 = 2905;
	int64_t x840 = -1007959LL;
	static volatile int64_t t195 = 825734LL;

    t195 = (x837+((x838>x839)*x840));

    if (t195 != 18118LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x841 = -1LL;
	int8_t x842 = INT8_MIN;
	uint16_t x843 = 1249U;
	static int32_t x844 = 1;

    t196 = (x841+((x842>x843)*x844));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x845 = UINT32_MAX;
	int64_t x847 = -1LL;
	int64_t x848 = INT64_MIN;
	static volatile int64_t t197 = -1LL;

    t197 = (x845+((x846>x847)*x848));

    if (t197 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x849 = -1;
	static uint32_t x850 = 93055464U;
	int32_t x852 = INT32_MAX;
	volatile int32_t t198 = 1;

    t198 = (x849+((x850>x851)*x852));

    if (t198 != 2147483646) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x853 = UINT64_MAX;
	int16_t x854 = -1;
	uint64_t t199 = UINT64_MAX;

    t199 = (x853+((x854>x855)*x856));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

