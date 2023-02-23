
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

static volatile int32_t x3 = INT32_MIN;
int32_t x5 = INT32_MIN;
volatile int16_t x7 = INT16_MAX;
uint64_t x10 = UINT64_MAX;
volatile int16_t x14 = INT16_MIN;
volatile int32_t t3 = -537053882;
int64_t x21 = 90LL;
int32_t t5 = 1426;
static int32_t x37 = -52312976;
uint8_t x45 = 42U;
uint16_t x49 = 2U;
uint64_t x51 = 795978762547LLU;
int16_t x60 = -1;
uint16_t x71 = 1U;
uint16_t x73 = 1662U;
static int16_t x76 = 158;
volatile int32_t t18 = -877113;
volatile int32_t t20 = 113069;
uint8_t x93 = UINT8_MAX;
volatile int32_t x95 = INT32_MIN;
int32_t t23 = -10741;
uint32_t x97 = 3U;
int32_t t24 = 708;
static int64_t x102 = 450840231538LL;
int8_t x103 = INT8_MAX;
static int32_t x106 = INT32_MIN;
int64_t x117 = -1LL;
volatile uint32_t x120 = 119271U;
static int32_t t29 = 1;
volatile int32_t x124 = INT32_MIN;
int8_t x125 = INT8_MIN;
uint8_t x129 = UINT8_MAX;
static int8_t x132 = INT8_MAX;
int32_t t33 = -9;
volatile uint64_t x139 = 3LLU;
int16_t x147 = INT16_MAX;
static int32_t x151 = INT32_MIN;
uint64_t x152 = 10324634604LLU;
volatile uint8_t x155 = 7U;
int64_t x156 = -1LL;
int32_t x166 = 3;
static volatile int32_t x172 = -1;
volatile int16_t x174 = INT16_MIN;
uint16_t x176 = 505U;
int8_t x184 = 28;
uint64_t x185 = 8841389172193462377LLU;
uint16_t x188 = 15U;
int32_t t46 = -31;
int64_t x189 = 4197733436862LL;
static volatile int32_t x192 = INT32_MAX;
uint16_t x195 = 247U;
volatile int32_t t48 = -1;
int8_t x197 = INT8_MIN;
int32_t x209 = 6276;
static volatile int32_t t53 = 21715;
static uint16_t x219 = UINT16_MAX;
uint16_t x226 = 2927U;
uint16_t x228 = 362U;
static int32_t t56 = -37;
static int8_t x258 = -22;
volatile int64_t x269 = INT64_MIN;
int8_t x270 = -1;
volatile uint16_t x275 = 1806U;
uint16_t x277 = UINT16_MAX;
static volatile int32_t t70 = -1;
uint16_t x288 = 1232U;
int16_t x291 = INT16_MIN;
int16_t x293 = INT16_MIN;
static volatile int64_t x294 = INT64_MIN;
uint64_t x295 = 2990764099LLU;
int32_t t75 = -6;
int32_t x305 = INT32_MIN;
int16_t x308 = INT16_MIN;
static int8_t x313 = INT8_MIN;
static int8_t x316 = 1;
int32_t t80 = -114757694;
int32_t t81 = 995477751;
static volatile int32_t x332 = INT32_MIN;
int32_t t82 = -191169;
static int8_t x337 = INT8_MIN;
int32_t t84 = -7;
int32_t x345 = 14013780;
static int64_t x359 = INT64_MAX;
int8_t x369 = INT8_MIN;
static int32_t x373 = -1;
uint32_t x375 = UINT32_MAX;
static int32_t t96 = -14746109;
uint32_t x392 = UINT32_MAX;
static volatile int32_t t97 = -13689;
int16_t x393 = INT16_MAX;
int32_t x400 = -1325;
int64_t x403 = 8795901714LL;
int8_t x408 = -14;
uint16_t x409 = UINT16_MAX;
uint8_t x415 = UINT8_MAX;
volatile int32_t x418 = 17606;
static int32_t x426 = INT32_MAX;
static int64_t x427 = -1LL;
int32_t x430 = 21050546;
int8_t x432 = INT8_MIN;
static volatile int64_t x433 = INT64_MIN;
int32_t x440 = INT32_MIN;
int64_t x441 = INT64_MIN;
int8_t x443 = INT8_MIN;
uint32_t x444 = 54125403U;
int16_t x450 = 1985;
static int32_t x451 = 667099483;
int8_t x457 = -1;
int32_t x459 = -529;
volatile uint8_t x468 = 52U;
int64_t x474 = INT64_MAX;
int32_t t118 = -20196;
int16_t x478 = -404;
uint8_t x479 = UINT8_MAX;
int32_t t119 = -187052295;
int32_t t121 = -100612721;
volatile int32_t t123 = 1010572;
static int32_t x497 = INT32_MAX;
int32_t t125 = 1;
volatile int32_t t126 = -94;
int8_t x511 = INT8_MIN;
int32_t t127 = 1;
int32_t x516 = 10012604;
int64_t x518 = INT64_MIN;
uint8_t x519 = 7U;
uint8_t x526 = UINT8_MAX;
volatile int32_t t131 = -43076;
static uint64_t x543 = 435LLU;
uint32_t x548 = 1715128674U;
int64_t x554 = INT64_MIN;
int32_t t139 = 113292911;
volatile int64_t x561 = -1LL;
int32_t x562 = 1;
volatile int32_t t140 = -720;
int8_t x572 = INT8_MIN;
volatile uint8_t x574 = 0U;
int64_t x578 = -1LL;
static int32_t t144 = -349;
int8_t x581 = INT8_MAX;
uint16_t x587 = 9U;
uint32_t x589 = UINT32_MAX;
uint64_t x590 = 136942997531057693LLU;
volatile int32_t t147 = -220129425;
int8_t x609 = INT8_MIN;
uint32_t x611 = UINT32_MAX;
static int32_t x615 = INT32_MIN;
volatile int32_t t153 = -352881095;
volatile int32_t x617 = 15834;
int16_t x621 = INT16_MIN;
volatile int32_t x622 = INT32_MIN;
int64_t x627 = 32913LL;
static int8_t x628 = -31;
int32_t x631 = -1;
int32_t t157 = 553128;
static uint32_t x637 = 13U;
int32_t t159 = 8229;
int16_t x643 = -4697;
uint8_t x644 = UINT8_MAX;
static int64_t x645 = INT64_MAX;
volatile int32_t t161 = 261;
volatile int64_t x651 = -57583225625244LL;
int32_t t162 = 14731;
int64_t x656 = -1LL;
volatile int32_t t163 = 12864;
static int32_t x659 = 81422008;
int32_t x664 = INT32_MIN;
int32_t t165 = 25;
volatile uint8_t x666 = 31U;
volatile uint8_t x670 = UINT8_MAX;
uint64_t x673 = 2154356833978LLU;
volatile int8_t x675 = 0;
volatile int32_t t168 = 785;
static volatile int8_t x677 = 0;
int32_t x692 = INT32_MIN;
volatile int32_t t172 = 35156;
int16_t x696 = INT16_MIN;
uint32_t x701 = 142673U;
int64_t x702 = 219165813876573LL;
int16_t x707 = INT16_MIN;
volatile int32_t t176 = -522534887;
uint8_t x709 = 1U;
volatile uint8_t x711 = UINT8_MAX;
int16_t x714 = -1;
int32_t t178 = -7;
int8_t x728 = -1;
volatile int32_t t181 = 887857;
static int8_t x734 = INT8_MIN;
int32_t t183 = 947;
static uint16_t x741 = UINT16_MAX;
int8_t x742 = -1;
int32_t x747 = -13143716;
int32_t t186 = 211742;
uint32_t x750 = 15U;
volatile int8_t x751 = INT8_MAX;
int16_t x755 = INT16_MIN;
static uint32_t x757 = UINT32_MAX;
volatile uint64_t x759 = 408LLU;
int32_t x760 = INT32_MIN;
uint16_t x761 = UINT16_MAX;
uint64_t x768 = 222261843LLU;
int8_t x772 = INT8_MIN;
int8_t x774 = INT8_MAX;
uint8_t x780 = 16U;
static int64_t x786 = -4813LL;
uint32_t x787 = UINT32_MAX;
uint8_t x789 = 1U;


