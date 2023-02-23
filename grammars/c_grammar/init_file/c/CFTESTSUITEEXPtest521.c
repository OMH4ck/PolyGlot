
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

int64_t x1 = 17069809LL;
volatile int8_t x2 = -1;
int16_t x3 = -169;
volatile uint8_t x18 = 3U;
volatile int8_t x21 = INT8_MIN;
volatile uint8_t x23 = UINT8_MAX;
volatile int64_t x28 = -33532626048372LL;
volatile int32_t t3 = 2130;
static int8_t x32 = 2;
volatile int64_t x41 = -22886LL;
uint8_t x45 = UINT8_MAX;
static int16_t x58 = INT16_MAX;
volatile uint16_t x61 = UINT16_MAX;
volatile int64_t x80 = -27255LL;
volatile int16_t x81 = INT16_MAX;
volatile int32_t x95 = 68;
volatile int8_t x104 = INT8_MIN;
uint16_t x109 = 1101U;
uint32_t x112 = 24U;
int32_t t20 = 39561402;
volatile int16_t x122 = -62;
volatile uint64_t t23 = 1366LLU;
volatile uint64_t x137 = 215746346LLU;
static int64_t x141 = 14674007735146083LL;
int8_t x146 = INT8_MIN;
int8_t x152 = -1;
volatile uint8_t x153 = UINT8_MAX;
uint8_t x154 = 1U;
int8_t x156 = INT8_MIN;
int8_t x158 = INT8_MIN;
int32_t t33 = 4;
static int16_t x169 = 994;
int64_t x178 = 240077LL;
int16_t x183 = -1;
uint8_t x193 = UINT8_MAX;
static int16_t x200 = INT16_MIN;
static uint64_t x201 = 1LLU;
static int8_t x203 = -1;
int16_t x232 = 3;
volatile int32_t t44 = INT32_MIN;
int8_t x237 = INT8_MAX;
static uint16_t x238 = UINT16_MAX;
volatile uint16_t x245 = 537U;
uint32_t x247 = 1819585U;
uint64_t x249 = 777611930200164138LLU;
int16_t x252 = INT16_MAX;
int32_t t49 = 677610;
int64_t x261 = -118695972918076LL;
static int8_t x266 = 1;
int64_t x286 = 923077160462LL;
static uint64_t x289 = 26524191482LLU;
int16_t x290 = -1;
volatile uint64_t t57 = 6944390428LLU;
static int8_t x311 = INT8_MIN;
volatile int16_t x313 = 1;
volatile int64_t t61 = 15478LL;
static uint8_t x328 = 36U;
static int64_t x336 = -1LL;
int64_t x343 = -1LL;
int16_t x355 = INT16_MIN;
static uint32_t x360 = 33257916U;
static volatile uint64_t x362 = UINT64_MAX;
int16_t x370 = INT16_MAX;
static int32_t x374 = -25059;
static uint16_t x376 = UINT16_MAX;
uint64_t x380 = 148LLU;
int32_t t72 = 81;
volatile int32_t t73 = 13368;
uint16_t x390 = 11U;
uint16_t x394 = UINT16_MAX;
static int8_t x405 = 3;
static uint8_t x409 = 117U;
uint8_t x411 = 13U;
volatile int32_t t78 = -5;
int64_t x418 = INT64_MIN;
uint32_t x422 = UINT32_MAX;
uint32_t x430 = 226532U;
volatile int32_t x432 = 9227255;
int16_t x449 = INT16_MIN;
int8_t x462 = -56;
volatile uint32_t x463 = 16558U;
volatile int8_t x474 = INT8_MIN;
volatile int8_t x479 = INT8_MAX;
volatile uint32_t x480 = 837492U;
volatile int32_t t92 = 104312;
uint8_t x498 = 1U;
int64_t x499 = -456139LL;
int8_t x511 = 4;
int64_t x516 = 10300072LL;
int8_t x521 = 0;
int16_t x522 = INT16_MIN;
static int16_t x525 = -50;
uint8_t x526 = 0U;
int8_t x527 = -1;
int8_t x528 = INT8_MIN;
int16_t x536 = INT16_MIN;
int32_t x546 = -1;
int8_t x547 = -1;
int32_t x548 = INT32_MIN;
uint32_t x556 = 762357110U;
int64_t x562 = -1LL;
int8_t x563 = -1;
static int32_t t107 = 18;
uint16_t x570 = UINT16_MAX;
int32_t x571 = -1;
volatile int32_t x573 = -583715;
uint16_t x582 = 1555U;
volatile int8_t x584 = -2;
int64_t x589 = 5769277933LL;
volatile uint8_t x592 = UINT8_MAX;
int32_t x595 = INT32_MIN;
static int64_t x598 = INT64_MAX;
uint8_t x599 = 1U;
volatile int32_t t115 = -152;
int32_t x607 = INT32_MIN;
static volatile int64_t x611 = -1LL;
static uint32_t x612 = 15U;
int32_t t117 = -1008402;
int8_t x613 = INT8_MIN;
uint64_t x614 = 81971683LLU;
int32_t t118 = -4;
uint8_t x617 = UINT8_MAX;
volatile int32_t t119 = -123;
int16_t x623 = -1;
static int32_t x634 = 242;
int32_t t122 = 469592;
int8_t x649 = INT8_MIN;
uint8_t x650 = UINT8_MAX;
uint8_t x652 = 8U;
int32_t x653 = INT32_MIN;
int32_t x656 = 1;
int32_t t125 = 1;
int16_t x657 = INT16_MAX;
static volatile uint16_t x666 = 26U;
int8_t x675 = INT8_MIN;
uint8_t x677 = UINT8_MAX;
volatile int32_t t131 = -394257249;
static int16_t x685 = INT16_MIN;
uint32_t t133 = UINT32_MAX;
int8_t x705 = INT8_MIN;
static int32_t t135 = 4101;
static int16_t x714 = -1;
volatile int64_t x716 = INT64_MAX;
int16_t x717 = -1;
uint8_t x719 = UINT8_MAX;
int16_t x731 = INT16_MIN;
int32_t x738 = 164812702;
uint8_t x740 = UINT8_MAX;
int32_t t142 = 11832;
volatile int8_t x746 = -1;
int64_t t144 = INT64_MAX;
volatile int32_t x757 = INT32_MIN;
int16_t x760 = INT16_MIN;
static int32_t x761 = INT32_MIN;
uint8_t x785 = 38U;
volatile int32_t x786 = INT32_MAX;
int16_t x794 = -1;
int32_t x811 = -103240;
static int32_t t156 = 125;
static uint32_t x821 = 1047U;
uint64_t x823 = 216010LLU;
uint16_t x830 = 2U;
volatile int64_t t160 = 630003906765LL;
int8_t x868 = 7;
volatile int32_t t165 = 12740;
uint8_t x869 = 7U;
static int32_t x871 = 4990;
uint64_t x875 = 1LLU;
volatile uint64_t t169 = UINT64_MAX;
static uint8_t x902 = 0U;
int16_t x903 = INT16_MAX;
uint8_t x922 = UINT8_MAX;
int16_t x931 = -1;
volatile int64_t t175 = -1308450685117LL;
int16_t x937 = INT16_MIN;
int16_t x945 = INT16_MIN;
static uint32_t x946 = 2U;
static int32_t x947 = 13311;
int32_t x948 = INT32_MIN;
static uint32_t x949 = 13U;
int16_t x951 = -1;
int16_t x955 = INT16_MAX;
volatile int64_t t181 = 40871478588LL;
uint64_t x965 = UINT64_MAX;
int32_t x968 = -1;
volatile uint8_t x975 = 1U;
volatile int8_t x982 = INT8_MIN;
uint8_t x989 = 4U;
int32_t x1009 = INT32_MIN;
int8_t x1010 = INT8_MIN;
volatile int16_t x1017 = INT16_MIN;
volatile int32_t t192 = 7680439;
uint8_t x1021 = 56U;
uint16_t x1026 = 868U;
int16_t x1027 = INT16_MIN;
int64_t x1040 = 245174LL;
static uint16_t x1045 = 62U;
int32_t x1046 = 68999;
volatile int32_t t197 = -43;


