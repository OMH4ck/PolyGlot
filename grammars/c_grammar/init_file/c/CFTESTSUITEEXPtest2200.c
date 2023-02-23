
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

static int16_t x1 = 106;
int8_t x2 = INT8_MIN;
int8_t x12 = -3;
int64_t x22 = -3951LL;
uint32_t x32 = 12488U;
uint64_t t8 = 1004658LLU;
uint8_t x48 = 14U;
uint32_t x55 = UINT32_MAX;
uint16_t x68 = 12609U;
volatile int8_t x70 = INT8_MIN;
volatile uint64_t t15 = 425626103279879433LLU;
volatile int64_t x78 = INT64_MIN;
static uint32_t x81 = 503U;
static volatile int32_t x82 = -490;
int8_t x85 = INT8_MAX;
volatile int16_t x86 = INT16_MIN;
int8_t x91 = INT8_MIN;
uint32_t x96 = 153751893U;
int8_t x98 = -1;
volatile uint64_t t23 = 377944LLU;
int8_t x114 = -1;
int32_t x116 = INT32_MAX;
volatile int64_t t27 = 1145053157183500LL;
uint32_t x126 = UINT32_MAX;
uint16_t x128 = 14U;
int16_t x129 = -1;
uint32_t t29 = UINT32_MAX;
int64_t x139 = -1LL;
uint64_t x147 = 5807185671LLU;
volatile uint64_t t33 = 25217176LLU;
volatile int32_t x155 = INT32_MIN;
int32_t t35 = 196938;
uint16_t x168 = 14859U;
int32_t t38 = 1;
uint32_t x169 = 415541084U;
static int64_t x175 = INT64_MAX;
uint32_t x178 = 10U;
uint16_t x182 = 19U;
int8_t x186 = INT8_MIN;
int64_t x187 = INT64_MIN;
int64_t x192 = 11985366320LL;
volatile int8_t x196 = INT8_MIN;
int32_t x200 = -1;
volatile int64_t x201 = 1679565LL;
int8_t x203 = INT8_MAX;
int64_t t47 = 0LL;
int8_t x206 = -32;
static uint64_t x207 = 28627465514LLU;
int16_t x215 = -1;
int64_t x217 = -1LL;
uint16_t x228 = 1U;
uint16_t x232 = 2U;
uint64_t x236 = 3527947446744LLU;
volatile int64_t x238 = INT64_MIN;
uint16_t x241 = 57U;
volatile uint64_t x250 = UINT64_MAX;
int32_t x253 = 2954;
static volatile uint64_t x259 = UINT64_MAX;
int64_t x262 = -1LL;
static int32_t x276 = INT32_MAX;
int16_t x282 = -21;
int8_t x283 = INT8_MAX;
int16_t x286 = INT16_MIN;
volatile int32_t x294 = 9;
volatile int16_t x298 = 0;
static int32_t t70 = 258200458;
uint32_t x305 = 0U;
int32_t x308 = -4720;
uint8_t x311 = 4U;
int64_t t74 = 755247564300LL;
int8_t x317 = -1;
uint16_t x329 = 10697U;
int16_t x331 = 6718;
static int32_t t78 = 23;
volatile int64_t x333 = INT64_MAX;
int32_t x340 = INT32_MIN;
int16_t x345 = 1;
int32_t x349 = INT32_MIN;
static int32_t x351 = INT32_MAX;
volatile int64_t t83 = -9527006LL;
volatile int64_t t84 = -46LL;
int32_t x359 = -1;
volatile int64_t t85 = 1361LL;
static int64_t x362 = INT64_MIN;
int64_t t86 = -1LL;
static int16_t x365 = -1;
static int16_t x366 = 841;
int32_t x397 = INT32_MAX;
uint32_t x400 = 22U;
static int64_t x402 = -1LL;
volatile int16_t x403 = -1;
int64_t x412 = 58617295LL;
uint64_t t97 = 5114293532LLU;
uint32_t x415 = 93U;
uint16_t x419 = UINT16_MAX;
volatile int8_t x420 = -28;
volatile int32_t t99 = -3897;
int64_t x427 = INT64_MAX;
uint32_t x440 = 126491U;
static int64_t x449 = -23785371099278LL;
uint64_t t107 = 898351209LLU;
int64_t t108 = -1110773172481926LL;
uint16_t x470 = UINT16_MAX;
uint32_t x473 = 1116U;
static int64_t x480 = INT64_MIN;
volatile int32_t x483 = -328920;
int64_t x486 = -1LL;
volatile uint8_t x488 = 11U;
volatile int64_t t114 = -13930757803898378LL;
uint32_t x489 = UINT32_MAX;
static int64_t x495 = INT64_MAX;
uint16_t x496 = 933U;
uint64_t x505 = 51LLU;
volatile int16_t x514 = 1931;
int8_t x515 = INT8_MIN;
uint32_t x519 = 1561U;
static uint8_t x521 = 44U;
static int16_t x524 = -1648;
int32_t x528 = -1;
static uint32_t x529 = UINT32_MAX;
int8_t x530 = -1;
uint16_t x536 = 7U;
int64_t x537 = INT64_MAX;
int8_t x539 = INT8_MAX;
uint64_t x540 = UINT64_MAX;
int16_t x541 = 0;
int16_t x544 = INT16_MIN;
static int32_t x546 = INT32_MIN;
uint16_t x554 = 104U;
uint8_t x559 = 2U;
static int8_t x563 = 1;
static volatile int16_t x568 = INT16_MIN;
static uint16_t x572 = 1439U;
uint64_t t137 = 1878LLU;
int32_t x582 = -1;
volatile int16_t x586 = INT16_MIN;
static uint32_t x588 = 367U;
volatile uint32_t t139 = 55938U;
int16_t x596 = INT16_MAX;
volatile int32_t x598 = INT32_MIN;
uint32_t x602 = 0U;
static int8_t x605 = INT8_MIN;
volatile int16_t x606 = INT16_MAX;
int64_t x608 = 119LL;
int16_t x611 = 623;
int64_t x619 = INT64_MIN;
volatile uint64_t t147 = 6673913832299629LLU;
int16_t x621 = 0;
static volatile int32_t x622 = -1;
uint8_t x630 = 2U;
static volatile uint32_t t151 = UINT32_MAX;
static uint64_t x642 = 20669371690LLU;
int32_t x647 = INT32_MIN;
static int8_t x656 = -2;
static int32_t x674 = -1;
int16_t x684 = INT16_MAX;
volatile int32_t t162 = -2546449;
uint32_t x689 = UINT32_MAX;
volatile uint64_t x691 = 1LLU;
uint64_t x693 = 73026LLU;
volatile int32_t x696 = 250443165;
volatile uint16_t x697 = UINT16_MAX;
int64_t x708 = INT64_MIN;
int8_t x711 = -1;
volatile int64_t x718 = -1LL;
int64_t t170 = INT64_MIN;
volatile int16_t x723 = INT16_MIN;
int32_t x730 = 10604;
volatile int16_t x732 = -1;
uint64_t x741 = 35176550752273521LLU;
static volatile uint64_t t175 = 21371977LLU;
static int32_t x747 = -61;
volatile int64_t x759 = 976078231LL;
volatile int16_t x761 = -1;
int64_t x764 = INT64_MAX;
static uint32_t x766 = 35029U;
int16_t x770 = INT16_MAX;
static int8_t x773 = 6;
volatile int32_t x776 = -5606501;
volatile int64_t t183 = 33333919189095956LL;
int16_t x777 = INT16_MAX;
int32_t t186 = 13125677;
volatile uint16_t x798 = UINT16_MAX;
volatile uint64_t t188 = 74LLU;
int8_t x804 = INT8_MIN;
static volatile int64_t t189 = -5915336047244507LL;
volatile int64_t x812 = -1LL;
volatile int64_t t191 = -22748265LL;
static volatile int8_t x817 = -2;
static volatile int16_t x820 = INT16_MIN;
volatile int8_t x821 = -4;
uint16_t x824 = UINT16_MAX;
volatile int8_t x833 = INT8_MIN;
static int16_t x835 = 3805;
uint64_t x844 = 3547LLU;


