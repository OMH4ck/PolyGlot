
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

volatile int64_t x1 = INT64_MIN;
uint8_t x7 = UINT8_MAX;
volatile int32_t t1 = 0;
volatile int32_t t2 = -1;
static volatile uint8_t x23 = 1U;
int8_t x26 = INT8_MIN;
int8_t x30 = -1;
volatile int32_t t7 = -14;
volatile int32_t t9 = -120;
uint8_t x42 = UINT8_MAX;
static int32_t t10 = -379249524;
uint16_t x53 = 62U;
static volatile int16_t x60 = -475;
int16_t x65 = INT16_MAX;
static int64_t x80 = INT64_MAX;
volatile int64_t x85 = 87LL;
static int16_t x86 = INT16_MIN;
static uint16_t x87 = 110U;
static int16_t x92 = 28;
volatile uint8_t x94 = 2U;
static volatile int8_t x97 = -1;
int32_t t24 = 4107671;
int8_t x103 = INT8_MAX;
static uint64_t x105 = 12042085713074280LLU;
volatile int32_t x108 = -1;
int16_t x110 = INT16_MIN;
int16_t x128 = -1;
volatile uint64_t x134 = 8703358206244881LLU;
volatile int64_t x135 = INT64_MIN;
int32_t x144 = -220923;
static int16_t x145 = -1;
int8_t x146 = INT8_MIN;
static int32_t x158 = INT32_MIN;
int32_t x163 = INT32_MAX;
int32_t t40 = 603571650;
static volatile int16_t x165 = INT16_MIN;
volatile int64_t x167 = INT64_MAX;
uint64_t x169 = 1404906882LLU;
int32_t x173 = -1657;
int8_t x179 = -1;
int64_t x196 = -185LL;
int32_t t48 = 2010692;
volatile int16_t x209 = -3130;
volatile int32_t t53 = -1;
volatile int8_t x218 = INT8_MIN;
int8_t x226 = INT8_MIN;
static uint32_t x228 = 15777342U;
volatile uint32_t x231 = 2U;
static uint32_t x234 = 93581560U;
int8_t x236 = INT8_MIN;
int32_t t58 = 28282;
uint8_t x240 = 4U;
static int32_t t59 = -49673;
uint64_t x242 = 5LLU;
int16_t x251 = INT16_MAX;
int32_t x258 = -1;
uint16_t x261 = 212U;
static uint64_t x264 = UINT64_MAX;
volatile int32_t t66 = 3835;
volatile int8_t x269 = 1;
uint8_t x272 = UINT8_MAX;
volatile int32_t t67 = 197552;
int8_t x274 = -1;
uint8_t x279 = 0U;
volatile int32_t t70 = 2791397;
int32_t x287 = -301;
volatile uint8_t x288 = 0U;
volatile int8_t x292 = INT8_MIN;
int32_t t72 = 6085699;
int32_t x293 = INT32_MAX;
static int8_t x294 = -9;
int16_t x295 = INT16_MAX;
uint8_t x297 = UINT8_MAX;
int32_t x303 = 0;
volatile int32_t t75 = 57;
int32_t t77 = -2;
uint64_t x321 = 100755LLU;
uint64_t x324 = 68178886649LLU;
int64_t x327 = -463871414113305LL;
int32_t t82 = -1;
volatile int64_t x335 = -1LL;
int8_t x337 = -1;
int32_t x344 = 495;
uint32_t x348 = UINT32_MAX;
int32_t x349 = -1;
int32_t x350 = INT32_MIN;
static int32_t t87 = 230;
uint64_t x360 = 405LLU;
uint32_t x365 = 37U;
int32_t x373 = INT32_MIN;
uint32_t x374 = 14002320U;
int16_t x376 = INT16_MIN;
int32_t t93 = 19472949;
static uint16_t x378 = UINT16_MAX;
volatile int32_t t94 = 331978;
int64_t x386 = -1LL;
uint64_t x388 = 761LLU;
volatile int64_t x391 = -132999LL;
uint64_t x398 = 7339536990759LLU;
static int16_t x402 = INT16_MAX;
static int32_t x406 = INT32_MIN;
volatile int32_t t101 = 21025326;
uint8_t x413 = 72U;
static volatile int32_t t103 = 778563;
static volatile int16_t x418 = INT16_MAX;
int64_t x423 = -1LL;
int32_t x427 = INT32_MIN;
volatile int32_t t106 = -25350167;
int32_t x432 = 9710;
static volatile uint32_t x434 = 1500293477U;
int64_t x439 = -90231LL;
int16_t x449 = INT16_MIN;
volatile int64_t x464 = -68651737LL;
uint16_t x471 = 40U;
uint16_t x472 = 29225U;
int16_t x473 = INT16_MIN;
int32_t x475 = INT32_MAX;
int32_t x481 = INT32_MIN;
static int16_t x482 = 12;
uint16_t x484 = 294U;
int32_t t120 = 3756;
int64_t x485 = INT64_MIN;
volatile int64_t x488 = INT64_MIN;
int64_t x490 = INT64_MAX;
int32_t t122 = 174;
int8_t x504 = -1;
volatile int32_t t126 = 343;
int32_t x522 = INT32_MIN;
uint16_t x525 = 7U;
int32_t x527 = -214512703;
static uint16_t x531 = 3796U;
volatile int8_t x532 = INT8_MIN;
volatile int32_t t134 = -8;
int64_t x541 = -980424014LL;
uint64_t x551 = 2402429LLU;
int16_t x552 = INT16_MIN;
uint16_t x560 = 32U;
int32_t x562 = INT32_MAX;
int64_t x564 = INT64_MIN;
static volatile int64_t x572 = INT64_MIN;
static int32_t t142 = 1;
static uint64_t x573 = 44693700026011LLU;
uint32_t x577 = UINT32_MAX;
int16_t x579 = -3398;
uint32_t x581 = UINT32_MAX;
volatile int32_t t147 = 177203115;
volatile int32_t x596 = -1;
volatile int64_t x600 = -1LL;
static int32_t t149 = -13343;
int16_t x604 = -1;
int32_t x606 = INT32_MAX;
int64_t x610 = INT64_MIN;
int32_t x612 = -1;
int16_t x616 = -1;
static int16_t x620 = -1;
uint8_t x625 = 30U;
static int64_t x632 = INT64_MAX;
int32_t x637 = INT32_MAX;
uint16_t x641 = 3U;
int64_t x644 = -1LL;
static int32_t x645 = INT32_MAX;
int32_t x649 = -164349364;
int32_t x650 = INT32_MIN;
static int64_t x651 = INT64_MAX;
uint64_t x652 = UINT64_MAX;
volatile int32_t t162 = 94031;
volatile int8_t x653 = INT8_MAX;
static uint32_t x673 = 215U;
uint16_t x679 = UINT16_MAX;
int16_t x683 = INT16_MAX;
uint64_t x684 = 279LLU;
int64_t x686 = INT64_MIN;
int16_t x688 = -1373;
volatile int32_t x690 = -52;
static int32_t t172 = -102062269;
int64_t x696 = INT64_MIN;
volatile int32_t t173 = 63047640;
int32_t x699 = -83;
int8_t x700 = -1;
int32_t x701 = -49297;
int32_t t175 = 331;
volatile int32_t t177 = 706;
static int32_t x716 = INT32_MAX;
volatile uint32_t x724 = 6900413U;
int16_t x727 = -1;
volatile int8_t x732 = INT8_MAX;
int64_t x738 = INT64_MIN;
static volatile int16_t x745 = INT16_MIN;
int16_t x746 = INT16_MIN;
uint32_t x752 = 3168767U;
static int8_t x760 = INT8_MIN;
volatile int16_t x764 = INT16_MIN;
int32_t t190 = -2;
uint16_t x771 = 118U;
volatile int32_t t192 = -104;
uint8_t x778 = 1U;
int32_t t194 = -10;
int32_t x781 = INT32_MAX;
int8_t x785 = -10;
static uint64_t x788 = 10342LLU;
int16_t x790 = INT16_MIN;
uint16_t x795 = 67U;
static int32_t t198 = -486169;
static int16_t x798 = INT16_MAX;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -4250266;

    t0 = (x1==((x2!=x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int64_t x6 = 28067622100947LL;
	static int16_t x8 = INT16_MIN;

    t1 = (x5==((x6!=x7)|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MAX;
	volatile int16_t x10 = INT16_MAX;
	volatile uint64_t x11 = 1737422410LLU;
	uint8_t x12 = UINT8_MAX;

    t2 = (x9==((x10!=x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int16_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = 31;
	int32_t t3 = 566113;

    t3 = (x13==((x14!=x15)|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 71U;
	uint32_t x18 = UINT32_MAX;
	volatile int32_t x19 = -15;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -513859230;

    t4 = (x17==((x18!=x19)|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 292205829U;
	static uint32_t x24 = 886U;
	volatile int32_t t5 = 138674;

    t5 = (x21==((x22!=x23)|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int32_t x27 = -1836209;
	static int16_t x28 = INT16_MAX;
	int32_t t6 = -26;

    t6 = (x25==((x26!=x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	volatile int64_t x31 = INT64_MIN;
	uint64_t x32 = 189294006271564LLU;

    t7 = (x29==((x30!=x31)|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 2910811024992731LL;
	volatile uint16_t x34 = 5U;
	int8_t x35 = -22;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -91;

    t8 = (x33==((x34!=x35)|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;

    t9 = (x37==((x38!=x39)|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	uint16_t x43 = 19298U;
	int32_t x44 = INT32_MIN;

    t10 = (x41==((x42!=x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -562733574LL;
	int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 20;
	volatile int32_t t11 = -18;

    t11 = (x45==((x46!=x47)|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MAX;
	volatile int64_t x51 = INT64_MAX;
	uint32_t x52 = 8993U;
	volatile int32_t t12 = -12446;

    t12 = (x49==((x50!=x51)|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MAX;
	volatile uint16_t x55 = 4U;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -417799334;

    t13 = (x53==((x54!=x55)|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 83520224U;
	static uint64_t x59 = 539259289947236LLU;
	int32_t t14 = -662;

    t14 = (x57==((x58!=x59)|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	volatile int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	int32_t x64 = 11;
	volatile int32_t t15 = 9101283;

    t15 = (x61==((x62!=x63)|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x66 = INT16_MIN;
	static volatile int8_t x67 = 5;
	uint32_t x68 = 699U;
	volatile int32_t t16 = 111;

    t16 = (x65==((x66!=x67)|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	volatile int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t17 = -22;

    t17 = (x69==((x70!=x71)|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static uint16_t x74 = 1U;
	volatile uint8_t x75 = 38U;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -39;

    t18 = (x73==((x74!=x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -1;
	int32_t t19 = -19495;

    t19 = (x77==((x78!=x79)|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -270127128204LL;
	volatile int16_t x82 = INT16_MAX;
	uint8_t x83 = 5U;
	volatile int64_t x84 = 1622595369983LL;
	static int32_t t20 = 1620;

    t20 = (x81==((x82!=x83)|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 1980;

    t21 = (x85==((x86!=x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = 23936405135164798LLU;
	int64_t x90 = INT64_MIN;
	static int8_t x91 = INT8_MIN;
	volatile int32_t t22 = -60604332;

    t22 = (x89==((x90!=x91)|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 1;

    t23 = (x93==((x94!=x95)|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -308623545274286680LL;
	int8_t x99 = INT8_MAX;
	volatile uint16_t x100 = 1357U;

    t24 = (x97==((x98!=x99)|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 5;
	volatile int64_t x102 = -1LL;
	uint64_t x104 = 6881640LLU;
	int32_t t25 = -14;

    t25 = (x101==((x102!=x103)|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int32_t t26 = 0;

    t26 = (x105==((x106!=x107)|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = UINT16_MAX;
	volatile int8_t x111 = -52;
	static uint32_t x112 = 82383U;
	volatile int32_t t27 = 226;

    t27 = (x109==((x110!=x111)|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	volatile uint64_t x114 = 123535811325397LLU;
	int8_t x115 = 3;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 0;

    t28 = (x113==((x114!=x115)|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	static int64_t x119 = -4914638LL;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -29325385;

    t29 = (x117==((x118!=x119)|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 5014LLU;
	static int16_t x122 = INT16_MIN;
	static int16_t x123 = INT16_MAX;
	volatile int32_t x124 = -1;
	int32_t t30 = 1;

    t30 = (x121==((x122!=x123)|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	int32_t x126 = -116;
	int8_t x127 = 15;
	static volatile int32_t t31 = 10628506;

    t31 = (x125==((x126!=x127)|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -12121;
	uint16_t x130 = 3729U;
	static int8_t x131 = INT8_MAX;
	static uint8_t x132 = 0U;
	volatile int32_t t32 = -110;

    t32 = (x129==((x130!=x131)|x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 306;

    t33 = (x133==((x134!=x135)|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int8_t x138 = 1;
	uint32_t x139 = 48U;
	uint64_t x140 = 2LLU;
	static int32_t t34 = 522670;

    t34 = (x137==((x138!=x139)|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	static uint32_t x142 = 217988778U;
	static int8_t x143 = INT8_MIN;
	volatile int32_t t35 = -273693;

    t35 = (x141==((x142!=x143)|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = 34U;
	volatile int32_t t36 = 94287240;

    t36 = (x145==((x146!=x147)|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -1;
	int32_t x150 = 9;
	int16_t x151 = -1;
	static int64_t x152 = -1LL;
	volatile int32_t t37 = -1462;

    t37 = (x149==((x150!=x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x154 = 855972616;
	int8_t x155 = INT8_MIN;
	int32_t x156 = -416;
	volatile int32_t t38 = -926391;

    t38 = (x153==((x154!=x155)|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	static int32_t x159 = INT32_MIN;
	static int64_t x160 = 354764542956195567LL;
	int32_t t39 = -2;

    t39 = (x157==((x158!=x159)|x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	volatile int32_t x162 = 0;
	uint32_t x164 = 94967054U;

    t40 = (x161==((x162!=x163)|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x166 = 1997976U;
	uint8_t x168 = UINT8_MAX;
	int32_t t41 = -1139371;

    t41 = (x165==((x166!=x167)|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = 1;
	int8_t x171 = INT8_MIN;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = 0;

    t42 = (x169==((x170!=x171)|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = -1;
	uint16_t x175 = 0U;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -21888661;

    t43 = (x173==((x174!=x175)|x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 2U;
	uint32_t x178 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -312620135;

    t44 = (x177==((x178!=x179)|x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 14U;
	uint16_t x182 = 1U;
	static int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -87;

    t45 = (x181==((x182!=x183)|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	uint8_t x186 = 12U;
	static uint64_t x187 = 56289455LLU;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 27;

    t46 = (x185==((x186!=x187)|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = 1236724053LLU;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 1;

    t47 = (x189==((x190!=x191)|x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	int8_t x194 = INT8_MIN;
	static uint8_t x195 = UINT8_MAX;

    t48 = (x193==((x194!=x195)|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MIN;
	static int8_t x198 = -2;
	static volatile int16_t x199 = INT16_MAX;
	int32_t x200 = 11;
	volatile int32_t t49 = 1017630;

    t49 = (x197==((x198!=x199)|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	int8_t x202 = 0;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = 12U;
	volatile int32_t t50 = -4105066;

    t50 = (x201==((x202!=x203)|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MAX;
	static volatile int32_t x206 = INT32_MAX;
	volatile uint8_t x207 = 52U;
	int16_t x208 = -2;
	int32_t t51 = 6218698;

    t51 = (x205==((x206!=x207)|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x210 = UINT64_MAX;
	static volatile int32_t x211 = INT32_MIN;
	volatile uint8_t x212 = 3U;
	static volatile int32_t t52 = 11234;

    t52 = (x209==((x210!=x211)|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	static uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MAX;
	int8_t x216 = 0;

    t53 = (x213==((x214!=x215)|x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	int64_t x219 = -1LL;
	volatile int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 2;

    t54 = (x217==((x218!=x219)|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 213U;
	static uint64_t x222 = UINT64_MAX;
	volatile int16_t x223 = -1;
	int64_t x224 = 4LL;
	volatile int32_t t55 = 2056903;

    t55 = (x221==((x222!=x223)|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = UINT32_MAX;
	uint16_t x227 = 63U;
	int32_t t56 = 542894;

    t56 = (x225==((x226!=x227)|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = 761;
	int64_t x230 = INT64_MAX;
	uint8_t x232 = 3U;
	static int32_t t57 = -280386;

    t57 = (x229==((x230!=x231)|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 129109LLU;
	int8_t x235 = INT8_MIN;

    t58 = (x233==((x234!=x235)|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 11775775U;
	static volatile int64_t x238 = 3624006605989116LL;
	uint64_t x239 = 44LLU;

    t59 = (x237==((x238!=x239)|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -1;
	volatile uint16_t x243 = 0U;
	static int8_t x244 = -4;
	int32_t t60 = -940;

    t60 = (x241==((x242!=x243)|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 0U;
	static int32_t t61 = 746;

    t61 = (x245==((x246!=x247)|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = INT16_MAX;
	int32_t x250 = INT32_MIN;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 21238;

    t62 = (x249==((x250!=x251)|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = -1;
	int32_t x254 = -413429228;
	volatile uint64_t x255 = 3484877LLU;
	static int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 13802838;

    t63 = (x253==((x254!=x255)|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -1;
	volatile int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	static int32_t t64 = 19;

    t64 = (x257==((x258!=x259)|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x262 = INT64_MIN;
	volatile int16_t x263 = INT16_MAX;
	static volatile int32_t t65 = -89686;

    t65 = (x261==((x262!=x263)|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	volatile int8_t x266 = INT8_MIN;
	uint32_t x267 = 203733621U;
	int8_t x268 = INT8_MIN;

    t66 = (x265==((x266!=x267)|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x270 = 423876083137346LL;
	uint8_t x271 = 1U;

    t67 = (x269==((x270!=x271)|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 1U;
	static int16_t x275 = 0;
	uint16_t x276 = 0U;
	static volatile int32_t t68 = -75820363;

    t68 = (x273==((x274!=x275)|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 68925462U;
	uint16_t x278 = 99U;
	uint16_t x280 = 23699U;
	volatile int32_t t69 = 40767346;

    t69 = (x277==((x278!=x279)|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = INT16_MIN;

    t70 = (x281==((x282!=x283)|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int16_t x286 = -1;
	int32_t t71 = -65545832;

    t71 = (x285==((x286!=x287)|x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	static int16_t x290 = -1;
	int8_t x291 = -1;

    t72 = (x289==((x290!=x291)|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x296 = 15783116075898LLU;
	volatile int32_t t73 = -25954;

    t73 = (x293==((x294!=x295)|x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = 2148U;
	int8_t x299 = -6;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 1;

    t74 = (x297==((x298!=x299)|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = UINT32_MAX;
	int32_t x304 = INT32_MIN;

    t75 = (x301==((x302!=x303)|x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 74;
	int64_t x306 = INT64_MIN;
	static uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 108;

    t76 = (x305==((x306!=x307)|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -1;
	uint64_t x310 = 1321LLU;
	uint16_t x311 = UINT16_MAX;
	static volatile int16_t x312 = INT16_MIN;

    t77 = (x309==((x310!=x311)|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = INT64_MAX;
	uint32_t x314 = 23102616U;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = 11;
	int32_t t78 = 271329361;

    t78 = (x313==((x314!=x315)|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = -1;
	uint16_t x318 = 3U;
	int16_t x319 = INT16_MIN;
	static int8_t x320 = INT8_MAX;
	int32_t t79 = 0;

    t79 = (x317==((x318!=x319)|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x322 = 0U;
	int32_t x323 = 946222654;
	volatile int32_t t80 = -15;

    t80 = (x321==((x322!=x323)|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	static volatile uint8_t x326 = UINT8_MAX;
	int32_t x328 = 2346;
	int32_t t81 = 7163;

    t81 = (x325==((x326!=x327)|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;

    t82 = (x329==((x330!=x331)|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	static int32_t x336 = INT32_MIN;
	static int32_t t83 = 82;

    t83 = (x333==((x334!=x335)|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MIN;
	static int64_t x339 = INT64_MIN;
	int16_t x340 = -1;
	int32_t t84 = -5257601;

    t84 = (x337==((x338!=x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 368;
	static int32_t x342 = INT32_MIN;
	static uint32_t x343 = 21U;
	static volatile int32_t t85 = 3;

    t85 = (x341==((x342!=x343)|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 320017LLU;
	static uint8_t x346 = 6U;
	volatile uint16_t x347 = 14210U;
	volatile int32_t t86 = 1232;

    t86 = (x345==((x346!=x347)|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x351 = 30941966LLU;
	static int16_t x352 = 3;

    t87 = (x349==((x350!=x351)|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x353 = UINT8_MAX;
	int32_t x354 = -1;
	int64_t x355 = 1646970061429980571LL;
	int8_t x356 = 1;
	volatile int32_t t88 = -2989;

    t88 = (x353==((x354!=x355)|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -44920LL;
	volatile int32_t t89 = -105204304;

    t89 = (x357==((x358!=x359)|x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = 4;
	static uint32_t x363 = 894738U;
	volatile uint16_t x364 = 36U;
	volatile int32_t t90 = -88;

    t90 = (x361==((x362!=x363)|x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x366 = UINT64_MAX;
	uint16_t x367 = 11U;
	volatile int16_t x368 = -1;
	volatile int32_t t91 = -412104;

    t91 = (x365==((x366!=x367)|x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 6U;
	uint8_t x370 = 65U;
	int64_t x371 = INT64_MIN;
	volatile uint64_t x372 = 236929985162LLU;
	volatile int32_t t92 = 323016092;

    t92 = (x369==((x370!=x371)|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x375 = 517731LLU;

    t93 = (x373==((x374!=x375)|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = 6U;

    t94 = (x377==((x378!=x379)|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	static uint16_t x382 = UINT16_MAX;
	volatile int8_t x383 = 0;
	int32_t x384 = -622;
	int32_t t95 = -3855709;

    t95 = (x381==((x382!=x383)|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = -1;
	int32_t x387 = 1518;
	int32_t t96 = 605;

    t96 = (x385==((x386!=x387)|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	volatile int8_t x390 = INT8_MIN;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 1058909935;

    t97 = (x389==((x390!=x391)|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -212;
	int64_t x394 = 1138637530075LL;
	int8_t x395 = 4;
	uint64_t x396 = 142297281422452364LLU;
	int32_t t98 = -93138;

    t98 = (x393==((x394!=x395)|x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	volatile int32_t x399 = -1;
	volatile uint16_t x400 = 36U;
	int32_t t99 = 31707597;

    t99 = (x397==((x398!=x399)|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 6U;
	uint32_t x403 = 28U;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = -22879966;

    t100 = (x401==((x402!=x403)|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	int16_t x407 = INT16_MIN;
	int64_t x408 = 14509743933807560LL;

    t101 = (x405==((x406!=x407)|x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -171679049;
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	int8_t x412 = 4;
	volatile int32_t t102 = 74231021;

    t102 = (x409==((x410!=x411)|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	int16_t x415 = -1;
	int32_t x416 = 10389;

    t103 = (x413==((x414!=x415)|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 20U;
	static int64_t x419 = INT64_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -3582126;

    t104 = (x417==((x418!=x419)|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	static uint16_t x422 = 52U;
	volatile uint32_t x424 = UINT32_MAX;
	int32_t t105 = 48325879;

    t105 = (x421==((x422!=x423)|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 6U;
	volatile int64_t x426 = 6528700395LL;
	int32_t x428 = -1;

    t106 = (x425==((x426!=x427)|x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MAX;
	uint32_t x430 = 306U;
	static int8_t x431 = 0;
	int32_t t107 = -38138193;

    t107 = (x429==((x430!=x431)|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	volatile int32_t x435 = -603652433;
	static int64_t x436 = INT64_MIN;
	int32_t t108 = -15;

    t108 = (x433==((x434!=x435)|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	static volatile int64_t x438 = INT64_MAX;
	int64_t x440 = INT64_MAX;
	int32_t t109 = 910815370;

    t109 = (x437==((x438!=x439)|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 1201U;
	int64_t x442 = -1LL;
	static int8_t x443 = INT8_MIN;
	int64_t x444 = 26366404355935022LL;
	static int32_t t110 = -949838;

    t110 = (x441==((x442!=x443)|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	static int32_t x446 = 6;
	volatile uint64_t x447 = 869178778178930LLU;
	static int32_t x448 = INT32_MAX;
	volatile int32_t t111 = 1479;

    t111 = (x445==((x446!=x447)|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x450 = INT16_MIN;
	static int16_t x451 = 7379;
	volatile int64_t x452 = 74749254283LL;
	int32_t t112 = -26064;

    t112 = (x449==((x450!=x451)|x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 3U;
	volatile int64_t x454 = INT64_MIN;
	uint8_t x455 = 25U;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t113 = 232339942;

    t113 = (x453==((x454!=x455)|x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	uint8_t x460 = 62U;
	static volatile int32_t t114 = -1;

    t114 = (x457==((x458!=x459)|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	int64_t x462 = INT64_MAX;
	int64_t x463 = INT64_MIN;
	int32_t t115 = 16;

    t115 = (x461==((x462!=x463)|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	static int32_t x466 = 219758853;
	int8_t x467 = INT8_MAX;
	uint64_t x468 = 266663105858269606LLU;
	volatile int32_t t116 = 8154103;

    t116 = (x465==((x466!=x467)|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -2;
	uint64_t x470 = UINT64_MAX;
	volatile int32_t t117 = 1;

    t117 = (x469==((x470!=x471)|x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x474 = 273U;
	static volatile uint16_t x476 = UINT16_MAX;
	volatile int32_t t118 = -13550;

    t118 = (x473==((x474!=x475)|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 1098U;
	int64_t x478 = -763220646LL;
	uint32_t x479 = UINT32_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t119 = 163;

    t119 = (x477==((x478!=x479)|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x483 = 0LLU;

    t120 = (x481==((x482!=x483)|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x486 = 1235895145307LLU;
	int32_t x487 = -718345;
	int32_t t121 = -2968;

    t121 = (x485==((x486!=x487)|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 468;
	static int8_t x491 = -1;
	int8_t x492 = -57;

    t122 = (x489==((x490!=x491)|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 87612U;
	int32_t x494 = 341198;
	static int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MAX;
	volatile int32_t t123 = -23985559;

    t123 = (x493==((x494!=x495)|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MAX;
	volatile int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MAX;
	int32_t t124 = 90;

    t124 = (x497==((x498!=x499)|x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = INT64_MIN;
	volatile uint32_t x502 = UINT32_MAX;
	int16_t x503 = INT16_MIN;
	static volatile int32_t t125 = -211;

    t125 = (x501==((x502!=x503)|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 14;
	int16_t x506 = INT16_MIN;
	uint32_t x507 = UINT32_MAX;
	int32_t x508 = INT32_MIN;

    t126 = (x505==((x506!=x507)|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	uint16_t x510 = 186U;
	volatile uint16_t x511 = UINT16_MAX;
	static volatile int32_t x512 = -1;
	static volatile int32_t t127 = -289085970;

    t127 = (x509==((x510!=x511)|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	uint64_t x514 = 104666LLU;
	int64_t x515 = INT64_MIN;
	int8_t x516 = INT8_MAX;
	int32_t t128 = 2403292;

    t128 = (x513==((x514!=x515)|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -1;
	int8_t x518 = 24;
	int16_t x519 = -4;
	int32_t x520 = INT32_MIN;
	static volatile int32_t t129 = 29;

    t129 = (x517==((x518!=x519)|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = INT32_MIN;
	volatile int32_t x523 = 17571;
	int32_t x524 = INT32_MIN;
	volatile int32_t t130 = 1;

    t130 = (x521==((x522!=x523)|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MAX;
	volatile uint8_t x528 = 2U;
	int32_t t131 = -5431776;

    t131 = (x525==((x526!=x527)|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	static int32_t x530 = INT32_MIN;
	int32_t t132 = 544;

    t132 = (x529==((x530!=x531)|x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = INT32_MIN;
	int8_t x534 = -1;
	uint16_t x535 = UINT16_MAX;
	int8_t x536 = INT8_MAX;
	static volatile int32_t t133 = -238741;

    t133 = (x533==((x534!=x535)|x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 5649U;
	int16_t x538 = INT16_MAX;
	uint16_t x539 = 1451U;
	static volatile int64_t x540 = -1LL;

    t134 = (x537==((x538!=x539)|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x542 = UINT32_MAX;
	uint8_t x543 = 22U;
	uint8_t x544 = 20U;
	int32_t t135 = -5;

    t135 = (x541==((x542!=x543)|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x545 = INT16_MAX;
	uint32_t x546 = 0U;
	static int32_t x547 = INT32_MIN;
	volatile uint16_t x548 = UINT16_MAX;
	volatile int32_t t136 = 167378380;

    t136 = (x545==((x546!=x547)|x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MAX;
	int16_t x550 = -1;
	static int32_t t137 = 8859;

    t137 = (x549==((x550!=x551)|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x553 = 4720U;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 63520U;
	volatile uint16_t x556 = 0U;
	volatile int32_t t138 = 10;

    t138 = (x553==((x554!=x555)|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = UINT64_MAX;
	int64_t x558 = -1852042LL;
	int8_t x559 = -15;
	static int32_t t139 = -16308;

    t139 = (x557==((x558!=x559)|x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	uint8_t x563 = UINT8_MAX;
	static volatile int32_t t140 = 2;

    t140 = (x561==((x562!=x563)|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	int16_t x566 = -3;
	static volatile int64_t x567 = -100950621100924044LL;
	uint16_t x568 = 12U;
	int32_t t141 = -6;

    t141 = (x565==((x566!=x567)|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MIN;
	volatile int64_t x571 = INT64_MAX;

    t142 = (x569==((x570!=x571)|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x574 = INT16_MIN;
	volatile uint8_t x575 = 13U;
	int64_t x576 = 63776627LL;
	volatile int32_t t143 = -897;

    t143 = (x573==((x574!=x575)|x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = 14023819;
	volatile int64_t x580 = INT64_MIN;
	int32_t t144 = 1;

    t144 = (x577==((x578!=x579)|x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = 0;
	volatile uint32_t x583 = UINT32_MAX;
	volatile int64_t x584 = -1LL;
	static int32_t t145 = -22383;

    t145 = (x581==((x582!=x583)|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = -1LL;
	uint8_t x587 = UINT8_MAX;
	volatile int16_t x588 = INT16_MAX;
	int32_t t146 = 682068;

    t146 = (x585==((x586!=x587)|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int16_t x590 = -1;
	volatile int32_t x591 = INT32_MAX;
	int64_t x592 = 136295136LL;

    t147 = (x589==((x590!=x591)|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MIN;
	int8_t x595 = INT8_MIN;
	int32_t t148 = -10921720;

    t148 = (x593==((x594!=x595)|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = UINT64_MAX;
	int64_t x598 = INT64_MIN;
	uint32_t x599 = UINT32_MAX;

    t149 = (x597==((x598!=x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = -3824;
	volatile int8_t x602 = -41;
	static uint8_t x603 = UINT8_MAX;
	int32_t t150 = -12;

    t150 = (x601==((x602!=x603)|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 0U;
	static int64_t x607 = -1010980043200583LL;
	int16_t x608 = -1;
	static volatile int32_t t151 = -487;

    t151 = (x605==((x606!=x607)|x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x611 = INT8_MIN;
	int32_t t152 = -1;

    t152 = (x609==((x610!=x611)|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	volatile uint32_t x614 = UINT32_MAX;
	int8_t x615 = INT8_MIN;
	static volatile int32_t t153 = 2340;

    t153 = (x613==((x614!=x615)|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 3633;
	int16_t x618 = 724;
	int64_t x619 = INT64_MIN;
	volatile int32_t t154 = -1963;

    t154 = (x617==((x618!=x619)|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 125U;
	static uint32_t x622 = 787U;
	static int32_t x623 = INT32_MAX;
	int32_t x624 = 50313892;
	int32_t t155 = -988;

    t155 = (x621==((x622!=x623)|x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 1U;
	static int16_t x627 = 0;
	uint16_t x628 = 0U;
	static volatile int32_t t156 = -187823;

    t156 = (x625==((x626!=x627)|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 950;
	static int16_t x630 = -1;
	volatile uint32_t x631 = 3U;
	volatile int32_t t157 = -33510592;

    t157 = (x629==((x630!=x631)|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 3U;
	volatile int16_t x634 = 324;
	volatile int32_t x635 = INT32_MIN;
	int64_t x636 = INT64_MIN;
	int32_t t158 = 1;

    t158 = (x633==((x634!=x635)|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = 703004198027716LL;
	int16_t x639 = INT16_MIN;
	static int32_t x640 = INT32_MIN;
	static volatile int32_t t159 = -2346376;

    t159 = (x637==((x638!=x639)|x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x642 = INT16_MIN;
	uint64_t x643 = 505LLU;
	volatile int32_t t160 = 378215;

    t160 = (x641==((x642!=x643)|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = -414055183938747LL;
	static int32_t x647 = 661;
	static uint64_t x648 = UINT64_MAX;
	volatile int32_t t161 = 499;

    t161 = (x645==((x646!=x647)|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    

    t162 = (x649==((x650!=x651)|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x654 = -1;
	volatile int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;
	static int32_t t163 = 1;

    t163 = (x653==((x654!=x655)|x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	int32_t x658 = INT32_MIN;
	int64_t x659 = INT64_MIN;
	int16_t x660 = INT16_MAX;
	int32_t t164 = -1;

    t164 = (x657==((x658!=x659)|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	int64_t x662 = INT64_MIN;
	volatile int32_t x663 = INT32_MIN;
	int64_t x664 = -15041106LL;
	int32_t t165 = 224721;

    t165 = (x661==((x662!=x663)|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 11960U;
	uint8_t x666 = 2U;
	volatile int64_t x667 = 134679238150LL;
	int64_t x668 = -449989110502LL;
	int32_t t166 = 121463;

    t166 = (x665==((x666!=x667)|x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = -7;
	int8_t x670 = INT8_MIN;
	int64_t x671 = 561303LL;
	uint32_t x672 = 4946U;
	volatile int32_t t167 = 35594;

    t167 = (x669==((x670!=x671)|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = 354;
	int32_t x675 = -1;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -82635099;

    t168 = (x673==((x674!=x675)|x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	volatile uint64_t x678 = 0LLU;
	int8_t x680 = -1;
	int32_t t169 = -424892518;

    t169 = (x677==((x678!=x679)|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	static int16_t x682 = -1;
	int32_t t170 = 1;

    t170 = (x681==((x682!=x683)|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	static int8_t x687 = -42;
	int32_t t171 = -85078;

    t171 = (x685==((x686!=x687)|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x689 = -1;
	int8_t x691 = -1;
	int8_t x692 = INT8_MAX;

    t172 = (x689==((x690!=x691)|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x693 = -15507595301LL;
	volatile uint32_t x694 = 430U;
	int64_t x695 = -139870LL;

    t173 = (x693==((x694!=x695)|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -15;
	int32_t x698 = 1;
	volatile int32_t t174 = -5308979;

    t174 = (x697==((x698!=x699)|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = 95U;
	volatile int64_t x703 = 7281013450326536LL;
	uint32_t x704 = 393421502U;

    t175 = (x701==((x702!=x703)|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MAX;
	volatile int64_t x706 = INT64_MIN;
	volatile uint8_t x707 = 2U;
	int8_t x708 = 2;
	volatile int32_t t176 = -1612;

    t176 = (x705==((x706!=x707)|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = INT8_MAX;
	int32_t x710 = INT32_MAX;
	uint32_t x711 = 1836944U;
	static volatile int8_t x712 = -1;

    t177 = (x709==((x710!=x711)|x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int64_t x714 = -75990LL;
	volatile int8_t x715 = INT8_MIN;
	int32_t t178 = 11513150;

    t178 = (x713==((x714!=x715)|x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -5;
	static uint32_t x718 = 24226U;
	int32_t x719 = INT32_MIN;
	uint64_t x720 = 1LLU;
	int32_t t179 = 1128245;

    t179 = (x717==((x718!=x719)|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = INT32_MAX;
	uint8_t x723 = 1U;
	volatile int32_t t180 = -2;

    t180 = (x721==((x722!=x723)|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = INT64_MIN;
	int64_t x726 = INT64_MIN;
	int32_t x728 = -1;
	int32_t t181 = -477133;

    t181 = (x725==((x726!=x727)|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MIN;
	volatile int8_t x730 = INT8_MIN;
	static int8_t x731 = INT8_MIN;
	int32_t t182 = -1488;

    t182 = (x729==((x730!=x731)|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile uint8_t x734 = 0U;
	static int64_t x735 = INT64_MIN;
	int8_t x736 = INT8_MIN;
	int32_t t183 = -503892;

    t183 = (x733==((x734!=x735)|x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int32_t x739 = INT32_MAX;
	int16_t x740 = INT16_MAX;
	int32_t t184 = 9474101;

    t184 = (x737==((x738!=x739)|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = -14324;
	int64_t x743 = INT64_MIN;
	int32_t x744 = -1;
	int32_t t185 = -1;

    t185 = (x741==((x742!=x743)|x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x747 = -1166LL;
	int64_t x748 = 1LL;
	int32_t t186 = -2;

    t186 = (x745==((x746!=x747)|x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = -1;
	static int16_t x751 = INT16_MAX;
	volatile int32_t t187 = -26096;

    t187 = (x749==((x750!=x751)|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	static int8_t x754 = 14;
	uint16_t x755 = 6194U;
	volatile int8_t x756 = INT8_MAX;
	int32_t t188 = -7;

    t188 = (x753==((x754!=x755)|x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	uint16_t x758 = 21792U;
	int64_t x759 = INT64_MIN;
	int32_t t189 = -69;

    t189 = (x757==((x758!=x759)|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 504491470U;
	int64_t x762 = INT64_MIN;
	uint8_t x763 = UINT8_MAX;

    t190 = (x761==((x762!=x763)|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MAX;
	static int32_t x766 = INT32_MIN;
	volatile uint16_t x767 = 213U;
	static volatile uint32_t x768 = 2555383U;
	static int32_t t191 = 0;

    t191 = (x765==((x766!=x767)|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = UINT8_MAX;
	static int16_t x770 = -1;
	int64_t x772 = 1LL;

    t192 = (x769==((x770!=x771)|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 1142595219823LLU;
	uint16_t x774 = UINT16_MAX;
	static uint16_t x775 = 51U;
	static int16_t x776 = INT16_MAX;
	volatile int32_t t193 = -36748;

    t193 = (x773==((x774!=x775)|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = -26LL;
	uint8_t x779 = UINT8_MAX;
	int32_t x780 = 1;

    t194 = (x777==((x778!=x779)|x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = -1;
	volatile int8_t x783 = INT8_MIN;
	static int32_t x784 = INT32_MAX;
	volatile int32_t t195 = -9845;

    t195 = (x781==((x782!=x783)|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x786 = INT32_MAX;
	uint16_t x787 = 8565U;
	volatile int32_t t196 = -5948022;

    t196 = (x785==((x786!=x787)|x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	static int16_t x791 = INT16_MIN;
	static volatile int16_t x792 = INT16_MIN;
	int32_t t197 = -1;

    t197 = (x789==((x790!=x791)|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MIN;
	int8_t x794 = -62;
	volatile int8_t x796 = INT8_MIN;

    t198 = (x793==((x794!=x795)|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 0LLU;
	volatile int64_t x799 = 29742136258LL;
	int8_t x800 = INT8_MAX;
	volatile int32_t t199 = 230795760;

    t199 = (x797==((x798!=x799)|x800));

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

