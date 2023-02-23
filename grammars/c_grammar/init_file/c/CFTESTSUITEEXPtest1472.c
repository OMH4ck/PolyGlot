
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
uint16_t x5 = 14245U;
int64_t x7 = 1989LL;
int8_t x9 = INT8_MIN;
static int32_t x10 = 103;
volatile uint64_t x13 = 1152604720LLU;
int8_t x25 = 0;
static int16_t x26 = 556;
int32_t t6 = 1;
static int16_t x30 = INT16_MIN;
static volatile int16_t x33 = 30;
int64_t x38 = -1194LL;
volatile int16_t x43 = -1;
uint64_t t10 = 14391415069113255LLU;
uint32_t x46 = 1524128773U;
uint16_t x50 = UINT16_MAX;
static volatile int32_t t15 = -317084;
int32_t x67 = INT32_MIN;
static volatile int8_t x69 = INT8_MIN;
int32_t t17 = -177;
static uint32_t x76 = 303U;
static volatile uint32_t t18 = 3717066U;
int16_t x77 = -12;
static int16_t x81 = 1;
int64_t x83 = INT64_MAX;
int32_t x87 = INT32_MIN;
static int8_t x88 = INT8_MIN;
int8_t x93 = -1;
int32_t t23 = -1036703417;
int64_t x99 = INT64_MIN;
volatile int32_t t24 = INT32_MIN;
int32_t x110 = INT32_MIN;
volatile int64_t x112 = INT64_MIN;
int32_t t27 = INT32_MIN;
int64_t x121 = -850868LL;
static int32_t x129 = 63;
int32_t x132 = INT32_MIN;
volatile int32_t x136 = INT32_MAX;
static int32_t t33 = 0;
int8_t x143 = -1;
int8_t x145 = INT8_MAX;
uint64_t x146 = UINT64_MAX;
static int8_t x151 = -1;
int16_t x152 = -1;
volatile uint8_t x157 = 2U;
static uint16_t x159 = UINT16_MAX;
int32_t x164 = -244393;
volatile int32_t t40 = INT32_MAX;
static uint16_t x166 = 3U;
volatile int64_t t42 = INT64_MIN;
int64_t x175 = INT64_MIN;
volatile int64_t x178 = INT64_MIN;
uint64_t x179 = UINT64_MAX;
uint32_t x191 = 184U;
volatile uint8_t x192 = 15U;
int32_t x194 = -56;
volatile int16_t x198 = INT16_MAX;
volatile uint64_t t51 = 1053282486695074LLU;
int64_t x212 = INT64_MIN;
static volatile int32_t t52 = 257199514;
int64_t x215 = INT64_MIN;
uint64_t x216 = 1337931171055403LLU;
uint32_t x218 = 60U;
static uint16_t x225 = 1014U;
volatile int32_t t56 = 15789;
static uint64_t x233 = 35864LLU;
static volatile uint64_t t58 = 508566LLU;
volatile int16_t x241 = -1;
int64_t x242 = INT64_MIN;
static int32_t t60 = -1;
int16_t x246 = INT16_MAX;
static int64_t x248 = INT64_MIN;
int64_t x249 = 880LL;
int16_t x253 = INT16_MAX;
static int8_t x254 = INT8_MIN;
int32_t t63 = 31435;
uint32_t x260 = UINT32_MAX;
static volatile uint64_t x263 = 3173012LLU;
int64_t t66 = -1LL;
volatile int8_t x273 = INT8_MIN;
int32_t x274 = INT32_MIN;
int32_t x275 = 1;
int16_t x278 = -94;
uint32_t x279 = 6U;
volatile int16_t x282 = INT16_MIN;
volatile int64_t x283 = -49LL;
uint32_t t70 = UINT32_MAX;
int16_t x291 = 1056;
int8_t x294 = INT8_MAX;
volatile int64_t x296 = -1555LL;
volatile int64_t x299 = 11328857212LL;
static int64_t x305 = -1LL;
static volatile uint32_t x329 = UINT32_MAX;
int64_t x332 = INT64_MAX;
volatile int32_t x333 = -7484900;
static volatile int32_t t83 = -23846;
int8_t x344 = INT8_MIN;
uint64_t x345 = 21887025259LLU;
int8_t x348 = INT8_MIN;
uint64_t x363 = 30366159LLU;
volatile uint8_t x364 = 43U;
static uint8_t x369 = UINT8_MAX;
static volatile int8_t x370 = 0;
static int32_t x379 = 1;
uint16_t x383 = 30U;
volatile uint32_t x384 = UINT32_MAX;
int64_t x391 = -6618565847LL;
static int16_t x400 = 58;
volatile int32_t t99 = -566203362;
int32_t x407 = -602884734;
volatile int16_t x413 = -5357;
int8_t x416 = -12;
int32_t x417 = INT32_MAX;
volatile int32_t t104 = INT32_MAX;
int8_t x422 = -1;
volatile int64_t t105 = 6300932376211567LL;
volatile uint32_t x435 = 307947U;
uint8_t x436 = 91U;
uint64_t t108 = 15LLU;
uint8_t x438 = UINT8_MAX;
uint16_t x440 = 1766U;
int32_t x444 = 0;
static uint16_t x446 = UINT16_MAX;
int32_t x454 = INT32_MAX;
static uint16_t x456 = UINT16_MAX;
int64_t x458 = INT64_MIN;
volatile int32_t x471 = -1;
static volatile int16_t x474 = -670;
int8_t x475 = 26;
int8_t x480 = INT8_MIN;
uint32_t x485 = UINT32_MAX;
int32_t x487 = -1;
volatile int16_t x494 = INT16_MIN;
static int32_t t123 = -110;
volatile int64_t t124 = -105767362LL;
int8_t x501 = 0;
volatile uint16_t x508 = 208U;
volatile int64_t t127 = INT64_MAX;
int16_t x518 = INT16_MIN;
uint64_t x530 = 1614084672889571LLU;
static int16_t x536 = INT16_MAX;
static int8_t x541 = -1;
uint64_t x542 = UINT64_MAX;
static uint16_t x548 = 0U;
int32_t t136 = 24188576;
uint8_t x550 = 29U;
uint32_t x554 = 29U;
int32_t t139 = -8236343;
uint32_t x564 = 432175681U;
int32_t t140 = 27;
int16_t x565 = -45;
volatile int16_t x571 = INT16_MIN;
int8_t x573 = 57;
static volatile uint16_t x574 = UINT16_MAX;
volatile uint32_t x580 = 451U;
int32_t t145 = 2919;
uint8_t x587 = UINT8_MAX;
volatile int64_t t147 = INT64_MAX;
static uint64_t x611 = 782768282542580622LLU;
volatile int16_t x613 = INT16_MIN;
int8_t x619 = INT8_MIN;
volatile int32_t t154 = 86486131;
static uint8_t x624 = UINT8_MAX;
static int64_t t156 = 1LL;
int16_t x637 = INT16_MIN;
static int32_t t158 = 312160;
static uint16_t x645 = 1933U;
static int8_t x647 = INT8_MIN;
volatile int8_t x649 = INT8_MIN;
int64_t x661 = INT64_MIN;
uint64_t x665 = UINT64_MAX;
int64_t x673 = -1LL;
int64_t x674 = INT64_MAX;
int8_t x676 = 3;
volatile int64_t x677 = INT64_MAX;
int32_t x678 = INT32_MIN;
int32_t x679 = INT32_MAX;
int32_t x680 = INT32_MAX;
volatile int64_t t168 = INT64_MAX;
int32_t t169 = 227180033;
int16_t x686 = 15127;
static volatile int64_t x688 = INT64_MIN;
volatile int8_t x691 = -5;
int8_t x694 = 1;
uint8_t x704 = UINT8_MAX;
int64_t t174 = INT64_MIN;
uint16_t x711 = 32U;
int8_t x715 = -1;
int16_t x718 = -5355;
uint16_t x719 = 623U;
int64_t x720 = INT64_MIN;
static int64_t x722 = INT64_MIN;
volatile int8_t x727 = 1;
int32_t t181 = 288580;
int64_t x738 = 46907210483608LL;
volatile int32_t t183 = -418813;
static int16_t x744 = INT16_MAX;
volatile int8_t x745 = INT8_MIN;
int16_t x753 = -1;
volatile int32_t t187 = -10699957;
int32_t x763 = -62;
static int64_t x764 = INT64_MIN;
volatile int32_t t190 = -192;
uint16_t x769 = UINT16_MAX;
volatile int64_t x773 = -1053145997138656775LL;
int16_t x777 = -1;
volatile int8_t x791 = INT8_MAX;
static int32_t x794 = INT32_MAX;
int32_t t197 = 22865949;
volatile uint32_t x797 = UINT32_MAX;
int8_t x799 = INT8_MIN;
uint32_t t198 = UINT32_MAX;
volatile uint8_t x801 = 1U;
int64_t x802 = -1LL;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	static volatile int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	int32_t t0 = INT32_MAX;

    t0 = (x1-((x2==x3)==x4));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -1;
	static int16_t x8 = -1;
	volatile int32_t t1 = 7030205;

    t1 = (x5-((x6==x7)==x8));

    if (t1 != 14245) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = 0;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -326704;

    t2 = (x9-((x10==x11)==x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -4580267;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 0;
	uint64_t t3 = 54LLU;

    t3 = (x13-((x14==x15)==x16));

    if (t3 != 1152604719LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -2078;
	int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	volatile uint16_t x20 = 158U;
	int32_t t4 = -169578402;

    t4 = (x17-((x18==x19)==x20));

    if (t4 != -2078) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 3370U;
	volatile int32_t x22 = 16728545;
	volatile uint8_t x23 = 24U;
	int8_t x24 = -1;
	volatile int32_t t5 = 0;

    t5 = (x21-((x22==x23)==x24));

    if (t5 != 3370) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;

    t6 = (x25-((x26==x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int16_t x31 = -1;
	int32_t x32 = 1;
	static volatile int32_t t7 = 7002;

    t7 = (x29-((x30==x31)==x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 7528U;
	int32_t t8 = -95112;

    t8 = (x33-((x34==x35)==x36));

    if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -517;
	uint8_t x39 = 1U;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 62;

    t9 = (x37-((x38==x39)==x40));

    if (t9 != -517) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 1851LLU;
	volatile uint32_t x42 = UINT32_MAX;
	uint64_t x44 = 547804775LLU;

    t10 = (x41-((x42==x43)==x44));

    if (t10 != 1851LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	uint32_t x47 = 1534147109U;
	int16_t x48 = 179;
	static volatile int32_t t11 = 866930;

    t11 = (x45-((x46==x47)==x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 2U;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;
	volatile uint32_t t12 = 202116041U;

    t12 = (x49-((x50==x51)==x52));

    if (t12 != 2U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	static uint64_t x54 = 1213257LLU;
	static volatile int64_t x55 = INT64_MAX;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = 0;

    t13 = (x53-((x54==x55)==x56));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 910580920964336LLU;
	volatile int32_t t14 = -105;

    t14 = (x57-((x58==x59)==x60));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = 13121;
	int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MAX;
	static volatile int16_t x64 = INT16_MAX;

    t15 = (x61-((x62==x63)==x64));

    if (t15 != 13121) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = 1LL;
	uint8_t x68 = 1U;
	int32_t t16 = -65513651;

    t16 = (x65-((x66==x67)==x68));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = 41782036204LL;

    t17 = (x69-((x70==x71)==x72));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 934230519U;
	int8_t x74 = 4;
	int64_t x75 = INT64_MIN;

    t18 = (x73-((x74==x75)==x76));

    if (t18 != 934230519U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x78 = INT32_MIN;
	volatile uint16_t x79 = 1U;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 2;

    t19 = (x77-((x78==x79)==x80));

    if (t19 != -12) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -1;

    t20 = (x81-((x82==x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = 32;
	int8_t x86 = INT8_MAX;
	int32_t t21 = -392995786;

    t21 = (x85-((x86==x87)==x88));

    if (t21 != 32) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -7923;
	static int64_t x90 = -1037215340906316743LL;
	int16_t x91 = INT16_MIN;
	int8_t x92 = -19;
	volatile int32_t t22 = 60266240;

    t22 = (x89-((x90==x91)==x92));

    if (t22 != -7923) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x94 = INT32_MIN;
	uint16_t x95 = 2U;
	uint8_t x96 = UINT8_MAX;

    t23 = (x93-((x94==x95)==x96));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MAX;
	uint8_t x100 = 16U;

    t24 = (x97-((x98==x99)==x100));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 0U;
	int8_t x104 = INT8_MIN;
	static int32_t t25 = -1053654;

    t25 = (x101-((x102==x103)==x104));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = 105;
	uint8_t x106 = 28U;
	volatile uint16_t x107 = 17U;
	static uint16_t x108 = 12041U;
	int32_t t26 = 63575;

    t26 = (x105-((x106==x107)==x108));

    if (t26 != 105) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MIN;
	static uint16_t x111 = 170U;

    t27 = (x109-((x110==x111)==x112));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 0U;
	uint64_t x114 = 59595915031924LLU;
	uint64_t x115 = 105517829LLU;
	volatile int64_t x116 = -81LL;
	volatile int32_t t28 = -42836129;

    t28 = (x113-((x114==x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 44U;
	int32_t x118 = INT32_MAX;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -1;
	volatile int32_t t29 = 4046679;

    t29 = (x117-((x118==x119)==x120));

    if (t29 != 44) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	int16_t x123 = INT16_MIN;
	int16_t x124 = -1;
	static volatile int64_t t30 = -123581260057LL;

    t30 = (x121-((x122==x123)==x124));

    if (t30 != -850868LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 49U;
	static volatile uint8_t x126 = UINT8_MAX;
	static volatile int32_t x127 = INT32_MIN;
	volatile int64_t x128 = 85865762194049827LL;
	static int32_t t31 = -15339678;

    t31 = (x125-((x126==x127)==x128));

    if (t31 != 49) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = 3U;
	volatile int8_t x131 = -1;
	static int32_t t32 = -55195032;

    t32 = (x129-((x130==x131)==x132));

    if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 116;
	volatile uint8_t x134 = 68U;
	int64_t x135 = -1LL;

    t33 = (x133-((x134==x135)==x136));

    if (t33 != 116) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -178;
	static uint32_t x138 = 7783U;
	int8_t x139 = -1;
	static int16_t x140 = -1;
	int32_t t34 = -222138;

    t34 = (x137-((x138==x139)==x140));

    if (t34 != -178) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int16_t x142 = -1;
	static int32_t x144 = INT32_MAX;
	int64_t t35 = 924LL;

    t35 = (x141-((x142==x143)==x144));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x147 = INT8_MAX;
	static volatile int64_t x148 = 16667LL;
	int32_t t36 = 1189;

    t36 = (x145-((x146==x147)==x148));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	static volatile int16_t x150 = -4;
	int32_t t37 = -1;

    t37 = (x149-((x150==x151)==x152));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = 736025LL;
	int16_t x154 = -1;
	int16_t x155 = 13380;
	int8_t x156 = INT8_MIN;
	int64_t t38 = 6096950280623370LL;

    t38 = (x153-((x154==x155)==x156));

    if (t38 != 736025LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = UINT32_MAX;
	int64_t x160 = 222LL;
	volatile int32_t t39 = -14720;

    t39 = (x157-((x158==x159)==x160));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MAX;
	static int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MIN;

    t40 = (x161-((x162==x163)==x164));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 67U;
	static int8_t x167 = 2;
	uint8_t x168 = 2U;
	volatile int32_t t41 = -26;

    t41 = (x165-((x166==x167)==x168));

    if (t41 != 67) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	uint16_t x170 = UINT16_MAX;
	int64_t x171 = INT64_MAX;
	int32_t x172 = INT32_MAX;

    t42 = (x169-((x170==x171)==x172));

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MAX;
	volatile uint8_t x174 = 14U;
	uint8_t x176 = 10U;
	int32_t t43 = INT32_MAX;

    t43 = (x173-((x174==x175)==x176));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 2U;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 16679;

    t44 = (x177-((x178==x179)==x180));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = INT16_MIN;
	volatile int32_t x182 = -172932846;
	int16_t x183 = -1;
	static int32_t x184 = 13246;
	volatile int32_t t45 = 28217;

    t45 = (x181-((x182==x183)==x184));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	uint16_t x186 = 32U;
	volatile int64_t x187 = INT64_MAX;
	int16_t x188 = -3791;
	int32_t t46 = -1006199;

    t46 = (x185-((x186==x187)==x188));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	static uint16_t x190 = 2544U;
	volatile int64_t t47 = INT64_MAX;

    t47 = (x189-((x190==x191)==x192));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x193 = 2767U;
	uint64_t x195 = 10LLU;
	uint32_t x196 = UINT32_MAX;
	static volatile int32_t t48 = 260;

    t48 = (x193-((x194==x195)==x196));

    if (t48 != 2767) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	volatile uint64_t x199 = 353286882013432273LLU;
	int8_t x200 = INT8_MAX;
	volatile int64_t t49 = INT64_MAX;

    t49 = (x197-((x198==x199)==x200));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 21680;
	volatile int16_t x202 = 0;
	static uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 126;

    t50 = (x201-((x202==x203)==x204));

    if (t50 != 21680) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 796LLU;
	uint32_t x206 = 222U;
	uint32_t x207 = UINT32_MAX;
	static int8_t x208 = INT8_MIN;

    t51 = (x205-((x206==x207)==x208));

    if (t51 != 796LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 87U;
	int8_t x210 = -1;
	int64_t x211 = INT64_MAX;

    t52 = (x209-((x210==x211)==x212));

    if (t52 != 87) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	int32_t t53 = 720193574;

    t53 = (x213-((x214==x215)==x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = -1;
	uint64_t x219 = 2LLU;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = 377306571;

    t54 = (x217-((x218==x219)==x220));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	static int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MAX;
	volatile int64_t t55 = 34352149522129080LL;

    t55 = (x221-((x222==x223)==x224));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x226 = 326889809212280310LLU;
	static volatile int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;

    t56 = (x225-((x226==x227)==x228));

    if (t56 != 1014) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	static volatile int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = -5727;
	static int32_t t57 = 6919;

    t57 = (x229-((x230==x231)==x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = 498637661LLU;

    t58 = (x233-((x234==x235)==x236));

    if (t58 != 35864LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -3258231652672LL;
	uint32_t x238 = 257907785U;
	int16_t x239 = -1;
	uint64_t x240 = UINT64_MAX;
	int64_t t59 = -322538342LL;

    t59 = (x237-((x238==x239)==x240));

    if (t59 != -3258231652672LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x243 = UINT64_MAX;
	int16_t x244 = -2748;

    t60 = (x241-((x242==x243)==x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MAX;
	uint32_t x247 = 92823631U;
	volatile int32_t t61 = -1;

    t61 = (x245-((x246==x247)==x248));

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x250 = -41;
	uint64_t x251 = 54090607953LLU;
	static volatile int8_t x252 = -1;
	int64_t t62 = 178LL;

    t62 = (x249-((x250==x251)==x252));

    if (t62 != 880LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x255 = -48288;
	volatile int8_t x256 = INT8_MIN;

    t63 = (x253-((x254==x255)==x256));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 13U;
	int16_t x258 = INT16_MIN;
	static volatile int64_t x259 = -1LL;
	int32_t t64 = -7684593;

    t64 = (x257-((x258==x259)==x260));

    if (t64 != 13) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x261 = 6319U;
	int16_t x262 = INT16_MIN;
	static int16_t x264 = -1;
	static int32_t t65 = -211528;

    t65 = (x261-((x262==x263)==x264));

    if (t65 != 6319) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -175567920LL;
	int64_t x266 = -22994563916814384LL;
	uint64_t x267 = 1970LLU;
	int16_t x268 = INT16_MIN;

    t66 = (x265-((x266==x267)==x268));

    if (t66 != -175567920LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 53U;
	volatile uint32_t x270 = 2U;
	volatile int32_t x271 = 973942;
	volatile uint64_t x272 = 1005370653537LLU;
	int32_t t67 = 3931;

    t67 = (x269-((x270==x271)==x272));

    if (t67 != 53) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t68 = 0;

    t68 = (x273-((x274==x275)==x276));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x277 = 51U;
	static uint64_t x280 = 3785862454150111LLU;
	int32_t t69 = -192799628;

    t69 = (x277-((x278==x279)==x280));

    if (t69 != 51) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = UINT32_MAX;
	uint8_t x284 = UINT8_MAX;

    t70 = (x281-((x282==x283)==x284));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MIN;
	uint16_t x286 = 42U;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;
	int32_t t71 = INT32_MIN;

    t71 = (x285-((x286==x287)==x288));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int32_t x290 = -1;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t72 = INT32_MIN;

    t72 = (x289-((x290==x291)==x292));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	static int16_t x295 = -1;
	int32_t t73 = 769943;

    t73 = (x293-((x294==x295)==x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -5;
	uint32_t x298 = UINT32_MAX;
	uint64_t x300 = 2955665153740LLU;
	static volatile int32_t t74 = -1;

    t74 = (x297-((x298==x299)==x300));

    if (t74 != -5) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	static int32_t x302 = -1;
	volatile int8_t x303 = INT8_MIN;
	int8_t x304 = 0;
	static int32_t t75 = 4743118;

    t75 = (x301-((x302==x303)==x304));

    if (t75 != 254) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x306 = 60340440LLU;
	static volatile int8_t x307 = -7;
	uint8_t x308 = 20U;
	volatile int64_t t76 = 2765472978LL;

    t76 = (x305-((x306==x307)==x308));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 3;
	static uint8_t x310 = 3U;
	static int64_t x311 = -1LL;
	uint16_t x312 = UINT16_MAX;
	int32_t t77 = -1456104;

    t77 = (x309-((x310==x311)==x312));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -983917213844545383LL;
	uint16_t x314 = 0U;
	volatile int16_t x315 = INT16_MAX;
	volatile uint64_t x316 = 14293084551LLU;
	volatile int64_t t78 = 4238984416602238LL;

    t78 = (x313-((x314==x315)==x316));

    if (t78 != -983917213844545383LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = 164533874;
	volatile int16_t x319 = INT16_MIN;
	int64_t x320 = -1LL;
	static int32_t t79 = -872;

    t79 = (x317-((x318==x319)==x320));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = 60041792;
	static int8_t x322 = INT8_MAX;
	int8_t x323 = -1;
	int16_t x324 = -1;
	volatile int32_t t80 = 151;

    t80 = (x321-((x322==x323)==x324));

    if (t80 != 60041792) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -1;
	uint32_t x328 = 980431716U;
	static volatile int64_t t81 = INT64_MAX;

    t81 = (x325-((x326==x327)==x328));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x330 = 2230U;
	int64_t x331 = -22332000972LL;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = (x329-((x330==x331)==x332));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = UINT8_MAX;
	int32_t x335 = -183486871;
	uint64_t x336 = UINT64_MAX;

    t83 = (x333-((x334==x335)==x336));

    if (t83 != -7484900) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	uint64_t x338 = 88110924LLU;
	int64_t x339 = -1LL;
	uint8_t x340 = 12U;
	int32_t t84 = INT32_MIN;

    t84 = (x337-((x338==x339)==x340));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	uint16_t x342 = 22U;
	volatile uint64_t x343 = 1605LLU;
	static volatile int32_t t85 = -592480289;

    t85 = (x341-((x342==x343)==x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x346 = 1U;
	volatile int32_t x347 = 5874;
	uint64_t t86 = 733710956LLU;

    t86 = (x345-((x346==x347)==x348));

    if (t86 != 21887025259LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	static int8_t x351 = -1;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t87 = -989;

    t87 = (x349-((x350==x351)==x352));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MAX;
	static uint8_t x354 = 0U;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -63;

    t88 = (x353-((x354==x355)==x356));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;
	int64_t t89 = INT64_MAX;

    t89 = (x357-((x358==x359)==x360));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = -11;
	static volatile int32_t t90 = 17008610;

    t90 = (x361-((x362==x363)==x364));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = -1LL;
	int16_t x366 = -1;
	static int16_t x367 = INT16_MIN;
	static volatile int64_t x368 = INT64_MIN;
	int64_t t91 = 338744497557877LL;

    t91 = (x365-((x366==x367)==x368));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x371 = -18;
	static int16_t x372 = INT16_MAX;
	int32_t t92 = 2324718;

    t92 = (x369-((x370==x371)==x372));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x373 = 6U;
	volatile uint16_t x374 = 719U;
	int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 0;

    t93 = (x373-((x374==x375)==x376));

    if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x377 = 16U;
	static volatile int8_t x378 = INT8_MIN;
	static int16_t x380 = INT16_MIN;
	static volatile int32_t t94 = -5544189;

    t94 = (x377-((x378==x379)==x380));

    if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	static uint32_t x382 = 16841500U;
	volatile int32_t t95 = INT32_MAX;

    t95 = (x381-((x382==x383)==x384));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	uint16_t x387 = 41U;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 5;

    t96 = (x385-((x386==x387)==x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int16_t x390 = -1;
	static uint32_t x392 = 422056992U;
	int32_t t97 = -190;

    t97 = (x389-((x390==x391)==x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	static int8_t x395 = INT8_MAX;
	static uint16_t x396 = 7U;
	volatile int32_t t98 = 4;

    t98 = (x393-((x394==x395)==x396));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	volatile int16_t x398 = -39;
	int8_t x399 = -22;

    t99 = (x397-((x398==x399)==x400));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = INT16_MIN;
	volatile int16_t x402 = 122;
	static int8_t x403 = 22;
	int16_t x404 = -1;
	static volatile int32_t t100 = -76635025;

    t100 = (x401-((x402==x403)==x404));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	static uint64_t x406 = UINT64_MAX;
	static volatile uint16_t x408 = 467U;
	volatile int64_t t101 = INT64_MIN;

    t101 = (x405-((x406==x407)==x408));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	uint64_t x410 = 5796168464417093253LLU;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int64_t t102 = INT64_MAX;

    t102 = (x409-((x410==x411)==x412));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x414 = INT8_MIN;
	volatile int64_t x415 = 344680979LL;
	int32_t t103 = -7;

    t103 = (x413-((x414==x415)==x416));

    if (t103 != -5357) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x418 = 5331;
	int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;

    t104 = (x417-((x418==x419)==x420));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = 224758309126304991LL;
	int8_t x423 = -1;
	int16_t x424 = INT16_MIN;

    t105 = (x421-((x422==x423)==x424));

    if (t105 != 224758309126304991LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x426 = -6;
	volatile uint64_t x427 = 186001204743LLU;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = -41964;

    t106 = (x425-((x426==x427)==x428));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	int32_t x430 = 0;
	int16_t x431 = INT16_MIN;
	int32_t x432 = -670;
	int64_t t107 = INT64_MAX;

    t107 = (x429-((x430==x431)==x432));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x433 = 177557LLU;
	int16_t x434 = INT16_MIN;

    t108 = (x433-((x434==x435)==x436));

    if (t108 != 177557LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int8_t x439 = 1;
	uint64_t t109 = UINT64_MAX;

    t109 = (x437-((x438==x439)==x440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x442 = 2LL;
	volatile int8_t x443 = INT8_MAX;
	volatile int32_t t110 = 0;

    t110 = (x441-((x442==x443)==x444));

    if (t110 != -129) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 20748U;
	int32_t x447 = -849237862;
	uint8_t x448 = 24U;
	int32_t t111 = 0;

    t111 = (x445-((x446==x447)==x448));

    if (t111 != 20748) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = -1;
	uint16_t x450 = 444U;
	volatile int64_t x451 = -1LL;
	uint8_t x452 = 34U;
	volatile int32_t t112 = -7633;

    t112 = (x449-((x450==x451)==x452));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int32_t x455 = INT32_MIN;
	static int64_t t113 = -4LL;

    t113 = (x453-((x454==x455)==x456));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -424479LL;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 7531508473245161610LLU;
	int64_t t114 = -422131907773LL;

    t114 = (x457-((x458==x459)==x460));

    if (t114 != -424479LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MIN;
	uint8_t x462 = 3U;
	int8_t x463 = 0;
	int32_t x464 = 14851;
	int32_t t115 = 221817;

    t115 = (x461-((x462==x463)==x464));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int64_t x466 = INT64_MAX;
	int32_t x467 = -15;
	volatile int16_t x468 = INT16_MAX;
	volatile int32_t t116 = -7;

    t116 = (x465-((x466==x467)==x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = INT8_MIN;
	volatile int64_t x470 = INT64_MAX;
	static volatile int64_t x472 = INT64_MIN;
	static volatile int32_t t117 = -2900016;

    t117 = (x469-((x470==x471)==x472));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	static uint32_t x476 = UINT32_MAX;
	int32_t t118 = -119503695;

    t118 = (x473-((x474==x475)==x476));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = 52399991878137878LLU;
	int32_t x478 = INT32_MIN;
	static volatile uint8_t x479 = 2U;
	volatile uint64_t t119 = 5381517075LLU;

    t119 = (x477-((x478==x479)==x480));

    if (t119 != 52399991878137878LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	volatile int32_t x482 = INT32_MIN;
	uint16_t x483 = 96U;
	int32_t x484 = -1;
	volatile int32_t t120 = INT32_MAX;

    t120 = (x481-((x482==x483)==x484));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x486 = 31U;
	static uint32_t x488 = 501189776U;
	uint32_t t121 = UINT32_MAX;

    t121 = (x485-((x486==x487)==x488));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	static uint16_t x490 = UINT16_MAX;
	int8_t x491 = 1;
	static volatile int8_t x492 = -1;
	volatile int32_t t122 = 60456;

    t122 = (x489-((x490==x491)==x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	int64_t x495 = -1LL;
	static int32_t x496 = -149;

    t123 = (x493-((x494==x495)==x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	uint64_t x498 = 689LLU;
	int64_t x499 = INT64_MAX;
	int8_t x500 = -2;

    t124 = (x497-((x498==x499)==x500));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x502 = INT32_MIN;
	uint16_t x503 = 56U;
	uint8_t x504 = 9U;
	int32_t t125 = 1226032;

    t125 = (x501-((x502==x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MAX;
	volatile int8_t x506 = 6;
	static int16_t x507 = -1;
	volatile int64_t t126 = INT64_MAX;

    t126 = (x505-((x506==x507)==x508));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MAX;
	uint16_t x510 = 5025U;
	int16_t x511 = 124;
	uint64_t x512 = UINT64_MAX;

    t127 = (x509-((x510==x511)==x512));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	static uint16_t x514 = UINT16_MAX;
	uint32_t x515 = UINT32_MAX;
	int16_t x516 = INT16_MIN;
	int32_t t128 = -2034157;

    t128 = (x513-((x514==x515)==x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x517 = 1693314;
	int16_t x519 = INT16_MIN;
	volatile uint64_t x520 = UINT64_MAX;
	int32_t t129 = -236;

    t129 = (x517-((x518==x519)==x520));

    if (t129 != 1693314) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	static int16_t x522 = INT16_MIN;
	uint64_t x523 = 828071115511434775LLU;
	uint64_t x524 = UINT64_MAX;
	volatile int32_t t130 = 145884144;

    t130 = (x521-((x522==x523)==x524));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = UINT32_MAX;
	int64_t x526 = 4500069LL;
	static volatile int8_t x527 = INT8_MAX;
	int32_t x528 = -107002;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = (x525-((x526==x527)==x528));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	int32_t x531 = -1;
	int32_t x532 = 16551733;
	int32_t t132 = -1643423;

    t132 = (x529-((x530==x531)==x532));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MIN;
	uint16_t x535 = UINT16_MAX;
	int32_t t133 = INT32_MIN;

    t133 = (x533-((x534==x535)==x536));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	uint8_t x538 = 2U;
	int8_t x539 = -1;
	volatile uint64_t x540 = 2064370115304225033LLU;
	volatile int32_t t134 = INT32_MIN;

    t134 = (x537-((x538==x539)==x540));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x543 = INT64_MIN;
	int16_t x544 = INT16_MAX;
	volatile int32_t t135 = 23655588;

    t135 = (x541-((x542==x543)==x544));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x545 = INT32_MAX;
	int64_t x546 = -1LL;
	int32_t x547 = INT32_MIN;

    t136 = (x545-((x546==x547)==x548));

    if (t136 != 2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	volatile int64_t x551 = -1LL;
	int64_t x552 = -5310775690LL;
	static int64_t t137 = INT64_MIN;

    t137 = (x549-((x550==x551)==x552));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = 23;
	static uint8_t x555 = 15U;
	static uint64_t x556 = 15662LLU;
	int32_t t138 = -51180197;

    t138 = (x553-((x554==x555)==x556));

    if (t138 != 23) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 29815U;
	static uint16_t x558 = UINT16_MAX;
	int16_t x559 = -1;
	int64_t x560 = -266070440276LL;

    t139 = (x557-((x558==x559)==x560));

    if (t139 != 29815) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	int64_t x562 = -1LL;
	static volatile uint64_t x563 = 1093007811958653LLU;

    t140 = (x561-((x562==x563)==x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = INT64_MIN;
	volatile int32_t x567 = 42;
	int8_t x568 = INT8_MIN;
	int32_t t141 = -11942;

    t141 = (x565-((x566==x567)==x568));

    if (t141 != -45) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 23LLU;
	static uint8_t x570 = 6U;
	uint32_t x572 = UINT32_MAX;
	uint64_t t142 = 57786349LLU;

    t142 = (x569-((x570==x571)==x572));

    if (t142 != 23LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x575 = INT8_MAX;
	static volatile int64_t x576 = -1LL;
	int32_t t143 = 77165955;

    t143 = (x573-((x574==x575)==x576));

    if (t143 != 57) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = -1;
	int64_t x578 = INT64_MAX;
	static volatile uint32_t x579 = 5606U;
	int32_t t144 = -1518113;

    t144 = (x577-((x578==x579)==x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x581 = 8U;
	int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MAX;

    t145 = (x581-((x582==x583)==x584));

    if (t145 != 8) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 6U;
	volatile int8_t x586 = -57;
	volatile uint8_t x588 = 1U;
	int32_t t146 = 91162953;

    t146 = (x585-((x586==x587)==x588));

    if (t146 != 6) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x589 = INT64_MAX;
	int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MAX;
	int8_t x592 = 2;

    t147 = (x589-((x590==x591)==x592));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int64_t x594 = INT64_MIN;
	uint32_t x595 = UINT32_MAX;
	int8_t x596 = -1;
	volatile int32_t t148 = -6501;

    t148 = (x593-((x594==x595)==x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MAX;
	int16_t x598 = -753;
	int64_t x599 = 1415773073LL;
	uint8_t x600 = 15U;
	int64_t t149 = INT64_MAX;

    t149 = (x597-((x598==x599)==x600));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 142848135U;
	uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MIN;
	int16_t x604 = -8;
	uint32_t t150 = 1037982575U;

    t150 = (x601-((x602==x603)==x604));

    if (t150 != 142848135U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	uint16_t x606 = 0U;
	int16_t x607 = INT16_MAX;
	int16_t x608 = INT16_MAX;
	static volatile int32_t t151 = INT32_MAX;

    t151 = (x605-((x606==x607)==x608));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	static volatile int64_t x610 = INT64_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t152 = -3185079;

    t152 = (x609-((x610==x611)==x612));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = -309;
	static int32_t x615 = INT32_MAX;
	int64_t x616 = INT64_MIN;
	int32_t t153 = -30931;

    t153 = (x613-((x614==x615)==x616));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x617 = 1U;
	volatile int32_t x618 = INT32_MIN;
	static int8_t x620 = INT8_MAX;

    t154 = (x617-((x618==x619)==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 0U;
	uint16_t x622 = UINT16_MAX;
	uint8_t x623 = 6U;
	int32_t t155 = -17;

    t155 = (x621-((x622==x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	uint64_t x626 = 24945LLU;
	int16_t x627 = -1;
	int8_t x628 = -1;

    t156 = (x625-((x626==x627)==x628));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = INT8_MIN;
	uint8_t x634 = 81U;
	static int32_t x635 = -14;
	int8_t x636 = INT8_MIN;
	volatile int32_t t157 = 3526;

    t157 = (x633-((x634==x635)==x636));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x638 = INT64_MIN;
	uint32_t x639 = UINT32_MAX;
	static int32_t x640 = 6744;

    t158 = (x637-((x638==x639)==x640));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x641 = -1;
	int32_t x642 = -64221;
	volatile uint32_t x643 = 65600245U;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t159 = -218750;

    t159 = (x641-((x642==x643)==x644));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x646 = INT64_MAX;
	uint64_t x648 = UINT64_MAX;
	static volatile int32_t t160 = 7875190;

    t160 = (x645-((x646==x647)==x648));

    if (t160 != 1933) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x650 = INT16_MIN;
	int8_t x651 = -4;
	int32_t x652 = INT32_MAX;
	static volatile int32_t t161 = -863477;

    t161 = (x649-((x650==x651)==x652));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x653 = UINT16_MAX;
	volatile int32_t x654 = 849150019;
	uint8_t x655 = UINT8_MAX;
	static int16_t x656 = INT16_MIN;
	static int32_t t162 = -1;

    t162 = (x653-((x654==x655)==x656));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x657 = INT64_MIN;
	uint16_t x658 = 14152U;
	static uint32_t x659 = 1328999960U;
	int64_t x660 = -20552466LL;
	static volatile int64_t t163 = INT64_MIN;

    t163 = (x657-((x658==x659)==x660));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x662 = -1LL;
	volatile int64_t x663 = -111096722187LL;
	uint32_t x664 = 289U;
	volatile int64_t t164 = INT64_MIN;

    t164 = (x661-((x662==x663)==x664));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x666 = -122;
	static int32_t x667 = -1;
	int32_t x668 = 489713448;
	uint64_t t165 = UINT64_MAX;

    t165 = (x665-((x666==x667)==x668));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x669 = INT64_MAX;
	uint32_t x670 = 73130304U;
	int32_t x671 = -1;
	int16_t x672 = INT16_MIN;
	int64_t t166 = INT64_MAX;

    t166 = (x669-((x670==x671)==x672));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x675 = 22U;
	int64_t t167 = -155522606556760LL;

    t167 = (x673-((x674==x675)==x676));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    

    t168 = (x677-((x678==x679)==x680));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x681 = INT16_MAX;
	int16_t x682 = INT16_MIN;
	int8_t x683 = INT8_MIN;
	static volatile int32_t x684 = INT32_MIN;

    t169 = (x681-((x682==x683)==x684));

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x685 = INT8_MAX;
	uint32_t x687 = 123903U;
	volatile int32_t t170 = 118;

    t170 = (x685-((x686==x687)==x688));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x689 = 364U;
	int32_t x690 = INT32_MIN;
	volatile int64_t x692 = -1LL;
	int32_t t171 = 67;

    t171 = (x689-((x690==x691)==x692));

    if (t171 != 364) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x693 = INT64_MAX;
	static volatile int64_t x695 = INT64_MIN;
	uint64_t x696 = 5150567150LLU;
	int64_t t172 = INT64_MAX;

    t172 = (x693-((x694==x695)==x696));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x697 = INT64_MIN;
	static uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MIN;
	static volatile int8_t x700 = INT8_MIN;
	static volatile int64_t t173 = INT64_MIN;

    t173 = (x697-((x698==x699)==x700));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x701 = INT64_MIN;
	volatile uint64_t x702 = 27965511682739LLU;
	int8_t x703 = -50;

    t174 = (x701-((x702==x703)==x704));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x706 = 22U;
	uint16_t x707 = 2888U;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t175 = -27130;

    t175 = (x705-((x706==x707)==x708));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x709 = 121612771;
	int8_t x710 = INT8_MAX;
	uint8_t x712 = UINT8_MAX;
	int32_t t176 = 4136944;

    t176 = (x709-((x710==x711)==x712));

    if (t176 != 121612771) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x713 = 55;
	int8_t x714 = -1;
	static int64_t x716 = INT64_MAX;
	volatile int32_t t177 = -267;

    t177 = (x713-((x714==x715)==x716));

    if (t177 != 55) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x717 = UINT16_MAX;
	int32_t t178 = -1;

    t178 = (x717-((x718==x719)==x720));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x721 = -1LL;
	volatile int64_t x723 = INT64_MIN;
	int32_t x724 = 232;
	volatile int64_t t179 = -3LL;

    t179 = (x721-((x722==x723)==x724));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x725 = INT8_MAX;
	uint64_t x726 = 19733454LLU;
	int32_t x728 = -27;
	volatile int32_t t180 = 957218930;

    t180 = (x725-((x726==x727)==x728));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x729 = 43;
	int32_t x730 = INT32_MIN;
	int16_t x731 = -1;
	int16_t x732 = 1;

    t181 = (x729-((x730==x731)==x732));

    if (t181 != 43) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x733 = INT8_MAX;
	int8_t x734 = INT8_MIN;
	int16_t x735 = -1;
	int32_t x736 = 491187763;
	volatile int32_t t182 = 40669;

    t182 = (x733-((x734==x735)==x736));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x737 = 0;
	int8_t x739 = -1;
	uint64_t x740 = 2LLU;

    t183 = (x737-((x738==x739)==x740));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x741 = 5U;
	volatile uint64_t x742 = 26801139LLU;
	int8_t x743 = -1;
	volatile int32_t t184 = -501365358;

    t184 = (x741-((x742==x743)==x744));

    if (t184 != 5) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x746 = UINT8_MAX;
	int32_t x747 = 1961340;
	int16_t x748 = -1386;
	int32_t t185 = 30606;

    t185 = (x745-((x746==x747)==x748));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x749 = 6474LLU;
	int8_t x750 = -1;
	int64_t x751 = INT64_MAX;
	uint32_t x752 = 4738U;
	volatile uint64_t t186 = 1772940452LLU;

    t186 = (x749-((x750==x751)==x752));

    if (t186 != 6474LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x754 = 497U;
	volatile int32_t x755 = -205244057;
	static uint16_t x756 = 22U;

    t187 = (x753-((x754==x755)==x756));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x757 = 32;
	int32_t x758 = INT32_MIN;
	int8_t x759 = 0;
	static volatile uint8_t x760 = 4U;
	int32_t t188 = -607210963;

    t188 = (x757-((x758==x759)==x760));

    if (t188 != 32) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x761 = 100;
	int32_t x762 = -486913;
	static int32_t t189 = 0;

    t189 = (x761-((x762==x763)==x764));

    if (t189 != 100) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	static volatile uint8_t x766 = 1U;
	uint32_t x767 = 37U;
	static int16_t x768 = 20;

    t190 = (x765-((x766==x767)==x768));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x770 = 9U;
	uint64_t x771 = 42916887207116LLU;
	volatile int16_t x772 = INT16_MIN;
	int32_t t191 = -23044;

    t191 = (x769-((x770==x771)==x772));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x774 = -1LL;
	uint32_t x775 = UINT32_MAX;
	int32_t x776 = 1262411;
	int64_t t192 = -26665773218LL;

    t192 = (x773-((x774==x775)==x776));

    if (t192 != -1053145997138656775LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MIN;
	int16_t x780 = 31;
	static volatile int32_t t193 = 0;

    t193 = (x777-((x778==x779)==x780));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x781 = 156556532432723350LLU;
	int64_t x782 = INT64_MIN;
	volatile int64_t x783 = 565LL;
	int16_t x784 = INT16_MIN;
	uint64_t t194 = 158LLU;

    t194 = (x781-((x782==x783)==x784));

    if (t194 != 156556532432723350LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x785 = 1;
	static volatile uint32_t x786 = 34003U;
	int64_t x787 = INT64_MAX;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t195 = -17;

    t195 = (x785-((x786==x787)==x788));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x789 = INT64_MIN;
	volatile int32_t x790 = INT32_MAX;
	int8_t x792 = INT8_MAX;
	volatile int64_t t196 = INT64_MIN;

    t196 = (x789-((x790==x791)==x792));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x793 = INT8_MAX;
	volatile uint32_t x795 = 680941911U;
	uint8_t x796 = 6U;

    t197 = (x793-((x794==x795)==x796));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x798 = UINT16_MAX;
	volatile int64_t x800 = INT64_MIN;

    t198 = (x797-((x798==x799)==x800));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x803 = -1;
	int8_t x804 = INT8_MIN;
	static volatile int32_t t199 = 129089;

    t199 = (x801-((x802==x803)==x804));

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

