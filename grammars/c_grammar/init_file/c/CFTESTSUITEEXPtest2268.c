
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

int16_t x1 = INT16_MIN;
volatile uint32_t x2 = 135U;
int8_t x3 = INT8_MIN;
static volatile int32_t x6 = -1;
static uint8_t x8 = UINT8_MAX;
uint64_t t1 = UINT64_MAX;
int64_t x14 = INT64_MIN;
uint16_t x15 = UINT16_MAX;
volatile int64_t t3 = INT64_MAX;
static int16_t x18 = INT16_MAX;
int8_t x21 = INT8_MIN;
int64_t x24 = -2LL;
int16_t x30 = INT16_MIN;
static int8_t x34 = INT8_MAX;
int8_t x36 = INT8_MIN;
volatile int64_t t8 = INT64_MIN;
uint64_t x38 = 101LLU;
volatile uint32_t t10 = 3U;
int64_t x56 = INT64_MAX;
static volatile uint64_t x58 = 268936190790LLU;
static int32_t x60 = -1;
int8_t x64 = 1;
static int64_t x68 = -1LL;
int8_t x75 = -1;
int64_t x85 = INT64_MIN;
static int8_t x92 = 6;
uint16_t x94 = UINT16_MAX;
int16_t x95 = INT16_MIN;
uint32_t x105 = UINT32_MAX;
volatile int32_t x107 = INT32_MAX;
int32_t x108 = INT32_MIN;
int64_t x109 = INT64_MAX;
int16_t x117 = INT16_MIN;
int8_t x121 = -54;
uint32_t x126 = UINT32_MAX;
volatile uint8_t x131 = UINT8_MAX;
uint32_t x140 = 48704389U;
static int32_t x146 = INT32_MIN;
int16_t x156 = INT16_MAX;
int64_t x161 = INT64_MIN;
int8_t x162 = -11;
int16_t x163 = INT16_MIN;
int8_t x165 = INT8_MIN;
int32_t x168 = INT32_MIN;
uint16_t x173 = 1U;
int32_t t43 = -78;
int8_t x179 = INT8_MAX;
int16_t x180 = -60;
int32_t t44 = -2096;
int64_t x184 = -27329420523803788LL;
static int16_t x189 = INT16_MIN;
static uint64_t x190 = 1724383LLU;
volatile int16_t x197 = 1;
uint16_t x205 = 995U;
uint8_t x211 = 93U;
volatile uint8_t x215 = UINT8_MAX;
uint64_t x216 = 1340868865463894451LLU;
uint32_t x223 = 37185216U;
volatile int32_t t55 = 7846312;
static volatile int32_t t56 = 1857;
volatile int32_t x229 = 755066829;
int16_t x233 = INT16_MIN;
int64_t x237 = -7LL;
int32_t x238 = -1772;
volatile int64_t x246 = -31552181182LL;
static int16_t x252 = INT16_MIN;
volatile int64_t t62 = INT64_MIN;
int8_t x257 = -1;
uint32_t x258 = UINT32_MAX;
int32_t t64 = 841030199;
volatile int8_t x263 = INT8_MAX;
int8_t x270 = INT8_MAX;
uint16_t x272 = 0U;
uint64_t x282 = 33340374741745LLU;
static uint64_t x283 = 6LLU;
uint64_t x285 = 113403447763LLU;
int8_t x291 = INT8_MIN;
static uint8_t x293 = UINT8_MAX;
uint64_t x295 = 34877430809790158LLU;
int32_t t74 = -2657719;
int32_t x311 = INT32_MIN;
int64_t x324 = INT64_MIN;
static int16_t x328 = 11;
volatile int64_t x329 = INT64_MIN;
int16_t x334 = INT16_MAX;
volatile int32_t x342 = -50380422;
uint8_t x343 = UINT8_MAX;
int16_t x344 = -11242;
static int32_t t86 = -734;
static int64_t x357 = -69540853LL;
volatile int64_t x362 = INT64_MAX;
int32_t x367 = -1;
int32_t x391 = -3;
int8_t x393 = -35;
int8_t x394 = -1;
int16_t x395 = 1634;
int32_t x396 = -1;
int32_t x400 = -318389;
volatile int32_t x403 = -6;
uint8_t x405 = UINT8_MAX;
uint64_t x410 = UINT64_MAX;
int32_t t102 = -752;
int16_t x414 = INT16_MIN;
uint32_t x415 = UINT32_MAX;
static uint64_t x416 = 93075587561147840LLU;
volatile int16_t x417 = INT16_MAX;
static uint8_t x426 = UINT8_MAX;
volatile uint16_t x431 = 5391U;
volatile int32_t t107 = -40239975;
static uint64_t x435 = 47045308970LLU;
volatile uint64_t x438 = 10LLU;
uint8_t x440 = UINT8_MAX;
static volatile uint64_t t109 = 1388087LLU;
static int8_t x442 = 30;
static int32_t x445 = INT32_MIN;
static volatile int16_t x451 = -572;
static int16_t x452 = 556;
int32_t x453 = INT32_MIN;
int32_t t113 = INT32_MIN;
int64_t x458 = 1304150198991LL;
uint32_t x463 = 20141858U;
uint64_t x467 = UINT64_MAX;
volatile int32_t t116 = 0;
static uint64_t x469 = UINT64_MAX;
volatile int8_t x470 = -45;
int64_t x474 = 358498990473LL;
uint8_t x475 = 15U;
int64_t t118 = 16395097825875984LL;
volatile uint16_t x486 = 5U;
int8_t x490 = -27;
int16_t x492 = INT16_MIN;
static int64_t t123 = INT64_MAX;
uint16_t x502 = 7U;
volatile int32_t x504 = -15991;
int32_t t125 = 1;
static int64_t x507 = -29LL;
volatile uint64_t x521 = 18LLU;
int16_t x523 = -1;
int8_t x537 = INT8_MIN;
static int16_t x542 = INT16_MIN;
int64_t x543 = INT64_MIN;
uint64_t x545 = UINT64_MAX;
static int64_t x548 = -22970286250625LL;
static volatile int64_t x549 = -1LL;
uint8_t x551 = 7U;
static int8_t x554 = INT8_MAX;
volatile int64_t x555 = INT64_MAX;
uint32_t x558 = 279U;
int16_t x559 = INT16_MIN;
uint64_t t140 = 3041LLU;
static uint16_t x569 = UINT16_MAX;
int8_t x571 = INT8_MIN;
static uint32_t x572 = 10467U;
uint8_t x573 = 66U;
static uint8_t x580 = 0U;
int8_t x587 = 0;
int64_t x589 = -1LL;
uint8_t x597 = 14U;
uint8_t x610 = 70U;
volatile int8_t x616 = INT8_MIN;
int64_t x617 = 37933910335LL;
uint64_t x622 = 196LLU;
static volatile int32_t t155 = -1417;
int16_t x625 = -1;
int64_t x627 = INT64_MIN;
int64_t x631 = INT64_MAX;
int8_t x637 = -24;
volatile int32_t t160 = INT32_MIN;
int64_t x647 = INT64_MAX;
uint64_t x651 = UINT64_MAX;
static uint64_t t163 = 274820785985601LLU;
int16_t x657 = INT16_MIN;
volatile int32_t t164 = 31581;
int32_t x662 = INT32_MIN;
uint8_t x670 = 115U;
int32_t x671 = -124909;
uint32_t x677 = UINT32_MAX;
volatile int32_t t170 = -6335314;
int32_t x685 = INT32_MIN;
uint32_t x687 = UINT32_MAX;
volatile uint64_t x691 = 6366269LLU;
static uint64_t t172 = 8093823574341637LLU;
static int16_t x699 = 409;
uint64_t x701 = 5180796888460853LLU;
uint64_t t175 = 559904540239684230LLU;
int64_t x705 = INT64_MIN;
static uint8_t x722 = 12U;
int64_t x724 = 6LL;
static uint8_t x727 = UINT8_MAX;
static int64_t t181 = -8081LL;
volatile int32_t x737 = INT32_MAX;
volatile int32_t x740 = -1;
int32_t t185 = -110835871;
volatile int16_t x745 = INT16_MIN;
uint8_t x749 = 123U;
uint8_t x751 = 58U;
int64_t x754 = 1671LL;
static volatile int16_t x759 = -1;
int32_t t189 = -535;
volatile uint8_t x765 = 40U;
int32_t t191 = 24456412;
int32_t x770 = 246;
volatile int32_t t192 = -418769;
static volatile int64_t x774 = -1LL;
static int32_t x776 = INT32_MIN;
int32_t t193 = -699226685;
uint64_t x777 = UINT64_MAX;
int16_t x786 = INT16_MIN;
int16_t x787 = -2;
static volatile int32_t t197 = -8;
uint32_t x793 = 15539773U;
int16_t x795 = -13;


