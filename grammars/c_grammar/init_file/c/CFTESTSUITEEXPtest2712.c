
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

uint16_t x2 = 0U;
int64_t x7 = INT64_MAX;
static int64_t x8 = INT64_MIN;
static volatile int8_t x10 = -1;
int8_t x16 = 1;
uint64_t x24 = 3431653575489LLU;
int32_t t5 = 6;
volatile uint64_t x25 = 18116341736055LLU;
int64_t x28 = 122790LL;
int8_t x29 = -30;
int16_t x42 = INT16_MIN;
int32_t x46 = -1;
int32_t x52 = INT32_MIN;
uint32_t x56 = UINT32_MAX;
int64_t x60 = 202240664356131410LL;
int16_t x64 = INT16_MAX;
static int8_t x65 = 3;
int32_t x66 = INT32_MIN;
static uint32_t x67 = 180U;
int64_t x68 = INT64_MIN;
static volatile int32_t t17 = 140632;
volatile int8_t x78 = INT8_MIN;
uint32_t x80 = 3809528U;
volatile uint8_t x90 = 60U;
int8_t x94 = 3;
volatile int16_t x96 = -1;
int32_t t25 = -3754489;
int64_t x105 = 4516873443941337LL;
volatile uint64_t x109 = UINT64_MAX;
int32_t x117 = 5;
volatile int8_t x118 = -1;
volatile int16_t x121 = INT16_MIN;
volatile int32_t t30 = -66027;
static int32_t x125 = 1;
volatile int32_t t31 = 222808348;
volatile int32_t t33 = 265;
int16_t x141 = 33;
volatile int32_t t35 = -63;
static int64_t x147 = INT64_MAX;
uint64_t x148 = 43953625339786652LLU;
int32_t t37 = 471;
static volatile uint8_t x153 = UINT8_MAX;
static int8_t x165 = 35;
uint16_t x169 = 103U;
int32_t t42 = -2395;
uint8_t x173 = 7U;
int64_t x175 = -30149771LL;
static uint8_t x176 = 17U;
int16_t x178 = INT16_MIN;
static int32_t t44 = -1859;
static int32_t x187 = 116;
static uint32_t x188 = UINT32_MAX;
int32_t x189 = 89103;
volatile uint64_t x191 = UINT64_MAX;
volatile int64_t x194 = INT64_MIN;
int8_t x195 = INT8_MIN;
int16_t x196 = -1;
int16_t x197 = INT16_MIN;
int64_t x200 = 3081LL;
volatile int32_t t50 = -62505;
int32_t x216 = -355862;
volatile uint16_t x229 = 3153U;
static volatile int32_t x230 = -1;
uint8_t x236 = UINT8_MAX;
volatile int32_t t59 = 0;
int64_t x243 = -8046612LL;
volatile uint32_t x246 = 29696U;
int64_t x247 = 1304LL;
int32_t t61 = 343035;
static int16_t x251 = INT16_MAX;
int32_t t63 = 2654467;
volatile int32_t t64 = -368082;
int32_t x271 = 2;
uint16_t x275 = UINT16_MAX;
int64_t x283 = 2262760308934LL;
volatile uint8_t x285 = UINT8_MAX;
uint8_t x293 = 0U;
int32_t t73 = -77;
int32_t x298 = INT32_MIN;
uint64_t x309 = 7LLU;
static uint16_t x311 = UINT16_MAX;
volatile uint8_t x314 = 0U;
int64_t x324 = -1LL;
volatile int16_t x325 = 0;
int32_t x333 = 232766997;
int8_t x340 = INT8_MIN;
uint8_t x343 = UINT8_MAX;
int16_t x348 = INT16_MIN;
static volatile int32_t t86 = 82574258;
uint32_t x354 = UINT32_MAX;
volatile int64_t x355 = INT64_MAX;
static uint64_t x361 = UINT64_MAX;
static int16_t x364 = INT16_MIN;
static volatile int16_t x365 = 4444;
int16_t x368 = -1;
uint32_t x375 = 1214U;
int64_t x395 = -474608222LL;
int8_t x401 = INT8_MIN;
static int32_t x411 = -1;
static volatile int32_t t103 = -33;
uint16_t x417 = 7761U;
static volatile int32_t t105 = -1;
static volatile int32_t t108 = 215;
int32_t x440 = INT32_MIN;
volatile int32_t t109 = 0;
volatile uint32_t x443 = UINT32_MAX;
static int64_t x446 = INT64_MIN;
int64_t x448 = INT64_MIN;
static uint16_t x457 = 17U;
uint16_t x458 = 14U;
static int64_t x465 = INT64_MIN;
static int32_t x466 = -1;
static int64_t x467 = INT64_MAX;
int16_t x470 = -1;
int64_t x479 = INT64_MIN;
int32_t x480 = INT32_MIN;
static int32_t x497 = -1862;
volatile int32_t t125 = 4845;
volatile int32_t t128 = -2382;
int16_t x518 = INT16_MAX;
uint64_t x545 = UINT64_MAX;
volatile int32_t t136 = -1;
static int8_t x552 = INT8_MIN;
int16_t x561 = INT16_MIN;
int8_t x562 = INT8_MIN;
int32_t t140 = -1;
int32_t x568 = INT32_MIN;
volatile int32_t x569 = INT32_MIN;
volatile int32_t t143 = 1843;
volatile int32_t t145 = -1;
uint32_t x586 = UINT32_MAX;
static uint8_t x587 = UINT8_MAX;
volatile int8_t x593 = 12;
int32_t x595 = -1;
volatile int32_t t149 = -307259;
volatile uint64_t x603 = UINT64_MAX;
static volatile int8_t x609 = -1;
uint16_t x610 = UINT16_MAX;
static int32_t t152 = -148;
volatile int32_t t153 = -567186;
int64_t x623 = INT64_MAX;
volatile uint32_t x629 = UINT32_MAX;
int64_t x640 = INT64_MIN;
int8_t x641 = 63;
static uint16_t x644 = 437U;
int8_t x645 = -1;
int64_t x648 = -1LL;
volatile int16_t x649 = INT16_MAX;
uint8_t x651 = UINT8_MAX;
int32_t t165 = -90532;
static uint64_t x666 = UINT64_MAX;
uint64_t x667 = 100103597LLU;
volatile int64_t x670 = -1LL;
int32_t x678 = 11050862;
uint16_t x679 = UINT16_MAX;
volatile int8_t x683 = INT8_MAX;
volatile uint8_t x686 = UINT8_MAX;
int8_t x687 = INT8_MIN;
int32_t t172 = 27;
volatile int16_t x693 = INT16_MIN;
volatile int32_t t173 = -1492538;
int32_t x697 = INT32_MIN;
uint64_t x699 = UINT64_MAX;
static volatile int64_t x700 = -1LL;
int32_t t174 = -515221;
int32_t x701 = -1;
static int64_t x702 = 4207488463LL;
int64_t x705 = INT64_MIN;
uint32_t x713 = 14007U;
uint32_t x714 = 3967U;
volatile int32_t t178 = -122033320;
static int64_t x717 = -1LL;
static uint64_t x722 = 0LLU;
volatile int32_t t180 = 1754698;
static int16_t x726 = -1;
static volatile int32_t t181 = 127936;
static int64_t x741 = INT64_MIN;
int32_t t186 = 885106;
int16_t x749 = INT16_MAX;
volatile int32_t t187 = -684771799;
int16_t x755 = INT16_MIN;
int8_t x757 = 3;
volatile int32_t t189 = 33;
int32_t t190 = 1;
static int16_t x765 = -7;
uint64_t x770 = 310312LLU;
int32_t t193 = -3;
static int16_t x778 = -3;
volatile uint64_t x779 = 685628866LLU;
int32_t x780 = INT32_MIN;
int64_t x781 = -1LL;
volatile int32_t t195 = -46;
uint8_t x785 = 55U;
int32_t x791 = INT32_MAX;
uint8_t x799 = 2U;