void f0(void) {
    	volatile uint32_t x1 = 694111U;
	uint32_t x2 = 14U;
	int64_t x4 = 38809585180LL;
	int32_t t0 = -3197164;

    t0 = (x1!=((x2!=x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x6 = UINT8_MAX;
	uint8_t x8 = 64U;
	volatile int32_t t1 = -728369069;

    t1 = (x5!=((x6!=x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 1LLU;
	int32_t x11 = -1;
	uint64_t x12 = 424092435661960726LLU;
	volatile int32_t t2 = 160191;

    t2 = (x9!=((x10!=x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 5996U;
	volatile int32_t x15 = 203702;
	int8_t x16 = INT8_MAX;

    t3 = (x13!=((x14!=x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1;
	uint32_t x18 = 2757581U;
	volatile uint32_t x19 = UINT32_MAX;
	static int64_t x20 = -3100324LL;
	int32_t t4 = -96247802;

    t4 = (x17!=((x18!=x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1396249LL;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = 388598108LLU;

    t5 = (x21!=((x22!=x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 556063U;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = -29020;

    t6 = (x25!=((x26!=x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MIN;
	static uint32_t x31 = 3707U;
	int16_t x32 = 15546;
	volatile int32_t t7 = 1816203;

    t7 = (x29!=((x30!=x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 3413;
	static volatile uint8_t x34 = 1U;
	static int64_t x35 = -170LL;
	int8_t x36 = -2;
	volatile int32_t t8 = 2;

    t8 = (x33!=((x34!=x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = -1;
	uint64_t x39 = 1420688LLU;
	static int64_t x40 = -19LL;
	volatile int32_t t9 = 1883;

    t9 = (x37!=((x38!=x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = 41063988388250391LL;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -46;

    t10 = (x41!=((x42!=x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 21025U;
	uint16_t x47 = 45U;
	int64_t x48 = -1LL;
	static volatile int32_t t11 = 3445041;

    t11 = (x45!=((x46!=x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = 11116843U;
	int32_t x52 = -1;
	int32_t t12 = -118;

    t12 = (x49!=((x50!=x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	static int8_t x54 = -9;
	volatile int8_t x55 = INT8_MAX;
	uint32_t x56 = 913018U;
	volatile int32_t t13 = -1498762;

    t13 = (x53!=((x54!=x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = -1;
	volatile int32_t t14 = -7792539;

    t14 = (x57!=((x58!=x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 2066;
	volatile uint16_t x62 = UINT16_MAX;
	int64_t x63 = -1LL;
	int32_t x64 = -1;
	volatile int32_t t15 = 427325395;

    t15 = (x61!=((x62!=x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int32_t x66 = -1;
	uint64_t x67 = 292723LLU;
	static uint8_t x68 = 7U;
	int32_t t16 = -1;

    t16 = (x65!=((x66!=x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	volatile int32_t x70 = -1;
	int64_t x72 = INT64_MAX;
	int32_t t17 = -1;

    t17 = (x69!=((x70!=x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x74 = 57U;
	volatile int64_t x75 = -103095LL;

    t18 = (x73!=((x74!=x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -830739;
	int16_t x78 = INT16_MAX;
	uint32_t x79 = 11U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 467031352;

    t19 = (x77!=((x78!=x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = 1995;
	static int32_t x82 = INT32_MIN;
	static int64_t x83 = -1024925433LL;
	uint8_t x84 = 1U;

    t20 = (x81!=((x82!=x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	int32_t x86 = 61855;
	static int16_t x87 = INT16_MAX;
	static uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 679157;

    t21 = (x85!=((x86!=x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 18U;
	int64_t x90 = 8515LL;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -116935158;

    t22 = (x89!=((x90!=x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;

    t23 = (x93!=((x94!=x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = -1;
	static volatile uint16_t x99 = UINT16_MAX;
	int16_t x100 = -16;

    t24 = (x97!=((x98!=x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = 0;

    t25 = (x101!=((x102!=x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 15;
	volatile uint32_t x107 = 2533587U;
	static volatile int8_t x108 = -12;
	int32_t t26 = -1903754;

    t26 = (x105!=((x106!=x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	volatile int64_t x110 = INT64_MIN;
	static uint64_t x111 = 93138895963LLU;
	volatile int64_t x112 = -30352795LL;
	int32_t t27 = 0;

    t27 = (x109!=((x110!=x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 26;
	volatile int16_t x114 = -43;
	static int8_t x115 = -1;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = -30;

    t28 = (x113!=((x114!=x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x118 = UINT8_MAX;
	uint16_t x119 = 425U;

    t29 = (x117!=((x118!=x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	static int32_t x122 = -111;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t30 = -9965484;

    t30 = (x121!=((x122!=x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x126 = 1U;
	static int8_t x127 = INT8_MIN;
	uint16_t x128 = 26290U;
	int32_t t31 = 250974446;

    t31 = (x125!=((x126!=x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = 0;
	int32_t x131 = 31011;
	int32_t t32 = 308030;

    t32 = (x129!=((x130!=x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -24;
	static uint64_t x134 = 136501LLU;
	volatile uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;

    t33 = (x133!=((x134!=x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = 435937025;
	int8_t x138 = -21;
	int8_t x140 = -6;
	static int32_t t34 = -122360624;

    t34 = (x137!=((x138!=x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = -80765531865272276LL;
	int8_t x143 = 42;
	uint64_t x144 = 56008372296317LLU;
	static int32_t t35 = -942144;

    t35 = (x141!=((x142!=x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 0;
	volatile int32_t x146 = INT32_MAX;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 87;

    t36 = (x145!=((x146!=x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	static volatile int32_t t37 = 0;

    t37 = (x149!=((x150!=x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = 1U;
	volatile int32_t t38 = 7576;

    t38 = (x153!=((x154!=x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -2966794094LL;
	uint8_t x158 = UINT8_MAX;
	volatile uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -2244630;

    t39 = (x157!=((x158!=x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int16_t x163 = -1;
	int8_t x164 = 1;
	static int32_t t40 = -3;

    t40 = (x161!=((x162!=x163)==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 2U;
	volatile uint64_t x167 = UINT64_MAX;
	int64_t x168 = -64378320346LL;
	volatile int32_t t41 = -1265307;

    t41 = (x165!=((x166!=x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MAX;
	volatile int32_t t42 = -2;

    t42 = (x169!=((x170!=x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	uint16_t x175 = UINT16_MAX;
	int32_t t43 = 321;

    t43 = (x173!=((x174!=x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	int16_t x178 = -1;
	uint64_t x179 = 9973LLU;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -285832156;

    t44 = (x177!=((x178!=x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 6U;
	uint32_t x182 = UINT32_MAX;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t t45 = -3;

    t45 = (x181!=((x182!=x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x186 = 1270187921934811LLU;
	int16_t x187 = 1;

    t46 = (x185!=((x186!=x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = INT16_MAX;
	int64_t x191 = INT64_MIN;
	volatile int32_t t47 = -4;

    t47 = (x189!=((x190!=x191)==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 3U;
	uint8_t x194 = UINT8_MAX;
	volatile int64_t x196 = -583924342LL;

    t48 = (x193!=((x194!=x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x198 = INT16_MIN;
	volatile int32_t x199 = -1;
	int64_t x200 = 14993985576LL;
	volatile int32_t t49 = 0;

    t49 = (x197!=((x198!=x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	volatile int64_t x203 = INT64_MAX;
	volatile int64_t x204 = -31500957609703LL;
	static volatile int32_t t50 = -2311;

    t50 = (x201!=((x202!=x203)==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	volatile int64_t x206 = INT64_MAX;
	static int32_t x207 = 1681331;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -41;

    t51 = (x205!=((x206!=x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	static int64_t x212 = -1LL;
	int32_t t52 = -54068326;

    t52 = (x209!=((x210!=x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = -1;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 3851665124285164LLU;
	volatile int64_t x216 = INT64_MIN;

    t53 = (x213!=((x214!=x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 3U;
	int32_t x218 = 0;
	static uint8_t x220 = 107U;
	volatile int32_t t54 = -478351;

    t54 = (x217!=((x218!=x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 204U;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t55 = 893408036;

    t55 = (x221!=((x222!=x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	int32_t x227 = INT32_MIN;

    t56 = (x225!=((x226!=x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = -1;
	int32_t x230 = INT32_MAX;
	static volatile int8_t x231 = -1;
	volatile uint16_t x232 = 23279U;
	int32_t t57 = -87180111;

    t57 = (x229!=((x230!=x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 0U;
	int64_t x234 = 24081195LL;
	uint8_t x235 = 6U;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 0;

    t58 = (x233!=((x234!=x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 0U;
	static int16_t x238 = 3;
	static int8_t x239 = -1;
	int64_t x240 = -217460LL;
	int32_t t59 = -139632;

    t59 = (x237!=((x238!=x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	static int32_t x242 = INT32_MIN;
	uint8_t x243 = 101U;
	int64_t x244 = INT64_MAX;
	static volatile int32_t t60 = -1;

    t60 = (x241!=((x242!=x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -7;
	static uint16_t x246 = 635U;
	int32_t x247 = -1;
	int8_t x248 = -1;
	int32_t t61 = 61938349;

    t61 = (x245!=((x246!=x247)==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static volatile int32_t x250 = 1;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = -1;

    t62 = (x249!=((x250!=x251)==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	uint32_t x255 = 874942689U;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 17076849;

    t63 = (x253!=((x254!=x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = 417;
	uint32_t x259 = 12321U;
	uint64_t x260 = 500782377LLU;
	int32_t t64 = -51264;

    t64 = (x257!=((x258!=x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 39;
	static int16_t x262 = INT16_MAX;
	int32_t x263 = 57;
	volatile uint32_t x264 = 469547356U;
	int32_t t65 = -362;

    t65 = (x261!=((x262!=x263)==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MAX;
	int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = 0;

    t66 = (x265!=((x266!=x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x271 = 2;
	uint64_t x272 = UINT64_MAX;
	int32_t t67 = 1;

    t67 = (x269!=((x270!=x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	int8_t x274 = -49;
	int64_t x276 = -15720955503490803LL;
	static int32_t t68 = 1;

    t68 = (x273!=((x274!=x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = 2;
	volatile int32_t t69 = 1;

    t69 = (x277!=((x278!=x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = -1;
	int32_t x282 = 2061569;
	uint32_t x283 = 2806U;
	int8_t x284 = INT8_MIN;

    t70 = (x281!=((x282!=x283)==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 57U;
	uint8_t x286 = UINT8_MAX;
	static int16_t x287 = -1;
	static volatile int32_t t71 = -721669;

    t71 = (x285!=((x286!=x287)==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = 703;
	int32_t x290 = -96;
	int8_t x292 = -36;
	static volatile int32_t t72 = -435789;

    t72 = (x289!=((x290!=x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x296 = INT16_MIN;
	int32_t t73 = 47872835;

    t73 = (x293!=((x294!=x295)==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 863U;
	static volatile uint64_t x298 = UINT64_MAX;
	static uint8_t x299 = 2U;
	int64_t x300 = 0LL;
	static volatile int32_t t74 = 0;

    t74 = (x297!=((x298!=x299)==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 0;
	static volatile int16_t x302 = -1;
	uint32_t x303 = 77910U;
	int32_t x304 = -1;

    t75 = (x301!=((x302!=x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	volatile int32_t t76 = 9107;

    t76 = (x305!=((x306!=x307)==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 0;
	int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	volatile uint64_t x312 = 52539502242LLU;
	int32_t t77 = 61154;

    t77 = (x309!=((x310!=x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 27U;
	volatile int8_t x315 = -1;
	volatile int32_t t78 = 3668237;

    t78 = (x313!=((x314!=x315)==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = 6363393048754LL;
	int16_t x320 = 2897;
	volatile int32_t t79 = 544;

    t79 = (x317!=((x318!=x319)==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -6;
	static uint8_t x322 = UINT8_MAX;
	static volatile int8_t x323 = 6;
	int32_t x324 = -10;

    t80 = (x321!=((x322!=x323)==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 2;
	uint8_t x326 = 47U;
	uint16_t x327 = 19485U;
	static int64_t x328 = -362896LL;

    t81 = (x325!=((x326!=x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 2U;
	static volatile int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MAX;

    t82 = (x329!=((x330!=x331)==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 7U;
	uint8_t x334 = 2U;
	int64_t x335 = -150583LL;
	volatile int8_t x336 = INT8_MIN;
	static int32_t t83 = 0;

    t83 = (x333!=((x334!=x335)==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -12463715216403175LL;
	volatile uint32_t x339 = 286U;
	static int16_t x340 = -1;

    t84 = (x337!=((x338!=x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	uint8_t x342 = 0U;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = 5130090;
	static int32_t t85 = 3803495;

    t85 = (x341!=((x342!=x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = 6882LL;
	static int64_t x347 = -136214624LL;
	int32_t x348 = INT32_MAX;
	int32_t t86 = -544;

    t86 = (x345!=((x346!=x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	static int64_t x350 = -9878332LL;
	int32_t x351 = 1;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -53483;

    t87 = (x349!=((x350!=x351)==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 2;
	int8_t x354 = -1;
	volatile uint64_t x355 = 26649511LLU;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 1;

    t88 = (x353!=((x354!=x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 18U;
	int16_t x358 = INT16_MIN;
	static int16_t x360 = -121;
	static int32_t t89 = -3118;

    t89 = (x357!=((x358!=x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	static uint16_t x362 = 8965U;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -1;
	volatile int32_t t90 = 1801352;

    t90 = (x361!=((x362!=x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = 47415370635LL;
	int32_t x367 = 14706;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -327;

    t91 = (x365!=((x366!=x367)==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = 34;
	int64_t x371 = INT64_MAX;
	uint8_t x372 = 26U;
	int32_t t92 = -45642301;

    t92 = (x369!=((x370!=x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x374 = 1LLU;
	volatile uint32_t x376 = 111486U;
	int32_t t93 = -1;

    t93 = (x373!=((x374!=x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	uint64_t x379 = UINT64_MAX;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 11936744;

    t94 = (x377!=((x378!=x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	static volatile uint16_t x382 = 46U;
	int16_t x383 = 10792;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = 7165;

    t95 = (x381!=((x382!=x383)==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	uint8_t x386 = 3U;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = 7;

    t96 = (x385!=((x386!=x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	int64_t x390 = 44417188270LL;
	int16_t x391 = INT16_MAX;

    t97 = (x389!=((x390!=x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x394 = 1063102110977572LLU;
	uint32_t x395 = 1908120U;
	uint16_t x396 = 2U;
	int32_t t98 = -3326;

    t98 = (x393!=((x394!=x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	int64_t x398 = -1LL;
	int8_t x399 = 4;
	int32_t t99 = -5895442;

    t99 = (x397!=((x398!=x399)==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	uint64_t x402 = UINT64_MAX;
	uint32_t x404 = 44778U;
	static int32_t t100 = 122;

    t100 = (x401!=((x402!=x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = -74;
	uint32_t x407 = 38685U;
	volatile int32_t t101 = -6;

    t101 = (x405!=((x406!=x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x410 = UINT8_MAX;
	static uint32_t x411 = UINT32_MAX;
	uint16_t x412 = 20726U;
	volatile int32_t t102 = 280791;

    t102 = (x409!=((x410!=x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = -1;
	static uint32_t x414 = 1105606U;
	static int8_t x416 = -1;
	static volatile int32_t t103 = 21541480;

    t103 = (x413!=((x414!=x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	volatile int64_t x419 = 51983197180LL;
	static int64_t x420 = INT64_MAX;
	volatile int32_t t104 = -805548;

    t104 = (x417!=((x418!=x419)==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = 698388561U;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	volatile int64_t x424 = INT64_MAX;
	static volatile int32_t t105 = 88288;

    t105 = (x421!=((x422!=x423)==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 217U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = 14;

    t106 = (x425!=((x426!=x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	int64_t x431 = -1LL;
	static volatile int32_t t107 = 9;

    t107 = (x429!=((x430!=x431)==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = INT8_MIN;
	static int64_t x435 = 14760164945LL;
	uint32_t x436 = 13443U;
	volatile int32_t t108 = 0;

    t108 = (x433!=((x434!=x435)==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -59;
	uint8_t x438 = UINT8_MAX;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t t109 = 2;

    t109 = (x437!=((x438!=x439)==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	volatile int32_t t110 = 780487;

    t110 = (x441!=((x442!=x443)==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = 30;
	int64_t x446 = -909LL;
	int64_t x447 = INT64_MAX;
	int8_t x448 = 0;
	volatile int32_t t111 = 0;

    t111 = (x445!=((x446!=x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 62590781U;
	static int64_t x452 = 3173046LL;
	volatile int32_t t112 = 1152;

    t112 = (x449!=((x450!=x451)==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 26U;
	uint16_t x454 = 12U;
	int32_t x455 = INT32_MAX;
	static int64_t x456 = INT64_MIN;
	int32_t t113 = 139732;

    t113 = (x453!=((x454!=x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x458 = INT8_MAX;
	volatile int8_t x460 = 0;
	static volatile int32_t t114 = 1019884370;

    t114 = (x457!=((x458!=x459)==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 3U;
	int64_t x462 = -1LL;
	uint32_t x463 = UINT32_MAX;
	static int16_t x464 = INT16_MIN;
	int32_t t115 = -886952568;

    t115 = (x461!=((x462!=x463)==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 0;
	int64_t x466 = 18847418263613557LL;
	uint32_t x467 = 398U;
	static int32_t t116 = -4;

    t116 = (x465!=((x466!=x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x469 = INT8_MIN;
	uint32_t x470 = 0U;
	uint16_t x471 = 5082U;
	uint32_t x472 = UINT32_MAX;
	int32_t t117 = -13276915;

    t117 = (x469!=((x470!=x471)==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -2836;
	int8_t x475 = -12;
	int64_t x476 = -219529000785LL;

    t118 = (x473!=((x474!=x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -7737623828524LL;
	int32_t x480 = -2;

    t119 = (x477!=((x478!=x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint8_t x482 = 37U;
	static uint32_t x483 = UINT32_MAX;
	static uint8_t x484 = 3U;
	int32_t t120 = -371528932;

    t120 = (x481!=((x482!=x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 0;
	volatile int16_t x486 = INT16_MAX;
	int8_t x487 = -1;
	int8_t x488 = -1;

    t121 = (x485!=((x486!=x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -1;
	uint64_t x490 = 3LLU;
	int16_t x491 = INT16_MIN;
	uint64_t x492 = 7913LLU;
	volatile int32_t t122 = -13038;

    t122 = (x489!=((x490!=x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 698U;
	volatile int64_t x494 = 206811084LL;
	int8_t x495 = INT8_MIN;
	int8_t x496 = -1;

    t123 = (x493!=((x494!=x495)==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = UINT16_MAX;
	static int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MIN;
	volatile int32_t t124 = -514478;

    t124 = (x497!=((x498!=x499)==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MIN;
	static int64_t x502 = INT64_MIN;
	int64_t x503 = INT64_MAX;
	int8_t x504 = -1;

    t125 = (x501!=((x502!=x503)==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 208629;
	int32_t x506 = INT32_MIN;
	int16_t x507 = INT16_MIN;
	volatile int8_t x508 = 3;

    t126 = (x505!=((x506!=x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	int16_t x510 = INT16_MIN;
	volatile uint8_t x512 = 3U;

    t127 = (x509!=((x510!=x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	static uint8_t x514 = 15U;
	int8_t x515 = 0;
	int32_t t128 = -6761300;

    t128 = (x513!=((x514!=x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x520 = -1;
	volatile int32_t t129 = -54853;

    t129 = (x517!=((x518!=x519)==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x521 = -1;
	int16_t x522 = 1;
	uint8_t x523 = 9U;
	int64_t x524 = -1LL;
	volatile int32_t t130 = -735;

    t130 = (x521!=((x522!=x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	static volatile int8_t x527 = INT8_MIN;
	uint8_t x528 = 46U;

    t131 = (x525!=((x526!=x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 4U;
	int32_t x530 = INT32_MAX;
	uint8_t x531 = 50U;
	static volatile uint16_t x532 = UINT16_MAX;
	volatile int32_t t132 = -18;

    t132 = (x529!=((x530!=x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static uint16_t x534 = UINT16_MAX;
	int32_t x535 = INT32_MIN;
	int8_t x536 = INT8_MIN;
	int32_t t133 = -30654627;

    t133 = (x533!=((x534!=x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 237LL;
	static uint16_t x538 = 5647U;
	uint16_t x539 = 1477U;
	uint64_t x540 = 181068LLU;
	volatile int32_t t134 = -44752584;

    t134 = (x537!=((x538!=x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	int64_t x542 = 989254409536598LL;
	volatile int16_t x544 = 1;
	int32_t t135 = -15292167;

    t135 = (x541!=((x542!=x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int16_t x546 = 125;
	static int64_t x547 = INT64_MIN;
	volatile int32_t t136 = -1;

    t136 = (x545!=((x546!=x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x550 = -301;
	int8_t x551 = INT8_MIN;
	volatile uint64_t x552 = 67420770429967129LLU;
	volatile int32_t t137 = 0;

    t137 = (x549!=((x550!=x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int64_t x555 = -1LL;
	int64_t x556 = INT64_MIN;
	int32_t t138 = 6;

    t138 = (x553!=((x554!=x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = 83946513176753LLU;
	int32_t x558 = INT32_MAX;
	int64_t x559 = 12607714710623574LL;
	uint64_t x560 = 992557603611950307LLU;

    t139 = (x557!=((x558!=x559)==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x563 = 10U;
	uint16_t x564 = UINT16_MAX;

    t140 = (x561!=((x562!=x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 89063339314843LLU;
	static int64_t x566 = -136299217060636LL;
	int64_t x567 = INT64_MAX;
	uint16_t x568 = 406U;
	static int32_t t141 = 17037507;

    t141 = (x565!=((x566!=x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	int64_t x570 = 3487585535985658730LL;
	uint64_t x571 = 567686LLU;
	volatile int32_t t142 = -7624502;

    t142 = (x569!=((x570!=x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x573 = UINT64_MAX;
	uint16_t x575 = UINT16_MAX;
	uint8_t x576 = 6U;
	static int32_t t143 = -6257;

    t143 = (x573!=((x574!=x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = 20;
	int64_t x579 = INT64_MIN;
	uint32_t x580 = 396229U;

    t144 = (x577!=((x578!=x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = 15864;
	uint32_t x583 = 2097094U;
	int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -206;

    t145 = (x581!=((x582!=x583)==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = -8;
	int32_t x588 = -1;
	static int32_t t146 = -2;

    t146 = (x585!=((x586!=x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x591 = 1062073891022LL;
	int32_t x592 = 68535;

    t147 = (x589!=((x590!=x591)==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 7759;
	uint16_t x594 = 11891U;
	static uint8_t x595 = 18U;
	static int64_t x596 = -1LL;
	volatile int32_t t148 = 18997;

    t148 = (x593!=((x594!=x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	int16_t x598 = -1620;
	int16_t x599 = INT16_MAX;
	uint16_t x600 = 364U;
	volatile int32_t t149 = -104830;

    t149 = (x597!=((x598!=x599)==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile int16_t x602 = INT16_MAX;
	int32_t x603 = -1;
	volatile int64_t x604 = INT64_MAX;
	static volatile int32_t t150 = 354;

    t150 = (x601!=((x602!=x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = 1009U;
	uint32_t x608 = 125365766U;
	static int32_t t151 = -34933;

    t151 = (x605!=((x606!=x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = 45351LL;
	uint64_t x612 = UINT64_MAX;
	volatile int32_t t152 = -2613703;

    t152 = (x609!=((x610!=x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = 0;
	uint32_t x614 = UINT32_MAX;
	int16_t x616 = INT16_MIN;

    t153 = (x613!=((x614!=x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MAX;
	int64_t x620 = INT64_MIN;
	static volatile int32_t t154 = -67281;

    t154 = (x617!=((x618!=x619)==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x623 = -1;
	int32_t x624 = 333411;
	int32_t t155 = 1410593;

    t155 = (x621!=((x622!=x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 11U;
	uint8_t x626 = 2U;
	int32_t t156 = -115;

    t156 = (x625!=((x626!=x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	int8_t x630 = 0;
	static int64_t x632 = -1LL;

    t157 = (x629!=((x630!=x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = INT64_MAX;
	static int16_t x634 = -7;
	static volatile int8_t x635 = -7;
	uint16_t x636 = 1U;
	int32_t t158 = -97278;

    t158 = (x633!=((x634!=x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MAX;
	static int64_t x639 = INT64_MIN;
	uint32_t x640 = 4101U;

    t159 = (x637!=((x638!=x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 1U;
	int64_t x642 = 201511213LL;
	int32_t t160 = 178948;

    t160 = (x641!=((x642!=x643)==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x646 = 35718U;
	static volatile uint32_t x647 = UINT32_MAX;
	int16_t x648 = INT16_MIN;

    t161 = (x645!=((x646!=x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	volatile uint32_t x650 = 266908439U;
	volatile uint32_t x652 = UINT32_MAX;

    t162 = (x649!=((x650!=x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	static int32_t x654 = INT32_MIN;
	volatile int8_t x655 = INT8_MIN;

    t163 = (x653!=((x654!=x655)==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 1U;
	static uint32_t x658 = UINT32_MAX;
	volatile int8_t x660 = 0;
	volatile int32_t t164 = 203;

    t164 = (x657!=((x658!=x659)==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	static int8_t x662 = INT8_MAX;
	int8_t x663 = 2;

    t165 = (x661!=((x662!=x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 1504U;
	int64_t x667 = 1LL;
	uint32_t x668 = 1807083U;
	static volatile int32_t t166 = -3;

    t166 = (x665!=((x666!=x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 3U;
	volatile uint64_t x671 = 25LLU;
	int16_t x672 = 3499;
	volatile int32_t t167 = 397355;

    t167 = (x669!=((x670!=x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x674 = 80U;
	int8_t x676 = INT8_MIN;

    t168 = (x673!=((x674!=x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x678 = 14U;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -1;
	volatile int32_t t169 = -1;

    t169 = (x677!=((x678!=x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	uint32_t x682 = 4U;
	uint32_t x683 = 7U;
	int32_t x684 = INT32_MIN;
	int32_t t170 = -35;

    t170 = (x681!=((x682!=x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int8_t x686 = -1;
	volatile uint16_t x687 = 20582U;
	static volatile uint16_t x688 = 76U;
	int32_t t171 = 27474;

    t171 = (x685!=((x686!=x687)==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 132457281249877LL;
	volatile int16_t x690 = INT16_MIN;
	static volatile int8_t x691 = -1;

    t172 = (x689!=((x690!=x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	volatile uint16_t x694 = UINT16_MAX;
	int16_t x695 = INT16_MIN;
	static volatile int32_t t173 = -7418;

    t173 = (x693!=((x694!=x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int16_t x698 = INT16_MAX;
	volatile uint32_t x699 = UINT32_MAX;
	int64_t x700 = -1LL;
	volatile int32_t t174 = -244045733;

    t174 = (x697!=((x698!=x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x703 = -1;
	static volatile uint32_t x704 = 10943957U;
	int32_t t175 = -18838818;

    t175 = (x701!=((x702!=x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = 2075727793879LL;
	int8_t x706 = 1;
	int32_t x708 = INT32_MIN;

    t176 = (x705!=((x706!=x707)==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = -1;
	int8_t x712 = -1;
	volatile int32_t t177 = -100352788;

    t177 = (x709!=((x710!=x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MAX;
	int64_t x715 = -1LL;
	int8_t x716 = INT8_MAX;

    t178 = (x713!=((x714!=x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = 0;
	int16_t x718 = INT16_MIN;
	uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MIN;
	int32_t t179 = -8095;

    t179 = (x717!=((x718!=x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	int64_t x722 = INT64_MAX;
	volatile int16_t x723 = 393;
	int8_t x724 = 14;
	int32_t t180 = 145;

    t180 = (x721!=((x722!=x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = 251803;
	static int32_t x727 = INT32_MIN;

    t181 = (x725!=((x726!=x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	static int64_t x730 = INT64_MIN;
	uint64_t x731 = 14LLU;
	uint8_t x732 = UINT8_MAX;
	volatile int32_t t182 = 1469985;

    t182 = (x729!=((x730!=x731)==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -115;
	int32_t x735 = INT32_MIN;
	static int8_t x736 = -1;

    t183 = (x733!=((x734!=x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = 0;
	volatile uint64_t x738 = 94983755LLU;
	int16_t x739 = INT16_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t184 = 590;

    t184 = (x737!=((x738!=x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x743 = UINT64_MAX;
	int16_t x744 = -200;
	static int32_t t185 = 11;

    t185 = (x741!=((x742!=x743)==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	volatile int16_t x746 = INT16_MIN;
	static int16_t x748 = INT16_MAX;

    t186 = (x745!=((x746!=x747)==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	uint16_t x752 = 150U;
	int32_t t187 = -48866;

    t187 = (x749!=((x750!=x751)==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -9272;
	int64_t x754 = INT64_MAX;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = 902921;

    t188 = (x753!=((x754!=x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = UINT8_MAX;
	volatile int32_t t189 = -282235;

    t189 = (x757!=((x758!=x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MAX;
	int64_t x763 = INT64_MAX;
	int8_t x764 = INT8_MIN;
	int32_t t190 = -105201;

    t190 = (x761!=((x762!=x763)==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = UINT64_MAX;
	int8_t x766 = 0;
	uint8_t x767 = UINT8_MAX;
	int32_t t191 = -10;

    t191 = (x765!=((x766!=x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MAX;
	int32_t x770 = -1;
	static uint8_t x771 = 59U;
	int32_t t192 = -36;

    t192 = (x769!=((x770!=x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 557731749264555380LLU;
	int16_t x775 = INT16_MIN;
	volatile int32_t x776 = INT32_MIN;
	int32_t t193 = -8911041;

    t193 = (x773!=((x774!=x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 1U;
	static uint64_t x779 = UINT64_MAX;
	volatile int32_t t194 = 1606346;

    t194 = (x777!=((x778!=x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 21LLU;
	static volatile int16_t x782 = -4;
	int16_t x783 = INT16_MAX;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = -599;

    t195 = (x781!=((x782!=x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 194U;
	static uint32_t x788 = UINT32_MAX;
	int32_t t196 = 22736;

    t196 = (x785!=((x786!=x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MAX;
	uint16_t x791 = 4637U;
	static int64_t x792 = -24385663LL;
	int32_t t197 = 477116;

    t197 = (x789!=((x790!=x791)==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	int64_t x794 = -225023890884998LL;
	int64_t x795 = 17627045LL;
	int32_t x796 = 901724;
	int32_t t198 = 2505872;

    t198 = (x793!=((x794!=x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = -16918280495184857LL;
	volatile int16_t x798 = 74;
	int8_t x799 = INT8_MAX;
	int64_t x800 = -6522LL;
	volatile int32_t t199 = 1;

    t199 = (x797!=((x798!=x799)==x800));

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

