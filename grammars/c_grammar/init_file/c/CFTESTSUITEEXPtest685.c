
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

static volatile int16_t x4 = INT16_MIN;
uint32_t x5 = 1U;
uint32_t t1 = 26U;
int8_t x22 = INT8_MAX;
volatile int32_t t6 = 2;
static int64_t x35 = INT64_MIN;
volatile uint8_t x40 = UINT8_MAX;
uint16_t x46 = 439U;
static int64_t x48 = INT64_MAX;
uint64_t x58 = 29714394408LLU;
int32_t t13 = INT32_MAX;
uint16_t x61 = 1034U;
static int64_t x62 = -621944446LL;
uint16_t x67 = 6U;
uint16_t x71 = UINT16_MAX;
uint32_t x75 = 24559095U;
volatile int32_t t17 = -738873;
int8_t x87 = -1;
static int32_t t21 = 44;
static uint32_t t24 = 578346755U;
volatile int8_t x106 = INT8_MAX;
volatile int32_t x112 = INT32_MAX;
volatile int32_t t28 = -4;
volatile int8_t x121 = INT8_MIN;
int64_t x124 = -1LL;
static int64_t x132 = INT64_MAX;
int32_t x135 = -10519978;
int64_t t36 = INT64_MIN;
volatile uint16_t x157 = UINT16_MAX;
int16_t x158 = INT16_MAX;
volatile int32_t t38 = 363738709;
uint32_t x171 = 271U;
int8_t x176 = -1;
int16_t x189 = INT16_MIN;
volatile int64_t x199 = INT64_MIN;
uint8_t x208 = 14U;
static int32_t t47 = -325;
int32_t x209 = INT32_MIN;
volatile int32_t t48 = 76916831;
volatile int32_t x219 = -1;
volatile int32_t t50 = -28375374;
uint32_t x224 = 17722U;
int32_t t52 = INT32_MAX;
volatile uint8_t x234 = 12U;
int32_t t55 = INT32_MAX;
static uint64_t x241 = 15LLU;
int64_t x263 = INT64_MIN;
int64_t x267 = -4232108735954631922LL;
int8_t x268 = INT8_MIN;
static int64_t t62 = 8120956986325813LL;
int32_t x274 = 276202641;
int32_t x275 = INT32_MIN;
volatile uint16_t x277 = UINT16_MAX;
int32_t x278 = -50;
volatile uint16_t x279 = 29493U;
uint8_t x288 = UINT8_MAX;
volatile uint8_t x290 = UINT8_MAX;
volatile int8_t x291 = INT8_MIN;
int64_t x293 = 3431303004349LL;
static int32_t x294 = INT32_MIN;
int64_t x297 = 26880887177493497LL;
volatile int64_t t69 = -845LL;
uint8_t x307 = 17U;
static int16_t x308 = INT16_MAX;
static int32_t x310 = -1;
int32_t t72 = -977369472;
static int16_t x315 = INT16_MIN;
uint64_t t73 = UINT64_MAX;
int8_t x318 = 0;
uint32_t x322 = 1464819U;
uint32_t x327 = 1U;
int64_t x330 = 3133594803159147LL;
volatile int8_t x331 = INT8_MIN;
int16_t x334 = -1;
volatile int32_t x338 = -1;
volatile int16_t x340 = 6;
int32_t x341 = INT32_MIN;
uint16_t x343 = 17U;
int16_t x348 = 7021;
uint64_t x358 = 20853624915801LLU;
volatile int8_t x378 = INT8_MIN;
uint32_t x381 = 248U;
int32_t t92 = -472;
static uint16_t x405 = UINT16_MAX;
static volatile int32_t t95 = -3513775;
volatile int32_t t96 = -827063012;
int64_t x415 = -15376LL;
int8_t x421 = -1;
int8_t x422 = INT8_MIN;
volatile uint8_t x428 = UINT8_MAX;
int64_t x430 = INT64_MIN;
static uint64_t x436 = 9173592220910173LLU;
int16_t x441 = INT16_MAX;
static int8_t x445 = 1;
volatile int8_t x446 = INT8_MIN;
uint16_t x447 = 52U;
volatile int16_t x448 = INT16_MIN;
int64_t t106 = -5478LL;
uint8_t x462 = UINT8_MAX;
volatile int16_t x468 = INT16_MIN;
int32_t x477 = -1;
static int64_t x478 = INT64_MIN;
int32_t x483 = INT32_MIN;
int16_t x484 = INT16_MAX;
uint16_t x491 = 736U;
uint32_t t116 = 11003881U;
static int32_t x494 = -10671623;
static uint64_t x500 = 122651921028324002LLU;
int64_t t118 = 6LL;
int64_t x521 = INT64_MAX;
static volatile uint32_t x525 = 116323U;
volatile int16_t x526 = -30;
int8_t x529 = -1;
uint32_t x531 = 6U;
static int32_t x533 = 881055507;
int32_t t127 = 636;
int16_t x540 = INT16_MIN;
uint32_t x559 = UINT32_MAX;
uint64_t x560 = 295886496826779285LLU;
int64_t x563 = INT64_MIN;
int32_t x567 = 6903155;
static volatile int64_t x569 = INT64_MIN;
uint32_t x571 = 16146304U;
int32_t x572 = INT32_MIN;
int32_t t138 = -11056876;
uint16_t x584 = 0U;
int32_t t140 = -179889190;
volatile int64_t t141 = 3639338260803934980LL;
uint8_t x599 = 109U;
static int8_t x600 = INT8_MIN;
int8_t x604 = INT8_MIN;
int64_t x607 = INT64_MAX;
volatile uint16_t x608 = 5789U;
uint32_t x609 = 16130390U;
static uint8_t x617 = 20U;
volatile uint16_t x619 = 3U;
uint16_t x625 = UINT16_MAX;
static int8_t x628 = INT8_MIN;
volatile int16_t x631 = INT16_MIN;
int64_t x633 = 905399463001268813LL;
static volatile uint16_t x635 = 1U;
volatile int32_t x641 = -76137818;
int32_t x643 = 4012;
int64_t t155 = 4994605895LL;
int16_t x674 = -1;
int64_t x675 = INT64_MAX;
int8_t x680 = INT8_MIN;
uint32_t x681 = UINT32_MAX;
uint16_t x683 = UINT16_MAX;
volatile int16_t x684 = INT16_MAX;
uint32_t t163 = UINT32_MAX;
volatile uint64_t x688 = 15LLU;
int64_t x692 = INT64_MIN;
volatile int64_t x694 = INT64_MAX;
uint64_t x699 = 4708727LLU;
uint32_t x706 = UINT32_MAX;
static uint16_t x709 = UINT16_MAX;
static volatile int32_t t170 = -17135496;
volatile int32_t x716 = INT32_MIN;
int32_t x718 = -1;
int32_t x721 = INT32_MIN;
int8_t x733 = -23;
uint64_t t176 = 10575076753774048LLU;
static int16_t x750 = INT16_MIN;
int8_t x752 = -29;
volatile int32_t t180 = 147299726;
int16_t x758 = INT16_MIN;
uint8_t x768 = UINT8_MAX;
volatile int32_t x771 = -1;
int64_t x778 = INT64_MAX;
int64_t x781 = INT64_MIN;
int8_t x784 = INT8_MIN;
static int16_t x785 = -3;
volatile uint16_t x788 = 374U;
int32_t x789 = INT32_MAX;
int64_t x793 = 109900LL;
uint16_t x796 = 237U;
uint64_t x801 = 48366LLU;
int16_t x804 = INT16_MIN;
int16_t x805 = INT16_MAX;
volatile int8_t x807 = -1;
int8_t x808 = -1;
volatile int32_t t192 = -36421850;
int64_t x814 = -1LL;
int32_t x815 = -1;
int32_t x818 = -1;
uint64_t x819 = UINT64_MAX;
volatile int64_t x824 = -489085969733357LL;
int16_t x834 = INT16_MIN;