void f0(void) {
    	volatile int8_t x1 = 32;
	static int32_t x3 = INT32_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = -101317370;

    t0 = (x1<=((x2^x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int8_t x6 = -1;
	int32_t t1 = 3665;

    t1 = (x5<=((x6^x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 2750629306143LLU;
	int32_t t2 = -475172069;

    t2 = (x9<=((x10^x11)&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int8_t x14 = 1;
	int64_t x15 = INT64_MIN;
	volatile int32_t t3 = 0;

    t3 = (x13<=((x14^x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int8_t x18 = INT8_MIN;
	static int32_t x19 = 21;
	uint32_t x20 = 2459U;
	volatile int32_t t4 = 207603646;

    t4 = (x17<=((x18^x19)&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int64_t x22 = INT64_MAX;
	volatile int16_t x23 = -1;

    t5 = (x21<=((x22^x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = -1;
	static uint8_t x27 = 48U;
	volatile int32_t t6 = -5653;

    t6 = (x25<=((x26^x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x30 = INT32_MIN;
	int8_t x31 = -33;
	int32_t x32 = 0;
	volatile int32_t t7 = 87217112;

    t7 = (x29<=((x30^x31)&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 4U;
	volatile uint64_t x34 = 478096795468LLU;
	uint64_t x35 = 0LLU;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = -971;

    t8 = (x33<=((x34^x35)&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 10U;
	int8_t x38 = 1;
	uint16_t x39 = 0U;
	int64_t x40 = 0LL;
	int32_t t9 = 342836;

    t9 = (x37<=((x38^x39)&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 170623167U;
	int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -162522;

    t10 = (x41<=((x42^x43)&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	static uint64_t x47 = 10033LLU;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 231;

    t11 = (x45<=((x46^x47)&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 10522U;
	int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MIN;
	int32_t t12 = 4;

    t12 = (x49<=((x50^x51)&x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;
	static int16_t x55 = 0;
	int32_t t13 = -6;

    t13 = (x53<=((x54^x55)&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	uint8_t x58 = 0U;
	int64_t x59 = -222LL;
	int32_t t14 = -107575144;

    t14 = (x57<=((x58^x59)&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MAX;
	volatile int16_t x62 = -1;
	static int32_t x63 = 29907;
	volatile int32_t t15 = -23870963;

    t15 = (x61<=((x62^x63)&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t t16 = -72130329;

    t16 = (x65<=((x66^x67)&x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 211315183;
	int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;

    t17 = (x69<=((x70^x71)&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 108U;
	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = -1;
	static volatile int8_t x76 = 2;
	volatile int32_t t18 = -1330;

    t18 = (x73<=((x74^x75)&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	volatile int16_t x79 = -1;
	int32_t t19 = 15972364;

    t19 = (x77<=((x78^x79)&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 7186U;
	int16_t x82 = INT16_MIN;
	int64_t x83 = -1LL;
	int8_t x84 = INT8_MAX;
	static int32_t t20 = -10382;

    t20 = (x81<=((x82^x83)&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 2642LL;
	static uint64_t x86 = 16349894635LLU;
	int32_t x87 = -236086;
	static int32_t x88 = INT32_MIN;
	int32_t t21 = -34807628;

    t21 = (x85<=((x86^x87)&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -1;
	int16_t x91 = -7152;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 2754051;

    t22 = (x89<=((x90^x91)&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	static uint8_t x95 = 21U;
	volatile int32_t t23 = 47;

    t23 = (x93<=((x94^x95)&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 15786097U;
	volatile int16_t x100 = INT16_MIN;
	static int32_t t24 = -88328997;

    t24 = (x97<=((x98^x99)&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	int32_t x102 = 0;
	volatile int32_t x103 = -1;
	int32_t x104 = INT32_MAX;

    t25 = (x101<=((x102^x103)&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = -1LL;
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = 0;
	int32_t t26 = -127077;

    t26 = (x105<=((x106^x107)&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = -11;
	uint32_t x111 = UINT32_MAX;
	static uint8_t x112 = 1U;
	int32_t t27 = 472943;

    t27 = (x109<=((x110^x111)&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x114 = 29305089LL;
	uint16_t x115 = 13U;
	volatile uint64_t x116 = 4777983248965384LLU;
	int32_t t28 = 15;

    t28 = (x113<=((x114^x115)&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x119 = 1348U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = 9904;

    t29 = (x117<=((x118^x119)&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = 9526137LL;
	uint64_t x123 = 2162895583951036330LLU;
	uint8_t x124 = UINT8_MAX;

    t30 = (x121<=((x122^x123)&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x126 = 26;
	volatile uint8_t x127 = UINT8_MAX;
	static int32_t x128 = 325361;

    t31 = (x125<=((x126^x127)&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 19905LLU;
	volatile int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	static int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 29093;

    t32 = (x129<=((x130^x131)&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x135 = INT64_MIN;
	int64_t x136 = -119333507289LL;

    t33 = (x133<=((x134^x135)&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	static volatile int8_t x139 = -1;
	int8_t x140 = 3;
	volatile int32_t t34 = 129128814;

    t34 = (x137<=((x138^x139)&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	volatile int8_t x143 = -1;
	int32_t x144 = -3910565;

    t35 = (x141<=((x142^x143)&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	volatile int16_t x146 = INT16_MAX;
	static int32_t t36 = 56;

    t36 = (x145<=((x146^x147)&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -1LL;
	uint16_t x150 = 226U;
	uint64_t x151 = UINT64_MAX;
	uint32_t x152 = UINT32_MAX;

    t37 = (x149<=((x150^x151)&x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x154 = 64295281230840170LLU;
	int32_t x155 = INT32_MAX;
	static int16_t x156 = 805;
	int32_t t38 = -2052;

    t38 = (x153<=((x154^x155)&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 1;
	int64_t x158 = -1LL;
	int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 478507;

    t39 = (x157<=((x158^x159)&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -345;
	int16_t x162 = 7;
	int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	static int32_t t40 = -2247549;

    t40 = (x161<=((x162^x163)&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;
	int16_t x168 = -1;
	volatile int32_t t41 = 4078;

    t41 = (x165<=((x166^x167)&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = INT64_MAX;
	int8_t x171 = 0;
	volatile uint32_t x172 = UINT32_MAX;

    t42 = (x169<=((x170^x171)&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x174 = 2101638815207901239LLU;
	int32_t t43 = 164;

    t43 = (x173<=((x174^x175)&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 1090U;
	int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

    t44 = (x177<=((x178^x179)&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = 94;
	volatile uint8_t x182 = UINT8_MAX;
	int32_t x183 = -1;
	int64_t x184 = INT64_MAX;
	int32_t t45 = 76844;

    t45 = (x181<=((x182^x183)&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 5936U;
	static int64_t x186 = INT64_MAX;
	int32_t t46 = 167710;

    t46 = (x185<=((x186^x187)&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x190 = 1;
	uint16_t x192 = 0U;
	static int32_t t47 = -18658432;

    t47 = (x189<=((x190^x191)&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	volatile int32_t t48 = 490;

    t48 = (x193<=((x194^x195)&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x198 = 1U;
	static int32_t x199 = INT32_MAX;
	int32_t t49 = -31127493;

    t49 = (x197<=((x198^x199)&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 0U;
	uint8_t x202 = 66U;
	volatile uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MAX;

    t50 = (x201<=((x202^x203)&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 464U;
	int32_t x206 = -1264557;
	uint32_t x207 = 95U;
	volatile uint8_t x208 = 7U;
	int32_t t51 = 3867;

    t51 = (x205<=((x206^x207)&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int32_t x210 = 7057876;
	uint64_t x211 = 5813931089LLU;
	volatile uint32_t x212 = 13U;
	int32_t t52 = 795034;

    t52 = (x209<=((x210^x211)&x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MAX;
	static volatile int32_t t53 = 1020450;

    t53 = (x213<=((x214^x215)&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static uint8_t x218 = 2U;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -731442927;

    t54 = (x217<=((x218^x219)&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MAX;
	uint64_t x222 = 2494674039135109LLU;
	volatile int64_t x223 = INT64_MIN;
	static int64_t x224 = -1LL;
	int32_t t55 = 0;

    t55 = (x221<=((x222^x223)&x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	static int64_t x226 = 470271LL;
	int32_t x227 = INT32_MIN;
	int8_t x228 = -1;
	volatile int32_t t56 = 278;

    t56 = (x225<=((x226^x227)&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x231 = -784353805;
	uint8_t x232 = 0U;
	int32_t t57 = -61;

    t57 = (x229<=((x230^x231)&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = INT8_MAX;
	static int16_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	static int32_t t58 = -26832988;

    t58 = (x233<=((x234^x235)&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 778U;
	int32_t x238 = -74;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = 24555U;

    t59 = (x237<=((x238^x239)&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	static int32_t x242 = -51930;
	uint16_t x244 = 24U;
	volatile int32_t t60 = -1;

    t60 = (x241<=((x242^x243)&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static int64_t x248 = INT64_MIN;

    t61 = (x245<=((x246^x247)&x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x249 = 10673838688696234LLU;
	int8_t x250 = 1;
	int16_t x252 = -1;
	int32_t t62 = 10;

    t62 = (x249<=((x250^x251)&x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	volatile int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;

    t63 = (x253<=((x254^x255)&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 6262U;
	int8_t x258 = -4;
	uint64_t x259 = 233056557279431858LLU;
	int64_t x260 = 229550LL;

    t64 = (x257<=((x258^x259)&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MIN;
	volatile int32_t x262 = INT32_MIN;
	static volatile int64_t x263 = -1LL;
	static volatile int64_t x264 = INT64_MIN;
	int32_t t65 = 104;

    t65 = (x261<=((x262^x263)&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = -4522813071LL;
	volatile int32_t x267 = -139651;
	int8_t x268 = 0;
	volatile int32_t t66 = -701065;

    t66 = (x265<=((x266^x267)&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MAX;
	uint32_t x270 = 8143U;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 9397040;

    t67 = (x269<=((x270^x271)&x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x273 = INT64_MAX;
	static uint64_t x274 = 84610213626LLU;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -174892;

    t68 = (x273<=((x274^x275)&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 315552;
	int32_t x278 = INT32_MAX;
	int32_t x279 = INT32_MIN;
	static int8_t x280 = INT8_MAX;
	int32_t t69 = -1;

    t69 = (x277<=((x278^x279)&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = -1;
	int32_t x282 = -1;
	int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = -238629;

    t70 = (x281<=((x282^x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x286 = INT8_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 1;

    t71 = (x285<=((x286^x287)&x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 4380384493839LL;
	uint64_t x290 = 92450086719048LLU;
	uint16_t x291 = 235U;
	volatile int32_t x292 = -1;
	volatile int32_t t72 = 3458938;

    t72 = (x289<=((x290^x291)&x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = 6104918;
	int8_t x296 = INT8_MAX;

    t73 = (x293<=((x294^x295)&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 37U;
	uint8_t x299 = UINT8_MAX;
	static uint8_t x300 = 4U;
	volatile int32_t t74 = 3;

    t74 = (x297<=((x298^x299)&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MIN;
	static int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -58225191;

    t75 = (x301<=((x302^x303)&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 0U;
	volatile int32_t x306 = -1;
	static int8_t x307 = -1;
	int16_t x308 = -1;
	int32_t t76 = 479;

    t76 = (x305<=((x306^x307)&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x310 = 378LLU;
	int16_t x312 = 397;
	int32_t t77 = 37;

    t77 = (x309<=((x310^x311)&x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 4U;
	volatile int32_t t78 = -945756770;

    t78 = (x313<=((x314^x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 7825796864502425687LLU;
	volatile int64_t x318 = INT64_MAX;
	uint32_t x319 = UINT32_MAX;
	volatile int16_t x320 = 31;
	static volatile int32_t t79 = 48962;

    t79 = (x317<=((x318^x319)&x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int8_t x323 = -8;
	int32_t t80 = -33;

    t80 = (x321<=((x322^x323)&x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x326 = 0U;
	uint64_t x327 = 6515648402LLU;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 5839658;

    t81 = (x325<=((x326^x327)&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MAX;
	static uint16_t x331 = 0U;
	static volatile int8_t x332 = -43;
	static volatile int32_t t82 = -176;

    t82 = (x329<=((x330^x331)&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MAX;
	volatile int32_t t83 = -23966;

    t83 = (x333<=((x334^x335)&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	static int16_t x338 = 23;
	int8_t x339 = INT8_MIN;
	int32_t t84 = -7;

    t84 = (x337<=((x338^x339)&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 1853U;
	uint8_t x342 = 33U;
	static int16_t x344 = 10;
	int32_t t85 = -184;

    t85 = (x341<=((x342^x343)&x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;

    t86 = (x345<=((x346^x347)&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int8_t x350 = 1;
	uint32_t x351 = 560U;
	int8_t x352 = 0;
	volatile int32_t t87 = 962;

    t87 = (x349<=((x350^x351)&x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x356 = 0;
	int32_t t88 = 6;

    t88 = (x353<=((x354^x355)&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 4117;
	uint64_t x358 = 439010651754977021LLU;
	int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t89 = 186054;

    t89 = (x357<=((x358^x359)&x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	int64_t x363 = 0LL;
	volatile int32_t t90 = 152301;

    t90 = (x361<=((x362^x363)&x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint32_t x366 = 30U;
	static uint32_t x367 = 6U;
	int32_t t91 = 242705712;

    t91 = (x365<=((x366^x367)&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 3;
	volatile int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	uint32_t x372 = 888931U;
	int32_t t92 = -44;

    t92 = (x369<=((x370^x371)&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	static uint64_t x374 = 2556103335327357581LLU;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 22461;

    t93 = (x373<=((x374^x375)&x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -26;
	uint8_t x378 = 25U;
	static uint32_t x379 = 3204U;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 1583;

    t94 = (x377<=((x378^x379)&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 4;
	uint8_t x382 = 19U;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t95 = 10864;

    t95 = (x381<=((x382^x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	uint32_t x386 = 5U;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 20624920;

    t96 = (x385<=((x386^x387)&x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = -1;
	static uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = 1214U;
	volatile int32_t t97 = -8;

    t97 = (x389<=((x390^x391)&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -7576;
	int32_t x394 = 481;
	int64_t x396 = -1LL;
	static int32_t t98 = 903879;

    t98 = (x393<=((x394^x395)&x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = -1728923391610733LL;
	uint32_t x398 = 202U;
	static int16_t x399 = INT16_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 200508;

    t99 = (x397<=((x398^x399)&x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = 26LL;
	uint8_t x403 = 0U;
	int32_t x404 = INT32_MIN;
	int32_t t100 = 0;

    t100 = (x401<=((x402^x403)&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	static uint8_t x407 = 25U;
	uint16_t x408 = 214U;
	int32_t t101 = 2517;

    t101 = (x405<=((x406^x407)&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = 86U;
	int8_t x410 = -1;
	volatile int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 1729208;

    t102 = (x409<=((x410^x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 4U;
	volatile int64_t x414 = -121623LL;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = 12U;

    t103 = (x413<=((x414^x415)&x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x418 = UINT8_MAX;
	volatile uint64_t x419 = UINT64_MAX;
	int32_t x420 = 2;
	int32_t t104 = 22406;

    t104 = (x417<=((x418^x419)&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = 4776357055141530630LLU;
	static volatile int8_t x422 = 59;
	int32_t x423 = 832224;
	uint8_t x424 = 24U;

    t105 = (x421<=((x422^x423)&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 2U;
	volatile uint8_t x426 = UINT8_MAX;
	volatile uint32_t x427 = 49935871U;
	uint32_t x428 = UINT32_MAX;
	int32_t t106 = -436613;

    t106 = (x425<=((x426^x427)&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	int16_t x431 = 31;
	uint8_t x432 = 3U;
	int32_t t107 = -766172552;

    t107 = (x429<=((x430^x431)&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	volatile int32_t x435 = 1;
	uint32_t x436 = UINT32_MAX;

    t108 = (x433<=((x434^x435)&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	volatile int32_t x438 = 14;
	int8_t x439 = -15;

    t109 = (x437<=((x438^x439)&x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 971U;
	int8_t x442 = 3;
	int8_t x444 = -1;
	int32_t t110 = -993;

    t110 = (x441<=((x442^x443)&x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 41U;
	int64_t x447 = -1LL;
	volatile int32_t t111 = -977828020;

    t111 = (x445<=((x446^x447)&x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	static int16_t x450 = 19;
	volatile uint16_t x451 = 278U;
	uint64_t x452 = 125940699LLU;
	int32_t t112 = 281130360;

    t112 = (x449<=((x450^x451)&x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = 21LL;
	static int8_t x454 = -1;
	volatile uint64_t x455 = UINT64_MAX;
	static int16_t x456 = 0;
	int32_t t113 = 6634369;

    t113 = (x453<=((x454^x455)&x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x459 = -4;
	int32_t x460 = 872688;
	int32_t t114 = 10;

    t114 = (x457<=((x458^x459)&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = -25075574;
	int32_t x462 = INT32_MIN;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 31U;
	volatile int32_t t115 = -1;

    t115 = (x461<=((x462^x463)&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x468 = 169028569LL;
	int32_t t116 = 1670139;

    t116 = (x465<=((x466^x467)&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -52;
	volatile int8_t x471 = 1;
	uint16_t x472 = UINT16_MAX;
	static int32_t t117 = 26;

    t117 = (x469<=((x470^x471)&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MIN;
	static int32_t x475 = INT32_MAX;
	uint32_t x476 = UINT32_MAX;
	static int32_t t118 = 25705865;

    t118 = (x473<=((x474^x475)&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x477 = INT64_MIN;
	uint64_t x478 = 3043LLU;
	int32_t t119 = 1;

    t119 = (x477<=((x478^x479)&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x481 = 15LL;
	int8_t x482 = 5;
	int32_t x483 = INT32_MIN;
	static volatile uint16_t x484 = 134U;
	static volatile int32_t t120 = 1;

    t120 = (x481<=((x482^x483)&x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1851;
	int16_t x486 = 2;
	static int8_t x487 = INT8_MAX;
	uint64_t x488 = 37622157423688581LLU;
	volatile int32_t t121 = 140672;

    t121 = (x485<=((x486^x487)&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	int64_t x490 = INT64_MIN;
	int32_t x491 = 0;
	volatile uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = -3729;

    t122 = (x489<=((x490^x491)&x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x493 = UINT64_MAX;
	int64_t x494 = 1LL;
	uint32_t x495 = UINT32_MAX;
	static volatile uint8_t x496 = 3U;
	volatile int32_t t123 = 1836;

    t123 = (x493<=((x494^x495)&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MAX;
	int32_t x500 = -1;
	int32_t t124 = -81135;

    t124 = (x497<=((x498^x499)&x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x502 = INT32_MIN;
	volatile uint32_t x503 = 107U;
	int64_t x504 = INT64_MIN;

    t125 = (x501<=((x502^x503)&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = 14U;
	int8_t x506 = 29;
	int64_t x507 = -1731688650771655LL;
	static int32_t x508 = 11997;
	volatile int32_t t126 = 1;

    t126 = (x505<=((x506^x507)&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 20;
	int32_t x510 = 4;
	volatile int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t127 = 61;

    t127 = (x509<=((x510^x511)&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = -1;
	int16_t x514 = -8559;
	int8_t x515 = -1;
	uint8_t x516 = 25U;

    t128 = (x513<=((x514^x515)&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MAX;
	int64_t x519 = 19981012LL;
	int64_t x520 = INT64_MIN;
	volatile int32_t t129 = 239954677;

    t129 = (x517<=((x518^x519)&x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	static int8_t x522 = INT8_MAX;
	uint8_t x523 = UINT8_MAX;
	int32_t x524 = 3338560;
	volatile int32_t t130 = 0;

    t130 = (x521<=((x522^x523)&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int8_t x526 = INT8_MIN;
	volatile int8_t x527 = INT8_MAX;
	int64_t x528 = 77324LL;
	static int32_t t131 = -859041305;

    t131 = (x525<=((x526^x527)&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	uint64_t x530 = UINT64_MAX;
	int32_t x531 = INT32_MAX;
	uint8_t x532 = 7U;
	static volatile int32_t t132 = -5846614;

    t132 = (x529<=((x530^x531)&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 25U;
	uint64_t x534 = UINT64_MAX;
	uint32_t x535 = UINT32_MAX;
	int64_t x536 = -1LL;
	volatile int32_t t133 = -24912624;

    t133 = (x533<=((x534^x535)&x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	uint64_t x538 = 1140LLU;
	static int64_t x539 = INT64_MIN;
	uint8_t x540 = UINT8_MAX;
	static int32_t t134 = -38845;

    t134 = (x537<=((x538^x539)&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MAX;
	int32_t x542 = -1;
	uint32_t x543 = 192U;
	int16_t x544 = -1;
	volatile int32_t t135 = 3693998;

    t135 = (x541<=((x542^x543)&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x546 = -5;
	int32_t x547 = INT32_MAX;
	int32_t x548 = 350924233;

    t136 = (x545<=((x546^x547)&x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 1U;
	volatile int8_t x550 = INT8_MIN;
	int16_t x551 = 1;
	static int32_t t137 = 28;

    t137 = (x549<=((x550^x551)&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	int32_t x554 = -1;
	static int64_t x555 = -1LL;
	static volatile uint32_t x556 = 347154067U;
	int32_t t138 = -3;

    t138 = (x553<=((x554^x555)&x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = -1;
	uint32_t x558 = 1935058648U;
	volatile int64_t x559 = INT64_MAX;
	static int32_t x560 = -3665156;
	static volatile int32_t t139 = 1;

    t139 = (x557<=((x558^x559)&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x563 = INT16_MIN;
	int16_t x564 = -7;

    t140 = (x561<=((x562^x563)&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -64316656778560513LL;
	uint16_t x566 = 0U;
	static uint8_t x567 = 12U;
	int32_t t141 = 275845;

    t141 = (x565<=((x566^x567)&x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = 0;
	int32_t x571 = INT32_MAX;
	int8_t x572 = INT8_MIN;
	int32_t t142 = -13;

    t142 = (x569<=((x570^x571)&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	static volatile int64_t x574 = INT64_MIN;
	int16_t x575 = 0;
	int16_t x576 = INT16_MIN;

    t143 = (x573<=((x574^x575)&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 38276174279359078LLU;
	static uint64_t x578 = 420477403642803LLU;
	volatile int64_t x579 = 68LL;
	int64_t x580 = INT64_MIN;
	volatile int32_t t144 = 63172028;

    t144 = (x577<=((x578^x579)&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = 1031127909445961LLU;
	int64_t x582 = INT64_MAX;
	static int32_t x583 = 99499674;
	int32_t x584 = INT32_MIN;

    t145 = (x581<=((x582^x583)&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 35;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = 19315590;

    t146 = (x585<=((x586^x587)&x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x590 = INT16_MAX;
	static int32_t x591 = -10;
	uint8_t x592 = 3U;
	int32_t t147 = 474858;

    t147 = (x589<=((x590^x591)&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x594 = 1;
	static uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = -297553948;

    t148 = (x593<=((x594^x595)&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	volatile int8_t x598 = INT8_MAX;
	int16_t x599 = INT16_MIN;
	int8_t x600 = -1;

    t149 = (x597<=((x598^x599)&x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -8731;
	uint16_t x602 = UINT16_MAX;
	int8_t x604 = INT8_MAX;
	int32_t t150 = 8853;

    t150 = (x601<=((x602^x603)&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MIN;
	int64_t x606 = 62875440766300186LL;
	static int64_t x607 = -13479LL;
	uint32_t x608 = 386043712U;
	volatile int32_t t151 = 848;

    t151 = (x605<=((x606^x607)&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x611 = INT32_MIN;
	int32_t x612 = INT32_MIN;

    t152 = (x609<=((x610^x611)&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -27611;
	uint16_t x614 = 17135U;
	static int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MIN;

    t153 = (x613<=((x614^x615)&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	static volatile int8_t x618 = INT8_MIN;
	int64_t x619 = -1LL;
	uint64_t x620 = 8LLU;
	int32_t t154 = 1;

    t154 = (x617<=((x618^x619)&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	uint64_t x622 = 28137533LLU;
	int32_t x624 = -8030195;
	volatile int32_t t155 = -332562380;

    t155 = (x621<=((x622^x623)&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint64_t x626 = UINT64_MAX;
	volatile int8_t x627 = INT8_MAX;
	volatile uint16_t x628 = 40U;
	int32_t t156 = -1;

    t156 = (x625<=((x626^x627)&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = INT16_MAX;
	uint64_t x631 = 9891170816LLU;
	static int16_t x632 = -1;
	int32_t t157 = 284728;

    t157 = (x629<=((x630^x631)&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	static uint16_t x634 = UINT16_MAX;
	int64_t x635 = INT64_MAX;
	uint64_t x636 = 0LLU;
	int32_t t158 = -2310;

    t158 = (x633<=((x634^x635)&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -1;
	int32_t x638 = INT32_MIN;
	uint16_t x639 = UINT16_MAX;
	volatile int32_t t159 = 30;

    t159 = (x637<=((x638^x639)&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = UINT16_MAX;
	uint32_t x643 = 34U;
	int32_t t160 = -224;

    t160 = (x641<=((x642^x643)&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MAX;
	uint8_t x647 = UINT8_MAX;
	volatile int32_t t161 = -227073049;

    t161 = (x645<=((x646^x647)&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x650 = -4607;
	int16_t x652 = 82;
	int32_t t162 = 480;

    t162 = (x649<=((x650^x651)&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 29246U;
	volatile int16_t x654 = -1;
	uint8_t x655 = 25U;
	int32_t x656 = -2573742;
	volatile int32_t t163 = -1;

    t163 = (x653<=((x654^x655)&x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -189;
	volatile uint64_t x658 = 333774062517LLU;
	static int16_t x659 = INT16_MIN;
	volatile int8_t x660 = INT8_MAX;
	volatile int32_t t164 = -1841973;

    t164 = (x657<=((x658^x659)&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	volatile int64_t x662 = INT64_MAX;
	uint64_t x663 = UINT64_MAX;
	int8_t x664 = 0;

    t165 = (x661<=((x662^x663)&x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = INT32_MIN;
	volatile int32_t x668 = -1;
	volatile int32_t t166 = 2;

    t166 = (x665<=((x666^x667)&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 593U;
	int32_t x671 = INT32_MIN;
	volatile int8_t x672 = 1;
	static volatile int32_t t167 = -10351962;

    t167 = (x669<=((x670^x671)&x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -221;
	volatile int16_t x674 = -1193;
	int64_t x675 = -1LL;
	int32_t x676 = 1812314;
	volatile int32_t t168 = -1453479;

    t168 = (x673<=((x674^x675)&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = -1;
	int64_t x680 = -2271LL;
	int32_t t169 = -149;

    t169 = (x677<=((x678^x679)&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	uint32_t x682 = UINT32_MAX;
	int64_t x684 = INT64_MIN;
	static volatile int32_t t170 = -1;

    t170 = (x681<=((x682^x683)&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 31U;
	int64_t x688 = -19923887452474310LL;
	int32_t t171 = 1;

    t171 = (x685<=((x686^x687)&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	volatile int64_t x690 = INT64_MAX;
	int16_t x691 = -853;
	static int64_t x692 = -5LL;

    t172 = (x689<=((x690^x691)&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = 0;
	volatile int16_t x695 = -1;
	volatile int8_t x696 = INT8_MIN;

    t173 = (x693<=((x694^x695)&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = INT16_MIN;

    t174 = (x697<=((x698^x699)&x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x703 = -125662LL;
	int8_t x704 = 0;
	volatile int32_t t175 = 30;

    t175 = (x701<=((x702^x703)&x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	static volatile int32_t x708 = -1;
	volatile int32_t t176 = 11083;

    t176 = (x705<=((x706^x707)&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MIN;
	int64_t x712 = -1LL;
	int32_t t177 = -26779;

    t177 = (x709<=((x710^x711)&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x715 = -58088048;
	static int16_t x716 = -4916;

    t178 = (x713<=((x714^x715)&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x718 = UINT32_MAX;
	uint64_t x719 = 1LLU;
	int16_t x720 = -1;
	volatile int32_t t179 = 2807;

    t179 = (x717<=((x718^x719)&x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x721 = 78969596246931LLU;
	int16_t x723 = INT16_MAX;
	int64_t x724 = -1LL;

    t180 = (x721<=((x722^x723)&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 2U;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = UINT8_MAX;

    t181 = (x725<=((x726^x727)&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -7286831447099063LL;
	uint32_t x730 = 30795U;
	volatile uint8_t x731 = 15U;
	volatile int8_t x732 = -1;
	int32_t t182 = 14;

    t182 = (x729<=((x730^x731)&x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	uint32_t x734 = 6740U;
	uint32_t x735 = UINT32_MAX;
	int64_t x736 = -1LL;
	static volatile int32_t t183 = -873764126;

    t183 = (x733<=((x734^x735)&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 1823032226930LL;
	int16_t x738 = -1;
	volatile uint8_t x739 = 0U;
	int32_t x740 = -113089437;
	static volatile int32_t t184 = 106;

    t184 = (x737<=((x738^x739)&x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = INT64_MAX;
	int64_t x743 = -141661680LL;
	static int64_t x744 = INT64_MIN;
	int32_t t185 = 1;

    t185 = (x741<=((x742^x743)&x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 5352;
	static uint64_t x746 = UINT64_MAX;
	int64_t x747 = 9985284595572LL;
	static uint16_t x748 = 1U;

    t186 = (x745<=((x746^x747)&x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = 1321116LLU;
	int64_t x751 = 0LL;
	int8_t x752 = 1;

    t187 = (x749<=((x750^x751)&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	static int8_t x754 = -1;
	volatile int16_t x756 = -3148;
	volatile int32_t t188 = -24222522;

    t188 = (x753<=((x754^x755)&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = 1202;
	uint16_t x759 = 97U;
	static volatile uint16_t x760 = UINT16_MAX;

    t189 = (x757<=((x758^x759)&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	int8_t x762 = -63;
	int64_t x763 = INT64_MIN;
	uint16_t x764 = UINT16_MAX;

    t190 = (x761<=((x762^x763)&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x766 = 350246531291348461LL;
	static int32_t x767 = INT32_MAX;
	static volatile uint64_t x768 = 7861677867997LLU;
	static volatile int32_t t191 = -44;

    t191 = (x765<=((x766^x767)&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = 7349U;
	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	int32_t t192 = 4;

    t192 = (x769<=((x770^x771)&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	static int8_t x774 = -1;
	int8_t x775 = -5;
	volatile int32_t x776 = INT32_MIN;

    t193 = (x773<=((x774^x775)&x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = -1;
	int32_t t194 = 206;

    t194 = (x777<=((x778^x779)&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MAX;
	static int64_t x783 = INT64_MAX;
	static int64_t x784 = INT64_MIN;

    t195 = (x781<=((x782^x783)&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = -4442670LL;
	int8_t x787 = 4;
	static int8_t x788 = INT8_MIN;
	int32_t t196 = 2571;

    t196 = (x785<=((x786^x787)&x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 201824297U;
	int64_t x790 = INT64_MAX;
	int16_t x792 = INT16_MAX;
	int32_t t197 = 57335;

    t197 = (x789<=((x790^x791)&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	static uint8_t x794 = 14U;
	uint64_t x795 = 12223467LLU;
	volatile int32_t x796 = INT32_MAX;
	int32_t t198 = 403014;

    t198 = (x793<=((x794^x795)&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	uint16_t x798 = 138U;
	int16_t x800 = 0;
	volatile int32_t t199 = 18;

    t199 = (x797<=((x798^x799)&x800));

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

