
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

static volatile int32_t x2 = -1;
uint32_t x9 = UINT32_MAX;
static int64_t t3 = INT64_MAX;
int16_t x18 = INT16_MIN;
int8_t x20 = -27;
int64_t x24 = 192069657286237LL;
volatile int64_t t5 = INT64_MAX;
int32_t x31 = INT32_MIN;
volatile int32_t t7 = -234230446;
int32_t x33 = -107315;
static int32_t t8 = -1;
volatile int32_t x42 = INT32_MAX;
int32_t t10 = -199;
int8_t x46 = INT8_MIN;
int32_t x61 = INT32_MAX;
int64_t x68 = 2544528LL;
int16_t x69 = -6856;
int64_t x70 = INT64_MIN;
volatile int32_t t17 = 25;
static int32_t x75 = INT32_MIN;
static volatile int32_t t18 = 1;
int16_t x85 = 7251;
static int32_t x90 = INT32_MIN;
uint32_t x91 = UINT32_MAX;
uint8_t x94 = 84U;
int16_t x95 = INT16_MAX;
uint64_t t24 = 1493736432949117155LLU;
static volatile int8_t x105 = 0;
int32_t t26 = 26794;
volatile int16_t x113 = -1;
volatile int32_t t29 = 526068495;
static int64_t x123 = INT64_MAX;
static int16_t x127 = 10405;
uint8_t x129 = 86U;
int64_t x130 = 3180704945848789220LL;
uint16_t x132 = 233U;
volatile int32_t t32 = 5332948;
volatile uint32_t t33 = 2034580U;
uint16_t x140 = UINT16_MAX;
int16_t x156 = INT16_MIN;
int8_t x157 = INT8_MIN;
int32_t t39 = -4024312;
int64_t x163 = -61862411046447569LL;
int32_t t40 = -1;
uint8_t x165 = 53U;
int8_t x168 = INT8_MIN;
int32_t t41 = 22804;
static volatile int32_t x171 = INT32_MIN;
static uint8_t x176 = 37U;
int64_t t43 = INT64_MAX;
int64_t x183 = INT64_MAX;
uint64_t x188 = 1592576468405620468LLU;
int32_t t49 = 296186;
volatile int64_t x203 = INT64_MAX;
int32_t x205 = 127409222;
int16_t x212 = INT16_MIN;
uint32_t x213 = 101U;
static int32_t x215 = 564803789;
int64_t x216 = -1LL;
volatile uint32_t t53 = 15U;
int64_t t56 = -7404879LL;
int64_t x230 = -715100937LL;
static int64_t x234 = INT64_MIN;
static volatile int32_t t58 = 109451;
volatile int64_t x246 = INT64_MAX;
int8_t x247 = INT8_MIN;
volatile uint64_t x251 = UINT64_MAX;
volatile int32_t t63 = -2792028;
int64_t x261 = INT64_MAX;
int8_t x268 = INT8_MAX;
int64_t x269 = 15789768289LL;
int64_t x271 = INT64_MAX;
static int8_t x275 = INT8_MAX;
int8_t x282 = -1;
volatile int32_t x290 = -135230;
int8_t x294 = -1;
int64_t x301 = -1LL;
uint8_t x302 = 13U;
static volatile int64_t t75 = 274831794LL;
int32_t x305 = INT32_MIN;
static int32_t x307 = INT32_MAX;
uint32_t x309 = UINT32_MAX;
int8_t x310 = INT8_MAX;
int16_t x311 = INT16_MIN;
static int8_t x313 = INT8_MAX;
uint32_t x316 = UINT32_MAX;
int16_t x326 = INT16_MAX;
static int8_t x335 = 1;
static volatile int32_t t84 = -3950;
int64_t x343 = 4556765528839387LL;
int32_t t87 = -20;
int64_t x355 = 5966579131707LL;
int8_t x358 = 0;
volatile int64_t x360 = INT64_MAX;
uint8_t x372 = 6U;
int32_t t92 = INT32_MAX;
volatile int64_t t93 = 25LL;
volatile int32_t t94 = 1;
uint8_t x381 = 0U;
int64_t x386 = -1LL;
static int32_t x392 = -291588;
int16_t x397 = INT16_MIN;
uint16_t x403 = 86U;
volatile int32_t t101 = 3;
int16_t x409 = -1200;
int64_t x410 = INT64_MAX;
int64_t x414 = INT64_MIN;
static uint64_t x418 = 32LLU;
int32_t x424 = -161867;
int32_t x426 = INT32_MIN;
static volatile int64_t t106 = -1004574677807677754LL;
uint8_t x437 = 4U;
static volatile int8_t x453 = INT8_MAX;
int64_t x455 = INT64_MIN;
int32_t x461 = INT32_MAX;
int8_t x464 = -1;
uint64_t x470 = 901614836LLU;
int8_t x473 = 1;
static uint64_t x477 = 1214400416523LLU;
static int32_t x492 = INT32_MIN;
int32_t t122 = 1;
int64_t x496 = INT64_MIN;
int8_t x498 = INT8_MIN;
int64_t x501 = INT64_MIN;
uint16_t x506 = 1325U;
int64_t x508 = INT64_MAX;
int16_t x510 = INT16_MIN;
int64_t x514 = INT64_MIN;
static volatile uint8_t x516 = 1U;
int8_t x524 = INT8_MIN;
static volatile int8_t x534 = INT8_MIN;
volatile uint64_t t134 = 140710828799LLU;
int8_t x544 = 10;
int64_t t136 = 578988279LL;
uint8_t x550 = 6U;
int32_t x552 = -73076;
volatile uint64_t x556 = 250252054208LLU;
int32_t t141 = 14113222;
static int32_t x571 = INT32_MAX;
volatile int32_t t142 = 328111;
static uint8_t x575 = 62U;
volatile int32_t t143 = -958327122;
int8_t x590 = -2;
volatile uint32_t t148 = 402403U;
int16_t x598 = -828;
static int64_t t150 = 113625456806117LL;
static int8_t x607 = INT8_MIN;
volatile int64_t x608 = INT64_MIN;
volatile int8_t x617 = INT8_MIN;
int32_t x618 = -1;
int32_t t154 = 87;
static int64_t x621 = INT64_MIN;
uint8_t x629 = 4U;
int16_t x630 = INT16_MAX;
volatile uint64_t x633 = 4575940463392301LLU;
volatile int32_t t159 = 39483052;
volatile int8_t x642 = INT8_MAX;
int32_t x645 = INT32_MAX;
volatile int32_t x647 = -46;
uint16_t x655 = 30463U;
volatile uint64_t x661 = UINT64_MAX;
int16_t x662 = INT16_MIN;
int32_t x671 = -1552408;
volatile int64_t x687 = INT64_MAX;
int8_t x694 = INT8_MAX;
int64_t x695 = -5738LL;
volatile int8_t x699 = 35;
static volatile int8_t x701 = -1;
uint32_t x702 = 1621815221U;
static volatile int32_t x703 = -1;
volatile int16_t x710 = INT16_MIN;
uint64_t x722 = UINT64_MAX;
static volatile uint8_t x742 = 5U;
static volatile uint16_t x745 = 17192U;
uint64_t x746 = 10849542296LLU;
uint16_t x748 = 442U;
int32_t t186 = 22100274;
volatile int16_t x749 = INT16_MAX;
int32_t t187 = 657361;
uint64_t x753 = 20646908986LLU;
static volatile int64_t t189 = INT64_MIN;
volatile int32_t t190 = 3817;
static volatile uint16_t x767 = 7U;
uint8_t x770 = UINT8_MAX;
int8_t x775 = INT8_MAX;
int8_t x779 = INT8_MAX;
int32_t x791 = INT32_MIN;
int8_t x793 = -5;
volatile int32_t x800 = -142022;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x3 = -60;
	static int64_t x4 = -61629725142LL;
	static volatile int32_t t0 = 1;

    t0 = (x1^((x2<=x3)>x4));

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 2U;
	volatile int8_t x6 = 2;
	static uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	static uint32_t t1 = 48U;

    t1 = (x5^((x6<=x7)>x8));

    if (t1 != 3U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x10 = -1;
	int32_t x11 = -111;
	volatile int64_t x12 = -1LL;
	uint32_t t2 = 24U;

    t2 = (x9^((x10<=x11)>x12));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	uint64_t x14 = 33333407239306930LLU;
	int64_t x15 = -1LL;
	volatile int32_t x16 = INT32_MAX;

    t3 = (x13^((x14<=x15)>x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t t4 = 28748596;

    t4 = (x17^((x18<=x19)>x20));

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	uint8_t x22 = 25U;
	uint64_t x23 = 253627566355295459LLU;

    t5 = (x21^((x22<=x23)>x24));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int16_t x26 = INT16_MAX;
	uint8_t x27 = 3U;
	static int32_t x28 = 25602871;
	volatile int32_t t6 = 3498546;

    t6 = (x25^((x26<=x27)>x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -156544330;
	uint32_t x30 = 713246U;
	volatile int64_t x32 = INT64_MAX;

    t7 = (x29^((x30<=x31)>x32));

    if (t7 != -156544330) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	static uint32_t x36 = 879U;

    t8 = (x33^((x34<=x35)>x36));

    if (t8 != -107315) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 499688U;
	int8_t x38 = INT8_MAX;
	static int32_t x39 = -1;
	volatile int32_t x40 = -29205003;
	static volatile uint32_t t9 = 63502U;

    t9 = (x37^((x38<=x39)>x40));

    if (t9 != 499689U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -60;
	uint64_t x43 = 3828656367LLU;
	volatile int16_t x44 = 47;

    t10 = (x41^((x42<=x43)>x44));

    if (t10 != -60) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int16_t x47 = -1;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 242660;

    t11 = (x45^((x46<=x47)>x48));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 5195U;
	int8_t x50 = -1;
	int16_t x51 = 4;
	int8_t x52 = -1;
	volatile int32_t t12 = -78359;

    t12 = (x49^((x50<=x51)>x52));

    if (t12 != 5194) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static uint32_t x54 = UINT32_MAX;
	static int64_t x55 = INT64_MAX;
	volatile int8_t x56 = -1;
	static int64_t t13 = -2896623978031829LL;

    t13 = (x53^((x54<=x55)>x56));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;
	static volatile uint16_t x59 = 1U;
	uint64_t x60 = 902977038133LLU;
	static int32_t t14 = -298716;

    t14 = (x57^((x58<=x59)>x60));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = 8269289LLU;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = -1;
	volatile int32_t t15 = -11653168;

    t15 = (x61^((x62<=x63)>x64));

    if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 0U;
	int64_t x67 = INT64_MIN;
	static volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66<=x67)>x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x71 = 3;
	uint64_t x72 = 2233650142603749041LLU;

    t17 = (x69^((x70<=x71)>x72));

    if (t17 != -6856) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = 1;
	int8_t x74 = INT8_MAX;
	volatile uint32_t x76 = UINT32_MAX;

    t18 = (x73^((x74<=x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = 1LL;
	uint8_t x78 = UINT8_MAX;
	static int64_t x79 = 990563LL;
	int16_t x80 = -140;
	int64_t t19 = 29287943332348LL;

    t19 = (x77^((x78<=x79)>x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 16238LLU;
	int16_t x82 = 472;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	static uint64_t t20 = 943961968618156368LLU;

    t20 = (x81^((x82<=x83)>x84));

    if (t20 != 16238LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	int8_t x87 = -22;
	static volatile uint8_t x88 = 13U;
	static volatile int32_t t21 = -221681753;

    t21 = (x85^((x86<=x87)>x88));

    if (t21 != 7251) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	volatile int16_t x92 = INT16_MIN;
	int32_t t22 = 23600901;

    t22 = (x89^((x90<=x91)>x92));

    if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MIN;
	uint16_t x96 = 222U;
	int32_t t23 = -22071;

    t23 = (x93^((x94<=x95)>x96));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = 3711LLU;
	int32_t x98 = 394069011;
	volatile int64_t x99 = INT64_MIN;
	static uint8_t x100 = UINT8_MAX;

    t24 = (x97^((x98<=x99)>x100));

    if (t24 != 3711LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 8U;
	uint64_t x102 = 522271LLU;
	static int32_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -429224728;

    t25 = (x101^((x102<=x103)>x104));

    if (t25 != 8) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = INT8_MIN;
	static uint32_t x107 = UINT32_MAX;
	static volatile uint16_t x108 = UINT16_MAX;

    t26 = (x105^((x106<=x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = 690;
	int16_t x111 = INT16_MAX;
	int8_t x112 = -62;
	int32_t t27 = -407551925;

    t27 = (x109^((x110<=x111)>x112));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = 9U;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = 1;
	static volatile int32_t t28 = 26371195;

    t28 = (x113^((x114<=x115)>x116));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 0;
	int16_t x118 = 404;
	int8_t x119 = -1;
	int16_t x120 = -13916;

    t29 = (x117^((x118<=x119)>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = 1062U;
	int8_t x122 = -1;
	uint64_t x124 = 5026756LLU;
	volatile uint32_t t30 = 31602840U;

    t30 = (x121^((x122<=x123)>x124));

    if (t30 != 1062U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 212494U;
	int8_t x126 = -1;
	int32_t x128 = 1;
	volatile uint32_t t31 = 259U;

    t31 = (x125^((x126<=x127)>x128));

    if (t31 != 212494U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x131 = 96777172U;

    t32 = (x129^((x130<=x131)>x132));

    if (t32 != 86) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 120U;
	int16_t x134 = INT16_MIN;
	static volatile int8_t x135 = INT8_MAX;
	static int32_t x136 = INT32_MIN;

    t33 = (x133^((x134<=x135)>x136));

    if (t33 != 121U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static uint32_t x138 = UINT32_MAX;
	volatile int32_t x139 = 229683382;
	volatile int32_t t34 = 657619;

    t34 = (x137^((x138<=x139)>x140));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	static int64_t x142 = -1LL;
	int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = 2361U;
	int32_t t35 = 27902;

    t35 = (x141^((x142<=x143)>x144));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 2025047272LLU;
	volatile int16_t x146 = INT16_MIN;
	volatile int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t36 = 2101443042LLU;

    t36 = (x145^((x146<=x147)>x148));

    if (t36 != 2025047273LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	uint16_t x150 = 17U;
	uint32_t x151 = 972652178U;
	static uint32_t x152 = UINT32_MAX;
	int64_t t37 = INT64_MAX;

    t37 = (x149^((x150<=x151)>x152));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = INT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	int32_t t38 = 11326163;

    t38 = (x153^((x154<=x155)>x156));

    if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x158 = 30214U;
	static uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = -95970246;

    t39 = (x157^((x158<=x159)>x160));

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 1U;
	int32_t x162 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;

    t40 = (x161^((x162<=x163)>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	uint32_t x167 = 0U;

    t41 = (x165^((x166<=x167)>x168));

    if (t41 != 52) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 1LL;
	int16_t x170 = -1;
	volatile int32_t x172 = -1;
	volatile int64_t t42 = -436352601981403LL;

    t42 = (x169^((x170<=x171)>x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	static uint16_t x175 = UINT16_MAX;

    t43 = (x173^((x174<=x175)>x176));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	uint32_t x178 = 3409631U;
	int8_t x179 = -1;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 96708;

    t44 = (x177^((x178<=x179)>x180));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -13517469647LL;
	int32_t x182 = -1;
	uint8_t x184 = 3U;
	int64_t t45 = -2420519014631888LL;

    t45 = (x181^((x182<=x183)>x184));

    if (t45 != -13517469647LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 877LLU;
	uint16_t x186 = 3838U;
	volatile int16_t x187 = INT16_MIN;
	static volatile uint64_t t46 = 288864LLU;

    t46 = (x185^((x186<=x187)>x188));

    if (t46 != 877LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 172995;
	int16_t x190 = 7335;
	volatile uint16_t x191 = 3842U;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -3758134;

    t47 = (x189^((x190<=x191)>x192));

    if (t47 != 172995) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MIN;
	static volatile int32_t x194 = INT32_MAX;
	uint8_t x195 = 0U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -1;

    t48 = (x193^((x194<=x195)>x196));

    if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static int8_t x199 = 0;
	int16_t x200 = INT16_MAX;

    t49 = (x197^((x198<=x199)>x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -8503;
	static uint8_t x202 = 0U;
	volatile int8_t x204 = -45;
	int32_t t50 = -1;

    t50 = (x201^((x202<=x203)>x204));

    if (t50 != -8504) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = 4377443LL;
	int16_t x207 = 2773;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 382674;

    t51 = (x205^((x206<=x207)>x208));

    if (t51 != 127409223) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	static uint32_t x210 = UINT32_MAX;
	int8_t x211 = 28;
	int32_t t52 = -751223;

    t52 = (x209^((x210<=x211)>x212));

    if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MAX;

    t53 = (x213^((x214<=x215)>x216));

    if (t53 != 100U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MAX;
	int16_t x218 = -23;
	static int8_t x219 = -1;
	int16_t x220 = -1;
	static int32_t t54 = 9;

    t54 = (x217^((x218<=x219)>x220));

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MAX;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;
	uint32_t t55 = UINT32_MAX;

    t55 = (x221^((x222<=x223)>x224));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MAX;
	volatile uint64_t x228 = 2260951464279616LLU;

    t56 = (x225^((x226<=x227)>x228));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	static uint16_t x231 = 6122U;
	int8_t x232 = INT8_MIN;
	static volatile int64_t t57 = 943LL;

    t57 = (x229^((x230<=x231)>x232));

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MAX;
	volatile uint8_t x235 = UINT8_MAX;
	uint16_t x236 = UINT16_MAX;

    t58 = (x233^((x234<=x235)>x236));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	uint32_t x238 = 2016042197U;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = 126U;
	int32_t t59 = -21088;

    t59 = (x237^((x238<=x239)>x240));

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	static int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = -1;
	static int32_t t60 = 387101808;

    t60 = (x241^((x242<=x243)>x244));

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 9LLU;
	int32_t x248 = -1;
	uint64_t t61 = 39210544362316083LLU;

    t61 = (x245^((x246<=x247)>x248));

    if (t61 != 8LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile int8_t x250 = -1;
	uint16_t x252 = 19U;
	int32_t t62 = 23212;

    t62 = (x249^((x250<=x251)>x252));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 0;
	int32_t x254 = INT32_MIN;
	volatile int16_t x255 = INT16_MAX;
	int64_t x256 = INT64_MAX;

    t63 = (x253^((x254<=x255)>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -1;
	volatile int8_t x258 = INT8_MAX;
	uint8_t x259 = 31U;
	int8_t x260 = INT8_MIN;
	int32_t t64 = 287;

    t64 = (x257^((x258<=x259)>x260));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x262 = -1;
	int32_t x263 = 8586982;
	int64_t x264 = -505334744578264LL;
	int64_t t65 = 29516247LL;

    t65 = (x261^((x262<=x263)>x264));

    if (t65 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	static int32_t t66 = -18799587;

    t66 = (x265^((x266<=x267)>x268));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = 8;
	int16_t x272 = INT16_MIN;
	static volatile int64_t t67 = -27294LL;

    t67 = (x269^((x270<=x271)>x272));

    if (t67 != 15789768288LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 13;
	int16_t x274 = -1;
	int32_t x276 = -1;
	int32_t t68 = -1;

    t68 = (x273^((x274<=x275)>x276));

    if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MAX;
	static volatile int32_t t69 = 1;

    t69 = (x277^((x278<=x279)>x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = -12813;
	static uint16_t x283 = UINT16_MAX;
	uint8_t x284 = 6U;
	volatile int32_t t70 = 1;

    t70 = (x281^((x282<=x283)>x284));

    if (t70 != -12813) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 9LLU;
	int32_t x286 = -103406093;
	static int64_t x287 = -1328488926909964LL;
	int8_t x288 = -1;
	uint64_t t71 = 669357LLU;

    t71 = (x285^((x286<=x287)>x288));

    if (t71 != 8LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 1490;
	int32_t x291 = INT32_MIN;
	static volatile int32_t x292 = INT32_MIN;
	int32_t t72 = 174248;

    t72 = (x289^((x290<=x291)>x292));

    if (t72 != 1491) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x293 = 3000851U;
	volatile int64_t x295 = INT64_MIN;
	int8_t x296 = -1;
	uint32_t t73 = 502U;

    t73 = (x293^((x294<=x295)>x296));

    if (t73 != 3000850U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x297 = INT16_MAX;
	uint16_t x298 = 1U;
	static uint8_t x299 = 20U;
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t74 = -1;

    t74 = (x297^((x298<=x299)>x300));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x303 = 2;
	int8_t x304 = INT8_MIN;

    t75 = (x301^((x302<=x303)>x304));

    if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MIN;
	uint16_t x308 = 131U;
	static int32_t t76 = INT32_MIN;

    t76 = (x305^((x306<=x307)>x308));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x312 = -1;
	volatile uint32_t t77 = 38424347U;

    t77 = (x309^((x310<=x311)>x312));

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = 57;
	volatile int16_t x315 = INT16_MAX;
	int32_t t78 = -6;

    t78 = (x313^((x314<=x315)>x316));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 158;
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	static int8_t x320 = -1;
	volatile int32_t t79 = -110426;

    t79 = (x317^((x318<=x319)>x320));

    if (t79 != 159) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -62;
	int64_t x322 = -376902358923LL;
	int8_t x323 = 26;
	volatile int32_t x324 = -6;
	volatile int32_t t80 = -13;

    t80 = (x321^((x322<=x323)>x324));

    if (t80 != -61) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 170677U;
	volatile int8_t x327 = INT8_MIN;
	static uint16_t x328 = 20U;
	volatile uint32_t t81 = 1705U;

    t81 = (x325^((x326<=x327)>x328));

    if (t81 != 170677U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int32_t x330 = 13157948;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = -7764;

    t82 = (x329^((x330<=x331)>x332));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 71U;
	int8_t x334 = 57;
	uint16_t x336 = 61U;
	uint32_t t83 = 6458434U;

    t83 = (x333^((x334<=x335)>x336));

    if (t83 != 71U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = 0;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MIN;

    t84 = (x337^((x338<=x339)>x340));

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 20028980728LL;
	static volatile uint64_t x342 = UINT64_MAX;
	uint8_t x344 = 1U;
	int64_t t85 = -3688106709743571LL;

    t85 = (x341^((x342<=x343)>x344));

    if (t85 != 20028980728LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -924034246LL;
	volatile int16_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	uint32_t x348 = 177501U;
	int64_t t86 = 24676905LL;

    t86 = (x345^((x346<=x347)>x348));

    if (t86 != -924034246LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x349 = -1;
	int64_t x350 = -6914LL;
	static int8_t x351 = -1;
	int32_t x352 = -266366;

    t87 = (x349^((x350<=x351)>x352));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = 6LLU;
	uint8_t x354 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 2015LLU;

    t88 = (x353^((x354<=x355)>x356));

    if (t88 != 7LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	static int8_t x359 = INT8_MIN;
	int64_t t89 = INT64_MAX;

    t89 = (x357^((x358<=x359)>x360));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x361 = 41U;
	int32_t x362 = INT32_MIN;
	int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;
	int32_t t90 = -2255;

    t90 = (x361^((x362<=x363)>x364));

    if (t90 != 40) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	volatile int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MAX;
	int64_t t91 = INT64_MIN;

    t91 = (x365^((x366<=x367)>x368));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MAX;

    t92 = (x369^((x370<=x371)>x372));

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1136218904LL;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = INT32_MAX;

    t93 = (x373^((x374<=x375)>x376));

    if (t93 != -1136218904LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -6;
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = 17;
	static int8_t x380 = INT8_MAX;

    t94 = (x377^((x378<=x379)>x380));

    if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x382 = 11U;
	static int64_t x383 = -1LL;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t95 = -535431385;

    t95 = (x381^((x382<=x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MIN;
	static int32_t x387 = -1;
	uint8_t x388 = 23U;
	int64_t t96 = INT64_MIN;

    t96 = (x385^((x386<=x387)>x388));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	int64_t x390 = 3522820894259LL;
	int8_t x391 = -1;
	uint64_t t97 = 3947LLU;

    t97 = (x389^((x390<=x391)>x392));

    if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = 0;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	static int16_t x396 = -8171;
	static int32_t t98 = -24170;

    t98 = (x393^((x394<=x395)>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	volatile int64_t x400 = INT64_MAX;
	int32_t t99 = -21750;

    t99 = (x397^((x398<=x399)>x400));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile int64_t t100 = INT64_MIN;

    t100 = (x401^((x402<=x403)>x404));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -1LL;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = -1;

    t101 = (x405^((x406<=x407)>x408));

    if (t101 != 254) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x411 = -1;
	volatile uint16_t x412 = 895U;
	volatile int32_t t102 = -2;

    t102 = (x409^((x410<=x411)>x412));

    if (t102 != -1200) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 12U;
	volatile int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = 787018;

    t103 = (x413^((x414<=x415)>x416));

    if (t103 != 13) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	int16_t x420 = -44;
	int32_t t104 = 1624273;

    t104 = (x417^((x418<=x419)>x420));

    if (t104 != 254) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 38U;
	static int64_t x422 = -2150417727595LL;
	static int32_t x423 = 3;
	volatile int32_t t105 = 203483334;

    t105 = (x421^((x422<=x423)>x424));

    if (t105 != 39) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 377423LL;
	int16_t x427 = INT16_MIN;
	int32_t x428 = -1;

    t106 = (x425^((x426<=x427)>x428));

    if (t106 != 377422LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MIN;
	uint32_t x431 = 133791902U;
	int16_t x432 = 2;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (x429^((x430<=x431)>x432));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MIN;
	static int64_t x434 = -4066137719LL;
	int8_t x435 = -1;
	int8_t x436 = INT8_MIN;
	static volatile int64_t t108 = -11122935LL;

    t108 = (x433^((x434<=x435)>x436));

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x438 = -127;
	int32_t x439 = INT32_MIN;
	uint64_t x440 = 97642LLU;
	static volatile int32_t t109 = 21314064;

    t109 = (x437^((x438<=x439)>x440));

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = UINT8_MAX;
	int8_t x442 = 28;
	volatile int16_t x443 = INT16_MAX;
	int64_t x444 = -45356182113LL;
	static int32_t t110 = -57599;

    t110 = (x441^((x442<=x443)>x444));

    if (t110 != 254) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = INT16_MAX;
	uint8_t x447 = 13U;
	volatile uint32_t x448 = UINT32_MAX;
	static volatile int64_t t111 = 92307459454LL;

    t111 = (x445^((x446<=x447)>x448));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 1056;
	uint64_t x450 = UINT64_MAX;
	volatile uint64_t x451 = 112006839381609573LLU;
	uint16_t x452 = 59U;
	int32_t t112 = 1;

    t112 = (x449^((x450<=x451)>x452));

    if (t112 != 1056) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = 108395107257LLU;
	int32_t x456 = 404;
	int32_t t113 = 12689;

    t113 = (x453^((x454<=x455)>x456));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	static uint32_t x458 = 272201056U;
	int16_t x459 = -59;
	static int16_t x460 = -294;
	volatile int32_t t114 = 206;

    t114 = (x457^((x458<=x459)>x460));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = INT32_MIN;
	uint16_t x463 = 57U;
	volatile int32_t t115 = -103341;

    t115 = (x461^((x462<=x463)>x464));

    if (t115 != 2147483646) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	volatile int16_t x466 = 52;
	static int64_t x467 = INT64_MIN;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t116 = INT32_MIN;

    t116 = (x465^((x466<=x467)>x468));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	static int32_t x471 = -23;
	volatile uint8_t x472 = UINT8_MAX;
	volatile int32_t t117 = 56304;

    t117 = (x469^((x470<=x471)>x472));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = -668LL;
	uint32_t x475 = UINT32_MAX;
	volatile int32_t x476 = INT32_MIN;
	static volatile int32_t t118 = 58403;

    t118 = (x473^((x474<=x475)>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	volatile uint64_t t119 = 5834729222LLU;

    t119 = (x477^((x478<=x479)>x480));

    if (t119 != 1214400416523LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int8_t x482 = 62;
	uint8_t x483 = 0U;
	static int16_t x484 = INT16_MAX;
	static int32_t t120 = 2;

    t120 = (x481^((x482<=x483)>x484));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	int8_t x488 = INT8_MIN;
	int32_t t121 = 0;

    t121 = (x485^((x486<=x487)>x488));

    if (t121 != 254) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 51;
	uint64_t x490 = 559141LLU;
	volatile uint8_t x491 = 92U;

    t122 = (x489^((x490<=x491)>x492));

    if (t122 != 50) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 14891U;
	static uint8_t x494 = 6U;
	static volatile int32_t x495 = -58513;
	static volatile int32_t t123 = 3429;

    t123 = (x493^((x494<=x495)>x496));

    if (t123 != 14890) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int8_t x499 = INT8_MIN;
	int32_t x500 = -1;
	static int64_t t124 = 654872657LL;

    t124 = (x497^((x498<=x499)>x500));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x502 = INT16_MIN;
	static volatile int8_t x503 = -1;
	uint64_t x504 = 15LLU;
	static int64_t t125 = INT64_MIN;

    t125 = (x501^((x502<=x503)>x504));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 378421U;
	uint8_t x507 = 52U;
	volatile uint32_t t126 = 1631U;

    t126 = (x505^((x506<=x507)>x508));

    if (t126 != 378421U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = 0U;
	static int32_t x511 = -6;
	uint32_t x512 = 98702U;
	static volatile int32_t t127 = -58;

    t127 = (x509^((x510<=x511)>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = INT32_MAX;
	uint64_t x515 = 67427463458261LLU;
	volatile int32_t t128 = INT32_MAX;

    t128 = (x513^((x514<=x515)>x516));

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	static volatile int8_t x518 = -4;
	volatile int16_t x519 = INT16_MIN;
	int32_t x520 = 3;
	volatile int32_t t129 = INT32_MAX;

    t129 = (x517^((x518<=x519)>x520));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = 19517962750201712LL;
	int8_t x522 = 5;
	uint16_t x523 = UINT16_MAX;
	static int64_t t130 = -6LL;

    t130 = (x521^((x522<=x523)>x524));

    if (t130 != 19517962750201713LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = UINT16_MAX;
	volatile int64_t x526 = INT64_MAX;
	uint8_t x527 = 0U;
	static uint64_t x528 = 12149511134LLU;
	volatile int32_t t131 = -7;

    t131 = (x525^((x526<=x527)>x528));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 16181U;
	int64_t x530 = INT64_MIN;
	int32_t x531 = 1814265;
	uint32_t x532 = UINT32_MAX;
	int32_t t132 = -6531;

    t132 = (x529^((x530<=x531)>x532));

    if (t132 != 16181) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -1;
	int8_t x535 = -1;
	int32_t x536 = -94;
	volatile int32_t t133 = 485;

    t133 = (x533^((x534<=x535)>x536));

    if (t133 != -2) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 135891506592745741LLU;
	static volatile uint32_t x538 = UINT32_MAX;
	int32_t x539 = INT32_MAX;
	volatile int8_t x540 = 0;

    t134 = (x537^((x538<=x539)>x540));

    if (t134 != 135891506592745741LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 3U;
	int8_t x542 = -1;
	volatile uint32_t x543 = 1605U;
	volatile int32_t t135 = -26;

    t135 = (x541^((x542<=x543)>x544));

    if (t135 != 3) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = -84477LL;
	uint32_t x546 = 1658818U;
	uint64_t x547 = 341880790796091705LLU;
	int32_t x548 = -11;

    t136 = (x545^((x546<=x547)>x548));

    if (t136 != -84478LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 24931U;
	static int64_t x551 = INT64_MAX;
	volatile int32_t t137 = -3525;

    t137 = (x549^((x550<=x551)>x552));

    if (t137 != 24930) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x554 = 891U;
	int8_t x555 = INT8_MAX;
	int32_t t138 = 464614;

    t138 = (x553^((x554<=x555)>x556));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	uint8_t x558 = 3U;
	static int16_t x559 = INT16_MAX;
	static int32_t x560 = INT32_MAX;
	volatile int32_t t139 = INT32_MIN;

    t139 = (x557^((x558<=x559)>x560));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = -86387352;
	uint32_t x564 = 1U;
	volatile int32_t t140 = 58245;

    t140 = (x561^((x562<=x563)>x564));

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -193161491;
	int64_t x566 = INT64_MIN;
	int8_t x567 = 0;
	uint8_t x568 = 0U;

    t141 = (x565^((x566<=x567)>x568));

    if (t141 != -193161492) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 43;
	int16_t x570 = 0;
	static volatile int16_t x572 = INT16_MAX;

    t142 = (x569^((x570<=x571)>x572));

    if (t142 != 43) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	int16_t x574 = INT16_MIN;
	static volatile uint32_t x576 = UINT32_MAX;

    t143 = (x573^((x574<=x575)>x576));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 1802;
	int16_t x578 = INT16_MIN;
	static uint32_t x579 = UINT32_MAX;
	uint64_t x580 = 2931LLU;
	int32_t t144 = -1;

    t144 = (x577^((x578<=x579)>x580));

    if (t144 != 1802) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 9812U;
	int8_t x582 = INT8_MIN;
	volatile int8_t x583 = INT8_MIN;
	volatile int32_t x584 = -22364;
	int32_t t145 = -3369;

    t145 = (x581^((x582<=x583)>x584));

    if (t145 != 9813) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = -1;
	uint8_t x587 = UINT8_MAX;
	uint16_t x588 = 2U;
	volatile int64_t t146 = INT64_MIN;

    t146 = (x585^((x586<=x587)>x588));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = -1;
	int16_t x591 = INT16_MIN;
	uint64_t x592 = 194968227LLU;
	int32_t t147 = 436748;

    t147 = (x589^((x590<=x591)>x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 13471U;
	int64_t x594 = INT64_MIN;
	static int8_t x595 = -1;
	static volatile uint16_t x596 = UINT16_MAX;

    t148 = (x593^((x594<=x595)>x596));

    if (t148 != 13471U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	static int16_t x599 = -7;
	int64_t x600 = INT64_MAX;
	static volatile int32_t t149 = 35;

    t149 = (x597^((x598<=x599)>x600));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	int32_t x602 = INT32_MIN;
	int16_t x603 = INT16_MIN;
	static volatile int32_t x604 = INT32_MIN;

    t150 = (x601^((x602<=x603)>x604));

    if (t150 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 3044701U;
	static uint32_t x606 = 92622U;
	uint32_t t151 = 6U;

    t151 = (x605^((x606<=x607)>x608));

    if (t151 != 3044700U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = INT32_MIN;
	int8_t x610 = -59;
	int32_t x611 = INT32_MAX;
	int32_t x612 = INT32_MIN;
	int32_t t152 = -7;

    t152 = (x609^((x610<=x611)>x612));

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 149U;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t153 = 479156124;

    t153 = (x613^((x614<=x615)>x616));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x619 = INT32_MAX;
	int8_t x620 = -4;

    t154 = (x617^((x618<=x619)>x620));

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = UINT64_MAX;
	volatile uint32_t x623 = UINT32_MAX;
	int64_t x624 = INT64_MIN;
	int64_t t155 = 2183019LL;

    t155 = (x621^((x622<=x623)>x624));

    if (t155 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 6458384LLU;
	static uint64_t x626 = 1476356718702LLU;
	int32_t x627 = INT32_MIN;
	static volatile int16_t x628 = INT16_MAX;
	uint64_t t156 = 421631909998869562LLU;

    t156 = (x625^((x626<=x627)>x628));

    if (t156 != 6458384LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x631 = -1;
	volatile uint16_t x632 = 54U;
	int32_t t157 = 362;

    t157 = (x629^((x630<=x631)>x632));

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = -2137098313LL;
	static int32_t x635 = -1;
	static int64_t x636 = -35303LL;
	volatile uint64_t t158 = 94254837LLU;

    t158 = (x633^((x634<=x635)>x636));

    if (t158 != 4575940463392300LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x638 = INT64_MIN;
	static volatile int32_t x639 = INT32_MIN;
	int32_t x640 = 10;

    t159 = (x637^((x638<=x639)>x640));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 1;
	uint8_t x643 = UINT8_MAX;
	static uint16_t x644 = 0U;
	volatile int32_t t160 = -1;

    t160 = (x641^((x642<=x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x646 = 1LLU;
	volatile uint8_t x648 = UINT8_MAX;
	volatile int32_t t161 = INT32_MAX;

    t161 = (x645^((x646<=x647)>x648));

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 46;
	uint16_t x650 = 0U;
	uint16_t x651 = 15U;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t162 = -16;

    t162 = (x649^((x650<=x651)>x652));

    if (t162 != 46) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	int32_t x654 = INT32_MIN;
	int64_t x656 = -119LL;
	static uint64_t t163 = 4226LLU;

    t163 = (x653^((x654<=x655)>x656));

    if (t163 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 1995U;
	int16_t x658 = INT16_MIN;
	uint16_t x659 = UINT16_MAX;
	int8_t x660 = INT8_MIN;
	uint32_t t164 = 349939U;

    t164 = (x657^((x658<=x659)>x660));

    if (t164 != 1994U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = INT64_MIN;
	static volatile uint8_t x664 = 65U;
	static uint64_t t165 = UINT64_MAX;

    t165 = (x661^((x662<=x663)>x664));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 93U;
	static uint32_t x666 = 21U;
	static uint64_t x667 = UINT64_MAX;
	uint16_t x668 = 573U;
	int32_t t166 = -14;

    t166 = (x665^((x666<=x667)>x668));

    if (t166 != 93) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	static int8_t x670 = -1;
	static volatile int64_t x672 = -15LL;
	volatile uint64_t t167 = 34015543022547256LLU;

    t167 = (x669^((x670<=x671)>x672));

    if (t167 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MAX;
	volatile int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MAX;
	static volatile int32_t t168 = -1563247;

    t168 = (x673^((x674<=x675)>x676));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 4077LL;
	int64_t x678 = INT64_MIN;
	int64_t x679 = INT64_MAX;
	uint32_t x680 = 96727584U;
	static volatile int64_t t169 = 6612505791LL;

    t169 = (x677^((x678<=x679)>x680));

    if (t169 != 4077LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 0;
	uint16_t x682 = UINT16_MAX;
	static int32_t x683 = INT32_MIN;
	uint64_t x684 = UINT64_MAX;
	static volatile int32_t t170 = 1735;

    t170 = (x681^((x682<=x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	static int32_t x688 = 471;
	int32_t t171 = 36310385;

    t171 = (x685^((x686<=x687)>x688));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	volatile uint16_t x690 = UINT16_MAX;
	volatile int16_t x691 = -1;
	static uint32_t x692 = UINT32_MAX;
	volatile int32_t t172 = INT32_MAX;

    t172 = (x689^((x690<=x691)>x692));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = -2636452498LL;
	static uint16_t x696 = 0U;
	volatile int64_t t173 = 124578LL;

    t173 = (x693^((x694<=x695)>x696));

    if (t173 != -2636452498LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MAX;
	volatile int8_t x698 = 0;
	int8_t x700 = 7;
	int32_t t174 = INT32_MAX;

    t174 = (x697^((x698<=x699)>x700));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = 7164;

    t175 = (x701^((x702<=x703)>x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	volatile int32_t x706 = -1;
	uint32_t x707 = 7U;
	int32_t x708 = -7;
	volatile int64_t t176 = -520LL;

    t176 = (x705^((x706<=x707)>x708));

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x711 = INT16_MAX;
	uint32_t x712 = 1U;
	volatile int32_t t177 = -411;

    t177 = (x709^((x710<=x711)>x712));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	int16_t x714 = INT16_MIN;
	volatile int16_t x715 = -9852;
	int16_t x716 = INT16_MIN;
	int32_t t178 = 5238268;

    t178 = (x713^((x714<=x715)>x716));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int16_t x718 = INT16_MAX;
	int8_t x719 = 39;
	static int32_t x720 = INT32_MIN;
	volatile int32_t t179 = 2717;

    t179 = (x717^((x718<=x719)>x720));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -7;
	int64_t x723 = -4122745573908308LL;
	uint32_t x724 = 655381U;
	volatile int32_t t180 = -84751;

    t180 = (x721^((x722<=x723)>x724));

    if (t180 != -7) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	static int32_t x726 = -1;
	int32_t x727 = -1;
	uint32_t x728 = UINT32_MAX;
	volatile int64_t t181 = INT64_MAX;

    t181 = (x725^((x726<=x727)>x728));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	static int32_t x730 = -1;
	uint64_t x731 = 2312739323677967658LLU;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = -1488635;

    t182 = (x729^((x730<=x731)>x732));

    if (t182 != 2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 3082116671749723719LLU;
	volatile int32_t x734 = INT32_MIN;
	uint16_t x735 = 6540U;
	uint64_t x736 = 5409714LLU;
	uint64_t t183 = 680101535045032LLU;

    t183 = (x733^((x734<=x735)>x736));

    if (t183 != 3082116671749723719LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 2U;
	uint8_t x738 = 2U;
	static volatile uint32_t x739 = 1700052681U;
	int16_t x740 = INT16_MIN;
	volatile int32_t t184 = -5366;

    t184 = (x737^((x738<=x739)>x740));

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	volatile int8_t x743 = INT8_MIN;
	int8_t x744 = 5;
	int64_t t185 = INT64_MIN;

    t185 = (x741^((x742<=x743)>x744));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x747 = UINT32_MAX;

    t186 = (x745^((x746<=x747)>x748));

    if (t186 != 17192) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MIN;
	uint32_t x752 = UINT32_MAX;

    t187 = (x749^((x750<=x751)>x752));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x754 = 522040974LLU;
	int32_t x755 = INT32_MIN;
	int64_t x756 = INT64_MAX;
	volatile uint64_t t188 = 29LLU;

    t188 = (x753^((x754<=x755)>x756));

    if (t188 != 20646908986LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	volatile int16_t x758 = 4;
	int64_t x759 = INT64_MAX;
	static uint8_t x760 = 12U;

    t189 = (x757^((x758<=x759)>x760));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	uint16_t x762 = UINT16_MAX;
	int32_t x763 = INT32_MIN;
	int64_t x764 = INT64_MIN;

    t190 = (x761^((x762<=x763)>x764));

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x765 = -1;
	static int8_t x766 = INT8_MAX;
	int32_t x768 = 15730564;
	static volatile int32_t t191 = -589;

    t191 = (x765^((x766<=x767)>x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 122309772331605LLU;
	volatile uint64_t x771 = UINT64_MAX;
	uint32_t x772 = 455666638U;
	uint64_t t192 = 5090LLU;

    t192 = (x769^((x770<=x771)>x772));

    if (t192 != 122309772331605LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = -13;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t193 = 29291802;

    t193 = (x773^((x774<=x775)>x776));

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 139U;
	uint8_t x778 = UINT8_MAX;
	uint64_t x780 = UINT64_MAX;
	volatile int32_t t194 = 6;

    t194 = (x777^((x778<=x779)>x780));

    if (t194 != 139) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x781 = -52;
	int8_t x782 = -1;
	static int8_t x783 = INT8_MIN;
	uint64_t x784 = 17892389362986LLU;
	int32_t t195 = 6;

    t195 = (x781^((x782<=x783)>x784));

    if (t195 != -52) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	uint32_t x786 = UINT32_MAX;
	int8_t x787 = INT8_MAX;
	uint16_t x788 = UINT16_MAX;
	int32_t t196 = -1869;

    t196 = (x785^((x786<=x787)>x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 1U;
	static int32_t x790 = INT32_MIN;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t197 = 10;

    t197 = (x789^((x790<=x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MIN;
	int32_t x795 = -1;
	int32_t x796 = -1;
	static int32_t t198 = 3;

    t198 = (x793^((x794<=x795)>x796));

    if (t198 != -6) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = -1;
	int64_t x798 = -1LL;
	int32_t x799 = -1;
	volatile int32_t t199 = -490996;

    t199 = (x797^((x798<=x799)>x800));

    if (t199 != -2) { NG(); } else { ; }
	
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

