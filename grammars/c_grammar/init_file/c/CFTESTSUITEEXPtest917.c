
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

int64_t x4 = INT64_MAX;
uint64_t x6 = UINT64_MAX;
int32_t t1 = -155541;
int64_t x11 = 53820LL;
uint8_t x21 = UINT8_MAX;
int64_t x28 = INT64_MIN;
volatile int32_t t6 = -1;
volatile uint8_t x33 = 95U;
volatile uint32_t x34 = 951188961U;
volatile int8_t x39 = -1;
uint8_t x46 = UINT8_MAX;
int8_t x48 = INT8_MIN;
static int32_t t11 = -182115;
uint16_t x50 = UINT16_MAX;
volatile int32_t t12 = -3561245;
volatile int32_t t13 = -4;
static uint32_t x64 = UINT32_MAX;
static int16_t x67 = -1;
int16_t x68 = INT16_MIN;
volatile int8_t x70 = INT8_MIN;
static int16_t x75 = INT16_MAX;
int32_t x76 = 0;
uint16_t x87 = UINT16_MAX;
static uint64_t x88 = 32LLU;
int32_t t21 = 1;
uint16_t x91 = UINT16_MAX;
int64_t x96 = -251830800542299699LL;
int8_t x97 = INT8_MIN;
int16_t x101 = 52;
volatile uint8_t x102 = 71U;
int8_t x112 = -1;
static uint16_t x117 = UINT16_MAX;
int8_t x123 = 1;
int32_t t30 = -339;
static int16_t x127 = -1;
volatile int32_t x131 = INT32_MIN;
uint32_t x133 = 101842867U;
uint64_t x144 = 1235066289670899410LLU;
static int8_t x151 = INT8_MIN;
static int64_t x156 = -29769966LL;
volatile uint32_t x159 = 19113U;
int64_t x167 = -1LL;
volatile int16_t x168 = -1;
int32_t t39 = -210033938;
static int32_t x177 = INT32_MIN;
volatile int32_t t43 = 11651;
volatile int32_t t44 = 4;
static int32_t x193 = INT32_MIN;
volatile uint16_t x197 = UINT16_MAX;
int64_t x205 = -95605545308309338LL;
int8_t x206 = -1;
uint32_t x217 = 53U;
volatile int32_t t54 = -3072;
uint64_t x231 = UINT64_MAX;
int64_t x232 = INT64_MIN;
int16_t x240 = -1;
volatile int8_t x244 = -16;
uint32_t x248 = 269153U;
volatile int32_t x252 = -1;
uint16_t x254 = 151U;
int8_t x258 = -30;
volatile int16_t x264 = 1;
int64_t x267 = INT64_MIN;
uint32_t x270 = 15889753U;
volatile int32_t t67 = 14;
static volatile int32_t t69 = 26;
static volatile uint64_t x294 = 439475724095LLU;
static volatile uint16_t x296 = 132U;
int32_t t72 = 102;
volatile int32_t x302 = INT32_MIN;
int16_t x305 = INT16_MAX;
uint8_t x307 = 101U;
int32_t x309 = INT32_MIN;
int8_t x311 = INT8_MIN;
int64_t x315 = INT64_MIN;
volatile int32_t t76 = 390210153;
static int8_t x320 = -25;
int16_t x321 = 1372;
int8_t x329 = -1;
int32_t x330 = INT32_MIN;
int64_t x332 = -1LL;
int32_t t81 = 5993144;
volatile int32_t x338 = INT32_MIN;
int32_t x339 = INT32_MAX;
int32_t t82 = 8000;
int32_t x341 = 95;
int64_t x344 = 204529LL;
volatile int32_t t83 = 9;
volatile int32_t t84 = -505704209;
int16_t x349 = -1140;
int64_t x358 = INT64_MIN;
volatile int32_t x364 = -43928;
static int32_t t88 = 0;
static volatile int32_t t89 = 225564412;
uint8_t x386 = 0U;
volatile uint16_t x398 = 0U;
volatile int32_t t96 = -452955;
static int8_t x403 = INT8_MAX;
uint16_t x404 = 0U;
volatile int32_t t98 = 2366;
static int16_t x416 = INT16_MIN;
volatile int32_t t101 = -403963158;
int16_t x423 = INT16_MIN;
uint64_t x433 = UINT64_MAX;
volatile int32_t x435 = INT32_MIN;
volatile int64_t x436 = -59208297LL;
int16_t x445 = INT16_MIN;
volatile int32_t x449 = INT32_MAX;
uint8_t x456 = UINT8_MAX;
int16_t x462 = INT16_MIN;
uint64_t x464 = 4352191548681781224LLU;
int32_t x466 = INT32_MIN;
static int32_t t113 = 99096;
int32_t x469 = INT32_MIN;
int64_t x474 = -1LL;
int32_t t115 = -12;
int64_t x480 = INT64_MAX;
int32_t x481 = INT32_MIN;
static uint16_t x483 = 388U;
volatile int16_t x485 = INT16_MIN;
volatile int16_t x486 = INT16_MIN;
volatile int16_t x490 = INT16_MAX;
volatile int32_t t119 = 612476883;
static int16_t x497 = 0;
volatile int32_t t122 = 2839;
volatile uint64_t x505 = UINT64_MAX;
int16_t x506 = INT16_MIN;
static volatile int32_t x507 = INT32_MIN;
uint8_t x509 = 11U;
int16_t x510 = INT16_MAX;
uint16_t x512 = 5U;
int16_t x514 = -9;
static int16_t x521 = INT16_MIN;
int32_t x525 = 937;
uint16_t x538 = UINT16_MAX;
uint8_t x541 = UINT8_MAX;
volatile uint8_t x567 = 70U;
uint8_t x589 = UINT8_MAX;
static int16_t x590 = -1;
int32_t t144 = 1655287;
static int64_t x599 = INT64_MAX;
int16_t x602 = -1;
int16_t x610 = -1;
int32_t x615 = 20851;
int16_t x616 = -1;
uint64_t x620 = 3318760723906923LLU;
static int8_t x622 = 2;
volatile uint32_t x631 = 2869625U;
static int16_t x632 = INT16_MIN;
uint8_t x633 = 8U;
static volatile int8_t x637 = -29;
int16_t x638 = 0;
static uint16_t x642 = 9U;
static int64_t x643 = INT64_MIN;
int64_t x651 = INT64_MIN;
int32_t x666 = INT32_MIN;
uint32_t x667 = 3567U;
int64_t x672 = 583LL;
static int64_t x673 = INT64_MAX;
int16_t x675 = -1;
uint16_t x680 = UINT16_MAX;
static int64_t x684 = INT64_MIN;
int32_t x686 = INT32_MAX;
int8_t x687 = INT8_MIN;
int16_t x688 = INT16_MIN;
volatile int32_t t165 = -4;
int32_t t167 = 101432;
volatile uint8_t x697 = 3U;
int64_t x703 = INT64_MIN;
int32_t x712 = INT32_MAX;
volatile int32_t t171 = 2041484;
static volatile int8_t x715 = INT8_MIN;
static int32_t x718 = INT32_MIN;
int32_t x733 = INT32_MIN;
int16_t x739 = INT16_MIN;
int8_t x741 = INT8_MAX;
volatile int32_t t179 = 1003226672;
static volatile int32_t x747 = INT32_MIN;
volatile uint32_t x753 = 28820099U;
static int64_t x756 = -69LL;
int8_t x759 = -1;
volatile uint16_t x777 = UINT16_MAX;
uint8_t x787 = UINT8_MAX;
int8_t x792 = -1;
uint32_t x802 = 30U;
uint32_t x807 = 139783142U;
volatile int32_t x814 = 3988;
int16_t x818 = -4;
static volatile int32_t t199 = 19141426;


