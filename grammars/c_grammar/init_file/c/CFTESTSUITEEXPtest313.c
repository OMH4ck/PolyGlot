
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

static volatile int8_t x21 = INT8_MIN;
uint16_t x40 = 1968U;
uint16_t x41 = UINT16_MAX;
uint32_t x47 = UINT32_MAX;
uint32_t x62 = UINT32_MAX;
int32_t x66 = 1207585;
uint8_t x67 = 62U;
int8_t x97 = INT8_MIN;
static volatile int16_t x98 = 1;
int64_t x100 = INT64_MIN;
static int32_t x105 = INT32_MIN;
volatile int32_t t9 = 14761;
uint64_t t10 = 65289635355357678LLU;
int32_t x125 = 211051;
uint16_t x126 = UINT16_MAX;
static uint16_t x143 = UINT16_MAX;
int32_t t12 = 6739;
int32_t t13 = -276;
int16_t x154 = 0;
int64_t x156 = INT64_MIN;
volatile int32_t t15 = -464847;
static int32_t t17 = 177634;
uint8_t x182 = 1U;
static volatile int32_t t18 = -36373;
int16_t x187 = 4564;
int8_t x188 = 46;
int8_t x194 = INT8_MAX;
uint16_t x200 = 43U;
static int32_t t22 = 3006777;
int8_t x265 = -28;
int32_t x289 = -3675;
static volatile int16_t x333 = -1;
volatile int32_t x337 = INT32_MAX;
int64_t x338 = 884LL;
static uint16_t x374 = 1669U;
uint8_t x375 = UINT8_MAX;
volatile int32_t t34 = -18774201;
uint32_t x392 = 25510U;
uint8_t x395 = 2U;
static volatile int32_t t36 = -3;
static int8_t x398 = 0;
volatile int16_t x428 = -8;
static int8_t x433 = INT8_MIN;
uint8_t x437 = 51U;
volatile int32_t t42 = 51757;
volatile int32_t x452 = INT32_MIN;
static uint64_t x490 = 3431869148201549527LLU;
int64_t x501 = INT64_MIN;
int32_t t47 = 194694680;
int16_t x535 = -215;
int32_t x550 = -1;
static uint32_t x581 = 15939333U;
int64_t x582 = -11639LL;
static volatile uint16_t x604 = UINT16_MAX;
static int64_t x605 = -1803LL;
uint16_t x608 = 6973U;
static volatile int32_t t56 = -122;
uint64_t x636 = 5401917602865344LLU;
volatile int8_t x638 = -1;
static int16_t x692 = INT16_MIN;
int32_t t60 = -267;
int16_t x693 = -1;
int32_t x696 = INT32_MIN;
static uint64_t x697 = 88785757375746LLU;
uint8_t x718 = 28U;
uint32_t x723 = 200U;
volatile int32_t t64 = -3;
uint8_t x743 = 25U;
volatile int32_t t65 = -18142;
uint64_t x763 = 61916825798LLU;
volatile int64_t x765 = -1LL;
static int16_t x767 = -1;
static volatile uint32_t t69 = 10658U;
static volatile int32_t t71 = 44207;
volatile int16_t x789 = 268;
static int8_t x795 = -38;
int8_t x821 = INT8_MIN;
int32_t t76 = -46;
int64_t x829 = 725LL;
uint64_t x832 = 18806881589LLU;
static int32_t x852 = INT32_MIN;
volatile int64_t x869 = 452LL;
volatile uint8_t x873 = 1U;
int64_t x884 = -6055894514LL;
volatile int8_t x888 = 1;
int32_t t85 = 5436;
int8_t x945 = INT8_MIN;
static volatile uint16_t x948 = 16U;
uint8_t x992 = UINT8_MAX;
volatile int32_t t89 = -2119454;
static int32_t x1001 = -1;
volatile int64_t t94 = -108272332756835388LL;
int16_t x1057 = INT16_MIN;
int32_t x1065 = 0;
int64_t x1068 = -1768556LL;
static int32_t t97 = 252593;
static uint32_t x1096 = 482079098U;
uint16_t x1109 = 30U;
static uint64_t x1113 = 5975233956237LLU;
uint64_t t101 = 11860928674477LLU;
volatile int64_t t102 = -2826471667632LL;
uint32_t t104 = 47U;
uint8_t x1179 = 0U;
uint32_t x1184 = 54U;
int16_t x1237 = 1;
uint32_t x1238 = UINT32_MAX;
uint32_t x1239 = 3U;
uint32_t x1241 = 3U;
uint8_t x1253 = 1U;
uint64_t x1254 = UINT64_MAX;
uint64_t x1256 = 1142LLU;
int64_t x1293 = INT64_MAX;
static int8_t x1294 = INT8_MAX;
volatile uint8_t x1296 = 20U;
static volatile int64_t t117 = 217LL;
int16_t x1308 = INT16_MIN;
int8_t x1327 = -7;
int32_t t121 = -6644562;
volatile int32_t x1340 = INT32_MIN;
int64_t x1345 = INT64_MIN;
volatile uint8_t x1356 = 22U;
uint32_t x1396 = 392642U;
uint64_t x1401 = UINT64_MAX;
int16_t x1407 = 87;
volatile uint32_t x1414 = UINT32_MAX;
volatile int8_t x1421 = INT8_MIN;
int64_t x1422 = -3652LL;
static int16_t x1424 = INT16_MAX;
int8_t x1458 = -26;
static int32_t x1462 = INT32_MIN;
int32_t x1463 = INT32_MIN;
int8_t x1464 = -8;
static uint16_t x1496 = 2U;
static int32_t t134 = 337108225;
uint16_t x1502 = 97U;
volatile int32_t t135 = -89;
static int64_t x1527 = -1LL;
static int32_t t137 = 0;
static volatile int32_t x1529 = INT32_MIN;
uint16_t x1531 = UINT16_MAX;
int32_t x1532 = -297437;
static uint16_t x1534 = 111U;
int32_t x1557 = INT32_MAX;
volatile uint16_t x1568 = 2U;
volatile int64_t x1593 = -1LL;
volatile int8_t x1594 = INT8_MIN;
static int16_t x1608 = 0;
int32_t x1612 = INT32_MAX;
int16_t x1616 = 14533;
int64_t x1627 = 56641594515371LL;
uint16_t x1639 = 199U;
volatile int64_t t153 = -6413926175302LL;
int32_t x1659 = 26341598;
static uint32_t x1660 = 2691391U;
int8_t x1669 = INT8_MIN;
int16_t x1676 = -1;
static int32_t t158 = 28257;
int16_t x1686 = -16;
uint8_t x1687 = UINT8_MAX;
uint64_t x1688 = 25167968275066518LLU;
int32_t t159 = -14719880;
uint64_t x1690 = 365466800673042793LLU;
int16_t x1711 = INT16_MIN;
static int64_t x1712 = -1292970193742624LL;
int64_t x1730 = 2174215079967LL;
volatile int64_t t163 = -16547LL;
int16_t x1733 = -1;
uint8_t x1734 = 3U;
int16_t x1739 = INT16_MIN;
int64_t x1743 = INT64_MAX;
int64_t x1744 = INT64_MIN;
int16_t x1750 = 179;
uint32_t x1781 = UINT32_MAX;
static int8_t x1782 = INT8_MAX;
int8_t x1784 = 53;
int32_t t171 = 3213;
int32_t x1801 = INT32_MAX;
static int16_t x1822 = INT16_MIN;
int64_t x1831 = 5843135LL;
int32_t x1841 = INT32_MAX;
int16_t x1859 = INT16_MIN;
int8_t x1900 = INT8_MAX;
static volatile int32_t x1904 = INT32_MIN;
volatile uint64_t x1920 = 17012928LLU;
uint32_t x1924 = 171U;
int16_t x1930 = -4;
static uint32_t x1940 = 8439302U;
volatile int32_t t188 = -1947495;
uint64_t x1983 = 50104733LLU;
static volatile int32_t t191 = -10098979;
volatile uint32_t x2007 = 94U;
volatile int64_t x2033 = 1657LL;
int64_t t196 = -15144862928104063LL;
int8_t x2061 = -1;
uint8_t x2062 = 1U;
int32_t x2066 = -1;
int32_t t198 = 11840759;
volatile int64_t x2071 = INT64_MIN;
static volatile int64_t x2072 = INT64_MIN;
int32_t t199 = 190600081;


