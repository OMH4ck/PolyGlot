
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

static int32_t x7 = -65313;
static int32_t t4 = 91647361;
static int16_t x21 = INT16_MIN;
int32_t t5 = 2449;
volatile int16_t x34 = 12787;
int32_t x37 = INT32_MAX;
int64_t x39 = 2717835LL;
static int64_t x40 = 1653LL;
volatile int64_t x44 = -17LL;
int32_t t10 = -37570312;
uint64_t x50 = 76255476679162LLU;
static uint16_t x74 = 1U;
int16_t x77 = INT16_MIN;
volatile int32_t t19 = -68529;
volatile int32_t x93 = INT32_MAX;
static int32_t x101 = INT32_MIN;
int16_t x109 = INT16_MAX;
static volatile int8_t x114 = INT8_MAX;
int8_t x122 = INT8_MAX;
int64_t x128 = 64281509079LL;
volatile int32_t x130 = INT32_MAX;
volatile uint64_t x131 = 642603LLU;
int8_t x134 = INT8_MIN;
int16_t x137 = INT16_MIN;
static int32_t x138 = -1;
int32_t x142 = -81320300;
int32_t x154 = 6852743;
static uint32_t x155 = 914817U;
volatile int32_t t38 = 5;
uint8_t x161 = 53U;
static volatile int64_t x165 = -1LL;
static volatile int32_t x168 = -971366876;
int8_t x170 = -1;
int32_t t42 = 75347;
static int8_t x175 = INT8_MIN;
int16_t x177 = INT16_MIN;
int64_t x182 = -1LL;
int64_t x184 = INT64_MAX;
int8_t x194 = -13;
int16_t x201 = 54;
volatile int64_t x208 = INT64_MIN;
static int64_t x214 = 14726319970LL;
static uint32_t x215 = UINT32_MAX;
static int16_t x226 = INT16_MIN;
int32_t t57 = 49826;
int64_t x237 = INT64_MAX;
static int8_t x239 = 56;
int32_t t59 = 7;
int64_t x244 = INT64_MAX;
int32_t t60 = -234562;
static int16_t x247 = -7;
uint16_t x252 = 553U;
uint64_t x264 = UINT64_MAX;
int64_t x277 = -1LL;
uint16_t x279 = UINT16_MAX;
int16_t x284 = -14996;
int64_t x296 = -17742210582107703LL;
int64_t x301 = INT64_MAX;
static uint16_t x306 = UINT16_MAX;
int16_t x315 = -1;
int16_t x317 = 94;
int64_t x322 = -1LL;
int64_t x329 = INT64_MIN;
int32_t t83 = 17784;
static volatile int32_t t84 = -259019732;
int32_t t87 = 9738;
volatile uint16_t x353 = UINT16_MAX;
volatile int32_t t88 = -719271;
int8_t x358 = INT8_MIN;
int8_t x365 = 20;
uint32_t x375 = 63405322U;
uint16_t x383 = UINT16_MAX;
int32_t t97 = -1;
int32_t x397 = INT32_MIN;
static volatile int8_t x400 = INT8_MIN;
int32_t x402 = 185215614;
uint8_t x404 = UINT8_MAX;
static volatile int32_t t100 = -388;
static int8_t x409 = -1;
static int16_t x416 = INT16_MAX;
volatile int32_t t103 = -172;
volatile int32_t x418 = -331;
int32_t t104 = -5425;
int64_t x427 = 524284203921LL;
volatile uint64_t x430 = 35163481904568601LLU;
volatile int8_t x440 = -1;
int64_t x441 = -1LL;
int32_t t110 = 6702;
volatile int64_t x448 = 313594165913830LL;
volatile int64_t x449 = 86601634LL;
volatile int8_t x451 = -54;
static volatile uint64_t x452 = 930772226599048LLU;
int64_t x453 = INT64_MAX;
static uint8_t x456 = UINT8_MAX;
static volatile int32_t t113 = 3873753;
int16_t x466 = INT16_MIN;
volatile int32_t t116 = 15407;
int8_t x475 = INT8_MAX;
uint64_t x482 = 32796LLU;
uint8_t x488 = UINT8_MAX;
int64_t x490 = INT64_MIN;
static int32_t t122 = 653005310;
volatile uint8_t x499 = 3U;
int16_t x502 = INT16_MIN;
int32_t x504 = INT32_MIN;
int32_t t125 = -13963944;
static int64_t x505 = -1LL;
uint64_t x507 = 475498576735278LLU;
int8_t x508 = INT8_MAX;
int8_t x514 = INT8_MIN;
int32_t x522 = INT32_MAX;
static int64_t x523 = INT64_MIN;
int8_t x524 = 15;
volatile int32_t t130 = 43;
int64_t x532 = -1LL;
uint64_t x539 = UINT64_MAX;
int8_t x551 = INT8_MIN;
static int32_t x557 = INT32_MAX;
volatile int32_t t139 = 2314;
int64_t x567 = INT64_MIN;
volatile int16_t x569 = -1;
int8_t x572 = -36;
int16_t x574 = INT16_MAX;
static volatile int16_t x584 = INT16_MIN;
static int32_t t145 = -2318;
volatile int32_t x585 = -1;
uint16_t x587 = 92U;
volatile int8_t x588 = 15;
static volatile int8_t x589 = INT8_MIN;
int64_t x590 = INT64_MIN;
volatile int16_t x595 = INT16_MIN;
volatile int8_t x597 = INT8_MIN;
static int32_t x605 = INT32_MIN;
volatile int32_t t153 = 28314;
static uint32_t x620 = 63303121U;
int32_t t155 = -380;
int8_t x626 = 1;
uint64_t x627 = 665LLU;
static int16_t x643 = INT16_MIN;
int64_t x644 = INT64_MIN;
uint32_t x654 = 1355U;
int8_t x656 = INT8_MIN;
static volatile int64_t x660 = 415727LL;
int8_t x663 = -1;
volatile int32_t t165 = -293087085;
static uint16_t x673 = 73U;
static int8_t x674 = -1;
volatile int16_t x688 = INT16_MIN;
static int16_t x691 = 13052;
int64_t x692 = INT64_MIN;
uint32_t x700 = UINT32_MAX;
int32_t t176 = -14143412;
int16_t x709 = INT16_MIN;
uint8_t x711 = 0U;
int32_t t177 = -4239155;
static int32_t t179 = -11;
int16_t x722 = INT16_MIN;
int16_t x726 = -1;
static int8_t x730 = INT8_MAX;
static volatile uint64_t x733 = UINT64_MAX;
int32_t t187 = 126106091;
int16_t x754 = INT16_MAX;
int32_t x755 = -1;
int8_t x756 = -1;
uint32_t x759 = 6U;
uint16_t x760 = UINT16_MAX;
volatile int32_t t189 = 15041;
static volatile int32_t t190 = -107;
int32_t x766 = INT32_MAX;
volatile int8_t x767 = INT8_MIN;
volatile int8_t x772 = INT8_MIN;
volatile int32_t x777 = INT32_MIN;
int32_t x779 = INT32_MIN;
int64_t x781 = -1LL;
volatile int8_t x782 = INT8_MIN;
uint64_t x783 = 76157LLU;
int16_t x788 = INT16_MAX;
int64_t x790 = -1LL;
volatile int32_t t197 = 190;
int32_t x796 = INT32_MAX;
int32_t x798 = INT32_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	uint16_t x2 = UINT16_MAX;
	static int16_t x3 = -1;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 2;

    t0 = (x1>((x2|x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	uint16_t x6 = 1U;
	int64_t x8 = 1340237LL;
	volatile int32_t t1 = 2120;

    t1 = (x5>((x6|x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -2;
	static int64_t x10 = -1341567106278285LL;
	uint16_t x11 = 6983U;
	int8_t x12 = 0;
	static volatile int32_t t2 = -476563094;

    t2 = (x9>((x10|x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 670U;
	uint16_t x14 = 465U;
	volatile int64_t x15 = INT64_MIN;
	volatile uint32_t x16 = UINT32_MAX;
	static int32_t t3 = 45305;

    t3 = (x13>((x14|x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	static uint32_t x18 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	uint32_t x20 = 20287U;

    t4 = (x17>((x18|x19)|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	uint32_t x23 = 44823875U;
	uint32_t x24 = UINT32_MAX;

    t5 = (x21>((x22|x23)|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 20U;
	uint8_t x26 = UINT8_MAX;
	static int8_t x27 = INT8_MIN;
	static volatile uint16_t x28 = UINT16_MAX;
	int32_t t6 = 225;

    t6 = (x25>((x26|x27)|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1;
	int64_t x30 = 52LL;
	static int64_t x31 = INT64_MAX;
	uint64_t x32 = 15132479563047LLU;
	int32_t t7 = 7034224;

    t7 = (x29>((x30|x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	static int16_t x35 = INT16_MIN;
	uint32_t x36 = 23460U;
	volatile int32_t t8 = 6;

    t8 = (x33>((x34|x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 30710LLU;
	int32_t t9 = 3749;

    t9 = (x37>((x38|x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	uint16_t x42 = UINT16_MAX;
	volatile uint8_t x43 = UINT8_MAX;

    t10 = (x41>((x42|x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	static uint64_t x46 = 25853049715LLU;
	int8_t x47 = INT8_MAX;
	static int16_t x48 = INT16_MAX;
	int32_t t11 = 160131;

    t11 = (x45>((x46|x47)|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 1407U;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 1;

    t12 = (x49>((x50|x51)|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MAX;
	uint64_t x54 = 11855LLU;
	uint32_t x55 = 31U;
	int8_t x56 = -30;
	int32_t t13 = -332;

    t13 = (x53>((x54|x55)|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	uint64_t x58 = 53153329LLU;
	int64_t x59 = -1LL;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 54905;

    t14 = (x57>((x58|x59)|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 531582879U;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -47;
	volatile int32_t t15 = -84742;

    t15 = (x61>((x62|x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	volatile int64_t x66 = INT64_MIN;
	volatile uint8_t x67 = 1U;
	int64_t x68 = -1LL;
	int32_t t16 = 1337;

    t16 = (x65>((x66|x67)|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 1;
	int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -421537;

    t17 = (x69>((x70|x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1673;
	int32_t t18 = 521915;

    t18 = (x73>((x74|x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x78 = INT32_MIN;
	uint8_t x79 = 66U;
	int32_t x80 = -1;

    t19 = (x77>((x78|x79)|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	volatile int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -127;

    t20 = (x81>((x82|x83)|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -2374;
	static int16_t x86 = -407;
	int16_t x87 = INT16_MAX;
	static volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 0;

    t21 = (x85>((x86|x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x89 = INT32_MIN;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 7;

    t22 = (x89>((x90|x91)|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = UINT32_MAX;
	int16_t x95 = -1;
	volatile int8_t x96 = -3;
	volatile int32_t t23 = -9142;

    t23 = (x93>((x94|x95)|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 763481182710727LLU;
	int32_t x99 = INT32_MIN;
	static uint64_t x100 = 103687031449941LLU;
	static volatile int32_t t24 = 1765595;

    t24 = (x97>((x98|x99)|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x102 = 72122578U;
	int16_t x103 = -5;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 1595735;

    t25 = (x101>((x102|x103)|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int16_t x106 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -7;

    t26 = (x105>((x106|x107)|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = 307U;
	volatile int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -42771;

    t27 = (x109>((x110|x111)|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint16_t x115 = 3U;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = -1444;

    t28 = (x113>((x114|x115)|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	volatile uint32_t x118 = UINT32_MAX;
	uint16_t x119 = UINT16_MAX;
	static int8_t x120 = INT8_MAX;
	int32_t t29 = 955473263;

    t29 = (x117>((x118|x119)|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x123 = 397988466LLU;
	static volatile uint8_t x124 = 65U;
	int32_t t30 = -29483;

    t30 = (x121>((x122|x123)|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 9U;
	static int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	volatile int32_t t31 = -54598;

    t31 = (x125>((x126|x127)|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	static int8_t x132 = INT8_MIN;
	static int32_t t32 = -6;

    t32 = (x129>((x130|x131)|x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int64_t x135 = INT64_MIN;
	uint16_t x136 = 13U;
	volatile int32_t t33 = -2;

    t33 = (x133>((x134|x135)|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x139 = 1U;
	int64_t x140 = -1LL;
	int32_t t34 = -94362527;

    t34 = (x137>((x138|x139)|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 30U;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = 1413272;

    t35 = (x141>((x142|x143)|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	int8_t x147 = -1;
	volatile int64_t x148 = -257024329LL;
	int32_t t36 = -1;

    t36 = (x145>((x146|x147)|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	volatile uint16_t x150 = 754U;
	int16_t x151 = -1430;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 1;

    t37 = (x149>((x150|x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	int64_t x156 = INT64_MIN;

    t38 = (x153>((x154|x155)|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -3317913;

    t39 = (x157>((x158|x159)|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x162 = 12U;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	int32_t t40 = -3579275;

    t40 = (x161>((x162|x163)|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	int32_t t41 = 1;

    t41 = (x165>((x166|x167)|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	static int64_t x171 = INT64_MIN;
	static int32_t x172 = -1;

    t42 = (x169>((x170|x171)|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	int32_t x176 = 20;
	static int32_t t43 = 3458013;

    t43 = (x173>((x174|x175)|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 1124246334599962LLU;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = -68;

    t44 = (x177>((x178|x179)|x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	uint16_t x183 = 6U;
	volatile int32_t t45 = -7988525;

    t45 = (x181>((x182|x183)|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static int8_t x186 = INT8_MIN;
	volatile uint8_t x187 = UINT8_MAX;
	volatile int8_t x188 = INT8_MIN;
	static int32_t t46 = -23783760;

    t46 = (x185>((x186|x187)|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	volatile uint8_t x192 = 6U;
	int32_t t47 = -22418;

    t47 = (x189>((x190|x191)|x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	static uint32_t x195 = 1045505092U;
	static int32_t x196 = -1;
	int32_t t48 = -670587;

    t48 = (x193>((x194|x195)|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -7;
	int32_t x198 = -1;
	volatile uint64_t x199 = 3321581606851LLU;
	int16_t x200 = -1;
	volatile int32_t t49 = 175;

    t49 = (x197>((x198|x199)|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x202 = -1;
	volatile int16_t x203 = INT16_MAX;
	int8_t x204 = -1;
	int32_t t50 = -745844453;

    t50 = (x201>((x202|x203)|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MIN;
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	static volatile int32_t t51 = -317681;

    t51 = (x205>((x206|x207)|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	volatile int16_t x210 = 36;
	static int8_t x211 = INT8_MIN;
	uint32_t x212 = 30625981U;
	int32_t t52 = 62;

    t52 = (x209>((x210|x211)|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 1U;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 63936;

    t53 = (x213>((x214|x215)|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	static uint16_t x220 = 377U;
	int32_t t54 = -1;

    t54 = (x217>((x218|x219)|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 8568159U;
	static int16_t x222 = -1;
	static uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MIN;
	static int32_t t55 = -94;

    t55 = (x221>((x222|x223)|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -23;
	int64_t x227 = INT64_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -6468699;

    t56 = (x225>((x226|x227)|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 12271U;
	uint64_t x230 = UINT64_MAX;
	uint16_t x231 = 80U;
	int16_t x232 = INT16_MIN;

    t57 = (x229>((x230|x231)|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 581703U;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = 175785U;
	volatile int32_t t58 = -16131;

    t58 = (x233>((x234|x235)|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x238 = -1LL;
	uint64_t x240 = 981733067942LLU;

    t59 = (x237>((x238|x239)|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = INT8_MAX;
	uint16_t x243 = UINT16_MAX;

    t60 = (x241>((x242|x243)|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = 12250U;
	int8_t x246 = -13;
	uint16_t x248 = 30389U;
	static volatile int32_t t61 = 8098;

    t61 = (x245>((x246|x247)|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int32_t t62 = -6939;

    t62 = (x249>((x250|x251)|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = 5U;
	volatile int32_t t63 = -1216;

    t63 = (x253>((x254|x255)|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	volatile int8_t x258 = 0;
	static int8_t x259 = INT8_MAX;
	volatile int64_t x260 = INT64_MAX;
	volatile int32_t t64 = -2027;

    t64 = (x257>((x258|x259)|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	static uint16_t x263 = 1408U;
	int32_t t65 = -277;

    t65 = (x261>((x262|x263)|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	static int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 13784;

    t66 = (x265>((x266|x267)|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	static uint8_t x270 = UINT8_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	static int16_t x272 = 2625;
	static volatile int32_t t67 = 278704845;

    t67 = (x269>((x270|x271)|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	static volatile int8_t x275 = -21;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -30302746;

    t68 = (x273>((x274|x275)|x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x278 = 4516963;
	int16_t x280 = INT16_MIN;
	static int32_t t69 = 187758;

    t69 = (x277>((x278|x279)|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	uint32_t x282 = 1167091U;
	int16_t x283 = -1;
	volatile int32_t t70 = -82;

    t70 = (x281>((x282|x283)|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;
	int32_t t71 = -41885;

    t71 = (x285>((x286|x287)|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int64_t x290 = -217136076835LL;
	volatile uint64_t x291 = 37228456LLU;
	volatile int32_t x292 = -3432708;
	volatile int32_t t72 = 125;

    t72 = (x289>((x290|x291)|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MIN;
	uint8_t x295 = 1U;
	volatile int32_t t73 = -86287;

    t73 = (x293>((x294|x295)|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -1;
	int8_t x298 = -1;
	volatile int64_t x299 = INT64_MAX;
	int8_t x300 = 1;
	volatile int32_t t74 = 756647949;

    t74 = (x297>((x298|x299)|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = -1;
	int64_t x303 = -3616LL;
	int32_t x304 = -3135273;
	static int32_t t75 = -10895;

    t75 = (x301>((x302|x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -1LL;
	uint64_t x307 = 3555024950716554LLU;
	int8_t x308 = INT8_MIN;
	int32_t t76 = 16725;

    t76 = (x305>((x306|x307)|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile int64_t x310 = -790737503LL;
	int32_t x311 = -1;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = -1800;

    t77 = (x309>((x310|x311)|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t78 = -229415;

    t78 = (x313>((x314|x315)|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = -1LL;
	volatile int16_t x319 = INT16_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = 10009;

    t79 = (x317>((x318|x319)|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 55383583520205LL;
	uint8_t x323 = 4U;
	uint16_t x324 = UINT16_MAX;
	static volatile int32_t t80 = 73;

    t80 = (x321>((x322|x323)|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 3U;
	volatile uint16_t x326 = 311U;
	int16_t x327 = -31;
	volatile int8_t x328 = INT8_MIN;
	int32_t t81 = 126;

    t81 = (x325>((x326|x327)|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = INT32_MIN;
	static volatile uint16_t x331 = UINT16_MAX;
	static int64_t x332 = -193298778LL;
	int32_t t82 = 1148409;

    t82 = (x329>((x330|x331)|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MAX;
	uint8_t x336 = 70U;

    t83 = (x333>((x334|x335)|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 5U;
	static int32_t x338 = -1;
	uint16_t x339 = 81U;
	int64_t x340 = -1LL;

    t84 = (x337>((x338|x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 28027931861082LL;
	int32_t x342 = INT32_MAX;
	uint16_t x343 = 55U;
	int64_t x344 = -1277349309995LL;
	volatile int32_t t85 = 158;

    t85 = (x341>((x342|x343)|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 27672815314LLU;
	static int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -1;
	volatile int32_t t86 = -228322;

    t86 = (x345>((x346|x347)|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	int64_t x350 = -28714712311LL;
	static volatile int32_t x351 = INT32_MAX;
	volatile uint16_t x352 = 28U;

    t87 = (x349>((x350|x351)|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	volatile uint64_t x355 = UINT64_MAX;
	uint32_t x356 = UINT32_MAX;

    t88 = (x353>((x354|x355)|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 16U;
	int8_t x359 = -35;
	static volatile int32_t x360 = INT32_MIN;
	static int32_t t89 = 5356;

    t89 = (x357>((x358|x359)|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	uint16_t x362 = 176U;
	int64_t x363 = 1LL;
	uint16_t x364 = UINT16_MAX;
	int32_t t90 = -25113934;

    t90 = (x361>((x362|x363)|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = -20692300430173LL;
	volatile uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = 90406481;
	volatile int32_t t91 = 13430026;

    t91 = (x365>((x366|x367)|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint32_t x370 = 20933U;
	static uint8_t x371 = 28U;
	volatile int16_t x372 = -438;
	int32_t t92 = 765;

    t92 = (x369>((x370|x371)|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 29U;
	int16_t x374 = -1;
	uint8_t x376 = 7U;
	int32_t t93 = -49505632;

    t93 = (x373>((x374|x375)|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	static volatile int64_t x378 = INT64_MIN;
	static uint64_t x379 = 62391528720504401LLU;
	int8_t x380 = -3;
	volatile int32_t t94 = -11;

    t94 = (x377>((x378|x379)|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int32_t x384 = -1904604;
	int32_t t95 = 0;

    t95 = (x381>((x382|x383)|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x385 = INT16_MIN;
	int32_t x386 = -1;
	volatile uint64_t x387 = UINT64_MAX;
	int8_t x388 = 0;
	int32_t t96 = -951552847;

    t96 = (x385>((x386|x387)|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 1U;
	int32_t x390 = -1;
	uint16_t x391 = 8U;
	int16_t x392 = INT16_MAX;

    t97 = (x389>((x390|x391)|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = 1272406279645877LLU;
	uint16_t x394 = 3U;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = 61;

    t98 = (x393>((x394|x395)|x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x398 = INT32_MIN;
	static int64_t x399 = 1584433777075LL;
	volatile int32_t t99 = 11324;

    t99 = (x397>((x398|x399)|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x403 = -1;

    t100 = (x401>((x402|x403)|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static uint8_t x406 = UINT8_MAX;
	int8_t x407 = -11;
	static int16_t x408 = INT16_MIN;
	static int32_t t101 = -197449179;

    t101 = (x405>((x406|x407)|x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -16483409;
	static uint64_t x411 = UINT64_MAX;
	int64_t x412 = -52475150024408491LL;
	int32_t t102 = 89645;

    t102 = (x409>((x410|x411)|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -717236149;
	uint16_t x414 = 163U;
	int8_t x415 = -1;

    t103 = (x413>((x414|x415)|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x417 = UINT16_MAX;
	volatile int64_t x419 = -474298LL;
	static volatile int64_t x420 = INT64_MIN;

    t104 = (x417>((x418|x419)|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 2013612969LLU;
	int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MAX;
	uint8_t x424 = UINT8_MAX;
	int32_t t105 = -88;

    t105 = (x421>((x422|x423)|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 7U;
	volatile uint32_t x426 = 4U;
	static int64_t x428 = -2194782644032LL;
	volatile int32_t t106 = -102990;

    t106 = (x425>((x426|x427)|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 1089;
	int16_t x431 = -1;
	volatile int32_t x432 = -1;
	int32_t t107 = 44;

    t107 = (x429>((x430|x431)|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 1;
	static int8_t x434 = INT8_MIN;
	static volatile uint8_t x435 = 1U;
	int16_t x436 = 4;
	volatile int32_t t108 = 16439786;

    t108 = (x433>((x434|x435)|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 4092192219226LL;
	static int64_t x438 = -472178693865LL;
	int32_t x439 = 1919270;
	static int32_t t109 = 11;

    t109 = (x437>((x438|x439)|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MAX;
	uint64_t x443 = 0LLU;
	int64_t x444 = -1914470733239069LL;

    t110 = (x441>((x442|x443)|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = UINT8_MAX;
	uint32_t x446 = UINT32_MAX;
	volatile int8_t x447 = -25;
	int32_t t111 = 10;

    t111 = (x445>((x446|x447)|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x450 = UINT16_MAX;
	volatile int32_t t112 = -551;

    t112 = (x449>((x450|x451)|x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x454 = 14;
	int64_t x455 = INT64_MIN;

    t113 = (x453>((x454|x455)|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x458 = 32078151;
	uint32_t x459 = 16764U;
	static volatile int64_t x460 = INT64_MIN;
	int32_t t114 = -113091575;

    t114 = (x457>((x458|x459)|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	int64_t x462 = -1LL;
	int64_t x463 = -1LL;
	int16_t x464 = INT16_MAX;
	static int32_t t115 = 1;

    t115 = (x461>((x462|x463)|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 338254307LL;
	int8_t x467 = INT8_MIN;
	uint8_t x468 = 112U;

    t116 = (x465>((x466|x467)|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 1U;
	int16_t x470 = INT16_MIN;
	volatile int32_t x471 = 2844090;
	int16_t x472 = INT16_MAX;
	int32_t t117 = -961249;

    t117 = (x469>((x470|x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	int32_t x474 = -2059985;
	static uint8_t x476 = 0U;
	volatile int32_t t118 = 0;

    t118 = (x473>((x474|x475)|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	static int32_t x478 = INT32_MAX;
	volatile int16_t x479 = -1;
	volatile uint16_t x480 = 9U;
	volatile int32_t t119 = 253;

    t119 = (x477>((x478|x479)|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 2403828LLU;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = UINT8_MAX;
	int32_t t120 = 1777366;

    t120 = (x481>((x482|x483)|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	volatile int16_t x486 = INT16_MIN;
	int16_t x487 = -492;
	static volatile int32_t t121 = 1924743;

    t121 = (x485>((x486|x487)|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int8_t x491 = -1;
	static int8_t x492 = INT8_MIN;

    t122 = (x489>((x490|x491)|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 77LLU;
	int8_t x494 = INT8_MAX;
	int16_t x495 = INT16_MIN;
	int8_t x496 = INT8_MIN;
	static volatile int32_t t123 = 55726;

    t123 = (x493>((x494|x495)|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	static volatile int16_t x500 = -345;
	int32_t t124 = 244;

    t124 = (x497>((x498|x499)|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile int8_t x503 = 55;

    t125 = (x501>((x502|x503)|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MAX;
	volatile int32_t t126 = 345264981;

    t126 = (x505>((x506|x507)|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = INT64_MIN;
	int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	volatile int32_t x512 = INT32_MAX;
	int32_t t127 = 495130;

    t127 = (x509>((x510|x511)|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	static uint16_t x515 = UINT16_MAX;
	uint64_t x516 = 671944945LLU;
	int32_t t128 = -2789896;

    t128 = (x513>((x514|x515)|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	uint8_t x518 = 24U;
	int16_t x519 = 1619;
	static int16_t x520 = INT16_MIN;
	int32_t t129 = -383657556;

    t129 = (x517>((x518|x519)|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = UINT16_MAX;

    t130 = (x521>((x522|x523)|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = -409;
	int8_t x526 = -1;
	int8_t x527 = 18;
	volatile int32_t x528 = 24515456;
	volatile int32_t t131 = 2349;

    t131 = (x525>((x526|x527)|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	static volatile int8_t x530 = 1;
	int64_t x531 = -1LL;
	volatile int32_t t132 = 270653;

    t132 = (x529>((x530|x531)|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = UINT8_MAX;
	uint16_t x534 = 1U;
	int8_t x535 = -1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 580;

    t133 = (x533>((x534|x535)|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -6902;
	int64_t x538 = -1007899717689470LL;
	int8_t x540 = -1;
	int32_t t134 = 790845598;

    t134 = (x537>((x538|x539)|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -138603;
	int8_t x542 = -1;
	static uint16_t x543 = UINT16_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -132993;

    t135 = (x541>((x542|x543)|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	static int16_t x546 = 3767;
	int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MIN;
	volatile int32_t t136 = 1;

    t136 = (x545>((x546|x547)|x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = INT8_MIN;
	int16_t x550 = INT16_MIN;
	volatile int64_t x552 = -1339281LL;
	int32_t t137 = -51417739;

    t137 = (x549>((x550|x551)|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -473LL;
	int8_t x554 = -1;
	static int32_t x555 = INT32_MIN;
	int64_t x556 = INT64_MAX;
	int32_t t138 = -1719;

    t138 = (x553>((x554|x555)|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x558 = UINT8_MAX;
	int64_t x559 = -4930383991LL;
	int16_t x560 = -15;

    t139 = (x557>((x558|x559)|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	int8_t x562 = INT8_MAX;
	volatile int16_t x563 = -1;
	int16_t x564 = INT16_MIN;
	int32_t t140 = -6785616;

    t140 = (x561>((x562|x563)|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 52U;
	int32_t x566 = 866;
	int8_t x568 = -14;
	int32_t t141 = 878136834;

    t141 = (x565>((x566|x567)|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x570 = -69;
	static int32_t x571 = INT32_MIN;
	volatile int32_t t142 = 3762;

    t142 = (x569>((x570|x571)|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = INT8_MIN;
	volatile int16_t x575 = INT16_MIN;
	static int64_t x576 = -1LL;
	volatile int32_t t143 = 92684567;

    t143 = (x573>((x574|x575)|x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MAX;
	volatile int64_t x578 = INT64_MIN;
	static int16_t x579 = -1;
	int32_t x580 = -1;
	volatile int32_t t144 = 53434789;

    t144 = (x577>((x578|x579)|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 4837902LL;
	uint64_t x582 = 630345210982LLU;
	int16_t x583 = INT16_MIN;

    t145 = (x581>((x582|x583)|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = 12;
	volatile int32_t t146 = -44253;

    t146 = (x585>((x586|x587)|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x591 = -1LL;
	int32_t x592 = 88749;
	int32_t t147 = 46;

    t147 = (x589>((x590|x591)|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x593 = INT32_MAX;
	uint8_t x594 = 3U;
	volatile int32_t x596 = INT32_MIN;
	int32_t t148 = -972689;

    t148 = (x593>((x594|x595)|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x598 = 17U;
	int32_t x599 = INT32_MIN;
	volatile uint8_t x600 = 21U;
	int32_t t149 = -14;

    t149 = (x597>((x598|x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 4733U;
	uint16_t x602 = 21U;
	uint64_t x603 = 65LLU;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = -1508135;

    t150 = (x601>((x602|x603)|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x606 = UINT32_MAX;
	static int64_t x607 = -1LL;
	int64_t x608 = INT64_MIN;
	volatile int32_t t151 = -4020;

    t151 = (x605>((x606|x607)|x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	uint16_t x610 = 18396U;
	uint8_t x611 = 14U;
	static uint32_t x612 = 186876807U;
	volatile int32_t t152 = 141228089;

    t152 = (x609>((x610|x611)|x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = 3782674052163459LL;
	int32_t x614 = 33;
	uint8_t x615 = UINT8_MAX;
	volatile int64_t x616 = -1LL;

    t153 = (x613>((x614|x615)|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	static int8_t x618 = 3;
	int8_t x619 = -8;
	volatile int32_t t154 = 28873109;

    t154 = (x617>((x618|x619)|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x621 = 19151U;
	int16_t x622 = INT16_MIN;
	static uint8_t x623 = UINT8_MAX;
	uint64_t x624 = 2342LLU;

    t155 = (x621>((x622|x623)|x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 741769886259LL;
	int8_t x628 = 1;
	static volatile int32_t t156 = -1704;

    t156 = (x625>((x626|x627)|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 1298U;
	int8_t x630 = -1;
	uint8_t x631 = 17U;
	volatile int16_t x632 = -626;
	volatile int32_t t157 = -14931986;

    t157 = (x629>((x630|x631)|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	volatile int16_t x634 = 13034;
	int32_t x635 = 1;
	int32_t x636 = INT32_MAX;
	int32_t t158 = 126975495;

    t158 = (x633>((x634|x635)|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = 14732308;
	uint16_t x638 = UINT16_MAX;
	int64_t x639 = -1LL;
	volatile int64_t x640 = INT64_MIN;
	int32_t t159 = -1353272;

    t159 = (x637>((x638|x639)|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	uint16_t x642 = 3U;
	int32_t t160 = -11607154;

    t160 = (x641>((x642|x643)|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 0U;
	int64_t x646 = INT64_MIN;
	static int64_t x647 = INT64_MAX;
	int32_t x648 = INT32_MAX;
	static int32_t t161 = -674948;

    t161 = (x645>((x646|x647)|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	static int64_t x650 = 487355893135524LL;
	volatile int64_t x651 = -1963307884513LL;
	uint64_t x652 = UINT64_MAX;
	static volatile int32_t t162 = -5300;

    t162 = (x649>((x650|x651)|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 463U;
	int64_t x655 = INT64_MAX;
	volatile int32_t t163 = -25150160;

    t163 = (x653>((x654|x655)|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = INT8_MIN;
	static int8_t x658 = INT8_MIN;
	int16_t x659 = INT16_MIN;
	int32_t t164 = 6962;

    t164 = (x657>((x658|x659)|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	static int16_t x662 = -145;
	static volatile uint16_t x664 = UINT16_MAX;

    t165 = (x661>((x662|x663)|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 1439U;
	int64_t x666 = -1LL;
	int16_t x667 = INT16_MIN;
	int64_t x668 = INT64_MAX;
	int32_t t166 = 886938;

    t166 = (x665>((x666|x667)|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -1;
	volatile uint16_t x670 = 30969U;
	static int64_t x671 = 129291873113686626LL;
	volatile int8_t x672 = INT8_MIN;
	volatile int32_t t167 = 13974807;

    t167 = (x669>((x670|x671)|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MAX;
	int32_t t168 = 0;

    t168 = (x673>((x674|x675)|x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	volatile uint16_t x678 = 218U;
	int16_t x679 = -329;
	int64_t x680 = -1LL;
	int32_t t169 = -1;

    t169 = (x677>((x678|x679)|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = 1U;
	int16_t x682 = 360;
	int64_t x683 = 11619438LL;
	int16_t x684 = -1;
	volatile int32_t t170 = 111579;

    t170 = (x681>((x682|x683)|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	static int32_t x686 = INT32_MIN;
	int32_t x687 = INT32_MIN;
	volatile int32_t t171 = 12253149;

    t171 = (x685>((x686|x687)|x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 407455047U;
	uint8_t x690 = 1U;
	volatile int32_t t172 = 22621225;

    t172 = (x689>((x690|x691)|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 2475U;
	uint32_t x694 = 0U;
	static volatile int32_t x695 = -1;
	int32_t x696 = -1;
	static volatile int32_t t173 = 612;

    t173 = (x693>((x694|x695)|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	static volatile int32_t x698 = INT32_MAX;
	static int64_t x699 = 126065481625198LL;
	volatile int32_t t174 = -148;

    t174 = (x697>((x698|x699)|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	int16_t x702 = INT16_MIN;
	int32_t x703 = INT32_MAX;
	uint8_t x704 = 46U;
	int32_t t175 = 35;

    t175 = (x701>((x702|x703)|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	int32_t x706 = INT32_MIN;
	int32_t x707 = -8110;
	int32_t x708 = 2245152;

    t176 = (x705>((x706|x707)|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x710 = 7084064U;
	uint8_t x712 = 13U;

    t177 = (x709>((x710|x711)|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3106072994LLU;
	uint32_t x714 = 0U;
	int8_t x715 = -1;
	static int32_t x716 = INT32_MIN;
	int32_t t178 = -810823318;

    t178 = (x713>((x714|x715)|x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 1666470;
	uint64_t x718 = 374315LLU;
	volatile int16_t x719 = INT16_MIN;
	volatile uint16_t x720 = 1417U;

    t179 = (x717>((x718|x719)|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	volatile uint64_t x723 = 14LLU;
	int16_t x724 = -2;
	int32_t t180 = 7325;

    t180 = (x721>((x722|x723)|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	volatile int64_t x727 = INT64_MAX;
	uint32_t x728 = UINT32_MAX;
	volatile int32_t t181 = 6297467;

    t181 = (x725>((x726|x727)|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 508481064510955669LLU;
	static int64_t x731 = INT64_MIN;
	static int16_t x732 = -166;
	volatile int32_t t182 = 916424;

    t182 = (x729>((x730|x731)|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x734 = 602U;
	uint32_t x735 = 9424657U;
	int16_t x736 = 0;
	static int32_t t183 = -1305645;

    t183 = (x733>((x734|x735)|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x738 = 1U;
	int32_t x739 = INT32_MAX;
	static uint8_t x740 = UINT8_MAX;
	volatile int32_t t184 = 219030;

    t184 = (x737>((x738|x739)|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MIN;
	int8_t x742 = -3;
	volatile int8_t x743 = 14;
	uint64_t x744 = UINT64_MAX;
	int32_t t185 = 108;

    t185 = (x741>((x742|x743)|x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 18069LL;
	int8_t x746 = INT8_MIN;
	volatile int8_t x747 = 0;
	int64_t x748 = -3675970LL;
	static volatile int32_t t186 = -15;

    t186 = (x745>((x746|x747)|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = 40;
	volatile int16_t x750 = 0;
	uint64_t x751 = UINT64_MAX;
	int32_t x752 = -5917735;

    t187 = (x749>((x750|x751)|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	static volatile int32_t t188 = -3;

    t188 = (x753>((x754|x755)|x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 14U;
	int32_t x758 = 1841550;

    t189 = (x757>((x758|x759)|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 191010721U;
	int64_t x762 = INT64_MIN;
	int32_t x763 = INT32_MAX;
	uint8_t x764 = 0U;

    t190 = (x761>((x762|x763)|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = -531;
	static int32_t x768 = INT32_MIN;
	static int32_t t191 = 15215099;

    t191 = (x765>((x766|x767)|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	static volatile int8_t x770 = INT8_MIN;
	int8_t x771 = 2;
	static int32_t t192 = 13758929;

    t192 = (x769>((x770|x771)|x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 253831882583050340LLU;
	static int16_t x774 = -555;
	int32_t x775 = 95;
	int8_t x776 = -1;
	int32_t t193 = -2498097;

    t193 = (x773>((x774|x775)|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x778 = 95U;
	int16_t x780 = -674;
	volatile int32_t t194 = -8;

    t194 = (x777>((x778|x779)|x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x784 = 13U;
	static int32_t t195 = 22066;

    t195 = (x781>((x782|x783)|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	volatile int32_t x786 = INT32_MIN;
	int32_t x787 = 21429294;
	volatile int32_t t196 = 3463261;

    t196 = (x785>((x786|x787)|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	volatile uint32_t x791 = 3498701U;
	volatile int16_t x792 = INT16_MIN;

    t197 = (x789>((x790|x791)|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1LL;
	int64_t x794 = -454105364905LL;
	int64_t x795 = INT64_MAX;
	int32_t t198 = -1666;

    t198 = (x793>((x794|x795)|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	static uint8_t x799 = UINT8_MAX;
	static int64_t x800 = -1LL;
	volatile int32_t t199 = 1;

    t199 = (x797>((x798|x799)|x800));

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

