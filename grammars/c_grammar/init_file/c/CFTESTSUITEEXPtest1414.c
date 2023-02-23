
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

static volatile int16_t x9 = INT16_MIN;
int32_t x12 = INT32_MIN;
uint32_t x13 = UINT32_MAX;
int16_t x14 = INT16_MAX;
uint64_t x16 = 3582636382347089906LLU;
volatile int32_t t4 = -147;
int16_t x25 = 107;
static uint64_t x26 = UINT64_MAX;
static volatile uint8_t x38 = 3U;
uint8_t x41 = 6U;
volatile int64_t t10 = -133179LL;
uint32_t x45 = 1075U;
volatile uint32_t x60 = UINT32_MAX;
volatile uint32_t t14 = UINT32_MAX;
volatile int8_t x64 = 15;
int16_t x65 = INT16_MAX;
int32_t x67 = -20;
static int16_t x69 = INT16_MAX;
volatile int64_t x73 = -6902170855824269LL;
volatile int16_t x74 = -1;
int8_t x76 = -1;
uint8_t x83 = UINT8_MAX;
int16_t x93 = INT16_MIN;
volatile int8_t x105 = INT8_MAX;
volatile int32_t x112 = INT32_MIN;
uint8_t x114 = 0U;
int64_t x117 = INT64_MIN;
uint64_t x127 = 1LLU;
static volatile int16_t x131 = INT16_MAX;
uint32_t x135 = 391U;
uint32_t x140 = UINT32_MAX;
volatile int64_t x149 = INT64_MAX;
int32_t x152 = INT32_MIN;
int32_t x165 = 58034205;
uint16_t x166 = UINT16_MAX;
int32_t t41 = 0;
static int32_t t42 = -79054335;
int64_t x173 = 0LL;
uint64_t x179 = 205258120916650763LLU;
static int64_t x195 = INT64_MIN;
static int16_t x203 = -5272;
static int64_t t52 = 45816LL;
uint8_t x215 = 1U;
uint16_t x217 = UINT16_MAX;
uint32_t x220 = 19U;
uint64_t x224 = 16117366643789LLU;
int16_t x229 = 0;
uint32_t x230 = 405153651U;
static int64_t x236 = -400LL;
volatile int32_t t59 = 260093;
uint32_t x248 = 2809405U;
int64_t x254 = -1LL;
uint32_t x257 = 20U;
volatile uint8_t x266 = 3U;
uint16_t x271 = 4137U;
int8_t x272 = INT8_MIN;
volatile int32_t t67 = 670;
uint64_t x273 = UINT64_MAX;
volatile int32_t x276 = INT32_MIN;
int8_t x278 = -2;
uint16_t x280 = 2559U;
volatile int64_t x282 = INT64_MAX;
static int32_t x283 = -182;
volatile int64_t x284 = INT64_MIN;
int8_t x289 = 0;
int64_t x298 = -420102863794996LL;
static int16_t x307 = INT16_MAX;
uint64_t x310 = 2263922739540LLU;
volatile uint32_t x311 = 25187U;
int32_t t78 = -275464376;
int64_t x319 = 68860404LL;
uint8_t x326 = UINT8_MAX;
int32_t x334 = INT32_MIN;
static volatile int32_t t83 = 344;
uint8_t x337 = 0U;
int32_t x338 = -1;
int64_t x341 = INT64_MIN;
uint16_t x346 = UINT16_MAX;
int8_t x349 = INT8_MIN;
int32_t t88 = -52;
int64_t x358 = INT64_MIN;
int32_t t90 = 131452463;
static uint8_t x370 = 1U;
static uint64_t t92 = UINT64_MAX;
uint64_t x377 = UINT64_MAX;
int32_t x385 = -2;
int8_t x391 = INT8_MAX;
uint16_t x392 = UINT16_MAX;
int8_t x394 = -1;
int16_t x395 = -1;
int32_t t98 = -53804410;
volatile uint32_t x410 = 5200U;
int32_t x412 = -179112578;
volatile int32_t t102 = 957760827;
static int16_t x417 = 4;
int32_t x418 = INT32_MAX;
int32_t t104 = 957680076;
uint64_t x422 = UINT64_MAX;
uint32_t x424 = 1645U;
int16_t x426 = -1;
int64_t x427 = -1LL;
volatile int32_t x429 = -1;
uint8_t x430 = UINT8_MAX;
int32_t x434 = -1;
volatile int64_t x442 = 663339LL;
static uint64_t t110 = UINT64_MAX;
int32_t x450 = INT32_MIN;
int8_t x458 = INT8_MIN;
volatile int8_t x461 = INT8_MIN;
volatile int32_t t115 = 20664748;
static int16_t x465 = INT16_MIN;
volatile int8_t x469 = INT8_MIN;
int64_t x471 = INT64_MIN;
static int32_t x472 = INT32_MIN;
volatile int64_t x474 = INT64_MAX;
int32_t t120 = INT32_MAX;
uint8_t x494 = 2U;
int32_t x498 = INT32_MAX;
static volatile int32_t t125 = -92802216;
static uint8_t x509 = 39U;
int32_t x510 = -6372;
int8_t x512 = -1;
int32_t t127 = -1532;
volatile uint64_t x519 = 73433111548366074LLU;
int16_t x527 = INT16_MIN;
int8_t x531 = 33;
volatile int16_t x532 = -1;
int64_t x534 = INT64_MIN;
volatile uint32_t x535 = UINT32_MAX;
static volatile int16_t x536 = 0;
static int64_t t133 = 1LL;
int64_t x538 = INT64_MIN;
volatile uint32_t x549 = UINT32_MAX;
volatile int32_t t138 = 7;
static volatile uint64_t t141 = UINT64_MAX;
int32_t x571 = 48;
uint64_t x573 = UINT64_MAX;
uint64_t x575 = 12208079LLU;
int32_t t145 = 315699;
int8_t x589 = INT8_MIN;
int8_t x599 = INT8_MIN;
static int16_t x602 = INT16_MIN;
volatile int8_t x608 = INT8_MAX;
int32_t t151 = 56075138;
int16_t x615 = INT16_MIN;
volatile int8_t x617 = INT8_MIN;
static volatile int64_t x618 = INT64_MIN;
volatile int64_t t154 = -9280449LL;
int16_t x631 = INT16_MIN;
int32_t t157 = 28691047;
int16_t x633 = -1;
int32_t x640 = INT32_MAX;
int32_t x643 = INT32_MIN;
int8_t x649 = INT8_MIN;
int32_t t162 = 10987636;
int8_t x653 = -1;
volatile int16_t x654 = INT16_MAX;
int8_t x655 = INT8_MAX;
int8_t x662 = 0;
volatile int8_t x665 = -1;
volatile uint32_t x673 = 290531350U;
volatile int32_t x674 = -1;
int16_t x677 = 811;
int8_t x683 = -1;
static int32_t t171 = -60083;
int16_t x690 = INT16_MIN;
static int32_t x703 = -1;
int16_t x704 = -1;
uint64_t t175 = UINT64_MAX;
uint8_t x705 = UINT8_MAX;
int64_t x707 = 11871437LL;
static uint16_t x714 = UINT16_MAX;
int16_t x723 = -1;
int16_t x724 = INT16_MAX;
int8_t x725 = -61;
volatile int16_t x729 = INT16_MIN;
static uint16_t x733 = 9109U;
volatile uint8_t x742 = 1U;
uint32_t x743 = 813766U;
volatile int64_t x744 = INT64_MIN;
int32_t x752 = INT32_MIN;
static int64_t x755 = INT64_MIN;
static volatile int16_t x756 = INT16_MIN;
uint8_t x757 = UINT8_MAX;
uint8_t x760 = 0U;
static int32_t x761 = 2933285;
uint8_t x762 = 2U;
volatile int16_t x763 = INT16_MIN;
static int8_t x764 = 53;
int16_t x770 = INT16_MAX;
static volatile int16_t x790 = INT16_MIN;
static uint8_t x795 = UINT8_MAX;
int16_t x799 = INT16_MAX;


