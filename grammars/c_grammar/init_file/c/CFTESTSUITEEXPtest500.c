
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

int16_t x3 = -668;
uint32_t x5 = UINT32_MAX;
static volatile int16_t x7 = INT16_MIN;
int16_t x19 = 489;
static uint32_t x20 = UINT32_MAX;
int16_t x31 = 58;
static volatile int32_t t7 = -5265630;
int8_t x38 = 1;
uint64_t x57 = 1439594830921558LLU;
uint16_t x63 = UINT16_MAX;
int64_t x79 = -20552785908LL;
int16_t x82 = -79;
uint8_t x91 = 1U;
int32_t t21 = 19675016;
volatile int64_t x103 = -1LL;
int16_t x104 = INT16_MAX;
int8_t x105 = -32;
static int8_t x111 = 20;
int16_t x113 = INT16_MAX;
uint64_t x127 = UINT64_MAX;
volatile int32_t t30 = 5543;
volatile int8_t x148 = INT8_MIN;
int64_t x154 = -1LL;
int32_t t35 = -2626714;
uint64_t x159 = UINT64_MAX;
static int8_t x162 = 1;
int16_t x164 = 158;
volatile int32_t t37 = -7;
int64_t x166 = -13600319475826LL;
volatile int32_t t39 = -212622200;
uint8_t x173 = 0U;
static int16_t x174 = INT16_MIN;
int16_t x179 = 1053;
volatile int32_t t41 = -524061;
uint8_t x186 = 1U;
int32_t x188 = INT32_MIN;
volatile int32_t t42 = 187329092;
uint64_t x203 = UINT64_MAX;
int32_t t45 = 510071;
int16_t x214 = INT16_MAX;
static volatile int32_t t46 = 16437699;
int8_t x220 = INT8_MAX;
volatile int32_t t48 = 22948;
static uint64_t x226 = 392871980782LLU;
static volatile uint16_t x227 = 516U;
static int32_t x235 = 26;
static int64_t x240 = -638652237934LL;
static int32_t t52 = 20630465;
uint16_t x243 = 3427U;
volatile int32_t t55 = -194407;
int16_t x255 = 0;
volatile int32_t t56 = 2296;
int64_t x258 = -22299905LL;
static uint64_t x259 = 3028883282LLU;
int32_t t57 = 208412;
volatile int32_t t58 = 105;
static int64_t x278 = INT64_MAX;
int32_t t61 = 9;
int64_t x297 = INT64_MIN;
int16_t x299 = -1;
volatile int32_t t63 = -7427;
int16_t x302 = 4;
uint64_t x303 = 237644LLU;
int32_t t64 = -507143773;
int16_t x306 = -1;
uint8_t x313 = 97U;
static uint32_t x338 = 18U;
int16_t x341 = INT16_MIN;
static uint8_t x342 = 0U;
int16_t x343 = -12643;
int64_t x357 = -1LL;
int32_t x366 = INT32_MIN;
uint32_t x372 = 3209U;
volatile int32_t x373 = 11;
uint64_t x374 = 14LLU;
static uint16_t x395 = 684U;
uint8_t x406 = UINT8_MAX;
int16_t x408 = 658;
int8_t x443 = INT8_MAX;
volatile int16_t x444 = -1;
uint32_t x452 = 140U;
uint16_t x454 = 7U;
int32_t t83 = 480519;
volatile int32_t t85 = 81517;
int16_t x479 = INT16_MIN;
volatile int16_t x499 = INT16_MIN;
uint16_t x507 = 855U;
volatile uint64_t x512 = 8772363615312LLU;
int32_t t91 = -34;
volatile uint64_t x513 = UINT64_MAX;
int8_t x516 = -12;
int32_t t92 = -9;
volatile int8_t x521 = 26;
static int32_t x524 = -29;
int64_t x525 = INT64_MIN;
volatile uint64_t x526 = 7416658637313LLU;
volatile int32_t t96 = 33;
uint16_t x567 = 0U;
int64_t x570 = -1011602040433046LL;
static int16_t x576 = INT16_MIN;
static uint64_t x587 = UINT64_MAX;
static uint8_t x589 = UINT8_MAX;
uint8_t x592 = 3U;
int64_t x594 = -28LL;
uint8_t x603 = UINT8_MAX;
volatile int8_t x612 = INT8_MIN;
volatile int32_t t110 = 0;
int32_t t111 = 2995114;
volatile uint64_t x634 = 7470492980LLU;
int32_t x635 = INT32_MAX;
uint16_t x637 = UINT16_MAX;
volatile int32_t x645 = INT32_MIN;
int8_t x654 = INT8_MAX;
int32_t t122 = 44;
int32_t x672 = -1;
int32_t t124 = 446;
uint16_t x681 = 733U;
uint32_t x683 = 79609U;
volatile int8_t x693 = 12;
static uint32_t x698 = UINT32_MAX;
volatile int16_t x703 = INT16_MIN;
int32_t x706 = INT32_MIN;
int32_t t131 = 4159010;
int64_t x709 = INT64_MAX;
static int16_t x711 = -1;
int16_t x712 = 197;
int32_t x725 = 1110;
static volatile int32_t t136 = -445539;
static int16_t x745 = INT16_MIN;
int64_t x746 = 1LL;
int8_t x762 = INT8_MAX;
uint32_t x763 = 2953U;
int32_t x764 = INT32_MIN;
int8_t x767 = 1;
static int8_t x770 = -1;
static int8_t x776 = -1;
static volatile int32_t t147 = 14210777;
static int8_t x777 = 1;
volatile int32_t t149 = -49;
int64_t x785 = INT64_MAX;
int16_t x790 = -1;
volatile int16_t x795 = -1261;
volatile int8_t x796 = 3;
static volatile int64_t x797 = INT64_MIN;
int32_t t153 = 0;
static int64_t x810 = -1LL;
volatile int32_t t154 = -278603052;
static uint64_t x815 = UINT64_MAX;
int32_t t156 = -379477292;
int32_t x822 = -563290942;
int16_t x825 = INT16_MAX;
int16_t x832 = 6;
volatile int32_t t159 = -367;
static int32_t x845 = INT32_MIN;
int64_t x871 = -355146030987356LL;
int32_t x873 = INT32_MIN;
int16_t x876 = -11;
int32_t t165 = 107131872;
uint64_t x878 = 14783071872697LLU;
static uint64_t x880 = 183411512684LLU;
static uint32_t x881 = 1049419U;
int32_t x883 = -103;
int32_t x888 = -1;
int32_t t168 = -512481;
int32_t x897 = INT32_MIN;
static uint32_t x906 = 16441188U;
volatile uint8_t x907 = 4U;
int32_t x908 = -1384;
static int16_t x915 = INT16_MAX;
uint32_t x921 = UINT32_MAX;
static uint64_t x923 = 55996587551273487LLU;
static int32_t x924 = 15961903;
int32_t t179 = -10;
int64_t x954 = -1LL;
int8_t x955 = 1;
int16_t x956 = -1;
int32_t x964 = INT32_MAX;
int32_t x970 = -26035;
int64_t x971 = -1LL;
volatile int32_t t183 = -3;
int32_t x974 = -1;
uint8_t x975 = UINT8_MAX;
volatile int32_t t187 = 26614;
uint64_t x990 = 629098009828077329LLU;
int8_t x991 = INT8_MAX;
int8_t x1013 = INT8_MAX;
int32_t t190 = -85478;
int8_t x1020 = INT8_MAX;
volatile int32_t t191 = -1443724;
int8_t x1022 = -1;
int16_t x1024 = INT16_MIN;
volatile int16_t x1025 = INT16_MIN;
int64_t x1033 = -25LL;
int16_t x1035 = INT16_MAX;
static volatile int16_t x1052 = INT16_MIN;
volatile int32_t t197 = 252244;
uint8_t x1059 = 7U;
volatile int32_t t198 = 22078920;
uint8_t x1061 = 23U;


