
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

int32_t x1 = 892499983;
volatile int8_t x3 = INT8_MAX;
uint16_t x6 = 764U;
volatile int32_t t5 = -253;
uint16_t x36 = 31183U;
uint32_t x45 = UINT32_MAX;
uint16_t x52 = 3U;
static volatile int16_t x60 = INT16_MIN;
uint32_t t14 = 110348476U;
int32_t x69 = INT32_MAX;
int64_t x72 = INT64_MIN;
int32_t x74 = INT32_MIN;
int8_t x75 = 17;
int8_t x76 = INT8_MIN;
uint16_t x86 = UINT16_MAX;
int8_t x88 = INT8_MIN;
volatile uint64_t x89 = UINT64_MAX;
volatile int32_t t22 = -506730602;
uint16_t x100 = 1148U;
volatile int32_t t23 = 14700461;
int64_t x102 = INT64_MAX;
int64_t x109 = INT64_MIN;
int8_t x114 = -1;
int16_t x117 = -1;
int64_t x118 = INT64_MAX;
int8_t x122 = -1;
static uint32_t x124 = 72U;
volatile int64_t x128 = -2472879742LL;
uint64_t x129 = 142973001381530LLU;
uint64_t t31 = 19LLU;
volatile int32_t t32 = 501;
uint32_t x137 = 7U;
uint8_t x138 = UINT8_MAX;
int32_t x140 = INT32_MIN;
static uint32_t t33 = 103U;
uint32_t x142 = 1U;
volatile int8_t x149 = INT8_MAX;
uint16_t x151 = 9U;
int32_t t36 = 59;
uint32_t x153 = UINT32_MAX;
volatile uint8_t x155 = 39U;
uint64_t x157 = 464LLU;
int32_t t39 = 74940;
uint32_t x175 = 11272591U;
uint8_t x179 = 31U;
int64_t x180 = INT64_MIN;
uint64_t x182 = UINT64_MAX;
volatile int64_t x192 = INT64_MIN;
uint8_t x194 = UINT8_MAX;
uint8_t x199 = 90U;
uint32_t t48 = 57519265U;
volatile int64_t x204 = INT64_MIN;
static int32_t x212 = INT32_MIN;
static int32_t t52 = -4568715;
static uint64_t x224 = 297045918LLU;
volatile int64_t t53 = -27485064LL;
int8_t x227 = 37;
uint32_t x237 = UINT32_MAX;
uint8_t x239 = 76U;
volatile uint32_t t57 = 1U;
int8_t x241 = -7;
int32_t x243 = INT32_MIN;
int32_t x246 = INT32_MIN;
volatile int32_t t61 = -12796728;
static volatile int8_t x257 = INT8_MAX;
int64_t x258 = -803676190900LL;
uint16_t x261 = 1098U;
static volatile int32_t t63 = -54082;
volatile uint8_t x268 = 1U;
int16_t x273 = 230;
uint64_t x275 = 53527LLU;
int64_t x277 = INT64_MAX;
volatile int16_t x278 = INT16_MAX;
static int8_t x286 = -4;
static int8_t x293 = INT8_MIN;
volatile int8_t x296 = -1;
int32_t t71 = -54253;
uint32_t x303 = 29U;
int32_t x312 = INT32_MAX;
static volatile uint64_t t76 = 523LLU;
int8_t x317 = INT8_MIN;
volatile int32_t t77 = -72;
uint32_t x321 = 293945396U;
uint32_t x333 = 7665196U;
uint16_t x346 = 12125U;
uint32_t x347 = UINT32_MAX;
int32_t x348 = INT32_MIN;
int64_t x353 = INT64_MIN;
int64_t t83 = INT64_MIN;
volatile int64_t x357 = -210612724LL;
static int8_t x358 = -1;
int32_t x362 = INT32_MAX;
int8_t x373 = 37;
int16_t x376 = 0;
volatile int8_t x378 = 0;
int8_t x380 = INT8_MIN;
uint8_t x383 = 2U;
static int16_t x384 = -112;
static int16_t x391 = -1;
static uint16_t x392 = 521U;
static uint8_t x406 = 65U;
static volatile int32_t t98 = 20;
int64_t x425 = INT64_MAX;
uint64_t x429 = UINT64_MAX;
int32_t x430 = -626;
static int16_t x453 = INT16_MAX;
uint32_t x457 = 2961869U;
volatile int16_t x469 = INT16_MIN;
volatile int32_t t111 = 24;
int32_t x474 = INT32_MIN;
uint32_t x481 = 13802718U;
volatile int8_t x504 = INT8_MAX;
volatile int8_t x506 = INT8_MIN;
int64_t x513 = -1LL;
int16_t x514 = INT16_MIN;
volatile int8_t x516 = 2;
static int16_t x523 = INT16_MIN;
uint64_t x526 = 3970LLU;
static uint8_t x530 = UINT8_MAX;
volatile int32_t x534 = INT32_MIN;
static volatile uint8_t x537 = UINT8_MAX;
int32_t x538 = -1;
int64_t x542 = -55LL;
int8_t x551 = INT8_MIN;
static int64_t t131 = INT64_MIN;
uint64_t x562 = UINT64_MAX;
uint8_t x565 = 0U;
static int8_t x575 = INT8_MIN;
uint32_t t135 = 39896U;
int32_t t137 = -5;
static volatile uint16_t x586 = 2673U;
int32_t x597 = INT32_MIN;
static volatile int8_t x598 = -25;
int16_t x599 = INT16_MIN;
volatile uint8_t x602 = 0U;
volatile int32_t t142 = INT32_MIN;
int16_t x606 = INT16_MAX;
int64_t x609 = -297814907636825187LL;
static int8_t x616 = -15;
uint16_t x619 = 3U;
static volatile int32_t t146 = -7898;
int64_t x622 = INT64_MIN;
int8_t x623 = 5;
volatile int16_t x633 = INT16_MIN;
static uint16_t x635 = 57U;
uint8_t x636 = 70U;
uint32_t x639 = 0U;
static int8_t x647 = -1;
static volatile uint8_t x648 = UINT8_MAX;
int32_t x660 = INT32_MAX;
uint8_t x663 = 25U;
int16_t x668 = -1;
uint8_t x677 = UINT8_MAX;
int16_t x680 = INT16_MIN;
uint32_t x684 = 9U;
int16_t x688 = INT16_MIN;
volatile uint64_t x690 = UINT64_MAX;
static int8_t x691 = -1;
static volatile int32_t t161 = 12;
int16_t x699 = -1;
static int8_t x708 = INT8_MIN;
int32_t t166 = 63;
volatile int64_t x714 = INT64_MIN;
static int64_t x716 = INT64_MIN;
uint64_t x717 = 4893878LLU;
uint32_t x719 = 157390791U;
int8_t x721 = -1;
static int16_t x723 = -1;
uint16_t x725 = UINT16_MAX;
int64_t x732 = -1LL;
int32_t x736 = -20111;
int64_t x737 = 66722284LL;
int32_t x738 = INT32_MIN;
static int32_t x750 = INT32_MAX;
static int64_t x752 = INT64_MIN;
int32_t t175 = 6314;
int64_t x756 = 132853637LL;
volatile int32_t t176 = 7812;
static uint32_t t178 = 3U;
volatile int16_t x768 = 3640;
int8_t x771 = 52;
int64_t x774 = INT64_MIN;
int32_t x780 = 76784;
volatile int8_t x781 = 0;
volatile uint64_t x783 = 4588446484387LLU;
uint16_t x785 = 0U;
static int64_t x786 = INT64_MIN;
int8_t x801 = 12;
int8_t x821 = INT8_MIN;
static int32_t x824 = INT32_MIN;
int32_t t192 = -4163316;
static int32_t x843 = -25048;
static int64_t x844 = INT64_MIN;
int64_t x848 = -1LL;
int32_t t197 = 2666336;
int16_t x858 = INT16_MAX;
static volatile uint32_t t199 = 12678U;


