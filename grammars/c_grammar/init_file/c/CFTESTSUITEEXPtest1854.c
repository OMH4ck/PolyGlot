
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

static volatile int16_t x4 = -1;
int32_t t0 = -1939;
uint32_t x8 = UINT32_MAX;
volatile int32_t t1 = -516059384;
static int8_t x12 = INT8_MIN;
int16_t x23 = -1;
volatile int32_t t4 = -1;
int8_t x39 = 7;
volatile int16_t x41 = 181;
static uint8_t x74 = UINT8_MAX;
uint64_t x78 = 156224671018LLU;
volatile int32_t t10 = -28;
uint8_t x109 = 1U;
int8_t x127 = INT8_MIN;
static volatile int64_t t16 = -24070237942621LL;
static uint64_t x139 = 3LLU;
static uint16_t x140 = UINT16_MAX;
int16_t x159 = -1;
uint64_t x176 = UINT64_MAX;
int32_t x189 = 820;
volatile int8_t x190 = INT8_MIN;
int16_t x200 = -7337;
int64_t x213 = 621889572LL;
static volatile int16_t x214 = INT16_MAX;
int16_t x215 = -1;
volatile uint64_t x216 = UINT64_MAX;
static volatile uint64_t x219 = 7901139LLU;
uint8_t x224 = UINT8_MAX;
int64_t x232 = INT64_MIN;
uint8_t x258 = 126U;
int16_t x281 = INT16_MAX;
int32_t t32 = 2231029;
int64_t x287 = INT64_MAX;
volatile int8_t x314 = 3;
uint32_t x328 = 496U;
uint64_t x345 = UINT64_MAX;
volatile int32_t t40 = -2071;
static uint32_t x358 = UINT32_MAX;
static volatile uint8_t x361 = 3U;
uint32_t x369 = UINT32_MAX;
static int16_t x385 = INT16_MAX;
int16_t x386 = -1;
static volatile int32_t t47 = -9853399;
volatile int32_t t49 = 4091052;
int16_t x416 = -271;
volatile int32_t t50 = -19686507;
volatile int8_t x429 = 0;
int8_t x444 = INT8_MIN;
volatile uint32_t t55 = 0U;
int8_t x485 = 0;
uint64_t x486 = 4106879814550434073LLU;
int32_t x500 = INT32_MIN;
static volatile int32_t t58 = -1027911692;
int32_t x514 = INT32_MIN;
uint16_t x542 = 621U;
volatile uint64_t x543 = 195139209502150LLU;
uint16_t x551 = 6142U;
int16_t x553 = 7263;
volatile int32_t x556 = INT32_MAX;
int32_t t69 = 44111846;
static volatile uint32_t t70 = 5U;
static int16_t x638 = -5898;
volatile int64_t x639 = 162LL;
uint64_t x643 = UINT64_MAX;
uint32_t x661 = UINT32_MAX;
uint8_t x663 = 68U;
static int64_t x664 = INT64_MIN;
int8_t x675 = INT8_MIN;
uint16_t x676 = UINT16_MAX;
int64_t x682 = INT64_MIN;
uint8_t x691 = 127U;
volatile int32_t x710 = 23914;
uint16_t x713 = 47U;
int8_t x715 = 45;
static volatile int16_t x716 = -2;
volatile uint64_t x719 = UINT64_MAX;
uint32_t x720 = UINT32_MAX;
static int32_t t89 = 99101295;
volatile int64_t x756 = INT64_MIN;
volatile int32_t x768 = -1;
volatile uint16_t x777 = 10341U;
int8_t x780 = -1;
uint32_t t96 = 22745850U;
int8_t x793 = 41;
uint64_t t99 = 35848624290451903LLU;
int32_t t100 = 260776;
uint64_t x813 = 7864255LLU;
volatile uint64_t t101 = 472721882119598949LLU;
int8_t x837 = INT8_MAX;
int8_t x863 = -1;
int64_t x875 = INT64_MIN;
volatile int32_t t106 = 806392989;
static volatile uint8_t x885 = UINT8_MAX;
int16_t x887 = INT16_MAX;
int32_t x893 = 0;
volatile uint8_t x898 = 22U;
uint16_t x899 = 7U;
uint8_t x916 = 7U;
uint32_t x922 = UINT32_MAX;
static int8_t x923 = INT8_MIN;
volatile int32_t t115 = 875;
static int64_t x959 = INT64_MAX;
int8_t x967 = INT8_MIN;
static int32_t t118 = 6250;
int16_t x976 = -21;
int32_t x992 = INT32_MAX;
volatile int32_t t120 = 0;
static volatile int32_t t122 = 461140;
uint64_t x1022 = 1109795125503291LLU;
int64_t x1024 = -1LL;
int16_t x1028 = INT16_MIN;
volatile int16_t x1049 = INT16_MAX;
volatile int16_t x1051 = -1;
uint16_t x1078 = 12U;
volatile uint32_t t131 = 36337U;
static uint64_t t132 = 61483322LLU;
volatile uint64_t x1105 = 55LLU;
int64_t x1107 = INT64_MIN;
volatile uint64_t t133 = 3398549909038315738LLU;
uint64_t x1109 = 19474971213067LLU;
uint64_t x1111 = UINT64_MAX;
int64_t x1118 = INT64_MAX;
int32_t t136 = 1002;
int16_t x1142 = INT16_MAX;
int64_t x1144 = INT64_MIN;
uint16_t x1164 = UINT16_MAX;
int16_t x1176 = INT16_MIN;
int64_t x1195 = INT64_MAX;
uint8_t x1198 = UINT8_MAX;
static int32_t t144 = -386;
uint8_t x1206 = 10U;
int64_t t145 = 1026024814LL;
int16_t x1221 = INT16_MAX;
uint8_t x1250 = UINT8_MAX;
uint64_t t151 = 2LLU;
static int8_t x1266 = INT8_MIN;
volatile int64_t x1268 = -7877352480173393LL;
static int32_t x1269 = 249737;
static int32_t x1271 = INT32_MIN;
int8_t x1278 = -1;
int32_t x1280 = -1;
volatile int32_t x1305 = 423757495;
uint16_t x1317 = 3U;
volatile uint64_t x1318 = 1725412LLU;
int16_t x1329 = 2080;
int8_t x1332 = INT8_MIN;
volatile int32_t x1351 = INT32_MIN;
volatile uint32_t x1352 = UINT32_MAX;
volatile int8_t x1371 = 0;
uint64_t x1384 = 1771960LLU;
volatile uint32_t t166 = 206U;
int64_t x1417 = 223LL;
int64_t t167 = -2014543833480543LL;
volatile int8_t x1430 = INT8_MIN;
uint64_t x1433 = UINT64_MAX;
int64_t x1444 = 894605LL;
uint64_t x1449 = 199LLU;
int32_t x1452 = -1;
volatile uint32_t x1465 = 3U;
volatile int8_t x1466 = INT8_MAX;
int16_t x1467 = INT16_MIN;
int64_t x1468 = INT64_MAX;
volatile uint16_t x1470 = 138U;
int16_t x1471 = INT16_MIN;
int16_t x1476 = INT16_MAX;
int32_t x1479 = 236082;
uint8_t x1507 = 38U;
int16_t x1523 = -1;
uint16_t x1549 = UINT16_MAX;
int32_t x1551 = -1;
volatile int32_t t188 = 20554126;
static volatile int32_t t189 = 255634;
int16_t x1570 = INT16_MIN;
int32_t t193 = 5758;
volatile uint8_t x1611 = UINT8_MAX;
int32_t x1625 = 1609849;
int32_t x1627 = -264640;
int64_t x1628 = 98300689984073LL;
static int8_t x1645 = INT8_MAX;
int8_t x1647 = INT8_MAX;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	int16_t x3 = -11965;

    t0 = (x1<<((x2<=x3)!=x4));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = 6U;
	volatile int16_t x7 = INT16_MIN;

    t1 = (x5<<((x6<=x7)!=x8));

    if (t1 != 510) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 1U;
	int32_t x10 = 233483;
	int8_t x11 = 6;
	int32_t t2 = 54604934;

    t2 = (x9<<((x10<=x11)!=x12));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 675830959412LLU;
	uint8_t x18 = UINT8_MAX;
	static int64_t x19 = INT64_MIN;
	int8_t x20 = 62;
	uint64_t t3 = 46344451034LLU;

    t3 = (x17<<((x18<=x19)!=x20));

    if (t3 != 1351661918824LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = 28U;
	uint32_t x22 = UINT32_MAX;
	int16_t x24 = INT16_MAX;

    t4 = (x21<<((x22<=x23)!=x24));

    if (t4 != 56) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = UINT8_MAX;
	int64_t x38 = -592432LL;
	uint16_t x40 = 15734U;
	int32_t t5 = -352;

    t5 = (x37<<((x38<=x39)!=x40));

    if (t5 != 510) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x42 = UINT32_MAX;
	volatile uint16_t x43 = 21U;
	static int64_t x44 = INT64_MIN;
	int32_t t6 = 219025700;

    t6 = (x41<<((x42<=x43)!=x44));

    if (t6 != 362) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x49 = 6;
	volatile uint64_t x50 = 447234228LLU;
	uint16_t x51 = 25U;
	int32_t x52 = -1;
	static volatile int32_t t7 = -496982845;

    t7 = (x49<<((x50<=x51)!=x52));

    if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x61 = 913368924759LLU;
	int8_t x62 = 21;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = 87;
	volatile uint64_t t8 = 592248297093382286LLU;

    t8 = (x61<<((x62<=x63)!=x64));

    if (t8 != 1826737849518LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x73 = 1U;
	uint64_t x75 = 8100LLU;
	int16_t x76 = INT16_MIN;
	static int32_t t9 = -1998;

    t9 = (x73<<((x74<=x75)!=x76));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x77 = 495U;
	int16_t x79 = INT16_MIN;
	int64_t x80 = -1LL;

    t10 = (x77<<((x78<=x79)!=x80));

    if (t10 != 990) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x89 = 32U;
	uint32_t x90 = 19827790U;
	static int8_t x91 = 0;
	uint64_t x92 = 57297757503LLU;
	static int32_t t11 = 1;

    t11 = (x89<<((x90<=x91)!=x92));

    if (t11 != 64) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x93 = 23;
	int8_t x94 = INT8_MIN;
	static uint16_t x95 = 5697U;
	int16_t x96 = -1;
	int32_t t12 = 95328179;

    t12 = (x93<<((x94<=x95)!=x96));

    if (t12 != 46) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x97 = 298319LL;
	static int8_t x98 = INT8_MAX;
	uint32_t x99 = 850022U;
	static int16_t x100 = INT16_MIN;
	volatile int64_t t13 = -234198520457692086LL;

    t13 = (x97<<((x98<=x99)!=x100));

    if (t13 != 596638LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x110 = 1433;
	static volatile uint64_t x111 = 114540557963093279LLU;
	volatile int8_t x112 = INT8_MIN;
	int32_t t14 = -60;

    t14 = (x109<<((x110<=x111)!=x112));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	static uint16_t x128 = UINT16_MAX;
	static volatile int32_t t15 = -37;

    t15 = (x125<<((x126<=x127)!=x128));

    if (t15 != 510) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x133 = 121LL;
	uint64_t x134 = 67399425LLU;
	volatile int64_t x135 = 721764858LL;
	static volatile int8_t x136 = 20;

    t16 = (x133<<((x134<=x135)!=x136));

    if (t16 != 242LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x137 = UINT32_MAX;
	int8_t x138 = INT8_MIN;
	volatile uint32_t t17 = 139U;

    t17 = (x137<<((x138<=x139)!=x140));

    if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x157 = 0U;
	volatile int32_t x158 = -172;
	int8_t x160 = -1;
	int32_t t18 = -1;

    t18 = (x157<<((x158<=x159)!=x160));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x173 = 1U;
	static uint8_t x174 = 9U;
	uint64_t x175 = 1348629968135LLU;
	volatile int32_t t19 = 50631013;

    t19 = (x173<<((x174<=x175)!=x176));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x185 = 24;
	uint8_t x186 = 8U;
	int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t20 = 1;

    t20 = (x185<<((x186<=x187)!=x188));

    if (t20 != 48) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x191 = 51U;
	int32_t x192 = 88198312;
	static volatile int32_t t21 = 28;

    t21 = (x189<<((x190<=x191)!=x192));

    if (t21 != 1640) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 687036704U;
	uint32_t x199 = UINT32_MAX;
	uint64_t t22 = 34036391777894535LLU;

    t22 = (x197<<((x198<=x199)!=x200));

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x201 = 67U;
	volatile uint64_t x202 = 197267LLU;
	static int64_t x203 = INT64_MIN;
	volatile int16_t x204 = -511;
	int32_t t23 = 15;

    t23 = (x201<<((x202<=x203)!=x204));

    if (t23 != 134) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x205 = 1;
	int32_t x206 = INT32_MAX;
	uint64_t x207 = UINT64_MAX;
	static uint64_t x208 = 115LLU;
	volatile int32_t t24 = 246294534;

    t24 = (x205<<((x206<=x207)!=x208));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t t25 = 109308026295LL;

    t25 = (x213<<((x214<=x215)!=x216));

    if (t25 != 1243779144LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x217 = 175472060LL;
	static int16_t x218 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int64_t t26 = -1073200194695419LL;

    t26 = (x217<<((x218<=x219)!=x220));

    if (t26 != 350944120LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x221 = 62U;
	static int16_t x222 = 498;
	int16_t x223 = -4;
	volatile int32_t t27 = 13;

    t27 = (x221<<((x222<=x223)!=x224));

    if (t27 != 124) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x229 = INT16_MAX;
	static volatile int16_t x230 = INT16_MIN;
	static uint16_t x231 = 26353U;
	volatile int32_t t28 = 12;

    t28 = (x229<<((x230<=x231)!=x232));

    if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	volatile uint32_t x234 = 560U;
	static int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	int32_t t29 = -43012343;

    t29 = (x233<<((x234<=x235)!=x236));

    if (t29 != 510) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x245 = INT8_MAX;
	uint8_t x246 = 25U;
	volatile int16_t x247 = INT16_MIN;
	static volatile int64_t x248 = 979891488460326920LL;
	int32_t t30 = -1576571;

    t30 = (x245<<((x246<=x247)!=x248));

    if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x257 = 2977508385841LLU;
	int8_t x259 = 3;
	uint16_t x260 = 260U;
	volatile uint64_t t31 = 2LLU;

    t31 = (x257<<((x258<=x259)!=x260));

    if (t31 != 5955016771682LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x282 = INT32_MIN;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;

    t32 = (x281<<((x282<=x283)!=x284));

    if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x285 = 8006U;
	int8_t x286 = 3;
	int32_t x288 = INT32_MAX;
	int32_t t33 = -291065;

    t33 = (x285<<((x286<=x287)!=x288));

    if (t33 != 16012) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x313 = 3U;
	static int16_t x315 = -1;
	static volatile uint8_t x316 = 27U;
	volatile int32_t t34 = -10;

    t34 = (x313<<((x314<=x315)!=x316));

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x325 = 2062068U;
	int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MIN;
	volatile uint32_t t35 = 1490940893U;

    t35 = (x325<<((x326<=x327)!=x328));

    if (t35 != 4124136U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x329 = 3;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = 26;
	uint64_t x332 = UINT64_MAX;
	int32_t t36 = -621934;

    t36 = (x329<<((x330<=x331)!=x332));

    if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x333 = 0;
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t37 = -32643378;

    t37 = (x333<<((x334<=x335)!=x336));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x337 = 1520875LL;
	int16_t x338 = INT16_MIN;
	int64_t x339 = 19484010965829LL;
	uint16_t x340 = 24U;
	int64_t t38 = 8677420360248LL;

    t38 = (x337<<((x338<=x339)!=x340));

    if (t38 != 3041750LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	static uint16_t x348 = UINT16_MAX;
	uint64_t t39 = 58935LLU;

    t39 = (x345<<((x346<=x347)!=x348));

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x353 = INT16_MAX;
	static int32_t x354 = INT32_MIN;
	uint8_t x355 = 1U;
	static uint8_t x356 = UINT8_MAX;

    t40 = (x353<<((x354<=x355)!=x356));

    if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x357 = 59481566603263LL;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = 129937LLU;
	static int64_t t41 = -2LL;

    t41 = (x357<<((x358<=x359)!=x360));

    if (t41 != 118963133206526LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x362 = INT8_MIN;
	uint16_t x363 = 4710U;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t42 = -166149;

    t42 = (x361<<((x362<=x363)!=x364));

    if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x365 = 961974026149737606LLU;
	int8_t x366 = -9;
	volatile uint64_t x367 = UINT64_MAX;
	static uint8_t x368 = 28U;
	static volatile uint64_t t43 = 48660LLU;

    t43 = (x365<<((x366<=x367)!=x368));

    if (t43 != 1923948052299475212LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x370 = -41;
	uint16_t x371 = 7593U;
	uint8_t x372 = UINT8_MAX;
	volatile uint32_t t44 = 30429220U;

    t44 = (x369<<((x370<=x371)!=x372));

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x373 = 1546U;
	int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	volatile uint32_t x376 = 0U;
	uint32_t t45 = 2012588805U;

    t45 = (x373<<((x374<=x375)!=x376));

    if (t45 != 3092U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x387 = INT16_MAX;
	volatile uint64_t x388 = 806622980LLU;
	volatile int32_t t46 = 8831;

    t46 = (x385<<((x386<=x387)!=x388));

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x401 = 2501U;
	uint32_t x402 = 3U;
	static uint8_t x403 = UINT8_MAX;
	int32_t x404 = -1;

    t47 = (x401<<((x402<=x403)!=x404));

    if (t47 != 5002) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x405 = 100;
	int8_t x406 = -32;
	volatile uint64_t x407 = 31625380906704907LLU;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t48 = -151;

    t48 = (x405<<((x406<=x407)!=x408));

    if (t48 != 200) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x409 = UINT8_MAX;
	int64_t x410 = -2240568548386461228LL;
	volatile int8_t x411 = -54;
	int64_t x412 = -1LL;

    t49 = (x409<<((x410<=x411)!=x412));

    if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x413 = 1866;
	static int64_t x414 = -14394974380LL;
	uint32_t x415 = 54227U;

    t50 = (x413<<((x414<=x415)!=x416));

    if (t50 != 3732) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	int64_t x432 = -10180292995210527LL;
	int32_t t51 = 214818872;

    t51 = (x429<<((x430<=x431)!=x432));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x441 = 37480660888LL;
	volatile int8_t x442 = 1;
	int8_t x443 = 28;
	volatile int64_t t52 = 1684689175678950LL;

    t52 = (x441<<((x442<=x443)!=x444));

    if (t52 != 74961321776LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x449 = UINT64_MAX;
	static int64_t x450 = -1LL;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = INT16_MIN;
	volatile uint64_t t53 = 4949067341LLU;

    t53 = (x449<<((x450<=x451)!=x452));

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x453 = 12526;
	uint32_t x454 = 601916U;
	int16_t x455 = INT16_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t54 = 127;

    t54 = (x453<<((x454<=x455)!=x456));

    if (t54 != 25052) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x465 = 32997166U;
	static volatile int8_t x466 = -1;
	int8_t x467 = 30;
	int32_t x468 = INT32_MAX;

    t55 = (x465<<((x466<=x467)!=x468));

    if (t55 != 65994332U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x469 = 127U;
	uint32_t x470 = 608573U;
	int32_t x471 = 1;
	static volatile int8_t x472 = 0;
	volatile int32_t t56 = 13740992;

    t56 = (x469<<((x470<=x471)!=x472));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x487 = UINT8_MAX;
	uint64_t x488 = 31369530528189213LLU;
	static volatile int32_t t57 = -1605161;

    t57 = (x485<<((x486<=x487)!=x488));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x497 = 1;
	uint8_t x498 = UINT8_MAX;
	int16_t x499 = -1465;

    t58 = (x497<<((x498<=x499)!=x500));

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x509 = 115U;
	int64_t x510 = 920135846750069LL;
	static uint8_t x511 = 15U;
	int16_t x512 = INT16_MAX;
	volatile int32_t t59 = -3435885;

    t59 = (x509<<((x510<=x511)!=x512));

    if (t59 != 230) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x513 = 2396;
	static volatile uint16_t x515 = UINT16_MAX;
	static volatile int8_t x516 = 51;
	volatile int32_t t60 = -600;

    t60 = (x513<<((x514<=x515)!=x516));

    if (t60 != 4792) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x525 = INT8_MAX;
	volatile uint16_t x526 = UINT16_MAX;
	int8_t x527 = -4;
	uint64_t x528 = 135666881760288LLU;
	static int32_t t61 = 282438;

    t61 = (x525<<((x526<=x527)!=x528));

    if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x529 = INT8_MAX;
	static volatile int32_t x530 = -1;
	volatile int64_t x531 = -1LL;
	volatile int32_t x532 = INT32_MIN;
	volatile int32_t t62 = 972;

    t62 = (x529<<((x530<=x531)!=x532));

    if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x533 = 22U;
	int32_t x534 = -1;
	volatile uint64_t x535 = 128209572LLU;
	static volatile uint32_t x536 = 8450U;
	volatile int32_t t63 = -9;

    t63 = (x533<<((x534<=x535)!=x536));

    if (t63 != 44) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x541 = 585LLU;
	uint8_t x544 = 45U;
	static volatile uint64_t t64 = 334391089411986668LLU;

    t64 = (x541<<((x542<=x543)!=x544));

    if (t64 != 1170LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x549 = 63531;
	int64_t x550 = INT64_MAX;
	int8_t x552 = INT8_MIN;
	int32_t t65 = -28909;

    t65 = (x549<<((x550<=x551)!=x552));

    if (t65 != 127062) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x554 = -6682;
	int64_t x555 = 378626438987493LL;
	static volatile int32_t t66 = -30883791;

    t66 = (x553<<((x554<=x555)!=x556));

    if (t66 != 14526) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x557 = 4680991210265LLU;
	uint8_t x558 = 2U;
	static uint64_t x559 = UINT64_MAX;
	uint32_t x560 = 1424928327U;
	volatile uint64_t t67 = 135LLU;

    t67 = (x557<<((x558<=x559)!=x560));

    if (t67 != 9361982420530LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x569 = 120LLU;
	uint8_t x570 = 111U;
	int16_t x571 = INT16_MIN;
	static int32_t x572 = -1;
	volatile uint64_t t68 = 67302825029LLU;

    t68 = (x569<<((x570<=x571)!=x572));

    if (t68 != 240LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x577 = INT16_MAX;
	static int32_t x578 = 31;
	int16_t x579 = -1;
	static int32_t x580 = INT32_MAX;

    t69 = (x577<<((x578<=x579)!=x580));

    if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	static volatile uint32_t x586 = 101558174U;
	uint8_t x587 = 6U;
	int8_t x588 = INT8_MAX;

    t70 = (x585<<((x586<=x587)!=x588));

    if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x601 = 19633198778836716LLU;
	int8_t x602 = INT8_MIN;
	int16_t x603 = 958;
	int64_t x604 = 16606693598LL;
	uint64_t t71 = 396112180180280LLU;

    t71 = (x601<<((x602<=x603)!=x604));

    if (t71 != 39266397557673432LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x605 = 37U;
	int32_t x606 = -876598;
	int16_t x607 = -1;
	volatile int16_t x608 = INT16_MAX;
	volatile int32_t t72 = 836862657;

    t72 = (x605<<((x606<=x607)!=x608));

    if (t72 != 74) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x625 = 1;
	uint64_t x626 = UINT64_MAX;
	int32_t x627 = 15232;
	uint8_t x628 = 0U;
	volatile int32_t t73 = 16135793;

    t73 = (x625<<((x626<=x627)!=x628));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x629 = 21724LLU;
	int32_t x630 = INT32_MIN;
	int8_t x631 = INT8_MIN;
	static uint64_t x632 = 766929LLU;
	uint64_t t74 = 5628662747991573152LLU;

    t74 = (x629<<((x630<=x631)!=x632));

    if (t74 != 43448LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x637 = 1306903273U;
	int16_t x640 = INT16_MIN;
	uint32_t t75 = 25U;

    t75 = (x637<<((x638<=x639)!=x640));

    if (t75 != 2613806546U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x641 = INT8_MAX;
	static int32_t x642 = -1;
	int64_t x644 = -5491LL;
	int32_t t76 = 531265908;

    t76 = (x641<<((x642<=x643)!=x644));

    if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x662 = -116;
	volatile uint32_t t77 = 386U;

    t77 = (x661<<((x662<=x663)!=x664));

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x673 = INT16_MAX;
	uint64_t x674 = UINT64_MAX;
	volatile int32_t t78 = 90847890;

    t78 = (x673<<((x674<=x675)!=x676));

    if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x681 = 1;
	int32_t x683 = INT32_MIN;
	static int16_t x684 = INT16_MIN;
	volatile int32_t t79 = 7957551;

    t79 = (x681<<((x682<=x683)!=x684));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x689 = 476U;
	int64_t x690 = INT64_MIN;
	uint16_t x692 = 6U;
	static int32_t t80 = -1676;

    t80 = (x689<<((x690<=x691)!=x692));

    if (t80 != 952) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x693 = 1;
	uint16_t x694 = UINT16_MAX;
	int64_t x695 = -39424241118449LL;
	int16_t x696 = 120;
	volatile int32_t t81 = -107827376;

    t81 = (x693<<((x694<=x695)!=x696));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x709 = 1U;
	int16_t x711 = -3160;
	int64_t x712 = INT64_MAX;
	int32_t t82 = -2130;

    t82 = (x709<<((x710<=x711)!=x712));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x714 = -90;
	int32_t t83 = -4;

    t83 = (x713<<((x714<=x715)!=x716));

    if (t83 != 94) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x717 = UINT8_MAX;
	int8_t x718 = -1;
	volatile int32_t t84 = 564356758;

    t84 = (x717<<((x718<=x719)!=x720));

    if (t84 != 510) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x721 = 259U;
	volatile int32_t x722 = INT32_MIN;
	int8_t x723 = 8;
	static int32_t x724 = 1165;
	int32_t t85 = 21347;

    t85 = (x721<<((x722<=x723)!=x724));

    if (t85 != 518) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x725 = 123U;
	static uint32_t x726 = 243069325U;
	int8_t x727 = INT8_MIN;
	int8_t x728 = INT8_MIN;
	volatile int32_t t86 = -431;

    t86 = (x725<<((x726<=x727)!=x728));

    if (t86 != 246) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MIN;
	int64_t x735 = INT64_MIN;
	uint64_t x736 = 119LLU;
	volatile int32_t t87 = -100068054;

    t87 = (x733<<((x734<=x735)!=x736));

    if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x741 = UINT32_MAX;
	int8_t x742 = -1;
	uint8_t x743 = 92U;
	static int8_t x744 = INT8_MIN;
	static volatile uint32_t t88 = 521827126U;

    t88 = (x741<<((x742<=x743)!=x744));

    if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x745 = 8U;
	int64_t x746 = -1LL;
	int32_t x747 = INT32_MAX;
	volatile uint8_t x748 = UINT8_MAX;

    t89 = (x745<<((x746<=x747)!=x748));

    if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x749 = UINT8_MAX;
	static int64_t x750 = -31380874862726326LL;
	static uint8_t x751 = UINT8_MAX;
	int16_t x752 = INT16_MAX;
	volatile int32_t t90 = -11669920;

    t90 = (x749<<((x750<=x751)!=x752));

    if (t90 != 510) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x753 = 0;
	uint32_t x754 = 207961017U;
	uint16_t x755 = 41U;
	volatile int32_t t91 = 171740;

    t91 = (x753<<((x754<=x755)!=x756));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x757 = 143;
	int64_t x758 = INT64_MIN;
	int16_t x759 = INT16_MAX;
	int64_t x760 = INT64_MAX;
	static int32_t t92 = -265694362;

    t92 = (x757<<((x758<=x759)!=x760));

    if (t92 != 286) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x765 = 9U;
	int16_t x766 = -1;
	int16_t x767 = 179;
	static uint32_t t93 = 7U;

    t93 = (x765<<((x766<=x767)!=x768));

    if (t93 != 18U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x769 = 21;
	static int32_t x770 = -1;
	int8_t x771 = INT8_MIN;
	static int16_t x772 = -1;
	int32_t t94 = -1962204;

    t94 = (x769<<((x770<=x771)!=x772));

    if (t94 != 42) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x778 = INT16_MIN;
	uint64_t x779 = 852468125461LLU;
	int32_t t95 = -467829;

    t95 = (x777<<((x778<=x779)!=x780));

    if (t95 != 20682) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x785 = 11713956U;
	static int32_t x786 = -1;
	static uint8_t x787 = 14U;
	volatile uint8_t x788 = UINT8_MAX;

    t96 = (x785<<((x786<=x787)!=x788));

    if (t96 != 23427912U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x789 = 4607198773615LLU;
	static uint64_t x790 = UINT64_MAX;
	static int16_t x791 = -1576;
	int16_t x792 = INT16_MIN;
	uint64_t t97 = 4045046745840911LLU;

    t97 = (x789<<((x790<=x791)!=x792));

    if (t97 != 9214397547230LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x794 = -446164;
	int16_t x795 = INT16_MIN;
	uint16_t x796 = 6618U;
	int32_t t98 = 12262;

    t98 = (x793<<((x794<=x795)!=x796));

    if (t98 != 82) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x801 = 13777LLU;
	uint16_t x802 = UINT16_MAX;
	volatile uint64_t x803 = 8424733488251264517LLU;
	int8_t x804 = 2;

    t99 = (x801<<((x802<=x803)!=x804));

    if (t99 != 27554LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x809 = 98U;
	int64_t x810 = -252366955680793LL;
	static uint16_t x811 = UINT16_MAX;
	volatile uint16_t x812 = 25U;

    t100 = (x809<<((x810<=x811)!=x812));

    if (t100 != 196) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x814 = 152341352U;
	int8_t x815 = INT8_MAX;
	volatile uint16_t x816 = 261U;

    t101 = (x813<<((x814<=x815)!=x816));

    if (t101 != 15728510LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x838 = 19;
	int8_t x839 = INT8_MAX;
	uint32_t x840 = UINT32_MAX;
	int32_t t102 = -121887;

    t102 = (x837<<((x838<=x839)!=x840));

    if (t102 != 254) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x841 = UINT64_MAX;
	int64_t x842 = -726870720300111LL;
	int16_t x843 = INT16_MAX;
	int16_t x844 = INT16_MAX;
	volatile uint64_t t103 = 9240671896881413LLU;

    t103 = (x841<<((x842<=x843)!=x844));

    if (t103 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x857 = UINT16_MAX;
	volatile uint32_t x858 = 490U;
	int64_t x859 = -238286565959LL;
	int64_t x860 = -1LL;
	int32_t t104 = 4490;

    t104 = (x857<<((x858<=x859)!=x860));

    if (t104 != 131070) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x861 = 375U;
	int32_t x862 = INT32_MIN;
	volatile int8_t x864 = INT8_MIN;
	volatile int32_t t105 = -115;

    t105 = (x861<<((x862<=x863)!=x864));

    if (t105 != 750) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x873 = 2388U;
	int8_t x874 = -1;
	int64_t x876 = -1LL;

    t106 = (x873<<((x874<=x875)!=x876));

    if (t106 != 4776) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x881 = 3;
	int32_t x882 = INT32_MIN;
	int8_t x883 = INT8_MIN;
	uint32_t x884 = 253470293U;
	int32_t t107 = 7;

    t107 = (x881<<((x882<=x883)!=x884));

    if (t107 != 6) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x886 = INT16_MIN;
	static int8_t x888 = INT8_MIN;
	volatile int32_t t108 = 2914;

    t108 = (x885<<((x886<=x887)!=x888));

    if (t108 != 510) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x894 = -48;
	uint64_t x895 = 6783018383966816746LLU;
	int16_t x896 = INT16_MIN;
	volatile int32_t t109 = 8377540;

    t109 = (x893<<((x894<=x895)!=x896));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x897 = 108282016;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t110 = -29583325;

    t110 = (x897<<((x898<=x899)!=x900));

    if (t110 != 216564032) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x909 = 1090787466851466149LLU;
	uint16_t x910 = 365U;
	int32_t x911 = INT32_MAX;
	int32_t x912 = INT32_MIN;
	uint64_t t111 = 57188724251LLU;

    t111 = (x909<<((x910<=x911)!=x912));

    if (t111 != 2181574933702932298LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x913 = 1U;
	volatile int64_t x914 = INT64_MIN;
	uint64_t x915 = UINT64_MAX;
	volatile int32_t t112 = 415040741;

    t112 = (x913<<((x914<=x915)!=x916));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x917 = 46815983U;
	int16_t x918 = INT16_MAX;
	int32_t x919 = -1;
	uint32_t x920 = 68251391U;
	uint32_t t113 = 27991164U;

    t113 = (x917<<((x918<=x919)!=x920));

    if (t113 != 93631966U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x921 = 85U;
	int64_t x924 = INT64_MIN;
	uint32_t t114 = 91U;

    t114 = (x921<<((x922<=x923)!=x924));

    if (t114 != 170U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x937 = UINT8_MAX;
	int16_t x938 = INT16_MIN;
	static int32_t x939 = 1;
	uint32_t x940 = 42275645U;

    t115 = (x937<<((x938<=x939)!=x940));

    if (t115 != 510) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x949 = 15U;
	static int8_t x950 = -1;
	static uint16_t x951 = UINT16_MAX;
	int16_t x952 = INT16_MIN;
	volatile int32_t t116 = 1;

    t116 = (x949<<((x950<=x951)!=x952));

    if (t116 != 30) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x957 = 214LLU;
	int8_t x958 = INT8_MAX;
	uint64_t x960 = 357633531557615972LLU;
	uint64_t t117 = 142084627558607LLU;

    t117 = (x957<<((x958<=x959)!=x960));

    if (t117 != 428LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x965 = 2U;
	int64_t x966 = -1LL;
	int16_t x968 = INT16_MIN;

    t118 = (x965<<((x966<=x967)!=x968));

    if (t118 != 4) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x973 = 1U;
	volatile int64_t x974 = INT64_MAX;
	int8_t x975 = INT8_MIN;
	int32_t t119 = 563808013;

    t119 = (x973<<((x974<=x975)!=x976));

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x989 = 0U;
	static int8_t x990 = 1;
	static uint32_t x991 = UINT32_MAX;

    t120 = (x989<<((x990<=x991)!=x992));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x993 = 12300U;
	static volatile int64_t x994 = -1LL;
	uint8_t x995 = 44U;
	uint8_t x996 = UINT8_MAX;
	volatile int32_t t121 = -167126;

    t121 = (x993<<((x994<=x995)!=x996));

    if (t121 != 24600) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x1005 = 2U;
	static volatile uint32_t x1006 = UINT32_MAX;
	int8_t x1007 = -1;
	uint16_t x1008 = 19415U;

    t122 = (x1005<<((x1006<=x1007)!=x1008));

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1021 = 3;
	uint16_t x1023 = UINT16_MAX;
	int32_t t123 = -937169046;

    t123 = (x1021<<((x1022<=x1023)!=x1024));

    if (t123 != 6) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x1025 = 0;
	static uint16_t x1026 = 6U;
	uint64_t x1027 = UINT64_MAX;
	volatile int32_t t124 = -9104869;

    t124 = (x1025<<((x1026<=x1027)!=x1028));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x1029 = 476550U;
	int32_t x1030 = 48;
	int32_t x1031 = -1;
	int16_t x1032 = -1;
	uint32_t t125 = 7U;

    t125 = (x1029<<((x1030<=x1031)!=x1032));

    if (t125 != 953100U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x1033 = 1U;
	volatile uint32_t x1034 = 1595U;
	volatile uint16_t x1035 = UINT16_MAX;
	static uint32_t x1036 = 11600U;
	volatile int32_t t126 = 20927;

    t126 = (x1033<<((x1034<=x1035)!=x1036));

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1050 = 1U;
	static int64_t x1052 = INT64_MIN;
	int32_t t127 = 797662531;

    t127 = (x1049<<((x1050<=x1051)!=x1052));

    if (t127 != 65534) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1057 = 0U;
	int64_t x1058 = -1LL;
	static int64_t x1059 = -1LL;
	uint8_t x1060 = UINT8_MAX;
	int32_t t128 = 5472;

    t128 = (x1057<<((x1058<=x1059)!=x1060));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x1061 = 67538U;
	int8_t x1062 = INT8_MAX;
	int32_t x1063 = INT32_MIN;
	static uint16_t x1064 = 29U;
	uint32_t t129 = 272865U;

    t129 = (x1061<<((x1062<=x1063)!=x1064));

    if (t129 != 135076U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x1069 = UINT8_MAX;
	int16_t x1070 = INT16_MAX;
	int64_t x1071 = INT64_MIN;
	static int8_t x1072 = INT8_MIN;
	volatile int32_t t130 = -388984011;

    t130 = (x1069<<((x1070<=x1071)!=x1072));

    if (t130 != 510) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1077 = 111U;
	uint8_t x1079 = 102U;
	int32_t x1080 = INT32_MIN;

    t131 = (x1077<<((x1078<=x1079)!=x1080));

    if (t131 != 222U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1081 = 179392680512548LLU;
	int8_t x1082 = INT8_MIN;
	static uint8_t x1083 = UINT8_MAX;
	static int8_t x1084 = INT8_MIN;

    t132 = (x1081<<((x1082<=x1083)!=x1084));

    if (t132 != 358785361025096LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x1106 = INT16_MIN;
	int8_t x1108 = INT8_MIN;

    t133 = (x1105<<((x1106<=x1107)!=x1108));

    if (t133 != 110LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1110 = -8;
	int64_t x1112 = INT64_MAX;
	static uint64_t t134 = 16LLU;

    t134 = (x1109<<((x1110<=x1111)!=x1112));

    if (t134 != 38949942426134LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1117 = 2U;
	uint64_t x1119 = 69202427018LLU;
	uint8_t x1120 = 0U;
	static uint32_t t135 = 3360119U;

    t135 = (x1117<<((x1118<=x1119)!=x1120));

    if (t135 != 2U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1133 = 93U;
	int64_t x1134 = INT64_MIN;
	int16_t x1135 = INT16_MIN;
	uint64_t x1136 = 104175849760211LLU;

    t136 = (x1133<<((x1134<=x1135)!=x1136));

    if (t136 != 186) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1141 = INT8_MAX;
	int16_t x1143 = -1;
	volatile int32_t t137 = 51053;

    t137 = (x1141<<((x1142<=x1143)!=x1144));

    if (t137 != 254) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1149 = 6345LLU;
	int8_t x1150 = INT8_MIN;
	static volatile int32_t x1151 = INT32_MIN;
	volatile int8_t x1152 = 15;
	static volatile uint64_t t138 = 302679617LLU;

    t138 = (x1149<<((x1150<=x1151)!=x1152));

    if (t138 != 12690LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1161 = 12659149045LL;
	volatile int8_t x1162 = 10;
	static uint8_t x1163 = 3U;
	int64_t t139 = 541446538626LL;

    t139 = (x1161<<((x1162<=x1163)!=x1164));

    if (t139 != 25318298090LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1173 = UINT32_MAX;
	static int8_t x1174 = INT8_MIN;
	uint8_t x1175 = 45U;
	volatile uint32_t t140 = 249U;

    t140 = (x1173<<((x1174<=x1175)!=x1176));

    if (t140 != 4294967294U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1181 = UINT64_MAX;
	uint32_t x1182 = 265215U;
	static int16_t x1183 = INT16_MAX;
	uint64_t x1184 = UINT64_MAX;
	volatile uint64_t t141 = 485295LLU;

    t141 = (x1181<<((x1182<=x1183)!=x1184));

    if (t141 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1193 = 419;
	int64_t x1194 = -781234388LL;
	int32_t x1196 = -66;
	int32_t t142 = -1;

    t142 = (x1193<<((x1194<=x1195)!=x1196));

    if (t142 != 838) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1197 = 3U;
	static uint64_t x1199 = 1LLU;
	static uint64_t x1200 = 39LLU;
	int32_t t143 = -81;

    t143 = (x1197<<((x1198<=x1199)!=x1200));

    if (t143 != 6) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1201 = 1U;
	int32_t x1202 = 0;
	volatile uint8_t x1203 = 15U;
	int8_t x1204 = INT8_MAX;

    t144 = (x1201<<((x1202<=x1203)!=x1204));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x1205 = 20392655868266LL;
	static uint16_t x1207 = 1562U;
	int32_t x1208 = INT32_MAX;

    t145 = (x1205<<((x1206<=x1207)!=x1208));

    if (t145 != 40785311736532LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1209 = INT8_MAX;
	int64_t x1210 = INT64_MIN;
	int32_t x1211 = INT32_MAX;
	uint8_t x1212 = UINT8_MAX;
	int32_t t146 = 1180;

    t146 = (x1209<<((x1210<=x1211)!=x1212));

    if (t146 != 254) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1213 = 2250;
	int8_t x1214 = -6;
	int16_t x1215 = -8;
	uint32_t x1216 = UINT32_MAX;
	volatile int32_t t147 = 653485139;

    t147 = (x1213<<((x1214<=x1215)!=x1216));

    if (t147 != 4500) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1217 = UINT8_MAX;
	int16_t x1218 = 1;
	int8_t x1219 = -48;
	volatile uint16_t x1220 = UINT16_MAX;
	volatile int32_t t148 = 848;

    t148 = (x1217<<((x1218<=x1219)!=x1220));

    if (t148 != 510) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x1222 = INT16_MIN;
	int16_t x1223 = INT16_MIN;
	volatile int64_t x1224 = -1LL;
	static volatile int32_t t149 = 3989;

    t149 = (x1221<<((x1222<=x1223)!=x1224));

    if (t149 != 65534) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1241 = 1;
	int8_t x1242 = -1;
	uint32_t x1243 = 2474U;
	int8_t x1244 = INT8_MAX;
	int32_t t150 = 4071;

    t150 = (x1241<<((x1242<=x1243)!=x1244));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1249 = 874026505644019789LLU;
	static uint16_t x1251 = 0U;
	uint8_t x1252 = 35U;

    t151 = (x1249<<((x1250<=x1251)!=x1252));

    if (t151 != 1748053011288039578LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1257 = 30LLU;
	int8_t x1258 = INT8_MIN;
	uint64_t x1259 = 3336130511LLU;
	static int64_t x1260 = INT64_MIN;
	static volatile uint64_t t152 = 601697LLU;

    t152 = (x1257<<((x1258<=x1259)!=x1260));

    if (t152 != 60LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1265 = INT8_MAX;
	int32_t x1267 = INT32_MAX;
	volatile int32_t t153 = 3;

    t153 = (x1265<<((x1266<=x1267)!=x1268));

    if (t153 != 254) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x1270 = UINT32_MAX;
	uint64_t x1272 = UINT64_MAX;
	int32_t t154 = 2202050;

    t154 = (x1269<<((x1270<=x1271)!=x1272));

    if (t154 != 499474) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1277 = UINT16_MAX;
	static volatile int64_t x1279 = -4150239093049LL;
	volatile int32_t t155 = 33043;

    t155 = (x1277<<((x1278<=x1279)!=x1280));

    if (t155 != 131070) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1306 = UINT16_MAX;
	static int16_t x1307 = INT16_MIN;
	int32_t x1308 = -1;
	static int32_t t156 = -1;

    t156 = (x1305<<((x1306<=x1307)!=x1308));

    if (t156 != 847514990) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1319 = INT8_MAX;
	uint64_t x1320 = UINT64_MAX;
	int32_t t157 = -15008241;

    t157 = (x1317<<((x1318<=x1319)!=x1320));

    if (t157 != 6) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x1330 = 19U;
	int32_t x1331 = -1;
	int32_t t158 = 8;

    t158 = (x1329<<((x1330<=x1331)!=x1332));

    if (t158 != 4160) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1345 = 1U;
	int8_t x1346 = INT8_MIN;
	volatile uint32_t x1347 = 1U;
	static int16_t x1348 = INT16_MIN;
	static int32_t t159 = 1;

    t159 = (x1345<<((x1346<=x1347)!=x1348));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x1349 = 3U;
	int16_t x1350 = 1;
	volatile uint32_t t160 = 1874340U;

    t160 = (x1349<<((x1350<=x1351)!=x1352));

    if (t160 != 6U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1353 = INT8_MAX;
	int32_t x1354 = INT32_MIN;
	uint32_t x1355 = UINT32_MAX;
	int64_t x1356 = INT64_MIN;
	int32_t t161 = 8818;

    t161 = (x1353<<((x1354<=x1355)!=x1356));

    if (t161 != 254) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1369 = 698189348LLU;
	uint32_t x1370 = UINT32_MAX;
	uint64_t x1372 = UINT64_MAX;
	volatile uint64_t t162 = 60593623LLU;

    t162 = (x1369<<((x1370<=x1371)!=x1372));

    if (t162 != 1396378696LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1381 = 14U;
	int32_t x1382 = 6522728;
	uint8_t x1383 = 0U;
	volatile int32_t t163 = -5994031;

    t163 = (x1381<<((x1382<=x1383)!=x1384));

    if (t163 != 28) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1385 = 0U;
	static int16_t x1386 = INT16_MIN;
	static int32_t x1387 = INT32_MAX;
	int16_t x1388 = 8;
	volatile int32_t t164 = -1289773;

    t164 = (x1385<<((x1386<=x1387)!=x1388));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1397 = 89U;
	int16_t x1398 = INT16_MIN;
	int64_t x1399 = INT64_MIN;
	int8_t x1400 = INT8_MAX;
	volatile int32_t t165 = -7;

    t165 = (x1397<<((x1398<=x1399)!=x1400));

    if (t165 != 178) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1401 = 489245U;
	int64_t x1402 = INT64_MIN;
	int64_t x1403 = -1LL;
	volatile int64_t x1404 = -8214025191LL;

    t166 = (x1401<<((x1402<=x1403)!=x1404));

    if (t166 != 978490U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1418 = 360946493890548170LLU;
	static volatile int8_t x1419 = INT8_MIN;
	int64_t x1420 = 1332517007LL;

    t167 = (x1417<<((x1418<=x1419)!=x1420));

    if (t167 != 446LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1421 = INT8_MAX;
	int32_t x1422 = INT32_MAX;
	int16_t x1423 = 288;
	static volatile int64_t x1424 = 4601188820LL;
	static int32_t t168 = -1;

    t168 = (x1421<<((x1422<=x1423)!=x1424));

    if (t168 != 254) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1425 = 2120118LLU;
	volatile uint16_t x1426 = 11U;
	int16_t x1427 = -1560;
	int16_t x1428 = INT16_MAX;
	uint64_t t169 = 55339LLU;

    t169 = (x1425<<((x1426<=x1427)!=x1428));

    if (t169 != 4240236LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1429 = 0;
	uint32_t x1431 = 2129U;
	uint32_t x1432 = 50775780U;
	static volatile int32_t t170 = -2245;

    t170 = (x1429<<((x1430<=x1431)!=x1432));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1434 = INT8_MIN;
	int32_t x1435 = INT32_MIN;
	int64_t x1436 = INT64_MIN;
	static uint64_t t171 = 952967222874LLU;

    t171 = (x1433<<((x1434<=x1435)!=x1436));

    if (t171 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1441 = 3U;
	static uint16_t x1442 = UINT16_MAX;
	uint8_t x1443 = UINT8_MAX;
	volatile int32_t t172 = 1;

    t172 = (x1441<<((x1442<=x1443)!=x1444));

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1450 = 61357;
	uint8_t x1451 = UINT8_MAX;
	volatile uint64_t t173 = 57129953LLU;

    t173 = (x1449<<((x1450<=x1451)!=x1452));

    if (t173 != 398LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t t174 = 425149U;

    t174 = (x1465<<((x1466<=x1467)!=x1468));

    if (t174 != 6U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1469 = 592013U;
	int8_t x1472 = INT8_MIN;
	volatile uint32_t t175 = 4166903U;

    t175 = (x1469<<((x1470<=x1471)!=x1472));

    if (t175 != 1184026U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1473 = 0LL;
	static volatile int64_t x1474 = INT64_MIN;
	volatile uint16_t x1475 = 2U;
	volatile int64_t t176 = -16304LL;

    t176 = (x1473<<((x1474<=x1475)!=x1476));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1477 = 6700441044144LLU;
	int32_t x1478 = -660626433;
	static int8_t x1480 = INT8_MIN;
	volatile uint64_t t177 = 137047415200960014LLU;

    t177 = (x1477<<((x1478<=x1479)!=x1480));

    if (t177 != 13400882088288LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1485 = 55U;
	static uint64_t x1486 = UINT64_MAX;
	int32_t x1487 = INT32_MIN;
	uint64_t x1488 = 1313878134213970604LLU;
	volatile uint32_t t178 = 1245376U;

    t178 = (x1485<<((x1486<=x1487)!=x1488));

    if (t178 != 110U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1497 = 152U;
	static int16_t x1498 = 1;
	int32_t x1499 = INT32_MAX;
	static int32_t x1500 = INT32_MIN;
	int32_t t179 = 434888416;

    t179 = (x1497<<((x1498<=x1499)!=x1500));

    if (t179 != 304) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1505 = 9499LLU;
	int16_t x1506 = INT16_MIN;
	int16_t x1508 = INT16_MAX;
	static uint64_t t180 = 25LLU;

    t180 = (x1505<<((x1506<=x1507)!=x1508));

    if (t180 != 18998LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1509 = 10U;
	int8_t x1510 = INT8_MIN;
	volatile int32_t x1511 = -1;
	volatile int64_t x1512 = INT64_MIN;
	static volatile int32_t t181 = 202064108;

    t181 = (x1509<<((x1510<=x1511)!=x1512));

    if (t181 != 20) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x1513 = 12247U;
	int64_t x1514 = INT64_MAX;
	int32_t x1515 = -134186263;
	static int8_t x1516 = INT8_MAX;
	uint32_t t182 = 20688U;

    t182 = (x1513<<((x1514<=x1515)!=x1516));

    if (t182 != 24494U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1521 = 1;
	int32_t x1522 = 7;
	volatile int8_t x1524 = -1;
	volatile int32_t t183 = -11882;

    t183 = (x1521<<((x1522<=x1523)!=x1524));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1533 = 1U;
	volatile uint8_t x1534 = 5U;
	int64_t x1535 = INT64_MIN;
	uint32_t x1536 = UINT32_MAX;
	volatile int32_t t184 = 12;

    t184 = (x1533<<((x1534<=x1535)!=x1536));

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1537 = 2;
	volatile int16_t x1538 = INT16_MIN;
	volatile uint16_t x1539 = 1426U;
	uint32_t x1540 = 5U;
	static volatile int32_t t185 = 572;

    t185 = (x1537<<((x1538<=x1539)!=x1540));

    if (t185 != 4) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1545 = INT16_MAX;
	uint64_t x1546 = 25473742005425098LLU;
	volatile uint8_t x1547 = 13U;
	static int8_t x1548 = INT8_MIN;
	int32_t t186 = 1256;

    t186 = (x1545<<((x1546<=x1547)!=x1548));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1550 = INT32_MIN;
	int16_t x1552 = 0;
	volatile int32_t t187 = 131;

    t187 = (x1549<<((x1550<=x1551)!=x1552));

    if (t187 != 131070) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1553 = 4;
	volatile int16_t x1554 = INT16_MIN;
	static int16_t x1555 = 8262;
	uint32_t x1556 = 126064060U;

    t188 = (x1553<<((x1554<=x1555)!=x1556));

    if (t188 != 8) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1561 = 19U;
	uint16_t x1562 = 131U;
	int16_t x1563 = -8439;
	int8_t x1564 = 0;

    t189 = (x1561<<((x1562<=x1563)!=x1564));

    if (t189 != 19) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1569 = UINT16_MAX;
	int64_t x1571 = INT64_MAX;
	int16_t x1572 = -609;
	int32_t t190 = 12706614;

    t190 = (x1569<<((x1570<=x1571)!=x1572));

    if (t190 != 131070) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1577 = UINT16_MAX;
	uint32_t x1578 = UINT32_MAX;
	uint16_t x1579 = UINT16_MAX;
	int32_t x1580 = INT32_MAX;
	static int32_t t191 = 384053873;

    t191 = (x1577<<((x1578<=x1579)!=x1580));

    if (t191 != 131070) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1581 = 1U;
	int16_t x1582 = -112;
	uint16_t x1583 = 23157U;
	static uint8_t x1584 = 61U;
	int32_t t192 = -8582739;

    t192 = (x1581<<((x1582<=x1583)!=x1584));

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1605 = 18487U;
	int64_t x1606 = -1LL;
	uint8_t x1607 = 0U;
	volatile int8_t x1608 = INT8_MIN;

    t193 = (x1605<<((x1606<=x1607)!=x1608));

    if (t193 != 36974) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1609 = 2745543414357LLU;
	static volatile int64_t x1610 = INT64_MIN;
	int64_t x1612 = -1LL;
	static volatile uint64_t t194 = 4197901332LLU;

    t194 = (x1609<<((x1610<=x1611)!=x1612));

    if (t194 != 5491086828714LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1613 = 0U;
	int8_t x1614 = 1;
	static int8_t x1615 = -14;
	uint32_t x1616 = UINT32_MAX;
	int32_t t195 = -179;

    t195 = (x1613<<((x1614<=x1615)!=x1616));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1626 = 294254U;
	volatile int32_t t196 = 9;

    t196 = (x1625<<((x1626<=x1627)!=x1628));

    if (t196 != 3219698) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1641 = 13;
	uint32_t x1642 = 217919U;
	int16_t x1643 = INT16_MIN;
	static uint32_t x1644 = UINT32_MAX;
	int32_t t197 = -258204;

    t197 = (x1641<<((x1642<=x1643)!=x1644));

    if (t197 != 26) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1646 = INT8_MIN;
	uint64_t x1648 = 0LLU;
	int32_t t198 = 146051;

    t198 = (x1645<<((x1646<=x1647)!=x1648));

    if (t198 != 254) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x1649 = 0;
	int16_t x1650 = INT16_MAX;
	int32_t x1651 = 44411;
	static uint16_t x1652 = 24329U;
	int32_t t199 = -1;

    t199 = (x1649<<((x1650<=x1651)!=x1652));

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

