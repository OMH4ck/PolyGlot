
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

int32_t x4 = INT32_MIN;
int8_t x7 = INT8_MAX;
int16_t x12 = INT16_MAX;
int32_t x15 = INT32_MAX;
int8_t x19 = INT8_MIN;
uint8_t x24 = 7U;
static uint16_t x25 = 215U;
int32_t x27 = 127836;
static int64_t x28 = -1LL;
uint8_t x30 = 2U;
volatile int16_t x35 = 3;
int32_t x37 = -1;
volatile int64_t x38 = INT64_MIN;
uint8_t x40 = 0U;
uint16_t x44 = UINT16_MAX;
int32_t x51 = 76;
int64_t x53 = INT64_MIN;
int16_t x54 = -14467;
int64_t x56 = INT64_MIN;
volatile int64_t t13 = INT64_MIN;
int64_t x58 = -1LL;
static volatile int64_t x63 = -1LL;
volatile uint32_t t15 = UINT32_MAX;
static uint32_t t16 = 11320270U;
int16_t x82 = -1;
volatile int32_t t20 = -138;
volatile uint32_t x94 = 7190321U;
static volatile int32_t t23 = 87;
int64_t x110 = INT64_MIN;
static int16_t x114 = INT16_MIN;
volatile int32_t t28 = 14013574;
int32_t x126 = INT32_MAX;
int64_t x131 = 16233509203LL;
int8_t x137 = -1;
volatile int8_t x145 = -1;
int64_t x167 = -301000385790856LL;
int32_t x170 = -109;
int16_t x171 = INT16_MIN;
static uint32_t t42 = UINT32_MAX;
int32_t x173 = 3113221;
volatile int32_t t44 = -938;
int32_t x183 = -86338;
int32_t x184 = -1;
int64_t x185 = -1LL;
static int64_t t46 = 1631961LL;
int32_t x196 = INT32_MAX;
static int16_t x197 = INT16_MIN;
int8_t x198 = 0;
uint8_t x200 = UINT8_MAX;
volatile int8_t x209 = -11;
int64_t x210 = INT64_MAX;
volatile int32_t t52 = 13;
int8_t x222 = INT8_MIN;
int8_t x223 = -1;
volatile uint64_t x231 = 5461262LLU;
volatile int8_t x236 = -3;
volatile int32_t t59 = 1842;
volatile int32_t t61 = -45195;
uint8_t x250 = 84U;
uint16_t x255 = 1U;
volatile uint16_t x259 = 17U;
volatile int32_t x262 = 6283921;
uint64_t x273 = UINT64_MAX;
uint64_t x279 = 33412799460678LLU;
volatile int16_t x281 = INT16_MIN;
volatile int64_t x283 = -52062562002627771LL;
int8_t x295 = INT8_MAX;
static int32_t x296 = 1202;
static uint64_t x299 = 14315631LLU;
uint64_t x306 = 1081452019368136LLU;
volatile uint64_t x308 = 3LLU;
uint16_t x309 = 25U;
static volatile int8_t x315 = -1;
volatile int8_t x322 = INT8_MIN;
volatile int64_t t80 = INT64_MIN;
static int16_t x326 = INT16_MIN;
volatile int64_t x335 = INT64_MIN;
int16_t x338 = -1781;
volatile uint16_t x341 = UINT16_MAX;
uint8_t x343 = 6U;
volatile int32_t x344 = 552899;
volatile int64_t t87 = 14762590LL;
int32_t x357 = INT32_MIN;
uint16_t x359 = 5440U;
uint32_t x364 = UINT32_MAX;
volatile uint8_t x366 = UINT8_MAX;
volatile int64_t x367 = -494700278104740LL;
int64_t x368 = 13222LL;
int64_t x383 = INT64_MAX;
int8_t x387 = -1;
volatile int32_t x389 = INT32_MIN;
static uint16_t x397 = 927U;
static volatile int32_t t99 = 188565520;
uint8_t x413 = 6U;
uint16_t x416 = 316U;
int64_t x428 = -1LL;
int8_t x430 = 0;
int32_t x433 = -1;
int64_t x435 = INT64_MAX;
int16_t x439 = INT16_MAX;
volatile int32_t t110 = -143146234;
int8_t x445 = 0;
static int32_t t111 = 190;
static uint32_t t114 = 95617U;
uint32_t x469 = 116465372U;
uint16_t x473 = 7U;
volatile int16_t x474 = INT16_MIN;
static int32_t t118 = -3;
int16_t x477 = INT16_MIN;
uint8_t x479 = UINT8_MAX;
int16_t x483 = INT16_MIN;
static uint16_t x484 = UINT16_MAX;
int16_t x489 = INT16_MIN;
int8_t x491 = INT8_MAX;
static volatile int32_t t122 = 1746939;
static int64_t x495 = 161418849261882LL;
int32_t x496 = INT32_MAX;
int16_t x497 = INT16_MIN;
static int32_t x502 = INT32_MIN;
uint32_t x507 = 649006U;
uint8_t x516 = 3U;
uint64_t x517 = 3789711669619979LLU;
int32_t x521 = INT32_MIN;
int8_t x526 = INT8_MIN;
uint16_t x527 = UINT16_MAX;
int64_t x532 = INT64_MAX;
uint8_t x538 = UINT8_MAX;
static uint64_t x541 = 12670044LLU;
static int8_t x547 = 1;
volatile int16_t x556 = -379;
int32_t x570 = -1;
static volatile int32_t t142 = -963;
int8_t x576 = INT8_MAX;
uint8_t x578 = UINT8_MAX;
int32_t x582 = -1;
int16_t x586 = -2;
int16_t x592 = -1;
int32_t x599 = 52;
int64_t t149 = 554943086076287669LL;
int16_t x601 = -83;
static volatile int8_t x603 = INT8_MAX;
static int16_t x606 = INT16_MIN;
int64_t x610 = 2044900465871891183LL;
int32_t t152 = -414;
uint16_t x616 = 680U;
int32_t x624 = 24;
volatile int8_t x628 = -2;
int32_t x632 = 14233801;
int32_t x635 = 775866;
int32_t t158 = 3832092;
int8_t x643 = INT8_MIN;
int32_t x646 = INT32_MAX;
int64_t x647 = INT64_MAX;
uint16_t x649 = UINT16_MAX;
volatile uint64_t x651 = 424008156LLU;
int16_t x660 = INT16_MIN;
volatile int16_t x666 = INT16_MAX;
int64_t t166 = INT64_MIN;
uint32_t x669 = 1816502U;
static uint8_t x671 = 38U;
int16_t x678 = 6;
int8_t x679 = INT8_MIN;
static uint32_t x680 = UINT32_MAX;
volatile int64_t t169 = -1613970623636823LL;
static int8_t x683 = INT8_MIN;
uint16_t x692 = UINT16_MAX;
volatile uint32_t t172 = UINT32_MAX;
uint16_t x698 = 6U;
volatile int8_t x702 = INT8_MIN;
int8_t x703 = 0;
uint64_t x706 = 1372776086477810LLU;
volatile uint64_t t176 = 23LLU;
static int8_t x709 = INT8_MIN;
uint32_t x712 = 277U;
static uint32_t x716 = 7974881U;
static int16_t x720 = 156;
static int32_t x723 = INT32_MIN;
int16_t x725 = INT16_MAX;
int8_t x728 = -1;
static int32_t x730 = 491826294;
int32_t t182 = 995;
uint64_t x736 = 4043767109903LLU;
volatile int32_t t183 = -5;
int64_t x739 = -421742533498570742LL;
int32_t x741 = 1248781;
int32_t x747 = 242;
uint64_t x762 = 1894045566LLU;
volatile int64_t t190 = -132948664932LL;
static int32_t x770 = 264;
volatile int32_t t192 = -333969591;
volatile int32_t t193 = 131441389;
int8_t x781 = INT8_MAX;
int8_t x783 = -1;
int32_t x794 = -1;
volatile int64_t x795 = -1927628903023871LL;
int8_t x798 = -1;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MIN;
	uint32_t t0 = 214626516U;

    t0 = (x1-((x2&x3)==x4));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 1398;
	static volatile uint64_t x6 = 107829494529342470LLU;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 170;

    t1 = (x5-((x6&x7)==x8));

    if (t1 != 1398) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 12U;
	int16_t x10 = -1;
	uint64_t x11 = 2004853LLU;
	static int32_t t2 = -42;

    t2 = (x9-((x10&x11)==x12));

    if (t2 != 12) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	int32_t x14 = 2923804;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 1279;

    t3 = (x13-((x14&x15)==x16));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = 267221444;
	int32_t x18 = INT32_MAX;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 35800068;

    t4 = (x17-((x18&x19)==x20));

    if (t4 != 267221444) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -10;
	int64_t x22 = -489307766986LL;
	int8_t x23 = 1;
	int32_t t5 = -262;

    t5 = (x21-((x22&x23)==x24));

    if (t5 != -10) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int32_t t6 = -14420605;

    t6 = (x25-((x26&x27)==x28));

    if (t6 != 215) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 272897;

    t7 = (x29-((x30&x31)==x32));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 459716U;
	int8_t x34 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t8 = 2035292818U;

    t8 = (x33-((x34&x35)==x36));

    if (t8 != 459716U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x39 = 46;
	volatile int32_t t9 = 6137;

    t9 = (x37-((x38&x39)==x40));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 2;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = -1;
	int32_t t10 = 4791;

    t10 = (x41-((x42&x43)==x44));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	volatile uint32_t x46 = 9U;
	int16_t x47 = -1;
	uint64_t x48 = 31027272LLU;
	int32_t t11 = INT32_MIN;

    t11 = (x45-((x46&x47)==x48));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 61716;

    t12 = (x49-((x50&x51)==x52));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x55 = UINT64_MAX;

    t13 = (x53-((x54&x55)==x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -63047310LL;
	int64_t x59 = INT64_MIN;
	static uint64_t x60 = 30548010LLU;
	volatile int64_t t14 = 8063952011403LL;

    t14 = (x57-((x58&x59)==x60));

    if (t14 != -63047310LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	int64_t x62 = 7823LL;
	volatile int64_t x64 = INT64_MIN;

    t15 = (x61-((x62&x63)==x64));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 894569U;
	uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 26330885LLU;
	int32_t x68 = INT32_MIN;

    t16 = (x65-((x66&x67)==x68));

    if (t16 != 894569U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -15775052;
	static uint16_t x70 = UINT16_MAX;
	uint16_t x71 = 898U;
	static volatile uint64_t x72 = 37724432576LLU;
	static volatile int32_t t17 = -4;

    t17 = (x69-((x70&x71)==x72));

    if (t17 != -15775052) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	static int8_t x74 = -1;
	volatile uint32_t x75 = 1U;
	static volatile uint32_t x76 = 3U;
	int32_t t18 = 4148899;

    t18 = (x73-((x74&x75)==x76));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -5562;
	static volatile int64_t x78 = INT64_MIN;
	int8_t x79 = -2;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = -2;

    t19 = (x77-((x78&x79)==x80));

    if (t19 != -5562) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 1286;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 305850753586293955LLU;

    t20 = (x81-((x82&x83)==x84));

    if (t20 != 1286) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	static volatile int16_t x86 = INT16_MAX;
	static volatile uint16_t x87 = 6U;
	int64_t x88 = 10335046847124059LL;
	static int64_t t21 = -5LL;

    t21 = (x85-((x86&x87)==x88));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 4;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = -3;
	volatile uint16_t x92 = 13234U;
	volatile int32_t t22 = -1;

    t22 = (x89-((x90&x91)==x92));

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = 39291;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;

    t23 = (x93-((x94&x95)==x96));

    if (t23 != 39291) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -1;
	uint8_t x99 = 0U;
	int64_t x100 = 529198LL;
	uint64_t t24 = UINT64_MAX;

    t24 = (x97-((x98&x99)==x100));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = 1;
	int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = 0;

    t25 = (x101-((x102&x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	int64_t x106 = -1LL;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	uint32_t t26 = UINT32_MAX;

    t26 = (x105-((x106&x107)==x108));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = 2890;
	int16_t x111 = -1;
	int32_t x112 = 39687;
	int32_t t27 = -6468;

    t27 = (x109-((x110&x111)==x112));

    if (t27 != 2890) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 246630671;
	volatile uint32_t x115 = 1U;
	int64_t x116 = 9875961537627LL;

    t28 = (x113-((x114&x115)==x116));

    if (t28 != 246630671) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = -272LL;
	volatile int16_t x119 = 0;
	volatile int64_t x120 = INT64_MIN;
	int64_t t29 = INT64_MIN;

    t29 = (x117-((x118&x119)==x120));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x121 = -13460;
	static uint32_t x122 = 7466U;
	int64_t x123 = INT64_MIN;
	volatile uint32_t x124 = UINT32_MAX;
	int32_t t30 = -3;

    t30 = (x121-((x122&x123)==x124));

    if (t30 != -13460) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MAX;
	static int64_t x127 = -37LL;
	int8_t x128 = 11;
	volatile int32_t t31 = -1;

    t31 = (x125-((x126&x127)==x128));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static int16_t x130 = INT16_MIN;
	int16_t x132 = -1;
	int32_t t32 = -257889;

    t32 = (x129-((x130&x131)==x132));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 0;
	uint32_t x134 = UINT32_MAX;
	uint8_t x135 = 66U;
	int64_t x136 = -31979568LL;
	int32_t t33 = -352;

    t33 = (x133-((x134&x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = -1;
	volatile uint8_t x139 = UINT8_MAX;
	static int64_t x140 = INT64_MIN;
	static int32_t t34 = -237;

    t34 = (x137-((x138&x139)==x140));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -28;
	int16_t x142 = 15797;
	int64_t x143 = INT64_MAX;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -27009417;

    t35 = (x141-((x142&x143)==x144));

    if (t35 != -28) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x146 = 76U;
	int64_t x147 = -1LL;
	volatile int32_t x148 = 1014012391;
	volatile int32_t t36 = -299080807;

    t36 = (x145-((x146&x147)==x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MAX;
	static volatile int64_t x150 = INT64_MIN;
	static int16_t x151 = -1;
	int8_t x152 = INT8_MAX;
	int32_t t37 = INT32_MAX;

    t37 = (x149-((x150&x151)==x152));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = -1;
	int8_t x156 = -29;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x153-((x154&x155)==x156));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	static int8_t x158 = INT8_MIN;
	static uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = 225LL;
	volatile int32_t t39 = INT32_MAX;

    t39 = (x157-((x158&x159)==x160));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static int16_t x162 = -1;
	static uint32_t x163 = 1415533124U;
	static uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 1306832;

    t40 = (x161-((x162&x163)==x164));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 9U;
	int16_t x166 = 287;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = 864256654;

    t41 = (x165-((x166&x167)==x168));

    if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	static uint64_t x172 = UINT64_MAX;

    t42 = (x169-((x170&x171)==x172));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = 11745933;

    t43 = (x173-((x174&x175)==x176));

    if (t43 != 3113221) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 1;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;

    t44 = (x177-((x178&x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	int8_t x182 = -16;
	uint64_t t45 = UINT64_MAX;

    t45 = (x181-((x182&x183)==x184));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = UINT8_MAX;
	volatile int8_t x187 = -1;
	static int16_t x188 = INT16_MIN;

    t46 = (x185-((x186&x187)==x188));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 514866LL;
	static uint64_t x190 = 0LLU;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = -1;
	volatile int64_t t47 = -650843362621434787LL;

    t47 = (x189-((x190&x191)==x192));

    if (t47 != 514866LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 21U;
	volatile int16_t x194 = 51;
	uint16_t x195 = 1157U;
	volatile uint32_t t48 = 6771U;

    t48 = (x193-((x194&x195)==x196));

    if (t48 != 21U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x199 = 0;
	volatile int32_t t49 = 380;

    t49 = (x197-((x198&x199)==x200));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	static int16_t x204 = INT16_MIN;
	volatile int64_t t50 = INT64_MAX;

    t50 = (x201-((x202&x203)==x204));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 9U;
	int16_t x206 = -1865;
	int32_t x207 = INT32_MAX;
	volatile int8_t x208 = -1;
	int32_t t51 = 56;

    t51 = (x205-((x206&x207)==x208));

    if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x211 = 55121522005LLU;
	static int8_t x212 = INT8_MIN;

    t52 = (x209-((x210&x211)==x212));

    if (t52 != -11) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -1LL;
	static uint8_t x214 = 3U;
	int8_t x215 = 27;
	uint8_t x216 = 1U;
	int64_t t53 = 23017980LL;

    t53 = (x213-((x214&x215)==x216));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 88U;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	volatile int16_t x220 = -1;
	static volatile int32_t t54 = -86;

    t54 = (x217-((x218&x219)==x220));

    if (t54 != 88) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	static uint16_t x224 = 69U;
	int32_t t55 = -9833;

    t55 = (x221-((x222&x223)==x224));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MAX;
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 1382;

    t56 = (x225-((x226&x227)==x228));

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x230 = -6;
	int16_t x232 = -1;
	static volatile int64_t t57 = INT64_MAX;

    t57 = (x229-((x230&x231)==x232));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MIN;
	int16_t x235 = -1;
	volatile int32_t t58 = -15855;

    t58 = (x233-((x234&x235)==x236));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 2246;
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = 3878984499884LL;
	static int16_t x240 = INT16_MIN;

    t59 = (x237-((x238&x239)==x240));

    if (t59 != 2246) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static int64_t x242 = 265246137LL;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -1;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = (x241-((x242&x243)==x244));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 2543U;
	uint16_t x246 = UINT16_MAX;
	volatile int16_t x247 = INT16_MIN;
	uint8_t x248 = 19U;

    t61 = (x245-((x246&x247)==x248));

    if (t61 != 2543) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = 1U;
	int16_t x251 = 539;
	static volatile int16_t x252 = 4087;
	volatile int32_t t62 = 1;

    t62 = (x249-((x250&x251)==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MIN;
	uint32_t x256 = 1007U;
	int32_t t63 = -10735;

    t63 = (x253-((x254&x255)==x256));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 26U;
	int64_t x258 = -1LL;
	volatile uint64_t x260 = UINT64_MAX;
	int32_t t64 = 94785731;

    t64 = (x257-((x258&x259)==x260));

    if (t64 != 26) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -11046LL;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MAX;
	volatile int64_t t65 = -885737136335LL;

    t65 = (x261-((x262&x263)==x264));

    if (t65 != -11046LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x265 = 8013U;
	int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	uint8_t x268 = 106U;
	static volatile uint32_t t66 = 2798194U;

    t66 = (x265-((x266&x267)==x268));

    if (t66 != 8013U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = INT64_MIN;
	static int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;
	int64_t t67 = INT64_MIN;

    t67 = (x269-((x270&x271)==x272));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MIN;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x273-((x274&x275)==x276));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	volatile int8_t x278 = INT8_MIN;
	static volatile int64_t x280 = 1703673382970LL;
	int32_t t69 = -251612;

    t69 = (x277-((x278&x279)==x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x282 = INT32_MAX;
	int64_t x284 = 0LL;
	volatile int32_t t70 = 1;

    t70 = (x281-((x282&x283)==x284));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MAX;
	volatile uint8_t x288 = 9U;
	volatile int32_t t71 = -114834775;

    t71 = (x285-((x286&x287)==x288));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = -1;
	int8_t x291 = -2;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (x289-((x290&x291)==x292));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = -1;
	int32_t x294 = 12;
	volatile int32_t t73 = -29422;

    t73 = (x293-((x294&x295)==x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = 1;
	uint32_t x298 = UINT32_MAX;
	uint32_t x300 = 104372126U;
	volatile int32_t t74 = 479657213;

    t74 = (x297-((x298&x299)==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x301 = 1361U;
	volatile int16_t x302 = 1;
	int8_t x303 = 1;
	volatile int16_t x304 = INT16_MIN;
	volatile uint32_t t75 = 1441U;

    t75 = (x301-((x302&x303)==x304));

    if (t75 != 1361U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 1U;
	int64_t x307 = -4712275709411LL;
	static volatile uint32_t t76 = 22575U;

    t76 = (x305-((x306&x307)==x308));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 3478;

    t77 = (x309-((x310&x311)==x312));

    if (t77 != 25) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 0;
	uint8_t x314 = 56U;
	uint64_t x316 = 10LLU;
	volatile int32_t t78 = -26403445;

    t78 = (x313-((x314&x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	static int32_t x318 = INT32_MIN;
	static int32_t x319 = 1982506;
	int16_t x320 = -1;
	uint32_t t79 = UINT32_MAX;

    t79 = (x317-((x318&x319)==x320));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	volatile uint16_t x323 = 1985U;
	volatile int8_t x324 = -1;

    t80 = (x321-((x322&x323)==x324));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	volatile uint32_t x327 = 12U;
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = (x325-((x326&x327)==x328));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = 0;
	volatile uint8_t x330 = 1U;
	volatile int8_t x331 = -1;
	static uint16_t x332 = 124U;
	static volatile int32_t t82 = 2022113;

    t82 = (x329-((x330&x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -2;
	int16_t x334 = INT16_MAX;
	volatile int32_t x336 = 12429801;
	static int32_t t83 = 81464;

    t83 = (x333-((x334&x335)==x336));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MIN;
	volatile uint64_t x339 = 11352LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = INT32_MIN;

    t84 = (x337-((x338&x339)==x340));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = -52;
	static volatile int32_t t85 = 318588;

    t85 = (x341-((x342&x343)==x344));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MAX;
	int32_t x348 = 56813138;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x345-((x346&x347)==x348));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 81790556126LL;
	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = INT32_MIN;
	volatile int64_t x352 = INT64_MIN;

    t87 = (x349-((x350&x351)==x352));

    if (t87 != 81790556126LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 551314LLU;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = 20004106U;
	int8_t x356 = INT8_MIN;
	uint64_t t88 = 2810377705962593LLU;

    t88 = (x353-((x354&x355)==x356));

    if (t88 != 551314LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x358 = UINT8_MAX;
	uint64_t x360 = 1774559608776538807LLU;
	static volatile int32_t t89 = INT32_MIN;

    t89 = (x357-((x358&x359)==x360));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int64_t x362 = -185948LL;
	uint32_t x363 = 2444263U;
	int32_t t90 = -390068782;

    t90 = (x361-((x362&x363)==x364));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MAX;
	volatile int32_t t91 = INT32_MAX;

    t91 = (x365-((x366&x367)==x368));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x369 = -1;
	static uint8_t x370 = UINT8_MAX;
	uint32_t x371 = UINT32_MAX;
	volatile uint8_t x372 = 4U;
	static int32_t t92 = -1;

    t92 = (x369-((x370&x371)==x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 0;
	uint8_t x374 = 111U;
	volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t x376 = INT32_MAX;
	int32_t t93 = 3086;

    t93 = (x373-((x374&x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	uint32_t x378 = 7U;
	static int8_t x379 = -12;
	static uint16_t x380 = 922U;
	volatile int64_t t94 = 327422570567248LL;

    t94 = (x377-((x378&x379)==x380));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	static int16_t x382 = INT16_MIN;
	static uint8_t x384 = 1U;
	volatile int64_t t95 = -20291LL;

    t95 = (x381-((x382&x383)==x384));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 123LL;
	uint64_t x386 = UINT64_MAX;
	static uint8_t x388 = 0U;
	volatile int64_t t96 = -396003LL;

    t96 = (x385-((x386&x387)==x388));

    if (t96 != 123LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x390 = 15U;
	uint16_t x391 = 546U;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = INT32_MIN;

    t97 = (x389-((x390&x391)==x392));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = 32533U;
	volatile int32_t x394 = 1663511;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = INT8_MIN;
	int32_t t98 = -3856;

    t98 = (x393-((x394&x395)==x396));

    if (t98 != 32533) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = 15U;
	int16_t x399 = 4126;
	uint64_t x400 = 173337719033LLU;

    t99 = (x397-((x398&x399)==x400));

    if (t99 != 927) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	static int8_t x402 = 0;
	uint64_t x403 = 7035758LLU;
	uint64_t x404 = UINT64_MAX;
	static int32_t t100 = INT32_MIN;

    t100 = (x401-((x402&x403)==x404));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = UINT8_MAX;
	volatile int64_t x406 = -3489346LL;
	volatile uint64_t x407 = UINT64_MAX;
	int16_t x408 = -1;
	int32_t t101 = 1754357;

    t101 = (x405-((x406&x407)==x408));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 12927;
	int32_t x410 = -1592;
	int32_t x411 = INT32_MIN;
	int8_t x412 = 19;
	static volatile int32_t t102 = 912517945;

    t102 = (x409-((x410&x411)==x412));

    if (t102 != 12927) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x414 = 440LLU;
	int32_t x415 = INT32_MAX;
	volatile int32_t t103 = 21384975;

    t103 = (x413-((x414&x415)==x416));

    if (t103 != 6) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	uint32_t x418 = 54U;
	static int8_t x419 = -1;
	int64_t x420 = -1LL;
	volatile int32_t t104 = -3;

    t104 = (x417-((x418&x419)==x420));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	static volatile uint32_t x423 = UINT32_MAX;
	uint16_t x424 = 228U;
	volatile int32_t t105 = 1791;

    t105 = (x421-((x422&x423)==x424));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	volatile uint64_t x426 = 15507LLU;
	int32_t x427 = -1;
	volatile int32_t t106 = 24706133;

    t106 = (x425-((x426&x427)==x428));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MIN;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (x429-((x430&x431)==x432));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MAX;
	int64_t x436 = -11569655036908LL;
	volatile int32_t t108 = 1510545;

    t108 = (x433-((x434&x435)==x436));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = 31;
	uint8_t x438 = UINT8_MAX;
	int64_t x440 = INT64_MAX;
	volatile int32_t t109 = 1127222;

    t109 = (x437-((x438&x439)==x440));

    if (t109 != 31) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x441 = -15;
	int64_t x442 = -1LL;
	int8_t x443 = INT8_MIN;
	static int32_t x444 = -1;

    t110 = (x441-((x442&x443)==x444));

    if (t110 != -15) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = 1063184076;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;

    t111 = (x445-((x446&x447)==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	int8_t x450 = INT8_MIN;
	static uint64_t x451 = 2710940179LLU;
	static volatile uint64_t x452 = 2523027430693LLU;
	static uint32_t t112 = UINT32_MAX;

    t112 = (x449-((x450&x451)==x452));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	volatile int32_t x454 = INT32_MIN;
	volatile uint8_t x455 = 1U;
	static uint64_t x456 = UINT64_MAX;
	volatile int32_t t113 = 15039;

    t113 = (x453-((x454&x455)==x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 51885U;
	int8_t x458 = 0;
	volatile int16_t x459 = INT16_MAX;
	int32_t x460 = -1;

    t114 = (x457-((x458&x459)==x460));

    if (t114 != 51885U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 0LL;
	static int8_t x462 = INT8_MAX;
	uint16_t x463 = UINT16_MAX;
	volatile uint32_t x464 = 2267U;
	int64_t t115 = 56907LL;

    t115 = (x461-((x462&x463)==x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = -1;
	int8_t x466 = -9;
	uint8_t x467 = 1U;
	int8_t x468 = -1;
	static int32_t t116 = -4;

    t116 = (x465-((x466&x467)==x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = -1;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = -1LL;
	volatile uint32_t t117 = 173334973U;

    t117 = (x469-((x470&x471)==x472));

    if (t117 != 116465372U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x475 = INT16_MIN;
	volatile uint32_t x476 = 6059U;

    t118 = (x473-((x474&x475)==x476));

    if (t118 != 7) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = -1;
	volatile int16_t x480 = INT16_MIN;
	static int32_t t119 = -2;

    t119 = (x477-((x478&x479)==x480));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 29;
	uint64_t x482 = 2959274673405451603LLU;
	static volatile int32_t t120 = -91512198;

    t120 = (x481-((x482&x483)==x484));

    if (t120 != 29) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 229;
	int8_t x486 = -1;
	volatile int8_t x487 = -38;
	int64_t x488 = INT64_MIN;
	int32_t t121 = -369929277;

    t121 = (x485-((x486&x487)==x488));

    if (t121 != 229) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x490 = 4967985600050LLU;
	uint16_t x492 = 948U;

    t122 = (x489-((x490&x491)==x492));

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x493 = -1;
	volatile uint8_t x494 = UINT8_MAX;
	int32_t t123 = -98086;

    t123 = (x493-((x494&x495)==x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	static int8_t x499 = INT8_MAX;
	uint16_t x500 = 120U;
	int32_t t124 = -46775;

    t124 = (x497-((x498&x499)==x500));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x501 = 3U;
	int64_t x503 = INT64_MIN;
	volatile uint8_t x504 = UINT8_MAX;
	static uint32_t t125 = 1657U;

    t125 = (x501-((x502&x503)==x504));

    if (t125 != 3U) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x505 = UINT8_MAX;
	volatile int64_t x506 = -1LL;
	int8_t x508 = -49;
	int32_t t126 = -1;

    t126 = (x505-((x506&x507)==x508));

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = 2152U;
	int16_t x510 = INT16_MIN;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = INT64_MAX;
	volatile int32_t t127 = 0;

    t127 = (x509-((x510&x511)==x512));

    if (t127 != 2152) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -18;
	int8_t x514 = INT8_MIN;
	int16_t x515 = -25;
	static volatile int32_t t128 = -1346545;

    t128 = (x513-((x514&x515)==x516));

    if (t128 != -18) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x518 = INT8_MAX;
	static int32_t x519 = INT32_MIN;
	volatile int16_t x520 = INT16_MIN;
	volatile uint64_t t129 = 783235550600441338LLU;

    t129 = (x517-((x518&x519)==x520));

    if (t129 != 3789711669619979LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = UINT64_MAX;
	volatile uint16_t x523 = UINT16_MAX;
	static uint64_t x524 = 97LLU;
	int32_t t130 = INT32_MIN;

    t130 = (x521-((x522&x523)==x524));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	static uint64_t x528 = 1675692264LLU;
	volatile int64_t t131 = 107432LL;

    t131 = (x525-((x526&x527)==x528));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 189793374;
	static int16_t x530 = -8262;
	static uint8_t x531 = UINT8_MAX;
	int32_t t132 = 35714515;

    t132 = (x529-((x530&x531)==x532));

    if (t132 != 189793374) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	uint32_t x534 = UINT32_MAX;
	uint64_t x535 = 41012536925049567LLU;
	int32_t x536 = INT32_MIN;
	int32_t t133 = -10538;

    t133 = (x533-((x534&x535)==x536));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	int64_t x540 = 52LL;
	static int32_t t134 = INT32_MIN;

    t134 = (x537-((x538&x539)==x540));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x542 = UINT8_MAX;
	uint8_t x543 = 1U;
	uint16_t x544 = UINT16_MAX;
	static volatile uint64_t t135 = 424574172LLU;

    t135 = (x541-((x542&x543)==x544));

    if (t135 != 12670044LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = -69790045;
	int16_t x546 = -1;
	uint64_t x548 = 264254LLU;
	volatile int32_t t136 = -77534458;

    t136 = (x545-((x546&x547)==x548));

    if (t136 != -69790045) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x549 = INT16_MAX;
	uint64_t x550 = 128892LLU;
	static int16_t x551 = INT16_MIN;
	uint64_t x552 = 5479362976LLU;
	volatile int32_t t137 = 30402;

    t137 = (x549-((x550&x551)==x552));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	uint32_t x554 = UINT32_MAX;
	static uint16_t x555 = UINT16_MAX;
	int32_t t138 = INT32_MIN;

    t138 = (x553-((x554&x555)==x556));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = 29;
	static int64_t x558 = 317406LL;
	int8_t x559 = INT8_MAX;
	static int64_t x560 = INT64_MIN;
	static volatile int32_t t139 = -10982;

    t139 = (x557-((x558&x559)==x560));

    if (t139 != 29) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x561 = -35;
	volatile int32_t x562 = INT32_MIN;
	static volatile int8_t x563 = 1;
	int64_t x564 = INT64_MAX;
	static int32_t t140 = 1;

    t140 = (x561-((x562&x563)==x564));

    if (t140 != -35) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	static volatile uint8_t x566 = 0U;
	int16_t x567 = INT16_MIN;
	int32_t x568 = -1;
	static int32_t t141 = -131820012;

    t141 = (x565-((x566&x567)==x568));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 0;
	static volatile int8_t x571 = -15;
	volatile int16_t x572 = -1;

    t142 = (x569-((x570&x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 108U;
	volatile uint8_t x574 = 1U;
	uint8_t x575 = 1U;
	int32_t t143 = 2;

    t143 = (x573-((x574&x575)==x576));

    if (t143 != 108) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MIN;
	int64_t x579 = INT64_MAX;
	int32_t x580 = INT32_MAX;
	volatile int32_t t144 = 88251526;

    t144 = (x577-((x578&x579)==x580));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = UINT32_MAX;
	int16_t x583 = -1519;
	int64_t x584 = -8043668LL;
	volatile uint32_t t145 = UINT32_MAX;

    t145 = (x581-((x582&x583)==x584));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = INT16_MAX;
	int64_t x587 = 10LL;
	int64_t x588 = INT64_MIN;
	int32_t t146 = -7465;

    t146 = (x585-((x586&x587)==x588));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 10111;
	uint16_t x590 = 651U;
	static int16_t x591 = -27;
	static int32_t t147 = 1307;

    t147 = (x589-((x590&x591)==x592));

    if (t147 != 10111) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static int16_t x594 = INT16_MAX;
	uint8_t x595 = 1U;
	int16_t x596 = 936;
	volatile int32_t t148 = -28;

    t148 = (x593-((x594&x595)==x596));

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	int8_t x598 = INT8_MAX;
	uint64_t x600 = UINT64_MAX;

    t149 = (x597-((x598&x599)==x600));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x602 = -1;
	int16_t x604 = 1;
	volatile int32_t t150 = -2079155;

    t150 = (x601-((x602&x603)==x604));

    if (t150 != -83) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 29;
	uint32_t x607 = UINT32_MAX;
	volatile int64_t x608 = -1LL;
	volatile int32_t t151 = 417;

    t151 = (x605-((x606&x607)==x608));

    if (t151 != 29) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -9;
	static int8_t x611 = 55;
	int16_t x612 = 1164;

    t152 = (x609-((x610&x611)==x612));

    if (t152 != -9) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -1;
	uint64_t x614 = UINT64_MAX;
	int32_t x615 = -59;
	volatile int32_t t153 = 7310;

    t153 = (x613-((x614&x615)==x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = INT8_MAX;
	static volatile int64_t x618 = -3838434887016372LL;
	uint64_t x619 = UINT64_MAX;
	int8_t x620 = INT8_MIN;
	volatile int32_t t154 = -398;

    t154 = (x617-((x618&x619)==x620));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	static uint64_t x622 = 67293229530LLU;
	static uint16_t x623 = 37U;
	volatile uint64_t t155 = UINT64_MAX;

    t155 = (x621-((x622&x623)==x624));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = UINT64_MAX;
	uint16_t x626 = UINT16_MAX;
	int16_t x627 = 1;
	uint64_t t156 = UINT64_MAX;

    t156 = (x625-((x626&x627)==x628));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = 1;
	int16_t x631 = INT16_MAX;
	volatile int32_t t157 = -54601876;

    t157 = (x629-((x630&x631)==x632));

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	int32_t x634 = INT32_MAX;
	int8_t x636 = 0;

    t158 = (x633-((x634&x635)==x636));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1U;
	uint8_t x638 = 3U;
	static int64_t x639 = INT64_MIN;
	volatile int8_t x640 = INT8_MIN;
	static volatile int32_t t159 = 13;

    t159 = (x637-((x638&x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	uint64_t x642 = 110522LLU;
	volatile int16_t x644 = INT16_MIN;
	volatile int64_t t160 = INT64_MAX;

    t160 = (x641-((x642&x643)==x644));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int16_t x648 = -2;
	static int32_t t161 = 3;

    t161 = (x645-((x646&x647)==x648));

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 1U;
	int16_t x652 = INT16_MIN;
	static volatile int32_t t162 = -2036369;

    t162 = (x649-((x650&x651)==x652));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 1261U;
	int32_t x654 = INT32_MIN;
	int32_t x655 = INT32_MIN;
	static volatile int64_t x656 = INT64_MIN;
	int32_t t163 = 59986;

    t163 = (x653-((x654&x655)==x656));

    if (t163 != 1261) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	uint16_t x658 = UINT16_MAX;
	int8_t x659 = 0;
	volatile int32_t t164 = 1194356;

    t164 = (x657-((x658&x659)==x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	static int8_t x662 = INT8_MIN;
	int16_t x663 = INT16_MIN;
	static int8_t x664 = 3;
	volatile int32_t t165 = -781204;

    t165 = (x661-((x662&x663)==x664));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	volatile int32_t x667 = INT32_MAX;
	int8_t x668 = -1;

    t166 = (x665-((x666&x667)==x668));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = INT16_MIN;
	volatile int8_t x672 = INT8_MIN;
	uint32_t t167 = 9362827U;

    t167 = (x669-((x670&x671)==x672));

    if (t167 != 1816502U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = 4160574002157LL;
	static int64_t x674 = INT64_MAX;
	int16_t x675 = 0;
	static int64_t x676 = INT64_MIN;
	int64_t t168 = 289604799508241LL;

    t168 = (x673-((x674&x675)==x676));

    if (t168 != 4160574002157LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -2300LL;

    t169 = (x677-((x678&x679)==x680));

    if (t169 != -2300LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 41315LLU;
	static volatile int32_t x682 = -7380287;
	uint64_t x684 = UINT64_MAX;
	uint64_t t170 = 41405329784168276LLU;

    t170 = (x681-((x682&x683)==x684));

    if (t170 != 41315LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	int16_t x686 = 251;
	static int16_t x687 = INT16_MIN;
	int32_t x688 = -28147232;
	int32_t t171 = INT32_MAX;

    t171 = (x685-((x686&x687)==x688));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile uint32_t x690 = 26U;
	int16_t x691 = INT16_MIN;

    t172 = (x689-((x690&x691)==x692));

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 6592;
	uint16_t x694 = UINT16_MAX;
	uint16_t x695 = 28U;
	uint8_t x696 = 8U;
	static volatile int32_t t173 = -499142;

    t173 = (x693-((x694&x695)==x696));

    if (t173 != 6592) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x697 = 3767274471LL;
	volatile int16_t x699 = INT16_MIN;
	uint32_t x700 = 141321U;
	int64_t t174 = 72991408549335840LL;

    t174 = (x697-((x698&x699)==x700));

    if (t174 != 3767274471LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 1U;
	volatile int32_t x704 = -361561647;
	static int32_t t175 = -1;

    t175 = (x701-((x702&x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 28424LLU;
	volatile int8_t x707 = -13;
	int8_t x708 = INT8_MIN;

    t176 = (x705-((x706&x707)==x708));

    if (t176 != 28424LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x710 = UINT64_MAX;
	static int32_t x711 = INT32_MIN;
	volatile int32_t t177 = -6124921;

    t177 = (x709-((x710&x711)==x712));

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = 9;
	static uint32_t x714 = UINT32_MAX;
	uint16_t x715 = UINT16_MAX;
	volatile int32_t t178 = -1092559;

    t178 = (x713-((x714&x715)==x716));

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	int64_t x718 = -1LL;
	int64_t x719 = INT64_MAX;
	volatile int64_t t179 = INT64_MIN;

    t179 = (x717-((x718&x719)==x720));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 13081929U;
	int32_t x722 = INT32_MIN;
	int64_t x724 = INT64_MIN;
	volatile uint32_t t180 = 271051U;

    t180 = (x721-((x722&x723)==x724));

    if (t180 != 13081929U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = INT8_MAX;
	uint64_t x727 = 93699653007316LLU;
	volatile int32_t t181 = -52101934;

    t181 = (x725-((x726&x727)==x728));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x729 = 3U;
	int16_t x731 = -1;
	uint32_t x732 = 0U;

    t182 = (x729-((x730&x731)==x732));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -3;
	static int32_t x734 = -1;
	static int16_t x735 = 0;

    t183 = (x733-((x734&x735)==x736));

    if (t183 != -3) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile int64_t x738 = INT64_MAX;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t184 = 344116246;

    t184 = (x737-((x738&x739)==x740));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x742 = 14840664LLU;
	uint32_t x743 = 221U;
	uint32_t x744 = UINT32_MAX;
	static volatile int32_t t185 = -351778373;

    t185 = (x741-((x742&x743)==x744));

    if (t185 != 1248781) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	static int64_t x746 = INT64_MIN;
	volatile int32_t x748 = INT32_MAX;
	int32_t t186 = -310114012;

    t186 = (x745-((x746&x747)==x748));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	int64_t x750 = INT64_MAX;
	int8_t x751 = INT8_MIN;
	uint8_t x752 = 7U;
	uint32_t t187 = UINT32_MAX;

    t187 = (x749-((x750&x751)==x752));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = -1;
	volatile int8_t x754 = 0;
	int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -3031059;

    t188 = (x753-((x754&x755)==x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	volatile int8_t x758 = -1;
	static uint64_t x759 = 3923805034LLU;
	int32_t x760 = -1;
	static volatile int32_t t189 = -39967821;

    t189 = (x757-((x758&x759)==x760));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -13640686773050865LL;
	uint16_t x763 = 292U;
	volatile uint64_t x764 = 5LLU;

    t190 = (x761-((x762&x763)==x764));

    if (t190 != -13640686773050865LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = 119309655483LLU;
	volatile int64_t x766 = INT64_MAX;
	static int32_t x767 = INT32_MIN;
	int32_t x768 = INT32_MAX;
	uint64_t t191 = 0LLU;

    t191 = (x765-((x766&x767)==x768));

    if (t191 != 119309655483LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 44;
	uint32_t x771 = 42U;
	int32_t x772 = INT32_MAX;

    t192 = (x769-((x770&x771)==x772));

    if (t192 != 44) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	volatile int16_t x774 = 5961;
	static int8_t x775 = 6;
	int64_t x776 = 392775031974153606LL;

    t193 = (x773-((x774&x775)==x776));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	static volatile uint8_t x778 = UINT8_MAX;
	int64_t x779 = -1LL;
	int32_t x780 = 5935;
	volatile int32_t t194 = -992985360;

    t194 = (x777-((x778&x779)==x780));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = INT16_MIN;
	int64_t x784 = 27LL;
	int32_t t195 = 201;

    t195 = (x781-((x782&x783)==x784));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	uint64_t x786 = 75041194459799935LLU;
	volatile int64_t x787 = INT64_MIN;
	int32_t x788 = -1;
	static int32_t t196 = 431;

    t196 = (x785-((x786&x787)==x788));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = -1LL;
	int64_t x790 = -218942450197479443LL;
	int64_t x791 = 2300895161389853LL;
	int32_t x792 = INT32_MIN;
	static int64_t t197 = 2934LL;

    t197 = (x789-((x790&x791)==x792));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = -1;
	int64_t x796 = INT64_MIN;
	int32_t t198 = 5;

    t198 = (x793-((x794&x795)==x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint64_t x797 = 932155831054084890LLU;
	uint8_t x799 = 103U;
	int8_t x800 = INT8_MAX;
	static volatile uint64_t t199 = 0LLU;

    t199 = (x797-((x798&x799)==x800));

    if (t199 != 932155831054084890LLU) { NG(); } else { ; }
	
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

