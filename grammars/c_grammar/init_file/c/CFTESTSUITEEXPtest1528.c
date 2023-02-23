
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

int32_t x1 = -12;
int16_t x13 = -10;
int64_t x24 = INT64_MIN;
int8_t x25 = -5;
int16_t x32 = INT16_MAX;
static int64_t x34 = 4123152LL;
static uint8_t x35 = 1U;
int64_t x48 = INT64_MIN;
volatile uint8_t x49 = 18U;
int8_t x57 = 0;
static volatile uint64_t x61 = UINT64_MAX;
int64_t x62 = -1LL;
volatile uint16_t x72 = 16055U;
int8_t x73 = 0;
static int64_t x75 = -1LL;
int16_t x79 = INT16_MIN;
uint32_t t19 = UINT32_MAX;
uint64_t x82 = 3548832707LLU;
volatile uint32_t x83 = 47U;
static uint32_t x97 = UINT32_MAX;
int32_t x113 = INT32_MIN;
uint8_t x114 = UINT8_MAX;
int32_t x117 = -1;
int64_t x126 = INT64_MAX;
int8_t x129 = INT8_MIN;
int8_t x137 = -1;
int64_t t34 = -34848056648946397LL;
int8_t x142 = 1;
static uint8_t x152 = 15U;
int32_t t37 = -52462061;
static volatile int16_t x156 = -1;
static uint16_t x161 = 925U;
volatile int32_t x166 = INT32_MIN;
volatile int64_t t41 = -244468542LL;
static volatile int32_t t42 = -390120;
int32_t t43 = 1;
volatile int64_t t44 = -6621670909131185LL;
int8_t x187 = INT8_MIN;
static uint8_t x194 = 94U;
volatile uint64_t t48 = 3079923789LLU;
volatile int32_t t49 = 38293;
int64_t x202 = INT64_MIN;
uint64_t t50 = 1694LLU;
uint32_t t52 = 19481U;
volatile int64_t t53 = INT64_MAX;
volatile int32_t x223 = INT32_MIN;
uint16_t x224 = 217U;
int32_t t56 = INT32_MIN;
volatile int8_t x233 = INT8_MIN;
static int8_t x242 = 52;
static volatile int64_t x243 = 1082581LL;
int8_t x244 = -1;
int64_t x248 = -17616628820310LL;
uint16_t x250 = 376U;
volatile int32_t t62 = 113150504;
volatile uint32_t t63 = 503U;
uint16_t x257 = UINT16_MAX;
int64_t x263 = -76LL;
uint64_t x269 = 2541903LLU;
static uint8_t x271 = 2U;
static int32_t x272 = -5685;
int8_t x276 = INT8_MAX;
uint16_t x279 = 4U;
uint32_t x280 = 46924318U;
int8_t x282 = -52;
volatile uint8_t x284 = 1U;
static int32_t x288 = INT32_MIN;
static uint8_t x291 = 72U;
volatile int8_t x292 = -15;
volatile uint16_t x298 = 35U;
volatile uint8_t x301 = UINT8_MAX;
volatile int16_t x306 = INT16_MIN;
static uint8_t x308 = 114U;
int32_t x312 = -7;
int32_t x314 = INT32_MIN;
uint8_t x317 = UINT8_MAX;
uint32_t x320 = UINT32_MAX;
int32_t x323 = INT32_MIN;
uint16_t x324 = 3365U;
uint32_t x325 = 28U;
int32_t x327 = INT32_MIN;
volatile uint32_t x332 = 123U;
volatile uint32_t t82 = 1950701884U;
uint64_t x335 = 26703384LLU;
int64_t x338 = -1LL;
int8_t x343 = INT8_MAX;
int32_t t85 = 3387315;
int8_t x345 = 51;
static int8_t x347 = INT8_MAX;
int32_t x353 = -233729;
int16_t x357 = -1;
volatile uint32_t x363 = UINT32_MAX;
int32_t x366 = INT32_MIN;
int8_t x367 = INT8_MIN;
static uint32_t x369 = UINT32_MAX;
int32_t x370 = INT32_MIN;
static volatile uint64_t x371 = 12396948175LLU;
volatile int16_t x378 = INT16_MIN;
uint32_t x383 = 1067662U;
int32_t t95 = -1071947348;
int16_t x386 = 8;
static int64_t x389 = -123LL;
uint16_t x394 = 1862U;
int64_t x397 = INT64_MIN;
int16_t x399 = INT16_MIN;
volatile int8_t x400 = -59;
volatile int64_t t99 = INT64_MIN;
int32_t x401 = -1;
volatile uint8_t x402 = 45U;
int8_t x409 = -1;
int64_t x416 = INT64_MIN;
volatile int64_t t103 = -3247LL;
volatile int32_t t104 = INT32_MIN;
static volatile int32_t x431 = -608767;
int64_t x433 = -547129405673933108LL;
uint32_t x445 = 565943639U;
int32_t x446 = INT32_MIN;
int16_t x447 = -169;
static int64_t x448 = INT64_MAX;
static volatile uint64_t t114 = 9104148214135031425LLU;
volatile int16_t x461 = 2;
static int64_t x474 = INT64_MIN;
int16_t x476 = -1;
int32_t t118 = -168245140;
uint32_t x477 = UINT32_MAX;
int8_t x478 = -1;
int64_t x483 = INT64_MAX;
int16_t x485 = -21;
static uint8_t x496 = UINT8_MAX;
int64_t x501 = -1LL;
volatile int32_t x510 = INT32_MIN;
volatile int32_t t128 = 7377250;
uint8_t x519 = 1U;
uint64_t t129 = 1924269LLU;
volatile int16_t x526 = 9555;
volatile int64_t t131 = INT64_MAX;
int32_t t132 = INT32_MAX;
int8_t x536 = 1;
static int32_t x538 = -8089670;
static int8_t x542 = 16;
uint32_t t135 = UINT32_MAX;
int32_t x548 = INT32_MIN;
volatile int32_t t136 = -6828;
int64_t x552 = INT64_MIN;
static int32_t t138 = -1;
uint16_t x564 = UINT16_MAX;
uint8_t x568 = UINT8_MAX;
static uint16_t x570 = 3039U;
int64_t x572 = -1LL;
static uint32_t x575 = UINT32_MAX;
int16_t x577 = -1;
uint16_t x578 = UINT16_MAX;
int32_t t145 = -107403880;
uint16_t x594 = 32U;
int16_t x595 = -31;
volatile int32_t t149 = -572238;
volatile uint8_t x605 = 13U;
int16_t x608 = -1;
static uint8_t x612 = UINT8_MAX;
static uint8_t x614 = 0U;
uint64_t x616 = 934963252911057885LLU;
static uint64_t t153 = 186267864517576065LLU;
int16_t x619 = -2021;
int16_t x625 = 0;
uint32_t x627 = 8500U;
volatile int32_t t156 = -1;
static volatile int32_t x631 = -1;
volatile int8_t x633 = INT8_MAX;
int64_t x634 = 21LL;
volatile int16_t x635 = INT16_MAX;
volatile int32_t x639 = -1;
volatile int64_t t161 = -1LL;
int8_t x649 = INT8_MIN;
int64_t x651 = INT64_MAX;
int16_t x656 = INT16_MAX;
static uint64_t x660 = UINT64_MAX;
uint8_t x662 = 21U;
int16_t x663 = INT16_MIN;
int16_t x669 = INT16_MAX;
static uint16_t x672 = 24109U;
uint32_t x673 = UINT32_MAX;
int64_t x677 = INT64_MIN;
int16_t x678 = -1;
volatile uint32_t x679 = 4116U;
uint8_t x682 = 23U;
uint32_t x694 = 1541840650U;
int32_t t174 = -5;
static int16_t x702 = -1;
uint32_t x704 = UINT32_MAX;
uint16_t x710 = 60U;
int16_t x714 = INT16_MAX;
int32_t t182 = 53091;
static int32_t x736 = INT32_MIN;
int32_t t183 = -20616397;
static int16_t x737 = -2689;
int32_t t184 = 4057440;
volatile int64_t x748 = INT64_MAX;
static uint16_t x757 = 220U;
static int16_t x762 = INT16_MAX;
uint64_t x764 = 80LLU;
static volatile int32_t x766 = -25808;
int64_t t193 = INT64_MIN;
int8_t x777 = -1;
int16_t x779 = 114;
int64_t x780 = -36483LL;
int64_t t194 = -1LL;
static uint8_t x794 = UINT8_MAX;
volatile uint64_t t198 = 18483975052065665LLU;
int8_t x797 = 3;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = 3502060U;
	static int32_t x4 = 39193;
	int32_t t0 = 145;

    t0 = (x1-((x2==x3)&x4));

    if (t0 != -12) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int32_t x6 = -67413350;
	static volatile uint16_t x7 = 49U;
	int32_t x8 = -623977006;
	int32_t t1 = -410402;

    t1 = (x5-((x6==x7)&x8));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 332320973617859LLU;
	volatile uint64_t x10 = UINT64_MAX;
	static int64_t x11 = -1LL;
	volatile uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 591488886725LLU;

    t2 = (x9-((x10==x11)&x12));

    if (t2 != 332320973617858LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -12001;

    t3 = (x13-((x14==x15)&x16));

    if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 6LLU;
	int32_t x20 = -1;
	static volatile int32_t t4 = 152;

    t4 = (x17-((x18==x19)&x20));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -23232907095988629LL;
	static uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 137942438U;
	int64_t t5 = -1LL;

    t5 = (x21-((x22==x23)&x24));

    if (t5 != -23232907095988629LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = -1;
	int8_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 61951U;

    t6 = (x25-((x26==x27)&x28));

    if (t6 != 4294967290U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 10;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 588;

    t7 = (x29-((x30==x31)&x32));

    if (t7 != 10) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int16_t x36 = -160;
	volatile int32_t t8 = -65199;

    t8 = (x33-((x34==x35)&x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MIN;
	uint32_t x38 = 7U;
	int32_t x39 = 3;
	static int8_t x40 = -1;
	static volatile int64_t t9 = INT64_MIN;

    t9 = (x37-((x38==x39)&x40));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 75U;
	int32_t x44 = -1;
	volatile int64_t t10 = 5820LL;

    t10 = (x41-((x42==x43)&x44));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MAX;
	volatile int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	volatile int64_t t11 = 626594351LL;

    t11 = (x45-((x46==x47)&x48));

    if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	volatile int64_t x51 = -511537156179168LL;
	static int64_t x52 = INT64_MAX;
	int64_t t12 = 0LL;

    t12 = (x49-((x50==x51)&x52));

    if (t12 != 18LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 10;
	volatile int64_t x54 = -36647778902794605LL;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 1150269068353LLU;
	uint64_t t13 = 2634198175766810968LLU;

    t13 = (x53-((x54==x55)&x56));

    if (t13 != 10LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	static volatile int64_t x60 = INT64_MIN;
	int64_t t14 = -886563LL;

    t14 = (x57-((x58==x59)&x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = -1;
	volatile uint16_t x64 = 18108U;
	static volatile uint64_t t15 = UINT64_MAX;

    t15 = (x61-((x62==x63)&x64));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = 1451;
	int8_t x66 = -23;
	volatile int32_t x67 = 356;
	static int16_t x68 = 1;
	int32_t t16 = 3;

    t16 = (x65-((x66==x67)&x68));

    if (t16 != 1451) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MAX;
	int64_t x71 = INT64_MAX;
	int32_t t17 = INT32_MIN;

    t17 = (x69-((x70==x71)&x72));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x74 = 0;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 504612;

    t18 = (x73-((x74==x75)&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = -1;
	int64_t x78 = 21LL;
	volatile uint32_t x80 = 96991118U;

    t19 = (x77-((x78==x79)&x80));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = 2508190U;
	int64_t x84 = 5447108260LL;
	volatile int64_t t20 = 2515480472LL;

    t20 = (x81-((x82==x83)&x84));

    if (t20 != 2508190LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x85 = 0U;
	int16_t x86 = INT16_MIN;
	static int64_t x87 = -234LL;
	uint64_t x88 = 259853209355385025LLU;
	uint64_t t21 = 37080318215399LLU;

    t21 = (x85-((x86==x87)&x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x89 = 2U;
	static int32_t x90 = INT32_MAX;
	uint8_t x91 = 3U;
	int16_t x92 = INT16_MIN;
	int32_t t22 = -1;

    t22 = (x89-((x90==x91)&x92));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 101U;
	int32_t x94 = -1;
	static volatile int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t23 = -51220134359LL;

    t23 = (x93-((x94==x95)&x96));

    if (t23 != 101LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = 29;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = 5063U;
	static uint32_t t24 = UINT32_MAX;

    t24 = (x97-((x98==x99)&x100));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	static uint64_t x102 = UINT64_MAX;
	static int32_t x103 = -7;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -39;

    t25 = (x101-((x102==x103)&x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 603U;
	uint32_t x106 = 18518610U;
	int8_t x107 = -26;
	int16_t x108 = -2;
	volatile int32_t t26 = 200151540;

    t26 = (x105-((x106==x107)&x108));

    if (t26 != 603) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1726;
	int8_t x110 = INT8_MAX;
	int64_t x111 = -1LL;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -312;

    t27 = (x109-((x110==x111)&x112));

    if (t27 != -1726) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = -7;
	int32_t t28 = INT32_MIN;

    t28 = (x113-((x114==x115)&x116));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 132783U;
	volatile uint64_t x119 = 842832511964638858LLU;
	int8_t x120 = INT8_MAX;
	int32_t t29 = 1621;

    t29 = (x117-((x118==x119)&x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = INT8_MAX;
	static volatile int8_t x122 = 24;
	int32_t x123 = -1;
	int64_t x124 = INT64_MAX;
	int64_t t30 = 56748987901LL;

    t30 = (x121-((x122==x123)&x124));

    if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x125 = INT8_MIN;
	static int64_t x127 = 8671585323203787LL;
	uint64_t x128 = 7719219571472206394LLU;
	uint64_t t31 = 11826239054169LLU;

    t31 = (x125-((x126==x127)&x128));

    if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = 273518236764300812LLU;
	static int32_t x131 = INT32_MAX;
	int64_t x132 = -84150LL;
	int64_t t32 = -458141406865LL;

    t32 = (x129-((x130==x131)&x132));

    if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 56;
	uint32_t x134 = 457583225U;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = 18110LLU;
	uint64_t t33 = 59038125628685LLU;

    t33 = (x133-((x134==x135)&x136));

    if (t33 != 56LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x138 = 50;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;

    t34 = (x137-((x138==x139)&x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	volatile int32_t x143 = INT32_MIN;
	volatile int64_t x144 = INT64_MAX;
	int64_t t35 = -79641818963202401LL;

    t35 = (x141-((x142==x143)&x144));

    if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x145 = UINT8_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 1604214509U;
	volatile uint32_t t36 = 44U;

    t36 = (x145-((x146==x147)&x148));

    if (t36 != 255U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -1LL;

    t37 = (x149-((x150==x151)&x152));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	static uint16_t x155 = 54U;
	volatile int32_t t38 = -339620;

    t38 = (x153-((x154==x155)&x156));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MIN;
	static uint32_t x159 = 106422U;
	static int16_t x160 = -53;
	uint32_t t39 = UINT32_MAX;

    t39 = (x157-((x158==x159)&x160));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 2U;
	volatile int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;
	static volatile int32_t t40 = 619399;

    t40 = (x161-((x162==x163)&x164));

    if (t40 != 925) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -19277791041329LL;
	int64_t x167 = INT64_MAX;
	int32_t x168 = -447;

    t41 = (x165-((x166==x167)&x168));

    if (t41 != -19277791041329LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	volatile uint64_t x170 = 9615294923316LLU;
	static volatile int32_t x171 = INT32_MIN;
	int32_t x172 = 890511441;

    t42 = (x169-((x170==x171)&x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MAX;
	static uint8_t x175 = 6U;
	int32_t x176 = 302312700;

    t43 = (x173-((x174==x175)&x176));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = 496LL;
	uint64_t x178 = 287266088685LLU;
	int16_t x179 = -11;
	int64_t x180 = -2LL;

    t44 = (x177-((x178==x179)&x180));

    if (t44 != 496LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	uint8_t x182 = 5U;
	int16_t x183 = -60;
	uint32_t x184 = 10851U;
	volatile int64_t t45 = 34440006665LL;

    t45 = (x181-((x182==x183)&x184));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1;
	static int32_t x186 = -1;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t46 = -15;

    t46 = (x185-((x186==x187)&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = UINT8_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	int32_t x191 = -1;
	volatile uint64_t x192 = 1294194502LLU;
	volatile uint64_t t47 = 72LLU;

    t47 = (x189-((x190==x191)&x192));

    if (t47 != 255LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -3123590LL;
	static int8_t x195 = -4;
	volatile uint64_t x196 = UINT64_MAX;

    t48 = (x193-((x194==x195)&x196));

    if (t48 != 18446744073706428026LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = INT16_MIN;
	static volatile int16_t x198 = INT16_MAX;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;

    t49 = (x197-((x198==x199)&x200));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 171518389363518LLU;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;

    t50 = (x201-((x202==x203)&x204));

    if (t50 != 171518389363518LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -7;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = 0;
	int64_t x208 = INT64_MAX;
	volatile int64_t t51 = -790847066576LL;

    t51 = (x205-((x206==x207)&x208));

    if (t51 != -7LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 66U;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	volatile uint32_t x212 = 150625909U;

    t52 = (x209-((x210==x211)&x212));

    if (t52 != 65U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	static int32_t x214 = 492323221;
	volatile int16_t x215 = 443;
	static int16_t x216 = -5924;

    t53 = (x213-((x214==x215)&x216));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 105U;
	static int32_t t54 = 38606548;

    t54 = (x217-((x218==x219)&x220));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 229539643LLU;
	static int32_t x222 = INT32_MIN;
	volatile uint64_t t55 = 10639904942595249LLU;

    t55 = (x221-((x222==x223)&x224));

    if (t55 != 229539642LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x226 = -514742;
	int64_t x227 = 210886594157624652LL;
	int8_t x228 = INT8_MIN;

    t56 = (x225-((x226==x227)&x228));

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	static int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 13250303;

    t57 = (x229-((x230==x231)&x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = 171LLU;
	uint64_t t58 = 25621746741LLU;

    t58 = (x233-((x234==x235)&x236));

    if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	uint64_t x238 = 26640765924731LLU;
	static int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = 503533953LL;

    t59 = (x237-((x238==x239)&x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t t60 = -114260089;

    t60 = (x241-((x242==x243)&x244));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x245 = 10;
	volatile uint64_t x246 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;
	static int64_t t61 = 4067380301320510048LL;

    t61 = (x245-((x246==x247)&x248));

    if (t61 != 10LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1699;
	volatile int8_t x251 = -1;
	int16_t x252 = -48;

    t62 = (x249-((x250==x251)&x252));

    if (t62 != -1699) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = INT32_MIN;
	uint8_t x255 = 8U;
	uint32_t x256 = UINT32_MAX;

    t63 = (x253-((x254==x255)&x256));

    if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x258 = 1827088623471146396LLU;
	volatile uint32_t x259 = 2246U;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 485232;

    t64 = (x257-((x258==x259)&x260));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 6;
	volatile uint64_t x262 = UINT64_MAX;
	uint64_t x264 = 16754158159LLU;
	uint64_t t65 = 3142LLU;

    t65 = (x261-((x262==x263)&x264));

    if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint32_t x266 = 15U;
	volatile int8_t x267 = 1;
	int64_t x268 = INT64_MAX;
	volatile int64_t t66 = -14501105391196075LL;

    t66 = (x265-((x266==x267)&x268));

    if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x270 = 415257;
	volatile uint64_t t67 = 32594579090LLU;

    t67 = (x269-((x270==x271)&x272));

    if (t67 != 2541903LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 89378776U;
	uint32_t x274 = 502807218U;
	int8_t x275 = 1;
	static volatile uint32_t t68 = 335455U;

    t68 = (x273-((x274==x275)&x276));

    if (t68 != 89378776U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -50;
	uint8_t x278 = 5U;
	volatile uint32_t t69 = 25046U;

    t69 = (x277-((x278==x279)&x280));

    if (t69 != 4294967246U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	volatile int64_t x283 = INT64_MIN;
	int32_t t70 = -42469;

    t70 = (x281-((x282==x283)&x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = INT16_MAX;
	int8_t x286 = 13;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t t71 = -4416915;

    t71 = (x285-((x286==x287)&x288));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	volatile int32_t t72 = 3591177;

    t72 = (x289-((x290==x291)&x292));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 262129645U;
	int16_t x294 = -15239;
	static volatile uint64_t x295 = 99096314264201319LLU;
	static uint16_t x296 = UINT16_MAX;
	volatile uint32_t t73 = 26911698U;

    t73 = (x293-((x294==x295)&x296));

    if (t73 != 262129645U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = 0U;
	volatile int32_t t74 = INT32_MAX;

    t74 = (x297-((x298==x299)&x300));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = -2;
	static volatile uint32_t x303 = UINT32_MAX;
	static int32_t x304 = INT32_MIN;
	static volatile int32_t t75 = -20;

    t75 = (x301-((x302==x303)&x304));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MAX;
	int32_t x307 = -89;
	volatile int64_t t76 = INT64_MAX;

    t76 = (x305-((x306==x307)&x308));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	static int16_t x310 = INT16_MIN;
	int8_t x311 = 3;
	volatile int64_t t77 = INT64_MAX;

    t77 = (x309-((x310==x311)&x312));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 0U;
	static int16_t x315 = -3240;
	int32_t x316 = -1677946;
	int32_t t78 = -23;

    t78 = (x313-((x314==x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	volatile uint32_t t79 = 6121081U;

    t79 = (x317-((x318==x319)&x320));

    if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 6170U;
	uint64_t x322 = 67569LLU;
	int32_t t80 = 13037;

    t80 = (x321-((x322==x323)&x324));

    if (t80 != 6170) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x326 = 4;
	static int64_t x328 = INT64_MIN;
	static int64_t t81 = -1283490LL;

    t81 = (x325-((x326==x327)&x328));

    if (t81 != 28LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;

    t82 = (x329-((x330==x331)&x332));

    if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 2U;
	volatile int16_t x336 = INT16_MIN;
	uint64_t t83 = UINT64_MAX;

    t83 = (x333-((x334==x335)&x336));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -324893;
	int32_t x339 = 0;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = -1;

    t84 = (x337-((x338==x339)&x340));

    if (t84 != -324893) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	static uint64_t x342 = UINT64_MAX;
	static int16_t x344 = 204;

    t85 = (x341-((x342==x343)&x344));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x346 = 22U;
	uint64_t x348 = 267603636610LLU;
	static volatile uint64_t t86 = 4824886018237139670LLU;

    t86 = (x345-((x346==x347)&x348));

    if (t86 != 51LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	volatile int8_t x350 = INT8_MIN;
	uint16_t x351 = 7097U;
	int32_t x352 = -1;
	static volatile int32_t t87 = 96495;

    t87 = (x349-((x350==x351)&x352));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	static volatile int64_t x355 = INT64_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t88 = 4799U;

    t88 = (x353-((x354==x355)&x356));

    if (t88 != 4294733567U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x358 = 31;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t89 = UINT32_MAX;

    t89 = (x357-((x358==x359)&x360));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = 5163;
	int8_t x362 = INT8_MAX;
	int8_t x364 = -18;
	int32_t t90 = -19093;

    t90 = (x361-((x362==x363)&x364));

    if (t90 != 5163) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = 13LL;
	int64_t x368 = -1LL;
	volatile int64_t t91 = -1415494658LL;

    t91 = (x365-((x366==x367)&x368));

    if (t91 != 13LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x372 = -1;
	uint32_t t92 = UINT32_MAX;

    t92 = (x369-((x370==x371)&x372));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -32257137047077LL;
	static int16_t x374 = INT16_MAX;
	uint32_t x375 = 246886983U;
	volatile int8_t x376 = 54;
	static volatile int64_t t93 = 801485722587501538LL;

    t93 = (x373-((x374==x375)&x376));

    if (t93 != -32257137047077LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = -8;
	int32_t x379 = 0;
	volatile int32_t x380 = 0;
	volatile int32_t t94 = 57798;

    t94 = (x377-((x378==x379)&x380));

    if (t94 != -8) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x381 = -1;
	static uint64_t x382 = 280715652169250LLU;
	uint16_t x384 = 1U;

    t95 = (x381-((x382==x383)&x384));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -1LL;
	static uint32_t x387 = 10U;
	int32_t x388 = INT32_MIN;
	volatile int64_t t96 = -15LL;

    t96 = (x385-((x386==x387)&x388));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = 0;
	uint8_t x391 = 25U;
	volatile int16_t x392 = -1;
	static int64_t t97 = -4811LL;

    t97 = (x389-((x390==x391)&x392));

    if (t97 != -123LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = -1;
	int64_t x395 = INT64_MAX;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -2;

    t98 = (x393-((x394==x395)&x396));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = INT8_MAX;

    t99 = (x397-((x398==x399)&x400));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t100 = 11;

    t100 = (x401-((x402==x403)&x404));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	int64_t x406 = 422LL;
	int16_t x407 = -563;
	int16_t x408 = INT16_MIN;
	int64_t t101 = INT64_MIN;

    t101 = (x405-((x406==x407)&x408));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x410 = UINT64_MAX;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t x412 = -1;
	static volatile int32_t t102 = 1;

    t102 = (x409-((x410==x411)&x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 1U;
	int32_t x414 = 5;
	volatile int16_t x415 = 3;

    t103 = (x413-((x414==x415)&x416));

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MIN;
	uint16_t x419 = 2014U;
	static int32_t x420 = -1;

    t104 = (x417-((x418==x419)&x420));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = -1;
	int16_t x422 = 3;
	int8_t x423 = INT8_MIN;
	int16_t x424 = -1;
	volatile int32_t t105 = -6567010;

    t105 = (x421-((x422==x423)&x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = UINT64_MAX;
	int16_t x426 = -1;
	int64_t x427 = 49348732917LL;
	uint16_t x428 = 968U;
	uint64_t t106 = UINT64_MAX;

    t106 = (x425-((x426==x427)&x428));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 0;
	int64_t x430 = -1LL;
	uint64_t x432 = UINT64_MAX;
	uint64_t t107 = 7179549249LLU;

    t107 = (x429-((x430==x431)&x432));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x435 = 6981;
	int16_t x436 = INT16_MIN;
	volatile int64_t t108 = -1908220883774LL;

    t108 = (x433-((x434==x435)&x436));

    if (t108 != -547129405673933108LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 55U;
	int16_t x438 = -54;
	volatile uint16_t x439 = UINT16_MAX;
	uint16_t x440 = 69U;
	int32_t t109 = -672491580;

    t109 = (x437-((x438==x439)&x440));

    if (t109 != 55) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = -25478302;
	int64_t x442 = 139977407751504798LL;
	int8_t x443 = INT8_MIN;
	static int8_t x444 = -1;
	volatile int32_t t110 = -112;

    t110 = (x441-((x442==x443)&x444));

    if (t110 != -25478302) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t t111 = 211985LL;

    t111 = (x445-((x446==x447)&x448));

    if (t111 != 565943639LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 3;
	volatile uint16_t x450 = 52U;
	static uint64_t x451 = UINT64_MAX;
	volatile uint16_t x452 = 4U;
	int32_t t112 = 2094923;

    t112 = (x449-((x450==x451)&x452));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 19U;
	int16_t x454 = 3708;
	int64_t x455 = -1LL;
	int64_t x456 = INT64_MIN;
	volatile int64_t t113 = 1214LL;

    t113 = (x453-((x454==x455)&x456));

    if (t113 != 19LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MIN;
	uint8_t x459 = UINT8_MAX;
	uint64_t x460 = 1748296LLU;

    t114 = (x457-((x458==x459)&x460));

    if (t114 != 32767LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 2823U;
	int32_t x463 = INT32_MIN;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t115 = 530704451;

    t115 = (x461-((x462==x463)&x464));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	static int8_t x466 = 1;
	volatile int32_t x467 = 62;
	uint16_t x468 = 280U;
	int32_t t116 = 6781574;

    t116 = (x465-((x466==x467)&x468));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MAX;
	uint8_t x471 = 38U;
	int32_t x472 = -1;
	int32_t t117 = 44378;

    t117 = (x469-((x470==x471)&x472));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	uint64_t x475 = 5LLU;

    t118 = (x473-((x474==x475)&x476));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x479 = UINT64_MAX;
	volatile int32_t x480 = -81;
	uint32_t t119 = 165285U;

    t119 = (x477-((x478==x479)&x480));

    if (t119 != 4294967294U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x481 = -1LL;
	int64_t x482 = -126LL;
	static int16_t x484 = INT16_MAX;
	int64_t t120 = -59LL;

    t120 = (x481-((x482==x483)&x484));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	uint8_t x487 = 5U;
	int64_t x488 = INT64_MIN;
	volatile int64_t t121 = 802134LL;

    t121 = (x485-((x486==x487)&x488));

    if (t121 != -21LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x490 = INT32_MIN;
	int8_t x491 = INT8_MIN;
	uint16_t x492 = 32536U;
	volatile int32_t t122 = -1;

    t122 = (x489-((x490==x491)&x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	volatile uint8_t x494 = 120U;
	uint8_t x495 = 5U;
	int64_t t123 = INT64_MIN;

    t123 = (x493-((x494==x495)&x496));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 2U;
	int32_t x498 = -121065;
	static uint8_t x499 = 3U;
	static int8_t x500 = INT8_MAX;
	volatile int32_t t124 = 165519515;

    t124 = (x497-((x498==x499)&x500));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	static volatile int16_t x504 = INT16_MAX;
	int64_t t125 = 30654346307814615LL;

    t125 = (x501-((x502==x503)&x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	volatile uint64_t x506 = UINT64_MAX;
	volatile int8_t x507 = INT8_MIN;
	volatile int64_t x508 = INT64_MIN;
	int64_t t126 = INT64_MIN;

    t126 = (x505-((x506==x507)&x508));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	static int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t127 = 190906395;

    t127 = (x509-((x510==x511)&x512));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = 55;
	uint32_t x514 = 27U;
	int8_t x515 = -1;
	static int32_t x516 = -1;

    t128 = (x513-((x514==x515)&x516));

    if (t128 != 55) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = UINT16_MAX;
	int8_t x518 = -2;
	uint64_t x520 = 5LLU;

    t129 = (x517-((x518==x519)&x520));

    if (t129 != 65535LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 389;
	int8_t x522 = INT8_MIN;
	uint64_t x523 = UINT64_MAX;
	static int16_t x524 = -1;
	volatile int32_t t130 = -13093;

    t130 = (x521-((x522==x523)&x524));

    if (t130 != 389) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;

    t131 = (x525-((x526==x527)&x528));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	int32_t x530 = -9633;
	static int64_t x531 = INT64_MIN;
	int8_t x532 = -1;

    t132 = (x529-((x530==x531)&x532));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	volatile int64_t x534 = INT64_MAX;
	static int64_t x535 = INT64_MIN;
	int32_t t133 = 378;

    t133 = (x533-((x534==x535)&x536));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	static volatile int64_t x539 = INT64_MAX;
	int8_t x540 = INT8_MAX;
	static uint32_t t134 = UINT32_MAX;

    t134 = (x537-((x538==x539)&x540));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	static uint16_t x543 = 4444U;
	static int16_t x544 = INT16_MIN;

    t135 = (x541-((x542==x543)&x544));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 1U;
	int64_t x546 = INT64_MIN;
	volatile int8_t x547 = INT8_MIN;

    t136 = (x545-((x546==x547)&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x550 = INT64_MAX;
	int64_t x551 = INT64_MIN;
	volatile int64_t t137 = -458146210719892LL;

    t137 = (x549-((x550==x551)&x552));

    if (t137 != 4294967295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 5388;
	int8_t x554 = -1;
	uint16_t x555 = UINT16_MAX;
	int8_t x556 = INT8_MAX;

    t138 = (x553-((x554==x555)&x556));

    if (t138 != 5388) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	static int32_t x560 = INT32_MIN;
	int64_t t139 = INT64_MIN;

    t139 = (x557-((x558==x559)&x560));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MIN;
	int64_t x562 = -17124LL;
	int64_t x563 = INT64_MIN;
	static volatile int32_t t140 = 7221293;

    t140 = (x561-((x562==x563)&x564));

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 21U;
	static uint8_t x566 = UINT8_MAX;
	int64_t x567 = -11803LL;
	volatile uint32_t t141 = 446U;

    t141 = (x565-((x566==x567)&x568));

    if (t141 != 21U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1485099308U;
	int8_t x571 = INT8_MIN;
	static int64_t t142 = 514LL;

    t142 = (x569-((x570==x571)&x572));

    if (t142 != 1485099308LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int8_t x574 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;
	static volatile int64_t t143 = INT64_MIN;

    t143 = (x573-((x574==x575)&x576));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x579 = 3;
	uint64_t x580 = 8627093766450893367LLU;
	uint64_t t144 = UINT64_MAX;

    t144 = (x577-((x578==x579)&x580));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static int64_t x582 = 0LL;
	uint8_t x583 = UINT8_MAX;
	uint8_t x584 = UINT8_MAX;

    t145 = (x581-((x582==x583)&x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	uint64_t x586 = UINT64_MAX;
	int64_t x587 = 874629436152050LL;
	static uint64_t x588 = 1768319095621112LLU;
	uint64_t t146 = UINT64_MAX;

    t146 = (x585-((x586==x587)&x588));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = UINT8_MAX;
	int64_t x590 = INT64_MIN;
	int8_t x591 = -1;
	volatile int64_t x592 = 1267273930675058LL;
	int64_t t147 = 13557704LL;

    t147 = (x589-((x590==x591)&x592));

    if (t147 != 255LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int64_t x596 = -66LL;
	static int64_t t148 = -4295LL;

    t148 = (x593-((x594==x595)&x596));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 36U;
	int8_t x598 = INT8_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MIN;

    t149 = (x597-((x598==x599)&x600));

    if (t149 != 36) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int16_t x602 = INT16_MAX;
	uint8_t x603 = 2U;
	int8_t x604 = INT8_MIN;
	int32_t t150 = INT32_MIN;

    t150 = (x601-((x602==x603)&x604));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x606 = INT64_MIN;
	volatile uint32_t x607 = 21345855U;
	int32_t t151 = 3;

    t151 = (x605-((x606==x607)&x608));

    if (t151 != 13) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = 22054211;
	int8_t x610 = -22;
	int32_t x611 = 362;
	int32_t t152 = -6625;

    t152 = (x609-((x610==x611)&x612));

    if (t152 != 22054211) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = 3U;
	uint32_t x615 = UINT32_MAX;

    t153 = (x613-((x614==x615)&x616));

    if (t153 != 3LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = -1;
	int32_t x618 = INT32_MIN;
	static uint16_t x620 = UINT16_MAX;
	int32_t t154 = 14801351;

    t154 = (x617-((x618==x619)&x620));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = UINT32_MAX;
	static int64_t x622 = -1LL;
	int16_t x623 = INT16_MAX;
	uint64_t x624 = 91788328209956720LLU;
	volatile uint64_t t155 = 30409990559977545LLU;

    t155 = (x621-((x622==x623)&x624));

    if (t155 != 4294967295LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MAX;
	int8_t x628 = -1;

    t156 = (x625-((x626==x627)&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	static int16_t x630 = -26;
	static uint16_t x632 = 253U;
	int32_t t157 = 366850783;

    t157 = (x629-((x630==x631)&x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x636 = -1;
	static int32_t t158 = 1653;

    t158 = (x633-((x634==x635)&x636));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = INT16_MIN;
	int32_t x638 = INT32_MAX;
	int8_t x640 = INT8_MIN;
	int32_t t159 = -27602;

    t159 = (x637-((x638==x639)&x640));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MIN;
	int64_t x642 = -1LL;
	uint16_t x643 = UINT16_MAX;
	static volatile uint16_t x644 = 12432U;
	int64_t t160 = INT64_MIN;

    t160 = (x641-((x642==x643)&x644));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	static int64_t x646 = INT64_MIN;
	int64_t x647 = -1LL;
	int64_t x648 = INT64_MAX;

    t161 = (x645-((x646==x647)&x648));

    if (t161 != -128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x650 = 13U;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t162 = 214272535539365LLU;

    t162 = (x649-((x650==x651)&x652));

    if (t162 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = 44U;
	volatile int32_t x654 = INT32_MIN;
	static volatile int8_t x655 = INT8_MAX;
	static int32_t t163 = -331478658;

    t163 = (x653-((x654==x655)&x656));

    if (t163 != 44) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	uint16_t x658 = 197U;
	uint8_t x659 = 61U;
	volatile uint64_t t164 = 57LLU;

    t164 = (x657-((x658==x659)&x660));

    if (t164 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	int64_t x664 = INT64_MIN;
	int64_t t165 = -7064772564LL;

    t165 = (x661-((x662==x663)&x664));

    if (t165 != -128LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	static int8_t x666 = -1;
	volatile int32_t x667 = 7786;
	uint16_t x668 = 1757U;
	int32_t t166 = INT32_MIN;

    t166 = (x665-((x666==x667)&x668));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = INT16_MIN;
	static uint8_t x671 = 1U;
	int32_t t167 = 547030073;

    t167 = (x669-((x670==x671)&x672));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = INT64_MAX;
	int8_t x675 = INT8_MAX;
	static int16_t x676 = INT16_MIN;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = (x673-((x674==x675)&x676));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x680 = 2812515177689235LLU;
	uint64_t t169 = 461269LLU;

    t169 = (x677-((x678==x679)&x680));

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	volatile uint16_t x683 = 8U;
	static int8_t x684 = -1;
	int64_t t170 = 32811353458LL;

    t170 = (x681-((x682==x683)&x684));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = UINT8_MAX;
	int8_t x686 = INT8_MAX;
	volatile int64_t x687 = 1653107LL;
	volatile int32_t x688 = -124841172;
	volatile int32_t t171 = 7802;

    t171 = (x685-((x686==x687)&x688));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 84U;
	uint32_t x690 = 1162U;
	static uint32_t x691 = UINT32_MAX;
	volatile int64_t x692 = 105929880LL;
	int64_t t172 = -1871585239560567390LL;

    t172 = (x689-((x690==x691)&x692));

    if (t172 != 84LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	int64_t x695 = -1LL;
	int32_t x696 = -355306592;
	int32_t t173 = -3578;

    t173 = (x693-((x694==x695)&x696));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int64_t x698 = INT64_MAX;
	int16_t x699 = INT16_MIN;
	int32_t x700 = INT32_MAX;

    t174 = (x697-((x698==x699)&x700));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 64817263;
	static int8_t x703 = INT8_MAX;
	volatile uint32_t t175 = 498U;

    t175 = (x701-((x702==x703)&x704));

    if (t175 != 64817263U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 47709423092633LL;
	uint32_t x706 = 28450302U;
	int32_t x707 = INT32_MAX;
	int64_t x708 = INT64_MAX;
	volatile int64_t t176 = 5001477639LL;

    t176 = (x705-((x706==x707)&x708));

    if (t176 != 47709423092633LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int64_t x711 = -43853595LL;
	int16_t x712 = -1;
	volatile int32_t t177 = INT32_MIN;

    t177 = (x709-((x710==x711)&x712));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = UINT64_MAX;
	uint32_t x715 = 514508U;
	int8_t x716 = INT8_MIN;
	static uint64_t t178 = UINT64_MAX;

    t178 = (x713-((x714==x715)&x716));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 3009490U;
	static uint16_t x718 = 32396U;
	int8_t x719 = INT8_MIN;
	int32_t x720 = 53420;
	volatile uint32_t t179 = 60387U;

    t179 = (x717-((x718==x719)&x720));

    if (t179 != 3009490U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int8_t x722 = INT8_MIN;
	static uint32_t x723 = UINT32_MAX;
	uint8_t x724 = 12U;
	volatile int64_t t180 = INT64_MIN;

    t180 = (x721-((x722==x723)&x724));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -32;
	uint8_t x726 = 1U;
	volatile int64_t x727 = -1LL;
	static int32_t x728 = 0;
	int32_t t181 = 3;

    t181 = (x725-((x726==x727)&x728));

    if (t181 != -32) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 267U;
	uint8_t x730 = UINT8_MAX;
	int64_t x731 = -133030453630LL;
	static int16_t x732 = INT16_MIN;

    t182 = (x729-((x730==x731)&x732));

    if (t182 != 267) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = -1;
	uint8_t x734 = UINT8_MAX;
	static uint8_t x735 = UINT8_MAX;

    t183 = (x733-((x734==x735)&x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = -96;
	static int16_t x739 = INT16_MIN;
	static int32_t x740 = -1;

    t184 = (x737-((x738==x739)&x740));

    if (t184 != -2689) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = INT64_MAX;
	int32_t x743 = INT32_MAX;
	uint64_t x744 = UINT64_MAX;
	volatile uint64_t t185 = 801LLU;

    t185 = (x741-((x742==x743)&x744));

    if (t185 != 32767LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = -1LL;
	int64_t t186 = INT64_MAX;

    t186 = (x745-((x746==x747)&x748));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 2U;
	int8_t x750 = INT8_MAX;
	int8_t x751 = 5;
	int64_t x752 = -768501487851815LL;
	int64_t t187 = -163371541427856LL;

    t187 = (x749-((x750==x751)&x752));

    if (t187 != 2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint32_t x754 = 1181U;
	uint32_t x755 = UINT32_MAX;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = -243968;

    t188 = (x753-((x754==x755)&x756));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -1;
	uint32_t x759 = 23U;
	static uint64_t x760 = UINT64_MAX;
	static volatile uint64_t t189 = 8353390545712328635LLU;

    t189 = (x757-((x758==x759)&x760));

    if (t189 != 220LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int64_t x763 = -1LL;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (x761-((x762==x763)&x764));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	uint32_t x767 = 35608U;
	static uint64_t x768 = 3707948291852LLU;
	static uint64_t t191 = UINT64_MAX;

    t191 = (x765-((x766==x767)&x768));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = -46;
	volatile int16_t x770 = INT16_MIN;
	uint16_t x771 = 3U;
	volatile uint32_t x772 = UINT32_MAX;
	static uint32_t t192 = 5434U;

    t192 = (x769-((x770==x771)&x772));

    if (t192 != 4294967250U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	volatile int16_t x774 = 7;
	int32_t x775 = -1;
	int8_t x776 = -1;

    t193 = (x773-((x774==x775)&x776));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;

    t194 = (x777-((x778==x779)&x780));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = -1;
	int16_t x782 = -288;
	static int64_t x783 = INT64_MIN;
	static volatile int32_t x784 = -1;
	volatile int32_t t195 = 3;

    t195 = (x781-((x782==x783)&x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	volatile int64_t x786 = INT64_MAX;
	static int16_t x787 = 20;
	volatile int8_t x788 = 15;
	uint32_t t196 = UINT32_MAX;

    t196 = (x785-((x786==x787)&x788));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	uint16_t x790 = 8353U;
	int8_t x791 = 44;
	uint8_t x792 = UINT8_MAX;
	static volatile uint32_t t197 = UINT32_MAX;

    t197 = (x789-((x790==x791)&x792));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x793 = 2159623LLU;
	int16_t x795 = INT16_MIN;
	static int32_t x796 = INT32_MIN;

    t198 = (x793-((x794==x795)&x796));

    if (t198 != 2159623LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = 198935789LL;
	static int16_t x799 = 4;
	volatile int64_t x800 = INT64_MAX;
	volatile int64_t t199 = -740406LL;

    t199 = (x797-((x798==x799)&x800));

    if (t199 != 3LL) { NG(); } else { ; }
	
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

