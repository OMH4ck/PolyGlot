
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

static uint32_t x4 = 2U;
static volatile int16_t x7 = -1;
uint64_t x13 = 1299LLU;
int8_t x14 = 14;
static int16_t x18 = -10;
static int16_t x19 = INT16_MIN;
uint32_t x26 = UINT32_MAX;
int16_t x31 = 0;
int8_t x36 = -31;
volatile int32_t x43 = INT32_MIN;
volatile int32_t t10 = 1;
uint16_t x52 = 1597U;
int32_t t12 = -2;
int32_t x53 = -1;
int16_t x56 = INT16_MAX;
volatile int32_t x59 = INT32_MAX;
static volatile int32_t x62 = INT32_MIN;
volatile uint8_t x65 = UINT8_MAX;
volatile int64_t x67 = 26443425629LL;
int8_t x68 = 3;
int8_t x79 = INT8_MAX;
volatile int16_t x91 = -1;
int8_t x93 = 34;
uint16_t x94 = 6U;
int16_t x105 = INT16_MIN;
int8_t x109 = -1;
static volatile int32_t t27 = 23498;
static int32_t t29 = 1036355264;
int8_t x127 = -3;
volatile int32_t t31 = 1049524;
volatile int32_t t32 = 0;
uint64_t x133 = 4397184172LLU;
uint8_t x136 = 5U;
int16_t x141 = -1;
volatile int32_t t35 = -25287;
static volatile uint64_t x150 = UINT64_MAX;
static volatile uint32_t x152 = 3U;
static uint32_t x155 = 101545U;
int32_t t38 = -1997486;
uint8_t x163 = UINT8_MAX;
uint64_t x164 = 3984718766409379687LLU;
uint64_t x165 = 75950917026567LLU;
volatile int32_t t41 = -870;
int16_t x169 = 9;
uint64_t x171 = UINT64_MAX;
uint16_t x178 = 1982U;
volatile int8_t x180 = INT8_MIN;
volatile int16_t x189 = INT16_MAX;
int16_t x204 = -19;
static int8_t x207 = 0;
volatile int8_t x208 = INT8_MIN;
static int32_t t51 = -6;
int32_t x211 = INT32_MIN;
int32_t t52 = 1453967;
static int16_t x215 = 2;
int32_t t53 = 107;
int64_t x218 = INT64_MAX;
uint32_t x220 = 768U;
uint64_t x222 = 127LLU;
int8_t x224 = -12;
int32_t t55 = -2;
uint64_t x225 = 1LLU;
int32_t x226 = INT32_MIN;
int64_t x231 = 1768069814918185514LL;
int64_t x238 = -8841914239160621LL;
uint32_t x242 = 287394620U;
int8_t x246 = INT8_MAX;
static int8_t x248 = 1;
volatile uint64_t x259 = 13836111460112LLU;
int64_t x268 = 2007633754LL;
int32_t x271 = -250246;
volatile int64_t x282 = INT64_MIN;
int64_t x283 = INT64_MAX;
static int32_t x287 = INT32_MIN;
int64_t x290 = -1LL;
volatile int32_t t72 = 663323;
static uint8_t x296 = UINT8_MAX;
static int32_t t73 = 85408;
uint8_t x302 = 3U;
static uint8_t x313 = 3U;
int8_t x315 = -1;
static int16_t x327 = INT16_MAX;
int32_t t81 = -1005992714;
int32_t x330 = INT32_MAX;
int8_t x332 = INT8_MAX;
volatile int32_t t82 = 19477;
int16_t x343 = 11;
int32_t t86 = -246051;
volatile int8_t x361 = INT8_MAX;
volatile int32_t t90 = 5690;
uint16_t x367 = 6U;
uint8_t x371 = 12U;
static int32_t t92 = 0;
uint64_t x379 = UINT64_MAX;
uint32_t x381 = 1606449771U;
static int8_t x383 = -1;
int64_t x389 = 930348418050860LL;
volatile uint32_t x399 = 2493127U;
volatile int32_t t99 = 926;
int8_t x402 = INT8_MIN;
int32_t t100 = 1784475;
uint32_t x408 = 2501U;
volatile int32_t x409 = -170536862;
int32_t t102 = 37191296;
int32_t x427 = 599;
uint32_t x430 = 1701U;
volatile int16_t x432 = 3;
volatile int32_t t107 = -49;
uint16_t x433 = 3U;
int16_t x438 = INT16_MAX;
int8_t x439 = INT8_MIN;
static volatile int8_t x445 = -3;
static int32_t t111 = 11041;
uint32_t x456 = 3U;
uint16_t x460 = 61U;
volatile int8_t x466 = 1;
uint64_t x469 = 3LLU;
int64_t x470 = INT64_MIN;
volatile int32_t t118 = -29;
uint32_t x477 = 829007U;
volatile int64_t x482 = 478970094LL;
int32_t t122 = 649;
uint16_t x495 = UINT16_MAX;
int64_t x503 = INT64_MAX;
int8_t x517 = -1;
uint32_t x520 = 1191U;
uint16_t x524 = 38U;
static volatile int32_t t130 = 21861;
int32_t x526 = INT32_MAX;
volatile int32_t t131 = 179;
int64_t x531 = -1LL;
static volatile uint16_t x539 = 14004U;
static volatile int32_t t136 = -79;
int64_t x554 = -1LL;
int32_t x563 = -1;
uint8_t x575 = 23U;
static volatile int64_t x577 = INT64_MIN;
uint32_t x586 = UINT32_MAX;
volatile int8_t x587 = -1;
uint64_t x588 = 1391096LLU;
int16_t x591 = 25;
int8_t x595 = -1;
int32_t t148 = -121279;
int64_t x598 = INT64_MIN;
uint8_t x599 = 3U;
int16_t x606 = INT16_MIN;
int64_t x608 = INT64_MIN;
static uint8_t x609 = 21U;
static int32_t t153 = 96385336;
int32_t x617 = 4;
int32_t x619 = -1;
static uint8_t x627 = 124U;
uint8_t x628 = UINT8_MAX;
volatile uint64_t x630 = 483397324735434LLU;
static int64_t x636 = INT64_MIN;
static int8_t x638 = INT8_MIN;
volatile int32_t x644 = -1;
static int64_t x646 = -58387618361958LL;
volatile int16_t x647 = INT16_MIN;
int32_t t165 = -9266605;
int16_t x668 = INT16_MIN;
uint64_t x670 = 199574775154LLU;
int8_t x674 = -1;
uint16_t x676 = 31U;
int8_t x678 = INT8_MAX;
int16_t x679 = 28;
volatile uint32_t x690 = UINT32_MAX;
volatile int16_t x692 = -1777;
static uint32_t x693 = 53095U;
int32_t x697 = -1;
int64_t x702 = -1LL;
int64_t x706 = -1LL;
static int32_t t177 = -546683;
int32_t x721 = INT32_MIN;
static int32_t t181 = -1;
static int8_t x732 = 47;
uint8_t x736 = 8U;
uint64_t x737 = 1217045187609LLU;
uint32_t x747 = UINT32_MAX;
int8_t x753 = -4;
int16_t x758 = INT16_MIN;
int16_t x764 = -36;
static uint64_t x767 = 1858286561729604LLU;
int64_t x773 = INT64_MAX;
volatile uint32_t x776 = 12321U;
static volatile uint32_t x780 = 3U;
uint8_t x781 = 1U;
uint32_t x784 = 39U;
volatile int32_t t195 = 55;
uint16_t x785 = 1279U;
int32_t t196 = 7;
static int16_t x791 = INT16_MIN;
int32_t t197 = -113;
uint64_t x793 = 0LLU;
uint8_t x794 = UINT8_MAX;
int32_t x797 = 69;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static volatile uint8_t x2 = 0U;
	int32_t x3 = INT32_MAX;
	volatile int32_t t0 = -201587377;

    t0 = (x1<=((x2==x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 3U;
	static int8_t x6 = -9;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 24;

    t1 = (x5<=((x6==x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint16_t x10 = 44U;
	uint32_t x11 = 1841854802U;
	int32_t x12 = -1;
	static volatile int32_t t2 = -102235;

    t2 = (x9<=((x10==x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -487065;

    t3 = (x13<=((x14==x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	static int64_t x20 = -1LL;
	volatile int32_t t4 = 0;

    t4 = (x17<=((x18==x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static volatile int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = 1;

    t5 = (x21<=((x22==x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	static int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 80505LLU;
	volatile int32_t t6 = -63741;

    t6 = (x25<=((x26==x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	static int8_t x30 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 6;

    t7 = (x29<=((x30==x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 48U;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	volatile int32_t t8 = 47581;

    t8 = (x33<=((x34==x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	int8_t x39 = -1;
	volatile int64_t x40 = -1857554761205657LL;
	int32_t t9 = -2;

    t9 = (x37<=((x38==x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 1800U;
	uint8_t x42 = 25U;
	volatile int64_t x44 = INT64_MAX;

    t10 = (x41<=((x42==x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = 453U;
	static int64_t x48 = INT64_MAX;
	static volatile int32_t t11 = 247918655;

    t11 = (x45<=((x46==x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 6863U;
	uint16_t x50 = 2U;
	int32_t x51 = 7325604;

    t12 = (x49<=((x50==x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = 15987;
	static volatile int32_t x55 = 127;
	static volatile int32_t t13 = 151855358;

    t13 = (x53<=((x54==x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	static volatile int8_t x58 = INT8_MIN;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -14491;

    t14 = (x57<=((x58==x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = -15;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MAX;
	static volatile int32_t t15 = 0;

    t15 = (x61<=((x62==x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = 1;
	int32_t t16 = 197438840;

    t16 = (x65<=((x66==x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int16_t x70 = 1;
	int64_t x71 = INT64_MAX;
	int8_t x72 = -1;
	static int32_t t17 = 15454;

    t17 = (x69<=((x70==x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static int64_t x74 = INT64_MAX;
	uint64_t x75 = UINT64_MAX;
	static int64_t x76 = -1LL;
	int32_t t18 = 66;

    t18 = (x73<=((x74==x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	static int32_t x78 = 385425;
	static volatile int8_t x80 = INT8_MAX;
	int32_t t19 = -973153562;

    t19 = (x77<=((x78==x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 18U;
	int16_t x82 = 23;
	int16_t x83 = INT16_MAX;
	volatile uint32_t x84 = UINT32_MAX;
	int32_t t20 = -281;

    t20 = (x81<=((x82==x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 42524208014LLU;
	volatile uint64_t x86 = 264052749837LLU;
	static int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = -3060479;

    t21 = (x85<=((x86==x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = -960;
	volatile uint16_t x92 = 1336U;
	volatile int32_t t22 = 28997;

    t22 = (x89<=((x90==x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x95 = INT8_MIN;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -46;

    t23 = (x93<=((x94==x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -59;
	static int32_t x98 = INT32_MIN;
	static uint64_t x99 = 69519837224500600LLU;
	static int16_t x100 = -1;
	int32_t t24 = 13834;

    t24 = (x97<=((x98==x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	static int64_t x102 = -55507066LL;
	int64_t x103 = 161809704953LL;
	int64_t x104 = -1LL;
	int32_t t25 = -10;

    t25 = (x101<=((x102==x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x106 = INT32_MIN;
	volatile int32_t x107 = INT32_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -5554;

    t26 = (x105<=((x106==x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = 5U;
	static int64_t x111 = INT64_MIN;
	volatile int16_t x112 = -1;

    t27 = (x109<=((x110==x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = 27;
	int32_t x115 = INT32_MAX;
	uint32_t x116 = 3U;
	int32_t t28 = 1;

    t28 = (x113<=((x114==x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	static int16_t x118 = 0;
	static uint32_t x119 = UINT32_MAX;
	static int64_t x120 = -1849LL;

    t29 = (x117<=((x118==x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MAX;
	static volatile int16_t x122 = -2284;
	int64_t x123 = INT64_MIN;
	volatile uint32_t x124 = UINT32_MAX;
	static int32_t t30 = 71;

    t30 = (x121<=((x122==x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MAX;
	uint8_t x128 = UINT8_MAX;

    t31 = (x125<=((x126==x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	uint32_t x130 = 927U;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;

    t32 = (x129<=((x130==x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = UINT64_MAX;
	volatile int8_t x135 = -1;
	int32_t t33 = 16735262;

    t33 = (x133<=((x134==x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -1;
	static int8_t x138 = INT8_MIN;
	uint16_t x139 = 2013U;
	int64_t x140 = 819LL;
	int32_t t34 = 1440778;

    t34 = (x137<=((x138==x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x142 = INT32_MAX;
	static uint32_t x143 = UINT32_MAX;
	int16_t x144 = -17;

    t35 = (x141<=((x142==x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	volatile int32_t x146 = INT32_MIN;
	static volatile int16_t x147 = -1;
	int16_t x148 = 3797;
	int32_t t36 = 237819;

    t36 = (x145<=((x146==x147)==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 196564LLU;
	int64_t x151 = INT64_MIN;
	volatile int32_t t37 = 29977;

    t37 = (x149<=((x150==x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	int64_t x156 = 5287044832501828LL;

    t38 = (x153<=((x154==x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = 0;
	int32_t t39 = -121798445;

    t39 = (x157<=((x158==x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 6276U;
	uint64_t x162 = 1673473409608LLU;
	int32_t t40 = -197066237;

    t40 = (x161<=((x162==x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x166 = 1797017063369621945LLU;
	int8_t x167 = 7;
	static int64_t x168 = -24127349539367706LL;

    t41 = (x165<=((x166==x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x170 = INT32_MIN;
	static uint8_t x172 = 106U;
	int32_t t42 = 221577445;

    t42 = (x169<=((x170==x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = -1LL;
	int32_t x174 = -160;
	uint8_t x175 = UINT8_MAX;
	volatile int32_t x176 = INT32_MIN;
	int32_t t43 = 587175158;

    t43 = (x173<=((x174==x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	volatile int32_t x179 = INT32_MIN;
	static int32_t t44 = 96;

    t44 = (x177<=((x178==x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = 12U;
	uint16_t x182 = 14U;
	uint32_t x183 = 21U;
	static int8_t x184 = 5;
	int32_t t45 = 2463400;

    t45 = (x181<=((x182==x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = INT8_MIN;
	int64_t x186 = 25833206714863LL;
	uint64_t x187 = UINT64_MAX;
	volatile int64_t x188 = -405818270LL;
	static int32_t t46 = 1;

    t46 = (x185<=((x186==x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -3;

    t47 = (x189<=((x190==x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 3292393U;
	uint32_t x194 = 113536026U;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -680715;

    t48 = (x193<=((x194==x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -504975;
	uint16_t x198 = 1U;
	static volatile int8_t x199 = 1;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -30231792;

    t49 = (x197<=((x198==x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	volatile int16_t x202 = 928;
	int16_t x203 = INT16_MAX;
	int32_t t50 = -460754782;

    t50 = (x201<=((x202==x203)==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	int16_t x206 = INT16_MIN;

    t51 = (x205<=((x206==x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -2384329120227914LL;
	volatile int8_t x210 = INT8_MIN;
	int32_t x212 = INT32_MAX;

    t52 = (x209<=((x210==x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x216 = -5589;

    t53 = (x213<=((x214==x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	uint64_t x219 = 257026185214861LLU;
	int32_t t54 = 774;

    t54 = (x217<=((x218==x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -63240863;
	int64_t x223 = INT64_MIN;

    t55 = (x221<=((x222==x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = INT64_MIN;
	static uint64_t x228 = 70896LLU;
	int32_t t56 = 203212;

    t56 = (x225<=((x226==x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	uint16_t x230 = 14U;
	static volatile int32_t x232 = -1;
	int32_t t57 = -86236;

    t57 = (x229<=((x230==x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = -1985497;
	int32_t x236 = -1153480;
	volatile int32_t t58 = 160790;

    t58 = (x233<=((x234==x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int64_t x239 = 1978970314378LL;
	static int8_t x240 = -2;
	static volatile int32_t t59 = 37;

    t59 = (x237<=((x238==x239)==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 47U;
	int16_t x243 = -302;
	volatile uint32_t x244 = 1001U;
	volatile int32_t t60 = -408279;

    t60 = (x241<=((x242==x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 113;
	uint64_t x247 = UINT64_MAX;
	static volatile int32_t t61 = -4;

    t61 = (x245<=((x246==x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	uint16_t x250 = 772U;
	int32_t x251 = 174649350;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 8764;

    t62 = (x249<=((x250==x251)==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = -108;
	uint32_t x254 = 40312U;
	volatile uint8_t x255 = 29U;
	static volatile int16_t x256 = 0;
	static volatile int32_t t63 = -14054386;

    t63 = (x253<=((x254==x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = -413;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 5;

    t64 = (x257<=((x258==x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	uint16_t x262 = 28U;
	int8_t x263 = INT8_MAX;
	static int64_t x264 = INT64_MIN;
	volatile int32_t t65 = 0;

    t65 = (x261<=((x262==x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 4830U;
	int16_t x266 = INT16_MAX;
	uint8_t x267 = 9U;
	volatile int32_t t66 = 18740;

    t66 = (x265<=((x266==x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -238949626LL;
	volatile uint32_t x270 = UINT32_MAX;
	uint64_t x272 = 5704637677LLU;
	static int32_t t67 = -418126;

    t67 = (x269<=((x270==x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = 30U;
	uint64_t x274 = 16306LLU;
	volatile int8_t x275 = INT8_MAX;
	static int64_t x276 = -1LL;
	int32_t t68 = -11462601;

    t68 = (x273<=((x274==x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int16_t x278 = 1;
	volatile int64_t x279 = INT64_MAX;
	static uint8_t x280 = 72U;
	int32_t t69 = -79;

    t69 = (x277<=((x278==x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -3431526;

    t70 = (x281<=((x282==x283)==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	static int8_t x286 = -1;
	uint32_t x288 = 31U;
	volatile int32_t t71 = -51478;

    t71 = (x285<=((x286==x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	static uint8_t x291 = 1U;
	int32_t x292 = -1;

    t72 = (x289<=((x290==x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	int64_t x294 = 21149634LL;
	int64_t x295 = INT64_MIN;

    t73 = (x293<=((x294==x295)==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	volatile int8_t x298 = -6;
	static int32_t x299 = -6;
	static int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = 937;

    t74 = (x297<=((x298==x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x301 = -1;
	static int8_t x303 = 5;
	volatile int16_t x304 = INT16_MIN;
	static volatile int32_t t75 = -2982;

    t75 = (x301<=((x302==x303)==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x305 = 155LLU;
	uint16_t x306 = UINT16_MAX;
	static int64_t x307 = INT64_MIN;
	volatile int64_t x308 = -6629685LL;
	int32_t t76 = -1;

    t76 = (x305<=((x306==x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -1LL;
	int64_t x310 = 4137LL;
	uint16_t x311 = 7417U;
	volatile uint16_t x312 = 7055U;
	int32_t t77 = -7;

    t77 = (x309<=((x310==x311)==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = -1;
	int32_t x316 = 3;
	volatile int32_t t78 = 937;

    t78 = (x313<=((x314==x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 0U;
	static int64_t x320 = 0LL;
	volatile int32_t t79 = 448595;

    t79 = (x317<=((x318==x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 27;
	static volatile int8_t x322 = INT8_MIN;
	uint32_t x323 = 22273787U;
	int8_t x324 = -1;
	volatile int32_t t80 = -53;

    t80 = (x321<=((x322==x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -50;
	int64_t x326 = -1672031616101465LL;
	volatile uint32_t x328 = 241126678U;

    t81 = (x325<=((x326==x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 22802U;
	int16_t x331 = INT16_MIN;

    t82 = (x329<=((x330==x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x333 = 681556594107932233LLU;
	int16_t x334 = 26;
	volatile int16_t x335 = INT16_MIN;
	volatile int32_t x336 = INT32_MAX;
	static int32_t t83 = -21713277;

    t83 = (x333<=((x334==x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	volatile int8_t x338 = INT8_MAX;
	int64_t x339 = 12LL;
	uint32_t x340 = 670386U;
	int32_t t84 = 68467;

    t84 = (x337<=((x338==x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	static int8_t x342 = -5;
	int32_t x344 = 1;
	int32_t t85 = 6;

    t85 = (x341<=((x342==x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = 0;
	int16_t x347 = INT16_MIN;
	static uint32_t x348 = UINT32_MAX;

    t86 = (x345<=((x346==x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	static int64_t x350 = -3593372472419LL;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = -1;
	int32_t t87 = 43;

    t87 = (x349<=((x350==x351)==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MAX;
	uint16_t x354 = 505U;
	static uint16_t x355 = 23U;
	int16_t x356 = -1197;
	volatile int32_t t88 = -79;

    t88 = (x353<=((x354==x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -5;
	static volatile int16_t x358 = INT16_MIN;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = 3;
	int32_t t89 = -689063;

    t89 = (x357<=((x358==x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = -1;
	int32_t x363 = 329917031;
	int8_t x364 = INT8_MIN;

    t90 = (x361<=((x362==x363)==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MIN;
	volatile int8_t x366 = INT8_MAX;
	int32_t x368 = INT32_MIN;
	static int32_t t91 = 244884;

    t91 = (x365<=((x366==x367)==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int16_t x370 = -1;
	int64_t x372 = INT64_MIN;

    t92 = (x369<=((x370==x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	uint64_t x374 = 181083312246475LLU;
	int64_t x375 = INT64_MIN;
	volatile uint32_t x376 = 39U;
	volatile int32_t t93 = 253;

    t93 = (x373<=((x374==x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	int8_t x378 = -1;
	uint16_t x380 = UINT16_MAX;
	static int32_t t94 = 7521;

    t94 = (x377<=((x378==x379)==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x382 = 51;
	int64_t x384 = INT64_MIN;
	static volatile int32_t t95 = 467804474;

    t95 = (x381<=((x382==x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MIN;
	int16_t x386 = -18;
	volatile int16_t x387 = 0;
	uint8_t x388 = 63U;
	volatile int32_t t96 = -240370359;

    t96 = (x385<=((x386==x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = -2126344514229299LL;
	int64_t x391 = INT64_MAX;
	static volatile int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -451590;

    t97 = (x389<=((x390==x391)==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = UINT64_MAX;
	static volatile int16_t x394 = -1;
	int64_t x395 = -1LL;
	static uint16_t x396 = UINT16_MAX;
	int32_t t98 = -40;

    t98 = (x393<=((x394==x395)==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 95642676LLU;
	volatile int16_t x398 = INT16_MAX;
	static int32_t x400 = -394053154;

    t99 = (x397<=((x398==x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	static volatile int8_t x403 = -1;
	volatile uint16_t x404 = UINT16_MAX;

    t100 = (x401<=((x402==x403)==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int16_t x406 = 1;
	volatile uint32_t x407 = 11U;
	volatile int32_t t101 = -52760135;

    t101 = (x405<=((x406==x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = 961;
	int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;

    t102 = (x409<=((x410==x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 24930651LLU;
	int64_t x414 = -1LL;
	int32_t x415 = -33076;
	volatile int16_t x416 = 2;
	int32_t t103 = -253781683;

    t103 = (x413<=((x414==x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = 14904554LL;
	int64_t x418 = INT64_MAX;
	int8_t x419 = -1;
	int32_t x420 = 2718;
	int32_t t104 = 4016124;

    t104 = (x417<=((x418==x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x421 = 31U;
	int16_t x422 = INT16_MIN;
	uint8_t x423 = 44U;
	static uint64_t x424 = 87585LLU;
	static volatile int32_t t105 = 5691401;

    t105 = (x421<=((x422==x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 1;
	int64_t x426 = -6LL;
	int16_t x428 = INT16_MIN;
	int32_t t106 = -7962178;

    t106 = (x425<=((x426==x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	int8_t x431 = -6;

    t107 = (x429<=((x430==x431)==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x434 = 125U;
	volatile int64_t x435 = INT64_MIN;
	int16_t x436 = -1;
	int32_t t108 = -5453856;

    t108 = (x433<=((x434==x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -370;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 2269;

    t109 = (x437<=((x438==x439)==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = 9117;
	static volatile int64_t x442 = 212494651673LL;
	uint16_t x443 = 986U;
	uint8_t x444 = 0U;
	int32_t t110 = -100935866;

    t110 = (x441<=((x442==x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x446 = INT64_MIN;
	volatile int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MAX;

    t111 = (x445<=((x446==x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = 1;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 429493;

    t112 = (x449<=((x450==x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x453 = -131;
	volatile int16_t x454 = INT16_MAX;
	int32_t x455 = INT32_MAX;
	volatile int32_t t113 = -129115601;

    t113 = (x453<=((x454==x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int8_t x458 = -1;
	uint32_t x459 = 1722529707U;
	static volatile int32_t t114 = -124;

    t114 = (x457<=((x458==x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = 108534680;
	uint8_t x462 = 127U;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = -211;
	volatile int32_t t115 = 4712;

    t115 = (x461<=((x462==x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = -254403LL;
	static int16_t x467 = INT16_MAX;
	static int16_t x468 = -2;
	int32_t t116 = 40;

    t116 = (x465<=((x466==x467)==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x471 = INT8_MAX;
	int32_t x472 = -1;
	volatile int32_t t117 = 966;

    t117 = (x469<=((x470==x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MIN;
	int64_t x475 = 156542LL;
	int16_t x476 = -1;

    t118 = (x473<=((x474==x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x478 = 6U;
	uint8_t x479 = UINT8_MAX;
	int16_t x480 = -1;
	volatile int32_t t119 = -815;

    t119 = (x477<=((x478==x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	uint16_t x483 = 36U;
	int64_t x484 = INT64_MIN;
	int32_t t120 = 240229882;

    t120 = (x481<=((x482==x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 14;
	int16_t x486 = INT16_MAX;
	uint16_t x487 = UINT16_MAX;
	volatile int16_t x488 = INT16_MIN;
	int32_t t121 = 4780;

    t121 = (x485<=((x486==x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	uint64_t x490 = 526LLU;
	volatile uint8_t x491 = UINT8_MAX;
	int32_t x492 = INT32_MIN;

    t122 = (x489<=((x490==x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = UINT32_MAX;
	uint32_t x494 = UINT32_MAX;
	int64_t x496 = INT64_MAX;
	int32_t t123 = 77;

    t123 = (x493<=((x494==x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x497 = INT32_MIN;
	int64_t x498 = 134984531024LL;
	int32_t x499 = 1982409;
	int16_t x500 = INT16_MIN;
	int32_t t124 = -2;

    t124 = (x497<=((x498==x499)==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -1;
	static uint16_t x502 = 0U;
	volatile int8_t x504 = 4;
	volatile int32_t t125 = 4700338;

    t125 = (x501<=((x502==x503)==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 40;
	int16_t x506 = 13;
	int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = -2031854;

    t126 = (x505<=((x506==x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MIN;
	int64_t x510 = -63945152LL;
	static volatile int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MAX;
	static volatile int32_t t127 = -7;

    t127 = (x509<=((x510==x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 0;
	static volatile uint8_t x514 = UINT8_MAX;
	static int16_t x515 = INT16_MIN;
	int16_t x516 = -527;
	volatile int32_t t128 = -1577725;

    t128 = (x513<=((x514==x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = -6392082;
	static uint64_t x519 = UINT64_MAX;
	static int32_t t129 = -899352;

    t129 = (x517<=((x518==x519)==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	uint64_t x522 = UINT64_MAX;
	static int64_t x523 = INT64_MIN;

    t130 = (x521<=((x522==x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 0U;
	uint16_t x527 = 1U;
	int8_t x528 = -1;

    t131 = (x525<=((x526==x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	int16_t x532 = -1;
	int32_t t132 = -15;

    t132 = (x529<=((x530==x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1910;
	static volatile int16_t x534 = INT16_MIN;
	static volatile int16_t x535 = INT16_MAX;
	static volatile uint32_t x536 = UINT32_MAX;
	int32_t t133 = 114112804;

    t133 = (x533<=((x534==x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = -1;
	volatile int64_t x540 = -1LL;
	volatile int32_t t134 = -18799;

    t134 = (x537<=((x538==x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	static uint16_t x542 = 16096U;
	static volatile uint32_t x543 = 119282U;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -23833008;

    t135 = (x541<=((x542==x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 235830296256LL;
	uint8_t x546 = 51U;
	volatile int8_t x547 = -1;
	volatile int64_t x548 = INT64_MIN;

    t136 = (x545<=((x546==x547)==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -1560;
	uint8_t x550 = 6U;
	uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MAX;
	volatile int32_t t137 = 565174242;

    t137 = (x549<=((x550==x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = -1LL;
	int64_t x555 = 432977LL;
	static int8_t x556 = INT8_MIN;
	volatile int32_t t138 = -254967;

    t138 = (x553<=((x554==x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -6223857818229LL;
	static uint64_t x558 = 15743688950LLU;
	int32_t x559 = INT32_MAX;
	uint64_t x560 = 1LLU;
	static int32_t t139 = 1;

    t139 = (x557<=((x558==x559)==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = -1LL;
	static uint32_t x562 = 342133U;
	static volatile int32_t x564 = 2362;
	volatile int32_t t140 = -562531;

    t140 = (x561<=((x562==x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = 11574;
	int64_t x566 = -1LL;
	int8_t x567 = -5;
	volatile int8_t x568 = 1;
	int32_t t141 = -4809;

    t141 = (x565<=((x566==x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 70340378546723LLU;
	int64_t x570 = 3LL;
	uint64_t x571 = 2770LLU;
	int8_t x572 = -1;
	static volatile int32_t t142 = 7;

    t142 = (x569<=((x570==x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x574 = -1;
	int16_t x576 = -16150;
	int32_t t143 = -225;

    t143 = (x573<=((x574==x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x578 = 1LLU;
	uint16_t x579 = 1U;
	uint8_t x580 = 27U;
	int32_t t144 = -318;

    t144 = (x577<=((x578==x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 1;
	int16_t x582 = -1;
	uint64_t x583 = UINT64_MAX;
	int64_t x584 = -352LL;
	volatile int32_t t145 = -7;

    t145 = (x581<=((x582==x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	volatile int32_t t146 = 538647758;

    t146 = (x585<=((x586==x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = UINT64_MAX;
	uint8_t x590 = 1U;
	volatile int64_t x592 = INT64_MIN;
	volatile int32_t t147 = 363406171;

    t147 = (x589<=((x590==x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -101573LL;
	int16_t x594 = INT16_MIN;
	uint64_t x596 = 371LLU;

    t148 = (x593<=((x594==x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	volatile int32_t t149 = 1594;

    t149 = (x597<=((x598==x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x601 = -31;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = INT64_MIN;
	volatile int64_t x604 = -250066283LL;
	static int32_t t150 = -368;

    t150 = (x601<=((x602==x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 259315094913461LL;
	int64_t x607 = INT64_MIN;
	volatile int32_t t151 = -24;

    t151 = (x605<=((x606==x607)==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = INT8_MIN;
	int16_t x611 = 623;
	static uint8_t x612 = 7U;
	volatile int32_t t152 = 12478;

    t152 = (x609<=((x610==x611)==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = 40U;
	int8_t x614 = 3;
	uint16_t x615 = 19U;
	volatile uint8_t x616 = 1U;

    t153 = (x613<=((x614==x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = INT8_MAX;
	int16_t x620 = INT16_MIN;
	static volatile int32_t t154 = 495154984;

    t154 = (x617<=((x618==x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	uint64_t x622 = 480699544881706296LLU;
	uint16_t x623 = UINT16_MAX;
	int8_t x624 = -1;
	int32_t t155 = -1004;

    t155 = (x621<=((x622==x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 30590269LLU;
	int16_t x626 = INT16_MAX;
	volatile int32_t t156 = 19963555;

    t156 = (x625<=((x626==x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	uint64_t x631 = UINT64_MAX;
	int64_t x632 = 4241975872109283LL;
	volatile int32_t t157 = -258;

    t157 = (x629<=((x630==x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x634 = -1;
	uint64_t x635 = 23529222572321LLU;
	int32_t t158 = -217309;

    t158 = (x633<=((x634==x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int32_t x639 = 233916;
	int64_t x640 = INT64_MAX;
	int32_t t159 = 132;

    t159 = (x637<=((x638==x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 52U;
	int16_t x642 = 643;
	uint64_t x643 = 33389767374448332LLU;
	int32_t t160 = 3;

    t160 = (x641<=((x642==x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 11;
	static uint16_t x648 = UINT16_MAX;
	volatile int32_t t161 = 3309659;

    t161 = (x645<=((x646==x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int32_t x650 = -1;
	int32_t x651 = INT32_MIN;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = -4519;

    t162 = (x649<=((x650==x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 21U;
	int8_t x654 = -56;
	volatile int64_t x655 = 1LL;
	int8_t x656 = 48;
	int32_t t163 = 545264933;

    t163 = (x653<=((x654==x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int32_t x658 = INT32_MIN;
	static uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MIN;
	int32_t t164 = -333451;

    t164 = (x657<=((x658==x659)==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 3U;
	uint32_t x662 = 384981U;
	static uint64_t x663 = 4839983462125669750LLU;
	static uint32_t x664 = 80U;

    t165 = (x661<=((x662==x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int16_t x666 = INT16_MAX;
	int64_t x667 = -2264749820625616056LL;
	volatile int32_t t166 = -1;

    t166 = (x665<=((x666==x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -59;
	int16_t x671 = 13635;
	int16_t x672 = 1548;
	volatile int32_t t167 = 792446453;

    t167 = (x669<=((x670==x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x673 = 72U;
	int8_t x675 = INT8_MIN;
	int32_t t168 = -3121549;

    t168 = (x673<=((x674==x675)==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x677 = 12;
	volatile uint16_t x680 = 14241U;
	volatile int32_t t169 = 112963394;

    t169 = (x677<=((x678==x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	volatile int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MIN;
	int32_t t170 = -15834;

    t170 = (x681<=((x682==x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = 0;
	int16_t x686 = INT16_MIN;
	static int16_t x687 = -1;
	volatile uint16_t x688 = 2U;
	volatile int32_t t171 = -910945;

    t171 = (x685<=((x686==x687)==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 6956;
	int16_t x691 = INT16_MAX;
	volatile int32_t t172 = 7892335;

    t172 = (x689<=((x690==x691)==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x694 = UINT16_MAX;
	int64_t x695 = 28601LL;
	int32_t x696 = -1;
	volatile int32_t t173 = -105864;

    t173 = (x693<=((x694==x695)==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x698 = INT16_MAX;
	static int32_t x699 = 15223565;
	int64_t x700 = INT64_MIN;
	int32_t t174 = 21;

    t174 = (x697<=((x698==x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -1LL;
	static int32_t x703 = INT32_MIN;
	volatile int32_t x704 = 185274;
	int32_t t175 = 100101;

    t175 = (x701<=((x702==x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 2U;
	static int16_t x707 = INT16_MAX;
	static uint8_t x708 = 39U;
	static volatile int32_t t176 = 192668373;

    t176 = (x705<=((x706==x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	uint16_t x710 = UINT16_MAX;
	int64_t x711 = INT64_MAX;
	int16_t x712 = INT16_MIN;

    t177 = (x709<=((x710==x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MIN;
	static int16_t x714 = INT16_MIN;
	int32_t x715 = 805396853;
	volatile int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -1;

    t178 = (x713<=((x714==x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	int64_t x718 = INT64_MAX;
	static int16_t x719 = 975;
	static int16_t x720 = -1;
	volatile int32_t t179 = -1804;

    t179 = (x717<=((x718==x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x722 = 98U;
	int16_t x723 = INT16_MIN;
	int32_t x724 = INT32_MAX;
	static volatile int32_t t180 = 58050;

    t180 = (x721<=((x722==x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MAX;
	volatile int8_t x727 = 10;
	volatile int8_t x728 = -1;

    t181 = (x725<=((x726==x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 0;
	volatile int8_t x730 = -28;
	int8_t x731 = INT8_MAX;
	int32_t t182 = 0;

    t182 = (x729<=((x730==x731)==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	volatile int16_t x734 = INT16_MAX;
	uint8_t x735 = UINT8_MAX;
	int32_t t183 = -8318878;

    t183 = (x733<=((x734==x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x738 = INT8_MIN;
	volatile int16_t x739 = INT16_MIN;
	int64_t x740 = INT64_MAX;
	int32_t t184 = 16499854;

    t184 = (x737<=((x738==x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x741 = INT8_MAX;
	int8_t x742 = -1;
	volatile int8_t x743 = INT8_MIN;
	volatile uint32_t x744 = UINT32_MAX;
	int32_t t185 = 199604;

    t185 = (x741<=((x742==x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	static int32_t x746 = INT32_MIN;
	int8_t x748 = INT8_MAX;
	volatile int32_t t186 = -447991048;

    t186 = (x745<=((x746==x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x749 = -1664;
	int8_t x750 = -1;
	volatile int64_t x751 = 7987562019LL;
	volatile int16_t x752 = 721;
	static volatile int32_t t187 = -54;

    t187 = (x749<=((x750==x751)==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x754 = 143027LLU;
	int16_t x755 = -3;
	static int64_t x756 = INT64_MIN;
	int32_t t188 = -465;

    t188 = (x753<=((x754==x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = 270;
	static volatile int8_t x759 = INT8_MIN;
	volatile int64_t x760 = INT64_MAX;
	int32_t t189 = 27394;

    t189 = (x757<=((x758==x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	volatile uint32_t x762 = 1112373U;
	static int64_t x763 = INT64_MIN;
	volatile int32_t t190 = -436;

    t190 = (x761<=((x762==x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = 134670173;
	static volatile int64_t x766 = INT64_MIN;
	volatile uint16_t x768 = 818U;
	int32_t t191 = 1;

    t191 = (x765<=((x766==x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 301U;
	int64_t x770 = INT64_MIN;
	int64_t x771 = INT64_MIN;
	int16_t x772 = INT16_MAX;
	volatile int32_t t192 = 412;

    t192 = (x769<=((x770==x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x774 = -1;
	int32_t x775 = -1161;
	static volatile int32_t t193 = 1;

    t193 = (x773<=((x774==x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = -3594355LL;
	uint32_t x778 = 743627U;
	volatile int8_t x779 = 1;
	static int32_t t194 = -1;

    t194 = (x777<=((x778==x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MAX;
	volatile int16_t x783 = INT16_MIN;

    t195 = (x781<=((x782==x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x786 = 74U;
	int64_t x787 = 168422613876288LL;
	static volatile int32_t x788 = -1;

    t196 = (x785<=((x786==x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 6093U;
	int16_t x790 = INT16_MIN;
	int16_t x792 = 14;

    t197 = (x789<=((x790==x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x795 = UINT32_MAX;
	int8_t x796 = -38;
	volatile int32_t t198 = 1;

    t198 = (x793<=((x794==x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -29;
	int32_t x799 = -20;
	int32_t x800 = -14;
	volatile int32_t t199 = 0;

    t199 = (x797<=((x798==x799)==x800));

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

