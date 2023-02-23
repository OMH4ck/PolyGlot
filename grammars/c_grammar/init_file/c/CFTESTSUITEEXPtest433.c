
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

volatile int32_t x8 = INT32_MIN;
uint64_t x26 = 220LLU;
volatile int32_t x27 = -13;
volatile int8_t x32 = INT8_MAX;
static int16_t x40 = 143;
int16_t x55 = INT16_MIN;
volatile int32_t x57 = -1;
volatile int64_t t7 = 3503539007427LL;
static uint32_t x71 = 8U;
static uint16_t x88 = UINT16_MAX;
static uint64_t t13 = UINT64_MAX;
static int64_t x109 = -1LL;
static uint64_t t14 = UINT64_MAX;
volatile int64_t t17 = -6LL;
volatile int16_t x138 = -2;
static uint32_t x140 = 2196U;
uint32_t t18 = 52645U;
int64_t x161 = -770662173176LL;
int8_t x162 = -1;
uint16_t x163 = 51U;
int32_t x164 = -13201;
uint8_t x185 = UINT8_MAX;
int32_t x206 = 1;
int8_t x207 = 2;
int16_t x212 = INT16_MIN;
int16_t x218 = INT16_MIN;
int8_t x219 = INT8_MIN;
int32_t x222 = -1;
volatile uint32_t t33 = UINT32_MAX;
int8_t x235 = INT8_MAX;
volatile int64_t x254 = 124601175657897LL;
volatile uint8_t x257 = 47U;
static volatile int32_t x258 = INT32_MIN;
int64_t x259 = -1LL;
uint16_t x260 = 5088U;
int8_t x261 = INT8_MIN;
int16_t x276 = INT16_MIN;
volatile int32_t x278 = -1;
uint16_t x285 = 1308U;
uint64_t x291 = 111980411007714LLU;
volatile int16_t x294 = INT16_MIN;
volatile uint16_t x309 = 12U;
uint64_t x310 = UINT64_MAX;
int32_t x314 = -40;
uint64_t x315 = 3114350717LLU;
int16_t x320 = INT16_MIN;
volatile uint64_t x326 = 1511308740949315777LLU;
volatile uint64_t t51 = 1619716803LLU;
int8_t x350 = 0;
static volatile uint64_t x359 = UINT64_MAX;
int64_t x360 = INT64_MAX;
volatile int16_t x369 = -1;
uint64_t x371 = 34469265447079LLU;
static volatile uint8_t x380 = 23U;
int32_t x396 = INT32_MIN;
volatile int32_t x399 = 111053;
volatile int16_t x430 = -1;
static volatile int64_t t63 = -6781LL;
int32_t x446 = -4;
static uint64_t x452 = 29147889044LLU;
volatile int8_t x462 = 0;
int64_t x469 = INT64_MAX;
volatile uint64_t t68 = UINT64_MAX;
int8_t x474 = INT8_MIN;
volatile uint64_t x476 = 6624864758LLU;
static uint64_t t69 = 83793LLU;
int32_t x489 = INT32_MIN;
int16_t x496 = -10232;
int16_t x501 = 2;
int8_t x502 = 41;
int16_t x513 = INT16_MIN;
int64_t x514 = INT64_MIN;
volatile uint64_t x515 = 2478877133541007LLU;
volatile uint64_t t77 = 52LLU;
uint64_t x520 = 445005251LLU;
uint64_t x521 = 1812LLU;
int16_t x527 = -8623;
int8_t x528 = -36;
static int16_t x530 = INT16_MIN;
int64_t x532 = INT64_MIN;
static int32_t x542 = -1;
volatile int16_t x545 = -1;
int8_t x547 = INT8_MIN;
static uint64_t x549 = UINT64_MAX;
int16_t x555 = INT16_MIN;
static int8_t x557 = 1;
volatile uint32_t t87 = 4064941U;
uint16_t x561 = 1U;
uint16_t x562 = 1893U;
static int8_t x566 = INT8_MIN;
uint32_t x567 = 1U;
int8_t x578 = 5;
int64_t x580 = 28510016152314LL;
volatile int32_t t93 = -58701;
static int16_t x598 = INT16_MIN;
static int64_t x600 = -1LL;
static int8_t x607 = -1;
static int8_t x608 = -1;
static volatile int32_t x620 = -1;
static volatile int16_t x623 = INT16_MIN;
int8_t x624 = INT8_MAX;
uint16_t x627 = 0U;
uint64_t t103 = 772698584LLU;
int16_t x664 = 0;
uint64_t x667 = UINT64_MAX;
uint64_t x674 = 6624LLU;
int64_t x675 = INT64_MIN;
uint64_t x676 = 39099192484568LLU;
static int8_t x685 = INT8_MIN;
int32_t x686 = 6982;
int8_t x688 = 1;
int32_t x697 = INT32_MAX;
static volatile int16_t x706 = -1;
uint64_t x707 = 0LLU;
volatile uint64_t t110 = 10508021954LLU;
volatile int32_t x711 = -49;
volatile int8_t x716 = INT8_MIN;
static uint32_t x726 = UINT32_MAX;
uint16_t x729 = 14691U;
static volatile uint64_t x731 = UINT64_MAX;
uint16_t x733 = 1447U;
int32_t x734 = 733;
int16_t x736 = INT16_MAX;
volatile int32_t x761 = INT32_MIN;
volatile int64_t x762 = -1LL;
int16_t x763 = 0;
static uint16_t x772 = UINT16_MAX;
int8_t x776 = -1;
uint8_t x778 = 7U;
uint16_t x780 = 4681U;
uint32_t x790 = UINT32_MAX;
int8_t x792 = -1;
static uint8_t x793 = 98U;
int32_t t124 = 38;
volatile int32_t x800 = INT32_MIN;
static int8_t x816 = INT8_MIN;
int16_t x819 = INT16_MIN;
int64_t x823 = -1LL;
uint16_t x828 = 35U;
int8_t x835 = INT8_MAX;
int16_t x836 = INT16_MAX;
static int32_t x839 = 0;
int64_t x848 = INT64_MIN;
uint64_t x850 = UINT64_MAX;
int64_t x858 = 577437014LL;
static uint64_t x859 = UINT64_MAX;
static uint32_t x860 = 4021U;
int8_t x861 = INT8_MIN;
static volatile int64_t x870 = INT64_MAX;
uint64_t x877 = 6557035794LLU;
volatile int64_t t140 = -45750395788247838LL;
uint32_t x885 = UINT32_MAX;
int64_t t143 = -4294777994LL;
int64_t x901 = 492686580211LL;
static volatile uint32_t x908 = UINT32_MAX;
int8_t x914 = INT8_MIN;
uint8_t x917 = 3U;
uint32_t x926 = 0U;
volatile uint64_t x931 = UINT64_MAX;
int16_t x932 = 1126;
static int8_t x937 = INT8_MIN;
uint32_t t152 = 1240602U;
static uint32_t t153 = 30641U;
uint8_t x953 = 0U;
volatile int16_t x956 = -1;
uint64_t t155 = 386584913144127LLU;
volatile int16_t x969 = 3;
static int32_t x970 = INT32_MAX;
static int8_t x972 = INT8_MAX;
volatile uint64_t t158 = 16410438LLU;
int8_t x984 = INT8_MIN;
int16_t x993 = INT16_MIN;
int16_t x997 = -1;
volatile uint16_t x1003 = 93U;
uint32_t t162 = 14196774U;
uint64_t x1015 = 27844461LLU;
int16_t x1016 = -11;
int16_t x1021 = INT16_MIN;
uint8_t x1022 = 4U;
int8_t x1031 = INT8_MIN;
static uint16_t x1038 = 2717U;
uint64_t x1047 = 20099LLU;
uint64_t x1048 = UINT64_MAX;
uint64_t t170 = UINT64_MAX;
static volatile int32_t x1061 = 56448;
int32_t x1062 = -1;
int16_t x1064 = INT16_MAX;
int64_t t172 = -468949610542LL;
int64_t x1069 = INT64_MIN;
int8_t x1074 = INT8_MAX;
static uint64_t x1095 = 280582449535729603LLU;
volatile uint64_t t178 = 22411267LLU;
uint32_t x1101 = 28504389U;
int16_t x1104 = 0;
int8_t x1111 = 9;
int64_t x1141 = -1LL;
int8_t x1143 = 2;
uint64_t t184 = 504437LLU;
volatile uint32_t x1158 = UINT32_MAX;
static volatile uint32_t t186 = 1235484832U;
static int16_t x1173 = -1;
uint64_t x1178 = UINT64_MAX;
uint64_t x1187 = 7627643954195LLU;
int64_t x1188 = 0LL;
static int16_t x1194 = 1811;
int16_t x1197 = -12371;
int8_t x1200 = -62;
uint32_t x1215 = 687U;
uint16_t x1216 = 5537U;
uint64_t x1227 = 3LLU;
static uint64_t t194 = 57990790LLU;
volatile uint64_t x1234 = 26221081892007778LLU;
int64_t t196 = 2898563829992732392LL;
int64_t x1249 = -16400605694597202LL;
int32_t x1253 = -443074476;
volatile int32_t t199 = -967103;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	static uint8_t x2 = 33U;
	int16_t x3 = 177;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = -38994;

    t0 = (x1|((x2*x3)*x4));

    if (t0 != 191392255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 802176998770LLU;
	static int16_t x6 = INT16_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 66698422625969917LLU;

    t1 = (x5|((x6*x7)*x8));

    if (t1 != 70367762292082LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MAX;
	static int8_t x10 = -1;
	volatile int8_t x11 = INT8_MIN;
	static int16_t x12 = -9673;
	volatile int32_t t2 = 0;

    t2 = (x9|((x10*x11)*x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x25 = 124LLU;
	static uint16_t x28 = UINT16_MAX;
	uint64_t t3 = 10LLU;

    t3 = (x25|((x26*x27)*x28));

    if (t3 != 18446744073522121596LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 402U;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = 65;
	uint32_t t4 = 857932U;

    t4 = (x29|((x30*x31)*x32));

    if (t4 != 2105299U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	uint32_t x39 = 21062U;
	static uint32_t t5 = 716714959U;

    t5 = (x37|((x38*x39)*x40));

    if (t5 != 4294967168U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	volatile int16_t x56 = -1;
	int64_t t6 = -2202LL;

    t6 = (x53|((x54*x55)*x56));

    if (t6 != -4194304LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x58 = 126875560U;
	int64_t x59 = 4180292190LL;
	volatile int8_t x60 = 1;

    t7 = (x57|((x58*x59)*x60));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x69 = INT8_MIN;
	uint64_t x70 = UINT64_MAX;
	int16_t x72 = -1;
	static uint64_t t8 = 3642465LLU;

    t8 = (x69|((x70*x71)*x72));

    if (t8 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 86497558U;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 27906868632107LLU;
	volatile uint64_t t9 = UINT64_MAX;

    t9 = (x81|((x82*x83)*x84));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	static uint8_t x87 = 5U;
	volatile int32_t t10 = -39;

    t10 = (x85|((x86*x87)*x88));

    if (t10 != -41910273) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x89 = INT32_MIN;
	uint64_t x90 = 130552590924464487LLU;
	volatile uint8_t x91 = 9U;
	uint64_t x92 = 3850866772764097LLU;
	static uint64_t t11 = 183LLU;

    t11 = (x89|((x90*x91)*x92));

    if (t11 != 18446744073605512927LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x93 = INT16_MIN;
	volatile uint32_t x94 = 6U;
	uint16_t x95 = 695U;
	int8_t x96 = 30;
	volatile uint32_t t12 = 78879U;

    t12 = (x93|((x94*x95)*x96));

    if (t12 != 4294961324U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x105 = UINT64_MAX;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 89U;
	volatile int8_t x108 = -1;

    t13 = (x105|((x106*x107)*x108));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x110 = UINT64_MAX;
	uint16_t x111 = 15406U;
	static uint16_t x112 = 165U;

    t14 = (x109|((x110*x111)*x112));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x113 = -26;
	static uint8_t x114 = UINT8_MAX;
	static int16_t x115 = INT16_MAX;
	int8_t x116 = -1;
	int32_t t15 = -222218;

    t15 = (x113|((x114*x115)*x116));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = 5;
	volatile int32_t x131 = -1;
	int64_t x132 = -243062638949LL;
	volatile int64_t t16 = -90LL;

    t16 = (x129|((x130*x131)*x132));

    if (t16 != -162550023LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x133 = 1;
	volatile int64_t x134 = -1LL;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;

    t17 = (x133|((x134*x135)*x136));

    if (t17 != -16383LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x137 = INT8_MAX;
	int8_t x139 = INT8_MAX;

    t18 = (x137|((x138*x139)*x140));

    if (t18 != 4294409599U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x141 = -1;
	int32_t x142 = 0;
	uint8_t x143 = 64U;
	int64_t x144 = -243LL;
	int64_t t19 = -16257850811LL;

    t19 = (x141|((x142*x143)*x144));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x157 = 65U;
	uint8_t x158 = 0U;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t20 = -4;

    t20 = (x157|((x158*x159)*x160));

    if (t20 != 65) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t t21 = 64767LL;

    t21 = (x161|((x162*x163)*x164));

    if (t21 != -770661517333LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x165 = 3999022445091537LL;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = 186970790180LLU;
	int8_t x168 = INT8_MAX;
	volatile uint64_t t22 = 4LLU;

    t22 = (x165|((x166*x167)*x168));

    if (t22 != 3999022445091537LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x177 = -1;
	static int64_t x178 = 77835LL;
	volatile int16_t x179 = -1;
	int32_t x180 = -1;
	static int64_t t23 = 1435459251139191280LL;

    t23 = (x177|((x178*x179)*x180));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x186 = INT16_MAX;
	volatile int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t24 = 322LLU;

    t24 = (x185|((x186*x187)*x188));

    if (t24 != 18446744073705390335LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = -25934;
	int8_t x191 = -7;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t25 = 221232LLU;

    t25 = (x189|((x190*x191)*x192));

    if (t25 != 18446744073709533918LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x193 = 12532;
	int64_t x194 = 44LL;
	static volatile int8_t x195 = -1;
	volatile int32_t x196 = 89896248;
	int64_t t26 = 545976715565954049LL;

    t26 = (x193|((x194*x195)*x196));

    if (t26 != -3955426572LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x201 = 12090U;
	static int64_t x202 = 114737LL;
	int32_t x203 = INT32_MAX;
	static int8_t x204 = INT8_MIN;
	int64_t t27 = 29951719705323LL;

    t27 = (x201|((x202*x203)*x204));

    if (t27 != -31538666394337350LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x205 = 2;
	uint8_t x208 = 22U;
	volatile int32_t t28 = -354757341;

    t28 = (x205|((x206*x207)*x208));

    if (t28 != 46) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x209 = -1;
	int16_t x210 = -1;
	int8_t x211 = INT8_MIN;
	volatile int32_t t29 = 2075055;

    t29 = (x209|((x210*x211)*x212));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x213 = 51202U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = 0;
	uint32_t x216 = 84500U;
	volatile int64_t t30 = 77LL;

    t30 = (x213|((x214*x215)*x216));

    if (t30 != 51202LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x217 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t31 = 130014;

    t31 = (x217|((x218*x219)*x220));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x221 = -1;
	int16_t x223 = INT16_MIN;
	int64_t x224 = -591LL;
	int64_t t32 = 169027LL;

    t32 = (x221|((x222*x223)*x224));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x225 = -1;
	static volatile uint32_t x226 = 1795U;
	uint8_t x227 = 6U;
	static uint32_t x228 = UINT32_MAX;

    t33 = (x225|((x226*x227)*x228));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x236 = 372936695U;
	volatile uint32_t t34 = 3062U;

    t34 = (x233|((x234*x235)*x236));

    if (t34 != 3392897024U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x253 = INT16_MAX;
	int32_t x255 = -14;
	static volatile int64_t x256 = 2663LL;
	volatile int64_t t35 = 168832054LL;

    t35 = (x253|((x254*x255)*x256));

    if (t35 != -4645381030877691905LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t t36 = -14859LL;

    t36 = (x257|((x258*x259)*x260));

    if (t36 != 10926396801071LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x262 = UINT32_MAX;
	uint8_t x263 = 0U;
	int8_t x264 = 0;
	volatile uint32_t t37 = 279752654U;

    t37 = (x261|((x262*x263)*x264));

    if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x269 = INT64_MIN;
	int32_t x270 = -50;
	uint16_t x271 = 19U;
	static int64_t x272 = -1LL;
	int64_t t38 = -7755LL;

    t38 = (x269|((x270*x271)*x272));

    if (t38 != -9223372036854774858LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x273 = 87044;
	static uint32_t x274 = UINT32_MAX;
	int8_t x275 = -1;
	uint32_t t39 = 7984U;

    t39 = (x273|((x274*x275)*x276));

    if (t39 != 4294956036U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x277 = -1;
	int8_t x279 = -1;
	int64_t x280 = -1LL;
	volatile int64_t t40 = 21454183788440779LL;

    t40 = (x277|((x278*x279)*x280));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x286 = 103496409922473496LLU;
	uint16_t x287 = 22U;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t41 = 1801467885268320695LLU;

    t41 = (x285|((x286*x287)*x288));

    if (t41 != 2306121688049307132LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	volatile int32_t x292 = INT32_MIN;
	static volatile uint64_t t42 = 14586378LLU;

    t42 = (x289|((x290*x291)*x292));

    if (t42 != 4345790507302060031LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x293 = 32;
	int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 13077148U;
	static uint32_t t43 = 3973326U;

    t43 = (x293|((x294*x295)*x296));

    if (t43 != 32U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x301 = INT8_MIN;
	uint32_t x302 = 5U;
	uint64_t x303 = UINT64_MAX;
	static int8_t x304 = 1;
	uint64_t t44 = 4LLU;

    t44 = (x301|((x302*x303)*x304));

    if (t44 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x311 = -26;
	int16_t x312 = -1;
	uint64_t t45 = 21406179105LLU;

    t45 = (x309|((x310*x311)*x312));

    if (t45 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x313 = 0U;
	uint16_t x316 = UINT16_MAX;
	volatile uint64_t t46 = 647146778468241LLU;

    t46 = (x313|((x314*x315)*x316));

    if (t46 != 18438580114740007816LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	volatile int16_t x319 = INT16_MIN;
	uint64_t t47 = UINT64_MAX;

    t47 = (x317|((x318*x319)*x320));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x321 = INT32_MAX;
	int16_t x322 = INT16_MIN;
	int16_t x323 = 1;
	uint8_t x324 = UINT8_MAX;
	int32_t t48 = 43554336;

    t48 = (x321|((x322*x323)*x324));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x325 = -32;
	uint8_t x327 = 1U;
	uint8_t x328 = 0U;
	uint64_t t49 = 5416770409112911LLU;

    t49 = (x325|((x326*x327)*x328));

    if (t49 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x329 = -1LL;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	static volatile uint64_t t50 = UINT64_MAX;

    t50 = (x329|((x330*x331)*x332));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 33032343LLU;
	int64_t x339 = 431720LL;
	uint64_t x340 = 28470678LLU;

    t51 = (x337|((x338*x339)*x340));

    if (t51 != 18446744073709544848LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = 0;
	uint16_t x347 = 3U;
	volatile int16_t x348 = -1;
	int64_t t52 = INT64_MIN;

    t52 = (x345|((x346*x347)*x348));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x349 = INT16_MIN;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t53 = 48788606462110436LLU;

    t53 = (x349|((x350*x351)*x352));

    if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MAX;
	volatile uint64_t t54 = 3LLU;

    t54 = (x357|((x358*x359)*x360));

    if (t54 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x370 = INT64_MAX;
	static uint8_t x372 = 1U;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (x369|((x370*x371)*x372));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -1;
	int16_t x379 = INT16_MIN;
	volatile int32_t t56 = 901;

    t56 = (x377|((x378*x379)*x380));

    if (t56 != -2146729984) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x385 = 59U;
	static int8_t x386 = 42;
	int8_t x387 = 1;
	uint8_t x388 = 0U;
	volatile int32_t t57 = -61;

    t57 = (x385|((x386*x387)*x388));

    if (t57 != 59) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x389 = -44;
	volatile uint32_t x390 = 23555637U;
	int8_t x391 = -1;
	int16_t x392 = INT16_MIN;
	static volatile uint32_t t58 = 20853U;

    t58 = (x389|((x390*x391)*x392));

    if (t58 != 4294967252U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x393 = 62;
	uint64_t x394 = UINT64_MAX;
	uint16_t x395 = 5750U;
	uint64_t t59 = 7LLU;

    t59 = (x393|((x394*x395)*x396));

    if (t59 != 12348030976062LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x397 = -3291056363391LL;
	static int8_t x398 = INT8_MAX;
	int8_t x400 = INT8_MAX;
	static volatile int64_t t60 = -646LL;

    t60 = (x397|((x398*x399)*x400));

    if (t60 != -3289948934963LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = 15703;
	static uint32_t x423 = 160U;
	volatile int32_t x424 = INT32_MIN;
	static uint32_t t61 = 12782725U;

    t61 = (x421|((x422*x423)*x424));

    if (t61 != 4294967168U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x429 = INT8_MAX;
	int16_t x431 = INT16_MAX;
	volatile uint8_t x432 = UINT8_MAX;
	static volatile int32_t t62 = 405;

    t62 = (x429|((x430*x431)*x432));

    if (t62 != -8355585) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x433 = 0U;
	int64_t x434 = 503LL;
	volatile int16_t x435 = INT16_MIN;
	int8_t x436 = -3;

    t63 = (x433|((x434*x435)*x436));

    if (t63 != 49446912LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x445 = 4U;
	uint8_t x447 = UINT8_MAX;
	volatile int8_t x448 = INT8_MIN;
	volatile int32_t t64 = 10;

    t64 = (x445|((x446*x447)*x448));

    if (t64 != 130564) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x450 = 2;
	uint32_t x451 = 2151U;
	volatile uint64_t t65 = 7634922109454653LLU;

    t65 = (x449|((x450*x451)*x452));

    if (t65 != 125394218667519LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x457 = INT8_MAX;
	volatile int16_t x458 = 60;
	int8_t x459 = -1;
	int64_t x460 = -141LL;
	int64_t t66 = 3770543183LL;

    t66 = (x457|((x458*x459)*x460));

    if (t66 != 8575LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x461 = 7;
	static int64_t x463 = 3586788708557360LL;
	uint8_t x464 = 0U;
	volatile int64_t t67 = 831985309667LL;

    t67 = (x461|((x462*x463)*x464));

    if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	static int8_t x472 = -1;

    t68 = (x469|((x470*x471)*x472));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x473 = 1U;
	int8_t x475 = INT8_MIN;

    t69 = (x473|((x474*x475)*x476));

    if (t69 != 108541784195073LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x481 = 3655LL;
	int16_t x482 = 2;
	int16_t x483 = INT16_MAX;
	volatile int8_t x484 = INT8_MAX;
	volatile int64_t t70 = -35LL;

    t70 = (x481|((x482*x483)*x484));

    if (t70 != 8322887LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MAX;
	uint64_t x487 = UINT64_MAX;
	int8_t x488 = -1;
	volatile uint64_t t71 = 13LLU;

    t71 = (x485|((x486*x487)*x488));

    if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x490 = INT16_MIN;
	volatile int32_t x491 = -1;
	volatile int64_t x492 = -1LL;
	volatile int64_t t72 = -31LL;

    t72 = (x489|((x490*x491)*x492));

    if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x493 = INT32_MAX;
	static uint32_t x494 = 397U;
	int8_t x495 = INT8_MIN;
	uint32_t t73 = 237U;

    t73 = (x493|((x494*x495)*x496));

    if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x503 = 56LL;
	volatile int32_t x504 = INT32_MIN;
	volatile int64_t t74 = 300054260LL;

    t74 = (x501|((x502*x503)*x504));

    if (t74 != -4930622455806LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x505 = 171572;
	static uint64_t x506 = 498LLU;
	int32_t x507 = -314;
	int16_t x508 = 7;
	volatile uint64_t t75 = 30LLU;

    t75 = (x505|((x506*x507)*x508));

    if (t75 != 18446744073708494388LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x509 = -447629346687LL;
	int32_t x510 = 3915901;
	int32_t x511 = -1;
	int8_t x512 = INT8_MIN;
	static int64_t t76 = -149834700LL;

    t76 = (x509|((x510*x511)*x512));

    if (t76 != -447214109055LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x516 = UINT8_MAX;

    t77 = (x513|((x514*x515)*x516));

    if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x517 = -1;
	int32_t x518 = -1;
	volatile int8_t x519 = INT8_MIN;
	volatile uint64_t t78 = UINT64_MAX;

    t78 = (x517|((x518*x519)*x520));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x522 = -28;
	static uint32_t x523 = UINT32_MAX;
	int8_t x524 = INT8_MAX;
	static uint64_t t79 = 460LLU;

    t79 = (x521|((x522*x523)*x524));

    if (t79 != 4084LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x525 = INT8_MAX;
	static int8_t x526 = -22;
	volatile int32_t t80 = -922745654;

    t80 = (x525|((x526*x527)*x528));

    if (t80 != -6829313) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x529 = 0U;
	uint64_t x531 = 22676426142LLU;
	static uint64_t t81 = 2084557718562482LLU;

    t81 = (x529|((x530*x531)*x532));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x533 = 4023433425796555LL;
	static int8_t x534 = -25;
	int32_t x535 = 1;
	int16_t x536 = -1;
	volatile int64_t t82 = -354766331886767LL;

    t82 = (x533|((x534*x535)*x536));

    if (t82 != 4023433425796571LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x541 = INT32_MIN;
	uint16_t x543 = 1U;
	int8_t x544 = -1;
	int32_t t83 = -30;

    t83 = (x541|((x542*x543)*x544));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x546 = -5;
	int8_t x548 = INT8_MIN;
	int32_t t84 = 43956;

    t84 = (x545|((x546*x547)*x548));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x550 = 3182U;
	int8_t x551 = -1;
	int16_t x552 = 0;
	uint64_t t85 = UINT64_MAX;

    t85 = (x549|((x550*x551)*x552));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x553 = -1;
	uint64_t x554 = 34605LLU;
	uint8_t x556 = 6U;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x553|((x554*x555)*x556));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x558 = 6671U;
	int32_t x559 = INT32_MIN;
	static int8_t x560 = INT8_MIN;

    t87 = (x557|((x558*x559)*x560));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x563 = 5269LLU;
	int64_t x564 = -847LL;
	uint64_t t88 = 1LLU;

    t88 = (x561|((x562*x563)*x564));

    if (t88 != 18446744065261389817LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	static int8_t x568 = INT8_MIN;
	volatile uint32_t t89 = 4U;

    t89 = (x565|((x566*x567)*x568));

    if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x573 = INT16_MAX;
	uint16_t x574 = 1945U;
	uint8_t x575 = 0U;
	int32_t x576 = -44061763;
	int32_t t90 = -860;

    t90 = (x573|((x574*x575)*x576));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x577 = INT32_MAX;
	uint8_t x579 = UINT8_MAX;
	volatile int64_t t91 = -3503570469579827889LL;

    t91 = (x577|((x578*x579)*x580));

    if (t91 != 36350271026102271LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x581 = -1;
	static int8_t x582 = -30;
	uint64_t x583 = 12LLU;
	volatile uint64_t x584 = 2484362027607LLU;
	uint64_t t92 = UINT64_MAX;

    t92 = (x581|((x582*x583)*x584));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	static volatile int8_t x587 = INT8_MIN;
	int16_t x588 = 123;

    t93 = (x585|((x586*x587)*x588));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x589 = 50689LLU;
	int8_t x590 = -1;
	uint8_t x591 = 11U;
	volatile int8_t x592 = INT8_MIN;
	static volatile uint64_t t94 = 271486116774686315LLU;

    t94 = (x589|((x590*x591)*x592));

    if (t94 != 51073LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x597 = -5;
	static int8_t x599 = INT8_MIN;
	static volatile int64_t t95 = 1559897LL;

    t95 = (x597|((x598*x599)*x600));

    if (t95 != -5LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x601 = 14U;
	uint32_t x602 = 29260U;
	static int16_t x603 = 220;
	static int16_t x604 = -6614;
	uint32_t t96 = 880U;

    t96 = (x601|((x602*x603)*x604));

    if (t96 != 374032174U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x605 = 268U;
	uint8_t x606 = UINT8_MAX;
	static int32_t t97 = -2621;

    t97 = (x605|((x606*x607)*x608));

    if (t97 != 511) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x613 = INT64_MIN;
	volatile uint8_t x614 = 1U;
	volatile int8_t x615 = INT8_MIN;
	volatile int16_t x616 = 1168;
	int64_t t98 = 15148258685LL;

    t98 = (x613|((x614*x615)*x616));

    if (t98 != -149504LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x617 = 56U;
	int32_t x618 = -18;
	static volatile int8_t x619 = INT8_MIN;
	int32_t t99 = 131410386;

    t99 = (x617|((x618*x619)*x620));

    if (t99 != -2248) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x621 = 2U;
	static uint32_t x622 = 2936871U;
	volatile uint32_t t100 = 9018279U;

    t100 = (x621|((x622*x623)*x624));

    if (t100 != 1582530562U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x625 = INT64_MAX;
	int16_t x626 = 3555;
	int16_t x628 = INT16_MAX;
	int64_t t101 = INT64_MAX;

    t101 = (x625|((x626*x627)*x628));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x629 = -116;
	uint8_t x630 = UINT8_MAX;
	volatile int8_t x631 = INT8_MIN;
	int8_t x632 = 0;
	volatile int32_t t102 = 242;

    t102 = (x629|((x630*x631)*x632));

    if (t102 != -116) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x633 = INT16_MAX;
	int16_t x634 = -4;
	static uint32_t x635 = 404572905U;
	volatile uint64_t x636 = 93LLU;

    t103 = (x633|((x634*x635)*x636));

    if (t103 != 248930861055LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x657 = 6U;
	int8_t x658 = INT8_MIN;
	static uint8_t x659 = 2U;
	static uint16_t x660 = UINT16_MAX;
	volatile int32_t t104 = -2497;

    t104 = (x657|((x658*x659)*x660));

    if (t104 != -16776954) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x661 = 491U;
	uint8_t x662 = 14U;
	int32_t x663 = 225;
	int32_t t105 = 10433916;

    t105 = (x661|((x662*x663)*x664));

    if (t105 != 491) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = INT8_MAX;
	int32_t x668 = -1;
	uint64_t t106 = 3539996721481LLU;

    t106 = (x665|((x666*x667)*x668));

    if (t106 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x673 = 6289U;
	uint64_t t107 = 1066896314599323381LLU;

    t107 = (x673|((x674*x675)*x676));

    if (t107 != 6289LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x687 = UINT16_MAX;
	volatile int32_t t108 = 1;

    t108 = (x685|((x686*x687)*x688));

    if (t108 != -70) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MAX;
	uint8_t x700 = 7U;
	static volatile int32_t t109 = -2734;

    t109 = (x697|((x698*x699)*x700));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile uint32_t x708 = 581102005U;

    t110 = (x705|((x706*x707)*x708));

    if (t110 != 65535LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int64_t x710 = -16221591LL;
	volatile int16_t x712 = INT16_MIN;
	int64_t t111 = -11062631868LL;

    t111 = (x709|((x710*x711)*x712));

    if (t111 != -26045905600257LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x713 = 261752416842174LLU;
	uint16_t x714 = 410U;
	int8_t x715 = INT8_MIN;
	uint64_t t112 = 1735755753986517149LLU;

    t112 = (x713|((x714*x715)*x716));

    if (t112 != 261752419234238LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x721 = INT8_MIN;
	static volatile int16_t x722 = -1;
	int64_t x723 = 172950666LL;
	uint32_t x724 = UINT32_MAX;
	int64_t t113 = -67552851281LL;

    t113 = (x721|((x722*x723)*x724));

    if (t113 != -118LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x725 = 3;
	volatile int8_t x727 = INT8_MIN;
	uint16_t x728 = 467U;
	uint32_t t114 = 594987549U;

    t114 = (x725|((x726*x727)*x728));

    if (t114 != 59779U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x730 = 43788844U;
	int64_t x732 = INT64_MIN;
	uint64_t t115 = 70968439028527288LLU;

    t115 = (x729|((x730*x731)*x732));

    if (t115 != 14691LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x735 = 15;
	int32_t t116 = 42;

    t116 = (x733|((x734*x735)*x736));

    if (t116 != 360273327) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x757 = -1;
	volatile uint64_t x758 = 1086LLU;
	int64_t x759 = INT64_MIN;
	int16_t x760 = INT16_MAX;
	uint64_t t117 = UINT64_MAX;

    t117 = (x757|((x758*x759)*x760));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x764 = -753171LL;
	volatile int64_t t118 = -8901605466LL;

    t118 = (x761|((x762*x763)*x764));

    if (t118 != -2147483648LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x765 = 840352191U;
	static int16_t x766 = -250;
	volatile uint8_t x767 = 2U;
	uint64_t x768 = UINT64_MAX;
	uint64_t t119 = 7171200165434LLU;

    t119 = (x765|((x766*x767)*x768));

    if (t119 != 840352255LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x769 = 168462078245417LLU;
	uint64_t x770 = 116786423680LLU;
	static volatile int32_t x771 = INT32_MAX;
	volatile uint64_t t120 = 130183767190LLU;

    t120 = (x769|((x770*x771)*x772));

    if (t120 != 1955577602569142185LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x773 = 65680703LL;
	static uint64_t x774 = 5LLU;
	int32_t x775 = 499239436;
	volatile uint64_t t121 = 43973863951LLU;

    t121 = (x773|((x774*x775)*x776));

    if (t121 != 18446744071226473983LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x779 = 1019;
	int32_t t122 = -31;

    t122 = (x777|((x778*x779)*x780));

    if (t122 != -2114094075) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x789 = 0;
	static int8_t x791 = -1;
	uint32_t t123 = UINT32_MAX;

    t123 = (x789|((x790*x791)*x792));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x794 = 313U;
	int8_t x795 = INT8_MIN;
	static int32_t x796 = -1;

    t124 = (x793|((x794*x795)*x796));

    if (t124 != 40162) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x797 = INT32_MAX;
	uint16_t x798 = 11U;
	static uint64_t x799 = 6769675351555605779LLU;
	volatile uint64_t t125 = 9297957259LLU;

    t125 = (x797|((x798*x799)*x800));

    if (t125 != 2446901658043547647LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x813 = INT8_MAX;
	volatile uint64_t x814 = UINT64_MAX;
	uint32_t x815 = 308102591U;
	volatile uint64_t t126 = 414855068054949LLU;

    t126 = (x813|((x814*x815)*x816));

    if (t126 != 39437131775LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x817 = 7U;
	int8_t x818 = 3;
	int32_t x820 = -563;
	volatile uint32_t t127 = 20811U;

    t127 = (x817|((x818*x819)*x820));

    if (t127 != 55345159U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x821 = 9U;
	uint64_t x822 = 200LLU;
	volatile uint64_t x824 = UINT64_MAX;
	uint64_t t128 = 63LLU;

    t128 = (x821|((x822*x823)*x824));

    if (t128 != 201LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x825 = INT16_MAX;
	static uint8_t x826 = 5U;
	volatile uint16_t x827 = 1U;
	volatile int32_t t129 = 59779;

    t129 = (x825|((x826*x827)*x828));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x833 = UINT64_MAX;
	volatile int8_t x834 = -1;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x833|((x834*x835)*x836));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x837 = 705228388U;
	int16_t x838 = INT16_MIN;
	int16_t x840 = INT16_MIN;
	volatile uint32_t t131 = 3709857U;

    t131 = (x837|((x838*x839)*x840));

    if (t131 != 705228388U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x841 = INT64_MIN;
	uint64_t x842 = 1562069655533LLU;
	int32_t x843 = 242292535;
	static int64_t x844 = 17664664004082974LL;
	uint64_t t132 = 4539225533LLU;

    t132 = (x841|((x842*x843)*x844));

    if (t132 != 9665555780200763018LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x845 = -1LL;
	volatile uint8_t x846 = 0U;
	int8_t x847 = 3;
	volatile int64_t t133 = -163067LL;

    t133 = (x845|((x846*x847)*x848));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x849 = 48U;
	int32_t x851 = INT32_MIN;
	int16_t x852 = INT16_MIN;
	uint64_t t134 = 2539075475LLU;

    t134 = (x849|((x850*x851)*x852));

    if (t134 != 18446673704965374000LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x857 = UINT16_MAX;
	volatile uint64_t t135 = 196842LLU;

    t135 = (x857|((x858*x859)*x860));

    if (t135 != 18446741751835328511LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x862 = INT32_MIN;
	uint64_t x863 = UINT64_MAX;
	int8_t x864 = -10;
	uint64_t t136 = 110LLU;

    t136 = (x861|((x862*x863)*x864));

    if (t136 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x869 = 0;
	uint64_t x871 = 168934737780740505LLU;
	int64_t x872 = INT64_MIN;
	uint64_t t137 = 3487641LLU;

    t137 = (x869|((x870*x871)*x872));

    if (t137 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x873 = INT8_MIN;
	int16_t x874 = -2;
	static uint8_t x875 = 59U;
	volatile int16_t x876 = -1;
	int32_t t138 = -54343459;

    t138 = (x873|((x874*x875)*x876));

    if (t138 != -10) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x878 = INT32_MIN;
	uint32_t x879 = 106U;
	int64_t x880 = INT64_MIN;
	volatile uint64_t t139 = 351859705641157LLU;

    t139 = (x877|((x878*x879)*x880));

    if (t139 != 6557035794LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x881 = INT64_MAX;
	int8_t x882 = 1;
	static int32_t x883 = -1;
	int8_t x884 = 15;

    t140 = (x881|((x882*x883)*x884));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x886 = 13738458998651LLU;
	int64_t x887 = 31160LL;
	int64_t x888 = 341623981830LL;
	volatile uint64_t t141 = 36LLU;

    t141 = (x885|((x886*x887)*x888));

    if (t141 != 8131349114056081407LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x889 = INT8_MAX;
	uint8_t x890 = UINT8_MAX;
	volatile int16_t x891 = -1;
	static uint32_t x892 = UINT32_MAX;
	volatile uint32_t t142 = 8152U;

    t142 = (x889|((x890*x891)*x892));

    if (t142 != 255U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x897 = INT8_MAX;
	volatile int16_t x898 = -1;
	int64_t x899 = -197217414306857LL;
	int8_t x900 = INT8_MIN;

    t143 = (x897|((x898*x899)*x900));

    if (t143 != -25243829031277569LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x902 = UINT64_MAX;
	static int16_t x903 = INT16_MIN;
	static volatile int64_t x904 = INT64_MIN;
	uint64_t t144 = 32500972206512LLU;

    t144 = (x901|((x902*x903)*x904));

    if (t144 != 492686580211LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x905 = INT8_MIN;
	uint8_t x906 = 48U;
	uint32_t x907 = 298U;
	static volatile uint32_t t145 = 10015663U;

    t145 = (x905|((x906*x907)*x908));

    if (t145 != 4294967200U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x909 = 5835875;
	volatile uint32_t x910 = 5785562U;
	static int8_t x911 = 1;
	static int8_t x912 = -1;
	static uint32_t t146 = 5540U;

    t146 = (x909|((x910*x911)*x912));

    if (t146 != 4294949991U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x913 = 1339401804U;
	uint64_t x915 = UINT64_MAX;
	int8_t x916 = -1;
	uint64_t t147 = 192059581719LLU;

    t147 = (x913|((x914*x915)*x916));

    if (t147 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x918 = 4;
	int16_t x919 = INT16_MIN;
	static volatile int16_t x920 = -1;
	int32_t t148 = -135201167;

    t148 = (x917|((x918*x919)*x920));

    if (t148 != 131075) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x925 = 216LLU;
	volatile int16_t x927 = -19;
	int32_t x928 = 33957477;
	uint64_t t149 = 14472001398453287LLU;

    t149 = (x925|((x926*x927)*x928));

    if (t149 != 216LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x929 = UINT8_MAX;
	int64_t x930 = -1LL;
	uint64_t t150 = 97329642940LLU;

    t150 = (x929|((x930*x931)*x932));

    if (t150 != 1279LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x933 = 1;
	int8_t x934 = INT8_MAX;
	static uint8_t x935 = 12U;
	int8_t x936 = 0;
	int32_t t151 = -65107396;

    t151 = (x933|((x934*x935)*x936));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x938 = -1;
	uint32_t x939 = 85U;
	int32_t x940 = 7;

    t152 = (x937|((x938*x939)*x940));

    if (t152 != 4294967213U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x945 = -9;
	volatile uint32_t x946 = 158678976U;
	int16_t x947 = -1;
	volatile uint32_t x948 = 74U;

    t153 = (x945|((x946*x947)*x948));

    if (t153 != 4294967287U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x954 = 17;
	uint64_t x955 = UINT64_MAX;
	uint64_t t154 = 826LLU;

    t154 = (x953|((x954*x955)*x956));

    if (t154 != 17LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x961 = UINT32_MAX;
	uint64_t x962 = 3050102773112LLU;
	int8_t x963 = INT8_MIN;
	static int16_t x964 = INT16_MAX;

    t155 = (x961|((x962*x963)*x964));

    if (t155 != 5654076226139062271LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x971 = 0;
	int32_t t156 = -13;

    t156 = (x969|((x970*x971)*x972));

    if (t156 != 3) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x973 = INT8_MIN;
	int64_t x974 = INT64_MAX;
	int8_t x975 = 0;
	int8_t x976 = -2;
	volatile int64_t t157 = 554284730406469949LL;

    t157 = (x973|((x974*x975)*x976));

    if (t157 != -128LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x977 = UINT8_MAX;
	uint64_t x978 = 262938971736764521LLU;
	int64_t x979 = INT64_MIN;
	int8_t x980 = -41;

    t158 = (x977|((x978*x979)*x980));

    if (t158 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x981 = UINT64_MAX;
	uint32_t x982 = UINT32_MAX;
	int8_t x983 = -1;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = (x981|((x982*x983)*x984));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x994 = -3;
	uint8_t x995 = UINT8_MAX;
	volatile uint8_t x996 = 3U;
	volatile int32_t t160 = 2645;

    t160 = (x993|((x994*x995)*x996));

    if (t160 != -2295) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x998 = INT64_MIN;
	volatile uint64_t x999 = 3141751083839114043LLU;
	static volatile int32_t x1000 = INT32_MIN;
	static uint64_t t161 = UINT64_MAX;

    t161 = (x997|((x998*x999)*x1000));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x1001 = INT16_MIN;
	uint32_t x1002 = UINT32_MAX;
	int16_t x1004 = INT16_MIN;

    t162 = (x1001|((x1002*x1003)*x1004));

    if (t162 != 4294934528U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1013 = -1;
	volatile int16_t x1014 = -1;
	uint64_t t163 = UINT64_MAX;

    t163 = (x1013|((x1014*x1015)*x1016));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1023 = INT16_MIN;
	int8_t x1024 = INT8_MIN;
	volatile int32_t t164 = -140404321;

    t164 = (x1021|((x1022*x1023)*x1024));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1029 = INT16_MIN;
	uint16_t x1030 = UINT16_MAX;
	uint32_t x1032 = UINT32_MAX;
	uint32_t t165 = 1176414U;

    t165 = (x1029|((x1030*x1031)*x1032));

    if (t165 != 4294967168U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1033 = INT8_MIN;
	int32_t x1034 = INT32_MIN;
	static int16_t x1035 = 0;
	static int64_t x1036 = INT64_MIN;
	volatile int64_t t166 = -17048681278609964LL;

    t166 = (x1033|((x1034*x1035)*x1036));

    if (t166 != -128LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1037 = UINT8_MAX;
	int8_t x1039 = 0;
	static int8_t x1040 = INT8_MIN;
	volatile int32_t t167 = 69130338;

    t167 = (x1037|((x1038*x1039)*x1040));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1041 = INT8_MAX;
	uint64_t x1042 = 2208419345282LLU;
	static volatile int16_t x1043 = INT16_MIN;
	int16_t x1044 = INT16_MIN;
	volatile uint64_t t168 = 5391LLU;

    t168 = (x1041|((x1042*x1043)*x1044));

    if (t168 != 10088974525157867647LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1045 = 139U;
	int64_t x1046 = -295926318403720LL;
	uint64_t t169 = 1832517662762019692LLU;

    t169 = (x1045|((x1046*x1047)*x1048));

    if (t169 != 5947823073596368283LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1049 = UINT32_MAX;
	uint64_t x1050 = UINT64_MAX;
	int16_t x1051 = INT16_MIN;
	int8_t x1052 = -1;

    t170 = (x1049|((x1050*x1051)*x1052));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1063 = 1844245LL;
	int64_t t171 = -1LL;

    t171 = (x1061|((x1062*x1063)*x1064));

    if (t171 != -60430353259LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1065 = 1055250132LL;
	int16_t x1066 = -1;
	volatile int16_t x1067 = -1;
	volatile uint8_t x1068 = UINT8_MAX;

    t172 = (x1065|((x1066*x1067)*x1068));

    if (t172 != 1055250175LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1070 = 0;
	uint16_t x1071 = 15U;
	int16_t x1072 = INT16_MIN;
	int64_t t173 = INT64_MIN;

    t173 = (x1069|((x1070*x1071)*x1072));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x1073 = INT64_MIN;
	int32_t x1075 = -1;
	int64_t x1076 = -2875LL;
	static volatile int64_t t174 = 4171704825920LL;

    t174 = (x1073|((x1074*x1075)*x1076));

    if (t174 != -9223372036854410683LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1077 = -1;
	volatile uint32_t x1078 = 16102729U;
	int8_t x1079 = INT8_MAX;
	uint64_t x1080 = UINT64_MAX;
	uint64_t t175 = UINT64_MAX;

    t175 = (x1077|((x1078*x1079)*x1080));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1081 = 611296191U;
	uint16_t x1082 = 221U;
	volatile uint8_t x1083 = 5U;
	uint64_t x1084 = UINT64_MAX;
	uint64_t t176 = 97LLU;

    t176 = (x1081|((x1082*x1083)*x1084));

    if (t176 != 18446744073709550527LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1085 = 13702025U;
	int16_t x1086 = INT16_MIN;
	int16_t x1087 = INT16_MIN;
	uint64_t x1088 = 2858844792LLU;
	volatile uint64_t t177 = 1824614LLU;

    t177 = (x1085|((x1086*x1087)*x1088));

    if (t177 != 3069661221508682633LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1093 = 13448U;
	uint16_t x1094 = UINT16_MAX;
	int8_t x1096 = -1;

    t178 = (x1093|((x1094*x1095)*x1096));

    if (t178 != 3433011164383428555LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x1097 = 2457U;
	uint8_t x1098 = 6U;
	int64_t x1099 = -3605071LL;
	int32_t x1100 = 1;
	int64_t t179 = 713253317272239LL;

    t179 = (x1097|((x1098*x1099)*x1100));

    if (t179 != -21627969LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1102 = 53;
	int64_t x1103 = -118654LL;
	volatile int64_t t180 = -710LL;

    t180 = (x1101|((x1102*x1103)*x1104));

    if (t180 != 28504389LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1109 = -1;
	uint64_t x1110 = 3LLU;
	int8_t x1112 = INT8_MIN;
	uint64_t t181 = UINT64_MAX;

    t181 = (x1109|((x1110*x1111)*x1112));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1129 = 1613U;
	static uint16_t x1130 = 109U;
	uint32_t x1131 = 13U;
	uint8_t x1132 = UINT8_MAX;
	uint32_t t182 = 111441U;

    t182 = (x1129|((x1130*x1131)*x1132));

    if (t182 != 362367U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1142 = 1U;
	uint64_t x1144 = 3363403LLU;
	static volatile uint64_t t183 = UINT64_MAX;

    t183 = (x1141|((x1142*x1143)*x1144));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x1153 = 7U;
	static int64_t x1154 = -1LL;
	volatile uint64_t x1155 = 2327909487482181LLU;
	int16_t x1156 = INT16_MAX;

    t184 = (x1153|((x1154*x1155)*x1156));

    if (t184 != 15955110192219133255LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x1157 = 13;
	int32_t x1159 = -3;
	uint64_t x1160 = UINT64_MAX;
	volatile uint64_t t185 = 0LLU;

    t185 = (x1157|((x1158*x1159)*x1160));

    if (t185 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1165 = 6U;
	int8_t x1166 = INT8_MIN;
	int16_t x1167 = 2639;
	static volatile int16_t x1168 = 998;

    t186 = (x1165|((x1166*x1167)*x1168));

    if (t186 != 3957850886U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1174 = 74LLU;
	int8_t x1175 = INT8_MIN;
	uint32_t x1176 = UINT32_MAX;
	volatile uint64_t t187 = UINT64_MAX;

    t187 = (x1173|((x1174*x1175)*x1176));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1177 = 18;
	static volatile int16_t x1179 = INT16_MIN;
	static int32_t x1180 = INT32_MAX;
	static volatile uint64_t t188 = 31171487956964LLU;

    t188 = (x1177|((x1178*x1179)*x1180));

    if (t188 != 70368744144914LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x1185 = INT8_MAX;
	uint8_t x1186 = 114U;
	volatile uint64_t t189 = 170575LLU;

    t189 = (x1185|((x1186*x1187)*x1188));

    if (t189 != 127LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1193 = INT16_MIN;
	uint8_t x1195 = 2U;
	static uint32_t x1196 = 149997U;
	static volatile uint32_t t190 = 10638U;

    t190 = (x1193|((x1194*x1195)*x1196));

    if (t190 != 4294962990U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1198 = 2479060;
	volatile uint64_t x1199 = 419LLU;
	uint64_t t191 = 176LLU;

    t191 = (x1197|((x1198*x1199)*x1200));

    if (t191 != 18446744073709547517LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1201 = 86975U;
	int16_t x1202 = INT16_MIN;
	uint64_t x1203 = 27LLU;
	volatile int8_t x1204 = INT8_MIN;
	uint64_t t192 = 42LLU;

    t192 = (x1201|((x1202*x1203)*x1204));

    if (t192 != 113333183LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1213 = UINT16_MAX;
	int64_t x1214 = -1LL;
	static int64_t t193 = 3390062688361LL;

    t193 = (x1213|((x1214*x1215)*x1216));

    if (t193 != -3801089LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1225 = 7435U;
	volatile int16_t x1226 = INT16_MIN;
	volatile int64_t x1228 = -11220997LL;

    t194 = (x1225|((x1226*x1227)*x1228));

    if (t194 != 1103068896523LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1233 = -1;
	uint64_t x1235 = 48987323611160685LLU;
	int16_t x1236 = -28;
	uint64_t t195 = UINT64_MAX;

    t195 = (x1233|((x1234*x1235)*x1236));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1237 = 2U;
	static int8_t x1238 = INT8_MIN;
	int16_t x1239 = INT16_MIN;
	int64_t x1240 = -1LL;

    t196 = (x1237|((x1238*x1239)*x1240));

    if (t196 != -4194302LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1245 = INT32_MAX;
	uint16_t x1246 = 0U;
	int16_t x1247 = INT16_MAX;
	static volatile uint8_t x1248 = 1U;
	volatile int32_t t197 = INT32_MAX;

    t197 = (x1245|((x1246*x1247)*x1248));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1250 = UINT32_MAX;
	int8_t x1251 = 0;
	int16_t x1252 = -2028;
	static int64_t t198 = -530968072LL;

    t198 = (x1249|((x1250*x1251)*x1252));

    if (t198 != -16400605694597202LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1254 = 44;
	static uint16_t x1255 = UINT16_MAX;
	int16_t x1256 = -1;

    t199 = (x1253|((x1254*x1255)*x1256));

    if (t199 != -2672516) { NG(); } else { ; }
	
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

