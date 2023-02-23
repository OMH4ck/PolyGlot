
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

uint16_t x2 = UINT16_MAX;
int64_t x4 = 75076482027LL;
int32_t x8 = INT32_MAX;
volatile uint32_t t1 = 15621U;
int32_t x11 = -1;
static int16_t x16 = INT16_MIN;
volatile int32_t t3 = 302;
uint32_t x21 = 131348503U;
int32_t x24 = 473011;
uint16_t x29 = 3U;
int32_t x30 = -12016;
int64_t x32 = 1LL;
volatile uint8_t x35 = 23U;
volatile int32_t t8 = -394069;
uint16_t x37 = 829U;
int32_t x42 = INT32_MAX;
static int32_t x44 = -155;
int8_t x53 = -1;
uint32_t x55 = UINT32_MAX;
uint8_t x62 = 6U;
int16_t x65 = INT16_MAX;
volatile int32_t t16 = -8186;
int32_t x77 = -1;
static volatile int16_t x90 = -905;
uint32_t x91 = 160U;
uint64_t x93 = 3LLU;
uint8_t x105 = UINT8_MAX;
static int8_t x107 = INT8_MIN;
static volatile uint16_t x113 = UINT16_MAX;
int32_t x119 = -1;
uint64_t x120 = 502479086053421594LLU;
volatile uint32_t t29 = 200U;
int32_t x123 = INT32_MAX;
uint8_t x129 = UINT8_MAX;
int32_t t33 = 848;
static volatile int32_t t34 = 3527414;
uint16_t x148 = 37U;
volatile int32_t t37 = 10;
static int32_t t38 = -304899789;
uint64_t x161 = UINT64_MAX;
volatile int8_t x166 = INT8_MIN;
int32_t x170 = 1000620779;
int64_t x172 = 136064556185789LL;
volatile uint32_t x174 = 365U;
uint8_t x178 = UINT8_MAX;
static volatile int16_t x180 = INT16_MAX;
int16_t x182 = 12;
int32_t t45 = -2163;
uint32_t x188 = 898U;
static int16_t x192 = -1;
uint64_t x195 = UINT64_MAX;
uint16_t x198 = 1U;
int32_t x203 = INT32_MIN;
int32_t x206 = 282714801;
static uint64_t x208 = 2090064LLU;
volatile int32_t t54 = -1;
static volatile int64_t x222 = -1LL;
volatile int32_t t57 = 1690785;
static int32_t t59 = 14094873;
int64_t x242 = INT64_MIN;
int32_t x247 = INT32_MAX;
int8_t x256 = 0;
static volatile int64_t t63 = 0LL;
int32_t x257 = INT32_MAX;
static int16_t x261 = INT16_MAX;
int16_t x264 = 10301;
volatile int32_t t65 = -49;
volatile uint16_t x266 = 4495U;
int64_t x267 = -673LL;
uint16_t x271 = 14U;
static uint32_t t67 = 1050963602U;
volatile int32_t t68 = -127772;
static volatile int32_t x279 = INT32_MIN;
static int16_t x282 = -1;
static volatile uint32_t t72 = 2297U;
int64_t x299 = INT64_MIN;
int32_t t74 = -5748572;
int32_t x304 = 38170903;
int32_t x310 = -1;
static int32_t x316 = INT32_MAX;
volatile int32_t t80 = 0;
uint64_t x328 = 1415958503888LLU;
int32_t t82 = 167;
static uint32_t x334 = 497970523U;
uint8_t x343 = 3U;
static uint32_t x344 = 1791025351U;
static uint8_t x349 = 1U;
volatile int32_t x350 = 1409998;
uint8_t x355 = 65U;
volatile int32_t t88 = 232056384;
int16_t x357 = -1;
int32_t t93 = 1;
uint64_t x385 = UINT64_MAX;
int8_t x387 = INT8_MAX;
static uint32_t x392 = 469204146U;
uint8_t x399 = UINT8_MAX;
uint32_t x400 = 275648493U;
int64_t x402 = -2914183677057LL;
int32_t t105 = -184380;
volatile int32_t t108 = -46;
static volatile uint32_t x439 = 20U;
int32_t x443 = INT32_MAX;
static int32_t x444 = -2361503;
int32_t t110 = 70090438;
int64_t x455 = -1LL;
volatile int32_t t115 = 17954;
int32_t t116 = 959;
int32_t x474 = -1;
volatile int8_t x479 = -5;
volatile int8_t x482 = INT8_MIN;
volatile uint8_t x486 = 1U;
volatile int64_t t122 = 37099284675152LL;
int64_t x495 = -3228LL;
static uint32_t x501 = 1324910U;
int32_t x504 = INT32_MIN;
int64_t x506 = -128766451092039LL;
static int32_t x507 = INT32_MAX;
static volatile uint32_t t126 = 683U;
uint32_t x515 = 886230U;
volatile int64_t t128 = -1024103LL;
uint64_t x518 = 462383LLU;
int64_t x524 = -1LL;
int8_t x531 = 15;
uint64_t x540 = 315129014213LLU;
static uint16_t x541 = UINT16_MAX;
int64_t x544 = INT64_MIN;
volatile int32_t t135 = 1117;
int32_t x546 = 2;
volatile uint8_t x551 = 25U;
volatile int32_t t137 = 2282133;
volatile int8_t x559 = INT8_MAX;
static volatile int8_t x562 = INT8_MIN;
int16_t x568 = INT16_MIN;
static int16_t x569 = 91;
volatile uint8_t x586 = UINT8_MAX;
uint64_t x587 = 5868831447260648LLU;
static volatile int8_t x588 = -1;
volatile int32_t t146 = -6711;
static int32_t x590 = -144011;
int8_t x605 = -1;
uint64_t x607 = UINT64_MAX;
uint32_t x610 = UINT32_MAX;
uint16_t x611 = 1U;
uint8_t x618 = 7U;
int64_t x620 = 50LL;
int8_t x623 = INT8_MIN;
int64_t x627 = -1LL;
int64_t x628 = INT64_MIN;
static int32_t t158 = 257923;
int32_t x640 = -1121995;
int32_t t159 = 543548;
int32_t t160 = 780;
int8_t x652 = 0;
volatile int64_t t165 = 7053136243LL;
int32_t x671 = INT32_MIN;
static uint64_t x673 = UINT64_MAX;
int32_t x676 = INT32_MIN;
int64_t x686 = INT64_MIN;
volatile uint32_t x691 = 1230U;
int8_t x695 = 0;
static int32_t t173 = 1151;
uint16_t x705 = UINT16_MAX;
volatile int32_t x706 = INT32_MIN;
volatile int16_t x707 = 363;
static volatile int32_t x709 = INT32_MAX;
volatile uint64_t x711 = UINT64_MAX;
volatile int32_t t177 = 17;
volatile int64_t x722 = INT64_MAX;
int32_t x728 = INT32_MAX;
int32_t t181 = -108;
uint64_t x732 = 100324964694653LLU;
int16_t x734 = INT16_MIN;
int64_t x738 = 2199LL;
int32_t x739 = -1;
int8_t x740 = INT8_MIN;
static int64_t x743 = -1LL;
uint8_t x745 = 42U;
uint8_t x747 = 2U;
int8_t x754 = 1;
uint16_t x755 = 1715U;
int8_t x758 = INT8_MAX;
uint32_t x759 = 21U;
volatile int32_t t190 = -64298;
int32_t x780 = INT32_MIN;
volatile int64_t x781 = INT64_MIN;
uint8_t x782 = 26U;
int8_t x784 = INT8_MIN;
int32_t x787 = -1;
uint32_t x795 = UINT32_MAX;
static uint64_t x796 = UINT64_MAX;


