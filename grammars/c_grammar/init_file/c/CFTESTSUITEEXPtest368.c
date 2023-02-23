
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

static volatile int8_t x3 = -1;
int32_t x5 = INT32_MIN;
int64_t x10 = -1LL;
volatile uint8_t x24 = UINT8_MAX;
int16_t x28 = 712;
volatile int64_t t4 = -252036LL;
volatile int16_t x35 = 3347;
static volatile int32_t x36 = -10;
uint16_t x41 = UINT16_MAX;
static uint32_t x42 = 3U;
static volatile int64_t x45 = INT64_MIN;
int16_t x53 = 1;
int16_t x54 = 1;
static int64_t x60 = -24475314760LL;
int64_t x62 = -84793767LL;
volatile int16_t x74 = 1;
uint32_t x80 = 11452U;
volatile int64_t x85 = 164756711LL;
volatile uint32_t x86 = UINT32_MAX;
int64_t x89 = 4098707184893LL;
uint64_t x93 = UINT64_MAX;
static volatile int32_t x96 = 812044;
static volatile int8_t x105 = INT8_MIN;
volatile int16_t x130 = INT16_MIN;
int16_t x139 = -2366;
volatile int8_t x148 = 3;
static int8_t x151 = -1;
int64_t x154 = -1LL;
int32_t x156 = INT32_MIN;
volatile uint64_t t33 = 1170969989156829832LLU;
int32_t x173 = 3465403;
uint32_t x179 = 4214736U;
uint32_t t36 = 247321U;
uint32_t t38 = 21U;
static uint32_t x190 = 221673U;
uint16_t x195 = 0U;
static uint32_t x196 = UINT32_MAX;
int8_t x197 = -1;
volatile int32_t x201 = 6344735;
static volatile uint64_t t42 = 933LLU;
static int64_t x210 = 977533254332LL;
uint64_t t44 = 0LLU;
uint64_t x215 = 2041458216LLU;
static int8_t x218 = -49;
uint64_t x219 = 2688988810LLU;
int16_t x253 = INT16_MIN;
volatile int64_t t52 = -137578516640743LL;
uint16_t x261 = 36U;
uint64_t x263 = UINT64_MAX;
uint64_t x276 = 22787530035088468LLU;
int8_t x298 = INT8_MIN;
int32_t t62 = 0;
int64_t t63 = 11494611683072LL;
int16_t x305 = -1;
int64_t x315 = -1LL;
volatile int64_t t66 = -7829115LL;
uint64_t x320 = 4242703967328808LLU;
static int16_t x323 = -1;
uint64_t x331 = 50337407565470256LLU;
static uint16_t x336 = 49U;
int64_t x337 = -1LL;
uint16_t x347 = 143U;
static int64_t x349 = -12060263333LL;
uint16_t x352 = UINT16_MAX;
int32_t x354 = -1;
static volatile int64_t x355 = -1LL;
static volatile int32_t x356 = -1;
uint64_t x363 = 5594LLU;
volatile uint64_t t77 = 1096564888272834292LLU;
static uint64_t x366 = UINT64_MAX;
static int8_t x369 = 1;
volatile int32_t x373 = INT32_MIN;
uint32_t t80 = 2812848U;
int16_t x378 = -3;
uint64_t x383 = 446LLU;
uint16_t x384 = 145U;
int16_t x386 = INT16_MIN;
uint64_t x387 = 51400329LLU;
volatile int64_t t84 = -677842225514252LL;
int32_t x398 = INT32_MAX;
static int32_t t86 = 2;
static uint64_t x402 = 52644214270LLU;
int8_t x405 = -1;
uint16_t x409 = UINT16_MAX;
volatile int8_t x421 = INT8_MIN;
int32_t x426 = -1;
static uint64_t x435 = 313LLU;
volatile int32_t x437 = INT32_MAX;
uint16_t x438 = 27410U;
static volatile uint8_t x439 = 1U;
int32_t x440 = INT32_MAX;
int64_t x455 = 1013988780407755416LL;
uint64_t x462 = UINT64_MAX;
volatile int32_t x464 = INT32_MAX;
volatile int64_t t100 = 9LL;
int16_t x471 = INT16_MIN;
uint32_t t102 = 390446074U;
int32_t x489 = INT32_MIN;
volatile int32_t t104 = -5445;
static volatile int32_t x500 = INT32_MIN;
int8_t x503 = INT8_MIN;
int32_t x505 = INT32_MIN;
uint8_t x507 = 0U;
static int64_t t108 = 91206LL;
volatile uint32_t x515 = 23455U;
static uint32_t t111 = 768346U;
int8_t x527 = INT8_MIN;
volatile int32_t t113 = -505537665;
uint32_t x530 = 11U;
uint32_t x532 = 619779U;
uint32_t t114 = 1414607U;
uint64_t t115 = 26535362LLU;
int16_t x538 = 1101;
int64_t x541 = 4LL;
static volatile uint64_t x542 = 150301544145033324LLU;
int32_t x544 = -1;
uint64_t t117 = 42314LLU;
int16_t x546 = -1;
uint16_t x548 = 0U;
int16_t x551 = INT16_MIN;
int32_t t119 = 6918;
int8_t x556 = INT8_MIN;
uint8_t x568 = 24U;
uint32_t x575 = UINT32_MAX;
volatile int32_t x578 = INT32_MAX;
volatile int8_t x582 = -1;
volatile uint64_t t126 = 30335555720073LLU;
int64_t x598 = -1LL;
uint32_t x599 = UINT32_MAX;
static int8_t x600 = INT8_MIN;
int8_t x602 = INT8_MIN;
volatile int64_t t131 = 113LL;
int64_t x611 = INT64_MIN;
static volatile uint8_t x615 = UINT8_MAX;
int16_t x617 = INT16_MIN;
uint8_t x622 = UINT8_MAX;
int8_t x623 = -1;
volatile uint64_t t135 = 297321LLU;
volatile uint8_t x626 = 25U;
volatile int32_t t137 = -20807;
volatile int32_t x633 = INT32_MIN;
static volatile uint16_t x637 = 5894U;
static int8_t x646 = INT8_MIN;
int32_t t141 = 1368484;
uint16_t x652 = 13U;
volatile int16_t x657 = INT16_MAX;
int32_t x660 = INT32_MIN;
int64_t x663 = INT64_MIN;
static int64_t x665 = 15120126587LL;
int16_t x666 = -1;
static int32_t x667 = INT32_MIN;
volatile int8_t x669 = INT8_MIN;
int32_t t147 = 293858;
uint32_t x673 = 241309099U;
volatile uint32_t t151 = 19869U;
uint64_t x695 = UINT64_MAX;
int64_t x696 = INT64_MIN;
volatile int16_t x707 = INT16_MIN;
uint32_t x728 = 3U;
uint64_t x729 = UINT64_MAX;
uint32_t x737 = 134U;
uint32_t x742 = 4326U;
int8_t x743 = -8;
int8_t x744 = -1;
int64_t x775 = -3LL;
static int8_t x778 = 0;
int64_t x780 = -4223LL;
volatile int64_t x782 = -1219135519206170080LL;
uint32_t x793 = UINT32_MAX;
int32_t x806 = INT32_MIN;
int8_t x809 = -1;
volatile int32_t x820 = INT32_MIN;
static volatile int32_t t178 = -1431;
uint32_t x821 = 3U;
int16_t x850 = INT16_MIN;
uint64_t x853 = UINT64_MAX;
static volatile int8_t x855 = -3;
static volatile uint64_t t183 = 313266LLU;
uint64_t t184 = 113536LLU;
int16_t x863 = INT16_MAX;
volatile uint64_t x869 = 4288713976198LLU;
static int8_t x871 = -1;
static int32_t x872 = INT32_MIN;
volatile uint64_t t187 = 905LLU;
volatile int32_t t188 = -63665889;
volatile uint32_t x877 = 5U;
static int16_t x880 = 100;
static int8_t x882 = 0;
uint16_t x884 = UINT16_MAX;
static volatile int32_t t190 = -144324732;
int32_t t191 = 2797754;
uint64_t x891 = 224507103134779LLU;
uint8_t x892 = UINT8_MAX;
volatile uint8_t x899 = 0U;
uint8_t x903 = UINT8_MAX;
uint64_t t194 = 24155219470202LLU;
int16_t x906 = -1;
int64_t t196 = -314511838276048LL;
uint8_t x915 = 3U;
uint16_t x917 = 4U;
volatile uint32_t x920 = 234144U;
volatile uint32_t t198 = 289307U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -1470LL;

    t0 = (x1/((x2-x3)|x4));

    if (t0 != -255LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -1;
	static uint16_t x7 = UINT16_MAX;
	int64_t x8 = 36500403LL;
	int64_t t1 = 2269LL;

    t1 = (x5/((x6-x7)|x8));

    if (t1 != 681957LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int64_t x11 = 0LL;
	static uint64_t x12 = 7364892538121LLU;
	volatile uint64_t t2 = 15LLU;

    t2 = (x9/((x10-x11)|x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x21 = 5400638U;
	volatile int8_t x22 = INT8_MAX;
	static uint8_t x23 = UINT8_MAX;
	volatile uint32_t t3 = 2827573U;

    t3 = (x21/((x22-x23)|x24));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MAX;
	volatile int16_t x27 = INT16_MAX;

    t4 = (x25/((x26-x27)|x28));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = INT32_MIN;
	static int8_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	volatile int16_t x32 = -79;
	static int32_t t5 = 33603;

    t5 = (x29/((x30-x31)|x32));

    if (t5 != 27183337) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	static uint32_t x34 = 462852U;
	volatile uint32_t t6 = 47942879U;

    t6 = (x33/((x34-x35)|x36));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x37 = INT8_MAX;
	uint32_t x38 = 1934309341U;
	int64_t x39 = -11LL;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t7 = -71997971250476259LL;

    t7 = (x37/((x38-x39)|x40));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x43 = 2;
	int16_t x44 = -4161;
	uint32_t t8 = 1258U;

    t8 = (x41/((x42-x43)|x44));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x46 = 1;
	uint16_t x47 = 621U;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 13LLU;

    t9 = (x45/((x46-x47)|x48));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 1557556LLU;
	volatile uint64_t t10 = 7LLU;

    t10 = (x53/((x54-x55)|x56));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -176;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 31U;
	int64_t t11 = -1022747263368660LL;

    t11 = (x57/((x58-x59)|x60));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x61 = 6U;
	uint32_t x63 = 8736U;
	uint16_t x64 = UINT16_MAX;
	int64_t t12 = 17400807465LL;

    t12 = (x61/((x62-x63)|x64));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x65 = UINT16_MAX;
	static int32_t x66 = -2;
	volatile int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t13 = 91;

    t13 = (x65/((x66-x67)|x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = -1;
	volatile int8_t x70 = -2;
	uint32_t x71 = 391U;
	uint64_t x72 = 226492093159493LLU;
	volatile uint64_t t14 = 174300LLU;

    t14 = (x69/((x70-x71)|x72));

    if (t14 != 81444LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile uint32_t t15 = 0U;

    t15 = (x73/((x74-x75)|x76));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	uint8_t x78 = 125U;
	static volatile int8_t x79 = INT8_MIN;
	int64_t t16 = 5LL;

    t16 = (x77/((x78-x79)|x80));

    if (t16 != -800848488048517LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x81 = 143277409U;
	int16_t x82 = -1340;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 15531U;
	uint32_t t17 = 5U;

    t17 = (x81/((x82-x83)|x84));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x87 = -6LL;
	static int64_t x88 = 96312362405LL;
	volatile int64_t t18 = 1359436LL;

    t18 = (x85/((x86-x87)|x88));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x90 = 19U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = -3;
	int64_t t19 = -2422504576LL;

    t19 = (x89/((x90-x91)|x92));

    if (t19 != -4098707184893LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x94 = INT32_MIN;
	static int64_t x95 = 132817945LL;
	static volatile uint64_t t20 = 1299602335624368LLU;

    t20 = (x93/((x94-x95)|x96));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MIN;
	uint8_t x98 = 7U;
	int64_t x99 = -13LL;
	int32_t x100 = -1;
	int64_t t21 = -101110LL;

    t21 = (x97/((x98-x99)|x100));

    if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = -1;
	volatile uint8_t x102 = 2U;
	static int32_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	static int32_t t22 = -1;

    t22 = (x101/((x102-x103)|x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x106 = 8776321935375399LLU;
	static int64_t x107 = INT64_MIN;
	volatile int8_t x108 = INT8_MIN;
	uint64_t t23 = 18759LLU;

    t23 = (x105/((x106-x107)|x108));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x113 = INT64_MIN;
	static volatile int64_t x114 = 1123141441864902625LL;
	int8_t x115 = 1;
	int64_t x116 = -23787LL;
	int64_t t24 = 698LL;

    t24 = (x113/((x114-x115)|x116));

    if (t24 != 409218334302975LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = INT16_MAX;
	int32_t x123 = 139215;
	int8_t x124 = -1;
	volatile int32_t t25 = -470753;

    t25 = (x121/((x122-x123)|x124));

    if (t25 != -255) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = -1;
	static uint64_t x126 = UINT64_MAX;
	static int32_t x127 = INT32_MAX;
	volatile int64_t x128 = INT64_MIN;
	volatile uint64_t t26 = 319161513303076LLU;

    t26 = (x125/((x126-x127)|x128));

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x131 = 10;
	int32_t x132 = -1;
	int32_t t27 = 101;

    t27 = (x129/((x130-x131)|x132));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	static uint8_t x140 = 15U;
	static int32_t t28 = 65939720;

    t28 = (x137/((x138-x139)|x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MAX;
	uint16_t x147 = 0U;
	static volatile int32_t t29 = -3268970;

    t29 = (x145/((x146-x147)|x148));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x149 = 27U;
	volatile uint32_t x150 = 6U;
	int8_t x152 = -1;
	volatile uint32_t t30 = 22U;

    t30 = (x149/((x150-x151)|x152));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x153 = UINT16_MAX;
	uint32_t x155 = 91U;
	int64_t t31 = 8629022823LL;

    t31 = (x153/((x154-x155)|x156));

    if (t31 != -712LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x161 = 4147587164LLU;
	volatile int64_t x162 = INT64_MIN;
	volatile int64_t x163 = INT64_MIN;
	uint8_t x164 = 90U;
	uint64_t t32 = 275LLU;

    t32 = (x161/((x162-x163)|x164));

    if (t32 != 46084301LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = UINT8_MAX;
	static volatile int64_t x167 = -1LL;
	uint16_t x168 = 10U;

    t33 = (x165/((x166-x167)|x168));

    if (t33 != 69348661931238915LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x169 = 17596085000LL;
	uint8_t x170 = 0U;
	volatile uint64_t x171 = 151719228LLU;
	int16_t x172 = -9;
	volatile uint64_t t34 = 38LLU;

    t34 = (x169/((x170-x171)|x172));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x174 = INT16_MAX;
	uint16_t x175 = 4U;
	int8_t x176 = -1;
	static volatile int32_t t35 = -14;

    t35 = (x173/((x174-x175)|x176));

    if (t35 != -3465403) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x177 = 69680U;
	int8_t x178 = 7;
	static int16_t x180 = INT16_MAX;

    t36 = (x177/((x178-x179)|x180));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x181 = INT32_MIN;
	uint64_t x182 = 1617LLU;
	int64_t x183 = INT64_MIN;
	int8_t x184 = -1;
	volatile uint64_t t37 = 108325059813669133LLU;

    t37 = (x181/((x182-x183)|x184));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x185 = 1967021U;
	uint8_t x186 = 15U;
	volatile uint8_t x187 = 2U;
	int16_t x188 = INT16_MIN;

    t38 = (x185/((x186-x187)|x188));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x189 = INT8_MIN;
	volatile int32_t x191 = -1;
	uint8_t x192 = 65U;
	static volatile uint32_t t39 = 601943118U;

    t39 = (x189/((x190-x191)|x192));

    if (t39 != 19375U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x193 = UINT64_MAX;
	int8_t x194 = 1;
	uint64_t t40 = 84104874131LLU;

    t40 = (x193/((x194-x195)|x196));

    if (t40 != 4294967297LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x198 = -68280LL;
	uint8_t x199 = 34U;
	uint16_t x200 = 9U;
	volatile int64_t t41 = -19411LL;

    t41 = (x197/((x198-x199)|x200));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x202 = 301LLU;
	volatile int32_t x203 = INT32_MAX;
	int16_t x204 = -1;

    t42 = (x201/((x202-x203)|x204));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = 378990517;
	int64_t x206 = -189719742518LL;
	int64_t x207 = INT64_MIN;
	uint8_t x208 = 0U;
	static volatile int64_t t43 = 17231LL;

    t43 = (x205/((x206-x207)|x208));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	int32_t x211 = -16;
	uint16_t x212 = 5517U;

    t44 = (x209/((x210-x211)|x212));

    if (t44 != 18870707LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	uint32_t x216 = 0U;
	volatile uint64_t t45 = 2743371964307394LLU;

    t45 = (x213/((x214-x215)|x216));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x217 = INT32_MIN;
	static int32_t x220 = 1900798;
	volatile uint64_t t46 = 106377LLU;

    t46 = (x217/((x218-x219)|x220));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = -1;
	int64_t x224 = INT64_MIN;
	static volatile uint64_t t47 = 29678871969796LLU;

    t47 = (x221/((x222-x223)|x224));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x225 = 1986338321LL;
	int16_t x226 = -1;
	static int32_t x227 = 84;
	int32_t x228 = -3083;
	volatile int64_t t48 = -1633839LL;

    t48 = (x225/((x226-x227)|x228));

    if (t48 != -1986338321LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x237 = 2253967061879916785LLU;
	volatile int8_t x238 = INT8_MAX;
	volatile int16_t x239 = -30;
	int16_t x240 = INT16_MAX;
	volatile uint64_t t49 = 225496886397744700LLU;

    t49 = (x237/((x238-x239)|x240));

    if (t49 != 68787715136567LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = -1;
	int64_t x246 = -424163122991862LL;
	static int16_t x247 = -19;
	uint8_t x248 = 7U;
	int64_t t50 = -81494787704446440LL;

    t50 = (x245/((x246-x247)|x248));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x249 = -1497339333LL;
	int8_t x250 = INT8_MIN;
	static int32_t x251 = 1948;
	uint32_t x252 = UINT32_MAX;
	int64_t t51 = 237424677LL;

    t51 = (x249/((x250-x251)|x252));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	static int8_t x256 = -2;

    t52 = (x253/((x254-x255)|x256));

    if (t52 != 16384LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x257 = INT64_MAX;
	static int16_t x258 = -1;
	static uint16_t x259 = 1U;
	volatile int32_t x260 = INT32_MIN;
	int64_t t53 = 66526LL;

    t53 = (x257/((x258-x259)|x260));

    if (t53 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x262 = INT16_MAX;
	int16_t x264 = 21;
	volatile uint64_t t54 = 1LLU;

    t54 = (x261/((x262-x263)|x264));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x265 = 1256405929395782353LLU;
	uint64_t x266 = 80465146011089LLU;
	static int8_t x267 = INT8_MAX;
	static int8_t x268 = 59;
	uint64_t t55 = 10071929LLU;

    t55 = (x265/((x266-x267)|x268));

    if (t55 != 15614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x273 = 0U;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = 28U;
	static volatile uint64_t t56 = 18LLU;

    t56 = (x273/((x274-x275)|x276));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x277 = INT64_MIN;
	uint64_t x278 = 2LLU;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t57 = 13769425864935LLU;

    t57 = (x277/((x278-x279)|x280));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	uint32_t x283 = 0U;
	int16_t x284 = -3262;
	uint64_t t58 = 648060LLU;

    t58 = (x281/((x282-x283)|x284));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x285 = 152877397U;
	int8_t x286 = 0;
	static volatile uint8_t x287 = 37U;
	int16_t x288 = 5;
	uint32_t t59 = 77U;

    t59 = (x285/((x286-x287)|x288));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x289 = -1738;
	uint64_t x290 = 6009920772LLU;
	volatile uint64_t x291 = UINT64_MAX;
	volatile uint8_t x292 = 122U;
	static volatile uint64_t t60 = 53829419860046202LLU;

    t60 = (x289/((x290-x291)|x292));

    if (t60 != 3069382175LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x293 = -1025687;
	int8_t x294 = -13;
	volatile int16_t x295 = -1;
	int16_t x296 = -1;
	int32_t t61 = 776297;

    t61 = (x293/((x294-x295)|x296));

    if (t61 != 1025687) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = 4941;
	volatile int16_t x299 = -3957;
	uint8_t x300 = 27U;

    t62 = (x297/((x298-x299)|x300));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x301 = INT16_MAX;
	static int64_t x302 = -253555745408522LL;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;

    t63 = (x301/((x302-x303)|x304));

    if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	static int64_t x308 = -117182LL;
	int64_t t64 = -18257LL;

    t64 = (x305/((x306-x307)|x308));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = 114U;
	static int8_t x312 = INT8_MAX;
	int32_t t65 = -65221;

    t65 = (x309/((x310-x311)|x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x313 = -2738888538LL;
	uint8_t x314 = 1U;
	volatile int16_t x316 = -1;

    t66 = (x313/((x314-x315)|x316));

    if (t66 != 2738888538LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x317 = INT32_MIN;
	static volatile int8_t x318 = INT8_MIN;
	static int16_t x319 = INT16_MAX;
	uint64_t t67 = 2347054164301LLU;

    t67 = (x317/((x318-x319)|x320));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x321 = -1LL;
	int32_t x322 = -4184;
	int16_t x324 = -102;
	int64_t t68 = -671203LL;

    t68 = (x321/((x322-x323)|x324));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x325 = -1541852;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = -1012;
	volatile int16_t x328 = INT16_MIN;
	uint32_t t69 = 143U;

    t69 = (x325/((x326-x327)|x328));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x329 = INT32_MIN;
	int64_t x330 = -2703735765LL;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t70 = 51625LLU;

    t70 = (x329/((x330-x331)|x332));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x333 = -5526315290LL;
	volatile int8_t x334 = -15;
	int64_t x335 = -11366525766577LL;
	int64_t t71 = -102444110LL;

    t71 = (x333/((x334-x335)|x336));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x338 = -1;
	static int8_t x339 = -1;
	uint64_t x340 = 130385LLU;
	uint64_t t72 = 402LLU;

    t72 = (x337/((x338-x339)|x340));

    if (t72 != 141479035730410LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x341 = 13U;
	volatile int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	volatile int16_t x344 = -5648;
	volatile int64_t t73 = 102541142LL;

    t73 = (x341/((x342-x343)|x344));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x345 = 1162U;
	int64_t x346 = INT64_MAX;
	int32_t x348 = INT32_MIN;
	volatile int64_t t74 = 119668929524382889LL;

    t74 = (x345/((x346-x347)|x348));

    if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x350 = 2542262927641522813LL;
	uint8_t x351 = 0U;
	volatile int64_t t75 = -1986608016294LL;

    t75 = (x349/((x350-x351)|x352));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x353 = -2180;
	volatile int64_t t76 = -57578456065LL;

    t76 = (x353/((x354-x355)|x356));

    if (t76 != 2180LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x361 = 88LL;
	uint8_t x362 = 1U;
	static int32_t x364 = 14688;

    t77 = (x361/((x362-x363)|x364));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x365 = INT8_MIN;
	volatile uint64_t x367 = 436032LLU;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t78 = 6343277533LLU;

    t78 = (x365/((x366-x367)|x368));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x370 = -14;
	uint32_t x371 = 44227863U;
	int8_t x372 = 26;
	static volatile uint32_t t79 = 1686751U;

    t79 = (x369/((x370-x371)|x372));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x374 = INT8_MIN;
	int16_t x375 = -1;
	uint32_t x376 = UINT32_MAX;

    t80 = (x373/((x374-x375)|x376));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x377 = UINT8_MAX;
	int16_t x379 = -73;
	static uint64_t x380 = UINT64_MAX;
	static uint64_t t81 = 32729261674LLU;

    t81 = (x377/((x378-x379)|x380));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x381 = 100U;
	int64_t x382 = -1LL;
	volatile uint64_t t82 = 631260158102LLU;

    t82 = (x381/((x382-x383)|x384));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = INT64_MIN;
	static volatile int64_t x388 = INT64_MAX;
	uint64_t t83 = 7624191788693LLU;

    t83 = (x385/((x386-x387)|x388));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = 7016;
	int32_t x391 = -2699;
	uint16_t x392 = 112U;

    t84 = (x389/((x390-x391)|x392));

    if (t84 != -949394960046811LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = INT32_MIN;
	uint64_t x394 = 250544734960044354LLU;
	uint16_t x395 = UINT16_MAX;
	static int32_t x396 = 1935;
	volatile uint64_t t85 = 1484752091LLU;

    t85 = (x393/((x394-x395)|x396));

    if (t85 != 73LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x397 = 50U;
	uint16_t x399 = 25456U;
	uint16_t x400 = 453U;

    t86 = (x397/((x398-x399)|x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x401 = INT64_MIN;
	static uint16_t x403 = UINT16_MAX;
	uint32_t x404 = UINT32_MAX;
	uint64_t t87 = 11182LLU;

    t87 = (x401/((x402-x403)|x404));

    if (t87 != 165191049LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x406 = INT8_MAX;
	int32_t x407 = 0;
	int64_t x408 = INT64_MIN;
	int64_t t88 = 422799948LL;

    t88 = (x405/((x406-x407)|x408));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x410 = -573;
	volatile int32_t x411 = -1;
	uint16_t x412 = 1U;
	int32_t t89 = -21499;

    t89 = (x409/((x410-x411)|x412));

    if (t89 != -114) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x414 = 656U;
	int8_t x415 = INT8_MAX;
	int8_t x416 = -6;
	static int32_t t90 = -1491;

    t90 = (x413/((x414-x415)|x416));

    if (t90 != 6553) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x417 = UINT16_MAX;
	int16_t x418 = -222;
	uint64_t x419 = 542784605LLU;
	uint8_t x420 = 11U;
	uint64_t t91 = 12LLU;

    t91 = (x417/((x418-x419)|x420));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 5979LLU;
	int64_t x424 = INT64_MIN;
	uint64_t t92 = 109448LLU;

    t92 = (x421/((x422-x423)|x424));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x425 = -1;
	volatile uint32_t x427 = 26896497U;
	int64_t x428 = 620050832596LL;
	volatile int64_t t93 = 6918LL;

    t93 = (x425/((x426-x427)|x428));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = 0;
	volatile int8_t x430 = -37;
	static int8_t x431 = -1;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t94 = 54025;

    t94 = (x429/((x430-x431)|x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x433 = -3150253778LL;
	int64_t x434 = INT64_MAX;
	int32_t x436 = INT32_MIN;
	uint64_t t95 = 289505092LLU;

    t95 = (x433/((x434-x435)|x436));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t t96 = -257;

    t96 = (x437/((x438-x439)|x440));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x453 = -1LL;
	uint32_t x454 = 95944147U;
	int8_t x456 = -42;
	static volatile int64_t t97 = -12LL;

    t97 = (x453/((x454-x455)|x456));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x457 = -3054;
	static uint64_t x458 = 437858933368813LLU;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = 895789;
	uint64_t t98 = 5353235947820882LLU;

    t98 = (x457/((x458-x459)|x460));

    if (t98 != 42129LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x461 = 3U;
	static uint8_t x463 = 0U;
	volatile uint64_t t99 = 2415041955LLU;

    t99 = (x461/((x462-x463)|x464));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x465 = 1U;
	int64_t x466 = 12988722337LL;
	static volatile int8_t x467 = 1;
	int8_t x468 = 1;

    t100 = (x465/((x466-x467)|x468));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x469 = INT8_MIN;
	static volatile uint32_t x470 = 608280750U;
	uint16_t x472 = 245U;
	uint32_t t101 = 1U;

    t101 = (x469/((x470-x471)|x472));

    if (t101 != 7U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x477 = INT16_MAX;
	uint32_t x478 = 1721U;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;

    t102 = (x477/((x478-x479)|x480));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x485 = UINT8_MAX;
	int32_t x486 = -1;
	uint8_t x487 = UINT8_MAX;
	static uint8_t x488 = UINT8_MAX;
	volatile int32_t t103 = 16329;

    t103 = (x485/((x486-x487)|x488));

    if (t103 != -255) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x490 = 0U;
	static int8_t x491 = -60;
	volatile int32_t x492 = 2750;

    t104 = (x489/((x490-x491)|x492));

    if (t104 != -780903) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x493 = 1U;
	int16_t x494 = INT16_MIN;
	volatile int32_t x495 = -1475;
	int32_t x496 = 2004;
	static volatile int32_t t105 = 6176;

    t105 = (x493/((x494-x495)|x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x497 = -13;
	volatile uint16_t x498 = UINT16_MAX;
	int32_t x499 = -1;
	int32_t t106 = 372729;

    t106 = (x497/((x498-x499)|x500));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x501 = INT32_MIN;
	uint8_t x502 = 1U;
	int8_t x504 = -13;
	static volatile int32_t t107 = 358;

    t107 = (x501/((x502-x503)|x504));

    if (t107 != 165191049) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x506 = 3570LL;
	int16_t x508 = -5;

    t108 = (x505/((x506-x507)|x508));

    if (t108 != 429496729LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x509 = INT16_MIN;
	int32_t x510 = -67920710;
	static int16_t x511 = INT16_MIN;
	int64_t x512 = -1LL;
	static volatile int64_t t109 = -1LL;

    t109 = (x509/((x510-x511)|x512));

    if (t109 != 32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x513 = 34U;
	static int16_t x514 = INT16_MIN;
	volatile int16_t x516 = 110;
	uint32_t t110 = 298U;

    t110 = (x513/((x514-x515)|x516));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x517 = 4547U;
	int8_t x518 = INT8_MAX;
	uint32_t x519 = 6U;
	int8_t x520 = 1;

    t111 = (x517/((x518-x519)|x520));

    if (t111 != 37U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x521 = 10U;
	static int64_t x522 = -1LL;
	int8_t x523 = 1;
	int8_t x524 = 2;
	volatile int64_t t112 = 453463595889360055LL;

    t112 = (x521/((x522-x523)|x524));

    if (t112 != -5LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x525 = 63;
	int8_t x526 = INT8_MAX;
	uint8_t x528 = 2U;

    t113 = (x525/((x526-x527)|x528));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x529 = -1;
	int8_t x531 = INT8_MIN;

    t114 = (x529/((x530-x531)|x532));

    if (t114 != 6928U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x533 = UINT64_MAX;
	static volatile uint32_t x534 = UINT32_MAX;
	int16_t x535 = INT16_MIN;
	int32_t x536 = -1;

    t115 = (x533/((x534-x535)|x536));

    if (t115 != 4294967297LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x537 = 127148288290106LLU;
	int16_t x539 = INT16_MAX;
	int16_t x540 = 0;
	volatile uint64_t t116 = 77258850635861947LLU;

    t116 = (x537/((x538-x539)|x540));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x543 = INT8_MIN;

    t117 = (x541/((x542-x543)|x544));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x545 = INT64_MAX;
	static int16_t x547 = 1;
	static int64_t t118 = 1169LL;

    t118 = (x545/((x546-x547)|x548));

    if (t118 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x549 = -1;
	int8_t x550 = 0;
	uint8_t x552 = 0U;

    t119 = (x549/((x550-x551)|x552));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x553 = 456329440531245LL;
	static volatile uint32_t x554 = UINT32_MAX;
	uint64_t x555 = UINT64_MAX;
	uint64_t t120 = 3613287210LLU;

    t120 = (x553/((x554-x555)|x556));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x562 = INT8_MIN;
	static uint8_t x563 = UINT8_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t121 = -8128;

    t121 = (x561/((x562-x563)|x564));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x565 = 266380036155680LL;
	int8_t x566 = INT8_MAX;
	int8_t x567 = 1;
	volatile int64_t t122 = 582LL;

    t122 = (x565/((x566-x567)|x568));

    if (t122 != 2114127271076LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x570 = -1LL;
	uint64_t x571 = 1559536366864462724LLU;
	volatile int64_t x572 = INT64_MIN;
	volatile uint64_t t123 = 14LLU;

    t123 = (x569/((x570-x571)|x572));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x573 = INT64_MIN;
	int8_t x574 = -1;
	static uint16_t x576 = UINT16_MAX;
	int64_t t124 = 5708116LL;

    t124 = (x573/((x574-x575)|x576));

    if (t124 != -140739635871744LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x579 = UINT64_MAX;
	uint8_t x580 = 127U;
	volatile uint64_t t125 = 189LLU;

    t125 = (x577/((x578-x579)|x580));

    if (t125 != 4294967042LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x581 = -1;
	static uint64_t x583 = 554211640LLU;
	int32_t x584 = -2;

    t126 = (x581/((x582-x583)|x584));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x589 = 60962U;
	int32_t x590 = -305905;
	volatile int16_t x591 = INT16_MIN;
	volatile int64_t x592 = -1LL;
	int64_t t127 = -1101270466987850376LL;

    t127 = (x589/((x590-x591)|x592));

    if (t127 != -60962LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x593 = 10U;
	static uint16_t x594 = 1056U;
	int16_t x595 = -95;
	int16_t x596 = INT16_MIN;
	uint32_t t128 = 280814U;

    t128 = (x593/((x594-x595)|x596));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x597 = INT64_MIN;
	volatile int64_t t129 = 1729275857708675359LL;

    t129 = (x597/((x598-x599)|x600));

    if (t129 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x601 = -1LL;
	volatile uint16_t x603 = 28711U;
	static uint32_t x604 = 438977839U;
	int64_t t130 = 428947LL;

    t130 = (x601/((x602-x603)|x604));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x605 = -642132224417LL;
	int8_t x606 = -1;
	volatile int32_t x607 = INT32_MIN;
	int16_t x608 = -1;

    t131 = (x605/((x606-x607)|x608));

    if (t131 != 642132224417LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x609 = INT32_MIN;
	int64_t x610 = INT64_MIN;
	volatile uint32_t x612 = 3483U;
	int64_t t132 = 151180723020262LL;

    t132 = (x609/((x610-x611)|x612));

    if (t132 != -616561LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x614 = -424478305;
	int16_t x616 = INT16_MIN;
	volatile int64_t t133 = 13392LL;

    t133 = (x613/((x614-x615)|x616));

    if (t133 != -4885260612740877LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x618 = 1U;
	int16_t x619 = INT16_MIN;
	static uint8_t x620 = 1U;
	static volatile int32_t t134 = 930;

    t134 = (x617/((x618-x619)|x620));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x621 = 40U;
	static uint64_t x624 = UINT64_MAX;

    t135 = (x621/((x622-x623)|x624));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x625 = -1;
	int16_t x627 = INT16_MIN;
	static volatile int8_t x628 = 2;
	int32_t t136 = -11043484;

    t136 = (x625/((x626-x627)|x628));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x629 = -1;
	int8_t x630 = 1;
	int32_t x631 = 77;
	int8_t x632 = 0;

    t137 = (x629/((x630-x631)|x632));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x634 = INT8_MAX;
	int8_t x635 = -1;
	int16_t x636 = INT16_MAX;
	static volatile int32_t t138 = 71578;

    t138 = (x633/((x634-x635)|x636));

    if (t138 != -65538) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MAX;
	int64_t t139 = 29LL;

    t139 = (x637/((x638-x639)|x640));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x641 = -3957;
	static uint32_t x642 = 511873966U;
	int32_t x643 = -1;
	volatile uint8_t x644 = UINT8_MAX;
	static volatile uint32_t t140 = 3064U;

    t140 = (x641/((x642-x643)|x644));

    if (t140 != 8U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x645 = INT8_MIN;
	volatile int32_t x647 = INT32_MIN;
	int8_t x648 = INT8_MIN;

    t141 = (x645/((x646-x647)|x648));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x649 = 0;
	uint32_t x650 = 0U;
	uint8_t x651 = 7U;
	uint32_t t142 = 76U;

    t142 = (x649/((x650-x651)|x652));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x653 = -1;
	static volatile int8_t x654 = INT8_MIN;
	uint64_t x655 = 141LLU;
	volatile uint32_t x656 = UINT32_MAX;
	static volatile uint64_t t143 = 3546121213256LLU;

    t143 = (x653/((x654-x655)|x656));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x658 = INT64_MIN;
	static int32_t x659 = INT32_MIN;
	static int64_t t144 = -531866546353276886LL;

    t144 = (x657/((x658-x659)|x660));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x661 = INT8_MIN;
	uint64_t x662 = 1782951997LLU;
	volatile int8_t x664 = INT8_MAX;
	volatile uint64_t t145 = 0LLU;

    t145 = (x661/((x662-x663)|x664));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x668 = INT8_MAX;
	static int64_t t146 = 1872484337500957LL;

    t146 = (x665/((x666-x667)|x668));

    if (t146 != 7LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x670 = INT8_MIN;
	volatile int8_t x671 = INT8_MIN;
	uint8_t x672 = 32U;

    t147 = (x669/((x670-x671)|x672));

    if (t147 != -4) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x674 = 0U;
	volatile int16_t x675 = -14642;
	static volatile int8_t x676 = INT8_MIN;
	uint32_t t148 = 126289U;

    t148 = (x673/((x674-x675)|x676));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x677 = 1U;
	static int64_t x678 = INT64_MIN;
	int8_t x679 = INT8_MIN;
	volatile int16_t x680 = -1;
	volatile int64_t t149 = -3629927LL;

    t149 = (x677/((x678-x679)|x680));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x681 = -24156600LL;
	int32_t x682 = 209111;
	uint16_t x683 = UINT16_MAX;
	uint8_t x684 = 2U;
	volatile int64_t t150 = 2003669295963470LL;

    t150 = (x681/((x682-x683)|x684));

    if (t150 != -168LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x685 = INT16_MAX;
	static uint32_t x686 = 16702360U;
	static volatile int8_t x687 = -13;
	uint8_t x688 = 3U;

    t151 = (x685/((x686-x687)|x688));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x693 = INT64_MIN;
	uint8_t x694 = 10U;
	volatile uint64_t t152 = 80641510LLU;

    t152 = (x693/((x694-x695)|x696));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x697 = 10315824074LL;
	static int16_t x698 = INT16_MIN;
	uint32_t x699 = 12589U;
	volatile uint64_t x700 = 567085199087LLU;
	static volatile uint64_t t153 = 422LLU;

    t153 = (x697/((x698-x699)|x700));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x705 = 834501566809135LLU;
	int16_t x706 = INT16_MIN;
	uint16_t x708 = 2799U;
	static volatile uint64_t t154 = 10209012262302899LLU;

    t154 = (x705/((x706-x707)|x708));

    if (t154 != 298142753415LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x713 = -7082052LL;
	uint64_t x714 = UINT64_MAX;
	int16_t x715 = -1;
	uint16_t x716 = UINT16_MAX;
	uint64_t t155 = 796930LLU;

    t155 = (x713/((x714-x715)|x716));

    if (t155 != 281479271743380LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x717 = 0U;
	uint64_t x718 = 8342057657032477LLU;
	int8_t x719 = 46;
	int8_t x720 = 9;
	volatile uint64_t t156 = 198231174LLU;

    t156 = (x717/((x718-x719)|x720));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x725 = 261U;
	int16_t x726 = -54;
	static int16_t x727 = -1;
	uint32_t t157 = 198881834U;

    t157 = (x725/((x726-x727)|x728));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x730 = -37974;
	uint32_t x731 = 28834151U;
	int32_t x732 = 50553;
	uint64_t t158 = 105029014325LLU;

    t158 = (x729/((x730-x731)|x732));

    if (t158 != 4324000255LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x733 = UINT32_MAX;
	static volatile int32_t x734 = -10;
	int32_t x735 = INT32_MIN;
	int32_t x736 = -2042;
	uint32_t t159 = 1527U;

    t159 = (x733/((x734-x735)|x736));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x738 = 3343093;
	uint64_t x739 = 6811478LLU;
	static uint32_t x740 = 38296U;
	uint64_t t160 = 255286242LLU;

    t160 = (x737/((x738-x739)|x740));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x741 = INT64_MAX;
	int64_t t161 = -9850LL;

    t161 = (x741/((x742-x743)|x744));

    if (t161 != 2147483648LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x745 = 50288LL;
	volatile uint16_t x746 = UINT16_MAX;
	uint64_t x747 = UINT64_MAX;
	int64_t x748 = -67517110082LL;
	uint64_t t162 = 471574335926767LLU;

    t162 = (x745/((x746-x747)|x748));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x749 = INT16_MIN;
	int32_t x750 = 241;
	int8_t x751 = INT8_MIN;
	static int16_t x752 = -777;
	volatile int32_t t163 = 240606;

    t163 = (x749/((x750-x751)|x752));

    if (t163 != 62) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x761 = UINT32_MAX;
	uint64_t x762 = 3421510LLU;
	int8_t x763 = -1;
	int64_t x764 = -99638375854LL;
	uint64_t t164 = 260924927642424LLU;

    t164 = (x761/((x762-x763)|x764));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x765 = 39374886187LL;
	volatile int8_t x766 = INT8_MAX;
	int8_t x767 = -26;
	uint32_t x768 = 176576U;
	volatile int64_t t165 = -13968670700LL;

    t165 = (x765/((x766-x767)|x768));

    if (t165 != 222959LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x769 = 6569U;
	volatile int16_t x770 = INT16_MIN;
	int8_t x771 = INT8_MAX;
	static int32_t x772 = INT32_MIN;
	volatile int32_t t166 = 34806;

    t166 = (x769/((x770-x771)|x772));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x773 = INT64_MIN;
	uint8_t x774 = 29U;
	int16_t x776 = -2;
	volatile int64_t t167 = 0LL;

    t167 = (x773/((x774-x775)|x776));

    if (t167 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x777 = INT32_MIN;
	volatile uint16_t x779 = UINT16_MAX;
	volatile int64_t t168 = 221587788361529728LL;

    t168 = (x777/((x778-x779)|x780));

    if (t168 != 508520LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x781 = INT16_MAX;
	static int32_t x783 = -1;
	uint64_t x784 = 1673LLU;
	static uint64_t t169 = 5633571213LLU;

    t169 = (x781/((x782-x783)|x784));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x785 = 1;
	int32_t x786 = INT32_MAX;
	static uint16_t x787 = 10197U;
	int8_t x788 = -1;
	static int32_t t170 = -16472733;

    t170 = (x785/((x786-x787)|x788));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x789 = -3;
	int64_t x790 = -1LL;
	int64_t x791 = -1LL;
	int16_t x792 = 701;
	volatile int64_t t171 = 2541823405057718LL;

    t171 = (x789/((x790-x791)|x792));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x794 = -1;
	int16_t x795 = INT16_MIN;
	int16_t x796 = -1;
	volatile uint32_t t172 = 37014U;

    t172 = (x793/((x794-x795)|x796));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	int16_t x800 = 3;
	volatile int64_t t173 = 5048564LL;

    t173 = (x797/((x798-x799)|x800));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x801 = UINT64_MAX;
	static int32_t x802 = -116918559;
	int16_t x803 = INT16_MIN;
	int64_t x804 = INT64_MAX;
	static volatile uint64_t t174 = 152LLU;

    t174 = (x801/((x802-x803)|x804));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x805 = INT8_MIN;
	volatile uint64_t x807 = UINT64_MAX;
	uint64_t x808 = 629233322231LLU;
	static uint64_t t175 = 19568207LLU;

    t175 = (x805/((x806-x807)|x808));

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x810 = -1;
	static volatile uint64_t x811 = 1879571567LLU;
	volatile uint64_t x812 = 15LLU;
	volatile uint64_t t176 = 3464604LLU;

    t176 = (x809/((x810-x811)|x812));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x813 = INT64_MIN;
	static int16_t x814 = 1;
	volatile int64_t x815 = 3598LL;
	uint32_t x816 = 4U;
	int64_t t177 = -19484585146LL;

    t177 = (x813/((x814-x815)|x816));

    if (t177 != 2567039253229829LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x817 = -1;
	static uint16_t x818 = 63U;
	uint8_t x819 = UINT8_MAX;

    t178 = (x817/((x818-x819)|x820));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x822 = 28U;
	uint8_t x823 = UINT8_MAX;
	static volatile uint32_t x824 = UINT32_MAX;
	static volatile uint32_t t179 = 969732U;

    t179 = (x821/((x822-x823)|x824));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x829 = -1;
	static int16_t x830 = -1;
	static volatile uint32_t x831 = 0U;
	static int64_t x832 = INT64_MIN;
	int64_t t180 = 339LL;

    t180 = (x829/((x830-x831)|x832));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x837 = 95408124U;
	uint8_t x838 = 2U;
	uint8_t x839 = UINT8_MAX;
	int8_t x840 = -1;
	volatile uint32_t t181 = 318922874U;

    t181 = (x837/((x838-x839)|x840));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x849 = INT32_MIN;
	static int16_t x851 = INT16_MIN;
	static int16_t x852 = INT16_MIN;
	static int32_t t182 = 1;

    t182 = (x849/((x850-x851)|x852));

    if (t182 != 65536) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x854 = 3960;
	uint8_t x856 = 69U;

    t183 = (x853/((x854-x855)|x856));

    if (t183 != 4650048922034169LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x857 = -247623174LL;
	static uint64_t x858 = 772740142783LLU;
	int32_t x859 = INT32_MIN;
	int32_t x860 = INT32_MIN;

    t184 = (x857/((x858-x859)|x860));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x861 = UINT64_MAX;
	int8_t x862 = -1;
	static uint8_t x864 = 56U;
	uint64_t t185 = 740224588443LLU;

    t185 = (x861/((x862-x863)|x864));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x865 = 55LLU;
	int8_t x866 = INT8_MIN;
	static int8_t x867 = 4;
	volatile int16_t x868 = 310;
	uint64_t t186 = 11251357LLU;

    t186 = (x865/((x866-x867)|x868));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x870 = -11854;

    t187 = (x869/((x870-x871)|x872));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x873 = INT16_MAX;
	int16_t x874 = INT16_MAX;
	int16_t x875 = INT16_MIN;
	static int32_t x876 = 259027821;

    t188 = (x873/((x874-x875)|x876));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x878 = -15089723;
	volatile int16_t x879 = INT16_MIN;
	uint32_t t189 = 248U;

    t189 = (x877/((x878-x879)|x880));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x881 = -1;
	int16_t x883 = INT16_MAX;

    t190 = (x881/((x882-x883)|x884));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x885 = INT8_MAX;
	int8_t x886 = -20;
	static int16_t x887 = INT16_MIN;
	int32_t x888 = INT32_MIN;

    t191 = (x885/((x886-x887)|x888));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = -1;
	uint8_t x890 = 0U;
	volatile uint64_t t192 = 12064599898402LLU;

    t192 = (x889/((x890-x891)|x892));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x897 = UINT16_MAX;
	int64_t x898 = 67LL;
	volatile int8_t x900 = INT8_MAX;
	volatile int64_t t193 = 244388658040LL;

    t193 = (x897/((x898-x899)|x900));

    if (t193 != 516LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x901 = 0;
	uint64_t x902 = 460794LLU;
	uint8_t x904 = 12U;

    t194 = (x901/((x902-x903)|x904));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x905 = INT32_MIN;
	uint64_t x907 = UINT64_MAX;
	volatile int64_t x908 = INT64_MIN;
	static uint64_t t195 = 9LLU;

    t195 = (x905/((x906-x907)|x908));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x909 = 306557LL;
	int64_t x910 = 122222228913384LL;
	volatile int8_t x911 = INT8_MIN;
	static volatile int16_t x912 = INT16_MIN;

    t196 = (x909/((x910-x911)|x912));

    if (t196 != -17LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x913 = 7U;
	int8_t x914 = INT8_MIN;
	int64_t x916 = -1LL;
	int64_t t197 = 104LL;

    t197 = (x913/((x914-x915)|x916));

    if (t197 != -7LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x918 = INT32_MIN;
	int32_t x919 = -1;

    t198 = (x917/((x918-x919)|x920));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x921 = 61459LL;
	int16_t x922 = -3;
	int64_t x923 = 235870022831LL;
	int16_t x924 = 170;
	volatile int64_t t199 = -20771330901LL;

    t199 = (x921/((x922-x923)|x924));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

