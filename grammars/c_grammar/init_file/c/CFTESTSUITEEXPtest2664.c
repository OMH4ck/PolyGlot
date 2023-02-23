
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

int16_t x5 = -1;
int32_t x6 = INT32_MAX;
static int32_t x23 = 8147166;
int64_t x33 = INT64_MIN;
int16_t x42 = -21;
int32_t x51 = -25311;
int16_t x58 = INT16_MIN;
int64_t x59 = -1LL;
int64_t x62 = -1LL;
int16_t x69 = 1;
int32_t x76 = INT32_MIN;
int32_t t10 = 1;
static int32_t x86 = INT32_MIN;
int64_t x88 = INT64_MIN;
int32_t t11 = INT32_MIN;
volatile uint64_t x97 = 348313291LLU;
int32_t x98 = -6;
static uint64_t x100 = 1530764957991131200LLU;
uint64_t x103 = UINT64_MAX;
static uint32_t x104 = UINT32_MAX;
int8_t x118 = -1;
int8_t x121 = INT8_MIN;
volatile int64_t x124 = -2195752236777LL;
volatile int64_t t17 = 889738261928460712LL;
static uint8_t x147 = UINT8_MAX;
int16_t x148 = -1;
int8_t x151 = INT8_MIN;
static uint8_t x153 = UINT8_MAX;
int8_t x154 = -3;
int8_t x156 = INT8_MIN;
int8_t x160 = -24;
uint16_t x170 = 499U;
uint8_t x172 = 13U;
int32_t x174 = -19;
int8_t x183 = INT8_MIN;
int32_t x188 = INT32_MIN;
int16_t x202 = -2511;
static int64_t x206 = -155467LL;
int64_t x230 = 7411LL;
int64_t x242 = -1LL;
uint32_t t32 = 249714U;
volatile int64_t t33 = 22233421709LL;
int32_t x269 = INT32_MIN;
volatile int64_t x303 = -1LL;
int32_t x307 = -661323;
volatile int64_t x333 = INT64_MAX;
static int32_t x364 = INT32_MIN;
uint32_t x365 = 1818347U;
volatile uint64_t x367 = 0LLU;
uint32_t x368 = 308023137U;
static int32_t x372 = 81739221;
uint16_t x374 = UINT16_MAX;
int8_t x401 = -1;
int32_t x402 = INT32_MIN;
volatile int32_t t50 = -150768652;
volatile int64_t x413 = 138558512178LL;
int64_t x418 = -1LL;
int8_t x423 = INT8_MIN;
volatile int8_t x463 = INT8_MIN;
int64_t x478 = -1LL;
int32_t x479 = INT32_MIN;
volatile uint32_t x480 = 159U;
static uint64_t x481 = 29767111407860LLU;
static int16_t x527 = -7;
volatile uint32_t t69 = UINT32_MAX;
int32_t t70 = 235856;
int32_t t72 = 1531313;
int8_t x619 = -1;
static volatile int32_t t74 = 490792;
volatile int32_t t76 = 418;
int32_t x644 = -3756;
int32_t t77 = 552311;
volatile int32_t x651 = 183862;
volatile int64_t x666 = INT64_MIN;
int16_t x668 = INT16_MAX;
int64_t t79 = 1005628LL;
int16_t x673 = INT16_MAX;
static int16_t x679 = INT16_MAX;
uint64_t x681 = 3281752145453LLU;
volatile uint64_t t82 = 697LLU;
volatile uint64_t x690 = UINT64_MAX;
int32_t t83 = 5293661;
static int16_t x713 = INT16_MAX;
int8_t x714 = -1;
int16_t x717 = -7421;
volatile int32_t x742 = INT32_MAX;
static volatile uint64_t x744 = 2105LLU;
int16_t x749 = INT16_MIN;
uint16_t x750 = 29320U;
uint32_t x751 = 430932U;
static int64_t x758 = 238LL;
static volatile int64_t x759 = INT64_MIN;
int8_t x776 = INT8_MAX;
uint32_t x810 = 326U;
static int32_t x811 = -1;
int16_t x814 = -254;
volatile int32_t x830 = INT32_MAX;
int32_t x837 = -1;
int8_t x845 = -1;
int32_t t103 = -1024890;
int64_t x849 = INT64_MIN;
volatile uint8_t x862 = UINT8_MAX;
uint16_t x863 = UINT16_MAX;
int64_t x874 = 420355857LL;
uint64_t x876 = 3043LLU;
volatile int32_t t108 = -52022;
static int64_t x899 = 983593LL;
static volatile int32_t t110 = INT32_MIN;
static int32_t x904 = INT32_MAX;
int16_t x914 = 68;
uint16_t x926 = 49U;
volatile int64_t x978 = INT64_MIN;
int8_t x979 = INT8_MIN;
uint32_t x980 = UINT32_MAX;
static int16_t x982 = INT16_MIN;
volatile uint32_t t120 = 22593188U;
int64_t x987 = INT64_MIN;
int64_t x988 = INT64_MIN;
volatile int32_t t122 = 897756104;
uint16_t x1002 = UINT16_MAX;
int32_t x1007 = 6;
int64_t x1024 = -11871384LL;
static int8_t x1055 = -1;
volatile int32_t x1061 = -1;
volatile int16_t x1070 = INT16_MAX;
int64_t x1090 = INT64_MAX;
volatile int16_t x1096 = INT16_MIN;
int64_t t134 = INT64_MAX;
uint8_t x1122 = UINT8_MAX;
int64_t x1124 = -1671027600712277LL;
int64_t x1126 = -45775634708LL;
int8_t x1131 = INT8_MIN;
int32_t x1133 = -28105;
volatile uint8_t x1144 = UINT8_MAX;
uint64_t x1165 = 65000424517266487LLU;
int16_t x1173 = -1;
volatile int32_t t144 = 3087539;
int8_t x1179 = INT8_MAX;
uint32_t x1180 = 3U;
int8_t x1187 = -31;
static volatile uint32_t t147 = UINT32_MAX;
static uint64_t x1191 = 2019450LLU;
uint64_t x1198 = UINT64_MAX;
uint16_t x1203 = 52U;
uint32_t t151 = UINT32_MAX;
uint8_t x1224 = 10U;
int32_t x1225 = INT32_MAX;
static uint32_t x1227 = 10U;
uint8_t x1228 = 0U;
int8_t x1258 = -1;
uint32_t x1259 = 8980998U;
int16_t x1265 = INT16_MIN;
volatile int32_t t159 = 517;
volatile int32_t t160 = -1;
static int16_t x1315 = -1;
int64_t x1340 = INT64_MIN;
static int16_t x1347 = INT16_MIN;
uint8_t x1356 = UINT8_MAX;
static uint16_t x1393 = UINT16_MAX;
volatile int32_t x1396 = INT32_MIN;
static int32_t x1423 = INT32_MIN;
int8_t x1432 = 3;
volatile int8_t x1458 = INT8_MIN;
static volatile int32_t x1459 = 57;
volatile uint64_t t173 = 1008LLU;
int8_t x1471 = -12;
uint32_t x1481 = 1U;
static uint8_t x1483 = 24U;
int32_t x1486 = 119;
int32_t x1488 = INT32_MIN;
int32_t t176 = -920;
int32_t x1508 = -214272;
int32_t x1520 = INT32_MIN;
int32_t t179 = INT32_MIN;
int32_t x1562 = -261347;
int8_t x1576 = -1;
volatile int32_t t182 = 4112684;
volatile int8_t x1585 = -5;
uint16_t x1587 = UINT16_MAX;
volatile int64_t x1603 = INT64_MIN;
static int64_t x1604 = 12LL;
volatile int32_t t187 = INT32_MIN;
static int64_t x1616 = -1LL;
int64_t t189 = INT64_MAX;
int16_t x1617 = INT16_MAX;
int32_t x1638 = INT32_MAX;
int32_t t193 = -43417369;
static int16_t x1651 = -3025;
int64_t x1652 = -1LL;
static int8_t x1654 = INT8_MIN;
int16_t x1655 = INT16_MIN;
static int8_t x1656 = INT8_MIN;
int64_t x1665 = INT64_MAX;
uint64_t x1668 = 8295252671579806LLU;
int8_t x1670 = INT8_MIN;
int8_t x1671 = -1;


