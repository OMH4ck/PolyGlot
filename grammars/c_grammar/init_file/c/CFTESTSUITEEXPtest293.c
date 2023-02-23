
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

uint32_t x10 = UINT32_MAX;
static int64_t x12 = 47LL;
uint64_t x13 = UINT64_MAX;
uint16_t x14 = 0U;
int8_t x22 = 6;
int64_t x26 = INT64_MAX;
static volatile int64_t x28 = INT64_MIN;
int8_t x31 = -1;
uint8_t x33 = UINT8_MAX;
static uint16_t x50 = 51U;
static uint16_t x52 = 0U;
uint64_t t12 = UINT64_MAX;
int16_t x60 = 517;
volatile int32_t t14 = 71890529;
int8_t x72 = 1;
int32_t x73 = INT32_MIN;
uint64_t x74 = 7521877526698853LLU;
static volatile uint64_t x77 = 12LLU;
int32_t t20 = -2440;
static int32_t t21 = 1;
int16_t x101 = -9405;
static volatile int64_t x114 = -1LL;
volatile uint64_t x119 = 276995LLU;
int32_t x125 = 1330955;
static uint16_t x131 = 9118U;
int32_t x137 = 4189;
int32_t x147 = -1;
static uint8_t x158 = 1U;
static int16_t x159 = INT16_MIN;
int32_t x160 = INT32_MIN;
volatile int32_t t40 = INT32_MAX;
int32_t t42 = -52;
int64_t t44 = -9127726539452LL;
static volatile int32_t x190 = -215395832;
volatile int32_t t46 = 7493;
int64_t x194 = -1LL;
static volatile int16_t x201 = -1;
static int32_t x204 = INT32_MIN;
static volatile int32_t x206 = INT32_MIN;
static uint64_t x207 = UINT64_MAX;
int64_t x208 = INT64_MAX;
int8_t x209 = INT8_MIN;
uint32_t x212 = UINT32_MAX;
volatile uint16_t x220 = UINT16_MAX;
static int32_t x224 = INT32_MIN;
volatile int32_t t55 = -396511620;
volatile uint8_t x229 = 0U;
uint64_t x234 = 218368111966441020LLU;
int32_t x239 = 110;
volatile int64_t t58 = -13103LL;
uint64_t x246 = UINT64_MAX;
int64_t x249 = -8930LL;
uint8_t x261 = 21U;
volatile uint32_t t64 = 3643986U;
uint16_t x278 = 0U;
static int64_t x279 = -1LL;
int16_t x285 = 77;
int16_t x286 = INT16_MIN;
uint16_t x290 = 189U;
uint8_t x295 = UINT8_MAX;
volatile int16_t x304 = INT16_MIN;
static uint16_t x310 = 94U;
uint64_t x315 = 858273161577LLU;
uint32_t t77 = 110789U;
uint32_t x331 = 96984U;
int64_t x333 = INT64_MIN;
uint64_t x334 = 211138477562029120LLU;
uint32_t x336 = 459920674U;
static uint8_t x338 = UINT8_MAX;
uint16_t x352 = 751U;
uint16_t x377 = 3U;
int16_t x379 = 1;
int64_t x382 = INT64_MAX;
volatile int32_t t90 = 9330705;
int32_t x394 = INT32_MIN;
int8_t x404 = INT8_MIN;
int8_t x407 = -1;
static int64_t x410 = -981080191385LL;
int16_t x412 = INT16_MIN;
uint32_t x413 = 133U;
int32_t x417 = -1;
static int32_t t100 = -6702;
uint64_t x440 = 33409266672LLU;
volatile int32_t t101 = 90596;
volatile uint32_t x442 = 18U;
static uint32_t x446 = UINT32_MAX;
uint32_t x449 = 173U;
uint16_t x461 = UINT16_MAX;
int8_t x463 = -40;
static uint8_t x464 = UINT8_MAX;
volatile int8_t x475 = INT8_MIN;
uint16_t x479 = 215U;
int32_t x486 = INT32_MIN;
uint32_t x493 = 6U;
int8_t x496 = 18;
uint64_t x501 = UINT64_MAX;
uint16_t x503 = 78U;
volatile uint64_t t117 = UINT64_MAX;
volatile uint16_t x509 = UINT16_MAX;
uint32_t x510 = 0U;
int32_t x517 = -278707;
static volatile int32_t t121 = -1;
volatile int8_t x521 = INT8_MAX;
int64_t x523 = INT64_MAX;
int32_t t122 = 4187;
volatile uint32_t x527 = UINT32_MAX;
uint8_t x532 = UINT8_MAX;
volatile int64_t t124 = -157210922317LL;
int8_t x540 = INT8_MIN;
int16_t x541 = INT16_MAX;
static uint32_t x543 = 133679U;
uint32_t x545 = 347452676U;
volatile uint8_t x551 = 2U;
volatile int64_t t129 = -1LL;
int32_t t132 = INT32_MAX;
volatile int32_t t135 = -1;
int8_t x590 = INT8_MAX;
int8_t x597 = -1;
uint64_t x612 = UINT64_MAX;
volatile int32_t t140 = -2044;
int8_t x619 = 0;
uint64_t x626 = UINT64_MAX;
static uint64_t x629 = UINT64_MAX;
static int8_t x636 = INT8_MIN;
int32_t x645 = INT32_MIN;
int64_t x659 = -224879802324623LL;
static volatile int32_t t150 = INT32_MAX;
static volatile int16_t x665 = 59;
uint64_t x667 = 327311433LLU;
static int16_t x668 = INT16_MIN;
uint8_t x670 = UINT8_MAX;
static int32_t x672 = -1;
uint32_t x677 = 118762232U;
int16_t x680 = INT16_MIN;
int32_t t156 = -4907;
volatile uint64_t x691 = 1389LLU;
uint16_t x696 = 158U;
int8_t x698 = 0;
int64_t t162 = 553985237425373LL;
static int32_t x714 = -1;
int32_t x723 = INT32_MIN;
static int16_t x727 = INT16_MAX;
int64_t x740 = 29851507376LL;
volatile int32_t t167 = 0;
int32_t t168 = -5;
uint32_t x749 = 43U;
volatile int16_t x758 = 12173;
uint64_t t172 = 62559LLU;
static int16_t x772 = -1;
volatile int16_t x773 = INT16_MAX;
uint8_t x774 = 88U;
static int64_t x776 = 1LL;
uint8_t x780 = UINT8_MAX;
uint64_t t176 = 2253117888LLU;
uint32_t x785 = 22U;
static int16_t x787 = INT16_MIN;
uint32_t x793 = 28488548U;
int32_t x800 = INT32_MIN;
int8_t x806 = INT8_MIN;
volatile uint32_t x814 = UINT32_MAX;
volatile int64_t x817 = -57675876LL;
uint16_t x819 = 74U;
volatile int64_t x820 = -522602383LL;
int64_t x823 = -185813055866LL;
int8_t x831 = INT8_MAX;
static uint64_t x835 = 233316356913735475LLU;
uint64_t x836 = 1677082118076752801LLU;
volatile int32_t x838 = 25731058;
int16_t x847 = INT16_MIN;
int8_t x850 = INT8_MAX;
static int32_t x864 = 57436189;
int8_t x867 = -1;
uint64_t x873 = 518166406LLU;
int8_t x876 = INT8_MAX;
int64_t x877 = -1654LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	static uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -739;

    t0 = (x1|((x2-x3)!=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 0U;
	uint8_t x6 = 1U;
	volatile int8_t x7 = 1;
	uint16_t x8 = 1499U;
	int32_t t1 = 1429;

    t1 = (x5|((x6-x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	int64_t t2 = 15075708347467506LL;

    t2 = (x9|((x10-x11)!=x12));

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x15 = 1U;
	uint64_t x16 = 1LLU;
	uint64_t t3 = UINT64_MAX;

    t3 = (x13|((x14-x15)!=x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 81LLU;
	volatile int8_t x19 = 2;
	int16_t x20 = -1;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (x17|((x18-x19)!=x20));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static uint64_t x23 = 3665LLU;
	int16_t x24 = 2;
	static volatile int32_t t5 = 152852;

    t5 = (x21|((x22-x23)!=x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 1898281022473170LLU;
	static uint16_t x27 = 916U;
	volatile uint64_t t6 = 240396974328138LLU;

    t6 = (x25|((x26-x27)!=x28));

    if (t6 != 1898281022473171LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	int32_t x30 = 14;
	int8_t x32 = -1;
	volatile int32_t t7 = 107;

    t7 = (x29|((x30-x31)!=x32));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = 17U;
	int32_t x35 = -1;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 19135797;

    t8 = (x33|((x34-x35)!=x36));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	static int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 1;

    t9 = (x37|((x38-x39)!=x40));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	int8_t x42 = 4;
	int64_t x43 = -119LL;
	static uint64_t x44 = 1LLU;
	volatile int32_t t10 = 0;

    t10 = (x41|((x42-x43)!=x44));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = INT32_MIN;
	volatile int16_t x47 = -43;
	uint32_t x48 = 104242U;
	int64_t t11 = -6979676933LL;

    t11 = (x45|((x46-x47)!=x48));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int64_t x51 = 10020527LL;

    t12 = (x49|((x50-x51)!=x52));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 62;
	volatile uint16_t x54 = 82U;
	static volatile int64_t x55 = INT64_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 1067;

    t13 = (x53|((x54-x55)!=x56));

    if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int8_t x58 = -1;
	int8_t x59 = INT8_MIN;

    t14 = (x57|((x58-x59)!=x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = UINT16_MAX;
	uint8_t x62 = UINT8_MAX;
	uint8_t x63 = UINT8_MAX;
	static volatile int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 1736;

    t15 = (x61|((x62-x63)!=x64));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MAX;
	uint32_t x66 = 189983U;
	int32_t x67 = 6362;
	uint8_t x68 = 65U;
	volatile int32_t t16 = INT32_MAX;

    t16 = (x65|((x66-x67)!=x68));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static int32_t x70 = -128067859;
	int64_t x71 = INT64_MIN;
	int32_t t17 = 40;

    t17 = (x69|((x70-x71)!=x72));

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = INT16_MAX;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = -263269;

    t18 = (x73|((x74-x75)!=x76));

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 6U;
	uint16_t x79 = 355U;
	int32_t x80 = -1;
	volatile uint64_t t19 = 1015866556968678857LLU;

    t19 = (x77|((x78-x79)!=x80));

    if (t19 != 13LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = INT16_MAX;
	volatile int64_t x82 = -101838LL;
	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 11U;

    t20 = (x81|((x82-x83)!=x84));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	static volatile int16_t x87 = INT16_MIN;
	int64_t x88 = 3302415566561LL;

    t21 = (x85|((x86-x87)!=x88));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x94 = 479;
	int32_t x95 = INT32_MAX;
	static int16_t x96 = INT16_MIN;
	static int32_t t22 = 266451;

    t22 = (x93|((x94-x95)!=x96));

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1660172;
	static int8_t x98 = INT8_MIN;
	volatile int32_t x99 = -1;
	int8_t x100 = 4;
	volatile int32_t t23 = 117458320;

    t23 = (x97|((x98-x99)!=x100));

    if (t23 != -1660171) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x102 = -1013931429LL;
	uint8_t x103 = 16U;
	uint8_t x104 = 35U;
	int32_t t24 = 831512;

    t24 = (x101|((x102-x103)!=x104));

    if (t24 != -9405) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = 1LL;
	int8_t x106 = -1;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = INT8_MIN;
	int64_t t25 = -34263001664872LL;

    t25 = (x105|((x106-x107)!=x108));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = INT8_MAX;
	uint32_t x110 = UINT32_MAX;
	volatile int32_t x111 = -1;
	int16_t x112 = -70;
	int32_t t26 = -1501992;

    t26 = (x109|((x110-x111)!=x112));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	static int16_t x115 = 3424;
	int32_t x116 = 33137;
	static int32_t t27 = -24175581;

    t27 = (x113|((x114-x115)!=x116));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 1;
	volatile uint32_t x118 = 2U;
	static volatile int32_t x120 = INT32_MIN;
	int32_t t28 = 3131;

    t28 = (x117|((x118-x119)!=x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = -1;
	static uint64_t x122 = 2476428784371970576LLU;
	int32_t x123 = INT32_MAX;
	int32_t x124 = -1;
	int32_t t29 = -1718;

    t29 = (x121|((x122-x123)!=x124));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x126 = 26U;
	int32_t x127 = -20539469;
	volatile int8_t x128 = INT8_MIN;
	static volatile int32_t t30 = -112;

    t30 = (x125|((x126-x127)!=x128));

    if (t30 != 1330955) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = UINT16_MAX;
	int16_t x130 = -1;
	volatile uint8_t x132 = 13U;
	static int32_t t31 = 519424099;

    t31 = (x129|((x130-x131)!=x132));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 30449U;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t32 = -1635;

    t32 = (x133|((x134-x135)!=x136));

    if (t32 != 30449) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x138 = -1;
	int8_t x139 = INT8_MAX;
	static int16_t x140 = INT16_MIN;
	static int32_t t33 = -1766;

    t33 = (x137|((x138-x139)!=x140));

    if (t33 != 4189) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MAX;
	int16_t x142 = 6;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = 2U;
	int32_t t34 = 16;

    t34 = (x141|((x142-x143)!=x144));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = -14383465266LL;
	uint32_t x146 = 3671U;
	static uint8_t x148 = 17U;
	volatile int64_t t35 = 101122LL;

    t35 = (x145|((x146-x147)!=x148));

    if (t35 != -14383465265LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x149 = 1;
	int64_t x150 = INT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 23U;
	static int32_t t36 = 316;

    t36 = (x149|((x150-x151)!=x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -89;
	volatile int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	int64_t x156 = INT64_MIN;
	static volatile int32_t t37 = 7;

    t37 = (x153|((x154-x155)!=x156));

    if (t37 != -89) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 2024;
	int32_t t38 = -1374573;

    t38 = (x157|((x158-x159)!=x160));

    if (t38 != 2025) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = 12U;
	int8_t x164 = INT8_MIN;
	volatile int64_t t39 = 1664242269LL;

    t39 = (x161|((x162-x163)!=x164));

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MIN;
	volatile uint64_t x167 = 43455LLU;
	static volatile int8_t x168 = -1;

    t40 = (x165|((x166-x167)!=x168));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 13U;
	static int16_t x170 = INT16_MIN;
	static int64_t x171 = -5014013257LL;
	volatile int64_t x172 = INT64_MAX;
	volatile int32_t t41 = -1;

    t41 = (x169|((x170-x171)!=x172));

    if (t41 != 13) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MAX;
	uint16_t x174 = UINT16_MAX;
	volatile uint16_t x175 = 240U;
	uint16_t x176 = 6U;

    t42 = (x173|((x174-x175)!=x176));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x177 = INT64_MIN;
	uint64_t x178 = 47775LLU;
	volatile int32_t x179 = -1;
	int8_t x180 = INT8_MAX;
	volatile int64_t t43 = -31955LL;

    t43 = (x177|((x178-x179)!=x180));

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x181 = 0LL;
	int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = 21546U;
	int32_t x184 = INT32_MIN;

    t44 = (x181|((x182-x183)!=x184));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x185 = 17U;
	int32_t x186 = -187052;
	uint64_t x187 = 123597LLU;
	uint16_t x188 = UINT16_MAX;
	int32_t t45 = -39;

    t45 = (x185|((x186-x187)!=x188));

    if (t45 != 17) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -1;
	volatile uint64_t x191 = 103433764474LLU;
	int32_t x192 = -141900;

    t46 = (x189|((x190-x191)!=x192));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = -1;
	static uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t47 = 2;

    t47 = (x193|((x194-x195)!=x196));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	static volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = 1;
	int64_t t48 = -70924522031LL;

    t48 = (x197|((x198-x199)!=x200));

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x202 = INT32_MAX;
	static uint8_t x203 = 113U;
	static volatile int32_t t49 = 164846643;

    t49 = (x201|((x202-x203)!=x204));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = INT8_MIN;
	volatile int32_t t50 = -909117932;

    t50 = (x205|((x206-x207)!=x208));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x210 = 389000LLU;
	uint64_t x211 = 3127LLU;
	volatile int32_t t51 = -5009;

    t51 = (x209|((x210-x211)!=x212));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = 4;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -146LL;
	int16_t x216 = -2;
	static int32_t t52 = -7;

    t52 = (x213|((x214-x215)!=x216));

    if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x217 = 111U;
	uint64_t x218 = 850784305878376LLU;
	int16_t x219 = 0;
	volatile int32_t t53 = -44559162;

    t53 = (x217|((x218-x219)!=x220));

    if (t53 != 111) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x221 = 39504LLU;
	static int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	static volatile uint64_t t54 = 3774LLU;

    t54 = (x221|((x222-x223)!=x224));

    if (t54 != 39505LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MAX;
	uint16_t x226 = UINT16_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	static uint16_t x228 = 14U;

    t55 = (x225|((x226-x227)!=x228));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 22885U;
	uint64_t x232 = UINT64_MAX;
	static int32_t t56 = 1143801;

    t56 = (x229|((x230-x231)!=x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x233 = INT16_MIN;
	int8_t x235 = INT8_MAX;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t57 = -176951692;

    t57 = (x233|((x234-x235)!=x236));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -7931LL;
	static int16_t x238 = -112;
	int64_t x240 = -4002920197LL;

    t58 = (x237|((x238-x239)!=x240));

    if (t58 != -7931LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 1U;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MAX;
	int32_t t59 = -5582036;

    t59 = (x245|((x246-x247)!=x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	int32_t x252 = -1;
	static int64_t t60 = -221446591993LL;

    t60 = (x249|((x250-x251)!=x252));

    if (t60 != -8929LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = INT64_MIN;
	static volatile uint64_t x254 = 2846503750LLU;
	static int8_t x255 = INT8_MAX;
	int32_t x256 = -1;
	static int64_t t61 = -7914066560548LL;

    t61 = (x253|((x254-x255)!=x256));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = 450815;
	int64_t x263 = -6LL;
	int32_t x264 = INT32_MAX;
	volatile int32_t t62 = 229;

    t62 = (x261|((x262-x263)!=x264));

    if (t62 != 21) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 0U;
	static int32_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	volatile int16_t x268 = 10367;
	int32_t t63 = 1107800;

    t63 = (x265|((x266-x267)!=x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x269 = 3160237U;
	int32_t x270 = INT32_MAX;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = -1;

    t64 = (x269|((x270-x271)!=x272));

    if (t64 != 3160237U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = 7;
	volatile int8_t x274 = INT8_MIN;
	uint64_t x275 = 3732647905747LLU;
	int64_t x276 = -1707074677868LL;
	volatile int32_t t65 = 566;

    t65 = (x273|((x274-x275)!=x276));

    if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x277 = 4781U;
	int8_t x280 = 3;
	static volatile int32_t t66 = -599810236;

    t66 = (x277|((x278-x279)!=x280));

    if (t66 != 4781) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = INT16_MAX;
	uint8_t x282 = 94U;
	int16_t x283 = 323;
	int8_t x284 = -3;
	int32_t t67 = 19299074;

    t67 = (x281|((x282-x283)!=x284));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x287 = INT16_MIN;
	static int32_t x288 = 1732877;
	int32_t t68 = -4495;

    t68 = (x285|((x286-x287)!=x288));

    if (t68 != 77) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = 12U;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = -1;
	int32_t t69 = -6;

    t69 = (x289|((x290-x291)!=x292));

    if (t69 != 13) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x293 = -1;
	static int16_t x294 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t70 = 163711906;

    t70 = (x293|((x294-x295)!=x296));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = 202U;
	uint32_t x298 = 0U;
	static int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t71 = -4360;

    t71 = (x297|((x298-x299)!=x300));

    if (t71 != 203) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x301 = 80489U;
	int16_t x302 = -322;
	int16_t x303 = 0;
	volatile uint32_t t72 = 1291U;

    t72 = (x301|((x302-x303)!=x304));

    if (t72 != 80489U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = 0;
	volatile int64_t x306 = 73533LL;
	volatile uint16_t x307 = UINT16_MAX;
	volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t73 = 6671;

    t73 = (x305|((x306-x307)!=x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = -8;
	uint8_t x311 = 7U;
	volatile uint8_t x312 = 49U;
	static volatile int32_t t74 = 1536876;

    t74 = (x309|((x310-x311)!=x312));

    if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = 613881U;
	static uint64_t x314 = 871176488LLU;
	volatile uint64_t x316 = 289410LLU;
	uint32_t t75 = 3488U;

    t75 = (x313|((x314-x315)!=x316));

    if (t75 != 613881U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int64_t x318 = 925LL;
	static int16_t x319 = -1;
	static int32_t x320 = -196;
	uint64_t t76 = UINT64_MAX;

    t76 = (x317|((x318-x319)!=x320));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x325 = 5U;
	int64_t x326 = 4809050437392LL;
	static uint32_t x327 = 7U;
	volatile int32_t x328 = INT32_MIN;

    t77 = (x325|((x326-x327)!=x328));

    if (t77 != 5U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x329 = INT32_MIN;
	uint16_t x330 = 212U;
	static int64_t x332 = -1LL;
	int32_t t78 = -233;

    t78 = (x329|((x330-x331)!=x332));

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x335 = -1;
	static int64_t t79 = 729869519613LL;

    t79 = (x333|((x334-x335)!=x336));

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x337 = INT16_MAX;
	volatile int16_t x339 = INT16_MAX;
	int8_t x340 = -12;
	volatile int32_t t80 = -143374383;

    t80 = (x337|((x338-x339)!=x340));

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x341 = 7U;
	static volatile int32_t x342 = 22262027;
	int64_t x343 = -1LL;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t81 = 2332708;

    t81 = (x341|((x342-x343)!=x344));

    if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int8_t x346 = -1;
	int64_t x347 = -8044763633953310LL;
	static uint64_t x348 = 3372924149712LLU;
	uint64_t t82 = UINT64_MAX;

    t82 = (x345|((x346-x347)!=x348));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x349 = 7064820U;
	static int32_t x350 = -1;
	uint64_t x351 = 15692837803LLU;
	volatile uint32_t t83 = 109508857U;

    t83 = (x349|((x350-x351)!=x352));

    if (t83 != 7064821U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x353 = INT16_MIN;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = 0;
	static uint32_t x356 = 1U;
	volatile int32_t t84 = 809318;

    t84 = (x353|((x354-x355)!=x356));

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	static int16_t x359 = 1;
	static volatile uint32_t x360 = 12627U;
	volatile int32_t t85 = 1;

    t85 = (x357|((x358-x359)!=x360));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x361 = 295587614LL;
	int64_t x362 = -1LL;
	int32_t x363 = 32;
	static int64_t x364 = INT64_MIN;
	int64_t t86 = 802902LL;

    t86 = (x361|((x362-x363)!=x364));

    if (t86 != 295587615LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x369 = INT16_MAX;
	int32_t x370 = 15464;
	int16_t x371 = INT16_MIN;
	static int64_t x372 = 332060800LL;
	int32_t t87 = 3;

    t87 = (x369|((x370-x371)!=x372));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x373 = INT16_MAX;
	volatile int16_t x374 = INT16_MIN;
	static uint32_t x375 = 43946015U;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t88 = -1;

    t88 = (x373|((x374-x375)!=x376));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x378 = INT8_MIN;
	volatile int32_t x380 = -1;
	volatile int32_t t89 = -1004285919;

    t89 = (x377|((x378-x379)!=x380));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x381 = UINT8_MAX;
	uint8_t x383 = 0U;
	volatile int64_t x384 = -15LL;

    t90 = (x381|((x382-x383)!=x384));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x389 = 30LL;
	int32_t x390 = INT32_MIN;
	static int8_t x391 = INT8_MIN;
	uint32_t x392 = 1U;
	int64_t t91 = 1LL;

    t91 = (x389|((x390-x391)!=x392));

    if (t91 != 31LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x393 = 57U;
	uint32_t x395 = 3972137U;
	uint16_t x396 = UINT16_MAX;
	int32_t t92 = -27;

    t92 = (x393|((x394-x395)!=x396));

    if (t92 != 57) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = 23434;
	uint16_t x398 = 11949U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 3;
	int32_t t93 = -6990168;

    t93 = (x397|((x398-x399)!=x400));

    if (t93 != 23435) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x401 = 3U;
	volatile uint16_t x402 = UINT16_MAX;
	uint16_t x403 = 51U;
	int32_t t94 = 37760;

    t94 = (x401|((x402-x403)!=x404));

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	int16_t x408 = INT16_MAX;
	static int64_t t95 = 16LL;

    t95 = (x405|((x406-x407)!=x408));

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x409 = UINT8_MAX;
	static int32_t x411 = -1;
	int32_t t96 = -382369023;

    t96 = (x409|((x410-x411)!=x412));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x414 = -1;
	volatile int32_t x415 = INT32_MIN;
	uint16_t x416 = UINT16_MAX;
	uint32_t t97 = 25760897U;

    t97 = (x413|((x414-x415)!=x416));

    if (t97 != 133U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x418 = INT32_MIN;
	uint8_t x419 = 0U;
	int16_t x420 = -1;
	volatile int32_t t98 = 5567;

    t98 = (x417|((x418-x419)!=x420));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = 7;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = UINT8_MAX;
	uint64_t x428 = 14866482777739151LLU;
	int32_t t99 = -264768;

    t99 = (x425|((x426-x427)!=x428));

    if (t99 != 7) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = 3427;
	int64_t x430 = 59LL;
	static int8_t x431 = 0;
	volatile uint32_t x432 = 100705216U;

    t100 = (x429|((x430-x431)!=x432));

    if (t100 != 3427) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x437 = INT16_MAX;
	uint8_t x438 = UINT8_MAX;
	static uint16_t x439 = UINT16_MAX;

    t101 = (x437|((x438-x439)!=x440));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x441 = INT32_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	static int8_t x444 = INT8_MAX;
	volatile int32_t t102 = -28;

    t102 = (x441|((x442-x443)!=x444));

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = UINT8_MAX;
	uint8_t x447 = 0U;
	uint8_t x448 = 6U;
	int32_t t103 = 143314;

    t103 = (x445|((x446-x447)!=x448));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x450 = 2523886302158507833LLU;
	uint16_t x451 = 420U;
	int32_t x452 = INT32_MAX;
	uint32_t t104 = 1862844U;

    t104 = (x449|((x450-x451)!=x452));

    if (t104 != 173U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x453 = INT16_MIN;
	int8_t x454 = 41;
	static int32_t x455 = INT32_MAX;
	int32_t x456 = 7;
	volatile int32_t t105 = 13287852;

    t105 = (x453|((x454-x455)!=x456));

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = 0;
	int64_t x458 = INT64_MAX;
	uint32_t x459 = UINT32_MAX;
	static int8_t x460 = INT8_MAX;
	int32_t t106 = -2100800;

    t106 = (x457|((x458-x459)!=x460));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x462 = UINT16_MAX;
	int32_t t107 = -35;

    t107 = (x461|((x462-x463)!=x464));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x465 = INT64_MAX;
	uint8_t x466 = 114U;
	int8_t x467 = INT8_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t108 = INT64_MAX;

    t108 = (x465|((x466-x467)!=x468));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x469 = 1344740729825LLU;
	volatile uint16_t x470 = 0U;
	volatile int8_t x471 = -1;
	int32_t x472 = -3815920;
	volatile uint64_t t109 = 10800648319012934LLU;

    t109 = (x469|((x470-x471)!=x472));

    if (t109 != 1344740729825LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x473 = INT32_MIN;
	static uint64_t x474 = 1LLU;
	int32_t x476 = INT32_MIN;
	volatile int32_t t110 = -15;

    t110 = (x473|((x474-x475)!=x476));

    if (t110 != -2147483647) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x477 = 1319776040LLU;
	static int8_t x478 = INT8_MIN;
	static int64_t x480 = INT64_MIN;
	static volatile uint64_t t111 = 987552584928076392LLU;

    t111 = (x477|((x478-x479)!=x480));

    if (t111 != 1319776041LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = INT16_MIN;
	static int8_t x482 = INT8_MIN;
	uint32_t x483 = UINT32_MAX;
	uint32_t x484 = UINT32_MAX;
	int32_t t112 = -651548824;

    t112 = (x481|((x482-x483)!=x484));

    if (t112 != -32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = -1;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MAX;
	volatile int32_t t113 = 1;

    t113 = (x485|((x486-x487)!=x488));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x489 = 0U;
	static int8_t x490 = -1;
	int64_t x491 = -20532LL;
	int8_t x492 = INT8_MIN;
	static int32_t t114 = -14981741;

    t114 = (x489|((x490-x491)!=x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x494 = 154LLU;
	int64_t x495 = INT64_MIN;
	volatile uint32_t t115 = 110U;

    t115 = (x493|((x494-x495)!=x496));

    if (t115 != 7U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x497 = INT64_MIN;
	int8_t x498 = -1;
	int32_t x499 = -1;
	uint8_t x500 = 22U;
	volatile int64_t t116 = -97763266668358646LL;

    t116 = (x497|((x498-x499)!=x500));

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x502 = INT64_MAX;
	int64_t x504 = -1LL;

    t117 = (x501|((x502-x503)!=x504));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MIN;
	int64_t x507 = -52730729143LL;
	uint16_t x508 = UINT16_MAX;
	int32_t t118 = -54258;

    t118 = (x505|((x506-x507)!=x508));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x511 = 3U;
	int32_t x512 = INT32_MAX;
	static volatile int32_t t119 = 10;

    t119 = (x509|((x510-x511)!=x512));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x513 = 604U;
	volatile uint64_t x514 = 8180179LLU;
	static volatile uint64_t x515 = UINT64_MAX;
	uint32_t x516 = 1U;
	static int32_t t120 = 209252880;

    t120 = (x513|((x514-x515)!=x516));

    if (t120 != 605) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x518 = 3503LLU;
	static volatile uint64_t x519 = 40816222593321754LLU;
	volatile int32_t x520 = 4788;

    t121 = (x517|((x518-x519)!=x520));

    if (t121 != -278707) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x522 = 79LLU;
	int32_t x524 = 644846107;

    t122 = (x521|((x522-x523)!=x524));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x525 = 2036281872U;
	int16_t x526 = 1;
	uint32_t x528 = UINT32_MAX;
	volatile uint32_t t123 = 41U;

    t123 = (x525|((x526-x527)!=x528));

    if (t123 != 2036281873U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x529 = -1LL;
	int32_t x530 = INT32_MIN;
	int16_t x531 = -4;

    t124 = (x529|((x530-x531)!=x532));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x533 = 2433916U;
	uint64_t x534 = 12959LLU;
	int32_t x535 = INT32_MIN;
	int8_t x536 = 59;
	uint32_t t125 = 2579919U;

    t125 = (x533|((x534-x535)!=x536));

    if (t125 != 2433917U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = -1;
	uint8_t x538 = UINT8_MAX;
	volatile int8_t x539 = -1;
	static int32_t t126 = -55503;

    t126 = (x537|((x538-x539)!=x540));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x542 = INT64_MAX;
	int16_t x544 = INT16_MIN;
	volatile int32_t t127 = 1725;

    t127 = (x541|((x542-x543)!=x544));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x546 = 14U;
	uint32_t x547 = UINT32_MAX;
	uint16_t x548 = 1526U;
	volatile uint32_t t128 = 90436304U;

    t128 = (x545|((x546-x547)!=x548));

    if (t128 != 347452677U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x549 = -117704675524371LL;
	static uint16_t x550 = 1U;
	uint16_t x552 = 6U;

    t129 = (x549|((x550-x551)!=x552));

    if (t129 != -117704675524371LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x553 = UINT8_MAX;
	int32_t x554 = -10;
	volatile int8_t x555 = INT8_MIN;
	int32_t x556 = INT32_MIN;
	static int32_t t130 = -3;

    t130 = (x553|((x554-x555)!=x556));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x557 = 3564;
	static int64_t x558 = -1LL;
	uint32_t x559 = 18888255U;
	volatile int16_t x560 = -1;
	int32_t t131 = 8;

    t131 = (x557|((x558-x559)!=x560));

    if (t131 != 3565) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x561 = INT32_MAX;
	volatile uint16_t x562 = 3U;
	int8_t x563 = INT8_MAX;
	uint16_t x564 = 162U;

    t132 = (x561|((x562-x563)!=x564));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = 1LL;
	uint32_t x566 = UINT32_MAX;
	static uint32_t x567 = 40555400U;
	static volatile int16_t x568 = -1;
	int64_t t133 = 4LL;

    t133 = (x565|((x566-x567)!=x568));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x569 = -125;
	uint32_t x570 = UINT32_MAX;
	volatile int64_t x571 = INT64_MAX;
	int8_t x572 = INT8_MIN;
	volatile int32_t t134 = 34514339;

    t134 = (x569|((x570-x571)!=x572));

    if (t134 != -125) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	int8_t x579 = INT8_MIN;
	uint32_t x580 = 623120U;

    t135 = (x577|((x578-x579)!=x580));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = -1;
	int8_t x586 = -61;
	volatile int8_t x587 = INT8_MIN;
	volatile int64_t x588 = INT64_MAX;
	static volatile int32_t t136 = -248833877;

    t136 = (x585|((x586-x587)!=x588));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x589 = 48U;
	int16_t x591 = -6639;
	int32_t x592 = INT32_MIN;
	static volatile int32_t t137 = 2292;

    t137 = (x589|((x590-x591)!=x592));

    if (t137 != 49) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = -1;
	static int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	int64_t x596 = INT64_MAX;
	volatile int32_t t138 = -7;

    t138 = (x593|((x594-x595)!=x596));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x598 = INT8_MIN;
	static int16_t x599 = 0;
	int16_t x600 = INT16_MAX;
	volatile int32_t t139 = 184137;

    t139 = (x597|((x598-x599)!=x600));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = -1;
	int8_t x611 = INT8_MAX;

    t140 = (x609|((x610-x611)!=x612));

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x613 = 15U;
	volatile uint8_t x614 = 49U;
	int8_t x615 = INT8_MAX;
	uint64_t x616 = UINT64_MAX;
	int32_t t141 = -241;

    t141 = (x613|((x614-x615)!=x616));

    if (t141 != 15) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MIN;
	uint32_t x620 = UINT32_MAX;
	volatile int32_t t142 = 294;

    t142 = (x617|((x618-x619)!=x620));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x625 = INT16_MAX;
	volatile int64_t x627 = INT64_MIN;
	static uint16_t x628 = UINT16_MAX;
	volatile int32_t t143 = -225601;

    t143 = (x625|((x626-x627)!=x628));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x630 = INT8_MAX;
	int32_t x631 = -1;
	uint16_t x632 = 3902U;
	uint64_t t144 = UINT64_MAX;

    t144 = (x629|((x630-x631)!=x632));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x633 = -35;
	volatile int32_t x634 = -548983497;
	int8_t x635 = 1;
	volatile int32_t t145 = 14201;

    t145 = (x633|((x634-x635)!=x636));

    if (t145 != -35) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x637 = 0;
	static volatile uint32_t x638 = UINT32_MAX;
	int16_t x639 = -14;
	int64_t x640 = INT64_MAX;
	static int32_t t146 = 0;

    t146 = (x637|((x638-x639)!=x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x641 = INT32_MAX;
	int16_t x642 = INT16_MAX;
	static int8_t x643 = 0;
	static int64_t x644 = INT64_MIN;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x641|((x642-x643)!=x644));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x646 = INT8_MIN;
	uint32_t x647 = 10996U;
	int8_t x648 = 61;
	int32_t t148 = 16240492;

    t148 = (x645|((x646-x647)!=x648));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x649 = INT32_MAX;
	int32_t x650 = 2718954;
	uint8_t x651 = 44U;
	int64_t x652 = INT64_MIN;
	int32_t t149 = INT32_MAX;

    t149 = (x649|((x650-x651)!=x652));

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x657 = INT32_MAX;
	int8_t x658 = INT8_MIN;
	static int64_t x660 = -552399519061125930LL;

    t150 = (x657|((x658-x659)!=x660));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x661 = 4842379LLU;
	int16_t x662 = -1;
	uint32_t x663 = 3883280U;
	int32_t x664 = INT32_MAX;
	static volatile uint64_t t151 = 2050209LLU;

    t151 = (x661|((x662-x663)!=x664));

    if (t151 != 4842379LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x666 = UINT64_MAX;
	static volatile int32_t t152 = 10351446;

    t152 = (x665|((x666-x667)!=x668));

    if (t152 != 59) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x669 = 3533;
	static int8_t x671 = -1;
	static int32_t t153 = -3702;

    t153 = (x669|((x670-x671)!=x672));

    if (t153 != 3533) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x673 = 552U;
	static int16_t x674 = -15;
	uint64_t x675 = UINT64_MAX;
	int64_t x676 = -115LL;
	volatile int32_t t154 = 39;

    t154 = (x673|((x674-x675)!=x676));

    if (t154 != 553) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x678 = UINT16_MAX;
	uint16_t x679 = 2U;
	static volatile uint32_t t155 = 2701U;

    t155 = (x677|((x678-x679)!=x680));

    if (t155 != 118762233U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x681 = -1;
	uint16_t x682 = UINT16_MAX;
	static int16_t x683 = 101;
	int64_t x684 = 402252LL;

    t156 = (x681|((x682-x683)!=x684));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x685 = INT16_MIN;
	static volatile int32_t x686 = 1;
	int8_t x687 = -1;
	uint16_t x688 = 0U;
	int32_t t157 = -316;

    t157 = (x685|((x686-x687)!=x688));

    if (t157 != -32767) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x689 = 32805002LLU;
	int8_t x690 = INT8_MAX;
	static int64_t x692 = INT64_MAX;
	uint64_t t158 = 2LLU;

    t158 = (x689|((x690-x691)!=x692));

    if (t158 != 32805003LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x693 = 19U;
	static int8_t x694 = 1;
	uint16_t x695 = 6U;
	int32_t t159 = 20;

    t159 = (x693|((x694-x695)!=x696));

    if (t159 != 19) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x697 = INT8_MIN;
	int64_t x699 = -1LL;
	int16_t x700 = INT16_MAX;
	int32_t t160 = -29;

    t160 = (x697|((x698-x699)!=x700));

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x701 = 1306532823377085157LL;
	int16_t x702 = 215;
	int64_t x703 = 1133211150688LL;
	int16_t x704 = INT16_MAX;
	volatile int64_t t161 = 183026LL;

    t161 = (x701|((x702-x703)!=x704));

    if (t161 != 1306532823377085157LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x705 = -536293541LL;
	int8_t x706 = -9;
	uint8_t x707 = UINT8_MAX;
	int16_t x708 = -1;

    t162 = (x705|((x706-x707)!=x708));

    if (t162 != -536293541LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x709 = 6U;
	uint64_t x710 = 95479709056484LLU;
	int64_t x711 = INT64_MIN;
	static int8_t x712 = INT8_MIN;
	volatile int32_t t163 = -1009440242;

    t163 = (x709|((x710-x711)!=x712));

    if (t163 != 7) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x713 = 73U;
	volatile int32_t x715 = -61896791;
	uint8_t x716 = 98U;
	static volatile int32_t t164 = 101620080;

    t164 = (x713|((x714-x715)!=x716));

    if (t164 != 73) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x721 = INT32_MIN;
	int64_t x722 = -18612873361LL;
	static int32_t x724 = -117280;
	static volatile int32_t t165 = -105570550;

    t165 = (x721|((x722-x723)!=x724));

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x725 = -1LL;
	volatile uint32_t x726 = 63968761U;
	int64_t x728 = INT64_MIN;
	volatile int64_t t166 = 379011176129761467LL;

    t166 = (x725|((x726-x727)!=x728));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x737 = -1;
	volatile int8_t x738 = -1;
	volatile int64_t x739 = 28088511LL;

    t167 = (x737|((x738-x739)!=x740));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x741 = UINT16_MAX;
	static int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	uint16_t x744 = 231U;

    t168 = (x741|((x742-x743)!=x744));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x745 = -1;
	uint64_t x746 = 984917LLU;
	uint32_t x747 = UINT32_MAX;
	uint8_t x748 = UINT8_MAX;
	int32_t t169 = 0;

    t169 = (x745|((x746-x747)!=x748));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x750 = 741596227085LL;
	int64_t x751 = INT64_MAX;
	int32_t x752 = 25560169;
	uint32_t t170 = 1870670U;

    t170 = (x749|((x750-x751)!=x752));

    if (t170 != 43U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x753 = 3U;
	volatile uint64_t x754 = UINT64_MAX;
	static uint32_t x755 = 7U;
	int64_t x756 = INT64_MIN;
	int32_t t171 = -1;

    t171 = (x753|((x754-x755)!=x756));

    if (t171 != 3) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x757 = 1716926LLU;
	volatile uint32_t x759 = 66678881U;
	uint64_t x760 = 334LLU;

    t172 = (x757|((x758-x759)!=x760));

    if (t172 != 1716927LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x765 = 0U;
	static volatile int32_t x766 = INT32_MIN;
	static int16_t x767 = INT16_MIN;
	int32_t x768 = -388764553;
	int32_t t173 = -74;

    t173 = (x765|((x766-x767)!=x768));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x769 = -5366;
	uint64_t x770 = 1055125584726LLU;
	uint16_t x771 = UINT16_MAX;
	volatile int32_t t174 = -12;

    t174 = (x769|((x770-x771)!=x772));

    if (t174 != -5365) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x775 = -13193637106984383LL;
	int32_t t175 = 595331614;

    t175 = (x773|((x774-x775)!=x776));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x777 = 216870909018290602LLU;
	uint8_t x778 = 1U;
	static uint64_t x779 = 45LLU;

    t176 = (x777|((x778-x779)!=x780));

    if (t176 != 216870909018290603LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x781 = 21;
	int8_t x782 = -1;
	uint8_t x783 = 3U;
	int64_t x784 = -1LL;
	int32_t t177 = -506787990;

    t177 = (x781|((x782-x783)!=x784));

    if (t177 != 21) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x786 = 8602U;
	int64_t x788 = 94407LL;
	uint32_t t178 = 2657412U;

    t178 = (x785|((x786-x787)!=x788));

    if (t178 != 23U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x789 = INT8_MIN;
	uint8_t x790 = UINT8_MAX;
	int32_t x791 = -1;
	uint64_t x792 = 16998106400632LLU;
	int32_t t179 = 11204;

    t179 = (x789|((x790-x791)!=x792));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x794 = 7U;
	volatile int8_t x795 = INT8_MAX;
	uint8_t x796 = 115U;
	static uint32_t t180 = 277658767U;

    t180 = (x793|((x794-x795)!=x796));

    if (t180 != 28488549U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x797 = INT32_MIN;
	uint64_t x798 = 4358406743674332116LLU;
	int32_t x799 = -74885;
	int32_t t181 = 4;

    t181 = (x797|((x798-x799)!=x800));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x801 = INT32_MIN;
	int8_t x802 = INT8_MIN;
	uint32_t x803 = 7185817U;
	int64_t x804 = -1LL;
	volatile int32_t t182 = 45;

    t182 = (x801|((x802-x803)!=x804));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x805 = -1LL;
	static int16_t x807 = -1;
	static uint32_t x808 = UINT32_MAX;
	int64_t t183 = -43653061953149LL;

    t183 = (x805|((x806-x807)!=x808));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x809 = INT32_MIN;
	volatile int64_t x810 = -25LL;
	volatile uint8_t x811 = UINT8_MAX;
	int8_t x812 = INT8_MIN;
	volatile int32_t t184 = -1;

    t184 = (x809|((x810-x811)!=x812));

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x813 = INT8_MAX;
	static int8_t x815 = -2;
	volatile uint32_t x816 = 13403920U;
	static volatile int32_t t185 = -151779;

    t185 = (x813|((x814-x815)!=x816));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x818 = INT16_MAX;
	int64_t t186 = 568150222455519LL;

    t186 = (x817|((x818-x819)!=x820));

    if (t186 != -57675875LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x821 = -1;
	static int64_t x822 = INT64_MIN;
	static volatile uint8_t x824 = UINT8_MAX;
	int32_t t187 = -22;

    t187 = (x821|((x822-x823)!=x824));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x825 = 219871273216LL;
	uint8_t x826 = UINT8_MAX;
	int8_t x827 = INT8_MIN;
	int8_t x828 = INT8_MIN;
	volatile int64_t t188 = 13643295866452LL;

    t188 = (x825|((x826-x827)!=x828));

    if (t188 != 219871273217LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x829 = 4040U;
	static int16_t x830 = -1;
	int8_t x832 = INT8_MIN;
	int32_t t189 = -180362240;

    t189 = (x829|((x830-x831)!=x832));

    if (t189 != 4040) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x833 = INT64_MAX;
	uint16_t x834 = 27876U;
	int64_t t190 = INT64_MAX;

    t190 = (x833|((x834-x835)!=x836));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x837 = -1;
	static volatile int64_t x839 = 13813181051935LL;
	int32_t x840 = -1;
	int32_t t191 = -13693936;

    t191 = (x837|((x838-x839)!=x840));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x841 = 8948129484070679721LLU;
	uint16_t x842 = 96U;
	uint64_t x843 = UINT64_MAX;
	int16_t x844 = INT16_MAX;
	volatile uint64_t t192 = 747LLU;

    t192 = (x841|((x842-x843)!=x844));

    if (t192 != 8948129484070679721LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x845 = INT64_MAX;
	uint16_t x846 = 1792U;
	uint32_t x848 = UINT32_MAX;
	int64_t t193 = INT64_MAX;

    t193 = (x845|((x846-x847)!=x848));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x849 = UINT64_MAX;
	int16_t x851 = INT16_MAX;
	int8_t x852 = INT8_MIN;
	uint64_t t194 = UINT64_MAX;

    t194 = (x849|((x850-x851)!=x852));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x861 = 6;
	static volatile int16_t x862 = INT16_MAX;
	static int8_t x863 = 0;
	volatile int32_t t195 = -468708;

    t195 = (x861|((x862-x863)!=x864));

    if (t195 != 7) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x865 = 96380991U;
	int32_t x866 = INT32_MIN;
	int8_t x868 = INT8_MIN;
	volatile uint32_t t196 = 51528915U;

    t196 = (x865|((x866-x867)!=x868));

    if (t196 != 96380991U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x869 = 66U;
	int64_t x870 = -1LL;
	int8_t x871 = INT8_MIN;
	int16_t x872 = INT16_MIN;
	static int32_t t197 = 31899;

    t197 = (x869|((x870-x871)!=x872));

    if (t197 != 67) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x874 = -6230949345LL;
	int64_t x875 = INT64_MIN;
	uint64_t t198 = 2659LLU;

    t198 = (x873|((x874-x875)!=x876));

    if (t198 != 518166407LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x878 = 769652523U;
	int32_t x879 = -1;
	int8_t x880 = INT8_MIN;
	static int64_t t199 = -40525554LL;

    t199 = (x877|((x878-x879)!=x880));

    if (t199 != -1653LL) { NG(); } else { ; }
	
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

