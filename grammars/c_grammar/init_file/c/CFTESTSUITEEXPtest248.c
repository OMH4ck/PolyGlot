
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

static volatile int8_t x4 = INT8_MIN;
volatile int16_t x16 = INT16_MAX;
uint16_t x29 = UINT16_MAX;
int32_t t7 = -232989946;
uint8_t x47 = 1U;
int8_t x49 = INT8_MIN;
static volatile int32_t x53 = INT32_MAX;
volatile uint32_t x54 = UINT32_MAX;
static int32_t t14 = 1631;
static int64_t x70 = -1LL;
static int16_t x75 = INT16_MIN;
volatile int32_t t17 = 123992412;
static int8_t x80 = INT8_MIN;
volatile uint64_t x84 = UINT64_MAX;
int16_t x85 = INT16_MIN;
uint16_t x94 = 116U;
volatile int8_t x95 = -1;
int16_t x96 = INT16_MAX;
volatile int32_t t23 = 5033098;
int8_t x105 = -8;
int32_t x113 = INT32_MIN;
int32_t x120 = INT32_MIN;
int32_t x124 = -1;
int32_t t29 = 882059;
int32_t x129 = -1;
int64_t x131 = INT64_MIN;
static volatile int8_t x138 = INT8_MIN;
volatile uint8_t x148 = 4U;
volatile int32_t t32 = -4;
volatile int16_t x165 = INT16_MIN;
uint64_t x167 = UINT64_MAX;
uint64_t x174 = UINT64_MAX;
uint8_t x176 = 2U;
int32_t t38 = 224;
uint32_t x187 = 0U;
volatile int8_t x195 = -2;
int32_t t45 = -739;
int16_t x220 = INT16_MIN;
int16_t x222 = INT16_MIN;
volatile int32_t x228 = INT32_MIN;
uint64_t x230 = UINT64_MAX;
static int32_t x239 = -1;
int16_t x241 = INT16_MIN;
volatile uint32_t x242 = 4920513U;
uint16_t x244 = UINT16_MAX;
volatile int32_t t56 = 0;
uint64_t x254 = UINT64_MAX;
volatile int64_t x260 = -1536LL;
static int64_t x277 = INT64_MIN;
int32_t t61 = -7;
static int32_t x291 = -6453;
volatile int32_t t66 = -24351487;
static volatile int8_t x301 = 2;
uint64_t x304 = 135878LLU;
int64_t x305 = INT64_MAX;
uint64_t x310 = UINT64_MAX;
uint32_t x311 = 9745U;
int64_t x312 = INT64_MIN;
volatile uint64_t x314 = UINT64_MAX;
uint16_t x315 = UINT16_MAX;
int32_t x317 = INT32_MIN;
volatile int8_t x321 = -1;
volatile int32_t x322 = INT32_MAX;
static int16_t x335 = -11;
static int8_t x348 = -1;
int16_t x351 = INT16_MIN;
uint8_t x354 = 74U;
uint64_t x355 = UINT64_MAX;
volatile int32_t t81 = 7;
int8_t x378 = INT8_MIN;
static int16_t x382 = -1;
int32_t x386 = -57677239;
int32_t t86 = -55828;
volatile int8_t x394 = INT8_MIN;
int64_t x395 = 502938206200936352LL;
static int8_t x397 = -2;
int64_t x398 = -3753991293LL;
uint64_t x400 = 11057946177076LLU;
uint16_t x408 = UINT16_MAX;
volatile int64_t x420 = INT64_MAX;
int32_t t94 = 79835;
int16_t x421 = INT16_MIN;
uint16_t x423 = UINT16_MAX;
int64_t x437 = INT64_MIN;
int32_t t100 = -1349123;
int8_t x450 = INT8_MIN;
uint32_t x455 = UINT32_MAX;
int16_t x462 = -1;
int64_t x472 = INT64_MIN;
static uint16_t x476 = UINT16_MAX;
static volatile uint8_t x478 = UINT8_MAX;
int8_t x480 = -1;
volatile uint16_t x481 = 110U;
volatile int8_t x483 = -1;
static uint64_t x486 = 2092645LLU;
volatile int32_t t110 = 241;
static volatile int16_t x497 = 104;
int8_t x512 = INT8_MIN;
int8_t x523 = INT8_MAX;
uint32_t x524 = UINT32_MAX;
volatile int32_t t119 = 1375;
volatile uint32_t x547 = 4234031U;
static int64_t x548 = -1LL;
uint32_t x551 = 696871905U;
volatile int32_t t122 = -1041197;
volatile int32_t x553 = INT32_MAX;
volatile uint8_t x566 = UINT8_MAX;
int64_t x568 = INT64_MIN;
volatile int32_t t124 = -44;
int8_t x572 = INT8_MIN;
int32_t t125 = -462;
static volatile int64_t x573 = INT64_MAX;
volatile int32_t t126 = -209;
int64_t x581 = INT64_MAX;
int32_t t129 = -1;
static int16_t x589 = INT16_MIN;
int16_t x600 = 1332;
int32_t x603 = INT32_MIN;
volatile int64_t x604 = INT64_MIN;
int32_t x609 = -1;
int32_t t134 = 1;
int64_t x620 = 6332596074LL;
static uint32_t x627 = 1716U;
static uint32_t x628 = UINT32_MAX;
static uint16_t x629 = 0U;
int32_t x637 = INT32_MAX;
int64_t x641 = INT64_MAX;
int32_t x645 = INT32_MAX;
int8_t x654 = -1;
int16_t x655 = -10;
int32_t t145 = 1768;
int16_t x663 = INT16_MAX;
uint32_t x666 = UINT32_MAX;
uint16_t x668 = 1U;
int64_t x671 = INT64_MAX;
static volatile int32_t t148 = -4518918;
volatile int32_t t150 = 681297717;
volatile int32_t x690 = 105;
static int32_t t152 = 0;
int8_t x707 = INT8_MIN;
static int32_t t155 = -189;
volatile int16_t x719 = -1;
int8_t x720 = -1;
uint32_t x729 = UINT32_MAX;
static int8_t x740 = -53;
int32_t t160 = -70906;
static uint32_t x757 = 1746U;
uint32_t x758 = UINT32_MAX;
volatile int16_t x760 = INT16_MAX;
int8_t x771 = INT8_MAX;
volatile int32_t t168 = 62294696;
volatile int32_t x773 = -6323732;
volatile uint64_t x775 = 2060872086LLU;
int16_t x780 = -20;
volatile int32_t t170 = -473228782;
int8_t x783 = INT8_MAX;
static volatile int16_t x784 = INT16_MIN;
volatile int32_t x787 = -1;
int16_t x789 = -1;
static int8_t x790 = 9;
int16_t x792 = 1;
static uint32_t x793 = 397U;
int16_t x798 = INT16_MIN;
volatile int32_t x801 = INT32_MIN;
int32_t x809 = -1;
static int64_t x817 = INT64_MAX;
static int8_t x826 = INT8_MIN;
static int32_t t181 = 55;
volatile int32_t x834 = INT32_MIN;
int32_t x835 = INT32_MIN;
int32_t t182 = -1280;
int8_t x841 = INT8_MAX;
uint32_t x846 = UINT32_MAX;
int32_t x852 = 203456;
int32_t t187 = -209;
int64_t x858 = INT64_MIN;
static volatile int32_t t188 = 87032;
volatile int8_t x863 = INT8_MIN;
volatile int32_t t189 = 9164449;
volatile uint32_t x873 = 207U;
uint8_t x880 = 2U;
int32_t t193 = 8364;
uint16_t x887 = 809U;
volatile int32_t t196 = 26585735;
int64_t x905 = -1LL;
int32_t x908 = INT32_MIN;
volatile int32_t x909 = INT32_MIN;
volatile uint16_t x910 = 1140U;


