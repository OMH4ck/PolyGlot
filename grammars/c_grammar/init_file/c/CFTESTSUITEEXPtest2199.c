
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

static volatile int32_t x3 = INT32_MAX;
static int8_t x10 = INT8_MIN;
int16_t x16 = 1341;
int32_t t3 = 18;
int32_t x22 = -487271239;
uint8_t x24 = 4U;
int8_t x26 = -1;
int16_t x27 = 1;
int8_t x28 = INT8_MIN;
uint64_t x32 = 2LLU;
static volatile int16_t x36 = INT16_MIN;
int8_t x37 = INT8_MAX;
volatile int32_t x51 = -32220419;
volatile int32_t t13 = -3326;
int64_t x58 = -3797066228LL;
int8_t x66 = INT8_MIN;
int8_t x70 = INT8_MIN;
int32_t x73 = 479723699;
static volatile int8_t x79 = INT8_MIN;
volatile int64_t t22 = INT64_MIN;
static int32_t x108 = -1;
int8_t x110 = INT8_MIN;
int8_t x115 = -1;
int64_t x120 = INT64_MAX;
int64_t t29 = 26343772LL;
volatile int64_t x122 = INT64_MIN;
uint8_t x123 = 1U;
uint64_t x126 = 7804481642301066270LLU;
volatile uint64_t t31 = 14983LLU;
uint8_t x133 = UINT8_MAX;
int16_t x135 = INT16_MIN;
int8_t x140 = INT8_MIN;
int16_t x143 = -169;
int32_t x151 = INT32_MIN;
volatile int8_t x152 = INT8_MAX;
int8_t x163 = INT8_MAX;
int32_t x171 = INT32_MAX;
int16_t x180 = INT16_MIN;
int32_t t42 = -939764;
int8_t x185 = INT8_MIN;
uint32_t t44 = 266693570U;
int8_t x189 = 0;
uint64_t x198 = 425315488840549LLU;
int16_t x202 = -1;
uint32_t x207 = UINT32_MAX;
static uint64_t x209 = UINT64_MAX;
static int64_t x211 = INT64_MIN;
volatile int32_t t50 = -871;
static uint64_t x221 = UINT64_MAX;
uint64_t t52 = UINT64_MAX;
volatile int8_t x227 = -1;
uint16_t x230 = UINT16_MAX;
uint32_t x232 = 4106186U;
static volatile int16_t x235 = INT16_MIN;
int16_t x239 = -1;
int32_t t56 = -45904;
volatile int32_t x241 = -6045;
int32_t x246 = -1;
int8_t x247 = INT8_MIN;
static uint16_t x250 = 238U;
volatile int32_t t59 = 1;
static uint8_t x253 = 85U;
volatile int64_t x254 = 899LL;
static int16_t x255 = INT16_MIN;
int64_t x261 = -70954585584557318LL;
int8_t x264 = -1;
int16_t x265 = INT16_MAX;
volatile int16_t x266 = -1;
uint32_t x272 = UINT32_MAX;
int8_t x280 = -1;
static int64_t x284 = INT64_MIN;
uint64_t x287 = 466891030391510LLU;
int8_t x294 = INT8_MAX;
static volatile int16_t x304 = INT16_MAX;
static int32_t x307 = INT32_MIN;
int8_t x308 = 48;
uint32_t x311 = 336U;
static int8_t x318 = -1;
int32_t x327 = -1;
int32_t t77 = -3;
volatile int64_t t80 = -9775156874543426LL;
volatile int8_t x347 = -3;
uint16_t x348 = 73U;
static int16_t x355 = -3;
uint32_t x356 = UINT32_MAX;
volatile int64_t x357 = -4396128LL;
static int64_t x359 = INT64_MIN;
uint32_t x364 = 1577070774U;
volatile uint8_t x371 = UINT8_MAX;
static int64_t x387 = INT64_MAX;
static uint64_t t90 = 641723LLU;
int8_t x394 = -1;
volatile int16_t x408 = INT16_MIN;
int8_t x410 = INT8_MAX;
int64_t x418 = INT64_MAX;
uint8_t x419 = UINT8_MAX;
int64_t x423 = 33291503621427LL;
int64_t x426 = -1LL;
int8_t x429 = 63;
static volatile int16_t x430 = INT16_MAX;
static int32_t t99 = -132490;
uint64_t x436 = UINT64_MAX;
volatile uint64_t t100 = 1372147LLU;
uint32_t x440 = 26709U;
volatile int64_t t102 = -1LL;
int32_t t103 = 3;
int32_t x462 = -14;
uint16_t x473 = 0U;
int8_t x476 = 1;
uint64_t t110 = 2728643544193572560LLU;
int16_t x479 = -1;
int32_t x481 = INT32_MIN;
static int64_t t112 = 618468559911LL;
int32_t x490 = 4;
int16_t x492 = INT16_MAX;
int8_t x493 = -1;
volatile uint8_t x495 = UINT8_MAX;
volatile int64_t x505 = INT64_MAX;
int64_t x509 = 41653667396544LL;
int64_t x515 = -1LL;
volatile uint64_t t121 = UINT64_MAX;
static int64_t x527 = -1LL;
uint64_t x531 = 0LLU;
int64_t x533 = -1882088279LL;
uint64_t x534 = 7389766LLU;
uint16_t x535 = 20U;
static uint64_t x539 = UINT64_MAX;
int16_t x540 = -1;
static volatile uint32_t t127 = 1U;
volatile uint16_t x550 = 40U;
int8_t x558 = 32;
int32_t x560 = -397;
uint8_t x561 = UINT8_MAX;
static int32_t x564 = -1;
uint64_t x567 = 764267478567337LLU;
volatile uint64_t t133 = 66971246172729722LLU;
int16_t x576 = 101;
uint64_t t135 = 58146546581LLU;
int64_t x577 = INT64_MIN;
int64_t x578 = INT64_MIN;
int32_t x580 = INT32_MIN;
int64_t t136 = -10978451234467LL;
int8_t x582 = 0;
uint32_t x597 = UINT32_MAX;
int8_t x600 = 47;
int64_t x601 = 21221943LL;
static volatile uint32_t x605 = 1U;
int64_t x606 = 240LL;
int8_t x613 = INT8_MIN;
volatile uint8_t x614 = 89U;
uint32_t x615 = 38U;
int16_t x616 = INT16_MAX;
uint16_t x622 = 3U;
volatile int32_t x623 = -1;
uint64_t x625 = 1LLU;
int32_t x627 = INT32_MAX;
uint16_t x635 = 51U;
int64_t t154 = -34193111640354008LL;
int64_t x655 = -1LL;
static volatile int64_t t155 = -472LL;
int64_t t159 = -60254401562327LL;
int16_t x680 = -1;
uint64_t x689 = 20856LLU;
int32_t x691 = -34532782;
int16_t x692 = INT16_MAX;
static int8_t x698 = INT8_MIN;
int8_t x699 = 13;
uint64_t x703 = 2218914463979710LLU;
int8_t x707 = -6;
int32_t x710 = 29026943;
volatile uint64_t t170 = UINT64_MAX;
static int32_t x720 = INT32_MAX;
uint8_t x732 = 62U;
volatile int8_t x734 = INT8_MAX;
int16_t x737 = INT16_MAX;
int32_t t177 = 1150;
static volatile int64_t t179 = -223LL;
static int8_t x754 = INT8_MAX;
uint32_t t180 = 62371894U;
volatile int16_t x757 = 5235;
volatile int16_t x762 = 756;
static int64_t x764 = INT64_MIN;
uint16_t x766 = 60U;
int32_t x768 = -1;
int16_t x775 = INT16_MIN;
volatile int64_t t185 = INT64_MIN;
uint16_t x782 = UINT16_MAX;
int32_t x784 = INT32_MAX;
static volatile int32_t t187 = INT32_MIN;
int16_t x791 = 95;
static int64_t x794 = 3542LL;
uint32_t x796 = 1552U;
int64_t x797 = 3924282893263046LL;
int64_t t191 = -492136LL;
uint32_t x804 = 1370U;
static volatile int64_t x806 = -1LL;
static int64_t t193 = 3180516944440622LL;
volatile int16_t x812 = INT16_MIN;
int64_t x818 = -1LL;
static int64_t t197 = -1570643344971391276LL;
int64_t x834 = -1LL;
uint16_t x835 = 0U;
uint8_t x836 = 22U;


