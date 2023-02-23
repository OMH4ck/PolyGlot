
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

int8_t x10 = INT8_MAX;
int64_t x11 = -1LL;
int64_t t2 = 4LL;
static int64_t x19 = INT64_MAX;
volatile int64_t t4 = 38224603LL;
static int32_t x22 = INT32_MAX;
volatile uint32_t x25 = UINT32_MAX;
volatile int16_t x29 = INT16_MAX;
int16_t x31 = -1;
volatile int64_t x35 = INT64_MIN;
volatile int8_t x37 = INT8_MIN;
volatile int32_t x43 = -31216824;
uint32_t x48 = UINT32_MAX;
volatile int64_t t11 = -2680123352LL;
static volatile uint16_t x49 = UINT16_MAX;
int8_t x54 = INT8_MIN;
int64_t x58 = -1LL;
int64_t x63 = INT64_MIN;
static int16_t x68 = INT16_MIN;
uint32_t x70 = UINT32_MAX;
static volatile uint32_t x71 = UINT32_MAX;
volatile uint8_t x78 = 1U;
static int8_t x86 = INT8_MIN;
int64_t x88 = 4275118637973988LL;
volatile int64_t t21 = -328929281370181741LL;
int64_t x90 = -1LL;
volatile int8_t x91 = 38;
uint32_t x94 = 0U;
int32_t x96 = -1;
uint8_t x97 = 2U;
uint64_t x103 = UINT64_MAX;
int64_t t25 = INT64_MIN;
int32_t x108 = -1;
uint16_t x110 = 0U;
volatile uint8_t x112 = 17U;
volatile int64_t t28 = -798417601LL;
volatile int64_t x123 = INT64_MIN;
int64_t x124 = 4057999540094LL;
volatile int64_t t30 = 6480411318197LL;
volatile int32_t t31 = -348;
volatile int16_t x131 = INT16_MIN;
int64_t x134 = INT64_MIN;
uint8_t x136 = 113U;
uint64_t x138 = 235213010027291LLU;
static volatile uint64_t t34 = 781831LLU;
static volatile int16_t x145 = -10291;
int32_t t36 = 16540;
uint16_t x158 = UINT16_MAX;
int16_t x160 = INT16_MIN;
int32_t x163 = -1;
volatile int32_t t40 = -2180204;
volatile int16_t x171 = INT16_MIN;
volatile int16_t x172 = INT16_MIN;
uint8_t x173 = 109U;
static uint8_t x176 = 24U;
int16_t x192 = INT16_MAX;
volatile uint64_t t47 = 81652464818942007LLU;
int16_t x196 = 288;
int8_t x206 = INT8_MIN;
int8_t x207 = -1;
static uint16_t x220 = UINT16_MAX;
uint16_t x228 = UINT16_MAX;
static int8_t x229 = INT8_MIN;
int32_t x233 = INT32_MAX;
int32_t x234 = -1;
int8_t x237 = INT8_MIN;
static int64_t x260 = 116357497LL;
int16_t x266 = INT16_MIN;
volatile int32_t x267 = -1;
uint32_t x271 = 5861206U;
int16_t x273 = -44;
static int8_t x281 = 6;
uint16_t x282 = 12602U;
int64_t x283 = -1LL;
volatile int64_t x284 = INT64_MIN;
volatile int64_t t70 = 1312939584280090661LL;
int64_t x287 = -379623LL;
volatile int32_t t71 = 5;
uint64_t x289 = 119306925205857LLU;
int16_t x298 = -1;
int64_t x299 = 172443LL;
static int64_t t74 = 4182863013386590963LL;
int64_t x306 = -1LL;
int32_t x307 = -323088905;
int32_t x314 = 12;
int64_t x316 = -14852464325874LL;
static uint8_t x318 = UINT8_MAX;
volatile uint32_t x327 = 594966377U;
volatile int64_t t81 = 1069846860342LL;
int64_t x329 = -1LL;
int64_t t82 = 332283046LL;
volatile int8_t x334 = -1;
int64_t x341 = INT64_MAX;
int32_t x343 = INT32_MAX;
static int32_t x344 = INT32_MIN;
volatile int8_t x346 = 14;
volatile int32_t x352 = INT32_MAX;
int32_t x354 = 0;
static int16_t x358 = -1;
uint8_t x362 = 26U;
volatile uint64_t x364 = 69662463265734LLU;
static uint32_t x373 = UINT32_MAX;
uint32_t t93 = 202626099U;
volatile int64_t x377 = 5727114567251LL;
volatile int64_t t95 = -95634608232481293LL;
int8_t x388 = -25;
int64_t x391 = INT64_MIN;
int64_t x394 = INT64_MIN;
int32_t x401 = INT32_MIN;
uint64_t x409 = UINT64_MAX;
int64_t x411 = -1LL;
uint32_t x413 = 563658366U;
int8_t x421 = INT8_MIN;
static uint8_t x422 = 41U;
int32_t x432 = -1;
uint8_t x434 = UINT8_MAX;
int8_t x440 = -1;
volatile int8_t x441 = INT8_MAX;
static int16_t x447 = 0;
static int32_t x450 = -386628733;
uint16_t x459 = 150U;
uint16_t x464 = UINT16_MAX;
uint16_t x466 = UINT16_MAX;
volatile int64_t t116 = 212422069430566LL;
int32_t x470 = INT32_MAX;
int16_t x476 = 3;
volatile int64_t x477 = INT64_MAX;
volatile uint32_t x478 = 140019U;
static int8_t x479 = INT8_MAX;
static int32_t x483 = -6;
int16_t x484 = INT16_MIN;
int64_t x490 = 1180LL;
int16_t x491 = 229;
uint32_t x495 = 224222U;
static volatile int16_t x502 = -1;
volatile uint64_t x503 = UINT64_MAX;
int16_t x504 = -73;
static int64_t t126 = 1699LL;
uint64_t x509 = 9LLU;
volatile uint64_t t127 = 0LLU;
int32_t x513 = -1;
int16_t x514 = -6542;
int64_t x522 = INT64_MIN;
int32_t x524 = -1;
uint32_t x525 = 1085525578U;
int64_t t131 = -209098967433116LL;
int64_t x530 = INT64_MAX;
static uint32_t x532 = 258607128U;
volatile uint32_t x538 = 77U;
uint64_t x542 = 964040947693907LLU;
static int32_t t135 = 66199169;
int32_t x545 = INT32_MIN;
uint8_t x549 = 15U;
uint16_t x552 = 102U;
uint16_t x555 = 24U;
int8_t x557 = 0;
uint16_t x566 = 5908U;
uint64_t x572 = 84508283847LLU;
static uint64_t x582 = UINT64_MAX;
static int64_t x586 = -1LL;
volatile int32_t t146 = 820190473;
volatile int32_t t147 = -5870;
int32_t x595 = INT32_MAX;
static volatile int64_t t148 = -12414495LL;
static uint64_t x607 = 318LLU;
int8_t x608 = INT8_MIN;
int64_t x609 = -1LL;
uint8_t x617 = 5U;
volatile int8_t x619 = INT8_MIN;
int64_t t154 = -16200LL;
int32_t x623 = -971161;
volatile int64_t x646 = -6283437LL;
uint16_t x661 = 375U;
static uint32_t x662 = UINT32_MAX;
static int16_t x672 = -140;
int64_t x682 = INT64_MAX;
uint16_t x684 = 4U;
int16_t x687 = -764;
volatile int16_t x688 = INT16_MIN;
int64_t x690 = INT64_MIN;
static volatile int16_t x691 = -478;
volatile uint16_t x694 = 95U;
int32_t x700 = INT32_MAX;
int32_t t175 = 5514;
uint8_t x706 = 0U;
static int16_t x712 = -1;
int16_t x717 = INT16_MAX;
volatile int32_t x724 = INT32_MIN;
int64_t x725 = INT64_MIN;
uint32_t x728 = 1531986790U;
int16_t x732 = INT16_MIN;
int64_t x736 = -1LL;
int32_t x738 = INT32_MAX;
int32_t t184 = -1565356;
uint8_t x742 = 101U;
static int32_t x751 = -100327236;
int8_t x753 = -1;
int32_t x760 = INT32_MIN;
int8_t x769 = -1;
volatile uint32_t x771 = 453U;
volatile uint8_t x775 = UINT8_MAX;
uint32_t x776 = UINT32_MAX;
static volatile int64_t t197 = 301793301993LL;
volatile uint8_t x795 = 1U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static uint32_t x2 = UINT32_MAX;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -821426;

    t0 = (x1^((x2==x3)|x4));

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -341;
	volatile int32_t x6 = 46870;
	uint64_t x7 = 626LLU;
	int64_t x8 = 38997162668056LL;
	volatile int64_t t1 = 1283815LL;

    t1 = (x5^((x6==x7)|x8));

    if (t1 != -38997162668365LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	int64_t x12 = -1LL;

    t2 = (x9^((x10==x11)|x12));

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -10515724484689372LL;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	static int8_t x16 = INT8_MAX;
	int64_t t3 = -162654367702LL;

    t3 = (x13^((x14==x15)|x16));

    if (t3 != -10515724484689317LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	volatile int64_t x18 = 1848302508LL;
	static int64_t x20 = INT64_MIN;

    t4 = (x17^((x18==x19)|x20));

    if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -110021457;
	int16_t x23 = 8;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = -11008344619LL;

    t5 = (x21^((x22==x23)|x24));

    if (t5 != 9223372036744754351LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x26 = 1481651816846746753LLU;
	static uint32_t x27 = 0U;
	int32_t x28 = 77835465;
	uint32_t t6 = 8630703U;

    t6 = (x25^((x26==x27)|x28));

    if (t6 != 4217131830U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x30 = -1LL;
	static int8_t x32 = INT8_MIN;
	static int32_t t7 = 11950;

    t7 = (x29^((x30==x31)|x32));

    if (t7 != -32642) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 2956583350LLU;
	uint64_t x34 = 2024689LLU;
	int16_t x36 = -1;
	static uint64_t t8 = 100598596885884LLU;

    t8 = (x33^((x34==x35)|x36));

    if (t8 != 18446744070752968265LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = 0;
	uint8_t x39 = 99U;
	int32_t x40 = -10;
	volatile int32_t t9 = -490772;

    t9 = (x37^((x38==x39)|x40));

    if (t9 != 118) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 100U;
	uint64_t x42 = UINT64_MAX;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 1;

    t10 = (x41^((x42==x43)|x44));

    if (t10 != -28) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MAX;

    t11 = (x45^((x46==x47)|x48));

    if (t11 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -1LL;
	int32_t x51 = INT32_MAX;
	static uint32_t x52 = UINT32_MAX;
	uint32_t t12 = 4342U;

    t12 = (x49^((x50==x51)|x52));

    if (t12 != 4294901760U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	static uint64_t x55 = UINT64_MAX;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 2611027;

    t13 = (x53^((x54==x55)|x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x59 = -1;
	int64_t x60 = -125LL;
	int64_t t14 = -3123356709LL;

    t14 = (x57^((x58==x59)|x60));

    if (t14 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 584445U;
	int32_t x62 = INT32_MIN;
	static volatile int64_t x64 = -175896768751717LL;
	volatile int64_t t15 = -1LL;

    t15 = (x61^((x62==x63)|x64));

    if (t15 != -175896768266906LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 212984656U;
	static int32_t x66 = -2;
	int32_t x67 = INT32_MIN;
	uint32_t t16 = 13135U;

    t16 = (x65^((x66==x67)|x68));

    if (t16 != 4082000720U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -65323216LL;
	volatile uint32_t x72 = UINT32_MAX;
	int64_t t17 = -57987631LL;

    t17 = (x69^((x70==x71)|x72));

    if (t17 != -4229644081LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = 162;
	uint8_t x74 = 0U;
	volatile int8_t x75 = -1;
	int64_t x76 = -1LL;
	int64_t t18 = -17216132257970LL;

    t18 = (x73^((x74==x75)|x76));

    if (t18 != -163LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -4;

    t19 = (x77^((x78==x79)|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x81 = UINT8_MAX;
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = -13;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -347654581LL;

    t20 = (x81^((x82==x83)|x84));

    if (t20 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	int16_t x87 = 1;

    t21 = (x85^((x86==x87)|x88));

    if (t21 != -4275118638005788LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	volatile int32_t x92 = 3;
	int64_t t22 = 3217317120650207LL;

    t22 = (x89^((x90==x91)|x92));

    if (t22 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	int64_t x95 = INT64_MIN;
	static volatile int64_t t23 = -435332900689798LL;

    t23 = (x93^((x94==x95)|x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = 11;
	volatile int32_t t24 = -2;

    t24 = (x97^((x98==x99)|x100));

    if (t24 != 9) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int16_t x102 = 7871;
	int64_t x104 = INT64_MAX;

    t25 = (x101^((x102==x103)|x104));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	int32_t x106 = -1;
	int32_t x107 = INT32_MAX;
	static volatile int64_t t26 = INT64_MAX;

    t26 = (x105^((x106==x107)|x108));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	static uint16_t x111 = UINT16_MAX;
	volatile int32_t t27 = 198;

    t27 = (x109^((x110==x111)|x112));

    if (t27 != -32751) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MIN;
	volatile int64_t x116 = INT64_MIN;

    t28 = (x113^((x114==x115)|x116));

    if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = -1;
	int16_t x118 = 1;
	int64_t x119 = 7403673280LL;
	static int16_t x120 = INT16_MIN;
	static int32_t t29 = -14126;

    t29 = (x117^((x118==x119)|x120));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int32_t x122 = INT32_MIN;

    t30 = (x121^((x122==x123)|x124));

    if (t30 != -4057999540095LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MIN;
	uint32_t x127 = 775U;
	volatile int16_t x128 = INT16_MIN;

    t31 = (x125^((x126==x127)|x128));

    if (t31 != -32513) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static volatile int16_t x130 = 1261;
	int32_t x132 = INT32_MAX;
	int32_t t32 = -6175519;

    t32 = (x129^((x130==x131)|x132));

    if (t32 != 2147483520) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = 57;
	int16_t x135 = INT16_MAX;
	int32_t t33 = 21;

    t33 = (x133^((x134==x135)|x136));

    if (t33 != 72) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = -1LL;
	int64_t x139 = 3LL;
	static uint64_t x140 = UINT64_MAX;

    t34 = (x137^((x138==x139)|x140));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 246246163015696230LL;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 2LLU;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t35 = -230LL;

    t35 = (x141^((x142==x143)|x144));

    if (t35 != -246246164027244698LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	int32_t x147 = 14;
	int32_t x148 = INT32_MIN;

    t36 = (x145^((x146==x147)|x148));

    if (t36 != 2147473357) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x149 = UINT16_MAX;
	static volatile uint16_t x150 = 458U;
	int16_t x151 = 1828;
	int64_t x152 = -1LL;
	int64_t t37 = -152205025LL;

    t37 = (x149^((x150==x151)|x152));

    if (t37 != -65536LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	volatile uint16_t x154 = 1425U;
	int64_t x155 = -5082176608334LL;
	int64_t x156 = INT64_MAX;
	static int64_t t38 = 86772573895LL;

    t38 = (x153^((x154==x155)|x156));

    if (t38 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	uint8_t x159 = 2U;
	int32_t t39 = -100998982;

    t39 = (x157^((x158==x159)|x160));

    if (t39 != 32640) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int16_t x162 = 7624;
	static volatile int32_t x164 = INT32_MIN;

    t40 = (x161^((x162==x163)|x164));

    if (t40 != 2147450880) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile uint64_t x168 = UINT64_MAX;
	volatile uint64_t t41 = 104865907LLU;

    t41 = (x165^((x166==x167)|x168));

    if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = 3804256955375675981LL;
	int64_t x170 = INT64_MIN;
	static volatile int64_t t42 = -18622LL;

    t42 = (x169^((x170==x171)|x172));

    if (t42 != -3804256955375654323LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 3U;
	static volatile int64_t x175 = -1LL;
	volatile int32_t t43 = 72475;

    t43 = (x173^((x174==x175)|x176));

    if (t43 != 117) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	volatile int32_t x178 = INT32_MIN;
	int8_t x179 = -1;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 20322;

    t44 = (x177^((x178==x179)|x180));

    if (t44 != -65536) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	static int64_t x182 = -19391161038355105LL;
	int8_t x183 = INT8_MIN;
	int32_t x184 = 43;
	static int32_t t45 = -17;

    t45 = (x181^((x182==x183)|x184));

    if (t45 != -44) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MAX;
	static uint8_t x187 = 10U;
	uint8_t x188 = 10U;
	int32_t t46 = 3551;

    t46 = (x185^((x186==x187)|x188));

    if (t46 != -118) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = 3375159LLU;
	uint64_t x190 = 116LLU;
	int8_t x191 = INT8_MIN;

    t47 = (x189^((x190==x191)|x192));

    if (t47 != 3407816LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 544U;
	int32_t x194 = 789980107;
	int32_t x195 = 193940527;
	static int32_t t48 = -64;

    t48 = (x193^((x194==x195)|x196));

    if (t48 != 768) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 290U;
	static int16_t x198 = 3477;
	int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t49 = 3423133412LL;

    t49 = (x197^((x198==x199)|x200));

    if (t49 != -9223372036854775518LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 207U;
	uint32_t x202 = 610U;
	uint8_t x203 = 0U;
	static int64_t x204 = INT64_MIN;
	int64_t t50 = -2120095652993886306LL;

    t50 = (x201^((x202==x203)|x204));

    if (t50 != -9223372036854775601LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = 904422728LL;
	volatile int16_t x208 = INT16_MAX;
	volatile int64_t t51 = 1902245395818LL;

    t51 = (x205^((x206==x207)|x208));

    if (t51 != 904403639LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int16_t x210 = 5264;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = 138172228;
	volatile uint64_t t52 = 58LLU;

    t52 = (x209^((x210==x211)|x212));

    if (t52 != 18446744073571379387LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 40;
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 6LLU;
	uint64_t t53 = 33849214LLU;

    t53 = (x213^((x214==x215)|x216));

    if (t53 != 46LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	static int64_t x218 = -77450288908LL;
	int16_t x219 = 30;
	int32_t t54 = -1786;

    t54 = (x217^((x218==x219)|x220));

    if (t54 != -65409) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	static int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = 190902572526655599LL;

    t55 = (x221^((x222==x223)|x224));

    if (t55 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int64_t x226 = -653948057484825935LL;
	static volatile int64_t x227 = INT64_MIN;
	int32_t t56 = 22201101;

    t56 = (x225^((x226==x227)|x228));

    if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x230 = INT16_MIN;
	uint64_t x231 = 12964252974004LLU;
	uint16_t x232 = 29U;
	int32_t t57 = -1;

    t57 = (x229^((x230==x231)|x232));

    if (t57 != -99) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x235 = INT8_MAX;
	int16_t x236 = -1;
	static volatile int32_t t58 = INT32_MIN;

    t58 = (x233^((x234==x235)|x236));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -87257914390181541LL;
	int64_t t59 = -24139405LL;

    t59 = (x237^((x238==x239)|x240));

    if (t59 != 87257914390181595LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MAX;
	int8_t x243 = 63;
	static int8_t x244 = 1;
	static volatile int32_t t60 = -47;

    t60 = (x241^((x242==x243)|x244));

    if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = 737852;
	uint16_t x246 = 1U;
	uint32_t x247 = 8U;
	static volatile uint64_t x248 = UINT64_MAX;
	uint64_t t61 = 5608010LLU;

    t61 = (x245^((x246==x247)|x248));

    if (t61 != 18446744073708813763LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	static volatile uint8_t x250 = 0U;
	int32_t x251 = -1;
	static volatile uint32_t x252 = 52936U;
	volatile int64_t t62 = -31647729891241174LL;

    t62 = (x249^((x250==x251)|x252));

    if (t62 != -52937LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	int32_t x254 = -411;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t63 = 11023366315LLU;

    t63 = (x253^((x254==x255)|x256));

    if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = -1;
	static volatile int8_t x259 = 1;
	static volatile int64_t t64 = -512543LL;

    t64 = (x257^((x258==x259)|x260));

    if (t64 != -2031126151LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MAX;
	int64_t x262 = 4766361200LL;
	int32_t x263 = -16;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -9310;

    t65 = (x261^((x262==x263)|x264));

    if (t65 != -32641) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	volatile int16_t x268 = -1215;
	volatile int32_t t66 = 2529;

    t66 = (x265^((x266==x267)|x268));

    if (t66 != 31553) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = 1;
	int16_t x270 = -1;
	int64_t x272 = INT64_MAX;
	int64_t t67 = -580588433LL;

    t67 = (x269^((x270==x271)|x272));

    if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 9U;
	int64_t x275 = 27287LL;
	int16_t x276 = -6;
	int32_t t68 = -127272;

    t68 = (x273^((x274==x275)|x276));

    if (t68 != 46) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	int64_t x278 = INT64_MIN;
	int64_t x279 = 690450LL;
	uint32_t x280 = 57517495U;
	volatile int64_t t69 = 3148LL;

    t69 = (x277^((x278==x279)|x280));

    if (t69 != -57517496LL) { NG(); } else { ; }
	
}

void f70(void) {
    

    t70 = (x281^((x282==x283)|x284));

    if (t70 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	volatile uint64_t x286 = 27399223354127572LLU;
	int16_t x288 = INT16_MAX;

    t71 = (x285^((x286==x287)|x288));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;
	uint64_t t72 = 29205309157037LLU;

    t72 = (x289^((x290==x291)|x292));

    if (t72 != 119306925217438LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 33558366116469623LLU;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 551U;
	static volatile int32_t x296 = -64742;
	volatile uint64_t t73 = 2LLU;

    t73 = (x293^((x294==x295)|x296));

    if (t73 != 18413185707593062509LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MIN;
	static volatile uint32_t x300 = 74U;

    t74 = (x297^((x298==x299)|x300));

    if (t74 != -9223372036854775734LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint8_t x302 = 36U;
	int64_t x303 = 0LL;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -1;

    t75 = (x301^((x302==x303)|x304));

    if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 107U;
	volatile int64_t x308 = INT64_MIN;
	volatile int64_t t76 = -5425LL;

    t76 = (x305^((x306==x307)|x308));

    if (t76 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 7U;
	int64_t x310 = INT64_MIN;
	static int64_t x311 = INT64_MAX;
	int64_t x312 = INT64_MAX;
	volatile int64_t t77 = -56LL;

    t77 = (x309^((x310==x311)|x312));

    if (t77 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	uint8_t x315 = UINT8_MAX;
	volatile int64_t t78 = -15610219LL;

    t78 = (x313^((x314==x315)|x316));

    if (t78 != 14852464325873LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x317 = 3782U;
	volatile int32_t x319 = -1;
	int8_t x320 = -24;
	static int32_t t79 = 63;

    t79 = (x317^((x318==x319)|x320));

    if (t79 != -3794) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	int32_t x322 = -1;
	uint64_t x323 = 1076225195761LLU;
	volatile uint32_t x324 = 12597392U;
	volatile uint32_t t80 = 2586U;

    t80 = (x321^((x322==x323)|x324));

    if (t80 != 4282369903U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 190737U;
	int64_t x326 = 5830050389LL;
	int64_t x328 = -1LL;

    t81 = (x325^((x326==x327)|x328));

    if (t81 != -190738LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MIN;
	volatile int8_t x331 = -1;
	volatile int32_t x332 = INT32_MIN;

    t82 = (x329^((x330==x331)|x332));

    if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -6;
	uint32_t x335 = UINT32_MAX;
	uint8_t x336 = 65U;
	int32_t t83 = 10094382;

    t83 = (x333^((x334==x335)|x336));

    if (t83 != -69) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	int8_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = -8886011;

    t84 = (x337^((x338==x339)|x340));

    if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x342 = -1;
	int64_t t85 = 30421030693535LL;

    t85 = (x341^((x342==x343)|x344));

    if (t85 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 3U;
	int32_t x347 = -7;
	int8_t x348 = -1;
	volatile int32_t t86 = -5907812;

    t86 = (x345^((x346==x347)|x348));

    if (t86 != -4) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = -1;
	int16_t x350 = 15;
	uint16_t x351 = 2805U;
	volatile int32_t t87 = INT32_MIN;

    t87 = (x349^((x350==x351)|x352));

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 64U;
	int64_t x355 = -1LL;
	int16_t x356 = 1;
	volatile int32_t t88 = 3326738;

    t88 = (x353^((x354==x355)|x356));

    if (t88 != 65) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = INT64_MIN;
	int16_t x359 = 1;
	static int32_t x360 = 1749487;
	volatile int64_t t89 = 9038147205LL;

    t89 = (x357^((x358==x359)|x360));

    if (t89 != -9223372036853026321LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -2184;
	uint32_t x363 = 10U;
	volatile uint64_t t90 = 3661500664212371591LLU;

    t90 = (x361^((x362==x363)|x364));

    if (t90 != 18446674411246288062LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MAX;
	static uint8_t x367 = UINT8_MAX;
	int64_t x368 = -1LL;
	volatile int64_t t91 = 445289925195LL;

    t91 = (x365^((x366==x367)|x368));

    if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MAX;
	volatile uint64_t x371 = 818LLU;
	volatile int64_t x372 = -20212244LL;
	static volatile int64_t t92 = -13243766283554LL;

    t92 = (x369^((x370==x371)|x372));

    if (t92 != -20212461LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MAX;
	uint8_t x375 = 5U;
	uint16_t x376 = 1U;

    t93 = (x373^((x374==x375)|x376));

    if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = 6760677452901LL;
	int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;
	static volatile int64_t t94 = 540476445719394072LL;

    t94 = (x377^((x378==x379)|x380));

    if (t94 != -5727114567252LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = -1LL;
	static volatile int16_t x382 = INT16_MIN;
	volatile int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;

    t95 = (x381^((x382==x383)|x384));

    if (t95 != 2147483646LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	uint64_t x386 = 941857LLU;
	uint32_t x387 = 170U;
	volatile int64_t t96 = -65LL;

    t96 = (x385^((x386==x387)|x388));

    if (t96 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	int32_t x392 = -116521317;
	static volatile int32_t t97 = 15008290;

    t97 = (x389^((x390==x391)|x392));

    if (t97 != 2030962331) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 17LLU;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -11;
	static uint64_t t98 = 1LLU;

    t98 = (x393^((x394==x395)|x396));

    if (t98 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	uint32_t x398 = 1723685U;
	int64_t x399 = -7913350LL;
	uint32_t x400 = UINT32_MAX;
	uint32_t t99 = 2474544U;

    t99 = (x397^((x398==x399)|x400));

    if (t99 != 32767U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 284189;

    t100 = (x401^((x402==x403)|x404));

    if (t100 != 2147450880) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 682U;
	volatile int32_t x406 = INT32_MAX;
	uint32_t x407 = 187693U;
	int32_t x408 = INT32_MAX;
	static int32_t t101 = 24;

    t101 = (x405^((x406==x407)|x408));

    if (t101 != 2147482965) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 2U;
	int8_t x412 = 5;
	static uint64_t t102 = 19563809661429548LLU;

    t102 = (x409^((x410==x411)|x412));

    if (t102 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x414 = INT32_MIN;
	static int16_t x415 = INT16_MIN;
	int32_t x416 = -1;
	volatile uint32_t t103 = 429U;

    t103 = (x413^((x414==x415)|x416));

    if (t103 != 3731308929U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MAX;
	static volatile int8_t x418 = -1;
	static uint16_t x419 = 2U;
	volatile int16_t x420 = 0;
	volatile int32_t t104 = -2663;

    t104 = (x417^((x418==x419)|x420));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x423 = 3201982U;
	uint16_t x424 = UINT16_MAX;
	int32_t t105 = 229512;

    t105 = (x421^((x422==x423)|x424));

    if (t105 != -65409) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = 10339U;
	uint32_t x428 = 1U;
	volatile uint32_t t106 = 149474U;

    t106 = (x425^((x426==x427)|x428));

    if (t106 != 4294934529U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	static int32_t x430 = INT32_MAX;
	int32_t x431 = 1;
	volatile int32_t t107 = 94314571;

    t107 = (x429^((x430==x431)|x432));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x433 = UINT16_MAX;
	static int16_t x435 = INT16_MIN;
	int64_t x436 = -1LL;
	volatile int64_t t108 = -1442120516491070LL;

    t108 = (x433^((x434==x435)|x436));

    if (t108 != -65536LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = -8823;
	uint64_t x438 = 3004581930LLU;
	uint8_t x439 = 116U;
	volatile int32_t t109 = -267761417;

    t109 = (x437^((x438==x439)|x440));

    if (t109 != 8822) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 1U;
	static int16_t x444 = -1;
	int32_t t110 = -21;

    t110 = (x441^((x442==x443)|x444));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 47;
	volatile uint64_t x446 = UINT64_MAX;
	int32_t x448 = -1;
	volatile int32_t t111 = 316641857;

    t111 = (x445^((x446==x447)|x448));

    if (t111 != -48) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	volatile uint16_t x451 = 1U;
	int8_t x452 = INT8_MAX;
	static volatile int32_t t112 = -21408138;

    t112 = (x449^((x450==x451)|x452));

    if (t112 != 65408) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -3;
	uint64_t x454 = 1LLU;
	uint32_t x455 = 11U;
	static uint8_t x456 = UINT8_MAX;
	volatile int32_t t113 = -713441219;

    t113 = (x453^((x454==x455)|x456));

    if (t113 != -254) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	volatile uint8_t x458 = 29U;
	int16_t x460 = INT16_MIN;
	int32_t t114 = 0;

    t114 = (x457^((x458==x459)|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int64_t x462 = -1LL;
	volatile uint64_t x463 = 1710347245LLU;
	volatile uint64_t t115 = 1057LLU;

    t115 = (x461^((x462==x463)|x464));

    if (t115 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x467 = INT64_MIN;
	uint32_t x468 = UINT32_MAX;

    t116 = (x465^((x466==x467)|x468));

    if (t116 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = 2U;
	uint16_t x471 = 2774U;
	int8_t x472 = 9;
	volatile int32_t t117 = -4;

    t117 = (x469^((x470==x471)|x472));

    if (t117 != 11) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int64_t x474 = INT64_MIN;
	static int64_t x475 = 59382952460LL;
	volatile int32_t t118 = -400442;

    t118 = (x473^((x474==x475)|x476));

    if (t118 != -4) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x480 = 55;
	volatile int64_t t119 = 1544865573250LL;

    t119 = (x477^((x478==x479)|x480));

    if (t119 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	static volatile int64_t x482 = -5LL;
	int32_t t120 = 32265312;

    t120 = (x481^((x482==x483)|x484));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = 1;
	int32_t x486 = INT32_MAX;
	int16_t x487 = -524;
	uint64_t x488 = 1749791947LLU;
	uint64_t t121 = 477765890LLU;

    t121 = (x485^((x486==x487)|x488));

    if (t121 != 1749791946LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x492 = -962;
	volatile int32_t t122 = -19549;

    t122 = (x489^((x490==x491)|x492));

    if (t122 != 2147482686) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	uint64_t x494 = UINT64_MAX;
	volatile uint16_t x496 = UINT16_MAX;
	static volatile int32_t t123 = 4647;

    t123 = (x493^((x494==x495)|x496));

    if (t123 != -2147418113) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	static volatile int16_t x498 = -1;
	int16_t x499 = 1521;
	int32_t x500 = INT32_MIN;
	volatile int32_t t124 = INT32_MAX;

    t124 = (x497^((x498==x499)|x500));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	volatile int32_t t125 = -225;

    t125 = (x501^((x502==x503)|x504));

    if (t125 != 2147483575) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 939028U;
	static uint32_t x506 = 1052888812U;
	uint8_t x507 = 3U;
	int64_t x508 = -12416LL;

    t126 = (x505^((x506==x507)|x508));

    if (t126 != -943212LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x510 = 3556828407138135LLU;
	volatile int8_t x511 = INT8_MIN;
	static int16_t x512 = INT16_MAX;

    t127 = (x509^((x510==x511)|x512));

    if (t127 != 32758LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x515 = 21;
	uint8_t x516 = UINT8_MAX;
	int32_t t128 = 465166;

    t128 = (x513^((x514==x515)|x516));

    if (t128 != -256) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	static uint16_t x518 = UINT16_MAX;
	int8_t x519 = INT8_MAX;
	int64_t x520 = -806LL;
	int64_t t129 = 7LL;

    t129 = (x517^((x518==x519)|x520));

    if (t129 != 858LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 14187505036070602LLU;
	volatile int16_t x523 = 914;
	uint64_t t130 = 55214017190307LLU;

    t130 = (x521^((x522==x523)|x524));

    if (t130 != 18432556568673481013LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x526 = 26503U;
	static uint32_t x527 = UINT32_MAX;
	volatile int64_t x528 = -1LL;

    t131 = (x525^((x526==x527)|x528));

    if (t131 != -1085525579LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = 64;
	int32_t x531 = -1;
	uint32_t t132 = 26163U;

    t132 = (x529^((x530==x531)|x532));

    if (t132 != 258607192U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	static uint32_t x534 = 181U;
	int16_t x535 = 1;
	int16_t x536 = INT16_MAX;
	int32_t t133 = -22997;

    t133 = (x533^((x534==x535)|x536));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	static volatile int16_t x539 = 1;
	int16_t x540 = INT16_MIN;
	volatile int64_t t134 = -18697736519567367LL;

    t134 = (x537^((x538==x539)|x540));

    if (t134 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 7828;
	int8_t x543 = INT8_MIN;
	uint16_t x544 = UINT16_MAX;

    t135 = (x541^((x542==x543)|x544));

    if (t135 != 57707) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x546 = -1;
	int32_t x547 = -1;
	static uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t136 = 1691897271199116LLU;

    t136 = (x545^((x546==x547)|x548));

    if (t136 != 2147483647LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x550 = 13106121436LLU;
	volatile int32_t x551 = -1;
	volatile int32_t t137 = -2639425;

    t137 = (x549^((x550==x551)|x552));

    if (t137 != 105) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	uint64_t x556 = UINT64_MAX;
	uint64_t t138 = 45LLU;

    t138 = (x553^((x554==x555)|x556));

    if (t138 != 2147483647LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x558 = INT32_MAX;
	uint8_t x559 = 13U;
	int32_t x560 = -1;
	volatile int32_t t139 = 4482;

    t139 = (x557^((x558==x559)|x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 110540331LL;
	static int32_t x562 = 4552;
	uint8_t x563 = 32U;
	volatile uint16_t x564 = 240U;
	static int64_t t140 = -26271LL;

    t140 = (x561^((x562==x563)|x564));

    if (t140 != 110540507LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int64_t x567 = -1LL;
	static uint32_t x568 = UINT32_MAX;
	volatile uint32_t t141 = 16007469U;

    t141 = (x565^((x566==x567)|x568));

    if (t141 != 2147483647U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = 24615U;
	volatile uint64_t t142 = 3LLU;

    t142 = (x569^((x570==x571)|x572));

    if (t142 != 18446743989201267768LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MIN;
	int64_t x574 = -3LL;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;
	int32_t t143 = -903191;

    t143 = (x573^((x574==x575)|x576));

    if (t143 != 2147483520) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 1828U;
	uint64_t x578 = 49024827276810LLU;
	uint32_t x579 = UINT32_MAX;
	uint8_t x580 = 65U;
	volatile int32_t t144 = -84681116;

    t144 = (x577^((x578==x579)|x580));

    if (t144 != 1893) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = UINT64_MAX;
	volatile uint64_t x583 = 31544367310196181LLU;
	int64_t x584 = INT64_MAX;
	volatile uint64_t t145 = 37465126471LLU;

    t145 = (x581^((x582==x583)|x584));

    if (t145 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	int8_t x587 = -39;
	int8_t x588 = INT8_MIN;

    t146 = (x585^((x586==x587)|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x589 = 2U;
	uint64_t x590 = UINT64_MAX;
	uint8_t x591 = 52U;
	static volatile int8_t x592 = INT8_MIN;

    t147 = (x589^((x590==x591)|x592));

    if (t147 != -126) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = -128741260LL;
	int8_t x594 = 25;
	static volatile int16_t x596 = 1;

    t148 = (x593^((x594==x595)|x596));

    if (t148 != -128741259LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 60U;
	volatile int64_t x598 = INT64_MIN;
	int16_t x599 = INT16_MIN;
	int16_t x600 = -9;
	volatile int32_t t149 = 27;

    t149 = (x597^((x598==x599)|x600));

    if (t149 != -53) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MIN;
	int32_t x602 = -1;
	uint8_t x603 = 25U;
	int32_t x604 = INT32_MAX;
	static int32_t t150 = 2999;

    t150 = (x601^((x602==x603)|x604));

    if (t150 != -2147483521) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int16_t x606 = -3246;
	volatile int32_t t151 = 0;

    t151 = (x605^((x606==x607)|x608));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x610 = 16U;
	int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	volatile int64_t t152 = INT64_MAX;

    t152 = (x609^((x610==x611)|x612));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	volatile int32_t x614 = INT32_MIN;
	int64_t x615 = -1LL;
	static uint16_t x616 = 93U;
	volatile int64_t t153 = -148956196721308LL;

    t153 = (x613^((x614==x615)|x616));

    if (t153 != -9223372036854775715LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = 5352860;
	int64_t x620 = INT64_MIN;

    t154 = (x617^((x618==x619)|x620));

    if (t154 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = INT32_MAX;
	int16_t x622 = -373;
	int64_t x624 = 21989704088941722LL;
	volatile int64_t t155 = -77687921323802296LL;

    t155 = (x621^((x622==x623)|x624));

    if (t155 != 21989702312659813LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	volatile int8_t x626 = 2;
	uint8_t x627 = UINT8_MAX;
	int32_t x628 = -1;
	int32_t t156 = -19;

    t156 = (x625^((x626==x627)|x628));

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 190032696U;
	int32_t x630 = 16;
	int16_t x631 = INT16_MAX;
	volatile int64_t x632 = -1LL;
	static int64_t t157 = -14057LL;

    t157 = (x629^((x630==x631)|x632));

    if (t157 != -190032697LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	uint8_t x634 = UINT8_MAX;
	int64_t x635 = INT64_MAX;
	int8_t x636 = INT8_MIN;
	int32_t t158 = 3;

    t158 = (x633^((x634==x635)|x636));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 86468162870447058LLU;
	int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MIN;
	int32_t x640 = -1;
	uint64_t t159 = 992965LLU;

    t159 = (x637^((x638==x639)|x640));

    if (t159 != 18360275910839104557LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	uint32_t x642 = 4U;
	uint32_t x643 = 0U;
	static int64_t x644 = INT64_MIN;
	volatile uint64_t t160 = 2644047532389943064LLU;

    t160 = (x641^((x642==x643)|x644));

    if (t160 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 5293282U;
	volatile uint16_t x647 = 137U;
	int64_t x648 = 3800855672028LL;
	volatile int64_t t161 = -1LL;

    t161 = (x645^((x646==x647)|x648));

    if (t161 != 3800860864574LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MAX;
	int8_t x650 = -1;
	uint8_t x651 = 3U;
	int32_t x652 = 1;
	volatile int32_t t162 = 1;

    t162 = (x649^((x650==x651)|x652));

    if (t162 != 32766) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = 21;
	uint8_t x654 = UINT8_MAX;
	int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 11189402;

    t163 = (x653^((x654==x655)|x656));

    if (t163 != 32746) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static volatile uint64_t x658 = UINT64_MAX;
	int16_t x659 = INT16_MIN;
	static uint8_t x660 = 127U;
	volatile int32_t t164 = -5;

    t164 = (x657^((x658==x659)|x660));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = -1LL;
	uint64_t x664 = 33LLU;
	static volatile uint64_t t165 = 241871050405LLU;

    t165 = (x661^((x662==x663)|x664));

    if (t165 != 342LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	static int64_t x666 = -6LL;
	int64_t x667 = -1LL;
	int32_t x668 = INT32_MAX;
	int32_t t166 = INT32_MIN;

    t166 = (x665^((x666==x667)|x668));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 99U;
	uint64_t x670 = UINT64_MAX;
	int64_t x671 = INT64_MIN;
	static volatile int32_t t167 = 1;

    t167 = (x669^((x670==x671)|x672));

    if (t167 != -233) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 15U;
	uint16_t x674 = 1U;
	static uint16_t x675 = 16U;
	static int16_t x676 = 171;
	static uint32_t t168 = 0U;

    t168 = (x673^((x674==x675)|x676));

    if (t168 != 164U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 29U;
	volatile int32_t x678 = INT32_MAX;
	volatile int64_t x679 = INT64_MAX;
	uint8_t x680 = 28U;
	int32_t t169 = -902830;

    t169 = (x677^((x678==x679)|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	static int16_t x683 = -1;
	volatile int32_t t170 = 3594;

    t170 = (x681^((x682==x683)|x684));

    if (t170 != 251) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint16_t x686 = UINT16_MAX;
	int32_t t171 = -7205049;

    t171 = (x685^((x686==x687)|x688));

    if (t171 != 2147450880) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -11;
	uint16_t x692 = 1150U;
	static int32_t t172 = 1048408884;

    t172 = (x689^((x690==x691)|x692));

    if (t172 != -1141) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 47628094460784LLU;
	uint64_t x695 = 133918075848547LLU;
	volatile int32_t x696 = -224743547;
	uint64_t t173 = 5366853917609100LLU;

    t173 = (x693^((x694==x695)|x696));

    if (t173 != 18446696445562879221LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 27U;
	int16_t x698 = INT16_MIN;
	volatile uint64_t x699 = 202535LLU;
	static uint32_t t174 = 208068U;

    t174 = (x697^((x698==x699)|x700));

    if (t174 != 2147483620U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int8_t x702 = INT8_MAX;
	int8_t x703 = INT8_MIN;
	static uint16_t x704 = 28122U;

    t175 = (x701^((x702==x703)|x704));

    if (t175 != 27941) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	uint8_t x707 = UINT8_MAX;
	uint64_t x708 = UINT64_MAX;
	uint64_t t176 = 470701LLU;

    t176 = (x705^((x706==x707)|x708));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint32_t x710 = UINT32_MAX;
	int16_t x711 = INT16_MIN;
	int32_t t177 = INT32_MAX;

    t177 = (x709^((x710==x711)|x712));

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x714 = -1;
	uint16_t x715 = UINT16_MAX;
	int32_t x716 = 306;
	int32_t t178 = 0;

    t178 = (x713^((x714==x715)|x716));

    if (t178 != -32462) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = 0U;
	uint32_t x719 = UINT32_MAX;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = -935015;

    t179 = (x717^((x718==x719)|x720));

    if (t179 != 32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MAX;
	int64_t x722 = -1779350602LL;
	uint32_t x723 = 19346U;
	int64_t t180 = -2074255LL;

    t180 = (x721^((x722==x723)|x724));

    if (t180 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = 3580984971283472097LL;
	uint64_t x727 = 22620193LLU;
	volatile int64_t t181 = 2595659414739LL;

    t181 = (x725^((x726==x727)|x728));

    if (t181 != -9223372035322789018LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	int8_t x730 = INT8_MAX;
	uint16_t x731 = 17U;
	static volatile int32_t t182 = -2;

    t182 = (x729^((x730==x731)|x732));

    if (t182 != -32513) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x733 = UINT8_MAX;
	int32_t x734 = INT32_MIN;
	volatile int8_t x735 = INT8_MIN;
	volatile int64_t t183 = -148467LL;

    t183 = (x733^((x734==x735)|x736));

    if (t183 != -256LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	volatile int8_t x739 = INT8_MIN;
	uint16_t x740 = 64U;

    t184 = (x737^((x738==x739)|x740));

    if (t184 != 63) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int8_t x743 = -30;
	int32_t x744 = 2067;
	static int64_t t185 = -231791216808LL;

    t185 = (x741^((x742==x743)|x744));

    if (t185 != -9223372036854773741LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = 21292LL;
	uint8_t x747 = 12U;
	int64_t x748 = -2838272688LL;
	int64_t t186 = 45400660LL;

    t186 = (x745^((x746==x747)|x748));

    if (t186 != 2838291792LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 34322956893LLU;
	volatile int16_t x750 = INT16_MIN;
	int16_t x752 = -1;
	uint64_t t187 = 33985409139LLU;

    t187 = (x749^((x750==x751)|x752));

    if (t187 != 18446744039386594722LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = 946;
	uint64_t x755 = 7707814973762LLU;
	uint16_t x756 = 277U;
	volatile int32_t t188 = -282;

    t188 = (x753^((x754==x755)|x756));

    if (t188 != -278) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	static volatile uint16_t x759 = UINT16_MAX;
	int32_t t189 = -10092;

    t189 = (x757^((x758==x759)|x760));

    if (t189 != 2147450880) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	static volatile int8_t x762 = -1;
	static int16_t x763 = INT16_MIN;
	int32_t x764 = INT32_MIN;
	uint64_t t190 = 1015742921LLU;

    t190 = (x761^((x762==x763)|x764));

    if (t190 != 2147483647LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 69029150595553203LL;
	volatile int8_t x766 = INT8_MIN;
	int16_t x767 = INT16_MIN;
	uint8_t x768 = 8U;
	volatile int64_t t191 = -32552LL;

    t191 = (x765^((x766==x767)|x768));

    if (t191 != 69029150595553211LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = 81LL;
	static volatile uint32_t x772 = 306U;
	volatile uint32_t t192 = 8566U;

    t192 = (x769^((x770==x771)|x772));

    if (t192 != 4294966989U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 0;
	int64_t x774 = 2486471006184LL;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = (x773^((x774==x775)|x776));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	uint8_t x778 = 40U;
	int8_t x779 = INT8_MIN;
	uint64_t x780 = 666360051549232968LLU;
	volatile uint64_t t194 = 480583151137003LLU;

    t194 = (x777^((x778==x779)|x780));

    if (t194 != 9889732088404008776LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint16_t x782 = 1217U;
	int8_t x783 = INT8_MIN;
	volatile uint16_t x784 = 243U;
	volatile int32_t t195 = -9;

    t195 = (x781^((x782==x783)|x784));

    if (t195 != -32525) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	int8_t x786 = -1;
	static int32_t x787 = INT32_MAX;
	static int32_t x788 = -1;
	volatile int32_t t196 = -1;

    t196 = (x785^((x786==x787)|x788));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 3U;
	int32_t x790 = -3364929;
	volatile int16_t x791 = INT16_MIN;
	static volatile int64_t x792 = 369214154LL;

    t197 = (x789^((x790==x791)|x792));

    if (t197 != 369214153LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	uint8_t x794 = UINT8_MAX;
	volatile int64_t x796 = 240956789400055457LL;
	static int64_t t198 = -760202327500340747LL;

    t198 = (x793^((x794==x795)|x796));

    if (t198 != -240956789400055458LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	uint16_t x798 = UINT16_MAX;
	int16_t x799 = INT16_MIN;
	static int8_t x800 = -1;
	int32_t t199 = INT32_MAX;

    t199 = (x797^((x798==x799)|x800));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

