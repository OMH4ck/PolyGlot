
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

int32_t x2 = INT32_MIN;
volatile uint8_t x5 = UINT8_MAX;
uint32_t x6 = 41U;
uint8_t x7 = 5U;
static uint32_t x12 = 61689339U;
int8_t x16 = 3;
int16_t x28 = 50;
static volatile uint16_t x34 = 1U;
int32_t x39 = INT32_MAX;
static int64_t x43 = -1LL;
static volatile int64_t x55 = -5121689056189LL;
static int32_t t13 = -803204;
uint16_t x60 = 370U;
static int32_t x62 = -2323;
volatile int32_t t15 = -195271;
int32_t t18 = -3432331;
static int16_t x87 = INT16_MIN;
int32_t t20 = 4;
int32_t t21 = -697;
volatile int16_t x97 = INT16_MIN;
uint64_t x99 = 2460108246832701LLU;
uint16_t x103 = UINT16_MAX;
int8_t x104 = -24;
volatile int16_t x128 = INT16_MIN;
volatile uint64_t x129 = 24173LLU;
int32_t x130 = -144223438;
int64_t x131 = INT64_MIN;
int16_t x135 = -1;
int16_t x136 = INT16_MIN;
volatile int32_t t34 = -24019662;
volatile int32_t t35 = 29674961;
static int64_t x153 = INT64_MIN;
static volatile int32_t t39 = 1842;
uint32_t x168 = UINT32_MAX;
int8_t x171 = INT8_MIN;
int32_t x174 = INT32_MIN;
static int8_t x179 = -1;
static int64_t x180 = -1328113LL;
volatile uint32_t x182 = 3259092U;
int16_t x184 = -3657;
int16_t x185 = -1;
volatile int64_t x187 = -3939967632LL;
int8_t x190 = INT8_MIN;
uint64_t x194 = 13153LLU;
uint64_t x197 = 1LLU;
int32_t x207 = -6011;
volatile int32_t t50 = -63126;
int32_t x211 = -15;
static int64_t x216 = INT64_MIN;
static int64_t x217 = INT64_MAX;
volatile int64_t x221 = INT64_MIN;
uint16_t x223 = 5234U;
static int64_t x228 = -1LL;
int32_t t55 = -34606507;
int16_t x232 = INT16_MIN;
uint16_t x236 = UINT16_MAX;
uint32_t x239 = 2648075U;
static volatile int64_t x245 = INT64_MIN;
int32_t x253 = INT32_MAX;
uint64_t x258 = 219779LLU;
static int8_t x262 = INT8_MIN;
int32_t x263 = INT32_MAX;
volatile int8_t x264 = INT8_MIN;
volatile int16_t x271 = INT16_MAX;
volatile int32_t t66 = -42398917;
int8_t x275 = 1;
int64_t x279 = 69622638182276LL;
int8_t x283 = -22;
volatile int64_t x284 = INT64_MIN;
int16_t x288 = -1653;
int32_t x296 = -1038090;
int32_t t72 = -46;
uint8_t x297 = 3U;
int16_t x302 = -1;
int16_t x304 = -1;
int32_t x305 = INT32_MAX;
uint8_t x307 = 2U;
int16_t x316 = -12219;
static uint16_t x322 = 48U;
static int16_t x327 = INT16_MIN;
int32_t x344 = INT32_MIN;
static volatile int32_t t85 = 19;
int16_t x349 = -82;
static volatile int64_t x354 = -1LL;
volatile uint64_t x356 = 1675669163378LLU;
volatile int32_t t87 = -37668;
uint64_t x359 = UINT64_MAX;
static int16_t x371 = INT16_MIN;
static volatile int32_t t90 = -766282;
static uint8_t x379 = UINT8_MAX;
volatile int64_t x380 = -1LL;
int32_t x386 = -4757;
static uint8_t x387 = 9U;
static volatile int64_t x391 = INT64_MIN;
uint8_t x394 = UINT8_MAX;
volatile uint8_t x397 = UINT8_MAX;
static int64_t x402 = INT64_MAX;
static volatile int64_t x407 = -1LL;
static volatile int32_t t99 = 3607;
int16_t x410 = 1707;
static int32_t t100 = 458989;
int8_t x417 = INT8_MIN;
uint64_t x418 = 45497LLU;
static int8_t x420 = INT8_MIN;
volatile int64_t x426 = INT64_MIN;
int64_t x428 = INT64_MIN;
int16_t x431 = INT16_MAX;
int32_t x435 = INT32_MAX;
uint16_t x442 = 47U;
int64_t x443 = -1LL;
volatile uint16_t x446 = 116U;
static uint16_t x448 = UINT16_MAX;
int16_t x449 = INT16_MIN;
volatile int32_t t109 = -830562471;
static int64_t x461 = -1LL;
static int16_t x462 = 11850;
int32_t t111 = 92;
volatile int32_t t112 = 103159;
int8_t x469 = -19;
int8_t x472 = INT8_MIN;
int8_t x473 = INT8_MIN;
uint32_t x475 = 287U;
uint16_t x477 = UINT16_MAX;
volatile uint64_t x482 = UINT64_MAX;
int32_t t116 = 13544614;
int32_t x488 = 5967504;
static uint64_t x497 = 370401279293LLU;
int64_t x500 = -37053030389439LL;
static int16_t x504 = INT16_MIN;
static volatile uint8_t x511 = UINT8_MAX;
static volatile int32_t t127 = 11;
int16_t x532 = INT16_MIN;
int32_t x540 = INT32_MIN;
int16_t x541 = 5029;
uint16_t x552 = 6U;
int16_t x553 = INT16_MIN;
uint64_t x563 = UINT64_MAX;
volatile int16_t x564 = -511;
uint32_t x568 = UINT32_MAX;
int32_t t137 = -3404;
uint32_t x573 = UINT32_MAX;
static volatile int32_t t141 = 5520;
static uint32_t x585 = 17292002U;
volatile uint32_t x586 = 1469480U;
uint64_t x587 = 1281013048766LLU;
int16_t x588 = 752;
int8_t x600 = INT8_MIN;
int64_t x604 = INT64_MAX;
volatile uint8_t x605 = 12U;
int32_t x609 = INT32_MIN;
int16_t x615 = 13856;
int8_t x616 = INT8_MIN;
uint32_t x618 = 119827431U;
uint64_t x621 = 853650804846637318LLU;
int64_t x627 = INT64_MIN;
static uint64_t x632 = 45LLU;
volatile int32_t t153 = 2065769;
static int8_t x633 = INT8_MIN;
uint16_t x638 = 8U;
volatile int8_t x639 = -1;
int8_t x640 = INT8_MIN;
static uint8_t x647 = 3U;
static int64_t x650 = INT64_MAX;
uint16_t x658 = 8000U;
int16_t x661 = INT16_MIN;
volatile int32_t t162 = 15573;
int32_t x669 = 70894286;
int8_t x673 = INT8_MIN;
int16_t x677 = -1;
static int8_t x680 = 45;
static volatile int32_t t166 = 6803553;
volatile int32_t t167 = 779204;
volatile int32_t t168 = 3229;
int32_t t170 = 45;
int32_t x701 = 56717;
uint8_t x710 = UINT8_MAX;
int64_t x719 = -473460039029115146LL;
int32_t t174 = -173887358;
int32_t t175 = 6;
volatile int32_t t177 = 502999720;
int32_t x735 = INT32_MAX;
volatile int32_t t178 = -88648;
int8_t x747 = INT8_MIN;
int16_t x752 = INT16_MAX;
int16_t x754 = INT16_MIN;
uint8_t x759 = 4U;
int32_t t184 = -136162;
int32_t t185 = -1;
static int32_t t187 = 659965;
volatile int64_t x773 = 747082692213297978LL;
volatile int32_t t188 = -49116837;
static volatile int64_t x777 = -798LL;
volatile int32_t t190 = -725143570;
int32_t x793 = 31614;
static volatile int64_t x796 = 56LL;
int32_t t193 = 11966787;
uint8_t x798 = UINT8_MAX;
int8_t x800 = 57;
int64_t x804 = INT64_MIN;
volatile int64_t x805 = INT64_MIN;
volatile int32_t t196 = -98305763;
volatile int8_t x809 = -1;
int32_t x812 = 152;
int64_t x818 = -1LL;
volatile int32_t t199 = 254;


