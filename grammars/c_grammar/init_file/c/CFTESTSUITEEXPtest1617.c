
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

int8_t x5 = INT8_MIN;
int32_t x11 = -18470566;
static int64_t x19 = 27088956069476LL;
volatile int64_t x20 = INT64_MIN;
volatile uint8_t x25 = 55U;
volatile int64_t x26 = INT64_MIN;
static int32_t x28 = -17697;
int32_t t6 = 1;
uint16_t x32 = 29U;
int32_t t7 = -3150;
int8_t x33 = -2;
int8_t x43 = -1;
int16_t x46 = INT16_MAX;
uint16_t x48 = UINT16_MAX;
int16_t x53 = 6025;
volatile int8_t x56 = -1;
uint32_t x62 = 7U;
int32_t t15 = -8255606;
volatile uint32_t x75 = 1964U;
static uint16_t x86 = UINT16_MAX;
volatile int32_t t20 = -4129693;
volatile int16_t x90 = 307;
int32_t t21 = -10250010;
int64_t x93 = 1188819627LL;
int8_t x98 = INT8_MIN;
uint64_t x102 = 24000869329181287LLU;
int8_t x103 = INT8_MIN;
volatile int64_t x106 = INT64_MIN;
int16_t x107 = INT16_MIN;
static volatile uint16_t x110 = 10877U;
int8_t x122 = -1;
uint16_t x127 = 190U;
int16_t x130 = INT16_MIN;
uint8_t x139 = 10U;
uint16_t x141 = 630U;
uint8_t x146 = 24U;
static volatile int32_t t35 = -99225;
static uint8_t x154 = 2U;
int64_t x163 = 211523390LL;
volatile int32_t t40 = 29;
int32_t x178 = -1;
volatile uint8_t x182 = 53U;
uint32_t x186 = 16007058U;
uint8_t x188 = UINT8_MAX;
volatile int64_t x191 = INT64_MIN;
int32_t x193 = -1;
static uint64_t x196 = UINT64_MAX;
int64_t x206 = INT64_MIN;
volatile uint16_t x207 = 18755U;
static int64_t x209 = INT64_MAX;
uint32_t x215 = UINT32_MAX;
static uint8_t x217 = UINT8_MAX;
int16_t x218 = INT16_MIN;
int32_t x220 = INT32_MIN;
static volatile int32_t t52 = 8;
int64_t x222 = INT64_MAX;
int8_t x232 = INT8_MIN;
int32_t t54 = 1218;
volatile int32_t x238 = -413871895;
int32_t t56 = 615113483;
int32_t t58 = -2;
static int8_t x250 = INT8_MAX;
volatile int32_t t59 = -1;
static int32_t t60 = -314725;
static int16_t x264 = INT16_MIN;
int64_t x268 = INT64_MIN;
int64_t x273 = INT64_MAX;
int8_t x275 = INT8_MIN;
static uint8_t x276 = 8U;
static int16_t x282 = INT16_MAX;
volatile int16_t x288 = -1;
int64_t x291 = INT64_MAX;
uint64_t x302 = 6246128871373LLU;
int32_t x305 = 0;
volatile int32_t t73 = -1376;
static int64_t x309 = -2043644572558866583LL;
int8_t x313 = 7;
uint32_t x316 = 2U;
volatile int32_t x320 = 15;
int64_t x321 = 2538409996470LL;
int8_t x325 = -6;
volatile int32_t t81 = 9;
static int32_t x344 = INT32_MIN;
int64_t x345 = INT64_MIN;
volatile int32_t t83 = -1055326;
int64_t x351 = 25310915LL;
int64_t x355 = -11566LL;
int8_t x384 = -1;
static volatile int32_t t91 = -125501764;
static int8_t x386 = INT8_MAX;
volatile int8_t x390 = INT8_MIN;
int16_t x392 = INT16_MAX;
volatile uint32_t x394 = 1943310U;
int64_t x395 = -1LL;
int8_t x396 = INT8_MIN;
int32_t t94 = 13;
int32_t x397 = 317681;
volatile int16_t x399 = INT16_MIN;
int8_t x404 = INT8_MAX;
uint32_t x407 = UINT32_MAX;
uint8_t x413 = 3U;
volatile int16_t x416 = INT16_MIN;
uint64_t x427 = UINT64_MAX;
int32_t t102 = 73289726;
int8_t x442 = 13;
int32_t t107 = -6267162;
static int32_t x452 = -1;
volatile int64_t x453 = -30659883408843LL;
uint8_t x456 = 2U;
volatile uint32_t x459 = UINT32_MAX;
static volatile int32_t t110 = -1026;
int32_t x465 = INT32_MIN;
volatile int16_t x466 = -1;
static int32_t x482 = INT32_MIN;
uint8_t x494 = 2U;
int64_t x499 = -1LL;
int32_t x503 = INT32_MIN;
int32_t x513 = INT32_MIN;
volatile uint16_t x515 = UINT16_MAX;
int8_t x524 = -1;
int64_t x547 = INT64_MIN;
int16_t x549 = -1;
volatile int32_t x550 = INT32_MIN;
int64_t x554 = INT64_MIN;
static volatile int32_t t133 = 49425393;
static uint64_t x561 = 1601931494237LLU;
int16_t x564 = INT16_MAX;
int16_t x568 = INT16_MIN;
volatile int32_t t136 = 647141;
uint8_t x571 = 2U;
volatile int32_t t138 = 395233;
int8_t x584 = -1;
int32_t t139 = -2;
int16_t x585 = INT16_MIN;
uint32_t x586 = 31U;
uint32_t x590 = UINT32_MAX;
static uint8_t x594 = 2U;
static int32_t x605 = -1;
int8_t x607 = 30;
uint16_t x608 = UINT16_MAX;
volatile int32_t t146 = -9;
int16_t x613 = INT16_MIN;
uint16_t x615 = 2U;
int32_t x622 = INT32_MIN;
int32_t t149 = -1;
uint16_t x625 = 1145U;
int32_t x630 = -995387;
int64_t x632 = INT64_MAX;
uint8_t x634 = UINT8_MAX;
volatile int32_t t152 = 1;
static int8_t x640 = INT8_MAX;
static int32_t x648 = -1;
uint32_t x650 = UINT32_MAX;
int64_t x652 = INT64_MIN;
int32_t t158 = -86;
volatile uint32_t x661 = UINT32_MAX;
int32_t x665 = INT32_MIN;
static uint64_t x666 = 48342517LLU;
int16_t x673 = -1;
volatile int64_t x678 = -1LL;
static volatile int64_t x679 = -1LL;
int16_t x684 = -1;
int16_t x687 = -1;
int64_t x692 = -1LL;
uint8_t x696 = 28U;
int64_t x698 = -1LL;
int32_t t168 = -103;
volatile uint8_t x703 = 11U;
int8_t x704 = INT8_MIN;
volatile int8_t x708 = -1;
int32_t x711 = INT32_MAX;
int8_t x719 = -1;
static int8_t x728 = -2;
int16_t x729 = -1;
static volatile uint64_t x731 = 13230363LLU;
int64_t x734 = INT64_MAX;
int32_t t177 = 1;
static uint8_t x738 = 93U;
volatile int32_t t179 = 1;
volatile int32_t t180 = -22424671;
uint32_t x751 = 384U;
volatile int32_t t182 = 3543;
volatile uint8_t x769 = UINT8_MAX;
volatile uint32_t x773 = UINT32_MAX;
int32_t x775 = 5;
int32_t x777 = INT32_MIN;
uint64_t x780 = UINT64_MAX;
static int16_t x782 = INT16_MIN;
int32_t x788 = INT32_MIN;
int32_t x800 = INT32_MIN;
int64_t x801 = INT64_MIN;
int8_t x804 = INT8_MIN;
static int32_t t194 = 3418374;
volatile int16_t x808 = -9325;
int64_t x810 = INT64_MIN;
static int64_t x812 = 40135794973409LL;
int32_t t198 = 512;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 251471244891007081LLU;
	uint32_t x3 = UINT32_MAX;
	static volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 56;

    t0 = (x1!=((x2>x3)/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 304;
	uint32_t x7 = 539435U;
	volatile int32_t x8 = -1;
	static int32_t t1 = 108;

    t1 = (x5!=((x6>x7)/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 5551;
	uint16_t x10 = 2U;
	int32_t x12 = -1;
	int32_t t2 = -2;

    t2 = (x9!=((x10>x11)/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MAX;
	int16_t x15 = -617;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 1304570;

    t3 = (x13!=((x14>x15)/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MAX;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t t4 = -968381679;

    t4 = (x17!=((x18>x19)/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 8U;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	static int32_t x24 = -1;
	int32_t t5 = 10052246;

    t5 = (x21!=((x22>x23)/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = -1;

    t6 = (x25!=((x26>x27)/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	static volatile int32_t x31 = INT32_MIN;

    t7 = (x29!=((x30>x31)/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 1975459135275LLU;
	int16_t x35 = -274;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 1;

    t8 = (x33!=((x34>x35)/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	static int8_t x38 = INT8_MIN;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = 3;
	volatile int32_t t9 = 698370751;

    t9 = (x37!=((x38>x39)/x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -7085;
	int16_t x42 = INT16_MIN;
	volatile uint64_t x44 = 19LLU;
	int32_t t10 = 58854745;

    t10 = (x41!=((x42>x43)/x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 8441U;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t t11 = 166672174;

    t11 = (x45!=((x46>x47)/x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -1LL;
	int16_t x50 = 181;
	static int16_t x51 = -1;
	int32_t x52 = -7;
	volatile int32_t t12 = -1;

    t12 = (x49!=((x50>x51)/x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	uint8_t x55 = UINT8_MAX;
	volatile int32_t t13 = 15409756;

    t13 = (x53!=((x54>x55)/x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 83U;
	volatile int16_t x58 = INT16_MIN;
	uint16_t x59 = 7685U;
	uint32_t x60 = 1472U;
	volatile int32_t t14 = -120678;

    t14 = (x57!=((x58>x59)/x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MAX;
	static uint8_t x63 = 4U;
	static volatile int16_t x64 = -480;

    t15 = (x61!=((x62>x63)/x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	volatile int8_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 99350393;

    t16 = (x65!=((x66>x67)/x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -5312930318487963LL;
	int32_t x74 = INT32_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t17 = 3;

    t17 = (x73!=((x74>x75)/x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = -5;
	int64_t x78 = -1LL;
	int64_t x79 = INT64_MAX;
	int32_t x80 = 95550881;
	int32_t t18 = 18301;

    t18 = (x77!=((x78>x79)/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	uint16_t x82 = 263U;
	uint8_t x83 = 25U;
	static uint64_t x84 = UINT64_MAX;
	int32_t t19 = 1280422;

    t19 = (x81!=((x82>x83)/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;

    t20 = (x85!=((x86>x87)/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x91 = -1;
	int8_t x92 = INT8_MIN;

    t21 = (x89!=((x90>x91)/x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x94 = -1LL;
	static volatile uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -1;

    t22 = (x93!=((x94>x95)/x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = 0;
	int32_t x99 = 13257116;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t23 = 3;

    t23 = (x97!=((x98>x99)/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = -1;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t24 = 6;

    t24 = (x101!=((x102>x103)/x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MAX;
	static int8_t x108 = INT8_MIN;
	int32_t t25 = 1;

    t25 = (x105!=((x106>x107)/x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	volatile uint8_t x111 = 6U;
	volatile int64_t x112 = -52640573838296LL;
	int32_t t26 = -6655;

    t26 = (x109!=((x110>x111)/x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = -1;
	static int16_t x114 = -633;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 35204870813LLU;
	static volatile int32_t t27 = 34015;

    t27 = (x113!=((x114>x115)/x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = -1;
	volatile int64_t x118 = -21058220333993726LL;
	uint32_t x119 = UINT32_MAX;
	volatile int16_t x120 = 525;
	int32_t t28 = 1;

    t28 = (x117!=((x118>x119)/x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = -1208046;
	int32_t x123 = INT32_MAX;
	volatile int8_t x124 = INT8_MIN;
	int32_t t29 = -12491975;

    t29 = (x121!=((x122>x123)/x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MAX;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t30 = 79;

    t30 = (x125!=((x126>x127)/x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x129 = UINT64_MAX;
	uint64_t x131 = 205LLU;
	static uint16_t x132 = 1U;
	int32_t t31 = 75;

    t31 = (x129!=((x130>x131)/x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	volatile int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MAX;
	static int32_t t32 = -7066958;

    t32 = (x133!=((x134>x135)/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x137 = -1;
	volatile int16_t x138 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	static volatile int32_t t33 = 1866586;

    t33 = (x137!=((x138>x139)/x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	int16_t x144 = 1279;
	int32_t t34 = 74198071;

    t34 = (x141!=((x142>x143)/x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x145 = -2;
	static volatile uint64_t x147 = 29535LLU;
	int8_t x148 = INT8_MAX;

    t35 = (x145!=((x146>x147)/x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 8811438655831809897LLU;
	volatile int32_t t36 = -52;

    t36 = (x149!=((x150>x151)/x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = -1LL;
	int64_t x155 = -1LL;
	volatile uint64_t x156 = 399284694LLU;
	static int32_t t37 = -3790;

    t37 = (x153!=((x154>x155)/x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 24741268U;
	int32_t x159 = 952;
	static volatile uint64_t x160 = 923614LLU;
	volatile int32_t t38 = 244192;

    t38 = (x157!=((x158>x159)/x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MAX;
	static volatile int64_t x162 = -199416304432801LL;
	volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 31;

    t39 = (x161!=((x162>x163)/x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x169 = INT16_MIN;
	uint64_t x170 = 1057571LLU;
	int8_t x171 = -5;
	int64_t x172 = 15481434695433LL;

    t40 = (x169!=((x170>x171)/x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 846U;
	int32_t t41 = 65033;

    t41 = (x173!=((x174>x175)/x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	volatile int32_t x179 = INT32_MAX;
	static uint32_t x180 = 11643U;
	static volatile int32_t t42 = 247703374;

    t42 = (x177!=((x178>x179)/x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x181 = -272;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t43 = 26353;

    t43 = (x181!=((x182>x183)/x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x185 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	int32_t t44 = -323919472;

    t44 = (x185!=((x186>x187)/x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 21605U;
	int64_t x190 = -1LL;
	static int32_t x192 = -1;
	int32_t t45 = -1222316;

    t45 = (x189!=((x190>x191)/x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x194 = INT32_MIN;
	int8_t x195 = -1;
	volatile int32_t t46 = -42496;

    t46 = (x193!=((x194>x195)/x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 6U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t47 = -29;

    t47 = (x197!=((x198>x199)/x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x201 = 0U;
	int16_t x202 = INT16_MAX;
	static volatile int32_t x203 = INT32_MAX;
	uint64_t x204 = UINT64_MAX;
	static volatile int32_t t48 = -14612041;

    t48 = (x201!=((x202>x203)/x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 616492U;
	uint64_t x208 = 5608862377590LLU;
	volatile int32_t t49 = -335663622;

    t49 = (x205!=((x206>x207)/x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x210 = -1;
	int16_t x211 = -1;
	volatile uint64_t x212 = 6831927790153428208LLU;
	int32_t t50 = -16367040;

    t50 = (x209!=((x210>x211)/x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x213 = 66U;
	int64_t x214 = -1LL;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = 371048;

    t51 = (x213!=((x214>x215)/x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x219 = 4U;

    t52 = (x217!=((x218>x219)/x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = 523232348LL;
	uint16_t x223 = 36U;
	static int16_t x224 = INT16_MIN;
	int32_t t53 = 93601;

    t53 = (x221!=((x222>x223)/x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = UINT8_MAX;
	static int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MIN;

    t54 = (x229!=((x230>x231)/x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x233 = -1808735520844222102LL;
	volatile int16_t x234 = INT16_MIN;
	uint8_t x235 = UINT8_MAX;
	int8_t x236 = -5;
	static volatile int32_t t55 = -782874015;

    t55 = (x233!=((x234>x235)/x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = 1012586073;
	volatile uint32_t x239 = 63324U;
	int64_t x240 = 141480740199LL;

    t56 = (x237!=((x238>x239)/x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x241 = INT16_MAX;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -1LL;
	uint16_t x244 = UINT16_MAX;
	int32_t t57 = 5991;

    t57 = (x241!=((x242>x243)/x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x245 = UINT64_MAX;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = 28;

    t58 = (x245!=((x246>x247)/x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;

    t59 = (x249!=((x250>x251)/x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x253 = -6121663750339LL;
	uint8_t x254 = 7U;
	static int32_t x255 = -857201307;
	volatile int8_t x256 = -2;

    t60 = (x253!=((x254>x255)/x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = UINT16_MAX;
	uint32_t x258 = 356987U;
	uint8_t x259 = 3U;
	int64_t x260 = -481765649836501LL;
	int32_t t61 = -1749;

    t61 = (x257!=((x258>x259)/x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 2U;
	static int8_t x263 = INT8_MAX;
	int32_t t62 = -602962465;

    t62 = (x261!=((x262>x263)/x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -42;
	uint8_t x267 = 1U;
	int32_t t63 = -204247457;

    t63 = (x265!=((x266>x267)/x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 471U;
	static volatile uint8_t x270 = UINT8_MAX;
	volatile uint32_t x271 = UINT32_MAX;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t64 = 926056742;

    t64 = (x269!=((x270>x271)/x272));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x274 = INT16_MIN;
	static volatile int32_t t65 = -3567;

    t65 = (x273!=((x274>x275)/x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x277 = -2LL;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;
	volatile uint32_t x280 = 83942852U;
	static int32_t t66 = -3730146;

    t66 = (x277!=((x278>x279)/x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	static int8_t x284 = -3;
	volatile int32_t t67 = -29195;

    t67 = (x281!=((x282>x283)/x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x285 = 91646137905277247LLU;
	static uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	static volatile int32_t t68 = 346764;

    t68 = (x285!=((x286>x287)/x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = 1113608;
	int8_t x290 = -1;
	int16_t x292 = 61;
	int32_t t69 = 38220;

    t69 = (x289!=((x290>x291)/x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x293 = -1LL;
	int64_t x294 = INT64_MAX;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 4056;

    t70 = (x293!=((x294>x295)/x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x297 = 170LLU;
	static uint32_t x298 = 509332934U;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t71 = 911139;

    t71 = (x297!=((x298>x299)/x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = INT8_MIN;
	volatile int8_t x303 = INT8_MIN;
	uint16_t x304 = UINT16_MAX;
	static int32_t t72 = -12176;

    t72 = (x301!=((x302>x303)/x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x306 = 1;
	static volatile int8_t x307 = INT8_MIN;
	int16_t x308 = 67;

    t73 = (x305!=((x306>x307)/x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x310 = UINT16_MAX;
	volatile int32_t x311 = -1;
	int16_t x312 = 630;
	int32_t t74 = 14414571;

    t74 = (x309!=((x310>x311)/x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x314 = 4644707834618178367LLU;
	static int64_t x315 = 1221523LL;
	volatile int32_t t75 = 3;

    t75 = (x313!=((x314>x315)/x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x317 = 1685379399LLU;
	int64_t x318 = 2399900100639297722LL;
	static int64_t x319 = -5672674238894484LL;
	int32_t t76 = -6592;

    t76 = (x317!=((x318>x319)/x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x322 = UINT32_MAX;
	int16_t x323 = -1;
	int8_t x324 = -31;
	volatile int32_t t77 = 6823;

    t77 = (x321!=((x322>x323)/x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 6056098U;
	static volatile uint32_t x328 = 42U;
	volatile int32_t t78 = 5;

    t78 = (x325!=((x326>x327)/x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 652582631U;
	int16_t x330 = INT16_MAX;
	volatile uint32_t x331 = UINT32_MAX;
	int16_t x332 = -1;
	int32_t t79 = 649636;

    t79 = (x329!=((x330>x331)/x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x333 = -1;
	uint64_t x334 = 131027632195LLU;
	uint16_t x335 = 1100U;
	static int64_t x336 = INT64_MAX;
	static volatile int32_t t80 = 426809;

    t80 = (x333!=((x334>x335)/x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x337 = 42U;
	static uint8_t x338 = 115U;
	volatile int32_t x339 = 6163050;
	static int16_t x340 = INT16_MAX;

    t81 = (x337!=((x338>x339)/x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x341 = 55U;
	uint32_t x342 = 2U;
	static int32_t x343 = INT32_MIN;
	int32_t t82 = -374;

    t82 = (x341!=((x342>x343)/x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x346 = 129U;
	volatile int8_t x347 = -1;
	int8_t x348 = INT8_MIN;

    t83 = (x345!=((x346>x347)/x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = -1;
	static int32_t x350 = 11;
	static volatile int16_t x352 = 1;
	volatile int32_t t84 = -21;

    t84 = (x349!=((x350>x351)/x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = 1;
	int8_t x354 = -1;
	int8_t x356 = INT8_MAX;
	volatile int32_t t85 = 1;

    t85 = (x353!=((x354>x355)/x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = -1;
	int32_t x358 = 8;
	static int64_t x359 = -1LL;
	static int64_t x360 = INT64_MIN;
	int32_t t86 = -19;

    t86 = (x357!=((x358>x359)/x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x361 = -1;
	int64_t x362 = -121478215LL;
	int16_t x363 = 1;
	int32_t x364 = INT32_MIN;
	volatile int32_t t87 = -1;

    t87 = (x361!=((x362>x363)/x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MIN;
	static int32_t x371 = -1;
	int64_t x372 = -1LL;
	int32_t t88 = -3639100;

    t88 = (x369!=((x370>x371)/x372));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 38053416U;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t89 = -424;

    t89 = (x373!=((x374>x375)/x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x377 = INT64_MIN;
	static uint32_t x378 = UINT32_MAX;
	volatile int16_t x379 = INT16_MAX;
	static volatile uint8_t x380 = UINT8_MAX;
	volatile int32_t t90 = 0;

    t90 = (x377!=((x378>x379)/x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x381 = 0U;
	volatile int16_t x382 = 5;
	static volatile uint32_t x383 = 439U;

    t91 = (x381!=((x382>x383)/x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x385 = INT16_MAX;
	volatile uint32_t x387 = 3754976U;
	static int16_t x388 = INT16_MIN;
	static int32_t t92 = 0;

    t92 = (x385!=((x386>x387)/x388));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x389 = -9;
	volatile uint8_t x391 = 53U;
	int32_t t93 = 30285;

    t93 = (x389!=((x390>x391)/x392));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x393 = INT8_MAX;

    t94 = (x393!=((x394>x395)/x396));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x398 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	volatile int32_t t95 = -59658;

    t95 = (x397!=((x398>x399)/x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = -1;
	int16_t x402 = INT16_MIN;
	static int8_t x403 = INT8_MIN;
	volatile int32_t t96 = 3198;

    t96 = (x401!=((x402>x403)/x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x405 = INT16_MIN;
	static int8_t x406 = -1;
	static int32_t x408 = INT32_MAX;
	int32_t t97 = -17122487;

    t97 = (x405!=((x406>x407)/x408));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x409 = 10U;
	uint32_t x410 = UINT32_MAX;
	int32_t x411 = -5;
	int32_t x412 = -1;
	volatile int32_t t98 = 0;

    t98 = (x409!=((x410>x411)/x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x414 = -1LL;
	static volatile int64_t x415 = 59772840329LL;
	static volatile int32_t t99 = -57;

    t99 = (x413!=((x414>x415)/x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = -1;
	int8_t x418 = -24;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t100 = -136799110;

    t100 = (x417!=((x418>x419)/x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = INT32_MAX;
	static volatile int8_t x423 = INT8_MAX;
	static uint8_t x424 = 2U;
	int32_t t101 = 13;

    t101 = (x421!=((x422>x423)/x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x425 = 60U;
	int16_t x426 = INT16_MIN;
	volatile uint16_t x428 = 56U;

    t102 = (x425!=((x426>x427)/x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = INT8_MIN;
	static uint32_t x430 = 8612U;
	volatile uint64_t x431 = 3873LLU;
	static volatile int32_t x432 = INT32_MIN;
	volatile int32_t t103 = -2615;

    t103 = (x429!=((x430>x431)/x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x433 = 963059859U;
	int64_t x434 = -300124380LL;
	uint8_t x435 = 2U;
	int16_t x436 = INT16_MAX;
	volatile int32_t t104 = 0;

    t104 = (x433!=((x434>x435)/x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = -3;
	volatile uint8_t x438 = 11U;
	volatile uint32_t x439 = 62169U;
	int64_t x440 = -1LL;
	int32_t t105 = 1;

    t105 = (x437!=((x438>x439)/x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x441 = 896U;
	volatile int16_t x443 = -1;
	int64_t x444 = INT64_MIN;
	volatile int32_t t106 = 2;

    t106 = (x441!=((x442>x443)/x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = INT32_MIN;
	uint32_t x446 = 773U;
	uint64_t x447 = 5826093063102140LLU;
	int16_t x448 = INT16_MIN;

    t107 = (x445!=((x446>x447)/x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x449 = 57798LLU;
	int32_t x450 = 1;
	int64_t x451 = 117878128LL;
	volatile int32_t t108 = -740;

    t108 = (x449!=((x450>x451)/x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x454 = -1;
	volatile uint16_t x455 = 3677U;
	volatile int32_t t109 = 188;

    t109 = (x453!=((x454>x455)/x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x457 = INT8_MAX;
	uint64_t x458 = UINT64_MAX;
	uint16_t x460 = 196U;

    t110 = (x457!=((x458>x459)/x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x467 = INT64_MIN;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t111 = -15943;

    t111 = (x465!=((x466>x467)/x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = INT8_MIN;
	volatile uint32_t x470 = 639657816U;
	int64_t x471 = -1LL;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t112 = -3784383;

    t112 = (x469!=((x470>x471)/x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = 6620;
	static volatile int64_t x474 = -1LL;
	int32_t x475 = -1;
	int16_t x476 = INT16_MAX;
	int32_t t113 = 1;

    t113 = (x473!=((x474>x475)/x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x477 = -2;
	int32_t x478 = 0;
	static volatile int64_t x479 = -86403679608984279LL;
	int16_t x480 = 22;
	static volatile int32_t t114 = -1;

    t114 = (x477!=((x478>x479)/x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	static int16_t x483 = INT16_MAX;
	volatile int8_t x484 = 53;
	int32_t t115 = 346;

    t115 = (x481!=((x482>x483)/x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = -1;
	static int64_t x486 = INT64_MAX;
	int16_t x487 = INT16_MAX;
	int32_t x488 = INT32_MIN;
	int32_t t116 = -1;

    t116 = (x485!=((x486>x487)/x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x489 = 119U;
	int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MAX;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t117 = 14242;

    t117 = (x489!=((x490>x491)/x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint8_t x495 = UINT8_MAX;
	volatile uint32_t x496 = 73646580U;
	volatile int32_t t118 = -1264;

    t118 = (x493!=((x494>x495)/x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x497 = UINT32_MAX;
	int16_t x498 = 67;
	volatile uint32_t x500 = UINT32_MAX;
	volatile int32_t t119 = 52766;

    t119 = (x497!=((x498>x499)/x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = -1;
	int32_t x502 = 71487071;
	int64_t x504 = -1LL;
	int32_t t120 = 125;

    t120 = (x501!=((x502>x503)/x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = -1;
	int8_t x506 = 3;
	static int16_t x507 = 10;
	int16_t x508 = 1;
	volatile int32_t t121 = 12469992;

    t121 = (x505!=((x506>x507)/x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x509 = -37;
	static int8_t x510 = INT8_MIN;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = INT8_MAX;
	volatile int32_t t122 = -209709919;

    t122 = (x509!=((x510>x511)/x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x514 = INT8_MIN;
	uint8_t x516 = 3U;
	int32_t t123 = 212434;

    t123 = (x513!=((x514>x515)/x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x517 = 1;
	uint64_t x518 = 9385171LLU;
	int64_t x519 = 137LL;
	int64_t x520 = INT64_MIN;
	int32_t t124 = -20249;

    t124 = (x517!=((x518>x519)/x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x521 = UINT64_MAX;
	static uint16_t x522 = 292U;
	int32_t x523 = -15968;
	volatile int32_t t125 = -17009341;

    t125 = (x521!=((x522>x523)/x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x525 = 2U;
	volatile uint16_t x526 = 119U;
	static int64_t x527 = -1LL;
	volatile uint8_t x528 = 2U;
	volatile int32_t t126 = -201772157;

    t126 = (x525!=((x526>x527)/x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	int16_t x531 = -1;
	int16_t x532 = INT16_MIN;
	volatile int32_t t127 = 0;

    t127 = (x529!=((x530>x531)/x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = 1;
	int8_t x534 = INT8_MIN;
	static int16_t x535 = INT16_MIN;
	volatile uint16_t x536 = UINT16_MAX;
	int32_t t128 = -2462;

    t128 = (x533!=((x534>x535)/x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = INT64_MIN;
	volatile int8_t x538 = 1;
	int16_t x539 = INT16_MAX;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t129 = 1502;

    t129 = (x537!=((x538>x539)/x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x541 = INT8_MIN;
	volatile uint32_t x542 = UINT32_MAX;
	volatile int32_t x543 = INT32_MIN;
	volatile int8_t x544 = -1;
	volatile int32_t t130 = -21961;

    t130 = (x541!=((x542>x543)/x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint32_t x546 = UINT32_MAX;
	uint8_t x548 = 4U;
	int32_t t131 = 87551;

    t131 = (x545!=((x546>x547)/x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x551 = 24523U;
	static int32_t x552 = INT32_MAX;
	int32_t t132 = -31113;

    t132 = (x549!=((x550>x551)/x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = -1;
	volatile int64_t x555 = -1LL;
	uint8_t x556 = 19U;

    t133 = (x553!=((x554>x555)/x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x557 = 1U;
	uint32_t x558 = 0U;
	uint64_t x559 = 58LLU;
	int8_t x560 = 39;
	int32_t t134 = -1953;

    t134 = (x557!=((x558>x559)/x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x562 = 946U;
	static volatile int16_t x563 = INT16_MIN;
	int32_t t135 = 1;

    t135 = (x561!=((x562>x563)/x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x565 = UINT16_MAX;
	int64_t x566 = INT64_MIN;
	int8_t x567 = -22;

    t136 = (x565!=((x566>x567)/x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x569 = -249385544LL;
	uint32_t x570 = 3323U;
	int32_t x572 = -1638;
	volatile int32_t t137 = -1;

    t137 = (x569!=((x570>x571)/x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x578 = INT16_MAX;
	volatile int32_t x579 = INT32_MIN;
	volatile int32_t x580 = -1;

    t138 = (x577!=((x578>x579)/x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x581 = 1;
	int8_t x582 = -1;
	uint8_t x583 = UINT8_MAX;

    t139 = (x581!=((x582>x583)/x584));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x587 = -1;
	int32_t x588 = -1;
	int32_t t140 = -116695;

    t140 = (x585!=((x586>x587)/x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x589 = -1;
	static int8_t x591 = -7;
	static int32_t x592 = INT32_MAX;
	static int32_t t141 = 5;

    t141 = (x589!=((x590>x591)/x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x593 = 102007U;
	volatile uint64_t x595 = 4068LLU;
	int32_t x596 = 63802;
	static int32_t t142 = -15366;

    t142 = (x593!=((x594>x595)/x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x597 = 199645826LLU;
	uint32_t x598 = 481870U;
	uint32_t x599 = 475515U;
	uint32_t x600 = 16826U;
	int32_t t143 = -3;

    t143 = (x597!=((x598>x599)/x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x601 = INT8_MIN;
	int64_t x602 = INT64_MIN;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = 4U;
	static int32_t t144 = -1;

    t144 = (x601!=((x602>x603)/x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x606 = INT16_MAX;
	static volatile int32_t t145 = -82593443;

    t145 = (x605!=((x606>x607)/x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x609 = 1U;
	volatile int32_t x610 = INT32_MAX;
	uint64_t x611 = 7589397LLU;
	int32_t x612 = 60;

    t146 = (x609!=((x610>x611)/x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x614 = INT32_MIN;
	uint64_t x616 = 5696LLU;
	static int32_t t147 = 9303;

    t147 = (x613!=((x614>x615)/x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x617 = INT32_MAX;
	uint64_t x618 = 486LLU;
	int8_t x619 = INT8_MAX;
	int16_t x620 = -1;
	volatile int32_t t148 = -5555;

    t148 = (x617!=((x618>x619)/x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	int64_t x623 = 1074839LL;
	static int8_t x624 = INT8_MAX;

    t149 = (x621!=((x622>x623)/x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x626 = 6U;
	int16_t x627 = INT16_MIN;
	static volatile uint8_t x628 = 1U;
	volatile int32_t t150 = -38836;

    t150 = (x625!=((x626>x627)/x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x629 = INT8_MIN;
	volatile int32_t x631 = INT32_MIN;
	volatile int32_t t151 = -55693027;

    t151 = (x629!=((x630>x631)/x632));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x633 = 3475697514695455LL;
	static int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MAX;

    t152 = (x633!=((x634>x635)/x636));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x637 = UINT64_MAX;
	int8_t x638 = -1;
	static int64_t x639 = INT64_MIN;
	int32_t t153 = 34626241;

    t153 = (x637!=((x638>x639)/x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x641 = INT16_MIN;
	int16_t x642 = 317;
	int16_t x643 = INT16_MIN;
	volatile int32_t x644 = INT32_MIN;
	int32_t t154 = -280866859;

    t154 = (x641!=((x642>x643)/x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x645 = -21;
	static uint32_t x646 = 171U;
	int32_t x647 = INT32_MIN;
	volatile int32_t t155 = -237852437;

    t155 = (x645!=((x646>x647)/x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x649 = -1;
	int32_t x651 = -1;
	int32_t t156 = -62954;

    t156 = (x649!=((x650>x651)/x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x653 = -1;
	uint16_t x654 = 7U;
	uint64_t x655 = UINT64_MAX;
	volatile uint16_t x656 = 28U;
	volatile int32_t t157 = 33536;

    t157 = (x653!=((x654>x655)/x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x657 = -1LL;
	volatile uint16_t x658 = 10617U;
	volatile uint32_t x659 = UINT32_MAX;
	int64_t x660 = INT64_MAX;

    t158 = (x657!=((x658>x659)/x660));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x662 = INT16_MAX;
	volatile uint64_t x663 = 123005904097LLU;
	volatile uint8_t x664 = 25U;
	int32_t t159 = 96794;

    t159 = (x661!=((x662>x663)/x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x667 = -1LL;
	uint64_t x668 = 124040164297060LLU;
	static volatile int32_t t160 = -1;

    t160 = (x665!=((x666>x667)/x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x669 = 308157723U;
	static int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MAX;
	uint16_t x672 = 7303U;
	static int32_t t161 = 1;

    t161 = (x669!=((x670>x671)/x672));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x674 = INT8_MIN;
	uint64_t x675 = UINT64_MAX;
	uint16_t x676 = 4891U;
	volatile int32_t t162 = 195197610;

    t162 = (x673!=((x674>x675)/x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x677 = -2;
	int64_t x680 = INT64_MIN;
	volatile int32_t t163 = -5;

    t163 = (x677!=((x678>x679)/x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x681 = 0U;
	uint64_t x682 = UINT64_MAX;
	uint32_t x683 = 427719U;
	static int32_t t164 = 1;

    t164 = (x681!=((x682>x683)/x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = -1;
	int64_t x686 = -1LL;
	int16_t x688 = -152;
	volatile int32_t t165 = 14882115;

    t165 = (x685!=((x686>x687)/x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x689 = -1;
	volatile int16_t x690 = -1;
	int64_t x691 = -1LL;
	static volatile int32_t t166 = -896;

    t166 = (x689!=((x690>x691)/x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x693 = UINT64_MAX;
	int32_t x694 = INT32_MAX;
	int8_t x695 = INT8_MAX;
	volatile int32_t t167 = 399767;

    t167 = (x693!=((x694>x695)/x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x697 = INT32_MAX;
	int32_t x699 = INT32_MAX;
	static uint16_t x700 = 3797U;

    t168 = (x697!=((x698>x699)/x700));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = 30;
	int32_t t169 = 1;

    t169 = (x701!=((x702>x703)/x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = INT64_MIN;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = 1;
	static int32_t t170 = -20551;

    t170 = (x705!=((x706>x707)/x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x709 = -46202LL;
	volatile int32_t x710 = 247235;
	static int64_t x712 = -1LL;
	int32_t t171 = 12164776;

    t171 = (x709!=((x710>x711)/x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x713 = 1;
	int8_t x714 = -20;
	static int32_t x715 = INT32_MAX;
	uint8_t x716 = 3U;
	int32_t t172 = 0;

    t172 = (x713!=((x714>x715)/x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = UINT16_MAX;
	volatile int32_t x720 = INT32_MIN;
	static volatile int32_t t173 = 0;

    t173 = (x717!=((x718>x719)/x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x721 = 24;
	int64_t x722 = -1LL;
	uint32_t x723 = UINT32_MAX;
	static int16_t x724 = INT16_MAX;
	static int32_t t174 = 339031;

    t174 = (x721!=((x722>x723)/x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x725 = -1;
	static int8_t x726 = -1;
	int64_t x727 = -136142111308LL;
	static volatile int32_t t175 = -1;

    t175 = (x725!=((x726>x727)/x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x730 = 318LLU;
	int64_t x732 = -1LL;
	int32_t t176 = -16;

    t176 = (x729!=((x730>x731)/x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x733 = 10U;
	volatile int8_t x735 = -1;
	volatile uint64_t x736 = 1660817613LLU;

    t177 = (x733!=((x734>x735)/x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = 90900LLU;
	uint16_t x739 = 11U;
	uint64_t x740 = 3651LLU;
	volatile int32_t t178 = -255;

    t178 = (x737!=((x738>x739)/x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = INT32_MAX;
	static int64_t x743 = INT64_MAX;
	int8_t x744 = 60;

    t179 = (x741!=((x742>x743)/x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MAX;
	int16_t x747 = 3;
	static volatile int16_t x748 = INT16_MIN;

    t180 = (x745!=((x746>x747)/x748));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = 15597;
	int32_t x750 = -1;
	int32_t x752 = INT32_MAX;
	volatile int32_t t181 = 16291;

    t181 = (x749!=((x750>x751)/x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x753 = 79;
	int16_t x754 = INT16_MAX;
	static int64_t x755 = INT64_MIN;
	uint32_t x756 = 13014721U;

    t182 = (x753!=((x754>x755)/x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = INT8_MIN;
	static volatile uint8_t x758 = UINT8_MAX;
	static uint8_t x759 = 16U;
	int64_t x760 = INT64_MIN;
	static volatile int32_t t183 = -2327;

    t183 = (x757!=((x758>x759)/x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x761 = -1;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = -1;
	int32_t x764 = -221;
	int32_t t184 = -127;

    t184 = (x761!=((x762>x763)/x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x765 = UINT16_MAX;
	int16_t x766 = -1;
	int64_t x767 = INT64_MAX;
	uint8_t x768 = 14U;
	int32_t t185 = -232448154;

    t185 = (x765!=((x766>x767)/x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x770 = INT64_MAX;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = INT8_MAX;
	int32_t t186 = -4;

    t186 = (x769!=((x770>x771)/x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x774 = UINT32_MAX;
	int16_t x776 = INT16_MIN;
	static int32_t t187 = 3720175;

    t187 = (x773!=((x774>x775)/x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x778 = 831U;
	int64_t x779 = -149438363LL;
	volatile int32_t t188 = -520762495;

    t188 = (x777!=((x778>x779)/x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = -1;
	uint16_t x783 = 1190U;
	int16_t x784 = -1;
	int32_t t189 = 7944;

    t189 = (x781!=((x782>x783)/x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x785 = UINT32_MAX;
	int8_t x786 = INT8_MIN;
	static uint8_t x787 = UINT8_MAX;
	int32_t t190 = 9;

    t190 = (x785!=((x786>x787)/x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x789 = INT16_MIN;
	uint8_t x790 = 0U;
	uint8_t x791 = 105U;
	uint64_t x792 = UINT64_MAX;
	static volatile int32_t t191 = 991;

    t191 = (x789!=((x790>x791)/x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x793 = -1146;
	int64_t x794 = INT64_MIN;
	volatile uint32_t x795 = 763222101U;
	int64_t x796 = INT64_MIN;
	volatile int32_t t192 = 401775072;

    t192 = (x793!=((x794>x795)/x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x797 = -1;
	uint8_t x798 = 6U;
	uint8_t x799 = 12U;
	static volatile int32_t t193 = -3;

    t193 = (x797!=((x798>x799)/x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x802 = 177U;
	int32_t x803 = INT32_MAX;

    t194 = (x801!=((x802>x803)/x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = INT8_MIN;
	uint8_t x806 = UINT8_MAX;
	volatile int16_t x807 = INT16_MIN;
	volatile int32_t t195 = -7430994;

    t195 = (x805!=((x806>x807)/x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = INT8_MIN;
	int8_t x811 = INT8_MIN;
	volatile int32_t t196 = 91;

    t196 = (x809!=((x810>x811)/x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x813 = INT8_MIN;
	uint64_t x814 = 114434598889127LLU;
	int8_t x815 = INT8_MAX;
	int32_t x816 = -1;
	volatile int32_t t197 = 2633;

    t197 = (x813!=((x814>x815)/x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x817 = -28;
	volatile int16_t x818 = INT16_MIN;
	int64_t x819 = -3125211108LL;
	static int16_t x820 = INT16_MIN;

    t198 = (x817!=((x818>x819)/x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x821 = INT64_MAX;
	volatile int64_t x822 = INT64_MAX;
	static volatile uint64_t x823 = 51654957LLU;
	uint32_t x824 = 143U;
	int32_t t199 = 1908855;

    t199 = (x821!=((x822>x823)/x824));

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

