
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

volatile int32_t x3 = INT32_MIN;
int8_t x4 = 0;
int64_t x11 = INT64_MAX;
int64_t x26 = INT64_MAX;
int32_t t7 = 0;
volatile int64_t t8 = -51117698LL;
uint64_t x39 = 248LLU;
int32_t t9 = 58367;
int8_t x42 = INT8_MIN;
volatile int32_t t10 = 88294;
int16_t x46 = 358;
int8_t x56 = INT8_MIN;
volatile int64_t t13 = INT64_MAX;
volatile uint32_t t15 = 29673903U;
uint32_t x65 = 1937479341U;
int16_t x67 = -634;
uint32_t t16 = 2050060U;
uint64_t t17 = 3568199670367142178LLU;
int64_t x78 = 781LL;
int8_t x79 = -1;
int32_t x80 = -13979976;
int8_t x89 = INT8_MAX;
int64_t t22 = -124292836398LL;
int16_t x103 = 7;
static uint16_t x105 = 6485U;
volatile int32_t x110 = INT32_MIN;
int32_t x113 = INT32_MIN;
int8_t x115 = 3;
int8_t x123 = -1;
static volatile int64_t x130 = 1436442363LL;
int64_t x131 = INT64_MAX;
static int64_t x137 = -386814064988LL;
volatile int8_t x139 = 1;
uint64_t x141 = UINT64_MAX;
int16_t x148 = -1;
volatile uint8_t x152 = UINT8_MAX;
int64_t t38 = 2LL;
uint8_t x157 = 2U;
static volatile int32_t x159 = -333465;
volatile int32_t t39 = -1829634;
uint8_t x163 = 24U;
uint64_t t40 = 496031960237547LLU;
int16_t x165 = 63;
int32_t x178 = -12;
static uint64_t x183 = 453373LLU;
volatile int8_t x185 = 13;
int8_t x191 = -1;
uint8_t x197 = 38U;
int16_t x198 = -59;
int16_t x199 = -930;
static volatile int16_t x200 = -1;
int32_t x201 = INT32_MIN;
int8_t x205 = 17;
static int32_t x208 = INT32_MIN;
static volatile int32_t t51 = 1033962;
int64_t x209 = -1LL;
int64_t x210 = INT64_MAX;
uint8_t x216 = UINT8_MAX;
volatile int32_t t53 = -22;
int8_t x220 = 1;
int64_t t54 = 30208235151604LL;
int64_t x229 = INT64_MIN;
volatile int64_t x236 = -1LL;
volatile uint64_t t59 = UINT64_MAX;
uint16_t x242 = 3U;
volatile int64_t t60 = 4856423LL;
static volatile uint8_t x249 = UINT8_MAX;
static int32_t x259 = INT32_MIN;
volatile int16_t x261 = -1;
int64_t t66 = -379LL;
volatile uint64_t t67 = 1LLU;
int16_t x273 = -1;
static int16_t x275 = 7;
static int16_t x277 = INT16_MIN;
int8_t x281 = -1;
int16_t x282 = INT16_MAX;
static uint32_t x283 = UINT32_MAX;
int32_t x284 = INT32_MAX;
int16_t x288 = INT16_MIN;
int32_t x291 = 9;
uint16_t x293 = 1U;
static uint16_t x295 = 7838U;
uint8_t x299 = 11U;
int8_t x311 = INT8_MIN;
volatile uint32_t x316 = UINT32_MAX;
uint64_t t78 = 3222127417LLU;
int8_t x318 = 5;
volatile int32_t x322 = 12;
volatile int8_t x323 = -1;
volatile int8_t x330 = INT8_MAX;
volatile int32_t t83 = 2550;
int16_t x342 = INT16_MIN;
static uint32_t x351 = UINT32_MAX;
static uint8_t x353 = UINT8_MAX;
static volatile int64_t t88 = 123920LL;
int8_t x360 = INT8_MAX;
int8_t x364 = 9;
static uint32_t x370 = 1U;
int16_t x387 = -1;
volatile int64_t t96 = -2688810139579LL;
volatile uint32_t t97 = 247955U;
int8_t x398 = INT8_MAX;
uint64_t x400 = 2533679767887020LLU;
static int16_t x403 = INT16_MAX;
volatile uint32_t x406 = UINT32_MAX;
int32_t t103 = 3426047;
uint64_t x421 = UINT64_MAX;
static int16_t x434 = INT16_MAX;
volatile int64_t t108 = -87905LL;
int64_t x441 = INT64_MIN;
int64_t x444 = INT64_MIN;
uint16_t x445 = UINT16_MAX;
uint64_t t110 = 4LLU;
static volatile int16_t x455 = INT16_MIN;
volatile int16_t x457 = INT16_MIN;
int16_t x458 = -1844;
volatile int8_t x464 = INT8_MAX;
uint32_t x466 = 851239198U;
int64_t x467 = INT64_MIN;
uint16_t x472 = 6835U;
static int32_t t117 = -516131;
static uint16_t x482 = 1885U;
uint32_t x483 = UINT32_MAX;
static int32_t t118 = 1;
int8_t x485 = 5;
volatile int64_t x494 = 85784930533841033LL;
static volatile int64_t x500 = INT64_MIN;
volatile int16_t x506 = -1;
int8_t x508 = -1;
int16_t x511 = -1;
uint32_t x513 = UINT32_MAX;
volatile uint8_t x516 = 64U;
uint32_t x519 = 118U;
static uint16_t x523 = 73U;
int16_t x526 = INT16_MIN;
int16_t x527 = INT16_MAX;
static uint8_t x529 = UINT8_MAX;
int32_t x532 = -1;
int32_t t130 = 705240;
int8_t x533 = -1;
int32_t x541 = INT32_MIN;
static int8_t x544 = -1;
int32_t x549 = -1;
volatile int64_t x550 = INT64_MAX;
static int64_t x552 = -13015433LL;
int32_t x554 = -1;
uint64_t t135 = 957820672195LLU;
int32_t x560 = -1;
int64_t x561 = INT64_MIN;
uint8_t x566 = 3U;
uint32_t x567 = UINT32_MAX;
volatile int64_t t139 = 241LL;
static int32_t x574 = -1;
static int32_t t140 = INT32_MIN;
static int16_t x578 = 1;
volatile uint64_t t141 = 243718651094244763LLU;
uint16_t x583 = 55U;
uint32_t x592 = UINT32_MAX;
volatile uint64_t t145 = 32031LLU;
int8_t x597 = 2;
volatile int16_t x602 = INT16_MIN;
int8_t x604 = 47;
volatile int64_t t149 = INT64_MIN;
static volatile int32_t x614 = -1;
int16_t x615 = INT16_MIN;
int8_t x617 = INT8_MIN;
int32_t t151 = 0;
volatile uint64_t x623 = UINT64_MAX;
volatile int32_t x624 = INT32_MAX;
static volatile uint16_t x625 = UINT16_MAX;
static uint8_t x626 = 2U;
uint64_t x635 = 339LLU;
uint32_t x647 = 7678U;
uint32_t x652 = 145098496U;
volatile uint16_t x654 = UINT16_MAX;
volatile int64_t x655 = -4219436932731121LL;
volatile uint64_t t159 = 505912287702836LLU;
uint32_t x657 = 3069U;
int32_t x667 = INT32_MIN;
int16_t x674 = INT16_MIN;
uint32_t x688 = UINT32_MAX;
int64_t x689 = INT64_MIN;
static int32_t t169 = -2746;
int64_t x699 = 4324230LL;
int32_t x703 = INT32_MAX;
volatile int64_t t173 = 52209798LL;
volatile int64_t t175 = 1174920266160LL;
int8_t x728 = -3;
static uint16_t x732 = UINT16_MAX;
volatile uint32_t x733 = UINT32_MAX;
static uint16_t x734 = 18U;
int16_t x740 = -1596;
uint16_t x741 = 508U;
int16_t x743 = -1;
volatile int8_t x747 = -1;
int16_t x748 = -3;
volatile int32_t t182 = 65063;
uint32_t x754 = 26824375U;
static volatile uint32_t t184 = 220392U;
static int64_t x760 = -1LL;
int8_t x762 = INT8_MIN;
int64_t x768 = INT64_MIN;
static uint8_t x770 = UINT8_MAX;
volatile int32_t x773 = INT32_MIN;
int16_t x774 = INT16_MIN;
volatile int32_t x775 = -1;
uint32_t x778 = UINT32_MAX;
static int32_t t191 = INT32_MAX;
volatile int16_t x787 = 3;
volatile int64_t x792 = INT64_MAX;
static int64_t x793 = -276667323LL;
int16_t x797 = INT16_MIN;
volatile int8_t x805 = INT8_MAX;
int32_t x820 = -1;


