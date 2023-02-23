
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

int16_t x3 = INT16_MAX;
int32_t x16 = INT32_MIN;
static int16_t x18 = INT16_MIN;
volatile int32_t x23 = INT32_MIN;
int32_t t4 = INT32_MAX;
uint16_t x26 = UINT16_MAX;
int8_t x32 = INT8_MAX;
volatile uint32_t x33 = 6U;
int8_t x34 = -1;
uint32_t x48 = UINT32_MAX;
int16_t x87 = INT16_MIN;
int32_t x96 = INT32_MIN;
uint32_t x101 = 114U;
volatile int64_t x103 = INT64_MIN;
volatile uint16_t x104 = 12U;
uint32_t t18 = UINT32_MAX;
uint8_t x145 = UINT8_MAX;
int8_t x148 = 12;
int32_t t19 = 7203;
uint64_t t21 = UINT64_MAX;
int8_t x161 = INT8_MAX;
uint16_t x169 = 40U;
uint16_t x172 = 413U;
volatile int32_t t23 = 1;
static uint64_t x187 = 930398729914120LLU;
int32_t x205 = INT32_MAX;
uint32_t x206 = UINT32_MAX;
static uint16_t x207 = 2U;
volatile int8_t x209 = 33;
static int8_t x211 = INT8_MAX;
uint16_t x212 = 25U;
static int32_t x222 = INT32_MAX;
int64_t x232 = INT64_MIN;
static volatile int32_t t34 = -53550;
static uint16_t x258 = 32U;
int32_t t35 = -3673160;
int32_t t36 = 3498;
uint32_t x265 = UINT32_MAX;
uint16_t x266 = UINT16_MAX;
uint16_t x267 = UINT16_MAX;
uint64_t x280 = UINT64_MAX;
static int8_t x284 = INT8_MAX;
uint64_t x295 = 80103486231622LLU;
static uint8_t x299 = UINT8_MAX;
uint32_t x303 = 193938U;
volatile uint64_t t42 = 199360876147785LLU;
int64_t x311 = -1LL;
static uint16_t x313 = 58U;
uint32_t x314 = UINT32_MAX;
uint16_t x316 = 75U;
volatile int32_t t44 = -5382;
volatile uint16_t x325 = 321U;
int64_t x326 = 1505897LL;
volatile int32_t t47 = 1553;
static uint16_t x351 = 31054U;
int16_t x352 = INT16_MAX;
static volatile int16_t x357 = INT16_MAX;
volatile int8_t x359 = 4;
volatile uint16_t x360 = UINT16_MAX;
uint32_t x377 = UINT32_MAX;
volatile int64_t x388 = INT64_MAX;
int32_t t52 = -45831881;
volatile uint64_t x390 = 15LLU;
volatile int32_t x395 = INT32_MIN;
int32_t t55 = INT32_MAX;
int32_t x412 = INT32_MAX;
int16_t x423 = 7806;
static int16_t x426 = -962;
volatile uint32_t x427 = 1U;
uint16_t x436 = 3034U;
int16_t x439 = INT16_MIN;
static volatile int64_t x440 = -260492890732590LL;
uint16_t x448 = 631U;
uint8_t x450 = 75U;
int64_t t65 = INT64_MAX;
uint32_t x453 = UINT32_MAX;
uint8_t x456 = 4U;
int16_t x481 = 27;
volatile int32_t t70 = -759;
int32_t x490 = INT32_MAX;
int32_t x495 = -116107;
int8_t x496 = 5;
volatile uint64_t t72 = 3686477230009LLU;
static volatile uint32_t x497 = UINT32_MAX;
volatile int32_t t75 = -72;
static int8_t x519 = INT8_MIN;
volatile int8_t x527 = 25;
int16_t x547 = INT16_MIN;
int16_t x551 = INT16_MAX;
int32_t t82 = -548569;
int8_t x559 = -1;
int32_t x568 = INT32_MAX;
int16_t x580 = -1;
int8_t x587 = -19;
volatile int64_t x588 = 104393823574745LL;
volatile int32_t t88 = -200110;
int16_t x591 = 0;
static uint16_t x597 = UINT16_MAX;
static int64_t x599 = -1LL;
volatile int16_t x600 = INT16_MIN;
int8_t x632 = -1;
static volatile uint32_t t95 = UINT32_MAX;
int16_t x634 = INT16_MAX;
volatile uint32_t t97 = 95863U;
volatile int8_t x664 = INT8_MIN;
uint16_t x673 = 133U;
int64_t x678 = 23506344707362LL;
uint8_t x696 = 19U;
int32_t t103 = 739;
static int32_t t105 = -377137;
volatile int32_t x707 = 2530;
static volatile int8_t x711 = INT8_MAX;
int32_t x724 = -27616419;
volatile int8_t x730 = -1;
uint8_t x745 = 2U;
int16_t x747 = INT16_MIN;
int16_t x748 = INT16_MAX;
volatile uint32_t x754 = UINT32_MAX;
volatile int64_t x758 = -4509165309046595205LL;
static int32_t t113 = 13291978;
int32_t t117 = -29784;
int8_t x810 = INT8_MIN;
static volatile int32_t t121 = 1;
static volatile int64_t t125 = -17452334LL;
int64_t x897 = INT64_MAX;
int16_t x911 = INT16_MAX;
int16_t x912 = -6117;
volatile uint8_t x915 = 15U;
int32_t t128 = -7814;
int16_t x922 = INT16_MIN;
int8_t x923 = -22;
int32_t t129 = 6939476;
int32_t x936 = INT32_MIN;
int32_t x950 = INT32_MAX;
int16_t x953 = 883;
int16_t x955 = INT16_MAX;
uint8_t x956 = 4U;
int16_t x995 = INT16_MIN;
static int32_t x996 = INT32_MIN;
static uint64_t t136 = UINT64_MAX;
uint64_t x1005 = 2151508179989857LLU;
int16_t x1012 = -1;
static uint64_t t138 = UINT64_MAX;
int64_t x1025 = INT64_MAX;
static int8_t x1027 = -48;
int64_t t140 = INT64_MAX;
int16_t x1033 = INT16_MAX;
uint16_t x1042 = UINT16_MAX;
volatile int8_t x1052 = -14;
uint8_t x1057 = UINT8_MAX;
uint16_t x1058 = UINT16_MAX;
int32_t t146 = 26563;
static int8_t x1085 = 10;
static volatile int64_t x1116 = -897513204111LL;
int64_t x1118 = INT64_MAX;
int16_t x1127 = -149;
static uint32_t x1132 = 2018600922U;
volatile int8_t x1135 = -1;
int8_t x1152 = -1;
static volatile uint16_t x1165 = 48U;
int32_t x1167 = INT32_MIN;
int32_t x1168 = INT32_MAX;
volatile int16_t x1169 = 0;
volatile int32_t t164 = 9072;
volatile uint8_t x1189 = 2U;
int64_t x1192 = -321953LL;
volatile int8_t x1213 = INT8_MAX;
int16_t x1215 = -135;
int64_t x1216 = INT64_MIN;
static int8_t x1223 = 45;
uint32_t x1224 = UINT32_MAX;
static int32_t t172 = -4547;
static volatile int16_t x1227 = -108;
static uint16_t x1229 = 13817U;
int8_t x1237 = INT8_MAX;
int32_t x1240 = INT32_MAX;
uint64_t x1249 = UINT64_MAX;
uint16_t x1269 = UINT16_MAX;
int64_t x1278 = -747245296434868302LL;
uint8_t x1280 = 73U;
int32_t t179 = -478306;
volatile int32_t t180 = 1;
static volatile int64_t t183 = INT64_MAX;
int64_t x1331 = INT64_MAX;
int32_t x1343 = INT32_MIN;
int32_t x1346 = 5056059;
int8_t x1355 = INT8_MAX;
int16_t x1356 = INT16_MIN;
uint32_t t188 = 23965U;
int8_t x1361 = INT8_MAX;
int32_t x1362 = -2363482;
static uint32_t x1363 = 602U;
int64_t x1378 = 156650269134771LL;
int32_t x1379 = INT32_MAX;
int16_t x1389 = INT16_MAX;
int16_t x1393 = INT16_MAX;
int64_t x1395 = INT64_MIN;
int32_t x1409 = INT32_MAX;
int16_t x1432 = -1;


