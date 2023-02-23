
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

uint16_t x13 = UINT16_MAX;
volatile int16_t x20 = INT16_MAX;
int8_t x36 = 11;
int32_t x40 = 12257333;
int32_t t9 = 11;
volatile int16_t x41 = INT16_MIN;
uint32_t x42 = 745U;
static int32_t t10 = 7881;
static uint16_t x47 = 1200U;
int32_t x50 = 0;
uint32_t x51 = 624789070U;
int16_t x61 = -1;
static int16_t x67 = INT16_MAX;
static uint16_t x68 = 3U;
volatile int32_t t18 = INT32_MIN;
int16_t x77 = 1226;
uint32_t x79 = UINT32_MAX;
static volatile int16_t x84 = -1;
static int16_t x89 = 50;
volatile int16_t x91 = INT16_MIN;
volatile uint8_t x95 = 14U;
volatile int32_t x96 = INT32_MIN;
volatile int32_t x100 = -1;
int32_t x105 = INT32_MIN;
uint16_t x114 = 1488U;
static int16_t x115 = -1;
int16_t x116 = 1;
uint32_t x118 = 278945139U;
uint32_t x120 = 1350U;
int64_t x122 = INT64_MIN;
uint64_t t30 = 32LLU;
int32_t t31 = 3;
uint64_t t33 = UINT64_MAX;
volatile int32_t x145 = 173;
int8_t x147 = INT8_MIN;
uint16_t x149 = 5032U;
static int32_t x153 = INT32_MIN;
static volatile int8_t x155 = INT8_MIN;
uint64_t x157 = 2LLU;
uint32_t x159 = 647251706U;
volatile int16_t x166 = INT16_MAX;
int8_t x175 = -15;
int32_t x178 = INT32_MAX;
volatile int16_t x183 = 5;
uint64_t t44 = 8736049308821570833LLU;
uint16_t x194 = UINT16_MAX;
uint64_t t47 = 129317221191LLU;
uint16_t x197 = 1U;
volatile int32_t t48 = -8140;
int32_t x203 = -1;
uint8_t x206 = UINT8_MAX;
int16_t x211 = INT16_MIN;
static int8_t x215 = INT8_MIN;
int32_t x228 = INT32_MIN;
static uint32_t x231 = 399U;
int8_t x235 = -1;
int32_t t57 = 660046;
volatile int32_t x244 = INT32_MIN;
int16_t x247 = INT16_MIN;
static volatile uint64_t x259 = UINT64_MAX;
uint32_t x260 = 21094797U;
uint16_t x261 = 6079U;
int32_t x264 = -12295689;
uint8_t x265 = UINT8_MAX;
volatile int32_t x266 = INT32_MIN;
int8_t x267 = INT8_MAX;
volatile int8_t x268 = 1;
volatile int32_t t65 = -98;
volatile int8_t x272 = INT8_MIN;
int8_t x273 = INT8_MAX;
int32_t x274 = INT32_MIN;
static int64_t x282 = INT64_MIN;
volatile uint16_t x283 = 20U;
uint32_t t70 = 2652U;
int64_t x290 = -1LL;
uint8_t x291 = UINT8_MAX;
static int32_t x298 = -1;
static volatile int16_t x306 = -1;
uint64_t x310 = UINT64_MAX;
volatile int32_t t76 = 137546;
static int64_t x315 = 0LL;
int32_t t77 = -69350;
int8_t x324 = INT8_MIN;
int8_t x327 = -21;
volatile int32_t t80 = -3;
static uint64_t x329 = UINT64_MAX;
uint8_t x332 = 11U;
int8_t x333 = INT8_MIN;
static int32_t t82 = 1468757;
uint32_t t83 = 9U;
static int8_t x345 = INT8_MIN;
int64_t x347 = -3388948266562LL;
int16_t x348 = -1;
int32_t t85 = 47269;
int16_t x351 = 67;
uint32_t x362 = 1930304U;
int32_t x367 = INT32_MIN;
volatile uint8_t x373 = 1U;
int64_t x378 = -1LL;
volatile int32_t t93 = -41784624;
int16_t x381 = INT16_MAX;
int64_t x385 = INT64_MIN;
int32_t x386 = INT32_MIN;
int64_t t95 = 1LL;
int16_t x395 = INT16_MIN;
static int32_t x398 = -27;
int64_t x407 = -20LL;
int32_t x414 = 7872;
int8_t x415 = INT8_MIN;
volatile int32_t t102 = 307414784;
static int32_t x419 = -1;
int32_t x423 = -1;
volatile int32_t t104 = 4245;
static volatile int32_t t108 = -438;
static volatile int32_t t109 = 6077;
int32_t x452 = -1;
int32_t t111 = -28662373;
int32_t x457 = INT32_MAX;
int32_t t113 = INT32_MAX;
uint8_t x464 = UINT8_MAX;
static int64_t t114 = 16389LL;
int16_t x472 = INT16_MIN;
int16_t x474 = 0;
int16_t x478 = INT16_MIN;
volatile int32_t t119 = -3055426;
static int8_t x487 = -1;
static int32_t x489 = 1824729;
volatile int32_t t121 = -124;
volatile uint32_t t122 = 0U;
int16_t x499 = INT16_MAX;
uint64_t x501 = 3843699219953640741LLU;
volatile uint32_t t125 = 5883415U;
int16_t x513 = -1;
uint16_t x514 = 0U;
uint32_t x526 = UINT32_MAX;
int64_t t130 = 2235130569056556LL;
int32_t x533 = INT32_MAX;
int8_t x536 = INT8_MIN;
int32_t t132 = INT32_MAX;
volatile int16_t x540 = 2;
static uint32_t x544 = UINT32_MAX;
static int16_t x545 = -2;
static uint16_t x560 = 19U;
volatile int16_t x567 = -1;
int16_t x568 = INT16_MIN;
static int64_t t139 = 356979945LL;
static volatile int64_t x570 = -1LL;
volatile uint64_t t141 = 10021LLU;
volatile uint32_t x578 = 2985U;
volatile int8_t x592 = INT8_MIN;
uint8_t x595 = 2U;
volatile uint64_t x606 = UINT64_MAX;
int32_t x609 = -1;
int8_t x612 = -1;
volatile int32_t t150 = 36;
uint32_t x613 = 175249U;
int64_t x620 = INT64_MIN;
int32_t t152 = 331599;
int8_t x621 = INT8_MAX;
static int32_t x636 = 121;
int16_t x648 = -1;
volatile uint32_t t160 = 11124007U;
static int8_t x655 = INT8_MIN;
int32_t t161 = 0;
uint64_t x657 = UINT64_MAX;
volatile uint8_t x660 = 27U;
int16_t x663 = INT16_MIN;
uint32_t t163 = UINT32_MAX;
volatile int32_t t166 = -125009;
volatile int32_t t167 = 416904834;
int8_t x689 = 2;
static int16_t x691 = 635;
static volatile int32_t x692 = INT32_MIN;
uint8_t x698 = UINT8_MAX;
static int64_t t172 = -13860161098655LL;
int64_t x704 = INT64_MIN;
int32_t x706 = INT32_MIN;
volatile uint16_t x709 = UINT16_MAX;
int32_t x714 = 38;
int32_t x718 = -1;
int32_t t178 = -2901953;
static uint16_t x726 = 0U;
int8_t x727 = INT8_MIN;
int8_t x731 = INT8_MIN;
uint64_t t180 = 10415729478LLU;
static volatile int32_t x733 = -38;
uint32_t x734 = 83U;
uint64_t x735 = 863659935359LLU;
int64_t x744 = -1LL;
int64_t t183 = -4985029707LL;
volatile uint64_t t184 = 3LLU;
static int16_t x749 = INT16_MIN;
int64_t x751 = 14363617552LL;
uint32_t x754 = 169U;
int32_t x757 = -3826373;
uint64_t x762 = 52LLU;
static int8_t x770 = -13;
volatile int32_t x774 = INT32_MIN;
int64_t x776 = -1LL;
volatile int64_t t191 = -36745990283LL;
int8_t x777 = INT8_MAX;
static int16_t x790 = INT16_MIN;
static int8_t x791 = INT8_MIN;
int32_t x795 = INT32_MIN;
volatile uint16_t x798 = 36U;
int8_t x799 = INT8_MAX;
int8_t x804 = -1;
int8_t x806 = INT8_MIN;
static int8_t x807 = INT8_MIN;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	uint32_t x3 = UINT32_MAX;
	static int64_t x4 = 431567767398LL;
	volatile int32_t t0 = -9870672;

    t0 = (x1+((x2==x3)<=x4));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 14692098567466768LLU;
	volatile int8_t x8 = -1;
	volatile int32_t t1 = -4;

    t1 = (x5+((x6==x7)<=x8));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 5U;
	volatile int64_t x10 = INT64_MIN;
	volatile int32_t x11 = INT32_MIN;
	volatile int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 791035776;

    t2 = (x9+((x10==x11)<=x12));

    if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -1LL;
	volatile int8_t x15 = -1;
	int16_t x16 = -47;
	static int32_t t3 = 18;

    t3 = (x13+((x14==x15)<=x16));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	static int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MAX;
	static volatile int32_t t4 = -57354;

    t4 = (x17+((x18==x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 2380U;
	volatile int64_t x22 = -1LL;
	uint64_t x23 = UINT64_MAX;
	static volatile int32_t x24 = INT32_MIN;
	int32_t t5 = 674325438;

    t5 = (x21+((x22==x23)<=x24));

    if (t5 != 2380) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static int16_t x26 = -1;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 755197691;

    t6 = (x25+((x26==x27)<=x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	static uint64_t x30 = 1930LLU;
	int16_t x31 = -1;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 170846843LL;

    t7 = (x29+((x30==x31)<=x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	uint32_t x34 = UINT32_MAX;
	static uint64_t x35 = 10LLU;
	uint64_t t8 = 11LLU;

    t8 = (x33+((x34==x35)<=x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 5;
	int64_t x39 = 20LL;

    t9 = (x37+((x38==x39)<=x40));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x43 = -1;
	int16_t x44 = -1;

    t10 = (x41+((x42==x43)<=x44));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static int16_t x46 = -1;
	static uint16_t x48 = 2U;
	volatile int32_t t11 = -14;

    t11 = (x45+((x46==x47)<=x48));

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -97;
	static int16_t x52 = -1;
	static int32_t t12 = 8966486;

    t12 = (x49+((x50==x51)<=x52));

    if (t12 != -97) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile uint32_t t13 = 4U;

    t13 = (x53+((x54==x55)<=x56));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static int8_t x58 = 15;
	int64_t x59 = INT64_MIN;
	volatile uint16_t x60 = 72U;
	int32_t t14 = 66;

    t14 = (x57+((x58==x59)<=x60));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	static uint16_t x64 = 0U;
	static volatile int32_t t15 = 1;

    t15 = (x61+((x62==x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	volatile int32_t t16 = -679509;

    t16 = (x65+((x66==x67)<=x68));

    if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	uint64_t x70 = 912LLU;
	static uint64_t x71 = 10835242391LLU;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 635957;

    t17 = (x69+((x70==x71)<=x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = 47541384777529305LL;
	uint8_t x75 = 0U;
	int32_t x76 = INT32_MIN;

    t18 = (x73+((x74==x75)<=x76));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -328524185;

    t19 = (x77+((x78==x79)<=x80));

    if (t19 != 1227) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = 1868;
	int16_t x82 = -1;
	int8_t x83 = INT8_MAX;
	int32_t t20 = 862;

    t20 = (x81+((x82==x83)<=x84));

    if (t20 != 1868) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 8U;
	static uint64_t x86 = 65266LLU;
	int8_t x87 = -10;
	static int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 29;

    t21 = (x85+((x86==x87)<=x88));

    if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x90 = 1501U;
	int8_t x92 = 1;
	static int32_t t22 = -911888219;

    t22 = (x89+((x90==x91)<=x92));

    if (t22 != 51) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 281U;
	volatile uint16_t x94 = UINT16_MAX;
	volatile uint32_t t23 = 29607U;

    t23 = (x93+((x94==x95)<=x96));

    if (t23 != 281U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int32_t x98 = 1;
	int8_t x99 = -61;
	volatile int32_t t24 = 1505;

    t24 = (x97+((x98==x99)<=x100));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int32_t x102 = -176414958;
	uint32_t x103 = UINT32_MAX;
	static volatile int8_t x104 = 0;
	volatile int32_t t25 = -1;

    t25 = (x101+((x102==x103)<=x104));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = -1;
	volatile int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;
	volatile int32_t t26 = 300623469;

    t26 = (x105+((x106==x107)<=x108));

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MAX;
	uint64_t x110 = 6360191LLU;
	int64_t x111 = -1LL;
	static uint16_t x112 = 0U;
	int32_t t27 = 79;

    t27 = (x109+((x110==x111)<=x112));

    if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	int32_t t28 = -14;

    t28 = (x113+((x114==x115)<=x116));

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = 15U;
	volatile int16_t x119 = INT16_MIN;
	volatile int32_t t29 = 3005030;

    t29 = (x117+((x118==x119)<=x120));

    if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x121 = 537700313846811945LLU;
	static int64_t x123 = -879234068446903540LL;
	int32_t x124 = -1;

    t30 = (x121+((x122==x123)<=x124));

    if (t30 != 537700313846811945LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = 7;
	uint16_t x128 = UINT16_MAX;

    t31 = (x125+((x126==x127)<=x128));

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 3;
	static volatile int16_t x130 = -105;
	uint64_t x131 = 42982191LLU;
	volatile uint8_t x132 = UINT8_MAX;
	static volatile int32_t t32 = -8383219;

    t32 = (x129+((x130==x131)<=x132));

    if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	volatile int32_t x134 = -1;
	static int16_t x135 = -2102;
	int16_t x136 = INT16_MIN;

    t33 = (x133+((x134==x135)<=x136));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -1;
	volatile int32_t t34 = INT32_MIN;

    t34 = (x137+((x138==x139)<=x140));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x146 = UINT32_MAX;
	uint64_t x148 = 1035299076530152LLU;
	volatile int32_t t35 = -64635;

    t35 = (x145+((x146==x147)<=x148));

    if (t35 != 174) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x150 = 5367;
	uint16_t x151 = 3576U;
	volatile int8_t x152 = INT8_MIN;
	int32_t t36 = -2451876;

    t36 = (x149+((x150==x151)<=x152));

    if (t36 != 5032) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x154 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t37 = INT32_MIN;

    t37 = (x153+((x154==x155)<=x156));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x158 = UINT8_MAX;
	int32_t x160 = INT32_MAX;
	uint64_t t38 = 300420838LLU;

    t38 = (x157+((x158==x159)<=x160));

    if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MAX;
	int32_t x162 = 259;
	uint16_t x163 = 3962U;
	int64_t x164 = -1LL;
	int32_t t39 = INT32_MAX;

    t39 = (x161+((x162==x163)<=x164));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = 18;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t40 = -90305;

    t40 = (x165+((x166==x167)<=x168));

    if (t40 != 18) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x169 = 120321637297568577LLU;
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	static volatile int8_t x172 = -1;
	static uint64_t t41 = 30491LLU;

    t41 = (x169+((x170==x171)<=x172));

    if (t41 != 120321637297568577LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	int32_t x174 = -1;
	volatile uint8_t x176 = 15U;
	volatile int32_t t42 = -7438;

    t42 = (x173+((x174==x175)<=x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -1LL;
	int64_t x179 = 174868848561LL;
	static volatile int8_t x180 = -5;
	volatile int64_t t43 = -1LL;

    t43 = (x177+((x178==x179)<=x180));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x181 = 1604625942095399684LLU;
	volatile uint16_t x182 = 6U;
	uint32_t x184 = 1782816U;

    t44 = (x181+((x182==x183)<=x184));

    if (t44 != 1604625942095399685LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = -1;
	int8_t x186 = 1;
	static int32_t x187 = INT32_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t45 = 27071;

    t45 = (x185+((x186==x187)<=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -53;
	uint32_t x190 = 142U;
	static int32_t x191 = INT32_MAX;
	volatile int64_t x192 = 3963035559LL;
	int32_t t46 = 908638;

    t46 = (x189+((x190==x191)<=x192));

    if (t46 != -52) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 551453828297LLU;
	int16_t x195 = 0;
	int32_t x196 = INT32_MAX;

    t47 = (x193+((x194==x195)<=x196));

    if (t47 != 551453828298LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = 3;

    t48 = (x197+((x198==x199)<=x200));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x201 = 1U;
	volatile int16_t x202 = 1792;
	int16_t x204 = INT16_MIN;
	int32_t t49 = -5326;

    t49 = (x201+((x202==x203)<=x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	uint8_t x207 = 17U;
	int16_t x208 = -8;
	volatile int32_t t50 = 157699;

    t50 = (x205+((x206==x207)<=x208));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -1;
	static uint16_t x210 = UINT16_MAX;
	volatile int8_t x212 = INT8_MAX;
	int32_t t51 = 83604;

    t51 = (x209+((x210==x211)<=x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MAX;
	uint32_t x216 = 37U;
	volatile int32_t t52 = -477802580;

    t52 = (x213+((x214==x215)<=x216));

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = UINT8_MAX;
	static uint16_t x218 = 104U;
	int16_t x219 = -6045;
	uint8_t x220 = UINT8_MAX;
	int32_t t53 = 2337;

    t53 = (x217+((x218==x219)<=x220));

    if (t53 != 256) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MAX;
	static uint64_t x222 = 35LLU;
	volatile uint8_t x223 = UINT8_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	int32_t t54 = -2819313;

    t54 = (x221+((x222==x223)<=x224));

    if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x225 = -1;
	volatile int16_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	static int32_t t55 = 29;

    t55 = (x225+((x226==x227)<=x228));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 0;
	int16_t x230 = -1;
	int8_t x232 = -23;
	volatile int32_t t56 = 0;

    t56 = (x229+((x230==x231)<=x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x233 = 0U;
	static int64_t x234 = 7155439562453LL;
	static volatile int64_t x236 = INT64_MIN;

    t57 = (x233+((x234==x235)<=x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x237 = INT32_MIN;
	static uint32_t x238 = 1621342U;
	volatile int32_t x239 = INT32_MAX;
	int8_t x240 = 1;
	int32_t t58 = -15491704;

    t58 = (x237+((x238==x239)<=x240));

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = -1;
	int16_t x242 = -1;
	uint64_t x243 = 1788348249739851LLU;
	static int32_t t59 = 99962;

    t59 = (x241+((x242==x243)<=x244));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MIN;
	volatile int64_t x246 = INT64_MIN;
	int16_t x248 = 0;
	int64_t t60 = 44155403497LL;

    t60 = (x245+((x246==x247)<=x248));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x249 = 0;
	volatile uint16_t x250 = 1167U;
	static volatile uint32_t x251 = 54348797U;
	int8_t x252 = 0;
	volatile int32_t t61 = 700875;

    t61 = (x249+((x250==x251)<=x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile uint8_t x255 = 122U;
	int64_t x256 = INT64_MIN;
	int64_t t62 = INT64_MIN;

    t62 = (x253+((x254==x255)<=x256));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x257 = 731559723389613LLU;
	uint8_t x258 = UINT8_MAX;
	static volatile uint64_t t63 = 6059774761132835706LLU;

    t63 = (x257+((x258==x259)<=x260));

    if (t63 != 731559723389614LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	static int32_t t64 = 2698;

    t64 = (x261+((x262==x263)<=x264));

    if (t64 != 6079) { NG(); } else { ; }
	
}

void f65(void) {
    

    t65 = (x265+((x266==x267)<=x268));

    if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = 1LL;
	volatile uint32_t x270 = 11385U;
	int64_t x271 = INT64_MIN;
	static int64_t t66 = 2143758870159LL;

    t66 = (x269+((x270==x271)<=x272));

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 8107U;
	volatile int32_t t67 = -1111;

    t67 = (x273+((x274==x275)<=x276));

    if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x277 = INT8_MIN;
	uint64_t x278 = 144669LLU;
	int16_t x279 = -3;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t68 = -56394;

    t68 = (x277+((x278==x279)<=x280));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x281 = UINT32_MAX;
	uint8_t x284 = 95U;
	static volatile uint32_t t69 = 14816208U;

    t69 = (x281+((x282==x283)<=x284));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x285 = UINT32_MAX;
	int8_t x286 = -1;
	uint16_t x287 = 1649U;
	uint16_t x288 = 22U;

    t70 = (x285+((x286==x287)<=x288));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x289 = INT64_MIN;
	uint32_t x292 = 8401627U;
	volatile int64_t t71 = -145729588381747907LL;

    t71 = (x289+((x290==x291)<=x292));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MAX;
	volatile int16_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = 532647571171492676LL;
	int32_t t72 = -1;

    t72 = (x293+((x294==x295)<=x296));

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = 42676;
	int8_t x299 = INT8_MAX;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t73 = 32336;

    t73 = (x297+((x298==x299)<=x300));

    if (t73 != 42677) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = -1LL;
	uint8_t x302 = 1U;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -1LL;
	int64_t t74 = -34LL;

    t74 = (x301+((x302==x303)<=x304));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = 1;
	volatile int64_t t75 = -113887330788051925LL;

    t75 = (x305+((x306==x307)<=x308));

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x309 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 501801371283584495LL;

    t76 = (x309+((x310==x311)<=x312));

    if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	uint32_t x316 = 1U;

    t77 = (x313+((x314==x315)<=x316));

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MAX;
	int16_t x319 = 0;
	static uint16_t x320 = 2U;
	volatile int32_t t78 = 78;

    t78 = (x317+((x318==x319)<=x320));

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = 12217U;
	uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = 54U;
	static volatile uint32_t t79 = 557190U;

    t79 = (x321+((x322==x323)<=x324));

    if (t79 != 12217U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = 3167437;
	uint32_t x326 = UINT32_MAX;
	volatile int64_t x328 = 41016917LL;

    t80 = (x325+((x326==x327)<=x328));

    if (t80 != 3167438) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	volatile uint64_t t81 = 3491686241775972363LLU;

    t81 = (x329+((x330==x331)<=x332));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x334 = 0;
	volatile int32_t x335 = -1;
	volatile uint8_t x336 = 3U;

    t82 = (x333+((x334==x335)<=x336));

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x337 = 491U;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 132611U;
	uint8_t x340 = 1U;

    t83 = (x337+((x338==x339)<=x340));

    if (t83 != 492U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = -1;
	uint16_t x342 = 162U;
	static int8_t x343 = INT8_MIN;
	uint32_t x344 = 91351139U;
	volatile int32_t t84 = -5;

    t84 = (x341+((x342==x343)<=x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x346 = INT16_MAX;

    t85 = (x345+((x346==x347)<=x348));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = INT32_MIN;
	static uint16_t x350 = 5445U;
	uint16_t x352 = 210U;
	static volatile int32_t t86 = -10372;

    t86 = (x349+((x350==x351)<=x352));

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x353 = UINT32_MAX;
	static uint16_t x354 = 7U;
	int16_t x355 = INT16_MIN;
	int32_t x356 = 2;
	uint32_t t87 = 2464U;

    t87 = (x353+((x354==x355)<=x356));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x357 = -1;
	int32_t x358 = -89;
	static int8_t x359 = 1;
	static uint64_t x360 = UINT64_MAX;
	volatile int32_t t88 = -9;

    t88 = (x357+((x358==x359)<=x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MIN;
	uint8_t x363 = 17U;
	int8_t x364 = INT8_MIN;
	int64_t t89 = INT64_MIN;

    t89 = (x361+((x362==x363)<=x364));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x365 = -9;
	static uint64_t x366 = 7931LLU;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t90 = 890558;

    t90 = (x365+((x366==x367)<=x368));

    if (t90 != -8) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x369 = UINT8_MAX;
	static volatile int16_t x370 = INT16_MAX;
	volatile int16_t x371 = -1;
	volatile int8_t x372 = -1;
	int32_t t91 = 2212924;

    t91 = (x369+((x370==x371)<=x372));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x374 = -3;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = -3786975;
	volatile int32_t t92 = 253;

    t92 = (x373+((x374==x375)<=x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x377 = INT16_MIN;
	uint64_t x379 = 780327LLU;
	static uint8_t x380 = 71U;

    t93 = (x377+((x378==x379)<=x380));

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x382 = 7U;
	int64_t x383 = 8298464929534LL;
	int64_t x384 = 93628020LL;
	static volatile int32_t t94 = -10064849;

    t94 = (x381+((x382==x383)<=x384));

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x387 = -392993;
	int64_t x388 = INT64_MAX;

    t95 = (x385+((x386==x387)<=x388));

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = -3282;
	volatile uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 221878U;
	volatile int32_t t96 = 7433;

    t96 = (x389+((x390==x391)<=x392));

    if (t96 != -3281) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = -1;
	static uint64_t x394 = 102715717768891LLU;
	uint64_t x396 = 619335LLU;
	int32_t t97 = 19819485;

    t97 = (x393+((x394==x395)<=x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = 885;
	static uint16_t x399 = 18U;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t98 = 17;

    t98 = (x397+((x398==x399)<=x400));

    if (t98 != 886) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x401 = INT8_MAX;
	int64_t x402 = 6956LL;
	volatile int8_t x403 = INT8_MIN;
	volatile int32_t x404 = INT32_MAX;
	int32_t t99 = 1564180;

    t99 = (x401+((x402==x403)<=x404));

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x405 = 49308764481563562LLU;
	int8_t x406 = INT8_MIN;
	int16_t x408 = -570;
	uint64_t t100 = 36944991753LLU;

    t100 = (x405+((x406==x407)<=x408));

    if (t100 != 49308764481563562LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = 181U;
	int64_t x410 = -150513863678445926LL;
	static uint64_t x411 = 25874LLU;
	uint32_t x412 = 1U;
	volatile int32_t t101 = -1992;

    t101 = (x409+((x410==x411)<=x412));

    if (t101 != 182) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x413 = UINT16_MAX;
	int16_t x416 = INT16_MIN;

    t102 = (x413+((x414==x415)<=x416));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = 669385341;
	int64_t x418 = INT64_MIN;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t103 = -51761;

    t103 = (x417+((x418==x419)<=x420));

    if (t103 != 669385341) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x421 = INT16_MAX;
	volatile int64_t x422 = 28629021550599LL;
	uint32_t x424 = 4088254U;

    t104 = (x421+((x422==x423)<=x424));

    if (t104 != 32768) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x425 = 0U;
	static int8_t x426 = -1;
	int16_t x427 = INT16_MIN;
	static volatile int64_t x428 = INT64_MIN;
	uint32_t t105 = 2U;

    t105 = (x425+((x426==x427)<=x428));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = INT16_MAX;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t106 = 51058;

    t106 = (x429+((x430==x431)<=x432));

    if (t106 != 32768) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x433 = INT64_MIN;
	uint16_t x434 = 0U;
	uint64_t x435 = UINT64_MAX;
	int64_t x436 = INT64_MIN;
	int64_t t107 = INT64_MIN;

    t107 = (x433+((x434==x435)<=x436));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x437 = 23U;
	int16_t x438 = INT16_MIN;
	int32_t x439 = INT32_MAX;
	static int8_t x440 = 37;

    t108 = (x437+((x438==x439)<=x440));

    if (t108 != 24) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x441 = 3372U;
	int16_t x442 = INT16_MIN;
	int64_t x443 = -521056831167370559LL;
	uint32_t x444 = 4630392U;

    t109 = (x441+((x442==x443)<=x444));

    if (t109 != 3373) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MIN;
	static uint64_t x446 = UINT64_MAX;
	int64_t x447 = -28693221552LL;
	static volatile uint8_t x448 = 1U;
	volatile int64_t t110 = 1218612933417633989LL;

    t110 = (x445+((x446==x447)<=x448));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x449 = 2U;
	int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MAX;

    t111 = (x449+((x450==x451)<=x452));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	uint16_t x454 = 22091U;
	int8_t x455 = -1;
	uint8_t x456 = UINT8_MAX;
	int32_t t112 = -10035;

    t112 = (x453+((x454==x455)<=x456));

    if (t112 != 65536) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x458 = INT32_MAX;
	static int16_t x459 = -1;
	int32_t x460 = INT32_MIN;

    t113 = (x457+((x458==x459)<=x460));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x461 = -2007261261846118806LL;
	int16_t x462 = INT16_MIN;
	int64_t x463 = INT64_MIN;

    t114 = (x461+((x462==x463)<=x464));

    if (t114 != -2007261261846118805LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MIN;
	int32_t x466 = -1;
	static uint8_t x467 = UINT8_MAX;
	uint64_t x468 = UINT64_MAX;
	int32_t t115 = 240985;

    t115 = (x465+((x466==x467)<=x468));

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = INT64_MIN;
	int64_t x470 = 1966488709999LL;
	int64_t x471 = INT64_MAX;
	volatile int64_t t116 = INT64_MIN;

    t116 = (x469+((x470==x471)<=x472));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x473 = 91121505U;
	int64_t x475 = 63365682048302LL;
	int8_t x476 = -1;
	uint32_t t117 = 82U;

    t117 = (x473+((x474==x475)<=x476));

    if (t117 != 91121505U) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x477 = -1;
	int16_t x479 = INT16_MIN;
	static uint64_t x480 = UINT64_MAX;
	volatile int32_t t118 = -405;

    t118 = (x477+((x478==x479)<=x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x481 = -1;
	int32_t x482 = 337;
	int8_t x483 = -20;
	int32_t x484 = -1;

    t119 = (x481+((x482==x483)<=x484));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x485 = 210U;
	uint8_t x486 = UINT8_MAX;
	int64_t x488 = INT64_MIN;
	int32_t t120 = 0;

    t120 = (x485+((x486==x487)<=x488));

    if (t120 != 210) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x490 = 4099981;
	static volatile int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MIN;

    t121 = (x489+((x490==x491)<=x492));

    if (t121 != 1824729) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x493 = 2403102U;
	int16_t x494 = 2;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = -1;

    t122 = (x493+((x494==x495)<=x496));

    if (t122 != 2403102U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x497 = 432687831537970LL;
	int8_t x498 = -1;
	int64_t x500 = INT64_MAX;
	int64_t t123 = -6231247658545LL;

    t123 = (x497+((x498==x499)<=x500));

    if (t123 != 432687831537971LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x502 = UINT32_MAX;
	int64_t x503 = -1LL;
	uint8_t x504 = 75U;
	static volatile uint64_t t124 = 29666899LLU;

    t124 = (x501+((x502==x503)<=x504));

    if (t124 != 3843699219953640742LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x505 = 958015089U;
	int32_t x506 = INT32_MIN;
	int16_t x507 = INT16_MAX;
	int8_t x508 = INT8_MIN;

    t125 = (x505+((x506==x507)<=x508));

    if (t125 != 958015089U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x509 = INT64_MIN;
	static int16_t x510 = 1;
	uint8_t x511 = 25U;
	volatile int16_t x512 = INT16_MIN;
	static int64_t t126 = INT64_MIN;

    t126 = (x509+((x510==x511)<=x512));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x515 = 15930U;
	volatile int8_t x516 = INT8_MAX;
	int32_t t127 = -515013355;

    t127 = (x513+((x514==x515)<=x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x517 = UINT64_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 86U;
	uint64_t t128 = 408907604703870544LLU;

    t128 = (x517+((x518==x519)<=x520));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x521 = 1533071;
	static int16_t x522 = 1;
	int16_t x523 = -1;
	static volatile int32_t x524 = 15493;
	volatile int32_t t129 = 1790;

    t129 = (x521+((x522==x523)<=x524));

    if (t129 != 1533072) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x525 = 239503629532395LL;
	int32_t x527 = INT32_MAX;
	static int64_t x528 = INT64_MIN;

    t130 = (x525+((x526==x527)<=x528));

    if (t130 != 239503629532395LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x529 = -1;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	uint16_t x532 = UINT16_MAX;
	int32_t t131 = -850846;

    t131 = (x529+((x530==x531)<=x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x534 = INT32_MAX;
	int32_t x535 = INT32_MIN;

    t132 = (x533+((x534==x535)<=x536));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x537 = 200450835731LLU;
	volatile int64_t x538 = INT64_MIN;
	uint32_t x539 = UINT32_MAX;
	uint64_t t133 = 946775047046492LLU;

    t133 = (x537+((x538==x539)<=x540));

    if (t133 != 200450835732LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = -1984664867615LL;
	uint8_t x543 = UINT8_MAX;
	int32_t t134 = 119975627;

    t134 = (x541+((x542==x543)<=x544));

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x546 = INT16_MIN;
	static int32_t x547 = -10600;
	uint16_t x548 = 2U;
	volatile int32_t t135 = -8;

    t135 = (x545+((x546==x547)<=x548));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	volatile int8_t x554 = -51;
	int8_t x555 = INT8_MIN;
	static int16_t x556 = INT16_MAX;
	int32_t t136 = 183658651;

    t136 = (x553+((x554==x555)<=x556));

    if (t136 != 65536) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x557 = UINT32_MAX;
	static uint16_t x558 = 0U;
	int64_t x559 = INT64_MAX;
	uint32_t t137 = 16363480U;

    t137 = (x557+((x558==x559)<=x560));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x561 = 88831U;
	static int64_t x562 = INT64_MIN;
	volatile int64_t x563 = -1LL;
	volatile int32_t x564 = 20566;
	static uint32_t t138 = 153201065U;

    t138 = (x561+((x562==x563)<=x564));

    if (t138 != 88832U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = 580399527984552LL;
	static int16_t x566 = -14;

    t139 = (x565+((x566==x567)<=x568));

    if (t139 != 580399527984552LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x569 = 1743910833956LLU;
	int8_t x571 = -1;
	int32_t x572 = INT32_MAX;
	uint64_t t140 = 890422982375950224LLU;

    t140 = (x569+((x570==x571)<=x572));

    if (t140 != 1743910833957LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x573 = 10213LLU;
	int8_t x574 = -1;
	int16_t x575 = 666;
	volatile int16_t x576 = -1;

    t141 = (x573+((x574==x575)<=x576));

    if (t141 != 10213LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x577 = INT16_MIN;
	static int16_t x579 = -1;
	static int8_t x580 = INT8_MIN;
	int32_t t142 = 2;

    t142 = (x577+((x578==x579)<=x580));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x581 = UINT16_MAX;
	static uint32_t x582 = 1U;
	int16_t x583 = -13;
	int16_t x584 = -1;
	static volatile int32_t t143 = 771;

    t143 = (x581+((x582==x583)<=x584));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x585 = 15;
	uint16_t x586 = 1779U;
	int64_t x587 = 3LL;
	int64_t x588 = INT64_MIN;
	int32_t t144 = 1;

    t144 = (x585+((x586==x587)<=x588));

    if (t144 != 15) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x589 = INT8_MAX;
	volatile uint8_t x590 = UINT8_MAX;
	volatile int64_t x591 = INT64_MAX;
	int32_t t145 = 429;

    t145 = (x589+((x590==x591)<=x592));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MIN;
	static int16_t x594 = -1;
	volatile uint8_t x596 = 75U;
	volatile int32_t t146 = -27819840;

    t146 = (x593+((x594==x595)<=x596));

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x597 = INT16_MIN;
	static uint32_t x598 = 134U;
	int32_t x599 = INT32_MIN;
	static volatile uint8_t x600 = UINT8_MAX;
	volatile int32_t t147 = -1;

    t147 = (x597+((x598==x599)<=x600));

    if (t147 != -32767) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x601 = -1;
	uint8_t x602 = 84U;
	static volatile int16_t x603 = INT16_MAX;
	static int16_t x604 = -1;
	volatile int32_t t148 = 251460;

    t148 = (x601+((x602==x603)<=x604));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x605 = UINT64_MAX;
	uint16_t x607 = 7U;
	uint8_t x608 = 98U;
	uint64_t t149 = 951931LLU;

    t149 = (x605+((x606==x607)<=x608));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x610 = -1;
	static volatile int8_t x611 = INT8_MIN;

    t150 = (x609+((x610==x611)<=x612));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x614 = -1;
	uint32_t x615 = UINT32_MAX;
	uint32_t x616 = 155U;
	static uint32_t t151 = 466996U;

    t151 = (x613+((x614==x615)<=x616));

    if (t151 != 175250U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x617 = INT16_MIN;
	volatile uint32_t x618 = 79527U;
	uint64_t x619 = UINT64_MAX;

    t152 = (x617+((x618==x619)<=x620));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x622 = INT8_MIN;
	static int32_t x623 = INT32_MIN;
	int8_t x624 = INT8_MIN;
	int32_t t153 = 0;

    t153 = (x621+((x622==x623)<=x624));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x625 = -1;
	static uint64_t x626 = UINT64_MAX;
	uint64_t x627 = UINT64_MAX;
	uint32_t x628 = UINT32_MAX;
	static volatile int32_t t154 = 343;

    t154 = (x625+((x626==x627)<=x628));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = -1783LL;
	int32_t x630 = INT32_MIN;
	volatile int64_t x631 = -24827165318LL;
	static int64_t x632 = INT64_MIN;
	static int64_t t155 = 4242707867729321671LL;

    t155 = (x629+((x630==x631)<=x632));

    if (t155 != -1783LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x633 = INT32_MIN;
	uint32_t x634 = 69652128U;
	uint16_t x635 = 771U;
	int32_t t156 = 166074385;

    t156 = (x633+((x634==x635)<=x636));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x637 = UINT64_MAX;
	int32_t x638 = -82;
	static uint32_t x639 = UINT32_MAX;
	static int32_t x640 = INT32_MAX;
	static volatile uint64_t t157 = 6500942LLU;

    t157 = (x637+((x638==x639)<=x640));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x641 = -1LL;
	static int8_t x642 = INT8_MIN;
	int16_t x643 = -1;
	volatile int64_t x644 = 98919LL;
	volatile int64_t t158 = 358913LL;

    t158 = (x641+((x642==x643)<=x644));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x645 = UINT32_MAX;
	int64_t x646 = INT64_MIN;
	static int32_t x647 = INT32_MIN;
	static uint32_t t159 = UINT32_MAX;

    t159 = (x645+((x646==x647)<=x648));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x649 = 60930U;
	uint32_t x650 = UINT32_MAX;
	static int64_t x651 = -1LL;
	volatile int32_t x652 = -1;

    t160 = (x649+((x650==x651)<=x652));

    if (t160 != 60930U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint64_t x654 = 594LLU;
	uint64_t x656 = 2536896497553439968LLU;

    t161 = (x653+((x654==x655)<=x656));

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x658 = -15768;
	volatile int8_t x659 = INT8_MAX;
	uint64_t t162 = 1676LLU;

    t162 = (x657+((x658==x659)<=x660));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x661 = UINT32_MAX;
	int16_t x662 = INT16_MIN;
	int8_t x664 = INT8_MIN;

    t163 = (x661+((x662==x663)<=x664));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = INT8_MIN;
	volatile uint64_t x666 = 1400794466912106LLU;
	uint8_t x667 = 28U;
	static uint32_t x668 = UINT32_MAX;
	int32_t t164 = -996602;

    t164 = (x665+((x666==x667)<=x668));

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x669 = 2605234U;
	volatile int32_t x670 = INT32_MAX;
	int64_t x671 = 30416387584053308LL;
	int16_t x672 = INT16_MAX;
	static volatile uint32_t t165 = 518644U;

    t165 = (x669+((x670==x671)<=x672));

    if (t165 != 2605235U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x673 = 27U;
	volatile uint8_t x674 = 62U;
	int8_t x675 = 57;
	int8_t x676 = -1;

    t166 = (x673+((x674==x675)<=x676));

    if (t166 != 27) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x677 = INT8_MIN;
	uint32_t x678 = 112365013U;
	int8_t x679 = -1;
	volatile int64_t x680 = INT64_MIN;

    t167 = (x677+((x678==x679)<=x680));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x681 = 116676LLU;
	int8_t x682 = INT8_MIN;
	volatile int8_t x683 = INT8_MIN;
	int64_t x684 = -14LL;
	uint64_t t168 = 11675502014972888LLU;

    t168 = (x681+((x682==x683)<=x684));

    if (t168 != 116676LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x685 = -1;
	int16_t x686 = 2950;
	volatile uint32_t x687 = 118U;
	volatile uint64_t x688 = UINT64_MAX;
	int32_t t169 = -220880;

    t169 = (x685+((x686==x687)<=x688));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x690 = 2U;
	volatile int32_t t170 = -14203;

    t170 = (x689+((x690==x691)<=x692));

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x693 = UINT8_MAX;
	int32_t x694 = INT32_MAX;
	uint32_t x695 = UINT32_MAX;
	volatile uint16_t x696 = 93U;
	static int32_t t171 = 39;

    t171 = (x693+((x694==x695)<=x696));

    if (t171 != 256) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x697 = -1LL;
	volatile uint64_t x699 = 9216860765259440334LLU;
	int64_t x700 = -1LL;

    t172 = (x697+((x698==x699)<=x700));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x701 = 1U;
	int16_t x702 = 16;
	int8_t x703 = INT8_MIN;
	static int32_t t173 = 30268;

    t173 = (x701+((x702==x703)<=x704));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x705 = 1U;
	int32_t x707 = INT32_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t174 = -24798026;

    t174 = (x705+((x706==x707)<=x708));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x710 = 84U;
	volatile uint64_t x711 = UINT64_MAX;
	uint64_t x712 = 7748883843LLU;
	volatile int32_t t175 = -304;

    t175 = (x709+((x710==x711)<=x712));

    if (t175 != 65536) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x713 = UINT8_MAX;
	static uint16_t x715 = UINT16_MAX;
	int16_t x716 = INT16_MIN;
	static int32_t t176 = 169862;

    t176 = (x713+((x714==x715)<=x716));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint16_t x719 = 735U;
	uint32_t x720 = UINT32_MAX;
	uint32_t t177 = 610U;

    t177 = (x717+((x718==x719)<=x720));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x721 = -3;
	volatile int64_t x722 = -40258668350028741LL;
	int32_t x723 = INT32_MIN;
	volatile int8_t x724 = -58;

    t178 = (x721+((x722==x723)<=x724));

    if (t178 != -3) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MIN;
	static uint16_t x728 = 2681U;
	int64_t t179 = 456299665011333LL;

    t179 = (x725+((x726==x727)<=x728));

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x729 = 3651915LLU;
	uint8_t x730 = 10U;
	int64_t x732 = INT64_MIN;

    t180 = (x729+((x730==x731)<=x732));

    if (t180 != 3651915LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x736 = 45925409596LLU;
	static int32_t t181 = 2;

    t181 = (x733+((x734==x735)<=x736));

    if (t181 != -37) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x737 = 14881;
	int8_t x738 = INT8_MAX;
	volatile uint16_t x739 = UINT16_MAX;
	volatile uint16_t x740 = 76U;
	int32_t t182 = -432890986;

    t182 = (x737+((x738==x739)<=x740));

    if (t182 != 14882) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x741 = -26160887243268093LL;
	volatile int8_t x742 = 5;
	int8_t x743 = INT8_MAX;

    t183 = (x741+((x742==x743)<=x744));

    if (t183 != -26160887243268093LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x745 = 30LLU;
	uint8_t x746 = UINT8_MAX;
	volatile uint16_t x747 = 76U;
	volatile uint8_t x748 = 76U;

    t184 = (x745+((x746==x747)<=x748));

    if (t184 != 31LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x750 = INT16_MIN;
	int16_t x752 = -1;
	volatile int32_t t185 = -392602455;

    t185 = (x749+((x750==x751)<=x752));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x753 = 409U;
	uint16_t x755 = 264U;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t186 = 497087;

    t186 = (x753+((x754==x755)<=x756));

    if (t186 != 410) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x758 = INT8_MIN;
	uint64_t x759 = UINT64_MAX;
	volatile int8_t x760 = 5;
	int32_t t187 = 1408646;

    t187 = (x757+((x758==x759)<=x760));

    if (t187 != -3826372) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x761 = -1LL;
	int64_t x763 = -2909LL;
	volatile uint8_t x764 = 17U;
	volatile int64_t t188 = 483760068838573373LL;

    t188 = (x761+((x762==x763)<=x764));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x765 = -1038598;
	static volatile int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = INT16_MIN;
	volatile int32_t t189 = -1911436;

    t189 = (x765+((x766==x767)<=x768));

    if (t189 != -1038598) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x769 = INT16_MAX;
	static int16_t x771 = -3;
	volatile int16_t x772 = 160;
	static int32_t t190 = 154618196;

    t190 = (x769+((x770==x771)<=x772));

    if (t190 != 32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x773 = -1LL;
	static int16_t x775 = 3;

    t191 = (x773+((x774==x775)<=x776));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x778 = UINT16_MAX;
	volatile int8_t x779 = INT8_MIN;
	volatile int8_t x780 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (x777+((x778==x779)<=x780));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x781 = 89U;
	int8_t x782 = -3;
	uint8_t x783 = UINT8_MAX;
	uint8_t x784 = UINT8_MAX;
	static int32_t t193 = 165;

    t193 = (x781+((x782==x783)<=x784));

    if (t193 != 90) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x785 = -1;
	int16_t x786 = -1;
	int32_t x787 = INT32_MAX;
	static int16_t x788 = INT16_MAX;
	volatile int32_t t194 = 1070219;

    t194 = (x785+((x786==x787)<=x788));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x789 = UINT64_MAX;
	volatile int8_t x792 = INT8_MIN;
	uint64_t t195 = UINT64_MAX;

    t195 = (x789+((x790==x791)<=x792));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x793 = 39U;
	int8_t x794 = 27;
	int8_t x796 = INT8_MIN;
	int32_t t196 = -1440;

    t196 = (x793+((x794==x795)<=x796));

    if (t196 != 39) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x797 = UINT32_MAX;
	int64_t x800 = 109457LL;
	volatile uint32_t t197 = 21U;

    t197 = (x797+((x798==x799)<=x800));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x801 = UINT16_MAX;
	uint16_t x802 = 0U;
	uint8_t x803 = 3U;
	volatile int32_t t198 = -675074;

    t198 = (x801+((x802==x803)<=x804));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x805 = -1;
	int16_t x808 = INT16_MIN;
	static int32_t t199 = -3;

    t199 = (x805+((x806==x807)<=x808));

    if (t199 != -1) { NG(); } else { ; }
	
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

