
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

static volatile int32_t x2 = INT32_MIN;
uint8_t x6 = UINT8_MAX;
uint32_t t2 = 142U;
uint8_t x17 = 13U;
uint16_t x20 = UINT16_MAX;
int16_t x23 = INT16_MIN;
int16_t x26 = 1;
volatile int64_t t6 = 7LL;
uint8_t x31 = 28U;
uint64_t t9 = UINT64_MAX;
int8_t x48 = INT8_MIN;
static volatile int8_t x49 = INT8_MIN;
static volatile int64_t x51 = INT64_MIN;
int64_t x56 = -1LL;
int64_t x75 = -1LL;
int64_t x76 = 7LL;
int8_t x89 = INT8_MIN;
int32_t x91 = 287;
uint64_t x96 = 562090503940716LLU;
int16_t x99 = -49;
int64_t x105 = INT64_MIN;
uint64_t x106 = UINT64_MAX;
volatile uint64_t t26 = 59787LLU;
uint8_t x109 = 74U;
int8_t x113 = -1;
volatile int64_t t28 = 2819568780LL;
static int8_t x129 = -28;
static int64_t x133 = -1LL;
uint64_t x134 = 5713143423393266LLU;
int64_t x135 = 190561698431LL;
int8_t x145 = INT8_MAX;
volatile uint64_t x147 = 91LLU;
volatile uint64_t t37 = UINT64_MAX;
static int64_t x156 = 115121228LL;
volatile int32_t x164 = INT32_MIN;
static int32_t x166 = INT32_MIN;
static int64_t t41 = 1775351454LL;
uint8_t x170 = UINT8_MAX;
uint8_t x173 = 2U;
volatile int16_t x186 = INT16_MAX;
int64_t x191 = -1LL;
uint64_t x196 = 205989715LLU;
int8_t x201 = INT8_MIN;
int64_t x203 = INT64_MIN;
int8_t x204 = INT8_MAX;
int64_t x206 = INT64_MIN;
static int16_t x210 = INT16_MIN;
volatile int8_t x211 = -1;
int8_t x216 = 36;
int16_t x217 = INT16_MIN;
uint16_t x219 = 13176U;
int8_t x221 = INT8_MAX;
uint64_t t56 = 2927830029562LLU;
int64_t x232 = INT64_MAX;
int64_t t57 = -882652LL;
static volatile int8_t x233 = INT8_MAX;
int8_t x238 = -10;
uint32_t x241 = 142363769U;
int8_t x244 = -1;
uint64_t x252 = 105823825LLU;
static int8_t x254 = INT8_MAX;
int32_t x268 = -1;
volatile uint64_t x274 = UINT64_MAX;
int64_t t71 = 24377783698437131LL;
volatile int64_t t72 = INT64_MIN;
static uint32_t x304 = 0U;
volatile uint64_t t76 = 1369864350LLU;
int8_t x314 = INT8_MAX;
volatile int32_t t78 = 0;
int16_t x318 = -58;
uint32_t x320 = 986924821U;
static uint64_t x326 = UINT64_MAX;
int16_t x327 = INT16_MIN;
static uint64_t t81 = 347427880516129654LLU;
volatile uint64_t t82 = 202444183LLU;
uint32_t x333 = UINT32_MAX;
int8_t x335 = 1;
uint64_t t84 = 695663736388778LLU;
int32_t x341 = -131689684;
int32_t x343 = INT32_MIN;
int8_t x348 = -3;
int8_t x351 = 16;
uint32_t x352 = 5U;
static uint8_t x359 = 11U;
uint8_t x369 = UINT8_MAX;
static int8_t x375 = -1;
uint64_t x380 = 5LLU;
uint64_t t96 = 2293251270LLU;
uint32_t x394 = 949369U;
int32_t x395 = INT32_MIN;
volatile int64_t t97 = 58992493LL;
static volatile int8_t x400 = INT8_MAX;
volatile uint64_t t98 = 1435003LLU;
int16_t x405 = -667;
volatile int8_t x409 = INT8_MAX;
volatile int32_t x415 = -1;
volatile uint64_t t103 = 6LLU;
static volatile int16_t x429 = INT16_MAX;
uint32_t x431 = UINT32_MAX;
int8_t x435 = -1;
int8_t x438 = 8;
uint32_t x442 = 3768477U;
volatile int16_t x443 = INT16_MAX;
static volatile int16_t x451 = INT16_MAX;
volatile int16_t x453 = INT16_MIN;
static int8_t x455 = -1;
volatile int64_t t112 = -3820103LL;
uint8_t x461 = 2U;
static uint64_t x464 = UINT64_MAX;
int16_t x469 = INT16_MIN;
volatile int8_t x473 = -1;
int32_t x475 = 380471;
uint32_t x481 = 3068U;
volatile int16_t x482 = INT16_MIN;
static uint8_t x485 = 1U;
int16_t x488 = INT16_MIN;
static uint32_t x494 = 58791534U;
static uint16_t x495 = UINT16_MAX;
int32_t x499 = 0;
uint8_t x501 = 60U;
volatile uint8_t x518 = UINT8_MAX;
volatile uint64_t x526 = UINT64_MAX;
uint16_t x528 = UINT16_MAX;
volatile int64_t x529 = INT64_MAX;
uint8_t x534 = 0U;
int64_t x541 = 671340555019LL;
static int16_t x542 = INT16_MIN;
volatile int8_t x543 = -1;
static int16_t x546 = -1;
uint8_t x549 = 127U;
uint16_t x553 = UINT16_MAX;
int32_t x554 = 0;
uint64_t x555 = UINT64_MAX;
int8_t x562 = INT8_MAX;
int16_t x571 = INT16_MAX;
int64_t x579 = INT64_MAX;
static int64_t t143 = -1LL;
int16_t x582 = INT16_MIN;
uint8_t x584 = UINT8_MAX;
volatile uint8_t x586 = UINT8_MAX;
static uint8_t x592 = 1U;
static int8_t x594 = INT8_MIN;
int64_t x605 = -2708LL;
int64_t t150 = -1177257881473124LL;
int16_t x614 = 10828;
static volatile uint32_t t152 = 24647618U;
int16_t x623 = INT16_MIN;
static volatile int16_t x625 = INT16_MIN;
int32_t x628 = -23884341;
volatile int64_t x635 = 4263141582563LL;
uint64_t x636 = 48050569607675LLU;
volatile int64_t x643 = -1LL;
uint32_t t158 = 9295552U;
uint32_t x650 = 64053U;
int8_t x652 = INT8_MIN;
uint64_t x655 = 13431560599LLU;
static int64_t x657 = -1LL;
int32_t x664 = INT32_MIN;
int16_t x666 = INT16_MAX;
static uint16_t x668 = UINT16_MAX;
int16_t x676 = INT16_MAX;
static volatile uint32_t x677 = 596536U;
int64_t x678 = INT64_MIN;
uint16_t x679 = UINT16_MAX;
volatile uint8_t x697 = 85U;
uint16_t x698 = 236U;
uint32_t t170 = 3036339U;
int8_t x704 = -1;
int16_t x705 = INT16_MIN;
static volatile int8_t x706 = INT8_MAX;
static int8_t x707 = -1;
uint32_t x709 = UINT32_MAX;
volatile uint64_t x710 = 4148LLU;
uint8_t x711 = 1U;
int16_t x712 = -64;
uint8_t x720 = 0U;
int32_t x730 = -1;
int16_t x733 = INT16_MIN;
uint64_t x736 = 6709139244868202082LLU;
uint32_t x753 = UINT32_MAX;
int64_t x755 = INT64_MAX;
int64_t t183 = 1092377035210LL;
uint8_t x757 = UINT8_MAX;
static volatile int64_t t184 = 57788676301476LL;
static uint64_t x764 = 11812949907901802LLU;
static uint16_t x766 = 2261U;
int64_t x767 = 1082123337853741675LL;
static volatile int16_t x772 = 296;
static uint32_t x778 = 15U;
int64_t x780 = INT64_MIN;
int8_t x781 = INT8_MAX;
int8_t x782 = INT8_MAX;
int16_t x784 = 3;
int8_t x789 = INT8_MIN;
uint16_t x791 = 12640U;
static int32_t t192 = -218;
int8_t x795 = -1;
int64_t x796 = INT64_MIN;
int8_t x799 = -1;
uint16_t x810 = UINT16_MAX;
static int16_t x816 = INT16_MAX;
volatile uint64_t t198 = 3435870821459375LLU;
volatile int64_t t199 = -1579139828010106LL;


