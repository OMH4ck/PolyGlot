
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

static volatile int32_t x7 = INT32_MIN;
uint8_t x17 = 84U;
int16_t x21 = INT16_MIN;
int8_t x23 = -7;
int32_t x24 = -25;
int64_t x29 = -1849253686949775LL;
int32_t t5 = 2228;
volatile int32_t x37 = 46463987;
int16_t x42 = INT16_MAX;
volatile uint32_t x44 = 11482355U;
int32_t t8 = 40338;
int8_t x45 = 4;
int16_t x48 = INT16_MIN;
static volatile int32_t t9 = -185937;
int32_t x56 = 980;
uint64_t x69 = 3LLU;
volatile int16_t x79 = 678;
static uint32_t x80 = UINT32_MAX;
static int64_t x82 = 248983060LL;
static int16_t x92 = INT16_MAX;
int32_t t18 = -14639103;
int8_t x93 = -1;
int64_t x99 = INT64_MAX;
volatile int8_t x109 = INT8_MAX;
int64_t x111 = 2174951LL;
volatile int32_t t24 = -83;
int64_t x132 = INT64_MAX;
static volatile uint32_t x136 = UINT32_MAX;
int32_t t27 = -13;
int8_t x142 = -18;
int16_t x144 = -1;
volatile int8_t x148 = INT8_MAX;
volatile int32_t t31 = -876;
int32_t x155 = -5349271;
int32_t t32 = -40;
static uint16_t x169 = 8030U;
static uint16_t x189 = 1U;
int16_t x196 = INT16_MIN;
static int32_t t40 = 5663301;
int16_t x202 = 32;
static volatile uint32_t x203 = 485572445U;
static volatile int32_t t41 = 20;
static volatile int16_t x206 = -1;
int32_t x208 = INT32_MIN;
int32_t t44 = -860236999;
int64_t x233 = 616562497719969280LL;
static int8_t x235 = INT8_MIN;
volatile int32_t t45 = -188796;
static int16_t x239 = -1;
int64_t x251 = INT64_MAX;
volatile uint64_t x256 = UINT64_MAX;
volatile int32_t t52 = 444;
int8_t x266 = -1;
static volatile int32_t t53 = 18;
int32_t x270 = INT32_MIN;
static int16_t x271 = INT16_MIN;
uint8_t x275 = UINT8_MAX;
uint8_t x277 = UINT8_MAX;
volatile uint32_t x282 = 3U;
int8_t x290 = INT8_MIN;
int32_t t58 = 1;
uint16_t x299 = 3U;
int32_t x300 = -1;
int32_t t62 = -2786;
int32_t x316 = -3035494;
int64_t x318 = -1LL;
int64_t x320 = 42001293LL;
uint32_t x325 = 229925352U;
uint64_t x326 = 3020619306260964LLU;
volatile int32_t x329 = INT32_MIN;
uint64_t x330 = 12439424820414LLU;
static uint16_t x337 = 1U;
int32_t x339 = 65424;
static uint8_t x341 = 91U;
volatile int32_t t68 = -29667;
volatile int8_t x346 = INT8_MIN;
int32_t x354 = -1;
static uint64_t x355 = UINT64_MAX;
uint32_t x356 = UINT32_MAX;
volatile uint64_t x388 = UINT64_MAX;
int32_t t77 = -90;
uint64_t x389 = UINT64_MAX;
static volatile int64_t x391 = -1LL;
static volatile int32_t x392 = 24594;
uint8_t x393 = 89U;
int64_t x405 = INT64_MAX;
int32_t t82 = -2;
static int32_t x417 = INT32_MIN;
int16_t x418 = 2786;
static int16_t x420 = INT16_MAX;
static uint16_t x426 = UINT16_MAX;
static volatile uint8_t x437 = 8U;
uint8_t x439 = 1U;
volatile int16_t x444 = -1;
uint32_t x452 = UINT32_MAX;
static int64_t x457 = -1LL;
int8_t x460 = 50;
int64_t x469 = -32273242371LL;
int64_t x476 = INT64_MIN;
volatile int32_t t93 = 18402;
uint64_t x486 = 253LLU;
volatile int32_t t96 = 876660;
int16_t x490 = INT16_MIN;
int32_t t98 = 11;
int64_t x499 = -19623934480LL;
uint16_t x500 = 496U;
int8_t x503 = 0;
int32_t x504 = INT32_MAX;
volatile int32_t t100 = 3619429;
int16_t x511 = -848;
int64_t x512 = -55LL;
int64_t x517 = INT64_MIN;
int16_t x523 = INT16_MAX;
int32_t x524 = -4870688;
volatile int16_t x525 = INT16_MAX;
uint32_t x526 = 63U;
volatile int64_t x531 = 0LL;
int32_t x542 = -1;
static uint32_t x547 = 731400003U;
static volatile uint8_t x560 = 32U;
static volatile int32_t t112 = -51114008;
static int8_t x567 = -1;
int32_t x568 = INT32_MIN;
uint8_t x571 = UINT8_MAX;
volatile int32_t t115 = -300;
uint64_t x582 = 1256664420110849891LLU;
static int32_t x583 = INT32_MAX;
int64_t x584 = -1LL;
static uint8_t x586 = 53U;
static int64_t x594 = -2746966522LL;
static volatile int32_t t119 = -12934;
static int8_t x599 = -1;
static uint8_t x601 = UINT8_MAX;
uint32_t x603 = 11U;
int32_t t122 = -4;
int8_t x613 = INT8_MIN;
static uint8_t x615 = 17U;
static int32_t t125 = 331492;
int64_t x626 = INT64_MAX;
uint32_t x630 = 7596U;
volatile uint64_t x636 = UINT64_MAX;
int32_t t129 = 3;
int8_t x641 = 17;
volatile int8_t x648 = INT8_MAX;
uint64_t x654 = 48102LLU;
uint64_t x656 = 7616590336LLU;
int32_t t134 = -461927;
volatile uint32_t x670 = 228209U;
int64_t x681 = INT64_MIN;
int64_t x684 = INT64_MIN;
volatile int32_t t141 = 4061834;
int32_t x699 = INT32_MAX;
volatile int32_t t143 = 83077;
int64_t x702 = -1LL;
int8_t x709 = -1;
static int32_t x715 = 0;
static uint64_t x717 = 6168133LLU;
int32_t x721 = INT32_MIN;
static volatile int32_t x727 = INT32_MIN;
int64_t x728 = -1LL;
static int32_t x730 = -3491232;
volatile int32_t t151 = -216158;
static uint8_t x734 = 11U;
int64_t x740 = INT64_MIN;
volatile int8_t x741 = -1;
int16_t x743 = INT16_MIN;
static int32_t t155 = 6111;
int32_t t156 = 268334533;
uint32_t x762 = 726U;
volatile int32_t x769 = INT32_MAX;
int16_t x772 = -1;
volatile int8_t x778 = 7;
uint32_t x780 = 1391186U;
int8_t x781 = INT8_MAX;
uint16_t x784 = 1178U;
static volatile uint64_t x791 = UINT64_MAX;
volatile int32_t x792 = 173347857;
volatile int64_t x793 = INT64_MIN;
static int16_t x795 = INT16_MAX;
int16_t x803 = -1;
static int32_t x805 = -1;
uint64_t x806 = 192464578769LLU;
int64_t x810 = 1946108015417838147LL;
int32_t x811 = INT32_MAX;
static uint8_t x814 = 4U;
uint32_t x816 = 3682U;
volatile int32_t t171 = -712652;
uint64_t x817 = 107232086054LLU;
static volatile uint8_t x818 = UINT8_MAX;
static int8_t x826 = 8;
int8_t x829 = -1;
int32_t t174 = -142;
volatile uint16_t x839 = UINT16_MAX;
uint32_t x848 = UINT32_MAX;
static int32_t x849 = INT32_MAX;
uint16_t x851 = 6U;
int32_t t179 = 148835;
volatile int32_t x859 = INT32_MIN;
int32_t x860 = INT32_MAX;
uint8_t x869 = UINT8_MAX;
int32_t x870 = INT32_MIN;
volatile uint32_t x885 = UINT32_MAX;
int16_t x895 = -10901;
volatile int32_t t190 = -1;
int8_t x899 = -46;
int32_t t191 = -3;
uint8_t x901 = 47U;
int32_t t192 = 1;
volatile int32_t t193 = 12270;
static uint8_t x912 = UINT8_MAX;
int8_t x932 = -1;
static int64_t x937 = -1LL;
int32_t t198 = 3;