void f0(void) {
    	int32_t x4 = 346546523;
	static int32_t t0 = -15465387;

    t0 = (x1^((x2&x3)==x4));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x7 = -1;

    t1 = (x5^((x6&x7)==x8));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 4922505074030242547LLU;
	int16_t x10 = 210;
	volatile int16_t x11 = INT16_MIN;
	volatile int8_t x12 = -1;
	uint64_t t2 = 285873382LLU;

    t2 = (x9^((x10&x11)==x12));

    if (t2 != 4922505074030242547LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MAX;
	uint8_t x16 = UINT8_MAX;

    t3 = (x13^((x14&x15)==x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	uint64_t x19 = 30677009802LLU;
	int32_t x20 = INT32_MIN;
	static int64_t t4 = 126785LL;

    t4 = (x17^((x18&x19)==x20));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x22 = 1260258921640LL;
	static uint64_t x23 = 2141016803668940LLU;
	volatile int32_t t5 = 3;

    t5 = (x21^((x22&x23)==x24));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -1;
	int64_t x26 = 35683277829768583LL;
	int32_t x27 = 1669096;
	uint64_t x28 = 17541LLU;
	volatile int32_t t6 = -393258757;

    t6 = (x25^((x26&x27)==x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 0U;
	static int64_t x31 = -41LL;
	static int16_t x32 = -27;
	volatile int32_t t7 = 14479;

    t7 = (x29^((x30&x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	static int8_t x35 = INT8_MIN;

    t8 = (x33^((x34&x35)==x36));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 5;
	int32_t x39 = 1342;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = 270866182;

    t9 = (x37^((x38&x39)==x40));

    if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 514908424U;
	static uint16_t x42 = UINT16_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MIN;

    t10 = (x41^((x42&x43)==x44));

    if (t10 != 514908424U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	static int8_t x46 = -61;
	int64_t x47 = -1LL;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 934368798;

    t11 = (x45^((x46&x47)==x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MAX;
	volatile int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = 24674;

    t12 = (x49^((x50&x51)==x52));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = -1;
	uint16_t x55 = 461U;
	int32_t t13 = 3;

    t13 = (x53^((x54&x55)==x56));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	volatile uint8_t x59 = 22U;
	int32_t t14 = 56313;

    t14 = (x57^((x58&x59)==x60));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	int32_t x62 = -1;
	volatile int32_t x63 = INT32_MIN;
	int32_t t15 = 1831283;

    t15 = (x61^((x62&x63)==x64));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	uint32_t x67 = 598333U;
	volatile int32_t t16 = -8485530;

    t16 = (x65^((x66&x67)==x68));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	uint64_t x72 = UINT64_MAX;
	static volatile int32_t t17 = INT32_MAX;

    t17 = (x69^((x70&x71)==x72));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = INT32_MIN;
	uint16_t x76 = 1858U;
	int32_t t18 = 253922;

    t18 = (x73^((x74&x75)==x76));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = 1U;
	static uint32_t x78 = UINT32_MAX;
	int64_t x79 = -13LL;
	int32_t x80 = INT32_MIN;
	static int32_t t19 = 105025;

    t19 = (x77^((x78&x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static uint8_t x82 = 0U;
	volatile int16_t x83 = INT16_MIN;
	int32_t x84 = -7237360;
	static int32_t t20 = -4264;

    t20 = (x81^((x82&x83)==x84));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -4491941;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int64_t t21 = INT64_MIN;

    t21 = (x85^((x86&x87)==x88));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int64_t x90 = -2255432190063654654LL;
	volatile uint32_t x91 = 2232181U;
	static int32_t t22 = INT32_MIN;

    t22 = (x89^((x90&x91)==x92));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -32526859LL;
	int64_t x96 = -1LL;
	int64_t t23 = -1154678LL;

    t23 = (x93^((x94&x95)==x96));

    if (t23 != -32526859LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x97 = 468U;
	int32_t x98 = -579378192;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MAX;
	int32_t t24 = -250;

    t24 = (x97^((x98&x99)==x100));

    if (t24 != 468) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MIN;
	int64_t x102 = -333323415674410042LL;
	uint8_t x103 = 0U;
	uint64_t x104 = 1133774170678706757LLU;
	volatile int32_t t25 = 2118;

    t25 = (x101^((x102&x103)==x104));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x106 = INT16_MIN;
	volatile uint32_t t26 = UINT32_MAX;

    t26 = (x105^((x106&x107)==x108));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = 0;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MAX;
	volatile int64_t t27 = INT64_MAX;

    t27 = (x109^((x110&x111)==x112));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MAX;
	int16_t x114 = 682;
	volatile uint64_t x115 = 168665LLU;
	uint16_t x116 = 61U;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x113^((x114&x115)==x116));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = INT8_MAX;
	int8_t x119 = 1;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 42;

    t29 = (x117^((x118&x119)==x120));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -1LL;
	int16_t x123 = INT16_MAX;
	static uint8_t x124 = 11U;
	int32_t t30 = 1363948;

    t30 = (x121^((x122&x123)==x124));

    if (t30 != -54) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x127 = 2636465604439LLU;
	int64_t x128 = 266197657878361LL;
	volatile int32_t t31 = -1;

    t31 = (x125^((x126&x127)==x128));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -316;
	int64_t x130 = -1LL;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -921;

    t32 = (x129^((x130&x131)==x132));

    if (t32 != -316) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 9U;
	int64_t x134 = -162655385036LL;
	int32_t x135 = 4;
	volatile int8_t x136 = INT8_MAX;
	int32_t t33 = -297;

    t33 = (x133^((x134&x135)==x136));

    if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -13393LL;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = 545U;
	int64_t t34 = 209303863793503140LL;

    t34 = (x137^((x138&x139)==x140));

    if (t34 != -13393LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	int8_t x142 = -1;
	volatile uint32_t x143 = 1764U;
	int16_t x144 = 5142;
	volatile int32_t t35 = 82696;

    t35 = (x141^((x142&x143)==x144));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 34303321;
	int64_t x147 = -3LL;
	volatile int64_t x148 = INT64_MIN;
	int32_t t36 = -2535;

    t36 = (x145^((x146&x147)==x148));

    if (t36 != 34303321) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	uint8_t x150 = 17U;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int64_t t37 = 185131755066LL;

    t37 = (x149^((x150&x151)==x152));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 7;
	uint64_t x154 = 26877LLU;
	int32_t x155 = INT32_MIN;
	volatile int32_t t38 = -129245;

    t38 = (x153^((x154&x155)==x156));

    if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MIN;
	static uint8_t x158 = 102U;
	int64_t x159 = -6898769221961738LL;
	static int8_t x160 = -1;
	int32_t t39 = 445;

    t39 = (x157^((x158&x159)==x160));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x164 = -1;
	static int64_t t40 = INT64_MIN;

    t40 = (x161^((x162&x163)==x164));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = -55839LL;
	int32_t x167 = INT32_MIN;
	static int32_t t41 = 1;

    t41 = (x165^((x166&x167)==x168));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 3415;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = -14056032;

    t42 = (x169^((x170&x171)==x172));

    if (t42 != 3415) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = UINT32_MAX;
	volatile int8_t x175 = 0;
	volatile int16_t x176 = -677;

    t43 = (x173^((x174&x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	uint64_t x178 = UINT64_MAX;

    t44 = (x177^((x178&x179)==x180));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x181 = UINT32_MAX;
	static int64_t x182 = -399LL;
	volatile uint16_t x183 = 330U;
	static volatile uint32_t t45 = UINT32_MAX;

    t45 = (x181^((x182&x183)==x184));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = -1;
	int8_t x186 = -6;
	int64_t x187 = -1LL;
	static int64_t x188 = -1LL;
	volatile int32_t t46 = 0;

    t46 = (x185^((x186&x187)==x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x191 = UINT64_MAX;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 0;

    t47 = (x189^((x190&x191)==x192));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = UINT64_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MAX;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x193^((x194&x195)==x196));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = 745U;
	static int16_t x199 = -8;
	uint8_t x200 = 33U;
	volatile int32_t t49 = -8230417;

    t49 = (x197^((x198&x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static uint8_t x202 = UINT8_MAX;
	volatile uint64_t x203 = 62LLU;
	volatile int32_t x204 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

    t50 = (x201^((x202&x203)==x204));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = 7U;
	int64_t x207 = -1192364LL;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = 415;

    t51 = (x205^((x206&x207)==x208));

    if (t51 != 995) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x210 = -14582926;
	uint32_t x212 = 1957226971U;
	static volatile int64_t t52 = INT64_MIN;

    t52 = (x209^((x210&x211)==x212));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	static volatile int8_t x214 = 3;
	int32_t t53 = -16990053;

    t53 = (x213^((x214&x215)==x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 12U;
	static int64_t x218 = INT64_MAX;
	uint8_t x219 = UINT8_MAX;
	volatile int8_t x220 = -2;
	volatile int32_t t54 = -1420;

    t54 = (x217^((x218&x219)==x220));

    if (t54 != 12) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	static int64_t x222 = -1LL;
	static volatile uint8_t x224 = 0U;

    t55 = (x221^((x222&x223)==x224));

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = 205;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 5618U;
	int64_t x228 = -1LL;

    t56 = (x225^((x226&x227)==x228));

    if (t56 != 205) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = -260;
	volatile int32_t x231 = INT32_MAX;
	uint16_t x232 = 1U;
	int32_t t57 = -30354;

    t57 = (x229^((x230&x231)==x232));

    if (t57 != 755066829) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MAX;
	int32_t x235 = -1;
	static int32_t x236 = 99409720;
	volatile int32_t t58 = -7;

    t58 = (x233^((x234&x235)==x236));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x239 = 2029383243138219LL;
	int32_t x240 = INT32_MIN;
	volatile int64_t t59 = -572LL;

    t59 = (x237^((x238&x239)==x240));

    if (t59 != -7LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	static int32_t t60 = 8532;

    t60 = (x241^((x242&x243)==x244));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x245 = 11U;
	uint8_t x247 = UINT8_MAX;
	static volatile int16_t x248 = -793;
	int32_t t61 = -161657;

    t61 = (x245^((x246&x247)==x248));

    if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint32_t x250 = 128585943U;
	uint16_t x251 = UINT16_MAX;

    t62 = (x249^((x250&x251)==x252));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 79603LLU;
	int16_t x254 = 0;
	volatile int8_t x255 = -1;
	int8_t x256 = 41;
	uint64_t t63 = 7466658442045LLU;

    t63 = (x253^((x254&x255)==x256));

    if (t63 != 79603LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x259 = UINT32_MAX;
	int16_t x260 = -1;

    t64 = (x257^((x258&x259)==x260));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -3;
	volatile uint16_t x262 = 8675U;
	int32_t x264 = 75103000;
	static volatile int32_t t65 = 0;

    t65 = (x261^((x262&x263)==x264));

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = 1217U;
	int8_t x268 = 5;
	uint64_t t66 = UINT64_MAX;

    t66 = (x265^((x266&x267)==x268));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x271 = 12;
	int64_t t67 = INT64_MIN;

    t67 = (x269^((x270&x271)==x272));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = UINT8_MAX;
	int32_t x274 = -1;
	static uint16_t x275 = UINT16_MAX;
	int32_t x276 = 66681902;
	volatile int32_t t68 = 56;

    t68 = (x273^((x274&x275)==x276));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int64_t x278 = 503089101629LL;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;
	static volatile int32_t t69 = -32989565;

    t69 = (x277^((x278&x279)==x280));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 32838;
	int32_t x284 = -4765825;
	static int32_t t70 = 1;

    t70 = (x281^((x282&x283)==x284));

    if (t70 != 32838) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x286 = INT16_MAX;
	uint16_t x287 = 19226U;
	uint16_t x288 = 988U;
	uint64_t t71 = 0LLU;

    t71 = (x285^((x286&x287)==x288));

    if (t71 != 113403447763LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = 496212123;
	int16_t x290 = INT16_MIN;
	static int16_t x292 = -254;
	int32_t t72 = -34;

    t72 = (x289^((x290&x291)==x292));

    if (t72 != 496212123) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 2U;
	int8_t x296 = -10;
	int32_t t73 = -30980;

    t73 = (x293^((x294&x295)==x296));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MAX;
	uint16_t x299 = UINT16_MAX;
	static int32_t x300 = INT32_MIN;

    t74 = (x297^((x298&x299)==x300));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 179452809400LLU;
	static uint16_t x302 = UINT16_MAX;
	uint8_t x303 = 76U;
	int32_t x304 = -1;
	uint64_t t75 = 1LLU;

    t75 = (x301^((x302&x303)==x304));

    if (t75 != 179452809400LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	volatile int32_t x306 = -1;
	static int64_t x307 = -2207110LL;
	uint64_t x308 = 1065958LLU;
	int64_t t76 = INT64_MAX;

    t76 = (x305^((x306&x307)==x308));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint64_t x310 = 11452929267LLU;
	static int16_t x312 = -2381;
	int32_t t77 = 4013;

    t77 = (x309^((x310&x311)==x312));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = 478;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = 31U;
	int64_t x316 = INT64_MIN;
	int32_t t78 = -2710;

    t78 = (x313^((x314&x315)==x316));

    if (t78 != 478) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MAX;
	int64_t x318 = 399959805301052961LL;
	static int16_t x319 = 0;
	volatile int16_t x320 = -1;
	volatile int32_t t79 = INT32_MAX;

    t79 = (x317^((x318&x319)==x320));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 9001331U;
	uint16_t x322 = 532U;
	int16_t x323 = INT16_MIN;
	volatile uint32_t t80 = 14U;

    t80 = (x321^((x322&x323)==x324));

    if (t80 != 9001331U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = -6444;
	static int64_t x327 = 27862345LL;
	volatile int32_t t81 = 305562;

    t81 = (x325^((x326&x327)==x328));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = 63145599090229LLU;
	int64_t x331 = -1LL;
	volatile int64_t x332 = INT64_MAX;
	static volatile int64_t t82 = INT64_MIN;

    t82 = (x329^((x330&x331)==x332));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MAX;
	int16_t x335 = -1;
	int16_t x336 = -1;
	static int32_t t83 = 5;

    t83 = (x333^((x334&x335)==x336));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	int64_t x338 = -247834516LL;
	int16_t x339 = -1;
	int8_t x340 = 1;
	volatile int32_t t84 = 60192284;

    t84 = (x337^((x338&x339)==x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	volatile int32_t t85 = -6086452;

    t85 = (x341^((x342&x343)==x344));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 13;
	uint16_t x346 = UINT16_MAX;
	volatile int32_t x347 = 0;
	int64_t x348 = INT64_MIN;

    t86 = (x345^((x346&x347)==x348));

    if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	volatile int64_t x350 = INT64_MAX;
	int64_t x351 = -92461LL;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t87 = -170851776;

    t87 = (x349^((x350&x351)==x352));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MAX;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	static volatile int16_t x356 = INT16_MAX;
	static int32_t t88 = -17921;

    t88 = (x353^((x354&x355)==x356));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MIN;
	uint8_t x359 = 2U;
	int8_t x360 = INT8_MIN;
	static int64_t t89 = 11239995057002029LL;

    t89 = (x357^((x358&x359)==x360));

    if (t89 != -69540853LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 7881U;
	static int16_t x363 = -1;
	static int8_t x364 = -1;
	uint32_t t90 = 284U;

    t90 = (x361^((x362&x363)==x364));

    if (t90 != 7881U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -1;
	volatile int16_t x366 = INT16_MAX;
	uint16_t x368 = 10205U;
	int32_t t91 = -17592777;

    t91 = (x365^((x366&x367)==x368));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 89;
	int16_t x370 = 1816;
	volatile int64_t x371 = INT64_MAX;
	static uint8_t x372 = 13U;
	static volatile int32_t t92 = -2034;

    t92 = (x369^((x370&x371)==x372));

    if (t92 != 89) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	int32_t x374 = INT32_MIN;
	volatile int16_t x375 = 0;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 25520722;

    t93 = (x373^((x374&x375)==x376));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 7687802LL;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MAX;
	static volatile int64_t t94 = -21957107LL;

    t94 = (x377^((x378&x379)==x380));

    if (t94 != 7687802LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	static volatile uint8_t x383 = UINT8_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -92444920;

    t95 = (x381^((x382&x383)==x384));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	static int64_t x386 = INT64_MAX;
	int64_t x387 = INT64_MIN;
	int64_t x388 = -1LL;
	int32_t t96 = -413269858;

    t96 = (x385^((x386&x387)==x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x389 = UINT64_MAX;
	static int16_t x390 = INT16_MIN;
	int32_t x392 = 1;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = (x389^((x390&x391)==x392));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t t98 = 1216266;

    t98 = (x393^((x394&x395)==x396));

    if (t98 != -35) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -958;
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	volatile int32_t t99 = -442;

    t99 = (x397^((x398&x399)==x400));

    if (t99 != -958) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -10;
	static volatile uint32_t x402 = 6857950U;
	volatile int16_t x404 = INT16_MAX;
	static int32_t t100 = -1;

    t100 = (x401^((x402&x403)==x404));

    if (t100 != -10) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = -1LL;
	int8_t x407 = 10;
	int8_t x408 = -2;
	int32_t t101 = 4446;

    t101 = (x405^((x406&x407)==x408));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -10;
	int8_t x411 = -1;
	int16_t x412 = -1;

    t102 = (x409^((x410&x411)==x412));

    if (t102 != -9) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MAX;
	int32_t t103 = 1;

    t103 = (x413^((x414&x415)==x416));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 413U;
	uint64_t x419 = 93280440935LLU;
	static uint64_t x420 = 10693459161LLU;
	volatile int32_t t104 = -670681;

    t104 = (x417^((x418&x419)==x420));

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -84;
	int64_t x422 = INT64_MIN;
	volatile int16_t x423 = INT16_MIN;
	int16_t x424 = -1;
	static int32_t t105 = 272;

    t105 = (x421^((x422&x423)==x424));

    if (t105 != -84) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = 18LL;
	uint16_t x427 = 100U;
	int32_t x428 = INT32_MAX;
	int64_t t106 = 12496LL;

    t106 = (x425^((x426&x427)==x428));

    if (t106 != 18LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	static int32_t x430 = -1;
	static uint64_t x432 = UINT64_MAX;

    t107 = (x429^((x430&x431)==x432));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x433 = UINT64_MAX;
	int32_t x434 = 412146863;
	uint64_t x436 = UINT64_MAX;
	uint64_t t108 = UINT64_MAX;

    t108 = (x433^((x434&x435)==x436));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = 350486LLU;
	int8_t x439 = -1;

    t109 = (x437^((x438&x439)==x440));

    if (t109 != 350486LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x441 = -1;
	int64_t x443 = INT64_MAX;
	static volatile uint16_t x444 = UINT16_MAX;
	int32_t t110 = -51524027;

    t110 = (x441^((x442&x443)==x444));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = -1;
	static int32_t x447 = INT32_MAX;
	uint32_t x448 = UINT32_MAX;
	static int32_t t111 = INT32_MIN;

    t111 = (x445^((x446&x447)==x448));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 3580620U;
	int8_t x450 = INT8_MIN;
	static uint32_t t112 = 1U;

    t112 = (x449^((x450&x451)==x452));

    if (t112 != 3580620U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x454 = 3;
	static int64_t x455 = INT64_MIN;
	static volatile uint8_t x456 = 40U;

    t113 = (x453^((x454&x455)==x456));

    if (t113 != INT32_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	static volatile int64_t x459 = INT64_MAX;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = -1730059;

    t114 = (x457^((x458&x459)==x460));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	static int64_t x462 = -1LL;
	int8_t x464 = INT8_MIN;
	volatile int64_t t115 = -1LL;

    t115 = (x461^((x462&x463)==x464));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 31U;
	uint16_t x466 = 0U;
	int16_t x468 = -35;

    t116 = (x465^((x466&x467)==x468));

    if (t116 != 31) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x471 = 6504U;
	uint8_t x472 = 3U;
	static volatile uint64_t t117 = UINT64_MAX;

    t117 = (x469^((x470&x471)==x472));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = -1LL;
	int64_t x476 = -729270787382823LL;

    t118 = (x473^((x474&x475)==x476));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	uint8_t x478 = 1U;
	int32_t x479 = -472436;
	int16_t x480 = INT16_MAX;
	static int64_t t119 = INT64_MAX;

    t119 = (x477^((x478&x479)==x480));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 29248622U;
	int16_t x482 = -243;
	int32_t x483 = 130;
	int32_t x484 = INT32_MIN;
	uint32_t t120 = 1U;

    t120 = (x481^((x482&x483)==x484));

    if (t120 != 29248622U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	volatile int8_t x488 = -1;
	static volatile int32_t t121 = 120;

    t121 = (x485^((x486&x487)==x488));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int16_t x491 = 6;
	int64_t t122 = INT64_MIN;

    t122 = (x489^((x490&x491)==x492));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MAX;
	uint16_t x494 = UINT16_MAX;
	int32_t x495 = INT32_MIN;
	int32_t x496 = -2706;

    t123 = (x493^((x494&x495)==x496));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = -1;
	volatile int16_t x499 = INT16_MAX;
	static volatile int8_t x500 = -52;
	volatile int32_t t124 = 802414482;

    t124 = (x497^((x498&x499)==x500));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MAX;
	int16_t x503 = INT16_MAX;

    t125 = (x501^((x502&x503)==x504));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -1;
	static int16_t x506 = -9650;
	static uint16_t x508 = UINT16_MAX;
	static int32_t t126 = 275304;

    t126 = (x505^((x506&x507)==x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x509 = UINT32_MAX;
	uint16_t x510 = UINT16_MAX;
	int32_t x511 = INT32_MIN;
	static int64_t x512 = INT64_MIN;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (x509^((x510&x511)==x512));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	int32_t x514 = INT32_MAX;
	uint32_t x515 = 139646141U;
	volatile uint16_t x516 = UINT16_MAX;
	int32_t t128 = -9367;

    t128 = (x513^((x514&x515)==x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	volatile uint8_t x518 = 61U;
	volatile int32_t x519 = INT32_MAX;
	uint64_t x520 = UINT64_MAX;
	static int64_t t129 = INT64_MAX;

    t129 = (x517^((x518&x519)==x520));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = INT8_MIN;
	uint8_t x524 = 11U;
	uint64_t t130 = 113909218163390731LLU;

    t130 = (x521^((x522&x523)==x524));

    if (t130 != 18LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 56LL;
	int32_t x526 = INT32_MAX;
	int64_t x527 = -1LL;
	volatile uint16_t x528 = 4U;
	int64_t t131 = 32506LL;

    t131 = (x525^((x526&x527)==x528));

    if (t131 != 56LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -131;
	int16_t x530 = 55;
	uint32_t x531 = 15290774U;
	static uint64_t x532 = 12615624315745LLU;
	int32_t t132 = 133437417;

    t132 = (x529^((x530&x531)==x532));

    if (t132 != -131) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 67U;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = INT32_MIN;
	int8_t x536 = -7;
	int32_t t133 = 22529156;

    t133 = (x533^((x534&x535)==x536));

    if (t133 != 67) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = INT8_MIN;
	uint16_t x539 = 1811U;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 0;

    t134 = (x537^((x538&x539)==x540));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = 0;
	uint8_t x544 = 0U;
	int32_t t135 = 6001;

    t135 = (x541^((x542&x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x546 = 0U;
	uint32_t x547 = 48895U;
	uint64_t t136 = UINT64_MAX;

    t136 = (x545^((x546&x547)==x548));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x550 = 91U;
	uint16_t x552 = 25346U;
	int64_t t137 = 113777LL;

    t137 = (x549^((x550&x551)==x552));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int32_t x556 = -107313138;
	int32_t t138 = 302107226;

    t138 = (x553^((x554&x555)==x556));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = 525775978062LLU;
	uint64_t x560 = UINT64_MAX;
	uint64_t t139 = 142209100447696807LLU;

    t139 = (x557^((x558&x559)==x560));

    if (t139 != 525775978062LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 18LLU;
	volatile int32_t x562 = -120115642;
	static int64_t x563 = INT64_MIN;
	uint16_t x564 = UINT16_MAX;

    t140 = (x561^((x562&x563)==x564));

    if (t140 != 18LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MIN;
	static volatile int32_t x568 = INT32_MIN;
	volatile int32_t t141 = -148;

    t141 = (x565^((x566&x567)==x568));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 10195174U;
	volatile int32_t t142 = -208635244;

    t142 = (x569^((x570&x571)==x572));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MAX;
	int64_t x575 = -1LL;
	volatile int8_t x576 = -1;
	static volatile int32_t t143 = -28679767;

    t143 = (x573^((x574&x575)==x576));

    if (t143 != 66) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MIN;
	int64_t x579 = INT64_MIN;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x577^((x578&x579)==x580));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 241U;
	int16_t x582 = INT16_MIN;
	static int16_t x583 = INT16_MAX;
	uint16_t x584 = 16228U;
	volatile int32_t t145 = 358097;

    t145 = (x581^((x582&x583)==x584));

    if (t145 != 241) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 6U;
	uint8_t x586 = UINT8_MAX;
	uint32_t x588 = UINT32_MAX;
	static volatile int32_t t146 = 1;

    t146 = (x585^((x586&x587)==x588));

    if (t146 != 6) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = 5903469850538707LLU;
	uint8_t x591 = 6U;
	int8_t x592 = -1;
	static volatile int64_t t147 = -2974LL;

    t147 = (x589^((x590&x591)==x592));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	uint16_t x594 = UINT16_MAX;
	uint16_t x595 = 1242U;
	static uint8_t x596 = UINT8_MAX;
	volatile int32_t t148 = -4;

    t148 = (x593^((x594&x595)==x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x598 = INT16_MIN;
	int16_t x599 = -1;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -252734;

    t149 = (x597^((x598&x599)==x600));

    if (t149 != 15) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	int16_t x602 = -721;
	static int64_t x603 = INT64_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -74140211;

    t150 = (x601^((x602&x603)==x604));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 30U;
	volatile int32_t x606 = INT32_MAX;
	int64_t x607 = 252764563LL;
	volatile int16_t x608 = -1;
	volatile int32_t t151 = 1;

    t151 = (x605^((x606&x607)==x608));

    if (t151 != 30) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x611 = INT32_MIN;
	volatile int64_t x612 = -1LL;
	static volatile int32_t t152 = 322;

    t152 = (x609^((x610&x611)==x612));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = 2U;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = INT16_MIN;
	int32_t t153 = 38734;

    t153 = (x613^((x614&x615)==x616));

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x618 = INT8_MIN;
	volatile int8_t x619 = INT8_MAX;
	int64_t x620 = 29930129682836LL;
	static int64_t t154 = -135576803302780931LL;

    t154 = (x617^((x618&x619)==x620));

    if (t154 != 37933910335LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x621 = UINT8_MAX;
	int64_t x623 = INT64_MIN;
	volatile int8_t x624 = INT8_MIN;

    t155 = (x621^((x622&x623)==x624));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MIN;
	int8_t x628 = INT8_MIN;
	volatile int32_t t156 = -31;

    t156 = (x625^((x626&x627)==x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 194593274665757LLU;
	uint16_t x630 = 0U;
	int8_t x632 = 0;
	static volatile uint64_t t157 = 1LLU;

    t157 = (x629^((x630&x631)==x632));

    if (t157 != 194593274665756LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = UINT8_MAX;
	volatile int16_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int64_t x636 = -157497LL;
	volatile int32_t t158 = 4115146;

    t158 = (x633^((x634&x635)==x636));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MIN;
	int64_t x639 = INT64_MAX;
	int32_t x640 = INT32_MAX;
	int32_t t159 = 40;

    t159 = (x637^((x638&x639)==x640));

    if (t159 != -24) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	volatile int16_t x642 = -36;
	int64_t x643 = INT64_MAX;
	static int32_t x644 = INT32_MIN;

    t160 = (x641^((x642&x643)==x644));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -1LL;
	int16_t x646 = INT16_MIN;
	static int8_t x648 = INT8_MIN;
	int64_t t161 = 185071289973LL;

    t161 = (x645^((x646&x647)==x648));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 333773315440972LLU;
	uint32_t x650 = UINT32_MAX;
	int32_t x652 = INT32_MIN;
	static uint64_t t162 = 135668LLU;

    t162 = (x649^((x650&x651)==x652));

    if (t162 != 333773315440972LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 24697168010990LLU;
	int8_t x654 = INT8_MIN;
	uint32_t x655 = UINT32_MAX;
	uint32_t x656 = 820908U;

    t163 = (x653^((x654&x655)==x656));

    if (t163 != 24697168010990LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x658 = 240LL;
	int16_t x659 = -1;
	int64_t x660 = -17601692010973LL;

    t164 = (x657^((x658&x659)==x660));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 1U;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = UINT16_MAX;
	uint32_t t165 = 252332U;

    t165 = (x661^((x662&x663)==x664));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	int16_t x666 = INT16_MAX;
	uint8_t x667 = 77U;
	static uint64_t x668 = 217584489169LLU;
	volatile int32_t t166 = -374;

    t166 = (x665^((x666&x667)==x668));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x672 = INT64_MIN;
	volatile int64_t t167 = INT64_MAX;

    t167 = (x669^((x670&x671)==x672));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = UINT16_MAX;
	static int64_t x674 = INT64_MIN;
	volatile int32_t x675 = INT32_MIN;
	uint16_t x676 = UINT16_MAX;
	int32_t t168 = 36120190;

    t168 = (x673^((x674&x675)==x676));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = UINT64_MAX;
	int8_t x679 = INT8_MIN;
	volatile int16_t x680 = -1;
	volatile uint32_t t169 = UINT32_MAX;

    t169 = (x677^((x678&x679)==x680));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = 3;
	static int8_t x682 = 26;
	static int8_t x683 = 0;
	volatile int64_t x684 = INT64_MIN;

    t170 = (x681^((x682&x683)==x684));

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x686 = 16645910U;
	volatile uint16_t x688 = 45U;
	volatile int32_t t171 = INT32_MIN;

    t171 = (x685^((x686&x687)==x688));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 96669717302302LLU;
	int64_t x690 = INT64_MAX;
	static int8_t x692 = -1;

    t172 = (x689^((x690&x691)==x692));

    if (t172 != 96669717302302LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	volatile int16_t x694 = INT16_MAX;
	int8_t x695 = INT8_MIN;
	uint8_t x696 = 88U;
	int32_t t173 = INT32_MIN;

    t173 = (x693^((x694&x695)==x696));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	int16_t x698 = 5;
	int16_t x700 = -1;
	static volatile int32_t t174 = -214520466;

    t174 = (x697^((x698&x699)==x700));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x702 = UINT64_MAX;
	int16_t x703 = INT16_MIN;
	static uint64_t x704 = 6662319677507092LLU;

    t175 = (x701^((x702&x703)==x704));

    if (t175 != 5180796888460853LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MAX;
	static uint16_t x707 = 9599U;
	uint8_t x708 = 90U;
	int64_t t176 = INT64_MIN;

    t176 = (x705^((x706&x707)==x708));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -6527547057LL;
	volatile int32_t x710 = -1;
	int32_t x711 = 13;
	int8_t x712 = -1;
	int64_t t177 = -3690589752616LL;

    t177 = (x709^((x710&x711)==x712));

    if (t177 != -6527547057LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 364129U;
	uint16_t x714 = 28U;
	int64_t x715 = -48811006156573371LL;
	volatile uint64_t x716 = 113407237805012233LLU;
	uint32_t t178 = 1104U;

    t178 = (x713^((x714&x715)==x716));

    if (t178 != 364129U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = -1;
	uint64_t x719 = 27910564888762LLU;
	int16_t x720 = INT16_MIN;
	volatile int64_t t179 = INT64_MIN;

    t179 = (x717^((x718&x719)==x720));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	int32_t x723 = 84;
	int64_t t180 = INT64_MIN;

    t180 = (x721^((x722&x723)==x724));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = 288LL;
	static uint32_t x726 = UINT32_MAX;
	int32_t x728 = INT32_MIN;

    t181 = (x725^((x726&x727)==x728));

    if (t181 != 288LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile int32_t x730 = INT32_MIN;
	static int16_t x731 = -5329;
	volatile int16_t x732 = INT16_MAX;
	int64_t t182 = INT64_MIN;

    t182 = (x729^((x730&x731)==x732));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	volatile uint32_t x734 = 410568543U;
	static uint16_t x735 = 57U;
	uint16_t x736 = 0U;
	int64_t t183 = -13314992599253766LL;

    t183 = (x733^((x734&x735)==x736));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = UINT64_MAX;
	uint64_t x739 = 35345427LLU;
	static volatile int32_t t184 = INT32_MAX;

    t184 = (x737^((x738&x739)==x740));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int32_t x742 = INT32_MIN;
	static uint32_t x743 = 244306200U;
	volatile int8_t x744 = INT8_MIN;

    t185 = (x741^((x742&x743)==x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x746 = -1;
	static int16_t x747 = INT16_MIN;
	static uint16_t x748 = 12346U;
	static volatile int32_t t186 = 13;

    t186 = (x745^((x746&x747)==x748));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MIN;
	static int32_t x752 = -1825;
	static int32_t t187 = -25705;

    t187 = (x749^((x750&x751)==x752));

    if (t187 != 123) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = -16;
	int16_t x755 = -1;
	static int32_t x756 = INT32_MAX;
	int32_t t188 = 746010308;

    t188 = (x753^((x754&x755)==x756));

    if (t188 != -16) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 20U;
	int8_t x758 = INT8_MAX;
	int64_t x760 = INT64_MAX;

    t189 = (x757^((x758&x759)==x760));

    if (t189 != 20) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	static int32_t x762 = INT32_MIN;
	uint64_t x763 = 538110483639939LLU;
	int16_t x764 = INT16_MAX;
	volatile int32_t t190 = INT32_MAX;

    t190 = (x761^((x762&x763)==x764));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = UINT16_MAX;
	int16_t x767 = INT16_MIN;
	int16_t x768 = -1;

    t191 = (x765^((x766&x767)==x768));

    if (t191 != 40) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	int64_t x771 = 429704LL;
	static uint16_t x772 = UINT16_MAX;

    t192 = (x769^((x770&x771)==x772));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 3174;
	int8_t x775 = INT8_MAX;

    t193 = (x773^((x774&x775)==x776));

    if (t193 != 3174) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MAX;
	int64_t x779 = -514413100139833LL;
	uint32_t x780 = UINT32_MAX;
	static uint64_t t194 = UINT64_MAX;

    t194 = (x777^((x778&x779)==x780));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 450341U;
	int32_t x782 = 39023;
	static int64_t x783 = -1LL;
	int64_t x784 = INT64_MIN;
	static uint32_t t195 = 91001U;

    t195 = (x781^((x782&x783)==x784));

    if (t195 != 450341U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -3;
	volatile uint8_t x788 = 6U;
	volatile int32_t t196 = -1402;

    t196 = (x785^((x786&x787)==x788));

    if (t196 != -3) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	uint32_t x790 = 1277096U;
	static uint16_t x791 = 23151U;
	int32_t x792 = INT32_MAX;

    t197 = (x789^((x790&x791)==x792));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x794 = INT16_MIN;
	volatile uint8_t x796 = UINT8_MAX;
	static uint32_t t198 = 87546U;

    t198 = (x793^((x794&x795)==x796));

    if (t198 != 15539773U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 370LL;
	static volatile uint32_t x798 = UINT32_MAX;
	static volatile int32_t x799 = INT32_MIN;
	int8_t x800 = INT8_MAX;
	volatile int64_t t199 = -116944160001370LL;

    t199 = (x797^((x798&x799)==x800));

    if (t199 != 370LL) { NG(); } else { ; }
	
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

