
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

static uint32_t x16 = 106013810U;
uint64_t x18 = 8436558591550643734LLU;
static int64_t x20 = -316569131521242LL;
int16_t x22 = INT16_MAX;
volatile int16_t x23 = 5982;
int32_t t5 = 3342;
uint64_t x25 = UINT64_MAX;
static volatile uint32_t t10 = 26U;
volatile int8_t x46 = -1;
int32_t x47 = 1;
uint16_t x52 = 1U;
uint32_t t12 = 42U;
uint32_t x55 = UINT32_MAX;
int64_t x57 = -391485644936281859LL;
int32_t x66 = INT32_MAX;
volatile uint32_t t16 = 4735U;
volatile int32_t t17 = -3;
int16_t x73 = -149;
int32_t x77 = INT32_MIN;
int16_t x78 = INT16_MIN;
static uint64_t x84 = 139769077LLU;
uint8_t x85 = 11U;
volatile int32_t t21 = -229767;
int32_t x94 = -1;
volatile int32_t x97 = -27;
int32_t x99 = INT32_MIN;
static int32_t x101 = 320149;
uint8_t x103 = UINT8_MAX;
uint32_t x107 = UINT32_MAX;
int32_t x109 = INT32_MIN;
static volatile uint32_t x117 = UINT32_MAX;
int32_t x119 = -1;
uint64_t x120 = 1786050469390LLU;
int8_t x121 = INT8_MIN;
uint64_t t31 = UINT64_MAX;
volatile int16_t x131 = -12333;
volatile int32_t t32 = INT32_MIN;
static int64_t t34 = 0LL;
int32_t t35 = -6;
volatile uint16_t x146 = 0U;
volatile int64_t x149 = -13258545LL;
int64_t t37 = -405693859756951LL;
static uint32_t x156 = UINT32_MAX;
static int64_t x161 = INT64_MIN;
volatile int8_t x167 = INT8_MAX;
int32_t x171 = INT32_MIN;
static int16_t x175 = 1;
static volatile int64_t t43 = -12056421LL;
uint8_t x181 = 1U;
int16_t x182 = INT16_MAX;
volatile int16_t x189 = -1;
int32_t x194 = INT32_MIN;
volatile int64_t t51 = -295624988LL;
int32_t x209 = INT32_MIN;
int32_t x210 = INT32_MIN;
int16_t x217 = INT16_MAX;
uint16_t x225 = UINT16_MAX;
uint32_t x236 = UINT32_MAX;
int32_t x238 = INT32_MAX;
uint16_t x242 = 449U;
static uint16_t x244 = 337U;
uint16_t x247 = 3977U;
static int8_t x252 = INT8_MIN;
int64_t x255 = INT64_MIN;
volatile int32_t t63 = -109994;
uint8_t x259 = UINT8_MAX;
int8_t x261 = INT8_MIN;
static int8_t x262 = 0;
int8_t x263 = INT8_MAX;
uint16_t x264 = 25U;
uint64_t x267 = 74749434203LLU;
volatile int32_t t66 = 1;
static int32_t t69 = 2708271;
int32_t x288 = -48258;
int32_t x289 = INT32_MIN;
static volatile uint32_t x299 = UINT32_MAX;
static int32_t x300 = INT32_MIN;
volatile int64_t t74 = 244287815696LL;
uint16_t x303 = UINT16_MAX;
int32_t t75 = 47582;
uint32_t x308 = 463005314U;
int64_t x309 = -1LL;
int64_t x318 = -1LL;
int32_t t79 = INT32_MAX;
int16_t x324 = INT16_MIN;
static int32_t t81 = 11142;
int64_t x329 = 6LL;
static volatile int64_t t82 = 13182641705228LL;
static volatile uint32_t t83 = UINT32_MAX;
static uint16_t x337 = UINT16_MAX;
int16_t x345 = -1;
volatile int8_t x356 = 0;
static uint32_t x358 = UINT32_MAX;
int16_t x359 = INT16_MAX;
int16_t x366 = INT16_MIN;
static uint64_t x384 = UINT64_MAX;
uint32_t t96 = 526467U;
volatile int16_t x391 = -1;
int16_t x394 = INT16_MIN;
int8_t x397 = INT8_MAX;
volatile uint16_t x414 = 500U;
int8_t x415 = -1;
uint16_t x421 = UINT16_MAX;
int32_t t106 = 719834712;
static uint32_t x440 = 414291U;
int32_t x441 = -1;
uint64_t t110 = UINT64_MAX;
int64_t x446 = INT64_MIN;
int8_t x449 = 13;
uint8_t x450 = 31U;
static uint8_t x451 = 30U;
volatile int8_t x461 = INT8_MIN;
int16_t x462 = INT16_MIN;
int8_t x467 = INT8_MIN;
int32_t x468 = INT32_MAX;
int64_t x472 = -173366615LL;
volatile uint16_t x476 = 323U;
uint64_t x477 = 790405590LLU;
uint8_t x479 = 34U;
volatile int64_t x480 = -1LL;
uint64_t t119 = UINT64_MAX;
static uint8_t x483 = 62U;
int16_t x489 = INT16_MAX;
int32_t x502 = 24;
static uint16_t x504 = 4088U;
uint32_t t125 = 16935468U;
int16_t x505 = -62;
volatile int32_t x513 = INT32_MAX;
int16_t x516 = 0;
int64_t x521 = INT64_MIN;
uint16_t x524 = 58U;
int64_t t130 = 1991076LL;
static int64_t x540 = -3403426724810LL;
static int64_t x542 = INT64_MAX;
int32_t t135 = -138207;
volatile int64_t x551 = INT64_MIN;
volatile uint32_t t138 = 57257111U;
uint8_t x558 = UINT8_MAX;
int32_t t140 = -12;
int8_t x567 = INT8_MIN;
int32_t t141 = -1;
uint32_t t143 = 97051285U;
uint8_t x579 = UINT8_MAX;
static volatile uint32_t t145 = 5886U;
int64_t x588 = INT64_MAX;
static uint8_t x589 = UINT8_MAX;
uint32_t x592 = UINT32_MAX;
uint32_t t147 = UINT32_MAX;
uint64_t x594 = 15980923474910LLU;
uint32_t x595 = 104634809U;
int64_t x598 = INT64_MIN;
volatile int64_t t151 = -1110758977396447220LL;
int64_t x609 = INT64_MIN;
uint32_t x615 = 1702U;
volatile uint64_t t153 = UINT64_MAX;
static uint64_t x620 = UINT64_MAX;
int32_t t155 = -5;
int32_t t157 = 66;
int32_t t158 = -123691698;
static int16_t x637 = 126;
int8_t x641 = -18;
int32_t x650 = -1;
uint32_t t163 = 13U;
uint64_t x657 = 233238256617026LLU;
static int64_t x661 = -1LL;
uint8_t x663 = 94U;
uint16_t x665 = 1932U;
int16_t x668 = INT16_MAX;
int32_t t167 = -616946;
int8_t x676 = -1;
int32_t t170 = -876;
int16_t x692 = 35;
static int32_t t172 = 83174;
uint8_t x705 = 1U;
int64_t x708 = 1778483684668118LL;
volatile int16_t x725 = 38;
int32_t x730 = INT32_MIN;
uint32_t x734 = 348512731U;
static uint32_t x739 = 10974U;
int64_t x742 = -43823671997546275LL;
volatile int8_t x745 = INT8_MAX;
int64_t x746 = INT64_MIN;
static volatile int32_t t186 = 2424;
int64_t x749 = INT64_MIN;
static volatile int32_t x751 = INT32_MAX;
int64_t t187 = -706819LL;
uint32_t x758 = UINT32_MAX;
int8_t x762 = -1;
static uint32_t x766 = 17151U;
uint32_t x767 = 95000058U;
int8_t x771 = -1;
int32_t x782 = INT32_MIN;
int32_t x784 = -1;
int32_t x785 = INT32_MIN;
int32_t t196 = 105233;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	static uint8_t x2 = UINT8_MAX;
	static int16_t x3 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

    t0 = (x1|((x2<=x3)|x4));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 15326U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;
	uint32_t t1 = 9U;

    t1 = (x5|((x6<=x7)|x8));

    if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 4U;
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = INT32_MAX;
	int64_t x12 = -1LL;
	volatile int64_t t2 = -409508579652LL;

    t2 = (x9|((x10<=x11)|x12));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = 86U;
	int16_t x15 = 0;
	static volatile uint64_t t3 = UINT64_MAX;

    t3 = (x13|((x14<=x15)|x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int8_t x19 = 9;
	static int64_t t4 = 122463187LL;

    t4 = (x17|((x18<=x19)|x20));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	static uint16_t x24 = 99U;

    t5 = (x21|((x22<=x23)|x24));

    if (t5 != -32669) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -4LL;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x25|((x26<=x27)|x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static int32_t x30 = -628593;
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = -30LL;

    t7 = (x29|((x30<=x31)|x32));

    if (t7 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 1;
	volatile int32_t x34 = 26;
	int32_t x35 = -1;
	uint32_t x36 = 23280U;
	static volatile uint32_t t8 = 423576U;

    t8 = (x33|((x34<=x35)|x36));

    if (t8 != 23281U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 428U;
	volatile int16_t x38 = -3;
	int32_t x39 = -1023561;
	int64_t x40 = -444966177332LL;
	int64_t t9 = 38703196LL;

    t9 = (x37|((x38<=x39)|x40));

    if (t9 != -444966177300LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 403;
	volatile int8_t x42 = 1;
	volatile int16_t x43 = INT16_MIN;
	static uint32_t x44 = 67U;

    t10 = (x41|((x42<=x43)|x44));

    if (t10 != 467U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -4517;

    t11 = (x45|((x46<=x47)|x48));

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 53545U;
	volatile uint32_t x50 = 111U;
	static int16_t x51 = 2;

    t12 = (x49|((x50<=x51)|x52));

    if (t12 != 53545U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	volatile uint32_t x54 = 56U;
	int32_t x56 = -702904;
	int32_t t13 = 0;

    t13 = (x53|((x54<=x55)|x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 0LLU;
	uint64_t x59 = 41064LLU;
	int64_t x60 = 55647954645417LL;
	int64_t t14 = -686966534558885894LL;

    t14 = (x57|((x58<=x59)|x60));

    if (t14 != -391465731319287299LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x61 = 39U;
	int32_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	uint32_t x64 = UINT32_MAX;
	uint32_t t15 = UINT32_MAX;

    t15 = (x61|((x62<=x63)|x64));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 1351;
	int32_t x67 = -63648;
	uint32_t x68 = 531577116U;

    t16 = (x65|((x66<=x67)|x68));

    if (t16 != 531578207U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x69 = 7152U;
	int8_t x70 = 52;
	uint16_t x71 = 252U;
	volatile uint16_t x72 = 1U;

    t17 = (x69|((x70<=x71)|x72));

    if (t17 != 7153) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = 233;
	int32_t x75 = 32691;
	volatile int16_t x76 = -21;
	volatile int32_t t18 = 77193;

    t18 = (x73|((x74<=x75)|x76));

    if (t18 != -21) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = -8;
	int16_t x80 = -1;
	int32_t t19 = 1066717064;

    t19 = (x77|((x78<=x79)|x80));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	int32_t x82 = INT32_MAX;
	uint16_t x83 = 3513U;
	uint64_t t20 = UINT64_MAX;

    t20 = (x81|((x82<=x83)|x84));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;
	static int32_t x87 = INT32_MIN;
	volatile int8_t x88 = INT8_MIN;

    t21 = (x85|((x86<=x87)|x88));

    if (t21 != -117) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 519822168LLU;
	volatile int8_t x90 = INT8_MIN;
	int8_t x91 = 60;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t22 = 31768841633LLU;

    t22 = (x89|((x90<=x91)|x92));

    if (t22 != 4294967295LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 1442601938269LL;
	static int8_t x95 = INT8_MAX;
	int64_t x96 = 7229191645943LL;
	int64_t t23 = -9085752223462LL;

    t23 = (x93|((x94<=x95)|x96));

    if (t23 != 8658350436351LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x98 = UINT64_MAX;
	int8_t x100 = 0;
	int32_t t24 = -2;

    t24 = (x97|((x98<=x99)|x100));

    if (t24 != -27) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = 772U;
	int64_t x104 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

    t25 = (x101|((x102<=x103)|x104));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -1LL;
	static uint16_t x106 = UINT16_MAX;
	uint32_t x108 = 22735157U;
	volatile int64_t t26 = 21056LL;

    t26 = (x105|((x106<=x107)|x108));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	volatile int16_t x111 = INT16_MIN;
	static int64_t x112 = INT64_MAX;
	int64_t t27 = 12390013681297LL;

    t27 = (x109|((x110<=x111)|x112));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x114 = 66545981224273393LL;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 73;

    t28 = (x113|((x114<=x115)|x116));

    if (t28 != -2147418113) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	uint64_t t29 = 3395165838930123661LLU;

    t29 = (x117|((x118<=x119)|x120));

    if (t29 != 1786706395135LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t30 = -2893LL;

    t30 = (x121|((x122<=x123)|x124));

    if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x125 = 11U;
	uint64_t x126 = 3083060494LLU;
	volatile int32_t x127 = -1;
	uint64_t x128 = UINT64_MAX;

    t31 = (x125|((x126<=x127)|x128));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MIN;
	uint64_t x130 = UINT64_MAX;
	int32_t x132 = INT32_MIN;

    t32 = (x129|((x130<=x131)|x132));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = -228;
	static uint32_t x134 = 19965U;
	static int16_t x135 = -1;
	int64_t x136 = INT64_MAX;
	int64_t t33 = 18174677957LL;

    t33 = (x133|((x134<=x135)|x136));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	static int64_t x138 = -60965383LL;
	static volatile int8_t x139 = -14;
	static uint32_t x140 = UINT32_MAX;

    t34 = (x137|((x138<=x139)|x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 5U;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = 0;
	volatile int8_t x144 = 0;

    t35 = (x141|((x142<=x143)|x144));

    if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 29U;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -1;
	volatile int32_t t36 = -254222;

    t36 = (x145|((x146<=x147)|x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x150 = 0U;
	volatile int64_t x151 = -435031LL;
	static uint16_t x152 = 9U;

    t37 = (x149|((x150<=x151)|x152));

    if (t37 != -13258545LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 21U;
	static int64_t x154 = INT64_MIN;
	uint64_t x155 = 3683381628504LLU;
	uint32_t t38 = UINT32_MAX;

    t38 = (x153|((x154<=x155)|x156));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -17;
	int32_t x158 = -35784854;
	uint64_t x159 = 1004505LLU;
	uint64_t x160 = 283136761LLU;
	uint64_t t39 = UINT64_MAX;

    t39 = (x157|((x158<=x159)|x160));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x162 = INT8_MIN;
	int64_t x163 = 1290591073010338628LL;
	uint64_t x164 = 33351741LLU;
	static volatile uint64_t t40 = 3549LLU;

    t40 = (x161|((x162<=x163)|x164));

    if (t40 != 9223372036888127549LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 20;
	uint32_t x166 = 84U;
	volatile int64_t x168 = 285608567806483169LL;
	volatile int64_t t41 = 14LL;

    t41 = (x165|((x166<=x167)|x168));

    if (t41 != 285608567806483189LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 7321482U;
	volatile uint32_t x170 = UINT32_MAX;
	int8_t x172 = 9;
	static volatile uint32_t t42 = 96516082U;

    t42 = (x169|((x170<=x171)|x172));

    if (t42 != 7321483U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x173 = 1878U;
	volatile int8_t x174 = 5;
	static int64_t x176 = 33174052226576045LL;

    t43 = (x173|((x174<=x175)|x176));

    if (t43 != 33174052226576383LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MAX;
	uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 3U;
	uint64_t x180 = 235437LLU;
	static uint64_t t44 = 628964542LLU;

    t44 = (x177|((x178<=x179)|x180));

    if (t44 != 235519LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = 3086;

    t45 = (x181|((x182<=x183)|x184));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = -1;
	int64_t x187 = -346738LL;
	static uint16_t x188 = UINT16_MAX;
	int32_t t46 = 224539697;

    t46 = (x185|((x186<=x187)|x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -1;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 1;

    t47 = (x189|((x190<=x191)|x192));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = 3011836LL;
	uint16_t x195 = UINT16_MAX;
	static volatile uint32_t x196 = 66416U;
	int64_t t48 = 4689979630596LL;

    t48 = (x193|((x194<=x195)|x196));

    if (t48 != 3012605LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int32_t x198 = -107;
	uint8_t x199 = 3U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 22774614;

    t49 = (x197|((x198<=x199)|x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 65U;
	int8_t x202 = INT8_MIN;
	int8_t x203 = -3;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = 1704;

    t50 = (x201|((x202<=x203)|x204));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	int8_t x206 = 0;
	int32_t x207 = 29;
	uint16_t x208 = UINT16_MAX;

    t51 = (x205|((x206<=x207)|x208));

    if (t51 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x211 = INT32_MIN;
	int8_t x212 = -3;
	int32_t t52 = 7105;

    t52 = (x209|((x210<=x211)|x212));

    if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static int32_t x214 = INT32_MAX;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = 341394659436327025LL;
	volatile int64_t t53 = -28540187795494542LL;

    t53 = (x213|((x214<=x215)|x216));

    if (t53 != -15LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = 7774598;
	volatile int32_t t54 = 8;

    t54 = (x217|((x218<=x219)|x220));

    if (t54 != 7798783) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -1;
	uint32_t x222 = 44U;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;
	volatile int32_t t55 = -4;

    t55 = (x221|((x222<=x223)|x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = -1;
	static uint32_t x227 = 0U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -20682;

    t56 = (x225|((x226<=x227)|x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 14U;
	static uint32_t x230 = UINT32_MAX;
	static volatile int64_t x231 = INT64_MIN;
	uint16_t x232 = UINT16_MAX;
	int32_t t57 = 306411806;

    t57 = (x229|((x230<=x231)|x232));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	volatile uint32_t t58 = UINT32_MAX;

    t58 = (x233|((x234<=x235)|x236));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 43U;
	int8_t x239 = 0;
	int8_t x240 = INT8_MIN;
	uint32_t t59 = 253497U;

    t59 = (x237|((x238<=x239)|x240));

    if (t59 != 4294967211U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	int64_t x243 = -21173544816738LL;
	int32_t t60 = INT32_MAX;

    t60 = (x241|((x242<=x243)|x244));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MAX;
	uint16_t x246 = UINT16_MAX;
	int8_t x248 = -3;
	int64_t t61 = -22836033868LL;

    t61 = (x245|((x246<=x247)|x248));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = 13;
	volatile int8_t x250 = INT8_MAX;
	static volatile uint32_t x251 = 810736965U;
	static volatile int32_t t62 = -79382;

    t62 = (x249|((x250<=x251)|x252));

    if (t62 != -115) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 5U;
	int32_t x254 = -19699;
	static int32_t x256 = INT32_MIN;

    t63 = (x253|((x254<=x255)|x256));

    if (t63 != -2147483643) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 2020555;
	uint16_t x258 = UINT16_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 5314;

    t64 = (x257|((x258<=x259)|x260));

    if (t64 != -11061) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t t65 = -12;

    t65 = (x261|((x262<=x263)|x264));

    if (t65 != -103) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = 22U;
	int16_t x266 = 0;
	int32_t x268 = INT32_MIN;

    t66 = (x265|((x266<=x267)|x268));

    if (t66 != -2147483625) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 4048841U;
	uint16_t x270 = 3641U;
	int32_t x271 = -1;
	uint32_t x272 = 1307123286U;
	uint32_t t67 = 13332U;

    t67 = (x269|((x270<=x271)|x272));

    if (t67 != 1308483551U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	volatile uint8_t x274 = 0U;
	volatile int64_t x275 = INT64_MAX;
	int16_t x276 = -1;
	volatile int64_t t68 = -13088851LL;

    t68 = (x273|((x274<=x275)|x276));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = -48077135;
	int32_t x279 = -1;
	int8_t x280 = 7;

    t69 = (x277|((x278<=x279)|x280));

    if (t69 != -32761) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 7U;
	uint8_t x283 = 0U;
	int16_t x284 = -1;
	static uint32_t t70 = UINT32_MAX;

    t70 = (x281|((x282<=x283)|x284));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 668;
	int32_t x286 = -773894;
	uint32_t x287 = UINT32_MAX;
	int32_t t71 = 114328;

    t71 = (x285|((x286<=x287)|x288));

    if (t71 != -48129) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MAX;
	uint16_t x291 = 15U;
	volatile uint8_t x292 = 38U;
	static volatile int32_t t72 = 722399;

    t72 = (x289|((x290<=x291)|x292));

    if (t72 != -2147483610) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = 1544;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -1;

    t73 = (x293|((x294<=x295)|x296));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = -1LL;
	static int32_t x298 = INT32_MIN;

    t74 = (x297|((x298<=x299)|x300));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 16536U;
	int64_t x302 = -58584383LL;
	int32_t x304 = INT32_MIN;

    t75 = (x301|((x302<=x303)|x304));

    if (t75 != -2147467111) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MAX;
	uint32_t t76 = 2040U;

    t76 = (x305|((x306<=x307)|x308));

    if (t76 != 463011839U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x310 = 6U;
	int8_t x311 = INT8_MAX;
	uint32_t x312 = 899U;
	int64_t t77 = 1LL;

    t77 = (x309|((x310<=x311)|x312));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	int32_t x314 = 28;
	int32_t x315 = -843240;
	static volatile uint16_t x316 = 9U;
	static int32_t t78 = INT32_MAX;

    t78 = (x313|((x314<=x315)|x316));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	uint16_t x319 = 22U;
	volatile int32_t x320 = INT32_MAX;

    t79 = (x317|((x318<=x319)|x320));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = -1;
	volatile uint32_t x322 = 2U;
	static int64_t x323 = -1LL;
	int32_t t80 = 6278100;

    t80 = (x321|((x322<=x323)|x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	static volatile int16_t x326 = -60;
	int8_t x327 = INT8_MAX;
	volatile int32_t x328 = INT32_MAX;

    t81 = (x325|((x326<=x327)|x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x330 = 38;
	static uint8_t x331 = 38U;
	int32_t x332 = INT32_MIN;

    t82 = (x329|((x330<=x331)|x332));

    if (t82 != -2147483641LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	int32_t x334 = -157899;
	int64_t x335 = -5LL;
	static uint32_t x336 = UINT32_MAX;

    t83 = (x333|((x334<=x335)|x336));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x338 = 15113U;
	uint64_t x339 = UINT64_MAX;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 1;

    t84 = (x337|((x338<=x339)|x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x341 = 585090U;
	int16_t x342 = INT16_MIN;
	static int8_t x343 = INT8_MAX;
	volatile uint16_t x344 = 0U;
	uint32_t t85 = 3476003U;

    t85 = (x341|((x342<=x343)|x344));

    if (t85 != 585091U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile uint32_t x348 = 136U;
	uint32_t t86 = UINT32_MAX;

    t86 = (x345|((x346<=x347)|x348));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MIN;
	uint16_t x350 = 5738U;
	int64_t x351 = INT64_MIN;
	int32_t x352 = 1;
	int32_t t87 = -52693;

    t87 = (x349|((x350<=x351)|x352));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 31791073U;
	volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MAX;
	volatile uint32_t t88 = 65474051U;

    t88 = (x353|((x354<=x355)|x356));

    if (t88 != 31791073U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	static int64_t x360 = INT64_MIN;
	static volatile int64_t t89 = 190029LL;

    t89 = (x357|((x358<=x359)|x360));

    if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	volatile uint8_t x362 = 4U;
	int64_t x363 = 1719LL;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t90 = -269;

    t90 = (x361|((x362<=x363)|x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = 0U;
	uint64_t t91 = UINT64_MAX;

    t91 = (x365|((x366<=x367)|x368));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int32_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -1LL;
	int64_t t92 = 3LL;

    t92 = (x369|((x370<=x371)|x372));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = 22;
	uint32_t x374 = 1691834951U;
	int64_t x375 = INT64_MIN;
	int64_t x376 = -8015375LL;
	volatile int64_t t93 = -263191708945983840LL;

    t93 = (x373|((x374<=x375)|x376));

    if (t93 != -8015369LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = INT16_MAX;
	volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = 63720644240961447LLU;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = 152585509;

    t94 = (x377|((x378<=x379)|x380));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	uint16_t x382 = 1008U;
	uint32_t x383 = 1451U;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = (x381|((x382<=x383)|x384));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 3463U;

    t96 = (x385|((x386<=x387)|x388));

    if (t96 != 3583U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 7761U;
	int8_t x390 = INT8_MAX;
	uint8_t x392 = UINT8_MAX;
	static uint32_t t97 = 483343U;

    t97 = (x389|((x390<=x391)|x392));

    if (t97 != 7935U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = 0U;
	uint32_t t98 = UINT32_MAX;

    t98 = (x393|((x394<=x395)|x396));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x398 = -31LL;
	volatile int16_t x399 = 1;
	int32_t x400 = INT32_MAX;
	int32_t t99 = INT32_MAX;

    t99 = (x397|((x398<=x399)|x400));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -3;
	uint32_t x402 = 105U;
	uint64_t x403 = UINT64_MAX;
	static int32_t x404 = 609;
	int32_t t100 = 88113256;

    t100 = (x401|((x402<=x403)|x404));

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int8_t x406 = 58;
	static int64_t x407 = INT64_MIN;
	int16_t x408 = 9;
	volatile int32_t t101 = INT32_MAX;

    t101 = (x405|((x406<=x407)|x408));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 0U;
	static int32_t x410 = INT32_MAX;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -1LL;
	int64_t t102 = -39430897785015686LL;

    t102 = (x409|((x410<=x411)|x412));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile int8_t x416 = INT8_MIN;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = (x413|((x414<=x415)|x416));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -1LL;
	static uint32_t x418 = 12553U;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	uint64_t t104 = UINT64_MAX;

    t104 = (x417|((x418<=x419)|x420));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = INT8_MIN;
	int8_t x423 = 1;
	static int32_t x424 = -29;
	volatile int32_t t105 = -5;

    t105 = (x421|((x422<=x423)|x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 6323U;
	static uint8_t x426 = 4U;
	int16_t x427 = INT16_MIN;
	volatile int32_t x428 = -4167731;

    t106 = (x425|((x426<=x427)|x428));

    if (t106 != -4161537) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	uint64_t x430 = UINT64_MAX;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -1LL;
	int64_t t107 = -1378259848773LL;

    t107 = (x429|((x430<=x431)|x432));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = -2985;
	volatile uint32_t x434 = UINT32_MAX;
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = 17307;

    t108 = (x433|((x434<=x435)|x436));

    if (t108 != -2985) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = 43957382800LL;
	int8_t x438 = 0;
	int8_t x439 = INT8_MAX;
	volatile int64_t t109 = 6232793777203LL;

    t109 = (x437|((x438<=x439)|x440));

    if (t109 != 43957780179LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = 3;
	static uint32_t x443 = 520988U;
	uint64_t x444 = UINT64_MAX;

    t110 = (x441|((x442<=x443)|x444));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int8_t x447 = -7;
	static int8_t x448 = 1;
	volatile int64_t t111 = -31557409067827LL;

    t111 = (x445|((x446<=x447)|x448));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x452 = 6407;
	int32_t t112 = 317511731;

    t112 = (x449|((x450<=x451)|x452));

    if (t112 != 6415) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MAX;
	static uint8_t x454 = UINT8_MAX;
	volatile int16_t x455 = 754;
	static int16_t x456 = INT16_MAX;
	int64_t t113 = INT64_MAX;

    t113 = (x453|((x454<=x455)|x456));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 614051U;
	static volatile uint16_t x458 = 120U;
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = 9U;
	volatile uint32_t t114 = 15893613U;

    t114 = (x457|((x458<=x459)|x460));

    if (t114 != 614059U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x463 = UINT8_MAX;
	int64_t x464 = -1LL;
	volatile int64_t t115 = 11229794815287032LL;

    t115 = (x461|((x462<=x463)|x464));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	volatile int8_t x466 = INT8_MIN;
	volatile int32_t t116 = 27453;

    t116 = (x465|((x466<=x467)|x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	int64_t t117 = 8415407380LL;

    t117 = (x469|((x470<=x471)|x472));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MAX;
	volatile int16_t x474 = INT16_MIN;
	static int32_t x475 = INT32_MIN;
	int32_t t118 = 0;

    t118 = (x473|((x474<=x475)|x476));

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = 88U;

    t119 = (x477|((x478<=x479)|x480));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 1U;
	int64_t x482 = 2624563875509238710LL;
	uint32_t x484 = UINT32_MAX;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x481|((x482<=x483)|x484));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -10;
	static volatile int64_t x486 = -1LL;
	static uint8_t x487 = UINT8_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t121 = UINT64_MAX;

    t121 = (x485|((x486<=x487)|x488));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MAX;
	static int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	static int32_t t122 = 531436736;

    t122 = (x489|((x490<=x491)|x492));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	int16_t x494 = -1;
	static int16_t x495 = INT16_MIN;
	static int32_t x496 = INT32_MAX;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (x493|((x494<=x495)|x496));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = 7U;
	int32_t x499 = -1;
	int16_t x500 = -14411;
	int32_t t124 = 8;

    t124 = (x497|((x498<=x499)|x500));

    if (t124 != -14411) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 624018U;
	static int64_t x503 = INT64_MIN;

    t125 = (x501|((x502<=x503)|x504));

    if (t125 != 626682U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x506 = -1;
	static uint8_t x507 = 49U;
	static volatile uint8_t x508 = 1U;
	static int32_t t126 = 30882592;

    t126 = (x505|((x506<=x507)|x508));

    if (t126 != -61) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 56U;
	uint64_t x510 = 74326672LLU;
	uint64_t x511 = 23878369401LLU;
	int64_t x512 = INT64_MAX;
	volatile int64_t t127 = INT64_MAX;

    t127 = (x509|((x510<=x511)|x512));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x514 = INT16_MAX;
	int64_t x515 = INT64_MAX;
	volatile int32_t t128 = INT32_MAX;

    t128 = (x513|((x514<=x515)|x516));

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = -1;
	volatile int16_t x518 = -7877;
	int64_t x519 = -1LL;
	static uint16_t x520 = 13U;
	volatile int32_t t129 = 42;

    t129 = (x517|((x518<=x519)|x520));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x522 = INT64_MAX;
	uint64_t x523 = 151202LLU;

    t130 = (x521|((x522<=x523)|x524));

    if (t130 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x525 = 4271055LLU;
	static uint32_t x526 = 154U;
	uint32_t x527 = UINT32_MAX;
	uint64_t x528 = 805372476LLU;
	static volatile uint64_t t131 = 244246LLU;

    t131 = (x525|((x526<=x527)|x528));

    if (t131 != 809577471LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 431582928LLU;
	uint8_t x530 = 43U;
	volatile int64_t x531 = -110292638045626916LL;
	static int64_t x532 = INT64_MIN;
	uint64_t t132 = 570739480499LLU;

    t132 = (x529|((x530<=x531)|x532));

    if (t132 != 9223372037286358736LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -8;
	int32_t x534 = INT32_MAX;
	int8_t x535 = INT8_MIN;
	int8_t x536 = -1;
	int32_t t133 = 231;

    t133 = (x533|((x534<=x535)|x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = -2239;
	int64_t x538 = -4024322836295731LL;
	int64_t x539 = INT64_MIN;
	volatile int64_t t134 = 383303780391LL;

    t134 = (x537|((x538<=x539)|x540));

    if (t134 != -2185LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 0;
	uint8_t x543 = 3U;
	int8_t x544 = INT8_MAX;

    t135 = (x541|((x542<=x543)|x544));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 7497;
	static int32_t x546 = -1;
	static int16_t x547 = 10015;
	int64_t x548 = INT64_MIN;
	int64_t t136 = -33728272874LL;

    t136 = (x545|((x546<=x547)|x548));

    if (t136 != -9223372036854768311LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	int16_t x550 = INT16_MIN;
	uint16_t x552 = 931U;
	static int32_t t137 = 653;

    t137 = (x549|((x550<=x551)|x552));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 24121U;
	uint8_t x554 = 3U;
	int32_t x555 = -1;
	int8_t x556 = INT8_MIN;

    t138 = (x553|((x554<=x555)|x556));

    if (t138 != 4294967225U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MIN;
	static volatile int32_t x559 = -1;
	int32_t x560 = INT32_MIN;
	int64_t t139 = 105001410896LL;

    t139 = (x557|((x558<=x559)|x560));

    if (t139 != -2147483648LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = -1;
	volatile uint32_t x562 = UINT32_MAX;
	int32_t x563 = -1;
	volatile uint16_t x564 = 119U;

    t140 = (x561|((x562<=x563)|x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = INT32_MIN;
	int64_t x566 = INT64_MAX;
	int16_t x568 = INT16_MIN;

    t141 = (x565|((x566<=x567)|x568));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	uint16_t x570 = UINT16_MAX;
	int32_t x571 = -1;
	int64_t x572 = -1LL;
	static volatile int64_t t142 = -1LL;

    t142 = (x569|((x570<=x571)|x572));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = 226391;
	int32_t x574 = INT32_MAX;
	static int64_t x575 = INT64_MAX;
	uint32_t x576 = 35252U;

    t143 = (x573|((x574<=x575)|x576));

    if (t143 != 261623U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	uint16_t x578 = 4U;
	volatile uint8_t x580 = UINT8_MAX;
	static int32_t t144 = -6;

    t144 = (x577|((x578<=x579)|x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	static int32_t x582 = -1;
	volatile int8_t x583 = -1;
	uint32_t x584 = 88534571U;

    t145 = (x581|((x582<=x583)|x584));

    if (t145 != 88534783U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x585 = 3U;
	int16_t x586 = INT16_MAX;
	volatile uint64_t x587 = UINT64_MAX;
	volatile int64_t t146 = INT64_MAX;

    t146 = (x585|((x586<=x587)|x588));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x590 = UINT8_MAX;
	uint64_t x591 = UINT64_MAX;

    t147 = (x589|((x590<=x591)|x592));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1468685430LLU;
	int16_t x596 = INT16_MAX;
	static uint64_t t148 = 463LLU;

    t148 = (x593|((x594<=x595)|x596));

    if (t148 != 1468694527LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -4;
	int16_t x599 = -75;
	int16_t x600 = 271;
	static int32_t t149 = 3211;

    t149 = (x597|((x598<=x599)|x600));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 11U;
	volatile uint64_t x602 = 61272LLU;
	int16_t x603 = -1;
	static int64_t x604 = INT64_MAX;
	volatile int64_t t150 = INT64_MAX;

    t150 = (x601|((x602<=x603)|x604));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 44U;
	int64_t x606 = -1LL;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MIN;

    t151 = (x605|((x606<=x607)|x608));

    if (t151 != -9223372036854775764LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = -17;
	uint16_t x611 = 3U;
	int32_t x612 = INT32_MIN;
	volatile int64_t t152 = -14455181403440295LL;

    t152 = (x609|((x610<=x611)|x612));

    if (t152 != -2147483647LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 209387698401287359LLU;
	uint32_t x614 = 21U;
	int8_t x616 = -1;

    t153 = (x613|((x614<=x615)|x616));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int64_t x618 = -1LL;
	uint8_t x619 = 5U;
	static uint64_t t154 = UINT64_MAX;

    t154 = (x617|((x618<=x619)|x620));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	uint16_t x622 = UINT16_MAX;
	int32_t x623 = INT32_MAX;
	static int16_t x624 = -1;

    t155 = (x621|((x622<=x623)|x624));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int8_t x626 = INT8_MIN;
	int32_t x627 = INT32_MAX;
	int8_t x628 = 21;
	volatile int64_t t156 = -27856101LL;

    t156 = (x625|((x626<=x627)|x628));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	static uint16_t x630 = UINT16_MAX;
	int32_t x631 = INT32_MAX;
	int32_t x632 = INT32_MIN;

    t157 = (x629|((x630<=x631)|x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = -1;
	int16_t x634 = -1;
	volatile int32_t x635 = INT32_MIN;
	int16_t x636 = -7472;

    t158 = (x633|((x634<=x635)|x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MAX;
	int8_t x639 = 3;
	static uint32_t x640 = 15316U;
	volatile uint32_t t159 = 2U;

    t159 = (x637|((x638<=x639)|x640));

    if (t159 != 15358U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 173U;
	int64_t x643 = 2531886070722192404LL;
	int64_t x644 = -115LL;
	int64_t t160 = 358252899LL;

    t160 = (x641|((x642<=x643)|x644));

    if (t160 != -17LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 631013104628511LL;
	int16_t x646 = INT16_MIN;
	int16_t x647 = INT16_MAX;
	uint64_t x648 = UINT64_MAX;
	static uint64_t t161 = UINT64_MAX;

    t161 = (x645|((x646<=x647)|x648));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = 159412U;
	int64_t x651 = 1616640288LL;
	volatile int64_t x652 = INT64_MAX;
	static int64_t t162 = INT64_MAX;

    t162 = (x649|((x650<=x651)|x652));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 1;
	volatile int64_t x654 = -1LL;
	uint32_t x655 = 1847845U;
	static uint32_t x656 = 474244U;

    t163 = (x653|((x654<=x655)|x656));

    if (t163 != 474245U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = INT64_MAX;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MIN;
	uint64_t t164 = 0LLU;

    t164 = (x657|((x658<=x659)|x660));

    if (t164 != 18446744073709520450LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x662 = INT16_MIN;
	int64_t x664 = INT64_MIN;
	volatile int64_t t165 = 6080622448639022LL;

    t165 = (x661|((x662<=x663)|x664));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = -1;
	static int32_t x667 = INT32_MAX;
	int32_t t166 = 987111;

    t166 = (x665|((x666<=x667)|x668));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -614376002;
	static int16_t x670 = -19;
	int32_t x671 = -102609226;
	int32_t x672 = INT32_MAX;

    t167 = (x669|((x670<=x671)|x672));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 0;
	uint16_t x674 = UINT16_MAX;
	volatile uint32_t x675 = UINT32_MAX;
	static int32_t t168 = 67;

    t168 = (x673|((x674<=x675)|x676));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	int64_t x678 = INT64_MIN;
	volatile int16_t x679 = INT16_MIN;
	uint32_t x680 = 227179U;
	uint32_t t169 = UINT32_MAX;

    t169 = (x677|((x678<=x679)|x680));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 2906;
	static int16_t x682 = -1;
	int8_t x683 = INT8_MIN;
	static int16_t x684 = INT16_MAX;

    t170 = (x681|((x682<=x683)|x684));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	volatile uint8_t x686 = 2U;
	uint32_t x687 = 3850158U;
	volatile int16_t x688 = INT16_MIN;
	static uint32_t t171 = UINT32_MAX;

    t171 = (x685|((x686<=x687)|x688));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	int16_t x690 = -6280;
	int8_t x691 = 12;

    t172 = (x689|((x690<=x691)|x692));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MIN;
	static int8_t x694 = 55;
	int16_t x695 = 200;
	int64_t x696 = -1LL;
	volatile int64_t t173 = -1002566LL;

    t173 = (x693|((x694<=x695)|x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 7U;
	volatile uint64_t x698 = 5116017323LLU;
	int8_t x699 = -1;
	uint8_t x700 = UINT8_MAX;
	static int32_t t174 = 50805;

    t174 = (x697|((x698<=x699)|x700));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = -3842;
	int16_t x702 = INT16_MAX;
	int8_t x703 = -1;
	static int64_t x704 = -1LL;
	volatile int64_t t175 = -2006387261212629368LL;

    t175 = (x701|((x702<=x703)|x704));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MIN;
	static uint16_t x707 = UINT16_MAX;
	volatile int64_t t176 = 12241307025926929LL;

    t176 = (x705|((x706<=x707)|x708));

    if (t176 != 1778483684668119LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	int32_t x710 = INT32_MIN;
	uint64_t x711 = 460825238LLU;
	volatile uint32_t x712 = UINT32_MAX;
	static volatile uint32_t t177 = UINT32_MAX;

    t177 = (x709|((x710<=x711)|x712));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -2;
	uint8_t x714 = 35U;
	int16_t x715 = INT16_MAX;
	int16_t x716 = INT16_MAX;
	int32_t t178 = 1137;

    t178 = (x713|((x714<=x715)|x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 3316U;
	int32_t x718 = -187965;
	volatile int16_t x719 = INT16_MIN;
	static int16_t x720 = INT16_MAX;
	static uint32_t t179 = 25440846U;

    t179 = (x717|((x718<=x719)|x720));

    if (t179 != 32767U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = UINT8_MAX;
	volatile uint32_t x722 = UINT32_MAX;
	static uint16_t x723 = 3U;
	int16_t x724 = INT16_MIN;
	int32_t t180 = 2619078;

    t180 = (x721|((x722<=x723)|x724));

    if (t180 != -32513) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = INT8_MAX;
	int64_t x727 = 649098684LL;
	int16_t x728 = INT16_MAX;
	volatile int32_t t181 = -62;

    t181 = (x725|((x726<=x727)|x728));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x729 = -1LL;
	static int64_t x731 = 1612442168245690LL;
	uint16_t x732 = 12333U;
	int64_t t182 = -1LL;

    t182 = (x729|((x730<=x731)|x732));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	int16_t x735 = -252;
	int16_t x736 = -1;
	volatile int32_t t183 = 39576;

    t183 = (x733|((x734<=x735)|x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 1U;
	uint16_t x738 = 29867U;
	volatile uint64_t x740 = 31LLU;
	static uint64_t t184 = 121260246LLU;

    t184 = (x737|((x738<=x739)|x740));

    if (t184 != 31LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	int32_t x743 = INT32_MIN;
	int32_t x744 = -1;
	volatile int32_t t185 = 1;

    t185 = (x741|((x742<=x743)|x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x747 = INT32_MAX;
	int32_t x748 = 743031;

    t186 = (x745|((x746<=x747)|x748));

    if (t186 != 743039) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = -135;
	int32_t x752 = -112838314;

    t187 = (x749|((x750<=x751)|x752));

    if (t187 != -112838313LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x753 = UINT32_MAX;
	int64_t x754 = INT64_MAX;
	static volatile uint8_t x755 = 3U;
	volatile int32_t x756 = INT32_MAX;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (x753|((x754<=x755)|x756));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 205U;
	static volatile uint32_t x759 = 7466U;
	int64_t x760 = -1LL;
	volatile int64_t t189 = 122357008LL;

    t189 = (x757|((x758<=x759)|x760));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	uint32_t x763 = UINT32_MAX;
	static int8_t x764 = 1;
	int32_t t190 = 106;

    t190 = (x761|((x762<=x763)|x764));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x768 = -1;
	int64_t t191 = 1643LL;

    t191 = (x765|((x766<=x767)|x768));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	uint8_t x770 = 19U;
	static int16_t x772 = INT16_MIN;
	static volatile int32_t t192 = -68898;

    t192 = (x769|((x770<=x771)|x772));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = INT16_MIN;
	int32_t x774 = 2049;
	static volatile int8_t x775 = INT8_MAX;
	int16_t x776 = 106;
	volatile int32_t t193 = 340892;

    t193 = (x773|((x774<=x775)|x776));

    if (t193 != -32662) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	int32_t x778 = -1;
	int32_t x779 = -427042411;
	static volatile uint16_t x780 = UINT16_MAX;
	int32_t t194 = 149597;

    t194 = (x777|((x778<=x779)|x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -8138620;
	static int32_t x783 = INT32_MIN;
	static volatile int32_t t195 = 1;

    t195 = (x781|((x782<=x783)|x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x786 = 0;
	int32_t x787 = -1;
	int32_t x788 = INT32_MAX;

    t196 = (x785|((x786<=x787)|x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = INT16_MIN;
	static volatile uint8_t x791 = 108U;
	static int64_t x792 = INT64_MIN;
	int64_t t197 = 73LL;

    t197 = (x789|((x790<=x791)|x792));

    if (t197 != -2147483647LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 197081329211227LLU;
	uint32_t x794 = 1U;
	int8_t x795 = INT8_MIN;
	volatile uint64_t x796 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = (x793|((x794<=x795)|x796));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint32_t x798 = 201U;
	int8_t x799 = -1;
	int64_t x800 = INT64_MIN;
	volatile int64_t t199 = -295LL;

    t199 = (x797|((x798<=x799)|x800));

    if (t199 != -127LL) { NG(); } else { ; }
	
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