void f0(void) {
    	static int16_t x3 = -1;
	volatile int8_t x4 = 1;
	volatile int32_t t0 = 334616;

    t0 = (x1-((x2&x3)/x4));

    if (t0 != 234) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 56966;
	uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 1839U;
	volatile uint8_t x8 = 117U;
	uint64_t t1 = 711195552035LLU;

    t1 = (x5-((x6&x7)/x8));

    if (t1 != 56951LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 4544U;
	static volatile int64_t x10 = INT64_MIN;
	int8_t x11 = 1;
	volatile int64_t t2 = 167008617LL;

    t2 = (x9-((x10&x11)/x12));

    if (t2 != 4544LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int32_t x14 = INT32_MAX;
	static uint32_t x15 = 4030U;
	uint32_t x16 = 485680U;
	static uint32_t t3 = 184165U;

    t3 = (x13-((x14&x15)/x16));

    if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = 274467066;
	static int8_t x18 = 0;
	int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 16;

    t4 = (x17-((x18&x19)/x20));

    if (t4 != 274467066) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int16_t x23 = 13;
	static int16_t x24 = INT16_MIN;
	static volatile int64_t t5 = 5349540LL;

    t5 = (x21-((x22&x23)/x24));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = INT32_MAX;
	uint32_t x31 = 6006U;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x29-((x30&x31)/x32));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 54U;
	volatile int64_t x34 = INT64_MAX;
	static int8_t x35 = INT8_MIN;
	static uint8_t x36 = 36U;
	volatile int64_t t7 = 404421078LL;

    t7 = (x33-((x34&x35)/x36));

    if (t7 != -256204778801521492LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	static int32_t x38 = -483506039;
	int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;

    t8 = (x37-((x38&x39)/x40));

    if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -312;
	volatile int64_t x42 = -57739951870284736LL;
	int16_t x43 = INT16_MIN;
	static int8_t x44 = -1;
	int64_t t9 = -33771859991246LL;

    t9 = (x41-((x42&x43)/x44));

    if (t9 != -57739951870312760LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	uint8_t x46 = 124U;
	volatile uint8_t x47 = 38U;
	volatile int64_t t10 = 75580492179019888LL;

    t10 = (x45-((x46&x47)/x48));

    if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	int8_t x51 = 0;
	uint16_t x52 = 1962U;
	static volatile int64_t t11 = 547909162326944LL;

    t11 = (x49-((x50&x51)/x52));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 1513876U;
	static int64_t x54 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;
	static int64_t t12 = -1957LL;

    t12 = (x53-((x54&x55)/x56));

    if (t12 != -15329133LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	static int32_t x58 = -1;
	static volatile int64_t x59 = -1LL;
	volatile int8_t x60 = INT8_MIN;
	int64_t t13 = 231732LL;

    t13 = (x57-((x58&x59)/x60));

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = 8;
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 477LLU;
	volatile uint64_t t14 = 2563001634845225LLU;

    t14 = (x65-((x66&x67)/x68));

    if (t14 != 8LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x69 = INT16_MIN;
	int64_t x71 = -972LL;
	static uint64_t x72 = 447784LLU;

    t15 = (x69-((x70&x71)/x72));

    if (t15 != 18446702878079318329LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	static int32_t x76 = 251841855;
	volatile uint64_t t16 = 7686LLU;

    t16 = (x73-((x74&x75)/x76));

    if (t16 != 18446744037085852632LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -1;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	int64_t t17 = 2092531568040256LL;

    t17 = (x77-((x78&x79)/x80));

    if (t17 != -4294967297LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x83 = -1;
	int32_t x84 = INT32_MIN;
	volatile uint32_t t18 = 2U;

    t18 = (x81-((x82&x83)/x84));

    if (t18 != 503U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x87 = INT16_MAX;
	static int32_t x88 = -1;
	static volatile int32_t t19 = 63133078;

    t19 = (x85-((x86&x87)/x88));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = 20310LLU;
	int16_t x92 = -9;
	uint64_t t20 = 65491833LLU;

    t20 = (x89-((x90&x91)/x92));

    if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x93 = 1;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = INT32_MAX;
	static uint32_t t21 = 279U;

    t21 = (x93-((x94&x95)/x96));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x97 = 28898073LLU;
	int16_t x99 = -4;
	int64_t x100 = INT64_MAX;
	static uint64_t t22 = 3764206LLU;

    t22 = (x97-((x98&x99)/x100));

    if (t22 != 28898073LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 1U;
	int8_t x106 = INT8_MIN;
	static uint64_t x107 = 276897186460LLU;
	uint16_t x108 = 1059U;

    t23 = (x105-((x106&x107)/x108));

    if (t23 != 18446744073448081186LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x109 = INT16_MIN;
	int16_t x110 = 13623;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	volatile int64_t t24 = 3LL;

    t24 = (x109-((x110&x111)/x112));

    if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = UINT32_MAX;
	static int64_t x115 = INT64_MAX;
	volatile int64_t t25 = 2991160LL;

    t25 = (x113-((x114&x115)/x116));

    if (t25 != -3LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x117 = 3U;
	volatile uint64_t x118 = 19579201159LLU;
	static uint64_t x119 = 4843166958740691LLU;
	uint8_t x120 = 24U;
	uint64_t t26 = 5380761959766373382LLU;

    t26 = (x117-((x118&x119)/x120));

    if (t26 != 18446744072894456105LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -1685;
	int64_t x122 = INT64_MIN;
	int64_t x123 = -8LL;
	int16_t x124 = -5;

    t27 = (x121-((x122&x123)/x124));

    if (t27 != -1844674407370956846LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x125 = -1;
	static int16_t x127 = -1;
	volatile uint32_t t28 = 4647U;

    t28 = (x125-((x126&x127)/x128));

    if (t28 != 3988183917U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x130 = -1;
	static int16_t x131 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;

    t29 = (x129-((x130&x131)/x132));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = 737U;
	static uint64_t x134 = 10086LLU;
	int32_t x135 = -2888;
	volatile int32_t x136 = INT32_MIN;
	uint64_t t30 = 1498LLU;

    t30 = (x133-((x134&x135)/x136));

    if (t30 != 737LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x137 = -1;
	uint64_t x138 = 414077871939899LLU;
	uint32_t x140 = 160818222U;
	volatile uint64_t t31 = 10187966796787073LLU;

    t31 = (x137-((x138&x139)/x140));

    if (t31 != 18446744073706976796LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = 12468U;
	volatile uint8_t x142 = 7U;
	static int16_t x143 = INT16_MIN;
	volatile int64_t x144 = INT64_MIN;
	int64_t t32 = 3956793148398001967LL;

    t32 = (x141-((x142&x143)/x144));

    if (t32 != 12468LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x145 = 809738456LLU;
	volatile uint64_t x146 = 1041800885LLU;
	int16_t x148 = 403;

    t33 = (x145-((x146&x147)/x148));

    if (t33 != 808655955LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = 7;
	static int16_t x151 = -10046;
	int8_t x152 = -24;
	int64_t t34 = INT64_MIN;

    t34 = (x149-((x150&x151)/x152));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = 29;
	int16_t x154 = -1;
	int32_t x156 = -70554;

    t35 = (x153-((x154&x155)/x156));

    if (t35 != -30408) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = INT64_MAX;
	int64_t x158 = INT64_MIN;
	static int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = 2205973445087775144LLU;

    t36 = (x157-((x158&x159)/x160));

    if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = 0U;
	static volatile uint32_t x163 = 11650658U;
	volatile int64_t x164 = 235LL;
	volatile int64_t t37 = 2014199183649155550LL;

    t37 = (x161-((x162&x163)/x164));

    if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = 1;
	volatile int16_t x166 = -1;
	static int32_t x167 = -1636;

    t38 = (x165-((x166&x167)/x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	volatile uint32_t t39 = 178U;

    t39 = (x169-((x170&x171)/x172));

    if (t39 != 415540956U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x173 = INT8_MIN;
	static int64_t x174 = -1LL;
	int16_t x176 = -1;
	volatile int64_t t40 = 471591547956LL;

    t40 = (x173-((x174&x175)/x176));

    if (t40 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x177 = UINT16_MAX;
	static uint16_t x179 = 15853U;
	int32_t x180 = 6075016;
	uint32_t t41 = 30435328U;

    t41 = (x177-((x178&x179)/x180));

    if (t41 != 65535U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile int16_t x183 = INT16_MAX;
	uint16_t x184 = 61U;
	static uint64_t t42 = UINT64_MAX;

    t42 = (x181-((x182&x183)/x184));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = 45U;
	int8_t x188 = INT8_MAX;
	int64_t t43 = -59404746953780LL;

    t43 = (x185-((x186&x187)/x188));

    if (t43 != 72624976668147886LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = 25563680862LL;
	static int64_t x190 = INT64_MAX;
	int64_t x191 = INT64_MAX;
	int64_t t44 = -76351608350147055LL;

    t44 = (x189-((x190&x191)/x192));

    if (t44 != 24794128077LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x193 = INT16_MIN;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	int64_t t45 = 3598LL;

    t45 = (x193-((x194&x195)/x196));

    if (t45 != -16809984LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MAX;
	volatile uint32_t x198 = 225409496U;
	uint64_t x199 = 989LLU;
	volatile uint64_t t46 = 776646096833LLU;

    t46 = (x197-((x198&x199)/x200));

    if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x202 = UINT32_MAX;
	static uint16_t x204 = 1U;

    t47 = (x201-((x202&x203)/x204));

    if (t47 != 1679438LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -14;
	static int16_t x208 = INT16_MIN;
	uint64_t t48 = 61796870286018LLU;

    t48 = (x205-((x206&x207)/x208));

    if (t48 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MIN;
	uint32_t x210 = 6U;
	int64_t x211 = INT64_MIN;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int64_t t49 = 57LL;

    t49 = (x209-((x210&x211)/x212));

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x214 = -1;
	volatile uint64_t x216 = 29025LLU;
	static uint64_t t50 = 4482061403094571LLU;

    t50 = (x213-((x214&x215)/x216));

    if (t50 != 9222736490116663507LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x218 = -12094113LL;
	volatile int8_t x219 = -1;
	uint16_t x220 = UINT16_MAX;
	int64_t t51 = -3807533736396040287LL;

    t51 = (x217-((x218&x219)/x220));

    if (t51 != 183LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x225 = -1;
	static int32_t x226 = 2121;
	static volatile int32_t x227 = -7;
	volatile int32_t t52 = 0;

    t52 = (x225-((x226&x227)/x228));

    if (t52 != -2122) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x229 = 1019U;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static uint32_t t53 = 960054351U;

    t53 = (x229-((x230&x231)/x232));

    if (t53 != 17403U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x233 = 980LLU;
	static uint64_t x234 = 27803LLU;
	uint8_t x235 = 53U;
	uint64_t t54 = 12263460514447LLU;

    t54 = (x233-((x234&x235)/x236));

    if (t54 != 980LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = INT8_MAX;
	uint16_t x239 = 1U;
	uint16_t x240 = 8913U;
	static int64_t t55 = 2297967796389729508LL;

    t55 = (x237-((x238&x239)/x240));

    if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x242 = INT32_MAX;
	static int64_t x243 = INT64_MAX;
	uint64_t x244 = UINT64_MAX;
	uint64_t t56 = 137426LLU;

    t56 = (x241-((x242&x243)/x244));

    if (t56 != 57LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = -1561LL;
	int32_t x246 = 84209;
	uint32_t x247 = 328294U;
	int8_t x248 = INT8_MAX;
	int64_t t57 = 59329697103LL;

    t57 = (x245-((x246&x247)/x248));

    if (t57 != -2077LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x249 = 7804205U;
	int32_t x251 = INT32_MIN;
	int64_t x252 = 77793691337LL;
	uint64_t t58 = 3966LLU;

    t58 = (x249-((x250&x251)/x252));

    if (t58 != 18446744073480231914LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x254 = INT8_MIN;
	uint32_t x255 = 86671301U;
	static uint16_t x256 = UINT16_MAX;
	uint32_t t59 = 242579207U;

    t59 = (x253-((x254&x255)/x256));

    if (t59 != 1632U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = 1;
	uint8_t x258 = 3U;
	int64_t x260 = 3858887LL;
	static volatile uint64_t t60 = 19734703LLU;

    t60 = (x257-((x258&x259)/x260));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = INT8_MAX;
	static int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	static int64_t t61 = 1594690LL;

    t61 = (x261-((x262&x263)/x264));

    if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = 19;
	static int8_t x266 = INT8_MAX;
	static uint64_t x267 = 2760180381082127LLU;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t62 = 1110367398395377892LLU;

    t62 = (x265-((x266&x267)/x268));

    if (t62 != 19LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x269 = 0U;
	int8_t x270 = -1;
	static volatile uint8_t x271 = UINT8_MAX;
	static int32_t x272 = INT32_MAX;
	int32_t t63 = 252475;

    t63 = (x269-((x270&x271)/x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MIN;
	uint8_t x274 = 32U;
	int8_t x275 = -1;
	static volatile int32_t t64 = INT32_MIN;

    t64 = (x273-((x274&x275)/x276));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = -1;
	uint64_t x278 = 226457LLU;
	volatile int8_t x279 = 47;
	int16_t x280 = -7;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = (x277-((x278&x279)/x280));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = 60;
	static uint16_t x284 = UINT16_MAX;
	volatile int32_t t66 = 297;

    t66 = (x281-((x282&x283)/x284));

    if (t66 != 60) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = 0U;
	static volatile int64_t x287 = INT64_MIN;
	static volatile uint8_t x288 = 35U;
	int64_t t67 = -15631883432LL;

    t67 = (x285-((x286&x287)/x288));

    if (t67 != 263524915338707880LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MIN;
	static uint16_t x290 = 2U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 12;
	volatile int32_t t68 = 1;

    t68 = (x289-((x290&x291)/x292));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x293 = UINT64_MAX;
	volatile uint32_t x295 = 61452204U;
	int64_t x296 = -47338879776LL;
	static volatile uint64_t t69 = UINT64_MAX;

    t69 = (x293-((x294&x295)/x296));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = -1;
	int16_t x299 = 380;
	uint8_t x300 = UINT8_MAX;

    t70 = (x297-((x298&x299)/x300));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x301 = INT8_MIN;
	int8_t x302 = 48;
	int64_t x303 = 3603260448LL;
	volatile uint64_t x304 = 1583LLU;
	volatile uint64_t t71 = 995415744941LLU;

    t71 = (x301-((x302&x303)/x304));

    if (t71 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x306 = 6307U;
	static int64_t x307 = INT64_MIN;
	int64_t t72 = -13157412271253LL;

    t72 = (x305-((x306&x307)/x308));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = 1U;
	static uint64_t x310 = 15094712839LLU;
	volatile int32_t x312 = INT32_MAX;
	volatile uint64_t t73 = 2693217763093652LLU;

    t73 = (x309-((x310&x311)/x312));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x313 = -1;
	int64_t x314 = 1703LL;
	uint16_t x315 = 6U;
	int32_t x316 = -88;

    t74 = (x313-((x314&x315)/x316));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t75 = 16078LL;

    t75 = (x317-((x318&x319)/x320));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x321 = 30;
	volatile int64_t x322 = INT64_MIN;
	uint16_t x323 = 38U;
	int32_t x324 = -124022606;
	volatile int64_t t76 = -10504022234841982LL;

    t76 = (x321-((x322&x323)/x324));

    if (t76 != 30LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x325 = INT32_MIN;
	volatile int8_t x326 = -1;
	int32_t x327 = INT32_MAX;
	uint32_t x328 = 2788472U;
	volatile uint32_t t77 = 168U;

    t77 = (x325-((x326&x327)/x328));

    if (t77 != 2147482878U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x330 = UINT16_MAX;
	volatile int8_t x332 = -1;

    t78 = (x329-((x330&x331)/x332));

    if (t78 != 17415) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x334 = UINT32_MAX;
	static uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MIN;
	static volatile int64_t t79 = INT64_MAX;

    t79 = (x333-((x334&x335)/x336));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x337 = 0;
	int64_t x338 = -17049761392LL;
	uint8_t x339 = UINT8_MAX;
	volatile int64_t t80 = 50997403602982959LL;

    t80 = (x337-((x338&x339)/x340));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x341 = INT16_MIN;
	static int64_t x342 = INT64_MAX;
	int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	volatile int64_t t81 = 208LL;

    t81 = (x341-((x342&x343)/x344));

    if (t81 != 72057594037895167LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x346 = -4;
	uint64_t x347 = 417626LLU;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t82 = 850579927015552LLU;

    t82 = (x345-((x346&x347)/x348));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x350 = INT64_MAX;
	int8_t x352 = 1;

    t83 = (x349-((x350&x351)/x352));

    if (t83 != -4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	static int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;

    t84 = (x353-((x354&x355)/x356));

    if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	int8_t x360 = INT8_MIN;

    t85 = (x357-((x358&x359)/x360));

    if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x361 = UINT8_MAX;
	static int16_t x363 = 0;
	static int32_t x364 = INT32_MAX;

    t86 = (x361-((x362&x363)/x364));

    if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x367 = -1;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t87 = -2111;

    t87 = (x365-((x366&x367)/x368));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x369 = 231U;
	volatile uint16_t x370 = 7U;
	uint32_t x371 = 59641164U;
	uint32_t x372 = 124470U;
	uint32_t t88 = 46037209U;

    t88 = (x369-((x370&x371)/x372));

    if (t88 != 231U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = -1;
	int8_t x374 = INT8_MAX;
	volatile int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	int64_t t89 = -6502440LL;

    t89 = (x373-((x374&x375)/x376));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x381 = INT16_MIN;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = 1837;
	uint32_t x384 = 4U;
	int64_t t90 = 301225321LL;

    t90 = (x381-((x382&x383)/x384));

    if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x385 = 57379299592LLU;
	volatile int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t91 = 6LLU;

    t91 = (x385-((x386&x387)/x388));

    if (t91 != 18446462656112140552LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x389 = 97U;
	int16_t x390 = -1;
	int64_t x391 = 516553618073636LL;
	volatile int8_t x392 = -1;
	int64_t t92 = 231964LL;

    t92 = (x389-((x390&x391)/x392));

    if (t92 != 516553618073733LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = INT32_MAX;
	int8_t x394 = -1;
	int8_t x395 = 7;
	int64_t x396 = INT64_MIN;
	int64_t t93 = 6494579562654LL;

    t93 = (x393-((x394&x395)/x396));

    if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x398 = -1;
	uint64_t x399 = 231LLU;
	volatile uint64_t t94 = 73811523460853342LLU;

    t94 = (x397-((x398&x399)/x400));

    if (t94 != 2147483637LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x401 = INT32_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int64_t t95 = -3305507899LL;

    t95 = (x401-((x402&x403)/x404));

    if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = -1;
	int16_t x406 = INT16_MAX;
	int64_t x407 = 273501359LL;
	int16_t x408 = INT16_MIN;
	static int64_t t96 = -19652818250LL;

    t96 = (x405-((x406&x407)/x408));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x409 = 124437002015222196LLU;
	uint64_t x410 = 5LLU;
	int32_t x411 = INT32_MIN;

    t97 = (x409-((x410&x411)/x412));

    if (t97 != 124437002015222196LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = -1;
	int16_t x414 = -154;
	int64_t x416 = INT64_MIN;
	volatile int64_t t98 = -15LL;

    t98 = (x413-((x414&x415)/x416));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x417 = -10425;
	int32_t x418 = -14603;

    t99 = (x417-((x418&x419)/x420));

    if (t99 != -8606) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x421 = 564186818627LLU;
	static uint8_t x422 = 63U;
	volatile uint32_t x423 = 7332409U;
	uint32_t x424 = 57U;
	volatile uint64_t t100 = 321533720214812889LLU;

    t100 = (x421-((x422&x423)/x424));

    if (t100 != 564186818626LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x425 = 9779735U;
	volatile int64_t x426 = INT64_MIN;
	static uint8_t x428 = 1U;
	int64_t t101 = -469LL;

    t101 = (x425-((x426&x427)/x428));

    if (t101 != 9779735LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = 0;
	static int32_t x430 = -1;
	uint16_t x431 = 44U;
	int16_t x432 = INT16_MAX;
	int32_t t102 = 6063;

    t102 = (x429-((x430&x431)/x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x437 = -1;
	volatile int32_t x438 = -1;
	volatile int64_t x439 = -1LL;
	static volatile int64_t t103 = -122279054866LL;

    t103 = (x437-((x438&x439)/x440));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = 1385753U;
	uint16_t x444 = 490U;
	volatile uint32_t t104 = 443575U;

    t104 = (x441-((x442&x443)/x444));

    if (t104 != 2147480820U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x445 = 0;
	static volatile int64_t x446 = 6557LL;
	static volatile int16_t x447 = INT16_MAX;
	int8_t x448 = 1;
	volatile int64_t t105 = -1570772174LL;

    t105 = (x445-((x446&x447)/x448));

    if (t105 != -6557LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x450 = -54;
	uint16_t x451 = UINT16_MAX;
	volatile int32_t x452 = 1;
	int64_t t106 = -1881LL;

    t106 = (x449-((x450&x451)/x452));

    if (t106 != -23785371164760LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = 407788790130161089LLU;
	int8_t x454 = -1;
	static uint32_t x455 = 645083127U;
	static int64_t x456 = INT64_MIN;

    t107 = (x453-((x454&x455)/x456));

    if (t107 != 407788790130161089LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x457 = -1LL;
	int32_t x458 = INT32_MAX;
	static uint32_t x459 = 3126249U;
	uint16_t x460 = UINT16_MAX;

    t108 = (x457-((x458&x459)/x460));

    if (t108 != -48LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x461 = 27;
	int8_t x462 = -1;
	uint16_t x463 = UINT16_MAX;
	int8_t x464 = INT8_MIN;
	volatile int32_t t109 = 368666;

    t109 = (x461-((x462&x463)/x464));

    if (t109 != 538) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x469 = -1;
	uint64_t x471 = 0LLU;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = (x469-((x470&x471)/x472));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x474 = 216782550865903LL;
	volatile int32_t x475 = INT32_MIN;
	int16_t x476 = INT16_MIN;
	static volatile int64_t t111 = 7884620608LL;

    t111 = (x473-((x474&x475)/x476));

    if (t111 != 6615663708LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x477 = -1;
	int64_t x478 = 16537845570LL;
	int32_t x479 = 6534;
	static int64_t t112 = -1894162599624LL;

    t112 = (x477-((x478&x479)/x480));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x481 = INT16_MIN;
	uint8_t x482 = 2U;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint32_t t113 = 2U;

    t113 = (x481-((x482&x483)/x484));

    if (t113 != 4294934528U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x487 = -1;

    t114 = (x485-((x486&x487)/x488));

    if (t114 != 32767LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x490 = INT8_MAX;
	uint16_t x491 = 6897U;
	uint32_t x492 = UINT32_MAX;
	static volatile uint32_t t115 = UINT32_MAX;

    t115 = (x489-((x490&x491)/x492));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = -1;
	static uint64_t x494 = UINT64_MAX;
	static volatile uint64_t t116 = 1483283353LLU;

    t116 = (x493-((x494&x495)/x496));

    if (t116 != 18436858358771872327LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x497 = 427;
	static int32_t x498 = -31609;
	uint64_t x499 = 18680404744741LLU;
	static int64_t x500 = INT64_MIN;
	static volatile uint64_t t117 = 2807367LLU;

    t117 = (x497-((x498&x499)/x500));

    if (t117 != 427LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x501 = INT16_MIN;
	static int8_t x502 = INT8_MIN;
	int16_t x503 = -24;
	volatile uint8_t x504 = 50U;
	int32_t t118 = -2030404;

    t118 = (x501-((x502&x503)/x504));

    if (t118 != -32766) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x506 = UINT16_MAX;
	uint8_t x507 = UINT8_MAX;
	static volatile int16_t x508 = -1199;
	static volatile uint64_t t119 = 15590402212LLU;

    t119 = (x505-((x506&x507)/x508));

    if (t119 != 51LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x509 = 0U;
	volatile int16_t x510 = -1;
	int8_t x511 = INT8_MIN;
	int8_t x512 = -7;
	volatile int32_t t120 = 348;

    t120 = (x509-((x510&x511)/x512));

    if (t120 != -18) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = 3818837;
	volatile uint16_t x516 = UINT16_MAX;
	int32_t t121 = 377596385;

    t121 = (x513-((x514&x515)/x516));

    if (t121 != 3818837) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x517 = 1U;
	static uint8_t x518 = 101U;
	volatile int8_t x520 = -1;
	uint32_t t122 = 39633058U;

    t122 = (x517-((x518&x519)/x520));

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x522 = -2084581202136LL;
	static int32_t x523 = INT32_MAX;
	static int64_t t123 = 893594348096614369LL;

    t123 = (x521-((x522&x523)/x524));

    if (t123 != 379546LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x525 = 98U;
	int64_t x526 = -1LL;
	int16_t x527 = INT16_MIN;
	int64_t t124 = -288781990461LL;

    t124 = (x525-((x526&x527)/x528));

    if (t124 != -32670LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x531 = -27;
	uint8_t x532 = 43U;
	uint32_t t125 = UINT32_MAX;

    t125 = (x529-((x530&x531)/x532));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x533 = -1LL;
	volatile int16_t x534 = 0;
	int8_t x535 = INT8_MIN;
	int64_t t126 = -264041321255650LL;

    t126 = (x533-((x534&x535)/x536));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x538 = -1;
	uint64_t t127 = 3LLU;

    t127 = (x537-((x538&x539)/x540));

    if (t127 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x542 = -15;
	int16_t x543 = INT16_MAX;
	int32_t t128 = 1;

    t128 = (x541-((x542&x543)/x544));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x545 = 7174203;
	volatile int16_t x547 = INT16_MIN;
	static int64_t x548 = INT64_MIN;
	static volatile int64_t t129 = 4504821LL;

    t129 = (x545-((x546&x547)/x548));

    if (t129 != 7174203LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x549 = -1;
	volatile int32_t x550 = -1;
	int32_t x551 = INT32_MIN;
	uint16_t x552 = 44U;
	volatile int32_t t130 = -778;

    t130 = (x549-((x550&x551)/x552));

    if (t130 != 48806445) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x553 = 2241585U;
	static int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MIN;
	static uint32_t t131 = 653627U;

    t131 = (x553-((x554&x555)/x556));

    if (t131 != 2241585U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x557 = -1375;
	int64_t x558 = INT64_MAX;
	int16_t x560 = 6;
	int64_t t132 = 219680786886295613LL;

    t132 = (x557-((x558&x559)/x560));

    if (t132 != -1375LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x561 = INT64_MIN;
	static uint32_t x562 = UINT32_MAX;
	volatile uint32_t x564 = UINT32_MAX;
	int64_t t133 = INT64_MIN;

    t133 = (x561-((x562&x563)/x564));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x565 = -125038;
	volatile int32_t x566 = -1;
	volatile int8_t x567 = 0;
	int32_t t134 = 5206;

    t134 = (x565-((x566&x567)/x568));

    if (t134 != -125038) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x569 = 116239054;
	int8_t x570 = -1;
	int8_t x571 = -5;
	volatile int32_t t135 = 2269649;

    t135 = (x569-((x570&x571)/x572));

    if (t135 != 116239054) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x573 = 2131762801861LL;
	uint64_t x574 = UINT64_MAX;
	int64_t x575 = INT64_MIN;
	static int64_t x576 = 1211423LL;
	static uint64_t t136 = 22802366840901046LLU;

    t136 = (x573-((x574&x575)/x576));

    if (t136 != 18446738591804760197LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = -26;
	volatile int32_t x578 = INT32_MIN;
	uint32_t x579 = 32949U;
	static uint64_t x580 = 4392LLU;

    t137 = (x577-((x578&x579)/x580));

    if (t137 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x581 = INT64_MIN;
	uint8_t x583 = 2U;
	int8_t x584 = INT8_MIN;
	volatile int64_t t138 = INT64_MIN;

    t138 = (x581-((x582&x583)/x584));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x585 = 15U;
	int16_t x587 = INT16_MAX;

    t139 = (x585-((x586&x587)/x588));

    if (t139 != 15U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x589 = 86U;
	int16_t x590 = INT16_MIN;
	uint16_t x591 = 2123U;
	uint64_t x592 = 10752LLU;
	static uint64_t t140 = 20646912298LLU;

    t140 = (x589-((x590&x591)/x592));

    if (t140 != 86LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x593 = INT16_MIN;
	volatile uint32_t x594 = UINT32_MAX;
	static int64_t x595 = -1353248906334903425LL;
	static int64_t t141 = -65533172503LL;

    t141 = (x593-((x594&x595)/x596));

    if (t141 != -47730LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x597 = INT8_MIN;
	volatile uint8_t x599 = 0U;
	int32_t x600 = 207;
	volatile int32_t t142 = -17001921;

    t142 = (x597-((x598&x599)/x600));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x601 = 215396LLU;
	static uint8_t x603 = UINT8_MAX;
	static int64_t x604 = INT64_MAX;
	uint64_t t143 = 2926425118979783107LLU;

    t143 = (x601-((x602&x603)/x604));

    if (t143 != 215396LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x607 = INT8_MIN;
	int64_t t144 = -55779658LL;

    t144 = (x605-((x606&x607)/x608));

    if (t144 != -402LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x609 = UINT64_MAX;
	uint16_t x610 = UINT16_MAX;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = (x609-((x610&x611)/x612));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x614 = INT32_MIN;
	int32_t x615 = INT32_MAX;
	int32_t x616 = -15371805;
	int64_t t146 = INT64_MIN;

    t146 = (x613-((x614&x615)/x616));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x617 = INT8_MIN;
	uint64_t x618 = 130998731450256LLU;
	static int64_t x620 = INT64_MAX;

    t147 = (x617-((x618&x619)/x620));

    if (t147 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x623 = 109U;
	int32_t x624 = INT32_MAX;
	int32_t t148 = 0;

    t148 = (x621-((x622&x623)/x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x629 = 33110108049437LL;
	int32_t x631 = -1;
	volatile uint64_t x632 = UINT64_MAX;
	static uint64_t t149 = 17LLU;

    t149 = (x629-((x630&x631)/x632));

    if (t149 != 33110108049437LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x633 = -1;
	int32_t x634 = INT32_MAX;
	volatile int64_t x635 = 124948848LL;
	int32_t x636 = -1;
	int64_t t150 = 8367LL;

    t150 = (x633-((x634&x635)/x636));

    if (t150 != 124948847LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x637 = UINT32_MAX;
	int32_t x638 = -1;
	int8_t x639 = -16;
	uint8_t x640 = UINT8_MAX;

    t151 = (x637-((x638&x639)/x640));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x641 = UINT64_MAX;
	static int16_t x643 = 252;
	uint32_t x644 = 2495U;
	volatile uint64_t t152 = UINT64_MAX;

    t152 = (x641-((x642&x643)/x644));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x645 = INT32_MIN;
	volatile int16_t x646 = -1;
	int32_t x648 = INT32_MAX;
	volatile int32_t t153 = 290988;

    t153 = (x645-((x646&x647)/x648));

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x649 = -1;
	static int16_t x650 = INT16_MIN;
	int16_t x651 = -44;
	int16_t x652 = -24;
	volatile int32_t t154 = -3809;

    t154 = (x649-((x650&x651)/x652));

    if (t154 != -1366) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = INT8_MIN;
	uint16_t x654 = 2U;
	static volatile int8_t x655 = 8;
	static int32_t t155 = 418970955;

    t155 = (x653-((x654&x655)/x656));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MAX;
	int8_t x659 = INT8_MIN;
	static int16_t x660 = INT16_MIN;
	int32_t t156 = -1;

    t156 = (x657-((x658&x659)/x660));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x661 = 4U;
	int16_t x662 = -1;
	static volatile int8_t x663 = INT8_MIN;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t157 = -454262638;

    t157 = (x661-((x662&x663)/x664));

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x665 = 2798977U;
	static uint64_t x666 = 22628211262LLU;
	static int8_t x667 = 1;
	int8_t x668 = -1;
	volatile uint64_t t158 = 238179920205131LLU;

    t158 = (x665-((x666&x667)/x668));

    if (t158 != 2798977LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x669 = INT32_MAX;
	int32_t x670 = -3513;
	int64_t x671 = 0LL;
	int32_t x672 = INT32_MAX;
	volatile int64_t t159 = -14LL;

    t159 = (x669-((x670&x671)/x672));

    if (t159 != 2147483647LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x673 = INT32_MAX;
	uint16_t x675 = 47U;
	int64_t x676 = INT64_MAX;
	volatile int64_t t160 = -6LL;

    t160 = (x673-((x674&x675)/x676));

    if (t160 != 2147483647LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x681 = -59081611266169744LL;
	uint16_t x682 = 29U;
	int8_t x683 = INT8_MAX;
	int64_t t161 = 20650235LL;

    t161 = (x681-((x682&x683)/x684));

    if (t161 != -59081611266169744LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x685 = INT8_MIN;
	static int8_t x686 = 19;
	int8_t x687 = 14;
	uint8_t x688 = 6U;

    t162 = (x685-((x686&x687)/x688));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x690 = INT16_MAX;
	int64_t x692 = -1LL;
	uint64_t t163 = 2296340132466471505LLU;

    t163 = (x689-((x690&x691)/x692));

    if (t163 != 4294967295LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x694 = -1LL;
	volatile int16_t x695 = 55;
	uint64_t t164 = 160361842498LLU;

    t164 = (x693-((x694&x695)/x696));

    if (t164 != 73026LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x698 = 13;
	volatile uint32_t x699 = UINT32_MAX;
	volatile uint8_t x700 = 74U;
	static volatile uint32_t t165 = 478797U;

    t165 = (x697-((x698&x699)/x700));

    if (t165 != 65535U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x701 = 37U;
	int8_t x702 = INT8_MAX;
	uint32_t x703 = 18U;
	uint64_t x704 = 17354302731174219LLU;
	uint64_t t166 = 1151452714016LLU;

    t166 = (x701-((x702&x703)/x704));

    if (t166 != 37LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = 0;
	uint64_t x706 = UINT64_MAX;
	static volatile int16_t x707 = INT16_MAX;
	volatile uint64_t t167 = 4264377197071740956LLU;

    t167 = (x705-((x706&x707)/x708));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x709 = -1099539547243144784LL;
	int32_t x710 = 13496656;
	static int32_t x712 = INT32_MAX;
	volatile int64_t t168 = -23751288327658401LL;

    t168 = (x709-((x710&x711)/x712));

    if (t168 != -1099539547243144784LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 5U;
	uint32_t x715 = UINT32_MAX;
	static int8_t x716 = 13;
	volatile uint32_t t169 = 269283448U;

    t169 = (x713-((x714&x715)/x716));

    if (t169 != 4294934528U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x717 = INT64_MIN;
	volatile uint8_t x719 = 5U;
	volatile int64_t x720 = 42458LL;

    t170 = (x717-((x718&x719)/x720));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x721 = -3996;
	static volatile int16_t x722 = INT16_MAX;
	uint64_t x724 = 929034LLU;
	uint64_t t171 = 349747951489700LLU;

    t171 = (x721-((x722&x723)/x724));

    if (t171 != 18446744073709547620LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	volatile int8_t x726 = 0;
	int8_t x727 = INT8_MIN;
	static uint64_t x728 = 62947640982462219LLU;
	volatile uint64_t t172 = 1980202403144971824LLU;

    t172 = (x725-((x726&x727)/x728));

    if (t172 != 255LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x729 = 877LL;
	uint16_t x731 = UINT16_MAX;
	static int64_t t173 = 4256LL;

    t173 = (x729-((x730&x731)/x732));

    if (t173 != 11481LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = -1;
	uint64_t x734 = 27114155LLU;
	int32_t x735 = INT32_MIN;
	volatile uint32_t x736 = 2U;
	volatile uint64_t t174 = UINT64_MAX;

    t174 = (x733-((x734&x735)/x736));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x742 = 28812132U;
	volatile int8_t x743 = -1;
	int64_t x744 = INT64_MIN;

    t175 = (x741-((x742&x743)/x744));

    if (t175 != 35176550752273521LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = INT32_MIN;
	static uint32_t x746 = 16U;
	static volatile int64_t x748 = -1793178939LL;
	int64_t t176 = -11486LL;

    t176 = (x745-((x746&x747)/x748));

    if (t176 != -2147483648LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x749 = UINT32_MAX;
	static int16_t x750 = -1;
	int16_t x751 = INT16_MAX;
	int64_t x752 = -5282210965LL;
	int64_t t177 = 236273441892037LL;

    t177 = (x749-((x750&x751)/x752));

    if (t177 != 4294967295LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x753 = -36153031LL;
	volatile int16_t x754 = -1;
	uint16_t x755 = 7U;
	uint8_t x756 = UINT8_MAX;
	volatile int64_t t178 = -3443683120LL;

    t178 = (x753-((x754&x755)/x756));

    if (t178 != -36153031LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	static uint64_t x758 = 490007597367472159LLU;
	int16_t x760 = -1604;
	volatile uint64_t t179 = UINT64_MAX;

    t179 = (x757-((x758&x759)/x760));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x762 = 1U;
	volatile uint32_t x763 = UINT32_MAX;
	volatile int64_t t180 = 518866LL;

    t180 = (x761-((x762&x763)/x764));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x765 = INT64_MIN;
	static int64_t x767 = INT64_MIN;
	uint16_t x768 = 25374U;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x765-((x766&x767)/x768));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x769 = INT32_MAX;
	int32_t x771 = -1;
	int64_t x772 = INT64_MIN;
	int64_t t182 = 849710204LL;

    t182 = (x769-((x770&x771)/x772));

    if (t182 != 2147483647LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x774 = 6955U;
	static volatile int64_t x775 = 68724814114LL;

    t183 = (x773-((x774&x775)/x776));

    if (t183 != 6LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x778 = INT16_MIN;
	int32_t x779 = -1;
	volatile uint64_t x780 = UINT64_MAX;
	volatile uint64_t t184 = 4810912984913624979LLU;

    t184 = (x777-((x778&x779)/x780));

    if (t184 != 32767LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x781 = 1U;
	int64_t x782 = INT64_MIN;
	static int8_t x783 = INT8_MAX;
	static uint8_t x784 = 87U;
	static volatile int64_t t185 = 16149332LL;

    t185 = (x781-((x782&x783)/x784));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x785 = INT32_MAX;
	int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	static volatile int8_t x788 = -1;

    t186 = (x785-((x786&x787)/x788));

    if (t186 != 2147450879) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x789 = 758LL;
	static int64_t x790 = INT64_MIN;
	int16_t x791 = -1;
	int32_t x792 = 2037;
	int64_t t187 = 3781LL;

    t187 = (x789-((x790&x791)/x792));

    if (t187 != 4527919507538694LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x799 = 220173585LLU;
	int64_t x800 = -1LL;

    t188 = (x797-((x798&x799)/x800));

    if (t188 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x801 = -1;
	int64_t x802 = INT64_MAX;
	volatile int16_t x803 = -48;

    t189 = (x801-((x802&x803)/x804));

    if (t189 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MAX;
	int8_t x807 = INT8_MAX;
	int8_t x808 = INT8_MAX;
	static volatile int32_t t190 = -30725021;

    t190 = (x805-((x806&x807)/x808));

    if (t190 != 254) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x809 = -59982392042LL;
	uint32_t x810 = UINT32_MAX;
	int64_t x811 = -1LL;

    t191 = (x809-((x810&x811)/x812));

    if (t191 != -55687424747LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x813 = -1;
	int8_t x814 = INT8_MAX;
	uint16_t x815 = 2U;
	uint64_t x816 = 96LLU;
	static volatile uint64_t t192 = UINT64_MAX;

    t192 = (x813-((x814&x815)/x816));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x818 = INT64_MAX;
	int32_t x819 = -1;
	volatile int64_t t193 = 28022542620845123LL;

    t193 = (x817-((x818&x819)/x820));

    if (t193 != 281474976710653LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x822 = INT8_MIN;
	static int32_t x823 = INT32_MIN;
	static int32_t t194 = 7070561;

    t194 = (x821-((x822&x823)/x824));

    if (t194 != 32764) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x825 = UINT32_MAX;
	uint16_t x826 = 594U;
	volatile int8_t x827 = -3;
	uint8_t x828 = 1U;
	volatile uint32_t t195 = 223U;

    t195 = (x825-((x826&x827)/x828));

    if (t195 != 4294966703U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x829 = INT32_MIN;
	int16_t x830 = -716;
	uint64_t x831 = UINT64_MAX;
	static uint16_t x832 = 1978U;
	volatile uint64_t t196 = 3291819019688516LLU;

    t196 = (x829-((x830&x831)/x832));

    if (t196 != 18437418113991941805LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x834 = -1LL;
	int8_t x836 = -46;
	int64_t t197 = 620937771815542829LL;

    t197 = (x833-((x834&x835)/x836));

    if (t197 != -46LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x837 = INT8_MAX;
	int64_t x838 = INT64_MIN;
	uint8_t x839 = 6U;
	int8_t x840 = INT8_MIN;
	volatile int64_t t198 = -1LL;

    t198 = (x837-((x838&x839)/x840));

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x841 = -12757LL;
	int64_t x842 = 180LL;
	int64_t x843 = INT64_MIN;
	volatile uint64_t t199 = 501115985974297589LLU;

    t199 = (x841-((x842&x843)/x844));

    if (t199 != 18446744073709538859LLU) { NG(); } else { ; }
	
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

