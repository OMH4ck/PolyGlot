
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

static int32_t x5 = INT32_MIN;
static uint32_t x7 = 0U;
uint16_t x13 = UINT16_MAX;
volatile int8_t x14 = INT8_MIN;
static volatile uint32_t t4 = 1340148U;
volatile int64_t x25 = -537018083958LL;
static int32_t x28 = 531702161;
int8_t x34 = -1;
static volatile int32_t x36 = -1;
int64_t x37 = -1LL;
volatile int16_t x40 = INT16_MAX;
uint32_t x42 = 246161214U;
int32_t t10 = -14361040;
int16_t x45 = INT16_MIN;
int64_t x47 = 1008LL;
volatile uint64_t x48 = 3324316LLU;
int16_t x53 = INT16_MIN;
static uint32_t x60 = 56U;
int16_t x66 = INT16_MAX;
static int32_t x67 = -1;
volatile int32_t t16 = -5;
int32_t t17 = 119378;
volatile int32_t x73 = INT32_MIN;
static int64_t x77 = INT64_MIN;
volatile int8_t x80 = 0;
int64_t t19 = 39LL;
int16_t x82 = INT16_MAX;
static uint8_t x88 = 0U;
uint8_t x94 = UINT8_MAX;
static volatile int8_t x99 = INT8_MIN;
int32_t t24 = -26391563;
static int8_t x103 = -5;
uint8_t x104 = 23U;
int32_t x111 = INT32_MIN;
int16_t x116 = 0;
int32_t t28 = 474;
uint32_t x117 = 8U;
static volatile uint64_t t29 = 300394809LLU;
int8_t x134 = 4;
int32_t x137 = INT32_MAX;
volatile int32_t x138 = -85;
uint32_t t34 = 0U;
uint64_t x143 = 5091LLU;
volatile int16_t x144 = INT16_MIN;
static int16_t x146 = INT16_MIN;
volatile int32_t t36 = -84734955;
volatile int32_t t39 = 734810;
static volatile uint64_t x163 = 138977079123732LLU;
volatile int32_t t40 = 489;
static int64_t x169 = INT64_MAX;
int8_t x174 = -1;
int32_t x181 = INT32_MIN;
volatile int64_t x185 = INT64_MIN;
volatile int64_t x190 = INT64_MIN;
static int8_t x192 = INT8_MAX;
static int32_t t47 = 4843013;
uint32_t x196 = UINT32_MAX;
volatile uint8_t x202 = 7U;
volatile int64_t x206 = INT64_MAX;
uint64_t x209 = UINT64_MAX;
int64_t x210 = INT64_MIN;
volatile int16_t x213 = -1;
static volatile uint64_t x214 = 213035954845LLU;
static int8_t x220 = -1;
int16_t x223 = INT16_MIN;
static uint32_t x226 = 3599U;
uint16_t x232 = 4U;
uint64_t x240 = UINT64_MAX;
int32_t x242 = INT32_MAX;
int8_t x248 = INT8_MAX;
static int64_t x251 = -1LL;
static uint32_t x253 = 31129237U;
uint32_t t63 = 15508277U;
uint64_t x257 = 1183LLU;
static uint64_t x258 = 24847236295384890LLU;
volatile int8_t x271 = 2;
int16_t x273 = -37;
volatile uint16_t x278 = 1540U;
static int8_t x280 = INT8_MAX;
uint64_t x285 = UINT64_MAX;
uint32_t x289 = 4938U;
int32_t x290 = 2853290;
static int64_t x293 = -1LL;
volatile int64_t t73 = 12588360628LL;
int32_t x302 = INT32_MIN;
int32_t t78 = 443463880;
static uint16_t x319 = 0U;
int8_t x320 = INT8_MIN;
int32_t t79 = -438491771;
volatile int64_t x321 = INT64_MAX;
uint32_t x322 = UINT32_MAX;
static int16_t x328 = -1;
int32_t x329 = -1;
uint8_t x333 = UINT8_MAX;
int64_t x336 = INT64_MIN;
uint32_t x340 = UINT32_MAX;
volatile uint32_t x341 = 223300U;
int16_t x342 = INT16_MIN;
volatile int8_t x345 = INT8_MAX;
volatile uint64_t x348 = UINT64_MAX;
uint64_t t86 = 112LLU;
int32_t x353 = -1;
uint64_t x355 = 2064950638LLU;
static uint16_t x356 = 0U;
uint64_t x358 = 66716404658365007LLU;
uint8_t x359 = 57U;
static volatile int64_t x360 = INT64_MIN;
uint64_t x363 = UINT64_MAX;
uint16_t x369 = 3U;
int64_t x376 = -1LL;
int32_t x377 = INT32_MIN;
int64_t x378 = 1LL;
volatile uint16_t x380 = 363U;
int8_t x393 = -1;
static int32_t x401 = INT32_MIN;
static int8_t x419 = INT8_MIN;
volatile uint32_t t104 = 98522U;
int8_t x422 = INT8_MAX;
int8_t x435 = INT8_MIN;
int64_t x437 = -1LL;
int32_t x441 = -341297258;
static volatile int64_t x443 = -3751639LL;
int32_t x449 = -1;
int64_t x457 = 4LL;
static int64_t t114 = 90572LL;
uint32_t x461 = 1077881U;
volatile uint64_t t115 = 106813021847LLU;
int8_t x473 = 0;
int16_t x474 = INT16_MAX;
int32_t x488 = 379404;
uint8_t x489 = UINT8_MAX;
volatile int8_t x490 = INT8_MIN;
int64_t x491 = -5454322LL;
uint8_t x497 = 1U;
static uint16_t x499 = UINT16_MAX;
int16_t x500 = -1;
int32_t x504 = -1;
int32_t x510 = INT32_MAX;
int8_t x512 = INT8_MIN;
int32_t t127 = INT32_MIN;
uint64_t x513 = 1LLU;
static int16_t x518 = -1;
volatile int32_t x519 = -1;
volatile int8_t x521 = 30;
static volatile int8_t x540 = -1;
int8_t x543 = INT8_MIN;
int64_t x544 = 89816810266815LL;
volatile int64_t t135 = -1LL;
uint16_t x547 = 10555U;
static int16_t x551 = INT16_MIN;
volatile int8_t x553 = 11;
static int32_t x554 = 185937;
uint64_t t139 = 24023494824100843LLU;
static volatile uint32_t x563 = 19624U;
volatile uint64_t t142 = 1968917398960452LLU;
uint8_t x573 = 1U;
int16_t x578 = INT16_MIN;
volatile int64_t t145 = 95528LL;
volatile uint64_t t147 = 2148231LLU;
uint32_t t148 = 6085655U;
uint32_t x597 = 131U;
uint32_t t149 = 64567772U;
volatile int32_t x603 = INT32_MIN;
static uint32_t x604 = 9952661U;
uint32_t t150 = 298U;
int64_t x612 = INT64_MAX;
uint32_t x619 = UINT32_MAX;
static volatile int32_t t154 = 2;
int64_t x621 = INT64_MAX;
int8_t x623 = -7;
static uint32_t x634 = UINT32_MAX;
uint16_t x641 = 6U;
static int16_t x647 = INT16_MIN;
volatile int8_t x648 = INT8_MIN;
int32_t t161 = -308173554;
static int8_t x665 = INT8_MIN;
int64_t x668 = 1126518LL;
int32_t x676 = INT32_MAX;
static int8_t x689 = -1;
volatile uint64_t t173 = 26904867814210LLU;
uint32_t x702 = 1782U;
static uint64_t x705 = 2123855765990236LLU;
static int32_t x711 = 447166;
volatile int32_t x714 = 368222733;
int32_t x721 = 4;
static volatile int16_t x723 = -54;
uint64_t x724 = 57237LLU;
volatile int8_t x726 = INT8_MIN;
int8_t x728 = INT8_MIN;
uint64_t x733 = 501824438644551828LLU;
volatile int16_t x737 = INT16_MIN;
int64_t x741 = 6126853285025LL;
static uint16_t x748 = 19U;
volatile int32_t x749 = -1;
uint32_t x754 = 2242539U;
int8_t x756 = -1;
static volatile uint16_t x760 = 1294U;
static uint8_t x761 = 48U;
uint64_t x766 = 227256LLU;
int32_t x767 = INT32_MIN;
int32_t x774 = -1;
volatile int8_t x777 = 1;
static volatile uint64_t x782 = UINT64_MAX;
static volatile int8_t x784 = INT8_MAX;
uint32_t x785 = 13071U;
uint64_t x787 = UINT64_MAX;
uint16_t x790 = 59U;
int8_t x793 = INT8_MAX;


