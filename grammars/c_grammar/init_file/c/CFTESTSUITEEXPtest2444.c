
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

int8_t x8 = INT8_MAX;
int32_t x12 = 20179;
uint32_t x19 = 310U;
uint32_t x24 = 34U;
static int16_t x35 = -6;
uint32_t x36 = 39834347U;
int32_t t8 = 3660931;
int8_t x41 = INT8_MIN;
volatile int16_t x43 = -4;
int32_t t11 = 115689;
static uint64_t x53 = 1985512LLU;
int32_t t13 = 25;
int32_t t14 = 2223735;
static volatile int8_t x63 = INT8_MAX;
volatile int64_t x64 = INT64_MAX;
volatile uint64_t x67 = UINT64_MAX;
volatile int8_t x70 = -1;
static volatile int64_t x71 = -21796520820LL;
int32_t x75 = -1;
static int64_t x83 = -9LL;
static volatile int8_t x84 = 10;
static int32_t x86 = INT32_MIN;
static int8_t x92 = INT8_MIN;
static volatile int32_t t23 = -59618;
volatile uint16_t x97 = 29724U;
int32_t x102 = -1;
int64_t x103 = -1LL;
int32_t t25 = -209606;
int8_t x106 = INT8_MIN;
int8_t x110 = -1;
uint8_t x111 = 66U;
int32_t t28 = -93693;
int32_t t29 = 50820561;
int64_t x121 = -1LL;
int16_t x127 = -1;
int32_t x139 = -60;
volatile int32_t t35 = 319396;
volatile int32_t t36 = -606;
volatile uint8_t x155 = 92U;
static int32_t t39 = 62;
int64_t x168 = -1LL;
int16_t x171 = -619;
int8_t x172 = INT8_MAX;
int32_t t42 = 61536;
int8_t x174 = 2;
int64_t x176 = INT64_MAX;
int16_t x190 = INT16_MIN;
int32_t x195 = 78;
uint16_t x196 = 6U;
volatile int32_t t48 = 42467;
static int32_t x197 = 3792;
int32_t t49 = -85;
volatile uint8_t x211 = 2U;
int16_t x224 = 800;
int32_t t55 = -637712636;
int8_t x227 = 0;
volatile int32_t t57 = -14;
uint32_t x233 = 3U;
int16_t x234 = -1;
int32_t x237 = -94756;
int16_t x239 = 747;
int16_t x241 = INT16_MAX;
static uint16_t x243 = UINT16_MAX;
int8_t x247 = INT8_MAX;
volatile int32_t t61 = -112320165;
uint64_t x250 = UINT64_MAX;
volatile int8_t x253 = INT8_MIN;
int64_t x261 = INT64_MAX;
int16_t x263 = INT16_MIN;
int16_t x264 = -60;
uint16_t x268 = UINT16_MAX;
static volatile int64_t x269 = -1LL;
uint64_t x274 = UINT64_MAX;
static int8_t x281 = -1;
int8_t x289 = INT8_MIN;
uint64_t x299 = 3297705LLU;
volatile uint8_t x300 = UINT8_MAX;
static uint16_t x308 = 122U;
int32_t x314 = 741930;
int8_t x316 = 0;
uint16_t x319 = UINT16_MAX;
int32_t x329 = -1;
static volatile int32_t t83 = -356892961;
volatile uint16_t x338 = 1124U;
volatile int32_t t84 = -109439;
static int8_t x343 = 2;
uint64_t x346 = UINT64_MAX;
uint16_t x347 = 26U;
int64_t x348 = -31972067628345792LL;
int8_t x356 = -1;
static int16_t x359 = -1;
volatile int64_t x361 = INT64_MIN;
static uint32_t x374 = 420367387U;
volatile uint64_t x380 = 26652128811LLU;
int8_t x383 = INT8_MAX;
uint64_t x384 = 5538849763179LLU;
int32_t t96 = 29900;
volatile int16_t x390 = INT16_MIN;
volatile int8_t x395 = -1;
int32_t x397 = INT32_MAX;
uint32_t x398 = UINT32_MAX;
static int32_t t100 = -6986379;
int16_t x409 = INT16_MIN;
volatile int32_t t105 = 3210435;
int8_t x429 = -1;
static uint32_t x433 = 885797456U;
static int32_t x435 = INT32_MAX;
int64_t x437 = -1LL;
uint32_t x438 = UINT32_MAX;
static volatile int32_t t110 = -972455;
static int16_t x470 = -7458;
int32_t t117 = -182172;
uint16_t x473 = UINT16_MAX;
uint8_t x493 = UINT8_MAX;
volatile int32_t t124 = -115808;
static volatile int16_t x512 = 15971;
int8_t x515 = -1;
volatile int32_t t130 = 8057;
int8_t x531 = -1;
int64_t x539 = INT64_MIN;
int64_t x540 = 1765LL;
static int64_t x541 = INT64_MIN;
uint16_t x548 = 1648U;
volatile int32_t t136 = 14644552;
volatile uint8_t x553 = 12U;
uint32_t x554 = 9U;
int8_t x562 = INT8_MAX;
int32_t t140 = -24492013;
uint64_t x568 = 3405LLU;
int32_t t141 = 805896520;
volatile int32_t x575 = INT32_MIN;
int64_t x576 = -1LL;
int32_t t143 = 19192072;
static int16_t x579 = -1;
volatile int32_t t144 = -122178;
int32_t t145 = -1;
uint8_t x599 = UINT8_MAX;
volatile int32_t t149 = 508;
int64_t x601 = -1LL;
int64_t x602 = INT64_MAX;
volatile int32_t x607 = INT32_MIN;
static int32_t x616 = INT32_MIN;
uint8_t x620 = 3U;
int64_t x623 = INT64_MIN;
int16_t x627 = INT16_MAX;
int64_t x644 = INT64_MIN;
static volatile uint64_t x657 = 12620376003442047LLU;
static volatile int16_t x660 = INT16_MIN;
int32_t t164 = 26695867;
volatile int32_t x664 = -1;
volatile uint8_t x676 = 0U;
volatile uint8_t x680 = 113U;
static int32_t t170 = -4931373;
static int8_t x689 = INT8_MIN;
uint16_t x692 = UINT16_MAX;
int32_t t172 = 14585;
int16_t x694 = 6721;
int32_t x696 = INT32_MAX;
volatile uint16_t x699 = 14U;
static int64_t x700 = INT64_MIN;
volatile int32_t t174 = 75292;
volatile int32_t t175 = -2;
int16_t x707 = INT16_MIN;
int8_t x708 = INT8_MAX;
static int32_t t177 = -5936;
int16_t x713 = INT16_MAX;
static volatile int32_t t178 = 17746;
uint64_t x721 = 836LLU;
static int32_t x725 = -1;
volatile int8_t x733 = -13;
static int32_t t183 = 923278742;
static uint8_t x740 = 3U;
int64_t x752 = INT64_MIN;
int32_t t188 = -15205995;
volatile int32_t t189 = -250958017;
volatile int16_t x763 = -1;
volatile int32_t t190 = -2;
volatile int32_t t191 = 1;
int8_t x773 = INT8_MIN;
int8_t x778 = -4;
int8_t x786 = INT8_MAX;
volatile int16_t x787 = INT16_MAX;
volatile int16_t x789 = INT16_MAX;
int64_t x794 = INT64_MIN;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	uint32_t x2 = 28U;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -34;

    t0 = (x1==((x2|x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	int32_t t1 = 18000;

    t1 = (x5==((x6|x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x9 = 285;
	int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	static volatile int32_t t2 = -563028;

    t2 = (x9==((x10|x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -111894078;

    t3 = (x13==((x14|x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int16_t x18 = INT16_MIN;
	volatile int64_t x20 = -1LL;
	static int32_t t4 = 11950;

    t4 = (x17==((x18|x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -13490;
	static volatile int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 471270865;

    t5 = (x21==((x22|x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = 990;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 0;

    t6 = (x25==((x26|x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = 3U;
	volatile int32_t x31 = INT32_MAX;
	volatile int8_t x32 = INT8_MAX;
	int32_t t7 = -726194444;

    t7 = (x29==((x30|x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = INT16_MAX;
	uint16_t x34 = UINT16_MAX;

    t8 = (x33==((x34|x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	static int32_t x39 = -91484647;
	volatile uint32_t x40 = 16U;
	volatile int32_t t9 = -1;

    t9 = (x37==((x38|x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x42 = INT64_MIN;
	static uint8_t x44 = 42U;
	static volatile int32_t t10 = -9;

    t10 = (x41==((x42|x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = -2LL;
	volatile int64_t x48 = -1LL;

    t11 = (x45==((x46|x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -5467214;

    t12 = (x49==((x50|x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -1;

    t13 = (x53==((x54|x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MIN;

    t14 = (x57==((x58|x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = INT32_MIN;
	int64_t x62 = 1LL;
	static int32_t t15 = -66626194;

    t15 = (x61==((x62|x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MAX;
	int32_t x66 = -835679;
	volatile uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = 0;

    t16 = (x65==((x66|x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -1;
	int64_t x72 = -3355904037LL;
	int32_t t17 = 0;

    t17 = (x69==((x70|x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	uint16_t x74 = 0U;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -3692;

    t18 = (x73==((x74|x75)!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	uint16_t x78 = 2U;
	int8_t x79 = 6;
	int64_t x80 = -1LL;
	static int32_t t19 = 13756;

    t19 = (x77==((x78|x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	volatile int32_t t20 = 416761538;

    t20 = (x81==((x82|x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -2119474068LL;
	volatile int32_t x87 = INT32_MAX;
	static uint32_t x88 = 279U;
	int32_t t21 = -27;

    t21 = (x85==((x86|x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 226823942830420LL;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = 104158127U;
	volatile int32_t t22 = -19557;

    t22 = (x89==((x90|x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	uint32_t x94 = 46U;
	static int16_t x95 = 1;
	uint32_t x96 = 25240563U;

    t23 = (x93==((x94|x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x98 = 1116073541986737LLU;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -730;

    t24 = (x97==((x98|x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 1285;
	uint16_t x104 = 23U;

    t25 = (x101==((x102|x103)!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 7706U;
	uint32_t x107 = 13U;
	static int64_t x108 = -1LL;
	int32_t t26 = -266;

    t26 = (x105==((x106|x107)!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 97366894U;
	static volatile uint16_t x112 = 33U;
	volatile int32_t t27 = -26866;

    t27 = (x109==((x110|x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x113 = -1;
	uint16_t x114 = 23U;
	int16_t x115 = -326;
	uint32_t x116 = UINT32_MAX;

    t28 = (x113==((x114|x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 70U;
	volatile int32_t x120 = -1;

    t29 = (x117==((x118|x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x122 = 8U;
	int16_t x123 = -36;
	uint16_t x124 = 779U;
	int32_t t30 = 1;

    t30 = (x121==((x122|x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	static volatile int64_t x128 = INT64_MIN;
	int32_t t31 = 3;

    t31 = (x125==((x126|x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static volatile int16_t x130 = -1;
	volatile int16_t x131 = -1;
	int64_t x132 = -1LL;
	static int32_t t32 = 180319125;

    t32 = (x129==((x130|x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	uint64_t x134 = 6964370518LLU;
	volatile int32_t x135 = INT32_MAX;
	uint32_t x136 = 23U;
	int32_t t33 = -33480375;

    t33 = (x133==((x134|x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MIN;
	int32_t x140 = 74760376;
	int32_t t34 = 4023;

    t34 = (x137==((x138|x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static int8_t x142 = -14;
	int16_t x143 = -1;
	static volatile uint16_t x144 = 2064U;

    t35 = (x141==((x142|x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	volatile int8_t x146 = -1;
	int64_t x147 = INT64_MIN;
	volatile int32_t x148 = INT32_MAX;

    t36 = (x145==((x146|x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MAX;
	uint16_t x151 = 8U;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t37 = -944140;

    t37 = (x149==((x150|x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = 141367394U;
	static uint16_t x154 = 2U;
	static int32_t x156 = -1;
	int32_t t38 = -10075;

    t38 = (x153==((x154|x155)!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 2003233464U;
	static uint16_t x158 = UINT16_MAX;
	uint32_t x159 = UINT32_MAX;
	static int32_t x160 = INT32_MAX;

    t39 = (x157==((x158|x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 121220795LLU;
	static int64_t x162 = INT64_MIN;
	static int32_t x163 = INT32_MAX;
	volatile int16_t x164 = -3272;
	int32_t t40 = -187;

    t40 = (x161==((x162|x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -30;
	volatile int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	int32_t t41 = -437216445;

    t41 = (x165==((x166|x167)!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	uint32_t x170 = 230848144U;

    t42 = (x169==((x170|x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	volatile int64_t x175 = INT64_MAX;
	static volatile int32_t t43 = -7870;

    t43 = (x173==((x174|x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	static uint8_t x178 = 3U;
	static int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MIN;
	int32_t t44 = -2351;

    t44 = (x177==((x178|x179)!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	static int64_t x182 = 354292856977276135LL;
	volatile int64_t x183 = -1LL;
	static uint64_t x184 = 1592065798486252264LLU;
	volatile int32_t t45 = 2372;

    t45 = (x181==((x182|x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -1328;
	volatile int32_t t46 = 19449;

    t46 = (x185==((x186|x187)!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 106U;
	int8_t x191 = INT8_MAX;
	int64_t x192 = 3358847130LL;
	int32_t t47 = -5;

    t47 = (x189==((x190|x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	volatile uint16_t x194 = UINT16_MAX;

    t48 = (x193==((x194|x195)!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -1LL;
	uint32_t x199 = 85301806U;
	static volatile int32_t x200 = 788327;

    t49 = (x197==((x198|x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int32_t x202 = -1;
	uint64_t x203 = 24563471513LLU;
	volatile int16_t x204 = INT16_MIN;
	int32_t t50 = 1;

    t50 = (x201==((x202|x203)!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = -1;
	int8_t x207 = -1;
	volatile uint16_t x208 = 12923U;
	static volatile int32_t t51 = -8266;

    t51 = (x205==((x206|x207)!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	int64_t x210 = 854741LL;
	static uint32_t x212 = 1U;
	int32_t t52 = -37;

    t52 = (x209==((x210|x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = -241;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 34138;

    t53 = (x213==((x214|x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = 1537729LLU;
	volatile uint32_t x218 = 164U;
	uint16_t x219 = UINT16_MAX;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 11161021;

    t54 = (x217==((x218|x219)!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 0U;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MAX;

    t55 = (x221==((x222|x223)!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x226 = -1;
	int64_t x228 = -1LL;
	volatile int32_t t56 = 67228;

    t56 = (x225==((x226|x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -1LL;
	static uint16_t x230 = 28724U;
	volatile int64_t x231 = INT64_MIN;
	int32_t x232 = 2510;

    t57 = (x229==((x230|x231)!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x235 = -7821;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -1280984;

    t58 = (x233==((x234|x235)!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x238 = -1;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t59 = -111751;

    t59 = (x237==((x238|x239)!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = 3440259;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -684349;

    t60 = (x241==((x242|x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MIN;
	static int32_t x248 = 518213353;

    t61 = (x245==((x246|x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 58U;
	int8_t x251 = INT8_MIN;
	static int64_t x252 = -1LL;
	volatile int32_t t62 = 80;

    t62 = (x249==((x250|x251)!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x254 = -18;
	int64_t x255 = -127462162470252LL;
	int64_t x256 = 55268411LL;
	static int32_t t63 = -1;

    t63 = (x253==((x254|x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = 30;
	volatile int32_t t64 = 55461078;

    t64 = (x257==((x258|x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = 23;
	int32_t t65 = 0;

    t65 = (x261==((x262|x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 22;
	int32_t x266 = INT32_MAX;
	static uint8_t x267 = UINT8_MAX;
	volatile int32_t t66 = -196656071;

    t66 = (x265==((x266|x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	static int64_t x272 = 24LL;
	volatile int32_t t67 = 504;

    t67 = (x269==((x270|x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x275 = -1;
	volatile uint16_t x276 = UINT16_MAX;
	static volatile int32_t t68 = 7137214;

    t68 = (x273==((x274|x275)!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -2;
	volatile uint8_t x278 = 3U;
	volatile int32_t x279 = 1483483;
	int32_t x280 = -743959998;
	int32_t t69 = 120;

    t69 = (x277==((x278|x279)!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = 9255839942447LLU;
	volatile int32_t t70 = -184;

    t70 = (x281==((x282|x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 4U;
	int16_t x286 = INT16_MIN;
	static int8_t x287 = -1;
	int8_t x288 = INT8_MAX;
	int32_t t71 = -57;

    t71 = (x285==((x286|x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -1;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MAX;
	int32_t t72 = -2;

    t72 = (x289==((x290|x291)!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	uint32_t x294 = 30840U;
	int64_t x295 = 20078552LL;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -5611;

    t73 = (x293==((x294|x295)!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int8_t x298 = INT8_MAX;
	volatile int32_t t74 = -1020869852;

    t74 = (x297==((x298|x299)!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MAX;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = INT32_MAX;
	volatile int64_t x304 = 351419389LL;
	volatile int32_t t75 = 586105;

    t75 = (x301==((x302|x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 2U;
	int64_t x306 = -28928LL;
	int32_t x307 = -23;
	int32_t t76 = 45807741;

    t76 = (x305==((x306|x307)!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = 7;
	int32_t t77 = 31667192;

    t77 = (x309==((x310|x311)!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -1LL;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t t78 = -6075303;

    t78 = (x313==((x314|x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = -1;
	uint32_t x318 = 134058921U;
	int32_t x320 = INT32_MIN;
	static int32_t t79 = -4174735;

    t79 = (x317==((x318|x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 25LLU;
	volatile int8_t x322 = INT8_MIN;
	int64_t x323 = 134408996678134LL;
	volatile int8_t x324 = INT8_MAX;
	static int32_t t80 = -460962;

    t80 = (x321==((x322|x323)!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MAX;
	static uint32_t x327 = UINT32_MAX;
	int64_t x328 = INT64_MIN;
	static int32_t t81 = 91807;

    t81 = (x325==((x326|x327)!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x330 = INT16_MIN;
	uint64_t x331 = 1044184192LLU;
	int8_t x332 = -1;
	static int32_t t82 = 160;

    t82 = (x329==((x330|x331)!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 479123151022240LL;
	volatile uint8_t x334 = UINT8_MAX;
	static int16_t x335 = -456;
	int16_t x336 = 6149;

    t83 = (x333==((x334|x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -72148973187782LL;
	volatile int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;

    t84 = (x337==((x338|x339)!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x341 = 7795;
	volatile int8_t x342 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 3;

    t85 = (x341==((x342|x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	volatile int32_t t86 = 114;

    t86 = (x345==((x346|x347)!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 0U;
	int32_t x350 = 58085803;
	static int64_t x351 = -8133LL;
	int32_t x352 = -1;
	static volatile int32_t t87 = 0;

    t87 = (x349==((x350|x351)!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	int8_t x354 = -1;
	int8_t x355 = 5;
	volatile int32_t t88 = -736492;

    t88 = (x353==((x354|x355)!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 477U;
	int8_t x358 = 0;
	int32_t x360 = INT32_MAX;
	int32_t t89 = -3322848;

    t89 = (x357==((x358|x359)!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x362 = -308;
	uint64_t x363 = UINT64_MAX;
	static int8_t x364 = -3;
	volatile int32_t t90 = 259839073;

    t90 = (x361==((x362|x363)!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 1602567;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 154U;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -1827662;

    t91 = (x365==((x366|x367)!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 17684;

    t92 = (x369==((x370|x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -5;
	static uint64_t x375 = 0LLU;
	int32_t x376 = 7;
	int32_t t93 = 22;

    t93 = (x373==((x374|x375)!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 950U;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = 1889564;

    t94 = (x377==((x378|x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = 8U;
	uint16_t x382 = UINT16_MAX;
	int32_t t95 = -52143082;

    t95 = (x381==((x382|x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 7U;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	int64_t x388 = -234659283202805LL;

    t96 = (x385==((x386|x387)!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -79255LL;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 4006072;

    t97 = (x389==((x390|x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 12972648332501LLU;
	int16_t x394 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;
	static int32_t t98 = -26389;

    t98 = (x393==((x394|x395)!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 93U;
	int32_t t99 = -780589360;

    t99 = (x397==((x398|x399)!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	static uint32_t x402 = UINT32_MAX;
	int8_t x403 = -1;
	int8_t x404 = -4;

    t100 = (x401==((x402|x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	static int16_t x406 = -54;
	int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = 31205060;

    t101 = (x405==((x406|x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 1U;
	static uint64_t x411 = 4834LLU;
	int64_t x412 = -1LL;
	int32_t t102 = 144;

    t102 = (x409==((x410|x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	int8_t x414 = INT8_MIN;
	static int16_t x415 = -2593;
	int8_t x416 = -1;
	int32_t t103 = -373;

    t103 = (x413==((x414|x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 1U;
	static volatile int8_t x418 = INT8_MIN;
	uint32_t x419 = 14329U;
	int64_t x420 = -267098013LL;
	volatile int32_t t104 = 1;

    t104 = (x417==((x418|x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -54;
	int16_t x422 = INT16_MAX;
	static volatile uint32_t x423 = UINT32_MAX;
	volatile int32_t x424 = -1;

    t105 = (x421==((x422|x423)!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = UINT16_MAX;
	uint64_t x426 = 973LLU;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -72LL;
	volatile int32_t t106 = 1;

    t106 = (x425==((x426|x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int32_t x431 = 23562;
	volatile int32_t x432 = -1;
	volatile int32_t t107 = -71;

    t107 = (x429==((x430|x431)!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	int64_t x436 = -57162064832LL;
	static volatile int32_t t108 = -15;

    t108 = (x433==((x434|x435)!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x439 = -126974781LL;
	uint8_t x440 = 7U;
	volatile int32_t t109 = -480778;

    t109 = (x437==((x438|x439)!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = INT32_MAX;
	static int8_t x442 = INT8_MAX;
	int64_t x443 = -1LL;
	uint8_t x444 = UINT8_MAX;

    t110 = (x441==((x442|x443)!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = 5632;

    t111 = (x445==((x446|x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = 34043;
	int8_t x451 = INT8_MIN;
	volatile int32_t x452 = INT32_MIN;
	static int32_t t112 = -72875289;

    t112 = (x449==((x450|x451)!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = 17LL;
	uint8_t x454 = 23U;
	uint64_t x455 = 256645LLU;
	uint8_t x456 = 2U;
	static volatile int32_t t113 = 3;

    t113 = (x453==((x454|x455)!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	static int32_t x459 = 555863;
	static volatile int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -19;

    t114 = (x457==((x458|x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 6U;
	int32_t x462 = INT32_MIN;
	static int64_t x463 = 7535329162LL;
	volatile uint16_t x464 = 1U;
	int32_t t115 = -39787;

    t115 = (x461==((x462|x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	volatile uint64_t x466 = 4822521LLU;
	volatile uint16_t x467 = 28319U;
	uint64_t x468 = 6LLU;
	int32_t t116 = -1;

    t116 = (x465==((x466|x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 1;
	int32_t x471 = -3;
	uint32_t x472 = 1188U;

    t117 = (x469==((x470|x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x474 = UINT16_MAX;
	int32_t x475 = -2238756;
	static int64_t x476 = INT64_MIN;
	volatile int32_t t118 = -688484038;

    t118 = (x473==((x474|x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x477 = INT8_MIN;
	static int8_t x478 = -1;
	uint8_t x479 = UINT8_MAX;
	int32_t x480 = -1;
	volatile int32_t t119 = 2199527;

    t119 = (x477==((x478|x479)!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -111;
	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	static uint32_t x484 = 1636U;
	volatile int32_t t120 = 501;

    t120 = (x481==((x482|x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = 607;
	volatile int32_t x486 = -3;
	volatile uint8_t x487 = 97U;
	int16_t x488 = -1;
	volatile int32_t t121 = -14374;

    t121 = (x485==((x486|x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	static int64_t x490 = INT64_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile int16_t x492 = -1;
	volatile int32_t t122 = 115358;

    t122 = (x489==((x490|x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = 14;
	static int64_t x495 = -41519974800092LL;
	static int16_t x496 = INT16_MIN;
	static int32_t t123 = -3;

    t123 = (x493==((x494|x495)!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 17895967LLU;
	uint64_t x498 = 129582145476LLU;
	int64_t x499 = INT64_MAX;
	volatile int64_t x500 = -55302LL;

    t124 = (x497==((x498|x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	static uint8_t x502 = UINT8_MAX;
	uint16_t x503 = 28U;
	uint8_t x504 = UINT8_MAX;
	static int32_t t125 = -119951;

    t125 = (x501==((x502|x503)!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = 3027U;
	int32_t x506 = 29;
	int64_t x507 = 232LL;
	int8_t x508 = INT8_MAX;
	int32_t t126 = 350130;

    t126 = (x505==((x506|x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 0U;
	int64_t x510 = INT64_MAX;
	int8_t x511 = -1;
	static int32_t t127 = -3083880;

    t127 = (x509==((x510|x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 0U;
	static int8_t x514 = INT8_MIN;
	uint8_t x516 = 8U;
	int32_t t128 = -33838025;

    t128 = (x513==((x514|x515)!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	uint32_t x518 = 2104U;
	volatile uint64_t x519 = 4982917795613547335LLU;
	int64_t x520 = 220908529075269LL;
	int32_t t129 = 763863168;

    t129 = (x517==((x518|x519)!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	int16_t x522 = INT16_MAX;
	uint64_t x523 = 3679144472009317LLU;
	int8_t x524 = INT8_MIN;

    t130 = (x521==((x522|x523)!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = -1;
	volatile int64_t x526 = -1LL;
	int32_t x527 = 156;
	volatile uint64_t x528 = 41726LLU;
	volatile int32_t t131 = -384844001;

    t131 = (x525==((x526|x527)!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -55;
	int8_t x530 = INT8_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t132 = -5063;

    t132 = (x529==((x530|x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	uint8_t x534 = 73U;
	int8_t x535 = INT8_MAX;
	int8_t x536 = 1;
	static volatile int32_t t133 = 199140732;

    t133 = (x533==((x534|x535)!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 130893750LLU;
	volatile uint64_t x538 = UINT64_MAX;
	int32_t t134 = -298513;

    t134 = (x537==((x538|x539)!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x542 = UINT8_MAX;
	uint8_t x543 = 3U;
	uint64_t x544 = 10318867515224627LLU;
	volatile int32_t t135 = -29;

    t135 = (x541==((x542|x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 2U;
	int32_t x546 = -1;
	int16_t x547 = 600;

    t136 = (x545==((x546|x547)!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	static volatile int64_t x550 = INT64_MIN;
	volatile int64_t x551 = INT64_MIN;
	uint32_t x552 = 728U;
	int32_t t137 = -11;

    t137 = (x549==((x550|x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x555 = 13918527691432LL;
	volatile int64_t x556 = -1LL;
	volatile int32_t t138 = -198;

    t138 = (x553==((x554|x555)!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -7;
	static int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	static volatile int32_t x560 = INT32_MIN;
	volatile int32_t t139 = -3;

    t139 = (x557==((x558|x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	static uint16_t x563 = 1447U;
	volatile int32_t x564 = -1;

    t140 = (x561==((x562|x563)!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int32_t x566 = INT32_MIN;
	static int16_t x567 = 5806;

    t141 = (x565==((x566|x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MIN;
	static volatile uint16_t x570 = 52U;
	int64_t x571 = INT64_MIN;
	static int16_t x572 = -1;
	int32_t t142 = -31719818;

    t142 = (x569==((x570|x571)!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	uint16_t x574 = UINT16_MAX;

    t143 = (x573==((x574|x575)!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	static volatile uint64_t x578 = 244788816120905LLU;
	uint8_t x580 = 3U;

    t144 = (x577==((x578|x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x581 = 6197339LL;
	volatile int16_t x582 = -1;
	int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MAX;

    t145 = (x581==((x582|x583)!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x585 = INT16_MAX;
	int64_t x586 = INT64_MIN;
	int64_t x587 = -1LL;
	int8_t x588 = INT8_MAX;
	volatile int32_t t146 = 1;

    t146 = (x585==((x586|x587)!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	uint8_t x590 = UINT8_MAX;
	static volatile int16_t x591 = INT16_MAX;
	static int64_t x592 = -12132LL;
	volatile int32_t t147 = 0;

    t147 = (x589==((x590|x591)!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MAX;
	static int16_t x595 = INT16_MIN;
	static int16_t x596 = -1052;
	volatile int32_t t148 = -2976154;

    t148 = (x593==((x594|x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	uint8_t x598 = UINT8_MAX;
	int16_t x600 = INT16_MIN;

    t149 = (x597==((x598|x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x603 = INT8_MIN;
	int8_t x604 = INT8_MIN;
	int32_t t150 = 3877870;

    t150 = (x601==((x602|x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x605 = INT16_MAX;
	int32_t x606 = 24205;
	static uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = -4;

    t151 = (x605==((x606|x607)!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = -1;
	int32_t x610 = INT32_MIN;
	volatile int16_t x611 = 0;
	int32_t x612 = 812;
	volatile int32_t t152 = 2591;

    t152 = (x609==((x610|x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int64_t x614 = -1LL;
	static int16_t x615 = -3936;
	int32_t t153 = 234;

    t153 = (x613==((x614|x615)!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	volatile uint32_t x618 = 385U;
	static uint64_t x619 = UINT64_MAX;
	static int32_t t154 = 261;

    t154 = (x617==((x618|x619)!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint8_t x622 = UINT8_MAX;
	uint64_t x624 = UINT64_MAX;
	static int32_t t155 = -438785;

    t155 = (x621==((x622|x623)!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x625 = INT16_MAX;
	volatile int32_t x626 = INT32_MIN;
	uint16_t x628 = 1002U;
	int32_t t156 = 459;

    t156 = (x625==((x626|x627)!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 51U;
	int16_t x630 = -1;
	static int64_t x631 = INT64_MIN;
	uint8_t x632 = 36U;
	volatile int32_t t157 = 234632922;

    t157 = (x629==((x630|x631)!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	int8_t x634 = -3;
	static int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MAX;
	static volatile int32_t t158 = -15196303;

    t158 = (x633==((x634|x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = INT64_MIN;
	volatile uint64_t x638 = 1584870497LLU;
	uint64_t x639 = UINT64_MAX;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = 4111;

    t159 = (x637==((x638|x639)!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	int64_t x642 = INT64_MAX;
	int32_t x643 = INT32_MIN;
	int32_t t160 = 86;

    t160 = (x641==((x642|x643)!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 2726U;
	static int64_t x646 = INT64_MIN;
	int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MIN;
	static int32_t t161 = -32475;

    t161 = (x645==((x646|x647)!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = -1;
	int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MAX;
	static int64_t x652 = INT64_MIN;
	int32_t t162 = 130;

    t162 = (x649==((x650|x651)!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 7900U;
	static uint32_t x654 = UINT32_MAX;
	int32_t x655 = 3802877;
	int16_t x656 = INT16_MIN;
	volatile int32_t t163 = -6980265;

    t163 = (x653==((x654|x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 8254500U;
	int8_t x659 = INT8_MIN;

    t164 = (x657==((x658|x659)!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	int64_t x663 = 80732350LL;
	static volatile int32_t t165 = 1;

    t165 = (x661==((x662|x663)!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 1;
	uint8_t x666 = UINT8_MAX;
	uint64_t x667 = UINT64_MAX;
	int8_t x668 = -1;
	int32_t t166 = 808;

    t166 = (x665==((x666|x667)!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -2;
	int8_t x670 = 2;
	int8_t x671 = -6;
	uint32_t x672 = 14U;
	volatile int32_t t167 = -38974022;

    t167 = (x669==((x670|x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 908891674726235LLU;
	volatile uint16_t x674 = UINT16_MAX;
	int16_t x675 = INT16_MIN;
	volatile int32_t t168 = 8921126;

    t168 = (x673==((x674|x675)!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int64_t x678 = -4LL;
	int64_t x679 = INT64_MIN;
	int32_t t169 = 36199043;

    t169 = (x677==((x678|x679)!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static uint32_t x682 = UINT32_MAX;
	uint64_t x683 = UINT64_MAX;
	int64_t x684 = INT64_MIN;

    t170 = (x681==((x682|x683)!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	volatile int64_t x686 = 85LL;
	uint8_t x687 = 4U;
	uint64_t x688 = UINT64_MAX;
	static volatile int32_t t171 = -305524;

    t171 = (x685==((x686|x687)!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x690 = INT64_MAX;
	uint32_t x691 = 432798U;

    t172 = (x689==((x690|x691)!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x695 = -7;
	int32_t t173 = -936;

    t173 = (x693==((x694|x695)!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	int8_t x698 = 8;

    t174 = (x697==((x698|x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	uint16_t x702 = 0U;
	uint16_t x703 = 30U;
	int32_t x704 = -43971943;

    t175 = (x701==((x702|x703)!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = 1472996150U;
	int32_t x706 = INT32_MAX;
	volatile int32_t t176 = -406;

    t176 = (x705==((x706|x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	int16_t x710 = 9;
	volatile int32_t x711 = INT32_MIN;
	uint64_t x712 = 119801387LLU;

    t177 = (x709==((x710|x711)!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x714 = INT64_MAX;
	int16_t x715 = INT16_MIN;
	int32_t x716 = INT32_MIN;

    t178 = (x713==((x714|x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	uint8_t x718 = UINT8_MAX;
	int16_t x719 = 4777;
	static int32_t x720 = INT32_MIN;
	volatile int32_t t179 = -30;

    t179 = (x717==((x718|x719)!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = 0;
	uint16_t x723 = 6768U;
	uint64_t x724 = UINT64_MAX;
	volatile int32_t t180 = -201988;

    t180 = (x721==((x722|x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x726 = 6216194LL;
	static int16_t x727 = INT16_MIN;
	volatile int16_t x728 = -1;
	volatile int32_t t181 = 284897;

    t181 = (x725==((x726|x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -3;
	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	int16_t x732 = 10732;
	volatile int32_t t182 = 3169;

    t182 = (x729==((x730|x731)!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = 3136U;
	int32_t x735 = INT32_MIN;
	volatile int64_t x736 = -1LL;

    t183 = (x733==((x734|x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 124752LLU;
	int64_t x738 = INT64_MIN;
	int64_t x739 = INT64_MAX;
	static int32_t t184 = -5;

    t184 = (x737==((x738|x739)!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	static uint8_t x742 = 23U;
	int16_t x743 = INT16_MAX;
	static uint16_t x744 = 165U;
	int32_t t185 = -89469;

    t185 = (x741==((x742|x743)!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int8_t x746 = INT8_MIN;
	int16_t x747 = 6314;
	int8_t x748 = -1;
	int32_t t186 = 0;

    t186 = (x745==((x746|x747)!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x749 = 5028662LLU;
	int8_t x750 = INT8_MAX;
	int8_t x751 = 0;
	volatile int32_t t187 = 19610;

    t187 = (x749==((x750|x751)!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MAX;
	static int32_t x754 = INT32_MAX;
	int16_t x755 = INT16_MIN;
	uint8_t x756 = UINT8_MAX;

    t188 = (x753==((x754|x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x757 = 571U;
	static int32_t x758 = INT32_MIN;
	static volatile int8_t x759 = INT8_MIN;
	static int16_t x760 = INT16_MIN;

    t189 = (x757==((x758|x759)!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 28617LL;
	static uint32_t x762 = 254367U;
	uint8_t x764 = UINT8_MAX;

    t190 = (x761==((x762|x763)!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 933507861843679839LL;
	uint8_t x766 = UINT8_MAX;
	int8_t x767 = 61;
	uint16_t x768 = 29415U;

    t191 = (x765==((x766|x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -8;
	uint64_t x770 = 10510LLU;
	uint32_t x771 = 17U;
	int64_t x772 = -117950334396833131LL;
	volatile int32_t t192 = -1;

    t192 = (x769==((x770|x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x774 = 244LLU;
	volatile int8_t x775 = INT8_MIN;
	uint32_t x776 = 25521150U;
	volatile int32_t t193 = 9093511;

    t193 = (x773==((x774|x775)!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = -1;
	volatile int16_t x779 = INT16_MIN;
	static int32_t x780 = -1;
	int32_t t194 = -10499047;

    t194 = (x777==((x778|x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = 137662619;
	uint32_t x782 = 53025372U;
	int16_t x783 = -1;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 10974938;

    t195 = (x781==((x782|x783)!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = 10139893071LLU;
	static volatile int16_t x788 = 1;
	volatile int32_t t196 = 830474;

    t196 = (x785==((x786|x787)!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = -1;
	volatile int16_t x791 = -1;
	volatile uint16_t x792 = 83U;
	volatile int32_t t197 = 20;

    t197 = (x789==((x790|x791)!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -12LL;
	volatile uint64_t x795 = UINT64_MAX;
	int64_t x796 = -1LL;
	int32_t t198 = -2580;

    t198 = (x793==((x794|x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 14435LL;
	uint64_t x798 = 323510101LLU;
	uint16_t x799 = UINT16_MAX;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 10804;

    t199 = (x797==((x798|x799)!=x800));

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

