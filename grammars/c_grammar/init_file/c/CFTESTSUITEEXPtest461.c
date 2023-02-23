
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

static int8_t x2 = -1;
int32_t x5 = 19504717;
uint8_t x6 = 1U;
static int8_t x7 = INT8_MIN;
volatile uint8_t x8 = 54U;
int64_t x13 = INT64_MAX;
static int8_t x16 = INT8_MAX;
static int8_t x22 = 1;
uint32_t x42 = 236858547U;
int8_t x44 = INT8_MIN;
static uint32_t x54 = 114U;
uint32_t x55 = 327879994U;
volatile uint32_t t8 = 1945U;
volatile int32_t x75 = INT32_MAX;
volatile uint32_t x76 = 3024907U;
uint32_t x86 = 7242U;
int64_t x107 = INT64_MIN;
uint32_t x108 = UINT32_MAX;
static volatile uint64_t t17 = 56692743661822LLU;
static int64_t x109 = 1398176003LL;
int64_t t18 = -419915387993415LL;
int32_t x113 = 725585424;
uint64_t t19 = 15759833LLU;
volatile int8_t x117 = -1;
int8_t x119 = -10;
volatile uint32_t x120 = 5239434U;
int8_t x130 = -1;
int16_t x132 = 28;
static uint8_t x133 = UINT8_MAX;
volatile int16_t x136 = -1;
uint32_t t23 = 4U;
int8_t x145 = 26;
int8_t x147 = INT8_MIN;
int32_t x152 = INT32_MIN;
int64_t x156 = -1420583974071968836LL;
static int16_t x160 = 13;
volatile int64_t x173 = INT64_MIN;
volatile uint32_t x174 = UINT32_MAX;
uint8_t x186 = 7U;
volatile int16_t x187 = -1;
static int64_t x188 = INT64_MIN;
static uint32_t x195 = 1992475850U;
volatile uint8_t x209 = 15U;
volatile int32_t t33 = 6;
int64_t x224 = -127682LL;
volatile int64_t t38 = 5422592840LL;
uint16_t x249 = 31931U;
int8_t x254 = -1;
int16_t x255 = INT16_MAX;
int32_t x256 = INT32_MIN;
int32_t t42 = -57299;
static int16_t x257 = INT16_MAX;
static uint16_t x274 = 2U;
int32_t x279 = INT32_MIN;
static int64_t x305 = INT64_MIN;
int8_t x307 = 48;
int64_t x310 = -38LL;
int8_t x316 = -6;
static uint8_t x332 = 8U;
static uint32_t x334 = UINT32_MAX;
int32_t x341 = INT32_MAX;
static int64_t x346 = -1LL;
int16_t x358 = 164;
static uint16_t x359 = 914U;
volatile int32_t x364 = -1;
uint64_t t62 = 46760236LLU;
int8_t x369 = INT8_MIN;
static uint32_t x370 = 375265703U;
uint32_t x372 = UINT32_MAX;
static uint32_t t64 = 13944193U;
uint32_t x388 = UINT32_MAX;
uint8_t x389 = 49U;
static volatile int32_t t67 = -72639;
static int32_t x404 = 37;
uint32_t x415 = UINT32_MAX;
static int16_t x424 = 217;
int64_t x448 = 1LL;
int8_t x457 = -9;
int32_t x460 = INT32_MIN;
volatile int64_t t77 = INT64_MIN;
uint16_t x491 = 229U;
int16_t x492 = -1;
static uint8_t x498 = UINT8_MAX;
volatile uint32_t t81 = UINT32_MAX;
uint16_t x508 = UINT16_MAX;
int8_t x509 = INT8_MIN;
uint8_t x511 = 59U;
int32_t t83 = 23392;
int32_t x527 = INT32_MAX;
uint64_t x534 = 89371791531200710LLU;
uint64_t x543 = 1793837265194LLU;
int32_t x547 = INT32_MIN;
int64_t x556 = -1LL;
uint64_t x559 = UINT64_MAX;
uint64_t t90 = 93705352LLU;
int16_t x562 = INT16_MAX;
volatile uint32_t t93 = UINT32_MAX;
uint16_t x582 = UINT16_MAX;
volatile uint64_t t94 = UINT64_MAX;
int32_t x592 = -37;
volatile int64_t t98 = -1035537277069831LL;
int32_t x613 = INT32_MAX;
static int8_t x620 = 27;
int8_t x625 = INT8_MAX;
uint32_t x626 = 2223081U;
uint64_t x628 = 15LLU;
uint64_t x631 = UINT64_MAX;
volatile int16_t x633 = -1;
static volatile int64_t x642 = 1104618370155454305LL;
int32_t t106 = 6766;
int64_t x653 = 1462439287435602530LL;
int16_t x661 = INT16_MAX;
uint32_t t109 = 99990U;
uint64_t t110 = UINT64_MAX;
uint64_t x676 = 51126426178357553LLU;
uint8_t x679 = 3U;
int16_t x682 = INT16_MIN;
int16_t x684 = -1;
volatile uint64_t x699 = 230837630994LLU;
volatile uint64_t t116 = 3237741626511013LLU;
int32_t x704 = INT32_MIN;
volatile int8_t x705 = INT8_MIN;
volatile int32_t x718 = -1;
uint8_t x725 = 0U;
static uint16_t x726 = 4688U;
volatile int32_t t123 = 97131;
uint8_t x739 = 101U;
static int16_t x740 = -1;
int8_t x776 = INT8_MIN;
volatile int64_t t129 = -36776783LL;
static volatile uint32_t x779 = 194U;
static uint64_t x798 = 36749623974LLU;
volatile int64_t x805 = INT64_MIN;
uint32_t x806 = UINT32_MAX;
uint64_t x815 = UINT64_MAX;
volatile uint64_t t134 = 1206269555996901LLU;
uint8_t x819 = 1U;
int8_t x823 = -1;
uint64_t t137 = 37393985557386LLU;
int64_t x833 = 72075538050876LL;
volatile uint64_t t139 = 507LLU;
int64_t t140 = 0LL;
int64_t x844 = -1LL;
volatile uint64_t x850 = 351LLU;
uint16_t x852 = UINT16_MAX;
int64_t x856 = -1LL;
int8_t x860 = INT8_MIN;
static int32_t x861 = -1;
static uint32_t x863 = 602235U;
uint64_t x872 = 10102210998345496LLU;
uint8_t x875 = 78U;
int32_t t148 = 88;
static int32_t x877 = -4240;
int32_t x882 = 22376081;
uint16_t x887 = 27393U;
volatile int32_t t151 = -107;
int16_t x889 = 4710;
uint8_t x891 = 30U;
uint32_t x893 = 3U;
int32_t x900 = INT32_MIN;
int64_t t154 = 64176558502LL;
int16_t x904 = INT16_MAX;
uint16_t x914 = UINT16_MAX;
uint64_t t158 = 3239803840056681206LLU;
static int16_t x936 = -1;
volatile uint64_t t160 = 45101825611LLU;
uint64_t x941 = 0LLU;
volatile int16_t x942 = 16;
int32_t x943 = 2;
int32_t x944 = INT32_MIN;
int8_t x945 = -1;
volatile int16_t x946 = 3270;
volatile int64_t x948 = INT64_MAX;
int16_t x953 = 0;
static int16_t x955 = -1;
int16_t x956 = 135;
static int8_t x960 = -1;
volatile int32_t t165 = -116739241;
volatile int64_t x962 = -1LL;
volatile uint32_t x981 = 1256126U;
uint16_t x984 = 6U;
static int16_t x989 = INT16_MIN;
uint32_t x997 = 476008U;
int32_t x998 = -1;
uint64_t t173 = 2645799233270631LLU;
volatile uint16_t x1004 = UINT16_MAX;
static uint16_t x1019 = 11U;
volatile uint32_t x1023 = UINT32_MAX;
uint64_t t180 = 5051LLU;
int64_t x1042 = 0LL;
volatile int16_t x1046 = -250;
int32_t x1047 = -84;
static uint8_t x1050 = 65U;
int64_t x1053 = -2389048LL;
volatile int8_t x1057 = -1;
static uint8_t x1061 = 17U;
static int8_t x1062 = 1;
uint64_t x1063 = 11973912LLU;
volatile int8_t x1067 = 47;
volatile uint64_t t188 = 2886LLU;
volatile uint32_t t189 = 2711546U;
uint16_t x1083 = 0U;
uint64_t t190 = 1929239LLU;
volatile uint16_t x1094 = 60U;
uint16_t x1099 = 1366U;
volatile uint64_t x1100 = UINT64_MAX;
uint64_t t193 = 26LLU;
int16_t x1114 = -1031;
static int64_t x1115 = -1LL;
volatile uint8_t x1123 = 7U;