void f0(void) {
    	uint64_t x1 = 1198444470759619LLU;
	int16_t x3 = INT16_MIN;
	static uint8_t x4 = 1U;
	volatile uint64_t t0 = 950097181LLU;

    t0 = (x1-((x2&x3)&x4));

    if (t0 != 1198444470759619LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int32_t x7 = -1;
	int8_t x8 = -1;
	volatile int32_t t1 = -58176565;

    t1 = (x5-((x6&x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static int32_t x10 = -1;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = UINT32_MAX;

    t2 = (x9-((x10&x11)&x12));

    if (t2 != 32640U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	int16_t x14 = 276;
	int8_t x15 = INT8_MAX;
	int16_t x16 = -2;
	volatile int32_t t3 = -1;

    t3 = (x13-((x14&x15)&x16));

    if (t3 != 235) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = UINT64_MAX;
	static uint64_t x19 = 202905872LLU;
	volatile uint64_t t4 = 91646759622080682LLU;

    t4 = (x17-((x18&x19)&x20));

    if (t4 != 18446744073709545213LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int16_t x22 = 14169;
	int8_t x24 = INT8_MIN;
	volatile int64_t t5 = INT64_MIN;

    t5 = (x21-((x22&x23)&x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = UINT16_MAX;
	int64_t x27 = 7947564574LL;
	int64_t x28 = -1864947951LL;

    t6 = (x25-((x26&x27)&x28));

    if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = 50U;
	int16_t x30 = -1;
	uint64_t x32 = 63903LLU;
	volatile uint64_t t7 = 8927665196587728367LLU;

    t7 = (x29-((x30&x31)&x32));

    if (t7 != 22LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 46U;
	static uint16_t x36 = UINT16_MAX;
	volatile uint32_t t8 = 6290U;

    t8 = (x33-((x34&x35)&x36));

    if (t8 != 255U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	volatile int8_t x40 = INT8_MAX;

    t9 = (x37-((x38&x39)&x40));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MAX;
	static int32_t x44 = -1;
	volatile uint64_t t10 = 496326994240584427LLU;

    t10 = (x41-((x42&x43)&x44));

    if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = 173591U;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	volatile uint32_t t11 = 179969251U;

    t11 = (x45-((x46&x47)&x48));

    if (t11 != 2147657239U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 541770426LLU;
	int16_t x52 = INT16_MIN;
	uint64_t t12 = 1697838771581620640LLU;

    t12 = (x49-((x50&x51)&x52));

    if (t12 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	int8_t x54 = 1;
	uint8_t x55 = UINT8_MAX;
	volatile int64_t t13 = 1036033542378LL;

    t13 = (x53-((x54&x55)&x56));

    if (t13 != 2147483646LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -5;
	int32_t x58 = -427;
	int8_t x59 = 2;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 25111391U;

    t14 = (x57-((x58&x59)&x60));

    if (t14 != 4294967291U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	static volatile int8_t x62 = INT8_MAX;
	int16_t x63 = -1094;
	volatile int8_t x64 = -1;
	int32_t t15 = 9359002;

    t15 = (x61-((x62&x63)&x64));

    if (t15 != -59) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 309924317266587671LLU;
	static uint16_t x66 = UINT16_MAX;
	int16_t x67 = 571;
	uint8_t x68 = UINT8_MAX;
	uint64_t t16 = 7420127LLU;

    t16 = (x65-((x66&x67)&x68));

    if (t16 != 309924317266587612LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -1LL;
	int8_t x70 = -2;
	int64_t x71 = INT64_MIN;
	int8_t x72 = -1;
	static int64_t t17 = INT64_MAX;

    t17 = (x69-((x70&x71)&x72));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	static int8_t x74 = -1;
	int64_t t18 = -104597448185049209LL;

    t18 = (x73-((x74&x75)&x76));

    if (t18 != 120LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 1340918LLU;
	static int64_t x78 = -6215225023196LL;
	static uint32_t x79 = UINT32_MAX;
	int64_t x80 = INT64_MIN;
	uint64_t t19 = 193290632286LLU;

    t19 = (x77-((x78&x79)&x80));

    if (t19 != 1340918LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = 6474977285606055LL;
	int16_t x82 = -87;
	volatile int8_t x83 = -2;
	uint16_t x84 = 2312U;
	int64_t t20 = -188851890LL;

    t20 = (x81-((x82&x83)&x84));

    if (t20 != 6474977285603743LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	int16_t x86 = 2584;
	int16_t x87 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 1;

    t21 = (x85-((x86&x87)&x88));

    if (t21 != -2561) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = 61;
	volatile int64_t x92 = INT64_MAX;
	int64_t t22 = 104323276354LL;

    t22 = (x89-((x90&x91)&x92));

    if (t22 != -157LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	volatile uint64_t t23 = 829LLU;

    t23 = (x93-((x94&x95)&x96));

    if (t23 != 18446744073709540883LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int32_t x98 = -1;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = 16508106770540797LL;

    t24 = (x97-((x98&x99)&x100));

    if (t24 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = 7LL;
	static int16_t x102 = INT16_MAX;
	uint32_t x103 = 7U;
	int64_t x104 = 123052200669LL;
	volatile int64_t t25 = 11284278LL;

    t25 = (x101-((x102&x103)&x104));

    if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = INT64_MIN;
	int8_t x108 = -24;

    t26 = (x105-((x106&x107)&x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1LL;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = -46819;
	uint64_t t27 = 0LLU;

    t27 = (x109-((x110&x111)&x112));

    if (t27 != 46893LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x114 = INT32_MAX;
	volatile int64_t x115 = -4266992298LL;
	static int64_t x116 = -1LL;

    t28 = (x113-((x114&x115)&x116));

    if (t28 != -27974999LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 0U;
	static int32_t x118 = 50;
	int16_t x119 = -1;
	int8_t x120 = -3;
	int32_t t29 = -7547452;

    t29 = (x117-((x118&x119)&x120));

    if (t29 != -48) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x121 = 1835872262LLU;
	int32_t x122 = 11;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MAX;
	volatile uint64_t t30 = 34LLU;

    t30 = (x121-((x122&x123)&x124));

    if (t30 != 1835872262LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	static uint8_t x126 = 3U;
	static int32_t x127 = 15066120;
	static int8_t x128 = -1;
	volatile int64_t t31 = -4980LL;

    t31 = (x125-((x126&x127)&x128));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 1U;
	volatile int8_t x131 = INT8_MAX;
	uint64_t x132 = 45875675LLU;
	uint64_t t32 = 26291963995510790LLU;

    t32 = (x129-((x130&x131)&x132));

    if (t32 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x136 = -576406800;
	uint64_t t33 = 1LLU;

    t33 = (x133-((x134&x135)&x136));

    if (t33 != 18446744072165785487LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = -16;
	static uint64_t t34 = 1633829137789LLU;

    t34 = (x137-((x138&x139)&x140));

    if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -4074505422462LL;
	uint16_t x142 = 221U;
	static int32_t x143 = INT32_MIN;
	static int8_t x144 = -1;
	int64_t t35 = 2042360079818LL;

    t35 = (x141-((x142&x143)&x144));

    if (t35 != -4074505422462LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x146 = -1;
	uint64_t x148 = 18968174890LLU;
	static uint64_t t36 = 5869971292800LLU;

    t36 = (x145-((x146&x147)&x148));

    if (t36 != 117LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 809829U;
	static int32_t x151 = 2;
	volatile int16_t x152 = 49;

    t37 = (x149-((x150&x151)&x152));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x154 = 0;
	uint64_t x155 = 77459490LLU;
	volatile uint64_t t38 = 37629020025658467LLU;

    t38 = (x153-((x154&x155)&x156));

    if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = 1;
	uint16_t x158 = 32541U;
	volatile int16_t x159 = INT16_MAX;
	static int16_t x160 = -127;
	int32_t t39 = -332;

    t39 = (x157-((x158&x159)&x160));

    if (t39 != -32512) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	int64_t x162 = -160528593977611LL;
	volatile uint64_t x163 = 58594024840601LLU;
	volatile uint64_t t40 = 1088142261705LLU;

    t40 = (x161-((x162&x163)&x164));

    if (t40 != 18446704495585918975LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 47;
	volatile uint16_t x167 = UINT16_MAX;
	static volatile int64_t x168 = INT64_MIN;

    t41 = (x165-((x166&x167)&x168));

    if (t41 != 47LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -193446;
	volatile int32_t x171 = INT32_MIN;
	uint16_t x172 = 6U;
	static volatile int32_t t42 = -2;

    t42 = (x169-((x170&x171)&x172));

    if (t42 != -193446) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x174 = 33U;
	volatile int64_t x175 = 616949482894026166LL;
	volatile int16_t x176 = -1226;
	int64_t t43 = 644923433519185LL;

    t43 = (x173-((x174&x175)&x176));

    if (t43 != -30LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = 1;
	int8_t x178 = -2;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = 1931779U;
	volatile uint32_t t44 = 3U;

    t44 = (x177-((x178&x179)&x180));

    if (t44 != 4293035521U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	int32_t x182 = 6953865;
	int16_t x183 = -1;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = -1695573;

    t45 = (x181-((x182&x183)&x184));

    if (t45 != -6953857) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = INT32_MIN;
	int64_t x187 = 8546723269482LL;
	int16_t x188 = INT16_MIN;
	volatile int64_t t46 = 8503LL;

    t46 = (x185-((x186&x187)&x188));

    if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 5U;
	static int32_t x190 = INT32_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t47 = 2LL;

    t47 = (x189-((x190&x191)&x192));

    if (t47 != 2147483653LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = 58478609184407LL;
	uint16_t x195 = UINT16_MAX;
	static volatile uint64_t t48 = 5687626357LLU;

    t48 = (x193-((x194&x195)&x196));

    if (t48 != 9223372036854766061LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = 14687U;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	int8_t x200 = 1;
	static volatile int64_t t49 = -254104252079309312LL;

    t49 = (x197-((x198&x199)&x200));

    if (t49 != 14687LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x202 = 34875;
	volatile int64_t t50 = 506382781044898LL;

    t50 = (x201-((x202&x203)&x204));

    if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int32_t x207 = 30226356;
	volatile int64_t x208 = INT64_MAX;
	volatile int64_t t51 = INT64_MIN;

    t51 = (x205-((x206&x207)&x208));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -28576LL;
	volatile int16_t x212 = -1;
	int64_t t52 = -234574149632LL;

    t52 = (x209-((x210&x211)&x212));

    if (t52 != 4192LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	volatile uint8_t x215 = 9U;
	int32_t t53 = -3256834;

    t53 = (x213-((x214&x215)&x216));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x218 = 8U;
	volatile uint32_t x220 = 157U;
	uint32_t t54 = 6667U;

    t54 = (x217-((x218&x219)&x220));

    if (t54 != 4294934520U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = 126100055;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 5169178LLU;
	volatile uint64_t t55 = 388729878295331LLU;

    t55 = (x221-((x222&x223)&x224));

    if (t55 != 18446744073709289599LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = 3121230300591656139LLU;
	uint8_t x226 = 5U;
	static uint16_t x227 = 31U;
	int8_t x228 = INT8_MIN;

    t56 = (x225-((x226&x227)&x228));

    if (t56 != 3121230300591656139LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	int64_t x230 = INT64_MAX;
	int8_t x231 = INT8_MIN;

    t57 = (x229-((x230&x231)&x232));

    if (t57 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x234 = 66LLU;
	volatile uint64_t x235 = 526858LLU;
	uint64_t x236 = 963576291LLU;
	static volatile uint64_t t58 = 130754620609LLU;

    t58 = (x233-((x234&x235)&x236));

    if (t58 != 125LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = -1;
	volatile int16_t x239 = INT16_MIN;
	static int64_t x240 = 13029LL;
	int64_t t59 = 112759965689LL;

    t59 = (x237-((x238&x239)&x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x242 = 817;
	static uint16_t x243 = 211U;
	volatile uint32_t t60 = 20526494U;

    t60 = (x241-((x242&x243)&x244));

    if (t60 != 142363752U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x245 = -4;
	static int8_t x246 = 0;
	int16_t x247 = INT16_MAX;
	volatile uint32_t x248 = 29166U;
	uint32_t t61 = 2060304U;

    t61 = (x245-((x246&x247)&x248));

    if (t61 != 4294967292U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint32_t x250 = 80222999U;
	int8_t x251 = 25;
	volatile uint64_t t62 = 1036223681552LLU;

    t62 = (x249-((x250&x251)&x252));

    if (t62 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = -1LL;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	volatile int64_t t63 = 162524LL;

    t63 = (x253-((x254&x255)&x256));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 54290;
	int8_t x258 = 7;
	int16_t x259 = 34;
	uint32_t x260 = UINT32_MAX;
	uint32_t t64 = 32258U;

    t64 = (x257-((x258&x259)&x260));

    if (t64 != 54288U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	int64_t x262 = 2322878LL;
	uint16_t x263 = 2812U;
	uint64_t x264 = 2158236396510994LLU;
	uint64_t t65 = 830LLU;

    t65 = (x261-((x262&x263)&x264));

    if (t65 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = 9280U;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t t66 = 280982162082LLU;

    t66 = (x265-((x266&x267)&x268));

    if (t66 != 18446744073709509568LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	static volatile uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	static int64_t t67 = 25161509LL;

    t67 = (x269-((x270&x271)&x272));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	int8_t x275 = -1;
	volatile uint16_t x276 = 86U;
	uint64_t t68 = 112970294405897LLU;

    t68 = (x273-((x274&x275)&x276));

    if (t68 != 18446744073709551529LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -5;
	int32_t x280 = -38722;
	static volatile int32_t t69 = 1680;

    t69 = (x277-((x278&x279)&x280));

    if (t69 != 6016) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 310LLU;
	int8_t x282 = INT8_MIN;
	int64_t x283 = 6647209LL;
	uint16_t x284 = 28592U;
	volatile uint64_t t70 = 20LLU;

    t70 = (x281-((x282&x283)&x284));

    if (t70 != 18446744073709523894LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	volatile int64_t x287 = INT64_MIN;
	int32_t x288 = 0;

    t71 = (x285-((x286&x287)&x288));

    if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x290 = 1968315;
	volatile int8_t x291 = INT8_MIN;
	static uint8_t x292 = 12U;

    t72 = (x289-((x290&x291)&x292));

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	int64_t x294 = -1LL;
	static uint32_t x295 = 0U;
	volatile int32_t x296 = INT32_MIN;
	int64_t t73 = -73728678420198LL;

    t73 = (x293-((x294&x295)&x296));

    if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -58;
	volatile int8_t x298 = -20;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 1U;
	int64_t t74 = 22LL;

    t74 = (x297-((x298&x299)&x300));

    if (t74 != -58LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	static int32_t x302 = -1;
	uint64_t x303 = 686LLU;
	uint64_t t75 = 12LLU;

    t75 = (x301-((x302&x303)&x304));

    if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	uint64_t x308 = 42794990620108LLU;

    t76 = (x305-((x306&x307)&x308));

    if (t76 != 18446701278718951423LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = 7;
	int16_t x311 = -24;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t77 = 19LL;

    t77 = (x309-((x310&x311)&x312));

    if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = 1;
	uint8_t x315 = 119U;
	int32_t x316 = -1;

    t78 = (x313-((x314&x315)&x316));

    if (t78 != -118) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 130163U;
	uint64_t x319 = 7527336767837205LLU;
	uint64_t t79 = 25LLU;

    t79 = (x317-((x318&x319)&x320));

    if (t79 != 18446744073004890223LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 1639U;
	uint8_t x322 = 0U;
	int8_t x323 = -1;
	uint64_t x324 = UINT64_MAX;
	uint64_t t80 = 4348633363062718LLU;

    t80 = (x321-((x322&x323)&x324));

    if (t80 != 1639LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 161U;
	int8_t x328 = INT8_MIN;

    t81 = (x325-((x326&x327)&x328));

    if (t81 != 32929LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = 1LLU;
	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;

    t82 = (x329-((x330&x331)&x332));

    if (t82 != 18446744069414617089LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x334 = 9879946LLU;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t83 = 16371607839658453LLU;

    t83 = (x333-((x334&x335)&x336));

    if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x337 = 41498544LLU;
	static volatile int64_t x338 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 1U;

    t84 = (x337-((x338&x339)&x340));

    if (t84 != 41498544LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MIN;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 0;

    t85 = (x341-((x342&x343)&x344));

    if (t85 != 2015793964) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = UINT16_MAX;
	int32_t x346 = 84;
	volatile uint8_t x347 = 87U;
	int32_t t86 = -6146417;

    t86 = (x345-((x346&x347)&x348));

    if (t86 != 65451) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 3218;
	int32_t x350 = INT32_MIN;
	volatile uint32_t t87 = 2U;

    t87 = (x349-((x350&x351)&x352));

    if (t87 != 3218U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x354 = 37;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = -549145898;

    t88 = (x353-((x354&x355)&x356));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 2U;
	static uint32_t x358 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint32_t t89 = 359U;

    t89 = (x357-((x358&x359)&x360));

    if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 94275;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 0U;
	static uint16_t x364 = UINT16_MAX;
	int32_t t90 = 916662;

    t90 = (x361-((x362&x363)&x364));

    if (t90 != 94275) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 26U;
	int32_t x366 = -484845;
	uint8_t x367 = 60U;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 27865;

    t91 = (x365-((x366&x367)&x368));

    if (t91 != 26) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 0U;
	volatile int32_t t92 = 939;

    t92 = (x369-((x370&x371)&x372));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int16_t x374 = -1;
	uint32_t x376 = 331626457U;
	volatile uint32_t t93 = 131U;

    t93 = (x373-((x374&x375)&x376));

    if (t93 != 3963308071U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = -106644629;
	int64_t x378 = INT64_MIN;
	static volatile int32_t x379 = -1076;
	uint64_t t94 = 1036097LLU;

    t94 = (x377-((x378&x379)&x380));

    if (t94 != 18446744073602906987LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 11U;
	static uint16_t x382 = 4995U;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -1092;

    t95 = (x381-((x382&x383)&x384));

    if (t95 != 11) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x389 = UINT64_MAX;
	static uint8_t x390 = 21U;
	volatile int64_t x391 = 182358457LL;
	int32_t x392 = INT32_MAX;

    t96 = (x389-((x390&x391)&x392));

    if (t96 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = 19LL;
	int16_t x396 = INT16_MIN;

    t97 = (x393-((x394&x395)&x396));

    if (t97 != 19LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x397 = 1494LLU;
	int64_t x398 = -1LL;
	uint16_t x399 = 3U;

    t98 = (x397-((x398&x399)&x400));

    if (t98 != 1491LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = UINT32_MAX;
	uint32_t x402 = 11834254U;
	volatile int8_t x403 = -1;
	int8_t x404 = INT8_MIN;
	volatile uint32_t t99 = 8094743U;

    t99 = (x401-((x402&x403)&x404));

    if (t99 != 4283133055U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x406 = -1;
	int32_t x407 = INT32_MAX;
	int16_t x408 = INT16_MAX;
	volatile int32_t t100 = -9872642;

    t100 = (x405-((x406&x407)&x408));

    if (t100 != -33434) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x410 = UINT32_MAX;
	uint16_t x411 = 61U;
	volatile int32_t x412 = INT32_MAX;
	static uint32_t t101 = 936U;

    t101 = (x409-((x410&x411)&x412));

    if (t101 != 66U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x413 = 17U;
	int32_t x414 = INT32_MIN;
	uint8_t x416 = 120U;
	uint32_t t102 = 57U;

    t102 = (x413-((x414&x415)&x416));

    if (t102 != 17U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x417 = 84LLU;
	int32_t x418 = 405;
	int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;

    t103 = (x417-((x418&x419)&x420));

    if (t103 != 84LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = INT8_MIN;
	uint8_t x422 = UINT8_MAX;
	uint64_t x423 = 17LLU;
	uint32_t x424 = 378986593U;
	uint64_t t104 = 673012LLU;

    t104 = (x421-((x422&x423)&x424));

    if (t104 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = 42;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 56U;
	uint16_t x428 = 27U;
	int32_t t105 = -13782;

    t105 = (x425-((x426&x427)&x428));

    if (t105 != 42) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x430 = -1;
	uint16_t x432 = 489U;
	volatile uint32_t t106 = 1426597U;

    t106 = (x429-((x430&x431)&x432));

    if (t106 != 32278U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x434 = 43;
	uint32_t x436 = 728701584U;
	volatile int64_t t107 = INT64_MIN;

    t107 = (x433-((x434&x435)&x436));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x437 = INT32_MIN;
	static uint32_t x439 = UINT32_MAX;
	static uint32_t x440 = 6544288U;
	volatile uint32_t t108 = 580722U;

    t108 = (x437-((x438&x439)&x440));

    if (t108 != 2147483648U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = INT16_MIN;
	static uint32_t x444 = UINT32_MAX;
	static uint32_t t109 = 4229U;

    t109 = (x441-((x442&x443)&x444));

    if (t109 != 4294934371U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = INT32_MAX;
	static uint32_t x446 = 1167235802U;
	int64_t x447 = -1LL;
	volatile int32_t x448 = INT32_MAX;
	volatile int64_t t110 = -63534344716LL;

    t110 = (x445-((x446&x447)&x448));

    if (t110 != 980247845LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x449 = 56U;
	int64_t x450 = INT64_MIN;
	static int16_t x452 = INT16_MAX;
	int64_t t111 = 82174630114LL;

    t111 = (x449-((x450&x451)&x452));

    if (t111 != 56LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x454 = 97U;
	volatile int64_t x456 = 0LL;

    t112 = (x453-((x454&x455)&x456));

    if (t112 != -32768LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x457 = -326;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = 55U;
	volatile int64_t x460 = INT64_MIN;
	uint64_t t113 = 69478900756769LLU;

    t113 = (x457-((x458&x459)&x460));

    if (t113 != 18446744073709551290LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x462 = 275154733763492LLU;
	volatile int16_t x463 = -2;
	uint64_t t114 = 90125895705622LLU;

    t114 = (x461-((x462&x463)&x464));

    if (t114 != 18446468918975788126LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = INT64_MAX;
	int8_t x467 = -1;
	uint32_t x468 = 804499405U;
	volatile int64_t t115 = 336616910074285LL;

    t115 = (x465-((x466&x467)&x468));

    if (t115 != -804499278LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x470 = -1;
	uint8_t x471 = 2U;
	volatile int16_t x472 = -35;
	volatile int32_t t116 = 440690;

    t116 = (x469-((x470&x471)&x472));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x474 = INT16_MAX;
	int32_t x476 = -1;
	volatile int32_t t117 = 109;

    t117 = (x473-((x474&x475)&x476));

    if (t117 != -20024) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = -5;
	volatile int64_t x478 = INT64_MIN;
	static uint16_t x479 = 7U;
	int64_t x480 = -52879025887441LL;
	volatile int64_t t118 = -3566LL;

    t118 = (x477-((x478&x479)&x480));

    if (t118 != -5LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x483 = 127U;
	static int8_t x484 = -1;
	uint32_t t119 = 31095015U;

    t119 = (x481-((x482&x483)&x484));

    if (t119 != 3068U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x486 = 6U;
	static int32_t x487 = -1;
	uint32_t t120 = 1U;

    t120 = (x485-((x486&x487)&x488));

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = -1;
	uint16_t x490 = 1U;
	uint32_t x491 = 2U;
	int32_t x492 = 0;
	uint32_t t121 = UINT32_MAX;

    t121 = (x489-((x490&x491)&x492));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x493 = -3;
	volatile int32_t x496 = INT32_MIN;
	volatile uint32_t t122 = 133713U;

    t122 = (x493-((x494&x495)&x496));

    if (t122 != 4294967293U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = INT32_MAX;
	volatile uint32_t x498 = 23466U;
	static int8_t x500 = INT8_MIN;
	static uint32_t t123 = 1386362U;

    t123 = (x497-((x498&x499)&x500));

    if (t123 != 2147483647U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x502 = -1;
	volatile uint64_t x503 = 132098718340062LLU;
	uint64_t x504 = 91036506617LLU;
	uint64_t t124 = 177357810797362LLU;

    t124 = (x501-((x502&x503)&x504));

    if (t124 != 18446744055990546020LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x505 = -3;
	uint8_t x506 = 26U;
	volatile int16_t x507 = INT16_MAX;
	int64_t x508 = INT64_MIN;
	int64_t t125 = 135901634239019804LL;

    t125 = (x505-((x506&x507)&x508));

    if (t125 != -3LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x509 = 326797908LLU;
	int32_t x510 = INT32_MIN;
	int64_t x511 = -58807LL;
	int32_t x512 = INT32_MIN;
	static uint64_t t126 = 33525139424LLU;

    t126 = (x509-((x510&x511)&x512));

    if (t126 != 2474281556LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = -1;
	int16_t x514 = INT16_MIN;
	int32_t x515 = INT32_MIN;
	int32_t x516 = -99;
	static volatile int32_t t127 = INT32_MAX;

    t127 = (x513-((x514&x515)&x516));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x519 = 5131;
	int32_t x520 = 0;
	volatile int32_t t128 = INT32_MIN;

    t128 = (x517-((x518&x519)&x520));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x521 = 1;
	uint16_t x522 = 1U;
	int16_t x523 = -1;
	volatile int16_t x524 = INT16_MAX;
	int32_t t129 = 1030334;

    t129 = (x521-((x522&x523)&x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = -1;
	int64_t x527 = -12599779326793LL;
	static uint64_t t130 = 1534266787173377331LLU;

    t130 = (x525-((x526&x527)&x528));

    if (t130 != 18446744073709550408LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x530 = UINT32_MAX;
	static uint8_t x531 = UINT8_MAX;
	uint16_t x532 = 185U;
	int64_t t131 = -1LL;

    t131 = (x529-((x530&x531)&x532));

    if (t131 != 9223372036854775622LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x533 = 6959;
	int64_t x535 = INT64_MAX;
	int16_t x536 = INT16_MAX;
	volatile int64_t t132 = -1718871074427767427LL;

    t132 = (x533-((x534&x535)&x536));

    if (t132 != 6959LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = -1;
	int64_t x538 = INT64_MAX;
	int32_t x539 = 4054580;
	volatile int64_t x540 = -1LL;
	static volatile int64_t t133 = -541119443LL;

    t133 = (x537-((x538&x539)&x540));

    if (t133 != -4054581LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x544 = 522368LLU;
	static uint64_t t134 = 308352280LLU;

    t134 = (x541-((x542&x543)&x544));

    if (t134 != 671340063499LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x545 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = -1;
	static int32_t t135 = -25373;

    t135 = (x545-((x546&x547)&x548));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x550 = INT64_MIN;
	uint8_t x551 = 93U;
	int8_t x552 = 2;
	static int64_t t136 = -211389322740LL;

    t136 = (x549-((x550&x551)&x552));

    if (t136 != 127LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x556 = -1LL;
	uint64_t t137 = 121LLU;

    t137 = (x553-((x554&x555)&x556));

    if (t137 != 65535LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x557 = INT16_MIN;
	uint16_t x558 = 25U;
	volatile uint64_t x559 = 1LLU;
	uint64_t x560 = 10LLU;
	uint64_t t138 = 103926898LLU;

    t138 = (x557-((x558&x559)&x560));

    if (t138 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x561 = -1200;
	volatile uint64_t x563 = UINT64_MAX;
	int8_t x564 = INT8_MIN;
	volatile uint64_t t139 = 66690873039LLU;

    t139 = (x561-((x562&x563)&x564));

    if (t139 != 18446744073709550416LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x566 = 1891205;
	int32_t x567 = INT32_MIN;
	uint8_t x568 = 1U;
	uint64_t t140 = UINT64_MAX;

    t140 = (x565-((x566&x567)&x568));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x569 = 1;
	int64_t x570 = -4LL;
	int64_t x572 = INT64_MIN;
	static volatile int64_t t141 = -2LL;

    t141 = (x569-((x570&x571)&x572));

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MAX;
	volatile uint32_t x575 = UINT32_MAX;
	int64_t x576 = 8766LL;
	int64_t t142 = 3960239587LL;

    t142 = (x573-((x574&x575)&x576));

    if (t142 != -41534LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x577 = 69;
	volatile int8_t x578 = -1;
	int16_t x580 = 11;

    t143 = (x577-((x578&x579)&x580));

    if (t143 != 58LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x581 = INT8_MAX;
	volatile uint32_t x583 = UINT32_MAX;
	volatile uint32_t t144 = 2867375U;

    t144 = (x581-((x582&x583)&x584));

    if (t144 != 127U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x585 = 190969150U;
	int64_t x587 = 307099733768108871LL;
	uint32_t x588 = 1227U;
	int64_t t145 = 44328745387718460LL;

    t145 = (x585-((x586&x587)&x588));

    if (t145 != 190969083LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = INT64_MAX;
	int8_t x590 = 1;
	int8_t x591 = 6;
	volatile int64_t t146 = INT64_MAX;

    t146 = (x589-((x590&x591)&x592));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x593 = INT16_MIN;
	volatile int64_t x595 = -212344587402339LL;
	int8_t x596 = 1;
	int64_t t147 = 982930764143LL;

    t147 = (x593-((x594&x595)&x596));

    if (t147 != -32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x597 = INT16_MIN;
	int16_t x598 = -5401;
	static int8_t x599 = 48;
	volatile int64_t x600 = INT64_MIN;
	volatile int64_t t148 = 8006526197619597LL;

    t148 = (x597-((x598&x599)&x600));

    if (t148 != -32768LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x601 = 59U;
	static int8_t x602 = INT8_MIN;
	uint64_t x603 = 366009959080955LLU;
	int8_t x604 = INT8_MIN;
	uint64_t t149 = 140LLU;

    t149 = (x601-((x602&x603)&x604));

    if (t149 != 18446378063750470843LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x606 = -1LL;
	static uint32_t x607 = UINT32_MAX;
	int16_t x608 = -1;

    t150 = (x605-((x606&x607)&x608));

    if (t150 != -4294970003LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x613 = 227LL;
	int8_t x615 = -1;
	int64_t x616 = INT64_MIN;
	volatile int64_t t151 = 405959526324793LL;

    t151 = (x613-((x614&x615)&x616));

    if (t151 != 227LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x617 = INT8_MIN;
	int16_t x618 = -1;
	uint32_t x619 = UINT32_MAX;
	int8_t x620 = -1;

    t152 = (x617-((x618&x619)&x620));

    if (t152 != 4294967169U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x621 = 0;
	uint32_t x622 = 241926U;
	int16_t x624 = 1;
	static volatile uint32_t t153 = 128546236U;

    t153 = (x621-((x622&x623)&x624));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x626 = -1LL;
	uint32_t x627 = 4U;
	int64_t t154 = -30020864LL;

    t154 = (x625-((x626&x627)&x628));

    if (t154 != -32768LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = 3;
	volatile int8_t x630 = INT8_MIN;
	static int8_t x631 = -1;
	int8_t x632 = INT8_MIN;
	static int32_t t155 = -1;

    t155 = (x629-((x630&x631)&x632));

    if (t155 != 131) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x633 = INT64_MIN;
	uint32_t x634 = UINT32_MAX;
	volatile uint64_t t156 = 359134856LLU;

    t156 = (x633-((x634&x635)&x636));

    if (t156 != 9223372034623397661LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x641 = -579257270;
	uint8_t x642 = UINT8_MAX;
	static int64_t x644 = INT64_MAX;
	int64_t t157 = -57757617LL;

    t157 = (x641-((x642&x643)&x644));

    if (t157 != -579257525LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x645 = -19009549;
	uint32_t x646 = UINT32_MAX;
	uint32_t x647 = 805U;
	int32_t x648 = INT32_MIN;

    t158 = (x645-((x646&x647)&x648));

    if (t158 != 4275957747U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x649 = 1U;
	static volatile int64_t x651 = -3280557174LL;
	volatile int64_t t159 = 13387806LL;

    t159 = (x649-((x650&x651)&x652));

    if (t159 != -43519LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x653 = 37487;
	int32_t x654 = 23406986;
	volatile int32_t x656 = -3554581;
	uint64_t t160 = 115696294272LLU;

    t160 = (x653-((x654&x655)&x656));

    if (t160 != 18446744073709523437LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x658 = INT8_MAX;
	uint64_t x659 = UINT64_MAX;
	int8_t x660 = 0;
	uint64_t t161 = UINT64_MAX;

    t161 = (x657-((x658&x659)&x660));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x661 = INT16_MAX;
	uint32_t x662 = UINT32_MAX;
	static uint64_t x663 = 49237633484100LLU;
	uint64_t t162 = 134765LLU;

    t162 = (x661-((x662&x663)&x664));

    if (t162 != 32767LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = -1;
	int32_t x667 = 19;
	int32_t t163 = -68074063;

    t163 = (x665-((x666&x667)&x668));

    if (t163 != -20) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x673 = -1;
	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MAX;
	volatile int32_t t164 = -6;

    t164 = (x673-((x674&x675)&x676));

    if (t164 != -32641) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x680 = 9533109LLU;
	volatile uint64_t t165 = 80LLU;

    t165 = (x677-((x678&x679)&x680));

    if (t165 != 596536LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x681 = INT16_MIN;
	int16_t x682 = -430;
	int32_t x683 = INT32_MAX;
	static uint8_t x684 = 0U;
	static volatile int32_t t166 = -457;

    t166 = (x681-((x682&x683)&x684));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x685 = -590351306LL;
	int16_t x686 = INT16_MIN;
	int64_t x687 = INT64_MIN;
	static uint8_t x688 = UINT8_MAX;
	int64_t t167 = 302186636969386LL;

    t167 = (x685-((x686&x687)&x688));

    if (t167 != -590351306LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int8_t x691 = -1;
	int8_t x692 = INT8_MIN;
	volatile int32_t t168 = INT32_MAX;

    t168 = (x689-((x690&x691)&x692));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x693 = 795327LL;
	volatile uint64_t x694 = 34LLU;
	int32_t x695 = -7;
	int8_t x696 = INT8_MAX;
	uint64_t t169 = 31LLU;

    t169 = (x693-((x694&x695)&x696));

    if (t169 != 795295LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x699 = 1269569U;
	int32_t x700 = -318206;

    t170 = (x697-((x698&x699)&x700));

    if (t170 != 85U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x701 = 20780U;
	volatile uint8_t x702 = UINT8_MAX;
	volatile int16_t x703 = -1;
	uint32_t t171 = 1U;

    t171 = (x701-((x702&x703)&x704));

    if (t171 != 20525U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x708 = -1LL;
	volatile int64_t t172 = -2029594LL;

    t172 = (x705-((x706&x707)&x708));

    if (t172 != -32895LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t t173 = 9317224247LLU;

    t173 = (x709-((x710&x711)&x712));

    if (t173 != 4294967295LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x713 = UINT32_MAX;
	static uint16_t x714 = UINT16_MAX;
	int16_t x715 = INT16_MIN;
	uint64_t x716 = 2247910LLU;
	uint64_t t174 = 1485367326331LLU;

    t174 = (x713-((x714&x715)&x716));

    if (t174 != 4294967295LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x717 = 16310U;
	int16_t x718 = INT16_MIN;
	uint16_t x719 = UINT16_MAX;
	int32_t t175 = 9005003;

    t175 = (x717-((x718&x719)&x720));

    if (t175 != 16310) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x721 = INT64_MIN;
	static uint32_t x722 = 2U;
	uint8_t x723 = 9U;
	uint16_t x724 = 28431U;
	int64_t t176 = INT64_MIN;

    t176 = (x721-((x722&x723)&x724));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = INT32_MAX;
	int64_t x726 = 3581687551LL;
	int32_t x727 = -1;
	uint64_t x728 = 543248808631686174LLU;
	volatile uint64_t t177 = 13LLU;

    t177 = (x725-((x726&x727)&x728));

    if (t177 != 18446744072549559265LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = -1;
	uint64_t x731 = 333366673653LLU;
	uint8_t x732 = 5U;
	uint64_t t178 = 4099260591643250086LLU;

    t178 = (x729-((x730&x731)&x732));

    if (t178 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x734 = -1LL;
	uint64_t x735 = 19475070828LLU;
	volatile uint64_t t179 = 170LLU;

    t179 = (x733-((x734&x735)&x736));

    if (t179 != 18446744071427789216LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = INT8_MIN;
	uint32_t x738 = 109383U;
	uint16_t x739 = 1792U;
	uint8_t x740 = 6U;
	static uint32_t t180 = 125644680U;

    t180 = (x737-((x738&x739)&x740));

    if (t180 != 4294967168U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x741 = -1LL;
	static int64_t x742 = INT64_MIN;
	volatile int16_t x743 = 1;
	static volatile int64_t x744 = 3612327168589227LL;
	int64_t t181 = 820975404717LL;

    t181 = (x741-((x742&x743)&x744));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x745 = INT32_MAX;
	static int64_t x746 = 7892404747220428LL;
	volatile int32_t x747 = INT32_MIN;
	uint8_t x748 = 15U;
	int64_t t182 = -18007901124696LL;

    t182 = (x745-((x746&x747)&x748));

    if (t182 != 2147483647LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x754 = -1;
	volatile uint16_t x756 = UINT16_MAX;

    t183 = (x753-((x754&x755)&x756));

    if (t183 != 4294901760LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x758 = INT16_MIN;
	int64_t x759 = INT64_MIN;
	uint32_t x760 = 27U;

    t184 = (x757-((x758&x759)&x760));

    if (t184 != 255LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x761 = 470;
	int64_t x762 = INT64_MIN;
	static uint64_t x763 = 8LLU;
	uint64_t t185 = 12917LLU;

    t185 = (x761-((x762&x763)&x764));

    if (t185 != 470LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -13803;
	int64_t x768 = INT64_MIN;
	int64_t t186 = 19162082012LL;

    t186 = (x765-((x766&x767)&x768));

    if (t186 != -13803LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x770 = -1;
	int16_t x771 = INT16_MIN;
	volatile int64_t t187 = INT64_MIN;

    t187 = (x769-((x770&x771)&x772));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x773 = 31868440U;
	uint64_t x774 = 164935924752658268LLU;
	int32_t x775 = INT32_MIN;
	static volatile int16_t x776 = INT16_MIN;
	uint64_t t188 = 1LLU;

    t188 = (x773-((x774&x775)&x776));

    if (t188 != 18281808149082424856LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x777 = INT8_MAX;
	uint16_t x779 = 10U;
	int64_t t189 = 21443989146914LL;

    t189 = (x777-((x778&x779)&x780));

    if (t189 != 127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x783 = -1;
	int32_t t190 = -8236389;

    t190 = (x781-((x782&x783)&x784));

    if (t190 != 124) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x785 = INT16_MIN;
	uint32_t x786 = UINT32_MAX;
	volatile int8_t x787 = INT8_MIN;
	static int8_t x788 = -1;
	uint32_t t191 = 4353659U;

    t191 = (x785-((x786&x787)&x788));

    if (t191 != 4294934656U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x790 = 6;
	int16_t x792 = INT16_MIN;

    t192 = (x789-((x790&x791)&x792));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x793 = -90536077;
	int16_t x794 = INT16_MIN;
	static volatile int64_t t193 = 33271537743897345LL;

    t193 = (x793-((x794&x795)&x796));

    if (t193 != 9223372036764239731LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x797 = 15642U;
	int8_t x798 = 0;
	volatile int8_t x800 = INT8_MIN;
	uint32_t t194 = 595U;

    t194 = (x797-((x798&x799)&x800));

    if (t194 != 15642U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = INT8_MIN;
	volatile int64_t x802 = INT64_MIN;
	int16_t x803 = -5417;
	static volatile int16_t x804 = INT16_MIN;
	volatile int64_t t195 = -3999670LL;

    t195 = (x801-((x802&x803)&x804));

    if (t195 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x805 = INT32_MAX;
	volatile uint8_t x806 = 0U;
	uint64_t x807 = 8519LLU;
	int64_t x808 = INT64_MAX;
	volatile uint64_t t196 = 68387LLU;

    t196 = (x805-((x806&x807)&x808));

    if (t196 != 2147483647LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x809 = INT8_MAX;
	int32_t x811 = 507;
	int32_t x812 = INT32_MIN;
	int32_t t197 = 44484306;

    t197 = (x809-((x810&x811)&x812));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x813 = UINT64_MAX;
	int32_t x814 = 60;
	int32_t x815 = -1;

    t198 = (x813-((x814&x815)&x816));

    if (t198 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x817 = -584;
	uint16_t x818 = 66U;
	int16_t x819 = 18;
	int64_t x820 = -1LL;

    t199 = (x817-((x818&x819)&x820));

    if (t199 != -586LL) { NG(); } else { ; }
	
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

