
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

volatile int32_t t1 = 0;
int32_t t4 = -116112;
static int32_t x32 = INT32_MIN;
volatile uint8_t x38 = UINT8_MAX;
int8_t x45 = -1;
static uint64_t x49 = 31422777423LLU;
volatile uint64_t t11 = 951974701615LLU;
volatile int64_t t13 = 8079LL;
uint16_t x63 = UINT16_MAX;
static int64_t x64 = INT64_MIN;
static int32_t x66 = -121301;
int64_t x67 = -917595LL;
int32_t x72 = INT32_MIN;
static volatile int8_t x73 = 1;
uint8_t x79 = 120U;
volatile uint16_t x82 = 197U;
static uint16_t x83 = 2U;
volatile uint32_t x84 = 22757721U;
int64_t t19 = 2874424LL;
volatile uint32_t x86 = 454795806U;
static uint16_t x94 = 3446U;
int32_t t23 = 7359;
int8_t x107 = INT8_MIN;
int8_t x114 = -58;
int16_t x118 = INT16_MIN;
uint8_t x122 = 3U;
uint32_t x123 = 14U;
volatile int64_t t29 = 5328555LL;
uint8_t x126 = 7U;
int64_t x128 = 7819874609LL;
int32_t t35 = 864731188;
int8_t x153 = INT8_MAX;
int16_t x156 = INT16_MIN;
volatile uint32_t x165 = UINT32_MAX;
int8_t x173 = -7;
int8_t x175 = -8;
static uint8_t x176 = UINT8_MAX;
int32_t x181 = INT32_MAX;
int8_t x183 = -1;
volatile int16_t x184 = INT16_MIN;
volatile int32_t t44 = 1410026;
uint16_t x191 = UINT16_MAX;
volatile uint64_t x200 = UINT64_MAX;
static int8_t x202 = INT8_MAX;
static volatile int64_t x204 = INT64_MIN;
uint32_t x209 = UINT32_MAX;
uint16_t x210 = 13U;
int32_t t51 = -248486678;
uint64_t x217 = 79358543493276834LLU;
volatile int8_t x218 = INT8_MIN;
uint64_t t52 = 120471538032912LLU;
static uint8_t x224 = 1U;
static uint8_t x233 = UINT8_MAX;
volatile int32_t x234 = -1;
int64_t x238 = -1LL;
uint64_t x240 = 8605614LLU;
static uint32_t t57 = 2003136U;
int16_t x243 = -1908;
int32_t x248 = INT32_MIN;
volatile int32_t x264 = 142713892;
static uint64_t x268 = 56789504942918643LLU;
static uint16_t x269 = 985U;
uint16_t x271 = 537U;
volatile int8_t x272 = INT8_MIN;
uint8_t x273 = 11U;
int32_t x279 = 1526252;
volatile int16_t x285 = 0;
uint8_t x291 = 40U;
int8_t x294 = 47;
int64_t t71 = 224408LL;
volatile int64_t x298 = INT64_MIN;
static uint16_t x302 = 20U;
static int16_t x309 = INT16_MIN;
int32_t t78 = 47455;
volatile int32_t t80 = 2722949;
static int16_t x339 = INT16_MIN;
int64_t x340 = -1LL;
uint16_t x342 = 7252U;
static volatile int32_t x352 = INT32_MIN;
volatile int32_t x356 = INT32_MIN;
int32_t x360 = INT32_MAX;
volatile int8_t x362 = INT8_MIN;
static volatile int16_t x368 = INT16_MIN;
volatile int64_t x374 = 459830019LL;
uint32_t x375 = 7046205U;
int8_t x382 = -1;
int32_t t92 = 4;
uint64_t x386 = 441959LLU;
uint32_t x387 = UINT32_MAX;
int64_t x389 = INT64_MIN;
int32_t x390 = INT32_MIN;
int8_t x392 = -19;
int8_t x396 = -1;
int64_t x397 = -1LL;
static uint16_t x398 = UINT16_MAX;
int64_t x402 = INT64_MIN;
int8_t x404 = INT8_MAX;
int8_t x407 = -7;
volatile int32_t t99 = -13208;
uint16_t x429 = UINT16_MAX;
uint64_t x430 = UINT64_MAX;
volatile int16_t x436 = -1;
volatile int32_t t105 = -20330775;
static uint32_t t107 = 1264410116U;
int64_t x450 = INT64_MIN;
uint32_t x451 = UINT32_MAX;
int32_t x454 = -15;
uint16_t x457 = 56U;
volatile int32_t x460 = INT32_MAX;
volatile uint64_t x461 = UINT64_MAX;
static int8_t x462 = INT8_MIN;
int64_t x465 = INT64_MAX;
int32_t x469 = -12;
int64_t x476 = 6LL;
int64_t x482 = -1LL;
volatile int32_t t116 = -65345169;
int64_t t117 = 453255547485379LL;
int32_t t119 = 3;
int8_t x500 = INT8_MAX;
volatile uint16_t x508 = 5547U;
volatile int32_t t123 = 7721;
int32_t t126 = 0;
volatile int64_t x527 = INT64_MIN;
static uint16_t x534 = 3U;
uint16_t x536 = UINT16_MAX;
uint8_t x540 = UINT8_MAX;
int64_t x547 = INT64_MAX;
uint16_t x548 = UINT16_MAX;
uint64_t t132 = 19826905801956017LLU;
int32_t x550 = INT32_MAX;
int16_t x552 = 2;
int32_t t133 = 30;
uint32_t x558 = 242U;
int8_t x563 = 63;
volatile int32_t t136 = 160338073;
volatile uint64_t t137 = 29207508290LLU;
int64_t x571 = INT64_MIN;
int64_t t138 = -1984955414051305LL;
int64_t x580 = INT64_MIN;
int32_t x584 = -1;
volatile uint8_t x588 = 0U;
int8_t x598 = 63;
volatile uint64_t x599 = 66653LLU;
int16_t x602 = 2;
static int8_t x619 = INT8_MIN;
uint64_t x620 = 186127435457863LLU;
static int32_t x622 = INT32_MIN;
int8_t x627 = 15;
static int32_t x639 = INT32_MIN;
volatile int16_t x645 = INT16_MAX;
int32_t x649 = -1;
static int32_t t156 = 99973084;
volatile int32_t t157 = 0;
static int16_t x658 = 22;
int64_t x660 = 121147481237664472LL;
static int32_t x675 = INT32_MIN;
uint32_t t162 = 3779928U;
volatile int32_t x684 = INT32_MIN;
static int32_t x686 = 40784;
uint32_t x688 = 4580U;
static uint32_t x700 = 10U;
volatile int64_t t170 = -65445323081514LL;
uint16_t x719 = 2476U;
int8_t x722 = -1;
uint16_t x726 = 8949U;
int64_t x743 = INT64_MIN;
uint8_t x749 = 15U;
int64_t x753 = 8248LL;
int8_t x761 = -1;
int32_t x763 = -207152;
volatile uint8_t x768 = UINT8_MAX;
int32_t x771 = INT32_MIN;
int8_t x777 = INT8_MIN;
int32_t x778 = 143;
int64_t x779 = -54LL;
static int32_t x780 = INT32_MIN;
volatile int32_t t187 = 4417;
static int16_t x781 = -1;
int8_t x783 = 4;
static volatile int8_t x785 = INT8_MIN;
static uint64_t t190 = 51637LLU;
uint64_t x793 = UINT64_MAX;
uint64_t t191 = 28LLU;
static int32_t x797 = INT32_MIN;
int16_t x811 = INT16_MIN;
int64_t x828 = 745346LL;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	int8_t x2 = -1;
	volatile uint64_t x3 = 15890348300253515LLU;
	static uint16_t x4 = 44U;
	int32_t t0 = -3374;

    t0 = (x1&((x2/x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 48U;
	static uint32_t x6 = 1U;
	int64_t x7 = -1791LL;
	uint32_t x8 = 56431043U;

    t1 = (x5&((x6/x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int64_t x10 = -59966231023LL;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = 0U;
	int32_t t2 = -704;

    t2 = (x9&((x10/x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MAX;
	volatile uint32_t x14 = 269920647U;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int64_t t3 = 5134854689LL;

    t3 = (x13&((x14/x15)>x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = 46194;
	uint8_t x22 = 57U;
	int8_t x23 = 58;
	int16_t x24 = -3655;

    t4 = (x21&((x22/x23)>x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = 8470U;
	int64_t x26 = -1LL;
	int32_t x27 = 1;
	int32_t x28 = -1;
	volatile uint32_t t5 = 258949913U;

    t5 = (x25&((x26/x27)>x28));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	volatile int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MIN;
	volatile int64_t t6 = -11699015768507751LL;

    t6 = (x29&((x30/x31)>x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -44684718870567LL;
	static int8_t x34 = 0;
	static int32_t x35 = INT32_MAX;
	uint16_t x36 = 1357U;
	static volatile int64_t t7 = -1LL;

    t7 = (x33&((x34/x35)>x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	static uint16_t x39 = 488U;
	int16_t x40 = INT16_MAX;
	int32_t t8 = -8081024;

    t8 = (x37&((x38/x39)>x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x41 = 106189954803911857LLU;
	static uint64_t x42 = 205428111662LLU;
	int32_t x43 = -1;
	int16_t x44 = -1;
	uint64_t t9 = 1607784245967924LLU;

    t9 = (x41&((x42/x43)>x44));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x46 = 1U;
	uint32_t x47 = 116U;
	volatile int8_t x48 = 2;
	volatile int32_t t10 = 88848;

    t10 = (x45&((x46/x47)>x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MAX;
	volatile uint16_t x51 = 8922U;
	static volatile int16_t x52 = 3;

    t11 = (x49&((x50/x51)>x52));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 56U;
	volatile uint16_t x54 = UINT16_MAX;
	int8_t x55 = -4;
	int16_t x56 = INT16_MAX;
	int32_t t12 = -378481;

    t12 = (x53&((x54/x55)>x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MIN;
	uint64_t x58 = 510216419LLU;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = -1;

    t13 = (x57&((x58/x59)>x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 41458LLU;
	uint64_t x62 = UINT64_MAX;
	volatile uint64_t t14 = 9470LLU;

    t14 = (x61&((x62/x63)>x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 0;
	static int64_t x68 = INT64_MIN;
	static int32_t t15 = -10268;

    t15 = (x65&((x66/x67)>x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -3LL;
	int16_t x70 = -14;
	int16_t x71 = -1;
	int64_t t16 = 2975168746501409992LL;

    t16 = (x69&((x70/x71)>x72));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = 816;
	volatile int32_t x75 = -1;
	static int16_t x76 = -2521;
	volatile int32_t t17 = -3;

    t17 = (x73&((x74/x75)>x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 5U;
	volatile int64_t x78 = INT64_MIN;
	uint64_t x80 = 37821LLU;
	int32_t t18 = 1;

    t18 = (x77&((x78/x79)>x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 153888109920553LL;

    t19 = (x81&((x82/x83)>x84));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	static volatile int64_t x87 = -1LL;
	volatile int8_t x88 = INT8_MIN;
	int32_t t20 = 50;

    t20 = (x85&((x86/x87)>x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x89 = 1;
	int64_t x90 = 508513288719061LL;
	uint8_t x91 = 2U;
	int8_t x92 = -1;
	int32_t t21 = 3716;

    t21 = (x89&((x90/x91)>x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	static volatile int8_t x95 = INT8_MIN;
	uint64_t x96 = 113676587013LLU;
	int32_t t22 = 176647980;

    t22 = (x93&((x94/x95)>x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = 8;
	static volatile uint16_t x98 = UINT16_MAX;
	static int8_t x99 = 1;
	int32_t x100 = -1;

    t23 = (x97&((x98/x99)>x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x101 = INT64_MIN;
	uint8_t x102 = 0U;
	uint8_t x103 = 1U;
	int16_t x104 = INT16_MAX;
	volatile int64_t t24 = 118LL;

    t24 = (x101&((x102/x103)>x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = 1897;
	static int32_t x106 = -267286791;
	volatile int64_t x108 = -1LL;
	volatile int32_t t25 = 38;

    t25 = (x105&((x106/x107)>x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	uint64_t x110 = UINT64_MAX;
	static uint64_t x111 = 248549573748665254LLU;
	static uint8_t x112 = 0U;
	volatile int64_t t26 = -4218073948394LL;

    t26 = (x109&((x110/x111)>x112));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 13U;
	volatile int32_t x115 = INT32_MIN;
	uint64_t x116 = 960258662LLU;
	static volatile uint32_t t27 = 131453064U;

    t27 = (x113&((x114/x115)>x116));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 163;
	uint8_t x119 = 106U;
	static volatile int32_t x120 = INT32_MIN;
	volatile int32_t t28 = 780;

    t28 = (x117&((x118/x119)>x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = -15781829LL;
	uint32_t x124 = 0U;

    t29 = (x121&((x122/x123)>x124));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 37U;
	volatile int16_t x127 = INT16_MAX;
	volatile int32_t t30 = -7;

    t30 = (x125&((x126/x127)>x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	volatile uint64_t x130 = 1435564LLU;
	static volatile uint16_t x131 = UINT16_MAX;
	static int64_t x132 = -1LL;
	volatile int32_t t31 = -91;

    t31 = (x129&((x130/x131)>x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 3U;
	uint16_t x134 = 5U;
	int32_t x135 = INT32_MAX;
	uint8_t x136 = UINT8_MAX;
	static volatile int32_t t32 = 35;

    t32 = (x133&((x134/x135)>x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MAX;
	volatile int16_t x138 = 276;
	int8_t x139 = -1;
	volatile uint64_t x140 = UINT64_MAX;
	volatile int64_t t33 = -7689398LL;

    t33 = (x137&((x138/x139)>x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = 42;
	volatile uint16_t x146 = 587U;
	uint8_t x147 = 5U;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t34 = -14344;

    t34 = (x145&((x146/x147)>x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MAX;
	uint16_t x150 = 15697U;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = -1LL;

    t35 = (x149&((x150/x151)>x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	static int32_t t36 = 1;

    t36 = (x153&((x154/x155)>x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile int64_t x158 = INT64_MIN;
	int64_t x159 = 5LL;
	static uint8_t x160 = UINT8_MAX;
	int32_t t37 = -212141;

    t37 = (x157&((x158/x159)>x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x161 = 38158;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = -84;
	static int8_t x164 = -2;
	int32_t t38 = 5;

    t38 = (x161&((x162/x163)>x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = INT8_MAX;
	int32_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	volatile uint32_t t39 = 21323U;

    t39 = (x165&((x166/x167)>x168));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x169 = -1;
	int64_t x170 = -8LL;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	static int32_t t40 = -430358742;

    t40 = (x169&((x170/x171)>x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x174 = INT8_MAX;
	volatile int32_t t41 = -3358529;

    t41 = (x173&((x174/x175)>x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = 541001931U;
	uint64_t x178 = 669LLU;
	volatile int16_t x179 = -1;
	int32_t x180 = INT32_MAX;
	volatile uint32_t t42 = 400U;

    t42 = (x177&((x178/x179)>x180));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x182 = 280U;
	int32_t t43 = 401;

    t43 = (x181&((x182/x183)>x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = 14;
	uint64_t x186 = 3810418429906636447LLU;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;

    t44 = (x185&((x186/x187)>x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MAX;
	int16_t x190 = -1;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t45 = 382;

    t45 = (x189&((x190/x191)>x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x193 = UINT8_MAX;
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 5U;
	static int8_t x196 = -13;
	static int32_t t46 = 112978000;

    t46 = (x193&((x194/x195)>x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 3167U;
	static uint64_t x198 = UINT64_MAX;
	static int32_t x199 = INT32_MIN;
	int32_t t47 = -450;

    t47 = (x197&((x198/x199)>x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t t48 = -109158;

    t48 = (x201&((x202/x203)>x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x205 = INT64_MIN;
	static uint64_t x206 = 117LLU;
	int16_t x207 = -1;
	uint64_t x208 = 40141380494085011LLU;
	int64_t t49 = -482492310681552358LL;

    t49 = (x205&((x206/x207)>x208));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x211 = INT32_MAX;
	uint8_t x212 = 6U;
	volatile uint32_t t50 = 1853530862U;

    t50 = (x209&((x210/x211)>x212));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = 0;
	int16_t x214 = INT16_MAX;
	volatile uint64_t x215 = 79500933383LLU;
	volatile uint8_t x216 = 2U;

    t51 = (x213&((x214/x215)>x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x219 = UINT64_MAX;
	static uint8_t x220 = 0U;

    t52 = (x217&((x218/x219)>x220));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x221 = 3U;
	uint8_t x222 = 3U;
	int64_t x223 = 108890610813449511LL;
	static volatile int32_t t53 = 1738485;

    t53 = (x221&((x222/x223)>x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	static int32_t x226 = -39981790;
	int64_t x227 = -10081831LL;
	uint16_t x228 = 8U;
	static int64_t t54 = 6284495LL;

    t54 = (x225&((x226/x227)>x228));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MAX;
	int8_t x230 = -40;
	static uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MAX;
	static int64_t t55 = -1LL;

    t55 = (x229&((x230/x231)>x232));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x235 = 21909U;
	int32_t x236 = INT32_MIN;
	int32_t t56 = 4093026;

    t56 = (x233&((x234/x235)>x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = 1627U;
	int64_t x239 = -1LL;

    t57 = (x237&((x238/x239)>x240));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = INT32_MIN;
	volatile uint16_t x242 = 9U;
	int32_t x244 = -1;
	volatile int32_t t58 = -55;

    t58 = (x241&((x242/x243)>x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = INT8_MIN;
	static volatile int8_t x246 = -1;
	int64_t x247 = 13957155LL;
	int32_t t59 = 8058;

    t59 = (x245&((x246/x247)>x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x249 = 3;
	volatile int16_t x250 = -1;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t60 = 65789661;

    t60 = (x249&((x250/x251)>x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MIN;
	static int8_t x254 = 17;
	static int8_t x255 = -1;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t61 = -771117277;

    t61 = (x253&((x254/x255)>x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = -110465985;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = -106;
	static uint64_t t62 = 10877737473LLU;

    t62 = (x257&((x258/x259)>x260));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x261 = INT64_MAX;
	volatile uint8_t x262 = 3U;
	int32_t x263 = -1;
	int64_t t63 = 2LL;

    t63 = (x261&((x262/x263)>x264));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = -1;
	uint16_t x266 = 1U;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t t64 = 114175465;

    t64 = (x265&((x266/x267)>x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x270 = -1LL;
	volatile int32_t t65 = -572881;

    t65 = (x269&((x270/x271)>x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x274 = 0U;
	uint64_t x275 = 263598149045343776LLU;
	static uint8_t x276 = UINT8_MAX;
	volatile int32_t t66 = 16107403;

    t66 = (x273&((x274/x275)>x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	int8_t x280 = -1;
	int32_t t67 = 1;

    t67 = (x277&((x278/x279)>x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x281 = 962349U;
	int8_t x282 = INT8_MAX;
	int32_t x283 = INT32_MAX;
	uint8_t x284 = UINT8_MAX;
	static uint32_t t68 = 1038393738U;

    t68 = (x281&((x282/x283)>x284));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x286 = -1;
	static int8_t x287 = 1;
	int32_t x288 = INT32_MIN;
	int32_t t69 = 1162;

    t69 = (x285&((x286/x287)>x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint64_t x292 = 8420703867442LLU;
	int32_t t70 = 2147;

    t70 = (x289&((x290/x291)>x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = 295699499LL;
	uint32_t x295 = 1102358U;
	int64_t x296 = INT64_MIN;

    t71 = (x293&((x294/x295)>x296));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x297 = INT16_MIN;
	int8_t x299 = 9;
	int32_t x300 = INT32_MAX;
	int32_t t72 = 32732;

    t72 = (x297&((x298/x299)>x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MAX;
	static uint32_t x303 = UINT32_MAX;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t73 = 1;

    t73 = (x301&((x302/x303)>x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x305 = UINT32_MAX;
	static int16_t x306 = 5;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -1;
	uint32_t t74 = 1U;

    t74 = (x305&((x306/x307)>x308));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x310 = 848319204804LLU;
	int64_t x311 = INT64_MIN;
	static int8_t x312 = 0;
	volatile int32_t t75 = -81848044;

    t75 = (x309&((x310/x311)>x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x313 = 3574147500877840LL;
	int32_t x314 = -1;
	uint64_t x315 = 26LLU;
	uint64_t x316 = UINT64_MAX;
	int64_t t76 = 6246030225LL;

    t76 = (x313&((x314/x315)>x316));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x317 = -1;
	int16_t x318 = 63;
	uint16_t x319 = 47U;
	volatile int64_t x320 = -1LL;
	int32_t t77 = -2442048;

    t77 = (x317&((x318/x319)>x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x321 = 14196U;
	uint16_t x322 = UINT16_MAX;
	static uint32_t x323 = 10589U;
	int32_t x324 = INT32_MAX;

    t78 = (x321&((x322/x323)>x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = INT8_MAX;
	uint32_t x326 = UINT32_MAX;
	uint8_t x327 = UINT8_MAX;
	static volatile uint64_t x328 = 47105621570758LLU;
	static volatile int32_t t79 = 173;

    t79 = (x325&((x326/x327)>x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x329 = INT8_MAX;
	static int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	int16_t x332 = -1;

    t80 = (x329&((x330/x331)>x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -1LL;
	int32_t t81 = 231958;

    t81 = (x333&((x334/x335)>x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x337 = INT32_MAX;
	volatile int16_t x338 = INT16_MIN;
	volatile int32_t t82 = 1779;

    t82 = (x337&((x338/x339)>x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x341 = UINT32_MAX;
	int32_t x343 = INT32_MAX;
	int32_t x344 = -1;
	volatile uint32_t t83 = 28444403U;

    t83 = (x341&((x342/x343)>x344));

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x345 = INT16_MAX;
	volatile int64_t x346 = INT64_MAX;
	static volatile int64_t x347 = -1LL;
	static int64_t x348 = -985238473LL;
	int32_t t84 = 43311;

    t84 = (x345&((x346/x347)>x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	uint32_t x350 = UINT32_MAX;
	static int64_t x351 = 804LL;
	int32_t t85 = 194;

    t85 = (x349&((x350/x351)>x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = 112003052556619180LL;
	int64_t x354 = INT64_MAX;
	static int8_t x355 = INT8_MIN;
	int64_t t86 = 12404LL;

    t86 = (x353&((x354/x355)>x356));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 57U;
	uint8_t x358 = 3U;
	int16_t x359 = -1;
	static volatile int32_t t87 = 307;

    t87 = (x357&((x358/x359)>x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x361 = INT8_MIN;
	volatile int32_t x363 = 37;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t88 = -37954;

    t88 = (x361&((x362/x363)>x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	uint8_t x366 = 0U;
	static volatile uint64_t x367 = 111690432959916788LLU;
	static volatile int64_t t89 = -99LL;

    t89 = (x365&((x366/x367)>x368));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x369 = 2U;
	int64_t x370 = -1LL;
	int32_t x371 = INT32_MAX;
	static int16_t x372 = -1;
	volatile uint32_t t90 = 45U;

    t90 = (x369&((x370/x371)>x372));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = 1255U;
	int16_t x376 = INT16_MIN;
	volatile uint32_t t91 = 40861U;

    t91 = (x373&((x374/x375)>x376));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = -514;
	static int16_t x383 = INT16_MIN;
	uint8_t x384 = 4U;

    t92 = (x381&((x382/x383)>x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = UINT64_MAX;
	static int32_t x388 = -11460727;
	uint64_t t93 = 32177918235653370LLU;

    t93 = (x385&((x386/x387)>x388));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x391 = INT64_MIN;
	volatile int64_t t94 = -5419LL;

    t94 = (x389&((x390/x391)>x392));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = -7651;
	static uint8_t x395 = 27U;
	int32_t t95 = 949760;

    t95 = (x393&((x394/x395)>x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x399 = -45639797371734LL;
	int32_t x400 = -1;
	volatile int64_t t96 = 16LL;

    t96 = (x397&((x398/x399)>x400));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x401 = 11259147918955LLU;
	int64_t x403 = INT64_MIN;
	uint64_t t97 = 4145941509418LLU;

    t97 = (x401&((x402/x403)>x404));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = 2147795636123186307LLU;
	static int16_t x406 = -1;
	uint64_t x408 = 1LLU;
	static volatile uint64_t t98 = 433954585LLU;

    t98 = (x405&((x406/x407)>x408));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x409 = -7;
	int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MAX;
	volatile int16_t x412 = INT16_MIN;

    t99 = (x409&((x410/x411)>x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = 805601621U;
	volatile int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MAX;
	int16_t x416 = INT16_MIN;
	uint32_t t100 = 1012572522U;

    t100 = (x413&((x414/x415)>x416));

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x417 = 0;
	static int64_t x418 = INT64_MAX;
	volatile int32_t x419 = INT32_MAX;
	static uint32_t x420 = 917328694U;
	int32_t t101 = 223325;

    t101 = (x417&((x418/x419)>x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x425 = -4;
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	static uint16_t x428 = UINT16_MAX;
	int32_t t102 = 0;

    t102 = (x425&((x426/x427)>x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x431 = 59U;
	static uint64_t x432 = 64186690LLU;
	int32_t t103 = -253;

    t103 = (x429&((x430/x431)>x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = 36U;
	int64_t x434 = -1LL;
	int32_t x435 = INT32_MAX;
	volatile int32_t t104 = -26955;

    t104 = (x433&((x434/x435)>x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = -997;
	volatile uint16_t x438 = 28U;
	volatile int32_t x439 = -1;
	int32_t x440 = INT32_MIN;

    t105 = (x437&((x438/x439)>x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x441 = -1LL;
	volatile uint16_t x442 = 3024U;
	int64_t x443 = INT64_MAX;
	uint64_t x444 = 3081720LLU;
	volatile int64_t t106 = 18LL;

    t106 = (x441&((x442/x443)>x444));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x446 = 155477653LL;
	int8_t x447 = INT8_MIN;
	volatile int8_t x448 = INT8_MIN;

    t107 = (x445&((x446/x447)>x448));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x449 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	int64_t t108 = -117510968185LL;

    t108 = (x449&((x450/x451)>x452));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x453 = 159533307738LLU;
	int8_t x455 = -1;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t109 = 284120733390LLU;

    t109 = (x453&((x454/x455)>x456));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x458 = INT16_MAX;
	volatile int16_t x459 = INT16_MAX;
	volatile int32_t t110 = -142;

    t110 = (x457&((x458/x459)>x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x463 = 2938;
	int8_t x464 = INT8_MIN;
	uint64_t t111 = 614448616552LLU;

    t111 = (x461&((x462/x463)>x464));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x466 = UINT8_MAX;
	int64_t x467 = INT64_MAX;
	static int64_t x468 = -1LL;
	volatile int64_t t112 = 330641858116451LL;

    t112 = (x465&((x466/x467)>x468));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x470 = INT8_MAX;
	int8_t x471 = 43;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t113 = -7092;

    t113 = (x469&((x470/x471)>x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x473 = 6828U;
	uint16_t x474 = 253U;
	uint8_t x475 = 69U;
	static volatile uint32_t t114 = 12786901U;

    t114 = (x473&((x474/x475)>x476));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = -1LL;
	static volatile int32_t x478 = INT32_MIN;
	int32_t x479 = INT32_MIN;
	volatile int64_t x480 = -1LL;
	int64_t t115 = -7889393443LL;

    t115 = (x477&((x478/x479)>x480));

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = 12;
	int16_t x483 = INT16_MIN;
	volatile int16_t x484 = -115;

    t116 = (x481&((x482/x483)>x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x485 = 1398602464529021LL;
	int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;

    t117 = (x485&((x486/x487)>x488));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MAX;
	int16_t x491 = INT16_MIN;
	int16_t x492 = -241;
	int32_t t118 = 29434357;

    t118 = (x489&((x490/x491)>x492));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x493 = INT8_MIN;
	static uint64_t x494 = 473LLU;
	volatile int16_t x495 = -12;
	uint16_t x496 = 0U;

    t119 = (x493&((x494/x495)>x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x497 = 1047U;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	static volatile int32_t t120 = -4255;

    t120 = (x497&((x498/x499)>x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MAX;
	volatile int32_t x502 = 716909;
	int16_t x503 = -47;
	static uint64_t x504 = 24LLU;
	volatile int32_t t121 = 1;

    t121 = (x501&((x502/x503)>x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	int8_t x507 = -1;
	int32_t t122 = 8787805;

    t122 = (x505&((x506/x507)>x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x509 = 4U;
	int64_t x510 = -10533LL;
	int32_t x511 = INT32_MIN;
	volatile int64_t x512 = INT64_MIN;

    t123 = (x509&((x510/x511)>x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x513 = -540939809744353LL;
	int8_t x514 = -4;
	int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t124 = 2906532953474265048LL;

    t124 = (x513&((x514/x515)>x516));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 14U;
	static int8_t x518 = INT8_MIN;
	static uint64_t x519 = UINT64_MAX;
	int16_t x520 = -3;
	int32_t t125 = 1;

    t125 = (x517&((x518/x519)>x520));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x521 = 1;
	volatile int32_t x522 = -1;
	volatile uint32_t x523 = UINT32_MAX;
	int16_t x524 = INT16_MAX;

    t126 = (x521&((x522/x523)>x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = INT32_MIN;
	volatile int8_t x526 = INT8_MAX;
	int16_t x528 = INT16_MIN;
	volatile int32_t t127 = 0;

    t127 = (x525&((x526/x527)>x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x530 = INT64_MAX;
	int64_t x531 = INT64_MAX;
	uint64_t x532 = 232301188LLU;
	volatile int64_t t128 = -79626929928865035LL;

    t128 = (x529&((x530/x531)>x532));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = INT8_MIN;
	static int32_t x535 = -1;
	int32_t t129 = -4176;

    t129 = (x533&((x534/x535)>x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = 1;
	static int64_t x538 = -1LL;
	int64_t x539 = -1LL;
	volatile int32_t t130 = 2202;

    t130 = (x537&((x538/x539)>x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = -1;
	int32_t x542 = INT32_MIN;
	int32_t x543 = -1505860;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t131 = -1024530;

    t131 = (x541&((x542/x543)>x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = 9955043562206LLU;
	int16_t x546 = 26;

    t132 = (x545&((x546/x547)>x548));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x549 = INT16_MIN;
	static volatile int8_t x551 = -1;

    t133 = (x549&((x550/x551)>x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x553 = -1;
	int32_t x554 = INT32_MIN;
	static int32_t x555 = -15370164;
	static int32_t x556 = INT32_MAX;
	int32_t t134 = 7038511;

    t134 = (x553&((x554/x555)>x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = UINT64_MAX;
	uint8_t x559 = 35U;
	volatile int16_t x560 = -1;
	uint64_t t135 = 3379506LLU;

    t135 = (x557&((x558/x559)>x560));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = 8;
	int32_t x562 = 0;
	volatile uint16_t x564 = 0U;

    t136 = (x561&((x562/x563)>x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 6071750LLU;
	static int8_t x566 = INT8_MIN;
	uint32_t x567 = UINT32_MAX;
	volatile int64_t x568 = 85895413LL;

    t137 = (x565&((x566/x567)>x568));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x569 = 220LL;
	int64_t x570 = 154334591564LL;
	uint8_t x572 = 3U;

    t138 = (x569&((x570/x571)>x572));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x573 = -1LL;
	int32_t x574 = -1;
	int16_t x575 = INT16_MAX;
	uint8_t x576 = UINT8_MAX;
	int64_t t139 = -842780995556LL;

    t139 = (x573&((x574/x575)>x576));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x577 = 71U;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = 7U;
	static volatile int32_t t140 = -756;

    t140 = (x577&((x578/x579)>x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = INT16_MIN;
	static volatile int16_t x582 = 169;
	uint16_t x583 = 11386U;
	int32_t t141 = 387;

    t141 = (x581&((x582/x583)>x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = -10;
	static uint8_t x586 = 25U;
	uint16_t x587 = UINT16_MAX;
	int32_t t142 = -172151;

    t142 = (x585&((x586/x587)>x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x597 = -23759LL;
	int32_t x600 = INT32_MIN;
	volatile int64_t t143 = 56338256952LL;

    t143 = (x597&((x598/x599)>x600));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = 51293LL;
	int8_t x603 = INT8_MAX;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t144 = 512580373965683619LL;

    t144 = (x601&((x602/x603)>x604));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x605 = 63672174U;
	uint16_t x606 = 24045U;
	uint32_t x607 = 4666507U;
	static uint8_t x608 = UINT8_MAX;
	volatile uint32_t t145 = 9195U;

    t145 = (x605&((x606/x607)>x608));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MAX;
	int8_t x611 = -58;
	int64_t x612 = INT64_MAX;
	volatile int32_t t146 = 784;

    t146 = (x609&((x610/x611)>x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x613 = 0;
	uint64_t x614 = 10243200995749636LLU;
	volatile int16_t x615 = -14;
	int32_t x616 = INT32_MIN;
	volatile int32_t t147 = -94905864;

    t147 = (x613&((x614/x615)>x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	int64_t x618 = -1011447673666LL;
	volatile uint32_t t148 = 1646U;

    t148 = (x617&((x618/x619)>x620));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x621 = UINT64_MAX;
	static int16_t x623 = -4600;
	static int8_t x624 = INT8_MAX;
	uint64_t t149 = 38203307LLU;

    t149 = (x621&((x622/x623)>x624));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = -1;
	int32_t x626 = INT32_MAX;
	int32_t x628 = -1;
	volatile int32_t t150 = -117989;

    t150 = (x625&((x626/x627)>x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x629 = 15644U;
	static uint16_t x630 = 112U;
	int16_t x631 = -1;
	uint64_t x632 = 70626579LLU;
	volatile int32_t t151 = -46;

    t151 = (x629&((x630/x631)>x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	uint16_t x634 = 3019U;
	int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MAX;
	volatile int32_t t152 = -19632945;

    t152 = (x633&((x634/x635)>x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = INT32_MIN;
	uint8_t x638 = 8U;
	int8_t x640 = INT8_MAX;
	int32_t t153 = 48070;

    t153 = (x637&((x638/x639)>x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x641 = -1;
	static int16_t x642 = INT16_MIN;
	int32_t x643 = INT32_MAX;
	static int8_t x644 = INT8_MAX;
	volatile int32_t t154 = 1;

    t154 = (x641&((x642/x643)>x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x646 = INT8_MIN;
	int16_t x647 = -1;
	int16_t x648 = INT16_MIN;
	volatile int32_t t155 = 65362079;

    t155 = (x645&((x646/x647)>x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x650 = INT16_MAX;
	uint64_t x651 = UINT64_MAX;
	volatile int32_t x652 = -1;

    t156 = (x649&((x650/x651)>x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x653 = -1;
	uint16_t x654 = 1U;
	volatile int16_t x655 = INT16_MAX;
	static int8_t x656 = -1;

    t157 = (x653&((x654/x655)>x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x657 = 29U;
	volatile int8_t x659 = INT8_MIN;
	static volatile uint32_t t158 = 1224256U;

    t158 = (x657&((x658/x659)>x660));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x661 = 44;
	int16_t x662 = INT16_MIN;
	static int64_t x663 = INT64_MIN;
	volatile int8_t x664 = -1;
	static volatile int32_t t159 = 1459;

    t159 = (x661&((x662/x663)>x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x665 = -1;
	int8_t x666 = INT8_MAX;
	static volatile uint16_t x667 = 7U;
	int16_t x668 = -1;
	static int32_t t160 = 5314;

    t160 = (x665&((x666/x667)>x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x669 = -9;
	static volatile int64_t x670 = INT64_MIN;
	int64_t x671 = 117584232424LL;
	int16_t x672 = -1;
	int32_t t161 = 4293;

    t161 = (x669&((x670/x671)>x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x673 = 32U;
	static int8_t x674 = INT8_MIN;
	static int32_t x676 = INT32_MIN;

    t162 = (x673&((x674/x675)>x676));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x677 = 1158;
	int32_t x678 = -1;
	int16_t x679 = -11572;
	volatile int64_t x680 = -1LL;
	static volatile int32_t t163 = -63039709;

    t163 = (x677&((x678/x679)>x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x681 = 7U;
	int8_t x682 = -14;
	static uint64_t x683 = UINT64_MAX;
	static volatile int32_t t164 = 13972417;

    t164 = (x681&((x682/x683)>x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x685 = 0U;
	static int8_t x687 = -21;
	static int32_t t165 = -886903;

    t165 = (x685&((x686/x687)>x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x689 = UINT8_MAX;
	static volatile int32_t x690 = 440126385;
	int32_t x691 = -1;
	volatile uint64_t x692 = 612LLU;
	int32_t t166 = 65871;

    t166 = (x689&((x690/x691)>x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = -60863;
	static volatile uint32_t x694 = UINT32_MAX;
	uint8_t x695 = 3U;
	static volatile uint64_t x696 = UINT64_MAX;
	volatile int32_t t167 = -193;

    t167 = (x693&((x694/x695)>x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x697 = INT64_MAX;
	uint16_t x698 = 13212U;
	int8_t x699 = INT8_MAX;
	volatile int64_t t168 = -216LL;

    t168 = (x697&((x698/x699)>x700));

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x701 = 32411276695784LLU;
	int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MIN;
	static int16_t x704 = -1;
	uint64_t t169 = 87079LLU;

    t169 = (x701&((x702/x703)>x704));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = -87554910730LL;
	uint32_t x706 = 11195057U;
	int16_t x707 = -1;
	uint8_t x708 = UINT8_MAX;

    t170 = (x705&((x706/x707)>x708));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x709 = -1LL;
	int32_t x710 = -1;
	int32_t x711 = 174;
	volatile int16_t x712 = INT16_MAX;
	volatile int64_t t171 = -33LL;

    t171 = (x709&((x710/x711)>x712));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x713 = 253U;
	int16_t x714 = INT16_MIN;
	static int16_t x715 = INT16_MAX;
	int8_t x716 = 6;
	int32_t t172 = -78789361;

    t172 = (x713&((x714/x715)>x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x717 = INT8_MIN;
	uint64_t x718 = 16837527117329472LLU;
	volatile int64_t x720 = 265612170435LL;
	int32_t t173 = 63818;

    t173 = (x717&((x718/x719)>x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = INT16_MIN;
	int32_t x723 = INT32_MAX;
	int16_t x724 = INT16_MAX;
	static int32_t t174 = 454;

    t174 = (x721&((x722/x723)>x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x725 = INT8_MIN;
	static volatile uint64_t x727 = 458223132506790LLU;
	uint16_t x728 = 446U;
	int32_t t175 = -12656470;

    t175 = (x725&((x726/x727)>x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x730 = 514206799170397LLU;
	int8_t x731 = INT8_MAX;
	uint64_t x732 = 672141541675074LLU;
	int32_t t176 = -2869;

    t176 = (x729&((x730/x731)>x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x733 = 0U;
	int32_t x734 = -1;
	int8_t x735 = INT8_MIN;
	uint8_t x736 = 0U;
	int32_t t177 = 125;

    t177 = (x733&((x734/x735)>x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x737 = 61409851U;
	uint16_t x738 = UINT16_MAX;
	volatile int16_t x739 = INT16_MAX;
	uint8_t x740 = UINT8_MAX;
	uint32_t t178 = 31571139U;

    t178 = (x737&((x738/x739)>x740));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = -3871;
	uint64_t x742 = UINT64_MAX;
	static int32_t x744 = INT32_MAX;
	static volatile int32_t t179 = -9125;

    t179 = (x741&((x742/x743)>x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x745 = -1;
	static int8_t x746 = -1;
	uint32_t x747 = 459714770U;
	int32_t x748 = INT32_MAX;
	static int32_t t180 = 3619831;

    t180 = (x745&((x746/x747)>x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x750 = INT64_MIN;
	static volatile int64_t x751 = INT64_MAX;
	volatile uint32_t x752 = 1410U;
	static int32_t t181 = -1981328;

    t181 = (x749&((x750/x751)>x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x754 = 0U;
	int32_t x755 = 5871;
	static volatile int16_t x756 = -1;
	int64_t t182 = 76343026186677862LL;

    t182 = (x753&((x754/x755)>x756));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x762 = INT32_MIN;
	static uint16_t x764 = UINT16_MAX;
	int32_t t183 = -40921215;

    t183 = (x761&((x762/x763)>x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x765 = -1;
	int16_t x766 = INT16_MIN;
	volatile int64_t x767 = INT64_MIN;
	volatile int32_t t184 = 4371;

    t184 = (x765&((x766/x767)>x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = 214487668;
	uint64_t x770 = 10264LLU;
	volatile uint64_t x772 = 41327273243893897LLU;
	volatile int32_t t185 = 334433679;

    t185 = (x769&((x770/x771)>x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x773 = INT32_MIN;
	uint64_t x774 = 16774158252781LLU;
	int32_t x775 = 56;
	int64_t x776 = INT64_MIN;
	int32_t t186 = -436052811;

    t186 = (x773&((x774/x775)>x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    

    t187 = (x777&((x778/x779)>x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x782 = -66285034649714426LL;
	int16_t x784 = INT16_MIN;
	volatile int32_t t188 = -486054343;

    t188 = (x781&((x782/x783)>x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x786 = INT8_MAX;
	int16_t x787 = -1;
	int64_t x788 = -816399570LL;
	int32_t t189 = 230;

    t189 = (x785&((x786/x787)>x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x789 = 7450727088658000850LLU;
	volatile int8_t x790 = INT8_MIN;
	volatile int32_t x791 = -1;
	static int8_t x792 = INT8_MIN;

    t190 = (x789&((x790/x791)>x792));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x794 = UINT16_MAX;
	int8_t x795 = INT8_MAX;
	volatile uint8_t x796 = 29U;

    t191 = (x793&((x794/x795)>x796));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x798 = -7;
	int16_t x799 = -1;
	int16_t x800 = INT16_MIN;
	volatile int32_t t192 = 111;

    t192 = (x797&((x798/x799)>x800));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x801 = -1;
	uint64_t x802 = UINT64_MAX;
	static uint32_t x803 = UINT32_MAX;
	uint16_t x804 = UINT16_MAX;
	int32_t t193 = 3;

    t193 = (x801&((x802/x803)>x804));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = -15255;
	int32_t x806 = -379080746;
	int64_t x807 = -111657899LL;
	int8_t x808 = -1;
	int32_t t194 = -116488600;

    t194 = (x805&((x806/x807)>x808));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x809 = 6872412981LLU;
	int64_t x810 = -1LL;
	int16_t x812 = INT16_MIN;
	uint64_t t195 = 133462953627890936LLU;

    t195 = (x809&((x810/x811)>x812));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = -683570;
	uint64_t x814 = 846413970531091LLU;
	static int64_t x815 = INT64_MIN;
	uint8_t x816 = 39U;
	volatile int32_t t196 = -107517209;

    t196 = (x813&((x814/x815)>x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x817 = 3U;
	static int64_t x818 = -1LL;
	static int8_t x819 = -2;
	uint8_t x820 = 4U;
	int32_t t197 = -1;

    t197 = (x817&((x818/x819)>x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x821 = 637396161;
	int32_t x822 = INT32_MAX;
	uint64_t x823 = UINT64_MAX;
	volatile int64_t x824 = INT64_MIN;
	int32_t t198 = -549469;

    t198 = (x821&((x822/x823)>x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x825 = 1028080U;
	static uint8_t x826 = 3U;
	uint64_t x827 = 1579896LLU;
	volatile uint32_t t199 = 378725U;

    t199 = (x825&((x826/x827)>x828));

    if (t199 != 0U) { NG(); } else { ; }
	
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

