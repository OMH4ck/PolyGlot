
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

uint32_t x2 = UINT32_MAX;
int32_t x5 = INT32_MIN;
volatile int32_t t1 = 105953;
uint64_t x10 = UINT64_MAX;
int16_t x11 = -1;
volatile int32_t t2 = -455264;
int32_t x15 = INT32_MIN;
int32_t t3 = 17817446;
uint16_t x17 = UINT16_MAX;
int8_t x18 = -5;
volatile int64_t x28 = INT64_MIN;
static uint8_t x30 = 112U;
uint32_t x32 = 3786U;
int8_t x37 = 63;
uint16_t x43 = 216U;
uint64_t x44 = UINT64_MAX;
int8_t x64 = -1;
static uint64_t x74 = 2000286LLU;
int8_t x77 = -1;
int32_t x80 = 3148;
int8_t x82 = INT8_MAX;
int32_t x83 = INT32_MIN;
int32_t x84 = INT32_MAX;
volatile int32_t t20 = 10532;
volatile int32_t x94 = INT32_MIN;
int8_t x102 = -6;
static volatile uint32_t x122 = 11588978U;
int32_t t30 = -25796;
uint32_t x128 = 28U;
uint16_t x129 = UINT16_MAX;
int64_t x132 = INT64_MIN;
int64_t x134 = 3411143466086LL;
int32_t x135 = INT32_MIN;
uint64_t x141 = UINT64_MAX;
volatile int32_t t35 = -7579308;
static int16_t x146 = INT16_MIN;
volatile uint32_t x154 = UINT32_MAX;
int64_t x155 = INT64_MIN;
volatile int8_t x158 = 1;
volatile uint16_t x169 = 2U;
volatile int16_t x175 = INT16_MIN;
uint64_t x177 = 6281LLU;
uint16_t x180 = UINT16_MAX;
int16_t x182 = -206;
int64_t x183 = -1LL;
volatile int64_t x184 = INT64_MIN;
int32_t t45 = 110;
volatile int32_t t48 = -5241;
volatile int16_t x204 = INT16_MIN;
int16_t x206 = -1335;
int16_t x209 = INT16_MIN;
int32_t x211 = -86;
static uint32_t x213 = UINT32_MAX;
static int64_t x219 = INT64_MIN;
static int32_t t55 = -4;
int32_t t56 = 1530214;
int32_t x230 = INT32_MIN;
int32_t x231 = INT32_MAX;
static int16_t x232 = -1;
int32_t t58 = 1;
volatile uint32_t x237 = 148521U;
int16_t x239 = INT16_MAX;
int16_t x242 = INT16_MIN;
int8_t x245 = 18;
volatile int16_t x246 = INT16_MAX;
uint8_t x256 = UINT8_MAX;
uint32_t x259 = UINT32_MAX;
volatile int32_t x262 = -1;
int16_t x269 = -1;
uint16_t x272 = 8059U;
volatile int32_t x275 = INT32_MAX;
uint32_t x279 = UINT32_MAX;
uint8_t x280 = 85U;
int64_t x294 = 8861133403981131LL;
static int64_t x303 = -72LL;
uint16_t x315 = 1988U;
volatile int32_t t79 = -19;
volatile uint32_t x324 = UINT32_MAX;
static int64_t x331 = INT64_MAX;
int32_t x338 = INT32_MIN;
static uint16_t x339 = 11U;
static int64_t x342 = INT64_MIN;
int16_t x344 = INT16_MIN;
volatile uint16_t x346 = 38U;
int32_t x347 = INT32_MIN;
int8_t x355 = INT8_MAX;
int8_t x358 = INT8_MIN;
int8_t x359 = -1;
int8_t x368 = 62;
int16_t x369 = -1;
static volatile uint16_t x374 = 1142U;
volatile int32_t t93 = -321;
volatile int32_t t94 = -619411606;
uint16_t x382 = 4U;
int8_t x383 = INT8_MIN;
uint32_t x386 = 388096610U;
int32_t x396 = INT32_MIN;
volatile int64_t x402 = 146540488890545LL;
volatile int32_t t101 = -979715;
int32_t t102 = 0;
int32_t x416 = 200331;
int64_t x422 = 9061LL;
int8_t x423 = INT8_MAX;
int64_t x424 = INT64_MIN;
static int64_t x425 = INT64_MAX;
static uint64_t x430 = UINT64_MAX;
int32_t x438 = -15035881;
int8_t x441 = INT8_MAX;
int16_t x443 = 1;
static volatile int32_t t110 = 121323920;
static int64_t x446 = INT64_MIN;
int64_t x451 = -1LL;
int32_t x453 = -1;
static int32_t t114 = -484823;
volatile int8_t x464 = -1;
int64_t x470 = -1LL;
int8_t x476 = INT8_MAX;
static int16_t x479 = 1;
volatile uint8_t x480 = 11U;
int16_t x481 = INT16_MIN;
volatile int32_t t121 = 6300286;
int32_t x493 = 0;
static int32_t x503 = 22;
static volatile uint16_t x506 = 7U;
int32_t x510 = -26483;
volatile uint64_t x511 = 63LLU;
int8_t x515 = -1;
uint8_t x520 = 3U;
static int32_t x525 = INT32_MIN;
int8_t x530 = -6;
int64_t x539 = INT64_MAX;
static int32_t t135 = 387420;
int32_t x551 = INT32_MIN;
int32_t x555 = INT32_MIN;
volatile int32_t t138 = 3089981;
uint16_t x557 = 3U;
int32_t x565 = INT32_MIN;
int32_t x566 = 54904;
uint16_t x567 = 23U;
static int64_t x568 = INT64_MAX;
static int32_t x569 = -1;
int16_t x572 = INT16_MIN;
volatile int32_t t146 = -41;
volatile uint64_t x597 = 220041299LLU;
static int32_t x598 = INT32_MIN;
uint32_t x599 = 26422313U;
static uint8_t x601 = 3U;
volatile uint16_t x609 = 124U;
uint32_t x610 = 18170U;
volatile int32_t t152 = 29;
static int16_t x614 = INT16_MIN;
volatile int32_t t153 = -17;
int32_t x621 = INT32_MIN;
int16_t x627 = INT16_MIN;
int32_t x631 = INT32_MIN;
int32_t t157 = -23490;
volatile int16_t x637 = INT16_MAX;
int64_t x640 = INT64_MIN;
static volatile int32_t x643 = 437918;
int32_t t160 = 0;
int64_t x646 = 1LL;
int32_t x652 = -1;
uint8_t x655 = UINT8_MAX;
int64_t x656 = 1LL;
int32_t t165 = -1;
int8_t x680 = INT8_MIN;
int32_t t170 = -208406;
volatile int16_t x687 = INT16_MAX;
volatile int8_t x688 = 0;
static int16_t x692 = -5352;
uint8_t x693 = 1U;
volatile int32_t t174 = 1055150;
volatile int64_t x701 = INT64_MIN;
uint32_t x702 = UINT32_MAX;
int64_t x703 = INT64_MIN;
uint64_t x711 = 2217631LLU;
static uint8_t x714 = 17U;
int32_t t178 = 14074043;
int16_t x719 = 4125;
volatile int16_t x720 = 1;
static volatile int16_t x725 = INT16_MAX;
int16_t x726 = 3408;
volatile int32_t t181 = -392167436;
static uint64_t x729 = 18733871442396LLU;
volatile int8_t x731 = -2;
volatile int64_t x738 = -1LL;
volatile int32_t t185 = 25214;
int8_t x745 = INT8_MAX;
static int32_t t186 = -6;
uint32_t x754 = 15U;
int64_t x755 = INT64_MAX;
uint8_t x757 = UINT8_MAX;
int8_t x760 = INT8_MAX;
volatile int32_t t190 = 2;
int8_t x765 = -1;
int16_t x766 = INT16_MAX;
int32_t t191 = 226;
static volatile uint8_t x780 = 3U;
volatile int16_t x781 = -4986;
int32_t x788 = -1;
int32_t t197 = 216883022;
int32_t t198 = 50;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1;

    t0 = (x1<=((x2&x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -162209;

    t1 = (x5<=((x6&x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int64_t x12 = -1LL;

    t2 = (x9<=((x10&x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	volatile int16_t x16 = 11037;

    t3 = (x13<=((x14&x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x19 = 24U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -133907978;

    t4 = (x17<=((x18&x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 4U;
	uint8_t x22 = 4U;
	int8_t x23 = INT8_MAX;
	static volatile int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 568723;

    t5 = (x21<=((x22&x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	uint32_t x26 = 10540U;
	int32_t x27 = INT32_MIN;
	int32_t t6 = -1093860;

    t6 = (x25<=((x26&x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	uint16_t x31 = 87U;
	int32_t t7 = 0;

    t7 = (x29<=((x30&x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 34820U;
	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = -1416;
	volatile int16_t x36 = 14920;
	static int32_t t8 = 355550;

    t8 = (x33<=((x34&x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -7191;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = 24704LL;
	volatile int32_t t9 = 225753;

    t9 = (x37<=((x38&x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = UINT64_MAX;
	static int8_t x42 = 3;
	static int32_t t10 = 21;

    t10 = (x41<=((x42&x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	static int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = 1513317;

    t11 = (x45<=((x46&x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	uint32_t x50 = 5885127U;
	int16_t x51 = -9;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -14064382;

    t12 = (x49<=((x50&x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int16_t x54 = 612;
	volatile int64_t x55 = 16409814LL;
	volatile int16_t x56 = 1;
	int32_t t13 = -42;

    t13 = (x53<=((x54&x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -6;
	static volatile int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 17631;

    t14 = (x57<=((x58&x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int8_t x62 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -176177934;

    t15 = (x61<=((x62&x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	static int32_t x66 = INT32_MIN;
	uint8_t x67 = 7U;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = 193324;

    t16 = (x65<=((x66&x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	uint32_t x70 = 3U;
	static uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 8LLU;
	volatile int32_t t17 = 20063;

    t17 = (x69<=((x70&x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 970U;
	static int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t18 = 2083535;

    t18 = (x73<=((x74&x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -1;
	int8_t x79 = -17;
	int32_t t19 = 1;

    t19 = (x77<=((x78&x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;

    t20 = (x81<=((x82&x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 1U;
	int32_t t21 = -88;

    t21 = (x85<=((x86&x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 341554036U;
	int32_t x90 = INT32_MAX;
	uint32_t x91 = 116216U;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -2812;

    t22 = (x89<=((x90&x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 456843;
	int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static int32_t t23 = 10710;

    t23 = (x93<=((x94&x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -10993566LL;
	int32_t x98 = 2995958;
	static int32_t x99 = INT32_MAX;
	volatile int32_t x100 = INT32_MAX;
	static int32_t t24 = -755661;

    t24 = (x97<=((x98&x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 1U;
	uint64_t x103 = 1511LLU;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 1622;

    t25 = (x101<=((x102&x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 1U;
	int8_t x106 = 5;
	volatile int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int32_t t26 = 2;

    t26 = (x105<=((x106&x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 2566U;
	uint32_t x110 = 218049U;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = -339985561060LL;
	int32_t t27 = 477;

    t27 = (x109<=((x110&x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -310;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -893828897;

    t28 = (x113<=((x114&x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 0;
	static int32_t x118 = INT32_MAX;
	static int16_t x119 = -563;
	volatile uint32_t x120 = 71U;
	volatile int32_t t29 = -30;

    t29 = (x117<=((x118&x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 9U;
	int16_t x123 = INT16_MAX;
	volatile uint16_t x124 = 22U;

    t30 = (x121<=((x122&x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 25182074103LLU;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	static volatile int32_t t31 = -502;

    t31 = (x125<=((x126&x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = -1;
	uint64_t x131 = 1711419175947530956LLU;
	int32_t t32 = 1;

    t32 = (x129<=((x130&x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = 3U;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = 1;

    t33 = (x133<=((x134&x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 1033U;
	int32_t x138 = -1;
	volatile uint32_t x139 = UINT32_MAX;
	static volatile int16_t x140 = 0;
	volatile int32_t t34 = 63802229;

    t34 = (x137<=((x138&x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 12U;
	int16_t x144 = INT16_MAX;

    t35 = (x141<=((x142&x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 218101877;
	volatile int32_t x147 = INT32_MIN;
	int32_t x148 = -16848;
	volatile int32_t t36 = 656;

    t36 = (x145<=((x146&x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 103U;
	int16_t x152 = -1;
	volatile int32_t t37 = -212;

    t37 = (x149<=((x150&x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t38 = -39908;

    t38 = (x153<=((x154&x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 5U;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -131361;

    t39 = (x157<=((x158&x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 2U;
	int16_t x162 = INT16_MAX;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 6U;
	int32_t t40 = 0;

    t40 = (x161<=((x162&x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	int32_t x167 = 1810;
	int16_t x168 = 10129;
	volatile int32_t t41 = -1069406;

    t41 = (x165<=((x166&x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = INT16_MAX;
	static int8_t x171 = -1;
	static uint64_t x172 = 1092LLU;
	static volatile int32_t t42 = 0;

    t42 = (x169<=((x170&x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = 1;
	int16_t x174 = INT16_MAX;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -17476;

    t43 = (x173<=((x174&x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = INT32_MAX;
	int32_t x179 = INT32_MIN;
	int32_t t44 = 629;

    t44 = (x177<=((x178&x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x181 = -1;

    t45 = (x181<=((x182&x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 1LLU;
	int32_t x186 = 17418;
	volatile int64_t x187 = INT64_MIN;
	int32_t x188 = -54959;
	int32_t t46 = -33200;

    t46 = (x185<=((x186&x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MIN;
	int8_t x190 = -1;
	uint8_t x191 = 72U;
	uint32_t x192 = 3575U;
	volatile int32_t t47 = -22;

    t47 = (x189<=((x190&x191)==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	int16_t x194 = 17;
	static int32_t x195 = 2336873;
	volatile uint64_t x196 = UINT64_MAX;

    t48 = (x193<=((x194&x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MAX;
	volatile int8_t x198 = -34;
	uint64_t x199 = UINT64_MAX;
	static int8_t x200 = -14;
	volatile int32_t t49 = 350401;

    t49 = (x197<=((x198&x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	int32_t t50 = 12230753;

    t50 = (x201<=((x202&x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	uint8_t x207 = 0U;
	int16_t x208 = -3;
	int32_t t51 = -1;

    t51 = (x205<=((x206&x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x210 = -1;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -10217311;

    t52 = (x209<=((x210&x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x214 = INT64_MIN;
	int64_t x215 = 3280788386241LL;
	volatile uint16_t x216 = 92U;
	volatile int32_t t53 = -8315903;

    t53 = (x213<=((x214&x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	uint16_t x218 = 4U;
	volatile uint8_t x220 = 4U;
	int32_t t54 = -52;

    t54 = (x217<=((x218&x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = -8322201720041048LL;
	static volatile uint16_t x222 = 7U;
	uint32_t x223 = 63629U;
	uint16_t x224 = UINT16_MAX;

    t55 = (x221<=((x222&x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	uint16_t x226 = 31U;
	int16_t x227 = -39;
	int32_t x228 = 163473;

    t56 = (x225<=((x226&x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 0U;
	volatile int32_t t57 = 29234;

    t57 = (x229<=((x230&x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 21069815LL;
	uint8_t x234 = 0U;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = -1;

    t58 = (x233<=((x234&x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x238 = INT32_MAX;
	int16_t x240 = -1;
	int32_t t59 = -46423;

    t59 = (x237<=((x238&x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -24;

    t60 = (x241<=((x242&x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x247 = 13;
	static int64_t x248 = -1LL;
	int32_t t61 = -170579030;

    t61 = (x245<=((x246&x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = 42U;
	int64_t x250 = INT64_MAX;
	static uint16_t x251 = 11U;
	volatile uint16_t x252 = UINT16_MAX;
	int32_t t62 = -129883616;

    t62 = (x249<=((x250&x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MAX;
	int8_t x254 = INT8_MIN;
	int64_t x255 = -1LL;
	int32_t t63 = -152113;

    t63 = (x253<=((x254&x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	uint32_t x258 = UINT32_MAX;
	static uint8_t x260 = 6U;
	volatile int32_t t64 = 1;

    t64 = (x257<=((x258&x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 362;
	static int8_t x263 = -1;
	volatile int16_t x264 = 0;
	int32_t t65 = 22084;

    t65 = (x261<=((x262&x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = -10;
	int16_t x267 = 38;
	static uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -17438622;

    t66 = (x265<=((x266&x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MAX;
	uint8_t x271 = 0U;
	int32_t t67 = -701271;

    t67 = (x269<=((x270&x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MAX;
	int64_t x276 = -2507213LL;
	volatile int32_t t68 = 966549245;

    t68 = (x273<=((x274&x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = -1LL;
	int32_t x278 = -1;
	volatile int32_t t69 = 1;

    t69 = (x277<=((x278&x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 106230685U;
	volatile int64_t x282 = INT64_MAX;
	static int64_t x283 = INT64_MIN;
	static int32_t x284 = INT32_MIN;
	static volatile int32_t t70 = -1886050;

    t70 = (x281<=((x282&x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 401793457LLU;
	int64_t x286 = INT64_MAX;
	static volatile int16_t x287 = INT16_MIN;
	volatile int32_t x288 = 3336;
	int32_t t71 = 4;

    t71 = (x285<=((x286&x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = -1;
	volatile uint8_t x290 = 11U;
	int8_t x291 = INT8_MIN;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -187270;

    t72 = (x289<=((x290&x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	static int64_t x295 = -13515222858LL;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -75820;

    t73 = (x293<=((x294&x295)==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	volatile int16_t x298 = 695;
	int16_t x299 = -1;
	static volatile int32_t x300 = INT32_MIN;
	int32_t t74 = 345;

    t74 = (x297<=((x298&x299)==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = INT16_MAX;
	uint64_t x302 = 244188792246LLU;
	int16_t x304 = INT16_MAX;
	int32_t t75 = -67832161;

    t75 = (x301<=((x302&x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MAX;
	volatile int64_t x306 = 6675307288094670LL;
	int8_t x307 = 12;
	uint8_t x308 = 0U;
	int32_t t76 = -511;

    t76 = (x305<=((x306&x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 265447913591271LLU;
	int64_t x310 = -1LL;
	int8_t x311 = INT8_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -36;

    t77 = (x309<=((x310&x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MAX;
	uint32_t x316 = 6U;
	int32_t t78 = 847405;

    t78 = (x313<=((x314&x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x317 = 1106631817U;
	int16_t x318 = -1;
	static int64_t x319 = 1014671896592310297LL;
	volatile int32_t x320 = 1;

    t79 = (x317<=((x318&x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MAX;
	volatile int64_t x322 = -1328646LL;
	int16_t x323 = 15918;
	int32_t t80 = 130486;

    t80 = (x321<=((x322&x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -1;
	volatile uint32_t x326 = 85355068U;
	uint32_t x327 = UINT32_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	static volatile int32_t t81 = 18762;

    t81 = (x325<=((x326&x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint8_t x332 = 97U;
	volatile int32_t t82 = 103327249;

    t82 = (x329<=((x330&x331)==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	int16_t x334 = 25;
	volatile int8_t x335 = -1;
	uint8_t x336 = 1U;
	int32_t t83 = 54;

    t83 = (x333<=((x334&x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile int8_t x340 = INT8_MAX;
	int32_t t84 = -1;

    t84 = (x337<=((x338&x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = UINT64_MAX;
	volatile uint8_t x343 = 3U;
	volatile int32_t t85 = 47581579;

    t85 = (x341<=((x342&x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x348 = -1;
	int32_t t86 = 579707;

    t86 = (x345<=((x346&x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = -3897;

    t87 = (x349<=((x350&x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MAX;
	uint16_t x354 = 7124U;
	int16_t x356 = -88;
	int32_t t88 = -1040749565;

    t88 = (x353<=((x354&x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = INT16_MIN;
	int16_t x360 = -21;
	volatile int32_t t89 = -413;

    t89 = (x357<=((x358&x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = -148;
	volatile uint32_t x362 = 2516434U;
	uint64_t x363 = 43LLU;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -11;

    t90 = (x361<=((x362&x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 291901117264641323LL;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = INT64_MIN;
	volatile int32_t t91 = -150;

    t91 = (x365<=((x366&x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x370 = 1761420U;
	int32_t x371 = -1562632;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 1510;

    t92 = (x369<=((x370&x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = -15;
	uint32_t x375 = 12597788U;
	int32_t x376 = 1;

    t93 = (x373<=((x374&x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	volatile int32_t x378 = -991;
	volatile int16_t x379 = -112;
	static int32_t x380 = INT32_MAX;

    t94 = (x377<=((x378&x379)==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = -45803693;

    t95 = (x381<=((x382&x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 1807039LL;
	int32_t x387 = 844189956;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t96 = 18;

    t96 = (x385<=((x386&x387)==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -4;
	int32_t x390 = -1;
	int64_t x391 = INT64_MIN;
	int16_t x392 = 987;
	int32_t t97 = -57499200;

    t97 = (x389<=((x390&x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MIN;
	volatile int16_t x394 = -10034;
	uint32_t x395 = UINT32_MAX;
	volatile int32_t t98 = -28651993;

    t98 = (x393<=((x394&x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -6;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -1;
	uint32_t x400 = 5U;
	static int32_t t99 = -1296288;

    t99 = (x397<=((x398&x399)==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -1LL;
	volatile int8_t x403 = INT8_MAX;
	static int16_t x404 = -1;
	int32_t t100 = 2744008;

    t100 = (x401<=((x402&x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = INT8_MIN;
	uint8_t x408 = 8U;

    t101 = (x405<=((x406&x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = -1;
	uint64_t x410 = 16023405LLU;
	int32_t x411 = -11664;
	int8_t x412 = INT8_MIN;

    t102 = (x409<=((x410&x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	static int64_t x414 = -13428522LL;
	int64_t x415 = INT64_MAX;
	int32_t t103 = -2234734;

    t103 = (x413<=((x414&x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -2543;
	int16_t x418 = 211;
	uint64_t x419 = 13LLU;
	uint16_t x420 = 3U;
	static volatile int32_t t104 = -26001;

    t104 = (x417<=((x418&x419)==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = 49641659U;
	volatile int32_t t105 = 20067;

    t105 = (x421<=((x422&x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = 14008694;
	static uint32_t x427 = 9U;
	static int32_t x428 = 192;
	volatile int32_t t106 = -5;

    t106 = (x425<=((x426&x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 4935493U;
	int64_t x431 = INT64_MIN;
	volatile int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -451282;

    t107 = (x429<=((x430&x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 7301506896634LLU;
	static int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MIN;
	volatile int64_t x436 = INT64_MAX;
	int32_t t108 = -2;

    t108 = (x433<=((x434&x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 20681212;
	uint16_t x439 = 59U;
	int32_t x440 = INT32_MIN;
	static int32_t t109 = -4;

    t109 = (x437<=((x438&x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x442 = INT16_MIN;
	volatile int32_t x444 = -1;

    t110 = (x441<=((x442&x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	uint16_t x447 = 51U;
	uint64_t x448 = 457201410896328060LLU;
	int32_t t111 = -6;

    t111 = (x445<=((x446&x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = -1;
	int8_t x450 = -1;
	int64_t x452 = INT64_MIN;
	int32_t t112 = 429105355;

    t112 = (x449<=((x450&x451)==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x454 = 840507290U;
	uint8_t x455 = UINT8_MAX;
	volatile int64_t x456 = INT64_MAX;
	int32_t t113 = 0;

    t113 = (x453<=((x454&x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 5U;
	uint8_t x458 = UINT8_MAX;
	static int16_t x459 = INT16_MAX;
	static uint64_t x460 = UINT64_MAX;

    t114 = (x457<=((x458&x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 20104;
	static volatile int32_t x462 = -1;
	static int8_t x463 = -1;
	static volatile int32_t t115 = -25;

    t115 = (x461<=((x462&x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = INT64_MIN;
	static uint8_t x466 = 44U;
	int32_t x467 = INT32_MAX;
	uint32_t x468 = 202U;
	static volatile int32_t t116 = -265213105;

    t116 = (x465<=((x466&x467)==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	int16_t x471 = INT16_MIN;
	static uint16_t x472 = 0U;
	volatile int32_t t117 = 7;

    t117 = (x469<=((x470&x471)==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 106570LLU;
	uint8_t x474 = 5U;
	volatile int8_t x475 = INT8_MAX;
	int32_t t118 = -106096288;

    t118 = (x473<=((x474&x475)==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	volatile uint64_t x478 = 3392LLU;
	static int32_t t119 = -57;

    t119 = (x477<=((x478&x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x482 = -1;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MAX;
	static volatile int32_t t120 = 3;

    t120 = (x481<=((x482&x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = INT16_MIN;
	uint8_t x486 = UINT8_MAX;
	uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MIN;

    t121 = (x485<=((x486&x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 9418402981LLU;
	int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = -1;
	static int32_t t122 = 1398550;

    t122 = (x489<=((x490&x491)==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x494 = INT16_MAX;
	int32_t x495 = INT32_MIN;
	int32_t x496 = INT32_MIN;
	static int32_t t123 = 69536;

    t123 = (x493<=((x494&x495)==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	static uint16_t x498 = 1U;
	int8_t x499 = -1;
	uint16_t x500 = 7824U;
	volatile int32_t t124 = 2007;

    t124 = (x497<=((x498&x499)==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = 1086928552744LL;
	int8_t x502 = INT8_MAX;
	volatile uint64_t x504 = 15LLU;
	int32_t t125 = -1;

    t125 = (x501<=((x502&x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = -1;
	int32_t x507 = -1;
	int32_t x508 = 29;
	int32_t t126 = 2;

    t126 = (x505<=((x506&x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 164U;
	int64_t x512 = INT64_MIN;
	static int32_t t127 = 16;

    t127 = (x509<=((x510&x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	int16_t x516 = INT16_MIN;
	volatile int32_t t128 = -941356;

    t128 = (x513<=((x514&x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 1164U;
	volatile int64_t x518 = INT64_MIN;
	int64_t x519 = INT64_MIN;
	int32_t t129 = -144219697;

    t129 = (x517<=((x518&x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	volatile int8_t x522 = -11;
	int8_t x523 = INT8_MAX;
	uint64_t x524 = 164148566258621564LLU;
	int32_t t130 = -1652562;

    t130 = (x521<=((x522&x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x526 = 830;
	uint64_t x527 = UINT64_MAX;
	uint8_t x528 = 2U;
	volatile int32_t t131 = 598928;

    t131 = (x525<=((x526&x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 0U;
	int32_t x531 = -5374585;
	int8_t x532 = 3;
	static volatile int32_t t132 = -2106;

    t132 = (x529<=((x530&x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -39;
	int64_t x534 = INT64_MAX;
	volatile int16_t x535 = 1;
	static volatile int32_t x536 = 1205931;
	volatile int32_t t133 = -35;

    t133 = (x533<=((x534&x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -1;
	uint8_t x538 = 23U;
	int64_t x540 = 104LL;
	volatile int32_t t134 = 387539;

    t134 = (x537<=((x538&x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	volatile uint64_t x542 = UINT64_MAX;
	static int64_t x543 = -1LL;
	int64_t x544 = -12245LL;

    t135 = (x541<=((x542&x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 0U;
	volatile int32_t x546 = -1;
	int16_t x547 = -14;
	uint32_t x548 = UINT32_MAX;
	int32_t t136 = -220100;

    t136 = (x545<=((x546&x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x550 = 6188U;
	int64_t x552 = -1LL;
	static int32_t t137 = 2067060;

    t137 = (x549<=((x550&x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	int16_t x554 = -1;
	static int64_t x556 = INT64_MIN;

    t138 = (x553<=((x554&x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x558 = 3U;
	static int16_t x559 = INT16_MIN;
	int32_t x560 = -279426;
	static volatile int32_t t139 = 701;

    t139 = (x557<=((x558&x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	uint8_t x562 = 3U;
	uint16_t x563 = 65U;
	int32_t x564 = INT32_MIN;
	int32_t t140 = 7;

    t140 = (x561<=((x562&x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t t141 = -165281;

    t141 = (x565<=((x566&x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x570 = UINT64_MAX;
	static uint8_t x571 = UINT8_MAX;
	static volatile int32_t t142 = -6707165;

    t142 = (x569<=((x570&x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile int64_t x574 = INT64_MIN;
	static int8_t x575 = INT8_MAX;
	int32_t x576 = -1;
	volatile int32_t t143 = -305;

    t143 = (x573<=((x574&x575)==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -361;
	volatile int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	static int16_t x580 = -1;
	static int32_t t144 = 10675998;

    t144 = (x577<=((x578&x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = INT8_MAX;
	uint8_t x582 = 12U;
	static int64_t x583 = INT64_MIN;
	static volatile int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -35672;

    t145 = (x581<=((x582&x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 1001;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = INT8_MIN;
	int16_t x588 = INT16_MAX;

    t146 = (x585<=((x586&x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MIN;
	int32_t x590 = 13398610;
	int16_t x591 = INT16_MIN;
	volatile uint16_t x592 = 1U;
	volatile int32_t t147 = -7969;

    t147 = (x589<=((x590&x591)==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = -1;
	static uint16_t x594 = 294U;
	static int16_t x595 = -1;
	int8_t x596 = -1;
	volatile int32_t t148 = 37443;

    t148 = (x593<=((x594&x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x600 = 0;
	volatile int32_t t149 = 8;

    t149 = (x597<=((x598&x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x602 = 31U;
	static int64_t x603 = INT64_MIN;
	uint32_t x604 = 334569576U;
	static volatile int32_t t150 = -103455014;

    t150 = (x601<=((x602&x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = 42;
	int64_t x606 = INT64_MIN;
	uint32_t x607 = 1245U;
	static int16_t x608 = -1;
	int32_t t151 = -24;

    t151 = (x605<=((x606&x607)==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x611 = INT64_MIN;
	int32_t x612 = -45600042;

    t152 = (x609<=((x610&x611)==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	volatile int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MIN;

    t153 = (x613<=((x614&x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x617 = 3503007981433390LLU;
	volatile uint8_t x618 = UINT8_MAX;
	volatile int64_t x619 = INT64_MIN;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t154 = 711585;

    t154 = (x617<=((x618&x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x622 = 35U;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t155 = -17;

    t155 = (x621<=((x622&x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = -1;
	int32_t x626 = INT32_MIN;
	volatile int8_t x628 = -1;
	static volatile int32_t t156 = -1006;

    t156 = (x625<=((x626&x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	int32_t x630 = 3428;
	int16_t x632 = INT16_MIN;

    t157 = (x629<=((x630&x631)==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	uint16_t x634 = UINT16_MAX;
	volatile int16_t x635 = 1488;
	int8_t x636 = INT8_MIN;
	volatile int32_t t158 = -1878;

    t158 = (x633<=((x634&x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x638 = INT16_MIN;
	uint8_t x639 = 115U;
	volatile int32_t t159 = -5483532;

    t159 = (x637<=((x638&x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = INT64_MAX;
	static volatile uint64_t x644 = 25LLU;

    t160 = (x641<=((x642&x643)==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MAX;
	int16_t x647 = -1;
	int64_t x648 = INT64_MIN;
	volatile int32_t t161 = 1966326;

    t161 = (x645<=((x646&x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	static volatile uint32_t x650 = 547047710U;
	int8_t x651 = INT8_MIN;
	static int32_t t162 = 10644851;

    t162 = (x649<=((x650&x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 7492U;
	int32_t x654 = -10265;
	int32_t t163 = 571;

    t163 = (x653<=((x654&x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 1U;
	uint16_t x658 = 0U;
	volatile int16_t x659 = INT16_MIN;
	uint64_t x660 = 6955270016052625LLU;
	volatile int32_t t164 = 41914427;

    t164 = (x657<=((x658&x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint32_t x662 = UINT32_MAX;
	int16_t x663 = -1;
	int32_t x664 = INT32_MAX;

    t165 = (x661<=((x662&x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x666 = INT8_MAX;
	int32_t x667 = -1;
	int32_t x668 = INT32_MIN;
	volatile int32_t t166 = -3820;

    t166 = (x665<=((x666&x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	int64_t x670 = -91584347LL;
	uint64_t x671 = UINT64_MAX;
	volatile int8_t x672 = -3;
	volatile int32_t t167 = 10;

    t167 = (x669<=((x670&x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MIN;
	int8_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t168 = 1060902112;

    t168 = (x673<=((x674&x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MIN;
	int32_t t169 = 372082613;

    t169 = (x677<=((x678&x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 64049738369862LL;
	volatile int64_t x682 = INT64_MAX;
	int16_t x683 = INT16_MAX;
	volatile int64_t x684 = 1143770901LL;

    t170 = (x681<=((x682&x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	uint32_t x686 = 1699820U;
	int32_t t171 = -3641;

    t171 = (x685<=((x686&x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MAX;
	int16_t x691 = INT16_MIN;
	int32_t t172 = 31076;

    t172 = (x689<=((x690&x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MIN;
	volatile uint8_t x695 = 1U;
	int16_t x696 = INT16_MIN;
	static volatile int32_t t173 = -7060;

    t173 = (x693<=((x694&x695)==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x697 = INT32_MIN;
	volatile int64_t x698 = INT64_MAX;
	static int64_t x699 = INT64_MIN;
	int64_t x700 = 0LL;

    t174 = (x697<=((x698&x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x704 = INT32_MAX;
	static volatile int32_t t175 = 3;

    t175 = (x701<=((x702&x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = 402101LLU;
	static uint16_t x708 = 14723U;
	int32_t t176 = -1;

    t176 = (x705<=((x706&x707)==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	static volatile int32_t x710 = INT32_MAX;
	int32_t x712 = INT32_MIN;
	int32_t t177 = -4289176;

    t177 = (x709<=((x710&x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -493643356;
	int64_t x715 = INT64_MIN;
	int32_t x716 = INT32_MIN;

    t178 = (x713<=((x714&x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = INT32_MAX;
	int32_t t179 = -28724;

    t179 = (x717<=((x718&x719)==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x722 = 4920;
	uint32_t x723 = UINT32_MAX;
	volatile int32_t x724 = INT32_MAX;
	int32_t t180 = -3;

    t180 = (x721<=((x722&x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x727 = INT8_MIN;
	uint8_t x728 = 10U;

    t181 = (x725<=((x726&x727)==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MAX;
	volatile uint8_t x732 = 2U;
	int32_t t182 = -32;

    t182 = (x729<=((x730&x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -45;
	volatile uint32_t x734 = 10893U;
	static int8_t x735 = INT8_MAX;
	uint16_t x736 = 17U;
	static int32_t t183 = 1;

    t183 = (x733<=((x734&x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x737 = 277U;
	int32_t x739 = 81499766;
	static uint8_t x740 = UINT8_MAX;
	int32_t t184 = 58128489;

    t184 = (x737<=((x738&x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = INT32_MAX;
	volatile int64_t x742 = INT64_MIN;
	int8_t x743 = -1;
	int32_t x744 = -1;

    t185 = (x741<=((x742&x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	uint32_t x747 = 870904153U;
	int16_t x748 = INT16_MIN;

    t186 = (x745<=((x746&x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MAX;
	uint16_t x750 = 50U;
	volatile int8_t x751 = 59;
	int32_t x752 = -1;
	volatile int32_t t187 = 11441;

    t187 = (x749<=((x750&x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x756 = INT16_MAX;
	volatile int32_t t188 = 117501387;

    t188 = (x753<=((x754&x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	uint16_t x759 = 3920U;
	int32_t t189 = 576935817;

    t189 = (x757<=((x758&x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	int32_t x762 = -1;
	int64_t x763 = 44160662555609LL;
	static int8_t x764 = -1;

    t190 = (x761<=((x762&x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x767 = INT64_MIN;
	int64_t x768 = INT64_MIN;

    t191 = (x765<=((x766&x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -494125916132249LL;
	int8_t x770 = INT8_MIN;
	int32_t x771 = 740347132;
	int32_t x772 = INT32_MAX;
	int32_t t192 = -91;

    t192 = (x769<=((x770&x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	static uint32_t x774 = 497034U;
	volatile int32_t x775 = -1;
	static uint16_t x776 = UINT16_MAX;
	volatile int32_t t193 = 2332856;

    t193 = (x773<=((x774&x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = 13854U;
	int16_t x778 = -1;
	uint16_t x779 = 2840U;
	static volatile int32_t t194 = 8425358;

    t194 = (x777<=((x778&x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = 1818;
	volatile int8_t x783 = 1;
	static int64_t x784 = INT64_MIN;
	volatile int32_t t195 = 31;

    t195 = (x781<=((x782&x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = INT64_MIN;
	static uint32_t x787 = 2090170155U;
	int32_t t196 = -600;

    t196 = (x785<=((x786&x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 23U;
	int64_t x790 = INT64_MIN;
	static volatile int8_t x791 = 0;
	static int32_t x792 = INT32_MIN;

    t197 = (x789<=((x790&x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	static int8_t x794 = INT8_MIN;
	volatile int8_t x795 = -14;
	uint16_t x796 = 5445U;

    t198 = (x793<=((x794&x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 2069U;
	int64_t x798 = INT64_MIN;
	uint64_t x799 = 3828LLU;
	uint16_t x800 = UINT16_MAX;
	static int32_t t199 = -3208;

    t199 = (x797<=((x798&x799)==x800));

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

