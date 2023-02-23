
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

uint8_t x1 = 1U;
uint64_t x6 = UINT64_MAX;
int16_t x8 = 3;
static int64_t x12 = 606LL;
volatile int32_t t2 = 412929;
uint16_t x16 = 7646U;
int64_t x23 = INT64_MIN;
uint64_t x28 = UINT64_MAX;
int32_t x30 = INT32_MIN;
static volatile int32_t x41 = 55637759;
int16_t x48 = INT16_MAX;
int8_t x52 = INT8_MIN;
int8_t x61 = 3;
int32_t x65 = INT32_MIN;
uint64_t x66 = 426415164127034LLU;
volatile uint16_t x70 = 1U;
volatile int32_t t17 = -253553;
uint8_t x73 = 42U;
int32_t x80 = INT32_MIN;
static volatile int32_t t20 = -5;
int16_t x89 = -1;
volatile int32_t t23 = -8;
int64_t x97 = -71267038911399916LL;
static int16_t x108 = INT16_MIN;
static int64_t x111 = -2083549LL;
int16_t x116 = 726;
uint16_t x117 = 3U;
int16_t x120 = INT16_MAX;
static int8_t x122 = INT8_MAX;
int32_t x145 = INT32_MAX;
volatile uint16_t x149 = UINT16_MAX;
uint64_t x155 = 133137089LLU;
static int32_t t38 = INT32_MIN;
int64_t x158 = INT64_MAX;
uint32_t x161 = 537U;
volatile int16_t x164 = -63;
uint32_t x167 = 1812532176U;
int16_t x175 = INT16_MIN;
uint8_t x188 = UINT8_MAX;
static volatile int16_t x191 = 6;
uint16_t x192 = 216U;
static uint64_t x194 = 1415LLU;
volatile uint64_t x200 = UINT64_MAX;
volatile int32_t t50 = -1;
volatile uint32_t x205 = UINT32_MAX;
int32_t x207 = -1140;
volatile int8_t x208 = INT8_MAX;
uint32_t x211 = 10839U;
uint16_t x212 = UINT16_MAX;
volatile int64_t t55 = 73707599669417LL;
uint16_t x231 = UINT16_MAX;
volatile int16_t x233 = -55;
volatile uint32_t x235 = 868222290U;
static int64_t x239 = INT64_MIN;
static volatile uint32_t x247 = 214364U;
uint8_t x248 = 74U;
volatile int32_t t61 = 71;
uint64_t x253 = 181LLU;
int8_t x262 = INT8_MAX;
int64_t x263 = 18008141615862017LL;
int64_t x265 = INT64_MAX;
int32_t x269 = 28996;
volatile int32_t t66 = -393586359;
volatile uint32_t t67 = 19072U;
volatile uint16_t x279 = 4622U;
volatile int64_t x287 = INT64_MIN;
uint32_t x297 = 11U;
volatile int32_t x299 = -1;
uint16_t x301 = 149U;
int64_t x304 = INT64_MIN;
static int64_t x305 = INT64_MIN;
int32_t x306 = 9;
int32_t x309 = 14042113;
volatile int32_t t75 = -105;
uint32_t x322 = 123532243U;
int8_t x323 = -1;
int32_t t78 = INT32_MIN;
static volatile uint16_t x325 = UINT16_MAX;
int16_t x326 = -47;
static volatile uint8_t x327 = 0U;
volatile uint32_t x328 = 103966U;
static uint8_t x329 = 2U;
int8_t x332 = 15;
volatile uint16_t x339 = 633U;
int32_t x342 = INT32_MIN;
static int16_t x344 = -4462;
static int8_t x347 = 40;
int16_t x350 = INT16_MIN;
static int32_t t85 = -1;
uint32_t x356 = 3U;
static int8_t x362 = INT8_MIN;
uint32_t t89 = 7287953U;
int8_t x376 = -1;
int64_t t91 = INT64_MIN;
volatile int64_t t93 = INT64_MIN;
volatile uint8_t x390 = 0U;
uint8_t x391 = 10U;
volatile uint32_t x406 = UINT32_MAX;
uint32_t x411 = 16663U;
static int64_t x415 = -4035359080384609LL;
volatile int32_t t101 = 0;
static volatile int8_t x422 = -3;
int64_t x428 = 23764705LL;
volatile int16_t x429 = -1;
static volatile int16_t x432 = INT16_MIN;
uint16_t x435 = UINT16_MAX;
volatile uint8_t x438 = 3U;
static int32_t t106 = INT32_MIN;
uint64_t x446 = 16428LLU;
int32_t x456 = 591;
int8_t x459 = -2;
uint8_t x460 = UINT8_MAX;
static uint16_t x465 = 898U;
static int8_t x468 = INT8_MIN;
static int16_t x471 = INT16_MIN;
int8_t x472 = -1;
int64_t x473 = -1049584330703494940LL;
int64_t x486 = INT64_MAX;
uint32_t x497 = 2080185660U;
int32_t x498 = INT32_MIN;
int64_t x500 = INT64_MIN;
static int32_t x501 = INT32_MAX;
static volatile uint16_t x504 = 18U;
volatile uint64_t t122 = UINT64_MAX;
uint64_t x512 = 986758528642455LLU;
int32_t x520 = INT32_MAX;
int16_t x534 = INT16_MIN;
volatile uint8_t x535 = 35U;
int16_t x537 = INT16_MIN;
volatile uint64_t x538 = 3LLU;
volatile int32_t t130 = 126613273;
int32_t x543 = INT32_MIN;
static int32_t x549 = INT32_MAX;
int8_t x550 = INT8_MAX;
static volatile int32_t t133 = INT32_MAX;
static int8_t x559 = -1;
uint32_t x560 = 76043U;
volatile int32_t t135 = -3;
uint8_t x567 = 29U;
static int16_t x573 = INT16_MIN;
volatile int64_t x575 = -1LL;
int64_t x578 = -1LL;
int64_t x584 = -1LL;
int16_t x592 = 344;
uint64_t x594 = UINT64_MAX;
static uint32_t x595 = 0U;
int16_t x600 = -1;
int16_t x601 = -45;
int8_t x604 = -1;
volatile int16_t x605 = -34;
int16_t x606 = -1;
volatile int32_t x614 = -1;
int32_t t147 = 0;
volatile int8_t x618 = -1;
volatile int64_t x619 = -1LL;
uint16_t x622 = 1236U;
volatile int32_t t149 = -1;
static int64_t x625 = INT64_MIN;
int8_t x635 = INT8_MAX;
int32_t x636 = INT32_MIN;
int16_t x643 = -3198;
int64_t t155 = -34973401142204LL;
int64_t x653 = -1LL;
volatile int32_t x655 = 7;
int64_t x656 = -1LL;
int16_t x658 = -33;
uint32_t t158 = 62128653U;
int8_t x661 = INT8_MIN;
uint32_t x663 = 124545991U;
volatile int32_t t159 = 14931799;
volatile uint8_t x668 = 106U;
volatile int64_t t161 = INT64_MIN;
volatile uint16_t x676 = 20281U;
int64_t t162 = INT64_MAX;
static volatile int64_t x677 = INT64_MAX;
int8_t x682 = 1;
int32_t x688 = 6;
volatile int8_t x701 = INT8_MIN;
int8_t x706 = INT8_MIN;
int32_t x709 = INT32_MIN;
volatile int64_t x715 = INT64_MAX;
uint16_t x716 = 853U;
uint32_t x720 = 10U;
volatile int32_t x727 = INT32_MIN;
volatile int16_t x730 = INT16_MIN;
static uint16_t x732 = UINT16_MAX;
int64_t x734 = INT64_MIN;
int32_t x738 = INT32_MIN;
int64_t t178 = INT64_MIN;
static int32_t x743 = INT32_MIN;
int32_t t179 = INT32_MIN;
volatile uint64_t x747 = 1863075478003LLU;
uint16_t x749 = 26U;
int16_t x754 = INT16_MAX;
static uint32_t x755 = 85759U;
volatile int32_t t182 = INT32_MAX;
volatile int64_t x757 = INT64_MAX;
uint8_t x763 = UINT8_MAX;
int16_t x765 = 1595;
volatile int32_t t185 = 24598;
static int32_t x774 = INT32_MIN;
uint8_t x775 = 3U;
volatile int16_t x783 = INT16_MIN;
static volatile int64_t x784 = -2020110419809763437LL;
int64_t x788 = INT64_MAX;
static int64_t x789 = INT64_MIN;
volatile int64_t t191 = INT64_MIN;
volatile int32_t x800 = INT32_MAX;
uint32_t x804 = UINT32_MAX;
uint8_t x806 = 60U;
volatile uint64_t x807 = 2082426740113LLU;
int32_t x812 = -240697449;
int32_t t196 = -491134921;
volatile int16_t x813 = -1;
static uint16_t x816 = UINT16_MAX;
uint32_t x821 = UINT32_MAX;
int32_t x823 = -2111998;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	int32_t x3 = -1;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 517349019;

    t0 = (x1/((x2==x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 183;
	static int8_t x7 = INT8_MAX;
	volatile int32_t t1 = -11139;

    t1 = (x5/((x6==x7)!=x8));

    if (t1 != 183) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = -1;
	int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;

    t2 = (x9/((x10==x11)!=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MIN;
	static uint32_t x15 = UINT32_MAX;
	static volatile int32_t t3 = -58247;

    t3 = (x13/((x14==x15)!=x16));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = 1917447591U;
	static int64_t x18 = 3706082600442960867LL;
	int32_t x19 = INT32_MIN;
	int16_t x20 = 2622;
	uint32_t t4 = 14U;

    t4 = (x17/((x18==x19)!=x20));

    if (t4 != 1917447591U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 2LLU;
	uint16_t x22 = 0U;
	int8_t x24 = -1;
	volatile uint64_t t5 = 0LLU;

    t5 = (x21/((x22==x23)!=x24));

    if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int32_t x26 = 7083;
	int8_t x27 = -8;
	int64_t t6 = INT64_MIN;

    t6 = (x25/((x26==x27)!=x28));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	volatile uint16_t x31 = 474U;
	int32_t x32 = INT32_MAX;
	volatile int64_t t7 = 639168LL;

    t7 = (x29/((x30==x31)!=x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = -183513384;
	uint8_t x35 = UINT8_MAX;
	uint32_t x36 = 19582U;
	int32_t t8 = -3667247;

    t8 = (x33/((x34==x35)!=x36));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	static volatile int64_t x38 = 16558485LL;
	static volatile int32_t x39 = -1438704;
	volatile int8_t x40 = -1;
	volatile int32_t t9 = 30;

    t9 = (x37/((x38==x39)!=x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 14324566048LLU;
	int64_t x43 = -194694468917LL;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 177691;

    t10 = (x41/((x42==x43)!=x44));

    if (t10 != 55637759) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MAX;
	int32_t t11 = 15;

    t11 = (x45/((x46==x47)!=x48));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 736U;
	static int8_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;
	volatile int32_t t12 = -18;

    t12 = (x49/((x50==x51)!=x52));

    if (t12 != 736) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 4U;
	int8_t x54 = INT8_MAX;
	volatile int32_t x55 = INT32_MIN;
	uint16_t x56 = 10U;
	volatile int32_t t13 = 659079329;

    t13 = (x53/((x54==x55)!=x56));

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = 2;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = -946;
	volatile int32_t t14 = 23339929;

    t14 = (x57/((x58==x59)!=x60));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = 575321;
	int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 3946123;

    t15 = (x61/((x62==x63)!=x64));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x67 = UINT32_MAX;
	int16_t x68 = -11;
	volatile int32_t t16 = INT32_MIN;

    t16 = (x65/((x66==x67)!=x68));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	volatile int16_t x71 = INT16_MIN;
	int8_t x72 = 23;

    t17 = (x69/((x70==x71)!=x72));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x74 = -88686LL;
	static volatile int64_t x75 = -46LL;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 1;

    t18 = (x73/((x74==x75)!=x76));

    if (t18 != 42) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	volatile int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = INT32_MAX;

    t19 = (x77/((x78==x79)!=x80));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = 105726030970599473LL;
	int8_t x84 = INT8_MAX;

    t20 = (x81/((x82==x83)!=x84));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int64_t x86 = INT64_MIN;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -6;

    t21 = (x85/((x86==x87)!=x88));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MIN;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	int32_t t22 = -316027;

    t22 = (x89/((x90==x91)!=x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x94 = 27676U;
	static uint64_t x95 = 1199963741LLU;
	int64_t x96 = INT64_MIN;

    t23 = (x93/((x94==x95)!=x96));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MIN;
	volatile int8_t x99 = INT8_MIN;
	uint8_t x100 = 6U;
	volatile int64_t t24 = -635LL;

    t24 = (x97/((x98==x99)!=x100));

    if (t24 != -71267038911399916LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x102 = -1;
	static volatile uint8_t x103 = 4U;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

    t25 = (x101/((x102==x103)!=x104));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = 71U;
	uint64_t t26 = UINT64_MAX;

    t26 = (x105/((x106==x107)!=x108));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	uint16_t x110 = 106U;
	int64_t x112 = -2246091824367889888LL;
	volatile int64_t t27 = INT64_MAX;

    t27 = (x109/((x110==x111)!=x112));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = 10;
	static int64_t x114 = 61095874926731LL;
	int64_t x115 = INT64_MIN;
	volatile int32_t t28 = -260513;

    t28 = (x113/((x114==x115)!=x116));

    if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	volatile int32_t t29 = -4305796;

    t29 = (x117/((x118==x119)!=x120));

    if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -29LL;
	int32_t x123 = -1;
	int16_t x124 = INT16_MIN;
	int64_t t30 = -701214LL;

    t30 = (x121/((x122==x123)!=x124));

    if (t30 != -29LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x125 = 10784U;
	uint8_t x126 = 16U;
	int32_t x127 = INT32_MAX;
	int8_t x128 = 1;
	volatile int32_t t31 = -31324;

    t31 = (x125/((x126==x127)!=x128));

    if (t31 != 10784) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = 26;
	int32_t x130 = 2621;
	uint16_t x131 = UINT16_MAX;
	static int64_t x132 = -3917803LL;
	static int32_t t32 = 15320;

    t32 = (x129/((x130==x131)!=x132));

    if (t32 != 26) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 672;
	int64_t x134 = 150353373851996LL;
	volatile int32_t x135 = -1;
	int16_t x136 = -1;
	volatile int32_t t33 = 1;

    t33 = (x133/((x134==x135)!=x136));

    if (t33 != 672) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 1;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	volatile uint64_t x140 = 393LLU;
	volatile int32_t t34 = -2717;

    t34 = (x137/((x138==x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 116000272722545LL;
	int32_t x142 = -1;
	static int64_t x143 = INT64_MAX;
	int16_t x144 = -586;
	volatile int64_t t35 = -61212620LL;

    t35 = (x141/((x142==x143)!=x144));

    if (t35 != 116000272722545LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = UINT16_MAX;
	volatile int16_t x147 = INT16_MAX;
	int8_t x148 = -14;
	volatile int32_t t36 = INT32_MAX;

    t36 = (x145/((x146==x147)!=x148));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MIN;
	static uint64_t x151 = 3068709860407901325LLU;
	static int64_t x152 = 330993736465LL;
	int32_t t37 = 26995;

    t37 = (x149/((x150==x151)!=x152));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MAX;
	uint8_t x156 = 48U;

    t38 = (x153/((x154==x155)!=x156));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = -35476;
	int64_t t39 = INT64_MIN;

    t39 = (x157/((x158==x159)!=x160));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = -1;
	volatile uint16_t x163 = UINT16_MAX;
	uint32_t t40 = 655U;

    t40 = (x161/((x162==x163)!=x164));

    if (t40 != 537U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MIN;
	volatile int8_t x168 = -1;
	int32_t t41 = INT32_MAX;

    t41 = (x165/((x166==x167)!=x168));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 0U;
	static int16_t x170 = -8946;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = INT16_MIN;
	volatile uint32_t t42 = 1U;

    t42 = (x169/((x170==x171)!=x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 93U;
	static int8_t x174 = -3;
	uint16_t x176 = UINT16_MAX;
	uint32_t t43 = 1031502U;

    t43 = (x173/((x174==x175)!=x176));

    if (t43 != 93U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	uint8_t x178 = 1U;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 1;
	volatile int32_t t44 = INT32_MAX;

    t44 = (x177/((x178==x179)!=x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -2898093620665LL;
	static volatile uint64_t x182 = 5952672952292726522LLU;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = 767412825049834452LLU;
	static volatile int64_t t45 = 245502399LL;

    t45 = (x181/((x182==x183)!=x184));

    if (t45 != -2898093620665LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	static volatile uint8_t x186 = 3U;
	int16_t x187 = INT16_MIN;
	int64_t t46 = INT64_MIN;

    t46 = (x185/((x186==x187)!=x188));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = -125;
	int16_t x190 = INT16_MAX;
	volatile int32_t t47 = -60355518;

    t47 = (x189/((x190==x191)!=x192));

    if (t47 != -125) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	static int32_t x195 = -1;
	static int16_t x196 = INT16_MIN;
	static volatile int64_t t48 = INT64_MAX;

    t48 = (x193/((x194==x195)!=x196));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = INT32_MIN;
	static int64_t x198 = -1LL;
	volatile uint64_t x199 = 0LLU;
	volatile int32_t t49 = INT32_MIN;

    t49 = (x197/((x198==x199)!=x200));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 1610;
	int32_t x202 = -2720;
	int8_t x203 = -3;
	static uint64_t x204 = UINT64_MAX;

    t50 = (x201/((x202==x203)!=x204));

    if (t50 != 1610) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x206 = UINT16_MAX;
	static volatile uint32_t t51 = UINT32_MAX;

    t51 = (x205/((x206==x207)!=x208));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	static uint32_t x210 = 147409833U;
	int32_t t52 = -26558607;

    t52 = (x209/((x210==x211)!=x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	uint64_t x214 = 11696719665024726LLU;
	uint16_t x215 = 22195U;
	volatile int16_t x216 = INT16_MIN;
	static int32_t t53 = 50439;

    t53 = (x213/((x214==x215)!=x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 1;
	volatile uint16_t x218 = 156U;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t54 = -7;

    t54 = (x217/((x218==x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = -262502692LL;
	static int8_t x222 = INT8_MIN;
	static uint32_t x223 = 154155U;
	int32_t x224 = -1;

    t55 = (x221/((x222==x223)!=x224));

    if (t55 != -262502692LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 74063440;

    t56 = (x225/((x226==x227)!=x228));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 57032U;
	uint32_t x230 = 1U;
	int64_t x232 = INT64_MIN;
	uint32_t t57 = 7U;

    t57 = (x229/((x230==x231)!=x232));

    if (t57 != 57032U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x234 = UINT32_MAX;
	int8_t x236 = -1;
	static int32_t t58 = 1;

    t58 = (x233/((x234==x235)!=x236));

    if (t58 != -55) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -344;
	int8_t x238 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = 35199545;

    t59 = (x237/((x238==x239)!=x240));

    if (t59 != -344) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -7;
	int8_t x242 = -1;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = -1;
	static int32_t t60 = 4773305;

    t60 = (x241/((x242==x243)!=x244));

    if (t60 != -7) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 4049;
	volatile int64_t x246 = 250352LL;

    t61 = (x245/((x246==x247)!=x248));

    if (t61 != 4049) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x254 = 394894308873595651LLU;
	uint16_t x255 = 59U;
	int64_t x256 = -1LL;
	volatile uint64_t t62 = 534460158LLU;

    t62 = (x253/((x254==x255)!=x256));

    if (t62 != 181LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x257 = -1;
	static uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 2534173027LLU;
	int32_t x260 = 36094412;
	int32_t t63 = 4;

    t63 = (x257/((x258==x259)!=x260));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x261 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t64 = -6229;

    t64 = (x261/((x262==x263)!=x264));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x266 = -3;
	volatile int64_t x267 = INT64_MAX;
	int64_t x268 = -1761LL;
	int64_t t65 = INT64_MAX;

    t65 = (x265/((x266==x267)!=x268));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x270 = -1114;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = 3;

    t66 = (x269/((x270==x271)!=x272));

    if (t66 != 28996) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x273 = 1U;
	int32_t x274 = INT32_MIN;
	uint8_t x275 = 50U;
	int32_t x276 = -1;

    t67 = (x273/((x274==x275)!=x276));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x277 = INT64_MAX;
	static volatile int8_t x278 = INT8_MIN;
	volatile int8_t x280 = INT8_MAX;
	volatile int64_t t68 = INT64_MAX;

    t68 = (x277/((x278==x279)!=x280));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = UINT32_MAX;
	static volatile int16_t x286 = -1;
	int64_t x288 = -1LL;
	volatile uint32_t t69 = UINT32_MAX;

    t69 = (x285/((x286==x287)!=x288));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	volatile int8_t x290 = 0;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 11616U;
	volatile int32_t t70 = 18;

    t70 = (x289/((x290==x291)!=x292));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 6U;
	volatile uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 23U;
	uint32_t t71 = 0U;

    t71 = (x293/((x294==x295)!=x296));

    if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x298 = UINT8_MAX;
	int16_t x300 = 118;
	volatile uint32_t t72 = 132355U;

    t72 = (x297/((x298==x299)!=x300));

    if (t72 != 11U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	int32_t t73 = -971903;

    t73 = (x301/((x302==x303)!=x304));

    if (t73 != 149) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x307 = 0;
	static volatile uint64_t x308 = 62216580LLU;
	volatile int64_t t74 = INT64_MIN;

    t74 = (x305/((x306==x307)!=x308));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int32_t x312 = 716302;

    t75 = (x309/((x310==x311)!=x312));

    if (t75 != 14042113) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	uint8_t x314 = 2U;
	volatile int8_t x315 = INT8_MIN;
	static int32_t x316 = -1;
	int32_t t76 = INT32_MIN;

    t76 = (x313/((x314==x315)!=x316));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = INT16_MIN;
	static uint16_t x318 = 112U;
	uint16_t x319 = 6U;
	int32_t x320 = -818302733;
	volatile int32_t t77 = 25;

    t77 = (x317/((x318==x319)!=x320));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x324 = -65;

    t78 = (x321/((x322==x323)!=x324));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t t79 = 56032;

    t79 = (x325/((x326==x327)!=x328));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x330 = INT64_MIN;
	int16_t x331 = -1;
	volatile int32_t t80 = 16411340;

    t80 = (x329/((x330==x331)!=x332));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x333 = -44;
	volatile uint16_t x334 = 5702U;
	uint16_t x335 = 10154U;
	uint16_t x336 = 7026U;
	volatile int32_t t81 = 32726922;

    t81 = (x333/((x334==x335)!=x336));

    if (t81 != -44) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -98179;
	int16_t x338 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t82 = -779285793;

    t82 = (x337/((x338==x339)!=x340));

    if (t82 != -98179) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x341 = -1;
	uint8_t x343 = 39U;
	int32_t t83 = -184678533;

    t83 = (x341/((x342==x343)!=x344));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = -1703447326070880253LL;
	volatile int8_t x346 = -1;
	static volatile uint16_t x348 = UINT16_MAX;
	int64_t t84 = 684422202494844233LL;

    t84 = (x345/((x346==x347)!=x348));

    if (t84 != -1703447326070880253LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = 0;
	uint8_t x351 = 1U;
	int64_t x352 = -1LL;

    t85 = (x349/((x350==x351)!=x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = -1;
	uint32_t x354 = 80923444U;
	volatile uint64_t x355 = 1219218914006491891LLU;
	int32_t t86 = -1;

    t86 = (x353/((x354==x355)!=x356));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x357 = INT64_MIN;
	uint8_t x358 = 1U;
	int64_t x359 = 1117401615121030599LL;
	volatile int16_t x360 = INT16_MIN;
	volatile int64_t t87 = INT64_MIN;

    t87 = (x357/((x358==x359)!=x360));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -19886368363LL;
	volatile int8_t x363 = 1;
	int16_t x364 = INT16_MIN;
	static volatile int64_t t88 = 38LL;

    t88 = (x361/((x362==x363)!=x364));

    if (t88 != -19886368363LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = 52714U;
	int16_t x366 = INT16_MAX;
	volatile int8_t x367 = INT8_MIN;
	static int64_t x368 = INT64_MIN;

    t89 = (x365/((x366==x367)!=x368));

    if (t89 != 52714U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = INT32_MIN;
	static int32_t x371 = -1;
	uint8_t x372 = 27U;
	int32_t t90 = -3;

    t90 = (x369/((x370==x371)!=x372));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = 1;
	int32_t x375 = 1063780;

    t91 = (x373/((x374==x375)!=x376));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	volatile int8_t x379 = -2;
	static volatile int16_t x380 = INT16_MIN;
	int64_t t92 = INT64_MIN;

    t92 = (x377/((x378==x379)!=x380));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x381 = INT64_MIN;
	uint16_t x382 = 61U;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = -1;

    t93 = (x381/((x382==x383)!=x384));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = UINT16_MAX;
	int32_t x386 = 62989;
	int16_t x387 = INT16_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t94 = 2;

    t94 = (x385/((x386==x387)!=x388));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	uint8_t x392 = UINT8_MAX;
	int32_t t95 = 0;

    t95 = (x389/((x390==x391)!=x392));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t96 = -628;

    t96 = (x393/((x394==x395)!=x396));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x397 = -1;
	static volatile uint64_t x398 = 0LLU;
	int8_t x399 = 0;
	uint64_t x400 = 1814943LLU;
	int32_t t97 = 108022;

    t97 = (x397/((x398==x399)!=x400));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = 3304;
	uint64_t x403 = 100862083809041LLU;
	uint8_t x404 = 101U;
	int64_t t98 = INT64_MIN;

    t98 = (x401/((x402==x403)!=x404));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = 89U;
	int32_t x407 = INT32_MIN;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t99 = -124234138;

    t99 = (x405/((x406==x407)!=x408));

    if (t99 != 89) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x409 = INT16_MAX;
	int64_t x410 = 33922039780478LL;
	static volatile uint64_t x412 = 3LLU;
	int32_t t100 = 46306954;

    t100 = (x409/((x410==x411)!=x412));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x413 = INT16_MIN;
	volatile int32_t x414 = INT32_MAX;
	int16_t x416 = INT16_MIN;

    t101 = (x413/((x414==x415)!=x416));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x421 = INT8_MIN;
	uint16_t x423 = 9U;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t102 = 5015371;

    t102 = (x421/((x422==x423)!=x424));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = -48438LL;
	uint32_t x426 = 14125443U;
	static volatile int64_t x427 = -5395280081553LL;
	static int64_t t103 = -5LL;

    t103 = (x425/((x426==x427)!=x428));

    if (t103 != -48438LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x430 = 11308723LLU;
	uint64_t x431 = 773463722720LLU;
	volatile int32_t t104 = 7173118;

    t104 = (x429/((x430==x431)!=x432));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 10U;
	int64_t x434 = 399517LL;
	int8_t x436 = -1;
	uint32_t t105 = 31005U;

    t105 = (x433/((x434==x435)!=x436));

    if (t105 != 10U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x437 = INT32_MIN;
	uint8_t x439 = 14U;
	int32_t x440 = 38;

    t106 = (x437/((x438==x439)!=x440));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x441 = 0;
	int64_t x442 = INT64_MAX;
	int64_t x443 = 945392788555125LL;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t107 = 484;

    t107 = (x441/((x442==x443)!=x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x445 = -1;
	static volatile int32_t x447 = -1;
	static int16_t x448 = INT16_MIN;
	volatile int32_t t108 = -194965591;

    t108 = (x445/((x446==x447)!=x448));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x449 = -1;
	int16_t x450 = INT16_MAX;
	static int16_t x451 = INT16_MIN;
	static int64_t x452 = -5858108255LL;
	static int32_t t109 = 6124;

    t109 = (x449/((x450==x451)!=x452));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x453 = 0U;
	volatile uint64_t x454 = UINT64_MAX;
	static int8_t x455 = 7;
	volatile int32_t t110 = -3;

    t110 = (x453/((x454==x455)!=x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x457 = -1;
	uint8_t x458 = UINT8_MAX;
	int32_t t111 = 660;

    t111 = (x457/((x458==x459)!=x460));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = 17;
	static int32_t x462 = INT32_MAX;
	uint64_t x463 = 13796LLU;
	volatile int64_t x464 = -540489632971666LL;
	int32_t t112 = 364625;

    t112 = (x461/((x462==x463)!=x464));

    if (t112 != 17) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x466 = -13;
	int8_t x467 = INT8_MIN;
	volatile int32_t t113 = -53;

    t113 = (x465/((x466==x467)!=x468));

    if (t113 != 898) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = -1LL;
	uint64_t x470 = 4LLU;
	volatile int64_t t114 = -2079280603LL;

    t114 = (x469/((x470==x471)!=x472));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x474 = INT8_MIN;
	int32_t x475 = -1;
	int8_t x476 = 1;
	int64_t t115 = -1023931477152958440LL;

    t115 = (x473/((x474==x475)!=x476));

    if (t115 != -1049584330703494940LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = 1U;
	static int16_t x478 = 1691;
	int16_t x479 = INT16_MIN;
	volatile uint8_t x480 = 7U;
	volatile int32_t t116 = 40;

    t116 = (x477/((x478==x479)!=x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = -1;
	static uint64_t x482 = UINT64_MAX;
	uint32_t x483 = 145168U;
	uint64_t x484 = UINT64_MAX;
	int32_t t117 = 985;

    t117 = (x481/((x482==x483)!=x484));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = INT8_MIN;
	static int64_t x487 = INT64_MIN;
	volatile uint32_t x488 = UINT32_MAX;
	static volatile int32_t t118 = -2980;

    t118 = (x485/((x486==x487)!=x488));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x493 = 5U;
	int16_t x494 = INT16_MIN;
	int64_t x495 = 1734570083580994LL;
	int64_t x496 = -1LL;
	static int32_t t119 = 157;

    t119 = (x493/((x494==x495)!=x496));

    if (t119 != 5) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x499 = INT64_MIN;
	static volatile uint32_t t120 = 44U;

    t120 = (x497/((x498==x499)!=x500));

    if (t120 != 2080185660U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x502 = 1450U;
	uint8_t x503 = 10U;
	static volatile int32_t t121 = INT32_MAX;

    t121 = (x501/((x502==x503)!=x504));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x505 = UINT64_MAX;
	volatile int16_t x506 = 19;
	static int16_t x507 = -1;
	volatile int16_t x508 = INT16_MIN;

    t122 = (x505/((x506==x507)!=x508));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x509 = INT8_MIN;
	int32_t x510 = -1;
	int64_t x511 = INT64_MAX;
	int32_t t123 = 1041;

    t123 = (x509/((x510==x511)!=x512));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	static uint32_t x515 = 3587U;
	int32_t x516 = -743867;
	int32_t t124 = 1;

    t124 = (x513/((x514==x515)!=x516));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MIN;
	int32_t x518 = INT32_MIN;
	volatile int32_t x519 = 7;
	int32_t t125 = INT32_MIN;

    t125 = (x517/((x518==x519)!=x520));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = -1;
	volatile int8_t x522 = -3;
	volatile int16_t x523 = INT16_MIN;
	volatile int64_t x524 = INT64_MIN;
	volatile int32_t t126 = 0;

    t126 = (x521/((x522==x523)!=x524));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = INT16_MAX;
	int64_t x526 = -857747569307376927LL;
	static int8_t x527 = INT8_MAX;
	int64_t x528 = -1LL;
	volatile int32_t t127 = -3947;

    t127 = (x525/((x526==x527)!=x528));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 225U;
	volatile int16_t x530 = -330;
	int8_t x531 = 0;
	int32_t x532 = INT32_MIN;
	static int32_t t128 = -471872;

    t128 = (x529/((x530==x531)!=x532));

    if (t128 != 225) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x533 = 13U;
	int64_t x536 = INT64_MIN;
	volatile int32_t t129 = 60314;

    t129 = (x533/((x534==x535)!=x536));

    if (t129 != 13) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x539 = -99;
	int64_t x540 = INT64_MIN;

    t130 = (x537/((x538==x539)!=x540));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x541 = 112U;
	uint8_t x542 = 3U;
	uint32_t x544 = UINT32_MAX;
	static int32_t t131 = 65772;

    t131 = (x541/((x542==x543)!=x544));

    if (t131 != 112) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = -1;
	uint16_t x546 = 4U;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	volatile int32_t t132 = -2088;

    t132 = (x545/((x546==x547)!=x548));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x551 = 2086U;
	static int32_t x552 = -1727295;

    t133 = (x549/((x550==x551)!=x552));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x557 = -1;
	uint32_t x558 = 5U;
	int32_t t134 = 0;

    t134 = (x557/((x558==x559)!=x560));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x561 = 0U;
	static uint32_t x562 = UINT32_MAX;
	static volatile int32_t x563 = 1;
	uint16_t x564 = 7U;

    t135 = (x561/((x562==x563)!=x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = 180628059;
	int64_t x566 = 2477LL;
	int64_t x568 = 224094626493LL;
	static volatile int32_t t136 = 821;

    t136 = (x565/((x566==x567)!=x568));

    if (t136 != 180628059) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x574 = -1;
	static int32_t x576 = -1;
	int32_t t137 = 209370;

    t137 = (x573/((x574==x575)!=x576));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x577 = -1;
	volatile int16_t x579 = -1;
	uint64_t x580 = 7582930236688LLU;
	int32_t t138 = 10;

    t138 = (x577/((x578==x579)!=x580));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x581 = 30625276521983LL;
	int16_t x582 = 30;
	int16_t x583 = INT16_MIN;
	volatile int64_t t139 = 16500820103134LL;

    t139 = (x581/((x582==x583)!=x584));

    if (t139 != 30625276521983LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x585 = -5335;
	int8_t x586 = -1;
	int32_t x587 = INT32_MAX;
	uint64_t x588 = UINT64_MAX;
	static int32_t t140 = 1341;

    t140 = (x585/((x586==x587)!=x588));

    if (t140 != -5335) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x589 = 22134U;
	uint8_t x590 = 2U;
	static uint64_t x591 = 15677616LLU;
	volatile int32_t t141 = -1;

    t141 = (x589/((x590==x591)!=x592));

    if (t141 != 22134) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x593 = INT8_MIN;
	static int64_t x596 = -1LL;
	volatile int32_t t142 = -28;

    t142 = (x593/((x594==x595)!=x596));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x597 = INT8_MIN;
	volatile uint32_t x598 = UINT32_MAX;
	uint8_t x599 = 3U;
	volatile int32_t t143 = -788184749;

    t143 = (x597/((x598==x599)!=x600));

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x602 = -964266;
	volatile int32_t x603 = INT32_MIN;
	int32_t t144 = -982;

    t144 = (x601/((x602==x603)!=x604));

    if (t144 != -45) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x607 = -1LL;
	int64_t x608 = INT64_MIN;
	int32_t t145 = -3413;

    t145 = (x605/((x606==x607)!=x608));

    if (t145 != -34) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x609 = 6168318;
	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MIN;
	int32_t x612 = 161575;
	int32_t t146 = -2962;

    t146 = (x609/((x610==x611)!=x612));

    if (t146 != 6168318) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = -1;
	int16_t x615 = INT16_MIN;
	int16_t x616 = 1;

    t147 = (x613/((x614==x615)!=x616));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x617 = INT32_MIN;
	uint16_t x620 = UINT16_MAX;
	static volatile int32_t t148 = INT32_MIN;

    t148 = (x617/((x618==x619)!=x620));

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x621 = 1;
	int8_t x623 = INT8_MIN;
	static int32_t x624 = -1;

    t149 = (x621/((x622==x623)!=x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x626 = INT64_MIN;
	static volatile int8_t x627 = INT8_MIN;
	int32_t x628 = -1;
	static volatile int64_t t150 = INT64_MIN;

    t150 = (x625/((x626==x627)!=x628));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	int64_t x632 = INT64_MAX;
	static uint32_t t151 = UINT32_MAX;

    t151 = (x629/((x630==x631)!=x632));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x633 = -509LL;
	int16_t x634 = -10179;
	int64_t t152 = 22737917311LL;

    t152 = (x633/((x634==x635)!=x636));

    if (t152 != -509LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = -7085;
	uint32_t x638 = 312702170U;
	static int64_t x639 = INT64_MIN;
	int32_t x640 = -1;
	int32_t t153 = -9421825;

    t153 = (x637/((x638==x639)!=x640));

    if (t153 != -7085) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x641 = UINT16_MAX;
	static volatile int64_t x642 = 442043LL;
	static volatile int8_t x644 = INT8_MIN;
	volatile int32_t t154 = 364;

    t154 = (x641/((x642==x643)!=x644));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x645 = 3247608854347LL;
	int16_t x646 = INT16_MAX;
	volatile int16_t x647 = INT16_MIN;
	int64_t x648 = 101951519919LL;

    t155 = (x645/((x646==x647)!=x648));

    if (t155 != 3247608854347LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = -1;
	int64_t x650 = -1LL;
	int32_t x651 = -1;
	int16_t x652 = -1;
	volatile int32_t t156 = 18;

    t156 = (x649/((x650==x651)!=x652));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x654 = 3U;
	int64_t t157 = 61059LL;

    t157 = (x653/((x654==x655)!=x656));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x657 = 154442252U;
	int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MAX;

    t158 = (x657/((x658==x659)!=x660));

    if (t158 != 154442252U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x662 = -9;
	uint64_t x664 = 1107796543127575857LLU;

    t159 = (x661/((x662==x663)!=x664));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x665 = 2620LLU;
	int8_t x666 = INT8_MIN;
	volatile uint8_t x667 = UINT8_MAX;
	uint64_t t160 = 52848873LLU;

    t160 = (x665/((x666==x667)!=x668));

    if (t160 != 2620LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x669 = INT64_MIN;
	int8_t x670 = -1;
	volatile int64_t x671 = INT64_MIN;
	static int16_t x672 = 157;

    t161 = (x669/((x670==x671)!=x672));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = INT64_MAX;
	int32_t x674 = INT32_MAX;
	int8_t x675 = INT8_MIN;

    t162 = (x673/((x674==x675)!=x676));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x678 = -1LL;
	volatile int32_t x679 = -1;
	static int16_t x680 = -12;
	static int64_t t163 = INT64_MAX;

    t163 = (x677/((x678==x679)!=x680));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MAX;
	int8_t x683 = INT8_MIN;
	int16_t x684 = 1;
	int64_t t164 = INT64_MAX;

    t164 = (x681/((x682==x683)!=x684));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x685 = INT64_MIN;
	static int8_t x686 = -11;
	uint32_t x687 = 20439430U;
	volatile int64_t t165 = INT64_MIN;

    t165 = (x685/((x686==x687)!=x688));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x689 = 1554972838U;
	int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MIN;
	volatile int16_t x692 = INT16_MIN;
	uint32_t t166 = 36U;

    t166 = (x689/((x690==x691)!=x692));

    if (t166 != 1554972838U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x693 = INT32_MIN;
	static volatile uint16_t x694 = UINT16_MAX;
	int32_t x695 = INT32_MIN;
	static volatile uint8_t x696 = 3U;
	int32_t t167 = INT32_MIN;

    t167 = (x693/((x694==x695)!=x696));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x697 = INT64_MIN;
	uint16_t x698 = 4856U;
	int8_t x699 = 35;
	static int32_t x700 = -96850685;
	volatile int64_t t168 = INT64_MIN;

    t168 = (x697/((x698==x699)!=x700));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x702 = 23U;
	int16_t x703 = INT16_MIN;
	static int64_t x704 = INT64_MAX;
	int32_t t169 = 15701611;

    t169 = (x701/((x702==x703)!=x704));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = -1;
	uint32_t x707 = 117502083U;
	volatile int64_t x708 = -1LL;
	volatile int32_t t170 = 518512;

    t170 = (x705/((x706==x707)!=x708));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x710 = INT64_MIN;
	static int32_t x711 = -1;
	static int8_t x712 = INT8_MIN;
	static volatile int32_t t171 = INT32_MIN;

    t171 = (x709/((x710==x711)!=x712));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = 2923U;
	volatile uint64_t x714 = 229612724621254721LLU;
	int32_t t172 = -100269564;

    t172 = (x713/((x714==x715)!=x716));

    if (t172 != 2923) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = INT16_MIN;
	volatile int32_t x718 = INT32_MIN;
	int64_t x719 = -16149LL;
	int32_t t173 = 0;

    t173 = (x717/((x718==x719)!=x720));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x721 = -12;
	int16_t x722 = INT16_MIN;
	volatile int32_t x723 = INT32_MAX;
	uint64_t x724 = UINT64_MAX;
	int32_t t174 = -7385;

    t174 = (x721/((x722==x723)!=x724));

    if (t174 != -12) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x725 = -126;
	static uint16_t x726 = 187U;
	volatile uint8_t x728 = 86U;
	int32_t t175 = 265;

    t175 = (x725/((x726==x727)!=x728));

    if (t175 != -126) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = 1U;
	volatile uint64_t x731 = 29670012LLU;
	volatile uint32_t t176 = 158669U;

    t176 = (x729/((x730==x731)!=x732));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x733 = UINT32_MAX;
	static uint64_t x735 = UINT64_MAX;
	static int64_t x736 = INT64_MIN;
	static uint32_t t177 = UINT32_MAX;

    t177 = (x733/((x734==x735)!=x736));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = INT64_MIN;
	static int32_t x739 = INT32_MIN;
	uint16_t x740 = 6055U;

    t178 = (x737/((x738==x739)!=x740));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x741 = INT32_MIN;
	uint32_t x742 = 23141U;
	int16_t x744 = INT16_MAX;

    t179 = (x741/((x742==x743)!=x744));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = INT8_MAX;
	static int16_t x746 = INT16_MIN;
	int64_t x748 = -1LL;
	volatile int32_t t180 = 4390;

    t180 = (x745/((x746==x747)!=x748));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x750 = 23915U;
	int32_t x751 = INT32_MIN;
	int32_t x752 = -1;
	int32_t t181 = -1;

    t181 = (x749/((x750==x751)!=x752));

    if (t181 != 26) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x753 = INT32_MAX;
	volatile int8_t x756 = INT8_MAX;

    t182 = (x753/((x754==x755)!=x756));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x758 = -9938LL;
	uint64_t x759 = UINT64_MAX;
	int16_t x760 = INT16_MAX;
	volatile int64_t t183 = INT64_MAX;

    t183 = (x757/((x758==x759)!=x760));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x761 = 55U;
	int64_t x762 = INT64_MIN;
	static uint64_t x764 = UINT64_MAX;
	volatile int32_t t184 = 804;

    t184 = (x761/((x762==x763)!=x764));

    if (t184 != 55) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x766 = 0U;
	int64_t x767 = -1LL;
	int32_t x768 = 1976;

    t185 = (x765/((x766==x767)!=x768));

    if (t185 != 1595) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = -1;
	int8_t x770 = 2;
	volatile uint8_t x771 = UINT8_MAX;
	int8_t x772 = -2;
	volatile int32_t t186 = 0;

    t186 = (x769/((x770==x771)!=x772));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x773 = 20U;
	int16_t x776 = -1;
	uint32_t t187 = 24578U;

    t187 = (x773/((x774==x775)!=x776));

    if (t187 != 20U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x778 = -1;
	static int32_t x779 = -1;
	int32_t x780 = INT32_MAX;
	int32_t t188 = 0;

    t188 = (x777/((x778==x779)!=x780));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x781 = INT32_MAX;
	uint64_t x782 = UINT64_MAX;
	int32_t t189 = INT32_MAX;

    t189 = (x781/((x782==x783)!=x784));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = INT8_MAX;
	volatile int8_t x786 = INT8_MIN;
	uint64_t x787 = 10LLU;
	static int32_t t190 = -4;

    t190 = (x785/((x786==x787)!=x788));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x790 = 32556760;
	uint32_t x791 = 7638864U;
	int8_t x792 = INT8_MIN;

    t191 = (x789/((x790==x791)!=x792));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = INT32_MIN;
	volatile uint32_t x794 = 457837U;
	static int16_t x795 = INT16_MAX;
	uint64_t x796 = UINT64_MAX;
	int32_t t192 = INT32_MIN;

    t192 = (x793/((x794==x795)!=x796));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -7644LL;
	uint16_t x798 = 246U;
	int8_t x799 = 11;
	int64_t t193 = 0LL;

    t193 = (x797/((x798==x799)!=x800));

    if (t193 != -7644LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x801 = -1;
	static uint16_t x802 = UINT16_MAX;
	uint32_t x803 = 560589U;
	int32_t t194 = -3;

    t194 = (x801/((x802==x803)!=x804));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x805 = -1870;
	uint8_t x808 = 26U;
	int32_t t195 = -1008262;

    t195 = (x805/((x806==x807)!=x808));

    if (t195 != -1870) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = -1;
	int64_t x810 = INT64_MIN;
	int32_t x811 = INT32_MIN;

    t196 = (x809/((x810==x811)!=x812));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x814 = INT8_MAX;
	int64_t x815 = INT64_MIN;
	volatile int32_t t197 = -241;

    t197 = (x813/((x814==x815)!=x816));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x817 = 1U;
	int8_t x818 = -13;
	uint8_t x819 = UINT8_MAX;
	uint16_t x820 = 21084U;
	volatile int32_t t198 = -1;

    t198 = (x817/((x818==x819)!=x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x822 = 120602LLU;
	int32_t x824 = -1;
	uint32_t t199 = UINT32_MAX;

    t199 = (x821/((x822==x823)!=x824));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

