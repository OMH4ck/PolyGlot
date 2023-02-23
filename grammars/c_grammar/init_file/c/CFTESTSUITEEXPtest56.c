
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

int8_t x8 = -3;
int64_t x9 = -1LL;
static int64_t x18 = -1LL;
int32_t x20 = INT32_MAX;
volatile int64_t x31 = -124776158275490663LL;
uint64_t t5 = 7678LLU;
volatile int8_t x41 = INT8_MAX;
int64_t x44 = INT64_MAX;
int64_t t9 = -33477LL;
int8_t x56 = INT8_MIN;
int64_t t10 = -60976016240LL;
int8_t x63 = INT8_MAX;
uint64_t t11 = 160754154581LLU;
volatile int64_t x68 = -1LL;
int64_t x69 = 242LL;
int32_t x70 = -188;
int32_t x72 = 2500;
int32_t x73 = -1;
int64_t x77 = 2324245775859LL;
int8_t x85 = INT8_MIN;
int16_t x86 = -7711;
volatile int16_t x93 = -1;
uint8_t x98 = 54U;
static volatile uint64_t t20 = 80912907835636466LLU;
int32_t x107 = INT32_MIN;
volatile uint64_t t21 = 342LLU;
static int32_t x111 = INT32_MIN;
int64_t x115 = INT64_MIN;
uint8_t x121 = 12U;
int64_t x123 = INT64_MIN;
static int64_t x124 = -430LL;
static volatile int64_t t25 = -553716196537069851LL;
volatile uint16_t x131 = 41U;
uint32_t x135 = 13988U;
volatile uint64_t t28 = 340844862160LLU;
volatile uint32_t x140 = 45061568U;
int64_t t30 = -31712622691079LL;
static uint32_t x147 = UINT32_MAX;
uint32_t x150 = 293991U;
uint64_t x152 = 596478460507581443LLU;
static uint64_t t32 = 33310331437283554LLU;
int32_t x165 = -2456772;
volatile int32_t t35 = -14669718;
int32_t x175 = INT32_MAX;
static int64_t t36 = -9039LL;
static volatile uint64_t t38 = 107472LLU;
uint16_t x185 = UINT16_MAX;
int64_t t39 = 2044101413958864232LL;
int64_t t40 = -38645771506004588LL;
int64_t x193 = INT64_MIN;
volatile int32_t x194 = 8568;
int64_t t41 = 48428491840054LL;
static uint32_t x208 = 13632U;
int16_t x211 = INT16_MAX;
uint64_t t44 = 15251436LLU;
uint64_t x214 = 189953763LLU;
volatile int64_t x215 = INT64_MIN;
uint32_t x234 = 3U;
int64_t t49 = 13297477204530LL;
int64_t x244 = INT64_MAX;
uint8_t x251 = 0U;
uint16_t x252 = 7332U;
int32_t x254 = -201233;
int32_t x255 = -1;
int16_t x269 = INT16_MIN;
int8_t x272 = INT8_MIN;
uint32_t x273 = 33049000U;
volatile int16_t x274 = INT16_MIN;
uint64_t x290 = 233483143955LLU;
static volatile uint64_t t60 = 5492608503LLU;
uint16_t x294 = 37U;
volatile int16_t x297 = -1;
uint64_t x298 = 148678LLU;
int32_t x309 = INT32_MAX;
static int8_t x312 = 19;
volatile int64_t t67 = 1LL;
int16_t x324 = INT16_MIN;
volatile int64_t x330 = INT64_MAX;
volatile int64_t x336 = INT64_MAX;
uint64_t x339 = 7049LLU;
static volatile uint64_t t73 = 36LLU;
volatile uint16_t x351 = 5896U;
uint16_t x353 = UINT16_MAX;
int64_t x361 = -6LL;
volatile uint32_t t80 = UINT32_MAX;
int32_t x373 = INT32_MAX;
int8_t x375 = 0;
int64_t x376 = INT64_MIN;
static volatile int8_t x378 = INT8_MIN;
int16_t x384 = -1;
int8_t x391 = INT8_MIN;
int16_t x393 = INT16_MIN;
volatile int16_t x396 = INT16_MIN;
static volatile uint64_t t87 = 1318453LLU;
static volatile int64_t t90 = 18LL;
int32_t x420 = INT32_MAX;
volatile uint16_t x429 = UINT16_MAX;
uint8_t x437 = UINT8_MAX;
static uint16_t x439 = 31U;
static int16_t x444 = -5;
volatile int32_t x445 = INT32_MAX;
int8_t x446 = INT8_MIN;
static uint32_t x448 = 199759U;
uint16_t x450 = 5U;
int64_t x453 = INT64_MAX;
int16_t x460 = INT16_MIN;
volatile int64_t t100 = 386385245801LL;
volatile uint8_t x465 = 3U;
static int8_t x471 = INT8_MIN;
static volatile uint16_t x478 = 14920U;
volatile uint64_t x485 = UINT64_MAX;
int16_t x491 = INT16_MIN;
volatile uint32_t x499 = 3261192U;
static volatile int8_t x500 = INT8_MAX;
static int16_t x502 = 4;
static volatile int32_t t109 = -880;
volatile uint64_t x507 = UINT64_MAX;
volatile int64_t x509 = -1734256093732LL;
int64_t x512 = INT64_MIN;
int64_t t111 = -1LL;
uint16_t x522 = UINT16_MAX;
int8_t x527 = -1;
volatile int64_t t114 = -809LL;
int32_t x530 = 49;
volatile int64_t t116 = 1LL;
uint32_t x537 = UINT32_MAX;
int32_t x545 = -129158203;
uint32_t x556 = UINT32_MAX;
int16_t x563 = INT16_MIN;
volatile int64_t x565 = INT64_MAX;
volatile uint32_t x566 = UINT32_MAX;
static int8_t x574 = INT8_MAX;
uint32_t x575 = UINT32_MAX;
static int16_t x579 = -1;
int16_t x584 = -1;
volatile int16_t x587 = 1961;
volatile int16_t x588 = INT16_MIN;
uint64_t x592 = 1084948297357654341LLU;
uint64_t t131 = 1481998919179814LLU;
int64_t x612 = 3061970307616452584LL;
int32_t x613 = -1;
uint64_t x620 = UINT64_MAX;
int32_t x637 = -27180102;
uint32_t x646 = UINT32_MAX;
int16_t x647 = -3;
uint64_t x649 = UINT64_MAX;
volatile int8_t x657 = INT8_MIN;
int32_t x658 = -252;
int8_t x663 = INT8_MAX;
int8_t x682 = INT8_MAX;
volatile uint64_t x688 = UINT64_MAX;
int64_t x690 = INT64_MIN;
int16_t x696 = -15;
volatile int32_t x713 = -108476414;
int64_t x714 = -42851602747341LL;
uint16_t x715 = 241U;
uint8_t x723 = UINT8_MAX;
volatile int64_t x724 = -1LL;
volatile int32_t x725 = INT32_MIN;
uint32_t x734 = 7695U;
int32_t x735 = INT32_MIN;
static int8_t x742 = 15;
int16_t x747 = -1;
int64_t t164 = 44672LL;
volatile int32_t t165 = -25708;
volatile uint32_t x757 = 5229U;
int64_t x763 = -1LL;
volatile int32_t x766 = 6319046;
int16_t x768 = -1;
int64_t x773 = -717777753925LL;
volatile int32_t x775 = -1;
uint32_t x778 = 102443U;
volatile uint32_t t171 = 3783U;
int32_t x784 = INT32_MAX;
static int64_t x787 = INT64_MIN;
volatile uint64_t x788 = UINT64_MAX;
static int32_t x793 = INT32_MIN;
int32_t x794 = INT32_MIN;
volatile int32_t t175 = INT32_MIN;
volatile uint32_t x797 = 260U;
int32_t x798 = INT32_MIN;
static uint16_t x801 = UINT16_MAX;
int32_t x809 = INT32_MIN;
static volatile uint64_t x810 = UINT64_MAX;
volatile int8_t x812 = -1;
int8_t x817 = INT8_MIN;
int16_t x828 = INT16_MAX;
int64_t t182 = 1652341666416773201LL;
static int16_t x832 = 2841;
static uint64_t x833 = 6LLU;
uint64_t t184 = 12LLU;
static int16_t x839 = INT16_MAX;
static int16_t x848 = INT16_MAX;
static int32_t x864 = INT32_MIN;
int32_t x867 = -1;
int16_t x869 = INT16_MAX;
int64_t x871 = -268647261147LL;
volatile uint8_t x880 = UINT8_MAX;
int64_t t193 = -289707605667078LL;
volatile int32_t x892 = INT32_MIN;
volatile uint8_t x893 = 28U;
int16_t x894 = INT16_MIN;
static int32_t t197 = 26765;
uint16_t x898 = UINT16_MAX;


