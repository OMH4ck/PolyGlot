
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

int64_t x3 = INT64_MIN;
static int64_t x4 = INT64_MIN;
uint16_t x6 = 0U;
int32_t x27 = INT32_MIN;
uint32_t x28 = UINT32_MAX;
int16_t x31 = INT16_MIN;
uint8_t x38 = 72U;
int8_t x51 = -1;
int32_t x54 = -710182461;
static int8_t x56 = INT8_MAX;
int8_t x62 = -1;
int32_t t8 = -3442;
volatile uint64_t t9 = 1707254747996LLU;
static volatile uint32_t x93 = 844922903U;
static int64_t x106 = -1LL;
static uint64_t x107 = 6271295LLU;
static uint16_t x109 = UINT16_MAX;
uint16_t x112 = 116U;
volatile int32_t t13 = 12;
int32_t t14 = 1012135;
uint64_t x121 = UINT64_MAX;
volatile int64_t x122 = 292LL;
volatile int32_t x126 = INT32_MIN;
uint64_t x150 = UINT64_MAX;
int32_t t18 = INT32_MAX;
uint32_t x159 = UINT32_MAX;
uint8_t x160 = UINT8_MAX;
int8_t x161 = INT8_MAX;
static int32_t x163 = INT32_MIN;
static uint8_t x164 = 1U;
static uint8_t x175 = UINT8_MAX;
static uint32_t x187 = 424118U;
volatile int32_t t24 = -104504;
uint16_t x189 = 4972U;
int64_t x195 = -1LL;
volatile uint64_t x199 = UINT64_MAX;
static volatile int32_t t28 = 4097416;
int8_t x210 = -1;
int8_t x213 = 6;
uint8_t x214 = UINT8_MAX;
int16_t x215 = INT16_MIN;
int32_t t32 = -203135;
uint8_t x245 = 69U;
int8_t x247 = INT8_MAX;
static int8_t x248 = INT8_MAX;
volatile int64_t x264 = -1LL;
volatile int32_t t38 = 1;
volatile uint8_t x273 = UINT8_MAX;
int8_t x287 = INT8_MIN;
int16_t x288 = -120;
uint64_t t43 = UINT64_MAX;
volatile uint32_t x331 = UINT32_MAX;
static uint32_t t47 = UINT32_MAX;
uint64_t x335 = 252667298257LLU;
uint64_t t48 = 564104560924LLU;
volatile int8_t x344 = INT8_MIN;
int32_t x345 = 21118;
int32_t x351 = INT32_MIN;
uint16_t x362 = 23U;
int64_t x364 = INT64_MIN;
volatile int32_t t54 = -3;
uint64_t x381 = 6144096063LLU;
int64_t x396 = INT64_MAX;
static uint64_t x408 = 0LLU;
volatile uint16_t x417 = 72U;
int64_t x425 = INT64_MAX;
uint32_t x426 = 44U;
volatile uint8_t x428 = 3U;
static int32_t x454 = INT32_MAX;
static uint32_t x456 = 14079749U;
volatile uint64_t x460 = UINT64_MAX;
volatile uint32_t x462 = UINT32_MAX;
static int32_t x476 = 0;
int64_t t69 = 61555371917LL;
int32_t x478 = INT32_MAX;
uint16_t x479 = 5U;
static int32_t t70 = 381883;
static int64_t t71 = INT64_MAX;
static int8_t x490 = INT8_MIN;
int64_t x492 = 26330652019LL;
int8_t x499 = INT8_MAX;
int16_t x501 = INT16_MAX;
int32_t t75 = 19012;
int8_t x506 = 0;
static int32_t x517 = INT32_MAX;
static int64_t t78 = -1LL;
volatile uint32_t t79 = 3387U;
volatile uint32_t x558 = 696396U;
static uint8_t x589 = UINT8_MAX;
uint64_t x590 = 102LLU;
int16_t x594 = -1;
volatile int16_t x595 = 10053;
volatile uint16_t x600 = 116U;
volatile int8_t x609 = 54;
int32_t x612 = INT32_MAX;
int32_t x615 = -1;
uint64_t x623 = UINT64_MAX;
int64_t x639 = INT64_MIN;
static int64_t x649 = 0LL;
volatile int64_t t95 = -43551LL;
uint16_t x657 = 1328U;
uint64_t x661 = 211513013088LLU;
static uint32_t x662 = UINT32_MAX;
uint64_t x685 = UINT64_MAX;
volatile uint64_t t100 = UINT64_MAX;
volatile int32_t t101 = INT32_MAX;
volatile int32_t t104 = 77;
int16_t x729 = INT16_MAX;
int32_t x740 = -1;
uint32_t x749 = 978273144U;
int64_t x750 = -64133LL;
uint64_t x757 = 4144547083136122110LLU;
int64_t x760 = -1LL;
uint32_t x761 = 137U;
volatile uint8_t x764 = 30U;
volatile uint32_t t111 = 62537U;
static uint8_t x777 = 11U;
uint32_t x784 = 4541839U;
volatile uint32_t t114 = 20U;
uint32_t x797 = 900858376U;
int64_t x799 = INT64_MIN;
volatile int16_t x817 = INT16_MAX;
uint8_t x821 = 1U;
static int32_t x823 = -894;
static volatile int32_t x833 = 3601;
static uint64_t x855 = 7713581892472290738LLU;
uint16_t x859 = 2752U;
int32_t x868 = -1;
int16_t x888 = INT16_MIN;
int32_t t124 = 15751999;
uint32_t x905 = 379273491U;
int64_t x911 = INT64_MAX;
int32_t x923 = INT32_MIN;
int16_t x924 = INT16_MIN;
volatile int32_t t127 = 1188498;
int32_t x949 = INT32_MAX;
volatile uint32_t x951 = 10U;
int8_t x957 = 0;
volatile int32_t x965 = 22115;
volatile uint32_t t132 = 129819U;
int32_t x996 = -2831817;
int8_t x1007 = INT8_MIN;
static volatile int16_t x1033 = INT16_MAX;
uint16_t x1035 = 1895U;
int8_t x1036 = -1;
int16_t x1042 = INT16_MIN;
volatile uint32_t x1049 = 3U;
int32_t x1052 = -112916374;
volatile int32_t t143 = 2686;
static uint8_t x1065 = 50U;
uint32_t x1066 = UINT32_MAX;
int32_t x1067 = -1;
int64_t x1069 = INT64_MAX;
uint32_t x1073 = 2072205U;
int64_t x1075 = INT64_MAX;
int8_t x1080 = INT8_MIN;
uint64_t t147 = UINT64_MAX;
uint32_t x1081 = UINT32_MAX;
volatile uint32_t t148 = UINT32_MAX;
static int16_t x1087 = -1;
volatile int32_t t152 = 647;
int32_t x1123 = -12192;
static uint64_t x1134 = 41460998809053LLU;
int16_t x1136 = INT16_MIN;
volatile uint64_t x1137 = 264LLU;
volatile uint8_t x1146 = UINT8_MAX;
int16_t x1153 = 1;
uint64_t x1157 = UINT64_MAX;
int64_t x1159 = 878921577856LL;
int8_t x1160 = -2;
volatile int64_t x1163 = INT64_MIN;
static uint16_t x1168 = 1U;
int8_t x1182 = INT8_MIN;
int32_t t163 = -56205109;
volatile int32_t t164 = 6438;
static int64_t x1190 = INT64_MAX;
uint16_t x1193 = 55U;
volatile int64_t x1196 = INT64_MIN;
uint32_t x1201 = 583323167U;
uint32_t x1202 = UINT32_MAX;
int8_t x1203 = INT8_MIN;
uint32_t t167 = 423350U;
static uint32_t x1208 = 22U;
static int32_t t168 = -8036;
volatile int32_t t169 = -151;
uint16_t x1213 = UINT16_MAX;
int32_t x1215 = -1;
int32_t t170 = -13;
volatile int32_t x1219 = 108;
static uint64_t x1245 = UINT64_MAX;
uint64_t t175 = UINT64_MAX;
static int64_t x1253 = 44793LL;
int32_t x1254 = -1;
uint16_t x1255 = UINT16_MAX;
volatile int32_t t177 = -15613922;
int32_t x1265 = INT32_MAX;
volatile uint8_t x1273 = 85U;
static volatile uint64_t x1289 = UINT64_MAX;
int32_t t182 = -18418251;
uint8_t x1299 = 4U;
int32_t t187 = 225;
int16_t x1326 = 0;
int32_t x1327 = INT32_MIN;
int32_t t188 = 12449872;
static uint64_t x1332 = 880004085LLU;
volatile int32_t t189 = 2616298;
uint32_t x1336 = 9U;
volatile uint32_t t190 = UINT32_MAX;
int8_t x1340 = -1;
int64_t x1345 = 7461004643863572LL;
int64_t x1347 = INT64_MIN;
int16_t x1353 = INT16_MAX;
int8_t x1355 = INT8_MIN;
volatile int32_t t193 = 574909;
volatile uint32_t t194 = 119065813U;
uint32_t x1361 = 490U;
int8_t x1364 = 2;
uint8_t x1369 = UINT8_MAX;
volatile uint16_t x1370 = UINT16_MAX;
int8_t x1404 = -6;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int16_t x2 = -1321;
	volatile int32_t t0 = -288747739;

    t0 = (x1<<((x2/x3)==x4));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int64_t x7 = 981509182695580325LL;
	int16_t x8 = INT16_MIN;
	static volatile int64_t t1 = INT64_MAX;

    t1 = (x5<<((x6/x7)==x8));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x25 = 9U;
	int8_t x26 = INT8_MIN;
	volatile int32_t t2 = 4;

    t2 = (x25<<((x26/x27)==x28));

    if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x29 = 469U;
	static int16_t x30 = INT16_MIN;
	uint16_t x32 = 27U;
	uint32_t t3 = 382U;

    t3 = (x29<<((x30/x31)==x32));

    if (t3 != 469U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x33 = 1;
	int32_t x34 = -816070;
	static uint8_t x35 = UINT8_MAX;
	static int32_t x36 = 461060;
	int32_t t4 = 14513562;

    t4 = (x33<<((x34/x35)==x36));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x37 = 47U;
	volatile int8_t x39 = -1;
	int8_t x40 = -43;
	int32_t t5 = 56;

    t5 = (x37<<((x38/x39)==x40));

    if (t5 != 47) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x49 = 2356U;
	uint8_t x50 = 125U;
	int64_t x52 = -527215LL;
	int32_t t6 = -377164;

    t6 = (x49<<((x50/x51)==x52));

    if (t6 != 2356) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x53 = 54U;
	int16_t x55 = 5;
	volatile uint32_t t7 = 1167095736U;

    t7 = (x53<<((x54/x55)==x56));

    if (t7 != 54U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	int8_t x64 = 27;

    t8 = (x61<<((x62/x63)==x64));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x65 = 1051LLU;
	volatile int32_t x66 = -40;
	static int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MIN;

    t9 = (x65<<((x66/x67)==x68));

    if (t9 != 1051LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x81 = INT16_MAX;
	volatile int32_t x82 = INT32_MIN;
	uint32_t x83 = 3490737U;
	int64_t x84 = -7963561LL;
	int32_t t10 = -1447;

    t10 = (x81<<((x82/x83)==x84));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x94 = INT32_MIN;
	static int64_t x95 = -1LL;
	uint8_t x96 = 10U;
	uint32_t t11 = 31U;

    t11 = (x93<<((x94/x95)==x96));

    if (t11 != 844922903U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x105 = UINT32_MAX;
	volatile int32_t x108 = -1;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = (x105<<((x106/x107)==x108));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x110 = -1;
	uint16_t x111 = UINT16_MAX;

    t13 = (x109<<((x110/x111)==x112));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x117 = 1;
	volatile int16_t x118 = -1;
	int8_t x119 = -7;
	int64_t x120 = -28LL;

    t14 = (x117<<((x118/x119)==x120));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x123 = -1426;
	int64_t x124 = -1LL;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = (x121<<((x122/x123)==x124));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x125 = UINT32_MAX;
	uint32_t x127 = 138U;
	int64_t x128 = INT64_MIN;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = (x125<<((x126/x127)==x128));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x141 = 3307446;
	static volatile int32_t x142 = 78362;
	static int32_t x143 = INT32_MAX;
	static int16_t x144 = 0;
	volatile int32_t t17 = -5;

    t17 = (x141<<((x142/x143)==x144));

    if (t17 != 6614892) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x149 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	static uint8_t x152 = UINT8_MAX;

    t18 = (x149<<((x150/x151)==x152));

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x153 = 1765LL;
	uint64_t x154 = 20076LLU;
	static int32_t x155 = 173166;
	int16_t x156 = INT16_MIN;
	volatile int64_t t19 = -2460978984907LL;

    t19 = (x153<<((x154/x155)==x156));

    if (t19 != 1765LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MAX;
	volatile uint64_t t20 = UINT64_MAX;

    t20 = (x157<<((x158/x159)==x160));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x162 = UINT16_MAX;
	volatile int32_t t21 = -1678454;

    t21 = (x161<<((x162/x163)==x164));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x169 = 3749U;
	volatile uint16_t x170 = 6U;
	uint64_t x171 = 90727358375LLU;
	uint8_t x172 = 116U;
	volatile uint32_t t22 = 203359U;

    t22 = (x169<<((x170/x171)==x172));

    if (t22 != 3749U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x173 = UINT32_MAX;
	int32_t x174 = INT32_MIN;
	int8_t x176 = INT8_MIN;
	uint32_t t23 = UINT32_MAX;

    t23 = (x173<<((x174/x175)==x176));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x185 = 11U;
	static uint16_t x186 = 5U;
	int8_t x188 = INT8_MIN;

    t24 = (x185<<((x186/x187)==x188));

    if (t24 != 11) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x190 = -1;
	static volatile int32_t x191 = 144201101;
	uint32_t x192 = 177603600U;
	static int32_t t25 = 762314691;

    t25 = (x189<<((x190/x191)==x192));

    if (t25 != 4972) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x193 = 1U;
	static int8_t x194 = 19;
	volatile uint8_t x196 = 13U;
	int32_t t26 = -69759;

    t26 = (x193<<((x194/x195)==x196));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x197 = 43U;
	int64_t x198 = INT64_MIN;
	uint16_t x200 = 26U;
	volatile int32_t t27 = 27660;

    t27 = (x197<<((x198/x199)==x200));

    if (t27 != 43) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x201 = 12U;
	int16_t x202 = 0;
	int64_t x203 = -1LL;
	volatile int64_t x204 = INT64_MIN;

    t28 = (x201<<((x202/x203)==x204));

    if (t28 != 12) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x209 = 58U;
	uint8_t x211 = 46U;
	int64_t x212 = INT64_MAX;
	volatile int32_t t29 = 46;

    t29 = (x209<<((x210/x211)==x212));

    if (t29 != 58) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x216 = -1;
	static volatile int32_t t30 = 10;

    t30 = (x213<<((x214/x215)==x216));

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x217 = INT16_MAX;
	static volatile int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	int16_t x220 = 4;
	int32_t t31 = 1061225124;

    t31 = (x217<<((x218/x219)==x220));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x221 = UINT8_MAX;
	int64_t x222 = -1LL;
	int16_t x223 = -1;
	static int16_t x224 = INT16_MAX;

    t32 = (x221<<((x222/x223)==x224));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x225 = UINT16_MAX;
	static int64_t x226 = 1880754LL;
	uint64_t x227 = 27992702315054LLU;
	int64_t x228 = -54LL;
	int32_t t33 = -1;

    t33 = (x225<<((x226/x227)==x228));

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x241 = UINT16_MAX;
	int64_t x242 = 38LL;
	uint8_t x243 = 50U;
	int16_t x244 = INT16_MAX;
	int32_t t34 = -6925;

    t34 = (x241<<((x242/x243)==x244));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x246 = -1;
	volatile int32_t t35 = 508;

    t35 = (x245<<((x246/x247)==x248));

    if (t35 != 69) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = 1934151U;
	int64_t x252 = 989LL;
	uint32_t t36 = UINT32_MAX;

    t36 = (x249<<((x250/x251)==x252));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x261 = 6LL;
	static int16_t x262 = INT16_MIN;
	int64_t x263 = -1LL;
	static volatile int64_t t37 = -34595598631052LL;

    t37 = (x261<<((x262/x263)==x264));

    if (t37 != 6LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MIN;
	uint8_t x267 = 54U;
	int8_t x268 = INT8_MIN;

    t38 = (x265<<((x266/x267)==x268));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x269 = 85;
	uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MAX;
	int8_t x272 = -1;
	volatile int32_t t39 = -1765212;

    t39 = (x269<<((x270/x271)==x272));

    if (t39 != 85) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -130399;
	volatile int32_t t40 = -4088512;

    t40 = (x273<<((x274/x275)==x276));

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x277 = 267563LL;
	static int64_t x278 = INT64_MIN;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	int64_t t41 = 1996929370LL;

    t41 = (x277<<((x278/x279)==x280));

    if (t41 != 267563LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x285 = 14;
	volatile uint64_t x286 = 118974263566381LLU;
	int32_t t42 = 826;

    t42 = (x285<<((x286/x287)==x288));

    if (t42 != 14) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x297 = UINT64_MAX;
	int8_t x298 = INT8_MAX;
	static int8_t x299 = -1;
	int64_t x300 = 123938700670857903LL;

    t43 = (x297<<((x298/x299)==x300));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x301 = 495487163705879LLU;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 632LLU;
	uint32_t x304 = UINT32_MAX;
	volatile uint64_t t44 = 238160112LLU;

    t44 = (x301<<((x302/x303)==x304));

    if (t44 != 495487163705879LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x305 = UINT16_MAX;
	uint8_t x306 = 25U;
	static int8_t x307 = -9;
	uint32_t x308 = 104572487U;
	volatile int32_t t45 = 53;

    t45 = (x305<<((x306/x307)==x308));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1;
	int32_t x319 = 3045;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (x317<<((x318/x319)==x320));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;

    t47 = (x329<<((x330/x331)==x332));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x333 = 10LLU;
	int32_t x334 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;

    t48 = (x333<<((x334/x335)==x336));

    if (t48 != 10LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x341 = 825299378U;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	uint32_t t49 = 552071U;

    t49 = (x341<<((x342/x343)==x344));

    if (t49 != 825299378U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;
	int64_t x348 = INT64_MIN;
	int32_t t50 = 1;

    t50 = (x345<<((x346/x347)==x348));

    if (t50 != 21118) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x349 = 444663827U;
	int8_t x350 = INT8_MIN;
	volatile int64_t x352 = INT64_MAX;
	volatile uint32_t t51 = 287811U;

    t51 = (x349<<((x350/x351)==x352));

    if (t51 != 444663827U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x361 = 8;
	uint8_t x363 = UINT8_MAX;
	volatile int32_t t52 = 32589807;

    t52 = (x361<<((x362/x363)==x364));

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x365 = 238477060U;
	int64_t x366 = -1LL;
	uint32_t x367 = 101201U;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t53 = 4U;

    t53 = (x365<<((x366/x367)==x368));

    if (t53 != 238477060U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x373 = INT8_MAX;
	int32_t x374 = -267392441;
	int8_t x375 = INT8_MIN;
	static volatile int64_t x376 = INT64_MIN;

    t54 = (x373<<((x374/x375)==x376));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x377 = 196699010459711LLU;
	int8_t x378 = 1;
	int64_t x379 = -6928438673LL;
	uint8_t x380 = UINT8_MAX;
	uint64_t t55 = 1268359LLU;

    t55 = (x377<<((x378/x379)==x380));

    if (t55 != 196699010459711LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x382 = -42959LL;
	uint64_t x383 = 9402217061626521LLU;
	int32_t x384 = -1;
	uint64_t t56 = 72030LLU;

    t56 = (x381<<((x382/x383)==x384));

    if (t56 != 6144096063LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x393 = UINT32_MAX;
	int64_t x394 = -1LL;
	volatile int8_t x395 = INT8_MIN;
	uint32_t t57 = UINT32_MAX;

    t57 = (x393<<((x394/x395)==x396));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x401 = INT16_MAX;
	static int16_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t58 = 0;

    t58 = (x401<<((x402/x403)==x404));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x405 = 3664882466LL;
	volatile int64_t x406 = 7706LL;
	uint16_t x407 = UINT16_MAX;
	static int64_t t59 = 565LL;

    t59 = (x405<<((x406/x407)==x408));

    if (t59 != 7329764932LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x409 = 4233908856951775724LLU;
	volatile int16_t x410 = INT16_MIN;
	uint8_t x411 = 9U;
	int16_t x412 = INT16_MIN;
	uint64_t t60 = 7415350384LLU;

    t60 = (x409<<((x410/x411)==x412));

    if (t60 != 4233908856951775724LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x418 = 1543U;
	int8_t x419 = -1;
	volatile uint8_t x420 = 117U;
	volatile int32_t t61 = 0;

    t61 = (x417<<((x418/x419)==x420));

    if (t61 != 72) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x421 = 0;
	uint64_t x422 = 186285917776386LLU;
	int32_t x423 = -25;
	uint16_t x424 = 38U;
	volatile int32_t t62 = -54744;

    t62 = (x421<<((x422/x423)==x424));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x427 = INT32_MAX;
	volatile int64_t t63 = INT64_MAX;

    t63 = (x425<<((x426/x427)==x428));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile uint8_t x438 = 123U;
	int16_t x439 = INT16_MIN;
	int64_t x440 = -25902089LL;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (x437<<((x438/x439)==x440));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile int8_t x442 = -2;
	int32_t x443 = 6050;
	uint8_t x444 = UINT8_MAX;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = (x441<<((x442/x443)==x444));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x453 = UINT16_MAX;
	int16_t x455 = INT16_MIN;
	volatile int32_t t66 = 3;

    t66 = (x453<<((x454/x455)==x456));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x457 = 12198661;
	int8_t x458 = INT8_MIN;
	uint8_t x459 = UINT8_MAX;
	int32_t t67 = -2081043;

    t67 = (x457<<((x458/x459)==x460));

    if (t67 != 12198661) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x461 = UINT16_MAX;
	uint32_t x463 = 12U;
	uint32_t x464 = 2909U;
	int32_t t68 = 14729097;

    t68 = (x461<<((x462/x463)==x464));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x473 = 194571960651963LL;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = 1273U;

    t69 = (x473<<((x474/x475)==x476));

    if (t69 != 389143921303926LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x477 = UINT16_MAX;
	static uint32_t x480 = 24834765U;

    t70 = (x477<<((x478/x479)==x480));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x485 = INT64_MAX;
	int64_t x486 = -126207734LL;
	static int8_t x487 = INT8_MIN;
	volatile uint64_t x488 = UINT64_MAX;

    t71 = (x485<<((x486/x487)==x488));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x489 = 1U;
	int64_t x491 = INT64_MAX;
	int32_t t72 = 2;

    t72 = (x489<<((x490/x491)==x492));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = INT8_MAX;
	volatile int32_t x495 = -1;
	int32_t x496 = 0;
	volatile uint64_t t73 = UINT64_MAX;

    t73 = (x493<<((x494/x495)==x496));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x497 = 3U;
	static int32_t x498 = INT32_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t74 = 1955;

    t74 = (x497<<((x498/x499)==x500));

    if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MAX;
	int16_t x504 = INT16_MIN;

    t75 = (x501<<((x502/x503)==x504));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x505 = INT16_MAX;
	int64_t x507 = INT64_MIN;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t76 = 0;

    t76 = (x505<<((x506/x507)==x508));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x518 = 2U;
	volatile uint32_t x519 = UINT32_MAX;
	static int32_t x520 = INT32_MIN;
	int32_t t77 = INT32_MAX;

    t77 = (x517<<((x518/x519)==x520));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x529 = 75915010LL;
	uint32_t x530 = 1U;
	static int32_t x531 = 3;
	static int16_t x532 = INT16_MIN;

    t78 = (x529<<((x530/x531)==x532));

    if (t78 != 75915010LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint32_t x533 = 407862742U;
	volatile int16_t x534 = INT16_MAX;
	uint64_t x535 = 17353949893186LLU;
	int32_t x536 = 4778175;

    t79 = (x533<<((x534/x535)==x536));

    if (t79 != 407862742U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x541 = 407670557;
	static uint32_t x542 = 179U;
	uint8_t x543 = 1U;
	int64_t x544 = 19672LL;
	int32_t t80 = 939093;

    t80 = (x541<<((x542/x543)==x544));

    if (t80 != 407670557) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x545 = 1962991890462935LL;
	uint16_t x546 = 1518U;
	int16_t x547 = -1;
	int16_t x548 = -1;
	int64_t t81 = -8574509219298LL;

    t81 = (x545<<((x546/x547)==x548));

    if (t81 != 1962991890462935LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x549 = 25U;
	int32_t x550 = -3290096;
	uint16_t x551 = 7U;
	static int32_t x552 = -1;
	volatile int32_t t82 = 91409;

    t82 = (x549<<((x550/x551)==x552));

    if (t82 != 25) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x559 = INT64_MIN;
	volatile int8_t x560 = INT8_MIN;
	volatile int32_t t83 = -3;

    t83 = (x557<<((x558/x559)==x560));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x573 = 103485336U;
	uint32_t x574 = 19532302U;
	static int16_t x575 = -1005;
	int64_t x576 = -1LL;
	static uint32_t t84 = 175U;

    t84 = (x573<<((x574/x575)==x576));

    if (t84 != 103485336U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x577 = 1754806100U;
	int16_t x578 = INT16_MIN;
	static int8_t x579 = INT8_MIN;
	int64_t x580 = -1LL;
	uint32_t t85 = 230U;

    t85 = (x577<<((x578/x579)==x580));

    if (t85 != 1754806100U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x585 = 87;
	int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MAX;
	int64_t x588 = -82321895134977665LL;
	volatile int32_t t86 = -1280;

    t86 = (x585<<((x586/x587)==x588));

    if (t86 != 87) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x591 = INT8_MAX;
	int64_t x592 = -1LL;
	volatile int32_t t87 = -553351;

    t87 = (x589<<((x590/x591)==x592));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x593 = 415559488U;
	uint16_t x596 = 1U;
	uint32_t t88 = 432700878U;

    t88 = (x593<<((x594/x595)==x596));

    if (t88 != 415559488U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x597 = 1167014U;
	uint16_t x598 = UINT16_MAX;
	uint32_t x599 = 3U;
	volatile uint32_t t89 = 1461993333U;

    t89 = (x597<<((x598/x599)==x600));

    if (t89 != 1167014U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x610 = 2215LLU;
	static int8_t x611 = INT8_MAX;
	static int32_t t90 = -8215825;

    t90 = (x609<<((x610/x611)==x612));

    if (t90 != 54) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x613 = UINT8_MAX;
	static int16_t x614 = INT16_MIN;
	int64_t x616 = INT64_MIN;
	volatile int32_t t91 = -25337099;

    t91 = (x613<<((x614/x615)==x616));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x622 = -1LL;
	int32_t x624 = INT32_MIN;
	static int32_t t92 = 2799721;

    t92 = (x621<<((x622/x623)==x624));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x637 = 41U;
	int8_t x638 = INT8_MIN;
	static int8_t x640 = INT8_MIN;
	int32_t t93 = -1;

    t93 = (x637<<((x638/x639)==x640));

    if (t93 != 41) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x645 = INT32_MAX;
	int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MIN;
	int32_t x648 = 7;
	int32_t t94 = INT32_MAX;

    t94 = (x645<<((x646/x647)==x648));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x650 = INT8_MAX;
	int32_t x651 = 243;
	int8_t x652 = INT8_MIN;

    t95 = (x649<<((x650/x651)==x652));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x658 = UINT64_MAX;
	volatile uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MAX;
	static volatile int32_t t96 = 102799;

    t96 = (x657<<((x658/x659)==x660));

    if (t96 != 1328) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x663 = INT32_MAX;
	static volatile int64_t x664 = -1LL;
	volatile uint64_t t97 = 243211037311LLU;

    t97 = (x661<<((x662/x663)==x664));

    if (t97 != 211513013088LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x665 = UINT8_MAX;
	static int16_t x666 = -28;
	uint32_t x667 = 360404U;
	static int64_t x668 = -9121LL;
	static volatile int32_t t98 = 131594021;

    t98 = (x665<<((x666/x667)==x668));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x677 = 401;
	static volatile uint8_t x678 = 6U;
	volatile int32_t x679 = INT32_MAX;
	volatile uint8_t x680 = UINT8_MAX;
	int32_t t99 = 1930094;

    t99 = (x677<<((x678/x679)==x680));

    if (t99 != 401) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x686 = 45;
	volatile int64_t x687 = INT64_MAX;
	int64_t x688 = INT64_MAX;

    t100 = (x685<<((x686/x687)==x688));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x689 = INT32_MAX;
	int8_t x690 = INT8_MIN;
	int32_t x691 = -1;
	uint64_t x692 = 2075379098957797LLU;

    t101 = (x689<<((x690/x691)==x692));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x697 = INT16_MAX;
	int8_t x698 = INT8_MIN;
	int16_t x699 = 472;
	int32_t x700 = -1;
	static int32_t t102 = -1729;

    t102 = (x697<<((x698/x699)==x700));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x705 = 39105349U;
	static volatile int16_t x706 = INT16_MIN;
	int8_t x707 = 2;
	static int32_t x708 = -120338087;
	volatile uint32_t t103 = 36226U;

    t103 = (x705<<((x706/x707)==x708));

    if (t103 != 39105349U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x713 = 1U;
	volatile uint32_t x714 = 1254901U;
	volatile uint64_t x715 = UINT64_MAX;
	static int64_t x716 = 1270492739946226LL;

    t104 = (x713<<((x714/x715)==x716));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x717 = INT64_MAX;
	static volatile int64_t x718 = INT64_MIN;
	int16_t x719 = INT16_MIN;
	static uint8_t x720 = UINT8_MAX;
	volatile int64_t t105 = INT64_MAX;

    t105 = (x717<<((x718/x719)==x720));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x730 = 104752659U;
	uint8_t x731 = 12U;
	static volatile uint8_t x732 = 4U;
	int32_t t106 = 6;

    t106 = (x729<<((x730/x731)==x732));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	int64_t x734 = INT64_MIN;
	int64_t x735 = INT64_MAX;
	uint16_t x736 = UINT16_MAX;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x733<<((x734/x735)==x736));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x737 = 244U;
	static uint8_t x738 = UINT8_MAX;
	static volatile int64_t x739 = INT64_MAX;
	static int32_t t108 = 431118;

    t108 = (x737<<((x738/x739)==x740));

    if (t108 != 244) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x751 = INT32_MAX;
	uint32_t x752 = 6983197U;
	volatile uint32_t t109 = 754U;

    t109 = (x749<<((x750/x751)==x752));

    if (t109 != 978273144U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x758 = 1737784160U;
	int16_t x759 = -1;
	static uint64_t t110 = 16249569230153656LLU;

    t110 = (x757<<((x758/x759)==x760));

    if (t110 != 4144547083136122110LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x762 = 5448U;
	static volatile uint64_t x763 = UINT64_MAX;

    t111 = (x761<<((x762/x763)==x764));

    if (t111 != 137U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x778 = INT8_MIN;
	int16_t x779 = 82;
	uint16_t x780 = 12886U;
	int32_t t112 = 0;

    t112 = (x777<<((x778/x779)==x780));

    if (t112 != 11) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = -1;
	uint64_t x783 = 8213296419LLU;
	volatile int32_t t113 = 54;

    t113 = (x781<<((x782/x783)==x784));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x785 = 6398U;
	int16_t x786 = -1;
	int32_t x787 = -3;
	volatile uint16_t x788 = 1728U;

    t114 = (x785<<((x786/x787)==x788));

    if (t114 != 6398U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x793 = 17078901U;
	int32_t x794 = 649097;
	uint64_t x795 = 26853857LLU;
	static int16_t x796 = -1;
	volatile uint32_t t115 = 13670299U;

    t115 = (x793<<((x794/x795)==x796));

    if (t115 != 17078901U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x798 = 20;
	uint8_t x800 = 1U;
	uint32_t t116 = 7U;

    t116 = (x797<<((x798/x799)==x800));

    if (t116 != 900858376U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x818 = -2;
	int64_t x819 = INT64_MIN;
	volatile uint8_t x820 = 23U;
	volatile int32_t t117 = 22;

    t117 = (x817<<((x818/x819)==x820));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x822 = INT64_MIN;
	int64_t x824 = 545249439233155549LL;
	volatile int32_t t118 = -396498;

    t118 = (x821<<((x822/x823)==x824));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x834 = INT32_MIN;
	volatile int32_t x835 = INT32_MIN;
	static volatile uint16_t x836 = 688U;
	int32_t t119 = 34247;

    t119 = (x833<<((x834/x835)==x836));

    if (t119 != 3601) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x853 = UINT32_MAX;
	uint32_t x854 = UINT32_MAX;
	uint8_t x856 = 37U;
	uint32_t t120 = UINT32_MAX;

    t120 = (x853<<((x854/x855)==x856));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x857 = 22;
	uint64_t x858 = 13900LLU;
	static int16_t x860 = -1;
	volatile int32_t t121 = -677;

    t121 = (x857<<((x858/x859)==x860));

    if (t121 != 22) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x865 = INT16_MAX;
	int8_t x866 = -1;
	volatile int16_t x867 = -7115;
	int32_t t122 = 3;

    t122 = (x865<<((x866/x867)==x868));

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x881 = 1;
	static int32_t x882 = INT32_MIN;
	volatile uint64_t x883 = 228072922618845235LLU;
	int16_t x884 = INT16_MAX;
	volatile int32_t t123 = -1;

    t123 = (x881<<((x882/x883)==x884));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x885 = 0U;
	uint8_t x886 = 4U;
	uint8_t x887 = UINT8_MAX;

    t124 = (x885<<((x886/x887)==x888));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x906 = 21251U;
	uint32_t x907 = 894077U;
	int64_t x908 = INT64_MAX;
	static volatile uint32_t t125 = 5387U;

    t125 = (x905<<((x906/x907)==x908));

    if (t125 != 379273491U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x909 = 63U;
	uint16_t x910 = UINT16_MAX;
	int16_t x912 = INT16_MAX;
	volatile int32_t t126 = 121372;

    t126 = (x909<<((x910/x911)==x912));

    if (t126 != 63) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x921 = 32279U;
	int32_t x922 = INT32_MIN;

    t127 = (x921<<((x922/x923)==x924));

    if (t127 != 32279) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x929 = UINT32_MAX;
	uint64_t x930 = UINT64_MAX;
	volatile int64_t x931 = -1LL;
	int8_t x932 = INT8_MIN;
	uint32_t t128 = UINT32_MAX;

    t128 = (x929<<((x930/x931)==x932));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x950 = UINT16_MAX;
	uint8_t x952 = UINT8_MAX;
	volatile int32_t t129 = INT32_MAX;

    t129 = (x949<<((x950/x951)==x952));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x958 = -1588531927751406LL;
	int32_t x959 = 261168;
	int16_t x960 = -1;
	int32_t t130 = -1011;

    t130 = (x957<<((x958/x959)==x960));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x966 = -1LL;
	static int16_t x967 = INT16_MIN;
	volatile uint8_t x968 = 15U;
	int32_t t131 = 4466803;

    t131 = (x965<<((x966/x967)==x968));

    if (t131 != 22115) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x973 = 30435422U;
	uint32_t x974 = 27923553U;
	static volatile int16_t x975 = INT16_MAX;
	int8_t x976 = -1;

    t132 = (x973<<((x974/x975)==x976));

    if (t132 != 30435422U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x981 = INT8_MAX;
	int8_t x982 = INT8_MIN;
	static uint64_t x983 = 542474470349720534LLU;
	static uint8_t x984 = 58U;
	static volatile int32_t t133 = -11;

    t133 = (x981<<((x982/x983)==x984));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x985 = 37;
	static int8_t x986 = INT8_MAX;
	int8_t x987 = -6;
	static uint32_t x988 = 23533U;
	volatile int32_t t134 = -2115626;

    t134 = (x985<<((x986/x987)==x988));

    if (t134 != 37) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x993 = 35U;
	static int16_t x994 = -1;
	uint16_t x995 = 784U;
	volatile int32_t t135 = -2810876;

    t135 = (x993<<((x994/x995)==x996));

    if (t135 != 35) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x997 = 2415404954059LLU;
	static int64_t x998 = INT64_MIN;
	int16_t x999 = INT16_MIN;
	int16_t x1000 = 58;
	volatile uint64_t t136 = 29757LLU;

    t136 = (x997<<((x998/x999)==x1000));

    if (t136 != 2415404954059LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1005 = INT32_MAX;
	static int16_t x1006 = INT16_MIN;
	int32_t x1008 = 92;
	static int32_t t137 = INT32_MAX;

    t137 = (x1005<<((x1006/x1007)==x1008));

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1017 = 66863572979LLU;
	int64_t x1018 = INT64_MAX;
	volatile int32_t x1019 = INT32_MIN;
	volatile int64_t x1020 = 406635840653204404LL;
	volatile uint64_t t138 = 2062815560815607083LLU;

    t138 = (x1017<<((x1018/x1019)==x1020));

    if (t138 != 66863572979LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1025 = 1477512;
	static uint32_t x1026 = 1912U;
	uint16_t x1027 = UINT16_MAX;
	uint16_t x1028 = 246U;
	volatile int32_t t139 = 2504798;

    t139 = (x1025<<((x1026/x1027)==x1028));

    if (t139 != 1477512) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1034 = INT64_MIN;
	volatile int32_t t140 = 1;

    t140 = (x1033<<((x1034/x1035)==x1036));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1041 = INT16_MAX;
	uint16_t x1043 = 13U;
	int16_t x1044 = -1;
	int32_t t141 = -3077;

    t141 = (x1041<<((x1042/x1043)==x1044));

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1050 = -39;
	int32_t x1051 = INT32_MIN;
	static uint32_t t142 = 728713U;

    t142 = (x1049<<((x1050/x1051)==x1052));

    if (t142 != 3U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1061 = 662;
	volatile int16_t x1062 = INT16_MIN;
	int16_t x1063 = INT16_MIN;
	int32_t x1064 = INT32_MIN;

    t143 = (x1061<<((x1062/x1063)==x1064));

    if (t143 != 662) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x1068 = INT8_MIN;
	volatile int32_t t144 = 336575;

    t144 = (x1065<<((x1066/x1067)==x1068));

    if (t144 != 50) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1070 = INT16_MIN;
	uint16_t x1071 = 1112U;
	volatile int64_t x1072 = INT64_MAX;
	int64_t t145 = INT64_MAX;

    t145 = (x1069<<((x1070/x1071)==x1072));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x1074 = 89U;
	int8_t x1076 = INT8_MIN;
	uint32_t t146 = 32U;

    t146 = (x1073<<((x1074/x1075)==x1076));

    if (t146 != 2072205U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x1077 = UINT64_MAX;
	static int16_t x1078 = -28;
	uint32_t x1079 = 231416U;

    t147 = (x1077<<((x1078/x1079)==x1080));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1082 = 1U;
	int8_t x1083 = -1;
	volatile uint64_t x1084 = 477187658882LLU;

    t148 = (x1081<<((x1082/x1083)==x1084));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1085 = UINT16_MAX;
	volatile uint8_t x1086 = 15U;
	uint16_t x1088 = 15U;
	int32_t t149 = 908467131;

    t149 = (x1085<<((x1086/x1087)==x1088));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x1097 = 4;
	uint8_t x1098 = 14U;
	uint16_t x1099 = 109U;
	int64_t x1100 = INT64_MAX;
	static int32_t t150 = -1758;

    t150 = (x1097<<((x1098/x1099)==x1100));

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1101 = 1079011605689LLU;
	uint8_t x1102 = 2U;
	int32_t x1103 = -1;
	int8_t x1104 = -1;
	uint64_t t151 = 7249601920676LLU;

    t151 = (x1101<<((x1102/x1103)==x1104));

    if (t151 != 1079011605689LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1113 = 30509;
	uint16_t x1114 = 6763U;
	uint8_t x1115 = UINT8_MAX;
	int64_t x1116 = -2LL;

    t152 = (x1113<<((x1114/x1115)==x1116));

    if (t152 != 30509) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1121 = 211892U;
	volatile uint8_t x1122 = 3U;
	int8_t x1124 = INT8_MIN;
	static uint32_t t153 = 10175U;

    t153 = (x1121<<((x1122/x1123)==x1124));

    if (t153 != 211892U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x1129 = 1LLU;
	uint16_t x1130 = 31U;
	uint32_t x1131 = 20U;
	int32_t x1132 = -934897105;
	volatile uint64_t t154 = 248LLU;

    t154 = (x1129<<((x1130/x1131)==x1132));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1133 = UINT32_MAX;
	int8_t x1135 = INT8_MIN;
	volatile uint32_t t155 = UINT32_MAX;

    t155 = (x1133<<((x1134/x1135)==x1136));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1138 = INT32_MAX;
	static uint16_t x1139 = UINT16_MAX;
	volatile int16_t x1140 = INT16_MIN;
	volatile uint64_t t156 = 226090076374587LLU;

    t156 = (x1137<<((x1138/x1139)==x1140));

    if (t156 != 264LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1145 = UINT32_MAX;
	uint32_t x1147 = UINT32_MAX;
	int64_t x1148 = INT64_MIN;
	uint32_t t157 = UINT32_MAX;

    t157 = (x1145<<((x1146/x1147)==x1148));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1154 = 0U;
	volatile uint16_t x1155 = 4U;
	int8_t x1156 = INT8_MIN;
	volatile int32_t t158 = 116;

    t158 = (x1153<<((x1154/x1155)==x1156));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1158 = 4U;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = (x1157<<((x1158/x1159)==x1160));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x1161 = 20U;
	volatile uint16_t x1162 = 4U;
	static uint64_t x1164 = 8336463399436565LLU;
	volatile int32_t t160 = 8;

    t160 = (x1161<<((x1162/x1163)==x1164));

    if (t160 != 20) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x1165 = 7U;
	volatile uint64_t x1166 = UINT64_MAX;
	uint8_t x1167 = 10U;
	volatile int32_t t161 = 3971596;

    t161 = (x1165<<((x1166/x1167)==x1168));

    if (t161 != 7) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x1177 = INT16_MAX;
	static uint64_t x1178 = 2644LLU;
	volatile int32_t x1179 = -1;
	int16_t x1180 = INT16_MAX;
	int32_t t162 = 1;

    t162 = (x1177<<((x1178/x1179)==x1180));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x1181 = 20U;
	int64_t x1183 = 703LL;
	uint16_t x1184 = 26838U;

    t163 = (x1181<<((x1182/x1183)==x1184));

    if (t163 != 20) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1185 = UINT8_MAX;
	int32_t x1186 = INT32_MIN;
	uint8_t x1187 = 7U;
	volatile int16_t x1188 = 0;

    t164 = (x1185<<((x1186/x1187)==x1188));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1189 = 0U;
	int64_t x1191 = -5LL;
	uint16_t x1192 = UINT16_MAX;
	volatile int32_t t165 = -310;

    t165 = (x1189<<((x1190/x1191)==x1192));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1194 = UINT8_MAX;
	int32_t x1195 = INT32_MAX;
	static int32_t t166 = -167;

    t166 = (x1193<<((x1194/x1195)==x1196));

    if (t166 != 55) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1204 = 3U;

    t167 = (x1201<<((x1202/x1203)==x1204));

    if (t167 != 583323167U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x1205 = 0U;
	static int16_t x1206 = 3749;
	static uint64_t x1207 = 10093465329970703LLU;

    t168 = (x1205<<((x1206/x1207)==x1208));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x1209 = 0;
	volatile int8_t x1210 = INT8_MIN;
	uint64_t x1211 = UINT64_MAX;
	static int64_t x1212 = INT64_MIN;

    t169 = (x1209<<((x1210/x1211)==x1212));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x1214 = -1;
	static uint32_t x1216 = UINT32_MAX;

    t170 = (x1213<<((x1214/x1215)==x1216));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1217 = INT16_MAX;
	uint8_t x1218 = 9U;
	uint64_t x1220 = UINT64_MAX;
	int32_t t171 = 759794771;

    t171 = (x1217<<((x1218/x1219)==x1220));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1233 = 111325923915114LLU;
	uint8_t x1234 = 0U;
	int8_t x1235 = -1;
	volatile uint16_t x1236 = UINT16_MAX;
	volatile uint64_t t172 = 20787LLU;

    t172 = (x1233<<((x1234/x1235)==x1236));

    if (t172 != 111325923915114LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1237 = 25U;
	int64_t x1238 = INT64_MAX;
	int32_t x1239 = INT32_MIN;
	uint64_t x1240 = UINT64_MAX;
	volatile int32_t t173 = 50;

    t173 = (x1237<<((x1238/x1239)==x1240));

    if (t173 != 25) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1241 = 346850547U;
	uint8_t x1242 = UINT8_MAX;
	volatile int32_t x1243 = -1;
	int16_t x1244 = -6216;
	static uint32_t t174 = 1018U;

    t174 = (x1241<<((x1242/x1243)==x1244));

    if (t174 != 346850547U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x1246 = UINT8_MAX;
	int16_t x1247 = INT16_MIN;
	uint32_t x1248 = 8025241U;

    t175 = (x1245<<((x1246/x1247)==x1248));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1256 = -1;
	static int64_t t176 = -116919266183160LL;

    t176 = (x1253<<((x1254/x1255)==x1256));

    if (t176 != 44793LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1257 = INT8_MAX;
	int8_t x1258 = INT8_MIN;
	volatile uint32_t x1259 = 52202681U;
	static int64_t x1260 = INT64_MIN;

    t177 = (x1257<<((x1258/x1259)==x1260));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1266 = -15737541561LL;
	uint32_t x1267 = 126770U;
	static int64_t x1268 = 907399516920LL;
	int32_t t178 = INT32_MAX;

    t178 = (x1265<<((x1266/x1267)==x1268));

    if (t178 != INT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1274 = INT64_MIN;
	static volatile int64_t x1275 = -940546428LL;
	int8_t x1276 = INT8_MIN;
	volatile int32_t t179 = -102;

    t179 = (x1273<<((x1274/x1275)==x1276));

    if (t179 != 85) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1277 = UINT8_MAX;
	volatile int8_t x1278 = INT8_MAX;
	static int64_t x1279 = 18LL;
	uint8_t x1280 = 0U;
	volatile int32_t t180 = 3906606;

    t180 = (x1277<<((x1278/x1279)==x1280));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1290 = INT16_MIN;
	int16_t x1291 = INT16_MIN;
	int16_t x1292 = INT16_MIN;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x1289<<((x1290/x1291)==x1292));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1293 = 3;
	static uint16_t x1294 = 22U;
	int8_t x1295 = INT8_MAX;
	int16_t x1296 = INT16_MIN;

    t182 = (x1293<<((x1294/x1295)==x1296));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1297 = 61;
	int32_t x1298 = INT32_MIN;
	static volatile int16_t x1300 = INT16_MIN;
	int32_t t183 = -3985;

    t183 = (x1297<<((x1298/x1299)==x1300));

    if (t183 != 61) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1301 = INT16_MAX;
	int64_t x1302 = -15660577479LL;
	int32_t x1303 = 13550;
	uint32_t x1304 = 0U;
	volatile int32_t t184 = -19060027;

    t184 = (x1301<<((x1302/x1303)==x1304));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1305 = 1828LL;
	int64_t x1306 = -1LL;
	int16_t x1307 = INT16_MIN;
	volatile int16_t x1308 = INT16_MIN;
	volatile int64_t t185 = -7236850632948LL;

    t185 = (x1305<<((x1306/x1307)==x1308));

    if (t185 != 1828LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1313 = 226804463411LL;
	volatile uint64_t x1314 = UINT64_MAX;
	int32_t x1315 = INT32_MAX;
	static volatile uint8_t x1316 = 1U;
	static int64_t t186 = -87858LL;

    t186 = (x1313<<((x1314/x1315)==x1316));

    if (t186 != 226804463411LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1317 = UINT16_MAX;
	static uint64_t x1318 = 508053694621463824LLU;
	int16_t x1319 = INT16_MIN;
	volatile int16_t x1320 = -10;

    t187 = (x1317<<((x1318/x1319)==x1320));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1325 = INT16_MAX;
	uint16_t x1328 = 6U;

    t188 = (x1325<<((x1326/x1327)==x1328));

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1329 = 1U;
	uint64_t x1330 = 1104323LLU;
	int16_t x1331 = INT16_MIN;

    t189 = (x1329<<((x1330/x1331)==x1332));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1333 = UINT32_MAX;
	int8_t x1334 = INT8_MIN;
	uint32_t x1335 = 13840U;

    t190 = (x1333<<((x1334/x1335)==x1336));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1337 = UINT64_MAX;
	int64_t x1338 = 291633274494261LL;
	static volatile int32_t x1339 = INT32_MIN;
	uint64_t t191 = UINT64_MAX;

    t191 = (x1337<<((x1338/x1339)==x1340));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1346 = 2354;
	static uint8_t x1348 = 1U;
	volatile int64_t t192 = 1479625942477640LL;

    t192 = (x1345<<((x1346/x1347)==x1348));

    if (t192 != 7461004643863572LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1354 = INT16_MIN;
	int16_t x1356 = INT16_MIN;

    t193 = (x1353<<((x1354/x1355)==x1356));

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1357 = 42815U;
	static int8_t x1358 = INT8_MIN;
	int32_t x1359 = INT32_MAX;
	int32_t x1360 = -1;

    t194 = (x1357<<((x1358/x1359)==x1360));

    if (t194 != 42815U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1362 = 82392U;
	int16_t x1363 = INT16_MAX;
	volatile uint32_t t195 = 173823U;

    t195 = (x1361<<((x1362/x1363)==x1364));

    if (t195 != 980U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1371 = 153;
	uint32_t x1372 = UINT32_MAX;
	static volatile int32_t t196 = -213289;

    t196 = (x1369<<((x1370/x1371)==x1372));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1373 = 0;
	int16_t x1374 = -2963;
	int8_t x1375 = INT8_MIN;
	int8_t x1376 = INT8_MAX;
	volatile int32_t t197 = -152429;

    t197 = (x1373<<((x1374/x1375)==x1376));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1381 = 3U;
	static uint64_t x1382 = 11630355LLU;
	uint32_t x1383 = UINT32_MAX;
	uint64_t x1384 = UINT64_MAX;
	volatile int32_t t198 = -50;

    t198 = (x1381<<((x1382/x1383)==x1384));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1401 = 72861097U;
	static int8_t x1402 = -1;
	int64_t x1403 = 12524115120499LL;
	volatile uint32_t t199 = 1029746U;

    t199 = (x1401<<((x1402/x1403)==x1404));

    if (t199 != 72861097U) { NG(); } else { ; }
	
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

