
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

int16_t x5 = -27;
uint16_t x8 = 139U;
int16_t x16 = INT16_MIN;
uint16_t x18 = 119U;
static volatile int32_t x19 = INT32_MIN;
int32_t t4 = -257700;
int8_t x24 = INT8_MIN;
int32_t t7 = -2;
volatile uint64_t x37 = UINT64_MAX;
volatile int32_t t9 = 2941179;
int8_t x43 = -35;
uint32_t x44 = 6U;
int8_t x47 = 0;
int32_t x49 = -47;
int8_t x55 = 1;
int32_t x58 = INT32_MIN;
int32_t x71 = 999124541;
static int32_t x77 = INT32_MIN;
int8_t x80 = 7;
int64_t x81 = 20LL;
volatile int32_t t21 = 784436205;
int32_t t22 = -1813430;
int64_t x102 = INT64_MAX;
volatile int32_t t24 = 4526669;
uint8_t x109 = UINT8_MAX;
int16_t x119 = -141;
int8_t x122 = INT8_MIN;
volatile int32_t t30 = -642068;
uint16_t x133 = 2000U;
int8_t x137 = INT8_MIN;
int32_t x139 = INT32_MIN;
int32_t t33 = 6183;
int16_t x149 = INT16_MIN;
uint32_t x152 = 5U;
int32_t x153 = INT32_MIN;
static int32_t x154 = -1;
static int32_t t42 = -714075;
int32_t x179 = 854352752;
int64_t x181 = 70790982802643808LL;
static int8_t x187 = 1;
volatile uint32_t x191 = UINT32_MAX;
volatile int32_t t47 = 127;
int16_t x202 = INT16_MAX;
uint32_t x220 = 8391672U;
uint32_t x230 = 498901727U;
int8_t x231 = INT8_MIN;
static int32_t x233 = INT32_MAX;
int16_t x236 = -1;
int32_t x239 = 24769;
int32_t t57 = -296;
uint16_t x250 = 840U;
static int16_t x252 = 11580;
int16_t x260 = -15223;
static int16_t x263 = -1;
int64_t x264 = INT64_MAX;
int32_t t61 = 2;
uint16_t x272 = 0U;
int8_t x286 = INT8_MIN;
int32_t t67 = 79325;
int16_t x294 = INT16_MAX;
uint32_t x295 = 25U;
int32_t x298 = INT32_MIN;
static int32_t x307 = INT32_MIN;
volatile int32_t t71 = -49460;
volatile uint64_t x315 = UINT64_MAX;
volatile int32_t t72 = 0;
int64_t x323 = -1LL;
int16_t x330 = INT16_MIN;
int8_t x336 = INT8_MAX;
volatile uint16_t x338 = UINT16_MAX;
int64_t x339 = -1LL;
uint32_t x340 = 3U;
volatile int32_t t78 = -29845946;
int16_t x347 = 1;
int16_t x349 = INT16_MIN;
uint64_t x356 = 239872200959849LLU;
int16_t x363 = INT16_MIN;
uint32_t x367 = UINT32_MAX;
int32_t t84 = -6208083;
int32_t x370 = 851;
uint32_t x371 = 21203U;
int64_t x372 = -4352062711702LL;
volatile int64_t x373 = INT64_MAX;
int64_t x382 = INT64_MAX;
uint8_t x386 = 0U;
static int32_t x387 = -254;
volatile int16_t x392 = INT16_MAX;
volatile int16_t x396 = INT16_MAX;
volatile int16_t x440 = -1;
uint64_t x442 = 16390292419623818LLU;
int8_t x446 = INT8_MAX;
uint64_t x450 = UINT64_MAX;
int32_t t103 = -76836;
uint16_t x462 = UINT16_MAX;
uint32_t x465 = 50945U;
int8_t x467 = INT8_MAX;
volatile int16_t x469 = -1;
int64_t x472 = -1LL;
uint16_t x480 = 12U;
int64_t x482 = -1LL;
volatile uint16_t x486 = UINT16_MAX;
uint64_t x491 = UINT64_MAX;
volatile int32_t t114 = 106;
uint16_t x499 = 52U;
volatile int32_t x500 = INT32_MIN;
volatile int8_t x503 = -6;
int32_t x513 = -1;
uint32_t x515 = UINT32_MAX;
volatile int32_t t119 = -14;
uint16_t x523 = 6250U;
static int8_t x524 = -1;
uint8_t x525 = UINT8_MAX;
int32_t x527 = INT32_MIN;
volatile int32_t x533 = INT32_MIN;
volatile int32_t x535 = -1;
volatile uint16_t x537 = 726U;
static int8_t x539 = INT8_MIN;
int32_t x540 = -1;
int8_t x544 = -1;
static int64_t x549 = 131307192LL;
static volatile int32_t t128 = 275143833;
static int32_t x553 = -5471679;
uint32_t x558 = 655340U;
static uint64_t x560 = 1128441475486749656LLU;
static int8_t x561 = 2;
int32_t t131 = 19267;
volatile uint16_t x567 = UINT16_MAX;
volatile uint64_t x568 = 20955490872676220LLU;
volatile int64_t x572 = INT64_MAX;
uint32_t x576 = 7438U;
static int32_t t136 = -192343;
int64_t x593 = -1LL;
int16_t x594 = INT16_MIN;
static int32_t t138 = 769234567;
int16_t x597 = INT16_MIN;
int8_t x610 = -23;
int64_t x613 = -1LL;
volatile uint64_t x614 = 10986813281487365LLU;
int32_t x624 = -658;
int16_t x628 = INT16_MIN;
int16_t x629 = -1;
static int64_t x631 = INT64_MAX;
static volatile int16_t x632 = -238;
uint32_t x636 = 1235223687U;
uint32_t x637 = 14015U;
volatile int8_t x644 = INT8_MAX;
uint64_t x645 = UINT64_MAX;
uint8_t x658 = 29U;
int32_t x667 = INT32_MIN;
volatile int32_t x668 = INT32_MIN;
volatile int32_t t153 = 1764251;
int16_t x669 = -1;
volatile uint16_t x678 = 9U;
static volatile int32_t t157 = 52863068;
volatile uint16_t x686 = UINT16_MAX;
uint64_t x687 = UINT64_MAX;
int16_t x694 = 8370;
int32_t t160 = -15;
int16_t x700 = INT16_MIN;
volatile int32_t t162 = -3137201;
int8_t x714 = INT8_MIN;
int32_t x724 = 2759552;
uint64_t x726 = 190406825LLU;
int8_t x732 = -1;
static int16_t x736 = -1;
static uint32_t x737 = 221U;
volatile int32_t t171 = 3;
int8_t x742 = INT8_MAX;
volatile int8_t x750 = 2;
volatile int32_t t175 = -241172026;
int64_t x760 = 411LL;
int64_t x764 = 9385833410727LL;
int32_t t177 = -7443422;
int8_t x769 = 6;
int8_t x771 = INT8_MAX;
static uint16_t x772 = 937U;
static int32_t t180 = 102209;
int32_t x777 = 863024;
static int32_t x778 = INT32_MIN;
static uint64_t x781 = 416LLU;
int8_t x788 = 1;
int64_t x793 = 65936446LL;
uint8_t x797 = UINT8_MAX;
volatile int64_t x805 = -1LL;
int16_t x806 = 1;
static int64_t x812 = -1505857534606LL;
int32_t x815 = INT32_MIN;
int16_t x816 = INT16_MIN;
volatile int64_t x819 = INT64_MIN;
int64_t x821 = INT64_MIN;
int8_t x830 = -1;
volatile uint16_t x831 = 13966U;
int32_t x832 = 61203;
int32_t x833 = INT32_MIN;
volatile int32_t t195 = 168054087;
uint8_t x844 = UINT8_MAX;
int16_t x848 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile uint8_t x2 = 8U;
	static volatile int16_t x3 = INT16_MIN;
	int8_t x4 = 1;
	int32_t t0 = -1;

    t0 = (x1<=((x2&x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 1U;
	int32_t x7 = INT32_MAX;
	int32_t t1 = -1359;

    t1 = (x5<=((x6&x7)-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = INT16_MIN;
	uint8_t x10 = 8U;
	int64_t x11 = -1LL;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 5714612;

    t2 = (x9<=((x10&x11)-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int32_t x14 = INT32_MIN;
	volatile uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = 0;

    t3 = (x13<=((x14&x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int32_t x20 = -1;

    t4 = (x17<=((x18&x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	static int32_t x22 = INT32_MIN;
	uint8_t x23 = 88U;
	int32_t t5 = -2;

    t5 = (x21<=((x22&x23)-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	static int8_t x26 = 1;
	uint64_t x27 = 27195006761LLU;
	int16_t x28 = -10490;
	int32_t t6 = 30;

    t6 = (x25<=((x26&x27)-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	uint8_t x30 = 102U;
	int32_t x31 = INT32_MIN;
	volatile int16_t x32 = -49;

    t7 = (x29<=((x30&x31)-x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	int16_t x34 = -10;
	static int32_t x35 = -8074;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -50227;

    t8 = (x33<=((x34&x35)-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 1832LLU;
	volatile int16_t x39 = INT16_MIN;
	int16_t x40 = -1;

    t9 = (x37<=((x38&x39)-x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x41 = 5382414470061279LLU;
	int8_t x42 = 18;
	int32_t t10 = -1526;

    t10 = (x41<=((x42&x43)-x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MAX;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = -444712;

    t11 = (x45<=((x46&x47)-x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 26LLU;
	int16_t x51 = INT16_MIN;
	static int64_t x52 = -1LL;
	int32_t t12 = -133734;

    t12 = (x49<=((x50&x51)-x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x53 = 7255U;
	volatile int64_t x54 = 89811480LL;
	static volatile int8_t x56 = 4;
	volatile int32_t t13 = -46704274;

    t13 = (x53<=((x54&x55)-x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 62U;
	int64_t x59 = INT64_MAX;
	int16_t x60 = 1;
	int32_t t14 = -40765452;

    t14 = (x57<=((x58&x59)-x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	int64_t x62 = -1LL;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -4756448;

    t15 = (x61<=((x62&x63)-x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -1348009308241LL;
	uint8_t x67 = 0U;
	int16_t x68 = -15;
	volatile int32_t t16 = -250508;

    t16 = (x65<=((x66&x67)-x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = 196832355220617153LL;
	static int64_t x70 = -49302195LL;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 45482;

    t17 = (x69<=((x70&x71)-x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x78 = -4;
	static int32_t x79 = INT32_MAX;
	int32_t t18 = -29511;

    t18 = (x77<=((x78&x79)-x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 1126U;
	int32_t t19 = 0;

    t19 = (x81<=((x82&x83)-x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 28U;
	int16_t x86 = -1;
	int64_t x87 = -1LL;
	uint16_t x88 = 6U;
	int32_t t20 = -1;

    t20 = (x85<=((x86&x87)-x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x89 = 68678616LLU;
	static int8_t x90 = INT8_MIN;
	uint64_t x91 = 6860616494928560472LLU;
	static volatile int16_t x92 = -1;

    t21 = (x89<=((x90&x91)-x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -1LL;
	int32_t x94 = 0;
	uint32_t x95 = 40529141U;
	uint16_t x96 = 3U;

    t22 = (x93<=((x94&x95)-x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x97 = 6985U;
	int16_t x98 = -71;
	static int8_t x99 = -1;
	int8_t x100 = 0;
	volatile int32_t t23 = 4;

    t23 = (x97<=((x98&x99)-x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = -27071;
	uint32_t x103 = 49215U;
	volatile int16_t x104 = -510;

    t24 = (x101<=((x102&x103)-x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	static uint32_t x106 = 60634U;
	int32_t x107 = -124764;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t25 = -11391;

    t25 = (x105<=((x106&x107)-x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x110 = UINT16_MAX;
	int8_t x111 = -1;
	uint64_t x112 = 7861776559697352534LLU;
	int32_t t26 = 7691;

    t26 = (x109<=((x110&x111)-x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 13U;
	static uint64_t x114 = 122702770LLU;
	static volatile int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t27 = -457455;

    t27 = (x113<=((x114&x115)-x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MAX;
	int64_t x118 = -184LL;
	static uint8_t x120 = UINT8_MAX;
	int32_t t28 = -106128820;

    t28 = (x117<=((x118&x119)-x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x121 = -1LL;
	uint8_t x123 = 15U;
	static int16_t x124 = INT16_MAX;
	volatile int32_t t29 = -5;

    t29 = (x121<=((x122&x123)-x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 326595998U;
	static uint64_t x126 = 15243929914LLU;
	int8_t x127 = INT8_MIN;
	uint32_t x128 = UINT32_MAX;

    t30 = (x125<=((x126&x127)-x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x129 = 216U;
	static int16_t x130 = -1;
	volatile int8_t x131 = INT8_MAX;
	volatile int8_t x132 = INT8_MAX;
	int32_t t31 = -133;

    t31 = (x129<=((x130&x131)-x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = 348;
	int64_t x135 = INT64_MIN;
	int16_t x136 = -7;
	static int32_t t32 = 536244146;

    t32 = (x133<=((x134&x135)-x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x138 = 54;
	static int8_t x140 = -1;

    t33 = (x137<=((x138&x139)-x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = 970;
	static volatile int64_t x142 = INT64_MIN;
	int32_t x143 = -1;
	uint16_t x144 = 0U;
	volatile int32_t t34 = 1474206;

    t34 = (x141<=((x142&x143)-x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x145 = 1U;
	volatile uint64_t x146 = 3441190850LLU;
	int8_t x147 = INT8_MAX;
	volatile int8_t x148 = INT8_MIN;
	int32_t t35 = 1066300;

    t35 = (x145<=((x146&x147)-x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x150 = 98U;
	int64_t x151 = INT64_MIN;
	int32_t t36 = 0;

    t36 = (x149<=((x150&x151)-x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x155 = 1U;
	int32_t x156 = -18711586;
	int32_t t37 = -166;

    t37 = (x153<=((x154&x155)-x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	static uint8_t x159 = UINT8_MAX;
	static uint8_t x160 = 0U;
	volatile int32_t t38 = 493688104;

    t38 = (x157<=((x158&x159)-x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	int32_t x162 = -1730919;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 9655U;
	int32_t t39 = 138240249;

    t39 = (x161<=((x162&x163)-x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = -42943012;
	static uint16_t x168 = UINT16_MAX;
	volatile int32_t t40 = -32952645;

    t40 = (x165<=((x166&x167)-x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x169 = INT16_MIN;
	volatile uint8_t x170 = 4U;
	volatile uint32_t x171 = 6195210U;
	uint64_t x172 = 60200312LLU;
	volatile int32_t t41 = 113468876;

    t41 = (x169<=((x170&x171)-x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -12059;
	int8_t x174 = 0;
	int8_t x175 = INT8_MIN;
	static volatile uint16_t x176 = UINT16_MAX;

    t42 = (x173<=((x174&x175)-x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	volatile int16_t x178 = 0;
	uint16_t x180 = 11794U;
	static volatile int32_t t43 = 14719388;

    t43 = (x177<=((x178&x179)-x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x182 = INT16_MIN;
	int64_t x183 = -1LL;
	int64_t x184 = -910295602413605LL;
	volatile int32_t t44 = -750914;

    t44 = (x181<=((x182&x183)-x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = 516064;
	int32_t x186 = INT32_MAX;
	static uint32_t x188 = 2686U;
	int32_t t45 = -3835549;

    t45 = (x185<=((x186&x187)-x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	uint8_t x190 = 7U;
	static int8_t x192 = INT8_MIN;
	static int32_t t46 = 23281;

    t46 = (x189<=((x190&x191)-x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = INT64_MIN;
	int16_t x194 = 0;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = -1;

    t47 = (x193<=((x194&x195)-x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	volatile int8_t x200 = -1;
	volatile int32_t t48 = -53;

    t48 = (x197<=((x198&x199)-x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x203 = -7;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t49 = 961163;

    t49 = (x201<=((x202&x203)-x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = 3295640;
	volatile int64_t x206 = -7258211462168630LL;
	int16_t x207 = -141;
	volatile int16_t x208 = -1;
	static int32_t t50 = 39;

    t50 = (x205<=((x206&x207)-x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x209 = INT32_MAX;
	uint64_t x210 = 12012864227049714LLU;
	int32_t x211 = -117333484;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t51 = -1552;

    t51 = (x209<=((x210&x211)-x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x217 = INT16_MIN;
	volatile int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int32_t t52 = 1956;

    t52 = (x217<=((x218&x219)-x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x229 = INT16_MIN;
	volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t53 = 0;

    t53 = (x229<=((x230&x231)-x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MIN;
	volatile int32_t t54 = -408231339;

    t54 = (x233<=((x234&x235)-x236));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x237 = INT8_MIN;
	int8_t x238 = -3;
	int8_t x240 = INT8_MIN;
	int32_t t55 = 63383358;

    t55 = (x237<=((x238&x239)-x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = INT8_MAX;
	static int8_t x242 = INT8_MIN;
	static int8_t x243 = -1;
	int32_t x244 = 7795173;
	int32_t t56 = -11;

    t56 = (x241<=((x242&x243)-x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = 56U;
	volatile int32_t x246 = -1;
	uint32_t x247 = 5084U;
	static int32_t x248 = -1;

    t57 = (x245<=((x246&x247)-x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x249 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	volatile int32_t t58 = -88304508;

    t58 = (x249<=((x250&x251)-x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x253 = 179995258465LLU;
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = 3607140649347839LL;
	uint32_t x256 = UINT32_MAX;
	int32_t t59 = 0;

    t59 = (x253<=((x254&x255)-x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = INT8_MAX;
	uint8_t x258 = 3U;
	int8_t x259 = INT8_MAX;
	int32_t t60 = -3389123;

    t60 = (x257<=((x258&x259)-x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x261 = 1403335773611LL;
	uint64_t x262 = 28519807687LLU;

    t61 = (x261<=((x262&x263)-x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = INT8_MIN;
	volatile int8_t x266 = INT8_MAX;
	volatile int8_t x267 = -45;
	int32_t x268 = -1;
	int32_t t62 = 26698161;

    t62 = (x265<=((x266&x267)-x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = 30467U;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	int32_t t63 = -1178;

    t63 = (x269<=((x270&x271)-x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int64_t x275 = INT64_MAX;
	static uint32_t x276 = 88683U;
	static int32_t t64 = 6557068;

    t64 = (x273<=((x274&x275)-x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 39U;
	volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t65 = -14644856;

    t65 = (x281<=((x282&x283)-x284));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x285 = -1LL;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = 0;
	int32_t t66 = -23497499;

    t66 = (x285<=((x286&x287)-x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x289 = INT16_MAX;
	static uint32_t x290 = UINT32_MAX;
	int16_t x291 = 1;
	static uint16_t x292 = UINT16_MAX;

    t67 = (x289<=((x290&x291)-x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x293 = 4U;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t68 = -56;

    t68 = (x293<=((x294&x295)-x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x297 = -5;
	int64_t x299 = 969408392641899408LL;
	uint8_t x300 = 8U;
	volatile int32_t t69 = -25;

    t69 = (x297<=((x298&x299)-x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x305 = INT32_MIN;
	int16_t x306 = -1812;
	volatile int8_t x308 = INT8_MIN;
	int32_t t70 = 1;

    t70 = (x305<=((x306&x307)-x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x309 = INT16_MIN;
	static uint8_t x310 = UINT8_MAX;
	int16_t x311 = -23;
	volatile int16_t x312 = 30;

    t71 = (x309<=((x310&x311)-x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x313 = 52U;
	int16_t x314 = 34;
	uint8_t x316 = 1U;

    t72 = (x313<=((x314&x315)-x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x321 = INT8_MAX;
	static uint64_t x322 = UINT64_MAX;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t73 = -103;

    t73 = (x321<=((x322&x323)-x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t74 = -2347;

    t74 = (x325<=((x326&x327)-x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x329 = 33;
	int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = UINT64_MAX;
	int32_t t75 = -11293;

    t75 = (x329<=((x330&x331)-x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = -1873;
	uint64_t x334 = 577198221LLU;
	volatile uint32_t x335 = UINT32_MAX;
	int32_t t76 = -1;

    t76 = (x333<=((x334&x335)-x336));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x337 = UINT32_MAX;
	volatile int32_t t77 = 8762;

    t77 = (x337<=((x338&x339)-x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	volatile int32_t x344 = -1;

    t78 = (x341<=((x342&x343)-x344));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x345 = 1459LL;
	int16_t x346 = INT16_MIN;
	volatile int16_t x348 = -116;
	volatile int32_t t79 = -802916471;

    t79 = (x345<=((x346&x347)-x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x350 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t80 = -906004523;

    t80 = (x349<=((x350&x351)-x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x353 = -1;
	int32_t x354 = INT32_MAX;
	uint32_t x355 = 570U;
	volatile int32_t t81 = -826047;

    t81 = (x353<=((x354&x355)-x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = 40;
	static uint32_t x358 = UINT32_MAX;
	static volatile int32_t x359 = -1;
	volatile int64_t x360 = -94701685544LL;
	volatile int32_t t82 = 4;

    t82 = (x357<=((x358&x359)-x360));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x361 = UINT8_MAX;
	static volatile uint8_t x362 = UINT8_MAX;
	uint16_t x364 = 1U;
	int32_t t83 = -29724;

    t83 = (x361<=((x362&x363)-x364));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	volatile uint64_t x368 = 28080892419514639LLU;

    t84 = (x365<=((x366&x367)-x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x369 = 116U;
	volatile int32_t t85 = 0;

    t85 = (x369<=((x370&x371)-x372));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x374 = INT64_MIN;
	int8_t x375 = -1;
	int8_t x376 = -1;
	int32_t t86 = -224722568;

    t86 = (x373<=((x374&x375)-x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x377 = 3LLU;
	int64_t x378 = -1LL;
	static int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	int32_t t87 = 1;

    t87 = (x377<=((x378&x379)-x380));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	volatile int16_t x383 = -1;
	int64_t x384 = INT64_MAX;
	volatile int32_t t88 = 994145;

    t88 = (x381<=((x382&x383)-x384));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t89 = 58411101;

    t89 = (x385<=((x386&x387)-x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = INT32_MAX;
	int32_t x390 = -30624384;
	int8_t x391 = INT8_MAX;
	int32_t t90 = -7161;

    t90 = (x389<=((x390&x391)-x392));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x393 = 1;
	uint32_t x394 = 577536U;
	uint8_t x395 = 2U;
	int32_t t91 = 44018;

    t91 = (x393<=((x394&x395)-x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x397 = 2914630770557LL;
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	int32_t t92 = -10;

    t92 = (x397<=((x398&x399)-x400));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x401 = INT64_MIN;
	static uint16_t x402 = 245U;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = 565314837;
	volatile int32_t t93 = -84947;

    t93 = (x401<=((x402&x403)-x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = -2;
	static uint16_t x406 = 1801U;
	uint8_t x407 = 6U;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t94 = -503929231;

    t94 = (x405<=((x406&x407)-x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x409 = 77U;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t95 = 13;

    t95 = (x409<=((x410&x411)-x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x413 = 877U;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = UINT64_MAX;
	static int32_t t96 = 0;

    t96 = (x413<=((x414&x415)-x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = 55744951LLU;
	int16_t x424 = INT16_MIN;
	volatile int32_t t97 = -10930;

    t97 = (x421<=((x422&x423)-x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x429 = INT64_MIN;
	int32_t x430 = INT32_MIN;
	volatile int8_t x431 = INT8_MIN;
	uint32_t x432 = 43796536U;
	int32_t t98 = -756;

    t98 = (x429<=((x430&x431)-x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x433 = INT32_MAX;
	static volatile int32_t x434 = -1;
	static volatile int8_t x435 = INT8_MAX;
	int64_t x436 = 127845487LL;
	static int32_t t99 = -239;

    t99 = (x433<=((x434&x435)-x436));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x437 = INT8_MAX;
	static int8_t x438 = INT8_MAX;
	int8_t x439 = 2;
	int32_t t100 = 16026;

    t100 = (x437<=((x438&x439)-x440));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x441 = UINT64_MAX;
	uint8_t x443 = UINT8_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t101 = 85241981;

    t101 = (x441<=((x442&x443)-x444));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x445 = INT16_MAX;
	int8_t x447 = INT8_MIN;
	int16_t x448 = 1;
	static volatile int32_t t102 = -80377273;

    t102 = (x445<=((x446&x447)-x448));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x451 = 1;
	int16_t x452 = INT16_MIN;

    t103 = (x449<=((x450&x451)-x452));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x453 = INT8_MIN;
	volatile uint32_t x454 = UINT32_MAX;
	int16_t x455 = 6;
	int16_t x456 = 3256;
	static volatile int32_t t104 = 28;

    t104 = (x453<=((x454&x455)-x456));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x457 = INT16_MIN;
	uint16_t x458 = 4U;
	int32_t x459 = INT32_MAX;
	uint16_t x460 = 3030U;
	int32_t t105 = 5471;

    t105 = (x457<=((x458&x459)-x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x461 = -1;
	int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t106 = 7671893;

    t106 = (x461<=((x462&x463)-x464));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x466 = 1U;
	static volatile int32_t x468 = INT32_MAX;
	volatile int32_t t107 = -10;

    t107 = (x465<=((x466&x467)-x468));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x470 = 2U;
	int32_t x471 = INT32_MIN;
	int32_t t108 = 27873;

    t108 = (x469<=((x470&x471)-x472));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x473 = 1U;
	uint8_t x474 = 6U;
	volatile int32_t x475 = -1;
	int64_t x476 = INT64_MAX;
	int32_t t109 = 12634;

    t109 = (x473<=((x474&x475)-x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x477 = 385U;
	static volatile int32_t x478 = INT32_MAX;
	int32_t x479 = 1;
	int32_t t110 = 17699592;

    t110 = (x477<=((x478&x479)-x480));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x481 = -229749910251292171LL;
	static volatile int64_t x483 = 74LL;
	volatile int32_t x484 = -5732;
	int32_t t111 = -8475236;

    t111 = (x481<=((x482&x483)-x484));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x485 = -562787703926432LL;
	int8_t x487 = INT8_MIN;
	volatile uint16_t x488 = UINT16_MAX;
	static volatile int32_t t112 = 450512;

    t112 = (x485<=((x486&x487)-x488));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x489 = -1;
	int32_t x490 = INT32_MIN;
	int64_t x492 = INT64_MAX;
	int32_t t113 = 26725992;

    t113 = (x489<=((x490&x491)-x492));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x493 = INT8_MAX;
	volatile uint64_t x494 = 77537663740652LLU;
	uint32_t x495 = 28062U;
	volatile int32_t x496 = -601801;

    t114 = (x493<=((x494&x495)-x496));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x497 = 3U;
	uint64_t x498 = 15262466343205LLU;
	int32_t t115 = 126937;

    t115 = (x497<=((x498&x499)-x500));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x501 = 1;
	volatile int8_t x502 = INT8_MIN;
	static int16_t x504 = INT16_MIN;
	int32_t t116 = -1001903;

    t116 = (x501<=((x502&x503)-x504));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x505 = 19246948LLU;
	static int32_t x506 = INT32_MAX;
	static int64_t x507 = INT64_MIN;
	volatile int16_t x508 = 69;
	volatile int32_t t117 = 5007;

    t117 = (x505<=((x506&x507)-x508));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x509 = 4431U;
	uint64_t x510 = 494162LLU;
	uint32_t x511 = 0U;
	int8_t x512 = -1;
	int32_t t118 = -12308960;

    t118 = (x509<=((x510&x511)-x512));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x514 = UINT16_MAX;
	static int32_t x516 = INT32_MAX;

    t119 = (x513<=((x514&x515)-x516));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = -1;
	int8_t x518 = INT8_MAX;
	static int8_t x519 = -1;
	volatile uint32_t x520 = 1720U;
	static int32_t t120 = -500456;

    t120 = (x517<=((x518&x519)-x520));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x521 = 0U;
	static int16_t x522 = INT16_MIN;
	int32_t t121 = -3;

    t121 = (x521<=((x522&x523)-x524));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x526 = 54LLU;
	static int8_t x528 = -3;
	int32_t t122 = -101;

    t122 = (x525<=((x526&x527)-x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x529 = 233270U;
	int32_t x530 = INT32_MIN;
	static uint32_t x531 = 34831823U;
	static int16_t x532 = -1;
	static int32_t t123 = -1436;

    t123 = (x529<=((x530&x531)-x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x534 = 6625;
	int16_t x536 = -7312;
	volatile int32_t t124 = -102872;

    t124 = (x533<=((x534&x535)-x536));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x538 = -528;
	volatile int32_t t125 = -61233711;

    t125 = (x537<=((x538&x539)-x540));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x541 = -57;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MAX;
	static volatile int32_t t126 = -129614544;

    t126 = (x541<=((x542&x543)-x544));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x545 = 0U;
	volatile int64_t x546 = -1LL;
	int16_t x547 = INT16_MAX;
	static uint32_t x548 = UINT32_MAX;
	volatile int32_t t127 = 0;

    t127 = (x545<=((x546&x547)-x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x550 = INT32_MIN;
	uint32_t x551 = 1186332703U;
	int8_t x552 = INT8_MAX;

    t128 = (x549<=((x550&x551)-x552));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x554 = INT32_MIN;
	int64_t x555 = -767LL;
	uint64_t x556 = 4311435899865LLU;
	int32_t t129 = 35910582;

    t129 = (x553<=((x554&x555)-x556));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x557 = INT32_MIN;
	uint32_t x559 = 1435720396U;
	int32_t t130 = 438;

    t130 = (x557<=((x558&x559)-x560));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x562 = INT32_MIN;
	int64_t x563 = INT64_MIN;
	volatile int64_t x564 = -35919631057842304LL;

    t131 = (x561<=((x562&x563)-x564));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x565 = -1LL;
	uint32_t x566 = 2740U;
	volatile int32_t t132 = 40431622;

    t132 = (x565<=((x566&x567)-x568));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = -29380LL;
	uint8_t x570 = 10U;
	int8_t x571 = INT8_MIN;
	int32_t t133 = -2342;

    t133 = (x569<=((x570&x571)-x572));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x573 = INT16_MIN;
	static int32_t x574 = 10068114;
	uint32_t x575 = UINT32_MAX;
	volatile int32_t t134 = -1;

    t134 = (x573<=((x574&x575)-x576));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x577 = 110U;
	static volatile int32_t x578 = INT32_MIN;
	int64_t x579 = -1LL;
	int32_t x580 = 21754460;
	static volatile int32_t t135 = 21432;

    t135 = (x577<=((x578&x579)-x580));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x585 = -1LL;
	uint8_t x586 = 1U;
	static volatile uint32_t x587 = 4885798U;
	int32_t x588 = 932165231;

    t136 = (x585<=((x586&x587)-x588));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x589 = UINT32_MAX;
	int16_t x590 = -1;
	int16_t x591 = 0;
	volatile uint32_t x592 = 1360878106U;
	int32_t t137 = -64760483;

    t137 = (x589<=((x590&x591)-x592));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x595 = 1016U;
	static volatile uint32_t x596 = 13U;

    t138 = (x593<=((x594&x595)-x596));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x598 = -472911587124633LL;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = INT64_MAX;
	static int32_t t139 = 0;

    t139 = (x597<=((x598&x599)-x600));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x601 = -1;
	uint32_t x602 = 81U;
	volatile int16_t x603 = INT16_MAX;
	volatile int16_t x604 = -2;
	int32_t t140 = -2;

    t140 = (x601<=((x602&x603)-x604));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x609 = -1LL;
	uint64_t x611 = 28LLU;
	volatile uint16_t x612 = 13008U;
	int32_t t141 = -1543638;

    t141 = (x609<=((x610&x611)-x612));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x615 = INT64_MAX;
	uint32_t x616 = 33187184U;
	static volatile int32_t t142 = 1102;

    t142 = (x613<=((x614&x615)-x616));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x617 = -1;
	uint64_t x618 = 1437128461938548LLU;
	int64_t x619 = -1LL;
	int64_t x620 = -1LL;
	int32_t t143 = 105;

    t143 = (x617<=((x618&x619)-x620));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x621 = INT64_MAX;
	int32_t x622 = INT32_MAX;
	uint32_t x623 = 403U;
	static int32_t t144 = -25;

    t144 = (x621<=((x622&x623)-x624));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x625 = 2U;
	volatile uint64_t x626 = 26580289705254659LLU;
	static volatile int8_t x627 = INT8_MIN;
	volatile int32_t t145 = -1086122;

    t145 = (x625<=((x626&x627)-x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x630 = 91002123;
	int32_t t146 = -6023;

    t146 = (x629<=((x630&x631)-x632));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = INT64_MIN;
	volatile int8_t x634 = -1;
	int8_t x635 = INT8_MIN;
	volatile int32_t t147 = 1596;

    t147 = (x633<=((x634&x635)-x636));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x638 = INT8_MIN;
	int16_t x639 = INT16_MIN;
	static uint64_t x640 = UINT64_MAX;
	volatile int32_t t148 = 1;

    t148 = (x637<=((x638&x639)-x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x641 = 280094179U;
	int64_t x642 = -1LL;
	volatile uint8_t x643 = 3U;
	int32_t t149 = 1985;

    t149 = (x641<=((x642&x643)-x644));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x646 = 2U;
	uint16_t x647 = 680U;
	static uint32_t x648 = 626644U;
	int32_t t150 = -20;

    t150 = (x645<=((x646&x647)-x648));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x653 = INT64_MAX;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = UINT64_MAX;
	int64_t x656 = 3909607571943LL;
	static volatile int32_t t151 = 65874586;

    t151 = (x653<=((x654&x655)-x656));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x657 = 1088U;
	uint64_t x659 = 6132844539613758LLU;
	int16_t x660 = INT16_MIN;
	volatile int32_t t152 = 265895117;

    t152 = (x657<=((x658&x659)-x660));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x665 = INT16_MIN;
	uint64_t x666 = 119516133364941275LLU;

    t153 = (x665<=((x666&x667)-x668));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x670 = INT16_MAX;
	int32_t x671 = -104037;
	int8_t x672 = -1;
	int32_t t154 = 154307784;

    t154 = (x669<=((x670&x671)-x672));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x673 = -882731881502LL;
	int64_t x674 = -1LL;
	uint32_t x675 = 2351U;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t155 = 21494;

    t155 = (x673<=((x674&x675)-x676));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x677 = -72;
	static uint64_t x679 = UINT64_MAX;
	volatile int16_t x680 = 1;
	int32_t t156 = 0;

    t156 = (x677<=((x678&x679)-x680));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x681 = INT64_MIN;
	uint64_t x682 = 291329LLU;
	uint32_t x683 = UINT32_MAX;
	static int64_t x684 = INT64_MIN;

    t157 = (x681<=((x682&x683)-x684));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x685 = 0U;
	int64_t x688 = INT64_MIN;
	int32_t t158 = -101484042;

    t158 = (x685<=((x686&x687)-x688));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x689 = 471U;
	uint8_t x690 = 88U;
	uint8_t x691 = UINT8_MAX;
	static uint32_t x692 = 45U;
	int32_t t159 = 22261;

    t159 = (x689<=((x690&x691)-x692));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x695 = -1LL;
	uint32_t x696 = UINT32_MAX;

    t160 = (x693<=((x694&x695)-x696));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	int64_t x698 = -1LL;
	static uint64_t x699 = 163LLU;
	volatile int32_t t161 = 0;

    t161 = (x697<=((x698&x699)-x700));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x701 = -713LL;
	volatile int16_t x702 = INT16_MAX;
	int16_t x703 = -1;
	static uint8_t x704 = UINT8_MAX;

    t162 = (x701<=((x702&x703)-x704));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = INT32_MIN;
	uint64_t x706 = UINT64_MAX;
	int8_t x707 = -1;
	static uint64_t x708 = UINT64_MAX;
	int32_t t163 = 26900;

    t163 = (x705<=((x706&x707)-x708));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x709 = 366674915;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -8;
	int8_t x712 = -1;
	static int32_t t164 = -781966;

    t164 = (x709<=((x710&x711)-x712));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x713 = INT8_MIN;
	static int64_t x715 = -1LL;
	static volatile int32_t x716 = INT32_MAX;
	int32_t t165 = -82153708;

    t165 = (x713<=((x714&x715)-x716));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x717 = UINT64_MAX;
	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MAX;
	int8_t x720 = INT8_MIN;
	volatile int32_t t166 = 1;

    t166 = (x717<=((x718&x719)-x720));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x721 = 127U;
	int64_t x722 = INT64_MIN;
	int64_t x723 = 999297LL;
	volatile int32_t t167 = 125188697;

    t167 = (x721<=((x722&x723)-x724));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = -333;
	static uint64_t x728 = 935LLU;
	volatile int32_t t168 = 1945;

    t168 = (x725<=((x726&x727)-x728));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x729 = INT16_MIN;
	static int32_t x730 = -1;
	uint32_t x731 = 3U;
	static int32_t t169 = -1400;

    t169 = (x729<=((x730&x731)-x732));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x733 = -32;
	volatile uint64_t x734 = UINT64_MAX;
	volatile uint8_t x735 = UINT8_MAX;
	int32_t t170 = -121;

    t170 = (x733<=((x734&x735)-x736));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x738 = -1;
	int16_t x739 = -76;
	int64_t x740 = -1LL;

    t171 = (x737<=((x738&x739)-x740));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x741 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	static volatile int16_t x744 = INT16_MAX;
	static int32_t t172 = -17675;

    t172 = (x741<=((x742&x743)-x744));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x745 = 2032522270527LLU;
	uint8_t x746 = UINT8_MAX;
	int8_t x747 = -3;
	int32_t x748 = -69622;
	volatile int32_t t173 = 0;

    t173 = (x745<=((x746&x747)-x748));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x749 = INT32_MAX;
	volatile int16_t x751 = INT16_MAX;
	uint16_t x752 = 249U;
	volatile int32_t t174 = -358242;

    t174 = (x749<=((x750&x751)-x752));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x753 = 14;
	int16_t x754 = 1815;
	int64_t x755 = -33118499132LL;
	int8_t x756 = -1;

    t175 = (x753<=((x754&x755)-x756));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = -39;
	uint32_t x759 = 28U;
	volatile int32_t t176 = 0;

    t176 = (x757<=((x758&x759)-x760));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x761 = UINT64_MAX;
	uint16_t x762 = 19128U;
	static int16_t x763 = 2944;

    t177 = (x761<=((x762&x763)-x764));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x765 = INT32_MAX;
	uint16_t x766 = 1012U;
	uint8_t x767 = UINT8_MAX;
	volatile uint16_t x768 = 18606U;
	volatile int32_t t178 = -1847104;

    t178 = (x765<=((x766&x767)-x768));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x770 = UINT8_MAX;
	volatile int32_t t179 = 425292;

    t179 = (x769<=((x770&x771)-x772));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x773 = INT64_MIN;
	uint8_t x774 = UINT8_MAX;
	int32_t x775 = INT32_MAX;
	uint16_t x776 = 3013U;

    t180 = (x773<=((x774&x775)-x776));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x779 = -486087191LL;
	int8_t x780 = INT8_MIN;
	static int32_t t181 = 4431;

    t181 = (x777<=((x778&x779)-x780));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x782 = 51U;
	uint8_t x783 = 20U;
	int64_t x784 = 8122765011LL;
	static int32_t t182 = 57825;

    t182 = (x781<=((x782&x783)-x784));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x785 = 611;
	static volatile int16_t x786 = -1;
	int8_t x787 = INT8_MIN;
	int32_t t183 = 61958388;

    t183 = (x785<=((x786&x787)-x788));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x789 = 11034U;
	int8_t x790 = INT8_MIN;
	uint8_t x791 = UINT8_MAX;
	volatile uint64_t x792 = 4996013561186754LLU;
	int32_t t184 = -3978;

    t184 = (x789<=((x790&x791)-x792));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x794 = INT16_MAX;
	volatile int32_t x795 = -1;
	int16_t x796 = -4370;
	static int32_t t185 = -445;

    t185 = (x793<=((x794&x795)-x796));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x798 = -1;
	int8_t x799 = INT8_MIN;
	static volatile uint16_t x800 = 189U;
	int32_t t186 = 8176;

    t186 = (x797<=((x798&x799)-x800));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x801 = INT16_MIN;
	static int64_t x802 = INT64_MIN;
	uint16_t x803 = 7386U;
	static int16_t x804 = 2219;
	static int32_t t187 = 110;

    t187 = (x801<=((x802&x803)-x804));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x807 = 746067664LL;
	volatile int8_t x808 = 13;
	int32_t t188 = 150356;

    t188 = (x805<=((x806&x807)-x808));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x809 = 1U;
	static uint32_t x810 = UINT32_MAX;
	int32_t x811 = -133270101;
	int32_t t189 = 0;

    t189 = (x809<=((x810&x811)-x812));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x813 = INT8_MIN;
	uint32_t x814 = UINT32_MAX;
	volatile int32_t t190 = -972;

    t190 = (x813<=((x814&x815)-x816));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x817 = INT64_MIN;
	static int16_t x818 = 27;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t191 = 33;

    t191 = (x817<=((x818&x819)-x820));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x822 = INT32_MIN;
	int8_t x823 = INT8_MIN;
	int32_t x824 = -14987;
	int32_t t192 = 10;

    t192 = (x821<=((x822&x823)-x824));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x825 = -20;
	uint64_t x826 = UINT64_MAX;
	volatile int32_t x827 = INT32_MAX;
	static int32_t x828 = INT32_MIN;
	volatile int32_t t193 = 56689;

    t193 = (x825<=((x826&x827)-x828));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x829 = -398;
	volatile int32_t t194 = 28;

    t194 = (x829<=((x830&x831)-x832));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x834 = -4LL;
	uint64_t x835 = UINT64_MAX;
	static volatile int8_t x836 = 1;

    t195 = (x833<=((x834&x835)-x836));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x837 = 8522103LL;
	int64_t x838 = INT64_MIN;
	static volatile uint32_t x839 = UINT32_MAX;
	int16_t x840 = 1227;
	int32_t t196 = 15;

    t196 = (x837<=((x838&x839)-x840));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x841 = 47435537;
	uint16_t x842 = 326U;
	int64_t x843 = INT64_MIN;
	volatile int32_t t197 = 2760210;

    t197 = (x841<=((x842&x843)-x844));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x845 = -1;
	static uint32_t x846 = 1244617648U;
	int8_t x847 = INT8_MIN;
	static int32_t t198 = -28972;

    t198 = (x845<=((x846&x847)-x848));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x849 = 80658956932LLU;
	static uint16_t x850 = 193U;
	volatile uint32_t x851 = 219654885U;
	int16_t x852 = INT16_MIN;
	static int32_t t199 = -8;

    t199 = (x849<=((x850&x851)-x852));

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

