
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

int8_t x4 = -1;
int8_t x6 = -46;
volatile uint8_t x8 = 17U;
uint32_t x12 = 190675052U;
int64_t x16 = -1LL;
uint64_t x18 = 117469LLU;
int8_t x21 = INT8_MIN;
static uint32_t x30 = UINT32_MAX;
int16_t x31 = INT16_MIN;
volatile int32_t t7 = 69854;
volatile uint32_t x37 = 7945936U;
static int16_t x40 = -6;
volatile uint8_t x41 = 3U;
int16_t x44 = INT16_MAX;
int64_t x59 = INT64_MIN;
uint64_t x61 = 47LLU;
int16_t x70 = 380;
volatile int32_t x76 = -268010;
volatile int64_t t19 = -126LL;
int8_t x81 = INT8_MIN;
volatile int64_t t22 = 2061457111682415794LL;
uint32_t x93 = 267975289U;
uint32_t t24 = 76928929U;
static uint8_t x103 = 10U;
int32_t x105 = -47019930;
int8_t x108 = -1;
uint32_t x111 = 1267549U;
int32_t t27 = 3;
int32_t x114 = -5401322;
volatile uint16_t x119 = UINT16_MAX;
uint16_t x130 = 194U;
uint32_t x135 = UINT32_MAX;
static int32_t x138 = 6;
static int8_t x145 = INT8_MIN;
static int64_t x147 = INT64_MIN;
int32_t x151 = INT32_MAX;
int64_t x153 = INT64_MIN;
uint64_t x155 = 1952LLU;
static int16_t x156 = INT16_MIN;
volatile uint64_t x159 = 94282817816567LLU;
int8_t x165 = INT8_MIN;
int8_t x171 = INT8_MIN;
volatile uint32_t t42 = 18U;
int32_t x183 = 78767194;
uint32_t x184 = 89606721U;
int64_t x185 = INT64_MAX;
volatile int64_t x188 = -1LL;
uint16_t x193 = 148U;
static int64_t x195 = 2073601622945350LL;
volatile uint64_t x201 = UINT64_MAX;
int16_t x203 = 5195;
volatile int64_t x207 = INT64_MIN;
uint16_t x211 = UINT16_MAX;
volatile int32_t t53 = -853314055;
int32_t x220 = -1;
int32_t t56 = 1;
int32_t x233 = -1;
int64_t x235 = INT64_MIN;
static int64_t x238 = INT64_MIN;
int64_t x239 = INT64_MIN;
static int8_t x242 = -20;
int8_t x246 = 1;
volatile uint64_t x252 = 256406LLU;
uint16_t x253 = 6U;
int8_t x254 = INT8_MIN;
int16_t x261 = -1;
static int16_t x272 = 34;
volatile int32_t x274 = 21454066;
int8_t x276 = INT8_MIN;
int32_t x278 = 36884083;
uint64_t x285 = UINT64_MAX;
static volatile int16_t x290 = INT16_MIN;
static int32_t t72 = -5864881;
static uint8_t x293 = 122U;
int32_t t73 = 817;
int64_t t74 = 106LL;
int64_t x302 = INT64_MIN;
int64_t t75 = 124573LL;
volatile uint32_t x311 = UINT32_MAX;
int64_t x313 = -12967700663922LL;
int64_t x322 = INT64_MIN;
volatile int8_t x328 = INT8_MAX;
uint32_t x335 = 41U;
uint16_t x340 = 1U;
int32_t x345 = -164075001;
uint8_t x359 = 3U;
volatile int32_t t88 = 185;
uint16_t x374 = 1U;
static int64_t x385 = INT64_MIN;
int8_t x394 = INT8_MIN;
int16_t x396 = INT16_MAX;
uint16_t x402 = 1040U;
static volatile int64_t x403 = -1LL;
volatile int64_t x409 = -1LL;
int64_t t99 = -46588LL;
int64_t x439 = INT64_MAX;
volatile int64_t t106 = -2402785282LL;
int8_t x454 = -9;
int64_t x460 = -1LL;
int8_t x462 = INT8_MIN;
static int32_t x465 = INT32_MIN;
int32_t t114 = 5954;
static uint8_t x476 = UINT8_MAX;
volatile uint64_t t115 = 5529719647358LLU;
int16_t x477 = INT16_MIN;
int16_t x478 = INT16_MIN;
volatile int32_t t116 = -14682773;
int64_t x481 = INT64_MIN;
uint64_t x485 = 1280680802065LLU;
volatile uint32_t x496 = UINT32_MAX;
uint64_t t120 = 692333022981889662LLU;
int16_t x497 = -1;
int64_t x502 = INT64_MIN;
volatile int32_t t123 = -298033452;
static volatile int8_t x522 = INT8_MAX;
int8_t x524 = 0;
int32_t t127 = -316;
static int32_t t128 = 157692979;
uint8_t x529 = 13U;
volatile uint16_t x534 = 15U;
uint32_t x538 = UINT32_MAX;
int32_t x540 = INT32_MIN;
int16_t x544 = -3172;
volatile int64_t t132 = 21868LL;
static volatile int8_t x549 = INT8_MAX;
volatile int8_t x551 = 30;
uint32_t x556 = 46603U;
int64_t x562 = INT64_MIN;
static volatile int32_t t137 = 26084;
static int16_t x569 = INT16_MIN;
volatile int32_t t139 = 1;
uint16_t x577 = 51U;
static uint32_t x580 = 1985302U;
int32_t t142 = -31463;
int16_t x592 = INT16_MAX;
volatile uint8_t x593 = 1U;
uint64_t x596 = 1378942393668284428LLU;
volatile int32_t t144 = 595;
static int16_t x598 = INT16_MIN;
uint16_t x600 = 104U;
uint64_t x601 = 79LLU;
uint8_t x608 = UINT8_MAX;
volatile int8_t x626 = INT8_MIN;
uint8_t x632 = 7U;
volatile int32_t t153 = 2634478;
volatile int8_t x634 = INT8_MAX;
int16_t x636 = -6;
uint8_t x642 = 16U;
uint8_t x645 = UINT8_MAX;
volatile int64_t x648 = -1056LL;
int16_t x654 = INT16_MIN;
int64_t x656 = 5855280LL;
static int32_t x658 = INT32_MAX;
uint64_t x665 = 847LLU;
uint32_t x669 = 86607U;
int8_t x673 = -1;
volatile int16_t x686 = INT16_MIN;
int32_t t167 = -558;
volatile int8_t x689 = INT8_MAX;
static int8_t x690 = 7;
uint16_t x691 = UINT16_MAX;
int32_t t171 = -3673;
int32_t x711 = -2;
int64_t t173 = -8289686015544842LL;
static int8_t x713 = -1;
static int8_t x714 = 15;
static int16_t x715 = -1;
int32_t t174 = -1396;
int32_t t175 = -24422;
int8_t x726 = -1;
uint16_t x730 = 1U;
int16_t x740 = 1;
int8_t x744 = INT8_MIN;
int64_t x747 = INT64_MIN;
volatile int32_t t181 = -1803410;
int16_t x749 = -13389;
int32_t x750 = -10;
uint32_t x751 = 76610U;
static int16_t x755 = -1;
volatile int32_t t183 = -159880062;
static volatile int16_t x760 = INT16_MAX;
int32_t x761 = -1;
static int8_t x768 = 1;
int8_t x772 = INT8_MAX;
int32_t t187 = 53265310;
int64_t x777 = -545803351696809LL;
volatile int16_t x778 = -1;
int32_t x785 = -1;
int32_t x787 = INT32_MIN;
int32_t x799 = -1;
uint64_t x803 = UINT64_MAX;
uint64_t x806 = 2765LLU;
volatile int32_t x807 = INT32_MIN;
int16_t x816 = INT16_MIN;
volatile int32_t t198 = -155517418;
int32_t t199 = 1683;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile int64_t x2 = INT64_MAX;
	static volatile uint8_t x3 = 24U;
	static int32_t t0 = 7;

    t0 = (x1&((x2%x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	static volatile int64_t x7 = 511006473960290339LL;
	volatile int32_t t1 = 1;

    t1 = (x5&((x6%x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int16_t x10 = 7889;
	int32_t x11 = -1;
	volatile int32_t t2 = 355800;

    t2 = (x9&((x10%x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static uint32_t x14 = UINT32_MAX;
	int8_t x15 = -1;
	volatile int32_t t3 = 1;

    t3 = (x13&((x14%x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -3;
	int64_t x19 = -1LL;
	int64_t x20 = -4LL;
	volatile int32_t t4 = -14613953;

    t4 = (x17&((x18%x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 0;
	int16_t x23 = 4;
	uint16_t x24 = 19192U;
	static volatile int32_t t5 = 5191618;

    t5 = (x21&((x22%x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 77U;
	uint8_t x26 = 22U;
	uint16_t x27 = UINT16_MAX;
	static uint32_t x28 = 178180U;
	volatile uint32_t t6 = 424247010U;

    t6 = (x25&((x26%x27)==x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	static int16_t x32 = -9;

    t7 = (x29&((x30%x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint32_t x34 = 27785237U;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -1;

    t8 = (x33&((x34%x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	uint32_t x39 = 6549U;
	uint32_t t9 = 2U;

    t9 = (x37&((x38%x39)==x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x42 = -889;
	static volatile int32_t x43 = INT32_MAX;
	int32_t t10 = -89;

    t10 = (x41&((x42%x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static int8_t x46 = 1;
	uint16_t x47 = 61U;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -341318934;

    t11 = (x45&((x46%x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	volatile int8_t x50 = -1;
	int64_t x51 = -1LL;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 151;

    t12 = (x49&((x50%x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	volatile int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -8834;

    t13 = (x53&((x54%x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int16_t x58 = 4746;
	volatile int64_t x60 = -1LL;
	int32_t t14 = -5716;

    t14 = (x57&((x58%x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 798U;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = 14;
	volatile uint64_t t15 = 176103915LLU;

    t15 = (x61&((x62%x63)==x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	static int8_t x66 = INT8_MIN;
	static uint16_t x67 = 2U;
	int16_t x68 = 649;
	volatile int32_t t16 = 7257685;

    t16 = (x65&((x66%x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = -36;
	static uint64_t x71 = 293448676LLU;
	int64_t x72 = 5LL;
	volatile int32_t t17 = 11281031;

    t17 = (x69&((x70%x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	static uint8_t x74 = 22U;
	static int16_t x75 = -1;
	static volatile int64_t t18 = -30651LL;

    t18 = (x73&((x74%x75)==x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	static int32_t x78 = INT32_MIN;
	uint32_t x79 = 79289U;
	static uint16_t x80 = UINT16_MAX;

    t19 = (x77&((x78%x79)==x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MIN;
	static int16_t x83 = -1;
	int16_t x84 = -170;
	volatile int32_t t20 = 2;

    t20 = (x81&((x82%x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	static volatile int64_t x87 = INT64_MIN;
	static int32_t x88 = -1;
	int32_t t21 = 1381027;

    t21 = (x85&((x86%x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	uint16_t x90 = 21611U;
	static int32_t x91 = INT32_MAX;
	int16_t x92 = -1;

    t22 = (x89&((x90%x91)==x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x94 = 1U;
	int8_t x95 = -9;
	static int32_t x96 = INT32_MIN;
	volatile uint32_t t23 = 23794343U;

    t23 = (x93&((x94%x95)==x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 783180475U;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	int32_t x100 = 3011;

    t24 = (x97&((x98%x99)==x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -747;
	volatile uint16_t x102 = UINT16_MAX;
	int16_t x104 = -1;
	static int32_t t25 = -254;

    t25 = (x101&((x102%x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = UINT32_MAX;
	static int32_t x107 = INT32_MIN;
	int32_t t26 = -37;

    t26 = (x105&((x106%x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	uint32_t x110 = 45011127U;
	int64_t x112 = INT64_MIN;

    t27 = (x109&((x110%x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 0;
	volatile int16_t x115 = -1;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 1179;

    t28 = (x113&((x114%x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -599533LL;
	int64_t x118 = 535620LL;
	static uint32_t x120 = UINT32_MAX;
	int64_t t29 = 33268LL;

    t29 = (x117&((x118%x119)==x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	static int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MAX;
	int32_t t30 = -733;

    t30 = (x121&((x122%x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	int64_t x126 = INT64_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MAX;
	static int64_t t31 = -23665160729892LL;

    t31 = (x125&((x126%x127)==x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = UINT16_MAX;
	volatile int64_t x131 = 58288318191003LL;
	int32_t x132 = 1;
	static int32_t t32 = -243202857;

    t32 = (x129&((x130%x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 53LL;
	uint16_t x134 = 12503U;
	uint64_t x136 = UINT64_MAX;
	static int64_t t33 = -1686LL;

    t33 = (x133&((x134%x135)==x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	int8_t x139 = -2;
	uint64_t x140 = 0LLU;
	int32_t t34 = 413;

    t34 = (x137&((x138%x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -28;
	int64_t x142 = -2163499LL;
	int8_t x143 = 3;
	volatile int64_t x144 = -10287575LL;
	volatile int32_t t35 = -2662;

    t35 = (x141&((x142%x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = -1LL;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -455;

    t36 = (x145&((x146%x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	static int64_t x150 = 820056740323542LL;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 18;

    t37 = (x149&((x150%x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 2662721136036976LLU;
	volatile int64_t t38 = -85541LL;

    t38 = (x153&((x154%x155)==x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int16_t x158 = -15;
	static uint8_t x160 = 109U;
	int32_t t39 = -11191753;

    t39 = (x157&((x158%x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	static int16_t x163 = -1;
	int8_t x164 = -1;
	static volatile int32_t t40 = 710070081;

    t40 = (x161&((x162%x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	int16_t x167 = 2;
	static int64_t x168 = -61607857579LL;
	int32_t t41 = -11;

    t41 = (x165&((x166%x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 653U;
	int32_t x170 = INT32_MIN;
	int64_t x172 = INT64_MIN;

    t42 = (x169&((x170%x171)==x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	int32_t x176 = -1;
	static volatile int32_t t43 = 11;

    t43 = (x173&((x174%x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	static int64_t x178 = INT64_MIN;
	static int32_t x179 = INT32_MAX;
	int32_t x180 = -1;
	static int64_t t44 = 1248000639LL;

    t44 = (x177&((x178%x179)==x180));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 0;
	int32_t x182 = INT32_MAX;
	volatile int32_t t45 = 2605079;

    t45 = (x181&((x182%x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x186 = 66U;
	volatile uint8_t x187 = 46U;
	int64_t t46 = -23345531077999LL;

    t46 = (x185&((x186%x187)==x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 424U;
	int32_t t47 = 2061875;

    t47 = (x189&((x190%x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 62;

    t48 = (x193&((x194%x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	static volatile int32_t x198 = 466327;
	static volatile int8_t x199 = 15;
	int8_t x200 = -1;
	int64_t t49 = 163144447311LL;

    t49 = (x197&((x198%x199)==x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x202 = INT16_MAX;
	int16_t x204 = 0;
	volatile uint64_t t50 = 161364468503182397LLU;

    t50 = (x201&((x202%x203)==x204));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	volatile int64_t x206 = -1LL;
	int32_t x208 = -222235;
	int32_t t51 = -1370;

    t51 = (x205&((x206%x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	static int8_t x210 = INT8_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -1644;

    t52 = (x209&((x210%x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static volatile int8_t x214 = -2;
	volatile int8_t x215 = -7;
	volatile int32_t x216 = INT32_MAX;

    t53 = (x213&((x214%x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 0;
	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MAX;
	static int32_t t54 = 0;

    t54 = (x217&((x218%x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 78U;
	static uint16_t x223 = 17670U;
	volatile int16_t x224 = INT16_MAX;
	uint32_t t55 = 127U;

    t55 = (x221&((x222%x223)==x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	uint8_t x226 = 0U;
	int32_t x227 = -1;
	static volatile int64_t x228 = -1LL;

    t56 = (x225&((x226%x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	static uint8_t x232 = 1U;
	int32_t t57 = 3;

    t57 = (x229&((x230%x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = 1;
	volatile int8_t x236 = -1;
	int32_t t58 = -4102105;

    t58 = (x233&((x234%x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int32_t x240 = -1;
	int32_t t59 = 20022139;

    t59 = (x237&((x238%x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 5762217475LLU;
	int32_t x243 = INT32_MAX;
	int16_t x244 = 11674;
	volatile uint64_t t60 = 6826142055492751LLU;

    t60 = (x241&((x242%x243)==x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x247 = INT16_MAX;
	int8_t x248 = -1;
	volatile int32_t t61 = -27756973;

    t61 = (x245&((x246%x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint32_t x250 = 10149373U;
	uint8_t x251 = UINT8_MAX;
	volatile int64_t t62 = 24LL;

    t62 = (x249&((x250%x251)==x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x255 = INT8_MIN;
	int64_t x256 = 20929LL;
	volatile int32_t t63 = 31609;

    t63 = (x253&((x254%x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MAX;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	int64_t t64 = 8833317511398969LL;

    t64 = (x257&((x258%x259)==x260));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = 18480;

    t65 = (x261&((x262%x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	int32_t x266 = 80885529;
	volatile int32_t x267 = -5;
	int32_t x268 = 1169;
	volatile int32_t t66 = -339;

    t66 = (x265&((x266%x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	static int16_t x270 = INT16_MIN;
	int16_t x271 = -1;
	int32_t t67 = 366807;

    t67 = (x269&((x270%x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -129794233207079LL;
	volatile int8_t x275 = INT8_MAX;
	volatile int64_t t68 = 755094962314560LL;

    t68 = (x273&((x274%x275)==x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	uint64_t x279 = 18426271LLU;
	static volatile int8_t x280 = 23;
	static int32_t t69 = -1981;

    t69 = (x277&((x278%x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	static int8_t x282 = -1;
	volatile int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = 1U;
	static volatile int64_t t70 = -1545999LL;

    t70 = (x281&((x282%x283)==x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = 9;
	static uint8_t x287 = 8U;
	int64_t x288 = 84185407LL;
	static uint64_t t71 = 3362032444574903LLU;

    t71 = (x285&((x286%x287)==x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 1;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -39;

    t72 = (x289&((x290%x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x294 = -1;
	uint32_t x295 = 7440172U;
	volatile uint32_t x296 = 2767325U;

    t73 = (x293&((x294%x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MIN;
	uint8_t x298 = 23U;
	volatile uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MIN;

    t74 = (x297&((x298%x299)==x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MIN;
	volatile uint32_t x303 = UINT32_MAX;
	static int16_t x304 = INT16_MIN;

    t75 = (x301&((x302%x303)==x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	static uint16_t x306 = 1238U;
	int16_t x307 = -668;
	int16_t x308 = INT16_MIN;
	volatile uint32_t t76 = 2096735U;

    t76 = (x305&((x306%x307)==x308));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MAX;
	int16_t x310 = 1;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -218278444;

    t77 = (x309&((x310%x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x314 = -1LL;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t78 = -32321916LL;

    t78 = (x313&((x314%x315)==x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = 39;
	int32_t x323 = -9427;
	volatile uint16_t x324 = 2U;
	int32_t t79 = 579;

    t79 = (x321&((x322%x323)==x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x325 = 948675LLU;
	volatile int8_t x326 = -1;
	int16_t x327 = -3;
	volatile uint64_t t80 = 1233LLU;

    t80 = (x325&((x326%x327)==x328));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x329 = 153LLU;
	static uint32_t x330 = UINT32_MAX;
	int16_t x331 = -767;
	int8_t x332 = INT8_MIN;
	static uint64_t t81 = 2244779LLU;

    t81 = (x329&((x330%x331)==x332));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x333 = 312;
	volatile int8_t x334 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t82 = 12;

    t82 = (x333&((x334%x335)==x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = UINT64_MAX;
	static int16_t x338 = 2;
	volatile int64_t x339 = -1025172040559964LL;
	volatile uint64_t t83 = 651792934692LLU;

    t83 = (x337&((x338%x339)==x340));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = -1;
	static int64_t x342 = -246321537348550LL;
	static int8_t x343 = -12;
	uint32_t x344 = 11411201U;
	static volatile int32_t t84 = 689731;

    t84 = (x341&((x342%x343)==x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x346 = UINT64_MAX;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = 42;
	int32_t t85 = 30;

    t85 = (x345&((x346%x347)==x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = INT16_MAX;
	volatile uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = INT32_MAX;
	volatile int32_t t86 = -665815433;

    t86 = (x349&((x350%x351)==x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x353 = -1;
	int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MAX;
	uint16_t x356 = 0U;
	static int32_t t87 = -4701678;

    t87 = (x353&((x354%x355)==x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = -1979841;
	uint16_t x358 = 1350U;
	volatile int32_t x360 = INT32_MAX;

    t88 = (x357&((x358%x359)==x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x361 = 56U;
	static int32_t x362 = -35177272;
	volatile uint8_t x363 = UINT8_MAX;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t89 = -10466;

    t89 = (x361&((x362%x363)==x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = 0;
	int16_t x366 = INT16_MIN;
	static uint16_t x367 = 6U;
	int32_t x368 = INT32_MIN;
	int32_t t90 = -436;

    t90 = (x365&((x366%x367)==x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = 0U;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 18683U;
	int16_t x372 = INT16_MAX;
	int32_t t91 = -21;

    t91 = (x369&((x370%x371)==x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x373 = INT64_MIN;
	volatile uint16_t x375 = 8828U;
	int32_t x376 = -1;
	volatile int64_t t92 = 0LL;

    t92 = (x373&((x374%x375)==x376));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	uint32_t x380 = 370934U;
	volatile int32_t t93 = 723743651;

    t93 = (x377&((x378%x379)==x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = INT32_MIN;
	volatile uint16_t x382 = 127U;
	uint32_t x383 = 862876156U;
	static uint16_t x384 = 1158U;
	int32_t t94 = -369186162;

    t94 = (x381&((x382%x383)==x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	volatile int32_t x388 = -1;
	int64_t t95 = -11156247LL;

    t95 = (x385&((x386%x387)==x388));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = -1;
	int64_t x395 = -4488989419370340LL;
	volatile int32_t t96 = -15703;

    t96 = (x393&((x394%x395)==x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x401 = 3U;
	int16_t x404 = 17;
	static int32_t t97 = 58646096;

    t97 = (x401&((x402%x403)==x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x405 = 175333LLU;
	volatile uint8_t x406 = 59U;
	int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;
	static uint64_t t98 = 9136309365343302805LLU;

    t98 = (x405&((x406%x407)==x408));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x410 = 48U;
	uint16_t x411 = 19752U;
	uint16_t x412 = UINT16_MAX;

    t99 = (x409&((x410%x411)==x412));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = -1;
	uint32_t x414 = 103600942U;
	int64_t x415 = INT64_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t100 = 19;

    t100 = (x413&((x414%x415)==x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x417 = 6534;
	int8_t x418 = -1;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = -6;
	volatile int32_t t101 = -4;

    t101 = (x417&((x418%x419)==x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = 8816125;
	uint32_t x422 = 460708626U;
	static volatile int32_t x423 = INT32_MIN;
	static int64_t x424 = -1LL;
	int32_t t102 = -27112463;

    t102 = (x421&((x422%x423)==x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = -1;
	volatile uint64_t x426 = 78LLU;
	int32_t x427 = -1;
	volatile uint8_t x428 = 0U;
	volatile int32_t t103 = -89;

    t103 = (x425&((x426%x427)==x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x429 = INT64_MAX;
	static int16_t x430 = INT16_MAX;
	int16_t x431 = INT16_MAX;
	int16_t x432 = -1;
	int64_t t104 = -3405LL;

    t104 = (x429&((x430%x431)==x432));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = -1;
	volatile int16_t x434 = -33;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t x436 = INT32_MIN;
	int32_t t105 = -436377141;

    t105 = (x433&((x434%x435)==x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	int64_t x440 = INT64_MIN;

    t106 = (x437&((x438%x439)==x440));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = -1LL;
	int32_t x442 = 1694695;
	int16_t x443 = 63;
	static uint16_t x444 = 29226U;
	volatile int64_t t107 = -1LL;

    t107 = (x441&((x442%x443)==x444));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x445 = 80;
	uint64_t x446 = UINT64_MAX;
	static int64_t x447 = -1LL;
	int32_t x448 = -2;
	static int32_t t108 = -27;

    t108 = (x445&((x446%x447)==x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x449 = 9110133LLU;
	int64_t x450 = -1LL;
	int32_t x451 = -986261;
	static uint64_t x452 = 231675738745559LLU;
	uint64_t t109 = 11798638LLU;

    t109 = (x449&((x450%x451)==x452));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = -41;
	int16_t x455 = -3;
	volatile int32_t x456 = -911;
	int32_t t110 = -241630;

    t110 = (x453&((x454%x455)==x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x457 = 118366862LLU;
	int32_t x458 = INT32_MIN;
	uint16_t x459 = UINT16_MAX;
	uint64_t t111 = 31LLU;

    t111 = (x457&((x458%x459)==x460));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x461 = -517594452238LL;
	volatile int16_t x463 = INT16_MIN;
	static int16_t x464 = -7;
	int64_t t112 = 825141188945223LL;

    t112 = (x461&((x462%x463)==x464));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x466 = -4;
	volatile int32_t x467 = 5956;
	static volatile uint8_t x468 = 5U;
	int32_t t113 = -733;

    t113 = (x465&((x466%x467)==x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x469 = -1;
	int32_t x470 = -1;
	int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;

    t114 = (x469&((x470%x471)==x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x473 = UINT64_MAX;
	int64_t x474 = INT64_MAX;
	uint32_t x475 = 438U;

    t115 = (x473&((x474%x475)==x476));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x479 = INT16_MAX;
	int8_t x480 = INT8_MIN;

    t116 = (x477&((x478%x479)==x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x482 = 881;
	static int32_t x483 = -64686;
	int16_t x484 = 13107;
	int64_t t117 = -194485246826636LL;

    t117 = (x481&((x482%x483)==x484));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x486 = INT8_MAX;
	int32_t x487 = -1;
	int16_t x488 = -3628;
	uint64_t t118 = 14599LLU;

    t118 = (x485&((x486%x487)==x488));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MAX;
	int8_t x490 = 1;
	int8_t x491 = -1;
	int64_t x492 = -1LL;
	int64_t t119 = -512896226284576758LL;

    t119 = (x489&((x490%x491)==x492));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x493 = 42973LLU;
	int16_t x494 = -3750;
	int8_t x495 = INT8_MAX;

    t120 = (x493&((x494%x495)==x496));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x498 = 4U;
	int16_t x499 = 10884;
	int32_t x500 = INT32_MAX;
	int32_t t121 = 282;

    t121 = (x497&((x498%x499)==x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x501 = 64772085U;
	static uint64_t x503 = 24093436LLU;
	uint8_t x504 = 15U;
	uint32_t t122 = 133414U;

    t122 = (x501&((x502%x503)==x504));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = 1;
	int32_t x506 = 598223;
	volatile int64_t x507 = INT64_MIN;
	volatile int64_t x508 = -1LL;

    t123 = (x505&((x506%x507)==x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MAX;
	static int8_t x510 = INT8_MIN;
	int32_t x511 = INT32_MAX;
	int16_t x512 = -17;
	volatile int64_t t124 = -59LL;

    t124 = (x509&((x510%x511)==x512));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile uint32_t x514 = 736U;
	int32_t x515 = INT32_MIN;
	uint16_t x516 = 126U;
	static volatile int32_t t125 = 12469;

    t125 = (x513&((x514%x515)==x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x517 = -3;
	static volatile int16_t x518 = INT16_MIN;
	int64_t x519 = -1LL;
	volatile uint16_t x520 = 2630U;
	int32_t t126 = 4;

    t126 = (x517&((x518%x519)==x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x523 = 99182705733515LLU;

    t127 = (x521&((x522%x523)==x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x525 = 7U;
	uint32_t x526 = 203200U;
	int16_t x527 = 1018;
	uint8_t x528 = 0U;

    t128 = (x525&((x526%x527)==x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x530 = -1;
	int64_t x531 = INT64_MAX;
	volatile uint64_t x532 = UINT64_MAX;
	int32_t t129 = 854;

    t129 = (x529&((x530%x531)==x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x533 = 11563LLU;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 27U;
	static volatile uint64_t t130 = 3924LLU;

    t130 = (x533&((x534%x535)==x536));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x537 = INT64_MAX;
	static int8_t x539 = INT8_MIN;
	volatile int64_t t131 = 247336118786563176LL;

    t131 = (x537&((x538%x539)==x540));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -246LL;
	volatile int8_t x542 = INT8_MAX;
	int64_t x543 = -1LL;

    t132 = (x541&((x542%x543)==x544));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x550 = 8688515914776LLU;
	static int32_t x552 = -1267;
	static volatile int32_t t133 = -1444929;

    t133 = (x549&((x550%x551)==x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = 863849286554893935LLU;
	int64_t x554 = -1484LL;
	volatile int8_t x555 = 1;
	static volatile uint64_t t134 = 380092LLU;

    t134 = (x553&((x554%x555)==x556));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = -1;
	int8_t x558 = 1;
	int8_t x559 = 5;
	static int64_t x560 = 13795LL;
	volatile int32_t t135 = -260034;

    t135 = (x557&((x558%x559)==x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = INT16_MIN;
	volatile int64_t x563 = -1LL;
	int32_t x564 = INT32_MIN;
	int32_t t136 = -20288345;

    t136 = (x561&((x562%x563)==x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x565 = -205;
	int8_t x566 = INT8_MIN;
	volatile uint64_t x567 = UINT64_MAX;
	static uint8_t x568 = 3U;

    t137 = (x565&((x566%x567)==x568));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x570 = UINT16_MAX;
	static int64_t x571 = INT64_MIN;
	uint8_t x572 = 3U;
	int32_t t138 = 898;

    t138 = (x569&((x570%x571)==x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = 1015;
	int32_t x574 = INT32_MIN;
	int16_t x575 = 1;
	int32_t x576 = 64971;

    t139 = (x573&((x574%x575)==x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x578 = -123;
	int16_t x579 = INT16_MAX;
	volatile int32_t t140 = 94;

    t140 = (x577&((x578%x579)==x580));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x581 = -1;
	volatile uint32_t x582 = 28U;
	int32_t x583 = INT32_MIN;
	int16_t x584 = -1;
	volatile int32_t t141 = -1159;

    t141 = (x581&((x582%x583)==x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x585 = INT8_MIN;
	volatile int8_t x586 = 0;
	int16_t x587 = INT16_MIN;
	uint8_t x588 = 1U;

    t142 = (x585&((x586%x587)==x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x589 = 1532498035LLU;
	static uint64_t x590 = UINT64_MAX;
	uint32_t x591 = UINT32_MAX;
	volatile uint64_t t143 = 29545347LLU;

    t143 = (x589&((x590%x591)==x592));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x594 = -1;
	uint64_t x595 = 5047908636046670LLU;

    t144 = (x593&((x594%x595)==x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MIN;
	int8_t x599 = -18;
	volatile int64_t t145 = 1443393489LL;

    t145 = (x597&((x598%x599)==x600));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x602 = -1;
	uint8_t x603 = 2U;
	int64_t x604 = INT64_MAX;
	static volatile uint64_t t146 = 91147949LLU;

    t146 = (x601&((x602%x603)==x604));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x605 = -63;
	static uint16_t x606 = UINT16_MAX;
	int16_t x607 = INT16_MAX;
	int32_t t147 = -3118;

    t147 = (x605&((x606%x607)==x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = INT64_MIN;
	volatile int32_t x610 = INT32_MAX;
	volatile int32_t x611 = INT32_MAX;
	uint32_t x612 = 568299369U;
	static volatile int64_t t148 = -19544212538LL;

    t148 = (x609&((x610%x611)==x612));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = UINT16_MAX;
	volatile int16_t x614 = -1;
	int32_t x615 = 944895;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t149 = -18;

    t149 = (x613&((x614%x615)==x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x617 = 141U;
	static uint64_t x618 = UINT64_MAX;
	int8_t x619 = INT8_MIN;
	int16_t x620 = -45;
	int32_t t150 = -2977703;

    t150 = (x617&((x618%x619)==x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -1549LL;
	int16_t x622 = INT16_MIN;
	static volatile uint64_t x623 = 1012587156077678643LLU;
	volatile int64_t x624 = INT64_MIN;
	int64_t t151 = -29911005784980LL;

    t151 = (x621&((x622%x623)==x624));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x625 = 0U;
	uint32_t x627 = UINT32_MAX;
	static int8_t x628 = INT8_MIN;
	int32_t t152 = -2368;

    t152 = (x625&((x626%x627)==x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = 1;
	uint64_t x630 = 5LLU;
	volatile uint32_t x631 = 34867506U;

    t153 = (x629&((x630%x631)==x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x633 = -2LL;
	int64_t x635 = INT64_MIN;
	volatile int64_t t154 = 167418624LL;

    t154 = (x633&((x634%x635)==x636));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x637 = UINT16_MAX;
	static int32_t x638 = -401;
	uint16_t x639 = 30060U;
	volatile uint8_t x640 = 2U;
	volatile int32_t t155 = 31027;

    t155 = (x637&((x638%x639)==x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x641 = -52LL;
	int32_t x643 = -3022;
	int32_t x644 = 2;
	int64_t t156 = 390LL;

    t156 = (x641&((x642%x643)==x644));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x646 = 488U;
	int8_t x647 = -1;
	static int32_t t157 = 1152;

    t157 = (x645&((x646%x647)==x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = -1LL;
	static uint16_t x650 = 7887U;
	static int64_t x651 = INT64_MAX;
	int8_t x652 = INT8_MIN;
	int64_t t158 = 1026LL;

    t158 = (x649&((x650%x651)==x652));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x653 = 19U;
	uint16_t x655 = UINT16_MAX;
	int32_t t159 = 1276827;

    t159 = (x653&((x654%x655)==x656));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x657 = -10;
	int16_t x659 = 10;
	volatile uint64_t x660 = 3311288797462885587LLU;
	int32_t t160 = 388030996;

    t160 = (x657&((x658%x659)==x660));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = -1LL;
	int64_t x663 = INT64_MIN;
	volatile uint16_t x664 = 13004U;
	int64_t t161 = 8137922652166LL;

    t161 = (x661&((x662%x663)==x664));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x666 = INT16_MAX;
	int8_t x667 = INT8_MIN;
	int64_t x668 = INT64_MAX;
	uint64_t t162 = 1LLU;

    t162 = (x665&((x666%x667)==x668));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x670 = 1;
	int32_t x671 = 1623386;
	uint64_t x672 = UINT64_MAX;
	volatile uint32_t t163 = 1U;

    t163 = (x669&((x670%x671)==x672));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x674 = INT8_MIN;
	uint8_t x675 = UINT8_MAX;
	volatile int32_t x676 = INT32_MIN;
	static int32_t t164 = 6;

    t164 = (x673&((x674%x675)==x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x677 = 376U;
	int16_t x678 = -2;
	int16_t x679 = -1;
	volatile int16_t x680 = -1;
	volatile int32_t t165 = -4531;

    t165 = (x677&((x678%x679)==x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x681 = INT16_MAX;
	int32_t x682 = INT32_MIN;
	int32_t x683 = -1;
	volatile int32_t x684 = 0;
	static volatile int32_t t166 = -24;

    t166 = (x681&((x682%x683)==x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = INT16_MIN;
	uint32_t x687 = 1376680U;
	volatile int32_t x688 = INT32_MIN;

    t167 = (x685&((x686%x687)==x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x692 = 359U;
	volatile int32_t t168 = -132050721;

    t168 = (x689&((x690%x691)==x692));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x693 = 0;
	static int64_t x694 = INT64_MIN;
	static int32_t x695 = 1021856329;
	int64_t x696 = INT64_MIN;
	int32_t t169 = 3914;

    t169 = (x693&((x694%x695)==x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x697 = INT8_MIN;
	uint16_t x698 = UINT16_MAX;
	volatile int16_t x699 = 15085;
	volatile int64_t x700 = -1513190466540045LL;
	volatile int32_t t170 = 164;

    t170 = (x697&((x698%x699)==x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x701 = INT16_MIN;
	volatile int16_t x702 = -85;
	volatile int8_t x703 = 60;
	volatile uint32_t x704 = 72U;

    t171 = (x701&((x702%x703)==x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x705 = INT16_MIN;
	static volatile int32_t x706 = INT32_MAX;
	int64_t x707 = INT64_MAX;
	volatile int16_t x708 = INT16_MIN;
	static int32_t t172 = 5;

    t172 = (x705&((x706%x707)==x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x709 = -1LL;
	int64_t x710 = -3LL;
	volatile int16_t x712 = INT16_MIN;

    t173 = (x709&((x710%x711)==x712));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x716 = 2689;

    t174 = (x713&((x714%x715)==x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = -1;
	int32_t x718 = -1;
	volatile uint64_t x719 = UINT64_MAX;
	int32_t x720 = 3031;

    t175 = (x717&((x718%x719)==x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x725 = 91U;
	uint64_t x727 = UINT64_MAX;
	static uint32_t x728 = 218460U;
	volatile int32_t t176 = -1478925;

    t176 = (x725&((x726%x727)==x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = -1;
	int16_t x731 = -1;
	static int16_t x732 = -19;
	static int32_t t177 = 0;

    t177 = (x729&((x730%x731)==x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x733 = INT8_MAX;
	int64_t x734 = INT64_MIN;
	int64_t x735 = INT64_MIN;
	uint64_t x736 = UINT64_MAX;
	int32_t t178 = 75;

    t178 = (x733&((x734%x735)==x736));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x737 = -1LL;
	static int32_t x738 = -214421;
	volatile int64_t x739 = INT64_MIN;
	static int64_t t179 = 188671790710LL;

    t179 = (x737&((x738%x739)==x740));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = -965614433714LL;
	int16_t x742 = -1;
	int16_t x743 = INT16_MIN;
	volatile int64_t t180 = -19826156542272981LL;

    t180 = (x741&((x742%x743)==x744));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x745 = 23U;
	int8_t x746 = INT8_MIN;
	int32_t x748 = INT32_MIN;

    t181 = (x745&((x746%x747)==x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x752 = 7755;
	int32_t t182 = -423390;

    t182 = (x749&((x750%x751)==x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x753 = 3;
	int16_t x754 = INT16_MIN;
	int16_t x756 = -23;

    t183 = (x753&((x754%x755)==x756));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x757 = 85U;
	static int8_t x758 = 4;
	volatile uint8_t x759 = 2U;
	volatile int32_t t184 = -713;

    t184 = (x757&((x758%x759)==x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x762 = UINT64_MAX;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	volatile int32_t t185 = -27293550;

    t185 = (x761&((x762%x763)==x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x765 = -1LL;
	volatile int8_t x766 = INT8_MAX;
	volatile uint8_t x767 = 1U;
	int64_t t186 = -7LL;

    t186 = (x765&((x766%x767)==x768));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x769 = -1;
	static int64_t x770 = 2227400802LL;
	static uint32_t x771 = UINT32_MAX;

    t187 = (x769&((x770%x771)==x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x773 = 100U;
	uint8_t x774 = 18U;
	volatile uint16_t x775 = UINT16_MAX;
	uint8_t x776 = UINT8_MAX;
	int32_t t188 = 202625;

    t188 = (x773&((x774%x775)==x776));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x779 = INT16_MAX;
	static uint8_t x780 = 0U;
	volatile int64_t t189 = 1144566408073694LL;

    t189 = (x777&((x778%x779)==x780));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x781 = -1LL;
	int64_t x782 = INT64_MIN;
	int64_t x783 = INT64_MIN;
	static int8_t x784 = INT8_MAX;
	static volatile int64_t t190 = 4328610517724734LL;

    t190 = (x781&((x782%x783)==x784));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x786 = -2;
	static int64_t x788 = -1LL;
	int32_t t191 = 2;

    t191 = (x785&((x786%x787)==x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = -158878;
	int32_t x790 = INT32_MIN;
	int64_t x791 = 891624821363LL;
	volatile int16_t x792 = INT16_MIN;
	volatile int32_t t192 = -2;

    t192 = (x789&((x790%x791)==x792));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x793 = -3659;
	int32_t x794 = INT32_MIN;
	int8_t x795 = 1;
	volatile int64_t x796 = INT64_MIN;
	volatile int32_t t193 = 1615;

    t193 = (x793&((x794%x795)==x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x797 = INT32_MIN;
	static int16_t x798 = INT16_MIN;
	uint16_t x800 = 335U;
	static volatile int32_t t194 = 4981;

    t194 = (x797&((x798%x799)==x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = INT16_MIN;
	uint32_t x804 = 20387857U;
	int32_t t195 = -11;

    t195 = (x801&((x802%x803)==x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x805 = INT8_MIN;
	int64_t x808 = INT64_MIN;
	int32_t t196 = -246;

    t196 = (x805&((x806%x807)==x808));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = -950359;
	int8_t x810 = -1;
	volatile int8_t x811 = INT8_MIN;
	uint16_t x812 = UINT16_MAX;
	static volatile int32_t t197 = -195;

    t197 = (x809&((x810%x811)==x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x813 = 1;
	uint8_t x814 = 0U;
	volatile uint8_t x815 = UINT8_MAX;

    t198 = (x813&((x814%x815)==x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x817 = 320U;
	uint16_t x818 = 932U;
	static uint64_t x819 = 2924259583119LLU;
	uint64_t x820 = 23107568104138LLU;

    t199 = (x817&((x818%x819)==x820));

    if (t199 != 0) { NG(); } else { ; }
	
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

