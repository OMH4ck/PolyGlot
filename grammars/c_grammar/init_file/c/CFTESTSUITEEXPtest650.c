
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

uint64_t x10 = 2963052LLU;
int16_t x11 = -1;
int16_t x24 = INT16_MIN;
uint32_t x33 = UINT32_MAX;
uint64_t x35 = UINT64_MAX;
static int64_t x36 = INT64_MAX;
volatile uint32_t t2 = 710983U;
uint32_t x49 = 312021U;
int16_t x60 = INT16_MIN;
int32_t x67 = INT32_MAX;
int8_t x68 = INT8_MAX;
static int8_t x98 = INT8_MIN;
uint64_t x108 = 11LLU;
volatile int32_t t8 = 33;
int32_t x126 = -6;
int16_t x147 = -1475;
static volatile uint32_t t15 = UINT32_MAX;
uint32_t x185 = 0U;
int8_t x186 = -1;
int64_t t17 = INT64_MAX;
int8_t x211 = INT8_MAX;
int32_t x212 = 5;
volatile uint16_t x215 = UINT16_MAX;
int32_t t21 = 11;
static int64_t x226 = -1LL;
uint32_t x227 = UINT32_MAX;
int8_t x240 = 1;
uint32_t x247 = UINT32_MAX;
volatile int32_t x275 = INT32_MAX;
int32_t x276 = -1;
int8_t x283 = INT8_MAX;
static volatile int64_t t29 = INT64_MAX;
volatile int8_t x303 = INT8_MIN;
int32_t x322 = -1;
int32_t t32 = 2183134;
int16_t x328 = INT16_MAX;
static int32_t x344 = 5;
int32_t x362 = -1;
int8_t x364 = 1;
uint8_t x401 = 47U;
static int32_t x403 = -1;
uint16_t x404 = UINT16_MAX;
uint32_t x406 = UINT32_MAX;
uint32_t x408 = 32U;
static int8_t x422 = 3;
static int32_t x424 = -1;
int64_t t40 = -2813322565LL;
static int16_t x426 = -1;
uint16_t x427 = 538U;
uint32_t t42 = 27U;
int64_t x443 = 15LL;
uint16_t x444 = UINT16_MAX;
int8_t x445 = 4;
int8_t x446 = INT8_MIN;
int16_t x447 = INT16_MIN;
int32_t t45 = -33;
int16_t x454 = 11;
int32_t x455 = INT32_MAX;
static int8_t x456 = INT8_MIN;
uint64_t x465 = 2284256446777077LLU;
static volatile uint16_t x485 = 26U;
static int64_t x486 = INT64_MAX;
volatile uint32_t x507 = UINT32_MAX;
uint64_t x517 = 414551095LLU;
int16_t x530 = INT16_MIN;
volatile int16_t x572 = INT16_MAX;
uint8_t x589 = 1U;
volatile int8_t x600 = -1;
static int32_t x610 = -1;
uint16_t x626 = 22U;
static volatile int32_t x627 = INT32_MIN;
uint16_t x628 = 247U;
uint32_t x648 = UINT32_MAX;
int64_t x684 = INT64_MAX;
static int32_t x685 = 0;
uint64_t x686 = 6LLU;
int32_t x687 = INT32_MAX;
int8_t x690 = -1;
int64_t t67 = INT64_MAX;
int16_t x731 = -1;
uint32_t x732 = 1163307497U;
volatile uint64_t t69 = UINT64_MAX;
static volatile uint8_t x749 = 4U;
int64_t x750 = INT64_MIN;
int64_t x751 = INT64_MIN;
volatile int32_t x752 = -1;
uint64_t x761 = UINT64_MAX;
volatile int32_t x780 = 1;
int32_t t73 = -56943999;
uint64_t x783 = 3023192999LLU;
int16_t x798 = INT16_MIN;
volatile uint8_t x808 = 4U;
int16_t x823 = 1296;
int32_t x826 = 0;
static uint64_t x827 = 420233123729785LLU;
uint16_t x828 = 22U;
static int32_t t79 = -93834618;
int64_t x866 = INT64_MAX;
static volatile uint64_t t80 = 172LLU;
int8_t x877 = INT8_MAX;
static uint64_t x883 = 3910715LLU;
int64_t x885 = INT64_MAX;
int16_t x886 = INT16_MAX;
static volatile int64_t x887 = INT64_MIN;
uint32_t t85 = UINT32_MAX;
uint32_t x926 = 51382U;
uint32_t x929 = 39759144U;
uint64_t x932 = UINT64_MAX;
volatile uint8_t x941 = 7U;
uint16_t x944 = 11U;
uint16_t x949 = 0U;
static int32_t t89 = -234651;
uint8_t x986 = 4U;
int16_t x988 = INT16_MIN;
volatile int32_t t92 = 14599895;
static int8_t x995 = INT8_MAX;
uint8_t x1010 = 7U;
int16_t x1037 = INT16_MAX;
int16_t x1043 = -2;
static volatile int8_t x1052 = INT8_MAX;
uint8_t x1075 = UINT8_MAX;
int16_t x1083 = -240;
int32_t x1085 = 131492112;
static volatile int16_t x1087 = INT16_MIN;
uint8_t x1094 = UINT8_MAX;
static int64_t t105 = -278LL;
int64_t x1129 = 219782681679089371LL;
volatile int64_t t106 = 17067579610114809LL;
int64_t x1139 = INT64_MIN;
uint64_t x1153 = 7718602240917981054LLU;
int16_t x1175 = INT16_MIN;
uint8_t x1202 = 18U;
uint32_t t111 = UINT32_MAX;
int32_t t112 = 47;
uint16_t x1257 = 6U;
int32_t x1259 = -70832493;
volatile int32_t x1272 = INT32_MIN;
int16_t x1298 = -1;
static uint16_t x1299 = 3U;
static int32_t t117 = 510077516;
int64_t x1323 = INT64_MAX;
volatile int8_t x1324 = -1;
int8_t x1325 = 0;
volatile uint32_t x1326 = UINT32_MAX;
volatile int32_t t119 = -3;
uint64_t x1351 = UINT64_MAX;
volatile int32_t t120 = 3909081;
volatile uint8_t x1357 = 5U;
int64_t x1359 = INT64_MAX;
int16_t x1389 = INT16_MAX;
volatile int16_t x1391 = -1;
int32_t t122 = 55809703;
volatile int64_t x1396 = INT64_MIN;
uint32_t x1415 = UINT32_MAX;
int16_t x1442 = INT16_MIN;
uint8_t x1444 = 1U;
volatile uint8_t x1509 = 1U;
int16_t x1510 = INT16_MIN;
int8_t x1511 = INT8_MAX;
int64_t x1520 = 155080786396609930LL;
volatile int32_t t133 = 8027;
int8_t x1538 = INT8_MAX;
uint8_t x1590 = 0U;
int64_t x1592 = -26LL;
int64_t t138 = 1504358209594730799LL;
int32_t t140 = 70575;
int16_t x1627 = INT16_MIN;
int64_t x1628 = -1LL;
static uint64_t t141 = 163506422LLU;
uint16_t x1650 = UINT16_MAX;
volatile uint64_t x1662 = UINT64_MAX;
int16_t x1686 = -37;
volatile int16_t x1713 = INT16_MAX;
int64_t x1750 = INT64_MIN;
int16_t x1751 = INT16_MIN;
volatile uint16_t x1754 = 7U;
uint16_t x1757 = 331U;
int8_t x1758 = 1;
static int16_t x1766 = INT16_MIN;
int32_t t157 = 170047885;
int16_t x1806 = -1;
volatile int64_t x1815 = INT64_MAX;
volatile int32_t t161 = 1;
static uint8_t x1817 = 8U;
int8_t x1818 = INT8_MAX;
int64_t x1819 = INT64_MIN;
int8_t x1820 = -51;
int32_t x1824 = INT32_MIN;
static volatile uint32_t t164 = 1480289074U;
volatile int32_t t165 = -18292;
int8_t x1842 = -4;
static uint8_t x1878 = 1U;
static int8_t x1892 = INT8_MIN;
int8_t x1896 = 1;
static int8_t x1908 = INT8_MIN;
int32_t t172 = 36958449;
int8_t x1918 = -40;
static volatile uint16_t x1920 = UINT16_MAX;
volatile int32_t t174 = 31;
volatile int32_t t176 = -220681;
int16_t x1942 = -1;
uint16_t x1953 = 2U;
int64_t x1954 = -1LL;
int32_t x1963 = 41;
volatile int32_t t181 = -23188;
uint64_t t183 = 3862868661044958353LLU;
static int8_t x2006 = -1;
static uint16_t x2007 = 10U;
volatile int32_t t184 = 11148;
int32_t x2033 = INT32_MAX;
int32_t t185 = INT32_MAX;
uint32_t x2068 = 1U;
int64_t x2077 = INT64_MAX;
int32_t t190 = INT32_MAX;
static int16_t x2116 = INT16_MIN;
volatile uint32_t t193 = UINT32_MAX;
uint16_t x2149 = 1U;
uint32_t x2165 = 14U;
volatile int64_t x2199 = -709922453LL;


