
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

static int64_t x4 = INT64_MIN;
static volatile int32_t t0 = 0;
static int8_t x17 = INT8_MAX;
volatile int32_t t5 = -324297236;
static int16_t x25 = -1;
int8_t x33 = 0;
int64_t x34 = INT64_MIN;
static int8_t x39 = 6;
volatile int64_t x41 = -1LL;
volatile int32_t t10 = 0;
uint32_t x47 = 2U;
volatile int8_t x51 = 1;
uint32_t x54 = UINT32_MAX;
uint32_t x59 = 8726654U;
static uint16_t x72 = UINT16_MAX;
int8_t x76 = INT8_MIN;
int64_t x79 = 12271LL;
int32_t x80 = INT32_MIN;
static int64_t x83 = -1LL;
static int8_t x85 = INT8_MAX;
int32_t x90 = -934128458;
int64_t x91 = -1LL;
static int8_t x92 = -1;
volatile int32_t x103 = 58;
volatile int64_t x105 = INT64_MAX;
int32_t t26 = -29;
uint16_t x113 = UINT16_MAX;
static volatile int32_t t29 = 9429;
int16_t x121 = INT16_MIN;
uint32_t x122 = 2136U;
static uint8_t x123 = UINT8_MAX;
int8_t x124 = 13;
uint64_t x128 = UINT64_MAX;
static int16_t x129 = INT16_MAX;
int32_t x139 = INT32_MIN;
static volatile int8_t x151 = -1;
int64_t x153 = 119831837280969250LL;
volatile int32_t x160 = 4305;
volatile int32_t t39 = 1;
int32_t t40 = 58739;
int32_t t42 = 228965446;
volatile int16_t x174 = 1;
static int16_t x186 = -1;
uint64_t x192 = 5949485LLU;
int32_t t47 = -1249787;
uint16_t x195 = 22U;
static int32_t x196 = INT32_MAX;
static uint16_t x210 = UINT16_MAX;
static volatile int32_t x212 = INT32_MAX;
uint32_t x214 = UINT32_MAX;
volatile int32_t x220 = INT32_MIN;
int32_t t54 = -805;
int8_t x226 = -1;
uint8_t x233 = 0U;
static int8_t x234 = INT8_MIN;
int16_t x235 = INT16_MAX;
volatile int32_t t60 = 21;
static int32_t t61 = -1;
uint64_t x249 = 31822095731900LLU;
int64_t x256 = INT64_MAX;
int32_t x257 = INT32_MAX;
int32_t x270 = INT32_MAX;
volatile int32_t t69 = -2238954;
uint8_t x284 = 24U;
volatile uint32_t x293 = 14U;
int32_t x301 = -1;
uint64_t x308 = 14504LLU;
int64_t x316 = -1LL;
int32_t t78 = -3027;
uint32_t x318 = 1743U;
uint32_t x321 = 485484111U;
volatile int32_t x328 = INT32_MIN;
volatile int32_t t81 = 14;
volatile int64_t x334 = INT64_MIN;
volatile int32_t t84 = -5;
uint32_t x345 = 198629332U;
static volatile int8_t x353 = 1;
static int16_t x354 = INT16_MIN;
uint32_t x360 = 420052U;
static uint32_t x367 = 101U;
volatile int32_t t91 = 18774;
int8_t x374 = -1;
volatile int32_t t93 = -1;
int16_t x379 = INT16_MAX;
static int32_t x380 = INT32_MAX;
static int32_t t95 = -4374;
int8_t x389 = -1;
volatile int32_t t98 = -713547;
uint16_t x411 = 5U;
static uint32_t x413 = 67937U;
int64_t x415 = INT64_MIN;
static int8_t x425 = INT8_MIN;
static uint64_t x427 = 7487155799LLU;
int16_t x430 = -1522;
uint32_t x436 = 128469168U;
static volatile int64_t x437 = 4337249663125932LL;
int32_t t109 = -57645;
int32_t x442 = 7;
volatile int64_t x443 = INT64_MIN;
int32_t x444 = 7;
uint64_t x447 = 51576993870788LLU;
static uint32_t x453 = UINT32_MAX;
uint64_t x456 = UINT64_MAX;
int8_t x457 = 27;
int32_t t114 = -6374;
int32_t x466 = -3487;
volatile int64_t x472 = INT64_MIN;
uint16_t x473 = 6351U;
int8_t x474 = 3;
uint16_t x479 = UINT16_MAX;
int32_t x482 = INT32_MIN;
int8_t x483 = -1;
static volatile uint8_t x493 = UINT8_MAX;
static int16_t x497 = 3;
static int32_t x499 = INT32_MIN;
int8_t x506 = INT8_MAX;
int32_t t126 = 62;
int16_t x509 = -1;
int32_t x511 = INT32_MAX;
int8_t x514 = INT8_MAX;
static int16_t x519 = INT16_MIN;
volatile int32_t t132 = -2825783;
uint16_t x537 = 2U;
static int8_t x539 = -1;
int8_t x544 = 1;
static uint64_t x552 = 5749LLU;
int16_t x558 = 75;
static volatile int8_t x563 = INT8_MIN;
int64_t x567 = -1LL;
int64_t x568 = INT64_MIN;
static int32_t x569 = 0;
uint16_t x571 = UINT16_MAX;
int16_t x578 = INT16_MAX;
static uint64_t x579 = 205LLU;
uint8_t x584 = 18U;
int8_t x585 = INT8_MIN;
int8_t x586 = 59;
static int16_t x588 = -1;
static int32_t t146 = 230;
int32_t t148 = -92031;
int32_t x597 = 100036660;
int8_t x603 = -14;
volatile int16_t x611 = INT16_MIN;
volatile uint8_t x622 = 28U;
volatile int64_t x623 = INT64_MIN;
int32_t x624 = -1;
volatile uint8_t x627 = 14U;
volatile int8_t x629 = INT8_MIN;
volatile int8_t x630 = INT8_MIN;
int16_t x631 = 7202;
uint32_t x632 = 1U;
int64_t x633 = 501618624LL;
int16_t x639 = INT16_MIN;
int16_t x648 = -14;
int32_t t161 = 704578778;
volatile int8_t x651 = -1;
uint8_t x656 = UINT8_MAX;
volatile int32_t t163 = 29790;
volatile int8_t x657 = INT8_MIN;
int8_t x660 = -12;
int64_t x665 = INT64_MIN;
int16_t x672 = -1;
volatile int32_t t167 = 14146;
int32_t x676 = INT32_MAX;
uint16_t x686 = 28U;
volatile int8_t x687 = -42;
int8_t x688 = 1;
int32_t t171 = 1;
static uint32_t x691 = 795614U;
int16_t x692 = INT16_MAX;
int32_t t172 = 1;
static volatile int32_t t173 = -2;
int32_t t175 = 1;
static int32_t t176 = -839;
int32_t t178 = 153736;
volatile uint64_t x717 = 111518259741833004LLU;
uint32_t x721 = 12U;
int16_t x728 = INT16_MIN;
volatile int32_t t181 = 27722271;
int8_t x730 = 3;
int32_t x734 = INT32_MIN;
int64_t x736 = -1LL;
int16_t x744 = 0;
volatile int32_t t185 = -806487;
static uint8_t x751 = 22U;
uint64_t x753 = UINT64_MAX;
static volatile int16_t x760 = INT16_MIN;
static int16_t x764 = -1;
static int32_t x775 = 135;
static uint64_t x776 = 2862618610LLU;
int8_t x780 = INT8_MAX;
uint16_t x787 = 424U;
volatile int32_t x788 = INT32_MIN;
int64_t x790 = -161405LL;
static int16_t x792 = 1;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int8_t x2 = -2;
	static int16_t x3 = -1;

    t0 = (x1<=((x2<=x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MAX;
	uint32_t x7 = 1646542613U;
	int8_t x8 = 6;
	int32_t t1 = -1308935;

    t1 = (x5<=((x6<=x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	uint64_t x10 = 261137598495LLU;
	int64_t x11 = 11LL;
	uint8_t x12 = 97U;
	int32_t t2 = 170426;

    t2 = (x9<=((x10<=x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 2;
	uint16_t x14 = 7215U;
	static int8_t x15 = INT8_MIN;
	uint8_t x16 = 7U;
	int32_t t3 = 25257;

    t3 = (x13<=((x14<=x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = -1;
	volatile int32_t x19 = -24246985;
	static uint64_t x20 = UINT64_MAX;
	static volatile int32_t t4 = 37978;

    t4 = (x17<=((x18<=x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 2191U;
	uint64_t x22 = 1979122831208146LLU;
	int16_t x23 = -3;
	volatile int64_t x24 = INT64_MIN;

    t5 = (x21<=((x22<=x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x26 = 1;
	uint32_t x27 = 64285505U;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = 14330113;

    t6 = (x25<=((x26<=x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -447737359;

    t7 = (x29<=((x30<=x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x35 = -1;
	static uint32_t x36 = 22274U;
	int32_t t8 = 233358516;

    t8 = (x33<=((x34<=x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 50860U;
	uint8_t x38 = 36U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 5577419;

    t9 = (x37<=((x38<=x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x42 = -50066780LL;
	int32_t x43 = INT32_MAX;
	static int64_t x44 = -1LL;

    t10 = (x41<=((x42<=x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static int8_t x48 = -25;
	static int32_t t11 = 142366087;

    t11 = (x45<=((x46<=x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -1;
	int8_t x50 = INT8_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 37339068;

    t12 = (x49<=((x50<=x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	uint8_t x55 = UINT8_MAX;
	static volatile int16_t x56 = INT16_MAX;
	int32_t t13 = -106668;

    t13 = (x53<=((x54<=x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	uint16_t x58 = 0U;
	static int64_t x60 = -1LL;
	int32_t t14 = 1556;

    t14 = (x57<=((x58<=x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x61 = UINT32_MAX;
	static int16_t x62 = 1153;
	int16_t x63 = 952;
	int64_t x64 = -1LL;
	int32_t t15 = 2;

    t15 = (x61<=((x62<=x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	uint32_t x67 = 10U;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 541;

    t16 = (x65<=((x66<=x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 7938638235LLU;
	uint8_t x70 = 1U;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -55;

    t17 = (x69<=((x70<=x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = -38175543406408LL;
	static int64_t x74 = -14906354974225132LL;
	int32_t x75 = -213;
	volatile int32_t t18 = 4301104;

    t18 = (x73<=((x74<=x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 13U;
	static uint64_t x78 = UINT64_MAX;
	int32_t t19 = -274;

    t19 = (x77<=((x78<=x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 2143911097383788LLU;
	int32_t x82 = -290783463;
	volatile int64_t x84 = -58520329623328LL;
	volatile int32_t t20 = -205868;

    t20 = (x81<=((x82<=x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = 118;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 0U;
	int32_t t21 = -530893358;

    t21 = (x85<=((x86<=x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 21U;
	int32_t t22 = 355396;

    t22 = (x89<=((x90<=x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 15U;
	static int16_t x94 = INT16_MIN;
	static uint32_t x95 = UINT32_MAX;
	static uint16_t x96 = 15713U;
	static int32_t t23 = 14705;

    t23 = (x93<=((x94<=x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	uint16_t x98 = 29U;
	static int16_t x99 = -1;
	uint64_t x100 = 2858636LLU;
	volatile int32_t t24 = -2;

    t24 = (x97<=((x98<=x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = INT16_MIN;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 5;

    t25 = (x101<=((x102<=x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MAX;
	static int8_t x107 = 1;
	int8_t x108 = INT8_MAX;

    t26 = (x105<=((x106<=x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	static volatile int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = 1;

    t27 = (x109<=((x110<=x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x114 = INT8_MIN;
	static int16_t x115 = -1;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -228;

    t28 = (x113<=((x114<=x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 6;
	volatile uint64_t x118 = 48200430LLU;
	static uint8_t x119 = 4U;
	int32_t x120 = INT32_MIN;

    t29 = (x117<=((x118<=x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t t30 = 83864;

    t30 = (x121<=((x122<=x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = -505620818217078LL;
	uint32_t x127 = 8338159U;
	volatile int32_t t31 = -28084510;

    t31 = (x125<=((x126<=x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	static int8_t x131 = -1;
	static int16_t x132 = INT16_MAX;
	volatile int32_t t32 = 57308;

    t32 = (x129<=((x130<=x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = 27;
	volatile uint16_t x134 = 8227U;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 1U;
	int32_t t33 = -1001;

    t33 = (x133<=((x134<=x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = -7503098LL;
	uint8_t x138 = 52U;
	int16_t x140 = 8537;
	static int32_t t34 = -3991175;

    t34 = (x137<=((x138<=x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int32_t x143 = -10924829;
	static int16_t x144 = INT16_MIN;
	int32_t t35 = 231878922;

    t35 = (x141<=((x142<=x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = UINT32_MAX;
	uint8_t x146 = UINT8_MAX;
	uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = 1;
	int32_t t36 = -412935;

    t36 = (x145<=((x146<=x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	volatile uint32_t x152 = UINT32_MAX;
	int32_t t37 = -1;

    t37 = (x149<=((x150<=x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 0;
	int64_t x155 = INT64_MIN;
	int64_t x156 = -1LL;
	volatile int32_t t38 = -243635120;

    t38 = (x153<=((x154<=x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = UINT32_MAX;
	volatile int16_t x158 = 2;
	static int16_t x159 = -31;

    t39 = (x157<=((x158<=x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 112377954762LLU;
	volatile int8_t x164 = 2;

    t40 = (x161<=((x162<=x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static int8_t x166 = 1;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 1184;

    t41 = (x165<=((x166<=x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 0U;
	int16_t x170 = -1;
	volatile uint16_t x171 = 1399U;
	uint32_t x172 = 42U;

    t42 = (x169<=((x170<=x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = 1986408;

    t43 = (x173<=((x174<=x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	static int64_t x178 = INT64_MIN;
	static int64_t x179 = -6759227990479831LL;
	int64_t x180 = INT64_MAX;
	volatile int32_t t44 = 58;

    t44 = (x177<=((x178<=x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	uint32_t x182 = 10686284U;
	int32_t x183 = 194049027;
	static volatile uint64_t x184 = UINT64_MAX;
	int32_t t45 = -448838964;

    t45 = (x181<=((x182<=x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 26U;
	static volatile int32_t x187 = INT32_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = -14531;

    t46 = (x185<=((x186<=x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 3U;
	uint8_t x190 = 15U;
	uint16_t x191 = UINT16_MAX;

    t47 = (x189<=((x190<=x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static int32_t x194 = 12;
	int32_t t48 = 507544;

    t48 = (x193<=((x194<=x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 70U;
	uint16_t x198 = UINT16_MAX;
	int32_t x199 = -1;
	volatile uint8_t x200 = UINT8_MAX;
	static int32_t t49 = 296245090;

    t49 = (x197<=((x198<=x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = UINT32_MAX;
	volatile uint32_t x202 = 62U;
	int16_t x203 = 1;
	int16_t x204 = 0;
	static volatile int32_t t50 = 62306359;

    t50 = (x201<=((x202<=x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	static int64_t x207 = INT64_MAX;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 186785;

    t51 = (x205<=((x206<=x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int32_t t52 = 3663330;

    t52 = (x209<=((x210<=x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint8_t x215 = 0U;
	int8_t x216 = 1;
	int32_t t53 = -3;

    t53 = (x213<=((x214<=x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x217 = 145311771U;
	volatile int32_t x218 = INT32_MAX;
	uint64_t x219 = UINT64_MAX;

    t54 = (x217<=((x218<=x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 13385059U;
	volatile int16_t x222 = -20;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 7628;

    t55 = (x221<=((x222<=x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 39318LLU;
	int16_t x227 = -7;
	int16_t x228 = -1;
	int32_t t56 = 1;

    t56 = (x225<=((x226<=x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 43;

    t57 = (x229<=((x230<=x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 7;

    t58 = (x233<=((x234<=x235)==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 2153120877276746811LLU;
	int16_t x238 = -320;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 21U;
	int32_t t59 = 82319;

    t59 = (x237<=((x238<=x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = -2;
	volatile int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	int64_t x244 = -299861483873LL;

    t60 = (x241<=((x242<=x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 20330349121633LL;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = -1;
	uint32_t x248 = 5550U;

    t61 = (x245<=((x246<=x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = -1LL;
	uint32_t x251 = 63130U;
	int16_t x252 = 10;
	volatile int32_t t62 = -257518855;

    t62 = (x249<=((x250<=x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MAX;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MIN;
	int32_t t63 = 1;

    t63 = (x253<=((x254<=x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	volatile int16_t x259 = -10;
	int8_t x260 = INT8_MAX;
	static int32_t t64 = 0;

    t64 = (x257<=((x258<=x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int64_t x262 = -362085906544LL;
	volatile int64_t x263 = 25060165LL;
	static int64_t x264 = -1LL;
	int32_t t65 = 0;

    t65 = (x261<=((x262<=x263)==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = -1;
	int32_t x266 = -12955;
	int16_t x267 = -1;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 20;

    t66 = (x265<=((x266<=x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = INT16_MIN;
	volatile int64_t x271 = -1LL;
	uint32_t x272 = 2380072U;
	static int32_t t67 = 120026;

    t67 = (x269<=((x270<=x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 745127U;
	volatile int32_t x274 = -406595416;
	uint16_t x275 = 2540U;
	uint64_t x276 = 190909105318286251LLU;
	static int32_t t68 = -1047007173;

    t68 = (x273<=((x274<=x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	volatile int8_t x278 = INT8_MIN;
	static int32_t x279 = 1;
	int8_t x280 = 17;

    t69 = (x277<=((x278<=x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	volatile int16_t x282 = -1;
	static int8_t x283 = INT8_MAX;
	int32_t t70 = 7;

    t70 = (x281<=((x282<=x283)==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x285 = 1;
	volatile int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -542LL;
	int32_t t71 = -375177473;

    t71 = (x285<=((x286<=x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x289 = 10774U;
	static int8_t x290 = -1;
	int32_t x291 = INT32_MAX;
	uint32_t x292 = UINT32_MAX;
	static int32_t t72 = -175441;

    t72 = (x289<=((x290<=x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = -1;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -5010;

    t73 = (x293<=((x294<=x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 150769725;
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t74 = 1;

    t74 = (x297<=((x298<=x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = 1035400009546499954LL;
	static uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 15917;

    t75 = (x301<=((x302<=x303)==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	static int16_t x306 = -92;
	int32_t x307 = -1;
	int32_t t76 = -1;

    t76 = (x305<=((x306<=x307)==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = -1LL;
	uint32_t x310 = 2709U;
	static uint8_t x311 = UINT8_MAX;
	uint32_t x312 = UINT32_MAX;
	int32_t t77 = 1;

    t77 = (x309<=((x310<=x311)==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -133770865;
	static volatile uint64_t x314 = 480392695505882LLU;
	uint64_t x315 = 2972896631279249LLU;

    t78 = (x313<=((x314<=x315)==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = 3LL;
	volatile int32_t t79 = -43;

    t79 = (x317<=((x318<=x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MIN;
	volatile uint8_t x323 = 3U;
	int8_t x324 = 0;
	volatile int32_t t80 = 158;

    t80 = (x321<=((x322<=x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = UINT64_MAX;
	uint8_t x326 = UINT8_MAX;
	static int8_t x327 = INT8_MAX;

    t81 = (x325<=((x326<=x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 103;
	volatile int64_t x330 = -15LL;
	int32_t x331 = 1912;
	volatile int32_t x332 = -1;
	volatile int32_t t82 = -22685;

    t82 = (x329<=((x330<=x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	static uint64_t x335 = UINT64_MAX;
	int64_t x336 = 27007587160LL;
	volatile int32_t t83 = 8;

    t83 = (x333<=((x334<=x335)==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	volatile int32_t x338 = 80834607;
	int64_t x339 = 734977779273LL;
	static int8_t x340 = -1;

    t84 = (x337<=((x338<=x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x341 = UINT64_MAX;
	static int8_t x342 = 43;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 3;

    t85 = (x341<=((x342<=x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = -1LL;
	static uint32_t x347 = UINT32_MAX;
	int32_t x348 = -2;
	volatile int32_t t86 = 12530314;

    t86 = (x345<=((x346<=x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = INT64_MAX;
	uint16_t x350 = 942U;
	uint64_t x351 = 2495585950008997LLU;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -362250;

    t87 = (x349<=((x350<=x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x355 = INT32_MIN;
	uint32_t x356 = 5735013U;
	int32_t t88 = 744671860;

    t88 = (x353<=((x354<=x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x357 = -1;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t t89 = -921854208;

    t89 = (x357<=((x358<=x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint8_t x362 = 0U;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 11070;

    t90 = (x361<=((x362<=x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 460526U;
	volatile int32_t x366 = -59192865;
	static uint8_t x368 = 3U;

    t91 = (x365<=((x366<=x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 472515663U;
	int64_t x370 = 466403198LL;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t92 = 210169;

    t92 = (x369<=((x370<=x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 4966387U;
	volatile uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;

    t93 = (x373<=((x374<=x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -46;
	volatile uint32_t x378 = 51U;
	int32_t t94 = -28;

    t94 = (x377<=((x378<=x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 952U;
	volatile int8_t x382 = 3;
	static int8_t x383 = 1;
	int32_t x384 = INT32_MIN;

    t95 = (x381<=((x382<=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 0U;
	static volatile int32_t x386 = INT32_MIN;
	volatile int16_t x387 = -1;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = 6885;

    t96 = (x385<=((x386<=x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = INT32_MAX;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = 13173;

    t97 = (x389<=((x390<=x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 5LLU;
	int8_t x394 = 40;
	static int64_t x395 = 24471224154LL;
	volatile uint64_t x396 = 2LLU;

    t98 = (x393<=((x394<=x395)==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MIN;
	volatile int32_t x399 = 61;
	volatile int8_t x400 = -6;
	int32_t t99 = -27;

    t99 = (x397<=((x398<=x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = INT16_MIN;
	uint16_t x402 = 6147U;
	uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = INT16_MAX;
	int32_t t100 = -13;

    t100 = (x401<=((x402<=x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = -1;
	int32_t x406 = -65;
	uint8_t x407 = UINT8_MAX;
	int8_t x408 = 2;
	int32_t t101 = -6168803;

    t101 = (x405<=((x406<=x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = -1;
	int8_t x410 = -1;
	static volatile int32_t x412 = 4;
	volatile int32_t t102 = 28;

    t102 = (x409<=((x410<=x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = 1;
	uint16_t x416 = 5U;
	volatile int32_t t103 = -56310;

    t103 = (x413<=((x414<=x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = UINT16_MAX;
	static volatile int8_t x418 = INT8_MIN;
	int32_t x419 = 1;
	uint64_t x420 = 16186384983LLU;
	int32_t t104 = 126;

    t104 = (x417<=((x418<=x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 1U;
	int64_t x422 = 530010975LL;
	int16_t x423 = INT16_MIN;
	static int32_t x424 = INT32_MAX;
	int32_t t105 = 1239246;

    t105 = (x421<=((x422<=x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x426 = 142U;
	int8_t x428 = -1;
	int32_t t106 = 7374387;

    t106 = (x425<=((x426<=x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 1U;
	int32_t x431 = 60;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t107 = -4;

    t107 = (x429<=((x430<=x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = 5076U;
	uint64_t x434 = UINT64_MAX;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t t108 = -8690;

    t108 = (x433<=((x434<=x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = UINT64_MAX;
	int64_t x439 = -1LL;
	volatile int8_t x440 = INT8_MIN;

    t109 = (x437<=((x438<=x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int32_t t110 = 109;

    t110 = (x441<=((x442<=x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint32_t x446 = UINT32_MAX;
	uint8_t x448 = 4U;
	int32_t t111 = 86158;

    t111 = (x445<=((x446<=x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x449 = 24U;
	volatile uint32_t x450 = 574489U;
	volatile int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	static volatile int32_t t112 = -4131;

    t112 = (x449<=((x450<=x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x454 = -1LL;
	volatile uint64_t x455 = 9913294327103414LLU;
	volatile int32_t t113 = 1;

    t113 = (x453<=((x454<=x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x458 = -1;
	int64_t x459 = 760970645739726LL;
	int64_t x460 = INT64_MIN;

    t114 = (x457<=((x458<=x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x462 = -2;
	uint32_t x463 = UINT32_MAX;
	static uint16_t x464 = UINT16_MAX;
	static volatile int32_t t115 = -93316853;

    t115 = (x461<=((x462<=x463)==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 2113538887378590LLU;
	int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t116 = -3277;

    t116 = (x465<=((x466<=x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MIN;
	static int32_t t117 = -8;

    t117 = (x469<=((x470<=x471)==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x475 = -1;
	static int64_t x476 = 67148483290540368LL;
	volatile int32_t t118 = -98;

    t118 = (x473<=((x474<=x475)==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = -1LL;
	static uint64_t x478 = UINT64_MAX;
	uint32_t x480 = 121654595U;
	int32_t t119 = 8396;

    t119 = (x477<=((x478<=x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	volatile int64_t x484 = INT64_MIN;
	int32_t t120 = 145867734;

    t120 = (x481<=((x482<=x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 720LLU;
	int32_t x486 = INT32_MIN;
	static int64_t x487 = INT64_MAX;
	int8_t x488 = INT8_MIN;
	int32_t t121 = -4;

    t121 = (x485<=((x486<=x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = 0U;
	int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = 547263;

    t122 = (x489<=((x490<=x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MAX;
	volatile int8_t x495 = -1;
	int64_t x496 = INT64_MIN;
	int32_t t123 = 543977;

    t123 = (x493<=((x494<=x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = -50647532748499991LL;
	int32_t x500 = INT32_MIN;
	int32_t t124 = 210373;

    t124 = (x497<=((x498<=x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	static int8_t x502 = -14;
	uint32_t x503 = 84U;
	int32_t x504 = -1091;
	static volatile int32_t t125 = -132674223;

    t125 = (x501<=((x502<=x503)==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = -1;
	uint8_t x507 = 25U;
	uint32_t x508 = 112629897U;

    t126 = (x505<=((x506<=x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x510 = INT64_MIN;
	uint16_t x512 = 4048U;
	volatile int32_t t127 = -1;

    t127 = (x509<=((x510<=x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 0U;
	volatile int32_t t128 = -1;

    t128 = (x513<=((x514<=x515)==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	int16_t x518 = 0;
	int64_t x520 = INT64_MAX;
	int32_t t129 = 208474;

    t129 = (x517<=((x518<=x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = -1;
	static int16_t x522 = INT16_MIN;
	volatile uint16_t x523 = UINT16_MAX;
	static int32_t x524 = -1;
	volatile int32_t t130 = 5648;

    t130 = (x521<=((x522<=x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	uint8_t x526 = UINT8_MAX;
	int16_t x527 = INT16_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t131 = 2416035;

    t131 = (x525<=((x526<=x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	static uint64_t x530 = 1770761LLU;
	int8_t x531 = -1;
	volatile int16_t x532 = -1;

    t132 = (x529<=((x530<=x531)==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 1;
	static int64_t x534 = INT64_MIN;
	static int16_t x535 = INT16_MAX;
	int8_t x536 = -8;
	static int32_t t133 = 63747008;

    t133 = (x533<=((x534<=x535)==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = 48;
	volatile int8_t x540 = INT8_MAX;
	volatile int32_t t134 = 104;

    t134 = (x537<=((x538<=x539)==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x541 = UINT8_MAX;
	int8_t x542 = -13;
	static uint16_t x543 = 10784U;
	int32_t t135 = 206287576;

    t135 = (x541<=((x542<=x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint32_t x546 = 550U;
	uint64_t x547 = 9682444803195LLU;
	volatile uint8_t x548 = UINT8_MAX;
	static volatile int32_t t136 = -5;

    t136 = (x545<=((x546<=x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	int16_t x550 = -1;
	static volatile uint16_t x551 = UINT16_MAX;
	int32_t t137 = -6;

    t137 = (x549<=((x550<=x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	int32_t x554 = -1390632;
	volatile int8_t x555 = -1;
	int8_t x556 = 1;
	volatile int32_t t138 = 56;

    t138 = (x553<=((x554<=x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	int64_t x559 = 369637686766550LL;
	volatile uint32_t x560 = UINT32_MAX;
	int32_t t139 = -4;

    t139 = (x557<=((x558<=x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MAX;
	static uint64_t x564 = 28858056769257566LLU;
	int32_t t140 = 1;

    t140 = (x561<=((x562<=x563)==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 185985207786599LLU;
	int32_t x566 = INT32_MAX;
	int32_t t141 = 613;

    t141 = (x565<=((x566<=x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = INT16_MIN;
	int64_t x572 = INT64_MIN;
	volatile int32_t t142 = 37734;

    t142 = (x569<=((x570<=x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x574 = -178;
	uint16_t x575 = 31U;
	int16_t x576 = -1;
	volatile int32_t t143 = -308;

    t143 = (x573<=((x574<=x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x580 = UINT8_MAX;
	int32_t t144 = -34;

    t144 = (x577<=((x578<=x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	static uint32_t x582 = UINT32_MAX;
	volatile int64_t x583 = -1LL;
	int32_t t145 = 1;

    t145 = (x581<=((x582<=x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x587 = -273;

    t146 = (x585<=((x586<=x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 601287184LLU;
	int64_t x590 = -1LL;
	volatile int16_t x591 = INT16_MIN;
	static uint16_t x592 = 4514U;
	int32_t t147 = -3383288;

    t147 = (x589<=((x590<=x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 46982310261711LLU;
	static volatile uint64_t x594 = 1827179LLU;
	uint64_t x595 = 615732686727602LLU;
	uint8_t x596 = 0U;

    t148 = (x593<=((x594<=x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = 0U;
	static int64_t x599 = INT64_MAX;
	static uint32_t x600 = 1013U;
	int32_t t149 = -97000;

    t149 = (x597<=((x598<=x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = -1;
	static int32_t x602 = INT32_MIN;
	static uint32_t x604 = UINT32_MAX;
	int32_t t150 = 31;

    t150 = (x601<=((x602<=x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -57LL;
	static int64_t x606 = INT64_MAX;
	uint64_t x607 = 1035285LLU;
	volatile int16_t x608 = -229;
	int32_t t151 = 3;

    t151 = (x605<=((x606<=x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	volatile int64_t x610 = INT64_MAX;
	volatile uint64_t x612 = UINT64_MAX;
	int32_t t152 = -9309;

    t152 = (x609<=((x610<=x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 615443LL;
	uint64_t x614 = 680713311776206LLU;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t153 = -7858;

    t153 = (x613<=((x614<=x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 105U;
	int16_t x618 = INT16_MIN;
	uint32_t x619 = 34903039U;
	static int32_t x620 = INT32_MAX;
	int32_t t154 = 7973335;

    t154 = (x617<=((x618<=x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 16U;
	static volatile int32_t t155 = -5;

    t155 = (x621<=((x622<=x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int8_t x626 = INT8_MIN;
	static volatile uint32_t x628 = 105U;
	int32_t t156 = 59;

    t156 = (x625<=((x626<=x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t t157 = 3;

    t157 = (x629<=((x630<=x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MAX;
	int32_t x636 = -6;
	volatile int32_t t158 = -4099;

    t158 = (x633<=((x634<=x635)==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x637 = 391U;
	int16_t x638 = -1;
	int64_t x640 = -2746LL;
	int32_t t159 = 46;

    t159 = (x637<=((x638<=x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x641 = UINT8_MAX;
	static int32_t x642 = -1441;
	int8_t x643 = 2;
	int32_t x644 = -1;
	volatile int32_t t160 = 200707;

    t160 = (x641<=((x642<=x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 106734U;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -1;

    t161 = (x645<=((x646<=x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = 83U;
	static uint16_t x650 = 16U;
	volatile uint8_t x652 = UINT8_MAX;
	volatile int32_t t162 = 1;

    t162 = (x649<=((x650<=x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = UINT16_MAX;
	uint16_t x654 = 22U;
	int16_t x655 = -1;

    t163 = (x653<=((x654<=x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = -1;
	volatile int32_t x659 = INT32_MAX;
	static volatile int32_t t164 = 6715;

    t164 = (x657<=((x658<=x659)==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = 0;
	volatile uint64_t x663 = 506633459593LLU;
	uint64_t x664 = 724656701884085802LLU;
	static volatile int32_t t165 = 4237936;

    t165 = (x661<=((x662<=x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = 528U;
	int16_t x667 = INT16_MAX;
	int64_t x668 = -46737483416942LL;
	volatile int32_t t166 = 704592;

    t166 = (x665<=((x666<=x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	static uint16_t x670 = 13U;
	int16_t x671 = 0;

    t167 = (x669<=((x670<=x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = -1;
	int16_t x674 = -1;
	uint32_t x675 = 7U;
	volatile int32_t t168 = -5983;

    t168 = (x673<=((x674<=x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MIN;
	static int16_t x679 = INT16_MIN;
	static int8_t x680 = -1;
	volatile int32_t t169 = 15832;

    t169 = (x677<=((x678<=x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	int8_t x682 = INT8_MAX;
	int64_t x683 = INT64_MAX;
	int16_t x684 = -1;
	static volatile int32_t t170 = 20073;

    t170 = (x681<=((x682<=x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 1706820724U;

    t171 = (x685<=((x686<=x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = -41;
	volatile int32_t x690 = -1;

    t172 = (x689<=((x690<=x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MIN;
	static uint64_t x694 = 62372169463196LLU;
	uint32_t x695 = 9458U;
	uint64_t x696 = 287LLU;

    t173 = (x693<=((x694<=x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 4437470892954482LLU;
	int32_t x698 = INT32_MIN;
	int32_t x699 = -1;
	static int64_t x700 = 69LL;
	volatile int32_t t174 = 24604;

    t174 = (x697<=((x698<=x699)==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = UINT16_MAX;
	int8_t x702 = INT8_MIN;
	static volatile int8_t x703 = INT8_MAX;
	int16_t x704 = INT16_MIN;

    t175 = (x701<=((x702<=x703)==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 7U;
	uint16_t x706 = UINT16_MAX;
	int32_t x707 = 8255;
	int8_t x708 = INT8_MIN;

    t176 = (x705<=((x706<=x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x709 = INT8_MIN;
	uint64_t x710 = UINT64_MAX;
	static volatile uint64_t x711 = UINT64_MAX;
	static int16_t x712 = INT16_MIN;
	int32_t t177 = -202520;

    t177 = (x709<=((x710<=x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	static int64_t x714 = 83LL;
	volatile int64_t x715 = -1LL;
	uint16_t x716 = UINT16_MAX;

    t178 = (x713<=((x714<=x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = -1;
	int16_t x719 = -1;
	int8_t x720 = INT8_MIN;
	volatile int32_t t179 = 0;

    t179 = (x717<=((x718<=x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = -71856792;
	int16_t x723 = -49;
	int64_t x724 = -1LL;
	volatile int32_t t180 = -11;

    t180 = (x721<=((x722<=x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = 14952;
	volatile uint64_t x726 = UINT64_MAX;
	uint16_t x727 = 1U;

    t181 = (x725<=((x726<=x727)==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	int8_t x731 = INT8_MAX;
	int8_t x732 = INT8_MIN;
	int32_t t182 = -58457532;

    t182 = (x729<=((x730<=x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -146;
	uint32_t x735 = UINT32_MAX;
	volatile int32_t t183 = -18644483;

    t183 = (x733<=((x734<=x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	static uint16_t x738 = UINT16_MAX;
	int32_t x739 = INT32_MIN;
	static uint16_t x740 = UINT16_MAX;
	int32_t t184 = -986671975;

    t184 = (x737<=((x738<=x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -6173;
	uint64_t x742 = 1455872LLU;
	volatile int8_t x743 = INT8_MAX;

    t185 = (x741<=((x742<=x743)==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	int32_t x748 = 1;
	volatile int32_t t186 = 3470;

    t186 = (x745<=((x746<=x747)==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 1;
	uint64_t x750 = UINT64_MAX;
	int8_t x752 = INT8_MAX;
	int32_t t187 = 0;

    t187 = (x749<=((x750<=x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x754 = 29;
	static int16_t x755 = INT16_MAX;
	int64_t x756 = INT64_MAX;
	static volatile int32_t t188 = -7147;

    t188 = (x753<=((x754<=x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = -1;
	int32_t x758 = 13979816;
	int16_t x759 = INT16_MIN;
	volatile int32_t t189 = -10;

    t189 = (x757<=((x758<=x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 56U;
	int64_t x762 = INT64_MIN;
	int32_t x763 = -2751;
	volatile int32_t t190 = 469434;

    t190 = (x761<=((x762<=x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = 1U;
	volatile int8_t x766 = INT8_MIN;
	static uint64_t x767 = 4118948415207697LLU;
	volatile int16_t x768 = -1446;
	int32_t t191 = -5;

    t191 = (x765<=((x766<=x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 2U;
	uint32_t x770 = UINT32_MAX;
	uint64_t x771 = 816534LLU;
	int16_t x772 = 2;
	static int32_t t192 = 508;

    t192 = (x769<=((x770<=x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	int8_t x774 = -1;
	int32_t t193 = 171;

    t193 = (x773<=((x774<=x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 0U;
	int8_t x778 = INT8_MAX;
	static int64_t x779 = INT64_MIN;
	static int32_t t194 = -36;

    t194 = (x777<=((x778<=x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	static uint8_t x782 = UINT8_MAX;
	volatile int8_t x783 = -1;
	int16_t x784 = INT16_MIN;
	int32_t t195 = 2021;

    t195 = (x781<=((x782<=x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	volatile int32_t x786 = INT32_MIN;
	static volatile int32_t t196 = 25821522;

    t196 = (x785<=((x786<=x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = -3;
	int64_t x791 = INT64_MIN;
	volatile int32_t t197 = 363630;

    t197 = (x789<=((x790<=x791)==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 1561U;
	uint32_t x794 = 175U;
	int64_t x795 = 0LL;
	int32_t x796 = INT32_MAX;
	int32_t t198 = -180;

    t198 = (x793<=((x794<=x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	int16_t x798 = 4;
	static volatile int64_t x799 = 2010746860514850327LL;
	static uint64_t x800 = 819LLU;
	volatile int32_t t199 = -77829;

    t199 = (x797<=((x798<=x799)==x800));

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

