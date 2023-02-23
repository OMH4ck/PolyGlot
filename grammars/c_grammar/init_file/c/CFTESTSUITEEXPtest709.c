
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

uint32_t x11 = UINT32_MAX;
int32_t x23 = INT32_MIN;
int64_t x28 = 705LL;
int64_t x32 = 63373060725793311LL;
int16_t x36 = 13402;
int16_t x37 = INT16_MIN;
int16_t x38 = -1;
uint64_t x39 = UINT64_MAX;
static uint64_t x46 = UINT64_MAX;
static int32_t x53 = INT32_MIN;
int16_t x55 = -6282;
volatile int32_t t13 = 17600354;
int32_t t14 = 2;
uint32_t x64 = 8927U;
static volatile int32_t t15 = 124;
volatile uint8_t x65 = 0U;
int32_t x68 = 37895027;
int32_t t16 = 1277538;
static int16_t x70 = 0;
int8_t x71 = -60;
int16_t x80 = INT16_MAX;
int32_t t21 = -1;
int8_t x90 = -1;
int64_t x92 = INT64_MIN;
uint16_t x97 = 22U;
int16_t x98 = INT16_MIN;
int32_t x104 = -1;
uint64_t x108 = 91938LLU;
static uint8_t x109 = UINT8_MAX;
int16_t x122 = INT16_MAX;
int8_t x129 = INT8_MIN;
uint8_t x135 = 4U;
int64_t x140 = 1341000317869LL;
static volatile int32_t t34 = 2504;
static uint16_t x141 = 528U;
uint64_t x147 = 71542565380LLU;
volatile uint16_t x151 = 78U;
int64_t x153 = -1LL;
int64_t x156 = INT64_MIN;
uint64_t x164 = 14559239LLU;
volatile int32_t t43 = 10163;
uint16_t x178 = UINT16_MAX;
uint8_t x180 = UINT8_MAX;
volatile int32_t t44 = 231959;
volatile int32_t t46 = 25;
uint64_t x189 = 120LLU;
int8_t x197 = -1;
uint8_t x199 = UINT8_MAX;
int32_t t50 = -112205;
volatile uint64_t x218 = 753LLU;
volatile int64_t x223 = INT64_MAX;
int16_t x224 = -1;
uint64_t x228 = 100975912734244191LLU;
int16_t x232 = 0;
int64_t x233 = -121LL;
int64_t x243 = INT64_MAX;
int16_t x246 = INT16_MAX;
int8_t x248 = INT8_MIN;
int8_t x250 = 9;
int8_t x253 = INT8_MIN;
uint8_t x254 = 3U;
int64_t x257 = INT64_MIN;
volatile uint64_t x258 = 48312813954690080LLU;
volatile int64_t x259 = INT64_MAX;
static int32_t t64 = -116;
static volatile uint8_t x263 = UINT8_MAX;
int32_t x264 = INT32_MIN;
static volatile uint32_t x270 = UINT32_MAX;
int32_t t68 = -583685863;
int64_t x280 = INT64_MIN;
uint64_t x291 = UINT64_MAX;
volatile int8_t x297 = INT8_MIN;
uint32_t x306 = 36U;
int64_t x307 = -6589608231026148LL;
int64_t x308 = INT64_MAX;
int64_t x309 = 96551935LL;
volatile int32_t t77 = 206540549;
uint8_t x317 = UINT8_MAX;
static int64_t x326 = INT64_MIN;
static uint32_t x332 = UINT32_MAX;
int32_t t80 = 1451;
volatile int64_t x347 = INT64_MIN;
static int8_t x348 = -1;
static uint64_t x351 = 2208734968752LLU;
int8_t x353 = -27;
int32_t t86 = -925;
uint16_t x358 = UINT16_MAX;
int8_t x364 = -1;
static uint64_t x367 = 7501589LLU;
volatile int32_t t89 = 1;
static int64_t x372 = INT64_MIN;
int8_t x380 = INT8_MIN;
volatile int16_t x381 = -42;
int16_t x382 = 422;
volatile int32_t t96 = 3892943;
int32_t x402 = INT32_MAX;
volatile int32_t t98 = -813097;
volatile uint64_t x405 = UINT64_MAX;
uint64_t x408 = 246350LLU;
int16_t x414 = INT16_MIN;
uint64_t x416 = 97888236056646092LLU;
int32_t t100 = 1037366925;
static int8_t x424 = -35;
uint8_t x427 = 4U;
int64_t x429 = 19449828098516LL;
uint64_t x432 = 64192620LLU;
int32_t t104 = 0;
int32_t x433 = INT32_MIN;
static int64_t x435 = -629LL;
volatile int32_t t106 = 128147249;
static uint16_t x441 = 17544U;
volatile int64_t x443 = 11236161807LL;
volatile int16_t x448 = INT16_MAX;
int16_t x449 = -1;
volatile int32_t t110 = -319707843;
int32_t x463 = -1;
volatile int32_t t111 = 223098;
int16_t x469 = INT16_MIN;
int64_t x479 = INT64_MAX;
int32_t x484 = -95392;
volatile int32_t t117 = -56;
int32_t x491 = INT32_MIN;
static volatile int32_t t118 = 3505087;
volatile int32_t t119 = -125863;
volatile int32_t t120 = -14562663;
int64_t x501 = INT64_MIN;
uint16_t x503 = 16162U;
int16_t x504 = INT16_MIN;
int16_t x505 = INT16_MIN;
int64_t x508 = 225341141LL;
int64_t x510 = -33014220659352745LL;
uint16_t x514 = 10U;
static int16_t x516 = INT16_MIN;
uint8_t x517 = 21U;
static int8_t x520 = -1;
static volatile int8_t x523 = INT8_MIN;
int32_t t126 = -469706287;
uint64_t x528 = 7LLU;
static volatile int32_t x530 = INT32_MIN;
int64_t x533 = INT64_MAX;
static int32_t t129 = -2800638;
static int8_t x538 = 46;
static uint64_t x539 = UINT64_MAX;
int32_t t130 = 895;
int64_t x544 = INT64_MAX;
volatile int64_t x552 = INT64_MIN;
int64_t x557 = INT64_MIN;
static int16_t x562 = 2;
static volatile int16_t x563 = INT16_MIN;
int8_t x568 = INT8_MIN;
int32_t x569 = -27152373;
int32_t t137 = -821;
int16_t x577 = INT16_MAX;
int16_t x582 = INT16_MIN;
volatile int16_t x585 = 1302;
static uint16_t x590 = 26146U;
int32_t x600 = 107008977;
static uint16_t x605 = 6365U;
uint32_t x614 = 3990204U;
volatile int8_t x618 = INT8_MIN;
int32_t x621 = INT32_MIN;
volatile int32_t t149 = -929416;
uint8_t x630 = 11U;
int64_t x634 = -1LL;
int16_t x640 = INT16_MAX;
static int32_t t153 = 71209838;
volatile uint16_t x650 = UINT16_MAX;
int32_t t157 = 1;
volatile int16_t x657 = INT16_MAX;
uint64_t x658 = UINT64_MAX;
static int32_t t159 = 438765780;
int64_t x668 = -1LL;
volatile int32_t t161 = 0;
static volatile int32_t t164 = -1;
uint32_t x688 = 388964U;
int16_t x698 = -1;
int64_t x699 = -14020252LL;
static uint64_t x718 = 25LLU;
uint8_t x719 = 1U;
uint8_t x723 = 126U;
volatile int32_t t177 = 12938186;
int16_t x751 = 4;
static uint8_t x755 = 86U;
volatile int32_t t182 = -2;
int64_t x757 = -43912LL;
uint64_t x764 = UINT64_MAX;
uint32_t x767 = 228152U;
volatile uint32_t x769 = 0U;
int32_t t189 = 3;
int32_t x785 = -1;
uint8_t x790 = UINT8_MAX;
int64_t x791 = -549609LL;
int32_t x804 = INT32_MIN;
volatile int32_t t194 = 1916;
int8_t x809 = -1;
int8_t x810 = -1;
volatile int64_t x813 = -1LL;
volatile uint16_t x816 = 3U;
int32_t t198 = -493311393;


