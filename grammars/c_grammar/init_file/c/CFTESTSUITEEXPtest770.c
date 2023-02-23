
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

static int64_t x2 = INT64_MIN;
static int16_t x4 = 1;
volatile uint16_t x19 = 332U;
volatile int16_t x23 = 1;
int32_t x35 = -1;
int32_t x42 = -1;
static volatile int8_t x60 = -1;
volatile int32_t t14 = -11015364;
static uint16_t x61 = 13U;
int64_t x74 = INT64_MIN;
static int32_t x76 = -1;
volatile int64_t t20 = INT64_MIN;
int8_t x90 = INT8_MIN;
static int16_t x93 = INT16_MIN;
volatile int64_t x94 = -1LL;
volatile int64_t t22 = 237074LL;
volatile int64_t t23 = 168293LL;
int8_t x102 = 1;
volatile int64_t t24 = -16LL;
int32_t x107 = INT32_MAX;
volatile uint64_t t25 = 35761298525891LLU;
volatile int8_t x109 = 0;
int8_t x112 = INT8_MIN;
int8_t x116 = INT8_MIN;
uint64_t t27 = 15429248530992900LLU;
uint16_t x117 = UINT16_MAX;
int16_t x119 = 108;
volatile int32_t t28 = -121389;
int16_t x121 = INT16_MIN;
int32_t x125 = INT32_MAX;
uint32_t x129 = 1779428222U;
static int8_t x133 = -7;
uint16_t x139 = UINT16_MAX;
static volatile uint64_t t36 = 2982983LLU;
uint16_t x154 = 12U;
int8_t x156 = INT8_MIN;
volatile uint64_t x158 = 40168053600705LLU;
int64_t x161 = -1LL;
static int8_t x176 = INT8_MIN;
int8_t x183 = INT8_MIN;
volatile int32_t x188 = INT32_MIN;
int32_t x190 = 0;
volatile uint32_t t46 = 24579556U;
int16_t x193 = INT16_MIN;
int32_t x194 = INT32_MIN;
volatile int64_t x195 = -20817534LL;
volatile int64_t t47 = -220519945925LL;
volatile int32_t x200 = -14;
uint8_t x214 = 3U;
int64_t x215 = INT64_MIN;
static uint8_t x217 = UINT8_MAX;
volatile int64_t t54 = 75260769107LL;
int16_t x229 = -1;
int8_t x234 = -8;
int64_t x238 = 1LL;
static int8_t x241 = 1;
uint64_t x251 = UINT64_MAX;
int16_t x252 = INT16_MIN;
int64_t x254 = INT64_MIN;
uint32_t x256 = UINT32_MAX;
uint8_t x265 = UINT8_MAX;
static uint64_t x266 = 1LLU;
uint16_t x267 = UINT16_MAX;
uint64_t x270 = UINT64_MAX;
volatile uint64_t t66 = 1764895849LLU;
volatile uint16_t x273 = 1U;
volatile int16_t x282 = 7297;
uint64_t x286 = UINT64_MAX;
int32_t x290 = INT32_MAX;
int8_t x294 = INT8_MIN;
int32_t x298 = INT32_MIN;
static volatile int32_t t73 = 147;
int64_t x307 = 23626427764LL;
int32_t x310 = -1;
int8_t x312 = 0;
uint64_t t76 = 7975047705599744700LLU;
static int32_t x319 = -259043644;
uint8_t x323 = UINT8_MAX;
int32_t x325 = 7662;
volatile int64_t t80 = -1101117LL;
static uint32_t x336 = UINT32_MAX;
int8_t x338 = INT8_MIN;
int16_t x341 = INT16_MIN;
int16_t x345 = -254;
int32_t t84 = -53675737;
int8_t x351 = INT8_MIN;
int8_t x365 = 3;
int16_t x367 = -28;
int32_t x375 = INT32_MIN;
int64_t t89 = -1520300658935547LL;
int64_t x378 = 34709258254547050LL;
int64_t t90 = -95236LL;
int16_t x385 = -1;
volatile int8_t x392 = INT8_MAX;
int16_t x395 = INT16_MAX;
volatile uint32_t t94 = 481596U;
static uint16_t x398 = 2U;
static uint8_t x400 = UINT8_MAX;
volatile uint8_t x406 = 35U;
uint64_t x409 = UINT64_MAX;
int32_t x413 = INT32_MIN;
volatile uint32_t t100 = 112U;
volatile int64_t t101 = 258504466LL;
uint8_t x426 = 85U;
static int16_t x434 = -1;
volatile uint64_t x436 = 14719LLU;
int64_t x441 = 1LL;
uint8_t x442 = 4U;
int16_t x446 = INT16_MAX;
volatile int32_t t108 = -866;
static uint8_t x454 = UINT8_MAX;
int8_t x455 = -1;
static int16_t x456 = INT16_MAX;
volatile int32_t t109 = 3;
volatile int32_t t110 = -835;
int8_t x462 = -33;
volatile int16_t x464 = 1;
volatile int32_t t111 = -58984;
volatile int8_t x465 = -35;
int16_t x467 = -3;
int16_t x477 = -1;
uint64_t x479 = UINT64_MAX;
volatile uint64_t t115 = 3274408272324LLU;
volatile int64_t x485 = -10103804113157154LL;
uint64_t x501 = 52271LLU;
static uint16_t x502 = UINT16_MAX;
int16_t x504 = INT16_MIN;
volatile int64_t t124 = -15LL;
int8_t x522 = INT8_MIN;
int16_t x528 = INT16_MAX;
static int8_t x544 = 21;
uint64_t t131 = 2716LLU;
uint8_t x545 = 15U;
int8_t x547 = INT8_MAX;
int32_t x548 = INT32_MIN;
uint16_t x550 = UINT16_MAX;
volatile uint16_t x556 = 495U;
volatile int8_t x561 = INT8_MIN;
uint16_t x563 = 1U;
int32_t x570 = 0;
int8_t x573 = -1;
volatile int32_t x574 = -422137;
int32_t x575 = INT32_MIN;
static int8_t x576 = INT8_MIN;
uint64_t x577 = 7891448LLU;
volatile int32_t x578 = INT32_MAX;
int16_t x597 = -1;
int64_t x606 = INT64_MIN;
volatile int64_t t146 = -2LL;
int32_t x612 = -1;
int16_t x615 = 1;
int8_t x616 = INT8_MAX;
volatile int32_t t150 = -65296;
uint8_t x627 = UINT8_MAX;
int16_t x629 = -1;
volatile int32_t x633 = -223;
int64_t x634 = INT64_MAX;
static volatile uint16_t x635 = 1965U;
volatile int64_t t153 = 1292123588506150818LL;
int16_t x638 = 0;
uint64_t t154 = 7043349939LLU;
int32_t x644 = -1448865;
static volatile int32_t t156 = -2;
static uint16_t x650 = 3U;
volatile uint16_t x654 = UINT16_MAX;
static uint64_t x658 = 8925LLU;
volatile uint64_t t159 = 16872LLU;
volatile int32_t x672 = INT32_MAX;
uint64_t x676 = 210034LLU;
volatile uint64_t t163 = 2481LLU;
int64_t x680 = INT64_MIN;
static int8_t x683 = INT8_MIN;
int64_t x686 = -133448178LL;
static int8_t x688 = 47;
volatile int64_t t166 = 364955010223654637LL;
volatile int64_t t167 = 67611939701672LL;
static int8_t x693 = -1;
int64_t x694 = -1LL;
int16_t x708 = -1;
int32_t x709 = -5;
volatile int8_t x712 = 0;
int8_t x713 = INT8_MAX;
static int64_t t173 = 3772864725LL;
int64_t x718 = 0LL;
uint64_t t174 = 1268025LLU;
static int16_t x724 = 746;
uint32_t x731 = UINT32_MAX;
static int32_t x734 = -400190;
volatile int32_t x735 = -1;
static int16_t x739 = 4169;
int64_t t179 = 2LL;
volatile int64_t t180 = -17577906LL;
uint32_t x745 = UINT32_MAX;
static uint64_t x752 = 42726395590595870LLU;
uint64_t t182 = 971047LLU;
static int32_t x765 = INT32_MIN;
volatile uint64_t t186 = 2974595LLU;
int32_t x775 = -1;
static int64_t t189 = 0LL;
volatile int16_t x781 = -151;
uint64_t t191 = 1432902718265LLU;
int16_t x790 = INT16_MIN;
uint32_t x794 = 4U;
uint32_t t193 = 6603U;
uint16_t x805 = 19849U;
int64_t t196 = -109LL;
int16_t x814 = INT16_MIN;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint8_t x3 = UINT8_MAX;
	int64_t t0 = 1035150LL;

    t0 = (x1^((x2/x3)|x4));

    if (t0 != -36170088549678978LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static uint64_t x6 = 47384LLU;
	volatile int16_t x7 = -1;
	static uint64_t x8 = 420LLU;
	volatile uint64_t t1 = 4LLU;

    t1 = (x5^((x6/x7)|x8));

    if (t1 != 9223372036854776228LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static volatile uint64_t x10 = 32610475LLU;
	volatile int16_t x11 = -300;
	static volatile int64_t x12 = 331529LL;
	volatile uint64_t t2 = 647072233687265739LLU;

    t2 = (x9^((x10/x11)|x12));

    if (t2 != 9223372036855107337LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1130U;
	int8_t x14 = INT8_MIN;
	static int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 998022903;

    t3 = (x13^((x14/x15)|x16));

    if (t3 != -31638) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	int64_t x18 = INT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile int64_t t4 = 2LL;

    t4 = (x17^((x18/x19)|x20));

    if (t4 != 89LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t5 = -1482226531703247394LL;

    t5 = (x21^((x22/x23)|x24));

    if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	int32_t x28 = INT32_MIN;
	int64_t t6 = 5472109LL;

    t6 = (x25^((x26/x27)|x28));

    if (t6 != -9223372036854513657LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = 8525U;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;
	volatile int64_t t7 = 0LL;

    t7 = (x29^((x30/x31)|x32));

    if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -41016;

    t8 = (x33^((x34/x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -5;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	static int8_t x40 = -14;
	volatile int32_t t9 = 32244;

    t9 = (x37^((x38/x39)|x40));

    if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int8_t x43 = 1;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t10 = -22;

    t10 = (x41^((x42/x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = INT32_MIN;
	int32_t x46 = -3556753;
	uint16_t x47 = 772U;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 8912825729697LL;

    t11 = (x45^((x46/x47)|x48));

    if (t11 != 2147479041LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 43183225968494LLU;
	volatile uint64_t t12 = 14619143LLU;

    t12 = (x49^((x50/x51)|x52));

    if (t12 != 18446700890483583121LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 87U;
	int64_t x54 = 16737672592335LL;
	int8_t x55 = 1;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 23126141LLU;

    t13 = (x53^((x54/x55)|x56));

    if (t13 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -6;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;

    t14 = (x57^((x58/x59)|x60));

    if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = 1193182LL;
	int16_t x63 = -1;
	static volatile int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -309195257996LL;

    t15 = (x61^((x62/x63)|x64));

    if (t15 != -1193169LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -770883362543LL;
	volatile int32_t x66 = -1;
	volatile uint64_t x67 = 4932354LLU;
	uint8_t x68 = 36U;
	volatile uint64_t t16 = 2331057734275LLU;

    t16 = (x65^((x66/x67)|x68));

    if (t16 != 18446739857225972271LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 1;
	volatile int8_t x70 = -1;
	uint64_t x71 = 7295187256835LLU;
	volatile uint8_t x72 = 3U;
	volatile uint64_t t17 = 10295875LLU;

    t17 = (x69^((x70/x71)|x72));

    if (t17 != 2528618LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	int16_t x75 = INT16_MAX;
	volatile uint64_t t18 = 167308444259175679LLU;

    t18 = (x73^((x74/x75)|x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x77 = 538U;
	int16_t x78 = INT16_MAX;
	volatile int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t19 = -125LL;

    t19 = (x77^((x78/x79)|x80));

    if (t19 != 9223372036854775269LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	int8_t x88 = -1;

    t20 = (x85^((x86/x87)|x88));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x91 = 3978U;
	volatile int16_t x92 = INT16_MIN;
	static uint32_t t21 = 118U;

    t21 = (x89^((x90/x91)|x92));

    if (t21 != 1536U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x95 = -715619036LL;
	uint8_t x96 = UINT8_MAX;

    t22 = (x93^((x94/x95)|x96));

    if (t22 != -32513LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MAX;
	static int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	volatile int16_t x100 = INT16_MIN;

    t23 = (x97^((x98/x99)|x100));

    if (t23 != -32641LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x101 = INT32_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	static int64_t x104 = -1LL;

    t24 = (x101^((x102/x103)|x104));

    if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MAX;
	static uint64_t x106 = 10236364896995509LLU;
	static int8_t x108 = -1;

    t25 = (x105^((x106/x107)|x108));

    if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = INT64_MIN;
	uint16_t x111 = UINT16_MAX;
	int64_t t26 = 313758830751708723LL;

    t26 = (x109^((x110/x111)|x112));

    if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 276971LLU;
	int16_t x114 = 3;
	int32_t x115 = INT32_MAX;

    t27 = (x113^((x114/x115)|x116));

    if (t27 != 18446744073709274731LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x118 = -1;
	int8_t x120 = INT8_MIN;

    t28 = (x117^((x118/x119)|x120));

    if (t28 != -65409) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x122 = 2616U;
	static int16_t x123 = -9;
	uint16_t x124 = 0U;
	uint32_t t29 = 104U;

    t29 = (x121^((x122/x123)|x124));

    if (t29 != 4294934528U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x126 = 1U;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;
	volatile int32_t t30 = INT32_MIN;

    t30 = (x125^((x126/x127)|x128));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x130 = 11385540U;
	static int32_t x131 = INT32_MAX;
	int32_t x132 = -12;
	volatile uint32_t t31 = 442U;

    t31 = (x129^((x130/x131)|x132));

    if (t31 != 2515539082U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 125827965U;
	static int8_t x135 = 15;
	int32_t x136 = INT32_MIN;
	uint32_t t32 = 6U;

    t32 = (x133^((x134/x135)|x136));

    if (t32 != 2139095114U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 97100525655507LLU;
	volatile uint8_t x138 = UINT8_MAX;
	uint16_t x140 = 22U;
	static volatile uint64_t t33 = 53773LLU;

    t33 = (x137^((x138/x139)|x140));

    if (t33 != 97100525655493LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 1LLU;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;
	uint64_t t34 = 1LLU;

    t34 = (x141^((x142/x143)|x144));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	uint64_t x146 = 36330831736922LLU;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = 798U;
	uint64_t t35 = 117163072733LLU;

    t35 = (x145^((x146/x147)|x148));

    if (t35 != 18446744073709550817LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x149 = UINT64_MAX;
	uint8_t x150 = 42U;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 235U;

    t36 = (x149^((x150/x151)|x152));

    if (t36 != 18446744073709551380LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -27;
	int16_t x155 = INT16_MIN;
	volatile int32_t t37 = 1;

    t37 = (x153^((x154/x155)|x156));

    if (t37 != 101) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = 0;
	int32_t x159 = INT32_MIN;
	volatile uint8_t x160 = 70U;
	volatile uint64_t t38 = 1455980254083005LLU;

    t38 = (x157^((x158/x159)|x160));

    if (t38 != 70LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x162 = INT32_MAX;
	volatile int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	volatile int64_t t39 = -65228472LL;

    t39 = (x161^((x162/x163)|x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x165 = -28;
	uint8_t x166 = 24U;
	static int32_t x167 = -2219;
	static volatile int8_t x168 = -4;
	int32_t t40 = -10215840;

    t40 = (x165^((x166/x167)|x168));

    if (t40 != 24) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -1;
	int32_t x170 = -1;
	static int32_t x171 = 48429;
	uint64_t x172 = 118491591694784757LLU;
	volatile uint64_t t41 = 253761261LLU;

    t41 = (x169^((x170/x171)|x172));

    if (t41 != 18328252482014766858LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	static uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	int32_t t42 = 144880147;

    t42 = (x173^((x174/x175)|x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = 62;
	uint32_t x178 = 1190U;
	uint8_t x179 = UINT8_MAX;
	volatile int64_t x180 = INT64_MIN;
	int64_t t43 = 101239411444LL;

    t43 = (x177^((x178/x179)|x180));

    if (t43 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = 13LLU;
	int8_t x182 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t44 = 495LLU;

    t44 = (x181^((x182/x183)|x184));

    if (t44 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 458653051868LLU;
	volatile uint8_t x186 = 40U;
	static uint16_t x187 = 661U;
	uint64_t t45 = 16215LLU;

    t45 = (x185^((x186/x187)|x188));

    if (t45 != 18446743615387085788LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x189 = 29U;
	static int8_t x191 = 5;
	int32_t x192 = 1355117;

    t46 = (x189^((x190/x191)|x192));

    if (t46 != 1355120U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x196 = UINT16_MAX;

    t47 = (x193^((x194/x195)|x196));

    if (t47 != -32769LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = -1499860LL;
	int32_t x198 = -701203;
	volatile int64_t x199 = -1LL;
	static int64_t t48 = 11120821037970854LL;

    t48 = (x197^((x198/x199)|x200));

    if (t48 != 1499871LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = 250388097;
	static volatile uint64_t x202 = 1126718LLU;
	static uint32_t x203 = UINT32_MAX;
	static int8_t x204 = -63;
	volatile uint64_t t49 = 5708004LLU;

    t49 = (x201^((x202/x203)|x204));

    if (t49 != 18446744073459163456LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MAX;
	uint16_t x208 = 6135U;
	volatile int64_t t50 = INT64_MAX;

    t50 = (x205^((x206/x207)|x208));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x209 = 413U;
	int8_t x210 = 29;
	int16_t x211 = -1;
	static int8_t x212 = INT8_MIN;
	int32_t t51 = 103078;

    t51 = (x209^((x210/x211)|x212));

    if (t51 != -386) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x213 = -1;
	uint8_t x216 = 10U;
	static volatile int64_t t52 = 1150053LL;

    t52 = (x213^((x214/x215)|x216));

    if (t52 != -11LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x218 = -1;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = -7186012837710LL;
	int64_t t53 = -1149399243748707LL;

    t53 = (x217^((x218/x219)|x220));

    if (t53 != -7186012837811LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = -1;
	uint32_t x222 = 54752U;
	int64_t x223 = -1LL;
	static int32_t x224 = INT32_MIN;

    t54 = (x221^((x222/x223)|x224));

    if (t54 != 54751LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -1LL;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 5022U;
	int8_t x228 = INT8_MAX;
	int64_t t55 = -67642647453357204LL;

    t55 = (x225^((x226/x227)|x228));

    if (t55 != -855296LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x230 = -1;
	int64_t x231 = 3715989LL;
	uint64_t x232 = 92749350448556888LLU;
	uint64_t t56 = 346989206918LLU;

    t56 = (x229^((x230/x231)|x232));

    if (t56 != 18353994723260994727LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = -1;
	int8_t x235 = -1;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t57 = -49977313;

    t57 = (x233^((x234/x235)|x236));

    if (t57 != -65536) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = 34U;
	static volatile int64_t x239 = INT64_MAX;
	volatile uint32_t x240 = 58563384U;
	int64_t t58 = -6726603178281653LL;

    t58 = (x237^((x238/x239)|x240));

    if (t58 != 58563354LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x242 = -122;
	int32_t x243 = -16;
	uint8_t x244 = 6U;
	int32_t t59 = -1134;

    t59 = (x241^((x242/x243)|x244));

    if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = -21;
	uint16_t x246 = 3474U;
	uint16_t x247 = 1259U;
	int64_t x248 = 6501756628898067LL;
	int64_t t60 = -1560942402649375521LL;

    t60 = (x245^((x246/x247)|x248));

    if (t60 != -6501756628898056LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = -2146;
	uint8_t x250 = 3U;
	uint64_t t61 = 3521476212671511LLU;

    t61 = (x249^((x250/x251)|x252));

    if (t61 != 30622LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = -924468759529LL;
	volatile int64_t x255 = INT64_MIN;
	int64_t t62 = -14LL;

    t62 = (x253^((x254/x255)|x256));

    if (t62 != -926662145048LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x257 = -696;
	int8_t x258 = -1;
	int64_t x259 = 43771970321041967LL;
	int32_t x260 = 492;
	int64_t t63 = 958338074188326709LL;

    t63 = (x257^((x258/x259)|x260));

    if (t63 != -860LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = 3118825U;
	uint32_t x262 = 48003U;
	static int8_t x263 = 52;
	static int8_t x264 = INT8_MIN;
	static uint32_t t64 = 85448364U;

    t64 = (x261^((x262/x263)|x264));

    if (t64 != 4291848562U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x268 = INT64_MIN;
	uint64_t t65 = 127574078098LLU;

    t65 = (x265^((x266/x267)|x268));

    if (t65 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x269 = UINT8_MAX;
	int16_t x271 = INT16_MAX;
	static int32_t x272 = -13;

    t66 = (x269^((x270/x271)|x272));

    if (t66 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = -149822530032LL;
	int64_t t67 = 1536627119LL;

    t67 = (x273^((x274/x275)|x276));

    if (t67 != -149822530031LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x277 = INT64_MIN;
	int16_t x278 = -1;
	static uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x277^((x278/x279)|x280));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x281 = 2U;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = 1024139835778135LL;
	int64_t t69 = -6924576LL;

    t69 = (x281^((x282/x283)|x284));

    if (t69 != -43LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x285 = -191;
	volatile int16_t x287 = -3806;
	int8_t x288 = INT8_MAX;
	volatile uint64_t t70 = 111021707644133LLU;

    t70 = (x285^((x286/x287)|x288));

    if (t70 != 18446744073709551422LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x289 = INT16_MIN;
	volatile uint8_t x291 = 1U;
	int16_t x292 = 3;
	int32_t t71 = 7251;

    t71 = (x289^((x290/x291)|x292));

    if (t71 != -2147450881) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MIN;
	uint16_t x295 = 155U;
	uint64_t x296 = 15451089377222LLU;
	volatile uint64_t t72 = 8831LLU;

    t72 = (x293^((x294/x295)|x296));

    if (t72 != 18446728622620174406LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 259U;

    t73 = (x297^((x298/x299)|x300));

    if (t73 != 65663) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	int64_t x303 = -1LL;
	int8_t x304 = 10;
	volatile int64_t t74 = -25134774516LL;

    t74 = (x301^((x302/x303)|x304));

    if (t74 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x305 = 361966785U;
	int64_t x306 = -98432717789267156LL;
	volatile int64_t x308 = -1LL;
	volatile int64_t t75 = 50276LL;

    t75 = (x305^((x306/x307)|x308));

    if (t75 != -361966786LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x309 = 21374887744LLU;
	static int32_t x311 = INT32_MIN;

    t76 = (x309^((x310/x311)|x312));

    if (t76 != 21374887744LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = 423797LLU;
	volatile uint8_t x314 = UINT8_MAX;
	static uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	static volatile uint64_t t77 = 3725LLU;

    t77 = (x313^((x314/x315)|x316));

    if (t77 != 18446744073709127925LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x317 = 21072546148676071LLU;
	uint8_t x318 = 53U;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t78 = 117216422865LLU;

    t78 = (x317^((x318/x319)|x320));

    if (t78 != 9244444583003451879LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x321 = -1;
	int8_t x322 = -1;
	uint8_t x324 = 23U;
	int32_t t79 = -223;

    t79 = (x321^((x322/x323)|x324));

    if (t79 != -24) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x326 = INT64_MAX;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;

    t80 = (x325^((x326/x327)|x328));

    if (t80 != -72057591890451951LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = 108524068357082069LL;
	uint16_t x334 = 209U;
	uint32_t x335 = UINT32_MAX;
	int64_t t81 = -24854LL;

    t81 = (x333^((x334/x335)|x336));

    if (t81 != 108524066746332202LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x337 = 2U;
	static volatile int64_t x339 = -936278LL;
	int64_t x340 = INT64_MIN;
	int64_t t82 = -2253961LL;

    t82 = (x337^((x338/x339)|x340));

    if (t82 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x342 = -1;
	uint16_t x343 = 4114U;
	uint16_t x344 = 29523U;
	int32_t t83 = -104;

    t83 = (x341^((x342/x343)|x344));

    if (t83 != -3245) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x346 = -1;
	uint8_t x347 = 49U;
	int32_t x348 = INT32_MAX;

    t84 = (x345^((x346/x347)|x348));

    if (t84 != -2147483395) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = 0U;
	static int8_t x350 = INT8_MAX;
	volatile int64_t x352 = 13607615071464853LL;
	static int64_t t85 = 54531715LL;

    t85 = (x349^((x350/x351)|x352));

    if (t85 != 13607615071464853LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x353 = -1;
	uint64_t x354 = 1691791137294524LLU;
	int32_t x355 = INT32_MIN;
	volatile uint8_t x356 = 6U;
	volatile uint64_t t86 = 9233463624907LLU;

    t86 = (x353^((x354/x355)|x356));

    if (t86 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	static int32_t x358 = -36;
	static int16_t x359 = -2721;
	int16_t x360 = INT16_MAX;
	volatile int32_t t87 = -88371;

    t87 = (x357^((x358/x359)|x360));

    if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x366 = INT8_MAX;
	int32_t x368 = -27309444;
	volatile int32_t t88 = 761035;

    t88 = (x365^((x366/x367)|x368));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = -24026180;
	int64_t x374 = 88388500452107444LL;
	static volatile int32_t x376 = INT32_MIN;

    t89 = (x373^((x374/x375)|x376));

    if (t89 != 52073982LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MAX;
	static volatile uint8_t x379 = UINT8_MAX;
	volatile int64_t x380 = INT64_MIN;

    t90 = (x377^((x378/x379)|x380));

    if (t90 != -9223235922116522694LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = INT32_MAX;
	volatile int8_t x382 = -23;
	volatile int32_t x383 = INT32_MAX;
	int16_t x384 = INT16_MAX;
	volatile int32_t t91 = -1725331;

    t91 = (x381^((x382/x383)|x384));

    if (t91 != 2147450880) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t92 = INT64_MIN;

    t92 = (x385^((x386/x387)|x388));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = -174600219;
	int8_t x390 = -1;
	static int64_t x391 = INT64_MIN;
	int64_t t93 = 182069007889693LL;

    t93 = (x389^((x390/x391)|x392));

    if (t93 != -174600294LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = 160649966U;
	static int8_t x396 = -5;

    t94 = (x393^((x394/x395)|x396));

    if (t94 != 4294901760U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = INT8_MIN;
	static int16_t x399 = 2327;
	static int32_t t95 = 210690230;

    t95 = (x397^((x398/x399)|x400));

    if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = INT32_MAX;
	static int8_t x402 = INT8_MAX;
	static uint16_t x403 = 142U;
	volatile int64_t x404 = -1LL;
	int64_t t96 = 5029210204441LL;

    t96 = (x401^((x402/x403)|x404));

    if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x405 = 81U;
	volatile int32_t x407 = INT32_MIN;
	volatile int16_t x408 = -1;
	static volatile int32_t t97 = 2;

    t97 = (x405^((x406/x407)|x408));

    if (t97 != -82) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x410 = -1LL;
	volatile uint32_t x411 = UINT32_MAX;
	int16_t x412 = -1;
	volatile uint64_t t98 = 4228238260LLU;

    t98 = (x409^((x410/x411)|x412));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MAX;
	volatile int8_t x416 = INT8_MIN;
	int64_t t99 = 7208880352LL;

    t99 = (x413^((x414/x415)|x416));

    if (t99 != 2147483520LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = -32;
	int8_t x418 = 30;
	static uint32_t x419 = UINT32_MAX;
	static volatile uint32_t x420 = UINT32_MAX;

    t100 = (x417^((x418/x419)|x420));

    if (t100 != 31U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	static uint32_t x424 = 4U;

    t101 = (x421^((x422/x423)|x424));

    if (t101 != -281474976743420LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x425 = UINT16_MAX;
	volatile uint8_t x427 = 3U;
	int32_t x428 = INT32_MAX;
	int32_t t102 = 13367;

    t102 = (x425^((x426/x427)|x428));

    if (t102 != 2147418112) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x429 = INT64_MIN;
	volatile int16_t x430 = 2494;
	int16_t x431 = -1;
	int32_t x432 = -1;
	static volatile int64_t t103 = INT64_MAX;

    t103 = (x429^((x430/x431)|x432));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MAX;
	uint64_t x435 = 7705497LLU;
	uint64_t t104 = 901743765175LLU;

    t104 = (x433^((x434/x435)|x436));

    if (t104 != 2392769037824LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = INT64_MIN;
	uint16_t x438 = UINT16_MAX;
	uint32_t x439 = UINT32_MAX;
	int8_t x440 = -2;
	int64_t t105 = -3348901948205990LL;

    t105 = (x437^((x438/x439)|x440));

    if (t105 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MAX;
	int64_t t106 = -340875847972LL;

    t106 = (x441^((x442/x443)|x444));

    if (t106 != 2147483646LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = INT32_MIN;
	uint8_t x447 = UINT8_MAX;
	int16_t x448 = 0;
	int32_t t107 = -48069;

    t107 = (x445^((x446/x447)|x448));

    if (t107 != -2147483520) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = -1;
	int32_t x450 = INT32_MAX;
	int16_t x451 = INT16_MIN;
	volatile uint8_t x452 = 3U;

    t108 = (x449^((x450/x451)|x452));

    if (t108 != 65532) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x453 = -5;

    t109 = (x453^((x454/x455)|x456));

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = INT16_MAX;
	static int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MAX;
	int16_t x460 = -423;

    t110 = (x457^((x458/x459)|x460));

    if (t110 != -32512) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x461 = 2U;
	static int32_t x463 = -6;

    t111 = (x461^((x462/x463)|x464));

    if (t111 != 7) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x466 = 84059162831662LLU;
	int16_t x468 = -1;
	static volatile uint64_t t112 = 282211753671115106LLU;

    t112 = (x465^((x466/x467)|x468));

    if (t112 != 34LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x469 = INT16_MIN;
	int32_t x470 = 1818756;
	int32_t x471 = -1;
	int64_t x472 = -1LL;
	int64_t t113 = 27781326LL;

    t113 = (x469^((x470/x471)|x472));

    if (t113 != 32767LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x473 = INT64_MIN;
	int16_t x474 = -5;
	volatile int32_t x475 = -1;
	int64_t x476 = INT64_MAX;
	volatile int64_t t114 = 3287940918251LL;

    t114 = (x473^((x474/x475)|x476));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x478 = 3794;
	int32_t x480 = INT32_MIN;

    t115 = (x477^((x478/x479)|x480));

    if (t115 != 2147483647LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -278699862527357916LL;
	volatile int16_t x482 = 6;
	int32_t x483 = INT32_MAX;
	uint32_t x484 = 4U;
	int64_t t116 = 5170589514912LL;

    t116 = (x481^((x482/x483)|x484));

    if (t116 != -278699862527357920LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MAX;
	static volatile int32_t x488 = INT32_MIN;
	volatile int64_t t117 = -188417LL;

    t117 = (x485^((x486/x487)|x488));

    if (t117 != 10103804113157153LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x489 = INT8_MAX;
	uint32_t x490 = 3234U;
	uint32_t x491 = 6218125U;
	uint16_t x492 = UINT16_MAX;
	static uint32_t t118 = 2665520U;

    t118 = (x489^((x490/x491)|x492));

    if (t118 != 65408U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = INT8_MIN;
	volatile uint32_t x494 = 203380222U;
	uint64_t x495 = 286989507880352755LLU;
	int8_t x496 = INT8_MIN;
	volatile uint64_t t119 = 1696350034095LLU;

    t119 = (x493^((x494/x495)|x496));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x497 = 14U;
	int32_t x498 = INT32_MIN;
	uint32_t x499 = 7258U;
	int16_t x500 = 12074;
	uint32_t t120 = 3360U;

    t120 = (x497^((x498/x499)|x500));

    if (t120 != 307168U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x503 = -1;
	static volatile uint64_t t121 = 821430842761018399LLU;

    t121 = (x501^((x502/x503)|x504));

    if (t121 != 18446744073709505582LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x505 = UINT32_MAX;
	uint32_t x506 = 909653455U;
	int32_t x507 = INT32_MIN;
	uint16_t x508 = UINT16_MAX;
	volatile uint32_t t122 = 909480188U;

    t122 = (x505^((x506/x507)|x508));

    if (t122 != 4294901760U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x509 = -1;
	static int16_t x510 = 1;
	volatile int64_t x511 = INT64_MIN;
	volatile int32_t x512 = INT32_MIN;
	static volatile int64_t t123 = -510588520LL;

    t123 = (x509^((x510/x511)|x512));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x513 = 17495848672911LL;
	uint8_t x514 = UINT8_MAX;
	int8_t x515 = INT8_MAX;
	int32_t x516 = INT32_MIN;

    t124 = (x513^((x514/x515)|x516));

    if (t124 != -17497397371251LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = 197U;
	uint32_t x518 = 6U;
	int16_t x519 = -3800;
	volatile int32_t x520 = 0;
	volatile uint32_t t125 = 1044U;

    t125 = (x517^((x518/x519)|x520));

    if (t125 != 197U) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x521 = 64394468;
	int8_t x523 = INT8_MIN;
	int32_t x524 = INT32_MAX;
	volatile int32_t t126 = -26778;

    t126 = (x521^((x522/x523)|x524));

    if (t126 != 2083089179) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x525 = -1LL;
	static uint32_t x526 = 1159621213U;
	static uint16_t x527 = 1571U;
	static volatile int64_t t127 = 132035827LL;

    t127 = (x525^((x526/x527)|x528));

    if (t127 != -753664LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = INT64_MIN;
	int8_t x530 = -63;
	static uint8_t x531 = 96U;
	static volatile int8_t x532 = -1;
	int64_t t128 = INT64_MAX;

    t128 = (x529^((x530/x531)|x532));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x533 = INT16_MIN;
	uint32_t x534 = 937852U;
	static int16_t x535 = INT16_MIN;
	static int8_t x536 = INT8_MIN;
	uint32_t t129 = 10626U;

    t129 = (x533^((x534/x535)|x536));

    if (t129 != 32640U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = INT8_MIN;
	volatile int32_t x538 = INT32_MAX;
	volatile uint16_t x539 = 983U;
	int8_t x540 = INT8_MIN;
	int32_t t130 = 810;

    t130 = (x537^((x538/x539)|x540));

    if (t130 != 46) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = 260837LLU;
	volatile int64_t x542 = -1LL;
	static int16_t x543 = -1;

    t131 = (x541^((x542/x543)|x544));

    if (t131 != 260848LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x546 = -4355670LL;
	int64_t t132 = -84926LL;

    t132 = (x545^((x546/x547)|x548));

    if (t132 != -34297LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x549 = -5;
	uint32_t x551 = 67U;
	volatile int16_t x552 = INT16_MAX;
	static uint32_t t133 = 2041104U;

    t133 = (x549^((x550/x551)|x552));

    if (t133 != 4294934532U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = INT32_MIN;
	volatile int16_t x554 = -1;
	uint64_t x555 = 15880081576756977LLU;
	volatile uint64_t t134 = 1583238612LLU;

    t134 = (x553^((x554/x555)|x556));

    if (t134 != 18446744071562069487LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = INT32_MIN;
	int16_t x558 = -6268;
	uint8_t x559 = UINT8_MAX;
	int16_t x560 = -189;
	static volatile int32_t t135 = 451918;

    t135 = (x557^((x558/x559)|x560));

    if (t135 != 2147483627) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x562 = INT64_MIN;
	volatile int32_t x564 = 6;
	volatile int64_t t136 = 959LL;

    t136 = (x561^((x562/x563)|x564));

    if (t136 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = INT8_MIN;
	int16_t x566 = -1;
	int32_t x567 = 4678872;
	volatile int64_t x568 = INT64_MIN;
	static volatile int64_t t137 = 7762740887175843LL;

    t137 = (x565^((x566/x567)|x568));

    if (t137 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = UINT32_MAX;
	uint8_t x571 = 34U;
	volatile int16_t x572 = -6301;
	volatile uint32_t t138 = 54U;

    t138 = (x569^((x570/x571)|x572));

    if (t138 != 6300U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t t139 = -1;

    t139 = (x573^((x574/x575)|x576));

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x579 = INT64_MAX;
	int16_t x580 = INT16_MIN;
	uint64_t t140 = 6383063LLU;

    t140 = (x577^((x578/x579)|x580));

    if (t140 != 18446744073701681656LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x581 = 18U;
	uint16_t x582 = UINT16_MAX;
	uint64_t x583 = 7LLU;
	int16_t x584 = INT16_MIN;
	static uint64_t t141 = 145635LLU;

    t141 = (x581^((x582/x583)|x584));

    if (t141 != 18446744073709528192LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x585 = 306U;
	uint8_t x586 = 8U;
	static int64_t x587 = INT64_MAX;
	uint64_t x588 = 1448627785415533514LLU;
	uint64_t t142 = 387242068877LLU;

    t142 = (x585^((x586/x587)|x588));

    if (t142 != 1448627785415533304LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = INT32_MAX;
	int64_t x590 = INT64_MIN;
	static int16_t x591 = INT16_MIN;
	int16_t x592 = INT16_MIN;
	volatile int64_t t143 = -1104248458984099LL;

    t143 = (x589^((x590/x591)|x592));

    if (t143 != -2147450881LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x598 = INT64_MAX;
	volatile uint16_t x599 = 4158U;
	uint32_t x600 = 1U;
	int64_t t144 = -14LL;

    t144 = (x597^((x598/x599)|x600));

    if (t144 != -2218223193086768LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = -246879755;
	uint64_t x602 = 1208805LLU;
	int16_t x603 = INT16_MAX;
	static uint32_t x604 = UINT32_MAX;
	uint64_t t145 = 1224877824115299LLU;

    t145 = (x601^((x602/x603)|x604));

    if (t145 != 18446744069661464074LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x607 = UINT32_MAX;
	int16_t x608 = INT16_MIN;

    t146 = (x605^((x606/x607)|x608));

    if (t146 != 32640LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x609 = INT64_MIN;
	volatile uint16_t x610 = 0U;
	volatile int64_t x611 = INT64_MIN;
	volatile int64_t t147 = INT64_MAX;

    t147 = (x609^((x610/x611)|x612));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x613 = 2LL;
	uint64_t x614 = UINT64_MAX;
	static uint64_t t148 = 2557753135357945873LLU;

    t148 = (x613^((x614/x615)|x616));

    if (t148 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x617 = -1;
	static uint16_t x618 = UINT16_MAX;
	uint32_t x619 = 3722U;
	int32_t x620 = INT32_MAX;
	uint32_t t149 = 189515078U;

    t149 = (x617^((x618/x619)|x620));

    if (t149 != 2147483648U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x621 = UINT8_MAX;
	static int16_t x622 = INT16_MAX;
	int16_t x623 = INT16_MIN;
	int8_t x624 = INT8_MIN;

    t150 = (x621^((x622/x623)|x624));

    if (t150 != -129) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = 7;
	int8_t x626 = 2;
	int16_t x628 = -1;
	int32_t t151 = 0;

    t151 = (x625^((x626/x627)|x628));

    if (t151 != -8) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x630 = -1;
	int32_t x631 = -1;
	int64_t x632 = INT64_MAX;
	int64_t t152 = INT64_MIN;

    t152 = (x629^((x630/x631)|x632));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x636 = -31;

    t153 = (x633^((x634/x635)|x636));

    if (t153 != 214LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x637 = INT32_MIN;
	uint64_t x639 = 241306072LLU;
	static volatile uint32_t x640 = 103U;

    t154 = (x637^((x638/x639)|x640));

    if (t154 != 18446744071562068071LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = INT32_MAX;
	volatile uint32_t x642 = 7797U;
	int32_t x643 = INT32_MIN;
	static volatile uint32_t t155 = 89513U;

    t155 = (x641^((x642/x643)|x644));

    if (t155 != 2148932512U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x645 = 1;
	int16_t x646 = 0;
	uint8_t x647 = UINT8_MAX;
	uint16_t x648 = 16U;

    t156 = (x645^((x646/x647)|x648));

    if (t156 != 17) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x649 = INT64_MAX;
	volatile int64_t x651 = INT64_MIN;
	int32_t x652 = -16310;
	volatile int64_t t157 = -15LL;

    t157 = (x649^((x650/x651)|x652));

    if (t157 != -9223372036854759499LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x653 = 132792677351836LLU;
	static int16_t x655 = INT16_MIN;
	static uint64_t x656 = 2178813223792902LLU;
	volatile uint64_t t158 = 210057860026428LLU;

    t158 = (x653^((x654/x655)|x656));

    if (t158 != 18446611281032199779LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x657 = INT8_MIN;
	volatile int64_t x659 = -11533LL;
	volatile int32_t x660 = -3018;

    t159 = (x657^((x658/x659)|x660));

    if (t159 != 2998LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = INT8_MIN;
	volatile uint8_t x662 = 2U;
	int32_t x663 = 186733;
	int16_t x664 = INT16_MAX;
	static int32_t t160 = -8529;

    t160 = (x661^((x662/x663)|x664));

    if (t160 != -32641) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = INT8_MAX;
	int64_t x666 = INT64_MIN;
	static volatile int64_t x667 = 28LL;
	volatile int8_t x668 = INT8_MIN;
	int64_t t161 = -12938987LL;

    t161 = (x665^((x666/x667)|x668));

    if (t161 != -111LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MIN;
	volatile int8_t x671 = 10;
	int32_t t162 = 1;

    t162 = (x669^((x670/x671)|x672));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x673 = INT8_MIN;
	int32_t x674 = 4087781;
	static uint16_t x675 = UINT16_MAX;

    t163 = (x673^((x674/x675)|x676));

    if (t163 != 18446744073709341694LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x677 = 214LLU;
	static volatile uint16_t x678 = 2U;
	int16_t x679 = INT16_MAX;
	volatile uint64_t t164 = 142650488820526453LLU;

    t164 = (x677^((x678/x679)|x680));

    if (t164 != 9223372036854776022LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x681 = 12U;
	volatile int8_t x682 = -1;
	static volatile int16_t x684 = INT16_MIN;
	int32_t t165 = 6066556;

    t165 = (x681^((x682/x683)|x684));

    if (t165 != -32756) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x685 = INT64_MAX;
	static int32_t x687 = -49318;

    t166 = (x685^((x686/x687)|x688));

    if (t166 != 9223372036854773056LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = 12542;
	int64_t x690 = INT64_MAX;
	uint8_t x691 = 96U;
	int32_t x692 = INT32_MIN;

    t167 = (x689^((x690/x691)|x692));

    if (t167 != -715823701LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x695 = INT16_MIN;
	static volatile int64_t x696 = -1LL;
	int64_t t168 = 253298524774348429LL;

    t168 = (x693^((x694/x695)|x696));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = INT16_MIN;
	static int32_t x698 = INT32_MIN;
	int32_t x699 = 11369;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t169 = -1850371;

    t169 = (x697^((x698/x699)|x700));

    if (t169 != 163839) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x701 = INT8_MAX;
	volatile int64_t x702 = INT64_MIN;
	int64_t x703 = INT64_MIN;
	int32_t x704 = -38830676;
	volatile int64_t t170 = 0LL;

    t170 = (x701^((x702/x703)|x704));

    if (t170 != -38830638LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = INT32_MAX;
	volatile int16_t x706 = -12327;
	int64_t x707 = -2110236395598381LL;
	static volatile int64_t t171 = 766171743331LL;

    t171 = (x705^((x706/x707)|x708));

    if (t171 != -2147483648LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x710 = INT32_MIN;
	static uint32_t x711 = 2U;
	static volatile uint32_t t172 = 1366110U;

    t172 = (x709^((x710/x711)|x712));

    if (t172 != 3221225467U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x714 = INT64_MIN;
	int64_t x715 = INT64_MIN;
	int16_t x716 = INT16_MIN;

    t173 = (x713^((x714/x715)|x716));

    if (t173 != -32642LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x717 = -1LL;
	volatile uint64_t x719 = UINT64_MAX;
	uint32_t x720 = 334591869U;

    t174 = (x717^((x718/x719)|x720));

    if (t174 != 18446744073374959746LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x721 = INT64_MIN;
	static int64_t x722 = INT64_MAX;
	volatile uint8_t x723 = 21U;
	volatile int64_t t175 = 1LL;

    t175 = (x721^((x722/x723)|x724));

    if (t175 != -8784163844623595782LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x726 = 0;
	int32_t x727 = INT32_MAX;
	volatile int16_t x728 = -30;
	volatile int32_t t176 = -6;

    t176 = (x725^((x726/x727)|x728));

    if (t176 != 2147483618) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x729 = -1LL;
	volatile int32_t x730 = -22;
	uint8_t x732 = 6U;
	volatile int64_t t177 = -18061LL;

    t177 = (x729^((x730/x731)|x732));

    if (t177 != -7LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x733 = -10;
	static int16_t x736 = -17;
	volatile int32_t t178 = 499302;

    t178 = (x733^((x734/x735)|x736));

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = -1LL;
	volatile int64_t x738 = 5561LL;
	uint16_t x740 = UINT16_MAX;

    t179 = (x737^((x738/x739)|x740));

    if (t179 != -65536LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = INT32_MIN;
	int32_t x742 = INT32_MIN;
	volatile int64_t x743 = -39753270543LL;
	static int64_t x744 = -2462925943543056803LL;

    t180 = (x741^((x742/x743)|x744));

    if (t180 != 2462925943912904285LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x746 = INT8_MIN;
	uint32_t x747 = 801U;
	volatile int16_t x748 = 26;
	uint32_t t181 = 0U;

    t181 = (x745^((x746/x747)|x748));

    if (t181 != 4289605281U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x749 = -6;
	int8_t x750 = INT8_MAX;
	volatile int32_t x751 = -1;

    t182 = (x749^((x750/x751)|x752));

    if (t182 != 101LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x753 = 315524U;
	int8_t x754 = 12;
	static int32_t x755 = 82;
	int64_t x756 = INT64_MAX;
	static volatile int64_t t183 = -1LL;

    t183 = (x753^((x754/x755)|x756));

    if (t183 != 9223372036854460283LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x757 = INT8_MAX;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = 246U;
	int16_t x760 = -1;
	volatile uint32_t t184 = 0U;

    t184 = (x757^((x758/x759)|x760));

    if (t184 != 4294967168U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x762 = 18;
	uint32_t x763 = UINT32_MAX;
	int16_t x764 = -1;
	static uint64_t t185 = 66318937531LLU;

    t185 = (x761^((x762/x763)|x764));

    if (t185 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x766 = 904892033;
	volatile uint64_t x767 = UINT64_MAX;
	uint8_t x768 = UINT8_MAX;

    t186 = (x765^((x766/x767)|x768));

    if (t186 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = -44;
	uint32_t x770 = UINT32_MAX;
	static int8_t x771 = -52;
	volatile int64_t x772 = INT64_MAX;
	volatile int64_t t187 = -12834067860LL;

    t187 = (x769^((x770/x771)|x772));

    if (t187 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x773 = INT64_MIN;
	int16_t x774 = -1;
	int32_t x776 = -1;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x773^((x774/x775)|x776));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = 1;
	int32_t x778 = 2;
	int64_t x779 = INT64_MAX;
	int32_t x780 = -318;

    t189 = (x777^((x778/x779)|x780));

    if (t189 != -317LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x782 = -1;
	int8_t x783 = -1;
	volatile int64_t x784 = -1LL;
	static volatile int64_t t190 = -5682324959788LL;

    t190 = (x781^((x782/x783)|x784));

    if (t190 != 150LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = 14;
	static int64_t x786 = INT64_MAX;
	uint64_t x787 = UINT64_MAX;
	volatile int16_t x788 = -1;

    t191 = (x785^((x786/x787)|x788));

    if (t191 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = INT32_MAX;
	static int64_t x791 = -528404180860LL;
	volatile int32_t x792 = INT32_MIN;
	static volatile int64_t t192 = -361506298789851LL;

    t192 = (x789^((x790/x791)|x792));

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x793 = INT8_MIN;
	uint32_t x795 = 46122U;
	static uint8_t x796 = UINT8_MAX;

    t193 = (x793^((x794/x795)|x796));

    if (t193 != 4294967167U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MAX;
	int64_t x799 = -1LL;
	int32_t x800 = INT32_MAX;
	volatile uint64_t t194 = 1067159159745025185LLU;

    t194 = (x797^((x798/x799)|x800));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x801 = INT16_MIN;
	int32_t x802 = INT32_MIN;
	uint16_t x803 = 4U;
	int8_t x804 = INT8_MAX;
	static volatile int32_t t195 = -93;

    t195 = (x801^((x802/x803)|x804));

    if (t195 != 536838271) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x806 = -1;
	int64_t x807 = -14536LL;
	int64_t x808 = -1LL;

    t196 = (x805^((x806/x807)|x808));

    if (t196 != -19850LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x809 = 1U;
	int64_t x810 = INT64_MIN;
	static volatile int8_t x811 = INT8_MIN;
	int8_t x812 = INT8_MIN;
	volatile int64_t t197 = 44604249514LL;

    t197 = (x809^((x810/x811)|x812));

    if (t197 != -127LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x813 = -115;
	int8_t x815 = INT8_MIN;
	int32_t x816 = -8874533;
	int32_t t198 = -59;

    t198 = (x813^((x814/x815)|x816));

    if (t198 != 8874582) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = 1;
	uint64_t x818 = 135679944218458LLU;
	static int8_t x819 = -1;
	uint64_t x820 = 47165LLU;
	static volatile uint64_t t199 = 1195148LLU;

    t199 = (x817^((x818/x819)|x820));

    if (t199 != 47164LLU) { NG(); } else { ; }
	
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

