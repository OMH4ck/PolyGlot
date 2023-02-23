
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

int64_t x6 = -36788LL;
uint32_t x9 = 62639482U;
int16_t x16 = -1;
int8_t x18 = INT8_MAX;
volatile int8_t x27 = INT8_MIN;
int64_t x29 = INT64_MAX;
int64_t x31 = -7720079482310LL;
uint16_t x32 = 2U;
static uint16_t x33 = UINT16_MAX;
int64_t x41 = INT64_MIN;
int64_t x53 = INT64_MIN;
int8_t x55 = INT8_MAX;
uint16_t x57 = 12036U;
volatile int16_t x58 = 78;
volatile int8_t x66 = INT8_MIN;
int64_t x70 = -1552020LL;
volatile uint8_t x71 = 25U;
volatile int64_t t18 = -3LL;
int64_t x81 = INT64_MIN;
int8_t x84 = INT8_MIN;
volatile uint64_t t20 = 17929557791700LLU;
uint64_t x85 = 23368LLU;
int8_t x87 = 5;
uint8_t x89 = UINT8_MAX;
int16_t x91 = 3;
uint32_t x99 = 1U;
int16_t x103 = INT16_MAX;
static uint8_t x111 = 6U;
uint64_t x112 = 457683638555LLU;
uint64_t x123 = UINT64_MAX;
int16_t x141 = 1;
static uint64_t x147 = 40LLU;
uint64_t t36 = 130499103824355606LLU;
int32_t x156 = -35;
int32_t x157 = INT32_MIN;
int32_t x162 = -20176;
int16_t x173 = -15949;
uint64_t x180 = 582976LLU;
int8_t x182 = INT8_MAX;
int32_t x183 = -1;
uint64_t t45 = 10LLU;
int32_t t46 = -315777;
int16_t x190 = 16;
static volatile int8_t x200 = 1;
static volatile uint32_t x203 = 2U;
volatile int64_t t50 = -2LL;
volatile int8_t x207 = -1;
volatile int8_t x212 = -2;
int64_t x220 = 1LL;
volatile int32_t x222 = -14;
int64_t t55 = -697456277LL;
int8_t x233 = INT8_MIN;
int64_t t58 = 126LL;
uint8_t x242 = 46U;
int32_t t60 = 9785576;
volatile uint16_t x248 = 7U;
static volatile int16_t x249 = INT16_MIN;
static uint8_t x252 = 59U;
static uint8_t x258 = UINT8_MAX;
volatile int64_t t66 = 1LL;
static volatile uint32_t x271 = UINT32_MAX;
int32_t x275 = INT32_MIN;
int64_t x279 = INT64_MAX;
int64_t x280 = INT64_MIN;
volatile int32_t x281 = INT32_MAX;
int32_t x282 = 2;
static int8_t x287 = INT8_MAX;
volatile int64_t t72 = -26997LL;
int8_t x293 = INT8_MIN;
static uint64_t x295 = UINT64_MAX;
int64_t x296 = -256966524068LL;
static uint8_t x300 = 108U;
static int8_t x303 = INT8_MIN;
volatile uint64_t t75 = 16138LLU;
uint8_t x306 = 1U;
volatile int64_t t77 = -9LL;
static int8_t x313 = -1;
volatile uint64_t t78 = 3369359988601LLU;
volatile uint32_t x321 = UINT32_MAX;
uint64_t x327 = 951973335082590LLU;
int64_t t82 = 23191212523071LL;
static volatile int64_t x343 = INT64_MAX;
int8_t x345 = INT8_MAX;
static int8_t x356 = INT8_MIN;
int64_t x373 = INT64_MAX;
int8_t x378 = -1;
int32_t x385 = INT32_MIN;
int64_t x397 = INT64_MAX;
static int16_t x398 = 1;
int64_t x399 = 0LL;
int16_t x405 = INT16_MIN;
int32_t t101 = -1;
int8_t x410 = -13;
uint8_t x411 = UINT8_MAX;
static volatile uint16_t x412 = 11107U;
uint32_t x413 = UINT32_MAX;
uint32_t t103 = UINT32_MAX;
int64_t x419 = 4120069966LL;
int32_t x420 = INT32_MAX;
volatile int64_t t104 = -183617169817221LL;
uint8_t x421 = 15U;
int16_t x423 = -2;
static uint32_t x425 = 207799U;
int16_t x426 = -1;
static int16_t x430 = -229;
int64_t x439 = INT64_MIN;
int64_t x445 = 929LL;
uint16_t x451 = 353U;
int8_t x453 = INT8_MIN;
int8_t x459 = INT8_MIN;
int16_t x460 = -9087;
int32_t x462 = INT32_MIN;
int16_t x463 = 1;
int64_t x474 = -1LL;
volatile int64_t t118 = 5LL;
volatile int64_t t119 = 0LL;
static volatile int16_t x484 = -119;
volatile uint64_t t121 = 7320466LLU;
int64_t t122 = INT64_MIN;
int64_t x495 = INT64_MAX;
static int16_t x498 = -1;
int64_t t125 = -1LL;
int16_t x505 = INT16_MIN;
static int8_t x508 = 17;
volatile int64_t x509 = INT64_MAX;
int8_t x511 = INT8_MAX;
volatile int8_t x514 = -1;
static uint64_t x516 = UINT64_MAX;
volatile int32_t x519 = INT32_MIN;
int32_t t129 = 1144153;
static uint8_t x523 = 0U;
int32_t t130 = -682;
uint64_t x525 = UINT64_MAX;
int32_t x532 = 1098970;
uint16_t x535 = 9U;
static volatile int64_t t133 = 111LL;
uint16_t x543 = UINT16_MAX;
int64_t t135 = -118571876037201265LL;
uint16_t x545 = 22U;
int16_t x551 = INT16_MIN;
uint64_t t137 = 61636932613LLU;
volatile int64_t x564 = INT64_MIN;
uint16_t x568 = 0U;
uint64_t x570 = 17304064996025804LLU;
static int64_t x572 = 1747396850605886LL;
static int8_t x574 = INT8_MIN;
int8_t x575 = INT8_MIN;
volatile int64_t t143 = 2191057134085LL;
uint64_t t144 = 11LLU;
int8_t x583 = -2;
static int8_t x584 = INT8_MIN;
static int64_t x591 = 532994019436LL;
int16_t x599 = 0;
uint64_t x603 = 7LLU;
volatile int64_t t151 = 422122339LL;
volatile int16_t x612 = -1;
static volatile int64_t t152 = 712890LL;
volatile uint64_t x614 = 73LLU;
uint8_t x616 = UINT8_MAX;
uint8_t x618 = 0U;
int64_t t155 = 1950223470LL;
uint8_t x644 = 3U;
static int64_t t160 = INT64_MAX;
uint64_t x651 = UINT64_MAX;
int16_t x654 = INT16_MAX;
volatile int16_t x668 = INT16_MIN;
int32_t x670 = INT32_MIN;
volatile uint64_t x675 = 67233401998LLU;
volatile uint8_t x689 = UINT8_MAX;
uint8_t x693 = 48U;
uint64_t x698 = 559735157657354599LLU;
int8_t x702 = INT8_MIN;
volatile int16_t x703 = INT16_MIN;
int8_t x705 = -2;
uint16_t x710 = UINT16_MAX;
static int64_t t178 = 1478175264LL;
uint32_t t179 = 611U;
int32_t x721 = -33668;
static int8_t x722 = INT8_MIN;
static int8_t x726 = 4;
int32_t x729 = INT32_MIN;
int16_t x734 = INT16_MAX;
uint32_t x735 = 165378790U;
volatile uint16_t x738 = 10U;
volatile uint64_t t184 = 8991LLU;
volatile int8_t x742 = -2;
volatile int32_t x748 = INT32_MIN;
int16_t x749 = INT16_MIN;
volatile uint64_t t188 = 6857LLU;
static volatile int64_t x761 = INT64_MAX;
volatile int8_t x763 = 46;
static int16_t x768 = 30;
uint16_t x770 = 30868U;
int16_t x780 = 6609;
uint64_t x787 = 1182LLU;
uint16_t x789 = 2U;
int64_t x791 = INT64_MIN;
int8_t x795 = INT8_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 2090LLU;

    t0 = (x1^((x2^x3)&x4));

    if (t0 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 4009;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -1365685327746071LL;

    t1 = (x5^((x6^x7)&x8));

    if (t1 != 2147450853LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 0U;
	volatile int32_t x12 = INT32_MAX;
	static uint32_t t2 = 15677973U;

    t2 = (x9^((x10^x11)&x12));

    if (t2 != 2084844165U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -5590;
	int32_t x14 = 66256;
	static int16_t x15 = INT16_MAX;
	int32_t t3 = 5755152;

    t3 = (x13^((x14^x15)&x16));

    if (t3 != -92411) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 14;
	uint8_t x19 = 2U;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -153752406;

    t4 = (x17^((x18^x19)&x20));

    if (t4 != 115) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -49;
	int32_t t5 = -1;

    t5 = (x21^((x22^x23)&x24));

    if (t5 != -2147483472) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = 27U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 63277;

    t6 = (x25^((x26^x27)&x28));

    if (t6 != -101) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MAX;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x29^((x30^x31)&x32));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -20LL;

    t8 = (x33^((x34^x35)&x36));

    if (t8 != 65535LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -39;
	uint16_t x38 = 28U;
	static int64_t x39 = -13118LL;
	uint16_t x40 = 6224U;
	static volatile int64_t t9 = 59198LL;

    t9 = (x37^((x38^x39)&x40));

    if (t9 != -2167LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = 235475867550411737LL;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 795583188LLU;

    t10 = (x41^((x42^x43)&x44));

    if (t10 != 235475867550411737LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = INT64_MAX;
	static int16_t x46 = INT16_MIN;
	static int16_t x47 = INT16_MIN;
	uint64_t x48 = 414LLU;
	static volatile uint64_t t11 = 33629878LLU;

    t11 = (x45^((x46^x47)&x48));

    if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 31707147555LL;
	volatile int16_t x50 = -1;
	uint64_t x51 = 83LLU;
	static int64_t x52 = -1LL;
	volatile uint64_t t12 = 27810LLU;

    t12 = (x49^((x50^x51)&x52));

    if (t12 != 18446744042002403983LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	uint8_t x56 = 15U;
	int64_t t13 = -1672491872827415LL;

    t13 = (x53^((x54^x55)&x56));

    if (t13 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x59 = INT64_MIN;
	int32_t x60 = 712;
	volatile int64_t t14 = 492400886960103LL;

    t14 = (x57^((x58^x59)&x60));

    if (t14 != 12108LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	int64_t x62 = 906017994996978059LL;
	uint8_t x63 = 14U;
	int8_t x64 = INT8_MIN;
	int64_t t15 = -20642089969423LL;

    t15 = (x61^((x62^x63)&x64));

    if (t15 != -906017994996978049LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 0U;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66^x67)&x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int8_t x72 = -1;
	int64_t t17 = 638154697092968LL;

    t17 = (x69^((x70^x71)&x72));

    if (t17 != -1552118LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	static volatile int8_t x74 = 0;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = -1LL;

    t18 = (x73^((x74^x75)&x76));

    if (t18 != -65536LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	static volatile uint16_t x80 = UINT16_MAX;
	int64_t t19 = -6LL;

    t19 = (x77^((x78^x79)&x80));

    if (t19 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x82 = 786631644573769LLU;
	int32_t x83 = -1;

    t20 = (x81^((x82^x83)&x84));

    if (t20 != 9222585405210201984LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -6549443;
	uint8_t x88 = UINT8_MAX;
	uint64_t t21 = 21822091798631362LLU;

    t21 = (x85^((x86^x87)&x88));

    if (t21 != 23408LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = 864069955591LLU;
	uint16_t x92 = 3U;
	uint64_t t22 = 746987285470LLU;

    t22 = (x89^((x90^x91)&x92));

    if (t22 != 255LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 1U;
	int16_t x94 = INT16_MIN;
	static volatile int64_t x95 = -1765407255LL;
	int16_t x96 = INT16_MAX;
	int64_t t23 = -23732618778968785LL;

    t23 = (x93^((x94^x95)&x96));

    if (t23 != 1512LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	uint8_t x98 = 9U;
	volatile int64_t x100 = INT64_MIN;
	static volatile int64_t t24 = -2104711LL;

    t24 = (x97^((x98^x99)&x100));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MIN;
	static volatile int16_t x104 = INT16_MIN;
	volatile int64_t t25 = 8135LL;

    t25 = (x101^((x102^x103)&x104));

    if (t25 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	volatile uint8_t x107 = 2U;
	static int16_t x108 = -1;
	static int32_t t26 = 1;

    t26 = (x105^((x106^x107)&x108));

    if (t26 != 32642) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	uint32_t x110 = 14637U;
	static uint64_t t27 = 1LLU;

    t27 = (x109^((x110^x111)&x112));

    if (t27 != 18446744071562074379LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 10;
	static int16_t x114 = -107;
	int16_t x115 = -1;
	volatile uint64_t x116 = 8LLU;
	volatile uint64_t t28 = 23LLU;

    t28 = (x113^((x114^x115)&x116));

    if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	static volatile int32_t x119 = -8;
	int32_t x120 = -882647;
	int64_t t29 = -1632LL;

    t29 = (x117^((x118^x119)&x120));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MAX;
	volatile int8_t x122 = INT8_MAX;
	volatile uint8_t x124 = 1U;
	uint64_t t30 = 1260752835437LLU;

    t30 = (x121^((x122^x123)&x124));

    if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = UINT16_MAX;
	static volatile int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	int8_t x128 = -1;
	int32_t t31 = -1046;

    t31 = (x125^((x126^x127)&x128));

    if (t31 != -65409) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	uint64_t x130 = 7974372606377886233LLU;
	int64_t x131 = -43084026248LL;
	static int32_t x132 = -1;
	uint64_t t32 = 39096969049352LLU;

    t32 = (x129^((x130^x131)&x132));

    if (t32 != 7974372632013345694LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 60U;
	volatile int16_t x134 = 9803;
	static int64_t x135 = INT64_MAX;
	static int8_t x136 = -1;
	static int64_t t33 = -35LL;

    t33 = (x133^((x134^x135)&x136));

    if (t33 != 9223372036854765960LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -61;
	int8_t x138 = -1;
	uint16_t x139 = 1U;
	volatile uint32_t x140 = 514815925U;
	static volatile uint32_t t34 = 93581832U;

    t34 = (x137^((x138^x139)&x140));

    if (t34 != 3780151415U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = UINT16_MAX;
	volatile int8_t x143 = INT8_MIN;
	static uint16_t x144 = UINT16_MAX;
	static int32_t t35 = -2200;

    t35 = (x141^((x142^x143)&x144));

    if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 9750LL;
	int64_t x146 = INT64_MIN;
	int8_t x148 = -1;

    t36 = (x145^((x146^x147)&x148));

    if (t36 != 9223372036854785598LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 233U;
	static volatile uint64_t x152 = 7235433134LLU;
	uint64_t t37 = 8227869040292LLU;

    t37 = (x149^((x150^x151)&x152));

    if (t37 != 9223372044090208808LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = 251263841LLU;
	volatile int32_t x154 = -63;
	static volatile int8_t x155 = 0;
	volatile uint64_t t38 = 634652230LLU;

    t38 = (x153^((x154^x155)&x156));

    if (t38 != 18446744073458287776LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x158 = UINT8_MAX;
	uint32_t x159 = 1795805736U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -10443LL;

    t39 = (x157^((x158^x159)&x160));

    if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	static volatile int32_t x164 = -1;
	int64_t t40 = 32363943620973335LL;

    t40 = (x161^((x162^x163)&x164));

    if (t40 != 9223372034707312335LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	uint32_t x167 = 0U;
	int64_t x168 = 1419LL;
	volatile int64_t t41 = -19079787997551LL;

    t41 = (x165^((x166^x167)&x168));

    if (t41 != -2147482229LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 817U;
	uint8_t x170 = 47U;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	volatile int64_t t42 = 273400639959LL;

    t42 = (x169^((x170^x171)&x172));

    if (t42 != 798LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = INT16_MIN;
	static uint64_t x175 = UINT64_MAX;
	uint8_t x176 = UINT8_MAX;
	uint64_t t43 = 62758236549874050LLU;

    t43 = (x173^((x174^x175)&x176));

    if (t43 != 18446744073709535564LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	static uint64_t t44 = 425213163LLU;

    t44 = (x177^((x178^x179)&x180));

    if (t44 != 18446744073708968640LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = 1861322968LLU;
	static volatile uint16_t x184 = 0U;

    t45 = (x181^((x182^x183)&x184));

    if (t45 != 1861322968LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	uint16_t x186 = 4172U;
	int32_t x187 = 25506;
	int32_t x188 = INT32_MIN;

    t46 = (x185^((x186^x187)&x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 32341U;
	int16_t x191 = -7114;
	volatile int16_t x192 = INT16_MAX;
	int32_t t47 = 2;

    t47 = (x189^((x190^x191)&x192));

    if (t47 != 6771) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -1LL;
	static int64_t x195 = INT64_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t48 = 9LL;

    t48 = (x193^((x194^x195)&x196));

    if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = 37097270LL;
	static int8_t x199 = -1;
	static volatile int64_t t49 = -818475902630378LL;

    t49 = (x197^((x198^x199)&x200));

    if (t49 != 32766LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	int32_t x202 = 676151;
	int64_t x204 = 1698642LL;

    t50 = (x201^((x202^x203)&x204));

    if (t50 != 540945LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 2LLU;
	static uint8_t x206 = UINT8_MAX;
	int16_t x208 = 41;
	volatile uint64_t t51 = 5589850460345635544LLU;

    t51 = (x205^((x206^x207)&x208));

    if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int32_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	uint32_t t52 = 306343U;

    t52 = (x209^((x210^x211)&x212));

    if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 2U;
	int32_t x214 = INT32_MAX;
	static uint64_t x215 = 17383742441218326LLU;
	static int16_t x216 = 1;
	volatile uint64_t t53 = 1400LLU;

    t53 = (x213^((x214^x215)&x216));

    if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	int64_t x218 = INT64_MAX;
	int32_t x219 = -90283;
	static int64_t t54 = 915241850745022LL;

    t54 = (x217^((x218^x219)&x220));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MIN;

    t55 = (x221^((x222^x223)&x224));

    if (t55 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MAX;
	static uint8_t x227 = 3U;
	volatile int64_t x228 = -1LL;
	volatile int64_t t56 = -767849402654200825LL;

    t56 = (x225^((x226^x227)&x228));

    if (t56 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x229 = -1;
	static int16_t x230 = 54;
	static volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -962418282;

    t57 = (x229^((x230^x231)&x232));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x234 = 971597113U;
	int8_t x235 = INT8_MIN;
	static int64_t x236 = 533448333943554LL;

    t58 = (x233^((x234^x235)&x236));

    if (t58 != -101843584LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MIN;
	static volatile int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = 495LL;

    t59 = (x237^((x238^x239)&x240));

    if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1;
	uint8_t x243 = 23U;
	uint8_t x244 = 6U;

    t60 = (x241^((x242^x243)&x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x245 = 28351649463LL;
	static int32_t x246 = -611;
	static volatile int32_t x247 = INT32_MIN;
	volatile int64_t t61 = -341596863137LL;

    t61 = (x245^((x246^x247)&x248));

    if (t61 != 28351649458LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = 7U;
	static volatile int16_t x251 = 2033;
	static volatile int32_t t62 = -3;

    t62 = (x249^((x250^x251)&x252));

    if (t62 != -32718) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static uint32_t x254 = UINT32_MAX;
	int32_t x255 = -353038;
	static int16_t x256 = INT16_MIN;
	uint32_t t63 = 0U;

    t63 = (x253^((x254^x255)&x256));

    if (t63 != 4294639488U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x257 = INT16_MIN;
	uint16_t x259 = 13U;
	int32_t x260 = INT32_MAX;
	static volatile int32_t t64 = -1;

    t64 = (x257^((x258^x259)&x260));

    if (t64 != -32526) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	static int64_t x264 = -1LL;
	static int64_t t65 = 604190055873LL;

    t65 = (x261^((x262^x263)&x264));

    if (t65 != -2147483521LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = 0;

    t66 = (x265^((x266^x267)&x268));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = 984;
	uint8_t x270 = 17U;
	static volatile uint64_t x272 = 0LLU;
	static volatile uint64_t t67 = 2129159348565359LLU;

    t67 = (x269^((x270^x271)&x272));

    if (t67 != 984LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	static int16_t x274 = -1;
	static uint64_t x276 = 0LLU;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x273^((x274^x275)&x276));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 225189;
	volatile uint16_t x278 = UINT16_MAX;
	static int64_t t69 = 1551963524557447578LL;

    t69 = (x277^((x278^x279)&x280));

    if (t69 != 225189LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -78717838;

    t70 = (x281^((x282^x283)&x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	volatile int16_t x286 = INT16_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x285^((x286^x287)&x288));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 79;
	int16_t x290 = -310;
	int8_t x291 = INT8_MAX;
	int64_t x292 = -392734317959LL;

    t72 = (x289^((x290^x291)&x292));

    if (t72 != -392734317954LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = 24945267218LL;
	static volatile uint64_t t73 = 484018584390LLU;

    t73 = (x293^((x294^x295)&x296));

    if (t73 != 274324258508LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	uint8_t x298 = UINT8_MAX;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x297^((x298^x299)&x300));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint64_t x302 = 212LLU;
	int32_t x304 = 1997;

    t75 = (x301^((x302^x303)&x304));

    if (t75 != 9223372036854777668LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MAX;
	int64_t t76 = 1LL;

    t76 = (x305^((x306^x307)&x308));

    if (t76 != 4294967169LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	static int8_t x312 = -1;

    t77 = (x309^((x310^x311)&x312));

    if (t77 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MAX;
	volatile uint64_t x315 = 632869LLU;
	int32_t x316 = -43204963;

    t78 = (x313^((x314^x315)&x316));

    if (t78 != 18446744073708984295LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	int32_t x318 = -419031;
	int64_t x319 = INT64_MAX;
	uint8_t x320 = 103U;
	volatile int64_t t79 = 4339150189757LL;

    t79 = (x317^((x318^x319)&x320));

    if (t79 != -71LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int16_t x324 = 11430;
	volatile int64_t t80 = -4016LL;

    t80 = (x321^((x322^x323)&x324));

    if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	volatile uint8_t x326 = 116U;
	uint32_t x328 = UINT32_MAX;
	uint64_t t81 = 30009590LLU;

    t81 = (x325^((x326^x327)&x328));

    if (t81 != 18446744071285692885LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 817320459392LL;
	static int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -1;

    t82 = (x329^((x330^x331)&x332));

    if (t82 != 816914596608LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 3U;
	int8_t x334 = INT8_MAX;
	int16_t x335 = INT16_MAX;
	volatile uint16_t x336 = 40U;
	int32_t t83 = -1109705;

    t83 = (x333^((x334^x335)&x336));

    if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	static int64_t x338 = -6639315824LL;
	int64_t x339 = -1LL;
	uint16_t x340 = UINT16_MAX;
	int64_t t84 = -1352LL;

    t84 = (x337^((x338^x339)&x340));

    if (t84 != -60272LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	int32_t x342 = -138;
	int16_t x344 = -903;
	int64_t t85 = -79884LL;

    t85 = (x341^((x342^x343)&x344));

    if (t85 != -9223372036854710282LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = 3808;
	static uint16_t x347 = UINT16_MAX;
	int16_t x348 = 12;
	int32_t t86 = 293;

    t86 = (x345^((x346^x347)&x348));

    if (t86 != 115) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 0U;
	int8_t x350 = -1;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = 3U;
	int32_t t87 = 260227467;

    t87 = (x349^((x350^x351)&x352));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int16_t x355 = -1;
	int64_t t88 = 1LL;

    t88 = (x353^((x354^x355)&x356));

    if (t88 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1;
	int32_t x359 = 70;
	volatile uint8_t x360 = 0U;
	static volatile int32_t t89 = -420036313;

    t89 = (x357^((x358^x359)&x360));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 831;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MAX;
	static uint8_t x364 = UINT8_MAX;
	static volatile int64_t t90 = -30417LL;

    t90 = (x361^((x362^x363)&x364));

    if (t90 != 831LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = 103843574062057431LL;
	static volatile uint8_t x367 = UINT8_MAX;
	int64_t x368 = 48660044770144078LL;
	int64_t t91 = -1140528045106633566LL;

    t91 = (x365^((x366^x367)&x368));

    if (t91 != -9253541399329016LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	int32_t t92 = 658;

    t92 = (x369^((x370^x371)&x372));

    if (t92 != -2147483521) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	int64_t x375 = 16869952358595328LL;
	int16_t x376 = -10481;
	volatile int64_t t93 = -241944437LL;

    t93 = (x373^((x374^x375)&x376));

    if (t93 != -9206502085493134081LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 1054711067768217LLU;
	uint64_t x379 = 530473319868754LLU;
	int32_t x380 = INT32_MIN;
	uint64_t t94 = 62848781423LLU;

    t94 = (x377^((x378^x379)&x380));

    if (t94 != 18446078631047919001LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MAX;
	uint64_t x384 = 89823261812182LLU;
	volatile uint64_t t95 = 337152559647LLU;

    t95 = (x381^((x382^x383)&x384));

    if (t95 != 18446744073246303616LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t96 = 1573U;

    t96 = (x385^((x386^x387)&x388));

    if (t96 != 255U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1503LL;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MAX;
	static volatile uint32_t x392 = UINT32_MAX;
	volatile int64_t t97 = -340LL;

    t97 = (x389^((x390^x391)&x392));

    if (t97 != -4294936031LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 130881296U;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 252777LLU;
	uint32_t x396 = UINT32_MAX;
	static uint64_t t98 = 36573LLU;

    t98 = (x393^((x394^x395)&x396));

    if (t98 != 2278476921LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x400 = INT32_MIN;
	static int64_t t99 = INT64_MAX;

    t99 = (x397^((x398^x399)&x400));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 67567923318871778LLU;
	int8_t x402 = -1;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 64610566U;
	uint64_t t100 = 1153425LLU;

    t100 = (x401^((x402^x403)&x404));

    if (t100 != 67567923265820386LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x406 = -123;
	int32_t x407 = INT32_MIN;
	volatile int8_t x408 = -9;

    t101 = (x405^((x406^x407)&x408));

    if (t101 != -2147451003) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 189U;
	int32_t t102 = -1703045;

    t102 = (x409^((x410^x411)&x412));

    if (t102 != 11197) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x414 = INT8_MAX;
	int32_t x415 = -884034;
	static int16_t x416 = 0;

    t103 = (x413^((x414^x415)&x416));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	static int64_t x418 = INT64_MIN;

    t104 = (x417^((x418^x419)&x420));

    if (t104 != -174897330LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = -1;
	int16_t x424 = INT16_MIN;
	int32_t t105 = -240505;

    t105 = (x421^((x422^x423)&x424));

    if (t105 != 15) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x427 = -2;
	uint32_t x428 = 68U;
	volatile uint32_t t106 = 31544U;

    t106 = (x425^((x426^x427)&x428));

    if (t106 != 207799U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 20U;
	volatile uint16_t x431 = UINT16_MAX;
	static int32_t x432 = INT32_MIN;
	int32_t t107 = -135;

    t107 = (x429^((x430^x431)&x432));

    if (t107 != -2147483628) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MIN;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = -194;

    t108 = (x433^((x434^x435)&x436));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = 0;
	int64_t x438 = 1532878621125LL;
	int16_t x440 = INT16_MIN;
	volatile int64_t t109 = -3970696976LL;

    t109 = (x437^((x438^x439)&x440));

    if (t109 != -9223370503976157184LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = 2016LL;
	int8_t x442 = INT8_MIN;
	int32_t x443 = INT32_MAX;
	uint64_t x444 = 281120344503619LLU;
	volatile uint64_t t110 = 458188395909465291LLU;

    t110 = (x441^((x442^x443)&x444));

    if (t110 != 281118494427043LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x446 = -43;
	int32_t x447 = 49199;
	int64_t x448 = INT64_MAX;
	int64_t t111 = 13131050529399LL;

    t111 = (x445^((x446^x447)&x448));

    if (t111 != 9223372036854725723LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int32_t x450 = 923;
	uint32_t x452 = 7740502U;
	volatile uint32_t t112 = 63260632U;

    t112 = (x449^((x450^x451)&x452));

    if (t112 != 2147483730U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = 989259744639774LLU;
	uint16_t x455 = UINT16_MAX;
	volatile int32_t x456 = -1;
	volatile uint64_t t113 = 2793560302777021LLU;

    t113 = (x453^((x454^x455)&x456));

    if (t113 != 18445754813964909409LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	static int32_t x458 = INT32_MIN;
	int64_t t114 = 2LL;

    t114 = (x457^((x458^x459)&x460));

    if (t114 != -9223372034707301248LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MIN;
	static int32_t x464 = -1;
	int32_t t115 = 91001;

    t115 = (x461^((x462^x463)&x464));

    if (t115 != 2147450881) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	static int8_t x466 = -29;
	volatile int8_t x467 = 3;
	uint32_t x468 = 133151560U;
	static volatile uint32_t t116 = 319U;

    t116 = (x465^((x466^x467)&x468));

    if (t116 != 4161815743U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	uint64_t x470 = 2734191327307549596LLU;
	volatile int8_t x471 = 1;
	int64_t x472 = 288892279202582212LL;
	volatile uint64_t t117 = 13359204LLU;

    t117 = (x469^((x470^x471)&x472));

    if (t117 != 8935061920070235515LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	int8_t x475 = 0;
	int64_t x476 = 458733158845LL;

    t118 = (x473^((x474^x475)&x476));

    if (t118 != -458733190723LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	static int64_t x478 = INT64_MIN;
	uint32_t x479 = UINT32_MAX;
	uint8_t x480 = 7U;

    t119 = (x477^((x478^x479)&x480));

    if (t119 != -32761LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 6U;
	int8_t x482 = -1;
	int16_t x483 = -1003;
	int32_t t120 = 192477;

    t120 = (x481^((x482^x483)&x484));

    if (t120 != 910) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 3354U;
	int16_t x486 = -1;
	volatile uint64_t x487 = UINT64_MAX;
	volatile uint64_t x488 = 21703920615240794LLU;

    t121 = (x485^((x486^x487)&x488));

    if (t121 != 3354LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int64_t x490 = INT64_MAX;
	int8_t x491 = -1;
	int8_t x492 = 15;

    t122 = (x489^((x490^x491)&x492));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int32_t x494 = INT32_MIN;
	static int32_t x496 = 3;
	int64_t t123 = 52518143363917LL;

    t123 = (x493^((x494^x495)&x496));

    if (t123 != -2147483645LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 2U;
	static int64_t x499 = -17914443LL;
	volatile int32_t x500 = INT32_MIN;
	volatile int64_t t124 = -4LL;

    t124 = (x497^((x498^x499)&x500));

    if (t124 != 2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 13U;
	int16_t x502 = INT16_MAX;
	int64_t x503 = INT64_MIN;
	volatile int16_t x504 = INT16_MIN;

    t125 = (x501^((x502^x503)&x504));

    if (t125 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = -39;
	int8_t x507 = -1;
	int32_t t126 = -1910;

    t126 = (x505^((x506^x507)&x508));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	volatile int64_t t127 = 104754006122493LL;

    t127 = (x509^((x510^x511)&x512));

    if (t127 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 2047695LLU;
	uint32_t x515 = 2U;
	volatile uint64_t t128 = 3947LLU;

    t128 = (x513^((x514^x515)&x516));

    if (t128 != 4292919602LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = 1;
	uint8_t x518 = 4U;
	int16_t x520 = -1;

    t129 = (x517^((x518^x519)&x520));

    if (t129 != -2147483643) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int8_t x522 = 5;
	int16_t x524 = INT16_MIN;

    t130 = (x521^((x522^x523)&x524));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MAX;
	int8_t x527 = -1;
	int64_t x528 = -1LL;
	volatile uint64_t t131 = 1823740820522720344LLU;

    t131 = (x525^((x526^x527)&x528));

    if (t131 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	int32_t x530 = INT32_MAX;
	int64_t x531 = INT64_MAX;
	static volatile int64_t t132 = 94LL;

    t132 = (x529^((x530^x531)&x532));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MAX;
	int64_t x534 = -1LL;
	static uint8_t x536 = 6U;

    t133 = (x533^((x534^x535)&x536));

    if (t133 != 2147483641LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MAX;
	int16_t x538 = 10;
	static int64_t x539 = INT64_MAX;
	int8_t x540 = 14;
	volatile int64_t t134 = 445LL;

    t134 = (x537^((x538^x539)&x540));

    if (t134 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	uint32_t x542 = 28U;
	static volatile int64_t x544 = INT64_MIN;

    t135 = (x541^((x542^x543)&x544));

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x546 = 671597;
	static int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MAX;
	int64_t t136 = -2858LL;

    t136 = (x545^((x546^x547)&x548));

    if (t136 != 9223372036854103931LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x550 = 35U;
	int32_t x552 = -1;

    t137 = (x549^((x550^x551)&x552));

    if (t137 != 18446744069414617052LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 2695859;
	static uint8_t x554 = 3U;
	uint64_t x555 = 129926182LLU;
	static volatile uint8_t x556 = 14U;
	uint64_t t138 = 2067653LLU;

    t138 = (x553^((x554^x555)&x556));

    if (t138 != 2695863LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MAX;
	static uint8_t x558 = 4U;
	static uint16_t x559 = 656U;
	uint64_t x560 = 2LLU;
	volatile uint64_t t139 = 35434777654211770LLU;

    t139 = (x557^((x558^x559)&x560));

    if (t139 != 127LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 2823LL;
	uint8_t x562 = 40U;
	volatile int8_t x563 = -6;
	int64_t t140 = 68665LL;

    t140 = (x561^((x562^x563)&x564));

    if (t140 != -9223372036854772985LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 4493243202648882LLU;
	static uint64_t x566 = UINT64_MAX;
	static volatile uint8_t x567 = 29U;
	volatile uint64_t t141 = 3LLU;

    t141 = (x565^((x566^x567)&x568));

    if (t141 != 4493243202648882LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x569 = 0U;
	volatile int16_t x571 = INT16_MAX;
	uint64_t t142 = 33132288724861LLU;

    t142 = (x569^((x570^x571)&x572));

    if (t142 != 1180001462540850LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 12810007LL;
	int8_t x576 = INT8_MAX;

    t143 = (x573^((x574^x575)&x576));

    if (t143 != 12810007LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = INT16_MAX;
	volatile int32_t x578 = 557;
	uint8_t x579 = 1U;
	uint64_t x580 = 100234365LLU;

    t144 = (x577^((x578^x579)&x580));

    if (t144 != 32723LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 65U;
	int16_t x582 = INT16_MIN;
	volatile int32_t t145 = -4795736;

    t145 = (x581^((x582^x583)&x584));

    if (t145 != 32705) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = 6;
	static uint64_t x586 = 638LLU;
	static int16_t x587 = INT16_MAX;
	uint16_t x588 = 2535U;
	volatile uint64_t t146 = 11LLU;

    t146 = (x585^((x586^x587)&x588));

    if (t146 != 2439LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -25;
	int16_t x590 = -1;
	static int32_t x592 = INT32_MIN;
	int64_t t147 = 317450963010LL;

    t147 = (x589^((x590^x591)&x592));

    if (t147 != 534723428327LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -225LL;
	volatile uint64_t x594 = 1965763LLU;
	int64_t x595 = -412050164785575LL;
	int16_t x596 = -14969;
	volatile uint64_t t148 = 42331881966LLU;

    t148 = (x593^((x594^x595)&x596));

    if (t148 != 412050164449181LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 1298U;
	int8_t x598 = INT8_MAX;
	uint64_t x600 = 75395458783887939LLU;
	volatile uint64_t t149 = 421539LLU;

    t149 = (x597^((x598^x599)&x600));

    if (t149 != 1361LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 16599192U;
	int16_t x602 = INT16_MAX;
	int64_t x604 = -409171071LL;
	uint64_t t150 = 428300LLU;

    t150 = (x601^((x602^x603)&x604));

    if (t150 != 16597784LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	int32_t x606 = 101;
	volatile int64_t x607 = INT64_MIN;
	volatile int16_t x608 = -1;

    t151 = (x605^((x606^x607)&x608));

    if (t151 != 9223372034707292261LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	static int64_t x610 = INT64_MIN;
	static int64_t x611 = INT64_MIN;

    t152 = (x609^((x610^x611)&x612));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 21;
	uint16_t x615 = UINT16_MAX;
	uint64_t t153 = 3416LLU;

    t153 = (x613^((x614^x615)&x616));

    if (t153 != 163LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int64_t x619 = -1LL;
	int64_t x620 = INT64_MIN;
	volatile int64_t t154 = -3958013467323146388LL;

    t154 = (x617^((x618^x619)&x620));

    if (t154 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	volatile int32_t x622 = -1021556843;
	int64_t x623 = -1LL;
	uint32_t x624 = UINT32_MAX;

    t155 = (x621^((x622^x623)&x624));

    if (t155 != -9223372035833218966LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = 6429245;
	volatile int64_t x627 = INT64_MIN;
	volatile int64_t x628 = 0LL;
	int64_t t156 = -419978959LL;

    t156 = (x625^((x626^x627)&x628));

    if (t156 != -128LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = UINT16_MAX;
	int64_t x630 = -36200608646293LL;
	uint64_t x631 = 30158LLU;
	int8_t x632 = -1;
	static volatile uint64_t t157 = 16366139LLU;

    t157 = (x629^((x630^x631)&x632));

    if (t157 != 18446707873100869978LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	int16_t x634 = INT16_MIN;
	static uint16_t x635 = 1000U;
	static volatile uint16_t x636 = 1U;
	int64_t t158 = INT64_MIN;

    t158 = (x633^((x634^x635)&x636));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	static int8_t x638 = -14;
	static volatile int64_t x639 = INT64_MIN;
	int8_t x640 = INT8_MAX;
	volatile int64_t t159 = -1LL;

    t159 = (x637^((x638^x639)&x640));

    if (t159 != -32654LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int64_t x642 = INT64_MAX;
	int16_t x643 = -1;

    t160 = (x641^((x642^x643)&x644));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	static volatile uint16_t x646 = 5U;
	int64_t x647 = -1LL;
	int64_t x648 = 328196804800100166LL;
	volatile int64_t t161 = -464LL;

    t161 = (x645^((x646^x647)&x648));

    if (t161 != 328196804800104637LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x649 = INT64_MIN;
	static int64_t x650 = INT64_MIN;
	uint8_t x652 = 29U;
	static uint64_t t162 = 1356345LLU;

    t162 = (x649^((x650^x651)&x652));

    if (t162 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = -1;
	int8_t x655 = -54;
	uint64_t x656 = 32967889671LLU;
	volatile uint64_t t163 = 42341910922153LLU;

    t163 = (x653^((x654^x655)&x656));

    if (t163 != 18446744040741666810LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static volatile int32_t x658 = 212376;
	uint64_t x659 = 1446273361091LLU;
	static uint32_t x660 = 29363U;
	static volatile uint64_t t164 = 8936834LLU;

    t164 = (x657^((x658^x659)&x660));

    if (t164 != 61420LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -2;
	uint16_t x662 = UINT16_MAX;
	int8_t x663 = INT8_MIN;
	static uint32_t x664 = UINT32_MAX;
	static volatile uint32_t t165 = 213U;

    t165 = (x661^((x662^x663)&x664));

    if (t165 != 65409U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = 2;
	int32_t x666 = -1;
	volatile int16_t x667 = -1;
	static volatile int32_t t166 = -27521;

    t166 = (x665^((x666^x667)&x668));

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 125U;
	volatile int16_t x671 = INT16_MIN;
	static int32_t x672 = INT32_MIN;
	volatile int32_t t167 = 126074;

    t167 = (x669^((x670^x671)&x672));

    if (t167 != 125) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 5U;
	int64_t x674 = 422217059036060LL;
	static int32_t x676 = 4;
	volatile uint64_t t168 = 217148205LLU;

    t168 = (x673^((x674^x675)&x676));

    if (t168 != 5LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 91U;
	static int32_t x678 = -25937;
	int8_t x679 = -1;
	volatile int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -812885;

    t169 = (x677^((x678^x679)&x680));

    if (t169 != 91) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = 9;
	volatile uint8_t x683 = 46U;
	int8_t x684 = -1;
	int64_t t170 = -1361195454942288LL;

    t170 = (x681^((x682^x683)&x684));

    if (t170 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint32_t x686 = 58170U;
	uint8_t x687 = 6U;
	int64_t x688 = -16253096480897LL;
	int64_t t171 = -2158959LL;

    t171 = (x685^((x686^x687)&x688));

    if (t171 != -2147474628LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = -1;
	int32_t x691 = 7;
	int64_t x692 = -1LL;
	static int64_t t172 = -6093564887693LL;

    t172 = (x689^((x690^x691)&x692));

    if (t172 != -249LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MIN;
	uint32_t x695 = 23U;
	static int8_t x696 = INT8_MIN;
	volatile uint32_t t173 = 10481U;

    t173 = (x693^((x694^x695)&x696));

    if (t173 != 4294934576U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x699 = 0;
	static int16_t x700 = 1;
	volatile uint64_t t174 = 216595782LLU;

    t174 = (x697^((x698^x699)&x700));

    if (t174 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = -246621455808LL;
	int16_t x704 = INT16_MIN;
	volatile int64_t t175 = 9877247038LL;

    t175 = (x701^((x702^x703)&x704));

    if (t175 != -246621455808LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MAX;
	int16_t x707 = 0;
	volatile int8_t x708 = 20;
	volatile int64_t t176 = 14021LL;

    t176 = (x705^((x706^x707)&x708));

    if (t176 != -22LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	int16_t x711 = INT16_MIN;
	uint8_t x712 = 85U;
	int32_t t177 = -727893;

    t177 = (x709^((x710^x711)&x712));

    if (t177 != -86) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	uint32_t x714 = 40394U;
	volatile int32_t x715 = INT32_MIN;
	int64_t x716 = 171958971LL;

    t178 = (x713^((x714^x715)&x716));

    if (t178 != -32907LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	uint32_t x719 = 434U;
	int32_t x720 = 5;

    t179 = (x717^((x718^x719)&x720));

    if (t179 != 4294967168U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x723 = INT16_MIN;
	int64_t x724 = -1LL;
	volatile int64_t t180 = 716LL;

    t180 = (x721^((x722^x723)&x724));

    if (t180 != -64516LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 1;
	uint16_t x727 = 671U;
	uint32_t x728 = 0U;
	volatile uint32_t t181 = 42U;

    t181 = (x725^((x726^x727)&x728));

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MIN;
	int64_t x731 = -1LL;
	volatile uint8_t x732 = UINT8_MAX;
	int64_t t182 = 13422LL;

    t182 = (x729^((x730^x731)&x732));

    if (t182 != -2147483393LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 91849U;
	int8_t x736 = INT8_MAX;
	uint32_t t183 = 840U;

    t183 = (x733^((x734^x735)&x736));

    if (t183 != 91856U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 81LLU;
	static volatile uint32_t x739 = 178986U;
	int32_t x740 = -1;

    t184 = (x737^((x738^x739)&x740));

    if (t184 != 179057LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	int64_t x743 = -1LL;
	static uint8_t x744 = UINT8_MAX;
	volatile uint64_t t185 = 85LLU;

    t185 = (x741^((x742^x743)&x744));

    if (t185 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x745 = UINT64_MAX;
	int8_t x746 = 0;
	volatile int16_t x747 = INT16_MIN;
	volatile uint64_t t186 = 3LLU;

    t186 = (x745^((x746^x747)&x748));

    if (t186 != 2147483647LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MIN;
	uint8_t x751 = UINT8_MAX;
	volatile int8_t x752 = INT8_MAX;
	volatile int64_t t187 = 372866LL;

    t187 = (x749^((x750^x751)&x752));

    if (t187 != -32641LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 2U;
	static int16_t x754 = -1;
	int64_t x755 = INT64_MIN;
	static uint64_t x756 = 56335375717925LLU;

    t188 = (x753^((x754^x755)&x756));

    if (t188 != 56335375717927LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = -1;
	static volatile int32_t x758 = 8081;
	uint16_t x759 = 56U;
	int32_t x760 = INT32_MAX;
	volatile int32_t t189 = 174454973;

    t189 = (x757^((x758^x759)&x760));

    if (t189 != -8106) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MIN;
	volatile uint8_t x764 = 10U;
	int64_t t190 = -67903441177LL;

    t190 = (x761^((x762^x763)&x764));

    if (t190 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	volatile int16_t x766 = INT16_MIN;
	uint64_t x767 = 9LLU;
	uint64_t t191 = 22531161943317884LLU;

    t191 = (x765^((x766^x767)&x768));

    if (t191 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MIN;
	static int16_t x771 = -1;
	uint8_t x772 = 6U;
	static int32_t t192 = 607098363;

    t192 = (x769^((x770^x771)&x772));

    if (t192 != -32766) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	uint64_t x774 = 143015924510LLU;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = -1;
	volatile uint64_t t193 = 8906084808113936LLU;

    t193 = (x773^((x774^x775)&x776));

    if (t193 != 143015914721LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 89;
	static int64_t x778 = -1LL;
	volatile uint16_t x779 = 4U;
	int64_t t194 = -3364LL;

    t194 = (x777^((x778^x779)&x780));

    if (t194 != 6536LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 21;
	volatile int64_t x782 = -4166712426LL;
	int64_t x783 = INT64_MIN;
	int16_t x784 = -1;
	volatile int64_t t195 = -4LL;

    t195 = (x781^((x782^x783)&x784));

    if (t195 != 9223372032688063363LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1063;
	volatile int8_t x786 = 0;
	static uint8_t x788 = UINT8_MAX;
	volatile uint64_t t196 = 299443831781591LLU;

    t196 = (x785^((x786^x787)&x788));

    if (t196 != 18446744073709550407LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x790 = INT32_MIN;
	static int16_t x792 = INT16_MIN;
	int64_t t197 = 6038092773516LL;

    t197 = (x789^((x790^x791)&x792));

    if (t197 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 31U;
	int16_t x794 = 1;
	int16_t x796 = INT16_MAX;
	volatile uint32_t t198 = 21830U;

    t198 = (x793^((x794^x795)&x796));

    if (t198 != 32670U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	int16_t x798 = INT16_MIN;
	static int32_t x799 = -2;
	int8_t x800 = 0;
	volatile int32_t t199 = -23;

    t199 = (x797^((x798^x799)&x800));

    if (t199 != 127) { NG(); } else { ; }
	
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

