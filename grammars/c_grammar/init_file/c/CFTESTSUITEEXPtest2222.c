
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

volatile int32_t x2 = 243343607;
int8_t x4 = -2;
int16_t x7 = 174;
int8_t x19 = INT8_MIN;
int64_t x23 = -1LL;
int32_t t5 = -3585430;
int8_t x27 = -1;
int16_t x30 = INT16_MIN;
static volatile int32_t x31 = INT32_MAX;
volatile int32_t t7 = 57806;
int32_t x42 = INT32_MIN;
uint64_t x46 = UINT64_MAX;
int32_t t11 = 2135089;
uint64_t x49 = 3405LLU;
int64_t x54 = -59757450476LL;
int8_t x56 = INT8_MIN;
static uint32_t x58 = 972999U;
volatile int32_t t15 = -30655113;
volatile int64_t x68 = -35509207LL;
int16_t x70 = INT16_MAX;
int32_t x88 = 4264;
static uint32_t x95 = 11420876U;
int32_t x97 = -1;
int64_t x114 = 1825355026698LL;
volatile int32_t t28 = -1058;
uint8_t x119 = 24U;
int8_t x122 = 19;
int64_t x128 = INT64_MIN;
static uint8_t x137 = UINT8_MAX;
int32_t x145 = 27861;
static int64_t x146 = INT64_MAX;
uint16_t x148 = 19U;
int16_t x152 = 179;
int32_t t37 = 90231068;
int8_t x155 = -4;
int64_t x157 = 22LL;
int8_t x168 = INT8_MIN;
int32_t t41 = -2031970;
uint16_t x171 = UINT16_MAX;
int32_t t42 = -788761;
int16_t x173 = -3;
uint64_t x177 = UINT64_MAX;
int32_t x179 = -817;
static int32_t x182 = -2676655;
int8_t x185 = -29;
volatile int64_t x188 = INT64_MIN;
volatile int32_t t46 = -32445650;
static int8_t x193 = -16;
volatile int16_t x195 = -1;
uint32_t x196 = 150U;
volatile int32_t t48 = 225387165;
uint32_t x201 = UINT32_MAX;
uint64_t x202 = 62476643151491LLU;
int32_t x204 = INT32_MIN;
static int16_t x211 = -144;
volatile int32_t t50 = 169424618;
volatile uint64_t x221 = 1517855LLU;
int8_t x224 = INT8_MIN;
uint16_t x226 = UINT16_MAX;
volatile uint16_t x229 = UINT16_MAX;
uint16_t x232 = 3U;
volatile int32_t t55 = -16620192;
volatile uint8_t x233 = 1U;
volatile int32_t t56 = 6;
uint64_t x238 = 416LLU;
static uint16_t x246 = 0U;
int32_t x250 = -3270459;
static volatile int64_t x252 = -1LL;
int32_t x261 = INT32_MIN;
uint8_t x263 = 74U;
volatile uint16_t x264 = 1666U;
uint16_t x266 = UINT16_MAX;
int32_t t64 = -1163;
int64_t x270 = INT64_MIN;
int8_t x272 = 17;
static int32_t x273 = INT32_MIN;
uint16_t x275 = 12U;
volatile int8_t x278 = -1;
int64_t x284 = INT64_MAX;
static int32_t t69 = 0;
volatile int32_t x289 = INT32_MIN;
volatile uint64_t x299 = UINT64_MAX;
static volatile uint8_t x304 = UINT8_MAX;
volatile int32_t x314 = 100140;
static int16_t x315 = -6349;
int32_t t75 = 23;
volatile int8_t x317 = INT8_MIN;
int32_t x329 = -28252859;
volatile int64_t x332 = -2LL;
int8_t x333 = -12;
int32_t x334 = INT32_MIN;
volatile int32_t t81 = -1591;
uint32_t x341 = UINT32_MAX;
int32_t t83 = -13965;
static uint64_t x355 = UINT64_MAX;
static volatile int16_t x356 = -1;
uint32_t x363 = 12267U;
static int8_t x366 = -1;
volatile int32_t t89 = -510;
volatile uint32_t x375 = 7006U;
volatile int32_t t91 = 3;
volatile int32_t t94 = 1311144;
uint32_t x393 = UINT32_MAX;
int32_t x398 = -833;
static int64_t x402 = INT64_MIN;
volatile int32_t t97 = 12;
static int16_t x407 = INT16_MAX;
uint8_t x413 = 1U;
int32_t x420 = 31809;
uint16_t x424 = 89U;
volatile uint64_t x425 = 2LLU;
uint8_t x427 = UINT8_MAX;
int32_t t103 = -821730;
int8_t x431 = INT8_MIN;
static int64_t x432 = -1312614735336495LL;
volatile int8_t x436 = -1;
static int16_t x437 = INT16_MIN;
int8_t x442 = INT8_MIN;
volatile int16_t x451 = INT16_MIN;
volatile int32_t t110 = -1;
uint8_t x457 = 0U;
int32_t t111 = -204;
uint16_t x461 = 450U;
static int64_t x462 = INT64_MAX;
int32_t t114 = 240;
uint32_t x476 = 466U;
int16_t x478 = INT16_MIN;
volatile uint16_t x482 = 18U;
int32_t x483 = 8958;
static volatile int16_t x484 = -1;
static int32_t t117 = -202912;
uint16_t x485 = UINT16_MAX;
volatile int16_t x486 = -7;
int16_t x489 = 0;
uint32_t x490 = UINT32_MAX;
static int8_t x498 = INT8_MAX;
int64_t x500 = INT64_MAX;
volatile int64_t x502 = INT64_MIN;
static uint64_t x503 = UINT64_MAX;
int32_t t123 = 1;
int16_t x509 = -1;
int16_t x515 = INT16_MAX;
int32_t t129 = 5;
uint8_t x533 = 1U;
int64_t x540 = INT64_MAX;
static volatile uint32_t x548 = 2U;
int32_t x555 = 10797;
static int32_t t136 = 1484412;
volatile int64_t x562 = INT64_MAX;
static int8_t x574 = INT8_MIN;
uint8_t x575 = 3U;
int8_t x583 = -2;
uint8_t x588 = 1U;
int64_t x589 = -227921LL;
int32_t x593 = -193928;
int32_t t144 = 170183729;
uint32_t x599 = 191188851U;
uint32_t x616 = 46029093U;
int16_t x618 = -3;
int64_t x620 = -1LL;
volatile int32_t t151 = 978360;
int8_t x630 = INT8_MAX;
int32_t t153 = -4;
int32_t x635 = -1;
static volatile int32_t x638 = INT32_MIN;
volatile int64_t x640 = INT64_MIN;
int8_t x645 = INT8_MAX;
int16_t x650 = -1;
int32_t x652 = INT32_MAX;
int32_t t158 = 0;
int32_t x657 = INT32_MIN;
static int8_t x675 = 3;
static int32_t t163 = 1;
int64_t x693 = INT64_MIN;
static int64_t x694 = INT64_MIN;
int64_t x696 = 56LL;
static int8_t x697 = INT8_MIN;
uint16_t x701 = 22U;
static volatile int32_t t170 = -5;
volatile int16_t x708 = -1;
uint32_t x712 = UINT32_MAX;
static int32_t x718 = 224109041;
uint32_t x723 = UINT32_MAX;
int32_t x736 = 2889814;
static volatile int32_t t179 = 189752919;
int8_t x750 = -1;
volatile uint16_t x752 = 3U;
int32_t t186 = 1683855;
volatile int32_t t188 = -249958;
uint8_t x779 = 67U;
static uint16_t x783 = UINT16_MAX;
int8_t x786 = 39;
int16_t x787 = INT16_MAX;
static int16_t x788 = INT16_MIN;
uint16_t x795 = 9409U;
static int32_t x798 = 370657;
int32_t t194 = 9152;
uint32_t x801 = 41721U;
int8_t x804 = INT8_MIN;
volatile int8_t x806 = INT8_MIN;
int16_t x814 = -1;
volatile int32_t t198 = -230590123;
int8_t x817 = 0;


