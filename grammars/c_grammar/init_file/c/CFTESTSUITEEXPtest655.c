
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

volatile int32_t x2 = INT32_MIN;
int32_t x36 = -1;
uint16_t x37 = UINT16_MAX;
int32_t x38 = -567046;
static volatile int32_t t2 = -277834834;
int8_t x57 = 0;
int16_t x74 = -1;
int64_t x75 = -1LL;
int32_t x91 = INT32_MIN;
static uint16_t x93 = UINT16_MAX;
static volatile uint32_t x109 = 186125339U;
int16_t x110 = INT16_MAX;
uint32_t x111 = UINT32_MAX;
static int32_t x114 = INT32_MIN;
uint32_t x116 = 1U;
volatile uint64_t x133 = 895016296848LLU;
uint16_t x148 = 132U;
static int8_t x149 = INT8_MAX;
static int8_t x151 = INT8_MIN;
uint64_t x173 = 444444792153710448LLU;
int16_t x175 = INT16_MAX;
int32_t x176 = -1;
uint8_t x211 = UINT8_MAX;
static int64_t x217 = 1LL;
volatile int64_t x218 = INT64_MAX;
uint16_t x219 = UINT16_MAX;
static int64_t t19 = 14100LL;
int8_t x228 = -1;
int32_t t21 = 9;
int8_t x246 = INT8_MAX;
static int64_t x249 = INT64_MAX;
int32_t x250 = -1;
int8_t x251 = -1;
volatile int16_t x252 = INT16_MIN;
static int8_t x258 = INT8_MIN;
int32_t x263 = INT32_MAX;
uint32_t x264 = 992269U;
uint16_t x270 = UINT16_MAX;
uint32_t x273 = 263609987U;
static volatile int32_t t29 = INT32_MAX;
uint16_t x297 = UINT16_MAX;
int64_t x299 = INT64_MIN;
uint32_t x300 = 8970U;
volatile int32_t t31 = 3094548;
volatile int32_t t32 = -1;
static int64_t x314 = -1LL;
uint16_t x315 = 157U;
volatile uint16_t x327 = 50U;
volatile int32_t x347 = INT32_MIN;
static uint32_t t38 = 117682400U;
int8_t x408 = -1;
int16_t x433 = 148;
volatile int32_t t41 = 94;
static int16_t x447 = INT16_MIN;
int8_t x448 = -1;
int16_t x466 = INT16_MIN;
static int16_t x478 = INT16_MAX;
int8_t x480 = -16;
int32_t t47 = 1;
volatile int16_t x500 = INT16_MAX;
uint16_t x514 = UINT16_MAX;
static volatile int8_t x520 = INT8_MIN;
uint16_t x521 = 421U;
int8_t x524 = -1;
int64_t x531 = INT64_MAX;
uint32_t x532 = 2U;
volatile uint64_t x544 = 13040058373882LLU;
int8_t x553 = INT8_MAX;
uint16_t x575 = 5453U;
volatile int64_t x615 = INT64_MIN;
static uint64_t t65 = 973003558915LLU;
uint8_t x641 = 50U;
static uint32_t x642 = 66U;
volatile uint32_t x643 = UINT32_MAX;
volatile int16_t x666 = -1;
uint32_t t68 = 0U;
uint8_t x694 = UINT8_MAX;
uint8_t x695 = 4U;
uint8_t x697 = 0U;
static int32_t x710 = -23236606;
static int32_t x713 = 221;
static volatile int8_t x721 = 1;
static volatile uint64_t t79 = UINT64_MAX;
static uint8_t x769 = UINT8_MAX;
volatile int32_t t81 = -55;
int8_t x776 = INT8_MAX;
volatile int32_t t82 = 83747695;
uint64_t x777 = UINT64_MAX;
int16_t x778 = INT16_MIN;
uint64_t x779 = UINT64_MAX;
volatile int16_t x796 = -1;
volatile int32_t x800 = INT32_MIN;
int32_t x820 = INT32_MIN;
int8_t x829 = 3;
int16_t x839 = INT16_MIN;
int32_t x840 = -1;
int8_t x847 = INT8_MIN;
uint32_t t89 = UINT32_MAX;
int64_t x862 = INT64_MIN;
int32_t x891 = 226;
int8_t x964 = 50;
int16_t x967 = -1861;
uint8_t x968 = 1U;
static volatile uint64_t x975 = 254LLU;
uint32_t x980 = 14U;
static uint32_t t95 = 90847U;
int64_t x990 = INT64_MIN;
static volatile uint64_t t99 = UINT64_MAX;
volatile uint32_t x1005 = 157U;
int64_t x1009 = INT64_MAX;
volatile int64_t x1012 = INT64_MAX;
int16_t x1053 = 314;
int32_t x1061 = 786;
uint64_t x1071 = UINT64_MAX;
static volatile int64_t t108 = -5067305024227451LL;
int32_t x1083 = INT32_MAX;
int8_t x1084 = -1;
volatile uint32_t x1086 = 429133U;
uint32_t x1087 = 102964U;
static uint64_t x1128 = 7LLU;
uint8_t x1136 = UINT8_MAX;
static volatile int32_t x1154 = -1;
static uint32_t x1158 = 1U;
volatile int8_t x1167 = -1;
volatile int64_t x1188 = 95534LL;
static int32_t x1189 = 386938249;
volatile int64_t t124 = -13776012LL;
int8_t x1219 = INT8_MIN;
volatile uint64_t x1246 = 22094780537LLU;
volatile int32_t t127 = -7;
int64_t x1255 = INT64_MAX;
static int16_t x1262 = -1;
volatile uint64_t x1273 = UINT64_MAX;
uint32_t x1276 = 62931U;
uint32_t x1285 = 20936U;
uint32_t x1286 = 162383U;
uint32_t x1306 = 3307U;
int16_t x1308 = INT16_MAX;
uint8_t x1317 = 1U;
int64_t x1318 = INT64_MAX;
static int32_t x1319 = INT32_MIN;
int32_t x1320 = -1;
int8_t x1347 = -5;
uint16_t x1354 = 55U;
volatile int32_t t137 = -1478446;
int16_t x1381 = INT16_MAX;
int16_t x1384 = INT16_MIN;
int32_t t139 = 53;
volatile int64_t t141 = -1581133642656LL;
int16_t x1405 = INT16_MAX;
static uint16_t x1407 = 471U;
static int32_t t144 = 4802738;
volatile uint32_t x1413 = 317U;
int8_t x1420 = -1;
uint8_t x1433 = UINT8_MAX;
int64_t x1435 = 70421499068796390LL;
static int32_t x1488 = 6;
int8_t x1495 = INT8_MIN;
uint16_t x1505 = 229U;
uint64_t x1510 = UINT64_MAX;
uint64_t x1512 = 665409274LLU;
int16_t x1515 = INT16_MAX;
int8_t x1517 = 1;
static volatile int32_t x1543 = INT32_MIN;
volatile int64_t t158 = INT64_MAX;
uint64_t x1577 = 197444604177LLU;
uint64_t x1593 = 37695578659890205LLU;
volatile int16_t x1595 = -14403;
uint8_t x1596 = 38U;
int16_t x1619 = 78;
int16_t x1620 = INT16_MAX;
int8_t x1629 = INT8_MAX;
uint8_t x1630 = 18U;
int64_t x1662 = INT64_MIN;
static volatile int32_t t170 = -361773165;
static uint64_t x1679 = 292324361080254LLU;
int32_t x1716 = -14359067;
volatile int32_t t174 = -38529;
volatile int8_t x1725 = INT8_MAX;
static int32_t x1728 = INT32_MIN;
int32_t t176 = -1;
volatile int32_t t177 = 122;
int16_t x1768 = INT16_MAX;
volatile uint64_t t178 = UINT64_MAX;
int64_t x1779 = INT64_MIN;
static int16_t x1858 = -1;
static int8_t x1878 = 0;
int16_t x1886 = 1;
int32_t x1893 = 234;
static int32_t t189 = -1;
int64_t x1907 = INT64_MIN;
int32_t x1909 = 10543428;
int32_t x1912 = INT32_MAX;
volatile uint8_t x1955 = 120U;
static int32_t x1961 = INT32_MAX;
uint32_t x1974 = 53U;
static int16_t x1978 = 298;
volatile uint64_t t198 = 1308222649283879551LLU;
uint16_t x1985 = UINT16_MAX;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	volatile int32_t x3 = -202721919;
	volatile int8_t x4 = 28;
	volatile uint64_t t0 = 1137384464240LLU;

    t0 = (x1>>((x2/x3)%x4));

    if (t0 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x33 = 0;
	static uint16_t x34 = UINT16_MAX;
	static int8_t x35 = INT8_MAX;
	volatile int32_t t1 = 52958163;

    t1 = (x33>>((x34/x35)%x36));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x39 = INT32_MIN;
	volatile int32_t x40 = 179149;

    t2 = (x37>>((x38/x39)%x40));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x58 = INT64_MAX;
	uint8_t x59 = 13U;
	int64_t x60 = -1LL;
	int32_t t3 = 20137653;

    t3 = (x57>>((x58/x59)%x60));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x73 = 3;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t4 = -21273;

    t4 = (x73>>((x74/x75)%x76));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x89 = INT32_MAX;
	static uint32_t x90 = UINT32_MAX;
	static int8_t x92 = 39;
	volatile int32_t t5 = 18997;

    t5 = (x89>>((x90/x91)%x92));

    if (t5 != 1073741823) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x94 = 9483911LLU;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t6 = 0;

    t6 = (x93>>((x94/x95)%x96));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x112 = -227403655108582LL;
	volatile uint32_t t7 = 4335U;

    t7 = (x109>>((x110/x111)%x112));

    if (t7 != 186125339U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x113 = 13394501U;
	int16_t x115 = INT16_MIN;
	uint32_t t8 = 5U;

    t8 = (x113>>((x114/x115)%x116));

    if (t8 != 13394501U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x125 = 2001944715LL;
	int8_t x126 = INT8_MAX;
	uint32_t x127 = 2754U;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int64_t t9 = 532730777198650058LL;

    t9 = (x125>>((x126/x127)%x128));

    if (t9 != 2001944715LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x134 = 3590434805603613988LL;
	int32_t x135 = 319;
	volatile int8_t x136 = -1;
	volatile uint64_t t10 = 133761LLU;

    t10 = (x133>>((x134/x135)%x136));

    if (t10 != 895016296848LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x141 = 0;
	volatile int8_t x142 = INT8_MAX;
	volatile uint32_t x143 = UINT32_MAX;
	uint32_t x144 = UINT32_MAX;
	static volatile int32_t t11 = -60;

    t11 = (x141>>((x142/x143)%x144));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x145 = 1;
	uint64_t x146 = 905LLU;
	int16_t x147 = INT16_MAX;
	static int32_t t12 = 25089;

    t12 = (x145>>((x146/x147)%x148));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x150 = 9;
	static volatile uint8_t x152 = 8U;
	volatile int32_t t13 = 2372411;

    t13 = (x149>>((x150/x151)%x152));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x153 = 3U;
	volatile int16_t x154 = 4;
	int64_t x155 = 318945LL;
	int32_t x156 = INT32_MIN;
	uint32_t t14 = 59973U;

    t14 = (x153>>((x154/x155)%x156));

    if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x157 = 628U;
	int32_t x158 = -61;
	uint16_t x159 = 1979U;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t15 = -25080;

    t15 = (x157>>((x158/x159)%x160));

    if (t15 != 628) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x174 = -20;
	uint64_t t16 = 19250460154LLU;

    t16 = (x173>>((x174/x175)%x176));

    if (t16 != 444444792153710448LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x209 = 1905LL;
	static int16_t x210 = 0;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t17 = -30076881857142345LL;

    t17 = (x209>>((x210/x211)%x212));

    if (t17 != 1905LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x213 = 25U;
	int32_t x214 = 26679301;
	static uint16_t x215 = 14329U;
	int8_t x216 = -4;
	static volatile int32_t t18 = -8211999;

    t18 = (x213>>((x214/x215)%x216));

    if (t18 != 12) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x220 = INT16_MIN;

    t19 = (x217>>((x218/x219)%x220));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x225 = INT32_MAX;
	static int32_t x226 = -1;
	int64_t x227 = -8582592309LL;
	static int32_t t20 = INT32_MAX;

    t20 = (x225>>((x226/x227)%x228));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x233 = INT32_MAX;
	uint16_t x234 = 733U;
	int8_t x235 = INT8_MAX;
	static uint16_t x236 = 23224U;

    t21 = (x233>>((x234/x235)%x236));

    if (t21 != 67108863) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x241 = INT32_MAX;
	static uint64_t x242 = 57764LLU;
	uint64_t x243 = 30547453961123644LLU;
	volatile int64_t x244 = -1LL;
	volatile int32_t t22 = INT32_MAX;

    t22 = (x241>>((x242/x243)%x244));

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x245 = INT16_MAX;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = -49LL;
	int32_t t23 = 0;

    t23 = (x245>>((x246/x247)%x248));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t t24 = -16184515378858LL;

    t24 = (x249>>((x250/x251)%x252));

    if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x257 = UINT16_MAX;
	volatile uint16_t x259 = 145U;
	static int64_t x260 = 25977663230131LL;
	volatile int32_t t25 = 96118610;

    t25 = (x257>>((x258/x259)%x260));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x261 = UINT32_MAX;
	uint16_t x262 = 1U;
	static volatile uint32_t t26 = UINT32_MAX;

    t26 = (x261>>((x262/x263)%x264));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x269 = 22U;
	volatile int32_t x271 = INT32_MIN;
	int8_t x272 = 1;
	int32_t t27 = -15230385;

    t27 = (x269>>((x270/x271)%x272));

    if (t27 != 22) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x274 = 23U;
	int32_t x275 = 350;
	int16_t x276 = INT16_MIN;
	static uint32_t t28 = 73452U;

    t28 = (x273>>((x274/x275)%x276));

    if (t28 != 263609987U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x281 = INT32_MAX;
	static int16_t x282 = INT16_MIN;
	int64_t x283 = -1LL;
	volatile uint8_t x284 = 1U;

    t29 = (x281>>((x282/x283)%x284));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x293 = 106332923582938LLU;
	int8_t x294 = -1;
	int8_t x295 = -44;
	static int8_t x296 = INT8_MAX;
	static volatile uint64_t t30 = 66775258243LLU;

    t30 = (x293>>((x294/x295)%x296));

    if (t30 != 106332923582938LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x298 = 329755150LLU;

    t31 = (x297>>((x298/x299)%x300));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x301 = 16041U;
	volatile int32_t x302 = -16478;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = 512030160402LLU;

    t32 = (x301>>((x302/x303)%x304));

    if (t32 != 16041) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x305 = 8176;
	static volatile uint8_t x306 = 30U;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MAX;
	volatile int32_t t33 = 3;

    t33 = (x305>>((x306/x307)%x308));

    if (t33 != 8176) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x313 = 2647;
	uint64_t x316 = 622606LLU;
	volatile int32_t t34 = 5956988;

    t34 = (x313>>((x314/x315)%x316));

    if (t34 != 2647) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x325 = 5098148U;
	int8_t x326 = 20;
	int16_t x328 = INT16_MIN;
	static uint32_t t35 = 1820U;

    t35 = (x325>>((x326/x327)%x328));

    if (t35 != 5098148U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x345 = 13;
	int64_t x346 = INT64_MAX;
	volatile int16_t x348 = -1;
	int32_t t36 = -7831;

    t36 = (x345>>((x346/x347)%x348));

    if (t36 != 13) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x373 = INT8_MAX;
	int8_t x374 = -1;
	static volatile int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	int32_t t37 = 3468;

    t37 = (x373>>((x374/x375)%x376));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x377 = 7U;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;

    t38 = (x377>>((x378/x379)%x380));

    if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x381 = 1296801211U;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t39 = 246U;

    t39 = (x381>>((x382/x383)%x384));

    if (t39 != 1296801211U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x405 = 190U;
	static uint32_t x406 = 3U;
	static volatile int8_t x407 = -1;
	uint32_t t40 = 187348U;

    t40 = (x405>>((x406/x407)%x408));

    if (t40 != 190U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x434 = 40;
	uint64_t x435 = 8290848311LLU;
	int64_t x436 = INT64_MIN;

    t41 = (x433>>((x434/x435)%x436));

    if (t41 != 148) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x437 = 6U;
	volatile int16_t x438 = -1;
	int64_t x439 = -11LL;
	int16_t x440 = INT16_MIN;
	volatile int32_t t42 = 410930;

    t42 = (x437>>((x438/x439)%x440));

    if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x445 = 0;
	int8_t x446 = INT8_MIN;
	int32_t t43 = -3;

    t43 = (x445>>((x446/x447)%x448));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x453 = 22U;
	static int8_t x454 = 1;
	uint32_t x455 = 342942542U;
	volatile uint16_t x456 = 17U;
	volatile uint32_t t44 = 14776283U;

    t44 = (x453>>((x454/x455)%x456));

    if (t44 != 22U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x465 = INT32_MAX;
	int32_t x467 = -1;
	static int16_t x468 = INT16_MAX;
	volatile int32_t t45 = -16684698;

    t45 = (x465>>((x466/x467)%x468));

    if (t45 != 1073741823) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x469 = INT8_MAX;
	static int16_t x470 = -1;
	int64_t x471 = -1LL;
	int32_t x472 = INT32_MAX;
	volatile int32_t t46 = 54281561;

    t46 = (x469>>((x470/x471)%x472));

    if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x477 = 3U;
	int64_t x479 = INT64_MAX;

    t47 = (x477>>((x478/x479)%x480));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x481 = 23600348768646263LL;
	int32_t x482 = -1;
	int16_t x483 = -1;
	uint8_t x484 = UINT8_MAX;
	int64_t t48 = 5LL;

    t48 = (x481>>((x482/x483)%x484));

    if (t48 != 11800174384323131LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x485 = 249LLU;
	uint8_t x486 = 3U;
	volatile uint32_t x487 = 388794U;
	static int8_t x488 = INT8_MIN;
	uint64_t t49 = 891323662551615LLU;

    t49 = (x485>>((x486/x487)%x488));

    if (t49 != 249LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x497 = 3007186029375LLU;
	int16_t x498 = -9;
	uint16_t x499 = 2469U;
	static uint64_t t50 = 1571104393210366989LLU;

    t50 = (x497>>((x498/x499)%x500));

    if (t50 != 3007186029375LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x505 = 0;
	int8_t x506 = -1;
	static int32_t x507 = -1;
	int16_t x508 = INT16_MIN;
	static volatile int32_t t51 = 966638;

    t51 = (x505>>((x506/x507)%x508));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x513 = 54U;
	volatile int64_t x515 = 51541123608LL;
	uint32_t x516 = 285277151U;
	int32_t t52 = -42130;

    t52 = (x513>>((x514/x515)%x516));

    if (t52 != 54) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x517 = 1;
	volatile uint32_t x518 = UINT32_MAX;
	int16_t x519 = -1;
	int32_t t53 = 120378;

    t53 = (x517>>((x518/x519)%x520));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x522 = 10U;
	volatile int64_t x523 = INT64_MAX;
	volatile int32_t t54 = 22559;

    t54 = (x521>>((x522/x523)%x524));

    if (t54 != 421) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x529 = 1528712LLU;
	int16_t x530 = INT16_MIN;
	uint64_t t55 = 47061732964349492LLU;

    t55 = (x529>>((x530/x531)%x532));

    if (t55 != 1528712LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x537 = 5U;
	uint64_t x538 = 6505241LLU;
	int64_t x539 = 15926177247LL;
	static int16_t x540 = INT16_MIN;
	int32_t t56 = -11215452;

    t56 = (x537>>((x538/x539)%x540));

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x541 = 2633751558806LLU;
	uint32_t x542 = 836U;
	uint8_t x543 = UINT8_MAX;
	uint64_t t57 = 352383812585LLU;

    t57 = (x541>>((x542/x543)%x544));

    if (t57 != 329218944850LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x545 = INT32_MAX;
	uint32_t x546 = 29U;
	uint16_t x547 = 4786U;
	static uint16_t x548 = UINT16_MAX;
	volatile int32_t t58 = INT32_MAX;

    t58 = (x545>>((x546/x547)%x548));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 931929649U;
	int64_t x556 = 4480736549389822LL;
	int32_t t59 = 491064;

    t59 = (x553>>((x554/x555)%x556));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x569 = INT64_MAX;
	static volatile int16_t x570 = INT16_MAX;
	int32_t x571 = INT32_MAX;
	int8_t x572 = -7;
	static volatile int64_t t60 = INT64_MAX;

    t60 = (x569>>((x570/x571)%x572));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x573 = 20U;
	int32_t x574 = -1;
	int8_t x576 = INT8_MIN;
	volatile int32_t t61 = 56041757;

    t61 = (x573>>((x574/x575)%x576));

    if (t61 != 20) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x577 = 8873568355009138LLU;
	int64_t x578 = INT64_MAX;
	volatile int64_t x579 = INT64_MIN;
	static int16_t x580 = INT16_MAX;
	uint64_t t62 = 55LLU;

    t62 = (x577>>((x578/x579)%x580));

    if (t62 != 8873568355009138LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x597 = 135942;
	int64_t x598 = 9569411674970445LL;
	uint32_t x599 = UINT32_MAX;
	int8_t x600 = -1;
	volatile int32_t t63 = 6337;

    t63 = (x597>>((x598/x599)%x600));

    if (t63 != 135942) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x609 = 12443115187031LLU;
	static int16_t x610 = INT16_MIN;
	uint8_t x611 = 1U;
	static int16_t x612 = INT16_MIN;
	static volatile uint64_t t64 = 20789779925LLU;

    t64 = (x609>>((x610/x611)%x612));

    if (t64 != 12443115187031LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x613 = 7368858173862208LLU;
	int16_t x614 = -1;
	int8_t x616 = INT8_MIN;

    t65 = (x613>>((x614/x615)%x616));

    if (t65 != 7368858173862208LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x621 = 24U;
	int32_t x622 = INT32_MIN;
	static int32_t x623 = INT32_MIN;
	volatile int32_t x624 = -1;
	volatile int32_t t66 = -191;

    t66 = (x621>>((x622/x623)%x624));

    if (t66 != 24) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x644 = UINT32_MAX;
	volatile int32_t t67 = 18685433;

    t67 = (x641>>((x642/x643)%x644));

    if (t67 != 50) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x665 = 365515U;
	uint8_t x667 = 27U;
	int16_t x668 = 1739;

    t68 = (x665>>((x666/x667)%x668));

    if (t68 != 365515U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x669 = INT32_MAX;
	static uint16_t x670 = 236U;
	static int32_t x671 = INT32_MIN;
	uint32_t x672 = 28919205U;
	int32_t t69 = INT32_MAX;

    t69 = (x669>>((x670/x671)%x672));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	uint16_t x690 = UINT16_MAX;
	int64_t x691 = INT64_MIN;
	uint8_t x692 = UINT8_MAX;
	static volatile int32_t t70 = 60821;

    t70 = (x689>>((x690/x691)%x692));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile int64_t x696 = 443753397950549LL;
	volatile uint64_t t71 = 288LLU;

    t71 = (x693>>((x694/x695)%x696));

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x698 = 43U;
	static int32_t x699 = INT32_MIN;
	int64_t x700 = INT64_MIN;
	static volatile int32_t t72 = -283;

    t72 = (x697>>((x698/x699)%x700));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x709 = 2U;
	int32_t x711 = INT32_MAX;
	int8_t x712 = 3;
	volatile int32_t t73 = -207;

    t73 = (x709>>((x710/x711)%x712));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x714 = 1U;
	volatile int8_t x715 = -4;
	int8_t x716 = INT8_MIN;
	volatile int32_t t74 = 1170848;

    t74 = (x713>>((x714/x715)%x716));

    if (t74 != 221) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x717 = 7460181228345993LLU;
	static int32_t x718 = -1;
	uint8_t x719 = UINT8_MAX;
	static int8_t x720 = INT8_MAX;
	uint64_t t75 = 97LLU;

    t75 = (x717>>((x718/x719)%x720));

    if (t75 != 7460181228345993LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x722 = 370114U;
	int64_t x723 = INT64_MIN;
	volatile int32_t x724 = INT32_MAX;
	volatile int32_t t76 = 0;

    t76 = (x721>>((x722/x723)%x724));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x733 = 984759955;
	int16_t x734 = -297;
	static volatile int16_t x735 = INT16_MIN;
	volatile int8_t x736 = -1;
	int32_t t77 = 540913;

    t77 = (x733>>((x734/x735)%x736));

    if (t77 != 984759955) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x741 = 63643752LLU;
	static volatile int64_t x742 = INT64_MAX;
	uint32_t x743 = 2933231U;
	int8_t x744 = INT8_MIN;
	static volatile uint64_t t78 = 426LLU;

    t78 = (x741>>((x742/x743)%x744));

    if (t78 != 31076LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x749 = UINT64_MAX;
	uint64_t x750 = 4609932573375747093LLU;
	int64_t x751 = -1LL;
	int32_t x752 = INT32_MIN;

    t79 = (x749>>((x750/x751)%x752));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x753 = 0U;
	int16_t x754 = -1;
	int8_t x755 = INT8_MIN;
	int32_t x756 = INT32_MIN;
	volatile int32_t t80 = 26253;

    t80 = (x753>>((x754/x755)%x756));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x770 = -1;
	uint8_t x771 = 29U;
	int8_t x772 = INT8_MIN;

    t81 = (x769>>((x770/x771)%x772));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x773 = 41U;
	static int32_t x774 = INT32_MIN;
	int8_t x775 = INT8_MIN;

    t82 = (x773>>((x774/x775)%x776));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x780 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = (x777>>((x778/x779)%x780));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x793 = 14U;
	int64_t x794 = -121200742940668LL;
	int8_t x795 = 17;
	volatile int32_t t84 = 63572;

    t84 = (x793>>((x794/x795)%x796));

    if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x797 = 19874996LL;
	int16_t x798 = INT16_MAX;
	int32_t x799 = INT32_MIN;
	volatile int64_t t85 = -16615704LL;

    t85 = (x797>>((x798/x799)%x800));

    if (t85 != 19874996LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x817 = 12U;
	uint64_t x818 = UINT64_MAX;
	volatile int8_t x819 = -1;
	static volatile uint32_t t86 = 49U;

    t86 = (x817>>((x818/x819)%x820));

    if (t86 != 6U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x830 = -1LL;
	int32_t x831 = INT32_MIN;
	int8_t x832 = INT8_MIN;
	int32_t t87 = 109971;

    t87 = (x829>>((x830/x831)%x832));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x837 = 27367U;
	int64_t x838 = 69765426074LL;
	int32_t t88 = -121;

    t88 = (x837>>((x838/x839)%x840));

    if (t88 != 27367) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x845 = UINT32_MAX;
	int16_t x846 = -1;
	static int32_t x848 = INT32_MIN;

    t89 = (x845>>((x846/x847)%x848));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x861 = UINT64_MAX;
	volatile int64_t x863 = INT64_MIN;
	static volatile uint32_t x864 = 3324669U;
	volatile uint64_t t90 = 409570063490853LLU;

    t90 = (x861>>((x862/x863)%x864));

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x889 = UINT64_MAX;
	uint16_t x890 = 108U;
	volatile uint64_t x892 = 161LLU;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (x889>>((x890/x891)%x892));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x961 = INT8_MAX;
	int32_t x962 = INT32_MIN;
	uint32_t x963 = 9950U;
	static int32_t t92 = -1478;

    t92 = (x961>>((x962/x963)%x964));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x965 = UINT32_MAX;
	int8_t x966 = INT8_MIN;
	volatile uint32_t t93 = UINT32_MAX;

    t93 = (x965>>((x966/x967)%x968));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x973 = INT32_MAX;
	uint16_t x974 = 278U;
	uint16_t x976 = 100U;
	static int32_t t94 = 934;

    t94 = (x973>>((x974/x975)%x976));

    if (t94 != 1073741823) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x977 = UINT32_MAX;
	volatile int16_t x978 = -6706;
	uint16_t x979 = 975U;

    t95 = (x977>>((x978/x979)%x980));

    if (t95 != 1048575U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x981 = 607104LL;
	uint64_t x982 = 15479038188592LLU;
	int8_t x983 = -1;
	static int64_t x984 = INT64_MAX;
	int64_t t96 = -70LL;

    t96 = (x981>>((x982/x983)%x984));

    if (t96 != 607104LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x985 = 1;
	static uint32_t x986 = 101204U;
	uint32_t x987 = 75U;
	volatile int8_t x988 = 32;
	volatile int32_t t97 = 608302;

    t97 = (x985>>((x986/x987)%x988));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x989 = 17047U;
	int16_t x991 = INT16_MIN;
	uint8_t x992 = 28U;
	int32_t t98 = -375412007;

    t98 = (x989>>((x990/x991)%x992));

    if (t98 != 66) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x997 = UINT64_MAX;
	int8_t x998 = INT8_MIN;
	uint32_t x999 = UINT32_MAX;
	uint8_t x1000 = 3U;

    t99 = (x997>>((x998/x999)%x1000));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x1006 = -127;
	int8_t x1007 = INT8_MAX;
	uint32_t x1008 = UINT32_MAX;
	volatile uint32_t t100 = 23U;

    t100 = (x1005>>((x1006/x1007)%x1008));

    if (t100 != 157U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x1010 = INT32_MIN;
	int64_t x1011 = INT64_MIN;
	int64_t t101 = INT64_MAX;

    t101 = (x1009>>((x1010/x1011)%x1012));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x1013 = INT32_MAX;
	uint64_t x1014 = 114380LLU;
	static int16_t x1015 = -1;
	uint32_t x1016 = 709039U;
	volatile int32_t t102 = INT32_MAX;

    t102 = (x1013>>((x1014/x1015)%x1016));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x1017 = INT64_MAX;
	int16_t x1018 = 513;
	uint16_t x1019 = UINT16_MAX;
	uint32_t x1020 = 511U;
	volatile int64_t t103 = INT64_MAX;

    t103 = (x1017>>((x1018/x1019)%x1020));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x1025 = 0;
	uint16_t x1026 = UINT16_MAX;
	static int16_t x1027 = INT16_MAX;
	int32_t x1028 = INT32_MIN;
	static volatile int32_t t104 = 204;

    t104 = (x1025>>((x1026/x1027)%x1028));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x1029 = 0;
	int16_t x1030 = 56;
	uint64_t x1031 = 2309062083500LLU;
	uint8_t x1032 = UINT8_MAX;
	volatile int32_t t105 = -63871;

    t105 = (x1029>>((x1030/x1031)%x1032));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x1054 = 2405LL;
	uint16_t x1055 = UINT16_MAX;
	uint16_t x1056 = UINT16_MAX;
	int32_t t106 = -955177940;

    t106 = (x1053>>((x1054/x1055)%x1056));

    if (t106 != 314) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x1062 = UINT8_MAX;
	int64_t x1063 = 2091038712949LL;
	int8_t x1064 = INT8_MIN;
	int32_t t107 = -12;

    t107 = (x1061>>((x1062/x1063)%x1064));

    if (t107 != 786) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x1069 = 326513504579996LL;
	static uint16_t x1070 = 6U;
	int64_t x1072 = INT64_MIN;

    t108 = (x1069>>((x1070/x1071)%x1072));

    if (t108 != 326513504579996LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x1077 = 17U;
	int32_t x1078 = -16;
	int8_t x1079 = 1;
	int8_t x1080 = 2;
	volatile int32_t t109 = 14318;

    t109 = (x1077>>((x1078/x1079)%x1080));

    if (t109 != 17) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x1081 = UINT64_MAX;
	volatile uint32_t x1082 = 0U;
	uint64_t t110 = UINT64_MAX;

    t110 = (x1081>>((x1082/x1083)%x1084));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x1085 = 9U;
	int16_t x1088 = INT16_MIN;
	int32_t t111 = 0;

    t111 = (x1085>>((x1086/x1087)%x1088));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x1105 = 22144904;
	volatile uint64_t x1106 = 11419927522LLU;
	int64_t x1107 = 13583308841LL;
	int64_t x1108 = -1LL;
	static volatile int32_t t112 = -927316;

    t112 = (x1105>>((x1106/x1107)%x1108));

    if (t112 != 22144904) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x1113 = 0U;
	volatile uint16_t x1114 = 7926U;
	int64_t x1115 = INT64_MIN;
	int32_t x1116 = 1775972;
	int32_t t113 = -283;

    t113 = (x1113>>((x1114/x1115)%x1116));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x1125 = 855079953LL;
	int16_t x1126 = -174;
	static uint64_t x1127 = UINT64_MAX;
	volatile int64_t t114 = -600374LL;

    t114 = (x1125>>((x1126/x1127)%x1128));

    if (t114 != 855079953LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x1129 = INT16_MAX;
	static int64_t x1130 = INT64_MIN;
	int8_t x1131 = 1;
	int8_t x1132 = INT8_MIN;
	volatile int32_t t115 = 60717949;

    t115 = (x1129>>((x1130/x1131)%x1132));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x1133 = INT64_MAX;
	static volatile int8_t x1134 = -1;
	static volatile int16_t x1135 = INT16_MIN;
	volatile int64_t t116 = INT64_MAX;

    t116 = (x1133>>((x1134/x1135)%x1136));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x1137 = UINT16_MAX;
	volatile uint8_t x1138 = UINT8_MAX;
	int64_t x1139 = INT64_MIN;
	int16_t x1140 = INT16_MIN;
	volatile int32_t t117 = 24;

    t117 = (x1137>>((x1138/x1139)%x1140));

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x1149 = 43U;
	uint16_t x1150 = UINT16_MAX;
	int32_t x1151 = -14596398;
	int64_t x1152 = -1LL;
	int32_t t118 = 1909;

    t118 = (x1149>>((x1150/x1151)%x1152));

    if (t118 != 43) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x1153 = 9U;
	uint8_t x1155 = 30U;
	volatile int8_t x1156 = -1;
	int32_t t119 = -29293248;

    t119 = (x1153>>((x1154/x1155)%x1156));

    if (t119 != 9) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x1157 = INT8_MAX;
	int8_t x1159 = INT8_MAX;
	static uint32_t x1160 = UINT32_MAX;
	volatile int32_t t120 = -379446151;

    t120 = (x1157>>((x1158/x1159)%x1160));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1165 = 28109;
	int16_t x1166 = -1;
	int16_t x1168 = INT16_MIN;
	int32_t t121 = 345;

    t121 = (x1165>>((x1166/x1167)%x1168));

    if (t121 != 14054) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1185 = 7566467884991714LLU;
	int32_t x1186 = INT32_MIN;
	uint64_t x1187 = UINT64_MAX;
	uint64_t t122 = 6LLU;

    t122 = (x1185>>((x1186/x1187)%x1188));

    if (t122 != 7566467884991714LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x1190 = -3781;
	uint16_t x1191 = UINT16_MAX;
	volatile int32_t x1192 = INT32_MIN;
	static int32_t t123 = -80888;

    t123 = (x1189>>((x1190/x1191)%x1192));

    if (t123 != 386938249) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x1213 = 604509546552779LL;
	int8_t x1214 = INT8_MIN;
	volatile int16_t x1215 = INT16_MIN;
	int32_t x1216 = INT32_MAX;

    t124 = (x1213>>((x1214/x1215)%x1216));

    if (t124 != 604509546552779LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1217 = 3U;
	int32_t x1218 = -1;
	int16_t x1220 = INT16_MIN;
	volatile int32_t t125 = 3802;

    t125 = (x1217>>((x1218/x1219)%x1220));

    if (t125 != 3) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x1221 = 0U;
	uint16_t x1222 = 3170U;
	volatile int64_t x1223 = 1031264074969308255LL;
	static uint64_t x1224 = UINT64_MAX;
	int32_t t126 = 547501;

    t126 = (x1221>>((x1222/x1223)%x1224));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1245 = UINT8_MAX;
	int8_t x1247 = INT8_MIN;
	uint32_t x1248 = 4470U;

    t127 = (x1245>>((x1246/x1247)%x1248));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1253 = 2U;
	int8_t x1254 = INT8_MIN;
	uint64_t x1256 = UINT64_MAX;
	static volatile int32_t t128 = 1;

    t128 = (x1253>>((x1254/x1255)%x1256));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1261 = 7;
	int64_t x1263 = INT64_MIN;
	int8_t x1264 = -1;
	static volatile int32_t t129 = 165;

    t129 = (x1261>>((x1262/x1263)%x1264));

    if (t129 != 7) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x1274 = 5429476001942LLU;
	volatile int32_t x1275 = -1;
	static uint64_t t130 = UINT64_MAX;

    t130 = (x1273>>((x1274/x1275)%x1276));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x1287 = INT8_MIN;
	uint16_t x1288 = UINT16_MAX;
	volatile uint32_t t131 = 2740U;

    t131 = (x1285>>((x1286/x1287)%x1288));

    if (t131 != 20936U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1305 = INT16_MAX;
	uint16_t x1307 = UINT16_MAX;
	volatile int32_t t132 = -33369776;

    t132 = (x1305>>((x1306/x1307)%x1308));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1313 = 6449178979812LLU;
	uint8_t x1314 = 6U;
	volatile int64_t x1315 = 265422LL;
	int16_t x1316 = INT16_MIN;
	volatile uint64_t t133 = 6203521951940LLU;

    t133 = (x1313>>((x1314/x1315)%x1316));

    if (t133 != 6449178979812LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t t134 = -371313;

    t134 = (x1317>>((x1318/x1319)%x1320));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1321 = 8711U;
	uint16_t x1322 = UINT16_MAX;
	int64_t x1323 = -97536978546647LL;
	uint16_t x1324 = 4U;
	volatile uint32_t t135 = 95664U;

    t135 = (x1321>>((x1322/x1323)%x1324));

    if (t135 != 8711U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1345 = 3U;
	static int16_t x1346 = -518;
	int32_t x1348 = -1;
	uint32_t t136 = 20322U;

    t136 = (x1345>>((x1346/x1347)%x1348));

    if (t136 != 3U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1353 = 789U;
	volatile int8_t x1355 = INT8_MAX;
	uint8_t x1356 = 2U;

    t137 = (x1353>>((x1354/x1355)%x1356));

    if (t137 != 789) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x1382 = INT8_MIN;
	int32_t x1383 = INT32_MIN;
	int32_t t138 = -703585452;

    t138 = (x1381>>((x1382/x1383)%x1384));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x1385 = UINT16_MAX;
	volatile uint8_t x1386 = 57U;
	static int32_t x1387 = INT32_MIN;
	int64_t x1388 = INT64_MAX;

    t139 = (x1385>>((x1386/x1387)%x1388));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x1389 = 3071361;
	volatile uint8_t x1390 = UINT8_MAX;
	int32_t x1391 = INT32_MIN;
	int32_t x1392 = 7;
	volatile int32_t t140 = 136880296;

    t140 = (x1389>>((x1390/x1391)%x1392));

    if (t140 != 3071361) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1393 = 98LL;
	static int8_t x1394 = INT8_MIN;
	volatile uint8_t x1395 = 100U;
	static int64_t x1396 = -1LL;

    t141 = (x1393>>((x1394/x1395)%x1396));

    if (t141 != 98LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x1397 = UINT64_MAX;
	static volatile int32_t x1398 = INT32_MIN;
	int32_t x1399 = 1;
	static uint64_t x1400 = 15LLU;
	uint64_t t142 = 7LLU;

    t142 = (x1397>>((x1398/x1399)%x1400));

    if (t142 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1401 = INT32_MAX;
	int16_t x1402 = 321;
	static uint64_t x1403 = 73LLU;
	int8_t x1404 = 1;
	int32_t t143 = INT32_MAX;

    t143 = (x1401>>((x1402/x1403)%x1404));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x1406 = INT8_MIN;
	static uint8_t x1408 = 1U;

    t144 = (x1405>>((x1406/x1407)%x1408));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x1414 = -1;
	int16_t x1415 = INT16_MIN;
	volatile int16_t x1416 = -1;
	uint32_t t145 = 11U;

    t145 = (x1413>>((x1414/x1415)%x1416));

    if (t145 != 317U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1417 = 48357988973LLU;
	uint16_t x1418 = 9U;
	uint64_t x1419 = 440294733828LLU;
	uint64_t t146 = 1LLU;

    t146 = (x1417>>((x1418/x1419)%x1420));

    if (t146 != 48357988973LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1421 = 1296029662LL;
	int64_t x1422 = -358194209635LL;
	int64_t x1423 = -212305995386387LL;
	int8_t x1424 = INT8_MIN;
	volatile int64_t t147 = 9264671LL;

    t147 = (x1421>>((x1422/x1423)%x1424));

    if (t147 != 1296029662LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x1429 = 2903U;
	volatile uint32_t x1430 = 358U;
	uint32_t x1431 = 34079686U;
	int32_t x1432 = 240022177;
	volatile int32_t t148 = 195;

    t148 = (x1429>>((x1430/x1431)%x1432));

    if (t148 != 2903) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1434 = INT16_MAX;
	volatile int8_t x1436 = INT8_MAX;
	int32_t t149 = 218711686;

    t149 = (x1433>>((x1434/x1435)%x1436));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1441 = 5U;
	uint32_t x1442 = 280540U;
	int32_t x1443 = INT32_MIN;
	volatile int16_t x1444 = 11;
	int32_t t150 = -10221;

    t150 = (x1441>>((x1442/x1443)%x1444));

    if (t150 != 5) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1485 = 25U;
	int32_t x1486 = 314;
	volatile int8_t x1487 = 23;
	volatile uint32_t t151 = 0U;

    t151 = (x1485>>((x1486/x1487)%x1488));

    if (t151 != 12U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x1493 = 632856;
	static uint64_t x1494 = UINT64_MAX;
	uint32_t x1496 = 926112U;
	int32_t t152 = 24008;

    t152 = (x1493>>((x1494/x1495)%x1496));

    if (t152 != 316428) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x1506 = 30;
	static int64_t x1507 = -1LL;
	int8_t x1508 = 2;
	int32_t t153 = 3561;

    t153 = (x1505>>((x1506/x1507)%x1508));

    if (t153 != 229) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x1509 = INT16_MAX;
	int16_t x1511 = INT16_MIN;
	volatile int32_t t154 = 457281;

    t154 = (x1509>>((x1510/x1511)%x1512));

    if (t154 != 16383) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x1513 = UINT16_MAX;
	volatile int32_t x1514 = -2;
	static uint8_t x1516 = UINT8_MAX;
	int32_t t155 = -18;

    t155 = (x1513>>((x1514/x1515)%x1516));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1518 = -1LL;
	int32_t x1519 = -1;
	static int16_t x1520 = INT16_MIN;
	static volatile int32_t t156 = -24;

    t156 = (x1517>>((x1518/x1519)%x1520));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x1537 = INT32_MAX;
	int16_t x1538 = INT16_MAX;
	int32_t x1539 = INT32_MIN;
	static int64_t x1540 = -86313LL;
	volatile int32_t t157 = INT32_MAX;

    t157 = (x1537>>((x1538/x1539)%x1540));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1541 = INT64_MAX;
	uint32_t x1542 = 6U;
	volatile int8_t x1544 = INT8_MIN;

    t158 = (x1541>>((x1542/x1543)%x1544));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1549 = INT32_MAX;
	int64_t x1550 = INT64_MIN;
	uint64_t x1551 = UINT64_MAX;
	int8_t x1552 = -39;
	volatile int32_t t159 = INT32_MAX;

    t159 = (x1549>>((x1550/x1551)%x1552));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1561 = 178486537153481LL;
	uint16_t x1562 = 30U;
	volatile int32_t x1563 = INT32_MIN;
	static uint8_t x1564 = UINT8_MAX;
	volatile int64_t t160 = 576LL;

    t160 = (x1561>>((x1562/x1563)%x1564));

    if (t160 != 178486537153481LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1565 = 25549749474956LL;
	int16_t x1566 = INT16_MIN;
	uint32_t x1567 = 130739U;
	volatile uint32_t x1568 = 1U;
	static int64_t t161 = 0LL;

    t161 = (x1565>>((x1566/x1567)%x1568));

    if (t161 != 25549749474956LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1578 = 42U;
	int64_t x1579 = -15286LL;
	int8_t x1580 = INT8_MIN;
	uint64_t t162 = 968245939896573980LLU;

    t162 = (x1577>>((x1578/x1579)%x1580));

    if (t162 != 197444604177LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x1589 = 502U;
	uint64_t x1590 = 2038738LLU;
	int32_t x1591 = INT32_MIN;
	int16_t x1592 = INT16_MAX;
	int32_t t163 = -1149;

    t163 = (x1589>>((x1590/x1591)%x1592));

    if (t163 != 502) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1594 = 16334LLU;
	uint64_t t164 = 35LLU;

    t164 = (x1593>>((x1594/x1595)%x1596));

    if (t164 != 37695578659890205LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1617 = INT32_MAX;
	static int32_t x1618 = 0;
	volatile int32_t t165 = INT32_MAX;

    t165 = (x1617>>((x1618/x1619)%x1620));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x1625 = 78U;
	uint16_t x1626 = UINT16_MAX;
	volatile int32_t x1627 = INT32_MIN;
	int64_t x1628 = -154645851477443786LL;
	static int32_t t166 = 5654;

    t166 = (x1625>>((x1626/x1627)%x1628));

    if (t166 != 78) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1631 = 197404101432390691LLU;
	volatile uint64_t x1632 = 9LLU;
	volatile int32_t t167 = -4;

    t167 = (x1629>>((x1630/x1631)%x1632));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1633 = UINT16_MAX;
	volatile uint32_t x1634 = UINT32_MAX;
	int32_t x1635 = INT32_MAX;
	int16_t x1636 = INT16_MIN;
	int32_t t168 = 1;

    t168 = (x1633>>((x1634/x1635)%x1636));

    if (t168 != 16383) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1661 = 6;
	int16_t x1663 = INT16_MIN;
	static int8_t x1664 = -1;
	int32_t t169 = -211730542;

    t169 = (x1661>>((x1662/x1663)%x1664));

    if (t169 != 6) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x1665 = 96U;
	volatile int8_t x1666 = INT8_MAX;
	int32_t x1667 = -19804110;
	uint64_t x1668 = 4LLU;

    t170 = (x1665>>((x1666/x1667)%x1668));

    if (t170 != 96) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1673 = 6557U;
	static uint8_t x1674 = UINT8_MAX;
	int32_t x1675 = INT32_MIN;
	int64_t x1676 = INT64_MAX;
	int32_t t171 = 0;

    t171 = (x1673>>((x1674/x1675)%x1676));

    if (t171 != 6557) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1677 = 42U;
	static uint8_t x1678 = UINT8_MAX;
	int64_t x1680 = 942503204259327715LL;
	volatile int32_t t172 = 99;

    t172 = (x1677>>((x1678/x1679)%x1680));

    if (t172 != 42) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1693 = INT32_MAX;
	static int32_t x1694 = -1;
	uint16_t x1695 = UINT16_MAX;
	static int16_t x1696 = 528;
	int32_t t173 = INT32_MAX;

    t173 = (x1693>>((x1694/x1695)%x1696));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1713 = UINT8_MAX;
	static uint8_t x1714 = 3U;
	volatile uint64_t x1715 = 16107680052728372LLU;

    t174 = (x1713>>((x1714/x1715)%x1716));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x1726 = -2429LL;
	int16_t x1727 = INT16_MIN;
	volatile int32_t t175 = 466;

    t175 = (x1725>>((x1726/x1727)%x1728));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x1729 = INT16_MAX;
	uint32_t x1730 = UINT32_MAX;
	int16_t x1731 = -125;
	static int16_t x1732 = -15;

    t176 = (x1729>>((x1730/x1731)%x1732));

    if (t176 != 16383) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1761 = INT16_MAX;
	uint16_t x1762 = 2U;
	static uint16_t x1763 = UINT16_MAX;
	int32_t x1764 = INT32_MIN;

    t177 = (x1761>>((x1762/x1763)%x1764));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1765 = UINT64_MAX;
	volatile int8_t x1766 = -1;
	volatile int32_t x1767 = INT32_MIN;

    t178 = (x1765>>((x1766/x1767)%x1768));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1769 = 1391U;
	volatile int16_t x1770 = 1;
	int16_t x1771 = INT16_MAX;
	int8_t x1772 = 23;
	volatile uint32_t t179 = 15662203U;

    t179 = (x1769>>((x1770/x1771)%x1772));

    if (t179 != 1391U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1773 = INT8_MAX;
	int32_t x1774 = -407014;
	int16_t x1775 = -1;
	uint8_t x1776 = 30U;
	volatile int32_t t180 = 52144;

    t180 = (x1773>>((x1774/x1775)%x1776));

    if (t180 != 7) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1777 = 50;
	int32_t x1778 = INT32_MIN;
	uint64_t x1780 = 103803007947430322LLU;
	volatile int32_t t181 = -1;

    t181 = (x1777>>((x1778/x1779)%x1780));

    if (t181 != 50) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1809 = 1;
	int32_t x1810 = INT32_MIN;
	static int64_t x1811 = INT64_MAX;
	uint8_t x1812 = UINT8_MAX;
	int32_t t182 = 201;

    t182 = (x1809>>((x1810/x1811)%x1812));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1821 = 10226288LL;
	volatile uint32_t x1822 = 142U;
	uint16_t x1823 = 37U;
	int8_t x1824 = -1;
	static volatile int64_t t183 = -1524680724232328731LL;

    t183 = (x1821>>((x1822/x1823)%x1824));

    if (t183 != 1278286LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1829 = INT8_MAX;
	int32_t x1830 = -1;
	volatile uint64_t x1831 = 1094435LLU;
	volatile uint16_t x1832 = 6U;
	volatile int32_t t184 = 103337;

    t184 = (x1829>>((x1830/x1831)%x1832));

    if (t184 != 63) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1857 = INT16_MAX;
	int8_t x1859 = INT8_MIN;
	int64_t x1860 = INT64_MIN;
	int32_t t185 = 69;

    t185 = (x1857>>((x1858/x1859)%x1860));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1873 = 187872723776LLU;
	int8_t x1874 = INT8_MAX;
	static uint32_t x1875 = UINT32_MAX;
	int16_t x1876 = 1802;
	volatile uint64_t t186 = 1217426697LLU;

    t186 = (x1873>>((x1874/x1875)%x1876));

    if (t186 != 187872723776LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1877 = 22074523U;
	volatile int32_t x1879 = INT32_MAX;
	int8_t x1880 = INT8_MAX;
	uint32_t t187 = 12U;

    t187 = (x1877>>((x1878/x1879)%x1880));

    if (t187 != 22074523U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1885 = 2U;
	int8_t x1887 = -1;
	int8_t x1888 = -1;
	static volatile int32_t t188 = 406150468;

    t188 = (x1885>>((x1886/x1887)%x1888));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1894 = 7433253468890081308LLU;
	int64_t x1895 = -28710528874LL;
	uint16_t x1896 = UINT16_MAX;

    t189 = (x1893>>((x1894/x1895)%x1896));

    if (t189 != 234) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1897 = 781U;
	int16_t x1898 = INT16_MIN;
	uint16_t x1899 = 2U;
	int8_t x1900 = INT8_MIN;
	volatile uint32_t t190 = 234181U;

    t190 = (x1897>>((x1898/x1899)%x1900));

    if (t190 != 781U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1905 = 3243U;
	int8_t x1906 = INT8_MIN;
	uint8_t x1908 = 78U;
	int32_t t191 = -1621453;

    t191 = (x1905>>((x1906/x1907)%x1908));

    if (t191 != 3243) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1910 = 606LLU;
	volatile int8_t x1911 = INT8_MIN;
	int32_t t192 = 26;

    t192 = (x1909>>((x1910/x1911)%x1912));

    if (t192 != 10543428) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1949 = INT16_MAX;
	volatile int8_t x1950 = INT8_MIN;
	static int64_t x1951 = INT64_MAX;
	static volatile uint64_t x1952 = 923LLU;
	volatile int32_t t193 = 4;

    t193 = (x1949>>((x1950/x1951)%x1952));

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1953 = 199U;
	uint32_t x1954 = 11U;
	static int8_t x1956 = 22;
	static int32_t t194 = 1;

    t194 = (x1953>>((x1954/x1955)%x1956));

    if (t194 != 199) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1962 = INT64_MIN;
	static int64_t x1963 = INT64_MIN;
	int64_t x1964 = -821911LL;
	volatile int32_t t195 = -64412;

    t195 = (x1961>>((x1962/x1963)%x1964));

    if (t195 != 1073741823) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1965 = 204;
	volatile uint32_t x1966 = UINT32_MAX;
	int32_t x1967 = INT32_MIN;
	static volatile int8_t x1968 = INT8_MIN;
	static volatile int32_t t196 = 422103;

    t196 = (x1965>>((x1966/x1967)%x1968));

    if (t196 != 102) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1973 = UINT32_MAX;
	uint8_t x1975 = 54U;
	int8_t x1976 = -1;
	static uint32_t t197 = UINT32_MAX;

    t197 = (x1973>>((x1974/x1975)%x1976));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1977 = 317376LLU;
	uint16_t x1979 = 48U;
	int32_t x1980 = INT32_MIN;

    t198 = (x1977>>((x1978/x1979)%x1980));

    if (t198 != 4959LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1986 = -4;
	int16_t x1987 = INT16_MIN;
	int16_t x1988 = -3347;
	int32_t t199 = 30976;

    t199 = (x1985>>((x1986/x1987)%x1988));

    if (t199 != 65535) { NG(); } else { ; }
	
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

