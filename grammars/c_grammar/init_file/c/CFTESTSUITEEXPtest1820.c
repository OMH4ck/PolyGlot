
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

static uint8_t x1 = 22U;
int32_t x6 = INT32_MAX;
static int16_t x10 = INT16_MAX;
int32_t t5 = INT32_MAX;
volatile int32_t x27 = INT32_MAX;
int64_t x30 = -1LL;
uint64_t x33 = 61337644076792867LLU;
volatile uint8_t x35 = 49U;
int8_t x40 = -20;
volatile uint16_t x42 = 10U;
int32_t x49 = INT32_MAX;
int64_t x50 = -1LL;
uint16_t x56 = 43U;
int8_t x59 = -1;
static int8_t x64 = INT8_MIN;
volatile int8_t x65 = INT8_MIN;
int32_t x70 = -12404;
volatile int64_t t17 = INT64_MAX;
int32_t t18 = 52462;
int32_t x86 = -5902019;
int8_t x87 = INT8_MIN;
int32_t x90 = INT32_MIN;
uint32_t x91 = 499146354U;
uint32_t x93 = 823U;
volatile int16_t x98 = INT16_MIN;
volatile int32_t t25 = 0;
uint64_t x109 = UINT64_MAX;
int16_t x110 = INT16_MIN;
volatile int32_t x114 = INT32_MAX;
int8_t x116 = 25;
uint16_t x117 = 3837U;
volatile int16_t x118 = 4904;
static volatile int8_t x123 = -1;
int8_t x124 = -1;
volatile int32_t x127 = -1;
int64_t x131 = INT64_MIN;
static int64_t x134 = INT64_MIN;
int32_t t32 = -7;
int32_t x143 = -240391;
volatile int64_t t34 = 62997325479LL;
volatile int64_t t36 = -63LL;
static int64_t x154 = INT64_MIN;
volatile uint64_t t37 = UINT64_MAX;
volatile int8_t x160 = INT8_MAX;
volatile int64_t t40 = 373LL;
volatile int32_t x181 = INT32_MAX;
int32_t t44 = INT32_MAX;
int64_t x185 = 30267312172090083LL;
int64_t t45 = 3522762LL;
uint8_t x189 = UINT8_MAX;
static int32_t t46 = -518574;
static volatile int16_t x196 = INT16_MAX;
int64_t x202 = INT64_MAX;
volatile uint32_t x203 = UINT32_MAX;
int16_t x209 = INT16_MAX;
volatile int64_t t52 = INT64_MIN;
int64_t x219 = INT64_MIN;
static int8_t x220 = INT8_MAX;
static volatile int32_t t53 = -110594;
int32_t x223 = INT32_MAX;
static int16_t x224 = -9;
int32_t t54 = -3991422;
volatile int8_t x231 = -11;
int8_t x232 = 23;
uint16_t x233 = UINT16_MAX;
static uint64_t t58 = 4548150333LLU;
volatile int32_t x242 = -1;
int32_t t60 = INT32_MIN;
int32_t x251 = -27749466;
uint64_t t61 = 1865256168222964LLU;
volatile uint64_t t62 = 64848574LLU;
int64_t x258 = -1LL;
static volatile int8_t x260 = INT8_MIN;
int32_t t63 = INT32_MAX;
static int32_t x263 = -1;
volatile int64_t t65 = 2126396LL;
volatile int64_t x269 = -1045583LL;
volatile uint8_t x271 = 2U;
int32_t x276 = 985;
int8_t x287 = 0;
static volatile int32_t t70 = 8324969;
volatile uint8_t x289 = UINT8_MAX;
uint8_t x291 = UINT8_MAX;
int8_t x296 = -2;
int32_t t72 = 1;
volatile uint32_t x302 = UINT32_MAX;
volatile int32_t x304 = INT32_MIN;
static volatile int32_t t73 = 132785559;
static volatile uint16_t x307 = UINT16_MAX;
int32_t x308 = -306756;
volatile int64_t x309 = INT64_MIN;
int16_t x310 = -1;
int32_t x311 = INT32_MIN;
int32_t x317 = -1;
uint8_t x323 = UINT8_MAX;
volatile uint16_t x329 = 793U;
int16_t x334 = -1;
uint64_t t82 = UINT64_MAX;
static uint16_t x343 = 12U;
int32_t x368 = INT32_MIN;
static int32_t x370 = INT32_MIN;
static uint16_t x373 = 154U;
int8_t x374 = INT8_MIN;
volatile uint32_t x382 = UINT32_MAX;
int16_t x387 = -136;
static int64_t x392 = INT64_MIN;
uint8_t x395 = 28U;
static int64_t x396 = INT64_MAX;
int16_t x398 = INT16_MAX;
int32_t x402 = -1;
volatile int64_t x403 = -115697589394897983LL;
int64_t t97 = 619604501LL;
volatile uint16_t x410 = 43U;
uint8_t x411 = 0U;
volatile int8_t x412 = INT8_MIN;
uint32_t x420 = 633850U;
int8_t x421 = INT8_MIN;
int64_t x431 = -114955325153833598LL;
int32_t x434 = INT32_MIN;
int32_t x436 = INT32_MIN;
static int8_t x438 = INT8_MIN;
int16_t x439 = -7;
static int64_t x445 = INT64_MIN;
int32_t x455 = INT32_MIN;
volatile int8_t x464 = 2;
int64_t x468 = INT64_MAX;
uint16_t x469 = 10U;
int32_t x473 = 986;
static int32_t x476 = -27453;
uint32_t x478 = 201735U;
int16_t x479 = -1;
static uint8_t x483 = 1U;
volatile int32_t x498 = -1;
static volatile int16_t x503 = 15117;
int64_t t121 = INT64_MIN;
int8_t x505 = -1;
int32_t t122 = 0;
static uint16_t x510 = 1499U;
volatile uint16_t x513 = 9881U;
volatile int32_t t124 = 132522533;
uint64_t x521 = 634859679165233149LLU;
int16_t x522 = 14;
int64_t x530 = INT64_MIN;
uint64_t x536 = 1521LLU;
volatile int32_t x541 = 170;
int64_t x546 = INT64_MIN;
int8_t x549 = INT8_MIN;
int64_t x551 = -1LL;
int64_t x560 = -1LL;
int16_t x567 = -1;
int16_t x574 = 13;
volatile int32_t x575 = INT32_MIN;
static int16_t x576 = INT16_MAX;
uint32_t x578 = 1U;
int32_t x582 = 0;
uint64_t x587 = 4LLU;
uint32_t x593 = 403350U;
int8_t x603 = 1;
volatile int64_t t146 = 853222303666871LL;
uint64_t x610 = 3207788117185589LLU;
static uint8_t x611 = UINT8_MAX;
int16_t x614 = INT16_MIN;
int16_t x618 = -121;
uint32_t t152 = 738U;
volatile int32_t x639 = 154356159;
int64_t x640 = INT64_MIN;
uint8_t x655 = 104U;
volatile uint64_t t160 = 124241LLU;
int8_t x663 = -15;
int16_t x671 = 59;
uint64_t x675 = 221541LLU;
int32_t x676 = 7181733;
static uint16_t x681 = 8420U;
uint32_t x690 = 2922U;
volatile uint16_t x703 = UINT16_MAX;
volatile int8_t x711 = INT8_MAX;
uint64_t x712 = 155177842LLU;
uint32_t x724 = UINT32_MAX;
int64_t x746 = -1LL;
volatile int8_t x761 = -1;
int32_t t185 = 1721;
static int64_t t186 = 3049LL;
static int16_t x772 = -18;
int32_t x775 = -1;
volatile int64_t t188 = 8282097415333851LL;
int32_t x783 = -2001;
uint16_t x788 = 3360U;
uint64_t x795 = UINT64_MAX;
int32_t x810 = INT32_MAX;
uint64_t x817 = 457521459LLU;
int64_t x818 = -400779435262866901LL;


