
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

static uint16_t x7 = 686U;
volatile uint8_t x17 = 7U;
volatile int8_t x18 = INT8_MAX;
int8_t x19 = 0;
static volatile int8_t x23 = 38;
int16_t x29 = -1;
static int64_t x33 = INT64_MIN;
uint8_t x35 = 9U;
volatile uint32_t x55 = UINT32_MAX;
uint32_t t7 = 387U;
int64_t x57 = 275287329LL;
int32_t x58 = INT32_MAX;
int8_t x59 = -17;
uint64_t x63 = 2078054537LLU;
volatile uint16_t x76 = 10U;
volatile int32_t t12 = -10233096;
int64_t x89 = -1LL;
static int16_t x93 = INT16_MIN;
int64_t x95 = INT64_MIN;
static volatile uint16_t x96 = 2483U;
volatile int32_t t16 = -290317084;
uint64_t x130 = UINT64_MAX;
volatile uint32_t x133 = UINT32_MAX;
static int32_t x139 = INT32_MAX;
int32_t t20 = -6537;
int8_t x154 = INT8_MIN;
uint16_t x165 = UINT16_MAX;
int32_t t22 = 3023216;
static volatile uint64_t x169 = 2802LLU;
uint64_t t23 = 126LLU;
uint32_t x182 = 4024U;
static uint64_t x184 = UINT64_MAX;
int32_t t26 = -3;
int8_t x224 = 54;
uint32_t x230 = 126681U;
uint8_t x232 = 6U;
int8_t x250 = INT8_MAX;
int16_t x259 = INT16_MAX;
int64_t x265 = INT64_MAX;
volatile int32_t t32 = 198834385;
int64_t x278 = INT64_MIN;
volatile int32_t t34 = 719;
uint8_t x292 = UINT8_MAX;
static int32_t t35 = 95296;
int64_t x302 = 3034466373214LL;
uint32_t x306 = 21660U;
int32_t t40 = 837754;
static uint64_t x321 = UINT64_MAX;
uint32_t x322 = 1731U;
int32_t x323 = -1;
volatile int64_t x327 = -1LL;
int16_t x338 = INT16_MIN;
int32_t t47 = 1;
volatile uint64_t x350 = UINT64_MAX;
uint32_t x354 = 1246U;
volatile int32_t t49 = 451454657;
uint8_t x358 = UINT8_MAX;
volatile int32_t x362 = INT32_MIN;
volatile int16_t x363 = INT16_MAX;
int16_t x364 = 11;
volatile uint64_t t52 = 11443762660764090LLU;
uint8_t x404 = UINT8_MAX;
static volatile uint64_t t56 = 81822770393105572LLU;
uint8_t x428 = 19U;
uint8_t x442 = UINT8_MAX;
uint8_t x462 = UINT8_MAX;
uint32_t x473 = 8U;
volatile int16_t x476 = INT16_MAX;
volatile uint32_t t61 = 88U;
int64_t x497 = 7LL;
int32_t x503 = 0;
int8_t x516 = 7;
int8_t x526 = 52;
static volatile int32_t t66 = 9612;
int8_t x541 = INT8_MIN;
volatile uint16_t x555 = 50U;
volatile int32_t t71 = -3;
uint16_t x581 = 29066U;
volatile int32_t x583 = INT32_MIN;
uint16_t x588 = UINT16_MAX;
int8_t x602 = INT8_MIN;
static int32_t x629 = -223569;
int16_t x642 = INT16_MIN;
static int32_t t83 = 15400;
int32_t x649 = INT32_MAX;
static volatile int64_t x653 = INT64_MIN;
static volatile int64_t x662 = -129780LL;
volatile int32_t x680 = INT32_MAX;
uint64_t t87 = 8660643940833LLU;
int32_t x688 = 628;
volatile int64_t t89 = -119LL;
int16_t x701 = INT16_MAX;
int32_t x707 = -1;
volatile int8_t x709 = -52;
static volatile int64_t t95 = -1095663842788064LL;
uint64_t x721 = 114097440LLU;
int64_t x725 = INT64_MIN;
static volatile int64_t t97 = -3933487LL;
int32_t x731 = -1;
uint64_t x745 = UINT64_MAX;
static int32_t x746 = INT32_MAX;
uint32_t x750 = UINT32_MAX;
uint64_t x757 = 209059024LLU;
static uint64_t t102 = 443LLU;
uint32_t x782 = 266356682U;
static int8_t x783 = INT8_MAX;
uint8_t x784 = 45U;
int8_t x785 = 2;
static int64_t x789 = -1LL;
uint16_t x794 = 67U;
int32_t x795 = INT32_MAX;
uint32_t x796 = UINT32_MAX;
uint8_t x821 = 11U;
static int32_t t110 = 78;
static int32_t x830 = INT32_MAX;
volatile int16_t x831 = 15258;
uint8_t x832 = UINT8_MAX;
int32_t t111 = 12;
volatile uint16_t x841 = 2682U;
volatile int32_t t112 = -26846652;
static volatile int32_t t113 = 2230;
int32_t x858 = INT32_MIN;
int32_t x874 = INT32_MIN;
static volatile int8_t x887 = INT8_MIN;
int64_t t117 = -227173227LL;
volatile uint64_t x899 = UINT64_MAX;
uint32_t t119 = 16103759U;
uint64_t x909 = UINT64_MAX;
volatile uint16_t x912 = 57U;
int8_t x913 = -1;
int64_t t123 = 18554671355639776LL;
int32_t x935 = INT32_MIN;
int32_t t125 = -32569;
uint8_t x940 = UINT8_MAX;
uint32_t x946 = UINT32_MAX;
uint32_t x954 = UINT32_MAX;
int64_t x956 = INT64_MAX;
int32_t t129 = 47;
static int64_t x984 = INT64_MAX;
static volatile int32_t x990 = INT32_MIN;
uint64_t x1010 = 785043651501572LLU;
int8_t x1013 = -1;
uint64_t x1014 = 293686572LLU;
volatile int8_t x1016 = INT8_MAX;
static volatile int32_t t136 = 1607;
uint8_t x1024 = UINT8_MAX;
static volatile int64_t x1027 = INT64_MAX;
int64_t x1028 = INT64_MAX;
static volatile int64_t t138 = -3256820LL;
uint32_t x1030 = 5184927U;
volatile int32_t t141 = 316513;
uint32_t x1055 = 100U;
uint64_t x1067 = 2498027954LLU;
uint32_t x1068 = 57321U;
static volatile int64_t t147 = 546903083169787LL;
int16_t x1091 = INT16_MIN;
uint16_t x1125 = 15U;
int16_t x1127 = -1;
static volatile int32_t t152 = 30531138;
static uint8_t x1129 = 56U;
uint64_t x1132 = 1439LLU;
int32_t t153 = -2366559;
int64_t x1134 = -1LL;
static volatile int32_t t156 = -4;
int64_t x1158 = -1094208365646066LL;
int64_t x1177 = -1LL;
int8_t x1184 = 9;
int16_t x1194 = -23;
volatile int8_t x1208 = 1;
int16_t x1210 = INT16_MIN;
int16_t x1212 = 95;
int16_t x1223 = -646;
int8_t x1224 = INT8_MAX;
int64_t t165 = -3935159543LL;
volatile uint8_t x1238 = 47U;
uint8_t x1240 = 1U;
int16_t x1245 = INT16_MIN;
volatile int8_t x1247 = INT8_MIN;
int16_t x1249 = INT16_MAX;
int8_t x1251 = 0;
static int16_t x1252 = 0;
uint64_t x1253 = 946LLU;
volatile uint64_t t171 = 1981824577130LLU;
static int64_t x1263 = INT64_MIN;
int16_t x1271 = -729;
int32_t x1297 = 139;
int64_t x1298 = -1LL;
static int16_t x1305 = -1;
uint32_t x1317 = 2050U;
volatile int64_t t182 = -269334469LL;
uint64_t x1333 = UINT64_MAX;
volatile int8_t x1334 = INT8_MIN;
int8_t x1335 = INT8_MIN;
int64_t x1341 = INT64_MIN;
uint8_t x1348 = 0U;
static int32_t x1356 = INT32_MAX;
int64_t x1361 = INT64_MIN;
int64_t x1364 = 637000079859LL;
uint16_t x1373 = 32U;
volatile int64_t x1379 = INT64_MIN;
int32_t t190 = 146721048;
volatile uint32_t x1434 = 30U;
uint16_t x1445 = 759U;
static int32_t x1447 = INT32_MIN;
uint64_t x1475 = UINT64_MAX;
uint16_t x1476 = 203U;
int32_t x1493 = INT32_MIN;
int8_t x1494 = INT8_MIN;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 39369LLU;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	static int32_t t0 = -489;

    t0 = (x1%((x2<=x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = -1LL;
	uint32_t x8 = 169U;
	uint32_t t1 = 0U;

    t1 = (x5%((x6<=x7)<=x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x20 = UINT32_MAX;
	int32_t t2 = -1;

    t2 = (x17%((x18<=x19)<=x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = INT32_MIN;
	int32_t x22 = 133;
	static uint8_t x24 = 6U;
	int32_t t3 = -25;

    t3 = (x21%((x22<=x23)<=x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 346U;
	int32_t t4 = 1381672;

    t4 = (x29%((x30<=x31)<=x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x34 = 524;
	int64_t x36 = INT64_MAX;
	static volatile int64_t t5 = -1345963354068388473LL;

    t5 = (x33%((x34<=x35)<=x36));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	uint8_t x39 = 33U;
	int16_t x40 = 195;
	volatile int32_t t6 = -3885407;

    t6 = (x37%((x38<=x39)<=x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x53 = 36913461U;
	static int64_t x54 = INT64_MAX;
	uint8_t x56 = 4U;

    t7 = (x53%((x54<=x55)<=x56));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x60 = 7LLU;
	volatile int64_t t8 = -9LL;

    t8 = (x57%((x58<=x59)<=x60));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x61 = INT64_MAX;
	static uint8_t x62 = UINT8_MAX;
	int16_t x64 = 12376;
	int64_t t9 = -875473544LL;

    t9 = (x61%((x62<=x63)<=x64));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	uint32_t x71 = 9050503U;
	volatile uint32_t x72 = UINT32_MAX;
	static volatile int32_t t10 = 1;

    t10 = (x69%((x70<=x71)<=x72));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	int64_t x75 = INT64_MAX;
	volatile int32_t t11 = -2;

    t11 = (x73%((x74<=x75)<=x76));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x81 = INT32_MAX;
	int8_t x82 = INT8_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	int64_t x84 = INT64_MAX;

    t12 = (x81%((x82<=x83)<=x84));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 2183388468015LLU;
	volatile int64_t t13 = 6160899804706LL;

    t13 = (x89%((x90<=x91)<=x92));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x94 = 60U;
	int32_t t14 = 151766;

    t14 = (x93%((x94<=x95)<=x96));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x97 = 78;
	uint16_t x98 = 10U;
	uint64_t x99 = 53600LLU;
	static volatile uint64_t x100 = 55642721082876713LLU;
	volatile int32_t t15 = 983;

    t15 = (x97%((x98<=x99)<=x100));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MAX;

    t16 = (x109%((x110<=x111)<=x112));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x113 = INT64_MAX;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	int64_t t17 = -126565152LL;

    t17 = (x113%((x114<=x115)<=x116));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x129 = 1141230U;
	int16_t x131 = -1;
	int64_t x132 = 64855808LL;
	volatile uint32_t t18 = 9847U;

    t18 = (x129%((x130<=x131)<=x132));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x134 = 116568973LLU;
	int8_t x135 = -1;
	static int32_t x136 = INT32_MAX;
	uint32_t t19 = 3U;

    t19 = (x133%((x134<=x135)<=x136));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	uint8_t x140 = 41U;

    t20 = (x137%((x138<=x139)<=x140));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x153 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = 0;
	uint32_t t21 = 4622294U;

    t21 = (x153%((x154<=x155)<=x156));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x166 = 0U;
	volatile int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MAX;

    t22 = (x165%((x166<=x167)<=x168));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x170 = INT16_MAX;
	int32_t x171 = -68363;
	static uint16_t x172 = 11632U;

    t23 = (x169%((x170<=x171)<=x172));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x177 = 48U;
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 4371462U;
	uint8_t x180 = 68U;
	volatile uint32_t t24 = 50U;

    t24 = (x177%((x178<=x179)<=x180));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x181 = -1;
	uint64_t x183 = 862145684008LLU;
	static volatile int32_t t25 = -5;

    t25 = (x181%((x182<=x183)<=x184));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x185 = 10;
	volatile int64_t x186 = 73053707625423LL;
	static uint16_t x187 = UINT16_MAX;
	int8_t x188 = 0;

    t26 = (x185%((x186<=x187)<=x188));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x221 = 1219U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	volatile int32_t t27 = 66;

    t27 = (x221%((x222<=x223)<=x224));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x229 = 22937991540754LLU;
	uint64_t x231 = 1087804520245LLU;
	uint64_t t28 = 120LLU;

    t28 = (x229%((x230<=x231)<=x232));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x249 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	static int8_t x252 = 1;
	int32_t t29 = -23614146;

    t29 = (x249%((x250<=x251)<=x252));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = 3;
	int16_t x260 = INT16_MAX;
	volatile int64_t t30 = 175356585LL;

    t30 = (x257%((x258<=x259)<=x260));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MAX;
	int64_t t31 = 195914231721309LL;

    t31 = (x265%((x266<=x267)<=x268));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x269 = 0;
	volatile uint16_t x270 = 0U;
	static uint8_t x271 = 5U;
	int64_t x272 = 5535174181LL;

    t32 = (x269%((x270<=x271)<=x272));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x277 = 3391124413442LL;
	volatile int32_t x279 = INT32_MAX;
	volatile uint16_t x280 = 169U;
	int64_t t33 = 1LL;

    t33 = (x277%((x278<=x279)<=x280));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MAX;
	static uint64_t x283 = UINT64_MAX;
	static uint8_t x284 = 60U;

    t34 = (x281%((x282<=x283)<=x284));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x289 = UINT16_MAX;
	int16_t x290 = 0;
	uint64_t x291 = UINT64_MAX;

    t35 = (x289%((x290<=x291)<=x292));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x293 = -1347616668146031LL;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 126969U;
	uint64_t x296 = 92390821218LLU;
	static int64_t t36 = 6497287057235375LL;

    t36 = (x293%((x294<=x295)<=x296));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x297 = -1;
	volatile int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t37 = 3;

    t37 = (x297%((x298<=x299)<=x300));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x301 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 6U;
	static volatile int32_t t38 = -58;

    t38 = (x301%((x302<=x303)<=x304));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x305 = -45;
	volatile uint32_t x307 = 46269U;
	static volatile uint16_t x308 = 8519U;
	volatile int32_t t39 = -13636134;

    t39 = (x305%((x306<=x307)<=x308));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x309 = 19633U;
	int16_t x310 = -505;
	uint16_t x311 = 1906U;
	int8_t x312 = 36;

    t40 = (x309%((x310<=x311)<=x312));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x313 = 0U;
	uint16_t x314 = 2U;
	int64_t x315 = INT64_MIN;
	volatile int32_t x316 = 8;
	volatile int32_t t41 = -6;

    t41 = (x313%((x314<=x315)<=x316));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x317 = INT32_MIN;
	uint64_t x318 = 112143LLU;
	static volatile int32_t x319 = INT32_MIN;
	static uint8_t x320 = 51U;
	volatile int32_t t42 = 1086;

    t42 = (x317%((x318<=x319)<=x320));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x324 = 11U;
	uint64_t t43 = 4988328859LLU;

    t43 = (x321%((x322<=x323)<=x324));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x325 = 5U;
	static uint16_t x326 = 1321U;
	int64_t x328 = 1025672491180680LL;
	volatile int32_t t44 = 911018;

    t44 = (x325%((x326<=x327)<=x328));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x333 = -1;
	volatile uint64_t x334 = 117LLU;
	volatile int8_t x335 = INT8_MAX;
	uint64_t x336 = 7618429LLU;
	volatile int32_t t45 = -63347;

    t45 = (x333%((x334<=x335)<=x336));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x337 = -1LL;
	static int16_t x339 = INT16_MIN;
	uint64_t x340 = 73247955LLU;
	int64_t t46 = 723771041844LL;

    t46 = (x337%((x338<=x339)<=x340));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int16_t x346 = -1665;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;

    t47 = (x345%((x346<=x347)<=x348));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x349 = INT8_MIN;
	volatile int64_t x351 = 18951027984896LL;
	uint32_t x352 = UINT32_MAX;
	int32_t t48 = 3;

    t48 = (x349%((x350<=x351)<=x352));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x353 = -5;
	volatile int8_t x355 = -1;
	uint64_t x356 = 152009923LLU;

    t49 = (x353%((x354<=x355)<=x356));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x357 = 1257108;
	static int64_t x359 = INT64_MIN;
	volatile uint8_t x360 = 21U;
	int32_t t50 = -5194954;

    t50 = (x357%((x358<=x359)<=x360));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x361 = 6143922458LLU;
	uint64_t t51 = 490910589925306LLU;

    t51 = (x361%((x362<=x363)<=x364));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x369 = UINT64_MAX;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = 1U;
	uint64_t x372 = UINT64_MAX;

    t52 = (x369%((x370<=x371)<=x372));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x389 = -1;
	volatile uint64_t x390 = 133913LLU;
	uint8_t x391 = 30U;
	volatile uint64_t x392 = 12728488950696LLU;
	int32_t t53 = 15;

    t53 = (x389%((x390<=x391)<=x392));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x397 = 465882U;
	int64_t x398 = INT64_MIN;
	static int64_t x399 = -1LL;
	int16_t x400 = INT16_MAX;
	volatile uint32_t t54 = 18867U;

    t54 = (x397%((x398<=x399)<=x400));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = 268419513LL;
	volatile int32_t t55 = 5868;

    t55 = (x401%((x402<=x403)<=x404));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MAX;
	static int16_t x423 = INT16_MIN;
	volatile int8_t x424 = 1;

    t56 = (x421%((x422<=x423)<=x424));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x425 = INT8_MIN;
	uint32_t x426 = 1013021U;
	int8_t x427 = 0;
	static int32_t t57 = 540193607;

    t57 = (x425%((x426<=x427)<=x428));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x437 = -1;
	volatile int8_t x438 = 15;
	int16_t x439 = -9180;
	volatile int64_t x440 = 623623LL;
	volatile int32_t t58 = 92342082;

    t58 = (x437%((x438<=x439)<=x440));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x441 = -264620574469797LL;
	int16_t x443 = -1;
	uint32_t x444 = 1U;
	volatile int64_t t59 = -550264607701069LL;

    t59 = (x441%((x442<=x443)<=x444));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x461 = UINT32_MAX;
	int64_t x463 = -1LL;
	int32_t x464 = 2;
	uint32_t t60 = 279U;

    t60 = (x461%((x462<=x463)<=x464));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x474 = 276295156LLU;
	int32_t x475 = INT32_MAX;

    t61 = (x473%((x474<=x475)<=x476));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x498 = UINT32_MAX;
	int64_t x499 = 63579691681705LL;
	int64_t x500 = INT64_MAX;
	volatile int64_t t62 = 1843912248LL;

    t62 = (x497%((x498<=x499)<=x500));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x501 = INT16_MAX;
	static int8_t x502 = INT8_MIN;
	int8_t x504 = INT8_MAX;
	int32_t t63 = -928;

    t63 = (x501%((x502<=x503)<=x504));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x513 = -174258972;
	volatile int32_t x514 = -35438422;
	static volatile int64_t x515 = INT64_MIN;
	static int32_t t64 = -127736664;

    t64 = (x513%((x514<=x515)<=x516));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x517 = INT16_MIN;
	uint32_t x518 = 13U;
	uint32_t x519 = UINT32_MAX;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t65 = -22044;

    t65 = (x517%((x518<=x519)<=x520));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x525 = 24;
	volatile uint32_t x527 = 1363350906U;
	volatile int8_t x528 = INT8_MAX;

    t66 = (x525%((x526<=x527)<=x528));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x542 = 195U;
	uint8_t x543 = UINT8_MAX;
	uint8_t x544 = UINT8_MAX;
	static int32_t t67 = -97410;

    t67 = (x541%((x542<=x543)<=x544));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x545 = 149969LLU;
	int64_t x546 = INT64_MIN;
	volatile int16_t x547 = INT16_MIN;
	static uint32_t x548 = 55628U;
	uint64_t t68 = 239032411LLU;

    t68 = (x545%((x546<=x547)<=x548));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x549 = INT32_MAX;
	int32_t x550 = -1;
	int16_t x551 = 2;
	uint8_t x552 = 15U;
	int32_t t69 = 0;

    t69 = (x549%((x550<=x551)<=x552));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x553 = INT8_MAX;
	uint32_t x554 = UINT32_MAX;
	int8_t x556 = 1;
	volatile int32_t t70 = 0;

    t70 = (x553%((x554<=x555)<=x556));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x557 = 1;
	static uint16_t x558 = 21U;
	static int8_t x559 = -1;
	int32_t x560 = 2810;

    t71 = (x557%((x558<=x559)<=x560));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x561 = 102205764U;
	int32_t x562 = INT32_MIN;
	static int16_t x563 = 2;
	volatile uint64_t x564 = 499399171132899LLU;
	static uint32_t t72 = 1U;

    t72 = (x561%((x562<=x563)<=x564));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x569 = 122U;
	int8_t x570 = -1;
	int16_t x571 = -1;
	int16_t x572 = INT16_MAX;
	volatile int32_t t73 = 561794;

    t73 = (x569%((x570<=x571)<=x572));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x582 = UINT32_MAX;
	int64_t x584 = INT64_MAX;
	volatile int32_t t74 = 0;

    t74 = (x581%((x582<=x583)<=x584));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x585 = 11168LLU;
	uint8_t x586 = 7U;
	int16_t x587 = -1;
	uint64_t t75 = 143LLU;

    t75 = (x585%((x586<=x587)<=x588));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x589 = -77131;
	volatile uint8_t x590 = 0U;
	static int64_t x591 = 36252488110337LL;
	uint16_t x592 = 101U;
	int32_t t76 = -5899;

    t76 = (x589%((x590<=x591)<=x592));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x597 = UINT16_MAX;
	volatile uint64_t x598 = 1191LLU;
	int8_t x599 = 10;
	int8_t x600 = 0;
	int32_t t77 = 1654360;

    t77 = (x597%((x598<=x599)<=x600));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x601 = 11U;
	static uint64_t x603 = 4269550424LLU;
	int64_t x604 = 173941347572336595LL;
	int32_t t78 = 450660;

    t78 = (x601%((x602<=x603)<=x604));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 1945296283768LLU;
	static uint32_t x619 = 1500538U;
	uint32_t x620 = 3724U;
	int32_t t79 = -87890078;

    t79 = (x617%((x618<=x619)<=x620));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x625 = -11LL;
	static uint64_t x626 = 8LLU;
	int8_t x627 = -1;
	uint64_t x628 = UINT64_MAX;
	volatile int64_t t80 = 10315571112LL;

    t80 = (x625%((x626<=x627)<=x628));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x630 = 5U;
	volatile int8_t x631 = INT8_MIN;
	int8_t x632 = INT8_MAX;
	volatile int32_t t81 = 340894;

    t81 = (x629%((x630<=x631)<=x632));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x633 = INT64_MAX;
	int8_t x634 = INT8_MIN;
	int64_t x635 = -1LL;
	static volatile int32_t x636 = INT32_MAX;
	int64_t t82 = 780LL;

    t82 = (x633%((x634<=x635)<=x636));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x641 = INT32_MAX;
	int16_t x643 = 3;
	uint32_t x644 = 226002411U;

    t83 = (x641%((x642<=x643)<=x644));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x650 = UINT8_MAX;
	uint16_t x651 = UINT16_MAX;
	int16_t x652 = 273;
	volatile int32_t t84 = -44352454;

    t84 = (x649%((x650<=x651)<=x652));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x654 = -1LL;
	volatile uint16_t x655 = 0U;
	volatile int64_t x656 = INT64_MAX;
	int64_t t85 = -235339813016LL;

    t85 = (x653%((x654<=x655)<=x656));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x661 = INT64_MIN;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MAX;
	int64_t t86 = -128825432075315440LL;

    t86 = (x661%((x662<=x663)<=x664));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x677 = 6682468LLU;
	int16_t x678 = INT16_MAX;
	static volatile int16_t x679 = INT16_MIN;

    t87 = (x677%((x678<=x679)<=x680));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x681 = -1;
	int32_t x682 = -7;
	static int8_t x683 = -5;
	int8_t x684 = 6;
	volatile int32_t t88 = -124753367;

    t88 = (x681%((x682<=x683)<=x684));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x685 = -11093027LL;
	int8_t x686 = 3;
	static int32_t x687 = INT32_MIN;

    t89 = (x685%((x686<=x687)<=x688));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = INT64_MAX;
	static int64_t x695 = -1LL;
	uint32_t x696 = 3315527U;
	volatile int32_t t90 = 475;

    t90 = (x693%((x694<=x695)<=x696));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x697 = -197189853499LL;
	uint8_t x698 = 0U;
	static int32_t x699 = 0;
	int64_t x700 = INT64_MAX;
	int64_t t91 = 296271080118148147LL;

    t91 = (x697%((x698<=x699)<=x700));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x702 = 0U;
	int8_t x703 = -1;
	volatile uint32_t x704 = 776917883U;
	int32_t t92 = -2553;

    t92 = (x701%((x702<=x703)<=x704));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x705 = UINT64_MAX;
	int8_t x706 = INT8_MIN;
	int32_t x708 = 6462;
	static volatile uint64_t t93 = 79003LLU;

    t93 = (x705%((x706<=x707)<=x708));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x710 = 265340780LLU;
	volatile int32_t x711 = -2047;
	int16_t x712 = INT16_MAX;
	volatile int32_t t94 = 64555240;

    t94 = (x709%((x710<=x711)<=x712));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = INT32_MIN;
	uint8_t x715 = UINT8_MAX;
	static uint16_t x716 = 512U;

    t95 = (x713%((x714<=x715)<=x716));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x722 = 0U;
	volatile int32_t x723 = INT32_MAX;
	int64_t x724 = INT64_MAX;
	uint64_t t96 = 27856LLU;

    t96 = (x721%((x722<=x723)<=x724));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x726 = INT16_MIN;
	int16_t x727 = 18;
	static int64_t x728 = 2723LL;

    t97 = (x725%((x726<=x727)<=x728));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x729 = INT32_MAX;
	volatile uint32_t x730 = 22622657U;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t98 = 78739;

    t98 = (x729%((x730<=x731)<=x732));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x741 = -1;
	int64_t x742 = INT64_MIN;
	volatile uint64_t x743 = 970063843LLU;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t99 = 16660;

    t99 = (x741%((x742<=x743)<=x744));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x747 = 84U;
	volatile int8_t x748 = 23;
	volatile uint64_t t100 = 531218621253496269LLU;

    t100 = (x745%((x746<=x747)<=x748));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x749 = INT8_MIN;
	uint64_t x751 = 87010LLU;
	uint64_t x752 = 20984513131LLU;
	volatile int32_t t101 = 58;

    t101 = (x749%((x750<=x751)<=x752));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x758 = INT16_MIN;
	uint8_t x759 = UINT8_MAX;
	volatile int64_t x760 = 2011589477LL;

    t102 = (x757%((x758<=x759)<=x760));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x761 = -36;
	static volatile int16_t x762 = -1;
	uint16_t x763 = UINT16_MAX;
	uint8_t x764 = 38U;
	volatile int32_t t103 = 38126296;

    t103 = (x761%((x762<=x763)<=x764));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x781 = 247U;
	int32_t t104 = 635;

    t104 = (x781%((x782<=x783)<=x784));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x786 = 467061U;
	int64_t x787 = INT64_MIN;
	int8_t x788 = 1;
	volatile int32_t t105 = 390797;

    t105 = (x785%((x786<=x787)<=x788));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x790 = INT8_MAX;
	int16_t x791 = -289;
	uint32_t x792 = 125U;
	volatile int64_t t106 = 161022855672539LL;

    t106 = (x789%((x790<=x791)<=x792));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x793 = INT16_MAX;
	volatile int32_t t107 = -94206783;

    t107 = (x793%((x794<=x795)<=x796));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x797 = 392464;
	static int16_t x798 = -10;
	static uint8_t x799 = 92U;
	int32_t x800 = INT32_MAX;
	int32_t t108 = 9;

    t108 = (x797%((x798<=x799)<=x800));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x809 = INT8_MAX;
	int8_t x810 = INT8_MIN;
	int8_t x811 = INT8_MIN;
	int64_t x812 = 2033LL;
	int32_t t109 = -1911447;

    t109 = (x809%((x810<=x811)<=x812));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x822 = INT64_MIN;
	static int16_t x823 = INT16_MIN;
	int8_t x824 = 1;

    t110 = (x821%((x822<=x823)<=x824));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x829 = INT32_MAX;

    t111 = (x829%((x830<=x831)<=x832));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x842 = 3U;
	static int64_t x843 = INT64_MIN;
	uint16_t x844 = 56U;

    t112 = (x841%((x842<=x843)<=x844));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x849 = 6310U;
	int32_t x850 = 102366;
	static volatile int64_t x851 = INT64_MIN;
	uint32_t x852 = 62U;

    t113 = (x849%((x850<=x851)<=x852));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x853 = UINT64_MAX;
	uint64_t x854 = 1LLU;
	int64_t x855 = -1LL;
	int64_t x856 = 30405050159563727LL;
	uint64_t t114 = 3627LLU;

    t114 = (x853%((x854<=x855)<=x856));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x857 = -1LL;
	uint64_t x859 = UINT64_MAX;
	uint64_t x860 = 490125103103413LLU;
	int64_t t115 = 250219359731251504LL;

    t115 = (x857%((x858<=x859)<=x860));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x873 = 152973345237999LLU;
	uint32_t x875 = 1830U;
	uint64_t x876 = UINT64_MAX;
	static uint64_t t116 = 8LLU;

    t116 = (x873%((x874<=x875)<=x876));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x885 = -1LL;
	int16_t x886 = INT16_MAX;
	uint32_t x888 = UINT32_MAX;

    t117 = (x885%((x886<=x887)<=x888));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x897 = INT32_MAX;
	volatile int16_t x898 = -1;
	volatile int8_t x900 = INT8_MAX;
	static int32_t t118 = -264683978;

    t118 = (x897%((x898<=x899)<=x900));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x901 = 6U;
	int16_t x902 = -587;
	volatile uint32_t x903 = 29007U;
	static volatile int8_t x904 = 2;

    t119 = (x901%((x902<=x903)<=x904));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x910 = -49;
	static uint16_t x911 = 412U;
	volatile uint64_t t120 = 46LLU;

    t120 = (x909%((x910<=x911)<=x912));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x914 = INT8_MIN;
	int64_t x915 = -1LL;
	volatile uint64_t x916 = 97521350714620842LLU;
	volatile int32_t t121 = -1346042;

    t121 = (x913%((x914<=x915)<=x916));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x921 = 0U;
	int16_t x922 = INT16_MAX;
	int16_t x923 = INT16_MIN;
	volatile uint16_t x924 = 0U;
	volatile uint32_t t122 = 1U;

    t122 = (x921%((x922<=x923)<=x924));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x925 = INT64_MIN;
	static uint32_t x926 = UINT32_MAX;
	int16_t x927 = INT16_MIN;
	uint32_t x928 = 4U;

    t123 = (x925%((x926<=x927)<=x928));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x929 = UINT16_MAX;
	int8_t x930 = -62;
	int64_t x931 = INT64_MIN;
	int32_t x932 = INT32_MAX;
	static volatile int32_t t124 = -154932;

    t124 = (x929%((x930<=x931)<=x932));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x933 = -946205397;
	int8_t x934 = -1;
	int32_t x936 = 79;

    t125 = (x933%((x934<=x935)<=x936));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x937 = 95U;
	volatile uint16_t x938 = 147U;
	int16_t x939 = INT16_MAX;
	static int32_t t126 = 2975;

    t126 = (x937%((x938<=x939)<=x940));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x941 = 27U;
	volatile uint16_t x942 = 1873U;
	int16_t x943 = INT16_MIN;
	static volatile int64_t x944 = INT64_MAX;
	int32_t t127 = -2005992;

    t127 = (x941%((x942<=x943)<=x944));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x945 = 3U;
	int16_t x947 = INT16_MAX;
	uint32_t x948 = 49235U;
	static volatile int32_t t128 = -14442;

    t128 = (x945%((x946<=x947)<=x948));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x953 = INT16_MAX;
	static int64_t x955 = 3256538437213778LL;

    t129 = (x953%((x954<=x955)<=x956));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x973 = 3882U;
	volatile int16_t x974 = INT16_MIN;
	int32_t x975 = INT32_MAX;
	uint8_t x976 = UINT8_MAX;
	volatile int32_t t130 = 706580;

    t130 = (x973%((x974<=x975)<=x976));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x977 = 13U;
	int8_t x978 = INT8_MIN;
	uint16_t x979 = 3627U;
	int16_t x980 = INT16_MAX;
	static int32_t t131 = -1;

    t131 = (x977%((x978<=x979)<=x980));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x981 = 234184682547189LLU;
	volatile int32_t x982 = -15631618;
	volatile uint16_t x983 = 5U;
	volatile uint64_t t132 = 110LLU;

    t132 = (x981%((x982<=x983)<=x984));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x989 = INT16_MIN;
	int64_t x991 = INT64_MAX;
	volatile uint8_t x992 = UINT8_MAX;
	int32_t t133 = 13018;

    t133 = (x989%((x990<=x991)<=x992));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x1005 = 11015U;
	volatile int8_t x1006 = -1;
	volatile int8_t x1007 = 0;
	int16_t x1008 = 3097;
	volatile int32_t t134 = -116507591;

    t134 = (x1005%((x1006<=x1007)<=x1008));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1009 = 16012U;
	volatile int16_t x1011 = INT16_MIN;
	uint16_t x1012 = 12U;
	volatile int32_t t135 = 1330;

    t135 = (x1009%((x1010<=x1011)<=x1012));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x1015 = -1;

    t136 = (x1013%((x1014<=x1015)<=x1016));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1021 = -1LL;
	uint64_t x1022 = 9066414160003406050LLU;
	volatile int16_t x1023 = 1;
	int64_t t137 = -2444867305LL;

    t137 = (x1021%((x1022<=x1023)<=x1024));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1025 = -101515947208732LL;
	static int64_t x1026 = 1373939LL;

    t138 = (x1025%((x1026<=x1027)<=x1028));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x1029 = 3297768934884LL;
	uint64_t x1031 = 7LLU;
	int8_t x1032 = 1;
	int64_t t139 = 1788971341LL;

    t139 = (x1029%((x1030<=x1031)<=x1032));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1033 = INT32_MAX;
	int32_t x1034 = INT32_MAX;
	uint16_t x1035 = 5U;
	uint32_t x1036 = 0U;
	volatile int32_t t140 = 110;

    t140 = (x1033%((x1034<=x1035)<=x1036));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1041 = INT16_MAX;
	static int16_t x1042 = -5;
	volatile uint32_t x1043 = 220U;
	uint16_t x1044 = UINT16_MAX;

    t141 = (x1041%((x1042<=x1043)<=x1044));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1053 = 1;
	int16_t x1054 = INT16_MAX;
	volatile int64_t x1056 = 510150994025LL;
	volatile int32_t t142 = 46557;

    t142 = (x1053%((x1054<=x1055)<=x1056));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1057 = -2;
	int16_t x1058 = INT16_MAX;
	uint8_t x1059 = 1U;
	uint16_t x1060 = 4U;
	volatile int32_t t143 = -1;

    t143 = (x1057%((x1058<=x1059)<=x1060));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1065 = INT16_MAX;
	static int16_t x1066 = -1;
	int32_t t144 = -26174809;

    t144 = (x1065%((x1066<=x1067)<=x1068));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1077 = UINT32_MAX;
	int16_t x1078 = INT16_MIN;
	uint16_t x1079 = UINT16_MAX;
	static uint64_t x1080 = UINT64_MAX;
	volatile uint32_t t145 = 1972698842U;

    t145 = (x1077%((x1078<=x1079)<=x1080));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1081 = UINT8_MAX;
	static volatile int8_t x1082 = 9;
	int16_t x1083 = -1;
	uint8_t x1084 = 89U;
	int32_t t146 = 248;

    t146 = (x1081%((x1082<=x1083)<=x1084));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1085 = -46797542771LL;
	int32_t x1086 = -815;
	uint64_t x1087 = 7956LLU;
	static volatile int64_t x1088 = 2777462786795869550LL;

    t147 = (x1085%((x1086<=x1087)<=x1088));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1089 = 848191U;
	int32_t x1090 = INT32_MIN;
	static uint32_t x1092 = UINT32_MAX;
	static volatile uint32_t t148 = 241U;

    t148 = (x1089%((x1090<=x1091)<=x1092));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1093 = 1066028839LLU;
	int64_t x1094 = INT64_MIN;
	int8_t x1095 = 32;
	static int64_t x1096 = 16231458814164855LL;
	static uint64_t t149 = 12160734431437LLU;

    t149 = (x1093%((x1094<=x1095)<=x1096));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1105 = 13LLU;
	uint32_t x1106 = 3U;
	int64_t x1107 = 3817385837LL;
	int16_t x1108 = 667;
	volatile uint64_t t150 = 58LLU;

    t150 = (x1105%((x1106<=x1107)<=x1108));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1121 = 26U;
	uint8_t x1122 = UINT8_MAX;
	int16_t x1123 = -230;
	uint16_t x1124 = 3U;
	volatile uint32_t t151 = 4U;

    t151 = (x1121%((x1122<=x1123)<=x1124));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x1126 = 20160226884LLU;
	int16_t x1128 = INT16_MAX;

    t152 = (x1125%((x1126<=x1127)<=x1128));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x1130 = UINT16_MAX;
	int32_t x1131 = -399774;

    t153 = (x1129%((x1130<=x1131)<=x1132));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1133 = INT32_MIN;
	uint8_t x1135 = UINT8_MAX;
	uint64_t x1136 = 94539284495406LLU;
	volatile int32_t t154 = 7014;

    t154 = (x1133%((x1134<=x1135)<=x1136));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x1137 = INT16_MIN;
	int32_t x1138 = -8324;
	uint64_t x1139 = 707758501846140LLU;
	int32_t x1140 = INT32_MAX;
	int32_t t155 = -8480;

    t155 = (x1137%((x1138<=x1139)<=x1140));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x1153 = INT8_MAX;
	static int8_t x1154 = INT8_MIN;
	int16_t x1155 = INT16_MAX;
	uint32_t x1156 = UINT32_MAX;

    t156 = (x1153%((x1154<=x1155)<=x1156));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1157 = INT32_MAX;
	int16_t x1159 = -1;
	uint32_t x1160 = 273533052U;
	static volatile int32_t t157 = -62;

    t157 = (x1157%((x1158<=x1159)<=x1160));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1161 = INT32_MIN;
	uint8_t x1162 = UINT8_MAX;
	static uint16_t x1163 = UINT16_MAX;
	uint64_t x1164 = UINT64_MAX;
	int32_t t158 = -1;

    t158 = (x1161%((x1162<=x1163)<=x1164));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1178 = INT8_MIN;
	volatile int32_t x1179 = INT32_MIN;
	uint16_t x1180 = UINT16_MAX;
	int64_t t159 = 174232053285LL;

    t159 = (x1177%((x1178<=x1179)<=x1180));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x1181 = UINT16_MAX;
	uint32_t x1182 = 28992U;
	int32_t x1183 = -1;
	volatile int32_t t160 = -11219;

    t160 = (x1181%((x1182<=x1183)<=x1184));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1193 = INT8_MIN;
	static int16_t x1195 = INT16_MIN;
	int8_t x1196 = INT8_MAX;
	volatile int32_t t161 = -74239;

    t161 = (x1193%((x1194<=x1195)<=x1196));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1205 = 4747U;
	int16_t x1206 = INT16_MIN;
	volatile uint32_t x1207 = 24947U;
	int32_t t162 = 15494;

    t162 = (x1205%((x1206<=x1207)<=x1208));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1209 = -1;
	static int16_t x1211 = -964;
	int32_t t163 = -346828151;

    t163 = (x1209%((x1210<=x1211)<=x1212));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1213 = 29LLU;
	int64_t x1214 = INT64_MAX;
	int8_t x1215 = INT8_MAX;
	uint16_t x1216 = 142U;
	uint64_t t164 = 37057599316LLU;

    t164 = (x1213%((x1214<=x1215)<=x1216));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1221 = 2623035804648LL;
	int16_t x1222 = INT16_MIN;

    t165 = (x1221%((x1222<=x1223)<=x1224));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x1225 = -139;
	int16_t x1226 = -1;
	int64_t x1227 = 57962118120710LL;
	uint32_t x1228 = UINT32_MAX;
	volatile int32_t t166 = 26097404;

    t166 = (x1225%((x1226<=x1227)<=x1228));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1237 = INT8_MIN;
	int32_t x1239 = INT32_MIN;
	volatile int32_t t167 = -36849;

    t167 = (x1237%((x1238<=x1239)<=x1240));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1241 = -1;
	volatile int32_t x1242 = INT32_MAX;
	int32_t x1243 = 23;
	int32_t x1244 = 1499;
	int32_t t168 = -1;

    t168 = (x1241%((x1242<=x1243)<=x1244));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1246 = -110;
	int64_t x1248 = INT64_MAX;
	volatile int32_t t169 = 3982;

    t169 = (x1245%((x1246<=x1247)<=x1248));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x1250 = INT8_MAX;
	int32_t t170 = 86;

    t170 = (x1249%((x1250<=x1251)<=x1252));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1254 = 536204202LLU;
	volatile uint64_t x1255 = UINT64_MAX;
	volatile uint64_t x1256 = UINT64_MAX;

    t171 = (x1253%((x1254<=x1255)<=x1256));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1257 = -1LL;
	int32_t x1258 = INT32_MIN;
	int8_t x1259 = INT8_MIN;
	uint8_t x1260 = UINT8_MAX;
	volatile int64_t t172 = -16368275581720602LL;

    t172 = (x1257%((x1258<=x1259)<=x1260));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1261 = UINT64_MAX;
	volatile int8_t x1262 = INT8_MIN;
	static uint16_t x1264 = 24728U;
	uint64_t t173 = 715683LLU;

    t173 = (x1261%((x1262<=x1263)<=x1264));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1269 = 10U;
	int8_t x1270 = 21;
	uint64_t x1272 = 113558992169149LLU;
	volatile int32_t t174 = -789;

    t174 = (x1269%((x1270<=x1271)<=x1272));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1273 = INT8_MIN;
	int64_t x1274 = INT64_MAX;
	static volatile int64_t x1275 = 1397752LL;
	uint64_t x1276 = UINT64_MAX;
	volatile int32_t t175 = -7;

    t175 = (x1273%((x1274<=x1275)<=x1276));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x1293 = -437;
	static int16_t x1294 = INT16_MIN;
	static int8_t x1295 = 0;
	int32_t x1296 = INT32_MAX;
	volatile int32_t t176 = 48352;

    t176 = (x1293%((x1294<=x1295)<=x1296));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1299 = 1;
	static int8_t x1300 = 36;
	int32_t t177 = 0;

    t177 = (x1297%((x1298<=x1299)<=x1300));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1301 = 1311315041052LLU;
	volatile int32_t x1302 = 117368;
	volatile int32_t x1303 = INT32_MIN;
	volatile int32_t x1304 = 21;
	uint64_t t178 = 16848LLU;

    t178 = (x1301%((x1302<=x1303)<=x1304));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1306 = INT64_MAX;
	int32_t x1307 = INT32_MIN;
	uint64_t x1308 = 335795129LLU;
	static volatile int32_t t179 = -195;

    t179 = (x1305%((x1306<=x1307)<=x1308));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1318 = 523067U;
	uint16_t x1319 = UINT16_MAX;
	uint32_t x1320 = UINT32_MAX;
	volatile uint32_t t180 = 404654877U;

    t180 = (x1317%((x1318<=x1319)<=x1320));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1321 = -977275390;
	int16_t x1322 = -1;
	int64_t x1323 = -366957LL;
	uint8_t x1324 = 51U;
	volatile int32_t t181 = -4617945;

    t181 = (x1321%((x1322<=x1323)<=x1324));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1325 = INT64_MIN;
	volatile int32_t x1326 = INT32_MAX;
	int32_t x1327 = INT32_MIN;
	int8_t x1328 = 1;

    t182 = (x1325%((x1326<=x1327)<=x1328));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1336 = INT32_MAX;
	uint64_t t183 = 8689434457822439LLU;

    t183 = (x1333%((x1334<=x1335)<=x1336));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1342 = -3620;
	int32_t x1343 = 155033868;
	int16_t x1344 = 12125;
	volatile int64_t t184 = -4829311297738LL;

    t184 = (x1341%((x1342<=x1343)<=x1344));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1345 = INT32_MIN;
	volatile int16_t x1346 = 580;
	static int8_t x1347 = 7;
	int32_t t185 = -51422;

    t185 = (x1345%((x1346<=x1347)<=x1348));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1353 = UINT16_MAX;
	int8_t x1354 = 1;
	int16_t x1355 = -34;
	int32_t t186 = 0;

    t186 = (x1353%((x1354<=x1355)<=x1356));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1362 = INT16_MAX;
	int64_t x1363 = -2020940788LL;
	volatile int64_t t187 = 45413371LL;

    t187 = (x1361%((x1362<=x1363)<=x1364));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1374 = 4320LLU;
	volatile uint32_t x1375 = 952475U;
	uint32_t x1376 = UINT32_MAX;
	static volatile int32_t t188 = -37214254;

    t188 = (x1373%((x1374<=x1375)<=x1376));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1377 = 6;
	uint16_t x1378 = UINT16_MAX;
	int8_t x1380 = 0;
	int32_t t189 = -1618226;

    t189 = (x1377%((x1378<=x1379)<=x1380));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1405 = INT16_MAX;
	int16_t x1406 = 4555;
	volatile uint16_t x1407 = 12031U;
	int16_t x1408 = 4062;

    t190 = (x1405%((x1406<=x1407)<=x1408));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1425 = -3545;
	int64_t x1426 = -20433511LL;
	int16_t x1427 = 640;
	static uint16_t x1428 = 3U;
	volatile int32_t t191 = -13067711;

    t191 = (x1425%((x1426<=x1427)<=x1428));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1433 = INT32_MAX;
	static int32_t x1435 = -38213856;
	uint16_t x1436 = 22U;
	static int32_t t192 = -64888290;

    t192 = (x1433%((x1434<=x1435)<=x1436));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1446 = INT64_MAX;
	uint8_t x1448 = 7U;
	volatile int32_t t193 = 3610;

    t193 = (x1445%((x1446<=x1447)<=x1448));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1453 = INT64_MIN;
	int64_t x1454 = INT64_MAX;
	int16_t x1455 = INT16_MIN;
	uint8_t x1456 = 21U;
	volatile int64_t t194 = 950067LL;

    t194 = (x1453%((x1454<=x1455)<=x1456));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1473 = 0U;
	volatile uint64_t x1474 = UINT64_MAX;
	int32_t t195 = 629765;

    t195 = (x1473%((x1474<=x1475)<=x1476));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1481 = 81917463LLU;
	volatile int64_t x1482 = -1LL;
	volatile int8_t x1483 = INT8_MIN;
	uint16_t x1484 = UINT16_MAX;
	uint64_t t196 = 10762707431086LLU;

    t196 = (x1481%((x1482<=x1483)<=x1484));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x1485 = INT32_MIN;
	int16_t x1486 = 191;
	int32_t x1487 = -1;
	int64_t x1488 = INT64_MAX;
	static volatile int32_t t197 = 2677874;

    t197 = (x1485%((x1486<=x1487)<=x1488));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1489 = UINT64_MAX;
	static int64_t x1490 = INT64_MIN;
	int32_t x1491 = INT32_MIN;
	static int16_t x1492 = INT16_MAX;
	uint64_t t198 = 11865043974681LLU;

    t198 = (x1489%((x1490<=x1491)<=x1492));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1495 = INT32_MIN;
	int16_t x1496 = INT16_MAX;
	int32_t t199 = -73413866;

    t199 = (x1493%((x1494<=x1495)<=x1496));

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

