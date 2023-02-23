
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

static int64_t x1 = INT64_MIN;
uint32_t x7 = UINT32_MAX;
int32_t x10 = -1;
int64_t x11 = -611683539733768LL;
volatile uint16_t x19 = 518U;
volatile int32_t t4 = -16;
int32_t t7 = -1262851;
int32_t x44 = 1369750;
uint32_t x46 = 545641U;
int16_t x47 = INT16_MAX;
uint64_t x63 = UINT64_MAX;
int8_t x64 = -1;
uint16_t x74 = 4997U;
int32_t t19 = -13296985;
static volatile int32_t x87 = INT32_MAX;
int32_t t21 = -2;
int16_t x96 = -19;
int32_t t23 = 29558;
static int32_t t25 = -13070687;
int8_t x111 = INT8_MAX;
int16_t x112 = INT16_MIN;
volatile uint64_t x113 = 62LLU;
static int32_t x128 = INT32_MIN;
static int32_t x134 = -18277430;
static volatile uint16_t x141 = UINT16_MAX;
volatile int32_t x143 = INT32_MAX;
uint8_t x146 = 67U;
int8_t x147 = INT8_MAX;
uint64_t x154 = 104312768526LLU;
uint16_t x156 = 1449U;
uint64_t x158 = UINT64_MAX;
int64_t x162 = -11150600726LL;
static uint16_t x168 = UINT16_MAX;
int32_t t46 = -2;
volatile uint32_t x192 = 259U;
uint16_t x200 = 233U;
int32_t t49 = 111550371;
int16_t x206 = 22;
uint8_t x207 = UINT8_MAX;
int32_t t53 = 38653;
int64_t x228 = -1LL;
int16_t x242 = -1;
static int32_t x243 = INT32_MIN;
int8_t x249 = INT8_MIN;
static uint32_t x250 = UINT32_MAX;
uint16_t x256 = 978U;
int64_t x262 = INT64_MIN;
volatile int32_t t65 = -11289;
volatile int8_t x265 = INT8_MIN;
int16_t x266 = INT16_MIN;
int8_t x272 = INT8_MAX;
volatile int64_t x273 = 46806LL;
static int32_t x278 = INT32_MIN;
static volatile int32_t t69 = 124865155;
uint16_t x282 = 27U;
int8_t x283 = INT8_MIN;
static int64_t x285 = 109195LL;
static int32_t t71 = -29453;
uint64_t x293 = 26639659641557962LLU;
uint64_t x306 = 47255183LLU;
int32_t x312 = INT32_MIN;
volatile int32_t t78 = -30;
int16_t x327 = 3330;
static int8_t x328 = 26;
int64_t x332 = 2122804393054976132LL;
int32_t t82 = -277627476;
uint64_t x336 = UINT64_MAX;
volatile int32_t t84 = 116575;
int32_t x341 = INT32_MIN;
static int32_t t87 = -178025;
volatile uint32_t x356 = 351U;
uint64_t x360 = UINT64_MAX;
int16_t x362 = 0;
uint16_t x366 = 32074U;
static int32_t t91 = -461;
int32_t x369 = -27749670;
int32_t t94 = -4;
uint8_t x386 = 57U;
int16_t x387 = INT16_MIN;
int16_t x394 = INT16_MIN;
volatile int32_t t98 = 10562824;
int32_t t104 = -101924;
int64_t x421 = INT64_MIN;
static int16_t x424 = INT16_MIN;
int64_t x426 = INT64_MAX;
int64_t x427 = INT64_MAX;
uint8_t x431 = 3U;
volatile uint32_t x436 = 35036U;
int32_t t108 = 0;
volatile int32_t t109 = -4;
uint64_t x446 = UINT64_MAX;
static int16_t x451 = INT16_MAX;
volatile int16_t x459 = INT16_MIN;
int32_t t114 = -15105472;
static int32_t t117 = 918654971;
int64_t x475 = INT64_MAX;
uint64_t x476 = 128LLU;
static volatile int32_t t118 = -9266121;
int8_t x478 = -1;
volatile int32_t t121 = -9;
int32_t x499 = INT32_MAX;
int32_t t125 = 82;
int64_t x512 = -146983178933LL;
uint16_t x515 = 108U;
static int16_t x526 = INT16_MIN;
int32_t t132 = 37;
int16_t x535 = INT16_MIN;
static int32_t t134 = -1562753;
uint32_t x541 = UINT32_MAX;
int64_t x542 = INT64_MAX;
static int64_t x546 = INT64_MIN;
uint64_t x551 = 3857959584626235LLU;
int64_t x555 = 17LL;
int32_t t139 = 112664739;
uint32_t x561 = UINT32_MAX;
static int32_t x568 = -1;
int8_t x569 = INT8_MAX;
int64_t x571 = INT64_MAX;
int32_t t142 = 60378216;
static uint32_t x573 = 14438816U;
int16_t x575 = 774;
uint8_t x578 = 25U;
int8_t x580 = -1;
static uint16_t x593 = UINT16_MAX;
int32_t t148 = 229700992;
volatile int8_t x599 = INT8_MIN;
int32_t t149 = 273247;
static int32_t t151 = 18465;
int8_t x609 = INT8_MAX;
uint64_t x610 = 0LLU;
volatile int32_t t152 = 1125315;
int32_t x613 = INT32_MIN;
int64_t x615 = -1LL;
static int16_t x618 = INT16_MIN;
int64_t x621 = -1LL;
uint64_t x622 = UINT64_MAX;
volatile int8_t x628 = INT8_MIN;
static volatile int32_t t156 = -3435863;
static int8_t x630 = INT8_MAX;
int16_t x632 = -1;
int32_t t157 = 7278;
uint8_t x636 = 6U;
int64_t x647 = 1862061039397LL;
int32_t x648 = INT32_MIN;
volatile int32_t t161 = -14037;
int32_t x649 = INT32_MIN;
int32_t x650 = -206097737;
int16_t x652 = INT16_MIN;
int16_t x654 = 0;
int8_t x655 = -1;
int32_t t166 = -559627;
int16_t x670 = INT16_MIN;
volatile int64_t x675 = INT64_MIN;
uint64_t x680 = 221906558521141LLU;
int8_t x685 = 0;
int32_t x686 = 237;
static int8_t x687 = -1;
int8_t x699 = -1;
volatile int64_t x700 = -1LL;
static int16_t x709 = -1;
int8_t x710 = 2;
int32_t t177 = -736;
volatile uint8_t x718 = UINT8_MAX;
int32_t t180 = -1834668;
int8_t x726 = INT8_MAX;
volatile int32_t t182 = 285579;
int8_t x733 = 40;
int16_t x734 = 35;
static int64_t x742 = INT64_MIN;
int32_t x744 = -1;
static int16_t x745 = 3363;
int32_t x748 = -1;
int8_t x750 = INT8_MIN;
int32_t t188 = 3530;
uint16_t x759 = UINT16_MAX;
uint8_t x762 = 23U;
int16_t x766 = 375;
uint8_t x768 = UINT8_MAX;
volatile int32_t t193 = 107117084;
uint32_t x778 = UINT32_MAX;
int32_t x783 = -124;
int32_t t195 = 27933;
static int16_t x785 = INT16_MAX;
int32_t t196 = -434645653;
int8_t x789 = 6;
uint32_t x790 = 1U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int32_t x3 = 1406031;
	static int8_t x4 = -1;
	int32_t t0 = 523987;

    t0 = (x1==((x2!=x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	uint8_t x6 = UINT8_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 1;

    t1 = (x5==((x6!=x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = -1LL;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 3639;

    t2 = (x9==((x10!=x11)&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 0;
	volatile uint8_t x14 = 11U;
	uint16_t x15 = 1U;
	int16_t x16 = -1;
	static volatile int32_t t3 = 7559905;

    t3 = (x13==((x14!=x15)&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	uint64_t x18 = UINT64_MAX;
	int64_t x20 = INT64_MIN;

    t4 = (x17==((x18!=x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -6;

    t5 = (x21==((x22!=x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	static int64_t x26 = -1LL;
	int64_t x27 = -4097711LL;
	int32_t x28 = -1036287;
	static volatile int32_t t6 = -7743999;

    t6 = (x25==((x26!=x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	int8_t x31 = 11;
	static volatile int16_t x32 = INT16_MIN;

    t7 = (x29==((x30!=x31)&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 24037U;
	uint16_t x34 = UINT16_MAX;
	uint8_t x35 = 1U;
	volatile int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = 8071;

    t8 = (x33==((x34!=x35)&x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = 93;
	static int32_t x38 = INT32_MIN;
	uint32_t x39 = 0U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -7412;

    t9 = (x37==((x38!=x39)&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	volatile uint8_t x42 = 0U;
	static int32_t x43 = -920;
	int32_t t10 = -1034;

    t10 = (x41==((x42!=x43)&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = UINT64_MAX;
	uint8_t x48 = 79U;
	int32_t t11 = 110569;

    t11 = (x45==((x46!=x47)&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = -1;
	volatile int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -4;

    t12 = (x49==((x50!=x51)&x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 1431471;

    t13 = (x53==((x54!=x55)&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -30;
	int16_t x58 = 235;
	volatile int8_t x59 = -2;
	int32_t x60 = -1;
	volatile int32_t t14 = 275;

    t14 = (x57==((x58!=x59)&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	int8_t x62 = -26;
	int32_t t15 = 2348621;

    t15 = (x61==((x62!=x63)&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 2U;
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	volatile int32_t x68 = -53;
	volatile int32_t t16 = -15152711;

    t16 = (x65==((x66!=x67)&x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint32_t x70 = UINT32_MAX;
	static int64_t x71 = -1LL;
	volatile int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = 734172;

    t17 = (x69==((x70!=x71)&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 10185U;
	volatile int64_t x75 = -1LL;
	int8_t x76 = -1;
	int32_t t18 = 107;

    t18 = (x73==((x74!=x75)&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x77 = -1;
	int8_t x78 = 0;
	int32_t x79 = INT32_MIN;
	volatile int8_t x80 = -1;

    t19 = (x77==((x78!=x79)&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 5U;
	int64_t x82 = INT64_MIN;
	static int64_t x83 = INT64_MAX;
	uint32_t x84 = UINT32_MAX;
	static volatile int32_t t20 = -279812;

    t20 = (x81==((x82!=x83)&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = 220955329U;
	uint8_t x86 = 73U;
	uint64_t x88 = 10023810LLU;

    t21 = (x85==((x86!=x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	static volatile int64_t x90 = INT64_MIN;
	static int8_t x91 = -6;
	uint16_t x92 = 1U;
	volatile int32_t t22 = -322963348;

    t22 = (x89==((x90!=x91)&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = 2U;
	volatile uint8_t x95 = 67U;

    t23 = (x93==((x94!=x95)&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = -35;
	int32_t x98 = -87;
	static int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MAX;
	int32_t t24 = 1062;

    t24 = (x97==((x98!=x99)&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -26338;
	uint16_t x104 = 15U;

    t25 = (x101==((x102!=x103)&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	static int8_t x107 = INT8_MAX;
	volatile uint32_t x108 = 6730170U;
	int32_t t26 = 7786;

    t26 = (x105==((x106!=x107)&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	uint16_t x110 = 90U;
	static volatile int32_t t27 = -1;

    t27 = (x109==((x110!=x111)&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x114 = 43U;
	uint16_t x115 = UINT16_MAX;
	volatile uint32_t x116 = 246539U;
	volatile int32_t t28 = -94513;

    t28 = (x113==((x114!=x115)&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	static uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = INT64_MAX;
	static volatile int64_t x120 = INT64_MIN;
	static int32_t t29 = -74;

    t29 = (x117==((x118!=x119)&x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	volatile uint8_t x122 = 82U;
	static uint32_t x123 = 30U;
	int8_t x124 = 5;
	volatile int32_t t30 = -14;

    t30 = (x121==((x122!=x123)&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = 25;
	int16_t x127 = -1;
	volatile int32_t t31 = -6860;

    t31 = (x125==((x126!=x127)&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 6790708218438971LL;
	static int16_t x130 = -58;
	int32_t x131 = 146706824;
	int16_t x132 = INT16_MAX;
	volatile int32_t t32 = -749;

    t32 = (x129==((x130!=x131)&x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	uint32_t x135 = 203U;
	static int64_t x136 = -193874648419706LL;
	int32_t t33 = 19;

    t33 = (x133==((x134!=x135)&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 6U;
	volatile int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile int16_t x140 = 405;
	volatile int32_t t34 = -72;

    t34 = (x137==((x138!=x139)&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x142 = UINT16_MAX;
	int32_t x144 = -12;
	int32_t t35 = -160731;

    t35 = (x141==((x142!=x143)&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static int32_t x148 = -1;
	volatile int32_t t36 = -707874;

    t36 = (x145==((x146!=x147)&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int64_t x150 = 10829169761988382LL;
	int64_t x151 = -126715976792424035LL;
	int32_t x152 = -1;
	int32_t t37 = 11731227;

    t37 = (x149==((x150!=x151)&x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	int32_t t38 = 51;

    t38 = (x153==((x154!=x155)&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = -1;
	volatile int64_t x159 = 3543871657370LL;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -62536684;

    t39 = (x157==((x158!=x159)&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = 208471;

    t40 = (x161==((x162!=x163)&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	volatile int32_t t41 = -31259;

    t41 = (x165==((x166!=x167)&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int8_t x170 = 0;
	volatile int64_t x171 = INT64_MIN;
	uint8_t x172 = 58U;
	volatile int32_t t42 = -105415643;

    t42 = (x169==((x170!=x171)&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	int8_t x174 = -1;
	uint32_t x175 = 51519U;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -104333759;

    t43 = (x173==((x174!=x175)&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -341;
	int64_t x178 = -89881653LL;
	uint16_t x179 = 0U;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = 6835;

    t44 = (x177==((x178!=x179)&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x181 = -7;
	static int8_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 27488;

    t45 = (x181==((x182!=x183)&x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 0U;
	uint8_t x186 = 1U;
	int32_t x187 = 210395260;
	int64_t x188 = INT64_MAX;

    t46 = (x185==((x186!=x187)&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	int8_t x190 = -45;
	uint8_t x191 = 22U;
	int32_t t47 = 172894;

    t47 = (x189==((x190!=x191)&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	int32_t x194 = INT32_MAX;
	static int64_t x195 = INT64_MAX;
	int32_t x196 = -10870;
	volatile int32_t t48 = -76;

    t48 = (x193==((x194!=x195)&x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 80U;
	volatile int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MAX;

    t49 = (x197==((x198!=x199)&x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	volatile uint16_t x202 = 6U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -1;
	volatile int32_t t50 = 3809;

    t50 = (x201==((x202!=x203)&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int8_t x208 = INT8_MAX;
	int32_t t51 = -13848336;

    t51 = (x205==((x206!=x207)&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MAX;
	static int16_t x212 = 5;
	volatile int32_t t52 = 9187467;

    t52 = (x209==((x210!=x211)&x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 5132U;
	int32_t x216 = -1;

    t53 = (x213==((x214!=x215)&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -5883;
	uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t54 = -30763188;

    t54 = (x217==((x218!=x219)&x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile uint16_t x222 = 6U;
	int32_t x223 = 126282;
	int32_t x224 = 48;
	volatile int32_t t55 = -384796;

    t55 = (x221==((x222!=x223)&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = INT8_MAX;
	volatile int32_t t56 = -505924;

    t56 = (x225==((x226!=x227)&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 20U;
	uint64_t x230 = 359052694947981LLU;
	int16_t x231 = 6;
	uint64_t x232 = 371021438664528652LLU;
	volatile int32_t t57 = 709998;

    t57 = (x229==((x230!=x231)&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	volatile int32_t x234 = 49751;
	uint16_t x235 = 264U;
	static int64_t x236 = 1LL;
	static int32_t t58 = 0;

    t58 = (x233==((x234!=x235)&x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = 39;
	int64_t x238 = INT64_MAX;
	int64_t x239 = -7741589110559718LL;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 4182;

    t59 = (x237==((x238!=x239)&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	int8_t x244 = 42;
	volatile int32_t t60 = -159516500;

    t60 = (x241==((x242!=x243)&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x245 = UINT64_MAX;
	int16_t x246 = 12638;
	uint32_t x247 = 14054U;
	int64_t x248 = 1LL;
	int32_t t61 = -1;

    t61 = (x245==((x246!=x247)&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x251 = -1;
	volatile uint64_t x252 = 144LLU;
	int32_t t62 = -1942;

    t62 = (x249==((x250!=x251)&x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 0U;
	int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int32_t t63 = 441;

    t63 = (x253==((x254!=x255)&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = UINT16_MAX;
	int64_t x258 = -2143LL;
	int64_t x259 = 62239LL;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 8;

    t64 = (x257==((x258!=x259)&x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MIN;

    t65 = (x261==((x262!=x263)&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x267 = UINT8_MAX;
	static int32_t x268 = -1;
	int32_t t66 = 15419988;

    t66 = (x265==((x266!=x267)&x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	int32_t t67 = 138057;

    t67 = (x269==((x270!=x271)&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;
	int32_t t68 = 0;

    t68 = (x273==((x274!=x275)&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MIN;

    t69 = (x277==((x278!=x279)&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -1;
	uint64_t x284 = 49663710755LLU;
	static volatile int32_t t70 = -218343;

    t70 = (x281==((x282!=x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x286 = -1033703832648732LL;
	int16_t x287 = -14;
	int16_t x288 = INT16_MIN;

    t71 = (x285==((x286!=x287)&x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = INT8_MAX;
	static int8_t x292 = -3;
	int32_t t72 = 216753;

    t72 = (x289==((x290!=x291)&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x294 = 1U;
	int32_t x295 = INT32_MAX;
	int64_t x296 = -1LL;
	static volatile int32_t t73 = 244;

    t73 = (x293==((x294!=x295)&x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 70U;
	uint16_t x298 = 158U;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 25U;
	static volatile int32_t t74 = -407681177;

    t74 = (x297==((x298!=x299)&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 110U;
	int32_t x303 = 544945;
	int16_t x304 = INT16_MAX;
	int32_t t75 = 11762;

    t75 = (x301==((x302!=x303)&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int32_t x307 = -252;
	int32_t x308 = -1;
	int32_t t76 = -508683882;

    t76 = (x305==((x306!=x307)&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = 4;
	volatile int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	volatile int32_t t77 = 475426916;

    t77 = (x309==((x310!=x311)&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	uint16_t x314 = 24104U;
	volatile int64_t x315 = 100572935LL;
	static int32_t x316 = 723;

    t78 = (x313==((x314!=x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 1613323443676LLU;
	int8_t x318 = 1;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t79 = -3127130;

    t79 = (x317==((x318!=x319)&x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	int8_t x322 = -2;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -251124724886768757LL;
	volatile int32_t t80 = 230;

    t80 = (x321==((x322!=x323)&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 496507LLU;
	static int16_t x326 = 7;
	int32_t t81 = 18332;

    t81 = (x325==((x326!=x327)&x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 26U;
	static int16_t x330 = INT16_MIN;
	volatile uint16_t x331 = UINT16_MAX;

    t82 = (x329==((x330!=x331)&x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	uint8_t x334 = UINT8_MAX;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t t83 = 47616;

    t83 = (x333==((x334!=x335)&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 250902U;
	uint16_t x338 = UINT16_MAX;
	static uint8_t x339 = UINT8_MAX;
	int16_t x340 = -57;

    t84 = (x337==((x338!=x339)&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = INT16_MIN;
	static volatile int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	int32_t t85 = 79;

    t85 = (x341==((x342!=x343)&x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = UINT8_MAX;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = -1;
	int64_t x348 = -1LL;
	int32_t t86 = 119;

    t86 = (x345==((x346!=x347)&x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 1920244982U;
	volatile int32_t x350 = 39082991;
	uint16_t x351 = 7U;
	int8_t x352 = -1;

    t87 = (x349==((x350!=x351)&x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 3485096147LL;
	volatile uint64_t x354 = 37074134775LLU;
	uint64_t x355 = 5523712LLU;
	volatile int32_t t88 = 26;

    t88 = (x353==((x354!=x355)&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	uint32_t x358 = 72547U;
	static volatile int16_t x359 = INT16_MAX;
	int32_t t89 = 648148;

    t89 = (x357==((x358!=x359)&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 2052916LLU;
	int64_t x363 = -1LL;
	volatile uint8_t x364 = 36U;
	static int32_t t90 = 387462;

    t90 = (x361==((x362!=x363)&x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	volatile uint16_t x368 = 634U;

    t91 = (x365==((x366!=x367)&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = INT16_MIN;
	volatile uint16_t x371 = UINT16_MAX;
	int32_t x372 = -53962;
	static volatile int32_t t92 = -64326709;

    t92 = (x369==((x370!=x371)&x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -4LL;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = 1688543854LL;
	static int32_t t93 = 59;

    t93 = (x373==((x374!=x375)&x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = 0U;
	static volatile int64_t x378 = INT64_MAX;
	static int16_t x379 = -3;
	int64_t x380 = 27606LL;

    t94 = (x377==((x378!=x379)&x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	uint16_t x382 = 213U;
	uint32_t x383 = 352U;
	volatile int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = 10896249;

    t95 = (x381==((x382!=x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 203756586974649LL;
	uint16_t x388 = 158U;
	volatile int32_t t96 = 36205;

    t96 = (x385==((x386!=x387)&x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 16827375753LL;
	volatile uint8_t x390 = 0U;
	volatile int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = -1168;

    t97 = (x389==((x390!=x391)&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile int64_t x396 = INT64_MAX;

    t98 = (x393==((x394!=x395)&x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 1U;
	int64_t x400 = -1LL;
	volatile int32_t t99 = 1943;

    t99 = (x397==((x398!=x399)&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	uint32_t x402 = 7172U;
	static int32_t x403 = INT32_MAX;
	static uint8_t x404 = 14U;
	volatile int32_t t100 = -348;

    t100 = (x401==((x402!=x403)&x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	static int8_t x406 = INT8_MAX;
	int16_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t101 = 7123345;

    t101 = (x405==((x406!=x407)&x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	static int16_t x410 = 1;
	int64_t x411 = INT64_MAX;
	uint16_t x412 = 1347U;
	int32_t t102 = -202377;

    t102 = (x409==((x410!=x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 80U;
	int64_t x414 = -1LL;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	volatile int32_t t103 = -29295;

    t103 = (x413==((x414!=x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -1;
	int64_t x420 = 56486LL;

    t104 = (x417==((x418!=x419)&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MIN;
	volatile int32_t t105 = 1923;

    t105 = (x421==((x422!=x423)&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = -36;
	int16_t x428 = -1;
	int32_t t106 = -94916;

    t106 = (x425==((x426!=x427)&x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MAX;
	uint16_t x430 = 11U;
	uint8_t x432 = 15U;
	volatile int32_t t107 = -11;

    t107 = (x429==((x430!=x431)&x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = 1;
	uint16_t x434 = 1617U;
	uint16_t x435 = 4284U;

    t108 = (x433==((x434!=x435)&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -24;
	uint32_t x438 = UINT32_MAX;
	volatile uint8_t x439 = 0U;
	int64_t x440 = 12131481210435LL;

    t109 = (x437==((x438!=x439)&x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	int16_t x442 = -14123;
	volatile uint8_t x443 = 101U;
	uint32_t x444 = UINT32_MAX;
	int32_t t110 = -3687304;

    t110 = (x441==((x442!=x443)&x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 245U;
	int64_t x447 = 1719124758824603LL;
	volatile uint8_t x448 = UINT8_MAX;
	static int32_t t111 = -1;

    t111 = (x445==((x446!=x447)&x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = 164806087;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t112 = 0;

    t112 = (x449==((x450!=x451)&x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = 1U;
	int64_t x454 = -1LL;
	int32_t x455 = -7;
	uint32_t x456 = 1920014U;
	volatile int32_t t113 = -41;

    t113 = (x453==((x454!=x455)&x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	volatile int32_t x458 = INT32_MIN;
	volatile uint64_t x460 = 1650LLU;

    t114 = (x457==((x458!=x459)&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 105435999742LL;
	int64_t x462 = -531362758LL;
	int16_t x463 = INT16_MAX;
	int8_t x464 = -1;
	volatile int32_t t115 = 146;

    t115 = (x461==((x462!=x463)&x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = -1;
	volatile uint32_t x466 = 12644U;
	int64_t x467 = 4846588LL;
	uint32_t x468 = 2655U;
	int32_t t116 = -1;

    t116 = (x465==((x466!=x467)&x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 48U;
	int16_t x470 = -1;
	int16_t x471 = INT16_MAX;
	static int32_t x472 = 1057932;

    t117 = (x469==((x470!=x471)&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -2598;
	int16_t x474 = -1;

    t118 = (x473==((x474!=x475)&x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	int8_t x479 = -1;
	volatile uint8_t x480 = 2U;
	int32_t t119 = -958610326;

    t119 = (x477==((x478!=x479)&x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -1;
	static int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	volatile int32_t x484 = INT32_MAX;
	static volatile int32_t t120 = 13531;

    t120 = (x481==((x482!=x483)&x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MAX;
	int8_t x486 = INT8_MIN;
	int16_t x487 = 70;
	static volatile uint16_t x488 = 334U;

    t121 = (x485==((x486!=x487)&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 0U;
	uint8_t x490 = UINT8_MAX;
	static int64_t x491 = 31488366133280LL;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = -34;

    t122 = (x489==((x490!=x491)&x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = INT8_MIN;
	uint32_t x494 = 14655042U;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = -10;
	static int32_t t123 = 1046487;

    t123 = (x493==((x494!=x495)&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = 12745;
	int8_t x498 = -1;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = -983210;

    t124 = (x497==((x498!=x499)&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 15743352LLU;
	uint8_t x502 = 5U;
	int8_t x503 = INT8_MIN;
	static volatile int32_t x504 = INT32_MIN;

    t125 = (x501==((x502!=x503)&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	static volatile int8_t x506 = -10;
	volatile int32_t x507 = 14833;
	uint32_t x508 = 1U;
	volatile int32_t t126 = 486313;

    t126 = (x505==((x506!=x507)&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 302;
	int16_t x510 = INT16_MIN;
	volatile uint64_t x511 = 38317171132626LLU;
	volatile int32_t t127 = 7400351;

    t127 = (x509==((x510!=x511)&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 5;
	uint32_t x514 = 62870U;
	static uint64_t x516 = 3264759898308LLU;
	int32_t t128 = -1;

    t128 = (x513==((x514!=x515)&x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = INT64_MIN;
	uint8_t x518 = 2U;
	uint32_t x519 = 22U;
	int64_t x520 = INT64_MIN;
	volatile int32_t t129 = 55430;

    t129 = (x517==((x518!=x519)&x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = INT64_MIN;
	uint16_t x522 = 6068U;
	uint8_t x523 = 1U;
	int16_t x524 = 9238;
	int32_t t130 = 0;

    t130 = (x521==((x522!=x523)&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MAX;
	int16_t x527 = INT16_MIN;
	static uint32_t x528 = 188U;
	int32_t t131 = 2759;

    t131 = (x525==((x526!=x527)&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	static int16_t x530 = -1;
	int8_t x531 = -1;
	int16_t x532 = -1;

    t132 = (x529==((x530!=x531)&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	volatile int64_t x534 = INT64_MIN;
	int32_t x536 = -423943;
	int32_t t133 = -1469;

    t133 = (x533==((x534!=x535)&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 4;
	static int8_t x538 = -3;
	uint16_t x539 = 3U;
	int32_t x540 = -1;

    t134 = (x537==((x538!=x539)&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x543 = 6536U;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t135 = 62;

    t135 = (x541==((x542!=x543)&x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile int32_t x547 = -8755;
	uint16_t x548 = 79U;
	static volatile int32_t t136 = -21219821;

    t136 = (x545==((x546!=x547)&x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint8_t x549 = 43U;
	uint64_t x550 = UINT64_MAX;
	volatile int64_t x552 = INT64_MIN;
	int32_t t137 = 9;

    t137 = (x549==((x550!=x551)&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -1;
	int16_t x554 = INT16_MIN;
	int16_t x556 = INT16_MAX;
	static volatile int32_t t138 = -56292;

    t138 = (x553==((x554!=x555)&x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 2;
	uint16_t x558 = 0U;
	int64_t x559 = INT64_MIN;
	int8_t x560 = INT8_MIN;

    t139 = (x557==((x558!=x559)&x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = 351;
	int8_t x563 = INT8_MAX;
	int16_t x564 = 12;
	volatile int32_t t140 = -417749309;

    t140 = (x561==((x562!=x563)&x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 17345555720193829LLU;
	static int16_t x566 = INT16_MIN;
	uint32_t x567 = 3687576U;
	int32_t t141 = 299707697;

    t141 = (x565==((x566!=x567)&x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x570 = INT64_MAX;
	int32_t x572 = -30033;

    t142 = (x569==((x570!=x571)&x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = -1;
	uint64_t x576 = 7906320867LLU;
	volatile int32_t t143 = -39;

    t143 = (x573==((x574!=x575)&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -2557;
	uint16_t x579 = 4568U;
	int32_t t144 = 256899;

    t144 = (x577==((x578!=x579)&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x582 = 1;
	int16_t x583 = 2;
	int64_t x584 = INT64_MAX;
	static volatile int32_t t145 = 1;

    t145 = (x581==((x582!=x583)&x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	int64_t x586 = -1LL;
	int64_t x587 = INT64_MAX;
	volatile int32_t x588 = INT32_MIN;
	int32_t t146 = -1;

    t146 = (x585==((x586!=x587)&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MAX;
	int32_t x590 = INT32_MIN;
	uint16_t x591 = 540U;
	int64_t x592 = INT64_MIN;
	int32_t t147 = 250541241;

    t147 = (x589==((x590!=x591)&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x594 = 59U;
	int64_t x595 = INT64_MIN;
	static int8_t x596 = 10;

    t148 = (x593==((x594!=x595)&x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	volatile int16_t x598 = INT16_MIN;
	int8_t x600 = INT8_MIN;

    t149 = (x597==((x598!=x599)&x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	uint32_t x602 = 113270U;
	static int32_t x603 = INT32_MIN;
	uint64_t x604 = 9LLU;
	int32_t t150 = -13226;

    t150 = (x601==((x602!=x603)&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = -20LL;
	int8_t x606 = -1;
	static uint64_t x607 = 1745633756688454464LLU;
	uint32_t x608 = 15U;

    t151 = (x605==((x606!=x607)&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x611 = INT64_MIN;
	volatile uint32_t x612 = UINT32_MAX;

    t152 = (x609==((x610!=x611)&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x614 = 3U;
	volatile uint8_t x616 = 123U;
	static int32_t t153 = -132660;

    t153 = (x613==((x614!=x615)&x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	static int16_t x619 = -4;
	static int32_t x620 = 4;
	static volatile int32_t t154 = 398620;

    t154 = (x617==((x618!=x619)&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x623 = -130977504464LL;
	static int8_t x624 = -53;
	int32_t t155 = -927506376;

    t155 = (x621==((x622!=x623)&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	uint64_t x626 = 10LLU;
	static volatile int8_t x627 = INT8_MIN;

    t156 = (x625==((x626!=x627)&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	volatile int16_t x631 = INT16_MIN;

    t157 = (x629==((x630!=x631)&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = -1;
	uint32_t x634 = 1391U;
	int32_t x635 = -1;
	int32_t t158 = -1;

    t158 = (x633==((x634!=x635)&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 1;
	int64_t x638 = 0LL;
	static uint64_t x639 = 25584092466LLU;
	uint8_t x640 = 0U;
	int32_t t159 = 1608;

    t159 = (x637==((x638!=x639)&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = UINT8_MAX;
	int64_t x642 = INT64_MIN;
	int16_t x643 = INT16_MIN;
	volatile uint8_t x644 = 6U;
	static int32_t t160 = -85468794;

    t160 = (x641==((x642!=x643)&x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	volatile int8_t x646 = INT8_MIN;

    t161 = (x645==((x646!=x647)&x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x651 = 11U;
	volatile int32_t t162 = -66184475;

    t162 = (x649==((x650!=x651)&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	volatile int16_t x656 = INT16_MIN;
	volatile int32_t t163 = 99;

    t163 = (x653==((x654!=x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = INT8_MAX;
	static int16_t x658 = -626;
	uint16_t x659 = UINT16_MAX;
	static volatile int32_t x660 = INT32_MIN;
	static volatile int32_t t164 = -119424;

    t164 = (x657==((x658!=x659)&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	static int32_t x662 = -58461081;
	uint16_t x663 = 342U;
	volatile int32_t x664 = INT32_MAX;
	static int32_t t165 = -2;

    t165 = (x661==((x662!=x663)&x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = 11746489563LLU;
	int8_t x666 = INT8_MIN;
	volatile int16_t x667 = INT16_MAX;
	uint64_t x668 = 49LLU;

    t166 = (x665==((x666!=x667)&x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MIN;
	int64_t x671 = -1LL;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = 0;

    t167 = (x669==((x670!=x671)&x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	uint16_t x674 = 23U;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t168 = -485384;

    t168 = (x673==((x674!=x675)&x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int32_t x678 = 128155975;
	int64_t x679 = INT64_MIN;
	volatile int32_t t169 = 97571;

    t169 = (x677==((x678!=x679)&x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int32_t x682 = INT32_MIN;
	static int32_t x683 = 154755933;
	volatile int8_t x684 = INT8_MAX;
	static volatile int32_t t170 = 16779;

    t170 = (x681==((x682!=x683)&x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x688 = INT8_MAX;
	int32_t t171 = 3128;

    t171 = (x685==((x686!=x687)&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	static int8_t x690 = -13;
	uint32_t x691 = UINT32_MAX;
	int32_t x692 = -1;
	volatile int32_t t172 = 4;

    t172 = (x689==((x690!=x691)&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = 1;
	volatile int16_t x694 = INT16_MAX;
	uint8_t x695 = 1U;
	int32_t x696 = INT32_MAX;
	static int32_t t173 = -1191973;

    t173 = (x693==((x694!=x695)&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MIN;
	volatile int32_t t174 = -7;

    t174 = (x697==((x698!=x699)&x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = -1;
	static int32_t x702 = -75;
	volatile int16_t x703 = -1;
	int64_t x704 = -5802624487561669LL;
	volatile int32_t t175 = -745;

    t175 = (x701==((x702!=x703)&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	volatile uint8_t x706 = 0U;
	volatile int8_t x707 = -10;
	int64_t x708 = 2212081641367557LL;
	int32_t t176 = 65136496;

    t176 = (x705==((x706!=x707)&x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x711 = UINT64_MAX;
	int32_t x712 = -879;

    t177 = (x709==((x710!=x711)&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	uint32_t x714 = UINT32_MAX;
	int64_t x715 = INT64_MIN;
	uint16_t x716 = 218U;
	int32_t t178 = -37527469;

    t178 = (x713==((x714!=x715)&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -919;
	static int32_t x719 = -1;
	volatile uint8_t x720 = 2U;
	int32_t t179 = -2949;

    t179 = (x717==((x718!=x719)&x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 6U;
	int8_t x722 = INT8_MAX;
	uint64_t x723 = UINT64_MAX;
	int64_t x724 = INT64_MAX;

    t180 = (x721==((x722!=x723)&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	uint32_t x727 = 337651U;
	static int16_t x728 = INT16_MIN;
	static volatile int32_t t181 = -1;

    t181 = (x725==((x726!=x727)&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	static uint64_t x730 = 33045390022841186LLU;
	int8_t x731 = INT8_MAX;
	static int16_t x732 = INT16_MAX;

    t182 = (x729==((x730!=x731)&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x735 = INT64_MIN;
	uint16_t x736 = 6U;
	volatile int32_t t183 = -18312160;

    t183 = (x733==((x734!=x735)&x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	static int8_t x738 = INT8_MIN;
	uint64_t x739 = UINT64_MAX;
	int32_t x740 = -4161654;
	volatile int32_t t184 = 413;

    t184 = (x737==((x738!=x739)&x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -222;
	int64_t x743 = -1LL;
	volatile int32_t t185 = -1435;

    t185 = (x741==((x742!=x743)&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MIN;
	int64_t x747 = INT64_MIN;
	volatile int32_t t186 = 1110;

    t186 = (x745==((x746!=x747)&x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x749 = 10U;
	int8_t x751 = INT8_MIN;
	uint8_t x752 = 0U;
	int32_t t187 = -13344;

    t187 = (x749==((x750!=x751)&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = 0U;
	static int16_t x754 = -780;
	static int8_t x755 = INT8_MIN;
	static int16_t x756 = -363;

    t188 = (x753==((x754!=x755)&x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	int16_t x758 = -7171;
	static int32_t x760 = -1;
	static volatile int32_t t189 = 53;

    t189 = (x757==((x758!=x759)&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	int16_t x763 = 83;
	volatile int64_t x764 = 912873416673LL;
	int32_t t190 = 63242;

    t190 = (x761==((x762!=x763)&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int32_t x767 = -1;
	int32_t t191 = -101;

    t191 = (x765==((x766!=x767)&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 7U;
	uint8_t x770 = 1U;
	int32_t x771 = -127357;
	uint32_t x772 = 13045U;
	volatile int32_t t192 = 3708132;

    t192 = (x769==((x770!=x771)&x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MIN;
	uint8_t x774 = UINT8_MAX;
	static uint16_t x775 = UINT16_MAX;
	volatile int16_t x776 = INT16_MAX;

    t193 = (x773==((x774!=x775)&x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 30;
	static uint16_t x779 = 14629U;
	volatile int8_t x780 = INT8_MAX;
	int32_t t194 = 7303747;

    t194 = (x777==((x778!=x779)&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 25U;
	int64_t x782 = -4LL;
	int8_t x784 = -1;

    t195 = (x781==((x782!=x783)&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x786 = -1LL;
	int32_t x787 = 61453;
	uint32_t x788 = 105099U;

    t196 = (x785==((x786!=x787)&x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x791 = -1LL;
	int64_t x792 = 4155729LL;
	int32_t t197 = 974;

    t197 = (x789==((x790!=x791)&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = 218217U;
	int16_t x794 = INT16_MIN;
	uint64_t x795 = UINT64_MAX;
	volatile int16_t x796 = -2011;
	int32_t t198 = -10521874;

    t198 = (x793==((x794!=x795)&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 63559LL;
	volatile int16_t x798 = INT16_MIN;
	int8_t x799 = -1;
	uint64_t x800 = 59542365LLU;
	static int32_t t199 = -42;

    t199 = (x797==((x798!=x799)&x800));

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

