
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

uint16_t x4 = UINT16_MAX;
int8_t x7 = 5;
volatile int16_t x15 = -11;
volatile int32_t t2 = -327111523;
static int64_t x20 = INT64_MAX;
int8_t x30 = INT8_MIN;
static int64_t t5 = -551527606LL;
uint32_t x36 = 5272085U;
uint32_t x37 = 8U;
int8_t x42 = 0;
int8_t x43 = -16;
int16_t x44 = INT16_MIN;
int64_t x45 = INT64_MAX;
int64_t x52 = 163972509265LL;
static int8_t x57 = INT8_MIN;
uint16_t x61 = UINT16_MAX;
int16_t x63 = INT16_MIN;
static int16_t x64 = INT16_MIN;
volatile int32_t t13 = -24;
uint16_t x66 = UINT16_MAX;
int32_t t14 = -265;
int8_t x72 = 0;
uint32_t t17 = UINT32_MAX;
uint32_t x84 = 68969U;
int32_t t18 = -28;
int16_t x86 = INT16_MIN;
static uint64_t x88 = UINT64_MAX;
int64_t t21 = INT64_MAX;
static uint32_t x104 = UINT32_MAX;
static int32_t t22 = 7428354;
volatile int8_t x105 = INT8_MIN;
static int32_t t23 = 443142;
int32_t x110 = -8;
uint64_t x112 = UINT64_MAX;
int64_t t25 = INT64_MIN;
static int16_t x127 = -1;
uint64_t t28 = UINT64_MAX;
int8_t x137 = INT8_MIN;
uint16_t x141 = 595U;
int32_t x148 = 37;
static int32_t t31 = 183;
static int8_t x150 = 5;
int64_t t32 = INT64_MIN;
int32_t x153 = -77960;
uint16_t x155 = 2U;
uint8_t x157 = UINT8_MAX;
int32_t t34 = -94757;
static int64_t x177 = INT64_MAX;
volatile int8_t x179 = INT8_MAX;
uint64_t x180 = UINT64_MAX;
volatile uint64_t x183 = 2191798LLU;
volatile int32_t t39 = INT32_MAX;
int16_t x193 = -5190;
int16_t x197 = INT16_MAX;
uint32_t x200 = 66461U;
int64_t x203 = -40696LL;
int64_t t43 = INT64_MIN;
int8_t x211 = INT8_MIN;
volatile int32_t x215 = 120770;
volatile int32_t t45 = 912914590;
int32_t t46 = INT32_MIN;
uint16_t x226 = 1757U;
uint32_t x231 = UINT32_MAX;
int8_t x241 = 1;
uint64_t x247 = 3573223LLU;
int32_t t52 = INT32_MIN;
uint64_t x250 = UINT64_MAX;
int32_t x251 = INT32_MIN;
volatile int64_t x252 = INT64_MIN;
int64_t x254 = 9494831286385654LL;
int16_t x258 = INT16_MIN;
int32_t x259 = -316;
uint16_t x260 = 3U;
uint8_t x264 = 3U;
int64_t x275 = 3103795800269103505LL;
uint16_t x280 = 6U;
uint64_t x284 = 6711LLU;
uint64_t x287 = UINT64_MAX;
uint8_t x289 = 0U;
int16_t x292 = 1;
int16_t x300 = INT16_MIN;
int16_t x307 = INT16_MAX;
volatile int16_t x308 = INT16_MAX;
int32_t t65 = INT32_MIN;
uint16_t x313 = UINT16_MAX;
uint16_t x314 = 389U;
volatile uint16_t x318 = 1U;
uint16_t x319 = 29315U;
volatile int32_t x322 = INT32_MIN;
static int8_t x325 = INT8_MIN;
int32_t x326 = -1;
int32_t t70 = -28349122;
uint64_t x335 = UINT64_MAX;
uint64_t x343 = UINT64_MAX;
static volatile int32_t t73 = -2283136;
int8_t x353 = INT8_MAX;
int8_t x357 = INT8_MIN;
uint64_t x362 = 2191LLU;
int64_t x365 = INT64_MAX;
int8_t x366 = INT8_MIN;
int8_t x367 = INT8_MAX;
static volatile int32_t x369 = INT32_MIN;
int32_t t80 = INT32_MIN;
int64_t x378 = -7977462198611769LL;
volatile int8_t x382 = INT8_MIN;
int64_t x384 = INT64_MIN;
static int16_t x385 = INT16_MAX;
volatile int32_t t83 = 54766;
volatile int64_t t84 = INT64_MIN;
static int32_t x394 = -1;
uint64_t x395 = 21LLU;
volatile uint64_t t85 = UINT64_MAX;
int16_t x399 = -3866;
uint8_t x405 = 1U;
uint16_t x407 = UINT16_MAX;
static int64_t x409 = -1LL;
int8_t x426 = 27;
int64_t x429 = INT64_MIN;
static uint16_t x433 = UINT16_MAX;
volatile int16_t x438 = INT16_MAX;
int8_t x445 = -1;
static volatile int32_t t98 = -38188;
uint8_t x461 = 7U;
int16_t x466 = -18;
static int16_t x474 = INT16_MAX;
volatile int8_t x477 = 1;
static volatile int16_t x478 = 2;
int64_t x482 = INT64_MIN;
volatile int32_t t107 = -179;
int16_t x485 = -1;
int8_t x490 = INT8_MIN;
uint16_t x493 = 291U;
int8_t x508 = -1;
int32_t t112 = 40935;
int16_t x511 = 11375;
volatile uint8_t x536 = UINT8_MAX;
int8_t x542 = -1;
uint16_t x547 = UINT16_MAX;
int16_t x548 = -1;
int8_t x553 = INT8_MAX;
volatile int64_t x566 = -1LL;
int16_t x577 = -5151;
uint32_t x583 = UINT32_MAX;
volatile int8_t x584 = INT8_MAX;
int32_t t131 = 1;
int64_t x597 = -482LL;
uint64_t x602 = 16823665300850LLU;
static volatile int32_t x603 = -1;
uint8_t x604 = 12U;
int64_t x605 = INT64_MIN;
uint16_t x608 = UINT16_MAX;
static volatile uint64_t x613 = 221LLU;
int64_t x616 = 2865LL;
static volatile uint64_t t137 = UINT64_MAX;
int32_t t138 = 29925604;
uint8_t x626 = 16U;
uint64_t t139 = 50428597695LLU;
uint32_t x631 = UINT32_MAX;
uint8_t x633 = 2U;
volatile uint32_t t142 = UINT32_MAX;
volatile int8_t x651 = -13;
int16_t x660 = 0;
int8_t x665 = -5;
int32_t x676 = INT32_MIN;
uint32_t x679 = UINT32_MAX;
uint32_t x680 = 225U;
static int32_t t150 = 40;
int8_t x681 = INT8_MIN;
volatile uint8_t x690 = 0U;
int16_t x694 = 60;
static int16_t x695 = -1;
volatile int32_t t153 = -40625020;
static volatile uint32_t x699 = 76U;
int64_t x705 = INT64_MAX;
static int64_t x707 = -1LL;
uint32_t t156 = UINT32_MAX;
volatile uint16_t x714 = 15398U;
int16_t x718 = 2252;
int32_t t160 = -106;
int8_t x731 = -9;
static int32_t x735 = -1;
static uint64_t t162 = 14461266320791525LLU;
uint32_t x739 = UINT32_MAX;
uint32_t x743 = 105U;
uint16_t x744 = UINT16_MAX;
uint16_t x752 = 175U;
volatile int32_t t165 = -13084651;
int8_t x759 = 0;
int16_t x761 = -1;
volatile int16_t x767 = -359;
uint32_t x777 = 255U;
volatile uint32_t t171 = 3819244U;
volatile uint32_t x788 = UINT32_MAX;
uint32_t x799 = UINT32_MAX;
static int8_t x800 = INT8_MIN;
volatile uint8_t x802 = 14U;
int64_t x808 = INT64_MAX;
volatile uint32_t x809 = UINT32_MAX;
uint32_t t178 = UINT32_MAX;
volatile int64_t x821 = -1LL;
volatile int64_t x822 = 185094LL;
uint16_t x824 = 3392U;
int8_t x826 = INT8_MAX;
int16_t x831 = -1;
int64_t t185 = -15741890077550LL;
int8_t x841 = INT8_MIN;
int16_t x843 = 12909;
int32_t t186 = -5543602;
uint32_t x851 = 215U;
volatile uint16_t x871 = 11076U;
uint16_t x872 = 9192U;
int64_t x875 = 2584314988657959800LL;
static volatile int32_t x881 = -1;
volatile uint64_t t196 = UINT64_MAX;
int32_t x897 = INT32_MIN;
int64_t x904 = -1LL;