void f0(void) {
    	int32_t x1 = -1;
	volatile uint64_t x2 = 45448390722556217LLU;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = -1113;

    t0 = (x1<=((x2*x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = -1586;
	int8_t x8 = -1;
	static int32_t t1 = -1677355;

    t1 = (x5<=((x6*x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x10 = -14600648271039LL;
	volatile uint8_t x11 = 7U;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -326;

    t2 = (x9<=((x10*x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -134033688557543LL;
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = -1LL;
	volatile int8_t x16 = INT8_MAX;
	static int32_t t3 = 1668303;

    t3 = (x13<=((x14*x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 15769;
	int32_t x18 = 7;
	int32_t t4 = -1031690;

    t4 = (x17<=((x18*x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 481576;

    t5 = (x21<=((x22*x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static int8_t x26 = -11;
	volatile int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	int32_t t6 = -4;

    t6 = (x25<=((x26*x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	uint8_t x32 = UINT8_MAX;

    t7 = (x29<=((x30*x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = 27;
	int16_t x34 = INT16_MIN;
	int8_t x35 = -2;
	int8_t x36 = -1;
	int32_t t8 = 14886;

    t8 = (x33<=((x34*x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int8_t x39 = -1;
	uint16_t x40 = 1012U;
	int32_t t9 = 64292;

    t9 = (x37<=((x38*x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 1U;
	volatile int16_t x42 = 176;
	uint16_t x43 = 7872U;
	uint32_t x44 = 4275U;
	static int32_t t10 = 2809;

    t10 = (x41<=((x42*x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int8_t x46 = 28;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 0;

    t11 = (x45<=((x46*x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 7U;
	static int32_t x50 = 128112;
	uint32_t x51 = 0U;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -5361193;

    t12 = (x49<=((x50*x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MAX;
	volatile uint8_t x55 = 4U;
	int8_t x56 = 1;
	volatile int32_t t13 = 0;

    t13 = (x53<=((x54*x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 1029412751495LLU;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 48U;
	int32_t t14 = -44725;

    t14 = (x57<=((x58*x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	static uint64_t x64 = 46LLU;
	int32_t t15 = -162;

    t15 = (x61<=((x62*x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = 0;
	volatile int32_t x66 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = 115352;

    t16 = (x65<=((x66*x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MAX;
	int16_t x70 = 1917;
	static uint16_t x71 = UINT16_MAX;
	int8_t x72 = -16;
	volatile int32_t t17 = 248196;

    t17 = (x69<=((x70*x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 1;
	int32_t x74 = -3671;
	static int64_t x75 = 208LL;
	uint16_t x76 = 0U;
	int32_t t18 = -3;

    t18 = (x73<=((x74*x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 208153263LLU;
	int32_t x78 = 104660926;
	volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = -11;

    t19 = (x77<=((x78*x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	static int16_t x83 = INT16_MIN;
	volatile int64_t x84 = -1LL;
	int32_t t20 = -1;

    t20 = (x81<=((x82*x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MAX;
	uint32_t x92 = 51392U;

    t21 = (x89<=((x90*x91)==x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = UINT32_MAX;
	volatile int8_t x94 = -22;
	int32_t x95 = -47;
	int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -1;

    t22 = (x93<=((x94*x95)==x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -1;
	static volatile int64_t x102 = 25530434753497LL;
	volatile int32_t t23 = 1;

    t23 = (x101<=((x102*x103)==x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x106 = 14U;
	static volatile int16_t x107 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t24 = 7;

    t24 = (x105<=((x106*x107)==x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 68U;
	uint32_t x110 = 190U;
	int8_t x112 = INT8_MIN;
	static int32_t t25 = -2;

    t25 = (x109<=((x110*x111)==x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x114 = 11U;
	int32_t x115 = -1;
	uint64_t x116 = 767611326576708899LLU;
	volatile int32_t t26 = 3227;

    t26 = (x113<=((x114*x115)==x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x117 = 18LLU;
	static int16_t x118 = INT16_MAX;
	uint64_t x119 = 2153299186041LLU;
	int32_t x120 = -859392;
	int32_t t27 = -28587539;

    t27 = (x117<=((x118*x119)==x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x121 = 369U;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int8_t x124 = INT8_MAX;
	static volatile int32_t t28 = 1396607;

    t28 = (x121<=((x122*x123)==x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x125 = 103182U;
	int16_t x126 = -11503;
	int64_t x128 = -1179970704372435424LL;
	static int32_t t29 = -144115506;

    t29 = (x125<=((x126*x127)==x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x129 = INT16_MAX;
	volatile int32_t x130 = 5;
	static int64_t x131 = -1LL;
	int64_t x132 = INT64_MIN;

    t30 = (x129<=((x130*x131)==x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -1LL;
	static volatile int64_t x134 = -268712LL;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 3LLU;
	int32_t t31 = -1850;

    t31 = (x133<=((x134*x135)==x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = UINT32_MAX;
	int8_t x138 = 26;
	int16_t x139 = -181;
	int64_t x140 = INT64_MIN;
	volatile int32_t t32 = -12657;

    t32 = (x137<=((x138*x139)==x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x141 = 1;
	uint64_t x142 = 136435077433950458LLU;
	uint16_t x143 = 1U;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t33 = 20150028;

    t33 = (x141<=((x142*x143)==x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = -7844;
	volatile int8_t x146 = INT8_MIN;
	volatile int32_t x147 = 2469;
	int32_t t34 = -33484642;

    t34 = (x145<=((x146*x147)==x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x153 = INT16_MIN;
	int8_t x155 = 1;
	static volatile int8_t x156 = INT8_MAX;

    t35 = (x153<=((x154*x155)==x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = -1;
	int64_t x158 = INT64_MIN;
	uint64_t x160 = 17LLU;
	int32_t t36 = -6943;

    t36 = (x157<=((x158*x159)==x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = -7LL;
	static volatile int16_t x163 = INT16_MIN;

    t37 = (x161<=((x162*x163)==x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = 222229425691513317LLU;
	int32_t x167 = -1;
	uint16_t x168 = 5752U;
	static volatile int32_t t38 = -33219582;

    t38 = (x165<=((x166*x167)==x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = 9;
	static int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = INT64_MAX;

    t39 = (x169<=((x170*x171)==x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 1U;
	int32_t t40 = 196;

    t40 = (x173<=((x174*x175)==x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = -22;
	int16_t x178 = INT16_MIN;
	volatile int8_t x180 = 0;

    t41 = (x177<=((x178*x179)==x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x185 = UINT8_MAX;
	uint16_t x187 = 106U;

    t42 = (x185<=((x186*x187)==x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x189 = 3U;
	int8_t x190 = INT8_MAX;
	static uint16_t x191 = 25774U;
	int16_t x192 = -1;
	volatile int32_t t43 = -18172675;

    t43 = (x189<=((x190*x191)==x192));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x201 = 423U;
	static volatile int64_t x202 = -1LL;
	uint8_t x204 = 1U;
	static volatile int32_t t44 = -16737;

    t44 = (x201<=((x202*x203)==x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	volatile int64_t x207 = -653834777598693LL;
	uint64_t x208 = UINT64_MAX;

    t45 = (x205<=((x206*x207)==x208));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;

    t46 = (x213<=((x214*x215)==x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x217 = 16306U;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 0U;
	int32_t t47 = -491;

    t47 = (x217<=((x218*x219)==x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 949U;
	int64_t x222 = -62971777LL;
	int32_t x223 = -1;
	int8_t x224 = -1;

    t48 = (x221<=((x222*x223)==x224));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = INT16_MAX;
	volatile int16_t x228 = INT16_MIN;
	static volatile int32_t t49 = -466631235;

    t49 = (x225<=((x226*x227)==x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x229 = 56U;
	static volatile uint64_t x230 = UINT64_MAX;
	int8_t x231 = -19;
	int16_t x232 = INT16_MIN;
	volatile int32_t t50 = 1;

    t50 = (x229<=((x230*x231)==x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x233 = 14U;
	static int16_t x234 = INT16_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t51 = 0;

    t51 = (x233<=((x234*x235)==x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x237 = -31;
	uint64_t x238 = 33235693915253LLU;
	int32_t x239 = -1468423;

    t52 = (x237<=((x238*x239)==x240));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = INT8_MIN;
	static uint32_t x242 = UINT32_MAX;
	int32_t x244 = 57005239;
	int32_t t53 = -2;

    t53 = (x241<=((x242*x243)==x244));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x245 = 924LLU;
	int32_t x246 = -297;
	volatile uint32_t x247 = 137543260U;
	volatile int8_t x248 = INT8_MIN;
	int32_t t54 = 117033110;

    t54 = (x245<=((x246*x247)==x248));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x249 = UINT16_MAX;
	static int8_t x250 = -43;
	volatile int8_t x251 = INT8_MAX;
	int64_t x252 = 3847922LL;

    t55 = (x249<=((x250*x251)==x252));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = INT32_MIN;
	static volatile int8_t x254 = INT8_MIN;
	static uint64_t x256 = 38252145336673524LLU;

    t56 = (x253<=((x254*x255)==x256));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x257 = -1;
	int8_t x260 = INT8_MAX;

    t57 = (x257<=((x258*x259)==x260));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = -122296926745751LL;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = INT8_MAX;
	volatile int64_t x268 = -1LL;

    t58 = (x265<=((x266*x267)==x268));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x277 = INT8_MAX;
	volatile int16_t x279 = -1;
	uint16_t x280 = 20992U;
	int32_t t59 = 51;

    t59 = (x277<=((x278*x279)==x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x285 = INT16_MIN;
	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	volatile uint16_t x288 = 20U;
	int32_t t60 = -4969;

    t60 = (x285<=((x286*x287)==x288));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x289 = -1;
	uint32_t x290 = 1260U;
	int32_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;

    t61 = (x289<=((x290*x291)==x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x293 = 253001LL;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = -1593021LL;
	static int16_t x296 = -6;
	volatile int32_t t62 = -3022;

    t62 = (x293<=((x294*x295)==x296));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x298 = 3498U;
	uint8_t x300 = UINT8_MAX;

    t63 = (x297<=((x298*x299)==x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x301 = INT8_MIN;
	uint16_t x304 = 3946U;

    t64 = (x301<=((x302*x303)==x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x305 = INT64_MIN;
	static int8_t x307 = 3;
	int32_t x308 = 1;
	int32_t t65 = 13577;

    t65 = (x305<=((x306*x307)==x308));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x314 = -1;
	volatile int8_t x315 = INT8_MIN;
	volatile int64_t x316 = 2LL;
	int32_t t66 = 171134956;

    t66 = (x313<=((x314*x315)==x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x337 = INT16_MAX;
	static uint32_t x339 = 1018U;
	uint32_t x340 = 7638665U;
	volatile int32_t t67 = -38744561;

    t67 = (x337<=((x338*x339)==x340));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x344 = 444810U;
	volatile int32_t t68 = 32;

    t68 = (x341<=((x342*x343)==x344));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MIN;
	static int16_t x355 = INT16_MAX;
	uint64_t x356 = 516617LLU;
	int32_t t69 = 78838;

    t69 = (x353<=((x354*x355)==x356));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x358 = 2U;
	uint16_t x359 = 3213U;
	uint8_t x360 = UINT8_MAX;
	int32_t t70 = -31987858;

    t70 = (x357<=((x358*x359)==x360));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x365 = 2U;
	int64_t x367 = -1LL;
	volatile int16_t x368 = 3272;
	int32_t t71 = 319;

    t71 = (x365<=((x366*x367)==x368));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	uint8_t x371 = 13U;
	static int32_t t72 = -151616250;

    t72 = (x369<=((x370*x371)==x372));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x375 = 220U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t73 = -6;

    t73 = (x373<=((x374*x375)==x376));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x385 = 2622LL;
	static int8_t x386 = INT8_MAX;
	int8_t x387 = -3;
	static int8_t x388 = INT8_MIN;
	int32_t t74 = -432240579;

    t74 = (x385<=((x386*x387)==x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = UINT16_MAX;
	static int32_t x396 = INT32_MIN;
	int32_t t75 = 856638;

    t75 = (x393<=((x394*x395)==x396));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x397 = -18;
	uint16_t x398 = UINT16_MAX;
	volatile uint16_t x399 = 2764U;
	static uint8_t x400 = 6U;
	volatile int32_t t76 = 480656566;

    t76 = (x397<=((x398*x399)==x400));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x405 = -42898;
	uint32_t x407 = 3U;
	volatile int32_t t77 = -521;

    t77 = (x405<=((x406*x407)==x408));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x409 = -4283;
	int64_t x410 = -1LL;
	int64_t x411 = -7801263846302LL;
	static uint8_t x412 = UINT8_MAX;
	static int32_t t78 = -262791;

    t78 = (x409<=((x410*x411)==x412));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 2009142381U;
	int32_t x424 = INT32_MIN;
	static int32_t t79 = 245901;

    t79 = (x421<=((x422*x423)==x424));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x441 = -1;
	static int8_t x442 = -2;
	volatile int32_t t80 = 510883581;

    t80 = (x441<=((x442*x443)==x444));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x449 = INT32_MIN;
	static uint16_t x450 = 67U;
	volatile int16_t x451 = -1;
	static int32_t t81 = 182661;

    t81 = (x449<=((x450*x451)==x452));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x453 = INT32_MIN;
	uint64_t x455 = 2482220304LLU;
	volatile int8_t x456 = INT8_MAX;
	static volatile int32_t t82 = -197;

    t82 = (x453<=((x454*x455)==x456));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x461 = 12528313454LLU;
	uint64_t x462 = 249399824316974LLU;
	int64_t x463 = -1LL;
	int32_t x464 = INT32_MIN;

    t83 = (x461<=((x462*x463)==x464));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x465 = 26;
	static uint8_t x466 = 1U;
	int64_t x467 = -72815087LL;
	uint16_t x468 = 3U;
	volatile int32_t t84 = 356;

    t84 = (x465<=((x466*x467)==x468));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x473 = 1710927677U;
	volatile int8_t x474 = 0;
	int32_t x475 = INT32_MIN;
	static int32_t x476 = INT32_MAX;

    t85 = (x473<=((x474*x475)==x476));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x477 = -515421680LL;
	int16_t x478 = INT16_MIN;
	int64_t x480 = INT64_MAX;
	int32_t t86 = 0;

    t86 = (x477<=((x478*x479)==x480));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x489 = INT16_MAX;
	static uint8_t x490 = UINT8_MAX;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = 507U;
	volatile int32_t t87 = -11;

    t87 = (x489<=((x490*x491)==x492));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x497 = 3;
	static volatile uint32_t x498 = 65493U;
	int32_t x500 = -1;
	volatile int32_t t88 = -1370622;

    t88 = (x497<=((x498*x499)==x500));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x501 = 1449435207152554970LLU;
	volatile uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = INT16_MIN;
	int64_t x504 = 1LL;
	volatile int32_t t89 = 4;

    t89 = (x501<=((x502*x503)==x504));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x505 = -1;
	int16_t x506 = INT16_MAX;
	int32_t x508 = INT32_MIN;
	static int32_t t90 = -2576615;

    t90 = (x505<=((x506*x507)==x508));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x509 = -4237924336771LL;
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;

    t91 = (x509<=((x510*x511)==x512));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x514 = 24U;
	static uint64_t x515 = 47LLU;

    t92 = (x513<=((x514*x515)==x516));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x517 = -1;
	volatile int32_t x518 = INT32_MAX;
	uint16_t x519 = 0U;
	uint8_t x520 = 1U;
	volatile int32_t t93 = -22;

    t93 = (x517<=((x518*x519)==x520));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x522 = INT16_MIN;
	volatile uint64_t x523 = 102308LLU;
	static volatile int32_t t94 = -3252;

    t94 = (x521<=((x522*x523)==x524));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x527 = UINT64_MAX;
	int32_t x528 = -437;
	static int32_t t95 = -334;

    t95 = (x525<=((x526*x527)==x528));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x529 = UINT32_MAX;
	uint16_t x530 = 0U;
	uint16_t x531 = 32499U;
	static volatile int8_t x532 = -21;

    t96 = (x529<=((x530*x531)==x532));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x533 = -40582956;
	int8_t x534 = 1;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MAX;
	int32_t t97 = 10620433;

    t97 = (x533<=((x534*x535)==x536));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x541 = -1;
	int8_t x542 = -1;
	static int32_t x543 = 148;
	int32_t x544 = INT32_MAX;
	static volatile int32_t t98 = -346;

    t98 = (x541<=((x542*x543)==x544));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x545 = INT8_MIN;
	volatile int8_t x546 = INT8_MAX;
	uint8_t x547 = 31U;
	int64_t x548 = -58672887LL;
	int32_t t99 = -3157;

    t99 = (x545<=((x546*x547)==x548));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x549 = INT8_MAX;
	volatile uint8_t x550 = 1U;
	int32_t x551 = -1;
	uint64_t x552 = 2159908993310844LLU;
	volatile int32_t t100 = -33;

    t100 = (x549<=((x550*x551)==x552));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x565 = INT16_MAX;
	int16_t x566 = 4925;
	static uint16_t x568 = UINT16_MAX;
	int32_t t101 = -942138444;

    t101 = (x565<=((x566*x567)==x568));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x569 = -1LL;
	volatile uint8_t x571 = UINT8_MAX;
	int64_t x572 = INT64_MAX;
	static volatile int32_t t102 = 80065;

    t102 = (x569<=((x570*x571)==x572));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x573 = INT16_MIN;
	static uint64_t x574 = 2LLU;
	static int32_t x575 = INT32_MIN;
	static volatile int32_t t103 = -47235;

    t103 = (x573<=((x574*x575)==x576));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x577 = 7932U;
	static int32_t x578 = 431944;
	volatile int8_t x579 = INT8_MAX;
	int32_t x580 = INT32_MIN;
	volatile int32_t t104 = 1;

    t104 = (x577<=((x578*x579)==x580));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MIN;
	volatile uint64_t x588 = 52148254984266LLU;
	int32_t t105 = 6924676;

    t105 = (x585<=((x586*x587)==x588));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x590 = UINT8_MAX;
	volatile int8_t x591 = INT8_MAX;
	volatile int32_t t106 = -7329;

    t106 = (x589<=((x590*x591)==x592));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x593 = 256746948851329LL;
	int16_t x595 = 4;
	int8_t x596 = -1;
	static volatile int32_t t107 = -101514729;

    t107 = (x593<=((x594*x595)==x596));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x601 = 5384680LL;
	static int16_t x602 = -3;
	static int8_t x604 = INT8_MIN;
	int32_t t108 = -194521;

    t108 = (x601<=((x602*x603)==x604));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x605 = INT16_MIN;
	uint64_t x606 = UINT64_MAX;
	int16_t x607 = -1;
	volatile int64_t x608 = INT64_MIN;
	volatile int32_t t109 = 10;

    t109 = (x605<=((x606*x607)==x608));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile uint8_t x610 = 2U;
	int8_t x611 = INT8_MIN;

    t110 = (x609<=((x610*x611)==x612));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x617 = INT32_MAX;
	int8_t x618 = -1;
	static int16_t x619 = INT16_MIN;
	int32_t x620 = INT32_MAX;

    t111 = (x617<=((x618*x619)==x620));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x621 = 31904U;
	int16_t x622 = -2;
	uint64_t x623 = 46486949361674LLU;
	int8_t x624 = INT8_MIN;
	volatile int32_t t112 = -72841;

    t112 = (x621<=((x622*x623)==x624));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = -1;
	uint16_t x627 = 1U;
	uint8_t x628 = 8U;
	volatile int32_t t113 = -24754635;

    t113 = (x625<=((x626*x627)==x628));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x629 = -1618;
	uint64_t x630 = 172312271956464LLU;
	volatile int32_t x631 = INT32_MIN;
	int64_t x632 = -62142LL;
	int32_t t114 = 4;

    t114 = (x629<=((x630*x631)==x632));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x633 = INT8_MIN;
	uint8_t x636 = 77U;
	volatile int32_t t115 = -366;

    t115 = (x633<=((x634*x635)==x636));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x638 = 5875LLU;
	static volatile int64_t x639 = 241523LL;
	int64_t x640 = INT64_MIN;
	int32_t t116 = 20;

    t116 = (x637<=((x638*x639)==x640));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = INT8_MIN;
	uint16_t x643 = 24358U;
	int16_t x644 = INT16_MIN;
	volatile int32_t t117 = 7;

    t117 = (x641<=((x642*x643)==x644));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x646 = UINT16_MAX;
	int8_t x647 = -1;
	uint32_t x648 = UINT32_MAX;
	int32_t t118 = -667;

    t118 = (x645<=((x646*x647)==x648));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x649 = 90720894871510601LLU;
	volatile int16_t x650 = 80;
	static uint8_t x651 = 46U;
	uint16_t x652 = 12341U;
	volatile int32_t t119 = -4;

    t119 = (x649<=((x650*x651)==x652));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x653 = -1;
	uint64_t x655 = UINT64_MAX;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t120 = -1525;

    t120 = (x653<=((x654*x655)==x656));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x657 = INT16_MIN;
	uint16_t x658 = UINT16_MAX;
	int16_t x659 = 24;
	volatile int16_t x660 = -100;
	int32_t t121 = -259629970;

    t121 = (x657<=((x658*x659)==x660));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x665 = -1;
	volatile uint64_t x666 = 487349LLU;
	uint32_t x667 = UINT32_MAX;
	volatile uint64_t x668 = UINT64_MAX;

    t122 = (x665<=((x666*x667)==x668));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x669 = INT64_MIN;
	static int64_t x670 = -1LL;
	int32_t x671 = INT32_MIN;
	int32_t t123 = 3825;

    t123 = (x669<=((x670*x671)==x672));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x673 = 53U;
	volatile uint64_t x674 = 1358000887664LLU;
	int64_t x675 = -3986686936835339832LL;
	volatile uint8_t x676 = UINT8_MAX;

    t124 = (x673<=((x674*x675)==x676));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x677 = INT64_MIN;
	static int8_t x678 = -1;
	uint32_t x679 = 21U;
	volatile int32_t x680 = INT32_MAX;
	volatile int32_t t125 = -11256;

    t125 = (x677<=((x678*x679)==x680));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x682 = UINT8_MAX;
	int32_t x684 = INT32_MIN;
	int32_t t126 = 1062341255;

    t126 = (x681<=((x682*x683)==x684));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x685 = 306U;
	int32_t x686 = 138;
	volatile uint32_t x687 = UINT32_MAX;
	int8_t x688 = 1;
	static int32_t t127 = -955;

    t127 = (x685<=((x686*x687)==x688));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x694 = 69279LLU;
	int64_t x695 = INT64_MIN;
	int16_t x696 = -1367;
	int32_t t128 = -11767;

    t128 = (x693<=((x694*x695)==x696));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x697 = INT8_MIN;
	volatile uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MIN;
	static int32_t t129 = -57219164;

    t129 = (x697<=((x698*x699)==x700));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x701 = 7U;
	volatile int8_t x702 = -1;
	volatile uint16_t x704 = 458U;
	volatile int32_t t130 = 33091309;

    t130 = (x701<=((x702*x703)==x704));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x705 = -3;
	uint32_t x707 = 642758146U;
	uint8_t x708 = UINT8_MAX;

    t131 = (x705<=((x706*x707)==x708));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x710 = UINT64_MAX;
	int32_t t132 = -10565;

    t132 = (x709<=((x710*x711)==x712));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x713 = UINT16_MAX;
	int16_t x714 = -1962;
	uint64_t x715 = UINT64_MAX;
	static int16_t x716 = 13;
	volatile int32_t t133 = 184;

    t133 = (x713<=((x714*x715)==x716));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x717 = -1;
	uint16_t x718 = 3U;
	static int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MAX;
	volatile int32_t t134 = -2463;

    t134 = (x717<=((x718*x719)==x720));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x721 = INT64_MIN;
	static int16_t x722 = INT16_MIN;
	static volatile int16_t x723 = INT16_MIN;
	uint16_t x724 = 2810U;
	volatile int32_t t135 = -85276209;

    t135 = (x721<=((x722*x723)==x724));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x726 = 8607700896531679LLU;
	static int16_t x727 = INT16_MIN;
	int16_t x728 = 5;

    t136 = (x725<=((x726*x727)==x728));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x729 = UINT64_MAX;
	static int8_t x730 = 1;
	int16_t x731 = INT16_MIN;
	int16_t x732 = -1;
	static int32_t t137 = -2;

    t137 = (x729<=((x730*x731)==x732));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	static uint16_t x734 = 5850U;
	static volatile int16_t x735 = INT16_MAX;
	int16_t x736 = INT16_MAX;
	volatile int32_t t138 = 34;

    t138 = (x733<=((x734*x735)==x736));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x741 = 193205281LL;
	int64_t x742 = 40049LL;
	static int64_t x743 = -1LL;
	uint64_t x744 = 97145LLU;
	volatile int32_t t139 = -24417281;

    t139 = (x741<=((x742*x743)==x744));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x747 = -1;
	volatile int64_t x748 = INT64_MIN;
	static volatile int32_t t140 = 54998;

    t140 = (x745<=((x746*x747)==x748));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x749 = -1LL;
	volatile uint32_t x750 = 1U;
	int64_t x751 = 21289LL;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t141 = -33;

    t141 = (x749<=((x750*x751)==x752));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x753 = 14383408922852LLU;
	int64_t x754 = INT64_MAX;
	int8_t x755 = 1;
	volatile uint16_t x756 = 28359U;
	volatile int32_t t142 = -6371;

    t142 = (x753<=((x754*x755)==x756));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x757 = UINT64_MAX;
	static int16_t x758 = INT16_MAX;
	int64_t x759 = -1LL;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t143 = -7789;

    t143 = (x757<=((x758*x759)==x760));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x761 = 80U;
	volatile int32_t t144 = 154;

    t144 = (x761<=((x762*x763)==x764));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x765 = 1048;
	volatile int32_t x766 = 1;
	volatile int8_t x768 = -1;
	volatile int32_t t145 = 8857;

    t145 = (x765<=((x766*x767)==x768));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x769 = 10U;
	volatile int16_t x771 = 36;
	volatile uint32_t x772 = 2863U;
	static volatile int32_t t146 = 547155440;

    t146 = (x769<=((x770*x771)==x772));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x773 = 0U;
	static uint32_t x774 = UINT32_MAX;
	int16_t x775 = INT16_MIN;

    t147 = (x773<=((x774*x775)==x776));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x778 = 40339799U;
	int8_t x779 = INT8_MAX;
	volatile int16_t x780 = 3;
	int32_t t148 = 0;

    t148 = (x777<=((x778*x779)==x780));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x781 = INT8_MIN;
	static uint8_t x782 = UINT8_MAX;
	int32_t x783 = -4754679;
	static int32_t x784 = 3;

    t149 = (x781<=((x782*x783)==x784));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x786 = INT8_MAX;
	uint16_t x787 = 2211U;
	static int64_t x788 = -1LL;
	volatile int32_t t150 = 1;

    t150 = (x785<=((x786*x787)==x788));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x789 = 4836LLU;
	volatile int16_t x791 = -14358;
	static int8_t x792 = INT8_MIN;
	int32_t t151 = 2690;

    t151 = (x789<=((x790*x791)==x792));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x793 = UINT16_MAX;
	volatile int64_t x794 = -1LL;
	static volatile int32_t t152 = 15;

    t152 = (x793<=((x794*x795)==x796));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x798 = INT16_MAX;
	int64_t x799 = 1LL;
	volatile int8_t x800 = 5;

    t153 = (x797<=((x798*x799)==x800));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x809 = INT32_MAX;
	uint64_t x811 = 1498324056109LLU;
	volatile uint16_t x812 = UINT16_MAX;

    t154 = (x809<=((x810*x811)==x812));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x813 = INT32_MAX;
	volatile uint32_t x814 = UINT32_MAX;
	volatile int16_t x816 = INT16_MIN;
	int32_t t155 = 28655440;

    t155 = (x813<=((x814*x815)==x816));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x817 = -1;
	uint32_t x818 = 20U;
	volatile uint32_t x819 = UINT32_MAX;
	int64_t x820 = -1LL;

    t156 = (x817<=((x818*x819)==x820));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x821 = -1;
	volatile int16_t x823 = -1;
	int32_t x824 = -1;
	int32_t t157 = 535155;

    t157 = (x821<=((x822*x823)==x824));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x826 = -1LL;
	int8_t x827 = INT8_MIN;
	int64_t x828 = -1LL;
	int32_t t158 = -2322968;

    t158 = (x825<=((x826*x827)==x828));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x829 = -846798236497318207LL;
	uint32_t x830 = UINT32_MAX;
	int16_t x831 = -5620;

    t159 = (x829<=((x830*x831)==x832));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x837 = INT32_MAX;
	static int16_t x838 = -1;
	volatile int64_t x839 = -1LL;
	int64_t x840 = INT64_MAX;
	volatile int32_t t160 = 0;

    t160 = (x837<=((x838*x839)==x840));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x846 = 0U;
	int16_t x847 = 1282;
	volatile uint64_t x848 = 251257889LLU;
	int32_t t161 = 20891197;

    t161 = (x845<=((x846*x847)==x848));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x857 = -1;
	uint64_t x858 = 35LLU;
	int8_t x859 = -1;
	int8_t x860 = -1;
	int32_t t162 = 11956118;

    t162 = (x857<=((x858*x859)==x860));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x865 = -1;
	uint32_t x866 = 24U;
	int8_t x867 = INT8_MIN;
	int8_t x868 = INT8_MIN;
	int32_t t163 = -1659128;

    t163 = (x865<=((x866*x867)==x868));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x869 = 963139LLU;
	static uint64_t x870 = 1835951659710LLU;
	static uint64_t x872 = UINT64_MAX;
	static volatile int32_t t164 = 1;

    t164 = (x869<=((x870*x871)==x872));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x874 = -1;
	static volatile int8_t x875 = 1;

    t165 = (x873<=((x874*x875)==x876));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x877 = INT16_MIN;
	int32_t x879 = 817;
	int32_t t166 = 40444;

    t166 = (x877<=((x878*x879)==x880));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x882 = 58LLU;
	int8_t x884 = INT8_MIN;
	int32_t t167 = 15;

    t167 = (x881<=((x882*x883)==x884));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x885 = INT64_MIN;
	volatile int16_t x886 = INT16_MAX;
	uint64_t x887 = 461121896942LLU;

    t168 = (x885<=((x886*x887)==x888));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x889 = INT8_MAX;
	static uint32_t x890 = 1853U;
	int64_t x891 = 226373203781LL;
	static uint32_t x892 = 0U;
	volatile int32_t t169 = 1902873;

    t169 = (x889<=((x890*x891)==x892));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x898 = 2U;
	int16_t x899 = INT16_MAX;
	volatile uint8_t x900 = 21U;
	static volatile int32_t t170 = 677;

    t170 = (x897<=((x898*x899)==x900));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x905 = INT16_MIN;
	static int32_t t171 = 1;

    t171 = (x905<=((x906*x907)==x908));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x909 = INT16_MIN;
	int8_t x910 = INT8_MIN;
	int8_t x911 = INT8_MIN;
	volatile uint32_t x912 = 4U;
	volatile int32_t t172 = 180603;

    t172 = (x909<=((x910*x911)==x912));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x913 = INT8_MIN;
	int32_t x914 = -1;
	int16_t x916 = -1;
	int32_t t173 = -3723688;

    t173 = (x913<=((x914*x915)==x916));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x922 = 27679LLU;
	static volatile int32_t t174 = -11;

    t174 = (x921<=((x922*x923)==x924));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x925 = INT32_MIN;
	static uint16_t x926 = 439U;
	uint32_t x927 = 21834U;
	int16_t x928 = 0;
	static int32_t t175 = -23658401;

    t175 = (x925<=((x926*x927)==x928));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x933 = -1;
	volatile int8_t x934 = -1;
	int32_t x935 = 266401;
	uint16_t x936 = UINT16_MAX;
	volatile int32_t t176 = 318574706;

    t176 = (x933<=((x934*x935)==x936));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x937 = 36;
	volatile int32_t x938 = INT32_MAX;
	uint8_t x939 = 0U;
	volatile int16_t x940 = INT16_MIN;
	volatile int32_t t177 = 475637882;

    t177 = (x937<=((x938*x939)==x940));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x945 = -1;
	int32_t x946 = -596800;
	volatile int16_t x947 = -1;
	volatile int64_t x948 = INT64_MAX;
	int32_t t178 = -62;

    t178 = (x945<=((x946*x947)==x948));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x949 = UINT16_MAX;
	int8_t x950 = -1;
	uint8_t x951 = 5U;
	uint16_t x952 = 88U;

    t179 = (x949<=((x950*x951)==x952));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x953 = 508066093595LL;
	static int32_t t180 = -29475165;

    t180 = (x953<=((x954*x955)==x956));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x961 = INT32_MAX;
	uint32_t x962 = 61309378U;
	static int8_t x963 = 25;
	volatile int32_t t181 = -126467790;

    t181 = (x961<=((x962*x963)==x964));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x965 = 2900;
	int8_t x966 = INT8_MAX;
	uint64_t x967 = 14239LLU;
	int64_t x968 = INT64_MIN;
	int32_t t182 = 0;

    t182 = (x965<=((x966*x967)==x968));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x969 = INT32_MIN;
	int8_t x972 = INT8_MAX;

    t183 = (x969<=((x970*x971)==x972));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x973 = 4105;
	int16_t x976 = 1;
	int32_t t184 = -2;

    t184 = (x973<=((x974*x975)==x976));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x977 = -1;
	int16_t x978 = -1;
	static int8_t x979 = INT8_MIN;
	uint32_t x980 = 100U;
	volatile int32_t t185 = -1;

    t185 = (x977<=((x978*x979)==x980));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x981 = INT32_MIN;
	uint8_t x982 = 36U;
	uint64_t x983 = 71841426521118211LLU;
	uint64_t x984 = 134019182755633LLU;
	int32_t t186 = -104;

    t186 = (x981<=((x982*x983)==x984));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x985 = INT8_MIN;
	int8_t x986 = INT8_MAX;
	volatile int8_t x987 = 55;
	int64_t x988 = -1LL;

    t187 = (x985<=((x986*x987)==x988));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x989 = -7843595;
	int16_t x992 = INT16_MAX;
	static int32_t t188 = 120;

    t188 = (x989<=((x990*x991)==x992));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x997 = UINT16_MAX;
	static uint16_t x998 = 16761U;
	volatile uint64_t x999 = UINT64_MAX;
	static int32_t x1000 = -1063061726;
	static volatile int32_t t189 = -683694776;

    t189 = (x997<=((x998*x999)==x1000));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1014 = 29U;
	int32_t x1015 = -49;
	uint64_t x1016 = UINT64_MAX;

    t190 = (x1013<=((x1014*x1015)==x1016));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1017 = 56U;
	static uint64_t x1018 = 427255023157LLU;
	volatile int8_t x1019 = INT8_MIN;

    t191 = (x1017<=((x1018*x1019)==x1020));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1021 = -1;
	int16_t x1023 = -1;
	int32_t t192 = -22803;

    t192 = (x1021<=((x1022*x1023)==x1024));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1026 = -26694LL;
	int8_t x1027 = 3;
	volatile int16_t x1028 = INT16_MIN;
	int32_t t193 = 28642;

    t193 = (x1025<=((x1026*x1027)==x1028));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1034 = 66U;
	static int32_t x1036 = 88592713;
	int32_t t194 = -72361815;

    t194 = (x1033<=((x1034*x1035)==x1036));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1037 = 14U;
	int8_t x1038 = INT8_MIN;
	int8_t x1039 = INT8_MIN;
	int32_t x1040 = -8678076;
	volatile int32_t t195 = 391221;

    t195 = (x1037<=((x1038*x1039)==x1040));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1041 = -12430;
	uint64_t x1042 = 2LLU;
	static int8_t x1043 = INT8_MIN;
	int32_t x1044 = -1;
	static volatile int32_t t196 = 27105771;

    t196 = (x1041<=((x1042*x1043)==x1044));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1049 = 1;
	uint32_t x1050 = UINT32_MAX;
	uint8_t x1051 = 1U;

    t197 = (x1049<=((x1050*x1051)==x1052));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1057 = 562365325;
	volatile int32_t x1058 = 48;
	int64_t x1060 = INT64_MIN;

    t198 = (x1057<=((x1058*x1059)==x1060));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1062 = 11LLU;
	int64_t x1063 = INT64_MIN;
	int16_t x1064 = -50;
	volatile int32_t t199 = 715613178;

    t199 = (x1061<=((x1062*x1063)==x1064));

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