void f0(void) {
    	static volatile uint8_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	static volatile uint64_t x8 = UINT64_MAX;
	int32_t t0 = -121319184;

    t0 = (x5!=((x6-x7)/x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 730316U;
	uint8_t x10 = 6U;
	int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MIN;
	static volatile int32_t t1 = -1420125;

    t1 = (x9!=((x10-x11)/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 6;
	volatile int32_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	volatile int32_t t2 = -942270407;

    t2 = (x13!=((x14-x15)/x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x18 = -1;
	static volatile int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t3 = 28268;

    t3 = (x17!=((x18-x19)/x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = 53;
	volatile int32_t t4 = 158;

    t4 = (x21!=((x22-x23)/x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x30 = -1;
	int8_t x31 = -4;
	volatile int16_t x32 = INT16_MAX;

    t5 = (x29!=((x30-x31)/x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = INT8_MAX;
	static int32_t x34 = 10;
	static int16_t x35 = INT16_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t6 = 1;

    t6 = (x33!=((x34-x35)/x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x38 = 153406272;
	volatile int8_t x39 = INT8_MIN;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t7 = 28900572;

    t7 = (x37!=((x38-x39)/x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -23;
	int16_t x43 = INT16_MIN;

    t8 = (x41!=((x42-x43)/x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x46 = -1;
	int64_t x47 = INT64_MAX;

    t9 = (x45!=((x46-x47)/x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 54U;
	static int64_t x54 = INT64_MIN;
	static volatile int16_t x55 = -1;
	volatile int32_t t10 = 100904905;

    t10 = (x53!=((x54-x55)/x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x57 = UINT32_MAX;
	static int32_t x58 = INT32_MIN;
	uint64_t x59 = 6784072895244060179LLU;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t11 = 667;

    t11 = (x57!=((x58-x59)/x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = 7450792LL;
	volatile int16_t x62 = -1;
	int16_t x63 = INT16_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t12 = -1354540;

    t12 = (x61!=((x62-x63)/x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	static int64_t x68 = 88035080800398116LL;
	int32_t t13 = 31015;

    t13 = (x65!=((x66-x67)/x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	int32_t x72 = -1;
	volatile int32_t t14 = 3808;

    t14 = (x69!=((x70-x71)/x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MAX;
	int16_t x74 = 243;
	int64_t x75 = -570344556063LL;
	volatile int64_t x76 = -1LL;
	volatile int32_t t15 = -47;

    t15 = (x73!=((x74-x75)/x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	volatile int64_t x78 = -1LL;
	static int32_t t16 = 0;

    t16 = (x77!=((x78-x79)/x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x81 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t17 = -48314537;

    t17 = (x81!=((x82-x83)/x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MAX;
	static volatile uint8_t x90 = 12U;
	int32_t x91 = -1;

    t18 = (x89!=((x90-x91)/x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x94 = INT8_MIN;
	int32_t x95 = -7321883;
	uint32_t x96 = 825249624U;
	volatile int32_t t19 = 575;

    t19 = (x93!=((x94-x95)/x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = INT32_MAX;
	int8_t x100 = -1;
	int32_t t20 = -85;

    t20 = (x97!=((x98-x99)/x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = -361;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = -101;
	int16_t x108 = INT16_MIN;
	volatile int32_t t21 = 127;

    t21 = (x105!=((x106-x107)/x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x110 = -1;
	uint32_t x112 = 16070787U;
	static int32_t t22 = 39386;

    t22 = (x109!=((x110-x111)/x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x117 = 5912LLU;
	static uint32_t x118 = 49U;
	volatile int32_t x119 = INT32_MIN;
	static volatile uint8_t x120 = 6U;
	int32_t t23 = -55797377;

    t23 = (x117!=((x118-x119)/x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x121 = 694305963U;
	uint32_t x122 = 27U;
	uint8_t x123 = 3U;
	static uint8_t x124 = 3U;

    t24 = (x121!=((x122-x123)/x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	volatile uint32_t x128 = 41725U;
	volatile int32_t t25 = 103312345;

    t25 = (x125!=((x126-x127)/x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = -1;
	int32_t x130 = 338832531;
	int8_t x131 = -1;
	volatile int32_t t26 = 0;

    t26 = (x129!=((x130-x131)/x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x133 = INT8_MIN;
	static uint64_t x134 = UINT64_MAX;
	uint16_t x135 = 1467U;

    t27 = (x133!=((x134-x135)/x136));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x137 = 244504LLU;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 54484559245730LLU;
	volatile int32_t x140 = -1;
	volatile int32_t t28 = 4525047;

    t28 = (x137!=((x138-x139)/x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = -10;
	static uint32_t x143 = UINT32_MAX;
	int32_t t29 = 3377;

    t29 = (x141!=((x142-x143)/x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	uint64_t x147 = 5469649030719705946LLU;
	int32_t t30 = 437452530;

    t30 = (x145!=((x146-x147)/x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x149 = -2229;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	static uint32_t x152 = 172U;

    t31 = (x149!=((x150-x151)/x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x153 = 45U;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x156 = -1;

    t32 = (x153!=((x154-x155)/x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = -13;
	static int64_t x158 = -7706637LL;
	int8_t x159 = 6;
	int64_t x160 = -1762081855LL;
	int32_t t33 = 19295;

    t33 = (x157!=((x158-x159)/x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x170 = -1;
	static int16_t x171 = INT16_MIN;
	static volatile uint64_t x172 = 19643LLU;
	static volatile int32_t t34 = 14;

    t34 = (x169!=((x170-x171)/x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x174 = 7U;
	int16_t x175 = -1;
	int32_t x176 = -71217;
	volatile int32_t t35 = -3;

    t35 = (x173!=((x174-x175)/x176));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	volatile int16_t x179 = -3748;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t36 = -26092820;

    t36 = (x177!=((x178-x179)/x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = INT8_MAX;
	uint32_t x182 = 130532876U;
	uint32_t x183 = 5974U;
	volatile int32_t x184 = -1;
	int32_t t37 = -15;

    t37 = (x181!=((x182-x183)/x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x190 = 157;
	int16_t x191 = 1;
	volatile int8_t x192 = -30;
	int32_t t38 = -1;

    t38 = (x189!=((x190-x191)/x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x193 = INT8_MIN;
	static int8_t x194 = INT8_MIN;
	uint16_t x195 = UINT16_MAX;
	static int32_t t39 = 48;

    t39 = (x193!=((x194-x195)/x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x197 = 1LL;
	int64_t x198 = 378797774163798323LL;
	int16_t x199 = -1;
	uint64_t x200 = 2122931826LLU;

    t40 = (x197!=((x198-x199)/x200));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x201 = -14;
	int16_t x204 = -364;

    t41 = (x201!=((x202-x203)/x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	volatile int32_t t42 = -91;

    t42 = (x205!=((x206-x207)/x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	int64_t x224 = 26LL;
	static int32_t t43 = 46402905;

    t43 = (x221!=((x222-x223)/x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x225 = UINT64_MAX;
	int32_t x226 = 26213365;
	static uint8_t x227 = 2U;
	int64_t x228 = INT64_MIN;

    t44 = (x225!=((x226-x227)/x228));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x234 = 26177676641205LLU;
	volatile int16_t x236 = 6;

    t45 = (x233!=((x234-x235)/x236));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x237 = -1;
	static uint32_t x238 = 40477U;
	int8_t x240 = INT8_MAX;
	int32_t t46 = 150181;

    t46 = (x237!=((x238-x239)/x240));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x241 = INT8_MIN;
	uint64_t x242 = 5982860LLU;
	uint8_t x243 = 0U;
	uint64_t x244 = UINT64_MAX;
	int32_t t47 = -1;

    t47 = (x241!=((x242-x243)/x244));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MAX;
	int8_t x247 = -1;
	static uint32_t x248 = 3847U;
	int32_t t48 = -6;

    t48 = (x245!=((x246-x247)/x248));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x249 = 161;
	static uint64_t x250 = UINT64_MAX;
	static volatile int16_t x252 = -1;
	int32_t t49 = -1479739;

    t49 = (x249!=((x250-x251)/x252));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 1511082443U;
	static int32_t t50 = 4;

    t50 = (x253!=((x254-x255)/x256));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MIN;
	volatile int64_t x259 = 896438067544LL;
	uint64_t x260 = 25758LLU;
	int32_t t51 = 6948;

    t51 = (x257!=((x258-x259)/x260));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x261 = 213U;
	uint16_t x262 = 22995U;
	volatile int64_t x263 = INT64_MAX;
	uint64_t x264 = 1170029021040045LLU;

    t52 = (x261!=((x262-x263)/x264));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x265 = INT8_MIN;
	int8_t x267 = -1;
	uint64_t x268 = 48LLU;

    t53 = (x265!=((x266-x267)/x268));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x269 = INT32_MIN;
	uint32_t x272 = 931U;
	volatile int32_t t54 = -9785;

    t54 = (x269!=((x270-x271)/x272));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x273 = 82U;
	int64_t x274 = -18525LL;
	uint32_t x276 = 1461U;
	static volatile int32_t t55 = 240354;

    t55 = (x273!=((x274-x275)/x276));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x278 = 2848LLU;
	int16_t x279 = 12;
	int8_t x280 = INT8_MIN;
	int32_t t56 = -6;

    t56 = (x277!=((x278-x279)/x280));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x281 = 22U;
	static uint32_t x283 = 48U;
	static volatile int8_t x284 = INT8_MAX;
	int32_t t57 = -21;

    t57 = (x281!=((x282-x283)/x284));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	uint32_t x292 = 1U;

    t58 = (x289!=((x290-x291)/x292));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x293 = -1;
	int16_t x294 = 4;
	int8_t x295 = -1;
	uint8_t x296 = 13U;
	int32_t t59 = 2357;

    t59 = (x293!=((x294-x295)/x296));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x297 = 2867U;
	static uint16_t x298 = 170U;
	volatile int32_t t60 = -251451;

    t60 = (x297!=((x298-x299)/x300));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	volatile int8_t x303 = INT8_MIN;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t61 = -1539;

    t61 = (x301!=((x302-x303)/x304));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x309 = INT16_MAX;
	volatile int8_t x310 = 5;
	uint16_t x311 = 342U;
	int32_t x312 = -1;

    t62 = (x309!=((x310-x311)/x312));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x313 = -15;
	uint8_t x314 = 0U;
	static volatile uint32_t x315 = UINT32_MAX;
	int32_t t63 = 2609;

    t63 = (x313!=((x314-x315)/x316));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x317 = UINT32_MAX;
	uint8_t x319 = 37U;
	int32_t t64 = 3;

    t64 = (x317!=((x318-x319)/x320));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x327 = 27;
	volatile int64_t x328 = -1LL;
	int32_t t65 = 504702;

    t65 = (x325!=((x326-x327)/x328));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x331 = -1LL;
	int64_t x332 = INT64_MIN;
	int32_t t66 = 32952;

    t66 = (x329!=((x330-x331)/x332));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x338 = INT16_MIN;
	static uint32_t x340 = 1686881U;
	int32_t t67 = -8119;

    t67 = (x337!=((x338-x339)/x340));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x342 = 1386U;
	uint16_t x343 = 158U;
	static volatile int8_t x344 = 13;

    t68 = (x341!=((x342-x343)/x344));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x345 = -1;
	volatile int16_t x347 = 19;
	int16_t x348 = -1;
	int32_t t69 = -5;

    t69 = (x345!=((x346-x347)/x348));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x349 = INT16_MIN;
	int64_t x350 = -138905116076061LL;
	static int16_t x351 = INT16_MAX;
	volatile uint32_t x352 = 229538445U;
	int32_t t70 = -44;

    t70 = (x349!=((x350-x351)/x352));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x353 = 816;
	static volatile int32_t t71 = 1322;

    t71 = (x353!=((x354-x355)/x356));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x357 = 13777277;
	volatile int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	volatile int64_t x360 = INT64_MIN;
	volatile int32_t t72 = 44708;

    t72 = (x357!=((x358-x359)/x360));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x361 = 114U;
	volatile uint64_t x362 = 19LLU;
	volatile int16_t x363 = -15080;
	static volatile int64_t x364 = INT64_MAX;
	volatile int32_t t73 = 85046;

    t73 = (x361!=((x362-x363)/x364));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x369 = -1;
	uint16_t x370 = 20U;
	volatile uint16_t x371 = 11751U;
	volatile int8_t x372 = -1;
	static volatile int32_t t74 = -4542859;

    t74 = (x369!=((x370-x371)/x372));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x373 = 8U;
	uint64_t x374 = 28005LLU;
	uint8_t x375 = 90U;
	int64_t x376 = -1LL;
	volatile int32_t t75 = -6;

    t75 = (x373!=((x374-x375)/x376));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x381 = INT16_MAX;
	int8_t x382 = -7;
	int8_t x383 = 1;
	int16_t x384 = INT16_MAX;
	volatile int32_t t76 = 0;

    t76 = (x381!=((x382-x383)/x384));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x385 = 0U;
	uint8_t x386 = 0U;
	int16_t x387 = -1;

    t77 = (x385!=((x386-x387)/x388));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x390 = -1;
	int32_t t78 = 0;

    t78 = (x389!=((x390-x391)/x392));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x394 = -1;
	int32_t x395 = INT32_MAX;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t79 = -1925353;

    t79 = (x393!=((x394-x395)/x396));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x401 = INT32_MAX;
	static int16_t x402 = INT16_MIN;
	volatile int32_t x403 = INT32_MIN;
	int16_t x404 = 1;
	int32_t t80 = 1811;

    t80 = (x401!=((x402-x403)/x404));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x406 = 1U;
	int32_t x407 = -433;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t81 = 1827;

    t81 = (x405!=((x406-x407)/x408));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x409 = -1;
	int8_t x410 = -17;
	static volatile int16_t x411 = INT16_MIN;
	int8_t x412 = 9;

    t82 = (x409!=((x410-x411)/x412));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x419 = UINT16_MAX;
	volatile int32_t t83 = 28013704;

    t83 = (x417!=((x418-x419)/x420));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x425 = 1383;
	volatile int64_t x427 = -1LL;
	volatile int32_t x428 = -81041576;
	int32_t t84 = 2;

    t84 = (x425!=((x426-x427)/x428));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = -1;
	static int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MAX;
	volatile int32_t t85 = -2682003;

    t85 = (x429!=((x430-x431)/x432));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x438 = INT32_MAX;
	uint64_t x440 = UINT64_MAX;
	int32_t t86 = -144290;

    t86 = (x437!=((x438-x439)/x440));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x441 = INT16_MIN;
	uint64_t x442 = 355250607233758LLU;
	int32_t x443 = INT32_MAX;
	int32_t t87 = -26938;

    t87 = (x441!=((x442-x443)/x444));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x445 = -1;
	static uint16_t x446 = 5U;
	uint32_t x447 = 881415765U;
	static int64_t x448 = -1LL;
	volatile int32_t t88 = -14414474;

    t88 = (x445!=((x446-x447)/x448));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x449 = UINT16_MAX;
	uint16_t x450 = 68U;
	static int16_t x451 = -267;
	volatile int32_t t89 = 1;

    t89 = (x449!=((x450-x451)/x452));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	uint64_t x455 = 3796411342625627LLU;
	uint32_t x456 = 1507698206U;
	volatile int32_t t90 = 139945817;

    t90 = (x453!=((x454-x455)/x456));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x458 = INT64_MIN;
	uint64_t x459 = 2LLU;
	volatile int32_t t91 = 64579111;

    t91 = (x457!=((x458-x459)/x460));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x470 = UINT64_MAX;
	static int16_t x471 = -1;
	int8_t x472 = -5;
	static volatile int32_t t92 = -19686171;

    t92 = (x469!=((x470-x471)/x472));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x473 = 13899;
	static int8_t x474 = INT8_MAX;
	uint16_t x475 = 1U;

    t93 = (x473!=((x474-x475)/x476));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x477 = INT64_MIN;
	uint8_t x478 = 4U;
	int64_t x479 = INT64_MAX;
	uint16_t x480 = 2031U;
	volatile int32_t t94 = 15873;

    t94 = (x477!=((x478-x479)/x480));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x481 = -1;
	int32_t x482 = INT32_MIN;
	int64_t x483 = -465560245LL;
	volatile uint64_t x484 = UINT64_MAX;
	int32_t t95 = -559;

    t95 = (x481!=((x482-x483)/x484));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x485 = 174LLU;
	volatile uint8_t x487 = 27U;
	volatile int8_t x488 = 1;

    t96 = (x485!=((x486-x487)/x488));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x489 = INT32_MIN;
	int32_t x491 = -1;
	uint8_t x492 = 15U;
	int32_t t97 = 128592;

    t97 = (x489!=((x490-x491)/x492));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile int8_t x494 = INT8_MIN;
	static uint16_t x495 = UINT16_MAX;
	volatile uint8_t x496 = 7U;

    t98 = (x493!=((x494-x495)/x496));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x497 = -858498LL;
	static uint8_t x498 = 5U;
	volatile int32_t t99 = -172;

    t99 = (x497!=((x498-x499)/x500));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x502 = -951147463516486361LL;

    t100 = (x501!=((x502-x503)/x504));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x505 = 0U;
	volatile int32_t x506 = -1;
	uint32_t x507 = UINT32_MAX;
	int8_t x508 = -12;
	volatile int32_t t101 = -127;

    t101 = (x505!=((x506-x507)/x508));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x509 = INT16_MIN;
	static volatile int32_t x510 = 79740;
	int32_t t102 = -424740;

    t102 = (x509!=((x510-x511)/x512));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x513 = 0U;
	static int32_t x514 = -1;
	uint16_t x515 = UINT16_MAX;
	uint16_t x516 = 16840U;
	volatile int32_t t103 = 1;

    t103 = (x513!=((x514-x515)/x516));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x518 = 1U;
	static int16_t x519 = INT16_MIN;
	volatile uint64_t x520 = UINT64_MAX;
	volatile int32_t t104 = -104348349;

    t104 = (x517!=((x518-x519)/x520));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x521 = -1;
	volatile uint64_t x522 = 56LLU;
	volatile int32_t t105 = 21726592;

    t105 = (x521!=((x522-x523)/x524));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x527 = 12U;
	uint64_t x528 = UINT64_MAX;
	static volatile int32_t t106 = -163;

    t106 = (x525!=((x526-x527)/x528));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x529 = INT16_MIN;
	int64_t x530 = INT64_MAX;
	uint16_t x532 = UINT16_MAX;
	static volatile int32_t t107 = 7;

    t107 = (x529!=((x530-x531)/x532));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x537 = 4U;
	uint8_t x538 = 1U;
	uint8_t x539 = 61U;
	int32_t x540 = -13567928;
	volatile int32_t t108 = 54998131;

    t108 = (x537!=((x538-x539)/x540));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x541 = -1;
	uint32_t x543 = 16U;
	int32_t x544 = INT32_MIN;
	static volatile int32_t t109 = -8;

    t109 = (x541!=((x542-x543)/x544));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x545 = -2322160112LL;
	static uint8_t x546 = 3U;
	int16_t x548 = INT16_MIN;
	int32_t t110 = 24977;

    t110 = (x545!=((x546-x547)/x548));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x557 = -1;
	int16_t x558 = -3662;
	volatile uint32_t x559 = 954761952U;
	volatile int32_t t111 = 14667;

    t111 = (x557!=((x558-x559)/x560));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x561 = 48026783621602210LLU;
	uint64_t x562 = 6946892039LLU;
	volatile int8_t x563 = -4;
	uint64_t x564 = 19838372621379LLU;

    t112 = (x561!=((x562-x563)/x564));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x565 = INT64_MAX;
	int16_t x566 = -302;
	volatile int32_t t113 = -1684;

    t113 = (x565!=((x566-x567)/x568));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x569 = INT8_MIN;
	uint16_t x570 = 335U;
	int8_t x572 = INT8_MIN;
	static int32_t t114 = -895575662;

    t114 = (x569!=((x570-x571)/x572));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x573 = INT64_MAX;
	int32_t x574 = 0;
	int8_t x575 = INT8_MAX;
	volatile int16_t x576 = -1;

    t115 = (x573!=((x574-x575)/x576));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x577 = 6020937821128522917LLU;
	int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MIN;
	static volatile int32_t t116 = -11951;

    t116 = (x577!=((x578-x579)/x580));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x581 = 3;
	static volatile int32_t t117 = 2847570;

    t117 = (x581!=((x582-x583)/x584));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x587 = 296U;
	int16_t x588 = -1;
	int32_t t118 = -57851;

    t118 = (x585!=((x586-x587)/x588));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x593 = 1099LLU;
	int64_t x595 = INT64_MIN;
	static volatile int16_t x596 = INT16_MIN;

    t119 = (x593!=((x594-x595)/x596));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x597 = -129689652492854LL;
	uint64_t x598 = UINT64_MAX;
	int32_t x600 = INT32_MIN;
	volatile int32_t t120 = -182665;

    t120 = (x597!=((x598-x599)/x600));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x602 = UINT8_MAX;
	uint64_t x604 = 8184883609720LLU;
	volatile int32_t t121 = -25317499;

    t121 = (x601!=((x602-x603)/x604));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x605 = UINT8_MAX;
	int32_t x606 = INT32_MAX;
	volatile uint32_t x607 = UINT32_MAX;
	int8_t x608 = 16;

    t122 = (x605!=((x606-x607)/x608));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x609 = INT8_MIN;
	static uint64_t x610 = 0LLU;
	static int8_t x611 = INT8_MAX;
	static int32_t x612 = -15434955;
	volatile int32_t t123 = -1;

    t123 = (x609!=((x610-x611)/x612));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x614 = -921156190;
	int64_t x616 = -1LL;
	volatile int32_t t124 = -1;

    t124 = (x613!=((x614-x615)/x616));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x617 = 57;
	volatile int64_t x618 = INT64_MIN;
	int8_t x619 = -1;
	static int16_t x620 = INT16_MIN;

    t125 = (x617!=((x618-x619)/x620));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x621 = 1U;
	int8_t x622 = INT8_MIN;
	uint8_t x623 = UINT8_MAX;
	volatile int16_t x624 = 3769;
	static volatile int32_t t126 = 124005552;

    t126 = (x621!=((x622-x623)/x624));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x625 = -1;
	static uint64_t x627 = 2187212059LLU;
	int16_t x628 = INT16_MAX;
	int32_t t127 = 96840;

    t127 = (x625!=((x626-x627)/x628));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x629 = 12481U;
	volatile int8_t x631 = INT8_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t128 = -338958;

    t128 = (x629!=((x630-x631)/x632));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x633 = 0;
	static volatile int32_t x634 = INT32_MIN;
	static uint8_t x635 = 0U;

    t129 = (x633!=((x634-x635)/x636));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x637 = INT64_MIN;
	uint64_t x638 = 7566LLU;
	uint16_t x639 = 20U;
	volatile int64_t x640 = 8625391LL;
	volatile int32_t t130 = -28;

    t130 = (x637!=((x638-x639)/x640));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x642 = 2U;
	static uint16_t x643 = 1U;
	volatile uint16_t x644 = 5U;
	int32_t t131 = 255608237;

    t131 = (x641!=((x642-x643)/x644));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	static int8_t x646 = -1;
	int16_t x647 = -1;
	volatile int32_t t132 = -8236;

    t132 = (x645!=((x646-x647)/x648));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x649 = INT8_MAX;
	static volatile int16_t x650 = -1;
	int8_t x651 = -3;
	uint16_t x652 = 7116U;
	static int32_t t133 = -7;

    t133 = (x649!=((x650-x651)/x652));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x653 = UINT16_MAX;
	static int32_t x655 = 67812851;

    t134 = (x653!=((x654-x655)/x656));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x657 = -2;
	int32_t x658 = INT32_MIN;
	int32_t x659 = -2562153;
	uint32_t x660 = UINT32_MAX;
	int32_t t135 = 3;

    t135 = (x657!=((x658-x659)/x660));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x661 = 1;
	int32_t x662 = -1;
	volatile uint64_t x663 = UINT64_MAX;
	uint16_t x664 = 500U;
	volatile int32_t t136 = -1;

    t136 = (x661!=((x662-x663)/x664));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x665 = INT8_MAX;
	uint64_t x666 = 119631331896665LLU;
	static uint8_t x667 = 4U;
	volatile uint8_t x668 = UINT8_MAX;
	volatile int32_t t137 = -120775035;

    t137 = (x665!=((x666-x667)/x668));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x669 = UINT64_MAX;
	int16_t x671 = INT16_MIN;
	int8_t x672 = INT8_MIN;
	static int32_t t138 = 0;

    t138 = (x669!=((x670-x671)/x672));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x677 = 64261LLU;
	int32_t x678 = INT32_MIN;
	int32_t x679 = -1;
	int16_t x680 = INT16_MAX;
	int32_t t139 = 1807;

    t139 = (x677!=((x678-x679)/x680));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x682 = -1;
	static volatile uint64_t x683 = 2384216557LLU;
	static int32_t t140 = -880592209;

    t140 = (x681!=((x682-x683)/x684));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x685 = 78U;
	static uint32_t x686 = 314149U;
	uint64_t x687 = 321525LLU;
	static uint32_t x688 = UINT32_MAX;

    t141 = (x685!=((x686-x687)/x688));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x693 = 138LL;
	uint32_t x694 = 165188531U;
	uint8_t x695 = 18U;
	volatile uint64_t x696 = UINT64_MAX;
	int32_t t142 = 131536;

    t142 = (x693!=((x694-x695)/x696));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x697 = -1;
	uint16_t x698 = 7U;
	static int8_t x700 = INT8_MIN;

    t143 = (x697!=((x698-x699)/x700));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x701 = INT8_MAX;
	int64_t x703 = INT64_MAX;
	int8_t x704 = -7;
	volatile int32_t t144 = 219;

    t144 = (x701!=((x702-x703)/x704));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x705 = 14U;
	uint16_t x706 = 289U;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t145 = 34;

    t145 = (x705!=((x706-x707)/x708));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x710 = -1;
	static int16_t x711 = -50;
	int64_t x712 = INT64_MAX;
	int32_t t146 = 195;

    t146 = (x709!=((x710-x711)/x712));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x713 = INT32_MIN;
	int32_t x714 = -18;
	volatile uint32_t x716 = UINT32_MAX;
	volatile int32_t t147 = -258512;

    t147 = (x713!=((x714-x715)/x716));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x718 = 1U;
	volatile int32_t x719 = -89288853;
	uint64_t x720 = 696719208995437123LLU;
	volatile int32_t t148 = 10933759;

    t148 = (x717!=((x718-x719)/x720));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x722 = 0U;
	int8_t x723 = INT8_MAX;
	volatile int64_t x724 = INT64_MIN;
	static volatile int32_t t149 = -329314172;

    t149 = (x721!=((x722-x723)/x724));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x725 = UINT32_MAX;
	int8_t x726 = INT8_MIN;
	volatile int32_t t150 = 417413487;

    t150 = (x725!=((x726-x727)/x728));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x729 = -1;
	int64_t x731 = -1LL;
	int64_t x732 = INT64_MAX;

    t151 = (x729!=((x730-x731)/x732));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x733 = 51U;
	int32_t x735 = INT32_MAX;
	uint16_t x736 = 1U;
	volatile int32_t t152 = 16541;

    t152 = (x733!=((x734-x735)/x736));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x737 = -1;
	volatile int8_t x738 = -1;
	uint32_t x739 = 11812476U;
	int32_t t153 = 28;

    t153 = (x737!=((x738-x739)/x740));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x742 = INT8_MIN;
	int8_t x744 = INT8_MAX;
	volatile int32_t t154 = -529;

    t154 = (x741!=((x742-x743)/x744));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x745 = UINT8_MAX;
	uint8_t x746 = 31U;
	int64_t x747 = 124176LL;
	static uint16_t x748 = UINT16_MAX;

    t155 = (x745!=((x746-x747)/x748));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static volatile int64_t x750 = 21394871351038864LL;
	volatile uint8_t x751 = 7U;
	int8_t x752 = -16;

    t156 = (x749!=((x750-x751)/x752));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int16_t x754 = INT16_MAX;
	volatile int8_t x755 = INT8_MIN;
	int32_t x756 = -1;
	int32_t t157 = -4;

    t157 = (x753!=((x754-x755)/x756));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x761 = 156;
	static int8_t x763 = -4;
	uint64_t x764 = UINT64_MAX;
	volatile int32_t t158 = 60;

    t158 = (x761!=((x762-x763)/x764));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MIN;
	volatile int8_t x767 = 0;
	int16_t x768 = 7;
	int32_t t159 = 1;

    t159 = (x765!=((x766-x767)/x768));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x770 = 29541623U;
	static int8_t x771 = INT8_MIN;
	static int32_t t160 = -2283788;

    t160 = (x769!=((x770-x771)/x772));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x773 = INT8_MAX;
	int8_t x774 = -1;
	int8_t x775 = INT8_MAX;
	int64_t x776 = INT64_MAX;
	static int32_t t161 = 2204130;

    t161 = (x773!=((x774-x775)/x776));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x777 = INT16_MIN;
	uint64_t x779 = UINT64_MAX;
	volatile int32_t t162 = 293566221;

    t162 = (x777!=((x778-x779)/x780));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x782 = -1;
	int8_t x783 = INT8_MIN;
	int32_t t163 = -3;

    t163 = (x781!=((x782-x783)/x784));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x785 = 3214816337LLU;
	int16_t x786 = 3866;
	static int8_t x787 = INT8_MIN;
	volatile int32_t x788 = -1;
	volatile int32_t t164 = -1;

    t164 = (x785!=((x786-x787)/x788));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x789 = INT64_MAX;
	int16_t x790 = INT16_MIN;
	static int32_t t165 = -1;

    t165 = (x789!=((x790-x791)/x792));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x794 = INT16_MAX;
	static int64_t x796 = INT64_MIN;
	volatile int32_t t166 = -26558197;

    t166 = (x793!=((x794-x795)/x796));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x797 = INT16_MAX;
	int8_t x798 = -16;
	static volatile int32_t x799 = 407;
	int64_t x800 = -1LL;
	volatile int32_t t167 = 22202;

    t167 = (x797!=((x798-x799)/x800));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x801 = 3U;
	static uint16_t x802 = 22775U;
	uint64_t x804 = UINT64_MAX;
	static int32_t t168 = -38;

    t168 = (x801!=((x802-x803)/x804));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x807 = INT16_MIN;
	int32_t x808 = -1;
	volatile int32_t t169 = -1690939;

    t169 = (x805!=((x806-x807)/x808));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x809 = -14820;
	volatile uint8_t x812 = 19U;
	int32_t t170 = 499;

    t170 = (x809!=((x810-x811)/x812));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x813 = 3U;
	int32_t x815 = 285432;

    t171 = (x813!=((x814-x815)/x816));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x819 = 3623100LLU;
	int64_t x820 = -4965385273490131LL;
	int32_t t172 = 0;

    t172 = (x817!=((x818-x819)/x820));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x825 = 4;
	uint64_t x827 = 258LLU;
	int16_t x828 = INT16_MAX;
	static volatile int32_t t173 = -1;

    t173 = (x825!=((x826-x827)/x828));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x830 = 21380U;
	int8_t x831 = INT8_MIN;
	uint64_t x832 = UINT64_MAX;

    t174 = (x829!=((x830-x831)/x832));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x833 = INT32_MAX;
	int32_t x834 = -4;
	uint16_t x835 = 6U;
	uint64_t x836 = 663398652LLU;
	int32_t t175 = -2;

    t175 = (x833!=((x834-x835)/x836));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x837 = UINT64_MAX;
	static int16_t x838 = INT16_MAX;
	int64_t x840 = INT64_MIN;
	volatile int32_t t176 = -621;

    t176 = (x837!=((x838-x839)/x840));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x841 = INT8_MIN;
	int64_t x842 = -65790162LL;
	uint32_t x843 = 99567U;
	int16_t x844 = INT16_MIN;
	int32_t t177 = 9741;

    t177 = (x841!=((x842-x843)/x844));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x845 = INT16_MIN;
	uint64_t x846 = 2268182036335924272LLU;
	int64_t x847 = -3741983683756166141LL;
	volatile int32_t t178 = 1;

    t178 = (x845!=((x846-x847)/x848));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x850 = -1;
	int64_t x852 = INT64_MAX;

    t179 = (x849!=((x850-x851)/x852));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x853 = INT64_MAX;
	int8_t x854 = -4;
	uint32_t x855 = 115808U;
	int16_t x856 = INT16_MAX;
	volatile int32_t t180 = 56;

    t180 = (x853!=((x854-x855)/x856));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x857 = -1;
	static uint64_t x858 = UINT64_MAX;
	volatile int32_t t181 = -483;

    t181 = (x857!=((x858-x859)/x860));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x861 = INT64_MAX;
	int8_t x862 = -1;
	int16_t x863 = -1;
	uint16_t x864 = UINT16_MAX;
	int32_t t182 = -2331;

    t182 = (x861!=((x862-x863)/x864));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x865 = UINT16_MAX;
	uint8_t x866 = 3U;
	volatile int64_t x867 = -1LL;
	uint64_t x868 = 303412LLU;
	int32_t t183 = 1317147;

    t183 = (x865!=((x866-x867)/x868));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x871 = -1;
	int8_t x872 = -1;
	static volatile int32_t t184 = 112910552;

    t184 = (x869!=((x870-x871)/x872));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x873 = 30960957658117LL;
	volatile uint8_t x874 = 111U;
	int32_t x875 = 697;
	int64_t x876 = INT64_MAX;
	static int32_t t185 = -457868208;

    t185 = (x873!=((x874-x875)/x876));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x877 = -4559504077580000LL;
	int32_t x878 = INT32_MIN;
	int16_t x879 = INT16_MIN;
	int8_t x880 = 1;
	volatile int32_t t186 = 227805628;

    t186 = (x877!=((x878-x879)/x880));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x881 = INT8_MAX;
	int16_t x882 = INT16_MAX;
	uint8_t x883 = 1U;
	int64_t x884 = INT64_MIN;
	volatile int32_t t187 = 13;

    t187 = (x881!=((x882-x883)/x884));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x886 = UINT32_MAX;
	int64_t x887 = -887LL;
	int8_t x888 = 1;
	int32_t t188 = -32858;

    t188 = (x885!=((x886-x887)/x888));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x889 = 507757865U;
	static uint16_t x890 = 1367U;
	volatile int16_t x891 = -1;
	uint8_t x892 = 6U;
	int32_t t189 = -525685586;

    t189 = (x889!=((x890-x891)/x892));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x893 = -1LL;
	volatile int8_t x894 = INT8_MIN;
	int16_t x896 = 18;

    t190 = (x893!=((x894-x895)/x896));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x897 = 1;
	uint64_t x898 = 4193942904LLU;
	int16_t x900 = INT16_MIN;

    t191 = (x897!=((x898-x899)/x900));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x902 = 0U;
	static int16_t x903 = INT16_MAX;
	static int32_t x904 = -1;

    t192 = (x901!=((x902-x903)/x904));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = INT32_MIN;
	static int64_t x906 = INT64_MIN;
	static int16_t x907 = INT16_MIN;
	uint64_t x908 = 814865LLU;

    t193 = (x905!=((x906-x907)/x908));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x909 = UINT16_MAX;
	uint64_t x910 = 31579242883729LLU;
	volatile int32_t x911 = 20;
	int32_t t194 = -128178;

    t194 = (x909!=((x910-x911)/x912));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x917 = INT32_MAX;
	int64_t x918 = -1LL;
	int64_t x919 = INT64_MIN;
	uint16_t x920 = 96U;
	static int32_t t195 = 26;

    t195 = (x917!=((x918-x919)/x920));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x929 = -1LL;
	uint64_t x930 = 177456950161337622LLU;
	int32_t x931 = INT32_MAX;
	int32_t t196 = -353;

    t196 = (x929!=((x930-x931)/x932));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x933 = 14;
	volatile int8_t x934 = 21;
	volatile int8_t x935 = INT8_MAX;
	int16_t x936 = INT16_MAX;
	volatile int32_t t197 = 99723;

    t197 = (x933!=((x934-x935)/x936));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x938 = 117U;
	int8_t x939 = INT8_MAX;
	volatile int8_t x940 = -21;

    t198 = (x937!=((x938-x939)/x940));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x941 = INT64_MAX;
	static int32_t x942 = -81631;
	int8_t x943 = -1;
	int8_t x944 = -1;
	int32_t t199 = 231712;

    t199 = (x941!=((x942-x943)/x944));

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

