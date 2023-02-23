
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

volatile uint32_t t0 = UINT32_MAX;
int16_t x10 = -1;
volatile int8_t x11 = 27;
uint16_t x15 = 141U;
int32_t x18 = INT32_MIN;
static int16_t x20 = INT16_MIN;
int64_t x23 = INT64_MIN;
volatile int32_t t5 = 6392;
int16_t x28 = INT16_MAX;
static volatile int16_t x32 = 6;
volatile int32_t x33 = 53;
volatile int16_t x38 = INT16_MIN;
uint64_t x40 = UINT64_MAX;
volatile int64_t x44 = INT64_MAX;
int16_t x48 = INT16_MIN;
volatile int32_t x49 = -1;
int64_t x51 = INT64_MIN;
volatile int32_t t12 = -3262;
volatile int16_t x53 = INT16_MIN;
int64_t x57 = 23033414660470LL;
int16_t x59 = INT16_MIN;
int8_t x60 = INT8_MAX;
volatile int32_t x61 = -1;
volatile int32_t x62 = INT32_MIN;
int64_t x63 = INT64_MIN;
int16_t x64 = INT16_MIN;
int64_t x65 = INT64_MAX;
static int32_t x67 = -506129;
static int16_t x72 = -1;
int32_t x74 = INT32_MIN;
int8_t x82 = -6;
volatile int32_t t22 = -177;
volatile uint32_t t23 = 57U;
uint8_t x98 = 0U;
int8_t x106 = INT8_MIN;
int8_t x108 = -15;
int64_t t26 = -3367826357002489511LL;
int16_t x109 = INT16_MIN;
static int64_t x110 = INT64_MIN;
static volatile int64_t x113 = INT64_MIN;
int32_t x116 = INT32_MAX;
int32_t x117 = INT32_MIN;
int8_t x119 = INT8_MAX;
volatile int32_t t29 = -2656;
volatile uint64_t x121 = 200170935404LLU;
uint64_t t30 = 1518LLU;
static int64_t x125 = -1LL;
int8_t x134 = 0;
int32_t x137 = 196443616;
uint64_t x139 = 62071088423719LLU;
uint32_t x145 = UINT32_MAX;
uint16_t x148 = 1U;
volatile uint32_t t36 = UINT32_MAX;
static int32_t x151 = INT32_MIN;
uint32_t x159 = 796U;
static int8_t x160 = INT8_MAX;
int8_t x161 = -1;
uint16_t x164 = 39U;
int32_t t40 = -5;
int8_t x165 = -1;
int8_t x170 = INT8_MAX;
static volatile int8_t x176 = INT8_MIN;
uint16_t x182 = UINT16_MAX;
volatile int32_t x192 = -1;
static int64_t x200 = INT64_MAX;
uint64_t t49 = UINT64_MAX;
int64_t x205 = -83393072767LL;
volatile int64_t x212 = INT64_MIN;
uint64_t x214 = UINT64_MAX;
volatile int64_t x216 = INT64_MIN;
int32_t t53 = 73;
int16_t x219 = -1;
int8_t x223 = -3;
int8_t x229 = INT8_MIN;
uint32_t x233 = 455191916U;
int32_t x238 = INT32_MAX;
static uint8_t x242 = 11U;
int64_t x246 = 458595338LL;
static int16_t x251 = INT16_MIN;
uint32_t x268 = UINT32_MAX;
uint64_t x276 = UINT64_MAX;
static volatile int32_t t68 = -369089824;
uint32_t x279 = 155263U;
uint8_t x280 = 0U;
volatile uint16_t x283 = 1696U;
volatile int8_t x289 = INT8_MAX;
int32_t x290 = INT32_MIN;
volatile int32_t t72 = -241341141;
int8_t x293 = INT8_MIN;
volatile uint16_t x297 = 170U;
volatile int8_t x299 = INT8_MIN;
static int16_t x306 = INT16_MIN;
volatile int32_t t77 = -205179299;
int32_t x313 = INT32_MIN;
volatile int64_t x314 = INT64_MIN;
uint16_t x317 = UINT16_MAX;
static int8_t x318 = INT8_MAX;
volatile int32_t t80 = 10;
int8_t x327 = -1;
int16_t x328 = INT16_MIN;
volatile int32_t t81 = 929837672;
int64_t x331 = -1317352928532332LL;
static volatile uint16_t x339 = UINT16_MAX;
int32_t t84 = -4;
uint32_t t85 = 8245933U;
static int16_t x346 = INT16_MIN;
static volatile int32_t t87 = -1120637;
static int32_t t89 = 61786;
volatile int8_t x363 = -21;
static int8_t x365 = -1;
uint32_t x371 = UINT32_MAX;
static int8_t x372 = INT8_MIN;
uint64_t x377 = 178944LLU;
static int64_t x381 = -104042137935295139LL;
volatile int32_t t97 = 175;
int32_t t98 = 43;
int64_t x397 = INT64_MIN;
uint32_t x399 = 467610U;
int64_t x403 = INT64_MAX;
int64_t t100 = INT64_MAX;
uint8_t x406 = 2U;
int64_t x418 = -1LL;
int8_t x420 = -9;
int64_t x424 = INT64_MIN;
int32_t t105 = -902088055;
int16_t x432 = INT16_MIN;
volatile int32_t x433 = INT32_MIN;
static uint16_t x434 = 1577U;
volatile int32_t x444 = INT32_MAX;
int32_t t110 = -115;
int32_t t111 = -25996;
int16_t x454 = INT16_MIN;
uint32_t x458 = 734653852U;
static volatile int32_t t114 = 20818748;
int8_t x464 = INT8_MAX;
int8_t x467 = INT8_MAX;
int64_t x468 = INT64_MAX;
int32_t x470 = INT32_MIN;
uint64_t x476 = UINT64_MAX;
static volatile int64_t t119 = -641863094231LL;
int32_t t120 = 292422379;
int8_t x486 = INT8_MIN;
volatile uint16_t x490 = 1U;
int32_t x493 = -17;
static int64_t x500 = -1LL;
volatile uint64_t x501 = 8375443LLU;
int16_t x504 = -202;
int16_t x505 = INT16_MAX;
int32_t t126 = -23495;
int32_t t129 = -8992144;
volatile int16_t x521 = -1;
int16_t x528 = INT16_MAX;
int32_t x532 = INT32_MIN;
volatile int32_t t133 = 0;
int8_t x537 = -1;
uint32_t x542 = 458288U;
int16_t x546 = INT16_MIN;
volatile uint64_t t137 = UINT64_MAX;
int16_t x553 = 7;
int32_t t139 = INT32_MAX;
static volatile int8_t x568 = 0;
int16_t x580 = INT16_MAX;
volatile int64_t t144 = 937207LL;
volatile uint8_t x581 = 1U;
int32_t t146 = -148;
int16_t x590 = INT16_MIN;
int8_t x594 = 1;
static volatile uint64_t t148 = 160857LLU;
int8_t x598 = 1;
int16_t x613 = 2308;
int32_t t153 = -47929884;
uint64_t x630 = 7961503393LLU;
uint16_t x632 = 63U;
int32_t x635 = INT32_MIN;
uint16_t x636 = 24U;
int32_t x646 = 2;
volatile int32_t t161 = -29929733;
static int16_t x655 = 1426;
static uint8_t x656 = 13U;
int32_t x658 = -1;
static volatile int32_t t164 = 26720;
static int64_t x662 = INT64_MIN;
int32_t x671 = -1;
volatile int64_t x672 = 7984574751145LL;
static int64_t x675 = -1LL;
static int16_t x676 = INT16_MIN;
int32_t x683 = 1068463996;
uint32_t x684 = 478471U;
static int32_t x687 = 35;
int16_t x689 = INT16_MIN;
volatile int8_t x691 = -1;
volatile int32_t t173 = 49651722;
uint16_t x711 = 27659U;
int64_t x713 = INT64_MIN;
static uint32_t x714 = UINT32_MAX;
static int64_t t178 = -105375470050LL;
int64_t x717 = 970LL;
volatile int8_t x719 = INT8_MIN;
int32_t x720 = -2647;
volatile int8_t x727 = -1;
int32_t x729 = -54900485;
uint16_t x732 = UINT16_MAX;
volatile int32_t t182 = 12348;
int8_t x734 = INT8_MAX;
int64_t x741 = -1LL;
int64_t t185 = 108461248630LL;
volatile int64_t x745 = -1LL;
static int32_t t187 = -7744;
static volatile uint64_t t188 = 2LLU;
static int8_t x759 = INT8_MIN;
int64_t x760 = INT64_MAX;
volatile int32_t t189 = 22276;
uint8_t x771 = 17U;
int32_t t192 = 0;
volatile int32_t x774 = INT32_MIN;
uint32_t x777 = 54551620U;
int64_t x789 = -1LL;
static uint8_t x790 = UINT8_MAX;
uint8_t x795 = 4U;
volatile int64_t x799 = -1LL;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MIN;
	volatile uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;

    t0 = (x1|((x2<=x3)!=x4));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 105U;
	volatile uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MAX;
	static volatile uint64_t t1 = UINT64_MAX;

    t1 = (x5|((x6<=x7)!=x8));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	static int32_t x12 = -1;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (x9|((x10<=x11)!=x12));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = -1;
	static uint32_t x16 = 4U;
	int32_t t3 = 35622986;

    t3 = (x13|((x14<=x15)!=x16));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	volatile int32_t t4 = 492062;

    t4 = (x17|((x18<=x19)!=x20));

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	static uint64_t x22 = 2226336794413479LLU;
	volatile uint32_t x24 = 116365U;

    t5 = (x21|((x22<=x23)!=x24));

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 24U;
	volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = -40;
	int32_t t6 = 404935431;

    t6 = (x25|((x26<=x27)!=x28));

    if (t6 != 25) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -2191736;

    t7 = (x29|((x30<=x31)!=x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -1;
	uint16_t x35 = 18U;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 0;

    t8 = (x33|((x34<=x35)!=x36));

    if (t8 != 53) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -220;
	uint64_t x39 = 8596254661630403LLU;
	volatile int32_t t9 = 32184;

    t9 = (x37|((x38<=x39)!=x40));

    if (t9 != -219) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	volatile int32_t x42 = -26713;
	int64_t x43 = INT64_MAX;
	static int32_t t10 = -92918717;

    t10 = (x41|((x42<=x43)!=x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 19;
	uint16_t x46 = 3U;
	static volatile int16_t x47 = INT16_MIN;
	volatile int32_t t11 = -113431055;

    t11 = (x45|((x46<=x47)!=x48));

    if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -1;
	uint8_t x52 = 4U;

    t12 = (x49|((x50<=x51)!=x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = 197095638;
	static int8_t x55 = 1;
	uint8_t x56 = 1U;
	static int32_t t13 = -220;

    t13 = (x53|((x54<=x55)!=x56));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x58 = -112;
	static volatile int64_t t14 = 10LL;

    t14 = (x57|((x58<=x59)!=x60));

    if (t14 != 23033414660471LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t t15 = -40;

    t15 = (x61|((x62<=x63)!=x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 115U;
	volatile int32_t x68 = INT32_MAX;
	volatile int64_t t16 = INT64_MAX;

    t16 = (x65|((x66<=x67)!=x68));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 14251U;
	volatile int32_t x70 = INT32_MIN;
	static int32_t x71 = -54201;
	uint32_t t17 = 224U;

    t17 = (x69|((x70<=x71)!=x72));

    if (t17 != 14251U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 27LLU;
	volatile uint8_t x75 = UINT8_MAX;
	uint64_t x76 = 73600522LLU;
	volatile uint64_t t18 = 6559609414927LLU;

    t18 = (x73|((x74<=x75)!=x76));

    if (t18 != 27LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	volatile int32_t x78 = 2733776;
	int32_t x79 = INT32_MAX;
	volatile int64_t x80 = INT64_MAX;
	volatile int64_t t19 = -64657601835560LL;

    t19 = (x77|((x78<=x79)!=x80));

    if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 473964U;
	int64_t x83 = INT64_MAX;
	int32_t x84 = INT32_MAX;
	uint32_t t20 = 67829597U;

    t20 = (x81|((x82<=x83)!=x84));

    if (t20 != 473965U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	static int64_t x88 = INT64_MAX;
	int32_t t21 = -16;

    t21 = (x85|((x86<=x87)!=x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 50U;
	int8_t x90 = 42;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 16319734683LLU;

    t22 = (x89|((x90<=x91)!=x92));

    if (t22 != 51) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 325909370U;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = -26000157;

    t23 = (x93|((x94<=x95)!=x96));

    if (t23 != 325909371U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 52U;
	uint64_t x99 = 1LLU;
	int8_t x100 = INT8_MAX;
	static int32_t t24 = -795424;

    t24 = (x97|((x98<=x99)!=x100));

    if (t24 != 53) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MAX;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t25 = INT32_MAX;

    t25 = (x101|((x102<=x103)!=x104));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x107 = INT32_MAX;

    t26 = (x105|((x106<=x107)!=x108));

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x111 = 839421085291LL;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 22532;

    t27 = (x109|((x110<=x111)!=x112));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int64_t t28 = -40281034212549LL;

    t28 = (x113|((x114<=x115)!=x116));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x118 = 0;
	int8_t x120 = INT8_MIN;

    t29 = (x117|((x118<=x119)!=x120));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 2;
	int8_t x123 = 0;
	int32_t x124 = INT32_MIN;

    t30 = (x121|((x122<=x123)!=x124));

    if (t30 != 200170935405LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	int32_t x127 = 3480121;
	int16_t x128 = -2;
	volatile int64_t t31 = 335LL;

    t31 = (x125|((x126<=x127)!=x128));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	static uint8_t x130 = 0U;
	int64_t x131 = -893LL;
	int8_t x132 = -1;
	volatile int32_t t32 = 353382217;

    t32 = (x129|((x130<=x131)!=x132));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 108U;
	static int16_t x135 = -6339;
	int32_t x136 = INT32_MAX;
	static uint32_t t33 = 7895107U;

    t33 = (x133|((x134<=x135)!=x136));

    if (t33 != 109U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = 137;
	int32_t x140 = -93682;
	volatile int32_t t34 = 27096228;

    t34 = (x137|((x138<=x139)!=x140));

    if (t34 != 196443617) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -961839;
	int16_t x142 = INT16_MAX;
	uint8_t x143 = 51U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -116936562;

    t35 = (x141|((x142<=x143)!=x144));

    if (t35 != -961839) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = 854U;
	int16_t x147 = INT16_MIN;

    t36 = (x145|((x146<=x147)!=x148));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	static uint8_t x150 = 3U;
	static uint64_t x152 = UINT64_MAX;
	static volatile uint32_t t37 = UINT32_MAX;

    t37 = (x149|((x150<=x151)!=x152));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	static uint8_t x154 = 37U;
	uint8_t x155 = UINT8_MAX;
	static volatile int64_t x156 = INT64_MAX;
	volatile int32_t t38 = INT32_MAX;

    t38 = (x153|((x154<=x155)!=x156));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MIN;
	static volatile uint32_t t39 = UINT32_MAX;

    t39 = (x157|((x158<=x159)!=x160));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = -1LL;
	int64_t x163 = INT64_MIN;

    t40 = (x161|((x162<=x163)!=x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = 2355U;
	int32_t x167 = -1;
	static volatile int64_t x168 = -87LL;
	int32_t t41 = 24544;

    t41 = (x165|((x166<=x167)!=x168));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x171 = 3;
	static uint32_t x172 = UINT32_MAX;
	int64_t t42 = -7031552LL;

    t42 = (x169|((x170<=x171)!=x172));

    if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	static int8_t x174 = INT8_MIN;
	int64_t x175 = -105190884734994LL;
	volatile int64_t t43 = INT64_MAX;

    t43 = (x173|((x174<=x175)!=x176));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	static int64_t x179 = -7576539086LL;
	volatile int16_t x180 = -270;
	int32_t t44 = 1;

    t44 = (x177|((x178<=x179)!=x180));

    if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	int8_t x183 = -1;
	uint64_t x184 = 10339233LLU;
	volatile int32_t t45 = INT32_MAX;

    t45 = (x181|((x182<=x183)!=x184));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = 18U;
	int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = 114694567U;
	volatile int32_t t46 = -165;

    t46 = (x185|((x186<=x187)!=x188));

    if (t46 != 19) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MAX;
	static volatile int64_t x191 = INT64_MAX;
	volatile int32_t t47 = -948;

    t47 = (x189|((x190<=x191)!=x192));

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	static int8_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = 155842;

    t48 = (x193|((x194<=x195)!=x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MAX;
	volatile uint8_t x199 = 11U;

    t49 = (x197|((x198<=x199)!=x200));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 31897714LLU;
	int32_t x202 = 2560;
	uint8_t x203 = UINT8_MAX;
	static int16_t x204 = 33;
	uint64_t t50 = 114543348537366LLU;

    t50 = (x201|((x202<=x203)!=x204));

    if (t50 != 31897715LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x206 = 0U;
	uint32_t x207 = 21539197U;
	static uint16_t x208 = 41U;
	int64_t t51 = -2448LL;

    t51 = (x205|((x206<=x207)!=x208));

    if (t51 != -83393072767LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x209 = 1;
	uint8_t x210 = 0U;
	volatile int8_t x211 = -1;
	volatile int32_t t52 = 1;

    t52 = (x209|((x210<=x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static volatile uint16_t x215 = UINT16_MAX;

    t53 = (x213|((x214<=x215)!=x216));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = -1;
	volatile int8_t x218 = -18;
	uint16_t x220 = 1U;
	static int32_t t54 = -12496;

    t54 = (x217|((x218<=x219)!=x220));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -3;
	int64_t x224 = INT64_MAX;
	int32_t t55 = -165;

    t55 = (x221|((x222<=x223)!=x224));

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1018887LL;
	uint32_t x226 = 220U;
	int32_t x227 = -101;
	static int32_t x228 = 604721;
	volatile int64_t t56 = -6223039138LL;

    t56 = (x225|((x226<=x227)!=x228));

    if (t56 != -1018887LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	volatile int16_t x231 = INT16_MIN;
	uint16_t x232 = 149U;
	static volatile int32_t t57 = 1;

    t57 = (x229|((x230<=x231)!=x232));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	static int64_t x236 = INT64_MIN;
	volatile uint32_t t58 = 2770U;

    t58 = (x233|((x234<=x235)!=x236));

    if (t58 != 455191917U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 1;
	uint32_t x239 = 100U;
	volatile int8_t x240 = INT8_MIN;
	int32_t t59 = 123270452;

    t59 = (x237|((x238<=x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 422;
	static int16_t x243 = -13;
	uint16_t x244 = 22U;
	static int32_t t60 = 63;

    t60 = (x241|((x242<=x243)!=x244));

    if (t60 != 423) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 3U;
	volatile int8_t x247 = 4;
	uint64_t x248 = 174035426585LLU;
	volatile int32_t t61 = -11238;

    t61 = (x245|((x246<=x247)!=x248));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x250 = 5839;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = -80527749;

    t62 = (x249|((x250<=x251)!=x252));

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 8U;
	int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = 0U;
	uint64_t x256 = UINT64_MAX;
	volatile uint32_t t63 = 127902425U;

    t63 = (x253|((x254<=x255)!=x256));

    if (t63 != 9U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 1425U;
	volatile uint16_t x258 = 4U;
	uint16_t x259 = 3505U;
	volatile int64_t x260 = -1LL;
	volatile uint32_t t64 = 185404U;

    t64 = (x257|((x258<=x259)!=x260));

    if (t64 != 1425U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -340;

    t65 = (x261|((x262<=x263)!=x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	int16_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	static int32_t t66 = -4837;

    t66 = (x265|((x266<=x267)!=x268));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -139542813LL;
	volatile int16_t x270 = INT16_MIN;
	volatile int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int64_t t67 = 249LL;

    t67 = (x269|((x270<=x271)!=x272));

    if (t67 != -139542813LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;

    t68 = (x273|((x274<=x275)!=x276));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = -6668LL;
	int8_t x278 = INT8_MIN;
	static int64_t t69 = 1327971641501LL;

    t69 = (x277|((x278<=x279)!=x280));

    if (t69 != -6668LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	static uint16_t x282 = UINT16_MAX;
	uint16_t x284 = UINT16_MAX;
	static volatile int32_t t70 = 639343837;

    t70 = (x281|((x282<=x283)!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = -56LL;
	int32_t x286 = 1632;
	int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MAX;
	int64_t t71 = 844420424925968LL;

    t71 = (x285|((x286<=x287)!=x288));

    if (t71 != -55LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x291 = INT8_MIN;
	int64_t x292 = -1317225639302LL;

    t72 = (x289|((x290<=x291)!=x292));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = 9U;
	uint32_t x295 = 5250U;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 309859554;

    t73 = (x293|((x294<=x295)!=x296));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = -1436LL;
	uint64_t x300 = 9666LLU;
	int32_t t74 = -10835208;

    t74 = (x297|((x298<=x299)!=x300));

    if (t74 != 171) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 62744U;
	volatile int16_t x302 = -21;
	uint32_t x303 = 16666315U;
	int16_t x304 = -7223;
	uint32_t t75 = 3U;

    t75 = (x301|((x302<=x303)!=x304));

    if (t75 != 62745U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	volatile int64_t x307 = 24LL;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t76 = 2371;

    t76 = (x305|((x306<=x307)!=x308));

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 3U;
	int8_t x310 = INT8_MAX;
	uint8_t x311 = 1U;
	int32_t x312 = -1;

    t77 = (x309|((x310<=x311)!=x312));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x315 = UINT16_MAX;
	static int64_t x316 = -65827870596936LL;
	int32_t t78 = -89851;

    t78 = (x313|((x314<=x315)!=x316));

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x319 = INT8_MAX;
	uint16_t x320 = 10729U;
	int32_t t79 = 2781;

    t79 = (x317|((x318<=x319)!=x320));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MAX;

    t80 = (x321|((x322<=x323)!=x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = UINT8_MAX;
	int16_t x326 = -16;

    t81 = (x325|((x326<=x327)!=x328));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 3U;
	uint64_t x330 = 5638044616LLU;
	static int32_t x332 = INT32_MIN;
	int32_t t82 = 9;

    t82 = (x329|((x330<=x331)!=x332));

    if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	uint16_t x334 = 61U;
	int64_t x335 = INT64_MAX;
	uint8_t x336 = 4U;
	int64_t t83 = -110393569LL;

    t83 = (x333|((x334<=x335)!=x336));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 840;
	int64_t x338 = -1LL;
	uint8_t x340 = 30U;

    t84 = (x337|((x338<=x339)!=x340));

    if (t84 != 841) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 77334969U;
	uint16_t x342 = 54U;
	volatile uint64_t x343 = 3188948895158645874LLU;
	uint16_t x344 = 31075U;

    t85 = (x341|((x342<=x343)!=x344));

    if (t85 != 77334969U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	volatile uint64_t x347 = 6685548664105965LLU;
	volatile int64_t x348 = -4036407754LL;
	int32_t t86 = -132335290;

    t86 = (x345|((x346<=x347)!=x348));

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = -68;
	volatile uint32_t x350 = UINT32_MAX;
	static int64_t x351 = INT64_MIN;
	uint16_t x352 = 0U;

    t87 = (x349|((x350<=x351)!=x352));

    if (t87 != -68) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 31619U;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	int32_t x356 = 5;
	volatile int32_t t88 = 157024069;

    t88 = (x353|((x354<=x355)!=x356));

    if (t88 != 31619) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x357 = UINT8_MAX;
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;

    t89 = (x357|((x358<=x359)!=x360));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -52617316LL;
	int64_t x362 = INT64_MIN;
	static int64_t x364 = -16033480300803LL;
	int64_t t90 = -17524LL;

    t90 = (x361|((x362<=x363)!=x364));

    if (t90 != -52617315LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = 15U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = -200LL;
	static int32_t t91 = -54;

    t91 = (x365|((x366<=x367)!=x368));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -11717;
	int32_t x370 = -1489;
	int32_t t92 = -6757925;

    t92 = (x369|((x370<=x371)!=x372));

    if (t92 != -11717) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	volatile uint8_t x374 = 1U;
	static int16_t x375 = 1;
	int16_t x376 = -1;
	uint64_t t93 = UINT64_MAX;

    t93 = (x373|((x374<=x375)!=x376));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x378 = UINT8_MAX;
	int32_t x379 = INT32_MAX;
	volatile int8_t x380 = -2;
	volatile uint64_t t94 = 1520439832558LLU;

    t94 = (x377|((x378<=x379)!=x380));

    if (t94 != 178945LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x382 = 19U;
	int8_t x383 = INT8_MAX;
	static int8_t x384 = -1;
	int64_t t95 = 1LL;

    t95 = (x381|((x382<=x383)!=x384));

    if (t95 != -104042137935295139LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MAX;
	int8_t x386 = 16;
	static uint16_t x387 = 27481U;
	int16_t x388 = 0;
	static volatile int32_t t96 = 13805075;

    t96 = (x385|((x386<=x387)!=x388));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	uint16_t x390 = 21284U;
	static int8_t x391 = -1;
	int64_t x392 = INT64_MAX;

    t97 = (x389|((x390<=x391)!=x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 57U;
	int32_t x394 = INT32_MIN;
	static uint8_t x395 = 1U;
	int32_t x396 = -1;

    t98 = (x393|((x394<=x395)!=x396));

    if (t98 != 57) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = -1LL;
	static int32_t x400 = -97;
	int64_t t99 = 229959679116583LL;

    t99 = (x397|((x398<=x399)!=x400));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = INT64_MAX;
	int16_t x402 = INT16_MIN;
	uint16_t x404 = 2409U;

    t100 = (x401|((x402<=x403)!=x404));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	static int8_t x407 = -1;
	uint64_t x408 = 492847LLU;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x405|((x406<=x407)!=x408));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	volatile int16_t x410 = INT16_MAX;
	int64_t x411 = INT64_MIN;
	static volatile int8_t x412 = -1;
	static volatile int32_t t102 = 4;

    t102 = (x409|((x410<=x411)!=x412));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MAX;
	volatile int32_t x414 = -1;
	uint8_t x415 = 31U;
	static int64_t x416 = INT64_MIN;
	int32_t t103 = -156009399;

    t103 = (x413|((x414<=x415)!=x416));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	volatile uint16_t x419 = 2679U;
	volatile int32_t t104 = INT32_MAX;

    t104 = (x417|((x418<=x419)!=x420));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 15U;
	volatile uint16_t x422 = 2U;
	static int64_t x423 = 1575769652970476LL;

    t105 = (x421|((x422<=x423)!=x424));

    if (t105 != 15) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	uint32_t x426 = 16934695U;
	int8_t x427 = 0;
	volatile uint64_t x428 = 5928943241977LLU;
	int32_t t106 = -52;

    t106 = (x425|((x426<=x427)!=x428));

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 10726U;
	int16_t x430 = -1;
	uint32_t x431 = UINT32_MAX;
	uint32_t t107 = 235744085U;

    t107 = (x429|((x430<=x431)!=x432));

    if (t107 != 10727U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x435 = 72438LLU;
	static volatile int32_t x436 = 22368597;
	volatile int32_t t108 = -5;

    t108 = (x433|((x434<=x435)!=x436));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 268186414466709LL;
	uint64_t x438 = 4658LLU;
	static int64_t x439 = -1LL;
	int64_t x440 = -1LL;
	int64_t t109 = 306270455593403194LL;

    t109 = (x437|((x438<=x439)!=x440));

    if (t109 != 268186414466709LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	int16_t x442 = 11983;
	uint16_t x443 = UINT16_MAX;

    t110 = (x441|((x442<=x443)!=x444));

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MAX;
	static int8_t x448 = -1;

    t111 = (x445|((x446<=x447)!=x448));

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 55074159198LLU;
	volatile int32_t x450 = 78;
	volatile uint64_t x451 = UINT64_MAX;
	int16_t x452 = INT16_MIN;
	volatile uint64_t t112 = 716392906099LLU;

    t112 = (x449|((x450<=x451)!=x452));

    if (t112 != 55074159199LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	int32_t x455 = INT32_MAX;
	uint16_t x456 = UINT16_MAX;
	int32_t t113 = 2421386;

    t113 = (x453|((x454<=x455)!=x456));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = 0U;
	static int16_t x459 = INT16_MIN;
	uint32_t x460 = 1U;

    t114 = (x457|((x458<=x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 55U;
	uint32_t x462 = UINT32_MAX;
	volatile int32_t x463 = INT32_MIN;
	static volatile int32_t t115 = -24;

    t115 = (x461|((x462<=x463)!=x464));

    if (t115 != 55) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 2119915LL;
	int8_t x466 = INT8_MIN;
	volatile int64_t t116 = 3696134LL;

    t116 = (x465|((x466<=x467)!=x468));

    if (t116 != 2119915LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x469 = 9921U;
	uint16_t x471 = 18U;
	int32_t x472 = INT32_MAX;
	uint32_t t117 = 188U;

    t117 = (x469|((x470<=x471)!=x472));

    if (t117 != 9921U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 45U;
	uint32_t x474 = UINT32_MAX;
	static volatile int8_t x475 = -1;
	volatile int32_t t118 = 962;

    t118 = (x473|((x474<=x475)!=x476));

    if (t118 != 45) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -4988641LL;
	volatile int16_t x478 = 12;
	volatile int32_t x479 = -1;
	static int8_t x480 = -1;

    t119 = (x477|((x478<=x479)!=x480));

    if (t119 != -4988641LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MAX;
	uint8_t x482 = 1U;
	static int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MAX;

    t120 = (x481|((x482<=x483)!=x484));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int64_t x487 = INT64_MIN;
	static int64_t x488 = INT64_MIN;
	static int32_t t121 = 661266638;

    t121 = (x485|((x486<=x487)!=x488));

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 32620U;
	uint16_t x491 = UINT16_MAX;
	int16_t x492 = -1;
	uint32_t t122 = 85251359U;

    t122 = (x489|((x490<=x491)!=x492));

    if (t122 != 32621U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	int32_t x495 = 26045920;
	static volatile int8_t x496 = 34;
	int32_t t123 = 0;

    t123 = (x493|((x494<=x495)!=x496));

    if (t123 != -17) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	int16_t x498 = -116;
	int64_t x499 = -1LL;
	int32_t t124 = 0;

    t124 = (x497|((x498<=x499)!=x500));

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = -1;
	volatile uint64_t x503 = 0LLU;
	volatile uint64_t t125 = 1064537565696LLU;

    t125 = (x501|((x502<=x503)!=x504));

    if (t125 != 8375443LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = UINT32_MAX;
	static uint16_t x507 = 14186U;
	int32_t x508 = INT32_MIN;

    t126 = (x505|((x506<=x507)!=x508));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 17U;
	static volatile uint16_t x510 = UINT16_MAX;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = 5;
	volatile int32_t t127 = -5905919;

    t127 = (x509|((x510<=x511)!=x512));

    if (t127 != 17) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 34U;
	int32_t x514 = INT32_MAX;
	volatile int32_t x515 = INT32_MAX;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = -164;

    t128 = (x513|((x514<=x515)!=x516));

    if (t128 != 35) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -3128;
	static int32_t x518 = INT32_MAX;
	static int64_t x519 = INT64_MIN;
	int64_t x520 = INT64_MIN;

    t129 = (x517|((x518<=x519)!=x520));

    if (t129 != -3127) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = 2U;
	volatile uint8_t x523 = 1U;
	int64_t x524 = INT64_MAX;
	volatile int32_t t130 = 0;

    t130 = (x521|((x522<=x523)!=x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 104U;
	uint32_t x526 = 931356U;
	uint16_t x527 = 25U;
	volatile int32_t t131 = 365;

    t131 = (x525|((x526<=x527)!=x528));

    if (t131 != 105) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x530 = INT64_MIN;
	volatile uint64_t x531 = UINT64_MAX;
	int32_t t132 = INT32_MAX;

    t132 = (x529|((x530<=x531)!=x532));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 708U;
	static int32_t x534 = INT32_MIN;
	int32_t x535 = INT32_MAX;
	int16_t x536 = INT16_MIN;

    t133 = (x533|((x534<=x535)!=x536));

    if (t133 != 709) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x538 = -1LL;
	uint16_t x539 = 2018U;
	int64_t x540 = INT64_MIN;
	volatile int32_t t134 = -121973;

    t134 = (x537|((x538<=x539)!=x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = -1;
	static int32_t x543 = 142675;
	uint8_t x544 = 2U;
	volatile int32_t t135 = 3256;

    t135 = (x541|((x542<=x543)!=x544));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	uint8_t x547 = 24U;
	int8_t x548 = INT8_MIN;
	int32_t t136 = INT32_MAX;

    t136 = (x545|((x546<=x547)!=x548));

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	int32_t x550 = INT32_MIN;
	volatile int16_t x551 = -1;
	static volatile uint16_t x552 = 25U;

    t137 = (x549|((x550<=x551)!=x552));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x554 = -2653;
	uint64_t x555 = 59265LLU;
	uint32_t x556 = UINT32_MAX;
	volatile int32_t t138 = -32;

    t138 = (x553|((x554<=x555)!=x556));

    if (t138 != 7) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MAX;
	int64_t x558 = -1LL;
	uint32_t x559 = UINT32_MAX;
	int32_t x560 = INT32_MAX;

    t139 = (x557|((x558<=x559)!=x560));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -116;
	int8_t x562 = INT8_MIN;
	static uint16_t x563 = UINT16_MAX;
	uint8_t x564 = 1U;
	volatile int32_t t140 = 14169828;

    t140 = (x561|((x562<=x563)!=x564));

    if (t140 != -116) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = -6;
	int16_t x567 = 1640;
	volatile int64_t t141 = -618340142222803LL;

    t141 = (x565|((x566<=x567)!=x568));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MAX;
	volatile int32_t x570 = -1;
	static int32_t x571 = 823777;
	static uint64_t x572 = UINT64_MAX;
	int32_t t142 = 84058;

    t142 = (x569|((x570<=x571)!=x572));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	uint16_t x574 = 22U;
	int64_t x575 = 1909719183930LL;
	int16_t x576 = -83;
	static volatile int32_t t143 = 115;

    t143 = (x573|((x574<=x575)!=x576));

    if (t143 != -32767) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	static int64_t x579 = -1LL;

    t144 = (x577|((x578<=x579)!=x580));

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = 960U;
	int16_t x583 = INT16_MAX;
	int32_t x584 = -1;
	volatile int32_t t145 = -1772;

    t145 = (x581|((x582<=x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = -4;
	int16_t x586 = -117;
	volatile int8_t x587 = -2;
	int16_t x588 = -1;

    t146 = (x585|((x586<=x587)!=x588));

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	static int64_t x591 = INT64_MAX;
	volatile int16_t x592 = 55;
	int32_t t147 = 518898122;

    t147 = (x589|((x590<=x591)!=x592));

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x593 = 838583920LLU;
	int64_t x595 = INT64_MAX;
	int32_t x596 = INT32_MIN;

    t148 = (x593|((x594<=x595)!=x596));

    if (t148 != 838583921LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	static volatile int16_t x599 = 59;
	static int64_t x600 = 1951276491260447LL;
	int32_t t149 = 0;

    t149 = (x597|((x598<=x599)!=x600));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x602 = INT16_MAX;
	int16_t x603 = INT16_MIN;
	volatile uint8_t x604 = 1U;
	int32_t t150 = 0;

    t150 = (x601|((x602<=x603)!=x604));

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile int32_t x606 = -1;
	volatile int8_t x607 = 2;
	int64_t x608 = 995626745961180LL;
	uint64_t t151 = UINT64_MAX;

    t151 = (x605|((x606<=x607)!=x608));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 4U;
	uint8_t x610 = 25U;
	volatile int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	static volatile int32_t t152 = 652907;

    t152 = (x609|((x610<=x611)!=x612));

    if (t152 != 5) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MAX;
	static int32_t x616 = INT32_MIN;

    t153 = (x613|((x614<=x615)!=x616));

    if (t153 != 2309) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	uint64_t x618 = UINT64_MAX;
	int32_t x619 = INT32_MIN;
	int32_t x620 = 1214;
	volatile int32_t t154 = -28586;

    t154 = (x617|((x618<=x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 2670U;
	int8_t x622 = INT8_MIN;
	volatile uint32_t x623 = UINT32_MAX;
	volatile uint8_t x624 = 48U;
	volatile uint32_t t155 = 231U;

    t155 = (x621|((x622<=x623)!=x624));

    if (t155 != 2671U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = UINT32_MAX;
	int32_t x627 = 32082230;
	static uint64_t x628 = 7631750975764830659LLU;
	volatile int32_t t156 = -1;

    t156 = (x625|((x626<=x627)!=x628));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MAX;
	int64_t x631 = INT64_MIN;
	int64_t t157 = INT64_MAX;

    t157 = (x629|((x630<=x631)!=x632));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 4434273U;
	int32_t x634 = INT32_MAX;
	volatile uint32_t t158 = 13176U;

    t158 = (x633|((x634<=x635)!=x636));

    if (t158 != 4434273U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -362456620432881LL;
	uint64_t x638 = 1LLU;
	uint16_t x639 = 2792U;
	static uint64_t x640 = 1864209315852612LLU;
	volatile int64_t t159 = -1602272LL;

    t159 = (x637|((x638<=x639)!=x640));

    if (t159 != -362456620432881LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	volatile int32_t x642 = 54340480;
	int16_t x643 = -5;
	static uint64_t x644 = UINT64_MAX;
	int32_t t160 = -4866731;

    t160 = (x641|((x642<=x643)!=x644));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 0;
	int64_t x647 = -216294LL;
	int32_t x648 = INT32_MAX;

    t161 = (x645|((x646<=x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x649 = INT64_MIN;
	int8_t x650 = INT8_MIN;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	volatile int64_t t162 = -1833870856LL;

    t162 = (x649|((x650<=x651)!=x652));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static int32_t x654 = 810;
	volatile int64_t t163 = -117170LL;

    t163 = (x653|((x654<=x655)!=x656));

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = INT8_MIN;
	int32_t x659 = 2412135;
	static int8_t x660 = -1;

    t164 = (x657|((x658<=x659)!=x660));

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 12U;
	int32_t x663 = -906;
	int8_t x664 = -1;
	static int32_t t165 = -472592066;

    t165 = (x661|((x662<=x663)!=x664));

    if (t165 != 13) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = 2980;
	volatile int16_t x666 = 1;
	int64_t x667 = -54LL;
	uint16_t x668 = 8502U;
	int32_t t166 = 20375211;

    t166 = (x665|((x666<=x667)!=x668));

    if (t166 != 2981) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	int32_t x670 = INT32_MIN;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = (x669|((x670<=x671)!=x672));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = -35;
	volatile int64_t x674 = INT64_MIN;
	int32_t t168 = -5510934;

    t168 = (x673|((x674<=x675)!=x676));

    if (t168 != -35) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -52;
	uint8_t x678 = UINT8_MAX;
	volatile uint64_t x679 = 14LLU;
	uint16_t x680 = 1U;
	volatile int32_t t169 = -5;

    t169 = (x677|((x678<=x679)!=x680));

    if (t169 != -51) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = 0;
	int8_t x682 = -1;
	int32_t t170 = -43894886;

    t170 = (x681|((x682<=x683)!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint16_t x686 = 1U;
	static uint64_t x688 = 164815LLU;
	volatile int32_t t171 = -3;

    t171 = (x685|((x686<=x687)!=x688));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -14748;
	volatile int64_t x692 = -536626115LL;
	static volatile int32_t t172 = 15655;

    t172 = (x689|((x690<=x691)!=x692));

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x693 = 14U;
	int16_t x694 = -29;
	static volatile uint32_t x695 = 493898U;
	uint16_t x696 = 50U;

    t173 = (x693|((x694<=x695)!=x696));

    if (t173 != 15) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	static int32_t x698 = INT32_MAX;
	volatile int64_t x699 = -41363998LL;
	uint64_t x700 = 636074894482LLU;
	int64_t t174 = 2LL;

    t174 = (x697|((x698<=x699)!=x700));

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = UINT16_MAX;
	int64_t x702 = 127LL;
	uint16_t x703 = 1125U;
	uint32_t x704 = 31175265U;
	int32_t t175 = 7179;

    t175 = (x701|((x702<=x703)!=x704));

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 739LL;
	uint8_t x706 = 1U;
	int32_t x707 = INT32_MIN;
	static uint32_t x708 = 1U;
	volatile int64_t t176 = 9465645LL;

    t176 = (x705|((x706<=x707)!=x708));

    if (t176 != 739LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 114U;
	int8_t x710 = INT8_MAX;
	int32_t x712 = INT32_MAX;
	int32_t t177 = -8282081;

    t177 = (x709|((x710<=x711)!=x712));

    if (t177 != 115) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x715 = INT64_MAX;
	static uint64_t x716 = UINT64_MAX;

    t178 = (x713|((x714<=x715)!=x716));

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x718 = UINT32_MAX;
	int64_t t179 = -2803580LL;

    t179 = (x717|((x718<=x719)!=x720));

    if (t179 != 971LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = 55U;
	int32_t x722 = -41284998;
	volatile int32_t x723 = 2008;
	int64_t x724 = -1LL;
	volatile int32_t t180 = 43071;

    t180 = (x721|((x722<=x723)!=x724));

    if (t180 != 55) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MAX;
	uint16_t x726 = UINT16_MAX;
	int8_t x728 = -1;
	volatile int32_t t181 = 1;

    t181 = (x725|((x726<=x727)!=x728));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = 461999081U;
	int64_t x731 = -1LL;

    t182 = (x729|((x730<=x731)!=x732));

    if (t182 != -54900485) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	uint16_t x735 = 493U;
	int64_t x736 = -1LL;
	volatile int32_t t183 = 20;

    t183 = (x733|((x734<=x735)!=x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	uint16_t x738 = 61U;
	uint8_t x739 = 1U;
	volatile int16_t x740 = INT16_MIN;
	int64_t t184 = 1319LL;

    t184 = (x737|((x738<=x739)!=x740));

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x742 = -5;
	static volatile int8_t x743 = 3;
	int16_t x744 = INT16_MIN;

    t185 = (x741|((x742<=x743)!=x744));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x746 = 3108779LLU;
	int32_t x747 = 25;
	volatile uint8_t x748 = UINT8_MAX;
	static int64_t t186 = -1804494367681LL;

    t186 = (x745|((x746<=x747)!=x748));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = 260;
	uint16_t x750 = UINT16_MAX;
	int8_t x751 = INT8_MIN;
	volatile uint32_t x752 = UINT32_MAX;

    t187 = (x749|((x750<=x751)!=x752));

    if (t187 != 261) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 140977495386LLU;
	volatile uint16_t x754 = 6538U;
	uint16_t x755 = 1777U;
	volatile uint8_t x756 = UINT8_MAX;

    t188 = (x753|((x754<=x755)!=x756));

    if (t188 != 140977495387LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	static volatile int16_t x758 = INT16_MIN;

    t189 = (x757|((x758<=x759)!=x760));

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	static uint16_t x762 = 3U;
	int16_t x763 = 0;
	int32_t x764 = -20809;
	int64_t t190 = INT64_MAX;

    t190 = (x761|((x762<=x763)!=x764));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	static int64_t x766 = INT64_MIN;
	int16_t x767 = INT16_MIN;
	volatile uint8_t x768 = 1U;
	volatile int32_t t191 = -107218;

    t191 = (x765|((x766<=x767)!=x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	volatile int64_t x770 = INT64_MIN;
	int8_t x772 = INT8_MIN;

    t192 = (x769|((x770<=x771)!=x772));

    if (t192 != -2147483647) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	volatile int8_t x775 = INT8_MIN;
	int64_t x776 = INT64_MAX;
	int32_t t193 = 6086134;

    t193 = (x773|((x774<=x775)!=x776));

    if (t193 != -127) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -1;
	int8_t x779 = -1;
	static int32_t x780 = -1;
	static uint32_t t194 = 18884146U;

    t194 = (x777|((x778<=x779)!=x780));

    if (t194 != 54551621U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = 6379233293294LL;
	int16_t x782 = INT16_MIN;
	uint64_t x783 = 61251510LLU;
	int8_t x784 = -22;
	volatile int64_t t195 = -249480LL;

    t195 = (x781|((x782<=x783)!=x784));

    if (t195 != 6379233293295LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 690596708LL;
	int8_t x786 = INT8_MIN;
	uint32_t x787 = 1087U;
	int32_t x788 = -484162;
	int64_t t196 = 18646351860LL;

    t196 = (x785|((x786<=x787)!=x788));

    if (t196 != 690596709LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x791 = INT16_MIN;
	int32_t x792 = 0;
	static volatile int64_t t197 = 72074888128652LL;

    t197 = (x789|((x790<=x791)!=x792));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1000U;
	uint64_t x794 = UINT64_MAX;
	int8_t x796 = INT8_MIN;
	volatile int32_t t198 = 11466180;

    t198 = (x793|((x794<=x795)!=x796));

    if (t198 != 1001) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 1028729;
	static int8_t x798 = -1;
	static uint32_t x800 = UINT32_MAX;
	volatile int32_t t199 = 35379955;

    t199 = (x797|((x798<=x799)!=x800));

    if (t199 != 1028729) { NG(); } else { ; }
	
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

