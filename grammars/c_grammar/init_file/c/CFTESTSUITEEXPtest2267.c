
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

int16_t x2 = -435;
int32_t x3 = 5187274;
int64_t x8 = -1LL;
int16_t x10 = INT16_MIN;
volatile int32_t x12 = -1;
int64_t x15 = INT64_MIN;
int32_t t7 = -55564;
volatile int16_t x34 = 2248;
uint32_t x36 = 7911213U;
uint32_t t8 = 5U;
static int64_t x42 = INT64_MIN;
int64_t t10 = -1083494708791191744LL;
int8_t x49 = -1;
int32_t x60 = -1;
static volatile uint16_t x71 = UINT16_MAX;
static int16_t x76 = INT16_MAX;
static int16_t x81 = -1;
volatile int64_t x82 = INT64_MIN;
uint16_t x90 = 8U;
static int8_t x95 = -18;
int16_t x98 = INT16_MIN;
static int16_t x104 = -6687;
volatile int32_t x105 = INT32_MIN;
static int32_t x106 = 29496;
uint16_t x109 = 330U;
volatile int64_t x117 = INT64_MIN;
static uint32_t x118 = 911135056U;
int16_t x121 = -8772;
int16_t x125 = -2;
int16_t x126 = -1;
static uint16_t x127 = UINT16_MAX;
int64_t x136 = INT64_MAX;
int8_t x138 = INT8_MAX;
uint64_t x139 = 1LLU;
volatile int32_t x141 = 1480;
static uint64_t x142 = 6953LLU;
static int8_t x149 = -1;
static int64_t x150 = INT64_MAX;
int32_t t37 = -9;
volatile int32_t x158 = -52;
volatile int32_t t39 = 1327622;
int16_t x166 = 9;
int32_t x169 = INT32_MIN;
int32_t t42 = INT32_MIN;
uint64_t x177 = 33764455833296403LLU;
int8_t x182 = 0;
static uint32_t x183 = 1486U;
volatile int32_t t45 = -12;
static int32_t x187 = INT32_MAX;
volatile int32_t t47 = -50;
int32_t x200 = -1292;
int32_t t49 = 9337;
int8_t x208 = -1;
uint64_t t54 = UINT64_MAX;
int64_t x222 = INT64_MIN;
static int8_t x229 = INT8_MIN;
int16_t x240 = INT16_MIN;
int8_t x244 = -15;
uint32_t x249 = 1872775393U;
volatile int64_t x255 = -190LL;
volatile int32_t t63 = -13723831;
uint8_t x260 = 45U;
uint8_t x265 = 2U;
int64_t x275 = INT64_MIN;
int32_t t69 = 329732;
static uint32_t x283 = 14459465U;
uint64_t x286 = 699087498857LLU;
volatile int32_t t72 = -668141300;
int32_t t73 = -738207;
static uint64_t x297 = 88371LLU;
volatile uint64_t t74 = 1421951426LLU;
int16_t x302 = INT16_MIN;
static int64_t x306 = INT64_MAX;
int16_t x307 = 24;
int8_t x314 = -1;
static int64_t x324 = 8410396292070LL;
static int64_t x325 = INT64_MAX;
int16_t x328 = -1;
volatile int64_t x341 = -1871568452298LL;
volatile uint16_t x342 = 2U;
volatile int64_t x345 = -1LL;
uint32_t x351 = UINT32_MAX;
uint16_t x353 = 2U;
uint16_t x386 = 59U;
static int16_t x389 = -1;
uint8_t x395 = UINT8_MAX;
volatile int64_t t98 = INT64_MAX;
uint8_t x398 = 1U;
int32_t t103 = -1;
volatile int16_t x420 = INT16_MAX;
int8_t x423 = 3;
volatile int32_t x424 = INT32_MAX;
uint32_t x429 = UINT32_MAX;
uint32_t x430 = UINT32_MAX;
int8_t x436 = -37;
uint64_t x447 = 58832LLU;
volatile int32_t t111 = -91629;
uint16_t x456 = 46U;
volatile int32_t t113 = 10003;
volatile int32_t t114 = 16094497;
uint64_t t118 = 335376701LLU;
static int16_t x485 = -1;
int8_t x488 = INT8_MIN;
int64_t x491 = -1LL;
volatile int64_t x493 = -71LL;
uint64_t x497 = 960616170391339118LLU;
volatile uint64_t t124 = 157998LLU;
uint16_t x501 = 6U;
volatile int32_t t125 = 66085825;
uint8_t x509 = 11U;
static int32_t t127 = -116728939;
static int32_t x518 = INT32_MIN;
int32_t x525 = -2;
volatile uint32_t x528 = 3845U;
volatile int32_t t131 = -1436747;
uint8_t x533 = UINT8_MAX;
int32_t t133 = -1;
static int64_t x537 = INT64_MIN;
int16_t x539 = -1;
static volatile int32_t x544 = INT32_MIN;
int16_t x549 = -1;
int8_t x551 = INT8_MIN;
static int32_t x552 = -1;
int32_t t137 = 11853025;
volatile int64_t x556 = 96429777142399LL;
uint16_t x558 = 16260U;
int16_t x559 = INT16_MIN;
uint32_t x561 = UINT32_MAX;
static volatile uint16_t x564 = 12020U;
volatile int64_t x566 = INT64_MAX;
volatile int32_t x569 = INT32_MAX;
int64_t x575 = -1LL;
static volatile int64_t x577 = INT64_MAX;
int8_t x590 = -1;
int16_t x592 = -2;
uint16_t x600 = 15U;
int32_t x602 = INT32_MAX;
uint32_t x603 = 1757888U;
static int16_t x606 = -1;
volatile int32_t t151 = -214153192;
int64_t x612 = INT64_MIN;
static volatile int32_t t152 = -146258;
volatile uint64_t x634 = 11917912094LLU;
uint8_t x637 = UINT8_MAX;
int64_t x638 = -166604LL;
volatile int32_t t159 = 436680;
static int8_t x641 = INT8_MAX;
uint64_t x645 = UINT64_MAX;
uint16_t x648 = 11230U;
static int8_t x659 = -1;
volatile int32_t x660 = INT32_MIN;
int32_t t164 = -472673289;
static int16_t x662 = -1;
uint16_t x672 = 28U;
int32_t x675 = 343;
volatile int16_t x678 = INT16_MIN;
int16_t x679 = INT16_MAX;
static volatile int32_t t169 = -57;
int32_t x682 = 2;
static volatile int32_t t170 = 15172;
int8_t x687 = -1;
volatile int32_t t171 = 202;
uint16_t x691 = 18792U;
int16_t x693 = 2;
int8_t x696 = INT8_MIN;
volatile int32_t t173 = -3955;
volatile uint16_t x698 = 0U;
static uint8_t x705 = 13U;
int8_t x712 = -9;
volatile uint16_t x715 = 720U;
int8_t x716 = 1;
int32_t t178 = 22157940;
uint8_t x717 = 4U;
volatile uint16_t x725 = 28082U;
static uint64_t x728 = UINT64_MAX;
int32_t t181 = -61496757;
static int32_t t183 = 0;
static int8_t x740 = INT8_MAX;
volatile uint16_t x742 = 356U;
volatile int64_t t186 = INT64_MIN;
int16_t x751 = INT16_MIN;
volatile int64_t x752 = -1LL;
uint8_t x755 = 8U;
volatile int8_t x757 = INT8_MIN;
int32_t x762 = INT32_MAX;
int64_t x766 = INT64_MIN;
int8_t x768 = INT8_MIN;
int16_t x769 = INT16_MAX;
static int8_t x777 = INT8_MAX;
int16_t x791 = INT16_MIN;
int16_t x792 = INT16_MIN;
int16_t x793 = -1;
int32_t x794 = INT32_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int16_t x4 = INT16_MIN;
	static volatile int64_t t0 = INT64_MIN;

    t0 = (x1|((x2&x3)==x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 13686700439183461LL;
	int32_t x6 = 12973;
	volatile uint64_t x7 = 451721026LLU;
	volatile int64_t t1 = -116361LL;

    t1 = (x5|((x6&x7)==x8));

    if (t1 != 13686700439183461LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int64_t x11 = INT64_MIN;
	int32_t t2 = 95440;

    t2 = (x9|((x10&x11)==x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MAX;
	uint8_t x14 = UINT8_MAX;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -76149915;

    t3 = (x13|((x14&x15)==x16));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -44;
	int32_t x20 = -6104;
	volatile int32_t t4 = -26334834;

    t4 = (x17|((x18&x19)==x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 9U;
	int64_t x22 = -1LL;
	volatile uint16_t x23 = 75U;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = -597307;

    t5 = (x21|((x22&x23)==x24));

    if (t5 != 9) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int64_t x26 = 5490162LL;
	uint64_t x27 = UINT64_MAX;
	volatile uint32_t x28 = 535U;
	volatile int64_t t6 = INT64_MIN;

    t6 = (x25|((x26&x27)==x28));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	int64_t x30 = -1LL;
	int64_t x31 = -774258168LL;
	volatile int8_t x32 = INT8_MIN;

    t7 = (x29|((x30&x31)==x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 1047600U;
	int8_t x35 = INT8_MIN;

    t8 = (x33|((x34&x35)==x36));

    if (t8 != 1047600U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	static volatile int8_t x38 = INT8_MAX;
	int8_t x39 = -5;
	int8_t x40 = -1;
	int32_t t9 = 1767;

    t9 = (x37|((x38&x39)==x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 578279960699LL;
	uint32_t x43 = 27832U;
	static uint64_t x44 = UINT64_MAX;

    t10 = (x41|((x42&x43)==x44));

    if (t10 != 578279960699LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 19;
	volatile int16_t x46 = INT16_MIN;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = -2;

    t11 = (x45|((x46&x47)==x48));

    if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = 7;
	int32_t x51 = -578042;
	static int32_t x52 = 274477;
	int32_t t12 = 15572221;

    t12 = (x49|((x50&x51)==x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 47U;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;
	int32_t t13 = 6786;

    t13 = (x53|((x54&x55)==x56));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x57 = 29455LLU;
	uint16_t x58 = 1U;
	uint8_t x59 = 2U;
	uint64_t t14 = 53868225156504816LLU;

    t14 = (x57|((x58&x59)==x60));

    if (t14 != 29455LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 19;
	uint32_t x62 = 2681U;
	int8_t x63 = -1;
	static int32_t x64 = INT32_MIN;
	int32_t t15 = 5271408;

    t15 = (x61|((x62&x63)==x64));

    if (t15 != 19) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 2723;
	int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MIN;
	static int16_t x68 = -3464;
	volatile int32_t t16 = 53;

    t16 = (x65|((x66&x67)==x68));

    if (t16 != 2723) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = 7;
	int8_t x70 = INT8_MIN;
	volatile uint32_t x72 = 9U;
	volatile int32_t t17 = 7657;

    t17 = (x69|((x70&x71)==x72));

    if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = -31;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 27747234428LLU;
	int32_t t18 = 61228;

    t18 = (x73|((x74&x75)==x76));

    if (t18 != -31) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	static int16_t x78 = -1;
	volatile uint64_t x79 = 5LLU;
	int64_t x80 = INT64_MIN;
	uint32_t t19 = UINT32_MAX;

    t19 = (x77|((x78&x79)==x80));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x83 = 9;
	int64_t x84 = 2389193LL;
	int32_t t20 = 1152;

    t20 = (x81|((x82&x83)==x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 3277U;
	int16_t x86 = INT16_MIN;
	volatile uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = -393785374919LL;
	static volatile int32_t t21 = -11404318;

    t21 = (x85|((x86&x87)==x88));

    if (t21 != 3277) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -461354876799LL;
	int32_t x91 = INT32_MAX;
	static volatile int32_t x92 = INT32_MIN;
	int64_t t22 = -1031420LL;

    t22 = (x89|((x90&x91)==x92));

    if (t22 != -461354876799LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = 0;
	int16_t x94 = -1;
	uint8_t x96 = 1U;
	volatile int32_t t23 = -944;

    t23 = (x93|((x94&x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint64_t x99 = 16119535792660789LLU;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -3519;

    t24 = (x97|((x98&x99)==x100));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = -641054297LL;
	int32_t x102 = 8;
	int8_t x103 = INT8_MIN;
	int64_t t25 = 31480LL;

    t25 = (x101|((x102&x103)==x104));

    if (t25 != -641054297LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = INT32_MIN;

    t26 = (x105|((x106&x107)==x108));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = UINT16_MAX;
	static volatile uint8_t x111 = 54U;
	uint32_t x112 = 7847918U;
	static volatile int32_t t27 = -702792;

    t27 = (x109|((x110&x111)==x112));

    if (t27 != 330) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint16_t x114 = 21216U;
	static volatile int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = 323754;

    t28 = (x113|((x114&x115)==x116));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x119 = UINT8_MAX;
	volatile int16_t x120 = INT16_MAX;
	static int64_t t29 = INT64_MIN;

    t29 = (x117|((x118&x119)==x120));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = UINT64_MAX;
	static uint32_t x123 = UINT32_MAX;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = -5590629;

    t30 = (x121|((x122&x123)==x124));

    if (t30 != -8772) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x128 = 48253170669LLU;
	volatile int32_t t31 = -37879;

    t31 = (x125|((x126&x127)==x128));

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile int16_t x130 = INT16_MIN;
	uint16_t x131 = 2U;
	uint64_t x132 = 433LLU;
	volatile int32_t t32 = -23240;

    t32 = (x129|((x130&x131)==x132));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = 1116;
	static uint16_t x134 = 2244U;
	uint32_t x135 = 7750723U;
	volatile int32_t t33 = -208819481;

    t33 = (x133|((x134&x135)==x136));

    if (t33 != 1116) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1799;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 19885;

    t34 = (x137|((x138&x139)==x140));

    if (t34 != -1799) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x143 = 385075607LLU;
	static volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 99036967;

    t35 = (x141|((x142&x143)==x144));

    if (t35 != 1480) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 281U;
	uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile int16_t x148 = 3819;
	volatile int32_t t36 = 0;

    t36 = (x145|((x146&x147)==x148));

    if (t36 != 281) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x151 = 215079;
	int32_t x152 = INT32_MIN;

    t37 = (x149|((x150&x151)==x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	static int32_t x154 = 6;
	static volatile int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	int32_t t38 = INT32_MIN;

    t38 = (x153|((x154&x155)==x156));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 18380915;
	int32_t x159 = 84672;
	uint32_t x160 = 3526897U;

    t39 = (x157|((x158&x159)==x160));

    if (t39 != 18380915) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	uint64_t x162 = 8LLU;
	uint32_t x163 = 296U;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -472747284;

    t40 = (x161|((x162&x163)==x164));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	volatile uint32_t x167 = UINT32_MAX;
	int32_t x168 = -1;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x165|((x166&x167)==x168));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 197333LLU;
	static int8_t x172 = -1;

    t42 = (x169|((x170&x171)==x172));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int8_t x174 = -1;
	uint16_t x175 = 433U;
	volatile int16_t x176 = INT16_MIN;
	static uint64_t t43 = UINT64_MAX;

    t43 = (x173|((x174&x175)==x176));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x178 = 4303945480309LLU;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	volatile uint64_t t44 = 409308429LLU;

    t44 = (x177|((x178&x179)==x180));

    if (t44 != 33764455833296403LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int8_t x184 = INT8_MAX;

    t45 = (x181|((x182&x183)==x184));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 4223393253976LLU;
	int16_t x186 = INT16_MAX;
	uint64_t x188 = 39750883182LLU;
	static volatile uint64_t t46 = 37274883LLU;

    t46 = (x185|((x186&x187)==x188));

    if (t46 != 4223393253976LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 31U;
	static uint8_t x190 = UINT8_MAX;
	int32_t x191 = -217692239;
	volatile uint8_t x192 = 42U;

    t47 = (x189|((x190&x191)==x192));

    if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile uint32_t x194 = 3792969U;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = 5U;
	int32_t t48 = -84219;

    t48 = (x193|((x194&x195)==x196));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 51U;
	volatile int64_t x198 = INT64_MAX;
	int8_t x199 = INT8_MIN;

    t49 = (x197|((x198&x199)==x200));

    if (t49 != 51) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 143088256U;
	uint32_t x202 = 3U;
	volatile int64_t x203 = 990241LL;
	static uint16_t x204 = 2581U;
	uint32_t t50 = 64251U;

    t50 = (x201|((x202&x203)==x204));

    if (t50 != 143088256U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MIN;
	static uint64_t x206 = 2414256509480158037LLU;
	static uint16_t x207 = 3U;
	volatile int32_t t51 = INT32_MIN;

    t51 = (x205|((x206&x207)==x208));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 8U;
	volatile uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MIN;
	static int64_t x212 = -312LL;
	int32_t t52 = -18966410;

    t52 = (x209|((x210&x211)==x212));

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 7549;
	int16_t x214 = -115;
	int64_t x215 = INT64_MAX;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = -35824;

    t53 = (x213|((x214&x215)==x216));

    if (t53 != 7549) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = -9;
	volatile int8_t x219 = 2;
	static int64_t x220 = -2600LL;

    t54 = (x217|((x218&x219)==x220));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -6373585;

    t55 = (x221|((x222&x223)==x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = UINT64_MAX;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = -32;
	uint16_t x228 = 12U;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (x225|((x226&x227)==x228));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	int32_t x231 = 10;
	static int8_t x232 = 0;
	static volatile int32_t t57 = 38506605;

    t57 = (x229|((x230&x231)==x232));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 23U;
	int16_t x234 = -2016;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	uint32_t t58 = 5282U;

    t58 = (x233|((x234&x235)==x236));

    if (t58 != 23U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	int16_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int64_t t59 = INT64_MIN;

    t59 = (x237|((x238&x239)==x240));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -36;
	uint8_t x242 = 1U;
	uint16_t x243 = UINT16_MAX;
	int32_t t60 = -393;

    t60 = (x241|((x242&x243)==x244));

    if (t60 != -36) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 123;
	static int8_t x246 = -7;
	uint64_t x247 = UINT64_MAX;
	static int32_t x248 = 2;
	volatile int32_t t61 = -107156;

    t61 = (x245|((x246&x247)==x248));

    if (t61 != 123) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x250 = UINT64_MAX;
	volatile uint16_t x251 = 927U;
	uint8_t x252 = 33U;
	uint32_t t62 = 23392744U;

    t62 = (x249|((x250&x251)==x252));

    if (t62 != 1872775393U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = -184246942;
	static int8_t x254 = INT8_MAX;
	int32_t x256 = 45888;

    t63 = (x253|((x254&x255)==x256));

    if (t63 != -184246942) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	volatile uint32_t x258 = 19317U;
	int16_t x259 = INT16_MIN;
	int32_t t64 = -1;

    t64 = (x257|((x258&x259)==x260));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 16356U;
	uint64_t x262 = 89502455LLU;
	static int8_t x263 = INT8_MAX;
	volatile uint32_t x264 = UINT32_MAX;
	uint32_t t65 = 175163088U;

    t65 = (x261|((x262&x263)==x264));

    if (t65 != 16356U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = UINT8_MAX;
	uint8_t x267 = 50U;
	static int32_t x268 = -2796;
	int32_t t66 = 69980;

    t66 = (x265|((x266&x267)==x268));

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	static int32_t x270 = -1;
	volatile uint32_t x271 = 12U;
	int16_t x272 = INT16_MAX;
	int32_t t67 = 75541;

    t67 = (x269|((x270&x271)==x272));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x273 = UINT16_MAX;
	int64_t x274 = -3087545202LL;
	int8_t x276 = INT8_MIN;
	static int32_t t68 = -10;

    t68 = (x273|((x274&x275)==x276));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	volatile uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	static uint32_t x280 = 8278561U;

    t69 = (x277|((x278&x279)==x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	static volatile int8_t x282 = 0;
	uint64_t x284 = 271340219416LLU;
	static volatile int32_t t70 = INT32_MIN;

    t70 = (x281|((x282&x283)==x284));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x287 = INT8_MAX;
	uint32_t x288 = 32630891U;
	static volatile int32_t t71 = INT32_MIN;

    t71 = (x285|((x286&x287)==x288));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	static uint32_t x290 = 33836U;
	uint32_t x291 = 2034481474U;
	int16_t x292 = -19;

    t72 = (x289|((x290&x291)==x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = 27U;
	uint64_t x294 = UINT64_MAX;
	static volatile int64_t x295 = -8823LL;
	int32_t x296 = 0;

    t73 = (x293|((x294&x295)==x296));

    if (t73 != 27) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = 471692U;
	uint16_t x299 = 1U;
	static int8_t x300 = 31;

    t74 = (x297|((x298&x299)==x300));

    if (t74 != 88371LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -3585824;
	int8_t x303 = INT8_MAX;
	static int16_t x304 = -1;
	int32_t t75 = -184953;

    t75 = (x301|((x302&x303)==x304));

    if (t75 != -3585824) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MIN;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -690;

    t76 = (x305|((x306&x307)==x308));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 173755;
	int16_t x310 = -7899;
	uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 1;

    t77 = (x309|((x310&x311)==x312));

    if (t77 != 173755) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 0U;
	int32_t x315 = INT32_MIN;
	int64_t x316 = 2093443218542578LL;
	int32_t t78 = 3;

    t78 = (x313|((x314&x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = UINT64_MAX;
	static volatile int8_t x318 = 0;
	static int16_t x319 = -1;
	static int8_t x320 = INT8_MIN;
	uint64_t t79 = UINT64_MAX;

    t79 = (x317|((x318&x319)==x320));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	int16_t x322 = 58;
	volatile uint16_t x323 = 40U;
	static volatile int32_t t80 = 246;

    t80 = (x321|((x322&x323)==x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x326 = INT64_MAX;
	int8_t x327 = 25;
	volatile int64_t t81 = INT64_MAX;

    t81 = (x325|((x326&x327)==x328));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = -1;
	volatile uint16_t x331 = 21361U;
	int64_t x332 = -1LL;
	int32_t t82 = -3885;

    t82 = (x329|((x330&x331)==x332));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -1;
	static uint64_t x334 = UINT64_MAX;
	uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = 675668;

    t83 = (x333|((x334&x335)==x336));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -930703;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 15292407984318886LLU;
	int16_t x340 = INT16_MAX;
	int32_t t84 = 0;

    t84 = (x337|((x338&x339)==x340));

    if (t84 != -930703) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x343 = INT32_MIN;
	uint16_t x344 = 50U;
	volatile int64_t t85 = -19557801LL;

    t85 = (x341|((x342&x343)==x344));

    if (t85 != -1871568452298LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x346 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = INT8_MIN;
	static volatile int64_t t86 = -3109167LL;

    t86 = (x345|((x346&x347)==x348));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -139687;
	static int8_t x350 = INT8_MAX;
	int32_t x352 = INT32_MAX;
	volatile int32_t t87 = -145;

    t87 = (x349|((x350&x351)==x352));

    if (t87 != -139687) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	volatile uint32_t x356 = 1838696637U;
	static volatile int32_t t88 = 268518;

    t88 = (x353|((x354&x355)==x356));

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MAX;
	int32_t x360 = 1646789;
	uint32_t t89 = UINT32_MAX;

    t89 = (x357|((x358&x359)==x360));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = -158089939396188615LL;
	static volatile int32_t t90 = -28;

    t90 = (x361|((x362&x363)==x364));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 0U;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	int64_t x368 = 1LL;
	volatile int32_t t91 = 9738;

    t91 = (x365|((x366&x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x369 = 32246329555LLU;
	uint32_t x370 = UINT32_MAX;
	volatile uint32_t x371 = 3U;
	int64_t x372 = INT64_MIN;
	static uint64_t t92 = 181502014726LLU;

    t92 = (x369|((x370&x371)==x372));

    if (t92 != 32246329555LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	static int32_t x374 = INT32_MIN;
	static uint8_t x375 = 1U;
	volatile uint32_t x376 = 0U;
	volatile int32_t t93 = 194889744;

    t93 = (x373|((x374&x375)==x376));

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 8;
	volatile int64_t x378 = -427506392LL;
	uint8_t x379 = 99U;
	int64_t x380 = -1LL;
	static int32_t t94 = -63568;

    t94 = (x377|((x378&x379)==x380));

    if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 2142684471923076435LLU;
	volatile int32_t x382 = INT32_MAX;
	uint32_t x383 = 2880U;
	int64_t x384 = 30389948718027LL;
	uint64_t t95 = 105LLU;

    t95 = (x381|((x382&x383)==x384));

    if (t95 != 2142684471923076435LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x387 = 1U;
	int32_t x388 = -1;
	volatile int32_t t96 = 9701;

    t96 = (x385|((x386&x387)==x388));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = -1;
	volatile uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 0U;
	int32_t t97 = 242029;

    t97 = (x389|((x390&x391)==x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MAX;
	int32_t x394 = -1;
	int64_t x396 = -5482077749LL;

    t98 = (x393|((x394&x395)==x396));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -2433918997179737LL;
	volatile uint32_t x399 = 0U;
	int32_t x400 = INT32_MAX;
	volatile int64_t t99 = -2261242017LL;

    t99 = (x397|((x398&x399)==x400));

    if (t99 != -2433918997179737LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	int64_t x402 = -1LL;
	int16_t x403 = -1;
	int16_t x404 = 331;
	static int64_t t100 = INT64_MIN;

    t100 = (x401|((x402&x403)==x404));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint16_t x406 = UINT16_MAX;
	static int16_t x407 = -718;
	static int64_t x408 = 30526LL;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x405|((x406&x407)==x408));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 0U;
	volatile int64_t x410 = INT64_MAX;
	int32_t x411 = -37;
	static uint16_t x412 = 607U;
	volatile uint32_t t102 = 114U;

    t102 = (x409|((x410&x411)==x412));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 35U;
	static volatile int8_t x414 = INT8_MAX;
	uint16_t x415 = 1690U;
	volatile int16_t x416 = INT16_MIN;

    t103 = (x413|((x414&x415)==x416));

    if (t103 != 35) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 6U;
	int16_t x418 = INT16_MAX;
	static int16_t x419 = INT16_MAX;
	volatile int32_t t104 = 97096;

    t104 = (x417|((x418&x419)==x420));

    if (t104 != 7) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	int32_t t105 = 396941750;

    t105 = (x421|((x422&x423)==x424));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	int8_t x427 = 1;
	static int16_t x428 = 207;
	int32_t t106 = 11388;

    t106 = (x425|((x426&x427)==x428));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	uint32_t t107 = UINT32_MAX;

    t107 = (x429|((x430&x431)==x432));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = 6348814U;
	volatile int64_t x434 = INT64_MAX;
	uint64_t x435 = 254777224610206881LLU;
	uint32_t t108 = 237U;

    t108 = (x433|((x434&x435)==x436));

    if (t108 != 6348814U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile uint32_t x438 = UINT32_MAX;
	static uint16_t x439 = UINT16_MAX;
	uint64_t x440 = 26LLU;
	int32_t t109 = -1096185;

    t109 = (x437|((x438&x439)==x440));

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 3LLU;
	static uint32_t x442 = UINT32_MAX;
	uint32_t x443 = 105U;
	int16_t x444 = INT16_MIN;
	static volatile uint64_t t110 = 240978427048227619LLU;

    t110 = (x441|((x442&x443)==x444));

    if (t110 != 3LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	static uint16_t x446 = 100U;
	uint32_t x448 = 36829U;

    t111 = (x445|((x446&x447)==x448));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = 1508144;
	int8_t x450 = INT8_MAX;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = 1;
	volatile int32_t t112 = -14;

    t112 = (x449|((x450&x451)==x452));

    if (t112 != 1508144) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 14580080;
	volatile int8_t x454 = INT8_MIN;
	int64_t x455 = -25784434226810LL;

    t113 = (x453|((x454&x455)==x456));

    if (t113 != 14580080) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	int16_t x458 = 220;
	int32_t x459 = INT32_MAX;
	uint64_t x460 = UINT64_MAX;

    t114 = (x457|((x458&x459)==x460));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	uint16_t x462 = 10317U;
	int8_t x463 = INT8_MIN;
	volatile int64_t x464 = INT64_MAX;
	volatile int32_t t115 = -3437;

    t115 = (x461|((x462&x463)==x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -124;
	int64_t x466 = INT64_MAX;
	volatile int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MIN;
	volatile int32_t t116 = -4867669;

    t116 = (x465|((x466&x467)==x468));

    if (t116 != -124) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -1;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 14U;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = 47;

    t117 = (x469|((x470&x471)==x472));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x473 = 217957313410LLU;
	int8_t x474 = 0;
	static uint16_t x475 = 103U;
	int32_t x476 = INT32_MIN;

    t118 = (x473|((x474&x475)==x476));

    if (t118 != 217957313410LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x477 = UINT16_MAX;
	int32_t x478 = INT32_MAX;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = -42;
	volatile int32_t t119 = 6;

    t119 = (x477|((x478&x479)==x480));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 7LLU;
	int32_t x482 = INT32_MIN;
	uint64_t x483 = 3521636824LLU;
	int64_t x484 = -1054737015493LL;
	uint64_t t120 = 19981LLU;

    t120 = (x481|((x482&x483)==x484));

    if (t120 != 7LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MIN;
	volatile int32_t t121 = -11911049;

    t121 = (x485|((x486&x487)==x488));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 0U;
	static int64_t x492 = INT64_MAX;
	volatile int32_t t122 = -42;

    t122 = (x489|((x490&x491)==x492));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x494 = INT32_MIN;
	static volatile uint64_t x495 = 154LLU;
	uint16_t x496 = 307U;
	int64_t t123 = -100458LL;

    t123 = (x493|((x494&x495)==x496));

    if (t123 != -71LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x498 = INT64_MIN;
	int16_t x499 = INT16_MAX;
	static uint16_t x500 = UINT16_MAX;

    t124 = (x497|((x498&x499)==x500));

    if (t124 != 960616170391339118LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MIN;
	int16_t x503 = -1;
	volatile int64_t x504 = 721837773LL;

    t125 = (x501|((x502&x503)==x504));

    if (t125 != 6) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = 494;
	int32_t x506 = INT32_MAX;
	int16_t x507 = INT16_MIN;
	uint8_t x508 = UINT8_MAX;
	int32_t t126 = 270463;

    t126 = (x505|((x506&x507)==x508));

    if (t126 != 494) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = -4390187;
	static volatile int32_t x511 = INT32_MAX;
	int8_t x512 = INT8_MIN;

    t127 = (x509|((x510&x511)==x512));

    if (t127 != 11) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = -1;
	volatile uint64_t x514 = UINT64_MAX;
	int64_t x515 = -1LL;
	volatile int64_t x516 = INT64_MAX;
	int32_t t128 = 180787867;

    t128 = (x513|((x514&x515)==x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x519 = INT8_MIN;
	uint64_t x520 = UINT64_MAX;
	volatile int32_t t129 = 217268;

    t129 = (x517|((x518&x519)==x520));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MAX;
	uint32_t x522 = 126900U;
	int32_t x523 = 0;
	int32_t x524 = INT32_MIN;
	int32_t t130 = INT32_MAX;

    t130 = (x521|((x522&x523)==x524));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x526 = UINT16_MAX;
	int32_t x527 = -11479871;

    t131 = (x525|((x526&x527)==x528));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	int64_t x530 = -1LL;
	int16_t x531 = -1;
	uint8_t x532 = 0U;
	int32_t t132 = -74893716;

    t132 = (x529|((x530&x531)==x532));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x534 = INT64_MIN;
	int16_t x535 = -1;
	int16_t x536 = -1;

    t133 = (x533|((x534&x535)==x536));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = INT16_MIN;
	uint64_t x540 = 422571699592796LLU;
	volatile int64_t t134 = INT64_MIN;

    t134 = (x537|((x538&x539)==x540));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	static uint8_t x542 = UINT8_MAX;
	static volatile int16_t x543 = 51;
	volatile int32_t t135 = INT32_MAX;

    t135 = (x541|((x542&x543)==x544));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	volatile uint16_t x546 = 138U;
	static uint16_t x547 = 213U;
	int8_t x548 = INT8_MIN;
	int32_t t136 = INT32_MIN;

    t136 = (x545|((x546&x547)==x548));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x550 = -421455067711138LL;

    t137 = (x549|((x550&x551)==x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MIN;
	int8_t x555 = INT8_MIN;
	int64_t t138 = INT64_MIN;

    t138 = (x553|((x554&x555)==x556));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 19;
	uint32_t x560 = 1057675U;
	int32_t t139 = 2;

    t139 = (x557|((x558&x559)==x560));

    if (t139 != 19) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = -11485;
	static int64_t x563 = -1LL;
	uint32_t t140 = UINT32_MAX;

    t140 = (x561|((x562&x563)==x564));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = 1;
	int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MIN;
	volatile int32_t t141 = 4375895;

    t141 = (x565|((x566&x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x570 = INT16_MIN;
	volatile int64_t x571 = INT64_MIN;
	volatile int32_t x572 = INT32_MIN;
	volatile int32_t t142 = INT32_MAX;

    t142 = (x569|((x570&x571)==x572));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	static uint16_t x574 = 27U;
	volatile int64_t x576 = INT64_MIN;
	int32_t t143 = -4831;

    t143 = (x573|((x574&x575)==x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = UINT16_MAX;
	volatile int64_t x579 = INT64_MIN;
	static uint16_t x580 = 195U;
	static volatile int64_t t144 = INT64_MAX;

    t144 = (x577|((x578&x579)==x580));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	int32_t x582 = INT32_MIN;
	int32_t x583 = 15757438;
	int16_t x584 = -1;
	uint64_t t145 = UINT64_MAX;

    t145 = (x581|((x582&x583)==x584));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile uint8_t x586 = UINT8_MAX;
	int64_t x587 = INT64_MAX;
	int16_t x588 = 31;
	uint64_t t146 = UINT64_MAX;

    t146 = (x585|((x586&x587)==x588));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 5U;
	volatile int64_t x591 = 25179758649756LL;
	volatile int32_t t147 = 1;

    t147 = (x589|((x590&x591)==x592));

    if (t147 != 5) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint64_t x594 = 17491822460358906LLU;
	int64_t x595 = -1LL;
	volatile uint16_t x596 = 456U;
	volatile int32_t t148 = -5;

    t148 = (x593|((x594&x595)==x596));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 14041U;
	static uint64_t x598 = UINT64_MAX;
	int8_t x599 = INT8_MAX;
	uint32_t t149 = 3U;

    t149 = (x597|((x598&x599)==x600));

    if (t149 != 14041U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 932U;
	int32_t x604 = 143321196;
	static volatile int32_t t150 = 301418;

    t150 = (x601|((x602&x603)==x604));

    if (t150 != 932) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 15U;
	uint64_t x607 = 486LLU;
	uint8_t x608 = UINT8_MAX;

    t151 = (x605|((x606&x607)==x608));

    if (t151 != 15) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 3U;
	int8_t x610 = 3;
	int16_t x611 = INT16_MIN;

    t152 = (x609|((x610&x611)==x612));

    if (t152 != 3) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = -1;
	uint64_t x615 = 1568LLU;
	uint16_t x616 = 511U;
	static int32_t t153 = -17;

    t153 = (x613|((x614&x615)==x616));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	static int8_t x618 = -1;
	static volatile int8_t x619 = INT8_MIN;
	int8_t x620 = 1;
	int32_t t154 = INT32_MAX;

    t154 = (x617|((x618&x619)==x620));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	volatile int64_t x622 = -1LL;
	static int8_t x623 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;
	int32_t t155 = 1;

    t155 = (x621|((x622&x623)==x624));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	volatile int8_t x626 = INT8_MAX;
	uint32_t x627 = UINT32_MAX;
	int16_t x628 = -66;
	static int32_t t156 = -14;

    t156 = (x625|((x626&x627)==x628));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	uint16_t x631 = 3793U;
	uint16_t x632 = 872U;
	int32_t t157 = 41050;

    t157 = (x629|((x630&x631)==x632));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	volatile uint64_t x635 = UINT64_MAX;
	uint32_t x636 = UINT32_MAX;
	int32_t t158 = 18281;

    t158 = (x633|((x634&x635)==x636));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x639 = INT32_MAX;
	volatile int32_t x640 = -1;

    t159 = (x637|((x638&x639)==x640));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = 0;
	uint8_t x643 = 3U;
	static uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -17707;

    t160 = (x641|((x642&x643)==x644));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x646 = 8U;
	static volatile int32_t x647 = -1;
	static volatile uint64_t t161 = UINT64_MAX;

    t161 = (x645|((x646&x647)==x648));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	int8_t x650 = 60;
	uint8_t x651 = 3U;
	int64_t x652 = -16639632905332265LL;
	int32_t t162 = INT32_MAX;

    t162 = (x649|((x650&x651)==x652));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	int16_t x654 = INT16_MIN;
	int64_t x655 = -309780878575LL;
	static int32_t x656 = INT32_MIN;
	volatile int32_t t163 = 32;

    t163 = (x653|((x654&x655)==x656));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 6U;
	int8_t x658 = INT8_MAX;

    t164 = (x657|((x658&x659)==x660));

    if (t164 != 6) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	uint8_t x663 = 2U;
	static uint8_t x664 = 90U;
	volatile int32_t t165 = 3242;

    t165 = (x661|((x662&x663)==x664));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 29U;
	volatile uint32_t x666 = UINT32_MAX;
	uint64_t x667 = 8746068393075LLU;
	int8_t x668 = -20;
	int32_t t166 = -44539;

    t166 = (x665|((x666&x667)==x668));

    if (t166 != 29) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	static int32_t x670 = 1510050;
	int64_t x671 = INT64_MIN;
	volatile int64_t t167 = -18069111970386485LL;

    t167 = (x669|((x670&x671)==x672));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	uint32_t x674 = UINT32_MAX;
	static volatile uint16_t x676 = 121U;
	int64_t t168 = -624161LL;

    t168 = (x673|((x674&x675)==x676));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 106U;
	uint32_t x680 = UINT32_MAX;

    t169 = (x677|((x678&x679)==x680));

    if (t169 != 106) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	static int16_t x683 = 14316;
	uint64_t x684 = 3160546818034478LLU;

    t170 = (x681|((x682&x683)==x684));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint64_t x686 = 588LLU;
	int64_t x688 = -6306463494LL;

    t171 = (x685|((x686&x687)==x688));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 1;
	static int16_t x690 = -1;
	int32_t x692 = 13988;
	int32_t t172 = -5090995;

    t172 = (x689|((x690&x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MIN;
	int8_t x695 = 0;

    t173 = (x693|((x694&x695)==x696));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	static int8_t x699 = INT8_MIN;
	uint8_t x700 = 57U;
	int32_t t174 = 203160880;

    t174 = (x697|((x698&x699)==x700));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = INT16_MIN;
	int64_t x702 = 1LL;
	int64_t x703 = INT64_MIN;
	int8_t x704 = 7;
	volatile int32_t t175 = 4159432;

    t175 = (x701|((x702&x703)==x704));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	int16_t x707 = INT16_MAX;
	int16_t x708 = 0;
	int32_t t176 = -28448982;

    t176 = (x705|((x706&x707)==x708));

    if (t176 != 13) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -43;
	int64_t x710 = INT64_MAX;
	uint32_t x711 = 243282U;
	static volatile int32_t t177 = 61;

    t177 = (x709|((x710&x711)==x712));

    if (t177 != -43) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = -1;
	int16_t x714 = INT16_MIN;

    t178 = (x713|((x714&x715)==x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = INT8_MAX;
	volatile int64_t x719 = INT64_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = 198;

    t179 = (x717|((x718&x719)==x720));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -1;
	int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MIN;
	static int8_t x724 = INT8_MAX;
	static int32_t t180 = -8076750;

    t180 = (x721|((x722&x723)==x724));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x726 = UINT8_MAX;
	static int8_t x727 = INT8_MIN;

    t181 = (x725|((x726&x727)==x728));

    if (t181 != 28082) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	int64_t x730 = -1LL;
	volatile int32_t x731 = INT32_MAX;
	volatile int8_t x732 = -9;
	int32_t t182 = 6432833;

    t182 = (x729|((x730&x731)==x732));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x733 = 35U;
	uint32_t x734 = UINT32_MAX;
	static int32_t x735 = INT32_MIN;
	uint8_t x736 = 2U;

    t183 = (x733|((x734&x735)==x736));

    if (t183 != 35) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MAX;
	uint32_t x738 = 61984402U;
	int32_t x739 = -1;
	static int32_t t184 = INT32_MAX;

    t184 = (x737|((x738&x739)==x740));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = UINT64_MAX;
	uint64_t x743 = 79LLU;
	uint16_t x744 = 13812U;
	static uint64_t t185 = UINT64_MAX;

    t185 = (x741|((x742&x743)==x744));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MIN;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = -3387299490811LL;
	static int64_t x748 = INT64_MIN;

    t186 = (x745|((x746&x747)==x748));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -15314020793LL;
	int16_t x750 = -6;
	int64_t t187 = -24LL;

    t187 = (x749|((x750&x751)==x752));

    if (t187 != -15314020793LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = 4;
	int32_t x754 = INT32_MAX;
	int8_t x756 = 45;
	volatile int32_t t188 = 2605251;

    t188 = (x753|((x754&x755)==x756));

    if (t188 != 4) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	volatile int16_t x759 = 204;
	uint16_t x760 = UINT16_MAX;
	static int32_t t189 = -12992168;

    t189 = (x757|((x758&x759)==x760));

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x763 = INT16_MIN;
	int64_t x764 = 345007403LL;
	static volatile int32_t t190 = -2;

    t190 = (x761|((x762&x763)==x764));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = INT32_MIN;
	int16_t x767 = -1;
	static int32_t t191 = INT32_MIN;

    t191 = (x765|((x766&x767)==x768));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x770 = -1983814;
	volatile int32_t x771 = INT32_MIN;
	volatile int8_t x772 = -1;
	static volatile int32_t t192 = 7;

    t192 = (x769|((x770&x771)==x772));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	uint64_t x774 = 16842LLU;
	volatile int64_t x775 = 1LL;
	uint32_t x776 = UINT32_MAX;
	int32_t t193 = INT32_MAX;

    t193 = (x773|((x774&x775)==x776));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x778 = 7;
	static int8_t x779 = INT8_MIN;
	static int64_t x780 = 1684936LL;
	int32_t t194 = 770;

    t194 = (x777|((x778&x779)==x780));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	int32_t x782 = -1;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = -1;
	volatile int64_t t195 = 59487LL;

    t195 = (x781|((x782&x783)==x784));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	uint16_t x786 = UINT16_MAX;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = -321781352;
	volatile int32_t t196 = -46;

    t196 = (x785|((x786&x787)==x788));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -22;
	volatile int32_t x790 = -84979;
	static volatile int32_t t197 = 8;

    t197 = (x789|((x790&x791)==x792));

    if (t197 != -22) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x795 = UINT64_MAX;
	int8_t x796 = -1;
	volatile int32_t t198 = 0;

    t198 = (x793|((x794&x795)==x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MIN;
	int64_t x798 = -14LL;
	int64_t x799 = INT64_MIN;
	volatile uint8_t x800 = UINT8_MAX;
	volatile int32_t t199 = INT32_MIN;

    t199 = (x797|((x798&x799)==x800));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