void f0(void) {
    	uint16_t x1 = 7934U;
	int32_t x3 = INT32_MAX;
	volatile int32_t t0 = -1;

    t0 = (x1<=((x2&x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 41;
	volatile int32_t x6 = INT32_MAX;
	int8_t x8 = -1;
	int32_t t1 = 7222;

    t1 = (x5<=((x6&x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 205490323;

    t2 = (x9<=((x10&x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 691881152U;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = -1;
	int8_t x16 = -1;
	static volatile int32_t t3 = -6;

    t3 = (x13<=((x14&x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint16_t x18 = 6205U;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 7589;

    t4 = (x17<=((x18&x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 912U;
	volatile uint32_t x22 = 313698U;
	static int8_t x24 = INT8_MAX;

    t5 = (x21<=((x22&x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = UINT32_MAX;
	uint8_t x26 = 3U;
	volatile uint32_t x28 = 6U;
	static int32_t t6 = -5;

    t6 = (x25<=((x26&x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 3U;
	static int64_t x32 = -1LL;

    t7 = (x29<=((x30&x31)%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int32_t x34 = -197140387;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 10054012;

    t8 = (x33<=((x34&x35)%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int64_t x38 = -1LL;
	static volatile uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -6912;

    t9 = (x37<=((x38&x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	static uint64_t x43 = UINT64_MAX;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -932235;

    t10 = (x41<=((x42&x43)%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	static int32_t x47 = INT32_MIN;
	static int64_t x48 = -651585617LL;

    t11 = (x45<=((x46&x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x50 = 5810698U;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = 27277;
	volatile int32_t t12 = -4;

    t12 = (x49<=((x50&x51)%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	int32_t t13 = 5256025;

    t13 = (x53<=((x54&x55)%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	volatile int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 5986667;

    t14 = (x57<=((x58&x59)%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 14U;
	static int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = 11394;

    t15 = (x61<=((x62&x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = 0;
	volatile uint32_t x67 = UINT32_MAX;
	static volatile int32_t t16 = -27;

    t16 = (x65<=((x66&x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 24U;
	static int32_t x71 = -186351;
	int16_t x72 = -11;
	int32_t t17 = 1838;

    t17 = (x69<=((x70&x71)%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 1U;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 17080050LLU;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -1956919;

    t18 = (x73<=((x74&x75)%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	uint64_t x78 = 7226212LLU;
	volatile int32_t x79 = INT32_MIN;
	static int64_t x80 = -7349527344012301LL;
	volatile int32_t t19 = 41;

    t19 = (x77<=((x78&x79)%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 149091196874LLU;
	int16_t x82 = INT16_MAX;
	volatile int32_t x83 = 2555816;
	static int8_t x84 = INT8_MIN;
	static int32_t t20 = 126119987;

    t20 = (x81<=((x82&x83)%x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 179LLU;
	int64_t x86 = -1LL;
	uint16_t x87 = 4057U;
	volatile int32_t t21 = 4854;

    t21 = (x85<=((x86&x87)%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	int8_t x90 = -1;
	static volatile int64_t x91 = 76652516LL;
	int8_t x92 = -2;
	volatile int32_t t22 = -4628;

    t22 = (x89<=((x90&x91)%x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	static int32_t x94 = -307283;
	static uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = 3054;

    t23 = (x93<=((x94&x95)%x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MAX;
	static uint32_t x100 = 1126843825U;
	volatile int32_t t24 = -3131;

    t24 = (x97<=((x98&x99)%x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile int64_t x102 = INT64_MAX;
	int8_t x103 = 1;
	uint64_t x104 = 2898993LLU;
	int32_t t25 = -6755;

    t25 = (x101<=((x102&x103)%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x105 = 338U;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	volatile int32_t t26 = -931;

    t26 = (x105<=((x106&x107)%x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	uint16_t x110 = 376U;
	static int16_t x111 = -1;
	volatile int16_t x112 = 1;
	int32_t t27 = -85;

    t27 = (x109<=((x110&x111)%x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	int64_t x115 = -1LL;
	int16_t x116 = -1;

    t28 = (x113<=((x114&x115)%x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 1375;
	static int16_t x118 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -33141613;

    t29 = (x117<=((x118&x119)%x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -32LL;
	static uint16_t x123 = UINT16_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 2;

    t30 = (x121<=((x122&x123)%x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	volatile int8_t x126 = -26;
	uint8_t x127 = UINT8_MAX;
	volatile int32_t t31 = -173826;

    t31 = (x125<=((x126&x127)%x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = 1U;
	uint64_t x130 = 12LLU;
	static int32_t x131 = INT32_MIN;
	volatile int8_t x132 = -5;
	static volatile int32_t t32 = 1876;

    t32 = (x129<=((x130&x131)%x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	int32_t x134 = -2300;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 184U;
	volatile int32_t t33 = -26041432;

    t33 = (x133<=((x134&x135)%x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	static int64_t x139 = INT64_MIN;
	static volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -84705142;

    t34 = (x137<=((x138&x139)%x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = UINT64_MAX;
	static volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = 5;

    t35 = (x141<=((x142&x143)%x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x147 = 53U;
	int32_t t36 = 649;

    t36 = (x145<=((x146&x147)%x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MAX;
	uint32_t x151 = UINT32_MAX;

    t37 = (x149<=((x150&x151)%x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -1;
	int64_t x154 = -1LL;
	static volatile int32_t x156 = -834804600;
	int32_t t38 = -6;

    t38 = (x153<=((x154&x155)%x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x158 = 598U;
	int16_t x159 = INT16_MIN;
	static volatile int32_t x160 = INT32_MAX;
	int32_t t39 = 1238747;

    t39 = (x157<=((x158&x159)%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = 23;
	uint8_t x162 = 6U;
	volatile int32_t x163 = INT32_MIN;
	static int32_t x164 = -164;
	int32_t t40 = -7388272;

    t40 = (x161<=((x162&x163)%x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x165 = -1LL;
	uint64_t x166 = 857328782288458LLU;
	int32_t x167 = 97792;

    t41 = (x165<=((x166&x167)%x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 19U;
	uint32_t x170 = 232304696U;
	volatile uint8_t x172 = UINT8_MAX;

    t42 = (x169<=((x170&x171)%x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = 517830LLU;
	int8_t x175 = 5;
	volatile int8_t x176 = INT8_MAX;
	static volatile int32_t t43 = 548819;

    t43 = (x173<=((x174&x175)%x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x178 = UINT8_MAX;
	static volatile int8_t x180 = -1;
	int32_t t44 = -349704;

    t44 = (x177<=((x178&x179)%x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	volatile uint16_t x183 = 187U;
	static int16_t x184 = INT16_MIN;
	static int32_t t45 = 187062;

    t45 = (x181<=((x182&x183)%x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	volatile uint8_t x187 = UINT8_MAX;

    t46 = (x185<=((x186&x187)%x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x194 = 403U;
	int32_t t47 = -442;

    t47 = (x193<=((x194&x195)%x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	static int16_t x199 = INT16_MIN;
	static uint8_t x200 = UINT8_MAX;

    t48 = (x197<=((x198&x199)%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x203 = INT16_MAX;
	int32_t t49 = -109084;

    t49 = (x201<=((x202&x203)%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	int8_t x212 = 1;

    t50 = (x209<=((x210&x211)%x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x213 = 8669LLU;
	int8_t x214 = 36;
	volatile int8_t x215 = INT8_MAX;
	uint8_t x216 = UINT8_MAX;
	int32_t t51 = 4047;

    t51 = (x213<=((x214&x215)%x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	static uint64_t x218 = UINT64_MAX;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t52 = -7700240;

    t52 = (x217<=((x218&x219)%x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x222 = -1;
	static int32_t x223 = INT32_MIN;
	static volatile int32_t t53 = -31;

    t53 = (x221<=((x222&x223)%x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x225 = 8267320U;
	volatile int8_t x227 = -30;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t54 = 160;

    t54 = (x225<=((x226&x227)%x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x230 = 489;
	uint32_t x231 = UINT32_MAX;

    t55 = (x229<=((x230&x231)%x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;

    t56 = (x233<=((x234&x235)%x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -1LL;
	uint64_t x239 = UINT64_MAX;
	static uint16_t x240 = UINT16_MAX;
	static int32_t t57 = -94041790;

    t57 = (x237<=((x238&x239)%x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x241 = 211094201351LLU;
	int16_t x242 = INT16_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t58 = 14402;

    t58 = (x241<=((x242&x243)%x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x245 = INT16_MAX;
	volatile int16_t x247 = INT16_MIN;
	static uint32_t x248 = 273171046U;
	int32_t t59 = -1334931;

    t59 = (x245<=((x246&x247)%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x249 = 1128U;
	volatile int16_t x251 = 2370;
	static int32_t t60 = 665862;

    t60 = (x249<=((x250&x251)%x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = -1LL;
	int32_t x254 = -1;
	static int16_t x255 = 13;
	int64_t x256 = INT64_MAX;
	volatile int32_t t61 = 671057839;

    t61 = (x253<=((x254&x255)%x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 188U;
	static volatile int64_t x258 = -1433549972679486416LL;
	static int8_t x259 = 2;
	int8_t x260 = -1;
	int32_t t62 = -323267049;

    t62 = (x257<=((x258&x259)%x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x262 = -1;
	volatile int32_t t63 = -7;

    t63 = (x261<=((x262&x263)%x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = -1LL;
	int32_t x267 = -1;
	int64_t x268 = -1LL;

    t64 = (x265<=((x266&x267)%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = -1LL;
	int64_t x271 = -1LL;
	int32_t t65 = -770890;

    t65 = (x269<=((x270&x271)%x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x274 = 1;
	volatile int32_t x276 = INT32_MIN;
	int32_t t66 = -99069;

    t66 = (x273<=((x274&x275)%x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x277 = 6;
	uint8_t x279 = 15U;
	int8_t x280 = 1;
	static volatile int32_t t67 = -3041429;

    t67 = (x277<=((x278&x279)%x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x281 = 0;
	int16_t x282 = 0;
	int32_t x283 = -888085;
	int32_t t68 = 1;

    t68 = (x281<=((x282&x283)%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x285 = 1U;
	int64_t x286 = -2006983LL;
	int16_t x287 = INT16_MAX;
	int64_t x288 = -8410913913747287LL;

    t69 = (x285<=((x286&x287)%x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x290 = 688U;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MAX;
	volatile int32_t t70 = 1;

    t70 = (x289<=((x290&x291)%x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = -50;
	static volatile uint16_t x294 = 47U;
	int64_t x295 = INT64_MIN;
	int64_t x296 = 1494705227403LL;
	volatile int32_t t71 = 80867;

    t71 = (x293<=((x294&x295)%x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x297 = -1;
	static uint64_t x298 = 8086009695330LLU;
	int8_t x300 = -1;
	volatile int32_t t72 = -65;

    t72 = (x297<=((x298&x299)%x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = -1;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	volatile int32_t t73 = 377393;

    t73 = (x301<=((x302&x303)%x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x305 = -701787793;
	int8_t x306 = 2;
	uint16_t x307 = 122U;
	int8_t x308 = -41;
	static int32_t t74 = 1;

    t74 = (x305<=((x306&x307)%x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x316 = INT32_MIN;

    t75 = (x313<=((x314&x315)%x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x318 = 454587355575645LLU;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 1U;
	int32_t t76 = -11784;

    t76 = (x317<=((x318&x319)%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x321 = -19663618568885LL;
	int64_t x322 = INT64_MIN;
	static uint8_t x323 = UINT8_MAX;
	static uint32_t x324 = 997U;
	volatile int32_t t77 = -1959;

    t77 = (x321<=((x322&x323)%x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x325 = 189U;
	int64_t x326 = 0LL;
	static volatile int16_t x327 = INT16_MIN;
	static int32_t x328 = INT32_MIN;
	int32_t t78 = 136453030;

    t78 = (x325<=((x326&x327)%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MAX;
	volatile int32_t t79 = 15592876;

    t79 = (x329<=((x330&x331)%x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x335 = INT32_MIN;
	int16_t x336 = 23;
	int32_t t80 = -73674274;

    t80 = (x333<=((x334&x335)%x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x337 = UINT16_MAX;
	uint16_t x338 = 157U;
	int64_t x339 = INT64_MIN;
	int32_t x340 = -198502;

    t81 = (x337<=((x338&x339)%x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x342 = 1;
	static int32_t x343 = INT32_MIN;
	uint16_t x344 = 1276U;
	volatile int32_t t82 = -1783;

    t82 = (x341<=((x342&x343)%x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x345 = -1;
	static volatile int16_t x346 = INT16_MIN;
	static int16_t x347 = 1436;
	volatile uint8_t x348 = 1U;

    t83 = (x345<=((x346&x347)%x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x349 = -1;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 1746114U;
	static uint16_t x352 = 2092U;
	int32_t t84 = -93770;

    t84 = (x349<=((x350&x351)%x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x353 = 423;
	static int64_t x354 = -28057492851144LL;
	int32_t t85 = -7066235;

    t85 = (x353<=((x354&x355)%x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x357 = 125U;
	static volatile int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;
	volatile int64_t x360 = -1LL;
	static int32_t t86 = 7948;

    t86 = (x357<=((x358&x359)%x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = 7214U;
	static int64_t x362 = 1931460LL;
	uint64_t x364 = 516310474334449042LLU;
	static volatile int32_t t87 = 10;

    t87 = (x361<=((x362&x363)%x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 1402;
	int16_t x367 = -1;
	static int32_t x368 = -1;
	volatile int32_t t88 = 51707730;

    t88 = (x365<=((x366&x367)%x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = INT64_MIN;
	int16_t x370 = 10;
	int8_t x371 = 22;
	int8_t x372 = -1;

    t89 = (x369<=((x370&x371)%x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x373 = 42U;
	int8_t x374 = INT8_MAX;
	volatile int32_t x376 = INT32_MAX;
	static int32_t t90 = -111964704;

    t90 = (x373<=((x374&x375)%x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x377 = -3186891LL;
	static volatile uint16_t x378 = UINT16_MAX;
	int8_t x379 = 2;
	int8_t x380 = INT8_MAX;

    t91 = (x377<=((x378&x379)%x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = INT64_MIN;
	volatile int64_t x382 = -1LL;
	uint32_t x383 = 0U;
	volatile int32_t x384 = INT32_MIN;
	int32_t t92 = 1;

    t92 = (x381<=((x382&x383)%x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x385 = 9U;
	uint64_t x386 = 622392820528LLU;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = -7;
	volatile int32_t t93 = -5668650;

    t93 = (x385<=((x386&x387)%x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	static uint8_t x390 = 1U;
	int32_t x391 = -812453;
	uint32_t x392 = 11258U;

    t94 = (x389<=((x390&x391)%x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x394 = 1010U;
	int8_t x395 = INT8_MIN;
	static int16_t x396 = INT16_MIN;
	int32_t t95 = -1886617;

    t95 = (x393<=((x394&x395)%x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x397 = INT8_MIN;
	int16_t x399 = 7293;
	static volatile int32_t x400 = INT32_MIN;
	int32_t t96 = 3;

    t96 = (x397<=((x398&x399)%x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = INT16_MIN;
	static int8_t x403 = INT8_MAX;
	static int32_t x404 = 153;

    t97 = (x401<=((x402&x403)%x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = INT32_MAX;
	static volatile int8_t x406 = -13;
	uint64_t x408 = 313014LLU;
	int32_t t98 = -933620;

    t98 = (x405<=((x406&x407)%x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x410 = 1;
	int64_t x411 = 813662LL;
	uint8_t x412 = 3U;
	int32_t t99 = -2;

    t99 = (x409<=((x410&x411)%x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x414 = 500;
	int8_t x415 = INT8_MIN;
	int32_t x416 = 246097215;
	volatile int32_t t100 = -299247;

    t100 = (x413<=((x414&x415)%x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x417 = -1;
	volatile int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MAX;
	int32_t t101 = 1;

    t101 = (x417<=((x418&x419)%x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MIN;
	static int16_t x422 = 1;
	int32_t x423 = INT32_MIN;
	int32_t t102 = 11;

    t102 = (x421<=((x422&x423)%x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x426 = INT16_MIN;
	int8_t x428 = 11;

    t103 = (x425<=((x426&x427)%x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	int16_t x430 = INT16_MIN;
	volatile int32_t t104 = -2;

    t104 = (x429<=((x430&x431)%x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = INT8_MAX;
	volatile int32_t x434 = INT32_MAX;
	static volatile int32_t x435 = INT32_MAX;
	volatile int32_t t105 = 3077991;

    t105 = (x433<=((x434&x435)%x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x438 = UINT8_MAX;
	int64_t x439 = -2866694LL;
	uint8_t x440 = 71U;
	volatile int32_t t106 = -2667;

    t106 = (x437<=((x438&x439)%x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = 3802U;
	uint64_t x443 = UINT64_MAX;
	int16_t x444 = 715;
	int32_t t107 = -235;

    t107 = (x441<=((x442&x443)%x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -4;
	int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t108 = -66;

    t108 = (x445<=((x446&x447)%x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = INT32_MIN;
	uint32_t x450 = UINT32_MAX;
	uint16_t x452 = 32142U;
	volatile int32_t t109 = 108406689;

    t109 = (x449<=((x450&x451)%x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x453 = 27820682;
	static int8_t x454 = -1;
	int64_t x455 = -3733225696354342LL;
	static uint64_t x456 = UINT64_MAX;

    t110 = (x453<=((x454&x455)%x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x458 = INT64_MIN;
	uint8_t x459 = 33U;
	int64_t x460 = -6667279LL;

    t111 = (x457<=((x458&x459)%x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x463 = INT8_MIN;
	int64_t x464 = INT64_MIN;
	volatile int32_t t112 = 4621105;

    t112 = (x461<=((x462&x463)%x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = INT32_MAX;
	static int64_t x468 = 27225200779874LL;
	static int32_t t113 = 5;

    t113 = (x465<=((x466&x467)%x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x469 = UINT16_MAX;
	uint16_t x470 = UINT16_MAX;
	int64_t x471 = INT64_MIN;
	uint32_t x472 = UINT32_MAX;

    t114 = (x469<=((x470&x471)%x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x473 = 2;
	static volatile int16_t x474 = 1;
	int64_t x475 = -1361140661LL;
	volatile int32_t t115 = 7471966;

    t115 = (x473<=((x474&x475)%x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 4U;
	volatile int8_t x479 = INT8_MIN;
	volatile int8_t x480 = -1;
	volatile int32_t t116 = -1;

    t116 = (x477<=((x478&x479)%x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = -1LL;

    t117 = (x481<=((x482&x483)%x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x487 = INT64_MAX;
	uint32_t x488 = 820723874U;
	volatile int32_t t118 = 301;

    t118 = (x485<=((x486&x487)%x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x491 = 249393U;
	int16_t x492 = 1;
	int32_t t119 = -231;

    t119 = (x489<=((x490&x491)%x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = -1LL;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = 539764328452LLU;
	static uint32_t x496 = 541430U;
	int32_t t120 = 47;

    t120 = (x493<=((x494&x495)%x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = -7120075;
	int16_t x499 = -1;
	int32_t t121 = 443;

    t121 = (x497<=((x498&x499)%x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = 13217;
	volatile uint32_t x504 = UINT32_MAX;
	int32_t t122 = 1135;

    t122 = (x501<=((x502&x503)%x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x505 = 4U;
	int8_t x506 = -4;
	static int16_t x507 = 1617;
	int32_t x508 = -1;

    t123 = (x505<=((x506&x507)%x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x510 = INT16_MIN;
	static int16_t x511 = -1;
	uint8_t x512 = 2U;
	static int32_t t124 = 110413;

    t124 = (x509<=((x510&x511)%x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x513 = 1;
	int8_t x514 = -1;
	static int64_t x516 = INT64_MIN;
	volatile int32_t t125 = -50;

    t125 = (x513<=((x514&x515)%x516));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = INT64_MIN;
	volatile int32_t x518 = -962;
	int16_t x519 = -12750;
	volatile uint8_t x520 = 64U;
	int32_t t126 = 313424;

    t126 = (x517<=((x518&x519)%x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 11U;
	static uint64_t x522 = 1140570LLU;
	int32_t x523 = -13428;
	volatile int64_t x524 = INT64_MAX;
	static int32_t t127 = 16;

    t127 = (x521<=((x522&x523)%x524));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = INT16_MAX;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = 11U;
	int32_t t128 = -618112827;

    t128 = (x525<=((x526&x527)%x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x529 = 54109435U;
	int64_t x530 = -1LL;
	static volatile int16_t x531 = -10;
	volatile uint32_t x532 = 505260U;

    t129 = (x529<=((x530&x531)%x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x534 = INT8_MAX;
	static volatile uint16_t x535 = 2157U;
	uint16_t x536 = 31U;
	volatile int32_t t130 = -30;

    t130 = (x533<=((x534&x535)%x536));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = 1612769080U;
	int32_t x538 = INT32_MIN;
	static int8_t x539 = INT8_MIN;
	volatile int32_t t131 = -14828;

    t131 = (x537<=((x538&x539)%x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = -1;
	int32_t x542 = -1;
	volatile int8_t x543 = 0;
	int64_t x544 = INT64_MIN;
	int32_t t132 = 427;

    t132 = (x541<=((x542&x543)%x544));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x545 = 290186LLU;
	static int64_t x546 = INT64_MIN;
	int64_t x547 = INT64_MIN;
	volatile int32_t t133 = 2288148;

    t133 = (x545<=((x546&x547)%x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = 1;
	volatile uint16_t x550 = 26U;
	int8_t x551 = INT8_MAX;
	int64_t x552 = INT64_MIN;
	int32_t t134 = -5;

    t134 = (x549<=((x550&x551)%x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x553 = -1;
	int16_t x554 = INT16_MIN;
	uint64_t x556 = UINT64_MAX;
	int32_t t135 = -5586;

    t135 = (x553<=((x554&x555)%x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = -1;
	uint32_t x558 = 40714132U;
	static int64_t x559 = 17226286278669LL;
	uint64_t x560 = UINT64_MAX;

    t136 = (x557<=((x558&x559)%x560));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = INT64_MIN;
	static int8_t x563 = INT8_MIN;
	static volatile uint64_t x564 = UINT64_MAX;
	static volatile int32_t t137 = -12;

    t137 = (x561<=((x562&x563)%x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = 1824027U;
	int64_t x570 = -1LL;
	uint32_t x571 = 7006U;
	int32_t x572 = -3077284;
	volatile int32_t t138 = 22978587;

    t138 = (x569<=((x570&x571)%x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x573 = -1;
	int16_t x576 = INT16_MAX;
	int32_t t139 = 1384450;

    t139 = (x573<=((x574&x575)%x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = -3;
	int8_t x578 = INT8_MIN;
	uint8_t x579 = 3U;
	int64_t x580 = -182963741232412293LL;
	volatile int32_t t140 = -28088;

    t140 = (x577<=((x578&x579)%x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = UINT16_MAX;
	static int8_t x582 = -1;
	static int64_t x584 = -3123764143911439LL;
	int32_t t141 = 1;

    t141 = (x581<=((x582&x583)%x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x585 = UINT64_MAX;
	static volatile int32_t x586 = INT32_MIN;
	static uint16_t x587 = 4U;
	volatile int32_t t142 = -2510;

    t142 = (x585<=((x586&x587)%x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x590 = -1LL;
	int8_t x591 = 5;
	static int8_t x592 = -24;
	volatile int32_t t143 = 1242;

    t143 = (x589<=((x590&x591)%x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x594 = 1396647512288LLU;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = -7;

    t144 = (x593<=((x594&x595)%x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = INT16_MIN;
	volatile uint8_t x598 = 69U;
	int64_t x600 = INT64_MIN;
	int32_t t145 = 0;

    t145 = (x597<=((x598&x599)%x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x601 = INT64_MIN;
	volatile int32_t x602 = 0;
	static int8_t x603 = -1;
	int8_t x604 = -1;
	int32_t t146 = -1897779;

    t146 = (x601<=((x602&x603)%x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x605 = -1;
	static int16_t x606 = 1;
	static int64_t x607 = -66182773856050364LL;
	int32_t x608 = INT32_MAX;
	volatile int32_t t147 = 16568672;

    t147 = (x605<=((x606&x607)%x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = -1;
	int8_t x610 = -1;
	volatile int64_t x611 = -1LL;
	int16_t x612 = INT16_MIN;
	volatile int32_t t148 = 1665686;

    t148 = (x609<=((x610&x611)%x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = -1;
	volatile int64_t x614 = 978687LL;
	static uint64_t x615 = UINT64_MAX;
	volatile int32_t t149 = 6310;

    t149 = (x613<=((x614&x615)%x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = 2919997807013LL;
	static uint16_t x619 = 2U;
	int32_t t150 = 1;

    t150 = (x617<=((x618&x619)%x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -1LL;
	uint64_t x622 = UINT64_MAX;
	int32_t x623 = 99771;
	uint8_t x624 = UINT8_MAX;

    t151 = (x621<=((x622&x623)%x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	static uint16_t x626 = 399U;
	int8_t x627 = INT8_MAX;
	int32_t x628 = -6888677;
	volatile int32_t t152 = -27372;

    t152 = (x625<=((x626&x627)%x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x629 = -1483;
	int16_t x631 = -1;
	int16_t x632 = -1;

    t153 = (x629<=((x630&x631)%x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x633 = INT8_MIN;
	uint16_t x634 = 3U;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t154 = 5073017;

    t154 = (x633<=((x634&x635)%x636));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x637 = -691222838478918LL;
	uint8_t x639 = 10U;
	static volatile int32_t t155 = -31531;

    t155 = (x637<=((x638&x639)%x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = UINT8_MAX;
	static int8_t x642 = -1;
	int8_t x643 = INT8_MAX;
	int32_t x644 = INT32_MAX;
	static volatile int32_t t156 = 33415531;

    t156 = (x641<=((x642&x643)%x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x646 = 11U;
	int64_t x647 = -1LL;
	static uint64_t x648 = UINT64_MAX;
	volatile int32_t t157 = 41;

    t157 = (x645<=((x646&x647)%x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = -1LL;
	int64_t x651 = 111878673LL;

    t158 = (x649<=((x650&x651)%x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x653 = 0U;
	volatile int8_t x654 = 0;
	int8_t x655 = INT8_MAX;
	int32_t x656 = -1;
	volatile int32_t t159 = -84098091;

    t159 = (x653<=((x654&x655)%x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x658 = 90573U;
	int64_t x659 = -31029175LL;
	volatile int64_t x660 = INT64_MIN;
	int32_t t160 = 18318;

    t160 = (x657<=((x658&x659)%x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x665 = 5175661334208190675LLU;
	int32_t x666 = -951242733;
	uint8_t x667 = 4U;
	int64_t x668 = 186092430233975792LL;
	volatile int32_t t161 = 6312;

    t161 = (x665<=((x666&x667)%x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x669 = INT8_MIN;
	int32_t x670 = INT32_MIN;
	int32_t x671 = -7473103;
	uint32_t x672 = 108873385U;
	volatile int32_t t162 = 4913617;

    t162 = (x669<=((x670&x671)%x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x673 = INT8_MIN;
	int8_t x674 = 25;
	int32_t x676 = -1;

    t163 = (x673<=((x674&x675)%x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = -538295022LL;
	int8_t x678 = INT8_MIN;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t164 = 61232;

    t164 = (x677<=((x678&x679)%x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x682 = INT8_MIN;
	int64_t x683 = -1LL;
	int16_t x684 = -28;
	int32_t t165 = -86;

    t165 = (x681<=((x682&x683)%x684));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x685 = INT64_MAX;
	int16_t x686 = 399;
	volatile uint64_t x687 = UINT64_MAX;
	int64_t x688 = -1LL;
	int32_t t166 = 4559;

    t166 = (x685<=((x686&x687)%x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x689 = -1;
	volatile int16_t x690 = INT16_MIN;
	int16_t x691 = 2;
	int32_t x692 = INT32_MIN;
	static volatile int32_t t167 = 669;

    t167 = (x689<=((x690&x691)%x692));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x695 = INT64_MIN;
	int32_t t168 = -603;

    t168 = (x693<=((x694&x695)%x696));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	int32_t x700 = -10440;
	volatile int32_t t169 = -86784;

    t169 = (x697<=((x698&x699)%x700));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x702 = -1;
	uint64_t x703 = 10372991973559036LLU;
	int16_t x704 = INT16_MIN;

    t170 = (x701<=((x702&x703)%x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = 1695759098U;
	volatile int16_t x706 = INT16_MAX;
	volatile uint16_t x707 = 1819U;
	volatile int32_t t171 = -14417043;

    t171 = (x705<=((x706&x707)%x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = -1;
	uint64_t x710 = 11669052690LLU;
	int16_t x711 = -1;
	volatile int32_t t172 = 160446;

    t172 = (x709<=((x710&x711)%x712));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MAX;
	int16_t x715 = INT16_MIN;
	int64_t x716 = INT64_MIN;
	volatile int32_t t173 = -255192098;

    t173 = (x713<=((x714&x715)%x716));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x717 = 4U;
	volatile int16_t x719 = -1;
	volatile uint16_t x720 = UINT16_MAX;
	int32_t t174 = -7;

    t174 = (x717<=((x718&x719)%x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = 3213723;
	uint16_t x722 = 3U;
	uint8_t x724 = 80U;
	static int32_t t175 = -7;

    t175 = (x721<=((x722&x723)%x724));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x725 = -195;
	volatile int16_t x726 = INT16_MIN;
	static uint64_t x727 = 4106713500200469040LLU;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t176 = -192;

    t176 = (x725<=((x726&x727)%x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = 33933548LLU;
	static int32_t x730 = 1;
	int16_t x731 = -6427;
	static int32_t x732 = -1;
	int32_t t177 = -226815;

    t177 = (x729<=((x730&x731)%x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = -1;
	int16_t x734 = INT16_MAX;
	static int8_t x735 = INT8_MIN;
	volatile int32_t t178 = -1;

    t178 = (x733<=((x734&x735)%x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x737 = INT16_MAX;
	int32_t x738 = -1;
	int8_t x739 = -1;
	uint8_t x740 = 11U;

    t179 = (x737<=((x738&x739)%x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = INT32_MAX;
	int8_t x742 = 40;
	static volatile uint8_t x743 = UINT8_MAX;
	int16_t x744 = INT16_MIN;
	int32_t t180 = 3;

    t180 = (x741<=((x742&x743)%x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = INT16_MAX;
	static int64_t x746 = 232803403085055624LL;
	static int8_t x747 = INT8_MAX;
	static uint64_t x748 = UINT64_MAX;
	volatile int32_t t181 = 107;

    t181 = (x745<=((x746&x747)%x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x749 = 9U;
	int64_t x751 = -2920150LL;
	static volatile int32_t t182 = 15082737;

    t182 = (x749<=((x750&x751)%x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	uint64_t x754 = 1354825LLU;
	static uint64_t x755 = 1995LLU;
	static int8_t x756 = INT8_MAX;
	volatile int32_t t183 = -260;

    t183 = (x753<=((x754&x755)%x756));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = UINT16_MAX;
	int64_t x758 = INT64_MIN;
	int64_t x759 = -1835699824009LL;
	volatile int32_t x760 = INT32_MIN;
	int32_t t184 = -331035;

    t184 = (x757<=((x758&x759)%x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x761 = -124;
	uint64_t x762 = 340961581272188766LLU;
	int16_t x763 = -1;
	int16_t x764 = INT16_MIN;
	int32_t t185 = 184737;

    t185 = (x761<=((x762&x763)%x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = INT64_MIN;
	int64_t x767 = -10323133739458756LL;
	volatile uint8_t x768 = 51U;

    t186 = (x765<=((x766&x767)%x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x769 = 7U;
	static int16_t x770 = INT16_MIN;
	int32_t x771 = -1;
	int32_t x772 = INT32_MIN;
	volatile int32_t t187 = 1276;

    t187 = (x769<=((x770&x771)%x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = -1;
	int32_t x774 = -1;
	int32_t x775 = INT32_MIN;
	int16_t x776 = INT16_MIN;

    t188 = (x773<=((x774&x775)%x776));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x777 = INT16_MIN;
	uint16_t x778 = 2691U;
	volatile int16_t x780 = -1;
	int32_t t189 = 75527515;

    t189 = (x777<=((x778&x779)%x780));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = -1;
	int8_t x782 = INT8_MIN;
	static uint16_t x784 = UINT16_MAX;
	volatile int32_t t190 = -1;

    t190 = (x781<=((x782&x783)%x784));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x785 = INT64_MIN;
	int32_t t191 = 10775748;

    t191 = (x785<=((x786&x787)%x788));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	static volatile int8_t x790 = -1;
	int8_t x791 = INT8_MAX;
	int16_t x792 = -1;
	static int32_t t192 = 1651;

    t192 = (x789<=((x790&x791)%x792));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x793 = 17146645549LLU;
	uint64_t x794 = 1395LLU;
	volatile uint16_t x796 = 53U;
	int32_t t193 = -1044485;

    t193 = (x793<=((x794&x795)%x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x797 = INT32_MAX;
	int64_t x799 = -1LL;
	int64_t x800 = INT64_MIN;

    t194 = (x797<=((x798&x799)%x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x802 = 0;
	volatile int64_t x803 = -1LL;
	static volatile int32_t t195 = 505732;

    t195 = (x801<=((x802&x803)%x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = INT64_MAX;
	static volatile int64_t x807 = INT64_MAX;
	uint32_t x808 = 3U;
	static int32_t t196 = 5730544;

    t196 = (x805<=((x806&x807)%x808));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = INT32_MAX;
	static volatile uint32_t x810 = 3910U;
	static int16_t x811 = 140;
	volatile int16_t x812 = -188;
	int32_t t197 = -64036564;

    t197 = (x809<=((x810&x811)%x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x813 = 3U;
	int8_t x815 = INT8_MIN;
	uint8_t x816 = 24U;

    t198 = (x813<=((x814&x815)%x816));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x818 = INT64_MIN;
	int8_t x819 = 3;
	uint32_t x820 = 1960299011U;
	volatile int32_t t199 = -1363051;

    t199 = (x817<=((x818&x819)%x820));

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

