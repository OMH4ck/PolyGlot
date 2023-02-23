
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

volatile int64_t x6 = INT64_MAX;
int16_t x10 = 0;
int8_t x20 = -1;
uint32_t x21 = UINT32_MAX;
int64_t x24 = INT64_MIN;
volatile int32_t t6 = 880;
int32_t x32 = INT32_MAX;
int64_t x33 = INT64_MIN;
int8_t x40 = INT8_MIN;
int32_t t9 = 1;
volatile uint32_t x47 = UINT32_MAX;
uint16_t x49 = UINT16_MAX;
int16_t x55 = INT16_MIN;
volatile int8_t x56 = -1;
volatile int32_t t13 = -4685;
static volatile int32_t t14 = 0;
int16_t x73 = -504;
volatile uint8_t x74 = 0U;
uint64_t x77 = UINT64_MAX;
volatile uint16_t x84 = 2399U;
int16_t x85 = INT16_MIN;
static volatile int32_t t22 = 8;
static volatile uint16_t x93 = 0U;
int32_t x96 = INT32_MAX;
static int32_t t25 = -1;
volatile int16_t x105 = INT16_MIN;
uint64_t x107 = 5853776LLU;
static int8_t x108 = INT8_MAX;
static int32_t t26 = -44555;
int64_t x110 = INT64_MIN;
static int64_t x117 = INT64_MIN;
volatile int64_t t29 = -47LL;
uint32_t x129 = UINT32_MAX;
uint16_t x134 = UINT16_MAX;
uint8_t x140 = UINT8_MAX;
uint64_t x142 = UINT64_MAX;
static uint32_t x148 = UINT32_MAX;
uint64_t x155 = 2503494419022LLU;
int32_t t38 = -407;
uint32_t x158 = UINT32_MAX;
int64_t x161 = INT64_MAX;
volatile int64_t t40 = -25929959667895908LL;
static volatile int16_t x167 = INT16_MIN;
uint32_t x169 = 0U;
int64_t x170 = 0LL;
static uint64_t x172 = 7038349364LLU;
static int64_t x175 = INT64_MIN;
int64_t x176 = INT64_MIN;
int64_t x192 = -817266LL;
int8_t x205 = -19;
uint16_t x206 = 1U;
static volatile int32_t t51 = -551406;
volatile int16_t x232 = 13;
int16_t x236 = -1;
int64_t x247 = -1LL;
int64_t t62 = 43306132679951512LL;
static volatile int16_t x261 = INT16_MIN;
volatile int32_t x264 = -5;
volatile int32_t t65 = 4232427;
static volatile int32_t t66 = -11300696;
int32_t t67 = 118224;
static uint8_t x276 = UINT8_MAX;
static uint32_t x278 = 3712U;
volatile int32_t t70 = 6531;
uint8_t x285 = 50U;
int32_t x288 = INT32_MIN;
static volatile uint8_t x290 = UINT8_MAX;
volatile int8_t x292 = -1;
uint16_t x295 = UINT16_MAX;
volatile int32_t x296 = -1;
int32_t x300 = -151236719;
static int64_t x303 = -16LL;
static int32_t x305 = INT32_MAX;
int32_t x308 = INT32_MAX;
int16_t x310 = INT16_MAX;
static int32_t x311 = INT32_MAX;
int64_t x319 = 6718LL;
int16_t x321 = 3;
int64_t x332 = INT64_MIN;
int32_t t83 = -116;
static int64_t x340 = 2147LL;
uint64_t x361 = 1841508LLU;
uint64_t t90 = 453444549171813LLU;
static int8_t x367 = INT8_MIN;
uint16_t x368 = UINT16_MAX;
volatile int64_t x378 = -569817150326507650LL;
uint8_t x382 = 28U;
int32_t x391 = INT32_MIN;
uint8_t x392 = 6U;
uint64_t t97 = 1LLU;
volatile int64_t t98 = 396255845016LL;
static int64_t x402 = INT64_MIN;
int16_t x403 = -1584;
static uint8_t x407 = 19U;
volatile uint8_t x410 = UINT8_MAX;
int64_t x413 = INT64_MAX;
int32_t x419 = INT32_MIN;
int32_t t104 = -502874;
uint32_t x424 = 1U;
int32_t t105 = -14889813;
uint16_t x427 = 27U;
volatile uint64_t t108 = 7934618LLU;
int8_t x438 = INT8_MIN;
volatile int32_t x439 = -14479;
static int32_t x445 = -1;
volatile uint16_t x446 = UINT16_MAX;
uint32_t x447 = 718419U;
volatile int32_t t111 = 0;
volatile int64_t t112 = 4287226255633628LL;
volatile int32_t x455 = INT32_MIN;
int16_t x456 = 134;
volatile int8_t x461 = -1;
int32_t t118 = -61;
volatile uint32_t x482 = UINT32_MAX;
static uint16_t x490 = UINT16_MAX;
uint16_t x492 = UINT16_MAX;
volatile uint16_t x493 = UINT16_MAX;
int8_t x496 = INT8_MIN;
int32_t x500 = 625100796;
uint32_t x502 = 215562481U;
int64_t x510 = 125498996972LL;
int8_t x511 = INT8_MIN;
int32_t t129 = -380590;
int8_t x523 = INT8_MIN;
static uint16_t x532 = UINT16_MAX;
volatile int32_t x534 = 233;
uint16_t x543 = UINT16_MAX;
volatile int32_t t135 = 38;
int16_t x552 = -1;
volatile int32_t t137 = 1;
volatile int64_t x555 = 7927LL;
int8_t x563 = INT8_MIN;
volatile int8_t x564 = 1;
uint64_t t140 = UINT64_MAX;
static uint32_t x565 = UINT32_MAX;
uint64_t x570 = 81396552138907LLU;
int64_t x573 = -1LL;
static int64_t t143 = -156379688716602LL;
int32_t t144 = 1777;
static int8_t x583 = -27;
volatile int32_t x591 = INT32_MIN;
int8_t x592 = INT8_MIN;
volatile int32_t t147 = 464377;
uint32_t x593 = UINT32_MAX;
static uint32_t x597 = 5178U;
int32_t x599 = -12852714;
static int32_t x601 = 234;
int16_t x602 = 48;
uint64_t x603 = 18620428486LLU;
static volatile int32_t t150 = -6536;
uint32_t x605 = 1206515U;
int64_t x610 = INT64_MAX;
static int64_t x613 = -1LL;
static uint8_t x614 = 1U;
int16_t x620 = 1;
int32_t x627 = INT32_MIN;
uint64_t x633 = UINT64_MAX;
int64_t x637 = INT64_MIN;
int32_t t160 = 38;
volatile int32_t x646 = -6621487;
static volatile uint8_t x653 = 1U;
int16_t x659 = -1;
int16_t x660 = INT16_MAX;
volatile uint16_t x664 = UINT16_MAX;
int16_t x674 = INT16_MIN;
volatile int64_t x679 = 140978423LL;
int32_t x680 = INT32_MAX;
volatile int32_t t170 = -113;
int32_t t172 = -60616;
int16_t x702 = INT16_MAX;
volatile int8_t x703 = -15;
uint32_t x708 = 56570067U;
int8_t x710 = 1;
int8_t x714 = INT8_MIN;
uint32_t x720 = 705319U;
int16_t x721 = INT16_MAX;
int8_t x725 = INT8_MAX;
static int32_t t181 = -1;
static int32_t x737 = INT32_MIN;
uint64_t x738 = 43236610883584LLU;
uint8_t x740 = 13U;
volatile int32_t t185 = 501517;
static volatile uint64_t x752 = 17586385LLU;
int32_t t187 = -4;
int32_t x756 = -8011;
int16_t x762 = INT16_MIN;
int32_t x763 = INT32_MAX;
volatile uint16_t x765 = UINT16_MAX;
static uint32_t x772 = 988U;
volatile uint8_t x777 = UINT8_MAX;
volatile int64_t t195 = -26691LL;
volatile int32_t x785 = INT32_MIN;
int16_t x791 = INT16_MAX;
int32_t t198 = 49132574;
static int16_t x798 = 546;


