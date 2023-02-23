
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

uint32_t x1 = 2U;
int64_t x4 = 14LL;
volatile uint64_t t1 = 743075484580635077LLU;
volatile int64_t x10 = INT64_MIN;
uint64_t x18 = 49161532362934LLU;
volatile int64_t t5 = -178413932LL;
volatile uint64_t t6 = UINT64_MAX;
uint64_t x30 = UINT64_MAX;
volatile uint64_t t7 = 746788881LLU;
uint64_t x40 = 6238LLU;
int8_t x42 = 0;
int64_t t10 = 3484303429LL;
uint32_t x45 = UINT32_MAX;
volatile uint64_t x51 = UINT64_MAX;
int8_t x53 = INT8_MAX;
uint64_t t13 = 805282LLU;
volatile int8_t x61 = -1;
volatile uint8_t x62 = UINT8_MAX;
uint16_t x71 = UINT16_MAX;
uint64_t x73 = UINT64_MAX;
int16_t x74 = INT16_MIN;
int64_t x88 = INT64_MIN;
uint16_t x93 = UINT16_MAX;
static volatile int32_t t23 = 14857280;
volatile int32_t t24 = -123;
volatile int16_t x107 = INT16_MIN;
volatile uint32_t x108 = UINT32_MAX;
static volatile uint64_t t25 = 1932720340457LLU;
int64_t x109 = INT64_MIN;
volatile int64_t x113 = 186608LL;
uint32_t x122 = 190975U;
uint64_t x123 = 29901249625LLU;
uint8_t x129 = 1U;
static int16_t x132 = INT16_MAX;
static int64_t x134 = 51113683136LL;
static int16_t x152 = INT16_MIN;
static uint32_t t36 = 84U;
uint16_t x158 = UINT16_MAX;
uint16_t x162 = UINT16_MAX;
uint64_t t39 = 213505960LLU;
int16_t x170 = INT16_MIN;
uint64_t t40 = UINT64_MAX;
static volatile int64_t x183 = -6241713LL;
int64_t x186 = INT64_MIN;
volatile int64_t x188 = INT64_MIN;
static int32_t t46 = -2059213;
volatile uint64_t t47 = UINT64_MAX;
static uint16_t x202 = 0U;
int8_t x203 = 56;
volatile uint16_t x204 = 324U;
static uint16_t x205 = 936U;
static int8_t x209 = INT8_MIN;
volatile int32_t x214 = INT32_MIN;
uint32_t x219 = 640U;
volatile uint8_t x224 = UINT8_MAX;
static volatile int64_t t54 = -138830331519855657LL;
uint64_t t56 = 0LLU;
uint32_t x240 = 10515765U;
volatile int8_t x241 = 1;
uint64_t x242 = 8936861391LLU;
uint32_t x245 = 1124U;
int64_t t59 = 10688316766LL;
static volatile int8_t x258 = -1;
int16_t x265 = 15691;
volatile int32_t t63 = 9772;
uint32_t x269 = UINT32_MAX;
volatile int64_t x271 = INT64_MIN;
int16_t x273 = -1;
int64_t x280 = -1LL;
uint64_t t66 = UINT64_MAX;
int32_t x292 = INT32_MAX;
static uint64_t x295 = UINT64_MAX;
uint8_t x296 = UINT8_MAX;
static volatile int16_t x299 = INT16_MIN;
int64_t x305 = -1LL;
int64_t t73 = 11282727510735LL;
uint32_t x311 = 382U;
static int32_t x313 = -353259500;
volatile uint16_t x318 = 2U;
int64_t x335 = INT64_MAX;
uint32_t x336 = 23054092U;
volatile int16_t x343 = INT16_MIN;
static volatile uint16_t x344 = 156U;
static volatile uint32_t t83 = 14U;
static uint64_t x354 = 514572275LLU;
int64_t x355 = -251LL;
int32_t x356 = INT32_MIN;
int64_t x363 = INT64_MIN;
uint8_t x367 = 3U;
static volatile uint32_t x371 = 2771U;
uint32_t t87 = 2400573U;
static int16_t x383 = INT16_MIN;
int32_t x384 = -1;
int32_t x385 = INT32_MAX;
volatile int32_t x387 = -131;
static volatile int32_t x393 = INT32_MIN;
static int16_t x396 = INT16_MIN;
volatile uint64_t t93 = 27657556005LLU;
int64_t x405 = 84239LL;
volatile uint64_t t96 = 1866671LLU;
volatile int64_t t99 = -88985936LL;
int64_t x425 = INT64_MAX;
int8_t x428 = -5;
static volatile int64_t x434 = INT64_MIN;
static int32_t x436 = -1;
int16_t x437 = INT16_MAX;
int8_t x440 = -1;
int8_t x444 = INT8_MIN;
volatile uint32_t t103 = UINT32_MAX;
uint8_t x446 = 21U;
static int16_t x448 = -1;
int64_t x460 = INT64_MAX;
static uint16_t x462 = UINT16_MAX;
uint32_t x466 = 1U;
volatile int16_t x474 = INT16_MAX;
uint16_t x475 = 13U;
int32_t x476 = 295819;
static volatile int64_t x477 = -483036LL;
int64_t x478 = 6025LL;
static int16_t x480 = -1;
int64_t t110 = 2078198LL;
int32_t x481 = INT32_MAX;
static int8_t x491 = -3;
static uint16_t x496 = UINT16_MAX;
int32_t t114 = -3800;
int16_t x508 = INT16_MIN;
uint32_t x517 = 4781595U;
int32_t x520 = -1;
volatile uint16_t x531 = UINT16_MAX;
int16_t x532 = INT16_MIN;
int64_t t120 = 472150530LL;
int64_t x533 = -10597237LL;
int16_t x539 = INT16_MIN;
int64_t x540 = INT64_MAX;
volatile int8_t x543 = INT8_MIN;
int32_t t124 = 531786;
volatile int16_t x555 = INT16_MIN;
volatile int8_t x560 = INT8_MIN;
static volatile int32_t x561 = -12385657;
static int64_t x567 = INT64_MIN;
static int32_t x570 = INT32_MIN;
int64_t x571 = INT64_MIN;
static int64_t x572 = -2300448418252152LL;
static int8_t x575 = INT8_MAX;
int64_t x576 = INT64_MIN;
int64_t t130 = INT64_MAX;
uint16_t x579 = UINT16_MAX;
int32_t x580 = -1;
static int16_t x589 = INT16_MIN;
int64_t x597 = 195243715129334LL;
int64_t t135 = 14762522485962386LL;
volatile int16_t x604 = -1;
uint32_t t138 = 6119972U;
static volatile uint32_t x618 = 162913U;
static uint8_t x646 = 3U;
uint8_t x657 = UINT8_MAX;
int64_t x659 = INT64_MAX;
int16_t x662 = -72;
int32_t x663 = INT32_MAX;
int32_t t149 = -8128035;
static int16_t x669 = -975;
static int16_t x673 = INT16_MIN;
int64_t x684 = -5959LL;
static int16_t x689 = -1;
int32_t x702 = INT32_MAX;
static volatile int32_t x704 = -6479;
static int16_t x707 = 16004;
static int16_t x712 = -1;
uint64_t t163 = UINT64_MAX;
volatile uint64_t t167 = 1320852063710892LLU;
static int16_t x745 = INT16_MAX;
uint64_t t169 = 44690030210491512LLU;
int32_t x749 = 15160;
uint16_t x756 = 191U;
int64_t x764 = -1LL;
int32_t x766 = INT32_MIN;
static volatile int64_t t174 = -1LL;
int16_t x769 = -1;
int16_t x774 = INT16_MIN;
static int8_t x776 = 5;
static uint32_t x779 = 1220U;
static int16_t x780 = INT16_MIN;
volatile uint32_t t177 = 107743148U;
int64_t x784 = -1LL;
int32_t t179 = -8;
int16_t x794 = INT16_MAX;
int32_t x795 = 5;
int64_t x805 = INT64_MIN;
int32_t x811 = INT32_MAX;
volatile int64_t t186 = 98LL;
int32_t x821 = INT32_MIN;
volatile int64_t x827 = INT64_MIN;
static int8_t x828 = INT8_MIN;
static uint64_t x835 = 80989LLU;
static int64_t x840 = -1LL;
volatile int64_t t193 = 1956913040067818432LL;
int16_t x850 = 0;
static volatile uint64_t x852 = 80691471LLU;
int8_t x853 = INT8_MAX;
int8_t x854 = INT8_MAX;
static uint64_t x856 = 1078LLU;
volatile uint64_t t195 = 56729399885LLU;
static volatile int64_t x859 = INT64_MAX;
int8_t x862 = INT8_MIN;
volatile int16_t x864 = INT16_MIN;
static volatile int64_t t197 = -5227443736LL;
static int64_t x868 = INT64_MAX;
volatile int64_t t198 = 903LL;
int32_t x869 = 253433;