void f0(void) {
    	volatile int64_t x1 = -2981636254LL;
	volatile uint8_t x2 = 1U;
	static int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = 1701LL;

    t0 = (x1^((x2==x3)*x4));

    if (t0 != -2981636254LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 2511352673027559396LL;
	int8_t x6 = -45;
	static volatile uint64_t x7 = UINT64_MAX;
	volatile int32_t x8 = -13;
	volatile int64_t t1 = -42LL;

    t1 = (x5^((x6==x7)*x8));

    if (t1 != 2511352673027559396LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = -505LL;
	volatile int32_t t2 = -175361;

    t2 = (x9^((x10==x11)*x12));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = INT64_MIN;
	uint64_t t3 = 38LLU;

    t3 = (x13^((x14==x15)*x16));

    if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 16U;
	static uint8_t x18 = 6U;
	static int64_t x19 = INT64_MAX;
	int32_t x20 = -1551;

    t4 = (x17^((x18==x19)*x20));

    if (t4 != 16) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int64_t x22 = -8557318369900LL;
	volatile int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 914274;

    t5 = (x21^((x22==x23)*x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = INT8_MAX;
	static int16_t x28 = INT16_MAX;
	int32_t t6 = -161084;

    t6 = (x25^((x26==x27)*x28));

    if (t6 != 107) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = -105388546701539LL;
	uint64_t x31 = 968LLU;
	static volatile uint32_t x32 = 25U;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x29^((x30==x31)*x32));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 40113072U;
	int32_t x35 = -415;
	static int32_t x36 = -2248;
	int32_t t8 = -287730622;

    t8 = (x33^((x34==x35)*x36));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = UINT8_MAX;
	static int64_t t9 = INT64_MAX;

    t9 = (x37^((x38==x39)*x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = INT16_MIN;
	uint16_t x43 = 10460U;
	int64_t x44 = INT64_MAX;

    t10 = (x41^((x42==x43)*x44));

    if (t10 != 6LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = 1260;
	volatile uint16_t x47 = 2455U;
	int32_t x48 = -1;
	volatile uint32_t t11 = 75U;

    t11 = (x45^((x46==x47)*x48));

    if (t11 != 1075U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 0U;
	static int16_t x50 = -1;
	static int8_t x51 = INT8_MAX;
	volatile int8_t x52 = -1;
	static volatile int32_t t12 = -972727;

    t12 = (x49^((x50==x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 41U;
	volatile uint16_t x54 = 157U;
	int32_t x55 = -1;
	int16_t x56 = -532;
	int32_t t13 = 68755;

    t13 = (x53^((x54==x55)*x56));

    if (t13 != 41) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = 444829U;

    t14 = (x57^((x58==x59)*x60));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 0U;
	volatile int32_t x63 = 99;
	int32_t t15 = -21753270;

    t15 = (x61^((x62==x63)*x64));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x66 = -1LL;
	int64_t x68 = 8058987310242LL;
	volatile int64_t t16 = 3883LL;

    t16 = (x65^((x66==x67)*x68));

    if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = -1LL;
	int32_t x71 = -54869;
	volatile uint16_t x72 = 0U;
	int32_t t17 = 2640;

    t17 = (x69^((x70==x71)*x72));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x75 = INT64_MAX;
	int64_t t18 = -57715050473685LL;

    t18 = (x73^((x74==x75)*x76));

    if (t18 != -6902170855824269LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 21;
	int8_t x78 = INT8_MIN;
	int8_t x79 = 59;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 10849757;

    t19 = (x77^((x78==x79)*x80));

    if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	uint16_t x84 = 2U;
	int32_t t20 = 4;

    t20 = (x81^((x82==x83)*x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	static uint64_t x86 = 205247004LLU;
	static volatile int8_t x87 = 5;
	int8_t x88 = INT8_MIN;
	static uint64_t t21 = UINT64_MAX;

    t21 = (x85^((x86==x87)*x88));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	volatile int64_t x90 = -1LL;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = 7139676655131LL;

    t22 = (x89^((x90==x91)*x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x94 = INT32_MIN;
	int32_t x95 = 1126;
	static volatile int8_t x96 = -1;
	volatile int32_t t23 = -171;

    t23 = (x93^((x94==x95)*x96));

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -1LL;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = 1316;
	int64_t t24 = 312394LL;

    t24 = (x97^((x98==x99)*x100));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MIN;
	uint32_t x102 = UINT32_MAX;
	volatile int16_t x103 = -1;
	static volatile int64_t x104 = -23LL;
	int64_t t25 = -125820522LL;

    t25 = (x101^((x102==x103)*x104));

    if (t25 != 2147483625LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;
	static volatile int32_t t26 = -8;

    t26 = (x105^((x106==x107)*x108));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	static int32_t x110 = -1;
	uint32_t x111 = 41353155U;
	int32_t t27 = -8995764;

    t27 = (x109^((x110==x111)*x112));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	static uint16_t x115 = UINT16_MAX;
	int64_t x116 = -3099005722331315099LL;
	int64_t t28 = 56456383051161040LL;

    t28 = (x113^((x114==x115)*x116));

    if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	int64_t t29 = 4LL;

    t29 = (x117^((x118==x119)*x120));

    if (t29 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MAX;
	static uint16_t x123 = 1U;
	int32_t x124 = -1;
	int32_t t30 = -545315;

    t30 = (x121^((x122==x123)*x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	static int32_t x126 = -7904604;
	int8_t x128 = 1;
	int32_t t31 = 51898;

    t31 = (x125^((x126==x127)*x128));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	int8_t x132 = -1;
	volatile int32_t t32 = -234087541;

    t32 = (x129^((x130==x131)*x132));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 0U;
	static int32_t x134 = INT32_MIN;
	static int64_t x136 = INT64_MAX;
	static int64_t t33 = 8012943463823764LL;

    t33 = (x133^((x134==x135)*x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 3U;
	int16_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	uint32_t t34 = 1852489593U;

    t34 = (x137^((x138==x139)*x140));

    if (t34 != 4294967292U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 20U;
	int32_t x142 = 22898;
	int32_t x143 = INT32_MAX;
	static int64_t x144 = INT64_MIN;
	int64_t t35 = 7163LL;

    t35 = (x141^((x142==x143)*x144));

    if (t35 != 20LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	uint64_t x147 = 17LLU;
	int64_t x148 = -1LL;
	volatile int64_t t36 = 3125LL;

    t36 = (x145^((x146==x147)*x148));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MIN;
	uint16_t x151 = 29062U;
	static volatile int64_t t37 = INT64_MAX;

    t37 = (x149^((x150==x151)*x152));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 50LLU;
	uint32_t x154 = UINT32_MAX;
	static volatile int8_t x155 = INT8_MIN;
	static int32_t x156 = INT32_MIN;
	volatile uint64_t t38 = 4138591315306932LLU;

    t38 = (x153^((x154==x155)*x156));

    if (t38 != 50LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = 23663LLU;
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MAX;
	static int32_t x160 = -6939550;
	volatile uint64_t t39 = 92391142341LLU;

    t39 = (x157^((x158==x159)*x160));

    if (t39 != 23663LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static uint32_t x162 = UINT32_MAX;
	static int16_t x163 = -15;
	volatile uint32_t x164 = 55U;
	uint32_t t40 = 20853250U;

    t40 = (x161^((x162==x163)*x164));

    if (t40 != 65535U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x167 = 1U;
	static int32_t x168 = INT32_MIN;

    t41 = (x165^((x166==x167)*x168));

    if (t41 != 58034205) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int32_t x170 = 10015875;
	int64_t x171 = INT64_MAX;
	static int16_t x172 = INT16_MAX;

    t42 = (x169^((x170==x171)*x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = 61;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -1LL;
	volatile int64_t t43 = -92480735507993658LL;

    t43 = (x173^((x174==x175)*x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = -6748;
	int32_t x178 = -1;
	int8_t x180 = -1;
	volatile int32_t t44 = 560092;

    t44 = (x177^((x178==x179)*x180));

    if (t44 != -6748) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int32_t x182 = 6942430;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 4889155027382LLU;
	volatile uint64_t t45 = 1173042LLU;

    t45 = (x181^((x182==x183)*x184));

    if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 369U;
	static uint64_t x186 = 1574385679789278LLU;
	static int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 168120065;

    t46 = (x185^((x186==x187)*x188));

    if (t46 != 369) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -413;
	uint16_t x190 = 167U;
	int8_t x191 = 0;
	static volatile int32_t x192 = INT32_MAX;
	int32_t t47 = -10436879;

    t47 = (x189^((x190==x191)*x192));

    if (t47 != -413) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t48 = INT32_MAX;

    t48 = (x193^((x194==x195)*x196));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = INT64_MIN;
	volatile uint64_t x199 = 41LLU;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = -11;

    t49 = (x197^((x198==x199)*x200));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = 0U;
	int32_t x202 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -2033970329045486LL;

    t50 = (x201^((x202==x203)*x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -104;
	static int8_t x206 = -1;
	volatile int8_t x207 = INT8_MIN;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 94193962;

    t51 = (x205^((x206==x207)*x208));

    if (t51 != -104) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -1LL;
	volatile uint64_t x210 = 3844741972LLU;
	int64_t x211 = -1LL;
	int64_t x212 = 6LL;

    t52 = (x209^((x210==x211)*x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = 10;
	static int8_t x214 = -1;
	int8_t x216 = 9;
	volatile int32_t t53 = 757;

    t53 = (x213^((x214==x215)*x216));

    if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = INT32_MIN;
	uint8_t x219 = 14U;
	uint32_t t54 = 7172U;

    t54 = (x217^((x218==x219)*x220));

    if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = UINT64_MAX;
	int32_t x223 = -491;
	volatile uint64_t t55 = 272LLU;

    t55 = (x221^((x222==x223)*x224));

    if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 18357U;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 150121U;
	int8_t x228 = INT8_MIN;
	static uint32_t t56 = 1696U;

    t56 = (x225^((x226==x227)*x228));

    if (t56 != 18357U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x231 = UINT32_MAX;
	volatile int8_t x232 = INT8_MIN;
	int32_t t57 = -197;

    t57 = (x229^((x230==x231)*x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = -1;
	volatile int64_t t58 = 6944229677100LL;

    t58 = (x233^((x234==x235)*x236));

    if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = UINT32_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	int16_t x240 = -1136;

    t59 = (x237^((x238==x239)*x240));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1;
	int8_t x242 = -1;
	int32_t x243 = INT32_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -3581;

    t60 = (x241^((x242==x243)*x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MIN;
	static volatile int8_t x246 = INT8_MIN;
	uint8_t x247 = 86U;
	static volatile int64_t t61 = INT64_MIN;

    t61 = (x245^((x246==x247)*x248));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	uint64_t x250 = 72240426595LLU;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = -1;
	int32_t t62 = -920671043;

    t62 = (x249^((x250==x251)*x252));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = -33553773109944LL;
	volatile int64_t t63 = 6958901221287LL;

    t63 = (x253^((x254==x255)*x256));

    if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = -1;
	int16_t x259 = 1339;
	volatile int16_t x260 = INT16_MAX;
	uint32_t t64 = 354630U;

    t64 = (x257^((x258==x259)*x260));

    if (t64 != 20U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	static int16_t x262 = INT16_MAX;
	int64_t x263 = -1LL;
	volatile uint16_t x264 = 7084U;
	volatile int32_t t65 = 265;

    t65 = (x261^((x262==x263)*x264));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int32_t x267 = -3063938;
	volatile int16_t x268 = -1;
	int32_t t66 = INT32_MIN;

    t66 = (x265^((x266==x267)*x268));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int32_t x270 = 947090;

    t67 = (x269^((x270==x271)*x272));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 1U;
	int32_t x275 = -14;
	uint64_t t68 = UINT64_MAX;

    t68 = (x273^((x274==x275)*x276));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	uint64_t x279 = 438386LLU;
	static volatile int32_t t69 = 40567;

    t69 = (x277^((x278==x279)*x280));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x281 = INT32_MIN;
	int64_t t70 = -16547011LL;

    t70 = (x281^((x282==x283)*x284));

    if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 88558;
	static volatile uint8_t x286 = 118U;
	static volatile int64_t x287 = -79375130841145201LL;
	static uint8_t x288 = UINT8_MAX;
	static int32_t t71 = 724892;

    t71 = (x285^((x286==x287)*x288));

    if (t71 != 88558) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x290 = 30;
	int16_t x291 = -1;
	uint16_t x292 = 237U;
	volatile int32_t t72 = 2;

    t72 = (x289^((x290==x291)*x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	int64_t x294 = -86749389505LL;
	static int32_t x295 = INT32_MIN;
	int64_t x296 = 1465552666113786833LL;
	int64_t t73 = INT64_MIN;

    t73 = (x293^((x294==x295)*x296));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = INT32_MAX;
	int32_t t74 = -179;

    t74 = (x297^((x298==x299)*x300));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	static int32_t x302 = 1044;
	int64_t x303 = INT64_MIN;
	volatile int16_t x304 = -106;
	int32_t t75 = INT32_MIN;

    t75 = (x301^((x302==x303)*x304));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = 2142971342U;
	static uint64_t x306 = 3388LLU;
	volatile int8_t x308 = INT8_MIN;
	uint32_t t76 = 123U;

    t76 = (x305^((x306==x307)*x308));

    if (t76 != 2142971342U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 123U;
	uint64_t x312 = 14969562085747LLU;
	volatile uint64_t t77 = 968845991622LLU;

    t77 = (x309^((x310==x311)*x312));

    if (t77 != 123LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = -16319;
	volatile uint8_t x314 = UINT8_MAX;
	uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MIN;

    t78 = (x313^((x314==x315)*x316));

    if (t78 != -16319) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 20840149621LLU;
	int8_t x318 = INT8_MIN;
	volatile int8_t x320 = INT8_MIN;
	volatile uint64_t t79 = 1371517LLU;

    t79 = (x317^((x318==x319)*x320));

    if (t79 != 20840149621LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = 195;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 33835970LLU;
	volatile uint64_t t80 = 6298054657667LLU;

    t80 = (x321^((x322==x323)*x324));

    if (t80 != 4294967295LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	uint8_t x327 = 29U;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 529232053;

    t81 = (x325^((x326==x327)*x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 1592;
	volatile uint16_t x330 = UINT16_MAX;
	static int32_t x331 = -7;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = 45247;

    t82 = (x329^((x330==x331)*x332));

    if (t82 != 1592) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = INT8_MIN;

    t83 = (x333^((x334==x335)*x336));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x339 = 55051114103LLU;
	static int16_t x340 = INT16_MAX;
	volatile int32_t t84 = -8768065;

    t84 = (x337^((x338==x339)*x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = INT16_MIN;
	static int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	int64_t t85 = INT64_MIN;

    t85 = (x341^((x342==x343)*x344));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = INT64_MIN;
	int32_t x347 = -1;
	int32_t x348 = INT32_MIN;
	int64_t t86 = INT64_MIN;

    t86 = (x345^((x346==x347)*x348));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x350 = 47134;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 8928LLU;
	uint64_t t87 = 24378221332LLU;

    t87 = (x349^((x350==x351)*x352));

    if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MAX;
	uint64_t x355 = 3709807LLU;
	uint16_t x356 = UINT16_MAX;

    t88 = (x353^((x354==x355)*x356));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -21;
	int32_t t89 = 22244;

    t89 = (x357^((x358==x359)*x360));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int64_t x362 = INT64_MAX;
	volatile int64_t x363 = INT64_MIN;
	int8_t x364 = -3;

    t90 = (x361^((x362==x363)*x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	static int32_t x366 = -1;
	int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = 3826402U;
	volatile int64_t t91 = INT64_MAX;

    t91 = (x365^((x366==x367)*x368));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	static volatile uint64_t x371 = UINT64_MAX;
	uint16_t x372 = UINT16_MAX;

    t92 = (x369^((x370==x371)*x372));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 836728658701194LLU;
	int8_t x374 = -1;
	uint16_t x375 = 0U;
	volatile int64_t x376 = INT64_MIN;
	volatile uint64_t t93 = 32874596805LLU;

    t93 = (x373^((x374==x375)*x376));

    if (t93 != 836728658701194LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MIN;
	int32_t x379 = -3;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (x377^((x378==x379)*x380));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 3;
	volatile uint32_t x382 = 25838097U;
	volatile int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	static int64_t t95 = 236LL;

    t95 = (x381^((x382==x383)*x384));

    if (t95 != 3LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = INT16_MIN;
	volatile uint64_t x387 = 1219386032LLU;
	static int16_t x388 = INT16_MAX;
	int32_t t96 = -2;

    t96 = (x385^((x386==x387)*x388));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 3U;
	int8_t x390 = INT8_MIN;
	int32_t t97 = 16347;

    t97 = (x389^((x390==x391)*x392));

    if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = -3;
	static int32_t x396 = INT32_MAX;

    t98 = (x393^((x394==x395)*x396));

    if (t98 != -2147483646) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = 0;
	volatile uint32_t x398 = 8091925U;
	static uint64_t x399 = 1363893LLU;
	int64_t x400 = -112925LL;
	volatile int64_t t99 = 2715618904635851039LL;

    t99 = (x397^((x398==x399)*x400));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = INT64_MIN;
	int32_t x404 = 198;
	volatile int32_t t100 = -30539172;

    t100 = (x401^((x402==x403)*x404));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	uint8_t x406 = 0U;
	int16_t x407 = INT16_MAX;
	static uint32_t x408 = UINT32_MAX;
	uint32_t t101 = 12378U;

    t101 = (x405^((x406==x407)*x408));

    if (t101 != 2147483647U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;

    t102 = (x409^((x410==x411)*x412));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = INT32_MAX;
	static int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = -1;
	static int32_t t103 = INT32_MAX;

    t103 = (x413^((x414==x415)*x416));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x419 = -1;
	uint16_t x420 = UINT16_MAX;

    t104 = (x417^((x418==x419)*x420));

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	volatile int16_t x423 = INT16_MIN;
	uint32_t t105 = 749565U;

    t105 = (x421^((x422==x423)*x424));

    if (t105 != 4294934528U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	int64_t t106 = 18LL;

    t106 = (x425^((x426==x427)*x428));

    if (t106 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x431 = INT8_MAX;
	int32_t x432 = 818564434;
	int32_t t107 = -1219;

    t107 = (x429^((x430==x431)*x432));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -2091138747LL;
	static int32_t x435 = -1012;
	int8_t x436 = -1;
	volatile int64_t t108 = -1435183125LL;

    t108 = (x433^((x434==x435)*x436));

    if (t108 != -2091138747LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MIN;
	int32_t x439 = -797022429;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t109 = INT32_MIN;

    t109 = (x437^((x438==x439)*x440));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	static int32_t x443 = INT32_MIN;
	uint64_t x444 = 88742917687LLU;

    t110 = (x441^((x442==x443)*x444));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = -1LL;
	int64_t x446 = 0LL;
	static volatile int16_t x447 = 1;
	static volatile int8_t x448 = INT8_MIN;
	static volatile int64_t t111 = -1732LL;

    t111 = (x445^((x446==x447)*x448));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	static int16_t x451 = -1;
	static int64_t x452 = INT64_MIN;
	int64_t t112 = -667895838150LL;

    t112 = (x449^((x450==x451)*x452));

    if (t112 != -2147483648LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = -1;
	int64_t x454 = -1LL;
	uint64_t x455 = 78025LLU;
	int8_t x456 = 27;
	int32_t t113 = -56318764;

    t113 = (x453^((x454==x455)*x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	static uint16_t x459 = 11150U;
	int32_t x460 = -5351;
	static int64_t t114 = INT64_MAX;

    t114 = (x457^((x458==x459)*x460));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x462 = 14367U;
	uint16_t x463 = 3U;
	uint8_t x464 = 7U;

    t115 = (x461^((x462==x463)*x464));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = INT16_MIN;
	uint8_t x467 = 2U;
	static volatile uint32_t x468 = UINT32_MAX;
	volatile uint32_t t116 = 10U;

    t116 = (x465^((x466==x467)*x468));

    if (t116 != 4294934528U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x470 = -382;
	int32_t t117 = -844840;

    t117 = (x469^((x470==x471)*x472));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x473 = INT16_MIN;
	volatile int16_t x475 = -13;
	int32_t x476 = 3;
	volatile int32_t t118 = -21496153;

    t118 = (x473^((x474==x475)*x476));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MAX;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = -1LL;
	int32_t x480 = -1;
	volatile int32_t t119 = -42635;

    t119 = (x477^((x478==x479)*x480));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	volatile uint16_t x482 = 86U;
	volatile int8_t x483 = -1;
	uint8_t x484 = UINT8_MAX;

    t120 = (x481^((x482==x483)*x484));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -10867767LL;
	int64_t x486 = -4682189668854615LL;
	static int32_t x487 = INT32_MAX;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t121 = -363LL;

    t121 = (x485^((x486==x487)*x488));

    if (t121 != -10867767LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	static int8_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = INT32_MAX;

    t122 = (x489^((x490==x491)*x492));

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = INT8_MAX;
	int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MAX;
	int64_t t123 = -243775840851608LL;

    t123 = (x493^((x494==x495)*x496));

    if (t123 != 127LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1832;
	uint32_t x499 = 0U;
	int8_t x500 = 0;
	static int32_t t124 = -32767231;

    t124 = (x497^((x498==x499)*x500));

    if (t124 != -1832) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 256;
	int32_t x502 = INT32_MIN;
	uint16_t x503 = UINT16_MAX;
	uint16_t x504 = 0U;

    t125 = (x501^((x502==x503)*x504));

    if (t125 != 256) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	uint32_t x506 = 6159U;
	uint16_t x507 = 24258U;
	static int16_t x508 = -56;
	int64_t t126 = 1LL;

    t126 = (x505^((x506==x507)*x508));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x511 = 179945695012227LL;

    t127 = (x509^((x510==x511)*x512));

    if (t127 != 39) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MAX;
	volatile int64_t x514 = INT64_MAX;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = 1;
	volatile int32_t t128 = 11457214;

    t128 = (x513^((x514==x515)*x516));

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	int64_t x518 = -1LL;
	int16_t x520 = -1;
	volatile int32_t t129 = 94351;

    t129 = (x517^((x518==x519)*x520));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = INT32_MIN;
	static int32_t x522 = INT32_MIN;
	uint32_t x523 = 2141U;
	static uint64_t x524 = 4821LLU;
	volatile uint64_t t130 = 25529327725559LLU;

    t130 = (x521^((x522==x523)*x524));

    if (t130 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = INT64_MIN;
	uint8_t x526 = 24U;
	int16_t x528 = -1;
	volatile int64_t t131 = INT64_MIN;

    t131 = (x525^((x526==x527)*x528));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = UINT32_MAX;
	static int32_t x530 = -1;
	static uint32_t t132 = UINT32_MAX;

    t132 = (x529^((x530==x531)*x532));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 0LL;

    t133 = (x533^((x534==x535)*x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -441146312015LL;
	static int16_t x539 = INT16_MIN;
	volatile int8_t x540 = -3;
	volatile int64_t t134 = 1289LL;

    t134 = (x537^((x538==x539)*x540));

    if (t134 != -441146312015LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = -5797;
	static uint16_t x542 = 10U;
	volatile uint32_t x543 = 56310U;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 4743884;

    t135 = (x541^((x542==x543)*x544));

    if (t135 != -5797) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = -1;
	int16_t x547 = 3357;
	static uint16_t x548 = 388U;
	volatile int32_t t136 = -5232;

    t136 = (x545^((x546==x547)*x548));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -1;
	int64_t x551 = INT64_MIN;
	volatile int16_t x552 = INT16_MIN;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = (x549^((x550==x551)*x552));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 1U;
	static int64_t x554 = INT64_MAX;
	int32_t x555 = 1;
	int16_t x556 = INT16_MIN;

    t138 = (x553^((x554==x555)*x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 6689;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	static uint64_t x560 = 284181415LLU;
	static volatile uint64_t t139 = 5134LLU;

    t139 = (x557^((x558==x559)*x560));

    if (t139 != 6689LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	uint64_t x562 = 1410LLU;
	int8_t x563 = INT8_MAX;
	uint16_t x564 = 1U;
	volatile int32_t t140 = 189714157;

    t140 = (x561^((x562==x563)*x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	uint64_t x566 = UINT64_MAX;
	static uint16_t x567 = 5964U;
	uint64_t x568 = 3607588LLU;

    t141 = (x565^((x566==x567)*x568));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x569 = UINT32_MAX;
	uint16_t x570 = 2620U;
	uint16_t x572 = 12370U;
	uint32_t t142 = UINT32_MAX;

    t142 = (x569^((x570==x571)*x572));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = 173847998975LLU;
	int16_t x576 = INT16_MIN;
	uint64_t t143 = UINT64_MAX;

    t143 = (x573^((x574==x575)*x576));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MAX;
	int64_t x578 = -1LL;
	int8_t x579 = INT8_MAX;
	uint16_t x580 = 1726U;
	volatile int32_t t144 = INT32_MAX;

    t144 = (x577^((x578==x579)*x580));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = 945353;
	int16_t x582 = INT16_MAX;
	int16_t x583 = 24;
	volatile int16_t x584 = 11;

    t145 = (x581^((x582==x583)*x584));

    if (t145 != 945353) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 35384903;
	int16_t x586 = -1;
	static volatile int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	int64_t t146 = 3682679765235497605LL;

    t146 = (x585^((x586==x587)*x588));

    if (t146 != 35384903LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = -399;
	volatile int16_t x591 = 12;
	static volatile uint16_t x592 = 4781U;
	static volatile int32_t t147 = -10695;

    t147 = (x589^((x590==x591)*x592));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	int8_t x594 = -1;
	static volatile int64_t x595 = INT64_MIN;
	volatile uint32_t x596 = 7U;
	uint32_t t148 = UINT32_MAX;

    t148 = (x593^((x594==x595)*x596));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int8_t x598 = INT8_MIN;
	int16_t x600 = -1;
	int32_t t149 = 196529;

    t149 = (x597^((x598==x599)*x600));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 13605U;
	uint32_t x603 = 5U;
	int64_t x604 = INT64_MIN;
	int64_t t150 = 372LL;

    t150 = (x601^((x602==x603)*x604));

    if (t150 != 13605LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	uint64_t x606 = UINT64_MAX;
	volatile int64_t x607 = -1LL;

    t151 = (x605^((x606==x607)*x608));

    if (t151 != 65408) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = INT16_MIN;
	int8_t x610 = -1;
	volatile int8_t x611 = INT8_MIN;
	int64_t x612 = -1LL;
	volatile int64_t t152 = -1095064616LL;

    t152 = (x609^((x610==x611)*x612));

    if (t152 != -32768LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MIN;
	static int8_t x616 = INT8_MAX;
	static volatile int32_t t153 = -2;

    t153 = (x613^((x614==x615)*x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x619 = INT32_MAX;
	volatile int64_t x620 = -2146LL;

    t154 = (x617^((x618==x619)*x620));

    if (t154 != -128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = -1;
	int64_t x623 = -1LL;
	static volatile int8_t x624 = INT8_MIN;
	static volatile int32_t t155 = -2;

    t155 = (x621^((x622==x623)*x624));

    if (t155 != 2147483520) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	uint64_t x626 = UINT64_MAX;
	int8_t x627 = -1;
	int64_t x628 = INT64_MIN;
	volatile int64_t t156 = 105848382732LL;

    t156 = (x625^((x626==x627)*x628));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = 1;
	int32_t x630 = 22647;
	uint8_t x632 = 120U;

    t157 = (x629^((x630==x631)*x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x634 = 8U;
	uint16_t x635 = UINT16_MAX;
	static int8_t x636 = INT8_MAX;
	int32_t t158 = -11723167;

    t158 = (x633^((x634==x635)*x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -412;
	int8_t x638 = -15;
	int32_t x639 = INT32_MIN;
	volatile int32_t t159 = -18;

    t159 = (x637^((x638==x639)*x640));

    if (t159 != -412) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	volatile int8_t x642 = INT8_MIN;
	int32_t x644 = 0;
	int32_t t160 = 2441135;

    t160 = (x641^((x642==x643)*x644));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = 19U;
	int64_t x648 = 508LL;
	static volatile int64_t t161 = 17266337930345015LL;

    t161 = (x645^((x646==x647)*x648));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = INT64_MAX;
	static volatile int16_t x651 = INT16_MAX;
	int16_t x652 = -23;

    t162 = (x649^((x650==x651)*x652));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x656 = 1337572LLU;
	volatile uint64_t t163 = UINT64_MAX;

    t163 = (x653^((x654==x655)*x656));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	volatile uint16_t x658 = 2521U;
	static int16_t x659 = INT16_MIN;
	uint64_t x660 = 222296729994382229LLU;
	uint64_t t164 = UINT64_MAX;

    t164 = (x657^((x658==x659)*x660));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	volatile uint64_t x663 = 17269210LLU;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x661^((x662==x663)*x664));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = 5990LLU;
	int16_t x667 = INT16_MIN;
	uint64_t x668 = 3354509169885792149LLU;
	volatile uint64_t t166 = UINT64_MAX;

    t166 = (x665^((x666==x667)*x668));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	static volatile int32_t x670 = INT32_MIN;
	uint8_t x671 = UINT8_MAX;
	int8_t x672 = 31;
	volatile int64_t t167 = INT64_MAX;

    t167 = (x669^((x670==x671)*x672));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x675 = -2;
	uint16_t x676 = UINT16_MAX;
	volatile uint32_t t168 = 116465886U;

    t168 = (x673^((x674==x675)*x676));

    if (t168 != 290531350U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MIN;
	uint64_t x679 = UINT64_MAX;
	uint64_t x680 = UINT64_MAX;
	uint64_t t169 = 1480079323730604LLU;

    t169 = (x677^((x678==x679)*x680));

    if (t169 != 811LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	volatile int16_t x682 = -12;
	int16_t x684 = INT16_MIN;
	volatile int64_t t170 = -3059LL;

    t170 = (x681^((x682==x683)*x684));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -26;
	int16_t x686 = -437;
	uint16_t x687 = 24U;
	int8_t x688 = INT8_MAX;

    t171 = (x685^((x686==x687)*x688));

    if (t171 != -26) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	volatile int32_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t172 = -3762607;

    t172 = (x689^((x690==x691)*x692));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	uint16_t x694 = 481U;
	static int8_t x695 = -1;
	uint16_t x696 = 57U;
	int64_t t173 = INT64_MAX;

    t173 = (x693^((x694==x695)*x696));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	uint8_t x698 = UINT8_MAX;
	uint16_t x699 = UINT16_MAX;
	int32_t x700 = -484;
	int32_t t174 = 1051;

    t174 = (x697^((x698==x699)*x700));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = UINT64_MAX;
	static int8_t x702 = INT8_MIN;

    t175 = (x701^((x702==x703)*x704));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = 5U;
	volatile int32_t x708 = INT32_MIN;
	static volatile int32_t t176 = -2;

    t176 = (x705^((x706==x707)*x708));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 6U;
	int32_t x710 = -1;
	static uint64_t x711 = UINT64_MAX;
	uint64_t x712 = 14427666987313LLU;
	volatile uint64_t t177 = 29753632755294428LLU;

    t177 = (x709^((x710==x711)*x712));

    if (t177 != 14427666987319LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	uint8_t x715 = UINT8_MAX;
	int16_t x716 = -22;
	int32_t t178 = -31;

    t178 = (x713^((x714==x715)*x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -497;
	int32_t x718 = INT32_MIN;
	int16_t x719 = -1;
	uint8_t x720 = 3U;
	volatile int32_t t179 = 9;

    t179 = (x717^((x718==x719)*x720));

    if (t179 != -497) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 10U;
	volatile int64_t x722 = 203885467338567096LL;
	static int32_t t180 = 3133;

    t180 = (x721^((x722==x723)*x724));

    if (t180 != 10) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = -1;
	static int32_t x727 = INT32_MIN;
	static int8_t x728 = 7;
	volatile int32_t t181 = 190555;

    t181 = (x725^((x726==x727)*x728));

    if (t181 != -61) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = 0U;
	int16_t x731 = INT16_MIN;
	static volatile int8_t x732 = 26;
	int32_t t182 = -1;

    t182 = (x729^((x730==x731)*x732));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = -589;
	volatile int8_t x735 = 2;
	volatile int16_t x736 = INT16_MIN;
	volatile int32_t t183 = -781960588;

    t183 = (x733^((x734==x735)*x736));

    if (t183 != 9109) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	int16_t x738 = INT16_MIN;
	static int16_t x739 = INT16_MAX;
	int32_t x740 = -1;
	int32_t t184 = INT32_MIN;

    t184 = (x737^((x738==x739)*x740));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	volatile int64_t t185 = -291624228800797LL;

    t185 = (x741^((x742==x743)*x744));

    if (t185 != 65535LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 308698574934074680LLU;
	static uint8_t x746 = 95U;
	int16_t x747 = INT16_MIN;
	int64_t x748 = INT64_MIN;
	uint64_t t186 = 1777022699707LLU;

    t186 = (x745^((x746==x747)*x748));

    if (t186 != 308698574934074680LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MIN;
	int64_t x750 = 1631334495LL;
	int8_t x751 = -1;
	volatile int32_t t187 = 15;

    t187 = (x749^((x750==x751)*x752));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	static volatile int8_t x754 = INT8_MIN;
	static int32_t t188 = 271;

    t188 = (x753^((x754==x755)*x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = 4200815982709553LL;
	uint32_t x759 = 231271872U;
	volatile int32_t t189 = -228433;

    t189 = (x757^((x758==x759)*x760));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t t190 = -563156;

    t190 = (x761^((x762==x763)*x764));

    if (t190 != 2933285) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	volatile int16_t x766 = INT16_MAX;
	static volatile int64_t x767 = INT64_MIN;
	uint64_t x768 = 33252054360844653LLU;
	static uint64_t t191 = 27LLU;

    t191 = (x765^((x766==x767)*x768));

    if (t191 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 209U;
	int32_t x771 = INT32_MIN;
	uint64_t x772 = 9886LLU;
	volatile uint64_t t192 = 175813973419LLU;

    t192 = (x769^((x770==x771)*x772));

    if (t192 != 209LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 5057117U;
	uint8_t x774 = 87U;
	int64_t x775 = INT64_MIN;
	int32_t x776 = -1;
	static volatile uint32_t t193 = 743806U;

    t193 = (x773^((x774==x775)*x776));

    if (t193 != 5057117U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 516082702LL;
	static int64_t x778 = INT64_MIN;
	int32_t x779 = INT32_MIN;
	uint64_t x780 = 39702147825142LLU;
	volatile uint64_t t194 = 13LLU;

    t194 = (x777^((x778==x779)*x780));

    if (t194 != 516082702LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	static int16_t x782 = INT16_MIN;
	int16_t x783 = -106;
	static int32_t x784 = -1;
	volatile int32_t t195 = INT32_MAX;

    t195 = (x781^((x782==x783)*x784));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 5LLU;
	static int32_t x786 = 92482;
	uint16_t x787 = 171U;
	uint8_t x788 = UINT8_MAX;
	static volatile uint64_t t196 = 1653LLU;

    t196 = (x785^((x786==x787)*x788));

    if (t196 != 5LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	int32_t x791 = INT32_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t197 = -59537596;

    t197 = (x789^((x790==x791)*x792));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 94398521LL;
	uint32_t x794 = UINT32_MAX;
	static int32_t x796 = -1;
	volatile int64_t t198 = -496322343240LL;

    t198 = (x793^((x794==x795)*x796));

    if (t198 != 94398521LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 26697U;
	static volatile uint16_t x798 = 24U;
	int64_t x800 = INT64_MAX;
	int64_t t199 = 639504180951372LL;

    t199 = (x797^((x798==x799)*x800));

    if (t199 != 26697LL) { NG(); } else { ; }
	
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