void f0(void) {
    	int64_t x2 = -1LL;
	uint32_t x3 = 5798189U;
	int32_t x4 = -51777;
	int32_t t0 = -127;

    t0 = (x1^((x2<=x3)/x4));

    if (t0 != 22) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 4U;
	int16_t x7 = 78;
	int32_t x8 = -3835585;
	int32_t t1 = -5668620;

    t1 = (x5^((x6<=x7)/x8));

    if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 3U;
	int8_t x11 = INT8_MAX;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -223;

    t2 = (x9^((x10<=x11)/x12));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int16_t x14 = -1;
	volatile int16_t x15 = -32;
	uint16_t x16 = 491U;
	int32_t t3 = 0;

    t3 = (x13^((x14<=x15)/x16));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	static uint64_t x18 = UINT64_MAX;
	int16_t x19 = -3;
	int8_t x20 = 1;
	volatile int32_t t4 = 340289;

    t4 = (x17^((x18<=x19)/x20));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint64_t x22 = 2LLU;
	int16_t x23 = 1930;
	int32_t x24 = INT32_MIN;

    t5 = (x21^((x22<=x23)/x24));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 953083158585LLU;
	int64_t x26 = INT64_MAX;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t6 = 31621001085386LLU;

    t6 = (x25^((x26<=x27)/x28));

    if (t6 != 953083158585LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int16_t x31 = -1;
	volatile int16_t x32 = INT16_MAX;
	static int32_t t7 = 797217;

    t7 = (x29^((x30<=x31)/x32));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = 0LL;
	static int16_t x36 = INT16_MIN;
	volatile uint64_t t8 = 16LLU;

    t8 = (x33^((x34<=x35)/x36));

    if (t8 != 61337644076792867LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 286LL;
	volatile int8_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	volatile int64_t t9 = -1742471267721622LL;

    t9 = (x37^((x38<=x39)/x40));

    if (t9 != 286LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 2LLU;
	uint32_t x43 = 1645934U;
	uint32_t x44 = 41U;
	uint64_t t10 = 13437LLU;

    t10 = (x41^((x42<=x43)/x44));

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x51 = UINT16_MAX;
	int64_t x52 = -1LL;
	int64_t t11 = -13121513LL;

    t11 = (x49^((x50<=x51)/x52));

    if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	int16_t x54 = -1542;
	int64_t x55 = -63060336818298LL;
	int32_t t12 = -4;

    t12 = (x53^((x54<=x55)/x56));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = 14360621692LL;
	static int64_t x58 = -1LL;
	static int32_t x60 = INT32_MAX;
	static int64_t t13 = -4186209767319818LL;

    t13 = (x57^((x58<=x59)/x60));

    if (t13 != 14360621692LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -1977;
	int16_t x62 = -1;
	static uint32_t x63 = 14321U;
	volatile int32_t t14 = -3;

    t14 = (x61^((x62<=x63)/x64));

    if (t14 != -1977) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = 25U;
	volatile int32_t t15 = -2;

    t15 = (x65^((x66<=x67)/x68));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = INT8_MIN;
	volatile int64_t x71 = INT64_MAX;
	uint8_t x72 = 21U;
	static int32_t t16 = -1;

    t16 = (x69^((x70<=x71)/x72));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MAX;
	int32_t x74 = -36;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;

    t17 = (x73^((x74<=x75)/x76));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = -13;
	static volatile uint64_t x78 = 31378155551942LLU;
	int32_t x79 = -1;
	volatile int16_t x80 = INT16_MAX;

    t18 = (x77^((x78<=x79)/x80));

    if (t18 != -13) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	uint64_t x82 = 1076876596560LLU;
	int32_t x83 = -1;
	int32_t x84 = -1;
	int32_t t19 = -59431491;

    t19 = (x81^((x82<=x83)/x84));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -254490280;
	int8_t x88 = 13;
	int32_t t20 = -17270;

    t20 = (x85^((x86<=x87)/x88));

    if (t20 != -254490280) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = INT8_MIN;
	int32_t x92 = 13102;
	volatile int32_t t21 = -75000264;

    t21 = (x89^((x90<=x91)/x92));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MIN;
	static int16_t x96 = -790;
	uint32_t t22 = 4134758U;

    t22 = (x93^((x94<=x95)/x96));

    if (t22 != 823U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	int64_t x99 = -3241997880432LL;
	static volatile int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -1;

    t23 = (x97^((x98<=x99)/x100));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 425U;
	uint32_t x102 = 60698U;
	static volatile int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MIN;
	static int32_t t24 = 11163;

    t24 = (x101^((x102<=x103)/x104));

    if (t24 != 425) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MAX;
	int32_t x106 = -2;
	int16_t x107 = -1;
	static int8_t x108 = 9;

    t25 = (x105^((x106<=x107)/x108));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x111 = -6431581749480LL;
	int16_t x112 = -1;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = (x109^((x110<=x111)/x112));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = -14933;
	static int32_t x115 = INT32_MIN;
	int32_t t27 = 63;

    t27 = (x113^((x114<=x115)/x116));

    if (t27 != -14933) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x119 = 1446U;
	int8_t x120 = INT8_MIN;
	int32_t t28 = 1515;

    t28 = (x117^((x118<=x119)/x120));

    if (t28 != 3837) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x121 = 63;
	uint32_t x122 = UINT32_MAX;
	int32_t t29 = 284;

    t29 = (x121^((x122<=x123)/x124));

    if (t29 != -64) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = 0;
	int8_t x126 = -1;
	uint32_t x128 = 723U;
	volatile uint32_t t30 = 48175138U;

    t30 = (x125^((x126<=x127)/x128));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = -38;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t31 = 8265;

    t31 = (x129^((x130<=x131)/x132));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = 1782;

    t32 = (x133^((x134<=x135)/x136));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = -25971860;
	uint32_t x138 = 2991U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -5;
	int32_t t33 = 305;

    t33 = (x137^((x138<=x139)/x140));

    if (t33 != -25971860) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = -25580LL;
	volatile int32_t x142 = INT32_MIN;
	int16_t x144 = 3;

    t34 = (x141^((x142<=x143)/x144));

    if (t34 != -25580LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x145 = INT16_MAX;
	int16_t x146 = -3;
	int64_t x147 = 3LL;
	volatile uint64_t x148 = 7LLU;
	uint64_t t35 = 267LLU;

    t35 = (x145^((x146<=x147)/x148));

    if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x150 = -1LL;
	static int64_t x151 = -48495527850380LL;
	static volatile int64_t x152 = INT64_MIN;

    t36 = (x149^((x150<=x151)/x152));

    if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -1;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 8616LLU;

    t37 = (x153^((x154<=x155)/x156));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 3816963218742LLU;
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = INT32_MIN;
	uint64_t t38 = 62551001172947LLU;

    t38 = (x157^((x158<=x159)/x160));

    if (t38 != 3816963218742LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x161 = 155849;
	int8_t x162 = INT8_MIN;
	volatile int8_t x163 = 1;
	int8_t x164 = INT8_MIN;
	volatile int32_t t39 = 485;

    t39 = (x161^((x162<=x163)/x164));

    if (t39 != 155849) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x165 = UINT8_MAX;
	int16_t x166 = 1;
	int64_t x167 = 20963220962LL;
	int64_t x168 = 441585305985LL;

    t40 = (x165^((x166<=x167)/x168));

    if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x169 = 7U;
	static volatile int16_t x170 = -1;
	int8_t x171 = -30;
	int32_t x172 = 129181;
	volatile uint32_t t41 = 38U;

    t41 = (x169^((x170<=x171)/x172));

    if (t41 != 7U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = 368869;
	uint64_t x175 = 6LLU;
	static int16_t x176 = INT16_MIN;
	int32_t t42 = -16997;

    t42 = (x173^((x174<=x175)/x176));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = -296;
	int32_t x178 = INT32_MIN;
	static uint32_t x179 = 25408U;
	uint32_t x180 = UINT32_MAX;
	uint32_t t43 = 3U;

    t43 = (x177^((x178<=x179)/x180));

    if (t43 != 4294967000U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x182 = UINT32_MAX;
	static volatile uint8_t x183 = 0U;
	int16_t x184 = -23;

    t44 = (x181^((x182<=x183)/x184));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x186 = 2714;
	static volatile int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;

    t45 = (x185^((x186<=x187)/x188));

    if (t45 != 30267312172090083LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x190 = INT32_MAX;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = -1;

    t46 = (x189^((x190<=x191)/x192));

    if (t46 != -256) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 290480593325194867LLU;
	static volatile int8_t x194 = INT8_MIN;
	volatile int32_t x195 = -1;
	uint64_t t47 = 588LLU;

    t47 = (x193^((x194<=x195)/x196));

    if (t47 != 290480593325194867LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = 8;
	volatile int64_t x198 = -9812563LL;
	volatile uint16_t x199 = UINT16_MAX;
	int8_t x200 = -1;
	static int32_t t48 = 1;

    t48 = (x197^((x198<=x199)/x200));

    if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -1;
	volatile uint32_t x204 = 26593201U;
	uint32_t t49 = UINT32_MAX;

    t49 = (x201^((x202<=x203)/x204));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x205 = -1;
	uint32_t x206 = 500192U;
	uint32_t x207 = 7578U;
	int8_t x208 = -4;
	static volatile int32_t t50 = -196630;

    t50 = (x205^((x206<=x207)/x208));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x210 = INT16_MIN;
	volatile int32_t x211 = -1;
	volatile uint8_t x212 = 1U;
	int32_t t51 = 37659624;

    t51 = (x209^((x210<=x211)/x212));

    if (t51 != 32766) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x214 = 42;
	int8_t x215 = -11;
	static uint32_t x216 = 208U;

    t52 = (x213^((x214<=x215)/x216));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	volatile int8_t x218 = 7;

    t53 = (x217^((x218<=x219)/x220));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;

    t54 = (x221^((x222<=x223)/x224));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = -1;
	int64_t x228 = INT64_MIN;
	int64_t t55 = -1544410805LL;

    t55 = (x225^((x226<=x227)/x228));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = 7135666712LL;
	uint16_t x230 = UINT16_MAX;
	int64_t t56 = -109369186001969038LL;

    t56 = (x229^((x230<=x231)/x232));

    if (t56 != 7135666712LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = 857;
	volatile int32_t t57 = -320;

    t57 = (x233^((x234<=x235)/x236));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x237 = 0LL;
	int32_t x238 = INT32_MAX;
	volatile uint16_t x239 = 15U;
	uint64_t x240 = 2903184585LLU;

    t58 = (x237^((x238<=x239)/x240));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = 68;
	volatile int32_t x243 = -1;
	int16_t x244 = -956;
	static volatile int32_t t59 = 231398586;

    t59 = (x241^((x242<=x243)/x244));

    if (t59 != 68) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 16889U;
	volatile int16_t x248 = INT16_MAX;

    t60 = (x245^((x246<=x247)/x248));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = 49407106495996LLU;
	int8_t x250 = -19;
	static volatile int16_t x252 = INT16_MIN;

    t61 = (x249^((x250<=x251)/x252));

    if (t61 != 49407106495996LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x253 = 1009064932LLU;
	static int32_t x254 = -99;
	int8_t x255 = 1;
	static volatile uint64_t x256 = 76627976846555479LLU;

    t62 = (x253^((x254<=x255)/x256));

    if (t62 != 1009064932LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x257 = INT32_MAX;
	int64_t x259 = -164LL;

    t63 = (x257^((x258<=x259)/x260));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = -4;
	static volatile uint32_t x262 = 816U;
	uint8_t x264 = UINT8_MAX;
	int32_t t64 = -535195;

    t64 = (x261^((x262<=x263)/x264));

    if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	volatile int64_t x267 = -1LL;
	int64_t x268 = -464766067382621LL;

    t65 = (x265^((x266<=x267)/x268));

    if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x270 = INT8_MIN;
	volatile int32_t x272 = 839261;
	volatile int64_t t66 = 54742483078881020LL;

    t66 = (x269^((x270<=x271)/x272));

    if (t66 != -1045583LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = 1;
	volatile int16_t x274 = -5435;
	int8_t x275 = INT8_MAX;
	static volatile int32_t t67 = 487;

    t67 = (x273^((x274<=x275)/x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x277 = 2U;
	static uint8_t x278 = UINT8_MAX;
	static int8_t x279 = INT8_MAX;
	static int32_t x280 = -659;
	volatile int32_t t68 = 7;

    t68 = (x277^((x278<=x279)/x280));

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	volatile uint8_t x284 = 11U;
	int32_t t69 = -1870;

    t69 = (x281^((x282<=x283)/x284));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = 12U;
	int32_t x286 = INT32_MIN;
	static int8_t x288 = INT8_MAX;

    t70 = (x285^((x286<=x287)/x288));

    if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x290 = INT8_MIN;
	int64_t x292 = -1LL;
	int64_t t71 = -1893625608991819841LL;

    t71 = (x289^((x290<=x291)/x292));

    if (t71 != -256LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x293 = 0U;
	uint32_t x294 = 409463925U;
	uint64_t x295 = 0LLU;

    t72 = (x293^((x294<=x295)/x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x301 = INT8_MIN;
	static int64_t x303 = INT64_MAX;

    t73 = (x301^((x302<=x303)/x304));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -11;
	uint16_t x306 = 6U;
	int32_t t74 = 1315;

    t74 = (x305^((x306<=x307)/x308));

    if (t74 != -11) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x312 = -1;
	volatile int64_t t75 = INT64_MIN;

    t75 = (x309^((x310<=x311)/x312));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MAX;
	uint8_t x315 = 11U;
	int32_t x316 = INT32_MIN;
	int64_t t76 = INT64_MIN;

    t76 = (x313^((x314<=x315)/x316));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x318 = 80U;
	uint64_t x319 = UINT64_MAX;
	static uint64_t x320 = 39603217LLU;
	static volatile uint64_t t77 = UINT64_MAX;

    t77 = (x317^((x318<=x319)/x320));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MAX;
	volatile int16_t x322 = INT16_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int64_t t78 = INT64_MAX;

    t78 = (x321^((x322<=x323)/x324));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = -2;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	volatile uint32_t x328 = 933481382U;
	static uint32_t t79 = 8142491U;

    t79 = (x325^((x326<=x327)/x328));

    if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x330 = INT16_MAX;
	int32_t x331 = -46;
	uint32_t x332 = 48996012U;
	uint32_t t80 = 1U;

    t80 = (x329^((x330<=x331)/x332));

    if (t80 != 793U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x333 = -1LL;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = 3;
	int64_t t81 = -1340768788707LL;

    t81 = (x333^((x334<=x335)/x336));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = -1LL;
	static volatile int32_t x338 = 592;
	int32_t x339 = 155322;
	uint64_t x340 = 4160579787319673324LLU;

    t82 = (x337^((x338<=x339)/x340));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = 56;
	uint8_t x344 = UINT8_MAX;
	static volatile int32_t t83 = -6454121;

    t83 = (x341^((x342<=x343)/x344));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x345 = INT16_MIN;
	int32_t x346 = 16035389;
	volatile uint16_t x347 = 252U;
	static int32_t x348 = 2042359;
	static int32_t t84 = 212532;

    t84 = (x345^((x346<=x347)/x348));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 14;
	uint8_t x350 = 10U;
	int16_t x351 = 1;
	int8_t x352 = 5;
	static int32_t t85 = 62821076;

    t85 = (x349^((x350<=x351)/x352));

    if (t85 != 14) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 408U;
	volatile uint64_t x354 = 975493850079LLU;
	static volatile int64_t x355 = -39593599737245963LL;
	static uint16_t x356 = UINT16_MAX;
	int32_t t86 = -1;

    t86 = (x353^((x354<=x355)/x356));

    if (t86 != 408) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = -9;
	uint8_t x362 = 1U;
	int64_t x363 = INT64_MIN;
	volatile int64_t x364 = 3740032782309LL;
	static volatile int64_t t87 = -3405981544LL;

    t87 = (x361^((x362<=x363)/x364));

    if (t87 != -9LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = 3612322533545LL;
	int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MIN;
	static volatile int64_t t88 = 110608400LL;

    t88 = (x365^((x366<=x367)/x368));

    if (t88 != 3612322533545LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x369 = -1;
	int8_t x371 = 1;
	int16_t x372 = -1;
	volatile int32_t t89 = -29;

    t89 = (x369^((x370<=x371)/x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x375 = 5623;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t90 = 233;

    t90 = (x373^((x374<=x375)/x376));

    if (t90 != 154) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x377 = 115U;
	uint8_t x378 = 1U;
	int32_t x379 = INT32_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t91 = 7279U;

    t91 = (x377^((x378<=x379)/x380));

    if (t91 != 115U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x381 = INT64_MAX;
	static int64_t x383 = -15LL;
	int32_t x384 = INT32_MIN;
	int64_t t92 = INT64_MAX;

    t92 = (x381^((x382<=x383)/x384));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MAX;
	uint64_t x388 = 169572153292606LLU;
	uint64_t t93 = 56018167LLU;

    t93 = (x385^((x386<=x387)/x388));

    if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x389 = 26337198262LLU;
	uint64_t x390 = 314LLU;
	int32_t x391 = 531056760;
	static uint64_t t94 = 50624844734LLU;

    t94 = (x389^((x390<=x391)/x392));

    if (t94 != 26337198262LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	volatile int64_t t95 = 1528706LL;

    t95 = (x393^((x394<=x395)/x396));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	int32_t x399 = 8101;
	int32_t x400 = -1;
	volatile int64_t t96 = INT64_MAX;

    t96 = (x397^((x398<=x399)/x400));

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = -1;
	int64_t x404 = -725510767252704974LL;

    t97 = (x401^((x402<=x403)/x404));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = INT8_MAX;
	uint64_t x406 = 6146LLU;
	int16_t x407 = 836;
	int32_t x408 = -694478895;
	volatile int32_t t98 = 60070159;

    t98 = (x405^((x406<=x407)/x408));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 85U;
	volatile int32_t t99 = 3;

    t99 = (x409^((x410<=x411)/x412));

    if (t99 != 85) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x413 = 35078917307457366LLU;
	static int8_t x414 = -1;
	uint64_t x415 = 39637470126334521LLU;
	uint16_t x416 = 290U;
	uint64_t t100 = 4575825703535947LLU;

    t100 = (x413^((x414<=x415)/x416));

    if (t100 != 35078917307457366LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = 24;
	static int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	uint32_t t101 = 1780155864U;

    t101 = (x417^((x418<=x419)/x420));

    if (t101 != 24U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x422 = -1;
	volatile int32_t x423 = INT32_MIN;
	int32_t x424 = -255496504;
	volatile int32_t t102 = 153;

    t102 = (x421^((x422<=x423)/x424));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = -1;
	uint8_t x426 = 28U;
	volatile int32_t x427 = -237956188;
	volatile uint16_t x428 = UINT16_MAX;
	volatile int32_t t103 = 2688;

    t103 = (x425^((x426<=x427)/x428));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x429 = INT32_MAX;
	uint64_t x430 = 3610938659875438LLU;
	int16_t x432 = INT16_MIN;
	int32_t t104 = INT32_MAX;

    t104 = (x429^((x430<=x431)/x432));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = 2959U;
	static int16_t x435 = 1016;
	volatile int32_t t105 = 98493977;

    t105 = (x433^((x434<=x435)/x436));

    if (t105 != 2959) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x437 = INT64_MIN;
	volatile uint16_t x440 = 10U;
	int64_t t106 = INT64_MIN;

    t106 = (x437^((x438<=x439)/x440));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MAX;
	uint64_t x442 = UINT64_MAX;
	static volatile uint16_t x443 = 97U;
	static int16_t x444 = -52;
	int64_t t107 = INT64_MAX;

    t107 = (x441^((x442<=x443)/x444));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x446 = 25U;
	int32_t x447 = INT32_MAX;
	static uint64_t x448 = 935037LLU;
	volatile uint64_t t108 = 23400546664748630LLU;

    t108 = (x445^((x446<=x447)/x448));

    if (t108 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x449 = -37;
	int32_t x450 = 23;
	uint32_t x451 = 179304746U;
	volatile uint16_t x452 = 6U;
	volatile int32_t t109 = -261177;

    t109 = (x449^((x450<=x451)/x452));

    if (t109 != -37) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MAX;
	int8_t x456 = INT8_MIN;
	volatile int32_t t110 = 105620935;

    t110 = (x453^((x454<=x455)/x456));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = 7310113LL;
	int64_t x458 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	volatile int64_t x460 = INT64_MIN;
	static int64_t t111 = -675084450LL;

    t111 = (x457^((x458<=x459)/x460));

    if (t111 != 7310113LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = -11709;
	volatile uint8_t x462 = 1U;
	int32_t x463 = -1;
	static volatile int32_t t112 = 88232;

    t112 = (x461^((x462<=x463)/x464));

    if (t112 != -11709) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x465 = INT8_MIN;
	int8_t x466 = 0;
	int64_t x467 = 100158981826057951LL;
	int64_t t113 = 1309449205222659LL;

    t113 = (x465^((x466<=x467)/x468));

    if (t113 != -128LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x470 = -374951851;
	uint64_t x471 = 857630240907LLU;
	int8_t x472 = 1;
	static volatile int32_t t114 = -3285;

    t114 = (x469^((x470<=x471)/x472));

    if (t114 != 10) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x474 = INT32_MIN;
	uint64_t x475 = 11138153063460LLU;
	volatile int32_t t115 = -6;

    t115 = (x473^((x474<=x475)/x476));

    if (t115 != 986) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x480 = INT8_MIN;
	int32_t t116 = INT32_MAX;

    t116 = (x477^((x478<=x479)/x480));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x481 = 2U;
	int8_t x482 = INT8_MIN;
	static int8_t x484 = INT8_MIN;
	static int32_t t117 = -13;

    t117 = (x481^((x482<=x483)/x484));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x485 = INT16_MIN;
	int8_t x486 = -1;
	volatile int32_t x487 = INT32_MIN;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t118 = -1787700;

    t118 = (x485^((x486<=x487)/x488));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = -1;
	volatile int32_t x490 = INT32_MAX;
	static int64_t x491 = INT64_MAX;
	int8_t x492 = -1;
	int32_t t119 = 494556672;

    t119 = (x489^((x490<=x491)/x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x497 = 2U;
	uint16_t x499 = 5761U;
	volatile int64_t x500 = -1LL;
	static int64_t t120 = 270LL;

    t120 = (x497^((x498<=x499)/x500));

    if (t120 != -3LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x501 = INT64_MIN;
	int32_t x502 = -1360;
	int16_t x504 = -2;

    t121 = (x501^((x502<=x503)/x504));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MAX;
	uint8_t x508 = 5U;

    t122 = (x505^((x506<=x507)/x508));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = 451280;
	int16_t x511 = 0;
	uint64_t x512 = 221875086LLU;
	uint64_t t123 = 1635655975070482307LLU;

    t123 = (x509^((x510<=x511)/x512));

    if (t123 != 451280LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x514 = -3077;
	uint8_t x515 = 118U;
	int16_t x516 = 1;

    t124 = (x513^((x514<=x515)/x516));

    if (t124 != 9880) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x517 = -10;
	int16_t x518 = 309;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = INT16_MAX;
	volatile int32_t t125 = 6;

    t125 = (x517^((x518<=x519)/x520));

    if (t125 != -10) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x523 = INT64_MAX;
	int16_t x524 = -1;
	static uint64_t t126 = 5930985245393109LLU;

    t126 = (x521^((x522<=x523)/x524));

    if (t126 != 17811884394544318466LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x525 = -1;
	static volatile int32_t x526 = INT32_MAX;
	int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t127 = 78121998;

    t127 = (x525^((x526<=x527)/x528));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x529 = INT32_MIN;
	static int64_t x531 = -1LL;
	static int32_t x532 = INT32_MIN;
	int32_t t128 = INT32_MIN;

    t128 = (x529^((x530<=x531)/x532));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x533 = INT64_MIN;
	uint32_t x534 = 1214154U;
	int8_t x535 = 0;
	uint64_t t129 = 5498570595437415543LLU;

    t129 = (x533^((x534<=x535)/x536));

    if (t129 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x537 = 31;
	volatile int32_t x538 = INT32_MAX;
	uint8_t x539 = UINT8_MAX;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t130 = 145675734U;

    t130 = (x537^((x538<=x539)/x540));

    if (t130 != 31U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x542 = INT64_MIN;
	uint32_t x543 = 2993U;
	uint8_t x544 = 1U;
	static int32_t t131 = 10;

    t131 = (x541^((x542<=x543)/x544));

    if (t131 != 171) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = INT64_MIN;
	static uint64_t x547 = 1061LLU;
	static int8_t x548 = INT8_MIN;
	volatile int64_t t132 = INT64_MIN;

    t132 = (x545^((x546<=x547)/x548));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x550 = -1;
	volatile int64_t x552 = 286LL;
	volatile int64_t t133 = -12LL;

    t133 = (x549^((x550<=x551)/x552));

    if (t133 != -128LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x553 = INT16_MAX;
	static int64_t x554 = -220587467453LL;
	uint32_t x555 = 907U;
	uint8_t x556 = 5U;
	volatile int32_t t134 = -878214836;

    t134 = (x553^((x554<=x555)/x556));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 11313756646293LLU;
	volatile uint64_t x558 = 2972178693637LLU;
	static uint8_t x559 = 24U;
	volatile uint64_t t135 = 101705655273600144LLU;

    t135 = (x557^((x558<=x559)/x560));

    if (t135 != 11313756646293LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = UINT64_MAX;
	int16_t x562 = -3374;
	static int8_t x563 = -27;
	static int8_t x564 = -1;
	volatile uint64_t t136 = 546695878LLU;

    t136 = (x561^((x562<=x563)/x564));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x565 = INT8_MAX;
	int64_t x566 = INT64_MIN;
	uint16_t x568 = 64U;
	int32_t t137 = 3;

    t137 = (x565^((x566<=x567)/x568));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x569 = 738677198;
	static uint64_t x570 = 13470705865469LLU;
	int8_t x571 = -1;
	static int16_t x572 = INT16_MIN;
	int32_t t138 = -479297793;

    t138 = (x569^((x570<=x571)/x572));

    if (t138 != 738677198) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x573 = INT64_MIN;
	static int64_t t139 = INT64_MIN;

    t139 = (x573^((x574<=x575)/x576));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x579 = -1;
	volatile uint8_t x580 = 14U;
	volatile int32_t t140 = INT32_MIN;

    t140 = (x577^((x578<=x579)/x580));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x581 = INT64_MAX;
	int32_t x583 = INT32_MAX;
	int16_t x584 = INT16_MAX;
	int64_t t141 = INT64_MAX;

    t141 = (x581^((x582<=x583)/x584));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x585 = INT64_MIN;
	uint8_t x586 = 38U;
	int16_t x588 = INT16_MIN;
	volatile int64_t t142 = INT64_MIN;

    t142 = (x585^((x586<=x587)/x588));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x589 = 148U;
	int32_t x590 = -10008919;
	int8_t x591 = INT8_MAX;
	uint16_t x592 = 47U;
	volatile int32_t t143 = -938;

    t143 = (x589^((x590<=x591)/x592));

    if (t143 != 148) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x594 = INT64_MIN;
	int8_t x595 = -1;
	uint64_t x596 = 2985660791036102LLU;
	uint64_t t144 = 15724517LLU;

    t144 = (x593^((x594<=x595)/x596));

    if (t144 != 403350LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = -1;
	int64_t x598 = -1LL;
	uint8_t x599 = UINT8_MAX;
	static int64_t x600 = INT64_MAX;
	volatile int64_t t145 = -467272LL;

    t145 = (x597^((x598<=x599)/x600));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = -16LL;
	int64_t x602 = INT64_MIN;
	int64_t x604 = 834468LL;

    t146 = (x601^((x602<=x603)/x604));

    if (t146 != -16LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x605 = -2;
	static volatile int8_t x606 = -17;
	int16_t x607 = -1;
	uint64_t x608 = UINT64_MAX;
	volatile uint64_t t147 = 1334023858905616206LLU;

    t147 = (x605^((x606<=x607)/x608));

    if (t147 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x609 = -3634310;
	int64_t x612 = -485753321768LL;
	volatile int64_t t148 = 225LL;

    t148 = (x609^((x610<=x611)/x612));

    if (t148 != -3634310LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x615 = -1;
	int64_t x616 = INT64_MIN;
	volatile int64_t t149 = 5715501180LL;

    t149 = (x613^((x614<=x615)/x616));

    if (t149 != -128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MIN;
	uint8_t x619 = 1U;
	int8_t x620 = -1;
	int64_t t150 = INT64_MAX;

    t150 = (x617^((x618<=x619)/x620));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x621 = -1;
	int64_t x622 = INT64_MAX;
	static int16_t x623 = INT16_MIN;
	static volatile int16_t x624 = -1;
	int32_t t151 = -2570;

    t151 = (x621^((x622<=x623)/x624));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = UINT32_MAX;
	static int64_t x626 = INT64_MIN;
	int64_t x627 = 3LL;
	volatile int16_t x628 = -1;

    t152 = (x625^((x626<=x627)/x628));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x629 = 9491627LLU;
	uint64_t x630 = 269452840357098LLU;
	uint32_t x631 = 81U;
	int32_t x632 = INT32_MIN;
	static volatile uint64_t t153 = 4351425LLU;

    t153 = (x629^((x630<=x631)/x632));

    if (t153 != 9491627LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = -1;
	uint32_t x635 = UINT32_MAX;
	int32_t x636 = INT32_MIN;
	volatile int32_t t154 = -162861946;

    t154 = (x633^((x634<=x635)/x636));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x637 = INT32_MIN;
	volatile int8_t x638 = 2;
	volatile int64_t t155 = -2LL;

    t155 = (x637^((x638<=x639)/x640));

    if (t155 != -2147483648LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x641 = UINT32_MAX;
	static volatile int32_t x642 = -197;
	volatile int32_t x643 = -29739;
	int16_t x644 = -1;
	uint32_t t156 = UINT32_MAX;

    t156 = (x641^((x642<=x643)/x644));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x645 = -65553172LL;
	static int8_t x646 = INT8_MIN;
	uint64_t x647 = 8399121102LLU;
	static int32_t x648 = -1;
	volatile int64_t t157 = -25941994371LL;

    t157 = (x645^((x646<=x647)/x648));

    if (t157 != -65553172LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = 111923948LL;
	int8_t x650 = -1;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = 1U;
	volatile int64_t t158 = 1680051LL;

    t158 = (x649^((x650<=x651)/x652));

    if (t158 != 111923948LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = 28732790;
	static int16_t x654 = INT16_MIN;
	int32_t x656 = INT32_MIN;
	int32_t t159 = 1;

    t159 = (x653^((x654<=x655)/x656));

    if (t159 != 28732790) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x657 = 238294028894LLU;
	int16_t x658 = -3;
	uint8_t x659 = 1U;
	int16_t x660 = INT16_MIN;

    t160 = (x657^((x658<=x659)/x660));

    if (t160 != 238294028894LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = -1;
	int32_t x662 = INT32_MIN;
	int8_t x664 = INT8_MIN;
	static int32_t t161 = 321397793;

    t161 = (x661^((x662<=x663)/x664));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = -9;
	volatile int32_t x666 = INT32_MIN;
	volatile int64_t x667 = INT64_MIN;
	volatile int8_t x668 = -3;
	int32_t t162 = -202392000;

    t162 = (x665^((x666<=x667)/x668));

    if (t162 != -9) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x669 = INT32_MAX;
	uint8_t x670 = UINT8_MAX;
	volatile int64_t x672 = INT64_MAX;
	static int64_t t163 = -695311942LL;

    t163 = (x669^((x670<=x671)/x672));

    if (t163 != 2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x673 = -1;
	int64_t x674 = -1LL;
	int32_t t164 = 253592525;

    t164 = (x673^((x674<=x675)/x676));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x677 = 402639LLU;
	static volatile int16_t x678 = INT16_MIN;
	int32_t x679 = 858710050;
	int8_t x680 = -1;
	volatile uint64_t t165 = 60671841980580LLU;

    t165 = (x677^((x678<=x679)/x680));

    if (t165 != 18446744073709148976LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x682 = INT32_MIN;
	uint16_t x683 = UINT16_MAX;
	int32_t x684 = INT32_MIN;
	int32_t t166 = 98140583;

    t166 = (x681^((x682<=x683)/x684));

    if (t166 != 8420) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x689 = INT64_MAX;
	volatile int8_t x691 = INT8_MAX;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t167 = 6399526785LLU;

    t167 = (x689^((x690<=x691)/x692));

    if (t167 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = INT8_MIN;
	uint8_t x694 = UINT8_MAX;
	int16_t x695 = -210;
	int8_t x696 = -1;
	static volatile int32_t t168 = 14;

    t168 = (x693^((x694<=x695)/x696));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = -1;
	uint32_t x698 = 37938U;
	int32_t x699 = 496;
	uint32_t x700 = 27873191U;
	uint32_t t169 = UINT32_MAX;

    t169 = (x697^((x698<=x699)/x700));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	int64_t x702 = -1LL;
	uint64_t x704 = 150641LLU;
	volatile uint64_t t170 = 34LLU;

    t170 = (x701^((x702<=x703)/x704));

    if (t170 != 65535LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x705 = -1;
	int8_t x706 = INT8_MIN;
	uint16_t x707 = 74U;
	uint16_t x708 = 4253U;
	int32_t t171 = 1274;

    t171 = (x705^((x706<=x707)/x708));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x709 = INT16_MAX;
	int8_t x710 = INT8_MIN;
	volatile uint64_t t172 = 1886499LLU;

    t172 = (x709^((x710<=x711)/x712));

    if (t172 != 32767LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = INT16_MIN;
	int8_t x714 = INT8_MIN;
	int32_t x715 = 1133629;
	int64_t x716 = 8663087LL;
	static volatile int64_t t173 = 106531LL;

    t173 = (x713^((x714<=x715)/x716));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x717 = INT16_MIN;
	uint64_t x718 = 81LLU;
	int32_t x719 = INT32_MAX;
	uint16_t x720 = 146U;
	volatile int32_t t174 = -1;

    t174 = (x717^((x718<=x719)/x720));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x721 = 278U;
	int16_t x722 = 35;
	volatile uint16_t x723 = UINT16_MAX;
	uint32_t t175 = 271073U;

    t175 = (x721^((x722<=x723)/x724));

    if (t175 != 278U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = INT16_MAX;
	int64_t x726 = INT64_MIN;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = INT64_MIN;
	volatile int64_t t176 = -14621LL;

    t176 = (x725^((x726<=x727)/x728));

    if (t176 != 32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = -1;
	int64_t x730 = INT64_MAX;
	volatile int16_t x731 = -1;
	volatile uint64_t x732 = 26075401534093906LLU;
	uint64_t t177 = UINT64_MAX;

    t177 = (x729^((x730<=x731)/x732));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = INT8_MAX;
	int32_t x734 = -1;
	static int16_t x735 = INT16_MAX;
	uint64_t x736 = 1323919242LLU;
	static uint64_t t178 = 5LLU;

    t178 = (x733^((x734<=x735)/x736));

    if (t178 != 127LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	static int32_t x738 = -1;
	int64_t x739 = INT64_MAX;
	volatile int16_t x740 = -1;
	uint64_t t179 = 2235948706822517LLU;

    t179 = (x737^((x738<=x739)/x740));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = 8;
	volatile int64_t x743 = -477830437837073LL;
	int32_t x744 = 1;
	volatile int32_t t180 = INT32_MIN;

    t180 = (x741^((x742<=x743)/x744));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x745 = 53069482429454LLU;
	static volatile int8_t x747 = INT8_MIN;
	int64_t x748 = INT64_MIN;
	volatile uint64_t t181 = 96652195385280LLU;

    t181 = (x745^((x746<=x747)/x748));

    if (t181 != 53069482429454LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x749 = 411U;
	int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MIN;
	uint16_t x752 = UINT16_MAX;
	volatile int32_t t182 = -24;

    t182 = (x749^((x750<=x751)/x752));

    if (t182 != 411) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MAX;
	volatile int32_t t183 = 921;

    t183 = (x753^((x754<=x755)/x756));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x757 = INT32_MAX;
	int16_t x758 = -152;
	int64_t x759 = INT64_MAX;
	volatile uint16_t x760 = 6984U;
	volatile int32_t t184 = INT32_MAX;

    t184 = (x757^((x758<=x759)/x760));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x762 = 274;
	int64_t x763 = 64049277726736LL;
	int32_t x764 = -1;

    t185 = (x761^((x762<=x763)/x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x765 = -1LL;
	int64_t x766 = INT64_MIN;
	static uint32_t x767 = UINT32_MAX;
	static int64_t x768 = INT64_MAX;

    t186 = (x765^((x766<=x767)/x768));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x769 = 3U;
	int16_t x770 = INT16_MAX;
	uint64_t x771 = 36690LLU;
	volatile int32_t t187 = -1;

    t187 = (x769^((x770<=x771)/x772));

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x773 = 129U;
	static int32_t x774 = -230136313;
	int64_t x776 = INT64_MIN;

    t188 = (x773^((x774<=x775)/x776));

    if (t188 != 129LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x777 = INT16_MIN;
	int64_t x778 = INT64_MIN;
	static uint64_t x779 = 48893140540734673LLU;
	int16_t x780 = INT16_MIN;
	static volatile int32_t t189 = -37433781;

    t189 = (x777^((x778<=x779)/x780));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = -1LL;
	volatile uint16_t x782 = UINT16_MAX;
	volatile int16_t x784 = -4;
	int64_t t190 = 29747398LL;

    t190 = (x781^((x782<=x783)/x784));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x785 = -15190;
	int8_t x786 = 1;
	uint32_t x787 = 42353370U;
	int32_t t191 = 142858;

    t191 = (x785^((x786<=x787)/x788));

    if (t191 != -15190) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x789 = 473U;
	uint32_t x790 = 47505679U;
	volatile int32_t x791 = INT32_MAX;
	int64_t x792 = 4222122322LL;
	volatile int64_t t192 = -709624LL;

    t192 = (x789^((x790<=x791)/x792));

    if (t192 != 473LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x793 = 77;
	uint64_t x794 = 2466364940678394LLU;
	uint16_t x796 = UINT16_MAX;
	static int32_t t193 = 4055;

    t193 = (x793^((x794<=x795)/x796));

    if (t193 != 77) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = -1;
	static int32_t x798 = INT32_MIN;
	int8_t x799 = INT8_MIN;
	int16_t x800 = -793;
	int32_t t194 = -1008764;

    t194 = (x797^((x798<=x799)/x800));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x801 = INT16_MIN;
	uint32_t x802 = UINT32_MAX;
	static uint32_t x803 = UINT32_MAX;
	static int32_t x804 = -1120080;
	volatile int32_t t195 = 24850039;

    t195 = (x801^((x802<=x803)/x804));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x805 = 25U;
	int16_t x806 = INT16_MAX;
	int64_t x807 = -1LL;
	static int16_t x808 = INT16_MIN;
	volatile int32_t t196 = -242022;

    t196 = (x805^((x806<=x807)/x808));

    if (t196 != 25) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = -1;
	static int64_t x811 = -2177789054687LL;
	static int8_t x812 = -1;
	volatile int32_t t197 = -1;

    t197 = (x809^((x810<=x811)/x812));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x813 = 18U;
	volatile int32_t x814 = 0;
	int8_t x815 = INT8_MAX;
	uint32_t x816 = 3317096U;
	uint32_t t198 = 14299U;

    t198 = (x813^((x814<=x815)/x816));

    if (t198 != 18U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x819 = 25154572;
	uint64_t x820 = 1411821187883225LLU;
	uint64_t t199 = 2939119LLU;

    t199 = (x817^((x818<=x819)/x820));

    if (t199 != 457521459LLU) { NG(); } else { ; }
	
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

