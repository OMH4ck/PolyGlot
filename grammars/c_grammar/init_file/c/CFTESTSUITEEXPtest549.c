
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

static int16_t x11 = INT16_MIN;
uint64_t x27 = 20LLU;
int16_t x33 = INT16_MIN;
static uint16_t x45 = 13U;
int32_t x63 = INT32_MIN;
volatile uint64_t x79 = UINT64_MAX;
static uint64_t t10 = 10LLU;
static uint8_t x89 = UINT8_MAX;
uint64_t t13 = 0LLU;
int16_t x101 = INT16_MIN;
static int8_t x103 = 0;
int32_t x108 = -1;
volatile uint64_t t19 = 150023290987LLU;
int64_t x133 = -1LL;
uint32_t x141 = 1106126302U;
int64_t x142 = -1LL;
int64_t x164 = -1LL;
uint8_t x177 = UINT8_MAX;
uint8_t x190 = 80U;
int8_t x191 = INT8_MIN;
uint8_t x199 = 42U;
volatile uint64_t t30 = 2134333891902800684LLU;
volatile uint64_t t31 = 431221086761LLU;
volatile int32_t t34 = -20215580;
uint32_t x226 = 307502U;
uint8_t x235 = 0U;
int8_t x245 = -20;
uint64_t t38 = 3406064LLU;
volatile int64_t t40 = -106891264680110853LL;
static volatile uint32_t x263 = UINT32_MAX;
static uint32_t x264 = 1U;
static uint32_t t41 = 28031393U;
uint64_t t42 = 77339198LLU;
uint8_t x270 = 13U;
uint32_t x271 = 14279300U;
int16_t x273 = INT16_MIN;
volatile int64_t t46 = -802655812519593501LL;
uint16_t x303 = 28614U;
static uint8_t x304 = 3U;
static int8_t x305 = -1;
int8_t x310 = -1;
uint16_t x312 = 2925U;
volatile uint16_t x319 = 42U;
volatile int32_t t51 = 101228;
uint64_t x322 = 8LLU;
uint16_t x345 = 83U;
int64_t x348 = INT64_MAX;
uint16_t x350 = 7976U;
int8_t x351 = 1;
int8_t x361 = INT8_MIN;
int8_t x363 = INT8_MIN;
volatile int32_t t60 = -9230;
int32_t x373 = INT32_MAX;
uint32_t x377 = 1933009702U;
int32_t x379 = INT32_MAX;
static int16_t x380 = -46;
volatile uint8_t x414 = 8U;
uint8_t x416 = 59U;
static int64_t x420 = 13552827940LL;
int64_t t68 = -2453716606LL;
int64_t t69 = 550226747LL;
int32_t x431 = -1;
int64_t x442 = 3002409528LL;
volatile int32_t x444 = INT32_MIN;
uint8_t x455 = 4U;
volatile int64_t x456 = INT64_MIN;
int64_t x458 = -1LL;
volatile uint16_t x459 = UINT16_MAX;
int32_t x461 = -1;
int8_t x463 = 0;
int64_t t76 = 27266LL;
uint32_t x466 = UINT32_MAX;
int16_t x467 = 6350;
static int16_t x469 = 1;
int8_t x470 = 5;
uint32_t x482 = UINT32_MAX;
int8_t x492 = 14;
volatile int64_t t82 = -1427162439476115779LL;
uint64_t x496 = 6717067699407978LLU;
int8_t x523 = 0;
int8_t x524 = INT8_MIN;
int64_t t86 = 30478870202LL;
uint64_t x527 = 59520780LLU;
volatile int8_t x528 = -1;
volatile uint64_t t88 = 24446800LLU;
uint8_t x533 = 4U;
uint32_t x538 = 511341U;
int8_t x540 = INT8_MAX;
static int64_t t91 = 65749332698506LL;
int8_t x553 = -1;
int8_t x555 = -16;
int32_t t95 = -12;
volatile uint8_t x581 = 3U;
int32_t x584 = INT32_MIN;
static uint8_t x596 = UINT8_MAX;
int16_t x598 = INT16_MIN;
int8_t x599 = INT8_MIN;
uint32_t x631 = 18931U;
static int64_t t100 = -40591232634694541LL;
int64_t x639 = -7870394105124LL;
int8_t x665 = -61;
int64_t t106 = -532LL;
volatile int32_t x673 = INT32_MIN;
volatile uint64_t t108 = 1812104007765366LLU;
static uint16_t x693 = 14788U;
static uint16_t x696 = UINT16_MAX;
int8_t x705 = INT8_MIN;
uint64_t x706 = 352836774943LLU;
uint16_t x715 = UINT16_MAX;
int64_t t113 = -989424688LL;
volatile uint8_t x730 = UINT8_MAX;
uint8_t x742 = 2U;
int32_t t117 = 73464;
static int64_t x753 = 495LL;
volatile int64_t t119 = -8223842977LL;
static uint8_t x773 = 1U;
int16_t x790 = INT16_MIN;
static volatile int64_t t124 = 144663252LL;
static uint32_t x794 = 491U;
uint64_t x801 = UINT64_MAX;
int8_t x802 = 0;
static uint8_t x803 = 0U;
volatile int8_t x812 = 34;
volatile uint32_t t128 = 7904U;
uint32_t x823 = 431U;
int32_t x827 = INT32_MIN;
int64_t x829 = -1LL;
int64_t x830 = -1LL;
volatile int64_t x831 = -40310412057906018LL;
int16_t x832 = INT16_MIN;
volatile uint64_t x834 = 79718499455760172LLU;
int16_t x845 = INT16_MAX;
int64_t x848 = 160227283676674215LL;
int32_t x859 = 2;
static int64_t x869 = -24LL;
static int8_t x870 = 2;
volatile int32_t x871 = -1;
uint16_t x872 = 6U;
static int64_t x887 = INT64_MIN;
volatile int64_t x888 = INT64_MIN;
static int64_t t141 = -219LL;
volatile int16_t x890 = 3875;
uint32_t x903 = UINT32_MAX;
volatile uint8_t x906 = 3U;
int16_t x907 = INT16_MIN;
int64_t x908 = -1LL;
static uint64_t x911 = 17706724380484260LLU;
uint64_t x921 = UINT64_MAX;
static volatile int64_t t149 = 5376729LL;
static int16_t x933 = INT16_MIN;
static volatile int32_t x941 = 2;
int64_t x971 = -1LL;
uint32_t t157 = 37349U;
int16_t x982 = INT16_MIN;
int8_t x986 = INT8_MAX;
uint32_t x988 = 192862785U;
uint32_t t159 = 198335323U;
int8_t x995 = -6;
volatile uint32_t t160 = 20905832U;
uint64_t t162 = 1928LLU;
volatile uint16_t x1010 = 0U;
int8_t x1028 = INT8_MIN;
uint16_t x1037 = UINT16_MAX;
volatile int64_t x1041 = -1LL;
int32_t x1049 = INT32_MAX;
uint32_t x1051 = 3947U;
volatile int64_t x1052 = -2640664971LL;
uint16_t x1072 = 13895U;
volatile int64_t t171 = -36773697233496LL;
uint8_t x1077 = 16U;
volatile int64_t x1080 = 18275080354964LL;
static uint16_t x1091 = 757U;
int16_t x1094 = INT16_MIN;
uint16_t x1095 = UINT16_MAX;
static uint8_t x1096 = 1U;
uint16_t x1099 = 1U;
static int64_t t176 = -2818291409299179LL;
static int8_t x1101 = INT8_MIN;
static int8_t x1104 = INT8_MIN;
int8_t x1109 = INT8_MAX;
uint8_t x1120 = 10U;
static int32_t x1133 = -1;
int16_t x1136 = INT16_MIN;
int8_t x1146 = INT8_MIN;
static int32_t t182 = -43;
static uint8_t x1149 = 1U;
volatile uint64_t t183 = 54087199732148LLU;
volatile uint16_t x1161 = 6448U;
int64_t x1163 = -37089572LL;
int64_t x1171 = -122142470LL;
int16_t x1173 = INT16_MIN;
uint32_t t187 = 212029244U;
static int32_t x1177 = 1022;
int64_t x1179 = -184775LL;
int64_t t188 = 73657738022090LL;
static uint32_t x1181 = 13574916U;
static volatile int64_t t189 = -1LL;
uint8_t x1197 = 1U;
volatile uint64_t x1202 = 118LLU;
int8_t x1205 = 1;
int8_t x1206 = INT8_MIN;
int64_t x1210 = -1LL;
volatile int8_t x1219 = 0;
uint64_t t197 = 2220673717320700LLU;
uint64_t x1229 = 17066243215031LLU;
uint16_t x1230 = 5701U;
uint64_t x1232 = 28340062961027837LLU;
uint64_t t198 = 1158183804125863LLU;