void f0(void) {
    	static int8_t x17 = -4;
	int8_t x18 = -2;
	volatile uint32_t x19 = 3U;
	static volatile int32_t x20 = INT32_MAX;
	int32_t t0 = -81561944;

    t0 = (x17%((x18-x19)>x20));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x22 = UINT16_MAX;
	uint16_t x23 = 2184U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t1 = -666620;

    t1 = (x21%((x22-x23)>x24));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x37 = 1067362LLU;
	volatile int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	volatile uint64_t t2 = 2822811964LLU;

    t2 = (x37%((x38-x39)>x40));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x42 = 503753LLU;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 56U;
	volatile int32_t t3 = 181107;

    t3 = (x41%((x42-x43)>x44));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x45 = -1;
	volatile int8_t x46 = INT8_MIN;
	uint32_t x48 = 13U;
	static int32_t t4 = -1;

    t4 = (x45%((x46-x47)>x48));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x61 = UINT8_MAX;
	uint32_t x63 = 1647U;
	int64_t x64 = INT64_MIN;
	int32_t t5 = -2829479;

    t5 = (x61%((x62-x63)>x64));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x65 = 3U;
	int8_t x68 = INT8_MAX;
	volatile int32_t t6 = 0;

    t6 = (x65%((x66-x67)>x68));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x93 = INT8_MAX;
	volatile int16_t x94 = -1;
	static int16_t x95 = INT16_MIN;
	volatile int16_t x96 = 14008;
	static volatile int32_t t7 = 13;

    t7 = (x93%((x94-x95)>x96));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x99 = -1LL;
	int32_t t8 = 172;

    t8 = (x97%((x98-x99)>x100));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x106 = INT8_MIN;
	static volatile int8_t x107 = -1;
	int64_t x108 = INT64_MIN;

    t9 = (x105%((x106-x107)>x108));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	int64_t x110 = 1069645098LL;
	int32_t x111 = 508741;
	static volatile int16_t x112 = INT16_MIN;

    t10 = (x109%((x110-x111)>x112));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x127 = 5U;
	volatile uint8_t x128 = 0U;
	volatile int32_t t11 = 290907679;

    t11 = (x125%((x126-x127)>x128));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x141 = INT32_MIN;
	static uint16_t x142 = 25U;
	static volatile uint64_t x144 = 321290396LLU;

    t12 = (x141%((x142-x143)>x144));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x149 = 109479;
	uint8_t x150 = 1U;
	int16_t x151 = -6975;
	int16_t x152 = -1;

    t13 = (x149%((x150-x151)>x152));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x153 = INT32_MAX;
	uint64_t x155 = 78576572715205071LLU;
	int32_t t14 = -28181991;

    t14 = (x153%((x154-x155)>x156));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x165 = 0U;
	volatile uint8_t x166 = 1U;
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;

    t15 = (x165%((x166-x167)>x168));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x169 = 2213551204534205LLU;
	volatile int8_t x170 = -42;
	int64_t x171 = 18743022LL;
	int64_t x172 = -45314273LL;
	volatile uint64_t t16 = 378LLU;

    t16 = (x169%((x170-x171)>x172));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x177 = -2;
	int8_t x178 = -1;
	static uint16_t x179 = 12112U;
	uint32_t x180 = 274138454U;

    t17 = (x177%((x178-x179)>x180));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x181 = 3129;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 27U;

    t18 = (x181%((x182-x183)>x184));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint32_t x186 = 458623778U;
	int32_t t19 = 102468;

    t19 = (x185%((x186-x187)>x188));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x193 = INT32_MIN;
	int16_t x195 = -1;
	static int16_t x196 = -1;
	static int32_t t20 = 267339368;

    t20 = (x193%((x194-x195)>x196));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x197 = -1LL;
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MAX;
	int64_t t21 = -588409106LL;

    t21 = (x197%((x198-x199)>x200));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x205 = -6;
	static int8_t x206 = INT8_MIN;
	static uint32_t x207 = 0U;
	int64_t x208 = -42428981388722LL;

    t22 = (x205%((x206-x207)>x208));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x221 = -78;
	volatile int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	static int32_t t23 = 81643;

    t23 = (x221%((x222-x223)>x224));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x225 = -4555;
	uint16_t x226 = 20U;
	int64_t x227 = -1LL;
	int32_t x228 = -1;
	int32_t t24 = 533784;

    t24 = (x225%((x226-x227)>x228));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x266 = INT32_MIN;
	uint64_t x267 = 91642832971342779LLU;
	int8_t x268 = INT8_MAX;
	volatile int32_t t25 = 33;

    t25 = (x265%((x266-x267)>x268));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x277 = INT8_MAX;
	int8_t x278 = -1;
	static int32_t x279 = -237769878;
	int8_t x280 = -1;
	volatile int32_t t26 = -84;

    t26 = (x277%((x278-x279)>x280));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x290 = 0;
	int16_t x291 = -3463;
	uint16_t x292 = 211U;
	volatile int32_t t27 = 254664;

    t27 = (x289%((x290-x291)>x292));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x305 = 3U;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 71085U;
	uint32_t x308 = UINT32_MAX;
	int32_t t28 = -214;

    t28 = (x305%((x306-x307)>x308));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x325 = INT64_MAX;
	volatile int64_t x326 = -1LL;
	volatile int32_t x327 = INT32_MIN;
	uint8_t x328 = 58U;
	volatile int64_t t29 = 252270072011492LL;

    t29 = (x325%((x326-x327)>x328));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x334 = 151960149U;
	int8_t x335 = -2;
	int64_t x336 = INT64_MIN;
	int32_t t30 = -696;

    t30 = (x333%((x334-x335)>x336));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	volatile int32_t t31 = -4564909;

    t31 = (x337%((x338-x339)>x340));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x357 = 43U;
	static int8_t x358 = -42;
	uint16_t x359 = 13856U;
	uint64_t x360 = 1LLU;
	volatile int32_t t32 = 486565;

    t32 = (x357%((x358-x359)>x360));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x361 = -19023LL;
	int8_t x362 = -6;
	int8_t x363 = INT8_MIN;
	int8_t x364 = -6;
	int64_t t33 = 433069LL;

    t33 = (x361%((x362-x363)>x364));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x373 = 0U;
	int16_t x376 = -1;

    t34 = (x373%((x374-x375)>x376));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x389 = -1;
	uint64_t x390 = 1911911752625637LLU;
	int32_t x391 = INT32_MIN;
	volatile int32_t t35 = -123710552;

    t35 = (x389%((x390-x391)>x392));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x393 = INT8_MAX;
	static uint8_t x394 = UINT8_MAX;
	volatile int16_t x396 = INT16_MIN;

    t36 = (x393%((x394-x395)>x396));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x399 = 516233LLU;
	uint8_t x400 = 0U;
	static volatile int32_t t37 = -5475499;

    t37 = (x397%((x398-x399)>x400));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x413 = UINT16_MAX;
	int32_t x414 = -38953;
	int8_t x415 = -1;
	static uint32_t x416 = 0U;
	int32_t t38 = 15829532;

    t38 = (x413%((x414-x415)>x416));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x425 = INT8_MAX;
	volatile uint32_t x426 = 659034992U;
	int64_t x427 = -1LL;
	volatile int32_t t39 = 16169;

    t39 = (x425%((x426-x427)>x428));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x429 = INT8_MIN;
	static int16_t x430 = INT16_MIN;
	uint32_t x431 = 2746058U;
	uint16_t x432 = UINT16_MAX;
	int32_t t40 = 0;

    t40 = (x429%((x430-x431)>x432));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x434 = 396U;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	int32_t t41 = -1;

    t41 = (x433%((x434-x435)>x436));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x438 = 60U;
	int8_t x439 = -1;
	uint8_t x440 = 2U;

    t42 = (x437%((x438-x439)>x440));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x449 = -20;
	static volatile int8_t x450 = -1;
	int64_t x451 = INT64_MIN;
	int32_t t43 = 1797966;

    t43 = (x449%((x450-x451)>x452));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x473 = INT32_MIN;
	uint32_t x474 = 1U;
	uint8_t x475 = 12U;
	int32_t x476 = INT32_MIN;
	int32_t t44 = -117;

    t44 = (x473%((x474-x475)>x476));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x489 = UINT32_MAX;
	int64_t x491 = -4619704LL;
	static uint32_t x492 = 267801U;
	uint32_t t45 = 2101720039U;

    t45 = (x489%((x490-x491)>x492));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x502 = UINT32_MAX;
	static uint64_t x503 = UINT64_MAX;
	uint8_t x504 = 7U;
	volatile int64_t t46 = -122265296753682703LL;

    t46 = (x501%((x502-x503)>x504));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MAX;
	volatile uint16_t x507 = UINT16_MAX;
	int64_t x508 = -20051819LL;

    t47 = (x505%((x506-x507)>x508));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x517 = 164582155LLU;
	static volatile uint32_t x518 = 8239U;
	uint64_t x519 = 468776512473LLU;
	volatile int16_t x520 = 0;
	static volatile uint64_t t48 = 7152LLU;

    t48 = (x517%((x518-x519)>x520));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x533 = -1;
	int32_t x534 = INT32_MIN;
	int64_t x536 = INT64_MIN;
	int32_t t49 = -419190574;

    t49 = (x533%((x534-x535)>x536));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x541 = 784880LLU;
	int64_t x542 = INT64_MAX;
	uint16_t x543 = 1176U;
	static uint32_t x544 = UINT32_MAX;
	uint64_t t50 = 412391LLU;

    t50 = (x541%((x542-x543)>x544));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x549 = -1LL;
	uint8_t x551 = 124U;
	uint64_t x552 = 16398432LLU;
	volatile int64_t t51 = 579LL;

    t51 = (x549%((x550-x551)>x552));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x577 = 2154370LLU;
	uint16_t x578 = UINT16_MAX;
	volatile int8_t x579 = -1;
	int8_t x580 = 0;
	uint64_t t52 = 540891812966247914LLU;

    t52 = (x577%((x578-x579)>x580));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x583 = 7;
	int32_t x584 = INT32_MIN;
	static uint32_t t53 = 193040U;

    t53 = (x581%((x582-x583)>x584));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x601 = 7U;
	int32_t x602 = INT32_MAX;
	uint8_t x603 = 4U;
	volatile int32_t t54 = -47649255;

    t54 = (x601%((x602-x603)>x604));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x606 = UINT16_MAX;
	int8_t x607 = INT8_MIN;
	volatile int64_t t55 = 2425558LL;

    t55 = (x605%((x606-x607)>x608));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x609 = 1U;
	uint64_t x610 = 111298713177869LLU;
	uint16_t x611 = 35U;
	static int8_t x612 = 42;

    t56 = (x609%((x610-x611)>x612));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x621 = INT32_MAX;
	uint16_t x622 = 29908U;
	int8_t x623 = INT8_MAX;
	static int64_t x624 = INT64_MIN;
	volatile int32_t t57 = -755156716;

    t57 = (x621%((x622-x623)>x624));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x633 = 235;
	uint32_t x634 = UINT32_MAX;
	uint64_t x635 = 242106739712302598LLU;
	volatile int32_t t58 = 3135068;

    t58 = (x633%((x634-x635)>x636));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x637 = -1;
	uint8_t x639 = UINT8_MAX;
	static int16_t x640 = -543;
	volatile int32_t t59 = -500935465;

    t59 = (x637%((x638-x639)>x640));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x689 = UINT16_MAX;
	int16_t x690 = 11317;
	uint8_t x691 = UINT8_MAX;

    t60 = (x689%((x690-x691)>x692));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x694 = 0LLU;
	static int8_t x695 = INT8_MAX;
	static int32_t t61 = 146414755;

    t61 = (x693%((x694-x695)>x696));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x698 = -1063LL;
	static int32_t x699 = INT32_MIN;
	static volatile int64_t x700 = INT64_MIN;
	volatile uint64_t t62 = 98976601460LLU;

    t62 = (x697%((x698-x699)>x700));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x717 = -54;
	int32_t x719 = INT32_MAX;
	uint32_t x720 = 20U;
	int32_t t63 = -6406;

    t63 = (x717%((x718-x719)>x720));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MAX;
	static uint8_t x724 = UINT8_MAX;

    t64 = (x721%((x722-x723)>x724));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x741 = INT16_MIN;
	uint32_t x742 = 30345411U;
	int64_t x744 = INT64_MIN;

    t65 = (x741%((x742-x743)>x744));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x745 = -1;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = 1U;
	static int64_t x748 = INT64_MIN;
	volatile int32_t t66 = 11;

    t66 = (x745%((x746-x747)>x748));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x762 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t67 = 92946688;

    t67 = (x761%((x762-x763)>x764));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x766 = 0U;
	int32_t x768 = INT32_MIN;
	int64_t t68 = -15749499388734262LL;

    t68 = (x765%((x766-x767)>x768));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	uint32_t x774 = UINT32_MAX;
	volatile int32_t x775 = INT32_MAX;
	int64_t x776 = -32251730202742LL;

    t69 = (x773%((x774-x775)>x776));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x777 = 0;
	static uint64_t x778 = 68LLU;
	int16_t x779 = 0;
	uint8_t x780 = 2U;
	volatile int32_t t70 = -5;

    t70 = (x777%((x778-x779)>x780));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x781 = 291819;
	volatile int32_t x782 = -75846;
	int16_t x783 = 7;
	uint32_t x784 = 22384698U;

    t71 = (x781%((x782-x783)>x784));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x790 = UINT16_MAX;
	int8_t x791 = -1;
	volatile int64_t x792 = INT64_MIN;
	static volatile int32_t t72 = -85310;

    t72 = (x789%((x790-x791)>x792));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x793 = UINT16_MAX;
	uint8_t x794 = UINT8_MAX;
	int64_t x796 = INT64_MIN;
	volatile int32_t t73 = 1748152;

    t73 = (x793%((x794-x795)>x796));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x801 = -2283934557354405318LL;
	volatile uint32_t x802 = 10328615U;
	uint32_t x803 = 84U;
	static volatile int32_t x804 = 6;
	static volatile int64_t t74 = -1205LL;

    t74 = (x801%((x802-x803)>x804));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	static int8_t x806 = INT8_MAX;
	volatile uint8_t x807 = UINT8_MAX;
	static int32_t x808 = INT32_MIN;
	uint32_t t75 = 80U;

    t75 = (x805%((x806-x807)>x808));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x822 = 1;
	uint32_t x823 = 3634908U;
	int32_t x824 = INT32_MIN;

    t76 = (x821%((x822-x823)>x824));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x830 = -1;
	static int64_t x831 = INT64_MIN;
	int64_t t77 = -885624806462696717LL;

    t77 = (x829%((x830-x831)>x832));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x833 = UINT64_MAX;
	static uint32_t x834 = 67547U;
	static int8_t x835 = INT8_MAX;
	static int64_t x836 = 1LL;
	volatile uint64_t t78 = 271183227937108453LLU;

    t78 = (x833%((x834-x835)>x836));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x841 = UINT16_MAX;
	volatile uint64_t x842 = UINT64_MAX;
	int32_t x843 = INT32_MAX;
	uint8_t x844 = 2U;
	volatile int32_t t79 = 22;

    t79 = (x841%((x842-x843)>x844));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x849 = 32U;
	volatile int64_t x850 = -394LL;
	int16_t x851 = -1;
	int32_t t80 = -58479670;

    t80 = (x849%((x850-x851)>x852));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x870 = 47;
	int32_t x871 = 144641820;
	uint64_t x872 = 5LLU;
	static int64_t t81 = -12389854769LL;

    t81 = (x869%((x870-x871)>x872));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x874 = -1;
	int32_t x875 = -1;
	static volatile int8_t x876 = -1;
	volatile int32_t t82 = -56662494;

    t82 = (x873%((x874-x875)>x876));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x881 = -7;
	uint16_t x882 = 3348U;
	int64_t x883 = -3049LL;
	static volatile int32_t t83 = 1;

    t83 = (x881%((x882-x883)>x884));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x885 = INT16_MAX;
	int16_t x886 = INT16_MAX;
	volatile uint64_t x887 = 11950231808854LLU;
	volatile int32_t t84 = -493;

    t84 = (x885%((x886-x887)>x888));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x917 = INT32_MAX;
	uint16_t x918 = UINT16_MAX;
	int64_t x919 = -1LL;
	uint16_t x920 = 0U;

    t85 = (x917%((x918-x919)>x920));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x946 = 219918986951LL;
	static uint64_t x947 = 1275LLU;
	int32_t t86 = -125423;

    t86 = (x945%((x946-x947)>x948));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x949 = INT8_MIN;
	int8_t x950 = INT8_MAX;
	int16_t x951 = INT16_MIN;
	volatile int8_t x952 = 7;
	int32_t t87 = -610634106;

    t87 = (x949%((x950-x951)>x952));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x969 = 16401LLU;
	static uint16_t x970 = 2029U;
	static int64_t x971 = -1LL;
	int64_t x972 = -1LL;
	uint64_t t88 = 456378470964707LLU;

    t88 = (x969%((x970-x971)>x972));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x989 = 33U;
	uint64_t x990 = UINT64_MAX;
	volatile uint64_t x991 = 2757935873LLU;

    t89 = (x989%((x990-x991)>x992));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x997 = UINT64_MAX;
	uint8_t x998 = 23U;
	uint64_t x999 = 43LLU;
	uint32_t x1000 = 39484036U;
	static uint64_t t90 = 41938220347051LLU;

    t90 = (x997%((x998-x999)>x1000));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x1002 = -1;
	uint32_t x1003 = 18U;
	static int32_t x1004 = INT32_MIN;
	static volatile int32_t t91 = -3489270;

    t91 = (x1001%((x1002-x1003)>x1004));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x1013 = 27;
	int32_t x1014 = INT32_MIN;
	int16_t x1015 = -1;
	uint32_t x1016 = 212U;
	volatile int32_t t92 = -3;

    t92 = (x1013%((x1014-x1015)>x1016));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x1049 = UINT16_MAX;
	int8_t x1050 = 8;
	uint64_t x1051 = 1072LLU;
	int64_t x1052 = INT64_MIN;
	volatile int32_t t93 = 2041903;

    t93 = (x1049%((x1050-x1051)>x1052));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x1053 = -1LL;
	int8_t x1054 = 7;
	int16_t x1055 = -1;
	int16_t x1056 = INT16_MIN;

    t94 = (x1053%((x1054-x1055)>x1056));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x1058 = -1;
	int32_t x1059 = INT32_MIN;
	uint32_t x1060 = 3U;
	volatile int32_t t95 = -995363771;

    t95 = (x1057%((x1058-x1059)>x1060));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x1066 = 47U;
	int8_t x1067 = -1;
	int32_t t96 = -101529189;

    t96 = (x1065%((x1066-x1067)>x1068));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x1089 = INT32_MIN;
	int16_t x1090 = -1;
	int8_t x1091 = INT8_MIN;
	static volatile int16_t x1092 = -1;

    t97 = (x1089%((x1090-x1091)>x1092));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x1093 = 11002;
	int16_t x1094 = INT16_MIN;
	uint32_t x1095 = 10411617U;
	int32_t t98 = 95986628;

    t98 = (x1093%((x1094-x1095)>x1096));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x1097 = INT32_MAX;
	int32_t x1098 = 461147672;
	uint64_t x1099 = UINT64_MAX;
	uint8_t x1100 = UINT8_MAX;
	static int32_t t99 = 5;

    t99 = (x1097%((x1098-x1099)>x1100));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x1110 = INT16_MIN;
	static uint64_t x1111 = 287LLU;
	int64_t x1112 = 2632474737LL;
	int32_t t100 = 346853262;

    t100 = (x1109%((x1110-x1111)>x1112));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x1114 = 1206U;
	int8_t x1115 = INT8_MIN;
	int32_t x1116 = INT32_MIN;

    t101 = (x1113%((x1114-x1115)>x1116));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x1137 = 397806LL;
	static int16_t x1138 = 1469;
	int8_t x1139 = INT8_MAX;
	uint8_t x1140 = 21U;

    t102 = (x1137%((x1138-x1139)>x1140));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x1141 = INT16_MIN;
	volatile int64_t x1142 = -1LL;
	int8_t x1143 = INT8_MIN;
	int32_t x1144 = INT32_MIN;
	int32_t t103 = -168;

    t103 = (x1141%((x1142-x1143)>x1144));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x1153 = 21701034U;
	volatile uint8_t x1154 = 1U;
	uint8_t x1155 = 0U;
	static volatile int32_t x1156 = INT32_MIN;

    t104 = (x1153%((x1154-x1155)>x1156));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x1165 = 924;
	static uint32_t x1166 = UINT32_MAX;
	int16_t x1167 = 12776;
	int32_t x1168 = -48065588;
	volatile int32_t t105 = 3;

    t105 = (x1165%((x1166-x1167)>x1168));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x1169 = -1;
	static int32_t x1170 = -1;
	volatile uint32_t x1171 = 0U;
	int32_t x1172 = INT32_MIN;
	volatile int32_t t106 = 784111;

    t106 = (x1169%((x1170-x1171)>x1172));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x1177 = 24U;
	uint16_t x1178 = 14588U;
	int32_t x1180 = -890;
	int32_t t107 = -1894165;

    t107 = (x1177%((x1178-x1179)>x1180));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x1181 = 0;
	int8_t x1182 = INT8_MIN;
	volatile int32_t x1183 = 173744;
	static int32_t t108 = -29;

    t108 = (x1181%((x1182-x1183)>x1184));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x1197 = 316733579729870338LLU;
	uint32_t x1198 = 455216U;
	int32_t x1199 = -1;
	int8_t x1200 = INT8_MAX;
	uint64_t t109 = 180LLU;

    t109 = (x1197%((x1198-x1199)>x1200));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x1240 = 30U;
	static volatile int32_t t110 = 6408831;

    t110 = (x1237%((x1238-x1239)>x1240));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x1242 = -1890;
	static int32_t x1243 = INT32_MIN;
	static volatile int16_t x1244 = -2;
	uint32_t t111 = 42483U;

    t111 = (x1241%((x1242-x1243)>x1244));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x1245 = INT8_MIN;
	uint64_t x1246 = UINT64_MAX;
	static uint32_t x1247 = 268300129U;
	uint8_t x1248 = 1U;
	volatile int32_t t112 = -234035105;

    t112 = (x1245%((x1246-x1247)>x1248));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1255 = 73429875255LL;
	int32_t t113 = 278;

    t113 = (x1253%((x1254-x1255)>x1256));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x1257 = 47;
	static uint64_t x1258 = 5219129757042125526LLU;
	static int64_t x1259 = INT64_MIN;
	uint16_t x1260 = 845U;
	volatile int32_t t114 = -326;

    t114 = (x1257%((x1258-x1259)>x1260));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x1269 = -99909293820333LL;
	static uint16_t x1270 = 435U;
	static int8_t x1271 = INT8_MIN;
	int8_t x1272 = -1;
	int64_t t115 = 959919005LL;

    t115 = (x1269%((x1270-x1271)>x1272));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x1281 = INT16_MIN;
	volatile int32_t x1282 = INT32_MIN;
	int64_t x1283 = INT64_MIN;
	volatile int32_t x1284 = INT32_MIN;
	volatile int32_t t116 = 243;

    t116 = (x1281%((x1282-x1283)>x1284));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x1295 = UINT32_MAX;

    t117 = (x1293%((x1294-x1295)>x1296));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x1297 = INT64_MIN;
	uint32_t x1298 = 1U;
	int64_t x1299 = 113568293LL;
	int64_t x1300 = INT64_MIN;
	volatile int64_t t118 = 14LL;

    t118 = (x1297%((x1298-x1299)>x1300));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x1301 = -1;
	volatile int8_t x1302 = INT8_MAX;
	static uint16_t x1303 = 60U;
	int32_t x1304 = -1;
	static volatile int32_t t119 = 63195;

    t119 = (x1301%((x1302-x1303)>x1304));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x1305 = UINT16_MAX;
	int64_t x1306 = -1LL;
	uint64_t x1307 = 1LLU;
	volatile int32_t t120 = -40235;

    t120 = (x1305%((x1306-x1307)>x1308));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1325 = INT16_MIN;
	volatile int16_t x1326 = INT16_MIN;
	int32_t x1328 = INT32_MIN;

    t121 = (x1325%((x1326-x1327)>x1328));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x1337 = UINT32_MAX;
	static volatile int8_t x1338 = INT8_MAX;
	uint16_t x1339 = 0U;
	uint32_t t122 = 11U;

    t122 = (x1337%((x1338-x1339)>x1340));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x1346 = 750;
	int8_t x1347 = -1;
	static int8_t x1348 = INT8_MIN;
	int64_t t123 = -3LL;

    t123 = (x1345%((x1346-x1347)>x1348));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1349 = -1;
	int32_t x1350 = INT32_MAX;
	int64_t x1351 = INT64_MAX;
	int64_t x1352 = INT64_MIN;
	int32_t t124 = -2058;

    t124 = (x1349%((x1350-x1351)>x1352));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1353 = 23271U;
	int32_t x1354 = -1;
	int64_t x1355 = -59682820156711LL;
	int32_t t125 = 21153806;

    t125 = (x1353%((x1354-x1355)>x1356));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1393 = INT64_MAX;
	static int16_t x1394 = INT16_MIN;
	int64_t x1395 = INT64_MIN;
	static volatile int64_t t126 = 67336258126LL;

    t126 = (x1393%((x1394-x1395)>x1396));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x1402 = -1;
	int32_t x1403 = -1;
	int64_t x1404 = INT64_MIN;
	static volatile uint64_t t127 = 10507941484120LLU;

    t127 = (x1401%((x1402-x1403)>x1404));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1405 = 39949536286088094LLU;
	int32_t x1406 = INT32_MAX;
	volatile int16_t x1408 = INT16_MAX;
	uint64_t t128 = 57251881697315732LLU;

    t128 = (x1405%((x1406-x1407)>x1408));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x1413 = 7U;
	static volatile uint64_t x1415 = 1028248472213262LLU;
	int16_t x1416 = 0;
	int32_t t129 = 903704196;

    t129 = (x1413%((x1414-x1415)>x1416));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1423 = INT32_MIN;
	volatile int32_t t130 = 794481;

    t130 = (x1421%((x1422-x1423)>x1424));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x1457 = -5231804225062587LL;
	static int16_t x1459 = INT16_MIN;
	volatile int8_t x1460 = -1;
	volatile int64_t t131 = -144686055610LL;

    t131 = (x1457%((x1458-x1459)>x1460));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1461 = -1;
	static int32_t t132 = 24548762;

    t132 = (x1461%((x1462-x1463)>x1464));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1465 = -1;
	static int8_t x1466 = INT8_MAX;
	int16_t x1467 = INT16_MIN;
	int32_t x1468 = 47;
	volatile int32_t t133 = 0;

    t133 = (x1465%((x1466-x1467)>x1468));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x1493 = INT16_MIN;
	static uint32_t x1494 = 2684140U;
	int32_t x1495 = INT32_MAX;

    t134 = (x1493%((x1494-x1495)>x1496));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1501 = -87;
	static uint8_t x1503 = 21U;
	int64_t x1504 = -1LL;

    t135 = (x1501%((x1502-x1503)>x1504));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1513 = 13U;
	int8_t x1514 = INT8_MIN;
	static uint16_t x1515 = 18U;
	int16_t x1516 = INT16_MIN;
	uint32_t t136 = 17819721U;

    t136 = (x1513%((x1514-x1515)>x1516));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1525 = INT8_MAX;
	uint16_t x1526 = UINT16_MAX;
	uint8_t x1528 = 16U;

    t137 = (x1525%((x1526-x1527)>x1528));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1530 = -1;
	int32_t t138 = 6;

    t138 = (x1529%((x1530-x1531)>x1532));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1533 = -264640127990LL;
	uint64_t x1535 = 968710931141LLU;
	uint32_t x1536 = 1660U;
	volatile int64_t t139 = -5765LL;

    t139 = (x1533%((x1534-x1535)>x1536));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x1537 = 1127834486U;
	uint16_t x1538 = UINT16_MAX;
	static int32_t x1539 = -1;
	static int64_t x1540 = INT64_MIN;
	uint32_t t140 = 905187U;

    t140 = (x1537%((x1538-x1539)>x1540));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1541 = -1;
	static uint16_t x1542 = UINT16_MAX;
	int8_t x1543 = INT8_MIN;
	int64_t x1544 = INT64_MIN;
	int32_t t141 = -14088266;

    t141 = (x1541%((x1542-x1543)>x1544));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1549 = -1;
	int8_t x1550 = -1;
	uint8_t x1551 = UINT8_MAX;
	int64_t x1552 = INT64_MIN;
	volatile int32_t t142 = -1;

    t142 = (x1549%((x1550-x1551)>x1552));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1558 = 2U;
	static uint8_t x1559 = 37U;
	int8_t x1560 = INT8_MIN;
	static int32_t t143 = -14087;

    t143 = (x1557%((x1558-x1559)>x1560));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1565 = -1;
	uint64_t x1566 = UINT64_MAX;
	volatile int32_t x1567 = INT32_MAX;
	int32_t t144 = 6282923;

    t144 = (x1565%((x1566-x1567)>x1568));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x1569 = -1;
	volatile uint8_t x1570 = UINT8_MAX;
	static int16_t x1571 = -1;
	int16_t x1572 = -4862;
	volatile int32_t t145 = 256336;

    t145 = (x1569%((x1570-x1571)>x1572));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1585 = 2168863077518255LLU;
	volatile int32_t x1586 = -18629251;
	int8_t x1587 = INT8_MAX;
	volatile int64_t x1588 = INT64_MIN;
	volatile uint64_t t146 = 53280801633066LLU;

    t146 = (x1585%((x1586-x1587)>x1588));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1589 = 4843;
	uint16_t x1590 = UINT16_MAX;
	int16_t x1591 = INT16_MIN;
	int16_t x1592 = -28;
	static volatile int32_t t147 = 3724266;

    t147 = (x1589%((x1590-x1591)>x1592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1595 = INT16_MIN;
	uint16_t x1596 = 5U;
	volatile int64_t t148 = -5661724846390LL;

    t148 = (x1593%((x1594-x1595)>x1596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x1605 = 9U;
	uint32_t x1606 = 346U;
	int8_t x1607 = -3;
	int32_t t149 = 5652;

    t149 = (x1605%((x1606-x1607)>x1608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1609 = INT16_MIN;
	int64_t x1610 = INT64_MAX;
	uint8_t x1611 = 6U;
	int32_t t150 = 1;

    t150 = (x1609%((x1610-x1611)>x1612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1613 = -1;
	static volatile int16_t x1614 = -3353;
	volatile uint32_t x1615 = 1U;
	volatile int32_t t151 = -1181;

    t151 = (x1613%((x1614-x1615)>x1616));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1625 = 73;
	int32_t x1626 = -1;
	static uint64_t x1628 = 13198451902228LLU;
	volatile int32_t t152 = -117667;

    t152 = (x1625%((x1626-x1627)>x1628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1637 = INT64_MIN;
	int8_t x1638 = INT8_MAX;
	int32_t x1640 = -1012;

    t153 = (x1637%((x1638-x1639)>x1640));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1641 = 3791U;
	volatile int8_t x1642 = INT8_MIN;
	uint32_t x1643 = 10876U;
	volatile int64_t x1644 = -1LL;
	uint32_t t154 = 7951U;

    t154 = (x1641%((x1642-x1643)>x1644));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1657 = INT16_MIN;
	static uint64_t x1658 = 511340102LLU;
	int32_t t155 = -58205;

    t155 = (x1657%((x1658-x1659)>x1660));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1670 = -919582;
	uint64_t x1671 = 22270000048857LLU;
	int64_t x1672 = 217994888502621LL;
	static int32_t t156 = 9;

    t156 = (x1669%((x1670-x1671)>x1672));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1673 = 15U;
	int64_t x1674 = INT64_MAX;
	int32_t x1675 = 1754073;
	static volatile int32_t t157 = 121858;

    t157 = (x1673%((x1674-x1675)>x1676));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x1677 = 0;
	int16_t x1678 = INT16_MIN;
	int64_t x1679 = INT64_MIN;
	int32_t x1680 = INT32_MIN;

    t158 = (x1677%((x1678-x1679)>x1680));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1685 = INT8_MAX;

    t159 = (x1685%((x1686-x1687)>x1688));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1689 = -1;
	int8_t x1691 = INT8_MAX;
	int32_t x1692 = INT32_MAX;
	int32_t t160 = -1942;

    t160 = (x1689%((x1690-x1691)>x1692));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1709 = INT32_MAX;
	volatile int16_t x1710 = 78;
	int32_t t161 = -438104;

    t161 = (x1709%((x1710-x1711)>x1712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x1725 = INT16_MAX;
	int8_t x1726 = INT8_MAX;
	uint8_t x1727 = 3U;
	uint8_t x1728 = 1U;
	static volatile int32_t t162 = -9760663;

    t162 = (x1725%((x1726-x1727)>x1728));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1729 = INT64_MAX;
	int16_t x1731 = -1;
	static uint64_t x1732 = 1429423972602LLU;

    t163 = (x1729%((x1730-x1731)>x1732));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x1735 = -1679278;
	int32_t x1736 = -1;
	int32_t t164 = -4248599;

    t164 = (x1733%((x1734-x1735)>x1736));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1737 = -7036;
	int16_t x1738 = INT16_MAX;
	int16_t x1740 = 2;
	volatile int32_t t165 = -372;

    t165 = (x1737%((x1738-x1739)>x1740));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1741 = 58679044LLU;
	volatile int16_t x1742 = 3141;
	uint64_t t166 = 0LLU;

    t166 = (x1741%((x1742-x1743)>x1744));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1745 = INT32_MIN;
	static int16_t x1746 = -431;
	volatile int32_t x1747 = INT32_MIN;
	uint8_t x1748 = UINT8_MAX;
	static int32_t t167 = -2;

    t167 = (x1745%((x1746-x1747)>x1748));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1749 = 8U;
	int8_t x1751 = INT8_MIN;
	static int64_t x1752 = INT64_MIN;
	int32_t t168 = 507729903;

    t168 = (x1749%((x1750-x1751)>x1752));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1753 = -1;
	uint32_t x1754 = 78877809U;
	uint16_t x1755 = 579U;
	int8_t x1756 = 4;
	volatile int32_t t169 = -36598;

    t169 = (x1753%((x1754-x1755)>x1756));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1783 = 16196U;
	uint32_t t170 = 31239641U;

    t170 = (x1781%((x1782-x1783)>x1784));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1793 = -1;
	int32_t x1794 = INT32_MIN;
	volatile int64_t x1795 = -21821435349LL;
	static int16_t x1796 = 0;

    t171 = (x1793%((x1794-x1795)>x1796));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x1802 = INT32_MAX;
	uint16_t x1803 = 28148U;
	int64_t x1804 = 984731146LL;
	volatile int32_t t172 = -66650696;

    t172 = (x1801%((x1802-x1803)>x1804));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1805 = UINT64_MAX;
	int16_t x1806 = INT16_MIN;
	static int64_t x1807 = INT64_MIN;
	int16_t x1808 = -1;
	uint64_t t173 = 646263561LLU;

    t173 = (x1805%((x1806-x1807)>x1808));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x1809 = INT64_MAX;
	uint32_t x1810 = 42277798U;
	static int8_t x1811 = -1;
	int32_t x1812 = 805337;
	int64_t t174 = -28274990LL;

    t174 = (x1809%((x1810-x1811)>x1812));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x1821 = UINT64_MAX;
	int8_t x1823 = -1;
	uint64_t x1824 = 452604181LLU;
	static volatile uint64_t t175 = 10751LLU;

    t175 = (x1821%((x1822-x1823)>x1824));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1829 = 22047519;
	uint64_t x1830 = UINT64_MAX;
	uint8_t x1832 = 3U;
	int32_t t176 = 333252173;

    t176 = (x1829%((x1830-x1831)>x1832));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1833 = 122304LL;
	int64_t x1834 = -580300LL;
	int8_t x1835 = -45;
	static uint64_t x1836 = 91849816LLU;
	volatile int64_t t177 = -2830734LL;

    t177 = (x1833%((x1834-x1835)>x1836));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1842 = INT16_MIN;
	int16_t x1843 = INT16_MAX;
	int64_t x1844 = INT64_MIN;
	int32_t t178 = 165295;

    t178 = (x1841%((x1842-x1843)>x1844));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x1853 = INT8_MAX;
	int16_t x1854 = -1;
	volatile int16_t x1855 = 0;
	int16_t x1856 = INT16_MIN;
	volatile int32_t t179 = -916707384;

    t179 = (x1853%((x1854-x1855)>x1856));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1857 = -1;
	static int16_t x1858 = INT16_MIN;
	int32_t x1860 = -1;
	int32_t t180 = 7;

    t180 = (x1857%((x1858-x1859)>x1860));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1873 = UINT8_MAX;
	static uint16_t x1874 = 12404U;
	int16_t x1875 = INT16_MIN;
	static int64_t x1876 = INT64_MIN;
	volatile int32_t t181 = 29579;

    t181 = (x1873%((x1874-x1875)>x1876));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1885 = 1U;
	static int8_t x1886 = INT8_MIN;
	volatile int64_t x1887 = INT64_MIN;
	uint8_t x1888 = 19U;
	static int32_t t182 = 101952;

    t182 = (x1885%((x1886-x1887)>x1888));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1897 = INT16_MAX;
	int64_t x1898 = -1LL;
	uint64_t x1899 = 1688167684500LLU;
	volatile int32_t t183 = -22216;

    t183 = (x1897%((x1898-x1899)>x1900));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1901 = 443472843899121LL;
	uint16_t x1902 = UINT16_MAX;
	int16_t x1903 = INT16_MIN;
	volatile int64_t t184 = 6LL;

    t184 = (x1901%((x1902-x1903)>x1904));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1917 = INT16_MIN;
	static int8_t x1918 = -3;
	volatile int16_t x1919 = -1;
	int32_t t185 = -790;

    t185 = (x1917%((x1918-x1919)>x1920));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1921 = 1964423272013LLU;
	static int64_t x1922 = INT64_MAX;
	volatile int32_t x1923 = 84;
	uint64_t t186 = 23919590LLU;

    t186 = (x1921%((x1922-x1923)>x1924));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1929 = UINT8_MAX;
	uint64_t x1931 = 1LLU;
	int8_t x1932 = 6;
	int32_t t187 = 18031346;

    t187 = (x1929%((x1930-x1931)>x1932));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1937 = INT32_MAX;
	static int32_t x1938 = INT32_MIN;
	uint32_t x1939 = UINT32_MAX;

    t188 = (x1937%((x1938-x1939)>x1940));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1969 = 1U;
	uint8_t x1970 = UINT8_MAX;
	int64_t x1971 = -1LL;
	int64_t x1972 = -15537570LL;
	int32_t t189 = 567;

    t189 = (x1969%((x1970-x1971)>x1972));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x1977 = UINT8_MAX;
	uint16_t x1978 = 3603U;
	int8_t x1979 = INT8_MIN;
	volatile int8_t x1980 = 18;
	volatile int32_t t190 = 932;

    t190 = (x1977%((x1978-x1979)>x1980));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1981 = -1;
	int16_t x1982 = INT16_MIN;
	volatile int8_t x1984 = 12;

    t191 = (x1981%((x1982-x1983)>x1984));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1985 = INT8_MIN;
	uint16_t x1986 = UINT16_MAX;
	int64_t x1987 = -11414815121067LL;
	int64_t x1988 = -905106587LL;
	int32_t t192 = 117531;

    t192 = (x1985%((x1986-x1987)>x1988));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x2005 = 7U;
	uint64_t x2006 = UINT64_MAX;
	volatile int8_t x2008 = 1;
	volatile int32_t t193 = 26054190;

    t193 = (x2005%((x2006-x2007)>x2008));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x2013 = UINT8_MAX;
	static volatile int8_t x2014 = INT8_MIN;
	static uint8_t x2015 = 91U;
	int64_t x2016 = INT64_MIN;
	volatile int32_t t194 = -61;

    t194 = (x2013%((x2014-x2015)>x2016));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x2025 = INT8_MAX;
	static int64_t x2026 = -273435991051316569LL;
	uint16_t x2027 = 12U;
	static volatile uint64_t x2028 = 63303LLU;
	int32_t t195 = -26;

    t195 = (x2025%((x2026-x2027)>x2028));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x2034 = 2752970865099LLU;
	static int16_t x2035 = INT16_MAX;
	uint64_t x2036 = 1511LLU;

    t196 = (x2033%((x2034-x2035)>x2036));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x2063 = -1;
	volatile int32_t x2064 = -1;
	volatile int32_t t197 = 5868;

    t197 = (x2061%((x2062-x2063)>x2064));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x2065 = 0;
	volatile int16_t x2067 = 0;
	int32_t x2068 = -83450378;

    t198 = (x2065%((x2066-x2067)>x2068));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x2069 = INT16_MIN;
	int32_t x2070 = -60613;

    t199 = (x2069%((x2070-x2071)>x2072));

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

