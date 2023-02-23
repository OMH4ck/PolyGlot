
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

static volatile int32_t x2 = 3;
int32_t t0 = 14025;
uint32_t t3 = 3718U;
uint8_t x37 = 31U;
int32_t t5 = 900084891;
uint32_t x53 = 8U;
int16_t x54 = -1;
static volatile uint8_t x69 = 12U;
static int64_t x72 = -1LL;
int16_t x100 = INT16_MAX;
static uint8_t x109 = UINT8_MAX;
volatile uint64_t x111 = 978457LLU;
int16_t x133 = 59;
int16_t x140 = -10590;
static volatile uint32_t x141 = 6U;
uint32_t x143 = 3648U;
uint32_t x152 = UINT32_MAX;
static int64_t x164 = -214247LL;
int64_t x166 = INT64_MIN;
volatile int16_t x173 = INT16_MAX;
uint16_t x178 = 29U;
int32_t t22 = 3738910;
int32_t x194 = INT32_MIN;
uint64_t x195 = UINT64_MAX;
volatile uint16_t x198 = 24U;
static int16_t x199 = 295;
int32_t t24 = 87360389;
uint8_t x206 = 3U;
int16_t x210 = INT16_MAX;
int16_t x216 = -1;
int64_t t27 = INT64_MAX;
int64_t x218 = INT64_MIN;
int8_t x219 = -1;
int64_t t28 = 1928489LL;
static uint32_t x225 = UINT32_MAX;
volatile uint8_t x226 = 9U;
volatile uint64_t x227 = 409323019LLU;
uint8_t x231 = 12U;
static int8_t x240 = -1;
int64_t x291 = INT64_MAX;
uint32_t x297 = 8061U;
int64_t x309 = 121008188475315LL;
int16_t x311 = INT16_MIN;
static int32_t x312 = 4105578;
int16_t x316 = INT16_MIN;
int16_t x318 = -12836;
int64_t x319 = INT64_MIN;
static uint16_t x340 = UINT16_MAX;
int32_t t43 = INT32_MAX;
static uint32_t x373 = UINT32_MAX;
int64_t x374 = -1LL;
int64_t x376 = INT64_MIN;
uint32_t x383 = 8924216U;
volatile uint64_t t47 = 0LLU;
int64_t x399 = 175237571LL;
volatile int32_t t48 = 4555;
uint64_t x405 = UINT64_MAX;
uint32_t x408 = 679U;
int32_t x415 = INT32_MAX;
volatile uint64_t x424 = 1707943LLU;
static int32_t x427 = -1;
int16_t x439 = INT16_MAX;
int32_t x442 = -234833778;
volatile uint8_t x445 = 37U;
volatile int16_t x459 = 18;
static int32_t t59 = 20694;
static uint8_t x463 = 31U;
uint64_t x464 = UINT64_MAX;
volatile int32_t x465 = INT32_MAX;
uint8_t x466 = UINT8_MAX;
uint32_t x476 = 168U;
static uint32_t x489 = UINT32_MAX;
int16_t x506 = 0;
volatile int8_t x507 = INT8_MIN;
static uint8_t x513 = 20U;
uint64_t x514 = 1150765987280LLU;
uint8_t x515 = UINT8_MAX;
static volatile int32_t t68 = 36408153;
static int64_t x535 = -225223470323LL;
int8_t x547 = 0;
int32_t x548 = INT32_MIN;
uint16_t x582 = 549U;
uint32_t x585 = 1872U;
volatile int32_t t77 = 105;
volatile int32_t t78 = 3061008;
volatile int32_t t80 = INT32_MAX;
int64_t t82 = 251LL;
int8_t x626 = 2;
uint8_t x628 = UINT8_MAX;
static uint8_t x641 = 0U;
uint32_t x642 = 901997889U;
int32_t t85 = 216219;
static uint16_t x656 = 115U;
static int64_t x672 = INT64_MAX;
int16_t x682 = -1;
static uint16_t x688 = UINT16_MAX;
volatile uint16_t x698 = 3758U;
int8_t x710 = 37;
int32_t t95 = 9020;
uint32_t x729 = 27989383U;
int32_t x730 = -1;
volatile uint32_t t96 = 177610041U;
uint64_t x741 = 2696466113802676LLU;
int32_t x742 = INT32_MIN;
volatile uint64_t t98 = 623LLU;
int16_t x757 = INT16_MAX;
int8_t x767 = -1;
volatile int32_t x786 = INT32_MIN;
int32_t x788 = INT32_MAX;
uint32_t t105 = UINT32_MAX;
int8_t x805 = 1;
int32_t x807 = INT32_MIN;
static int8_t x818 = -1;
int32_t x825 = INT32_MAX;
uint16_t x829 = 5U;
static volatile int16_t x830 = 401;
volatile int8_t x846 = 2;
int16_t x852 = -1;
int32_t x865 = INT32_MAX;
int16_t x880 = INT16_MAX;
uint32_t x882 = 625628U;
static int16_t x884 = 12;
uint16_t x889 = 4588U;
static int64_t x890 = INT64_MAX;
int64_t x907 = INT64_MIN;
volatile int64_t x908 = INT64_MIN;
uint8_t x910 = 22U;
int8_t x929 = INT8_MAX;
int16_t x931 = INT16_MAX;
static uint16_t x952 = 414U;
uint32_t x965 = 440157U;
static volatile uint16_t x966 = 824U;
uint8_t x968 = UINT8_MAX;
int32_t x969 = 118;
uint8_t x1041 = 36U;
volatile int32_t t136 = -962;
int64_t x1055 = 4257517LL;
volatile uint64_t t138 = 244LLU;
uint32_t x1065 = 41953U;
uint32_t t139 = 4091U;
static volatile int32_t t140 = -353;
int64_t x1087 = INT64_MIN;
volatile int32_t t141 = -77035885;
int64_t x1089 = 530320980509714LL;
volatile int64_t x1094 = INT64_MIN;
static volatile int16_t x1097 = 1;
int32_t x1098 = 3;
uint32_t x1106 = 487401152U;
uint16_t x1113 = 456U;
int32_t t146 = -15111888;
int32_t x1118 = INT32_MIN;
int64_t x1122 = 244747189863LL;
uint64_t x1127 = 11040827229874271LLU;
int16_t x1139 = INT16_MAX;
volatile uint16_t x1142 = 11U;
static uint64_t x1143 = 2171189451015929LLU;
uint64_t t152 = 26441771357764416LLU;
volatile int32_t t155 = -9250;
static int8_t x1174 = -12;
uint8_t x1175 = 96U;
static uint8_t x1186 = UINT8_MAX;
static volatile int32_t t157 = 41670;
int16_t x1197 = INT16_MAX;
volatile int8_t x1204 = -2;
uint64_t t159 = UINT64_MAX;
static volatile int8_t x1209 = INT8_MAX;
int64_t x1210 = INT64_MIN;
uint64_t x1211 = 1284397LLU;
int32_t x1215 = -433;
static int16_t x1216 = INT16_MIN;
uint64_t t163 = UINT64_MAX;
static uint8_t x1241 = 4U;
int32_t x1244 = 8557257;
uint64_t x1255 = 5120559049593157538LLU;
volatile int32_t t171 = -8;
int16_t x1275 = INT16_MAX;
int32_t x1294 = 1;
uint16_t x1307 = UINT16_MAX;
volatile int32_t x1308 = INT32_MIN;
volatile int8_t x1315 = -1;
int32_t t178 = -5;
static uint32_t x1331 = 696322879U;
volatile int16_t x1332 = INT16_MAX;
int8_t x1338 = INT8_MIN;
int32_t x1340 = -20;
uint64_t x1344 = UINT64_MAX;
int64_t x1346 = INT64_MAX;
volatile int8_t x1351 = INT8_MIN;
static uint64_t x1352 = 6413339415137LLU;
static int32_t t184 = -187351892;
int16_t x1357 = INT16_MAX;
uint8_t x1364 = 5U;
uint8_t x1366 = 127U;
int8_t x1370 = 2;
volatile uint16_t x1376 = UINT16_MAX;
uint8_t x1384 = 18U;
volatile int8_t x1385 = 0;
int32_t x1386 = INT32_MAX;
int32_t x1394 = INT32_MIN;
uint16_t x1395 = 26976U;
volatile int64_t x1397 = INT64_MAX;
static volatile int64_t t193 = INT64_MAX;
uint16_t x1420 = UINT16_MAX;
static volatile int32_t t197 = -491012993;
uint32_t x1426 = 0U;
volatile uint64_t t199 = 3LLU;