void f0(void) {
    	static int64_t x1 = -1LL;
	uint8_t x2 = 50U;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = 80U;
	volatile int64_t t0 = 6942LL;

    t0 = (x1*((x2*x3)&x4));

    if (t0 != -64LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -1;
	volatile uint32_t x10 = 250913114U;
	volatile uint16_t x12 = 2640U;
	volatile uint32_t t1 = 2U;

    t1 = (x9*((x10*x11)&x12));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	int64_t x14 = -81720814630965LL;
	volatile int16_t x15 = -1;
	int8_t x16 = -1;
	volatile int64_t t2 = 40012875LL;

    t2 = (x13*((x14*x15)&x16));

    if (t2 != -81720814630965LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x21 = 403329416U;
	int16_t x22 = -2923;
	int16_t x23 = INT16_MIN;
	int32_t x24 = -9835;
	uint32_t t3 = 1U;

    t3 = (x21*((x22*x23)&x24));

    if (t3 != 1978400768U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x26 = 53;
	uint64_t x28 = 591143624996LLU;
	volatile uint64_t t4 = 15507352619150LLU;

    t4 = (x25*((x26*x27)&x28));

    if (t4 != 18446744073709547008LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x34 = -154;
	int16_t x35 = INT16_MIN;
	int8_t x36 = 39;
	volatile int32_t t5 = -1;

    t5 = (x33*((x34*x35)&x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x46 = INT32_MIN;
	uint32_t x47 = 108006U;
	uint64_t x48 = 265416LLU;
	uint64_t t6 = 38662166780750LLU;

    t6 = (x45*((x46*x47)&x48));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x53 = 1518284U;
	uint8_t x54 = UINT8_MAX;
	uint8_t x55 = 49U;
	int16_t x56 = -1;
	volatile uint32_t t7 = 15462U;

    t7 = (x53*((x54*x55)&x56));

    if (t7 != 1791089396U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = INT8_MAX;
	volatile uint64_t x62 = UINT64_MAX;
	volatile int64_t x64 = -31LL;
	static uint64_t t8 = 1LLU;

    t8 = (x61*((x62*x63)&x64));

    if (t8 != 272730423296LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = -60930711LL;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = 411;
	static volatile int64_t t9 = 12459922388303508LL;

    t9 = (x65*((x66*x67)&x68));

    if (t9 != -12582912LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x77 = -1LL;
	volatile int64_t x78 = INT64_MIN;
	static int64_t x80 = -565859624322822LL;

    t10 = (x77*((x78*x79)&x80));

    if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x81 = 7U;
	volatile int8_t x82 = 1;
	static volatile int16_t x83 = INT16_MIN;
	volatile int8_t x84 = 7;
	int32_t t11 = -4072;

    t11 = (x81*((x82*x83)&x84));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x90 = 3;
	uint32_t x91 = 1533653U;
	uint32_t x92 = 10380U;
	uint32_t t12 = 28U;

    t12 = (x89*((x90*x91)&x92));

    if (t12 != 2092020U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x93 = 6656884226233LLU;
	static uint32_t x94 = 106698U;
	uint8_t x95 = 10U;
	volatile int32_t x96 = INT32_MIN;

    t13 = (x93*((x94*x95)&x96));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x97 = 1528313083U;
	static int16_t x98 = INT16_MAX;
	int16_t x99 = -1;
	int8_t x100 = -6;
	uint32_t t14 = 39U;

    t14 = (x97*((x98*x99)&x100));

    if (t14 != 3850534912U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x102 = UINT8_MAX;
	static volatile int64_t x104 = -1LL;
	volatile int64_t t15 = -1LL;

    t15 = (x101*((x102*x103)&x104));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	volatile int8_t x107 = -1;
	uint64_t t16 = UINT64_MAX;

    t16 = (x105*((x106*x107)&x108));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x109 = -1;
	int16_t x110 = INT16_MAX;
	volatile int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t17 = 4944250;

    t17 = (x109*((x110*x111)&x112));

    if (t17 != -1073676289) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x121 = -514232;
	uint8_t x122 = 48U;
	volatile uint64_t x123 = 4LLU;
	static volatile uint64_t x124 = 253737228519900LLU;
	volatile uint64_t t18 = 13280LLU;

    t18 = (x121*((x122*x123)&x124));

    if (t18 != 18446744073610819072LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x129 = 10;
	uint64_t x130 = UINT64_MAX;
	static int32_t x131 = -1;
	int8_t x132 = INT8_MAX;

    t19 = (x129*((x130*x131)&x132));

    if (t19 != 10LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x134 = INT8_MIN;
	volatile uint64_t x135 = 167LLU;
	uint8_t x136 = 92U;
	uint64_t t20 = 1000657674613830664LLU;

    t20 = (x133*((x134*x135)&x136));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MAX;
	volatile uint64_t t21 = 5565659LLU;

    t21 = (x141*((x142*x143)&x144));

    if (t21 != 1106126302LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x145 = 26U;
	static int8_t x146 = INT8_MIN;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = 96;
	volatile int32_t t22 = -1;

    t22 = (x145*((x146*x147)&x148));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x153 = 191U;
	int64_t x154 = -25154LL;
	volatile uint64_t x155 = 125888755LLU;
	static int64_t x156 = -1LL;
	uint64_t t23 = 282129933163681982LLU;

    t23 = (x153*((x154*x155)&x156));

    if (t23 != 18446139252012587046LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x157 = INT8_MIN;
	int8_t x158 = -13;
	int64_t x159 = -1LL;
	volatile int8_t x160 = -1;
	volatile int64_t t24 = -362476184LL;

    t24 = (x157*((x158*x159)&x160));

    if (t24 != -1664LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x161 = UINT32_MAX;
	int16_t x162 = 984;
	static uint64_t x163 = 1LLU;
	volatile uint64_t t25 = 485073LLU;

    t25 = (x161*((x162*x163)&x164));

    if (t25 != 4226247818280LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x165 = 39;
	volatile int64_t x166 = -85LL;
	volatile int32_t x167 = -1;
	volatile uint64_t x168 = 1135441LLU;
	volatile uint64_t t26 = 107LLU;

    t26 = (x165*((x166*x167)&x168));

    if (t26 != 3159LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x178 = 12078U;
	int16_t x179 = 15178;
	int64_t x180 = -1146193792LL;
	static volatile int64_t t27 = -29069426LL;

    t27 = (x177*((x178*x179)&x180));

    if (t27 != 45659965440LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x185 = 125514417;
	int32_t x186 = INT32_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	int16_t x188 = -1;
	uint32_t t28 = 998029655U;

    t28 = (x185*((x186*x187)&x188));

    if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x189 = 1661331U;
	int8_t x192 = 0;
	uint32_t t29 = 9640U;

    t29 = (x189*((x190*x191)&x192));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x197 = -1554LL;
	uint8_t x198 = 23U;
	uint64_t x200 = 3454828704403208746LLU;

    t30 = (x197*((x198*x199)&x200));

    if (t30 != 18446744073708752860LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = -734LL;
	static uint64_t x207 = 0LLU;
	static int16_t x208 = INT16_MAX;

    t31 = (x205*((x206*x207)&x208));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int64_t x210 = INT64_MIN;
	uint64_t x211 = 3417328600LLU;
	int32_t x212 = INT32_MAX;
	uint64_t t32 = 0LLU;

    t32 = (x209*((x210*x211)&x212));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x213 = 1U;
	int8_t x214 = -1;
	int32_t x215 = -1;
	uint8_t x216 = 111U;
	int32_t t33 = -1;

    t33 = (x213*((x214*x215)&x216));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x221 = 1U;
	uint8_t x222 = 2U;
	int16_t x223 = -1;
	int8_t x224 = INT8_MIN;

    t34 = (x221*((x222*x223)&x224));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x225 = -1LL;
	volatile int32_t x227 = INT32_MAX;
	volatile int64_t x228 = INT64_MIN;
	int64_t t35 = 1459LL;

    t35 = (x225*((x226*x227)&x228));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x233 = 1687212855U;
	volatile uint16_t x234 = 13U;
	uint32_t x236 = 1797985U;
	uint32_t t36 = 9669U;

    t36 = (x233*((x234*x235)&x236));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x237 = 994;
	int64_t x238 = 62778027LL;
	uint16_t x239 = 0U;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t37 = 1687207369LLU;

    t37 = (x237*((x238*x239)&x240));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x246 = 105242989281LLU;
	static uint64_t x247 = UINT64_MAX;
	int8_t x248 = -1;

    t38 = (x245*((x246*x247)&x248));

    if (t38 != 2104859785620LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x253 = 9U;
	int8_t x254 = -1;
	uint16_t x255 = 100U;
	volatile int32_t x256 = -1;
	int32_t t39 = 7823;

    t39 = (x253*((x254*x255)&x256));

    if (t39 != -900) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x257 = -221173800LL;
	int32_t x258 = 2;
	int64_t x259 = 7749513LL;
	uint8_t x260 = 2U;

    t40 = (x257*((x258*x259)&x260));

    if (t40 != -442347600LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x261 = 0U;
	int8_t x262 = 1;

    t41 = (x261*((x262*x263)&x264));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x265 = 1522LLU;
	int16_t x266 = INT16_MAX;
	static int16_t x267 = -23;
	static int16_t x268 = -51;

    t42 = (x265*((x266*x267)&x268));

    if (t42 != 18446744072562482618LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x269 = UINT8_MAX;
	volatile uint16_t x272 = 10643U;
	uint32_t t43 = 107941904U;

    t43 = (x269*((x270*x271)&x272));

    if (t43 != 36720U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x274 = 0;
	uint8_t x275 = 1U;
	volatile int16_t x276 = -1;
	volatile int32_t t44 = -974468691;

    t44 = (x273*((x274*x275)&x276));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x285 = -1LL;
	static uint64_t x286 = 52415358LLU;
	volatile int16_t x287 = INT16_MIN;
	int16_t x288 = -1;
	static volatile uint64_t t45 = 35253105736LLU;

    t45 = (x285*((x286*x287)&x288));

    if (t45 != 1717546450944LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x289 = -1LL;
	uint8_t x290 = 1U;
	static int16_t x291 = -1;
	uint8_t x292 = 37U;

    t46 = (x289*((x290*x291)&x292));

    if (t46 != -37LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x297 = 377;
	int32_t x298 = 42;
	static volatile int8_t x299 = INT8_MAX;
	static volatile int8_t x300 = -1;
	static int32_t t47 = -51;

    t47 = (x297*((x298*x299)&x300));

    if (t47 != 2010918) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x301 = 802U;
	uint32_t x302 = UINT32_MAX;
	uint32_t t48 = 1490586016U;

    t48 = (x301*((x302*x303)&x304));

    if (t48 != 1604U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x306 = 204;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -47324904;
	volatile int32_t t49 = 0;

    t49 = (x305*((x306*x307)&x308));

    if (t49 != 49807360) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x309 = INT64_MIN;
	static int8_t x311 = INT8_MIN;
	int64_t t50 = -2085022066923040880LL;

    t50 = (x309*((x310*x311)&x312));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x317 = -1;
	static int32_t x318 = -1;
	int32_t x320 = 231552;

    t51 = (x317*((x318*x319)&x320));

    if (t51 != -231552) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	int64_t x324 = -1LL;
	volatile uint64_t t52 = 677357216LLU;

    t52 = (x321*((x322*x323)&x324));

    if (t52 != 17179869184LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x325 = 7477U;
	uint64_t x326 = 13LLU;
	volatile int8_t x327 = INT8_MIN;
	int8_t x328 = -13;
	uint64_t t53 = 164921129289LLU;

    t53 = (x325*((x326*x327)&x328));

    if (t53 != 18446744073697109888LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x329 = INT32_MAX;
	int16_t x330 = -3;
	int8_t x331 = -19;
	int8_t x332 = INT8_MIN;
	int32_t t54 = -1363;

    t54 = (x329*((x330*x331)&x332));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x333 = -1LL;
	uint32_t x334 = 132019228U;
	int32_t x335 = INT32_MIN;
	int32_t x336 = -1;
	int64_t t55 = -1259LL;

    t55 = (x333*((x334*x335)&x336));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x341 = -1LL;
	volatile int64_t x342 = -1317LL;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	int64_t t56 = 1886718LL;

    t56 = (x341*((x342*x343)&x344));

    if (t56 != -43155456LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x346 = -1LL;
	volatile uint16_t x347 = 0U;
	volatile int64_t t57 = -3311247766506985602LL;

    t57 = (x345*((x346*x347)&x348));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x349 = 18886U;
	static uint16_t x352 = 2U;
	volatile int32_t t58 = 72;

    t58 = (x349*((x350*x351)&x352));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x362 = -172040LL;
	uint64_t x364 = 14631LLU;
	static volatile uint64_t t59 = 85344LLU;

    t59 = (x361*((x362*x363)&x364));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x366 = -1;
	static uint16_t x367 = 404U;
	uint16_t x368 = 7120U;

    t60 = (x365*((x366*x367)&x368));

    if (t60 != -220200960) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x369 = INT64_MAX;
	volatile uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 2U;
	static uint64_t t61 = 13730LLU;

    t61 = (x369*((x370*x371)&x372));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x374 = -1;
	static uint64_t x375 = 14LLU;
	uint32_t x376 = UINT32_MAX;
	uint64_t t62 = 58113559LLU;

    t62 = (x373*((x374*x375)&x376));

    if (t62 != 9223372002495037454LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x378 = 6419U;
	uint32_t t63 = 799047183U;

    t63 = (x377*((x378*x379)&x380));

    if (t63 != 3380117632U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x381 = INT16_MIN;
	volatile uint32_t x382 = 1792045958U;
	int8_t x383 = 2;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t64 = 0U;

    t64 = (x381*((x382*x383)&x384));

    if (t64 != 2356805632U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x385 = 86U;
	int16_t x386 = -1;
	static int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t65 = 196323;

    t65 = (x385*((x386*x387)&x388));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x405 = -1;
	static uint32_t x406 = UINT32_MAX;
	int64_t x407 = -1LL;
	int32_t x408 = INT32_MIN;
	volatile int64_t t66 = 3018895042718162LL;

    t66 = (x405*((x406*x407)&x408));

    if (t66 != 4294967296LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x413 = INT16_MIN;
	static int16_t x415 = 1;
	int32_t t67 = -264;

    t67 = (x413*((x414*x415)&x416));

    if (t67 != -262144) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x417 = 0;
	static int8_t x418 = -1;
	static int16_t x419 = -1;

    t68 = (x417*((x418*x419)&x420));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x421 = 4014U;
	int64_t x422 = -1LL;
	volatile uint32_t x423 = UINT32_MAX;
	volatile int16_t x424 = -107;

    t69 = (x421*((x422*x423)&x424));

    if (t69 != -17239998722130LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x429 = -1;
	static int8_t x430 = -1;
	static uint8_t x432 = UINT8_MAX;
	int32_t t70 = 439661;

    t70 = (x429*((x430*x431)&x432));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x433 = INT32_MAX;
	uint32_t x434 = 116U;
	int32_t x435 = -24977320;
	int8_t x436 = -1;
	volatile uint32_t t71 = 0U;

    t71 = (x433*((x434*x435)&x436));

    if (t71 != 2897369120U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x441 = -769;
	uint16_t x443 = 15683U;
	int64_t t72 = 813LL;

    t72 = (x441*((x442*x443)&x444));

    if (t72 != -36208923652390912LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x449 = 5U;
	volatile uint8_t x450 = 1U;
	volatile uint64_t x451 = 4387196LLU;
	uint16_t x452 = 46U;
	uint64_t t73 = 121912102305718737LLU;

    t73 = (x449*((x450*x451)&x452));

    if (t73 != 220LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile uint32_t x454 = 35866569U;
	volatile int64_t t74 = -1LL;

    t74 = (x453*((x454*x455)&x456));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x457 = 9715982LLU;
	int16_t x460 = INT16_MAX;
	static volatile uint64_t t75 = 27684LLU;

    t75 = (x457*((x458*x459)&x460));

    if (t75 != 9715982LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x462 = 151LL;
	static volatile uint32_t x464 = 898329U;

    t76 = (x461*((x462*x463)&x464));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile int16_t x468 = -1;
	uint64_t t77 = 120923241168LLU;

    t77 = (x465*((x466*x467)&x468));

    if (t77 != 18446744069414590670LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x471 = -1;
	static int8_t x472 = INT8_MIN;
	int32_t t78 = 131177379;

    t78 = (x469*((x470*x471)&x472));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x473 = 32U;
	static int32_t x474 = -1;
	int64_t x475 = INT64_MAX;
	uint32_t x476 = 3U;
	static volatile int64_t t79 = -9127710480127324LL;

    t79 = (x473*((x474*x475)&x476));

    if (t79 != 32LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x481 = 0;
	static int16_t x483 = INT16_MIN;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t80 = 1LLU;

    t80 = (x481*((x482*x483)&x484));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x485 = 79U;
	static uint32_t x486 = 851U;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MAX;
	volatile uint32_t t81 = 198U;

    t81 = (x485*((x486*x487)&x488));

    if (t81 != 1611363U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x489 = 2550;
	int64_t x490 = 82LL;
	uint32_t x491 = UINT32_MAX;

    t82 = (x489*((x490*x491)&x492));

    if (t82 != 35700LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x493 = INT8_MAX;
	int16_t x494 = -42;
	static uint16_t x495 = 3U;
	static volatile uint64_t t83 = 1186235975426225LLU;

    t83 = (x493*((x494*x495)&x496));

    if (t83 != 853067597824799998LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x501 = -1070576305527066388LL;
	uint64_t x502 = 3693077LLU;
	int8_t x503 = 5;
	int32_t x504 = 108763;
	volatile uint64_t t84 = 1316LLU;

    t84 = (x501*((x502*x503)&x504));

    if (t84 != 10823452045329675084LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x509 = -245692LL;
	volatile uint16_t x510 = 190U;
	static uint8_t x511 = 0U;
	static volatile int64_t x512 = -1LL;
	static int64_t t85 = -335356926LL;

    t85 = (x509*((x510*x511)&x512));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x521 = INT16_MAX;
	int64_t x522 = 4526559131763662356LL;

    t86 = (x521*((x522*x523)&x524));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x525 = 2U;
	int32_t x526 = INT32_MIN;
	static uint64_t t87 = 25LLU;

    t87 = (x525*((x526*x527)&x528));

    if (t87 != 18191104270177140736LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x529 = INT64_MIN;
	static int64_t x530 = INT64_MIN;
	volatile uint64_t x531 = UINT64_MAX;
	volatile uint16_t x532 = 4U;

    t88 = (x529*((x530*x531)&x532));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x534 = INT16_MAX;
	uint16_t x535 = 5U;
	int16_t x536 = 0;
	static volatile int32_t t89 = -605264317;

    t89 = (x533*((x534*x535)&x536));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x537 = INT32_MIN;
	uint64_t x539 = 397570339792LLU;
	uint64_t t90 = 766722614LLU;

    t90 = (x537*((x538*x539)&x540));

    if (t90 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x545 = -1LL;
	int32_t x546 = -1;
	volatile uint16_t x547 = UINT16_MAX;
	int16_t x548 = 57;

    t91 = (x545*((x546*x547)&x548));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x549 = -1;
	static volatile uint8_t x550 = 107U;
	int64_t x551 = -7LL;
	volatile uint32_t x552 = 15816515U;
	int64_t t92 = 484358106LL;

    t92 = (x549*((x550*x551)&x552));

    if (t92 != -15815939LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x554 = 56027;
	int8_t x556 = INT8_MIN;
	volatile int32_t t93 = 0;

    t93 = (x553*((x554*x555)&x556));

    if (t93 != 896512) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x557 = 121LLU;
	uint8_t x558 = 0U;
	uint8_t x559 = 12U;
	int32_t x560 = -6517799;
	uint64_t t94 = 2032411LLU;

    t94 = (x557*((x558*x559)&x560));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x561 = 158U;
	int16_t x562 = INT16_MIN;
	int16_t x563 = 0;
	volatile uint8_t x564 = UINT8_MAX;

    t95 = (x561*((x562*x563)&x564));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x582 = 0U;
	int16_t x583 = -187;
	volatile int32_t t96 = 2141869;

    t96 = (x581*((x582*x583)&x584));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MIN;
	volatile int32_t x595 = -27087;
	int32_t t97 = 63;

    t97 = (x593*((x594*x595)&x596));

    if (t97 != -16384) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x597 = 2LL;
	static int16_t x600 = INT16_MIN;
	int64_t t98 = -7418325LL;

    t98 = (x597*((x598*x599)&x600));

    if (t98 != 8388608LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = INT16_MIN;
	int8_t x632 = 3;
	volatile uint32_t t99 = 104U;

    t99 = (x629*((x630*x631)&x632));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x633 = INT32_MIN;
	volatile int64_t x634 = -1LL;
	int16_t x635 = -7150;
	int8_t x636 = -1;

    t100 = (x633*((x634*x635)&x636));

    if (t100 != -15354508083200LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x637 = UINT16_MAX;
	int8_t x638 = INT8_MIN;
	int64_t x640 = INT64_MIN;
	static int64_t t101 = -5965063443LL;

    t101 = (x637*((x638*x639)&x640));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x641 = -143;
	uint8_t x642 = 83U;
	uint32_t x643 = 7311054U;
	volatile uint16_t x644 = UINT16_MAX;
	uint32_t t102 = 302U;

    t102 = (x641*((x642*x643)&x644));

    if (t102 != 4292156202U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x649 = 3;
	uint64_t x650 = 54468721820LLU;
	static int32_t x651 = INT32_MIN;
	int64_t x652 = -1LL;
	volatile uint64_t t103 = 82577LLU;

    t103 = (x649*((x650*x651)&x652));

    if (t103 != 18022813166458634240LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	static int16_t x662 = 1;
	static volatile int16_t x663 = INT16_MAX;
	int16_t x664 = 468;
	volatile uint32_t t104 = 118U;

    t104 = (x661*((x662*x663)&x664));

    if (t104 != 4294966828U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x666 = -1;
	static int64_t x667 = INT64_MAX;
	volatile uint64_t x668 = 154433548490259LLU;
	volatile uint64_t t105 = 29736459789655196LLU;

    t105 = (x665*((x666*x667)&x668));

    if (t105 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x669 = -1;
	volatile int16_t x670 = INT16_MIN;
	int64_t x671 = -3848LL;
	int16_t x672 = INT16_MIN;

    t106 = (x669*((x670*x671)&x672));

    if (t106 != -126091264LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x674 = -754620;
	static uint8_t x675 = UINT8_MAX;
	static uint64_t x676 = 1608LLU;
	static uint64_t t107 = 13LLU;

    t107 = (x673*((x674*x675)&x676));

    if (t107 != 18446740757994799104LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MIN;
	uint64_t x679 = UINT64_MAX;
	int32_t x680 = -1;

    t108 = (x677*((x678*x679)&x680));

    if (t108 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x694 = 3LLU;
	int64_t x695 = INT64_MAX;
	uint64_t t109 = 30LLU;

    t109 = (x693*((x694*x695)&x696));

    if (t109 != 969102004LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x707 = INT32_MIN;
	static uint64_t x708 = 32319765LLU;
	static volatile uint64_t t110 = 5033952911318LLU;

    t110 = (x705*((x706*x707)&x708));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x713 = 49U;
	uint64_t x714 = UINT64_MAX;
	int32_t x716 = INT32_MIN;
	static volatile uint64_t t111 = 9246532LLU;

    t111 = (x713*((x714*x715)&x716));

    if (t111 != 18446743968482852864LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x717 = 139468707673376252LLU;
	int16_t x718 = -6;
	static int16_t x719 = INT16_MIN;
	uint32_t x720 = 692U;
	volatile uint64_t t112 = 80307LLU;

    t112 = (x717*((x718*x719)&x720));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x721 = INT8_MIN;
	static int32_t x722 = 0;
	static volatile int64_t x723 = INT64_MAX;
	static int16_t x724 = -1;

    t113 = (x721*((x722*x723)&x724));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x729 = UINT32_MAX;
	int32_t x731 = -1;
	uint16_t x732 = 20U;
	volatile uint32_t t114 = 3313601U;

    t114 = (x729*((x730*x731)&x732));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x737 = -1;
	static int64_t x738 = -1LL;
	int32_t x739 = -15859992;
	static int64_t x740 = INT64_MIN;
	int64_t t115 = 277561700797316991LL;

    t115 = (x737*((x738*x739)&x740));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x741 = INT16_MIN;
	static uint32_t x743 = UINT32_MAX;
	static int32_t x744 = INT32_MIN;
	volatile uint32_t t116 = 10U;

    t116 = (x741*((x742*x743)&x744));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x745 = 29U;
	static int16_t x746 = INT16_MAX;
	int16_t x747 = -1;
	int8_t x748 = INT8_MIN;

    t117 = (x745*((x746*x747)&x748));

    if (t117 != -950272) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x749 = 322U;
	int16_t x750 = 6632;
	int8_t x751 = INT8_MAX;
	uint64_t x752 = 12857LLU;
	volatile uint64_t t118 = 45552LLU;

    t118 = (x749*((x750*x751)&x752));

    if (t118 != 1491504LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x754 = -1;
	uint8_t x755 = 26U;
	int8_t x756 = 1;

    t119 = (x753*((x754*x755)&x756));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x757 = 0;
	volatile int8_t x758 = INT8_MIN;
	uint32_t x759 = UINT32_MAX;
	int8_t x760 = INT8_MIN;
	uint32_t t120 = 675359U;

    t120 = (x757*((x758*x759)&x760));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x774 = 16U;
	static int32_t x775 = 32236;
	int16_t x776 = -496;
	int32_t t121 = -24858363;

    t121 = (x773*((x774*x775)&x776));

    if (t121 != 515584) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x777 = INT64_MIN;
	int8_t x778 = -1;
	uint64_t x779 = 4000280720LLU;
	static int32_t x780 = -1;
	static uint64_t t122 = 13393068375LLU;

    t122 = (x777*((x778*x779)&x780));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x781 = -1;
	volatile uint8_t x782 = 28U;
	volatile int8_t x783 = INT8_MIN;
	volatile uint32_t x784 = 166U;
	volatile uint32_t t123 = 105943916U;

    t123 = (x781*((x782*x783)&x784));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x789 = -1LL;
	uint8_t x791 = UINT8_MAX;
	int16_t x792 = INT16_MIN;

    t124 = (x789*((x790*x791)&x792));

    if (t124 != 8355840LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x793 = INT16_MIN;
	static volatile int64_t x795 = 136LL;
	uint32_t x796 = 2931U;
	int64_t t125 = -187871915331LL;

    t125 = (x793*((x794*x795)&x796));

    if (t125 != -2621440LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x797 = -1;
	volatile int8_t x798 = 3;
	int64_t x799 = 2LL;
	static int16_t x800 = -1;
	int64_t t126 = 44476255188420LL;

    t126 = (x797*((x798*x799)&x800));

    if (t126 != -6LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x804 = INT32_MIN;
	uint64_t t127 = 1LLU;

    t127 = (x801*((x802*x803)&x804));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile uint16_t x810 = 13179U;
	static volatile int16_t x811 = -8;

    t128 = (x809*((x810*x811)&x812));

    if (t128 != 4294967264U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x817 = INT32_MIN;
	static uint8_t x818 = 23U;
	static int64_t x819 = -1LL;
	int8_t x820 = 7;
	volatile int64_t t129 = 614371035696LL;

    t129 = (x817*((x818*x819)&x820));

    if (t129 != -2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x821 = 6U;
	volatile int8_t x822 = INT8_MIN;
	static int16_t x824 = INT16_MIN;
	uint32_t t130 = 1624261U;

    t130 = (x821*((x822*x823)&x824));

    if (t130 != 4294574080U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x825 = 0;
	volatile uint32_t x826 = UINT32_MAX;
	static uint8_t x828 = UINT8_MAX;
	uint32_t t131 = 998U;

    t131 = (x825*((x826*x827)&x828));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t t132 = -11834LL;

    t132 = (x829*((x830*x831)&x832));

    if (t132 != -40310412057903104LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x833 = UINT32_MAX;
	volatile int8_t x835 = -1;
	static volatile uint32_t x836 = 2762562U;
	uint64_t t133 = 185100209477859030LLU;

    t133 = (x833*((x834*x835)&x836));

    if (t133 != 11259273943711680LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x841 = 68;
	static uint16_t x842 = 733U;
	volatile uint8_t x843 = UINT8_MAX;
	int64_t x844 = INT64_MIN;
	volatile int64_t t134 = 3767338LL;

    t134 = (x841*((x842*x843)&x844));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x846 = UINT32_MAX;
	uint8_t x847 = UINT8_MAX;
	int64_t t135 = 267675464LL;

    t135 = (x845*((x846*x847)&x848));

    if (t135 != 82941273229311LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x849 = INT16_MAX;
	uint32_t x850 = 0U;
	int16_t x851 = -1;
	uint16_t x852 = 117U;
	volatile uint32_t t136 = 4U;

    t136 = (x849*((x850*x851)&x852));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x853 = INT32_MIN;
	int16_t x854 = INT16_MAX;
	static volatile uint8_t x855 = 1U;
	int32_t x856 = INT32_MIN;
	int32_t t137 = -60463207;

    t137 = (x853*((x854*x855)&x856));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x857 = UINT8_MAX;
	int8_t x858 = -1;
	int8_t x860 = 1;
	static volatile int32_t t138 = -1273469;

    t138 = (x857*((x858*x859)&x860));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t t139 = -1LL;

    t139 = (x869*((x870*x871)&x872));

    if (t139 != -144LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x881 = 112828;
	volatile uint16_t x882 = 95U;
	volatile int16_t x883 = INT16_MAX;
	volatile int64_t x884 = -206LL;
	int64_t t140 = 1216115266928LL;

    t140 = (x881*((x882*x883)&x884));

    if (t140 != 351203777408LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x885 = -50469129LL;
	int8_t x886 = 0;

    t141 = (x885*((x886*x887)&x888));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x889 = INT64_MIN;
	uint32_t x891 = 0U;
	int8_t x892 = INT8_MAX;
	int64_t t142 = 1792241LL;

    t142 = (x889*((x890*x891)&x892));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x897 = -1;
	int32_t x898 = 37312350;
	static uint32_t x899 = 32184740U;
	static uint64_t x900 = UINT64_MAX;
	static uint64_t t143 = 23LLU;

    t143 = (x897*((x898*x899)&x900));

    if (t143 != 18446744071166876104LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x901 = 12125U;
	static int8_t x902 = -1;
	static int16_t x904 = 1;
	uint32_t t144 = 84097U;

    t144 = (x901*((x902*x903)&x904));

    if (t144 != 12125U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x905 = 197;
	int64_t t145 = -990206135079984558LL;

    t145 = (x905*((x906*x907)&x908));

    if (t145 != -19365888LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x909 = 0LLU;
	uint64_t x910 = UINT64_MAX;
	volatile int32_t x912 = 5218341;
	volatile uint64_t t146 = 6303647631679LLU;

    t146 = (x909*((x910*x911)&x912));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x917 = -1;
	uint8_t x918 = 11U;
	int64_t x919 = 3034LL;
	static volatile int32_t x920 = INT32_MAX;
	volatile int64_t t147 = -177213389059652725LL;

    t147 = (x917*((x918*x919)&x920));

    if (t147 != -33374LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x922 = INT16_MIN;
	int16_t x923 = 1326;
	int16_t x924 = 0;
	uint64_t t148 = 3277087125LLU;

    t148 = (x921*((x922*x923)&x924));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x925 = INT32_MAX;
	int8_t x926 = INT8_MIN;
	uint8_t x927 = 14U;
	static int64_t x928 = -66LL;

    t149 = (x925*((x926*x927)&x928));

    if (t149 != -3848290695424LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x934 = INT16_MIN;
	volatile int8_t x935 = 0;
	uint8_t x936 = 6U;
	volatile int32_t t150 = 3054;

    t150 = (x933*((x934*x935)&x936));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x942 = 14U;
	volatile int8_t x943 = -1;
	int32_t x944 = -1;
	volatile int32_t t151 = -3159;

    t151 = (x941*((x942*x943)&x944));

    if (t151 != -28) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x953 = -1;
	volatile uint64_t x954 = UINT64_MAX;
	uint64_t x955 = 0LLU;
	uint16_t x956 = UINT16_MAX;
	volatile uint64_t t152 = 744419753LLU;

    t152 = (x953*((x954*x955)&x956));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x961 = INT8_MIN;
	int8_t x962 = -1;
	int8_t x963 = -16;
	uint8_t x964 = UINT8_MAX;
	static volatile int32_t t153 = 80;

    t153 = (x961*((x962*x963)&x964));

    if (t153 != -2048) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x965 = INT64_MIN;
	int8_t x966 = INT8_MIN;
	int8_t x967 = -1;
	int8_t x968 = INT8_MAX;
	volatile int64_t t154 = -11271LL;

    t154 = (x965*((x966*x967)&x968));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x969 = -1;
	int32_t x970 = INT32_MAX;
	int16_t x972 = 46;
	volatile int64_t t155 = 16989680145LL;

    t155 = (x969*((x970*x971)&x972));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x973 = INT16_MAX;
	int32_t x974 = INT32_MIN;
	uint64_t x975 = 0LLU;
	int8_t x976 = INT8_MIN;
	uint64_t t156 = 2135584697975LLU;

    t156 = (x973*((x974*x975)&x976));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x977 = INT16_MAX;
	uint32_t x978 = UINT32_MAX;
	uint32_t x979 = 1081277260U;
	uint8_t x980 = UINT8_MAX;

    t157 = (x977*((x978*x979)&x980));

    if (t157 != 5898060U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x981 = -1;
	int8_t x983 = -3;
	static uint8_t x984 = 113U;
	int32_t t158 = 726583;

    t158 = (x981*((x982*x983)&x984));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x985 = 613;
	uint8_t x987 = UINT8_MAX;

    t159 = (x985*((x986*x987)&x988));

    if (t159 != 14124133U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x993 = UINT32_MAX;
	int8_t x994 = -1;
	volatile int16_t x996 = 7955;

    t160 = (x993*((x994*x995)&x996));

    if (t160 != 4294967294U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x997 = INT32_MAX;
	uint64_t x998 = 42689LLU;
	int16_t x999 = 91;
	volatile int32_t x1000 = 105818;
	static uint64_t t161 = 6841945793LLU;

    t161 = (x997*((x998*x999)&x1000));

    if (t161 != 142992346119142LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x1001 = 14512722585047050LLU;
	static int16_t x1002 = INT16_MIN;
	static uint8_t x1003 = 1U;
	int8_t x1004 = 0;

    t162 = (x1001*((x1002*x1003)&x1004));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1005 = 7808960LL;
	static int8_t x1006 = INT8_MIN;
	volatile int8_t x1007 = -1;
	volatile int16_t x1008 = INT16_MAX;
	static volatile int64_t t163 = -11708718175447895LL;

    t163 = (x1005*((x1006*x1007)&x1008));

    if (t163 != 999546880LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1009 = INT64_MAX;
	static uint16_t x1011 = 7U;
	volatile int8_t x1012 = -32;
	int64_t t164 = -46951467LL;

    t164 = (x1009*((x1010*x1011)&x1012));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1025 = 131U;
	static int8_t x1026 = 25;
	static uint16_t x1027 = 15U;
	static int32_t t165 = 65598203;

    t165 = (x1025*((x1026*x1027)&x1028));

    if (t165 != 33536) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1033 = -1;
	uint64_t x1034 = 423141674975LLU;
	volatile uint32_t x1035 = 703652U;
	int8_t x1036 = INT8_MAX;
	uint64_t t166 = 3LLU;

    t166 = (x1033*((x1034*x1035)&x1036));

    if (t166 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1038 = UINT32_MAX;
	static int32_t x1039 = -1;
	uint32_t x1040 = UINT32_MAX;
	static volatile uint32_t t167 = 477U;

    t167 = (x1037*((x1038*x1039)&x1040));

    if (t167 != 65535U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1042 = -59;
	static uint16_t x1043 = 13080U;
	volatile int16_t x1044 = INT16_MIN;
	volatile int64_t t168 = -129419401LL;

    t168 = (x1041*((x1042*x1043)&x1044));

    if (t168 != 786432LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1045 = INT8_MIN;
	uint64_t x1046 = 6207948861572553810LLU;
	int16_t x1047 = 4604;
	int32_t x1048 = INT32_MIN;
	volatile uint64_t t169 = 62693460090LLU;

    t169 = (x1045*((x1046*x1047)&x1048));

    if (t169 != 13312163585338638336LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1050 = -7952;
	int64_t t170 = 244135152593287171LL;

    t170 = (x1049*((x1050*x1051)&x1052));

    if (t170 != 3530824477036247984LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1069 = UINT8_MAX;
	int64_t x1070 = INT64_MIN;
	volatile uint8_t x1071 = 0U;

    t171 = (x1069*((x1070*x1071)&x1072));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x1078 = 4865071LLU;
	int32_t x1079 = -12572;
	uint64_t t172 = 293487874LLU;

    t172 = (x1077*((x1078*x1079)&x1080));

    if (t172 != 291422670588224LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x1085 = 6U;
	int16_t x1086 = INT16_MIN;
	static int16_t x1087 = 18;
	uint16_t x1088 = UINT16_MAX;
	static int32_t t173 = 56;

    t173 = (x1085*((x1086*x1087)&x1088));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1089 = -1LL;
	uint64_t x1090 = UINT64_MAX;
	uint32_t x1092 = UINT32_MAX;
	uint64_t t174 = 6353LLU;

    t174 = (x1089*((x1090*x1091)&x1092));

    if (t174 != 18446744069414585077LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1093 = 1411681871LL;
	volatile int64_t t175 = -191075709841158430LL;

    t175 = (x1093*((x1094*x1095)&x1096));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1097 = -1861;
	uint16_t x1098 = 3105U;
	int64_t x1100 = INT64_MIN;

    t176 = (x1097*((x1098*x1099)&x1100));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1102 = 2657U;
	int8_t x1103 = 1;
	volatile uint32_t t177 = 2008628U;

    t177 = (x1101*((x1102*x1103)&x1104));

    if (t177 != 4294639616U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1110 = -1LL;
	int32_t x1111 = -14;
	uint8_t x1112 = 2U;
	int64_t t178 = 3271012539LL;

    t178 = (x1109*((x1110*x1111)&x1112));

    if (t178 != 254LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x1117 = INT64_MIN;
	volatile int32_t x1118 = -3969;
	uint8_t x1119 = UINT8_MAX;
	int64_t t179 = -169744LL;

    t179 = (x1117*((x1118*x1119)&x1120));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1129 = 0;
	static int16_t x1130 = INT16_MIN;
	static uint32_t x1131 = 180727905U;
	int8_t x1132 = INT8_MIN;
	uint32_t t180 = 647828838U;

    t180 = (x1129*((x1130*x1131)&x1132));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1134 = 1005445971LLU;
	uint64_t x1135 = UINT64_MAX;
	uint64_t t181 = 1129477755967LLU;

    t181 = (x1133*((x1134*x1135)&x1136));

    if (t181 != 1005453312LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1145 = INT32_MAX;
	int32_t x1147 = -1;
	int16_t x1148 = 2;

    t182 = (x1145*((x1146*x1147)&x1148));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1150 = 6U;
	int8_t x1151 = 2;
	uint64_t x1152 = UINT64_MAX;

    t183 = (x1149*((x1150*x1151)&x1152));

    if (t183 != 12LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1162 = 1483788LLU;
	int64_t x1164 = INT64_MIN;
	volatile uint64_t t184 = 544960692089890844LLU;

    t184 = (x1161*((x1162*x1163)&x1164));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1165 = 36035;
	int16_t x1166 = INT16_MIN;
	uint64_t x1167 = 964LLU;
	uint8_t x1168 = UINT8_MAX;
	uint64_t t185 = 2898121977929LLU;

    t185 = (x1165*((x1166*x1167)&x1168));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x1169 = UINT32_MAX;
	uint64_t x1170 = UINT64_MAX;
	int32_t x1172 = -561;
	uint64_t t186 = 5392221900535389604LLU;

    t186 = (x1169*((x1170*x1171)&x1172));

    if (t186 != 524595714957263610LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1174 = -2;
	static uint16_t x1175 = 1U;
	uint32_t x1176 = 1U;

    t187 = (x1173*((x1174*x1175)&x1176));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1178 = 3;
	int16_t x1180 = INT16_MAX;

    t188 = (x1177*((x1178*x1179)&x1180));

    if (t188 != 2791082LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1182 = -1;
	int16_t x1183 = INT16_MIN;
	int64_t x1184 = -1797563889916773209LL;

    t189 = (x1181*((x1182*x1183)&x1184));

    if (t189 != 444822847488LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1185 = 14;
	uint8_t x1186 = 3U;
	volatile uint16_t x1187 = UINT16_MAX;
	int8_t x1188 = 59;
	volatile int32_t t190 = -3;

    t190 = (x1185*((x1186*x1187)&x1188));

    if (t190 != 798) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1198 = INT8_MAX;
	static volatile int64_t x1199 = 4177113LL;
	int64_t x1200 = INT64_MIN;
	int64_t t191 = -24809951162992238LL;

    t191 = (x1197*((x1198*x1199)&x1200));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1201 = 34;
	volatile uint64_t x1203 = 4273736LLU;
	uint32_t x1204 = 20669911U;
	static volatile uint64_t t192 = 48832904555LLU;

    t192 = (x1201*((x1202*x1203)&x1204));

    if (t192 != 24554528LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1207 = 301778LLU;
	uint16_t x1208 = 1U;
	uint64_t t193 = 3699629679LLU;

    t193 = (x1205*((x1206*x1207)&x1208));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1209 = INT8_MIN;
	int16_t x1211 = INT16_MAX;
	uint64_t x1212 = UINT64_MAX;
	static volatile uint64_t t194 = 10927468LLU;

    t194 = (x1209*((x1210*x1211)&x1212));

    if (t194 != 4194176LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1213 = 1301811536008730LLU;
	int16_t x1214 = INT16_MIN;
	int16_t x1215 = INT16_MIN;
	volatile uint64_t x1216 = 911500001LLU;
	static uint64_t t195 = 41LLU;

    t195 = (x1213*((x1214*x1215)&x1216));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1217 = -1;
	int8_t x1218 = -3;
	int32_t x1220 = 3657;
	int32_t t196 = 111992964;

    t196 = (x1217*((x1218*x1219)&x1220));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1221 = INT64_MIN;
	uint64_t x1222 = 26986779540LLU;
	volatile uint64_t x1223 = 155LLU;
	int64_t x1224 = INT64_MIN;

    t197 = (x1221*((x1222*x1223)&x1224));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1231 = 2U;

    t198 = (x1229*((x1230*x1231)&x1232));

    if (t198 != 37272675181627704LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1237 = UINT32_MAX;
	int64_t x1238 = 14782402LL;
	uint64_t x1239 = UINT64_MAX;
	volatile int16_t x1240 = INT16_MAX;
	volatile uint64_t t199 = 7658LLU;

    t199 = (x1237*((x1238*x1239)&x1240));

    if (t199 != 123411590254530LLU) { NG(); } else { ; }
	
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