void f0(void) {
    	volatile uint16_t x1 = 20U;
	static int32_t x3 = INT32_MAX;
	static volatile int64_t x4 = INT64_MIN;
	static int64_t t0 = -6675245479436484LL;

    t0 = (x1|((x2*x3)%x4));

    if (t0 != -2147483627LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t t1 = -726165;

    t1 = (x5|((x6*x7)%x8));

    if (t1 != -19) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x14 = 16;
	uint16_t x15 = UINT16_MAX;
	static int64_t t2 = INT64_MAX;

    t2 = (x13|((x14*x15)%x16));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 32170U;
	volatile uint32_t x18 = UINT32_MAX;
	int8_t x19 = -50;
	volatile uint16_t x20 = 22U;
	uint32_t t3 = 396U;

    t3 = (x17|((x18*x19)%x20));

    if (t3 != 32174U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	volatile int8_t x23 = 56;
	uint16_t x24 = 65U;
	volatile int32_t t4 = -28;

    t4 = (x21|((x22*x23)%x24));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x33 = INT8_MIN;
	static uint16_t x34 = 6341U;
	int8_t x35 = INT8_MIN;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t5 = 1211919980550498348LLU;

    t5 = (x33|((x34*x35)%x36));

    if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x41 = -77082;
	int32_t x43 = 73;
	volatile uint32_t t6 = 432U;

    t6 = (x41|((x42*x43)%x44));

    if (t6 != 4294901743U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x49 = -627304450678911LL;
	int16_t x50 = -34;
	uint32_t x51 = UINT32_MAX;
	volatile int8_t x52 = -1;
	volatile int64_t t7 = 18034363156959237LL;

    t7 = (x49|((x50*x51)%x52));

    if (t7 != -627304450678877LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x53 = INT32_MIN;
	static int16_t x56 = -1;

    t8 = (x53|((x54*x55)%x56));

    if (t8 != 3018580948U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = 7;
	volatile int8_t x58 = INT8_MAX;
	uint8_t x59 = 0U;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t9 = 15;

    t9 = (x57|((x58*x59)%x60));

    if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x73 = -2;
	uint32_t x74 = UINT32_MAX;
	uint32_t t10 = 69U;

    t10 = (x73|((x74*x75)%x76));

    if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x77 = -1;
	int32_t x78 = 21;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = 5;
	uint64_t t11 = UINT64_MAX;

    t11 = (x77|((x78*x79)%x80));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x81 = 581189291772197LLU;
	static uint64_t x82 = 975LLU;
	static volatile int32_t x83 = 1461483;
	uint16_t x84 = UINT16_MAX;
	uint64_t t12 = 1390084147216365277LLU;

    t12 = (x81|((x82*x83)%x84));

    if (t12 != 581189291790325LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x85 = 1U;
	static int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t13 = 39LLU;

    t13 = (x85|((x86*x87)%x88));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x89 = INT8_MAX;
	static int8_t x90 = 1;
	int32_t x91 = -1;
	static int32_t x92 = 940;
	static volatile int32_t t14 = -176;

    t14 = (x89|((x90*x91)%x92));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x93 = 22219651LLU;
	int8_t x94 = 0;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t15 = 89810864409292LLU;

    t15 = (x93|((x94*x95)%x96));

    if (t15 != 22219651LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x101 = INT32_MIN;
	int32_t x102 = -2;
	volatile int8_t x103 = 13;
	int32_t x104 = INT32_MIN;
	static int32_t t16 = 489;

    t16 = (x101|((x102*x103)%x104));

    if (t16 != -26) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x105 = UINT32_MAX;
	uint64_t x106 = UINT64_MAX;

    t17 = (x105|((x106*x107)%x108));

    if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x110 = -1;
	static uint8_t x111 = 30U;
	int32_t x112 = INT32_MIN;

    t18 = (x109|((x110*x111)%x112));

    if (t18 != -29LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x114 = UINT8_MAX;
	volatile uint64_t x115 = 3441764957963361LLU;
	static volatile int8_t x116 = 5;

    t19 = (x113|((x114*x115)%x116));

    if (t19 != 725585424LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x118 = 2299U;
	uint32_t t20 = UINT32_MAX;

    t20 = (x117|((x118*x119)%x120));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x129 = 120LL;
	int8_t x131 = -50;
	static int64_t t21 = 35170752480068LL;

    t21 = (x129|((x130*x131)%x132));

    if (t21 != 126LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x134 = 91U;
	volatile int64_t x135 = 212263686172LL;
	static volatile int64_t t22 = 2367750254276LL;

    t22 = (x133|((x134*x135)%x136));

    if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x141 = 1289860U;
	int16_t x142 = -5324;
	static uint16_t x143 = UINT16_MAX;
	int16_t x144 = -1;

    t23 = (x141|((x142*x143)%x144));

    if (t23 != 1289860U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x146 = -7;
	int64_t x148 = -1LL;
	int64_t t24 = 606846414LL;

    t24 = (x145|((x146*x147)%x148));

    if (t24 != 26LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x149 = UINT16_MAX;
	volatile int8_t x150 = -60;
	uint8_t x151 = 12U;
	volatile int32_t t25 = -33;

    t25 = (x149|((x150*x151)%x152));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	int64_t t26 = 23155LL;

    t26 = (x153|((x154*x155)%x156));

    if (t26 != 33023LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x157 = -1LL;
	static int64_t x158 = INT64_MAX;
	static int64_t x159 = -1LL;
	volatile int64_t t27 = 64478777LL;

    t27 = (x157|((x158*x159)%x160));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	uint32_t x171 = 999262739U;
	int16_t x172 = -1;
	uint32_t t28 = 289083U;

    t28 = (x169|((x170*x171)%x172));

    if (t28 != 3556411629U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x175 = -1;
	int64_t x176 = INT64_MAX;
	int64_t t29 = 39LL;

    t29 = (x173|((x174*x175)%x176));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x185 = -1;
	volatile int64_t t30 = 59938580LL;

    t30 = (x185|((x186*x187)%x188));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x193 = 0;
	uint64_t x194 = 45417558LLU;
	volatile int32_t x196 = INT32_MIN;
	static volatile uint64_t t31 = 18980773517447LLU;

    t31 = (x193|((x194*x195)%x196));

    if (t31 != 90493387480974300LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x201 = 619131U;
	volatile int8_t x202 = 25;
	static int16_t x203 = -1;
	uint32_t x204 = 31829163U;
	uint32_t t32 = 36U;

    t32 = (x201|((x202*x203)%x204));

    if (t32 != 30408319U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x210 = -1;
	int8_t x211 = 7;
	uint16_t x212 = 505U;

    t33 = (x209|((x210*x211)%x212));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MAX;
	int64_t t34 = 128LL;

    t34 = (x213|((x214*x215)%x216));

    if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x217 = 245U;
	int8_t x218 = -1;
	int64_t x219 = -121LL;
	int32_t x220 = INT32_MAX;
	volatile int64_t t35 = 9388208586775LL;

    t35 = (x217|((x218*x219)%x220));

    if (t35 != 253LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x221 = UINT16_MAX;
	static uint16_t x222 = UINT16_MAX;
	volatile uint16_t x223 = 1745U;
	volatile int64_t t36 = -42062LL;

    t36 = (x221|((x222*x223)%x224));

    if (t36 != 131071LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x225 = 3U;
	static uint16_t x226 = UINT16_MAX;
	int8_t x227 = -1;
	int8_t x228 = -7;
	int32_t t37 = 1;

    t37 = (x225|((x226*x227)%x228));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	static volatile int16_t x235 = -1;
	volatile int8_t x236 = INT8_MIN;

    t38 = (x233|((x234*x235)%x236));

    if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x237 = INT32_MIN;
	volatile uint8_t x238 = 0U;
	uint64_t x239 = 2036890668356LLU;
	int32_t x240 = -1;
	uint64_t t39 = 13LLU;

    t39 = (x237|((x238*x239)%x240));

    if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x241 = UINT64_MAX;
	int16_t x242 = -458;
	int64_t x243 = -569539452879041LL;
	int64_t x244 = INT64_MIN;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x241|((x242*x243)%x244));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x250 = -1LL;
	int8_t x251 = INT8_MAX;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t41 = -105633858LL;

    t41 = (x249|((x250*x251)%x252));

    if (t41 != -69LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x253 = INT32_MIN;

    t42 = (x253|((x254*x255)%x256));

    if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x258 = INT64_MAX;
	int64_t x259 = -1LL;
	int64_t x260 = INT64_MAX;
	int64_t t43 = -545LL;

    t43 = (x257|((x258*x259)%x260));

    if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = INT32_MIN;
	static int32_t x262 = -642;
	uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 6165174U;
	volatile uint32_t t44 = 3121U;

    t44 = (x261|((x262*x263)%x264));

    if (t44 != 2152572588U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x273 = -1813;
	int16_t x275 = INT16_MIN;
	static uint8_t x276 = 36U;
	volatile int32_t t45 = 22;

    t45 = (x273|((x274*x275)%x276));

    if (t45 != -5) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x277 = -19;
	volatile uint32_t x278 = 1194501046U;
	volatile int64_t x280 = INT64_MAX;
	int64_t t46 = -124LL;

    t46 = (x277|((x278*x279)%x280));

    if (t46 != -19LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = 5134273U;
	static uint8_t x284 = UINT8_MAX;
	uint32_t t47 = 21225909U;

    t47 = (x281|((x282*x283)%x284));

    if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x289 = 1659;
	static int64_t x290 = INT64_MIN;
	int64_t x291 = 0LL;
	int8_t x292 = INT8_MIN;
	int64_t t48 = -41028067963951LL;

    t48 = (x289|((x290*x291)%x292));

    if (t48 != 1659LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = 0;
	static uint32_t x299 = 1805U;
	int8_t x300 = -1;
	uint32_t t49 = 7351986U;

    t49 = (x297|((x298*x299)%x300));

    if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x301 = -2017975249991347LL;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -1LL;
	static int8_t x304 = 12;
	volatile int64_t t50 = 54LL;

    t50 = (x301|((x302*x303)%x304));

    if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x306 = INT16_MIN;
	int32_t x308 = INT32_MIN;
	int64_t t51 = -6722920480LL;

    t51 = (x305|((x306*x307)%x308));

    if (t51 != -1572864LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x309 = INT16_MAX;
	static volatile uint8_t x311 = UINT8_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int64_t t52 = 604605176118LL;

    t52 = (x309|((x310*x311)%x312));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 3343838412435LLU;
	uint64_t t53 = UINT64_MAX;

    t53 = (x313|((x314*x315)%x316));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x321 = INT8_MAX;
	static int8_t x322 = 7;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t54 = 966977052903LL;

    t54 = (x321|((x322*x323)%x324));

    if (t54 != -229249LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x329 = 527;
	int16_t x330 = -58;
	volatile uint16_t x331 = 127U;
	volatile int32_t t55 = -3;

    t55 = (x329|((x330*x331)%x332));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x333 = -1;
	static uint64_t x335 = 27583LLU;
	int8_t x336 = -24;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (x333|((x334*x335)%x336));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x342 = -1;
	int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t57 = -127568898;

    t57 = (x341|((x342*x343)%x344));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x345 = -1;
	static volatile uint64_t x347 = 20360LLU;
	int64_t x348 = INT64_MIN;
	uint64_t t58 = UINT64_MAX;

    t58 = (x345|((x346*x347)%x348));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x349 = 11480;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 167U;
	int64_t x352 = INT64_MAX;
	volatile int64_t t59 = 63LL;

    t59 = (x349|((x350*x351)%x352));

    if (t59 != 4294967257LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x353 = 7U;
	int16_t x354 = INT16_MAX;
	volatile int8_t x355 = -1;
	static volatile int8_t x356 = INT8_MIN;
	volatile int32_t t60 = -420;

    t60 = (x353|((x354*x355)%x356));

    if (t60 != -121) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x357 = UINT16_MAX;
	int8_t x360 = -1;
	volatile int32_t t61 = 26331;

    t61 = (x357|((x358*x359)%x360));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x361 = 30LLU;
	volatile int16_t x362 = 472;
	static uint32_t x363 = 911U;

    t62 = (x361|((x362*x363)%x364));

    if (t62 != 430014LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x365 = 0U;
	uint64_t x366 = UINT64_MAX;
	static volatile uint8_t x367 = 1U;
	volatile int32_t x368 = INT32_MAX;
	static uint64_t t63 = 211427136404007LLU;

    t63 = (x365|((x366*x367)%x368));

    if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x371 = INT32_MIN;

    t64 = (x369|((x370*x371)%x372));

    if (t64 != 4294967168U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x381 = 44766640938145885LLU;
	static volatile int8_t x382 = INT8_MAX;
	static int8_t x383 = 0;
	int16_t x384 = -1;
	uint64_t t65 = 3345LLU;

    t65 = (x381|((x382*x383)%x384));

    if (t65 != 44766640938145885LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MAX;
	int16_t x387 = 3153;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (x385|((x386*x387)%x388));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x390 = 5U;
	int16_t x391 = -1;
	int16_t x392 = -1;

    t67 = (x389|((x390*x391)%x392));

    if (t67 != 49) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x393 = 108U;
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = INT16_MIN;
	int16_t x396 = -3;
	static int32_t t68 = 539640;

    t68 = (x393|((x394*x395)%x396));

    if (t68 != 109) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 3U;
	uint8_t x403 = UINT8_MAX;
	int32_t t69 = -6710;

    t69 = (x401|((x402*x403)%x404));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x413 = 15249521421462LLU;
	int32_t x414 = 3686291;
	uint32_t x416 = UINT32_MAX;
	volatile uint64_t t70 = 9974LLU;

    t70 = (x413|((x414*x415)%x416));

    if (t70 != 15251425717503LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x417 = INT64_MAX;
	volatile uint16_t x418 = 0U;
	static uint64_t x419 = UINT64_MAX;
	static uint32_t x420 = 254546U;
	volatile uint64_t t71 = 1LLU;

    t71 = (x417|((x418*x419)%x420));

    if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x421 = 109107898U;
	uint64_t x422 = 21902930LLU;
	static int64_t x423 = INT64_MIN;
	uint64_t t72 = 33087867692586LLU;

    t72 = (x421|((x422*x423)%x424));

    if (t72 != 109107898LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x425 = -3049;
	static int32_t x426 = -1;
	uint8_t x427 = 38U;
	uint8_t x428 = 121U;
	int32_t t73 = -1;

    t73 = (x425|((x426*x427)%x428));

    if (t73 != -33) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x437 = 19U;
	int32_t x438 = -490153;
	int64_t x439 = 918856263851LL;
	int8_t x440 = 46;
	volatile int64_t t74 = 49570348116LL;

    t74 = (x437|((x438*x439)%x440));

    if (t74 != -5LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x445 = 310338465LLU;
	volatile uint32_t x446 = 142089U;
	int8_t x447 = INT8_MAX;
	static uint64_t t75 = 2243628629751667815LLU;

    t75 = (x445|((x446*x447)%x448));

    if (t75 != 310338465LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x458 = 26615LLU;
	int64_t x459 = 227738637825766584LL;
	static uint64_t t76 = UINT64_MAX;

    t76 = (x457|((x458*x459)%x460));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MAX;
	static int16_t x467 = -1;
	static int8_t x468 = -1;

    t77 = (x465|((x466*x467)%x468));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x469 = INT16_MIN;
	int64_t x470 = -55181368956845LL;
	static int16_t x471 = 18;
	static uint32_t x472 = 5802642U;
	int64_t t78 = 1039786617907LL;

    t78 = (x469|((x470*x471)%x472));

    if (t78 != -31244LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x477 = -47;
	int8_t x478 = -14;
	uint32_t x479 = 69554640U;
	int8_t x480 = -1;
	uint32_t t79 = 5068U;

    t79 = (x477|((x478*x479)%x480));

    if (t79 != 4294967281U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x489 = 1603323568770999LLU;
	uint16_t x490 = 88U;
	volatile uint64_t t80 = 533767785LLU;

    t80 = (x489|((x490*x491)%x492));

    if (t80 != 1603323568770999LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x497 = -1;
	static uint32_t x499 = 28U;
	int16_t x500 = INT16_MIN;

    t81 = (x497|((x498*x499)%x500));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x505 = -16663014521394185LL;
	uint64_t x506 = 520668757LLU;
	volatile int16_t x507 = -237;
	static uint64_t t82 = 84035LLU;

    t82 = (x505|((x506*x507)%x508));

    if (t82 != 18430081059188157431LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x510 = -27081342;
	uint16_t x512 = 49U;

    t83 = (x509|((x510*x511)%x512));

    if (t83 != -24) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x521 = 3U;
	uint64_t x522 = 182114660757LLU;
	volatile uint64_t x523 = 256305188400372LLU;
	int32_t x524 = INT32_MAX;
	volatile uint64_t t84 = 6688488048LLU;

    t84 = (x521|((x522*x523)%x524));

    if (t84 != 1956727519LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x525 = -1LL;
	uint32_t x526 = 0U;
	static volatile int32_t x528 = INT32_MIN;
	volatile int64_t t85 = -247369099661LL;

    t85 = (x525|((x526*x527)%x528));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x535 = -1;
	uint64_t x536 = 7302LLU;
	uint64_t t86 = 3391LLU;

    t86 = (x533|((x534*x535)%x536));

    if (t86 != 4991LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x541 = -8607;
	int32_t x542 = -1;
	int16_t x544 = INT16_MIN;
	volatile uint64_t t87 = 1218418568062LLU;

    t87 = (x541|((x542*x543)%x544));

    if (t87 != 18446744073709543159LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x545 = INT8_MAX;
	uint32_t x546 = UINT32_MAX;
	int16_t x548 = -246;
	volatile uint32_t t88 = 6U;

    t88 = (x545|((x546*x547)%x548));

    if (t88 != 2147483775U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x553 = -1LL;
	int64_t x554 = -1LL;
	int32_t x555 = -1;
	volatile int64_t t89 = 3440915376LL;

    t89 = (x553|((x554*x555)%x556));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x557 = INT64_MIN;
	static volatile int8_t x558 = -1;
	int64_t x560 = -1LL;

    t90 = (x557|((x558*x559)%x560));

    if (t90 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x561 = 0;
	int32_t x563 = -1;
	volatile int64_t x564 = INT64_MAX;
	volatile int64_t t91 = 377729886LL;

    t91 = (x561|((x562*x563)%x564));

    if (t91 != -32767LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MAX;
	static int16_t x571 = INT16_MIN;
	uint32_t x572 = 8247U;
	static volatile uint32_t t92 = 78U;

    t92 = (x569|((x570*x571)%x572));

    if (t92 != 4294941646U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	static volatile uint16_t x578 = 1U;
	int16_t x579 = INT16_MIN;
	int8_t x580 = 1;

    t93 = (x577|((x578*x579)%x580));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x581 = UINT64_MAX;
	volatile int8_t x583 = INT8_MIN;
	int16_t x584 = -1;

    t94 = (x581|((x582*x583)%x584));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x589 = 0U;
	int32_t x590 = INT32_MIN;
	uint32_t x591 = 1047587908U;
	uint32_t t95 = 126272610U;

    t95 = (x589|((x590*x591)%x592));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x593 = 2U;
	static uint64_t x594 = 2201932142168317699LLU;
	int8_t x595 = INT8_MAX;
	uint16_t x596 = 32U;
	uint64_t t96 = 104909904166487LLU;

    t96 = (x593|((x594*x595)%x596));

    if (t96 != 31LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x597 = 181287U;
	uint64_t x598 = 354421LLU;
	uint64_t x599 = 387646034307LLU;
	static uint8_t x600 = UINT8_MAX;
	uint64_t t97 = 360353LLU;

    t97 = (x597|((x598*x599)%x600));

    if (t97 != 181503LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MAX;
	static volatile uint16_t x603 = 118U;
	static int8_t x604 = INT8_MIN;

    t98 = (x601|((x602*x603)%x604));

    if (t98 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x614 = 1357252712670LLU;
	volatile uint16_t x615 = UINT16_MAX;
	uint8_t x616 = UINT8_MAX;
	volatile uint64_t t99 = 118LLU;

    t99 = (x613|((x614*x615)%x616));

    if (t99 != 2147483647LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	int8_t x618 = -1;
	int8_t x619 = INT8_MAX;
	volatile int32_t t100 = -65501989;

    t100 = (x617|((x618*x619)%x620));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x627 = INT16_MIN;
	volatile uint64_t t101 = 335709684394328111LLU;

    t101 = (x625|((x626*x627)%x628));

    if (t101 != 127LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x629 = INT32_MIN;
	volatile int32_t x630 = 1446;
	uint32_t x632 = 3U;
	uint64_t t102 = 134LLU;

    t102 = (x629|((x630*x631)%x632));

    if (t102 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x634 = UINT64_MAX;
	static int8_t x635 = -1;
	int8_t x636 = -1;
	uint64_t t103 = UINT64_MAX;

    t103 = (x633|((x634*x635)%x636));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x637 = INT32_MAX;
	int16_t x638 = -1;
	static int16_t x639 = INT16_MIN;
	static int64_t x640 = INT64_MIN;
	static volatile int64_t t104 = -2519203LL;

    t104 = (x637|((x638*x639)%x640));

    if (t104 != 2147483647LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x641 = 438LLU;
	uint8_t x643 = 3U;
	int8_t x644 = -1;
	volatile uint64_t t105 = 797352LLU;

    t105 = (x641|((x642*x643)%x644));

    if (t105 != 438LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x645 = -1;
	int32_t x646 = -1;
	int8_t x647 = INT8_MAX;
	int8_t x648 = INT8_MAX;

    t106 = (x645|((x646*x647)%x648));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x649 = INT64_MAX;
	static uint64_t x650 = UINT64_MAX;
	int8_t x651 = INT8_MIN;
	int64_t x652 = INT64_MIN;
	volatile uint64_t t107 = 3585458520848094919LLU;

    t107 = (x649|((x650*x651)%x652));

    if (t107 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x654 = INT16_MAX;
	volatile int8_t x655 = 1;
	int64_t x656 = -1LL;
	volatile int64_t t108 = 130648801183700LL;

    t108 = (x653|((x654*x655)%x656));

    if (t108 != 1462439287435602530LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x662 = INT16_MIN;
	static volatile uint32_t x663 = UINT32_MAX;
	uint16_t x664 = UINT16_MAX;

    t109 = (x661|((x662*x663)%x664));

    if (t109 != 65535U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x669 = -1;
	volatile uint64_t x670 = 17688601481150LLU;
	uint64_t x671 = 47183809181LLU;
	static int16_t x672 = INT16_MIN;

    t110 = (x669|((x670*x671)%x672));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x673 = INT64_MAX;
	uint64_t x674 = 0LLU;
	int8_t x675 = 9;
	volatile uint64_t t111 = 1403601074082296LLU;

    t111 = (x673|((x674*x675)%x676));

    if (t111 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MAX;
	int16_t x680 = INT16_MAX;
	int32_t t112 = 19360132;

    t112 = (x677|((x678*x679)%x680));

    if (t112 != -32387) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x681 = 11U;
	volatile int64_t x683 = -1LL;
	int64_t t113 = 16680301493659LL;

    t113 = (x681|((x682*x683)%x684));

    if (t113 != 11LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x685 = 29736U;
	static int8_t x686 = -1;
	static int8_t x687 = -2;
	static int8_t x688 = -2;
	volatile uint32_t t114 = 94899595U;

    t114 = (x685|((x686*x687)%x688));

    if (t114 != 29736U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x693 = -1;
	volatile uint64_t x694 = UINT64_MAX;
	volatile int8_t x695 = INT8_MAX;
	uint8_t x696 = UINT8_MAX;
	uint64_t t115 = UINT64_MAX;

    t115 = (x693|((x694*x695)%x696));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x697 = 8U;
	int8_t x698 = INT8_MIN;
	int32_t x700 = INT32_MAX;

    t116 = (x697|((x698*x699)%x700));

    if (t116 != 10731853LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x701 = INT64_MAX;
	int8_t x702 = 1;
	int32_t x703 = -1;
	static volatile int64_t t117 = -26538774LL;

    t117 = (x701|((x702*x703)%x704));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x706 = 33;
	volatile int64_t x707 = 48507LL;
	static volatile int8_t x708 = 4;
	volatile int64_t t118 = 3439953648LL;

    t118 = (x705|((x706*x707)%x708));

    if (t118 != -125LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x709 = UINT16_MAX;
	int8_t x710 = -1;
	uint32_t x711 = 1044346U;
	uint32_t x712 = 5886U;
	uint32_t t119 = 0U;

    t119 = (x709|((x710*x711)%x712));

    if (t119 != 65535U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x713 = 78409LLU;
	volatile uint32_t x714 = UINT32_MAX;
	volatile int8_t x715 = -3;
	static uint16_t x716 = 4776U;
	volatile uint64_t t120 = 7074LLU;

    t120 = (x713|((x714*x715)%x716));

    if (t120 != 78411LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x717 = -27LL;
	uint16_t x719 = 27005U;
	int32_t x720 = INT32_MIN;
	volatile int64_t t121 = 98901LL;

    t121 = (x717|((x718*x719)%x720));

    if (t121 != -25LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x727 = 1048349614500740481LLU;
	uint16_t x728 = 229U;
	volatile uint64_t t122 = 2990925LLU;

    t122 = (x725|((x726*x727)%x728));

    if (t122 != 35LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x733 = -7388350;
	volatile int8_t x734 = INT8_MIN;
	uint16_t x735 = UINT16_MAX;
	static uint16_t x736 = UINT16_MAX;

    t123 = (x733|((x734*x735)%x736));

    if (t123 != -7388350) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x737 = UINT64_MAX;
	int16_t x738 = -1;
	uint64_t t124 = UINT64_MAX;

    t124 = (x737|((x738*x739)%x740));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x741 = -13;
	uint32_t x742 = 13153322U;
	volatile uint16_t x743 = UINT16_MAX;
	static int64_t x744 = INT64_MIN;
	int64_t t125 = 31947596418LL;

    t125 = (x741|((x742*x743)%x744));

    if (t125 != -9LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x757 = INT16_MIN;
	static int16_t x758 = -1000;
	int64_t x759 = -1LL;
	static volatile int64_t x760 = -1LL;
	int64_t t126 = -549322193050267964LL;

    t126 = (x757|((x758*x759)%x760));

    if (t126 != -32768LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x761 = INT16_MIN;
	volatile int16_t x762 = INT16_MIN;
	uint16_t x763 = UINT16_MAX;
	volatile int16_t x764 = INT16_MIN;
	int32_t t127 = -242155;

    t127 = (x761|((x762*x763)%x764));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x765 = UINT64_MAX;
	static int16_t x766 = INT16_MIN;
	static int64_t x767 = 1LL;
	int64_t x768 = -1LL;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x765|((x766*x767)%x768));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MAX;
	int32_t x775 = 1;

    t129 = (x773|((x774*x775)%x776));

    if (t129 != -2147483521LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x777 = -1;
	volatile int16_t x778 = INT16_MIN;
	int8_t x780 = -1;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = (x777|((x778*x779)%x780));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x799 = INT8_MIN;
	int16_t x800 = INT16_MIN;
	volatile uint64_t t131 = 12536504003390753LLU;

    t131 = (x797|((x798*x799)%x800));

    if (t131 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x807 = 16U;
	volatile int32_t x808 = INT32_MIN;
	volatile int64_t t132 = 173672139096049LL;

    t132 = (x805|((x806*x807)%x808));

    if (t132 != -9223372034707292176LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x809 = INT8_MIN;
	int32_t x810 = INT32_MAX;
	uint8_t x811 = 1U;
	uint64_t x812 = 17854210336LLU;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (x809|((x810*x811)%x812));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x813 = INT32_MAX;
	int8_t x814 = -63;
	static int64_t x816 = INT64_MIN;

    t134 = (x813|((x814*x815)%x816));

    if (t134 != 2147483647LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x817 = 5532;
	uint8_t x818 = UINT8_MAX;
	uint8_t x820 = 12U;
	int32_t t135 = 46839;

    t135 = (x817|((x818*x819)%x820));

    if (t135 != 5535) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x821 = INT32_MAX;
	static uint8_t x822 = 105U;
	int8_t x824 = INT8_MIN;
	int32_t t136 = 87641;

    t136 = (x821|((x822*x823)%x824));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x825 = -5;
	int32_t x826 = 239;
	uint64_t x827 = 171164LLU;
	int32_t x828 = 2;

    t137 = (x825|((x826*x827)%x828));

    if (t137 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x829 = INT8_MAX;
	int8_t x830 = INT8_MIN;
	volatile int64_t x831 = -1LL;
	uint32_t x832 = 289217U;
	int64_t t138 = -2LL;

    t138 = (x829|((x830*x831)%x832));

    if (t138 != 255LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x834 = INT16_MIN;
	volatile int32_t x835 = -1;
	static uint64_t x836 = 2547376475069498199LLU;

    t139 = (x833|((x834*x835)%x836));

    if (t139 != 72075538050876LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x837 = INT64_MIN;
	volatile int64_t x838 = -1LL;
	uint8_t x839 = UINT8_MAX;
	int64_t x840 = INT64_MAX;

    t140 = (x837|((x838*x839)%x840));

    if (t140 != -255LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x841 = 372922LLU;
	int16_t x842 = INT16_MAX;
	static int32_t x843 = -1;
	volatile uint64_t t141 = 59315304758450632LLU;

    t141 = (x841|((x842*x843)%x844));

    if (t141 != 372922LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x849 = 7241;
	static uint32_t x851 = 53U;
	volatile uint64_t t142 = 116160510LLU;

    t142 = (x849|((x850*x851)%x852));

    if (t142 != 23787LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x853 = UINT32_MAX;
	int8_t x854 = INT8_MIN;
	volatile int8_t x855 = 6;
	int64_t t143 = 1762184996LL;

    t143 = (x853|((x854*x855)%x856));

    if (t143 != 4294967295LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x857 = INT16_MAX;
	uint32_t x858 = 1505038U;
	int16_t x859 = -1;
	static uint32_t t144 = 64137U;

    t144 = (x857|((x858*x859)%x860));

    if (t144 != 4293492735U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x862 = INT8_MIN;
	int32_t x864 = INT32_MIN;
	volatile uint32_t t145 = UINT32_MAX;

    t145 = (x861|((x862*x863)%x864));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x865 = INT8_MIN;
	int16_t x866 = INT16_MIN;
	int16_t x867 = 59;
	int8_t x868 = 5;
	volatile int32_t t146 = 40906;

    t146 = (x865|((x866*x867)%x868));

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x869 = -1;
	int64_t x870 = INT64_MAX;
	uint64_t x871 = 1586357258LLU;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = (x869|((x870*x871)%x872));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x873 = 1;
	int16_t x874 = INT16_MIN;
	static int16_t x876 = -8;

    t148 = (x873|((x874*x875)%x876));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x878 = INT8_MIN;
	int8_t x879 = -2;
	int32_t x880 = INT32_MAX;
	int32_t t149 = 76947374;

    t149 = (x877|((x878*x879)%x880));

    if (t149 != -4240) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x881 = INT64_MAX;
	uint32_t x883 = 77040U;
	int8_t x884 = -1;
	static volatile int64_t t150 = INT64_MAX;

    t150 = (x881|((x882*x883)%x884));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x885 = 1;
	int16_t x886 = -1744;
	int32_t x888 = INT32_MAX;

    t151 = (x885|((x886*x887)%x888));

    if (t151 != -47773391) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x890 = -1LL;
	static int64_t x892 = INT64_MIN;
	volatile int64_t t152 = 1534903370959LL;

    t152 = (x889|((x890*x891)%x892));

    if (t152 != -26LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x894 = INT16_MIN;
	int8_t x895 = 21;
	static int16_t x896 = INT16_MIN;
	volatile uint32_t t153 = 716327938U;

    t153 = (x893|((x894*x895)%x896));

    if (t153 != 3U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x897 = 588LL;
	static int16_t x898 = INT16_MAX;
	int32_t x899 = 22;

    t154 = (x897|((x898*x899)%x900));

    if (t154 != 720878LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x901 = UINT8_MAX;
	int64_t x902 = 2085574027854LL;
	static int8_t x903 = INT8_MIN;
	static int64_t t155 = 22801699310432841LL;

    t155 = (x901|((x902*x903)%x904));

    if (t155 != -22529LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x909 = -3;
	uint8_t x910 = UINT8_MAX;
	static volatile uint16_t x911 = UINT16_MAX;
	volatile int64_t x912 = 1915875LL;
	static volatile int64_t t156 = 34081986982LL;

    t156 = (x909|((x910*x911)%x912));

    if (t156 != -3LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x913 = -3770419277LL;
	uint64_t x915 = 4165154266911229336LLU;
	int32_t x916 = 65;
	volatile uint64_t t157 = 86413697969LLU;

    t157 = (x913|((x914*x915)%x916));

    if (t157 != 18446744069939132343LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x917 = 35518649LLU;
	int16_t x918 = -1;
	int32_t x919 = -1;
	static int32_t x920 = 248293;

    t158 = (x917|((x918*x919)%x920));

    if (t158 != 35518649LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x929 = INT32_MAX;
	static uint32_t x930 = 3U;
	int8_t x931 = INT8_MAX;
	int8_t x932 = -1;
	volatile uint32_t t159 = 1132716979U;

    t159 = (x929|((x930*x931)%x932));

    if (t159 != 2147483647U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x933 = INT64_MIN;
	uint64_t x934 = UINT64_MAX;
	static int64_t x935 = INT64_MIN;

    t160 = (x933|((x934*x935)%x936));

    if (t160 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x937 = UINT32_MAX;
	static volatile int64_t x938 = -1LL;
	uint32_t x939 = 272317857U;
	int8_t x940 = 61;
	int64_t t161 = -10788367450229768LL;

    t161 = (x937|((x938*x939)%x940));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t t162 = 119090LLU;

    t162 = (x941|((x942*x943)%x944));

    if (t162 != 32LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x947 = UINT32_MAX;
	volatile int64_t t163 = 4003789831031328LL;

    t163 = (x945|((x946*x947)%x948));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x954 = INT8_MAX;
	static volatile int32_t t164 = 277;

    t164 = (x953|((x954*x955)%x956));

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x957 = 9U;
	volatile int16_t x958 = INT16_MIN;
	volatile int8_t x959 = -1;

    t165 = (x957|((x958*x959)%x960));

    if (t165 != 9) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x961 = UINT64_MAX;
	int32_t x963 = INT32_MIN;
	volatile uint64_t x964 = 347888300LLU;
	volatile uint64_t t166 = UINT64_MAX;

    t166 = (x961|((x962*x963)%x964));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x965 = INT16_MAX;
	uint32_t x966 = 252499522U;
	volatile int8_t x967 = 1;
	int64_t x968 = INT64_MIN;
	volatile int64_t t167 = 3178932004470LL;

    t167 = (x965|((x966*x967)%x968));

    if (t167 != 252510207LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x969 = 2089417258LLU;
	uint8_t x970 = 106U;
	static int16_t x971 = -69;
	int32_t x972 = 429097;
	volatile uint64_t t168 = 4113032LLU;

    t168 = (x969|((x970*x971)%x972));

    if (t168 != 18446744073709550446LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x973 = 35125748LL;
	uint64_t x974 = 1982995152228LLU;
	volatile uint32_t x975 = UINT32_MAX;
	volatile int16_t x976 = INT16_MIN;
	volatile uint64_t t169 = 10LLU;

    t169 = (x973|((x974*x975)%x976));

    if (t169 != 12950306982737738748LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x982 = -6630414LL;
	int32_t x983 = 100;
	volatile int64_t t170 = -11364802675LL;

    t170 = (x981|((x982*x983)%x984));

    if (t170 != 1256126LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x985 = 4U;
	int8_t x986 = INT8_MAX;
	static volatile uint64_t x987 = UINT64_MAX;
	static volatile uint64_t x988 = 4056LLU;
	volatile uint64_t t171 = 6418152743824LLU;

    t171 = (x985|((x986*x987)%x988));

    if (t171 != 3013LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x990 = -2;
	uint64_t x991 = UINT64_MAX;
	static int16_t x992 = INT16_MAX;
	uint64_t t172 = 1021756987543835LLU;

    t172 = (x989|((x990*x991)%x992));

    if (t172 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x999 = UINT64_MAX;
	volatile int32_t x1000 = INT32_MIN;

    t173 = (x997|((x998*x999)%x1000));

    if (t173 != 476009LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x1001 = 11U;
	uint32_t x1002 = UINT32_MAX;
	uint16_t x1003 = UINT16_MAX;
	uint32_t t174 = 10770803U;

    t174 = (x1001|((x1002*x1003)%x1004));

    if (t174 != 11U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x1013 = 23U;
	int8_t x1014 = -36;
	int32_t x1015 = 26;
	int16_t x1016 = -1;
	volatile int32_t t175 = -25184;

    t175 = (x1013|((x1014*x1015)%x1016));

    if (t175 != 23) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x1017 = -1;
	uint8_t x1018 = 17U;
	int32_t x1020 = 77996006;
	volatile int32_t t176 = -792;

    t176 = (x1017|((x1018*x1019)%x1020));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1021 = 12060U;
	int32_t x1022 = INT32_MIN;
	uint16_t x1024 = 98U;
	volatile uint32_t t177 = 31U;

    t177 = (x1021|((x1022*x1023)%x1024));

    if (t177 != 12092U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1025 = UINT16_MAX;
	static int8_t x1026 = INT8_MIN;
	static int64_t x1027 = -1414572113193060LL;
	volatile uint8_t x1028 = UINT8_MAX;
	int64_t t178 = 0LL;

    t178 = (x1025|((x1026*x1027)%x1028));

    if (t178 != 65535LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1029 = INT8_MAX;
	int16_t x1030 = 192;
	volatile int64_t x1031 = -3LL;
	static uint32_t x1032 = 491034U;
	static int64_t t179 = 1284747018897999LL;

    t179 = (x1029|((x1030*x1031)%x1032));

    if (t179 != -513LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x1033 = 1LLU;
	volatile int8_t x1034 = -1;
	uint8_t x1035 = UINT8_MAX;
	int8_t x1036 = -1;

    t180 = (x1033|((x1034*x1035)%x1036));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1037 = 4U;
	uint32_t x1038 = 40U;
	uint8_t x1039 = UINT8_MAX;
	static uint32_t x1040 = 664U;
	uint32_t t181 = 451U;

    t181 = (x1037|((x1038*x1039)%x1040));

    if (t181 != 244U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1041 = INT32_MAX;
	volatile int64_t x1043 = INT64_MAX;
	int32_t x1044 = -1;
	volatile int64_t t182 = -908109410LL;

    t182 = (x1041|((x1042*x1043)%x1044));

    if (t182 != 2147483647LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1045 = 26294U;
	int64_t x1048 = -1LL;
	int64_t t183 = -1970503534765LL;

    t183 = (x1045|((x1046*x1047)%x1048));

    if (t183 != 26294LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x1049 = UINT64_MAX;
	volatile int32_t x1051 = 11165;
	static int32_t x1052 = 1748528;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x1049|((x1050*x1051)%x1052));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1054 = INT16_MIN;
	int8_t x1055 = INT8_MIN;
	int32_t x1056 = -1;
	static volatile int64_t t185 = 48260215610409094LL;

    t185 = (x1053|((x1054*x1055)%x1056));

    if (t185 != -2389048LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x1058 = 6362U;
	uint32_t x1059 = 17U;
	int64_t x1060 = 4LL;
	static volatile int64_t t186 = 23520525548110334LL;

    t186 = (x1057|((x1058*x1059)%x1060));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1064 = -1;
	uint64_t t187 = 7LLU;

    t187 = (x1061|((x1062*x1063)%x1064));

    if (t187 != 11973913LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1065 = 2984120LLU;
	static int16_t x1066 = -46;
	static int64_t x1068 = -1LL;

    t188 = (x1065|((x1066*x1067)%x1068));

    if (t188 != 2984120LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1069 = 14661U;
	volatile int8_t x1070 = 28;
	volatile uint8_t x1071 = 0U;
	int8_t x1072 = INT8_MAX;

    t189 = (x1069|((x1070*x1071)%x1072));

    if (t189 != 14661U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1081 = 63363436LLU;
	static volatile int32_t x1082 = INT32_MIN;
	int64_t x1084 = -3999741LL;

    t190 = (x1081|((x1082*x1083)%x1084));

    if (t190 != 63363436LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1089 = -1LL;
	int64_t x1090 = -1LL;
	uint64_t x1091 = UINT64_MAX;
	uint16_t x1092 = 218U;
	uint64_t t191 = UINT64_MAX;

    t191 = (x1089|((x1090*x1091)%x1092));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1093 = INT8_MAX;
	int64_t x1095 = -12107LL;
	int16_t x1096 = -1;
	static int64_t t192 = 18810293103LL;

    t192 = (x1093|((x1094*x1095)%x1096));

    if (t192 != 127LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1097 = -226647LL;
	int64_t x1098 = -41098968550LL;

    t193 = (x1097|((x1098*x1099)%x1100));

    if (t193 != 18446744073709338301LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1101 = INT16_MIN;
	int32_t x1102 = -1;
	uint8_t x1103 = UINT8_MAX;
	static int8_t x1104 = INT8_MAX;
	static volatile int32_t t194 = 3165810;

    t194 = (x1101|((x1102*x1103)%x1104));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1105 = 119U;
	uint64_t x1106 = UINT64_MAX;
	int8_t x1107 = -1;
	int64_t x1108 = -1LL;
	uint64_t t195 = 192385623394778LLU;

    t195 = (x1105|((x1106*x1107)%x1108));

    if (t195 != 119LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1113 = -1;
	uint64_t x1116 = 505186053916552LLU;
	static uint64_t t196 = UINT64_MAX;

    t196 = (x1113|((x1114*x1115)%x1116));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1117 = -23522589328LL;
	static uint16_t x1118 = 353U;
	static volatile uint8_t x1119 = UINT8_MAX;
	int8_t x1120 = INT8_MAX;
	int64_t t197 = 41999339LL;

    t197 = (x1117|((x1118*x1119)%x1120));

    if (t197 != -23522589325LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x1121 = INT16_MAX;
	uint64_t x1122 = UINT64_MAX;
	int8_t x1124 = -1;
	uint64_t t198 = UINT64_MAX;

    t198 = (x1121|((x1122*x1123)%x1124));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x1125 = 118613;
	int8_t x1126 = 14;
	static uint32_t x1127 = UINT32_MAX;
	int64_t x1128 = INT64_MIN;
	volatile int64_t t199 = -220534LL;

    t199 = (x1125|((x1126*x1127)%x1128));

    if (t199 != 4294967287LL) { NG(); } else { ; }
	
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

