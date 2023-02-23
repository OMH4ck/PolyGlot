
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

static volatile uint8_t x3 = 12U;
int8_t x6 = INT8_MIN;
static volatile uint16_t x13 = UINT16_MAX;
int32_t x22 = INT32_MIN;
static uint8_t x23 = 37U;
int64_t x27 = -700LL;
int8_t x32 = -1;
uint8_t x36 = UINT8_MAX;
int16_t x41 = -1;
static int32_t x43 = INT32_MIN;
int32_t t10 = 6899504;
int8_t x62 = 5;
volatile int64_t x65 = -1LL;
int16_t x68 = INT16_MIN;
volatile int32_t t17 = -1;
static uint64_t x74 = UINT64_MAX;
volatile int8_t x79 = -9;
volatile int32_t t19 = 0;
int32_t x83 = INT32_MIN;
static uint64_t x86 = 191681LLU;
uint64_t x91 = 12516LLU;
int64_t x96 = -1LL;
int32_t t23 = 6470;
int32_t x100 = -1;
int32_t x107 = INT32_MIN;
static uint8_t x109 = UINT8_MAX;
int8_t x114 = -1;
int32_t t28 = 303250784;
uint32_t x126 = 2257879U;
uint16_t x127 = 0U;
static volatile int16_t x129 = INT16_MAX;
volatile int32_t t32 = -245953;
uint16_t x135 = 19349U;
int64_t x140 = -1LL;
volatile int32_t t34 = 234;
volatile int8_t x143 = INT8_MIN;
static int8_t x149 = INT8_MAX;
static uint16_t x152 = 4U;
uint8_t x156 = 33U;
int64_t x161 = 322LL;
uint16_t x165 = 86U;
int32_t x166 = -2397403;
volatile int32_t t42 = 409953;
int32_t t43 = 47122;
int8_t x177 = INT8_MAX;
int8_t x178 = INT8_MIN;
volatile uint16_t x179 = 769U;
volatile uint32_t x181 = 229U;
volatile int32_t x183 = INT32_MAX;
int32_t t45 = 15624;
static uint16_t x187 = 15U;
volatile int16_t x201 = INT16_MIN;
uint16_t x202 = UINT16_MAX;
int32_t x204 = INT32_MAX;
int64_t x213 = -149357LL;
uint32_t x215 = 9U;
volatile int32_t t53 = -159038;
int32_t x217 = INT32_MIN;
uint8_t x219 = 74U;
volatile int8_t x227 = -1;
volatile int16_t x230 = INT16_MIN;
volatile int32_t x232 = 50;
uint16_t x234 = 44U;
static volatile int32_t t58 = 188412;
int32_t x240 = 19793744;
int32_t t60 = -167269256;
int64_t x249 = -5811445LL;
int8_t x251 = INT8_MIN;
int32_t x280 = 7353972;
static uint32_t x289 = 3383764U;
volatile int8_t x293 = 29;
int64_t x297 = INT64_MIN;
volatile int16_t x303 = -1;
volatile int16_t x305 = -24;
volatile int16_t x310 = 177;
uint32_t x312 = UINT32_MAX;
uint16_t x313 = UINT16_MAX;
static int8_t x318 = INT8_MIN;
int32_t t79 = 7013126;
uint16_t x322 = 603U;
uint32_t x325 = 120U;
int16_t x331 = INT16_MIN;
volatile int32_t x332 = INT32_MIN;
volatile int32_t t82 = 7065;
int64_t x336 = 211LL;
static volatile int32_t t83 = 4848;
int8_t x339 = 7;
int8_t x342 = INT8_MIN;
static uint64_t x344 = 6549695438676421LLU;
static volatile uint32_t x349 = 229302827U;
int64_t x352 = INT64_MIN;
volatile int32_t x364 = INT32_MIN;
int64_t x371 = INT64_MIN;
static int32_t x373 = INT32_MAX;
int32_t t94 = -353928524;
static int64_t x384 = INT64_MAX;
int8_t x393 = INT8_MIN;
int16_t x394 = -5;
int64_t x400 = INT64_MAX;
int32_t t99 = -187779975;
volatile int32_t t100 = 32;
int32_t x412 = 8349461;
volatile int8_t x414 = INT8_MAX;
int32_t x417 = INT32_MAX;
uint16_t x418 = 1U;
int8_t x424 = -1;
uint32_t x427 = 3961U;
int32_t t106 = -1798;
volatile int8_t x430 = 18;
uint64_t x436 = 25333024556483522LLU;
volatile int32_t x437 = -1;
volatile int16_t x438 = INT16_MAX;
volatile uint32_t x443 = UINT32_MAX;
int16_t x450 = INT16_MIN;
volatile int16_t x453 = INT16_MAX;
uint64_t x456 = 20405511LLU;
int32_t t113 = 110899253;
uint64_t x460 = UINT64_MAX;
int16_t x462 = INT16_MIN;
uint64_t x464 = UINT64_MAX;
int32_t t115 = 163238573;
uint32_t x466 = 13U;
int16_t x468 = -1;
int32_t t116 = 10737055;
int64_t x471 = INT64_MIN;
static int32_t x483 = 3222;
volatile int16_t x488 = 1466;
static int8_t x495 = -7;
int32_t t124 = 21386;
uint16_t x510 = UINT16_MAX;
static volatile int16_t x511 = INT16_MIN;
int64_t x518 = INT64_MAX;
static int64_t x519 = 16452093919LL;
int32_t t129 = 245429;
static volatile int8_t x527 = INT8_MIN;
uint8_t x529 = 1U;
int64_t x531 = -24233LL;
int64_t x533 = -1LL;
volatile int32_t x535 = INT32_MIN;
int64_t x542 = INT64_MIN;
volatile int16_t x544 = INT16_MAX;
int32_t x550 = 459658;
int64_t x551 = -713159LL;
uint8_t x559 = 43U;
int32_t t141 = -692351;
uint16_t x571 = 0U;
static int32_t t142 = 47;
static volatile uint32_t x589 = UINT32_MAX;
int16_t x596 = INT16_MIN;
int8_t x599 = INT8_MIN;
static int32_t t149 = 1815;
static uint16_t x601 = UINT16_MAX;
static volatile int32_t t151 = -1;
int64_t x610 = -1LL;
static int64_t x611 = -10LL;
int32_t x615 = -1;
uint16_t x625 = 1U;
static int32_t x631 = INT32_MAX;
uint64_t x632 = 606214973937933LLU;
volatile int32_t t158 = 6973;
volatile uint8_t x637 = 1U;
static uint64_t x650 = UINT64_MAX;
int32_t t162 = 509;
int16_t x654 = -1;
static uint16_t x655 = 69U;
int16_t x659 = INT16_MIN;
int32_t t164 = 16;
uint64_t x661 = 22407LLU;
static int8_t x680 = -1;
uint64_t x681 = 1862051072LLU;
uint64_t x685 = UINT64_MAX;
int16_t x686 = -1420;
int32_t x693 = INT32_MIN;
int8_t x696 = -31;
uint32_t x704 = 1528U;
int32_t x705 = INT32_MIN;
volatile int8_t x716 = 1;
int16_t x719 = 7984;
static uint32_t x720 = UINT32_MAX;
volatile int64_t x723 = -234621LL;
static int8_t x730 = INT8_MIN;
uint8_t x740 = 0U;
int8_t x742 = -1;
int8_t x744 = INT8_MAX;
uint8_t x745 = UINT8_MAX;
int32_t x753 = -239291;
int32_t x754 = INT32_MAX;
uint32_t x756 = 70581U;
uint16_t x762 = 7U;
uint64_t x764 = 11915437924LLU;
int32_t x765 = 57849;
volatile int8_t x768 = 0;
static volatile int64_t x769 = INT64_MAX;
uint8_t x771 = UINT8_MAX;
int16_t x772 = -1;
int32_t t192 = -12944106;
int16_t x773 = 504;
uint8_t x776 = 24U;
uint16_t x779 = 13U;
static int64_t x780 = 123936891LL;
volatile int32_t t194 = 50;
int8_t x781 = INT8_MAX;
uint64_t x789 = 87862245LLU;
uint8_t x790 = UINT8_MAX;
int64_t x792 = INT64_MAX;
volatile int16_t x799 = -1;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile int32_t x2 = INT32_MAX;
	int16_t x4 = -1;
	static int32_t t0 = 443602;

    t0 = (x1==((x2==x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -2;

    t1 = (x5==((x6==x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -4108150;

    t2 = (x9==((x10==x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 26U;
	uint8_t x15 = 7U;
	volatile int16_t x16 = -1;
	static int32_t t3 = -1;

    t3 = (x13==((x14==x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int8_t x18 = -44;
	static int16_t x19 = INT16_MIN;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -131356;

    t4 = (x17==((x18==x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -20867848;

    t5 = (x21==((x22==x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static int16_t x26 = 24;
	uint32_t x28 = 130362845U;
	volatile int32_t t6 = -969357;

    t6 = (x25==((x26==x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -1;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 7U;
	volatile int32_t t7 = 222976;

    t7 = (x29==((x30==x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = 0;

    t8 = (x33==((x34==x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	static int8_t x38 = -9;
	int32_t x39 = INT32_MIN;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 7580396;

    t9 = (x37==((x38==x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = UINT32_MAX;
	volatile uint64_t x44 = 780LLU;

    t10 = (x41==((x42==x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	static int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MAX;
	int32_t t11 = -849696;

    t11 = (x45==((x46==x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MAX;
	int64_t x50 = -19469308541044025LL;
	int64_t x51 = INT64_MAX;
	static uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = 397580625;

    t12 = (x49==((x50==x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MAX;
	int32_t x55 = 446421;
	int16_t x56 = 3;
	volatile int32_t t13 = 120733831;

    t13 = (x53==((x54==x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	static volatile int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t14 = -2022861;

    t14 = (x57==((x58==x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = -1;
	int32_t t15 = 5177633;

    t15 = (x61==((x62==x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -1;
	int8_t x67 = -1;
	int32_t t16 = -8595;

    t16 = (x65==((x66==x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = 82U;

    t17 = (x69==((x70==x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x73 = UINT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = -254848;
	volatile int32_t t18 = -2738;

    t18 = (x73==((x74==x75)!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 3LLU;
	static int64_t x78 = INT64_MIN;
	uint64_t x80 = 196450632LLU;

    t19 = (x77==((x78==x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	uint32_t x84 = 49U;
	static volatile int32_t t20 = 149389;

    t20 = (x81==((x82==x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 0U;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 3553121;

    t21 = (x85==((x86==x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	static uint64_t x90 = UINT64_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 665237;

    t22 = (x89==((x90==x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 1;
	int8_t x94 = -1;
	volatile uint16_t x95 = UINT16_MAX;

    t23 = (x93==((x94==x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int16_t x98 = 6;
	int16_t x99 = -152;
	static int32_t t24 = 242436;

    t24 = (x97==((x98==x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 3858742543691287019LLU;
	int16_t x102 = -1;
	int64_t x103 = -1LL;
	int64_t x104 = -1LL;
	int32_t t25 = 62507;

    t25 = (x101==((x102==x103)!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1LL;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = 2707;

    t26 = (x105==((x106==x107)!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x110 = -1;
	int32_t x111 = INT32_MAX;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 1407;

    t27 = (x109==((x110==x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	static volatile int64_t x116 = INT64_MIN;

    t28 = (x113==((x114==x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = 31801;

    t29 = (x117==((x118==x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 3U;
	uint32_t x124 = 136U;
	static int32_t t30 = -197798;

    t30 = (x121==((x122==x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 8306U;
	int16_t x128 = 5983;
	int32_t t31 = -354049;

    t31 = (x125==((x126==x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	volatile int16_t x132 = INT16_MIN;

    t32 = (x129==((x130==x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t33 = 464;

    t33 = (x133==((x134==x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	static uint16_t x138 = 12U;
	uint16_t x139 = 3U;

    t34 = (x137==((x138==x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = 10042U;
	uint16_t x144 = 903U;
	volatile int32_t t35 = -690;

    t35 = (x141==((x142==x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 914972;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 0;

    t36 = (x145==((x146==x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x150 = 147342564176LLU;
	uint8_t x151 = 1U;
	int32_t t37 = 8;

    t37 = (x149==((x150==x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1;
	int32_t x155 = 11672508;
	volatile int32_t t38 = 30935456;

    t38 = (x153==((x154==x155)!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 5598;
	int16_t x158 = -6;
	uint64_t x159 = UINT64_MAX;
	uint32_t x160 = 15176U;
	volatile int32_t t39 = 7029777;

    t39 = (x157==((x158==x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = 4547212150LLU;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 22U;
	int32_t t40 = -1044013121;

    t40 = (x161==((x162==x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x167 = INT16_MIN;
	static int32_t x168 = 0;
	int32_t t41 = -3465652;

    t41 = (x165==((x166==x167)!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	volatile int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MAX;

    t42 = (x169==((x170==x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = 11669LLU;
	int32_t x176 = -1;

    t43 = (x173==((x174==x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 31499527;

    t44 = (x177==((x178==x179)!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x182 = 50U;
	static int32_t x184 = -1;

    t45 = (x181==((x182==x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -38;
	int8_t x186 = INT8_MIN;
	uint64_t x188 = 37LLU;
	volatile int32_t t46 = -1101264;

    t46 = (x185==((x186==x187)!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	static int64_t x190 = -1LL;
	int8_t x191 = INT8_MIN;
	int64_t x192 = -269002224557386996LL;
	int32_t t47 = 7176662;

    t47 = (x189==((x190==x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 5;
	volatile int16_t x194 = -1;
	uint8_t x195 = 43U;
	int16_t x196 = 39;
	int32_t t48 = -486094;

    t48 = (x193==((x194==x195)!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	uint16_t x199 = 0U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 28450;

    t49 = (x197==((x198==x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x203 = -30689217623LL;
	volatile int32_t t50 = -1;

    t50 = (x201==((x202==x203)!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = 4432886;
	int8_t x206 = INT8_MAX;
	int64_t x207 = 641187196LL;
	uint32_t x208 = UINT32_MAX;
	static int32_t t51 = -3237785;

    t51 = (x205==((x206==x207)!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = -1LL;
	int64_t x212 = 21433734LL;
	int32_t t52 = -655049586;

    t52 = (x209==((x210==x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x214 = 2803166LLU;
	int64_t x216 = -1440163963067LL;

    t53 = (x213==((x214==x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -93616;

    t54 = (x217==((x218==x219)!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 12927187546295LL;
	int32_t x222 = -240137146;
	static int8_t x223 = 62;
	volatile int64_t x224 = -10237852640LL;
	volatile int32_t t55 = -104;

    t55 = (x221==((x222==x223)!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	uint8_t x226 = 0U;
	uint32_t x228 = 33066454U;
	int32_t t56 = 4514;

    t56 = (x225==((x226==x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 1318U;
	static uint8_t x231 = 10U;
	int32_t t57 = 1;

    t57 = (x229==((x230==x231)!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x235 = 495504591LLU;
	static int32_t x236 = 6044;

    t58 = (x233==((x234==x235)!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -1522;
	int32_t x238 = -49;
	int16_t x239 = INT16_MIN;
	volatile int32_t t59 = -560432;

    t59 = (x237==((x238==x239)!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	uint64_t x242 = 47646787137981076LLU;
	int32_t x243 = -222902;
	static uint16_t x244 = 228U;

    t60 = (x241==((x242==x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	volatile uint8_t x246 = 1U;
	int16_t x247 = INT16_MIN;
	static uint64_t x248 = 147524312LLU;
	int32_t t61 = -121;

    t61 = (x245==((x246==x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x250 = -3;
	int64_t x252 = INT64_MIN;
	int32_t t62 = -199302160;

    t62 = (x249==((x250==x251)!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MAX;
	int64_t x255 = 137280323LL;
	static int64_t x256 = INT64_MIN;
	int32_t t63 = 10720;

    t63 = (x253==((x254==x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -991012191;
	uint32_t x258 = 207444U;
	int32_t x259 = INT32_MIN;
	int64_t x260 = 192765444503746701LL;
	volatile int32_t t64 = 13262;

    t64 = (x257==((x258==x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MAX;
	static int64_t x262 = 1843374853593615119LL;
	uint32_t x263 = 2U;
	volatile int64_t x264 = -1LL;
	int32_t t65 = 0;

    t65 = (x261==((x262==x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	static int32_t x266 = -1;
	static int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	static volatile int32_t t66 = 3;

    t66 = (x265==((x266==x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x269 = 1307U;
	static volatile int32_t x270 = 1997;
	int64_t x271 = -1LL;
	int16_t x272 = -16353;
	int32_t t67 = 110;

    t67 = (x269==((x270==x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 4966788U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 2;

    t68 = (x273==((x274==x275)!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 12210U;
	uint64_t x278 = UINT64_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t t69 = 145975;

    t69 = (x277==((x278==x279)!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 754861217576936LLU;
	uint64_t x282 = 28328142LLU;
	static int8_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -1714249;

    t70 = (x281==((x282==x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 812737393U;
	static volatile int16_t x286 = -2;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = INT64_MIN;
	static int32_t t71 = 70938790;

    t71 = (x285==((x286==x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 2394685532678947648LLU;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -100;

    t72 = (x289==((x290==x291)!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = 0;
	int8_t x295 = 1;
	static volatile uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 1014994945;

    t73 = (x293==((x294==x295)!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MAX;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 24927057;

    t74 = (x297==((x298==x299)!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 92467089471283LL;
	int32_t x302 = 6;
	int8_t x304 = 22;
	volatile int32_t t75 = -762903;

    t75 = (x301==((x302==x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	uint16_t x307 = 1U;
	int64_t x308 = 4039438656901585071LL;
	volatile int32_t t76 = 1;

    t76 = (x305==((x306==x307)!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = 705;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t77 = -50003894;

    t77 = (x309==((x310==x311)!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MIN;
	int64_t x315 = -163406718375950314LL;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 22;

    t78 = (x313==((x314==x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MIN;
	int64_t x319 = -56261303463231LL;
	static int16_t x320 = INT16_MIN;

    t79 = (x317==((x318==x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 245788912U;
	static int64_t x323 = -484LL;
	uint64_t x324 = 1LLU;
	int32_t t80 = 170505444;

    t80 = (x321==((x322==x323)!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x326 = INT16_MAX;
	uint32_t x327 = 304129U;
	static volatile int8_t x328 = INT8_MIN;
	static int32_t t81 = -862;

    t81 = (x325==((x326==x327)!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;

    t82 = (x329==((x330==x331)!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	uint32_t x334 = 32411U;
	int8_t x335 = 0;

    t83 = (x333==((x334==x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	static int64_t x338 = -1LL;
	static volatile int16_t x340 = -1;
	int32_t t84 = 1;

    t84 = (x337==((x338==x339)!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	static volatile int32_t t85 = -1;

    t85 = (x341==((x342==x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 1829755515704791031LLU;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -1;

    t86 = (x345==((x346==x347)!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = UINT16_MAX;
	int16_t x351 = INT16_MIN;
	int32_t t87 = 105430;

    t87 = (x349==((x350==x351)!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	static int32_t x354 = -898102;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 711204;

    t88 = (x353==((x354==x355)!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = 500;
	int8_t x359 = -7;
	int64_t x360 = -2226475544180065LL;
	int32_t t89 = -382;

    t89 = (x357==((x358==x359)!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = 1191637259145LLU;
	int32_t x362 = 122;
	volatile int32_t x363 = -1;
	int32_t t90 = -792;

    t90 = (x361==((x362==x363)!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 1381098LL;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = 117072643966333LL;
	int8_t x368 = -1;
	static int32_t t91 = 1;

    t91 = (x365==((x366==x367)!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	static int8_t x370 = -1;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = 22684;

    t92 = (x369==((x370==x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x374 = INT32_MIN;
	uint32_t x375 = 1866513U;
	static volatile uint64_t x376 = 324LLU;
	int32_t t93 = -3240724;

    t93 = (x373==((x374==x375)!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 3773;
	volatile uint64_t x378 = 1082LLU;
	static uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = INT16_MIN;

    t94 = (x377==((x378==x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1877;
	uint16_t x382 = 62U;
	uint64_t x383 = UINT64_MAX;
	int32_t t95 = 5810937;

    t95 = (x381==((x382==x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 6706229077LLU;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = 192030971155LLU;
	int32_t t96 = -19;

    t96 = (x385==((x386==x387)!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	int16_t x390 = -14147;
	int64_t x391 = 2942402837LL;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 44;

    t97 = (x389==((x390==x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 76604;

    t98 = (x393==((x394==x395)!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = -1;
	uint64_t x398 = 41648LLU;
	volatile uint64_t x399 = UINT64_MAX;

    t99 = (x397==((x398==x399)!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	static int16_t x403 = 1902;
	uint16_t x404 = UINT16_MAX;

    t100 = (x401==((x402==x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int32_t x406 = -1;
	uint16_t x407 = 10491U;
	static int32_t x408 = INT32_MAX;
	int32_t t101 = 205;

    t101 = (x405==((x406==x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	uint32_t x410 = UINT32_MAX;
	static int16_t x411 = INT16_MIN;
	static volatile int32_t t102 = -26049;

    t102 = (x409==((x410==x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 17164U;
	int32_t x415 = INT32_MIN;
	static volatile uint32_t x416 = 41508864U;
	static volatile int32_t t103 = -5;

    t103 = (x413==((x414==x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x419 = 28U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -20590481;

    t104 = (x417==((x418==x419)!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 5036U;
	uint64_t x422 = 6098676LLU;
	uint64_t x423 = UINT64_MAX;
	static int32_t t105 = 17273992;

    t105 = (x421==((x422==x423)!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = -1;
	static uint32_t x426 = 1500007U;
	uint8_t x428 = UINT8_MAX;

    t106 = (x425==((x426==x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 769U;
	int32_t x431 = -215042;
	int32_t x432 = INT32_MIN;
	int32_t t107 = 1;

    t107 = (x429==((x430==x431)!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 15U;
	static int8_t x434 = -1;
	int64_t x435 = -122LL;
	int32_t t108 = -3934523;

    t108 = (x433==((x434==x435)!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x439 = 25;
	volatile int64_t x440 = 43441LL;
	int32_t t109 = 797;

    t109 = (x437==((x438==x439)!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 255569239LLU;
	int8_t x442 = INT8_MIN;
	static int64_t x444 = INT64_MIN;
	int32_t t110 = 7998;

    t110 = (x441==((x442==x443)!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MIN;
	int8_t x447 = -7;
	int8_t x448 = -1;
	volatile int32_t t111 = -97848125;

    t111 = (x445==((x446==x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 808U;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = 484LLU;
	volatile int32_t t112 = -3;

    t112 = (x449==((x450==x451)!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = -1;
	volatile int8_t x455 = 1;

    t113 = (x453==((x454==x455)!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MIN;
	int16_t x459 = -7;
	static int32_t t114 = -1;

    t114 = (x457==((x458==x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 15;
	uint8_t x463 = UINT8_MAX;

    t115 = (x461==((x462==x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = INT64_MAX;
	int8_t x467 = INT8_MIN;

    t116 = (x465==((x466==x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	int8_t x470 = INT8_MIN;
	static volatile int64_t x472 = INT64_MIN;
	static int32_t t117 = -5;

    t117 = (x469==((x470==x471)!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	int64_t x474 = INT64_MIN;
	volatile int16_t x475 = INT16_MAX;
	static uint16_t x476 = 3514U;
	volatile int32_t t118 = -7524;

    t118 = (x473==((x474==x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = INT8_MIN;
	int64_t x478 = -1LL;
	uint32_t x479 = 11U;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t119 = 46518690;

    t119 = (x477==((x478==x479)!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 324011798155598118LLU;
	int8_t x482 = -1;
	volatile uint64_t x484 = 1849981349167942288LLU;
	int32_t t120 = 4605694;

    t120 = (x481==((x482==x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static int32_t x486 = -1;
	uint32_t x487 = 470699U;
	static int32_t t121 = -3;

    t121 = (x485==((x486==x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x489 = 64346455LL;
	uint16_t x490 = 7398U;
	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = UINT16_MAX;
	int32_t t122 = -6720;

    t122 = (x489==((x490==x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 0U;
	int64_t x494 = 10LL;
	int32_t x496 = -1;
	int32_t t123 = -3873851;

    t123 = (x493==((x494==x495)!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = INT8_MAX;
	int32_t x499 = -1;
	volatile uint8_t x500 = UINT8_MAX;

    t124 = (x497==((x498==x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	volatile uint64_t x502 = 25392703123366LLU;
	uint64_t x503 = 15644392749LLU;
	volatile int8_t x504 = INT8_MAX;
	int32_t t125 = 0;

    t125 = (x501==((x502==x503)!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int32_t x506 = 4031936;
	static int16_t x507 = INT16_MAX;
	int16_t x508 = INT16_MAX;
	int32_t t126 = 3;

    t126 = (x505==((x506==x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 173640675U;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = 20132264;

    t127 = (x509==((x510==x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 0;
	int8_t x514 = 12;
	int32_t x515 = INT32_MAX;
	volatile int32_t x516 = -1;
	int32_t t128 = -226;

    t128 = (x513==((x514==x515)!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 371614993LLU;
	int64_t x520 = 0LL;

    t129 = (x517==((x518==x519)!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 3670056322192LLU;
	volatile int16_t x522 = INT16_MIN;
	int16_t x523 = -83;
	volatile int16_t x524 = -1561;
	volatile int32_t t130 = -505;

    t130 = (x521==((x522==x523)!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	uint64_t x526 = UINT64_MAX;
	int8_t x528 = -1;
	volatile int32_t t131 = -5;

    t131 = (x525==((x526==x527)!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x530 = 12200578945413LLU;
	uint64_t x532 = 53670782810LLU;
	volatile int32_t t132 = -3785303;

    t132 = (x529==((x530==x531)!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x534 = 31613239227LLU;
	uint8_t x536 = UINT8_MAX;
	int32_t t133 = 0;

    t133 = (x533==((x534==x535)!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 5237052123092LLU;
	volatile int32_t x538 = INT32_MIN;
	uint8_t x539 = UINT8_MAX;
	int64_t x540 = 16368364LL;
	volatile int32_t t134 = 5;

    t134 = (x537==((x538==x539)!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = -1;
	volatile int32_t x543 = INT32_MAX;
	volatile int32_t t135 = -274182;

    t135 = (x541==((x542==x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	uint32_t x546 = UINT32_MAX;
	int16_t x547 = INT16_MIN;
	int32_t x548 = 2962;
	static volatile int32_t t136 = 260651;

    t136 = (x545==((x546==x547)!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MIN;
	uint32_t x552 = 511U;
	int32_t t137 = -4023172;

    t137 = (x549==((x550==x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -3972944;
	volatile uint64_t x554 = 27LLU;
	int64_t x555 = INT64_MIN;
	int8_t x556 = INT8_MAX;
	int32_t t138 = -1;

    t138 = (x553==((x554==x555)!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 1;
	static volatile int16_t x558 = 5;
	int32_t x560 = -1;
	volatile int32_t t139 = -19;

    t139 = (x557==((x558==x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 2313806896731038LLU;
	volatile int8_t x562 = INT8_MAX;
	static int32_t x563 = 18069;
	volatile int16_t x564 = INT16_MIN;
	int32_t t140 = -6;

    t140 = (x561==((x562==x563)!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	volatile int16_t x566 = INT16_MAX;
	volatile int8_t x567 = 1;
	uint16_t x568 = UINT16_MAX;

    t141 = (x565==((x566==x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 201774U;
	uint32_t x570 = 19137516U;
	uint32_t x572 = UINT32_MAX;

    t142 = (x569==((x570==x571)!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static uint8_t x574 = 41U;
	int8_t x575 = INT8_MIN;
	volatile int32_t x576 = INT32_MIN;
	int32_t t143 = 872;

    t143 = (x573==((x574==x575)!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 199877;
	int8_t x578 = -1;
	volatile int8_t x579 = INT8_MIN;
	int8_t x580 = -1;
	volatile int32_t t144 = -1628;

    t144 = (x577==((x578==x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	static int32_t x582 = 2;
	static volatile uint16_t x583 = 21158U;
	int32_t x584 = -14;
	static int32_t t145 = 344865042;

    t145 = (x581==((x582==x583)!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 14;
	int64_t x586 = INT64_MAX;
	int64_t x587 = -458LL;
	int64_t x588 = INT64_MIN;
	volatile int32_t t146 = 1;

    t146 = (x585==((x586==x587)!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = 12497979;
	int8_t x591 = INT8_MIN;
	uint64_t x592 = 13858488LLU;
	volatile int32_t t147 = -692;

    t147 = (x589==((x590==x591)!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 505U;
	int64_t x594 = INT64_MIN;
	uint32_t x595 = UINT32_MAX;
	int32_t t148 = 298155;

    t148 = (x593==((x594==x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = 4;
	int8_t x598 = -1;
	int64_t x600 = INT64_MIN;

    t149 = (x597==((x598==x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = -567;
	int16_t x603 = INT16_MIN;
	int16_t x604 = 4;
	volatile int32_t t150 = -436860;

    t150 = (x601==((x602==x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MIN;
	static int16_t x606 = INT16_MIN;
	static int64_t x607 = INT64_MAX;
	uint8_t x608 = UINT8_MAX;

    t151 = (x605==((x606==x607)!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	volatile int32_t x612 = 29;
	volatile int32_t t152 = -74;

    t152 = (x609==((x610==x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 1U;
	int16_t x614 = INT16_MIN;
	volatile uint8_t x616 = UINT8_MAX;
	static volatile int32_t t153 = 5329785;

    t153 = (x613==((x614==x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	static uint8_t x618 = 4U;
	static int64_t x619 = -133401482632LL;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t154 = -12722753;

    t154 = (x617==((x618==x619)!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	int8_t x622 = INT8_MAX;
	volatile uint32_t x623 = 4591107U;
	int16_t x624 = -1;
	volatile int32_t t155 = 66668;

    t155 = (x621==((x622==x623)!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x626 = 75U;
	static int32_t x627 = INT32_MIN;
	int8_t x628 = -8;
	volatile int32_t t156 = -1;

    t156 = (x625==((x626==x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x629 = -2051;
	int32_t x630 = -1;
	volatile int32_t t157 = -2;

    t157 = (x629==((x630==x631)!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 15U;
	uint8_t x634 = 1U;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -1;

    t158 = (x633==((x634==x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = INT16_MAX;
	uint64_t x639 = 49436LLU;
	uint16_t x640 = 36U;
	static volatile int32_t t159 = 3;

    t159 = (x637==((x638==x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 2680U;
	int32_t x642 = -1;
	int32_t x643 = INT32_MAX;
	volatile int8_t x644 = -22;
	static int32_t t160 = -1827;

    t160 = (x641==((x642==x643)!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = INT16_MIN;
	int8_t x646 = 13;
	volatile int32_t x647 = INT32_MAX;
	int64_t x648 = INT64_MIN;
	volatile int32_t t161 = -291;

    t161 = (x645==((x646==x647)!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MIN;

    t162 = (x649==((x650==x651)!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x656 = 5LL;
	volatile int32_t t163 = 1;

    t163 = (x653==((x654==x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 1950312LL;
	int8_t x658 = INT8_MIN;
	uint16_t x660 = 2U;

    t164 = (x657==((x658==x659)!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x662 = INT64_MAX;
	int64_t x663 = INT64_MIN;
	int8_t x664 = INT8_MIN;
	int32_t t165 = -554809759;

    t165 = (x661==((x662==x663)!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x666 = 7;
	int32_t x667 = INT32_MAX;
	int8_t x668 = INT8_MIN;
	volatile int32_t t166 = -68433048;

    t166 = (x665==((x666==x667)!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 4U;
	static uint8_t x670 = UINT8_MAX;
	static uint64_t x671 = 1316LLU;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = 0;

    t167 = (x669==((x670==x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MAX;
	int8_t x674 = 11;
	int32_t x675 = INT32_MAX;
	uint32_t x676 = 347967U;
	volatile int32_t t168 = 0;

    t168 = (x673==((x674==x675)!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MAX;
	int32_t x678 = -592403391;
	int8_t x679 = INT8_MIN;
	volatile int32_t t169 = 309;

    t169 = (x677==((x678==x679)!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x682 = 0;
	static int16_t x683 = 801;
	volatile int64_t x684 = -186145454903478LL;
	static int32_t t170 = 3976;

    t170 = (x681==((x682==x683)!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x687 = -1;
	int16_t x688 = INT16_MIN;
	volatile int32_t t171 = 188358052;

    t171 = (x685==((x686==x687)!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int32_t x690 = INT32_MIN;
	volatile int16_t x691 = INT16_MIN;
	int32_t x692 = 38;
	int32_t t172 = -644506104;

    t172 = (x689==((x690==x691)!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MIN;
	volatile int32_t t173 = -1;

    t173 = (x693==((x694==x695)!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = INT8_MIN;
	static uint16_t x698 = UINT16_MAX;
	int32_t x699 = -1;
	uint64_t x700 = UINT64_MAX;
	static volatile int32_t t174 = 7404453;

    t174 = (x697==((x698==x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 778U;
	int32_t x702 = 441;
	volatile int8_t x703 = INT8_MIN;
	int32_t t175 = -278;

    t175 = (x701==((x702==x703)!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = 2U;
	uint32_t x707 = 6U;
	volatile uint8_t x708 = UINT8_MAX;
	int32_t t176 = -2444165;

    t176 = (x705==((x706==x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile uint64_t x710 = 2975216503347LLU;
	volatile uint8_t x711 = 1U;
	int8_t x712 = INT8_MIN;
	int32_t t177 = -496493;

    t177 = (x709==((x710==x711)!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 52U;
	uint64_t x714 = 4199928517LLU;
	int64_t x715 = 0LL;
	volatile int32_t t178 = 141008;

    t178 = (x713==((x714==x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = UINT8_MAX;
	uint8_t x718 = 7U;
	volatile int32_t t179 = -22259;

    t179 = (x717==((x718==x719)!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 3U;
	int16_t x722 = -1;
	uint16_t x724 = 2U;
	volatile int32_t t180 = -11210465;

    t180 = (x721==((x722==x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x725 = 1U;
	static uint8_t x726 = 22U;
	volatile int64_t x727 = INT64_MAX;
	int32_t x728 = -1;
	volatile int32_t t181 = 22463;

    t181 = (x725==((x726==x727)!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = 102241500;
	static int16_t x731 = INT16_MIN;
	static volatile int32_t x732 = INT32_MAX;
	static volatile int32_t t182 = -15005;

    t182 = (x729==((x730==x731)!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -425;
	volatile int32_t x734 = INT32_MIN;
	static int32_t x735 = INT32_MAX;
	uint64_t x736 = 7560786744LLU;
	static int32_t t183 = 1691244;

    t183 = (x733==((x734==x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int8_t x738 = INT8_MIN;
	uint32_t x739 = UINT32_MAX;
	static volatile int32_t t184 = 1;

    t184 = (x737==((x738==x739)!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -208;
	uint64_t x743 = 23097147LLU;
	int32_t t185 = 31523;

    t185 = (x741==((x742==x743)!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x746 = 74LLU;
	int64_t x747 = -259811295LL;
	uint16_t x748 = 158U;
	int32_t t186 = 444321152;

    t186 = (x745==((x746==x747)!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -8;
	int32_t x750 = -1;
	volatile int16_t x751 = INT16_MIN;
	int8_t x752 = -1;
	volatile int32_t t187 = -1;

    t187 = (x749==((x750==x751)!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x755 = 0U;
	static int32_t t188 = -5888;

    t188 = (x753==((x754==x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -23;
	static uint32_t x758 = UINT32_MAX;
	static uint8_t x759 = 39U;
	static int16_t x760 = 36;
	volatile int32_t t189 = 0;

    t189 = (x757==((x758==x759)!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = 1393469541792LLU;
	int8_t x763 = INT8_MIN;
	volatile int32_t t190 = 1474;

    t190 = (x761==((x762==x763)!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x766 = UINT32_MAX;
	static int32_t x767 = INT32_MIN;
	int32_t t191 = -1949168;

    t191 = (x765==((x766==x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x770 = INT32_MIN;

    t192 = (x769==((x770==x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = UINT8_MAX;
	uint8_t x775 = 1U;
	volatile int32_t t193 = -77;

    t193 = (x773==((x774==x775)!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	int16_t x778 = -236;

    t194 = (x777==((x778==x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x782 = 3846U;
	int64_t x783 = -6LL;
	uint64_t x784 = 248210475011214646LLU;
	volatile int32_t t195 = -219;

    t195 = (x781==((x782==x783)!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -519339;
	static int32_t t196 = -51728435;

    t196 = (x785==((x786==x787)!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x791 = -1;
	volatile int32_t t197 = 1987;

    t197 = (x789==((x790==x791)!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = UINT64_MAX;
	static uint16_t x794 = 1768U;
	uint8_t x795 = 6U;
	uint16_t x796 = UINT16_MAX;
	int32_t t198 = 877697650;

    t198 = (x793==((x794==x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	uint8_t x798 = 6U;
	volatile uint32_t x800 = 9735U;
	int32_t t199 = -270;

    t199 = (x797==((x798==x799)!=x800));

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

