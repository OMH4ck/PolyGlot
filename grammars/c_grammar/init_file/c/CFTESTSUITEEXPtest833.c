
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

static int64_t x2 = -262504333LL;
int8_t x3 = -56;
static int8_t x10 = -1;
uint16_t x16 = 1U;
int16_t x32 = INT16_MIN;
uint16_t x33 = 130U;
int16_t x37 = INT16_MIN;
int16_t x42 = 149;
volatile int32_t t11 = -6600;
volatile int32_t x64 = -1;
int32_t x68 = -5063;
volatile int16_t x69 = -1;
volatile int8_t x70 = INT8_MAX;
int32_t t17 = -3107;
int16_t x73 = INT16_MIN;
volatile uint64_t x74 = 24599825LLU;
uint16_t x79 = 730U;
volatile int32_t t19 = 7255;
int16_t x81 = INT16_MIN;
uint32_t x86 = 169U;
int32_t t23 = 3600;
volatile int32_t x97 = -1;
int32_t x101 = INT32_MIN;
volatile int16_t x105 = INT16_MIN;
uint16_t x112 = UINT16_MAX;
int32_t t27 = 737;
uint32_t x117 = UINT32_MAX;
int16_t x118 = 15898;
uint32_t x121 = 208456796U;
uint64_t x128 = UINT64_MAX;
int64_t x138 = INT64_MIN;
volatile int32_t t32 = 10576;
static int32_t t33 = -6018743;
uint32_t x147 = 944933U;
static volatile int16_t x152 = INT16_MIN;
int32_t t35 = -1;
uint32_t x159 = 209821619U;
static volatile int32_t t38 = 7477059;
int16_t x166 = INT16_MIN;
volatile int64_t x168 = INT64_MIN;
int32_t x171 = 2465582;
volatile int16_t x184 = INT16_MIN;
int64_t x188 = INT64_MAX;
int8_t x189 = -5;
int8_t x191 = INT8_MAX;
volatile int32_t t45 = 618105;
uint32_t x194 = 578U;
volatile uint8_t x214 = 0U;
int64_t x215 = 4275142577388LL;
int32_t x216 = -77623;
uint8_t x225 = UINT8_MAX;
volatile uint8_t x230 = 7U;
uint64_t x236 = 423080589LLU;
static uint16_t x250 = 38U;
int8_t x258 = INT8_MIN;
int32_t t60 = -352;
static int32_t x265 = -1;
int64_t x266 = INT64_MIN;
static volatile int8_t x269 = INT8_MIN;
int32_t t64 = 10055334;
volatile uint16_t x278 = 1286U;
int32_t x280 = -664214;
int32_t x281 = 203145;
int64_t x291 = 44136493975994610LL;
uint16_t x292 = 344U;
uint32_t x296 = 433U;
uint16_t x297 = UINT16_MAX;
static int64_t x299 = INT64_MIN;
uint64_t x306 = 4279LLU;
int8_t x315 = INT8_MAX;
volatile uint8_t x328 = UINT8_MAX;
volatile uint32_t x338 = 22304U;
volatile int32_t t81 = -695399;
int16_t x350 = 7;
static int32_t t82 = 983;
int64_t x354 = INT64_MIN;
uint64_t x356 = 11241686182158LLU;
uint32_t x362 = UINT32_MAX;
static volatile int32_t t84 = -220250;
volatile uint32_t x369 = UINT32_MAX;
int64_t x371 = INT64_MIN;
int16_t x372 = 5;
volatile int32_t x375 = -63246;
uint8_t x379 = 2U;
volatile int32_t t88 = -21197;
static int32_t x384 = INT32_MIN;
int64_t x388 = -55602496LL;
volatile int32_t t91 = 3786;
int8_t x393 = INT8_MIN;
int64_t x408 = -481929LL;
uint64_t x411 = UINT64_MAX;
static int32_t x414 = -1;
int8_t x417 = INT8_MAX;
static uint32_t x418 = 4462U;
uint64_t x423 = 1649926LLU;
uint32_t x431 = 403U;
int32_t t101 = -22595;
uint32_t x437 = UINT32_MAX;
uint64_t x443 = 35986548932946483LLU;
volatile uint16_t x450 = UINT16_MAX;
volatile uint8_t x460 = UINT8_MAX;
volatile int16_t x468 = INT16_MAX;
uint16_t x474 = 980U;
static int64_t x482 = INT64_MAX;
int32_t t114 = 117783;
int64_t x495 = -1LL;
volatile int32_t t116 = -11671648;
uint16_t x499 = 1U;
volatile int32_t t120 = 6787;
static int16_t x517 = 10;
int16_t x518 = INT16_MIN;
int32_t x525 = 99760438;
uint8_t x526 = 0U;
volatile int32_t t123 = -288801924;
uint32_t x530 = 6174U;
volatile int16_t x538 = 12833;
static int64_t x539 = -110462294766570LL;
static int32_t t127 = -23126248;
static uint64_t x545 = UINT64_MAX;
static int64_t x547 = -1LL;
int16_t x549 = INT16_MAX;
uint32_t x552 = 7U;
int16_t x554 = 16315;
static uint16_t x566 = 80U;
int32_t t133 = 203;
static int64_t x569 = INT64_MAX;
static int16_t x574 = INT16_MAX;
volatile int32_t t135 = 6508106;
volatile uint16_t x580 = UINT16_MAX;
static uint32_t x587 = 30606U;
int8_t x590 = -1;
int32_t x593 = INT32_MAX;
int32_t x594 = 6361;
uint16_t x597 = 1350U;
volatile uint16_t x601 = 370U;
int8_t x604 = -1;
volatile int64_t x616 = -1LL;
volatile int32_t t144 = -20478;
uint16_t x628 = 16735U;
static uint8_t x633 = 0U;
volatile int32_t t147 = 98098;
int64_t x637 = INT64_MIN;
volatile int32_t t148 = -8;
static volatile int32_t x642 = 0;
uint32_t x658 = 0U;
int64_t x659 = -1LL;
int32_t t152 = -50928166;
int32_t t153 = 114037;
volatile int8_t x665 = INT8_MIN;
volatile int16_t x679 = 3;
int16_t x680 = -1;
volatile int32_t x682 = INT32_MAX;
uint8_t x695 = UINT8_MAX;
volatile int32_t t163 = 0;
volatile int8_t x705 = -3;
int8_t x708 = INT8_MIN;
static volatile uint64_t x714 = UINT64_MAX;
int8_t x724 = INT8_MAX;
static int64_t x726 = -1LL;
static int32_t x733 = -28;
int32_t t171 = -1;
static int64_t x737 = 96254779088008790LL;
int64_t x741 = -1LL;
static int64_t x748 = INT64_MIN;
int64_t x750 = INT64_MAX;
int16_t x752 = -4102;
int8_t x754 = -1;
int32_t t176 = -172164;
int32_t x762 = -1;
volatile int64_t x767 = INT64_MAX;
int16_t x769 = -7802;
static uint16_t x770 = 95U;
uint16_t x771 = 31U;
static volatile int32_t x772 = INT32_MIN;
int32_t x773 = INT32_MIN;
static int64_t x780 = INT64_MIN;
int32_t t183 = -3232;
static uint64_t x794 = 502478LLU;
static uint64_t x797 = UINT64_MAX;
volatile uint32_t x807 = 633343U;
int64_t x808 = INT64_MIN;
volatile int32_t t187 = 21420;
static int64_t x812 = INT64_MAX;
volatile int8_t x813 = -1;
uint32_t x817 = UINT32_MAX;
int64_t x825 = -1LL;
int8_t x826 = INT8_MAX;
uint8_t x832 = UINT8_MAX;
volatile int64_t x837 = INT64_MIN;
volatile int32_t t194 = 148377;
volatile int32_t t195 = 1845133;
int16_t x849 = INT16_MIN;
static int16_t x856 = -1;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x4 = -1LL;
	int32_t t0 = 66;

    t0 = (x1!=((x2%x3)/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static int8_t x6 = -6;
	static uint8_t x7 = 49U;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = 56;

    t1 = (x5!=((x6%x7)/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 59789U;
	int64_t x11 = -903220933186LL;
	static uint16_t x12 = 1259U;
	int32_t t2 = 1615311;

    t2 = (x9!=((x10%x11)/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = INT16_MIN;
	int32_t t3 = 996;

    t3 = (x13!=((x14%x15)/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -12;
	int16_t x18 = -1;
	int8_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 316011;

    t4 = (x17!=((x18%x19)/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -1662658;

    t5 = (x21!=((x22%x23)/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = 13987;

    t6 = (x25!=((x26%x27)/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MAX;
	uint8_t x30 = 73U;
	int8_t x31 = INT8_MIN;
	static int32_t t7 = 42;

    t7 = (x29!=((x30%x31)/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -33;
	static volatile int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	static int32_t t8 = 319553674;

    t8 = (x33!=((x34%x35)/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 1;
	int16_t x39 = -1;
	int16_t x40 = -1;
	volatile int32_t t9 = 61;

    t9 = (x37!=((x38%x39)/x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 61;
	int64_t x43 = 182707813LL;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -28721655;

    t10 = (x41!=((x42%x43)/x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MAX;
	uint64_t x46 = UINT64_MAX;
	uint8_t x47 = 3U;
	int64_t x48 = INT64_MIN;

    t11 = (x45!=((x46%x47)/x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint8_t x50 = 2U;
	static int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 0;

    t12 = (x49!=((x50%x51)/x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 0U;
	uint64_t x54 = UINT64_MAX;
	int32_t x55 = -1;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t13 = -16032019;

    t13 = (x53!=((x54%x55)/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	volatile uint32_t x59 = 1231U;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = -92121104;

    t14 = (x57!=((x58%x59)/x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int16_t x62 = -29;
	uint16_t x63 = UINT16_MAX;
	static volatile int32_t t15 = -76685;

    t15 = (x61!=((x62%x63)/x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	volatile int16_t x67 = -1;
	volatile int32_t t16 = -21;

    t16 = (x65!=((x66%x67)/x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x71 = 42U;
	static volatile int8_t x72 = 43;

    t17 = (x69!=((x70%x71)/x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x75 = INT32_MAX;
	volatile int64_t x76 = -25012147368179959LL;
	int32_t t18 = 8177458;

    t18 = (x73!=((x74%x75)/x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 37U;
	uint16_t x78 = 38U;
	int64_t x80 = 2508538LL;

    t19 = (x77!=((x78%x79)/x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x82 = INT32_MAX;
	uint16_t x83 = 14002U;
	int16_t x84 = -15480;
	int32_t t20 = -1171;

    t20 = (x81!=((x82%x83)/x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = -1;
	int32_t x87 = -15;
	int64_t x88 = -1LL;
	int32_t t21 = 434617348;

    t21 = (x85!=((x86%x87)/x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MAX;
	static uint16_t x90 = 3798U;
	static int8_t x91 = INT8_MAX;
	uint16_t x92 = 1U;
	int32_t t22 = 73641133;

    t22 = (x89!=((x90%x91)/x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 315;
	int32_t x94 = INT32_MIN;
	static volatile int8_t x95 = -1;
	int16_t x96 = INT16_MAX;

    t23 = (x93!=((x94%x95)/x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	int16_t x99 = -2;
	int8_t x100 = 5;
	volatile int32_t t24 = -28578349;

    t24 = (x97!=((x98%x99)/x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MIN;
	uint32_t x103 = UINT32_MAX;
	static uint64_t x104 = 27362LLU;
	int32_t t25 = -27600348;

    t25 = (x101!=((x102%x103)/x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = -140;
	static int64_t x107 = 172697249LL;
	volatile int32_t x108 = 110869;
	volatile int32_t t26 = 130502;

    t26 = (x105!=((x106%x107)/x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 767424347U;
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;

    t27 = (x109!=((x110%x111)/x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x119 = INT64_MIN;
	volatile int64_t x120 = INT64_MIN;
	volatile int32_t t28 = 12;

    t28 = (x117!=((x118%x119)/x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = INT16_MIN;
	uint32_t x123 = 1U;
	volatile int16_t x124 = -29;
	volatile int32_t t29 = 890250;

    t29 = (x121!=((x122%x123)/x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	uint64_t x127 = UINT64_MAX;
	static volatile int32_t t30 = -109812960;

    t30 = (x125!=((x126%x127)/x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = -1LL;
	static uint64_t x131 = 258212LLU;
	int32_t x132 = INT32_MIN;
	int32_t t31 = 229;

    t31 = (x129!=((x130%x131)/x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MIN;
	uint64_t x139 = 33509381318068LLU;
	uint8_t x140 = UINT8_MAX;

    t32 = (x137!=((x138%x139)/x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MIN;
	volatile uint32_t x142 = 139533758U;
	volatile int16_t x143 = 343;
	static uint64_t x144 = 3539845184574078LLU;

    t33 = (x141!=((x142%x143)/x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x145 = UINT16_MAX;
	uint8_t x146 = 47U;
	int32_t x148 = -1;
	int32_t t34 = -6;

    t34 = (x145!=((x146%x147)/x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MAX;

    t35 = (x149!=((x150%x151)/x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = -1;
	uint64_t x154 = 49493231LLU;
	int8_t x155 = INT8_MIN;
	int64_t x156 = -1LL;
	volatile int32_t t36 = -2;

    t36 = (x153!=((x154%x155)/x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -13LL;
	int32_t x158 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t37 = 79;

    t37 = (x157!=((x158%x159)/x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;

    t38 = (x161!=((x162%x163)/x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 4990;
	uint8_t x167 = 29U;
	volatile int32_t t39 = 1;

    t39 = (x165!=((x166%x167)/x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	static volatile uint8_t x170 = 0U;
	int16_t x172 = INT16_MIN;
	int32_t t40 = -3;

    t40 = (x169!=((x170%x171)/x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	volatile int64_t x176 = 137982674158320229LL;
	static int32_t t41 = 215425904;

    t41 = (x173!=((x174%x175)/x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x177 = INT8_MAX;
	static volatile uint32_t x178 = UINT32_MAX;
	static int16_t x179 = -105;
	volatile int8_t x180 = 1;
	int32_t t42 = 1696600;

    t42 = (x177!=((x178%x179)/x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 1508492556585926288LLU;
	static int16_t x182 = -1;
	int32_t x183 = 8;
	volatile int32_t t43 = 2;

    t43 = (x181!=((x182%x183)/x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x185 = 108U;
	int8_t x186 = -1;
	uint32_t x187 = 145115127U;
	static volatile int32_t t44 = 687;

    t44 = (x185!=((x186%x187)/x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x190 = INT32_MIN;
	static uint64_t x192 = UINT64_MAX;

    t45 = (x189!=((x190%x191)/x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x193 = 495530U;
	int32_t x195 = 418448964;
	int8_t x196 = -1;
	volatile int32_t t46 = -204675724;

    t46 = (x193!=((x194%x195)/x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	uint8_t x198 = 2U;
	static volatile int8_t x199 = INT8_MIN;
	static uint64_t x200 = 40284LLU;
	volatile int32_t t47 = 6577225;

    t47 = (x197!=((x198%x199)/x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MAX;
	int64_t x202 = INT64_MAX;
	int32_t x203 = -1;
	int16_t x204 = -164;
	volatile int32_t t48 = -305882;

    t48 = (x201!=((x202%x203)/x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	int16_t x206 = -1;
	uint64_t x207 = 3LLU;
	uint16_t x208 = UINT16_MAX;
	static int32_t t49 = 64888696;

    t49 = (x205!=((x206%x207)/x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = INT8_MAX;
	int32_t x210 = 429;
	volatile uint16_t x211 = 335U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t50 = -17956541;

    t50 = (x209!=((x210%x211)/x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MAX;
	volatile int32_t t51 = 4910;

    t51 = (x213!=((x214%x215)/x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x217 = -1;
	volatile uint16_t x218 = 0U;
	volatile int8_t x219 = -1;
	static int64_t x220 = -1LL;
	static volatile int32_t t52 = -1;

    t52 = (x217!=((x218%x219)/x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	uint16_t x223 = 61U;
	int16_t x224 = -1;
	int32_t t53 = -103806899;

    t53 = (x221!=((x222%x223)/x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x226 = INT16_MIN;
	int64_t x227 = 1429LL;
	int8_t x228 = -1;
	static volatile int32_t t54 = 75707;

    t54 = (x225!=((x226%x227)/x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = -32;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t55 = 49;

    t55 = (x229!=((x230%x231)/x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 33U;
	uint32_t x235 = 5U;
	static volatile int32_t t56 = 3194;

    t56 = (x233!=((x234%x235)/x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = INT8_MIN;
	static uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	volatile int32_t t57 = 60229;

    t57 = (x241!=((x242%x243)/x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x249 = 5717U;
	static uint32_t x251 = UINT32_MAX;
	uint32_t x252 = 43001717U;
	int32_t t58 = 57276;

    t58 = (x249!=((x250%x251)/x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = INT8_MIN;
	uint64_t x254 = 96153LLU;
	volatile int32_t x255 = 1;
	int64_t x256 = 5408LL;
	volatile int32_t t59 = -1865;

    t59 = (x253!=((x254%x255)/x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = -1;
	static int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;

    t60 = (x257!=((x258%x259)/x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = INT32_MAX;
	static int64_t x262 = INT64_MIN;
	uint8_t x263 = 31U;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t61 = 139824078;

    t61 = (x261!=((x262%x263)/x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x267 = INT64_MAX;
	static volatile int32_t x268 = INT32_MIN;
	int32_t t62 = -9899;

    t62 = (x265!=((x266%x267)/x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x270 = UINT32_MAX;
	volatile uint8_t x271 = 10U;
	int16_t x272 = 87;
	volatile int32_t t63 = 267;

    t63 = (x269!=((x270%x271)/x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = 75;
	uint32_t x274 = 27035U;
	static int8_t x275 = INT8_MAX;
	uint32_t x276 = UINT32_MAX;

    t64 = (x273!=((x274%x275)/x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MAX;
	int64_t x279 = 5LL;
	volatile int32_t t65 = -1731516;

    t65 = (x277!=((x278%x279)/x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x282 = INT64_MAX;
	volatile int32_t x283 = -1;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t66 = 32614;

    t66 = (x281!=((x282%x283)/x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x285 = -1;
	int64_t x286 = -46414LL;
	int16_t x287 = INT16_MAX;
	volatile int16_t x288 = 1;
	volatile int32_t t67 = -80;

    t67 = (x285!=((x286%x287)/x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x289 = 2U;
	static int8_t x290 = INT8_MAX;
	int32_t t68 = 449965;

    t68 = (x289!=((x290%x291)/x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x293 = UINT8_MAX;
	int16_t x294 = 1;
	int8_t x295 = 5;
	static volatile int32_t t69 = 112844201;

    t69 = (x293!=((x294%x295)/x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x298 = UINT64_MAX;
	static int16_t x300 = -3968;
	int32_t t70 = -15;

    t70 = (x297!=((x298%x299)/x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	static int64_t x302 = INT64_MIN;
	static int64_t x303 = -39268851629927LL;
	int32_t x304 = -34747;
	volatile int32_t t71 = 1016;

    t71 = (x301!=((x302%x303)/x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x305 = INT8_MIN;
	int64_t x307 = -1931LL;
	volatile uint16_t x308 = 20U;
	volatile int32_t t72 = 10730;

    t72 = (x305!=((x306%x307)/x308));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x309 = -1;
	int16_t x310 = 2121;
	static int8_t x311 = -3;
	int32_t x312 = -1;
	volatile int32_t t73 = -2456796;

    t73 = (x309!=((x310%x311)/x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t74 = 29;

    t74 = (x313!=((x314%x315)/x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	uint8_t x319 = 38U;
	uint32_t x320 = 199318081U;
	volatile int32_t t75 = -303609919;

    t75 = (x317!=((x318%x319)/x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x321 = 15LLU;
	static int8_t x322 = INT8_MAX;
	uint32_t x323 = 34935U;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t76 = -3940;

    t76 = (x321!=((x322%x323)/x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x325 = 678;
	uint64_t x326 = 863454938825LLU;
	volatile int16_t x327 = INT16_MIN;
	int32_t t77 = -175238;

    t77 = (x325!=((x326%x327)/x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x329 = 0;
	static int16_t x330 = INT16_MIN;
	static int32_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t78 = 9;

    t78 = (x329!=((x330%x331)/x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x333 = 2484896LL;
	int8_t x334 = 0;
	static volatile uint32_t x335 = 357596U;
	uint32_t x336 = UINT32_MAX;
	static volatile int32_t t79 = -297;

    t79 = (x333!=((x334%x335)/x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x337 = -1;
	int32_t x339 = -1;
	static uint32_t x340 = UINT32_MAX;
	int32_t t80 = 16058129;

    t80 = (x337!=((x338%x339)/x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x345 = -1;
	int16_t x346 = 34;
	static uint32_t x347 = UINT32_MAX;
	volatile int32_t x348 = -1;

    t81 = (x345!=((x346%x347)/x348));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x349 = -1;
	static uint64_t x351 = 1617848902848893183LLU;
	int16_t x352 = INT16_MIN;

    t82 = (x349!=((x350%x351)/x352));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x355 = -1171456;
	volatile int32_t t83 = -27;

    t83 = (x353!=((x354%x355)/x356));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x361 = 27149LL;
	int64_t x363 = 4147735865LL;
	static volatile int64_t x364 = INT64_MIN;

    t84 = (x361!=((x362%x363)/x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x365 = UINT16_MAX;
	static uint32_t x366 = UINT32_MAX;
	int64_t x367 = -391020LL;
	int8_t x368 = INT8_MAX;
	volatile int32_t t85 = -167317;

    t85 = (x365!=((x366%x367)/x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x370 = INT32_MIN;
	static volatile int32_t t86 = -1;

    t86 = (x369!=((x370%x371)/x372));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x373 = -56;
	static int32_t x374 = -4365607;
	volatile int32_t x376 = 345837;
	int32_t t87 = -41;

    t87 = (x373!=((x374%x375)/x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x377 = -1;
	uint32_t x378 = 7476664U;
	int64_t x380 = INT64_MIN;

    t88 = (x377!=((x378%x379)/x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x381 = 11U;
	int64_t x382 = INT64_MAX;
	uint8_t x383 = 4U;
	int32_t t89 = 24086114;

    t89 = (x381!=((x382%x383)/x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x385 = -95522418;
	int64_t x386 = 20305058594814329LL;
	uint16_t x387 = 4012U;
	volatile int32_t t90 = 1;

    t90 = (x385!=((x386%x387)/x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	volatile uint32_t x391 = 3U;
	int32_t x392 = -5;

    t91 = (x389!=((x390%x391)/x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t92 = 91;

    t92 = (x393!=((x394%x395)/x396));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = 10778720333504LL;
	static uint16_t x399 = 7336U;
	volatile uint64_t x400 = 177LLU;
	int32_t t93 = -207615727;

    t93 = (x397!=((x398%x399)/x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x401 = INT16_MIN;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t94 = 26589123;

    t94 = (x401!=((x402%x403)/x404));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x405 = 6U;
	static int32_t x406 = -1794487;
	int32_t x407 = INT32_MAX;
	volatile int32_t t95 = -1;

    t95 = (x405!=((x406%x407)/x408));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x409 = INT32_MAX;
	uint64_t x410 = 8725043014896LLU;
	int16_t x412 = 978;
	volatile int32_t t96 = 0;

    t96 = (x409!=((x410%x411)/x412));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x413 = 57557783543LL;
	int8_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t97 = -248662;

    t97 = (x413!=((x414%x415)/x416));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x419 = -187073937;
	int64_t x420 = -92653269LL;
	volatile int32_t t98 = 3;

    t98 = (x417!=((x418%x419)/x420));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = -1;
	int64_t x422 = 86LL;
	int8_t x424 = INT8_MIN;
	volatile int32_t t99 = -1862166;

    t99 = (x421!=((x422%x423)/x424));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x425 = -6615601LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t100 = -9;

    t100 = (x425!=((x426%x427)/x428));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x429 = INT32_MIN;
	volatile int32_t x430 = INT32_MIN;
	int8_t x432 = 1;

    t101 = (x429!=((x430%x431)/x432));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x438 = -1809370;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t102 = -98;

    t102 = (x437!=((x438%x439)/x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = 20;
	static int16_t x444 = -1;
	volatile int32_t t103 = 0;

    t103 = (x441!=((x442%x443)/x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x445 = UINT16_MAX;
	static int64_t x446 = 83LL;
	int64_t x447 = -49630128803191909LL;
	uint64_t x448 = 39LLU;
	volatile int32_t t104 = 1205;

    t104 = (x445!=((x446%x447)/x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = -453460;
	static int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t105 = 100;

    t105 = (x449!=((x450%x451)/x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = -3856;
	static volatile int16_t x454 = -378;
	uint16_t x455 = 3417U;
	volatile uint16_t x456 = 10188U;
	volatile int32_t t106 = 0;

    t106 = (x453!=((x454%x455)/x456));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x457 = INT64_MAX;
	uint32_t x458 = 456245799U;
	volatile int64_t x459 = -414169280268070717LL;
	volatile int32_t t107 = -55303;

    t107 = (x457!=((x458%x459)/x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x461 = -7106;
	int64_t x462 = INT64_MAX;
	static int32_t x463 = -1969;
	int16_t x464 = -1;
	volatile int32_t t108 = 49911;

    t108 = (x461!=((x462%x463)/x464));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MAX;
	volatile int32_t t109 = -20;

    t109 = (x465!=((x466%x467)/x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = INT8_MAX;
	volatile int16_t x470 = 31;
	int32_t x471 = INT32_MAX;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t110 = 1;

    t110 = (x469!=((x470%x471)/x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x473 = 3250U;
	volatile uint32_t x475 = 1993981U;
	static uint32_t x476 = 25U;
	volatile int32_t t111 = 8;

    t111 = (x473!=((x474%x475)/x476));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = 1771532762578LL;
	int8_t x478 = 58;
	uint32_t x479 = 11794462U;
	volatile uint64_t x480 = UINT64_MAX;
	volatile int32_t t112 = -9;

    t112 = (x477!=((x478%x479)/x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x481 = INT8_MIN;
	int32_t x483 = -1;
	uint32_t x484 = 307079456U;
	static volatile int32_t t113 = 71740;

    t113 = (x481!=((x482%x483)/x484));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x485 = 366U;
	int16_t x486 = -1;
	static uint64_t x487 = UINT64_MAX;
	volatile int16_t x488 = -1;

    t114 = (x485!=((x486%x487)/x488));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x489 = 359U;
	static int32_t x490 = 0;
	static uint64_t x491 = UINT64_MAX;
	static int16_t x492 = -7226;
	volatile int32_t t115 = 6801;

    t115 = (x489!=((x490%x491)/x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x493 = 573203008U;
	uint64_t x494 = UINT64_MAX;
	volatile uint32_t x496 = 1U;

    t116 = (x493!=((x494%x495)/x496));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = 181;
	int16_t x500 = 1612;
	volatile int32_t t117 = 199613;

    t117 = (x497!=((x498%x499)/x500));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x501 = INT16_MIN;
	static uint8_t x502 = 11U;
	static int16_t x503 = 12747;
	int32_t x504 = INT32_MIN;
	int32_t t118 = -1518181;

    t118 = (x501!=((x502%x503)/x504));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x505 = -1;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = INT16_MIN;
	uint32_t x508 = 121U;
	volatile int32_t t119 = -3166;

    t119 = (x505!=((x506%x507)/x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x509 = UINT64_MAX;
	volatile int32_t x510 = INT32_MIN;
	static volatile uint64_t x511 = 17980LLU;
	volatile int32_t x512 = -46;

    t120 = (x509!=((x510%x511)/x512));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = 42;
	uint16_t x514 = 31U;
	uint64_t x515 = 15LLU;
	static volatile uint16_t x516 = 381U;
	volatile int32_t t121 = -1;

    t121 = (x513!=((x514%x515)/x516));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x519 = INT32_MIN;
	volatile uint32_t x520 = 349787057U;
	int32_t t122 = -231;

    t122 = (x517!=((x518%x519)/x520));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x527 = 27281287U;
	uint16_t x528 = 1U;

    t123 = (x525!=((x526%x527)/x528));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x529 = 20196991U;
	uint64_t x531 = 2467056971LLU;
	volatile int32_t x532 = -1;
	int32_t t124 = -1;

    t124 = (x529!=((x530%x531)/x532));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = INT32_MIN;
	uint32_t x534 = 6U;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = INT16_MAX;
	int32_t t125 = -5578663;

    t125 = (x533!=((x534%x535)/x536));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x537 = 66U;
	int32_t x540 = INT32_MIN;
	static int32_t t126 = 2;

    t126 = (x537!=((x538%x539)/x540));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x541 = -50;
	int64_t x542 = INT64_MAX;
	int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MIN;

    t127 = (x541!=((x542%x543)/x544));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x546 = INT8_MAX;
	volatile int16_t x548 = INT16_MAX;
	int32_t t128 = -7;

    t128 = (x545!=((x546%x547)/x548));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x550 = INT16_MIN;
	uint32_t x551 = 66U;
	static int32_t t129 = -3078995;

    t129 = (x549!=((x550%x551)/x552));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = INT32_MIN;
	static int64_t x555 = INT64_MIN;
	uint8_t x556 = 10U;
	int32_t t130 = -2;

    t130 = (x553!=((x554%x555)/x556));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	volatile uint32_t x559 = UINT32_MAX;
	uint16_t x560 = UINT16_MAX;
	static int32_t t131 = 1959156;

    t131 = (x557!=((x558%x559)/x560));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x561 = -1;
	uint8_t x562 = UINT8_MAX;
	uint64_t x563 = UINT64_MAX;
	int16_t x564 = INT16_MIN;
	int32_t t132 = -208176;

    t132 = (x561!=((x562%x563)/x564));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x567 = INT32_MIN;
	int8_t x568 = 7;

    t133 = (x565!=((x566%x567)/x568));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x570 = INT8_MIN;
	static int8_t x571 = -24;
	int32_t x572 = INT32_MIN;
	int32_t t134 = -122;

    t134 = (x569!=((x570%x571)/x572));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x573 = 10U;
	volatile int16_t x575 = INT16_MIN;
	int8_t x576 = 5;

    t135 = (x573!=((x574%x575)/x576));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x577 = -1LL;
	uint64_t x578 = 7897016540488517LLU;
	int8_t x579 = 7;
	static volatile int32_t t136 = 504720035;

    t136 = (x577!=((x578%x579)/x580));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x585 = 25489U;
	int8_t x586 = INT8_MIN;
	volatile int32_t x588 = -1509012;
	volatile int32_t t137 = 330142776;

    t137 = (x585!=((x586%x587)/x588));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x589 = UINT16_MAX;
	int16_t x591 = 10;
	static volatile int16_t x592 = -7633;
	volatile int32_t t138 = -1;

    t138 = (x589!=((x590%x591)/x592));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x595 = 65;
	int64_t x596 = INT64_MIN;
	int32_t t139 = 7732257;

    t139 = (x593!=((x594%x595)/x596));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x598 = 6819904297743660LL;
	volatile int32_t x599 = -5;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t140 = -16;

    t140 = (x597!=((x598%x599)/x600));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x602 = 8072519992003021LLU;
	int8_t x603 = 5;
	volatile int32_t t141 = 240;

    t141 = (x601!=((x602%x603)/x604));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x605 = 1057LLU;
	int32_t x606 = 3;
	int64_t x607 = -234LL;
	uint8_t x608 = UINT8_MAX;
	static int32_t t142 = 0;

    t142 = (x605!=((x606%x607)/x608));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x613 = INT8_MIN;
	uint8_t x614 = UINT8_MAX;
	static int8_t x615 = INT8_MIN;
	int32_t t143 = -21948;

    t143 = (x613!=((x614%x615)/x616));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint64_t x622 = 257290122271LLU;
	int8_t x623 = -1;
	uint16_t x624 = 3U;

    t144 = (x621!=((x622%x623)/x624));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x625 = INT64_MIN;
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	volatile int32_t t145 = -24862;

    t145 = (x625!=((x626%x627)/x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x629 = 15;
	uint64_t x630 = UINT64_MAX;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t146 = -9393588;

    t146 = (x629!=((x630%x631)/x632));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x634 = INT64_MAX;
	volatile uint64_t x635 = 7LLU;
	static int64_t x636 = 2891LL;

    t147 = (x633!=((x634%x635)/x636));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x638 = INT64_MIN;
	int16_t x639 = INT16_MIN;
	volatile int8_t x640 = -6;

    t148 = (x637!=((x638%x639)/x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = INT16_MIN;
	static volatile int32_t x643 = 138;
	int8_t x644 = 3;
	volatile int32_t t149 = -40042673;

    t149 = (x641!=((x642%x643)/x644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x645 = UINT16_MAX;
	uint16_t x646 = 1036U;
	static int16_t x647 = INT16_MAX;
	static int32_t x648 = -1;
	int32_t t150 = -12;

    t150 = (x645!=((x646%x647)/x648));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x653 = INT64_MIN;
	static int16_t x654 = INT16_MAX;
	volatile uint16_t x655 = UINT16_MAX;
	volatile uint32_t x656 = 63U;
	static volatile int32_t t151 = 2;

    t151 = (x653!=((x654%x655)/x656));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x657 = -1;
	int8_t x660 = -30;

    t152 = (x657!=((x658%x659)/x660));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x661 = 129U;
	int8_t x662 = INT8_MIN;
	volatile int16_t x663 = -1;
	int64_t x664 = 6753627332282944LL;

    t153 = (x661!=((x662%x663)/x664));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x666 = INT16_MAX;
	volatile uint64_t x667 = 1707828481789175LLU;
	volatile int16_t x668 = INT16_MIN;
	int32_t t154 = 175;

    t154 = (x665!=((x666%x667)/x668));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x669 = 1264970LLU;
	uint16_t x670 = 15552U;
	int32_t x671 = INT32_MIN;
	static uint16_t x672 = UINT16_MAX;
	int32_t t155 = -42995826;

    t155 = (x669!=((x670%x671)/x672));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x673 = 6;
	int16_t x674 = INT16_MIN;
	int8_t x675 = INT8_MAX;
	int32_t x676 = INT32_MIN;
	int32_t t156 = 13861229;

    t156 = (x673!=((x674%x675)/x676));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x677 = INT16_MIN;
	static int8_t x678 = INT8_MIN;
	static int32_t t157 = 1576;

    t157 = (x677!=((x678%x679)/x680));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x681 = INT32_MIN;
	volatile int64_t x683 = INT64_MIN;
	uint8_t x684 = 14U;
	volatile int32_t t158 = 0;

    t158 = (x681!=((x682%x683)/x684));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x685 = INT32_MAX;
	volatile int64_t x686 = INT64_MIN;
	uint16_t x687 = UINT16_MAX;
	int32_t x688 = 53982;
	volatile int32_t t159 = -102;

    t159 = (x685!=((x686%x687)/x688));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x689 = -1;
	uint32_t x690 = 256U;
	volatile uint16_t x691 = 93U;
	static int16_t x692 = -448;
	volatile int32_t t160 = -890209945;

    t160 = (x689!=((x690%x691)/x692));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = 3;
	int8_t x696 = -1;
	int32_t t161 = -24948;

    t161 = (x693!=((x694%x695)/x696));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x697 = -44730642;
	static int32_t x698 = -1;
	static volatile int32_t x699 = INT32_MIN;
	static volatile uint16_t x700 = UINT16_MAX;
	volatile int32_t t162 = 30887469;

    t162 = (x697!=((x698%x699)/x700));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = 4;
	uint32_t x702 = UINT32_MAX;
	static int8_t x703 = -3;
	int8_t x704 = -1;

    t163 = (x701!=((x702%x703)/x704));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x706 = INT16_MIN;
	static int64_t x707 = INT64_MAX;
	int32_t t164 = 4605423;

    t164 = (x705!=((x706%x707)/x708));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x709 = INT16_MIN;
	static int32_t x710 = 17;
	uint16_t x711 = 71U;
	int64_t x712 = -1LL;
	volatile int32_t t165 = 11342490;

    t165 = (x709!=((x710%x711)/x712));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x713 = UINT32_MAX;
	uint32_t x715 = UINT32_MAX;
	uint32_t x716 = 1246741412U;
	static volatile int32_t t166 = -23;

    t166 = (x713!=((x714%x715)/x716));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x717 = -89371LL;
	volatile int64_t x718 = 1147LL;
	static int32_t x719 = INT32_MAX;
	int32_t x720 = 4;
	int32_t t167 = 19226973;

    t167 = (x717!=((x718%x719)/x720));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = 0;
	int32_t x722 = INT32_MAX;
	int16_t x723 = -3492;
	volatile int32_t t168 = 868725;

    t168 = (x721!=((x722%x723)/x724));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x725 = 69U;
	int64_t x727 = INT64_MIN;
	int32_t x728 = INT32_MAX;
	int32_t t169 = 1;

    t169 = (x725!=((x726%x727)/x728));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x729 = 1LLU;
	uint64_t x730 = 1595005341581125LLU;
	int8_t x731 = 26;
	int16_t x732 = INT16_MIN;
	static volatile int32_t t170 = 31;

    t170 = (x729!=((x730%x731)/x732));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x734 = 2U;
	volatile int64_t x735 = INT64_MIN;
	uint64_t x736 = UINT64_MAX;

    t171 = (x733!=((x734%x735)/x736));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x738 = 132655768LL;
	int64_t x739 = -458844896168240227LL;
	static volatile int64_t x740 = -30321715620LL;
	volatile int32_t t172 = 1;

    t172 = (x737!=((x738%x739)/x740));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x742 = -3;
	int64_t x743 = INT64_MAX;
	uint8_t x744 = UINT8_MAX;
	int32_t t173 = -16452254;

    t173 = (x741!=((x742%x743)/x744));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x745 = 0;
	volatile int64_t x746 = -1LL;
	static int32_t x747 = -1;
	volatile int32_t t174 = -21658;

    t174 = (x745!=((x746%x747)/x748));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x749 = 1945206LLU;
	int16_t x751 = -2;
	volatile int32_t t175 = -15915;

    t175 = (x749!=((x750%x751)/x752));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x753 = INT8_MIN;
	volatile int64_t x755 = INT64_MIN;
	int32_t x756 = INT32_MAX;

    t176 = (x753!=((x754%x755)/x756));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x757 = 3782U;
	uint64_t x758 = UINT64_MAX;
	static int8_t x759 = -2;
	static int16_t x760 = 1581;
	volatile int32_t t177 = -1;

    t177 = (x757!=((x758%x759)/x760));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x761 = INT16_MIN;
	static volatile int64_t x763 = 1392920742050LL;
	static int64_t x764 = INT64_MIN;
	static int32_t t178 = -85572550;

    t178 = (x761!=((x762%x763)/x764));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x765 = -1;
	volatile uint8_t x766 = UINT8_MAX;
	uint64_t x768 = 93205LLU;
	volatile int32_t t179 = 11431;

    t179 = (x765!=((x766%x767)/x768));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t t180 = 1375560;

    t180 = (x769!=((x770%x771)/x772));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x774 = 52408176709361438LLU;
	volatile int64_t x775 = -1LL;
	int32_t x776 = -54834;
	int32_t t181 = 9098;

    t181 = (x773!=((x774%x775)/x776));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	int32_t t182 = 2414081;

    t182 = (x777!=((x778%x779)/x780));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x785 = 3;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = 1758085489343212LLU;
	uint16_t x788 = 1688U;

    t183 = (x785!=((x786%x787)/x788));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x793 = INT8_MAX;
	volatile int16_t x795 = INT16_MAX;
	volatile uint16_t x796 = 37U;
	int32_t t184 = 105155392;

    t184 = (x793!=((x794%x795)/x796));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x798 = UINT8_MAX;
	int32_t x799 = INT32_MIN;
	static int32_t x800 = INT32_MIN;
	int32_t t185 = 3656604;

    t185 = (x797!=((x798%x799)/x800));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x801 = -2358;
	uint32_t x802 = 3831U;
	int32_t x803 = INT32_MIN;
	uint32_t x804 = UINT32_MAX;
	static volatile int32_t t186 = 357;

    t186 = (x801!=((x802%x803)/x804));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x805 = 739U;
	static int16_t x806 = 1;

    t187 = (x805!=((x806%x807)/x808));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x809 = INT64_MIN;
	volatile int8_t x810 = INT8_MIN;
	volatile int16_t x811 = -6;
	int32_t t188 = -433175967;

    t188 = (x809!=((x810%x811)/x812));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x814 = 224U;
	static int32_t x815 = INT32_MIN;
	int8_t x816 = INT8_MAX;
	int32_t t189 = -1194;

    t189 = (x813!=((x814%x815)/x816));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x818 = 81589060U;
	int8_t x819 = -1;
	volatile int64_t x820 = INT64_MIN;
	int32_t t190 = 3;

    t190 = (x817!=((x818%x819)/x820));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x821 = -1LL;
	uint32_t x822 = 3838135U;
	volatile uint64_t x823 = 288211LLU;
	int8_t x824 = INT8_MAX;
	volatile int32_t t191 = 10;

    t191 = (x821!=((x822%x823)/x824));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x827 = -1LL;
	int8_t x828 = 6;
	int32_t t192 = 3;

    t192 = (x825!=((x826%x827)/x828));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x829 = -23397;
	volatile int32_t x830 = 3891255;
	int16_t x831 = INT16_MAX;
	int32_t t193 = -1173906;

    t193 = (x829!=((x830%x831)/x832));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x838 = INT16_MIN;
	static int64_t x839 = 55898LL;
	static volatile uint16_t x840 = 1U;

    t194 = (x837!=((x838%x839)/x840));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x841 = 31789295;
	int16_t x842 = INT16_MIN;
	int64_t x843 = INT64_MIN;
	uint8_t x844 = UINT8_MAX;

    t195 = (x841!=((x842%x843)/x844));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x845 = INT8_MIN;
	int32_t x846 = INT32_MIN;
	static volatile int8_t x847 = -1;
	int16_t x848 = INT16_MAX;
	int32_t t196 = 35442754;

    t196 = (x845!=((x846%x847)/x848));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x850 = -203438485LL;
	int8_t x851 = INT8_MIN;
	int64_t x852 = 43359460171666505LL;
	volatile int32_t t197 = 896;

    t197 = (x849!=((x850%x851)/x852));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x853 = UINT32_MAX;
	int64_t x854 = INT64_MIN;
	int16_t x855 = -3407;
	int32_t t198 = -1;

    t198 = (x853!=((x854%x855)/x856));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x857 = 1;
	int16_t x858 = -1;
	volatile int16_t x859 = INT16_MAX;
	int64_t x860 = 7LL;
	volatile int32_t t199 = 129716;

    t199 = (x857!=((x858%x859)/x860));

    if (t199 != 1) { NG(); } else { ; }
	
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

