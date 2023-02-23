
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

static int32_t x1 = -1;
static int64_t x15 = INT64_MAX;
static int32_t t3 = -35964127;
uint32_t x23 = UINT32_MAX;
int64_t x26 = INT64_MIN;
uint32_t x30 = 17U;
int8_t x38 = -1;
int32_t t9 = -62118;
int32_t x72 = -100087;
int64_t x74 = -280LL;
int32_t t16 = 55580294;
int16_t x77 = INT16_MAX;
volatile int8_t x79 = INT8_MAX;
int64_t x83 = INT64_MAX;
int16_t x84 = -396;
static uint32_t x87 = 2029997U;
int16_t x91 = 89;
int8_t x99 = 10;
int64_t x102 = 25LL;
volatile uint16_t x109 = UINT16_MAX;
static volatile int8_t x132 = -17;
int64_t x135 = -1LL;
int8_t x140 = INT8_MIN;
int32_t t31 = -376;
int8_t x143 = INT8_MIN;
static volatile int32_t t32 = -64487567;
static volatile uint64_t x146 = UINT64_MAX;
static uint64_t x152 = 1911LLU;
static int32_t t34 = 361263096;
int8_t x155 = INT8_MIN;
static int32_t t35 = -87;
int64_t x176 = 2383152128524LL;
int32_t t39 = -7808158;
static int8_t x198 = -5;
int16_t x200 = -1;
int32_t t43 = 6;
static uint16_t x204 = 0U;
int64_t x212 = -332081519170165251LL;
static int8_t x225 = -1;
volatile int8_t x226 = 45;
static int8_t x227 = 55;
int8_t x230 = INT8_MIN;
volatile uint16_t x233 = UINT16_MAX;
int32_t x234 = 0;
int32_t x244 = -3;
volatile int8_t x252 = -1;
int64_t x257 = 7610608902337092LL;
int32_t x263 = -1;
static volatile int32_t t59 = 1842;
static int64_t x269 = INT64_MIN;
int8_t x272 = INT8_MIN;
uint32_t x280 = 94039400U;
int32_t x282 = -141;
volatile uint32_t x285 = 1U;
int64_t x289 = -1LL;
int32_t x292 = 1;
int32_t t65 = -6;
int64_t x298 = INT64_MIN;
int32_t t66 = 0;
volatile int32_t x303 = 3;
static uint8_t x309 = 2U;
int64_t x314 = -1LL;
static volatile int32_t x316 = -7;
static volatile int16_t x317 = INT16_MAX;
static volatile int64_t x318 = 110274021228933LL;
int32_t t70 = -1530;
int32_t x348 = INT32_MAX;
volatile int32_t t76 = -87;
int64_t x354 = -1LL;
int32_t t78 = 21;
int8_t x370 = INT8_MIN;
static int64_t x372 = INT64_MAX;
volatile int32_t t83 = -351132;
int16_t x388 = INT16_MIN;
int8_t x389 = -1;
volatile int32_t t87 = -7;
static int64_t x409 = -642437676210608715LL;
static int32_t x421 = -1;
int32_t t92 = 11;
uint8_t x430 = UINT8_MAX;
static int8_t x431 = -31;
int32_t t93 = 611259879;
int16_t x434 = INT16_MAX;
static int8_t x439 = INT8_MAX;
static uint8_t x442 = 98U;
volatile int32_t x447 = INT32_MAX;
int8_t x448 = 0;
int32_t x455 = 183;
uint64_t x456 = 789273269857529188LLU;
int32_t x460 = -498;
volatile int8_t x464 = INT8_MAX;
volatile uint8_t x470 = 3U;
int32_t x474 = -805707704;
volatile int16_t x482 = INT16_MIN;
volatile uint16_t x486 = 31U;
int16_t x488 = INT16_MIN;
uint16_t x502 = UINT16_MAX;
static int64_t x513 = INT64_MAX;
int64_t x516 = -1LL;
int32_t x529 = INT32_MIN;
int32_t t115 = -736;
uint32_t x534 = 390U;
uint8_t x536 = UINT8_MAX;
static int8_t x548 = -1;
volatile int8_t x564 = -1;
volatile int32_t t121 = -726363887;
uint64_t x566 = 4621LLU;
int64_t x570 = INT64_MAX;
uint8_t x575 = UINT8_MAX;
uint64_t x577 = UINT64_MAX;
static volatile int64_t x581 = INT64_MIN;
static uint32_t x583 = 896U;
int32_t x587 = -1;
uint64_t x588 = 124148649932LLU;
int64_t x600 = -9055LL;
int32_t t133 = 2082;
int32_t x619 = -1;
int16_t x620 = 3333;
uint8_t x631 = UINT8_MAX;
int8_t x635 = INT8_MIN;
int32_t t141 = -28361;
int32_t x653 = -1;
volatile int32_t x667 = INT32_MAX;
volatile int32_t t146 = 79858483;
uint32_t x675 = 0U;
int8_t x683 = INT8_MAX;
int32_t x687 = INT32_MAX;
int64_t x691 = INT64_MIN;
int8_t x692 = INT8_MIN;
volatile int64_t x698 = INT64_MAX;
volatile int32_t t152 = 136599541;
int16_t x710 = -28;
uint32_t x724 = UINT32_MAX;
volatile int32_t x726 = -1;
volatile int32_t x727 = INT32_MIN;
volatile int32_t t157 = 917;
uint8_t x732 = 5U;
int32_t x743 = -58954351;
static int32_t x744 = -1;
int32_t x750 = INT32_MIN;
volatile int32_t t164 = -118;
volatile int8_t x758 = 3;
volatile int32_t t165 = -68711;
static volatile int64_t x766 = INT64_MAX;
volatile int32_t t167 = 64;
int64_t x775 = INT64_MIN;
uint64_t x776 = 7LLU;
uint16_t x778 = 33U;
int64_t x791 = INT64_MAX;
static int32_t x794 = INT32_MIN;
volatile int16_t x802 = -1;
volatile uint16_t x803 = UINT16_MAX;
int16_t x804 = -226;
int32_t x805 = INT32_MAX;
uint64_t x814 = 238LLU;
static uint8_t x819 = 4U;
volatile int32_t t178 = 184;
static uint32_t x825 = 3U;
int16_t x826 = INT16_MIN;
static int32_t t179 = -53;
int32_t x829 = -1;
volatile int32_t t180 = -1;
int64_t x838 = 6265343864LL;
static volatile int32_t t182 = -14665;
uint32_t x844 = 9U;
static volatile int16_t x849 = INT16_MIN;
volatile int32_t t184 = 6;
volatile int64_t x854 = INT64_MAX;
static int32_t x855 = INT32_MIN;
static volatile int32_t t185 = -10;
uint16_t x859 = 1554U;
int32_t x860 = 54314539;
int32_t t187 = 1544;
int64_t x875 = INT64_MAX;
int32_t x878 = 31143568;
volatile uint32_t x888 = 7685918U;
static int32_t t195 = 114;
volatile int8_t x900 = -1;
int32_t t196 = -1;
volatile int32_t t197 = 5789029;
uint32_t x905 = UINT32_MAX;
volatile int32_t x909 = INT32_MIN;
int32_t x910 = INT32_MIN;
volatile int32_t x911 = INT32_MIN;


