
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

uint8_t x4 = 75U;
volatile uint8_t x5 = UINT8_MAX;
static uint64_t x6 = UINT64_MAX;
volatile uint64_t t1 = 6LLU;
uint64_t x9 = UINT64_MAX;
static int16_t x11 = -300;
volatile uint64_t t4 = 50LLU;
int8_t x24 = INT8_MIN;
int32_t t5 = 1;
uint64_t t8 = 962863LLU;
volatile int16_t x40 = -1;
volatile uint64_t t10 = 500954353514LLU;
uint64_t x45 = UINT64_MAX;
int8_t x46 = INT8_MAX;
static uint64_t x51 = 44116075607LLU;
int16_t x52 = INT16_MIN;
uint64_t t12 = 1431306897LLU;
uint8_t x64 = 70U;
int64_t x66 = -1LL;
static int8_t x77 = -1;
static volatile int64_t x84 = 874569232095473392LL;
int16_t x87 = -1;
uint64_t t19 = 115516783960818LLU;
static int16_t x89 = -1;
int8_t x90 = INT8_MIN;
int8_t x93 = INT8_MAX;
volatile uint64_t x105 = 124958584783LLU;
int64_t x125 = INT64_MAX;
volatile uint16_t x135 = 179U;
volatile int32_t t30 = -1;
uint8_t x139 = UINT8_MAX;
uint32_t x141 = UINT32_MAX;
static int8_t x145 = INT8_MAX;
uint64_t x150 = UINT64_MAX;
volatile uint64_t x152 = 5439256LLU;
volatile int64_t x153 = INT64_MIN;
uint32_t x157 = 1252500980U;
uint8_t x166 = 23U;
int8_t x168 = -1;
int8_t x180 = -1;
static volatile uint32_t t41 = 132649U;
uint32_t x185 = 8266339U;
int64_t t42 = -28LL;
static volatile int64_t x190 = -1LL;
volatile int32_t x192 = INT32_MIN;
static volatile int64_t t43 = -282489608063331321LL;
volatile uint8_t x195 = UINT8_MAX;
int32_t x200 = INT32_MAX;
int8_t x205 = INT8_MIN;
uint64_t x206 = UINT64_MAX;
volatile int32_t t48 = 22;
uint16_t x216 = UINT16_MAX;
static int16_t x227 = INT16_MIN;
static int64_t t52 = -7083913LL;
int64_t x230 = 1LL;
int32_t x231 = -5640278;
int8_t x237 = INT8_MIN;
static int8_t x240 = 7;
int32_t x243 = -1351277;
volatile int64_t t56 = -1LL;
int16_t x247 = INT16_MIN;
volatile int16_t x250 = INT16_MAX;
volatile int64_t x253 = INT64_MAX;
volatile int8_t x269 = INT8_MIN;
uint16_t x277 = 1U;
volatile int32_t t64 = 8049255;
static int8_t x289 = INT8_MIN;
int16_t x294 = INT16_MIN;
volatile int64_t t66 = 171287082094646423LL;
int16_t x298 = INT16_MIN;
uint8_t x301 = 39U;
int16_t x304 = INT16_MIN;
int64_t t68 = -985LL;
uint64_t x308 = 133273584LLU;
static int64_t x313 = -1LL;
int16_t x314 = INT16_MIN;
uint64_t t71 = 286961062190LLU;
static int16_t x318 = INT16_MIN;
static int32_t x320 = INT32_MIN;
uint64_t x321 = UINT64_MAX;
uint32_t x327 = 427611963U;
static int32_t x332 = -1564;
int8_t x337 = 0;
uint32_t x344 = 7U;
uint16_t x345 = UINT16_MAX;
static int8_t x350 = INT8_MIN;
int32_t x353 = 23528419;
static uint8_t x354 = 0U;
volatile uint8_t x358 = 93U;
int16_t x359 = INT16_MAX;
int16_t x362 = INT16_MAX;
int64_t x364 = INT64_MAX;
uint64_t x367 = UINT64_MAX;
volatile uint64_t t84 = 1LLU;
uint16_t x370 = 19523U;
uint8_t x372 = UINT8_MAX;
int32_t x375 = 97;
int32_t x383 = -1;
int64_t x392 = -1LL;
int8_t x411 = 7;
int64_t x421 = INT64_MIN;
int64_t t92 = -112380486569326675LL;
uint64_t x428 = UINT64_MAX;
int8_t x433 = -15;
static int8_t x435 = 41;
int16_t x436 = 1;
static int64_t t96 = INT64_MIN;
int16_t x444 = -65;
int32_t t97 = -134;
uint8_t x448 = 8U;
uint64_t x449 = 1074599099954LLU;
static volatile uint64_t t101 = 46339108029698983LLU;
uint64_t x469 = 18913741041695LLU;
int16_t x474 = 0;
int16_t x477 = INT16_MIN;
uint16_t x478 = UINT16_MAX;
volatile uint8_t x480 = 11U;
volatile uint64_t t105 = 8448919601122LLU;
static int8_t x500 = 1;
int64_t x510 = -1LL;
static int8_t x511 = -28;
int32_t x516 = 243766;
uint64_t x521 = 362690LLU;
uint16_t x523 = UINT16_MAX;
int16_t x526 = 1347;
uint64_t x530 = UINT64_MAX;
int16_t x532 = 9870;
static uint64_t x544 = UINT64_MAX;
int8_t x546 = INT8_MIN;
int8_t x548 = 2;
static volatile int16_t x555 = INT16_MIN;
int8_t x556 = 1;
uint8_t x567 = UINT8_MAX;
volatile uint64_t x570 = 1LLU;
int32_t t128 = 6097687;
static uint32_t x581 = UINT32_MAX;
static int64_t x582 = -1LL;
volatile int64_t t129 = 64371998348372LL;
int64_t x589 = -5610320277058407LL;
static volatile uint64_t t132 = 1LLU;
volatile int64_t x601 = INT64_MIN;
int64_t t133 = -274737858562763LL;
int16_t x606 = 0;
int64_t x612 = INT64_MIN;
int16_t x618 = -1;
volatile int16_t x627 = INT16_MAX;
volatile int32_t x630 = INT32_MIN;
int32_t x635 = INT32_MAX;
volatile int32_t x639 = INT32_MIN;
volatile int16_t x643 = INT16_MIN;
volatile int64_t x645 = INT64_MAX;
static int64_t x646 = -1LL;
int8_t x647 = INT8_MIN;
static volatile int16_t x657 = -1;
uint16_t x660 = UINT16_MAX;
int16_t x662 = INT16_MIN;
int64_t t148 = -993546114LL;
int8_t x677 = -1;
static int32_t x680 = -47489839;
uint32_t x681 = 1037248350U;
volatile int8_t x685 = INT8_MIN;
uint32_t x690 = 6511U;
uint32_t x702 = 42373U;
int32_t x707 = INT32_MIN;
volatile int8_t x708 = INT8_MIN;
static volatile int64_t t159 = -129LL;
int8_t x715 = -3;
volatile uint64_t t162 = 107395LLU;
uint32_t x722 = 403776583U;
int16_t x727 = INT16_MIN;
volatile int64_t t164 = -236578855196186LL;
volatile int16_t x731 = -1;
static uint16_t x733 = 2U;
int32_t t166 = -64;
volatile int32_t x739 = 73;
volatile int16_t x740 = -1;
int16_t x747 = 0;
uint64_t t168 = 122837318601583LLU;
int64_t x758 = -1LL;
int64_t x759 = -1LL;
uint32_t x761 = 3U;
volatile uint8_t x764 = 1U;
uint32_t x765 = 273863413U;
uint64_t t172 = 1609215696389LLU;
uint32_t x770 = 377717U;
volatile uint64_t x788 = 47524127910LLU;
static volatile int32_t x796 = INT32_MIN;
volatile int64_t t177 = -67118358665LL;
int16_t x797 = INT16_MIN;
uint32_t t178 = 252U;
volatile int8_t x807 = -1;
static uint32_t x808 = UINT32_MAX;
int8_t x812 = INT8_MAX;
volatile uint64_t t184 = 98765793878LLU;
uint32_t x827 = 101U;
volatile int64_t t185 = 47039940848526LL;
uint16_t x838 = UINT16_MAX;
volatile int32_t t188 = -1;
uint64_t x845 = 14444LLU;
int16_t x856 = INT16_MIN;
volatile int32_t t192 = -5427;
static int32_t x865 = 28189;
int32_t x870 = -1;
uint32_t x871 = 824720U;
volatile uint8_t x882 = 9U;
volatile int32_t x883 = -1;