void f0(void) {
    	uint16_t x1 = 0U;
	static uint16_t x2 = 158U;
	uint16_t x3 = 26U;
	volatile int32_t t0 = 3213938;

    t0 = (x1^((x2+x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int64_t x6 = -15898LL;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -94481;

    t1 = (x5^((x6+x7)==x8));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = -1;
	int8_t x14 = -1;
	int16_t x16 = INT16_MAX;

    t2 = (x13^((x14+x15)==x16));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 2237297U;
	volatile int32_t t3 = -3845;

    t3 = (x17^((x18+x19)==x20));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = UINT16_MAX;
	static int8_t x26 = INT8_MAX;
	uint16_t x27 = 9974U;
	int64_t x28 = -16235180LL;
	int32_t t4 = 15;

    t4 = (x25^((x26+x27)==x28));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -93086383595409LL;
	static volatile int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;

    t5 = (x29^((x30+x31)==x32));

    if (t5 != -93086383595409LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MAX;
	static volatile int32_t t6 = -47;

    t6 = (x33^((x34+x35)==x36));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x38 = 53U;
	int64_t x39 = INT64_MIN;
	uint8_t x40 = 7U;
	uint32_t t7 = 27606022U;

    t7 = (x37^((x38+x39)==x40));

    if (t7 != 8U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x41 = INT8_MAX;
	int32_t t8 = 93057;

    t8 = (x41^((x42+x43)==x44));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x46 = 82U;
	uint8_t x47 = 0U;
	uint32_t x48 = 1919170854U;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x45^((x46+x47)==x48));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = -23;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x51 = -4588547;
	volatile int32_t t10 = 829;

    t10 = (x49^((x50+x51)==x52));

    if (t10 != -23) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 198941037U;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = -285017173120840LL;
	static int16_t x56 = -14;
	volatile uint32_t t11 = 1072831U;

    t11 = (x53^((x54+x55)==x56));

    if (t11 != 198941037U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 27U;
	static int8_t x59 = INT8_MIN;
	static uint16_t x60 = UINT16_MAX;
	int32_t t12 = -3828543;

    t12 = (x57^((x58+x59)==x60));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x62 = UINT8_MAX;

    t13 = (x61^((x62+x63)==x64));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x65 = 6543293;
	int16_t x67 = INT16_MAX;
	static int8_t x68 = -1;

    t14 = (x65^((x66+x67)==x68));

    if (t14 != 6543293) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MIN;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MAX;
	int32_t t15 = -554067;

    t15 = (x69^((x70+x71)==x72));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = -4604;
	uint32_t x74 = 3561U;
	static int32_t x75 = -17142;
	static uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = 0;

    t16 = (x73^((x74+x75)==x76));

    if (t16 != -4604) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x77 = UINT32_MAX;
	static uint16_t x78 = 71U;
	volatile uint64_t x79 = 1636729953824860378LLU;
	volatile int16_t x80 = -1;

    t17 = (x77^((x78+x79)==x80));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x81 = INT8_MIN;
	uint16_t x82 = 6304U;
	uint32_t x83 = UINT32_MAX;

    t18 = (x81^((x82+x83)==x84));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x85 = 30565U;
	int8_t x87 = INT8_MIN;
	static int32_t t19 = 948;

    t19 = (x85^((x86+x87)==x88));

    if (t19 != 30565) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	int32_t x94 = 1803;
	static int32_t x95 = 121739;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t20 = UINT64_MAX;

    t20 = (x93^((x94+x95)==x96));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = INT64_MAX;
	static int32_t x98 = -314448481;
	int64_t x99 = INT64_MAX;
	volatile uint16_t x100 = 3660U;

    t21 = (x97^((x98+x99)==x100));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x101 = -1;
	static volatile uint32_t x102 = 34U;
	uint32_t x103 = 5889U;

    t22 = (x101^((x102+x103)==x104));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x106 = 1U;
	static int16_t x107 = -3147;
	int32_t x108 = INT32_MIN;

    t23 = (x105^((x106+x107)==x108));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 5U;
	volatile uint32_t x111 = 103U;
	volatile int32_t t24 = 1;

    t24 = (x109^((x110+x111)==x112));

    if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MIN;
	static volatile uint16_t x116 = UINT16_MAX;

    t25 = (x113^((x114+x115)==x116));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	static uint32_t x119 = 806911005U;
	uint8_t x120 = 0U;
	volatile int32_t t26 = INT32_MIN;

    t26 = (x117^((x118+x119)==x120));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t27 = 14037;

    t27 = (x125^((x126+x127)==x128));

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x133 = UINT64_MAX;
	static volatile int8_t x134 = -1;
	uint16_t x135 = 29U;
	static int32_t x136 = -116731640;

    t28 = (x133^((x134+x135)==x136));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x138 = INT8_MAX;
	int64_t x139 = INT64_MIN;
	static volatile int8_t x140 = INT8_MIN;
	int32_t t29 = 436454;

    t29 = (x137^((x138+x139)==x140));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x142 = 21U;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = 57U;
	volatile int32_t t30 = -1;

    t30 = (x141^((x142+x143)==x144));

    if (t30 != 595) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x145 = 10915524;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = 36;

    t31 = (x145^((x146+x147)==x148));

    if (t31 != 10915524) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x151 = -83737211759014061LL;
	int8_t x152 = INT8_MIN;

    t32 = (x149^((x150+x151)==x152));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x154 = 56U;
	volatile int32_t x156 = INT32_MIN;
	static int32_t t33 = 1;

    t33 = (x153^((x154+x155)==x156));

    if (t33 != -77960) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x158 = INT16_MAX;
	static volatile int16_t x159 = 6;
	int16_t x160 = INT16_MAX;

    t34 = (x157^((x158+x159)==x160));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = INT64_MAX;
	volatile int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t35 = INT64_MAX;

    t35 = (x161^((x162+x163)==x164));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	static volatile int32_t x171 = 246148684;
	int8_t x172 = -3;
	volatile int32_t t36 = 37776;

    t36 = (x169^((x170+x171)==x172));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x178 = 3U;
	int64_t t37 = INT64_MAX;

    t37 = (x177^((x178+x179)==x180));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MAX;
	uint8_t x182 = UINT8_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	static volatile int32_t t38 = -770053;

    t38 = (x181^((x182+x183)==x184));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x189 = INT32_MAX;
	uint8_t x190 = 11U;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;

    t39 = (x189^((x190+x191)==x192));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x194 = INT8_MIN;
	static uint32_t x195 = 107135U;
	uint64_t x196 = UINT64_MAX;
	int32_t t40 = -53242987;

    t40 = (x193^((x194+x195)==x196));

    if (t40 != -5190) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x198 = 2945;
	int64_t x199 = INT64_MIN;
	volatile int32_t t41 = -1430;

    t41 = (x197^((x198+x199)==x200));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x201 = 27655U;
	static int32_t x202 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t42 = 564401296;

    t42 = (x201^((x202+x203)==x204));

    if (t42 != 27655) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x205 = INT64_MIN;
	static volatile int16_t x206 = INT16_MIN;
	volatile int8_t x207 = 2;
	int8_t x208 = -13;

    t43 = (x205^((x206+x207)==x208));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x209 = 40U;
	volatile uint8_t x210 = UINT8_MAX;
	static int16_t x212 = INT16_MIN;
	int32_t t44 = -25280178;

    t44 = (x209^((x210+x211)==x212));

    if (t44 != 40) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x213 = -211;
	uint8_t x214 = 43U;
	int16_t x216 = INT16_MIN;

    t45 = (x213^((x214+x215)==x216));

    if (t45 != -211) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	static int32_t x222 = -1263;
	int16_t x223 = INT16_MIN;
	static uint64_t x224 = 2220506217186852963LLU;

    t46 = (x221^((x222+x223)==x224));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x225 = -1;
	uint16_t x227 = UINT16_MAX;
	static int64_t x228 = INT64_MAX;
	volatile int32_t t47 = 447;

    t47 = (x225^((x226+x227)==x228));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = INT16_MAX;
	int32_t x230 = -1;
	volatile int32_t x232 = -28;
	int32_t t48 = -95472;

    t48 = (x229^((x230+x231)==x232));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	int8_t x236 = -1;
	int32_t t49 = 19954214;

    t49 = (x233^((x234+x235)==x236));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = 32;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = INT32_MAX;
	int32_t t50 = -21373550;

    t50 = (x237^((x238+x239)==x240));

    if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x242 = INT16_MIN;
	static int16_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;
	int32_t t51 = 0;

    t51 = (x241^((x242+x243)==x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x245 = INT32_MIN;
	static uint8_t x246 = UINT8_MAX;
	volatile int64_t x248 = INT64_MIN;

    t52 = (x245^((x246+x247)==x248));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x249 = INT32_MAX;
	int32_t t53 = INT32_MAX;

    t53 = (x249^((x250+x251)==x252));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = INT32_MIN;
	int8_t x255 = -1;
	int8_t x256 = INT8_MIN;
	int32_t t54 = INT32_MIN;

    t54 = (x253^((x254+x255)==x256));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = -1LL;
	static int64_t t55 = -55826906517818232LL;

    t55 = (x257^((x258+x259)==x260));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x261 = 59U;
	uint64_t x262 = 390LLU;
	static int16_t x263 = -1;
	int32_t t56 = 7;

    t56 = (x261^((x262+x263)==x264));

    if (t56 != 59) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = INT8_MAX;
	uint32_t x270 = UINT32_MAX;
	static int64_t x271 = 1029441313LL;
	static uint32_t x272 = UINT32_MAX;
	volatile int32_t t57 = 247515;

    t57 = (x269^((x270+x271)==x272));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x273 = 0U;
	static int32_t x274 = -3378;
	int64_t x276 = INT64_MIN;
	volatile int32_t t58 = 7;

    t58 = (x273^((x274+x275)==x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	volatile int32_t t59 = -381;

    t59 = (x277^((x278+x279)==x280));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x281 = 12089368U;
	static uint8_t x282 = 64U;
	static int64_t x283 = INT64_MIN;
	static volatile uint32_t t60 = 59038348U;

    t60 = (x281^((x282+x283)==x284));

    if (t60 != 12089368U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x285 = INT32_MAX;
	int64_t x286 = -1LL;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t61 = INT32_MAX;

    t61 = (x285^((x286+x287)==x288));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x290 = 1463303417121292LLU;
	static int32_t x291 = INT32_MIN;
	static int32_t t62 = -3;

    t62 = (x289^((x290+x291)==x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x297 = 9423300U;
	volatile uint64_t x298 = 126740LLU;
	int32_t x299 = INT32_MAX;
	volatile uint32_t t63 = 467283U;

    t63 = (x297^((x298+x299)==x300));

    if (t63 != 9423300U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = -1LL;
	volatile int8_t x302 = 3;
	uint8_t x303 = 8U;
	int8_t x304 = INT8_MIN;
	volatile int64_t t64 = -4548LL;

    t64 = (x301^((x302+x303)==x304));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x305 = INT32_MIN;
	static int16_t x306 = INT16_MIN;

    t65 = (x305^((x306+x307)==x308));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	volatile int64_t x311 = 6456388781LL;
	int8_t x312 = INT8_MAX;
	volatile int32_t t66 = -271;

    t66 = (x309^((x310+x311)==x312));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x315 = 2U;
	uint16_t x316 = 201U;
	int32_t t67 = -1;

    t67 = (x313^((x314+x315)==x316));

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x317 = 36;
	int64_t x320 = INT64_MIN;
	volatile int32_t t68 = -1;

    t68 = (x317^((x318+x319)==x320));

    if (t68 != 36) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t69 = INT32_MIN;

    t69 = (x321^((x322+x323)==x324));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x327 = INT64_MAX;
	uint8_t x328 = 12U;

    t70 = (x325^((x326+x327)==x328));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	static int8_t x331 = -1;
	uint64_t x332 = 745367120939LLU;
	int64_t t71 = INT64_MIN;

    t71 = (x329^((x330+x331)==x332));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x333 = 5U;
	static int64_t x334 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t72 = 0;

    t72 = (x333^((x334+x335)==x336));

    if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x341 = 1U;
	volatile uint64_t x342 = UINT64_MAX;
	int32_t x344 = -7;

    t73 = (x341^((x342+x343)==x344));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = -1;
	int32_t x346 = 72286;
	volatile uint64_t x347 = 49519929636LLU;
	volatile int32_t x348 = INT32_MIN;
	int32_t t74 = -14802299;

    t74 = (x345^((x346+x347)==x348));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = INT16_MIN;
	static int16_t x350 = 366;
	int8_t x351 = 1;
	static int8_t x352 = 8;
	volatile int32_t t75 = -295308;

    t75 = (x349^((x350+x351)==x352));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x354 = INT16_MAX;
	int8_t x355 = -2;
	int64_t x356 = 445435484137550015LL;
	volatile int32_t t76 = 3958;

    t76 = (x353^((x354+x355)==x356));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x358 = 146910851;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 4645230U;
	int32_t t77 = 225712;

    t77 = (x357^((x358+x359)==x360));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = -1;
	volatile int32_t x363 = 193504;
	int16_t x364 = INT16_MIN;
	volatile int32_t t78 = 21712044;

    t78 = (x361^((x362+x363)==x364));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x368 = -1;
	volatile int64_t t79 = -11044078051801LL;

    t79 = (x365^((x366+x367)==x368));

    if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x370 = 3553;
	int64_t x371 = 1LL;
	static uint8_t x372 = 5U;

    t80 = (x369^((x370+x371)==x372));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	int16_t x380 = -1;
	volatile int32_t t81 = 209;

    t81 = (x377^((x378+x379)==x380));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x381 = 4009114LLU;
	uint32_t x383 = 3939U;
	volatile uint64_t t82 = 497663590137986566LLU;

    t82 = (x381^((x382+x383)==x384));

    if (t82 != 4009114LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x386 = INT64_MIN;
	int32_t x387 = 61876321;
	volatile uint64_t x388 = UINT64_MAX;

    t83 = (x385^((x386+x387)==x388));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x389 = INT64_MIN;
	static uint8_t x390 = UINT8_MAX;
	int32_t x391 = -1;
	static int32_t x392 = INT32_MAX;

    t84 = (x389^((x390+x391)==x392));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x396 = 4934987;

    t85 = (x393^((x394+x395)==x396));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x397 = 11593LLU;
	uint16_t x398 = 100U;
	int8_t x400 = -1;
	volatile uint64_t t86 = 38471LLU;

    t86 = (x397^((x398+x399)==x400));

    if (t86 != 11593LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x401 = 2U;
	int32_t x402 = -5191477;
	static int16_t x403 = INT16_MAX;
	uint64_t x404 = 10037761271070146LLU;
	volatile int32_t t87 = 20927127;

    t87 = (x401^((x402+x403)==x404));

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x406 = 3U;
	int8_t x408 = INT8_MAX;
	int32_t t88 = -101;

    t88 = (x405^((x406+x407)==x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x410 = 24397U;
	int16_t x411 = INT16_MAX;
	int16_t x412 = 3;
	int64_t t89 = -1LL;

    t89 = (x409^((x410+x411)==x412));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x413 = INT16_MAX;
	volatile int16_t x414 = INT16_MIN;
	volatile int8_t x415 = INT8_MIN;
	int64_t x416 = 1126LL;
	volatile int32_t t90 = 7;

    t90 = (x413^((x414+x415)==x416));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x417 = INT32_MIN;
	int16_t x418 = -1;
	uint64_t x419 = 3340952416LLU;
	int64_t x420 = 57107228541LL;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x417^((x418+x419)==x420));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x421 = INT16_MIN;
	int64_t x422 = 917803LL;
	volatile int32_t x423 = INT32_MAX;
	volatile int8_t x424 = -11;
	int32_t t92 = 30159;

    t92 = (x421^((x422+x423)==x424));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = -1;
	static uint64_t x427 = 614838898317965LLU;
	volatile int16_t x428 = INT16_MAX;
	static int32_t t93 = 426038;

    t93 = (x425^((x426+x427)==x428));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MAX;
	uint16_t x432 = 44U;
	volatile int64_t t94 = INT64_MIN;

    t94 = (x429^((x430+x431)==x432));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = -1LL;
	uint16_t x436 = 19538U;
	static volatile int32_t t95 = 23;

    t95 = (x433^((x434+x435)==x436));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x437 = -1LL;
	static volatile uint32_t x439 = UINT32_MAX;
	uint32_t x440 = 14091005U;
	int64_t t96 = 51LL;

    t96 = (x437^((x438+x439)==x440));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x441 = -2;
	uint8_t x442 = 85U;
	volatile int16_t x443 = -83;
	int64_t x444 = INT64_MAX;
	volatile int32_t t97 = 1;

    t97 = (x441^((x442+x443)==x444));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x446 = UINT8_MAX;
	int16_t x447 = -1;
	uint8_t x448 = UINT8_MAX;

    t98 = (x445^((x446+x447)==x448));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x449 = -370;
	int8_t x450 = INT8_MAX;
	uint8_t x451 = 1U;
	int8_t x452 = 35;
	volatile int32_t t99 = 1112;

    t99 = (x449^((x450+x451)==x452));

    if (t99 != -370) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x453 = 16168534U;
	static int32_t x454 = -73462;
	int16_t x455 = -1;
	int32_t x456 = INT32_MAX;
	uint32_t t100 = 100112U;

    t100 = (x453^((x454+x455)==x456));

    if (t100 != 16168534U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x457 = 35U;
	int16_t x458 = -991;
	int32_t x459 = -1;
	uint8_t x460 = 0U;
	volatile int32_t t101 = -1747788;

    t101 = (x457^((x458+x459)==x460));

    if (t101 != 35) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x462 = 347U;
	int16_t x463 = 4;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t102 = 6279;

    t102 = (x461^((x462+x463)==x464));

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x465 = INT16_MIN;
	int64_t x467 = 196542159425LL;
	volatile int32_t x468 = INT32_MAX;
	volatile int32_t t103 = 0;

    t103 = (x465^((x466+x467)==x468));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x469 = 190303400;
	int16_t x470 = 13;
	int32_t x471 = -1;
	int32_t x472 = -1;
	int32_t t104 = 1;

    t104 = (x469^((x470+x471)==x472));

    if (t104 != 190303400) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x473 = INT8_MAX;
	uint32_t x475 = 1078U;
	static int16_t x476 = INT16_MAX;
	int32_t t105 = -299357;

    t105 = (x473^((x474+x475)==x476));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x479 = INT64_MIN;
	uint64_t x480 = 55127742575599243LLU;
	int32_t t106 = -94;

    t106 = (x477^((x478+x479)==x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x481 = INT8_MIN;
	uint16_t x483 = 1U;
	int8_t x484 = INT8_MAX;

    t107 = (x481^((x482+x483)==x484));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x486 = UINT8_MAX;
	int32_t x487 = -471;
	uint16_t x488 = UINT16_MAX;
	int32_t t108 = 70366268;

    t108 = (x485^((x486+x487)==x488));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = -1;
	int64_t x491 = -131076LL;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t109 = 1;

    t109 = (x489^((x490+x491)==x492));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x494 = INT8_MAX;
	static uint64_t x495 = 11LLU;
	static uint8_t x496 = UINT8_MAX;
	static volatile int32_t t110 = -107;

    t110 = (x493^((x494+x495)==x496));

    if (t110 != 291) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	volatile int32_t x498 = INT32_MAX;
	uint32_t x499 = 37925U;
	int32_t x500 = INT32_MAX;
	uint32_t t111 = UINT32_MAX;

    t111 = (x497^((x498+x499)==x500));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x505 = INT16_MAX;
	uint8_t x506 = 8U;
	volatile uint16_t x507 = 1187U;

    t112 = (x505^((x506+x507)==x508));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MIN;
	static int32_t x512 = 258284091;
	volatile int64_t t113 = INT64_MIN;

    t113 = (x509^((x510+x511)==x512));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x513 = 1U;
	int64_t x514 = -3LL;
	int8_t x515 = INT8_MIN;
	int8_t x516 = 6;
	volatile int32_t t114 = -5194076;

    t114 = (x513^((x514+x515)==x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = INT16_MIN;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = UINT32_MAX;
	int8_t x520 = INT8_MAX;
	int32_t t115 = 5418898;

    t115 = (x517^((x518+x519)==x520));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x521 = UINT64_MAX;
	int64_t x522 = INT64_MIN;
	static uint32_t x523 = UINT32_MAX;
	int8_t x524 = INT8_MAX;
	volatile uint64_t t116 = UINT64_MAX;

    t116 = (x521^((x522+x523)==x524));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = -1;
	static uint8_t x534 = UINT8_MAX;
	volatile int64_t x535 = -1LL;
	int32_t t117 = 58;

    t117 = (x533^((x534+x535)==x536));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x541 = 891125;
	static uint16_t x543 = UINT16_MAX;
	int64_t x544 = INT64_MAX;
	volatile int32_t t118 = -465641189;

    t118 = (x541^((x542+x543)==x544));

    if (t118 != 891125) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x545 = INT8_MAX;
	volatile uint8_t x546 = 4U;
	int32_t t119 = 722764163;

    t119 = (x545^((x546+x547)==x548));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x549 = 3U;
	static volatile uint64_t x550 = 129084058533LLU;
	uint32_t x551 = 163738873U;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t120 = 2;

    t120 = (x549^((x550+x551)==x552));

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x554 = 0U;
	uint8_t x555 = UINT8_MAX;
	uint64_t x556 = 66949850642LLU;
	static int32_t t121 = -5461270;

    t121 = (x553^((x554+x555)==x556));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = INT8_MAX;
	static int16_t x558 = INT16_MIN;
	volatile uint64_t x559 = 124LLU;
	uint32_t x560 = UINT32_MAX;
	int32_t t122 = -956680663;

    t122 = (x557^((x558+x559)==x560));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x561 = 51LL;
	uint8_t x562 = 1U;
	int8_t x563 = INT8_MIN;
	volatile int64_t x564 = INT64_MAX;
	int64_t t123 = -893446300203809975LL;

    t123 = (x561^((x562+x563)==x564));

    if (t123 != 51LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x565 = 29;
	int32_t x567 = INT32_MAX;
	int16_t x568 = -5;
	int32_t t124 = -28;

    t124 = (x565^((x566+x567)==x568));

    if (t124 != 29) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int64_t x570 = -1417LL;
	int16_t x571 = INT16_MIN;
	int16_t x572 = INT16_MIN;
	volatile int32_t t125 = 5236869;

    t125 = (x569^((x570+x571)==x572));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x573 = -1LL;
	uint32_t x574 = 8164201U;
	uint32_t x575 = 0U;
	int8_t x576 = INT8_MAX;
	int64_t t126 = 1244554LL;

    t126 = (x573^((x574+x575)==x576));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x578 = INT64_MIN;
	uint64_t x579 = 9968669192LLU;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t127 = 7709582;

    t127 = (x577^((x578+x579)==x580));

    if (t127 != -5151) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x581 = UINT32_MAX;
	static int16_t x582 = INT16_MIN;
	uint32_t t128 = UINT32_MAX;

    t128 = (x581^((x582+x583)==x584));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x585 = -1;
	volatile int64_t x586 = INT64_MIN;
	uint64_t x587 = UINT64_MAX;
	static uint16_t x588 = 16443U;
	static int32_t t129 = -1;

    t129 = (x585^((x586+x587)==x588));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	static uint16_t x590 = 57U;
	static uint8_t x591 = 63U;
	int32_t x592 = 14857222;
	volatile int32_t t130 = -106;

    t130 = (x589^((x590+x591)==x592));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x593 = 651;
	int32_t x594 = 11;
	static uint16_t x595 = UINT16_MAX;
	int32_t x596 = INT32_MAX;

    t131 = (x593^((x594+x595)==x596));

    if (t131 != 651) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x598 = INT8_MIN;
	static uint64_t x599 = 64675291038LLU;
	int16_t x600 = -2;
	volatile int64_t t132 = -29LL;

    t132 = (x597^((x598+x599)==x600));

    if (t132 != -482LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x601 = INT16_MAX;
	volatile int32_t t133 = 5;

    t133 = (x601^((x602+x603)==x604));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x606 = 27U;
	static int16_t x607 = -1;
	volatile int64_t t134 = INT64_MIN;

    t134 = (x605^((x606+x607)==x608));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x609 = INT16_MIN;
	volatile uint32_t x610 = UINT32_MAX;
	static int64_t x611 = -1LL;
	static uint32_t x612 = UINT32_MAX;
	static volatile int32_t t135 = 1;

    t135 = (x609^((x610+x611)==x612));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x614 = 597;
	static uint16_t x615 = 4206U;
	static uint64_t t136 = 55558576478190389LLU;

    t136 = (x613^((x614+x615)==x616));

    if (t136 != 221LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x618 = INT64_MAX;
	int32_t x619 = -1;
	int16_t x620 = -28;

    t137 = (x617^((x618+x619)==x620));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x621 = -2;
	int64_t x622 = INT64_MIN;
	uint64_t x623 = 25512253157968LLU;
	int8_t x624 = INT8_MIN;

    t138 = (x621^((x622+x623)==x624));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x625 = 55838LLU;
	int16_t x627 = INT16_MIN;
	uint64_t x628 = UINT64_MAX;

    t139 = (x625^((x626+x627)==x628));

    if (t139 != 55838LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x629 = INT32_MIN;
	uint16_t x630 = 7U;
	int16_t x632 = -1;
	int32_t t140 = INT32_MIN;

    t140 = (x629^((x630+x631)==x632));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x634 = INT8_MAX;
	static uint64_t x635 = UINT64_MAX;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t141 = -2686068;

    t141 = (x633^((x634+x635)==x636));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x637 = UINT32_MAX;
	int32_t x638 = -121563659;
	uint8_t x639 = UINT8_MAX;
	uint32_t x640 = 611968U;

    t142 = (x637^((x638+x639)==x640));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int16_t x646 = INT16_MIN;
	int8_t x647 = -1;
	uint64_t x648 = 1921731096967457166LLU;
	int32_t t143 = INT32_MIN;

    t143 = (x645^((x646+x647)==x648));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x649 = INT8_MAX;
	int8_t x650 = INT8_MIN;
	uint64_t x652 = 5974LLU;
	int32_t t144 = 0;

    t144 = (x649^((x650+x651)==x652));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x653 = UINT16_MAX;
	uint32_t x654 = UINT32_MAX;
	static int8_t x655 = INT8_MIN;
	uint32_t x656 = UINT32_MAX;
	volatile int32_t t145 = 139463330;

    t145 = (x653^((x654+x655)==x656));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x657 = 2U;
	uint16_t x658 = 1027U;
	static int32_t x659 = INT32_MIN;
	volatile int32_t t146 = 320258;

    t146 = (x657^((x658+x659)==x660));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x661 = 4U;
	static int64_t x662 = -113649689978780LL;
	static volatile int16_t x663 = INT16_MAX;
	uint16_t x664 = UINT16_MAX;
	static volatile uint32_t t147 = 4U;

    t147 = (x661^((x662+x663)==x664));

    if (t147 != 4U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x666 = -42409959;
	volatile int16_t x667 = 85;
	volatile uint16_t x668 = 1U;
	int32_t t148 = 982223860;

    t148 = (x665^((x666+x667)==x668));

    if (t148 != -5) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x673 = -1LL;
	int32_t x674 = -1;
	uint8_t x675 = 7U;
	int64_t t149 = -186346112338676235LL;

    t149 = (x673^((x674+x675)==x676));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = 6810637LL;

    t150 = (x677^((x678+x679)==x680));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x682 = UINT64_MAX;
	int8_t x683 = 1;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t151 = 29872;

    t151 = (x681^((x682+x683)==x684));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = INT32_MAX;
	uint8_t x691 = 1U;
	int32_t x692 = INT32_MIN;
	volatile int32_t t152 = INT32_MAX;

    t152 = (x689^((x690+x691)==x692));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x693 = -2;
	int16_t x696 = 342;

    t153 = (x693^((x694+x695)==x696));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x697 = UINT8_MAX;
	int16_t x698 = -1;
	static int8_t x700 = 5;
	volatile int32_t t154 = -88258637;

    t154 = (x697^((x698+x699)==x700));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x706 = -1;
	uint64_t x708 = 225639623LLU;
	volatile int64_t t155 = INT64_MAX;

    t155 = (x705^((x706+x707)==x708));

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x709 = UINT32_MAX;
	uint8_t x710 = UINT8_MAX;
	volatile int64_t x711 = INT64_MIN;
	int64_t x712 = INT64_MIN;

    t156 = (x709^((x710+x711)==x712));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x713 = -84390;
	int8_t x715 = -11;
	int32_t x716 = -6618;
	volatile int32_t t157 = -3240;

    t157 = (x713^((x714+x715)==x716));

    if (t157 != -84390) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x717 = 4;
	uint64_t x719 = UINT64_MAX;
	uint16_t x720 = UINT16_MAX;
	static int32_t t158 = 34;

    t158 = (x717^((x718+x719)==x720));

    if (t158 != 4) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = 2;
	int16_t x723 = INT16_MIN;
	int16_t x724 = -762;
	int32_t t159 = INT32_MIN;

    t159 = (x721^((x722+x723)==x724));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x725 = 0;
	uint16_t x726 = UINT16_MAX;
	uint64_t x727 = 366LLU;
	int32_t x728 = INT32_MAX;

    t160 = (x725^((x726+x727)==x728));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x729 = 500U;
	volatile uint8_t x730 = UINT8_MAX;
	volatile int64_t x732 = 428385LL;
	int32_t t161 = -160;

    t161 = (x729^((x730+x731)==x732));

    if (t161 != 500) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x733 = 1790790759465849288LLU;
	int16_t x734 = -1;
	int32_t x736 = 477480913;

    t162 = (x733^((x734+x735)==x736));

    if (t162 != 1790790759465849288LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x737 = -465;
	static uint64_t x738 = 5864132124LLU;
	int32_t x740 = INT32_MIN;
	volatile int32_t t163 = -88728782;

    t163 = (x737^((x738+x739)==x740));

    if (t163 != -465) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x741 = INT32_MIN;
	int16_t x742 = INT16_MIN;
	int32_t t164 = INT32_MIN;

    t164 = (x741^((x742+x743)==x744));

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x749 = 0U;
	int8_t x750 = INT8_MAX;
	static volatile uint32_t x751 = 0U;

    t165 = (x749^((x750+x751)==x752));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x753 = 1U;
	int8_t x754 = 8;
	int8_t x755 = INT8_MAX;
	int8_t x756 = INT8_MAX;
	static int32_t t166 = -10372625;

    t166 = (x753^((x754+x755)==x756));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x757 = 0;
	uint32_t x758 = UINT32_MAX;
	volatile int16_t x760 = INT16_MAX;
	volatile int32_t t167 = -907293059;

    t167 = (x757^((x758+x759)==x760));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x762 = 84U;
	volatile int64_t x763 = -859777718LL;
	int64_t x764 = -5657451744214169LL;
	int32_t t168 = -23246;

    t168 = (x761^((x762+x763)==x764));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x765 = UINT32_MAX;
	uint16_t x766 = 1U;
	static int32_t x768 = -523;
	volatile uint32_t t169 = UINT32_MAX;

    t169 = (x765^((x766+x767)==x768));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x773 = INT64_MIN;
	int32_t x774 = 1155;
	volatile uint64_t x775 = UINT64_MAX;
	uint32_t x776 = 5865U;
	int64_t t170 = INT64_MIN;

    t170 = (x773^((x774+x775)==x776));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x778 = 39807926295731LL;
	volatile int8_t x779 = INT8_MIN;
	int16_t x780 = 1;

    t171 = (x777^((x778+x779)==x780));

    if (t171 != 255U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x781 = INT64_MAX;
	volatile uint32_t x782 = 6651U;
	int8_t x783 = INT8_MAX;
	static uint8_t x784 = 124U;
	volatile int64_t t172 = INT64_MAX;

    t172 = (x781^((x782+x783)==x784));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x785 = INT8_MIN;
	static int8_t x786 = INT8_MIN;
	static uint8_t x787 = UINT8_MAX;
	volatile int32_t t173 = -1;

    t173 = (x785^((x786+x787)==x788));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = INT16_MAX;
	int64_t x795 = 1LL;
	uint16_t x796 = 1366U;
	int32_t t174 = 156;

    t174 = (x793^((x794+x795)==x796));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x797 = 1U;
	uint64_t x798 = 539574332LLU;
	volatile int32_t t175 = -46231;

    t175 = (x797^((x798+x799)==x800));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x801 = -1;
	int64_t x803 = 48555772480345LL;
	int64_t x804 = INT64_MIN;
	volatile int32_t t176 = -1008;

    t176 = (x801^((x802+x803)==x804));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x805 = 44U;
	static volatile int16_t x806 = INT16_MAX;
	int16_t x807 = INT16_MIN;
	volatile uint32_t t177 = 19U;

    t177 = (x805^((x806+x807)==x808));

    if (t177 != 44U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x810 = 1U;
	uint64_t x811 = 150953782759036601LLU;
	uint16_t x812 = UINT16_MAX;

    t178 = (x809^((x810+x811)==x812));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x813 = -9;
	static uint64_t x814 = UINT64_MAX;
	static int32_t x815 = 137106;
	int8_t x816 = INT8_MIN;
	int32_t t179 = 1935;

    t179 = (x813^((x814+x815)==x816));

    if (t179 != -9) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x817 = UINT64_MAX;
	int32_t x818 = INT32_MIN;
	uint32_t x819 = 352666U;
	uint16_t x820 = 2U;
	uint64_t t180 = UINT64_MAX;

    t180 = (x817^((x818+x819)==x820));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x823 = INT32_MIN;
	volatile int64_t t181 = 1104833838LL;

    t181 = (x821^((x822+x823)==x824));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x825 = UINT64_MAX;
	static uint64_t x827 = 1184LLU;
	static int64_t x828 = -10619333LL;
	static uint64_t t182 = UINT64_MAX;

    t182 = (x825^((x826+x827)==x828));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x829 = -1;
	int16_t x830 = INT16_MAX;
	int16_t x832 = 0;
	static int32_t t183 = 425577;

    t183 = (x829^((x830+x831)==x832));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x833 = 368U;
	int32_t x834 = INT32_MIN;
	uint8_t x835 = 3U;
	uint8_t x836 = 107U;
	int32_t t184 = 1062854;

    t184 = (x833^((x834+x835)==x836));

    if (t184 != 368) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x837 = 1672304299574361538LL;
	int32_t x838 = INT32_MIN;
	uint16_t x839 = 10U;
	int32_t x840 = INT32_MIN;

    t185 = (x837^((x838+x839)==x840));

    if (t185 != 1672304299574361538LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x842 = 2896U;
	int16_t x844 = INT16_MIN;

    t186 = (x841^((x842+x843)==x844));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x845 = -1;
	int32_t x846 = 1;
	static int32_t x847 = 32;
	int16_t x848 = INT16_MIN;
	static volatile int32_t t187 = 107;

    t187 = (x845^((x846+x847)==x848));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x849 = INT32_MIN;
	int8_t x850 = -1;
	int64_t x852 = -1LL;
	volatile int32_t t188 = INT32_MIN;

    t188 = (x849^((x850+x851)==x852));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x857 = 0U;
	volatile int32_t x858 = -1;
	int16_t x859 = -2173;
	uint8_t x860 = 10U;
	static volatile int32_t t189 = 2220934;

    t189 = (x857^((x858+x859)==x860));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x865 = UINT16_MAX;
	uint16_t x866 = UINT16_MAX;
	volatile int8_t x867 = -1;
	volatile uint32_t x868 = UINT32_MAX;
	int32_t t190 = 181219;

    t190 = (x865^((x866+x867)==x868));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x869 = INT8_MAX;
	uint8_t x870 = 1U;
	volatile int32_t t191 = 26;

    t191 = (x869^((x870+x871)==x872));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = INT32_MIN;
	int8_t x874 = -7;
	int16_t x876 = -1;
	static volatile int32_t t192 = INT32_MIN;

    t192 = (x873^((x874+x875)==x876));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x877 = 3U;
	int16_t x878 = -9794;
	int8_t x879 = 12;
	uint16_t x880 = UINT16_MAX;
	volatile int32_t t193 = 7498117;

    t193 = (x877^((x878+x879)==x880));

    if (t193 != 3) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x882 = -1;
	uint64_t x883 = 0LLU;
	static uint64_t x884 = 14841436173LLU;
	static int32_t t194 = 1;

    t194 = (x881^((x882+x883)==x884));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x889 = 23;
	int16_t x890 = INT16_MAX;
	volatile uint8_t x891 = UINT8_MAX;
	static int64_t x892 = INT64_MIN;
	int32_t t195 = -832;

    t195 = (x889^((x890+x891)==x892));

    if (t195 != 23) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x893 = UINT64_MAX;
	int64_t x894 = INT64_MAX;
	uint16_t x895 = 0U;
	uint16_t x896 = 531U;

    t196 = (x893^((x894+x895)==x896));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x898 = INT8_MIN;
	int16_t x899 = 1;
	uint64_t x900 = 23555LLU;
	volatile int32_t t197 = INT32_MIN;

    t197 = (x897^((x898+x899)==x900));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x901 = -2;
	int32_t x902 = INT32_MIN;
	uint16_t x903 = 36U;
	static volatile int32_t t198 = 22951204;

    t198 = (x901^((x902+x903)==x904));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x905 = UINT16_MAX;
	uint64_t x906 = 12162LLU;
	int16_t x907 = INT16_MIN;
	int32_t x908 = INT32_MAX;
	volatile int32_t t199 = -584971771;

    t199 = (x905^((x906+x907)==x908));

    if (t199 != 65535) { NG(); } else { ; }
	
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