void f0(void) {
    	static uint16_t x7 = UINT16_MAX;
	int32_t x8 = 6623;
	int32_t t0 = -3340626;

    t0 = (x5/((x6^x7)>x8));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = INT64_MAX;
	static int8_t x22 = 1;
	int16_t x24 = INT16_MIN;
	volatile int64_t t1 = INT64_MAX;

    t1 = (x21/((x22^x23)>x24));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x29 = 426U;
	int32_t x30 = 3;
	int64_t x31 = INT64_MAX;
	volatile int8_t x32 = 1;
	int32_t t2 = -31962;

    t2 = (x29/((x30^x31)>x32));

    if (t2 != 426) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = UINT8_MAX;
	int64_t t3 = INT64_MIN;

    t3 = (x33/((x34^x35)>x36));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x41 = 2839776713612631042LL;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t4 = -124LL;

    t4 = (x41/((x42^x43)>x44));

    if (t4 != 2839776713612631042LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x45 = -1;
	int16_t x46 = 3537;
	int16_t x47 = INT16_MAX;
	uint16_t x48 = 3415U;
	static int32_t t5 = 3877;

    t5 = (x45/((x46^x47)>x48));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x49 = INT32_MIN;
	static uint64_t x50 = 1387544182903LLU;
	uint32_t x52 = UINT32_MAX;
	static volatile int32_t t6 = INT32_MIN;

    t6 = (x49/((x50^x51)>x52));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x57 = -165;
	int8_t x60 = -1;
	static volatile int32_t t7 = 125903092;

    t7 = (x57/((x58^x59)>x60));

    if (t7 != -165) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x61 = 170U;
	uint16_t x63 = 6U;
	static int64_t x64 = INT64_MIN;
	int32_t t8 = -1752;

    t8 = (x61/((x62^x63)>x64));

    if (t8 != 170) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x70 = INT64_MIN;
	int32_t x71 = -1381092;
	int16_t x72 = INT16_MAX;
	volatile int32_t t9 = -37530736;

    t9 = (x69/((x70^x71)>x72));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x73 = -1;
	static int64_t x74 = -13902899322LL;
	static int16_t x75 = -1;

    t10 = (x73/((x74^x75)>x76));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x85 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;

    t11 = (x85/((x86^x87)>x88));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x99 = 8984U;
	static uint64_t t12 = 400903025371422LLU;

    t12 = (x97/((x98^x99)>x100));

    if (t12 != 348313291LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x101 = 2U;
	int32_t x102 = 491249;
	volatile int32_t t13 = -4883620;

    t13 = (x101/((x102^x103)>x104));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x105 = INT16_MAX;
	int8_t x106 = -17;
	int32_t x107 = 0;
	uint64_t x108 = 18LLU;
	int32_t t14 = 16654081;

    t14 = (x105/((x106^x107)>x108));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x117 = 2196283U;
	int8_t x119 = 8;
	int16_t x120 = INT16_MIN;
	uint32_t t15 = 182595U;

    t15 = (x117/((x118^x119)>x120));

    if (t15 != 2196283U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x122 = 1;
	int32_t x123 = INT32_MIN;
	volatile int32_t t16 = -71507;

    t16 = (x121/((x122^x123)>x124));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x133 = 7712LL;
	int64_t x134 = INT64_MIN;
	int32_t x135 = -2014968;
	int64_t x136 = 0LL;

    t17 = (x133/((x134^x135)>x136));

    if (t17 != 7712LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x141 = -1;
	int64_t x142 = -1LL;
	static int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t18 = 9598038;

    t18 = (x141/((x142^x143)>x144));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x145 = 62;
	uint16_t x146 = 525U;
	int32_t t19 = -747391;

    t19 = (x145/((x146^x147)>x148));

    if (t19 != 62) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x149 = 1460519798U;
	uint8_t x150 = 5U;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t20 = 30U;

    t20 = (x149/((x150^x151)>x152));

    if (t20 != 1460519798U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x155 = -1;
	int32_t t21 = -7558500;

    t21 = (x153/((x154^x155)>x156));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x157 = INT64_MAX;
	static int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	int64_t t22 = INT64_MAX;

    t22 = (x157/((x158^x159)>x160));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x169 = INT8_MAX;
	uint8_t x171 = 62U;
	int32_t t23 = 10655772;

    t23 = (x169/((x170^x171)>x172));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x173 = -1066880267805501647LL;
	int8_t x175 = INT8_MAX;
	volatile int16_t x176 = INT16_MIN;
	volatile int64_t t24 = -72LL;

    t24 = (x173/((x174^x175)>x176));

    if (t24 != -1066880267805501647LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x177 = 687U;
	int8_t x178 = -1;
	uint32_t x179 = 1200279956U;
	static volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t25 = 1;

    t25 = (x177/((x178^x179)>x180));

    if (t25 != 687) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x181 = 1;
	int16_t x182 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t26 = 103211887;

    t26 = (x181/((x182^x183)>x184));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x185 = 22U;
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MAX;
	volatile int32_t t27 = -23;

    t27 = (x185/((x186^x187)>x188));

    if (t27 != 22) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x193 = INT32_MIN;
	int32_t x194 = -53412507;
	uint64_t x195 = 5424819026533LLU;
	int8_t x196 = INT8_MAX;
	static int32_t t28 = INT32_MIN;

    t28 = (x193/((x194^x195)>x196));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x201 = 747752LLU;
	static int16_t x203 = -4802;
	uint16_t x204 = 1U;
	static uint64_t t29 = 15842007184409LLU;

    t29 = (x201/((x202^x203)>x204));

    if (t29 != 747752LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x205 = -1LL;
	int64_t x207 = -49572816LL;
	int32_t x208 = INT32_MIN;
	volatile int64_t t30 = 12087021LL;

    t30 = (x205/((x206^x207)>x208));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x229 = -1;
	volatile int32_t x231 = 124969;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t31 = -36;

    t31 = (x229/((x230^x231)>x232));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x241 = 357085799U;
	static int64_t x243 = INT64_MIN;
	static volatile int64_t x244 = INT64_MIN;

    t32 = (x241/((x242^x243)>x244));

    if (t32 != 357085799U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x245 = -1LL;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 0U;
	static uint32_t x248 = 3855324U;

    t33 = (x245/((x246^x247)>x248));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	static uint16_t x264 = 2U;
	uint32_t t34 = UINT32_MAX;

    t34 = (x261/((x262^x263)>x264));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x270 = -45;
	int8_t x271 = -1;
	static volatile int64_t x272 = 6LL;
	int32_t t35 = INT32_MIN;

    t35 = (x269/((x270^x271)>x272));

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = -1;
	int8_t x279 = -34;
	static int8_t x280 = INT8_MIN;
	uint32_t t36 = UINT32_MAX;

    t36 = (x277/((x278^x279)>x280));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	int8_t x304 = -1;
	int32_t t37 = -5;

    t37 = (x301/((x302^x303)>x304));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x305 = 175745U;
	int32_t x306 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	uint32_t t38 = 0U;

    t38 = (x305/((x306^x307)>x308));

    if (t38 != 175745U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int32_t x336 = 111275179;
	int64_t t39 = INT64_MAX;

    t39 = (x333/((x334^x335)>x336));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x349 = INT8_MIN;
	uint8_t x350 = 1U;
	static uint8_t x351 = 7U;
	static int16_t x352 = INT16_MIN;
	static int32_t t40 = 1;

    t40 = (x349/((x350^x351)>x352));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x353 = 219165LLU;
	volatile uint64_t x354 = 14353172710387583LLU;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = 63048158;
	volatile uint64_t t41 = 0LLU;

    t41 = (x353/((x354^x355)>x356));

    if (t41 != 219165LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x357 = 111;
	volatile uint16_t x358 = 39U;
	static int64_t x359 = 810823LL;
	int16_t x360 = INT16_MIN;
	int32_t t42 = 1;

    t42 = (x357/((x358^x359)>x360));

    if (t42 != 111) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x361 = 4;
	volatile int8_t x362 = 22;
	int32_t x363 = 123445;
	int32_t t43 = -34360410;

    t43 = (x361/((x362^x363)>x364));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x366 = INT32_MIN;
	uint32_t t44 = 1U;

    t44 = (x365/((x366^x367)>x368));

    if (t44 != 1818347U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x369 = -1LL;
	static int64_t x370 = INT64_MIN;
	static int16_t x371 = -1;
	int64_t t45 = -71794212957LL;

    t45 = (x369/((x370^x371)>x372));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x373 = INT32_MIN;
	int64_t x375 = INT64_MAX;
	uint32_t x376 = 42863720U;
	volatile int32_t t46 = INT32_MIN;

    t46 = (x373/((x374^x375)>x376));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x381 = 215529547U;
	int32_t x382 = -9841354;
	static int32_t x383 = -6370;
	int32_t x384 = -1;
	uint32_t t47 = 15U;

    t47 = (x381/((x382^x383)>x384));

    if (t47 != 215529547U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	volatile int64_t x391 = 0LL;
	static int8_t x392 = INT8_MIN;
	int32_t t48 = 106504;

    t48 = (x389/((x390^x391)>x392));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x393 = -1LL;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = 7;
	int16_t x396 = -1;
	int64_t t49 = -124LL;

    t49 = (x393/((x394^x395)>x396));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x403 = INT64_MAX;
	uint64_t x404 = 265284138700834363LLU;

    t50 = (x401/((x402^x403)>x404));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x405 = UINT64_MAX;
	int32_t x406 = 2063872;
	uint16_t x407 = 367U;
	int16_t x408 = -1;
	uint64_t t51 = UINT64_MAX;

    t51 = (x405/((x406^x407)>x408));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x414 = 2984U;
	uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 13U;
	static int64_t t52 = 930498930520041946LL;

    t52 = (x413/((x414^x415)>x416));

    if (t52 != 138558512178LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x417 = 87U;
	volatile int8_t x419 = 1;
	volatile int8_t x420 = -9;
	int32_t t53 = 8195;

    t53 = (x417/((x418^x419)>x420));

    if (t53 != 87) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x421 = 942U;
	uint32_t x422 = 131013303U;
	uint8_t x424 = 4U;
	volatile int32_t t54 = -14721259;

    t54 = (x421/((x422^x423)>x424));

    if (t54 != 942) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x425 = INT8_MIN;
	int32_t x426 = -1;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;
	int32_t t55 = -399180;

    t55 = (x425/((x426^x427)>x428));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x449 = -1;
	static int32_t x450 = 883;
	int64_t x451 = -1LL;
	volatile uint64_t x452 = 3254502881726807596LLU;
	static volatile int32_t t56 = 257;

    t56 = (x449/((x450^x451)>x452));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x461 = -2417;
	int32_t x462 = INT32_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t57 = 89478;

    t57 = (x461/((x462^x463)>x464));

    if (t57 != -2417) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x477 = INT16_MIN;
	volatile int32_t t58 = -25830176;

    t58 = (x477/((x478^x479)>x480));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x482 = -259003372086LL;
	int64_t x483 = 2686870LL;
	static int64_t x484 = INT64_MIN;
	uint64_t t59 = 2595408589221LLU;

    t59 = (x481/((x482^x483)>x484));

    if (t59 != 29767111407860LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x485 = 109124759;
	static int8_t x486 = INT8_MIN;
	static int8_t x487 = -1;
	volatile uint8_t x488 = 14U;
	static int32_t t60 = 6012615;

    t60 = (x485/((x486^x487)>x488));

    if (t60 != 109124759) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x489 = 3U;
	volatile int64_t x490 = INT64_MIN;
	static int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t61 = 40998;

    t61 = (x489/((x490^x491)>x492));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x493 = 38U;
	static uint64_t x494 = 20LLU;
	static int32_t x495 = INT32_MAX;
	uint32_t x496 = 3475U;
	int32_t t62 = -16;

    t62 = (x493/((x494^x495)>x496));

    if (t62 != 38) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x513 = -1;
	int16_t x514 = INT16_MIN;
	static volatile int32_t x515 = 7709501;
	int32_t x516 = INT32_MIN;
	volatile int32_t t63 = 419918132;

    t63 = (x513/((x514^x515)>x516));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x525 = -1;
	uint64_t x526 = 13648747688709LLU;
	int32_t x528 = 458422080;
	static volatile int32_t t64 = 4061;

    t64 = (x525/((x526^x527)>x528));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x541 = INT8_MAX;
	volatile uint64_t x542 = 268LLU;
	int32_t x543 = INT32_MIN;
	uint8_t x544 = UINT8_MAX;
	static int32_t t65 = 1339;

    t65 = (x541/((x542^x543)>x544));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x549 = 10U;
	uint64_t x550 = UINT64_MAX;
	volatile uint16_t x551 = 0U;
	volatile int32_t x552 = 2005310;
	uint32_t t66 = 58436081U;

    t66 = (x549/((x550^x551)>x552));

    if (t66 != 10U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x561 = -1LL;
	int8_t x562 = INT8_MIN;
	int64_t x563 = -1286277474081LL;
	static int8_t x564 = -29;
	static volatile int64_t t67 = -46242LL;

    t67 = (x561/((x562^x563)>x564));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x569 = 2LL;
	int8_t x570 = INT8_MIN;
	uint16_t x571 = 47U;
	uint32_t x572 = 2U;
	volatile int64_t t68 = -478LL;

    t68 = (x569/((x570^x571)>x572));

    if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x585 = UINT32_MAX;
	int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MIN;
	int16_t x588 = -5;

    t69 = (x585/((x586^x587)>x588));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x593 = INT16_MIN;
	int32_t x594 = 1;
	static uint64_t x595 = 193296560379215757LLU;
	static uint64_t x596 = 77582654039530LLU;

    t70 = (x593/((x594^x595)>x596));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x601 = 39625LL;
	int32_t x602 = 4;
	uint16_t x603 = UINT16_MAX;
	uint32_t x604 = 72U;
	volatile int64_t t71 = -863121557506588LL;

    t71 = (x601/((x602^x603)>x604));

    if (t71 != 39625LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x609 = 0U;
	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	int16_t x612 = INT16_MIN;

    t72 = (x609/((x610^x611)>x612));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x613 = 41U;
	int8_t x614 = 10;
	static int16_t x615 = -11;
	volatile int32_t x616 = -1455548;
	int32_t t73 = -277355;

    t73 = (x613/((x614^x615)>x616));

    if (t73 != 41) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x617 = 6;
	volatile uint64_t x618 = 96940899LLU;
	uint8_t x620 = 28U;

    t74 = (x617/((x618^x619)>x620));

    if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t75 = INT32_MIN;

    t75 = (x621/((x622^x623)>x624));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x625 = 2259U;
	uint64_t x626 = 2543051LLU;
	int32_t x627 = -8275;
	int32_t x628 = INT32_MIN;

    t76 = (x625/((x626^x627)>x628));

    if (t76 != 2259) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x641 = UINT16_MAX;
	uint8_t x642 = 2U;
	static volatile int16_t x643 = INT16_MAX;

    t77 = (x641/((x642^x643)>x644));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x649 = 2367U;
	static volatile int8_t x650 = INT8_MIN;
	static volatile uint64_t x652 = 1204909783311427LLU;
	volatile uint32_t t78 = 2016662U;

    t78 = (x649/((x650^x651)>x652));

    if (t78 != 2367U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x665 = 1662LL;
	static uint64_t x667 = UINT64_MAX;

    t79 = (x665/((x666^x667)>x668));

    if (t79 != 1662LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x674 = INT16_MIN;
	uint8_t x675 = UINT8_MAX;
	volatile int16_t x676 = INT16_MIN;
	int32_t t80 = 402;

    t80 = (x673/((x674^x675)>x676));

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x677 = -112009328;
	int32_t x678 = 446762962;
	int64_t x680 = -3906955LL;
	volatile int32_t t81 = -7932378;

    t81 = (x677/((x678^x679)>x680));

    if (t81 != -112009328) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x682 = UINT16_MAX;
	uint32_t x683 = 435295082U;
	uint64_t x684 = 0LLU;

    t82 = (x681/((x682^x683)>x684));

    if (t82 != 3281752145453LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x689 = 31U;
	uint16_t x691 = 8684U;
	int32_t x692 = INT32_MIN;

    t83 = (x689/((x690^x691)>x692));

    if (t83 != 31) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	static int32_t x695 = -1;
	int16_t x696 = INT16_MIN;
	int32_t t84 = 257;

    t84 = (x693/((x694^x695)>x696));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x697 = -1064400170;
	uint32_t x698 = UINT32_MAX;
	uint8_t x699 = 3U;
	int16_t x700 = INT16_MIN;
	int32_t t85 = -913;

    t85 = (x697/((x698^x699)>x700));

    if (t85 != -1064400170) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x705 = INT8_MAX;
	volatile int8_t x706 = -1;
	uint16_t x707 = 119U;
	int32_t x708 = INT32_MIN;
	volatile int32_t t86 = 24086;

    t86 = (x705/((x706^x707)>x708));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x715 = -1;
	int32_t x716 = INT32_MIN;
	volatile int32_t t87 = -14;

    t87 = (x713/((x714^x715)>x716));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x718 = INT8_MAX;
	int32_t x719 = INT32_MIN;
	uint32_t x720 = 469U;
	static volatile int32_t t88 = -124702941;

    t88 = (x717/((x718^x719)>x720));

    if (t88 != -7421) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x741 = 7792728LLU;
	int8_t x743 = INT8_MIN;
	volatile uint64_t t89 = 3312790145956LLU;

    t89 = (x741/((x742^x743)>x744));

    if (t89 != 7792728LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x752 = 5502U;
	static int32_t t90 = -28912173;

    t90 = (x749/((x750^x751)>x752));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	static int64_t x760 = INT64_MIN;
	volatile int32_t t91 = 30235857;

    t91 = (x757/((x758^x759)>x760));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x761 = 1LL;
	static int32_t x762 = -1;
	volatile uint8_t x763 = UINT8_MAX;
	static int64_t x764 = INT64_MIN;
	int64_t t92 = -866LL;

    t92 = (x761/((x762^x763)>x764));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x773 = INT64_MIN;
	uint64_t x774 = UINT64_MAX;
	uint16_t x775 = 192U;
	int64_t t93 = INT64_MIN;

    t93 = (x773/((x774^x775)>x776));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x801 = -1;
	uint32_t x802 = UINT32_MAX;
	volatile uint8_t x803 = UINT8_MAX;
	uint8_t x804 = 20U;
	volatile int32_t t94 = -29687021;

    t94 = (x801/((x802^x803)>x804));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x805 = -1;
	volatile int16_t x806 = INT16_MIN;
	int64_t x807 = -1LL;
	static uint8_t x808 = 1U;
	int32_t t95 = -5;

    t95 = (x805/((x806^x807)>x808));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x809 = INT8_MIN;
	static int32_t x812 = INT32_MIN;
	static int32_t t96 = -1;

    t96 = (x809/((x810^x811)>x812));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	uint32_t x815 = UINT32_MAX;
	int64_t x816 = -53LL;
	int32_t t97 = -1;

    t97 = (x813/((x814^x815)>x816));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x817 = INT32_MIN;
	volatile int64_t x818 = INT64_MAX;
	static int32_t x819 = 1013026;
	int32_t x820 = INT32_MAX;
	static volatile int32_t t98 = INT32_MIN;

    t98 = (x817/((x818^x819)>x820));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x821 = INT32_MIN;
	int16_t x822 = -1;
	uint16_t x823 = 19U;
	uint32_t x824 = 7U;
	static int32_t t99 = INT32_MIN;

    t99 = (x821/((x822^x823)>x824));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x829 = 3226153U;
	uint64_t x831 = UINT64_MAX;
	volatile int64_t x832 = INT64_MAX;
	volatile uint32_t t100 = 1U;

    t100 = (x829/((x830^x831)>x832));

    if (t100 != 3226153U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x838 = INT8_MAX;
	uint32_t x839 = 699U;
	volatile int16_t x840 = 30;
	volatile int32_t t101 = 2893;

    t101 = (x837/((x838^x839)>x840));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x841 = INT8_MIN;
	volatile uint32_t x842 = 296047U;
	static int64_t x843 = INT64_MAX;
	int16_t x844 = INT16_MAX;
	volatile int32_t t102 = 75468;

    t102 = (x841/((x842^x843)>x844));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x846 = -1;
	volatile uint16_t x847 = UINT16_MAX;
	volatile uint32_t x848 = 32628U;

    t103 = (x845/((x846^x847)>x848));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x850 = -3;
	volatile int64_t x851 = INT64_MIN;
	volatile int32_t x852 = INT32_MIN;
	int64_t t104 = INT64_MIN;

    t104 = (x849/((x850^x851)>x852));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x857 = -29;
	static uint8_t x858 = 42U;
	static volatile uint64_t x859 = UINT64_MAX;
	uint16_t x860 = 4511U;
	volatile int32_t t105 = -56828;

    t105 = (x857/((x858^x859)>x860));

    if (t105 != -29) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x861 = INT8_MIN;
	static int64_t x864 = INT64_MIN;
	int32_t t106 = -1;

    t106 = (x861/((x862^x863)>x864));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x865 = -1;
	int16_t x866 = -49;
	int8_t x867 = -1;
	static volatile int64_t x868 = INT64_MIN;
	volatile int32_t t107 = -1684169;

    t107 = (x865/((x866^x867)>x868));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x873 = 15;
	int32_t x875 = -10;

    t108 = (x873/((x874^x875)>x876));

    if (t108 != 15) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x881 = INT8_MIN;
	int16_t x882 = INT16_MIN;
	volatile int32_t x883 = INT32_MIN;
	uint64_t x884 = 52223676LLU;
	int32_t t109 = 8104;

    t109 = (x881/((x882^x883)>x884));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x897 = INT32_MIN;
	int16_t x898 = 2023;
	static int64_t x900 = -1LL;

    t110 = (x897/((x898^x899)>x900));

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x901 = -379176111014929LL;
	uint32_t x902 = 2U;
	uint64_t x903 = UINT64_MAX;
	volatile int64_t t111 = -14531901077329LL;

    t111 = (x901/((x902^x903)>x904));

    if (t111 != -379176111014929LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x905 = -1;
	volatile int64_t x906 = INT64_MAX;
	int8_t x907 = 0;
	int16_t x908 = INT16_MAX;
	int32_t t112 = 1;

    t112 = (x905/((x906^x907)>x908));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x909 = INT8_MIN;
	static int32_t x910 = INT32_MIN;
	uint16_t x911 = 8U;
	int32_t x912 = INT32_MIN;
	int32_t t113 = 9102893;

    t113 = (x909/((x910^x911)>x912));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x913 = 17523286LL;
	uint32_t x915 = UINT32_MAX;
	static uint8_t x916 = 11U;
	int64_t t114 = -203694436806456755LL;

    t114 = (x913/((x914^x915)>x916));

    if (t114 != 17523286LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x917 = 3541U;
	uint64_t x918 = 57426214545LLU;
	volatile int16_t x919 = -1;
	int64_t x920 = INT64_MIN;
	static int32_t t115 = -1;

    t115 = (x917/((x918^x919)>x920));

    if (t115 != 3541) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x925 = -1;
	int32_t x927 = INT32_MAX;
	int64_t x928 = -1LL;
	static int32_t t116 = -302425949;

    t116 = (x925/((x926^x927)>x928));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x945 = 6U;
	volatile int32_t x946 = INT32_MIN;
	volatile int64_t x947 = -2221307461462LL;
	static int64_t x948 = -1LL;
	volatile uint32_t t117 = 141713U;

    t117 = (x945/((x946^x947)>x948));

    if (t117 != 6U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x973 = 9U;
	int32_t x974 = INT32_MAX;
	int16_t x975 = 3;
	int16_t x976 = 1;
	volatile int32_t t118 = -85;

    t118 = (x973/((x974^x975)>x976));

    if (t118 != 9) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x977 = -14374194;
	static int32_t t119 = 3520;

    t119 = (x977/((x978^x979)>x980));

    if (t119 != -14374194) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x981 = 191362505U;
	uint32_t x983 = 2027U;
	static uint64_t x984 = 1429LLU;

    t120 = (x981/((x982^x983)>x984));

    if (t120 != 191362505U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x985 = INT8_MIN;
	volatile int64_t x986 = -6396LL;
	int32_t t121 = 1;

    t121 = (x985/((x986^x987)>x988));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x997 = -1;
	int8_t x998 = -10;
	int32_t x999 = -1;
	int16_t x1000 = INT16_MIN;

    t122 = (x997/((x998^x999)>x1000));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x1001 = UINT16_MAX;
	static int64_t x1003 = 7249LL;
	static volatile int8_t x1004 = 1;
	int32_t t123 = 2;

    t123 = (x1001/((x1002^x1003)>x1004));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x1005 = INT16_MIN;
	static int64_t x1006 = -1LL;
	int16_t x1008 = INT16_MIN;
	volatile int32_t t124 = -68433;

    t124 = (x1005/((x1006^x1007)>x1008));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1017 = -518105;
	static int64_t x1018 = INT64_MAX;
	int8_t x1019 = -1;
	uint64_t x1020 = 31027950012019012LLU;
	static volatile int32_t t125 = 468156868;

    t125 = (x1017/((x1018^x1019)>x1020));

    if (t125 != -518105) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1021 = -1;
	static int32_t x1022 = 1;
	int32_t x1023 = 14;
	volatile int32_t t126 = -7319;

    t126 = (x1021/((x1022^x1023)>x1024));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x1041 = INT64_MAX;
	static int64_t x1042 = INT64_MIN;
	static int8_t x1043 = INT8_MIN;
	uint16_t x1044 = 391U;
	int64_t t127 = INT64_MAX;

    t127 = (x1041/((x1042^x1043)>x1044));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1053 = -6876575;
	int8_t x1054 = INT8_MIN;
	uint8_t x1056 = 17U;
	volatile int32_t t128 = 61206862;

    t128 = (x1053/((x1054^x1055)>x1056));

    if (t128 != -6876575) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x1062 = UINT32_MAX;
	int8_t x1063 = 58;
	volatile int32_t x1064 = INT32_MIN;
	volatile int32_t t129 = -674;

    t129 = (x1061/((x1062^x1063)>x1064));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1065 = -7;
	int32_t x1066 = INT32_MIN;
	int8_t x1067 = INT8_MIN;
	volatile uint8_t x1068 = 9U;
	static volatile int32_t t130 = -191;

    t130 = (x1065/((x1066^x1067)>x1068));

    if (t130 != -7) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x1069 = INT8_MAX;
	uint32_t x1071 = 372164U;
	static uint64_t x1072 = 486LLU;
	volatile int32_t t131 = 7929175;

    t131 = (x1069/((x1070^x1071)>x1072));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1077 = INT16_MAX;
	static int32_t x1078 = INT32_MIN;
	int32_t x1079 = -1;
	int8_t x1080 = INT8_MIN;
	static volatile int32_t t132 = 63055320;

    t132 = (x1077/((x1078^x1079)>x1080));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1089 = INT32_MIN;
	static uint16_t x1091 = 20U;
	uint16_t x1092 = 711U;
	volatile int32_t t133 = INT32_MIN;

    t133 = (x1089/((x1090^x1091)>x1092));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1093 = INT64_MAX;
	int8_t x1094 = -53;
	int8_t x1095 = 0;

    t134 = (x1093/((x1094^x1095)>x1096));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1097 = INT64_MIN;
	volatile int16_t x1098 = 1;
	volatile int64_t x1099 = 1077089213024511591LL;
	static uint8_t x1100 = 13U;
	volatile int64_t t135 = INT64_MIN;

    t135 = (x1097/((x1098^x1099)>x1100));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1121 = 81;
	static int8_t x1123 = -6;
	volatile int32_t t136 = 6;

    t136 = (x1121/((x1122^x1123)>x1124));

    if (t136 != 81) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1125 = 126301;
	int16_t x1127 = -54;
	uint8_t x1128 = 0U;
	int32_t t137 = -1565;

    t137 = (x1125/((x1126^x1127)>x1128));

    if (t137 != 126301) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1129 = INT8_MIN;
	int16_t x1130 = INT16_MIN;
	int64_t x1132 = INT64_MIN;
	static volatile int32_t t138 = 235541776;

    t138 = (x1129/((x1130^x1131)>x1132));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x1134 = -1423520863295153867LL;
	int32_t x1135 = INT32_MIN;
	int32_t x1136 = INT32_MAX;
	static int32_t t139 = 2357;

    t139 = (x1133/((x1134^x1135)>x1136));

    if (t139 != -28105) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x1137 = -2046;
	volatile uint64_t x1138 = 133651820LLU;
	int32_t x1139 = INT32_MIN;
	uint32_t x1140 = 398364U;
	static int32_t t140 = -138639;

    t140 = (x1137/((x1138^x1139)>x1140));

    if (t140 != -2046) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x1141 = 181U;
	volatile int16_t x1142 = -11879;
	int16_t x1143 = INT16_MIN;
	uint32_t t141 = 1230U;

    t141 = (x1141/((x1142^x1143)>x1144));

    if (t141 != 181U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x1149 = 7;
	uint16_t x1150 = UINT16_MAX;
	int32_t x1151 = 246003395;
	int32_t x1152 = INT32_MIN;
	int32_t t142 = -1199;

    t142 = (x1149/((x1150^x1151)>x1152));

    if (t142 != 7) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1166 = INT64_MIN;
	static volatile int64_t x1167 = -658697714LL;
	static int32_t x1168 = INT32_MIN;
	uint64_t t143 = 91560773977305LLU;

    t143 = (x1165/((x1166^x1167)>x1168));

    if (t143 != 65000424517266487LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1174 = -13282636;
	static volatile int32_t x1175 = -1740;
	int16_t x1176 = -1;

    t144 = (x1173/((x1174^x1175)>x1176));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x1177 = 8U;
	static int8_t x1178 = INT8_MIN;
	static int32_t t145 = 1;

    t145 = (x1177/((x1178^x1179)>x1180));

    if (t145 != 8) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1181 = INT16_MAX;
	int8_t x1182 = 0;
	int16_t x1183 = INT16_MAX;
	int32_t x1184 = INT32_MIN;
	volatile int32_t t146 = -2605207;

    t146 = (x1181/((x1182^x1183)>x1184));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1185 = UINT32_MAX;
	int64_t x1186 = INT64_MIN;
	static int32_t x1188 = INT32_MIN;

    t147 = (x1185/((x1186^x1187)>x1188));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1189 = 15945U;
	static int8_t x1190 = 1;
	uint64_t x1192 = 1496LLU;
	volatile int32_t t148 = 1;

    t148 = (x1189/((x1190^x1191)>x1192));

    if (t148 != 15945) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1193 = -1;
	volatile int64_t x1194 = INT64_MAX;
	volatile int8_t x1195 = 12;
	int8_t x1196 = -1;
	volatile int32_t t149 = 14235;

    t149 = (x1193/((x1194^x1195)>x1196));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x1197 = 406712U;
	int64_t x1199 = INT64_MIN;
	uint8_t x1200 = 2U;
	uint32_t t150 = 11703U;

    t150 = (x1197/((x1198^x1199)>x1200));

    if (t150 != 406712U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1201 = UINT32_MAX;
	volatile int32_t x1202 = INT32_MAX;
	int8_t x1204 = INT8_MIN;

    t151 = (x1201/((x1202^x1203)>x1204));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1217 = UINT16_MAX;
	static int16_t x1218 = INT16_MIN;
	int32_t x1219 = INT32_MIN;
	int8_t x1220 = INT8_MIN;
	int32_t t152 = -1;

    t152 = (x1217/((x1218^x1219)>x1220));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x1221 = 1618U;
	uint8_t x1222 = 7U;
	uint64_t x1223 = 26412610LLU;
	volatile int32_t t153 = 506505108;

    t153 = (x1221/((x1222^x1223)>x1224));

    if (t153 != 1618) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x1226 = INT8_MIN;
	int32_t t154 = INT32_MAX;

    t154 = (x1225/((x1226^x1227)>x1228));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1237 = -1;
	int32_t x1238 = INT32_MAX;
	uint32_t x1239 = UINT32_MAX;
	int64_t x1240 = -11LL;
	volatile int32_t t155 = 55;

    t155 = (x1237/((x1238^x1239)>x1240));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1249 = INT32_MIN;
	int64_t x1250 = INT64_MIN;
	volatile uint64_t x1251 = UINT64_MAX;
	volatile int8_t x1252 = 58;
	int32_t t156 = INT32_MIN;

    t156 = (x1249/((x1250^x1251)>x1252));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x1253 = 482187135240556LLU;
	volatile int8_t x1254 = INT8_MIN;
	volatile int64_t x1255 = -527144043LL;
	volatile uint16_t x1256 = 1U;
	volatile uint64_t t157 = 315121828LLU;

    t157 = (x1253/((x1254^x1255)>x1256));

    if (t157 != 482187135240556LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1257 = INT16_MAX;
	uint8_t x1260 = 13U;
	int32_t t158 = 62349;

    t158 = (x1257/((x1258^x1259)>x1260));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1266 = INT8_MAX;
	uint16_t x1267 = UINT16_MAX;
	static int64_t x1268 = -1LL;

    t159 = (x1265/((x1266^x1267)>x1268));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1285 = -1;
	int32_t x1286 = INT32_MIN;
	volatile int64_t x1287 = INT64_MIN;
	volatile uint32_t x1288 = 44080U;

    t160 = (x1285/((x1286^x1287)>x1288));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1305 = 15U;
	int32_t x1306 = 5703;
	int8_t x1307 = 44;
	int32_t x1308 = 1112;
	int32_t t161 = 492828;

    t161 = (x1305/((x1306^x1307)>x1308));

    if (t161 != 15) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x1313 = 435U;
	uint64_t x1314 = 111949919028386LLU;
	static volatile int64_t x1316 = INT64_MIN;
	static volatile int32_t t162 = -1;

    t162 = (x1313/((x1314^x1315)>x1316));

    if (t162 != 435) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1337 = 7LLU;
	uint8_t x1338 = 28U;
	int32_t x1339 = INT32_MIN;
	volatile uint64_t t163 = 792610260LLU;

    t163 = (x1337/((x1338^x1339)>x1340));

    if (t163 != 7LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1345 = 10559LL;
	int64_t x1346 = INT64_MIN;
	uint8_t x1348 = 79U;
	int64_t t164 = -65003883664509LL;

    t164 = (x1345/((x1346^x1347)>x1348));

    if (t164 != 10559LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1353 = -1LL;
	int8_t x1354 = INT8_MAX;
	static int64_t x1355 = INT64_MAX;
	int64_t t165 = 507831651034LL;

    t165 = (x1353/((x1354^x1355)>x1356));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1361 = INT32_MIN;
	uint8_t x1362 = UINT8_MAX;
	int64_t x1363 = -1LL;
	volatile uint64_t x1364 = 1835157LLU;
	int32_t t166 = INT32_MIN;

    t166 = (x1361/((x1362^x1363)>x1364));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1385 = 68;
	uint8_t x1386 = 0U;
	static int64_t x1387 = INT64_MIN;
	uint64_t x1388 = 2190LLU;
	static volatile int32_t t167 = -48189;

    t167 = (x1385/((x1386^x1387)>x1388));

    if (t167 != 68) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1394 = -182;
	int64_t x1395 = INT64_MIN;
	static int32_t t168 = 15248748;

    t168 = (x1393/((x1394^x1395)>x1396));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1421 = INT64_MAX;
	static int64_t x1422 = -1LL;
	volatile int32_t x1424 = 0;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x1421/((x1422^x1423)>x1424));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x1429 = 18667294U;
	int32_t x1430 = INT32_MIN;
	int32_t x1431 = -3;
	uint32_t t170 = 4044100U;

    t170 = (x1429/((x1430^x1431)>x1432));

    if (t170 != 18667294U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1433 = 11912381085555403LLU;
	static uint32_t x1434 = UINT32_MAX;
	int32_t x1435 = 218795736;
	uint8_t x1436 = 12U;
	uint64_t t171 = 3472581639378714200LLU;

    t171 = (x1433/((x1434^x1435)>x1436));

    if (t171 != 11912381085555403LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1457 = INT16_MIN;
	static int32_t x1460 = INT32_MIN;
	volatile int32_t t172 = -4;

    t172 = (x1457/((x1458^x1459)>x1460));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1461 = 94319896211056LLU;
	static int8_t x1462 = INT8_MIN;
	int8_t x1463 = INT8_MAX;
	volatile int16_t x1464 = INT16_MIN;

    t173 = (x1461/((x1462^x1463)>x1464));

    if (t173 != 94319896211056LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1469 = INT32_MAX;
	volatile int32_t x1470 = INT32_MIN;
	int8_t x1472 = INT8_MIN;
	volatile int32_t t174 = INT32_MAX;

    t174 = (x1469/((x1470^x1471)>x1472));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1482 = -1;
	int16_t x1484 = INT16_MIN;
	volatile uint32_t t175 = 109U;

    t175 = (x1481/((x1482^x1483)>x1484));

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1485 = INT8_MIN;
	int64_t x1487 = 2998622618648953480LL;

    t176 = (x1485/((x1486^x1487)>x1488));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1505 = 1;
	volatile uint16_t x1506 = 10U;
	int8_t x1507 = INT8_MAX;
	static volatile int32_t t177 = 7;

    t177 = (x1505/((x1506^x1507)>x1508));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1517 = -1;
	int64_t x1518 = 218LL;
	int64_t x1519 = INT64_MAX;
	volatile int32_t t178 = -109600506;

    t178 = (x1517/((x1518^x1519)>x1520));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1525 = INT32_MIN;
	int16_t x1526 = INT16_MAX;
	uint64_t x1527 = 2962207620162203LLU;
	uint16_t x1528 = 7226U;

    t179 = (x1525/((x1526^x1527)>x1528));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1561 = 0U;
	int16_t x1563 = INT16_MIN;
	static int32_t x1564 = -1;
	static int32_t t180 = 1;

    t180 = (x1561/((x1562^x1563)>x1564));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x1569 = 2075797U;
	int64_t x1570 = INT64_MIN;
	uint64_t x1571 = UINT64_MAX;
	static uint16_t x1572 = 22U;
	volatile uint32_t t181 = 123U;

    t181 = (x1569/((x1570^x1571)>x1572));

    if (t181 != 2075797U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1573 = -1;
	int64_t x1574 = INT64_MAX;
	int16_t x1575 = INT16_MAX;

    t182 = (x1573/((x1574^x1575)>x1576));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1586 = -2;
	int64_t x1588 = INT64_MIN;
	static volatile int32_t t183 = 369;

    t183 = (x1585/((x1586^x1587)>x1588));

    if (t183 != -5) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1593 = 25;
	int32_t x1594 = 12;
	int8_t x1595 = INT8_MIN;
	int64_t x1596 = INT64_MIN;
	volatile int32_t t184 = 4198;

    t184 = (x1593/((x1594^x1595)>x1596));

    if (t184 != 25) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1597 = 2U;
	volatile int16_t x1598 = INT16_MIN;
	volatile int64_t x1599 = INT64_MIN;
	uint16_t x1600 = 14U;
	int32_t t185 = 17354767;

    t185 = (x1597/((x1598^x1599)>x1600));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x1601 = INT8_MAX;
	int64_t x1602 = -219602696977003LL;
	static int32_t t186 = -11653;

    t186 = (x1601/((x1602^x1603)>x1604));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1605 = INT32_MIN;
	int16_t x1606 = INT16_MIN;
	volatile int64_t x1607 = -1LL;
	int8_t x1608 = -63;

    t187 = (x1605/((x1606^x1607)>x1608));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1609 = -49547319;
	uint8_t x1610 = 5U;
	int8_t x1611 = INT8_MIN;
	int32_t x1612 = INT32_MIN;
	volatile int32_t t188 = 1464973;

    t188 = (x1609/((x1610^x1611)>x1612));

    if (t188 != -49547319) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1613 = INT64_MAX;
	int32_t x1614 = INT32_MAX;
	static volatile int8_t x1615 = 5;

    t189 = (x1613/((x1614^x1615)>x1616));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1618 = UINT16_MAX;
	int64_t x1619 = -3209663499132789LL;
	volatile uint64_t x1620 = 267963LLU;
	static int32_t t190 = 48919064;

    t190 = (x1617/((x1618^x1619)>x1620));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1625 = 12;
	int64_t x1626 = INT64_MIN;
	int16_t x1627 = -1;
	int16_t x1628 = 83;
	volatile int32_t t191 = -631967;

    t191 = (x1625/((x1626^x1627)>x1628));

    if (t191 != 12) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1629 = UINT16_MAX;
	int8_t x1630 = 49;
	int8_t x1631 = INT8_MAX;
	int8_t x1632 = -1;
	static volatile int32_t t192 = -1;

    t192 = (x1629/((x1630^x1631)>x1632));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1637 = INT8_MAX;
	uint32_t x1639 = 850U;
	static int64_t x1640 = INT64_MIN;

    t193 = (x1637/((x1638^x1639)>x1640));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1645 = 95LLU;
	volatile int16_t x1646 = INT16_MAX;
	int32_t x1647 = INT32_MIN;
	static uint32_t x1648 = 3562972U;
	volatile uint64_t t194 = 13148086113674LLU;

    t194 = (x1645/((x1646^x1647)>x1648));

    if (t194 != 95LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1649 = INT64_MAX;
	volatile int32_t x1650 = INT32_MIN;
	int64_t t195 = INT64_MAX;

    t195 = (x1649/((x1650^x1651)>x1652));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1653 = -1;
	volatile int32_t t196 = 2690;

    t196 = (x1653/((x1654^x1655)>x1656));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1661 = 0;
	int16_t x1662 = INT16_MAX;
	static uint16_t x1663 = 408U;
	volatile int64_t x1664 = -9LL;
	static volatile int32_t t197 = -1;

    t197 = (x1661/((x1662^x1663)>x1664));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1666 = INT64_MAX;
	int16_t x1667 = INT16_MAX;
	volatile int64_t t198 = INT64_MAX;

    t198 = (x1665/((x1666^x1667)>x1668));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1669 = 44U;
	int16_t x1672 = INT16_MIN;
	volatile int32_t t199 = 9901955;

    t199 = (x1669/((x1670^x1671)>x1672));

    if (t199 != 44) { NG(); } else { ; }
	
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

