
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

int8_t x3 = -1;
volatile int64_t x4 = INT64_MIN;
volatile int32_t x11 = INT32_MIN;
int8_t x12 = -1;
uint8_t x13 = 9U;
int32_t t3 = -6;
uint64_t x17 = UINT64_MAX;
uint8_t x20 = 1U;
volatile int32_t t4 = 3;
static volatile int32_t t5 = 16587107;
int8_t x26 = INT8_MAX;
static volatile int32_t x27 = INT32_MIN;
static int32_t t6 = -29796;
int16_t x40 = -13;
static int32_t t10 = 941;
uint32_t x45 = 5219028U;
volatile int32_t t11 = -393299;
int32_t t12 = 8812241;
volatile int16_t x58 = INT16_MAX;
uint64_t x60 = 168342637945131835LLU;
int32_t t14 = 1;
int8_t x66 = INT8_MIN;
static int64_t x67 = INT64_MIN;
volatile uint32_t x73 = 1018403U;
static int32_t t19 = -215;
int64_t x102 = -2637LL;
int32_t t25 = 3517;
int64_t x105 = INT64_MIN;
volatile int32_t t26 = 781383;
static uint16_t x111 = 14U;
int16_t x117 = -1;
uint8_t x119 = 1U;
static uint8_t x121 = 9U;
int32_t x123 = INT32_MIN;
uint32_t x128 = 991071U;
volatile int32_t t31 = 396460643;
int8_t x130 = -1;
uint32_t x131 = UINT32_MAX;
volatile int64_t x133 = INT64_MIN;
volatile int64_t x134 = -19579372097LL;
uint16_t x147 = UINT16_MAX;
int32_t x154 = -1212934;
static int32_t x160 = -1;
int32_t x166 = INT32_MIN;
int16_t x167 = INT16_MIN;
int64_t x170 = INT64_MAX;
volatile int32_t t43 = -6466;
int16_t x177 = INT16_MAX;
int32_t t44 = -40827571;
int16_t x181 = -1;
int16_t x187 = INT16_MIN;
int32_t t47 = -824160;
int16_t x201 = 107;
int8_t x207 = -1;
uint16_t x211 = UINT16_MAX;
volatile int32_t t52 = 27979;
volatile uint16_t x213 = UINT16_MAX;
volatile int16_t x221 = -4695;
static uint16_t x225 = 6U;
int32_t t56 = -14;
int16_t x230 = INT16_MIN;
static volatile uint16_t x231 = 1859U;
static int32_t t60 = 365772196;
int32_t x246 = INT32_MIN;
volatile int8_t x249 = INT8_MIN;
int32_t t63 = -74176;
int32_t x257 = -1;
uint8_t x263 = 38U;
int16_t x264 = 233;
volatile int32_t t65 = 0;
uint16_t x269 = 1188U;
static uint16_t x278 = 92U;
int8_t x280 = INT8_MIN;
int32_t x282 = 0;
int32_t t70 = -852473;
uint16_t x288 = 0U;
uint16_t x292 = UINT16_MAX;
uint64_t x293 = UINT64_MAX;
volatile int32_t t73 = 1;
int32_t t74 = 1;
uint32_t x301 = UINT32_MAX;
volatile int32_t x312 = INT32_MAX;
static volatile int32_t t77 = -38378467;
uint64_t x316 = 1446561LLU;
static int32_t x322 = INT32_MIN;
uint8_t x323 = 3U;
int16_t x329 = INT16_MIN;
static int16_t x336 = INT16_MIN;
static volatile int32_t t84 = 13792;
volatile int8_t x347 = 34;
uint32_t x361 = UINT32_MAX;
static uint8_t x365 = UINT8_MAX;
int8_t x367 = INT8_MIN;
int32_t t92 = 3169405;
uint16_t x376 = 182U;
int8_t x378 = INT8_MIN;
volatile int8_t x380 = -1;
int32_t x384 = -1;
int16_t x393 = INT16_MAX;
volatile int32_t t99 = 6322116;
uint16_t x407 = 0U;
static int32_t t102 = 3;
static int64_t x413 = -1LL;
uint16_t x416 = 4U;
int16_t x418 = -1;
uint8_t x419 = 1U;
int16_t x422 = INT16_MAX;
static uint64_t x425 = 34LLU;
volatile uint16_t x427 = 102U;
uint8_t x429 = 8U;
int32_t x430 = INT32_MIN;
int64_t x432 = INT64_MIN;
uint64_t x434 = 1699879503232590LLU;
volatile int8_t x435 = 0;
int16_t x440 = INT16_MAX;
int32_t t109 = -7441;
int32_t x441 = -834;
int32_t x443 = 63076620;
uint32_t x450 = UINT32_MAX;
static int32_t t112 = 301942345;
uint32_t x456 = 2U;
volatile uint32_t x457 = 24833U;
int8_t x466 = 0;
volatile int16_t x468 = INT16_MIN;
static int32_t t116 = 0;
volatile int16_t x471 = INT16_MAX;
int16_t x478 = INT16_MIN;
int32_t x479 = INT32_MAX;
int32_t x482 = -1;
int32_t t120 = -5710086;
int8_t x486 = -1;
static int16_t x490 = -1;
int32_t t122 = -16062526;
int16_t x494 = INT16_MIN;
static int16_t x496 = INT16_MIN;
volatile int32_t t124 = 19;
volatile uint8_t x501 = UINT8_MAX;
uint16_t x502 = 16652U;
int32_t t127 = -233180199;
int32_t t128 = 73;
int32_t t129 = 5;
static volatile int32_t x531 = -1;
int32_t t132 = -2180171;
int64_t x533 = INT64_MIN;
int16_t x544 = -1;
int32_t t136 = -1652;
volatile int32_t t138 = 555654;
static int32_t t139 = 41;
int64_t x582 = INT64_MIN;
static uint16_t x586 = 3306U;
int8_t x587 = -1;
static int32_t t146 = -21;
int32_t x599 = -1;
static volatile int8_t x601 = -40;
int64_t x603 = INT64_MAX;
int8_t x611 = -1;
volatile int32_t t152 = -28890;
int16_t x617 = INT16_MAX;
int64_t x622 = 54563298134100210LL;
volatile uint8_t x626 = UINT8_MAX;
uint32_t x627 = UINT32_MAX;
static int32_t x629 = INT32_MIN;
int8_t x631 = -1;
uint32_t x632 = 5U;
uint8_t x633 = 3U;
int32_t x635 = INT32_MIN;
int8_t x641 = -1;
int32_t t160 = 17;
static volatile int64_t x656 = INT64_MAX;
static int32_t t165 = 349;
volatile uint64_t x665 = UINT64_MAX;
uint32_t x672 = 158U;
int32_t t168 = -15904793;
int64_t x678 = 134640481124288021LL;
volatile int32_t x679 = INT32_MIN;
int16_t x680 = INT16_MIN;
int8_t x688 = INT8_MAX;
int16_t x694 = 3979;
volatile int32_t x699 = INT32_MIN;
volatile int32_t t174 = 9;
uint16_t x707 = 68U;
int8_t x708 = -13;
int64_t x711 = INT64_MAX;
int64_t x714 = INT64_MAX;
int32_t x723 = 30;
static int16_t x738 = INT16_MIN;
int64_t x742 = INT64_MAX;
uint8_t x746 = 2U;
int32_t x767 = INT32_MIN;
volatile int8_t x776 = INT8_MIN;
static int64_t x777 = -445605323053906814LL;
int8_t x779 = INT8_MAX;
int16_t x790 = -1;
int8_t x791 = -1;
uint32_t x794 = 305217U;
uint16_t x798 = UINT16_MAX;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile int8_t x2 = 14;
	int32_t t0 = -92001266;

    t0 = (x1!=((x2^x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	static uint64_t x6 = 8150137173LLU;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = 211947080;
	static int32_t t1 = 0;

    t1 = (x5!=((x6^x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	int32_t x10 = 38408;
	int32_t t2 = -28362515;

    t2 = (x9!=((x10^x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = UINT8_MAX;
	static volatile uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;

    t3 = (x13!=((x14^x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MAX;
	static int8_t x19 = -1;

    t4 = (x17!=((x18^x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	int16_t x22 = INT16_MAX;
	static int16_t x23 = 2365;
	int16_t x24 = INT16_MAX;

    t5 = (x21!=((x22^x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int16_t x28 = INT16_MIN;

    t6 = (x25!=((x26^x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x29 = -2792;
	static volatile int8_t x30 = INT8_MIN;
	volatile int32_t x31 = 31309;
	int16_t x32 = 470;
	volatile int32_t t7 = -30267;

    t7 = (x29!=((x30^x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	int16_t x34 = 11;
	static volatile uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 1LLU;
	volatile int32_t t8 = 1892;

    t8 = (x33!=((x34^x35)<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint16_t x38 = 1U;
	int16_t x39 = 12;
	static int32_t t9 = 3;

    t9 = (x37!=((x38^x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	int64_t x42 = -44339927457LL;
	int16_t x43 = -350;
	static int64_t x44 = INT64_MIN;

    t10 = (x41!=((x42^x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x46 = INT8_MIN;
	volatile uint16_t x47 = 0U;
	int8_t x48 = INT8_MAX;

    t11 = (x45!=((x46^x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 166933U;
	int8_t x50 = -1;
	int16_t x51 = -1;
	int8_t x52 = 24;

    t12 = (x49!=((x50^x51)<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = 1;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = 13U;
	static int32_t t13 = -8656571;

    t13 = (x53!=((x54^x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	volatile int8_t x59 = INT8_MIN;

    t14 = (x57!=((x58^x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -9767;
	static int8_t x62 = 20;
	static int32_t x63 = INT32_MAX;
	uint8_t x64 = 2U;
	volatile int32_t t15 = -2;

    t15 = (x61!=((x62^x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	static int64_t x68 = 70083119720041LL;
	int32_t t16 = 1069;

    t16 = (x65!=((x66^x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile uint32_t x70 = 47495U;
	int16_t x71 = -1;
	int32_t x72 = -85452;
	int32_t t17 = 299172585;

    t17 = (x69!=((x70^x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 1230;
	int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 72637038;

    t18 = (x73!=((x74^x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 18282629786514865LL;
	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = 73U;
	int8_t x80 = INT8_MAX;

    t19 = (x77!=((x78^x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	uint64_t x82 = 989869945487LLU;
	int16_t x83 = -1;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -1985328;

    t20 = (x81!=((x82^x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 144U;
	int32_t x86 = INT32_MAX;
	static volatile int64_t x87 = INT64_MIN;
	static volatile int64_t x88 = -1LL;
	int32_t t21 = 8;

    t21 = (x85!=((x86^x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	uint16_t x91 = 4039U;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -102;

    t22 = (x89!=((x90^x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 3U;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -235487807676674LL;
	static int8_t x96 = -50;
	volatile int32_t t23 = -18;

    t23 = (x93!=((x94^x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = 2646U;
	volatile int32_t x99 = -1;
	static uint16_t x100 = 103U;
	int32_t t24 = -897;

    t24 = (x97!=((x98^x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -126753919;
	int64_t x103 = INT64_MAX;
	int8_t x104 = INT8_MIN;

    t25 = (x101!=((x102^x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x106 = UINT64_MAX;
	int16_t x107 = 224;
	static volatile int16_t x108 = -9679;

    t26 = (x105!=((x106^x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	uint8_t x110 = 44U;
	uint8_t x112 = 22U;
	volatile int32_t t27 = -186873;

    t27 = (x109!=((x110^x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 6;
	int16_t x114 = -1;
	int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t28 = -25;

    t28 = (x113!=((x114^x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MIN;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 2380;

    t29 = (x117!=((x118^x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = -1;
	int16_t x124 = INT16_MIN;
	static int32_t t30 = -230162044;

    t30 = (x121!=((x122^x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static volatile int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;

    t31 = (x125!=((x126^x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -151338710;

    t32 = (x129!=((x130^x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x135 = INT16_MIN;
	int16_t x136 = -33;
	volatile int32_t t33 = -82053033;

    t33 = (x133!=((x134^x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = -1;
	int32_t t34 = -67467;

    t34 = (x137!=((x138^x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = -240882902;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -139;

    t35 = (x141!=((x142^x143)<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MAX;
	static int32_t x146 = -9247865;
	int16_t x148 = 447;
	volatile int32_t t36 = -72197233;

    t36 = (x145!=((x146^x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	uint16_t x150 = 22U;
	volatile int64_t x151 = INT64_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -428;

    t37 = (x149!=((x150^x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	int64_t x155 = -282603088LL;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile int32_t t38 = 133593722;

    t38 = (x153!=((x154^x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 15U;
	volatile int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int32_t t39 = -62749;

    t39 = (x157!=((x158^x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x161 = -78777610816299LL;
	int32_t x162 = INT32_MAX;
	static uint8_t x163 = UINT8_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = 62664274;

    t40 = (x161!=((x162^x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x168 = -1;
	int32_t t41 = 24992;

    t41 = (x165!=((x166^x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -10571;
	static int64_t x171 = -90544487LL;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 4;

    t42 = (x169!=((x170^x171)<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -3;
	static uint16_t x174 = UINT16_MAX;
	uint8_t x175 = UINT8_MAX;
	uint32_t x176 = UINT32_MAX;

    t43 = (x173!=((x174^x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x178 = 77LLU;
	int8_t x179 = INT8_MIN;
	volatile uint64_t x180 = UINT64_MAX;

    t44 = (x177!=((x178^x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MAX;
	int8_t x184 = -1;
	int32_t t45 = -1625;

    t45 = (x181!=((x182^x183)<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	uint8_t x186 = 24U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 317488;

    t46 = (x185!=((x186^x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = 2070799475842LL;
	uint8_t x190 = 3U;
	static uint8_t x191 = 3U;
	int32_t x192 = -1;

    t47 = (x189!=((x190^x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -1;

    t48 = (x193!=((x194^x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MAX;
	static int8_t x199 = INT8_MIN;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 60812228;

    t49 = (x197!=((x198^x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MAX;
	static volatile int8_t x203 = INT8_MAX;
	uint16_t x204 = 4646U;
	volatile int32_t t50 = 0;

    t50 = (x201!=((x202^x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x205 = UINT64_MAX;
	int64_t x206 = 2471953573LL;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -1;

    t51 = (x205!=((x206^x207)<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 297LL;
	static int64_t x210 = -1LL;
	volatile int64_t x212 = INT64_MIN;

    t52 = (x209!=((x210^x211)<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MAX;
	int16_t x216 = 31;
	int32_t t53 = 1092182;

    t53 = (x213!=((x214^x215)<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -436016353;
	static volatile int32_t t54 = -2924730;

    t54 = (x217!=((x218^x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = -1878;
	int8_t x223 = 60;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = 115108222;

    t55 = (x221!=((x222^x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x226 = INT64_MAX;
	int32_t x227 = -515000336;
	int8_t x228 = INT8_MIN;

    t56 = (x225!=((x226^x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = UINT64_MAX;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -28190757;

    t57 = (x229!=((x230^x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = 7480;
	int8_t x236 = 13;
	int32_t t58 = -6465174;

    t58 = (x233!=((x234^x235)<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	static volatile uint8_t x238 = UINT8_MAX;
	uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = -2;
	volatile int32_t t59 = -45862489;

    t59 = (x237!=((x238^x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MAX;
	int8_t x243 = 3;
	int32_t x244 = INT32_MIN;

    t60 = (x241!=((x242^x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 20309676U;
	int32_t x247 = INT32_MIN;
	int32_t x248 = -1;
	volatile int32_t t61 = -4113;

    t61 = (x245!=((x246^x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	static int64_t x252 = INT64_MIN;
	int32_t t62 = 153;

    t62 = (x249!=((x250^x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	volatile int32_t x254 = INT32_MIN;
	volatile int64_t x255 = 2131465081172569384LL;
	int32_t x256 = INT32_MIN;

    t63 = (x253!=((x254^x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -802;
	static uint16_t x259 = 3U;
	uint64_t x260 = 11211021473496317LLU;
	volatile int32_t t64 = 352;

    t64 = (x257!=((x258^x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	static volatile int8_t x262 = -1;

    t65 = (x261!=((x262^x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = 20945U;
	static int64_t x266 = -10392471LL;
	static int32_t x267 = INT32_MIN;
	int8_t x268 = 0;
	volatile int32_t t66 = 5583;

    t66 = (x265!=((x266^x267)<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x270 = 48U;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -6926092610870544LL;
	int32_t t67 = -70961282;

    t67 = (x269!=((x270^x271)<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MAX;
	volatile uint32_t x274 = 9U;
	static int16_t x275 = INT16_MIN;
	static volatile int8_t x276 = 0;
	static int32_t t68 = -558144;

    t68 = (x273!=((x274^x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	int32_t x279 = -1;
	int32_t t69 = 252097782;

    t69 = (x277!=((x278^x279)<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	uint8_t x283 = 1U;
	uint64_t x284 = 1452964LLU;

    t70 = (x281!=((x282^x283)<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -77725419578562LL;
	int32_t t71 = 3951168;

    t71 = (x285!=((x286^x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MAX;
	int64_t x290 = 3040867472LL;
	int64_t x291 = 17582811836585895LL;
	volatile int32_t t72 = -56;

    t72 = (x289!=((x290^x291)<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MIN;
	int64_t x295 = -1LL;
	volatile int16_t x296 = 1;

    t73 = (x293!=((x294^x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = 1U;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;

    t74 = (x297!=((x298^x299)<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x302 = 6724U;
	int8_t x303 = 2;
	static uint8_t x304 = 19U;
	volatile int32_t t75 = -824;

    t75 = (x301!=((x302^x303)<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = UINT8_MAX;
	uint8_t x308 = 15U;
	static volatile int32_t t76 = -209737345;

    t76 = (x305!=((x306^x307)<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x309 = -1;
	uint32_t x310 = 10715U;
	static int8_t x311 = INT8_MIN;

    t77 = (x309!=((x310^x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = 5171U;
	int8_t x314 = INT8_MIN;
	int8_t x315 = -34;
	int32_t t78 = -4;

    t78 = (x313!=((x314^x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x318 = 341561;
	int16_t x319 = -1;
	static uint8_t x320 = 123U;
	int32_t t79 = 4;

    t79 = (x317!=((x318^x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 13U;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -181692;

    t80 = (x321!=((x322^x323)<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 11229205326LLU;
	int8_t x326 = -4;
	volatile uint8_t x327 = UINT8_MAX;
	static volatile int16_t x328 = 2;
	volatile int32_t t81 = 5;

    t81 = (x325!=((x326^x327)<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -70LL;
	volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = 175477527;

    t82 = (x329!=((x330^x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	int64_t x334 = 610LL;
	static int32_t x335 = 104026;
	int32_t t83 = 0;

    t83 = (x333!=((x334^x335)<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = 33594779866LL;
	int64_t x338 = -1LL;
	static uint8_t x339 = 26U;
	static int64_t x340 = -1LL;

    t84 = (x337!=((x338^x339)<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -247;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	int16_t x344 = 3;
	volatile int32_t t85 = 1;

    t85 = (x341!=((x342^x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = 102U;
	uint64_t x346 = UINT64_MAX;
	volatile int16_t x348 = 778;
	int32_t t86 = -303869;

    t86 = (x345!=((x346^x347)<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	int32_t x350 = 6075;
	static uint64_t x351 = 4325335304955LLU;
	uint32_t x352 = 13U;
	volatile int32_t t87 = -110;

    t87 = (x349!=((x350^x351)<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 0U;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = 20372584610645LL;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t88 = 53;

    t88 = (x353!=((x354^x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 1931215627902338LL;
	int16_t x358 = 5764;
	uint16_t x359 = UINT16_MAX;
	volatile uint32_t x360 = 39557924U;
	volatile int32_t t89 = 7;

    t89 = (x357!=((x358^x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -1;
	int8_t x363 = 6;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 408270;

    t90 = (x361!=((x362^x363)<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x366 = -1;
	int64_t x368 = 38298563911LL;
	volatile int32_t t91 = 81;

    t91 = (x365!=((x366^x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = 10;
	int16_t x370 = 3200;
	static int64_t x371 = INT64_MIN;
	static int64_t x372 = INT64_MIN;

    t92 = (x369!=((x370^x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 140045800;
	int8_t x374 = -1;
	uint64_t x375 = 9LLU;
	int32_t t93 = -204567;

    t93 = (x373!=((x374^x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 28496447LLU;
	uint16_t x379 = UINT16_MAX;
	int32_t t94 = -7;

    t94 = (x377!=((x378^x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	volatile uint16_t x382 = 138U;
	static int64_t x383 = 991870386145988068LL;
	int32_t t95 = 63066;

    t95 = (x381!=((x382^x383)<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	uint64_t x386 = UINT64_MAX;
	static int64_t x387 = INT64_MAX;
	volatile uint32_t x388 = 164164U;
	int32_t t96 = -786;

    t96 = (x385!=((x386^x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x389 = INT8_MIN;
	static int8_t x390 = INT8_MIN;
	static int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = 6459741;

    t97 = (x389!=((x390^x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = INT16_MAX;
	static uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 2318;

    t98 = (x393!=((x394^x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 0U;
	volatile int8_t x398 = -14;
	int16_t x399 = INT16_MIN;
	static volatile int32_t x400 = -1;

    t99 = (x397!=((x398^x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 30U;
	uint8_t x402 = 0U;
	uint8_t x403 = UINT8_MAX;
	int16_t x404 = 30;
	volatile int32_t t100 = 6124948;

    t100 = (x401!=((x402^x403)<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -56;
	volatile uint16_t x406 = UINT16_MAX;
	volatile int16_t x408 = 893;
	int32_t t101 = 15047;

    t101 = (x405!=((x406^x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = -718LL;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -5LL;

    t102 = (x409!=((x410^x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = 31LL;
	static uint64_t x415 = UINT64_MAX;
	static volatile int32_t t103 = -93;

    t103 = (x413!=((x414^x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	uint16_t x420 = 1460U;
	int32_t t104 = -844;

    t104 = (x417!=((x418^x419)<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	volatile int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MAX;
	volatile int32_t t105 = 1;

    t105 = (x421!=((x422^x423)<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x426 = 0U;
	uint8_t x428 = UINT8_MAX;
	int32_t t106 = 134;

    t106 = (x425!=((x426^x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x431 = 4U;
	volatile int32_t t107 = 25;

    t107 = (x429!=((x430^x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x433 = 111LLU;
	int8_t x436 = 1;
	int32_t t108 = -408;

    t108 = (x433!=((x434^x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int64_t x438 = 340497LL;
	int8_t x439 = -1;

    t109 = (x437!=((x438^x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = 236836729433020LL;
	volatile int8_t x444 = INT8_MIN;
	static volatile int32_t t110 = 5844;

    t110 = (x441!=((x442^x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -1;
	int32_t x446 = INT32_MAX;
	uint64_t x447 = 21377926793LLU;
	static int64_t x448 = -997105938221597LL;
	volatile int32_t t111 = 24;

    t111 = (x445!=((x446^x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x451 = -1;
	volatile int8_t x452 = INT8_MAX;

    t112 = (x449!=((x450^x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MIN;
	int8_t x454 = -1;
	int8_t x455 = INT8_MAX;
	int32_t t113 = -47;

    t113 = (x453!=((x454^x455)<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = -1;
	uint64_t x459 = 50104044422513274LLU;
	static volatile int64_t x460 = INT64_MIN;
	static volatile int32_t t114 = -552;

    t114 = (x457!=((x458^x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 6LL;
	int8_t x462 = -1;
	int8_t x463 = 1;
	static uint32_t x464 = 242U;
	static int32_t t115 = 1160;

    t115 = (x461!=((x462^x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = -11;
	int8_t x467 = 9;

    t116 = (x465!=((x466^x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -13216;
	uint64_t x470 = UINT64_MAX;
	uint16_t x472 = 27974U;
	volatile int32_t t117 = 20554;

    t117 = (x469!=((x470^x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	int32_t x474 = INT32_MAX;
	int32_t x475 = INT32_MAX;
	uint16_t x476 = 4U;
	static int32_t t118 = 5076768;

    t118 = (x473!=((x474^x475)<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 6590U;
	uint64_t x480 = UINT64_MAX;
	int32_t t119 = -19982233;

    t119 = (x477!=((x478^x479)<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 26827733732051LLU;
	uint64_t x483 = 13LLU;
	uint32_t x484 = UINT32_MAX;

    t120 = (x481!=((x482^x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 16388863383LL;
	uint8_t x487 = UINT8_MAX;
	static uint32_t x488 = 126792U;
	static volatile int32_t t121 = -1321;

    t121 = (x485!=((x486^x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x489 = INT32_MAX;
	int64_t x491 = -26774LL;
	int16_t x492 = 2;

    t122 = (x489!=((x490^x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 1949U;
	int8_t x495 = INT8_MIN;
	volatile int32_t t123 = 91;

    t123 = (x493!=((x494^x495)<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int64_t x498 = 112110326LL;
	volatile int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MAX;

    t124 = (x497!=((x498^x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x503 = 6948514;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = -476318052;

    t125 = (x501!=((x502^x503)<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x505 = INT64_MAX;
	volatile int64_t x506 = INT64_MIN;
	uint8_t x507 = 0U;
	static int64_t x508 = INT64_MIN;
	int32_t t126 = 1727;

    t126 = (x505!=((x506^x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -1;
	static uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 10U;
	uint64_t x512 = 22172LLU;

    t127 = (x509!=((x510^x511)<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = INT8_MAX;
	uint64_t x514 = 15515644LLU;
	int16_t x515 = -1479;
	int16_t x516 = INT16_MAX;

    t128 = (x513!=((x514^x515)<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	static uint64_t x518 = 486LLU;
	int32_t x519 = 13;
	uint8_t x520 = 11U;

    t129 = (x517!=((x518^x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = INT8_MIN;
	static int8_t x522 = INT8_MAX;
	int8_t x523 = INT8_MAX;
	static uint8_t x524 = UINT8_MAX;
	int32_t t130 = -2358;

    t130 = (x521!=((x522^x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	volatile uint32_t x526 = UINT32_MAX;
	int64_t x527 = INT64_MIN;
	int8_t x528 = INT8_MIN;
	int32_t t131 = -20130;

    t131 = (x525!=((x526^x527)<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = -51;
	static int64_t x532 = -210LL;

    t132 = (x529!=((x530^x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = 0U;
	int32_t x535 = INT32_MAX;
	int32_t x536 = INT32_MIN;
	int32_t t133 = 3108147;

    t133 = (x533!=((x534^x535)<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	uint32_t x538 = 0U;
	int64_t x539 = INT64_MAX;
	static volatile int16_t x540 = INT16_MAX;
	int32_t t134 = -69867;

    t134 = (x537!=((x538^x539)<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 68053997335LLU;
	volatile int64_t x542 = INT64_MIN;
	uint16_t x543 = 29259U;
	volatile int32_t t135 = 336604747;

    t135 = (x541!=((x542^x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint8_t x546 = 3U;
	volatile int64_t x547 = 6988930604428940LL;
	int8_t x548 = INT8_MAX;

    t136 = (x545!=((x546^x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 212074LLU;
	int16_t x550 = -62;
	uint64_t x551 = 218728302LLU;
	int16_t x552 = INT16_MIN;
	int32_t t137 = -495581;

    t137 = (x549!=((x550^x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 2122837922U;
	int64_t x554 = INT64_MAX;
	int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MIN;

    t138 = (x553!=((x554^x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MAX;
	volatile uint32_t x558 = 712U;
	uint64_t x559 = UINT64_MAX;
	static uint64_t x560 = 4635LLU;

    t139 = (x557!=((x558^x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	static int16_t x562 = -1;
	int16_t x563 = INT16_MAX;
	int8_t x564 = INT8_MIN;
	volatile int32_t t140 = 35367;

    t140 = (x561!=((x562^x563)<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 321275U;
	int8_t x566 = 11;
	int32_t x567 = 678;
	static uint32_t x568 = UINT32_MAX;
	int32_t t141 = 252450;

    t141 = (x565!=((x566^x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -1;
	uint16_t x570 = 408U;
	int8_t x571 = INT8_MIN;
	static int32_t x572 = INT32_MIN;
	volatile int32_t t142 = -211330104;

    t142 = (x569!=((x570^x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	uint8_t x574 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = UINT8_MAX;
	static int32_t t143 = -5650784;

    t143 = (x573!=((x574^x575)<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1LL;
	int16_t x578 = INT16_MIN;
	uint64_t x579 = 71221963428881352LLU;
	static int8_t x580 = -1;
	int32_t t144 = -29;

    t144 = (x577!=((x578^x579)<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x583 = INT32_MIN;
	static volatile uint8_t x584 = 50U;
	volatile int32_t t145 = 51;

    t145 = (x581!=((x582^x583)<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 333441LLU;
	int16_t x588 = -992;

    t146 = (x585!=((x586^x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MAX;
	int8_t x590 = 0;
	int64_t x591 = -73LL;
	int32_t x592 = 225337453;
	static volatile int32_t t147 = 3497999;

    t147 = (x589!=((x590^x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = -1492;
	int32_t x594 = INT32_MAX;
	uint32_t x595 = UINT32_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = 2621163;

    t148 = (x593!=((x594^x595)<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 7U;
	uint64_t x598 = 988572369498491LLU;
	volatile int32_t x600 = -28266420;
	static volatile int32_t t149 = -533;

    t149 = (x597!=((x598^x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MIN;
	static int64_t x604 = INT64_MIN;
	static volatile int32_t t150 = -5010;

    t150 = (x601!=((x602^x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = -1041;
	int32_t x606 = INT32_MIN;
	uint16_t x607 = UINT16_MAX;
	uint16_t x608 = 1920U;
	static int32_t t151 = -3971837;

    t151 = (x605!=((x606^x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x609 = UINT16_MAX;
	int32_t x610 = 2437948;
	int8_t x612 = 0;

    t152 = (x609!=((x610^x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static int64_t x614 = INT64_MIN;
	uint32_t x615 = 43207U;
	static uint32_t x616 = 473U;
	volatile int32_t t153 = 40;

    t153 = (x613!=((x614^x615)<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = INT8_MIN;
	volatile int32_t x619 = INT32_MIN;
	volatile int32_t x620 = INT32_MIN;
	volatile int32_t t154 = 7229;

    t154 = (x617!=((x618^x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -44;
	int16_t x623 = INT16_MIN;
	int8_t x624 = 17;
	volatile int32_t t155 = -16796;

    t155 = (x621!=((x622^x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int16_t x628 = INT16_MIN;
	int32_t t156 = -63539;

    t156 = (x625!=((x626^x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x630 = 1021665;
	volatile int32_t t157 = 5051320;

    t157 = (x629!=((x630^x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = UINT32_MAX;
	int32_t x636 = -4397;
	int32_t t158 = -1;

    t158 = (x633!=((x634^x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -1;
	uint16_t x638 = 705U;
	uint16_t x639 = 16U;
	int64_t x640 = 0LL;
	volatile int32_t t159 = -1;

    t159 = (x637!=((x638^x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x642 = 113283473711053233LLU;
	int8_t x643 = INT8_MIN;
	volatile int16_t x644 = INT16_MAX;

    t160 = (x641!=((x642^x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x646 = 1475;
	int32_t x647 = INT32_MAX;
	uint32_t x648 = 5717U;
	int32_t t161 = -10043;

    t161 = (x645!=((x646^x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	static volatile uint8_t x650 = 1U;
	volatile uint64_t x651 = UINT64_MAX;
	uint32_t x652 = 2U;
	volatile int32_t t162 = 9;

    t162 = (x649!=((x650^x651)<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 4U;
	uint8_t x654 = 24U;
	volatile uint64_t x655 = UINT64_MAX;
	static volatile int32_t t163 = 9933568;

    t163 = (x653!=((x654^x655)<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x657 = UINT64_MAX;
	static volatile int16_t x658 = 12;
	static uint32_t x659 = UINT32_MAX;
	int16_t x660 = INT16_MIN;
	static int32_t t164 = 4;

    t164 = (x657!=((x658^x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	uint32_t x662 = 69502U;
	int32_t x663 = INT32_MIN;
	int32_t x664 = 111664;

    t165 = (x661!=((x662^x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x666 = INT16_MIN;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = -2;
	volatile int32_t t166 = -654;

    t166 = (x665!=((x666^x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 255677U;
	static int16_t x670 = INT16_MAX;
	int64_t x671 = INT64_MIN;
	int32_t t167 = -4;

    t167 = (x669!=((x670^x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = INT64_MIN;
	static volatile int32_t x674 = -53;
	int64_t x675 = -345286855819LL;
	int32_t x676 = INT32_MIN;

    t168 = (x673!=((x674^x675)<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int32_t t169 = 208;

    t169 = (x677!=((x678^x679)<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 3340;
	static int16_t x682 = 0;
	static uint16_t x683 = UINT16_MAX;
	uint16_t x684 = 31U;
	int32_t t170 = -1;

    t170 = (x681!=((x682^x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = UINT32_MAX;
	uint64_t x686 = 221LLU;
	int8_t x687 = INT8_MAX;
	int32_t t171 = 623212;

    t171 = (x685!=((x686^x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 1384U;
	int16_t x690 = INT16_MIN;
	static int64_t x691 = -1LL;
	int8_t x692 = INT8_MIN;
	int32_t t172 = 8;

    t172 = (x689!=((x690^x691)<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 0;
	volatile int16_t x695 = 5945;
	int16_t x696 = 105;
	int32_t t173 = 1518077;

    t173 = (x693!=((x694^x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	int32_t x698 = 100803292;
	static volatile int32_t x700 = 1875;

    t174 = (x697!=((x698^x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	int32_t x702 = -2038880;
	volatile int8_t x703 = -22;
	int8_t x704 = INT8_MIN;
	int32_t t175 = 10532113;

    t175 = (x701!=((x702^x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	int8_t x706 = -1;
	int32_t t176 = -989567;

    t176 = (x705!=((x706^x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = 0;
	int64_t x710 = -1LL;
	static volatile int32_t x712 = INT32_MIN;
	int32_t t177 = 23242307;

    t177 = (x709!=((x710^x711)<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = -1;
	static uint32_t x715 = 108601310U;
	uint8_t x716 = 6U;
	int32_t t178 = 1;

    t178 = (x713!=((x714^x715)<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = -27;
	int32_t x718 = -30986333;
	uint8_t x719 = 1U;
	int8_t x720 = INT8_MIN;
	int32_t t179 = 14693870;

    t179 = (x717!=((x718^x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 117U;
	volatile int32_t x722 = INT32_MIN;
	uint64_t x724 = 1052LLU;
	volatile int32_t t180 = -10267269;

    t180 = (x721!=((x722^x723)<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	static volatile uint16_t x727 = 745U;
	uint16_t x728 = UINT16_MAX;
	int32_t t181 = -15094065;

    t181 = (x725!=((x726^x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 1U;
	volatile int64_t x730 = -182LL;
	volatile uint64_t x731 = 3826301LLU;
	int16_t x732 = 1;
	volatile int32_t t182 = -3846;

    t182 = (x729!=((x730^x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	volatile uint32_t x734 = 29134557U;
	int32_t x735 = INT32_MAX;
	static volatile uint64_t x736 = 38081946107LLU;
	int32_t t183 = 18576;

    t183 = (x733!=((x734^x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -9921;
	int8_t x739 = INT8_MAX;
	int16_t x740 = -74;
	int32_t t184 = -1939132;

    t184 = (x737!=((x738^x739)<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x743 = 3271U;
	volatile int8_t x744 = -1;
	int32_t t185 = -1067;

    t185 = (x741!=((x742^x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 0;
	int32_t x747 = INT32_MIN;
	static int16_t x748 = INT16_MAX;
	volatile int32_t t186 = 24;

    t186 = (x745!=((x746^x747)<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 15667269U;
	int64_t x750 = -2LL;
	static volatile uint16_t x751 = UINT16_MAX;
	uint16_t x752 = 2U;
	static volatile int32_t t187 = 440516929;

    t187 = (x749!=((x750^x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = UINT8_MAX;
	int16_t x754 = INT16_MIN;
	uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 84005155U;
	int32_t t188 = -866000692;

    t188 = (x753!=((x754^x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 118074887U;
	volatile int64_t x758 = INT64_MAX;
	int64_t x759 = -26812972729426768LL;
	int64_t x760 = INT64_MAX;
	int32_t t189 = -152469;

    t189 = (x757!=((x758^x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = 7666U;
	static uint32_t x762 = 6U;
	static int8_t x763 = INT8_MAX;
	int16_t x764 = INT16_MIN;
	int32_t t190 = 2013;

    t190 = (x761!=((x762^x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = -1;
	int32_t x766 = -1;
	int64_t x768 = 568920186976997LL;
	int32_t t191 = 13301739;

    t191 = (x765!=((x766^x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 542;
	int64_t x770 = 246191LL;
	int8_t x771 = INT8_MAX;
	volatile int32_t x772 = -147777904;
	volatile int32_t t192 = 0;

    t192 = (x769!=((x770^x771)<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = 104862LL;
	volatile int32_t x774 = -7;
	static int64_t x775 = INT64_MIN;
	int32_t t193 = 0;

    t193 = (x773!=((x774^x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 15094U;
	uint32_t x780 = 3822U;
	int32_t t194 = -6;

    t194 = (x777!=((x778^x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 82812U;
	static uint32_t x782 = 44666U;
	int8_t x783 = INT8_MIN;
	int32_t x784 = 152660;
	volatile int32_t t195 = -807;

    t195 = (x781!=((x782^x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x786 = 8;
	int16_t x787 = INT16_MIN;
	uint16_t x788 = 2U;
	volatile int32_t t196 = 1361;

    t196 = (x785!=((x786^x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = 42U;
	volatile int64_t x792 = INT64_MIN;
	int32_t t197 = -18400596;

    t197 = (x789!=((x790^x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = -13;
	int16_t x795 = -38;
	static volatile int16_t x796 = -48;
	int32_t t198 = 1229;

    t198 = (x793!=((x794^x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	int32_t x799 = INT32_MIN;
	uint8_t x800 = UINT8_MAX;
	int32_t t199 = -31806167;

    t199 = (x797!=((x798^x799)<=x800));

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