void f0(void) {
    	uint16_t x1 = 30U;
	int32_t x2 = -635;
	uint64_t x4 = 10325645593LLU;
	int32_t t0 = 102681315;

    t0 = (x1>>((x2<=x3)/x4));

    if (t0 != 30) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x9 = 2530944222LLU;
	uint8_t x10 = 26U;
	uint64_t x11 = UINT64_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t1 = 2232008LLU;

    t1 = (x9>>((x10<=x11)/x12));

    if (t1 != 2530944222LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 117U;
	uint16_t x14 = 1667U;
	volatile int64_t x15 = -521747151603997LL;
	volatile uint32_t t2 = 3U;

    t2 = (x13>>((x14<=x15)/x16));

    if (t2 != 117U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MAX;
	uint64_t x19 = UINT64_MAX;
	uint64_t x20 = 1048731770936LLU;
	int32_t t3 = -150609842;

    t3 = (x17>>((x18<=x19)/x20));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MAX;
	uint8_t x24 = 100U;

    t4 = (x21>>((x22<=x23)/x24));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 320U;
	uint64_t x27 = 325704832LLU;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 3U;

    t5 = (x25>>((x26<=x27)/x28));

    if (t5 != 320U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = 249590536U;
	static uint32_t x30 = 895191189U;
	int64_t x31 = INT64_MAX;
	uint32_t t6 = 17U;

    t6 = (x29>>((x30<=x31)/x32));

    if (t6 != 249590536U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 1U;
	volatile uint32_t t7 = 105U;

    t7 = (x33>>((x34<=x35)/x36));

    if (t7 != 3U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x45 = 461708589U;
	volatile uint8_t x46 = 1U;
	volatile int8_t x47 = INT8_MAX;
	volatile uint32_t t8 = 68348994U;

    t8 = (x45>>((x46<=x47)/x48));

    if (t8 != 461708589U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x73 = INT8_MAX;
	volatile uint8_t x74 = UINT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	int64_t x76 = -1LL;
	volatile int32_t t9 = -23252;

    t9 = (x73>>((x74<=x75)/x76));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = 1;
	int16_t x78 = -1;
	static int16_t x79 = 742;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t10 = 205;

    t10 = (x77>>((x78<=x79)/x80));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x85 = 6U;
	uint32_t x86 = 84U;
	int16_t x88 = INT16_MAX;
	volatile int32_t t11 = -88214;

    t11 = (x85>>((x86<=x87)/x88));

    if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x89 = 1149526001502259LL;
	static int64_t x90 = 6616653715924LL;
	int8_t x91 = INT8_MAX;
	int8_t x92 = INT8_MIN;
	volatile int64_t t12 = -1362489192154894131LL;

    t12 = (x89>>((x90<=x91)/x92));

    if (t12 != 1149526001502259LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x93 = 12U;
	static volatile int64_t x94 = -31926132064LL;
	int16_t x95 = -1;
	volatile int32_t t13 = -6;

    t13 = (x93>>((x94<=x95)/x96));

    if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x102 = UINT16_MAX;
	uint32_t t14 = 24141U;

    t14 = (x101>>((x102<=x103)/x104));

    if (t14 != 114U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x105 = 1;
	int64_t x106 = INT64_MIN;
	volatile int64_t x107 = -1LL;
	volatile uint64_t x108 = 2939858LLU;
	int32_t t15 = 7;

    t15 = (x105>>((x106<=x107)/x108));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x113 = 1U;
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = 263952U;
	uint16_t x116 = 1944U;
	static int32_t t16 = -222169;

    t16 = (x113>>((x114<=x115)/x116));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x117 = INT16_MAX;
	int16_t x118 = -428;
	int64_t x119 = 31356556916232LL;
	uint32_t x120 = UINT32_MAX;
	static int32_t t17 = -630894;

    t17 = (x117>>((x118<=x119)/x120));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x121 = UINT32_MAX;
	int8_t x122 = 27;
	uint32_t x123 = 2975U;
	volatile uint32_t x124 = UINT32_MAX;

    t18 = (x121>>((x122<=x123)/x124));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x146 = 6U;
	int16_t x147 = INT16_MAX;

    t19 = (x145>>((x146<=x147)/x148));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = 2163;
	int32_t x156 = INT32_MAX;
	static uint64_t t20 = UINT64_MAX;

    t20 = (x153>>((x154<=x155)/x156));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MAX;
	uint16_t x159 = 100U;
	int32_t x160 = 935444;

    t21 = (x157>>((x158<=x159)/x160));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x162 = -7355;
	int64_t x163 = INT64_MAX;
	static int64_t x164 = INT64_MIN;
	int32_t t22 = -102216009;

    t22 = (x161>>((x162<=x163)/x164));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x170 = INT16_MIN;
	int64_t x171 = 33632690819008672LL;

    t23 = (x169>>((x170<=x171)/x172));

    if (t23 != 40) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x177 = 2LLU;
	uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 3833U;
	volatile uint32_t x180 = 54U;
	uint64_t t24 = 477338711207919929LLU;

    t24 = (x177>>((x178<=x179)/x180));

    if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	int64_t x188 = INT64_MAX;
	static volatile int32_t t25 = 457;

    t25 = (x185>>((x186<=x187)/x188));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x193 = INT32_MAX;
	int16_t x194 = -1226;
	volatile int16_t x195 = -613;
	int32_t x196 = INT32_MIN;
	static int32_t t26 = INT32_MAX;

    t26 = (x193>>((x194<=x195)/x196));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MAX;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MAX;
	int32_t t27 = 473790;

    t27 = (x201>>((x202<=x203)/x204));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x208 = 3767048U;
	int32_t t28 = INT32_MAX;

    t28 = (x205>>((x206<=x207)/x208));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x210 = INT8_MAX;
	int32_t t29 = 0;

    t29 = (x209>>((x210<=x211)/x212));

    if (t29 != 33) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x221 = 41456827968478LL;
	int64_t x223 = 4LL;
	uint64_t x224 = 634396LLU;
	volatile int64_t t30 = 7LL;

    t30 = (x221>>((x222<=x223)/x224));

    if (t30 != 41456827968478LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 789072746515LLU;
	uint64_t x231 = 2469LLU;
	uint32_t t31 = UINT32_MAX;

    t31 = (x229>>((x230<=x231)/x232));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	uint64_t x242 = 69291114296102LLU;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = 4605453LLU;
	volatile uint64_t t32 = UINT64_MAX;

    t32 = (x241>>((x242<=x243)/x244));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x245 = 4098820LL;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t33 = 323425871679582814LL;

    t33 = (x245>>((x246<=x247)/x248));

    if (t33 != 4098820LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x253 = 5;
	int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	uint64_t x256 = 19744864524LLU;

    t34 = (x253>>((x254<=x255)/x256));

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x257 = UINT16_MAX;
	static int8_t x259 = -1;
	int16_t x260 = -1;

    t35 = (x257>>((x258<=x259)/x260));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x261 = 0U;
	uint32_t x262 = UINT32_MAX;
	static int64_t x263 = -1LL;
	int8_t x264 = -59;

    t36 = (x261>>((x262<=x263)/x264));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x268 = INT64_MIN;
	uint32_t t37 = UINT32_MAX;

    t37 = (x265>>((x266<=x267)/x268));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = 51893404818LL;
	int32_t t38 = -106665;

    t38 = (x277>>((x278<=x279)/x280));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x281 = 243U;
	static int16_t x282 = 130;
	uint16_t x283 = 3787U;
	uint32_t t39 = 10602917U;

    t39 = (x281>>((x282<=x283)/x284));

    if (t39 != 243U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x293 = INT16_MAX;
	uint32_t x294 = 104U;
	volatile int32_t x296 = 3;
	int32_t t40 = -7756;

    t40 = (x293>>((x294<=x295)/x296));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x297 = INT16_MAX;
	static int16_t x298 = INT16_MIN;
	uint64_t x300 = 7437911LLU;
	volatile int32_t t41 = -4002268;

    t41 = (x297>>((x298<=x299)/x300));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x301 = 6412LLU;
	static int8_t x302 = -8;
	int64_t x304 = INT64_MIN;

    t42 = (x301>>((x302<=x303)/x304));

    if (t42 != 6412LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x309 = 4101LLU;
	static int8_t x310 = INT8_MIN;
	volatile int64_t x312 = -391651898LL;
	uint64_t t43 = 81LLU;

    t43 = (x309>>((x310<=x311)/x312));

    if (t43 != 4101LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x315 = INT64_MAX;

    t44 = (x313>>((x314<=x315)/x316));

    if (t44 != 58) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x327 = INT32_MAX;
	volatile uint16_t x328 = 26383U;
	int32_t t45 = -31043;

    t45 = (x325>>((x326<=x327)/x328));

    if (t45 != 321) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x329 = 45U;
	int8_t x330 = 0;
	static int64_t x331 = INT64_MIN;
	static int16_t x332 = 117;
	static int32_t t46 = -24655105;

    t46 = (x329>>((x330<=x331)/x332));

    if (t46 != 45) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x337 = UINT8_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	uint32_t x339 = 65336U;
	int16_t x340 = -251;

    t47 = (x337>>((x338<=x339)/x340));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x349 = UINT32_MAX;
	int8_t x350 = INT8_MAX;
	static volatile uint32_t t48 = UINT32_MAX;

    t48 = (x349>>((x350<=x351)/x352));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x358 = UINT32_MAX;
	static volatile int32_t t49 = -103776;

    t49 = (x357>>((x358<=x359)/x360));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x365 = 440U;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = 3171LLU;
	static int64_t x368 = INT64_MAX;
	static volatile int32_t t50 = -985331;

    t50 = (x365>>((x366<=x367)/x368));

    if (t50 != 440) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x378 = INT8_MIN;
	int16_t x379 = 43;
	int16_t x380 = -2237;
	uint32_t t51 = UINT32_MAX;

    t51 = (x377>>((x378<=x379)/x380));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x385 = INT16_MAX;
	int32_t x386 = 2;
	volatile int64_t x387 = 1LL;

    t52 = (x385>>((x386<=x387)/x388));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x389 = 559119LL;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MAX;
	volatile int64_t t53 = 1LL;

    t53 = (x389>>((x390<=x391)/x392));

    if (t53 != 559119LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x393 = 46655577U;
	int8_t x394 = 47;
	int8_t x396 = -1;
	volatile uint32_t t54 = 174657521U;

    t54 = (x393>>((x394<=x395)/x396));

    if (t54 != 46655577U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x397 = INT32_MAX;
	volatile int16_t x398 = 0;
	uint16_t x399 = 1907U;
	static int32_t x400 = 38427643;

    t55 = (x397>>((x398<=x399)/x400));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x401 = 1;
	int16_t x402 = 8054;
	int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MIN;
	volatile int32_t t56 = 0;

    t56 = (x401>>((x402<=x403)/x404));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x405 = INT16_MAX;
	uint8_t x406 = 65U;
	uint8_t x407 = 17U;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t57 = -57298;

    t57 = (x405>>((x406<=x407)/x408));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x409 = 4224077792825LL;
	int8_t x410 = INT8_MAX;
	volatile uint32_t x411 = 3359U;
	static volatile int64_t t58 = 272865158LL;

    t58 = (x409>>((x410<=x411)/x412));

    if (t58 != 4224077792825LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x421 = 63274248927012799LL;
	uint16_t x422 = 12U;
	static uint16_t x424 = 221U;
	int64_t t59 = 6473378LL;

    t59 = (x421>>((x422<=x423)/x424));

    if (t59 != 63274248927012799LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x425 = 387U;
	int64_t x428 = INT64_MAX;
	uint32_t t60 = 124161578U;

    t60 = (x425>>((x426<=x427)/x428));

    if (t60 != 387U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x433 = 0;
	uint32_t x434 = 21U;
	static uint64_t x435 = 274573608607LLU;
	volatile int32_t t61 = -149435089;

    t61 = (x433>>((x434<=x435)/x436));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x437 = INT32_MAX;
	int32_t x438 = -1;
	int32_t t62 = INT32_MAX;

    t62 = (x437>>((x438<=x439)/x440));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x441 = 3066704797581713364LL;
	int32_t x442 = -1;
	int8_t x443 = INT8_MIN;
	int16_t x444 = -47;
	int64_t t63 = 2692553416LL;

    t63 = (x441>>((x442<=x443)/x444));

    if (t63 != 3066704797581713364LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x445 = 31U;
	int64_t x446 = -8059538868556LL;
	int8_t x447 = 0;
	uint32_t t64 = 28136311U;

    t64 = (x445>>((x446<=x447)/x448));

    if (t64 != 31U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x449 = INT64_MAX;
	static volatile int32_t x451 = 12062729;
	uint16_t x452 = 516U;

    t65 = (x449>>((x450<=x451)/x452));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x454 = -31;
	int8_t x455 = INT8_MAX;
	static uint32_t t66 = UINT32_MAX;

    t66 = (x453>>((x454<=x455)/x456));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x458 = INT32_MAX;
	static int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	static volatile uint64_t t67 = UINT64_MAX;

    t67 = (x457>>((x458<=x459)/x460));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x465 = 6503;
	volatile uint8_t x466 = 1U;
	static uint32_t x467 = 648768018U;
	volatile int32_t x468 = -864004924;
	int32_t t68 = -2548073;

    t68 = (x465>>((x466<=x467)/x468));

    if (t68 != 6503) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x477 = 30467002U;
	uint16_t x478 = 114U;
	int64_t x479 = 7370410184LL;
	volatile int16_t x480 = INT16_MAX;
	volatile uint32_t t69 = 976U;

    t69 = (x477>>((x478<=x479)/x480));

    if (t69 != 30467002U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x482 = 14606322LLU;
	uint64_t x483 = UINT64_MAX;
	uint32_t x484 = 67070996U;

    t70 = (x481>>((x482<=x483)/x484));

    if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x489 = INT32_MAX;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 126U;
	volatile int32_t t71 = INT32_MAX;

    t71 = (x489>>((x490<=x491)/x492));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x493 = 147629001263LLU;
	int32_t x494 = INT32_MIN;

    t72 = (x493>>((x494<=x495)/x496));

    if (t72 != 147629001263LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x498 = UINT8_MAX;
	uint8_t x499 = 59U;
	int32_t x500 = 6280;
	uint32_t t73 = UINT32_MAX;

    t73 = (x497>>((x498<=x499)/x500));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x501 = INT8_MAX;
	volatile uint16_t x502 = 12392U;
	int8_t x503 = -3;
	volatile int16_t x504 = -309;
	int32_t t74 = -766807;

    t74 = (x501>>((x502<=x503)/x504));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x509 = 0U;
	static volatile int32_t x510 = 374;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = 280U;

    t75 = (x509>>((x510<=x511)/x512));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x517 = 495U;
	int64_t x518 = INT64_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile uint32_t t76 = 9433U;

    t76 = (x517>>((x518<=x519)/x520));

    if (t76 != 495U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x525 = 264257779U;
	int32_t x526 = -435333962;
	int32_t x528 = INT32_MAX;
	static volatile uint32_t t77 = 589U;

    t77 = (x525>>((x526<=x527)/x528));

    if (t77 != 264257779U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x537 = 3668409629511LLU;
	static int16_t x538 = -197;
	uint16_t x539 = 7U;
	int8_t x540 = 3;
	volatile uint64_t t78 = 105624369610732170LLU;

    t78 = (x537>>((x538<=x539)/x540));

    if (t78 != 3668409629511LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x541 = 3;
	static uint8_t x542 = UINT8_MAX;
	uint16_t x543 = 30U;
	static uint64_t x544 = 2473176047573130LLU;
	volatile int32_t t79 = 15560;

    t79 = (x541>>((x542<=x543)/x544));

    if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x545 = 127733U;
	static int8_t x546 = INT8_MAX;
	uint8_t x548 = UINT8_MAX;
	static uint32_t t80 = 8068379U;

    t80 = (x545>>((x546<=x547)/x548));

    if (t80 != 127733U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x549 = 14U;
	int8_t x550 = -5;
	static volatile int8_t x552 = INT8_MIN;
	int32_t t81 = 1;

    t81 = (x549>>((x550<=x551)/x552));

    if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x553 = 5183U;
	static int16_t x554 = INT16_MAX;
	static int32_t x555 = -1031;
	uint32_t x556 = 12050783U;

    t82 = (x553>>((x554<=x555)/x556));

    if (t82 != 5183) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x557 = 249U;
	int8_t x558 = INT8_MIN;
	int32_t x560 = INT32_MAX;
	int32_t t83 = 6913;

    t83 = (x557>>((x558<=x559)/x560));

    if (t83 != 249) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x561 = INT8_MAX;
	int16_t x562 = INT16_MIN;
	int32_t x563 = 1;
	volatile uint8_t x564 = UINT8_MAX;
	int32_t t84 = -17;

    t84 = (x561>>((x562<=x563)/x564));

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x565 = UINT64_MAX;
	uint16_t x566 = 3565U;
	uint8_t x567 = UINT8_MAX;
	uint64_t t85 = UINT64_MAX;

    t85 = (x565>>((x566<=x567)/x568));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x573 = UINT16_MAX;
	int64_t x574 = -269156948078LL;
	int16_t x575 = 250;
	volatile int32_t x576 = INT32_MAX;
	int32_t t86 = 933865608;

    t86 = (x573>>((x574<=x575)/x576));

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x577 = UINT64_MAX;
	static int64_t x578 = -1LL;
	int16_t x579 = INT16_MIN;
	static uint64_t t87 = UINT64_MAX;

    t87 = (x577>>((x578<=x579)/x580));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = -1;

    t88 = (x585>>((x586<=x587)/x588));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x589 = INT16_MAX;
	uint8_t x590 = UINT8_MAX;
	volatile uint64_t x592 = UINT64_MAX;
	int32_t t89 = 1;

    t89 = (x589>>((x590<=x591)/x592));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x598 = -1;
	static int32_t t90 = -30569;

    t90 = (x597>>((x598<=x599)/x600));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x601 = 14098;
	uint64_t x602 = 167068LLU;
	uint64_t x603 = UINT64_MAX;
	volatile int64_t x604 = -2078283875031592LL;
	volatile int32_t t91 = 462235;

    t91 = (x601>>((x602<=x603)/x604));

    if (t91 != 14098) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x609 = INT16_MAX;
	uint8_t x610 = 57U;
	int32_t x611 = INT32_MIN;
	int32_t x612 = -23;
	static int32_t t92 = -2;

    t92 = (x609>>((x610<=x611)/x612));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MAX;
	uint16_t x619 = 1U;
	volatile uint8_t x620 = 5U;
	static int32_t t93 = -774;

    t93 = (x617>>((x618<=x619)/x620));

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x621 = 10863364U;
	static int16_t x622 = -1;
	uint16_t x623 = UINT16_MAX;
	volatile int16_t x624 = INT16_MIN;
	volatile uint32_t t94 = 14U;

    t94 = (x621>>((x622<=x623)/x624));

    if (t94 != 10863364U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	uint64_t x630 = 5LLU;
	int16_t x631 = 1;

    t95 = (x629>>((x630<=x631)/x632));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x633 = UINT32_MAX;
	static int64_t x635 = 84LL;
	static int64_t x636 = INT64_MAX;
	uint32_t t96 = UINT32_MAX;

    t96 = (x633>>((x634<=x635)/x636));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x645 = 2703022U;
	static int64_t x646 = -1LL;
	int16_t x647 = INT16_MIN;
	volatile int64_t x648 = INT64_MAX;

    t97 = (x645>>((x646<=x647)/x648));

    if (t97 != 2703022U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x649 = 7U;
	int8_t x650 = INT8_MIN;
	int64_t x651 = INT64_MIN;
	int64_t x652 = 119788LL;
	volatile int32_t t98 = -6;

    t98 = (x649>>((x650<=x651)/x652));

    if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x661 = 272205U;
	volatile int8_t x662 = -15;
	uint8_t x663 = UINT8_MAX;
	uint32_t t99 = 12807502U;

    t99 = (x661>>((x662<=x663)/x664));

    if (t99 != 272205U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x674 = -1;
	uint32_t x675 = 3815U;
	int32_t x676 = -88015;
	int32_t t100 = 7938820;

    t100 = (x673>>((x674<=x675)/x676));

    if (t100 != 133) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x677 = 3186U;
	int8_t x679 = INT8_MIN;
	static int32_t x680 = -1;
	volatile int32_t t101 = 22672350;

    t101 = (x677>>((x678<=x679)/x680));

    if (t101 != 3186) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x681 = 3LLU;
	static int32_t x682 = INT32_MIN;
	static int64_t x683 = -1LL;
	volatile uint32_t x684 = 11943U;
	uint64_t t102 = 361197443836799LLU;

    t102 = (x681>>((x682<=x683)/x684));

    if (t102 != 3LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x693 = 1U;
	int32_t x694 = 1;
	int32_t x695 = INT32_MIN;

    t103 = (x693>>((x694<=x695)/x696));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x697 = 2U;
	static int8_t x698 = INT8_MAX;
	int32_t x699 = 49;
	int64_t x700 = INT64_MIN;
	uint32_t t104 = 37U;

    t104 = (x697>>((x698<=x699)/x700));

    if (t104 != 2U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x701 = 57U;
	int8_t x702 = 12;
	int16_t x703 = INT16_MIN;
	int16_t x704 = -1;

    t105 = (x701>>((x702<=x703)/x704));

    if (t105 != 57) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x705 = 23;
	static int8_t x706 = -1;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t106 = 404064503;

    t106 = (x705>>((x706<=x707)/x708));

    if (t106 != 23) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x709 = 14U;
	static volatile int64_t x710 = 2653880290556487232LL;
	int32_t x712 = INT32_MAX;
	volatile int32_t t107 = -24933787;

    t107 = (x709>>((x710<=x711)/x712));

    if (t107 != 14) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x713 = UINT64_MAX;
	int16_t x714 = 1;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = INT64_MIN;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (x713>>((x714<=x715)/x716));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x721 = INT16_MAX;
	static volatile int16_t x722 = INT16_MIN;
	int32_t x723 = INT32_MIN;
	int32_t t109 = 1;

    t109 = (x721>>((x722<=x723)/x724));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x729 = INT16_MAX;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = 590;
	static volatile int32_t t110 = 15912059;

    t110 = (x729>>((x730<=x731)/x732));

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x746 = INT64_MIN;
	static int32_t t111 = -241;

    t111 = (x745>>((x746<=x747)/x748));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x755 = 0;
	int32_t x756 = -1;
	uint32_t t112 = UINT32_MAX;

    t112 = (x753>>((x754<=x755)/x756));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x757 = 65087163;
	int64_t x759 = INT64_MIN;
	volatile int16_t x760 = INT16_MAX;

    t113 = (x757>>((x758<=x759)/x760));

    if (t113 != 65087163) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x765 = INT64_MAX;
	uint32_t x766 = UINT32_MAX;
	static uint32_t x767 = UINT32_MAX;
	int32_t x768 = INT32_MIN;
	volatile int64_t t114 = INT64_MAX;

    t114 = (x765>>((x766<=x767)/x768));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x777 = 273090283962122380LLU;
	static volatile uint16_t x778 = 6452U;
	int8_t x779 = INT8_MIN;
	uint32_t x780 = 5183327U;
	volatile uint64_t t115 = 3340692793912860455LLU;

    t115 = (x777>>((x778<=x779)/x780));

    if (t115 != 273090283962122380LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x781 = INT64_MAX;
	int64_t x782 = 14981372688210LL;
	int32_t x783 = -1;
	volatile int8_t x784 = -1;
	int64_t t116 = INT64_MAX;

    t116 = (x781>>((x782<=x783)/x784));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x797 = 80U;
	volatile int32_t x798 = INT32_MIN;
	static uint8_t x799 = 45U;
	static volatile int32_t x800 = INT32_MIN;

    t117 = (x797>>((x798<=x799)/x800));

    if (t117 != 80) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x801 = INT64_MAX;
	int8_t x802 = 1;
	volatile int8_t x803 = INT8_MAX;
	int64_t x804 = INT64_MIN;
	static volatile int64_t t118 = INT64_MAX;

    t118 = (x801>>((x802<=x803)/x804));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x805 = 3016U;
	static int8_t x806 = 11;
	static int32_t x807 = -1;
	uint32_t x808 = 570668731U;
	static volatile uint32_t t119 = 2980U;

    t119 = (x805>>((x806<=x807)/x808));

    if (t119 != 3016U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x809 = 135848070530699880LLU;
	int32_t x811 = INT32_MIN;
	int8_t x812 = INT8_MIN;
	static uint64_t t120 = 812523009981347154LLU;

    t120 = (x809>>((x810<=x811)/x812));

    if (t120 != 135848070530699880LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x837 = 1460U;
	volatile int8_t x838 = INT8_MAX;
	int64_t x839 = INT64_MAX;
	int32_t x840 = -793;

    t121 = (x837>>((x838<=x839)/x840));

    if (t121 != 1460) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x841 = 349216907U;
	int32_t x842 = 861;
	int64_t x843 = 27504444093045930LL;
	uint8_t x844 = 100U;
	uint32_t t122 = 2032U;

    t122 = (x841>>((x842<=x843)/x844));

    if (t122 != 349216907U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x877 = 10085553310LLU;
	int8_t x878 = INT8_MAX;
	int64_t x879 = INT64_MIN;
	static int16_t x880 = 116;
	volatile uint64_t t123 = 459316517679739222LLU;

    t123 = (x877>>((x878<=x879)/x880));

    if (t123 != 10085553310LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x889 = INT64_MAX;
	static int8_t x890 = -41;
	volatile int64_t x891 = INT64_MIN;
	int64_t x892 = INT64_MIN;
	volatile int64_t t124 = INT64_MAX;

    t124 = (x889>>((x890<=x891)/x892));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x893 = 2623276533LL;
	volatile int8_t x894 = 55;
	int16_t x895 = -1;
	uint64_t x896 = 9714492LLU;

    t125 = (x893>>((x894<=x895)/x896));

    if (t125 != 2623276533LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x898 = 28172232199912LLU;
	int64_t x899 = INT64_MIN;
	int64_t x900 = -13561819928147620LL;
	volatile int64_t t126 = INT64_MAX;

    t126 = (x897>>((x898<=x899)/x900));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x909 = 3;
	int8_t x910 = INT8_MAX;
	int32_t t127 = -10314402;

    t127 = (x909>>((x910<=x911)/x912));

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x913 = 3131;
	uint16_t x914 = 4U;
	int64_t x916 = INT64_MIN;

    t128 = (x913>>((x914<=x915)/x916));

    if (t128 != 3131) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x921 = 709U;
	int64_t x924 = INT64_MIN;

    t129 = (x921>>((x922<=x923)/x924));

    if (t129 != 709) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x933 = UINT32_MAX;
	uint64_t x934 = UINT64_MAX;
	static int16_t x935 = -1;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = (x933>>((x934<=x935)/x936));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x949 = 84;
	uint16_t x951 = 91U;
	int64_t x952 = -1LL;
	int32_t t131 = 34764294;

    t131 = (x949>>((x950<=x951)/x952));

    if (t131 != 84) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x954 = UINT32_MAX;
	volatile int32_t t132 = -22291550;

    t132 = (x953>>((x954<=x955)/x956));

    if (t132 != 883) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x961 = 1725629;
	static volatile int32_t x962 = INT32_MAX;
	int64_t x963 = INT64_MAX;
	uint16_t x964 = 231U;
	int32_t t133 = -1;

    t133 = (x961>>((x962<=x963)/x964));

    if (t133 != 1725629) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x969 = UINT8_MAX;
	int16_t x970 = -231;
	volatile int16_t x971 = INT16_MAX;
	uint8_t x972 = 13U;
	int32_t t134 = -2097;

    t134 = (x969>>((x970<=x971)/x972));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x985 = 2289LL;
	int8_t x986 = 2;
	volatile int8_t x987 = 0;
	int32_t x988 = INT32_MIN;
	volatile int64_t t135 = 10069827LL;

    t135 = (x985>>((x986<=x987)/x988));

    if (t135 != 2289LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x993 = UINT64_MAX;
	uint8_t x994 = 1U;

    t136 = (x993>>((x994<=x995)/x996));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1006 = -12;
	static int8_t x1007 = INT8_MAX;
	uint16_t x1008 = 1U;
	volatile uint64_t t137 = 3700575LLU;

    t137 = (x1005>>((x1006<=x1007)/x1008));

    if (t137 != 1075754089994928LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1009 = UINT64_MAX;
	volatile uint64_t x1010 = UINT64_MAX;
	int8_t x1011 = INT8_MAX;

    t138 = (x1009>>((x1010<=x1011)/x1012));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x1017 = 1U;
	uint64_t x1018 = UINT64_MAX;
	uint64_t x1019 = UINT64_MAX;
	volatile uint32_t x1020 = 58U;
	volatile int32_t t139 = -29988383;

    t139 = (x1017>>((x1018<=x1019)/x1020));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x1026 = -806;
	static int32_t x1028 = 57358;

    t140 = (x1025>>((x1026<=x1027)/x1028));

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1029 = UINT8_MAX;
	volatile int32_t x1030 = INT32_MIN;
	int32_t x1031 = INT32_MIN;
	uint32_t x1032 = 6818887U;
	volatile int32_t t141 = -2284;

    t141 = (x1029>>((x1030<=x1031)/x1032));

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x1034 = 2081954LL;
	int8_t x1035 = INT8_MAX;
	static uint16_t x1036 = UINT16_MAX;
	int32_t t142 = -133560;

    t142 = (x1033>>((x1034<=x1035)/x1036));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x1041 = INT32_MAX;
	static int8_t x1043 = INT8_MIN;
	static volatile int64_t x1044 = -1LL;
	int32_t t143 = INT32_MAX;

    t143 = (x1041>>((x1042<=x1043)/x1044));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1045 = 0U;
	int64_t x1046 = INT64_MAX;
	static volatile int64_t x1047 = INT64_MIN;
	int8_t x1048 = -1;
	volatile int32_t t144 = -70929840;

    t144 = (x1045>>((x1046<=x1047)/x1048));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1049 = 3;
	uint32_t x1050 = 3332U;
	static int16_t x1051 = 1;
	volatile int32_t t145 = 224;

    t145 = (x1049>>((x1050<=x1051)/x1052));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1059 = INT8_MAX;
	static volatile int8_t x1060 = -22;

    t146 = (x1057>>((x1058<=x1059)/x1060));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1069 = 57LLU;
	static int64_t x1070 = INT64_MAX;
	static int8_t x1071 = INT8_MIN;
	int16_t x1072 = -1;
	volatile uint64_t t147 = 1143973149138850LLU;

    t147 = (x1069>>((x1070<=x1071)/x1072));

    if (t147 != 57LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1077 = 59;
	static uint8_t x1078 = UINT8_MAX;
	volatile int16_t x1079 = INT16_MIN;
	int64_t x1080 = -1LL;
	int32_t t148 = 3;

    t148 = (x1077>>((x1078<=x1079)/x1080));

    if (t148 != 59) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x1081 = UINT32_MAX;
	static int32_t x1082 = 7910137;
	int32_t x1083 = -397;
	int16_t x1084 = 1;
	uint32_t t149 = UINT32_MAX;

    t149 = (x1081>>((x1082<=x1083)/x1084));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1086 = 95022LLU;
	int8_t x1087 = -1;
	uint16_t x1088 = UINT16_MAX;
	int32_t t150 = 0;

    t150 = (x1085>>((x1086<=x1087)/x1088));

    if (t150 != 10) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1089 = INT32_MAX;
	static uint64_t x1090 = UINT64_MAX;
	int16_t x1091 = INT16_MAX;
	int8_t x1092 = -1;
	int32_t t151 = INT32_MAX;

    t151 = (x1089>>((x1090<=x1091)/x1092));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1093 = 9466716LLU;
	uint16_t x1094 = UINT16_MAX;
	int8_t x1095 = INT8_MIN;
	volatile int64_t x1096 = INT64_MAX;
	uint64_t t152 = 3501848LLU;

    t152 = (x1093>>((x1094<=x1095)/x1096));

    if (t152 != 9466716LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x1105 = 195U;
	int32_t x1106 = INT32_MIN;
	uint64_t x1107 = UINT64_MAX;
	int16_t x1108 = INT16_MAX;
	uint32_t t153 = 6U;

    t153 = (x1105>>((x1106<=x1107)/x1108));

    if (t153 != 195U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x1113 = UINT8_MAX;
	int16_t x1114 = INT16_MIN;
	int32_t x1115 = INT32_MAX;
	static int32_t t154 = -704382370;

    t154 = (x1113>>((x1114<=x1115)/x1116));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1117 = 79U;
	volatile int16_t x1119 = INT16_MAX;
	static int8_t x1120 = INT8_MAX;
	int32_t t155 = 0;

    t155 = (x1117>>((x1118<=x1119)/x1120));

    if (t155 != 79) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x1121 = UINT32_MAX;
	static int64_t x1122 = -1LL;
	int64_t x1123 = 2955011976349LL;
	int32_t x1124 = INT32_MIN;
	static volatile uint32_t t156 = UINT32_MAX;

    t156 = (x1121>>((x1122<=x1123)/x1124));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1125 = 38U;
	int16_t x1126 = 7;
	uint32_t x1128 = 975528U;
	int32_t t157 = 8695;

    t157 = (x1125>>((x1126<=x1127)/x1128));

    if (t157 != 38) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1129 = 205U;
	int64_t x1130 = INT64_MIN;
	static int32_t x1131 = 1;
	static int32_t t158 = -283585786;

    t158 = (x1129>>((x1130<=x1131)/x1132));

    if (t158 != 205) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1133 = 87131013579494937LLU;
	int16_t x1134 = INT16_MAX;
	static int64_t x1136 = INT64_MIN;
	volatile uint64_t t159 = 1652683312967LLU;

    t159 = (x1133>>((x1134<=x1135)/x1136));

    if (t159 != 87131013579494937LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1137 = UINT32_MAX;
	int32_t x1138 = INT32_MAX;
	int16_t x1139 = 198;
	uint64_t x1140 = UINT64_MAX;
	static volatile uint32_t t160 = UINT32_MAX;

    t160 = (x1137>>((x1138<=x1139)/x1140));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x1149 = UINT8_MAX;
	uint8_t x1150 = UINT8_MAX;
	static volatile int8_t x1151 = 1;
	int32_t t161 = -36213;

    t161 = (x1149>>((x1150<=x1151)/x1152));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1153 = INT8_MAX;
	static uint8_t x1154 = 2U;
	volatile uint16_t x1155 = 54U;
	int16_t x1156 = INT16_MAX;
	int32_t t162 = -54;

    t162 = (x1153>>((x1154<=x1155)/x1156));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1166 = -1;
	int32_t t163 = -506;

    t163 = (x1165>>((x1166<=x1167)/x1168));

    if (t163 != 48) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1170 = 1;
	volatile uint8_t x1171 = UINT8_MAX;
	int16_t x1172 = INT16_MIN;

    t164 = (x1169>>((x1170<=x1171)/x1172));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1173 = UINT32_MAX;
	uint8_t x1174 = 31U;
	static int16_t x1175 = INT16_MIN;
	int16_t x1176 = -1;
	static uint32_t t165 = UINT32_MAX;

    t165 = (x1173>>((x1174<=x1175)/x1176));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x1177 = UINT8_MAX;
	static int32_t x1178 = INT32_MIN;
	int64_t x1179 = INT64_MAX;
	int8_t x1180 = INT8_MAX;
	int32_t t166 = -1;

    t166 = (x1177>>((x1178<=x1179)/x1180));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1190 = INT32_MAX;
	int32_t x1191 = INT32_MIN;
	volatile int32_t t167 = 62256247;

    t167 = (x1189>>((x1190<=x1191)/x1192));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1193 = 0U;
	volatile int64_t x1194 = INT64_MIN;
	int64_t x1195 = -1LL;
	volatile uint64_t x1196 = 335220045680462LLU;
	volatile int32_t t168 = 83326;

    t168 = (x1193>>((x1194<=x1195)/x1196));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1201 = 37U;
	int8_t x1202 = 1;
	int8_t x1203 = INT8_MAX;
	int64_t x1204 = INT64_MIN;
	volatile int32_t t169 = 129469;

    t169 = (x1201>>((x1202<=x1203)/x1204));

    if (t169 != 37) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x1209 = 11;
	static int16_t x1210 = -1;
	int8_t x1211 = -37;
	volatile int16_t x1212 = -336;
	volatile int32_t t170 = 7;

    t170 = (x1209>>((x1210<=x1211)/x1212));

    if (t170 != 11) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1214 = INT32_MAX;
	volatile int32_t t171 = 6906155;

    t171 = (x1213>>((x1214<=x1215)/x1216));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1221 = 3U;
	uint32_t x1222 = UINT32_MAX;

    t172 = (x1221>>((x1222<=x1223)/x1224));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1225 = INT8_MAX;
	int16_t x1226 = INT16_MAX;
	static int64_t x1228 = 93296LL;
	int32_t t173 = 56252;

    t173 = (x1225>>((x1226<=x1227)/x1228));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x1230 = UINT8_MAX;
	int64_t x1231 = -1LL;
	int16_t x1232 = INT16_MAX;
	static int32_t t174 = -19438;

    t174 = (x1229>>((x1230<=x1231)/x1232));

    if (t174 != 13817) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1238 = 206410793;
	static volatile int16_t x1239 = INT16_MIN;
	static volatile int32_t t175 = -6631797;

    t175 = (x1237>>((x1238<=x1239)/x1240));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1250 = INT64_MAX;
	int32_t x1251 = -1;
	int64_t x1252 = INT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (x1249>>((x1250<=x1251)/x1252));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1261 = INT16_MAX;
	int16_t x1262 = INT16_MIN;
	volatile int64_t x1263 = -1LL;
	int64_t x1264 = INT64_MIN;
	volatile int32_t t177 = -208;

    t177 = (x1261>>((x1262<=x1263)/x1264));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1270 = INT32_MIN;
	int32_t x1271 = INT32_MIN;
	int32_t x1272 = 1;
	int32_t t178 = 689719577;

    t178 = (x1269>>((x1270<=x1271)/x1272));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1277 = 29U;
	int16_t x1279 = INT16_MAX;

    t179 = (x1277>>((x1278<=x1279)/x1280));

    if (t179 != 29) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1289 = 5212;
	uint64_t x1290 = 4065143453LLU;
	volatile int16_t x1291 = INT16_MIN;
	static volatile uint32_t x1292 = 55934816U;

    t180 = (x1289>>((x1290<=x1291)/x1292));

    if (t180 != 5212) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1297 = UINT8_MAX;
	uint16_t x1298 = 20U;
	volatile int64_t x1299 = INT64_MIN;
	int8_t x1300 = -1;
	static int32_t t181 = -806;

    t181 = (x1297>>((x1298<=x1299)/x1300));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1301 = UINT16_MAX;
	static uint32_t x1302 = 49848629U;
	uint8_t x1303 = 58U;
	int64_t x1304 = INT64_MAX;
	int32_t t182 = 505453;

    t182 = (x1301>>((x1302<=x1303)/x1304));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1309 = INT64_MAX;
	uint32_t x1310 = 301882719U;
	uint16_t x1311 = 731U;
	int32_t x1312 = -36031407;

    t183 = (x1309>>((x1310<=x1311)/x1312));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1329 = UINT8_MAX;
	static int32_t x1330 = INT32_MIN;
	int16_t x1332 = INT16_MIN;
	volatile int32_t t184 = -2226;

    t184 = (x1329>>((x1330<=x1331)/x1332));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1333 = INT64_MAX;
	static int16_t x1334 = -1;
	int64_t x1335 = -20061773LL;
	uint32_t x1336 = 293126U;
	int64_t t185 = INT64_MAX;

    t185 = (x1333>>((x1334<=x1335)/x1336));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1341 = UINT16_MAX;
	int32_t x1342 = 4;
	volatile uint32_t x1344 = UINT32_MAX;
	int32_t t186 = -3552;

    t186 = (x1341>>((x1342<=x1343)/x1344));

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1345 = UINT32_MAX;
	uint16_t x1347 = 2467U;
	static int8_t x1348 = 2;
	static uint32_t t187 = UINT32_MAX;

    t187 = (x1345>>((x1346<=x1347)/x1348));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1353 = 1691U;
	static uint64_t x1354 = 60593796534LLU;

    t188 = (x1353>>((x1354<=x1355)/x1356));

    if (t188 != 1691U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1364 = INT8_MIN;
	int32_t t189 = 32965;

    t189 = (x1361>>((x1362<=x1363)/x1364));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1365 = 153;
	uint8_t x1366 = UINT8_MAX;
	volatile uint8_t x1367 = 3U;
	volatile int16_t x1368 = INT16_MIN;
	static volatile int32_t t190 = 24310913;

    t190 = (x1365>>((x1366<=x1367)/x1368));

    if (t190 != 153) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1373 = 111U;
	int32_t x1374 = INT32_MIN;
	int64_t x1375 = INT64_MIN;
	int32_t x1376 = -63;
	volatile uint32_t t191 = 30037U;

    t191 = (x1373>>((x1374<=x1375)/x1376));

    if (t191 != 111U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1377 = UINT16_MAX;
	static int64_t x1380 = -1LL;
	int32_t t192 = -638142;

    t192 = (x1377>>((x1378<=x1379)/x1380));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1385 = 18U;
	uint16_t x1386 = UINT16_MAX;
	int8_t x1387 = INT8_MIN;
	uint32_t x1388 = UINT32_MAX;
	volatile int32_t t193 = -3835571;

    t193 = (x1385>>((x1386<=x1387)/x1388));

    if (t193 != 18) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1390 = 16447;
	volatile int16_t x1391 = -18;
	int32_t x1392 = -1;
	int32_t t194 = 470079733;

    t194 = (x1389>>((x1390<=x1391)/x1392));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1394 = 51004189862756LLU;
	int16_t x1396 = INT16_MAX;
	int32_t t195 = -235;

    t195 = (x1393>>((x1394<=x1395)/x1396));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1397 = INT16_MAX;
	int32_t x1398 = 3786;
	volatile uint32_t x1399 = 3741U;
	uint8_t x1400 = 57U;
	volatile int32_t t196 = -4071919;

    t196 = (x1397>>((x1398<=x1399)/x1400));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1410 = INT32_MAX;
	int16_t x1411 = INT16_MAX;
	static int8_t x1412 = INT8_MIN;
	int32_t t197 = INT32_MAX;

    t197 = (x1409>>((x1410<=x1411)/x1412));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1421 = INT16_MAX;
	uint64_t x1422 = UINT64_MAX;
	int32_t x1423 = INT32_MIN;
	int16_t x1424 = 14;
	int32_t t198 = 318;

    t198 = (x1421>>((x1422<=x1423)/x1424));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1429 = 1181099816LLU;
	int8_t x1430 = INT8_MAX;
	int8_t x1431 = 54;
	static volatile uint64_t t199 = 15049246808499LLU;

    t199 = (x1429>>((x1430<=x1431)/x1432));

    if (t199 != 1181099816LLU) { NG(); } else { ; }
	
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