void f0(void) {
    	uint32_t x1 = 108U;
	int8_t x2 = INT8_MIN;
	volatile uint32_t t0 = 29U;

    t0 = (x1+((x2!=x3)&x4));

    if (t0 != 108U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static volatile int8_t x6 = 1;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 3;
	volatile int64_t t1 = 75258LL;

    t1 = (x5+((x6!=x7)&x8));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint16_t x10 = 194U;
	int64_t x12 = INT64_MIN;
	int64_t t2 = 3578806579869689921LL;

    t2 = (x9+((x10!=x11)&x12));

    if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 4579LL;

    t3 = (x13+((x14!=x15)&x16));

    if (t3 != 256LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MIN;
	uint8_t x19 = 23U;
	uint8_t x20 = 4U;
	volatile int32_t t4 = 839;

    t4 = (x17+((x18!=x19)&x20));

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x21 = 1991681U;
	volatile int16_t x22 = INT16_MIN;
	uint32_t x23 = UINT32_MAX;
	static uint16_t x24 = 16291U;
	static uint32_t t5 = 1534806U;

    t5 = (x21+((x22!=x23)&x24));

    if (t5 != 1991682U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 70U;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -4229402LL;

    t6 = (x25+((x26!=x27)&x28));

    if (t6 != 70LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 25557U;
	int8_t x30 = -1;
	uint64_t x31 = 29270768263834LLU;
	int8_t x32 = INT8_MIN;

    t7 = (x29+((x30!=x31)&x32));

    if (t7 != 25557) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = UINT32_MAX;
	uint32_t x34 = UINT32_MAX;
	uint32_t x35 = 220885313U;
	int64_t x36 = INT64_MAX;

    t8 = (x33+((x34!=x35)&x36));

    if (t8 != 4294967296LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -30;
	uint64_t x38 = 564755183693642LLU;
	int32_t x40 = -17600507;

    t9 = (x37+((x38!=x39)&x40));

    if (t9 != -29) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	int32_t x43 = -1;
	int16_t x44 = -1;

    t10 = (x41+((x42!=x43)&x44));

    if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	static uint32_t x47 = 304201U;
	static uint8_t x48 = 124U;
	int64_t t11 = INT64_MIN;

    t11 = (x45+((x46!=x47)&x48));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 1666;
	int64_t x50 = -1LL;
	int8_t x51 = 0;
	uint32_t x52 = 1535874563U;
	uint32_t t12 = 50477075U;

    t12 = (x49+((x50!=x51)&x52));

    if (t12 != 1667U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MAX;
	volatile int32_t x54 = -91;
	int32_t x55 = 5;

    t13 = (x53+((x54!=x55)&x56));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1729510845485LL;
	int64_t x58 = -1168589100419602828LL;
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MAX;
	volatile int64_t t14 = -5LL;

    t14 = (x57+((x58!=x59)&x60));

    if (t14 != -1729510845484LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	uint32_t x64 = UINT32_MAX;

    t15 = (x61+((x62!=x63)&x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x66 = INT64_MIN;
	static volatile int16_t x68 = -344;

    t16 = (x65+((x66!=x67)&x68));

    if (t16 != 1937479341U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 1484370907580025LLU;
	int64_t x70 = 3895625153943820LL;
	int16_t x71 = -1309;
	uint64_t x72 = UINT64_MAX;

    t17 = (x69+((x70!=x71)&x72));

    if (t17 != 1484370907580026LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	volatile int32_t x74 = INT32_MIN;
	static uint64_t x75 = 2148930055277424167LLU;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 1296180LL;

    t18 = (x73+((x74!=x75)&x76));

    if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = 1;
	volatile int32_t t19 = 105757;

    t19 = (x77+((x78!=x79)&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MAX;
	static int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int16_t x84 = -4124;
	int64_t t20 = INT64_MAX;

    t20 = (x81+((x82!=x83)&x84));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 0U;
	uint16_t x86 = UINT16_MAX;
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = 12;
	int32_t t21 = 18642725;

    t21 = (x85+((x86!=x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = 13;
	int8_t x91 = 0;
	static int64_t x92 = INT64_MIN;

    t22 = (x89+((x90!=x91)&x92));

    if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	uint32_t x94 = 159820U;
	static int16_t x95 = 360;
	uint16_t x96 = UINT16_MAX;
	uint64_t t23 = 259759010594831749LLU;

    t23 = (x93+((x94!=x95)&x96));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 4495U;
	int32_t x98 = 1161332;
	volatile int64_t x99 = INT64_MIN;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = -1142646841147LL;

    t24 = (x97+((x98!=x99)&x100));

    if (t24 != 4495LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 206551LL;
	volatile uint8_t x102 = 2U;
	volatile int8_t x104 = INT8_MIN;
	volatile int64_t t25 = -14760138248387LL;

    t25 = (x101+((x102!=x103)&x104));

    if (t25 != 206551LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MIN;
	uint8_t x107 = 28U;
	uint32_t x108 = 43681956U;
	uint32_t t26 = 4921U;

    t26 = (x105+((x106!=x107)&x108));

    if (t26 != 6485U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static uint32_t x111 = 34769U;
	static int16_t x112 = -1;
	int32_t t27 = 40913515;

    t27 = (x109+((x110!=x111)&x112));

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = 0U;
	int32_t x116 = INT32_MIN;
	int32_t t28 = INT32_MIN;

    t28 = (x113+((x114!=x115)&x116));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = INT16_MIN;
	volatile int16_t x118 = -1;
	uint16_t x119 = 1620U;
	uint32_t x120 = 352U;
	uint32_t t29 = 42772694U;

    t29 = (x117+((x118!=x119)&x120));

    if (t29 != 4294934528U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 510U;
	int32_t x122 = INT32_MAX;
	uint32_t x124 = 123954484U;
	uint32_t t30 = 132837U;

    t30 = (x121+((x122!=x123)&x124));

    if (t30 != 510U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	static volatile uint32_t x127 = UINT32_MAX;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = 13;

    t31 = (x125+((x126!=x127)&x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x132 = 24;
	int32_t t32 = -159128;

    t32 = (x129+((x130!=x131)&x132));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = 184LLU;
	uint64_t t33 = 31506402LLU;

    t33 = (x133+((x134!=x135)&x136));

    if (t33 != 4294967295LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	static int64_t t34 = 1754273855117116LL;

    t34 = (x137+((x138!=x139)&x140));

    if (t34 != -386814064988LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MIN;
	int64_t x143 = 48486676881419820LL;
	volatile int16_t x144 = INT16_MAX;
	uint64_t t35 = 1347990LLU;

    t35 = (x141+((x142!=x143)&x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 5U;
	uint64_t x146 = 6320164LLU;
	static int64_t x147 = -151834LL;
	static volatile int32_t t36 = 254398;

    t36 = (x145+((x146!=x147)&x148));

    if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int16_t x150 = -2422;
	static int16_t x151 = INT16_MIN;
	int32_t t37 = -1;

    t37 = (x149+((x150!=x151)&x152));

    if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = INT64_MIN;
	int16_t x154 = 12960;
	static volatile int8_t x155 = 0;
	uint8_t x156 = UINT8_MAX;

    t38 = (x153+((x154!=x155)&x156));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	volatile int16_t x160 = INT16_MIN;

    t39 = (x157+((x158!=x159)&x160));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 9455513561LLU;
	int64_t x162 = INT64_MIN;
	int8_t x164 = -5;

    t40 = (x161+((x162!=x163)&x164));

    if (t40 != 9455513562LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x166 = 0U;
	static int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	static int32_t t41 = 824967;

    t41 = (x165+((x166!=x167)&x168));

    if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int16_t x170 = 899;
	uint32_t x171 = UINT32_MAX;
	static uint64_t x172 = 2111144033466290024LLU;
	uint64_t t42 = 9820853263215LLU;

    t42 = (x169+((x170!=x171)&x172));

    if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 5620893;

    t43 = (x173+((x174!=x175)&x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 216395663LLU;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MIN;
	uint64_t t44 = 191449062LLU;

    t44 = (x177+((x178!=x179)&x180));

    if (t44 != 216395663LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x181 = 188128099U;
	uint16_t x182 = 0U;
	volatile int64_t x184 = -1LL;
	volatile int64_t t45 = 1248LL;

    t45 = (x181+((x182!=x183)&x184));

    if (t45 != 188128100LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 53240LLU;
	uint16_t x187 = 38U;
	static uint32_t x188 = 2842870U;
	volatile uint32_t t46 = 107968645U;

    t46 = (x185+((x186!=x187)&x188));

    if (t46 != 13U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	int64_t t47 = INT64_MIN;

    t47 = (x189+((x190!=x191)&x192));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 12334934U;
	uint8_t x194 = 1U;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = 22U;
	volatile uint32_t t48 = 123621U;

    t48 = (x193+((x194!=x195)&x196));

    if (t48 != 12334934U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t t49 = -25918312;

    t49 = (x197+((x198!=x199)&x200));

    if (t49 != 39) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x202 = 29U;
	int8_t x203 = INT8_MAX;
	volatile int64_t x204 = INT64_MAX;
	int64_t t50 = 7823LL;

    t50 = (x201+((x202!=x203)&x204));

    if (t50 != -2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x206 = UINT32_MAX;
	int64_t x207 = -423463451LL;

    t51 = (x205+((x206!=x207)&x208));

    if (t51 != 17) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x211 = 8917574LLU;
	static volatile int16_t x212 = -1;
	volatile int64_t t52 = -338748967552947716LL;

    t52 = (x209+((x210!=x211)&x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	volatile int32_t x215 = -1;

    t53 = (x213+((x214!=x215)&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -283483354085652281LL;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = 640;

    t54 = (x217+((x218!=x219)&x220));

    if (t54 != -283483354085652280LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	int16_t x222 = -1;
	static int32_t x223 = 0;
	volatile uint32_t x224 = 3090413U;
	volatile uint32_t t55 = 27219347U;

    t55 = (x221+((x222!=x223)&x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = -1LL;
	volatile int64_t x226 = 12LL;
	volatile int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	static int64_t t56 = 739534630745LL;

    t56 = (x225+((x226!=x227)&x228));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x230 = 0;
	volatile uint64_t x231 = 4LLU;
	uint64_t x232 = 1218888605LLU;
	volatile uint64_t t57 = 911399358619753LLU;

    t57 = (x229+((x230!=x231)&x232));

    if (t57 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MAX;
	int16_t x235 = 2;
	int64_t t58 = -13LL;

    t58 = (x233+((x234!=x235)&x236));

    if (t58 != -2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x237 = -1;
	int32_t x238 = -387;
	static int16_t x239 = INT16_MAX;
	uint64_t x240 = 262237974051841104LLU;

    t59 = (x237+((x238!=x239)&x240));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -1;
	volatile uint32_t x243 = UINT32_MAX;
	int64_t x244 = -1LL;

    t60 = (x241+((x242!=x243)&x244));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	int16_t x246 = -533;
	volatile int32_t x247 = -1;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 347609155;

    t61 = (x245+((x246!=x247)&x248));

    if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = -1LL;
	volatile uint64_t x251 = UINT64_MAX;
	volatile int8_t x252 = INT8_MIN;
	int32_t t62 = -1;

    t62 = (x249+((x250!=x251)&x252));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -119511;
	int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	static uint16_t x256 = 60U;
	int32_t t63 = -23;

    t63 = (x253+((x254!=x255)&x256));

    if (t63 != -119511) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;
	static int8_t x260 = -16;
	static volatile int64_t t64 = INT64_MIN;

    t64 = (x257+((x258!=x259)&x260));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = 1;
	volatile int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t65 = -12745558600LL;

    t65 = (x261+((x262!=x263)&x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 29U;
	int8_t x266 = 38;
	static volatile int16_t x267 = 130;
	static volatile int64_t x268 = INT64_MIN;

    t66 = (x265+((x266!=x267)&x268));

    if (t66 != 29LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	uint32_t x270 = 12088U;
	uint8_t x271 = 29U;
	uint64_t x272 = 53023899959LLU;

    t67 = (x269+((x270!=x271)&x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = INT32_MIN;
	volatile int16_t x276 = 15979;
	int32_t t68 = 187847;

    t68 = (x273+((x274!=x275)&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x278 = UINT8_MAX;
	static int16_t x279 = -137;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -38014624;

    t69 = (x277+((x278!=x279)&x280));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t t70 = -257595;

    t70 = (x281+((x282!=x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 3167U;
	int8_t x286 = INT8_MAX;
	int64_t x287 = 1849848504536538334LL;
	int32_t t71 = -736949;

    t71 = (x285+((x286!=x287)&x288));

    if (t71 != 3167) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 0;
	volatile int64_t x290 = INT64_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 11;

    t72 = (x289+((x290!=x291)&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 2;

    t73 = (x293+((x294!=x295)&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = -156804974553312LL;
	static int16_t x298 = INT16_MIN;
	int16_t x300 = 15;
	volatile int64_t t74 = 396651168LL;

    t74 = (x297+((x298!=x299)&x300));

    if (t74 != -156804974553311LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int16_t x302 = 1;
	static uint64_t x303 = 24442LLU;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = -685181;

    t75 = (x301+((x302!=x303)&x304));

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint16_t x306 = 3U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 0;
	volatile int32_t t76 = INT32_MIN;

    t76 = (x305+((x306!=x307)&x308));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 497060011LLU;
	int32_t x310 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t77 = 136120756LLU;

    t77 = (x309+((x310!=x311)&x312));

    if (t77 != 497060011LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = 998693198LLU;
	uint16_t x314 = 1U;
	volatile int32_t x315 = INT32_MAX;

    t78 = (x313+((x314!=x315)&x316));

    if (t78 != 998693199LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	volatile int8_t x320 = -37;
	int32_t t79 = -3;

    t79 = (x317+((x318!=x319)&x320));

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -4;
	static volatile int16_t x324 = -3883;
	volatile int32_t t80 = 3635257;

    t80 = (x321+((x322!=x323)&x324));

    if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = -65;
	static int32_t x327 = -888584;
	int32_t x328 = -32769499;
	volatile int32_t t81 = 1122593;

    t81 = (x325+((x326!=x327)&x328));

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	uint8_t x331 = 38U;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 0;

    t82 = (x329+((x330!=x331)&x332));

    if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	uint8_t x334 = 0U;
	volatile int16_t x335 = -3;
	static volatile int16_t x336 = -1;

    t83 = (x333+((x334!=x335)&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	static uint8_t x338 = 69U;
	uint16_t x339 = 10395U;
	volatile uint32_t x340 = 35U;
	static volatile uint32_t t84 = 758265U;

    t84 = (x337+((x338!=x339)&x340));

    if (t84 != 32768U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int8_t x343 = INT8_MAX;
	uint32_t x344 = 912U;
	static uint32_t t85 = 1048363484U;

    t85 = (x341+((x342!=x343)&x344));

    if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = 55;
	uint8_t x347 = 0U;
	uint32_t x348 = 6U;
	static volatile int64_t t86 = INT64_MIN;

    t86 = (x345+((x346!=x347)&x348));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 0;
	int32_t x350 = 231666;
	static int64_t x352 = INT64_MAX;
	volatile int64_t t87 = -1LL;

    t87 = (x349+((x350!=x351)&x352));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = 667406442LL;

    t88 = (x353+((x354!=x355)&x356));

    if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 95U;
	int32_t x358 = INT32_MAX;
	int8_t x359 = INT8_MIN;
	volatile int32_t t89 = 6578;

    t89 = (x357+((x358!=x359)&x360));

    if (t89 != 96) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 71463;
	int16_t x362 = -1;
	int8_t x363 = -1;
	int32_t t90 = -8632517;

    t90 = (x361+((x362!=x363)&x364));

    if (t90 != 71463) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 0U;
	uint16_t x366 = 1694U;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -1;

    t91 = (x365+((x366!=x367)&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 4133527306990702LLU;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;
	uint64_t t92 = 257245688LLU;

    t92 = (x369+((x370!=x371)&x372));

    if (t92 != 4133527306990702LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x377 = UINT16_MAX;
	volatile int64_t x378 = 43LL;
	int8_t x379 = 24;
	int32_t x380 = 11145782;
	int32_t t93 = 4896;

    t93 = (x377+((x378!=x379)&x380));

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x381 = 7045140LLU;
	int32_t x382 = -1;
	int32_t x383 = INT32_MIN;
	volatile uint32_t x384 = UINT32_MAX;
	static volatile uint64_t t94 = 1LLU;

    t94 = (x381+((x382!=x383)&x384));

    if (t94 != 7045141LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MIN;
	volatile uint32_t x386 = UINT32_MAX;
	volatile int64_t x388 = INT64_MIN;
	int64_t t95 = INT64_MIN;

    t95 = (x385+((x386!=x387)&x388));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = 20;
	int8_t x390 = INT8_MIN;
	int32_t x391 = 563;
	int64_t x392 = -623LL;

    t96 = (x389+((x390!=x391)&x392));

    if (t96 != 21LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = 18U;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -1272;
	uint32_t x396 = 14U;

    t97 = (x393+((x394!=x395)&x396));

    if (t97 != 18U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MIN;
	static int64_t x399 = INT64_MAX;
	uint64_t t98 = 2219813208083600187LLU;

    t98 = (x397+((x398!=x399)&x400));

    if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x401 = 3U;
	int16_t x402 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	static int32_t t99 = 155383469;

    t99 = (x401+((x402!=x403)&x404));

    if (t99 != 3) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x405 = -1;
	int32_t x407 = -1;
	int32_t x408 = 5618506;
	volatile int32_t t100 = -8;

    t100 = (x405+((x406!=x407)&x408));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = 27242LL;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x409+((x410!=x411)&x412));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = INT8_MAX;
	int64_t x414 = 0LL;
	static uint64_t x415 = UINT64_MAX;
	uint32_t x416 = UINT32_MAX;
	uint32_t t102 = 241091U;

    t102 = (x413+((x414!=x415)&x416));

    if (t102 != 128U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = 10U;
	uint16_t x418 = 72U;
	int8_t x419 = INT8_MAX;
	int32_t x420 = -1;

    t103 = (x417+((x418!=x419)&x420));

    if (t103 != 11) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x422 = 0;
	int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t104 = 128862056053LLU;

    t104 = (x421+((x422!=x423)&x424));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	uint8_t x426 = 4U;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	volatile int32_t t105 = -263;

    t105 = (x425+((x426!=x427)&x428));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	uint16_t x430 = UINT16_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 3627U;
	uint64_t t106 = 52LLU;

    t106 = (x429+((x430!=x431)&x432));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x433 = INT32_MIN;
	volatile uint16_t x435 = 194U;
	static volatile uint32_t x436 = 3U;
	static volatile uint32_t t107 = 202U;

    t107 = (x433+((x434!=x435)&x436));

    if (t107 != 2147483649U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x437 = 46256LL;
	int8_t x438 = INT8_MIN;
	uint16_t x439 = UINT16_MAX;
	volatile uint32_t x440 = UINT32_MAX;

    t108 = (x437+((x438!=x439)&x440));

    if (t108 != 46257LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MIN;
	static volatile int64_t t109 = INT64_MIN;

    t109 = (x441+((x442!=x443)&x444));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = UINT64_MAX;

    t110 = (x445+((x446!=x447)&x448));

    if (t110 != 65536LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x449 = 10;
	int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	uint32_t x452 = 171U;
	uint32_t t111 = 1U;

    t111 = (x449+((x450!=x451)&x452));

    if (t111 != 11U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = INT32_MIN;
	uint64_t x454 = 186228LLU;
	uint32_t x456 = UINT32_MAX;
	volatile uint32_t t112 = 241455U;

    t112 = (x453+((x454!=x455)&x456));

    if (t112 != 2147483649U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t113 = 2279;

    t113 = (x457+((x458!=x459)&x460));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x461 = INT32_MIN;
	int32_t x462 = -1;
	volatile uint64_t x463 = 6331LLU;
	volatile int32_t t114 = -13292500;

    t114 = (x461+((x462!=x463)&x464));

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x465 = 89125U;
	int32_t x468 = -1;
	volatile uint32_t t115 = 6U;

    t115 = (x465+((x466!=x467)&x468));

    if (t115 != 89126U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 983U;
	volatile int64_t x471 = 24082389855733LL;
	static volatile int32_t t116 = 129077;

    t116 = (x469+((x470!=x471)&x472));

    if (t116 != 256) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x477 = 9631;
	volatile uint8_t x478 = 91U;
	int32_t x479 = INT32_MIN;
	volatile int16_t x480 = INT16_MAX;

    t117 = (x477+((x478!=x479)&x480));

    if (t117 != 9632) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x481 = 25U;
	static volatile uint8_t x484 = UINT8_MAX;

    t118 = (x481+((x482!=x483)&x484));

    if (t118 != 26) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x486 = INT32_MIN;
	uint8_t x487 = 0U;
	static uint64_t x488 = 4686LLU;
	volatile uint64_t t119 = 191780730217LLU;

    t119 = (x485+((x486!=x487)&x488));

    if (t119 != 5LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = INT16_MIN;
	volatile int16_t x490 = INT16_MAX;
	static int8_t x491 = 0;
	uint32_t x492 = UINT32_MAX;
	uint32_t t120 = 431U;

    t120 = (x489+((x490!=x491)&x492));

    if (t120 != 4294934529U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x493 = 22LLU;
	static volatile int8_t x495 = -1;
	volatile int8_t x496 = -1;
	uint64_t t121 = 7687785419LLU;

    t121 = (x493+((x494!=x495)&x496));

    if (t121 != 23LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x497 = 108027086;
	static uint32_t x498 = 111U;
	static int8_t x499 = INT8_MAX;
	volatile int64_t t122 = 605127383673929835LL;

    t122 = (x497+((x498!=x499)&x500));

    if (t122 != 108027086LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x501 = UINT64_MAX;
	int64_t x502 = -1LL;
	volatile uint8_t x503 = UINT8_MAX;
	int64_t x504 = INT64_MIN;
	uint64_t t123 = UINT64_MAX;

    t123 = (x501+((x502!=x503)&x504));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x505 = 2640U;
	static int64_t x507 = INT64_MIN;
	volatile int32_t t124 = 105;

    t124 = (x505+((x506!=x507)&x508));

    if (t124 != 2641) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x510 = -1265883647115LL;
	int16_t x512 = INT16_MIN;
	int64_t t125 = INT64_MIN;

    t125 = (x509+((x510!=x511)&x512));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x514 = UINT16_MAX;
	uint64_t x515 = 714LLU;
	uint32_t t126 = UINT32_MAX;

    t126 = (x513+((x514!=x515)&x516));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = INT8_MAX;
	int16_t x518 = 7519;
	uint64_t x520 = 257811898036LLU;
	volatile uint64_t t127 = 113770LLU;

    t127 = (x517+((x518!=x519)&x520));

    if (t127 != 127LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x521 = INT32_MIN;
	static uint16_t x522 = UINT16_MAX;
	uint8_t x524 = 16U;
	volatile int32_t t128 = INT32_MIN;

    t128 = (x521+((x522!=x523)&x524));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x528 = -1;
	int32_t t129 = -635363;

    t129 = (x525+((x526!=x527)&x528));

    if (t129 != -127) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x530 = INT64_MIN;
	int8_t x531 = -1;

    t130 = (x529+((x530!=x531)&x532));

    if (t130 != 256) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x534 = 32297798;
	volatile uint16_t x535 = 101U;
	uint16_t x536 = 6U;
	static int32_t t131 = -26;

    t131 = (x533+((x534!=x535)&x536));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x542 = 15U;
	static int16_t x543 = INT16_MIN;
	int32_t t132 = 4806708;

    t132 = (x541+((x542!=x543)&x544));

    if (t132 != -2147483647) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x545 = UINT64_MAX;
	int16_t x546 = -3;
	uint64_t x547 = UINT64_MAX;
	volatile int64_t x548 = INT64_MIN;
	uint64_t t133 = UINT64_MAX;

    t133 = (x545+((x546!=x547)&x548));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x551 = INT32_MIN;
	volatile int64_t t134 = -14844052LL;

    t134 = (x549+((x550!=x551)&x552));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	uint8_t x555 = 0U;
	static volatile uint64_t x556 = UINT64_MAX;

    t135 = (x553+((x554!=x555)&x556));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x557 = UINT16_MAX;
	static int32_t x558 = 9;
	static uint32_t x559 = 251577596U;
	int32_t t136 = -820349;

    t136 = (x557+((x558!=x559)&x560));

    if (t136 != 65536) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x562 = INT8_MAX;
	static int16_t x563 = -1;
	volatile int64_t x564 = -27489176LL;
	volatile int64_t t137 = INT64_MIN;

    t137 = (x561+((x562!=x563)&x564));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MIN;
	static int8_t x568 = 7;
	int32_t t138 = 21960093;

    t138 = (x565+((x566!=x567)&x568));

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x569 = INT32_MAX;
	static int16_t x570 = -1;
	volatile int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MIN;

    t139 = (x569+((x570!=x571)&x572));

    if (t139 != 2147483647LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x573 = INT32_MIN;
	uint16_t x575 = 0U;
	volatile uint8_t x576 = 58U;

    t140 = (x573+((x574!=x575)&x576));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = INT16_MAX;
	int64_t x579 = INT64_MAX;
	volatile uint64_t x580 = 36539623LLU;

    t141 = (x577+((x578!=x579)&x580));

    if (t141 != 32768LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x581 = UINT16_MAX;
	uint8_t x582 = UINT8_MAX;
	int16_t x584 = INT16_MIN;
	int32_t t142 = 2491;

    t142 = (x581+((x582!=x583)&x584));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x585 = INT8_MAX;
	uint8_t x586 = 2U;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	volatile int64_t t143 = 197234LL;

    t143 = (x585+((x586!=x587)&x588));

    if (t143 != 127LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x589 = -3585312998588LL;
	uint64_t x590 = UINT64_MAX;
	int32_t x591 = 1338568;
	volatile int64_t t144 = 89545LL;

    t144 = (x589+((x590!=x591)&x592));

    if (t144 != -3585312998587LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = INT32_MIN;
	static uint64_t x594 = 8045LLU;
	volatile uint16_t x595 = 47U;
	uint64_t x596 = 1LLU;

    t145 = (x593+((x594!=x595)&x596));

    if (t145 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x598 = 9U;
	uint16_t x599 = 199U;
	uint8_t x600 = UINT8_MAX;
	int32_t t146 = 0;

    t146 = (x597+((x598!=x599)&x600));

    if (t146 != 3) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x601 = 1724239516LLU;
	uint8_t x603 = UINT8_MAX;
	uint64_t t147 = 4533226551351879LLU;

    t147 = (x601+((x602!=x603)&x604));

    if (t147 != 1724239517LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	uint32_t x608 = 6226587U;
	static uint32_t t148 = 3U;

    t148 = (x605+((x606!=x607)&x608));

    if (t148 != 32768U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x609 = INT64_MIN;
	static uint8_t x610 = 20U;
	static int16_t x611 = -1;
	int32_t x612 = INT32_MIN;

    t149 = (x609+((x610!=x611)&x612));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = -1;
	int8_t x616 = INT8_MAX;
	volatile int32_t t150 = 7213;

    t150 = (x613+((x614!=x615)&x616));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x618 = -1;
	volatile int64_t x619 = INT64_MIN;
	uint8_t x620 = 44U;

    t151 = (x617+((x618!=x619)&x620));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x621 = 11U;
	int32_t x622 = 77948;
	int32_t t152 = -1702;

    t152 = (x621+((x622!=x623)&x624));

    if (t152 != 12) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x627 = 3U;
	static int8_t x628 = 1;
	int32_t t153 = -864632357;

    t153 = (x625+((x626!=x627)&x628));

    if (t153 != 65536) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x629 = 17U;
	int16_t x630 = INT16_MIN;
	static int8_t x631 = -1;
	int16_t x632 = INT16_MIN;
	int32_t t154 = 124520;

    t154 = (x629+((x630!=x631)&x632));

    if (t154 != 17) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x633 = -1;
	int32_t x634 = -1;
	uint64_t x636 = UINT64_MAX;
	volatile uint64_t t155 = 16LLU;

    t155 = (x633+((x634!=x635)&x636));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x637 = 54U;
	int8_t x638 = INT8_MIN;
	uint64_t x639 = 129031819190408449LLU;
	uint16_t x640 = UINT16_MAX;
	int32_t t156 = 42206117;

    t156 = (x637+((x638!=x639)&x640));

    if (t156 != 55) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x645 = -1;
	static volatile int64_t x646 = -1LL;
	int16_t x648 = INT16_MIN;
	int32_t t157 = 54182699;

    t157 = (x645+((x646!=x647)&x648));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x649 = 86U;
	int16_t x650 = -14700;
	uint16_t x651 = 957U;
	uint32_t t158 = 55724790U;

    t158 = (x649+((x650!=x651)&x652));

    if (t158 != 86U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x653 = 2831877143621017148LLU;
	uint16_t x656 = UINT16_MAX;

    t159 = (x653+((x654!=x655)&x656));

    if (t159 != 2831877143621017149LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x658 = -27;
	uint8_t x659 = 2U;
	uint8_t x660 = 1U;
	static volatile uint32_t t160 = 81U;

    t160 = (x657+((x658!=x659)&x660));

    if (t160 != 3070U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = -12;
	int16_t x662 = -1;
	volatile int16_t x663 = INT16_MIN;
	uint8_t x664 = 32U;
	volatile int32_t t161 = -343;

    t161 = (x661+((x662!=x663)&x664));

    if (t161 != -12) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = INT32_MIN;
	volatile int8_t x666 = -12;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t162 = 9994519;

    t162 = (x665+((x666!=x667)&x668));

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x669 = 52U;
	int64_t x670 = 258808114261788024LL;
	uint8_t x671 = 10U;
	volatile uint32_t x672 = 7580515U;
	volatile uint32_t t163 = 1462U;

    t163 = (x669+((x670!=x671)&x672));

    if (t163 != 53U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x673 = 20U;
	int8_t x675 = INT8_MAX;
	int64_t x676 = INT64_MIN;
	volatile int64_t t164 = 9662102035588LL;

    t164 = (x673+((x674!=x675)&x676));

    if (t164 != 20LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x677 = 1806U;
	int64_t x678 = -1LL;
	int64_t x679 = -1LL;
	int64_t x680 = INT64_MAX;
	volatile int64_t t165 = 420765413LL;

    t165 = (x677+((x678!=x679)&x680));

    if (t165 != 1806LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = INT8_MAX;
	static int16_t x682 = -1;
	static int32_t x683 = INT32_MAX;
	volatile int16_t x684 = INT16_MAX;
	int32_t t166 = -75;

    t166 = (x681+((x682!=x683)&x684));

    if (t166 != 128) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = -103615887;
	uint64_t x686 = 8883LLU;
	uint16_t x687 = 1U;
	static volatile uint32_t t167 = 1016636727U;

    t167 = (x685+((x686!=x687)&x688));

    if (t167 != 4191351410U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x690 = INT16_MIN;
	uint64_t x691 = UINT64_MAX;
	int16_t x692 = INT16_MIN;
	static int64_t t168 = INT64_MIN;

    t168 = (x689+((x690!=x691)&x692));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = -380;
	uint8_t x694 = UINT8_MAX;
	int8_t x695 = INT8_MIN;
	int32_t x696 = 1864176;

    t169 = (x693+((x694!=x695)&x696));

    if (t169 != -380) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x697 = -1;
	int16_t x698 = INT16_MIN;
	int8_t x700 = 11;
	int32_t t170 = 2;

    t170 = (x697+((x698!=x699)&x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x701 = -1LL;
	static uint64_t x702 = UINT64_MAX;
	int16_t x704 = -14;
	static volatile int64_t t171 = -11970913956194417LL;

    t171 = (x701+((x702!=x703)&x704));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x705 = 3469164330123322LLU;
	static int64_t x706 = INT64_MAX;
	int32_t x707 = INT32_MIN;
	int64_t x708 = -141654332LL;
	uint64_t t172 = 366768LLU;

    t172 = (x705+((x706!=x707)&x708));

    if (t172 != 3469164330123322LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MIN;
	volatile int8_t x711 = INT8_MAX;
	int32_t x712 = -1;

    t173 = (x709+((x710!=x711)&x712));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x713 = INT16_MIN;
	volatile int64_t x714 = 277336322LL;
	uint64_t x715 = 170550475829991LLU;
	static uint8_t x716 = 37U;
	volatile int32_t t174 = 63;

    t174 = (x713+((x714!=x715)&x716));

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = -21164093742842LL;
	int64_t x718 = -83LL;
	int8_t x719 = INT8_MIN;
	int64_t x720 = 1LL;

    t175 = (x717+((x718!=x719)&x720));

    if (t175 != -21164093742841LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x721 = INT64_MAX;
	uint64_t x722 = 11159313200863LLU;
	uint16_t x723 = 12965U;
	uint8_t x724 = 22U;
	volatile int64_t t176 = INT64_MAX;

    t176 = (x721+((x722!=x723)&x724));

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x725 = INT64_MIN;
	int64_t x726 = 128118819821155826LL;
	int64_t x727 = 2463058LL;
	volatile int64_t t177 = 530279LL;

    t177 = (x725+((x726!=x727)&x728));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x729 = 19U;
	volatile int8_t x730 = 0;
	int8_t x731 = -1;
	volatile int32_t t178 = -2;

    t178 = (x729+((x730!=x731)&x732));

    if (t178 != 20) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x735 = INT32_MIN;
	int64_t x736 = INT64_MIN;
	volatile int64_t t179 = 20595432871348LL;

    t179 = (x733+((x734!=x735)&x736));

    if (t179 != 4294967295LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x737 = -6181;
	int64_t x738 = -1LL;
	int16_t x739 = INT16_MIN;
	int32_t t180 = -337714985;

    t180 = (x737+((x738!=x739)&x740));

    if (t180 != -6181) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x742 = -1LL;
	volatile int16_t x744 = -1;
	int32_t t181 = -4348885;

    t181 = (x741+((x742!=x743)&x744));

    if (t181 != 508) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x745 = INT8_MIN;
	int32_t x746 = 30802251;

    t182 = (x745+((x746!=x747)&x748));

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x749 = 58U;
	static uint32_t x750 = 404953U;
	int8_t x751 = INT8_MIN;
	uint64_t x752 = 6834989255LLU;
	volatile uint64_t t183 = 376383LLU;

    t183 = (x749+((x750!=x751)&x752));

    if (t183 != 59LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x753 = INT8_MIN;
	static int64_t x755 = INT64_MIN;
	uint32_t x756 = 18101U;

    t184 = (x753+((x754!=x755)&x756));

    if (t184 != 4294967169U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x757 = 339478653U;
	volatile uint16_t x758 = UINT16_MAX;
	int64_t x759 = INT64_MAX;
	int64_t t185 = -18119LL;

    t185 = (x757+((x758!=x759)&x760));

    if (t185 != 339478654LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x761 = 13U;
	int32_t x763 = INT32_MAX;
	int8_t x764 = -1;
	int32_t t186 = 4;

    t186 = (x761+((x762!=x763)&x764));

    if (t186 != 14) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = 91567;
	int64_t x766 = -1LL;
	static int64_t x767 = -555313806LL;
	volatile int64_t t187 = 798LL;

    t187 = (x765+((x766!=x767)&x768));

    if (t187 != 91567LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x769 = -1LL;
	uint32_t x771 = UINT32_MAX;
	int32_t x772 = 2063;
	int64_t t188 = -64037883LL;

    t188 = (x769+((x770!=x771)&x772));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x776 = -67820547158888LL;
	int64_t t189 = 52LL;

    t189 = (x773+((x774!=x775)&x776));

    if (t189 != -2147483648LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x777 = 492LLU;
	int16_t x779 = -1;
	int64_t x780 = 273192985LL;
	volatile uint64_t t190 = 475526501202LLU;

    t190 = (x777+((x778!=x779)&x780));

    if (t190 != 492LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x781 = INT32_MAX;
	int32_t x782 = INT32_MIN;
	static int32_t x783 = INT32_MIN;
	int16_t x784 = INT16_MAX;

    t191 = (x781+((x782!=x783)&x784));

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	static uint32_t x788 = UINT32_MAX;
	uint32_t t192 = 388323874U;

    t192 = (x785+((x786!=x787)&x788));

    if (t192 != 4294934529U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	uint16_t x790 = UINT16_MAX;
	int32_t x791 = INT32_MAX;
	volatile int64_t t193 = 4221582LL;

    t193 = (x789+((x790!=x791)&x792));

    if (t193 != 256LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x794 = -1;
	int32_t x795 = -101225;
	volatile int8_t x796 = INT8_MAX;
	int64_t t194 = 847190LL;

    t194 = (x793+((x794!=x795)&x796));

    if (t194 != -276667322LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x798 = 0U;
	uint32_t x799 = 56U;
	uint64_t x800 = 445079241202471LLU;
	static volatile uint64_t t195 = 68418992664LLU;

    t195 = (x797+((x798!=x799)&x800));

    if (t195 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x801 = 5773902U;
	uint64_t x802 = UINT64_MAX;
	static int16_t x803 = -1;
	int32_t x804 = INT32_MIN;
	uint32_t t196 = 7U;

    t196 = (x801+((x802!=x803)&x804));

    if (t196 != 5773902U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x806 = INT8_MIN;
	int16_t x807 = -14;
	uint32_t x808 = 212U;
	volatile uint32_t t197 = 36U;

    t197 = (x805+((x806!=x807)&x808));

    if (t197 != 127U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x813 = 19330626U;
	int16_t x814 = -7993;
	int64_t x815 = -13744LL;
	int16_t x816 = -1;
	uint32_t t198 = 8992U;

    t198 = (x813+((x814!=x815)&x816));

    if (t198 != 19330627U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = INT8_MAX;
	volatile int32_t x818 = 127209699;
	int8_t x819 = INT8_MIN;
	int32_t t199 = 3787538;

    t199 = (x817+((x818!=x819)&x820));

    if (t199 != 128) { NG(); } else { ; }
	
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