void f0(void) {
    	static int64_t x1 = -1LL;
	uint64_t x2 = 583836439750LLU;
	int8_t x4 = -1;
	uint64_t t0 = UINT64_MAX;

    t0 = (x1+((x2&x3)/x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = INT32_MIN;
	int32_t x8 = 1284;
	static volatile uint64_t t1 = 56210638712088547LLU;

    t1 = (x5+((x6&x7)/x8));

    if (t1 != 18446744073707879120LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	static int64_t x12 = INT64_MAX;
	int64_t t2 = -225088368824693397LL;

    t2 = (x9+((x10&x11)/x12));

    if (t2 != -32769LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = 200;
	int16_t x15 = INT16_MIN;

    t3 = (x13+((x14&x15)/x16));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int16_t x18 = INT16_MIN;
	int16_t x19 = 777;
	uint32_t x20 = UINT32_MAX;
	uint32_t t4 = 1U;

    t4 = (x17+((x18&x19)/x20));

    if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 136U;
	int32_t x23 = -1;
	static volatile uint32_t t5 = 221067U;

    t5 = (x21+((x22&x23)/x24));

    if (t5 != 4173149623U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 0;
	int32_t t6 = -1736;

    t6 = (x25+((x26&x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 1362606023U;
	static uint8_t x30 = 0U;
	uint8_t x31 = UINT8_MAX;
	volatile uint64_t t7 = 38336LLU;

    t7 = (x29+((x30&x31)/x32));

    if (t7 != 1362606023LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x33 = 31U;
	uint16_t x34 = 29U;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -35449706;

    t8 = (x33+((x34&x35)/x36));

    if (t8 != 31) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 1U;
	uint16_t x39 = 11833U;
	volatile int64_t x40 = 8950LL;
	int64_t t9 = 3163154LL;

    t9 = (x37+((x38&x39)/x40));

    if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 7;
	static int32_t x42 = 12258;
	static volatile uint64_t x43 = UINT64_MAX;
	uint64_t x44 = 109609834LLU;
	static volatile uint64_t t10 = 2843865212LLU;

    t10 = (x41+((x42&x43)/x44));

    if (t10 != 7LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int16_t x46 = 1;
	volatile uint64_t x47 = 423451LLU;
	static int64_t x48 = INT64_MAX;
	static volatile uint64_t t11 = UINT64_MAX;

    t11 = (x45+((x46&x47)/x48));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -1618;
	int64_t x50 = -115102178061LL;
	volatile int32_t x52 = INT32_MIN;
	volatile int64_t t12 = -21102687874LL;

    t12 = (x49+((x50&x51)/x52));

    if (t12 != -1565LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MIN;
	static int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;

    t13 = (x53+((x54&x55)/x56));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 1978429LLU;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = -1;
	volatile uint64_t t14 = 2099696849465LLU;

    t14 = (x57+((x58&x59)/x60));

    if (t14 != 1978417LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	volatile int16_t x62 = -1;
	int16_t x63 = 1;
	int32_t x64 = -39128;
	volatile int32_t t15 = -14127156;

    t15 = (x61+((x62&x63)/x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 11966LLU;
	int64_t x67 = -1LL;
	static int8_t x68 = INT8_MIN;
	uint64_t t16 = 933693106669822LLU;

    t16 = (x65+((x66&x67)/x68));

    if (t16 != 11967LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 1245U;
	volatile uint32_t x71 = UINT32_MAX;
	uint8_t x72 = 12U;
	uint32_t t17 = 7055943U;

    t17 = (x69+((x70&x71)/x72));

    if (t17 != 357915175U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x74 = INT16_MIN;
	int8_t x75 = -5;
	int16_t x76 = 1;
	int32_t t18 = -60914968;

    t18 = (x73+((x74&x75)/x76));

    if (t18 != 479690931) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x77 = INT16_MAX;
	volatile int64_t x78 = -268830673106LL;
	int32_t x80 = INT32_MIN;
	volatile int64_t t19 = -220728059547085LL;

    t19 = (x77+((x78&x79)/x80));

    if (t19 != 32892LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint8_t x82 = 25U;
	volatile int64_t x83 = -66319986973280251LL;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 3142398LLU;

    t20 = (x81+((x82&x83)/x84));

    if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	static volatile int32_t x86 = 389606;
	int16_t x87 = -3998;
	static uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 914457797984LLU;

    t21 = (x85+((x86&x87)/x88));

    if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x90 = 64;
	uint8_t x91 = 95U;
	static int64_t x92 = INT64_MIN;

    t22 = (x89+((x90&x91)/x92));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	volatile int16_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	volatile int64_t t23 = 243459668966094LL;

    t23 = (x93+((x94&x95)/x96));

    if (t23 != 72057594037928191LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = INT16_MAX;
	static int32_t x98 = -1;
	uint64_t x99 = 330292935LLU;
	static uint32_t x100 = UINT32_MAX;
	volatile uint64_t t24 = 14LLU;

    t24 = (x97+((x98&x99)/x100));

    if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -9;
	int32_t x102 = -30;
	static volatile int64_t x103 = -1LL;
	int64_t x104 = -8095511232LL;
	int64_t t25 = 69889305525LL;

    t25 = (x101+((x102&x103)/x104));

    if (t25 != -9LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 181683;
	uint64_t x106 = 19758LLU;
	uint64_t x107 = 8201699533LLU;
	volatile uint64_t t26 = 134146581LLU;

    t26 = (x105+((x106&x107)/x108));

    if (t26 != 181683LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = -901760;
	uint16_t x111 = UINT16_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t27 = 25968056U;

    t27 = (x109+((x110&x111)/x112));

    if (t27 != 4294065536U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int64_t x114 = INT64_MAX;
	static volatile int8_t x116 = INT8_MAX;
	int64_t t28 = -2LL;

    t28 = (x113+((x114&x115)/x116));

    if (t28 != 72624976668147840LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	volatile int8_t x119 = 0;

    t29 = (x117+((x118&x119)/x120));

    if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile int32_t x124 = INT32_MAX;
	volatile int64_t t30 = 185LL;

    t30 = (x121+((x122&x123)/x124));

    if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = -1;
	int32_t x127 = -1516255;
	uint16_t x128 = UINT16_MAX;

    t31 = (x125+((x126&x127)/x128));

    if (t31 != 119088756272235LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	int16_t x130 = 48;
	static uint16_t x131 = 14435U;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = -37310258;

    t32 = (x129+((x130&x131)/x132));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x134 = INT8_MIN;
	int32_t x136 = -234794;
	static int32_t t33 = -3;

    t33 = (x133+((x134&x135)/x136));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -3;
	volatile int8_t x138 = 8;
	volatile int8_t x139 = INT8_MAX;
	volatile int32_t t34 = 273;

    t34 = (x137+((x138&x139)/x140));

    if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int32_t x142 = 18544;
	static int32_t x144 = INT32_MIN;
	int64_t t35 = -132532319077770LL;

    t35 = (x141+((x142&x143)/x144));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 6U;
	int8_t x146 = -2;
	int64_t x147 = INT64_MIN;
	static volatile int64_t x148 = INT64_MIN;
	static int64_t t36 = -285829LL;

    t36 = (x145+((x146&x147)/x148));

    if (t36 != 7LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 68;
	int16_t x150 = 98;
	volatile int32_t t37 = -3;

    t37 = (x149+((x150&x151)/x152));

    if (t37 != 68) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -1LL;
	uint16_t x154 = 4457U;
	uint32_t x155 = 608407U;
	int8_t x156 = 31;
	volatile int64_t t38 = 258132LL;

    t38 = (x153+((x154&x155)/x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 25050U;
	static int64_t x162 = INT64_MIN;
	static int32_t x164 = -1122;
	volatile int64_t t39 = 4292249495730LL;

    t39 = (x161+((x162&x163)/x164));

    if (t39 != 25050LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	uint16_t x172 = 3U;
	static uint64_t t40 = 14924LLU;

    t40 = (x169+((x170&x171)/x172));

    if (t40 != 715795114LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MIN;
	static int16_t x174 = INT16_MIN;
	uint16_t x175 = 790U;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t41 = 9726711167829LLU;

    t41 = (x173+((x174&x175)/x176));

    if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	volatile int32_t x178 = INT32_MAX;
	static int32_t x179 = -1;

    t42 = (x177+((x178&x179)/x180));

    if (t42 != -98303) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = 56792;
	static volatile uint8_t x182 = 35U;
	int8_t x183 = 56;
	static uint32_t x184 = 10121395U;
	uint32_t t43 = 412502147U;

    t43 = (x181+((x182&x183)/x184));

    if (t43 != 56792U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x186 = -2756;
	uint32_t x187 = 29U;
	uint16_t x188 = UINT16_MAX;

    t44 = (x185+((x186&x187)/x188));

    if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x190 = 0;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = INT16_MAX;
	uint32_t t45 = 1119U;

    t45 = (x189+((x190&x191)/x192));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = UINT32_MAX;
	uint16_t x199 = 107U;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t46 = 4LLU;

    t46 = (x197+((x198&x199)/x200));

    if (t46 != 4294967295LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = -1;
	int32_t x203 = 0;
	int64_t x204 = -1LL;
	int64_t t47 = -33502LL;

    t47 = (x201+((x202&x203)/x204));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = INT32_MAX;
	static int8_t x206 = INT8_MIN;
	static volatile int32_t x208 = -82607;
	uint32_t t48 = 5U;

    t48 = (x205+((x206&x207)/x208));

    if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x210 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	uint64_t t49 = 29790137650838LLU;

    t49 = (x209+((x210&x211)/x212));

    if (t49 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = 0U;
	uint8_t x216 = 1U;

    t50 = (x213+((x214&x215)/x216));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -1125;
	uint16_t x218 = 22U;
	int8_t x219 = 1;
	int64_t x220 = INT64_MIN;
	volatile int64_t t51 = 21226359402LL;

    t51 = (x217+((x218&x219)/x220));

    if (t51 != -1125LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;

    t52 = (x221+((x222&x223)/x224));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x226 = 161;
	int64_t x228 = -11248320166841956LL;
	int64_t t53 = INT64_MIN;

    t53 = (x225+((x226&x227)/x228));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x229 = INT16_MIN;
	static volatile uint8_t x231 = 59U;
	uint32_t t54 = 4133U;

    t54 = (x229+((x230&x231)/x232));

    if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = -1;
	int64_t x234 = -1LL;
	int8_t x236 = 1;
	volatile int64_t t55 = 213195685600LL;

    t55 = (x233+((x234&x235)/x236));

    if (t55 != -32769LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = -4;
	static int32_t x238 = INT32_MIN;
	int8_t x240 = INT8_MAX;

    t56 = (x237+((x238&x239)/x240));

    if (t56 != -16909324) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x242 = 0;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 20U;
	volatile int64_t t57 = 54834529335899LL;

    t57 = (x241+((x242&x243)/x244));

    if (t57 != -6045LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	int16_t x248 = INT16_MAX;
	static volatile int32_t t58 = 380291826;

    t58 = (x245+((x246&x247)/x248));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x249 = 8U;
	int32_t x251 = INT32_MIN;
	uint16_t x252 = 20U;

    t59 = (x249+((x250&x251)/x252));

    if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x256 = INT32_MIN;
	int64_t t60 = 7LL;

    t60 = (x253+((x254&x255)/x256));

    if (t60 != 85LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	static volatile int64_t x260 = INT64_MIN;
	volatile int64_t t61 = 515260009LL;

    t61 = (x257+((x258&x259)/x260));

    if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = 139488823984450LL;
	volatile int64_t t62 = 100LL;

    t62 = (x261+((x262&x263)/x264));

    if (t62 != -70954585584557318LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -4668;
	int32_t t63 = 0;

    t63 = (x265+((x266&x267)/x268));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 18187U;
	uint32_t x270 = UINT32_MAX;
	static int8_t x271 = 58;
	volatile uint32_t t64 = 2126U;

    t64 = (x269+((x270&x271)/x272));

    if (t64 != 18187U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = -1LL;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int8_t x276 = -1;
	int64_t t65 = -66692631LL;

    t65 = (x273+((x274&x275)/x276));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MAX;
	int16_t x278 = 0;
	uint16_t x279 = 66U;
	volatile int64_t t66 = INT64_MAX;

    t66 = (x277+((x278&x279)/x280));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 95034U;
	int32_t x282 = INT32_MIN;
	static int32_t x283 = 740796790;
	int64_t t67 = -64589094884LL;

    t67 = (x281+((x282&x283)/x284));

    if (t67 != 95034LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = 0;
	static int8_t x286 = 5;
	volatile int32_t x288 = INT32_MIN;
	uint64_t t68 = 10076285073LLU;

    t68 = (x285+((x286&x287)/x288));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = 11U;
	int64_t x290 = -3821280120LL;
	uint64_t x291 = UINT64_MAX;
	static volatile int32_t x292 = -1;
	uint64_t t69 = 13988LLU;

    t69 = (x289+((x290&x291)/x292));

    if (t69 != 11LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t70 = -30511;

    t70 = (x293+((x294&x295)/x296));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = -24552947543230248LL;
	static uint32_t x302 = 1712114U;
	int16_t x303 = INT16_MIN;
	volatile int64_t t71 = -1903LL;

    t71 = (x301+((x302&x303)/x304));

    if (t71 != -24552947543230196LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x305 = 0;
	static uint64_t x306 = 24812214LLU;
	static uint64_t t72 = 14759054LLU;

    t72 = (x305+((x306&x307)/x308));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = -1162014309806419173LL;
	int32_t x312 = INT32_MIN;
	static volatile int64_t t73 = INT64_MIN;

    t73 = (x309+((x310&x311)/x312));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	uint16_t x315 = 15604U;
	volatile int64_t x316 = -2108749LL;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x313+((x314&x315)/x316));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x317 = UINT32_MAX;
	static volatile int8_t x319 = INT8_MAX;
	volatile uint16_t x320 = 7U;
	static volatile uint32_t t75 = 690U;

    t75 = (x317+((x318&x319)/x320));

    if (t75 != 17U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x321 = 54U;
	int32_t x322 = INT32_MIN;
	static int64_t x323 = -1LL;
	int16_t x324 = -1797;
	volatile int64_t t76 = -461158654LL;

    t76 = (x321+((x322&x323)/x324));

    if (t76 != 1195092LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x325 = 6U;
	int8_t x326 = -2;
	int8_t x328 = -1;

    t77 = (x325+((x326&x327)/x328));

    if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x329 = 2423U;
	int8_t x330 = 7;
	static int16_t x331 = 12;
	int32_t x332 = -68678520;
	uint32_t t78 = 5953971U;

    t78 = (x329+((x330&x331)/x332));

    if (t78 != 2423U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x333 = 18004LLU;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MIN;
	uint64_t t79 = 29513766470LLU;

    t79 = (x333+((x334&x335)/x336));

    if (t79 != 18004LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x337 = 1747213U;
	uint16_t x338 = UINT16_MAX;
	volatile int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MIN;

    t80 = (x337+((x338&x339)/x340));

    if (t80 != 1747213LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = -1;
	uint32_t x342 = 203U;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	uint32_t t81 = UINT32_MAX;

    t81 = (x341+((x342&x343)/x344));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x345 = -1;
	static volatile int16_t x346 = -1868;
	volatile int32_t t82 = 41252282;

    t82 = (x345+((x346&x347)/x348));

    if (t82 != -26) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x349 = 510328316LLU;
	static int64_t x350 = INT64_MIN;
	static int64_t x351 = 1LL;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t83 = 526LLU;

    t83 = (x349+((x350&x351)/x352));

    if (t83 != 510328316LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x353 = 34U;
	uint64_t x354 = 379142LLU;
	static volatile uint64_t t84 = 4091584LLU;

    t84 = (x353+((x354&x355)/x356));

    if (t84 != 34LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x358 = 233143101U;
	volatile uint16_t x360 = 683U;
	static volatile int64_t t85 = 1689258084LL;

    t85 = (x357+((x358&x359)/x360));

    if (t85 != -4396128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x361 = INT32_MIN;
	int64_t x362 = -643103691181661819LL;
	uint32_t x363 = 44454859U;
	int64_t t86 = 7LL;

    t86 = (x361+((x362&x363)/x364));

    if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = 1;
	int8_t x370 = INT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t87 = 114353438;

    t87 = (x369+((x370&x371)/x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x377 = 22682282U;
	int64_t x378 = INT64_MAX;
	static uint32_t x379 = 772U;
	static uint8_t x380 = 5U;
	int64_t t88 = 534227081889172LL;

    t88 = (x377+((x378&x379)/x380));

    if (t88 != 22682436LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile uint32_t t89 = 94U;

    t89 = (x381+((x382&x383)/x384));

    if (t89 != 256U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x385 = 1U;
	int8_t x386 = 43;
	volatile uint64_t x388 = 483337LLU;

    t90 = (x385+((x386&x387)/x388));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int64_t t91 = INT64_MIN;

    t91 = (x393+((x394&x395)/x396));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MIN;
	volatile int8_t x399 = -1;
	int16_t x400 = 170;
	volatile int32_t t92 = 98;

    t92 = (x397+((x398&x399)/x400));

    if (t92 != -12632001) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x405 = -153;
	uint8_t x406 = 1U;
	volatile int16_t x407 = 2;
	static int32_t t93 = -483;

    t93 = (x405+((x406&x407)/x408));

    if (t93 != -153) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile int64_t t94 = INT64_MIN;

    t94 = (x409+((x410&x411)/x412));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = INT8_MAX;
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MIN;
	static uint16_t x416 = UINT16_MAX;
	volatile int32_t t95 = -7;

    t95 = (x413+((x414&x415)/x416));

    if (t95 != -32641) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x417 = 3U;
	volatile uint8_t x420 = 4U;
	int64_t t96 = 3518693037482857319LL;

    t96 = (x417+((x418&x419)/x420));

    if (t96 != 66LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x421 = 123U;
	uint8_t x422 = UINT8_MAX;
	int64_t x424 = -47023109994205LL;
	volatile int64_t t97 = -19624202LL;

    t97 = (x421+((x422&x423)/x424));

    if (t97 != 123LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x425 = 0;
	uint32_t x427 = 1720077509U;
	int64_t x428 = INT64_MAX;
	int64_t t98 = -1124657LL;

    t98 = (x425+((x426&x427)/x428));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;

    t99 = (x429+((x430&x431)/x432));

    if (t99 != 63) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x433 = 2U;
	static volatile int8_t x434 = INT8_MIN;
	uint16_t x435 = 553U;

    t100 = (x433+((x434&x435)/x436));

    if (t100 != 2LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x437 = 1;
	int16_t x438 = INT16_MIN;
	static int64_t x439 = 1229986LL;
	volatile int64_t t101 = 9424LL;

    t101 = (x437+((x438&x439)/x440));

    if (t101 != 46LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	int8_t x442 = 24;
	volatile int64_t x443 = -1LL;
	static int8_t x444 = 26;

    t102 = (x441+((x442&x443)/x444));

    if (t102 != 65535LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = UINT16_MAX;
	int32_t x446 = -1;
	static volatile int8_t x447 = INT8_MIN;
	int32_t x448 = -57;

    t103 = (x445+((x446&x447)/x448));

    if (t103 != 65537) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x449 = -1;
	uint8_t x450 = 76U;
	static int32_t x451 = INT32_MAX;
	int32_t x452 = INT32_MIN;
	int32_t t104 = -150;

    t104 = (x449+((x450&x451)/x452));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = 10;
	int32_t x454 = INT32_MAX;
	int64_t x455 = INT64_MIN;
	int32_t x456 = -1;
	int64_t t105 = 2LL;

    t105 = (x453+((x454&x455)/x456));

    if (t105 != 10LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = INT16_MIN;
	volatile uint8_t x458 = 4U;
	uint8_t x459 = 1U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t106 = -710;

    t106 = (x457+((x458&x459)/x460));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = -458;
	int8_t x463 = -1;
	uint32_t x464 = UINT32_MAX;
	uint32_t t107 = 358860U;

    t107 = (x461+((x462&x463)/x464));

    if (t107 != 4294966838U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x465 = -16209;
	int32_t x466 = 205001040;
	int16_t x467 = INT16_MAX;
	int64_t x468 = 354779879567258LL;
	volatile int64_t t108 = -5502626162913353LL;

    t108 = (x465+((x466&x467)/x468));

    if (t108 != -16209LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = INT64_MIN;
	int64_t x470 = 390851306LL;
	int16_t x471 = -142;
	int8_t x472 = INT8_MAX;
	int64_t t109 = -5610379789237LL;

    t109 = (x469+((x470&x471)/x472));

    if (t109 != -9223372036851698240LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x474 = INT16_MAX;
	uint64_t x475 = 215LLU;

    t110 = (x473+((x474&x475)/x476));

    if (t110 != 215LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x477 = 77U;
	static uint16_t x478 = 0U;
	int16_t x480 = INT16_MIN;
	volatile int32_t t111 = 1989807;

    t111 = (x477+((x478&x479)/x480));

    if (t111 != 77) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x482 = -29;
	int64_t x483 = -2904031990LL;
	static volatile int64_t x484 = -1LL;

    t112 = (x481+((x482&x483)/x484));

    if (t112 != 756548350LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x485 = INT16_MAX;
	uint8_t x486 = 5U;
	uint8_t x487 = 1U;
	static int64_t x488 = -2389499LL;
	volatile int64_t t113 = 49101821494477319LL;

    t113 = (x485+((x486&x487)/x488));

    if (t113 != 32767LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = INT8_MIN;
	uint16_t x491 = 42U;
	int32_t t114 = -1;

    t114 = (x489+((x490&x491)/x492));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x494 = 437U;
	int8_t x496 = -15;
	volatile uint32_t t115 = UINT32_MAX;

    t115 = (x493+((x494&x495)/x496));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x497 = -1;
	int16_t x498 = 3;
	int8_t x499 = INT8_MAX;
	uint64_t x500 = 218236094LLU;
	volatile uint64_t t116 = UINT64_MAX;

    t116 = (x497+((x498&x499)/x500));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x501 = 8269715U;
	volatile uint16_t x502 = 750U;
	static int16_t x503 = INT16_MAX;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t117 = 0LL;

    t117 = (x501+((x502&x503)/x504));

    if (t117 != 8269715LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x506 = 7172469U;
	static int64_t x507 = 30LL;
	int8_t x508 = INT8_MIN;
	int64_t t118 = INT64_MAX;

    t118 = (x505+((x506&x507)/x508));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x510 = UINT64_MAX;
	int8_t x511 = 2;
	int8_t x512 = INT8_MAX;
	static volatile uint64_t t119 = 313927502209503697LLU;

    t119 = (x509+((x510&x511)/x512));

    if (t119 != 41653667396544LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x513 = 9965866LLU;
	int32_t x514 = 2883094;
	volatile int32_t x516 = -530270233;
	uint64_t t120 = 4869516646072LLU;

    t120 = (x513+((x514&x515)/x516));

    if (t120 != 9965866LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x517 = UINT64_MAX;
	int16_t x518 = -2;
	int32_t x519 = -1;
	uint64_t x520 = UINT64_MAX;

    t121 = (x517+((x518&x519)/x520));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = INT64_MAX;
	static uint8_t x522 = 1U;
	uint8_t x523 = UINT8_MAX;
	static int64_t x524 = -1LL;
	int64_t t122 = -164668241614LL;

    t122 = (x521+((x522&x523)/x524));

    if (t122 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = -1;
	uint16_t x526 = UINT16_MAX;
	static int8_t x528 = INT8_MAX;
	int64_t t123 = -19454639LL;

    t123 = (x525+((x526&x527)/x528));

    if (t123 != 515LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x529 = INT8_MIN;
	int16_t x530 = -1;
	uint64_t x532 = 188261LLU;
	volatile uint64_t t124 = 51896164518130LLU;

    t124 = (x529+((x530&x531)/x532));

    if (t124 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x536 = INT8_MIN;
	volatile uint64_t t125 = 104272LLU;

    t125 = (x533+((x534&x535)/x536));

    if (t125 != 18446744071827463337LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x537 = INT32_MIN;
	uint16_t x538 = UINT16_MAX;
	uint64_t t126 = 92049LLU;

    t126 = (x537+((x538&x539)/x540));

    if (t126 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x541 = INT32_MIN;
	volatile int32_t x542 = -2;
	static volatile int16_t x543 = 11;
	volatile uint32_t x544 = 1750594U;

    t127 = (x541+((x542&x543)/x544));

    if (t127 != 2147483648U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = -1LL;
	volatile int16_t x546 = -169;
	volatile int16_t x547 = -1;
	static uint64_t x548 = 3103340413486859013LLU;
	uint64_t t128 = 18303028197LLU;

    t128 = (x545+((x546&x547)/x548));

    if (t128 != 4LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x549 = 25U;
	int16_t x551 = -1;
	volatile int8_t x552 = INT8_MIN;
	int32_t t129 = -1897;

    t129 = (x549+((x550&x551)/x552));

    if (t129 != 25) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = -1;
	uint32_t x554 = 203U;
	int8_t x555 = 63;
	int32_t x556 = INT32_MAX;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = (x553+((x554&x555)/x556));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x557 = -1;
	int8_t x559 = INT8_MIN;
	volatile int32_t t131 = -15;

    t131 = (x557+((x558&x559)/x560));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x562 = -1467946;
	int16_t x563 = -2776;
	int32_t t132 = 728542386;

    t132 = (x561+((x562&x563)/x564));

    if (t132 != 1470463) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x565 = 91U;
	volatile uint16_t x566 = UINT16_MAX;
	static int8_t x568 = 1;

    t133 = (x565+((x566&x567)/x568));

    if (t133 != 51716LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x569 = INT32_MIN;
	volatile uint64_t x570 = 761923292411663115LLU;
	static uint16_t x571 = 28352U;
	uint16_t x572 = 31U;
	volatile uint64_t t134 = 130925281792LLU;

    t134 = (x569+((x570&x571)/x572));

    if (t134 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x573 = 0;
	uint64_t x574 = 857579075456368567LLU;
	int16_t x575 = -1;

    t135 = (x573+((x574&x575)/x576));

    if (t135 != 8490881935211569LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x579 = INT32_MIN;

    t136 = (x577+((x578&x579)/x580));

    if (t136 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x581 = -1;
	static int64_t x583 = -1LL;
	volatile int8_t x584 = -1;
	int64_t t137 = 6LL;

    t137 = (x581+((x582&x583)/x584));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x585 = 63U;
	uint32_t x586 = UINT32_MAX;
	uint32_t x587 = UINT32_MAX;
	uint8_t x588 = UINT8_MAX;
	uint32_t t138 = 5117U;

    t138 = (x585+((x586&x587)/x588));

    if (t138 != 16843072U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MAX;
	uint32_t x591 = 5149U;
	int32_t x592 = INT32_MIN;
	volatile uint32_t t139 = 14699626U;

    t139 = (x589+((x590&x591)/x592));

    if (t139 != 4294967168U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x593 = 0U;
	uint64_t x594 = 2904237LLU;
	static int64_t x595 = 3846357152645436971LL;
	int64_t x596 = INT64_MIN;
	static uint64_t t140 = 596910699LLU;

    t140 = (x593+((x594&x595)/x596));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x598 = 1320;
	int32_t x599 = -36;
	volatile uint32_t t141 = 43U;

    t141 = (x597+((x598&x599)/x600));

    if (t141 != 26U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x602 = -1;
	int8_t x603 = -1;
	static int64_t x604 = -1LL;
	volatile int64_t t142 = 108155982365191LL;

    t142 = (x601+((x602&x603)/x604));

    if (t142 != 21221944LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x607 = 281309;
	uint64_t x608 = 1193173228881953795LLU;
	uint64_t t143 = 845855009174027472LLU;

    t143 = (x605+((x606&x607)/x608));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x609 = 13256311096477LLU;
	volatile int16_t x610 = -1;
	uint16_t x611 = UINT16_MAX;
	static int32_t x612 = INT32_MIN;
	uint64_t t144 = 224LLU;

    t144 = (x609+((x610&x611)/x612));

    if (t144 != 13256311096477LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t t145 = 3290434U;

    t145 = (x613+((x614&x615)/x616));

    if (t145 != 4294967168U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x617 = -24;
	static int64_t x618 = INT64_MIN;
	int64_t x619 = INT64_MIN;
	static volatile uint32_t x620 = 593201693U;
	int64_t t146 = 2250019991523LL;

    t146 = (x617+((x618&x619)/x620));

    if (t146 != -15548458745LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x621 = 83093253;
	int32_t x624 = 943461860;
	static volatile int32_t t147 = -414546161;

    t147 = (x621+((x622&x623)/x624));

    if (t147 != 83093253) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x626 = 1810LL;
	int8_t x628 = INT8_MAX;
	volatile uint64_t t148 = 1891LLU;

    t148 = (x625+((x626&x627)/x628));

    if (t148 != 15LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x629 = INT8_MAX;
	static int16_t x630 = INT16_MAX;
	int8_t x631 = -1;
	int32_t x632 = INT32_MIN;
	static volatile int32_t t149 = 19533709;

    t149 = (x629+((x630&x631)/x632));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x633 = 7U;
	volatile int8_t x634 = INT8_MAX;
	int64_t x636 = -3541754257230846436LL;
	volatile int64_t t150 = 733013726LL;

    t150 = (x633+((x634&x635)/x636));

    if (t150 != 7LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x637 = -1;
	static volatile int32_t x638 = INT32_MIN;
	volatile int8_t x639 = INT8_MAX;
	static int64_t x640 = -1137050862133369408LL;
	volatile int64_t t151 = 3LL;

    t151 = (x637+((x638&x639)/x640));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x641 = UINT16_MAX;
	int64_t x642 = INT64_MIN;
	int32_t x643 = -23531;
	int8_t x644 = INT8_MAX;
	int64_t t152 = -3619819537LL;

    t152 = (x641+((x642&x643)/x644));

    if (t152 != -72624976668082306LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x646 = INT16_MAX;
	int8_t x647 = 21;
	uint16_t x648 = UINT16_MAX;
	uint32_t t153 = UINT32_MAX;

    t153 = (x645+((x646&x647)/x648));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x649 = INT16_MIN;
	uint32_t x650 = 1693829179U;
	static volatile int8_t x651 = 5;
	volatile int64_t x652 = INT64_MIN;

    t154 = (x649+((x650&x651)/x652));

    if (t154 != -32768LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = -1;
	uint32_t x654 = UINT32_MAX;
	volatile int16_t x656 = INT16_MIN;

    t155 = (x653+((x654&x655)/x656));

    if (t155 != -131072LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x657 = UINT32_MAX;
	int8_t x658 = INT8_MIN;
	volatile int64_t x659 = -80LL;
	static int16_t x660 = INT16_MIN;
	int64_t t156 = 435267LL;

    t156 = (x657+((x658&x659)/x660));

    if (t156 != 4294967295LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x661 = 471U;
	uint64_t x662 = 74296072203847LLU;
	int8_t x663 = -45;
	int8_t x664 = -8;
	uint64_t t157 = 17LLU;

    t157 = (x661+((x662&x663)/x664));

    if (t157 != 471LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x665 = -14;
	int8_t x666 = -1;
	int32_t x667 = -37762997;
	uint16_t x668 = UINT16_MAX;
	static int32_t t158 = 259355;

    t158 = (x665+((x666&x667)/x668));

    if (t158 != -590) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x669 = INT64_MAX;
	uint16_t x670 = 7U;
	static uint8_t x671 = 75U;
	int64_t x672 = -1LL;

    t159 = (x669+((x670&x671)/x672));

    if (t159 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x673 = -1;
	int16_t x674 = INT16_MAX;
	uint16_t x675 = 1U;
	uint16_t x676 = 3344U;
	volatile int32_t t160 = 22;

    t160 = (x673+((x674&x675)/x676));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x677 = 11U;
	static int32_t x678 = INT32_MIN;
	uint8_t x679 = 123U;
	int32_t t161 = -718696;

    t161 = (x677+((x678&x679)/x680));

    if (t161 != 11) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x681 = UINT8_MAX;
	int8_t x682 = -1;
	int8_t x683 = 36;
	int64_t x684 = 473LL;
	int64_t t162 = -3056LL;

    t162 = (x681+((x682&x683)/x684));

    if (t162 != 255LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x685 = -1;
	volatile int64_t x686 = INT64_MIN;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MAX;
	int64_t t163 = -109LL;

    t163 = (x685+((x686&x687)/x688));

    if (t163 != -281483566907401LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x690 = UINT32_MAX;
	static uint64_t t164 = 4128681LLU;

    t164 = (x689+((x690&x691)/x692));

    if (t164 != 150878LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x693 = 3;
	int8_t x694 = 30;
	uint8_t x695 = UINT8_MAX;
	volatile int8_t x696 = INT8_MAX;
	volatile int32_t t165 = 117;

    t165 = (x693+((x694&x695)/x696));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x697 = INT32_MAX;
	static uint16_t x700 = 19U;
	int32_t t166 = INT32_MAX;

    t166 = (x697+((x698&x699)/x700));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x701 = INT8_MIN;
	int64_t x702 = 23632919463LL;
	int32_t x704 = INT32_MIN;
	uint64_t t167 = 27926089LLU;

    t167 = (x701+((x702&x703)/x704));

    if (t167 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x705 = UINT64_MAX;
	static int16_t x706 = -1963;
	volatile uint16_t x708 = UINT16_MAX;
	static volatile uint64_t t168 = UINT64_MAX;

    t168 = (x705+((x706&x707)/x708));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x709 = UINT32_MAX;
	int64_t x711 = -1361566334391LL;
	uint64_t x712 = 71426211030LLU;
	volatile uint64_t t169 = 32422LLU;

    t169 = (x709+((x710&x711)/x712));

    if (t169 != 4294967295LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x713 = -1LL;
	uint32_t x714 = 28799811U;
	static uint64_t x715 = 545LLU;
	int16_t x716 = INT16_MIN;

    t170 = (x713+((x714&x715)/x716));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x717 = 46U;
	volatile int16_t x718 = INT16_MAX;
	uint64_t x719 = 25813198LLU;
	static uint64_t t171 = 16589598LLU;

    t171 = (x717+((x718&x719)/x720));

    if (t171 != 46LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x721 = 1521LLU;
	int8_t x722 = INT8_MAX;
	int32_t x723 = INT32_MIN;
	uint64_t x724 = 12307742LLU;
	volatile uint64_t t172 = 182111738058566LLU;

    t172 = (x721+((x722&x723)/x724));

    if (t172 != 1521LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x725 = INT32_MAX;
	uint64_t x726 = UINT64_MAX;
	int8_t x727 = -1;
	int32_t x728 = -494;
	uint64_t t173 = 38LLU;

    t173 = (x725+((x726&x727)/x728));

    if (t173 != 2147483648LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = INT64_MAX;
	int8_t x730 = -1;
	int8_t x731 = INT8_MIN;
	static int64_t t174 = -31986647LL;

    t174 = (x729+((x730&x731)/x732));

    if (t174 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x733 = 0;
	static int8_t x735 = -1;
	uint8_t x736 = UINT8_MAX;
	int32_t t175 = 133207974;

    t175 = (x733+((x734&x735)/x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x738 = INT64_MIN;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 32276U;
	volatile int64_t t176 = -422LL;

    t176 = (x737+((x738&x739)/x740));

    if (t176 != -285765647409753LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x741 = INT8_MIN;
	static uint8_t x742 = 17U;
	int32_t x743 = -1;
	uint8_t x744 = 2U;

    t177 = (x741+((x742&x743)/x744));

    if (t177 != -120) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x745 = -31;
	volatile uint32_t x746 = UINT32_MAX;
	int8_t x747 = 52;
	uint32_t x748 = 1U;
	uint32_t t178 = 3159757U;

    t178 = (x745+((x746&x747)/x748));

    if (t178 != 21U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MIN;
	int64_t x751 = INT64_MAX;
	volatile int16_t x752 = INT16_MIN;

    t179 = (x749+((x750&x751)/x752));

    if (t179 != -281474976710783LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x753 = 105068U;
	static int16_t x755 = INT16_MIN;
	volatile uint16_t x756 = 8870U;

    t180 = (x753+((x754&x755)/x756));

    if (t180 != 105068U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x758 = INT64_MIN;
	static volatile uint16_t x759 = 42U;
	int8_t x760 = INT8_MIN;
	volatile int64_t t181 = -3611954088532108315LL;

    t181 = (x757+((x758&x759)/x760));

    if (t181 != 5235LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int32_t x763 = INT32_MIN;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = (x761+((x762&x763)/x764));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	int8_t x767 = INT8_MIN;
	volatile int32_t t183 = -460399962;

    t183 = (x765+((x766&x767)/x768));

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x769 = INT8_MIN;
	static int32_t x770 = INT32_MAX;
	int16_t x771 = -1;
	uint8_t x772 = 6U;
	volatile int32_t t184 = 9511;

    t184 = (x769+((x770&x771)/x772));

    if (t184 != 357913813) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = INT64_MIN;
	static uint16_t x774 = 81U;
	volatile int64_t x776 = -14469LL;

    t185 = (x773+((x774&x775)/x776));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x777 = 2U;
	int64_t x778 = -130502881626376026LL;
	static volatile uint32_t x779 = UINT32_MAX;
	static uint32_t x780 = 44U;
	volatile int64_t t186 = -17014535LL;

    t186 = (x777+((x778&x779)/x780));

    if (t186 != 7052154LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x781 = INT32_MIN;
	static uint8_t x783 = 0U;

    t187 = (x781+((x782&x783)/x784));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x785 = INT64_MAX;
	volatile int64_t x786 = INT64_MIN;
	static uint16_t x787 = 7U;
	int16_t x788 = INT16_MIN;
	int64_t t188 = INT64_MAX;

    t188 = (x785+((x786&x787)/x788));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x789 = 42941352881LLU;
	static int64_t x790 = 4339796498LL;
	int32_t x792 = 2394;
	static uint64_t t189 = 7LLU;

    t189 = (x789+((x790&x791)/x792));

    if (t189 != 42941352881LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x793 = 575;
	int64_t x795 = 1506969360592112048LL;
	int64_t t190 = 1018283LL;

    t190 = (x793+((x794&x795)/x796));

    if (t190 != 576LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x798 = 913U;
	static int32_t x799 = -902;
	int8_t x800 = -1;

    t191 = (x797+((x798&x799)/x800));

    if (t191 != 3924282893263046LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x801 = -1;
	uint64_t x802 = 1040LLU;
	static volatile int64_t x803 = INT64_MIN;
	static uint64_t t192 = UINT64_MAX;

    t192 = (x801+((x802&x803)/x804));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x805 = 244472U;
	uint16_t x807 = 12257U;
	int8_t x808 = INT8_MIN;

    t193 = (x805+((x806&x807)/x808));

    if (t193 != 244377LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x809 = 5860LL;
	uint32_t x810 = 7603559U;
	uint64_t x811 = UINT64_MAX;
	uint64_t t194 = 650293810LLU;

    t194 = (x809+((x810&x811)/x812));

    if (t194 != 5860LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x817 = -1;
	uint32_t x819 = UINT32_MAX;
	int8_t x820 = INT8_MIN;
	int64_t t195 = -374110598694322LL;

    t195 = (x817+((x818&x819)/x820));

    if (t195 != -33554432LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x821 = -38;
	volatile int32_t x822 = INT32_MIN;
	int64_t x823 = INT64_MIN;
	static volatile int16_t x824 = INT16_MIN;
	volatile int64_t t196 = 126918011372439985LL;

    t196 = (x821+((x822&x823)/x824));

    if (t196 != 281474976710618LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = -1LL;
	static volatile int8_t x826 = -1;
	uint32_t x827 = 3709U;
	uint8_t x828 = UINT8_MAX;

    t197 = (x825+((x826&x827)/x828));

    if (t197 != 13LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x829 = INT16_MAX;
	static int16_t x830 = INT16_MIN;
	uint32_t x831 = 5727U;
	volatile int32_t x832 = 4012401;
	uint32_t t198 = 12880267U;

    t198 = (x829+((x830&x831)/x832));

    if (t198 != 32767U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x833 = 49114304LL;
	volatile int64_t t199 = 76753LL;

    t199 = (x833+((x834&x835)/x836));

    if (t199 != 49114304LL) { NG(); } else { ; }
	
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