void f0(void) {
    	volatile int8_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -1601;

    t0 = (x1!=((x2%x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 3163U;
	uint16_t x7 = 1339U;
	int8_t x8 = -2;

    t1 = (x5!=((x6%x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -46719;

    t2 = (x9!=((x10%x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 12572U;
	int32_t x14 = INT32_MAX;
	uint32_t x15 = 35458240U;
	static uint8_t x16 = UINT8_MAX;
	int32_t t3 = 746697;

    t3 = (x13!=((x14%x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 5LLU;
	uint64_t x18 = UINT64_MAX;
	volatile int64_t x19 = -636513490398LL;
	uint64_t x20 = 13075608991796LLU;
	volatile int32_t t4 = -1;

    t4 = (x17!=((x18%x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 0;
	volatile int16_t x23 = -1;
	volatile int32_t x24 = -1;
	int32_t t5 = 3;

    t5 = (x21!=((x22%x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 4U;
	static int64_t x26 = -1311386528040009LL;
	int16_t x27 = INT16_MAX;

    t6 = (x25!=((x26%x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint16_t x30 = 0U;
	int64_t x31 = -1309LL;
	uint32_t x32 = 3365U;
	volatile int32_t t7 = 4;

    t7 = (x29!=((x30%x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x35 = 33614221646534LLU;
	uint8_t x36 = 42U;
	int32_t t8 = 13079;

    t8 = (x33!=((x34%x35)<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -7212;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = -293622353;

    t9 = (x37!=((x38%x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 2;
	uint64_t x42 = 392571509LLU;
	uint8_t x43 = 72U;
	uint32_t x44 = 119U;
	int32_t t10 = -41034327;

    t10 = (x41!=((x42%x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	int16_t x47 = -1;

    t11 = (x45!=((x46%x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 1;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -1;

    t12 = (x49!=((x50%x51)<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = INT64_MIN;
	uint8_t x54 = 4U;
	int16_t x55 = -1;
	static uint32_t x56 = UINT32_MAX;

    t13 = (x53!=((x54%x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -1;
	static volatile uint64_t x60 = 1087420LLU;
	volatile int32_t t14 = 7027;

    t14 = (x57!=((x58%x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	volatile int8_t x62 = INT8_MIN;
	int64_t x63 = 234198LL;
	volatile int32_t t15 = -7263;

    t15 = (x61!=((x62%x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 0;
	int32_t x66 = INT32_MIN;
	int32_t t16 = 11;

    t16 = (x65!=((x66%x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	volatile uint8_t x71 = 1U;
	uint32_t x72 = 6525U;
	volatile int32_t t17 = -7;

    t17 = (x69!=((x70%x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	volatile uint8_t x74 = 7U;
	static int32_t t18 = 69307;

    t18 = (x73!=((x74%x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -101;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 58788029998509LL;
	int16_t x80 = 105;
	int32_t t19 = -1;

    t19 = (x77!=((x78%x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x81 = INT32_MIN;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = 74U;
	int16_t x84 = INT16_MIN;
	static int32_t t20 = 14267;

    t20 = (x81!=((x82%x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = -1037685709;
	int64_t x86 = INT64_MIN;

    t21 = (x85!=((x86%x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	volatile uint16_t x90 = 8U;
	uint64_t x92 = 40LLU;
	int32_t t22 = -3;

    t22 = (x89!=((x90%x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1424;
	int64_t x94 = 31896560164503LL;
	static int32_t x95 = INT32_MIN;
	volatile int32_t t23 = 5;

    t23 = (x93!=((x94%x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	static volatile uint32_t x99 = 31913289U;
	int32_t x100 = -1;
	volatile int32_t t24 = -4545123;

    t24 = (x97!=((x98%x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = 94U;
	uint64_t x104 = 415623355LLU;
	int32_t t25 = 21717;

    t25 = (x101!=((x102%x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static uint8_t x106 = 57U;
	int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 59;

    t26 = (x105!=((x106%x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -1121288;
	int64_t x110 = INT64_MAX;
	volatile int8_t x111 = INT8_MIN;
	volatile int32_t t27 = 1067143142;

    t27 = (x109!=((x110%x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	static uint16_t x114 = 807U;
	int64_t x115 = -1LL;
	volatile int8_t x116 = 1;
	volatile int32_t t28 = 11248;

    t28 = (x113!=((x114%x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	int16_t x119 = 40;
	uint16_t x120 = 157U;
	static int32_t t29 = -106349654;

    t29 = (x117!=((x118%x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	static int16_t x122 = INT16_MIN;
	int32_t x124 = INT32_MAX;

    t30 = (x121!=((x122%x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static int64_t x126 = -1LL;
	int64_t x128 = -316137147878233LL;
	volatile int32_t t31 = 597760;

    t31 = (x125!=((x126%x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -3;
	int16_t x130 = INT16_MIN;
	static int32_t x132 = INT32_MAX;
	static int32_t t32 = -70;

    t32 = (x129!=((x130%x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	int16_t x136 = 97;
	int32_t t33 = -212;

    t33 = (x133!=((x134%x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	static uint32_t x142 = UINT32_MAX;
	int16_t x143 = -5167;
	int32_t t34 = 0;

    t34 = (x141!=((x142%x143)<=x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	static uint32_t x152 = 350459175U;
	int32_t t35 = -5651464;

    t35 = (x149!=((x150%x151)<=x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	static volatile int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MAX;
	volatile int32_t t36 = 0;

    t36 = (x153!=((x154%x155)<=x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = -1;
	volatile int16_t x158 = -1;
	int32_t x160 = INT32_MIN;
	int32_t t37 = 142143234;

    t37 = (x157!=((x158%x159)<=x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = 4U;
	static uint8_t x162 = 25U;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	int32_t t38 = 2198;

    t38 = (x161!=((x162%x163)<=x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x165 = INT16_MIN;
	uint32_t x166 = 2U;

    t39 = (x165!=((x166%x167)<=x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x169 = -1LL;
	int16_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = 27U;
	volatile int32_t t40 = 385;

    t40 = (x169!=((x170%x171)<=x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = UINT8_MAX;
	int16_t x174 = -15;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t41 = -1;

    t41 = (x173!=((x174%x175)<=x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x178 = 27402U;
	int32_t x179 = -1;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t42 = -55;

    t42 = (x177!=((x178%x179)<=x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = 3U;
	static int32_t x182 = -1;
	static volatile int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MAX;

    t43 = (x181!=((x182%x183)<=x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x185 = INT16_MIN;
	int32_t x186 = -3;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 253080293U;

    t44 = (x185!=((x186%x187)<=x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = 505U;
	int8_t x191 = -1;
	uint64_t x192 = 16592334326846128LLU;
	static int32_t t45 = -1951136;

    t45 = (x189!=((x190%x191)<=x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x194 = INT64_MAX;
	uint32_t x195 = 9U;
	static uint32_t x196 = 6599U;
	volatile int32_t t46 = -3200;

    t46 = (x193!=((x194%x195)<=x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x198 = -1108522;
	int64_t x199 = -1LL;
	int8_t x200 = INT8_MIN;
	int32_t t47 = -3;

    t47 = (x197!=((x198%x199)<=x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = -632710182583LL;
	static int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t48 = -898749;

    t48 = (x201!=((x202%x203)<=x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x207 = INT16_MAX;
	uint64_t x208 = 0LLU;
	int32_t t49 = -328933;

    t49 = (x205!=((x206%x207)<=x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x209 = 7501384537080LLU;
	volatile uint16_t x210 = 15U;
	uint32_t x211 = UINT32_MAX;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t50 = -219287158;

    t50 = (x209!=((x210%x211)<=x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 14LLU;
	int64_t x214 = -13576254908254898LL;
	volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = 101237022574LL;
	volatile int32_t t51 = -498386501;

    t51 = (x213!=((x214%x215)<=x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x218 = 1;
	uint16_t x219 = UINT16_MAX;
	uint16_t x220 = 6661U;
	int32_t t52 = 13;

    t52 = (x217!=((x218%x219)<=x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MAX;
	volatile uint16_t x223 = UINT16_MAX;
	static uint8_t x224 = 6U;
	volatile int32_t t53 = 121;

    t53 = (x221!=((x222%x223)<=x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x225 = 3350;
	volatile int64_t x226 = -132612LL;
	static int64_t x227 = INT64_MIN;
	int64_t x228 = -1LL;

    t54 = (x225!=((x226%x227)<=x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = INT16_MAX;
	volatile int64_t x230 = INT64_MAX;
	static int32_t t55 = -435315557;

    t55 = (x229!=((x230%x231)<=x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = -1;
	int32_t x234 = INT32_MAX;
	int64_t x235 = -1LL;
	volatile int32_t x236 = INT32_MIN;
	static volatile int32_t t56 = 55;

    t56 = (x233!=((x234%x235)<=x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = INT16_MIN;
	uint16_t x238 = 317U;
	volatile int64_t x239 = -111184978534LL;
	int32_t t57 = 122;

    t57 = (x237!=((x238%x239)<=x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x241 = -14866659280276LL;
	static uint16_t x242 = 366U;
	uint64_t x243 = UINT64_MAX;
	static int32_t t58 = 1732;

    t58 = (x241!=((x242%x243)<=x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x245 = -17;
	static uint8_t x246 = 6U;
	int16_t x247 = INT16_MAX;
	volatile int32_t t59 = -1762;

    t59 = (x245!=((x246%x247)<=x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x249 = INT16_MIN;
	uint32_t x250 = 34962U;
	uint16_t x251 = 147U;
	int32_t t60 = -52180495;

    t60 = (x249!=((x250%x251)<=x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x253 = 3461219LLU;
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = 17U;
	volatile int32_t t61 = -200535977;

    t61 = (x253!=((x254%x255)<=x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = -1;
	static int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t62 = 78041157;

    t62 = (x257!=((x258%x259)<=x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MIN;
	uint32_t x262 = 559U;
	int32_t x263 = INT32_MAX;
	static volatile int32_t t63 = -913920789;

    t63 = (x261!=((x262%x263)<=x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	static uint32_t x266 = UINT32_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t64 = -14;

    t64 = (x265!=((x266%x267)<=x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -99065124;
	int8_t x271 = INT8_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	static int32_t t65 = -89375;

    t65 = (x269!=((x270%x271)<=x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = UINT16_MAX;
	static volatile int16_t x274 = -1;
	static uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	volatile int32_t t66 = -2671;

    t66 = (x273!=((x274%x275)<=x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x277 = -14;
	static volatile int16_t x278 = INT16_MIN;
	uint16_t x279 = 1U;
	int8_t x280 = INT8_MIN;

    t67 = (x277!=((x278%x279)<=x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x281 = 11U;
	int8_t x282 = -17;
	int32_t x283 = 513898;
	uint32_t x284 = 1U;
	volatile int32_t t68 = -1;

    t68 = (x281!=((x282%x283)<=x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x285 = INT8_MAX;
	int32_t x286 = INT32_MIN;
	volatile uint16_t x287 = 2407U;
	int64_t x288 = 1LL;

    t69 = (x285!=((x286%x287)<=x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x289 = 6237U;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	uint16_t x292 = 2008U;
	int32_t t70 = 21351;

    t70 = (x289!=((x290%x291)<=x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = INT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	static volatile int32_t t71 = -99915170;

    t71 = (x293!=((x294%x295)<=x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	int64_t x299 = 12215567462555957LL;
	int16_t x300 = 0;

    t72 = (x297!=((x298%x299)<=x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = -1LL;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 135U;
	static volatile int32_t t73 = 2502594;

    t73 = (x301!=((x302%x303)<=x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x306 = INT8_MIN;
	int64_t x308 = -105622194500325LL;
	int32_t t74 = -25626;

    t74 = (x305!=((x306%x307)<=x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x310 = INT64_MIN;
	int8_t x312 = 2;
	static int32_t t75 = 6283167;

    t75 = (x309!=((x310%x311)<=x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x313 = INT8_MIN;
	static uint32_t x314 = 1318540018U;
	int16_t x316 = -1;

    t76 = (x313!=((x314%x315)<=x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -400375607;
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = INT16_MAX;
	volatile int32_t t77 = 18145320;

    t77 = (x317!=((x318%x319)<=x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x322 = 1;
	volatile int64_t x323 = -170294722440927463LL;
	uint32_t x324 = 879U;
	int32_t t78 = 16206;

    t78 = (x321!=((x322%x323)<=x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	int32_t t79 = 10192282;

    t79 = (x325!=((x326%x327)<=x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x331 = 712U;
	static int32_t t80 = 10371;

    t80 = (x329!=((x330%x331)<=x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x333 = 1;
	static int32_t x334 = INT32_MAX;
	int8_t x335 = 2;
	int32_t x336 = -577769616;

    t81 = (x333!=((x334%x335)<=x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	static uint8_t x340 = UINT8_MAX;

    t82 = (x337!=((x338%x339)<=x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x342 = 111U;
	volatile uint8_t x343 = UINT8_MAX;

    t83 = (x341!=((x342%x343)<=x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x345 = 93U;
	int64_t x346 = -1LL;
	volatile int8_t x347 = INT8_MIN;
	uint16_t x348 = 2871U;

    t84 = (x345!=((x346%x347)<=x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	int32_t t85 = 732;

    t85 = (x349!=((x350%x351)<=x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 79U;
	volatile int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = 225266272425306LLU;
	volatile int32_t t86 = -1445409;

    t86 = (x353!=((x354%x355)<=x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = 5U;
	uint64_t x359 = 886468523127450871LLU;
	int8_t x360 = INT8_MIN;
	int32_t t87 = -536344628;

    t87 = (x357!=((x358%x359)<=x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x361 = -26;
	uint32_t x362 = 236U;
	uint16_t x363 = 682U;

    t88 = (x361!=((x362%x363)<=x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	static int16_t x366 = INT16_MIN;
	uint16_t x367 = 137U;
	int8_t x368 = 8;

    t89 = (x365!=((x366%x367)<=x368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x373 = 5U;
	int16_t x374 = INT16_MIN;
	volatile uint32_t x375 = 19976731U;
	int64_t x376 = INT64_MAX;
	int32_t t90 = 55090600;

    t90 = (x373!=((x374%x375)<=x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MAX;
	uint64_t x378 = 218829175LLU;
	static uint8_t x379 = 1U;
	static uint8_t x380 = 9U;
	int32_t t91 = 11;

    t91 = (x377!=((x378%x379)<=x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x381 = 2U;
	int16_t x382 = 75;
	uint8_t x383 = 1U;
	uint64_t x384 = UINT64_MAX;
	int32_t t92 = 38696;

    t92 = (x381!=((x382%x383)<=x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x385 = -1;
	uint16_t x387 = UINT16_MAX;
	static int32_t x388 = INT32_MIN;
	static int32_t t93 = 27861431;

    t93 = (x385!=((x386%x387)<=x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = -1LL;
	uint8_t x390 = 6U;
	volatile int8_t x391 = INT8_MAX;
	int64_t x392 = 144456584135LL;
	volatile int32_t t94 = 6632;

    t94 = (x389!=((x390%x391)<=x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = 1;
	int32_t t95 = -375825;

    t95 = (x393!=((x394%x395)<=x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = 24068269541639LL;
	uint8_t x399 = UINT8_MAX;
	uint16_t x400 = 15U;

    t96 = (x397!=((x398%x399)<=x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x401 = 19401331745LLU;
	int64_t x402 = -1LL;
	volatile int32_t t97 = 6668;

    t97 = (x401!=((x402%x403)<=x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int64_t x406 = -1LL;
	volatile int32_t x407 = INT32_MAX;
	uint64_t x408 = 394159LLU;

    t98 = (x405!=((x406%x407)<=x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x409 = 1;
	volatile uint32_t x410 = UINT32_MAX;
	int32_t x411 = -13071;
	static uint64_t x412 = 26831LLU;
	volatile int32_t t99 = 233;

    t99 = (x409!=((x410%x411)<=x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x413 = INT8_MIN;
	int32_t x414 = -918007;
	int16_t x415 = INT16_MIN;
	volatile int32_t t100 = 46644;

    t100 = (x413!=((x414%x415)<=x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = INT8_MAX;
	uint8_t x418 = 15U;
	int16_t x419 = -1233;
	int16_t x420 = -1;

    t101 = (x417!=((x418%x419)<=x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MIN;
	uint64_t x422 = 318821976LLU;
	int32_t x424 = INT32_MIN;
	volatile int32_t t102 = -207666671;

    t102 = (x421!=((x422%x423)<=x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = -1;
	int16_t x426 = INT16_MAX;
	int8_t x427 = -11;
	int32_t x428 = INT32_MIN;
	int32_t t103 = 330788;

    t103 = (x425!=((x426%x427)<=x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x429 = 3689U;
	static int16_t x430 = INT16_MIN;
	uint64_t x431 = 3025LLU;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t104 = 232089;

    t104 = (x429!=((x430%x431)<=x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x434 = INT8_MIN;
	volatile int32_t t105 = 56325;

    t105 = (x433!=((x434%x435)<=x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = 0;
	uint64_t x438 = UINT64_MAX;
	uint64_t x439 = 24267557192LLU;
	uint32_t x440 = 45214U;
	static volatile int32_t t106 = -2435;

    t106 = (x437!=((x438%x439)<=x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x441 = INT32_MIN;
	static int32_t x442 = INT32_MIN;
	static int32_t x443 = 45558;
	uint16_t x444 = 6488U;
	int32_t t107 = -23799;

    t107 = (x441!=((x442%x443)<=x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x446 = UINT8_MAX;
	static uint64_t x447 = UINT64_MAX;
	volatile uint64_t x448 = 67LLU;
	int32_t t108 = 75552837;

    t108 = (x445!=((x446%x447)<=x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x450 = INT32_MAX;
	static volatile int8_t x451 = -1;
	uint16_t x452 = 5142U;
	int32_t t109 = -917;

    t109 = (x449!=((x450%x451)<=x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x453 = 5429353137220681687LLU;
	int64_t x454 = -123687LL;
	static uint16_t x455 = 2465U;
	static int32_t t110 = -1125;

    t110 = (x453!=((x454%x455)<=x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	static volatile int32_t t111 = 0;

    t111 = (x457!=((x458%x459)<=x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x461 = INT32_MIN;
	int8_t x463 = 56;
	int32_t t112 = -1;

    t112 = (x461!=((x462%x463)<=x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x465 = 89358LLU;
	static uint16_t x467 = UINT16_MAX;
	uint64_t x468 = UINT64_MAX;

    t113 = (x465!=((x466%x467)<=x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x470 = -1;
	uint8_t x471 = 35U;
	uint32_t x472 = 15027000U;
	volatile int32_t t114 = 4;

    t114 = (x469!=((x470%x471)<=x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x473 = INT32_MIN;
	static uint32_t x475 = 2U;
	int32_t x476 = 3;

    t115 = (x473!=((x474%x475)<=x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x477 = -1LL;
	int64_t x478 = INT64_MAX;
	int16_t x479 = INT16_MIN;
	static volatile int32_t t116 = 233;

    t116 = (x477!=((x478%x479)<=x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x482 = -1;
	volatile int64_t x484 = INT64_MIN;
	int32_t t117 = 11;

    t117 = (x481!=((x482%x483)<=x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x487 = INT16_MIN;
	static int64_t x488 = INT64_MAX;
	static int32_t t118 = -39244;

    t118 = (x485!=((x486%x487)<=x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int64_t x491 = -1LL;
	int16_t x492 = INT16_MIN;

    t119 = (x489!=((x490%x491)<=x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MAX;
	int64_t x494 = 237551982142183314LL;
	int16_t x495 = -13609;
	uint16_t x496 = 4U;
	int32_t t120 = 110;

    t120 = (x493!=((x494%x495)<=x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x498 = INT16_MIN;
	static volatile int64_t x499 = -290069555LL;
	volatile int16_t x500 = 0;
	static int32_t t121 = -13;

    t121 = (x497!=((x498%x499)<=x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x501 = 27040U;
	int8_t x502 = INT8_MAX;
	uint8_t x503 = 44U;
	uint64_t x504 = 273LLU;

    t122 = (x501!=((x502%x503)<=x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x508 = INT64_MIN;
	volatile int32_t t123 = -2208;

    t123 = (x505!=((x506%x507)<=x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x511 = 7U;
	volatile int32_t t124 = -219151;

    t124 = (x509!=((x510%x511)<=x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = -1LL;
	int8_t x515 = 1;
	int16_t x516 = -1;
	int32_t t125 = -29483;

    t125 = (x513!=((x514%x515)<=x516));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = -1;
	int8_t x518 = -1;
	static int8_t x519 = -13;
	volatile int8_t x520 = -1;
	int32_t t126 = 73580149;

    t126 = (x517!=((x518%x519)<=x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x522 = -2;
	uint32_t x523 = 343U;
	uint16_t x524 = UINT16_MAX;
	int32_t t127 = 454;

    t127 = (x521!=((x522%x523)<=x524));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x526 = -1;
	uint64_t x527 = 197183130LLU;
	int16_t x528 = -43;
	int32_t t128 = 0;

    t128 = (x525!=((x526%x527)<=x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x529 = 102647U;
	static volatile int32_t x530 = INT32_MIN;
	int16_t x531 = -6;
	static uint16_t x532 = UINT16_MAX;
	volatile int32_t t129 = 217551366;

    t129 = (x529!=((x530%x531)<=x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = 1;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 12;
	volatile int8_t x536 = INT8_MIN;
	int32_t t130 = 371;

    t130 = (x533!=((x534%x535)<=x536));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = 7359255847LL;
	int8_t x539 = INT8_MIN;
	static int64_t x540 = INT64_MAX;
	volatile int32_t t131 = -1;

    t131 = (x537!=((x538%x539)<=x540));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x542 = -1;
	int32_t x543 = 1;
	uint64_t x544 = 8821680222LLU;
	volatile int32_t t132 = 1222282;

    t132 = (x541!=((x542%x543)<=x544));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x545 = INT32_MAX;
	int32_t x546 = INT32_MIN;
	uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MAX;
	int32_t t133 = -6016;

    t133 = (x545!=((x546%x547)<=x548));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = 509276185LL;
	volatile uint32_t x550 = 1539318556U;
	uint8_t x551 = UINT8_MAX;
	volatile int16_t x552 = INT16_MIN;
	volatile int32_t t134 = 32832075;

    t134 = (x549!=((x550%x551)<=x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x553 = 1;
	volatile uint64_t x554 = 6131979096543931964LLU;
	volatile int8_t x555 = INT8_MIN;
	int16_t x556 = -1;
	volatile int32_t t135 = 38221679;

    t135 = (x553!=((x554%x555)<=x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x557 = INT64_MAX;
	static int8_t x558 = 1;
	uint64_t x559 = 2006578603901LLU;
	static int64_t x560 = INT64_MIN;
	volatile int32_t t136 = 19536;

    t136 = (x557!=((x558%x559)<=x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x565 = INT16_MIN;
	int32_t x566 = -1;
	int32_t x568 = -1;
	int32_t t137 = -182;

    t137 = (x565!=((x566%x567)<=x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = INT16_MIN;
	static int16_t x570 = -1;
	int16_t x571 = INT16_MIN;
	int32_t x572 = -1;
	static int32_t t138 = -160;

    t138 = (x569!=((x570%x571)<=x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x573 = -340549LL;
	uint16_t x574 = 0U;
	uint32_t x575 = UINT32_MAX;
	int8_t x576 = INT8_MAX;
	static volatile int32_t t139 = -7111263;

    t139 = (x573!=((x574%x575)<=x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x577 = UINT8_MAX;
	static int32_t x578 = -18;
	uint8_t x579 = 71U;
	int32_t x580 = INT32_MIN;
	volatile int32_t t140 = -13383799;

    t140 = (x577!=((x578%x579)<=x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = INT32_MIN;
	uint8_t x582 = UINT8_MAX;
	static int32_t x583 = -16126920;
	static int8_t x584 = INT8_MAX;
	volatile int32_t t141 = 21487;

    t141 = (x581!=((x582%x583)<=x584));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x585 = 156967LLU;
	int16_t x586 = -1;
	uint16_t x587 = 1328U;
	int32_t x588 = INT32_MAX;
	volatile int32_t t142 = -1;

    t142 = (x585!=((x586%x587)<=x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x591 = 7767505665515LLU;
	uint32_t x592 = 158U;
	int32_t t143 = -36;

    t143 = (x589!=((x590%x591)<=x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = -1;
	static uint8_t x594 = 2U;
	int8_t x595 = INT8_MAX;
	int64_t x596 = INT64_MIN;

    t144 = (x593!=((x594%x595)<=x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = INT16_MIN;
	uint8_t x598 = 9U;
	volatile int8_t x600 = 0;
	volatile int32_t t145 = -128681;

    t145 = (x597!=((x598%x599)<=x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x601 = UINT16_MAX;
	int64_t x603 = INT64_MIN;
	int64_t x604 = INT64_MAX;
	volatile int32_t t146 = -46586086;

    t146 = (x601!=((x602%x603)<=x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x605 = -1;
	uint8_t x606 = UINT8_MAX;
	static volatile int64_t x607 = -1LL;
	volatile int64_t x608 = -20511LL;
	volatile int32_t t147 = 2425974;

    t147 = (x605!=((x606%x607)<=x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x609 = INT16_MIN;
	static volatile int32_t x611 = INT32_MAX;
	int16_t x612 = -656;
	volatile int32_t t148 = -14227809;

    t148 = (x609!=((x610%x611)<=x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x614 = INT32_MIN;
	static int32_t t149 = 4;

    t149 = (x613!=((x614%x615)<=x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = INT8_MIN;
	int16_t x618 = INT16_MIN;
	static volatile int8_t x619 = INT8_MIN;
	volatile int32_t t150 = 852701395;

    t150 = (x617!=((x618%x619)<=x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	int64_t x623 = 3843387414LL;
	int64_t x624 = INT64_MIN;
	int32_t t151 = -121765;

    t151 = (x621!=((x622%x623)<=x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = 63942763U;
	int16_t x626 = -1;
	volatile int32_t x627 = INT32_MAX;
	static int8_t x628 = INT8_MAX;
	volatile int32_t t152 = -19078;

    t152 = (x625!=((x626%x627)<=x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = -53;
	volatile int32_t x630 = INT32_MAX;
	static int32_t t153 = 97;

    t153 = (x629!=((x630%x631)<=x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x634 = INT16_MIN;
	uint16_t x635 = UINT16_MAX;
	uint32_t x636 = 99946858U;
	static volatile int32_t t154 = 459099725;

    t154 = (x633!=((x634%x635)<=x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x639 = -745104;
	int8_t x640 = INT8_MIN;
	static int32_t t155 = -1975855;

    t155 = (x637!=((x638%x639)<=x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x641 = -971709435452LL;
	int16_t x644 = INT16_MIN;
	volatile int32_t t156 = 56371038;

    t156 = (x641!=((x642%x643)<=x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = INT8_MIN;
	int8_t x652 = 16;
	static int32_t t157 = -615682;

    t157 = (x649!=((x650%x651)<=x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x653 = 52;
	int32_t x654 = INT32_MIN;
	volatile int16_t x655 = INT16_MIN;
	int32_t x656 = -4;
	int32_t t158 = 8944936;

    t158 = (x653!=((x654%x655)<=x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x657 = 16249U;
	int8_t x658 = -1;
	static int32_t x659 = -1;
	static int16_t x660 = -4958;
	static volatile int32_t t159 = 6243330;

    t159 = (x657!=((x658%x659)<=x660));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x665 = -3;
	static volatile int64_t x668 = INT64_MAX;
	int32_t t160 = -20875720;

    t160 = (x665!=((x666%x667)<=x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = INT16_MIN;
	volatile int64_t x670 = -1LL;
	int64_t x671 = INT64_MAX;
	int32_t t161 = 61647;

    t161 = (x669!=((x670%x671)<=x672));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x674 = -171383LL;
	uint64_t x676 = 541149387659115509LLU;
	static volatile int32_t t162 = -9094;

    t162 = (x673!=((x674%x675)<=x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x677 = INT8_MIN;
	uint8_t x678 = 0U;
	int8_t x679 = -1;
	int32_t t163 = 725352737;

    t163 = (x677!=((x678%x679)<=x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	volatile int16_t x682 = INT16_MIN;
	int16_t x683 = INT16_MIN;
	static int32_t t164 = 121292210;

    t164 = (x681!=((x682%x683)<=x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = 454LLU;

    t165 = (x685!=((x686%x687)<=x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x689 = 1LLU;
	int8_t x690 = 1;
	volatile uint8_t x691 = 1U;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t166 = 0;

    t166 = (x689!=((x690%x691)<=x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x693 = -13;
	int64_t x694 = -1LL;
	int16_t x695 = INT16_MIN;
	int16_t x696 = -1;

    t167 = (x693!=((x694%x695)<=x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x698 = INT32_MIN;
	volatile uint64_t x699 = 1LLU;
	uint64_t x700 = 157254LLU;
	static int32_t t168 = -7;

    t168 = (x697!=((x698%x699)<=x700));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x701 = -1LL;
	static int16_t x702 = -1;
	int32_t x704 = INT32_MIN;
	int32_t t169 = -6;

    t169 = (x701!=((x702%x703)<=x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = INT8_MAX;
	volatile uint32_t x706 = 495U;
	uint32_t x707 = 45973U;
	int32_t x708 = -2991286;
	int32_t t170 = 5098356;

    t170 = (x705!=((x706%x707)<=x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MAX;
	uint32_t x710 = 989850U;
	uint64_t x711 = 7LLU;

    t171 = (x709!=((x710%x711)<=x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x713 = -1;
	static uint8_t x714 = 1U;
	int64_t x716 = -573790987669461LL;
	volatile int32_t t172 = -352;

    t172 = (x713!=((x714%x715)<=x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x717 = INT16_MIN;
	int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MAX;
	volatile int32_t t173 = 47;

    t173 = (x717!=((x718%x719)<=x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x721 = -1;
	int8_t x722 = -6;
	static int64_t x723 = INT64_MIN;
	int16_t x724 = 494;
	volatile int32_t t174 = 575254697;

    t174 = (x721!=((x722%x723)<=x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x725 = -1;
	volatile int32_t x726 = 70;
	int16_t x727 = INT16_MAX;
	uint16_t x728 = UINT16_MAX;
	int32_t t175 = 365028234;

    t175 = (x725!=((x726%x727)<=x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = 4368U;
	int32_t x730 = -1;
	uint16_t x731 = UINT16_MAX;
	uint64_t x732 = 54026124LLU;
	volatile int32_t t176 = 3077676;

    t176 = (x729!=((x730%x731)<=x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x734 = 1949;
	static uint8_t x735 = UINT8_MAX;
	volatile uint64_t x736 = UINT64_MAX;
	static int32_t t177 = 16345695;

    t177 = (x733!=((x734%x735)<=x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MAX;
	int16_t x740 = INT16_MIN;
	volatile int32_t t178 = 10;

    t178 = (x737!=((x738%x739)<=x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x742 = -967;
	volatile int16_t x743 = INT16_MIN;
	volatile int16_t x744 = INT16_MIN;

    t179 = (x741!=((x742%x743)<=x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x745 = 12U;
	int32_t x746 = INT32_MAX;
	volatile uint16_t x748 = 7U;
	int32_t t180 = -8;

    t180 = (x745!=((x746%x747)<=x748));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x749 = 52U;
	int32_t x750 = 358876090;
	int8_t x751 = INT8_MAX;
	int32_t x752 = -1;
	volatile int32_t t181 = -9415016;

    t181 = (x749!=((x750%x751)<=x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x754 = UINT32_MAX;
	volatile uint64_t x755 = 54205LLU;
	volatile int32_t t182 = 78290020;

    t182 = (x753!=((x754%x755)<=x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x757 = 1;
	volatile int64_t x758 = -6928608LL;
	volatile int64_t x760 = 1028221976LL;
	volatile int32_t t183 = 2953988;

    t183 = (x757!=((x758%x759)<=x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x761 = INT8_MIN;
	uint8_t x762 = 74U;
	static volatile int8_t x763 = -3;
	static int8_t x764 = -1;
	volatile int32_t t184 = -62;

    t184 = (x761!=((x762%x763)<=x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x765 = INT64_MAX;
	static volatile int16_t x766 = -1;
	int32_t x767 = INT32_MIN;
	int32_t x768 = 2;
	volatile int32_t t185 = -14840;

    t185 = (x765!=((x766%x767)<=x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x769 = -3597349;
	volatile uint32_t x770 = 6U;
	volatile int32_t x771 = -1;
	uint64_t x772 = 116903932LLU;
	volatile int32_t t186 = -1136;

    t186 = (x769!=((x770%x771)<=x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x774 = 1112726230304496085LL;
	volatile int8_t x775 = -24;
	static int32_t x776 = INT32_MIN;
	int32_t t187 = -20643;

    t187 = (x773!=((x774%x775)<=x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = INT64_MIN;
	int64_t x779 = -941LL;
	int64_t x780 = -1192430615LL;
	static int32_t t188 = -1403;

    t188 = (x777!=((x778%x779)<=x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = 0;
	int16_t x782 = 18;
	int16_t x783 = INT16_MAX;
	volatile int64_t x784 = -2615424LL;
	static int32_t t189 = 1;

    t189 = (x781!=((x782%x783)<=x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x785 = -1;
	int32_t x786 = INT32_MIN;
	uint32_t x788 = UINT32_MAX;
	static int32_t t190 = -341080;

    t190 = (x785!=((x786%x787)<=x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x789 = -1;
	static int16_t x790 = INT16_MAX;
	static uint64_t x791 = 2114705LLU;
	static int32_t t191 = 224122727;

    t191 = (x789!=((x790%x791)<=x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x793 = 3U;
	volatile int8_t x794 = INT8_MIN;
	static int32_t x795 = -98;
	uint32_t x796 = UINT32_MAX;
	int32_t t192 = -80427;

    t192 = (x793!=((x794%x795)<=x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x797 = 30935U;
	static uint64_t x798 = 2549083LLU;
	uint16_t x799 = 127U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t193 = -3674;

    t193 = (x797!=((x798%x799)<=x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = -56;
	uint32_t x803 = 248905745U;
	int16_t x804 = 20;
	volatile int32_t t194 = 1;

    t194 = (x801!=((x802%x803)<=x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x805 = 991LLU;
	int32_t x806 = INT32_MIN;
	uint8_t x808 = 5U;
	volatile int32_t t195 = 93907;

    t195 = (x805!=((x806%x807)<=x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x809 = INT8_MIN;
	int16_t x810 = INT16_MIN;
	volatile int16_t x811 = INT16_MIN;
	int8_t x812 = INT8_MIN;
	volatile int32_t t196 = -269;

    t196 = (x809!=((x810%x811)<=x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x813 = INT32_MAX;
	static uint64_t x815 = 809431181945LLU;
	int16_t x816 = INT16_MIN;
	int32_t t197 = 14632;

    t197 = (x813!=((x814%x815)<=x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x817 = 8944981532764440LLU;
	uint16_t x819 = 16U;
	uint32_t x820 = UINT32_MAX;
	static int32_t t198 = 264;

    t198 = (x817!=((x818%x819)<=x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = INT16_MIN;
	volatile uint32_t x822 = UINT32_MAX;
	int64_t x823 = INT64_MIN;
	int32_t x824 = 200834493;

    t199 = (x821!=((x822%x823)<=x824));

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

