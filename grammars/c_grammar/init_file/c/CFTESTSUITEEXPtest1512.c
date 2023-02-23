
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

int64_t x1 = INT64_MIN;
int64_t x10 = INT64_MAX;
static volatile uint16_t x16 = UINT16_MAX;
static uint8_t x18 = 91U;
uint8_t x23 = 2U;
int32_t t5 = -18404;
volatile uint32_t t6 = 647U;
int32_t x32 = INT32_MAX;
int8_t x34 = INT8_MIN;
static int8_t x39 = 29;
static int64_t x42 = -876894279528850937LL;
static uint64_t x44 = 207852LLU;
int8_t x48 = INT8_MAX;
uint8_t x54 = 104U;
int16_t x59 = INT16_MIN;
uint32_t x60 = 360483U;
int32_t x65 = INT32_MAX;
int64_t x67 = INT64_MIN;
volatile uint8_t x73 = UINT8_MAX;
volatile int32_t x77 = INT32_MIN;
volatile uint16_t x82 = UINT16_MAX;
uint8_t x84 = UINT8_MAX;
uint8_t x89 = UINT8_MAX;
uint16_t x93 = 9393U;
volatile int32_t t23 = 0;
int16_t x97 = INT16_MAX;
int64_t x98 = INT64_MIN;
int32_t t24 = -2057442;
int8_t x103 = 39;
volatile int32_t x106 = INT32_MIN;
int16_t x107 = INT16_MAX;
uint32_t x116 = 6675113U;
volatile int8_t x117 = 1;
volatile uint16_t x121 = UINT16_MAX;
volatile int16_t x124 = 3855;
volatile uint64_t t31 = 25165926691753LLU;
int32_t t32 = -42877;
int32_t x136 = INT32_MAX;
int64_t x141 = INT64_MIN;
uint8_t x142 = 2U;
int64_t t35 = INT64_MIN;
int16_t x145 = INT16_MAX;
uint16_t x149 = 600U;
int32_t t37 = 1294;
int16_t x155 = INT16_MIN;
int16_t x160 = -1;
volatile int16_t x164 = INT16_MAX;
static int16_t x167 = INT16_MAX;
int32_t t42 = 57971513;
uint32_t x173 = 1U;
static int32_t x176 = INT32_MIN;
int16_t x178 = -20;
uint32_t x180 = 364U;
int16_t x182 = 1;
static uint64_t x186 = UINT64_MAX;
int16_t x190 = INT16_MIN;
uint8_t x194 = 43U;
volatile int32_t x196 = INT32_MAX;
int16_t x199 = INT16_MAX;
static uint16_t x203 = UINT16_MAX;
static int32_t x205 = INT32_MIN;
int32_t x209 = -1;
volatile int32_t t54 = -497921013;
int32_t t57 = 5178812;
volatile uint16_t x235 = 501U;
int64_t x244 = -848533621044LL;
volatile int64_t t60 = INT64_MAX;
volatile uint16_t x248 = 836U;
static volatile int32_t t61 = 156849702;
static int64_t x258 = INT64_MAX;
static int64_t x260 = -1932014708642972346LL;
int64_t x267 = INT64_MIN;
int64_t x268 = INT64_MAX;
int32_t x274 = 6950696;
int32_t t68 = 7629451;
int32_t x278 = INT32_MIN;
volatile uint64_t x279 = 66640990LLU;
int64_t x284 = INT64_MIN;
int8_t x288 = INT8_MAX;
static volatile int64_t x298 = 215768454LL;
int16_t x303 = -1;
static int64_t t75 = -47318329781203LL;
int8_t x306 = INT8_MIN;
int8_t x309 = INT8_MIN;
static int16_t x310 = INT16_MIN;
volatile int32_t t77 = -1;
int16_t x314 = INT16_MIN;
int32_t t78 = 476;
volatile int32_t t79 = 31633;
uint16_t x327 = 51U;
volatile uint64_t t83 = 4488442LLU;
int32_t x338 = -1;
int32_t x340 = -77529725;
uint32_t x341 = 230030217U;
uint8_t x343 = 1U;
static volatile int64_t x346 = -1LL;
static int64_t x348 = -1LL;
static uint64_t t86 = 1725572621389LLU;
volatile int8_t x354 = INT8_MAX;
int16_t x367 = INT16_MAX;
volatile int16_t x368 = -1;
int32_t x374 = -1;
int8_t x375 = -6;
static uint16_t x380 = 5200U;
static int8_t x388 = 15;
static int64_t x393 = -1LL;
volatile uint16_t x399 = 298U;
int64_t x402 = 75770LL;
int32_t x406 = INT32_MAX;
uint32_t x412 = UINT32_MAX;
int8_t x415 = -33;
int64_t x416 = -55LL;
static volatile int32_t t103 = 251;
volatile uint32_t x419 = 7079U;
uint64_t t105 = 8531821905LLU;
int16_t x425 = INT16_MIN;
int32_t x428 = INT32_MIN;
volatile int64_t x429 = -67003924280275LL;
uint32_t x432 = UINT32_MAX;
volatile int32_t t108 = 22542813;
uint8_t x437 = 1U;
uint32_t x441 = 23838836U;
int32_t x455 = 19;
volatile int32_t t115 = 123071;
volatile int64_t t116 = 1179187738049061023LL;
volatile int64_t x483 = -1655743LL;
volatile int64_t t121 = -1LL;
int16_t x490 = 7;
int32_t t122 = 351;
int16_t x495 = INT16_MIN;
volatile int32_t t123 = 1;
int32_t x501 = -491;
int32_t t126 = 1;
static int8_t x509 = 1;
volatile int32_t t127 = 1014;
static int32_t x514 = 82;
volatile int16_t x515 = -1;
uint32_t x518 = 479350U;
uint16_t x521 = 2U;
static int64_t x532 = INT64_MIN;
uint8_t x533 = UINT8_MAX;
int32_t t133 = 451;
static int32_t x540 = -1;
uint64_t x555 = 208143LLU;
uint32_t x560 = UINT32_MAX;
int32_t t139 = 13621;
int16_t x564 = -50;
int32_t x571 = INT32_MIN;
int16_t x575 = 259;
int32_t x581 = INT32_MAX;
int16_t x582 = -1;
int8_t x586 = INT8_MAX;
volatile uint8_t x601 = UINT8_MAX;
volatile int16_t x604 = 1;
static int32_t t151 = -259853;
int16_t x620 = INT16_MIN;
static volatile int32_t t154 = -11;
static volatile int32_t x625 = 1059381551;
int32_t x627 = INT32_MAX;
uint64_t x628 = UINT64_MAX;
static volatile int8_t x629 = INT8_MIN;
volatile int16_t x630 = INT16_MIN;
uint64_t x633 = 470652617LLU;
int64_t x635 = 13307233279LL;
static uint64_t t158 = 247523803413547334LLU;
int32_t t159 = 34;
int64_t x656 = INT64_MIN;
int64_t t163 = 149362548053671377LL;
uint16_t x664 = 1U;
int32_t t167 = 36661;
static int64_t x676 = INT64_MIN;
int32_t x680 = INT32_MAX;
volatile uint64_t x681 = 1078678355044944208LLU;
uint64_t x683 = UINT64_MAX;
int8_t x694 = -1;
static volatile int32_t t173 = 2687367;
static int8_t x701 = -1;
int16_t x702 = INT16_MIN;
int32_t t175 = 7;
int32_t t176 = 23335916;
volatile int64_t x709 = -1LL;
volatile int64_t x716 = INT64_MAX;
static volatile uint32_t x719 = 1409677958U;
uint64_t x734 = 11LLU;
int16_t x735 = INT16_MIN;
int32_t x736 = 5804145;
int64_t x740 = INT64_MAX;
static int8_t x741 = INT8_MIN;
volatile uint8_t x742 = UINT8_MAX;
int64_t t186 = 85414LL;
int16_t x752 = -1;
int8_t x756 = INT8_MIN;
volatile uint32_t x759 = 53U;
uint64_t x761 = UINT64_MAX;
int16_t x764 = -1;
volatile uint64_t t190 = UINT64_MAX;
int16_t x768 = -1;
int16_t x775 = INT16_MIN;
int32_t t193 = -1;
int64_t x782 = INT64_MAX;
static int16_t x783 = -10338;
uint16_t x785 = 2U;
int32_t t196 = -542594454;
static uint64_t x791 = 2816808LLU;
uint64_t t197 = 5419253480548808992LLU;
volatile uint32_t x794 = UINT32_MAX;
int32_t x797 = 121478;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	volatile int16_t x3 = -8222;
	uint16_t x4 = 83U;
	volatile int64_t t0 = -3622LL;

    t0 = (x1^((x2==x3)<=x4));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -710;
	volatile int64_t x6 = INT64_MAX;
	uint64_t x7 = 25LLU;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 22451;

    t1 = (x5^((x6==x7)<=x8));

    if (t1 != -710) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	volatile uint8_t x11 = 90U;
	volatile int32_t x12 = -1;
	volatile int32_t t2 = -1;

    t2 = (x9^((x10==x11)<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	static volatile int32_t t3 = -143;

    t3 = (x13^((x14==x15)<=x16));

    if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 1007385850;
	uint64_t x19 = 517268300LLU;
	int8_t x20 = 60;
	volatile int32_t t4 = 19129;

    t4 = (x17^((x18==x19)<=x20));

    if (t4 != 1007385851) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 4;
	int16_t x22 = INT16_MIN;
	static int16_t x24 = -1;

    t5 = (x21^((x22==x23)<=x24));

    if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 446U;
	static int16_t x26 = 47;
	volatile int32_t x27 = INT32_MIN;
	uint8_t x28 = 14U;

    t6 = (x25^((x26==x27)<=x28));

    if (t6 != 447U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 1380;
	int32_t x30 = INT32_MAX;
	volatile uint32_t x31 = 1281653U;
	int32_t t7 = 185010;

    t7 = (x29^((x30==x31)<=x32));

    if (t7 != 1381) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x35 = -32;
	int8_t x36 = -48;
	int32_t t8 = -460121;

    t8 = (x33^((x34==x35)<=x36));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 1U;
	static int8_t x40 = -1;
	static volatile uint32_t t9 = UINT32_MAX;

    t9 = (x37^((x38==x39)<=x40));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	int16_t x43 = 63;
	int32_t t10 = -219034;

    t10 = (x41^((x42==x43)<=x44));

    if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1227707126LLU;
	int32_t x46 = -1;
	int64_t x47 = INT64_MIN;
	volatile uint64_t t11 = 444121567772573LLU;

    t11 = (x45^((x46==x47)<=x48));

    if (t11 != 1227707127LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 627117246081619LLU;
	int8_t x50 = INT8_MAX;
	static int32_t x51 = INT32_MIN;
	volatile int16_t x52 = INT16_MAX;
	static uint64_t t12 = 3376703614LLU;

    t12 = (x49^((x50==x51)<=x52));

    if (t12 != 627117246081618LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int16_t x55 = -3;
	int16_t x56 = 230;
	int64_t t13 = 162556LL;

    t13 = (x53^((x54==x55)<=x56));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 24U;
	uint32_t x58 = 305511748U;
	int32_t t14 = -63172;

    t14 = (x57^((x58==x59)<=x60));

    if (t14 != 25) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 8251U;
	volatile uint8_t x62 = 5U;
	int32_t x63 = INT32_MIN;
	volatile uint8_t x64 = UINT8_MAX;
	uint32_t t15 = 89390873U;

    t15 = (x61^((x62==x63)<=x64));

    if (t15 != 8250U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = UINT16_MAX;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 390;

    t16 = (x65^((x66==x67)<=x68));

    if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 15U;
	volatile int32_t x70 = -874;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 3;

    t17 = (x69^((x70==x71)<=x72));

    if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	static int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = 3366;

    t18 = (x73^((x74==x75)<=x76));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 68U;
	int32_t x79 = -1;
	int32_t x80 = -2854;
	int32_t t19 = INT32_MIN;

    t19 = (x77^((x78==x79)<=x80));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 62531074LLU;
	int32_t x83 = 0;
	volatile uint64_t t20 = 252042LLU;

    t20 = (x81^((x82==x83)<=x84));

    if (t20 != 62531075LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	static uint32_t x86 = UINT32_MAX;
	volatile int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	static int64_t t21 = -52938321LL;

    t21 = (x85^((x86==x87)<=x88));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x90 = 61U;
	static int32_t x91 = INT32_MIN;
	uint8_t x92 = 4U;
	static int32_t t22 = -597977281;

    t22 = (x89^((x90==x91)<=x92));

    if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	volatile int64_t x95 = INT64_MAX;
	int8_t x96 = -1;

    t23 = (x93^((x94==x95)<=x96));

    if (t23 != 9393) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x99 = -1;
	static int32_t x100 = INT32_MAX;

    t24 = (x97^((x98==x99)<=x100));

    if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = -115;
	uint64_t x102 = 6048116494772593LLU;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = 3;

    t25 = (x101^((x102==x103)<=x104));

    if (t25 != -116) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 2634614LLU;
	uint64_t x108 = UINT64_MAX;
	uint64_t t26 = 20664LLU;

    t26 = (x105^((x106==x107)<=x108));

    if (t26 != 2634615LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1675;
	int16_t x110 = -27;
	uint32_t x111 = 157126U;
	int16_t x112 = -1;
	static volatile int32_t t27 = 15009023;

    t27 = (x109^((x110==x111)<=x112));

    if (t27 != -1675) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MAX;
	static volatile int64_t x115 = INT64_MAX;
	volatile uint64_t t28 = 8LLU;

    t28 = (x113^((x114==x115)<=x116));

    if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = UINT32_MAX;
	int16_t x119 = -1;
	volatile uint32_t x120 = 20U;
	volatile int32_t t29 = 1136;

    t29 = (x117^((x118==x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	int64_t x123 = -1LL;
	int32_t t30 = -136;

    t30 = (x121^((x122==x123)<=x124));

    if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 26LLU;
	int8_t x126 = -1;
	static int64_t x127 = 2124534544741LL;
	int32_t x128 = INT32_MIN;

    t31 = (x125^((x126==x127)<=x128));

    if (t31 != 26LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	int32_t x131 = INT32_MAX;
	uint8_t x132 = 1U;

    t32 = (x129^((x130==x131)<=x132));

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 4408U;
	static volatile int8_t x134 = INT8_MAX;
	int64_t x135 = INT64_MAX;
	int32_t t33 = -329;

    t33 = (x133^((x134==x135)<=x136));

    if (t33 != 4409) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 365LLU;
	int64_t x138 = 49235LL;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	uint64_t t34 = 7894156709LLU;

    t34 = (x137^((x138==x139)<=x140));

    if (t34 != 365LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;

    t35 = (x141^((x142==x143)<=x144));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x146 = -1050550332;
	uint64_t x147 = 1298116577LLU;
	int32_t x148 = -1;
	static volatile int32_t t36 = 86201211;

    t36 = (x145^((x146==x147)<=x148));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x150 = 337764197;
	static uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 22186U;

    t37 = (x149^((x150==x151)<=x152));

    if (t37 != 601) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -757;
	uint16_t x154 = 18564U;
	static int64_t x156 = -1LL;
	volatile int32_t t38 = 1;

    t38 = (x153^((x154==x155)<=x156));

    if (t38 != -757) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = UINT8_MAX;
	int64_t t39 = INT64_MAX;

    t39 = (x157^((x158==x159)<=x160));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 0U;
	int64_t x162 = 2LL;
	volatile uint32_t x163 = 180001U;
	int32_t t40 = 3;

    t40 = (x161^((x162==x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 53145082185575LL;
	volatile uint16_t x166 = 4327U;
	int32_t x168 = -1;
	int64_t t41 = 1223088LL;

    t41 = (x165^((x166==x167)<=x168));

    if (t41 != 53145082185575LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	static volatile int16_t x170 = -1;
	static uint64_t x171 = 21LLU;
	static int64_t x172 = INT64_MIN;

    t42 = (x169^((x170==x171)<=x172));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x174 = -1;
	int16_t x175 = INT16_MAX;
	volatile uint32_t t43 = 683U;

    t43 = (x173^((x174==x175)<=x176));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint8_t x179 = UINT8_MAX;
	int32_t t44 = -99650;

    t44 = (x177^((x178==x179)<=x180));

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -1LL;
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t45 = 6796LL;

    t45 = (x181^((x182==x183)<=x184));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = UINT16_MAX;
	int32_t x187 = 0;
	static uint16_t x188 = 3U;
	int32_t t46 = 2530;

    t46 = (x185^((x186==x187)<=x188));

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 1;
	int16_t x191 = 4476;
	int16_t x192 = -105;
	volatile int32_t t47 = -14;

    t47 = (x189^((x190==x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int64_t x195 = 956439LL;
	int32_t t48 = -3346;

    t48 = (x193^((x194==x195)<=x196));

    if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 14U;
	uint16_t x198 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = -996759;

    t49 = (x197^((x198==x199)<=x200));

    if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	static volatile uint32_t x202 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	int64_t t50 = INT64_MAX;

    t50 = (x201^((x202==x203)<=x204));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = 650;
	int16_t x207 = -1;
	int64_t x208 = 87277LL;
	static int32_t t51 = 55;

    t51 = (x205^((x206==x207)<=x208));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x210 = 8449819534505310LL;
	int64_t x211 = -1LL;
	int16_t x212 = -1;
	static int32_t t52 = -281;

    t52 = (x209^((x210==x211)<=x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 43LLU;
	int8_t x214 = -1;
	static volatile int32_t x215 = 1813;
	uint16_t x216 = UINT16_MAX;
	uint64_t t53 = 0LLU;

    t53 = (x213^((x214==x215)<=x216));

    if (t53 != 42LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = 413;
	uint64_t x218 = 21250374347222802LLU;
	int16_t x219 = -1;
	static volatile int32_t x220 = -951892050;

    t54 = (x217^((x218==x219)<=x220));

    if (t54 != 413) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = -1;
	uint8_t x222 = 50U;
	int16_t x223 = INT16_MAX;
	int16_t x224 = -12466;
	int32_t t55 = 0;

    t55 = (x221^((x222==x223)<=x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 211U;
	volatile int32_t x226 = INT32_MIN;
	uint32_t x227 = 2056476U;
	static uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 2838087;

    t56 = (x225^((x226==x227)<=x228));

    if (t56 != 210) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	static uint64_t x231 = 443902803188588LLU;
	int16_t x232 = -1;

    t57 = (x229^((x230==x231)<=x232));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 41566U;
	int32_t x234 = INT32_MIN;
	volatile int8_t x236 = 2;
	uint32_t t58 = 6154543U;

    t58 = (x233^((x234==x235)<=x236));

    if (t58 != 41567U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 474U;
	int64_t x238 = -47693LL;
	int32_t x239 = -179;
	int8_t x240 = 1;
	uint32_t t59 = 3288U;

    t59 = (x237^((x238==x239)<=x240));

    if (t59 != 475U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MAX;
	static uint8_t x242 = 0U;
	int64_t x243 = 241627845LL;

    t60 = (x241^((x242==x243)<=x244));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = 3639;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = UINT8_MAX;

    t61 = (x245^((x246==x247)<=x248));

    if (t61 != 3638) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 245LLU;
	volatile int8_t x250 = INT8_MAX;
	volatile int64_t x251 = -71991706219LL;
	int32_t x252 = 154634;
	volatile uint64_t t62 = 375292624192521540LLU;

    t62 = (x249^((x250==x251)<=x252));

    if (t62 != 244LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 27U;
	int32_t x254 = INT32_MAX;
	uint32_t x255 = 987U;
	int64_t x256 = -1734693668804844259LL;
	volatile int32_t t63 = 118;

    t63 = (x253^((x254==x255)<=x256));

    if (t63 != 27) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 5U;
	int64_t x259 = -1LL;
	volatile int32_t t64 = -347410;

    t64 = (x257^((x258==x259)<=x260));

    if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	static int8_t x262 = -21;
	volatile int32_t x263 = -1;
	volatile uint8_t x264 = 3U;
	volatile int32_t t65 = -9360637;

    t65 = (x261^((x262==x263)<=x264));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 15U;
	int32_t x266 = INT32_MAX;
	int32_t t66 = 0;

    t66 = (x265^((x266==x267)<=x268));

    if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 28U;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 30779;

    t67 = (x269^((x270==x271)<=x272));

    if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x273 = -1;
	uint8_t x275 = 35U;
	int16_t x276 = INT16_MAX;

    t68 = (x273^((x274==x275)<=x276));

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 230988957LLU;
	volatile int8_t x280 = INT8_MIN;
	uint64_t t69 = 54663LLU;

    t69 = (x277^((x278==x279)<=x280));

    if (t69 != 230988957LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = INT64_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	int64_t t70 = INT64_MAX;

    t70 = (x281^((x282==x283)<=x284));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	int32_t t71 = -1;

    t71 = (x285^((x286==x287)<=x288));

    if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MAX;
	static uint8_t x292 = 30U;
	int32_t t72 = -40633466;

    t72 = (x289^((x290==x291)<=x292));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 1U;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -1;

    t73 = (x293^((x294==x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MAX;
	static volatile int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MAX;
	volatile int64_t t74 = -184LL;

    t74 = (x297^((x298==x299)<=x300));

    if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -145973861080949LL;
	int32_t x302 = INT32_MIN;
	int8_t x304 = INT8_MIN;

    t75 = (x301^((x302==x303)<=x304));

    if (t75 != -145973861080949LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 0U;
	volatile int8_t x307 = 9;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -1;

    t76 = (x305^((x306==x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x311 = 253U;
	int32_t x312 = -1;

    t77 = (x309^((x310==x311)<=x312));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -87338;
	int64_t x315 = -1LL;
	static int64_t x316 = -1LL;

    t78 = (x313^((x314==x315)<=x316));

    if (t78 != -87338) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 23U;
	int64_t x320 = INT64_MAX;

    t79 = (x317^((x318==x319)<=x320));

    if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = -1;
	int64_t x323 = -287656463055638032LL;
	uint64_t x324 = 248878931076LLU;
	int32_t t80 = 1;

    t80 = (x321^((x322==x323)<=x324));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	int8_t x326 = INT8_MAX;
	static uint32_t x328 = 190687105U;
	static int32_t t81 = -56;

    t81 = (x325^((x326==x327)<=x328));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x329 = INT64_MIN;
	uint16_t x330 = 5032U;
	volatile int16_t x331 = INT16_MAX;
	volatile int8_t x332 = -1;
	int64_t t82 = INT64_MIN;

    t82 = (x329^((x330==x331)<=x332));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 13802067806998280LLU;
	volatile int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MIN;

    t83 = (x333^((x334==x335)<=x336));

    if (t83 != 13802067806998280LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	int32_t t84 = -16061;

    t84 = (x337^((x338==x339)<=x340));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = 1;
	int32_t x344 = INT32_MIN;
	uint32_t t85 = 35545109U;

    t85 = (x341^((x342==x343)<=x344));

    if (t85 != 230030217U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 11496415928848522LLU;
	static uint8_t x347 = UINT8_MAX;

    t86 = (x345^((x346==x347)<=x348));

    if (t86 != 11496415928848522LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = 0;
	uint64_t t87 = 79958220170964580LLU;

    t87 = (x349^((x350==x351)<=x352));

    if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = 4175566LL;
	int32_t x355 = 12239788;
	int16_t x356 = INT16_MIN;
	volatile int64_t t88 = -38684986LL;

    t88 = (x353^((x354==x355)<=x356));

    if (t88 != 4175566LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MAX;
	uint32_t x358 = 8068U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	static int64_t t89 = INT64_MAX;

    t89 = (x357^((x358==x359)<=x360));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -2433;
	static volatile int32_t x362 = INT32_MAX;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = -1LL;
	volatile int32_t t90 = -12263300;

    t90 = (x361^((x362==x363)<=x364));

    if (t90 != -2433) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	volatile int32_t t91 = 466509;

    t91 = (x365^((x366==x367)<=x368));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 1U;
	uint16_t x370 = 197U;
	uint8_t x371 = 11U;
	volatile int64_t x372 = 1344935267653899LL;
	int32_t t92 = -9736;

    t92 = (x369^((x370==x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -1;
	int32_t x376 = INT32_MIN;
	int32_t t93 = 100500;

    t93 = (x373^((x374==x375)<=x376));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = UINT8_MAX;
	static uint16_t x378 = 31U;
	int8_t x379 = INT8_MIN;
	int32_t t94 = -1;

    t94 = (x377^((x378==x379)<=x380));

    if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -26;
	int32_t x382 = -1;
	int64_t x383 = 12497169840LL;
	int8_t x384 = -3;
	volatile int32_t t95 = 2582888;

    t95 = (x381^((x382==x383)<=x384));

    if (t95 != -26) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MIN;
	volatile int16_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int32_t t96 = -947141;

    t96 = (x385^((x386==x387)<=x388));

    if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	int64_t x391 = INT64_MIN;
	volatile int16_t x392 = -1438;
	int32_t t97 = 182423;

    t97 = (x389^((x390==x391)<=x392));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 2694U;
	int16_t x395 = -1;
	static uint8_t x396 = 1U;
	volatile int64_t t98 = -5LL;

    t98 = (x393^((x394==x395)<=x396));

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	int32_t x398 = 4157677;
	int16_t x400 = INT16_MAX;
	int64_t t99 = 37439952LL;

    t99 = (x397^((x398==x399)<=x400));

    if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int32_t x403 = INT32_MIN;
	static int64_t x404 = INT64_MIN;
	static uint64_t t100 = UINT64_MAX;

    t100 = (x401^((x402==x403)<=x404));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x407 = -5LL;
	uint32_t x408 = 1805880650U;
	int32_t t101 = -1887;

    t101 = (x405^((x406==x407)<=x408));

    if (t101 != 2147483646) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = INT64_MIN;
	volatile int8_t x410 = 0;
	int8_t x411 = -52;
	volatile int64_t t102 = -575167378013596LL;

    t102 = (x409^((x410==x411)<=x412));

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 145;
	int32_t x414 = INT32_MIN;

    t103 = (x413^((x414==x415)<=x416));

    if (t103 != 145) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 17U;
	uint8_t x418 = 5U;
	volatile int16_t x420 = -1;
	int32_t t104 = -412;

    t104 = (x417^((x418==x419)<=x420));

    if (t104 != 17) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 1547388LLU;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MIN;

    t105 = (x421^((x422==x423)<=x424));

    if (t105 != 1547388LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x426 = INT64_MAX;
	volatile int64_t x427 = INT64_MIN;
	int32_t t106 = -6323;

    t106 = (x425^((x426==x427)<=x428));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MIN;
	volatile uint8_t x431 = 1U;
	static volatile int64_t t107 = -1838468721545160LL;

    t107 = (x429^((x430==x431)<=x432));

    if (t107 != -67003924280276LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int8_t x434 = 40;
	static uint64_t x435 = 16738574082924LLU;
	static uint32_t x436 = 251U;

    t108 = (x433^((x434==x435)<=x436));

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x438 = -110812834669LL;
	int16_t x439 = -144;
	int16_t x440 = -11452;
	int32_t t109 = -148608;

    t109 = (x437^((x438==x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MAX;
	uint64_t x443 = UINT64_MAX;
	int64_t x444 = INT64_MIN;
	volatile uint32_t t110 = 513229780U;

    t110 = (x441^((x442==x443)<=x444));

    if (t110 != 23838836U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 4210;
	volatile int32_t x446 = -1;
	uint8_t x447 = 24U;
	uint16_t x448 = 11705U;
	volatile int32_t t111 = -22406;

    t111 = (x445^((x446==x447)<=x448));

    if (t111 != 4211) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MAX;
	volatile uint64_t x451 = 792771102732350665LLU;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t112 = -26821;

    t112 = (x449^((x450==x451)<=x452));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -2899251;
	uint32_t x454 = 14102532U;
	static uint8_t x456 = UINT8_MAX;
	int32_t t113 = -12243;

    t113 = (x453^((x454==x455)<=x456));

    if (t113 != -2899252) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int8_t x458 = -1;
	volatile int16_t x459 = INT16_MIN;
	volatile uint64_t x460 = UINT64_MAX;
	int32_t t114 = 22710749;

    t114 = (x457^((x458==x459)<=x460));

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 6U;
	int16_t x462 = INT16_MAX;
	volatile int64_t x463 = INT64_MIN;
	uint16_t x464 = UINT16_MAX;

    t115 = (x461^((x462==x463)<=x464));

    if (t115 != 7) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = 179LL;
	volatile int64_t x466 = -2LL;
	int64_t x467 = -1LL;
	uint64_t x468 = UINT64_MAX;

    t116 = (x465^((x466==x467)<=x468));

    if (t116 != 178LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -6;
	int32_t x470 = INT32_MIN;
	static int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MAX;
	volatile int32_t t117 = 1;

    t117 = (x469^((x470==x471)<=x472));

    if (t117 != -5) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3U;
	static uint32_t x474 = UINT32_MAX;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = -736954;

    t118 = (x473^((x474==x475)<=x476));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MAX;
	volatile int16_t x478 = 66;
	volatile int32_t x479 = INT32_MIN;
	static int16_t x480 = INT16_MAX;
	int32_t t119 = -1347;

    t119 = (x477^((x478==x479)<=x480));

    if (t119 != 126) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x481 = INT32_MAX;
	static uint32_t x482 = 108U;
	volatile int16_t x484 = INT16_MAX;
	int32_t t120 = -28;

    t120 = (x481^((x482==x483)<=x484));

    if (t120 != 2147483646) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -128919355186038LL;
	static int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MAX;
	uint16_t x488 = UINT16_MAX;

    t121 = (x485^((x486==x487)<=x488));

    if (t121 != -128919355186037LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	int64_t x491 = INT64_MIN;
	int16_t x492 = INT16_MIN;

    t122 = (x489^((x490==x491)<=x492));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x493 = 7771U;
	volatile int32_t x494 = -314;
	static volatile uint64_t x496 = 2681118LLU;

    t123 = (x493^((x494==x495)<=x496));

    if (t123 != 7770) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = INT32_MAX;
	uint16_t x498 = UINT16_MAX;
	uint32_t x499 = 500249070U;
	static uint16_t x500 = 5U;
	volatile int32_t t124 = 5359;

    t124 = (x497^((x498==x499)<=x500));

    if (t124 != 2147483646) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	uint16_t x504 = 6954U;
	int32_t t125 = -20094712;

    t125 = (x501^((x502==x503)<=x504));

    if (t125 != -492) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MAX;
	volatile uint8_t x506 = 3U;
	int64_t x507 = -1LL;
	uint32_t x508 = UINT32_MAX;

    t126 = (x505^((x506==x507)<=x508));

    if (t126 != 2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 59U;
	uint8_t x511 = UINT8_MAX;
	volatile int64_t x512 = INT64_MIN;

    t127 = (x509^((x510==x511)<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	int8_t x516 = INT8_MAX;
	static volatile int32_t t128 = 46319088;

    t128 = (x513^((x514==x515)<=x516));

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	int8_t x519 = -15;
	uint64_t x520 = 92703565831425LLU;
	int32_t t129 = 1743;

    t129 = (x517^((x518==x519)<=x520));

    if (t129 != -127) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = -1;
	int64_t x523 = -2618334LL;
	static int16_t x524 = INT16_MIN;
	volatile int32_t t130 = 204237670;

    t130 = (x521^((x522==x523)<=x524));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 919LLU;
	int16_t x526 = INT16_MIN;
	uint16_t x527 = UINT16_MAX;
	uint32_t x528 = UINT32_MAX;
	uint64_t t131 = 21191494011LLU;

    t131 = (x525^((x526==x527)<=x528));

    if (t131 != 918LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	static int16_t x530 = INT16_MAX;
	int64_t x531 = 15063LL;
	int32_t t132 = -95;

    t132 = (x529^((x530==x531)<=x532));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = 78;
	volatile uint64_t x535 = 19LLU;
	static uint8_t x536 = UINT8_MAX;

    t133 = (x533^((x534==x535)<=x536));

    if (t133 != 254) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 2LLU;
	static int64_t x538 = INT64_MAX;
	volatile int32_t x539 = INT32_MAX;
	volatile uint64_t t134 = 1008730750408LLU;

    t134 = (x537^((x538==x539)<=x540));

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 60675480734LLU;
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = INT64_MIN;
	static int16_t x544 = 391;
	volatile uint64_t t135 = 100477LLU;

    t135 = (x541^((x542==x543)<=x544));

    if (t135 != 60675480735LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MAX;
	volatile uint16_t x546 = 30U;
	int64_t x547 = 11593543LL;
	static uint64_t x548 = 15906LLU;
	volatile int32_t t136 = -514;

    t136 = (x545^((x546==x547)<=x548));

    if (t136 != 32766) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	static volatile int32_t x550 = INT32_MIN;
	uint64_t x551 = 1150834444152LLU;
	uint64_t x552 = 171541035775LLU;
	int32_t t137 = -6;

    t137 = (x549^((x550==x551)<=x552));

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	uint8_t x554 = UINT8_MAX;
	int8_t x556 = INT8_MIN;
	int32_t t138 = 20507;

    t138 = (x553^((x554==x555)<=x556));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = 2644;
	static int8_t x558 = INT8_MAX;
	static int64_t x559 = INT64_MIN;

    t139 = (x557^((x558==x559)<=x560));

    if (t139 != 2645) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	int64_t x562 = INT64_MAX;
	volatile int32_t x563 = INT32_MIN;
	volatile int32_t t140 = 2;

    t140 = (x561^((x562==x563)<=x564));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	uint32_t x566 = 2989U;
	volatile int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MAX;
	int32_t t141 = 6601878;

    t141 = (x565^((x566==x567)<=x568));

    if (t141 != 254) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	volatile uint64_t x570 = 22689420162561940LLU;
	int8_t x572 = -1;
	static volatile int32_t t142 = -505023284;

    t142 = (x569^((x570==x571)<=x572));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = 214532;
	int16_t x574 = -4;
	volatile int64_t x576 = -51470674261763399LL;
	static int32_t t143 = 30222;

    t143 = (x573^((x574==x575)<=x576));

    if (t143 != 214532) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MAX;
	static uint32_t x578 = 1U;
	uint8_t x579 = 0U;
	static int64_t x580 = INT64_MIN;
	static int32_t t144 = 64725610;

    t144 = (x577^((x578==x579)<=x580));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x583 = -23;
	uint64_t x584 = 39468812777438LLU;
	volatile int32_t t145 = -325;

    t145 = (x581^((x582==x583)<=x584));

    if (t145 != 2147483646) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 17929469U;
	uint64_t x587 = UINT64_MAX;
	uint32_t x588 = UINT32_MAX;
	uint32_t t146 = 12U;

    t146 = (x585^((x586==x587)<=x588));

    if (t146 != 17929468U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	static int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t147 = -418;

    t147 = (x589^((x590==x591)<=x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint16_t x594 = UINT16_MAX;
	int8_t x595 = INT8_MIN;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = -128910256;

    t148 = (x593^((x594==x595)<=x596));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x598 = -1;
	static int16_t x599 = INT16_MIN;
	static volatile int32_t x600 = 22126113;
	int64_t t149 = 985425786246LL;

    t149 = (x597^((x598==x599)<=x600));

    if (t149 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x602 = INT64_MAX;
	volatile uint16_t x603 = UINT16_MAX;
	volatile int32_t t150 = 5;

    t150 = (x601^((x602==x603)<=x604));

    if (t150 != 254) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 289869;
	static int32_t x606 = INT32_MIN;
	int16_t x607 = -1;
	int64_t x608 = INT64_MIN;

    t151 = (x605^((x606==x607)<=x608));

    if (t151 != 289869) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 61U;
	int64_t x610 = -1LL;
	uint64_t x611 = 1183897623497LLU;
	int32_t x612 = INT32_MIN;
	static volatile int32_t t152 = -1081089;

    t152 = (x609^((x610==x611)<=x612));

    if (t152 != 61) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -15;
	volatile int16_t x614 = INT16_MIN;
	static int32_t x615 = INT32_MAX;
	int32_t x616 = 265;
	static volatile int32_t t153 = -330;

    t153 = (x613^((x614==x615)<=x616));

    if (t153 != -16) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 20U;
	static uint16_t x618 = 769U;
	static uint32_t x619 = 255725679U;

    t154 = (x617^((x618==x619)<=x620));

    if (t154 != 20) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x621 = 1471009497132794LLU;
	int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	volatile uint8_t x624 = 3U;
	uint64_t t155 = 215676837LLU;

    t155 = (x621^((x622==x623)<=x624));

    if (t155 != 1471009497132795LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = INT32_MIN;
	volatile int32_t t156 = -47;

    t156 = (x625^((x626==x627)<=x628));

    if (t156 != 1059381550) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x631 = UINT8_MAX;
	int64_t x632 = 867048138321LL;
	volatile int32_t t157 = -59021;

    t157 = (x629^((x630==x631)<=x632));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x634 = 54885564;
	int64_t x636 = INT64_MIN;

    t158 = (x633^((x634==x635)<=x636));

    if (t158 != 470652617LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	volatile uint8_t x638 = UINT8_MAX;
	uint8_t x639 = UINT8_MAX;
	int64_t x640 = INT64_MIN;

    t159 = (x637^((x638==x639)<=x640));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x641 = UINT32_MAX;
	int16_t x642 = -1;
	static uint32_t x643 = UINT32_MAX;
	int64_t x644 = -27812LL;
	uint32_t t160 = UINT32_MAX;

    t160 = (x641^((x642==x643)<=x644));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = 0;
	volatile int32_t x647 = 6;
	int64_t x648 = INT64_MIN;
	volatile int64_t t161 = INT64_MIN;

    t161 = (x645^((x646==x647)<=x648));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	static int8_t x650 = INT8_MIN;
	int32_t x651 = -1;
	int16_t x652 = INT16_MIN;
	int32_t t162 = -74109600;

    t162 = (x649^((x650==x651)<=x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = -19761LL;
	static int16_t x654 = -1;
	int16_t x655 = INT16_MIN;

    t163 = (x653^((x654==x655)<=x656));

    if (t163 != -19761LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	int64_t x658 = INT64_MIN;
	int64_t x659 = -1LL;
	int8_t x660 = -1;
	volatile int32_t t164 = -92;

    t164 = (x657^((x658==x659)<=x660));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MAX;
	int16_t x662 = -14;
	uint64_t x663 = 1LLU;
	static int32_t t165 = -45;

    t165 = (x661^((x662==x663)<=x664));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 38;
	int64_t x666 = INT64_MIN;
	volatile int16_t x667 = -7;
	uint8_t x668 = 0U;
	volatile int32_t t166 = -281505;

    t166 = (x665^((x666==x667)<=x668));

    if (t166 != 39) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	static uint32_t x670 = 3U;
	static int32_t x671 = -1;
	static int64_t x672 = INT64_MIN;

    t167 = (x669^((x670==x671)<=x672));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int8_t x674 = INT8_MAX;
	volatile int16_t x675 = 5473;
	int64_t t168 = INT64_MAX;

    t168 = (x673^((x674==x675)<=x676));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1773;
	uint8_t x678 = UINT8_MAX;
	static uint8_t x679 = UINT8_MAX;
	static volatile int32_t t169 = 663876;

    t169 = (x677^((x678==x679)<=x680));

    if (t169 != -1774) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = -1;
	volatile int16_t x684 = INT16_MIN;
	uint64_t t170 = 705806538153249LLU;

    t170 = (x681^((x682==x683)<=x684));

    if (t170 != 1078678355044944208LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MIN;
	uint64_t x686 = 27LLU;
	int16_t x687 = INT16_MAX;
	int32_t x688 = -1;
	volatile int32_t t171 = INT32_MIN;

    t171 = (x685^((x686==x687)<=x688));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	volatile int8_t x690 = -14;
	static int8_t x691 = 1;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = -214841604;

    t172 = (x689^((x690==x691)<=x692));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 1191U;
	static int64_t x695 = -513022977755454LL;
	static int64_t x696 = INT64_MIN;

    t173 = (x693^((x694==x695)<=x696));

    if (t173 != 1191) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MIN;
	uint32_t x698 = UINT32_MAX;
	int32_t x699 = 1;
	static int16_t x700 = INT16_MAX;
	int32_t t174 = 6796;

    t174 = (x697^((x698==x699)<=x700));

    if (t174 != -127) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x703 = INT64_MAX;
	int32_t x704 = INT32_MAX;

    t175 = (x701^((x702==x703)<=x704));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 87U;
	static uint16_t x706 = 1U;
	static int16_t x707 = INT16_MIN;
	volatile int32_t x708 = INT32_MAX;

    t176 = (x705^((x706==x707)<=x708));

    if (t176 != 86) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x710 = 18444U;
	static int32_t x711 = -1;
	int8_t x712 = INT8_MIN;
	volatile int64_t t177 = 194LL;

    t177 = (x709^((x710==x711)<=x712));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 3;
	volatile int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MAX;
	int32_t t178 = -1;

    t178 = (x713^((x714==x715)<=x716));

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x717 = INT16_MIN;
	int8_t x718 = INT8_MIN;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 1521121;

    t179 = (x717^((x718==x719)<=x720));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MAX;
	uint8_t x722 = 25U;
	int8_t x723 = -1;
	static uint8_t x724 = 27U;
	volatile int32_t t180 = 406;

    t180 = (x721^((x722==x723)<=x724));

    if (t180 != 2147483646) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = INT32_MIN;
	uint16_t x726 = 386U;
	volatile int32_t x727 = INT32_MAX;
	volatile uint16_t x728 = 20U;
	int32_t t181 = 33222;

    t181 = (x725^((x726==x727)<=x728));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	int64_t x730 = 41312LL;
	uint64_t x731 = 3871639201LLU;
	volatile int16_t x732 = -2;
	volatile int32_t t182 = 48;

    t182 = (x729^((x730==x731)<=x732));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = -1;
	volatile int32_t t183 = -934935446;

    t183 = (x733^((x734==x735)<=x736));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x737 = 2;
	int16_t x738 = INT16_MIN;
	int32_t x739 = INT32_MAX;
	volatile int32_t t184 = -423457548;

    t184 = (x737^((x738==x739)<=x740));

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x743 = INT16_MIN;
	int32_t x744 = INT32_MAX;
	volatile int32_t t185 = 4;

    t185 = (x741^((x742==x743)<=x744));

    if (t185 != -127) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = 2875LL;
	uint64_t x746 = UINT64_MAX;
	int8_t x747 = INT8_MAX;
	uint64_t x748 = 5136LLU;

    t186 = (x745^((x746==x747)<=x748));

    if (t186 != 2874LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 13633831LLU;
	uint8_t x750 = UINT8_MAX;
	volatile int16_t x751 = -22;
	static uint64_t t187 = 49568068243909148LLU;

    t187 = (x749^((x750==x751)<=x752));

    if (t187 != 13633831LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MIN;
	int64_t x754 = -1LL;
	volatile uint32_t x755 = 276426531U;
	int64_t t188 = INT64_MIN;

    t188 = (x753^((x754==x755)<=x756));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 1718461395096239LLU;
	int64_t x758 = INT64_MAX;
	uint64_t x760 = 90168LLU;
	static uint64_t t189 = 340LLU;

    t189 = (x757^((x758==x759)<=x760));

    if (t189 != 1718461395096238LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = -41;
	int16_t x763 = -1;

    t190 = (x761^((x762==x763)<=x764));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	volatile uint16_t x766 = 482U;
	int32_t x767 = -87522114;
	int32_t t191 = 3679353;

    t191 = (x765^((x766==x767)<=x768));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	int64_t x770 = INT64_MIN;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = UINT8_MAX;
	static volatile int32_t t192 = -27966;

    t192 = (x769^((x770==x771)<=x772));

    if (t192 != 65534) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	int16_t x774 = INT16_MIN;
	uint32_t x776 = 166060147U;

    t193 = (x773^((x774==x775)<=x776));

    if (t193 != 254) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint32_t x778 = 7274U;
	int16_t x779 = 574;
	int32_t x780 = INT32_MAX;
	volatile int64_t t194 = -228534LL;

    t194 = (x777^((x778==x779)<=x780));

    if (t194 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x781 = -44740464643458LL;
	uint8_t x784 = 8U;
	int64_t t195 = -26759085428LL;

    t195 = (x781^((x782==x783)<=x784));

    if (t195 != -44740464643457LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = 25488430U;
	volatile int64_t x787 = 70872996LL;
	int16_t x788 = -80;

    t196 = (x785^((x786==x787)<=x788));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 136LLU;
	uint32_t x790 = 55290U;
	int16_t x792 = -1;

    t197 = (x789^((x790==x791)<=x792));

    if (t197 != 136LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 13U;
	static int8_t x795 = INT8_MIN;
	uint32_t x796 = 64946353U;
	volatile int32_t t198 = -63536;

    t198 = (x793^((x794==x795)<=x796));

    if (t198 != 12) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x798 = INT32_MIN;
	int32_t x799 = 4272343;
	static volatile int16_t x800 = -2583;
	volatile int32_t t199 = 0;

    t199 = (x797^((x798==x799)<=x800));

    if (t199 != 121478) { NG(); } else { ; }
	
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

