
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

int16_t x1 = -1;
volatile int32_t x2 = INT32_MIN;
int32_t x3 = INT32_MIN;
volatile uint32_t x7 = 66U;
int32_t x12 = 163;
static int32_t x13 = -86986;
volatile uint16_t x25 = 31U;
volatile int32_t t6 = -627;
int16_t x30 = -46;
static int32_t t8 = -357295;
uint8_t x37 = 81U;
int16_t x44 = -5;
static volatile uint64_t t11 = UINT64_MAX;
int32_t x52 = 420;
static volatile int32_t t12 = -41526;
static int32_t x54 = INT32_MIN;
static uint8_t x62 = UINT8_MAX;
volatile int8_t x65 = INT8_MAX;
int8_t x72 = INT8_MAX;
int32_t x74 = INT32_MIN;
static int32_t x85 = INT32_MAX;
int32_t x87 = INT32_MIN;
volatile int16_t x88 = INT16_MIN;
int32_t t24 = INT32_MAX;
static int64_t x102 = 574264LL;
volatile uint32_t x104 = 615413U;
int32_t x105 = INT32_MAX;
static volatile int32_t t27 = -20;
uint16_t x113 = 10246U;
static int32_t t28 = 225133;
int32_t x123 = -1;
int8_t x125 = INT8_MIN;
volatile int32_t t31 = 105;
uint64_t x130 = 2LLU;
uint32_t x143 = 690840U;
volatile int32_t t35 = 11;
int64_t x145 = INT64_MIN;
int16_t x148 = INT16_MAX;
static uint32_t x156 = 159U;
int64_t x157 = -44758647100454669LL;
volatile uint32_t x158 = 154208044U;
int16_t x160 = -1;
int64_t t39 = 428876186LL;
static uint16_t x163 = 0U;
int32_t x172 = -1;
int64_t x176 = INT64_MAX;
volatile int16_t x177 = INT16_MIN;
int16_t x179 = INT16_MAX;
int16_t x193 = 0;
int32_t x194 = INT32_MAX;
uint16_t x197 = 13U;
static int32_t x207 = INT32_MAX;
uint16_t x209 = 588U;
uint64_t t52 = 30444898LLU;
int64_t x216 = INT64_MIN;
uint16_t x222 = UINT16_MAX;
int64_t x229 = -79730988530390182LL;
static uint32_t x232 = 13U;
static int32_t x233 = 1;
int64_t x235 = -1LL;
int32_t x238 = -1;
volatile uint32_t x243 = 1046862U;
int64_t x257 = -1LL;
static volatile int32_t x266 = INT32_MIN;
int64_t x276 = -1LL;
int8_t x277 = INT8_MIN;
static uint8_t x281 = 31U;
int64_t x282 = INT64_MIN;
volatile int8_t x295 = -8;
int64_t x301 = -470126084586479LL;
static int16_t x302 = INT16_MIN;
static int64_t t75 = 490512LL;
volatile int32_t x309 = INT32_MIN;
uint64_t t77 = 15503984744533619LLU;
uint64_t x314 = UINT64_MAX;
static int16_t x321 = INT16_MAX;
uint8_t x328 = UINT8_MAX;
int64_t x336 = -2826331LL;
uint32_t x338 = 138U;
volatile uint32_t t85 = UINT32_MAX;
static int64_t x346 = INT64_MIN;
int64_t x349 = INT64_MIN;
int8_t x354 = INT8_MIN;
static volatile uint32_t x358 = UINT32_MAX;
volatile int64_t t89 = 1301227259579553110LL;
uint32_t x361 = 989107U;
static uint16_t x362 = UINT16_MAX;
int8_t x366 = INT8_MAX;
static int64_t x374 = INT64_MIN;
int8_t x379 = INT8_MIN;
static int16_t x385 = INT16_MAX;
int16_t x386 = -1;
int32_t t99 = 198884;
static int64_t x401 = INT64_MIN;
volatile int32_t x406 = INT32_MAX;
volatile int8_t x407 = INT8_MAX;
uint32_t t102 = 13749366U;
int8_t x414 = -1;
int32_t x421 = INT32_MAX;
int64_t x427 = INT64_MIN;
static volatile uint64_t x430 = UINT64_MAX;
uint64_t x431 = 7093019520735LLU;
uint16_t x436 = UINT16_MAX;
int64_t x439 = 29519982227731LL;
uint32_t x444 = 3U;
int64_t t110 = -12LL;
uint16_t x447 = 22029U;
uint16_t x449 = UINT16_MAX;
int16_t x454 = 202;
int32_t x455 = 956149797;
int64_t t114 = -2200661713585192651LL;
int16_t x462 = 0;
static int64_t x465 = INT64_MIN;
int32_t x469 = -1;
static int32_t x472 = INT32_MIN;
int8_t x478 = INT8_MAX;
int32_t t119 = 1;
static uint32_t x481 = 21U;
int16_t x491 = -1;
int64_t x494 = 6253037344081LL;
int64_t t125 = 49447589LL;
volatile uint64_t t126 = 58LLU;
static uint16_t x510 = UINT16_MAX;
uint32_t x512 = 0U;
int32_t x518 = INT32_MAX;
volatile uint32_t x520 = 1U;
volatile uint64_t x525 = 245452793221456LLU;
int32_t t132 = 72;
int32_t x533 = 1092;
int16_t x534 = -1;
int16_t x535 = INT16_MIN;
static volatile uint16_t x540 = 8896U;
volatile int32_t t134 = 332;
int8_t x544 = 5;
volatile int64_t x550 = INT64_MIN;
int64_t x551 = -846LL;
static int16_t x557 = INT16_MIN;
int32_t t139 = 836;
int8_t x562 = INT8_MAX;
int64_t t140 = -1121483957569510LL;
static volatile int32_t t141 = -609656277;
int64_t t142 = 7386284664LL;
static volatile int64_t x574 = -1LL;
int32_t x576 = -1;
int16_t x583 = -8388;
int8_t x595 = -4;
int16_t x599 = INT16_MIN;
uint32_t x601 = UINT32_MAX;
volatile int32_t x602 = INT32_MIN;
int16_t x605 = -1;
uint64_t x607 = UINT64_MAX;
volatile int64_t t151 = -3706573LL;
static int16_t x609 = INT16_MIN;
volatile int16_t x610 = INT16_MIN;
uint64_t x613 = UINT64_MAX;
static volatile int8_t x620 = -1;
int32_t t154 = -108466662;
static int16_t x622 = INT16_MAX;
uint32_t x623 = 70763969U;
uint32_t x627 = 5U;
uint16_t x628 = 9536U;
int64_t t156 = 192LL;
static volatile int8_t x633 = -1;
static uint8_t x634 = 7U;
uint32_t x642 = 154337U;
volatile int8_t x645 = INT8_MIN;
static int8_t x648 = INT8_MAX;
int32_t t161 = -709614396;
int32_t x656 = 1996;
volatile int32_t t163 = INT32_MAX;
volatile int32_t t164 = -2609;
static volatile int32_t t166 = 6293681;
int16_t x670 = INT16_MIN;
int16_t x671 = -1;
int16_t x672 = -3;
int64_t x673 = 1LL;
static volatile int32_t x679 = 58476;
volatile uint64_t x680 = 475988LLU;
uint16_t x685 = 5248U;
int32_t x687 = 10435852;
volatile int64_t t171 = 89238751016LL;
volatile uint32_t t173 = 1346U;
int32_t x697 = -1;
static int64_t x699 = INT64_MIN;
volatile int32_t t175 = -1341;
int64_t x708 = INT64_MIN;
volatile uint64_t x712 = 1599992LLU;
static int16_t x713 = -1;
int16_t x718 = -9;
int16_t x724 = -1;
volatile int8_t x730 = INT8_MIN;
int32_t x734 = INT32_MIN;
volatile int8_t x738 = 1;
volatile int16_t x739 = INT16_MIN;
uint64_t x745 = 35445251677837862LLU;
int8_t x747 = INT8_MAX;
int8_t x748 = -1;
int64_t x749 = INT64_MIN;
int8_t x751 = -1;
int32_t x754 = INT32_MIN;
int32_t x756 = INT32_MIN;
uint64_t t189 = 9773324922352LLU;
static int32_t x769 = INT32_MIN;
int64_t x772 = INT64_MIN;
volatile int64_t t192 = -15331825622LL;
int32_t x776 = INT32_MIN;
volatile int32_t t193 = 2633507;
uint8_t x781 = UINT8_MAX;
int16_t x786 = -1;
volatile int16_t x788 = INT16_MAX;
int64_t x789 = INT64_MIN;
int8_t x790 = 1;
static int32_t x791 = -1;
volatile int64_t t198 = INT64_MAX;
volatile int64_t t199 = INT64_MAX;