void f0(void) {
    	int8_t x1 = 59;
	static int32_t x3 = INT32_MIN;
	uint32_t x4 = UINT32_MAX;

    t0 = (x1<<((x2==x3)/x4));

    if (t0 != 59) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x13 = 474025053U;
	int64_t x14 = INT64_MIN;
	static volatile int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	volatile uint32_t t1 = 59U;

    t1 = (x13<<((x14==x15)/x16));

    if (t1 != 474025053U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x17 = INT64_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MAX;
	volatile int64_t t2 = INT64_MAX;

    t2 = (x17<<((x18==x19)/x20));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 3128005U;
	volatile int64_t x22 = INT64_MIN;
	volatile int8_t x23 = 44;
	int64_t x24 = INT64_MIN;

    t3 = (x21<<((x22==x23)/x24));

    if (t3 != 3128005U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = INT32_MAX;
	static volatile int64_t x34 = INT64_MIN;
	uint16_t x35 = 10U;
	int16_t x36 = INT16_MAX;
	static int32_t t4 = INT32_MAX;

    t4 = (x33<<((x34==x35)/x36));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x38 = 12U;
	int64_t x39 = -1LL;
	static int64_t x40 = INT64_MIN;

    t5 = (x37<<((x38==x39)/x40));

    if (t5 != 31) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x55 = INT64_MIN;
	uint32_t x56 = UINT32_MAX;
	volatile uint32_t t6 = 26010646U;

    t6 = (x53<<((x54==x55)/x56));

    if (t6 != 8U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x70 = 7;
	static int8_t x71 = INT8_MAX;
	int32_t t7 = -1643757;

    t7 = (x69<<((x70==x71)/x72));

    if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x89 = 30U;
	int16_t x90 = -1;
	volatile int8_t x91 = INT8_MAX;
	static volatile uint64_t x92 = 10861LLU;
	volatile int32_t t8 = -693852;

    t8 = (x89<<((x90==x91)/x92));

    if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x93 = INT64_MAX;
	int64_t x94 = -1427752060LL;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -3078101;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x93<<((x94==x95)/x96));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x97 = 771237244LLU;
	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	uint64_t t10 = 304763759505320790LLU;

    t10 = (x97<<((x98==x99)/x100));

    if (t10 != 771237244LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x101 = 3U;
	int8_t x102 = -1;
	volatile int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t11 = -699546318;

    t11 = (x101<<((x102==x103)/x104));

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x105 = UINT64_MAX;
	int32_t x106 = 5;
	int64_t x107 = 133217LL;
	int64_t x108 = INT64_MIN;
	static uint64_t t12 = UINT64_MAX;

    t12 = (x105<<((x106==x107)/x108));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x110 = 33U;
	int8_t x112 = -1;
	volatile int32_t t13 = 1;

    t13 = (x109<<((x110==x111)/x112));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x134 = 13U;
	uint64_t x135 = 13083791085994LLU;
	volatile uint16_t x136 = 2U;
	static int32_t t14 = 140128923;

    t14 = (x133<<((x134==x135)/x136));

    if (t14 != 59) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x137 = INT16_MAX;
	uint8_t x138 = 80U;
	uint32_t x139 = 1U;
	static int32_t t15 = -1170;

    t15 = (x137<<((x138==x139)/x140));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x142 = UINT8_MAX;
	int64_t x144 = INT64_MIN;
	uint32_t t16 = 1U;

    t16 = (x141<<((x142==x143)/x144));

    if (t16 != 6U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x149 = 15;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	int32_t t17 = 8;

    t17 = (x149<<((x150==x151)/x152));

    if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x161 = 1LL;
	volatile int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	volatile int64_t t18 = 10547129754196LL;

    t18 = (x161<<((x162==x163)/x164));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x165 = INT8_MAX;
	int32_t x167 = 6333987;
	static volatile uint8_t x168 = 126U;
	volatile int32_t t19 = 0;

    t19 = (x165<<((x166==x167)/x168));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x174 = INT32_MIN;
	volatile int64_t x175 = INT64_MIN;
	uint16_t x176 = 9U;
	volatile int32_t t20 = 2509;

    t20 = (x173<<((x174==x175)/x176));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x177 = 10;
	int64_t x179 = INT64_MAX;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t21 = -372841;

    t21 = (x177<<((x178==x179)/x180));

    if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x181 = 4U;
	volatile uint32_t x182 = 9U;
	uint64_t x183 = 62980810090652007LLU;
	static int32_t x184 = -13105;

    t22 = (x181<<((x182==x183)/x184));

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x193 = INT64_MAX;
	static uint16_t x196 = UINT16_MAX;
	volatile int64_t t23 = INT64_MAX;

    t23 = (x193<<((x194==x195)/x196));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x197 = 1;
	int64_t x200 = 569270LL;

    t24 = (x197<<((x198==x199)/x200));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x205 = 5387435241448725315LLU;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t25 = 61429LLU;

    t25 = (x205<<((x206==x207)/x208));

    if (t25 != 5387435241448725315LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x209 = 5;
	uint64_t x211 = 53LLU;
	volatile int8_t x212 = INT8_MAX;
	int32_t t26 = -43440481;

    t26 = (x209<<((x210==x211)/x212));

    if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;

    t27 = (x213<<((x214==x215)/x216));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x217 = 1008LL;
	volatile uint8_t x220 = 3U;

    t28 = (x217<<((x218==x219)/x220));

    if (t28 != 1008LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x228 = UINT16_MAX;
	static uint32_t t29 = UINT32_MAX;

    t29 = (x225<<((x226==x227)/x228));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x229 = 2405345LLU;
	int64_t x230 = INT64_MIN;
	int32_t x232 = -1;
	volatile uint64_t t30 = 18010577316LLU;

    t30 = (x229<<((x230==x231)/x232));

    if (t30 != 2405345LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x237 = INT32_MAX;
	uint64_t x238 = 20960LLU;
	volatile int8_t x239 = 18;
	volatile int32_t t31 = INT32_MAX;

    t31 = (x237<<((x238==x239)/x240));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x257 = INT16_MAX;
	uint16_t x258 = 2224U;
	static uint8_t x259 = UINT8_MAX;
	volatile int32_t x260 = INT32_MIN;
	int32_t t32 = -425246515;

    t32 = (x257<<((x258==x259)/x260));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x285 = INT64_MAX;
	static uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 8018U;
	volatile int64_t t33 = INT64_MAX;

    t33 = (x285<<((x286==x287)/x288));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x289 = 1474070U;
	int64_t x290 = 377LL;
	int16_t x292 = INT16_MAX;
	uint32_t t34 = 67U;

    t34 = (x289<<((x290==x291)/x292));

    if (t34 != 1474070U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t x300 = INT32_MAX;
	volatile uint32_t t35 = 1639495511U;

    t35 = (x297<<((x298==x299)/x300));

    if (t35 != 8061U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x305 = 2738729197045647LLU;
	uint16_t x306 = 3U;
	uint64_t x307 = 22LLU;
	int8_t x308 = 29;
	volatile uint64_t t36 = 18LLU;

    t36 = (x305<<((x306==x307)/x308));

    if (t36 != 2738729197045647LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x310 = INT8_MAX;
	static int64_t t37 = 869684961967205343LL;

    t37 = (x309<<((x310==x311)/x312));

    if (t37 != 121008188475315LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x313 = 25823LLU;
	uint64_t x314 = 10805741068628802LLU;
	uint16_t x315 = UINT16_MAX;
	uint64_t t38 = 1766692648139635LLU;

    t38 = (x313<<((x314==x315)/x316));

    if (t38 != 25823LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x317 = 29;
	int16_t x320 = INT16_MAX;
	int32_t t39 = 6827;

    t39 = (x317<<((x318==x319)/x320));

    if (t39 != 29) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x329 = 225341;
	static int32_t x330 = INT32_MIN;
	static int32_t x331 = -206;
	int32_t x332 = INT32_MAX;
	volatile int32_t t40 = 61;

    t40 = (x329<<((x330==x331)/x332));

    if (t40 != 225341) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MAX;
	int32_t x335 = 2066428;
	static uint32_t x336 = UINT32_MAX;
	uint64_t t41 = UINT64_MAX;

    t41 = (x333<<((x334==x335)/x336));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x337 = 0;
	int32_t x338 = -1;
	static volatile int8_t x339 = 1;
	static volatile int32_t t42 = -230;

    t42 = (x337<<((x338==x339)/x340));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x341 = INT32_MAX;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MAX;

    t43 = (x341<<((x342==x343)/x344));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x345 = INT8_MAX;
	static volatile int64_t x346 = -10937758LL;
	static int8_t x347 = INT8_MAX;
	int16_t x348 = -9013;
	int32_t t44 = 29928;

    t44 = (x345<<((x346==x347)/x348));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x357 = 4487500131682013873LL;
	int32_t x358 = INT32_MAX;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -1;
	volatile int64_t t45 = 15724130728LL;

    t45 = (x357<<((x358==x359)/x360));

    if (t45 != 4487500131682013873LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x375 = 16679LLU;
	uint32_t t46 = UINT32_MAX;

    t46 = (x373<<((x374==x375)/x376));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x381 = 642483753495066968LLU;
	static int32_t x382 = INT32_MAX;
	int32_t x384 = -1;

    t47 = (x381<<((x382==x383)/x384));

    if (t47 != 642483753495066968LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x397 = INT16_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	static int8_t x400 = INT8_MAX;

    t48 = (x397<<((x398==x399)/x400));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x406 = 8;
	int64_t x407 = INT64_MIN;
	uint64_t t49 = UINT64_MAX;

    t49 = (x405<<((x406==x407)/x408));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x413 = UINT8_MAX;
	int16_t x414 = 7;
	volatile uint64_t x416 = 6191LLU;
	volatile int32_t t50 = -125712;

    t50 = (x413<<((x414==x415)/x416));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x421 = INT64_MAX;
	int8_t x422 = -1;
	uint8_t x423 = 3U;
	volatile int64_t t51 = INT64_MAX;

    t51 = (x421<<((x422==x423)/x424));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x425 = 0;
	volatile uint8_t x426 = 0U;
	int16_t x428 = 1;
	volatile int32_t t52 = 5636;

    t52 = (x425<<((x426==x427)/x428));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x429 = 13671U;
	int8_t x430 = 3;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t53 = 194;

    t53 = (x429<<((x430==x431)/x432));

    if (t53 != 13671) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x437 = INT32_MAX;
	uint16_t x438 = 0U;
	int32_t x440 = INT32_MIN;
	int32_t t54 = INT32_MAX;

    t54 = (x437<<((x438==x439)/x440));

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x441 = 81718U;
	int32_t x443 = 3318;
	uint16_t x444 = UINT16_MAX;
	static uint32_t t55 = 2669U;

    t55 = (x441<<((x442==x443)/x444));

    if (t55 != 81718U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x446 = -1799194302428LL;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 182LLU;
	int32_t t56 = -6;

    t56 = (x445<<((x446==x447)/x448));

    if (t56 != 37) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x449 = 3U;
	static int16_t x450 = -1;
	int64_t x451 = -1LL;
	volatile int64_t x452 = INT64_MIN;
	int32_t t57 = -3374;

    t57 = (x449<<((x450==x451)/x452));

    if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x453 = 11U;
	uint32_t x454 = 415315U;
	uint32_t x455 = 231317U;
	int32_t x456 = -1;
	int32_t t58 = 0;

    t58 = (x453<<((x454==x455)/x456));

    if (t58 != 11) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x457 = UINT8_MAX;
	volatile int16_t x458 = -3;
	volatile int32_t x460 = INT32_MIN;

    t59 = (x457<<((x458==x459)/x460));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x461 = INT16_MAX;
	static uint8_t x462 = 0U;
	int32_t t60 = -138;

    t60 = (x461<<((x462==x463)/x464));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x467 = 1123660302655280LL;
	uint16_t x468 = 305U;
	int32_t t61 = INT32_MAX;

    t61 = (x465<<((x466==x467)/x468));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x473 = 1U;
	volatile int32_t x474 = 6662;
	int64_t x475 = INT64_MIN;
	int32_t t62 = -2423;

    t62 = (x473<<((x474==x475)/x476));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x477 = 0;
	volatile uint32_t x478 = 25689067U;
	static int16_t x479 = INT16_MAX;
	static int16_t x480 = -1000;
	int32_t t63 = -101;

    t63 = (x477<<((x478==x479)/x480));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x490 = UINT32_MAX;
	int16_t x491 = -1;
	int64_t x492 = 16191512LL;
	uint32_t t64 = UINT32_MAX;

    t64 = (x489<<((x490==x491)/x492));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x497 = 486U;
	static uint32_t x498 = UINT32_MAX;
	static uint64_t x499 = 934846047895912LLU;
	int8_t x500 = -3;
	static int32_t t65 = 19108578;

    t65 = (x497<<((x498==x499)/x500));

    if (t65 != 486) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x505 = INT8_MAX;
	uint64_t x508 = 3625668148534062906LLU;
	static volatile int32_t t66 = 402700;

    t66 = (x505<<((x506==x507)/x508));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x516 = INT32_MIN;
	volatile int32_t t67 = 57027;

    t67 = (x513<<((x514==x515)/x516));

    if (t67 != 20) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x521 = 3;
	int64_t x522 = INT64_MAX;
	int8_t x523 = INT8_MIN;
	static volatile int64_t x524 = -1LL;

    t68 = (x521<<((x522==x523)/x524));

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x529 = 499;
	volatile uint32_t x530 = 93U;
	int32_t x531 = -1;
	int32_t x532 = 125;
	int32_t t69 = -145;

    t69 = (x529<<((x530==x531)/x532));

    if (t69 != 499) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x534 = INT16_MIN;
	int8_t x536 = INT8_MAX;
	static int32_t t70 = 174;

    t70 = (x533<<((x534==x535)/x536));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	uint64_t x546 = 1920650LLU;
	volatile int32_t t71 = -69635360;

    t71 = (x545<<((x546==x547)/x548));

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x549 = UINT8_MAX;
	static int32_t x550 = 0;
	volatile uint32_t x551 = 3U;
	int64_t x552 = INT64_MIN;
	int32_t t72 = 33;

    t72 = (x549<<((x550==x551)/x552));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x561 = UINT32_MAX;
	static int32_t x562 = INT32_MAX;
	volatile int64_t x563 = INT64_MAX;
	volatile uint32_t x564 = 1U;
	volatile uint32_t t73 = UINT32_MAX;

    t73 = (x561<<((x562==x563)/x564));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x565 = 3789;
	static uint32_t x566 = 343274U;
	int32_t x567 = 1375618;
	static int32_t x568 = 155;
	int32_t t74 = 18919;

    t74 = (x565<<((x566==x567)/x568));

    if (t74 != 3789) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x581 = INT16_MAX;
	int16_t x583 = INT16_MIN;
	int32_t x584 = -431431;
	static volatile int32_t t75 = 0;

    t75 = (x581<<((x582==x583)/x584));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x586 = 9954107360102210LLU;
	volatile int8_t x587 = 17;
	int8_t x588 = 1;
	uint32_t t76 = 4621019U;

    t76 = (x585<<((x586==x587)/x588));

    if (t76 != 1872U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x593 = 1;
	static int32_t x594 = INT32_MAX;
	volatile int32_t x595 = INT32_MAX;
	uint16_t x596 = UINT16_MAX;

    t77 = (x593<<((x594==x595)/x596));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x597 = 15U;
	int32_t x598 = INT32_MIN;
	static int32_t x599 = INT32_MIN;
	int8_t x600 = INT8_MIN;

    t78 = (x597<<((x598==x599)/x600));

    if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x609 = 1U;
	volatile uint32_t x610 = UINT32_MAX;
	int64_t x611 = 48269504569730LL;
	static uint32_t x612 = UINT32_MAX;
	int32_t t79 = -179132906;

    t79 = (x609<<((x610==x611)/x612));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x613 = INT32_MAX;
	int32_t x614 = 1;
	int8_t x615 = INT8_MAX;
	uint8_t x616 = UINT8_MAX;

    t80 = (x613<<((x614==x615)/x616));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x617 = 87U;
	int32_t x618 = INT32_MIN;
	volatile int8_t x619 = INT8_MAX;
	int16_t x620 = INT16_MAX;
	volatile int32_t t81 = 7;

    t81 = (x617<<((x618==x619)/x620));

    if (t81 != 87) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x621 = 7300508745384856LL;
	volatile int64_t x622 = -1611985LL;
	uint16_t x623 = 2U;
	int64_t x624 = 14358633LL;

    t82 = (x621<<((x622==x623)/x624));

    if (t82 != 7300508745384856LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x625 = 7LLU;
	int32_t x627 = -3904610;
	uint64_t t83 = 1LLU;

    t83 = (x625<<((x626==x627)/x628));

    if (t83 != 7LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x637 = 12;
	uint64_t x638 = 21545018LLU;
	static int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MAX;
	volatile int32_t t84 = 342570;

    t84 = (x637<<((x638==x639)/x640));

    if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x643 = INT8_MIN;
	uint32_t x644 = 94U;

    t85 = (x641<<((x642==x643)/x644));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x645 = 16040;
	int8_t x646 = -1;
	static int64_t x647 = INT64_MIN;
	int32_t x648 = -1;
	int32_t t86 = 316;

    t86 = (x645<<((x646==x647)/x648));

    if (t86 != 16040) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x653 = 53699U;
	int16_t x654 = INT16_MIN;
	volatile uint16_t x655 = 783U;
	uint32_t t87 = 166802876U;

    t87 = (x653<<((x654==x655)/x656));

    if (t87 != 53699U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x657 = INT32_MAX;
	int16_t x658 = -1;
	static uint64_t x659 = 75032LLU;
	uint64_t x660 = UINT64_MAX;
	int32_t t88 = INT32_MAX;

    t88 = (x657<<((x658==x659)/x660));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x661 = INT64_MAX;
	static int16_t x662 = INT16_MIN;
	int8_t x663 = INT8_MIN;
	static int64_t x664 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

    t89 = (x661<<((x662==x663)/x664));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x669 = 3522U;
	uint64_t x670 = 17LLU;
	uint16_t x671 = UINT16_MAX;
	volatile int32_t t90 = 3764390;

    t90 = (x669<<((x670==x671)/x672));

    if (t90 != 3522) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x681 = UINT8_MAX;
	int16_t x683 = -4016;
	static uint16_t x684 = 3372U;
	volatile int32_t t91 = 29786;

    t91 = (x681<<((x682==x683)/x684));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x685 = 1894499114838LLU;
	static int16_t x686 = INT16_MIN;
	volatile uint16_t x687 = 4U;
	static uint64_t t92 = 375LLU;

    t92 = (x685<<((x686==x687)/x688));

    if (t92 != 1894499114838LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x697 = INT8_MAX;
	int64_t x699 = INT64_MIN;
	int64_t x700 = -1LL;
	volatile int32_t t93 = 0;

    t93 = (x697<<((x698==x699)/x700));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x705 = UINT64_MAX;
	uint64_t x706 = 1510320170960159785LLU;
	uint64_t x707 = UINT64_MAX;
	static volatile int64_t x708 = -66126833965021LL;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (x705<<((x706==x707)/x708));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x709 = INT16_MAX;
	static int16_t x711 = INT16_MIN;
	static int32_t x712 = INT32_MAX;

    t95 = (x709<<((x710==x711)/x712));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x731 = INT64_MAX;
	int8_t x732 = -3;

    t96 = (x729<<((x730==x731)/x732));

    if (t96 != 27989383U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x743 = INT64_MIN;
	int32_t x744 = -1;
	volatile uint64_t t97 = 516423561531LLU;

    t97 = (x741<<((x742==x743)/x744));

    if (t97 != 2696466113802676LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x745 = 2821LLU;
	uint32_t x746 = 6U;
	volatile int8_t x747 = 1;
	int32_t x748 = INT32_MIN;

    t98 = (x745<<((x746==x747)/x748));

    if (t98 != 2821LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x753 = 442U;
	int8_t x754 = INT8_MIN;
	int8_t x755 = -8;
	static int32_t x756 = -1;
	static volatile int32_t t99 = -91377184;

    t99 = (x753<<((x754==x755)/x756));

    if (t99 != 442) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x758 = INT32_MIN;
	static int64_t x759 = INT64_MIN;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t100 = -9120;

    t100 = (x757<<((x758==x759)/x760));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x761 = 1013;
	volatile int32_t x762 = 850440391;
	static int32_t x763 = -10021;
	static int16_t x764 = INT16_MIN;
	int32_t t101 = 27382129;

    t101 = (x761<<((x762==x763)/x764));

    if (t101 != 1013) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x765 = 3;
	int8_t x766 = INT8_MAX;
	volatile int16_t x768 = INT16_MIN;
	int32_t t102 = 241442;

    t102 = (x765<<((x766==x767)/x768));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x785 = INT32_MAX;
	uint16_t x787 = UINT16_MAX;
	volatile int32_t t103 = INT32_MAX;

    t103 = (x785<<((x786==x787)/x788));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x789 = 1U;
	static int64_t x790 = INT64_MIN;
	volatile int16_t x791 = INT16_MAX;
	int64_t x792 = INT64_MAX;
	int32_t t104 = -660875;

    t104 = (x789<<((x790==x791)/x792));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x793 = UINT32_MAX;
	uint32_t x794 = UINT32_MAX;
	int16_t x795 = INT16_MAX;
	int32_t x796 = -176;

    t105 = (x793<<((x794==x795)/x796));

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x797 = 0;
	int32_t x798 = INT32_MAX;
	int32_t x799 = INT32_MIN;
	int64_t x800 = -46217LL;
	int32_t t106 = 2349;

    t106 = (x797<<((x798==x799)/x800));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x806 = INT8_MIN;
	int16_t x808 = INT16_MIN;
	volatile int32_t t107 = -7964;

    t107 = (x805<<((x806==x807)/x808));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x817 = 79U;
	int8_t x819 = INT8_MIN;
	int64_t x820 = 1LL;
	static volatile int32_t t108 = -4872;

    t108 = (x817<<((x818==x819)/x820));

    if (t108 != 79) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x826 = 1U;
	uint32_t x827 = UINT32_MAX;
	int64_t x828 = INT64_MAX;
	int32_t t109 = INT32_MAX;

    t109 = (x825<<((x826==x827)/x828));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x831 = 14784U;
	volatile uint32_t x832 = UINT32_MAX;
	int32_t t110 = -47;

    t110 = (x829<<((x830==x831)/x832));

    if (t110 != 5) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x837 = 156685605LLU;
	int16_t x838 = INT16_MAX;
	int32_t x839 = INT32_MAX;
	static uint16_t x840 = UINT16_MAX;
	volatile uint64_t t111 = 108654193544446LLU;

    t111 = (x837<<((x838==x839)/x840));

    if (t111 != 156685605LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x845 = 1;
	uint32_t x847 = UINT32_MAX;
	int16_t x848 = 7;
	volatile int32_t t112 = 266;

    t112 = (x845<<((x846==x847)/x848));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x849 = 38;
	static uint8_t x850 = 14U;
	int8_t x851 = INT8_MAX;
	static int32_t t113 = 33208;

    t113 = (x849<<((x850==x851)/x852));

    if (t113 != 38) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x853 = 0U;
	uint64_t x854 = UINT64_MAX;
	static volatile uint16_t x855 = 7970U;
	static volatile int16_t x856 = INT16_MIN;
	static uint32_t t114 = 24353534U;

    t114 = (x853<<((x854==x855)/x856));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x866 = INT16_MIN;
	static volatile int64_t x867 = INT64_MIN;
	int64_t x868 = 106043424289LL;
	static volatile int32_t t115 = INT32_MAX;

    t115 = (x865<<((x866==x867)/x868));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x873 = 25473U;
	uint64_t x874 = 1290561531535LLU;
	uint8_t x875 = 2U;
	int16_t x876 = INT16_MAX;
	int32_t t116 = 2576557;

    t116 = (x873<<((x874==x875)/x876));

    if (t116 != 25473) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x877 = UINT32_MAX;
	volatile int32_t x878 = -1;
	uint32_t x879 = 3075U;
	uint32_t t117 = UINT32_MAX;

    t117 = (x877<<((x878==x879)/x880));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x881 = UINT32_MAX;
	volatile uint64_t x883 = 911302239LLU;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x881<<((x882==x883)/x884));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x891 = 13101253199010LLU;
	volatile uint32_t x892 = UINT32_MAX;
	volatile int32_t t119 = 17998;

    t119 = (x889<<((x890==x891)/x892));

    if (t119 != 4588) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x897 = UINT64_MAX;
	static uint32_t x898 = 4818U;
	int32_t x899 = INT32_MAX;
	int64_t x900 = INT64_MIN;
	volatile uint64_t t120 = UINT64_MAX;

    t120 = (x897<<((x898==x899)/x900));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x901 = INT32_MAX;
	int16_t x902 = -1;
	static volatile int64_t x903 = 1LL;
	int32_t x904 = -1;
	int32_t t121 = INT32_MAX;

    t121 = (x901<<((x902==x903)/x904));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x905 = 1490544272LLU;
	volatile uint64_t x906 = UINT64_MAX;
	uint64_t t122 = 13LLU;

    t122 = (x905<<((x906==x907)/x908));

    if (t122 != 1490544272LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x909 = 0LL;
	volatile int16_t x911 = INT16_MIN;
	uint64_t x912 = 134LLU;
	static volatile int64_t t123 = 67LL;

    t123 = (x909<<((x910==x911)/x912));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x921 = UINT16_MAX;
	int8_t x922 = INT8_MIN;
	int32_t x923 = -1;
	int64_t x924 = -2LL;
	int32_t t124 = -40;

    t124 = (x921<<((x922==x923)/x924));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x930 = INT32_MIN;
	int16_t x932 = 2;
	int32_t t125 = 23;

    t125 = (x929<<((x930==x931)/x932));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x937 = 9U;
	uint8_t x938 = 28U;
	volatile int16_t x939 = -84;
	int8_t x940 = -1;
	static int32_t t126 = -1;

    t126 = (x937<<((x938==x939)/x940));

    if (t126 != 9) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x945 = UINT32_MAX;
	uint8_t x946 = 10U;
	int32_t x947 = INT32_MIN;
	volatile int64_t x948 = 21LL;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (x945<<((x946==x947)/x948));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x949 = 2908U;
	uint64_t x950 = 990LLU;
	uint16_t x951 = 46U;
	volatile int32_t t128 = -166;

    t128 = (x949<<((x950==x951)/x952));

    if (t128 != 2908) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x953 = UINT16_MAX;
	int32_t x954 = INT32_MIN;
	volatile int16_t x955 = -1;
	volatile uint32_t x956 = 430U;
	volatile int32_t t129 = -16449090;

    t129 = (x953<<((x954==x955)/x956));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x967 = UINT16_MAX;
	uint32_t t130 = 792869U;

    t130 = (x965<<((x966==x967)/x968));

    if (t130 != 440157U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x970 = INT8_MIN;
	volatile uint32_t x971 = 181782077U;
	int32_t x972 = -1;
	int32_t t131 = -2;

    t131 = (x969<<((x970==x971)/x972));

    if (t131 != 118) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x977 = UINT64_MAX;
	int64_t x978 = -3071179LL;
	int64_t x979 = INT64_MIN;
	int8_t x980 = INT8_MIN;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x977<<((x978==x979)/x980));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x997 = 115U;
	static int32_t x998 = 74;
	uint64_t x999 = 10223350451LLU;
	uint64_t x1000 = 1LLU;
	static volatile int32_t t133 = -39659;

    t133 = (x997<<((x998==x999)/x1000));

    if (t133 != 115) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1013 = UINT64_MAX;
	int8_t x1014 = INT8_MIN;
	volatile uint8_t x1015 = UINT8_MAX;
	int8_t x1016 = INT8_MIN;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x1013<<((x1014==x1015)/x1016));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1025 = UINT32_MAX;
	int16_t x1026 = INT16_MAX;
	uint64_t x1027 = UINT64_MAX;
	volatile int64_t x1028 = INT64_MIN;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x1025<<((x1026==x1027)/x1028));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1042 = 25U;
	static uint64_t x1043 = 13324809LLU;
	static int8_t x1044 = 13;

    t136 = (x1041<<((x1042==x1043)/x1044));

    if (t136 != 36) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1053 = 127U;
	int16_t x1054 = INT16_MIN;
	int8_t x1056 = INT8_MAX;
	volatile int32_t t137 = 1;

    t137 = (x1053<<((x1054==x1055)/x1056));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1061 = 320896462333743225LLU;
	int32_t x1062 = INT32_MIN;
	int32_t x1063 = 4649662;
	volatile int32_t x1064 = INT32_MIN;

    t138 = (x1061<<((x1062==x1063)/x1064));

    if (t138 != 320896462333743225LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1066 = INT8_MIN;
	uint32_t x1067 = UINT32_MAX;
	int32_t x1068 = INT32_MAX;

    t139 = (x1065<<((x1066==x1067)/x1068));

    if (t139 != 41953U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1069 = UINT16_MAX;
	volatile uint32_t x1070 = 121487U;
	int32_t x1071 = INT32_MAX;
	static int16_t x1072 = -8344;

    t140 = (x1069<<((x1070==x1071)/x1072));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x1085 = INT8_MAX;
	static uint32_t x1086 = UINT32_MAX;
	int32_t x1088 = -1;

    t141 = (x1085<<((x1086==x1087)/x1088));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1090 = 3U;
	int32_t x1091 = -1;
	int8_t x1092 = -6;
	static int64_t t142 = -11126706156221LL;

    t142 = (x1089<<((x1090==x1091)/x1092));

    if (t142 != 530320980509714LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1093 = INT64_MAX;
	int8_t x1095 = 15;
	static int64_t x1096 = INT64_MIN;
	int64_t t143 = INT64_MAX;

    t143 = (x1093<<((x1094==x1095)/x1096));

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1099 = INT8_MIN;
	int32_t x1100 = -39819;
	volatile int32_t t144 = -35879686;

    t144 = (x1097<<((x1098==x1099)/x1100));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1105 = UINT8_MAX;
	int32_t x1107 = -1;
	static volatile int8_t x1108 = -1;
	int32_t t145 = 883;

    t145 = (x1105<<((x1106==x1107)/x1108));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1114 = INT8_MIN;
	uint32_t x1115 = UINT32_MAX;
	int16_t x1116 = -7;

    t146 = (x1113<<((x1114==x1115)/x1116));

    if (t146 != 456) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1117 = INT64_MAX;
	static uint32_t x1119 = 1288437071U;
	static int32_t x1120 = -3;
	static volatile int64_t t147 = INT64_MAX;

    t147 = (x1117<<((x1118==x1119)/x1120));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x1121 = UINT8_MAX;
	uint32_t x1123 = UINT32_MAX;
	int16_t x1124 = 3550;
	volatile int32_t t148 = -29332313;

    t148 = (x1121<<((x1122==x1123)/x1124));

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1125 = INT64_MAX;
	int8_t x1126 = INT8_MIN;
	uint32_t x1128 = 15U;
	static int64_t t149 = INT64_MAX;

    t149 = (x1125<<((x1126==x1127)/x1128));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x1137 = INT32_MAX;
	int32_t x1138 = -106853960;
	int32_t x1140 = INT32_MIN;
	int32_t t150 = INT32_MAX;

    t150 = (x1137<<((x1138==x1139)/x1140));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x1141 = INT8_MAX;
	int16_t x1144 = INT16_MAX;
	int32_t t151 = -39;

    t151 = (x1141<<((x1142==x1143)/x1144));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x1149 = 191682471111LLU;
	static volatile int8_t x1150 = INT8_MIN;
	int64_t x1151 = INT64_MAX;
	uint16_t x1152 = 6U;

    t152 = (x1149<<((x1150==x1151)/x1152));

    if (t152 != 191682471111LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1153 = UINT32_MAX;
	int16_t x1154 = -1;
	uint16_t x1155 = 2U;
	static uint8_t x1156 = UINT8_MAX;
	uint32_t t153 = UINT32_MAX;

    t153 = (x1153<<((x1154==x1155)/x1156));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1161 = 34;
	volatile uint64_t x1162 = 1442558544LLU;
	uint16_t x1163 = 29238U;
	static int32_t x1164 = 13;
	int32_t t154 = -74;

    t154 = (x1161<<((x1162==x1163)/x1164));

    if (t154 != 34) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1165 = INT16_MAX;
	uint16_t x1166 = 3178U;
	static int64_t x1167 = INT64_MIN;
	uint64_t x1168 = UINT64_MAX;

    t155 = (x1165<<((x1166==x1167)/x1168));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1173 = 145487591925LLU;
	uint16_t x1176 = UINT16_MAX;
	uint64_t t156 = 1402585729275263211LLU;

    t156 = (x1173<<((x1174==x1175)/x1176));

    if (t156 != 145487591925LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1185 = 1032U;
	uint64_t x1187 = 41380586642685LLU;
	static int16_t x1188 = -2;

    t157 = (x1185<<((x1186==x1187)/x1188));

    if (t157 != 1032) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1198 = 0U;
	volatile int16_t x1199 = 20;
	int16_t x1200 = INT16_MIN;
	int32_t t158 = 646868207;

    t158 = (x1197<<((x1198==x1199)/x1200));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1201 = UINT64_MAX;
	static volatile int8_t x1202 = 45;
	static int16_t x1203 = INT16_MIN;

    t159 = (x1201<<((x1202==x1203)/x1204));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x1205 = 29U;
	int16_t x1206 = -1;
	int64_t x1207 = INT64_MIN;
	int64_t x1208 = INT64_MIN;
	int32_t t160 = -757431748;

    t160 = (x1205<<((x1206==x1207)/x1208));

    if (t160 != 29) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1212 = 107840U;
	volatile int32_t t161 = 583395587;

    t161 = (x1209<<((x1210==x1211)/x1212));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1213 = UINT16_MAX;
	int16_t x1214 = 156;
	volatile int32_t t162 = 1660;

    t162 = (x1213<<((x1214==x1215)/x1216));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1217 = UINT64_MAX;
	static volatile uint16_t x1218 = UINT16_MAX;
	int8_t x1219 = -1;
	int32_t x1220 = -4181;

    t163 = (x1217<<((x1218==x1219)/x1220));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1221 = UINT64_MAX;
	uint64_t x1222 = 8081374644419335LLU;
	int8_t x1223 = -5;
	volatile int64_t x1224 = -1LL;
	uint64_t t164 = UINT64_MAX;

    t164 = (x1221<<((x1222==x1223)/x1224));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x1225 = UINT16_MAX;
	static uint8_t x1226 = UINT8_MAX;
	volatile int64_t x1227 = 262026826075LL;
	int64_t x1228 = INT64_MAX;
	static int32_t t165 = 71;

    t165 = (x1225<<((x1226==x1227)/x1228));

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1233 = 54U;
	int32_t x1234 = INT32_MAX;
	uint16_t x1235 = 0U;
	uint8_t x1236 = 1U;
	volatile int32_t t166 = 15148981;

    t166 = (x1233<<((x1234==x1235)/x1236));

    if (t166 != 54) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1242 = 15U;
	static int16_t x1243 = INT16_MIN;
	volatile int32_t t167 = 372927;

    t167 = (x1241<<((x1242==x1243)/x1244));

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1249 = INT64_MAX;
	uint64_t x1250 = UINT64_MAX;
	static int32_t x1251 = -1;
	int8_t x1252 = 11;
	int64_t t168 = INT64_MAX;

    t168 = (x1249<<((x1250==x1251)/x1252));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1253 = 50;
	volatile uint32_t x1254 = UINT32_MAX;
	static volatile uint8_t x1256 = 17U;
	static volatile int32_t t169 = 5;

    t169 = (x1253<<((x1254==x1255)/x1256));

    if (t169 != 50) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x1257 = 31LLU;
	int32_t x1258 = INT32_MIN;
	volatile uint16_t x1259 = 26U;
	int64_t x1260 = INT64_MAX;
	uint64_t t170 = 2233LLU;

    t170 = (x1257<<((x1258==x1259)/x1260));

    if (t170 != 31LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1261 = UINT8_MAX;
	int16_t x1262 = 1555;
	uint64_t x1263 = UINT64_MAX;
	uint32_t x1264 = 34120311U;

    t171 = (x1261<<((x1262==x1263)/x1264));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1269 = UINT8_MAX;
	static int16_t x1270 = -1;
	volatile int8_t x1271 = -3;
	volatile uint32_t x1272 = 112031576U;
	int32_t t172 = -6998129;

    t172 = (x1269<<((x1270==x1271)/x1272));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1273 = UINT16_MAX;
	uint64_t x1274 = UINT64_MAX;
	volatile int16_t x1276 = INT16_MIN;
	volatile int32_t t173 = -331388248;

    t173 = (x1273<<((x1274==x1275)/x1276));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1277 = 3988740U;
	static int32_t x1278 = -657835;
	int64_t x1279 = -64038592839337861LL;
	int32_t x1280 = INT32_MIN;
	volatile uint32_t t174 = 508943235U;

    t174 = (x1277<<((x1278==x1279)/x1280));

    if (t174 != 3988740U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1285 = 444U;
	volatile int64_t x1286 = 6LL;
	int16_t x1287 = -1;
	static volatile int8_t x1288 = -1;
	static volatile int32_t t175 = 532;

    t175 = (x1285<<((x1286==x1287)/x1288));

    if (t175 != 444) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1293 = 5176;
	int32_t x1295 = -627299;
	uint64_t x1296 = 340816724LLU;
	volatile int32_t t176 = -252817;

    t176 = (x1293<<((x1294==x1295)/x1296));

    if (t176 != 5176) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x1305 = 54U;
	volatile int8_t x1306 = INT8_MIN;
	int32_t t177 = 124176;

    t177 = (x1305<<((x1306==x1307)/x1308));

    if (t177 != 54) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1313 = 0U;
	static int32_t x1314 = INT32_MIN;
	static int16_t x1316 = -1;

    t178 = (x1313<<((x1314==x1315)/x1316));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1329 = 7U;
	uint8_t x1330 = 5U;
	uint32_t t179 = 7136U;

    t179 = (x1329<<((x1330==x1331)/x1332));

    if (t179 != 7U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1337 = 5574LLU;
	volatile uint8_t x1339 = 7U;
	volatile uint64_t t180 = 770LLU;

    t180 = (x1337<<((x1338==x1339)/x1340));

    if (t180 != 5574LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1341 = 215;
	volatile int32_t x1342 = INT32_MAX;
	static uint16_t x1343 = 7246U;
	int32_t t181 = 581;

    t181 = (x1341<<((x1342==x1343)/x1344));

    if (t181 != 215) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1345 = 73U;
	int64_t x1347 = INT64_MAX;
	int8_t x1348 = -31;
	static int32_t t182 = -4;

    t182 = (x1345<<((x1346==x1347)/x1348));

    if (t182 != 73) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1349 = 474053U;
	volatile uint32_t x1350 = UINT32_MAX;
	uint32_t t183 = 157698867U;

    t183 = (x1349<<((x1350==x1351)/x1352));

    if (t183 != 474053U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1353 = 405U;
	uint16_t x1354 = UINT16_MAX;
	volatile int32_t x1355 = INT32_MAX;
	int8_t x1356 = INT8_MAX;

    t184 = (x1353<<((x1354==x1355)/x1356));

    if (t184 != 405) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1358 = 9705U;
	volatile uint64_t x1359 = 495586490972498LLU;
	uint64_t x1360 = 18005767LLU;
	int32_t t185 = -15;

    t185 = (x1357<<((x1358==x1359)/x1360));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1361 = INT32_MAX;
	int64_t x1362 = -123391012616052628LL;
	int8_t x1363 = -58;
	volatile int32_t t186 = INT32_MAX;

    t186 = (x1361<<((x1362==x1363)/x1364));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1365 = 1U;
	volatile int8_t x1367 = INT8_MAX;
	volatile uint16_t x1368 = 30U;
	static int32_t t187 = -11;

    t187 = (x1365<<((x1366==x1367)/x1368));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1369 = 607;
	int8_t x1371 = INT8_MIN;
	static uint16_t x1372 = UINT16_MAX;
	int32_t t188 = -37802009;

    t188 = (x1369<<((x1370==x1371)/x1372));

    if (t188 != 607) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1373 = UINT64_MAX;
	int8_t x1374 = INT8_MIN;
	static int8_t x1375 = -5;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (x1373<<((x1374==x1375)/x1376));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1381 = INT64_MAX;
	int8_t x1382 = INT8_MIN;
	int32_t x1383 = -1;
	int64_t t190 = INT64_MAX;

    t190 = (x1381<<((x1382==x1383)/x1384));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1387 = INT16_MIN;
	int16_t x1388 = INT16_MIN;
	volatile int32_t t191 = 1;

    t191 = (x1385<<((x1386==x1387)/x1388));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1393 = 7905;
	uint16_t x1396 = UINT16_MAX;
	volatile int32_t t192 = 6;

    t192 = (x1393<<((x1394==x1395)/x1396));

    if (t192 != 7905) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1398 = 55LLU;
	static int8_t x1399 = 0;
	int8_t x1400 = -1;

    t193 = (x1397<<((x1398==x1399)/x1400));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x1401 = 104235130U;
	int32_t x1402 = INT32_MIN;
	int8_t x1403 = INT8_MIN;
	static volatile uint16_t x1404 = UINT16_MAX;
	uint32_t t194 = 6161U;

    t194 = (x1401<<((x1402==x1403)/x1404));

    if (t194 != 104235130U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1405 = INT8_MAX;
	volatile uint32_t x1406 = 2428012U;
	static int32_t x1407 = -8666;
	volatile uint64_t x1408 = 2180094720903453LLU;
	volatile int32_t t195 = -3350;

    t195 = (x1405<<((x1406==x1407)/x1408));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1409 = UINT8_MAX;
	uint64_t x1410 = 185700741572420519LLU;
	volatile uint16_t x1411 = UINT16_MAX;
	static uint64_t x1412 = 3283561LLU;
	static volatile int32_t t196 = -124694;

    t196 = (x1409<<((x1410==x1411)/x1412));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1417 = 2456U;
	uint8_t x1418 = UINT8_MAX;
	volatile int32_t x1419 = -1388037;

    t197 = (x1417<<((x1418==x1419)/x1420));

    if (t197 != 2456) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1425 = 25803708645LLU;
	uint16_t x1427 = 12U;
	static volatile int16_t x1428 = -4;
	volatile uint64_t t198 = 36044020421954088LLU;

    t198 = (x1425<<((x1426==x1427)/x1428));

    if (t198 != 25803708645LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1429 = 1265930681440831569LLU;
	volatile int8_t x1430 = -1;
	static uint16_t x1431 = 14580U;
	uint16_t x1432 = 9U;

    t199 = (x1429<<((x1430==x1431)/x1432));

    if (t199 != 1265930681440831569LLU) { NG(); } else { ; }
	
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

