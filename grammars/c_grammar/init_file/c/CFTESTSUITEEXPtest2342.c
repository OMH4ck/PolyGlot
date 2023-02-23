
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

static int16_t x23 = INT16_MIN;
int16_t x27 = -1;
int16_t x28 = INT16_MIN;
int64_t x30 = INT64_MIN;
static uint64_t x39 = UINT64_MAX;
int32_t x43 = -1;
static volatile int16_t x45 = 7870;
static uint8_t x51 = 31U;
static uint8_t x55 = UINT8_MAX;
uint32_t x56 = UINT32_MAX;
uint16_t x58 = 0U;
uint64_t x59 = 746260016027LLU;
uint32_t x60 = 16117U;
uint64_t t14 = 16743LLU;
int16_t x65 = INT16_MAX;
int16_t x70 = 32;
volatile int32_t t17 = -6509410;
static int32_t x74 = -12;
volatile int32_t x76 = INT32_MIN;
volatile int64_t t21 = 661401LL;
static volatile int64_t x92 = -1LL;
int32_t x94 = INT32_MIN;
int16_t x107 = -1;
volatile int16_t x108 = -5133;
static int32_t x113 = 2778;
static volatile uint32_t x116 = 14U;
uint32_t x117 = 6363U;
uint32_t t29 = 737U;
volatile int32_t t31 = -22593;
int32_t x130 = INT32_MAX;
static int8_t x132 = -4;
int32_t t36 = -55;
int32_t x154 = -1;
int32_t t39 = 1;
static int8_t x167 = INT8_MAX;
int8_t x174 = -2;
int16_t x179 = INT16_MAX;
volatile int16_t x182 = 1558;
volatile int16_t x187 = INT16_MIN;
int16_t x188 = 89;
volatile uint64_t x190 = 307994308216971256LLU;
volatile uint64_t t47 = 100156840980054429LLU;
volatile int8_t x199 = INT8_MAX;
volatile uint64_t t51 = 881652294770LLU;
int16_t x212 = INT16_MIN;
int8_t x216 = INT8_MIN;
uint32_t x217 = 7U;
int64_t x222 = -6966781061517425LL;
int16_t x226 = INT16_MAX;
int8_t x228 = INT8_MAX;
uint64_t t56 = 1052267631743590LLU;
uint8_t x229 = 5U;
int32_t x231 = -76034;
int8_t x232 = -1;
static int32_t x236 = 23;
volatile int32_t t58 = 0;
volatile uint8_t x239 = 0U;
int16_t x241 = -6;
int64_t x245 = 52161LL;
volatile uint16_t x246 = 0U;
static uint64_t x247 = UINT64_MAX;
volatile uint64_t t61 = 4806LLU;
static int8_t x249 = INT8_MIN;
int64_t x251 = INT64_MIN;
int32_t x253 = INT32_MAX;
int32_t x258 = INT32_MIN;
int64_t t65 = 2105945064632160772LL;
volatile int8_t x266 = -1;
uint32_t x274 = 281554U;
volatile uint32_t t68 = 58607758U;
uint64_t x277 = 4304205428450999LLU;
volatile uint64_t t69 = 91921051032592713LLU;
volatile uint64_t t70 = 24540096482528257LLU;
static uint64_t x286 = 180214453071LLU;
volatile int64_t x293 = INT64_MAX;
int8_t x298 = -1;
volatile int64_t t74 = -1533204LL;
volatile int32_t x304 = INT32_MIN;
int64_t x312 = -32874665254539597LL;
volatile int64_t t78 = -473561191575217885LL;
int32_t x319 = -1;
uint32_t x323 = 1485U;
uint32_t t80 = 415603133U;
static volatile int32_t x326 = -1;
static uint16_t x328 = 17U;
int64_t x334 = INT64_MIN;
uint8_t x344 = 1U;
volatile int8_t x346 = -1;
uint64_t t90 = 12014LLU;
uint8_t x371 = 0U;
volatile int64_t t92 = 345088417392LL;
volatile int16_t x379 = INT16_MIN;
int16_t x380 = INT16_MIN;
int16_t x381 = -234;
static int32_t x382 = -58905808;
volatile uint32_t x383 = 1943758284U;
int64_t x385 = INT64_MIN;
volatile int64_t x388 = INT64_MIN;
static int8_t x389 = -1;
volatile int64_t t96 = -3LL;
uint32_t x394 = 8313914U;
int64_t x396 = INT64_MAX;
int64_t t97 = 2138LL;
int32_t x398 = INT32_MIN;
int32_t x406 = -1;
int64_t t100 = 12376LL;
volatile int8_t x412 = INT8_MIN;
int8_t x413 = INT8_MAX;
uint8_t x421 = 64U;
int8_t x427 = INT8_MAX;
int64_t x439 = -2544LL;
static uint32_t x440 = 593619U;
static int64_t x444 = INT64_MIN;
uint16_t x448 = UINT16_MAX;
int8_t x452 = INT8_MIN;
static volatile int16_t x466 = -1;
volatile int64_t t115 = -9LL;
int32_t x474 = INT32_MAX;
uint64_t x475 = UINT64_MAX;
static uint64_t x476 = 85279502134422535LLU;
uint64_t t117 = 262083110991476429LLU;
int8_t x478 = INT8_MAX;
volatile int16_t x484 = INT16_MIN;
volatile int8_t x489 = INT8_MIN;
uint64_t x494 = 12408LLU;
volatile uint64_t t122 = 8097259593528449LLU;
volatile uint32_t t123 = 3777U;
uint32_t x507 = 1104U;
static int8_t x512 = INT8_MIN;
int8_t x516 = INT8_MIN;
volatile int64_t t127 = 2763947LL;
uint64_t x523 = UINT64_MAX;
int32_t x524 = -1;
volatile uint64_t x526 = 613LLU;
uint64_t t130 = 1179035918LLU;
int32_t t131 = 726818;
int32_t x537 = -3305;
int16_t x547 = INT16_MIN;
int64_t t135 = -9353559LL;
uint64_t x553 = 22789LLU;
int16_t x554 = 1646;
int64_t x557 = 35433665549810324LL;
uint32_t x559 = 27016U;
uint64_t x560 = UINT64_MAX;
int32_t x565 = -79;
int64_t x570 = INT64_MIN;
uint64_t x571 = UINT64_MAX;
static uint16_t x573 = UINT16_MAX;
static uint64_t t141 = 3254803899839LLU;
volatile int32_t x583 = 12446941;
static int16_t x587 = INT16_MIN;
uint64_t x593 = 10LLU;
volatile uint16_t x599 = 0U;
static uint32_t x603 = 2783195U;
uint64_t x605 = UINT64_MAX;
volatile int32_t x606 = 531623937;
int32_t x612 = -1;
volatile int32_t t150 = -15156;
volatile int16_t x614 = 8833;
uint64_t t151 = 24804002942135LLU;
uint8_t x617 = 0U;
uint8_t x618 = 61U;
int32_t t152 = 82334;
volatile int8_t x629 = 1;
int8_t x630 = INT8_MAX;
uint8_t x633 = UINT8_MAX;
static volatile int32_t x644 = -1;
static int32_t x650 = INT32_MIN;
int8_t x653 = -1;
uint8_t x654 = 3U;
uint32_t x657 = UINT32_MAX;
int32_t x668 = INT32_MIN;
int32_t x678 = 13108;
uint64_t t167 = 888995839297LLU;
int32_t x685 = -15225165;
static uint64_t x696 = 2LLU;
int32_t x697 = 135687664;
int8_t x699 = INT8_MAX;
static volatile uint32_t x702 = 5900U;
volatile int16_t x704 = -1;
uint64_t x713 = UINT64_MAX;
volatile int8_t x716 = INT8_MAX;
volatile uint64_t t174 = 16346427104818LLU;
uint64_t x722 = 65500710173814480LLU;
int32_t x725 = INT32_MAX;
int32_t x726 = -1;
uint16_t x733 = UINT16_MAX;
int64_t x736 = INT64_MIN;
static uint64_t x737 = UINT64_MAX;
int16_t x766 = INT16_MAX;
int64_t x770 = INT64_MIN;
volatile uint32_t x776 = UINT32_MAX;
static int64_t x778 = INT64_MAX;
uint16_t x779 = 16097U;
volatile uint32_t t190 = 38U;
uint64_t x794 = 37621629LLU;
int8_t x795 = 2;
uint8_t x798 = 1U;
int8_t x811 = INT8_MIN;
int32_t t195 = 7283240;
int16_t x821 = INT16_MIN;
int8_t x822 = INT8_MAX;
uint16_t x824 = 10795U;
volatile uint32_t t197 = 507803548U;
volatile int32_t t198 = 3;
volatile int64_t x830 = -6LL;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile int8_t x2 = 1;
	int16_t x3 = -1;
	int8_t x4 = -8;
	volatile int64_t t0 = 655760430114LL;

    t0 = (x1/((x2&x3)^x4));

    if (t0 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	volatile int8_t x6 = 1;
	volatile int8_t x7 = INT8_MIN;
	static int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -1591966527LL;

    t1 = (x5/((x6&x7)^x8));

    if (t1 != -281474976710655LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 28;
	volatile uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = 241780737910908126LL;
	int64_t t2 = 112LL;

    t2 = (x9/((x10&x11)^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int16_t x14 = 19;
	int16_t x15 = 1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 2;

    t3 = (x13/((x14&x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MIN;
	static int64_t t4 = 453349255476940LL;

    t4 = (x17/((x18&x19)^x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 39693813639938LLU;
	uint32_t x24 = 174U;
	volatile uint64_t t5 = 8681637890525LLU;

    t5 = (x21/((x22&x23)^x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint32_t x26 = 7934801U;
	volatile uint32_t t6 = 409336U;

    t6 = (x25/((x26&x27)^x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = 393;
	int8_t x31 = INT8_MAX;
	static volatile uint32_t x32 = 5U;
	volatile int64_t t7 = -246128335LL;

    t7 = (x29/((x30&x31)^x32));

    if (t7 != 78LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 1;
	uint64_t x34 = 101119123823LLU;
	uint16_t x35 = 0U;
	int16_t x36 = 319;
	volatile uint64_t t8 = 212345841LLU;

    t8 = (x33/((x34&x35)^x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 14899714686243596LL;
	int16_t x38 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	uint64_t t9 = 349225157196148LLU;

    t9 = (x37/((x38&x39)^x40));

    if (t9 != 456486356808LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x41 = 107U;
	uint8_t x42 = 5U;
	static volatile int8_t x44 = 1;
	int32_t t10 = -452711579;

    t10 = (x41/((x42&x43)^x44));

    if (t10 != 26) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -94732;
	static uint32_t x47 = 31630U;
	static uint16_t x48 = 343U;
	static volatile uint32_t t11 = 4U;

    t11 = (x45/((x46&x47)^x48));

    if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 2723906643480564LLU;
	int32_t x50 = -216635;
	volatile int32_t x52 = INT32_MIN;
	uint64_t t12 = 134853804761060LLU;

    t12 = (x49/((x50&x51)^x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1868933;
	static int16_t x54 = -1;
	static volatile uint32_t t13 = 61U;

    t13 = (x53/((x54&x55)^x56));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x57 = UINT64_MAX;

    t14 = (x57/((x58&x59)^x60));

    if (t14 != 1144551968338372LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 1U;
	uint64_t x62 = 454418398614076801LLU;
	uint16_t x63 = 24067U;
	volatile uint8_t x64 = 52U;
	uint64_t t15 = 58129374525404155LLU;

    t15 = (x61/((x62&x63)^x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x66 = 34322U;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 5LLU;

    t16 = (x65/((x66&x67)^x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MAX;
	int16_t x71 = -160;
	int16_t x72 = -1;

    t17 = (x69/((x70&x71)^x72));

    if (t17 != -992) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = UINT32_MAX;
	volatile int8_t x75 = -10;
	uint32_t t18 = 50252107U;

    t18 = (x73/((x74&x75)^x76));

    if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int32_t x78 = 131299;
	int64_t x79 = INT64_MIN;
	volatile uint8_t x80 = 107U;
	int64_t t19 = 195760462591459347LL;

    t19 = (x77/((x78&x79)^x80));

    if (t19 != 86199738662194166LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	static int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MAX;
	int64_t t20 = 32762LL;

    t20 = (x81/((x82&x83)^x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 62082743LL;
	static volatile int16_t x86 = INT16_MIN;
	static volatile uint8_t x87 = UINT8_MAX;
	uint8_t x88 = 2U;

    t21 = (x85/((x86&x87)^x88));

    if (t21 != 31041371LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 211012352643LL;
	volatile uint8_t x90 = 22U;
	int64_t x91 = 0LL;
	int64_t t22 = 4101155669LL;

    t22 = (x89/((x90&x91)^x92));

    if (t22 != -211012352643LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	volatile int64_t x95 = INT64_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	static volatile int64_t t23 = -270183171869390LL;

    t23 = (x93/((x94&x95)^x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MAX;
	int64_t x99 = 47246606144918763LL;
	int8_t x100 = INT8_MIN;
	int64_t t24 = 23028545274LL;

    t24 = (x97/((x98&x99)^x100));

    if (t24 != 439208192231179800LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 9U;
	static uint64_t x102 = 6962890081LLU;
	int8_t x103 = INT8_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t25 = 113LLU;

    t25 = (x101/((x102&x103)^x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x105 = 370U;
	volatile uint32_t x106 = 1258U;
	static volatile uint32_t t26 = 12U;

    t26 = (x105/((x106&x107)^x108));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = -21949;
	int32_t x111 = -188164006;
	uint64_t x112 = 53837968LLU;
	volatile uint64_t t27 = 3653214041222589553LLU;

    t27 = (x109/((x110&x111)^x112));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MAX;
	uint16_t x115 = 1U;
	volatile int64_t t28 = -5888168425762LL;

    t28 = (x113/((x114&x115)^x116));

    if (t28 != 185LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile int8_t x120 = -1;

    t29 = (x117/((x118&x119)^x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 2U;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	static volatile int64_t t30 = 2769673220339LL;

    t30 = (x121/((x122&x123)^x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;

    t31 = (x125/((x126&x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static volatile uint16_t x131 = UINT16_MAX;
	volatile int32_t t32 = 1;

    t32 = (x129/((x130&x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MIN;
	int64_t x134 = -22451LL;
	int32_t x135 = -532435;
	uint64_t x136 = 137LLU;
	static uint64_t t33 = 32410477755LLU;

    t33 = (x133/((x134&x135)^x136));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	static int16_t x138 = -1547;
	int64_t x139 = INT64_MAX;
	uint16_t x140 = UINT16_MAX;
	int64_t t34 = 40031944015961708LL;

    t34 = (x137/((x138&x139)^x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 108U;
	uint64_t x142 = 1180673LLU;
	uint16_t x143 = UINT16_MAX;
	static int8_t x144 = 0;
	uint64_t t35 = 30847LLU;

    t35 = (x141/((x142&x143)^x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 342;

    t36 = (x145/((x146&x147)^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	int32_t x150 = -1;
	volatile uint64_t x151 = 397281658219LLU;
	volatile uint64_t x152 = UINT64_MAX;
	static uint64_t t37 = 395742192162170327LLU;

    t37 = (x149/((x150&x151)^x152));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int64_t t38 = 26540530798519LL;

    t38 = (x153/((x154&x155)^x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x157 = -1;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = 50U;
	int8_t x160 = INT8_MAX;

    t39 = (x157/((x158&x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = -1;
	int8_t x162 = -17;
	static volatile int32_t x163 = 2134;
	int32_t x164 = -1;
	volatile int32_t t40 = -2150;

    t40 = (x161/((x162&x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	static int8_t x166 = INT8_MIN;
	int16_t x168 = -1;
	volatile int32_t t41 = -102;

    t41 = (x165/((x166&x167)^x168));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = UINT32_MAX;
	static int32_t x170 = INT32_MIN;
	static int32_t x171 = -1;
	static int16_t x172 = INT16_MIN;
	uint32_t t42 = 0U;

    t42 = (x169/((x170&x171)^x172));

    if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -1;
	volatile int64_t t43 = 1LL;

    t43 = (x173/((x174&x175)^x176));

    if (t43 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	static int8_t x180 = -18;
	int32_t t44 = 1;

    t44 = (x177/((x178&x179)^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -127;
	volatile uint64_t x183 = UINT64_MAX;
	static int32_t x184 = INT32_MIN;
	volatile uint64_t t45 = 94900914LLU;

    t45 = (x181/((x182&x183)^x184));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MIN;
	static uint32_t x186 = 6193U;
	volatile uint32_t t46 = 3U;

    t46 = (x185/((x186&x187)^x188));

    if (t46 != 48257691U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x191 = 9680548784LL;
	int64_t x192 = -1LL;

    t47 = (x189/((x190&x191)^x192));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	uint8_t x194 = 0U;
	volatile uint32_t x195 = 11U;
	uint8_t x196 = 62U;
	uint32_t t48 = 967751050U;

    t48 = (x193/((x194&x195)^x196));

    if (t48 != 69273137U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	volatile int32_t x198 = -94867;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 617795;

    t49 = (x197/((x198&x199)^x200));

    if (t49 != -224) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 1U;
	int8_t x202 = INT8_MIN;
	volatile int16_t x203 = -478;
	int32_t x204 = 399189749;
	int32_t t50 = 258;

    t50 = (x201/((x202&x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	volatile uint8_t x206 = 1U;
	uint64_t x207 = 382LLU;
	int16_t x208 = INT16_MIN;

    t51 = (x205/((x206&x207)^x208));

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x209 = 1448414U;
	uint16_t x210 = 531U;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint64_t t52 = 12482777LLU;

    t52 = (x209/((x210&x211)^x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 21U;
	volatile int32_t x214 = INT32_MAX;
	int32_t x215 = -13771504;
	static volatile int32_t t53 = -116829803;

    t53 = (x213/((x214&x215)^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x218 = 7U;
	uint8_t x219 = 28U;
	volatile uint32_t x220 = 18U;
	volatile uint32_t t54 = 52192597U;

    t54 = (x217/((x218&x219)^x220));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 6345U;
	int8_t x223 = -1;
	int8_t x224 = INT8_MAX;
	int64_t t55 = -199134726830127838LL;

    t55 = (x221/((x222&x223)^x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 1;
	uint64_t x227 = 444LLU;

    t56 = (x225/((x226&x227)^x228));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = UINT8_MAX;
	static volatile int32_t t57 = 628761;

    t57 = (x229/((x230&x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MAX;

    t58 = (x233/((x234&x235)^x236));

    if (t58 != -93368854) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 7010;
	uint32_t x238 = 1291689U;
	int16_t x240 = 983;
	uint32_t t59 = 99053U;

    t59 = (x237/((x238&x239)^x240));

    if (t59 != 7U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x242 = 4319;
	int32_t x243 = INT32_MIN;
	volatile int16_t x244 = -1;
	int32_t t60 = 8;

    t60 = (x241/((x242&x243)^x244));

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x248 = 3;

    t61 = (x245/((x246&x247)^x248));

    if (t61 != 17387LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = -44703LL;
	static uint16_t x252 = UINT16_MAX;
	int64_t t62 = -102044LL;

    t62 = (x249/((x250&x251)^x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = -803;
	int32_t x255 = INT32_MAX;
	int8_t x256 = 2;
	int32_t t63 = -29;

    t63 = (x253/((x254&x255)^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x259 = 0U;
	static int32_t x260 = 14301223;
	int64_t t64 = -23140777499672LL;

    t64 = (x257/((x258&x259)^x260));

    if (t64 != -644935893724LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = -1LL;
	int16_t x263 = 694;
	int8_t x264 = 20;

    t65 = (x261/((x262&x263)^x264));

    if (t65 != 6372355LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	volatile int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MAX;
	int64_t t66 = 10LL;

    t66 = (x265/((x266&x267)^x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	static volatile int64_t x271 = INT64_MIN;
	uint16_t x272 = 9113U;
	int64_t t67 = 1372449797917828LL;

    t67 = (x269/((x270&x271)^x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	int8_t x275 = 1;
	static int8_t x276 = -15;

    t68 = (x273/((x274&x275)^x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 5U;
	int8_t x279 = -10;
	int16_t x280 = INT16_MIN;

    t69 = (x277/((x278&x279)^x280));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x281 = 81715649LLU;
	static uint8_t x282 = 56U;
	int32_t x283 = -1;
	int16_t x284 = -8;

    t70 = (x281/((x282&x283)^x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MAX;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 0;
	volatile uint64_t t71 = 287LLU;

    t71 = (x285/((x286&x287)^x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	uint8_t x291 = 0U;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -394;

    t72 = (x289/((x290&x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = INT32_MAX;
	int32_t x295 = 22287;
	volatile int32_t x296 = INT32_MIN;
	volatile int64_t t73 = 55LL;

    t73 = (x293/((x294&x295)^x296));

    if (t73 != -4295011870LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	volatile int32_t x299 = 155;
	int16_t x300 = INT16_MIN;

    t74 = (x297/((x298&x299)^x300));

    if (t74 != 282812744514603LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 3LL;
	static int8_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	volatile int64_t t75 = -85663265179545152LL;

    t75 = (x301/((x302&x303)^x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = 8929U;
	static int32_t x306 = INT32_MIN;
	static volatile int16_t x307 = -14352;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -928;

    t76 = (x305/((x306&x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = -8;
	int32_t x310 = 460336881;
	int16_t x311 = -1;
	volatile int64_t t77 = 1312257226065010LL;

    t77 = (x309/((x310&x311)^x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	volatile int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;
	volatile int64_t x316 = INT64_MAX;

    t78 = (x313/((x314&x315)^x316));

    if (t78 != -4294967298LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	uint8_t x318 = 0U;
	int64_t x320 = -1LL;
	volatile int64_t t79 = 3458691001377LL;

    t79 = (x317/((x318&x319)^x320));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MIN;
	uint16_t x322 = 450U;
	volatile int8_t x324 = -1;

    t80 = (x321/((x322&x323)^x324));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = -8;
	static uint64_t x327 = 238737693688039LLU;
	static volatile uint64_t t81 = 2700LLU;

    t81 = (x325/((x326&x327)^x328));

    if (t81 != 77267LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 47U;
	int64_t x330 = INT64_MIN;
	uint32_t x331 = 1000U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = 3LL;

    t82 = (x329/((x330&x331)^x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	static int16_t x335 = 2872;
	volatile uint16_t x336 = 120U;
	volatile int64_t t83 = -545806622145099057LL;

    t83 = (x333/((x334&x335)^x336));

    if (t83 != 35791394LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = -158974LL;
	int64_t x338 = INT64_MAX;
	static int8_t x339 = 60;
	int64_t x340 = INT64_MIN;
	static volatile int64_t t84 = 18303513LL;

    t84 = (x337/((x338&x339)^x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	uint64_t x343 = UINT64_MAX;
	static volatile uint64_t t85 = 579050407LLU;

    t85 = (x341/((x342&x343)^x344));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	int16_t x347 = -1;
	uint64_t x348 = 462684995LLU;
	volatile uint64_t t86 = 13933301965164948LLU;

    t86 = (x345/((x346&x347)^x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x349 = UINT64_MAX;
	int64_t x350 = -2003172LL;
	volatile int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MIN;
	uint64_t t87 = 6542449038LLU;

    t87 = (x349/((x350&x351)^x352));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	uint64_t x355 = 10LLU;
	int64_t x356 = INT64_MAX;
	volatile uint64_t t88 = 246LLU;

    t88 = (x353/((x354&x355)^x356));

    if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = 0;
	int8_t x359 = 4;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -1050767253;

    t89 = (x357/((x358&x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = 15LLU;
	int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = UINT8_MAX;

    t90 = (x361/((x362&x363)^x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = 47197314;
	static uint16_t x370 = 1695U;
	uint64_t x372 = 413636264005193441LLU;
	static volatile uint64_t t91 = 1932372505LLU;

    t91 = (x369/((x370&x371)^x372));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = INT64_MAX;
	volatile int16_t x374 = -1;
	static int64_t x375 = INT64_MAX;
	uint16_t x376 = UINT16_MAX;

    t92 = (x373/((x374&x375)^x376));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = INT64_MIN;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t t93 = -196447462564310LL;

    t93 = (x377/((x378&x379)^x380));

    if (t93 != 140737488355328LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x384 = INT16_MAX;
	static uint32_t t94 = 419U;

    t94 = (x381/((x382&x383)^x384));

    if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x386 = INT8_MIN;
	int64_t x387 = 209LL;
	volatile int64_t t95 = 48838305505789886LL;

    t95 = (x385/((x386&x387)^x388));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x390 = 30;
	int64_t x391 = 15490605683360LL;
	static int8_t x392 = -1;

    t96 = (x389/((x390&x391)^x392));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x393 = -2244014526LL;
	static volatile int64_t x395 = 15530LL;

    t97 = (x393/((x394&x395)^x396));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x397 = 12876351U;
	int8_t x399 = -18;
	int8_t x400 = INT8_MIN;
	uint32_t t98 = 0U;

    t98 = (x397/((x398&x399)^x400));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x401 = INT16_MIN;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 119U;
	volatile int32_t t99 = 9101519;

    t99 = (x401/((x402&x403)^x404));

    if (t99 != -132) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = 62794094477203134LL;
	int16_t x407 = 955;
	int64_t x408 = INT64_MIN;

    t100 = (x405/((x406&x407)^x408));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x409 = 0;
	int8_t x410 = 7;
	volatile uint32_t x411 = 743969U;
	uint32_t t101 = 25171U;

    t101 = (x409/((x410&x411)^x412));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x414 = 19024U;
	volatile int64_t x415 = INT64_MIN;
	static uint16_t x416 = 1555U;
	volatile int64_t t102 = -2986451772LL;

    t102 = (x413/((x414&x415)^x416));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MAX;
	int8_t x419 = -1;
	int16_t x420 = -1;
	int64_t t103 = -26406203LL;

    t103 = (x417/((x418&x419)^x420));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x422 = 341004944162339238LL;
	int16_t x423 = -1774;
	volatile int32_t x424 = 161;
	volatile int64_t t104 = 184391505LL;

    t104 = (x421/((x422&x423)^x424));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = -1;
	int16_t x426 = -1;
	int32_t x428 = -1;
	int32_t t105 = -2;

    t105 = (x425/((x426&x427)^x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x429 = 11379U;
	uint8_t x430 = 4U;
	int32_t x431 = 0;
	int32_t x432 = INT32_MIN;
	volatile int32_t t106 = 20;

    t106 = (x429/((x430&x431)^x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = 1524974U;
	int16_t x434 = 1877;
	volatile uint8_t x435 = UINT8_MAX;
	uint64_t x436 = 98804LLU;
	static uint64_t t107 = 1988101LLU;

    t107 = (x433/((x434&x435)^x436));

    if (t107 != 15LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MAX;
	int64_t t108 = 29361654656LL;

    t108 = (x437/((x438&x439)^x440));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x441 = -1;
	int32_t x442 = INT32_MIN;
	uint8_t x443 = 53U;
	int64_t t109 = -468311508750923250LL;

    t109 = (x441/((x442&x443)^x444));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x445 = UINT16_MAX;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MIN;
	volatile uint32_t t110 = 226170U;

    t110 = (x445/((x446&x447)^x448));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = -30;
	static int32_t x450 = 512474;
	uint32_t x451 = 726230843U;
	uint32_t t111 = 1474671U;

    t111 = (x449/((x450&x451)^x452));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = INT32_MAX;
	static int32_t x454 = 162;
	int8_t x455 = INT8_MAX;
	int8_t x456 = INT8_MIN;
	static int32_t t112 = -525753;

    t112 = (x453/((x454&x455)^x456));

    if (t112 != -22845570) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x457 = -3268845941453143LL;
	volatile int16_t x458 = INT16_MAX;
	int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	volatile int64_t t113 = -13LL;

    t113 = (x457/((x458&x459)^x460));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = 13;
	int32_t x462 = INT32_MAX;
	static uint32_t x463 = 75333861U;
	int64_t x464 = INT64_MIN;
	int64_t t114 = 3994540LL;

    t114 = (x461/((x462&x463)^x464));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = INT64_MAX;
	int16_t x467 = INT16_MAX;
	uint16_t x468 = UINT16_MAX;

    t115 = (x465/((x466&x467)^x468));

    if (t115 != 281474976710655LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = -14808775001LL;
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = 79943590U;
	volatile uint8_t x472 = UINT8_MAX;
	int64_t t116 = -1444LL;

    t116 = (x469/((x470&x471)^x472));

    if (t116 != -185LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x473 = 2028;

    t117 = (x473/((x474&x475)^x476));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x477 = UINT64_MAX;
	uint64_t x479 = 15643273382333LLU;
	static int8_t x480 = 1;
	volatile uint64_t t118 = 13218961LLU;

    t118 = (x477/((x478&x479)^x480));

    if (t118 != 307445734561825860LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	int64_t x482 = INT64_MAX;
	int8_t x483 = INT8_MIN;
	static int64_t t119 = 114838760LL;

    t119 = (x481/((x482&x483)^x484));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x485 = -1;
	int16_t x486 = INT16_MIN;
	volatile uint64_t x487 = 3121294LLU;
	int16_t x488 = INT16_MIN;
	uint64_t t120 = 4412LLU;

    t120 = (x485/((x486&x487)^x488));

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	int8_t x492 = -33;
	volatile int32_t t121 = 15361;

    t121 = (x489/((x490&x491)^x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x493 = UINT64_MAX;
	int64_t x495 = INT64_MAX;
	volatile int32_t x496 = -1311;

    t122 = (x493/((x494&x495)^x496));

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int16_t x498 = INT16_MIN;
	uint8_t x499 = UINT8_MAX;
	uint32_t x500 = 5U;

    t123 = (x497/((x498&x499)^x500));

    if (t123 != 51U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x501 = INT32_MAX;
	static int32_t x502 = INT32_MIN;
	static int16_t x503 = INT16_MIN;
	uint64_t x504 = 30184863801321389LLU;
	uint64_t t124 = 233LLU;

    t124 = (x501/((x502&x503)^x504));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x505 = 180434821179792LLU;
	int64_t x506 = -4LL;
	uint8_t x508 = 50U;
	static uint64_t t125 = 15414398669LLU;

    t125 = (x505/((x506&x507)^x508));

    if (t125 != 160815348645LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x509 = INT32_MAX;
	uint16_t x510 = 149U;
	uint8_t x511 = 2U;
	static volatile int32_t t126 = 7815765;

    t126 = (x509/((x510&x511)^x512));

    if (t126 != -16777215) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = 0;
	int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MAX;

    t127 = (x513/((x514&x515)^x516));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x517 = -9;
	static int16_t x518 = INT16_MAX;
	static int64_t x519 = INT64_MAX;
	uint8_t x520 = 1U;
	volatile int64_t t128 = -2508856178LL;

    t128 = (x517/((x518&x519)^x520));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x521 = -1;
	volatile uint64_t x522 = 36801613334364LLU;
	uint64_t t129 = 59487LLU;

    t129 = (x521/((x522&x523)^x524));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x525 = 10835869LLU;
	int16_t x527 = INT16_MAX;
	int64_t x528 = INT64_MIN;

    t130 = (x525/((x526&x527)^x528));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x529 = -12;
	uint16_t x530 = 23U;
	static volatile uint16_t x531 = UINT16_MAX;
	volatile int16_t x532 = -1;

    t131 = (x529/((x530&x531)^x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x533 = -2;
	uint32_t x534 = UINT32_MAX;
	static int8_t x535 = INT8_MAX;
	int32_t x536 = -10490166;
	volatile uint32_t t132 = 3U;

    t132 = (x533/((x534&x535)^x536));

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x538 = 4456112275219207559LLU;
	int8_t x539 = -1;
	static int8_t x540 = INT8_MIN;
	uint64_t t133 = 7112618130810017565LLU;

    t133 = (x537/((x538&x539)^x540));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x541 = INT32_MIN;
	static uint64_t x542 = 63140378849LLU;
	int64_t x543 = -1LL;
	volatile int16_t x544 = INT16_MIN;
	uint64_t t134 = 1LLU;

    t134 = (x541/((x542&x543)^x544));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x545 = INT8_MAX;
	static int32_t x546 = -119;
	static int64_t x548 = INT64_MIN;

    t135 = (x545/((x546&x547)^x548));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x555 = 27237U;
	static int8_t x556 = -28;
	volatile uint64_t t136 = 533942842106365137LLU;

    t136 = (x553/((x554&x555)^x556));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x558 = 218697LL;
	uint64_t t137 = 7968LLU;

    t137 = (x557/((x558&x559)^x560));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x561 = -1;
	static int64_t x562 = INT64_MIN;
	static int16_t x563 = -47;
	uint32_t x564 = UINT32_MAX;
	static volatile int64_t t138 = -81466965024568230LL;

    t138 = (x561/((x562&x563)^x564));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x566 = 0U;
	static int16_t x567 = -7;
	int16_t x568 = INT16_MIN;
	int32_t t139 = -43177;

    t139 = (x565/((x566&x567)^x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x569 = INT32_MIN;
	static uint8_t x572 = 15U;
	volatile uint64_t t140 = 196299984LLU;

    t140 = (x569/((x570&x571)^x572));

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x574 = UINT64_MAX;
	uint32_t x575 = UINT32_MAX;
	static uint64_t x576 = 192674598954LLU;

    t141 = (x573/((x574&x575)^x576));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x577 = -1LL;
	int8_t x578 = -1;
	int8_t x579 = INT8_MIN;
	volatile uint8_t x580 = UINT8_MAX;
	int64_t t142 = -121772598120LL;

    t142 = (x577/((x578&x579)^x580));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x581 = -1;
	int16_t x582 = INT16_MAX;
	uint32_t x584 = 833U;
	volatile uint32_t t143 = 13135011U;

    t143 = (x581/((x582&x583)^x584));

    if (t143 != 150320U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = -1;
	int8_t x588 = INT8_MAX;
	int32_t t144 = -3;

    t144 = (x585/((x586&x587)^x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x589 = INT32_MAX;
	int16_t x590 = -1;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = UINT32_MAX;
	volatile uint32_t t145 = 117307U;

    t145 = (x589/((x590&x591)^x592));

    if (t145 != 16909320U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x594 = INT32_MIN;
	int32_t x595 = INT32_MIN;
	volatile uint16_t x596 = 10224U;
	static uint64_t t146 = 1061465750LLU;

    t146 = (x593/((x594&x595)^x596));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x597 = 52;
	int8_t x598 = INT8_MIN;
	uint32_t x600 = 187U;
	volatile uint32_t t147 = 280051U;

    t147 = (x597/((x598&x599)^x600));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = 72610387;
	static volatile int32_t x602 = 254;
	int8_t x604 = 28;
	volatile uint32_t t148 = 166U;

    t148 = (x601/((x602&x603)^x604));

    if (t148 != 366719U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x607 = -1;
	static int64_t x608 = -128232LL;
	uint64_t t149 = 1115265589LLU;

    t149 = (x605/((x606&x607)^x608));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x609 = 14U;
	int16_t x610 = 2;
	volatile int32_t x611 = -1;

    t150 = (x609/((x610&x611)^x612));

    if (t150 != -4) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x613 = 2244991090259150851LLU;
	int8_t x615 = -1;
	volatile uint32_t x616 = 10030U;

    t151 = (x613/((x614&x615)^x616));

    if (t151 != 1542949202927251LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x619 = 5095U;
	int8_t x620 = 4;

    t152 = (x617/((x618&x619)^x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x621 = 49;
	uint64_t x622 = UINT64_MAX;
	uint16_t x623 = UINT16_MAX;
	int64_t x624 = -33162LL;
	uint64_t t153 = 2823003845LLU;

    t153 = (x621/((x622&x623)^x624));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x625 = 3U;
	uint64_t x626 = UINT64_MAX;
	volatile uint8_t x627 = 21U;
	uint16_t x628 = 0U;
	uint64_t t154 = 51238768371160683LLU;

    t154 = (x625/((x626&x627)^x628));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x631 = UINT16_MAX;
	int32_t x632 = 29975;
	int32_t t155 = 193723;

    t155 = (x629/((x630&x631)^x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x634 = INT32_MIN;
	volatile uint32_t x635 = 2419641U;
	int16_t x636 = -1;
	volatile uint32_t t156 = 50526661U;

    t156 = (x633/((x634&x635)^x636));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x637 = -1;
	int16_t x638 = INT16_MIN;
	uint8_t x639 = 1U;
	uint16_t x640 = 574U;
	int32_t t157 = 2052;

    t157 = (x637/((x638&x639)^x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x641 = 8U;
	uint16_t x642 = 3U;
	volatile int32_t x643 = INT32_MIN;
	volatile int32_t t158 = 674842204;

    t158 = (x641/((x642&x643)^x644));

    if (t158 != -8) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = -1;
	volatile int8_t x651 = INT8_MIN;
	int8_t x652 = INT8_MAX;
	volatile int32_t t159 = 489;

    t159 = (x649/((x650&x651)^x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x655 = INT32_MIN;
	int32_t x656 = 12125;
	int32_t t160 = -1134470;

    t160 = (x653/((x654&x655)^x656));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x658 = 31896LL;
	int64_t x659 = INT64_MAX;
	static int64_t x660 = -1LL;
	volatile int64_t t161 = 497413415258LL;

    t161 = (x657/((x658&x659)^x660));

    if (t161 != -134651LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x661 = INT32_MIN;
	int16_t x662 = INT16_MAX;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MIN;
	int32_t t162 = 1140058;

    t162 = (x661/((x662&x663)^x664));

    if (t162 != 16777216) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x665 = INT32_MIN;
	uint64_t x666 = 6LLU;
	int8_t x667 = -1;
	volatile uint64_t t163 = 0LLU;

    t163 = (x665/((x666&x667)^x668));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x669 = 0U;
	int8_t x670 = INT8_MIN;
	int16_t x671 = -1;
	static int32_t x672 = INT32_MIN;
	uint32_t t164 = 244768380U;

    t164 = (x669/((x670&x671)^x672));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x673 = 35U;
	int32_t x674 = 103646;
	volatile int8_t x675 = -8;
	uint16_t x676 = 1U;
	int32_t t165 = -1;

    t165 = (x673/((x674&x675)^x676));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x677 = INT16_MAX;
	int32_t x679 = -1;
	volatile int16_t x680 = INT16_MIN;
	int32_t t166 = 1166086;

    t166 = (x677/((x678&x679)^x680));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x681 = -1;
	int32_t x682 = -18848106;
	uint64_t x683 = UINT64_MAX;
	volatile int16_t x684 = INT16_MIN;

    t167 = (x681/((x682&x683)^x684));

    if (t167 != 977680675940LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x686 = -1;
	volatile int32_t x687 = 695;
	int8_t x688 = 1;
	volatile int32_t t168 = 75138598;

    t168 = (x685/((x686&x687)^x688));

    if (t168 != -21938) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = -1;
	uint8_t x690 = 5U;
	volatile int64_t x691 = INT64_MAX;
	int8_t x692 = INT8_MIN;
	int64_t t169 = 1LL;

    t169 = (x689/((x690&x691)^x692));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = INT64_MIN;
	uint8_t x694 = UINT8_MAX;
	static uint64_t x695 = 3LLU;
	uint64_t t170 = 22LLU;

    t170 = (x693/((x694&x695)^x696));

    if (t170 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x698 = -1;
	static uint32_t x700 = UINT32_MAX;
	volatile uint32_t t171 = 6664125U;

    t171 = (x697/((x698&x699)^x700));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x701 = 215143U;
	uint16_t x703 = 0U;
	static volatile uint32_t t172 = 8051U;

    t172 = (x701/((x702&x703)^x704));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x705 = UINT32_MAX;
	uint64_t x706 = UINT64_MAX;
	uint32_t x707 = UINT32_MAX;
	uint32_t x708 = 1781509U;
	static volatile uint64_t t173 = 34357LLU;

    t173 = (x705/((x706&x707)^x708));

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x714 = 1;
	int8_t x715 = -15;

    t174 = (x713/((x714&x715)^x716));

    if (t174 != 146402730743726600LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x717 = 259421686888531600LLU;
	volatile uint8_t x718 = 3U;
	static int32_t x719 = 768742901;
	int32_t x720 = -6034;
	volatile uint64_t t175 = 735267335223620LLU;

    t175 = (x717/((x718&x719)^x720));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x721 = 7901957LL;
	volatile int8_t x723 = INT8_MIN;
	int64_t x724 = -1LL;
	uint64_t t176 = 154LLU;

    t176 = (x721/((x722&x723)^x724));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x727 = INT32_MAX;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t177 = 1766;

    t177 = (x725/((x726&x727)^x728));

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x729 = INT8_MIN;
	int8_t x730 = 13;
	int32_t x731 = INT32_MIN;
	uint32_t x732 = 62442219U;
	uint32_t t178 = 126253931U;

    t178 = (x729/((x730&x731)^x732));

    if (t178 != 68U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x734 = -1;
	static uint8_t x735 = UINT8_MAX;
	volatile int64_t t179 = -1662LL;

    t179 = (x733/((x734&x735)^x736));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x738 = INT64_MAX;
	volatile int16_t x739 = -143;
	static uint64_t x740 = 3884245402734LLU;
	static volatile uint64_t t180 = 10LLU;

    t180 = (x737/((x738&x739)^x740));

    if (t180 != 2LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x741 = 1;
	uint16_t x742 = UINT16_MAX;
	static volatile int64_t x743 = -1LL;
	static uint64_t x744 = 825696650LLU;
	volatile uint64_t t181 = 263099914LLU;

    t181 = (x741/((x742&x743)^x744));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x749 = UINT64_MAX;
	uint16_t x750 = 4U;
	static int8_t x751 = 3;
	static int16_t x752 = -488;
	volatile uint64_t t182 = 5670496626LLU;

    t182 = (x749/((x750&x751)^x752));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x753 = INT16_MIN;
	static int32_t x754 = INT32_MIN;
	volatile int32_t x755 = INT32_MAX;
	static int64_t x756 = -1LL;
	int64_t t183 = -1779336LL;

    t183 = (x753/((x754&x755)^x756));

    if (t183 != 32768LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = 1U;
	int16_t x758 = INT16_MIN;
	int32_t x759 = INT32_MAX;
	int16_t x760 = 3735;
	volatile int32_t t184 = -127;

    t184 = (x757/((x758&x759)^x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	uint16_t x763 = 0U;
	static uint32_t x764 = 30141388U;
	volatile uint32_t t185 = 1640724U;

    t185 = (x761/((x762&x763)^x764));

    if (t185 != 71U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x765 = INT64_MAX;
	uint8_t x767 = 20U;
	uint32_t x768 = 115553U;
	int64_t t186 = 59LL;

    t186 = (x765/((x766&x767)^x768));

    if (t186 != 79805595051221LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x769 = INT32_MAX;
	int32_t x771 = -1;
	static uint16_t x772 = 0U;
	volatile int64_t t187 = -17936543LL;

    t187 = (x769/((x770&x771)^x772));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x773 = 0;
	static int32_t x774 = 66396386;
	static uint8_t x775 = 12U;
	uint32_t t188 = 1277U;

    t188 = (x773/((x774&x775)^x776));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x777 = 1634710U;
	int32_t x780 = INT32_MAX;
	int64_t t189 = 19925842733581LL;

    t189 = (x777/((x778&x779)^x780));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x785 = 0U;
	int8_t x786 = 3;
	uint16_t x787 = 1U;
	volatile int16_t x788 = INT16_MAX;

    t190 = (x785/((x786&x787)^x788));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = INT64_MIN;
	int32_t x790 = INT32_MIN;
	int64_t x791 = -1LL;
	int16_t x792 = 60;
	int64_t t191 = -52LL;

    t191 = (x789/((x790&x791)^x792));

    if (t191 != 4294967416LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = INT32_MIN;
	static uint8_t x796 = 111U;
	uint64_t t192 = 111180724117048770LLU;

    t192 = (x793/((x794&x795)^x796));

    if (t192 != 166186883527586197LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -3300LL;
	static uint64_t x799 = UINT64_MAX;
	int64_t x800 = -1LL;
	static uint64_t t193 = 7951300LLU;

    t193 = (x797/((x798&x799)^x800));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x805 = UINT64_MAX;
	int64_t x806 = -2159287987LL;
	static int16_t x807 = INT16_MAX;
	static volatile int8_t x808 = INT8_MIN;
	volatile uint64_t t194 = 15891LLU;

    t194 = (x805/((x806&x807)^x808));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x809 = INT16_MIN;
	static int32_t x810 = INT32_MIN;
	int32_t x812 = -42;

    t195 = (x809/((x810&x811)^x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x813 = 58U;
	int32_t x814 = -1;
	static int16_t x815 = -1;
	static int64_t x816 = -132678618801LL;
	static int64_t t196 = 471441728LL;

    t196 = (x813/((x814&x815)^x816));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x823 = UINT32_MAX;

    t197 = (x821/((x822&x823)^x824));

    if (t197 != 396357U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x825 = UINT8_MAX;
	uint16_t x826 = 2U;
	int32_t x827 = INT32_MAX;
	int8_t x828 = 24;

    t198 = (x825/((x826&x827)^x828));

    if (t198 != 9) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x829 = 0U;
	int64_t x831 = -1LL;
	uint32_t x832 = 15U;
	int64_t t199 = -371265962963217LL;

    t199 = (x829/((x830&x831)^x832));

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

