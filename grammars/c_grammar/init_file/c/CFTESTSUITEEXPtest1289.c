
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

int16_t x1 = INT16_MAX;
uint32_t x4 = 2U;
volatile int32_t t1 = -6605258;
int64_t x26 = -1LL;
volatile int8_t x33 = 21;
static uint64_t x36 = 75531LLU;
int16_t x43 = -1;
int64_t x44 = INT64_MIN;
volatile int32_t t10 = -59;
volatile int8_t x49 = -1;
int32_t t12 = 0;
int32_t x56 = INT32_MAX;
volatile int32_t t14 = 3949;
int32_t t16 = 433108938;
int32_t x77 = INT32_MIN;
uint32_t x81 = 753U;
static int16_t x88 = INT16_MAX;
int16_t x89 = -5841;
static int32_t x95 = INT32_MAX;
volatile uint8_t x98 = 0U;
int32_t t23 = 28;
int8_t x113 = 1;
volatile int32_t t27 = 1955;
static uint64_t x127 = UINT64_MAX;
volatile int32_t t30 = -897174293;
static int64_t x131 = -3LL;
uint32_t x141 = 254U;
int64_t x144 = INT64_MIN;
static volatile uint8_t x149 = 1U;
volatile uint16_t x151 = 2U;
int16_t x176 = 980;
int32_t x178 = INT32_MIN;
int32_t x187 = INT32_MAX;
int64_t x189 = INT64_MIN;
static int32_t x193 = INT32_MAX;
volatile int32_t t49 = 148;
int8_t x209 = 1;
volatile int32_t t51 = 42;
volatile int32_t t52 = 97349408;
volatile int32_t x218 = INT32_MIN;
volatile uint8_t x225 = 12U;
static uint8_t x228 = 4U;
uint32_t x234 = UINT32_MAX;
static int32_t t59 = -2;
volatile int32_t x248 = INT32_MIN;
int32_t x254 = -1;
int16_t x257 = INT16_MIN;
volatile int32_t t63 = -596508;
static volatile uint32_t x272 = 127515520U;
int16_t x274 = -12;
uint64_t t67 = UINT64_MAX;
uint64_t x279 = 19019055787247423LLU;
static int64_t x281 = -112382230692975409LL;
volatile uint16_t x286 = UINT16_MAX;
int16_t x291 = INT16_MIN;
volatile int8_t x293 = -52;
uint16_t x294 = 748U;
uint16_t x295 = UINT16_MAX;
static int16_t x296 = INT16_MIN;
uint8_t x301 = 33U;
int8_t x303 = 30;
int8_t x306 = -2;
static uint64_t x308 = 39929LLU;
uint8_t x310 = 29U;
uint32_t x312 = 1693774U;
uint16_t x314 = 2016U;
int32_t x325 = INT32_MIN;
uint8_t x329 = UINT8_MAX;
int8_t x336 = INT8_MIN;
int32_t x343 = INT32_MIN;
int64_t x351 = INT64_MAX;
volatile uint32_t x353 = 587616U;
uint8_t x365 = UINT8_MAX;
int16_t x377 = 215;
volatile uint8_t x379 = 8U;
static int8_t x383 = INT8_MIN;
static uint8_t x385 = 15U;
int32_t t95 = 1216404;
volatile int64_t x410 = -35031293278671545LL;
uint64_t x411 = 0LLU;
static int32_t t102 = -5154;
int64_t x425 = INT64_MAX;
int32_t x426 = INT32_MIN;
volatile int64_t t104 = INT64_MAX;
int64_t x432 = INT64_MAX;
int8_t x434 = 21;
int8_t x439 = INT8_MIN;
int32_t x444 = -63;
uint64_t t108 = 1827LLU;
int8_t x446 = INT8_MIN;
int16_t x447 = INT16_MIN;
int32_t x448 = 104205499;
int64_t t109 = INT64_MAX;
static int64_t x449 = INT64_MIN;
static int16_t x453 = -2;
int32_t x456 = -1;
volatile int32_t t111 = -2006;
volatile int64_t x484 = INT64_MAX;
volatile int32_t t118 = INT32_MIN;
int32_t t120 = -109066;
volatile int32_t t121 = -180;
int16_t x497 = INT16_MIN;
static int32_t x503 = 87897;
uint64_t x508 = UINT64_MAX;
static volatile int64_t x513 = -759400LL;
volatile int64_t t126 = 4019583281267LL;
volatile int32_t t127 = 0;
uint16_t x521 = 958U;
static uint32_t x523 = 1100U;
int16_t x528 = -1;
volatile int32_t t129 = -59781;
volatile int16_t x529 = INT16_MAX;
volatile int32_t x534 = -831778;
volatile int32_t t131 = -3968310;
int16_t x539 = INT16_MIN;
volatile int64_t x544 = INT64_MIN;
static int32_t x545 = -1;
int16_t x548 = INT16_MAX;
int64_t x549 = 832LL;
volatile int64_t x553 = 1071257303746297LL;
int32_t x559 = 140;
int64_t t143 = 1323401952727850LL;
static uint16_t x592 = 420U;
static int16_t x594 = INT16_MIN;
volatile int8_t x605 = INT8_MAX;
int16_t x610 = 475;
int64_t x612 = 1711325635LL;
int16_t x615 = -15;
int32_t x616 = INT32_MIN;
volatile int64_t x619 = INT64_MIN;
volatile int8_t x625 = -2;
volatile int32_t x627 = 1206;
uint64_t x628 = 1046620LLU;
static volatile int32_t x633 = 1;
int64_t x634 = INT64_MIN;
int8_t x641 = 20;
static volatile int8_t x642 = INT8_MIN;
int8_t x645 = -1;
uint8_t x653 = 40U;
uint64_t x662 = 66LLU;
volatile uint8_t x665 = UINT8_MAX;
int32_t x684 = -555;
static int64_t x685 = -1LL;
volatile int32_t t170 = -60;
int64_t x695 = INT64_MIN;
int32_t t171 = 300546;
uint16_t x704 = 0U;
static uint8_t x706 = 4U;
int32_t t175 = -18813011;
volatile uint32_t t177 = 13U;
static int64_t x722 = INT64_MIN;
int8_t x725 = -1;
static int8_t x729 = INT8_MIN;
uint32_t x733 = UINT32_MAX;
int32_t x735 = -81;
static int64_t x736 = 817LL;
uint16_t x745 = 3U;
uint8_t x748 = UINT8_MAX;
static int8_t x751 = INT8_MIN;
volatile int64_t x753 = INT64_MIN;
int64_t t186 = -191376518LL;
volatile int64_t x761 = INT64_MAX;
uint16_t x767 = UINT16_MAX;
int16_t x769 = INT16_MIN;
volatile int32_t x774 = INT32_MIN;
volatile int8_t x780 = INT8_MAX;
int8_t x804 = 1;
int16_t x810 = INT16_MIN;
volatile int16_t x811 = INT16_MAX;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	int64_t x3 = -14128LL;
	static volatile int32_t t0 = 480419366;

    t0 = (x1+((x2!=x3)>x4));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MAX;

    t1 = (x5+((x6!=x7)>x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -162594;

    t2 = (x9+((x10!=x11)>x12));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = INT16_MAX;
	volatile int16_t x16 = INT16_MIN;
	int64_t t3 = 10439657863327LL;

    t3 = (x13+((x14!=x15)>x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	volatile uint8_t x18 = 6U;
	int64_t x19 = 48028LL;
	volatile uint16_t x20 = 16U;
	volatile int32_t t4 = 9573328;

    t4 = (x17+((x18!=x19)>x20));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MAX;
	static int16_t x23 = -27;
	int16_t x24 = -1;
	static int32_t t5 = -2359226;

    t5 = (x21+((x22!=x23)>x24));

    if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static int32_t x27 = -1;
	volatile uint16_t x28 = 132U;
	volatile int32_t t6 = 446675056;

    t6 = (x25+((x26!=x27)>x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -1;
	int64_t x30 = INT64_MIN;
	static int8_t x31 = 9;
	static volatile int16_t x32 = INT16_MIN;
	int32_t t7 = -46;

    t7 = (x29+((x30!=x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -1;
	int32_t x35 = -2275;
	volatile int32_t t8 = 564;

    t8 = (x33+((x34!=x35)>x36));

    if (t8 != 21) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int32_t x38 = -1818536;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = -1;
	volatile int32_t t9 = -387100399;

    t9 = (x37+((x38!=x39)>x40));

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x42 = -1;

    t10 = (x41+((x42!=x43)>x44));

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 0U;
	volatile uint8_t x47 = UINT8_MAX;
	int16_t x48 = -1;
	int32_t t11 = 2905226;

    t11 = (x45+((x46!=x47)>x48));

    if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MIN;
	uint64_t x51 = 225773LLU;
	static uint64_t x52 = 31147LLU;

    t12 = (x49+((x50!=x51)>x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -97090690736319LL;
	int8_t x54 = 1;
	static int8_t x55 = 31;
	int64_t t13 = 17106858LL;

    t13 = (x53+((x54!=x55)>x56));

    if (t13 != -97090690736319LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	volatile uint32_t x64 = 7490316U;

    t14 = (x61+((x62!=x63)>x64));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = -1LL;
	int64_t x66 = -539150815121009LL;
	volatile int64_t x67 = INT64_MAX;
	static uint16_t x68 = 6769U;
	int64_t t15 = -210930719964163058LL;

    t15 = (x65+((x66!=x67)>x68));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = -1;
	uint32_t x70 = 31374U;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;

    t16 = (x69+((x70!=x71)>x72));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int8_t x74 = INT8_MIN;
	int32_t x75 = -1106;
	int16_t x76 = -25;
	volatile int32_t t17 = -24664190;

    t17 = (x73+((x74!=x75)>x76));

    if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x78 = 1355U;
	static int16_t x79 = INT16_MIN;
	uint64_t x80 = 17675206130537LLU;
	volatile int32_t t18 = INT32_MIN;

    t18 = (x77+((x78!=x79)>x80));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x82 = 122U;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 1U;
	volatile uint32_t t19 = 8033U;

    t19 = (x81+((x82!=x83)>x84));

    if (t19 != 753U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 457LLU;
	uint64_t x86 = 3993965530900084LLU;
	int16_t x87 = 449;
	static volatile uint64_t t20 = 662353623LLU;

    t20 = (x85+((x86!=x87)>x88));

    if (t20 != 457LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x90 = -98114959;
	static uint8_t x91 = 2U;
	volatile int8_t x92 = INT8_MAX;
	static int32_t t21 = -36690128;

    t21 = (x89+((x90!=x91)>x92));

    if (t21 != -5841) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x93 = 27687U;
	static volatile int64_t x94 = INT64_MIN;
	static int64_t x96 = 134LL;
	int32_t t22 = -230;

    t22 = (x93+((x94!=x95)>x96));

    if (t22 != 27687) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1;
	volatile int64_t x99 = INT64_MIN;
	static int16_t x100 = INT16_MIN;

    t23 = (x97+((x98!=x99)>x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = 61U;
	volatile int64_t x103 = -99387LL;
	static int32_t x104 = -1;
	int32_t t24 = 18;

    t24 = (x101+((x102!=x103)>x104));

    if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x105 = INT16_MIN;
	uint32_t x106 = 1U;
	uint8_t x107 = 0U;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -297587415;

    t25 = (x105+((x106!=x107)>x108));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = 10984;
	volatile int32_t x110 = -33087;
	static volatile uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 829464129U;
	static volatile int32_t t26 = -204525;

    t26 = (x109+((x110!=x111)>x112));

    if (t26 != 10984) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x114 = 114U;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;

    t27 = (x113+((x114!=x115)>x116));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = 138959060LL;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	volatile uint16_t x120 = 43U;
	int64_t t28 = 376236402499LL;

    t28 = (x117+((x118!=x119)>x120));

    if (t28 != 138959060LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 1581525821867LLU;
	uint64_t x122 = 34LLU;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = -1LL;
	volatile uint64_t t29 = 8356LLU;

    t29 = (x121+((x122!=x123)>x124));

    if (t29 != 1581525821868LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = -452598;
	uint8_t x126 = 0U;
	uint64_t x128 = 2778540756432677917LLU;

    t30 = (x125+((x126!=x127)>x128));

    if (t30 != -452598) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	int8_t x130 = INT8_MAX;
	int16_t x132 = -1;
	int32_t t31 = -405370;

    t31 = (x129+((x130!=x131)>x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	volatile int8_t x134 = -1;
	volatile int8_t x135 = INT8_MAX;
	uint64_t x136 = 541649508831LLU;
	volatile int32_t t32 = 14824;

    t32 = (x133+((x134!=x135)>x136));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	int16_t x139 = 4965;
	int8_t x140 = 0;
	int32_t t33 = -1638650;

    t33 = (x137+((x138!=x139)>x140));

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x142 = INT16_MIN;
	static uint32_t x143 = UINT32_MAX;
	volatile uint32_t t34 = 1740U;

    t34 = (x141+((x142!=x143)>x144));

    if (t34 != 255U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x145 = -73327763597032LL;
	static uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 1U;
	int64_t t35 = 6142630659LL;

    t35 = (x145+((x146!=x147)>x148));

    if (t35 != -73327763597032LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x150 = -1;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = 2257;

    t36 = (x149+((x150!=x151)>x152));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = 2009;
	uint32_t x154 = 14071218U;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -27;
	volatile int32_t t37 = -36660341;

    t37 = (x153+((x154!=x155)>x156));

    if (t37 != 2010) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x157 = 0U;
	uint32_t x158 = 129542385U;
	volatile int32_t x159 = -63605;
	int8_t x160 = -14;
	static volatile int32_t t38 = 117939426;

    t38 = (x157+((x158!=x159)>x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -1LL;
	uint64_t x162 = UINT64_MAX;
	uint16_t x163 = 6256U;
	volatile int8_t x164 = INT8_MIN;
	volatile int64_t t39 = 2LL;

    t39 = (x161+((x162!=x163)>x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -5;
	int8_t x166 = -1;
	volatile int16_t x167 = -4;
	static volatile int8_t x168 = -11;
	int32_t t40 = 952599992;

    t40 = (x165+((x166!=x167)>x168));

    if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -1;
	static int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile uint64_t x172 = UINT64_MAX;
	int32_t t41 = -513;

    t41 = (x169+((x170!=x171)>x172));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x173 = INT32_MAX;
	uint8_t x174 = 10U;
	volatile uint64_t x175 = 3722029968LLU;
	int32_t t42 = INT32_MAX;

    t42 = (x173+((x174!=x175)>x176));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x179 = -1LL;
	uint16_t x180 = 1U;
	static int32_t t43 = -103409;

    t43 = (x177+((x178!=x179)>x180));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x181 = 866977U;
	uint32_t x182 = 453319U;
	volatile uint32_t x183 = UINT32_MAX;
	int64_t x184 = -1LL;
	volatile uint32_t t44 = 171561542U;

    t44 = (x181+((x182!=x183)>x184));

    if (t44 != 866978U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = INT8_MIN;
	uint8_t x186 = 3U;
	int8_t x188 = 0;
	volatile int32_t t45 = 28524137;

    t45 = (x185+((x186!=x187)>x188));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x190 = INT64_MIN;
	static int64_t x191 = INT64_MIN;
	static int8_t x192 = 15;
	int64_t t46 = INT64_MIN;

    t46 = (x189+((x190!=x191)>x192));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MIN;
	int64_t x196 = 527000739935571LL;
	int32_t t47 = INT32_MAX;

    t47 = (x193+((x194!=x195)>x196));

    if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x197 = INT8_MAX;
	uint8_t x198 = 45U;
	uint32_t x199 = 34U;
	int32_t x200 = INT32_MIN;
	int32_t t48 = 24223237;

    t48 = (x197+((x198!=x199)>x200));

    if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MIN;
	static int32_t x203 = INT32_MIN;
	static int64_t x204 = -1LL;

    t49 = (x201+((x202!=x203)>x204));

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;
	static volatile int32_t t50 = 108748216;

    t50 = (x205+((x206!=x207)>x208));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x210 = INT16_MIN;
	int16_t x211 = -9591;
	int16_t x212 = -1;

    t51 = (x209+((x210!=x211)>x212));

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = 0U;
	volatile int8_t x214 = 1;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;

    t52 = (x213+((x214!=x215)>x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -1;
	uint64_t x219 = 560922296381521LLU;
	int32_t x220 = INT32_MAX;
	volatile int32_t t53 = 3951;

    t53 = (x217+((x218!=x219)>x220));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	static int8_t x222 = 1;
	int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MAX;
	volatile int32_t t54 = -4;

    t54 = (x221+((x222!=x223)>x224));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x226 = INT8_MAX;
	uint32_t x227 = 1U;
	volatile int32_t t55 = 77;

    t55 = (x225+((x226!=x227)>x228));

    if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MIN;
	int8_t x231 = -62;
	uint32_t x232 = 585U;
	static volatile int64_t t56 = INT64_MIN;

    t56 = (x229+((x230!=x231)>x232));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = UINT16_MAX;
	static int16_t x235 = -1;
	int32_t x236 = -27;
	volatile int32_t t57 = 1713;

    t57 = (x233+((x234!=x235)>x236));

    if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = 172297;
	uint8_t x238 = 1U;
	int64_t x239 = -249446751409LL;
	uint64_t x240 = 103LLU;
	int32_t t58 = 0;

    t58 = (x237+((x238!=x239)>x240));

    if (t58 != 172297) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = -2673;
	static volatile uint16_t x242 = 1U;
	uint64_t x243 = 11859511812693912LLU;
	uint32_t x244 = UINT32_MAX;

    t59 = (x241+((x242!=x243)>x244));

    if (t59 != -2673) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x245 = INT16_MIN;
	static volatile int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	static int32_t t60 = 41645;

    t60 = (x245+((x246!=x247)>x248));

    if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = UINT8_MAX;
	static volatile int64_t x250 = 207076017661LL;
	int8_t x251 = 1;
	int32_t x252 = INT32_MIN;
	int32_t t61 = -208760916;

    t61 = (x249+((x250!=x251)>x252));

    if (t61 != 256) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x253 = -1LL;
	int16_t x255 = INT16_MAX;
	int64_t x256 = INT64_MIN;
	int64_t t62 = 682436LL;

    t62 = (x253+((x254!=x255)>x256));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x258 = -33912538;
	static uint16_t x259 = 404U;
	static volatile int8_t x260 = 3;

    t63 = (x257+((x258!=x259)>x260));

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x261 = -1;
	static int32_t x262 = INT32_MIN;
	static int8_t x263 = 3;
	static int64_t x264 = -61409898573873LL;
	int32_t t64 = -28418;

    t64 = (x261+((x262!=x263)>x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;
	int8_t x268 = -44;
	int32_t t65 = -43793957;

    t65 = (x265+((x266!=x267)>x268));

    if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x269 = 242;
	int8_t x270 = 1;
	volatile uint16_t x271 = UINT16_MAX;
	int32_t t66 = 1379;

    t66 = (x269+((x270!=x271)>x272));

    if (t66 != 242) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x273 = UINT64_MAX;
	static int64_t x275 = -283084LL;
	volatile uint32_t x276 = UINT32_MAX;

    t67 = (x273+((x274!=x275)>x276));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x277 = 0U;
	int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t68 = 41;

    t68 = (x277+((x278!=x279)>x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = INT32_MAX;
	int64_t t69 = -54010948427LL;

    t69 = (x281+((x282!=x283)>x284));

    if (t69 != -112382230692975409LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MAX;
	int32_t x287 = -1;
	int64_t x288 = 15LL;
	int32_t t70 = INT32_MAX;

    t70 = (x285+((x286!=x287)>x288));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x289 = INT64_MIN;
	uint16_t x290 = 21576U;
	int64_t x292 = INT64_MIN;
	int64_t t71 = 1LL;

    t71 = (x289+((x290!=x291)>x292));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t t72 = -635944;

    t72 = (x293+((x294!=x295)>x296));

    if (t72 != -51) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = 0;
	int64_t x299 = -97142LL;
	int32_t x300 = -767599480;
	volatile int32_t t73 = 73670944;

    t73 = (x297+((x298!=x299)>x300));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x302 = 67U;
	int16_t x304 = -1;
	int32_t t74 = 0;

    t74 = (x301+((x302!=x303)>x304));

    if (t74 != 34) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x305 = -1;
	uint32_t x307 = 232610U;
	int32_t t75 = -13703;

    t75 = (x305+((x306!=x307)>x308));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x309 = INT8_MIN;
	static int8_t x311 = -1;
	volatile int32_t t76 = -55258867;

    t76 = (x309+((x310!=x311)>x312));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = 5;
	static uint8_t x315 = UINT8_MAX;
	int64_t x316 = 738538876103648LL;
	int32_t t77 = -24872978;

    t77 = (x313+((x314!=x315)>x316));

    if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 4124U;
	int16_t x318 = -3020;
	volatile int32_t x319 = 355968;
	int32_t x320 = -1;
	uint32_t t78 = 60062101U;

    t78 = (x317+((x318!=x319)>x320));

    if (t78 != 4125U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = INT64_MIN;
	uint32_t x322 = 11U;
	int32_t x323 = INT32_MAX;
	static int32_t x324 = INT32_MAX;
	int64_t t79 = INT64_MIN;

    t79 = (x321+((x322!=x323)>x324));

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	static int8_t x328 = -2;
	volatile int32_t t80 = -13560;

    t80 = (x325+((x326!=x327)>x328));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x330 = INT8_MIN;
	static int8_t x331 = -4;
	int8_t x332 = 1;
	volatile int32_t t81 = 17453792;

    t81 = (x329+((x330!=x331)>x332));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x333 = UINT16_MAX;
	static int32_t x334 = INT32_MIN;
	static int64_t x335 = -1LL;
	volatile int32_t t82 = 240438;

    t82 = (x333+((x334!=x335)>x336));

    if (t82 != 65536) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x337 = -33;
	static uint64_t x338 = 6378692246792LLU;
	volatile uint32_t x339 = 3412261U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t83 = -215921252;

    t83 = (x337+((x338!=x339)>x340));

    if (t83 != -33) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x341 = INT32_MIN;
	uint16_t x342 = 2U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t84 = -1;

    t84 = (x341+((x342!=x343)>x344));

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x345 = -47742;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = INT16_MAX;
	int32_t t85 = 4075086;

    t85 = (x345+((x346!=x347)>x348));

    if (t85 != -47742) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x349 = 46U;
	int64_t x350 = INT64_MAX;
	static int32_t x352 = -1;
	int32_t t86 = -362;

    t86 = (x349+((x350!=x351)>x352));

    if (t86 != 47) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x354 = INT16_MIN;
	int32_t x355 = 920809044;
	uint16_t x356 = 14U;
	uint32_t t87 = 2589U;

    t87 = (x353+((x354!=x355)>x356));

    if (t87 != 587616U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	int16_t x359 = -3;
	static int16_t x360 = 1;
	int32_t t88 = 243;

    t88 = (x357+((x358!=x359)>x360));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 3U;
	static volatile int8_t x362 = -1;
	int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	static int32_t t89 = -159855734;

    t89 = (x361+((x362!=x363)>x364));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x366 = INT64_MIN;
	uint64_t x367 = 64766922949427992LLU;
	uint8_t x368 = 12U;
	int32_t t90 = 0;

    t90 = (x365+((x366!=x367)>x368));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = -1LL;
	int64_t x370 = -1LL;
	int16_t x371 = 1709;
	uint32_t x372 = UINT32_MAX;
	int64_t t91 = -15892340143752274LL;

    t91 = (x369+((x370!=x371)>x372));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = 1;
	int16_t x374 = INT16_MIN;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = 508;
	volatile int32_t t92 = 982;

    t92 = (x373+((x374!=x375)>x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x378 = 31484LLU;
	int8_t x380 = INT8_MIN;
	volatile int32_t t93 = 9;

    t93 = (x377+((x378!=x379)>x380));

    if (t93 != 216) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x381 = 607;
	volatile int32_t x382 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	volatile int32_t t94 = 102;

    t94 = (x381+((x382!=x383)>x384));

    if (t94 != 607) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x386 = INT32_MIN;
	static int32_t x387 = -1;
	uint16_t x388 = UINT16_MAX;

    t95 = (x385+((x386!=x387)>x388));

    if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x389 = -6257;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 3686U;
	int16_t x392 = INT16_MAX;
	int32_t t96 = -8887;

    t96 = (x389+((x390!=x391)>x392));

    if (t96 != -6257) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = INT32_MAX;
	static int32_t x394 = INT32_MIN;
	static int16_t x395 = -366;
	volatile uint64_t x396 = 60323LLU;
	int32_t t97 = INT32_MAX;

    t97 = (x393+((x394!=x395)>x396));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	volatile uint64_t x400 = 1541603710LLU;
	static int32_t t98 = -62268122;

    t98 = (x397+((x398!=x399)>x400));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x401 = INT64_MAX;
	volatile uint8_t x402 = 12U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	static int64_t t99 = INT64_MAX;

    t99 = (x401+((x402!=x403)>x404));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x405 = 0U;
	int32_t x406 = 90;
	int16_t x407 = INT16_MAX;
	int8_t x408 = -1;
	volatile int32_t t100 = 23;

    t100 = (x405+((x406!=x407)>x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = UINT8_MAX;
	uint64_t x412 = 10LLU;
	int32_t t101 = 0;

    t101 = (x409+((x410!=x411)>x412));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x413 = 1U;
	volatile int16_t x414 = 0;
	int8_t x415 = INT8_MAX;
	uint32_t x416 = 210001U;

    t102 = (x413+((x414!=x415)>x416));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x418 = -8;
	int64_t x419 = -12782558741LL;
	int64_t x420 = INT64_MIN;
	volatile int32_t t103 = 8544;

    t103 = (x417+((x418!=x419)>x420));

    if (t103 != 256) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x427 = INT64_MAX;
	static volatile uint64_t x428 = 261584LLU;

    t104 = (x425+((x426!=x427)>x428));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MAX;
	int16_t x430 = 12159;
	static int8_t x431 = INT8_MIN;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x429+((x430!=x431)>x432));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x433 = UINT8_MAX;
	volatile int16_t x435 = INT16_MIN;
	volatile int8_t x436 = -57;
	int32_t t106 = -6;

    t106 = (x433+((x434!=x435)>x436));

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x437 = -1;
	uint32_t x438 = UINT32_MAX;
	uint16_t x440 = 10U;
	static int32_t t107 = 2138;

    t107 = (x437+((x438!=x439)>x440));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x441 = 1791687831334LLU;
	uint64_t x442 = 2522343497947LLU;
	int32_t x443 = -433610;

    t108 = (x441+((x442!=x443)>x444));

    if (t108 != 1791687831335LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x445 = INT64_MAX;

    t109 = (x445+((x446!=x447)>x448));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x450 = 57U;
	static int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t110 = 240679068913LL;

    t110 = (x449+((x450!=x451)>x452));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x454 = INT16_MIN;
	uint16_t x455 = UINT16_MAX;

    t111 = (x453+((x454!=x455)>x456));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x457 = 77963889904172LLU;
	volatile int64_t x458 = INT64_MIN;
	int32_t x459 = 32039;
	volatile int8_t x460 = -1;
	uint64_t t112 = 83460643754435LLU;

    t112 = (x457+((x458!=x459)>x460));

    if (t112 != 77963889904173LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = -114;
	int32_t x462 = 201103;
	static int64_t x463 = INT64_MIN;
	volatile uint32_t x464 = UINT32_MAX;
	int32_t t113 = -60;

    t113 = (x461+((x462!=x463)>x464));

    if (t113 != -114) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x465 = 74452317226334LLU;
	uint64_t x466 = 3146927533588LLU;
	uint32_t x467 = 25U;
	int8_t x468 = INT8_MIN;
	uint64_t t114 = 1280492138LLU;

    t114 = (x465+((x466!=x467)>x468));

    if (t114 != 74452317226335LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x469 = 227U;
	int32_t x470 = -31425;
	uint32_t x471 = UINT32_MAX;
	volatile int8_t x472 = -13;
	volatile uint32_t t115 = 3U;

    t115 = (x469+((x470!=x471)>x472));

    if (t115 != 228U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = UINT32_MAX;
	int16_t x474 = 1635;
	uint8_t x475 = 8U;
	static volatile int8_t x476 = 3;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = (x473+((x474!=x475)>x476));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = -202;
	static int64_t x478 = -1LL;
	uint16_t x479 = 1992U;
	uint64_t x480 = UINT64_MAX;
	int32_t t117 = -1;

    t117 = (x477+((x478!=x479)>x480));

    if (t117 != -202) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = INT32_MIN;
	static uint64_t x482 = UINT64_MAX;
	int64_t x483 = -7229248509010LL;

    t118 = (x481+((x482!=x483)>x484));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MAX;
	int64_t x488 = -3970577133109293LL;
	int32_t t119 = -519340;

    t119 = (x485+((x486!=x487)>x488));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	volatile int16_t x491 = INT16_MAX;
	static uint32_t x492 = 102470U;

    t120 = (x489+((x490!=x491)>x492));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = -1;
	int16_t x494 = -1;
	int8_t x495 = 24;
	uint8_t x496 = 6U;

    t121 = (x493+((x494!=x495)>x496));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x498 = -1LL;
	static uint8_t x499 = 23U;
	volatile int64_t x500 = -111615130078LL;
	int32_t t122 = -2401020;

    t122 = (x497+((x498!=x499)>x500));

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x501 = 16293177063115LLU;
	static int16_t x502 = -45;
	int8_t x504 = 9;
	volatile uint64_t t123 = 1665148666LLU;

    t123 = (x501+((x502!=x503)>x504));

    if (t123 != 16293177063115LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x505 = INT32_MIN;
	uint16_t x506 = UINT16_MAX;
	volatile int64_t x507 = INT64_MAX;
	volatile int32_t t124 = INT32_MIN;

    t124 = (x505+((x506!=x507)>x508));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x509 = 462102U;
	static int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MIN;
	volatile int32_t x512 = INT32_MIN;
	volatile uint32_t t125 = 122635U;

    t125 = (x509+((x510!=x511)>x512));

    if (t125 != 462103U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x514 = 1;
	int16_t x515 = -1;
	static int64_t x516 = 61799052LL;

    t126 = (x513+((x514!=x515)>x516));

    if (t126 != -759400LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x517 = 1;
	static uint64_t x518 = 138505LLU;
	uint32_t x519 = UINT32_MAX;
	volatile int64_t x520 = -1LL;

    t127 = (x517+((x518!=x519)>x520));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x522 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	volatile int32_t t128 = -3388007;

    t128 = (x521+((x522!=x523)>x524));

    if (t128 != 959) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x525 = -18;
	uint64_t x526 = 0LLU;
	volatile int32_t x527 = INT32_MIN;

    t129 = (x525+((x526!=x527)>x528));

    if (t129 != -17) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x530 = INT32_MIN;
	static int16_t x531 = -25;
	static volatile uint32_t x532 = UINT32_MAX;
	volatile int32_t t130 = 3138;

    t130 = (x529+((x530!=x531)>x532));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -1;
	uint8_t x535 = 18U;
	volatile uint8_t x536 = 0U;

    t131 = (x533+((x534!=x535)>x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x537 = 2138491833490149LLU;
	int64_t x538 = -1LL;
	int32_t x540 = -1;
	volatile uint64_t t132 = 11228LLU;

    t132 = (x537+((x538!=x539)>x540));

    if (t132 != 2138491833490150LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x541 = UINT16_MAX;
	int64_t x542 = -1LL;
	uint16_t x543 = 1717U;
	int32_t t133 = 54605057;

    t133 = (x541+((x542!=x543)>x544));

    if (t133 != 65536) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x546 = 300686246482LLU;
	uint64_t x547 = UINT64_MAX;
	static int32_t t134 = 20;

    t134 = (x545+((x546!=x547)>x548));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x550 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	static int8_t x552 = INT8_MIN;
	int64_t t135 = -2969604LL;

    t135 = (x549+((x550!=x551)>x552));

    if (t135 != 833LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x554 = -3;
	uint64_t x555 = 117828985LLU;
	int8_t x556 = 5;
	static volatile int64_t t136 = -3LL;

    t136 = (x553+((x554!=x555)>x556));

    if (t136 != 1071257303746297LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x557 = -1;
	int16_t x558 = INT16_MIN;
	static int64_t x560 = INT64_MIN;
	volatile int32_t t137 = -3570;

    t137 = (x557+((x558!=x559)>x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x561 = 62U;
	volatile int16_t x562 = -3336;
	int64_t x563 = 2146971902676LL;
	volatile int8_t x564 = INT8_MIN;
	static uint32_t t138 = 1978168U;

    t138 = (x561+((x562!=x563)>x564));

    if (t138 != 63U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile int16_t x566 = INT16_MAX;
	uint64_t x567 = UINT64_MAX;
	static int8_t x568 = -35;
	static int32_t t139 = 160817291;

    t139 = (x565+((x566!=x567)>x568));

    if (t139 != 65536) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x569 = 1U;
	static int8_t x570 = INT8_MAX;
	uint8_t x571 = UINT8_MAX;
	int32_t x572 = INT32_MIN;
	uint32_t t140 = 33599339U;

    t140 = (x569+((x570!=x571)>x572));

    if (t140 != 2U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x573 = INT32_MAX;
	int8_t x574 = INT8_MIN;
	uint8_t x575 = 1U;
	int64_t x576 = 85094651321988100LL;
	volatile int32_t t141 = INT32_MAX;

    t141 = (x573+((x574!=x575)>x576));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = 0;
	volatile int32_t x578 = -552;
	int16_t x579 = -3;
	volatile int32_t x580 = INT32_MAX;
	int32_t t142 = 182309211;

    t142 = (x577+((x578!=x579)>x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x581 = 789698551745LL;
	uint8_t x582 = 17U;
	int64_t x583 = INT64_MIN;
	static int64_t x584 = INT64_MIN;

    t143 = (x581+((x582!=x583)>x584));

    if (t143 != 789698551746LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int16_t x586 = INT16_MIN;
	static int16_t x587 = -758;
	int64_t x588 = INT64_MIN;
	uint64_t t144 = 1LLU;

    t144 = (x585+((x586!=x587)>x588));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x589 = -1;
	int8_t x590 = -12;
	int64_t x591 = -4506161941725891026LL;
	volatile int32_t t145 = 80769;

    t145 = (x589+((x590!=x591)>x592));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x593 = -18;
	volatile int32_t x595 = -12;
	volatile int32_t x596 = 24;
	static int32_t t146 = -15076846;

    t146 = (x593+((x594!=x595)>x596));

    if (t146 != -18) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x597 = 72;
	uint8_t x598 = UINT8_MAX;
	uint8_t x599 = 4U;
	int32_t x600 = -1;
	static volatile int32_t t147 = -335664;

    t147 = (x597+((x598!=x599)>x600));

    if (t147 != 73) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x601 = INT32_MIN;
	volatile int32_t x602 = 528348602;
	static uint8_t x603 = 0U;
	volatile int32_t x604 = INT32_MIN;
	static volatile int32_t t148 = 307;

    t148 = (x601+((x602!=x603)>x604));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MIN;
	int32_t t149 = 2302956;

    t149 = (x605+((x606!=x607)>x608));

    if (t149 != 128) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x609 = UINT16_MAX;
	static int16_t x611 = 37;
	int32_t t150 = -1;

    t150 = (x609+((x610!=x611)>x612));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = 43;
	int64_t x614 = 352282637059738LL;
	int32_t t151 = -44;

    t151 = (x613+((x614!=x615)>x616));

    if (t151 != 44) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x617 = 12;
	volatile int8_t x618 = -1;
	int8_t x620 = 0;
	int32_t t152 = 884;

    t152 = (x617+((x618!=x619)>x620));

    if (t152 != 13) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x621 = -1;
	static int32_t x622 = -7;
	int8_t x623 = -1;
	uint32_t x624 = 1541184U;
	volatile int32_t t153 = 102353701;

    t153 = (x621+((x622!=x623)>x624));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x626 = INT64_MAX;
	volatile int32_t t154 = -1644256;

    t154 = (x625+((x626!=x627)>x628));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = INT8_MIN;
	int16_t x630 = INT16_MIN;
	int16_t x631 = -1;
	static int32_t x632 = INT32_MIN;
	int32_t t155 = -1620276;

    t155 = (x629+((x630!=x631)>x632));

    if (t155 != -127) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x635 = 89603354U;
	int8_t x636 = -1;
	volatile int32_t t156 = 188980;

    t156 = (x633+((x634!=x635)>x636));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x637 = 1764U;
	uint64_t x638 = 21LLU;
	int32_t x639 = INT32_MIN;
	static int32_t x640 = INT32_MIN;
	volatile uint32_t t157 = 63571U;

    t157 = (x637+((x638!=x639)>x640));

    if (t157 != 1765U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x643 = INT8_MIN;
	uint8_t x644 = 0U;
	int32_t t158 = 1635414;

    t158 = (x641+((x642!=x643)>x644));

    if (t158 != 20) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x646 = INT64_MIN;
	uint16_t x647 = 805U;
	volatile uint16_t x648 = 200U;
	volatile int32_t t159 = -291;

    t159 = (x645+((x646!=x647)>x648));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x649 = 3;
	volatile int64_t x650 = -1LL;
	uint16_t x651 = 49U;
	uint64_t x652 = 1381904788504746LLU;
	static int32_t t160 = -120892663;

    t160 = (x649+((x650!=x651)>x652));

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x654 = 239009LL;
	volatile uint32_t x655 = 6U;
	int16_t x656 = INT16_MIN;
	static int32_t t161 = -823775;

    t161 = (x653+((x654!=x655)>x656));

    if (t161 != 41) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x657 = UINT16_MAX;
	static int16_t x658 = -1;
	uint16_t x659 = 72U;
	volatile uint64_t x660 = UINT64_MAX;
	int32_t t162 = -7;

    t162 = (x657+((x658!=x659)>x660));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x661 = INT8_MAX;
	static uint16_t x663 = 920U;
	volatile int64_t x664 = INT64_MAX;
	volatile int32_t t163 = -27611502;

    t163 = (x661+((x662!=x663)>x664));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x666 = -1;
	static int8_t x667 = -2;
	int16_t x668 = 1615;
	int32_t t164 = 8665605;

    t164 = (x665+((x666!=x667)>x668));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x669 = 38U;
	uint64_t x670 = 127495352637985482LLU;
	uint8_t x671 = 5U;
	uint64_t x672 = UINT64_MAX;
	int32_t t165 = -1;

    t165 = (x669+((x670!=x671)>x672));

    if (t165 != 38) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x673 = 0LLU;
	volatile int16_t x674 = 1;
	volatile int16_t x675 = 0;
	int32_t x676 = 1;
	uint64_t t166 = 270022LLU;

    t166 = (x673+((x674!=x675)>x676));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = -129;
	static int8_t x678 = 6;
	int64_t x679 = 668699993959058364LL;
	uint64_t x680 = 4LLU;
	volatile int32_t t167 = 105;

    t167 = (x677+((x678!=x679)>x680));

    if (t167 != -129) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x681 = 5283;
	volatile int8_t x682 = INT8_MIN;
	uint32_t x683 = 6004907U;
	volatile int32_t t168 = 790752232;

    t168 = (x681+((x682!=x683)>x684));

    if (t168 != 5284) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x686 = 60406473LL;
	static int32_t x687 = 1;
	int64_t x688 = 25613699232LL;
	volatile int64_t t169 = -28439136610LL;

    t169 = (x685+((x686!=x687)>x688));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x689 = INT32_MIN;
	static uint16_t x690 = 208U;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;

    t170 = (x689+((x690!=x691)>x692));

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x693 = 40U;
	static uint16_t x694 = 26U;
	int64_t x696 = 124263756345920324LL;

    t171 = (x693+((x694!=x695)>x696));

    if (t171 != 40) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x697 = INT64_MIN;
	int16_t x698 = INT16_MAX;
	static int8_t x699 = INT8_MIN;
	int8_t x700 = -1;
	volatile int64_t t172 = 194085LL;

    t172 = (x697+((x698!=x699)>x700));

    if (t172 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x701 = -1;
	static int32_t x702 = INT32_MAX;
	uint32_t x703 = UINT32_MAX;
	static int32_t t173 = -10716;

    t173 = (x701+((x702!=x703)>x704));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x705 = INT64_MAX;
	int8_t x707 = 3;
	uint16_t x708 = UINT16_MAX;
	int64_t t174 = INT64_MAX;

    t174 = (x705+((x706!=x707)>x708));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x709 = 3U;
	int8_t x710 = INT8_MIN;
	uint32_t x711 = 5707U;
	int32_t x712 = 261901;

    t175 = (x709+((x710!=x711)>x712));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x713 = INT8_MIN;
	int16_t x714 = 98;
	volatile int64_t x715 = INT64_MAX;
	static int64_t x716 = INT64_MAX;
	int32_t t176 = -559;

    t176 = (x713+((x714!=x715)>x716));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x717 = 12047U;
	static int32_t x718 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	uint64_t x720 = 35LLU;

    t177 = (x717+((x718!=x719)>x720));

    if (t177 != 12047U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = -148LL;
	static volatile uint64_t x723 = 260455LLU;
	int16_t x724 = -1;
	volatile int64_t t178 = -7713485LL;

    t178 = (x721+((x722!=x723)>x724));

    if (t178 != -147LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x726 = -1LL;
	static volatile int8_t x727 = INT8_MIN;
	int64_t x728 = -1LL;
	static int32_t t179 = 28504;

    t179 = (x725+((x726!=x727)>x728));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x730 = 1;
	volatile int32_t x731 = -1;
	static int16_t x732 = INT16_MAX;
	volatile int32_t t180 = -3;

    t180 = (x729+((x730!=x731)>x732));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x734 = 1389618804U;
	uint32_t t181 = UINT32_MAX;

    t181 = (x733+((x734!=x735)>x736));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x737 = -5;
	int16_t x738 = INT16_MAX;
	uint8_t x739 = 2U;
	uint8_t x740 = 39U;
	volatile int32_t t182 = -374345243;

    t182 = (x737+((x738!=x739)>x740));

    if (t182 != -5) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x741 = 4;
	static int32_t x742 = 1056;
	static int64_t x743 = INT64_MIN;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t183 = 11;

    t183 = (x741+((x742!=x743)>x744));

    if (t183 != 4) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x746 = 309964LLU;
	int16_t x747 = INT16_MIN;
	int32_t t184 = 7691;

    t184 = (x745+((x746!=x747)>x748));

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x749 = 47132133U;
	uint8_t x750 = UINT8_MAX;
	int8_t x752 = 16;
	volatile uint32_t t185 = 4U;

    t185 = (x749+((x750!=x751)>x752));

    if (t185 != 47132133U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x754 = -1;
	static int64_t x755 = -1LL;
	static volatile int64_t x756 = INT64_MIN;

    t186 = (x753+((x754!=x755)>x756));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x757 = INT64_MIN;
	uint16_t x758 = UINT16_MAX;
	volatile uint32_t x759 = 21U;
	uint16_t x760 = UINT16_MAX;
	int64_t t187 = INT64_MIN;

    t187 = (x757+((x758!=x759)>x760));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x762 = INT32_MAX;
	static int8_t x763 = INT8_MIN;
	volatile int8_t x764 = INT8_MAX;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x761+((x762!=x763)>x764));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x765 = UINT16_MAX;
	int64_t x766 = INT64_MAX;
	uint16_t x768 = 679U;
	volatile int32_t t189 = 22717241;

    t189 = (x765+((x766!=x767)>x768));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x770 = INT8_MIN;
	volatile int16_t x771 = 323;
	uint32_t x772 = UINT32_MAX;
	int32_t t190 = 445977782;

    t190 = (x769+((x770!=x771)>x772));

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x773 = 1U;
	int64_t x775 = INT64_MIN;
	int64_t x776 = INT64_MIN;
	int32_t t191 = -12;

    t191 = (x773+((x774!=x775)>x776));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x777 = 212U;
	volatile int32_t x778 = INT32_MAX;
	int64_t x779 = INT64_MIN;
	uint32_t t192 = 49166U;

    t192 = (x777+((x778!=x779)>x780));

    if (t192 != 212U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x781 = -96908851LL;
	int16_t x782 = 124;
	int64_t x783 = INT64_MIN;
	volatile uint16_t x784 = UINT16_MAX;
	static volatile int64_t t193 = 1366251425LL;

    t193 = (x781+((x782!=x783)>x784));

    if (t193 != -96908851LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x785 = 55983186736794619LLU;
	static int16_t x786 = -1;
	int16_t x787 = INT16_MIN;
	volatile uint32_t x788 = 64U;
	uint64_t t194 = 1690695LLU;

    t194 = (x785+((x786!=x787)>x788));

    if (t194 != 55983186736794619LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x789 = -1;
	int8_t x790 = INT8_MIN;
	int16_t x791 = -350;
	volatile int32_t x792 = 15836;
	static volatile int32_t t195 = 8233;

    t195 = (x789+((x790!=x791)>x792));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x797 = 14U;
	uint32_t x798 = 4U;
	int64_t x799 = 61308874344111008LL;
	int64_t x800 = -1LL;
	volatile int32_t t196 = -235414;

    t196 = (x797+((x798!=x799)>x800));

    if (t196 != 15) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = -3;
	int16_t x802 = INT16_MIN;
	int16_t x803 = 596;
	volatile int32_t t197 = -8490;

    t197 = (x801+((x802!=x803)>x804));

    if (t197 != -3) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x805 = INT8_MIN;
	uint8_t x806 = 1U;
	volatile uint8_t x807 = 4U;
	int8_t x808 = -1;
	int32_t t198 = 12;

    t198 = (x805+((x806!=x807)>x808));

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x809 = INT16_MAX;
	static int32_t x812 = INT32_MIN;
	int32_t t199 = 20171273;

    t199 = (x809+((x810!=x811)>x812));

    if (t199 != 32768) { NG(); } else { ; }
	
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

