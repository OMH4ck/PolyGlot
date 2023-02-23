
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

volatile uint16_t x1 = UINT16_MAX;
int64_t x5 = INT64_MIN;
uint64_t x6 = UINT64_MAX;
uint64_t x13 = 1077703829LLU;
uint64_t x18 = 6112826014277861LLU;
volatile uint8_t x27 = UINT8_MAX;
uint32_t x32 = 4U;
int16_t x33 = INT16_MAX;
int64_t x35 = INT64_MIN;
uint8_t x51 = 7U;
int64_t x55 = 66582710063585LL;
volatile int32_t x56 = -10938760;
int32_t t13 = -4;
int16_t x65 = INT16_MIN;
static volatile int32_t t16 = 0;
int32_t t18 = 1;
static int64_t x96 = 0LL;
uint32_t x103 = UINT32_MAX;
static volatile int32_t t24 = 221117;
int64_t x106 = INT64_MIN;
uint16_t x115 = 0U;
static int8_t x119 = -1;
static volatile int32_t t29 = -1507572;
uint8_t x125 = 13U;
static int64_t x136 = INT64_MAX;
uint8_t x140 = UINT8_MAX;
int64_t x149 = INT64_MIN;
static volatile int16_t x151 = INT16_MAX;
static volatile int32_t t34 = 2817432;
int32_t t35 = 0;
volatile int8_t x158 = 60;
volatile int32_t t36 = 41;
static int32_t x164 = INT32_MAX;
static volatile int32_t x167 = -829;
int8_t x174 = INT8_MIN;
int64_t x185 = INT64_MIN;
int16_t x187 = INT16_MAX;
volatile int32_t t42 = 29;
static volatile uint32_t x197 = 93U;
static int32_t x198 = -1;
int64_t x199 = INT64_MIN;
static int8_t x210 = 9;
int64_t x211 = -2453764LL;
int64_t x227 = INT64_MIN;
uint16_t x238 = 2403U;
volatile int32_t t53 = -242;
int8_t x246 = INT8_MIN;
volatile uint8_t x247 = 27U;
int64_t x250 = INT64_MIN;
int32_t t56 = -922;
int8_t x259 = -1;
static volatile int32_t x267 = -1873;
uint32_t x270 = 460966289U;
static volatile int32_t t62 = -837040;
int16_t x282 = INT16_MAX;
volatile uint16_t x296 = 4384U;
volatile int16_t x299 = INT16_MIN;
int8_t x306 = INT8_MIN;
int8_t x311 = INT8_MAX;
int8_t x337 = INT8_MIN;
uint32_t x340 = UINT32_MAX;
volatile int32_t t77 = 1000013057;
int32_t x342 = 812705;
volatile int32_t x347 = -1;
uint64_t x348 = 10113LLU;
int64_t x350 = INT64_MAX;
int32_t t80 = -95918;
uint8_t x359 = UINT8_MAX;
static int8_t x366 = -1;
int8_t x369 = -1;
int64_t x390 = -1827299758758647LL;
int64_t x396 = -7LL;
static int64_t x398 = INT64_MAX;
int32_t t91 = 6594231;
static uint32_t x403 = UINT32_MAX;
volatile int32_t t92 = 1026347;
int16_t x412 = 1;
volatile uint8_t x415 = UINT8_MAX;
int8_t x418 = -27;
static int64_t x422 = INT64_MIN;
volatile int64_t x423 = -1637872756491683LL;
uint16_t x428 = 276U;
int64_t x437 = INT64_MIN;
int64_t x438 = -1LL;
static int16_t x448 = -1;
volatile int32_t x458 = 1604;
int32_t x459 = INT32_MIN;
int8_t x460 = -1;
int32_t t105 = 2133482;
static int64_t x469 = INT64_MAX;
uint32_t x473 = UINT32_MAX;
uint16_t x483 = UINT16_MAX;
volatile uint64_t x488 = 5247LLU;
int32_t t111 = 1352;
uint8_t x494 = UINT8_MAX;
volatile uint8_t x495 = 10U;
static volatile uint64_t x503 = 4062077LLU;
int16_t x504 = INT16_MIN;
static volatile int32_t t116 = -496528;
int32_t x521 = 3945906;
int64_t x522 = -1018415809069LL;
static volatile int32_t t117 = -53;
volatile int32_t t119 = 269435;
static uint8_t x539 = 2U;
static int8_t x547 = -1;
int32_t x553 = INT32_MAX;
uint16_t x555 = UINT16_MAX;
int32_t t124 = -205945285;
uint16_t x558 = 92U;
volatile int32_t t125 = 38;
int64_t x561 = INT64_MAX;
int16_t x562 = -1;
static volatile int32_t t127 = 36;
static uint16_t x584 = UINT16_MAX;
int16_t x585 = INT16_MIN;
int32_t t130 = -111242;
volatile uint32_t x590 = 704710104U;
uint64_t x591 = 2LLU;
int16_t x603 = INT16_MAX;
volatile int32_t t134 = 28661;
static int64_t x613 = INT64_MIN;
uint16_t x628 = 530U;
int16_t x636 = INT16_MAX;
int8_t x639 = -1;
static int32_t t145 = 3023252;
int16_t x649 = INT16_MAX;
static int16_t x650 = INT16_MAX;
static volatile int32_t t146 = -1958;
int8_t x653 = -4;
int8_t x663 = -1;
static uint64_t x665 = 175300LLU;
uint8_t x669 = 105U;
int64_t x670 = INT64_MIN;
static int32_t t150 = 0;
volatile int8_t x677 = -9;
int32_t x678 = INT32_MAX;
int32_t x688 = -1;
uint8_t x689 = 2U;
volatile int8_t x692 = INT8_MIN;
uint8_t x702 = 0U;
uint64_t x705 = 17409696581838LLU;
int8_t x710 = 31;
volatile int64_t x712 = -303LL;
static int64_t x717 = 57885698070988LL;
volatile uint16_t x723 = 6563U;
volatile uint64_t x725 = 3692272799349LLU;
int16_t x733 = -1;
static volatile int32_t t166 = 3256902;
volatile int64_t x743 = -917925LL;
uint32_t x746 = UINT32_MAX;
int32_t t170 = 4;
int8_t x757 = -1;
volatile int32_t t171 = 367822002;
static int64_t x769 = INT64_MIN;
volatile int32_t t174 = -67843;
uint8_t x773 = UINT8_MAX;
int32_t t177 = 200549;
int16_t x791 = INT16_MIN;
static int32_t t179 = 19086127;
int64_t x801 = 529281698815LL;
static uint64_t x802 = 62509985890LLU;
int16_t x803 = 1341;
int8_t x811 = INT8_MAX;
int8_t x813 = 15;
int32_t t183 = 214972484;
int64_t x817 = -1LL;
int32_t t184 = 253694418;
int16_t x827 = 1;
int32_t t188 = 3789247;
int8_t x840 = -11;
int32_t x846 = -467;
uint32_t x847 = 0U;
int16_t x853 = 22;
uint32_t x857 = 1185525842U;
int32_t x859 = INT32_MIN;
int32_t x882 = INT32_MIN;