void f0(void) {
    	volatile uint16_t x2 = 3760U;
	volatile int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -175;

    t0 = (x1>((x2<=x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = -14;
	static uint16_t x6 = UINT16_MAX;
	volatile uint8_t x7 = 83U;
	int16_t x8 = 1;
	int32_t t1 = 3;

    t1 = (x5>((x6<=x7)-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 175U;
	int16_t x10 = -1;
	static uint32_t x11 = 237144U;
	static uint32_t x12 = 21421U;
	int32_t t2 = 610317816;

    t2 = (x9>((x10<=x11)-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 2;
	int16_t x14 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;

    t3 = (x13>((x14<=x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 0;

    t4 = (x17>((x18<=x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = INT16_MAX;
	static int32_t x22 = INT32_MIN;
	uint32_t x24 = 43322062U;
	int32_t t5 = 506974787;

    t5 = (x21>((x22<=x23)-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	int8_t x28 = 0;
	static int32_t t6 = 8241;

    t6 = (x25>((x26<=x27)-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 127LLU;
	static int8_t x31 = 14;
	int8_t x32 = -1;
	volatile int32_t t7 = 585458808;

    t7 = (x29>((x30<=x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -1;
	int64_t x34 = -1LL;
	static int16_t x35 = INT16_MIN;
	static int32_t x36 = -1;
	int32_t t8 = 65;

    t8 = (x33>((x34<=x35)-x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	static int64_t x39 = -1LL;
	int16_t x40 = -1;

    t9 = (x37>((x38<=x39)-x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MAX;
	uint32_t x50 = 465797U;
	int16_t x51 = 0;
	int64_t x52 = -1LL;
	volatile int32_t t10 = -528045587;

    t10 = (x49>((x50<=x51)-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MAX;
	int16_t x54 = -3;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 45003152403780LLU;
	int32_t t11 = -7355;

    t11 = (x53>((x54<=x55)-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = 65;
	static int8_t x58 = 49;
	int64_t x59 = INT64_MIN;
	static uint8_t x60 = UINT8_MAX;
	int32_t t12 = 99;

    t12 = (x57>((x58<=x59)-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x61 = -422585963LL;
	int16_t x62 = 73;
	int8_t x63 = INT8_MAX;
	static int32_t x64 = 7;
	int32_t t13 = -1315;

    t13 = (x61>((x62<=x63)-x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x65 = INT8_MAX;
	static volatile int8_t x66 = 22;
	int64_t x67 = INT64_MIN;
	int32_t x68 = -145;
	int32_t t14 = 63671;

    t14 = (x65>((x66<=x67)-x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -1LL;
	volatile int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MAX;
	volatile int32_t t15 = 213059565;

    t15 = (x69>((x70<=x71)-x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x73 = INT32_MIN;
	int32_t x75 = 1;
	int64_t x76 = 11LL;

    t16 = (x73>((x74<=x75)-x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x78 = -1;
	uint32_t x80 = 91786U;
	int32_t t17 = 844713285;

    t17 = (x77>((x78<=x79)-x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	volatile int8_t x82 = INT8_MIN;
	int32_t t18 = -15995;

    t18 = (x81>((x82<=x83)-x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 742663150LL;
	uint32_t x86 = 524722823U;
	static uint16_t x88 = 3U;
	volatile int32_t t19 = 119958;

    t19 = (x85>((x86<=x87)-x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = 7;
	uint32_t x90 = 108U;
	static int8_t x92 = 11;
	volatile int32_t t20 = -531738;

    t20 = (x89>((x90<=x91)-x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = INT64_MAX;
	int64_t x98 = INT64_MAX;
	int32_t x100 = 171181917;
	int32_t t21 = 249572355;

    t21 = (x97>((x98<=x99)-x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x101 = INT16_MIN;
	static volatile int8_t x103 = -1;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t22 = -44875884;

    t22 = (x101>((x102<=x103)-x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	volatile int16_t x108 = 35;
	volatile int32_t t23 = -276;

    t23 = (x105>((x106<=x107)-x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x110 = 0U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -1;
	volatile int32_t t24 = -9;

    t24 = (x109>((x110<=x111)-x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -1;
	uint32_t x116 = 119U;
	volatile int32_t t25 = 121;

    t25 = (x113>((x114<=x115)-x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x117 = -1;
	static uint64_t x118 = 5821886LLU;
	int16_t x119 = INT16_MAX;
	int32_t x120 = -1;
	int32_t t26 = 445;

    t26 = (x117>((x118<=x119)-x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = 1U;
	static int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MAX;
	uint16_t x124 = UINT16_MAX;
	int32_t t27 = 1915;

    t27 = (x121>((x122<=x123)-x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = 944LL;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = -1;
	volatile uint16_t x128 = 8000U;
	int32_t t28 = -26;

    t28 = (x125>((x126<=x127)-x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x129 = 1981534083058LLU;
	volatile int64_t x130 = INT64_MIN;
	static int16_t x131 = -357;
	volatile int32_t t29 = -265987344;

    t29 = (x129>((x130<=x131)-x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x133 = UINT16_MAX;
	int16_t x134 = -142;
	int16_t x136 = 113;
	volatile int32_t t30 = 1;

    t30 = (x133>((x134<=x135)-x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x137 = 3528U;
	int16_t x138 = -230;
	uint16_t x139 = 61U;

    t31 = (x137>((x138<=x139)-x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MIN;
	static uint32_t x142 = 81120U;
	uint8_t x144 = 31U;

    t32 = (x141>((x142<=x143)-x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x145 = -2;
	int32_t x147 = INT32_MIN;
	static int16_t x148 = -3;
	static volatile int32_t t33 = -44991;

    t33 = (x145>((x146<=x147)-x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = 23;
	uint16_t x150 = 0U;
	volatile int16_t x151 = INT16_MIN;

    t34 = (x149>((x150<=x151)-x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = 471;
	uint8_t x154 = 13U;
	uint8_t x156 = 0U;

    t35 = (x153>((x154<=x155)-x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	uint64_t x159 = 13251011753400LLU;
	static uint32_t x160 = 336296120U;
	volatile int32_t t36 = -1;

    t36 = (x157>((x158<=x159)-x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 3732923LL;
	static int64_t x162 = 945465098664LL;
	uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = 26212U;
	volatile int32_t t37 = 5461;

    t37 = (x161>((x162<=x163)-x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MAX;
	volatile int64_t x167 = -1LL;
	uint16_t x168 = 1U;
	volatile int32_t t38 = -45188326;

    t38 = (x165>((x166<=x167)-x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x173 = UINT16_MAX;
	uint64_t x174 = 0LLU;
	volatile int16_t x175 = 2;

    t39 = (x173>((x174<=x175)-x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = 1;
	static int8_t x182 = -46;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t40 = 1893;

    t40 = (x181>((x182<=x183)-x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x185 = INT64_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	volatile int32_t x187 = 3644410;
	uint8_t x188 = 30U;
	volatile int32_t t41 = -431;

    t41 = (x185>((x186<=x187)-x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x193 = 5765U;
	int16_t x194 = -226;
	volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = 12822609;
	int32_t t42 = -159492775;

    t42 = (x193>((x194<=x195)-x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MIN;
	static int8_t x199 = 2;

    t43 = (x197>((x198<=x199)-x200));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = -55233912LL;
	volatile int64_t x202 = -1LL;
	uint8_t x203 = 22U;
	static int32_t t44 = 637;

    t44 = (x201>((x202<=x203)-x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x205 = 3U;
	volatile int8_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int8_t x208 = -1;
	volatile int32_t t45 = -1986;

    t45 = (x205>((x206<=x207)-x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x209 = 117U;
	static int8_t x210 = INT8_MIN;
	volatile int64_t x211 = INT64_MIN;
	int32_t t46 = 81331;

    t46 = (x209>((x210<=x211)-x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MIN;
	uint32_t x214 = 3900378U;
	int8_t x215 = 1;
	int16_t x216 = INT16_MIN;
	int32_t t47 = -1081;

    t47 = (x213>((x214<=x215)-x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = 6357159855045LL;
	volatile int8_t x218 = INT8_MAX;
	int32_t x219 = -1;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t48 = -129;

    t48 = (x217>((x218<=x219)-x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x221 = UINT64_MAX;
	int8_t x222 = 2;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t49 = -4487;

    t49 = (x221>((x222<=x223)-x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x228 = -1;
	int32_t t50 = -121;

    t50 = (x225>((x226<=x227)-x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x231 = 31;
	int32_t x232 = -1;
	volatile int32_t t51 = 42460;

    t51 = (x229>((x230<=x231)-x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x235 = -11;
	static uint32_t x236 = UINT32_MAX;
	volatile int32_t t52 = -1;

    t52 = (x233>((x234<=x235)-x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = -40;
	volatile int32_t x239 = INT32_MAX;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t53 = -91868615;

    t53 = (x237>((x238<=x239)-x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = 6673142396494LL;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = -30;
	volatile int32_t t54 = 17377526;

    t54 = (x241>((x242<=x243)-x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = 14611LLU;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	static volatile int32_t t55 = 5486;

    t55 = (x249>((x250<=x251)-x252));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = 2795;
	int16_t x254 = 3248;
	int8_t x255 = -30;
	int32_t x256 = -1;
	static int32_t t56 = 18;

    t56 = (x253>((x254<=x255)-x256));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x258 = 5779603;
	static volatile int64_t x259 = INT64_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t57 = -125007;

    t57 = (x257>((x258<=x259)-x260));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x261 = 15U;
	uint8_t x262 = 3U;
	int16_t x264 = 12550;
	int32_t t58 = 67506521;

    t58 = (x261>((x262<=x263)-x264));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = INT64_MIN;
	static volatile int32_t x266 = 1308134;
	static int8_t x267 = -1;
	int8_t x268 = INT8_MIN;

    t59 = (x265>((x266<=x267)-x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x270 = 0LLU;
	static volatile int8_t x271 = INT8_MAX;
	volatile int32_t t60 = -7;

    t60 = (x269>((x270<=x271)-x272));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MAX;
	int64_t x279 = -1LL;
	static int32_t t61 = 18296182;

    t61 = (x277>((x278<=x279)-x280));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x281 = 1;
	volatile int32_t x283 = -14;
	static volatile int32_t x284 = INT32_MAX;
	static volatile int32_t t62 = -467;

    t62 = (x281>((x282<=x283)-x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x286 = 429563364336LLU;
	uint64_t x287 = 113804105303073LLU;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t63 = -108;

    t63 = (x285>((x286<=x287)-x288));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MAX;
	int32_t t64 = -5713;

    t64 = (x289>((x290<=x291)-x292));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x293 = 4U;
	static int8_t x294 = INT8_MIN;
	uint16_t x295 = 3U;
	static uint64_t x296 = UINT64_MAX;

    t65 = (x293>((x294<=x295)-x296));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x297 = -1;
	uint8_t x299 = 11U;
	int8_t x300 = INT8_MAX;

    t66 = (x297>((x298<=x299)-x300));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = -822;
	static int64_t x304 = INT64_MAX;
	int32_t t67 = -22;

    t67 = (x301>((x302<=x303)-x304));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x310 = -1;
	static int32_t x311 = -1;
	int8_t x312 = -23;
	static volatile int32_t t68 = -8617;

    t68 = (x309>((x310<=x311)-x312));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = 3732826525LLU;
	int64_t x315 = -13699865285LL;
	volatile int32_t t69 = -271448746;

    t69 = (x313>((x314<=x315)-x316));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x319 = INT32_MIN;
	uint8_t x320 = 10U;

    t70 = (x317>((x318<=x319)-x320));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x321 = INT32_MIN;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t71 = -916;

    t71 = (x321>((x322<=x323)-x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -4;
	uint32_t x326 = 1863U;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t72 = 3;

    t72 = (x325>((x326<=x327)-x328));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x337 = INT16_MIN;
	static uint8_t x338 = 1U;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = 13780885LL;
	int32_t t73 = 44284;

    t73 = (x337>((x338<=x339)-x340));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = -149313601865934LL;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = -3;
	volatile int32_t t74 = -984;

    t74 = (x341>((x342<=x343)-x344));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x345 = INT16_MIN;
	static int8_t x346 = -2;
	static volatile int16_t x347 = INT16_MIN;
	volatile int32_t t75 = -4308465;

    t75 = (x345>((x346<=x347)-x348));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x349 = UINT64_MAX;
	int16_t x350 = INT16_MAX;
	volatile int32_t x351 = -1;
	volatile int16_t x352 = INT16_MIN;

    t76 = (x349>((x350<=x351)-x352));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x353 = INT32_MAX;
	static uint16_t x355 = 3U;
	int8_t x356 = 31;
	int32_t t77 = -26637;

    t77 = (x353>((x354<=x355)-x356));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x357 = INT16_MIN;
	uint32_t x358 = 742619U;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;

    t78 = (x357>((x358<=x359)-x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	uint16_t x362 = 29U;
	uint16_t x363 = 91U;
	int16_t x364 = -23;
	volatile int32_t t79 = -144;

    t79 = (x361>((x362<=x363)-x364));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x366 = INT64_MAX;
	int16_t x367 = -1;
	static int32_t x368 = 112643988;
	volatile int32_t t80 = -318577991;

    t80 = (x365>((x366<=x367)-x368));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x369 = 5U;
	int64_t x371 = INT64_MIN;
	volatile int32_t t81 = -5013;

    t81 = (x369>((x370<=x371)-x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	int16_t x375 = -1;
	int16_t x376 = 3865;
	static int32_t t82 = -301074350;

    t82 = (x373>((x374<=x375)-x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = -1;
	int32_t x378 = -172;
	int32_t x379 = INT32_MIN;
	int32_t x380 = 1;

    t83 = (x377>((x378<=x379)-x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	volatile int16_t x387 = -1;
	int32_t t84 = -31991648;

    t84 = (x385>((x386<=x387)-x388));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x390 = 181U;
	volatile int64_t x391 = INT64_MIN;
	static volatile uint32_t x392 = 59998U;
	volatile int32_t t85 = 9;

    t85 = (x389>((x390<=x391)-x392));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = 2;
	int64_t x394 = 200528LL;
	uint8_t x395 = 35U;
	int32_t x396 = -1;
	int32_t t86 = -3487;

    t86 = (x393>((x394<=x395)-x396));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x397 = UINT64_MAX;
	static int32_t x398 = -420;
	static int16_t x399 = -1;
	int32_t x400 = INT32_MAX;

    t87 = (x397>((x398<=x399)-x400));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = 1;
	static int8_t x403 = 13;
	uint8_t x404 = 40U;
	int32_t t88 = -1031154475;

    t88 = (x401>((x402<=x403)-x404));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x405 = -1;
	int8_t x406 = -1;
	uint16_t x407 = 32415U;
	static volatile uint8_t x408 = UINT8_MAX;
	volatile int32_t t89 = 97693;

    t89 = (x405>((x406<=x407)-x408));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x410 = INT64_MIN;
	int8_t x411 = -1;
	volatile int64_t x412 = -1LL;
	volatile int32_t t90 = -272817389;

    t90 = (x409>((x410<=x411)-x412));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x422 = -1;
	static int64_t x423 = -13955LL;
	int16_t x424 = 5277;
	int32_t t91 = -24;

    t91 = (x421>((x422<=x423)-x424));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = -3;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	static uint16_t x428 = UINT16_MAX;

    t92 = (x425>((x426<=x427)-x428));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x429 = -4;
	volatile int64_t x432 = -1LL;

    t93 = (x429>((x430<=x431)-x432));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x433 = -1;
	uint8_t x435 = 79U;
	volatile uint8_t x436 = UINT8_MAX;
	volatile int32_t t94 = -232983687;

    t94 = (x433>((x434<=x435)-x436));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x437 = UINT16_MAX;
	volatile uint8_t x438 = 18U;
	int64_t x440 = -441067LL;
	static int32_t t95 = 24871;

    t95 = (x437>((x438<=x439)-x440));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = -1;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = UINT16_MAX;
	int32_t t96 = -1949881;

    t96 = (x441>((x442<=x443)-x444));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x445 = 1;
	int64_t x446 = 10418501695885697LL;
	static volatile int32_t t97 = -2482381;

    t97 = (x445>((x446<=x447)-x448));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x449 = -1LL;
	static volatile int8_t x450 = -1;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -92636LL;
	int32_t t98 = -91;

    t98 = (x449>((x450<=x451)-x452));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x453 = INT16_MAX;
	volatile int8_t x454 = INT8_MIN;
	volatile int32_t t99 = -14742;

    t99 = (x453>((x454<=x455)-x456));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x457 = 0;
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	volatile int32_t t100 = 133382472;

    t100 = (x457>((x458<=x459)-x460));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = 0;
	int64_t x462 = INT64_MIN;
	uint32_t x463 = 1037814883U;
	static volatile int32_t t101 = 307;

    t101 = (x461>((x462<=x463)-x464));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x465 = -1;
	int16_t x466 = INT16_MAX;
	static int32_t x467 = -1;
	uint64_t x468 = 9167885LLU;
	int32_t t102 = 13;

    t102 = (x465>((x466<=x467)-x468));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x469 = UINT32_MAX;
	static volatile uint8_t x471 = 4U;
	uint16_t x472 = UINT16_MAX;
	int32_t t103 = 21938856;

    t103 = (x469>((x470<=x471)-x472));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x473 = -3092;
	uint32_t x475 = 4U;
	static int8_t x476 = INT8_MAX;
	volatile int32_t t104 = 88045233;

    t104 = (x473>((x474<=x475)-x476));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x477 = -1;
	int16_t x478 = INT16_MIN;
	uint16_t x479 = 44U;
	int8_t x480 = INT8_MAX;
	int32_t t105 = 13;

    t105 = (x477>((x478<=x479)-x480));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x481 = 3578449;
	volatile int32_t x483 = INT32_MIN;
	uint32_t x484 = UINT32_MAX;
	static volatile int32_t t106 = -12;

    t106 = (x481>((x482<=x483)-x484));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x485 = 8U;
	int64_t x487 = INT64_MIN;
	volatile int32_t t107 = -2734286;

    t107 = (x485>((x486<=x487)-x488));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x493 = INT64_MIN;
	static uint16_t x494 = 99U;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -20033583;
	static volatile int32_t t108 = -533117;

    t108 = (x493>((x494<=x495)-x496));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x501 = UINT32_MAX;
	static uint64_t x503 = 247308026709786LLU;
	static uint32_t x504 = 1869493U;
	volatile int32_t t109 = 25231;

    t109 = (x501>((x502<=x503)-x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	volatile uint8_t x506 = 2U;
	int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MAX;
	static int32_t t110 = -64814;

    t110 = (x505>((x506<=x507)-x508));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x509 = 3;
	static int16_t x510 = -12;
	uint8_t x511 = 8U;
	int64_t x512 = 3969LL;
	volatile int32_t t111 = 253138;

    t111 = (x509>((x510<=x511)-x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x514 = 6384862938LLU;
	static int32_t x515 = -1;
	static volatile int32_t t112 = -54;

    t112 = (x513>((x514<=x515)-x516));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x517 = 7043LLU;
	int16_t x518 = 392;
	int8_t x519 = INT8_MIN;
	volatile uint32_t x520 = 311U;
	volatile int32_t t113 = -121832796;

    t113 = (x517>((x518<=x519)-x520));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x521 = INT8_MAX;
	uint64_t x522 = UINT64_MAX;
	static volatile uint64_t x523 = 1220874989461607LLU;
	int8_t x524 = INT8_MIN;
	int32_t t114 = -68;

    t114 = (x521>((x522<=x523)-x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x530 = INT64_MAX;
	uint8_t x531 = UINT8_MAX;
	uint32_t x532 = 1692U;

    t115 = (x529>((x530<=x531)-x532));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x533 = INT16_MAX;
	int16_t x535 = INT16_MIN;
	volatile int32_t t116 = -30;

    t116 = (x533>((x534<=x535)-x536));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x537 = 108U;
	int32_t x538 = INT32_MIN;
	int16_t x539 = -1465;
	static int16_t x540 = INT16_MIN;
	volatile int32_t t117 = -79105620;

    t117 = (x537>((x538<=x539)-x540));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x541 = INT64_MIN;
	static int32_t x542 = INT32_MIN;
	int16_t x543 = 24;
	static int32_t x544 = -1;
	int32_t t118 = 2;

    t118 = (x541>((x542<=x543)-x544));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = INT8_MIN;
	static int64_t x546 = 3472102395LL;
	volatile int8_t x547 = -1;
	volatile int32_t t119 = -1;

    t119 = (x545>((x546<=x547)-x548));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x553 = INT16_MIN;
	static int32_t x554 = INT32_MAX;
	int32_t x555 = -7;
	volatile int32_t x556 = -672;
	volatile int32_t t120 = 2271006;

    t120 = (x553>((x554<=x555)-x556));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x561 = UINT64_MAX;
	int8_t x562 = INT8_MIN;
	uint16_t x563 = 0U;

    t121 = (x561>((x562<=x563)-x564));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x565 = -1;
	int32_t x567 = INT32_MIN;
	int8_t x568 = -3;
	static int32_t t122 = -508489575;

    t122 = (x565>((x566<=x567)-x568));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x569 = INT64_MIN;
	uint32_t x571 = 1194442492U;
	uint32_t x572 = 3U;
	static int32_t t123 = -1;

    t123 = (x569>((x570<=x571)-x572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x573 = INT16_MAX;
	static uint64_t x574 = UINT64_MAX;
	volatile int32_t x576 = -33345;
	volatile int32_t t124 = -2596;

    t124 = (x573>((x574<=x575)-x576));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x578 = INT16_MAX;
	volatile int32_t x579 = INT32_MIN;
	uint64_t x580 = 1691359LLU;
	int32_t t125 = 55;

    t125 = (x577>((x578<=x579)-x580));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x582 = INT16_MIN;
	int32_t x584 = -1;
	volatile int32_t t126 = -253;

    t126 = (x581>((x582<=x583)-x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x585 = 44U;
	static uint8_t x586 = UINT8_MAX;
	int32_t t127 = 1427;

    t127 = (x585>((x586<=x587)-x588));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x589 = 13U;
	static uint64_t x590 = UINT64_MAX;
	uint8_t x591 = 4U;
	int32_t x592 = -47511924;
	int32_t t128 = 842946908;

    t128 = (x589>((x590<=x591)-x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x593 = 2992U;
	int64_t x594 = -1LL;
	static int8_t x595 = 0;
	int64_t x596 = -2857107178385828517LL;
	volatile int32_t t129 = 468648529;

    t129 = (x593>((x594<=x595)-x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x597 = -2;
	static int16_t x598 = -1;
	int64_t x599 = INT64_MIN;
	int32_t t130 = 226871;

    t130 = (x597>((x598<=x599)-x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x602 = UINT32_MAX;
	static int8_t x603 = INT8_MIN;
	volatile int64_t x604 = -1LL;
	volatile int32_t t131 = 561335965;

    t131 = (x601>((x602<=x603)-x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = INT16_MIN;
	volatile int64_t x606 = -1LL;
	int32_t x607 = INT32_MIN;
	int32_t x608 = -1;
	static int32_t t132 = -33;

    t132 = (x605>((x606<=x607)-x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x609 = 38;
	static int64_t x610 = INT64_MIN;
	static uint16_t x611 = 13516U;
	uint16_t x612 = UINT16_MAX;

    t133 = (x609>((x610<=x611)-x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x617 = INT32_MIN;
	int32_t x618 = INT32_MIN;
	volatile int32_t t134 = -397666692;

    t134 = (x617>((x618<=x619)-x620));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x621 = 196912U;
	uint16_t x622 = 133U;
	int64_t x623 = -1LL;
	int64_t x624 = INT64_MAX;
	int32_t t135 = 1452531;

    t135 = (x621>((x622<=x623)-x624));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x625 = -1LL;
	uint8_t x626 = UINT8_MAX;
	uint64_t x627 = 5595647534979324LLU;
	int16_t x628 = 22;
	volatile int32_t t136 = -1114844;

    t136 = (x625>((x626<=x627)-x628));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x629 = 3U;
	int64_t x630 = INT64_MIN;
	volatile uint64_t x632 = 6234997LLU;
	static volatile int32_t t137 = 0;

    t137 = (x629>((x630<=x631)-x632));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x633 = 1974;
	uint16_t x634 = 2128U;
	static int8_t x636 = INT8_MIN;
	volatile int32_t t138 = 24;

    t138 = (x633>((x634<=x635)-x636));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x641 = 1U;
	static int32_t x642 = INT32_MAX;
	uint16_t x643 = UINT16_MAX;
	int16_t x644 = 0;
	int32_t t139 = 4129968;

    t139 = (x641>((x642<=x643)-x644));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x645 = 8U;
	static int32_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	uint16_t x648 = 0U;
	static volatile int32_t t140 = 7928;

    t140 = (x645>((x646<=x647)-x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x649 = 3LL;
	int64_t x650 = INT64_MIN;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = INT8_MIN;

    t141 = (x649>((x650<=x651)-x652));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x654 = INT32_MIN;
	int64_t x655 = 2819351722049LL;
	uint8_t x656 = 113U;
	volatile int32_t t142 = -1;

    t142 = (x653>((x654<=x655)-x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x657 = 35287305026LL;
	int16_t x658 = -307;
	uint16_t x659 = UINT16_MAX;
	volatile int64_t x660 = -9156285LL;
	static int32_t t143 = -6191953;

    t143 = (x657>((x658<=x659)-x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x661 = 110961619581471971LLU;
	int32_t x662 = INT32_MAX;
	int64_t x663 = -34937734926523247LL;
	int16_t x664 = INT16_MAX;
	volatile int32_t t144 = -58482;

    t144 = (x661>((x662<=x663)-x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x665 = -144735494LL;
	int32_t x666 = -1;
	int32_t x668 = -125;
	volatile int32_t t145 = 115146047;

    t145 = (x665>((x666<=x667)-x668));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = -1;
	volatile int64_t x671 = -235LL;
	static int8_t x672 = 1;

    t146 = (x669>((x670<=x671)-x672));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x673 = -1;
	int16_t x674 = INT16_MIN;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t147 = -153074;

    t147 = (x673>((x674<=x675)-x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x677 = INT8_MIN;
	uint16_t x678 = 82U;
	uint8_t x679 = 0U;
	int64_t x680 = -1LL;
	int32_t t148 = -102266;

    t148 = (x677>((x678<=x679)-x680));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = INT32_MAX;
	static volatile uint8_t x684 = 1U;
	int32_t t149 = -81366759;

    t149 = (x681>((x682<=x683)-x684));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x685 = -1;
	uint32_t x686 = UINT32_MAX;
	uint32_t x688 = UINT32_MAX;
	int32_t t150 = -263;

    t150 = (x685>((x686<=x687)-x688));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x689 = -1;
	int16_t x690 = 1;
	int32_t t151 = -243;

    t151 = (x689>((x690<=x691)-x692));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x697 = INT32_MIN;
	int64_t x699 = 115470009LL;
	uint16_t x700 = 12U;

    t152 = (x697>((x698<=x699)-x700));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x701 = INT16_MIN;
	volatile uint32_t x702 = 523202U;
	volatile int16_t x703 = -268;
	int16_t x704 = INT16_MIN;
	volatile int32_t t153 = -73850;

    t153 = (x701>((x702<=x703)-x704));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x709 = INT8_MIN;
	uint8_t x711 = 1U;
	int32_t x712 = INT32_MAX;
	int32_t t154 = -93729;

    t154 = (x709>((x710<=x711)-x712));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x713 = -1;
	int64_t x714 = -47364LL;
	int8_t x715 = -3;
	uint32_t x716 = 8109574U;
	int32_t t155 = 1;

    t155 = (x713>((x714<=x715)-x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x721 = 26U;
	uint32_t x722 = 589U;
	uint8_t x723 = 0U;
	volatile int32_t t156 = -9;

    t156 = (x721>((x722<=x723)-x724));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x725 = INT64_MIN;
	volatile uint32_t x728 = 208042894U;

    t157 = (x725>((x726<=x727)-x728));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x729 = 37U;
	int64_t x730 = INT64_MAX;
	int64_t x731 = -207595754885695226LL;
	volatile int32_t t158 = -50231706;

    t158 = (x729>((x730<=x731)-x732));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x733 = 16LL;
	uint32_t x734 = UINT32_MAX;
	int64_t x735 = INT64_MAX;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t159 = -1053;

    t159 = (x733>((x734<=x735)-x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x737 = 4;
	int32_t x738 = -3;
	uint8_t x739 = 12U;
	uint32_t x740 = UINT32_MAX;
	int32_t t160 = -14432;

    t160 = (x737>((x738<=x739)-x740));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x741 = INT8_MIN;
	uint64_t x742 = 331LLU;
	volatile int32_t t161 = -10476;

    t161 = (x741>((x742<=x743)-x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x745 = -1;
	static int8_t x746 = INT8_MIN;
	int32_t x747 = -41632712;
	uint64_t x748 = UINT64_MAX;
	int32_t t162 = -108438234;

    t162 = (x745>((x746<=x747)-x748));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x749 = 43U;
	volatile uint32_t x751 = UINT32_MAX;
	uint32_t x752 = 15U;
	volatile int32_t t163 = 0;

    t163 = (x749>((x750<=x751)-x752));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x753 = INT8_MAX;
	volatile uint32_t x754 = 1833U;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MIN;

    t164 = (x753>((x754<=x755)-x756));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x757 = 19994555LLU;
	uint16_t x759 = 5376U;
	static volatile uint8_t x760 = UINT8_MAX;

    t165 = (x757>((x758<=x759)-x760));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x761 = -45;
	volatile uint32_t x762 = UINT32_MAX;
	static int64_t x763 = INT64_MIN;
	volatile int64_t x764 = -26177229LL;
	int32_t t166 = 67;

    t166 = (x761>((x762<=x763)-x764));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = INT32_MIN;
	int32_t x767 = -8274990;
	int8_t x768 = INT8_MIN;

    t167 = (x765>((x766<=x767)-x768));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x769 = INT32_MIN;
	uint32_t x770 = 4U;
	static volatile int8_t x771 = -1;
	uint8_t x772 = 51U;
	volatile int32_t t168 = -1;

    t168 = (x769>((x770<=x771)-x772));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x773 = -5;
	int32_t x774 = INT32_MIN;
	volatile int32_t t169 = 13827;

    t169 = (x773>((x774<=x775)-x776));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x777 = UINT8_MAX;
	int8_t x779 = 1;
	volatile int64_t x780 = 1584191LL;
	int32_t t170 = 58575031;

    t170 = (x777>((x778<=x779)-x780));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x789 = INT64_MAX;
	int16_t x790 = -11;
	uint64_t x792 = 6031485261724LLU;
	volatile int32_t t171 = 688;

    t171 = (x789>((x790<=x791)-x792));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x793 = -1;
	uint32_t x795 = UINT32_MAX;
	int32_t x796 = INT32_MAX;
	volatile int32_t t172 = 248916269;

    t172 = (x793>((x794<=x795)-x796));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MIN;
	int32_t x799 = -1;
	int16_t x800 = 429;
	static volatile int32_t t173 = -33;

    t173 = (x797>((x798<=x799)-x800));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x801 = 554U;
	static int32_t t174 = -2726;

    t174 = (x801>((x802<=x803)-x804));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x806 = UINT16_MAX;
	int64_t x807 = -1LL;
	int16_t x808 = INT16_MIN;
	volatile int32_t t175 = 160548170;

    t175 = (x805>((x806<=x807)-x808));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x809 = INT16_MAX;
	int8_t x810 = INT8_MIN;
	volatile int8_t x811 = -1;
	volatile int8_t x812 = INT8_MIN;
	volatile int32_t t176 = 149;

    t176 = (x809>((x810<=x811)-x812));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x813 = INT8_MIN;
	uint32_t x815 = UINT32_MAX;
	int16_t x816 = -19;
	static volatile int32_t t177 = -61333127;

    t177 = (x813>((x814<=x815)-x816));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x817 = -1;
	volatile int64_t x818 = -1LL;
	int16_t x820 = INT16_MIN;

    t178 = (x817>((x818<=x819)-x820));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x827 = 101;
	uint8_t x828 = 18U;

    t179 = (x825>((x826<=x827)-x828));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x830 = 46LL;
	int64_t x831 = INT64_MIN;
	uint32_t x832 = 0U;

    t180 = (x829>((x830<=x831)-x832));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x833 = 1U;
	uint64_t x834 = UINT64_MAX;
	uint16_t x835 = 61U;
	int8_t x836 = INT8_MIN;
	int32_t t181 = -1287332;

    t181 = (x833>((x834<=x835)-x836));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x837 = UINT32_MAX;
	uint32_t x839 = UINT32_MAX;
	static int8_t x840 = INT8_MIN;

    t182 = (x837>((x838<=x839)-x840));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x841 = 7U;
	volatile uint32_t x842 = 24U;
	static int32_t x843 = INT32_MIN;
	static int32_t t183 = 29712;

    t183 = (x841>((x842<=x843)-x844));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x850 = UINT32_MAX;
	int64_t x851 = INT64_MIN;
	int16_t x852 = INT16_MIN;

    t184 = (x849>((x850<=x851)-x852));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x853 = -1LL;
	static int8_t x856 = -1;

    t185 = (x853>((x854<=x855)-x856));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x857 = 155U;
	int8_t x858 = INT8_MIN;
	volatile int32_t t186 = 1;

    t186 = (x857>((x858<=x859)-x860));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x861 = 6U;
	volatile uint32_t x862 = 786223607U;
	volatile int8_t x863 = 14;
	static volatile uint8_t x864 = UINT8_MAX;

    t187 = (x861>((x862<=x863)-x864));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x865 = -1;
	int8_t x866 = -5;
	int64_t x867 = -1LL;
	uint16_t x868 = 7U;
	static int32_t t188 = 74;

    t188 = (x865>((x866<=x867)-x868));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x869 = -6809327;
	int32_t x870 = INT32_MIN;
	volatile int8_t x871 = INT8_MAX;
	uint32_t x872 = 7087U;
	volatile int32_t t189 = 52696;

    t189 = (x869>((x870<=x871)-x872));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x873 = INT64_MIN;
	static volatile int16_t x874 = INT16_MIN;
	static int8_t x876 = -1;
	int32_t t190 = 31678;

    t190 = (x873>((x874<=x875)-x876));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x877 = 3U;
	static int8_t x879 = INT8_MAX;
	volatile int16_t x880 = INT16_MIN;
	int32_t t191 = 46;

    t191 = (x877>((x878<=x879)-x880));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x881 = INT16_MIN;
	static int64_t x882 = INT64_MIN;
	int16_t x883 = -33;
	static int16_t x884 = -16;
	static int32_t t192 = -3684261;

    t192 = (x881>((x882<=x883)-x884));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x885 = 20U;
	int64_t x886 = INT64_MAX;
	static volatile int32_t x887 = 36812;
	int32_t t193 = -10;

    t193 = (x885>((x886<=x887)-x888));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x889 = 938LLU;
	uint32_t x890 = 2050948U;
	uint64_t x891 = 1672245231LLU;
	static volatile int64_t x892 = -78473871056LL;
	volatile int32_t t194 = -19;

    t194 = (x889>((x890<=x891)-x892));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x893 = 11432U;
	static int64_t x894 = INT64_MIN;
	int16_t x895 = INT16_MIN;
	int64_t x896 = 0LL;

    t195 = (x893>((x894<=x895)-x896));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x897 = INT64_MIN;
	uint32_t x898 = 81U;
	uint32_t x899 = 99668U;

    t196 = (x897>((x898<=x899)-x900));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x901 = UINT8_MAX;
	uint8_t x902 = UINT8_MAX;
	int8_t x903 = INT8_MAX;
	static int16_t x904 = -12;

    t197 = (x901>((x902<=x903)-x904));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x906 = 18981U;
	int8_t x907 = -1;
	static uint32_t x908 = 6673295U;
	volatile int32_t t198 = 18562615;

    t198 = (x905>((x906<=x907)-x908));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x912 = UINT8_MAX;
	volatile int32_t t199 = 230776488;

    t199 = (x909>((x910<=x911)-x912));

    if (t199 != 0) { NG(); } else { ; }
	
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