void f0(void) {
    	int16_t x1 = -1;
	uint32_t x3 = 49U;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 13435;

    t0 = (x1>((x2>x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x8 = -1LL;
	int32_t t1 = 1813832;

    t1 = (x5>((x6>x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int64_t x10 = -2506LL;
	int32_t x11 = -35;
	int32_t t2 = -187328097;

    t2 = (x9>((x10>x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x13 = 4923U;
	int8_t x14 = -1;
	static int16_t x15 = INT16_MIN;
	int32_t t3 = 13162544;

    t3 = (x13>((x14>x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	int16_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	int16_t x20 = 5;
	static int32_t t4 = 73173;

    t4 = (x17>((x18>x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 9390365U;
	uint8_t x22 = 12U;
	int8_t x23 = -1;
	uint32_t x24 = 672U;
	static int32_t t5 = 203305007;

    t5 = (x21>((x22>x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1546;
	int64_t x26 = -1LL;
	volatile uint16_t x27 = 0U;
	int32_t t6 = -14091;

    t6 = (x25>((x26>x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 934969LLU;
	int8_t x30 = 0;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -445188;

    t7 = (x29>((x30>x31)+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 0U;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 3194503U;
	volatile int32_t t8 = -7243;

    t8 = (x33>((x34>x35)+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile uint64_t x38 = 1108160072929155089LLU;
	int16_t x40 = 0;
	int32_t t9 = 1280;

    t9 = (x37>((x38>x39)+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 34;
	uint64_t x42 = UINT64_MAX;
	static int8_t x44 = -1;
	static volatile int32_t t10 = 245108952;

    t10 = (x41>((x42>x43)+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 1372U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 22;

    t11 = (x45>((x46>x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	volatile int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -1924;

    t12 = (x49>((x50>x51)+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int32_t x54 = -18;
	uint32_t x56 = UINT32_MAX;

    t13 = (x53>((x54>x55)+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 117U;
	int16_t x58 = 11517;
	volatile uint32_t x59 = 759434507U;
	int32_t t14 = -6189;

    t14 = (x57>((x58>x59)+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 48LLU;
	int8_t x63 = INT8_MIN;
	static int8_t x64 = -1;

    t15 = (x61>((x62>x63)+x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x70 = -48863;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t16 = -757860019;

    t16 = (x69>((x70>x71)+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	volatile int8_t x75 = -1;
	volatile uint8_t x76 = 3U;
	static volatile int32_t t17 = -270;

    t17 = (x73>((x74>x75)+x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	static uint16_t x80 = UINT16_MAX;

    t18 = (x77>((x78>x79)+x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 38U;
	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	uint64_t x84 = 1817LLU;
	static volatile int32_t t19 = 31823940;

    t19 = (x81>((x82>x83)+x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	uint16_t x86 = 41U;
	volatile uint16_t x88 = 6160U;

    t20 = (x85>((x86>x87)+x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x89 = INT32_MIN;
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	static volatile int64_t x92 = INT64_MAX;

    t21 = (x89>((x90>x91)+x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -318;
	uint16_t x94 = 25546U;
	int32_t x95 = INT32_MAX;
	uint32_t x96 = 1U;
	int32_t t22 = 15928;

    t22 = (x93>((x94>x95)+x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x98 = 0;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t23 = -195;

    t23 = (x97>((x98>x99)+x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	static uint64_t x102 = UINT64_MAX;
	volatile int32_t t24 = -6380;

    t24 = (x101>((x102>x103)+x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1;
	int8_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int32_t x108 = -46356;
	static int32_t t25 = -15314;

    t25 = (x105>((x106>x107)+x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x109 = INT64_MIN;
	volatile uint64_t x110 = 232181102143894090LLU;
	uint32_t x111 = 11281U;
	uint64_t x112 = 28293LLU;
	int32_t t26 = -977;

    t26 = (x109>((x110>x111)+x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = 19;
	static uint32_t x115 = 184462950U;
	uint16_t x116 = 24152U;
	volatile int32_t t27 = 0;

    t27 = (x113>((x114>x115)+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x117 = 58U;
	int32_t x118 = INT32_MAX;
	int8_t x119 = INT8_MAX;
	uint16_t x120 = 11514U;
	static volatile int32_t t28 = -1206297;

    t28 = (x117>((x118>x119)+x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 26U;
	int32_t t29 = 1;

    t29 = (x121>((x122>x123)+x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	volatile int16_t x127 = INT16_MAX;
	static volatile int32_t t30 = 6280624;

    t30 = (x125>((x126>x127)+x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x132 = 3U;
	static int32_t t31 = -2;

    t31 = (x129>((x130>x131)+x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = 6;
	int8_t x134 = 0;
	volatile int32_t t32 = -31430220;

    t32 = (x133>((x134>x135)+x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 105U;
	int8_t x138 = 7;
	int16_t x139 = -975;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t33 = 522076;

    t33 = (x137>((x138>x139)+x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = 135U;
	static uint16_t x142 = 56U;
	int8_t x143 = INT8_MAX;
	int8_t x144 = 1;

    t34 = (x141>((x142>x143)+x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile uint64_t x146 = 83973227070LLU;
	volatile uint16_t x147 = 2U;
	int64_t x148 = 514923560LL;

    t35 = (x145>((x146>x147)+x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	static int16_t x152 = 1;
	int32_t t36 = 350865;

    t36 = (x149>((x150>x151)+x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MAX;
	volatile int8_t x156 = 0;
	int32_t t37 = 1060035;

    t37 = (x153>((x154>x155)+x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	static uint32_t x158 = 2279308U;
	static volatile uint8_t x159 = 107U;
	static uint64_t x160 = UINT64_MAX;
	volatile int32_t t38 = 80903;

    t38 = (x157>((x158>x159)+x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = 83209;
	volatile uint16_t x162 = 1434U;
	int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;

    t39 = (x161>((x162>x163)+x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 4U;
	uint8_t x166 = 1U;
	int16_t x167 = INT16_MIN;
	int32_t t40 = 24579216;

    t40 = (x165>((x166>x167)+x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	uint32_t x172 = 730780U;
	int32_t t41 = 21143900;

    t41 = (x169>((x170>x171)+x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = -4656;
	int16_t x175 = 10782;
	int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 3397526;

    t42 = (x173>((x174>x175)+x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int32_t t43 = -6;

    t43 = (x177>((x178>x179)+x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = -1;
	uint64_t x183 = UINT64_MAX;
	int32_t t44 = 306556911;

    t44 = (x181>((x182>x183)+x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x186 = -2089654337404560LL;
	static uint8_t x188 = UINT8_MAX;
	volatile int32_t t45 = -317992;

    t45 = (x185>((x186>x187)+x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x189 = 2219573989063069LLU;
	volatile uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t46 = 5;

    t46 = (x189>((x190>x191)+x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x193 = 457961;
	uint64_t x195 = 2LLU;
	uint16_t x196 = UINT16_MAX;
	int32_t t47 = 991315169;

    t47 = (x193>((x194>x195)+x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x198 = INT16_MAX;
	static int8_t x199 = INT8_MAX;
	uint8_t x200 = 0U;
	int32_t t48 = 14387;

    t48 = (x197>((x198>x199)+x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = -1LL;
	static uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 459790053858LLU;
	uint8_t x204 = UINT8_MAX;
	int32_t t49 = -20699;

    t49 = (x201>((x202>x203)+x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = 25LL;
	int16_t x206 = INT16_MIN;
	int32_t x208 = INT32_MAX;

    t50 = (x205>((x206>x207)+x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = -1;
	uint64_t x210 = 2250273778487LLU;
	int16_t x212 = INT16_MAX;
	int32_t t51 = -196602101;

    t51 = (x209>((x210>x211)+x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = 2001LL;
	int16_t x214 = 0;
	static int32_t x215 = INT32_MIN;
	volatile int32_t t52 = 204238390;

    t52 = (x213>((x214>x215)+x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x218 = UINT16_MAX;
	int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;
	int32_t t53 = -28825;

    t53 = (x217>((x218>x219)+x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x222 = -16;
	uint32_t x224 = 2250779U;
	volatile int32_t t54 = -677587;

    t54 = (x221>((x222>x223)+x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 376U;

    t55 = (x225>((x226>x227)+x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 543275U;
	static int64_t x230 = INT64_MAX;
	int32_t x231 = -1;
	volatile int32_t t56 = -523;

    t56 = (x229>((x230>x231)+x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x233 = INT64_MIN;
	uint16_t x234 = 0U;
	int32_t x235 = INT32_MIN;
	static volatile int32_t t57 = 17;

    t57 = (x233>((x234>x235)+x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	int32_t x240 = -111420073;
	volatile int32_t t58 = 568;

    t58 = (x237>((x238>x239)+x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x241 = -14158092087LL;
	int8_t x242 = INT8_MIN;
	volatile uint8_t x243 = 11U;
	int16_t x244 = -2774;
	int32_t t59 = -24948;

    t59 = (x241>((x242>x243)+x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x246 = 516;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = 5;
	int32_t t60 = 1;

    t60 = (x245>((x246>x247)+x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	static int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -19107LL;
	volatile int32_t t61 = -8991;

    t61 = (x249>((x250>x251)+x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x254 = 2U;
	int32_t x255 = -48;
	int32_t x256 = INT32_MAX;
	int32_t t62 = 8027;

    t62 = (x253>((x254>x255)+x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = -1;
	uint64_t x259 = 0LLU;
	int32_t x260 = INT32_MIN;
	int32_t t63 = -861742;

    t63 = (x257>((x258>x259)+x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x261 = -1;
	int32_t t64 = -434437;

    t64 = (x261>((x262>x263)+x264));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 2543U;
	volatile uint64_t x266 = UINT64_MAX;
	static uint64_t x267 = 32189652826422296LLU;
	int64_t x268 = -54797650913681633LL;
	static int32_t t65 = 17;

    t65 = (x265>((x266>x267)+x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = 333101U;
	int32_t x270 = INT32_MAX;
	volatile int16_t x272 = INT16_MIN;

    t66 = (x269>((x270>x271)+x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x273 = 0;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int64_t x276 = INT64_MIN;
	static volatile int32_t t67 = -499784879;

    t67 = (x273>((x274>x275)+x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x277 = UINT16_MAX;
	static uint64_t x278 = 1509LLU;
	uint64_t x280 = UINT64_MAX;
	int32_t t68 = 0;

    t68 = (x277>((x278>x279)+x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x281 = INT16_MAX;
	uint8_t x282 = 119U;
	volatile int32_t t69 = -13411;

    t69 = (x281>((x282>x283)+x284));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x285 = -1;
	int64_t x286 = 81183414793929LL;
	int16_t x287 = INT16_MIN;
	static int32_t t70 = -208;

    t70 = (x285>((x286>x287)+x288));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x289 = UINT32_MAX;
	int32_t x290 = 3263;
	static volatile int8_t x291 = INT8_MAX;
	int16_t x292 = -1;
	volatile int32_t t71 = 1862;

    t71 = (x289>((x290>x291)+x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x293 = 18579U;
	static int8_t x294 = INT8_MIN;
	uint16_t x295 = 14U;

    t72 = (x293>((x294>x295)+x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x298 = 0;
	volatile uint32_t x299 = UINT32_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t73 = 4932005;

    t73 = (x297>((x298>x299)+x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = -1146;
	int16_t x303 = INT16_MIN;
	volatile int32_t t74 = 6638;

    t74 = (x301>((x302>x303)+x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x306 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t75 = 40707;

    t75 = (x305>((x306>x307)+x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 0U;
	volatile int32_t x310 = INT32_MIN;
	volatile int64_t x311 = 4025975365LL;
	static int16_t x312 = 7780;
	int32_t t76 = -274299866;

    t76 = (x309>((x310>x311)+x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x313 = 0;
	static int16_t x314 = -182;
	int64_t x315 = INT64_MIN;
	static volatile int32_t t77 = -1;

    t77 = (x313>((x314>x315)+x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = 11U;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = -7;
	volatile int8_t x320 = INT8_MIN;
	int32_t t78 = -169904663;

    t78 = (x317>((x318>x319)+x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x321 = 435380U;
	volatile int8_t x323 = 21;
	int32_t x324 = -74;
	volatile int32_t t79 = -1;

    t79 = (x321>((x322>x323)+x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -1;
	static int32_t x326 = 21557884;
	int16_t x328 = -4;
	volatile int32_t t80 = 195084;

    t80 = (x325>((x326>x327)+x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x330 = -153878LL;
	int16_t x331 = -1;
	static int32_t x332 = 7629892;
	static int32_t t81 = 509872491;

    t81 = (x329>((x330>x331)+x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = -1;
	volatile int16_t x334 = INT16_MAX;
	int32_t x335 = 15330;
	int64_t x336 = -1LL;
	static int32_t t82 = -532;

    t82 = (x333>((x334>x335)+x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 5460U;
	volatile int64_t x340 = INT64_MIN;
	int32_t t83 = -1;

    t83 = (x337>((x338>x339)+x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = INT32_MAX;
	static volatile int64_t x342 = -28293LL;
	uint8_t x343 = 8U;
	static volatile int32_t t84 = 235167629;

    t84 = (x341>((x342>x343)+x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x346 = -353099925;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;

    t85 = (x345>((x346>x347)+x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x350 = 4357919695982556LL;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	volatile int32_t t86 = -444126;

    t86 = (x349>((x350>x351)+x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x353 = -4;
	uint16_t x355 = UINT16_MAX;

    t87 = (x353>((x354>x355)+x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	static int64_t x358 = INT64_MIN;
	int8_t x360 = 0;
	int32_t t88 = 8331097;

    t88 = (x357>((x358>x359)+x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = -1;
	int64_t x368 = INT64_MAX;
	int32_t t89 = -3079285;

    t89 = (x365>((x366>x367)+x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x369 = 1U;
	volatile int64_t x370 = INT64_MAX;
	uint8_t x372 = 1U;

    t90 = (x369>((x370>x371)+x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = INT64_MIN;
	uint64_t x374 = 10997LLU;
	int64_t x375 = -154933513632376LL;
	int16_t x376 = INT16_MIN;
	int32_t t91 = -1848;

    t91 = (x373>((x374>x375)+x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x377 = UINT64_MAX;
	uint8_t x378 = UINT8_MAX;
	static int32_t t92 = 7930;

    t92 = (x377>((x378>x379)+x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = -355;
	static volatile int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = 2765469951LLU;
	volatile uint64_t x384 = 501596210116741LLU;
	int32_t t93 = 2945;

    t93 = (x381>((x382>x383)+x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x385 = 25067268;
	volatile int8_t x388 = 1;
	volatile int32_t t94 = -331373;

    t94 = (x385>((x386>x387)+x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = -1;
	static int64_t x390 = INT64_MIN;
	int64_t x392 = INT64_MAX;
	volatile int32_t t95 = -30;

    t95 = (x389>((x390>x391)+x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = 0;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = 1654;
	int32_t t96 = 7671304;

    t96 = (x393>((x394>x395)+x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x398 = -1;
	int16_t x399 = 5663;
	volatile int64_t x400 = -1LL;
	int32_t t97 = 1924;

    t97 = (x397>((x398>x399)+x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = INT8_MAX;
	static int64_t x403 = INT64_MIN;
	uint64_t x404 = 25403347272968LLU;
	volatile int32_t t98 = 1;

    t98 = (x401>((x402>x403)+x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	static int64_t x408 = -4371448231220342056LL;

    t99 = (x405>((x406>x407)+x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x409 = INT8_MAX;
	volatile int8_t x411 = INT8_MIN;
	int32_t x412 = 50119822;

    t100 = (x409>((x410>x411)+x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	static int32_t x415 = -1;
	uint16_t x416 = 663U;
	volatile int32_t t101 = -34;

    t101 = (x413>((x414>x415)+x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x419 = INT64_MAX;
	int32_t t102 = 1270;

    t102 = (x417>((x418>x419)+x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = INT64_MAX;
	uint8_t x427 = 0U;
	volatile int32_t t103 = 0;

    t103 = (x425>((x426>x427)+x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = 688169LLU;
	static volatile int64_t x430 = INT64_MIN;
	uint32_t x432 = 53U;
	static int32_t t104 = 0;

    t104 = (x429>((x430>x431)+x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = 25414U;
	volatile uint8_t x434 = 4U;
	int16_t x436 = INT16_MIN;
	int32_t t105 = 1;

    t105 = (x433>((x434>x435)+x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x437 = INT8_MAX;
	static uint64_t x438 = 31205034409087LLU;
	static uint64_t x439 = UINT64_MAX;
	volatile int64_t x440 = 36320LL;
	static int32_t t106 = 381300;

    t106 = (x437>((x438>x439)+x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x441 = 0;
	uint64_t x444 = 8399321003LLU;
	static volatile int32_t t107 = 932990;

    t107 = (x441>((x442>x443)+x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	static int8_t x447 = -1;
	int32_t t108 = 1;

    t108 = (x445>((x446>x447)+x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x450 = 759;
	static int32_t x451 = INT32_MAX;
	int64_t x452 = INT64_MIN;

    t109 = (x449>((x450>x451)+x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = -1;
	int32_t x458 = INT32_MIN;
	int32_t x459 = -26;
	int8_t x460 = -52;
	volatile int32_t t110 = 1;

    t110 = (x457>((x458>x459)+x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x463 = 10030594251383883LLU;
	int8_t x464 = -16;

    t111 = (x461>((x462>x463)+x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x465 = UINT16_MAX;
	static uint16_t x466 = 60U;
	volatile int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;

    t112 = (x465>((x466>x467)+x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x470 = INT16_MAX;
	int8_t x471 = -6;
	static int32_t t113 = -15697908;

    t113 = (x469>((x470>x471)+x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x474 = 3258649254223LLU;
	int16_t x476 = INT16_MAX;
	volatile int32_t t114 = -107884016;

    t114 = (x473>((x474>x475)+x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x478 = 117152606U;
	static volatile int64_t x479 = -1LL;
	uint8_t x480 = 1U;
	int32_t t115 = 182;

    t115 = (x477>((x478>x479)+x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = INT8_MAX;
	uint64_t x483 = 3750807596775813454LLU;
	volatile int8_t x484 = INT8_MIN;

    t116 = (x481>((x482>x483)+x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x485 = INT16_MIN;
	static uint64_t x486 = 6001473075094030LLU;
	int16_t x487 = -1;
	static int32_t t117 = 4803998;

    t117 = (x485>((x486>x487)+x488));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = INT8_MIN;
	static int32_t x490 = INT32_MIN;
	int32_t x491 = -1;
	int8_t x492 = INT8_MAX;
	static volatile int32_t t118 = 683980;

    t118 = (x489>((x490>x491)+x492));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x493 = INT32_MAX;
	uint8_t x494 = 1U;
	uint64_t x495 = 355742693898LLU;
	int16_t x496 = INT16_MIN;
	int32_t t119 = 2208818;

    t119 = (x493>((x494>x495)+x496));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x498 = INT16_MAX;
	uint32_t x499 = 3426U;
	static int32_t t120 = -4;

    t120 = (x497>((x498>x499)+x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x501 = INT16_MAX;
	static volatile int16_t x502 = INT16_MIN;
	volatile int32_t x503 = -1025960;
	int32_t t121 = 2581;

    t121 = (x501>((x502>x503)+x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = -1;
	uint64_t x506 = UINT64_MAX;
	uint16_t x507 = 8U;
	int16_t x508 = INT16_MIN;
	int32_t t122 = 5471;

    t122 = (x505>((x506>x507)+x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x509 = -2;
	int32_t x510 = -166;
	volatile int32_t x512 = INT32_MIN;
	int32_t t123 = -298;

    t123 = (x509>((x510>x511)+x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = INT32_MAX;
	volatile int8_t x514 = 0;
	int16_t x515 = -12;
	int8_t x516 = INT8_MAX;
	volatile int32_t t124 = 97;

    t124 = (x513>((x514>x515)+x516));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x517 = 29;
	uint8_t x518 = 18U;
	int32_t x519 = INT32_MIN;
	int16_t x520 = INT16_MIN;
	volatile int32_t t125 = 1565;

    t125 = (x517>((x518>x519)+x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MAX;
	volatile int8_t x522 = INT8_MAX;
	volatile int16_t x523 = -1;
	int16_t x524 = -1;
	volatile int32_t t126 = -185;

    t126 = (x521>((x522>x523)+x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = 163952U;
	volatile int32_t x526 = 449527;
	int8_t x527 = -3;
	uint8_t x528 = 3U;

    t127 = (x525>((x526>x527)+x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x529 = 42;
	static int32_t x530 = -1;
	static uint64_t x531 = UINT64_MAX;
	int32_t t128 = -47903347;

    t128 = (x529>((x530>x531)+x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x533 = INT16_MAX;
	int32_t x534 = INT32_MIN;
	static uint8_t x535 = 0U;
	volatile uint64_t x536 = 156284LLU;
	volatile int32_t t129 = 11943536;

    t129 = (x533>((x534>x535)+x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = -1;
	uint32_t x538 = 453U;
	uint8_t x539 = UINT8_MAX;
	int32_t t130 = 7;

    t130 = (x537>((x538>x539)+x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x542 = INT16_MIN;
	int16_t x543 = 5587;
	volatile int16_t x544 = -271;
	static int32_t t131 = -22220;

    t131 = (x541>((x542>x543)+x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = -1;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = 3LLU;
	volatile uint64_t x548 = 180479283LLU;
	int32_t t132 = 42250;

    t132 = (x545>((x546>x547)+x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x549 = 2063183038U;
	int32_t x550 = 25198891;
	int64_t x551 = -1LL;
	int32_t t133 = -9595;

    t133 = (x549>((x550>x551)+x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x554 = 230460846;
	int32_t x555 = 17232;
	int8_t x556 = -1;
	volatile int32_t t134 = -13;

    t134 = (x553>((x554>x555)+x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x557 = -1;
	int64_t x558 = INT64_MIN;
	int16_t x559 = -1;
	static uint16_t x560 = UINT16_MAX;
	int32_t t135 = 3867;

    t135 = (x557>((x558>x559)+x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = -1;
	int8_t x562 = INT8_MAX;
	volatile int32_t t136 = 379646;

    t136 = (x561>((x562>x563)+x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x565 = 35U;
	volatile int8_t x566 = INT8_MAX;
	uint16_t x567 = UINT16_MAX;

    t137 = (x565>((x566>x567)+x568));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = 2U;
	int32_t x570 = INT32_MIN;
	int32_t x571 = -1;
	volatile int32_t x572 = -881453595;
	volatile int32_t t138 = 529382689;

    t138 = (x569>((x570>x571)+x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x574 = INT8_MIN;
	volatile uint16_t x575 = UINT16_MAX;
	uint64_t x576 = 0LLU;
	int32_t t139 = -8;

    t139 = (x573>((x574>x575)+x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x577 = 112770785380695620LLU;
	int64_t x578 = INT64_MIN;
	int64_t x579 = -1LL;
	static int32_t x580 = INT32_MIN;
	static int32_t t140 = 53168;

    t140 = (x577>((x578>x579)+x580));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x581 = -1LL;
	volatile uint32_t x582 = 1576933568U;
	uint64_t x583 = 2294547217LLU;
	uint8_t x584 = 15U;

    t141 = (x581>((x582>x583)+x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t t142 = 41;

    t142 = (x585>((x586>x587)+x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 331U;
	static int8_t x590 = 0;
	uint16_t x591 = UINT16_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t143 = -257648;

    t143 = (x589>((x590>x591)+x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x593 = 0U;
	volatile uint32_t x594 = 33531642U;
	int8_t x595 = -1;
	static int64_t x596 = -1LL;
	int32_t t144 = -10870284;

    t144 = (x593>((x594>x595)+x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = -1;
	uint8_t x598 = 0U;
	int8_t x599 = -3;
	int32_t t145 = 3621396;

    t145 = (x597>((x598>x599)+x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x602 = 8762209U;
	int8_t x603 = INT8_MIN;
	static int32_t t146 = 43869280;

    t146 = (x601>((x602>x603)+x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MAX;
	int8_t x608 = -1;
	static int32_t t147 = -185977;

    t147 = (x605>((x606>x607)+x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x610 = 2826364749227730LLU;
	static uint8_t x611 = UINT8_MAX;
	int8_t x612 = INT8_MAX;
	int32_t t148 = -23;

    t148 = (x609>((x610>x611)+x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x613 = 291931U;
	volatile int32_t x614 = INT32_MIN;
	int32_t t149 = 34314;

    t149 = (x613>((x614>x615)+x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x619 = -1LL;
	uint32_t x620 = 185U;
	int32_t t150 = -1541017;

    t150 = (x617>((x618>x619)+x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x622 = INT16_MAX;
	int32_t x623 = INT32_MAX;
	volatile int16_t x624 = INT16_MIN;
	int32_t t151 = 1;

    t151 = (x621>((x622>x623)+x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = INT32_MIN;
	uint8_t x626 = 0U;
	uint64_t x628 = UINT64_MAX;
	volatile int32_t t152 = 229774;

    t152 = (x625>((x626>x627)+x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x629 = 2965691LLU;
	int8_t x630 = INT8_MAX;
	volatile uint8_t x631 = UINT8_MAX;

    t153 = (x629>((x630>x631)+x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x634 = 75U;
	volatile int32_t x635 = INT32_MIN;
	static int32_t x636 = INT32_MIN;
	int32_t t154 = -352682337;

    t154 = (x633>((x634>x635)+x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x637 = 0U;
	int32_t t155 = 3;

    t155 = (x637>((x638>x639)+x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x641 = INT16_MIN;
	int8_t x642 = 8;
	int8_t x643 = -1;
	int32_t x644 = 0;
	int32_t t156 = 651608;

    t156 = (x641>((x642>x643)+x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x646 = INT32_MIN;
	int32_t x648 = 22;
	volatile int32_t t157 = 898;

    t157 = (x645>((x646>x647)+x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = -42015LL;
	int64_t x651 = -7430363428739897LL;
	volatile uint64_t x652 = 10239819LLU;
	volatile int32_t t158 = 360047;

    t158 = (x649>((x650>x651)+x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x653 = INT8_MAX;
	volatile int8_t x654 = INT8_MIN;
	uint64_t x655 = 1906367LLU;
	static uint8_t x656 = 1U;
	volatile int32_t t159 = 3772;

    t159 = (x653>((x654>x655)+x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x657 = -1;
	static int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	int32_t t160 = 132554659;

    t160 = (x657>((x658>x659)+x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x662 = INT64_MIN;
	int8_t x663 = -1;
	uint32_t x664 = 2U;
	int32_t t161 = 3;

    t161 = (x661>((x662>x663)+x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x665 = 1U;
	int16_t x666 = INT16_MIN;
	volatile int32_t x667 = INT32_MAX;
	static uint32_t x668 = UINT32_MAX;

    t162 = (x665>((x666>x667)+x668));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x670 = INT64_MIN;
	int8_t x671 = 0;
	uint16_t x672 = 7U;
	volatile int32_t t163 = -1474;

    t163 = (x669>((x670>x671)+x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x674 = -1;
	int16_t x675 = -6;
	int32_t x676 = INT32_MIN;
	volatile int32_t t164 = 3484759;

    t164 = (x673>((x674>x675)+x676));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x678 = 1362979387641LLU;
	static volatile int64_t x679 = -682449049702280601LL;
	static volatile int32_t t165 = 6901;

    t165 = (x677>((x678>x679)+x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x681 = UINT8_MAX;
	static uint16_t x682 = 0U;
	volatile int32_t x683 = INT32_MIN;
	int16_t x684 = 116;

    t166 = (x681>((x682>x683)+x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = INT32_MIN;
	uint8_t x686 = 2U;
	static uint16_t x687 = 275U;
	int32_t x688 = 1;

    t167 = (x685>((x686>x687)+x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x689 = INT16_MIN;
	uint64_t x690 = 103826695LLU;
	volatile int64_t x691 = 183596997LL;
	uint8_t x692 = UINT8_MAX;

    t168 = (x689>((x690>x691)+x692));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x693 = 41;
	int32_t x694 = 33148842;
	int16_t x695 = INT16_MAX;
	int64_t x696 = 3466100134583118242LL;
	static volatile int32_t t169 = -3025;

    t169 = (x693>((x694>x695)+x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x697 = 181U;
	int64_t x698 = INT64_MAX;
	int64_t x699 = -1LL;
	uint32_t x700 = UINT32_MAX;

    t170 = (x697>((x698>x699)+x700));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x702 = UINT16_MAX;
	int16_t x703 = INT16_MIN;
	static int32_t x704 = INT32_MIN;
	static int32_t t171 = 782;

    t171 = (x701>((x702>x703)+x704));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x705 = INT8_MIN;
	int8_t x706 = INT8_MIN;
	static uint16_t x707 = 1006U;
	volatile int16_t x708 = -1;
	static volatile int32_t t172 = -890787;

    t172 = (x705>((x706>x707)+x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x709 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MAX;
	int32_t t173 = 255677;

    t173 = (x709>((x710>x711)+x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x717 = 19U;
	int64_t x718 = 1LL;
	static int16_t x720 = -269;

    t174 = (x717>((x718>x719)+x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x721 = UINT8_MAX;
	int8_t x722 = INT8_MAX;
	int8_t x723 = -1;
	int8_t x724 = 0;

    t175 = (x721>((x722>x723)+x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = -18;
	volatile int16_t x726 = -34;
	uint32_t x727 = 1944490561U;
	static int16_t x728 = INT16_MAX;
	static volatile int32_t t176 = 14204;

    t176 = (x725>((x726>x727)+x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x729 = INT32_MAX;
	static volatile int64_t x730 = 2166LL;
	uint64_t x731 = 6361930LLU;
	volatile int8_t x732 = 1;

    t177 = (x729>((x730>x731)+x732));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = UINT16_MAX;
	static volatile int8_t x734 = INT8_MIN;
	uint64_t x736 = 6725378558772502254LLU;

    t178 = (x733>((x734>x735)+x736));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	static int32_t x738 = INT32_MIN;
	static volatile uint8_t x739 = 7U;
	uint32_t x740 = UINT32_MAX;
	int32_t t179 = 361;

    t179 = (x737>((x738>x739)+x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x741 = 1U;
	static int32_t x742 = INT32_MIN;
	static int16_t x743 = INT16_MIN;
	static int32_t x744 = INT32_MAX;
	int32_t t180 = -88089;

    t180 = (x741>((x742>x743)+x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x745 = UINT32_MAX;
	uint16_t x746 = 64U;
	uint64_t x748 = 79822511LLU;
	int32_t t181 = -178628815;

    t181 = (x745>((x746>x747)+x748));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x749 = -1;
	uint32_t x750 = 32716U;
	int8_t x751 = -13;
	static int32_t t182 = -14;

    t182 = (x749>((x750>x751)+x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = INT32_MIN;
	static uint32_t x755 = 2657661U;
	volatile uint8_t x756 = 32U;
	static int32_t t183 = -16885864;

    t183 = (x753>((x754>x755)+x756));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x757 = 2136;
	static int32_t x758 = -1;
	static int64_t x760 = -1LL;

    t184 = (x757>((x758>x759)+x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x761 = 0LL;
	static int8_t x762 = INT8_MIN;
	volatile int32_t x763 = INT32_MAX;
	uint64_t x764 = UINT64_MAX;

    t185 = (x761>((x762>x763)+x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x765 = UINT32_MAX;
	static int8_t x766 = -30;
	uint32_t x767 = 26017600U;
	int8_t x768 = INT8_MAX;
	int32_t t186 = 1;

    t186 = (x765>((x766>x767)+x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x769 = 0;
	volatile uint32_t x770 = 424589227U;
	static uint64_t x771 = UINT64_MAX;
	static volatile uint64_t x772 = 1431LLU;

    t187 = (x769>((x770>x771)+x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x774 = -1;
	int32_t x775 = INT32_MIN;
	volatile int16_t x776 = INT16_MIN;

    t188 = (x773>((x774>x775)+x776));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x778 = 3;
	volatile int16_t x779 = -4895;
	volatile int32_t x780 = 3914950;
	volatile int32_t t189 = -209851;

    t189 = (x777>((x778>x779)+x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x781 = INT16_MIN;
	volatile int8_t x782 = INT8_MIN;
	int8_t x783 = INT8_MIN;
	int32_t x784 = 39515;

    t190 = (x781>((x782>x783)+x784));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = 633253954;
	static uint8_t x787 = 60U;
	uint32_t x788 = UINT32_MAX;
	volatile int32_t t191 = -712456;

    t191 = (x785>((x786>x787)+x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x789 = INT64_MIN;
	static volatile int16_t x790 = -1;
	static volatile int32_t x791 = INT32_MIN;
	uint64_t x792 = 379LLU;
	volatile int32_t t192 = 170667;

    t192 = (x789>((x790>x791)+x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x794 = -875937509166832LL;
	volatile uint16_t x795 = 64U;

    t193 = (x793>((x794>x795)+x796));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = INT16_MIN;
	int8_t x799 = INT8_MAX;
	volatile int32_t t194 = 10;

    t194 = (x797>((x798>x799)+x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = INT32_MAX;
	int16_t x802 = -1;
	int8_t x803 = 9;
	volatile int32_t t195 = 7;

    t195 = (x801>((x802>x803)+x804));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x806 = 4U;
	int16_t x807 = -1;
	static int8_t x808 = INT8_MIN;

    t196 = (x805>((x806>x807)+x808));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x810 = 6U;
	int64_t x811 = INT64_MIN;
	volatile int32_t t197 = 1581469;

    t197 = (x809>((x810>x811)+x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x813 = INT16_MAX;
	uint16_t x814 = 2U;
	int8_t x815 = INT8_MAX;
	int8_t x816 = 0;
	static int32_t t198 = 13215;

    t198 = (x813>((x814>x815)+x816));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x819 = INT16_MIN;
	uint16_t x820 = UINT16_MAX;

    t199 = (x817>((x818>x819)+x820));

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