void f0(void) {
    	static int8_t x2 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -49637;

    t0 = (x1-((x2&x3)>x4));

    if (t0 != 892499982) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	static volatile int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 935588426;

    t1 = (x5-((x6&x7)>x8));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	int64_t x11 = -1LL;
	int8_t x12 = -24;
	int32_t t2 = -829;

    t2 = (x9-((x10&x11)>x12));

    if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint8_t x14 = 18U;
	volatile int32_t x15 = -1455;
	volatile uint64_t x16 = 28LLU;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x13-((x14&x15)>x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static int8_t x18 = -1;
	volatile uint32_t x19 = 26U;
	static int64_t x20 = INT64_MIN;
	int32_t t4 = 114;

    t4 = (x17-((x18&x19)>x20));

    if (t4 != -32769) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 11U;
	static volatile int16_t x22 = -2470;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = 345190;

    t5 = (x21-((x22&x23)>x24));

    if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 1;
	uint8_t x26 = 28U;
	int32_t x27 = -7488;
	uint8_t x28 = 20U;
	int32_t t6 = -438;

    t6 = (x25-((x26&x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 2U;
	static uint16_t x30 = 0U;
	volatile int16_t x31 = INT16_MAX;
	static int16_t x32 = -1;
	int32_t t7 = 3719;

    t7 = (x29-((x30&x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 679;
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 2074996;

    t8 = (x33-((x34&x35)>x36));

    if (t8 != 679) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	static volatile int16_t x42 = 16;
	static uint8_t x43 = 41U;
	int32_t x44 = -1;
	volatile int32_t t9 = 1;

    t9 = (x41-((x42&x43)>x44));

    if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = 885;
	static uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 329875460446322004LLU;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (x45-((x46&x47)>x48));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 34U;
	int16_t x50 = -1;
	int64_t x51 = -1LL;
	volatile int32_t t11 = 312646;

    t11 = (x49-((x50&x51)>x52));

    if (t11 != 34) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x53 = -4359;
	volatile uint64_t x54 = 1331676524756066LLU;
	int16_t x55 = 483;
	volatile int16_t x56 = -1;
	volatile int32_t t12 = 80;

    t12 = (x53-((x54&x55)>x56));

    if (t12 != -4359) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = 129;
	int64_t x58 = -360416050155955309LL;
	int64_t x59 = INT64_MIN;
	volatile int32_t t13 = -6;

    t13 = (x57-((x58&x59)>x60));

    if (t13 != 129) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 26U;
	uint16_t x62 = 3235U;
	static int32_t x63 = 2644025;
	int64_t x64 = -31194536968LL;

    t14 = (x61-((x62&x63)>x64));

    if (t14 != 25U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 0;
	int32_t x66 = INT32_MAX;
	volatile int16_t x67 = INT16_MIN;
	int32_t x68 = -1;
	int32_t t15 = 11467;

    t15 = (x65-((x66&x67)>x68));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x70 = -1;
	uint64_t x71 = 1777193491187LLU;
	int32_t t16 = INT32_MAX;

    t16 = (x69-((x70&x71)>x72));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 112U;
	volatile int32_t t17 = 192;

    t17 = (x73-((x74&x75)>x76));

    if (t17 != 111) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -1;
	static uint8_t x78 = 0U;
	volatile uint32_t x79 = UINT32_MAX;
	volatile uint16_t x80 = 1U;
	volatile int32_t t18 = 228;

    t18 = (x77-((x78&x79)>x80));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -5;
	static int32_t x82 = INT32_MIN;
	static int8_t x83 = -2;
	static int8_t x84 = INT8_MIN;
	int32_t t19 = -110;

    t19 = (x81-((x82&x83)>x84));

    if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 43081460U;
	volatile uint32_t x87 = 407502197U;
	volatile uint32_t t20 = 78U;

    t20 = (x85-((x86&x87)>x88));

    if (t20 != 43081460U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x90 = 1732703660U;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 17754928LLU;
	uint64_t t21 = 167550022943LLU;

    t21 = (x89-((x90&x91)>x92));

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = 11;
	int64_t x94 = INT64_MAX;
	int32_t x95 = -1;
	static volatile int64_t x96 = INT64_MIN;

    t22 = (x93-((x94&x95)>x96));

    if (t22 != 10) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = 153769437U;

    t23 = (x97-((x98&x99)>x100));

    if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x101 = 132304514;
	static int16_t x103 = 123;
	uint16_t x104 = 1576U;
	volatile int32_t t24 = -200885300;

    t24 = (x101-((x102&x103)>x104));

    if (t24 != 132304514) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	volatile uint8_t x106 = 75U;
	int32_t x107 = -774;
	static volatile int16_t x108 = INT16_MIN;
	uint32_t t25 = 12552U;

    t25 = (x105-((x106&x107)>x108));

    if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 3U;
	static volatile int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	volatile int64_t t26 = INT64_MIN;

    t26 = (x109-((x110&x111)>x112));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = UINT32_MAX;
	int32_t x115 = -1;
	static int64_t x116 = INT64_MIN;
	static volatile uint32_t t27 = 50U;

    t27 = (x113-((x114&x115)>x116));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x119 = INT8_MIN;
	int8_t x120 = 0;
	int32_t t28 = -3551229;

    t28 = (x117-((x118&x119)>x120));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t29 = -1012560;

    t29 = (x121-((x122&x123)>x124));

    if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MAX;
	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	volatile int32_t t30 = 4;

    t30 = (x125-((x126&x127)>x128));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x130 = 186;
	uint32_t x131 = 500U;
	volatile uint8_t x132 = UINT8_MAX;

    t31 = (x129-((x130&x131)>x132));

    if (t31 != 142973001381530LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -1;
	int16_t x134 = -1;
	static int32_t x135 = INT32_MIN;
	static int64_t x136 = INT64_MIN;

    t32 = (x133-((x134&x135)>x136));

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x139 = UINT16_MAX;

    t33 = (x137-((x138&x139)>x140));

    if (t33 != 6U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	static uint32_t x143 = 53350126U;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t34 = INT32_MIN;

    t34 = (x141-((x142&x143)>x144));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x145 = 195;
	static uint64_t x146 = 82687LLU;
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 221151629U;
	int32_t t35 = -1292;

    t35 = (x145-((x146&x147)>x148));

    if (t35 != 195) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x150 = 54U;
	int64_t x152 = 1227516644170915LL;

    t36 = (x149-((x150&x151)>x152));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x154 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	uint32_t t37 = 21614U;

    t37 = (x153-((x154&x155)>x156));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x158 = -1LL;
	int64_t x159 = -1LL;
	uint32_t x160 = 6300U;
	uint64_t t38 = 2137819704287640LLU;

    t38 = (x157-((x158&x159)>x160));

    if (t38 != 464LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = -1;
	static int16_t x162 = 1;
	volatile int16_t x163 = -1807;
	volatile int16_t x164 = -3750;

    t39 = (x161-((x162&x163)>x164));

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile uint32_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	volatile int32_t x168 = -7;
	static volatile int32_t t40 = 9749;

    t40 = (x165-((x166&x167)>x168));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MAX;
	int16_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t41 = -12724;

    t41 = (x169-((x170&x171)>x172));

    if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x173 = 991U;
	volatile uint32_t x174 = 486382U;
	int16_t x176 = 0;
	static volatile uint32_t t42 = 290131073U;

    t42 = (x173-((x174&x175)>x176));

    if (t42 != 990U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x177 = INT8_MAX;
	uint64_t x178 = 70240174LLU;
	volatile int32_t t43 = -94311;

    t43 = (x177-((x178&x179)>x180));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x181 = -29;
	int16_t x183 = -1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t44 = 58;

    t44 = (x181-((x182&x183)>x184));

    if (t44 != -30) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x185 = 62U;
	volatile uint64_t x186 = 450LLU;
	volatile int32_t x187 = -1;
	static int16_t x188 = INT16_MAX;
	static volatile int32_t t45 = 7;

    t45 = (x185-((x186&x187)>x188));

    if (t45 != 62) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x189 = UINT16_MAX;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	volatile int32_t t46 = -5;

    t46 = (x189-((x190&x191)>x192));

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = -1;
	uint8_t x195 = 55U;
	uint8_t x196 = 1U;
	volatile int32_t t47 = 8135;

    t47 = (x193-((x194&x195)>x196));

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x197 = 5422U;
	static int16_t x198 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;

    t48 = (x197-((x198&x199)>x200));

    if (t48 != 5422U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = 0;
	int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MIN;
	static volatile int32_t t49 = -1042675;

    t49 = (x201-((x202&x203)>x204));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = -247;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t50 = 3086745;

    t50 = (x205-((x206&x207)>x208));

    if (t50 != -248) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 1417348709231467406LLU;
	int16_t x211 = 8346;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = (x209-((x210&x211)>x212));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 79U;
	static int16_t x214 = INT16_MIN;
	uint16_t x215 = 379U;
	static volatile int64_t x216 = -1LL;

    t52 = (x213-((x214&x215)>x216));

    if (t52 != 78) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x221 = 3793LL;
	int8_t x222 = 0;
	int64_t x223 = INT64_MAX;

    t53 = (x221-((x222&x223)>x224));

    if (t53 != 3793LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MIN;
	static int8_t x226 = INT8_MAX;
	int64_t x228 = -101599LL;
	int32_t t54 = -192;

    t54 = (x225-((x226&x227)>x228));

    if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x229 = UINT8_MAX;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = 99793U;
	uint64_t x232 = UINT64_MAX;
	int32_t t55 = -185110;

    t55 = (x229-((x230&x231)>x232));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = UINT16_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t56 = 3965;

    t56 = (x233-((x234&x235)>x236));

    if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x238 = -1LL;
	uint16_t x240 = 46U;

    t57 = (x237-((x238&x239)>x240));

    if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x242 = INT32_MAX;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = 1146109;

    t58 = (x241-((x242&x243)>x244));

    if (t58 != -7) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x245 = 75U;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t59 = -9;

    t59 = (x245-((x246&x247)>x248));

    if (t59 != 75) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x249 = UINT8_MAX;
	static uint8_t x250 = UINT8_MAX;
	uint8_t x251 = UINT8_MAX;
	static int32_t x252 = INT32_MIN;
	int32_t t60 = -1;

    t60 = (x249-((x250&x251)>x252));

    if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = -1;
	uint64_t x254 = 176320749201877045LLU;
	volatile int16_t x255 = -1;
	static int8_t x256 = INT8_MIN;

    t61 = (x253-((x254&x255)>x256));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = -1;
	volatile int32_t t62 = 829519;

    t62 = (x257-((x258&x259)>x260));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x262 = UINT16_MAX;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MIN;

    t63 = (x261-((x262&x263)>x264));

    if (t63 != 1098) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x265 = UINT32_MAX;
	static int32_t x266 = 299485079;
	int64_t x267 = -72009529892159765LL;
	uint32_t t64 = 953076850U;

    t64 = (x265-((x266&x267)>x268));

    if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = INT16_MIN;
	static volatile int64_t x270 = -1LL;
	static uint8_t x271 = 20U;
	uint8_t x272 = UINT8_MAX;
	static int32_t t65 = 112728;

    t65 = (x269-((x270&x271)>x272));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x274 = INT8_MIN;
	int16_t x276 = 1;
	volatile int32_t t66 = -518026319;

    t66 = (x273-((x274&x275)>x276));

    if (t66 != 229) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x279 = 2U;
	volatile int16_t x280 = 3;
	volatile int64_t t67 = INT64_MAX;

    t67 = (x277-((x278&x279)>x280));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x281 = UINT32_MAX;
	uint16_t x282 = UINT16_MAX;
	volatile int64_t x283 = INT64_MIN;
	uint16_t x284 = 0U;
	uint32_t t68 = UINT32_MAX;

    t68 = (x281-((x282&x283)>x284));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	uint64_t x287 = 1807533LLU;
	int16_t x288 = INT16_MIN;
	uint64_t t69 = UINT64_MAX;

    t69 = (x285-((x286&x287)>x288));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x289 = -1;
	volatile int64_t x290 = INT64_MAX;
	volatile int16_t x291 = -1;
	int8_t x292 = INT8_MIN;
	static int32_t t70 = -102304;

    t70 = (x289-((x290&x291)>x292));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x294 = INT8_MIN;
	uint32_t x295 = 12932U;

    t71 = (x293-((x294&x295)>x296));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	volatile int8_t x299 = INT8_MIN;
	volatile int16_t x300 = 71;
	static volatile int32_t t72 = 7527686;

    t72 = (x297-((x298&x299)>x300));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = 12U;
	uint8_t x302 = 66U;
	volatile int8_t x304 = -6;
	volatile uint32_t t73 = 1834713U;

    t73 = (x301-((x302&x303)>x304));

    if (t73 != 12U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t74 = -17780;

    t74 = (x305-((x306&x307)>x308));

    if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x309 = INT64_MIN;
	int32_t x310 = -2992;
	static uint32_t x311 = 295596U;
	int64_t t75 = INT64_MIN;

    t75 = (x309-((x310&x311)>x312));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = 93602119035870983LLU;
	static uint64_t x314 = 7894LLU;
	int32_t x315 = INT32_MIN;
	int8_t x316 = -1;

    t76 = (x313-((x314&x315)>x316));

    if (t76 != 93602119035870983LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x318 = 3942178U;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;

    t77 = (x317-((x318&x319)>x320));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x322 = 6U;
	static int32_t x323 = INT32_MIN;
	volatile uint32_t x324 = 251U;
	volatile uint32_t t78 = 1U;

    t78 = (x321-((x322&x323)>x324));

    if (t78 != 293945396U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x334 = INT64_MAX;
	uint8_t x335 = 27U;
	uint32_t x336 = 8291U;
	volatile uint32_t t79 = 18702801U;

    t79 = (x333-((x334&x335)>x336));

    if (t79 != 7665196U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = -1;
	static uint64_t x338 = UINT64_MAX;
	uint32_t x339 = 4617U;
	int16_t x340 = 2;
	int32_t t80 = -41;

    t80 = (x337-((x338&x339)>x340));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x345 = 6524U;
	volatile int32_t t81 = -1949;

    t81 = (x345-((x346&x347)>x348));

    if (t81 != 6524) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	static int16_t x351 = -25;
	volatile uint8_t x352 = UINT8_MAX;
	int32_t t82 = 10647775;

    t82 = (x349-((x350&x351)>x352));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x354 = -1981;
	volatile int16_t x355 = 0;
	int32_t x356 = INT32_MAX;

    t83 = (x353-((x354&x355)>x356));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MAX;
	volatile int64_t t84 = 12268870448920397LL;

    t84 = (x357-((x358&x359)>x360));

    if (t84 != -210612725LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x361 = UINT64_MAX;
	volatile int64_t x363 = 2244LL;
	uint8_t x364 = 2U;
	volatile uint64_t t85 = 967025111LLU;

    t85 = (x361-((x362&x363)>x364));

    if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x365 = -33;
	int32_t x366 = 527339;
	int32_t x367 = -933600174;
	int8_t x368 = -1;
	volatile int32_t t86 = -731811;

    t86 = (x365-((x366&x367)>x368));

    if (t86 != -34) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	volatile uint64_t x372 = 253552306000043LLU;
	volatile int32_t t87 = -5483190;

    t87 = (x369-((x370&x371)>x372));

    if (t87 != 126) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	static int32_t t88 = -265692577;

    t88 = (x373-((x374&x375)>x376));

    if (t88 != 36) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = 1LL;
	int32_t x379 = INT32_MIN;
	int64_t t89 = 2441435496835803176LL;

    t89 = (x377-((x378&x379)>x380));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x381 = INT16_MAX;
	int32_t x382 = 6375984;
	static int32_t t90 = 124675;

    t90 = (x381-((x382&x383)>x384));

    if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x385 = INT8_MIN;
	int32_t x386 = -697082017;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = 48898315;
	static int32_t t91 = 1478;

    t91 = (x385-((x386&x387)>x388));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int32_t t92 = -14;

    t92 = (x389-((x390&x391)>x392));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x393 = 1;
	volatile uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t93 = -68;

    t93 = (x393-((x394&x395)>x396));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x397 = INT64_MIN;
	uint64_t x398 = 327395171LLU;
	int32_t x399 = -94260371;
	static volatile int64_t x400 = -6LL;
	int64_t t94 = INT64_MIN;

    t94 = (x397-((x398&x399)>x400));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = 271566060LLU;
	uint8_t x402 = UINT8_MAX;
	uint64_t x403 = 71530LLU;
	int8_t x404 = INT8_MIN;
	uint64_t t95 = 379651582300LLU;

    t95 = (x401-((x402&x403)>x404));

    if (t95 != 271566060LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x405 = INT16_MAX;
	uint8_t x407 = 0U;
	uint32_t x408 = 0U;
	static int32_t t96 = 181184;

    t96 = (x405-((x406&x407)>x408));

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 1627632494194LLU;
	volatile uint16_t x411 = 0U;
	int8_t x412 = INT8_MAX;
	int32_t t97 = -4;

    t97 = (x409-((x410&x411)>x412));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x413 = INT8_MAX;
	volatile uint64_t x414 = 1075354902057568341LLU;
	int8_t x415 = -26;
	volatile int16_t x416 = -1;

    t98 = (x413-((x414&x415)>x416));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x417 = -960120LL;
	int16_t x418 = -48;
	volatile int16_t x419 = -1;
	volatile int16_t x420 = INT16_MIN;
	static volatile int64_t t99 = -16287835494910240LL;

    t99 = (x417-((x418&x419)>x420));

    if (t99 != -960121LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x421 = 451;
	uint32_t x422 = 5734U;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = -5931112;
	volatile int32_t t100 = 0;

    t100 = (x421-((x422&x423)>x424));

    if (t100 != 451) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x426 = 99106944;
	static int16_t x427 = INT16_MAX;
	int32_t x428 = INT32_MIN;
	int64_t t101 = 2LL;

    t101 = (x425-((x426&x427)>x428));

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x431 = INT64_MIN;
	uint8_t x432 = UINT8_MAX;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (x429-((x430&x431)>x432));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MAX;
	volatile int32_t x435 = -3;
	volatile uint16_t x436 = 1759U;
	volatile int64_t t103 = -52838077936LL;

    t103 = (x433-((x434&x435)>x436));

    if (t103 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	uint32_t x439 = 352708730U;
	static volatile uint16_t x440 = 8267U;
	volatile int32_t t104 = -34;

    t104 = (x437-((x438&x439)>x440));

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = 20U;
	static int8_t x442 = INT8_MAX;
	volatile int16_t x443 = 1500;
	int16_t x444 = -10577;
	static int32_t t105 = 9747;

    t105 = (x441-((x442&x443)>x444));

    if (t105 != 19) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = 0U;
	static uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MAX;
	static volatile int32_t t106 = INT32_MIN;

    t106 = (x445-((x446&x447)>x448));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x454 = -1LL;
	int64_t x455 = -31404845LL;
	int32_t x456 = INT32_MIN;
	static volatile int32_t t107 = 63602;

    t107 = (x453-((x454&x455)>x456));

    if (t107 != 32766) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 2U;
	static uint64_t x460 = 382307312453169LLU;
	uint32_t t108 = 839U;

    t108 = (x457-((x458&x459)>x460));

    if (t108 != 2961869U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x461 = -1;
	static uint8_t x462 = 7U;
	int32_t x463 = -176;
	volatile uint16_t x464 = 3U;
	volatile int32_t t109 = -376942775;

    t109 = (x461-((x462&x463)>x464));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x465 = 1;
	int64_t x466 = -1LL;
	static uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	volatile int32_t t110 = 114557144;

    t110 = (x465-((x466&x467)>x468));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x470 = -1;
	int64_t x471 = 28889372722381LL;
	volatile int64_t x472 = -1LL;

    t111 = (x469-((x470&x471)>x472));

    if (t111 != -32769) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MIN;
	int64_t x475 = 99473LL;
	static int32_t x476 = INT32_MIN;
	volatile int32_t t112 = 10;

    t112 = (x473-((x474&x475)>x476));

    if (t112 != -32769) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = -1;
	static uint8_t x478 = 6U;
	static int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;
	int32_t t113 = 0;

    t113 = (x477-((x478&x479)>x480));

    if (t113 != -2) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MIN;
	int32_t x484 = 715;
	static volatile uint32_t t114 = 1252878U;

    t114 = (x481-((x482&x483)>x484));

    if (t114 != 13802718U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x485 = INT8_MIN;
	uint32_t x486 = 2941952U;
	int8_t x487 = -57;
	volatile uint32_t x488 = 932408627U;
	volatile int32_t t115 = 483863444;

    t115 = (x485-((x486&x487)>x488));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = 402;
	int16_t x494 = INT16_MIN;
	static int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MIN;
	int32_t t116 = 12548;

    t116 = (x493-((x494&x495)>x496));

    if (t116 != 402) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x497 = -1;
	uint16_t x498 = UINT16_MAX;
	volatile int16_t x499 = INT16_MAX;
	static uint64_t x500 = 3619803669499021LLU;
	volatile int32_t t117 = -41844434;

    t117 = (x497-((x498&x499)>x500));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x501 = INT16_MIN;
	volatile int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int32_t t118 = -230967421;

    t118 = (x501-((x502&x503)>x504));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x505 = 907514122431940LL;
	volatile int64_t x507 = 16256100LL;
	int8_t x508 = INT8_MAX;
	int64_t t119 = 13412699446447LL;

    t119 = (x505-((x506&x507)>x508));

    if (t119 != 907514122431939LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x509 = 469295293854356LLU;
	uint64_t x510 = 282251LLU;
	static int32_t x511 = INT32_MIN;
	int8_t x512 = INT8_MAX;
	static volatile uint64_t t120 = 386LLU;

    t120 = (x509-((x510&x511)>x512));

    if (t120 != 469295293854356LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x515 = 62006576LL;
	static volatile int64_t t121 = 6LL;

    t121 = (x513-((x514&x515)>x516));

    if (t121 != -2LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x517 = 62U;
	uint8_t x518 = 10U;
	uint16_t x519 = 460U;
	static int16_t x520 = INT16_MAX;
	volatile int32_t t122 = 6406;

    t122 = (x517-((x518&x519)>x520));

    if (t122 != 62) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	static int32_t x522 = -1;
	static volatile uint32_t x524 = 16U;
	volatile int32_t t123 = -32399;

    t123 = (x521-((x522&x523)>x524));

    if (t123 != 65534) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = -59;
	uint32_t x527 = 7707587U;
	int64_t x528 = INT64_MAX;
	int32_t t124 = 1564;

    t124 = (x525-((x526&x527)>x528));

    if (t124 != -59) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x529 = INT64_MAX;
	int32_t x531 = INT32_MIN;
	uint64_t x532 = 218686138LLU;
	int64_t t125 = INT64_MAX;

    t125 = (x529-((x530&x531)>x532));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = -208;
	int8_t x535 = -1;
	int16_t x536 = -1;
	volatile int32_t t126 = -15;

    t126 = (x533-((x534&x535)>x536));

    if (t126 != -208) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x539 = 1;
	volatile int64_t x540 = INT64_MIN;
	int32_t t127 = -63568;

    t127 = (x537-((x538&x539)>x540));

    if (t127 != 254) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x541 = 1013989591U;
	int16_t x543 = INT16_MAX;
	static int16_t x544 = INT16_MIN;
	volatile uint32_t t128 = 81715U;

    t128 = (x541-((x542&x543)>x544));

    if (t128 != 1013989590U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	uint16_t x546 = 1550U;
	volatile int16_t x547 = 4914;
	int32_t x548 = INT32_MIN;
	uint64_t t129 = 505817788376LLU;

    t129 = (x545-((x546&x547)>x548));

    if (t129 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x549 = INT64_MIN;
	static int64_t x550 = 5675LL;
	uint32_t x552 = UINT32_MAX;
	volatile int64_t t130 = INT64_MIN;

    t130 = (x549-((x550&x551)>x552));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x553 = INT64_MIN;
	int16_t x554 = -332;
	volatile uint32_t x555 = 11U;
	int32_t x556 = INT32_MIN;

    t131 = (x553-((x554&x555)>x556));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x561 = UINT32_MAX;
	static volatile int8_t x563 = -1;
	int32_t x564 = 909;
	uint32_t t132 = 4779U;

    t132 = (x561-((x562&x563)>x564));

    if (t132 != 4294967294U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x566 = 21U;
	uint8_t x567 = 7U;
	int64_t x568 = -15967712861764225LL;
	static volatile int32_t t133 = 961835;

    t133 = (x565-((x566&x567)>x568));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = UINT64_MAX;
	int8_t x571 = INT8_MAX;
	int16_t x572 = INT16_MIN;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x569-((x570&x571)>x572));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x573 = UINT32_MAX;
	volatile int16_t x574 = INT16_MIN;
	volatile int32_t x576 = INT32_MIN;

    t135 = (x573-((x574&x575)>x576));

    if (t135 != 4294967294U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x577 = UINT32_MAX;
	int8_t x578 = -1;
	static uint32_t x579 = UINT32_MAX;
	int64_t x580 = -1LL;
	static volatile uint32_t t136 = 164219U;

    t136 = (x577-((x578&x579)>x580));

    if (t136 != 4294967294U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x581 = INT8_MAX;
	static uint32_t x582 = 1192U;
	volatile int32_t x583 = -10;
	int8_t x584 = -1;

    t137 = (x581-((x582&x583)>x584));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x585 = 1248699U;
	int64_t x587 = INT64_MIN;
	uint32_t x588 = 5U;
	static volatile uint32_t t138 = 2164U;

    t138 = (x585-((x586&x587)>x588));

    if (t138 != 1248699U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x589 = 493995995LLU;
	volatile int8_t x590 = INT8_MIN;
	int8_t x591 = 1;
	int16_t x592 = INT16_MAX;
	volatile uint64_t t139 = 2041LLU;

    t139 = (x589-((x590&x591)>x592));

    if (t139 != 493995995LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x593 = -13588969LL;
	static int16_t x594 = -4087;
	static volatile uint8_t x595 = 0U;
	static int16_t x596 = -1;
	volatile int64_t t140 = 117799060789LL;

    t140 = (x593-((x594&x595)>x596));

    if (t140 != -13588970LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x600 = -1LL;
	static int32_t t141 = INT32_MIN;

    t141 = (x597-((x598&x599)>x600));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x601 = INT32_MIN;
	int64_t x603 = INT64_MIN;
	volatile int8_t x604 = 18;

    t142 = (x601-((x602&x603)>x604));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x605 = -4097804;
	static int8_t x607 = INT8_MIN;
	volatile uint8_t x608 = 93U;
	int32_t t143 = -334;

    t143 = (x605-((x606&x607)>x608));

    if (t143 != -4097805) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	int16_t x612 = INT16_MAX;
	int64_t t144 = 63570621380934926LL;

    t144 = (x609-((x610&x611)>x612));

    if (t144 != -297814907636825187LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x613 = -107086025LL;
	static uint16_t x614 = 6U;
	volatile uint8_t x615 = UINT8_MAX;
	int64_t t145 = 68100260752LL;

    t145 = (x613-((x614&x615)>x616));

    if (t145 != -107086026LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x617 = -1;
	int8_t x618 = INT8_MIN;
	uint8_t x620 = 2U;

    t146 = (x617-((x618&x619)>x620));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x621 = -4008;
	int8_t x624 = -6;
	static int32_t t147 = 281360257;

    t147 = (x621-((x622&x623)>x624));

    if (t147 != -4009) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x629 = 2U;
	uint64_t x630 = 4171202348606685643LLU;
	int16_t x631 = -1;
	uint32_t x632 = UINT32_MAX;
	volatile int32_t t148 = 298;

    t148 = (x629-((x630&x631)>x632));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x634 = INT16_MAX;
	int32_t t149 = 22310;

    t149 = (x633-((x634&x635)>x636));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x637 = -1;
	uint64_t x638 = 968729601LLU;
	uint32_t x640 = 223221019U;
	volatile int32_t t150 = -8092;

    t150 = (x637-((x638&x639)>x640));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = 1;
	static volatile int32_t x643 = 891961004;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t151 = -382;

    t151 = (x641-((x642&x643)>x644));

    if (t151 != -129) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x645 = 119457LL;
	int32_t x646 = -1194819;
	static int64_t t152 = -2549424663LL;

    t152 = (x645-((x646&x647)>x648));

    if (t152 != 119457LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x653 = -1;
	uint16_t x654 = 309U;
	uint8_t x655 = UINT8_MAX;
	int8_t x656 = INT8_MIN;
	int32_t t153 = 0;

    t153 = (x653-((x654&x655)>x656));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x657 = 12U;
	int16_t x658 = -1;
	volatile int16_t x659 = INT16_MAX;
	volatile int32_t t154 = 1;

    t154 = (x657-((x658&x659)>x660));

    if (t154 != 12) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x661 = 2U;
	int8_t x662 = INT8_MIN;
	int64_t x664 = -3629190LL;
	static int32_t t155 = -671968055;

    t155 = (x661-((x662&x663)>x664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x665 = 1136985400985524009LLU;
	int8_t x666 = 18;
	volatile int64_t x667 = INT64_MIN;
	volatile uint64_t t156 = 29815LLU;

    t156 = (x665-((x666&x667)>x668));

    if (t156 != 1136985400985524008LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x669 = -1;
	volatile uint8_t x670 = UINT8_MAX;
	int32_t x671 = -1;
	int8_t x672 = INT8_MAX;
	volatile int32_t t157 = 145507;

    t157 = (x669-((x670&x671)>x672));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x678 = INT16_MAX;
	int8_t x679 = INT8_MAX;
	int32_t t158 = 56;

    t158 = (x677-((x678&x679)>x680));

    if (t158 != 254) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x681 = -1;
	static int16_t x682 = -5364;
	int8_t x683 = -1;
	int32_t t159 = 51615143;

    t159 = (x681-((x682&x683)>x684));

    if (t159 != -2) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x685 = 24U;
	int8_t x686 = 14;
	uint8_t x687 = 38U;
	volatile uint32_t t160 = 2056730273U;

    t160 = (x685-((x686&x687)>x688));

    if (t160 != 23U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x689 = 443230;
	int16_t x692 = INT16_MAX;

    t161 = (x689-((x690&x691)>x692));

    if (t161 != 443229) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x693 = 107754LLU;
	uint64_t x694 = 301214639020836722LLU;
	uint8_t x695 = 2U;
	volatile int8_t x696 = 0;
	uint64_t t162 = 3054236999LLU;

    t162 = (x693-((x694&x695)>x696));

    if (t162 != 107753LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = INT16_MIN;
	int16_t x700 = INT16_MAX;
	int32_t t163 = -1958275;

    t163 = (x697-((x698&x699)>x700));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x701 = INT16_MIN;
	static int32_t x702 = INT32_MAX;
	uint32_t x703 = 483379U;
	int8_t x704 = INT8_MIN;
	int32_t t164 = -3273;

    t164 = (x701-((x702&x703)>x704));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x705 = -1;
	static int64_t x706 = -26860707LL;
	static int64_t x707 = -1LL;
	volatile int32_t t165 = 9;

    t165 = (x705-((x706&x707)>x708));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x709 = INT16_MIN;
	int32_t x710 = 3156;
	int16_t x711 = INT16_MIN;
	int16_t x712 = 3434;

    t166 = (x709-((x710&x711)>x712));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x713 = -825741943408039194LL;
	int32_t x715 = 3977;
	static int64_t t167 = 7628135239404165LL;

    t167 = (x713-((x714&x715)>x716));

    if (t167 != -825741943408039195LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x718 = -3;
	int16_t x720 = INT16_MIN;
	uint64_t t168 = 26877LLU;

    t168 = (x717-((x718&x719)>x720));

    if (t168 != 4893878LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x722 = INT32_MIN;
	int8_t x724 = INT8_MAX;
	int32_t t169 = 0;

    t169 = (x721-((x722&x723)>x724));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x726 = 0U;
	int8_t x727 = -1;
	uint16_t x728 = 85U;
	int32_t t170 = 131394118;

    t170 = (x725-((x726&x727)>x728));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x729 = -1LL;
	volatile uint16_t x730 = UINT16_MAX;
	uint16_t x731 = UINT16_MAX;
	volatile int64_t t171 = 6537455497471LL;

    t171 = (x729-((x730&x731)>x732));

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x733 = INT16_MIN;
	static int64_t x734 = INT64_MIN;
	static volatile int32_t x735 = INT32_MIN;
	volatile int32_t t172 = -9869458;

    t172 = (x733-((x734&x735)>x736));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x739 = INT32_MAX;
	int16_t x740 = INT16_MIN;
	volatile int64_t t173 = 741624LL;

    t173 = (x737-((x738&x739)>x740));

    if (t173 != 66722283LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x741 = INT64_MIN;
	uint32_t x742 = 3U;
	uint32_t x743 = 706707U;
	volatile int8_t x744 = INT8_MAX;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x741-((x742&x743)>x744));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x749 = INT16_MIN;
	int16_t x751 = -3;

    t175 = (x749-((x750&x751)>x752));

    if (t175 != -32769) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x753 = 9476U;
	int64_t x754 = -1LL;
	int8_t x755 = -3;

    t176 = (x753-((x754&x755)>x756));

    if (t176 != 9476) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x757 = INT32_MIN;
	volatile uint64_t x758 = UINT64_MAX;
	volatile int32_t x759 = 409634308;
	int64_t x760 = 174974409205LL;
	int32_t t177 = INT32_MIN;

    t177 = (x757-((x758&x759)>x760));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x761 = 338U;
	static int16_t x762 = INT16_MIN;
	int64_t x763 = INT64_MIN;
	int32_t x764 = INT32_MIN;

    t178 = (x761-((x762&x763)>x764));

    if (t178 != 338U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x765 = 1869U;
	int32_t x766 = INT32_MIN;
	uint32_t x767 = 12788U;
	volatile int32_t t179 = -3;

    t179 = (x765-((x766&x767)>x768));

    if (t179 != 1869) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x769 = -3;
	int64_t x770 = -3521340LL;
	int8_t x772 = INT8_MAX;
	int32_t t180 = -206090857;

    t180 = (x769-((x770&x771)>x772));

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x773 = 1807634961024489852LLU;
	static int16_t x775 = INT16_MIN;
	volatile uint32_t x776 = 120003U;
	uint64_t t181 = 61867LLU;

    t181 = (x773-((x774&x775)>x776));

    if (t181 != 1807634961024489852LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x777 = UINT8_MAX;
	int16_t x778 = INT16_MIN;
	int64_t x779 = INT64_MIN;
	int32_t t182 = -12965534;

    t182 = (x777-((x778&x779)>x780));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x782 = 8420751812197LL;
	volatile int16_t x784 = INT16_MIN;
	static volatile int32_t t183 = -1914048;

    t183 = (x781-((x782&x783)>x784));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x787 = 20U;
	static int8_t x788 = INT8_MIN;
	static int32_t t184 = -2;

    t184 = (x785-((x786&x787)>x788));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MIN;
	volatile int16_t x791 = INT16_MIN;
	uint8_t x792 = UINT8_MAX;
	static int32_t t185 = 1;

    t185 = (x789-((x790&x791)>x792));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x794 = INT64_MIN;
	uint32_t x795 = 515991272U;
	int64_t x796 = INT64_MAX;
	int32_t t186 = -410305;

    t186 = (x793-((x794&x795)>x796));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x797 = 6U;
	uint8_t x798 = 3U;
	static uint32_t x799 = 528982U;
	static volatile int64_t x800 = 3362870194414LL;
	volatile int32_t t187 = -153;

    t187 = (x797-((x798&x799)>x800));

    if (t187 != 6) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x802 = INT16_MIN;
	int16_t x803 = INT16_MIN;
	volatile int32_t x804 = -1;
	static int32_t t188 = -12918697;

    t188 = (x801-((x802&x803)>x804));

    if (t188 != 12) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x809 = 1U;
	static int32_t x810 = INT32_MAX;
	volatile int16_t x811 = INT16_MIN;
	static uint64_t x812 = UINT64_MAX;
	volatile int32_t t189 = 1034355344;

    t189 = (x809-((x810&x811)>x812));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x813 = -47;
	int16_t x814 = INT16_MIN;
	static volatile int16_t x815 = -1;
	int64_t x816 = INT64_MAX;
	volatile int32_t t190 = -12263643;

    t190 = (x813-((x814&x815)>x816));

    if (t190 != -47) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x817 = 2U;
	volatile int16_t x818 = 1;
	int8_t x819 = 5;
	int16_t x820 = -186;
	int32_t t191 = -3498;

    t191 = (x817-((x818&x819)>x820));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x822 = 9;
	int64_t x823 = 32779656668893LL;

    t192 = (x821-((x822&x823)>x824));

    if (t192 != -129) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x825 = 48U;
	static int16_t x826 = INT16_MIN;
	uint8_t x827 = 11U;
	uint16_t x828 = 25204U;
	static volatile int32_t t193 = -2864;

    t193 = (x825-((x826&x827)>x828));

    if (t193 != 48) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x829 = INT8_MAX;
	int16_t x830 = INT16_MIN;
	int8_t x831 = INT8_MIN;
	int32_t x832 = -1;
	int32_t t194 = 85;

    t194 = (x829-((x830&x831)>x832));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x837 = UINT8_MAX;
	int32_t x838 = -8429847;
	int8_t x839 = INT8_MAX;
	int8_t x840 = INT8_MAX;
	volatile int32_t t195 = -16;

    t195 = (x837-((x838&x839)>x840));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x841 = INT64_MAX;
	int16_t x842 = -1;
	int64_t t196 = 113830852447LL;

    t196 = (x841-((x842&x843)>x844));

    if (t196 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x845 = 1;
	int64_t x846 = INT64_MIN;
	int8_t x847 = 1;

    t197 = (x845-((x846&x847)>x848));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x853 = 110U;
	int64_t x854 = -1LL;
	uint32_t x855 = 1U;
	int8_t x856 = INT8_MIN;
	int32_t t198 = -21;

    t198 = (x853-((x854&x855)>x856));

    if (t198 != 109) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x857 = 755071U;
	int16_t x859 = -19;
	static int32_t x860 = INT32_MAX;

    t199 = (x857-((x858&x859)>x860));

    if (t199 != 755071U) { NG(); } else { ; }
	
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

