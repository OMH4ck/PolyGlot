
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

static int32_t x3 = INT32_MIN;
static uint16_t x8 = UINT16_MAX;
int64_t x10 = INT64_MIN;
int64_t x16 = INT64_MAX;
volatile int32_t t4 = 191541;
static int16_t x35 = -1;
volatile uint8_t x37 = UINT8_MAX;
int8_t x38 = -1;
static int32_t t10 = 7;
volatile int64_t x49 = -1LL;
volatile uint32_t x51 = 25421U;
int32_t x53 = INT32_MIN;
static uint32_t x66 = 90019126U;
int16_t x68 = 144;
static int32_t t16 = 25982479;
volatile int32_t t17 = -43832323;
static uint32_t x74 = 6U;
volatile int16_t x75 = 5575;
int32_t x78 = 69;
volatile uint8_t x88 = UINT8_MAX;
static volatile int32_t t21 = -508969161;
volatile int16_t x93 = INT16_MIN;
uint8_t x103 = 1U;
volatile int32_t x110 = -57286;
static uint8_t x111 = 4U;
int8_t x112 = -1;
static int32_t x116 = INT32_MIN;
int16_t x118 = INT16_MIN;
int64_t x122 = INT64_MIN;
int32_t t31 = -2779647;
int16_t x132 = INT16_MIN;
int32_t x134 = INT32_MIN;
volatile int8_t x138 = 1;
int32_t x140 = -737157524;
int32_t t34 = -642408102;
int64_t x150 = -458327465110LL;
volatile uint16_t x156 = 2795U;
volatile int32_t t40 = 574;
int8_t x165 = INT8_MIN;
uint32_t x178 = 457545290U;
int8_t x184 = INT8_MIN;
int16_t x196 = 1;
static uint32_t x197 = 445287U;
static uint32_t x206 = UINT32_MAX;
static int8_t x209 = INT8_MIN;
volatile int32_t t52 = -13395;
int64_t x213 = -1LL;
int32_t t53 = -634;
volatile int16_t x218 = -1;
volatile int32_t t55 = -1;
int16_t x228 = INT16_MIN;
static int64_t x230 = 34751061LL;
volatile int64_t x232 = INT64_MAX;
int16_t x235 = -1;
static volatile int16_t x238 = INT16_MIN;
static uint16_t x239 = 3796U;
int32_t t59 = -398555190;
static volatile int32_t t60 = -1;
static uint16_t x250 = 1U;
uint8_t x253 = UINT8_MAX;
volatile int8_t x257 = -1;
int64_t x259 = -1LL;
static uint64_t x260 = UINT64_MAX;
volatile int32_t t64 = 1405;
static uint64_t x261 = 15186493LLU;
uint32_t x267 = 6266U;
uint8_t x271 = 104U;
uint64_t x276 = 6354967579103LLU;
int32_t t68 = 2765;
static int16_t x282 = -1;
int32_t t70 = 13552504;
uint32_t x291 = 536459821U;
volatile int32_t t72 = -1014615;
volatile int32_t t74 = -217040;
volatile int64_t x301 = INT64_MAX;
volatile uint32_t x304 = UINT32_MAX;
int32_t t75 = -13052900;
int16_t x310 = 1;
int32_t x320 = -379168666;
static int16_t x322 = INT16_MAX;
static uint16_t x324 = 1121U;
static int32_t t81 = 86;
static int32_t t82 = -441058332;
uint8_t x333 = 1U;
uint16_t x337 = 6U;
int64_t x338 = -39971436681416LL;
int32_t t84 = -329832;
uint64_t x348 = UINT64_MAX;
static int32_t t86 = -498575;
volatile int8_t x353 = -1;
volatile uint16_t x361 = 10117U;
volatile int8_t x376 = INT8_MIN;
int32_t t93 = -441701071;
static int32_t x378 = 6;
static int64_t x384 = INT64_MIN;
uint8_t x385 = 3U;
int32_t x387 = -1;
int64_t x391 = -371158835LL;
volatile int32_t t97 = 0;
int32_t t101 = -2;
volatile int16_t x413 = 1;
int32_t t103 = -1;
int16_t x421 = INT16_MAX;
int32_t t105 = -220262620;
volatile int32_t x427 = INT32_MIN;
volatile int8_t x430 = INT8_MIN;
volatile uint16_t x432 = 39U;
volatile int32_t t107 = 2;
int16_t x433 = -1;
uint8_t x434 = 26U;
int8_t x435 = -8;
volatile int8_t x444 = INT8_MIN;
volatile int32_t t111 = 1921;
int8_t x450 = INT8_MIN;
uint32_t x453 = 301181626U;
int32_t x454 = INT32_MAX;
volatile int32_t t113 = -1785;
static int64_t x458 = INT64_MAX;
int64_t x461 = INT64_MIN;
int32_t t115 = 5313331;
int16_t x465 = INT16_MAX;
uint16_t x472 = 2280U;
int32_t t118 = -338565964;
int32_t x478 = -1;
volatile int32_t t119 = 3;
volatile int16_t x484 = INT16_MIN;
int32_t t120 = 11283529;
int8_t x499 = INT8_MIN;
uint8_t x500 = 3U;
volatile int32_t t126 = 210;
uint16_t x510 = 1184U;
uint32_t x512 = 81U;
static int16_t x521 = 12;
int32_t x526 = INT32_MAX;
int32_t t134 = -1555232;
uint32_t x543 = 14176649U;
static int32_t t135 = -803619893;
int8_t x545 = -34;
uint64_t x552 = 2LLU;
int16_t x556 = INT16_MAX;
uint8_t x563 = 31U;
int32_t x565 = INT32_MIN;
int32_t t142 = -20537;
static volatile uint64_t x574 = 1518LLU;
int16_t x579 = 1;
int8_t x587 = -4;
int32_t x589 = -1;
volatile int32_t x598 = -1;
int16_t x603 = -1;
uint32_t x611 = UINT32_MAX;
static int64_t x614 = INT64_MAX;
static int16_t x619 = INT16_MAX;
int32_t x620 = INT32_MIN;
int32_t t154 = -1023036228;
volatile uint32_t x625 = 637U;
static int64_t x626 = 0LL;
int32_t t157 = 253144986;
static volatile int64_t x635 = -1LL;
uint16_t x636 = 15U;
int64_t x638 = -20684714LL;
int32_t x640 = INT32_MIN;
static int16_t x644 = -100;
uint16_t x645 = UINT16_MAX;
static int32_t t162 = -59264;
static uint8_t x656 = UINT8_MAX;
int8_t x659 = INT8_MAX;
uint16_t x662 = UINT16_MAX;
int16_t x666 = -121;
uint8_t x668 = 2U;
volatile int16_t x671 = INT16_MIN;
uint64_t x672 = 304715LLU;
int32_t x676 = INT32_MIN;
uint16_t x680 = 48U;
int32_t x685 = INT32_MIN;
static uint32_t x690 = 3U;
int16_t x693 = -1;
int8_t x696 = INT8_MAX;
uint8_t x698 = 99U;
int16_t x699 = -1;
volatile int32_t t177 = -1;
int8_t x713 = -1;
static int32_t x714 = INT32_MIN;
int64_t x720 = 2544028LL;
int32_t x727 = INT32_MAX;
volatile int32_t t183 = 31;
static int8_t x738 = 1;
int32_t t184 = 6126;
uint8_t x744 = UINT8_MAX;
volatile int32_t t185 = -190169089;
uint64_t x746 = 45607370615380185LLU;
uint8_t x747 = UINT8_MAX;
uint16_t x748 = 720U;
uint8_t x756 = UINT8_MAX;
volatile uint64_t x762 = UINT64_MAX;
int16_t x767 = 0;
uint16_t x774 = 5U;
int16_t x775 = -1;
volatile int32_t t194 = -248;
int16_t x782 = -209;
uint32_t x786 = 1U;
int8_t x787 = -1;
static int64_t x788 = INT64_MIN;
uint16_t x798 = UINT16_MAX;


