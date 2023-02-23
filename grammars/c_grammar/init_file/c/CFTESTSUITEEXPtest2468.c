
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

static int32_t x3 = INT32_MIN;
volatile uint64_t x11 = UINT64_MAX;
static int32_t x21 = -1;
volatile int8_t x24 = 21;
static int16_t x30 = 3911;
int32_t x32 = -6872;
volatile int64_t t7 = INT64_MAX;
volatile int64_t x42 = 2LL;
volatile uint64_t x44 = 31LLU;
int8_t x69 = -1;
static volatile int16_t x72 = -14;
uint64_t x90 = UINT64_MAX;
int64_t x94 = INT64_MAX;
volatile int32_t x107 = -1;
volatile uint32_t t18 = 6U;
int8_t x116 = -5;
int8_t x147 = 1;
static int64_t x148 = INT64_MIN;
uint64_t t22 = 1299262719309445LLU;
uint16_t x190 = UINT16_MAX;
int64_t x205 = INT64_MIN;
static int8_t x210 = -2;
int32_t t28 = -47098;
int32_t x220 = INT32_MIN;
uint8_t x225 = 52U;
uint16_t x226 = 84U;
uint64_t x263 = 23297006491867LLU;
volatile int8_t x282 = 20;
static int16_t x283 = 11793;
int8_t x286 = INT8_MAX;
static volatile int32_t t38 = INT32_MIN;
int8_t x312 = INT8_MAX;
int8_t x343 = INT8_MAX;
int16_t x344 = -316;
volatile int16_t x349 = INT16_MIN;
uint32_t x350 = 1672U;
uint32_t x360 = 1U;
int64_t x365 = INT64_MIN;
int8_t x373 = INT8_MAX;
static int16_t x374 = 0;
int32_t t45 = -1708;
int32_t x380 = INT32_MIN;
volatile int32_t x384 = INT32_MIN;
volatile int8_t x396 = INT8_MIN;
int8_t x398 = INT8_MIN;
int8_t x421 = INT8_MIN;
static volatile uint64_t t52 = 289124LLU;
static volatile uint64_t x452 = 937635266062800714LLU;
int8_t x462 = -29;
int16_t x464 = INT16_MIN;
uint32_t x494 = UINT32_MAX;
static int64_t x500 = INT64_MIN;
volatile int32_t t59 = -531836368;
int64_t x514 = INT64_MIN;
static volatile int8_t x521 = INT8_MIN;
volatile uint8_t x523 = 4U;
uint32_t x550 = 28317U;
uint64_t x555 = 5440LLU;
static int32_t x586 = INT32_MIN;
int32_t x596 = -1;
int32_t t69 = 538;
int64_t x607 = -23561419434287975LL;
int16_t x616 = INT16_MIN;
int64_t x626 = 20765985561LL;
int16_t x658 = INT16_MAX;
int8_t x659 = -1;
volatile int64_t t73 = -186LL;
uint16_t x669 = 1U;
static uint64_t x670 = 4004377499856976123LLU;
static volatile int32_t t77 = 1;
int16_t x693 = INT16_MAX;
static volatile uint32_t x704 = 299942U;
volatile int64_t x716 = 167276877LL;
int32_t t82 = -1011;
static uint64_t x721 = 56510578LLU;
uint64_t t83 = 16LLU;
uint8_t x750 = UINT8_MAX;
volatile int32_t x751 = -1;
int32_t x762 = INT32_MAX;
static volatile int64_t x764 = INT64_MIN;
volatile uint32_t x773 = 1641U;
int8_t x776 = -10;
int32_t x786 = -3822;
static int16_t x792 = -1652;
volatile int8_t x814 = -7;
int64_t x817 = 790077884LL;
uint64_t x827 = UINT64_MAX;
uint16_t x828 = 2U;
volatile int32_t t93 = -2844;
uint8_t x846 = 15U;
static int32_t t97 = 1;
int64_t x854 = -1LL;
static int64_t t98 = INT64_MIN;
int8_t x889 = -60;
volatile int16_t x890 = 799;
static int16_t x897 = -1;
static int64_t x900 = INT64_MIN;
static int32_t t100 = 1;
static int32_t t101 = -59972;
int32_t t102 = -30;
int64_t x917 = -1LL;
volatile int8_t x920 = INT8_MIN;
volatile int64_t x925 = -1LL;
volatile int8_t x927 = -3;
int64_t x928 = -236LL;
volatile int64_t t104 = 850808LL;
int8_t x929 = 27;
int16_t x943 = INT16_MIN;
static uint64_t x948 = 13266202750141838LLU;
int32_t x950 = INT32_MAX;
static uint32_t x951 = 12U;
uint8_t x952 = UINT8_MAX;
int16_t x954 = -31;
uint8_t x958 = 0U;
int8_t x979 = -28;
int16_t x990 = 0;
int32_t x992 = INT32_MIN;
int8_t x1015 = 1;
uint16_t x1016 = 5U;
uint32_t x1028 = UINT32_MAX;
int32_t t119 = -289618067;
uint16_t x1042 = UINT16_MAX;
volatile uint64_t t122 = 0LLU;
int8_t x1083 = 0;
int8_t x1095 = 4;
static volatile uint64_t x1096 = 28273021LLU;
int8_t x1099 = INT8_MAX;
static int32_t x1131 = INT32_MAX;
volatile int32_t t131 = INT32_MIN;
volatile uint32_t x1147 = 10783U;
int32_t x1148 = INT32_MAX;
uint16_t x1154 = 259U;
int32_t x1171 = INT32_MAX;
int64_t x1179 = INT64_MAX;
int16_t x1228 = INT16_MIN;
int64_t t139 = INT64_MAX;
uint8_t x1239 = 44U;
static int32_t x1242 = INT32_MIN;
int32_t x1249 = -2933;
int16_t x1253 = INT16_MIN;
int8_t x1254 = INT8_MIN;
int32_t t143 = -207301126;
uint16_t x1259 = 0U;
uint16_t x1260 = 95U;
volatile int32_t t144 = -15713937;
uint32_t x1271 = UINT32_MAX;
volatile uint8_t x1280 = 45U;
int32_t x1283 = -501332978;
int32_t x1320 = INT32_MIN;
int32_t x1321 = INT32_MIN;
int32_t x1336 = INT32_MIN;
volatile int64_t x1353 = -34292LL;
volatile int64_t t156 = 1948833288LL;
int16_t x1361 = INT16_MIN;
static volatile int64_t x1362 = INT64_MAX;
int16_t x1367 = 982;
int64_t t158 = INT64_MIN;
uint32_t x1371 = UINT32_MAX;
int32_t x1385 = -1;
static int8_t x1386 = 7;
static int64_t x1387 = -2112032849865LL;
uint8_t x1389 = UINT8_MAX;
int32_t x1392 = INT32_MIN;
int16_t x1394 = -10043;
static volatile int64_t x1401 = INT64_MIN;
static int16_t x1404 = INT16_MIN;
volatile int16_t x1405 = INT16_MIN;
volatile int64_t x1406 = 14525148216LL;
volatile int32_t x1409 = INT32_MIN;
uint64_t x1424 = 856274971LLU;
int32_t x1435 = INT32_MIN;
int8_t x1453 = INT8_MIN;
volatile uint64_t x1471 = UINT64_MAX;
int8_t x1482 = -1;
int64_t x1492 = INT64_MIN;
static uint8_t x1510 = 2U;
int64_t x1522 = 3115708303LL;
volatile int32_t t181 = 1707;
volatile uint64_t x1531 = 6LLU;
static uint8_t x1546 = 12U;
int8_t x1547 = INT8_MAX;
static volatile int64_t t183 = INT64_MAX;
int32_t t184 = -101774;
uint32_t x1569 = UINT32_MAX;
uint64_t x1570 = UINT64_MAX;
uint16_t x1590 = 2U;
int32_t t188 = -249514677;
int16_t x1608 = INT16_MIN;
int32_t x1619 = INT32_MAX;
volatile int16_t x1623 = 2;
static int32_t t192 = 14;
volatile int64_t x1629 = INT64_MIN;
uint64_t x1630 = 2225LLU;
volatile uint64_t t194 = 23571561119297139LLU;
int8_t x1646 = -1;
static uint64_t x1647 = 142LLU;
int16_t x1663 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile int8_t x2 = -1;
	int8_t x4 = INT8_MIN;
	int64_t t0 = INT64_MIN;

    t0 = (x1/((x2|x3)>x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1;
	int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	int64_t x8 = -135158592LL;
	static volatile int32_t t1 = -2089447;

    t1 = (x5/((x6|x7)>x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	int8_t x10 = INT8_MIN;
	int64_t x12 = -3553691LL;
	int64_t t2 = 2649401750LL;

    t2 = (x9/((x10|x11)>x12));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int64_t x16 = -3089579359915900LL;
	volatile int32_t t3 = INT32_MAX;

    t3 = (x13/((x14|x15)>x16));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 15197U;
	static int64_t x18 = INT64_MAX;
	volatile uint32_t x19 = UINT32_MAX;
	int8_t x20 = -1;
	volatile int32_t t4 = 1042323;

    t4 = (x17/((x18|x19)>x20));

    if (t4 != 15197) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = 0;
	volatile int32_t t5 = 251059;

    t5 = (x21/((x22|x23)>x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MAX;
	static uint32_t x28 = 1713U;
	static volatile int32_t t6 = INT32_MAX;

    t6 = (x25/((x26|x27)>x28));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint64_t x31 = UINT64_MAX;

    t7 = (x29/((x30|x31)>x32));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = UINT8_MAX;
	static int8_t x43 = -6;
	volatile int32_t t8 = 3;

    t8 = (x41/((x42|x43)>x44));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MIN;
	int16_t x46 = 15544;
	uint16_t x47 = 5U;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = -158980;

    t9 = (x45/((x46|x47)>x48));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = UINT16_MAX;
	int64_t x63 = INT64_MAX;
	static int16_t x64 = 49;
	static volatile int64_t t10 = INT64_MAX;

    t10 = (x61/((x62|x63)>x64));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x70 = 49U;
	int8_t x71 = -3;
	int32_t t11 = 6;

    t11 = (x69/((x70|x71)>x72));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x77 = INT32_MIN;
	volatile int8_t x78 = INT8_MAX;
	uint8_t x79 = 0U;
	static int8_t x80 = -11;
	static volatile int32_t t12 = INT32_MIN;

    t12 = (x77/((x78|x79)>x80));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	uint32_t x83 = UINT32_MAX;
	volatile uint32_t x84 = 572988392U;
	volatile int32_t t13 = -50;

    t13 = (x81/((x82|x83)>x84));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x89 = 22U;
	static volatile int8_t x91 = INT8_MAX;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t14 = -4;

    t14 = (x89/((x90|x91)>x92));

    if (t14 != 22) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x93 = 0U;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t15 = 54;

    t15 = (x93/((x94|x95)>x96));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x101 = 0;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;
	int32_t t16 = -5;

    t16 = (x101/((x102|x103)>x104));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x105 = -1;
	uint16_t x106 = 53U;
	uint32_t x108 = 1715296632U;
	volatile int32_t t17 = -16313723;

    t17 = (x105/((x106|x107)>x108));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x109 = 134U;
	volatile int64_t x110 = INT64_MIN;
	int16_t x111 = 536;
	static int64_t x112 = INT64_MIN;

    t18 = (x109/((x110|x111)>x112));

    if (t18 != 134U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x113 = -4377;
	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = -1;
	volatile int32_t t19 = -77764;

    t19 = (x113/((x114|x115)>x116));

    if (t19 != -4377) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x133 = -1;
	uint64_t x134 = 1775243125261504LLU;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MAX;
	int32_t t20 = -4459622;

    t20 = (x133/((x134|x135)>x136));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x145 = -1;
	int8_t x146 = 48;
	int32_t t21 = -75;

    t21 = (x145/((x146|x147)>x148));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x157 = 130750864LLU;
	static uint32_t x158 = UINT32_MAX;
	volatile uint64_t x159 = 233592806777900029LLU;
	uint8_t x160 = UINT8_MAX;

    t22 = (x157/((x158|x159)>x160));

    if (t22 != 130750864LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x189 = -1;
	int32_t x191 = 25033885;
	int8_t x192 = INT8_MIN;
	volatile int32_t t23 = -1;

    t23 = (x189/((x190|x191)>x192));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x197 = INT64_MAX;
	int8_t x198 = -1;
	uint64_t x199 = 126529079LLU;
	volatile uint8_t x200 = 2U;
	volatile int64_t t24 = INT64_MAX;

    t24 = (x197/((x198|x199)>x200));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x201 = 1282U;
	int8_t x202 = INT8_MAX;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = 2030111;
	int32_t t25 = 1;

    t25 = (x201/((x202|x203)>x204));

    if (t25 != 1282) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x206 = UINT64_MAX;
	int16_t x207 = -1;
	int32_t x208 = -34906;
	int64_t t26 = INT64_MIN;

    t26 = (x205/((x206|x207)>x208));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x209 = INT32_MIN;
	int8_t x211 = -1;
	static volatile int16_t x212 = INT16_MIN;
	int32_t t27 = INT32_MIN;

    t27 = (x209/((x210|x211)>x212));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x213 = -347255;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 1738U;
	uint32_t x216 = 38U;

    t28 = (x213/((x214|x215)>x216));

    if (t28 != -347255) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x217 = 9898309U;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MAX;
	static volatile uint32_t t29 = 63500715U;

    t29 = (x217/((x218|x219)>x220));

    if (t29 != 9898309U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x227 = 52U;
	uint8_t x228 = 26U;
	int32_t t30 = -57;

    t30 = (x225/((x226|x227)>x228));

    if (t30 != 52) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MAX;
	uint16_t x264 = 413U;
	int32_t t31 = 291;

    t31 = (x261/((x262|x263)>x264));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x269 = -1;
	int8_t x270 = -1;
	int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = 0LLU;
	volatile int32_t t32 = -115929208;

    t32 = (x269/((x270|x271)>x272));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x277 = 70467881U;
	int8_t x278 = -1;
	volatile int64_t x279 = INT64_MIN;
	volatile int32_t x280 = INT32_MIN;
	uint32_t t33 = 1U;

    t33 = (x277/((x278|x279)>x280));

    if (t33 != 70467881U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x281 = 11597460526545880LL;
	int8_t x284 = INT8_MIN;
	static int64_t t34 = 106576999565691LL;

    t34 = (x281/((x282|x283)>x284));

    if (t34 != 11597460526545880LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x285 = 512129U;
	static int8_t x287 = INT8_MAX;
	static int8_t x288 = 0;
	volatile uint32_t t35 = 2465880U;

    t35 = (x285/((x286|x287)>x288));

    if (t35 != 512129U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x289 = 3006890474000114993LLU;
	static uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MAX;
	static int8_t x292 = 0;
	uint64_t t36 = 310809748259LLU;

    t36 = (x289/((x290|x291)>x292));

    if (t36 != 3006890474000114993LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x293 = 0U;
	int8_t x294 = INT8_MIN;
	static int8_t x295 = 3;
	uint32_t x296 = 1U;
	volatile uint32_t t37 = 798165U;

    t37 = (x293/((x294|x295)>x296));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x301 = INT32_MIN;
	volatile int64_t x302 = INT64_MAX;
	uint16_t x303 = 241U;
	int16_t x304 = INT16_MAX;

    t38 = (x301/((x302|x303)>x304));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x309 = 0U;
	uint16_t x310 = 521U;
	int32_t x311 = 239;
	int32_t t39 = 29226053;

    t39 = (x309/((x310|x311)>x312));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x341 = INT32_MIN;
	int32_t x342 = -1;
	int32_t t40 = INT32_MIN;

    t40 = (x341/((x342|x343)>x344));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x345 = INT16_MIN;
	static int8_t x346 = INT8_MAX;
	uint16_t x347 = 1U;
	static int8_t x348 = INT8_MIN;
	static int32_t t41 = -54126696;

    t41 = (x345/((x346|x347)>x348));

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x351 = 11U;
	static volatile int64_t x352 = -3428079767295870331LL;
	static volatile int32_t t42 = 16061353;

    t42 = (x349/((x350|x351)>x352));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x357 = 106U;
	volatile uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MAX;
	static volatile int32_t t43 = -78132;

    t43 = (x357/((x358|x359)>x360));

    if (t43 != 106) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x366 = -1;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = -8554;
	int64_t t44 = INT64_MIN;

    t44 = (x365/((x366|x367)>x368));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MAX;

    t45 = (x373/((x374|x375)>x376));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x377 = -1;
	int32_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int32_t t46 = -18792;

    t46 = (x377/((x378|x379)>x380));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x381 = -26;
	static int32_t x382 = -1;
	uint32_t x383 = 280202U;
	volatile int32_t t47 = -26477634;

    t47 = (x381/((x382|x383)>x384));

    if (t47 != -26) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x393 = INT64_MIN;
	static int16_t x394 = -28;
	static int16_t x395 = -62;
	int64_t t48 = INT64_MIN;

    t48 = (x393/((x394|x395)>x396));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	int64_t x399 = -2041802231LL;
	volatile int64_t x400 = INT64_MIN;
	int32_t t49 = -6724615;

    t49 = (x397/((x398|x399)>x400));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x401 = 60;
	int32_t x402 = -139;
	int16_t x403 = -105;
	int32_t x404 = INT32_MIN;
	volatile int32_t t50 = -672;

    t50 = (x401/((x402|x403)>x404));

    if (t50 != 60) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x422 = 7874109U;
	static volatile int32_t x423 = -1;
	int16_t x424 = INT16_MIN;
	volatile int32_t t51 = 11432;

    t51 = (x421/((x422|x423)>x424));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x433 = 190LLU;
	uint8_t x434 = UINT8_MAX;
	volatile uint8_t x435 = 2U;
	uint16_t x436 = 33U;

    t52 = (x433/((x434|x435)>x436));

    if (t52 != 190LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x437 = INT64_MIN;
	volatile int64_t x438 = INT64_MAX;
	int8_t x439 = 1;
	volatile uint64_t x440 = 80LLU;
	volatile int64_t t53 = INT64_MIN;

    t53 = (x437/((x438|x439)>x440));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x445 = INT8_MIN;
	int8_t x446 = -1;
	volatile uint8_t x447 = UINT8_MAX;
	static volatile uint32_t x448 = 4272125U;
	volatile int32_t t54 = -29536354;

    t54 = (x445/((x446|x447)>x448));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x449 = 222445356LL;
	static int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	volatile int64_t t55 = -3463950685005146571LL;

    t55 = (x449/((x450|x451)>x452));

    if (t55 != 222445356LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x457 = INT64_MAX;
	int8_t x458 = INT8_MIN;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MAX;
	volatile int64_t t56 = INT64_MAX;

    t56 = (x457/((x458|x459)>x460));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x461 = UINT32_MAX;
	int32_t x463 = -1;
	uint32_t t57 = UINT32_MAX;

    t57 = (x461/((x462|x463)>x464));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x493 = 6272884695LLU;
	int32_t x495 = INT32_MIN;
	volatile uint8_t x496 = 3U;
	volatile uint64_t t58 = 0LLU;

    t58 = (x493/((x494|x495)>x496));

    if (t58 != 6272884695LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x497 = 303;
	static volatile uint8_t x498 = UINT8_MAX;
	volatile uint16_t x499 = 1U;

    t59 = (x497/((x498|x499)>x500));

    if (t59 != 303) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x505 = 6U;
	int8_t x506 = INT8_MAX;
	uint16_t x507 = 103U;
	int16_t x508 = INT16_MIN;
	volatile int32_t t60 = 84496083;

    t60 = (x505/((x506|x507)>x508));

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x513 = -1;
	int32_t x515 = -1;
	static uint64_t x516 = 29412901LLU;
	static int32_t t61 = -1;

    t61 = (x513/((x514|x515)>x516));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x522 = INT16_MIN;
	int32_t x524 = INT32_MIN;
	int32_t t62 = -48804;

    t62 = (x521/((x522|x523)>x524));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x545 = INT16_MAX;
	volatile uint16_t x546 = 22U;
	int32_t x547 = INT32_MIN;
	int64_t x548 = INT64_MIN;
	volatile int32_t t63 = 3654;

    t63 = (x545/((x546|x547)>x548));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x549 = INT32_MIN;
	uint64_t x551 = 13604665431090249LLU;
	volatile uint16_t x552 = 28623U;
	int32_t t64 = INT32_MIN;

    t64 = (x549/((x550|x551)>x552));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x553 = 0;
	volatile int32_t x554 = -44992;
	int16_t x556 = 15871;
	int32_t t65 = -1;

    t65 = (x553/((x554|x555)>x556));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x557 = 1U;
	volatile int32_t x558 = 381039;
	static int64_t x559 = INT64_MAX;
	static uint32_t x560 = UINT32_MAX;
	static int32_t t66 = 133400;

    t66 = (x557/((x558|x559)>x560));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x585 = UINT32_MAX;
	int64_t x587 = INT64_MIN;
	uint64_t x588 = 8921526291576877LLU;
	static volatile uint32_t t67 = UINT32_MAX;

    t67 = (x585/((x586|x587)>x588));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x589 = 1337561012572780057LLU;
	int64_t x590 = 2LL;
	int32_t x591 = INT32_MIN;
	uint64_t x592 = 1LLU;
	uint64_t t68 = 6566528877797510754LLU;

    t68 = (x589/((x590|x591)>x592));

    if (t68 != 1337561012572780057LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x593 = 15U;
	uint16_t x594 = 1U;
	static uint8_t x595 = 14U;

    t69 = (x593/((x594|x595)>x596));

    if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x605 = -1;
	volatile int16_t x606 = INT16_MIN;
	volatile int64_t x608 = INT64_MIN;
	int32_t t70 = -770453;

    t70 = (x605/((x606|x607)>x608));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x613 = INT16_MIN;
	int32_t x614 = INT32_MAX;
	uint16_t x615 = 516U;
	int32_t t71 = 38636;

    t71 = (x613/((x614|x615)>x616));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x625 = INT64_MIN;
	uint32_t x627 = 56U;
	int16_t x628 = -16;
	int64_t t72 = INT64_MIN;

    t72 = (x625/((x626|x627)>x628));

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x657 = -1LL;
	int32_t x660 = INT32_MIN;

    t73 = (x657/((x658|x659)>x660));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x665 = UINT16_MAX;
	uint64_t x666 = 13784333523851LLU;
	int8_t x667 = INT8_MIN;
	int64_t x668 = 688LL;
	volatile int32_t t74 = -2;

    t74 = (x665/((x666|x667)>x668));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x671 = INT8_MIN;
	int64_t x672 = INT64_MIN;
	volatile int32_t t75 = 855167;

    t75 = (x669/((x670|x671)>x672));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x674 = INT32_MAX;
	volatile uint8_t x675 = 4U;
	static int32_t x676 = -26983;
	int64_t t76 = INT64_MIN;

    t76 = (x673/((x674|x675)>x676));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x681 = 3U;
	int32_t x682 = INT32_MAX;
	int16_t x683 = 1;
	int16_t x684 = 1240;

    t77 = (x681/((x682|x683)>x684));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x685 = -24LL;
	static uint16_t x686 = 0U;
	int64_t x687 = INT64_MAX;
	static int16_t x688 = INT16_MIN;
	volatile int64_t t78 = -38561498LL;

    t78 = (x685/((x686|x687)>x688));

    if (t78 != -24LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x694 = 1U;
	int16_t x695 = -1;
	int8_t x696 = INT8_MIN;
	volatile int32_t t79 = -3227;

    t79 = (x693/((x694|x695)>x696));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x701 = 45453448074446LLU;
	static int8_t x702 = INT8_MIN;
	volatile uint16_t x703 = 799U;
	volatile uint64_t t80 = 63093LLU;

    t80 = (x701/((x702|x703)>x704));

    if (t80 != 45453448074446LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x709 = INT64_MIN;
	int16_t x710 = -1;
	uint32_t x711 = 83256689U;
	volatile int16_t x712 = INT16_MIN;
	int64_t t81 = INT64_MIN;

    t81 = (x709/((x710|x711)>x712));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x713 = INT8_MIN;
	int64_t x714 = 41388623203LL;
	volatile uint32_t x715 = 4822U;

    t82 = (x713/((x714|x715)>x716));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x722 = -1LL;
	int64_t x723 = -1LL;
	int32_t x724 = INT32_MIN;

    t83 = (x721/((x722|x723)>x724));

    if (t83 != 56510578LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x749 = INT16_MAX;
	int32_t x752 = INT32_MIN;
	volatile int32_t t84 = 985;

    t84 = (x749/((x750|x751)>x752));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x761 = -1LL;
	int32_t x763 = INT32_MIN;
	int64_t t85 = -4427786LL;

    t85 = (x761/((x762|x763)>x764));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x774 = -1;
	static volatile int16_t x775 = -118;
	static volatile uint32_t t86 = 111919U;

    t86 = (x773/((x774|x775)>x776));

    if (t86 != 1641U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x785 = INT8_MAX;
	int16_t x787 = -1;
	static int8_t x788 = INT8_MIN;
	static int32_t t87 = 0;

    t87 = (x785/((x786|x787)>x788));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint8_t x790 = UINT8_MAX;
	static int64_t x791 = 937213428943202LL;
	static volatile int32_t t88 = INT32_MIN;

    t88 = (x789/((x790|x791)>x792));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x797 = INT64_MIN;
	static int16_t x798 = 5;
	uint16_t x799 = 4017U;
	uint8_t x800 = 57U;
	int64_t t89 = INT64_MIN;

    t89 = (x797/((x798|x799)>x800));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x801 = INT16_MAX;
	int16_t x802 = INT16_MIN;
	volatile uint16_t x803 = 0U;
	int64_t x804 = -152701LL;
	int32_t t90 = -56002;

    t90 = (x801/((x802|x803)>x804));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x813 = -118;
	volatile int16_t x815 = INT16_MIN;
	int32_t x816 = -13839661;
	int32_t t91 = 3707;

    t91 = (x813/((x814|x815)>x816));

    if (t91 != -118) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x818 = 0U;
	volatile int16_t x819 = -1;
	int8_t x820 = INT8_MIN;
	volatile int64_t t92 = 12LL;

    t92 = (x817/((x818|x819)>x820));

    if (t92 != 790077884LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MIN;

    t93 = (x825/((x826|x827)>x828));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x833 = 118512U;
	static int8_t x834 = INT8_MAX;
	static volatile int64_t x835 = INT64_MAX;
	uint16_t x836 = 0U;
	uint32_t t94 = 14216U;

    t94 = (x833/((x834|x835)>x836));

    if (t94 != 118512U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x841 = -1;
	volatile uint16_t x842 = UINT16_MAX;
	uint64_t x843 = 34128LLU;
	static uint64_t x844 = 13456LLU;
	static volatile int32_t t95 = 56266;

    t95 = (x841/((x842|x843)>x844));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x845 = INT8_MIN;
	volatile uint16_t x847 = 1412U;
	static int16_t x848 = -4447;
	static volatile int32_t t96 = -7033386;

    t96 = (x845/((x846|x847)>x848));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x849 = 4457;
	int32_t x850 = 3392;
	volatile int64_t x851 = 28264885282LL;
	int16_t x852 = INT16_MAX;

    t97 = (x849/((x850|x851)>x852));

    if (t97 != 4457) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x853 = INT64_MIN;
	static volatile uint64_t x855 = 1535LLU;
	volatile uint16_t x856 = UINT16_MAX;

    t98 = (x853/((x854|x855)>x856));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x891 = UINT32_MAX;
	int32_t x892 = 1;
	static int32_t t99 = -819;

    t99 = (x889/((x890|x891)>x892));

    if (t99 != -60) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MIN;

    t100 = (x897/((x898|x899)>x900));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x905 = -55;
	int64_t x906 = INT64_MIN;
	static int8_t x907 = -12;
	int8_t x908 = INT8_MIN;

    t101 = (x905/((x906|x907)>x908));

    if (t101 != -55) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x913 = -1;
	uint64_t x914 = 194592733697LLU;
	int8_t x915 = INT8_MIN;
	volatile uint8_t x916 = UINT8_MAX;

    t102 = (x913/((x914|x915)>x916));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x918 = INT16_MAX;
	volatile int8_t x919 = INT8_MIN;
	int64_t t103 = -474862097910LL;

    t103 = (x917/((x918|x919)>x920));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x926 = 5U;

    t104 = (x925/((x926|x927)>x928));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x930 = INT8_MIN;
	int16_t x931 = INT16_MIN;
	volatile int32_t x932 = INT32_MIN;
	static int32_t t105 = -492;

    t105 = (x929/((x930|x931)>x932));

    if (t105 != 27) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x937 = 68U;
	int16_t x938 = INT16_MAX;
	volatile uint32_t x939 = 83176607U;
	volatile uint16_t x940 = UINT16_MAX;
	volatile int32_t t106 = 35;

    t106 = (x937/((x938|x939)>x940));

    if (t106 != 68) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x941 = 1009116465U;
	volatile int8_t x942 = -1;
	int64_t x944 = -1417LL;
	uint32_t t107 = 1089U;

    t107 = (x941/((x942|x943)>x944));

    if (t107 != 1009116465U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x945 = -30;
	int8_t x946 = INT8_MAX;
	volatile uint64_t x947 = UINT64_MAX;
	volatile int32_t t108 = 1;

    t108 = (x945/((x946|x947)>x948));

    if (t108 != -30) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x949 = UINT32_MAX;
	uint32_t t109 = UINT32_MAX;

    t109 = (x949/((x950|x951)>x952));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x953 = INT16_MIN;
	uint8_t x955 = UINT8_MAX;
	volatile int16_t x956 = -30;
	int32_t t110 = -7478543;

    t110 = (x953/((x954|x955)>x956));

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x957 = 1774;
	static int64_t x959 = -1143LL;
	static uint64_t x960 = 3LLU;
	volatile int32_t t111 = -141358;

    t111 = (x957/((x958|x959)>x960));

    if (t111 != 1774) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x965 = -43;
	int8_t x966 = -1;
	volatile int32_t x967 = 1350;
	static int32_t x968 = INT32_MIN;
	volatile int32_t t112 = 42;

    t112 = (x965/((x966|x967)>x968));

    if (t112 != -43) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x977 = 2174008U;
	int32_t x978 = 1;
	int64_t x980 = -12723939715098950LL;
	static uint32_t t113 = 13U;

    t113 = (x977/((x978|x979)>x980));

    if (t113 != 2174008U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x989 = 1U;
	static uint8_t x991 = 69U;
	volatile int32_t t114 = -230758194;

    t114 = (x989/((x990|x991)>x992));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x993 = -246159;
	int8_t x994 = INT8_MIN;
	uint32_t x995 = 0U;
	int32_t x996 = INT32_MIN;
	volatile int32_t t115 = 620;

    t115 = (x993/((x994|x995)>x996));

    if (t115 != -246159) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x1013 = INT32_MIN;
	volatile int8_t x1014 = 26;
	volatile int32_t t116 = INT32_MIN;

    t116 = (x1013/((x1014|x1015)>x1016));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x1025 = INT64_MIN;
	uint64_t x1026 = UINT64_MAX;
	int64_t x1027 = INT64_MAX;
	int64_t t117 = INT64_MIN;

    t117 = (x1025/((x1026|x1027)>x1028));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x1029 = UINT32_MAX;
	int8_t x1030 = INT8_MIN;
	int8_t x1031 = INT8_MAX;
	int8_t x1032 = INT8_MIN;
	static volatile uint32_t t118 = UINT32_MAX;

    t118 = (x1029/((x1030|x1031)>x1032));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x1033 = 0;
	uint64_t x1034 = 73045253LLU;
	int8_t x1035 = -1;
	uint16_t x1036 = 25307U;

    t119 = (x1033/((x1034|x1035)>x1036));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x1037 = UINT64_MAX;
	static int8_t x1038 = INT8_MIN;
	uint16_t x1039 = UINT16_MAX;
	int64_t x1040 = INT64_MIN;
	volatile uint64_t t120 = UINT64_MAX;

    t120 = (x1037/((x1038|x1039)>x1040));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x1041 = INT8_MIN;
	uint16_t x1043 = 55U;
	int32_t x1044 = INT32_MIN;
	volatile int32_t t121 = 1524264;

    t121 = (x1041/((x1042|x1043)>x1044));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1053 = 110720901LLU;
	uint64_t x1054 = 22064LLU;
	static int64_t x1055 = -6694LL;
	int16_t x1056 = 511;

    t122 = (x1053/((x1054|x1055)>x1056));

    if (t122 != 110720901LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1073 = INT32_MIN;
	volatile int16_t x1074 = INT16_MIN;
	uint32_t x1075 = 5277U;
	int8_t x1076 = INT8_MAX;
	static volatile int32_t t123 = INT32_MIN;

    t123 = (x1073/((x1074|x1075)>x1076));

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1081 = 6513682U;
	volatile int32_t x1082 = INT32_MAX;
	int8_t x1084 = -20;
	volatile uint32_t t124 = 151489U;

    t124 = (x1081/((x1082|x1083)>x1084));

    if (t124 != 6513682U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1093 = -1;
	int64_t x1094 = INT64_MIN;
	volatile int32_t t125 = 599132;

    t125 = (x1093/((x1094|x1095)>x1096));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x1097 = 62107;
	int16_t x1098 = INT16_MIN;
	int16_t x1100 = INT16_MIN;
	volatile int32_t t126 = 3;

    t126 = (x1097/((x1098|x1099)>x1100));

    if (t126 != 62107) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x1109 = 19318287LLU;
	volatile uint16_t x1110 = 64U;
	uint32_t x1111 = UINT32_MAX;
	int16_t x1112 = -1171;
	static volatile uint64_t t127 = 2301903453785987143LLU;

    t127 = (x1109/((x1110|x1111)>x1112));

    if (t127 != 19318287LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x1125 = UINT32_MAX;
	uint16_t x1126 = 1U;
	int32_t x1127 = INT32_MIN;
	uint64_t x1128 = 241958867735LLU;
	uint32_t t128 = UINT32_MAX;

    t128 = (x1125/((x1126|x1127)>x1128));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1129 = -1;
	static int16_t x1130 = INT16_MIN;
	uint32_t x1132 = 31U;
	int32_t t129 = -2;

    t129 = (x1129/((x1130|x1131)>x1132));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x1133 = 1U;
	static uint8_t x1134 = 0U;
	int8_t x1135 = INT8_MIN;
	static int32_t x1136 = -33068;
	int32_t t130 = 640;

    t130 = (x1133/((x1134|x1135)>x1136));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x1137 = INT32_MIN;
	uint8_t x1138 = 22U;
	int16_t x1139 = -10;
	volatile int8_t x1140 = INT8_MIN;

    t131 = (x1137/((x1138|x1139)>x1140));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x1145 = -1;
	int32_t x1146 = -5;
	volatile int32_t t132 = -213898;

    t132 = (x1145/((x1146|x1147)>x1148));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1153 = -1;
	static int16_t x1155 = 4;
	int32_t x1156 = INT32_MIN;
	int32_t t133 = -47169762;

    t133 = (x1153/((x1154|x1155)>x1156));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1169 = 3U;
	static uint8_t x1170 = 23U;
	int8_t x1172 = INT8_MIN;
	int32_t t134 = 453;

    t134 = (x1169/((x1170|x1171)>x1172));

    if (t134 != 3) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1177 = 114U;
	static int16_t x1178 = INT16_MIN;
	int32_t x1180 = INT32_MIN;
	int32_t t135 = -3;

    t135 = (x1177/((x1178|x1179)>x1180));

    if (t135 != 114) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1185 = INT16_MIN;
	int32_t x1186 = INT32_MIN;
	int8_t x1187 = -1;
	int32_t x1188 = -647472;
	volatile int32_t t136 = 609083643;

    t136 = (x1185/((x1186|x1187)>x1188));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x1197 = INT8_MAX;
	static int32_t x1198 = -313;
	int32_t x1199 = INT32_MIN;
	volatile int16_t x1200 = INT16_MIN;
	int32_t t137 = -48;

    t137 = (x1197/((x1198|x1199)>x1200));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1217 = UINT16_MAX;
	uint16_t x1218 = UINT16_MAX;
	static int64_t x1219 = -45LL;
	volatile int64_t x1220 = INT64_MIN;
	volatile int32_t t138 = -7473;

    t138 = (x1217/((x1218|x1219)>x1220));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1225 = INT64_MAX;
	int64_t x1226 = -1LL;
	int8_t x1227 = 2;

    t139 = (x1225/((x1226|x1227)>x1228));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1237 = INT8_MIN;
	int16_t x1238 = 89;
	static uint8_t x1240 = 3U;
	volatile int32_t t140 = 169277;

    t140 = (x1237/((x1238|x1239)>x1240));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1241 = -1LL;
	uint64_t x1243 = 78739494214LLU;
	int8_t x1244 = INT8_MAX;
	static int64_t t141 = 192LL;

    t141 = (x1241/((x1242|x1243)>x1244));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1250 = INT8_MAX;
	int32_t x1251 = INT32_MAX;
	int64_t x1252 = -1LL;
	volatile int32_t t142 = -32;

    t142 = (x1249/((x1250|x1251)>x1252));

    if (t142 != -2933) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x1255 = 26;
	uint64_t x1256 = 233688064626LLU;

    t143 = (x1253/((x1254|x1255)>x1256));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1257 = -1;
	static volatile uint64_t x1258 = UINT64_MAX;

    t144 = (x1257/((x1258|x1259)>x1260));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1265 = -1;
	static volatile uint64_t x1266 = UINT64_MAX;
	static int64_t x1267 = INT64_MIN;
	int16_t x1268 = -6096;
	int32_t t145 = 1;

    t145 = (x1265/((x1266|x1267)>x1268));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1269 = 38733900U;
	static volatile int16_t x1270 = INT16_MIN;
	int16_t x1272 = INT16_MIN;
	uint32_t t146 = 5673U;

    t146 = (x1269/((x1270|x1271)>x1272));

    if (t146 != 38733900U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1277 = INT64_MIN;
	int64_t x1278 = 29550008868622LL;
	int16_t x1279 = 0;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x1277/((x1278|x1279)>x1280));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1281 = UINT64_MAX;
	uint64_t x1282 = UINT64_MAX;
	static int64_t x1284 = INT64_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = (x1281/((x1282|x1283)>x1284));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1297 = INT64_MIN;
	uint32_t x1298 = UINT32_MAX;
	uint16_t x1299 = UINT16_MAX;
	int16_t x1300 = INT16_MIN;
	volatile int64_t t149 = INT64_MIN;

    t149 = (x1297/((x1298|x1299)>x1300));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x1301 = -7;
	int16_t x1302 = -1204;
	int16_t x1303 = INT16_MAX;
	int64_t x1304 = INT64_MIN;
	int32_t t150 = 236262413;

    t150 = (x1301/((x1302|x1303)>x1304));

    if (t150 != -7) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1313 = 2;
	int16_t x1314 = -234;
	uint16_t x1315 = UINT16_MAX;
	int16_t x1316 = INT16_MIN;
	static volatile int32_t t151 = -2335884;

    t151 = (x1313/((x1314|x1315)>x1316));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1317 = 94745684;
	static volatile int64_t x1318 = -1LL;
	uint64_t x1319 = 68461754LLU;
	volatile int32_t t152 = -10653;

    t152 = (x1317/((x1318|x1319)>x1320));

    if (t152 != 94745684) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1322 = 29727U;
	uint8_t x1323 = UINT8_MAX;
	volatile int8_t x1324 = -1;
	int32_t t153 = INT32_MIN;

    t153 = (x1321/((x1322|x1323)>x1324));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1333 = INT16_MIN;
	uint64_t x1334 = UINT64_MAX;
	volatile int32_t x1335 = INT32_MIN;
	int32_t t154 = 0;

    t154 = (x1333/((x1334|x1335)>x1336));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x1337 = -6490041LL;
	uint16_t x1338 = UINT16_MAX;
	uint64_t x1339 = 163129188101LLU;
	static volatile uint8_t x1340 = UINT8_MAX;
	volatile int64_t t155 = -64LL;

    t155 = (x1337/((x1338|x1339)>x1340));

    if (t155 != -6490041LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1354 = 54U;
	int16_t x1355 = INT16_MAX;
	static int64_t x1356 = INT64_MIN;

    t156 = (x1353/((x1354|x1355)>x1356));

    if (t156 != -34292LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x1363 = INT8_MIN;
	int8_t x1364 = INT8_MIN;
	static int32_t t157 = 12200234;

    t157 = (x1361/((x1362|x1363)>x1364));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1365 = INT64_MIN;
	int32_t x1366 = INT32_MIN;
	uint32_t x1368 = 5131600U;

    t158 = (x1365/((x1366|x1367)>x1368));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1369 = 1306;
	int64_t x1370 = INT64_MIN;
	uint64_t x1372 = 247021065753856LLU;
	int32_t t159 = 23;

    t159 = (x1369/((x1370|x1371)>x1372));

    if (t159 != 1306) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1373 = INT32_MIN;
	static uint32_t x1374 = 523508U;
	int32_t x1375 = INT32_MIN;
	int64_t x1376 = -739397254LL;
	volatile int32_t t160 = INT32_MIN;

    t160 = (x1373/((x1374|x1375)>x1376));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1388 = INT64_MIN;
	int32_t t161 = 13702575;

    t161 = (x1385/((x1386|x1387)>x1388));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x1390 = INT64_MIN;
	volatile int16_t x1391 = -1;
	int32_t t162 = 13;

    t162 = (x1389/((x1390|x1391)>x1392));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x1393 = INT16_MIN;
	static int64_t x1395 = INT64_MAX;
	static uint64_t x1396 = 14809LLU;
	volatile int32_t t163 = 824527;

    t163 = (x1393/((x1394|x1395)>x1396));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1402 = INT16_MAX;
	int16_t x1403 = 28;
	volatile int64_t t164 = INT64_MIN;

    t164 = (x1401/((x1402|x1403)>x1404));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1407 = INT32_MIN;
	uint64_t x1408 = 1690296013LLU;
	int32_t t165 = 1;

    t165 = (x1405/((x1406|x1407)>x1408));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1410 = INT16_MIN;
	static int16_t x1411 = -1;
	uint32_t x1412 = 54643439U;
	int32_t t166 = INT32_MIN;

    t166 = (x1409/((x1410|x1411)>x1412));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x1421 = -1105;
	int16_t x1422 = INT16_MAX;
	volatile int64_t x1423 = INT64_MAX;
	volatile int32_t t167 = 845;

    t167 = (x1421/((x1422|x1423)>x1424));

    if (t167 != -1105) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1425 = INT32_MIN;
	int64_t x1426 = INT64_MAX;
	uint8_t x1427 = 17U;
	int8_t x1428 = 1;
	volatile int32_t t168 = INT32_MIN;

    t168 = (x1425/((x1426|x1427)>x1428));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1433 = -1;
	volatile int32_t x1434 = -1;
	int64_t x1436 = -1004136294901631LL;
	int32_t t169 = 394484695;

    t169 = (x1433/((x1434|x1435)>x1436));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x1437 = UINT8_MAX;
	uint8_t x1438 = 0U;
	uint16_t x1439 = 2002U;
	int32_t x1440 = -1;
	static int32_t t170 = 5827899;

    t170 = (x1437/((x1438|x1439)>x1440));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1441 = -1;
	int8_t x1442 = -15;
	int8_t x1443 = INT8_MIN;
	uint32_t x1444 = 1520U;
	volatile int32_t t171 = -1036;

    t171 = (x1441/((x1442|x1443)>x1444));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1449 = -1LL;
	int8_t x1450 = INT8_MIN;
	int8_t x1451 = INT8_MAX;
	uint64_t x1452 = 59201757343LLU;
	volatile int64_t t172 = 8792LL;

    t172 = (x1449/((x1450|x1451)>x1452));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x1454 = INT32_MIN;
	int16_t x1455 = INT16_MIN;
	uint32_t x1456 = 316035U;
	volatile int32_t t173 = -425557858;

    t173 = (x1453/((x1454|x1455)>x1456));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1457 = INT16_MIN;
	uint64_t x1458 = 30437465LLU;
	uint16_t x1459 = UINT16_MAX;
	static int16_t x1460 = 1744;
	int32_t t174 = 99916786;

    t174 = (x1457/((x1458|x1459)>x1460));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1469 = -1;
	uint8_t x1470 = UINT8_MAX;
	int32_t x1472 = INT32_MIN;
	int32_t t175 = -3;

    t175 = (x1469/((x1470|x1471)>x1472));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1481 = 9104420993438579828LLU;
	static uint64_t x1483 = 7LLU;
	int16_t x1484 = 0;
	volatile uint64_t t176 = 19660945790LLU;

    t176 = (x1481/((x1482|x1483)>x1484));

    if (t176 != 9104420993438579828LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1489 = UINT64_MAX;
	int16_t x1490 = 1;
	uint16_t x1491 = 384U;
	uint64_t t177 = UINT64_MAX;

    t177 = (x1489/((x1490|x1491)>x1492));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1493 = 6U;
	int16_t x1494 = INT16_MAX;
	int64_t x1495 = -1LL;
	static int8_t x1496 = INT8_MIN;
	static volatile int32_t t178 = -1509404;

    t178 = (x1493/((x1494|x1495)>x1496));

    if (t178 != 6) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1505 = INT8_MIN;
	uint64_t x1506 = UINT64_MAX;
	uint64_t x1507 = 402684475LLU;
	uint64_t x1508 = 4LLU;
	volatile int32_t t179 = 58867475;

    t179 = (x1505/((x1506|x1507)>x1508));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1509 = 0;
	int16_t x1511 = 0;
	int8_t x1512 = INT8_MIN;
	int32_t t180 = -86272738;

    t180 = (x1509/((x1510|x1511)>x1512));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1521 = INT8_MAX;
	uint16_t x1523 = 1533U;
	int64_t x1524 = INT64_MIN;

    t181 = (x1521/((x1522|x1523)>x1524));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1529 = INT8_MIN;
	int8_t x1530 = INT8_MIN;
	uint64_t x1532 = 7LLU;
	volatile int32_t t182 = 529536789;

    t182 = (x1529/((x1530|x1531)>x1532));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1545 = INT64_MAX;
	int64_t x1548 = INT64_MIN;

    t183 = (x1545/((x1546|x1547)>x1548));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1549 = 1U;
	int16_t x1550 = INT16_MAX;
	uint16_t x1551 = 6U;
	int32_t x1552 = INT32_MIN;

    t184 = (x1549/((x1550|x1551)>x1552));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1553 = 274LL;
	static uint32_t x1554 = 333253U;
	int32_t x1555 = INT32_MAX;
	volatile int64_t x1556 = -48012332906LL;
	volatile int64_t t185 = 4131958100LL;

    t185 = (x1553/((x1554|x1555)>x1556));

    if (t185 != 274LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1571 = 8U;
	volatile int64_t x1572 = INT64_MAX;
	uint32_t t186 = UINT32_MAX;

    t186 = (x1569/((x1570|x1571)>x1572));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1585 = 0;
	static uint32_t x1586 = 48933210U;
	int8_t x1587 = INT8_MIN;
	int16_t x1588 = INT16_MIN;
	static int32_t t187 = 1;

    t187 = (x1585/((x1586|x1587)>x1588));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1589 = 9U;
	int32_t x1591 = INT32_MAX;
	int8_t x1592 = -37;

    t188 = (x1589/((x1590|x1591)>x1592));

    if (t188 != 9) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1605 = 0;
	volatile int8_t x1606 = INT8_MIN;
	volatile uint64_t x1607 = 33036968LLU;
	static int32_t t189 = -644;

    t189 = (x1605/((x1606|x1607)>x1608));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1609 = 8834054274196179LLU;
	int64_t x1610 = INT64_MAX;
	volatile int8_t x1611 = INT8_MAX;
	uint16_t x1612 = 7U;
	uint64_t t190 = 70047086793108LLU;

    t190 = (x1609/((x1610|x1611)>x1612));

    if (t190 != 8834054274196179LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1617 = -186318;
	volatile uint8_t x1618 = 14U;
	volatile uint32_t x1620 = 44U;
	int32_t t191 = -10;

    t191 = (x1617/((x1618|x1619)>x1620));

    if (t191 != -186318) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1621 = -7;
	int32_t x1622 = INT32_MAX;
	volatile int32_t x1624 = -1;

    t192 = (x1621/((x1622|x1623)>x1624));

    if (t192 != -7) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1631 = -27;
	static uint32_t x1632 = 377577U;
	int64_t t193 = INT64_MIN;

    t193 = (x1629/((x1630|x1631)>x1632));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1637 = 30990774525LLU;
	volatile int32_t x1638 = INT32_MIN;
	volatile uint32_t x1639 = 292933U;
	int64_t x1640 = -1LL;

    t194 = (x1637/((x1638|x1639)>x1640));

    if (t194 != 30990774525LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1645 = -1;
	static volatile uint8_t x1648 = UINT8_MAX;
	volatile int32_t t195 = -16363;

    t195 = (x1645/((x1646|x1647)>x1648));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1649 = 1872858245953LLU;
	int32_t x1650 = INT32_MAX;
	static uint32_t x1651 = 8622893U;
	uint32_t x1652 = 22389433U;
	uint64_t t196 = 3119116314642065641LLU;

    t196 = (x1649/((x1650|x1651)>x1652));

    if (t196 != 1872858245953LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1653 = 13092146336019LL;
	uint32_t x1654 = UINT32_MAX;
	volatile int16_t x1655 = INT16_MIN;
	uint8_t x1656 = 1U;
	static volatile int64_t t197 = -1LL;

    t197 = (x1653/((x1654|x1655)>x1656));

    if (t197 != 13092146336019LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1661 = UINT16_MAX;
	int8_t x1662 = INT8_MIN;
	volatile uint32_t x1664 = 11711649U;
	int32_t t198 = 16;

    t198 = (x1661/((x1662|x1663)>x1664));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1665 = INT32_MIN;
	volatile uint64_t x1666 = 2LLU;
	static volatile int64_t x1667 = INT64_MIN;
	volatile uint64_t x1668 = 30065933695LLU;
	volatile int32_t t199 = INT32_MIN;

    t199 = (x1665/((x1666|x1667)>x1668));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