void f0(void) {
    	int16_t x1 = -1;
	static int64_t x2 = 1604LL;
	int64_t x3 = 57037460LL;
	int32_t t0 = -244265837;

    t0 = (x1<=((x2-x3)/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1;
	int16_t x6 = -1;
	int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -458;

    t1 = (x5<=((x6-x7)/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MIN;
	int64_t x11 = -1989364LL;
	int8_t x12 = -2;
	int32_t t2 = -94;

    t2 = (x9<=((x10-x11)/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MAX;
	volatile uint32_t x14 = 10483U;
	uint32_t x15 = 399736U;
	volatile int32_t t3 = 3;

    t3 = (x13<=((x14-x15)/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MAX;
	static int8_t x18 = -1;
	int32_t x19 = -933;
	int32_t x20 = -537;
	volatile int32_t t4 = -6175343;

    t4 = (x17<=((x18-x19)/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	static int16_t x26 = INT16_MAX;
	volatile uint32_t x27 = 484127595U;
	uint64_t x28 = 5477472054LLU;
	int32_t t5 = 265;

    t5 = (x25<=((x26-x27)/x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = 484314LL;
	int8_t x31 = 19;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t6 = 325372306;

    t6 = (x29<=((x30-x31)/x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 409999LLU;
	uint64_t x34 = 411798469177LLU;
	int64_t x35 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;

    t7 = (x33<=((x34-x35)/x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -1;
	int8_t x38 = -1;
	int8_t x39 = -1;
	int32_t x40 = -185374898;
	static int32_t t8 = 86;

    t8 = (x37<=((x38-x39)/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = -12;
	int16_t x44 = INT16_MAX;
	int32_t t9 = -985208716;

    t9 = (x41<=((x42-x43)/x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 8364783LL;
	static int32_t x46 = INT32_MAX;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -21624;

    t10 = (x45<=((x46-x47)/x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MIN;
	uint8_t x51 = 0U;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = 205;

    t11 = (x49<=((x50-x51)/x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x55 = 884U;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -8126644;

    t12 = (x53<=((x54-x55)/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	static int32_t x58 = -1;
	uint32_t x59 = 5U;
	volatile uint8_t x60 = 20U;
	volatile int32_t t13 = 8;

    t13 = (x57<=((x58-x59)/x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = UINT8_MAX;
	volatile int32_t x63 = INT32_MAX;
	uint16_t x64 = 9132U;

    t14 = (x61<=((x62-x63)/x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 5U;
	int16_t x66 = -1247;
	int64_t x67 = -2901393613442992LL;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 230995224;

    t15 = (x65<=((x66-x67)/x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = 0;
	static int32_t x71 = -1;
	int16_t x72 = -6;
	volatile int32_t t16 = -83;

    t16 = (x69<=((x70-x71)/x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 27U;
	int16_t x74 = -989;
	uint64_t x76 = 3235LLU;

    t17 = (x73<=((x74-x75)/x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	static int64_t x79 = INT64_MAX;
	static volatile int32_t t18 = -8368;

    t18 = (x77<=((x78-x79)/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = 10;
	int8_t x83 = INT8_MIN;
	volatile int32_t t19 = 3382690;

    t19 = (x81<=((x82-x83)/x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;
	static int32_t t20 = -118;

    t20 = (x85<=((x86-x87)/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 3229LLU;
	uint8_t x90 = UINT8_MAX;
	static uint16_t x91 = 0U;
	volatile uint8_t x92 = 3U;
	int32_t t21 = 3710084;

    t21 = (x89<=((x90-x91)/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 0U;
	int32_t t22 = 313053;

    t22 = (x93<=((x94-x95)/x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 1LLU;
	int16_t x98 = 1;
	int32_t x99 = -1;
	int32_t x100 = INT32_MAX;

    t23 = (x97<=((x98-x99)/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	static uint32_t x102 = 39370U;
	volatile uint32_t x103 = 5U;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t24 = 28006;

    t24 = (x101<=((x102-x103)/x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x106 = 2857439LLU;
	uint16_t x107 = 14U;
	int32_t x108 = -8613;
	static int32_t t25 = 112836405;

    t25 = (x105<=((x106-x107)/x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	static int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 4LLU;
	volatile int32_t t26 = 7;

    t26 = (x109<=((x110-x111)/x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x114 = 41U;
	uint16_t x115 = UINT16_MAX;
	int64_t x116 = -1LL;
	volatile int32_t t27 = -5118745;

    t27 = (x113<=((x114-x115)/x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MIN;
	int32_t x118 = -1;
	static int32_t x119 = 36730568;
	static volatile int32_t t28 = 1;

    t28 = (x117<=((x118-x119)/x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	static uint64_t x123 = 12240400LLU;

    t29 = (x121<=((x122-x123)/x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x130 = -1;
	static int32_t x132 = -5142248;
	int32_t t30 = 4070934;

    t30 = (x129<=((x130-x131)/x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -1LL;
	static volatile int8_t x139 = -9;
	static int32_t x140 = 205;
	volatile int32_t t31 = -1648;

    t31 = (x137<=((x138-x139)/x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x145 = 1U;
	uint64_t x146 = 30701980LLU;
	int32_t x147 = INT32_MIN;

    t32 = (x145<=((x146-x147)/x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x149 = 17706U;
	int64_t x150 = INT64_MAX;
	uint8_t x151 = UINT8_MAX;
	static int32_t x152 = -1;
	volatile int32_t t33 = 22600558;

    t33 = (x149<=((x150-x151)/x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = INT16_MIN;
	uint32_t x158 = 1845614U;
	int32_t x159 = INT32_MIN;
	int64_t x160 = 1354391788814833LL;
	static volatile int32_t t34 = -41434488;

    t34 = (x157<=((x158-x159)/x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x161 = -1;
	volatile int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	static volatile int32_t t35 = 3533402;

    t35 = (x161<=((x162-x163)/x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x166 = 256U;
	int8_t x168 = INT8_MIN;
	int32_t t36 = -89456819;

    t36 = (x165<=((x166-x167)/x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x169 = INT64_MIN;
	static int32_t x170 = 470231;
	int64_t x171 = INT64_MAX;
	int64_t x172 = INT64_MAX;
	volatile int32_t t37 = -1501;

    t37 = (x169<=((x170-x171)/x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x173 = -733067406LL;
	int32_t x175 = -1;

    t38 = (x173<=((x174-x175)/x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 58LLU;
	volatile int8_t x178 = -4;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t39 = 0;

    t39 = (x177<=((x178-x179)/x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = 8;
	int16_t x188 = INT16_MIN;
	int32_t t40 = -34793;

    t40 = (x185<=((x186-x187)/x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x189 = 882015877760LLU;
	volatile int16_t x190 = -1;
	uint32_t x191 = 15535U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t41 = -6331368;

    t41 = (x189<=((x190-x191)/x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x193 = UINT16_MAX;
	static volatile int8_t x194 = 15;
	volatile uint16_t x196 = 187U;
	int32_t t42 = 63037525;

    t42 = (x193<=((x194-x195)/x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x197 = UINT16_MAX;
	volatile int16_t x198 = -1;
	static int16_t x199 = -102;
	uint16_t x200 = 55U;
	volatile int32_t t43 = -2;

    t43 = (x197<=((x198-x199)/x200));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	static int32_t x204 = INT32_MAX;
	volatile int32_t t44 = 23687653;

    t44 = (x201<=((x202-x203)/x204));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x205 = 6567;
	uint32_t x206 = 163877U;
	int32_t x207 = INT32_MIN;
	volatile int32_t x208 = 17405;

    t45 = (x205<=((x206-x207)/x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x209 = 7935U;
	uint8_t x210 = 6U;
	static uint32_t x211 = UINT32_MAX;
	static int16_t x212 = -1;
	int32_t t46 = -102;

    t46 = (x209<=((x210-x211)/x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = 19;
	uint64_t x214 = 926LLU;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t47 = 11353399;

    t47 = (x213<=((x214-x215)/x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	volatile int64_t x219 = -1LL;
	volatile int32_t t48 = 238179119;

    t48 = (x217<=((x218-x219)/x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MAX;
	static uint64_t x223 = UINT64_MAX;
	uint16_t x224 = 4U;
	int32_t t49 = -2592855;

    t49 = (x221<=((x222-x223)/x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = 6;
	volatile uint64_t x226 = 7882644161717472LLU;
	static int16_t x227 = INT16_MIN;
	int32_t t50 = 63851774;

    t50 = (x225<=((x226-x227)/x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = 1530869277750113508LL;
	uint8_t x231 = 56U;
	int64_t x232 = INT64_MIN;
	static int32_t t51 = -1524815;

    t51 = (x229<=((x230-x231)/x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x233 = INT8_MAX;
	static int16_t x234 = INT16_MAX;
	static int64_t x235 = 42375674233314LL;
	static uint32_t x236 = 17861659U;
	int32_t t52 = -1713;

    t52 = (x233<=((x234-x235)/x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x237 = INT8_MAX;
	int64_t x238 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t53 = 63179;

    t53 = (x237<=((x238-x239)/x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x243 = UINT64_MAX;
	int32_t t54 = -2442435;

    t54 = (x241<=((x242-x243)/x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 45429U;
	int16_t x246 = INT16_MAX;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MAX;
	volatile int32_t t55 = 0;

    t55 = (x245<=((x246-x247)/x248));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -7621972;
	int16_t x252 = INT16_MIN;

    t56 = (x249<=((x250-x251)/x252));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	volatile int8_t x255 = INT8_MIN;
	uint16_t x256 = 115U;
	int32_t t57 = -4023;

    t57 = (x253<=((x254-x255)/x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x257 = INT16_MIN;
	volatile int32_t x258 = -107293;
	static uint16_t x259 = 79U;
	int32_t t58 = 1;

    t58 = (x257<=((x258-x259)/x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = INT32_MIN;
	volatile uint8_t x270 = UINT8_MAX;
	int32_t x271 = 44265;
	volatile int8_t x272 = -1;
	volatile int32_t t59 = 815715582;

    t59 = (x269<=((x270-x271)/x272));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x273 = -1;
	int16_t x274 = INT16_MAX;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = -195;
	volatile int32_t t60 = -195;

    t60 = (x273<=((x274-x275)/x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x278 = 8;
	int64_t x279 = -8481835437926206LL;
	uint16_t x280 = 3U;

    t61 = (x277<=((x278-x279)/x280));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x281 = UINT32_MAX;
	int8_t x282 = -1;
	uint16_t x283 = 3U;
	int16_t x284 = -5;
	int32_t t62 = 1;

    t62 = (x281<=((x282-x283)/x284));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x285 = 14601495052LLU;
	static uint16_t x286 = 4139U;
	int16_t x287 = INT16_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t63 = -81760;

    t63 = (x285<=((x286-x287)/x288));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	int16_t x290 = -236;
	uint64_t x292 = UINT64_MAX;
	int32_t t64 = -9971;

    t64 = (x289<=((x290-x291)/x292));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x293 = 9916U;
	volatile int8_t x294 = -38;
	int8_t x295 = -7;
	static uint32_t x296 = UINT32_MAX;
	volatile int32_t t65 = 11774254;

    t65 = (x293<=((x294-x295)/x296));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x297 = UINT32_MAX;
	static uint64_t x298 = UINT64_MAX;
	int32_t x299 = 6;
	int8_t x300 = -7;

    t66 = (x297<=((x298-x299)/x300));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	int32_t t67 = -567;

    t67 = (x301<=((x302-x303)/x304));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x306 = -1;
	int8_t x307 = INT8_MIN;
	static int64_t x308 = -3LL;
	volatile int32_t t68 = -33586862;

    t68 = (x305<=((x306-x307)/x308));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = 75LL;
	volatile int32_t t69 = 112;

    t69 = (x309<=((x310-x311)/x312));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = INT64_MIN;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t70 = 1;

    t70 = (x313<=((x314-x315)/x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t71 = 36687;

    t71 = (x317<=((x318-x319)/x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x323 = 4747881075053290LLU;
	volatile int16_t x324 = INT16_MAX;
	int32_t t72 = 1;

    t72 = (x321<=((x322-x323)/x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	static int8_t x332 = INT8_MIN;
	int32_t t73 = -11404850;

    t73 = (x329<=((x330-x331)/x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 225666398926452LLU;
	static uint64_t x336 = UINT64_MAX;
	int32_t t74 = -390;

    t74 = (x333<=((x334-x335)/x336));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x337 = -53;
	static uint32_t x338 = UINT32_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	int32_t t75 = 179148051;

    t75 = (x337<=((x338-x339)/x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = INT64_MAX;
	volatile uint8_t x343 = 1U;
	volatile int8_t x344 = -1;
	volatile int32_t t76 = 96708314;

    t76 = (x341<=((x342-x343)/x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = 4;
	static int64_t x346 = INT64_MIN;
	static uint64_t x347 = 655LLU;
	int32_t t77 = 1;

    t77 = (x345<=((x346-x347)/x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = INT32_MIN;
	static volatile uint8_t x350 = 66U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t78 = 899;

    t78 = (x349<=((x350-x351)/x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x353 = 3730145U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t79 = 81;

    t79 = (x353<=((x354-x355)/x356));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x357 = 18031005352LLU;
	int8_t x358 = -1;
	uint32_t x359 = 83612758U;
	int8_t x360 = -1;
	volatile int32_t t80 = 294;

    t80 = (x357<=((x358-x359)/x360));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = 4767;
	int64_t x362 = INT64_MIN;
	volatile int8_t x363 = INT8_MIN;
	static int32_t x364 = INT32_MIN;

    t81 = (x361<=((x362-x363)/x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x365 = 2;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = UINT64_MAX;
	static int64_t x368 = INT64_MAX;
	int32_t t82 = 16520170;

    t82 = (x365<=((x366-x367)/x368));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = 0LL;
	uint64_t x371 = 3996LLU;
	int16_t x372 = 10;
	volatile int32_t t83 = -524607380;

    t83 = (x369<=((x370-x371)/x372));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	static int32_t t84 = 394356;

    t84 = (x377<=((x378-x379)/x380));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x381 = INT64_MIN;
	uint32_t x383 = 45U;
	volatile int32_t x384 = -661151867;
	int32_t t85 = -902;

    t85 = (x381<=((x382-x383)/x384));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = INT32_MIN;
	volatile int8_t x387 = -1;
	static uint64_t x388 = 63153707292LLU;

    t86 = (x385<=((x386-x387)/x388));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = INT32_MIN;
	static volatile int32_t x390 = -11;
	int32_t x391 = 6598330;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t87 = -3711379;

    t87 = (x389<=((x390-x391)/x392));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = 15;
	int8_t x396 = 1;
	volatile int32_t t88 = 13108396;

    t88 = (x393<=((x394-x395)/x396));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x399 = INT32_MAX;
	int32_t t89 = 104;

    t89 = (x397<=((x398-x399)/x400));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = 213;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = INT32_MAX;
	volatile int32_t t90 = 1;

    t90 = (x401<=((x402-x403)/x404));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x405 = -83744970361LL;
	uint8_t x406 = 125U;
	static int8_t x407 = INT8_MAX;
	static volatile int32_t t91 = -4073760;

    t91 = (x405<=((x406-x407)/x408));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = 74617751;
	volatile int32_t x410 = -217;
	static uint64_t x411 = 278530330806388LLU;
	int8_t x412 = INT8_MAX;
	volatile int32_t t92 = -463555;

    t92 = (x409<=((x410-x411)/x412));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = -12423;
	volatile uint64_t x414 = 1919925649LLU;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = -155;
	int32_t t93 = -294;

    t93 = (x413<=((x414-x415)/x416));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = 14;
	static int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MIN;

    t94 = (x417<=((x418-x419)/x420));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x422 = -1;
	int16_t x424 = 13;
	static volatile int32_t t95 = -14096045;

    t95 = (x421<=((x422-x423)/x424));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x429 = 28U;
	static uint32_t x430 = UINT32_MAX;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = -1LL;
	int32_t t96 = -432;

    t96 = (x429<=((x430-x431)/x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x433 = INT32_MIN;
	int8_t x434 = -40;
	int16_t x435 = -916;
	static int16_t x436 = -1;
	static volatile int32_t t97 = 64;

    t97 = (x433<=((x434-x435)/x436));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x438 = 285656714852751LL;
	static int16_t x439 = -1;
	volatile int64_t x440 = -1LL;
	volatile int32_t t98 = -459470597;

    t98 = (x437<=((x438-x439)/x440));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x441 = 11U;
	int8_t x442 = -13;
	int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t99 = -94982088;

    t99 = (x441<=((x442-x443)/x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x445 = INT32_MIN;
	static uint16_t x446 = 9221U;
	uint8_t x447 = 89U;
	int32_t x448 = INT32_MIN;

    t100 = (x445<=((x446-x447)/x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x449 = -1349LL;
	int8_t x451 = -1;
	uint16_t x452 = 2U;
	volatile int32_t t101 = -1000627;

    t101 = (x449<=((x450-x451)/x452));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x453 = INT64_MIN;
	uint16_t x454 = 14752U;
	static int32_t x456 = 621;
	volatile int32_t t102 = -443745;

    t102 = (x453<=((x454-x455)/x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x461 = 1;
	static int64_t x463 = INT64_MIN;
	volatile int32_t x464 = INT32_MIN;
	int32_t t103 = -3;

    t103 = (x461<=((x462-x463)/x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x465 = 3U;
	int8_t x466 = -1;
	volatile int16_t x467 = 148;
	static volatile int32_t x468 = INT32_MIN;
	volatile int32_t t104 = -133285;

    t104 = (x465<=((x466-x467)/x468));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MAX;
	int64_t x471 = -35212077LL;
	int32_t t105 = 4081;

    t105 = (x469<=((x470-x471)/x472));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = INT16_MIN;
	int64_t x474 = -1LL;
	volatile int32_t x475 = -29318;
	int32_t t106 = 132129612;

    t106 = (x473<=((x474-x475)/x476));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x477 = 1057U;
	static int64_t x479 = 1606192840303515619LL;
	int32_t t107 = 554817;

    t107 = (x477<=((x478-x479)/x480));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x482 = 1146;
	uint8_t x484 = 9U;
	volatile int32_t t108 = -12003022;

    t108 = (x481<=((x482-x483)/x484));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = INT64_MIN;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = -15;
	volatile int32_t t109 = -376;

    t109 = (x485<=((x486-x487)/x488));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x489 = 15;
	uint16_t x490 = 0U;
	int8_t x491 = INT8_MAX;
	uint32_t x492 = 16U;

    t110 = (x489<=((x490-x491)/x492));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = -320252;
	int8_t x494 = INT8_MIN;
	int8_t x495 = 26;
	uint32_t x496 = 1U;
	int32_t t111 = 1002598;

    t111 = (x493<=((x494-x495)/x496));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x498 = INT8_MIN;
	int32_t x499 = -1;
	int8_t x500 = -1;
	volatile int32_t t112 = -287565092;

    t112 = (x497<=((x498-x499)/x500));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x501 = INT16_MAX;
	int16_t x502 = -1;
	uint16_t x503 = 0U;
	uint16_t x504 = 18599U;
	volatile int32_t t113 = -398788989;

    t113 = (x501<=((x502-x503)/x504));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x509 = INT64_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	volatile int8_t x511 = INT8_MAX;
	int32_t t114 = -1581;

    t114 = (x509<=((x510-x511)/x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x517 = INT8_MAX;
	static uint16_t x518 = 148U;
	int16_t x519 = -1;
	uint64_t x520 = 60850751750337LLU;
	volatile int32_t t115 = 3105118;

    t115 = (x517<=((x518-x519)/x520));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = 339816U;
	int8_t x522 = INT8_MIN;
	int32_t t116 = 18057;

    t116 = (x521<=((x522-x523)/x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x525 = -1;
	uint8_t x526 = UINT8_MAX;
	uint32_t x527 = UINT32_MAX;
	static int16_t x528 = 13707;
	int32_t t117 = -21;

    t117 = (x525<=((x526-x527)/x528));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x529 = 1;
	volatile int16_t x530 = -404;
	int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	static volatile int32_t t118 = 130;

    t118 = (x529<=((x530-x531)/x532));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x533 = INT8_MIN;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = -1;
	int64_t x536 = INT64_MIN;

    t119 = (x533<=((x534-x535)/x536));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	volatile int64_t x542 = 15LL;
	uint8_t x543 = UINT8_MAX;
	int64_t x544 = -1LL;
	volatile int32_t t120 = -29402474;

    t120 = (x541<=((x542-x543)/x544));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x545 = 31;
	int32_t x546 = 133247765;
	static volatile int32_t t121 = -467;

    t121 = (x545<=((x546-x547)/x548));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x549 = INT16_MIN;
	int32_t x550 = -1;
	int16_t x552 = -1;

    t122 = (x549<=((x550-x551)/x552));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x554 = 3778LLU;
	static volatile int8_t x555 = INT8_MIN;
	static uint32_t x556 = 5788U;
	volatile int32_t t123 = -910176;

    t123 = (x553<=((x554-x555)/x556));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x565 = 58502875315939648LL;
	volatile int32_t x567 = INT32_MAX;

    t124 = (x565<=((x566-x567)/x568));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x569 = INT16_MIN;
	int16_t x570 = INT16_MAX;
	int64_t x571 = -1LL;

    t125 = (x569<=((x570-x571)/x572));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x574 = -1;
	uint64_t x575 = UINT64_MAX;
	uint16_t x576 = 9984U;

    t126 = (x573<=((x574-x575)/x576));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x577 = 1U;
	volatile int8_t x578 = INT8_MAX;
	int64_t x579 = -1LL;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t127 = 23531;

    t127 = (x577<=((x578-x579)/x580));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x582 = 6;
	volatile uint32_t x583 = 4647353U;
	int32_t x584 = INT32_MAX;
	static int32_t t128 = 20469;

    t128 = (x581<=((x582-x583)/x584));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x585 = UINT32_MAX;
	volatile int16_t x586 = -5736;
	int32_t x587 = 207;
	uint64_t x588 = 45716LLU;

    t129 = (x585<=((x586-x587)/x588));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x590 = -13588;
	int8_t x591 = INT8_MIN;
	int64_t x592 = INT64_MIN;
	static int32_t t130 = -4253538;

    t130 = (x589<=((x590-x591)/x592));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x597 = 1LL;
	static volatile int64_t x598 = 44359333LL;
	int32_t x599 = -241;
	volatile int32_t t131 = -1928;

    t131 = (x597<=((x598-x599)/x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x601 = INT64_MIN;
	volatile uint32_t x602 = 316348U;
	volatile int32_t t132 = 0;

    t132 = (x601<=((x602-x603)/x604));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x605 = -1;
	static uint16_t x606 = UINT16_MAX;
	uint32_t x607 = 116990U;
	int8_t x608 = 2;
	int32_t t133 = -7514583;

    t133 = (x605<=((x606-x607)/x608));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x610 = -57;
	int16_t x611 = INT16_MIN;
	static int32_t x612 = -1;

    t134 = (x609<=((x610-x611)/x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = 117;
	int64_t x614 = INT64_MIN;
	static uint64_t x615 = 16226181LLU;
	int8_t x616 = -1;
	volatile int32_t t135 = -121;

    t135 = (x613<=((x614-x615)/x616));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x618 = -1LL;
	uint64_t x619 = UINT64_MAX;
	static int32_t t136 = -40778100;

    t136 = (x617<=((x618-x619)/x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x625 = -1;
	int32_t x626 = -1;
	volatile int32_t t137 = -432571;

    t137 = (x625<=((x626-x627)/x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x630 = -100LL;
	static volatile uint32_t x631 = 124U;
	uint8_t x632 = 14U;
	int32_t t138 = 89540;

    t138 = (x629<=((x630-x631)/x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x633 = -3288760633368513530LL;
	volatile int8_t x634 = 60;
	volatile int64_t x635 = -1600715LL;
	int16_t x636 = INT16_MAX;
	volatile int32_t t139 = -408486;

    t139 = (x633<=((x634-x635)/x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x638 = INT8_MIN;
	uint64_t x639 = 917105LLU;
	int16_t x640 = 104;
	volatile int32_t t140 = 16229;

    t140 = (x637<=((x638-x639)/x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x642 = -1LL;
	uint16_t x643 = UINT16_MAX;
	static int64_t x644 = -2LL;
	volatile int32_t t141 = 535204;

    t141 = (x641<=((x642-x643)/x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x646 = 1006U;
	int16_t x647 = INT16_MIN;
	static uint64_t x648 = 2715990LLU;
	int32_t t142 = 13885;

    t142 = (x645<=((x646-x647)/x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = 521481429;
	int16_t x650 = INT16_MAX;
	uint32_t x651 = 148808356U;
	int32_t x652 = -1;
	volatile int32_t t143 = 50062;

    t143 = (x649<=((x650-x651)/x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x653 = INT8_MAX;
	volatile int16_t x656 = 1553;
	static volatile int32_t t144 = 21798181;

    t144 = (x653<=((x654-x655)/x656));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x657 = -3;
	static volatile int64_t x658 = INT64_MIN;
	int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;

    t145 = (x657<=((x658-x659)/x660));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = 5502;
	uint16_t x664 = 206U;
	static int32_t t146 = 35;

    t146 = (x661<=((x662-x663)/x664));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = 949;
	volatile int64_t x667 = 95048415LL;
	int32_t t147 = 1;

    t147 = (x665<=((x666-x667)/x668));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x669 = INT32_MAX;
	uint32_t x670 = 217U;
	volatile int8_t x672 = INT8_MAX;

    t148 = (x669<=((x670-x671)/x672));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x677 = INT32_MIN;
	volatile int64_t x678 = -5422LL;
	uint32_t x679 = 1U;
	volatile uint64_t x680 = 3033094555879601LLU;
	static int32_t t149 = -6447370;

    t149 = (x677<=((x678-x679)/x680));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x681 = -2584667787547749LL;
	static volatile int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MIN;
	uint32_t x684 = 231U;

    t150 = (x681<=((x682-x683)/x684));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x685 = 31U;
	static volatile uint16_t x686 = 24100U;
	volatile uint32_t x687 = 79143446U;
	int64_t x688 = 42236218626807LL;
	volatile int32_t t151 = -395764771;

    t151 = (x685<=((x686-x687)/x688));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x689 = INT16_MAX;
	int8_t x691 = 6;
	volatile uint64_t x692 = 5981995149LLU;

    t152 = (x689<=((x690-x691)/x692));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x697 = UINT8_MAX;
	int64_t x698 = -52LL;
	static volatile uint32_t x699 = 224777629U;
	static int32_t x700 = INT32_MIN;
	int32_t t153 = -255;

    t153 = (x697<=((x698-x699)/x700));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x705 = 52;
	int32_t x706 = -1;
	volatile int8_t x708 = INT8_MAX;
	int32_t t154 = 68204209;

    t154 = (x705<=((x706-x707)/x708));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x709 = 66726708846553LLU;
	int16_t x710 = 5192;
	uint8_t x711 = 13U;
	static uint32_t x712 = 60371608U;

    t155 = (x709<=((x710-x711)/x712));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x713 = 70U;
	static uint64_t x714 = 276107234846454LLU;
	uint8_t x715 = UINT8_MAX;
	int32_t x716 = 413252;
	static int32_t t156 = -24;

    t156 = (x713<=((x714-x715)/x716));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x717 = INT64_MIN;
	static int32_t x718 = -169893;
	volatile int32_t t157 = -78806427;

    t157 = (x717<=((x718-x719)/x720));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x725 = UINT16_MAX;
	volatile int64_t x726 = 428137171178LL;
	static int64_t x727 = -66853255041045839LL;
	int64_t x728 = -1LL;
	volatile int32_t t158 = -10468225;

    t158 = (x725<=((x726-x727)/x728));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x730 = 1U;
	int16_t x731 = INT16_MAX;
	static uint64_t x732 = 57775326871215LLU;
	int32_t t159 = -138;

    t159 = (x729<=((x730-x731)/x732));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x737 = -7;
	int64_t x738 = -1LL;
	int8_t x739 = -1;

    t160 = (x737<=((x738-x739)/x740));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x741 = INT64_MIN;
	static volatile int32_t x742 = -5;
	uint64_t x743 = 45301029LLU;
	int8_t x744 = INT8_MAX;
	static int32_t t161 = 7;

    t161 = (x741<=((x742-x743)/x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	uint8_t x746 = UINT8_MAX;
	int32_t x747 = 13759;
	int32_t x748 = INT32_MIN;
	volatile int32_t t162 = -1;

    t162 = (x745<=((x746-x747)/x748));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x749 = 6890594LLU;
	static volatile uint8_t x750 = UINT8_MAX;
	int16_t x751 = -6;
	int8_t x752 = -1;
	volatile int32_t t163 = -347523572;

    t163 = (x749<=((x750-x751)/x752));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x753 = -1948678;
	volatile int64_t x754 = INT64_MIN;
	static volatile int16_t x755 = INT16_MIN;
	int32_t x756 = INT32_MIN;
	volatile int32_t t164 = 941546791;

    t164 = (x753<=((x754-x755)/x756));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x759 = 6315759U;
	volatile int32_t t165 = 97278652;

    t165 = (x757<=((x758-x759)/x760));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = INT64_MIN;
	int16_t x762 = INT16_MAX;
	static int8_t x763 = INT8_MAX;
	uint32_t x764 = 26U;
	volatile int32_t t166 = -15485;

    t166 = (x761<=((x762-x763)/x764));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x765 = INT32_MAX;
	int16_t x766 = -1;
	int8_t x767 = 0;
	int64_t x768 = INT64_MIN;
	int32_t t167 = -22839841;

    t167 = (x765<=((x766-x767)/x768));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x769 = INT64_MAX;
	uint32_t x770 = 689872U;
	volatile int32_t x772 = 10084922;

    t168 = (x769<=((x770-x771)/x772));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x774 = INT64_MIN;
	static int16_t x776 = INT16_MIN;
	int32_t t169 = -3;

    t169 = (x773<=((x774-x775)/x776));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MIN;
	uint64_t x779 = UINT64_MAX;

    t170 = (x777<=((x778-x779)/x780));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x781 = UINT16_MAX;
	int8_t x782 = INT8_MIN;
	static int32_t t171 = -3500;

    t171 = (x781<=((x782-x783)/x784));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x785 = UINT16_MAX;
	int16_t x786 = INT16_MIN;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t172 = 7;

    t172 = (x785<=((x786-x787)/x788));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x791 = 5319U;
	static int32_t t173 = -69;

    t173 = (x789<=((x790-x791)/x792));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x794 = -2136;
	uint32_t x795 = UINT32_MAX;
	uint16_t x796 = 228U;
	volatile int32_t t174 = -1;

    t174 = (x793<=((x794-x795)/x796));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x797 = 161;
	volatile uint32_t x799 = UINT32_MAX;
	int16_t x800 = 18;
	int32_t t175 = -108644;

    t175 = (x797<=((x798-x799)/x800));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x802 = 1;
	uint64_t x803 = 6009440291732938075LLU;
	static int16_t x804 = 587;
	static int32_t t176 = 1;

    t176 = (x801<=((x802-x803)/x804));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x805 = 27;
	uint64_t x806 = 6LLU;
	int16_t x807 = 344;
	static volatile int16_t x808 = INT16_MIN;
	int32_t t177 = 80;

    t177 = (x805<=((x806-x807)/x808));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x810 = -1;
	int16_t x811 = INT16_MIN;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t178 = 13;

    t178 = (x809<=((x810-x811)/x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x818 = -1LL;
	uint16_t x819 = UINT16_MAX;
	static int64_t x820 = -1006LL;
	int32_t t179 = -22014;

    t179 = (x817<=((x818-x819)/x820));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = -43;
	int32_t x822 = -1;
	static int32_t x823 = INT32_MIN;
	volatile int8_t x824 = INT8_MIN;
	volatile int32_t t180 = -25715;

    t180 = (x821<=((x822-x823)/x824));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x825 = UINT32_MAX;
	volatile int16_t x827 = -1;
	uint32_t x828 = 1463582U;

    t181 = (x825<=((x826-x827)/x828));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x833 = INT64_MAX;
	int8_t x836 = INT8_MIN;

    t182 = (x833<=((x834-x835)/x836));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x837 = 169;
	volatile int16_t x838 = INT16_MAX;
	int8_t x839 = INT8_MAX;
	int16_t x840 = 4;
	int32_t t183 = -56;

    t183 = (x837<=((x838-x839)/x840));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x842 = 17;
	uint16_t x843 = UINT16_MAX;
	int32_t x844 = INT32_MIN;
	int32_t t184 = 220;

    t184 = (x841<=((x842-x843)/x844));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x845 = 30U;
	uint8_t x847 = UINT8_MAX;
	volatile int64_t x848 = INT64_MIN;
	int32_t t185 = -28453730;

    t185 = (x845<=((x846-x847)/x848));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x849 = INT64_MAX;
	static int8_t x850 = INT8_MAX;
	uint32_t x851 = UINT32_MAX;
	int32_t t186 = 0;

    t186 = (x849<=((x850-x851)/x852));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x853 = INT64_MIN;
	int32_t x854 = -1;
	volatile uint8_t x855 = 0U;
	int32_t x856 = -1;

    t187 = (x853<=((x854-x855)/x856));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x857 = 261U;
	int32_t x859 = -161521;
	int8_t x860 = INT8_MIN;

    t188 = (x857<=((x858-x859)/x860));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x861 = INT16_MIN;
	uint64_t x862 = UINT64_MAX;
	int64_t x864 = INT64_MIN;

    t189 = (x861<=((x862-x863)/x864));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x865 = 2U;
	uint16_t x866 = UINT16_MAX;
	uint16_t x867 = 13U;
	int32_t x868 = INT32_MAX;
	int32_t t190 = 0;

    t190 = (x865<=((x866-x867)/x868));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x869 = -3;
	int32_t x870 = -1;
	uint16_t x871 = 3U;
	volatile int16_t x872 = 585;
	volatile int32_t t191 = 62543;

    t191 = (x869<=((x870-x871)/x872));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x874 = 1;
	uint16_t x875 = 188U;
	volatile uint32_t x876 = UINT32_MAX;
	static int32_t t192 = 37982;

    t192 = (x873<=((x874-x875)/x876));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x877 = 478899U;
	static uint64_t x878 = 226LLU;
	uint8_t x879 = 0U;

    t193 = (x877<=((x878-x879)/x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x881 = -1;
	volatile int16_t x882 = INT16_MIN;
	int64_t x883 = INT64_MIN;
	uint16_t x884 = 15675U;
	volatile int32_t t194 = 2;

    t194 = (x881<=((x882-x883)/x884));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x885 = -1LL;
	int16_t x886 = INT16_MAX;
	int8_t x888 = -1;
	static volatile int32_t t195 = -40468;

    t195 = (x885<=((x886-x887)/x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x889 = -1;
	uint32_t x890 = UINT32_MAX;
	uint64_t x891 = 48772783LLU;
	int8_t x892 = -1;

    t196 = (x889<=((x890-x891)/x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x893 = -1;
	int32_t x894 = 21;
	volatile int64_t x895 = 1429LL;
	uint16_t x896 = 402U;
	volatile int32_t t197 = -841;

    t197 = (x893<=((x894-x895)/x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x906 = -1;
	int16_t x907 = INT16_MAX;
	static int32_t t198 = -83236001;

    t198 = (x905<=((x906-x907)/x908));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x911 = -1LL;
	int8_t x912 = 2;
	volatile int32_t t199 = -18;

    t199 = (x909<=((x910-x911)/x912));

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