void f0(void) {
    	int32_t x1 = -1;
	static int16_t x2 = INT16_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -18;

    t0 = (x1>((x2!=x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	static int32_t x6 = INT32_MIN;
	static uint8_t x7 = UINT8_MAX;
	static int32_t t1 = -437008;

    t1 = (x5>((x6!=x7)*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	static int32_t x12 = -5957744;
	volatile int32_t t2 = 577548;

    t2 = (x9>((x10!=x11)*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	static int32_t x14 = 18;
	static uint32_t x15 = UINT32_MAX;
	static int32_t t3 = 610063959;

    t3 = (x13>((x14!=x15)*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 6606604LLU;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	static int16_t x20 = 904;

    t4 = (x17>((x18!=x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t5 = 27134315;

    t5 = (x21>((x22!=x23)*x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	volatile uint16_t x26 = 98U;
	volatile int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 6343596;

    t6 = (x25>((x26!=x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 177U;
	static int32_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	uint32_t x32 = 964193453U;
	volatile int32_t t7 = 72;

    t7 = (x29>((x30!=x31)*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 624367U;
	int16_t x34 = 2498;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -813;

    t8 = (x33>((x34!=x35)*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = -1;
	uint16_t x40 = 1835U;
	static int32_t t9 = -394397;

    t9 = (x37>((x38!=x39)*x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int16_t x42 = -1;
	static int64_t x43 = INT64_MAX;
	static int16_t x44 = 361;

    t10 = (x41>((x42!=x43)*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 53;
	int64_t x46 = 1389571392888LL;
	uint32_t x47 = UINT32_MAX;
	static uint16_t x48 = 6863U;
	int32_t t11 = -1;

    t11 = (x45>((x46!=x47)*x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = UINT64_MAX;
	int64_t x52 = 49782LL;
	volatile int32_t t12 = -8987;

    t12 = (x49>((x50!=x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = 1LL;
	volatile int64_t x55 = -1LL;
	int16_t x56 = 127;
	int32_t t13 = -410955130;

    t13 = (x53>((x54!=x55)*x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int32_t x58 = -1;
	volatile uint8_t x59 = 6U;
	static int8_t x60 = 50;
	static volatile int32_t t14 = -5826821;

    t14 = (x57>((x58!=x59)*x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x62 = 11777U;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 14U;
	int32_t t15 = 469703196;

    t15 = (x61>((x62!=x63)*x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	int64_t x67 = -1LL;

    t16 = (x65>((x66!=x67)*x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	volatile int16_t x71 = 461;
	int16_t x72 = INT16_MIN;

    t17 = (x69>((x70!=x71)*x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 49706;
	int32_t x76 = -1;
	static volatile int32_t t18 = -5;

    t18 = (x73>((x74!=x75)*x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1068LL;
	uint16_t x79 = 0U;
	static volatile int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 365706564;

    t19 = (x77>((x78!=x79)*x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = 0;
	static int32_t x82 = INT32_MAX;
	volatile int8_t x83 = 15;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = -1644;

    t20 = (x81>((x82!=x83)*x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 19U;
	int8_t x86 = INT8_MIN;
	uint32_t x87 = 2126430932U;

    t21 = (x85>((x86!=x87)*x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 13U;
	int32_t x91 = INT32_MAX;
	static int32_t x92 = -1;
	static volatile int32_t t22 = 3;

    t22 = (x89>((x90!=x91)*x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = INT16_MAX;
	uint32_t x95 = UINT32_MAX;
	static uint8_t x96 = 1U;
	int32_t t23 = 1012;

    t23 = (x93>((x94!=x95)*x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	volatile int32_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = UINT64_MAX;
	int32_t t24 = -413728278;

    t24 = (x97>((x98!=x99)*x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	static int8_t x102 = INT8_MAX;
	static int16_t x104 = INT16_MIN;
	int32_t t25 = 1507957;

    t25 = (x101>((x102!=x103)*x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 40U;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t26 = -495823;

    t26 = (x105>((x106!=x107)*x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -15;
	static int32_t t27 = 584372;

    t27 = (x109>((x110!=x111)*x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	int16_t x114 = -1008;
	static volatile int16_t x115 = INT16_MIN;
	int32_t t28 = 13;

    t28 = (x113>((x114!=x115)*x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -3;
	static int64_t x119 = INT64_MAX;
	int16_t x120 = -1;
	int32_t t29 = -547925275;

    t29 = (x117>((x118!=x119)*x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int64_t x123 = -14LL;
	static int16_t x124 = INT16_MIN;
	int32_t t30 = 767;

    t30 = (x121>((x122!=x123)*x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 495U;
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 454LLU;

    t31 = (x125>((x126!=x127)*x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x129 = -10;
	int32_t x130 = INT32_MIN;
	int32_t x131 = -5328;
	volatile int32_t t32 = -757067;

    t32 = (x129>((x130!=x131)*x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -37;
	uint64_t x135 = 5711483LLU;
	int8_t x136 = 26;
	int32_t t33 = 71;

    t33 = (x133>((x134!=x135)*x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 10U;
	int64_t x139 = -1LL;

    t34 = (x137>((x138!=x139)*x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MIN;
	static int64_t x144 = 1537865371402949876LL;
	int32_t t35 = -4;

    t35 = (x141>((x142!=x143)*x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	volatile int32_t x146 = -4683684;
	int8_t x147 = -18;
	uint8_t x148 = 42U;
	int32_t t36 = -20373;

    t36 = (x145>((x146!=x147)*x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 12;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t37 = 3;

    t37 = (x149>((x150!=x151)*x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	volatile int64_t x155 = INT64_MIN;
	static volatile int32_t t38 = -3606;

    t38 = (x153>((x154!=x155)*x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 17814U;
	int8_t x158 = INT8_MIN;
	static int8_t x159 = 19;
	int32_t x160 = -1;
	int32_t t39 = 923076;

    t39 = (x157>((x158!=x159)*x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 3404858LLU;
	int16_t x162 = 52;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 861677458LLU;

    t40 = (x161>((x162!=x163)*x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MAX;
	volatile uint8_t x168 = 0U;
	volatile int32_t t41 = 125;

    t41 = (x165>((x166!=x167)*x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -910619478;
	int64_t x170 = INT64_MAX;
	uint32_t x171 = 3U;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 39065195;

    t42 = (x169>((x170!=x171)*x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 14U;
	int16_t x174 = -6908;
	uint8_t x175 = 3U;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -1514942;

    t43 = (x173>((x174!=x175)*x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -25;
	static int32_t x179 = INT32_MIN;
	uint64_t x180 = 5129452598LLU;
	int32_t t44 = 497;

    t44 = (x177>((x178!=x179)*x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 140197;
	int32_t t45 = -1879;

    t45 = (x181>((x182!=x183)*x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = 909;
	uint16_t x186 = 0U;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -8024807;

    t46 = (x185>((x186!=x187)*x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 3189;
	int64_t x190 = -1LL;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = -43389497LL;
	int32_t t47 = 12320;

    t47 = (x189>((x190!=x191)*x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 7582397;
	volatile uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	volatile int32_t t48 = 97729;

    t48 = (x193>((x194!=x195)*x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	int8_t x200 = INT8_MIN;
	static int32_t t49 = 3721570;

    t49 = (x197>((x198!=x199)*x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -178815;

    t50 = (x201>((x202!=x203)*x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x207 = 106;
	int64_t x208 = -1481744219203221LL;
	int32_t t51 = -833;

    t51 = (x205>((x206!=x207)*x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x210 = UINT16_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;

    t52 = (x209>((x210!=x211)*x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x214 = 5833163773859LLU;
	int8_t x215 = 4;
	static uint8_t x216 = 15U;

    t53 = (x213>((x214!=x215)*x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 780;
	uint32_t x219 = 29812U;
	int64_t x220 = -1LL;
	volatile int32_t t54 = 105334598;

    t54 = (x217>((x218!=x219)*x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	int16_t x222 = 1129;
	uint8_t x223 = 43U;
	uint64_t x224 = UINT64_MAX;

    t55 = (x221>((x222!=x223)*x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = -1;
	int32_t t56 = 1;

    t56 = (x225>((x226!=x227)*x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	uint64_t x231 = 107399480243585LLU;
	int32_t t57 = -1;

    t57 = (x229>((x230!=x231)*x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int16_t x234 = -1;
	uint8_t x236 = 4U;
	int32_t t58 = 28677;

    t58 = (x233>((x234!=x235)*x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 265026741;
	uint8_t x240 = 6U;

    t59 = (x237>((x238!=x239)*x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile uint64_t x242 = 2385990282407LLU;
	static volatile int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;

    t60 = (x241>((x242!=x243)*x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 11U;
	int8_t x246 = -1;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t61 = 0;

    t61 = (x245>((x246!=x247)*x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	int8_t x251 = -56;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -405;

    t62 = (x249>((x250!=x251)*x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = 2584512374060398LLU;
	static int8_t x255 = INT8_MIN;
	static int32_t x256 = -1;
	volatile int32_t t63 = 1;

    t63 = (x253>((x254!=x255)*x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MAX;

    t64 = (x257>((x258!=x259)*x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = INT16_MIN;
	static uint32_t x263 = UINT32_MAX;
	static int64_t x264 = INT64_MIN;
	int32_t t65 = 1896542;

    t65 = (x261>((x262!=x263)*x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = INT16_MIN;
	uint64_t x266 = 2315086958708647LLU;
	uint32_t x268 = 798600U;
	volatile int32_t t66 = -52388;

    t66 = (x265>((x266!=x267)*x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 124U;
	uint8_t x270 = 1U;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -1;

    t67 = (x269>((x270!=x271)*x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MIN;
	volatile int8_t x275 = INT8_MIN;

    t68 = (x273>((x274!=x275)*x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	static volatile uint8_t x279 = 2U;
	int64_t x280 = -3019933530294374516LL;
	static int32_t t69 = -52;

    t69 = (x277>((x278!=x279)*x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x281 = INT8_MAX;
	volatile uint32_t x283 = 894U;
	uint64_t x284 = 12269729914678LLU;

    t70 = (x281>((x282!=x283)*x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 9U;
	int64_t x286 = -1LL;
	int16_t x287 = -2;
	int64_t x288 = -715910779761LL;
	int32_t t71 = -85911283;

    t71 = (x285>((x286!=x287)*x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = 232457625564LL;
	uint32_t x290 = 5277752U;
	int8_t x292 = -1;

    t72 = (x289>((x290!=x291)*x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	volatile int16_t x294 = -1;
	int16_t x295 = 0;
	static volatile uint32_t x296 = 3958804U;
	int32_t t73 = -5;

    t73 = (x293>((x294!=x295)*x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 7U;
	int16_t x298 = INT16_MAX;
	int16_t x299 = -36;
	uint16_t x300 = 8181U;

    t74 = (x297>((x298!=x299)*x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x302 = 25412713;
	int64_t x303 = -1LL;

    t75 = (x301>((x302!=x303)*x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 19398650616989291LLU;
	static uint32_t x308 = UINT32_MAX;
	volatile int32_t t76 = 14;

    t76 = (x305>((x306!=x307)*x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 11U;
	volatile int64_t x311 = INT64_MAX;
	int32_t x312 = 350348;
	static volatile int32_t t77 = 31;

    t77 = (x309>((x310!=x311)*x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 10U;
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = -1;
	int16_t x316 = -1;
	volatile int32_t t78 = -58226;

    t78 = (x313>((x314!=x315)*x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MAX;
	int64_t x319 = -176035434534401LL;
	volatile int32_t t79 = -3132507;

    t79 = (x317>((x318!=x319)*x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = -1;
	static uint32_t x323 = UINT32_MAX;
	volatile int32_t t80 = 122251;

    t80 = (x321>((x322!=x323)*x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MAX;
	uint16_t x328 = 232U;

    t81 = (x325>((x326!=x327)*x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = -1;
	static uint16_t x331 = 1997U;
	uint32_t x332 = 2U;

    t82 = (x329>((x330!=x331)*x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x334 = -1LL;
	uint8_t x335 = 0U;
	int16_t x336 = 17;
	static volatile int32_t t83 = -23602;

    t83 = (x333>((x334!=x335)*x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x339 = 4U;
	uint16_t x340 = 17U;

    t84 = (x337>((x338!=x339)*x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int16_t x342 = 686;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = -9121;

    t85 = (x341>((x342!=x343)*x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = UINT8_MAX;
	static int32_t x346 = -12257455;
	static int32_t x347 = INT32_MAX;

    t86 = (x345>((x346!=x347)*x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 461LLU;
	int64_t x350 = INT64_MIN;
	volatile uint8_t x351 = 1U;
	volatile int64_t x352 = -505598801854LL;
	volatile int32_t t87 = -4411;

    t87 = (x349>((x350!=x351)*x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = -1;
	int64_t x355 = 21096LL;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t88 = -8;

    t88 = (x353>((x354!=x355)*x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = INT8_MIN;
	static int16_t x358 = INT16_MAX;
	int16_t x359 = INT16_MIN;
	int32_t x360 = 545320948;
	static volatile int32_t t89 = -36;

    t89 = (x357>((x358!=x359)*x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	static uint16_t x364 = UINT16_MAX;
	int32_t t90 = -24875679;

    t90 = (x361>((x362!=x363)*x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = 7255972147757896LLU;
	static int32_t x367 = 1;
	int16_t x368 = -4057;
	int32_t t91 = -61786602;

    t91 = (x365>((x366!=x367)*x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int64_t x370 = -1187589LL;
	uint16_t x371 = UINT16_MAX;
	uint16_t x372 = 8U;
	volatile int32_t t92 = -10532332;

    t92 = (x369>((x370!=x371)*x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MIN;
	static volatile uint64_t x375 = 60LLU;

    t93 = (x373>((x374!=x375)*x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint16_t x377 = 250U;
	int32_t x379 = INT32_MAX;
	int16_t x380 = 1;
	int32_t t94 = -3061353;

    t94 = (x377>((x378!=x379)*x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	static uint64_t x382 = 16925495190578LLU;
	int32_t x383 = INT32_MIN;
	static volatile int32_t t95 = -605842;

    t95 = (x381>((x382!=x383)*x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = 112U;
	int16_t x388 = INT16_MIN;
	int32_t t96 = -7463;

    t96 = (x385>((x386!=x387)*x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	int8_t x390 = 34;
	int64_t x392 = INT64_MIN;

    t97 = (x389>((x390!=x391)*x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -1969;
	uint32_t x394 = 7U;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -6947;

    t98 = (x393>((x394!=x395)*x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 7029U;
	int16_t x398 = -1;
	int64_t x399 = -52897LL;
	uint16_t x400 = 1020U;
	int32_t t99 = -60144123;

    t99 = (x397>((x398!=x399)*x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 44;
	static volatile int32_t x402 = INT32_MIN;
	uint8_t x403 = 2U;
	int64_t x404 = -1760411125LL;
	volatile int32_t t100 = 1;

    t100 = (x401>((x402!=x403)*x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	int32_t x406 = 1;
	int16_t x407 = -5;
	int32_t x408 = 6;

    t101 = (x405>((x406!=x407)*x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -1;
	volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = 91LLU;
	uint32_t x412 = 780154321U;
	volatile int32_t t102 = 1015623174;

    t102 = (x409>((x410!=x411)*x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = -4862;
	uint8_t x415 = 6U;
	uint64_t x416 = 1348058184LLU;

    t103 = (x413>((x414!=x415)*x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	uint64_t x418 = UINT64_MAX;
	static uint64_t x419 = 6615216LLU;
	uint32_t x420 = 26886U;
	int32_t t104 = 3089;

    t104 = (x417>((x418!=x419)*x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MAX;
	volatile uint8_t x424 = 1U;

    t105 = (x421>((x422!=x423)*x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int16_t x426 = 7;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -2441738;

    t106 = (x425>((x426!=x427)*x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = -1;
	int32_t x431 = -26252;

    t107 = (x429>((x430!=x431)*x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x436 = INT64_MAX;
	int32_t t108 = 240548;

    t108 = (x433>((x434!=x435)*x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	int64_t x438 = 6LL;
	int16_t x439 = -1;
	int8_t x440 = INT8_MAX;
	volatile int32_t t109 = -19618132;

    t109 = (x437>((x438!=x439)*x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 63182U;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MAX;
	volatile int32_t t110 = 1535004;

    t110 = (x441>((x442!=x443)*x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	uint8_t x446 = 3U;
	int8_t x447 = INT8_MIN;
	uint64_t x448 = 2106216LLU;

    t111 = (x445>((x446!=x447)*x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	uint16_t x451 = 100U;
	int16_t x452 = -1;
	int32_t t112 = 924151;

    t112 = (x449>((x450!=x451)*x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x455 = INT64_MIN;
	volatile uint8_t x456 = UINT8_MAX;

    t113 = (x453>((x454!=x455)*x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 2494468968427127908LLU;
	static int16_t x459 = -31;
	uint64_t x460 = 159372192LLU;
	volatile int32_t t114 = -364211378;

    t114 = (x457>((x458!=x459)*x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	uint32_t x463 = 7052308U;
	static uint8_t x464 = 3U;

    t115 = (x461>((x462!=x463)*x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	uint64_t x467 = 18977553LLU;
	static int64_t x468 = -17854014546LL;
	volatile int32_t t116 = 117;

    t116 = (x465>((x466!=x467)*x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 16725295LLU;
	int32_t x470 = 75840;
	int32_t x471 = INT32_MIN;
	volatile int32_t t117 = 36500;

    t117 = (x469>((x470!=x471)*x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	int32_t x474 = INT32_MIN;
	static int64_t x475 = -16270657656LL;
	uint16_t x476 = UINT16_MAX;

    t118 = (x473>((x474!=x475)*x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int8_t x479 = -5;
	uint8_t x480 = 101U;

    t119 = (x477>((x478!=x479)*x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = INT8_MAX;

    t120 = (x481>((x482!=x483)*x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -10;
	volatile int64_t x486 = INT64_MIN;
	static int32_t x487 = INT32_MIN;
	volatile uint32_t x488 = UINT32_MAX;
	volatile int32_t t121 = 4;

    t121 = (x485>((x486!=x487)*x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = 460177331034761831LL;
	int64_t x490 = INT64_MAX;
	int16_t x491 = -4812;
	uint64_t x492 = UINT64_MAX;
	static volatile int32_t t122 = 104834;

    t122 = (x489>((x490!=x491)*x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -24;
	volatile int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = 1U;
	volatile int32_t t123 = 839533;

    t123 = (x493>((x494!=x495)*x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 220U;
	uint8_t x498 = UINT8_MAX;
	volatile int32_t t124 = -452;

    t124 = (x497>((x498!=x499)*x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MIN;
	static int8_t x503 = -1;
	uint32_t x504 = 864208380U;
	int32_t t125 = -53090804;

    t125 = (x501>((x502!=x503)*x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 1;
	int64_t x506 = 43LL;
	uint32_t x507 = 16068U;
	static volatile int32_t x508 = -55;

    t126 = (x505>((x506!=x507)*x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -20;
	int32_t x511 = 0;
	volatile int32_t t127 = 130415875;

    t127 = (x509>((x510!=x511)*x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	volatile uint64_t x514 = UINT64_MAX;
	static uint16_t x515 = UINT16_MAX;
	static uint32_t x516 = 13342621U;
	volatile int32_t t128 = -1386;

    t128 = (x513>((x514!=x515)*x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = INT64_MIN;
	int8_t x518 = -1;
	int32_t x519 = -1227296;
	int32_t x520 = -1;
	volatile int32_t t129 = -502861;

    t129 = (x517>((x518!=x519)*x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -53863;
	int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;
	int32_t t130 = -12608;

    t130 = (x521>((x522!=x523)*x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int16_t x527 = INT16_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t131 = 0;

    t131 = (x525>((x526!=x527)*x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 2;
	uint64_t x530 = UINT64_MAX;
	uint32_t x531 = UINT32_MAX;
	volatile int64_t x532 = INT64_MAX;
	volatile int32_t t132 = 967752;

    t132 = (x529>((x530!=x531)*x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -54;
	int32_t x534 = INT32_MIN;
	int16_t x535 = -7;
	int8_t x536 = INT8_MIN;
	static int32_t t133 = -59;

    t133 = (x533>((x534!=x535)*x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 6;
	int32_t x538 = INT32_MIN;
	uint8_t x539 = UINT8_MAX;
	int32_t x540 = INT32_MIN;

    t134 = (x537>((x538!=x539)*x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 10050156;
	int8_t x542 = INT8_MIN;
	int32_t x544 = INT32_MIN;

    t135 = (x541>((x542!=x543)*x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MAX;
	uint64_t x547 = UINT64_MAX;
	int64_t x548 = INT64_MIN;
	volatile int32_t t136 = -434265;

    t136 = (x545>((x546!=x547)*x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 9883666047196022LLU;
	static volatile uint16_t x550 = 1169U;
	static uint8_t x551 = 43U;
	volatile int32_t t137 = -22801537;

    t137 = (x549>((x550!=x551)*x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile int16_t x554 = INT16_MAX;
	int32_t x555 = 241747626;
	static int32_t t138 = 238726959;

    t138 = (x553>((x554!=x555)*x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	int16_t x559 = 119;
	int64_t x560 = -1LL;
	int32_t t139 = 1220087;

    t139 = (x557>((x558!=x559)*x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	volatile int16_t x562 = INT16_MIN;
	volatile uint32_t x564 = 0U;
	volatile int32_t t140 = 1457037;

    t140 = (x561>((x562!=x563)*x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x566 = 89126LLU;
	int64_t x567 = -5LL;
	int8_t x568 = -1;
	volatile int32_t t141 = 168;

    t141 = (x565>((x566!=x567)*x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MIN;
	uint16_t x570 = 31228U;
	uint32_t x571 = 21U;
	static int16_t x572 = 1506;

    t142 = (x569>((x570!=x571)*x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 99U;
	int8_t x575 = 1;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t143 = 7;

    t143 = (x573>((x574!=x575)*x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = INT16_MAX;
	int8_t x578 = INT8_MAX;
	int64_t x580 = INT64_MAX;
	volatile int32_t t144 = -1;

    t144 = (x577>((x578!=x579)*x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = INT8_MAX;
	static int32_t x583 = -1;
	volatile int64_t x584 = 32962LL;
	volatile int32_t t145 = 425;

    t145 = (x581>((x582!=x583)*x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	volatile uint8_t x586 = 0U;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = 4776670;

    t146 = (x585>((x586!=x587)*x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = UINT64_MAX;
	int16_t x591 = -9114;
	static int16_t x592 = -1;
	static int32_t t147 = 7;

    t147 = (x589>((x590!=x591)*x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 342321744LL;
	int32_t x594 = INT32_MAX;
	int64_t x595 = INT64_MAX;
	int16_t x596 = 4;
	int32_t t148 = 51518;

    t148 = (x593>((x594!=x595)*x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 536619494;
	uint16_t x599 = 115U;
	int32_t x600 = -1;
	volatile int32_t t149 = 0;

    t149 = (x597>((x598!=x599)*x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 424542U;
	int32_t x602 = -1;
	static int8_t x604 = -1;
	static int32_t t150 = -54579;

    t150 = (x601>((x602!=x603)*x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x605 = -1LL;
	int16_t x606 = -9591;
	uint8_t x607 = 23U;
	static uint32_t x608 = 18835U;
	volatile int32_t t151 = -109560173;

    t151 = (x605>((x606!=x607)*x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = INT8_MIN;
	int32_t x610 = INT32_MAX;
	uint16_t x612 = 80U;
	volatile int32_t t152 = 79052;

    t152 = (x609>((x610!=x611)*x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = 30874231643192LL;
	int32_t x615 = INT32_MAX;
	static int64_t x616 = 324479131280LL;
	volatile int32_t t153 = 0;

    t153 = (x613>((x614!=x615)*x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	volatile int16_t x618 = INT16_MAX;

    t154 = (x617>((x618!=x619)*x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	uint16_t x622 = 56U;
	uint16_t x623 = 112U;
	static uint64_t x624 = 12943192798176LLU;
	int32_t t155 = -593;

    t155 = (x621>((x622!=x623)*x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x627 = UINT8_MAX;
	uint16_t x628 = 7U;
	static volatile int32_t t156 = -1801266;

    t156 = (x625>((x626!=x627)*x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	int8_t x630 = -1;
	volatile uint64_t x631 = 126517LLU;
	int16_t x632 = INT16_MIN;

    t157 = (x629>((x630!=x631)*x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 57U;
	uint8_t x634 = UINT8_MAX;
	int32_t t158 = -2203389;

    t158 = (x633>((x634!=x635)*x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x639 = INT32_MAX;
	int32_t t159 = 1916;

    t159 = (x637>((x638!=x639)*x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = -499;
	volatile int8_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	int32_t t160 = 1645;

    t160 = (x641>((x642!=x643)*x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = INT8_MAX;
	int64_t x647 = INT64_MAX;
	uint8_t x648 = 11U;
	static int32_t t161 = 22387;

    t161 = (x645>((x646!=x647)*x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = 1U;
	int8_t x650 = INT8_MAX;
	int64_t x651 = 14235LL;
	volatile uint32_t x652 = UINT32_MAX;

    t162 = (x649>((x650!=x651)*x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint16_t x653 = UINT16_MAX;
	static uint32_t x654 = UINT32_MAX;
	static int8_t x655 = 2;
	int32_t t163 = 1;

    t163 = (x653>((x654!=x655)*x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	int8_t x658 = INT8_MIN;
	static int64_t x660 = 99416988960LL;
	static int32_t t164 = -248217;

    t164 = (x657>((x658!=x659)*x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 6U;
	int16_t x663 = -1;
	volatile int64_t x664 = INT64_MIN;
	volatile int32_t t165 = 59;

    t165 = (x661>((x662!=x663)*x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 2U;
	static int64_t x667 = -8496020282330028LL;
	int32_t t166 = 107;

    t166 = (x665>((x666!=x667)*x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 162266414194985LL;
	uint16_t x670 = 10U;
	volatile int32_t t167 = 4;

    t167 = (x669>((x670!=x671)*x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	uint8_t x674 = UINT8_MAX;
	int8_t x675 = -1;
	volatile int32_t t168 = 110621;

    t168 = (x673>((x674!=x675)*x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint64_t x677 = 19769516LLU;
	int64_t x678 = 10LL;
	int64_t x679 = INT64_MIN;
	int32_t t169 = 12;

    t169 = (x677>((x678!=x679)*x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	static int64_t x682 = INT64_MAX;
	int16_t x683 = 1;
	static int32_t x684 = INT32_MAX;
	volatile int32_t t170 = -1058110438;

    t170 = (x681>((x682!=x683)*x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x686 = INT64_MAX;
	int8_t x687 = INT8_MAX;
	int64_t x688 = INT64_MAX;
	int32_t t171 = 1902;

    t171 = (x685>((x686!=x687)*x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MIN;
	static uint32_t x691 = UINT32_MAX;
	int64_t x692 = -1LL;
	int32_t t172 = -16846464;

    t172 = (x689>((x690!=x691)*x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x694 = INT16_MIN;
	static int16_t x695 = INT16_MIN;
	volatile int32_t t173 = -20756;

    t173 = (x693>((x694!=x695)*x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x697 = UINT16_MAX;
	int8_t x700 = INT8_MIN;
	int32_t t174 = -323120131;

    t174 = (x697>((x698!=x699)*x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MIN;
	uint64_t x704 = 3LLU;
	volatile int32_t t175 = 1816;

    t175 = (x701>((x702!=x703)*x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	uint32_t x706 = UINT32_MAX;
	int16_t x707 = INT16_MAX;
	static uint64_t x708 = 7498065748LLU;
	static int32_t t176 = 1626;

    t176 = (x705>((x706!=x707)*x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x709 = 4U;
	volatile uint8_t x710 = UINT8_MAX;
	uint64_t x711 = UINT64_MAX;
	uint16_t x712 = UINT16_MAX;

    t177 = (x709>((x710!=x711)*x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x715 = 371;
	volatile int64_t x716 = -1LL;
	int32_t t178 = 0;

    t178 = (x713>((x714!=x715)*x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	volatile int32_t t179 = 10256017;

    t179 = (x717>((x718!=x719)*x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MAX;
	int64_t x722 = INT64_MAX;
	static uint16_t x723 = UINT16_MAX;
	int32_t x724 = -7;
	static volatile int32_t t180 = 0;

    t180 = (x721>((x722!=x723)*x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = UINT64_MAX;
	static uint8_t x726 = UINT8_MAX;
	static int16_t x728 = -1;
	volatile int32_t t181 = -3969982;

    t181 = (x725>((x726!=x727)*x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	int16_t x730 = INT16_MAX;
	int16_t x731 = INT16_MAX;
	int16_t x732 = -13;
	volatile int32_t t182 = -358533;

    t182 = (x729>((x730!=x731)*x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 3U;
	static uint32_t x734 = 17939474U;
	int8_t x735 = INT8_MIN;
	uint64_t x736 = UINT64_MAX;

    t183 = (x733>((x734!=x735)*x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = 130;
	int64_t x739 = -50888LL;
	static volatile uint64_t x740 = 1005625841LLU;

    t184 = (x737>((x738!=x739)*x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = 111LL;
	uint32_t x742 = 7517090U;
	int32_t x743 = INT32_MAX;

    t185 = (x741>((x742!=x743)*x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	int32_t t186 = 183;

    t186 = (x745>((x746!=x747)*x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -14659877446565LL;
	int32_t x750 = 2;
	int64_t x751 = INT64_MIN;
	static volatile uint8_t x752 = 11U;
	int32_t t187 = -1369;

    t187 = (x749>((x750!=x751)*x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 35LL;
	int8_t x754 = 0;
	int64_t x755 = -1LL;
	volatile int32_t t188 = 164625400;

    t188 = (x753>((x754!=x755)*x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static volatile int64_t x758 = -410626LL;
	static int32_t x759 = -212;
	volatile int64_t x760 = 2821083638930299535LL;
	int32_t t189 = 303;

    t189 = (x757>((x758!=x759)*x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x761 = 8765957186641LLU;
	int64_t x763 = INT64_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t190 = 24;

    t190 = (x761>((x762!=x763)*x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 9074U;
	int64_t x766 = -17LL;
	int32_t x768 = INT32_MIN;
	volatile int32_t t191 = -1;

    t191 = (x765>((x766!=x767)*x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x769 = 1707112U;
	uint64_t x770 = 930876784106372LLU;
	static uint8_t x771 = 15U;
	int16_t x772 = INT16_MAX;
	volatile int32_t t192 = -111130;

    t192 = (x769>((x770!=x771)*x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = 1U;
	static volatile int16_t x776 = 26;
	int32_t t193 = -12195;

    t193 = (x773>((x774!=x775)*x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	uint32_t x778 = 1366U;
	volatile int32_t x779 = -1;
	int16_t x780 = -1;

    t194 = (x777>((x778!=x779)*x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x783 = 6027660573512088LL;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 5390;

    t195 = (x781>((x782!=x783)*x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 59453951909LL;
	int32_t t196 = 97;

    t196 = (x785>((x786!=x787)*x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MIN;
	static int16_t x792 = INT16_MIN;
	volatile int32_t t197 = -4088;

    t197 = (x789>((x790!=x791)*x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -8;
	int32_t x794 = -1;
	uint16_t x795 = 28397U;
	static uint32_t x796 = UINT32_MAX;
	volatile int32_t t198 = 114;

    t198 = (x793>((x794!=x795)*x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	volatile int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MIN;
	static int32_t t199 = 14;

    t199 = (x797>((x798!=x799)*x800));

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