void f0(void) {
    	int64_t x2 = 250371LL;
	int64_t x3 = -1LL;
	int64_t t0 = -41329305841LL;

    t0 = (x1^((x2/x3)/x4));

    if (t0 != -17881LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -13816;
	int64_t x6 = INT64_MAX;
	uint64_t x7 = 13LLU;
	static uint32_t x8 = 1542899U;

    t1 = (x5^((x6/x7)/x8));

    if (t1 != 18446743613867307472LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 27891U;
	int16_t x11 = -1745;
	uint32_t x12 = UINT32_MAX;
	int64_t t2 = 2632LL;

    t2 = (x9^((x10/x11)/x12));

    if (t2 != 1223626LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x13 = 7112376U;
	volatile int16_t x14 = -15;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = -1;
	volatile uint32_t t3 = 383366U;

    t3 = (x13^((x14/x15)/x16));

    if (t3 != 7112376U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 23476LL;
	int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 284LLU;

    t4 = (x17^((x18/x19)/x20));

    if (t4 != 23476LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 13U;
	int8_t x22 = INT8_MIN;
	static int16_t x23 = -12069;
	int64_t x24 = -106197578LL;

    t5 = (x21^((x22/x23)/x24));

    if (t5 != 13LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = UINT64_MAX;
	static volatile int16_t x26 = 29;
	static volatile int8_t x27 = INT8_MAX;
	int32_t x28 = 105868534;

    t6 = (x25^((x26/x27)/x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MAX;
	static volatile int32_t x32 = INT32_MIN;

    t7 = (x29^((x30/x31)/x32));

    if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int16_t x34 = 27;
	volatile int8_t x35 = -2;
	int64_t x36 = -1LL;
	int64_t t8 = 6240628086LL;

    t8 = (x33^((x34/x35)/x36));

    if (t8 != 65522LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = INT64_MAX;
	volatile uint8_t x38 = 3U;
	int8_t x39 = -3;
	uint64_t t9 = 4821277478331LLU;

    t9 = (x37^((x38/x39)/x40));

    if (t9 != 9220414880061940035LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 30U;
	volatile uint8_t x43 = 126U;
	int64_t x44 = -1LL;

    t10 = (x41^((x42/x43)/x44));

    if (t10 != 30LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	int64_t x47 = -70416095561141197LL;
	uint8_t x48 = 3U;
	volatile int64_t t11 = 0LL;

    t11 = (x45^((x46/x47)/x48));

    if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 0U;
	int64_t x50 = INT64_MAX;
	static int8_t x52 = -1;
	volatile uint64_t t12 = 6145914468LLU;

    t12 = (x49^((x50/x51)/x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = UINT64_MAX;
	static volatile int32_t x55 = INT32_MIN;
	uint64_t x56 = 91763921187LLU;

    t13 = (x53^((x54/x55)/x56));

    if (t13 != 127LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MAX;
	int32_t x59 = -527;
	static uint32_t x60 = 39614U;
	static volatile int64_t t14 = INT64_MIN;

    t14 = (x57^((x58/x59)/x60));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x63 = INT8_MIN;
	int16_t x64 = -1605;
	volatile int32_t t15 = 254119028;

    t15 = (x61^((x62/x63)/x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 1LLU;
	uint8_t x66 = 0U;
	uint16_t x67 = UINT16_MAX;
	static volatile uint16_t x68 = UINT16_MAX;
	volatile uint64_t t16 = 649298LLU;

    t16 = (x65^((x66/x67)/x68));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	int16_t x72 = INT16_MIN;
	int32_t t17 = INT32_MIN;

    t17 = (x69^((x70/x71)/x72));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = 1;
	int32_t x76 = -1;
	uint64_t t18 = 393230784365322809LLU;

    t18 = (x73^((x74/x75)/x76));

    if (t18 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static volatile int8_t x78 = INT8_MIN;
	int64_t x79 = -1LL;
	static volatile int32_t x80 = INT32_MIN;
	int64_t t19 = 1462627562LL;

    t19 = (x77^((x78/x79)/x80));

    if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 0;
	int8_t x82 = 1;
	uint64_t x83 = 27329058613242727LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t20 = 20098LLU;

    t20 = (x81^((x82/x83)/x84));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 3195802686613345755LLU;
	int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint64_t t21 = 59LLU;

    t21 = (x85^((x86/x87)/x88));

    if (t21 != 3195802686613345755LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 2U;
	int64_t x90 = INT64_MAX;
	volatile uint64_t x91 = UINT64_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile uint64_t t22 = 16LLU;

    t22 = (x89^((x90/x91)/x92));

    if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;

    t23 = (x93^((x94/x95)/x96));

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static volatile int16_t x99 = INT16_MIN;
	volatile int8_t x100 = -3;

    t24 = (x97^((x98/x99)/x100));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1576;
	uint64_t x106 = 21160029LLU;

    t25 = (x105^((x106/x107)/x108));

    if (t25 != 18446744073709550040LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x110 = 7U;
	static int8_t x111 = -1;
	static volatile int32_t x112 = -5928;
	volatile int64_t t26 = INT64_MIN;

    t26 = (x109^((x110/x111)/x112));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x114 = 2067155002699248LLU;
	int32_t x115 = -1;
	int8_t x116 = INT8_MAX;
	static volatile uint64_t t27 = 20967864192024004LLU;

    t27 = (x113^((x114/x115)/x116));

    if (t27 != 186608LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = INT16_MIN;
	static uint16_t x124 = 10824U;
	uint64_t t28 = 2LLU;

    t28 = (x121^((x122/x123)/x124));

    if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = UINT32_MAX;
	static int16_t x126 = 883;
	volatile int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	int64_t t29 = -8LL;

    t29 = (x125^((x126/x127)/x128));

    if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MIN;
	static int64_t t30 = -6001846LL;

    t30 = (x129^((x130/x131)/x132));

    if (t30 != 131077LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MIN;
	uint16_t x135 = 1U;
	int32_t x136 = 21255911;
	volatile int64_t t31 = -396563403LL;

    t31 = (x133^((x134/x135)/x136));

    if (t31 != -9223372036854773404LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int8_t x138 = 3;
	int64_t x139 = INT64_MIN;
	static uint16_t x140 = 806U;
	volatile int64_t t32 = -32487016038502199LL;

    t32 = (x137^((x138/x139)/x140));

    if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = UINT64_MAX;
	volatile uint16_t x142 = 0U;
	int32_t x143 = -1;
	int16_t x144 = INT16_MIN;
	static uint64_t t33 = UINT64_MAX;

    t33 = (x141^((x142/x143)/x144));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = 5U;
	int32_t x146 = -1;
	uint16_t x147 = 1U;
	volatile int16_t x148 = 3;
	static volatile int32_t t34 = 0;

    t34 = (x145^((x146/x147)/x148));

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	int32_t x151 = -52439;
	static int64_t t35 = INT64_MIN;

    t35 = (x149^((x150/x151)/x152));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x153 = 0U;
	static uint32_t x154 = 23883733U;
	static uint8_t x155 = 103U;
	int8_t x156 = INT8_MIN;

    t36 = (x153^((x154/x155)/x156));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	static uint32_t x160 = UINT32_MAX;
	int64_t t37 = -39331091170772241LL;

    t37 = (x157^((x158/x159)/x160));

    if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x161 = INT64_MIN;
	static int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	static volatile int64_t t38 = INT64_MIN;

    t38 = (x161^((x162/x163)/x164));

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x165 = 28107490U;
	static volatile uint64_t x166 = 3267892712LLU;
	static int32_t x167 = -35713711;
	int8_t x168 = -1;

    t39 = (x165^((x166/x167)/x168));

    if (t39 != 28107490LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -1LL;
	uint64_t x171 = 8376880575555616218LLU;
	int16_t x172 = -1;

    t40 = (x169^((x170/x171)/x172));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 1062757111892266LLU;
	int16_t x174 = -1;
	static int16_t x175 = -1;
	volatile int64_t x176 = INT64_MAX;
	volatile uint64_t t41 = 4LLU;

    t41 = (x173^((x174/x175)/x176));

    if (t41 != 1062757111892266LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 154U;
	volatile int32_t x180 = -5777598;
	static uint32_t t42 = 1493U;

    t42 = (x177^((x178/x179)/x180));

    if (t42 != 4294934528U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = INT8_MIN;
	int32_t x182 = 54941;
	uint32_t x184 = 14297247U;
	int64_t t43 = -340282448757100544LL;

    t43 = (x181^((x182/x183)/x184));

    if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x185 = 8775631307LL;
	int8_t x187 = 5;
	int64_t t44 = -13630476173937780LL;

    t44 = (x185^((x186/x187)/x188));

    if (t44 != 8775631307LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MIN;
	uint8_t x190 = 21U;
	int32_t x191 = -1;
	uint64_t x192 = 397LLU;
	static uint64_t t45 = 224693393497021LLU;

    t45 = (x189^((x190/x191)/x192));

    if (t45 != 18400278723397913169LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = -1;
	uint8_t x194 = 13U;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = 311U;

    t46 = (x193^((x194/x195)/x196));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = UINT64_MAX;
	int64_t x198 = -1LL;
	static int16_t x199 = 1;
	int16_t x200 = INT16_MIN;

    t47 = (x197^((x198/x199)/x200));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = -27;
	int32_t t48 = -568;

    t48 = (x201^((x202/x203)/x204));

    if (t48 != -27) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x206 = -1;
	int64_t x207 = -1LL;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t49 = -4284005404275284582LL;

    t49 = (x205^((x206/x207)/x208));

    if (t49 != 936LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = 140U;
	uint64_t x212 = 11540970789470LLU;
	volatile uint64_t t50 = 253965754LLU;

    t50 = (x209^((x210/x211)/x212));

    if (t50 != 18446744073709540120LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 11140468964481LLU;
	uint16_t x215 = 11739U;
	volatile int32_t x216 = INT32_MIN;
	volatile uint64_t t51 = 1503509876259LLU;

    t51 = (x213^((x214/x215)/x216));

    if (t51 != 11140468964481LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x217 = INT8_MAX;
	static volatile int64_t x218 = INT64_MAX;
	int8_t x220 = INT8_MIN;
	int64_t t52 = -3318820695573788LL;

    t52 = (x217^((x218/x219)/x220));

    if (t52 != -112589990684187LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 19142LLU;
	int8_t x222 = INT8_MAX;
	int64_t x223 = INT64_MAX;
	volatile uint64_t t53 = 79LLU;

    t53 = (x221^((x222/x223)/x224));

    if (t53 != 19142LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = 105U;
	int16_t x226 = INT16_MIN;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = -1;

    t54 = (x225^((x226/x227)/x228));

    if (t54 != 105LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = -825;
	uint32_t x230 = 13U;
	static uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 120U;
	uint64_t t55 = 726656821LLU;

    t55 = (x229^((x230/x231)/x232));

    if (t55 != 18446744073709550791LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = 3244872291651524035LLU;
	volatile uint32_t x234 = 146566818U;
	int16_t x235 = INT16_MAX;
	int32_t x236 = -59973741;

    t56 = (x233^((x234/x235)/x236));

    if (t56 != 3244872291651524035LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = 1;
	volatile int32_t x238 = -325987;
	volatile int32_t x239 = -1;
	uint32_t t57 = 9773U;

    t57 = (x237^((x238/x239)/x240));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x243 = 27513262LL;
	static uint32_t x244 = UINT32_MAX;
	uint64_t t58 = 21440LLU;

    t58 = (x241^((x242/x243)/x244));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x246 = -1LL;
	volatile int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MAX;

    t59 = (x245^((x246/x247)/x248));

    if (t59 != 1124LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	volatile int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MIN;
	int64_t t60 = 1074797902LL;

    t60 = (x249^((x250/x251)/x252));

    if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = -1LL;
	uint64_t x254 = 2602436641LLU;
	int8_t x255 = 58;
	int64_t x256 = -2813LL;
	volatile uint64_t t61 = UINT64_MAX;

    t61 = (x253^((x254/x255)/x256));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	uint8_t x259 = 121U;
	int64_t x260 = INT64_MAX;
	volatile int64_t t62 = -4144967929LL;

    t62 = (x257^((x258/x259)/x260));

    if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x266 = -1;
	uint8_t x267 = 1U;
	int16_t x268 = INT16_MIN;

    t63 = (x265^((x266/x267)/x268));

    if (t63 != 15691) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x270 = INT16_MIN;
	volatile int64_t x272 = 3798496808878610556LL;
	int64_t t64 = -28570874787626LL;

    t64 = (x269^((x270/x271)/x272));

    if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x274 = 15559322684854LLU;
	static volatile int16_t x275 = INT16_MIN;
	int32_t x276 = -1;
	uint64_t t65 = UINT64_MAX;

    t65 = (x273^((x274/x275)/x276));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 1400321LLU;

    t66 = (x277^((x278/x279)/x280));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x281 = 389U;
	static volatile int16_t x282 = -1;
	uint8_t x283 = 2U;
	uint32_t x284 = 6664710U;
	volatile uint32_t t67 = 3554U;

    t67 = (x281^((x282/x283)/x284));

    if (t67 != 389U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	static int64_t x287 = -1LL;
	volatile int16_t x288 = INT16_MIN;
	static int64_t t68 = -553783852LL;

    t68 = (x285^((x286/x287)/x288));

    if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x289 = INT32_MAX;
	int16_t x290 = -175;
	int32_t x291 = INT32_MIN;
	int32_t t69 = INT32_MAX;

    t69 = (x289^((x290/x291)/x292));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -360LL;
	uint32_t x294 = 1062608995U;
	uint64_t t70 = 708439340788083LLU;

    t70 = (x293^((x294/x295)/x296));

    if (t70 != 18446744073709551256LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 1016900U;
	int16_t x298 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	volatile uint32_t t71 = 4U;

    t71 = (x297^((x298/x299)/x300));

    if (t71 != 1016900U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x301 = UINT8_MAX;
	int16_t x302 = -4964;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t72 = -109;

    t72 = (x301^((x302/x303)/x304));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x306 = 28011082746041269LL;
	volatile int32_t x307 = INT32_MIN;
	static int8_t x308 = 12;

    t73 = (x305^((x306/x307)/x308));

    if (t73 != 1086972LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x309 = 13U;
	int16_t x310 = INT16_MIN;
	uint32_t x312 = 158U;
	static uint32_t t74 = 750U;

    t74 = (x309^((x310/x311)/x312));

    if (t74 != 71157U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x314 = 165310045545921849LLU;
	volatile int32_t x315 = 5516575;
	int32_t x316 = -1;
	uint64_t t75 = 5606161338LLU;

    t75 = (x313^((x314/x315)/x316));

    if (t75 != 18446744073356292116LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x317 = 52LLU;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t76 = 14LLU;

    t76 = (x317^((x318/x319)/x320));

    if (t76 != 52LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	volatile int64_t x323 = INT64_MIN;
	uint64_t x324 = 621LLU;
	uint64_t t77 = 2365LLU;

    t77 = (x321^((x322/x323)/x324));

    if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = -1;
	static int64_t x326 = INT64_MAX;
	uint8_t x327 = UINT8_MAX;
	uint32_t x328 = UINT32_MAX;
	volatile int64_t t78 = -34073577571LL;

    t78 = (x325^((x326/x327)/x328));

    if (t78 != -8421505LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = -1;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = (x329^((x330/x331)/x332));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	volatile int64_t t80 = 26345567789473LL;

    t80 = (x333^((x334/x335)/x336));

    if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 3398U;
	uint16_t x342 = UINT16_MAX;
	volatile int32_t t81 = -352169001;

    t81 = (x341^((x342/x343)/x344));

    if (t81 != 3398) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x345 = 58U;
	int64_t x346 = -1LL;
	uint8_t x347 = 61U;
	volatile int32_t x348 = INT32_MIN;
	int64_t t82 = -102156LL;

    t82 = (x345^((x346/x347)/x348));

    if (t82 != 58LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x349 = -1;
	uint32_t x350 = 2136500385U;
	int16_t x351 = 1;
	int8_t x352 = INT8_MAX;

    t83 = (x349^((x350/x351)/x352));

    if (t83 != 4278144458U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x353 = 9198943U;
	volatile uint64_t t84 = 477039996312LLU;

    t84 = (x353^((x354/x355)/x356));

    if (t84 != 9198943LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x361 = 1U;
	static uint32_t x362 = UINT32_MAX;
	uint8_t x364 = UINT8_MAX;
	int64_t t85 = 3666416LL;

    t85 = (x361^((x362/x363)/x364));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MAX;
	int64_t x368 = 1118110386317334420LL;
	uint64_t t86 = UINT64_MAX;

    t86 = (x365^((x366/x367)/x368));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;

    t87 = (x369^((x370/x371)/x372));

    if (t87 != 65535U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MAX;
	int16_t x374 = -1;
	int8_t x375 = 1;
	int32_t x376 = -1;
	static int64_t t88 = 39524LL;

    t88 = (x373^((x374/x375)/x376));

    if (t88 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x381 = INT16_MAX;
	static int8_t x382 = -24;
	int32_t t89 = -112803136;

    t89 = (x381^((x382/x383)/x384));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x386 = INT16_MAX;
	int16_t x388 = -1;
	int32_t t90 = -165287021;

    t90 = (x385^((x386/x387)/x388));

    if (t90 != 2147483397) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x389 = -730LL;
	static uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 867U;
	int32_t x392 = 97766;
	volatile int64_t t91 = 325LL;

    t91 = (x389^((x390/x391)/x392));

    if (t91 != -730LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x394 = 239LL;
	int64_t x395 = -1LL;
	int64_t t92 = 802649220LL;

    t92 = (x393^((x394/x395)/x396));

    if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x397 = 0U;
	int64_t x398 = INT64_MIN;
	volatile uint32_t x399 = 238020U;
	static volatile uint64_t x400 = 55016835627476681LLU;

    t93 = (x397^((x398/x399)/x400));

    if (t93 != 335LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x401 = INT16_MIN;
	static int8_t x402 = INT8_MAX;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 77U;
	int32_t t94 = 1565365;

    t94 = (x401^((x402/x403)/x404));

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x406 = -6;
	uint32_t x407 = UINT32_MAX;
	static int16_t x408 = INT16_MIN;
	int64_t t95 = 24444727536331290LL;

    t95 = (x405^((x406/x407)/x408));

    if (t95 != 84239LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x409 = 1036502983U;
	volatile uint64_t x410 = 12149374711337350LLU;
	static volatile int8_t x411 = 1;
	int16_t x412 = INT16_MIN;

    t96 = (x409^((x410/x411)/x412));

    if (t96 != 1036502983LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x413 = INT32_MIN;
	static int32_t x414 = INT32_MAX;
	static int8_t x415 = INT8_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t97 = 1907LLU;

    t97 = (x413^((x414/x415)/x416));

    if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x417 = 107;
	volatile uint32_t x418 = UINT32_MAX;
	int32_t x419 = INT32_MIN;
	static volatile int8_t x420 = -1;
	uint32_t t98 = 0U;

    t98 = (x417^((x418/x419)/x420));

    if (t98 != 107U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x421 = -1;
	static int32_t x422 = 29;
	uint32_t x423 = 148480592U;
	static int64_t x424 = -165396LL;

    t99 = (x421^((x422/x423)/x424));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile int64_t t100 = INT64_MAX;

    t100 = (x425^((x426/x427)/x428));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x433 = INT64_MAX;
	volatile uint8_t x435 = UINT8_MAX;
	volatile int64_t t101 = -576675237348111LL;

    t101 = (x433^((x434/x435)/x436));

    if (t101 != 9187201950435737471LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x438 = 255775197863LLU;
	volatile int8_t x439 = INT8_MIN;
	uint64_t t102 = 132902524831957807LLU;

    t102 = (x437^((x438/x439)/x440));

    if (t102 != 32767LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x441 = -1;
	static uint32_t x442 = UINT32_MAX;
	int8_t x443 = INT8_MIN;

    t103 = (x441^((x442/x443)/x444));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x447 = -1434;
	int32_t t104 = INT32_MIN;

    t104 = (x445^((x446/x447)/x448));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x449 = INT16_MIN;
	volatile uint8_t x450 = 6U;
	int8_t x451 = INT8_MAX;
	static int16_t x452 = -1;
	int32_t t105 = 104;

    t105 = (x449^((x450/x451)/x452));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x457 = 808138604LLU;
	static volatile int32_t x458 = -260776;
	static int16_t x459 = INT16_MIN;
	volatile uint64_t t106 = 14340239091513LLU;

    t106 = (x457^((x458/x459)/x460));

    if (t106 != 808138604LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x461 = 184U;
	volatile uint32_t x463 = UINT32_MAX;
	volatile uint64_t x464 = 4822347388LLU;
	uint64_t t107 = 5574821760980970LLU;

    t107 = (x461^((x462/x463)/x464));

    if (t107 != 184LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x465 = 26U;
	int8_t x467 = 63;
	volatile uint16_t x468 = UINT16_MAX;
	uint32_t t108 = 3U;

    t108 = (x465^((x466/x467)/x468));

    if (t108 != 26U) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x473 = UINT16_MAX;
	volatile int32_t t109 = 92119231;

    t109 = (x473^((x474/x475)/x476));

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x479 = 254U;

    t110 = (x477^((x478/x479)/x480));

    if (t110 != 483021LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x482 = UINT16_MAX;
	int8_t x483 = -1;
	static int64_t x484 = 344341439384081LL;
	volatile int64_t t111 = -35040016854494542LL;

    t111 = (x481^((x482/x483)/x484));

    if (t111 != 2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x485 = 2;
	volatile int32_t x486 = -1;
	uint16_t x487 = 8354U;
	static uint32_t x488 = 105U;
	uint32_t t112 = 976U;

    t112 = (x485^((x486/x487)/x488));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x489 = INT16_MIN;
	uint8_t x490 = 117U;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t113 = 36556025;

    t113 = (x489^((x490/x491)/x492));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MIN;
	int32_t x495 = -1;

    t114 = (x493^((x494/x495)/x496));

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x505 = INT32_MIN;
	static int64_t x506 = INT64_MAX;
	int64_t x507 = INT64_MIN;
	volatile int64_t t115 = -895LL;

    t115 = (x505^((x506/x507)/x508));

    if (t115 != -2147483648LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x509 = 52809160282254132LLU;
	uint32_t x510 = UINT32_MAX;
	uint32_t x511 = 1271888603U;
	static int64_t x512 = -52588LL;
	uint64_t t116 = 168184443LLU;

    t116 = (x509^((x510/x511)/x512));

    if (t116 != 52809160282254132LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x513 = 1;
	volatile int16_t x514 = -1;
	static int8_t x515 = -1;
	int8_t x516 = INT8_MIN;
	int32_t t117 = 14405549;

    t117 = (x513^((x514/x515)/x516));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MAX;
	uint32_t t118 = 6556171U;

    t118 = (x517^((x518/x519)/x520));

    if (t118 != 4781594U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x525 = INT16_MIN;
	int32_t x526 = INT32_MIN;
	int32_t x527 = -11;
	int32_t x528 = 2273293;
	int32_t t119 = -536416412;

    t119 = (x525^((x526/x527)/x528));

    if (t119 != -32683) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x529 = -1LL;
	int8_t x530 = INT8_MIN;

    t120 = (x529^((x530/x531)/x532));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x534 = 1995534LLU;
	int16_t x535 = -3;
	int32_t x536 = -611275833;
	uint64_t t121 = 27347916LLU;

    t121 = (x533^((x534/x535)/x536));

    if (t121 != 18446744073698954379LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile int64_t x538 = -1LL;
	volatile int64_t t122 = 1198LL;

    t122 = (x537^((x538/x539)/x540));

    if (t122 != 255LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x541 = -51206561LL;
	int8_t x542 = INT8_MIN;
	uint32_t x544 = 6709802U;
	int64_t t123 = -436745504823552568LL;

    t123 = (x541^((x542/x543)/x544));

    if (t123 != -51206561LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x549 = INT16_MIN;
	int8_t x550 = INT8_MIN;
	static int8_t x551 = INT8_MIN;
	uint8_t x552 = 29U;

    t124 = (x549^((x550/x551)/x552));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x553 = -1;
	int32_t x554 = INT32_MIN;
	int16_t x556 = 9;
	volatile int32_t t125 = -3165086;

    t125 = (x553^((x554/x555)/x556));

    if (t125 != -7282) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x557 = 47U;
	static int64_t x558 = -1LL;
	volatile int64_t x559 = INT64_MIN;
	static volatile int64_t t126 = -54415556237LL;

    t126 = (x557^((x558/x559)/x560));

    if (t126 != 47LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x562 = 613256325U;
	static int32_t x563 = INT32_MAX;
	static int32_t x564 = INT32_MAX;
	uint32_t t127 = 78U;

    t127 = (x561^((x562/x563)/x564));

    if (t127 != 4282581639U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x565 = INT64_MIN;
	volatile int32_t x566 = -1;
	uint64_t x568 = 577729622LLU;
	uint64_t t128 = 20269247LLU;

    t128 = (x565^((x566/x567)/x568));

    if (t128 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x569 = UINT16_MAX;
	int64_t t129 = -4621115486155LL;

    t129 = (x569^((x570/x571)/x572));

    if (t129 != 65535LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x573 = INT64_MAX;
	int64_t x574 = 190956LL;

    t130 = (x573^((x574/x575)/x576));

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x577 = UINT32_MAX;
	uint16_t x578 = 1839U;
	uint32_t t131 = UINT32_MAX;

    t131 = (x577^((x578/x579)/x580));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x581 = UINT16_MAX;
	volatile uint8_t x582 = 103U;
	volatile uint8_t x583 = 5U;
	int64_t x584 = INT64_MIN;
	int64_t t132 = -192518055513LL;

    t132 = (x581^((x582/x583)/x584));

    if (t132 != 65535LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x585 = INT64_MAX;
	static uint8_t x586 = 40U;
	int8_t x587 = INT8_MAX;
	static int64_t x588 = -1LL;
	volatile int64_t t133 = INT64_MAX;

    t133 = (x585^((x586/x587)/x588));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x590 = INT64_MIN;
	uint64_t x591 = UINT64_MAX;
	volatile int64_t x592 = -1LL;
	static volatile uint64_t t134 = 62950228330LLU;

    t134 = (x589^((x590/x591)/x592));

    if (t134 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x598 = 13;
	uint8_t x599 = 71U;
	uint16_t x600 = 31U;

    t135 = (x597^((x598/x599)/x600));

    if (t135 != 195243715129334LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MIN;
	int64_t x603 = INT64_MIN;
	int64_t t136 = 287152386LL;

    t136 = (x601^((x602/x603)/x604));

    if (t136 != -32768LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x605 = -1;
	volatile uint8_t x606 = 37U;
	volatile uint64_t x607 = UINT64_MAX;
	int32_t x608 = INT32_MIN;
	volatile uint64_t t137 = UINT64_MAX;

    t137 = (x605^((x606/x607)/x608));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x609 = -1;
	uint32_t x610 = 12U;
	int8_t x611 = 4;
	static int8_t x612 = 2;

    t138 = (x609^((x610/x611)/x612));

    if (t138 != 4294967294U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x613 = INT32_MIN;
	uint64_t x614 = UINT64_MAX;
	int64_t x615 = INT64_MAX;
	int8_t x616 = INT8_MIN;
	volatile uint64_t t139 = 13472176LLU;

    t139 = (x613^((x614/x615)/x616));

    if (t139 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x619 = UINT64_MAX;
	uint8_t x620 = 63U;
	static volatile uint64_t t140 = 30853314390LLU;

    t140 = (x617^((x618/x619)/x620));

    if (t140 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = 67033659264759274LL;
	int64_t x623 = -1LL;
	int16_t x624 = -1;
	int64_t t141 = -17611930242868451LL;

    t141 = (x621^((x622/x623)/x624));

    if (t141 != -67033661128018454LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x629 = INT32_MIN;
	int8_t x630 = -1;
	uint32_t x631 = UINT32_MAX;
	int64_t x632 = INT64_MAX;
	int64_t t142 = -513LL;

    t142 = (x629^((x630/x631)/x632));

    if (t142 != -2147483648LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x637 = 15540LL;
	uint16_t x638 = 66U;
	static int64_t x639 = INT64_MAX;
	int16_t x640 = -1;
	static volatile int64_t t143 = 298402341188LL;

    t143 = (x637^((x638/x639)/x640));

    if (t143 != 15540LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x641 = 4682;
	int8_t x642 = 7;
	int8_t x643 = -1;
	volatile int64_t x644 = INT64_MAX;
	volatile int64_t t144 = 4149395133671598LL;

    t144 = (x641^((x642/x643)/x644));

    if (t144 != 4682LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x645 = UINT32_MAX;
	uint16_t x647 = UINT16_MAX;
	volatile uint8_t x648 = UINT8_MAX;
	static volatile uint32_t t145 = UINT32_MAX;

    t145 = (x645^((x646/x647)/x648));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x649 = INT32_MIN;
	volatile int16_t x650 = -1;
	int64_t x651 = INT64_MIN;
	static int32_t x652 = INT32_MAX;
	volatile int64_t t146 = -783849466231223LL;

    t146 = (x649^((x650/x651)/x652));

    if (t146 != -2147483648LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x653 = INT64_MAX;
	static int8_t x654 = INT8_MIN;
	int64_t x655 = -1LL;
	static int32_t x656 = -1;
	int64_t t147 = -539870LL;

    t147 = (x653^((x654/x655)/x656));

    if (t147 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x658 = 3577;
	int16_t x660 = -1;
	volatile int64_t t148 = -165955958446LL;

    t148 = (x657^((x658/x659)/x660));

    if (t148 != 255LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x661 = INT8_MIN;
	int8_t x664 = INT8_MAX;

    t149 = (x661^((x662/x663)/x664));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x670 = INT8_MAX;
	volatile uint16_t x671 = 3571U;
	int16_t x672 = -1;
	int32_t t150 = -145;

    t150 = (x669^((x670/x671)/x672));

    if (t150 != -975) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x674 = -1;
	uint16_t x675 = 20621U;
	int8_t x676 = INT8_MIN;
	int32_t t151 = -1249;

    t151 = (x673^((x674/x675)/x676));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x677 = 1;
	volatile int8_t x678 = INT8_MAX;
	int8_t x679 = INT8_MIN;
	int64_t x680 = INT64_MIN;
	volatile int64_t t152 = -3539LL;

    t152 = (x677^((x678/x679)/x680));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x681 = UINT32_MAX;
	int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MIN;
	volatile int64_t t153 = 375513711218867LL;

    t153 = (x681^((x682/x683)/x684));

    if (t153 != 4294967295LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x685 = UINT8_MAX;
	static volatile int8_t x686 = -1;
	volatile int16_t x687 = -1;
	uint8_t x688 = 7U;
	volatile int32_t t154 = 87995338;

    t154 = (x685^((x686/x687)/x688));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x690 = INT8_MIN;
	uint8_t x691 = UINT8_MAX;
	int16_t x692 = INT16_MIN;
	volatile int32_t t155 = 485;

    t155 = (x689^((x690/x691)/x692));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t x694 = -1;
	int8_t x695 = -2;
	volatile uint8_t x696 = UINT8_MAX;
	volatile int32_t t156 = INT32_MIN;

    t156 = (x693^((x694/x695)/x696));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x697 = INT16_MAX;
	static int64_t x698 = INT64_MIN;
	int8_t x699 = INT8_MIN;
	volatile int64_t x700 = INT64_MIN;
	static int64_t t157 = 26070083443658LL;

    t157 = (x697^((x698/x699)/x700));

    if (t157 != 32767LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x701 = INT8_MAX;
	volatile int16_t x703 = INT16_MAX;
	volatile int32_t t158 = 0;

    t158 = (x701^((x702/x703)/x704));

    if (t158 != -119) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x705 = 19U;
	int64_t x706 = 1LL;
	int64_t x708 = INT64_MAX;
	int64_t t159 = -14025235880LL;

    t159 = (x705^((x706/x707)/x708));

    if (t159 != 19LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x709 = UINT8_MAX;
	int16_t x710 = INT16_MAX;
	static uint16_t x711 = UINT16_MAX;
	int32_t t160 = -8277340;

    t160 = (x709^((x710/x711)/x712));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x713 = 202807072570300LLU;
	uint16_t x714 = UINT16_MAX;
	volatile uint16_t x715 = UINT16_MAX;
	uint32_t x716 = 10U;
	uint64_t t161 = 698746536151LLU;

    t161 = (x713^((x714/x715)/x716));

    if (t161 != 202807072570300LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x717 = 7U;
	static int32_t x718 = INT32_MAX;
	int8_t x719 = INT8_MIN;
	int32_t x720 = INT32_MAX;
	volatile uint32_t t162 = 8374877U;

    t162 = (x717^((x718/x719)/x720));

    if (t162 != 7U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x721 = UINT64_MAX;
	int8_t x722 = 1;
	int16_t x723 = INT16_MIN;
	int32_t x724 = -1;

    t163 = (x721^((x722/x723)/x724));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	static uint16_t x727 = UINT16_MAX;
	uint8_t x728 = UINT8_MAX;
	static volatile int64_t t164 = -5464538LL;

    t164 = (x725^((x726/x727)/x728));

    if (t164 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x729 = 10;
	int16_t x730 = INT16_MAX;
	static int32_t x731 = INT32_MAX;
	int64_t x732 = INT64_MAX;
	int64_t t165 = -83031486LL;

    t165 = (x729^((x730/x731)/x732));

    if (t165 != 10LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x733 = UINT8_MAX;
	int8_t x734 = -54;
	volatile int16_t x735 = INT16_MIN;
	static int32_t x736 = -1;
	int32_t t166 = 47625;

    t166 = (x733^((x734/x735)/x736));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x737 = 466980LLU;
	uint16_t x738 = 31U;
	static int16_t x739 = INT16_MAX;
	volatile int64_t x740 = INT64_MIN;

    t167 = (x737^((x738/x739)/x740));

    if (t167 != 466980LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x741 = INT16_MAX;
	int16_t x742 = INT16_MIN;
	uint16_t x743 = 3U;
	int64_t x744 = -1LL;
	static int64_t t168 = 563121073394617LL;

    t168 = (x741^((x742/x743)/x744));

    if (t168 != 21845LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x746 = INT8_MIN;
	uint64_t x747 = 32945446319595934LLU;
	int16_t x748 = 3269;

    t169 = (x745^((x746/x747)/x748));

    if (t169 != 32767LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x750 = INT8_MIN;
	int8_t x751 = INT8_MAX;
	uint32_t x752 = 5U;
	volatile uint32_t t170 = 5023955U;

    t170 = (x749^((x750/x751)/x752));

    if (t170 != 858982411U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x753 = UINT32_MAX;
	static uint8_t x754 = 84U;
	int32_t x755 = -1;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = (x753^((x754/x755)/x756));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x757 = -1;
	int16_t x758 = INT16_MAX;
	int64_t x759 = INT64_MAX;
	volatile uint32_t x760 = UINT32_MAX;
	static volatile int64_t t172 = 4021909422474760LL;

    t172 = (x757^((x758/x759)/x760));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x761 = 2U;
	int64_t x762 = -5043836923727LL;
	int8_t x763 = INT8_MIN;
	int64_t t173 = -4537586585216552084LL;

    t173 = (x761^((x762/x763)/x764));

    if (t173 != -39404975968LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x765 = 15108U;
	uint8_t x767 = UINT8_MAX;
	static volatile int64_t x768 = INT64_MIN;

    t174 = (x765^((x766/x767)/x768));

    if (t174 != 15108LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x770 = INT64_MIN;
	int32_t x771 = INT32_MIN;
	static volatile int32_t x772 = -41;
	static int64_t t175 = 352828934474LL;

    t175 = (x769^((x770/x771)/x772));

    if (t175 != 104755298LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x773 = INT64_MIN;
	static uint32_t x775 = 56U;
	volatile int64_t t176 = -2757LL;

    t176 = (x773^((x774/x775)/x776));

    if (t176 != -9223372036839436757LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x777 = 3U;
	static volatile int16_t x778 = INT16_MAX;

    t177 = (x777^((x778/x779)/x780));

    if (t177 != 3U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x781 = INT64_MAX;
	int32_t x782 = 15104;
	int16_t x783 = -1;
	volatile int64_t t178 = -2363214765230218LL;

    t178 = (x781^((x782/x783)/x784));

    if (t178 != 9223372036854760703LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x785 = INT8_MAX;
	volatile uint8_t x786 = UINT8_MAX;
	int32_t x787 = INT32_MAX;
	static int8_t x788 = INT8_MAX;

    t179 = (x785^((x786/x787)/x788));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x789 = INT16_MIN;
	int64_t x790 = 264705LL;
	uint8_t x791 = 6U;
	int8_t x792 = 2;
	int64_t t180 = 7LL;

    t180 = (x789^((x790/x791)/x792));

    if (t180 != -10710LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x793 = UINT64_MAX;
	static int16_t x796 = 18;
	volatile uint64_t t181 = 213072733552806611LLU;

    t181 = (x793^((x794/x795)/x796));

    if (t181 != 18446744073709551251LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	uint32_t x798 = 16095U;
	int16_t x799 = INT16_MAX;
	static int32_t x800 = INT32_MIN;
	static volatile uint32_t t182 = 1286847U;

    t182 = (x797^((x798/x799)/x800));

    if (t182 != 65535U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x801 = INT32_MAX;
	int64_t x802 = INT64_MIN;
	uint8_t x803 = UINT8_MAX;
	int32_t x804 = INT32_MAX;
	volatile int64_t t183 = 49116009144293186LL;

    t183 = (x801^((x802/x803)/x804));

    if (t183 != -2130640640LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x806 = INT32_MIN;
	int8_t x807 = INT8_MAX;
	static volatile int32_t x808 = INT32_MIN;
	volatile int64_t t184 = INT64_MIN;

    t184 = (x805^((x806/x807)/x808));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x809 = 133030997841769LLU;
	int32_t x810 = -1303;
	int8_t x812 = -1;
	volatile uint64_t t185 = 7866963078023254426LLU;

    t185 = (x809^((x810/x811)/x812));

    if (t185 != 133030997841769LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x817 = -1;
	static int8_t x818 = 13;
	int8_t x819 = INT8_MAX;
	int64_t x820 = INT64_MIN;

    t186 = (x817^((x818/x819)/x820));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x822 = 64U;
	uint64_t x823 = 3LLU;
	uint8_t x824 = UINT8_MAX;
	static volatile uint64_t t187 = 3691995367LLU;

    t187 = (x821^((x822/x823)/x824));

    if (t187 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x825 = INT32_MIN;
	uint32_t x826 = UINT32_MAX;
	static volatile int64_t t188 = -120179LL;

    t188 = (x825^((x826/x827)/x828));

    if (t188 != -2147483648LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x829 = UINT64_MAX;
	static uint32_t x830 = 79U;
	int64_t x831 = -123293249779LL;
	int64_t x832 = -515604427754778809LL;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (x829^((x830/x831)/x832));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x833 = UINT8_MAX;
	volatile uint16_t x834 = 0U;
	int32_t x836 = INT32_MIN;
	static uint64_t t190 = 809203685LLU;

    t190 = (x833^((x834/x835)/x836));

    if (t190 != 255LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x837 = INT32_MAX;
	static int16_t x838 = INT16_MAX;
	static volatile uint64_t x839 = 803330955361854LLU;
	volatile uint64_t t191 = 11294966LLU;

    t191 = (x837^((x838/x839)/x840));

    if (t191 != 2147483647LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x841 = INT8_MIN;
	static int64_t x842 = -13LL;
	volatile int16_t x843 = INT16_MAX;
	uint32_t x844 = 337800513U;
	static int64_t t192 = 1508171072594094LL;

    t192 = (x841^((x842/x843)/x844));

    if (t192 != -128LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x845 = INT32_MIN;
	int64_t x846 = 16065LL;
	volatile uint32_t x847 = 1610U;
	int16_t x848 = INT16_MAX;

    t193 = (x845^((x846/x847)/x848));

    if (t193 != -2147483648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x849 = INT32_MAX;
	volatile int32_t x851 = 1;
	uint64_t t194 = 362237946403783LLU;

    t194 = (x849^((x850/x851)/x852));

    if (t194 != 2147483647LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x855 = 7709LL;

    t195 = (x853^((x854/x855)/x856));

    if (t195 != 127LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x857 = INT32_MIN;
	int64_t x858 = INT64_MAX;
	volatile uint64_t x860 = 2041782297677101LLU;
	uint64_t t196 = 2532LLU;

    t196 = (x857^((x858/x859)/x860));

    if (t196 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x861 = -15;
	volatile int64_t x863 = INT64_MIN;

    t197 = (x861^((x862/x863)/x864));

    if (t197 != -15LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x865 = -1;
	volatile int64_t x866 = 41452168114367791LL;
	int8_t x867 = -7;

    t198 = (x865^((x866/x867)/x868));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x870 = INT32_MAX;
	int32_t x871 = INT32_MIN;
	int8_t x872 = INT8_MIN;
	int32_t t199 = 160000061;

    t199 = (x869^((x870/x871)/x872));

    if (t199 != 253433) { NG(); } else { ; }
	
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

