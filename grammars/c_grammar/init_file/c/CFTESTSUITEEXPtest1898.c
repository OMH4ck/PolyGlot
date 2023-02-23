
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

static int8_t x4 = -1;
int64_t x17 = INT64_MIN;
int16_t x22 = -32;
volatile int16_t x24 = -1;
static volatile uint32_t x28 = UINT32_MAX;
volatile int32_t t6 = -67007302;
static int8_t x30 = INT8_MAX;
uint32_t x34 = 710U;
uint8_t x35 = 4U;
static volatile int32_t t9 = 183549;
static int32_t t10 = 0;
int16_t x46 = INT16_MAX;
uint8_t x48 = 15U;
static int16_t x49 = INT16_MIN;
static uint8_t x54 = 45U;
uint32_t x55 = 195427U;
int32_t x63 = -1;
static uint32_t x64 = 1259471U;
volatile int32_t t15 = -856501;
int8_t x66 = INT8_MIN;
volatile int64_t x70 = INT64_MIN;
int16_t x73 = -1;
uint32_t x74 = UINT32_MAX;
volatile int8_t x77 = 3;
uint8_t x83 = 6U;
volatile int32_t t20 = -83445521;
static int64_t x88 = 49800982LL;
int8_t x103 = -1;
int16_t x106 = INT16_MIN;
int64_t x119 = INT64_MAX;
int32_t x120 = INT32_MIN;
int32_t t29 = -1523;
int32_t t31 = 20;
int32_t x131 = INT32_MIN;
static volatile int8_t x132 = INT8_MIN;
volatile int8_t x137 = INT8_MAX;
static int32_t x143 = INT32_MIN;
uint64_t x145 = UINT64_MAX;
static int64_t x155 = -701285059498LL;
int64_t x161 = INT64_MIN;
int32_t t40 = 10979;
volatile int32_t t42 = -66901268;
volatile uint32_t x181 = UINT32_MAX;
volatile uint16_t x186 = 243U;
int64_t x187 = INT64_MIN;
static uint8_t x207 = UINT8_MAX;
int32_t t51 = 54;
volatile int16_t x209 = INT16_MIN;
volatile int32_t x210 = INT32_MIN;
static uint64_t x211 = 2066268001LLU;
static volatile uint64_t x215 = 109969788594LLU;
uint64_t x221 = UINT64_MAX;
static uint64_t x225 = UINT64_MAX;
int32_t x228 = -50497941;
volatile uint32_t x231 = 13200505U;
int8_t x232 = -1;
uint8_t x239 = 5U;
static int8_t x240 = -1;
volatile int16_t x242 = INT16_MIN;
int16_t x244 = INT16_MIN;
int32_t t60 = 318904829;
uint8_t x250 = 0U;
static uint16_t x253 = 16666U;
int32_t t63 = -895595180;
uint64_t x260 = 5748676371467131LLU;
volatile int32_t t66 = 448125;
int16_t x269 = -3;
int8_t x272 = INT8_MIN;
uint8_t x278 = UINT8_MAX;
int8_t x280 = INT8_MIN;
static volatile int32_t t69 = -111672092;
uint32_t x291 = UINT32_MAX;
uint32_t x296 = UINT32_MAX;
int32_t t74 = -64745;
int8_t x304 = -1;
int32_t t76 = -64207094;
static int16_t x309 = 0;
int64_t x311 = INT64_MAX;
uint32_t x313 = UINT32_MAX;
volatile uint8_t x323 = 1U;
int32_t x329 = -368076051;
int64_t x332 = -1LL;
int64_t x334 = INT64_MAX;
static volatile int32_t x341 = INT32_MIN;
int16_t x343 = INT16_MIN;
int64_t x344 = -1LL;
static volatile uint32_t x351 = 675214U;
int32_t t89 = 30;
int64_t x365 = -1LL;
int64_t x366 = 361455584LL;
volatile int8_t x368 = INT8_MIN;
static uint32_t x369 = 4U;
uint16_t x370 = UINT16_MAX;
int32_t t92 = 1796;
volatile int64_t x377 = INT64_MAX;
uint8_t x378 = 3U;
int8_t x380 = 6;
int64_t x391 = -1LL;
int8_t x396 = -8;
int32_t t98 = 1243;
static int32_t x397 = INT32_MIN;
uint16_t x402 = UINT16_MAX;
int32_t t100 = -3381;
volatile uint64_t x411 = UINT64_MAX;
int64_t x426 = -39604096LL;
int8_t x427 = INT8_MAX;
uint64_t x428 = UINT64_MAX;
static volatile int32_t t106 = 119;
int32_t x432 = INT32_MAX;
uint16_t x434 = 6224U;
int32_t x435 = -1;
uint8_t x440 = UINT8_MAX;
static int64_t x441 = INT64_MAX;
static int16_t x442 = INT16_MIN;
int32_t t110 = -14394;
int8_t x452 = -1;
uint64_t x456 = UINT64_MAX;
volatile int32_t t113 = 199137368;
uint32_t x459 = 62U;
int32_t x463 = INT32_MIN;
int32_t x473 = INT32_MIN;
static int8_t x474 = -5;
int64_t x476 = INT64_MIN;
volatile uint8_t x478 = 65U;
int8_t x513 = INT8_MIN;
volatile int8_t x522 = -1;
int32_t x524 = -1;
volatile int32_t t130 = 80685394;
int16_t x526 = -1;
static int64_t x528 = -1574LL;
int32_t t131 = -401793;
int64_t x533 = INT64_MIN;
uint16_t x534 = UINT16_MAX;
int8_t x538 = INT8_MAX;
int32_t x539 = 535680;
int8_t x540 = -15;
static uint64_t x552 = 10223302LLU;
int32_t t137 = -86145;
int32_t t138 = 5;
int8_t x561 = 1;
uint64_t x565 = UINT64_MAX;
int8_t x566 = INT8_MIN;
static int16_t x573 = INT16_MIN;
volatile int32_t x576 = -1;
int64_t x578 = INT64_MIN;
static int64_t x579 = -253LL;
int32_t t144 = -8024682;
static volatile int8_t x582 = 8;
int8_t x584 = INT8_MIN;
int8_t x594 = INT8_MIN;
int8_t x596 = -5;
static uint8_t x604 = 14U;
int32_t x607 = -58;
int32_t t152 = 13498;
static uint32_t x616 = UINT32_MAX;
int8_t x618 = INT8_MIN;
volatile uint64_t x619 = 214LLU;
static uint16_t x620 = 60U;
static int8_t x624 = INT8_MIN;
int8_t x626 = INT8_MIN;
int32_t x631 = 2;
volatile int32_t t157 = 4;
volatile int32_t x640 = INT32_MIN;
int64_t x646 = INT64_MAX;
int64_t x652 = INT64_MIN;
int32_t x654 = INT32_MIN;
volatile int32_t x656 = INT32_MIN;
static volatile uint8_t x661 = UINT8_MAX;
static uint64_t x665 = 96LLU;
static int8_t x667 = 35;
uint32_t x671 = 0U;
static int16_t x678 = INT16_MIN;
int8_t x682 = INT8_MIN;
int32_t x688 = -3;
volatile int32_t t171 = 2;
uint64_t x693 = UINT64_MAX;
int16_t x696 = INT16_MIN;
volatile uint64_t x698 = UINT64_MAX;
uint8_t x705 = 97U;
volatile int32_t t177 = 3561;
volatile int32_t t178 = -123;
int16_t x717 = INT16_MAX;
int64_t x722 = INT64_MIN;
int8_t x728 = INT8_MIN;
volatile uint64_t x729 = 2773109LLU;
int64_t x735 = INT64_MIN;
int64_t x736 = -1LL;
int8_t x737 = -1;
int32_t x740 = INT32_MAX;
int32_t t187 = 761;
int32_t x756 = INT32_MAX;
volatile uint8_t x758 = 6U;
uint64_t x761 = UINT64_MAX;
int16_t x762 = INT16_MAX;
static volatile int32_t t190 = 47026488;
volatile int8_t x775 = -1;
int32_t x778 = INT32_MIN;
volatile int32_t t194 = -624301;
static uint64_t x799 = 244914LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	volatile uint64_t x3 = 22994721LLU;
	int32_t t0 = -2;

    t0 = (x1==((x2<=x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1022;
	volatile uint16_t x8 = 10U;
	int32_t t1 = -7417;

    t1 = (x5==((x6<=x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = UINT32_MAX;
	volatile int16_t x12 = -6478;
	int32_t t2 = -75;

    t2 = (x9==((x10<=x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = UINT32_MAX;
	static int8_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = 2066043459408LL;
	static int32_t t3 = 688623;

    t3 = (x13==((x14<=x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MAX;
	volatile int64_t x19 = -1LL;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -6348;

    t4 = (x17==((x18<=x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 253703LLU;
	static volatile int16_t x23 = INT16_MAX;
	int32_t t5 = 2445;

    t5 = (x21==((x22<=x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = 5;

    t6 = (x25==((x26<=x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	static int32_t t7 = 38180;

    t7 = (x29==((x30<=x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -49;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 71045698;

    t8 = (x33==((x34<=x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 250U;
	uint16_t x38 = 25U;
	int64_t x39 = INT64_MIN;
	static uint32_t x40 = 12U;

    t9 = (x37==((x38<=x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	uint32_t x42 = 11U;
	static int64_t x43 = -12811756749386LL;
	int64_t x44 = 50939503LL;

    t10 = (x41==((x42<=x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	static uint16_t x47 = 4U;
	int32_t t11 = -169598657;

    t11 = (x45==((x46<=x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 7416557704LLU;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 3U;
	volatile int32_t t12 = 52062;

    t12 = (x49==((x50<=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 1509167;

    t13 = (x53==((x54<=x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	volatile int32_t x58 = -1;
	int8_t x59 = 0;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -1;

    t14 = (x57==((x58<=x59)<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static int8_t x62 = 7;

    t15 = (x61==((x62<=x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -1;
	int16_t x67 = -1;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -1;

    t16 = (x65==((x66<=x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 11688906;

    t17 = (x69==((x70<=x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x75 = INT16_MIN;
	static volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = -7314158;

    t18 = (x73==((x74<=x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x78 = 2;
	int32_t x79 = INT32_MIN;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -6613;

    t19 = (x77==((x78<=x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = 311;

    t20 = (x81==((x82<=x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = INT8_MIN;
	int8_t x86 = -59;
	static uint8_t x87 = UINT8_MAX;
	volatile int32_t t21 = -57262605;

    t21 = (x85==((x86<=x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	static int32_t x90 = -1;
	static int8_t x91 = 1;
	uint32_t x92 = 65016U;
	volatile int32_t t22 = 137889;

    t22 = (x89==((x90<=x91)<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 959528343526LLU;
	static int64_t x94 = INT64_MIN;
	uint64_t x95 = 101518513320LLU;
	int16_t x96 = 9;
	int32_t t23 = 634556493;

    t23 = (x93==((x94<=x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MAX;
	int64_t x100 = INT64_MAX;
	int32_t t24 = 318221718;

    t24 = (x97==((x98<=x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = -1;
	int64_t x104 = -1694382100940415270LL;
	static volatile int32_t t25 = -56312288;

    t25 = (x101==((x102<=x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	int32_t x107 = 1283;
	int64_t x108 = INT64_MIN;
	static volatile int32_t t26 = -3;

    t26 = (x105==((x106<=x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = 1;
	int16_t x110 = 29;
	int16_t x111 = -1;
	static int32_t x112 = INT32_MAX;
	static volatile int32_t t27 = 215400;

    t27 = (x109==((x110<=x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MAX;
	volatile int8_t x114 = -1;
	uint16_t x115 = UINT16_MAX;
	int64_t x116 = 194553319607457607LL;
	static volatile int32_t t28 = -5263343;

    t28 = (x113==((x114<=x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	volatile int32_t x118 = INT32_MIN;

    t29 = (x117==((x118<=x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile uint16_t x122 = UINT16_MAX;
	volatile int32_t x123 = -15;
	int64_t x124 = -441779LL;
	volatile int32_t t30 = -63;

    t30 = (x121==((x122<=x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 6920894LL;
	static int64_t x126 = -27LL;
	static volatile uint64_t x127 = 51576765LLU;
	static int16_t x128 = 14113;

    t31 = (x125==((x126<=x127)<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x130 = -1;
	volatile int32_t t32 = -429;

    t32 = (x129==((x130<=x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	uint8_t x134 = 5U;
	int32_t x135 = -563264;
	int64_t x136 = 13973LL;
	volatile int32_t t33 = 129962;

    t33 = (x133==((x134<=x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x138 = 2632549260643144107LLU;
	volatile int32_t x139 = INT32_MAX;
	volatile int16_t x140 = INT16_MAX;
	int32_t t34 = 234677777;

    t34 = (x137==((x138<=x139)<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = 9U;
	volatile uint16_t x142 = 23U;
	static int8_t x144 = -1;
	volatile int32_t t35 = -104;

    t35 = (x141==((x142<=x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	static volatile uint8_t x147 = 46U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -329;

    t36 = (x145==((x146<=x147)<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 2U;
	static uint64_t x150 = 6675707LLU;
	volatile int32_t x151 = -174523;
	volatile int64_t x152 = -1462457LL;
	volatile int32_t t37 = -10038674;

    t37 = (x149==((x150<=x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	int16_t x154 = INT16_MIN;
	volatile int64_t x156 = -1LL;
	volatile int32_t t38 = -50;

    t38 = (x153==((x154<=x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = 2LLU;
	static volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = INT8_MAX;
	volatile int16_t x160 = INT16_MIN;
	int32_t t39 = -111124573;

    t39 = (x157==((x158<=x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MAX;
	int64_t x163 = -2873995326LL;
	volatile int8_t x164 = 1;

    t40 = (x161==((x162<=x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = UINT16_MAX;
	static int32_t x166 = -1;
	int8_t x167 = -1;
	static int16_t x168 = -1;
	volatile int32_t t41 = 13;

    t41 = (x165==((x166<=x167)<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = 1;
	volatile int8_t x171 = INT8_MIN;
	int16_t x172 = -270;

    t42 = (x169==((x170<=x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -2143588;

    t43 = (x173==((x174<=x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x177 = INT8_MAX;
	int64_t x178 = INT64_MAX;
	int32_t x179 = -1;
	int16_t x180 = -1;
	volatile int32_t t44 = -3;

    t44 = (x177==((x178<=x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = INT16_MAX;
	uint64_t x183 = UINT64_MAX;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -350083290;

    t45 = (x181==((x182<=x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 41849039U;
	int8_t x188 = -1;
	volatile int32_t t46 = 0;

    t46 = (x185==((x186<=x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = -51143420654692656LL;
	int8_t x191 = -1;
	static volatile uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -2099274;

    t47 = (x189==((x190<=x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = UINT64_MAX;
	int32_t x194 = -3833;
	static int16_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = -26;

    t48 = (x193==((x194<=x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 20U;
	uint32_t x198 = 2019603645U;
	int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	volatile int32_t t49 = 0;

    t49 = (x197==((x198<=x199)<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	static uint8_t x203 = UINT8_MAX;
	int32_t x204 = -1;
	volatile int32_t t50 = 915;

    t50 = (x201==((x202<=x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 77496988U;
	uint8_t x206 = 1U;
	int32_t x208 = -31;

    t51 = (x205==((x206<=x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x212 = -59464526;
	volatile int32_t t52 = -100;

    t52 = (x209==((x210<=x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 122U;
	uint64_t x214 = 2LLU;
	int16_t x216 = 48;
	volatile int32_t t53 = -28669;

    t53 = (x213==((x214<=x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 0U;
	volatile int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = UINT64_MAX;
	int32_t t54 = -1;

    t54 = (x217==((x218<=x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = 2343;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 774678145U;
	static int32_t t55 = -242;

    t55 = (x221==((x222<=x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 5285346LLU;
	int32_t t56 = -18;

    t56 = (x225==((x226<=x227)<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	int16_t x230 = -1;
	volatile int32_t t57 = 46;

    t57 = (x229==((x230<=x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MIN;
	static volatile int32_t x235 = 0;
	volatile uint32_t x236 = 206679041U;
	volatile int32_t t58 = 1;

    t58 = (x233==((x234<=x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 3;
	int64_t x238 = -1116684934306913470LL;
	volatile int32_t t59 = -81;

    t59 = (x237==((x238<=x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -225;
	volatile uint8_t x243 = 0U;

    t60 = (x241==((x242<=x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 0;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = UINT32_MAX;
	static int64_t x248 = INT64_MIN;
	static volatile int32_t t61 = 849114250;

    t61 = (x245==((x246<=x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = -1;
	volatile int64_t x251 = -8940672168409664LL;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -1;

    t62 = (x249==((x250<=x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MAX;
	int16_t x255 = -1;
	uint8_t x256 = 3U;

    t63 = (x253==((x254<=x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x257 = 1372228355U;
	static int64_t x258 = -1LL;
	uint32_t x259 = UINT32_MAX;
	volatile int32_t t64 = -59728;

    t64 = (x257==((x258<=x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint8_t x262 = 116U;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 313;

    t65 = (x261==((x262<=x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 32501817U;
	int8_t x266 = 3;
	uint64_t x267 = 6172684998006787591LLU;
	int16_t x268 = -1;

    t66 = (x265==((x266<=x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x270 = UINT64_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	int32_t t67 = -1;

    t67 = (x269==((x270<=x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -12;
	uint16_t x274 = 0U;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -3457;

    t68 = (x273==((x274<=x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	volatile int32_t x279 = 460;

    t69 = (x277==((x278<=x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint16_t x282 = 3U;
	uint8_t x283 = 3U;
	static int32_t x284 = INT32_MAX;
	int32_t t70 = -251359115;

    t70 = (x281==((x282<=x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1746U;
	int8_t x286 = INT8_MIN;
	static uint16_t x287 = 226U;
	static int32_t x288 = 218;
	int32_t t71 = -9;

    t71 = (x285==((x286<=x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	static uint8_t x290 = UINT8_MAX;
	int8_t x292 = -1;
	volatile int32_t t72 = -14990;

    t72 = (x289==((x290<=x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = 0;
	uint64_t x294 = 9LLU;
	int64_t x295 = 14449076869LL;
	static volatile int32_t t73 = -283732;

    t73 = (x293==((x294<=x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -29;
	static int64_t x298 = -1LL;
	uint8_t x299 = 13U;
	int8_t x300 = -1;

    t74 = (x297==((x298<=x299)<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 98U;
	int32_t x303 = -1608040;
	volatile int32_t t75 = -14188;

    t75 = (x301==((x302<=x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	volatile int16_t x306 = -18;
	static volatile int32_t x307 = -7;
	static uint8_t x308 = 46U;

    t76 = (x305==((x306<=x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = 48615408690256451LLU;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 6836;

    t77 = (x309==((x310<=x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x314 = UINT64_MAX;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = -1LL;
	int32_t t78 = 40375;

    t78 = (x313==((x314<=x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MAX;
	int8_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 16772714U;
	int32_t t79 = 348454807;

    t79 = (x317==((x318<=x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = -21392544644797815LL;
	int32_t x322 = INT32_MIN;
	volatile int32_t x324 = -1;
	volatile int32_t t80 = 130175838;

    t80 = (x321==((x322<=x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -2967;
	static int8_t x326 = 1;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	static int32_t t81 = 116;

    t81 = (x325==((x326<=x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = 2134272184LLU;
	int8_t x331 = -1;
	volatile int32_t t82 = -62;

    t82 = (x329==((x330<=x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	uint64_t x335 = 5415LLU;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 98383;

    t83 = (x333==((x334<=x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	int16_t x339 = -1;
	int8_t x340 = -1;
	volatile int32_t t84 = -57306976;

    t84 = (x337==((x338<=x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x342 = INT8_MAX;
	static int32_t t85 = 55928;

    t85 = (x341==((x342<=x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = -4;
	static int8_t x347 = 8;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t86 = 566;

    t86 = (x345==((x346<=x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 59U;
	int32_t x350 = INT32_MIN;
	int32_t x352 = 429;
	volatile int32_t t87 = 2197;

    t87 = (x349==((x350<=x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = -57;
	static int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -377847808;

    t88 = (x353==((x354<=x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 1052U;
	volatile uint16_t x358 = 14094U;
	int64_t x359 = -1LL;
	uint8_t x360 = 50U;

    t89 = (x357==((x358<=x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	int16_t x362 = -1441;
	int8_t x363 = -31;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t90 = 350573888;

    t90 = (x361==((x362<=x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x367 = INT32_MIN;
	volatile int32_t t91 = -1632630;

    t91 = (x365==((x366<=x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x371 = INT64_MIN;
	volatile uint32_t x372 = UINT32_MAX;

    t92 = (x369==((x370<=x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x373 = 13U;
	int64_t x374 = -1LL;
	int16_t x375 = -1;
	int32_t x376 = -1;
	static int32_t t93 = 1;

    t93 = (x373==((x374<=x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x379 = 26308U;
	volatile int32_t t94 = 233;

    t94 = (x377==((x378<=x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MAX;
	int32_t x383 = -5742389;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t95 = 3;

    t95 = (x381==((x382<=x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	uint8_t x386 = 6U;
	static int16_t x387 = INT16_MIN;
	volatile int32_t x388 = -1;
	int32_t t96 = 653244;

    t96 = (x385==((x386<=x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 1;
	static int16_t x390 = INT16_MIN;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 0;

    t97 = (x389==((x390<=x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 1U;
	int16_t x394 = -2919;
	uint8_t x395 = 31U;

    t98 = (x393==((x394<=x395)<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 29U;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -208663271;

    t99 = (x397==((x398<=x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	int8_t x404 = 2;

    t100 = (x401==((x402<=x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = 7799LLU;
	int32_t x407 = -17;
	int32_t x408 = -3;
	volatile int32_t t101 = 13;

    t101 = (x405==((x406<=x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = INT64_MAX;
	uint32_t x410 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t102 = -555;

    t102 = (x409==((x410<=x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x413 = 7;
	volatile int16_t x414 = -1;
	int32_t x415 = -1;
	uint8_t x416 = 5U;
	int32_t t103 = 55;

    t103 = (x413==((x414<=x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = -25;
	volatile int16_t x418 = -1;
	int32_t x419 = -3;
	int64_t x420 = 16081LL;
	volatile int32_t t104 = 134109;

    t104 = (x417==((x418<=x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t105 = -33678;

    t105 = (x421==((x422<=x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 43U;

    t106 = (x425==((x426<=x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MIN;
	int16_t x430 = -1;
	volatile int8_t x431 = 0;
	int32_t t107 = 1882;

    t107 = (x429==((x430<=x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	uint32_t x436 = 112893248U;
	volatile int32_t t108 = 1;

    t108 = (x433==((x434<=x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	volatile uint32_t x438 = UINT32_MAX;
	int32_t x439 = -1;
	static int32_t t109 = -63;

    t109 = (x437==((x438<=x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x443 = 137094429;
	uint64_t x444 = UINT64_MAX;

    t110 = (x441==((x442<=x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = -3;
	int32_t x447 = INT32_MIN;
	static volatile uint32_t x448 = UINT32_MAX;
	volatile int32_t t111 = 72;

    t111 = (x445==((x446<=x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x449 = 25U;
	int64_t x450 = INT64_MAX;
	int32_t x451 = -568;
	static int32_t t112 = -241842;

    t112 = (x449==((x450<=x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 15198;
	uint64_t x454 = 67409419111LLU;
	uint16_t x455 = 16778U;

    t113 = (x453==((x454<=x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 0U;
	static volatile uint16_t x458 = UINT16_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -296;

    t114 = (x457==((x458<=x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	volatile int64_t x462 = INT64_MIN;
	uint64_t x464 = 11252459460760197LLU;
	int32_t t115 = -995345882;

    t115 = (x461==((x462<=x463)<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = 268739241055077LLU;
	uint8_t x466 = UINT8_MAX;
	volatile int64_t x467 = 720951388727524347LL;
	uint64_t x468 = UINT64_MAX;
	int32_t t116 = -3399065;

    t116 = (x465==((x466<=x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	static int16_t x470 = INT16_MIN;
	int16_t x471 = INT16_MAX;
	int16_t x472 = -199;
	volatile int32_t t117 = 16380;

    t117 = (x469==((x470<=x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x475 = INT8_MIN;
	volatile int32_t t118 = -945;

    t118 = (x473==((x474<=x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 22257451;
	int64_t x479 = -367085657305LL;
	uint32_t x480 = 7U;
	int32_t t119 = -1;

    t119 = (x477==((x478<=x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = 25;
	volatile int16_t x482 = -1;
	int16_t x483 = 122;
	int16_t x484 = 0;
	volatile int32_t t120 = 770;

    t120 = (x481==((x482<=x483)<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 1310LL;
	uint64_t x486 = UINT64_MAX;
	int16_t x487 = INT16_MIN;
	int8_t x488 = INT8_MAX;
	volatile int32_t t121 = 21913;

    t121 = (x485==((x486<=x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MIN;
	static uint32_t x490 = 20076425U;
	uint8_t x491 = 114U;
	int64_t x492 = INT64_MAX;
	int32_t t122 = 437072110;

    t122 = (x489==((x490<=x491)<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile uint8_t x494 = 10U;
	int64_t x495 = -1LL;
	volatile uint8_t x496 = UINT8_MAX;
	volatile int32_t t123 = 45;

    t123 = (x493==((x494<=x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	volatile int32_t x498 = INT32_MAX;
	int8_t x499 = INT8_MAX;
	static int16_t x500 = -1;
	volatile int32_t t124 = 1464369;

    t124 = (x497==((x498<=x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 17U;
	int8_t x502 = INT8_MIN;
	int32_t x503 = -522673988;
	static int16_t x504 = INT16_MAX;
	static int32_t t125 = 19969219;

    t125 = (x501==((x502<=x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 2U;
	uint16_t x506 = 153U;
	static int32_t x507 = -1;
	int16_t x508 = 78;
	volatile int32_t t126 = 0;

    t126 = (x505==((x506<=x507)<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 35;
	int64_t x510 = -13151LL;
	uint32_t x511 = 1U;
	static int64_t x512 = INT64_MAX;
	static int32_t t127 = -847016;

    t127 = (x509==((x510<=x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	int8_t x515 = 0;
	static int64_t x516 = 38077LL;
	int32_t t128 = 0;

    t128 = (x513==((x514<=x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = 8;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = INT16_MIN;
	static uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = 25186653;

    t129 = (x517==((x518<=x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = INT64_MAX;
	int64_t x523 = INT64_MIN;

    t130 = (x521==((x522<=x523)<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	uint8_t x527 = 0U;

    t131 = (x525==((x526<=x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -144;
	volatile int8_t x530 = 0;
	static int16_t x531 = -1;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t132 = -15352;

    t132 = (x529==((x530<=x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x535 = 477U;
	int32_t x536 = INT32_MAX;
	volatile int32_t t133 = 3859803;

    t133 = (x533==((x534<=x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = 17517;
	static volatile int32_t t134 = -98533958;

    t134 = (x537==((x538<=x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 14613;
	static volatile int64_t x542 = INT64_MIN;
	static int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 14;

    t135 = (x541==((x542<=x543)<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -18698080LL;
	int8_t x546 = INT8_MIN;
	uint8_t x547 = 18U;
	uint16_t x548 = 20892U;
	volatile int32_t t136 = 1;

    t136 = (x545==((x546<=x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 1U;
	int16_t x550 = -418;
	int64_t x551 = INT64_MAX;

    t137 = (x549==((x550<=x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int8_t x554 = -3;
	uint64_t x555 = 1695567568020827LLU;
	volatile uint16_t x556 = 11598U;

    t138 = (x553==((x554<=x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = -533535579713117538LL;
	uint16_t x558 = 22205U;
	uint32_t x559 = 15U;
	volatile int32_t x560 = -2295;
	static int32_t t139 = -4;

    t139 = (x557==((x558<=x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = 1799917432U;
	int16_t x563 = 6;
	int64_t x564 = 1743634343378844LL;
	static int32_t t140 = 16;

    t140 = (x561==((x562<=x563)<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x567 = INT16_MIN;
	uint8_t x568 = 12U;
	int32_t t141 = 43916481;

    t141 = (x565==((x566<=x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 572509741LLU;
	int64_t x570 = INT64_MIN;
	static volatile int8_t x571 = INT8_MAX;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t142 = -657835190;

    t142 = (x569==((x570<=x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = 8693428LLU;
	volatile uint64_t x575 = 98044022843LLU;
	volatile int32_t t143 = -402128940;

    t143 = (x573==((x574<=x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 145382U;
	volatile int64_t x580 = -1LL;

    t144 = (x577==((x578<=x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x583 = INT8_MAX;
	volatile int32_t t145 = -114;

    t145 = (x581==((x582<=x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 1U;
	uint16_t x586 = 9901U;
	volatile uint32_t x587 = UINT32_MAX;
	int16_t x588 = 1;
	int32_t t146 = 16;

    t146 = (x585==((x586<=x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	static int16_t x590 = 11;
	volatile int32_t x591 = INT32_MIN;
	volatile int8_t x592 = -1;
	volatile int32_t t147 = 5078;

    t147 = (x589==((x590<=x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x593 = UINT8_MAX;
	static volatile int8_t x595 = INT8_MIN;
	volatile int32_t t148 = 66484284;

    t148 = (x593==((x594<=x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 1;
	volatile int64_t x598 = -255508400LL;
	uint64_t x599 = 8089117459826LLU;
	int8_t x600 = INT8_MIN;
	static volatile int32_t t149 = -5697957;

    t149 = (x597==((x598<=x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 0U;
	uint32_t x602 = 151U;
	uint32_t x603 = 2U;
	int32_t t150 = 4841634;

    t150 = (x601==((x602<=x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 1;
	int8_t x606 = 11;
	static volatile uint8_t x608 = UINT8_MAX;
	int32_t t151 = -7143;

    t151 = (x605==((x606<=x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = -732208236953LL;
	int64_t x610 = -1LL;
	uint64_t x611 = 983951845069962LLU;
	int32_t x612 = 257652838;

    t152 = (x609==((x610<=x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 333;
	uint16_t x614 = UINT16_MAX;
	int8_t x615 = 0;
	volatile int32_t t153 = 22;

    t153 = (x613==((x614<=x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 0U;
	static volatile int32_t t154 = -108963;

    t154 = (x617==((x618<=x619)<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	uint16_t x622 = 14U;
	volatile uint8_t x623 = 2U;
	volatile int32_t t155 = 993604512;

    t155 = (x621==((x622<=x623)<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int32_t x627 = INT32_MIN;
	int32_t x628 = INT32_MAX;
	int32_t t156 = -9596850;

    t156 = (x625==((x626<=x627)<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x629 = UINT8_MAX;
	volatile int8_t x630 = -1;
	static int64_t x632 = INT64_MAX;

    t157 = (x629==((x630<=x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	volatile int64_t x634 = -38LL;
	int64_t x635 = -1LL;
	int32_t x636 = -297476469;
	volatile int32_t t158 = -23887;

    t158 = (x633==((x634<=x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	static int8_t x638 = INT8_MAX;
	static int64_t x639 = INT64_MIN;
	int32_t t159 = -156481003;

    t159 = (x637==((x638<=x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = -1;
	uint64_t x642 = UINT64_MAX;
	volatile int32_t x643 = -1293709;
	static int8_t x644 = 0;
	volatile int32_t t160 = 761;

    t160 = (x641==((x642<=x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = -1;
	uint32_t x647 = 9626U;
	int16_t x648 = INT16_MIN;
	volatile int32_t t161 = -1;

    t161 = (x645==((x646<=x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	uint64_t x650 = 34LLU;
	int16_t x651 = INT16_MIN;
	volatile int32_t t162 = -308;

    t162 = (x649==((x650<=x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x655 = 79577383LL;
	volatile int32_t t163 = 14898;

    t163 = (x653==((x654<=x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x657 = INT64_MIN;
	int64_t x658 = INT64_MAX;
	static int32_t x659 = -6;
	volatile uint64_t x660 = 35111231129897616LLU;
	volatile int32_t t164 = -54;

    t164 = (x657==((x658<=x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MIN;
	volatile uint64_t x663 = UINT64_MAX;
	static int64_t x664 = INT64_MIN;
	volatile int32_t t165 = 3;

    t165 = (x661==((x662<=x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x666 = INT16_MIN;
	static uint64_t x668 = 2774687345235273LLU;
	volatile int32_t t166 = -107566;

    t166 = (x665==((x666<=x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	static uint16_t x670 = UINT16_MAX;
	volatile uint8_t x672 = 7U;
	int32_t t167 = 921741;

    t167 = (x669==((x670<=x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x674 = 696;
	volatile int8_t x675 = INT8_MIN;
	volatile uint8_t x676 = 98U;
	int32_t t168 = -826;

    t168 = (x673==((x674<=x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	int8_t x679 = INT8_MIN;
	uint64_t x680 = 0LLU;
	int32_t t169 = 3324110;

    t169 = (x677==((x678<=x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -13718515;
	uint32_t x683 = 24U;
	int64_t x684 = -1937LL;
	int32_t t170 = 123983571;

    t170 = (x681==((x682<=x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x685 = 10759U;
	static uint64_t x686 = UINT64_MAX;
	uint16_t x687 = 5U;

    t171 = (x685==((x686<=x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 4915LLU;
	int8_t x690 = -1;
	uint64_t x691 = 11214777780LLU;
	int16_t x692 = INT16_MIN;
	volatile int32_t t172 = 52165029;

    t172 = (x689==((x690<=x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = UINT32_MAX;
	int32_t x695 = -136;
	int32_t t173 = -220765;

    t173 = (x693==((x694<=x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x697 = 30U;
	int16_t x699 = INT16_MAX;
	int8_t x700 = 13;
	int32_t t174 = 87;

    t174 = (x697==((x698<=x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MAX;
	uint32_t x702 = UINT32_MAX;
	uint64_t x703 = UINT64_MAX;
	static int32_t x704 = 1;
	int32_t t175 = 736;

    t175 = (x701==((x702<=x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = 63071;
	uint64_t x707 = 132965903LLU;
	static volatile int8_t x708 = -1;
	static int32_t t176 = -2;

    t176 = (x705==((x706<=x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = INT16_MIN;
	static int64_t x711 = INT64_MIN;
	int16_t x712 = -1;

    t177 = (x709==((x710<=x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = UINT8_MAX;
	volatile int32_t x714 = -4;
	uint16_t x715 = UINT16_MAX;
	volatile uint64_t x716 = 12LLU;

    t178 = (x713==((x714<=x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = -1;
	int8_t x719 = 36;
	static uint8_t x720 = UINT8_MAX;
	static volatile int32_t t179 = 52010043;

    t179 = (x717==((x718<=x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x721 = 422U;
	int16_t x723 = -1;
	uint64_t x724 = 2118005983LLU;
	static int32_t t180 = -155;

    t180 = (x721==((x722<=x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = INT16_MAX;
	static int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	volatile int32_t t181 = -3;

    t181 = (x725==((x726<=x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x730 = 1698692652065LLU;
	volatile int16_t x731 = 0;
	int32_t x732 = INT32_MIN;
	volatile int32_t t182 = -7;

    t182 = (x729==((x730<=x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	int32_t x734 = INT32_MAX;
	int32_t t183 = 144;

    t183 = (x733==((x734<=x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = 25971589048LL;
	int16_t x739 = -1;
	static int32_t t184 = -156319859;

    t184 = (x737==((x738<=x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 24U;
	int16_t x742 = INT16_MAX;
	int16_t x743 = -1678;
	static int64_t x744 = -1LL;
	static volatile int32_t t185 = -1752067;

    t185 = (x741==((x742<=x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	volatile int64_t x746 = -1LL;
	volatile int8_t x747 = INT8_MIN;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t186 = -6024;

    t186 = (x745==((x746<=x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	int32_t x750 = INT32_MIN;
	static volatile int64_t x751 = INT64_MIN;
	int32_t x752 = 12401902;

    t187 = (x749==((x750<=x751)<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	int8_t x754 = -1;
	int8_t x755 = INT8_MAX;
	volatile int32_t t188 = 1667;

    t188 = (x753==((x754<=x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	volatile int16_t x759 = -1;
	uint64_t x760 = 4LLU;
	static int32_t t189 = -35762181;

    t189 = (x757==((x758<=x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x763 = INT64_MIN;
	uint8_t x764 = 0U;

    t190 = (x761==((x762<=x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	uint8_t x766 = UINT8_MAX;
	uint64_t x767 = 1613302674568LLU;
	volatile int16_t x768 = -240;
	static volatile int32_t t191 = -7124;

    t191 = (x765==((x766<=x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -260071613;
	volatile int64_t x770 = -95157640901LL;
	int8_t x771 = 15;
	static int8_t x772 = INT8_MIN;
	volatile int32_t t192 = -17016883;

    t192 = (x769==((x770<=x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	uint16_t x774 = UINT16_MAX;
	int64_t x776 = INT64_MIN;
	int32_t t193 = 1905;

    t193 = (x773==((x774<=x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MAX;
	static volatile int64_t x779 = INT64_MIN;
	int16_t x780 = -1;

    t194 = (x777==((x778<=x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	int32_t x782 = INT32_MIN;
	uint64_t x783 = UINT64_MAX;
	volatile int32_t x784 = INT32_MIN;
	volatile int32_t t195 = -1;

    t195 = (x781==((x782<=x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	uint64_t x786 = 359LLU;
	uint8_t x787 = 4U;
	int8_t x788 = INT8_MIN;
	volatile int32_t t196 = -453;

    t196 = (x785==((x786<=x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = INT32_MIN;
	volatile uint8_t x790 = 6U;
	static int64_t x791 = -1LL;
	uint32_t x792 = UINT32_MAX;
	int32_t t197 = 907;

    t197 = (x789==((x790<=x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -6;
	int8_t x794 = INT8_MAX;
	static int8_t x795 = INT8_MIN;
	int16_t x796 = -74;
	int32_t t198 = 3;

    t198 = (x793==((x794<=x795)<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MAX;
	volatile int32_t x800 = INT32_MIN;
	int32_t t199 = 457;

    t199 = (x797==((x798<=x799)<=x800));

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