void f0(void) {
    	static uint16_t x5 = UINT16_MAX;
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = 53523743;
	uint32_t t0 = 38662232U;

    t0 = (x5^((x6+x7)/x8));

    if (t0 != 65535U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = -153;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (x9^((x10+x11)/x12));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	static volatile uint16_t x14 = 10U;
	int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile int64_t t2 = 262131912788860905LL;

    t2 = (x13^((x14+x15)/x16));

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x17 = 30793516478LLU;
	int8_t x19 = 2;
	uint64_t t3 = 3332346354022033LLU;

    t3 = (x17^((x18+x19)/x20));

    if (t3 != 30793516478LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = 6;
	uint8_t x26 = 57U;
	static int8_t x27 = 31;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t4 = -357438066;

    t4 = (x25^((x26+x27)/x28));

    if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = 3360457227LLU;
	uint16_t x32 = UINT16_MAX;

    t5 = (x29^((x30+x31)/x32));

    if (t5 != 18446464498399886558LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = -1;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = -100250LL;
	static uint8_t x36 = 1U;
	volatile uint64_t t6 = 1LLU;

    t6 = (x33^((x34+x35)/x36));

    if (t6 != 100250LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	int32_t x38 = -3;
	static volatile uint16_t x39 = 86U;
	uint16_t x40 = UINT16_MAX;
	int64_t t7 = INT64_MIN;

    t7 = (x37^((x38+x39)/x40));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 23U;
	volatile int64_t t8 = -4215610949921434LL;

    t8 = (x41^((x42+x43)/x44));

    if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = -1LL;
	int32_t x46 = -1;
	int16_t x47 = INT16_MAX;
	static int16_t x48 = INT16_MAX;

    t9 = (x45^((x46+x47)/x48));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = UINT8_MAX;
	static int64_t x54 = -421059LL;
	uint8_t x55 = 5U;

    t10 = (x53^((x54+x55)/x56));

    if (t10 != 3110LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 933775230144308211LLU;
	static int64_t x62 = 720481768829684LL;
	int32_t x64 = INT32_MAX;

    t11 = (x61^((x62+x63)/x64));

    if (t11 != 933775230143987071LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = 2;
	int64_t x66 = INT64_MIN;
	uint16_t x67 = 27U;
	volatile int64_t t12 = -727262154607212108LL;

    t12 = (x65^((x66+x67)/x68));

    if (t12 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x71 = -1;
	static int64_t t13 = -1853676LL;

    t13 = (x69^((x70+x71)/x72));

    if (t13 != 242LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x74 = UINT8_MAX;
	uint16_t x75 = 948U;
	int32_t x76 = -317461;
	volatile int32_t t14 = 12671;

    t14 = (x73^((x74+x75)/x76));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x78 = 5168U;
	volatile int32_t x79 = -1;
	int64_t x80 = 40900588563456076LL;
	int64_t t15 = -1733LL;

    t15 = (x77^((x78+x79)/x80));

    if (t15 != 2324245775859LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x87 = -1LL;
	volatile int64_t x88 = INT64_MIN;
	int64_t t16 = 14751809LL;

    t16 = (x85^((x86+x87)/x88));

    if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x89 = 146135969988LLU;
	uint16_t x90 = UINT16_MAX;
	volatile int8_t x91 = 5;
	uint8_t x92 = UINT8_MAX;
	uint64_t t17 = 16061559LLU;

    t17 = (x89^((x90+x91)/x92));

    if (t17 != 146135970245LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x94 = 1102;
	int8_t x95 = INT8_MIN;
	static int16_t x96 = -1;
	volatile int32_t t18 = 504966872;

    t18 = (x93^((x94+x95)/x96));

    if (t18 != 973) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x97 = 11399816979LLU;
	int8_t x99 = 0;
	int64_t x100 = INT64_MIN;
	uint64_t t19 = 6880118150954462571LLU;

    t19 = (x97^((x98+x99)/x100));

    if (t19 != 11399816979LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	uint8_t x102 = 0U;
	int32_t x103 = -54347;
	uint64_t x104 = 1134836576LLU;

    t20 = (x101^((x102+x103)/x104));

    if (t20 != 18446744057752275334LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x105 = INT32_MIN;
	uint64_t x106 = 433640508307LLU;
	volatile int32_t x108 = INT32_MIN;

    t21 = (x105^((x106+x107)/x108));

    if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x109 = 0U;
	volatile uint16_t x110 = UINT16_MAX;
	static volatile int16_t x112 = -1;
	static int32_t t22 = -63322;

    t22 = (x109^((x110+x111)/x112));

    if (t22 != 2147418113) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	int8_t x114 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int64_t t23 = 1028539860LL;

    t23 = (x113^((x114+x115)/x116));

    if (t23 != 281470681743360LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x117 = -215LL;
	uint16_t x118 = 5928U;
	int16_t x119 = -49;
	static volatile int8_t x120 = INT8_MIN;
	int64_t t24 = -202592535195949123LL;

    t24 = (x117^((x118+x119)/x120));

    if (t24 != 250LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x122 = INT16_MAX;

    t25 = (x121^((x122+x123)/x124));

    if (t25 != 21449702411290104LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x125 = 1U;
	static volatile uint16_t x126 = 3904U;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t26 = 3349U;

    t26 = (x125^((x126+x127)/x128));

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x129 = 5825LL;
	volatile uint8_t x130 = 28U;
	uint8_t x132 = UINT8_MAX;
	static int64_t t27 = 10LL;

    t27 = (x129^((x130+x131)/x132));

    if (t27 != 5825LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x133 = UINT32_MAX;
	static volatile uint64_t x134 = UINT64_MAX;
	int64_t x136 = INT64_MAX;

    t28 = (x133^((x134+x135)/x136));

    if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 2U;
	int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	volatile uint32_t t29 = 3816U;

    t29 = (x137^((x138+x139)/x140));

    if (t29 != 93U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x141 = 6;
	int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = -328839302445893797LL;

    t30 = (x141^((x142+x143)/x144));

    if (t30 != 6LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MAX;
	int32_t x146 = -1;
	uint32_t x148 = 1U;
	volatile uint32_t t31 = 22U;

    t31 = (x145^((x146+x147)/x148));

    if (t31 != 2147483649U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x151 = -1;

    t32 = (x149^((x150+x151)/x152));

    if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = -1654126158LL;
	static volatile int32_t x155 = 112735099;
	int32_t x156 = -1;
	int64_t t33 = 15497083LL;

    t33 = (x153^((x154+x155)/x156));

    if (t33 != 1541356844LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = 27530129LLU;
	volatile int64_t x162 = INT64_MIN;
	volatile uint8_t x163 = 9U;
	int16_t x164 = -7;
	volatile uint64_t t34 = 1869897164529823LLU;

    t34 = (x161^((x162+x163)/x164));

    if (t34 != 1317624576682787286LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x166 = -1;
	int8_t x167 = -1;
	int32_t x168 = -193224845;

    t35 = (x165^((x166+x167)/x168));

    if (t35 != -2456772) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	int64_t x176 = -1LL;

    t36 = (x173^((x174+x175)/x176));

    if (t36 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x177 = 2U;
	static uint8_t x178 = 46U;
	int16_t x179 = -1;
	volatile int64_t x180 = INT64_MIN;
	int64_t t37 = -951145413071012363LL;

    t37 = (x177^((x178+x179)/x180));

    if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x181 = UINT64_MAX;
	int8_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = -12;

    t38 = (x181^((x182+x183)/x184));

    if (t38 != 178956969LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x186 = 44LL;
	int16_t x187 = -1;
	static int16_t x188 = 1181;

    t39 = (x185^((x186+x187)/x188));

    if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = 727800513;
	int64_t x191 = INT64_MIN;
	volatile int32_t x192 = -1;

    t40 = (x189^((x190+x191)/x192));

    if (t40 != -727800513LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x195 = 1;
	uint16_t x196 = 265U;

    t41 = (x193^((x194+x195)/x196));

    if (t41 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = 0;
	int16_t x202 = 3575;
	volatile int32_t x203 = -36;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t42 = -273799530722506659LL;

    t42 = (x201^((x202+x203)/x204));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = -1;
	volatile int16_t x206 = -276;
	uint16_t x207 = 1U;
	volatile uint32_t t43 = 19217U;

    t43 = (x205^((x206+x207)/x208));

    if (t43 != 4294652230U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = 112LLU;
	static int8_t x210 = INT8_MAX;
	uint32_t x212 = UINT32_MAX;

    t44 = (x209^((x210+x211)/x212));

    if (t44 != 112LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x213 = INT32_MIN;
	uint64_t x216 = 802642030LLU;
	static volatile uint64_t t45 = 180481047LLU;

    t45 = (x213^((x214+x215)/x216));

    if (t45 != 18446744061578496201LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = 791;
	uint32_t x222 = 257745U;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t46 = -2895193651959LL;

    t46 = (x221^((x222+x223)/x224));

    if (t46 != 791LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x225 = INT16_MAX;
	static int32_t x226 = INT32_MAX;
	int64_t x227 = 8272250576372LL;
	static volatile uint8_t x228 = UINT8_MAX;
	volatile int64_t t47 = 232914335870LL;

    t47 = (x225^((x226+x227)/x228));

    if (t47 != 32448633532LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 1U;
	static volatile int8_t x230 = -49;
	uint16_t x231 = 1363U;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t48 = 4102046;

    t48 = (x229^((x230+x231)/x232));

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = -1;
	int64_t x235 = 29639LL;
	int8_t x236 = INT8_MIN;

    t49 = (x233^((x234+x235)/x236));

    if (t49 != 230LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x237 = 5096902326401891420LLU;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = 5592070855348892LL;
	uint8_t x240 = 1U;
	static uint64_t t50 = 85LLU;

    t50 = (x237^((x238+x239)/x240));

    if (t50 != 5091328570927591111LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = 6655;
	int8_t x243 = INT8_MIN;
	volatile int64_t t51 = 5180LL;

    t51 = (x241^((x242+x243)/x244));

    if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = -79796722522958170LL;
	uint16_t x246 = 1147U;
	static uint8_t x247 = 1U;
	int64_t x248 = 265501243287721245LL;
	static int64_t t52 = -3647904006580451501LL;

    t52 = (x245^((x246+x247)/x248));

    if (t52 != -79796722522958170LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	volatile int32_t t53 = -7353686;

    t53 = (x249^((x250+x251)/x252));

    if (t53 != 124) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x253 = 28U;
	int16_t x256 = 6;
	static volatile int32_t t54 = -1996173;

    t54 = (x253^((x254+x255)/x256));

    if (t54 != -33567) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x265 = INT8_MAX;
	uint8_t x266 = 0U;
	int64_t x267 = -1LL;
	static uint64_t x268 = 8618814811746547688LLU;
	volatile uint64_t t55 = 409255918448LLU;

    t55 = (x265^((x266+x267)/x268));

    if (t55 != 125LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t t56 = 85157438;

    t56 = (x269^((x270+x271)/x272));

    if (t56 != -16744960) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x275 = UINT64_MAX;
	uint8_t x276 = 75U;
	uint64_t t57 = 100109407782887857LLU;

    t57 = (x273^((x274+x275)/x276));

    if (t57 != 245956587648917939LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	static int64_t t58 = 97461790LL;

    t58 = (x281^((x282+x283)/x284));

    if (t58 != -72057594021117954LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x285 = INT8_MIN;
	uint64_t x286 = 279145417763LLU;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = INT16_MAX;
	volatile uint64_t t59 = 817LLU;

    t59 = (x285^((x286+x287)/x288));

    if (t59 != 18446744073700901442LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x289 = 7696LL;
	int64_t x291 = 2636LL;
	volatile uint8_t x292 = UINT8_MAX;

    t60 = (x289^((x290+x291)/x292));

    if (t60 != 915627846LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x293 = 14;
	static int8_t x295 = INT8_MIN;
	uint64_t x296 = 3177661200249LLU;
	static volatile uint64_t t61 = 1758665644LLU;

    t61 = (x293^((x294+x295)/x296));

    if (t61 != 5805122LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x299 = 479LL;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t62 = UINT64_MAX;

    t62 = (x297^((x298+x299)/x300));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = INT32_MIN;
	uint32_t x302 = 450U;
	int8_t x303 = 1;
	static int64_t x304 = -1LL;
	int64_t t63 = -551347LL;

    t63 = (x301^((x302+x303)/x304));

    if (t63 != 2147483197LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x305 = 5102840U;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = 11LL;
	int64_t t64 = -346704200179677LL;

    t64 = (x305^((x306+x307)/x308));

    if (t64 != 386403728LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x310 = 29U;
	int8_t x311 = INT8_MIN;
	static volatile int32_t t65 = -909591132;

    t65 = (x309^((x310+x311)/x312));

    if (t65 != -2147483644) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = -1;
	int8_t x316 = -1;
	static uint32_t t66 = UINT32_MAX;

    t66 = (x313^((x314+x315)/x316));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x317 = 39U;
	static int64_t x318 = -3278145LL;
	uint8_t x319 = 6U;
	uint16_t x320 = 58U;

    t67 = (x317^((x318+x319)/x320));

    if (t67 != -56546LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x321 = INT32_MIN;
	volatile int16_t x322 = INT16_MIN;
	int64_t x323 = 12589LL;
	volatile int64_t t68 = 789411006465187722LL;

    t68 = (x321^((x322+x323)/x324));

    if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x325 = INT16_MIN;
	static uint16_t x326 = 30898U;
	int16_t x327 = 7;
	uint64_t x328 = 107473908945LLU;
	volatile uint64_t t69 = 223LLU;

    t69 = (x325^((x326+x327)/x328));

    if (t69 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x329 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	static uint64_t t70 = 4LLU;

    t70 = (x329^((x330+x331)/x332));

    if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = -8665640;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	int64_t t71 = -12493497776LL;

    t71 = (x333^((x334+x335)/x336));

    if (t71 != -8665640LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint64_t t72 = 17LLU;

    t72 = (x337^((x338+x339)/x340));

    if (t72 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x341 = 4;
	int8_t x342 = -1;
	static int32_t x343 = -1;
	volatile uint64_t x344 = 584999216318266LLU;

    t73 = (x341^((x342+x343)/x344));

    if (t73 != 31528LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	static volatile uint64_t x347 = UINT64_MAX;
	volatile uint8_t x348 = UINT8_MAX;
	static volatile uint64_t t74 = 598042LLU;

    t74 = (x345^((x346+x347)/x348));

    if (t74 != 72340174951874303LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = -1;
	uint64_t x350 = 70LLU;
	static int16_t x352 = -1;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x349^((x350+x351)/x352));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x354 = 52;
	int32_t x355 = 178833152;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t76 = 27573941;

    t76 = (x353^((x354+x355)/x356));

    if (t76 != 60078) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x357 = -4;
	volatile int16_t x358 = -1;
	volatile int16_t x359 = -58;
	volatile uint8_t x360 = 13U;
	volatile int32_t t77 = -250;

    t77 = (x357^((x358+x359)/x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 32977;
	static int64_t t78 = 994640695LL;

    t78 = (x361^((x362+x363)/x364));

    if (t78 != -6LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x365 = 1;
	volatile uint64_t x366 = UINT64_MAX;
	int64_t x367 = 2991713308150LL;
	int32_t x368 = 7263;
	uint64_t t79 = 600471979LLU;

    t79 = (x365^((x366+x367)/x368));

    if (t79 != 411911510LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x369 = -1;
	uint16_t x370 = 18U;
	static uint32_t x371 = 1364U;
	volatile uint32_t x372 = UINT32_MAX;

    t80 = (x369^((x370+x371)/x372));

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x374 = 2299;
	volatile int64_t t81 = -689549067459854LL;

    t81 = (x373^((x374+x375)/x376));

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x377 = -1;
	uint8_t x379 = 116U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t82 = -873;

    t82 = (x377^((x378+x379)/x380));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = INT16_MAX;
	int64_t x382 = 14963886571737431LL;
	uint64_t x383 = 105634478LLU;
	uint64_t t83 = 3LLU;

    t83 = (x381^((x382+x383)/x384));

    if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x385 = 534738;
	volatile int16_t x386 = INT16_MIN;
	static uint64_t x387 = 84313429592347LLU;
	int8_t x388 = -5;
	volatile uint64_t t84 = 22LLU;

    t84 = (x385^((x386+x387)/x388));

    if (t84 != 534738LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x389 = -903;
	int32_t x390 = 103;
	volatile int16_t x392 = -1;
	static volatile int32_t t85 = 0;

    t85 = (x389^((x390+x391)/x392));

    if (t85 != -928) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x394 = 1;
	static int8_t x395 = INT8_MIN;
	volatile int32_t t86 = 862917272;

    t86 = (x393^((x394+x395)/x396));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MIN;
	uint8_t x398 = UINT8_MAX;
	static uint64_t x399 = UINT64_MAX;
	volatile int8_t x400 = INT8_MIN;

    t87 = (x397^((x398+x399)/x400));

    if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = -1;
	int64_t x407 = INT64_MAX;
	int64_t x408 = INT64_MIN;
	int64_t t88 = 612732304488393LL;

    t88 = (x405^((x406+x407)/x408));

    if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x409 = INT32_MIN;
	uint64_t x410 = 915895473782LLU;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	static uint64_t t89 = 10LLU;

    t89 = (x409^((x410+x411)/x412));

    if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x413 = -1LL;
	uint8_t x414 = 0U;
	int64_t x415 = 1LL;
	int32_t x416 = INT32_MIN;

    t90 = (x413^((x414+x415)/x416));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x417 = INT32_MIN;
	static int64_t x418 = INT64_MIN;
	int64_t x419 = 37628602LL;
	static volatile int64_t t91 = 66432579826287LL;

    t91 = (x417^((x418+x419)/x420));

    if (t91 != 6442450943LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x425 = 5600;
	static int8_t x426 = 19;
	int8_t x427 = -5;
	int64_t x428 = 1LL;
	int64_t t92 = 207577463944LL;

    t92 = (x425^((x426+x427)/x428));

    if (t92 != 5614LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = 1;
	static int32_t t93 = -346033;

    t93 = (x429^((x430+x431)/x432));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x438 = 211;
	static uint16_t x440 = UINT16_MAX;
	volatile int32_t t94 = -478435091;

    t94 = (x437^((x438+x439)/x440));

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	int32_t x442 = INT32_MAX;
	int32_t x443 = INT32_MIN;
	uint32_t t95 = UINT32_MAX;

    t95 = (x441^((x442+x443)/x444));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x447 = 32;
	static uint32_t t96 = 28U;

    t96 = (x445^((x446+x447)/x448));

    if (t96 != 2147462147U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x449 = 131356U;
	int8_t x451 = 1;
	volatile uint16_t x452 = 15U;
	uint32_t t97 = 65U;

    t97 = (x449^((x450+x451)/x452));

    if (t97 != 131356U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x454 = -3066LL;
	static uint32_t x455 = 119726826U;
	int8_t x456 = -1;
	int64_t t98 = -4LL;

    t98 = (x453^((x454+x455)/x456));

    if (t98 != -9223372036735052049LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x457 = -1LL;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = 653;
	volatile int64_t t99 = -6917LL;

    t99 = (x457^((x458+x459)/x460));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = 1;
	int32_t x462 = -319568;
	int32_t x463 = 12005;
	volatile int64_t x464 = INT64_MIN;

    t100 = (x461^((x462+x463)/x464));

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x466 = INT16_MIN;
	int32_t x467 = -628216;
	int64_t x468 = INT64_MIN;
	static int64_t t101 = 662277384174LL;

    t101 = (x465^((x466+x467)/x468));

    if (t101 != 3LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x469 = 57;
	uint64_t x470 = 1557736573LLU;
	static int32_t x472 = INT32_MIN;
	volatile uint64_t t102 = 43921954558848110LLU;

    t102 = (x469^((x470+x471)/x472));

    if (t102 != 57LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = 12234785LL;
	volatile int64_t x474 = INT64_MAX;
	int64_t x475 = INT64_MIN;
	int64_t x476 = INT64_MAX;
	int64_t t103 = 22454709342582LL;

    t103 = (x473^((x474+x475)/x476));

    if (t103 != 12234785LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x477 = 66392652LL;
	static uint8_t x479 = 1U;
	int32_t x480 = INT32_MIN;
	static int64_t t104 = 0LL;

    t104 = (x477^((x478+x479)/x480));

    if (t104 != 66392652LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x481 = -1;
	volatile int8_t x482 = INT8_MIN;
	static volatile int16_t x483 = INT16_MAX;
	volatile int16_t x484 = 1;
	static volatile int32_t t105 = 4020055;

    t105 = (x481^((x482+x483)/x484));

    if (t105 != -32640) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x486 = -1328;
	volatile int16_t x487 = INT16_MIN;
	int16_t x488 = -1;
	volatile uint64_t t106 = 1696293109LLU;

    t106 = (x485^((x486+x487)/x488));

    if (t106 != 18446744073709517519LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x489 = 19087LLU;
	int16_t x490 = -119;
	uint16_t x492 = 39U;
	static volatile uint64_t t107 = 1092047LLU;

    t107 = (x489^((x490+x491)/x492));

    if (t107 != 18446744073709532730LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = 27;
	int64_t x498 = INT64_MIN;
	static int64_t t108 = -241046LL;

    t108 = (x497^((x498+x499)/x500));

    if (t108 != -72624976668122155LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = -76;
	int32_t x503 = 10;
	uint16_t x504 = UINT16_MAX;

    t109 = (x501^((x502+x503)/x504));

    if (t109 != -76) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x505 = UINT32_MAX;
	int64_t x506 = INT64_MAX;
	static uint64_t x508 = UINT64_MAX;
	uint64_t t110 = 3013945885228074LLU;

    t110 = (x505^((x506+x507)/x508));

    if (t110 != 4294967295LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x510 = -7005;
	uint16_t x511 = UINT16_MAX;

    t111 = (x509^((x510+x511)/x512));

    if (t111 != -1734256093732LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x513 = 1U;
	int64_t x514 = -10LL;
	volatile uint32_t x515 = 54U;
	uint16_t x516 = 127U;
	static volatile int64_t t112 = 642673LL;

    t112 = (x513^((x514+x515)/x516));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x521 = INT8_MAX;
	int64_t x523 = INT64_MIN;
	static uint8_t x524 = 69U;
	int64_t t113 = -5145849833710253LL;

    t113 = (x521^((x522+x523)/x524));

    if (t113 != -133672058505140617LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x525 = INT64_MAX;
	int64_t x526 = -1131957544LL;
	int64_t x528 = -1LL;

    t114 = (x525^((x526+x527)/x528));

    if (t114 != 9223372035722818262LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x529 = INT8_MIN;
	volatile uint32_t x531 = 1U;
	int16_t x532 = -10;
	volatile uint32_t t115 = 44U;

    t115 = (x529^((x530+x531)/x532));

    if (t115 != 4294967168U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x533 = 9U;
	int64_t x534 = INT64_MAX;
	volatile int32_t x535 = INT32_MIN;
	static int8_t x536 = 1;

    t116 = (x533^((x534+x535)/x536));

    if (t116 != 9223372034707292150LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x538 = INT64_MIN;
	volatile uint32_t x539 = 4850244U;
	uint8_t x540 = 7U;
	volatile int64_t t117 = 42095497234904426LL;

    t117 = (x537^((x538+x539)/x540));

    if (t117 != -1317624578534932564LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile uint32_t x544 = 249109704U;
	volatile int64_t t118 = 65042418673LL;

    t118 = (x541^((x542+x543)/x544));

    if (t118 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x546 = 9861U;
	uint32_t x547 = 38009U;
	volatile uint16_t x548 = 162U;
	static uint32_t t119 = 87857U;

    t119 = (x545^((x546+x547)/x548));

    if (t119 != 4165808866U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x549 = 22138745U;
	int64_t x550 = -2LL;
	static int8_t x551 = INT8_MAX;
	int32_t x552 = INT32_MIN;
	int64_t t120 = 7490792062693639LL;

    t120 = (x549^((x550+x551)/x552));

    if (t120 != 22138745LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x553 = 780U;
	int64_t x554 = INT64_MIN;
	int64_t x555 = 0LL;
	static int64_t t121 = 31484943LL;

    t121 = (x553^((x554+x555)/x556));

    if (t121 != -2147482868LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x557 = 7U;
	volatile uint16_t x558 = 26056U;
	uint64_t x559 = 7294514139334262LLU;
	static volatile int64_t x560 = INT64_MIN;
	uint64_t t122 = 1368422LLU;

    t122 = (x557^((x558+x559)/x560));

    if (t122 != 7LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = 44;
	uint64_t x562 = 3031994789993LLU;
	int64_t x564 = 38112697186727295LL;
	static uint64_t t123 = 288781945LLU;

    t123 = (x561^((x562+x563)/x564));

    if (t123 != 44LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x567 = 14U;
	int64_t x568 = 6124652LL;
	int64_t t124 = INT64_MAX;

    t124 = (x565^((x566+x567)/x568));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x573 = 212391775;
	static int64_t x576 = -491872LL;
	volatile int64_t t125 = -42170048895047LL;

    t125 = (x573^((x574+x575)/x576));

    if (t125 != 212391775LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x577 = UINT8_MAX;
	int8_t x578 = -1;
	static uint64_t x580 = UINT64_MAX;
	uint64_t t126 = 12732961LLU;

    t126 = (x577^((x578+x579)/x580));

    if (t126 != 255LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x581 = -709;
	int8_t x582 = 26;
	static int32_t x583 = 62;
	static int32_t t127 = -743083;

    t127 = (x581^((x582+x583)/x584));

    if (t127 != 659) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x585 = -1;
	int8_t x586 = INT8_MIN;
	volatile int32_t t128 = 375;

    t128 = (x585^((x586+x587)/x588));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x589 = INT8_MIN;
	static int64_t x590 = INT64_MAX;
	int8_t x591 = -1;
	static volatile uint64_t t129 = 14810653869LLU;

    t129 = (x589^((x590+x591)/x592));

    if (t129 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x593 = INT32_MIN;
	int64_t x594 = INT64_MIN;
	int32_t x595 = 1;
	static int32_t x596 = 15625;
	int64_t t130 = -243815LL;

    t130 = (x593^((x594+x595)/x596));

    if (t130 != 590294062547535LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x597 = 50611870477909LL;
	int8_t x598 = -1;
	static uint64_t x599 = 2LLU;
	static int64_t x600 = -105603916745253736LL;

    t131 = (x597^((x598+x599)/x600));

    if (t131 != 50611870477909LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x601 = -1;
	int32_t x602 = INT32_MIN;
	int32_t x603 = INT32_MAX;
	int16_t x604 = -1;
	int32_t t132 = -51573222;

    t132 = (x601^((x602+x603)/x604));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x605 = 2;
	uint32_t x606 = 6445U;
	int64_t x607 = 89LL;
	static int32_t x608 = -1;
	static volatile int64_t t133 = 10974447510201597LL;

    t133 = (x605^((x606+x607)/x608));

    if (t133 != -6536LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = -3988;
	int16_t x610 = -567;
	static volatile uint16_t x611 = 2U;
	volatile int64_t t134 = -1421812062736199242LL;

    t134 = (x609^((x610+x611)/x612));

    if (t134 != -3988LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x614 = -1;
	uint8_t x615 = 113U;
	int64_t x616 = INT64_MAX;
	static int64_t t135 = 0LL;

    t135 = (x613^((x614+x615)/x616));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x617 = -1;
	int16_t x618 = 1;
	uint16_t x619 = 57U;
	static uint64_t t136 = UINT64_MAX;

    t136 = (x617^((x618+x619)/x620));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x621 = UINT16_MAX;
	uint8_t x622 = UINT8_MAX;
	uint8_t x623 = UINT8_MAX;
	static uint32_t x624 = UINT32_MAX;
	uint32_t t137 = 30642793U;

    t137 = (x621^((x622+x623)/x624));

    if (t137 != 65535U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x625 = -1;
	int8_t x626 = 0;
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = INT8_MAX;
	volatile uint64_t t138 = 805597616LLU;

    t138 = (x625^((x626+x627)/x628));

    if (t138 != 18301494120373255933LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x629 = INT64_MAX;
	int32_t x630 = -1;
	uint16_t x631 = 3942U;
	uint16_t x632 = UINT16_MAX;
	volatile int64_t t139 = INT64_MAX;

    t139 = (x629^((x630+x631)/x632));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x633 = -1439;
	uint16_t x634 = 1U;
	static volatile int32_t x635 = INT32_MIN;
	static volatile int64_t x636 = INT64_MIN;
	static int64_t t140 = -19710LL;

    t140 = (x633^((x634+x635)/x636));

    if (t140 != -1439LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x638 = UINT8_MAX;
	static volatile uint32_t x639 = UINT32_MAX;
	static int32_t x640 = INT32_MIN;
	static volatile uint32_t t141 = 304U;

    t141 = (x637^((x638+x639)/x640));

    if (t141 != 4267787194U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x641 = 114U;
	volatile int16_t x642 = 110;
	volatile int32_t x643 = 15;
	int16_t x644 = INT16_MIN;
	int32_t t142 = 516400751;

    t142 = (x641^((x642+x643)/x644));

    if (t142 != 114) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x645 = UINT32_MAX;
	int32_t x648 = -1;
	static uint32_t t143 = UINT32_MAX;

    t143 = (x645^((x646+x647)/x648));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x650 = 87U;
	int16_t x651 = -1;
	int8_t x652 = -27;
	uint64_t t144 = 4460537694874LLU;

    t144 = (x649^((x650+x651)/x652));

    if (t144 != 2LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x653 = UINT64_MAX;
	uint8_t x654 = UINT8_MAX;
	int32_t x655 = INT32_MIN;
	int32_t x656 = INT32_MIN;
	uint64_t t145 = UINT64_MAX;

    t145 = (x653^((x654+x655)/x656));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x659 = INT16_MAX;
	int16_t x660 = -1;
	volatile int32_t t146 = 1502339;

    t146 = (x657^((x658+x659)/x660));

    if (t146 != 32637) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x661 = 1363;
	static int8_t x662 = INT8_MIN;
	static uint16_t x664 = 454U;
	volatile int32_t t147 = 7358021;

    t147 = (x661^((x662+x663)/x664));

    if (t147 != 1363) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x665 = 194U;
	volatile int16_t x666 = -13;
	int64_t x667 = 8359063LL;
	int8_t x668 = 6;
	int64_t t148 = 30021635712047560LL;

    t148 = (x665^((x666+x667)/x668));

    if (t148 != 1393365LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x673 = -1;
	volatile int8_t x674 = -15;
	uint32_t x675 = 43216916U;
	int8_t x676 = 2;
	volatile uint32_t t149 = 32U;

    t149 = (x673^((x674+x675)/x676));

    if (t149 != 4273358845U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	static int8_t x678 = INT8_MAX;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -438712;
	static int32_t t150 = -43;

    t150 = (x677^((x678+x679)/x680));

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x681 = UINT16_MAX;
	volatile int64_t x683 = 1LL;
	int32_t x684 = -1054519319;
	int64_t t151 = 1130463633364LL;

    t151 = (x681^((x682+x683)/x684));

    if (t151 != 65535LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x685 = -1;
	volatile uint16_t x686 = UINT16_MAX;
	int8_t x687 = INT8_MAX;
	uint64_t t152 = UINT64_MAX;

    t152 = (x685^((x686+x687)/x688));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x689 = INT32_MIN;
	int8_t x691 = 1;
	static uint64_t x692 = UINT64_MAX;
	static volatile uint64_t t153 = 944LLU;

    t153 = (x689^((x690+x691)/x692));

    if (t153 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x693 = 13247557U;
	uint16_t x694 = 5598U;
	uint32_t x695 = UINT32_MAX;
	volatile uint32_t t154 = 251U;

    t154 = (x693^((x694+x695)/x696));

    if (t154 != 13247557U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x709 = 1724U;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = 33U;
	uint32_t x712 = 431U;
	uint32_t t155 = 7379424U;

    t155 = (x709^((x710+x711)/x712));

    if (t155 != 9964361U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x716 = INT16_MIN;
	volatile int64_t t156 = 21806815962LL;

    t156 = (x713^((x714+x715)/x716));

    if (t156 != -1267032804LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x721 = 3;
	int16_t x722 = INT16_MIN;
	volatile int64_t t157 = 192641LL;

    t157 = (x721^((x722+x723)/x724));

    if (t157 != 32514LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x726 = 621;
	int32_t x727 = INT32_MIN;
	uint64_t x728 = UINT64_MAX;
	uint64_t t158 = 11LLU;

    t158 = (x725^((x726+x727)/x728));

    if (t158 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x729 = UINT32_MAX;
	static volatile int32_t x730 = -14;
	uint8_t x731 = 5U;
	int16_t x732 = INT16_MIN;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x729^((x730+x731)/x732));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x733 = 56U;
	static int8_t x736 = INT8_MAX;
	volatile uint32_t t160 = 205U;

    t160 = (x733^((x734+x735)/x736));

    if (t160 != 16909436U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x737 = INT8_MIN;
	static int16_t x738 = -11423;
	static uint32_t x739 = 1081804098U;
	int32_t x740 = -1;
	static uint32_t t161 = 106U;

    t161 = (x737^((x738+x739)/x740));

    if (t161 != 4294967168U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x741 = 12338282LLU;
	int64_t x743 = INT64_MIN;
	volatile int16_t x744 = -1;
	volatile uint64_t t162 = 5LLU;

    t162 = (x741^((x742+x743)/x744));

    if (t162 != 9223372036842437531LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	static int16_t x748 = 3;
	volatile int32_t t163 = -761314;

    t163 = (x745^((x746+x747)/x748));

    if (t163 != 21845) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int64_t x750 = INT64_MAX;
	int64_t x751 = INT64_MIN;
	volatile int64_t x752 = INT64_MIN;

    t164 = (x749^((x750+x751)/x752));

    if (t164 != 65535LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x753 = -7;
	int8_t x754 = INT8_MAX;
	static int16_t x755 = INT16_MAX;
	volatile int16_t x756 = INT16_MIN;

    t165 = (x753^((x754+x755)/x756));

    if (t165 != 6) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x758 = -3284;
	int16_t x759 = INT16_MIN;
	int32_t x760 = INT32_MAX;
	volatile uint32_t t166 = 72933592U;

    t166 = (x757^((x758+x759)/x760));

    if (t166 != 5229U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x761 = -81;
	volatile int8_t x762 = INT8_MAX;
	static volatile int32_t x764 = 7;
	volatile int64_t t167 = -214848282982416LL;

    t167 = (x761^((x762+x763)/x764));

    if (t167 != -67LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x765 = 31772841;
	uint64_t x767 = 65580635LLU;
	volatile uint64_t t168 = 1330853977LLU;

    t168 = (x765^((x766+x767)/x768));

    if (t168 != 31772841LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x769 = 0;
	int32_t x770 = 48650;
	volatile uint8_t x771 = UINT8_MAX;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t169 = 3LLU;

    t169 = (x769^((x770+x771)/x772));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x774 = INT16_MAX;
	int16_t x776 = INT16_MAX;
	volatile int64_t t170 = 86421872876653989LL;

    t170 = (x773^((x774+x775)/x776));

    if (t170 != -717777753925LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x777 = 527765U;
	int32_t x779 = INT32_MAX;
	int8_t x780 = INT8_MIN;

    t171 = (x777^((x778+x779)/x780));

    if (t171 != 527765U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x781 = -465;
	static uint16_t x782 = 15749U;
	uint16_t x783 = UINT16_MAX;
	int32_t t172 = -3;

    t172 = (x781^((x782+x783)/x784));

    if (t172 != -465) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x785 = -2;
	uint64_t x786 = 677720872LLU;
	volatile uint64_t t173 = 1282853950515733503LLU;

    t173 = (x785^((x786+x787)/x788));

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x789 = UINT32_MAX;
	int16_t x790 = -1;
	int32_t x791 = -1;
	int16_t x792 = -1;
	uint32_t t174 = 79U;

    t174 = (x789^((x790+x791)/x792));

    if (t174 != 4294967293U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x795 = INT8_MAX;
	volatile int32_t x796 = INT32_MIN;

    t175 = (x793^((x794+x795)/x796));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x799 = 50064446;
	int8_t x800 = -4;
	volatile uint32_t t176 = 219U;

    t176 = (x797^((x798+x799)/x800));

    if (t176 != 524355060U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x802 = 6U;
	volatile int8_t x803 = -1;
	int16_t x804 = 433;
	volatile int32_t t177 = 3581;

    t177 = (x801^((x802+x803)/x804));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x805 = 3U;
	static int64_t x806 = -1LL;
	static uint16_t x807 = 2757U;
	uint32_t x808 = 59U;
	volatile int64_t t178 = 2008490LL;

    t178 = (x805^((x806+x807)/x808));

    if (t178 != 45LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x811 = UINT16_MAX;
	uint64_t t179 = 37157709195939734LLU;

    t179 = (x809^((x810+x811)/x812));

    if (t179 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x813 = -1;
	volatile uint16_t x814 = 7U;
	int8_t x815 = INT8_MIN;
	volatile uint16_t x816 = 327U;
	volatile int32_t t180 = 1;

    t180 = (x813^((x814+x815)/x816));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x818 = INT64_MAX;
	static int64_t x819 = INT64_MIN;
	volatile int16_t x820 = -9606;
	int64_t t181 = -772021832255977LL;

    t181 = (x817^((x818+x819)/x820));

    if (t181 != -128LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x825 = 53LL;
	int8_t x826 = INT8_MIN;
	int16_t x827 = 93;

    t182 = (x825^((x826+x827)/x828));

    if (t182 != 53LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x829 = 19614595LL;
	static volatile uint64_t x830 = 1006246037LLU;
	int16_t x831 = 5028;
	volatile uint64_t t183 = 176011336622586990LLU;

    t183 = (x829^((x830+x831)/x832));

    if (t183 != 19803150LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x834 = -1;
	uint8_t x835 = 11U;
	int8_t x836 = INT8_MIN;

    t184 = (x833^((x834+x835)/x836));

    if (t184 != 6LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x837 = INT8_MAX;
	uint8_t x838 = 18U;
	uint64_t x840 = 32020979LLU;
	uint64_t t185 = 72LLU;

    t185 = (x837^((x838+x839)/x840));

    if (t185 != 127LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x841 = INT64_MIN;
	static uint32_t x842 = 2U;
	volatile int16_t x843 = INT16_MIN;
	static int32_t x844 = -1;
	volatile int64_t t186 = INT64_MIN;

    t186 = (x841^((x842+x843)/x844));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x845 = 8046;
	volatile uint16_t x846 = 169U;
	int8_t x847 = -6;
	int32_t t187 = -1473902;

    t187 = (x845^((x846+x847)/x848));

    if (t187 != 8046) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x849 = -1;
	int32_t x850 = INT32_MAX;
	uint64_t x851 = 25322779290LLU;
	volatile int8_t x852 = -53;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x849^((x850+x851)/x852));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x861 = 24U;
	uint64_t x862 = UINT64_MAX;
	uint64_t x863 = 153349303217878329LLU;
	uint64_t t189 = 32LLU;

    t189 = (x861^((x862+x863)/x864));

    if (t189 != 24LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x865 = INT64_MIN;
	volatile uint16_t x866 = 116U;
	static int8_t x868 = -11;
	static volatile int64_t t190 = 507185962391003707LL;

    t190 = (x865^((x866+x867)/x868));

    if (t190 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x870 = 495617133LLU;
	int32_t x872 = INT32_MIN;
	volatile uint64_t t191 = 762490688569760LLU;

    t191 = (x869^((x870+x871)/x872));

    if (t191 != 32767LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x873 = -1LL;
	volatile int64_t x874 = -1LL;
	uint64_t x875 = 2736170628009362381LLU;
	int8_t x876 = INT8_MIN;
	static uint64_t t192 = UINT64_MAX;

    t192 = (x873^((x874+x875)/x876));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x877 = -5891LL;
	uint16_t x878 = 3958U;
	static volatile int64_t x879 = INT64_MIN;

    t193 = (x877^((x878+x879)/x880));

    if (t193 != 36170086419044205LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x881 = 58U;
	uint64_t x882 = 1052LLU;
	uint8_t x883 = 77U;
	int16_t x884 = INT16_MAX;
	uint64_t t194 = 393LLU;

    t194 = (x881^((x882+x883)/x884));

    if (t194 != 58LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x885 = 26228U;
	static int16_t x886 = -1;
	static int8_t x887 = -1;
	int8_t x888 = 2;
	uint32_t t195 = 37617682U;

    t195 = (x885^((x886+x887)/x888));

    if (t195 != 4294941067U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x889 = UINT16_MAX;
	static uint16_t x890 = 112U;
	int8_t x891 = -1;
	int32_t t196 = -53;

    t196 = (x889^((x890+x891)/x892));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x895 = 2;
	int32_t x896 = INT32_MAX;

    t197 = (x893^((x894+x895)/x896));

    if (t197 != 28) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x897 = -1;
	int16_t x899 = INT16_MAX;
	int32_t x900 = -1;
	static volatile int32_t t198 = 31487;

    t198 = (x897^((x898+x899)/x900));

    if (t198 != 98301) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x901 = -1;
	static int8_t x902 = INT8_MIN;
	uint64_t x903 = 527317407283LLU;
	static int32_t x904 = -8;
	uint64_t t199 = UINT64_MAX;

    t199 = (x901^((x902+x903)/x904));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