void f0(void) {
    	volatile int32_t x1 = -214787;
	static uint16_t x2 = 9U;
	int8_t x3 = INT8_MIN;
	static volatile int32_t t0 = -12891;

    t0 = (x1|((x2/x3)!=x4));

    if (t0 != -214787) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -106389473LL;
	int32_t x7 = -115176916;
	int64_t x8 = -677LL;

    t1 = (x5|((x6/x7)!=x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 18U;
	static int64_t x10 = INT64_MIN;
	static int32_t x11 = INT32_MAX;
	static int32_t x12 = 56455;
	static int32_t t2 = 49807;

    t2 = (x9|((x10/x11)!=x12));

    if (t2 != 19) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 1U;
	static uint16_t x14 = 5497U;
	int32_t x15 = 984868;
	static int64_t x16 = -5682323306LL;
	volatile int32_t t3 = -64334;

    t3 = (x13|((x14/x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x17 = UINT8_MAX;
	static int16_t x18 = -1062;
	uint16_t x19 = 3274U;
	static volatile uint32_t x20 = 28U;
	int32_t t4 = 3382;

    t4 = (x17|((x18/x19)!=x20));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = -1;
	static volatile int32_t t5 = -362;

    t5 = (x21|((x22/x23)!=x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int32_t x30 = INT32_MAX;
	uint64_t x31 = 1940LLU;
	uint16_t x32 = 565U;

    t6 = (x29|((x30/x31)!=x32));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 7111U;
	int16_t x34 = -40;
	static volatile int64_t x36 = -16710LL;
	static volatile int32_t t7 = 5;

    t7 = (x33|((x34/x35)!=x36));

    if (t7 != 7111) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	int8_t x38 = INT8_MIN;
	static int32_t x39 = -12;
	volatile uint64_t t8 = UINT64_MAX;

    t8 = (x37|((x38/x39)!=x40));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	int8_t x42 = 0;
	uint64_t x43 = 1LLU;
	static int8_t x44 = INT8_MIN;
	static int32_t t9 = 1;

    t9 = (x41|((x42/x43)!=x44));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 6U;
	uint16_t x47 = 28165U;
	int32_t t10 = 4;

    t10 = (x45|((x46/x47)!=x48));

    if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = 21;
	volatile uint32_t x50 = UINT32_MAX;
	static int16_t x51 = INT16_MAX;
	int32_t x52 = 68024235;
	int32_t t11 = 112543;

    t11 = (x49|((x50/x51)!=x52));

    if (t11 != 21) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x53 = 2117U;
	int64_t x54 = INT64_MIN;
	static volatile uint64_t x55 = 65960767093LLU;
	volatile int64_t x56 = -1LL;
	volatile int32_t t12 = 618;

    t12 = (x53|((x54/x55)!=x56));

    if (t12 != 2117) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MAX;
	static uint32_t x59 = UINT32_MAX;
	uint8_t x60 = 24U;

    t13 = (x57|((x58/x59)!=x60));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x63 = UINT16_MAX;
	volatile int64_t x64 = 670433977866947LL;
	static volatile int32_t t14 = 245;

    t14 = (x61|((x62/x63)!=x64));

    if (t14 != 1035) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -1;
	int8_t x66 = -2;
	uint16_t x68 = 19263U;
	int32_t t15 = -100;

    t15 = (x65|((x66/x67)!=x68));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = INT64_MAX;
	uint64_t x70 = 328117275LLU;
	uint16_t x72 = 92U;
	static int64_t t16 = INT64_MAX;

    t16 = (x69|((x70/x71)!=x72));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	volatile uint8_t x74 = 2U;
	uint8_t x76 = UINT8_MAX;

    t17 = (x73|((x74/x75)!=x76));

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = INT8_MIN;
	static uint32_t x78 = 130504940U;
	int64_t x79 = -1LL;
	uint16_t x80 = 13109U;
	int32_t t18 = -16466273;

    t18 = (x77|((x78/x79)!=x80));

    if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MAX;
	static volatile uint32_t x84 = 1U;
	int32_t t19 = -10342;

    t19 = (x81|((x82/x83)!=x84));

    if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 90U;
	int8_t x86 = 3;
	uint64_t x88 = 33LLU;
	static int32_t t20 = 805089;

    t20 = (x85|((x86/x87)!=x88));

    if (t20 != 91) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	int16_t x90 = -1;
	volatile int8_t x91 = -1;
	int8_t x92 = 46;

    t21 = (x89|((x90/x91)!=x92));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x93 = 26LLU;
	uint8_t x94 = 4U;
	static int64_t x95 = INT64_MAX;
	uint64_t x96 = 45LLU;
	volatile uint64_t t22 = 223LLU;

    t22 = (x93|((x94/x95)!=x96));

    if (t22 != 27LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = UINT16_MAX;
	static int8_t x99 = -1;
	int64_t x100 = -6090LL;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (x97|((x98/x99)!=x100));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 14859U;
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = 25963U;
	int16_t x104 = INT16_MIN;

    t24 = (x101|((x102/x103)!=x104));

    if (t24 != 14859U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 0U;
	uint32_t x107 = 2U;
	int32_t x108 = -3565215;
	static volatile uint32_t t25 = 957691U;

    t25 = (x105|((x106/x107)!=x108));

    if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	static int8_t x111 = INT8_MIN;
	volatile int32_t t26 = -1;

    t26 = (x109|((x110/x111)!=x112));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = 77662844;
	volatile int16_t x114 = INT16_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	static int16_t x116 = -1;
	static int32_t t27 = -45082210;

    t27 = (x113|((x114/x115)!=x116));

    if (t27 != 77662845) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MAX;
	int32_t x119 = -977830759;
	int8_t x120 = INT8_MAX;

    t28 = (x117|((x118/x119)!=x120));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x122 = UINT32_MAX;
	uint16_t x123 = 57U;
	static int32_t t29 = 12;

    t29 = (x121|((x122/x123)!=x124));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x125 = INT16_MAX;
	int8_t x126 = 42;
	volatile int32_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int32_t t30 = 0;

    t30 = (x125|((x126/x127)!=x128));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MIN;
	int8_t x130 = 22;
	static int16_t x131 = -1;
	int64_t t31 = 3127LL;

    t31 = (x129|((x130/x131)!=x132));

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = 127094395572LL;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t32 = 322707;

    t32 = (x133|((x134/x135)!=x136));

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	int16_t x138 = -1;
	int64_t x139 = -5LL;
	int16_t x140 = INT16_MAX;
	volatile int32_t t33 = -279157;

    t33 = (x137|((x138/x139)!=x140));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = 994810LL;
	int64_t x143 = INT64_MIN;
	static uint64_t x144 = 6937858021LLU;
	int32_t t34 = 13;

    t34 = (x141|((x142/x143)!=x144));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	volatile int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t35 = -4;

    t35 = (x145|((x146/x147)!=x148));

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x149 = INT64_MIN;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MAX;
	static uint16_t x152 = 0U;

    t36 = (x149|((x150/x151)!=x152));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	uint32_t x156 = 54101U;
	volatile int32_t t37 = 4922;

    t37 = (x153|((x154/x155)!=x156));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x159 = -1;
	static int64_t x160 = INT64_MIN;

    t38 = (x157|((x158/x159)!=x160));

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -1LL;
	int32_t x162 = 39;
	int32_t x163 = INT32_MIN;
	int64_t x164 = -1LL;
	volatile int64_t t39 = -221402854366LL;

    t39 = (x161|((x162/x163)!=x164));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x165 = INT32_MAX;
	int8_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	int64_t x168 = -13890316669043144LL;
	volatile int32_t t40 = INT32_MAX;

    t40 = (x165|((x166/x167)!=x168));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = -246925012;
	volatile int64_t x170 = 259790195LL;
	uint16_t x172 = UINT16_MAX;
	int32_t t41 = -6;

    t41 = (x169|((x170/x171)!=x172));

    if (t41 != -246925011) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -82241979;
	int8_t x174 = -1;
	volatile int16_t x175 = -1;
	int32_t t42 = 0;

    t42 = (x173|((x174/x175)!=x176));

    if (t42 != -82241979) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x190 = INT16_MAX;
	uint64_t x191 = 17652825694LLU;
	int32_t x192 = INT32_MIN;
	volatile int32_t t43 = -7;

    t43 = (x189|((x190/x191)!=x192));

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = INT32_MIN;
	volatile int16_t x194 = 583;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MIN;
	int32_t t44 = -513320286;

    t44 = (x193|((x194/x195)!=x196));

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x197 = -1LL;
	uint16_t x198 = 14U;
	int32_t x200 = 4151361;
	static volatile int64_t t45 = -4263964LL;

    t45 = (x197|((x198/x199)!=x200));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MAX;
	int8_t x203 = -3;
	int16_t x204 = 56;
	int32_t t46 = 201;

    t46 = (x201|((x202/x203)!=x204));

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x205 = INT16_MIN;
	static volatile uint32_t x206 = 1002737U;
	static int8_t x207 = 1;

    t47 = (x205|((x206/x207)!=x208));

    if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x210 = 14344U;
	volatile int32_t x211 = INT32_MIN;
	int64_t x212 = -22178556285LL;

    t48 = (x209|((x210/x211)!=x212));

    if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = -1;
	int8_t x214 = 0;
	volatile int16_t x215 = INT16_MAX;
	static int32_t x216 = 669110;
	int32_t t49 = -2328187;

    t49 = (x213|((x214/x215)!=x216));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x217 = -1;
	static uint32_t x218 = UINT32_MAX;
	uint8_t x220 = 15U;

    t50 = (x217|((x218/x219)!=x220));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	volatile int32_t t51 = -3043514;

    t51 = (x221|((x222/x223)!=x224));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MAX;
	int16_t x226 = INT16_MIN;
	static uint64_t x227 = UINT64_MAX;
	static int64_t x228 = 214386026LL;

    t52 = (x225|((x226/x227)!=x228));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = 1644592LL;
	int8_t x230 = -1;
	uint64_t x231 = 8240698896791393LLU;
	int8_t x232 = INT8_MAX;
	int64_t t53 = -4249032584153LL;

    t53 = (x229|((x230/x231)!=x232));

    if (t53 != 1644593LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint32_t x235 = 55624409U;
	uint8_t x236 = 51U;
	static int32_t t54 = -118196;

    t54 = (x233|((x234/x235)!=x236));

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x237 = INT32_MAX;
	int32_t x238 = -1;
	int16_t x239 = 6235;
	uint8_t x240 = 22U;

    t55 = (x237|((x238/x239)!=x240));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x242 = -1;
	int64_t x243 = -1LL;
	int16_t x244 = 5114;
	volatile uint64_t t56 = 448117826634265067LLU;

    t56 = (x241|((x242/x243)!=x244));

    if (t56 != 15LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x245 = -25;
	int64_t x246 = INT64_MAX;
	int64_t x247 = -11918612990724LL;
	uint64_t x248 = 2LLU;
	int32_t t57 = -1402;

    t57 = (x245|((x246/x247)!=x248));

    if (t57 != -25) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x249 = -1;
	uint8_t x250 = 15U;
	int32_t x251 = 5;
	volatile int32_t x252 = -104610947;
	volatile int32_t t58 = -3;

    t58 = (x249|((x250/x251)!=x252));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -1LL;
	int8_t x254 = -5;
	static int8_t x255 = 1;
	int8_t x256 = INT8_MIN;
	int64_t t59 = -2093LL;

    t59 = (x253|((x254/x255)!=x256));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int16_t x264 = 3808;
	volatile int32_t t60 = 24702;

    t60 = (x261|((x262/x263)!=x264));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = 1171U;
	int16_t x266 = -4;
	volatile uint32_t t61 = 19U;

    t61 = (x265|((x266/x267)!=x268));

    if (t61 != 1171U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = -1LL;
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	static uint32_t x272 = UINT32_MAX;

    t62 = (x269|((x270/x271)!=x272));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = INT16_MIN;
	uint16_t x276 = 36U;
	volatile int32_t t63 = 12;

    t63 = (x273|((x274/x275)!=x276));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x280 = INT16_MAX;
	static int32_t t64 = 35167;

    t64 = (x277|((x278/x279)!=x280));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = INT8_MIN;
	int32_t x282 = -1;
	static int32_t x283 = -123311391;
	static int32_t x284 = -1;
	volatile int32_t t65 = -5;

    t65 = (x281|((x282/x283)!=x284));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x285 = 8U;
	uint64_t x286 = 303LLU;
	int32_t x287 = -1;
	uint32_t t66 = 376352U;

    t66 = (x285|((x286/x287)!=x288));

    if (t66 != 9U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	volatile int8_t x292 = -23;
	static uint32_t t67 = UINT32_MAX;

    t67 = (x289|((x290/x291)!=x292));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x295 = -1LL;
	static int64_t x296 = -7258626751787LL;
	int64_t t68 = -67906LL;

    t68 = (x293|((x294/x295)!=x296));

    if (t68 != 3431303004349LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x298 = -250;
	static int16_t x299 = -496;
	int32_t x300 = -1;

    t69 = (x297|((x298/x299)!=x300));

    if (t69 != 26880887177493497LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x301 = UINT8_MAX;
	volatile uint16_t x302 = UINT16_MAX;
	int16_t x303 = -1;
	int32_t x304 = -1;
	int32_t t70 = 354891;

    t70 = (x301|((x302/x303)!=x304));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x305 = 1799U;
	uint8_t x306 = UINT8_MAX;
	volatile int32_t t71 = 1998083;

    t71 = (x305|((x306/x307)!=x308));

    if (t71 != 1799) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = -947072887;
	volatile int64_t x311 = -660006326LL;
	uint16_t x312 = 29497U;

    t72 = (x309|((x310/x311)!=x312));

    if (t72 != -947072887) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x313 = UINT64_MAX;
	static int32_t x314 = INT32_MAX;
	int64_t x316 = -1LL;

    t73 = (x313|((x314/x315)!=x316));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x317 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 9U;
	uint32_t t74 = UINT32_MAX;

    t74 = (x317|((x318/x319)!=x320));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x321 = 1U;
	int32_t x323 = -1;
	int64_t x324 = INT64_MIN;
	int32_t t75 = -846185;

    t75 = (x321|((x322/x323)!=x324));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x325 = -1;
	static uint32_t x326 = 1995U;
	int32_t x328 = -1;
	static int32_t t76 = 726420;

    t76 = (x325|((x326/x327)!=x328));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x329 = 1;
	int16_t x332 = INT16_MIN;
	int32_t t77 = -14204629;

    t77 = (x329|((x330/x331)!=x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x333 = 3990LL;
	static int8_t x335 = INT8_MAX;
	int32_t x336 = INT32_MAX;
	int64_t t78 = 117186326LL;

    t78 = (x333|((x334/x335)!=x336));

    if (t78 != 3991LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x337 = 6U;
	int16_t x339 = INT16_MIN;
	static int32_t t79 = 46565;

    t79 = (x337|((x338/x339)!=x340));

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x342 = 15622;
	static volatile uint16_t x344 = 158U;
	volatile int32_t t80 = -1842372;

    t80 = (x341|((x342/x343)!=x344));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = -794;
	uint16_t x347 = 250U;
	static volatile int32_t t81 = 10457400;

    t81 = (x345|((x346/x347)!=x348));

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	uint16_t x352 = UINT16_MAX;
	int64_t t82 = 334513178297682313LL;

    t82 = (x349|((x350/x351)!=x352));

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = -1;
	volatile uint64_t x354 = 96243154270LLU;
	static int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t83 = -63;

    t83 = (x353|((x354/x355)!=x356));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x357 = UINT8_MAX;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = -1LL;
	int32_t t84 = 404399;

    t84 = (x357|((x358/x359)!=x360));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x361 = -61;
	uint8_t x362 = 1U;
	volatile uint64_t x363 = UINT64_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t85 = 3341361;

    t85 = (x361|((x362/x363)!=x364));

    if (t85 != -61) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MAX;
	int32_t x367 = 60008102;
	volatile int8_t x368 = -1;
	static uint32_t t86 = UINT32_MAX;

    t86 = (x365|((x366/x367)!=x368));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x373 = INT64_MAX;
	static int8_t x374 = 13;
	uint32_t x375 = UINT32_MAX;
	static int8_t x376 = 31;
	int64_t t87 = INT64_MAX;

    t87 = (x373|((x374/x375)!=x376));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x377 = 1314U;
	volatile int16_t x379 = INT16_MAX;
	int64_t x380 = -105902304804937577LL;
	static volatile int32_t t88 = -206753;

    t88 = (x377|((x378/x379)!=x380));

    if (t88 != 1315) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x382 = -1227195081490284984LL;
	int16_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	uint32_t t89 = 298U;

    t89 = (x381|((x382/x383)!=x384));

    if (t89 != 249U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x386 = 1033092607LL;
	volatile uint8_t x387 = UINT8_MAX;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t90 = 6427;

    t90 = (x385|((x386/x387)!=x388));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = -1;
	static uint8_t x391 = UINT8_MAX;
	int16_t x392 = 1;
	volatile int32_t t91 = -2;

    t91 = (x389|((x390/x391)!=x392));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x393 = 10830U;
	static volatile int8_t x394 = INT8_MAX;
	uint16_t x395 = 4660U;
	uint16_t x396 = UINT16_MAX;

    t92 = (x393|((x394/x395)!=x396));

    if (t92 != 10831) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x397 = 6751U;
	volatile uint64_t x398 = UINT64_MAX;
	uint8_t x399 = 26U;
	int8_t x400 = INT8_MIN;
	static uint32_t t93 = 100142U;

    t93 = (x397|((x398/x399)!=x400));

    if (t93 != 6751U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x401 = INT8_MIN;
	uint8_t x402 = 2U;
	int64_t x403 = INT64_MIN;
	uint64_t x404 = 142329964632LLU;
	int32_t t94 = 8;

    t94 = (x401|((x402/x403)!=x404));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x406 = 1316428380U;
	uint32_t x407 = 1U;
	uint32_t x408 = 4014669U;

    t95 = (x405|((x406/x407)!=x408));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x409 = INT16_MAX;
	static int16_t x410 = INT16_MAX;
	int64_t x411 = -1LL;
	uint16_t x412 = UINT16_MAX;

    t96 = (x409|((x410/x411)!=x412));

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MAX;
	static int8_t x416 = -1;
	volatile int32_t t97 = 116715;

    t97 = (x413|((x414/x415)!=x416));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x417 = -2414746LL;
	uint32_t x418 = 1454517U;
	int32_t x419 = -143;
	int64_t x420 = INT64_MIN;
	static int64_t t98 = 29306529447956828LL;

    t98 = (x417|((x418/x419)!=x420));

    if (t98 != -2414745LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x423 = INT64_MAX;
	int16_t x424 = -1997;
	volatile int32_t t99 = -2873;

    t99 = (x421|((x422/x423)!=x424));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = INT8_MIN;
	static int32_t t100 = 23;

    t100 = (x425|((x426/x427)!=x428));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x429 = INT64_MAX;
	int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile int64_t t101 = INT64_MAX;

    t101 = (x429|((x430/x431)!=x432));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MIN;
	volatile uint32_t x435 = 26863U;
	int32_t t102 = -1058;

    t102 = (x433|((x434/x435)!=x436));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = INT64_MAX;
	uint8_t x438 = 1U;
	static int8_t x439 = INT8_MIN;
	int64_t x440 = -239872741187485738LL;
	volatile int64_t t103 = INT64_MAX;

    t103 = (x437|((x438/x439)!=x440));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x442 = 8U;
	volatile int16_t x443 = -223;
	int16_t x444 = INT16_MIN;
	static int32_t t104 = 509;

    t104 = (x441|((x442/x443)!=x444));

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t t105 = 0;

    t105 = (x445|((x446/x447)!=x448));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x449 = INT64_MIN;
	static uint64_t x450 = UINT64_MAX;
	int64_t x451 = 646392LL;
	static volatile int64_t x452 = INT64_MIN;

    t106 = (x449|((x450/x451)!=x452));

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x453 = UINT16_MAX;
	int8_t x454 = 0;
	int64_t x455 = INT64_MIN;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t107 = 1;

    t107 = (x453|((x454/x455)!=x456));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = 16199297512520LL;
	int32_t x458 = 30917;
	uint32_t x459 = 510U;
	int16_t x460 = 11875;
	int64_t t108 = -15918999594157267LL;

    t108 = (x457|((x458/x459)!=x460));

    if (t108 != 16199297512521LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x461 = INT32_MIN;
	volatile int32_t x463 = -1;
	int8_t x464 = -1;
	int32_t t109 = 106;

    t109 = (x461|((x462/x463)!=x464));

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x465 = -1;
	int16_t x466 = -1;
	int64_t x467 = INT64_MIN;
	int32_t t110 = -1554;

    t110 = (x465|((x466/x467)!=x468));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x469 = 6428;
	int8_t x470 = INT8_MAX;
	int32_t x471 = -5407699;
	int64_t x472 = INT64_MIN;
	volatile int32_t t111 = 25551411;

    t111 = (x469|((x470/x471)!=x472));

    if (t111 != 6429) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x473 = INT8_MIN;
	static int8_t x474 = -1;
	uint32_t x475 = 1907U;
	int8_t x476 = INT8_MAX;
	volatile int32_t t112 = -103142;

    t112 = (x473|((x474/x475)!=x476));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x479 = 3407;
	uint16_t x480 = 1908U;
	volatile int32_t t113 = 845;

    t113 = (x477|((x478/x479)!=x480));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = -1LL;
	volatile int16_t x482 = INT16_MAX;
	volatile int64_t t114 = 1070LL;

    t114 = (x481|((x482/x483)!=x484));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x485 = -1LL;
	int16_t x486 = -4166;
	int32_t x487 = 42;
	int16_t x488 = INT16_MAX;
	static int64_t t115 = -11LL;

    t115 = (x485|((x486/x487)!=x488));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x489 = 19U;
	int64_t x490 = INT64_MAX;
	uint16_t x492 = UINT16_MAX;

    t116 = (x489|((x490/x491)!=x492));

    if (t116 != 19U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = -1;
	volatile int64_t x495 = -2162359605LL;
	static int8_t x496 = INT8_MIN;
	int32_t t117 = -12834194;

    t117 = (x493|((x494/x495)!=x496));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = -1LL;
	volatile int16_t x498 = -1;
	int8_t x499 = INT8_MIN;

    t118 = (x497|((x498/x499)!=x500));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x501 = 28U;
	static int16_t x502 = 6;
	uint8_t x503 = 1U;
	int8_t x504 = INT8_MIN;
	volatile int32_t t119 = -4154;

    t119 = (x501|((x502/x503)!=x504));

    if (t119 != 29) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x505 = -1;
	int32_t x506 = INT32_MIN;
	int64_t x507 = 9004452857571140LL;
	static volatile int8_t x508 = INT8_MIN;
	volatile int32_t t120 = 18934;

    t120 = (x505|((x506/x507)!=x508));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x509 = 101056U;
	volatile uint8_t x510 = 0U;
	int64_t x511 = INT64_MIN;
	static int32_t x512 = INT32_MIN;
	uint32_t t121 = 77U;

    t121 = (x509|((x510/x511)!=x512));

    if (t121 != 101057U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	uint8_t x514 = 1U;
	static int32_t x515 = -1;
	int16_t x516 = INT16_MAX;
	int32_t t122 = 15;

    t122 = (x513|((x514/x515)!=x516));

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x517 = 847137165211557297LLU;
	volatile int32_t x518 = 1;
	static volatile int16_t x519 = INT16_MAX;
	uint16_t x520 = 1U;
	volatile uint64_t t123 = 162964156900LLU;

    t123 = (x517|((x518/x519)!=x520));

    if (t123 != 847137165211557297LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x522 = -1;
	int64_t x523 = -1LL;
	uint64_t x524 = 50567552871149LLU;
	static int64_t t124 = INT64_MAX;

    t124 = (x521|((x522/x523)!=x524));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x527 = 389650117;
	volatile uint16_t x528 = 13U;
	uint32_t t125 = 0U;

    t125 = (x525|((x526/x527)!=x528));

    if (t125 != 116323U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x530 = -5;
	int8_t x532 = 0;
	int32_t t126 = 132359037;

    t126 = (x529|((x530/x531)!=x532));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x534 = 715477U;
	volatile uint8_t x535 = UINT8_MAX;
	int32_t x536 = INT32_MIN;

    t127 = (x533|((x534/x535)!=x536));

    if (t127 != 881055507) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MIN;
	uint16_t x538 = 63U;
	uint64_t x539 = UINT64_MAX;
	int64_t t128 = -299383LL;

    t128 = (x537|((x538/x539)!=x540));

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x541 = 1U;
	int64_t x542 = -1LL;
	static uint16_t x543 = 27U;
	static int64_t x544 = INT64_MIN;
	static volatile int32_t t129 = -304001529;

    t129 = (x541|((x542/x543)!=x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x545 = -1;
	int8_t x546 = 1;
	static uint64_t x547 = 20250105LLU;
	volatile int16_t x548 = INT16_MIN;
	static volatile int32_t t130 = -7167853;

    t130 = (x545|((x546/x547)!=x548));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x549 = 7;
	static uint64_t x550 = UINT64_MAX;
	int32_t x551 = INT32_MIN;
	int16_t x552 = -1;
	volatile int32_t t131 = 3909;

    t131 = (x549|((x550/x551)!=x552));

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MIN;
	int16_t x555 = -1;
	int16_t x556 = -1;
	int64_t t132 = 2LL;

    t132 = (x553|((x554/x555)!=x556));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x557 = -1;
	uint16_t x558 = UINT16_MAX;
	volatile int32_t t133 = 91;

    t133 = (x557|((x558/x559)!=x560));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x561 = INT64_MIN;
	int16_t x562 = -1008;
	int32_t x564 = -125071578;
	static volatile int64_t t134 = -114022929506LL;

    t134 = (x561|((x562/x563)!=x564));

    if (t134 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x565 = 0U;
	static int64_t x566 = INT64_MIN;
	static volatile int64_t x568 = -1028LL;
	volatile int32_t t135 = -10311038;

    t135 = (x565|((x566/x567)!=x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x570 = 33;
	volatile int64_t t136 = 88301049LL;

    t136 = (x569|((x570/x571)!=x572));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x573 = INT64_MAX;
	uint32_t x574 = UINT32_MAX;
	int64_t x575 = -13293715967769538LL;
	int8_t x576 = -1;
	int64_t t137 = INT64_MAX;

    t137 = (x573|((x574/x575)!=x576));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x577 = INT16_MAX;
	int32_t x578 = 336402;
	volatile uint16_t x579 = UINT16_MAX;
	int16_t x580 = 2;

    t138 = (x577|((x578/x579)!=x580));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x581 = -1LL;
	volatile uint8_t x582 = 11U;
	volatile int8_t x583 = INT8_MIN;
	int64_t t139 = 25327920272699LL;

    t139 = (x581|((x582/x583)!=x584));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 1192U;
	uint64_t x586 = 9922625804473277LLU;
	int32_t x587 = -3320376;
	volatile int32_t x588 = -1;

    t140 = (x585|((x586/x587)!=x588));

    if (t140 != 1193) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = -2477288385823685LL;
	uint16_t x590 = 6U;
	static int32_t x591 = -1;
	uint64_t x592 = UINT64_MAX;

    t141 = (x589|((x590/x591)!=x592));

    if (t141 != -2477288385823685LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x593 = INT32_MIN;
	static int16_t x594 = 526;
	int64_t x595 = INT64_MIN;
	int16_t x596 = -1;
	volatile int32_t t142 = 28264;

    t142 = (x593|((x594/x595)!=x596));

    if (t142 != -2147483647) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x597 = INT32_MAX;
	int64_t x598 = 16029228LL;
	int32_t t143 = INT32_MAX;

    t143 = (x597|((x598/x599)!=x600));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x601 = INT8_MIN;
	int16_t x602 = INT16_MIN;
	uint8_t x603 = 9U;
	volatile int32_t t144 = 95;

    t144 = (x601|((x602/x603)!=x604));

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x605 = INT8_MIN;
	int16_t x606 = INT16_MIN;
	volatile int32_t t145 = 6;

    t145 = (x605|((x606/x607)!=x608));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x610 = INT8_MIN;
	volatile uint32_t x611 = UINT32_MAX;
	int32_t x612 = -391;
	volatile uint32_t t146 = 173U;

    t146 = (x609|((x610/x611)!=x612));

    if (t146 != 16130391U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x613 = UINT64_MAX;
	int32_t x614 = 1;
	uint32_t x615 = 1381267880U;
	static int16_t x616 = -1;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = (x613|((x614/x615)!=x616));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x618 = 1914770U;
	static uint32_t x620 = 107163U;
	static int32_t t148 = -228447;

    t148 = (x617|((x618/x619)!=x620));

    if (t148 != 21) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x621 = 231U;
	int8_t x622 = INT8_MIN;
	volatile int16_t x623 = INT16_MAX;
	int32_t x624 = 1;
	uint32_t t149 = 2U;

    t149 = (x621|((x622/x623)!=x624));

    if (t149 != 231U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x626 = INT8_MIN;
	int16_t x627 = INT16_MAX;
	int32_t t150 = 1571379;

    t150 = (x625|((x626/x627)!=x628));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x629 = 330491U;
	int16_t x630 = INT16_MAX;
	int32_t x632 = INT32_MIN;
	volatile uint32_t t151 = 3U;

    t151 = (x629|((x630/x631)!=x632));

    if (t151 != 330491U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x634 = 2LL;
	int64_t x636 = INT64_MIN;
	int64_t t152 = -333231980LL;

    t152 = (x633|((x634/x635)!=x636));

    if (t152 != 905399463001268813LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x637 = INT8_MAX;
	uint8_t x638 = UINT8_MAX;
	uint32_t x639 = 3U;
	volatile uint16_t x640 = 22U;
	volatile int32_t t153 = 206023;

    t153 = (x637|((x638/x639)!=x640));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x642 = 505226895618028LLU;
	int64_t x644 = 53872309959381LL;
	int32_t t154 = 98421997;

    t154 = (x641|((x642/x643)!=x644));

    if (t154 != -76137817) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x645 = -1LL;
	volatile uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MIN;
	uint16_t x648 = UINT16_MAX;

    t155 = (x645|((x646/x647)!=x648));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x649 = INT64_MIN;
	uint16_t x650 = 315U;
	int64_t x651 = 1937258976465327216LL;
	static int32_t x652 = INT32_MAX;
	volatile int64_t t156 = 2112954LL;

    t156 = (x649|((x650/x651)!=x652));

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x653 = INT8_MIN;
	int8_t x654 = INT8_MAX;
	int64_t x655 = INT64_MIN;
	static volatile uint64_t x656 = 189417707597LLU;
	volatile int32_t t157 = 35;

    t157 = (x653|((x654/x655)!=x656));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x657 = INT32_MAX;
	uint8_t x658 = 36U;
	uint16_t x659 = 11U;
	volatile int64_t x660 = INT64_MIN;
	int32_t t158 = INT32_MAX;

    t158 = (x657|((x658/x659)!=x660));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = -1;
	int8_t x663 = INT8_MIN;
	volatile uint64_t x664 = 2113648843LLU;
	int32_t t159 = 23138269;

    t159 = (x661|((x662/x663)!=x664));

    if (t159 != -127) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x665 = -9454677;
	int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MAX;
	int32_t x668 = 124192;
	volatile int32_t t160 = 515812290;

    t160 = (x665|((x666/x667)!=x668));

    if (t160 != -9454677) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x673 = 4293691737682LL;
	int8_t x676 = 7;
	volatile int64_t t161 = -26674205182523830LL;

    t161 = (x673|((x674/x675)!=x676));

    if (t161 != 4293691737683LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x677 = INT32_MIN;
	uint32_t x678 = 44001305U;
	static uint16_t x679 = 13734U;
	volatile int32_t t162 = 44;

    t162 = (x677|((x678/x679)!=x680));

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x682 = 2;

    t163 = (x681|((x682/x683)!=x684));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x685 = INT16_MIN;
	uint64_t x686 = 1363LLU;
	int16_t x687 = 1;
	volatile int32_t t164 = 1040959;

    t164 = (x685|((x686/x687)!=x688));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x689 = 102376059688LLU;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = INT16_MIN;
	volatile uint64_t t165 = 116856128LLU;

    t165 = (x689|((x690/x691)!=x692));

    if (t165 != 102376059689LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x693 = INT64_MAX;
	uint8_t x695 = 61U;
	int16_t x696 = -1;
	int64_t t166 = INT64_MAX;

    t166 = (x693|((x694/x695)!=x696));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = 0;
	static int32_t x698 = INT32_MAX;
	static int16_t x700 = -1;
	int32_t t167 = 0;

    t167 = (x697|((x698/x699)!=x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x701 = UINT16_MAX;
	uint64_t x702 = 7554681565LLU;
	volatile uint16_t x703 = 14U;
	int16_t x704 = INT16_MIN;
	volatile int32_t t168 = -7311039;

    t168 = (x701|((x702/x703)!=x704));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x705 = 3U;
	volatile int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t169 = -229017;

    t169 = (x705|((x706/x707)!=x708));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 1U;
	int32_t x712 = INT32_MIN;

    t170 = (x709|((x710/x711)!=x712));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MIN;
	volatile uint16_t x714 = UINT16_MAX;
	int64_t x715 = INT64_MAX;
	volatile int64_t t171 = -994894655114482731LL;

    t171 = (x713|((x714/x715)!=x716));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x717 = INT16_MIN;
	uint8_t x719 = 64U;
	static volatile int32_t x720 = INT32_MAX;
	static int32_t t172 = -11;

    t172 = (x717|((x718/x719)!=x720));

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x722 = 2U;
	volatile int8_t x723 = INT8_MAX;
	volatile int32_t x724 = INT32_MIN;
	static int32_t t173 = -11339597;

    t173 = (x721|((x722/x723)!=x724));

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x725 = -6127;
	int16_t x726 = -1;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	static volatile int32_t t174 = -522233;

    t174 = (x725|((x726/x727)!=x728));

    if (t174 != -6127) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x734 = INT8_MIN;
	uint32_t x735 = UINT32_MAX;
	volatile int32_t x736 = INT32_MIN;
	static int32_t t175 = -413039;

    t175 = (x733|((x734/x735)!=x736));

    if (t175 != -23) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x737 = 2837830189021633459LLU;
	int32_t x738 = INT32_MIN;
	uint8_t x739 = 4U;
	uint8_t x740 = 36U;

    t176 = (x737|((x738/x739)!=x740));

    if (t176 != 2837830189021633459LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x741 = INT32_MIN;
	volatile int32_t x742 = -799249;
	volatile int64_t x743 = 1643LL;
	uint8_t x744 = UINT8_MAX;
	int32_t t177 = 18133;

    t177 = (x741|((x742/x743)!=x744));

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x745 = -4;
	uint8_t x746 = 0U;
	uint8_t x747 = 63U;
	int64_t x748 = 30735159LL;
	static volatile int32_t t178 = -6;

    t178 = (x745|((x746/x747)!=x748));

    if (t178 != -3) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x749 = -1;
	int64_t x751 = INT64_MIN;
	int32_t t179 = 54;

    t179 = (x749|((x750/x751)!=x752));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x753 = -1;
	int64_t x754 = -2224316750631629LL;
	uint32_t x755 = UINT32_MAX;
	int64_t x756 = 18301561881507836LL;

    t180 = (x753|((x754/x755)!=x756));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x757 = INT64_MAX;
	int64_t x759 = -253061915069LL;
	volatile int64_t x760 = INT64_MIN;
	int64_t t181 = INT64_MAX;

    t181 = (x757|((x758/x759)!=x760));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x761 = 19U;
	int16_t x762 = INT16_MIN;
	static uint64_t x763 = UINT64_MAX;
	int8_t x764 = INT8_MIN;
	volatile int32_t t182 = 1918;

    t182 = (x761|((x762/x763)!=x764));

    if (t182 != 19) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x765 = INT16_MIN;
	int16_t x766 = INT16_MIN;
	int8_t x767 = INT8_MIN;
	int32_t t183 = -3707;

    t183 = (x765|((x766/x767)!=x768));

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	uint16_t x770 = UINT16_MAX;
	int8_t x772 = INT8_MAX;
	uint64_t t184 = UINT64_MAX;

    t184 = (x769|((x770/x771)!=x772));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x777 = -1;
	int32_t x779 = INT32_MIN;
	int8_t x780 = -1;
	volatile int32_t t185 = 18825;

    t185 = (x777|((x778/x779)!=x780));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x782 = UINT16_MAX;
	static int8_t x783 = INT8_MIN;
	static volatile int64_t t186 = 20546674250287708LL;

    t186 = (x781|((x782/x783)!=x784));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x786 = UINT8_MAX;
	uint8_t x787 = 1U;
	int32_t t187 = -67;

    t187 = (x785|((x786/x787)!=x788));

    if (t187 != -3) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x790 = 0;
	int16_t x791 = -6;
	static int32_t x792 = INT32_MIN;
	int32_t t188 = INT32_MAX;

    t188 = (x789|((x790/x791)!=x792));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x794 = 6U;
	int32_t x795 = 1026415818;
	int64_t t189 = 1LL;

    t189 = (x793|((x794/x795)!=x796));

    if (t189 != 109901LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x797 = -1;
	static int16_t x798 = INT16_MIN;
	int64_t x799 = INT64_MIN;
	uint16_t x800 = 30U;
	int32_t t190 = -25389;

    t190 = (x797|((x798/x799)!=x800));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x802 = 2437U;
	uint8_t x803 = 15U;
	uint64_t t191 = 8012496850LLU;

    t191 = (x801|((x802/x803)!=x804));

    if (t191 != 48367LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x806 = 9U;

    t192 = (x805|((x806/x807)!=x808));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x809 = UINT32_MAX;
	int16_t x810 = -13;
	static int32_t x811 = -1;
	uint64_t x812 = 80LLU;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = (x809|((x810/x811)!=x812));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x813 = 1U;
	int16_t x816 = INT16_MIN;
	int32_t t194 = -151035;

    t194 = (x813|((x814/x815)!=x816));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x817 = UINT64_MAX;
	uint8_t x820 = UINT8_MAX;
	uint64_t t195 = UINT64_MAX;

    t195 = (x817|((x818/x819)!=x820));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x821 = 598U;
	uint64_t x822 = 58218LLU;
	static int64_t x823 = 8070444251LL;
	uint32_t t196 = 10U;

    t196 = (x821|((x822/x823)!=x824));

    if (t196 != 599U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x825 = INT16_MAX;
	int16_t x826 = INT16_MIN;
	volatile int8_t x827 = INT8_MAX;
	int32_t x828 = -1;
	static volatile int32_t t197 = 62;

    t197 = (x825|((x826/x827)!=x828));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x829 = -1;
	volatile int16_t x830 = -1;
	volatile int32_t x831 = INT32_MIN;
	uint32_t x832 = 55U;
	int32_t t198 = 929103167;

    t198 = (x829|((x830/x831)!=x832));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x833 = 1291387640452LLU;
	uint8_t x835 = 3U;
	static uint8_t x836 = 0U;
	uint64_t t199 = 15LLU;

    t199 = (x833|((x834/x835)!=x836));

    if (t199 != 1291387640453LLU) { NG(); } else { ; }
	
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