void f0(void) {
    	static int64_t x1 = INT64_MAX;
	int8_t x2 = -1;
	int16_t x3 = INT16_MIN;
	static volatile int64_t t0 = 10793LL;

    t0 = (x1^((x2+x3)|x4));

    if (t0 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = 6005857959215013LL;
	static uint64_t x8 = UINT64_MAX;

    t1 = (x5^((x6+x7)|x8));

    if (t1 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = -2783953;
	static int16_t x12 = -1;
	volatile uint64_t t2 = 1LLU;

    t2 = (x9^((x10+x11)|x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	volatile uint64_t x15 = 151013169388LLU;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 1601601505LLU;

    t3 = (x13^((x14+x15)|x16));

    if (t3 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 187808190460463LLU;
	int64_t x18 = -4445551LL;
	int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MAX;

    t4 = (x17^((x18+x19)|x20));

    if (t4 != 18446556265519091152LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	uint16_t x22 = 1U;
	int16_t x23 = 0;

    t5 = (x21^((x22+x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile uint32_t x26 = 0U;
	uint64_t x27 = 2100387346LLU;
	volatile int8_t x28 = INT8_MIN;
	uint64_t t6 = 1793LLU;

    t6 = (x25^((x26+x27)|x28));

    if (t6 != 18LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static uint32_t x30 = 17U;
	volatile int8_t x31 = INT8_MIN;
	int16_t x32 = -1;
	int64_t t7 = 12944480305109LL;

    t7 = (x29^((x30+x31)|x32));

    if (t7 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 12429499962LLU;
	volatile int16_t x34 = INT16_MAX;
	static uint64_t x35 = 2053321017LLU;
	int16_t x36 = 1896;

    t8 = (x33^((x34+x35)|x36));

    if (t8 != 11252836674LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 1952;
	static int64_t x38 = -1LL;
	static int8_t x39 = INT8_MIN;
	int64_t t9 = -1LL;

    t9 = (x37^((x38+x39)|x40));

    if (t9 != -1953LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -527;
	volatile uint64_t x42 = 468LLU;
	int16_t x43 = 69;
	uint32_t x44 = UINT32_MAX;

    t10 = (x41^((x42+x43)|x44));

    if (t10 != 18446744069414584846LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -1;
	static volatile uint64_t t11 = 5028667LLU;

    t11 = (x45^((x46+x47)|x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int16_t x50 = 0;

    t12 = (x49^((x50+x51)|x52));

    if (t12 != 7127LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 12638165LLU;
	uint32_t x58 = UINT32_MAX;
	static volatile uint16_t x59 = 0U;
	uint64_t x60 = 1569994008965132669LLU;
	volatile uint64_t t13 = 86057LLU;

    t13 = (x57^((x58+x59)|x60));

    if (t13 != 1569994010498377770LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 17534513330751LLU;
	uint16_t x62 = 3U;
	uint16_t x63 = 1U;
	static uint64_t t14 = 218102901741884496LLU;

    t14 = (x61^((x62+x63)|x64));

    if (t14 != 17534513330809LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x65 = 102861223255653LLU;
	static int8_t x67 = -19;
	static uint16_t x68 = UINT16_MAX;
	static uint64_t t15 = 5LLU;

    t15 = (x65^((x66+x67)|x68));

    if (t15 != 18446641212486295962LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = -1;
	int8_t x74 = -10;
	int32_t x75 = 14160811;
	int64_t x76 = -1LL;
	int64_t t16 = 10414136LL;

    t16 = (x73^((x74+x75)|x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x78 = -1LL;
	int64_t x79 = 24LL;
	uint8_t x80 = 63U;
	int64_t t17 = -28671LL;

    t17 = (x77^((x78+x79)|x80));

    if (t17 != -64LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x81 = INT64_MIN;
	uint64_t x82 = 7446614920220041LLU;
	uint64_t x83 = 1277829LLU;
	volatile uint64_t t18 = 6LLU;

    t18 = (x81^((x82+x83)|x84));

    if (t18 != 10104807341194866686LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = INT32_MIN;
	uint64_t x86 = UINT64_MAX;
	uint64_t x88 = 5029168723LLU;

    t19 = (x85^((x86+x87)|x88));

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x91 = 29U;
	static volatile uint8_t x92 = UINT8_MAX;
	int32_t t20 = 1;

    t20 = (x89^((x90+x91)|x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x94 = 17710U;
	static int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	volatile int32_t t21 = 2939;

    t21 = (x93^((x94+x95)|x96));

    if (t21 != -15023) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 42122324594573LLU;
	int16_t x98 = INT16_MIN;
	volatile uint8_t x99 = 8U;
	volatile int32_t x100 = INT32_MIN;
	volatile uint64_t t22 = 1078LLU;

    t22 = (x97^((x98+x99)|x100));

    if (t22 != 18446701951384964997LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -1;
	volatile int64_t x102 = 1505LL;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 6U;
	volatile uint64_t t23 = 3120457943295LLU;

    t23 = (x101^((x102+x103)|x104));

    if (t23 != 18446744073709550105LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x106 = 0U;
	int64_t x107 = 4052298936LL;
	uint64_t x108 = UINT64_MAX;
	uint64_t t24 = 111752248239171LLU;

    t24 = (x105^((x106+x107)|x108));

    if (t24 != 18446743948750966832LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = 1;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 5U;
	static int64_t x112 = 12963871507976940LL;
	volatile int64_t t25 = 6169124914268585LL;

    t25 = (x109^((x110+x111)|x112));

    if (t25 != -1943694612LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = 10018532LL;
	int64_t x116 = INT64_MAX;
	volatile uint64_t t26 = 80769052049199LLU;

    t26 = (x113^((x114+x115)|x116));

    if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = 2229462116423963723LLU;
	uint16_t x120 = 3U;
	uint64_t t27 = 4992875LLU;

    t27 = (x117^((x118+x119)|x120));

    if (t27 != 6993909920430812084LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x126 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MIN;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x125^((x126+x127)|x128));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	static volatile int8_t x132 = INT8_MIN;
	volatile int32_t t29 = 1795511;

    t29 = (x129^((x130+x131)|x132));

    if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	int16_t x136 = INT16_MIN;

    t30 = (x133^((x134+x135)|x136));

    if (t30 != 178) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	int8_t x138 = 1;
	uint16_t x140 = 1U;
	int32_t t31 = -12080530;

    t31 = (x137^((x138+x139)|x140));

    if (t31 != -2147483391) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x142 = UINT64_MAX;
	int32_t x143 = 9513109;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t32 = 235864LLU;

    t32 = (x141^((x142+x143)|x144));

    if (t32 != 18446744069414606699LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x146 = 1863;
	int32_t x147 = -1;
	static int64_t x148 = 2864300LL;
	volatile int64_t t33 = 105544575116LL;

    t33 = (x145^((x146+x147)|x148));

    if (t33 != 2865041LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = INT8_MIN;
	uint64_t x151 = 21088370262174333LLU;
	static volatile uint64_t t34 = 90233001784425185LLU;

    t34 = (x149^((x150+x151)|x152));

    if (t34 != 18425655703447339260LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x154 = 77724U;
	uint8_t x155 = UINT8_MAX;
	uint8_t x156 = 13U;
	static int64_t t35 = 25LL;

    t35 = (x153^((x154+x155)|x156));

    if (t35 != -9223372036854697825LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x158 = UINT32_MAX;
	volatile int8_t x159 = INT8_MAX;
	int16_t x160 = 6762;
	uint32_t t36 = 321724796U;

    t36 = (x157^((x158+x159)|x160));

    if (t36 != 1252507530U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = 14810LLU;
	static int8_t x163 = INT8_MIN;
	uint16_t x164 = 69U;
	uint64_t t37 = 261730097518LLU;

    t37 = (x161^((x162+x163)|x164));

    if (t37 != 50848LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -9;
	int64_t x167 = 55683LL;
	volatile int64_t t38 = -71611978949331665LL;

    t38 = (x165^((x166+x167)|x168));

    if (t38 != 8LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = 3;
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = UINT8_MAX;
	uint64_t x176 = 4109894721336LLU;
	uint64_t t39 = 7703432LLU;

    t39 = (x173^((x174+x175)|x176));

    if (t39 != 18446744073709527036LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x177 = 1714698245U;
	static int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	uint32_t t40 = 25880909U;

    t40 = (x177^((x178+x179)|x180));

    if (t40 != 2580269050U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x181 = 332422U;
	volatile int8_t x182 = INT8_MIN;
	int16_t x183 = -1;
	int8_t x184 = -1;

    t41 = (x181^((x182+x183)|x184));

    if (t41 != 4294634873U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x186 = INT64_MIN;
	static uint16_t x187 = UINT16_MAX;
	volatile int16_t x188 = -215;

    t42 = (x185^((x186+x187)|x188));

    if (t42 != -8266340LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x189 = -6659;
	uint16_t x191 = UINT16_MAX;

    t43 = (x189^((x190+x191)|x192));

    if (t43 != 2147424771LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = INT16_MIN;
	static int16_t x194 = 1;
	static int64_t x196 = 599621522LL;
	volatile int64_t t44 = -2LL;

    t44 = (x193^((x194+x195)|x196));

    if (t44 != -599588974LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x197 = -1LL;
	uint32_t x198 = UINT32_MAX;
	static int32_t x199 = INT32_MAX;
	volatile int64_t t45 = -4737191LL;

    t45 = (x197^((x198+x199)|x200));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = INT8_MIN;
	static uint64_t x202 = 53610172LLU;
	int64_t x203 = -1672376219493301LL;
	int16_t x204 = -155;
	volatile uint64_t t46 = 29942LLU;

    t46 = (x201^((x202+x203)|x204));

    if (t46 != 231LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x207 = 4U;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (x205^((x206+x207)|x208));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x209 = -1;
	int16_t x210 = -4050;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 15U;

    t48 = (x209^((x210+x211)|x212));

    if (t48 != 36816) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x213 = 4126434324734374LLU;
	int32_t x214 = -1;
	uint32_t x215 = 1U;
	volatile uint64_t t49 = 4773301688499LLU;

    t49 = (x213^((x214+x215)|x216));

    if (t49 != 4126434324749913LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x217 = 255794489U;
	volatile int32_t x218 = 26;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = -1;
	uint32_t t50 = 1U;

    t50 = (x217^((x218+x219)|x220));

    if (t50 != 4039172806U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x221 = UINT64_MAX;
	int16_t x222 = -233;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;
	volatile uint64_t t51 = 43LLU;

    t51 = (x221^((x222+x223)|x224));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = -1;
	uint32_t x226 = 7U;
	int64_t x228 = 62181914901LL;

    t52 = (x225^((x226+x227)|x228));

    if (t52 != -64424491288LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = 2;
	volatile int32_t x232 = -1;
	static volatile int64_t t53 = -1LL;

    t53 = (x229^((x230+x231)|x232));

    if (t53 != -3LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x233 = 71U;
	int32_t x234 = -19690936;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t54 = 56U;

    t54 = (x233^((x234+x235)|x236));

    if (t54 != 4294967224U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x238 = -4384974857633LL;
	int64_t x239 = 15LL;
	static volatile int64_t t55 = -413509506308LL;

    t55 = (x237^((x238+x239)|x240));

    if (t55 != 4384974857711LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = UINT32_MAX;
	int64_t x242 = -42775069471LL;
	int8_t x244 = INT8_MIN;

    t56 = (x241^((x242+x243)|x244));

    if (t56 != -4294967285LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = -6651398299672LL;
	int8_t x246 = -6;
	uint64_t x248 = UINT64_MAX;
	uint64_t t57 = 3LLU;

    t57 = (x245^((x246+x247)|x248));

    if (t57 != 6651398299671LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x249 = 22032U;
	int32_t x251 = INT32_MIN;
	int32_t x252 = -661866;
	int32_t t58 = -158;

    t58 = (x249^((x250+x251)|x252));

    if (t58 != -677393) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x254 = INT32_MIN;
	static volatile uint8_t x255 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	static int64_t t59 = INT64_MIN;

    t59 = (x253^((x254+x255)|x256));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x261 = 0;
	int8_t x262 = INT8_MIN;
	int32_t x263 = 210817;
	uint64_t x264 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

    t60 = (x261^((x262+x263)|x264));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x270 = UINT32_MAX;
	int32_t x271 = -1;
	int32_t x272 = INT32_MIN;
	static uint32_t t61 = 5U;

    t61 = (x269^((x270+x271)|x272));

    if (t61 != 126U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	uint32_t x275 = 1071706U;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t62 = 826700569415590LLU;

    t62 = (x273^((x274+x275)|x276));

    if (t62 != 18446744069414584358LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t63 = 128531;

    t63 = (x277^((x278+x279)|x280));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = 3;
	volatile int8_t x286 = INT8_MAX;
	static int32_t x287 = 113;
	uint16_t x288 = 338U;

    t64 = (x285^((x286+x287)|x288));

    if (t64 != 497) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x290 = INT8_MIN;
	static volatile uint16_t x291 = 7U;
	static int16_t x292 = -1;
	volatile int32_t t65 = 59307;

    t65 = (x289^((x290+x291)|x292));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = 45888815453041334LL;
	static volatile int64_t x295 = -4340146LL;
	static uint32_t x296 = 22171U;

    t66 = (x293^((x294+x295)|x296));

    if (t66 != -45888815457328023LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x299 = -8;
	static uint16_t x300 = 1032U;
	int32_t t67 = -1644171;

    t67 = (x297^((x298+x299)|x300));

    if (t67 != -32889) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x302 = INT16_MIN;
	int64_t x303 = 21LL;

    t68 = (x301^((x302+x303)|x304));

    if (t68 != -32718LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	volatile int8_t x307 = 27;
	volatile uint64_t t69 = 279169329001499886LLU;

    t69 = (x305^((x306+x307)|x308));

    if (t69 != 133273595LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x309 = 29565011;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = 54;
	int8_t x312 = -1;
	volatile int64_t t70 = -157304633296455LL;

    t70 = (x309^((x310+x311)|x312));

    if (t70 != -29565012LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x315 = -3;
	uint64_t x316 = UINT64_MAX;

    t71 = (x313^((x314+x315)|x316));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x317 = INT64_MIN;
	uint16_t x319 = 304U;
	int64_t t72 = -67455922635956460LL;

    t72 = (x317^((x318+x319)|x320));

    if (t72 != 9223372036854743344LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x322 = -928262395837LL;
	int16_t x323 = INT16_MAX;
	static uint8_t x324 = 13U;
	volatile uint64_t t73 = 6189558941245LLU;

    t73 = (x321^((x322+x323)|x324));

    if (t73 != 928262363056LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = 229878426LL;
	static volatile int8_t x326 = INT8_MIN;
	int8_t x328 = -1;
	volatile int64_t t74 = -1915318269391LL;

    t74 = (x325^((x326+x327)|x328));

    if (t74 != 4065088869LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x329 = 12LLU;
	int64_t x330 = INT64_MAX;
	volatile int16_t x331 = INT16_MIN;
	static uint64_t t75 = 243910753368591005LLU;

    t75 = (x329^((x330+x331)|x332));

    if (t75 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x333 = INT8_MIN;
	static volatile int64_t x334 = -33955365595237LL;
	uint16_t x335 = 2479U;
	int64_t x336 = 1821LL;
	static int64_t t76 = 429741262LL;

    t76 = (x333^((x334+x335)|x336));

    if (t76 != 33955365591263LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x338 = -1;
	volatile int8_t x339 = 11;
	static uint16_t x340 = 74U;
	volatile int32_t t77 = -10;

    t77 = (x337^((x338+x339)|x340));

    if (t77 != 74) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x341 = -63911;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int64_t t78 = 168871021LL;

    t78 = (x341^((x342+x343)|x344));

    if (t78 != 9223372036854711974LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x346 = INT32_MAX;
	uint64_t x347 = 190218968385938LLU;
	int8_t x348 = INT8_MAX;
	uint64_t t79 = 6LLU;

    t79 = (x345^((x346+x347)|x348));

    if (t79 != 190221115897344LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x349 = -27094;
	static int8_t x351 = -7;
	uint8_t x352 = 0U;
	volatile int32_t t80 = -126503;

    t80 = (x349^((x350+x351)|x352));

    if (t80 != 26963) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x355 = 1807210427LLU;
	uint32_t x356 = 8664446U;
	static volatile uint64_t t81 = 31458LLU;

    t81 = (x353^((x354+x355)|x356));

    if (t81 != 1792078876LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x357 = 89U;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t82 = 6133LLU;

    t82 = (x357^((x358+x359)|x360));

    if (t82 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x361 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	static volatile int64_t t83 = 23522216LL;

    t83 = (x361^((x362+x363)|x364));

    if (t83 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = 6;
	int64_t x366 = INT64_MAX;
	int64_t x368 = -1LL;

    t84 = (x365^((x366+x367)|x368));

    if (t84 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x369 = 12U;
	static int64_t x371 = INT64_MIN;
	int64_t t85 = 2137030228567412550LL;

    t85 = (x369^((x370+x371)|x372));

    if (t85 != -9223372036854756109LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x373 = 36982U;
	volatile int16_t x374 = -2;
	int16_t x376 = -6360;
	volatile uint32_t t86 = 114410710U;

    t86 = (x373^((x374+x375)|x376));

    if (t86 != 4294932233U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x381 = INT64_MAX;
	int16_t x382 = 141;
	int8_t x384 = INT8_MIN;
	static int64_t t87 = 9828153LL;

    t87 = (x381^((x382+x383)|x384));

    if (t87 != -9223372036854775693LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = -1LL;
	static volatile uint64_t x386 = 181653877001709769LLU;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = 243970602U;
	volatile uint64_t t88 = 3114943LLU;

    t88 = (x385^((x386+x387)|x388));

    if (t88 != 18265090196640171285LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = INT64_MIN;
	static int32_t x390 = -189084811;
	uint32_t x391 = 9480956U;
	int64_t t89 = INT64_MAX;

    t89 = (x389^((x390+x391)|x392));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x393 = -9276182;
	static volatile uint8_t x394 = 26U;
	uint16_t x395 = 1U;
	int16_t x396 = 1;
	int32_t t90 = 101;

    t90 = (x393^((x394+x395)|x396));

    if (t90 != -9276175) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x409 = UINT8_MAX;
	int16_t x410 = -1;
	int16_t x412 = INT16_MIN;
	static int32_t t91 = 2529502;

    t91 = (x409^((x410+x411)|x412));

    if (t91 != -32519) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x422 = UINT32_MAX;
	uint32_t x423 = UINT32_MAX;
	uint16_t x424 = 11916U;

    t92 = (x421^((x422+x423)|x424));

    if (t92 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x425 = 11U;
	int16_t x426 = INT16_MIN;
	static volatile int16_t x427 = 5;
	volatile uint64_t t93 = 24736280LLU;

    t93 = (x425^((x426+x427)|x428));

    if (t93 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x429 = 1637072LL;
	volatile int8_t x430 = INT8_MAX;
	uint32_t x431 = UINT32_MAX;
	uint8_t x432 = 1U;
	volatile int64_t t94 = -30LL;

    t94 = (x429^((x430+x431)|x432));

    if (t94 != 1637039LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x434 = UINT32_MAX;
	volatile uint32_t t95 = 54421439U;

    t95 = (x433^((x434+x435)|x436));

    if (t95 != 4294967256U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x437 = -1;
	int16_t x438 = 756;
	int32_t x439 = -1;
	volatile int64_t x440 = INT64_MAX;

    t96 = (x437^((x438+x439)|x440));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x441 = -1;
	static int8_t x442 = INT8_MAX;
	volatile int8_t x443 = 0;

    t97 = (x441^((x442+x443)|x444));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x445 = 53;
	uint32_t x446 = 3961U;
	volatile int8_t x447 = 0;
	static volatile uint32_t t98 = 465U;

    t98 = (x445^((x446+x447)|x448));

    if (t98 != 3916U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x450 = -1;
	volatile int8_t x451 = -11;
	int16_t x452 = INT16_MIN;
	volatile uint64_t t99 = 899027609LLU;

    t99 = (x449^((x450+x451)|x452));

    if (t99 != 18446742999110451654LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x461 = 27365410088958LLU;
	int32_t x462 = -1519;
	uint32_t x463 = 12725765U;
	static int32_t x464 = INT32_MAX;
	volatile uint64_t t100 = 400976LLU;

    t100 = (x461^((x462+x463)|x464));

    if (t100 != 27367505647617LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x465 = 6949700547406LLU;
	static int8_t x466 = INT8_MIN;
	static volatile uint32_t x467 = 6002132U;
	int16_t x468 = INT16_MAX;

    t101 = (x465^((x466+x467)|x468));

    if (t101 != 6949696785585LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x470 = INT8_MAX;
	static uint8_t x471 = 80U;
	static int16_t x472 = INT16_MAX;
	volatile uint64_t t102 = 32061517159885226LLU;

    t102 = (x469^((x470+x471)|x472));

    if (t102 != 18913741017056LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = INT64_MIN;
	int32_t x475 = -1;
	int64_t x476 = INT64_MIN;
	int64_t t103 = INT64_MAX;

    t103 = (x473^((x474+x475)|x476));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x479 = UINT16_MAX;
	static volatile int32_t t104 = -111651;

    t104 = (x477^((x478+x479)|x480));

    if (t104 != -98305) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x482 = -29;
	static uint64_t x483 = 98781LLU;
	static int8_t x484 = -2;

    t105 = (x481^((x482+x483)|x484));

    if (t105 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x485 = INT8_MAX;
	uint32_t x486 = 31U;
	volatile int8_t x487 = -8;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t106 = 3476LLU;

    t106 = (x485^((x486+x487)|x488));

    if (t106 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x489 = INT16_MAX;
	int64_t x490 = 10224748LL;
	int32_t x491 = -39349;
	uint64_t x492 = 7577939492303580845LLU;
	volatile uint64_t t107 = 9020726413951137LLU;

    t107 = (x489^((x490+x491)|x492));

    if (t107 != 7577939492313207104LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x493 = INT8_MIN;
	uint8_t x494 = 5U;
	int64_t x495 = INT64_MIN;
	uint64_t x496 = 12707978799072LLU;
	uint64_t t108 = 2646984815LLU;

    t108 = (x493^((x494+x495)|x496));

    if (t108 != 9223359328875976805LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x497 = -1LL;
	int16_t x498 = INT16_MAX;
	static int8_t x499 = INT8_MIN;
	int64_t t109 = -1859665944LL;

    t109 = (x497^((x498+x499)|x500));

    if (t109 != -32640LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x505 = -1LL;
	int64_t x506 = INT64_MIN;
	int16_t x507 = 47;
	uint32_t x508 = 34U;
	volatile int64_t t110 = 956LL;

    t110 = (x505^((x506+x507)|x508));

    if (t110 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x509 = INT32_MIN;
	uint32_t x512 = 247210U;
	int64_t t111 = 959626082891850678LL;

    t111 = (x509^((x510+x511)|x512));

    if (t111 != 2147483627LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x513 = INT8_MAX;
	uint8_t x514 = 0U;
	static int8_t x515 = INT8_MIN;
	volatile int32_t t112 = 51;

    t112 = (x513^((x514+x515)|x516));

    if (t112 != -55) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x517 = 15;
	int8_t x518 = 17;
	int8_t x519 = 2;
	static volatile int64_t x520 = INT64_MAX;
	volatile int64_t t113 = -748651632LL;

    t113 = (x517^((x518+x519)|x520));

    if (t113 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x522 = INT64_MIN;
	int32_t x524 = -1;
	volatile uint64_t t114 = 7707495LLU;

    t114 = (x521^((x522+x523)|x524));

    if (t114 != 18446744073709188925LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x525 = 0;
	int64_t x527 = INT64_MIN;
	volatile int64_t x528 = INT64_MIN;
	volatile int64_t t115 = -4056251LL;

    t115 = (x525^((x526+x527)|x528));

    if (t115 != -9223372036854774461LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = INT64_MIN;
	int32_t x531 = INT32_MIN;
	uint64_t t116 = 195222484891498LLU;

    t116 = (x529^((x530+x531)|x532));

    if (t116 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x533 = 431943638433704LLU;
	int8_t x534 = INT8_MIN;
	int32_t x535 = INT32_MAX;
	volatile uint32_t x536 = 79U;
	uint64_t t117 = 239512843011LLU;

    t117 = (x533^((x534+x535)|x536));

    if (t117 != 431943936000215LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = INT64_MIN;
	uint32_t x538 = 25U;
	int16_t x539 = INT16_MAX;
	uint8_t x540 = 94U;
	int64_t t118 = 243056590096835573LL;

    t118 = (x537^((x538+x539)|x540));

    if (t118 != -9223372036854742946LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x541 = UINT64_MAX;
	volatile int32_t x542 = INT32_MIN;
	int64_t x543 = -103451397LL;
	volatile uint64_t t119 = 53316LLU;

    t119 = (x541^((x542+x543)|x544));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x545 = INT8_MIN;
	int32_t x547 = INT32_MAX;
	int32_t t120 = 446895217;

    t120 = (x545^((x546+x547)|x548));

    if (t120 != -2147483393) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x549 = INT32_MIN;
	static volatile int32_t x550 = 2220;
	int64_t x551 = -1LL;
	static uint64_t x552 = UINT64_MAX;
	uint64_t t121 = 36515LLU;

    t121 = (x549^((x550+x551)|x552));

    if (t121 != 2147483647LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x553 = -1;
	uint64_t x554 = 23LLU;
	uint64_t t122 = 526LLU;

    t122 = (x553^((x554+x555)|x556));

    if (t122 != 32744LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x557 = 0U;
	volatile int16_t x558 = -7130;
	uint8_t x559 = UINT8_MAX;
	uint32_t x560 = 28068250U;
	uint32_t t123 = 26U;

    t123 = (x557^((x558+x559)|x560));

    if (t123 != 4294962623U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x561 = INT64_MAX;
	uint8_t x562 = 8U;
	static int16_t x563 = INT16_MAX;
	uint32_t x564 = 700U;
	int64_t t124 = -9347590001608LL;

    t124 = (x561^((x562+x563)|x564));

    if (t124 != 9223372036854742336LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x565 = 402895U;
	int16_t x566 = 0;
	int16_t x568 = INT16_MIN;
	uint32_t t125 = 1623U;

    t125 = (x565^((x566+x567)|x568));

    if (t125 != 4294550832U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x569 = UINT16_MAX;
	uint64_t x571 = 513982808426LLU;
	int64_t x572 = 4289118477971583384LL;
	uint64_t t126 = 36321000741LLU;

    t126 = (x569^((x570+x571)|x572));

    if (t126 != 4289118959020510724LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = INT64_MIN;
	static int8_t x574 = -1;
	volatile int32_t x575 = 42;
	volatile uint32_t x576 = 4673534U;
	int64_t t127 = -9757202098LL;

    t127 = (x573^((x574+x575)|x576));

    if (t127 != -9223372036850102273LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MIN;
	int32_t x579 = -1;
	static int32_t x580 = -209594;

    t128 = (x577^((x578+x579)|x580));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;

    t129 = (x581^((x582+x583)|x584));

    if (t129 != -4294967296LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x585 = 15;
	uint8_t x586 = 47U;
	int32_t x587 = -1;
	int64_t x588 = INT64_MAX;
	int64_t t130 = -387003204436LL;

    t130 = (x585^((x586+x587)|x588));

    if (t130 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x590 = UINT16_MAX;
	int64_t x591 = -814073618238809LL;
	static int64_t x592 = -157803LL;
	volatile int64_t t131 = 535769LL;

    t131 = (x589^((x590+x591)|x592));

    if (t131 != 5610320277060398LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x597 = 157011552019LLU;
	int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MIN;

    t132 = (x597^((x598+x599)|x600));

    if (t132 != 18446743916697999596LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x602 = INT8_MIN;
	int64_t x603 = 77321LL;
	static int64_t x604 = -3721381549764626579LL;

    t133 = (x601^((x602+x603)|x604));

    if (t133 != 5501990487090216941LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x605 = -1LL;
	uint16_t x607 = 40U;
	int32_t x608 = INT32_MIN;
	volatile int64_t t134 = -1603131671937LL;

    t134 = (x605^((x606+x607)|x608));

    if (t134 != 2147483607LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x609 = -792097LL;
	int16_t x610 = -1;
	int8_t x611 = 23;
	int64_t t135 = -916LL;

    t135 = (x609^((x610+x611)|x612));

    if (t135 != 9223372036853983689LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x614 = INT32_MAX;
	uint32_t x615 = 1U;
	int32_t x616 = -1;
	static volatile uint64_t t136 = 19763524927LLU;

    t136 = (x613^((x614+x615)|x616));

    if (t136 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x617 = 276834154509770030LL;
	volatile uint16_t x619 = UINT16_MAX;
	static volatile int8_t x620 = -4;
	int64_t t137 = -2801851399463LL;

    t137 = (x617^((x618+x619)|x620));

    if (t137 != -276834154509770032LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x621 = UINT16_MAX;
	uint16_t x622 = UINT16_MAX;
	int32_t x623 = INT32_MIN;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t138 = 1910;

    t138 = (x621^((x622+x623)|x624));

    if (t138 != -65536) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x625 = 196345694LLU;
	int64_t x626 = -4630699906LL;
	int64_t x628 = INT64_MIN;
	uint64_t t139 = 2094271430LLU;

    t139 = (x625^((x626+x627)|x628));

    if (t139 != 18446744068882849571LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x629 = -1;
	uint32_t x631 = 158062U;
	uint32_t x632 = 256234U;
	uint32_t t140 = 370U;

    t140 = (x629^((x630+x631)|x632));

    if (t140 != 2147227153U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x633 = UINT16_MAX;
	volatile int8_t x634 = -1;
	uint8_t x636 = 46U;
	static int32_t t141 = 92196991;

    t141 = (x633^((x634+x635)|x636));

    if (t141 != 2147418113) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x637 = -45482116;
	int64_t x638 = 380LL;
	static uint16_t x640 = 66U;
	volatile int64_t t142 = -1LL;

    t142 = (x637^((x638+x639)|x640));

    if (t142 != 2102001154LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x641 = INT32_MAX;
	int64_t x642 = 47492552188370677LL;
	int8_t x644 = 7;
	int64_t t143 = 31042802706483915LL;

    t143 = (x641^((x642+x643)|x644));

    if (t143 != 47492550085730568LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x648 = INT64_MIN;
	volatile int64_t t144 = 42303LL;

    t144 = (x645^((x646+x647)|x648));

    if (t144 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x649 = -1;
	volatile uint16_t x650 = 4U;
	volatile uint8_t x651 = 0U;
	int16_t x652 = -22;
	int32_t t145 = 203;

    t145 = (x649^((x650+x651)|x652));

    if (t145 != 17) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	uint64_t x654 = 434574LLU;
	int16_t x655 = INT16_MAX;
	uint64_t x656 = 18808731LLU;
	static uint64_t t146 = 665LLU;

    t146 = (x653^((x654+x655)|x656));

    if (t146 != 18446744073690677344LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x658 = 182U;
	static uint32_t x659 = 313066072U;
	volatile uint32_t t147 = 744U;

    t147 = (x657^((x658+x659)|x660));

    if (t147 != 3981836288U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x661 = 1;
	volatile int64_t x663 = -1LL;
	int32_t x664 = INT32_MAX;

    t148 = (x661^((x662+x663)|x664));

    if (t148 != -2LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x665 = INT32_MAX;
	int32_t x666 = -6638704;
	volatile uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MIN;
	static volatile uint64_t t149 = 2498457LLU;

    t149 = (x665^((x666+x667)|x668));

    if (t149 != 18446744071562087536LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = INT16_MIN;
	uint8_t x670 = UINT8_MAX;
	int8_t x671 = INT8_MAX;
	uint16_t x672 = UINT16_MAX;
	volatile int32_t t150 = -9990422;

    t150 = (x669^((x670+x671)|x672));

    if (t150 != -32769) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x673 = INT16_MIN;
	volatile int16_t x674 = 10;
	volatile int16_t x675 = INT16_MIN;
	volatile int32_t x676 = 3162544;
	static int32_t t151 = -4364841;

    t151 = (x673^((x674+x675)|x676));

    if (t151 != 16826) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 17U;
	int32_t t152 = 3454;

    t152 = (x677^((x678+x679)|x680));

    if (t152 != 47489582) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x682 = 42;
	int8_t x683 = INT8_MIN;
	volatile uint32_t x684 = 1U;
	volatile uint32_t t153 = 114250631U;

    t153 = (x681^((x682+x683)|x684));

    if (t153 != 3257719029U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x686 = 0;
	static int8_t x687 = -1;
	uint32_t x688 = UINT32_MAX;
	volatile uint32_t t154 = 0U;

    t154 = (x685^((x686+x687)|x688));

    if (t154 != 127U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x689 = INT64_MIN;
	volatile int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MIN;
	int64_t t155 = -19LL;

    t155 = (x689^((x690+x691)|x692));

    if (t155 != -9223372032559808529LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x693 = INT64_MAX;
	uint8_t x694 = UINT8_MAX;
	uint16_t x695 = 54U;
	static int8_t x696 = 25;
	int64_t t156 = 76092LL;

    t156 = (x693^((x694+x695)|x696));

    if (t156 != 9223372036854775490LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x697 = INT8_MIN;
	uint32_t x698 = 1775504236U;
	volatile uint64_t x699 = 1083753499LLU;
	uint16_t x700 = UINT16_MAX;
	static uint64_t t157 = 176LLU;

    t157 = (x697^((x698+x699)|x700));

    if (t157 != 18446744070850281599LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x701 = 602358712;
	int64_t x703 = INT64_MIN;
	int16_t x704 = INT16_MAX;
	volatile int64_t t158 = -1696233126209LL;

    t158 = (x701^((x702+x703)|x704));

    if (t158 != -9223372036252386233LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x705 = -1LL;
	static uint16_t x706 = UINT16_MAX;

    t159 = (x705^((x706+x707)|x708));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x709 = 1U;
	static volatile uint32_t x710 = 7U;
	volatile uint32_t x711 = UINT32_MAX;
	int16_t x712 = INT16_MIN;
	static volatile uint32_t t160 = 10166633U;

    t160 = (x709^((x710+x711)|x712));

    if (t160 != 4294934535U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x713 = 5U;
	uint16_t x714 = 1079U;
	uint32_t x716 = 36133428U;
	static uint32_t t161 = 154122476U;

    t161 = (x713^((x714+x715)|x716));

    if (t161 != 36134449U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x717 = INT32_MIN;
	static int8_t x718 = INT8_MIN;
	int8_t x719 = 31;
	uint64_t x720 = UINT64_MAX;

    t162 = (x717^((x718+x719)|x720));

    if (t162 != 2147483647LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x721 = INT32_MAX;
	int16_t x723 = INT16_MIN;
	uint8_t x724 = 0U;
	volatile uint32_t t163 = 4437584U;

    t163 = (x721^((x722+x723)|x724));

    if (t163 != 1743739832U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x725 = INT8_MIN;
	volatile int64_t x726 = 3232941325730756LL;
	uint16_t x728 = 891U;

    t164 = (x725^((x726+x727)|x728));

    if (t164 != -3232941325697921LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x729 = 377U;
	uint32_t x730 = UINT32_MAX;
	uint8_t x732 = 66U;
	uint32_t t165 = 1054U;

    t165 = (x729^((x730+x731)|x732));

    if (t165 != 4294966919U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x734 = -3203;
	static int16_t x735 = INT16_MAX;
	uint8_t x736 = 3U;

    t166 = (x733^((x734+x735)|x736));

    if (t166 != 29565) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x737 = 59927;
	static int64_t x738 = -436LL;
	int64_t t167 = -25912749LL;

    t167 = (x737^((x738+x739)|x740));

    if (t167 != -59928LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int16_t x746 = INT16_MIN;
	uint64_t x748 = UINT64_MAX;

    t168 = (x745^((x746+x747)|x748));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x749 = -1;
	int16_t x750 = -1;
	int8_t x751 = -1;
	volatile int64_t x752 = -1LL;
	volatile int64_t t169 = 31160LL;

    t169 = (x749^((x750+x751)|x752));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x757 = -6963624LL;
	int64_t x760 = INT64_MIN;
	int64_t t170 = 109905862LL;

    t170 = (x757^((x758+x759)|x760));

    if (t170 != 6963622LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x762 = UINT16_MAX;
	static uint8_t x763 = 0U;
	static volatile uint32_t t171 = 4159U;

    t171 = (x761^((x762+x763)|x764));

    if (t171 != 65532U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x766 = 246691382520923LLU;
	int64_t x767 = -115732LL;
	volatile int64_t x768 = INT64_MIN;

    t172 = (x765^((x766+x767)|x768));

    if (t172 != 9223618727971748530LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x771 = INT32_MIN;
	int16_t x772 = INT16_MAX;
	uint32_t t173 = 10U;

    t173 = (x769^((x770+x771)|x772));

    if (t173 != 2147090559U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x773 = INT16_MAX;
	volatile int32_t x774 = 22790;
	int16_t x775 = INT16_MAX;
	static uint8_t x776 = UINT8_MAX;
	volatile int32_t t174 = -137890;

    t174 = (x773^((x774+x775)|x776));

    if (t174 != 42496) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x785 = 69436;
	int8_t x786 = 38;
	volatile uint16_t x787 = 18036U;
	volatile uint64_t t175 = 8081230571974936338LLU;

    t175 = (x785^((x786+x787)|x788));

    if (t175 != 47524211074LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = 1860238841132957LL;
	int32_t x790 = 24483103;
	uint16_t x791 = 84U;
	int16_t x792 = INT16_MIN;
	int64_t t176 = -1711615724495460LL;

    t176 = (x789^((x790+x791)|x792));

    if (t176 != -1860238841142546LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x793 = INT64_MAX;
	int32_t x794 = -1;
	int8_t x795 = INT8_MAX;

    t177 = (x793^((x794+x795)|x796));

    if (t177 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x798 = UINT32_MAX;
	int8_t x799 = -27;
	int16_t x800 = INT16_MIN;

    t178 = (x797^((x798+x799)|x800));

    if (t178 != 32740U) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x801 = 6035986949880590LLU;
	volatile int32_t x802 = -1;
	int8_t x803 = INT8_MAX;
	int8_t x804 = -1;
	static uint64_t t179 = 238947367LLU;

    t179 = (x801^((x802+x803)|x804));

    if (t179 != 18440708086759671025LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x805 = 12U;
	static uint32_t x806 = 868U;
	volatile uint32_t t180 = 21U;

    t180 = (x805^((x806+x807)|x808));

    if (t180 != 4294967283U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x809 = 1;
	uint64_t x810 = UINT64_MAX;
	uint16_t x811 = 3U;
	uint64_t t181 = 188189LLU;

    t181 = (x809^((x810+x811)|x812));

    if (t181 != 126LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x813 = INT8_MAX;
	int64_t x814 = 36681852344833LL;
	static volatile uint8_t x815 = 6U;
	volatile uint16_t x816 = UINT16_MAX;
	volatile int64_t t182 = -102LL;

    t182 = (x813^((x814+x815)|x816));

    if (t182 != 36681852387200LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x817 = 56597U;
	int32_t x818 = INT32_MIN;
	int16_t x819 = 377;
	int32_t x820 = INT32_MIN;
	uint32_t t183 = 5U;

    t183 = (x817^((x818+x819)|x820));

    if (t183 != 2147540076U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x821 = -1;
	uint64_t x822 = UINT64_MAX;
	int32_t x823 = INT32_MIN;
	int32_t x824 = -1;

    t184 = (x821^((x822+x823)|x824));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x825 = 269U;
	int64_t x826 = -1LL;
	uint16_t x828 = UINT16_MAX;

    t185 = (x825^((x826+x827)|x828));

    if (t185 != 65266LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x829 = UINT64_MAX;
	uint16_t x830 = UINT16_MAX;
	static volatile int64_t x831 = -19146226LL;
	int64_t x832 = INT64_MIN;
	uint64_t t186 = 6999344923080446852LLU;

    t186 = (x829^((x830+x831)|x832));

    if (t186 != 19080690LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x833 = UINT8_MAX;
	static uint32_t x834 = 3447U;
	uint16_t x835 = 59U;
	int64_t x836 = INT64_MIN;
	int64_t t187 = 12710852202705070LL;

    t187 = (x833^((x834+x835)|x836));

    if (t187 != -9223372036854772403LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x837 = 972620190;
	int16_t x839 = INT16_MIN;
	int8_t x840 = 6;

    t188 = (x837^((x838+x839)|x840));

    if (t188 != 972652129) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x841 = INT64_MIN;
	int64_t x842 = -1LL;
	static uint8_t x843 = 9U;
	int8_t x844 = -9;
	int64_t t189 = INT64_MAX;

    t189 = (x841^((x842+x843)|x844));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x846 = INT8_MIN;
	int32_t x847 = -1;
	int8_t x848 = INT8_MAX;
	volatile uint64_t t190 = 20506952598657LLU;

    t190 = (x845^((x846+x847)|x848));

    if (t190 != 18446744073709537043LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x849 = INT16_MIN;
	int32_t x850 = -31396746;
	int16_t x851 = INT16_MAX;
	static volatile int64_t x852 = INT64_MIN;
	volatile int64_t t191 = -166324366771240LL;

    t191 = (x849^((x850+x851)|x852));

    if (t191 != 31386741LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x853 = INT8_MIN;
	static uint16_t x854 = 2770U;
	static int8_t x855 = INT8_MIN;

    t192 = (x853^((x854+x855)|x856));

    if (t192 != 30162) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x861 = -15878;
	int8_t x862 = 0;
	volatile uint32_t x863 = 16266U;
	static int64_t x864 = INT64_MIN;
	static int64_t t193 = 2421LL;

    t193 = (x861^((x862+x863)|x864));

    if (t193 != 9223372036854775408LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x866 = INT16_MIN;
	uint32_t x867 = 306138386U;
	int64_t x868 = 137438981785941140LL;
	int64_t t194 = 4381016128469LL;

    t194 = (x865^((x866+x867)|x868));

    if (t194 != 137438981787653003LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x869 = 4311245U;
	volatile int16_t x872 = INT16_MAX;
	static uint32_t t195 = 50U;

    t195 = (x869^((x870+x871)|x872));

    if (t195 != 5060402U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x873 = 19U;
	int64_t x874 = INT64_MIN;
	static int32_t x875 = 7;
	static uint16_t x876 = 4U;
	int64_t t196 = 0LL;

    t196 = (x873^((x874+x875)|x876));

    if (t196 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x877 = 1056U;
	uint8_t x878 = UINT8_MAX;
	uint16_t x879 = 4U;
	static int8_t x880 = INT8_MIN;
	volatile int32_t t197 = 30632755;

    t197 = (x877^((x878+x879)|x880));

    if (t197 != -1117) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x881 = 1798;
	static int16_t x884 = -55;
	static int32_t t198 = 1062477;

    t198 = (x881^((x882+x883)|x884));

    if (t198 != -1841) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x885 = 3340690680730LLU;
	static int32_t x886 = -10920273;
	uint32_t x887 = 33U;
	int64_t x888 = 724382658LL;
	uint64_t t199 = 200789392462042LLU;

    t199 = (x885^((x886+x887)|x888));

    if (t199 != 3337991951432LLU) { NG(); } else { ; }
	
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