void f0(void) {
    	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (x1|((x2==x3)+x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	static uint8_t x6 = 1U;
	int64_t x8 = -1LL;
	static int64_t t1 = -7419576LL;

    t1 = (x5|((x6==x7)+x8));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 5744U;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x11 = 216795U;
	int32_t t2 = -57;

    t2 = (x9|((x10==x11)+x12));

    if (t2 != 5875) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x14 = 0U;
	volatile uint32_t x15 = 3013U;
	static uint32_t x16 = 8968U;
	uint32_t t3 = 295U;

    t3 = (x13|((x14==x15)+x16));

    if (t3 != 4294881086U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 121U;
	int32_t x18 = 26;
	volatile uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 62694927481640325LL;

    t4 = (x17|((x18==x19)+x20));

    if (t4 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	volatile int16_t x23 = -1;
	static int64_t x24 = INT64_MAX;
	uint64_t t5 = UINT64_MAX;

    t5 = (x21|((x22==x23)+x24));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 231498091053742LL;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 8U;

    t6 = (x25|((x26==x27)+x28));

    if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	uint8_t x31 = 79U;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 16694649320LL;

    t7 = (x29|((x30==x31)+x32));

    if (t7 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MAX;
	volatile int32_t x36 = INT32_MAX;

    t8 = (x33|((x34==x35)+x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = INT64_MAX;
	uint64_t x39 = 1898837848728355LLU;
	static uint32_t x40 = 459U;
	volatile uint32_t t9 = 9315172U;

    t9 = (x37|((x38==x39)+x40));

    if (t9 != 475U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 0LLU;
	int32_t x42 = 2506753;
	int8_t x43 = 1;
	static volatile uint64_t t10 = 19833LLU;

    t10 = (x41|((x42==x43)+x44));

    if (t10 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int8_t x46 = -1;
	static uint16_t x47 = 387U;
	uint16_t x48 = 1100U;

    t11 = (x45|((x46==x47)+x48));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint8_t x50 = 13U;
	int32_t x51 = -1;

    t12 = (x49|((x50==x51)+x52));

    if (t12 != -92) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint16_t x55 = 4587U;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 2058199;

    t13 = (x53|((x54==x55)+x56));

    if (t13 != -32641) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	static int16_t x58 = INT16_MIN;
	uint8_t x59 = 101U;
	int64_t x60 = -1LL;
	static int64_t t14 = 123534146213651378LL;

    t14 = (x57|((x58==x59)+x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 6U;
	static int32_t x63 = -1;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 38176818026127LL;

    t15 = (x61|((x62==x63)+x64));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x66 = INT64_MAX;
	volatile int64_t x67 = -12LL;
	volatile int32_t x68 = INT32_MAX;
	int32_t t16 = INT32_MAX;

    t16 = (x65|((x66==x67)+x68));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 1;
	int32_t x70 = INT32_MAX;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t t17 = 0;

    t17 = (x69|((x70==x71)+x72));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint32_t x75 = 1371769U;
	uint32_t x76 = 239277495U;
	static volatile int64_t t18 = 1490720924620710LL;

    t18 = (x73|((x74==x75)+x76));

    if (t18 != -9223372036615498313LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	volatile int16_t x78 = -51;
	int64_t x79 = -15395LL;
	int32_t x80 = 0;
	static int32_t t19 = INT32_MAX;

    t19 = (x77|((x78==x79)+x80));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -7668051;

    t20 = (x81|((x82==x83)+x84));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x86 = 0U;
	volatile int32_t t21 = 1;

    t21 = (x85|((x86==x87)+x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	int32_t x90 = -1;
	volatile int32_t x91 = INT32_MAX;
	volatile int64_t x92 = 301657706302287LL;
	int64_t t22 = -1LL;

    t22 = (x89|((x90==x91)+x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	static uint16_t x94 = 1U;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t23 = -90387496;

    t23 = (x93|((x94==x95)+x96));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MIN;
	static volatile int32_t x99 = -1;
	int32_t x100 = INT32_MAX;

    t24 = (x97|((x98==x99)+x100));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int32_t x103 = -1;
	uint32_t t25 = 149286U;

    t25 = (x101|((x102==x103)+x104));

    if (t25 != 2148099061U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = 6U;
	int16_t x107 = -19;
	static int32_t x108 = 1063762;
	static int32_t t26 = INT32_MAX;

    t26 = (x105|((x106==x107)+x108));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int64_t x110 = 1LL;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MAX;

    t27 = (x109|((x110==x111)+x112));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = -1LL;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;

    t28 = (x113|((x114==x115)+x116));

    if (t28 != -22522) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	int64_t x119 = 25869630106LL;
	int8_t x120 = -1;
	volatile int32_t t29 = -593487;

    t29 = (x117|((x118==x119)+x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int16_t x122 = 1;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

    t30 = (x121|((x122==x123)+x124));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x126 = -3;
	uint8_t x127 = 8U;
	uint8_t x128 = 41U;

    t31 = (x125|((x126==x127)+x128));

    if (t31 != -87) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -1;
	int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t32 = 55969LL;

    t32 = (x129|((x130==x131)+x132));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 35991597LLU;
	int8_t x134 = 1;
	uint16_t x135 = 35U;
	uint32_t x136 = UINT32_MAX;
	uint64_t t33 = 580427761676LLU;

    t33 = (x133|((x134==x135)+x136));

    if (t33 != 4294967295LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int16_t x138 = 10608;
	volatile int16_t x139 = 726;
	int32_t x140 = INT32_MIN;
	int64_t t34 = -52654128473194060LL;

    t34 = (x137|((x138==x139)+x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -44;
	volatile int32_t x142 = 73;
	int16_t x144 = 0;

    t35 = (x141|((x142==x143)+x144));

    if (t35 != -44) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x146 = INT64_MAX;
	static volatile int64_t x147 = INT64_MIN;
	static volatile int64_t t36 = 11153419643LL;

    t36 = (x145|((x146==x147)+x148));

    if (t36 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	volatile uint8_t x150 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	int32_t x152 = 1459;
	static int32_t t37 = 507573540;

    t37 = (x149|((x150==x151)+x152));

    if (t37 != -2147482189) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	volatile int8_t x154 = 1;
	int8_t x155 = INT8_MAX;
	uint32_t t38 = 207U;

    t38 = (x153|((x154==x155)+x156));

    if (t38 != 4294967199U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x159 = 98U;

    t39 = (x157|((x158==x159)+x160));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 12U;
	int8_t x162 = 0;
	uint8_t x164 = 17U;
	int32_t t40 = 60;

    t40 = (x161|((x162==x163)+x164));

    if (t40 != 30) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	volatile uint16_t x166 = 212U;
	static int64_t x167 = INT64_MIN;
	static volatile uint8_t x168 = UINT8_MAX;
	static volatile uint64_t t41 = UINT64_MAX;

    t41 = (x165|((x166==x167)+x168));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 31U;
	int16_t x170 = 43;
	uint32_t x171 = 113U;
	volatile int32_t t42 = -1;

    t42 = (x169|((x170==x171)+x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	volatile int64_t t43 = -27013LL;

    t43 = (x173|((x174==x175)+x176));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = -1;
	int16_t x180 = -1;
	int32_t t44 = -982;

    t44 = (x177|((x178==x179)+x180));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1221538276181265LL;
	int16_t x182 = INT16_MAX;
	int8_t x183 = 52;
	static int16_t x184 = 2;
	volatile int64_t t45 = 0LL;

    t45 = (x181|((x182==x183)+x184));

    if (t45 != -1221538276181265LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 537U;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	static int16_t x188 = 3;
	int32_t t46 = 15;

    t46 = (x185|((x186==x187)+x188));

    if (t46 != 539) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 60979081U;
	static int32_t x190 = -262387105;
	volatile int32_t x191 = INT32_MIN;
	static int16_t x192 = INT16_MAX;
	static uint32_t t47 = 11U;

    t47 = (x189|((x190==x191)+x192));

    if (t47 != 60981247U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x195 = INT32_MIN;
	static volatile uint8_t x196 = 15U;
	int32_t t48 = -47516;

    t48 = (x193|((x194==x195)+x196));

    if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	static int16_t x199 = -1;
	static volatile uint32_t x200 = 13302U;
	volatile uint32_t t49 = 1988801121U;

    t49 = (x197|((x198==x199)+x200));

    if (t49 != 13311U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	uint32_t x202 = UINT32_MAX;
	static volatile int32_t x203 = INT32_MAX;
	int32_t x204 = 394285647;
	volatile int32_t t50 = 110716807;

    t50 = (x201|((x202==x203)+x204));

    if (t50 != -11697) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = 5636754;
	int16_t x208 = INT16_MIN;
	uint32_t t51 = UINT32_MAX;

    t51 = (x205|((x206==x207)+x208));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = -1;
	int32_t x211 = 13141;
	static uint64_t x212 = 3204LLU;

    t52 = (x209|((x210==x211)+x212));

    if (t52 != 3788LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	static int32_t x215 = INT32_MIN;
	static int64_t t53 = INT64_MIN;

    t53 = (x213|((x214==x215)+x216));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 12;
	int64_t x218 = INT64_MAX;
	volatile int16_t x219 = INT16_MAX;
	volatile uint32_t x220 = 5U;
	uint32_t t54 = 1U;

    t54 = (x217|((x218==x219)+x220));

    if (t54 != 13U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x223 = 47744800U;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -233494;

    t55 = (x221|((x222==x223)+x224));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 1538U;
	int32_t x226 = INT32_MAX;
	static uint16_t x227 = 39U;
	int32_t x228 = INT32_MAX;
	volatile uint32_t t56 = 721093U;

    t56 = (x225|((x226==x227)+x228));

    if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	static uint64_t x231 = 2665736175075574LLU;
	volatile int64_t t57 = -2926988812LL;

    t57 = (x229|((x230==x231)+x232));

    if (t57 != -79730988530390177LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x234 = -1LL;
	static int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 30;

    t58 = (x233|((x234==x235)+x236));

    if (t58 != 129) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	static int16_t x239 = 1;
	static int16_t x240 = INT16_MAX;
	int32_t t59 = 2;

    t59 = (x237|((x238==x239)+x240));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MIN;
	int8_t x242 = -1;
	volatile int8_t x244 = 1;
	int64_t t60 = -3245LL;

    t60 = (x241|((x242==x243)+x244));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 18U;
	int32_t x246 = -1;
	static int8_t x247 = 1;
	int32_t x248 = 0;
	static int32_t t61 = 659059;

    t61 = (x245|((x246==x247)+x248));

    if (t61 != 18) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -21543958;
	int32_t x250 = INT32_MAX;
	static uint64_t x251 = 98314265201603LLU;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = 857773258;

    t62 = (x249|((x250==x251)+x252));

    if (t62 != -21543937) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 58;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -3LL;
	static int64_t x256 = 308687621940LL;
	volatile int64_t t63 = -17351447814146LL;

    t63 = (x253|((x254==x255)+x256));

    if (t63 != 308687621950LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x258 = 424816956U;
	volatile int32_t x259 = -36;
	uint32_t x260 = UINT32_MAX;
	int64_t t64 = 4205LL;

    t64 = (x257|((x258==x259)+x260));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 8189U;
	int8_t x262 = INT8_MAX;
	int16_t x263 = 70;
	int8_t x264 = INT8_MIN;
	int32_t t65 = 1;

    t65 = (x261|((x262==x263)+x264));

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 309U;
	uint64_t x267 = 752342212LLU;
	int64_t x268 = -1068710LL;
	static volatile int64_t t66 = -13945893216651095LL;

    t66 = (x265|((x266==x267)+x268));

    if (t66 != -1068673LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	static uint8_t x270 = 10U;
	uint8_t x271 = 2U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -570357;

    t67 = (x269|((x270==x271)+x272));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 15;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 1357049416424535354LLU;
	volatile int64_t t68 = 17409913788LL;

    t68 = (x273|((x274==x275)+x276));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = INT32_MIN;
	int8_t x279 = -3;
	volatile uint16_t x280 = 0U;
	volatile int32_t t69 = 6;

    t69 = (x277|((x278==x279)+x280));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x283 = INT32_MIN;
	int32_t x284 = 61;
	int32_t t70 = -481428453;

    t70 = (x281|((x282==x283)+x284));

    if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	uint32_t t71 = UINT32_MAX;

    t71 = (x285|((x286==x287)+x288));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = 1U;
	static volatile int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 305746;

    t72 = (x289|((x290==x291)+x292));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x293 = INT32_MIN;
	volatile int32_t x294 = 331;
	int64_t x296 = INT64_MIN;
	int64_t t73 = 9074591958433LL;

    t73 = (x293|((x294==x295)+x296));

    if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	static int32_t x298 = -1;
	uint64_t x299 = 3411LLU;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 15868;

    t74 = (x297|((x298==x299)+x300));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x303 = 8U;
	int64_t x304 = -1LL;

    t75 = (x301|((x302==x303)+x304));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	static int32_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t76 = UINT64_MAX;

    t76 = (x305|((x306==x307)+x308));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = -1LL;
	int16_t x311 = -1;
	uint64_t x312 = UINT64_MAX;

    t77 = (x309|((x310==x311)+x312));

    if (t77 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	static volatile int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 4020;

    t78 = (x313|((x314==x315)+x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1013484LL;
	volatile int16_t x318 = -1;
	static volatile int16_t x319 = 45;
	int64_t x320 = -1LL;
	int64_t t79 = -18224167719879541LL;

    t79 = (x317|((x318==x319)+x320));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -25201376731218LL;
	volatile uint16_t x323 = 16594U;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (x321|((x322==x323)+x324));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 623556LL;
	int32_t x326 = -16;
	static uint64_t x327 = 2052877994411812LLU;
	int64_t t81 = 26915629367318930LL;

    t81 = (x325|((x326==x327)+x328));

    if (t81 != 623615LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	uint8_t x330 = 4U;
	int8_t x331 = INT8_MAX;
	static int32_t x332 = INT32_MAX;
	int32_t t82 = 0;

    t82 = (x329|((x330==x331)+x332));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	static int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	int64_t t83 = 906616234141000LL;

    t83 = (x333|((x334==x335)+x336));

    if (t83 != -2826331LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	int8_t x339 = INT8_MAX;
	int64_t x340 = -71421849188840568LL;
	int64_t t84 = 38676LL;

    t84 = (x337|((x338==x339)+x340));

    if (t84 != -71421849188840568LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -20;
	uint16_t x344 = 1067U;

    t85 = (x341|((x342==x343)+x344));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	uint32_t x347 = 153982U;
	static int8_t x348 = INT8_MAX;
	static volatile int32_t t86 = 7;

    t86 = (x345|((x346==x347)+x348));

    if (t86 != -2147483521) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MIN;
	uint64_t x351 = 2507884LLU;
	static int32_t x352 = -1;
	volatile int64_t t87 = -917807968LL;

    t87 = (x349|((x350==x351)+x352));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = 297319324;
	static int64_t x355 = INT64_MIN;
	static volatile uint16_t x356 = UINT16_MAX;
	volatile int32_t t88 = -180;

    t88 = (x353|((x354==x355)+x356));

    if (t88 != 297336831) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x357 = -1;
	uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MIN;

    t89 = (x357|((x358==x359)+x360));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x363 = 2U;
	int64_t x364 = 27241811LL;
	int64_t t90 = 352316705861LL;

    t90 = (x361|((x362==x363)+x364));

    if (t90 != 27246579LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	static int8_t x367 = INT8_MIN;
	volatile uint8_t x368 = 3U;
	static volatile int32_t t91 = 1468154;

    t91 = (x365|((x366==x367)+x368));

    if (t91 != -2147483645) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 48394U;
	int32_t x370 = 16;
	int32_t x371 = INT32_MAX;
	uint16_t x372 = UINT16_MAX;
	static uint32_t t92 = 503228U;

    t92 = (x369|((x370==x371)+x372));

    if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = 1671;
	int8_t x375 = -1;
	int32_t x376 = -1;
	int32_t t93 = 2806712;

    t93 = (x373|((x374==x375)+x376));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int8_t x378 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 7;

    t94 = (x377|((x378==x379)+x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 420725823LLU;
	int8_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	int64_t t95 = -2932881316748831207LL;

    t95 = (x381|((x382==x383)+x384));

    if (t95 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x387 = UINT64_MAX;
	int32_t x388 = -2710340;
	volatile int32_t t96 = -393606121;

    t96 = (x385|((x386==x387)+x388));

    if (t96 != -2686977) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = 427940889LL;
	int8_t x390 = -1;
	int32_t x391 = 448064913;
	volatile uint32_t x392 = 1857693U;
	static int64_t t97 = 26684832LL;

    t97 = (x389|((x390==x391)+x392));

    if (t97 != 429776029LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	static uint64_t x394 = 1888969400LLU;
	static int8_t x395 = 0;
	volatile uint8_t x396 = 63U;
	volatile int32_t t98 = INT32_MAX;

    t98 = (x393|((x394==x395)+x396));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x397 = 49U;
	int64_t x398 = INT64_MAX;
	static int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;

    t99 = (x397|((x398==x399)+x400));

    if (t99 != -2147483599) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	volatile int64_t t100 = 15522170424LL;

    t100 = (x401|((x402==x403)+x404));

    if (t100 != -32767LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	uint32_t x408 = 119U;
	volatile int64_t t101 = 5140LL;

    t101 = (x405|((x406==x407)+x408));

    if (t101 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 6;
	static int64_t x410 = INT64_MAX;
	int64_t x411 = 14812825607160LL;
	uint32_t x412 = 228428U;

    t102 = (x409|((x410==x411)+x412));

    if (t102 != 228430U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 102309U;
	int8_t x415 = -1;
	static int64_t x416 = INT64_MIN;
	int64_t t103 = -16107630054566LL;

    t103 = (x413|((x414==x415)+x416));

    if (t103 != -9223372036854673499LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x418 = 10U;
	uint8_t x419 = 76U;
	int8_t x420 = 0;
	volatile int64_t t104 = INT64_MIN;

    t104 = (x417|((x418==x419)+x420));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x422 = 1262446LLU;
	static int16_t x423 = INT16_MAX;
	int8_t x424 = 12;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x421|((x422==x423)+x424));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 4884212LLU;
	volatile int32_t x426 = INT32_MIN;
	int8_t x428 = INT8_MAX;
	static volatile uint64_t t106 = 726LLU;

    t106 = (x425|((x426==x427)+x428));

    if (t106 != 4884223LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	static int64_t t107 = -2088441LL;

    t107 = (x429|((x430==x431)+x432));

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	volatile uint64_t x434 = 1LLU;
	int64_t x435 = -4494698565360848434LL;
	int64_t t108 = -862667592514297LL;

    t108 = (x433|((x434==x435)+x436));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MAX;
	static int16_t x438 = 91;
	int8_t x440 = INT8_MAX;
	static volatile int32_t t109 = 3608;

    t109 = (x437|((x438==x439)+x440));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = 2946971438961645LL;
	static volatile uint8_t x442 = 93U;
	int8_t x443 = INT8_MAX;

    t110 = (x441|((x442==x443)+x444));

    if (t110 != 2946971438961647LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = UINT64_MAX;
	uint64_t x446 = 1994LLU;
	uint8_t x448 = 21U;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x445|((x446==x447)+x448));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = -7;
	volatile int8_t x451 = INT8_MAX;
	int64_t x452 = -1LL;
	volatile int64_t t112 = 12007LL;

    t112 = (x449|((x450==x451)+x452));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	static int32_t x456 = INT32_MAX;
	static uint32_t t113 = UINT32_MAX;

    t113 = (x453|((x454==x455)+x456));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 30;
	int64_t x458 = -1LL;
	int8_t x459 = INT8_MIN;
	static int64_t x460 = -4828LL;

    t114 = (x457|((x458==x459)+x460));

    if (t114 != -4802LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 2;
	volatile int64_t x463 = INT64_MIN;
	int32_t x464 = 205750117;
	int32_t t115 = 23;

    t115 = (x461|((x462==x463)+x464));

    if (t115 != 205750119) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x466 = INT32_MAX;
	volatile uint32_t x467 = 7124077U;
	uint16_t x468 = UINT16_MAX;
	static int64_t t116 = 3680253710LL;

    t116 = (x465|((x466==x467)+x468));

    if (t116 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	static int32_t x471 = 22;
	volatile int32_t t117 = -1573;

    t117 = (x469|((x470==x471)+x472));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 20;
	volatile uint16_t x474 = UINT16_MAX;
	int8_t x475 = 1;
	uint8_t x476 = 6U;
	volatile int32_t t118 = -33209;

    t118 = (x473|((x474==x475)+x476));

    if (t118 != 22) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int16_t x479 = 13;
	static int8_t x480 = INT8_MIN;

    t119 = (x477|((x478==x479)+x480));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x482 = 1745LLU;
	int32_t x483 = INT32_MIN;
	volatile int8_t x484 = -1;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x481|((x482==x483)+x484));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MIN;
	int64_t x487 = -1667674641LL;
	static int8_t x488 = INT8_MAX;
	static volatile int32_t t121 = -29;

    t121 = (x485|((x486==x487)+x488));

    if (t121 != -32641) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 187;
	static uint16_t x490 = 1U;
	int64_t x492 = 1LL;
	int64_t t122 = -4LL;

    t122 = (x489|((x490==x491)+x492));

    if (t122 != 187LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 3U;
	int32_t x495 = INT32_MIN;
	volatile uint32_t x496 = 3U;
	volatile uint32_t t123 = 40U;

    t123 = (x493|((x494==x495)+x496));

    if (t123 != 3U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	static int16_t x498 = 184;
	int16_t x499 = 12067;
	static int8_t x500 = -1;
	static volatile int64_t t124 = 3460747174LL;

    t124 = (x497|((x498==x499)+x500));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	static int8_t x502 = INT8_MIN;
	int64_t x503 = -10793116LL;
	volatile int64_t x504 = INT64_MAX;

    t125 = (x501|((x502==x503)+x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 26399853060019LLU;
	int8_t x506 = INT8_MIN;
	uint8_t x507 = 3U;
	uint8_t x508 = UINT8_MAX;

    t126 = (x505|((x506==x507)+x508));

    if (t126 != 26399853060095LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	static uint8_t x511 = 2U;
	int64_t t127 = INT64_MAX;

    t127 = (x509|((x510==x511)+x512));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	uint16_t x514 = 114U;
	int8_t x515 = INT8_MIN;
	static int16_t x516 = -1;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x513|((x514==x515)+x516));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -166797;
	static uint64_t x519 = 3898LLU;
	volatile uint32_t t129 = 1286803U;

    t129 = (x517|((x518==x519)+x520));

    if (t129 != 4294800499U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -46327;
	static int64_t x522 = -1LL;
	uint16_t x523 = 13165U;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t130 = 1101;

    t130 = (x521|((x522==x523)+x524));

    if (t130 != -13559) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = 55121;
	int32_t x527 = INT32_MIN;
	int16_t x528 = INT16_MIN;
	volatile uint64_t t131 = 24744LLU;

    t131 = (x525|((x526==x527)+x528));

    if (t131 != 18446744073709523280LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = -1;
	uint64_t x530 = UINT64_MAX;
	static uint8_t x531 = UINT8_MAX;
	volatile int16_t x532 = -13949;

    t132 = (x529|((x530==x531)+x532));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x536 = UINT32_MAX;
	uint32_t t133 = UINT32_MAX;

    t133 = (x533|((x534==x535)+x536));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MIN;
	uint32_t x538 = 15984U;
	volatile int64_t x539 = -1LL;

    t134 = (x537|((x538==x539)+x540));

    if (t134 != -64) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MAX;
	int8_t x542 = 18;
	static int16_t x543 = 0;
	volatile int32_t t135 = -6125832;

    t135 = (x541|((x542==x543)+x544));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	volatile int8_t x546 = INT8_MIN;
	uint32_t x547 = 63U;
	uint32_t x548 = UINT32_MAX;
	volatile uint32_t t136 = UINT32_MAX;

    t136 = (x545|((x546==x547)+x548));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	int16_t x552 = INT16_MAX;
	int32_t t137 = INT32_MAX;

    t137 = (x549|((x550==x551)+x552));

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = -1;
	static int16_t x555 = -3456;
	static uint32_t x556 = UINT32_MAX;
	uint32_t t138 = UINT32_MAX;

    t138 = (x553|((x554==x555)+x556));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MAX;
	uint64_t x559 = UINT64_MAX;
	uint16_t x560 = 62U;

    t139 = (x557|((x558==x559)+x560));

    if (t139 != -32706) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	int16_t x563 = INT16_MAX;
	static volatile int64_t x564 = 65432573518LL;

    t140 = (x561|((x562==x563)+x564));

    if (t140 != 65432584191LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = INT16_MIN;
	uint64_t x566 = 371998084LLU;
	volatile int64_t x567 = -1LL;
	volatile int8_t x568 = INT8_MIN;

    t141 = (x565|((x566==x567)+x568));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	volatile int64_t x570 = -16774248706LL;
	int32_t x571 = 81046210;
	int64_t x572 = INT64_MAX;

    t142 = (x569|((x570==x571)+x572));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = -208876138LL;
	uint8_t x575 = 14U;
	int64_t t143 = 117083829002LL;

    t143 = (x573|((x574==x575)+x576));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x577 = 0U;
	static uint8_t x578 = UINT8_MAX;
	volatile int8_t x579 = INT8_MIN;
	static int32_t x580 = -1;
	int32_t t144 = -3;

    t144 = (x577|((x578==x579)+x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = -2001191449LL;
	int16_t x584 = INT16_MIN;
	static int32_t t145 = -12605;

    t145 = (x581|((x582==x583)+x584));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	int8_t x586 = -1;
	volatile int8_t x587 = INT8_MIN;
	static uint64_t x588 = 4054236617814211924LLU;
	uint64_t t146 = UINT64_MAX;

    t146 = (x585|((x586==x587)+x588));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 2;
	uint16_t x590 = 933U;
	volatile int64_t x591 = INT64_MIN;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -874754;

    t147 = (x589|((x590==x591)+x592));

    if (t147 != -2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x593 = UINT64_MAX;
	static uint32_t x594 = 425872U;
	volatile int64_t x596 = INT64_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = (x593|((x594==x595)+x596));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MIN;
	uint8_t x598 = UINT8_MAX;
	static uint8_t x600 = 0U;
	volatile int32_t t149 = INT32_MIN;

    t149 = (x597|((x598==x599)+x600));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x603 = INT64_MAX;
	int8_t x604 = INT8_MAX;
	static volatile uint32_t t150 = UINT32_MAX;

    t150 = (x601|((x602==x603)+x604));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 10583U;
	int64_t x608 = -1LL;

    t151 = (x605|((x606==x607)+x608));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x611 = INT32_MIN;
	int32_t x612 = INT32_MAX;
	static volatile int32_t t152 = 4076655;

    t152 = (x609|((x610==x611)+x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x614 = 76U;
	uint8_t x615 = 1U;
	int64_t x616 = INT64_MIN;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (x613|((x614==x615)+x616));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = INT32_MIN;
	int64_t x618 = INT64_MIN;
	uint8_t x619 = UINT8_MAX;

    t154 = (x617|((x618==x619)+x620));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x624 = -5;
	volatile int64_t t155 = -53LL;

    t155 = (x621|((x622==x623)+x624));

    if (t155 != -5LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 410924322LL;
	volatile uint8_t x626 = 0U;

    t156 = (x625|((x626==x627)+x628));

    if (t156 != 410924386LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 1012753116068679LLU;
	uint8_t x630 = 18U;
	uint8_t x631 = 56U;
	int32_t x632 = INT32_MAX;
	volatile uint64_t t157 = 13225421296858LLU;

    t157 = (x629|((x630==x631)+x632));

    if (t157 != 1012753288396799LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x635 = INT64_MIN;
	volatile uint16_t x636 = 289U;
	volatile int32_t t158 = -1;

    t158 = (x633|((x634==x635)+x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 5073U;
	int8_t x638 = 1;
	uint16_t x639 = 0U;
	volatile uint64_t x640 = 8286586251167924LLU;
	uint64_t t159 = 13577509299292LLU;

    t159 = (x637|((x638==x639)+x640));

    if (t159 != 8286586251172853LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 97313367744LLU;
	int8_t x643 = INT8_MIN;
	uint8_t x644 = 1U;
	uint64_t t160 = 1566837267401056912LLU;

    t160 = (x641|((x642==x643)+x644));

    if (t160 != 97313367745LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x646 = INT8_MIN;
	static uint16_t x647 = 418U;

    t161 = (x645|((x646==x647)+x648));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	static int16_t x650 = INT16_MIN;
	int16_t x651 = INT16_MIN;
	uint16_t x652 = 10050U;
	volatile int32_t t162 = 256359641;

    t162 = (x649|((x650==x651)+x652));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MAX;
	uint16_t x654 = 11U;
	uint32_t x655 = 3U;

    t163 = (x653|((x654==x655)+x656));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -430;
	int64_t x658 = -1LL;
	static uint64_t x659 = UINT64_MAX;
	uint8_t x660 = 1U;

    t164 = (x657|((x658==x659)+x660));

    if (t164 != -430) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	volatile int8_t x662 = 0;
	static int32_t x663 = INT32_MIN;
	volatile int8_t x664 = -44;
	int32_t t165 = 68516050;

    t165 = (x661|((x662==x663)+x664));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MIN;
	int32_t x666 = -1;
	int8_t x667 = -1;
	int32_t x668 = 295975;

    t166 = (x665|((x666==x667)+x668));

    if (t166 != -31704) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t t167 = -165393226897LL;

    t167 = (x669|((x670==x671)+x672));

    if (t167 != -3LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = -1LL;
	int16_t x675 = INT16_MAX;
	uint16_t x676 = 1506U;
	static volatile int64_t t168 = 1LL;

    t168 = (x673|((x674==x675)+x676));

    if (t168 != 1507LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	volatile uint16_t x678 = 20073U;
	static uint64_t t169 = 4283742937550771644LLU;

    t169 = (x677|((x678==x679)+x680));

    if (t169 != 9223372036855251796LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	int16_t x682 = -1;
	int64_t x683 = 2179192703053612LL;
	int32_t x684 = INT32_MIN;
	uint64_t t170 = UINT64_MAX;

    t170 = (x681|((x682==x683)+x684));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x686 = 400023871440927432LLU;
	static int64_t x688 = -1LL;

    t171 = (x685|((x686==x687)+x688));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 14U;
	int32_t x690 = -1;
	static int16_t x691 = INT16_MIN;
	uint8_t x692 = 42U;
	volatile int32_t t172 = -15025;

    t172 = (x689|((x690==x691)+x692));

    if (t172 != 46) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = 69;
	int64_t x695 = INT64_MAX;
	uint32_t x696 = 4636U;

    t173 = (x693|((x694==x695)+x696));

    if (t173 != 4294967196U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = -1;
	int16_t x700 = -1;
	static volatile int32_t t174 = 3378;

    t174 = (x697|((x698==x699)+x700));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1845;
	volatile uint32_t x702 = 42U;
	int64_t x703 = 6309184LL;
	int32_t x704 = INT32_MAX;

    t175 = (x701|((x702==x703)+x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	int32_t x706 = -671;
	volatile int32_t x707 = INT32_MAX;
	static volatile int64_t t176 = 131385318745386LL;

    t176 = (x705|((x706==x707)+x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	uint64_t x710 = 40477604391310LLU;
	int8_t x711 = -1;
	volatile uint64_t t177 = 0LLU;

    t177 = (x709|((x710==x711)+x712));

    if (t177 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = INT32_MAX;
	int16_t x715 = -1;
	int64_t x716 = INT64_MIN;
	volatile int64_t t178 = -577LL;

    t178 = (x713|((x714==x715)+x716));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	uint16_t x719 = 11715U;
	int16_t x720 = INT16_MIN;
	int32_t t179 = 253;

    t179 = (x717|((x718==x719)+x720));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 738U;
	volatile int32_t x722 = 2898706;
	volatile int16_t x723 = -1;
	volatile int32_t t180 = 951968;

    t180 = (x721|((x722==x723)+x724));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -5;
	static int64_t x726 = INT64_MIN;
	static int16_t x727 = INT16_MAX;
	int16_t x728 = INT16_MIN;
	volatile int32_t t181 = 374988;

    t181 = (x725|((x726==x727)+x728));

    if (t181 != -5) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x731 = -8172632318583LL;
	int8_t x732 = INT8_MAX;
	int32_t t182 = -1;

    t182 = (x729|((x730==x731)+x732));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = (x733|((x734==x735)+x736));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -4;
	static int16_t x740 = -23;
	volatile int32_t t184 = 70983036;

    t184 = (x737|((x738==x739)+x740));

    if (t184 != -3) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 2U;
	int8_t x742 = INT8_MAX;
	int8_t x743 = -1;
	uint8_t x744 = UINT8_MAX;
	int32_t t185 = 997;

    t185 = (x741|((x742==x743)+x744));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x746 = -1;
	uint64_t t186 = UINT64_MAX;

    t186 = (x745|((x746==x747)+x748));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MIN;
	volatile int32_t x752 = INT32_MAX;
	volatile int64_t t187 = 3064961392LL;

    t187 = (x749|((x750==x751)+x752));

    if (t187 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 18U;
	static uint16_t x755 = 10038U;
	static int32_t t188 = -12566004;

    t188 = (x753|((x754==x755)+x756));

    if (t188 != -2147483630) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MIN;
	uint64_t x758 = UINT64_MAX;
	int64_t x759 = INT64_MIN;
	uint64_t x760 = 2LLU;

    t189 = (x757|((x758==x759)+x760));

    if (t189 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	volatile int64_t x762 = -1LL;
	int64_t x763 = -1LL;
	int64_t x764 = -189856053832773375LL;
	static int64_t t190 = 9537480LL;

    t190 = (x761|((x762==x763)+x764));

    if (t190 != -28414LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	int8_t x766 = INT8_MAX;
	volatile uint32_t x767 = 483U;
	static uint16_t x768 = 2632U;
	volatile int64_t t191 = -9056LL;

    t191 = (x765|((x766==x767)+x768));

    if (t191 != -9223372036854773176LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = 1;
	int32_t x771 = INT32_MIN;

    t192 = (x769|((x770==x771)+x772));

    if (t192 != -2147483648LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = INT16_MAX;
	volatile int64_t x774 = -4260231643119222201LL;
	volatile uint8_t x775 = 8U;

    t193 = (x773|((x774==x775)+x776));

    if (t193 != -2147450881) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 5U;
	int8_t x778 = INT8_MAX;
	volatile int16_t x779 = -1;
	volatile int32_t x780 = INT32_MIN;
	static volatile int32_t t194 = 3641888;

    t194 = (x777|((x778==x779)+x780));

    if (t194 != -2147483643) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x782 = 1117;
	static int16_t x783 = INT16_MIN;
	int16_t x784 = -325;
	static int32_t t195 = -28742659;

    t195 = (x781|((x782==x783)+x784));

    if (t195 != -257) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 7U;
	uint8_t x787 = 61U;
	volatile int32_t t196 = 3474;

    t196 = (x785|((x786==x787)+x788));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x792 = 31;
	volatile int64_t t197 = -4296446864188LL;

    t197 = (x789|((x790==x791)+x792));

    if (t197 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 5163106U;
	uint32_t x794 = UINT32_MAX;
	int16_t x795 = INT16_MIN;
	volatile int64_t x796 = INT64_MAX;

    t198 = (x793|((x794==x795)+x796));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	volatile int32_t x798 = 12747;
	int8_t x799 = INT8_MAX;
	static uint8_t x800 = 0U;

    t199 = (x797|((x798==x799)+x800));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