void f0(void) {
    	uint32_t x1 = 28948U;
	static int16_t x2 = INT16_MAX;
	volatile int8_t x3 = INT8_MIN;
	int16_t x4 = 108;
	volatile uint32_t t0 = 605U;

    t0 = (x1&((x2>x3)*x4));

    if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x6 = UINT8_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 19480;

    t1 = (x5&((x6>x7)*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1618;
	int8_t x10 = 3;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 3942606;

    t2 = (x9&((x10>x11)*x12));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x15 = 10LLU;
	volatile int32_t x16 = -1;
	int32_t t3 = -1;

    t3 = (x13&((x14>x15)*x16));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = UINT32_MAX;
	int16_t x18 = -1;
	volatile int64_t x19 = -866133292191LL;
	volatile int32_t x20 = 6;

    t4 = (x17&((x18>x19)*x20));

    if (t4 != 6U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 99U;
	int16_t x22 = 52;
	uint16_t x23 = 53U;
	int16_t x24 = -1;
	int32_t t5 = -1281;

    t5 = (x21&((x22>x23)*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x26 = -6289LL;
	int16_t x27 = INT16_MIN;
	volatile int64_t t6 = -1929938794460646694LL;

    t6 = (x25&((x26>x27)*x28));

    if (t6 != 389022080LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 14;
	volatile int16_t x30 = -1;
	static volatile int32_t x31 = INT32_MAX;
	static int16_t x32 = -1;
	int32_t t7 = 7076612;

    t7 = (x29&((x30>x31)*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 48876103;
	int64_t x35 = INT64_MIN;
	static volatile int32_t t8 = 37880078;

    t8 = (x33&((x34>x35)*x36));

    if (t8 != 48876103) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 2472U;
	uint16_t x39 = UINT16_MAX;
	volatile int64_t t9 = 162636607754936LL;

    t9 = (x37&((x38>x39)*x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 744U;
	int8_t x43 = 1;
	int16_t x44 = INT16_MIN;

    t10 = (x41&((x42>x43)*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MAX;
	volatile uint64_t t11 = 247752240613LLU;

    t11 = (x45&((x46>x47)*x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 57LLU;
	int16_t x50 = -15;
	uint8_t x51 = 0U;
	static int16_t x52 = -113;
	volatile uint64_t t12 = 822365440326548834LLU;

    t12 = (x49&((x50>x51)*x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x54 = -1;
	uint32_t x55 = 31U;
	volatile int16_t x56 = INT16_MAX;
	int32_t t13 = -32638;

    t13 = (x53&((x54>x55)*x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 29U;
	int16_t x58 = INT16_MAX;
	uint32_t x59 = UINT32_MAX;
	uint32_t t14 = 9U;

    t14 = (x57&((x58>x59)*x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	volatile int8_t x64 = -1;
	static int64_t t15 = 97974054214012173LL;

    t15 = (x61&((x62>x63)*x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	volatile int32_t x68 = 7;

    t16 = (x65&((x66>x67)*x68));

    if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	int32_t x72 = -1;

    t17 = (x69&((x70>x71)*x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x74 = 3966175U;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 418842;

    t18 = (x73&((x74>x75)*x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = INT16_MAX;
	uint16_t x79 = 13U;

    t19 = (x77&((x78>x79)*x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = -122;

    t20 = (x81&((x82>x83)*x84));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 0;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t t21 = 1;

    t21 = (x85&((x86>x87)*x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	uint8_t x90 = 70U;
	uint16_t x91 = UINT16_MAX;
	volatile int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -893LL;

    t22 = (x89&((x90>x91)*x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	volatile int64_t x95 = -1LL;
	int32_t x96 = -1;
	volatile uint32_t t23 = UINT32_MAX;

    t23 = (x93&((x94>x95)*x96));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	int8_t x98 = -1;
	volatile uint16_t x100 = 31311U;

    t24 = (x97&((x98>x99)*x100));

    if (t24 != 31311) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -457754074591577LL;
	volatile int16_t x102 = 15866;
	int64_t t25 = -497607776330969511LL;

    t25 = (x101&((x102>x103)*x104));

    if (t25 != 7LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MIN;
	int32_t x107 = -54664;
	int64_t x108 = INT64_MIN;
	static int64_t t26 = -31443653LL;

    t26 = (x105&((x106>x107)*x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	uint16_t x110 = 2U;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -391;

    t27 = (x109&((x110>x111)*x112));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	volatile int16_t x114 = 39;
	int8_t x115 = INT8_MIN;

    t28 = (x113&((x114>x115)*x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MAX;
	int16_t x119 = -6353;
	uint64_t x120 = 476345010094293LLU;

    t29 = (x117&((x118>x119)*x120));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = 3U;
	int64_t t30 = -11961887LL;

    t30 = (x121&((x122>x123)*x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int16_t x126 = -1;
	volatile uint16_t x127 = 1U;
	int8_t x128 = -1;
	static int64_t t31 = 0LL;

    t31 = (x125&((x126>x127)*x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MAX;
	int8_t x130 = -1;
	uint8_t x131 = 1U;
	static int16_t x132 = -2;
	static volatile int32_t t32 = 8721803;

    t32 = (x129&((x130>x131)*x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	static int64_t x135 = INT64_MAX;
	uint64_t x136 = 2801LLU;
	uint64_t t33 = 14023305LLU;

    t33 = (x133&((x134>x135)*x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x139 = 136478U;
	uint32_t x140 = 785943866U;

    t34 = (x137&((x138>x139)*x140));

    if (t34 != 785943866U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 0;
	static int64_t x142 = 4982LL;
	volatile int32_t t35 = 276;

    t35 = (x141&((x142>x143)*x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	volatile uint8_t x147 = 2U;
	volatile int16_t x148 = -1;

    t36 = (x145&((x146>x147)*x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	static int8_t x150 = 37;
	uint16_t x151 = 5203U;
	volatile uint32_t x152 = 432280U;
	int64_t t37 = -40684815LL;

    t37 = (x149&((x150>x151)*x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 6;
	static volatile int64_t x154 = 26935973944549LL;
	volatile uint8_t x155 = 0U;
	int64_t x156 = INT64_MIN;
	static int64_t t38 = -1674969LL;

    t38 = (x153&((x154>x155)*x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	int64_t x158 = 2804176402361LL;
	int8_t x159 = 3;
	static int8_t x160 = -1;

    t39 = (x157&((x158>x159)*x160));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MAX;
	int16_t x164 = INT16_MIN;

    t40 = (x161&((x162>x163)*x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 490U;
	uint64_t x166 = 123363765522825120LLU;
	static int64_t x167 = -1LL;
	static uint64_t x168 = 778266551LLU;
	uint64_t t41 = 15188597548732587LLU;

    t41 = (x165&((x166>x167)*x168));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MAX;
	static int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	static volatile int64_t t42 = -12306967721663350LL;

    t42 = (x169&((x170>x171)*x172));

    if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = 520U;
	volatile int64_t t43 = 92633079LL;

    t43 = (x173&((x174>x175)*x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	int64_t x178 = -1LL;
	volatile int16_t x179 = INT16_MAX;
	volatile int64_t x180 = -86961530203084LL;
	uint64_t t44 = 671951LLU;

    t44 = (x177&((x178>x179)*x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = 125;
	volatile uint16_t x183 = 113U;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = INT64_MIN;

    t45 = (x181&((x182>x183)*x184));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x186 = 3U;
	int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile int64_t t46 = INT64_MIN;

    t46 = (x185&((x186>x187)*x188));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	uint16_t x191 = 0U;

    t47 = (x189&((x190>x191)*x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 127U;
	static int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	uint32_t t48 = 100310381U;

    t48 = (x193&((x194>x195)*x196));

    if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = INT32_MAX;
	int16_t x198 = -1;
	volatile uint32_t x199 = 135316021U;
	uint8_t x200 = 1U;
	int32_t t49 = 123;

    t49 = (x197&((x198>x199)*x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 426105679LLU;
	static uint64_t t50 = 66280100862LLU;

    t50 = (x201&((x202>x203)*x204));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = INT32_MAX;
	int32_t x207 = 2;
	uint32_t x208 = 4996721U;
	uint32_t t51 = 251922U;

    t51 = (x205&((x206>x207)*x208));

    if (t51 != 4996721U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x211 = 3040U;
	static uint8_t x212 = UINT8_MAX;
	uint64_t t52 = 62826656578067509LLU;

    t52 = (x209&((x210>x211)*x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x215 = 26;
	volatile int8_t x216 = INT8_MIN;
	int32_t t53 = -20071;

    t53 = (x213&((x214>x215)*x216));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	int32_t x218 = 20964086;
	int8_t x219 = 0;
	int64_t t54 = INT64_MIN;

    t54 = (x217&((x218>x219)*x220));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 106U;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = -3550;

    t55 = (x221&((x222>x223)*x224));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 11U;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -1;
	volatile int32_t t56 = 1623;

    t56 = (x225&((x226>x227)*x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 790604U;
	static int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MAX;
	uint32_t t57 = 2026892U;

    t57 = (x229&((x230>x231)*x232));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 1U;
	uint64_t x234 = 925201347846LLU;
	static int16_t x235 = -1;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t58 = 4U;

    t58 = (x233&((x234>x235)*x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	uint16_t x239 = 46U;
	volatile uint64_t t59 = 28727977LLU;

    t59 = (x237&((x238>x239)*x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 36;
	int16_t x243 = INT16_MAX;
	static volatile int32_t x244 = 39;
	static volatile int32_t t60 = 0;

    t60 = (x241&((x242>x243)*x244));

    if (t60 != 36) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	static int64_t x246 = INT64_MIN;
	int16_t x247 = 2;
	volatile int32_t t61 = 374;

    t61 = (x245&((x246>x247)*x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 235968826U;
	int32_t x250 = INT32_MIN;
	volatile int64_t x252 = INT64_MIN;
	static volatile int64_t t62 = -28927397777256LL;

    t62 = (x249&((x250>x251)*x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 271U;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;

    t63 = (x253&((x254>x255)*x256));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x259 = UINT16_MAX;
	static uint8_t x260 = 61U;
	uint64_t t64 = 30025757276705LLU;

    t64 = (x257&((x258>x259)*x260));

    if (t64 != 29LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -33;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 1377;

    t65 = (x261&((x262>x263)*x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 27544U;
	uint32_t x266 = 341U;
	int32_t x267 = -102735368;
	uint16_t x268 = 14553U;
	uint32_t t66 = 106582084U;

    t66 = (x265&((x266>x267)*x268));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -1;
	static uint8_t x270 = 4U;
	volatile uint32_t x272 = 755608U;
	volatile uint32_t t67 = 296026201U;

    t67 = (x269&((x270>x271)*x272));

    if (t67 != 755608U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = -59;
	int32_t x275 = INT32_MIN;
	static uint16_t x276 = 1U;
	static int32_t t68 = 103996836;

    t68 = (x273&((x274>x275)*x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 2U;
	volatile int16_t x279 = -1;
	int32_t t69 = -910;

    t69 = (x277&((x278>x279)*x280));

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	static int64_t x282 = -1LL;
	static int32_t x283 = -343211;
	static uint64_t x284 = 163859LLU;
	uint64_t t70 = 11403198323LLU;

    t70 = (x281&((x282>x283)*x284));

    if (t70 != 163859LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x286 = -1;
	int8_t x287 = 17;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t71 = 85079589LLU;

    t71 = (x285&((x286>x287)*x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x291 = INT16_MAX;
	int64_t x292 = INT64_MIN;
	static int64_t t72 = -233920677302LL;

    t72 = (x289&((x290>x291)*x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = -12;
	int64_t x295 = -10125005408LL;
	static uint32_t x296 = 3793090U;

    t73 = (x293&((x294>x295)*x296));

    if (t73 != 3793090LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	static int64_t x298 = 18LL;
	uint32_t x299 = 12648U;
	int64_t x300 = INT64_MIN;
	volatile int64_t t74 = 91543885656718LL;

    t74 = (x297&((x298>x299)*x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int32_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 2919;

    t75 = (x301&((x302>x303)*x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 5U;
	volatile int32_t x306 = 0;
	int32_t x307 = INT32_MAX;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = 325;

    t76 = (x305&((x306>x307)*x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = -1LL;
	static uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	int64_t t77 = -124465307491LL;

    t77 = (x309&((x310>x311)*x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	volatile int64_t x314 = INT64_MAX;
	static volatile int16_t x315 = 0;
	volatile int16_t x316 = -1;

    t78 = (x313&((x314>x315)*x316));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -440976547;
	uint8_t x318 = 0U;

    t79 = (x317&((x318>x319)*x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t80 = INT64_MAX;

    t80 = (x321&((x322>x323)*x324));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = -7;
	int32_t t81 = 348;

    t81 = (x325&((x326>x327)*x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	int16_t x332 = 1835;
	int32_t t82 = -193024183;

    t82 = (x329&((x330>x331)*x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = INT8_MIN;
	uint16_t x335 = 2U;
	int64_t t83 = -397213267LL;

    t83 = (x333&((x334>x335)*x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MAX;
	int8_t x339 = 2;
	uint32_t t84 = 114885577U;

    t84 = (x337&((x338>x339)*x340));

    if (t84 != 127U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1;
	volatile uint32_t t85 = 276U;

    t85 = (x341&((x342>x343)*x344));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	volatile int64_t x347 = INT64_MAX;

    t86 = (x345&((x346>x347)*x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MAX;
	volatile uint8_t x350 = 57U;
	volatile uint64_t x351 = 3746LLU;
	volatile int8_t x352 = 14;
	static int32_t t87 = -16;

    t87 = (x349&((x350>x351)*x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x354 = 1U;
	int32_t t88 = -4;

    t88 = (x353&((x354>x355)*x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	static volatile int64_t t89 = -3048332620LL;

    t89 = (x357&((x358>x359)*x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int16_t x362 = -1;
	int64_t x364 = 391773452804966LL;
	volatile int64_t t90 = -1417334702759LL;

    t90 = (x361&((x362>x363)*x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	static int8_t x366 = 0;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -6;
	int32_t t91 = -2178522;

    t91 = (x365&((x366>x367)*x368));

    if (t91 != 32762) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x370 = INT32_MIN;
	volatile int8_t x371 = 0;
	int32_t x372 = 0;
	volatile int32_t t92 = 6961031;

    t92 = (x369&((x370>x371)*x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 425LLU;
	static uint8_t x374 = 52U;
	volatile int32_t x375 = INT32_MAX;
	static volatile uint64_t t93 = 1813800432595LLU;

    t93 = (x373&((x374>x375)*x376));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x379 = -44;
	int32_t t94 = -29;

    t94 = (x377&((x378>x379)*x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -6349181248LL;
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	int64_t t95 = 1LL;

    t95 = (x381&((x382>x383)*x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	static volatile uint64_t x386 = 238860LLU;
	static uint16_t x387 = 7U;
	int64_t x388 = INT64_MAX;
	volatile int64_t t96 = 57155100217402LL;

    t96 = (x385&((x386>x387)*x388));

    if (t96 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = 1;
	uint8_t x390 = 13U;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = -15531;
	int32_t t97 = 11797507;

    t97 = (x389&((x390>x391)*x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = INT8_MIN;
	uint64_t x395 = 108LLU;
	volatile int16_t x396 = INT16_MIN;
	int32_t t98 = -2418;

    t98 = (x393&((x394>x395)*x396));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int32_t x398 = 13295501;
	int32_t x399 = -1;
	int16_t x400 = -34;
	uint32_t t99 = 5045U;

    t99 = (x397&((x398>x399)*x400));

    if (t99 != 4294967262U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = 25U;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t100 = 0;

    t100 = (x401&((x402>x403)*x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = INT32_MIN;
	int32_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	volatile uint16_t x408 = 246U;
	volatile int32_t t101 = 371332;

    t101 = (x405&((x406>x407)*x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	volatile int8_t x410 = -32;
	int32_t x411 = -1;
	static volatile int32_t x412 = 2699132;
	int64_t t102 = 2256LL;

    t102 = (x409&((x410>x411)*x412));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = -1LL;
	uint8_t x414 = UINT8_MAX;
	static int32_t x415 = INT32_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (x413&((x414>x415)*x416));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = UINT16_MAX;
	uint16_t x418 = UINT16_MAX;
	uint32_t x420 = UINT32_MAX;

    t104 = (x417&((x418>x419)*x420));

    if (t104 != 65535U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 82;
	uint16_t x423 = 4U;
	int32_t x424 = -657235;
	static volatile int32_t t105 = -418800290;

    t105 = (x421&((x422>x423)*x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = 9386U;
	uint32_t x426 = 190U;
	uint16_t x427 = UINT16_MAX;
	static volatile int16_t x428 = INT16_MAX;
	volatile uint32_t t106 = 1278756165U;

    t106 = (x425&((x426>x427)*x428));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	volatile int64_t x430 = 550739084508942164LL;
	uint8_t x431 = 94U;
	int32_t x432 = INT32_MAX;
	volatile uint64_t t107 = 243436960744077146LLU;

    t107 = (x429&((x430>x431)*x432));

    if (t107 != 2147483647LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	uint16_t x434 = UINT16_MAX;
	static uint8_t x436 = UINT8_MAX;
	int32_t t108 = 230;

    t108 = (x433&((x434>x435)*x436));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x438 = -1;
	uint32_t x439 = 97690U;
	int8_t x440 = INT8_MAX;
	volatile int64_t t109 = -1906703LL;

    t109 = (x437&((x438>x439)*x440));

    if (t109 != 127LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 24501U;
	int8_t x444 = INT8_MAX;
	static int32_t t110 = -1;

    t110 = (x441&((x442>x443)*x444));

    if (t110 != 22) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 387U;
	int64_t x446 = INT64_MAX;
	int16_t x447 = INT16_MIN;
	uint64_t x448 = 15666296151691LLU;
	volatile uint64_t t111 = 3395604224164221446LLU;

    t111 = (x445&((x446>x447)*x448));

    if (t111 != 131LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x450 = INT16_MAX;
	static volatile int32_t x451 = 1305;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t112 = -6397;

    t112 = (x449&((x450>x451)*x452));

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x453 = 5793;
	int8_t x454 = INT8_MAX;
	int8_t x455 = INT8_MAX;
	int64_t x456 = 4LL;
	volatile int64_t t113 = -167460375LL;

    t113 = (x453&((x454>x455)*x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x458 = INT8_MIN;
	uint32_t x459 = 155004U;
	int32_t x460 = INT32_MIN;

    t114 = (x457&((x458>x459)*x460));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MIN;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 89100296781LLU;

    t115 = (x461&((x462>x463)*x464));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 15895;
	int8_t x466 = INT8_MIN;
	uint8_t x467 = 0U;
	volatile int16_t x468 = INT16_MAX;
	int32_t t116 = -519007050;

    t116 = (x465&((x466>x467)*x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	int64_t x470 = 891LL;
	int16_t x471 = INT16_MIN;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -5;

    t117 = (x469&((x470>x471)*x472));

    if (t117 != 128) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x475 = -1LL;
	volatile int64_t x476 = INT64_MAX;
	static int64_t t118 = -1510408LL;

    t118 = (x473&((x474>x475)*x476));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = 240;
	static volatile int8_t x478 = INT8_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = 3;
	static volatile int32_t t119 = 321805854;

    t119 = (x477&((x478>x479)*x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile int16_t x482 = -1;
	volatile int32_t x483 = INT32_MAX;
	uint32_t x484 = 56517868U;
	volatile uint32_t t120 = 189U;

    t120 = (x481&((x482>x483)*x484));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint64_t x486 = 7735LLU;
	int64_t x487 = -867202378601LL;
	static int64_t t121 = 382483207191LL;

    t121 = (x485&((x486>x487)*x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 6;

    t122 = (x489&((x490>x491)*x492));

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int8_t x494 = INT8_MAX;
	volatile uint16_t x495 = 0U;
	int64_t x496 = INT64_MAX;
	int64_t t123 = 81LL;

    t123 = (x493&((x494>x495)*x496));

    if (t123 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = -1;
	static volatile int32_t t124 = -123425;

    t124 = (x497&((x498>x499)*x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -1;
	static int32_t x502 = INT32_MIN;
	int8_t x503 = -1;
	int32_t t125 = -335;

    t125 = (x501&((x502>x503)*x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	volatile uint32_t x506 = 9939U;
	static int64_t x507 = INT64_MIN;
	int8_t x508 = 58;
	volatile int32_t t126 = 16770961;

    t126 = (x505&((x506>x507)*x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	int8_t x511 = -25;

    t127 = (x509&((x510>x511)*x512));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MIN;
	static uint64_t t128 = 69416903195404LLU;

    t128 = (x513&((x514>x515)*x516));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -3;
	static int8_t x520 = INT8_MIN;
	static volatile int32_t t129 = 0;

    t129 = (x517&((x518>x519)*x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = -1;
	int16_t x523 = INT16_MAX;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t130 = 69911891U;

    t130 = (x521&((x522>x523)*x524));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	static int64_t x526 = -739LL;
	int64_t x527 = INT64_MIN;
	int16_t x528 = 111;
	volatile int64_t t131 = 100339LL;

    t131 = (x525&((x526>x527)*x528));

    if (t131 != 111LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 292864299888LL;
	volatile int8_t x530 = INT8_MIN;
	int8_t x531 = -1;
	static int8_t x532 = 1;
	int64_t t132 = 144292353579LL;

    t132 = (x529&((x530>x531)*x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MAX;
	uint32_t x534 = 2U;
	volatile int32_t x535 = -1;
	volatile int64_t x536 = -1293LL;
	volatile int64_t t133 = 7393290LL;

    t133 = (x533&((x534>x535)*x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 40U;
	static volatile int64_t x538 = -1LL;
	int64_t x539 = 37700521LL;
	int32_t t134 = 57838187;

    t134 = (x537&((x538>x539)*x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int32_t x542 = INT32_MIN;

    t135 = (x541&((x542>x543)*x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 527U;
	int16_t x546 = INT16_MIN;
	volatile int64_t x548 = 2222LL;
	volatile int64_t t136 = -92849019387100LL;

    t136 = (x545&((x546>x547)*x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = 601049291247901LL;
	int64_t x550 = INT64_MAX;
	int32_t x552 = 8366039;
	volatile int64_t t137 = -1567320LL;

    t137 = (x549&((x550>x551)*x552));

    if (t137 != 8323349LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x555 = INT8_MAX;
	static int64_t x556 = INT64_MAX;
	static volatile int64_t t138 = 29258869884535LL;

    t138 = (x553&((x554>x555)*x556));

    if (t138 != 11LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 1U;
	uint8_t x558 = UINT8_MAX;
	uint16_t x559 = 27636U;
	uint64_t x560 = UINT64_MAX;

    t139 = (x557&((x558>x559)*x560));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	static int16_t x562 = 7834;
	uint64_t x564 = 900432912683231818LLU;
	uint64_t t140 = 25LLU;

    t140 = (x561&((x562>x563)*x564));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = INT16_MIN;
	volatile int64_t x566 = -1LL;
	static int16_t x567 = 13557;
	uint64_t x568 = 224793971LLU;
	volatile uint64_t t141 = 4768652749942396238LLU;

    t141 = (x565&((x566>x567)*x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 67230923688331176LLU;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = 1U;
	volatile int32_t x572 = INT32_MIN;

    t142 = (x569&((x570>x571)*x572));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x574 = -1;
	uint32_t x575 = 14435026U;
	int64_t x576 = INT64_MIN;
	static int64_t t143 = -1496045777LL;

    t143 = (x573&((x574>x575)*x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 13437U;
	int16_t x579 = INT16_MAX;
	uint8_t x580 = 6U;
	static int32_t t144 = -87363;

    t144 = (x577&((x578>x579)*x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	int16_t x582 = INT16_MIN;
	uint32_t x583 = UINT32_MAX;
	int64_t x584 = -353650813011LL;

    t145 = (x581&((x582>x583)*x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 9901587352501444LLU;
	volatile uint32_t x586 = UINT32_MAX;
	int32_t x587 = 97477;
	uint32_t x588 = 0U;
	static volatile uint64_t t146 = 796720287194LLU;

    t146 = (x585&((x586>x587)*x588));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 1131974199046485LLU;
	int64_t x590 = INT64_MAX;
	int32_t x591 = INT32_MIN;
	uint8_t x592 = UINT8_MAX;

    t147 = (x589&((x590>x591)*x592));

    if (t147 != 85LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x593 = 197U;
	uint64_t x594 = 8562026607709794760LLU;
	static uint64_t x595 = 67970901LLU;
	volatile int8_t x596 = 0;

    t148 = (x593&((x594>x595)*x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = 430;
	volatile uint32_t x599 = 302678942U;
	int32_t x600 = INT32_MAX;

    t149 = (x597&((x598>x599)*x600));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	int32_t x602 = -403;

    t150 = (x601&((x602>x603)*x604));

    if (t150 != 9952661U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MIN;
	volatile int8_t x606 = -1;
	static volatile uint32_t x607 = 49640182U;
	volatile int64_t x608 = -1LL;
	int64_t t151 = INT64_MIN;

    t151 = (x605&((x606>x607)*x608));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	int16_t x610 = INT16_MIN;
	volatile int64_t x611 = -2600558272LL;
	int64_t t152 = 96531799LL;

    t152 = (x609&((x610>x611)*x612));

    if (t152 != 65535LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -9;
	volatile uint64_t x614 = 35924619180514584LLU;
	volatile uint16_t x615 = 7U;
	int16_t x616 = 8;
	int32_t t153 = 3;

    t153 = (x613&((x614>x615)*x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -744;
	int16_t x618 = -1;
	static int16_t x620 = INT16_MIN;

    t154 = (x617&((x618>x619)*x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = UINT64_MAX;
	uint8_t x624 = 12U;
	int64_t t155 = -1LL;

    t155 = (x621&((x622>x623)*x624));

    if (t155 != 12LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 32496177LLU;
	int32_t x626 = 823;
	int32_t x627 = -79;
	int64_t x628 = INT64_MIN;
	static volatile uint64_t t156 = 7011LLU;

    t156 = (x625&((x626>x627)*x628));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 5U;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = UINT64_MAX;
	volatile int8_t x632 = INT8_MAX;
	volatile int32_t t157 = 169177;

    t157 = (x629&((x630>x631)*x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = INT64_MIN;
	volatile int16_t x635 = INT16_MAX;
	volatile int32_t x636 = -887201;
	volatile int64_t t158 = INT64_MIN;

    t158 = (x633&((x634>x635)*x636));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = -1;
	int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MIN;
	uint64_t x640 = 4926240631LLU;
	static uint64_t t159 = 1582680685199921LLU;

    t159 = (x637&((x638>x639)*x640));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = INT32_MIN;
	volatile uint16_t x643 = 11U;
	static volatile int32_t x644 = INT32_MAX;
	static int32_t t160 = 1406599;

    t160 = (x641&((x642>x643)*x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 7;
	volatile int8_t x646 = INT8_MIN;

    t161 = (x645&((x646>x647)*x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	static int8_t x650 = INT8_MIN;
	static uint8_t x651 = UINT8_MAX;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 1;

    t162 = (x649&((x650>x651)*x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -1;
	uint8_t x654 = UINT8_MAX;
	uint8_t x655 = UINT8_MAX;
	int16_t x656 = -1;
	volatile int32_t t163 = -1300;

    t163 = (x653&((x654>x655)*x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MIN;
	volatile int16_t x658 = INT16_MAX;
	volatile int64_t x659 = -1LL;
	int8_t x660 = INT8_MIN;
	static volatile int64_t t164 = INT64_MIN;

    t164 = (x657&((x658>x659)*x660));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -45;
	int8_t x662 = -1;
	uint64_t x663 = 94848440291LLU;
	static int64_t x664 = -1LL;
	static volatile int64_t t165 = 2254936419897858708LL;

    t165 = (x661&((x662>x663)*x664));

    if (t165 != -45LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x666 = INT32_MIN;
	static volatile uint32_t x667 = UINT32_MAX;
	int64_t t166 = -197776349LL;

    t166 = (x665&((x666>x667)*x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -97167;
	volatile uint8_t x670 = 7U;
	uint16_t x671 = UINT16_MAX;
	volatile int32_t x672 = -1;
	int32_t t167 = 30046604;

    t167 = (x669&((x670>x671)*x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int32_t x674 = 19;
	uint32_t x675 = UINT32_MAX;
	int32_t t168 = -2;

    t168 = (x673&((x674>x675)*x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	int32_t x678 = 78;
	int8_t x679 = 28;
	uint8_t x680 = 3U;
	volatile int32_t t169 = 51;

    t169 = (x677&((x678>x679)*x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	uint32_t x682 = 291U;
	uint8_t x683 = 13U;
	uint16_t x684 = 486U;
	static int32_t t170 = -339611797;

    t170 = (x681&((x682>x683)*x684));

    if (t170 != 102) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x685 = UINT64_MAX;
	volatile int8_t x686 = INT8_MAX;
	int16_t x687 = -1;
	int32_t x688 = INT32_MIN;
	volatile uint64_t t171 = 125716859234483307LLU;

    t171 = (x685&((x686>x687)*x688));

    if (t171 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = UINT8_MAX;
	static uint64_t x691 = 3426578750480367LLU;
	int32_t x692 = INT32_MAX;
	volatile int32_t t172 = -1;

    t172 = (x689&((x690>x691)*x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x693 = UINT64_MAX;
	uint8_t x694 = 45U;
	int32_t x695 = -1;
	static int16_t x696 = 5381;

    t173 = (x693&((x694>x695)*x696));

    if (t173 != 5381LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x698 = 80;
	static uint16_t x699 = UINT16_MAX;
	static volatile int16_t x700 = INT16_MAX;
	volatile int32_t t174 = 2739114;

    t174 = (x697&((x698>x699)*x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	int8_t x703 = INT8_MAX;
	int64_t x704 = INT64_MAX;
	int64_t t175 = INT64_MAX;

    t175 = (x701&((x702>x703)*x704));

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = -5;
	uint8_t x707 = 0U;
	int64_t x708 = INT64_MAX;
	uint64_t t176 = 15004261LLU;

    t176 = (x705&((x706>x707)*x708));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = INT8_MAX;
	static int16_t x710 = INT16_MIN;
	int16_t x712 = INT16_MIN;
	volatile int32_t t177 = -1;

    t177 = (x709&((x710>x711)*x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -246;
	int16_t x715 = 31;
	volatile int32_t x716 = INT32_MAX;
	volatile int32_t t178 = -229491318;

    t178 = (x713&((x714>x715)*x716));

    if (t178 != 2147483402) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MAX;
	static int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	volatile uint16_t x720 = 20431U;
	volatile int32_t t179 = 41643;

    t179 = (x717&((x718>x719)*x720));

    if (t179 != 20431) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x722 = 7U;
	uint64_t t180 = 58573540LLU;

    t180 = (x721&((x722>x723)*x724));

    if (t180 != 4LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 112U;
	int8_t x727 = 0;
	int32_t t181 = 232;

    t181 = (x725&((x726>x727)*x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 0U;
	volatile int32_t x730 = 2263;
	volatile int8_t x731 = INT8_MIN;
	int64_t x732 = INT64_MAX;
	int64_t t182 = -44409802LL;

    t182 = (x729&((x730>x731)*x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = UINT32_MAX;
	volatile int64_t x735 = INT64_MIN;
	static uint64_t x736 = 49LLU;
	volatile uint64_t t183 = 24279610958LLU;

    t183 = (x733&((x734>x735)*x736));

    if (t183 != 16LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = 0;
	uint16_t x739 = 24318U;
	static int32_t x740 = INT32_MIN;
	int32_t t184 = -94;

    t184 = (x737&((x738>x739)*x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x742 = INT16_MIN;
	int8_t x743 = INT8_MIN;
	int32_t x744 = 18909274;
	static int64_t t185 = -9LL;

    t185 = (x741&((x742>x743)*x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 68227600LLU;
	volatile int16_t x746 = INT16_MIN;
	uint8_t x747 = UINT8_MAX;
	uint64_t t186 = 2554017369768837933LLU;

    t186 = (x745&((x746>x747)*x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x750 = INT16_MAX;
	volatile uint16_t x751 = 30U;
	int64_t x752 = INT64_MIN;
	int64_t t187 = INT64_MIN;

    t187 = (x749&((x750>x751)*x752));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	uint8_t x755 = 3U;
	int32_t t188 = INT32_MIN;

    t188 = (x753&((x754>x755)*x756));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = 922585304U;
	uint8_t x758 = UINT8_MAX;
	int64_t x759 = INT64_MIN;
	uint32_t t189 = 1507999838U;

    t189 = (x757&((x758>x759)*x760));

    if (t189 != 8U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = 0U;
	static int64_t x763 = -1LL;
	static uint64_t x764 = UINT64_MAX;
	volatile uint64_t t190 = 1630434LLU;

    t190 = (x761&((x762>x763)*x764));

    if (t190 != 48LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 2650U;
	uint32_t x768 = 1148554U;
	uint32_t t191 = 256261U;

    t191 = (x765&((x766>x767)*x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int64_t x770 = -1LL;
	int8_t x771 = INT8_MAX;
	int16_t x772 = -1;
	int64_t t192 = -1348LL;

    t192 = (x769&((x770>x771)*x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MAX;
	uint16_t x775 = 30U;
	uint16_t x776 = 3457U;
	volatile int32_t t193 = 9083;

    t193 = (x773&((x774>x775)*x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x778 = INT8_MIN;
	int64_t x779 = INT64_MAX;
	int16_t x780 = INT16_MIN;
	int32_t t194 = -11;

    t194 = (x777&((x778>x779)*x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = -1;
	volatile int8_t x783 = INT8_MIN;
	volatile int32_t t195 = 82460476;

    t195 = (x781&((x782>x783)*x784));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = 509U;
	uint8_t x788 = 1U;
	volatile uint32_t t196 = 12462U;

    t196 = (x785&((x786>x787)*x788));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = UINT32_MAX;
	static volatile uint16_t x791 = 45U;
	uint8_t x792 = 113U;
	volatile uint32_t t197 = 293U;

    t197 = (x789&((x790>x791)*x792));

    if (t197 != 113U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MIN;
	uint32_t x795 = UINT32_MAX;
	static volatile int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -4736;

    t198 = (x793&((x794>x795)*x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	volatile int32_t x798 = 8088348;
	int8_t x799 = -1;
	static int16_t x800 = INT16_MIN;
	int32_t t199 = -1;

    t199 = (x797&((x798>x799)*x800));

    if (t199 != -32768) { NG(); } else { ; }
	
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