void f0(void) {
    	static int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MAX;
	int64_t x3 = -14026510647LL;
	uint8_t x4 = 122U;
	int32_t t0 = 1195;

    t0 = (x1>((x2/x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	int8_t x6 = INT8_MAX;
	int8_t x7 = -1;
	int32_t x8 = INT32_MAX;
	static int32_t t1 = 1201710;

    t1 = (x5>((x6/x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	int64_t x12 = 531339043912144916LL;
	static volatile int32_t t2 = -66916;

    t2 = (x9>((x10/x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 131U;
	static int64_t x14 = 57785089808700842LL;
	int64_t x15 = INT64_MIN;
	volatile int32_t x16 = INT32_MIN;
	static int32_t t3 = 1738;

    t3 = (x13>((x14/x15)>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 103U;
	int8_t x18 = 14;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -4;

    t4 = (x17>((x18/x19)>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 46310U;
	int8_t x22 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	static int32_t t5 = -435;

    t5 = (x21>((x22/x23)>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = 6885469;
	int32_t t6 = 20152898;

    t6 = (x25>((x26/x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int8_t x30 = 1;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = 76;

    t7 = (x29>((x30/x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -143933848LL;
	int8_t x34 = 3;
	int8_t x35 = -1;
	static volatile int32_t t8 = 47;

    t8 = (x33>((x34/x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 1229;

    t9 = (x37>((x38/x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = UINT16_MAX;
	static int16_t x42 = INT16_MIN;
	uint16_t x43 = 56U;
	static uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = 536729634;

    t10 = (x41>((x42/x43)>x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static volatile uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -263;
	static int32_t t11 = 357505;

    t11 = (x45>((x46/x47)>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MAX;
	int32_t x50 = -1482;
	volatile int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -2065;

    t12 = (x49>((x50/x51)>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x54 = 24U;
	volatile int32_t x56 = INT32_MAX;

    t13 = (x53>((x54/x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 4306U;
	static int16_t x58 = -1;
	static uint32_t x59 = UINT32_MAX;
	static uint8_t x60 = UINT8_MAX;

    t14 = (x57>((x58/x59)>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 34333140123065014LL;
	volatile int64_t x62 = -1857795243712LL;
	int16_t x63 = 15;

    t15 = (x61>((x62/x63)>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	static volatile uint8_t x67 = UINT8_MAX;

    t16 = (x65>((x66/x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 184;

    t17 = (x69>((x70/x71)>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = 73U;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = -1;
	int32_t t18 = 129112;

    t18 = (x73>((x74/x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	volatile int8_t x78 = -9;
	uint16_t x79 = 21U;
	int32_t t19 = -3223;

    t19 = (x77>((x78/x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	static uint32_t x82 = UINT32_MAX;
	int32_t x83 = INT32_MIN;
	int16_t x84 = 58;
	volatile int32_t t20 = 109875;

    t20 = (x81>((x82/x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = INT32_MIN;
	uint16_t x86 = UINT16_MAX;
	volatile int32_t x87 = -526340454;
	int64_t x88 = 32697211266LL;

    t21 = (x85>((x86/x87)>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile int32_t t22 = 1043204539;

    t22 = (x89>((x90/x91)>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	int64_t x94 = 86LL;
	static uint8_t x95 = 26U;
	volatile int8_t x96 = -15;
	volatile int32_t t23 = -47388;

    t23 = (x93>((x94/x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x99 = UINT32_MAX;
	uint8_t x100 = 6U;
	volatile int32_t t24 = -12;

    t24 = (x97>((x98/x99)>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = INT64_MAX;
	int16_t x102 = -1;
	int16_t x103 = -603;
	int32_t t25 = -726619;

    t25 = (x101>((x102/x103)>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1259;
	int8_t x106 = -1;
	uint64_t x107 = 111797598864LLU;
	static int32_t t26 = -12;

    t26 = (x105>((x106/x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = UINT64_MAX;
	int8_t x111 = 1;
	static int32_t x112 = 91480885;
	volatile int32_t t27 = -2313;

    t27 = (x109>((x110/x111)>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MIN;
	uint16_t x114 = 16479U;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -79667296;

    t28 = (x113>((x114/x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 251434U;
	uint32_t x118 = 4420067U;
	int64_t x119 = -1LL;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 354;

    t29 = (x117>((x118/x119)>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	int16_t x123 = INT16_MAX;
	int32_t x124 = INT32_MAX;
	int32_t t30 = -3821;

    t30 = (x121>((x122/x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 129727U;
	volatile uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MAX;
	int32_t t31 = 20537;

    t31 = (x125>((x126/x127)>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = INT8_MIN;
	int16_t x132 = -1;
	volatile int32_t t32 = -333833084;

    t32 = (x129>((x130/x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 28999U;
	int32_t x134 = INT32_MIN;
	volatile int8_t x136 = 3;
	int32_t t33 = 4671;

    t33 = (x133>((x134/x135)>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 23903U;

    t34 = (x137>((x138/x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = 130U;
	static uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MAX;
	static int32_t t35 = 8351113;

    t35 = (x141>((x142/x143)>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = 64;
	int32_t x148 = 7623697;
	int32_t t36 = -69544;

    t36 = (x145>((x146/x147)>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	uint16_t x150 = UINT16_MAX;
	volatile uint32_t x152 = 24011U;
	volatile int32_t t37 = 3764;

    t37 = (x149>((x150/x151)>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	int32_t t38 = -127597;

    t38 = (x153>((x154/x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = 23;
	volatile uint8_t x160 = 0U;
	volatile int32_t t39 = 500368;

    t39 = (x157>((x158/x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -19;
	static int64_t x162 = 5480075203998997LL;
	int64_t x163 = -1LL;
	volatile int32_t t40 = -1;

    t40 = (x161>((x162/x163)>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MAX;
	int8_t x166 = -1;
	static int8_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = -982507;

    t41 = (x165>((x166/x167)>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 46605759;
	int16_t x170 = -1;
	static int16_t x171 = -1;
	int64_t x172 = -1LL;
	int32_t t42 = 609956958;

    t42 = (x169>((x170/x171)>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -1;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = 1;

    t43 = (x173>((x174/x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int16_t x179 = INT16_MAX;

    t44 = (x177>((x178/x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	int32_t x182 = -1;
	volatile int16_t x183 = INT16_MIN;
	static int32_t x184 = -8;
	int32_t t45 = -100415;

    t45 = (x181>((x182/x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -1LL;
	int32_t x186 = INT32_MAX;
	static int8_t x187 = INT8_MAX;
	int64_t x188 = INT64_MAX;

    t46 = (x185>((x186/x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 43U;
	volatile int8_t x191 = -1;
	static uint64_t x192 = 564LLU;
	int32_t t47 = -503162160;

    t47 = (x189>((x190/x191)>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MIN;
	uint8_t x194 = UINT8_MAX;
	uint8_t x195 = 14U;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -435;

    t48 = (x193>((x194/x195)>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	uint16_t x200 = 28U;
	static int32_t t49 = 556985;

    t49 = (x197>((x198/x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 6U;
	uint16_t x202 = 1189U;
	static volatile int32_t x203 = -9187803;
	uint64_t x204 = UINT64_MAX;

    t50 = (x201>((x202/x203)>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = 388909483;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -772308;

    t51 = (x205>((x206/x207)>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;
	static int32_t x212 = 210234;
	int32_t t52 = 0;

    t52 = (x209>((x210/x211)>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 18992;
	volatile int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = 15530;
	volatile int32_t t53 = 4698;

    t53 = (x213>((x214/x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 30657224905595LL;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = INT32_MIN;
	static int32_t t54 = -1067933025;

    t54 = (x217>((x218/x219)>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int64_t x222 = -1LL;
	volatile int32_t t55 = 30;

    t55 = (x221>((x222/x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 37U;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MAX;
	volatile int32_t t56 = 3985400;

    t56 = (x225>((x226/x227)>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MIN;
	static int8_t x230 = -10;
	uint32_t x231 = 3U;
	int32_t t57 = -5;

    t57 = (x229>((x230/x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MIN;
	static int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = 1022434498;

    t58 = (x233>((x234/x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	volatile uint64_t x239 = 214973548001360LLU;
	int8_t x240 = INT8_MAX;
	int32_t t59 = 48425;

    t59 = (x237>((x238/x239)>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 166LLU;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 11004;

    t60 = (x241>((x242/x243)>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 5;
	int16_t x247 = INT16_MAX;
	int32_t t61 = -1296;

    t61 = (x245>((x246/x247)>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = 14753460;
	int32_t x251 = INT32_MIN;
	int8_t x252 = -30;
	int32_t t62 = 5711466;

    t62 = (x249>((x250/x251)>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = 47;

    t63 = (x253>((x254/x255)>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x260 = INT16_MIN;

    t64 = (x257>((x258/x259)>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	volatile int16_t x262 = -1;
	volatile int32_t t65 = -1043698;

    t65 = (x261>((x262/x263)>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	volatile int64_t x266 = -1LL;
	volatile int8_t x267 = INT8_MAX;
	volatile int8_t x268 = 45;
	int32_t t66 = -1;

    t66 = (x265>((x266/x267)>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	int16_t x271 = -4772;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -124;

    t67 = (x269>((x270/x271)>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 12U;
	volatile int32_t x274 = -1;
	int64_t x275 = -12LL;
	int64_t x276 = INT64_MIN;

    t68 = (x273>((x274/x275)>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	int32_t t69 = -437;

    t69 = (x277>((x278/x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	volatile uint8_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	static int32_t x284 = -1;
	int32_t t70 = 525562;

    t70 = (x281>((x282/x283)>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	static int32_t x286 = -1;
	int8_t x287 = 1;
	int64_t x288 = 1LL;
	volatile int32_t t71 = 23;

    t71 = (x285>((x286/x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 388017U;
	static int64_t x290 = 41908648608728LL;
	int8_t x292 = 26;
	int32_t t72 = -1006;

    t72 = (x289>((x290/x291)>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	volatile uint64_t x295 = 994412707342873LLU;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 240151770;

    t73 = (x293>((x294/x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x298 = 39843563143LLU;
	int8_t x299 = -1;
	int8_t x300 = 2;
	static int32_t t74 = -244115174;

    t74 = (x297>((x298/x299)>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	volatile int32_t t75 = 215;

    t75 = (x305>((x306/x307)>x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x310 = INT8_MIN;
	uint64_t x311 = 1857348990071854LLU;
	int16_t x312 = 130;
	int32_t t76 = -1221;

    t76 = (x309>((x310/x311)>x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x313 = 3U;
	uint8_t x314 = 1U;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = 6;

    t77 = (x313>((x314/x315)>x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x318 = INT16_MIN;
	static volatile int16_t x319 = INT16_MAX;
	static int16_t x320 = INT16_MIN;
	int32_t t78 = 591671;

    t78 = (x317>((x318/x319)>x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = UINT16_MAX;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t79 = -11759606;

    t79 = (x325>((x326/x327)>x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static uint64_t x331 = 1LLU;

    t80 = (x329>((x330/x331)>x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile int8_t x334 = 2;
	volatile int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	int32_t t81 = 18;

    t81 = (x333>((x334/x335)>x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x337 = 85LLU;
	int64_t x338 = INT64_MIN;
	static volatile int64_t x339 = 44352277631513766LL;
	static int8_t x340 = INT8_MAX;
	int32_t t82 = 11;

    t82 = (x337>((x338/x339)>x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x341 = 15U;
	volatile uint8_t x342 = 12U;
	static int16_t x343 = -1;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t83 = 193;

    t83 = (x341>((x342/x343)>x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x345 = 24872LLU;
	int16_t x346 = INT16_MIN;
	static int32_t t84 = 487343996;

    t84 = (x345>((x346/x347)>x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = INT32_MIN;
	int32_t x350 = -1;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t85 = -5;

    t85 = (x349>((x350/x351)>x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 16867557093LLU;
	int32_t x356 = 815;

    t86 = (x353>((x354/x355)>x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x357 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	volatile int32_t t87 = 601755;

    t87 = (x357>((x358/x359)>x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = 1;
	int32_t x362 = 24;
	int16_t x363 = -1;
	int32_t t88 = -2;

    t88 = (x361>((x362/x363)>x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = -1LL;
	int8_t x366 = -1;
	static int16_t x368 = INT16_MAX;

    t89 = (x365>((x366/x367)>x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x369 = -1;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 516512364103LLU;
	int32_t t90 = 360;

    t90 = (x369>((x370/x371)>x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = 3547961538LL;
	int8_t x374 = 59;
	volatile int64_t x375 = -1431086LL;
	int64_t x376 = 2281LL;
	int32_t t91 = 113034739;

    t91 = (x373>((x374/x375)>x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = -15;
	int32_t x378 = INT32_MIN;
	int16_t x379 = 734;
	int32_t t92 = -3;

    t92 = (x377>((x378/x379)>x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = 22529876;

    t93 = (x381>((x382/x383)>x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x385 = 1954710;
	int8_t x386 = INT8_MAX;
	int32_t x387 = -1;
	int8_t x388 = -1;
	volatile int32_t t94 = 1846865;

    t94 = (x385>((x386/x387)>x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = 40;
	uint64_t x391 = 4031340368055095519LLU;
	volatile int64_t x392 = -1LL;
	static volatile int32_t t95 = 9076061;

    t95 = (x389>((x390/x391)>x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x393 = -2;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MAX;

    t96 = (x393>((x394/x395)>x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x397 = -1;
	uint8_t x398 = 31U;
	int64_t x399 = 1022349539643660LL;
	int8_t x400 = INT8_MAX;
	static int32_t t97 = 614728;

    t97 = (x397>((x398/x399)>x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x401 = 3U;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = -58796;

    t98 = (x401>((x402/x403)>x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x406 = 4U;
	int8_t x407 = -1;
	volatile int32_t t99 = 81576200;

    t99 = (x405>((x406/x407)>x408));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = 4071;
	int64_t x415 = 122725742791576218LL;

    t100 = (x413>((x414/x415)>x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	static int32_t x418 = 529663870;
	uint64_t x419 = 1243085532LLU;
	int16_t x420 = 2;
	int32_t t101 = -217881;

    t101 = (x417>((x418/x419)>x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = INT64_MAX;
	uint16_t x422 = 2321U;
	uint64_t x423 = 1LLU;
	int32_t t102 = 275;

    t102 = (x421>((x422/x423)>x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = 2900;
	volatile int16_t x426 = INT16_MIN;
	int16_t x428 = 8;
	int32_t t103 = -3171192;

    t103 = (x425>((x426/x427)>x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x430 = INT8_MIN;
	uint8_t x431 = 15U;

    t104 = (x429>((x430/x431)>x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x434 = -1;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t105 = 331;

    t105 = (x433>((x434/x435)>x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = -1;
	uint16_t x438 = 1U;
	uint8_t x439 = UINT8_MAX;
	static uint16_t x440 = 48U;

    t106 = (x437>((x438/x439)>x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x442 = INT64_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t107 = -53;

    t107 = (x441>((x442/x443)>x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x445 = INT16_MIN;
	int32_t x446 = -273393117;
	int16_t x447 = -692;
	static volatile int32_t t108 = 21724856;

    t108 = (x445>((x446/x447)>x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x450 = 286303U;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	static int32_t t109 = -1575519;

    t109 = (x449>((x450/x451)>x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MAX;
	uint16_t x455 = UINT16_MAX;
	volatile uint32_t x456 = 512426011U;

    t110 = (x453>((x454/x455)>x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x461 = INT32_MIN;
	uint8_t x462 = UINT8_MAX;
	int64_t x464 = INT64_MAX;

    t111 = (x461>((x462/x463)>x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x465 = INT32_MIN;
	volatile int32_t x466 = INT32_MIN;
	static int16_t x467 = -5;
	static int64_t x468 = INT64_MIN;
	int32_t t112 = 1;

    t112 = (x465>((x466/x467)>x468));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x470 = -1;
	int32_t x471 = -1;
	static uint8_t x472 = UINT8_MAX;
	int32_t t113 = -385285226;

    t113 = (x469>((x470/x471)>x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x473 = 13912171;
	volatile int16_t x474 = -12811;
	int8_t x475 = 5;
	int64_t x476 = INT64_MIN;
	volatile int32_t t114 = 12336;

    t114 = (x473>((x474/x475)>x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x477 = -1;
	uint8_t x478 = 11U;
	int8_t x480 = INT8_MAX;
	int32_t t115 = 1316321;

    t115 = (x477>((x478/x479)>x480));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x481 = -388;
	int64_t x482 = INT64_MAX;
	volatile uint64_t x483 = 520869350795097037LLU;
	static int32_t t116 = -162;

    t116 = (x481>((x482/x483)>x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	uint64_t x487 = 6449LLU;
	static volatile uint32_t x488 = UINT32_MAX;

    t117 = (x485>((x486/x487)>x488));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = INT32_MAX;
	uint16_t x490 = 12U;
	uint16_t x492 = 5U;

    t118 = (x489>((x490/x491)>x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x493 = INT16_MIN;
	uint8_t x494 = 95U;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -1;

    t119 = (x493>((x494/x495)>x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x497 = UINT32_MAX;
	int32_t x498 = 2742329;
	volatile uint8_t x499 = UINT8_MAX;
	static int64_t x500 = -1LL;

    t120 = (x497>((x498/x499)>x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x502 = INT8_MIN;
	int32_t t121 = 213;

    t121 = (x501>((x502/x503)>x504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x506 = INT32_MAX;
	volatile uint32_t x507 = UINT32_MAX;
	volatile int32_t t122 = -1552559;

    t122 = (x505>((x506/x507)>x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = -744307178;
	volatile int16_t x511 = -1;
	uint64_t x512 = 429383887LLU;
	volatile int32_t t123 = 2770;

    t123 = (x509>((x510/x511)>x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x515 = -6;
	int32_t t124 = 1;

    t124 = (x513>((x514/x515)>x516));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x518 = UINT32_MAX;
	int64_t x519 = INT64_MAX;
	static int32_t t125 = 0;

    t125 = (x517>((x518/x519)>x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x521 = 314844LL;
	int32_t x522 = INT32_MAX;
	volatile int32_t x524 = INT32_MAX;

    t126 = (x521>((x522/x523)>x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = 0;
	uint64_t x526 = 962LLU;
	int32_t x527 = INT32_MIN;
	volatile int32_t t127 = 407;

    t127 = (x525>((x526/x527)>x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x529 = 0;
	volatile int8_t x531 = 11;
	int32_t x532 = 1311766;
	int32_t t128 = -54;

    t128 = (x529>((x530/x531)>x532));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MAX;
	int8_t x536 = -1;

    t129 = (x533>((x534/x535)>x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x540 = INT64_MIN;

    t130 = (x537>((x538/x539)>x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = 2455049640082740480LLU;
	uint32_t x542 = 1944U;
	volatile int64_t x543 = -131293239860140LL;
	volatile int32_t t131 = -57632;

    t131 = (x541>((x542/x543)>x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x549 = INT64_MAX;
	int16_t x550 = 15343;
	int8_t x551 = INT8_MAX;
	static volatile int32_t t132 = 778441;

    t132 = (x549>((x550/x551)>x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x554 = INT16_MIN;
	static volatile uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MAX;
	int32_t t133 = -591;

    t133 = (x553>((x554/x555)>x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x558 = INT64_MAX;
	int16_t x559 = -1;
	int32_t x560 = INT32_MAX;
	int32_t t134 = -27634;

    t134 = (x557>((x558/x559)>x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = -1;
	int8_t x564 = 1;
	int32_t t135 = 588661029;

    t135 = (x561>((x562/x563)>x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MIN;
	int32_t x567 = INT32_MIN;
	volatile int32_t t136 = -737612;

    t136 = (x565>((x566/x567)>x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x570 = INT64_MAX;
	int8_t x571 = INT8_MAX;
	volatile uint32_t x572 = 1332U;

    t137 = (x569>((x570/x571)>x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x573 = INT64_MIN;
	int16_t x574 = -1;
	volatile int32_t x575 = INT32_MIN;
	int64_t x576 = -1LL;
	volatile int32_t t138 = 56398;

    t138 = (x573>((x574/x575)>x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x578 = INT32_MIN;
	volatile int64_t x579 = INT64_MAX;
	volatile int8_t x580 = 1;
	static volatile int32_t t139 = -112838;

    t139 = (x577>((x578/x579)>x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = 1;
	static volatile uint64_t x583 = UINT64_MAX;
	static uint64_t x584 = UINT64_MAX;
	volatile int32_t t140 = 1;

    t140 = (x581>((x582/x583)>x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x586 = -1;
	uint32_t x587 = 1U;
	static uint64_t x588 = UINT64_MAX;
	static volatile int32_t t141 = 7015190;

    t141 = (x585>((x586/x587)>x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x589 = 4970911U;
	int16_t x591 = -1879;
	int32_t x592 = -1;
	static int32_t t142 = -109339936;

    t142 = (x589>((x590/x591)>x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = 53;
	int64_t x595 = -79603839LL;
	static volatile uint64_t x596 = UINT64_MAX;
	volatile int32_t t143 = -1;

    t143 = (x593>((x594/x595)>x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x597 = -1LL;
	int16_t x598 = INT16_MAX;
	volatile int32_t x599 = INT32_MIN;
	volatile int32_t t144 = 1;

    t144 = (x597>((x598/x599)>x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x606 = INT16_MIN;
	static uint8_t x607 = UINT8_MAX;
	int64_t x608 = 850873741309267113LL;
	int32_t t145 = -87792;

    t145 = (x605>((x606/x607)>x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x609 = 100U;
	volatile uint64_t x610 = UINT64_MAX;
	uint8_t x611 = 72U;
	int8_t x612 = -1;
	int32_t t146 = -529;

    t146 = (x609>((x610/x611)>x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x613 = 1U;
	static uint8_t x615 = UINT8_MAX;
	int8_t x616 = INT8_MIN;
	static int32_t t147 = -18;

    t147 = (x613>((x614/x615)>x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x617 = 2472U;
	static int32_t x619 = 534;
	int32_t x620 = INT32_MIN;
	volatile int32_t t148 = 428993;

    t148 = (x617>((x618/x619)>x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x622 = -1;
	int32_t x623 = INT32_MIN;
	uint32_t x624 = UINT32_MAX;

    t149 = (x621>((x622/x623)>x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x625 = 740U;
	int16_t x626 = -1;
	volatile uint32_t x627 = 6014U;
	volatile int32_t x628 = 28107323;
	volatile int32_t t150 = -633918212;

    t150 = (x625>((x626/x627)>x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x629 = INT16_MIN;
	int32_t x631 = INT32_MAX;
	volatile int16_t x632 = 840;
	volatile int32_t t151 = 2067;

    t151 = (x629>((x630/x631)>x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x633 = 0U;
	int16_t x635 = -1;
	uint64_t x636 = 33995476793946LLU;
	int32_t t152 = -1;

    t152 = (x633>((x634/x635)>x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x637 = 993LL;
	int16_t x638 = INT16_MIN;
	volatile int16_t x639 = INT16_MIN;

    t153 = (x637>((x638/x639)>x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x641 = UINT32_MAX;
	static int8_t x642 = INT8_MAX;
	uint32_t x643 = 986970U;
	int64_t x644 = INT64_MIN;
	static volatile int32_t t154 = 857817820;

    t154 = (x641>((x642/x643)>x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x645 = -757316700539LL;
	int16_t x646 = INT16_MAX;
	uint64_t x647 = UINT64_MAX;
	uint64_t x648 = 5260498267266213LLU;
	int32_t t155 = 200352;

    t155 = (x645>((x646/x647)>x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x649 = 13;
	uint32_t x651 = 31U;
	int8_t x652 = -3;
	int32_t t156 = 451;

    t156 = (x649>((x650/x651)>x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x653 = -1;
	static uint8_t x654 = 74U;
	int8_t x655 = -1;
	volatile int16_t x656 = -217;

    t157 = (x653>((x654/x655)>x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x659 = 3U;
	int64_t x660 = INT64_MAX;
	int32_t t158 = 596008;

    t158 = (x657>((x658/x659)>x660));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x661 = INT64_MIN;
	static int32_t x662 = INT32_MIN;
	int16_t x663 = INT16_MIN;
	volatile uint32_t x664 = UINT32_MAX;

    t159 = (x661>((x662/x663)>x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = INT32_MIN;
	int16_t x667 = -96;
	volatile int32_t t160 = -80575;

    t160 = (x665>((x666/x667)>x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x669 = INT8_MIN;
	volatile uint64_t x670 = UINT64_MAX;
	volatile int8_t x671 = 29;
	int16_t x672 = INT16_MIN;

    t161 = (x669>((x670/x671)>x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x673 = 11;
	int16_t x674 = 0;
	static int32_t x675 = 13461794;
	static volatile uint64_t x676 = UINT64_MAX;
	volatile int32_t t162 = 182913;

    t162 = (x673>((x674/x675)>x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = 106321099LL;
	uint8_t x678 = UINT8_MAX;
	uint8_t x679 = 5U;
	volatile int64_t x680 = INT64_MAX;
	int32_t t163 = -7535892;

    t163 = (x677>((x678/x679)>x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x681 = INT64_MAX;
	volatile uint32_t x682 = 254922U;
	static uint32_t x683 = UINT32_MAX;
	int32_t x684 = -1599578;

    t164 = (x681>((x682/x683)>x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = 24;
	static int8_t x686 = -1;
	int8_t x687 = 1;
	static int32_t t165 = -1;

    t165 = (x685>((x686/x687)>x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x689 = UINT32_MAX;
	int64_t x690 = 50LL;
	volatile uint16_t x691 = UINT16_MAX;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t166 = 512296;

    t166 = (x689>((x690/x691)>x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x693 = 0U;
	static int32_t x694 = 78520929;
	uint32_t x695 = UINT32_MAX;
	uint8_t x696 = 2U;
	int32_t t167 = 58446578;

    t167 = (x693>((x694/x695)>x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x697 = 3879931U;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t168 = -63953;

    t168 = (x697>((x698/x699)>x700));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MAX;
	static int64_t x703 = INT64_MIN;
	uint16_t x704 = 3U;
	volatile int32_t t169 = 552395;

    t169 = (x701>((x702/x703)>x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x706 = -1;
	volatile int8_t x707 = -1;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t170 = 6366875;

    t170 = (x705>((x706/x707)>x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x709 = INT64_MAX;
	int16_t x710 = 1;
	int64_t x711 = 1833600517603753LL;
	uint64_t x712 = UINT64_MAX;
	static int32_t t171 = 1152;

    t171 = (x709>((x710/x711)>x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x713 = INT16_MIN;
	volatile int32_t x714 = INT32_MIN;
	uint8_t x715 = 85U;
	uint32_t x716 = 116859525U;
	volatile int32_t t172 = 1;

    t172 = (x713>((x714/x715)>x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x717 = 32U;
	int64_t x720 = INT64_MIN;
	int32_t t173 = 29;

    t173 = (x717>((x718/x719)>x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = -1;
	static volatile int64_t x724 = INT64_MIN;
	volatile int32_t t174 = 985;

    t174 = (x721>((x722/x723)>x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = INT64_MIN;
	static int32_t x726 = -157;
	static uint16_t x727 = 675U;
	int16_t x728 = -1;
	int32_t t175 = -12573236;

    t175 = (x725>((x726/x727)>x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = 444U;
	static volatile int32_t x730 = INT32_MAX;
	volatile int8_t x731 = INT8_MIN;
	int16_t x732 = INT16_MIN;
	volatile int32_t t176 = -162522;

    t176 = (x729>((x730/x731)>x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = -1;
	volatile int8_t x734 = -1;
	int32_t x735 = INT32_MIN;
	int64_t x736 = 14522920LL;

    t177 = (x733>((x734/x735)>x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x737 = 21521U;
	volatile int16_t x738 = INT16_MIN;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	volatile int32_t t178 = 1867;

    t178 = (x737>((x738/x739)>x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x741 = 724801917U;
	uint16_t x742 = 0U;
	uint8_t x743 = 55U;
	int8_t x744 = INT8_MIN;
	volatile int32_t t179 = 14597;

    t179 = (x741>((x742/x743)>x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x745 = -1;
	int32_t x746 = INT32_MAX;
	int32_t x747 = -1;
	int8_t x748 = -1;
	int32_t t180 = -175633917;

    t180 = (x745>((x746/x747)>x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MAX;
	uint64_t x750 = 59LLU;
	volatile uint8_t x752 = 7U;
	int32_t t181 = 43;

    t181 = (x749>((x750/x751)>x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x753 = UINT32_MAX;
	volatile int32_t x754 = -1;
	static int64_t x756 = INT64_MAX;

    t182 = (x753>((x754/x755)>x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x758 = INT32_MIN;
	static int8_t x759 = INT8_MAX;
	static uint64_t x760 = UINT64_MAX;
	int32_t t183 = -7;

    t183 = (x757>((x758/x759)>x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x761 = 4;
	int32_t x762 = -1;
	uint16_t x763 = 2678U;
	int32_t t184 = -10015175;

    t184 = (x761>((x762/x763)>x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint8_t x765 = 16U;
	uint32_t x766 = 0U;
	int32_t x768 = INT32_MIN;
	static int32_t t185 = -395;

    t185 = (x765>((x766/x767)>x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x770 = INT16_MAX;
	uint64_t x771 = 6613642046230530LLU;
	uint8_t x772 = 67U;
	int32_t t186 = 0;

    t186 = (x769>((x770/x771)>x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = 48347735633LL;
	int32_t x774 = 847;
	static int64_t x775 = -1LL;
	int64_t x776 = INT64_MIN;
	int32_t t187 = -3;

    t187 = (x773>((x774/x775)>x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = INT32_MAX;
	static int16_t x778 = INT16_MIN;
	static int16_t x779 = -1;
	static volatile int8_t x780 = INT8_MAX;
	volatile int32_t t188 = -66292;

    t188 = (x777>((x778/x779)>x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x781 = -1LL;
	int32_t x782 = 50;
	static int64_t x783 = -1LL;
	int32_t x784 = INT32_MIN;

    t189 = (x781>((x782/x783)>x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x786 = -1;
	uint8_t x787 = 18U;
	static int64_t x788 = INT64_MIN;
	int32_t t190 = 85933652;

    t190 = (x785>((x786/x787)>x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = INT64_MIN;
	int64_t x792 = -1041177133141LL;
	static volatile int32_t t191 = 234223375;

    t191 = (x789>((x790/x791)>x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x793 = 7;
	static volatile int64_t x794 = INT64_MIN;
	static volatile int64_t x795 = INT64_MIN;
	volatile int8_t x796 = 53;
	int32_t t192 = 1;

    t192 = (x793>((x794/x795)>x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x798 = 35U;
	int16_t x799 = -11;
	int64_t x800 = INT64_MAX;
	static int32_t t193 = 2;

    t193 = (x797>((x798/x799)>x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x801 = 0U;
	volatile uint64_t x802 = 12567LLU;
	int32_t x803 = 1877097;

    t194 = (x801>((x802/x803)>x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x805 = UINT8_MAX;
	int64_t x806 = -1LL;
	uint64_t x807 = UINT64_MAX;
	int8_t x808 = INT8_MAX;
	static volatile int32_t t195 = 20401554;

    t195 = (x805>((x806/x807)>x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x811 = INT8_MAX;
	volatile int16_t x812 = -1033;
	int32_t t196 = -15;

    t196 = (x809>((x810/x811)>x812));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x814 = 1U;
	static int8_t x815 = INT8_MAX;
	volatile int32_t t197 = 7;

    t197 = (x813>((x814/x815)>x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x817 = -1LL;
	static int16_t x818 = -1;
	uint64_t x819 = UINT64_MAX;
	int16_t x820 = 15892;

    t198 = (x817>((x818/x819)>x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = -27979;
	static uint16_t x822 = UINT16_MAX;
	int8_t x823 = -1;
	int64_t x824 = 463748165LL;
	static volatile int32_t t199 = 178;

    t199 = (x821>((x822/x823)>x824));

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

