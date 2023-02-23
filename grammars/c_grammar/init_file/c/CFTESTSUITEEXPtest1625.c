
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

static uint32_t x5 = UINT32_MAX;
volatile int8_t x8 = -1;
int16_t x31 = INT16_MAX;
int32_t x38 = INT32_MAX;
int32_t x39 = INT32_MIN;
volatile int64_t t9 = -8022LL;
uint16_t x48 = 3307U;
volatile int32_t t10 = 230302475;
static int16_t x49 = 1990;
int32_t x51 = -1;
int32_t t11 = -19970;
int16_t x58 = INT16_MAX;
int32_t x61 = -74;
uint16_t x64 = 560U;
static uint32_t x67 = 1U;
uint32_t x70 = 510535154U;
int64_t x73 = -4666126LL;
volatile uint64_t t17 = 24593LLU;
int8_t x78 = 3;
int64_t x80 = INT64_MAX;
static int16_t x83 = -1;
int32_t t20 = -1;
uint16_t x89 = 18U;
int64_t t21 = -1730901383487LL;
int8_t x107 = 14;
int64_t x109 = INT64_MIN;
uint64_t x125 = 158884396LLU;
uint64_t t30 = 12LLU;
volatile int64_t x132 = 283LL;
static int64_t x135 = INT64_MIN;
static int8_t x138 = -1;
int32_t t34 = -516255344;
int8_t x149 = -1;
uint64_t x152 = 16930559206719LLU;
int16_t x154 = -1;
uint32_t x156 = 946U;
int64_t x167 = INT64_MAX;
int64_t x168 = -1LL;
uint32_t x169 = UINT32_MAX;
int16_t x170 = -1;
volatile int32_t x172 = INT32_MAX;
uint32_t t39 = 423897981U;
uint8_t x178 = 12U;
volatile uint32_t x181 = 230835U;
uint16_t x188 = 2U;
int16_t x190 = INT16_MIN;
int64_t x192 = INT64_MIN;
int16_t x214 = INT16_MIN;
int32_t x218 = INT32_MIN;
int16_t x223 = INT16_MIN;
int8_t x227 = INT8_MAX;
static int16_t x231 = INT16_MIN;
volatile uint32_t t52 = 7572U;
volatile int64_t t54 = -80644321LL;
volatile int8_t x244 = -3;
volatile uint16_t x245 = 26849U;
int8_t x250 = INT8_MAX;
int8_t x253 = INT8_MAX;
int64_t t60 = 118040LL;
int8_t x266 = -1;
static int32_t t61 = -2018;
uint64_t x279 = UINT64_MAX;
int32_t x284 = -1;
uint64_t x285 = 26LLU;
static int32_t x287 = -3;
int16_t x288 = 850;
int64_t x295 = -1LL;
uint16_t x300 = UINT16_MAX;
volatile int64_t x302 = INT64_MIN;
static volatile int32_t t70 = -491598;
int32_t x309 = INT32_MIN;
static uint32_t x318 = UINT32_MAX;
uint16_t x321 = 863U;
int16_t x325 = INT16_MIN;
uint64_t t76 = 14859220981668LLU;
uint8_t x334 = 0U;
volatile int8_t x337 = INT8_MIN;
static volatile uint8_t x342 = 3U;
int32_t x345 = 468;
static volatile int32_t t80 = 12625;
static int16_t x360 = INT16_MIN;
uint8_t x363 = UINT8_MAX;
int64_t x373 = INT64_MIN;
static volatile int32_t x383 = -1;
uint32_t x384 = UINT32_MAX;
int8_t x388 = INT8_MIN;
uint8_t x390 = UINT8_MAX;
static int16_t x398 = INT16_MIN;
int32_t x400 = -1;
static volatile uint64_t t92 = 30529LLU;
uint16_t x402 = 102U;
volatile int64_t x403 = INT64_MIN;
int16_t x408 = INT16_MIN;
volatile int32_t t95 = -2483;
volatile int16_t x413 = INT16_MIN;
int8_t x421 = INT8_MIN;
volatile int16_t x427 = -7;
static uint64_t x431 = 51711371024393265LLU;
static uint64_t x433 = 12LLU;
int32_t x435 = 403397483;
uint64_t t101 = 109121950LLU;
uint32_t x447 = UINT32_MAX;
uint8_t x451 = UINT8_MAX;
int64_t x458 = INT64_MAX;
static uint16_t x460 = 27524U;
volatile uint32_t x461 = 417146506U;
int8_t x463 = INT8_MIN;
int32_t x464 = INT32_MAX;
volatile int16_t x468 = INT16_MAX;
static volatile uint8_t x470 = 72U;
volatile int16_t x472 = INT16_MAX;
int16_t x475 = INT16_MIN;
int32_t t111 = 26918;
uint16_t x478 = UINT16_MAX;
int64_t x481 = 129932788LL;
int8_t x483 = INT8_MAX;
volatile int16_t x496 = INT16_MIN;
static volatile int32_t t116 = -323;
static uint32_t x497 = 1451414U;
int16_t x499 = INT16_MIN;
uint32_t t117 = 225752U;
int16_t x503 = -1;
int8_t x517 = -1;
int16_t x518 = -1089;
uint64_t x519 = UINT64_MAX;
static int16_t x522 = INT16_MIN;
volatile int32_t t123 = -51888;
int32_t x525 = 23160;
static int8_t x529 = INT8_MIN;
int16_t x532 = -1;
volatile int8_t x533 = -1;
uint16_t x544 = 1U;
int16_t x549 = INT16_MIN;
int16_t x550 = INT16_MAX;
volatile int32_t t129 = -117;
static int16_t x557 = INT16_MAX;
static int64_t x559 = -389LL;
uint32_t t134 = 119U;
volatile uint16_t x576 = UINT16_MAX;
int32_t x580 = INT32_MIN;
volatile uint32_t x591 = 105U;
static int64_t x592 = -4992716LL;
int64_t t139 = -109975LL;
int32_t t140 = -123;
static int64_t x600 = -1249887147LL;
int64_t t141 = 150513482807092206LL;
uint32_t x602 = UINT32_MAX;
int32_t x603 = INT32_MIN;
volatile int32_t t142 = 183229;
int16_t x609 = -1110;
int8_t x611 = INT8_MIN;
volatile int16_t x618 = -1;
static uint16_t x623 = 7922U;
int16_t x624 = -57;
static int16_t x628 = INT16_MIN;
int8_t x630 = INT8_MIN;
volatile int64_t x634 = 16018504LL;
int32_t x638 = 30;
uint8_t x640 = 2U;
int32_t x641 = 820;
volatile uint16_t x642 = 5U;
static volatile uint64_t t152 = 3639106LLU;
int64_t x649 = INT64_MAX;
static int8_t x653 = INT8_MAX;
int16_t x656 = -365;
static int8_t x658 = INT8_MIN;
int16_t x663 = INT16_MIN;
int16_t x670 = -1;
int32_t x674 = INT32_MAX;
uint64_t x675 = UINT64_MAX;
uint8_t x679 = UINT8_MAX;
volatile int64_t x680 = 57950LL;
volatile uint64_t t161 = 7511457612440LLU;
int32_t x683 = INT32_MIN;
uint32_t x684 = 13U;
int16_t x687 = INT16_MIN;
volatile int16_t x689 = INT16_MIN;
int32_t t164 = -117;
volatile int8_t x699 = INT8_MIN;
int32_t x701 = 0;
static uint64_t x702 = UINT64_MAX;
uint64_t x704 = 8LLU;
volatile uint8_t x706 = 76U;
int16_t x710 = INT16_MAX;
static uint8_t x716 = UINT8_MAX;
int16_t x718 = INT16_MIN;
int64_t x720 = -1061830681972708064LL;
static int64_t x723 = 15177305067205LL;
int64_t x725 = 756143869823LL;
static uint32_t x728 = 15868U;
uint16_t x745 = 7U;
static int64_t x749 = 65231LL;
int32_t x755 = INT32_MIN;
int32_t x774 = INT32_MIN;
uint64_t x775 = UINT64_MAX;
uint16_t x780 = 179U;
uint64_t x788 = 8844858959LLU;
static int64_t x789 = 8630874521960090LL;
static int8_t x790 = INT8_MIN;
int16_t x795 = -1;
int16_t x799 = -1;
uint64_t x812 = 34058855913LLU;
static volatile uint64_t t192 = 32708313500830303LLU;
uint32_t x813 = 746195U;
int64_t t193 = 14268558436859LL;
uint32_t x824 = 14926U;
static int64_t x825 = INT64_MIN;
uint16_t x829 = 51U;
int8_t x838 = INT8_MIN;
volatile uint64_t t198 = 1993773LLU;
volatile uint64_t x844 = 42929838205905LLU;