void f0(void) {
    	uint16_t x2 = 2082U;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 231246813;

    t0 = (x1!=((x2==x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	int32_t x8 = INT32_MAX;
	static int32_t t1 = -12565769;

    t1 = (x5!=((x6==x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 50;
	int64_t x10 = INT64_MAX;
	static int16_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 274578;

    t2 = (x9!=((x10==x11)-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	volatile uint32_t x15 = 6U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -1;

    t3 = (x13!=((x14==x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 520376590178786LLU;
	volatile int32_t x19 = INT32_MAX;
	static volatile uint32_t x20 = 9732U;
	static int32_t t4 = 51356;

    t4 = (x17!=((x18==x19)-x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	int8_t x22 = INT8_MIN;
	volatile uint16_t x23 = 6822U;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -47799;

    t5 = (x21!=((x22==x23)-x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -4LL;
	uint32_t x26 = 22U;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t6 = 2;

    t6 = (x25!=((x26==x27)-x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 203U;
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MIN;
	int32_t t7 = -31;

    t7 = (x29!=((x30==x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -50;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -1807227;

    t8 = (x33!=((x34==x35)-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -10;
	static uint8_t x38 = UINT8_MAX;
	static int8_t x39 = INT8_MIN;
	static int16_t x40 = 1;
	int32_t t9 = 3;

    t9 = (x37!=((x38==x39)-x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -871872;
	int64_t x42 = -1LL;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 136961U;
	static volatile int32_t t10 = -960392;

    t10 = (x41!=((x42==x43)-x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = -1;
	static uint64_t x47 = 267659821079117LLU;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -1;

    t11 = (x45!=((x46==x47)-x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 50U;
	int16_t x50 = INT16_MIN;
	int32_t x52 = 41193958;
	int32_t t12 = -156439117;

    t12 = (x49!=((x50==x51)-x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	static uint8_t x54 = 40U;

    t13 = (x53!=((x54==x55)-x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 1U;
	volatile int32_t x59 = INT32_MIN;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 15428;

    t14 = (x57!=((x58==x59)-x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 2049233U;
	int8_t x62 = -18;
	uint64_t x63 = 1LLU;
	uint32_t x64 = 663616334U;
	volatile int32_t t15 = 10369;

    t15 = (x61!=((x62==x63)-x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 54694048000748LLU;
	static uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MAX;

    t16 = (x65!=((x66==x67)-x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = 0;

    t17 = (x69!=((x70==x71)-x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	int32_t x74 = INT32_MAX;
	int32_t x75 = -478123807;
	int16_t x76 = INT16_MIN;

    t18 = (x73!=((x74==x75)-x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	static uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MAX;
	uint16_t x80 = 421U;
	int32_t t19 = 1297653;

    t19 = (x77!=((x78==x79)-x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 36;
	static int16_t x82 = -1;
	int64_t x83 = 29421086LL;
	uint32_t x84 = 26U;
	int32_t t20 = -5028531;

    t20 = (x81!=((x82==x83)-x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 0U;
	int16_t x86 = -1;
	static volatile uint64_t x87 = 4718328837LLU;
	uint32_t x88 = 78U;
	volatile int32_t t21 = -62619075;

    t21 = (x85!=((x86==x87)-x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	static int16_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 146605;

    t22 = (x89!=((x90==x91)-x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	static int8_t x94 = -1;
	int8_t x95 = -1;
	volatile int32_t t23 = -2168143;

    t23 = (x93!=((x94==x95)-x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile int32_t x102 = INT32_MIN;
	int16_t x104 = -6810;

    t24 = (x101!=((x102==x103)-x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	static int8_t x108 = INT8_MIN;
	int32_t t25 = -389;

    t25 = (x105!=((x106==x107)-x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = 16661870;
	static int32_t x110 = 20522;
	uint32_t x111 = 1000U;
	int8_t x112 = 5;
	volatile int32_t t26 = 351011671;

    t26 = (x109!=((x110==x111)-x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = 16363;
	static uint32_t x114 = 917634U;
	int64_t x116 = INT64_MAX;
	static int32_t t27 = 412665491;

    t27 = (x113!=((x114==x115)-x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = -133;

    t28 = (x117!=((x118==x119)-x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = 23480017LL;
	static int32_t x122 = -1;
	static volatile int64_t x123 = -1LL;
	static uint64_t x124 = UINT64_MAX;

    t29 = (x121!=((x122==x123)-x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x126 = INT8_MAX;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t30 = -15;

    t30 = (x125!=((x126==x127)-x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 14U;
	static uint64_t x134 = 737924019310128347LLU;
	uint32_t x135 = 13406U;
	volatile int32_t t31 = 11566215;

    t31 = (x133!=((x134==x135)-x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = 2;
	uint8_t x138 = 1U;
	uint16_t x139 = UINT16_MAX;
	static int32_t t32 = 4;

    t32 = (x137!=((x138==x139)-x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = 316;
	volatile uint16_t x142 = 87U;
	static volatile uint16_t x143 = 21U;
	uint64_t x144 = 95059LLU;
	int32_t t33 = 7;

    t33 = (x141!=((x142==x143)-x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x150 = INT64_MAX;
	uint64_t x152 = 2231257461753501LLU;

    t34 = (x149!=((x150==x151)-x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x154 = -42;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;

    t35 = (x153!=((x154==x155)-x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x159 = -1;
	int32_t x160 = INT32_MAX;

    t36 = (x157!=((x158==x159)-x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	volatile uint16_t x163 = 0U;
	volatile int32_t t37 = 2518452;

    t37 = (x161!=((x162==x163)-x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = 61U;
	volatile int8_t x166 = INT8_MIN;
	int16_t x168 = -1;
	volatile int32_t t38 = -344;

    t38 = (x165!=((x166==x167)-x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -3;
	static uint8_t x172 = 2U;
	int32_t t39 = 18647540;

    t39 = (x169!=((x170==x171)-x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MIN;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = 0;
	int32_t t40 = 432356534;

    t40 = (x173!=((x174==x175)-x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = 3814625U;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = 1U;
	volatile int32_t t41 = -6736495;

    t41 = (x177!=((x178==x179)-x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x186 = 15U;
	volatile int8_t x188 = INT8_MIN;

    t42 = (x185!=((x186==x187)-x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x189 = 1087U;
	volatile int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	int8_t x192 = 1;
	int32_t t43 = 68;

    t43 = (x189!=((x190==x191)-x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = INT16_MIN;
	int16_t x196 = -1;
	int32_t t44 = 1059235;

    t44 = (x193!=((x194==x195)-x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x200 = 5989637116503676LLU;
	int32_t t45 = -1;

    t45 = (x197!=((x198==x199)-x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x201 = UINT8_MAX;
	uint16_t x202 = 3U;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	volatile int32_t t46 = -15;

    t46 = (x201!=((x202==x203)-x204));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = INT16_MIN;
	volatile int8_t x206 = -27;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = 220;
	int32_t t47 = 165;

    t47 = (x205!=((x206==x207)-x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x209 = 626029LL;
	uint32_t x212 = 143010160U;
	int32_t t48 = -16252737;

    t48 = (x209!=((x210==x211)-x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	static uint32_t x218 = 894503U;
	int64_t x219 = -1LL;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t49 = 2;

    t49 = (x217!=((x218==x219)-x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x225 = 193066LLU;
	uint16_t x226 = 43U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t50 = 46;

    t50 = (x225!=((x226==x227)-x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = 1778008;
	int32_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int16_t x232 = 2;
	static volatile int32_t t51 = -913770728;

    t51 = (x229!=((x230==x231)-x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x233 = 2340689U;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = INT32_MAX;
	uint64_t x236 = 69594337351710299LLU;
	volatile int32_t t52 = -123;

    t52 = (x233!=((x234==x235)-x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = -1;
	static volatile int8_t x239 = INT8_MIN;
	int64_t x240 = 271410018909681LL;

    t53 = (x237!=((x238==x239)-x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = 995240454755451688LL;
	int8_t x242 = -3;
	int8_t x243 = -1;
	int64_t x244 = 3703282455234754003LL;
	int32_t t54 = 41838;

    t54 = (x241!=((x242==x243)-x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x245 = 20450;
	uint64_t x248 = 47746513087LLU;
	int32_t t55 = -52317388;

    t55 = (x245!=((x246==x247)-x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = 27026U;
	volatile uint64_t x251 = 6138380053328693020LLU;
	static uint16_t x252 = 1709U;

    t56 = (x249!=((x250==x251)-x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = 15;
	int16_t x258 = INT16_MIN;
	uint16_t x260 = 59U;
	volatile int32_t t57 = 972;

    t57 = (x257!=((x258==x259)-x260));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x261 = INT16_MIN;
	uint64_t x262 = 16710611408402257LLU;
	int32_t x263 = 22582;
	static int64_t x264 = -44371LL;
	volatile int32_t t58 = -6;

    t58 = (x261!=((x262==x263)-x264));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	int16_t x268 = INT16_MAX;
	int32_t t59 = 1;

    t59 = (x265!=((x266==x267)-x268));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x269 = INT32_MAX;
	uint64_t x271 = UINT64_MAX;
	volatile int16_t x272 = -17;
	volatile int32_t t60 = -3487;

    t60 = (x269!=((x270==x271)-x272));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x273 = 15U;
	int16_t x274 = INT16_MAX;
	static int64_t x275 = 33421LL;
	int16_t x276 = -5416;
	volatile int32_t t61 = 18;

    t61 = (x273!=((x274==x275)-x276));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = INT32_MAX;
	int32_t x278 = 4276293;
	uint32_t x279 = 6600U;
	static int64_t x280 = 5369491628987653LL;

    t62 = (x277!=((x278==x279)-x280));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = 4;
	static int8_t x283 = 0;
	int8_t x284 = -7;
	int32_t t63 = -11;

    t63 = (x281!=((x282==x283)-x284));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x285 = INT16_MIN;
	uint8_t x286 = 3U;
	int64_t x287 = INT64_MIN;
	static int32_t x288 = -82324;
	int32_t t64 = 421;

    t64 = (x285!=((x286==x287)-x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = INT16_MAX;
	static uint64_t x290 = 2912430052903LLU;
	static int32_t x291 = INT32_MAX;
	volatile int64_t x292 = 3809673237LL;
	volatile int32_t t65 = -993;

    t65 = (x289!=((x290==x291)-x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = 101310727516406075LLU;
	int16_t x295 = INT16_MIN;
	volatile int32_t t66 = 21795;

    t66 = (x293!=((x294==x295)-x296));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x297 = -1;
	static int8_t x298 = 62;
	static int16_t x300 = -2;
	volatile int32_t t67 = 21351974;

    t67 = (x297!=((x298==x299)-x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	uint64_t x303 = 12950296LLU;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t68 = -15;

    t68 = (x301!=((x302==x303)-x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x305 = 28U;
	int32_t x307 = INT32_MAX;
	int32_t x308 = 710344;
	volatile int32_t t69 = -1669054;

    t69 = (x305!=((x306==x307)-x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	uint32_t x310 = UINT32_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t70 = -121;

    t70 = (x309!=((x310==x311)-x312));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x313 = UINT64_MAX;
	int64_t x314 = -63176LL;
	static int32_t x315 = 1448;
	volatile int32_t x316 = -1;
	static int32_t t71 = -117;

    t71 = (x313!=((x314==x315)-x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x317 = 0U;
	uint32_t x318 = 3U;
	volatile int64_t x319 = -82736913380LL;
	static int8_t x320 = INT8_MIN;
	static int32_t t72 = 30981801;

    t72 = (x317!=((x318==x319)-x320));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x321 = 111;
	static int64_t x322 = INT64_MAX;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t73 = -170;

    t73 = (x321!=((x322==x323)-x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x326 = 1288;
	static int32_t x327 = 59650;
	uint64_t x328 = 1104LLU;
	int32_t t74 = -163541;

    t74 = (x325!=((x326==x327)-x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x329 = 42409418123LLU;
	int8_t x330 = -7;
	int8_t x331 = -1;
	volatile int8_t x332 = -6;
	volatile int32_t t75 = 3082311;

    t75 = (x329!=((x330==x331)-x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x333 = 4U;
	static int16_t x334 = INT16_MIN;
	uint32_t x335 = 38309U;
	int64_t x336 = -1LL;
	volatile int32_t t76 = -58450;

    t76 = (x333!=((x334==x335)-x336));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x338 = 2476U;
	static uint64_t x339 = UINT64_MAX;

    t77 = (x337!=((x338==x339)-x340));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x341 = 4;
	int32_t x343 = INT32_MAX;
	static int16_t x344 = -1;
	volatile int32_t t78 = -11;

    t78 = (x341!=((x342==x343)-x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = -8140545;
	static int64_t x346 = 40476257157499LL;
	volatile int32_t t79 = 1;

    t79 = (x345!=((x346==x347)-x348));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x349 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = 4U;

    t80 = (x349!=((x350==x351)-x352));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x353 = UINT8_MAX;
	static uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = INT16_MAX;
	uint16_t x356 = UINT16_MAX;
	int32_t t81 = -231550623;

    t81 = (x353!=((x354==x355)-x356));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = INT8_MAX;
	uint16_t x358 = UINT16_MAX;
	uint8_t x360 = 37U;
	static volatile int32_t t82 = 144;

    t82 = (x357!=((x358==x359)-x360));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	static volatile int16_t x368 = INT16_MIN;
	int32_t t83 = 2673;

    t83 = (x365!=((x366==x367)-x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x370 = -1;
	int64_t x371 = 73600122LL;
	uint64_t x372 = 17072LLU;
	static volatile int32_t t84 = 63045;

    t84 = (x369!=((x370==x371)-x372));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -474;
	volatile uint8_t x376 = 0U;
	int32_t t85 = -19;

    t85 = (x373!=((x374==x375)-x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x378 = -74399177524LL;
	int16_t x379 = INT16_MIN;
	volatile uint8_t x380 = 2U;
	int32_t t86 = -599671889;

    t86 = (x377!=((x378==x379)-x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MIN;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t87 = -2;

    t87 = (x381!=((x382==x383)-x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	volatile int32_t x387 = 1683;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t88 = 158;

    t88 = (x385!=((x386==x387)-x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x389 = 0;
	int64_t x391 = INT64_MAX;
	int16_t x392 = 88;
	int32_t t89 = 545;

    t89 = (x389!=((x390==x391)-x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = -1LL;
	volatile int64_t x394 = INT64_MIN;
	volatile int8_t x395 = INT8_MIN;
	volatile int32_t t90 = -2761242;

    t90 = (x393!=((x394==x395)-x396));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = INT32_MAX;
	volatile int32_t x399 = 116731946;
	uint64_t x400 = 339832LLU;

    t91 = (x397!=((x398==x399)-x400));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x401 = INT64_MIN;
	int32_t x402 = 13117;
	int64_t x404 = -1LL;

    t92 = (x401!=((x402==x403)-x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x405 = 30U;
	int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MAX;
	static int16_t x408 = -1;
	volatile int32_t t93 = -597900475;

    t93 = (x405!=((x406==x407)-x408));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = 7123;
	uint16_t x410 = 2185U;
	int16_t x411 = 7;
	int32_t t94 = -295795990;

    t94 = (x409!=((x410==x411)-x412));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x413 = 10525956U;
	volatile int32_t x414 = -22703440;
	uint8_t x416 = 7U;
	int32_t t95 = -5890;

    t95 = (x413!=((x414==x415)-x416));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x417 = 2578U;
	int64_t x419 = INT64_MIN;
	volatile uint64_t x420 = UINT64_MAX;
	int32_t t96 = 248;

    t96 = (x417!=((x418==x419)-x420));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x421 = -1;
	int8_t x424 = 1;
	volatile int32_t t97 = -45;

    t97 = (x421!=((x422==x423)-x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x426 = -1;
	int16_t x427 = INT16_MIN;
	volatile int32_t t98 = 5;

    t98 = (x425!=((x426==x427)-x428));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MAX;
	uint32_t x431 = UINT32_MAX;
	uint8_t x432 = 35U;
	volatile int32_t t99 = 27335;

    t99 = (x429!=((x430==x431)-x432));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x433 = UINT16_MAX;
	int16_t x434 = -58;
	static int16_t x435 = -1;
	static volatile uint16_t x436 = 1U;
	int32_t t100 = 937455;

    t100 = (x433!=((x434==x435)-x436));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x439 = INT64_MAX;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t101 = 371690534;

    t101 = (x437!=((x438==x439)-x440));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x441 = -1LL;
	volatile int32_t x442 = -4757363;
	static int64_t x443 = -24936925916LL;
	uint8_t x444 = 0U;
	int32_t t102 = 3508577;

    t102 = (x441!=((x442==x443)-x444));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x445 = 6;
	volatile int64_t x446 = INT64_MIN;
	volatile uint32_t x447 = 902653223U;
	volatile int32_t t103 = 39366579;

    t103 = (x445!=((x446==x447)-x448));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x449 = INT64_MIN;
	int16_t x450 = -690;
	int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MAX;
	volatile int32_t t104 = 184271;

    t104 = (x449!=((x450==x451)-x452));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x457 = INT64_MAX;

    t105 = (x457!=((x458==x459)-x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = INT32_MIN;
	uint16_t x466 = 24598U;
	volatile int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MIN;
	int32_t t106 = 15972923;

    t106 = (x465!=((x466==x467)-x468));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x470 = 874LLU;
	int16_t x471 = -30;
	int16_t x472 = INT16_MIN;
	volatile int32_t t107 = -11530564;

    t107 = (x469!=((x470==x471)-x472));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x474 = 0;
	static volatile int16_t x475 = 4;
	int64_t x476 = -1LL;
	volatile int32_t t108 = -12;

    t108 = (x473!=((x474==x475)-x476));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x477 = 14U;
	int16_t x478 = INT16_MAX;
	static int32_t x479 = INT32_MIN;
	int8_t x480 = -1;
	volatile int32_t t109 = -139;

    t109 = (x477!=((x478==x479)-x480));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x481 = 7389U;
	static volatile uint16_t x482 = 196U;
	uint64_t x484 = 5612312801479023LLU;
	volatile int32_t t110 = -924681;

    t110 = (x481!=((x482==x483)-x484));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x485 = 6135254LLU;
	int64_t x486 = INT64_MAX;
	uint32_t x487 = 352U;

    t111 = (x485!=((x486==x487)-x488));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x493 = UINT64_MAX;
	int32_t x496 = 3615;
	static volatile int32_t t112 = -357;

    t112 = (x493!=((x494==x495)-x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x501 = 46;
	uint16_t x502 = 83U;
	int32_t t113 = -972831254;

    t113 = (x501!=((x502==x503)-x504));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x509 = -25;
	uint64_t x510 = 58LLU;
	volatile int64_t x511 = -1LL;
	static uint16_t x512 = 6U;
	int32_t t114 = -911852268;

    t114 = (x509!=((x510==x511)-x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x513 = 345392;
	int16_t x514 = -1;
	uint32_t x515 = 131226U;
	static volatile int32_t x516 = -1;
	volatile int32_t t115 = -906530424;

    t115 = (x513!=((x514==x515)-x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = UINT32_MAX;
	int32_t x518 = -1;
	int16_t x519 = 203;
	uint64_t x520 = 4773710580LLU;

    t116 = (x517!=((x518==x519)-x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x523 = INT64_MAX;
	int16_t x524 = INT16_MIN;

    t117 = (x521!=((x522==x523)-x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x525 = INT64_MIN;
	volatile uint32_t x526 = 52278382U;
	int32_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	int32_t t118 = -1706456;

    t118 = (x525!=((x526==x527)-x528));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x529 = INT64_MIN;
	volatile int8_t x530 = -1;
	int8_t x531 = -27;
	uint32_t x532 = 829091570U;

    t119 = (x529!=((x530==x531)-x532));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x537 = 1;
	volatile int16_t x538 = -1;
	int16_t x540 = INT16_MAX;
	static int32_t t120 = 1112;

    t120 = (x537!=((x538==x539)-x540));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x542 = -1LL;
	static uint16_t x543 = 7U;
	uint32_t x544 = 318U;
	int32_t t121 = 0;

    t121 = (x541!=((x542==x543)-x544));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x545 = -1LL;
	volatile int32_t x546 = -1129;
	uint64_t x548 = 94096376312685845LLU;
	volatile int32_t t122 = 388498570;

    t122 = (x545!=((x546==x547)-x548));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x549 = -1;
	int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MIN;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t123 = -4822609;

    t123 = (x549!=((x550==x551)-x552));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x554 = INT8_MIN;
	uint8_t x556 = 55U;

    t124 = (x553!=((x554==x555)-x556));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x557 = INT32_MIN;
	volatile int32_t x559 = INT32_MIN;
	uint16_t x560 = UINT16_MAX;

    t125 = (x557!=((x558==x559)-x560));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x563 = 0U;
	volatile uint8_t x564 = 1U;
	volatile int32_t t126 = -428804;

    t126 = (x561!=((x562==x563)-x564));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x566 = 1112;
	volatile uint32_t x567 = UINT32_MAX;
	volatile uint16_t x568 = 20U;

    t127 = (x565!=((x566==x567)-x568));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x569 = -62;
	int64_t x570 = 2122488452088LL;
	int64_t x571 = 509502LL;
	int64_t x572 = -1LL;
	int32_t t128 = 280719;

    t128 = (x569!=((x570==x571)-x572));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x581 = -782;
	int16_t x582 = INT16_MIN;
	static volatile uint32_t x583 = 1775230577U;
	volatile int32_t t129 = -289218183;

    t129 = (x581!=((x582==x583)-x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x586 = 14527U;
	int64_t x587 = INT64_MAX;
	int32_t x588 = 1;

    t130 = (x585!=((x586==x587)-x588));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x592 = 11;
	int32_t t131 = -90;

    t131 = (x589!=((x590==x591)-x592));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x593 = 2U;
	static uint64_t x594 = 2593535143444703480LLU;
	int32_t x595 = INT32_MIN;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t132 = -133582291;

    t132 = (x593!=((x594==x595)-x596));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x597 = -1LL;
	int16_t x598 = -1;
	uint8_t x599 = 2U;
	static int64_t x600 = INT64_MAX;
	int32_t t133 = -57211;

    t133 = (x597!=((x598==x599)-x600));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x601 = -126;
	volatile int8_t x602 = INT8_MIN;
	uint64_t x604 = 16841330LLU;

    t134 = (x601!=((x602==x603)-x604));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x605 = -1;
	static uint32_t x606 = 29U;
	uint32_t x607 = 0U;
	int64_t x608 = 152446LL;
	static volatile int32_t t135 = 797;

    t135 = (x605!=((x606==x607)-x608));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x609 = 2629LLU;
	uint32_t x610 = 225168U;
	volatile int32_t x611 = -844898;
	uint32_t x612 = UINT32_MAX;
	static int32_t t136 = -2048;

    t136 = (x609!=((x610==x611)-x612));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x614 = -1LL;
	int8_t x615 = -1;
	int8_t x616 = -1;
	int32_t t137 = 320649;

    t137 = (x613!=((x614==x615)-x616));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x617 = -1;
	int16_t x618 = 6034;
	static int16_t x619 = INT16_MIN;
	int64_t x620 = -1LL;
	int32_t t138 = -262;

    t138 = (x617!=((x618==x619)-x620));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x621 = 219285790LLU;
	int64_t x622 = 4192847LL;
	int64_t x623 = -64626527200LL;
	volatile int32_t x624 = INT32_MAX;
	volatile int32_t t139 = 4505421;

    t139 = (x621!=((x622==x623)-x624));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x625 = 242142200U;
	uint32_t x626 = 1602U;
	int32_t x627 = 908691;
	volatile int32_t t140 = 9;

    t140 = (x625!=((x626==x627)-x628));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x629 = 23;
	uint8_t x630 = 1U;
	static int16_t x631 = INT16_MIN;
	uint8_t x632 = 43U;
	int32_t t141 = -850611531;

    t141 = (x629!=((x630==x631)-x632));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x633 = 442986U;
	uint64_t x634 = 2578977655454666655LLU;
	static uint32_t x635 = 150576U;
	volatile int32_t t142 = -30;

    t142 = (x633!=((x634==x635)-x636));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = 0;
	volatile int32_t x638 = -59610;
	int16_t x640 = INT16_MIN;
	volatile int32_t t143 = 1409492;

    t143 = (x637!=((x638==x639)-x640));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x641 = INT32_MIN;
	volatile int64_t x642 = -928523803521272LL;
	uint8_t x643 = UINT8_MAX;
	int32_t x644 = INT32_MAX;
	int32_t t144 = -65702417;

    t144 = (x641!=((x642==x643)-x644));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x645 = INT8_MIN;
	int16_t x646 = -1;
	int64_t x647 = INT64_MAX;
	volatile int8_t x648 = 51;

    t145 = (x645!=((x646==x647)-x648));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x651 = 116345006;
	int16_t x652 = 2514;

    t146 = (x649!=((x650==x651)-x652));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x654 = INT8_MAX;
	int8_t x655 = -32;
	int16_t x656 = -668;
	int32_t t147 = -9965;

    t147 = (x653!=((x654==x655)-x656));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x661 = 2812287996917947LLU;
	int8_t x662 = -1;
	static uint64_t x664 = 2642242259955334734LLU;
	volatile int32_t t148 = 29154590;

    t148 = (x661!=((x662==x663)-x664));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x666 = -22;
	volatile uint16_t x667 = UINT16_MAX;
	volatile uint16_t x668 = UINT16_MAX;
	volatile int32_t t149 = -84158;

    t149 = (x665!=((x666==x667)-x668));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x671 = UINT32_MAX;
	volatile int64_t x672 = 3958230LL;

    t150 = (x669!=((x670==x671)-x672));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x673 = 351;
	int64_t x674 = INT64_MAX;
	volatile uint32_t x675 = UINT32_MAX;
	volatile uint16_t x676 = 441U;
	int32_t t151 = 11;

    t151 = (x673!=((x674==x675)-x676));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x679 = UINT32_MAX;
	static int64_t x680 = -198805635439301LL;
	volatile int32_t t152 = 1757;

    t152 = (x677!=((x678==x679)-x680));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x681 = 1503068857418072737LLU;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = 2029546568U;
	int32_t x684 = -3803567;
	volatile int32_t t153 = 6756;

    t153 = (x681!=((x682==x683)-x684));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x685 = 0U;
	int64_t x686 = INT64_MAX;
	int16_t x687 = INT16_MAX;
	int32_t t154 = -103;

    t154 = (x685!=((x686==x687)-x688));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x690 = -26;
	uint16_t x691 = UINT16_MAX;
	int32_t t155 = 735958071;

    t155 = (x689!=((x690==x691)-x692));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x693 = 0;
	static int64_t x694 = INT64_MAX;
	static volatile int8_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	int32_t t156 = 56340436;

    t156 = (x693!=((x694==x695)-x696));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x701 = INT32_MIN;
	static volatile int8_t x703 = INT8_MAX;
	int32_t x704 = INT32_MAX;
	volatile int32_t t157 = -282566393;

    t157 = (x701!=((x702==x703)-x704));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x706 = INT8_MAX;
	static uint16_t x707 = UINT16_MAX;
	volatile uint16_t x708 = 124U;
	volatile int32_t t158 = -2632583;

    t158 = (x705!=((x706==x707)-x708));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x709 = UINT8_MAX;
	volatile int16_t x711 = INT16_MIN;
	int32_t t159 = -39988404;

    t159 = (x709!=((x710==x711)-x712));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x713 = INT32_MIN;
	static int16_t x714 = INT16_MAX;
	int32_t x715 = INT32_MIN;
	volatile int32_t x716 = 42276;
	volatile int32_t t160 = 49554;

    t160 = (x713!=((x714==x715)-x716));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x718 = -593;
	int64_t x719 = INT64_MIN;
	int32_t x720 = -2;
	volatile int32_t t161 = 56498;

    t161 = (x717!=((x718==x719)-x720));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x721 = UINT32_MAX;
	int16_t x722 = -6;
	static int16_t x724 = INT16_MAX;
	static volatile int32_t t162 = 1;

    t162 = (x721!=((x722==x723)-x724));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x726 = -172164LL;
	int8_t x727 = INT8_MIN;
	int16_t x728 = INT16_MIN;
	int32_t t163 = 2621733;

    t163 = (x725!=((x726==x727)-x728));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x729 = -2;
	int8_t x730 = -1;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = INT16_MIN;
	volatile int32_t t164 = -61;

    t164 = (x729!=((x730==x731)-x732));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x734 = INT16_MAX;
	int16_t x735 = -1;
	volatile int16_t x736 = INT16_MAX;
	int32_t t165 = -3327;

    t165 = (x733!=((x734==x735)-x736));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = INT64_MIN;
	int8_t x738 = -1;
	int16_t x739 = INT16_MAX;
	static int8_t x740 = INT8_MAX;

    t166 = (x737!=((x738==x739)-x740));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x741 = -1;
	int32_t x742 = -753;
	int16_t x744 = -1;
	static int32_t t167 = -8106697;

    t167 = (x741!=((x742==x743)-x744));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x745 = -252874611045LL;
	uint16_t x747 = 76U;
	int8_t x748 = 20;
	volatile int32_t t168 = 365;

    t168 = (x745!=((x746==x747)-x748));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x749 = 1;
	int8_t x750 = INT8_MIN;
	static int64_t x751 = INT64_MIN;
	uint8_t x752 = 3U;
	static volatile int32_t t169 = 594;

    t169 = (x749!=((x750==x751)-x752));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x753 = -1;
	volatile int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MAX;
	int64_t x756 = INT64_MAX;

    t170 = (x753!=((x754==x755)-x756));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x758 = INT16_MAX;
	int32_t x759 = -142217895;
	uint64_t x760 = 28408067LLU;

    t171 = (x757!=((x758==x759)-x760));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x761 = INT64_MIN;
	int32_t x762 = INT32_MAX;
	static volatile int32_t x763 = INT32_MAX;
	uint16_t x764 = 724U;
	static int32_t t172 = 11576;

    t172 = (x761!=((x762==x763)-x764));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x765 = -15378;
	volatile uint32_t x766 = UINT32_MAX;
	int64_t x767 = INT64_MAX;
	int32_t x768 = INT32_MAX;
	int32_t t173 = 1077656;

    t173 = (x765!=((x766==x767)-x768));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x770 = INT64_MAX;
	static volatile uint8_t x771 = UINT8_MAX;
	static volatile int8_t x772 = -1;

    t174 = (x769!=((x770==x771)-x772));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x774 = 39;
	int64_t x775 = 93966167026890LL;
	uint64_t x776 = 260495LLU;
	volatile int32_t t175 = 655968;

    t175 = (x773!=((x774==x775)-x776));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x777 = INT8_MIN;
	uint64_t x778 = UINT64_MAX;
	static int32_t x779 = INT32_MIN;
	volatile uint16_t x780 = UINT16_MAX;
	static int32_t t176 = -234;

    t176 = (x777!=((x778==x779)-x780));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile int32_t x782 = -116;
	uint32_t x783 = UINT32_MAX;
	uint16_t x784 = 4702U;

    t177 = (x781!=((x782==x783)-x784));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x789 = INT32_MAX;
	int8_t x790 = INT8_MAX;
	static int64_t x792 = -1883LL;
	static int32_t t178 = 61380;

    t178 = (x789!=((x790==x791)-x792));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x793 = 452;
	int64_t x794 = -1LL;
	uint64_t x795 = 0LLU;
	volatile int8_t x796 = 1;

    t179 = (x793!=((x794==x795)-x796));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x797 = 247LL;
	static volatile int8_t x798 = INT8_MAX;
	static volatile int64_t x799 = -3032206380LL;
	int32_t x800 = 0;
	int32_t t180 = 8186;

    t180 = (x797!=((x798==x799)-x800));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x804 = INT16_MIN;
	volatile int32_t t181 = 124;

    t181 = (x801!=((x802==x803)-x804));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x809 = 14;
	static int64_t x810 = -1LL;
	int64_t x812 = -3674209LL;
	int32_t t182 = 626135976;

    t182 = (x809!=((x810==x811)-x812));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x814 = UINT16_MAX;
	static int8_t x815 = INT8_MIN;
	int16_t x816 = INT16_MIN;

    t183 = (x813!=((x814==x815)-x816));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x818 = -1;
	static uint64_t x819 = UINT64_MAX;
	uint16_t x820 = 8642U;

    t184 = (x817!=((x818==x819)-x820));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x821 = INT16_MIN;
	uint32_t x822 = 17378954U;
	uint64_t x823 = 72233246181396757LLU;
	uint32_t x824 = 37261U;
	int32_t t185 = -3718777;

    t185 = (x821!=((x822==x823)-x824));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x825 = INT8_MIN;
	int32_t x826 = -1;
	int32_t x828 = 924245;
	volatile int32_t t186 = -10724;

    t186 = (x825!=((x826==x827)-x828));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x829 = INT8_MIN;
	int8_t x830 = INT8_MIN;
	static uint64_t x831 = 103LLU;
	int64_t x832 = 113247859LL;
	int32_t t187 = 15787539;

    t187 = (x829!=((x830==x831)-x832));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x833 = -11074;
	uint32_t x834 = 8283122U;
	int8_t x835 = INT8_MIN;
	volatile int8_t x836 = INT8_MIN;

    t188 = (x833!=((x834==x835)-x836));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x837 = INT32_MIN;
	int8_t x838 = -32;
	int16_t x839 = -34;
	int32_t t189 = 0;

    t189 = (x837!=((x838==x839)-x840));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x845 = 14051123306LLU;
	uint16_t x848 = UINT16_MAX;
	int32_t t190 = -905868257;

    t190 = (x845!=((x846==x847)-x848));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x849 = 1448876LLU;
	uint8_t x850 = UINT8_MAX;
	int32_t x851 = 862539286;
	static uint32_t x852 = UINT32_MAX;
	static int32_t t191 = -1;

    t191 = (x849!=((x850==x851)-x852));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x854 = -3782;
	int32_t x855 = INT32_MAX;
	int64_t x856 = 8434LL;
	volatile int32_t t192 = -2;

    t192 = (x853!=((x854==x855)-x856));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x858 = INT8_MAX;
	int32_t x860 = -1;
	int32_t t193 = 16063;

    t193 = (x857!=((x858==x859)-x860));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x861 = 3765571LLU;
	int8_t x862 = INT8_MIN;
	int32_t x863 = 1226061;
	volatile uint64_t x864 = UINT64_MAX;
	int32_t t194 = -1;

    t194 = (x861!=((x862==x863)-x864));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x865 = INT64_MIN;
	uint8_t x866 = UINT8_MAX;
	int8_t x867 = INT8_MIN;
	int64_t x868 = 6LL;
	int32_t t195 = -3433056;

    t195 = (x865!=((x866==x867)-x868));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x869 = INT16_MIN;
	uint8_t x870 = 3U;
	int16_t x871 = INT16_MAX;
	uint8_t x872 = 54U;
	int32_t t196 = -4642;

    t196 = (x869!=((x870==x871)-x872));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x873 = -23;
	uint16_t x874 = 7099U;
	int64_t x875 = INT64_MAX;
	int8_t x876 = INT8_MIN;
	volatile int32_t t197 = 88895973;

    t197 = (x873!=((x874==x875)-x876));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x877 = UINT16_MAX;
	uint64_t x878 = 9965378669128285LLU;
	volatile int64_t x879 = INT64_MIN;
	static volatile int32_t x880 = -1;
	static int32_t t198 = -723497550;

    t198 = (x877!=((x878==x879)-x880));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x881 = INT8_MIN;
	volatile uint64_t x883 = UINT64_MAX;
	int64_t x884 = -1LL;
	static int32_t t199 = 198986199;

    t199 = (x881!=((x882==x883)-x884));

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

