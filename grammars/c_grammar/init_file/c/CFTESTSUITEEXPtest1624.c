
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

static int64_t x4 = -1950LL;
int64_t x5 = INT64_MAX;
uint8_t x15 = 89U;
static volatile uint32_t x16 = 2110U;
volatile uint32_t x17 = UINT32_MAX;
uint32_t x23 = UINT32_MAX;
int64_t t5 = -4LL;
int8_t x29 = -1;
uint64_t x36 = 2012056LLU;
int32_t x38 = 22485044;
uint64_t x47 = 54258724355642LLU;
int64_t x48 = INT64_MAX;
static uint32_t x50 = UINT32_MAX;
static uint16_t x52 = UINT16_MAX;
int16_t x63 = INT16_MAX;
volatile int16_t x68 = -26;
volatile int64_t t17 = 3578372414752524LL;
int64_t x84 = INT64_MIN;
static int32_t x94 = -1;
uint8_t x96 = 9U;
volatile uint32_t x103 = UINT32_MAX;
volatile int8_t x105 = INT8_MAX;
uint64_t x107 = 7343496208LLU;
static int8_t x108 = -47;
volatile uint64_t t26 = 1237232492LLU;
uint64_t t27 = 102524654937LLU;
int32_t t28 = -266066007;
uint64_t x127 = 75LLU;
static int64_t x133 = -1LL;
static volatile int8_t x136 = INT8_MIN;
int32_t t32 = 15543;
int64_t x150 = -1LL;
int8_t x153 = INT8_MIN;
uint64_t x154 = 6647190LLU;
uint16_t x158 = 7U;
volatile uint16_t x167 = 660U;
int32_t x170 = -1;
static volatile int8_t x175 = -1;
static int64_t t41 = INT64_MIN;
int32_t t42 = -883;
uint32_t x181 = UINT32_MAX;
uint8_t x183 = 120U;
static int8_t x184 = -1;
volatile uint32_t t43 = 801U;
uint32_t x185 = 2U;
volatile uint32_t t44 = 946U;
int32_t x190 = INT32_MIN;
uint64_t x192 = 2594205863162673800LLU;
uint16_t x193 = 52U;
static uint64_t t47 = 90607941LLU;
int8_t x201 = -1;
int32_t x202 = INT32_MAX;
volatile uint32_t t48 = UINT32_MAX;
uint64_t x215 = 124933941434400811LLU;
int64_t t52 = 3064LL;
static volatile int64_t x222 = INT64_MAX;
int64_t t54 = -101764770477842LL;
int64_t x232 = -1LL;
static int64_t t55 = -461579172165LL;
volatile int64_t x233 = -1LL;
volatile int64_t t56 = 5036592201241LL;
volatile int8_t x240 = INT8_MIN;
static volatile int8_t x242 = INT8_MIN;
static int64_t t58 = 109690052189813LL;
int16_t x247 = -1;
static int32_t t61 = INT32_MIN;
static int32_t t62 = -523;
volatile int64_t x264 = INT64_MAX;
volatile int16_t x267 = INT16_MIN;
static int16_t x268 = INT16_MIN;
uint16_t x269 = 25087U;
volatile uint64_t x271 = UINT64_MAX;
static int32_t t69 = 151;
int8_t x291 = -1;
int64_t x292 = -1LL;
volatile int64_t t70 = -21LL;
uint32_t x293 = 23U;
int32_t x309 = INT32_MAX;
volatile int64_t x317 = INT64_MIN;
static volatile int32_t t79 = -30;
static uint64_t x341 = 1320LLU;
static int64_t x344 = -3897559LL;
volatile uint64_t t82 = 2LLU;
int8_t x347 = INT8_MIN;
int16_t x353 = 461;
volatile int64_t x355 = INT64_MIN;
int8_t x363 = INT8_MAX;
int64_t x367 = -1LL;
volatile int32_t t88 = -697;
uint64_t x370 = UINT64_MAX;
uint16_t x373 = 7U;
static int16_t x385 = -6905;
int32_t x386 = INT32_MAX;
uint16_t x388 = 9U;
volatile int32_t t93 = -4919;
uint32_t t94 = 568U;
volatile int16_t x406 = INT16_MAX;
uint16_t x408 = 10429U;
uint8_t x418 = 5U;
int8_t x421 = INT8_MIN;
volatile int32_t t101 = -174703028;
static int32_t x444 = -1;
volatile int32_t t103 = 146992372;
int32_t t105 = 508462;
int8_t x454 = 1;
int16_t x456 = INT16_MAX;
uint64_t x461 = 82320085047160LLU;
int64_t x463 = INT64_MIN;
static int16_t x467 = INT16_MAX;
static uint8_t x468 = UINT8_MAX;
int64_t x473 = INT64_MIN;
static uint64_t x476 = UINT64_MAX;
static int8_t x477 = INT8_MIN;
static uint8_t x481 = 3U;
int64_t x490 = -110LL;
volatile uint8_t x492 = UINT8_MAX;
int32_t t116 = -18679957;
uint64_t x500 = 2130728LLU;
volatile uint64_t t117 = UINT64_MAX;
uint8_t x504 = 94U;
int32_t t118 = 71493;
uint32_t x507 = 222230960U;
int8_t x511 = 1;
uint32_t x517 = 26U;
volatile int16_t x521 = -1;
static volatile int64_t x525 = -1LL;
uint16_t x528 = 466U;
volatile uint64_t t125 = 333855009538635LLU;
int16_t x534 = 21;
int16_t x536 = 3222;
volatile uint16_t x539 = UINT16_MAX;
int64_t x544 = 2392983283516907579LL;
volatile uint32_t x546 = 33356U;
int8_t x547 = -1;
uint16_t x548 = 1U;
uint8_t x551 = 5U;
volatile int32_t x561 = INT32_MIN;
int16_t x562 = INT16_MIN;
uint8_t x570 = 5U;
int64_t x571 = INT64_MIN;
uint32_t t136 = UINT32_MAX;
static int32_t x578 = INT32_MIN;
int16_t x581 = INT16_MAX;
static int32_t x584 = 1018442;
int64_t x590 = 4882953LL;
static uint16_t x600 = UINT16_MAX;
int32_t x602 = -243797569;
int32_t x603 = INT32_MAX;
static volatile int64_t x604 = 406787326705615735LL;
int16_t x606 = INT16_MIN;
volatile uint64_t x607 = 384617796143912393LLU;
volatile int32_t t144 = -989878194;
static int64_t x612 = -1LL;
volatile int64_t t145 = -3069LL;
int16_t x615 = -188;
uint32_t x617 = 756392U;
int8_t x619 = -6;
volatile int16_t x622 = INT16_MIN;
uint64_t x624 = 24009173LLU;
uint64_t x630 = UINT64_MAX;
int32_t x640 = -31581;
uint16_t x645 = 27005U;
static int32_t x647 = -1;
volatile uint64_t x653 = 7495105762411184LLU;
uint16_t x663 = 10U;
static int64_t x670 = -1LL;
int32_t t160 = -305081879;
static int32_t x673 = 4255;
uint64_t x675 = 15819LLU;
int8_t x676 = INT8_MAX;
int64_t x677 = -5997175LL;
static int8_t x678 = -1;
static int64_t x683 = 8837860695796LL;
static int64_t x688 = 328344360622522986LL;
int64_t t164 = -39814046787247671LL;
volatile int64_t x690 = INT64_MIN;
int16_t x691 = INT16_MIN;
volatile int32_t t165 = 20803977;
int16_t x693 = INT16_MIN;
int8_t x695 = -7;
int32_t x696 = -1;
int64_t x705 = INT64_MIN;
uint8_t x712 = 1U;
uint32_t x716 = 138848U;
static uint32_t x720 = UINT32_MAX;
static int16_t x726 = 501;
int32_t x727 = INT32_MIN;
uint8_t x735 = UINT8_MAX;
uint64_t x749 = UINT64_MAX;
int8_t x752 = 31;
int16_t x757 = INT16_MAX;
uint8_t x758 = 9U;
volatile uint16_t x761 = UINT16_MAX;
static int8_t x763 = INT8_MAX;
uint32_t x765 = 6781U;
int16_t x768 = INT16_MIN;
int32_t x775 = -34392;
volatile uint32_t t187 = 6U;
static uint8_t x781 = UINT8_MAX;
int32_t x782 = INT32_MIN;
volatile int16_t x784 = -1;
uint64_t x786 = UINT64_MAX;
volatile int64_t x788 = -1LL;
int8_t x805 = 14;
static int64_t x808 = INT64_MIN;
volatile int8_t x810 = INT8_MIN;
int16_t x822 = INT16_MIN;
static int32_t t198 = -62585048;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x3 = -1LL;
	volatile int64_t t0 = -5LL;

    t0 = (x1^((x2>x3)/x4));

    if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MAX;
	int64_t x7 = 14338LL;
	int16_t x8 = INT16_MIN;
	static int64_t t1 = INT64_MAX;

    t1 = (x5^((x6>x7)/x8));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 1U;
	volatile int16_t x10 = -5763;
	volatile int64_t x11 = INT64_MIN;
	uint64_t x12 = 85LLU;
	uint64_t t2 = 222LLU;

    t2 = (x9^((x10>x11)/x12));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int32_t x14 = INT32_MIN;
	uint32_t t3 = 1368346256U;

    t3 = (x13^((x14>x15)/x16));

    if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = UINT8_MAX;
	int64_t x19 = -2033156711709LL;
	int32_t x20 = 147405805;
	volatile uint32_t t4 = UINT32_MAX;

    t4 = (x17^((x18>x19)/x20));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -14376775884288600LL;
	int16_t x22 = INT16_MAX;
	static volatile int16_t x24 = INT16_MIN;

    t5 = (x21^((x22>x23)/x24));

    if (t5 != -14376775884288600LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 1U;
	int64_t x26 = -4337830714542824906LL;
	int8_t x27 = 4;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 50554193444017347LLU;

    t6 = (x25^((x26>x27)/x28));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 518608762588375098LLU;
	int16_t x31 = 767;
	uint64_t x32 = 6395312291004492LLU;
	volatile uint64_t t7 = UINT64_MAX;

    t7 = (x29^((x30>x31)/x32));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 177U;
	uint64_t t8 = 112904821LLU;

    t8 = (x33^((x34>x35)/x36));

    if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 6591LLU;
	static volatile uint16_t x39 = 523U;
	static uint8_t x40 = 8U;
	uint64_t t9 = 22LLU;

    t9 = (x37^((x38>x39)/x40));

    if (t9 != 6591LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MAX;
	uint32_t x42 = 2059062259U;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 512891422;

    t10 = (x41^((x42>x43)/x44));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 962860900LLU;
	static uint8_t x46 = 1U;
	uint64_t t11 = 12071LLU;

    t11 = (x45^((x46>x47)/x48));

    if (t11 != 962860900LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int8_t x51 = 0;
	static int32_t t12 = -14401788;

    t12 = (x49^((x50>x51)/x52));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	static uint8_t x55 = 0U;
	static volatile uint8_t x56 = 2U;
	volatile uint32_t t13 = UINT32_MAX;

    t13 = (x53^((x54>x55)/x56));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 0U;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 5;

    t14 = (x57^((x58>x59)/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -118;
	int16_t x62 = INT16_MIN;
	volatile int8_t x64 = -1;
	static volatile int32_t t15 = 27;

    t15 = (x61^((x62>x63)/x64));

    if (t15 != -118) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 2;
	int32_t x66 = -1;
	volatile int32_t x67 = INT32_MIN;
	static int32_t t16 = 610957900;

    t16 = (x65^((x66>x67)/x68));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x77 = -1LL;
	static volatile int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = UINT8_MAX;

    t17 = (x77^((x78>x79)/x80));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MAX;
	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = -100;
	volatile int64_t t18 = 249179059015394LL;

    t18 = (x81^((x82>x83)/x84));

    if (t18 != 2147483647LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	int8_t x87 = 12;
	static uint64_t x88 = UINT64_MAX;
	volatile uint64_t t19 = 54593892805094458LLU;

    t19 = (x85^((x86>x87)/x88));

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = INT32_MAX;
	int16_t x90 = -514;
	int32_t x91 = INT32_MIN;
	int32_t x92 = -2618;
	volatile int32_t t20 = INT32_MAX;

    t20 = (x89^((x90>x91)/x92));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	int16_t x95 = INT16_MAX;
	volatile int64_t t21 = 3469LL;

    t21 = (x93^((x94>x95)/x96));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 1377193564LLU;
	int64_t x98 = -210097612601065424LL;
	int32_t x99 = -1;
	int8_t x100 = -10;
	uint64_t t22 = 112143348585944218LLU;

    t22 = (x97^((x98>x99)/x100));

    if (t22 != 1377193564LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -2420;
	static uint64_t x102 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t23 = 10;

    t23 = (x101^((x102>x103)/x104));

    if (t23 != -2420) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MIN;
	static int32_t t24 = -2;

    t24 = (x105^((x106>x107)/x108));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x109 = 3274212LLU;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	uint64_t t25 = 15659635248533440LLU;

    t25 = (x109^((x110>x111)/x112));

    if (t25 != 3274212LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x113 = 61905298205353704LLU;
	static uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile int64_t x116 = -1LL;

    t26 = (x113^((x114>x115)/x116));

    if (t26 != 61905298205353704LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x117 = 11212954U;
	uint16_t x118 = 32092U;
	static uint32_t x119 = 5U;
	static volatile uint64_t x120 = UINT64_MAX;

    t27 = (x117^((x118>x119)/x120));

    if (t27 != 11212954LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = -1;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MAX;

    t28 = (x121^((x122>x123)/x124));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -7701624;
	uint8_t x128 = 7U;
	static volatile int32_t t29 = -155;

    t29 = (x125^((x126>x127)/x128));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 7921U;
	int64_t x130 = -1LL;
	uint32_t x131 = 3U;
	uint16_t x132 = 1372U;
	static int32_t t30 = 19766;

    t30 = (x129^((x130>x131)/x132));

    if (t30 != 7921) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x134 = INT32_MAX;
	static int64_t x135 = 46786898279635894LL;
	int64_t t31 = -448793LL;

    t31 = (x133^((x134>x135)/x136));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = 2149167;
	static volatile int64_t x138 = INT64_MIN;
	int32_t x139 = 3421;
	static int32_t x140 = -1;

    t32 = (x137^((x138>x139)/x140));

    if (t32 != 2149167) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = 0;
	static uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t33 = 1;

    t33 = (x141^((x142>x143)/x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = UINT32_MAX;
	int8_t x146 = -1;
	int32_t x147 = 0;
	uint16_t x148 = 16197U;
	uint32_t t34 = UINT32_MAX;

    t34 = (x145^((x146>x147)/x148));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x149 = 359U;
	int8_t x151 = -1;
	static int32_t x152 = 53246340;
	volatile int32_t t35 = 74686154;

    t35 = (x149^((x150>x151)/x152));

    if (t35 != 359) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x155 = -925;
	volatile int64_t x156 = INT64_MIN;
	int64_t t36 = -17163562422517565LL;

    t36 = (x153^((x154>x155)/x156));

    if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MAX;
	int16_t x159 = -11462;
	static int32_t x160 = -1;
	int32_t t37 = INT32_MIN;

    t37 = (x157^((x158>x159)/x160));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x161 = -102330918LL;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 11278143842LLU;
	int8_t x164 = INT8_MAX;
	volatile int64_t t38 = 2336436LL;

    t38 = (x161^((x162>x163)/x164));

    if (t38 != -102330918LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x165 = -1LL;
	uint16_t x166 = 4512U;
	uint32_t x168 = 113U;
	volatile int64_t t39 = 45555006200LL;

    t39 = (x165^((x166>x167)/x168));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	static uint16_t x171 = UINT16_MAX;
	static uint64_t x172 = 257777982136414980LLU;
	uint64_t t40 = 2012165267028904742LLU;

    t40 = (x169^((x170>x171)/x172));

    if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	volatile int16_t x176 = 8805;

    t41 = (x173^((x174>x175)/x176));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = -1;
	int16_t x178 = -1;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MAX;

    t42 = (x177^((x178>x179)/x180));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x182 = INT16_MAX;

    t43 = (x181^((x182>x183)/x184));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x186 = 1;
	static volatile int16_t x187 = -1;
	int16_t x188 = INT16_MIN;

    t44 = (x185^((x186>x187)/x188));

    if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 192U;
	volatile int32_t x191 = 3;
	static uint64_t t45 = 8068LLU;

    t45 = (x189^((x190>x191)/x192));

    if (t45 != 192LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t46 = 742796449;

    t46 = (x193^((x194>x195)/x196));

    if (t46 != 52) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x197 = 222384LLU;
	int8_t x198 = INT8_MIN;
	static int8_t x199 = INT8_MAX;
	uint32_t x200 = 10U;

    t47 = (x197^((x198>x199)/x200));

    if (t47 != 222384LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x203 = -245;
	uint32_t x204 = 1401U;

    t48 = (x201^((x202>x203)/x204));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MAX;
	int32_t x206 = 0;
	static int32_t x207 = INT32_MIN;
	uint32_t x208 = 4540220U;
	static uint32_t t49 = 225U;

    t49 = (x205^((x206>x207)/x208));

    if (t49 != 127U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x209 = 585942129U;
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MAX;
	int16_t x212 = -8143;
	volatile uint32_t t50 = 608U;

    t50 = (x209^((x210>x211)/x212));

    if (t50 != 585942129U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = 1;
	static uint64_t x214 = 585LLU;
	uint32_t x216 = 1485074U;
	uint32_t t51 = 1065105U;

    t51 = (x213^((x214>x215)/x216));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -246409;
	uint16_t x218 = 3U;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -794612LL;

    t52 = (x217^((x218>x219)/x220));

    if (t52 != -246409LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = INT64_MIN;
	static int8_t x223 = -1;
	volatile int16_t x224 = -1;
	volatile int64_t t53 = INT64_MAX;

    t53 = (x221^((x222>x223)/x224));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MAX;
	int8_t x226 = -5;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MAX;

    t54 = (x225^((x226>x227)/x228));

    if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x229 = 111U;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;

    t55 = (x229^((x230>x231)/x232));

    if (t55 != -112LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;

    t56 = (x233^((x234>x235)/x236));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 17168U;
	static int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	volatile int32_t t57 = -403;

    t57 = (x237^((x238>x239)/x240));

    if (t57 != 17168) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x241 = 0U;
	volatile int16_t x243 = 7;
	int64_t x244 = INT64_MIN;

    t58 = (x241^((x242>x243)/x244));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint16_t x248 = 189U;
	int32_t t59 = 37536756;

    t59 = (x245^((x246>x247)/x248));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = INT16_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	volatile uint32_t x251 = 7838U;
	static int8_t x252 = -1;
	int32_t t60 = -390;

    t60 = (x249^((x250>x251)/x252));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x253 = INT32_MIN;
	uint32_t x254 = 3075252U;
	int32_t x255 = INT32_MIN;
	static int16_t x256 = -9;

    t61 = (x253^((x254>x255)/x256));

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x257 = -1;
	static int32_t x258 = -1;
	int16_t x259 = -1;
	int16_t x260 = -1;

    t62 = (x257^((x258>x259)/x260));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x261 = INT16_MIN;
	volatile int8_t x262 = INT8_MAX;
	uint16_t x263 = 335U;
	volatile int64_t t63 = -68469326314LL;

    t63 = (x261^((x262>x263)/x264));

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x266 = -1;
	int64_t t64 = INT64_MAX;

    t64 = (x265^((x266>x267)/x268));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x270 = INT16_MIN;
	volatile int32_t x272 = 104347;
	static int32_t t65 = 815;

    t65 = (x269^((x270>x271)/x272));

    if (t65 != 25087) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -331261584602923LL;
	volatile uint64_t x274 = 1LLU;
	static volatile int8_t x275 = -1;
	int64_t x276 = 64590501547172LL;
	volatile int64_t t66 = 9982LL;

    t66 = (x273^((x274>x275)/x276));

    if (t66 != -331261584602923LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = -7708527082140LL;
	static int32_t x278 = 1;
	int64_t x279 = INT64_MAX;
	static volatile uint8_t x280 = 19U;
	int64_t t67 = -3396831559719720LL;

    t67 = (x277^((x278>x279)/x280));

    if (t67 != -7708527082140LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x281 = -31;
	uint64_t x282 = 493623LLU;
	int64_t x283 = INT64_MIN;
	static volatile int32_t x284 = INT32_MIN;
	volatile int32_t t68 = -2344415;

    t68 = (x281^((x282>x283)/x284));

    if (t68 != -31) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = 26;
	int16_t x286 = INT16_MIN;
	static int16_t x287 = -1;
	volatile int32_t x288 = -1;

    t69 = (x285^((x286>x287)/x288));

    if (t69 != 26) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = -25678;

    t70 = (x289^((x290>x291)/x292));

    if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x294 = INT8_MIN;
	static int32_t x295 = INT32_MIN;
	static int64_t x296 = 25263301412028LL;
	int64_t t71 = -1612LL;

    t71 = (x293^((x294>x295)/x296));

    if (t71 != 23LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x297 = -1337;
	static volatile int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t72 = 188590LLU;

    t72 = (x297^((x298>x299)/x300));

    if (t72 != 18446744073709550279LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = -33991518509406LL;
	volatile uint16_t x303 = UINT16_MAX;
	static uint64_t x304 = 194803LLU;
	static uint64_t t73 = 6973861896830LLU;

    t73 = (x301^((x302>x303)/x304));

    if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -9;
	static uint16_t x306 = 150U;
	volatile int16_t x307 = -1;
	volatile int32_t x308 = INT32_MIN;
	int32_t t74 = -1408;

    t74 = (x305^((x306>x307)/x308));

    if (t74 != -9) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MAX;
	static int16_t x311 = -1;
	int64_t x312 = -15LL;
	volatile int64_t t75 = -131300058731593LL;

    t75 = (x309^((x310>x311)/x312));

    if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = 40U;
	int32_t x314 = 49938458;
	volatile uint32_t x315 = UINT32_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t76 = -1LL;

    t76 = (x313^((x314>x315)/x316));

    if (t76 != 40LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x318 = 1992U;
	uint16_t x319 = 52U;
	static uint32_t x320 = 2U;
	volatile int64_t t77 = INT64_MIN;

    t77 = (x317^((x318>x319)/x320));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -1LL;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 4U;
	static int32_t x324 = INT32_MIN;
	static volatile int64_t t78 = 50556LL;

    t78 = (x321^((x322>x323)/x324));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 304LLU;
	int64_t x327 = -1442907233875467LL;
	int32_t x328 = -1;

    t79 = (x325^((x326>x327)/x328));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = -510;
	volatile int32_t x334 = -1;
	uint16_t x335 = 96U;
	int16_t x336 = -333;
	int32_t t80 = -218148;

    t80 = (x333^((x334>x335)/x336));

    if (t80 != -510) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = -1;
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	static volatile int64_t x340 = INT64_MIN;
	volatile int64_t t81 = 2649480408014548979LL;

    t81 = (x337^((x338>x339)/x340));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x342 = INT64_MIN;
	int32_t x343 = 2;

    t82 = (x341^((x342>x343)/x344));

    if (t82 != 1320LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = 4;
	uint32_t x348 = 129542314U;
	volatile uint32_t t83 = 51075651U;

    t83 = (x345^((x346>x347)/x348));

    if (t83 != 4294967168U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x349 = INT8_MAX;
	static int8_t x350 = INT8_MIN;
	static volatile int32_t x351 = -423608;
	int16_t x352 = INT16_MIN;
	volatile int32_t t84 = 0;

    t84 = (x349^((x350>x351)/x352));

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x354 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t85 = -594976043;

    t85 = (x353^((x354>x355)/x356));

    if (t85 != 461) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x357 = 459055LLU;
	volatile uint8_t x358 = 36U;
	uint32_t x359 = 116U;
	volatile uint64_t x360 = 1027205793920262500LLU;
	volatile uint64_t t86 = 125368110208LLU;

    t86 = (x357^((x358>x359)/x360));

    if (t86 != 459055LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = 1;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t87 = 0;

    t87 = (x361^((x362>x363)/x364));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = INT8_MIN;
	uint16_t x366 = 2267U;
	static int32_t x368 = INT32_MIN;

    t88 = (x365^((x366>x367)/x368));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x369 = 1181U;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 4;
	int32_t t89 = 0;

    t89 = (x369^((x370>x371)/x372));

    if (t89 != 1181) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x374 = -614364290;
	int32_t x375 = -1;
	int64_t x376 = INT64_MAX;
	volatile int64_t t90 = -7057392569248934LL;

    t90 = (x373^((x374>x375)/x376));

    if (t90 != 7LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = INT64_MIN;
	static uint8_t x378 = 1U;
	volatile uint32_t x379 = UINT32_MAX;
	static int64_t x380 = INT64_MIN;
	int64_t t91 = INT64_MIN;

    t91 = (x377^((x378>x379)/x380));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x387 = -209778LL;
	int32_t t92 = 70276893;

    t92 = (x385^((x386>x387)/x388));

    if (t92 != -6905) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = 69;
	uint64_t x394 = 10LLU;
	int32_t x395 = INT32_MAX;
	volatile int8_t x396 = 1;

    t93 = (x393^((x394>x395)/x396));

    if (t93 != 69) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x397 = 38192U;
	volatile int64_t x398 = -1LL;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = -1;

    t94 = (x397^((x398>x399)/x400));

    if (t94 != 4294929103U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x405 = -1;
	int16_t x407 = INT16_MIN;
	int32_t t95 = -2848560;

    t95 = (x405^((x406>x407)/x408));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x409 = INT32_MAX;
	int16_t x410 = INT16_MAX;
	int16_t x411 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t96 = INT32_MAX;

    t96 = (x409^((x410>x411)/x412));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x413 = INT64_MIN;
	int32_t x414 = -1;
	int8_t x415 = -1;
	static volatile int8_t x416 = -1;
	volatile int64_t t97 = INT64_MIN;

    t97 = (x413^((x414>x415)/x416));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x417 = INT16_MAX;
	int16_t x419 = 49;
	int16_t x420 = INT16_MIN;
	volatile int32_t t98 = -111837;

    t98 = (x417^((x418>x419)/x420));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x422 = INT64_MAX;
	int32_t x423 = 4083281;
	int64_t x424 = INT64_MAX;
	static volatile int64_t t99 = -2900917918LL;

    t99 = (x421^((x422>x423)/x424));

    if (t99 != -128LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x429 = 42U;
	volatile uint8_t x430 = 0U;
	volatile uint8_t x431 = 0U;
	int32_t x432 = INT32_MAX;
	static int32_t t100 = 454596;

    t100 = (x429^((x430>x431)/x432));

    if (t100 != 42) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x434 = -1448;
	volatile uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MIN;

    t101 = (x433^((x434>x435)/x436));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x437 = -1LL;
	int32_t x438 = 49;
	int32_t x439 = 14604526;
	int32_t x440 = INT32_MAX;
	int64_t t102 = 15398740128LL;

    t102 = (x437^((x438>x439)/x440));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x441 = 31;
	volatile int16_t x442 = -1;
	int64_t x443 = -1LL;

    t103 = (x441^((x442>x443)/x444));

    if (t103 != 31) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = -4;
	volatile uint32_t x446 = 6690U;
	uint64_t x447 = 14778525LLU;
	static volatile int32_t x448 = INT32_MIN;
	int32_t t104 = 907604459;

    t104 = (x445^((x446>x447)/x448));

    if (t104 != -4) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = 8077;
	static volatile uint8_t x450 = UINT8_MAX;
	uint64_t x451 = 295138LLU;
	int8_t x452 = -26;

    t105 = (x449^((x450>x451)/x452));

    if (t105 != 8077) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = 64147763;
	int64_t x455 = INT64_MAX;
	volatile int32_t t106 = -15;

    t106 = (x453^((x454>x455)/x456));

    if (t106 != 64147763) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x457 = 43357;
	int64_t x458 = -156349691402998LL;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = 127812;
	volatile int32_t t107 = 2;

    t107 = (x457^((x458>x459)/x460));

    if (t107 != 43357) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x462 = 1LL;
	int32_t x464 = -753;
	static uint64_t t108 = 539LLU;

    t108 = (x461^((x462>x463)/x464));

    if (t108 != 82320085047160LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x465 = -1;
	static uint16_t x466 = UINT16_MAX;
	volatile int32_t t109 = -886;

    t109 = (x465^((x466>x467)/x468));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x469 = -2;
	int32_t x470 = -3;
	int64_t x471 = -4016214034LL;
	static int64_t x472 = INT64_MAX;
	int64_t t110 = -40665LL;

    t110 = (x469^((x470>x471)/x472));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x474 = INT32_MAX;
	volatile int64_t x475 = 200566890307LL;
	uint64_t t111 = 8681687530476045LLU;

    t111 = (x473^((x474>x475)/x476));

    if (t111 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x478 = INT16_MAX;
	int8_t x479 = -1;
	int32_t x480 = INT32_MAX;
	volatile int32_t t112 = 28455;

    t112 = (x477^((x478>x479)/x480));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x482 = UINT8_MAX;
	volatile uint64_t x483 = 20LLU;
	int16_t x484 = INT16_MIN;
	static int32_t t113 = -126;

    t113 = (x481^((x482>x483)/x484));

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x485 = INT8_MAX;
	int32_t x486 = 3902;
	int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MAX;
	int64_t t114 = -59218191401LL;

    t114 = (x485^((x486>x487)/x488));

    if (t114 != 127LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x489 = -32070861;
	volatile int8_t x491 = 0;
	int32_t t115 = 1104213;

    t115 = (x489^((x490>x491)/x492));

    if (t115 != -32070861) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x493 = -1;
	uint32_t x494 = 509U;
	static int8_t x495 = INT8_MIN;
	int16_t x496 = -1489;

    t116 = (x493^((x494>x495)/x496));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x497 = -1;
	uint8_t x498 = 9U;
	static volatile int16_t x499 = 4;

    t117 = (x497^((x498>x499)/x500));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x501 = 1;
	int64_t x502 = INT64_MIN;
	volatile int32_t x503 = INT32_MIN;

    t118 = (x501^((x502>x503)/x504));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x505 = -1;
	volatile int64_t x506 = -1385081958439LL;
	int32_t x508 = -1;
	volatile int32_t t119 = -12;

    t119 = (x505^((x506>x507)/x508));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = INT32_MIN;
	uint16_t x510 = 1U;
	int32_t x512 = INT32_MIN;
	int32_t t120 = INT32_MIN;

    t120 = (x509^((x510>x511)/x512));

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	volatile int32_t t121 = 6865046;

    t121 = (x513^((x514>x515)/x516));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x518 = INT8_MIN;
	uint16_t x519 = 3868U;
	int32_t x520 = -1;
	uint32_t t122 = 28610U;

    t122 = (x517^((x518>x519)/x520));

    if (t122 != 26U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x522 = 43LLU;
	static int32_t x523 = INT32_MIN;
	static uint32_t x524 = 31849U;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (x521^((x522>x523)/x524));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x526 = -2LL;
	int64_t x527 = 0LL;
	int64_t t124 = -187860977781LL;

    t124 = (x525^((x526>x527)/x528));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x529 = 2U;
	int64_t x530 = -164908228448632686LL;
	int8_t x531 = INT8_MAX;
	volatile uint64_t x532 = 13950531182LLU;

    t125 = (x529^((x530>x531)/x532));

    if (t125 != 2LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x533 = UINT32_MAX;
	int16_t x535 = -1;
	static uint32_t t126 = UINT32_MAX;

    t126 = (x533^((x534>x535)/x536));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MAX;
	uint16_t x540 = 1U;
	int32_t t127 = 743305065;

    t127 = (x537^((x538>x539)/x540));

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x541 = INT16_MIN;
	static int8_t x542 = INT8_MIN;
	volatile int8_t x543 = INT8_MIN;
	int64_t t128 = 326LL;

    t128 = (x541^((x542>x543)/x544));

    if (t128 != -32768LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x545 = 884U;
	int32_t t129 = -58155831;

    t129 = (x545^((x546>x547)/x548));

    if (t129 != 884) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x549 = 6U;
	int32_t x550 = INT32_MIN;
	int16_t x552 = INT16_MIN;
	volatile int32_t t130 = -22811067;

    t130 = (x549^((x550>x551)/x552));

    if (t130 != 6) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x553 = 0U;
	int16_t x554 = INT16_MIN;
	int64_t x555 = INT64_MAX;
	int16_t x556 = INT16_MIN;
	static int32_t t131 = 451693069;

    t131 = (x553^((x554>x555)/x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x557 = UINT64_MAX;
	uint8_t x558 = 16U;
	static uint32_t x559 = 13U;
	int32_t x560 = 8;
	uint64_t t132 = UINT64_MAX;

    t132 = (x557^((x558>x559)/x560));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x563 = UINT16_MAX;
	volatile int8_t x564 = INT8_MIN;
	volatile int32_t t133 = INT32_MIN;

    t133 = (x561^((x562>x563)/x564));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x565 = -1;
	volatile int32_t x566 = 46;
	int32_t x567 = -1;
	static int16_t x568 = -1;
	static int32_t t134 = -1400;

    t134 = (x565^((x566>x567)/x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = INT32_MIN;
	uint64_t x572 = 18031579451832LLU;
	static uint64_t t135 = 514LLU;

    t135 = (x569^((x570>x571)/x572));

    if (t135 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x573 = UINT32_MAX;
	static volatile int64_t x574 = INT64_MIN;
	int64_t x575 = INT64_MAX;
	int8_t x576 = 2;

    t136 = (x573^((x574>x575)/x576));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x577 = 48U;
	int16_t x579 = INT16_MAX;
	int32_t x580 = INT32_MIN;
	volatile uint32_t t137 = 2U;

    t137 = (x577^((x578>x579)/x580));

    if (t137 != 48U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x582 = 1U;
	static int8_t x583 = INT8_MAX;
	int32_t t138 = 15;

    t138 = (x581^((x582>x583)/x584));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	static uint16_t x587 = 12U;
	uint64_t x588 = 49329LLU;
	volatile uint64_t t139 = 3823352LLU;

    t139 = (x585^((x586>x587)/x588));

    if (t139 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x589 = 141720LL;
	volatile uint32_t x591 = 10221781U;
	int8_t x592 = INT8_MAX;
	int64_t t140 = 11642245007967104LL;

    t140 = (x589^((x590>x591)/x592));

    if (t140 != 141720LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x594 = INT64_MAX;
	uint64_t x595 = UINT64_MAX;
	int64_t x596 = 1LL;
	volatile int64_t t141 = 23369953258LL;

    t141 = (x593^((x594>x595)/x596));

    if (t141 != 65535LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x597 = -54;
	uint64_t x598 = 66847883562LLU;
	int16_t x599 = INT16_MIN;
	static int32_t t142 = 204224;

    t142 = (x597^((x598>x599)/x600));

    if (t142 != -54) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x601 = -108091074;
	static int64_t t143 = 885594LL;

    t143 = (x601^((x602>x603)/x604));

    if (t143 != -108091074LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x605 = INT8_MIN;
	static uint8_t x608 = 9U;

    t144 = (x605^((x606>x607)/x608));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x609 = 129350U;
	volatile int64_t x610 = INT64_MAX;
	uint8_t x611 = UINT8_MAX;

    t145 = (x609^((x610>x611)/x612));

    if (t145 != -129351LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x613 = INT64_MAX;
	int8_t x614 = INT8_MAX;
	int16_t x616 = -1;
	int64_t t146 = INT64_MIN;

    t146 = (x613^((x614>x615)/x616));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x618 = INT16_MIN;
	uint64_t x620 = 96617LLU;
	uint64_t t147 = 10LLU;

    t147 = (x617^((x618>x619)/x620));

    if (t147 != 756392LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = 3;
	int64_t x623 = 0LL;
	volatile uint64_t t148 = 801913LLU;

    t148 = (x621^((x622>x623)/x624));

    if (t148 != 3LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x625 = -3;
	uint16_t x626 = 276U;
	int8_t x627 = INT8_MAX;
	static int64_t x628 = -1LL;
	volatile int64_t t149 = -490039492LL;

    t149 = (x625^((x626>x627)/x628));

    if (t149 != 2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = INT8_MIN;
	static int64_t x631 = -86724636544257247LL;
	volatile uint8_t x632 = UINT8_MAX;
	volatile int32_t t150 = 132922815;

    t150 = (x629^((x630>x631)/x632));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x633 = 31841U;
	uint32_t x634 = 1368304U;
	uint32_t x635 = 396110998U;
	int64_t x636 = INT64_MIN;
	static int64_t t151 = 1LL;

    t151 = (x633^((x634>x635)/x636));

    if (t151 != 31841LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = 90631691143LL;
	int64_t x638 = 885223583314072LL;
	int64_t x639 = INT64_MIN;
	int64_t t152 = 60281137501LL;

    t152 = (x637^((x638>x639)/x640));

    if (t152 != 90631691143LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x641 = INT16_MAX;
	int32_t x642 = INT32_MIN;
	volatile int8_t x643 = INT8_MIN;
	int64_t x644 = -1LL;
	int64_t t153 = -3416118916212538LL;

    t153 = (x641^((x642>x643)/x644));

    if (t153 != 32767LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x646 = 25;
	uint32_t x648 = 723U;
	uint32_t t154 = 10U;

    t154 = (x645^((x646>x647)/x648));

    if (t154 != 27005U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x649 = UINT8_MAX;
	int32_t x650 = -1;
	int16_t x651 = 0;
	static int32_t x652 = INT32_MAX;
	volatile int32_t t155 = -6789614;

    t155 = (x649^((x650>x651)/x652));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x654 = -1;
	int64_t x655 = -14530145102924595LL;
	volatile int16_t x656 = INT16_MAX;
	uint64_t t156 = 1LLU;

    t156 = (x653^((x654>x655)/x656));

    if (t156 != 7495105762411184LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x657 = INT32_MAX;
	int8_t x658 = 28;
	uint32_t x659 = 6812540U;
	static int64_t x660 = INT64_MAX;
	volatile int64_t t157 = -15LL;

    t157 = (x657^((x658>x659)/x660));

    if (t157 != 2147483647LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x661 = 0LL;
	int64_t x662 = -17606308007LL;
	int32_t x664 = 2502080;
	int64_t t158 = -1LL;

    t158 = (x661^((x662>x663)/x664));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = -1LL;
	uint16_t x666 = 63U;
	volatile int16_t x667 = INT16_MIN;
	int64_t x668 = -1LL;
	int64_t t159 = -1189964688176284310LL;

    t159 = (x665^((x666>x667)/x668));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x669 = UINT8_MAX;
	uint8_t x671 = 14U;
	volatile int8_t x672 = INT8_MIN;

    t160 = (x669^((x670>x671)/x672));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x674 = INT64_MIN;
	static volatile int32_t t161 = 2928;

    t161 = (x673^((x674>x675)/x676));

    if (t161 != 4255) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x679 = -42533;
	int8_t x680 = INT8_MIN;
	int64_t t162 = 33434680356394516LL;

    t162 = (x677^((x678>x679)/x680));

    if (t162 != -5997175LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = 45;
	int16_t x682 = INT16_MAX;
	static int32_t x684 = -1;
	volatile int32_t t163 = 11982299;

    t163 = (x681^((x682>x683)/x684));

    if (t163 != 45) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = 1;
	static volatile int32_t x686 = INT32_MAX;
	int64_t x687 = INT64_MIN;

    t164 = (x685^((x686>x687)/x688));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x689 = -1;
	uint8_t x692 = 5U;

    t165 = (x689^((x690>x691)/x692));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x694 = -1;
	volatile int32_t t166 = -1;

    t166 = (x693^((x694>x695)/x696));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = -104232318LL;
	uint8_t x698 = UINT8_MAX;
	static int64_t x699 = 7LL;
	uint8_t x700 = 4U;
	static int64_t t167 = 2039553LL;

    t167 = (x697^((x698>x699)/x700));

    if (t167 != -104232318LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x701 = 1U;
	int32_t x702 = INT32_MIN;
	uint64_t x703 = UINT64_MAX;
	int8_t x704 = 1;
	volatile uint32_t t168 = 87U;

    t168 = (x701^((x702>x703)/x704));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x706 = UINT16_MAX;
	uint16_t x707 = 4426U;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t169 = 5714LLU;

    t169 = (x705^((x706>x707)/x708));

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x709 = 30U;
	static int16_t x710 = -1;
	static uint8_t x711 = 6U;
	int32_t t170 = 0;

    t170 = (x709^((x710>x711)/x712));

    if (t170 != 30) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = INT16_MIN;
	uint64_t x714 = UINT64_MAX;
	volatile int16_t x715 = -1;
	volatile uint32_t t171 = 312U;

    t171 = (x713^((x714>x715)/x716));

    if (t171 != 4294934528U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x717 = INT16_MIN;
	static int32_t x718 = 16034291;
	int16_t x719 = INT16_MAX;
	volatile uint32_t t172 = 16U;

    t172 = (x717^((x718>x719)/x720));

    if (t172 != 4294934528U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x721 = 149U;
	static volatile int16_t x722 = INT16_MAX;
	int64_t x723 = -1LL;
	uint8_t x724 = 1U;
	static volatile uint32_t t173 = 29U;

    t173 = (x721^((x722>x723)/x724));

    if (t173 != 148U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int8_t x728 = INT8_MIN;
	volatile int32_t t174 = 1;

    t174 = (x725^((x726>x727)/x728));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x729 = INT16_MIN;
	int8_t x730 = -1;
	static int8_t x731 = INT8_MIN;
	static int32_t x732 = INT32_MIN;
	static int32_t t175 = -369187791;

    t175 = (x729^((x730>x731)/x732));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x733 = -1;
	static volatile int64_t x734 = -1LL;
	static int32_t x736 = -6168211;
	int32_t t176 = -1338;

    t176 = (x733^((x734>x735)/x736));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = -1;
	int32_t x738 = INT32_MIN;
	volatile uint16_t x739 = 1481U;
	uint8_t x740 = 21U;
	volatile int32_t t177 = -18;

    t177 = (x737^((x738>x739)/x740));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = -1;
	uint8_t x742 = UINT8_MAX;
	static int16_t x743 = INT16_MIN;
	int8_t x744 = 23;
	volatile int32_t t178 = -3154883;

    t178 = (x741^((x742>x743)/x744));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x745 = 597;
	volatile int8_t x746 = -36;
	static int32_t x747 = INT32_MIN;
	volatile uint32_t x748 = 27090875U;
	uint32_t t179 = 64217U;

    t179 = (x745^((x746>x747)/x748));

    if (t179 != 597U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x750 = INT32_MIN;
	int64_t x751 = 77822471LL;
	uint64_t t180 = UINT64_MAX;

    t180 = (x749^((x750>x751)/x752));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x753 = INT64_MIN;
	static int8_t x754 = INT8_MAX;
	int32_t x755 = INT32_MAX;
	static uint16_t x756 = UINT16_MAX;
	int64_t t181 = INT64_MIN;

    t181 = (x753^((x754>x755)/x756));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x759 = INT16_MAX;
	uint64_t x760 = 30451810403644620LLU;
	uint64_t t182 = 29169481320399LLU;

    t182 = (x757^((x758>x759)/x760));

    if (t182 != 32767LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x762 = INT16_MIN;
	int64_t x764 = -58942388431LL;
	int64_t t183 = 7442678LL;

    t183 = (x761^((x762>x763)/x764));

    if (t183 != 65535LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x766 = -1;
	volatile int8_t x767 = -1;
	volatile uint32_t t184 = 3336U;

    t184 = (x765^((x766>x767)/x768));

    if (t184 != 6781U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x769 = INT64_MIN;
	static int32_t x770 = INT32_MAX;
	static int32_t x771 = INT32_MAX;
	int32_t x772 = INT32_MAX;
	volatile int64_t t185 = INT64_MIN;

    t185 = (x769^((x770>x771)/x772));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x773 = UINT64_MAX;
	volatile int64_t x774 = -1LL;
	volatile int32_t x776 = INT32_MAX;
	uint64_t t186 = UINT64_MAX;

    t186 = (x773^((x774>x775)/x776));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x777 = INT32_MAX;
	int64_t x778 = -12191827668966065LL;
	int64_t x779 = INT64_MIN;
	uint32_t x780 = 134018447U;

    t187 = (x777^((x778>x779)/x780));

    if (t187 != 2147483647U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x783 = INT8_MIN;
	int32_t t188 = -134010479;

    t188 = (x781^((x782>x783)/x784));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x785 = 4173592;
	int32_t x787 = INT32_MIN;
	int64_t t189 = -32187039215291LL;

    t189 = (x785^((x786>x787)/x788));

    if (t189 != -4173593LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x789 = 444181;
	uint8_t x790 = 0U;
	volatile int8_t x791 = INT8_MIN;
	uint16_t x792 = UINT16_MAX;
	int32_t t190 = -332477510;

    t190 = (x789^((x790>x791)/x792));

    if (t190 != 444181) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x793 = 10896963142674894LL;
	int64_t x794 = -1LL;
	static int16_t x795 = INT16_MIN;
	volatile int16_t x796 = -1;
	int64_t t191 = 1218001859LL;

    t191 = (x793^((x794>x795)/x796));

    if (t191 != -10896963142674895LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x797 = UINT64_MAX;
	int32_t x798 = INT32_MIN;
	volatile int64_t x799 = INT64_MAX;
	int64_t x800 = INT64_MIN;
	uint64_t t192 = UINT64_MAX;

    t192 = (x797^((x798>x799)/x800));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x801 = -1071;
	uint8_t x802 = 4U;
	uint32_t x803 = 6U;
	static uint64_t x804 = 136087222966712LLU;
	volatile uint64_t t193 = 210651850211652743LLU;

    t193 = (x801^((x802>x803)/x804));

    if (t193 != 18446744073709550545LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x806 = UINT64_MAX;
	static int64_t x807 = INT64_MIN;
	static volatile int64_t t194 = -17925LL;

    t194 = (x805^((x806>x807)/x808));

    if (t194 != 14LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = INT32_MIN;
	static uint8_t x811 = 7U;
	volatile int16_t x812 = INT16_MIN;
	volatile int32_t t195 = INT32_MIN;

    t195 = (x809^((x810>x811)/x812));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x813 = 26LL;
	int8_t x814 = -1;
	int64_t x815 = INT64_MIN;
	int32_t x816 = INT32_MAX;
	static int64_t t196 = 0LL;

    t196 = (x813^((x814>x815)/x816));

    if (t196 != 26LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = UINT8_MAX;
	static int8_t x819 = 1;
	static int8_t x820 = INT8_MAX;
	volatile int32_t t197 = INT32_MIN;

    t197 = (x817^((x818>x819)/x820));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x821 = -1;
	static int16_t x823 = -1;
	int32_t x824 = 40103851;

    t198 = (x821^((x822>x823)/x824));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x825 = INT32_MIN;
	uint32_t x826 = 42752U;
	uint8_t x827 = 1U;
	volatile uint8_t x828 = 7U;
	volatile int32_t t199 = INT32_MIN;

    t199 = (x825^((x826>x827)/x828));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