void f0(void) {
    	uint8_t x1 = 2U;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = 2779U;
	int32_t x4 = 240;
	int32_t t0 = 27219;

    t0 = (x1^((x2!=x3)!=x4));

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	static uint8_t x7 = 9U;
	int64_t x8 = -8024226284356622LL;
	volatile int32_t t1 = 0;

    t1 = (x5^((x6!=x7)!=x8));

    if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 135150U;
	static int16_t x11 = INT16_MIN;
	uint64_t x12 = 61LLU;
	static uint32_t t2 = 262786585U;

    t2 = (x9^((x10!=x11)!=x12));

    if (t2 != 135151U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	volatile int16_t x14 = INT16_MIN;
	volatile int64_t x15 = INT64_MIN;
	static volatile uint8_t x16 = 15U;
	int64_t t3 = 1053569LL;

    t3 = (x13^((x14!=x15)!=x16));

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 43;
	int64_t x18 = -132880757LL;
	uint16_t x19 = UINT16_MAX;
	int32_t t4 = 1;

    t4 = (x17^((x18!=x19)!=x20));

    if (t4 != 42) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = 3359963LL;
	static volatile int8_t x23 = -24;
	volatile uint32_t t5 = 115826486U;

    t5 = (x21^((x22!=x23)!=x24));

    if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -30;
	uint64_t x26 = 119419643526LLU;
	static uint32_t x27 = 223U;
	static int64_t x28 = INT64_MIN;

    t6 = (x25^((x26!=x27)!=x28));

    if (t6 != -29) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MAX;
	static int16_t x31 = INT16_MIN;
	int64_t t7 = 122577248202460709LL;

    t7 = (x29^((x30!=x31)!=x32));

    if (t7 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = -826764757;
	uint8_t x35 = 80U;
	static int32_t x36 = INT32_MIN;
	static volatile int64_t t8 = -771LL;

    t8 = (x33^((x34!=x35)!=x36));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 61;
	uint64_t x38 = 62881719749LLU;
	volatile int64_t x39 = 31853661738105LL;

    t9 = (x37^((x38!=x39)!=x40));

    if (t9 != 60) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = 983;
	int32_t x42 = INT32_MIN;
	static int8_t x43 = INT8_MAX;
	static uint64_t x44 = UINT64_MAX;
	int32_t t10 = -238;

    t10 = (x41^((x42!=x43)!=x44));

    if (t10 != 982) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -480048967;
	static int32_t x46 = -6894;
	volatile uint64_t x48 = 673005587483717264LLU;
	int32_t t11 = 147100;

    t11 = (x45^((x46!=x47)!=x48));

    if (t11 != -480048968) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MAX;
	volatile int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -126373;

    t12 = (x49^((x50!=x51)!=x52));

    if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 12733;
	static int32_t x54 = -1;

    t13 = (x53^((x54!=x55)!=x56));

    if (t13 != 12732) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	volatile int16_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MAX;

    t14 = (x57^((x58!=x59)!=x60));

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	static int16_t x62 = INT16_MIN;
	uint8_t x63 = 3U;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 68;

    t15 = (x61^((x62!=x63)!=x64));

    if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	static uint64_t x67 = UINT64_MAX;
	volatile uint8_t x68 = 1U;
	volatile int32_t t16 = -1;

    t16 = (x65^((x66!=x67)!=x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 20U;
	int32_t x70 = 305;
	int32_t x71 = INT32_MAX;
	int32_t x72 = -4995;
	volatile int32_t t17 = -1885;

    t17 = (x69^((x70!=x71)!=x72));

    if (t17 != 21) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x75 = 6548727U;
	int32_t x76 = INT32_MAX;
	int32_t t18 = 335503;

    t18 = (x73^((x74!=x75)!=x76));

    if (t18 != -503) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = 1U;
	static volatile int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MIN;
	uint64_t t19 = 1006247698105567045LLU;

    t19 = (x77^((x78!=x79)!=x80));

    if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -3;
	uint16_t x82 = 3107U;
	int32_t x83 = 55;
	int32_t t20 = 410315533;

    t20 = (x81^((x82!=x83)!=x84));

    if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 1U;
	static int64_t x87 = -1LL;
	volatile uint64_t x88 = 29396885849478LLU;
	int32_t t21 = 7845;

    t21 = (x85^((x86!=x87)!=x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = 4275;
	volatile int64_t x90 = 3516000636446LL;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t x92 = -1;

    t22 = (x89^((x90!=x91)!=x92));

    if (t22 != 4274) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x94 = 548409785195LLU;
	static uint8_t x95 = UINT8_MAX;
	volatile int32_t t23 = -451;

    t23 = (x93^((x94!=x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 24335101751640606LLU;
	static volatile int32_t x98 = INT32_MIN;
	int16_t x99 = 13175;
	int32_t x100 = -1;
	volatile uint64_t t24 = 47269LLU;

    t24 = (x97^((x98!=x99)!=x100));

    if (t24 != 24335101751640607LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	static volatile int64_t x102 = -1LL;
	int32_t x103 = -1;
	volatile int32_t x104 = 421110;

    t25 = (x101^((x102!=x103)!=x104));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x106 = 485288;

    t26 = (x105^((x106!=x107)!=x108));

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 1;
	static uint16_t x111 = 35U;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -82583;

    t27 = (x109^((x110!=x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 1633U;
	volatile uint8_t x114 = UINT8_MAX;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = 5U;
	volatile uint32_t t28 = 14U;

    t28 = (x113^((x114!=x115)!=x116));

    if (t28 != 1632U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	uint64_t x119 = 1LLU;
	static volatile int64_t x120 = -1LL;

    t29 = (x117^((x118!=x119)!=x120));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = UINT8_MAX;
	static int64_t x122 = INT64_MIN;
	volatile int16_t x123 = -105;
	int8_t x124 = -1;
	volatile int32_t t30 = 203;

    t30 = (x121^((x122!=x123)!=x124));

    if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 206U;
	static volatile uint64_t x127 = 1309624511LLU;
	int64_t x128 = INT64_MIN;
	int32_t t31 = 25;

    t31 = (x125^((x126!=x127)!=x128));

    if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x130 = -1;
	uint64_t x131 = 787454417774184303LLU;
	static int32_t x132 = -69817;
	volatile uint32_t t32 = 6917U;

    t32 = (x129^((x130!=x131)!=x132));

    if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	static volatile int32_t x136 = 1142;
	int32_t t33 = -45555974;

    t33 = (x133^((x134!=x135)!=x136));

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int32_t x138 = -1;
	int64_t x139 = INT64_MIN;
	volatile int64_t t34 = -58LL;

    t34 = (x137^((x138!=x139)!=x140));

    if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 464U;
	volatile int32_t t35 = -508272;

    t35 = (x141^((x142!=x143)!=x144));

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = 1088562023242720LL;
	int32_t x146 = 9;
	static uint32_t x147 = UINT32_MAX;
	int64_t t36 = -12326986LL;

    t36 = (x145^((x146!=x147)!=x148));

    if (t36 != 1088562023242721LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MIN;
	uint8_t x150 = 3U;
	int64_t x151 = 524075912675LL;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = -32205451;

    t37 = (x149^((x150!=x151)!=x152));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -1;
	static uint16_t x154 = UINT16_MAX;
	static int16_t x156 = INT16_MIN;

    t38 = (x153^((x154!=x155)!=x156));

    if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	volatile int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MAX;
	int64_t t39 = -46870188221713LL;

    t39 = (x157^((x158!=x159)!=x160));

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MIN;
	static int8_t x163 = INT8_MIN;
	int64_t x164 = 2167764926955534LL;

    t40 = (x161^((x162!=x163)!=x164));

    if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = 348619918;
	volatile uint64_t x166 = 25023LLU;
	volatile int32_t x168 = -1;
	int32_t t41 = -1820;

    t41 = (x165^((x166!=x167)!=x168));

    if (t41 != 348619919) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x171 = -1;
	volatile uint32_t t42 = 117U;

    t42 = (x169^((x170!=x171)!=x172));

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	volatile int32_t t43 = -1442;

    t43 = (x173^((x174!=x175)!=x176));

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = -12;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 6650679997LLU;
	uint32_t x180 = 12U;
	volatile int32_t t44 = 19234749;

    t44 = (x177^((x178!=x179)!=x180));

    if (t44 != -11) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	int16_t x182 = -930;
	volatile int16_t x183 = 2296;
	int64_t x184 = -479661728416LL;
	volatile int32_t t45 = 45;

    t45 = (x181^((x182!=x183)!=x184));

    if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 253512278242933LL;
	static int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MAX;
	int8_t x188 = -1;
	int64_t t46 = -57814469LL;

    t46 = (x185^((x186!=x187)!=x188));

    if (t46 != 253512278242932LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -55LL;
	int8_t x190 = -2;
	int8_t x191 = -1;
	static volatile int64_t t47 = 1LL;

    t47 = (x189^((x190!=x191)!=x192));

    if (t47 != -56LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	static uint32_t x194 = 261824391U;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = 123;
	uint32_t t48 = 78869U;

    t48 = (x193^((x194!=x195)!=x196));

    if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = 61U;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = INT64_MAX;
	volatile uint32_t x200 = UINT32_MAX;
	int32_t t49 = 26367;

    t49 = (x197^((x198!=x199)!=x200));

    if (t49 != 60) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -96092;
	volatile int8_t x202 = INT8_MIN;
	int16_t x203 = 8;
	static int16_t x204 = INT16_MIN;
	static int32_t t50 = -289;

    t50 = (x201^((x202!=x203)!=x204));

    if (t50 != -96091) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x207 = 17U;
	uint8_t x208 = UINT8_MAX;

    t51 = (x205^((x206!=x207)!=x208));

    if (t51 != -20) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	volatile uint16_t x211 = 0U;
	static int64_t x212 = INT64_MIN;
	volatile int32_t t52 = -94538783;

    t52 = (x209^((x210!=x211)!=x212));

    if (t52 != 2147483646) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 19;
	uint16_t x214 = UINT16_MAX;
	volatile int8_t x215 = 21;
	static int16_t x216 = INT16_MAX;
	int32_t t53 = 811;

    t53 = (x213^((x214!=x215)!=x216));

    if (t53 != 18) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int16_t x218 = -1;
	static uint8_t x219 = 66U;
	static int16_t x220 = INT16_MAX;
	int32_t t54 = 16;

    t54 = (x217^((x218!=x219)!=x220));

    if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 101338881LL;
	int32_t x222 = INT32_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int64_t t55 = -136LL;

    t55 = (x221^((x222!=x223)!=x224));

    if (t55 != 101338880LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	volatile int16_t x226 = -12798;
	uint8_t x227 = UINT8_MAX;
	uint8_t x228 = 16U;
	static int32_t t56 = -77310965;

    t56 = (x225^((x226!=x227)!=x228));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 142;
	int16_t x230 = -1;
	int8_t x231 = 23;
	int32_t t57 = 4;

    t57 = (x229^((x230!=x231)!=x232));

    if (t57 != 143) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 360U;
	volatile int8_t x234 = -1;
	int8_t x235 = -42;
	int32_t t58 = -7;

    t58 = (x233^((x234!=x235)!=x236));

    if (t58 != 361) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x237 = INT16_MIN;
	volatile int8_t x238 = 5;
	uint64_t x239 = UINT64_MAX;
	static int16_t x240 = INT16_MIN;
	int32_t t59 = 428826911;

    t59 = (x237^((x238!=x239)!=x240));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x241 = 12LLU;
	int16_t x242 = INT16_MAX;
	int64_t x243 = 1LL;
	int32_t x244 = INT32_MAX;
	static volatile uint64_t t60 = 3856LLU;

    t60 = (x241^((x242!=x243)!=x244));

    if (t60 != 13LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 64176846778183497LLU;
	static uint8_t x246 = 13U;
	int8_t x248 = -21;
	static volatile uint64_t t61 = 208LLU;

    t61 = (x245^((x246!=x247)!=x248));

    if (t61 != 64176846778183496LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -343360697748005638LL;
	volatile int16_t x250 = 5;
	volatile uint32_t x251 = 91U;
	int64_t x252 = INT64_MIN;

    t62 = (x249^((x250!=x251)!=x252));

    if (t62 != -343360697748005637LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -643129;
	static volatile uint8_t x254 = UINT8_MAX;
	static uint32_t x255 = 103896803U;
	volatile uint32_t x256 = 16417719U;
	int32_t t63 = -6648;

    t63 = (x253^((x254!=x255)!=x256));

    if (t63 != -643130) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = INT64_MIN;
	uint16_t x258 = 3510U;
	volatile uint64_t x259 = 332610831601LLU;
	static volatile int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 378264079LL;

    t64 = (x257^((x258!=x259)!=x260));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;

    t65 = (x261^((x262!=x263)!=x264));

    if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int32_t x266 = INT32_MIN;
	volatile int8_t x267 = INT8_MAX;
	volatile int64_t x268 = INT64_MIN;

    t66 = (x265^((x266!=x267)!=x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 3588U;
	volatile int64_t x270 = INT64_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	int8_t x272 = -1;

    t67 = (x269^((x270!=x271)!=x272));

    if (t67 != 3589) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MIN;
	uint16_t x274 = 2717U;
	volatile int8_t x275 = INT8_MIN;
	volatile int32_t t68 = 4103627;

    t68 = (x273^((x274!=x275)!=x276));

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 1U;
	volatile int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 563;

    t69 = (x277^((x278!=x279)!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MAX;
	int64_t x282 = INT64_MAX;
	volatile uint64_t x283 = 93191LLU;
	int16_t x284 = INT16_MIN;

    t70 = (x281^((x282!=x283)!=x284));

    if (t70 != 126) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x286 = UINT8_MAX;
	static uint32_t x287 = 10U;
	int32_t t71 = -215569502;

    t71 = (x285^((x286!=x287)!=x288));

    if (t71 != 51) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = -1LL;
	int32_t x291 = -5378;
	int64_t t72 = 1224773076890LL;

    t72 = (x289^((x290!=x291)!=x292));

    if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	int64_t x294 = INT64_MIN;
	static volatile int32_t t73 = -15291;

    t73 = (x293^((x294!=x295)!=x296));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = 17U;
	int16_t x299 = -1;
	static volatile int32_t t74 = 13954935;

    t74 = (x297^((x298!=x299)!=x300));

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint32_t x304 = 265368046U;
	volatile int32_t t75 = -210079521;

    t75 = (x301^((x302!=x303)!=x304));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x306 = UINT64_MAX;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t t76 = 16;

    t76 = (x305^((x306!=x307)!=x308));

    if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = 45765990;

    t77 = (x309^((x310!=x311)!=x312));

    if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = -1;
	static int32_t x314 = INT32_MAX;
	int16_t x315 = INT16_MIN;
	static volatile int64_t x316 = -1LL;
	volatile int32_t t78 = 1479;

    t78 = (x313^((x314!=x315)!=x316));

    if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x318 = 4U;
	volatile uint8_t x320 = 88U;
	volatile int32_t t79 = 22;

    t79 = (x317^((x318!=x319)!=x320));

    if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -1LL;
	volatile int32_t t80 = 191;

    t80 = (x321^((x322!=x323)!=x324));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 773518U;
	static uint64_t x326 = UINT64_MAX;
	volatile int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	volatile uint32_t t81 = 29430298U;

    t81 = (x325^((x326!=x327)!=x328));

    if (t81 != 773519U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	volatile int64_t x331 = INT64_MIN;
	volatile int32_t t82 = 4;

    t82 = (x329^((x330!=x331)!=x332));

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	uint64_t x334 = 6961748446708LLU;
	volatile int8_t x335 = 63;
	int64_t x336 = -1LL;

    t83 = (x333^((x334!=x335)!=x336));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 3763;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = -580;

    t84 = (x337^((x338!=x339)!=x340));

    if (t84 != 3762) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	volatile int64_t x342 = INT64_MIN;
	static volatile uint32_t x343 = 929175U;
	int16_t x344 = -1;
	int32_t t85 = -1;

    t85 = (x341^((x342!=x343)!=x344));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = INT8_MIN;
	int8_t x346 = -1;
	int16_t x347 = INT16_MIN;
	int8_t x348 = 61;
	volatile int32_t t86 = -1;

    t86 = (x345^((x346!=x347)!=x348));

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	static int8_t x350 = -18;
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = -700032113;

    t87 = (x349^((x350!=x351)!=x352));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	static uint64_t x355 = UINT64_MAX;
	static int16_t x356 = -1;
	volatile int32_t t88 = -754;

    t88 = (x353^((x354!=x355)!=x356));

    if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -646;

    t89 = (x357^((x358!=x359)!=x360));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x362 = 0U;
	volatile uint64_t x363 = 2LLU;
	static uint16_t x364 = 12117U;

    t90 = (x361^((x362!=x363)!=x364));

    if (t90 != 1841509LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MAX;
	volatile int64_t t91 = 1653380405710902LL;

    t91 = (x365^((x366!=x367)!=x368));

    if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MIN;
	volatile int16_t x370 = INT16_MIN;
	static int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -25500433;

    t92 = (x369^((x370!=x371)!=x372));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	static uint8_t x374 = UINT8_MAX;
	static int64_t x375 = INT64_MIN;
	uint16_t x376 = 27U;
	uint64_t t93 = 185449249LLU;

    t93 = (x373^((x374!=x375)!=x376));

    if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	static int16_t x379 = 1;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = 178360889;

    t94 = (x377^((x378!=x379)!=x380));

    if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 310583058U;
	volatile int64_t x383 = INT64_MIN;
	volatile int32_t x384 = INT32_MIN;
	volatile uint32_t t95 = 141026809U;

    t95 = (x381^((x382!=x383)!=x384));

    if (t95 != 310583059U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -5088;
	uint8_t x386 = 14U;
	static volatile uint8_t x387 = 0U;
	int16_t x388 = INT16_MAX;
	static int32_t t96 = -1;

    t96 = (x385^((x386!=x387)!=x388));

    if (t96 != -5087) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 1737LLU;
	uint8_t x390 = 31U;

    t97 = (x389^((x390!=x391)!=x392));

    if (t97 != 1736LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 515229121LL;
	uint64_t x394 = 297044LLU;
	uint8_t x395 = 6U;
	volatile int32_t x396 = INT32_MIN;

    t98 = (x393^((x394!=x395)!=x396));

    if (t98 != 515229120LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 9903U;
	static int16_t x398 = INT16_MAX;
	static volatile uint16_t x399 = 4851U;
	int64_t x400 = -13483791LL;
	volatile int32_t t99 = 26630;

    t99 = (x397^((x398!=x399)!=x400));

    if (t99 != 9902) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MAX;
	uint64_t x404 = UINT64_MAX;
	int32_t t100 = 0;

    t100 = (x401^((x402!=x403)!=x404));

    if (t100 != 126) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = 1676;

    t101 = (x405^((x406!=x407)!=x408));

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 37U;
	int16_t x411 = INT16_MAX;
	int32_t x412 = INT32_MIN;
	int32_t t102 = 1;

    t102 = (x409^((x410!=x411)!=x412));

    if (t102 != 36) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = -1;
	static int16_t x415 = INT16_MAX;
	volatile int16_t x416 = -1;
	int64_t t103 = 2604376112474LL;

    t103 = (x413^((x414!=x415)!=x416));

    if (t103 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = 2;
	uint64_t x418 = 557798942773LLU;
	volatile uint8_t x420 = 0U;

    t104 = (x417^((x418!=x419)!=x420));

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 689709;
	uint64_t x422 = UINT64_MAX;
	volatile int64_t x423 = INT64_MIN;

    t105 = (x421^((x422!=x423)!=x424));

    if (t105 != 689709) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	uint64_t x426 = 1320LLU;
	int32_t x428 = -1;
	volatile int32_t t106 = -99404425;

    t106 = (x425^((x426!=x427)!=x428));

    if (t106 != -2147483647) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	volatile int64_t x430 = INT64_MIN;
	volatile uint32_t x431 = 94567597U;
	uint16_t x432 = 56U;
	int32_t t107 = 36699;

    t107 = (x429^((x430!=x431)!=x432));

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x433 = 560863692499703000LLU;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = INT16_MIN;
	uint16_t x436 = UINT16_MAX;

    t108 = (x433^((x434!=x435)!=x436));

    if (t108 != 560863692499703001LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 8U;
	volatile int64_t x440 = INT64_MIN;
	int32_t t109 = 9;

    t109 = (x437^((x438!=x439)!=x440));

    if (t109 != 9) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	static volatile int16_t x442 = -1;
	static int8_t x443 = -1;
	uint16_t x444 = 152U;
	static volatile int32_t t110 = 6405;

    t110 = (x441^((x442!=x443)!=x444));

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x448 = INT64_MIN;

    t111 = (x445^((x446!=x447)!=x448));

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	uint16_t x450 = 3U;
	int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MAX;

    t112 = (x449^((x450!=x451)!=x452));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 12635U;
	uint32_t x454 = 61297920U;
	static volatile int32_t t113 = 91;

    t113 = (x453^((x454!=x455)!=x456));

    if (t113 != 12634) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	uint8_t x458 = 10U;
	int64_t x459 = -8633352974532342LL;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = -1453024;

    t114 = (x457^((x458!=x459)!=x460));

    if (t114 != -32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = -25;
	static uint32_t x463 = UINT32_MAX;
	static uint8_t x464 = 98U;
	volatile int32_t t115 = 1;

    t115 = (x461^((x462!=x463)!=x464));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 594U;
	volatile int16_t x466 = 31;
	int32_t x467 = INT32_MIN;
	int32_t x468 = 776807;
	static volatile int32_t t116 = 6693243;

    t116 = (x465^((x466!=x467)!=x468));

    if (t116 != 595) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = INT32_MAX;
	int8_t x470 = INT8_MAX;
	int64_t x471 = INT64_MIN;
	int64_t x472 = -18347LL;
	static volatile int32_t t117 = -867369;

    t117 = (x469^((x470!=x471)!=x472));

    if (t117 != 2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MAX;
	volatile uint8_t x475 = 75U;
	static int64_t x476 = INT64_MAX;

    t118 = (x473^((x474!=x475)!=x476));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x477 = 7U;
	volatile int8_t x478 = -18;
	int8_t x479 = -1;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t119 = 57U;

    t119 = (x477^((x478!=x479)!=x480));

    if (t119 != 6U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MIN;
	static int64_t x483 = -1LL;
	int8_t x484 = 1;
	volatile int32_t t120 = -463106527;

    t120 = (x481^((x482!=x483)!=x484));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x485 = 434U;
	static uint32_t x486 = UINT32_MAX;
	volatile uint64_t x487 = UINT64_MAX;
	volatile uint16_t x488 = 1U;
	static volatile int32_t t121 = 692;

    t121 = (x485^((x486!=x487)!=x488));

    if (t121 != 434) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	static int32_t x491 = -626650939;
	static int32_t t122 = 234;

    t122 = (x489^((x490!=x491)!=x492));

    if (t122 != 126) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	uint8_t x495 = 23U;
	int32_t t123 = -13831;

    t123 = (x493^((x494!=x495)!=x496));

    if (t123 != 65534) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static volatile uint8_t x498 = 17U;
	int64_t x499 = INT64_MAX;
	static int32_t t124 = 1;

    t124 = (x497^((x498!=x499)!=x500));

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	volatile int8_t x503 = INT8_MAX;
	uint64_t x504 = 113032595454843LLU;
	int64_t t125 = -207424194417LL;

    t125 = (x501^((x502!=x503)!=x504));

    if (t125 != -2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 461096643072113LLU;
	volatile int32_t x506 = -1;
	int16_t x507 = INT16_MIN;
	uint8_t x508 = 2U;
	volatile uint64_t t126 = 4898153348LLU;

    t126 = (x505^((x506!=x507)!=x508));

    if (t126 != 461096643072112LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MIN;
	int8_t x512 = INT8_MAX;
	int32_t t127 = -1;

    t127 = (x509^((x510!=x511)!=x512));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -37247670646168LL;
	static volatile uint16_t x514 = UINT16_MAX;
	int16_t x515 = INT16_MIN;
	uint64_t x516 = 16290890333LLU;
	static volatile int64_t t128 = -5589LL;

    t128 = (x513^((x514!=x515)!=x516));

    if (t128 != -37247670646167LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 24215U;
	volatile int64_t x518 = INT64_MIN;
	uint16_t x519 = 2U;
	int64_t x520 = INT64_MIN;

    t129 = (x517^((x518!=x519)!=x520));

    if (t129 != 24214) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -16;
	static volatile int64_t x522 = 16883688198696LL;
	static uint16_t x524 = 2U;
	int32_t t130 = 48523;

    t130 = (x521^((x522!=x523)!=x524));

    if (t130 != -15) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MAX;
	int32_t x526 = 0;
	int8_t x527 = INT8_MIN;
	uint32_t x528 = 7564U;
	volatile int32_t t131 = -1810651;

    t131 = (x525^((x526!=x527)!=x528));

    if (t131 != 32766) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -62;
	static volatile uint8_t x530 = 96U;
	static int64_t x531 = INT64_MAX;
	int32_t t132 = -28742326;

    t132 = (x529^((x530!=x531)!=x532));

    if (t132 != -61) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	int32_t x535 = INT32_MIN;
	uint8_t x536 = 97U;
	int32_t t133 = 2077;

    t133 = (x533^((x534!=x535)!=x536));

    if (t133 != -2) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int32_t x538 = 11392127;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -2519806966057090393LL;
	static volatile int32_t t134 = 78420883;

    t134 = (x537^((x538!=x539)!=x540));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	static int16_t x542 = -63;
	volatile int64_t x544 = -12786LL;

    t135 = (x541^((x542!=x543)!=x544));

    if (t135 != 32766) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x545 = 3U;
	volatile uint64_t x546 = UINT64_MAX;
	int64_t x547 = 29952553LL;
	int32_t x548 = INT32_MIN;
	int32_t t136 = -332061534;

    t136 = (x545^((x546!=x547)!=x548));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	static int64_t x550 = -1LL;
	int64_t x551 = -1051624LL;

    t137 = (x549^((x550!=x551)!=x552));

    if (t137 != 2147483646) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	int16_t x554 = INT16_MAX;
	uint16_t x556 = 2U;
	volatile int64_t t138 = -4048223050104339774LL;

    t138 = (x553^((x554!=x555)!=x556));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	int16_t x558 = INT16_MAX;
	static int32_t x559 = -1;
	uint16_t x560 = 1U;
	volatile int64_t t139 = INT64_MAX;

    t139 = (x557^((x558!=x559)!=x560));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	volatile int16_t x562 = 5;

    t140 = (x561^((x562!=x563)!=x564));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x566 = 56U;
	int64_t x567 = -1LL;
	static int16_t x568 = INT16_MIN;
	uint32_t t141 = 66U;

    t141 = (x565^((x566!=x567)!=x568));

    if (t141 != 4294967294U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 58U;
	int32_t x571 = -1;
	uint64_t x572 = 345417924074095513LLU;
	int32_t t142 = 1081;

    t142 = (x569^((x570!=x571)!=x572));

    if (t142 != 59) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	static volatile int32_t x575 = 217473142;
	volatile uint8_t x576 = UINT8_MAX;

    t143 = (x573^((x574!=x575)!=x576));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	int32_t x578 = -1;
	int8_t x579 = -1;
	int16_t x580 = INT16_MAX;

    t144 = (x577^((x578!=x579)!=x580));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	int16_t x582 = -1;
	static uint64_t x584 = 1420540067LLU;
	volatile uint64_t t145 = 3LLU;

    t145 = (x581^((x582!=x583)!=x584));

    if (t145 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	uint8_t x586 = UINT8_MAX;
	int16_t x587 = 0;
	volatile uint16_t x588 = 424U;
	volatile int32_t t146 = -986;

    t146 = (x585^((x586!=x587)!=x588));

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x589 = 46U;
	uint16_t x590 = UINT16_MAX;

    t147 = (x589^((x590!=x591)!=x592));

    if (t147 != 47) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x594 = 5397009361518304679LLU;
	volatile int32_t x595 = INT32_MIN;
	uint16_t x596 = 3U;
	uint32_t t148 = 113635U;

    t148 = (x593^((x594!=x595)!=x596));

    if (t148 != 4294967294U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = 7U;
	uint64_t x600 = UINT64_MAX;
	volatile uint32_t t149 = 13065U;

    t149 = (x597^((x598!=x599)!=x600));

    if (t149 != 5179U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x604 = INT8_MIN;

    t150 = (x601^((x602!=x603)!=x604));

    if (t150 != 235) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	volatile int8_t x607 = 0;
	int16_t x608 = 35;
	uint32_t t151 = 8029U;

    t151 = (x605^((x606!=x607)!=x608));

    if (t151 != 1206514U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	static int64_t x611 = 59280977074314268LL;
	static volatile uint16_t x612 = 16402U;
	volatile int64_t t152 = -4568077149962LL;

    t152 = (x609^((x610!=x611)!=x612));

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x615 = 4;
	static uint32_t x616 = 302446701U;
	volatile int64_t t153 = -4079724020840558050LL;

    t153 = (x613^((x614!=x615)!=x616));

    if (t153 != -2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 1;
	static volatile int16_t x618 = INT16_MIN;
	uint32_t x619 = 7U;
	int32_t t154 = 136953;

    t154 = (x617^((x618!=x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = 6760412LL;
	int64_t x622 = -1LL;
	int64_t x623 = 0LL;
	int16_t x624 = INT16_MIN;
	int64_t t155 = 63321652LL;

    t155 = (x621^((x622!=x623)!=x624));

    if (t155 != 6760413LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 3061615697625LLU;
	uint16_t x626 = 3U;
	int16_t x628 = INT16_MIN;
	uint64_t t156 = 73834043LLU;

    t156 = (x625^((x626!=x627)!=x628));

    if (t156 != 3061615697624LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 6966324505118253113LLU;
	int8_t x630 = 1;
	uint64_t x631 = 14877794594LLU;
	int32_t x632 = INT32_MAX;
	uint64_t t157 = 3347839775818886467LLU;

    t157 = (x629^((x630!=x631)!=x632));

    if (t157 != 6966324505118253112LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MIN;
	int32_t x636 = INT32_MIN;
	uint64_t t158 = 971254LLU;

    t158 = (x633^((x634!=x635)!=x636));

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = UINT32_MAX;
	volatile uint32_t x639 = 51U;
	static int16_t x640 = INT16_MIN;
	volatile int64_t t159 = 42380LL;

    t159 = (x637^((x638!=x639)!=x640));

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x641 = INT32_MIN;
	uint16_t x642 = 4555U;
	volatile uint8_t x643 = 2U;
	int16_t x644 = INT16_MIN;

    t160 = (x641^((x642!=x643)!=x644));

    if (t160 != -2147483647) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int8_t x647 = INT8_MAX;
	uint8_t x648 = 8U;
	int32_t t161 = -64;

    t161 = (x645^((x646!=x647)!=x648));

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	volatile int32_t x650 = -1;
	static int64_t x651 = -274165750798949700LL;
	uint16_t x652 = 76U;
	static int32_t t162 = -1025;

    t162 = (x649^((x650!=x651)!=x652));

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = -3;
	int64_t x655 = 1586540404595LL;
	int8_t x656 = INT8_MAX;
	volatile int32_t t163 = 10195408;

    t163 = (x653^((x654!=x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = -1;
	volatile int32_t x658 = INT32_MIN;
	int32_t t164 = -2688;

    t164 = (x657^((x658!=x659)!=x660));

    if (t164 != -2) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 3U;
	volatile int16_t x662 = -969;
	int8_t x663 = 0;
	volatile int32_t t165 = -516925257;

    t165 = (x661^((x662!=x663)!=x664));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = UINT64_MAX;
	static uint16_t x666 = 20252U;
	int32_t x667 = INT32_MIN;
	static volatile int32_t x668 = INT32_MAX;
	uint64_t t166 = 225134200LLU;

    t166 = (x665^((x666!=x667)!=x668));

    if (t166 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x669 = 1U;
	static uint64_t x670 = 901498LLU;
	int16_t x671 = -1;
	uint16_t x672 = 7058U;
	volatile int32_t t167 = -296210;

    t167 = (x669^((x670!=x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 57U;
	int16_t x675 = -326;
	volatile uint8_t x676 = 1U;
	static int32_t t168 = 559519;

    t168 = (x673^((x674!=x675)!=x676));

    if (t168 != 57) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -577;
	int32_t x678 = -1;
	static int32_t t169 = 20147482;

    t169 = (x677^((x678!=x679)!=x680));

    if (t169 != -578) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MIN;
	volatile int64_t x683 = INT64_MIN;
	volatile int16_t x684 = INT16_MAX;

    t170 = (x681^((x682!=x683)!=x684));

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 1760681LLU;
	int16_t x686 = INT16_MIN;
	int32_t x687 = -1;
	int64_t x688 = INT64_MIN;
	uint64_t t171 = 2712LLU;

    t171 = (x685^((x686!=x687)!=x688));

    if (t171 != 1760680LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x690 = INT32_MIN;
	int8_t x691 = -41;
	volatile uint32_t x692 = UINT32_MAX;

    t172 = (x689^((x690!=x691)!=x692));

    if (t172 != 254) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = 18U;
	int8_t x694 = -5;
	uint16_t x695 = 2U;
	int16_t x696 = INT16_MIN;
	int32_t t173 = -579066813;

    t173 = (x693^((x694!=x695)!=x696));

    if (t173 != 19) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	static int8_t x698 = 0;
	volatile uint8_t x699 = 24U;
	int64_t x700 = INT64_MAX;
	int32_t t174 = 744;

    t174 = (x697^((x698!=x699)!=x700));

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int8_t x704 = INT8_MIN;
	static volatile int64_t t175 = -5LL;

    t175 = (x701^((x702!=x703)!=x704));

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = 2036;
	static int16_t x706 = -1;
	uint16_t x707 = 13927U;
	volatile int32_t t176 = -3;

    t176 = (x705^((x706!=x707)!=x708));

    if (t176 != 2037) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 25821;
	int64_t x711 = INT64_MIN;
	uint8_t x712 = 17U;
	volatile int32_t t177 = 18;

    t177 = (x709^((x710!=x711)!=x712));

    if (t177 != 25820) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	int16_t x715 = 1;
	volatile int64_t x716 = INT64_MIN;
	volatile int32_t t178 = 6014111;

    t178 = (x713^((x714!=x715)!=x716));

    if (t178 != 65534) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	int8_t x718 = -1;
	int16_t x719 = INT16_MIN;
	volatile int32_t t179 = 104481;

    t179 = (x717^((x718!=x719)!=x720));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x722 = 31U;
	uint16_t x723 = 1U;
	volatile int16_t x724 = INT16_MAX;
	int32_t t180 = -7440177;

    t180 = (x721^((x722!=x723)!=x724));

    if (t180 != 32766) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x726 = INT16_MAX;
	static volatile int8_t x727 = INT8_MIN;
	uint8_t x728 = 0U;

    t181 = (x725^((x726!=x727)!=x728));

    if (t181 != 126) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	static uint8_t x730 = 0U;
	volatile int32_t x731 = 2439143;
	int64_t x732 = INT64_MIN;
	int32_t t182 = 110271;

    t182 = (x729^((x730!=x731)!=x732));

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = 1;
	static uint64_t x734 = 30028333LLU;
	static volatile int8_t x735 = 5;
	int64_t x736 = -10LL;
	volatile int32_t t183 = -52457;

    t183 = (x733^((x734!=x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x739 = -1LL;
	static volatile int32_t t184 = 3;

    t184 = (x737^((x738!=x739)!=x740));

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x741 = INT8_MAX;
	static int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	int8_t x744 = -2;

    t185 = (x741^((x742!=x743)!=x744));

    if (t185 != 126) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 416998608023292LLU;
	int64_t x746 = INT64_MIN;
	volatile int32_t x747 = INT32_MAX;
	static volatile int8_t x748 = -1;
	uint64_t t186 = 277973173327347231LLU;

    t186 = (x745^((x746!=x747)!=x748));

    if (t186 != 416998608023293LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	volatile int64_t x750 = INT64_MIN;
	int32_t x751 = INT32_MIN;

    t187 = (x749^((x750!=x751)!=x752));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 289113183076922LLU;
	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MAX;
	uint64_t t188 = 1169246399297059LLU;

    t188 = (x753^((x754!=x755)!=x756));

    if (t188 != 289113183076923LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -1;
	int64_t x758 = 976202299273LL;
	volatile int32_t x759 = INT32_MAX;
	static uint32_t x760 = 8U;
	int32_t t189 = 362;

    t189 = (x757^((x758!=x759)!=x760));

    if (t189 != -2) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	static uint8_t x764 = UINT8_MAX;
	int32_t t190 = 1754;

    t190 = (x761^((x762!=x763)!=x764));

    if (t190 != 65534) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x766 = 33U;
	int64_t x767 = -57438767335247520LL;
	static int8_t x768 = -1;
	static volatile int32_t t191 = 864981002;

    t191 = (x765^((x766!=x767)!=x768));

    if (t191 != 65534) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	static int64_t x770 = INT64_MIN;
	static uint16_t x771 = UINT16_MAX;
	volatile int32_t t192 = -6381;

    t192 = (x769^((x770!=x771)!=x772));

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	static uint8_t x774 = 2U;
	int8_t x775 = -1;
	static uint64_t x776 = UINT64_MAX;
	int32_t t193 = -1;

    t193 = (x773^((x774!=x775)!=x776));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = INT8_MIN;
	volatile int64_t x779 = INT64_MIN;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t194 = 134432115;

    t194 = (x777^((x778!=x779)!=x780));

    if (t194 != 254) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -1LL;
	uint32_t x782 = 4222504U;
	volatile int32_t x783 = -1;
	uint8_t x784 = 3U;

    t195 = (x781^((x782!=x783)!=x784));

    if (t195 != -2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = -1;
	int64_t x787 = INT64_MIN;
	volatile int8_t x788 = INT8_MIN;
	static volatile int32_t t196 = -1211;

    t196 = (x785^((x786!=x787)!=x788));

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 122432592393679233LL;
	static int16_t x790 = 4114;
	uint32_t x792 = 67873230U;
	static int64_t t197 = -5391560309665LL;

    t197 = (x789^((x790!=x791)!=x792));

    if (t197 != 122432592393679232LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	uint16_t x794 = UINT16_MAX;
	int16_t x795 = INT16_MIN;
	int64_t x796 = INT64_MAX;

    t198 = (x793^((x794!=x795)!=x796));

    if (t198 != 2147483646) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 0U;
	volatile uint16_t x799 = 1165U;
	uint16_t x800 = UINT16_MAX;
	int32_t t199 = 31;

    t199 = (x797^((x798!=x799)!=x800));

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

