
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

volatile uint8_t x1 = UINT8_MAX;
uint32_t t1 = UINT32_MAX;
uint64_t x11 = 1065538333LLU;
uint64_t x17 = 1275952065877LLU;
uint64_t t4 = 37635604669953692LLU;
static int16_t x22 = INT16_MAX;
volatile int64_t x26 = INT64_MIN;
static int64_t t6 = 4260718164258807LL;
static volatile int16_t x32 = INT16_MIN;
static uint64_t x40 = 5616386414LLU;
int16_t x45 = 3;
int64_t x46 = INT64_MIN;
static uint16_t x49 = UINT16_MAX;
int32_t t12 = 18;
int8_t x65 = INT8_MIN;
int64_t x70 = INT64_MIN;
int32_t x74 = 0;
static volatile uint32_t x84 = UINT32_MAX;
static uint32_t t20 = UINT32_MAX;
int16_t x85 = INT16_MAX;
volatile int64_t x89 = INT64_MIN;
int64_t x93 = INT64_MIN;
static int32_t t24 = -2740;
int16_t x101 = INT16_MAX;
uint8_t x102 = 3U;
int64_t x111 = INT64_MAX;
int64_t x112 = INT64_MIN;
volatile uint64_t t28 = UINT64_MAX;
static uint16_t x122 = UINT16_MAX;
uint16_t x124 = UINT16_MAX;
volatile int32_t t31 = 67;
static uint64_t x130 = 191668286505659LLU;
int8_t x138 = INT8_MIN;
volatile int32_t t34 = 375702746;
int16_t x142 = INT16_MIN;
int16_t x145 = INT16_MAX;
uint8_t x149 = 60U;
int64_t t37 = 5894LL;
static int16_t x153 = INT16_MIN;
volatile int64_t x158 = -1LL;
static int32_t x161 = -1;
int32_t t40 = -1178;
static volatile uint8_t x175 = 1U;
uint32_t x178 = 8230U;
uint64_t t45 = 447087250LLU;
uint32_t x185 = UINT32_MAX;
int16_t x186 = 225;
uint64_t x194 = 11LLU;
int16_t x199 = 10326;
volatile uint8_t x202 = UINT8_MAX;
int16_t x206 = 8;
int64_t x216 = INT64_MAX;
static volatile int64_t t53 = INT64_MAX;
int16_t x217 = INT16_MIN;
uint32_t x219 = 12U;
int64_t x228 = INT64_MIN;
volatile int32_t x230 = INT32_MIN;
uint8_t x234 = 37U;
uint16_t x236 = UINT16_MAX;
int32_t x237 = -1;
volatile int64_t t59 = -198817752LL;
uint32_t x242 = UINT32_MAX;
uint8_t x246 = 78U;
int64_t x250 = -21940981120LL;
volatile uint32_t x261 = 155U;
volatile int64_t x263 = -80017774614931235LL;
int16_t x264 = INT16_MIN;
int16_t x269 = -16;
volatile int8_t x271 = INT8_MIN;
int64_t t67 = -447370718242071LL;
static int32_t x275 = INT32_MAX;
int64_t x279 = -313853185677138816LL;
static int32_t x285 = -14788784;
int8_t x293 = -1;
uint64_t x296 = 4614483080928753LLU;
int16_t x305 = 1;
int32_t x312 = -32;
volatile uint32_t x330 = 348670U;
int64_t t82 = 69969279LL;
volatile int32_t x334 = -4;
volatile uint32_t t83 = UINT32_MAX;
uint64_t x337 = 31867210722398023LLU;
uint8_t x339 = 8U;
static uint64_t t85 = UINT64_MAX;
static int8_t x345 = INT8_MAX;
int16_t x352 = INT16_MAX;
static int32_t t89 = 0;
uint16_t x362 = 2635U;
int32_t x363 = INT32_MAX;
uint16_t x365 = UINT16_MAX;
int64_t x368 = 3137996440137807096LL;
uint64_t t92 = 2057184397LLU;
int8_t x376 = -1;
static uint64_t t93 = 204680803547700638LLU;
volatile int64_t t94 = 119505654LL;
volatile int16_t x384 = INT16_MIN;
int8_t x386 = 36;
static int8_t x391 = -1;
volatile int8_t x392 = INT8_MIN;
int64_t x393 = -1LL;
static volatile int32_t x394 = -1;
uint8_t x396 = 80U;
volatile int64_t t99 = -11999760408250LL;
uint64_t x404 = UINT64_MAX;
volatile uint16_t x409 = 0U;
int16_t x431 = INT16_MAX;
int64_t t106 = -9977LL;
static uint32_t x437 = UINT32_MAX;
static volatile uint32_t x438 = 65U;
volatile int16_t x442 = INT16_MIN;
volatile int64_t t109 = -33900164246LL;
int16_t x447 = 3;
static volatile uint16_t x450 = 5U;
static volatile int16_t x451 = INT16_MIN;
volatile int64_t x455 = -4918095381975LL;
int8_t x460 = -5;
static volatile int32_t t113 = -3;
volatile int64_t x466 = -84660911201LL;
int16_t x468 = -13;
uint32_t x471 = 2138982529U;
uint64_t t117 = UINT64_MAX;
int8_t x477 = -1;
volatile int32_t x479 = INT32_MIN;
uint8_t x488 = UINT8_MAX;
volatile int32_t t120 = -1806;
static uint32_t x495 = UINT32_MAX;
static uint32_t x497 = UINT32_MAX;
int8_t x500 = -1;
static volatile int32_t t125 = -1892;
uint64_t x511 = 1297LLU;
static int8_t x513 = INT8_MIN;
volatile uint32_t x516 = 6231290U;
int16_t x521 = 1326;
uint16_t x523 = 13U;
uint16_t x527 = 9478U;
int32_t t131 = 221997681;
uint32_t x536 = 6U;
static uint64_t x540 = 23931704429642LLU;
int16_t x547 = INT16_MIN;
int16_t x550 = -1;
uint32_t t136 = UINT32_MAX;
uint64_t t137 = 612242833035685LLU;
int8_t x560 = -1;
uint8_t x563 = UINT8_MAX;
uint16_t x568 = 1U;
int32_t t140 = 3;
static volatile uint8_t x569 = 52U;
uint8_t x574 = UINT8_MAX;
int8_t x581 = -3;
volatile uint32_t t145 = UINT32_MAX;
int64_t x599 = INT64_MIN;
volatile int8_t x600 = INT8_MIN;
static int16_t x603 = INT16_MIN;
uint64_t x605 = 56LLU;
static int64_t t151 = -211346436472LL;
int16_t x617 = -1;
uint16_t x624 = 1877U;
int32_t x627 = 133515048;
int16_t x628 = INT16_MIN;
int16_t x636 = INT16_MIN;
int16_t x651 = INT16_MAX;
volatile int8_t x655 = -9;
volatile uint32_t t160 = 595U;
static volatile uint16_t x664 = UINT16_MAX;
int64_t x667 = INT64_MAX;
volatile int8_t x669 = 1;
int8_t x675 = -1;
uint32_t x693 = 27983916U;
volatile int32_t x698 = 100434;
volatile uint16_t x702 = UINT16_MAX;
int32_t t171 = -2250;
int8_t x711 = -1;
int8_t x716 = -1;
uint16_t x717 = 2517U;
uint8_t x724 = UINT8_MAX;
int64_t t176 = 8359LL;
volatile int32_t x729 = INT32_MIN;
uint64_t t178 = 21064404881902564LLU;
static volatile int64_t t179 = 1935295474161819677LL;
uint16_t x741 = 2U;
uint64_t x754 = 5879362684591916LLU;
volatile uint64_t t183 = 3789004648698465869LLU;
int32_t x764 = -72573588;
int16_t x765 = INT16_MIN;
uint64_t x768 = 207710699538015207LLU;
static volatile uint64_t x772 = 3LLU;
uint8_t x774 = UINT8_MAX;
volatile int64_t t187 = 1608943952LL;
static uint64_t x782 = 60735360LLU;
volatile int16_t x786 = 932;
int32_t t190 = 34515850;
uint64_t x789 = UINT64_MAX;
uint32_t x792 = 105875U;
static uint16_t x798 = 23U;
static int16_t x804 = -3;
static volatile uint64_t t196 = 239341205697LLU;
int8_t x824 = INT8_MIN;
volatile int32_t t199 = -280144;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 12U;

    t0 = (x1|((x2/x3)|x4));

    if (t0 != 2147483903U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 6009U;
	static int32_t x6 = -2452191;
	uint32_t x7 = 93146U;
	int16_t x8 = -1;

    t1 = (x5|((x6/x7)|x8));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	static int32_t x10 = INT32_MAX;
	volatile int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = 46280767889737656LLU;

    t2 = (x9|((x10/x11)|x12));

    if (t2 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 218U;
	uint32_t x14 = 265U;
	int32_t x15 = -1818;
	int64_t x16 = -8009864LL;
	volatile int64_t t3 = -2247468443290632733LL;

    t3 = (x13|((x14/x15)|x16));

    if (t3 != -8009734LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MAX;
	int16_t x19 = 2;
	uint32_t x20 = 9449865U;

    t4 = (x17|((x18/x19)|x20));

    if (t4 != 1275953118719LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	static int8_t x23 = 13;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -435;

    t5 = (x21|((x22/x23)|x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -25;
	int8_t x27 = 8;
	uint16_t x28 = 155U;

    t6 = (x25|((x26/x27)|x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	static uint16_t x30 = 24U;
	volatile uint64_t x31 = 13556LLU;
	static volatile uint64_t t7 = UINT64_MAX;

    t7 = (x29|((x30/x31)|x32));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = UINT32_MAX;
	uint64_t x34 = 27777LLU;
	int8_t x35 = 2;
	static int16_t x36 = 1;
	volatile uint64_t t8 = 48964964LLU;

    t8 = (x33|((x34/x35)|x36));

    if (t8 != 4294967295LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 18655U;
	int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MIN;
	volatile uint64_t t9 = 7575908485674LLU;

    t9 = (x37|((x38/x39)|x40));

    if (t9 != 5616388607LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	int16_t x42 = -4;
	int32_t x43 = 15034;
	uint64_t x44 = 1183018334999LLU;
	volatile uint64_t t10 = 102395071517LLU;

    t10 = (x41|((x42/x43)|x44));

    if (t10 != 9223373219873110807LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 33890154LL;

    t11 = (x45|((x46/x47)|x48));

    if (t11 != -8421501LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x50 = INT32_MAX;
	uint16_t x51 = 474U;
	volatile int8_t x52 = INT8_MIN;

    t12 = (x49|((x50/x51)|x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 26U;
	static int8_t x54 = 0;
	static int64_t x55 = -1LL;
	static volatile uint8_t x56 = 2U;
	int64_t t13 = -224754404384168LL;

    t13 = (x53|((x54/x55)|x56));

    if (t13 != 26LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = -289;
	static int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = 71779233637667067LLU;

    t14 = (x57|((x58/x59)|x60));

    if (t14 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 1747901;
	uint8_t x62 = 2U;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t x64 = INT32_MAX;
	static int32_t t15 = INT32_MAX;

    t15 = (x61|((x62/x63)|x64));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x66 = INT8_MIN;
	int8_t x67 = 8;
	uint64_t x68 = 6098570799108414LLU;
	static volatile uint64_t t16 = 811001971440016LLU;

    t16 = (x65|((x66/x67)|x68));

    if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 18U;
	int64_t x71 = 1958LL;
	int32_t x72 = -491782;
	int64_t t17 = 2217186426392696152LL;

    t17 = (x69|((x70/x71)|x72));

    if (t17 != -327942LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int16_t x75 = 1;
	volatile int8_t x76 = INT8_MIN;
	int32_t t18 = 11071540;

    t18 = (x73|((x74/x75)|x76));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 1004046LLU;
	static uint8_t x78 = 71U;
	int64_t x79 = -1LL;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t19 = UINT64_MAX;

    t19 = (x77|((x78/x79)|x80));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	static int8_t x82 = INT8_MAX;
	static int16_t x83 = INT16_MIN;

    t20 = (x81|((x82/x83)|x84));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x86 = UINT8_MAX;
	uint64_t x87 = 724LLU;
	uint8_t x88 = UINT8_MAX;
	volatile uint64_t t21 = 10158LLU;

    t21 = (x85|((x86/x87)|x88));

    if (t21 != 32767LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = 75U;
	volatile int16_t x91 = INT16_MIN;
	volatile int64_t x92 = INT64_MAX;
	int64_t t22 = 836052557425909LL;

    t22 = (x89|((x90/x91)|x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 2U;
	static int64_t t23 = 510051LL;

    t23 = (x93|((x94/x95)|x96));

    if (t23 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	static int32_t x99 = INT32_MAX;
	volatile uint16_t x100 = 7U;

    t24 = (x97|((x98/x99)|x100));

    if (t24 != -121) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = 1LLU;
	volatile uint64_t t25 = 108755LLU;

    t25 = (x101|((x102/x103)|x104));

    if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	static volatile uint64_t x106 = 43718823LLU;
	int16_t x107 = 179;
	volatile uint32_t x108 = 1728U;
	uint64_t t26 = 45836456992907824LLU;

    t26 = (x105|((x106/x107)|x108));

    if (t26 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 2U;
	int32_t x110 = 300;
	volatile int64_t t27 = 77592871279LL;

    t27 = (x109|((x110/x111)|x112));

    if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	int16_t x114 = -79;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MIN;

    t28 = (x113|((x114/x115)|x116));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	static int8_t x118 = 44;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -2;

    t29 = (x117|((x118/x119)|x120));

    if (t29 != -2147483393) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 1;
	int64_t x123 = -212798LL;
	volatile int64_t t30 = 10942926LL;

    t30 = (x121|((x122/x123)|x124));

    if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -389192162;
	static volatile uint16_t x127 = 75U;
	int8_t x128 = -1;

    t31 = (x125|((x126/x127)|x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 21;
	int8_t x131 = INT8_MIN;
	volatile int64_t x132 = 41LL;
	volatile uint64_t t32 = 29LLU;

    t32 = (x129|((x130/x131)|x132));

    if (t32 != 61LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -2;
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 7730;

    t33 = (x133|((x134/x135)|x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 1;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = UINT8_MAX;

    t34 = (x137|((x138/x139)|x140));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = 2U;
	static int32_t t35 = -6628;

    t35 = (x141|((x142/x143)|x144));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x146 = 17U;
	volatile uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t36 = 6012337;

    t36 = (x145|((x146/x147)|x148));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 11U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = 102713LL;

    t37 = (x149|((x150/x151)|x152));

    if (t37 != 102717LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = 1U;
	int64_t x155 = -6188LL;
	int8_t x156 = INT8_MIN;
	volatile int64_t t38 = -261LL;

    t38 = (x153|((x154/x155)|x156));

    if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -3595;
	uint64_t x159 = 10038675352502LLU;
	int16_t x160 = INT16_MIN;
	static volatile uint64_t t39 = 4569760126287216163LLU;

    t39 = (x157|((x158/x159)|x160));

    if (t39 != 18446744073709550079LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = -1;
	int32_t x163 = -1;
	static int8_t x164 = -1;

    t40 = (x161|((x162/x163)|x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	int64_t x166 = 37345155LL;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = 3451;
	int64_t t41 = -14LL;

    t41 = (x165|((x166/x167)|x168));

    if (t41 != -28805LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = 634;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = -3917325;
	static int16_t x172 = -18;
	volatile int32_t t42 = 53;

    t42 = (x169|((x170/x171)|x172));

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int64_t x174 = INT64_MAX;
	uint8_t x176 = UINT8_MAX;
	int64_t t43 = INT64_MAX;

    t43 = (x173|((x174/x175)|x176));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	int8_t x179 = -1;
	volatile int16_t x180 = 3560;
	uint32_t t44 = 25290U;

    t44 = (x177|((x178/x179)|x180));

    if (t44 != 4294938088U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 7U;
	volatile int16_t x182 = -1;
	static uint64_t x183 = 135284332115785LLU;
	static volatile int32_t x184 = INT32_MIN;

    t45 = (x181|((x182/x183)|x184));

    if (t45 != 18446744071562204327LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x187 = -22;
	volatile int8_t x188 = -7;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (x185|((x186/x187)|x188));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MIN;
	int64_t x190 = -451942786407533LL;
	static int32_t x191 = INT32_MIN;
	static uint16_t x192 = UINT16_MAX;
	static int64_t t47 = 459414750865294082LL;

    t47 = (x189|((x190/x191)|x192));

    if (t47 != -9223372036854513665LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 2U;
	static int32_t x195 = -1;
	uint64_t x196 = 134217565LLU;
	static volatile uint64_t t48 = 465385506902686820LLU;

    t48 = (x193|((x194/x195)|x196));

    if (t48 != 134217567LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	uint16_t x198 = UINT16_MAX;
	uint64_t x200 = 135LLU;
	volatile uint64_t t49 = 8469291481LLU;

    t49 = (x197|((x198/x199)|x200));

    if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	uint64_t x203 = UINT64_MAX;
	uint16_t x204 = 35U;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x201|((x202/x203)|x204));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int32_t x207 = INT32_MIN;
	static int64_t x208 = INT64_MAX;
	uint64_t t51 = UINT64_MAX;

    t51 = (x205|((x206/x207)|x208));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	uint64_t x210 = UINT64_MAX;
	static volatile uint8_t x211 = 6U;
	int64_t x212 = INT64_MAX;
	volatile uint64_t t52 = 33301950909LLU;

    t52 = (x209|((x210/x211)|x212));

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = 3;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -3;

    t53 = (x213|((x214/x215)|x216));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MIN;
	uint64_t x220 = 2126143847657148069LLU;
	uint64_t t54 = 14784870LLU;

    t54 = (x217|((x218/x219)|x220));

    if (t54 != 18446744073709538991LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 0;
	volatile int64_t x222 = -1LL;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	int64_t t55 = 1168292944LL;

    t55 = (x221|((x222/x223)|x224));

    if (t55 != 2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 3U;
	volatile uint8_t x226 = UINT8_MAX;
	int16_t x227 = INT16_MIN;
	static int64_t t56 = 553782315796855LL;

    t56 = (x225|((x226/x227)|x228));

    if (t56 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 2LL;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = 9U;
	int64_t t57 = 22179984LL;

    t57 = (x229|((x230/x231)|x232));

    if (t57 != 11LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	static volatile int32_t t58 = -6;

    t58 = (x233|((x234/x235)|x236));

    if (t58 != -2147418113) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -1LL;
	volatile int8_t x239 = -6;
	uint16_t x240 = UINT16_MAX;

    t59 = (x237|((x238/x239)|x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = 7710922564111643LL;
	int16_t x243 = INT16_MAX;
	volatile int64_t x244 = -1LL;
	int64_t t60 = -2513076632282LL;

    t60 = (x241|((x242/x243)|x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t61 = 6651;

    t61 = (x245|((x246/x247)|x248));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 43U;
	int64_t x251 = -1LL;
	static int8_t x252 = -1;
	volatile int64_t t62 = -14235797561985227LL;

    t62 = (x249|((x250/x251)|x252));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = 7LLU;
	uint8_t x254 = 37U;
	volatile int32_t x255 = INT32_MAX;
	int16_t x256 = -5;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (x253|((x254/x255)|x256));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 9U;
	uint16_t x258 = UINT16_MAX;
	static int64_t x259 = INT64_MIN;
	int64_t x260 = 152761LL;
	int64_t t64 = -280582273LL;

    t64 = (x257|((x258/x259)|x260));

    if (t64 != 152761LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x262 = 84U;
	int64_t t65 = 140796LL;

    t65 = (x261|((x262/x263)|x264));

    if (t65 != -32613LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = 886;
	volatile int64_t x266 = INT64_MAX;
	static int8_t x267 = INT8_MIN;
	uint8_t x268 = 32U;
	int64_t t66 = 194LL;

    t66 = (x265|((x266/x267)|x268));

    if (t66 != -72057594037927049LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = -1LL;
	static volatile uint8_t x272 = UINT8_MAX;

    t67 = (x269|((x270/x271)|x272));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 1323;
	int32_t x274 = INT32_MIN;
	static uint16_t x276 = 5040U;
	static int32_t t68 = -327304;

    t68 = (x273|((x274/x275)|x276));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 24U;
	int8_t x278 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	volatile int64_t t69 = 18138862009852162LL;

    t69 = (x277|((x278/x279)|x280));

    if (t69 != -104LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 1705U;
	static int32_t x282 = -307951;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 25U;
	static volatile uint32_t t70 = 146094U;

    t70 = (x281|((x282/x283)|x284));

    if (t70 != 1721U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -9;
	int32_t x287 = -18129;
	uint64_t x288 = 351LLU;
	uint64_t t71 = 13633840LLU;

    t71 = (x285|((x286/x287)|x288));

    if (t71 != 18446744073694762847LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = 860924446LL;
	int8_t x290 = INT8_MIN;
	int64_t x291 = 200000796151605LL;
	uint16_t x292 = UINT16_MAX;
	static int64_t t72 = -1667LL;

    t72 = (x289|((x290/x291)|x292));

    if (t72 != 860946431LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	volatile int16_t x295 = 2166;
	uint64_t t73 = UINT64_MAX;

    t73 = (x293|((x294/x295)|x296));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 102U;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = 362;
	int32_t x300 = INT32_MIN;
	uint32_t t74 = 338U;

    t74 = (x297|((x298/x299)|x300));

    if (t74 != 2159348198U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	int16_t x302 = 12286;
	volatile uint64_t x303 = 175692LLU;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x301|((x302/x303)|x304));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x306 = UINT8_MAX;
	int32_t x307 = 393353994;
	int8_t x308 = -1;
	volatile int32_t t76 = 37350;

    t76 = (x305|((x306/x307)|x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MIN;
	int64_t x311 = 22011124LL;
	int64_t t77 = -851018606945098909LL;

    t77 = (x309|((x310/x311)|x312));

    if (t77 != -32LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 4U;
	uint64_t x314 = UINT64_MAX;
	volatile int64_t x315 = 440890700LL;
	int16_t x316 = 16;
	static volatile uint64_t t78 = 84018191154LLU;

    t78 = (x313|((x314/x315)|x316));

    if (t78 != 41839721460LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	static uint64_t x318 = 10928073251LLU;
	int32_t x319 = 97754151;
	int32_t x320 = INT32_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (x317|((x318/x319)|x320));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 2U;
	volatile int32_t x322 = INT32_MIN;
	static volatile int16_t x323 = INT16_MAX;
	int64_t x324 = -8521707129LL;
	volatile int64_t t80 = -14302LL;

    t80 = (x321|((x322/x323)|x324));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = -1;
	volatile int16_t x326 = 1;
	int64_t x327 = -1LL;
	uint8_t x328 = 3U;
	volatile int64_t t81 = 34793LL;

    t81 = (x325|((x326/x327)|x328));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 86U;
	int64_t x331 = 2277242711088144735LL;
	int8_t x332 = 45;

    t82 = (x329|((x330/x331)|x332));

    if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -30;
	uint32_t x335 = 739084979U;
	uint8_t x336 = UINT8_MAX;

    t83 = (x333|((x334/x335)|x336));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x338 = 7U;
	int16_t x340 = -1;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = (x337|((x338/x339)|x340));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MIN;
	uint64_t x343 = 1468683932LLU;
	int32_t x344 = -1;

    t85 = (x341|((x342/x343)|x344));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 5LLU;
	uint64_t t86 = 4528647LLU;

    t86 = (x345|((x346/x347)|x348));

    if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x350 = 4;
	volatile uint64_t x351 = 6938886776776LLU;
	uint64_t t87 = UINT64_MAX;

    t87 = (x349|((x350/x351)|x352));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 6U;
	int64_t x354 = 1818275366734304LL;
	uint32_t x355 = UINT32_MAX;
	uint16_t x356 = UINT16_MAX;
	int64_t t88 = 3LL;

    t88 = (x353|((x354/x355)|x356));

    if (t88 != 458751LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	static int32_t x359 = -23502;
	uint16_t x360 = 5U;

    t89 = (x357|((x358/x359)|x360));

    if (t89 != -2147392273) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x361 = INT16_MAX;
	int8_t x364 = -1;
	volatile int32_t t90 = 13644;

    t90 = (x361|((x362/x363)|x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = -1;
	static int8_t x367 = -1;
	volatile int64_t t91 = -1659352218LL;

    t91 = (x365|((x366/x367)|x368));

    if (t91 != 3137996440137826303LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 1;
	volatile int32_t x370 = 1;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = 857LLU;

    t92 = (x369|((x370/x371)|x372));

    if (t92 != 857LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 25227LLU;
	int8_t x374 = -11;
	uint32_t x375 = 100U;

    t93 = (x373|((x374/x375)|x376));

    if (t93 != 4294967295LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	static int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	static int64_t x380 = INT64_MAX;

    t94 = (x377|((x378/x379)|x380));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	static int32_t x382 = -1;
	int8_t x383 = INT8_MIN;
	volatile int32_t t95 = -1601;

    t95 = (x381|((x382/x383)|x384));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x385 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 29U;
	uint32_t t96 = UINT32_MAX;

    t96 = (x385|((x386/x387)|x388));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint8_t x390 = 19U;
	volatile int32_t t97 = -3472;

    t97 = (x389|((x390/x391)|x392));

    if (t97 != -19) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x395 = INT8_MAX;
	int64_t t98 = 54703LL;

    t98 = (x393|((x394/x395)|x396));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 3596672LL;
	int8_t x398 = 23;
	int64_t x399 = INT64_MAX;
	static int32_t x400 = 376453;

    t99 = (x397|((x398/x399)|x400));

    if (t99 != 3669893LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MAX;
	uint8_t x402 = UINT8_MAX;
	volatile uint32_t x403 = 278U;
	volatile uint64_t t100 = UINT64_MAX;

    t100 = (x401|((x402/x403)|x404));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = 14;
	static int32_t x406 = INT32_MAX;
	volatile int32_t x407 = INT32_MAX;
	int64_t x408 = -84184677LL;
	static int64_t t101 = 475921666492082LL;

    t101 = (x405|((x406/x407)|x408));

    if (t101 != -84184673LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = -1;
	volatile int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	int32_t t102 = 124637;

    t102 = (x409|((x410/x411)|x412));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	uint8_t x414 = 7U;
	volatile uint64_t x415 = 118768015121086LLU;
	static int8_t x416 = 0;
	uint64_t t103 = UINT64_MAX;

    t103 = (x413|((x414/x415)|x416));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	uint8_t x418 = 0U;
	int64_t x419 = -438760821107241877LL;
	int16_t x420 = 70;
	int64_t t104 = 48089442416LL;

    t104 = (x417|((x418/x419)|x420));

    if (t104 != -58LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -219402170259LL;
	int16_t x422 = -208;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	int64_t t105 = -63410LL;

    t105 = (x421|((x422/x423)|x424));

    if (t105 != -3LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x429 = 3840260U;
	int64_t x430 = INT64_MIN;
	int32_t x432 = INT32_MAX;

    t106 = (x429|((x430/x431)|x432));

    if (t106 != -281483566645249LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x433 = 2U;
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 6U;
	uint64_t x436 = 64154LLU;
	volatile uint64_t t107 = 6744168047789144LLU;

    t107 = (x433|((x434/x435)|x436));

    if (t107 != 18446744073709550267LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = 6;
	volatile uint32_t t108 = UINT32_MAX;

    t108 = (x437|((x438/x439)|x440));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = -1LL;
	int8_t x443 = 1;
	uint32_t x444 = 1U;

    t109 = (x441|((x442/x443)|x444));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x445 = UINT16_MAX;
	uint16_t x446 = UINT16_MAX;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t110 = 1;

    t110 = (x445|((x446/x447)|x448));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x452 = -1;
	int32_t t111 = -55314;

    t111 = (x449|((x450/x451)|x452));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x453 = UINT16_MAX;
	static int64_t x454 = INT64_MIN;
	volatile int64_t x456 = -26521008408039119LL;
	int64_t t112 = 1077459281793348259LL;

    t112 = (x453|((x454/x455)|x456));

    if (t112 != -26521008406200321LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x457 = UINT8_MAX;
	int32_t x458 = -1;
	uint8_t x459 = 7U;

    t113 = (x457|((x458/x459)|x460));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = -1;
	int64_t x462 = -1LL;
	static int64_t x463 = -1LL;
	int64_t x464 = INT64_MAX;
	int64_t t114 = -29503830LL;

    t114 = (x461|((x462/x463)|x464));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x465 = 2637U;
	volatile uint64_t x467 = UINT64_MAX;
	static uint64_t t115 = UINT64_MAX;

    t115 = (x465|((x466/x467)|x468));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x469 = INT16_MAX;
	static volatile int16_t x470 = -1;
	int8_t x472 = INT8_MAX;
	uint32_t t116 = 6454U;

    t116 = (x469|((x470/x471)|x472));

    if (t116 != 32767U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MIN;
	uint64_t x475 = 990889LLU;
	int64_t x476 = -1LL;

    t117 = (x473|((x474/x475)|x476));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x478 = UINT64_MAX;
	uint32_t x480 = 68391U;
	static volatile uint64_t t118 = UINT64_MAX;

    t118 = (x477|((x478/x479)|x480));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	static uint64_t x482 = UINT64_MAX;
	static uint8_t x483 = UINT8_MAX;
	int64_t x484 = -5LL;
	uint64_t t119 = UINT64_MAX;

    t119 = (x481|((x482/x483)|x484));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x485 = -1;
	static uint8_t x486 = 43U;
	uint16_t x487 = 133U;

    t120 = (x485|((x486/x487)|x488));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x489 = 25374617934LLU;
	int8_t x490 = 0;
	int16_t x491 = -81;
	int32_t x492 = INT32_MAX;
	volatile uint64_t t121 = 16779986360510LLU;

    t121 = (x489|((x490/x491)|x492));

    if (t121 != 25769803775LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x493 = -1LL;
	static volatile int32_t x494 = INT32_MAX;
	uint8_t x496 = 35U;
	volatile int64_t t122 = 3639906LL;

    t122 = (x493|((x494/x495)|x496));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MIN;
	volatile int64_t t123 = -398LL;

    t123 = (x497|((x498/x499)|x500));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x501 = 10;
	int32_t x502 = INT32_MAX;
	static uint16_t x503 = 1U;
	uint32_t x504 = 984U;
	uint32_t t124 = 605053U;

    t124 = (x501|((x502/x503)|x504));

    if (t124 != 2147483647U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = -3089;
	volatile int16_t x507 = INT16_MIN;
	int16_t x508 = -23;

    t125 = (x505|((x506/x507)|x508));

    if (t125 != -23) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MIN;
	int64_t x512 = INT64_MIN;
	uint64_t t126 = 1108189093357364LLU;

    t126 = (x509|((x510/x511)|x512));

    if (t126 != 18446744073709537442LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x514 = INT16_MAX;
	uint64_t x515 = 188LLU;
	volatile uint64_t t127 = 4314595LLU;

    t127 = (x513|((x514/x515)|x516));

    if (t127 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x517 = 57819874LL;
	uint32_t x518 = 242U;
	static volatile uint16_t x519 = UINT16_MAX;
	uint8_t x520 = 0U;
	volatile int64_t t128 = -146573638019357216LL;

    t128 = (x517|((x518/x519)|x520));

    if (t128 != 57819874LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x522 = INT16_MIN;
	volatile uint16_t x524 = 631U;
	int32_t t129 = -424;

    t129 = (x521|((x522/x523)|x524));

    if (t129 != -2177) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x525 = 4124U;
	static volatile int16_t x526 = INT16_MIN;
	static int8_t x528 = -1;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = (x525|((x526/x527)|x528));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x529 = UINT16_MAX;
	static int16_t x530 = -10971;
	uint16_t x531 = 5U;
	uint16_t x532 = UINT16_MAX;

    t131 = (x529|((x530/x531)|x532));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x533 = 29349030078LL;
	int16_t x534 = INT16_MIN;
	uint64_t x535 = 7623388668LLU;
	volatile uint64_t t132 = 3157103807547486308LLU;

    t132 = (x533|((x534/x535)|x536));

    if (t132 != 29351652798LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MAX;
	uint64_t x539 = UINT64_MAX;
	static uint64_t t133 = UINT64_MAX;

    t133 = (x537|((x538/x539)|x540));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x541 = -1LL;
	uint64_t x542 = UINT64_MAX;
	uint16_t x543 = 1356U;
	volatile int64_t x544 = 7799001250LL;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x541|((x542/x543)|x544));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = -1;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (x545|((x546/x547)|x548));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x549 = -1;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = INT16_MIN;

    t136 = (x549|((x550/x551)|x552));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x553 = -51;
	uint64_t x554 = 888824370654477LLU;
	int64_t x555 = 4160285LL;
	int8_t x556 = INT8_MIN;

    t137 = (x553|((x554/x555)|x556));

    if (t137 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x557 = 3925603182LL;
	static uint64_t x558 = 2781323589LLU;
	volatile uint16_t x559 = 6196U;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (x557|((x558/x559)|x560));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x561 = UINT16_MAX;
	int32_t x562 = INT32_MIN;
	uint8_t x564 = 3U;
	int32_t t139 = -133;

    t139 = (x561|((x562/x563)|x564));

    if (t139 != -8388609) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x565 = -1;
	static volatile int32_t x566 = -1;
	int16_t x567 = -46;

    t140 = (x565|((x566/x567)|x568));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x570 = INT16_MAX;
	int16_t x571 = -1;
	static int64_t x572 = -1LL;
	int64_t t141 = -1579777912400258229LL;

    t141 = (x569|((x570/x571)|x572));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x573 = INT16_MIN;
	int32_t x575 = INT32_MAX;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t142 = -30;

    t142 = (x573|((x574/x575)|x576));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x582 = 36;
	int32_t x583 = INT32_MIN;
	static int32_t x584 = -1556663;
	int32_t t143 = -1423;

    t143 = (x581|((x582/x583)|x584));

    if (t143 != -3) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x585 = INT16_MIN;
	int32_t x586 = INT32_MIN;
	static uint8_t x587 = UINT8_MAX;
	uint8_t x588 = 1U;
	volatile int32_t t144 = 237;

    t144 = (x585|((x586/x587)|x588));

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x589 = INT32_MIN;
	int8_t x590 = 0;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = UINT32_MAX;

    t145 = (x589|((x590/x591)|x592));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x593 = 258;
	int64_t x594 = INT64_MIN;
	uint8_t x595 = 1U;
	int8_t x596 = INT8_MIN;
	int64_t t146 = 2520004LL;

    t146 = (x593|((x594/x595)|x596));

    if (t146 != -126LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x597 = 812411481LL;
	int64_t x598 = INT64_MIN;
	int64_t t147 = -5933494756458236LL;

    t147 = (x597|((x598/x599)|x600));

    if (t147 != -39LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x601 = INT64_MIN;
	uint8_t x602 = 6U;
	uint64_t x604 = 284866697061LLU;
	volatile uint64_t t148 = 817689LLU;

    t148 = (x601|((x602/x603)|x604));

    if (t148 != 9223372321721472869LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x606 = -2115865887886LL;
	volatile int64_t x607 = INT64_MAX;
	int16_t x608 = 0;
	uint64_t t149 = 496470535839484LLU;

    t149 = (x605|((x606/x607)|x608));

    if (t149 != 56LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x609 = INT32_MAX;
	int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t150 = 1;

    t150 = (x609|((x610/x611)|x612));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = -44;
	int64_t x614 = -3LL;
	uint8_t x615 = 31U;
	uint32_t x616 = 2944516U;

    t151 = (x613|((x614/x615)|x616));

    if (t151 != -44LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x618 = INT64_MIN;
	volatile int32_t x619 = INT32_MIN;
	static uint64_t x620 = 44134924660LLU;
	uint64_t t152 = UINT64_MAX;

    t152 = (x617|((x618/x619)|x620));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MIN;
	uint64_t x622 = UINT64_MAX;
	int64_t x623 = INT64_MIN;
	uint64_t t153 = 78479LLU;

    t153 = (x621|((x622/x623)|x624));

    if (t153 != 18446744071562069845LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x625 = 12U;
	uint16_t x626 = 8657U;
	int32_t t154 = -10;

    t154 = (x625|((x626/x627)|x628));

    if (t154 != -32756) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = INT8_MAX;
	int16_t x634 = INT16_MIN;
	volatile int8_t x635 = 13;
	static volatile int32_t t155 = 0;

    t155 = (x633|((x634/x635)|x636));

    if (t155 != -2433) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int8_t x638 = -1;
	int32_t x639 = -1;
	int64_t x640 = 1081945235060046LL;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (x637|((x638/x639)|x640));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x641 = INT8_MIN;
	volatile int8_t x642 = -1;
	int64_t x643 = INT64_MAX;
	uint64_t x644 = UINT64_MAX;
	uint64_t t157 = UINT64_MAX;

    t157 = (x641|((x642/x643)|x644));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x645 = 25;
	volatile uint16_t x646 = 31646U;
	int64_t x647 = 55660148281LL;
	int64_t x648 = 6LL;
	volatile int64_t t158 = 85560LL;

    t158 = (x645|((x646/x647)|x648));

    if (t158 != 31LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = -1;
	int32_t x652 = -1894276;
	static int32_t t159 = -217;

    t159 = (x649|((x650/x651)|x652));

    if (t159 != -4) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x653 = 75U;
	uint32_t x654 = 22U;
	uint8_t x656 = 2U;

    t160 = (x653|((x654/x655)|x656));

    if (t160 != 75U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x661 = UINT64_MAX;
	int64_t x662 = -29LL;
	int16_t x663 = 8385;
	uint64_t t161 = UINT64_MAX;

    t161 = (x661|((x662/x663)|x664));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x665 = INT32_MIN;
	uint8_t x666 = 11U;
	uint16_t x668 = UINT16_MAX;
	static volatile int64_t t162 = 11993079162LL;

    t162 = (x665|((x666/x667)|x668));

    if (t162 != -2147418113LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x670 = 1U;
	int16_t x671 = -23;
	int8_t x672 = 0;
	static volatile int32_t t163 = 1097;

    t163 = (x669|((x670/x671)|x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	volatile uint8_t x674 = 125U;
	int16_t x676 = INT16_MAX;
	volatile int32_t t164 = 20501530;

    t164 = (x673|((x674/x675)|x676));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MAX;
	static int16_t x679 = INT16_MIN;
	int32_t x680 = INT32_MIN;
	int32_t t165 = 0;

    t165 = (x677|((x678/x679)|x680));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = INT32_MAX;
	int32_t x682 = 7;
	int32_t x683 = INT32_MAX;
	static int64_t x684 = -11147189LL;
	int64_t t166 = 99996503334833833LL;

    t166 = (x681|((x682/x683)|x684));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = INT8_MIN;
	static volatile int64_t x686 = 0LL;
	static volatile int8_t x687 = 7;
	volatile int16_t x688 = -13590;
	volatile int64_t t167 = 1756736152078LL;

    t167 = (x685|((x686/x687)|x688));

    if (t167 != -22LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x689 = 11;
	uint8_t x690 = 9U;
	int64_t x691 = INT64_MIN;
	uint32_t x692 = 451U;
	static int64_t t168 = 15962288102LL;

    t168 = (x689|((x690/x691)|x692));

    if (t168 != 459LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x694 = 1821U;
	int64_t x695 = -1LL;
	int16_t x696 = INT16_MIN;
	int64_t t169 = -15LL;

    t169 = (x693|((x694/x695)|x696));

    if (t169 != -1809LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x697 = INT32_MIN;
	static uint16_t x699 = 4316U;
	static volatile uint64_t x700 = 1LLU;
	static uint64_t t170 = 1LLU;

    t170 = (x697|((x698/x699)|x700));

    if (t170 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = UINT8_MAX;
	volatile int32_t x703 = -1;
	int16_t x704 = 129;

    t171 = (x701|((x702/x703)|x704));

    if (t171 != -65281) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x705 = 1741805LLU;
	int8_t x706 = 0;
	volatile int16_t x707 = INT16_MAX;
	int64_t x708 = INT64_MAX;
	uint64_t t172 = 1LLU;

    t172 = (x705|((x706/x707)|x708));

    if (t172 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x709 = -53;
	int16_t x710 = INT16_MIN;
	volatile int8_t x712 = INT8_MIN;
	int32_t t173 = 2367;

    t173 = (x709|((x710/x711)|x712));

    if (t173 != -53) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x713 = INT64_MIN;
	int32_t x714 = 91;
	int64_t x715 = INT64_MAX;
	volatile int64_t t174 = -2459297374214350LL;

    t174 = (x713|((x714/x715)|x716));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x718 = 0U;
	int32_t x719 = INT32_MIN;
	static uint64_t x720 = 10LLU;
	volatile uint64_t t175 = 42498310515186932LLU;

    t175 = (x717|((x718/x719)|x720));

    if (t175 != 2527LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x721 = INT8_MAX;
	int64_t x722 = -3350LL;
	int32_t x723 = INT32_MIN;

    t176 = (x721|((x722/x723)|x724));

    if (t176 != 255LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x725 = 10;
	int16_t x726 = -1;
	int32_t x727 = INT32_MIN;
	static volatile uint32_t x728 = 1U;
	uint32_t t177 = 0U;

    t177 = (x725|((x726/x727)|x728));

    if (t177 != 11U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x730 = 60;
	uint8_t x731 = UINT8_MAX;
	uint64_t x732 = 0LLU;

    t178 = (x729|((x730/x731)|x732));

    if (t178 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x733 = -1;
	uint8_t x734 = 0U;
	static volatile uint16_t x735 = 21117U;
	volatile int64_t x736 = -1LL;

    t179 = (x733|((x734/x735)|x736));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = 6;
	uint8_t x739 = 50U;
	static uint32_t x740 = 190895U;
	volatile uint32_t t180 = 1512733069U;

    t180 = (x737|((x738/x739)|x740));

    if (t180 != 196607U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x742 = -1;
	volatile int16_t x743 = -1285;
	int64_t x744 = 139469521414290716LL;
	int64_t t181 = 3074739282478018866LL;

    t181 = (x741|((x742/x743)|x744));

    if (t181 != 139469521414290718LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = INT64_MIN;
	static uint16_t x750 = 22063U;
	static int32_t x751 = INT32_MAX;
	uint16_t x752 = 869U;
	int64_t t182 = -26142376190664650LL;

    t182 = (x749|((x750/x751)|x752));

    if (t182 != -9223372036854774939LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x753 = INT16_MIN;
	int64_t x755 = INT64_MAX;
	int32_t x756 = INT32_MIN;

    t183 = (x753|((x754/x755)|x756));

    if (t183 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x761 = -58;
	int16_t x762 = INT16_MAX;
	int8_t x763 = -1;
	static int32_t t184 = 890295457;

    t184 = (x761|((x762/x763)|x764));

    if (t184 != -17) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x766 = INT32_MIN;
	static int64_t x767 = INT64_MIN;
	volatile uint64_t t185 = 67421891542946796LLU;

    t185 = (x765|((x766/x767)|x768));

    if (t185 != 18446744073709544423LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x769 = INT16_MIN;
	int16_t x770 = -1;
	int16_t x771 = 10;
	uint64_t t186 = 2LLU;

    t186 = (x769|((x770/x771)|x772));

    if (t186 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x773 = 7U;
	int32_t x775 = INT32_MIN;
	int64_t x776 = 18248640398LL;

    t187 = (x773|((x774/x775)|x776));

    if (t187 != 18248640399LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = -1139;
	uint64_t x778 = 1089LLU;
	int32_t x779 = INT32_MIN;
	int8_t x780 = INT8_MIN;
	uint64_t t188 = 41901LLU;

    t188 = (x777|((x778/x779)|x780));

    if (t188 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x781 = 856U;
	static int8_t x783 = INT8_MIN;
	uint16_t x784 = 6237U;
	uint64_t t189 = 566138458LLU;

    t189 = (x781|((x782/x783)|x784));

    if (t189 != 7005LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x785 = INT16_MIN;
	static int16_t x787 = -1;
	int32_t x788 = -1;

    t190 = (x785|((x786/x787)|x788));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x790 = 41097607097236LLU;
	int16_t x791 = INT16_MIN;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = (x789|((x790/x791)|x792));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x793 = -1LL;
	int8_t x794 = -43;
	int64_t x795 = -1LL;
	uint64_t x796 = UINT64_MAX;
	uint64_t t192 = UINT64_MAX;

    t192 = (x793|((x794/x795)|x796));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x797 = 2011364805668200LL;
	static int32_t x799 = INT32_MIN;
	int8_t x800 = INT8_MIN;
	volatile int64_t t193 = 1LL;

    t193 = (x797|((x798/x799)|x800));

    if (t193 != -24LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = INT16_MAX;
	uint64_t x803 = 92104189539567LLU;
	static uint64_t t194 = 2633317211373LLU;

    t194 = (x801|((x802/x803)|x804));

    if (t194 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x809 = INT64_MAX;
	int8_t x810 = 27;
	static uint32_t x811 = UINT32_MAX;
	int32_t x812 = INT32_MIN;
	volatile int64_t t195 = INT64_MAX;

    t195 = (x809|((x810/x811)|x812));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x813 = INT64_MIN;
	static uint64_t x814 = 4994784727045438LLU;
	volatile int8_t x815 = -1;
	static uint8_t x816 = 3U;

    t196 = (x813|((x814/x815)|x816));

    if (t196 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = -1;
	int8_t x818 = 3;
	static int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MAX;
	volatile int32_t t197 = 430;

    t197 = (x817|((x818/x819)|x820));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x821 = INT64_MIN;
	int16_t x822 = INT16_MIN;
	uint64_t x823 = 922596LLU;
	volatile uint64_t t198 = 58LLU;

    t198 = (x821|((x822/x823)|x824));

    if (t198 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x825 = 3;
	volatile int8_t x826 = INT8_MIN;
	int8_t x827 = -1;
	int32_t x828 = INT32_MIN;

    t199 = (x825|((x826/x827)|x828));

    if (t199 != -2147483517) { NG(); } else { ; }
	
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