void f0(void) {
    	int32_t x9 = INT32_MAX;
	int16_t x12 = INT16_MAX;
	static int32_t t0 = INT32_MAX;

    t0 = (x9<<((x10/x11)%x12));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x21 = 51U;
	uint64_t x22 = 39002671059LLU;
	int64_t x23 = INT64_MIN;
	int32_t t1 = 69052;

    t1 = (x21<<((x22/x23)%x24));

    if (t1 != 51) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x34 = -1;

    t2 = (x33<<((x34/x35)%x36));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x50 = INT16_MAX;
	uint32_t x51 = 4153365U;
	volatile int16_t x52 = INT16_MIN;
	uint32_t t3 = 7U;

    t3 = (x49<<((x50/x51)%x52));

    if (t3 != 312021U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x57 = 8U;
	uint8_t x58 = 127U;
	uint32_t x59 = UINT32_MAX;
	int32_t t4 = -170;

    t4 = (x57<<((x58/x59)%x60));

    if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x65 = 40;
	static int8_t x66 = INT8_MAX;
	volatile int32_t t5 = -49;

    t5 = (x65<<((x66/x67)%x68));

    if (t5 != 40) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x97 = 35U;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t6 = -1512952;

    t6 = (x97<<((x98/x99)%x100));

    if (t6 != 35) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int16_t x106 = -1324;
	int64_t x107 = -4735240239413047LL;
	volatile int32_t t7 = 2819;

    t7 = (x105<<((x106/x107)%x108));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x113 = 15;
	int32_t x114 = INT32_MAX;
	uint32_t x115 = 1898840543U;
	uint32_t x116 = UINT32_MAX;

    t8 = (x113<<((x114/x115)%x116));

    if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x125 = 0;
	static uint8_t x127 = 53U;
	int64_t x128 = INT64_MAX;
	int32_t t9 = 0;

    t9 = (x125<<((x126/x127)%x128));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x129 = 0U;
	uint64_t x130 = 81LLU;
	static uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 34U;
	volatile uint32_t t10 = 242722U;

    t10 = (x129<<((x130/x131)%x132));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x133 = 202LLU;
	uint32_t x134 = 9019U;
	volatile int8_t x135 = INT8_MIN;
	int16_t x136 = 73;
	volatile uint64_t t11 = 2132LLU;

    t11 = (x133<<((x134/x135)%x136));

    if (t11 != 202LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x145 = 63561855LL;
	volatile int32_t x146 = -25;
	uint8_t x148 = 3U;
	static volatile int64_t t12 = -3LL;

    t12 = (x145<<((x146/x147)%x148));

    if (t12 != 63561855LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x149 = 14U;
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = 2U;
	static volatile int32_t t13 = 1537;

    t13 = (x149<<((x150/x151)%x152));

    if (t13 != 14) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x177 = 2884U;
	volatile int16_t x178 = INT16_MAX;
	uint16_t x179 = 29U;
	int8_t x180 = -1;
	int32_t t14 = -123;

    t14 = (x177<<((x178/x179)%x180));

    if (t14 != 2884) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	int32_t x182 = -7;
	int8_t x183 = INT8_MIN;
	volatile int32_t x184 = INT32_MIN;

    t15 = (x181<<((x182/x183)%x184));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x187 = INT16_MIN;
	static int64_t x188 = -1LL;
	uint32_t t16 = 203288188U;

    t16 = (x185<<((x186/x187)%x188));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x189 = INT64_MAX;
	uint8_t x190 = 13U;
	int64_t x191 = INT64_MAX;
	int16_t x192 = -1;

    t17 = (x189<<((x190/x191)%x192));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x197 = 90U;
	int8_t x198 = 26;
	int32_t x199 = 2;
	static uint8_t x200 = UINT8_MAX;
	int32_t t18 = -1;

    t18 = (x197<<((x198/x199)%x200));

    if (t18 != 737280) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x209 = 13U;
	uint16_t x210 = 102U;
	volatile int32_t t19 = 7622;

    t19 = (x209<<((x210/x211)%x212));

    if (t19 != 13) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x213 = 3U;
	volatile int32_t x214 = -1;
	uint32_t x216 = 6231531U;
	uint32_t t20 = 5U;

    t20 = (x213<<((x214/x215)%x216));

    if (t20 != 3U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x217 = 0;
	volatile uint8_t x218 = 1U;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -1;

    t21 = (x217<<((x218/x219)%x220));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x225 = INT8_MAX;
	uint8_t x228 = UINT8_MAX;
	int32_t t22 = -236;

    t22 = (x225<<((x226/x227)%x228));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x237 = INT32_MAX;
	int16_t x238 = -1;
	int8_t x239 = -7;
	volatile int32_t t23 = INT32_MAX;

    t23 = (x237<<((x238/x239)%x240));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x245 = UINT32_MAX;
	uint32_t x246 = 0U;
	uint64_t x248 = 55858808496LLU;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = (x245<<((x246/x247)%x248));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x261 = 2677070625980446LLU;
	volatile uint8_t x262 = UINT8_MAX;
	int32_t x263 = 2624515;
	static int32_t x264 = 1916;
	static volatile uint64_t t25 = 54211689443463LLU;

    t25 = (x261<<((x262/x263)%x264));

    if (t25 != 2677070625980446LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x265 = INT16_MAX;
	int32_t x266 = -1;
	static int32_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	int32_t t26 = 3;

    t26 = (x265<<((x266/x267)%x268));

    if (t26 != 65534) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x273 = 58906159545918LL;
	uint8_t x274 = 25U;
	int64_t t27 = -3513203LL;

    t27 = (x273<<((x274/x275)%x276));

    if (t27 != 58906159545918LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x277 = 790211481748494LLU;
	volatile uint8_t x278 = 5U;
	uint64_t x279 = 56366734LLU;
	int16_t x280 = INT16_MIN;
	uint64_t t28 = 311461621080745LLU;

    t28 = (x277<<((x278/x279)%x280));

    if (t28 != 790211481748494LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x281 = INT64_MAX;
	uint16_t x282 = 4640U;
	volatile int8_t x284 = -1;

    t29 = (x281<<((x282/x283)%x284));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	static volatile int8_t x296 = -6;
	int32_t t30 = -9;

    t30 = (x293<<((x294/x295)%x296));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MAX;
	static int8_t x304 = INT8_MAX;
	uint32_t t31 = UINT32_MAX;

    t31 = (x301<<((x302/x303)%x304));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x321 = 6339U;
	volatile int8_t x323 = INT8_MIN;
	static uint64_t x324 = UINT64_MAX;

    t32 = (x321<<((x322/x323)%x324));

    if (t32 != 6339) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x325 = 697687462U;
	volatile int16_t x326 = INT16_MIN;
	static int32_t x327 = INT32_MIN;
	volatile uint32_t t33 = 3465U;

    t33 = (x325<<((x326/x327)%x328));

    if (t33 != 697687462U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x341 = INT64_MAX;
	uint16_t x342 = 5U;
	volatile int64_t x343 = 1313681LL;
	static volatile int64_t t34 = INT64_MAX;

    t34 = (x341<<((x342/x343)%x344));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x361 = 29769U;
	static int8_t x363 = -1;
	int32_t t35 = -7;

    t35 = (x361<<((x362/x363)%x364));

    if (t35 != 29769) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x373 = 81U;
	volatile int16_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int32_t x376 = -631550313;
	volatile int32_t t36 = -62;

    t36 = (x373<<((x374/x375)%x376));

    if (t36 != 81) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x402 = UINT64_MAX;
	int32_t t37 = -122370399;

    t37 = (x401<<((x402/x403)%x404));

    if (t37 != 94) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x405 = 4898985842884788LLU;
	static int32_t x407 = INT32_MIN;
	uint64_t t38 = 48108476801132318LLU;

    t38 = (x405<<((x406/x407)%x408));

    if (t38 != 9797971685769576LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x413 = UINT16_MAX;
	int64_t x414 = INT64_MAX;
	static int16_t x415 = 2579;
	int8_t x416 = -4;
	volatile int32_t t39 = -251940;

    t39 = (x413<<((x414/x415)%x416));

    if (t39 != 262140) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x421 = 1302704626LL;
	uint16_t x423 = UINT16_MAX;

    t40 = (x421<<((x422/x423)%x424));

    if (t40 != 1302704626LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x425 = 82U;
	int8_t x428 = -1;
	volatile uint32_t t41 = 390880190U;

    t41 = (x425<<((x426/x427)%x428));

    if (t41 != 82U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x429 = 21U;
	int16_t x430 = 3;
	uint32_t x431 = 906U;
	static uint64_t x432 = UINT64_MAX;

    t42 = (x429<<((x430/x431)%x432));

    if (t42 != 21U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x433 = 1469211U;
	int32_t x434 = INT32_MAX;
	uint32_t x435 = UINT32_MAX;
	uint16_t x436 = 56U;
	uint32_t t43 = 5964U;

    t43 = (x433<<((x434/x435)%x436));

    if (t43 != 1469211U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x441 = 3024515532871197LL;
	static uint64_t x442 = 2LLU;
	int64_t t44 = -985LL;

    t44 = (x441<<((x442/x443)%x444));

    if (t44 != 3024515532871197LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x448 = -1;

    t45 = (x445<<((x446/x447)%x448));

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x453 = 82187;
	volatile int32_t t46 = -828601165;

    t46 = (x453<<((x454/x455)%x456));

    if (t46 != 82187) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x466 = -1;
	volatile int8_t x467 = -1;
	static int16_t x468 = INT16_MAX;
	uint64_t t47 = 380142284LLU;

    t47 = (x465<<((x466/x467)%x468));

    if (t47 != 4568512893554154LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x487 = INT32_MAX;
	static volatile int16_t x488 = -1;
	volatile int32_t t48 = 2019;

    t48 = (x485<<((x486/x487)%x488));

    if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x505 = 13786011LL;
	uint16_t x506 = 11U;
	uint8_t x508 = 46U;
	static volatile int64_t t49 = 7LL;

    t49 = (x505<<((x506/x507)%x508));

    if (t49 != 13786011LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x518 = -1LL;
	uint32_t x519 = 26U;
	int16_t x520 = -85;
	static volatile uint64_t t50 = 164574799490798LLU;

    t50 = (x517<<((x518/x519)%x520));

    if (t50 != 414551095LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x521 = 4159U;
	int8_t x522 = -15;
	static uint8_t x523 = 24U;
	int16_t x524 = 5952;
	volatile int32_t t51 = -2;

    t51 = (x521<<((x522/x523)%x524));

    if (t51 != 4159) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x529 = 96;
	static volatile uint32_t x531 = UINT32_MAX;
	int16_t x532 = INT16_MAX;
	int32_t t52 = -408;

    t52 = (x529<<((x530/x531)%x532));

    if (t52 != 96) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x550 = 249085409U;
	int8_t x551 = INT8_MIN;
	volatile uint32_t x552 = 2201U;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (x549<<((x550/x551)%x552));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x569 = 0U;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = -1;
	static volatile int32_t t54 = 68879896;

    t54 = (x569<<((x570/x571)%x572));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x590 = 125U;
	int16_t x591 = INT16_MIN;
	int64_t x592 = -1LL;
	volatile int32_t t55 = -7523622;

    t55 = (x589<<((x590/x591)%x592));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x593 = 2U;
	volatile uint8_t x594 = UINT8_MAX;
	uint8_t x595 = 3U;
	static int8_t x596 = -1;
	int32_t t56 = -2427;

    t56 = (x593<<((x594/x595)%x596));

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x597 = 21;
	static uint64_t x598 = 3LLU;
	uint32_t x599 = 4162007U;
	int32_t t57 = -788913064;

    t57 = (x597<<((x598/x599)%x600));

    if (t57 != 21) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x609 = UINT64_MAX;
	int8_t x611 = INT8_MIN;
	int16_t x612 = -1;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = (x609<<((x610/x611)%x612));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x625 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

    t59 = (x625<<((x626/x627)%x628));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x637 = 1LL;
	int32_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MAX;
	int64_t t60 = 15LL;

    t60 = (x637<<((x638/x639)%x640));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x645 = 70U;
	static uint16_t x646 = 19U;
	int8_t x647 = INT8_MIN;
	volatile int32_t t61 = 171780;

    t61 = (x645<<((x646/x647)%x648));

    if (t61 != 70) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x661 = INT16_MAX;
	int16_t x662 = INT16_MIN;
	int64_t x663 = 11021110412673LL;
	int8_t x664 = INT8_MIN;
	int32_t t62 = 666197;

    t62 = (x661<<((x662/x663)%x664));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x681 = 122;
	volatile int32_t x682 = INT32_MIN;
	int64_t x683 = 127992510931541LL;
	int32_t t63 = 1816;

    t63 = (x681<<((x682/x683)%x684));

    if (t63 != 122) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x688 = 1U;
	int32_t t64 = -27;

    t64 = (x685<<((x686/x687)%x688));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x689 = 47U;
	uint8_t x691 = 117U;
	int8_t x692 = 17;
	int32_t t65 = -1800;

    t65 = (x689<<((x690/x691)%x692));

    if (t65 != 47) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x701 = UINT16_MAX;
	uint32_t x702 = 1591143934U;
	int16_t x703 = INT16_MAX;
	int64_t x704 = -1LL;
	int32_t t66 = -22;

    t66 = (x701<<((x702/x703)%x704));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x709 = INT64_MAX;
	uint64_t x710 = 165LLU;
	int32_t x711 = -1;
	int8_t x712 = INT8_MIN;

    t67 = (x709<<((x710/x711)%x712));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x725 = 8812640117826163197LLU;
	int64_t x726 = -7LL;
	int16_t x727 = INT16_MIN;
	int64_t x728 = -1LL;
	uint64_t t68 = 544869787421LLU;

    t68 = (x725<<((x726/x727)%x728));

    if (t68 != 8812640117826163197LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x729 = UINT64_MAX;
	uint64_t x730 = 1459LLU;

    t69 = (x729<<((x730/x731)%x732));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x745 = 14016919;
	volatile uint32_t x746 = 1554U;
	volatile uint16_t x747 = UINT16_MAX;
	static int64_t x748 = INT64_MIN;
	int32_t t70 = 1;

    t70 = (x745<<((x746/x747)%x748));

    if (t70 != 14016919) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t t71 = -630;

    t71 = (x749<<((x750/x751)%x752));

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x762 = INT8_MIN;
	uint16_t x763 = 789U;
	uint8_t x764 = UINT8_MAX;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (x761<<((x762/x763)%x764));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x777 = 0;
	int8_t x778 = INT8_MIN;
	static int64_t x779 = INT64_MIN;

    t73 = (x777<<((x778/x779)%x780));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x781 = INT8_MAX;
	int64_t x782 = INT64_MIN;
	uint8_t x784 = 39U;
	volatile int32_t t74 = 3842486;

    t74 = (x781<<((x782/x783)%x784));

    if (t74 != 4064) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x789 = 8180U;
	int64_t x790 = INT64_MAX;
	uint32_t x791 = 1043843U;
	volatile uint8_t x792 = 3U;
	volatile int32_t t75 = -1;

    t75 = (x789<<((x790/x791)%x792));

    if (t75 != 16360) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x797 = 639LL;
	int16_t x799 = INT16_MIN;
	int32_t x800 = 1;
	static volatile int64_t t76 = 12794919826LL;

    t76 = (x797<<((x798/x799)%x800));

    if (t76 != 639LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x805 = UINT8_MAX;
	volatile uint32_t x806 = 5491531U;
	int8_t x807 = INT8_MIN;
	volatile int32_t t77 = -29;

    t77 = (x805<<((x806/x807)%x808));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x821 = 649951361U;
	uint8_t x822 = 1U;
	int16_t x824 = INT16_MAX;
	uint32_t t78 = 1735U;

    t78 = (x821<<((x822/x823)%x824));

    if (t78 != 649951361U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x825 = 93085439;

    t79 = (x825<<((x826/x827)%x828));

    if (t79 != 93085439) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x865 = 10388LLU;
	int32_t x867 = INT32_MAX;
	int32_t x868 = INT32_MIN;

    t80 = (x865<<((x866/x867)%x868));

    if (t80 != 41552LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x878 = 25;
	int64_t x879 = 6052223856LL;
	volatile uint8_t x880 = 58U;
	static int32_t t81 = 806450;

    t81 = (x877<<((x878/x879)%x880));

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x881 = UINT64_MAX;
	static int8_t x882 = INT8_MAX;
	int32_t x884 = -1;
	uint64_t t82 = UINT64_MAX;

    t82 = (x881<<((x882/x883)%x884));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x888 = INT8_MIN;
	int64_t t83 = INT64_MAX;

    t83 = (x885<<((x886/x887)%x888));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x901 = 24LL;
	uint8_t x902 = UINT8_MAX;
	volatile int16_t x903 = 35;
	uint8_t x904 = UINT8_MAX;
	volatile int64_t t84 = -21LL;

    t84 = (x901<<((x902/x903)%x904));

    if (t84 != 3072LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x921 = UINT32_MAX;
	static uint16_t x922 = 9U;
	uint8_t x923 = UINT8_MAX;
	int32_t x924 = INT32_MIN;

    t85 = (x921<<((x922/x923)%x924));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x925 = 5935U;
	volatile int16_t x927 = -342;
	static volatile uint64_t x928 = 46590240136914688LLU;
	uint32_t t86 = 3U;

    t86 = (x925<<((x926/x927)%x928));

    if (t86 != 5935U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x930 = -1;
	int64_t x931 = INT64_MIN;
	uint32_t t87 = 109173U;

    t87 = (x929<<((x930/x931)%x932));

    if (t87 != 39759144U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x942 = INT32_MIN;
	int16_t x943 = INT16_MIN;
	static volatile int32_t t88 = 12462351;

    t88 = (x941<<((x942/x943)%x944));

    if (t88 != 3584) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x950 = 1;
	uint16_t x951 = UINT16_MAX;
	int16_t x952 = INT16_MIN;

    t89 = (x949<<((x950/x951)%x952));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x957 = 17996U;
	int64_t x958 = 56579646268733LL;
	int64_t x959 = INT64_MAX;
	int64_t x960 = 35LL;
	uint32_t t90 = 3684U;

    t90 = (x957<<((x958/x959)%x960));

    if (t90 != 17996U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x969 = 94710726817143LLU;
	int8_t x970 = INT8_MIN;
	int16_t x971 = -8100;
	int64_t x972 = INT64_MIN;
	volatile uint64_t t91 = 3LLU;

    t91 = (x969<<((x970/x971)%x972));

    if (t91 != 94710726817143LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x985 = 0;
	int8_t x987 = -22;

    t92 = (x985<<((x986/x987)%x988));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x993 = INT32_MAX;
	int8_t x994 = -1;
	int8_t x996 = INT8_MIN;
	int32_t t93 = INT32_MAX;

    t93 = (x993<<((x994/x995)%x996));

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x1001 = UINT8_MAX;
	static uint16_t x1002 = UINT16_MAX;
	uint64_t x1003 = UINT64_MAX;
	int16_t x1004 = -1;
	volatile int32_t t94 = -95;

    t94 = (x1001<<((x1002/x1003)%x1004));

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x1009 = 461779U;
	volatile int8_t x1011 = INT8_MIN;
	uint64_t x1012 = 4723221124354LLU;
	static volatile uint32_t t95 = 762U;

    t95 = (x1009<<((x1010/x1011)%x1012));

    if (t95 != 461779U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x1021 = INT64_MAX;
	int8_t x1022 = INT8_MIN;
	int32_t x1023 = INT32_MIN;
	int32_t x1024 = INT32_MAX;
	int64_t t96 = INT64_MAX;

    t96 = (x1021<<((x1022/x1023)%x1024));

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x1038 = INT8_MAX;
	int16_t x1039 = -1;
	static volatile uint8_t x1040 = 1U;
	static int32_t t97 = -18;

    t97 = (x1037<<((x1038/x1039)%x1040));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x1041 = INT8_MAX;
	static int64_t x1042 = -1LL;
	static int32_t x1044 = -192861;
	int32_t t98 = -102391;

    t98 = (x1041<<((x1042/x1043)%x1044));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x1049 = UINT16_MAX;
	int16_t x1050 = INT16_MAX;
	uint64_t x1051 = UINT64_MAX;
	volatile int32_t t99 = -39;

    t99 = (x1049<<((x1050/x1051)%x1052));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x1073 = 44U;
	static volatile int8_t x1074 = 6;
	int8_t x1076 = INT8_MIN;
	static int32_t t100 = 1060716;

    t100 = (x1073<<((x1074/x1075)%x1076));

    if (t100 != 44) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x1081 = 22458357LLU;
	uint64_t x1082 = UINT64_MAX;
	static int8_t x1084 = -39;
	static volatile uint64_t t101 = 149739LLU;

    t101 = (x1081<<((x1082/x1083)%x1084));

    if (t101 != 44916714LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x1086 = 572369845382973LLU;
	static int64_t x1088 = -1LL;
	int32_t t102 = 8788826;

    t102 = (x1085<<((x1086/x1087)%x1088));

    if (t102 != 131492112) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x1089 = 284320460LLU;
	static int64_t x1090 = INT64_MIN;
	int16_t x1091 = -7468;
	int16_t x1092 = -1;
	volatile uint64_t t103 = 1644194LLU;

    t103 = (x1089<<((x1090/x1091)%x1092));

    if (t103 != 284320460LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x1093 = 258U;
	int32_t x1095 = 298692;
	int8_t x1096 = -6;
	volatile int32_t t104 = -105;

    t104 = (x1093<<((x1094/x1095)%x1096));

    if (t104 != 258) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x1125 = 1423115143186LL;
	uint8_t x1126 = 12U;
	uint64_t x1127 = UINT64_MAX;
	uint64_t x1128 = 1396097696584683537LLU;

    t105 = (x1125<<((x1126/x1127)%x1128));

    if (t105 != 1423115143186LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x1130 = 4U;
	static volatile uint8_t x1131 = 126U;
	int32_t x1132 = INT32_MAX;

    t106 = (x1129<<((x1130/x1131)%x1132));

    if (t106 != 219782681679089371LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x1137 = UINT16_MAX;
	int64_t x1138 = INT64_MAX;
	static int64_t x1140 = INT64_MIN;
	volatile int32_t t107 = -9237562;

    t107 = (x1137<<((x1138/x1139)%x1140));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x1154 = UINT16_MAX;
	int64_t x1155 = INT64_MIN;
	int8_t x1156 = INT8_MIN;
	uint64_t t108 = 19977268LLU;

    t108 = (x1153<<((x1154/x1155)%x1156));

    if (t108 != 7718602240917981054LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x1173 = INT32_MAX;
	uint32_t x1174 = 521212091U;
	volatile int64_t x1176 = -66913905048199LL;
	int32_t t109 = INT32_MAX;

    t109 = (x1173<<((x1174/x1175)%x1176));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x1201 = 3553056732965LLU;
	uint64_t x1203 = 501638071141757LLU;
	volatile int16_t x1204 = INT16_MAX;
	volatile uint64_t t110 = 171148820378412LLU;

    t110 = (x1201<<((x1202/x1203)%x1204));

    if (t110 != 3553056732965LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x1221 = UINT32_MAX;
	static int8_t x1222 = -1;
	int8_t x1223 = INT8_MIN;
	volatile int32_t x1224 = 44619;

    t111 = (x1221<<((x1222/x1223)%x1224));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x1245 = 1;
	static uint32_t x1246 = 1706188379U;
	volatile uint64_t x1247 = 5235606818LLU;
	static volatile int16_t x1248 = INT16_MIN;

    t112 = (x1245<<((x1246/x1247)%x1248));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x1249 = UINT32_MAX;
	int32_t x1250 = INT32_MAX;
	int32_t x1251 = INT32_MIN;
	int32_t x1252 = INT32_MAX;
	uint32_t t113 = UINT32_MAX;

    t113 = (x1249<<((x1250/x1251)%x1252));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x1258 = 838137LLU;
	int8_t x1260 = -54;
	volatile int32_t t114 = 2;

    t114 = (x1257<<((x1258/x1259)%x1260));

    if (t114 != 6) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x1269 = INT8_MAX;
	int32_t x1270 = INT32_MIN;
	uint16_t x1271 = 1U;
	int32_t t115 = -1;

    t115 = (x1269<<((x1270/x1271)%x1272));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x1297 = INT8_MAX;
	volatile int16_t x1300 = 113;
	volatile int32_t t116 = 113254523;

    t116 = (x1297<<((x1298/x1299)%x1300));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x1317 = UINT16_MAX;
	uint8_t x1318 = UINT8_MAX;
	static int16_t x1319 = -12488;
	volatile int64_t x1320 = INT64_MIN;

    t117 = (x1317<<((x1318/x1319)%x1320));

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x1321 = UINT8_MAX;
	int16_t x1322 = INT16_MAX;
	int32_t t118 = -468;

    t118 = (x1321<<((x1322/x1323)%x1324));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1327 = UINT64_MAX;
	uint32_t x1328 = UINT32_MAX;

    t119 = (x1325<<((x1326/x1327)%x1328));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x1349 = 12004416;
	int64_t x1350 = -16LL;
	volatile uint32_t x1352 = 15U;

    t120 = (x1349<<((x1350/x1351)%x1352));

    if (t120 != 12004416) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1358 = -1879;
	int32_t x1360 = 491;
	volatile int32_t t121 = 235222700;

    t121 = (x1357<<((x1358/x1359)%x1360));

    if (t121 != 5) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1390 = -1;
	static int16_t x1392 = -2432;

    t122 = (x1389<<((x1390/x1391)%x1392));

    if (t122 != 65534) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1393 = 25;
	uint32_t x1394 = 272U;
	int16_t x1395 = 8986;
	static int32_t t123 = -1007777;

    t123 = (x1393<<((x1394/x1395)%x1396));

    if (t123 != 25) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1397 = 1;
	volatile uint64_t x1398 = UINT64_MAX;
	int64_t x1399 = -1LL;
	static uint8_t x1400 = 24U;
	int32_t t124 = 470;

    t124 = (x1397<<((x1398/x1399)%x1400));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x1409 = UINT64_MAX;
	volatile int32_t x1410 = INT32_MIN;
	uint32_t x1411 = UINT32_MAX;
	static int64_t x1412 = -1LL;
	uint64_t t125 = UINT64_MAX;

    t125 = (x1409<<((x1410/x1411)%x1412));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1413 = INT8_MAX;
	uint8_t x1414 = 3U;
	int16_t x1416 = INT16_MAX;
	int32_t t126 = -4536958;

    t126 = (x1413<<((x1414/x1415)%x1416));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x1433 = INT8_MAX;
	int32_t x1434 = -7756043;
	int64_t x1435 = INT64_MIN;
	uint32_t x1436 = UINT32_MAX;
	static int32_t t127 = -19522939;

    t127 = (x1433<<((x1434/x1435)%x1436));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x1441 = 1U;
	uint8_t x1443 = 1U;
	volatile int32_t t128 = -646052;

    t128 = (x1441<<((x1442/x1443)%x1444));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1477 = UINT16_MAX;
	int8_t x1478 = -4;
	uint8_t x1479 = UINT8_MAX;
	volatile int8_t x1480 = 13;
	volatile int32_t t129 = -1;

    t129 = (x1477<<((x1478/x1479)%x1480));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x1501 = INT8_MAX;
	uint16_t x1502 = 2307U;
	int32_t x1503 = INT32_MIN;
	int32_t x1504 = -1;
	volatile int32_t t130 = -2006146;

    t130 = (x1501<<((x1502/x1503)%x1504));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x1512 = -1LL;
	int32_t t131 = -2024;

    t131 = (x1509<<((x1510/x1511)%x1512));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x1517 = 1414750U;
	uint64_t x1518 = 54240144389873LLU;
	static int16_t x1519 = -1;
	static uint32_t t132 = 62568U;

    t132 = (x1517<<((x1518/x1519)%x1520));

    if (t132 != 1414750U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1529 = 2U;
	static uint8_t x1530 = 104U;
	int32_t x1531 = -79197;
	volatile int16_t x1532 = INT16_MAX;

    t133 = (x1529<<((x1530/x1531)%x1532));

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1537 = 30234754522826LL;
	int32_t x1539 = INT32_MIN;
	uint64_t x1540 = 299LLU;
	int64_t t134 = 54617205942147LL;

    t134 = (x1537<<((x1538/x1539)%x1540));

    if (t134 != 30234754522826LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1557 = 454593738489LLU;
	uint32_t x1558 = 18576U;
	int8_t x1559 = INT8_MIN;
	volatile int32_t x1560 = -1;
	uint64_t t135 = 1057489984980262LLU;

    t135 = (x1557<<((x1558/x1559)%x1560));

    if (t135 != 454593738489LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1565 = UINT64_MAX;
	int8_t x1566 = -1;
	int8_t x1567 = -7;
	uint16_t x1568 = 62U;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x1565<<((x1566/x1567)%x1568));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1569 = INT64_MAX;
	uint32_t x1570 = 60101474U;
	uint64_t x1571 = 118487903224189603LLU;
	int64_t x1572 = 11LL;
	volatile int64_t t137 = INT64_MAX;

    t137 = (x1569<<((x1570/x1571)%x1572));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1589 = 3906LL;
	int16_t x1591 = INT16_MIN;

    t138 = (x1589<<((x1590/x1591)%x1592));

    if (t138 != 3906LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x1593 = 133201021291847431LLU;
	uint8_t x1594 = 0U;
	int32_t x1595 = -1;
	int64_t x1596 = INT64_MIN;
	uint64_t t139 = 107875LLU;

    t139 = (x1593<<((x1594/x1595)%x1596));

    if (t139 != 133201021291847431LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1617 = 5U;
	int16_t x1618 = INT16_MAX;
	uint16_t x1619 = 8837U;
	volatile int64_t x1620 = INT64_MIN;

    t140 = (x1617<<((x1618/x1619)%x1620));

    if (t140 != 40) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1625 = 50374134LLU;
	static uint64_t x1626 = 131841500843LLU;

    t141 = (x1625<<((x1626/x1627)%x1628));

    if (t141 != 50374134LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1637 = INT8_MAX;
	static volatile uint64_t x1638 = 2865649530633454622LLU;
	int8_t x1639 = INT8_MIN;
	volatile uint8_t x1640 = 125U;
	int32_t t142 = -16;

    t142 = (x1637<<((x1638/x1639)%x1640));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1649 = 12U;
	int8_t x1651 = 1;
	static volatile int8_t x1652 = 7;
	int32_t t143 = 586;

    t143 = (x1649<<((x1650/x1651)%x1652));

    if (t143 != 24) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1661 = 26;
	int64_t x1663 = -1LL;
	int64_t x1664 = INT64_MAX;
	int32_t t144 = -8;

    t144 = (x1661<<((x1662/x1663)%x1664));

    if (t144 != 52) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1673 = 58516383039653LL;
	volatile uint64_t x1674 = 23772004LLU;
	int16_t x1675 = -1;
	volatile int16_t x1676 = INT16_MIN;
	volatile int64_t t145 = 3882249235759LL;

    t145 = (x1673<<((x1674/x1675)%x1676));

    if (t145 != 58516383039653LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1677 = UINT16_MAX;
	int8_t x1678 = INT8_MAX;
	uint8_t x1679 = 71U;
	uint16_t x1680 = 7520U;
	int32_t t146 = -26116;

    t146 = (x1677<<((x1678/x1679)%x1680));

    if (t146 != 131070) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1685 = UINT16_MAX;
	int64_t x1687 = INT64_MAX;
	int32_t x1688 = 161998565;
	int32_t t147 = 938473751;

    t147 = (x1685<<((x1686/x1687)%x1688));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x1693 = UINT64_MAX;
	volatile uint32_t x1694 = UINT32_MAX;
	uint32_t x1695 = 120272U;
	uint32_t x1696 = 1U;
	uint64_t t148 = UINT64_MAX;

    t148 = (x1693<<((x1694/x1695)%x1696));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1701 = 6444U;
	int16_t x1702 = INT16_MIN;
	int32_t x1703 = INT32_MIN;
	volatile int64_t x1704 = -1LL;
	volatile uint32_t t149 = 22476U;

    t149 = (x1701<<((x1702/x1703)%x1704));

    if (t149 != 6444U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1709 = 92676554855126LLU;
	int8_t x1710 = -3;
	static volatile int8_t x1711 = -3;
	uint32_t x1712 = UINT32_MAX;
	volatile uint64_t t150 = 671055345LLU;

    t150 = (x1709<<((x1710/x1711)%x1712));

    if (t150 != 185353109710252LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1714 = 735LL;
	static uint64_t x1715 = 123188LLU;
	static int16_t x1716 = -6;
	static int32_t t151 = -1;

    t151 = (x1713<<((x1714/x1715)%x1716));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x1729 = INT32_MAX;
	static uint8_t x1730 = 3U;
	static uint64_t x1731 = 63270569437509737LLU;
	int32_t x1732 = -1;
	int32_t t152 = INT32_MAX;

    t152 = (x1729<<((x1730/x1731)%x1732));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1749 = 21120U;
	int8_t x1752 = -28;
	volatile uint32_t t153 = 1715866U;

    t153 = (x1749<<((x1750/x1751)%x1752));

    if (t153 != 5406720U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1753 = 2U;
	int32_t x1755 = INT32_MAX;
	int64_t x1756 = INT64_MIN;
	static int32_t t154 = 418;

    t154 = (x1753<<((x1754/x1755)%x1756));

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x1759 = -29157913127652LL;
	uint64_t x1760 = UINT64_MAX;
	volatile int32_t t155 = 213771;

    t155 = (x1757<<((x1758/x1759)%x1760));

    if (t155 != 331) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1765 = 40;
	int64_t x1767 = INT64_MIN;
	int32_t x1768 = INT32_MIN;
	volatile int32_t t156 = -1;

    t156 = (x1765<<((x1766/x1767)%x1768));

    if (t156 != 40) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1781 = 7U;
	volatile int8_t x1782 = 0;
	volatile int32_t x1783 = INT32_MAX;
	uint8_t x1784 = 84U;

    t157 = (x1781<<((x1782/x1783)%x1784));

    if (t157 != 7) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1789 = 88846LLU;
	volatile int32_t x1790 = -829;
	int16_t x1791 = -31;
	int16_t x1792 = INT16_MIN;
	uint64_t t158 = 559706265484756LLU;

    t158 = (x1789<<((x1790/x1791)%x1792));

    if (t158 != 5962354130944LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x1805 = UINT64_MAX;
	int16_t x1807 = INT16_MIN;
	static uint8_t x1808 = 1U;
	uint64_t t159 = UINT64_MAX;

    t159 = (x1805<<((x1806/x1807)%x1808));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x1809 = 1U;
	volatile uint8_t x1810 = UINT8_MAX;
	int8_t x1811 = INT8_MIN;
	uint32_t x1812 = UINT32_MAX;
	int32_t t160 = 712646992;

    t160 = (x1809<<((x1810/x1811)%x1812));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x1813 = 4;
	int32_t x1814 = INT32_MIN;
	static int8_t x1816 = -1;

    t161 = (x1813<<((x1814/x1815)%x1816));

    if (t161 != 4) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t t162 = 1410594;

    t162 = (x1817<<((x1818/x1819)%x1820));

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1821 = 18U;
	static uint8_t x1822 = 65U;
	static int8_t x1823 = INT8_MIN;
	int32_t t163 = -2409;

    t163 = (x1821<<((x1822/x1823)%x1824));

    if (t163 != 18) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x1829 = UINT32_MAX;
	volatile int16_t x1830 = -1;
	uint32_t x1831 = UINT32_MAX;
	int16_t x1832 = -16193;

    t164 = (x1829<<((x1830/x1831)%x1832));

    if (t164 != 4294967294U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1833 = 0U;
	uint16_t x1834 = UINT16_MAX;
	uint32_t x1835 = 86939U;
	int16_t x1836 = INT16_MIN;

    t165 = (x1833<<((x1834/x1835)%x1836));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1841 = UINT32_MAX;
	static int64_t x1843 = INT64_MAX;
	volatile uint16_t x1844 = 1275U;
	uint32_t t166 = UINT32_MAX;

    t166 = (x1841<<((x1842/x1843)%x1844));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1877 = INT32_MAX;
	int32_t x1879 = INT32_MIN;
	static volatile int64_t x1880 = -1LL;
	volatile int32_t t167 = INT32_MAX;

    t167 = (x1877<<((x1878/x1879)%x1880));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1889 = INT16_MAX;
	static int32_t x1890 = -16611720;
	static uint32_t x1891 = UINT32_MAX;
	static volatile int32_t t168 = -3789986;

    t168 = (x1889<<((x1890/x1891)%x1892));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1893 = UINT16_MAX;
	volatile int16_t x1894 = INT16_MAX;
	int8_t x1895 = INT8_MIN;
	int32_t t169 = -3123656;

    t169 = (x1893<<((x1894/x1895)%x1896));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1897 = 1049081U;
	uint64_t x1898 = 429711550LLU;
	int16_t x1899 = INT16_MIN;
	int32_t x1900 = -1;
	volatile uint32_t t170 = 30835U;

    t170 = (x1897<<((x1898/x1899)%x1900));

    if (t170 != 1049081U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1905 = 1819550498123782271LL;
	int8_t x1906 = INT8_MIN;
	int64_t x1907 = -41516342111360623LL;
	int64_t t171 = -185204LL;

    t171 = (x1905<<((x1906/x1907)%x1908));

    if (t171 != 1819550498123782271LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1909 = 6U;
	int32_t x1910 = 0;
	uint32_t x1911 = 21U;
	volatile int64_t x1912 = -529023900864228LL;

    t172 = (x1909<<((x1910/x1911)%x1912));

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x1913 = 1533404U;
	uint32_t x1914 = 54U;
	int8_t x1915 = -1;
	static int16_t x1916 = -21;
	volatile uint32_t t173 = 1367404U;

    t173 = (x1913<<((x1914/x1915)%x1916));

    if (t173 != 1533404U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1917 = 1U;
	int16_t x1919 = INT16_MIN;

    t174 = (x1917<<((x1918/x1919)%x1920));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1925 = 206U;
	volatile uint64_t x1926 = 1724940LLU;
	static int16_t x1927 = -1;
	int64_t x1928 = -1LL;
	int32_t t175 = 7834;

    t175 = (x1925<<((x1926/x1927)%x1928));

    if (t175 != 206) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1929 = UINT16_MAX;
	uint16_t x1930 = UINT16_MAX;
	int64_t x1931 = INT64_MIN;
	uint8_t x1932 = UINT8_MAX;

    t176 = (x1929<<((x1930/x1931)%x1932));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1941 = 14U;
	static int8_t x1943 = -1;
	int16_t x1944 = INT16_MAX;
	static volatile int32_t t177 = -1733;

    t177 = (x1941<<((x1942/x1943)%x1944));

    if (t177 != 28) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1955 = 3;
	int32_t x1956 = INT32_MIN;
	volatile int32_t t178 = -15095;

    t178 = (x1953<<((x1954/x1955)%x1956));

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1961 = 264;
	static volatile uint32_t x1962 = 670176772U;
	uint16_t x1964 = 4U;
	volatile int32_t t179 = 3;

    t179 = (x1961<<((x1962/x1963)%x1964));

    if (t179 != 1056) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1969 = 3437114U;
	int8_t x1970 = INT8_MIN;
	int16_t x1971 = INT16_MIN;
	static int8_t x1972 = INT8_MIN;
	uint32_t t180 = 22132637U;

    t180 = (x1969<<((x1970/x1971)%x1972));

    if (t180 != 3437114U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1973 = 8U;
	uint8_t x1974 = 0U;
	int32_t x1975 = 842476392;
	int16_t x1976 = 14;

    t181 = (x1973<<((x1974/x1975)%x1976));

    if (t181 != 8) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1981 = 32622;
	static volatile int8_t x1982 = INT8_MIN;
	int64_t x1983 = INT64_MIN;
	uint32_t x1984 = 58U;
	int32_t t182 = -1;

    t182 = (x1981<<((x1982/x1983)%x1984));

    if (t182 != 32622) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x2001 = 14462427065LLU;
	static volatile uint32_t x2002 = 315607505U;
	int32_t x2003 = -1;
	static int32_t x2004 = INT32_MAX;

    t183 = (x2001<<((x2002/x2003)%x2004));

    if (t183 != 14462427065LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x2005 = UINT16_MAX;
	uint32_t x2008 = 1415458628U;

    t184 = (x2005<<((x2006/x2007)%x2008));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x2034 = 106087789U;
	int32_t x2035 = -10;
	volatile int16_t x2036 = -3885;

    t185 = (x2033<<((x2034/x2035)%x2036));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x2065 = INT32_MAX;
	static int64_t x2066 = INT64_MIN;
	int8_t x2067 = 10;
	volatile int32_t t186 = INT32_MAX;

    t186 = (x2065<<((x2066/x2067)%x2068));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x2069 = INT32_MAX;
	int32_t x2070 = -1;
	static int16_t x2071 = INT16_MAX;
	static int8_t x2072 = INT8_MIN;
	volatile int32_t t187 = INT32_MAX;

    t187 = (x2069<<((x2070/x2071)%x2072));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x2078 = -2269;
	int32_t x2079 = INT32_MIN;
	volatile int8_t x2080 = INT8_MAX;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x2077<<((x2078/x2079)%x2080));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x2085 = 63U;
	int8_t x2086 = 0;
	int64_t x2087 = 198061120399521748LL;
	static int32_t x2088 = -900;
	volatile int32_t t189 = -149242234;

    t189 = (x2085<<((x2086/x2087)%x2088));

    if (t189 != 63) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x2089 = INT32_MAX;
	uint16_t x2090 = 55U;
	static uint16_t x2091 = UINT16_MAX;
	int32_t x2092 = INT32_MIN;

    t190 = (x2089<<((x2090/x2091)%x2092));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x2101 = UINT16_MAX;
	int8_t x2102 = INT8_MAX;
	int32_t x2103 = INT32_MIN;
	int8_t x2104 = INT8_MIN;
	int32_t t191 = -2547;

    t191 = (x2101<<((x2102/x2103)%x2104));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x2113 = UINT64_MAX;
	int8_t x2114 = -1;
	int32_t x2115 = INT32_MIN;
	uint64_t t192 = UINT64_MAX;

    t192 = (x2113<<((x2114/x2115)%x2116));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x2129 = UINT32_MAX;
	int32_t x2130 = -12;
	uint16_t x2131 = UINT16_MAX;
	int64_t x2132 = -124LL;

    t193 = (x2129<<((x2130/x2131)%x2132));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x2145 = 26607U;
	static int8_t x2146 = -42;
	int32_t x2147 = INT32_MIN;
	int8_t x2148 = INT8_MIN;
	volatile int32_t t194 = 19;

    t194 = (x2145<<((x2146/x2147)%x2148));

    if (t194 != 26607) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x2150 = -1;
	uint8_t x2151 = UINT8_MAX;
	static volatile int16_t x2152 = INT16_MIN;
	int32_t t195 = 3273459;

    t195 = (x2149<<((x2150/x2151)%x2152));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x2153 = 51628779;
	uint64_t x2154 = UINT64_MAX;
	volatile int32_t x2155 = INT32_MIN;
	int32_t x2156 = INT32_MIN;
	int32_t t196 = 16018;

    t196 = (x2153<<((x2154/x2155)%x2156));

    if (t196 != 103257558) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x2166 = 302;
	volatile uint64_t x2167 = 65910896349LLU;
	uint64_t x2168 = 9LLU;
	static uint32_t t197 = 44U;

    t197 = (x2165<<((x2166/x2167)%x2168));

    if (t197 != 14U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x2197 = INT32_MAX;
	int8_t x2198 = INT8_MIN;
	uint64_t x2200 = UINT64_MAX;
	volatile int32_t t198 = INT32_MAX;

    t198 = (x2197<<((x2198/x2199)%x2200));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x2201 = 4183655692972489LLU;
	int16_t x2202 = INT16_MAX;
	int32_t x2203 = -1;
	static int64_t x2204 = -1LL;
	static uint64_t t199 = 3LLU;

    t199 = (x2201<<((x2202/x2203)%x2204));

    if (t199 != 4183655692972489LLU) { NG(); } else { ; }
	
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