void f0(void) {
    	uint32_t x1 = 3U;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	volatile uint32_t t0 = 0U;

    t0 = (x1+((x2>x3)%x4));

    if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = -1;
	int16_t x7 = -1;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (x5+((x6>x7)%x8));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = 61U;
	static volatile int64_t x12 = INT64_MIN;
	int64_t t2 = -94LL;

    t2 = (x9+((x10>x11)%x12));

    if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	int64_t x14 = INT64_MIN;
	int32_t x15 = 1;
	static int32_t x16 = 243147;
	int32_t t3 = -500406631;

    t3 = (x13+((x14>x15)%x16));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	static uint16_t x18 = 1U;
	uint16_t x19 = UINT16_MAX;
	volatile int8_t x20 = 4;
	volatile int32_t t4 = INT32_MIN;

    t4 = (x17+((x18>x19)%x20));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t5 = 5;

    t5 = (x25+((x26>x27)%x28));

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MAX;
	volatile uint8_t x32 = 23U;
	volatile int32_t t6 = -348912128;

    t6 = (x29+((x30>x31)%x32));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MIN;
	static uint64_t x36 = 5595298343LLU;
	volatile uint64_t t7 = 115429273551427LLU;

    t7 = (x33+((x34>x35)%x36));

    if (t7 != 32768LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 0U;
	int16_t x40 = 184;
	int32_t t8 = -466882895;

    t8 = (x37+((x38>x39)%x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	uint8_t x42 = 2U;
	static volatile int64_t x43 = INT64_MIN;
	int64_t x44 = -4986LL;

    t9 = (x41+((x42>x43)%x44));

    if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	static int8_t x46 = -1;
	int8_t x47 = INT8_MIN;

    t10 = (x45+((x46>x47)%x48));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = -1;
	int8_t x52 = INT8_MIN;

    t11 = (x49+((x50>x51)%x52));

    if (t11 != 1990) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = -3;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile int64_t t12 = -7296789624LL;

    t12 = (x53+((x54>x55)%x56));

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 9;
	uint16_t x59 = 16507U;
	uint16_t x60 = UINT16_MAX;
	int32_t t13 = -99871396;

    t13 = (x57+((x58>x59)%x60));

    if (t13 != 10) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x62 = 1U;
	int64_t x63 = 159607427617250LL;
	static volatile int32_t t14 = 7547;

    t14 = (x61+((x62>x63)%x64));

    if (t14 != -74) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MAX;
	volatile int8_t x66 = 1;
	volatile int64_t x68 = INT64_MAX;
	volatile int64_t t15 = -335LL;

    t15 = (x65+((x66>x67)%x68));

    if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = 421;
	int16_t x71 = 7;
	static int8_t x72 = -1;
	volatile int32_t t16 = -1551215;

    t16 = (x69+((x70>x71)%x72));

    if (t16 != 421) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = INT8_MAX;
	int32_t x75 = -496;
	volatile uint64_t x76 = 100580652521874LLU;

    t17 = (x73+((x74>x75)%x76));

    if (t17 != 18446744073704885491LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = 0U;
	int16_t x79 = INT16_MIN;
	int64_t t18 = -9LL;

    t18 = (x77+((x78>x79)%x80));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	static uint16_t x82 = 4557U;
	uint8_t x84 = 98U;
	static volatile int32_t t19 = 33470142;

    t19 = (x81+((x82>x83)%x84));

    if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -5283;
	int16_t x86 = INT16_MIN;
	static uint8_t x87 = 4U;
	int8_t x88 = INT8_MAX;

    t20 = (x85+((x86>x87)%x88));

    if (t20 != -5283) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x90 = INT8_MAX;
	int32_t x91 = 12348;
	int64_t x92 = 1839484179369LL;

    t21 = (x89+((x90>x91)%x92));

    if (t21 != 18LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 5U;
	int16_t x94 = 1850;
	int32_t x95 = 469456056;
	static uint64_t x96 = 66207021347LLU;
	volatile uint64_t t22 = 0LLU;

    t22 = (x93+((x94>x95)%x96));

    if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -7;
	uint8_t x98 = 7U;
	volatile int64_t x99 = INT64_MIN;
	int16_t x100 = 827;
	int32_t t23 = -70003;

    t23 = (x97+((x98>x99)%x100));

    if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x101 = -1;
	int16_t x102 = -1;
	int32_t x103 = INT32_MAX;
	static int16_t x104 = 173;
	static int32_t t24 = 33;

    t24 = (x101+((x102>x103)%x104));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x105 = -1;
	static uint32_t x106 = 90443972U;
	int32_t x108 = -1;
	int32_t t25 = -15;

    t25 = (x105+((x106>x107)%x108));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 39984U;
	int8_t x111 = -1;
	int64_t x112 = -1LL;
	volatile int64_t t26 = INT64_MIN;

    t26 = (x109+((x110>x111)%x112));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -2;
	static int32_t x114 = -1;
	int8_t x115 = 1;
	uint16_t x116 = 6U;
	static int32_t t27 = 14981;

    t27 = (x113+((x114>x115)%x116));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x117 = 26U;
	static int8_t x118 = 10;
	int16_t x119 = -2;
	volatile int64_t x120 = -1269989375549LL;
	volatile int64_t t28 = 2804695252386582LL;

    t28 = (x117+((x118>x119)%x120));

    if (t28 != 27LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x121 = -1;
	static volatile uint16_t x122 = 56U;
	int8_t x123 = 27;
	volatile uint32_t x124 = 430U;
	volatile uint32_t t29 = 395U;

    t29 = (x121+((x122>x123)%x124));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MAX;
	int64_t x128 = -1LL;

    t30 = (x125+((x126>x127)%x128));

    if (t30 != 158884396LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x129 = -26;
	uint32_t x130 = UINT32_MAX;
	static int64_t x131 = INT64_MIN;
	int64_t t31 = 14120755340233679LL;

    t31 = (x129+((x130>x131)%x132));

    if (t31 != -25LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = UINT16_MAX;
	uint8_t x134 = UINT8_MAX;
	int64_t x136 = -1LL;
	static int64_t t32 = 0LL;

    t32 = (x133+((x134>x135)%x136));

    if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = 69440LL;
	int32_t x139 = INT32_MAX;
	int32_t x140 = INT32_MAX;
	volatile int64_t t33 = 688388220466038LL;

    t33 = (x137+((x138>x139)%x140));

    if (t33 != 69440LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = UINT16_MAX;
	static int64_t x142 = INT64_MAX;
	volatile int64_t x143 = INT64_MAX;
	static uint8_t x144 = 60U;

    t34 = (x141+((x142>x143)%x144));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = UINT8_MAX;
	int32_t x146 = 872804;
	int64_t x147 = INT64_MAX;
	int64_t x148 = INT64_MIN;
	volatile int64_t t35 = -158999864LL;

    t35 = (x145+((x146>x147)%x148));

    if (t35 != 255LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x150 = -1LL;
	uint64_t x151 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

    t36 = (x149+((x150>x151)%x152));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = 23;
	int64_t x155 = -1LL;
	volatile uint32_t t37 = 445127451U;

    t37 = (x153+((x154>x155)%x156));

    if (t37 != 23U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MIN;
	int64_t t38 = -533264LL;

    t38 = (x165+((x166>x167)%x168));

    if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x171 = INT32_MIN;

    t39 = (x169+((x170>x171)%x172));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x173 = 6U;
	static int64_t x174 = -32369132LL;
	uint16_t x175 = UINT16_MAX;
	static int64_t x176 = INT64_MIN;
	int64_t t40 = 41520249657LL;

    t40 = (x173+((x174>x175)%x176));

    if (t40 != 6LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = 1430373325LL;
	int16_t x179 = -1;
	int64_t x180 = INT64_MAX;
	volatile int64_t t41 = -1705472881526443LL;

    t41 = (x177+((x178>x179)%x180));

    if (t41 != 1430373326LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x182 = 35U;
	int32_t x183 = -841667570;
	uint32_t x184 = 29361294U;
	volatile uint32_t t42 = 399705U;

    t42 = (x181+((x182>x183)%x184));

    if (t42 != 230836U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = INT64_MIN;
	volatile int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int64_t t43 = 12096151258006LL;

    t43 = (x185+((x186>x187)%x188));

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = INT32_MAX;
	int16_t x191 = -1;
	volatile int64_t t44 = -130819LL;

    t44 = (x189+((x190>x191)%x192));

    if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x197 = INT64_MIN;
	volatile uint64_t x198 = 6826014876LLU;
	static uint16_t x199 = 0U;
	static int64_t x200 = -1LL;
	int64_t t45 = INT64_MIN;

    t45 = (x197+((x198>x199)%x200));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x201 = -37;
	static int16_t x202 = INT16_MIN;
	int8_t x203 = 60;
	int16_t x204 = -353;
	static int32_t t46 = 334620;

    t46 = (x201+((x202>x203)%x204));

    if (t46 != -37) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x209 = 0U;
	int8_t x210 = -1;
	int64_t x211 = 15827LL;
	int32_t x212 = -38573;
	volatile int32_t t47 = 719309;

    t47 = (x209+((x210>x211)%x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x213 = 5U;
	volatile int64_t x215 = -1LL;
	int8_t x216 = -1;
	volatile int32_t t48 = -248413087;

    t48 = (x213+((x214>x215)%x216));

    if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x217 = 0U;
	volatile int64_t x219 = INT64_MIN;
	int16_t x220 = 78;
	int32_t t49 = 26;

    t49 = (x217+((x218>x219)%x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t50 = 26;

    t50 = (x221+((x222>x223)%x224));

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = 1140192132478LLU;
	int8_t x226 = INT8_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t51 = 518733LLU;

    t51 = (x225+((x226>x227)%x228));

    if (t51 != 1140192132478LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x229 = 13;
	uint32_t x230 = 395501909U;
	uint32_t x232 = 32552U;

    t52 = (x229+((x230>x231)%x232));

    if (t52 != 13U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = 1LL;
	uint16_t x235 = UINT16_MAX;
	volatile int64_t x236 = INT64_MIN;
	static int64_t t53 = 33585155788887178LL;

    t53 = (x233+((x234>x235)%x236));

    if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = -2LL;
	int8_t x238 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MAX;

    t54 = (x237+((x238>x239)%x240));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = INT16_MIN;
	static int64_t x242 = -1LL;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t t55 = -11546;

    t55 = (x241+((x242>x243)%x244));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -85105061130LL;
	int64_t t56 = 6628LL;

    t56 = (x245+((x246>x247)%x248));

    if (t56 != 26850LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -1;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -1;
	volatile int32_t t57 = 28689;

    t57 = (x249+((x250>x251)%x252));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x254 = INT32_MIN;
	static uint16_t x255 = 16517U;
	volatile uint8_t x256 = 9U;
	volatile int32_t t58 = 28;

    t58 = (x253+((x254>x255)%x256));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = -1966367851LL;
	static int16_t x258 = -7275;
	int32_t x259 = INT32_MIN;
	int16_t x260 = -403;
	volatile int64_t t59 = 28071362LL;

    t59 = (x257+((x258>x259)%x260));

    if (t59 != -1966367850LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = -28830374154059LL;
	int64_t x262 = -448LL;
	uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = INT8_MAX;

    t60 = (x261+((x262>x263)%x264));

    if (t60 != -28830374154059LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x265 = 3U;
	uint16_t x267 = 1748U;
	int32_t x268 = 19686;

    t61 = (x265+((x266>x267)%x268));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = 2465061518134608654LLU;
	int16_t x270 = INT16_MIN;
	int16_t x271 = -227;
	volatile int8_t x272 = 2;
	volatile uint64_t t62 = 15717831846LLU;

    t62 = (x269+((x270>x271)%x272));

    if (t62 != 2465061518134608654LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = -1;
	int64_t x275 = 826862758228048LL;
	int8_t x276 = INT8_MIN;
	static int32_t t63 = -7791;

    t63 = (x273+((x274>x275)%x276));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = -4;
	static uint8_t x278 = 7U;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t64 = 66007LL;

    t64 = (x277+((x278>x279)%x280));

    if (t64 != -4LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x281 = 51U;
	uint64_t x282 = 27LLU;
	volatile int8_t x283 = -1;
	int32_t t65 = -40;

    t65 = (x281+((x282>x283)%x284));

    if (t65 != 51) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x286 = -460409867;
	uint64_t t66 = 11043504333833639LLU;

    t66 = (x285+((x286>x287)%x288));

    if (t66 != 26LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x293 = 5490144119LLU;
	int64_t x294 = INT64_MIN;
	uint32_t x296 = 293U;
	volatile uint64_t t67 = 5223186967773LLU;

    t67 = (x293+((x294>x295)%x296));

    if (t67 != 5490144119LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x297 = -1;
	int8_t x298 = 0;
	uint32_t x299 = 3869U;
	int32_t t68 = 13684;

    t68 = (x297+((x298>x299)%x300));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x301 = INT64_MIN;
	uint64_t x303 = 106706362066LLU;
	int32_t x304 = INT32_MAX;
	static volatile int64_t t69 = 482LL;

    t69 = (x301+((x302>x303)%x304));

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x305 = 45U;
	int8_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	int16_t x308 = 1;

    t70 = (x305+((x306>x307)%x308));

    if (t70 != 45) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x310 = INT8_MIN;
	static uint16_t x311 = 3739U;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t71 = INT32_MIN;

    t71 = (x309+((x310>x311)%x312));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = -62;
	volatile int8_t x314 = INT8_MIN;
	static volatile uint8_t x315 = 34U;
	static int8_t x316 = -1;
	volatile int32_t t72 = -823;

    t72 = (x313+((x314>x315)%x316));

    if (t72 != -62) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = -20;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 13U;
	int32_t t73 = 0;

    t73 = (x317+((x318>x319)%x320));

    if (t73 != -19) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x322 = 260162LLU;
	int8_t x323 = -4;
	int64_t x324 = INT64_MIN;
	int64_t t74 = 22925310893LL;

    t74 = (x321+((x322>x323)%x324));

    if (t74 != 863LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x326 = 1230U;
	volatile int32_t x327 = INT32_MIN;
	volatile uint16_t x328 = UINT16_MAX;
	volatile int32_t t75 = 741;

    t75 = (x325+((x326>x327)%x328));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x329 = 762LLU;
	static int64_t x330 = INT64_MIN;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MAX;

    t76 = (x329+((x330>x331)%x332));

    if (t76 != 762LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	static uint16_t x336 = 5U;
	uint32_t t77 = 1492267U;

    t77 = (x333+((x334>x335)%x336));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x338 = 22007U;
	static uint32_t x339 = UINT32_MAX;
	int64_t x340 = -106976148331040LL;
	volatile int64_t t78 = -492LL;

    t78 = (x337+((x338>x339)%x340));

    if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x341 = 16U;
	static int32_t x343 = INT32_MIN;
	static int32_t x344 = 80895863;
	static int32_t t79 = -2399835;

    t79 = (x341+((x342>x343)%x344));

    if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = -1;
	int16_t x348 = INT16_MAX;

    t80 = (x345+((x346>x347)%x348));

    if (t80 != 468) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = -1;
	int64_t x350 = -1LL;
	int64_t x351 = -107755984305LL;
	static uint16_t x352 = UINT16_MAX;
	volatile int32_t t81 = 12905063;

    t81 = (x349+((x350>x351)%x352));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x353 = -1;
	static int16_t x354 = 0;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t82 = 6393558;

    t82 = (x353+((x354>x355)%x356));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x357 = 265;
	volatile int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	volatile int32_t t83 = 58;

    t83 = (x357+((x358>x359)%x360));

    if (t83 != 265) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x361 = INT64_MIN;
	static uint32_t x362 = 59793438U;
	static uint16_t x364 = 3965U;
	int64_t t84 = 2358765LL;

    t84 = (x361+((x362>x363)%x364));

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x365 = -129190356578805LL;
	uint64_t x366 = 133281648740716LLU;
	static int8_t x367 = INT8_MAX;
	static int64_t x368 = -1LL;
	volatile int64_t t85 = -29661468815376148LL;

    t85 = (x365+((x366>x367)%x368));

    if (t85 != -129190356578805LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x374 = INT32_MIN;
	uint32_t x375 = 964U;
	uint64_t x376 = 9767778207LLU;
	uint64_t t86 = 1630144138775736LLU;

    t86 = (x373+((x374>x375)%x376));

    if (t86 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x377 = INT16_MIN;
	int8_t x378 = 0;
	uint32_t x379 = 105992U;
	int16_t x380 = 201;
	volatile int32_t t87 = -870275257;

    t87 = (x377+((x378>x379)%x380));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x381 = INT32_MIN;
	static volatile int16_t x382 = INT16_MIN;
	uint32_t t88 = 10U;

    t88 = (x381+((x382>x383)%x384));

    if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x385 = 4U;
	int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MAX;
	static volatile int32_t t89 = 4335336;

    t89 = (x385+((x386>x387)%x388));

    if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x389 = 1654014U;
	int8_t x391 = -2;
	static int16_t x392 = INT16_MIN;
	static volatile uint32_t t90 = 5783U;

    t90 = (x389+((x390>x391)%x392));

    if (t90 != 1654015U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = 0;
	int64_t x394 = INT64_MIN;
	volatile int64_t x395 = INT64_MIN;
	volatile int32_t x396 = 4053086;
	int32_t t91 = -304;

    t91 = (x393+((x394>x395)%x396));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x397 = 106964327119LLU;
	uint32_t x399 = 1U;

    t92 = (x397+((x398>x399)%x400));

    if (t92 != 106964327119LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x401 = 600U;
	uint32_t x404 = 26428496U;
	uint32_t t93 = 0U;

    t93 = (x401+((x402>x403)%x404));

    if (t93 != 601U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x405 = UINT64_MAX;
	int64_t x406 = -955637103526939404LL;
	uint64_t x407 = 9009LLU;
	uint64_t t94 = 606382666187LLU;

    t94 = (x405+((x406>x407)%x408));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x409 = 2;
	int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	static volatile int16_t x412 = -41;

    t95 = (x409+((x410>x411)%x412));

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x414 = UINT32_MAX;
	static int8_t x415 = INT8_MAX;
	static int16_t x416 = INT16_MAX;
	static volatile int32_t t96 = 630151;

    t96 = (x413+((x414>x415)%x416));

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = INT8_MAX;
	int32_t x418 = -1;
	uint16_t x419 = 27571U;
	uint64_t x420 = UINT64_MAX;
	static uint64_t t97 = 15900583772680LLU;

    t97 = (x417+((x418>x419)%x420));

    if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x422 = 32U;
	volatile int64_t x423 = 2685815423LL;
	uint32_t x424 = UINT32_MAX;
	uint32_t t98 = 1328U;

    t98 = (x421+((x422>x423)%x424));

    if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x425 = INT32_MAX;
	int8_t x426 = 1;
	volatile int64_t x428 = INT64_MIN;
	static volatile int64_t t99 = 1339022465388403LL;

    t99 = (x425+((x426>x427)%x428));

    if (t99 != 2147483648LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = 1;
	uint8_t x430 = 1U;
	int32_t x432 = 372;
	volatile int32_t t100 = 176556;

    t100 = (x429+((x430>x431)%x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x434 = 37U;
	int64_t x436 = -1LL;

    t101 = (x433+((x434>x435)%x436));

    if (t101 != 12LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MAX;
	static int32_t x439 = INT32_MAX;
	uint8_t x440 = 6U;
	volatile int32_t t102 = 647;

    t102 = (x437+((x438>x439)%x440));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x441 = -1LL;
	static uint32_t x442 = UINT32_MAX;
	volatile uint8_t x443 = UINT8_MAX;
	volatile uint64_t x444 = 961374394399685004LLU;
	uint64_t t103 = 505438257035LLU;

    t103 = (x441+((x442>x443)%x444));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x445 = 0;
	static uint64_t x446 = UINT64_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t104 = 87447506315520LL;

    t104 = (x445+((x446>x447)%x448));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x449 = -1;
	uint8_t x450 = 0U;
	uint16_t x452 = 14945U;
	static int32_t t105 = 1;

    t105 = (x449+((x450>x451)%x452));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x453 = INT64_MIN;
	static int16_t x454 = INT16_MIN;
	static volatile uint32_t x455 = UINT32_MAX;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int64_t t106 = INT64_MIN;

    t106 = (x453+((x454>x455)%x456));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x457 = 3U;
	int8_t x459 = 3;
	static int32_t t107 = 3556608;

    t107 = (x457+((x458>x459)%x460));

    if (t107 != 4) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x462 = INT64_MIN;
	static uint32_t t108 = 94562880U;

    t108 = (x461+((x462>x463)%x464));

    if (t108 != 417146506U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x465 = -8;
	volatile int32_t x466 = 111;
	static int16_t x467 = -1;
	static int32_t t109 = 1;

    t109 = (x465+((x466>x467)%x468));

    if (t109 != -7) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x471 = -1;
	volatile int32_t t110 = -13;

    t110 = (x469+((x470>x471)%x472));

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x473 = INT8_MIN;
	static volatile int64_t x474 = INT64_MIN;
	uint16_t x476 = 7222U;

    t111 = (x473+((x474>x475)%x476));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = 9768LL;
	static int32_t x479 = -8039;
	int16_t x480 = INT16_MIN;
	volatile int64_t t112 = 801436LL;

    t112 = (x477+((x478>x479)%x480));

    if (t112 != 9769LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x482 = INT32_MIN;
	static volatile int32_t x484 = 4217;
	volatile int64_t t113 = -30LL;

    t113 = (x481+((x482>x483)%x484));

    if (t113 != 129932788LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x485 = 499U;
	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 2536599705858005970LLU;
	uint64_t t114 = 8091793276LLU;

    t114 = (x485+((x486>x487)%x488));

    if (t114 != 499LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x489 = 0;
	static uint16_t x490 = UINT16_MAX;
	uint16_t x491 = 1504U;
	int32_t x492 = 219833;
	int32_t t115 = -47005336;

    t115 = (x489+((x490>x491)%x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x493 = 3U;
	uint32_t x494 = 8643U;
	uint64_t x495 = 447612793592LLU;

    t116 = (x493+((x494>x495)%x496));

    if (t116 != 3) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x498 = -1LL;
	volatile int16_t x500 = 187;

    t117 = (x497+((x498>x499)%x500));

    if (t117 != 1451415U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = 114940388LLU;
	int32_t x504 = INT32_MIN;
	int32_t t118 = -482;

    t118 = (x501+((x502>x503)%x504));

    if (t118 != 65535) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x505 = 1752U;
	int32_t x506 = INT32_MIN;
	int16_t x507 = 237;
	volatile uint16_t x508 = UINT16_MAX;
	volatile int32_t t119 = 11324175;

    t119 = (x505+((x506>x507)%x508));

    if (t119 != 1752) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = 3480U;
	int64_t x510 = INT64_MIN;
	uint64_t x511 = UINT64_MAX;
	uint64_t x512 = 764633LLU;
	uint64_t t120 = 3386372829852903LLU;

    t120 = (x509+((x510>x511)%x512));

    if (t120 != 3480LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x513 = 26U;
	int64_t x514 = -1LL;
	uint8_t x515 = 20U;
	uint16_t x516 = 28U;
	volatile uint32_t t121 = 16835966U;

    t121 = (x513+((x514>x515)%x516));

    if (t121 != 26U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x520 = -23047010LL;
	volatile int64_t t122 = 393119779135524914LL;

    t122 = (x517+((x518>x519)%x520));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x521 = 1;
	int64_t x523 = INT64_MIN;
	static uint16_t x524 = 6U;

    t123 = (x521+((x522>x523)%x524));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x526 = UINT8_MAX;
	uint64_t x527 = 54639LLU;
	volatile int16_t x528 = INT16_MIN;
	int32_t t124 = 5;

    t124 = (x525+((x526>x527)%x528));

    if (t124 != 23160) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x530 = 204;
	static int16_t x531 = INT16_MIN;
	static int32_t t125 = 1;

    t125 = (x529+((x530>x531)%x532));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x534 = -53;
	int32_t x535 = -32022812;
	uint16_t x536 = 3079U;
	int32_t t126 = 126683;

    t126 = (x533+((x534>x535)%x536));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x541 = 11289LL;
	volatile int64_t x542 = INT64_MIN;
	static uint8_t x543 = UINT8_MAX;
	volatile int64_t t127 = -1062504138250LL;

    t127 = (x541+((x542>x543)%x544));

    if (t127 != 11289LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x545 = INT16_MIN;
	static uint16_t x546 = 99U;
	int32_t x547 = -1;
	int32_t x548 = INT32_MIN;
	static volatile int32_t t128 = 0;

    t128 = (x545+((x546>x547)%x548));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x551 = INT64_MIN;
	volatile uint8_t x552 = UINT8_MAX;

    t129 = (x549+((x550>x551)%x552));

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x553 = 6291U;
	static uint32_t x554 = UINT32_MAX;
	uint16_t x555 = 3U;
	int8_t x556 = -1;
	int32_t t130 = 2127;

    t130 = (x553+((x554>x555)%x556));

    if (t130 != 6291) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x558 = INT32_MAX;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t131 = 497LLU;

    t131 = (x557+((x558>x559)%x560));

    if (t131 != 32768LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = INT16_MAX;
	int16_t x562 = -1;
	static uint32_t x563 = 4495801U;
	static uint32_t x564 = 1U;
	volatile uint32_t t132 = 9372U;

    t132 = (x561+((x562>x563)%x564));

    if (t132 != 32767U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x565 = UINT64_MAX;
	static volatile uint32_t x566 = 248615255U;
	int8_t x567 = INT8_MIN;
	int16_t x568 = 1918;
	uint64_t t133 = UINT64_MAX;

    t133 = (x565+((x566>x567)%x568));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x569 = 616587U;
	static int32_t x570 = INT32_MAX;
	volatile int16_t x571 = INT16_MAX;
	static volatile int32_t x572 = -1;

    t134 = (x569+((x570>x571)%x572));

    if (t134 != 616587U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MIN;
	uint16_t x575 = 96U;
	volatile int32_t t135 = INT32_MIN;

    t135 = (x573+((x574>x575)%x576));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x577 = INT8_MIN;
	static uint16_t x578 = UINT16_MAX;
	static int64_t x579 = INT64_MAX;
	int32_t t136 = 337;

    t136 = (x577+((x578>x579)%x580));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x581 = -12071991421LL;
	static uint16_t x582 = UINT16_MAX;
	int32_t x583 = -25680054;
	int32_t x584 = -1;
	int64_t t137 = 174866596560LL;

    t137 = (x581+((x582>x583)%x584));

    if (t137 != -12071991421LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x585 = 1;
	int32_t x586 = -185022;
	int16_t x587 = -1;
	volatile int32_t x588 = INT32_MIN;
	volatile int32_t t138 = 192958583;

    t138 = (x585+((x586>x587)%x588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MIN;
	uint64_t x590 = 4115008583415328LLU;

    t139 = (x589+((x590>x591)%x592));

    if (t139 != -32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x593 = -1;
	volatile uint8_t x594 = 1U;
	uint16_t x595 = 1541U;
	int16_t x596 = -2;

    t140 = (x593+((x594>x595)%x596));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x597 = 0U;
	int8_t x598 = -34;
	int8_t x599 = INT8_MIN;

    t141 = (x597+((x598>x599)%x600));

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x601 = INT16_MIN;
	int8_t x604 = INT8_MIN;

    t142 = (x601+((x602>x603)%x604));

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x605 = INT64_MIN;
	static int32_t x606 = -393474446;
	int64_t x607 = INT64_MAX;
	volatile int8_t x608 = INT8_MIN;
	static int64_t t143 = INT64_MIN;

    t143 = (x605+((x606>x607)%x608));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x610 = INT16_MIN;
	volatile uint64_t x612 = 471869119LLU;
	uint64_t t144 = 4653LLU;

    t144 = (x609+((x610>x611)%x612));

    if (t144 != 18446744073709550506LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x613 = 71U;
	int8_t x614 = -3;
	volatile uint16_t x615 = 70U;
	int8_t x616 = 1;
	static volatile int32_t t145 = -63952223;

    t145 = (x613+((x614>x615)%x616));

    if (t145 != 71) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x617 = 22U;
	int64_t x619 = INT64_MIN;
	int32_t x620 = INT32_MIN;
	static volatile uint32_t t146 = 248618U;

    t146 = (x617+((x618>x619)%x620));

    if (t146 != 23U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x621 = 85U;
	int64_t x622 = INT64_MIN;
	uint32_t t147 = 634U;

    t147 = (x621+((x622>x623)%x624));

    if (t147 != 85U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x625 = 120U;
	int8_t x626 = -2;
	int8_t x627 = 4;
	int32_t t148 = 1604;

    t148 = (x625+((x626>x627)%x628));

    if (t148 != 120) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x629 = 38706839404LLU;
	int8_t x631 = -1;
	static volatile int64_t x632 = INT64_MIN;
	volatile uint64_t t149 = 302906144262331427LLU;

    t149 = (x629+((x630>x631)%x632));

    if (t149 != 38706839404LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = INT8_MIN;
	uint8_t x635 = UINT8_MAX;
	volatile uint32_t x636 = UINT32_MAX;
	volatile uint32_t t150 = 3825U;

    t150 = (x633+((x634>x635)%x636));

    if (t150 != 4294967169U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x637 = 4U;
	static uint32_t x639 = UINT32_MAX;
	volatile int32_t t151 = 0;

    t151 = (x637+((x638>x639)%x640));

    if (t151 != 4) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x643 = UINT16_MAX;
	uint64_t x644 = 26845016LLU;

    t152 = (x641+((x642>x643)%x644));

    if (t152 != 820LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x646 = INT32_MIN;
	volatile uint32_t x647 = 130801U;
	static int8_t x648 = 1;
	volatile int32_t t153 = INT32_MIN;

    t153 = (x645+((x646>x647)%x648));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x650 = -1;
	static int32_t x651 = INT32_MAX;
	volatile int16_t x652 = -1;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x649+((x650>x651)%x652));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x654 = INT16_MAX;
	uint16_t x655 = 1815U;
	int32_t t155 = -7068;

    t155 = (x653+((x654>x655)%x656));

    if (t155 != 128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x657 = -690248427986199LL;
	int32_t x659 = -1;
	static int8_t x660 = -55;
	int64_t t156 = 1555LL;

    t156 = (x657+((x658>x659)%x660));

    if (t156 != -690248427986199LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x661 = INT8_MIN;
	uint32_t x662 = UINT32_MAX;
	static int8_t x664 = INT8_MIN;
	int32_t t157 = 987;

    t157 = (x661+((x662>x663)%x664));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x665 = 5U;
	static uint32_t x666 = 1U;
	int8_t x667 = -1;
	uint64_t x668 = UINT64_MAX;
	volatile uint64_t t158 = 271157758LLU;

    t158 = (x665+((x666>x667)%x668));

    if (t158 != 5LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x669 = -5;
	uint64_t x671 = 4888135193585LLU;
	int32_t x672 = INT32_MAX;
	static int32_t t159 = -1749;

    t159 = (x669+((x670>x671)%x672));

    if (t159 != -4) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x673 = INT64_MIN;
	volatile int32_t x676 = INT32_MIN;
	static int64_t t160 = INT64_MIN;

    t160 = (x673+((x674>x675)%x676));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x677 = 70131526155282702LLU;
	int16_t x678 = 335;

    t161 = (x677+((x678>x679)%x680));

    if (t161 != 70131526155282703LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x681 = 12U;
	static int16_t x682 = -1;
	volatile uint32_t t162 = 1363U;

    t162 = (x681+((x682>x683)%x684));

    if (t162 != 13U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x685 = INT8_MAX;
	volatile int64_t x686 = INT64_MAX;
	int8_t x688 = -1;
	int32_t t163 = 40;

    t163 = (x685+((x686>x687)%x688));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x690 = -1LL;
	volatile int32_t x691 = INT32_MIN;
	int8_t x692 = -28;

    t164 = (x689+((x690>x691)%x692));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 142U;
	static uint32_t x695 = UINT32_MAX;
	volatile uint16_t x696 = UINT16_MAX;
	static volatile int64_t t165 = INT64_MIN;

    t165 = (x693+((x694>x695)%x696));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x697 = INT32_MAX;
	int16_t x698 = INT16_MIN;
	static uint8_t x700 = UINT8_MAX;
	int32_t t166 = INT32_MAX;

    t166 = (x697+((x698>x699)%x700));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x703 = INT64_MIN;
	volatile uint64_t t167 = 3273507220233LLU;

    t167 = (x701+((x702>x703)%x704));

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x705 = 2U;
	static int64_t x707 = INT64_MIN;
	int64_t x708 = 87085462LL;
	int64_t t168 = 1LL;

    t168 = (x705+((x706>x707)%x708));

    if (t168 != 3LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x709 = -11;
	uint8_t x711 = 0U;
	static int32_t x712 = 22763468;
	static volatile int32_t t169 = -3607820;

    t169 = (x709+((x710>x711)%x712));

    if (t169 != -10) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x713 = 5814U;
	int16_t x714 = -1;
	volatile int16_t x715 = -1;
	static volatile int32_t t170 = 372077541;

    t170 = (x713+((x714>x715)%x716));

    if (t170 != 5814) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x717 = 0LLU;
	int8_t x719 = INT8_MIN;
	static volatile uint64_t t171 = 895208473073197LLU;

    t171 = (x717+((x718>x719)%x720));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x721 = 63;
	uint32_t x722 = 2563U;
	int64_t x724 = INT64_MIN;
	static volatile int64_t t172 = -4428747LL;

    t172 = (x721+((x722>x723)%x724));

    if (t172 != 63LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x726 = 402;
	static int8_t x727 = INT8_MIN;
	volatile int64_t t173 = 149LL;

    t173 = (x725+((x726>x727)%x728));

    if (t173 != 756143869824LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x729 = INT16_MIN;
	static int32_t x730 = -1;
	static int32_t x731 = INT32_MAX;
	int32_t x732 = INT32_MAX;
	volatile int32_t t174 = 7221;

    t174 = (x729+((x730>x731)%x732));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x733 = 6;
	static int8_t x734 = INT8_MAX;
	int64_t x735 = 1450106839545LL;
	volatile int16_t x736 = 181;
	volatile int32_t t175 = 1840011;

    t175 = (x733+((x734>x735)%x736));

    if (t175 != 6) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x737 = -1;
	uint8_t x738 = 7U;
	static int64_t x739 = -1LL;
	int8_t x740 = -18;
	volatile int32_t t176 = -1053440;

    t176 = (x737+((x738>x739)%x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x741 = -1;
	int8_t x742 = INT8_MAX;
	volatile uint16_t x743 = 13982U;
	uint16_t x744 = UINT16_MAX;
	static int32_t t177 = 1;

    t177 = (x741+((x742>x743)%x744));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x746 = INT16_MIN;
	static volatile uint8_t x747 = 1U;
	int32_t x748 = INT32_MIN;
	int32_t t178 = -8;

    t178 = (x745+((x746>x747)%x748));

    if (t178 != 7) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x750 = -240;
	int16_t x751 = INT16_MAX;
	uint16_t x752 = UINT16_MAX;
	volatile int64_t t179 = 1LL;

    t179 = (x749+((x750>x751)%x752));

    if (t179 != 65231LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x753 = INT32_MIN;
	static volatile uint16_t x754 = 26830U;
	int8_t x756 = -1;
	int32_t t180 = INT32_MIN;

    t180 = (x753+((x754>x755)%x756));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = -1;
	int8_t x766 = -61;
	static uint8_t x767 = 115U;
	uint32_t x768 = UINT32_MAX;
	volatile uint32_t t181 = UINT32_MAX;

    t181 = (x765+((x766>x767)%x768));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x769 = 27U;
	uint32_t x770 = 888U;
	static volatile int8_t x771 = INT8_MAX;
	volatile int8_t x772 = 1;
	int32_t t182 = 27401536;

    t182 = (x769+((x770>x771)%x772));

    if (t182 != 27) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = INT8_MIN;
	int64_t x776 = INT64_MAX;
	volatile int64_t t183 = 144994792837643LL;

    t183 = (x773+((x774>x775)%x776));

    if (t183 != -128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x777 = UINT32_MAX;
	volatile int16_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	static uint32_t t184 = UINT32_MAX;

    t184 = (x777+((x778>x779)%x780));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x781 = 61017U;
	uint32_t x782 = 8684U;
	static int16_t x783 = INT16_MAX;
	static uint32_t x784 = 106848901U;
	uint32_t t185 = 1328U;

    t185 = (x781+((x782>x783)%x784));

    if (t185 != 61017U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x785 = INT64_MIN;
	volatile uint64_t x786 = 1034587877673LLU;
	uint16_t x787 = 8401U;
	volatile uint64_t t186 = 146338504157099LLU;

    t186 = (x785+((x786>x787)%x788));

    if (t186 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x791 = UINT8_MAX;
	int32_t x792 = -557899;
	static int64_t t187 = -15747977LL;

    t187 = (x789+((x790>x791)%x792));

    if (t187 != 8630874521960090LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x793 = 3979044881892LLU;
	static volatile int32_t x794 = 101263472;
	int16_t x796 = INT16_MIN;
	volatile uint64_t t188 = 4LLU;

    t188 = (x793+((x794>x795)%x796));

    if (t188 != 3979044881893LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x797 = 0;
	static int16_t x798 = -245;
	int16_t x800 = INT16_MIN;
	volatile int32_t t189 = -70371378;

    t189 = (x797+((x798>x799)%x800));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x801 = 991926279059492LLU;
	uint8_t x802 = UINT8_MAX;
	uint8_t x803 = 6U;
	uint64_t x804 = 5848931368292472LLU;
	volatile uint64_t t190 = 3050189238820375LLU;

    t190 = (x801+((x802>x803)%x804));

    if (t190 != 991926279059493LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x805 = INT16_MAX;
	int32_t x806 = INT32_MAX;
	volatile uint32_t x807 = 2304980U;
	uint16_t x808 = 26127U;
	int32_t t191 = -495408;

    t191 = (x805+((x806>x807)%x808));

    if (t191 != 32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x809 = INT32_MIN;
	static int8_t x810 = -1;
	int64_t x811 = INT64_MIN;

    t192 = (x809+((x810>x811)%x812));

    if (t192 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x814 = -1;
	int8_t x815 = -1;
	volatile int64_t x816 = INT64_MIN;

    t193 = (x813+((x814>x815)%x816));

    if (t193 != 746195LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x817 = INT64_MAX;
	int32_t x818 = 3;
	uint16_t x819 = 5095U;
	static uint16_t x820 = 374U;
	int64_t t194 = INT64_MAX;

    t194 = (x817+((x818>x819)%x820));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x821 = INT8_MAX;
	uint16_t x822 = 28U;
	int32_t x823 = -1;
	static volatile uint32_t t195 = 1U;

    t195 = (x821+((x822>x823)%x824));

    if (t195 != 128U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x826 = 781691008572819LLU;
	uint64_t x827 = 59420225851181LLU;
	static int16_t x828 = INT16_MIN;
	int64_t t196 = 1118362012191654LL;

    t196 = (x825+((x826>x827)%x828));

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x830 = 5561U;
	int32_t x831 = INT32_MAX;
	int32_t x832 = INT32_MIN;
	volatile int32_t t197 = 32059110;

    t197 = (x829+((x830>x831)%x832));

    if (t197 != 51) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x837 = 4U;
	int64_t x839 = -1LL;
	uint64_t x840 = UINT64_MAX;

    t198 = (x837+((x838>x839)%x840));

    if (t198 != 4LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x841 = 0;
	volatile int32_t x842 = INT32_MAX;
	int8_t x843 = INT8_MIN;
	volatile uint64_t t199 = 3359LLU;

    t199 = (x841+((x842>x843)%x844));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