void f0(void) {
    	uint8_t x4 = 0U;
	volatile int64_t t0 = -573651548351290LL;

    t0 = (x1*((x2*x3)<=x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x17 = 6862544;
	static volatile uint32_t x19 = 34U;
	int16_t x20 = INT16_MAX;
	volatile int32_t t1 = -142501470;

    t1 = (x17*((x18*x19)<=x20));

    if (t1 != 6862544) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x22 = UINT32_MAX;
	volatile int32_t x24 = INT32_MIN;
	int32_t t2 = 759607;

    t2 = (x21*((x22*x23)<=x24));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x26 = -1;
	int16_t x27 = 8217;

    t3 = (x25*((x26*x27)<=x28));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 943757863U;
	int8_t x30 = INT8_MAX;
	int32_t x31 = -2;
	uint32_t t4 = 7336966U;

    t4 = (x29*((x30*x31)<=x32));

    if (t4 != 943757863U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = 982574U;
	int32_t x34 = 61;
	int32_t x35 = -1;
	int64_t x36 = INT64_MIN;
	uint32_t t5 = 5679426U;

    t5 = (x33*((x34*x35)<=x36));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x42 = -12;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = -1;
	int64_t t6 = 454628489609269052LL;

    t6 = (x41*((x42*x43)<=x44));

    if (t6 != -22886LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x46 = UINT8_MAX;
	static int8_t x47 = -57;
	volatile uint16_t x48 = 13726U;
	int32_t t7 = 61;

    t7 = (x45*((x46*x47)<=x48));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x49 = 2;
	int32_t x50 = -75129961;
	int32_t x51 = -1;
	static int16_t x52 = 0;
	int32_t t8 = -1004275713;

    t8 = (x49*((x50*x51)<=x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x53 = INT64_MIN;
	static int32_t x54 = -1110913;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = -1009547777364900584LL;
	int64_t t9 = 72113LL;

    t9 = (x53*((x54*x55)<=x56));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x57 = -1;
	int16_t x59 = -1;
	int16_t x60 = INT16_MAX;
	volatile int32_t t10 = 4463;

    t10 = (x57*((x58*x59)<=x60));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x62 = INT8_MIN;
	uint32_t x63 = 1948367U;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t11 = -26284327;

    t11 = (x61*((x62*x63)<=x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = INT64_MIN;
	static int16_t x66 = INT16_MAX;
	uint32_t x67 = UINT32_MAX;
	uint16_t x68 = 294U;
	static int64_t t12 = 3LL;

    t12 = (x65*((x66*x67)<=x68));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x73 = 760LLU;
	static int32_t x74 = 19139;
	int16_t x75 = -1;
	volatile uint64_t x76 = 6LLU;
	volatile uint64_t t13 = 26LLU;

    t13 = (x73*((x74*x75)<=x76));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x77 = INT32_MIN;
	volatile uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = 347644;
	int32_t t14 = 73;

    t14 = (x77*((x78*x79)<=x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x82 = UINT8_MAX;
	volatile uint16_t x83 = 5U;
	int8_t x84 = -1;
	volatile int32_t t15 = -92256;

    t15 = (x81*((x82*x83)<=x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = 15U;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;
	static uint32_t t16 = UINT32_MAX;

    t16 = (x89*((x90*x91)<=x92));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x93 = INT32_MAX;
	static uint32_t x94 = UINT32_MAX;
	static int64_t x96 = 75850LL;
	volatile int32_t t17 = -188;

    t17 = (x93*((x94*x95)<=x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = INT16_MIN;
	volatile uint32_t x102 = 125884417U;
	volatile int32_t x103 = INT32_MIN;
	int32_t t18 = -1961217;

    t18 = (x101*((x102*x103)<=x104));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x105 = 10840U;
	int8_t x106 = 0;
	static uint8_t x107 = 95U;
	int32_t x108 = INT32_MIN;
	static int32_t t19 = -1;

    t19 = (x105*((x106*x107)<=x108));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x110 = -1LL;
	int16_t x111 = 4304;

    t20 = (x109*((x110*x111)<=x112));

    if (t20 != 1101) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x113 = INT8_MIN;
	volatile uint64_t x114 = 51LLU;
	static int16_t x115 = -386;
	static int64_t x116 = INT64_MAX;
	volatile int32_t t21 = -31822;

    t21 = (x113*((x114*x115)<=x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	int32_t x124 = -6036;
	int32_t t22 = 1;

    t22 = (x121*((x122*x123)<=x124));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x125 = 25594401160410LLU;
	uint8_t x126 = 4U;
	int16_t x127 = -1;
	int32_t x128 = INT32_MAX;

    t23 = (x125*((x126*x127)<=x128));

    if (t23 != 25594401160410LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x129 = -1;
	static volatile int16_t x130 = INT16_MIN;
	static uint8_t x131 = UINT8_MAX;
	static uint16_t x132 = 60U;
	volatile int32_t t24 = -1;

    t24 = (x129*((x130*x131)<=x132));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x133 = -1LL;
	int64_t x134 = -1421517LL;
	volatile int8_t x135 = INT8_MIN;
	uint64_t x136 = 12417LLU;
	static int64_t t25 = 3675018LL;

    t25 = (x133*((x134*x135)<=x136));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = 2787LLU;
	uint8_t x140 = UINT8_MAX;
	volatile uint64_t t26 = 2458LLU;

    t26 = (x137*((x138*x139)<=x140));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x142 = INT16_MAX;
	volatile int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MIN;
	int64_t t27 = -1007859314LL;

    t27 = (x141*((x142*x143)<=x144));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x145 = INT32_MIN;
	uint32_t x147 = 44310U;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile int32_t t28 = INT32_MIN;

    t28 = (x145*((x146*x147)<=x148));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x149 = INT32_MIN;
	uint32_t x150 = 429U;
	int8_t x151 = INT8_MIN;
	static int32_t t29 = INT32_MIN;

    t29 = (x149*((x150*x151)<=x152));

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x155 = INT8_MIN;
	int32_t t30 = 14797167;

    t30 = (x153*((x154*x155)<=x156));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x157 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	volatile int64_t x160 = INT64_MAX;
	static uint32_t t31 = UINT32_MAX;

    t31 = (x157*((x158*x159)<=x160));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x161 = 1;
	volatile int8_t x162 = -2;
	uint16_t x163 = UINT16_MAX;
	int32_t x164 = -46598022;
	volatile int32_t t32 = 662964824;

    t32 = (x161*((x162*x163)<=x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = -3998227;
	static uint32_t x166 = 1U;
	static int32_t x167 = INT32_MAX;
	static int32_t x168 = 723;

    t33 = (x165*((x166*x167)<=x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x170 = 3LLU;
	int64_t x171 = 3LL;
	int8_t x172 = -2;
	int32_t t34 = 20;

    t34 = (x169*((x170*x171)<=x172));

    if (t34 != 994) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x173 = 28;
	uint16_t x174 = 2201U;
	static uint32_t x175 = 6U;
	static int16_t x176 = INT16_MIN;
	int32_t t35 = -7;

    t35 = (x173*((x174*x175)<=x176));

    if (t35 != 28) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x177 = 11;
	volatile uint16_t x179 = UINT16_MAX;
	int8_t x180 = -2;
	int32_t t36 = 11140;

    t36 = (x177*((x178*x179)<=x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x181 = 797168210263LL;
	static int16_t x182 = INT16_MAX;
	static int8_t x184 = -1;
	volatile int64_t t37 = 3961LL;

    t37 = (x181*((x182*x183)<=x184));

    if (t37 != 797168210263LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x185 = 345U;
	static int32_t x186 = -38603;
	int32_t x187 = -28615;
	volatile uint32_t x188 = 794770723U;
	int32_t t38 = 47060;

    t38 = (x185*((x186*x187)<=x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = -1;
	int32_t x190 = -100376835;
	int8_t x191 = 1;
	uint16_t x192 = 59U;
	volatile int32_t t39 = -1072;

    t39 = (x189*((x190*x191)<=x192));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x194 = INT8_MIN;
	uint32_t x195 = 3886U;
	int32_t x196 = INT32_MAX;
	static int32_t t40 = 212481;

    t40 = (x193*((x194*x195)<=x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -1;
	int32_t x199 = -358683156;
	volatile int32_t t41 = 7420;

    t41 = (x197*((x198*x199)<=x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x202 = 6489400445LLU;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t42 = 2LLU;

    t42 = (x201*((x202*x203)<=x204));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x213 = 1910U;
	static volatile uint16_t x214 = 270U;
	int16_t x215 = 0;
	static int8_t x216 = INT8_MAX;
	static int32_t t43 = 1;

    t43 = (x213*((x214*x215)<=x216));

    if (t43 != 1910) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MAX;
	int64_t x231 = -825LL;

    t44 = (x229*((x230*x231)<=x232));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x239 = -1;
	static int32_t x240 = 29999862;
	volatile int32_t t45 = -26;

    t45 = (x237*((x238*x239)<=x240));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = 1961U;
	static uint16_t x244 = UINT16_MAX;
	static int32_t t46 = 1;

    t46 = (x241*((x242*x243)<=x244));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x246 = 9U;
	static volatile uint16_t x248 = UINT16_MAX;
	int32_t t47 = 5378;

    t47 = (x245*((x246*x247)<=x248));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	uint64_t t48 = 17101449478LLU;

    t48 = (x249*((x250*x251)<=x252));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x257 = UINT16_MAX;
	static uint32_t x258 = UINT32_MAX;
	static int8_t x259 = INT8_MIN;
	static uint16_t x260 = 3824U;

    t49 = (x257*((x258*x259)<=x260));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x262 = -1;
	uint32_t x263 = 1627U;
	uint32_t x264 = UINT32_MAX;
	volatile int64_t t50 = -8170553604LL;

    t50 = (x261*((x262*x263)<=x264));

    if (t50 != -118695972918076LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x265 = 16309986LL;
	static uint8_t x267 = 3U;
	volatile int8_t x268 = 15;
	volatile int64_t t51 = 290553LL;

    t51 = (x265*((x266*x267)<=x268));

    if (t51 != 16309986LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = 0;
	static volatile int64_t t52 = INT64_MIN;

    t52 = (x269*((x270*x271)<=x272));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x273 = 654U;
	static uint8_t x274 = 12U;
	uint64_t x275 = 301050413078LLU;
	int32_t x276 = INT32_MIN;
	int32_t t53 = 829796295;

    t53 = (x273*((x274*x275)<=x276));

    if (t53 != 654) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x277 = -1;
	volatile uint64_t x278 = UINT64_MAX;
	uint8_t x279 = 2U;
	uint32_t x280 = UINT32_MAX;
	int32_t t54 = -60861957;

    t54 = (x277*((x278*x279)<=x280));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x281 = -1;
	uint8_t x282 = 0U;
	static int16_t x283 = -1;
	uint16_t x284 = 0U;
	int32_t t55 = -39981376;

    t55 = (x281*((x282*x283)<=x284));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x285 = -6;
	uint32_t x287 = 2381387U;
	uint16_t x288 = UINT16_MAX;
	int32_t t56 = 1;

    t56 = (x285*((x286*x287)<=x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x291 = 0LLU;
	int8_t x292 = INT8_MIN;

    t57 = (x289*((x290*x291)<=x292));

    if (t57 != 26524191482LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x301 = INT64_MIN;
	uint64_t x302 = 13412965960LLU;
	int64_t x303 = -1LL;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t58 = -2113554383902911813LL;

    t58 = (x301*((x302*x303)<=x304));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x309 = INT16_MAX;
	uint64_t x310 = 2394242505499426536LLU;
	int8_t x312 = INT8_MIN;
	static int32_t t59 = -17;

    t59 = (x309*((x310*x311)<=x312));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x314 = -1LL;
	static int64_t x315 = -138735961319151056LL;
	static uint16_t x316 = 0U;
	int32_t t60 = 0;

    t60 = (x313*((x314*x315)<=x316));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x321 = 63021558122001LL;
	static volatile int64_t x322 = -513058397132492LL;
	uint8_t x323 = 1U;
	int16_t x324 = -75;

    t61 = (x321*((x322*x323)<=x324));

    if (t61 != 63021558122001LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x325 = -3022;
	int64_t x326 = 11865051200LL;
	uint32_t x327 = 3480U;
	volatile int32_t t62 = 179351536;

    t62 = (x325*((x326*x327)<=x328));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x329 = 69;
	volatile uint8_t x330 = 49U;
	uint32_t x331 = 728442U;
	volatile int32_t x332 = 737622478;
	static int32_t t63 = -3507663;

    t63 = (x329*((x330*x331)<=x332));

    if (t63 != 69) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = INT8_MIN;
	static volatile uint8_t x334 = 1U;
	uint16_t x335 = UINT16_MAX;
	int32_t t64 = 118;

    t64 = (x333*((x334*x335)<=x336));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x341 = INT8_MAX;
	int32_t x342 = -1;
	uint64_t x344 = 23982363264LLU;
	volatile int32_t t65 = 314754325;

    t65 = (x341*((x342*x343)<=x344));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x345 = -1;
	volatile uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 704249442750283265LLU;
	volatile int32_t t66 = -1758472;

    t66 = (x345*((x346*x347)<=x348));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x353 = -1LL;
	int16_t x354 = INT16_MAX;
	int64_t x356 = 3297993018928871549LL;
	volatile int64_t t67 = 16043465LL;

    t67 = (x353*((x354*x355)<=x356));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x357 = -1;
	uint32_t x358 = 88977553U;
	static int16_t x359 = -1;
	volatile int32_t t68 = 15;

    t68 = (x357*((x358*x359)<=x360));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x361 = 25U;
	uint16_t x363 = 1U;
	static volatile int8_t x364 = 13;
	int32_t t69 = -865061808;

    t69 = (x361*((x362*x363)<=x364));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x369 = -1;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t70 = -3167;

    t70 = (x369*((x370*x371)<=x372));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x373 = 57043038340940LL;
	static volatile uint16_t x375 = 205U;
	static int64_t t71 = 483871LL;

    t71 = (x373*((x374*x375)<=x376));

    if (t71 != 57043038340940LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x377 = -26;
	static volatile int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;

    t72 = (x377*((x378*x379)<=x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x385 = INT16_MAX;
	volatile uint8_t x386 = 15U;
	int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MAX;

    t73 = (x385*((x386*x387)<=x388));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x389 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = -101440386;
	int32_t t74 = 83705;

    t74 = (x389*((x390*x391)<=x392));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x393 = 1;
	volatile int32_t x395 = -1;
	volatile int64_t x396 = -5439704LL;
	volatile int32_t t75 = -75;

    t75 = (x393*((x394*x395)<=x396));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x401 = 116U;
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t76 = -789;

    t76 = (x401*((x402*x403)<=x404));

    if (t76 != 116) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x406 = UINT16_MAX;
	static uint64_t x407 = 187LLU;
	uint16_t x408 = 7479U;
	int32_t t77 = -45;

    t77 = (x405*((x406*x407)<=x408));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x410 = -1;
	static uint16_t x412 = UINT16_MAX;

    t78 = (x409*((x410*x411)<=x412));

    if (t78 != 117) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x417 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = 6;
	static volatile int64_t t79 = -651230LL;

    t79 = (x417*((x418*x419)<=x420));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x421 = 59241703U;
	int8_t x423 = -1;
	volatile int64_t x424 = INT64_MAX;
	static volatile uint32_t t80 = 0U;

    t80 = (x421*((x422*x423)<=x424));

    if (t80 != 59241703U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x425 = UINT16_MAX;
	volatile int16_t x426 = -1;
	int32_t x427 = -1;
	int64_t x428 = INT64_MIN;
	int32_t t81 = -82;

    t81 = (x425*((x426*x427)<=x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x429 = -1LL;
	static int16_t x431 = -1;
	volatile int64_t t82 = -3828116876911985LL;

    t82 = (x429*((x430*x431)<=x432));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x433 = INT32_MAX;
	int8_t x434 = INT8_MIN;
	static int16_t x435 = INT16_MAX;
	int16_t x436 = -1;
	volatile int32_t t83 = INT32_MAX;

    t83 = (x433*((x434*x435)<=x436));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MAX;
	static int16_t x443 = INT16_MIN;
	int32_t x444 = 66260737;
	int32_t t84 = INT32_MIN;

    t84 = (x441*((x442*x443)<=x444));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x445 = INT16_MAX;
	int16_t x446 = -1;
	int32_t x447 = 62985286;
	int32_t x448 = 5802;
	volatile int32_t t85 = 350;

    t85 = (x445*((x446*x447)<=x448));

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x450 = UINT8_MAX;
	int8_t x451 = -53;
	int8_t x452 = INT8_MIN;
	int32_t t86 = -366545;

    t86 = (x449*((x450*x451)<=x452));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x457 = UINT8_MAX;
	static int64_t x458 = -906153LL;
	int8_t x459 = -1;
	static uint64_t x460 = UINT64_MAX;
	volatile int32_t t87 = 39937949;

    t87 = (x457*((x458*x459)<=x460));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x461 = INT16_MAX;
	volatile int8_t x464 = 6;
	volatile int32_t t88 = 5;

    t88 = (x461*((x462*x463)<=x464));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x473 = -1;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t89 = 15056;

    t89 = (x473*((x474*x475)<=x476));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x477 = -14988020059722LL;
	int16_t x478 = INT16_MIN;
	int64_t t90 = 124LL;

    t90 = (x477*((x478*x479)<=x480));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x485 = -3;
	uint8_t x486 = 0U;
	uint8_t x487 = 0U;
	int16_t x488 = 0;
	int32_t t91 = 200649;

    t91 = (x485*((x486*x487)<=x488));

    if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x493 = INT16_MIN;
	int64_t x494 = 70291741697208LL;
	int16_t x495 = INT16_MIN;
	int8_t x496 = 1;

    t92 = (x493*((x494*x495)<=x496));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x497 = 11921;
	static volatile uint8_t x500 = 40U;
	int32_t t93 = 4758;

    t93 = (x497*((x498*x499)<=x500));

    if (t93 != 11921) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x501 = 27U;
	uint32_t x502 = 429929663U;
	volatile int32_t x503 = INT32_MIN;
	int32_t x504 = INT32_MIN;
	int32_t t94 = -2343;

    t94 = (x501*((x502*x503)<=x504));

    if (t94 != 27) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x505 = INT8_MIN;
	int8_t x506 = INT8_MAX;
	uint8_t x507 = 15U;
	int32_t x508 = INT32_MIN;
	static int32_t t95 = 404;

    t95 = (x505*((x506*x507)<=x508));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x509 = 1U;
	volatile int16_t x510 = 1;
	int32_t x512 = -1;
	volatile int32_t t96 = -7398;

    t96 = (x509*((x510*x511)<=x512));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x513 = 10745043LLU;
	uint64_t x514 = 466040426917LLU;
	int32_t x515 = INT32_MIN;
	volatile uint64_t t97 = 90LLU;

    t97 = (x513*((x514*x515)<=x516));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x517 = INT16_MIN;
	static int64_t x518 = 20254565179LL;
	uint32_t x519 = 57752U;
	int8_t x520 = -1;
	static volatile int32_t t98 = -1;

    t98 = (x517*((x518*x519)<=x520));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x523 = 46;
	uint16_t x524 = UINT16_MAX;
	int32_t t99 = -3;

    t99 = (x521*((x522*x523)<=x524));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t t100 = 248186;

    t100 = (x525*((x526*x527)<=x528));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x533 = -701;
	volatile uint64_t x534 = 370644465731949709LLU;
	uint64_t x535 = UINT64_MAX;
	static int32_t t101 = -1;

    t101 = (x533*((x534*x535)<=x536));

    if (t101 != -701) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x541 = -1;
	static uint16_t x542 = 9U;
	int16_t x543 = 15515;
	uint64_t x544 = UINT64_MAX;
	int32_t t102 = 24;

    t102 = (x541*((x542*x543)<=x544));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x545 = INT8_MAX;
	int32_t t103 = -212;

    t103 = (x545*((x546*x547)<=x548));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x549 = -884278154;
	static int32_t x550 = INT32_MIN;
	uint64_t x551 = 6LLU;
	int64_t x552 = INT64_MIN;
	int32_t t104 = 277647114;

    t104 = (x549*((x550*x551)<=x552));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x553 = 1U;
	volatile int8_t x554 = -1;
	uint8_t x555 = UINT8_MAX;
	static volatile int32_t t105 = 3046398;

    t105 = (x553*((x554*x555)<=x556));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x557 = -35;
	volatile uint64_t x558 = 2404LLU;
	int16_t x559 = -1;
	volatile int64_t x560 = INT64_MAX;
	int32_t t106 = -22;

    t106 = (x557*((x558*x559)<=x560));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x561 = -1;
	int32_t x564 = 1;

    t107 = (x561*((x562*x563)<=x564));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x569 = -2140163LL;
	volatile int64_t x572 = INT64_MIN;
	volatile int64_t t108 = 12478004LL;

    t108 = (x569*((x570*x571)<=x572));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x574 = 549157290LLU;
	int64_t x575 = INT64_MAX;
	int32_t x576 = 155064139;
	volatile int32_t t109 = -2750;

    t109 = (x573*((x574*x575)<=x576));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x577 = 4U;
	volatile int64_t x578 = 323330643872822LL;
	int16_t x579 = -1;
	int8_t x580 = -1;
	volatile int32_t t110 = 111514414;

    t110 = (x577*((x578*x579)<=x580));

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x581 = INT16_MIN;
	uint16_t x583 = 30126U;
	volatile int32_t t111 = 6743477;

    t111 = (x581*((x582*x583)<=x584));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x585 = 3124876832740LLU;
	int32_t x586 = -1;
	int8_t x587 = INT8_MIN;
	int64_t x588 = 59166966497197LL;
	uint64_t t112 = 646559072115LLU;

    t112 = (x585*((x586*x587)<=x588));

    if (t112 != 3124876832740LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x590 = INT16_MIN;
	volatile int16_t x591 = -205;
	int64_t t113 = -12904839203LL;

    t113 = (x589*((x590*x591)<=x592));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x593 = INT16_MIN;
	uint16_t x594 = 0U;
	int64_t x596 = INT64_MIN;
	volatile int32_t t114 = -37411;

    t114 = (x593*((x594*x595)<=x596));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x597 = INT8_MAX;
	static uint8_t x600 = 4U;

    t115 = (x597*((x598*x599)<=x600));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x605 = 119U;
	volatile uint64_t x606 = UINT64_MAX;
	int32_t x608 = 0;
	int32_t t116 = -3377885;

    t116 = (x605*((x606*x607)<=x608));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x609 = 51;
	static int8_t x610 = -5;

    t117 = (x609*((x610*x611)<=x612));

    if (t117 != 51) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x615 = INT64_MIN;
	int16_t x616 = INT16_MIN;

    t118 = (x613*((x614*x615)<=x616));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x618 = -1LL;
	static int16_t x619 = -93;
	int32_t x620 = INT32_MIN;

    t119 = (x617*((x618*x619)<=x620));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x621 = INT64_MIN;
	uint8_t x622 = 0U;
	uint16_t x624 = 677U;
	static int64_t t120 = INT64_MIN;

    t120 = (x621*((x622*x623)<=x624));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x633 = 59405177079213LL;
	static int8_t x635 = 47;
	static uint64_t x636 = UINT64_MAX;
	volatile int64_t t121 = -55346LL;

    t121 = (x633*((x634*x635)<=x636));

    if (t121 != 59405177079213LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x637 = -1;
	int16_t x638 = -1;
	int8_t x639 = -1;
	volatile uint32_t x640 = 231275892U;

    t122 = (x637*((x638*x639)<=x640));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x645 = 54U;
	uint8_t x646 = 7U;
	static volatile int16_t x647 = -1;
	int32_t x648 = -1;
	volatile int32_t t123 = -287669771;

    t123 = (x645*((x646*x647)<=x648));

    if (t123 != 54) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x651 = 0U;
	static volatile int32_t t124 = -7571222;

    t124 = (x649*((x650*x651)<=x652));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x654 = UINT64_MAX;
	int16_t x655 = INT16_MIN;

    t125 = (x653*((x654*x655)<=x656));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x658 = 39LLU;
	int64_t x659 = INT64_MAX;
	uint16_t x660 = UINT16_MAX;
	int32_t t126 = -1346863;

    t126 = (x657*((x658*x659)<=x660));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x661 = -2053558176662704LL;
	volatile int16_t x662 = -1;
	volatile uint64_t x663 = 809709LLU;
	int16_t x664 = -1;
	static int64_t t127 = 41260138703722LL;

    t127 = (x661*((x662*x663)<=x664));

    if (t127 != -2053558176662704LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x665 = INT32_MIN;
	uint16_t x667 = 98U;
	int8_t x668 = -1;
	volatile int32_t t128 = 30610940;

    t128 = (x665*((x666*x667)<=x668));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x673 = -1;
	uint16_t x674 = 727U;
	int8_t x676 = -1;
	volatile int32_t t129 = 354;

    t129 = (x673*((x674*x675)<=x676));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x678 = -1;
	uint8_t x679 = UINT8_MAX;
	int16_t x680 = -1;
	volatile int32_t t130 = 6638;

    t130 = (x677*((x678*x679)<=x680));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x681 = INT16_MAX;
	int16_t x682 = -3;
	int64_t x683 = -578LL;
	volatile uint32_t x684 = UINT32_MAX;

    t131 = (x681*((x682*x683)<=x684));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x686 = 33U;
	int8_t x687 = INT8_MIN;
	static int64_t x688 = -1LL;
	volatile int32_t t132 = 1451;

    t132 = (x685*((x686*x687)<=x688));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x693 = UINT32_MAX;
	int16_t x694 = 777;
	int8_t x695 = -1;
	volatile int32_t x696 = INT32_MAX;

    t133 = (x693*((x694*x695)<=x696));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x697 = INT8_MAX;
	volatile uint64_t x698 = UINT64_MAX;
	uint16_t x699 = UINT16_MAX;
	uint64_t x700 = UINT64_MAX;
	int32_t t134 = 59517029;

    t134 = (x697*((x698*x699)<=x700));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x706 = -1;
	uint8_t x707 = 0U;
	static uint32_t x708 = 10632108U;

    t135 = (x705*((x706*x707)<=x708));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x713 = -1LL;
	int16_t x715 = INT16_MIN;
	int64_t t136 = 951876LL;

    t136 = (x713*((x714*x715)<=x716));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x718 = 900U;
	int32_t x720 = INT32_MIN;
	static volatile int32_t t137 = -2;

    t137 = (x717*((x718*x719)<=x720));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x721 = UINT32_MAX;
	uint32_t x722 = 20785U;
	static uint32_t x723 = 1871U;
	uint8_t x724 = UINT8_MAX;
	volatile uint32_t t138 = 157785934U;

    t138 = (x721*((x722*x723)<=x724));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x725 = 5355LL;
	static uint8_t x726 = 3U;
	int64_t x727 = -1209191635LL;
	volatile uint64_t x728 = UINT64_MAX;
	static int64_t t139 = -1106619972798691LL;

    t139 = (x725*((x726*x727)<=x728));

    if (t139 != 5355LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x729 = INT32_MIN;
	volatile int16_t x730 = INT16_MAX;
	uint32_t x732 = 18985U;
	volatile int32_t t140 = 258;

    t140 = (x729*((x730*x731)<=x732));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x733 = INT32_MIN;
	volatile uint8_t x734 = 127U;
	int32_t x735 = -1;
	volatile uint16_t x736 = UINT16_MAX;
	int32_t t141 = INT32_MIN;

    t141 = (x733*((x734*x735)<=x736));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x737 = 118U;
	static int8_t x739 = -1;

    t142 = (x737*((x738*x739)<=x740));

    if (t142 != 118) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x745 = -476;
	int64_t x747 = -1LL;
	static int16_t x748 = 1;
	static int32_t t143 = 4219360;

    t143 = (x745*((x746*x747)<=x748));

    if (t143 != -476) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x749 = INT64_MAX;
	int16_t x750 = INT16_MIN;
	volatile uint16_t x751 = UINT16_MAX;
	int16_t x752 = 3;

    t144 = (x749*((x750*x751)<=x752));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x753 = 10768670777972LL;
	uint16_t x754 = 8U;
	int32_t x755 = -422;
	uint16_t x756 = 866U;
	volatile int64_t t145 = 15LL;

    t145 = (x753*((x754*x755)<=x756));

    if (t145 != 10768670777972LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x758 = UINT32_MAX;
	uint8_t x759 = 42U;
	volatile int32_t t146 = 668716037;

    t146 = (x757*((x758*x759)<=x760));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x762 = -1;
	uint8_t x763 = 2U;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t147 = INT32_MIN;

    t147 = (x761*((x762*x763)<=x764));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x765 = INT16_MAX;
	int8_t x766 = -1;
	uint8_t x767 = UINT8_MAX;
	int8_t x768 = INT8_MIN;
	int32_t t148 = -536022167;

    t148 = (x765*((x766*x767)<=x768));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x769 = 1790257;
	int64_t x770 = 1777166195LL;
	static int8_t x771 = INT8_MAX;
	int8_t x772 = -1;
	int32_t t149 = -406;

    t149 = (x769*((x770*x771)<=x772));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x781 = INT64_MIN;
	static uint32_t x782 = UINT32_MAX;
	int8_t x783 = INT8_MIN;
	int32_t x784 = -1;
	int64_t t150 = INT64_MIN;

    t150 = (x781*((x782*x783)<=x784));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x787 = 16442780LL;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t151 = 18550035;

    t151 = (x785*((x786*x787)<=x788));

    if (t151 != 38) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x789 = -1;
	int8_t x790 = INT8_MAX;
	volatile int16_t x791 = INT16_MIN;
	int64_t x792 = -1LL;
	volatile int32_t t152 = 2;

    t152 = (x789*((x790*x791)<=x792));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x793 = 3684223266804332866LL;
	int32_t x795 = -1;
	volatile int8_t x796 = INT8_MIN;
	volatile int64_t t153 = -383296324LL;

    t153 = (x793*((x794*x795)<=x796));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x801 = UINT16_MAX;
	uint16_t x802 = 6138U;
	volatile uint8_t x803 = UINT8_MAX;
	volatile int16_t x804 = INT16_MAX;
	int32_t t154 = 246620;

    t154 = (x801*((x802*x803)<=x804));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x809 = 1U;
	int8_t x810 = 1;
	int64_t x812 = -1LL;
	volatile uint32_t t155 = 8U;

    t155 = (x809*((x810*x811)<=x812));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x813 = -17;
	int16_t x814 = INT16_MIN;
	volatile uint16_t x815 = 7U;
	static int64_t x816 = -1286196953993LL;

    t156 = (x813*((x814*x815)<=x816));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x817 = 0LLU;
	uint64_t x818 = 37LLU;
	volatile uint8_t x819 = UINT8_MAX;
	volatile int32_t x820 = -100683;
	volatile uint64_t t157 = 809136190LLU;

    t157 = (x817*((x818*x819)<=x820));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x822 = -6;
	int32_t x824 = INT32_MIN;
	uint32_t t158 = 624390U;

    t158 = (x821*((x822*x823)<=x824));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x825 = 1;
	int16_t x826 = INT16_MAX;
	uint16_t x827 = 13477U;
	int64_t x828 = -1LL;
	volatile int32_t t159 = -3;

    t159 = (x825*((x826*x827)<=x828));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x829 = -261137LL;
	uint8_t x831 = UINT8_MAX;
	int32_t x832 = INT32_MIN;

    t160 = (x829*((x830*x831)<=x832));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x833 = INT64_MAX;
	static uint16_t x834 = UINT16_MAX;
	int8_t x835 = INT8_MIN;
	static int32_t x836 = 10;
	int64_t t161 = INT64_MAX;

    t161 = (x833*((x834*x835)<=x836));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	volatile uint32_t x846 = 0U;
	volatile uint64_t x847 = UINT64_MAX;
	int8_t x848 = INT8_MIN;
	uint64_t t162 = UINT64_MAX;

    t162 = (x845*((x846*x847)<=x848));

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x849 = -78;
	uint32_t x850 = 14982892U;
	uint64_t x851 = UINT64_MAX;
	volatile int32_t x852 = INT32_MIN;
	int32_t t163 = -2086539;

    t163 = (x849*((x850*x851)<=x852));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x857 = INT8_MIN;
	uint16_t x858 = 0U;
	static int64_t x859 = INT64_MIN;
	volatile int64_t x860 = 863554380813LL;
	static int32_t t164 = 1;

    t164 = (x857*((x858*x859)<=x860));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x865 = -1;
	static int8_t x866 = INT8_MAX;
	int8_t x867 = 1;

    t165 = (x865*((x866*x867)<=x868));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x870 = INT16_MIN;
	int16_t x872 = INT16_MIN;
	int32_t t166 = -2;

    t166 = (x869*((x870*x871)<=x872));

    if (t166 != 7) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x873 = -1LL;
	int32_t x874 = -1;
	int64_t x876 = 6910052LL;
	int64_t t167 = 24296LL;

    t167 = (x873*((x874*x875)<=x876));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x877 = 978U;
	int8_t x878 = 0;
	volatile int8_t x879 = -1;
	static volatile int32_t x880 = -1;
	int32_t t168 = -192728;

    t168 = (x877*((x878*x879)<=x880));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x885 = UINT64_MAX;
	volatile int16_t x886 = INT16_MAX;
	static int32_t x887 = -1;
	int64_t x888 = 1976LL;

    t169 = (x885*((x886*x887)<=x888));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x893 = INT16_MAX;
	int64_t x894 = -15981247693527474LL;
	int16_t x895 = 4;
	uint16_t x896 = 213U;
	int32_t t170 = 58;

    t170 = (x893*((x894*x895)<=x896));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x901 = INT64_MIN;
	uint64_t x904 = 353459LLU;
	int64_t t171 = INT64_MIN;

    t171 = (x901*((x902*x903)<=x904));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x913 = 519U;
	int8_t x914 = -1;
	uint8_t x915 = 23U;
	volatile uint32_t x916 = 284909U;
	int32_t t172 = -8;

    t172 = (x913*((x914*x915)<=x916));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x921 = UINT16_MAX;
	static int8_t x923 = INT8_MAX;
	volatile uint64_t x924 = 152838588531LLU;
	volatile int32_t t173 = -1160;

    t173 = (x921*((x922*x923)<=x924));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x925 = INT16_MIN;
	static volatile uint16_t x926 = 15455U;
	uint8_t x927 = 61U;
	int32_t x928 = INT32_MIN;
	static volatile int32_t t174 = 208210;

    t174 = (x925*((x926*x927)<=x928));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x929 = 32823771297910LL;
	uint8_t x930 = UINT8_MAX;
	int64_t x932 = INT64_MIN;

    t175 = (x929*((x930*x931)<=x932));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x933 = UINT16_MAX;
	uint8_t x934 = UINT8_MAX;
	volatile uint16_t x935 = 69U;
	int8_t x936 = INT8_MAX;
	volatile int32_t t176 = 77025;

    t176 = (x933*((x934*x935)<=x936));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x938 = 58U;
	static uint32_t x939 = UINT32_MAX;
	static uint64_t x940 = 370LLU;
	volatile int32_t t177 = -1549;

    t177 = (x937*((x938*x939)<=x940));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x941 = INT32_MIN;
	uint8_t x942 = 1U;
	uint32_t x943 = 37516601U;
	uint32_t x944 = 4U;
	static volatile int32_t t178 = 0;

    t178 = (x941*((x942*x943)<=x944));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t t179 = 46163;

    t179 = (x945*((x946*x947)<=x948));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x950 = 316;
	uint64_t x952 = UINT64_MAX;
	volatile uint32_t t180 = 36010U;

    t180 = (x949*((x950*x951)<=x952));

    if (t180 != 13U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x953 = 37371266102511328LL;
	int64_t x954 = -1LL;
	volatile uint32_t x956 = 4307006U;

    t181 = (x953*((x954*x955)<=x956));

    if (t181 != 37371266102511328LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x966 = -1;
	volatile uint32_t x967 = 363617948U;
	uint64_t t182 = UINT64_MAX;

    t182 = (x965*((x966*x967)<=x968));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x969 = INT64_MIN;
	int8_t x970 = 1;
	int32_t x971 = -1;
	static volatile uint16_t x972 = 18430U;
	static volatile int64_t t183 = INT64_MIN;

    t183 = (x969*((x970*x971)<=x972));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x973 = INT64_MIN;
	int32_t x974 = 1937;
	int32_t x976 = 59062;
	static volatile int64_t t184 = INT64_MIN;

    t184 = (x973*((x974*x975)<=x976));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x977 = UINT8_MAX;
	static uint64_t x978 = 1LLU;
	volatile int16_t x979 = INT16_MIN;
	int32_t x980 = INT32_MIN;
	int32_t t185 = 3;

    t185 = (x977*((x978*x979)<=x980));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x981 = UINT8_MAX;
	int32_t x983 = 7;
	volatile int64_t x984 = 1697533093737238155LL;
	int32_t t186 = -811448;

    t186 = (x981*((x982*x983)<=x984));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x985 = INT64_MIN;
	uint8_t x986 = 95U;
	int8_t x987 = -1;
	volatile int64_t x988 = INT64_MAX;
	int64_t t187 = INT64_MIN;

    t187 = (x985*((x986*x987)<=x988));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x990 = 315131073063543LLU;
	static uint16_t x991 = 1U;
	static volatile uint16_t x992 = 2U;
	static int32_t t188 = -6663;

    t188 = (x989*((x990*x991)<=x992));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x997 = 30366U;
	int8_t x998 = -34;
	volatile uint8_t x999 = 2U;
	static int64_t x1000 = -923747896731LL;
	int32_t t189 = -79;

    t189 = (x997*((x998*x999)<=x1000));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1011 = UINT32_MAX;
	volatile uint16_t x1012 = 638U;
	volatile int32_t t190 = INT32_MIN;

    t190 = (x1009*((x1010*x1011)<=x1012));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1013 = 64LLU;
	uint32_t x1014 = 360499U;
	uint16_t x1015 = 10336U;
	uint64_t x1016 = 1LLU;
	volatile uint64_t t191 = 7486798541398915LLU;

    t191 = (x1013*((x1014*x1015)<=x1016));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1018 = INT8_MIN;
	static int32_t x1019 = 0;
	int16_t x1020 = -1;

    t192 = (x1017*((x1018*x1019)<=x1020));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1022 = 1;
	static uint8_t x1023 = 18U;
	static uint64_t x1024 = 90940529LLU;
	static volatile int32_t t193 = 15530;

    t193 = (x1021*((x1022*x1023)<=x1024));

    if (t193 != 56) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1025 = INT16_MAX;
	uint64_t x1028 = UINT64_MAX;
	int32_t t194 = -26191;

    t194 = (x1025*((x1026*x1027)<=x1028));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x1037 = 23U;
	static volatile int8_t x1038 = INT8_MIN;
	uint32_t x1039 = 178502991U;
	volatile int32_t t195 = 28267;

    t195 = (x1037*((x1038*x1039)<=x1040));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1041 = 22015U;
	volatile int8_t x1042 = 25;
	static int8_t x1043 = INT8_MAX;
	uint64_t x1044 = 141705246037454266LLU;
	static uint32_t t196 = 174U;

    t196 = (x1041*((x1042*x1043)<=x1044));

    if (t196 != 22015U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1047 = UINT8_MAX;
	volatile int32_t x1048 = INT32_MIN;

    t197 = (x1045*((x1046*x1047)<=x1048));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1049 = 1U;
	int64_t x1050 = -2094423534817LL;
	int8_t x1051 = INT8_MAX;
	volatile int16_t x1052 = 3;
	static int32_t t198 = 917051;

    t198 = (x1049*((x1050*x1051)<=x1052));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1053 = INT8_MAX;
	uint32_t x1054 = UINT32_MAX;
	int8_t x1055 = 27;
	uint32_t x1056 = 15591U;
	volatile int32_t t199 = 44729283;

    t199 = (x1053*((x1054*x1055)<=x1056));

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