void f0(void) {
    	uint32_t x1 = 99709U;
	volatile uint32_t x3 = 573897762U;
	volatile uint32_t t0 = 771115517U;

    t0 = (x1&((x2&x3)<=x4));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 19633U;
	volatile uint16_t x6 = 7U;
	int32_t x7 = 151;

    t1 = (x5&((x6&x7)<=x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MAX;
	static uint16_t x12 = 26273U;
	int64_t t2 = 28147051LL;

    t2 = (x9&((x10&x11)<=x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile uint32_t x14 = 497725776U;
	int64_t x15 = 3683899731LL;

    t3 = (x13&((x14&x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 13U;
	static uint32_t x18 = 22167U;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 151337U;
	int32_t t4 = 337352080;

    t4 = (x17&((x18&x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 26929562356268314LLU;
	uint16_t x23 = UINT16_MAX;
	static volatile uint32_t t5 = 112475195U;

    t5 = (x21&((x22&x23)<=x24));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -491;
	int8_t x26 = INT8_MAX;
	static int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -19;

    t6 = (x25&((x26&x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x31 = UINT64_MAX;
	int32_t t7 = -2759;

    t7 = (x29&((x30&x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	static volatile int8_t x34 = INT8_MAX;
	uint32_t x36 = UINT32_MAX;

    t8 = (x33&((x34&x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 0U;
	uint16_t x39 = 81U;
	static uint32_t x40 = UINT32_MAX;
	static volatile int32_t t9 = -2446663;

    t9 = (x37&((x38&x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint8_t x43 = 65U;
	int32_t t10 = -321995;

    t10 = (x41&((x42&x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	static volatile int8_t x46 = -1;
	uint64_t x47 = 13LLU;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -123751;

    t11 = (x45&((x46&x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static int8_t x50 = -1;
	uint32_t x51 = 252996994U;
	uint32_t x52 = 1626U;
	int32_t t12 = 26761354;

    t12 = (x49&((x50&x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 0;

    t13 = (x53&((x54&x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 11296270637879LL;

    t14 = (x57&((x58&x59)<=x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	static volatile int64_t x63 = -464214232696922LL;
	int16_t x64 = -1;
	int32_t t15 = -25094386;

    t15 = (x61&((x62&x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x66 = 19U;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = 55804;

    t16 = (x65&((x66&x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	volatile int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -57334;

    t17 = (x69&((x70&x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x73 = 811U;
	volatile uint32_t x74 = 500688U;
	static int32_t x75 = INT32_MAX;
	uint16_t x76 = 1U;
	int32_t t18 = 14147254;

    t18 = (x73&((x74&x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x78 = INT32_MIN;
	int32_t x79 = 335;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 27693;

    t19 = (x77&((x78&x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -403602228LL;
	static volatile int16_t x82 = -97;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;
	int64_t t20 = -1LL;

    t20 = (x81&((x82&x83)<=x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = 0LLU;
	uint32_t x87 = 690324U;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -232216;

    t21 = (x85&((x86&x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = 1230661615644922374LL;
	int32_t x92 = 1;
	volatile int64_t t22 = 19114218LL;

    t22 = (x89&((x90&x91)<=x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 5586U;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = 6U;
	static uint64_t t23 = 40417LLU;

    t23 = (x93&((x94&x95)<=x96));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	int64_t x98 = -1LL;
	int64_t x99 = 5257163LL;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 455614367;

    t24 = (x97&((x98&x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int16_t x102 = -1;
	static int16_t x103 = -1;
	static uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 243;

    t25 = (x101&((x102&x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 8335U;
	int64_t x108 = -1LL;
	int32_t t26 = 4946632;

    t26 = (x105&((x106&x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	uint64_t x110 = 30450221764295LLU;
	uint32_t x111 = 12777930U;
	uint16_t x112 = 14U;
	static int32_t t27 = -58943813;

    t27 = (x109&((x110&x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 73152202;

    t28 = (x113&((x114&x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x117 = 53604U;
	int64_t x118 = -1LL;

    t29 = (x117&((x118&x119)<=x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	int16_t x124 = -1;
	volatile uint32_t t30 = 87U;

    t30 = (x121&((x122&x123)<=x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 185623092LLU;
	static uint16_t x126 = 270U;
	int32_t x127 = -1;
	volatile uint64_t x128 = 5639881105388175302LLU;
	uint64_t t31 = 110LLU;

    t31 = (x125&((x126&x127)<=x128));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x130 = -1;
	uint16_t x131 = 23848U;
	uint16_t x132 = 14U;
	static volatile int32_t t32 = -26;

    t32 = (x129&((x130&x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 6U;
	volatile int8_t x134 = INT8_MAX;
	int64_t x135 = -1LL;
	static int32_t x136 = 37;

    t33 = (x133&((x134&x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = INT64_MIN;
	volatile int32_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;

    t34 = (x137&((x138&x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 48U;
	static int32_t x142 = INT32_MIN;
	static int8_t x143 = INT8_MIN;
	static uint64_t x144 = 52918LLU;
	static int32_t t35 = -16;

    t35 = (x141&((x142&x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 3;
	int8_t x146 = -2;
	int16_t x147 = -1;
	volatile int32_t t36 = 9;

    t36 = (x145&((x146&x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MIN;
	static int8_t x150 = -1;
	static volatile int16_t x151 = -6;
	static uint64_t x152 = 106974LLU;

    t37 = (x149&((x150&x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = -1;
	volatile int32_t x154 = 46865230;
	int8_t x155 = -3;
	uint32_t x156 = UINT32_MAX;

    t38 = (x153&((x154&x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x157 = INT64_MIN;
	int64_t x158 = -3929213LL;
	volatile uint64_t x159 = 37606550LLU;
	uint32_t x160 = 133507855U;
	volatile int64_t t39 = 52150843LL;

    t39 = (x157&((x158&x159)<=x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x162 = INT16_MAX;
	int8_t x163 = -1;
	int64_t x164 = INT64_MIN;
	static volatile uint64_t t40 = 94LLU;

    t40 = (x161&((x162&x163)<=x164));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x165 = 1U;
	static int64_t x167 = INT64_MIN;
	int64_t x168 = 223LL;
	volatile int32_t t41 = 95141;

    t41 = (x165&((x166&x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int8_t x171 = INT8_MAX;
	int32_t t42 = -764;

    t42 = (x169&((x170&x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int32_t x175 = 192;
	static int8_t x176 = 0;
	int64_t t43 = 959338551366195LL;

    t43 = (x173&((x174&x175)<=x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MIN;
	volatile uint64_t x179 = 93669052857LLU;
	static volatile int32_t t44 = 9748128;

    t44 = (x177&((x178&x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 1U;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;

    t45 = (x181&((x182&x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 2702U;
	int64_t x186 = 660961691076328560LL;
	int16_t x187 = INT16_MIN;
	int32_t t46 = -14923404;

    t46 = (x185&((x186&x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 1;
	static int16_t x190 = INT16_MIN;
	static int8_t x191 = INT8_MIN;
	static volatile int32_t t47 = 21318387;

    t47 = (x189&((x190&x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	volatile int8_t x194 = -1;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = 17591824;

    t48 = (x193&((x194&x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MIN;
	int8_t x199 = -27;
	volatile int16_t x200 = INT16_MIN;
	int32_t t49 = 63485109;

    t49 = (x197&((x198&x199)<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x202 = -2;
	volatile uint32_t x204 = 216148215U;
	int32_t t50 = -381495;

    t50 = (x201&((x202&x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int16_t x207 = -1;
	volatile int32_t t51 = 1603005;

    t51 = (x205&((x206&x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 4;
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t52 = -1;

    t52 = (x209&((x210&x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MAX;
	uint8_t x215 = 7U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 190;

    t53 = (x213&((x214&x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int8_t x218 = -27;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;

    t54 = (x217&((x218&x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = -104893LL;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t x224 = INT32_MIN;
	int64_t t55 = -61673890448LL;

    t55 = (x221&((x222&x223)<=x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = 233466506143297LLU;
	static int64_t x226 = -57232LL;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MAX;
	volatile uint64_t t56 = 158455537708951LLU;

    t56 = (x225&((x226&x227)<=x228));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	static int16_t x230 = -1;
	static volatile uint64_t x231 = 167510LLU;
	static int32_t x232 = -140267;

    t57 = (x229&((x230&x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -1;
	static int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MAX;
	int16_t x236 = 9474;
	volatile int32_t t58 = -103994;

    t58 = (x233&((x234&x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int32_t x238 = 834917325;
	uint16_t x239 = 179U;
	static int16_t x240 = 139;

    t59 = (x237&((x238&x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	uint8_t x243 = UINT8_MAX;
	static int16_t x244 = INT16_MIN;
	volatile uint64_t t60 = 69621147726074314LLU;

    t60 = (x241&((x242&x243)<=x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 8207626042919LLU;
	int8_t x246 = -1;
	uint64_t x248 = 8754614267158LLU;
	static volatile uint64_t t61 = 21630LLU;

    t61 = (x245&((x246&x247)<=x248));

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MAX;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 190650592;

    t62 = (x249&((x250&x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MIN;
	static int16_t x254 = -12201;
	static int64_t x255 = INT64_MIN;

    t63 = (x253&((x254&x255)<=x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x258 = INT64_MAX;
	uint64_t x259 = 2796582246LLU;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = 1033892847;

    t64 = (x257&((x258&x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	uint32_t x263 = 11366098U;

    t65 = (x261&((x262&x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	static int8_t x268 = INT8_MAX;
	int32_t t66 = 31;

    t66 = (x265&((x266&x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MAX;
	int64_t x272 = 66221602779931LL;

    t67 = (x269&((x270&x271)<=x272));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 8U;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = INT8_MIN;
	int64_t x276 = 218355974953LL;

    t68 = (x273&((x274&x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1162688LL;
	volatile uint16_t x278 = 794U;
	int8_t x280 = INT8_MIN;
	int64_t t69 = -3136724LL;

    t69 = (x277&((x278&x279)<=x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -2;
	int16_t x283 = INT16_MIN;
	volatile int64_t x284 = -1LL;
	volatile int32_t t70 = 0;

    t70 = (x281&((x282&x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = -1;
	int32_t x286 = -766425205;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = -7;

    t71 = (x285&((x286&x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 14771U;
	uint16_t x290 = 0U;
	static uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 118U;

    t72 = (x289&((x290&x291)<=x292));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 15034U;
	int16_t x294 = -1;
	int32_t x295 = -1;
	uint8_t x296 = 75U;
	int32_t t73 = 0;

    t73 = (x293&((x294&x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 174;
	uint64_t x298 = UINT64_MAX;
	int32_t x300 = -1;

    t74 = (x297&((x298&x299)<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 22800U;
	int32_t x303 = 7799;
	volatile uint32_t t75 = 3536639U;

    t75 = (x301&((x302&x303)<=x304));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	static uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 3310U;
	volatile int32_t t76 = 0;

    t76 = (x305&((x306&x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x309 = -33105711;
	uint16_t x311 = 11U;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -167987061;

    t77 = (x309&((x310&x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 3U;
	int8_t x315 = -1;
	volatile int32_t t78 = -2507919;

    t78 = (x313&((x314&x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int32_t x318 = 12538;
	int16_t x319 = 3;
	int32_t x320 = -1;
	static volatile int32_t t79 = 14726;

    t79 = (x317&((x318&x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -4505747;
	uint16_t x322 = 4075U;
	int64_t x323 = INT64_MIN;
	volatile int8_t x324 = -1;

    t80 = (x321&((x322&x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = 388382474LL;
	int32_t t81 = -28231583;

    t81 = (x325&((x326&x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MIN;
	uint64_t x330 = 44220093050163LLU;
	int8_t x331 = INT8_MAX;
	int8_t x332 = -7;

    t82 = (x329&((x330&x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	volatile int16_t x335 = -2559;
	uint32_t x336 = 1U;
	static volatile int32_t t83 = -543;

    t83 = (x333&((x334&x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 20066U;
	uint64_t x338 = 879443641LLU;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 5;

    t84 = (x337&((x338&x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 155U;
	int8_t x342 = INT8_MIN;
	int32_t t85 = -468840734;

    t85 = (x341&((x342&x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = -1;
	uint64_t x346 = 9169838768182186546LLU;
	int16_t x347 = -1;
	uint64_t x348 = 1336241529282459623LLU;
	volatile int32_t t86 = -808166;

    t86 = (x345&((x346&x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x351 = -19;
	int32_t x352 = -1;
	volatile int32_t t87 = 2703389;

    t87 = (x349&((x350&x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 51U;
	int8_t x354 = -5;
	uint8_t x356 = 1U;

    t88 = (x353&((x354&x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x358 = INT32_MAX;
	static volatile int8_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t89 = -3492652;

    t89 = (x357&((x358&x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	volatile int64_t x362 = INT64_MIN;
	uint32_t x363 = 2921U;
	volatile int16_t x364 = 12;
	uint64_t t90 = 863591820LLU;

    t90 = (x361&((x362&x363)<=x364));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = 2;
	int16_t x366 = INT16_MIN;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -1265;

    t91 = (x365&((x366&x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = 2U;
	volatile int64_t x372 = -1LL;
	static int32_t t92 = -549954445;

    t92 = (x369&((x370&x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = 15375530701032LL;

    t93 = (x373&((x374&x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	static int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -47040930;

    t94 = (x377&((x378&x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 8U;
	volatile uint8_t x382 = 14U;
	uint64_t x383 = 65662830115LLU;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 13171043;

    t95 = (x381&((x382&x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 57U;
	int32_t x388 = -93256;
	uint64_t t96 = 28792211952930LLU;

    t96 = (x385&((x386&x387)<=x388));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	static volatile uint8_t x391 = 1U;
	static int64_t t97 = 2LL;

    t97 = (x389&((x390&x391)<=x392));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -1LL;
	static int16_t x394 = INT16_MAX;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -2835806188096LL;
	volatile int64_t t98 = -12LL;

    t98 = (x393&((x394&x395)<=x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 694801562738287571LL;
	uint16_t x398 = 2U;
	int64_t t99 = -8614544834626LL;

    t99 = (x397&((x398&x399)<=x400));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	int8_t x404 = -1;
	int32_t t100 = -1383;

    t100 = (x401&((x402&x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 35826292892411LLU;
	volatile int8_t x406 = INT8_MAX;
	static int64_t x407 = -1LL;
	int8_t x408 = -43;
	static volatile uint64_t t101 = 164975165066477002LLU;

    t101 = (x405&((x406&x407)<=x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 2;
	int16_t x410 = -1;
	volatile int64_t x411 = -1LL;
	uint8_t x412 = 60U;
	volatile int32_t t102 = 15790858;

    t102 = (x409&((x410&x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 3;
	volatile int8_t x414 = INT8_MAX;
	volatile int8_t x415 = INT8_MIN;
	int16_t x416 = -1;
	volatile int32_t t103 = -63517678;

    t103 = (x413&((x414&x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -10572358523LL;
	int8_t x418 = INT8_MIN;
	static volatile int16_t x419 = INT16_MIN;
	static volatile int16_t x420 = INT16_MIN;
	static volatile int64_t t104 = -455368163334001045LL;

    t104 = (x417&((x418&x419)<=x420));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = -1;
	int16_t x422 = INT16_MAX;
	uint8_t x423 = 3U;
	int32_t x424 = -1;

    t105 = (x421&((x422&x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 98626703658757682LLU;
	static int64_t x426 = INT64_MIN;
	int64_t x427 = 181LL;
	static int16_t x428 = INT16_MAX;
	volatile uint64_t t106 = 3322649076LLU;

    t106 = (x425&((x426&x427)<=x428));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	uint32_t x430 = 5200774U;
	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t107 = 3123;

    t107 = (x429&((x430&x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	volatile int8_t x434 = 0;
	int32_t x435 = INT32_MAX;
	volatile int16_t x436 = INT16_MIN;

    t108 = (x433&((x434&x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = INT16_MIN;
	int8_t x438 = -7;
	static volatile int64_t x440 = -1LL;
	int32_t t109 = -2722;

    t109 = (x437&((x438&x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 3U;
	uint32_t x442 = UINT32_MAX;

    t110 = (x441&((x442&x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = 6U;
	int16_t x446 = 1;
	static uint8_t x447 = UINT8_MAX;
	int64_t x448 = -2805456947568996LL;
	int32_t t111 = -12188832;

    t111 = (x445&((x446&x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = INT16_MAX;
	uint32_t x450 = 356048U;
	int8_t x451 = -11;
	static int8_t x452 = -1;
	static volatile int32_t t112 = -7670290;

    t112 = (x449&((x450&x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 1U;
	int64_t x454 = 602978085548437193LL;
	int64_t x456 = -1LL;
	uint32_t t113 = 1336213U;

    t113 = (x453&((x454&x455)<=x456));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 1040790278;
	static uint64_t x458 = 19701678LLU;
	int16_t x459 = 1995;
	int32_t x460 = INT32_MAX;
	volatile int32_t t114 = 3;

    t114 = (x457&((x458&x459)<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 10090U;
	int32_t x462 = INT32_MAX;
	int32_t x463 = INT32_MAX;
	static uint32_t x464 = 610U;

    t115 = (x461&((x462&x463)<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MAX;
	int16_t x466 = INT16_MAX;
	int64_t x467 = 896513LL;
	volatile int8_t x468 = INT8_MAX;

    t116 = (x465&((x466&x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	static uint64_t x471 = UINT64_MAX;
	uint64_t x472 = 1LLU;
	volatile int32_t t117 = -4697436;

    t117 = (x469&((x470&x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = 0;
	static int32_t x475 = INT32_MIN;
	int16_t x476 = INT16_MAX;
	static volatile int32_t t118 = 345526106;

    t118 = (x473&((x474&x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	static int8_t x478 = -1;
	uint64_t x480 = 136956799858724LLU;
	int64_t t119 = -3577616383639LL;

    t119 = (x477&((x478&x479)<=x480));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = 3;
	int8_t x483 = -1;
	int32_t x484 = -1;
	volatile int32_t t120 = -10243;

    t120 = (x481&((x482&x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = 0U;
	int32_t t121 = -228;

    t121 = (x485&((x486&x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	uint8_t x490 = 1U;
	static int32_t x491 = INT32_MAX;
	uint8_t x492 = 83U;

    t122 = (x489&((x490&x491)<=x492));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 1U;
	volatile int8_t x494 = 0;
	int16_t x496 = INT16_MIN;
	uint32_t t123 = 1634607U;

    t123 = (x493&((x494&x495)<=x496));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 1005;
	static volatile uint32_t x498 = 14U;
	int16_t x499 = -1;
	uint32_t x500 = UINT32_MAX;
	int32_t t124 = -42568041;

    t124 = (x497&((x498&x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MAX;
	volatile int32_t x503 = INT32_MAX;
	volatile uint32_t t125 = 322U;

    t125 = (x501&((x502&x503)<=x504));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = UINT32_MAX;
	volatile uint64_t x508 = 197448775521405LLU;

    t126 = (x505&((x506&x507)<=x508));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 115U;
	static uint8_t x510 = UINT8_MAX;
	int32_t x511 = INT32_MAX;
	uint16_t x512 = 3U;
	static int32_t t127 = -3842166;

    t127 = (x509&((x510&x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = INT64_MIN;
	uint32_t x514 = 3U;
	int64_t x516 = 62130125305LL;

    t128 = (x513&((x514&x515)<=x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 11430U;
	int32_t x519 = INT32_MAX;
	uint8_t x520 = 10U;
	volatile uint32_t t129 = 5525796U;

    t129 = (x517&((x518&x519)<=x520));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 563027928U;
	int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MAX;
	volatile uint32_t t130 = 103563351U;

    t130 = (x521&((x522&x523)<=x524));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	int32_t x526 = -1;
	int8_t x527 = -1;
	int16_t x528 = INT16_MAX;
	int64_t t131 = 3325698936LL;

    t131 = (x525&((x526&x527)<=x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MIN;
	static int64_t x530 = INT64_MIN;
	uint16_t x532 = 14644U;
	static int64_t t132 = 1972481390626779LL;

    t132 = (x529&((x530&x531)<=x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	int8_t x534 = -1;
	int64_t x535 = INT64_MIN;
	static int8_t x536 = INT8_MAX;
	int64_t t133 = -3885846822679LL;

    t133 = (x533&((x534&x535)<=x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MAX;
	int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MIN;
	int64_t t134 = -35668275LL;

    t134 = (x537&((x538&x539)<=x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x542 = INT8_MAX;
	int32_t x543 = -1;

    t135 = (x541&((x542&x543)<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -155130;
	int16_t x547 = 468;
	volatile int32_t x548 = INT32_MAX;
	int32_t t136 = 20209496;

    t136 = (x545&((x546&x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 2;
	uint64_t x550 = UINT64_MAX;
	static uint8_t x552 = 4U;

    t137 = (x549&((x550&x551)<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	static int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MIN;
	uint32_t x556 = UINT32_MAX;
	volatile int32_t t138 = -106572139;

    t138 = (x553&((x554&x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	int8_t x558 = -1;
	static uint64_t x560 = UINT64_MAX;
	int32_t t139 = 6169;

    t139 = (x557&((x558&x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	volatile int8_t x564 = 2;
	int32_t t140 = 20;

    t140 = (x561&((x562&x563)<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 3U;
	int32_t x566 = -1;
	static int16_t x567 = INT16_MIN;
	uint32_t t141 = 339188245U;

    t141 = (x565&((x566&x567)<=x568));

    if (t141 != 1U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -1LL;
	static int64_t x571 = INT64_MIN;
	int8_t x572 = INT8_MAX;
	int32_t t142 = -5;

    t142 = (x569&((x570&x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 11U;
	int32_t x574 = INT32_MIN;
	uint8_t x575 = UINT8_MAX;
	volatile int64_t x576 = INT64_MIN;
	volatile int32_t t143 = -231700690;

    t143 = (x573&((x574&x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 883U;
	int16_t x578 = INT16_MIN;
	static uint32_t x579 = 1642U;
	int16_t x580 = 227;
	volatile int32_t t144 = -3;

    t144 = (x577&((x578&x579)<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 3U;
	int64_t x582 = -1LL;
	volatile uint16_t x583 = 6447U;
	uint8_t x584 = 3U;
	volatile int32_t t145 = 1063;

    t145 = (x581&((x582&x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = 9U;

    t146 = (x585&((x586&x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -30;
	int16_t x591 = -1;
	uint32_t x592 = 1028722U;
	int32_t t147 = 3298410;

    t147 = (x589&((x590&x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x593 = UINT64_MAX;
	int8_t x594 = INT8_MIN;
	int32_t x595 = 5985610;
	uint16_t x596 = 0U;
	uint64_t t148 = 61992LLU;

    t148 = (x593&((x594&x595)<=x596));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = -1;
	uint16_t x598 = UINT16_MAX;
	static int32_t x599 = 7;
	int64_t x600 = -1LL;
	int32_t t149 = -835550347;

    t149 = (x597&((x598&x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = -122;
	static uint16_t x602 = UINT16_MAX;
	volatile int64_t x603 = INT64_MIN;
	static int8_t x604 = 0;
	volatile int32_t t150 = 581387930;

    t150 = (x601&((x602&x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = -1;
	int8_t x608 = INT8_MAX;
	int32_t t151 = 15;

    t151 = (x605&((x606&x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	int32_t x612 = -1;
	int64_t t152 = -249967760185156388LL;

    t152 = (x609&((x610&x611)<=x612));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	uint16_t x614 = 9684U;
	int64_t x615 = INT64_MIN;
	int64_t x616 = -1LL;
	static int32_t t153 = -70016751;

    t153 = (x613&((x614&x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x617 = 37685366651LLU;
	int64_t x619 = -3209806013619335LL;
	volatile uint64_t t154 = 581LLU;

    t154 = (x617&((x618&x619)<=x620));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 100;
	uint32_t x622 = 109613U;
	volatile int8_t x624 = INT8_MIN;
	static int32_t t155 = 1663;

    t155 = (x621&((x622&x623)<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	static int8_t x626 = INT8_MAX;
	volatile int64_t t156 = 9809199LL;

    t156 = (x625&((x626&x627)<=x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 3719;
	volatile uint32_t x630 = UINT32_MAX;
	int32_t x631 = 4008924;
	uint16_t x632 = 30U;
	static volatile int32_t t157 = -103224865;

    t157 = (x629&((x630&x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 0;
	int64_t x634 = INT64_MIN;
	int64_t x635 = -852388272LL;
	volatile int8_t x636 = 0;

    t158 = (x633&((x634&x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 5;
	uint16_t x638 = 717U;
	static int32_t x639 = INT32_MIN;

    t159 = (x637&((x638&x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	static uint64_t x642 = 1717839LLU;
	int32_t x643 = -1;
	uint32_t x644 = 22961U;

    t160 = (x641&((x642&x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = 3458;
	int16_t x646 = INT16_MIN;
	volatile int8_t x647 = INT8_MIN;
	volatile uint16_t x648 = UINT16_MAX;
	int32_t t161 = 13986161;

    t161 = (x645&((x646&x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = INT16_MIN;
	int8_t x650 = 57;
	uint16_t x651 = 6777U;
	int32_t t162 = 2248;

    t162 = (x649&((x650&x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x653 = UINT64_MAX;
	volatile int32_t x654 = INT32_MIN;
	static int32_t x655 = INT32_MIN;
	uint8_t x656 = 9U;
	static uint64_t t163 = 1115513LLU;

    t163 = (x653&((x654&x655)<=x656));

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	uint64_t x658 = 406973207LLU;
	volatile int64_t x659 = -1LL;
	volatile int8_t x660 = -3;
	volatile int32_t t164 = -363449799;

    t164 = (x657&((x658&x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MAX;
	volatile uint32_t x662 = 4U;
	volatile uint64_t x663 = UINT64_MAX;
	static uint32_t x664 = 3409U;

    t165 = (x661&((x662&x663)<=x664));

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MAX;
	int16_t x666 = -26;
	volatile int32_t x667 = INT32_MIN;
	int16_t x668 = -1;
	int64_t t166 = -63760842570LL;

    t166 = (x665&((x666&x667)<=x668));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	uint64_t x670 = 0LLU;
	uint16_t x672 = 370U;
	int32_t t167 = 15;

    t167 = (x669&((x670&x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = INT32_MAX;
	int8_t x675 = -1;
	static volatile uint64_t t168 = 2244421LLU;

    t168 = (x673&((x674&x675)<=x676));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	volatile int64_t x678 = -311010571679302LL;
	uint8_t x679 = 3U;
	static int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -75387322;

    t169 = (x677&((x678&x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = UINT8_MAX;
	uint8_t x684 = 8U;
	static int32_t t170 = -23198;

    t170 = (x681&((x682&x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	int32_t x687 = INT32_MAX;
	uint32_t x688 = 723555U;
	volatile uint32_t t171 = 178050005U;

    t171 = (x685&((x686&x687)<=x688));

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x689 = UINT64_MAX;
	int32_t x690 = INT32_MIN;
	volatile uint32_t x692 = 10711960U;
	volatile uint64_t t172 = 36298362904688610LLU;

    t172 = (x689&((x690&x691)<=x692));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	uint8_t x694 = 63U;
	uint64_t x696 = 0LLU;

    t173 = (x693&((x694&x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MAX;
	int8_t x699 = INT8_MIN;
	int32_t x700 = -1;
	int32_t t174 = -544;

    t174 = (x697&((x698&x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint8_t x702 = 18U;
	uint16_t x703 = 1U;
	static volatile int16_t x704 = -96;
	static volatile int32_t t175 = 1;

    t175 = (x701&((x702&x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x708 = 93;
	static volatile int32_t t176 = -884818;

    t176 = (x705&((x706&x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x710 = 1U;
	int32_t x712 = INT32_MAX;

    t177 = (x709&((x710&x711)<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 0;
	volatile int8_t x714 = 6;
	int64_t x715 = INT64_MAX;
	int16_t x716 = INT16_MIN;
	int32_t t178 = -10492;

    t178 = (x713&((x714&x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = 358739154649LLU;
	static int32_t x718 = 126593223;
	int16_t x719 = INT16_MIN;
	int64_t x720 = INT64_MIN;
	uint64_t t179 = 2616425605LLU;

    t179 = (x717&((x718&x719)<=x720));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	uint64_t x723 = UINT64_MAX;
	int8_t x724 = INT8_MIN;
	volatile uint64_t t180 = 103869866638LLU;

    t180 = (x721&((x722&x723)<=x724));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x726 = -1;
	static volatile uint8_t x727 = 21U;

    t181 = (x725&((x726&x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	static uint8_t x730 = 26U;
	int8_t x731 = INT8_MIN;
	int32_t t182 = -37064538;

    t182 = (x729&((x730&x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	static uint8_t x735 = 12U;
	int32_t x736 = -1;
	int32_t t183 = 16705333;

    t183 = (x733&((x734&x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -432;
	static volatile int32_t t184 = 3;

    t184 = (x737&((x738&x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = INT64_MIN;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = 0;

    t185 = (x741&((x742&x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = -324;
	int16_t x748 = -1;
	int32_t t186 = 30651;

    t186 = (x745&((x746&x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 6137U;
	uint8_t x750 = 27U;
	volatile int64_t x751 = -1LL;
	static uint8_t x752 = UINT8_MAX;
	volatile uint32_t t187 = 1U;

    t187 = (x749&((x750&x751)<=x752));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 0U;
	int64_t x756 = -773461LL;
	volatile int32_t t188 = 748790432;

    t188 = (x753&((x754&x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 9600U;
	uint8_t x760 = UINT8_MAX;
	uint32_t t189 = 1655808U;

    t189 = (x757&((x758&x759)<=x760));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 3546;
	uint64_t x762 = UINT64_MAX;
	int32_t x763 = 7184;
	int64_t x764 = -7LL;

    t190 = (x761&((x762&x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = 279;
	uint8_t x766 = UINT8_MAX;
	volatile int16_t x767 = INT16_MIN;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -20;

    t191 = (x765&((x766&x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -1;
	static int16_t x770 = INT16_MAX;
	uint16_t x771 = 7U;
	int16_t x772 = -1060;
	volatile int32_t t192 = 7930374;

    t192 = (x769&((x770&x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 11110023U;
	volatile uint8_t x774 = 4U;
	int64_t x775 = -331LL;
	int16_t x776 = INT16_MIN;
	static uint32_t t193 = 10963U;

    t193 = (x773&((x774&x775)<=x776));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	uint8_t x778 = 2U;
	volatile uint64_t x779 = UINT64_MAX;
	volatile int32_t t194 = -28445;

    t194 = (x777&((x778&x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x783 = -1;
	volatile int64_t t195 = -818778815805LL;

    t195 = (x781&((x782&x783)<=x784));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 440031668LL;
	uint32_t x786 = 0U;
	uint8_t x788 = 0U;
	volatile int64_t t196 = -1LL;

    t196 = (x785&((x786&x787)<=x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	int8_t x790 = INT8_MIN;
	int8_t x791 = INT8_MAX;
	int8_t x792 = -1;
	static int64_t t197 = 0LL;

    t197 = (x789&((x790&x791)<=x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MAX;
	int32_t x794 = 2210;
	int64_t t198 = -10LL;

    t198 = (x793&((x794&x795)<=x796));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint32_t x798 = UINT32_MAX;
	volatile int32_t x799 = -28831609;
	int32_t x800 = INT32_MIN;
	int32_t t199 = -360842222;

    t199 = (x797&((x798&x799)<=x800));

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

