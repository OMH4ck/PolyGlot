
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

static volatile int8_t x8 = INT8_MIN;
volatile int64_t t2 = 149758LL;
volatile int8_t x34 = INT8_MIN;
uint32_t t3 = 34470U;
int16_t x42 = INT16_MIN;
uint8_t x48 = 2U;
static uint64_t x59 = UINT64_MAX;
static uint32_t t7 = UINT32_MAX;
volatile int64_t x66 = INT64_MIN;
static int8_t x81 = -28;
volatile int64_t t10 = 30976308LL;
static volatile uint32_t t11 = 0U;
int32_t x93 = INT32_MAX;
uint64_t x100 = UINT64_MAX;
int64_t x133 = INT64_MIN;
uint64_t x135 = UINT64_MAX;
volatile int32_t x150 = INT32_MAX;
int32_t x152 = -15;
static int16_t x165 = -1;
int16_t x170 = INT16_MAX;
uint32_t t24 = 540U;
int8_t x201 = INT8_MIN;
uint64_t x204 = UINT64_MAX;
uint32_t x218 = 0U;
static int64_t x219 = INT64_MAX;
uint8_t x220 = UINT8_MAX;
uint32_t t27 = 5043893U;
int8_t x247 = 0;
int32_t t30 = -23;
static int32_t x262 = INT32_MIN;
uint8_t x263 = 16U;
volatile int32_t x270 = -1;
int32_t x272 = 3344;
uint32_t t32 = 15U;
int32_t t34 = -802287749;
int16_t x289 = INT16_MIN;
volatile uint8_t x292 = UINT8_MAX;
int16_t x293 = -6;
uint16_t x297 = 3U;
uint32_t x300 = 45U;
uint64_t x305 = 28LLU;
volatile int16_t x307 = INT16_MAX;
static int64_t x328 = 123542460111014LL;
int32_t x345 = INT32_MIN;
int64_t x348 = INT64_MIN;
int8_t x363 = INT8_MIN;
uint8_t x364 = 2U;
volatile int32_t x365 = INT32_MIN;
int16_t x368 = 333;
volatile int64_t x381 = INT64_MIN;
uint16_t x382 = 6U;
static int32_t x396 = -70859;
int32_t x407 = 108172;
uint16_t x408 = 15862U;
uint16_t x425 = 344U;
int32_t x436 = INT32_MIN;
uint32_t x461 = 2513U;
uint16_t x473 = 979U;
int8_t x474 = INT8_MIN;
volatile uint64_t x476 = UINT64_MAX;
int32_t t55 = INT32_MAX;
uint64_t x513 = 47653474586718LLU;
static int8_t x514 = -1;
uint16_t x519 = 57U;
static int64_t x521 = INT64_MAX;
static uint8_t x532 = UINT8_MAX;
static int8_t x538 = 0;
static int64_t x540 = -641805201503411LL;
volatile int64_t x550 = -1LL;
volatile int64_t x563 = INT64_MAX;
static int8_t x568 = INT8_MIN;
volatile int8_t x589 = INT8_MIN;
int8_t x591 = INT8_MIN;
uint16_t x601 = 7U;
static volatile uint8_t x602 = UINT8_MAX;
static int16_t x604 = -82;
uint8_t x619 = 52U;
int32_t x622 = INT32_MIN;
int8_t x625 = 5;
uint64_t x627 = 246190LLU;
static int8_t x630 = INT8_MAX;
int16_t x644 = INT16_MIN;
int16_t x677 = INT16_MIN;
int32_t t81 = -180081;
int8_t x702 = 5;
uint64_t t83 = 26LLU;
volatile int64_t t84 = INT64_MAX;
uint16_t x718 = 12387U;
uint16_t x720 = 3940U;
uint64_t x742 = 327058513LLU;
static int8_t x743 = INT8_MIN;
int64_t x745 = -7263055984847LL;
int32_t x757 = INT32_MIN;
int8_t x762 = INT8_MIN;
volatile int8_t x763 = 5;
int8_t x777 = INT8_MAX;
volatile int16_t x779 = -1;
uint16_t x780 = 1765U;
uint32_t x830 = UINT32_MAX;
volatile int32_t t97 = 946;
int64_t x900 = -416821512373LL;
uint16_t x919 = UINT16_MAX;
int64_t x920 = INT64_MIN;
volatile uint16_t x924 = UINT16_MAX;
volatile int16_t x927 = -1;
volatile int32_t t106 = -100;
int8_t x933 = -3;
static volatile int32_t t107 = 0;
int64_t x946 = -1LL;
static int64_t x947 = INT64_MAX;
int8_t x969 = -1;
uint32_t x972 = 468763U;
uint16_t x978 = 15U;
int64_t x979 = 48203933647099661LL;
volatile int32_t t113 = -169;
uint64_t x1013 = 51847676530581561LLU;
uint64_t t118 = 22415738434327309LLU;
int8_t x1017 = -1;
int32_t t119 = 1021;
int16_t x1025 = -1;
volatile int32_t x1027 = INT32_MIN;
int32_t x1038 = 1564982;
int32_t t121 = 420;
static int32_t x1041 = 60;
int64_t x1042 = INT64_MIN;
int16_t x1055 = 0;
uint64_t t123 = 386461019922LLU;
int8_t x1082 = INT8_MAX;
int32_t x1089 = -1;
int16_t x1091 = -1;
volatile int64_t x1113 = -1LL;
static volatile int32_t x1134 = INT32_MIN;
static int16_t x1145 = INT16_MIN;
int8_t x1147 = 1;
int64_t t134 = 141666406531880188LL;
int8_t x1165 = 27;
volatile uint32_t x1166 = UINT32_MAX;
int32_t x1171 = INT32_MIN;
volatile uint64_t t138 = 6608580719927LLU;
volatile uint64_t x1193 = UINT64_MAX;
int32_t x1195 = INT32_MAX;
int8_t x1196 = INT8_MAX;
int32_t x1219 = INT32_MAX;
uint8_t x1220 = UINT8_MAX;
uint64_t x1229 = 16517021328840023LLU;
uint32_t x1230 = 1092242259U;
uint8_t x1252 = 125U;
volatile uint16_t x1263 = 0U;
uint32_t x1269 = UINT32_MAX;
uint32_t x1272 = UINT32_MAX;
static int32_t x1278 = -1;
uint8_t x1280 = 6U;
static volatile int32_t t147 = -162859;
int8_t x1291 = INT8_MAX;
int32_t x1293 = -1;
static int64_t x1294 = 802127LL;
uint32_t t151 = 9U;
int16_t x1329 = -1;
volatile int32_t t155 = INT32_MIN;
int64_t x1356 = INT64_MIN;
uint8_t x1357 = 5U;
int16_t x1361 = INT16_MIN;
volatile int16_t x1362 = INT16_MIN;
int64_t x1364 = INT64_MIN;
volatile int64_t t158 = 2455548455165674061LL;
int8_t x1378 = -1;
uint64_t x1380 = UINT64_MAX;
int32_t x1409 = INT32_MIN;
int8_t x1410 = -1;
volatile uint32_t t162 = 29208250U;
int32_t x1434 = 63070507;
volatile int64_t x1439 = INT64_MAX;
int64_t t164 = 65015016005LL;
int32_t x1461 = INT32_MIN;
int32_t t166 = INT32_MIN;
uint16_t x1467 = UINT16_MAX;
int8_t x1503 = -1;
static int64_t x1506 = -1LL;
int32_t x1507 = INT32_MAX;
int8_t x1509 = -28;
static int8_t x1512 = INT8_MIN;
uint16_t x1533 = 6669U;
int64_t x1537 = INT64_MIN;
int16_t x1540 = INT16_MAX;
volatile int64_t t175 = INT64_MIN;
uint32_t x1546 = 1428U;
int64_t t177 = INT64_MIN;
volatile int8_t x1577 = 63;
int16_t x1582 = INT16_MIN;
int64_t t181 = -1LL;
int64_t x1614 = -34298591LL;
int64_t x1624 = INT64_MIN;
uint8_t x1668 = 4U;
int64_t x1685 = INT64_MAX;
int64_t t191 = INT64_MAX;
uint16_t x1691 = UINT16_MAX;
uint64_t x1692 = 4165198119384LLU;
volatile uint64_t t192 = 165LLU;
volatile int32_t t193 = 682;
int16_t x1705 = 1;
uint16_t x1712 = UINT16_MAX;
uint64_t x1741 = UINT64_MAX;
volatile int16_t x1745 = -452;
static volatile uint8_t x1755 = UINT8_MAX;


void f0(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x6 = -1;
	int16_t x7 = INT16_MAX;
	volatile int32_t t0 = 3600320;

    t0 = (x5/((x6<=x7)%x8));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x21 = 14LLU;
	uint32_t x22 = 25U;
	volatile int16_t x23 = 14793;
	int8_t x24 = INT8_MAX;
	uint64_t t1 = 96586415586106LLU;

    t1 = (x21/((x22<=x23)%x24));

    if (t1 != 14LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x29 = -1951568;
	volatile int16_t x30 = -1;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = -33382720LL;

    t2 = (x29/((x30<=x31)%x32));

    if (t2 != -1951568LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x33 = 71U;
	int64_t x35 = 199378390529LL;
	uint32_t x36 = UINT32_MAX;

    t3 = (x33/((x34<=x35)%x36));

    if (t3 != 71U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MAX;
	uint32_t x40 = 212179U;
	uint32_t t4 = 1931U;

    t4 = (x37/((x38<=x39)%x40));

    if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x41 = -27;
	volatile int32_t x43 = -1;
	uint64_t x44 = 5895555247654LLU;
	uint64_t t5 = 38069405331LLU;

    t5 = (x41/((x42<=x43)%x44));

    if (t5 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x45 = INT32_MIN;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MAX;
	int32_t t6 = INT32_MIN;

    t6 = (x45/((x46<=x47)%x48));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x57 = UINT32_MAX;
	int32_t x58 = -1447;
	uint8_t x60 = UINT8_MAX;

    t7 = (x57/((x58<=x59)%x60));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x65 = INT16_MIN;
	static uint8_t x67 = UINT8_MAX;
	uint16_t x68 = 3U;
	int32_t t8 = -1959573;

    t8 = (x65/((x66<=x67)%x68));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MIN;
	static int64_t x71 = -555882417LL;
	int16_t x72 = INT16_MAX;
	int32_t t9 = -182694;

    t9 = (x69/((x70<=x71)%x72));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x82 = -55;
	static volatile int64_t x83 = 2910545103480LL;
	static int64_t x84 = -885LL;

    t10 = (x81/((x82<=x83)%x84));

    if (t10 != -28LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x85 = 6;
	int8_t x86 = INT8_MIN;
	int64_t x87 = 544970176047548LL;
	static uint32_t x88 = 34759U;

    t11 = (x85/((x86<=x87)%x88));

    if (t11 != 6U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	volatile int16_t x96 = INT16_MAX;
	volatile int32_t t12 = INT32_MAX;

    t12 = (x93/((x94<=x95)%x96));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x97 = 581;
	int16_t x98 = -32;
	uint8_t x99 = 6U;
	uint64_t t13 = 13760750456504LLU;

    t13 = (x97/((x98<=x99)%x100));

    if (t13 != 581LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x105 = INT8_MAX;
	int64_t x106 = -1LL;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	static int32_t t14 = 226;

    t14 = (x105/((x106<=x107)%x108));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x113 = UINT16_MAX;
	volatile int64_t x114 = -126618534LL;
	int8_t x115 = -1;
	volatile int32_t x116 = 13;
	static int32_t t15 = -6811686;

    t15 = (x113/((x114<=x115)%x116));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x134 = 35823933;
	int16_t x136 = INT16_MAX;
	volatile int64_t t16 = INT64_MIN;

    t16 = (x133/((x134<=x135)%x136));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x142 = -1LL;
	volatile uint8_t x143 = 3U;
	int8_t x144 = INT8_MIN;
	static int32_t t17 = -539;

    t17 = (x141/((x142<=x143)%x144));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x145 = -342202284;
	volatile int16_t x146 = -7657;
	int8_t x147 = -27;
	uint16_t x148 = 43U;
	volatile int32_t t18 = -1014714;

    t18 = (x145/((x146<=x147)%x148));

    if (t18 != -342202284) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x151 = 8741688354033LLU;
	static volatile int32_t t19 = INT32_MIN;

    t19 = (x149/((x150<=x151)%x152));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x153 = 67429884876123146LLU;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	uint64_t t20 = 159658LLU;

    t20 = (x153/((x154<=x155)%x156));

    if (t20 != 67429884876123146LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x161 = -1;
	int16_t x162 = 1;
	volatile uint32_t x163 = UINT32_MAX;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t21 = -2685982LL;

    t21 = (x161/((x162<=x163)%x164));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x166 = 23U;
	int8_t x167 = INT8_MAX;
	uint32_t x168 = 105U;
	uint32_t t22 = UINT32_MAX;

    t22 = (x165/((x166<=x167)%x168));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x169 = INT64_MIN;
	volatile uint64_t x171 = 44461295592611LLU;
	uint16_t x172 = 1942U;
	int64_t t23 = INT64_MIN;

    t23 = (x169/((x170<=x171)%x172));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x177 = 891U;
	uint8_t x178 = 74U;
	uint32_t x179 = 1797U;
	volatile int16_t x180 = INT16_MIN;

    t24 = (x177/((x178<=x179)%x180));

    if (t24 != 891U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x202 = UINT32_MAX;
	int16_t x203 = -1;
	volatile uint64_t t25 = 83137290LLU;

    t25 = (x201/((x202<=x203)%x204));

    if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x217 = UINT16_MAX;
	int32_t t26 = 2;

    t26 = (x217/((x218<=x219)%x220));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x225 = 57U;
	uint8_t x226 = 0U;
	uint16_t x227 = 4U;
	static uint32_t x228 = 2U;

    t27 = (x225/((x226<=x227)%x228));

    if (t27 != 57U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x229 = INT64_MIN;
	volatile int32_t x230 = -1;
	volatile int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	static volatile int64_t t28 = INT64_MIN;

    t28 = (x229/((x230<=x231)%x232));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x245 = -1LL;
	int32_t x246 = -195303124;
	int8_t x248 = INT8_MAX;
	int64_t t29 = -194LL;

    t29 = (x245/((x246<=x247)%x248));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x257 = INT8_MIN;
	static int64_t x258 = -2033566380445LL;
	volatile int8_t x259 = -3;
	int16_t x260 = INT16_MIN;

    t30 = (x257/((x258<=x259)%x260));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x261 = 10U;
	int8_t x264 = INT8_MAX;
	static int32_t t31 = -8650;

    t31 = (x261/((x262<=x263)%x264));

    if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x269 = 15U;
	uint16_t x271 = UINT16_MAX;

    t32 = (x269/((x270<=x271)%x272));

    if (t32 != 15U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x277 = UINT16_MAX;
	static int8_t x278 = INT8_MIN;
	int8_t x279 = 0;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t33 = 57;

    t33 = (x277/((x278<=x279)%x280));

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 52403481U;
	static uint64_t x287 = 64179846469LLU;
	static uint8_t x288 = 51U;

    t34 = (x285/((x286<=x287)%x288));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x290 = INT16_MIN;
	int64_t x291 = 28583326376LL;
	volatile int32_t t35 = 79176;

    t35 = (x289/((x290<=x291)%x292));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x294 = -1;
	int64_t x295 = -1LL;
	volatile uint32_t x296 = 156U;
	volatile uint32_t t36 = 49492046U;

    t36 = (x293/((x294<=x295)%x296));

    if (t36 != 4294967290U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x298 = INT8_MAX;
	int32_t x299 = 520864;
	uint32_t t37 = 100U;

    t37 = (x297/((x298<=x299)%x300));

    if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x306 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t38 = 9445801LLU;

    t38 = (x305/((x306<=x307)%x308));

    if (t38 != 28LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x325 = 97581364507131348LLU;
	uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MAX;
	volatile uint64_t t39 = 574653643LLU;

    t39 = (x325/((x326<=x327)%x328));

    if (t39 != 97581364507131348LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x346 = UINT32_MAX;
	volatile int32_t x347 = -1;
	static int64_t t40 = -85305814339287LL;

    t40 = (x345/((x346<=x347)%x348));

    if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x353 = INT64_MIN;
	int8_t x354 = -1;
	int32_t x355 = 112327;
	static uint64_t x356 = 1465040584206005LLU;
	uint64_t t41 = 6538825441641390782LLU;

    t41 = (x353/((x354<=x355)%x356));

    if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x361 = 1;
	int16_t x362 = INT16_MIN;
	static volatile int32_t t42 = -4;

    t42 = (x361/((x362<=x363)%x364));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	static volatile int32_t t43 = INT32_MIN;

    t43 = (x365/((x366<=x367)%x368));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x383 = 91U;
	int16_t x384 = INT16_MIN;
	volatile int64_t t44 = INT64_MIN;

    t44 = (x381/((x382<=x383)%x384));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x389 = INT64_MIN;
	uint8_t x390 = 5U;
	volatile uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	int64_t t45 = INT64_MIN;

    t45 = (x389/((x390<=x391)%x392));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x393 = -7;
	uint64_t x394 = 52278LLU;
	int64_t x395 = INT64_MIN;
	volatile int32_t t46 = 67632544;

    t46 = (x393/((x394<=x395)%x396));

    if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x405 = 53U;
	int8_t x406 = INT8_MIN;
	int32_t t47 = 200504953;

    t47 = (x405/((x406<=x407)%x408));

    if (t47 != 53) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MAX;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t48 = 79402088147LLU;

    t48 = (x425/((x426<=x427)%x428));

    if (t48 != 344LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x433 = INT32_MIN;
	volatile int16_t x434 = 6;
	int64_t x435 = 49573818002205186LL;
	static volatile int32_t t49 = INT32_MIN;

    t49 = (x433/((x434<=x435)%x436));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x437 = INT64_MAX;
	static int16_t x438 = -1;
	volatile uint8_t x439 = 3U;
	int32_t x440 = 349622;
	int64_t t50 = INT64_MAX;

    t50 = (x437/((x438<=x439)%x440));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x449 = 144;
	uint8_t x450 = 3U;
	static int32_t x451 = INT32_MAX;
	static volatile int16_t x452 = 3;
	volatile int32_t t51 = -97244;

    t51 = (x449/((x450<=x451)%x452));

    if (t51 != 144) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x462 = -1;
	int8_t x463 = -1;
	int64_t x464 = -199535518381862227LL;
	volatile int64_t t52 = 20LL;

    t52 = (x461/((x462<=x463)%x464));

    if (t52 != 2513LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x475 = 925573480;
	volatile uint64_t t53 = 1068382561360LLU;

    t53 = (x473/((x474<=x475)%x476));

    if (t53 != 979LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x477 = 115942611702927382LLU;
	int32_t x478 = -1;
	uint32_t x479 = UINT32_MAX;
	volatile int16_t x480 = INT16_MIN;
	uint64_t t54 = 16387642LLU;

    t54 = (x477/((x478<=x479)%x480));

    if (t54 != 115942611702927382LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	static uint32_t x483 = UINT32_MAX;
	uint16_t x484 = 377U;

    t55 = (x481/((x482<=x483)%x484));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x485 = 14468U;
	int64_t x486 = -1LL;
	uint32_t x487 = UINT32_MAX;
	static uint64_t x488 = UINT64_MAX;
	uint64_t t56 = 44196LLU;

    t56 = (x485/((x486<=x487)%x488));

    if (t56 != 14468LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x493 = INT32_MIN;
	int64_t x494 = -1LL;
	int8_t x495 = 7;
	uint8_t x496 = 3U;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x493/((x494<=x495)%x496));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x509 = 50U;
	volatile int32_t x510 = 105988723;
	uint64_t x511 = UINT64_MAX;
	uint8_t x512 = 6U;
	volatile int32_t t58 = 5681219;

    t58 = (x509/((x510<=x511)%x512));

    if (t58 != 50) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x515 = -1LL;
	int16_t x516 = INT16_MAX;
	static uint64_t t59 = 14531527092048LLU;

    t59 = (x513/((x514<=x515)%x516));

    if (t59 != 47653474586718LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x517 = 2U;
	int8_t x518 = -1;
	int8_t x520 = INT8_MIN;
	volatile uint32_t t60 = 3922U;

    t60 = (x517/((x518<=x519)%x520));

    if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x522 = INT8_MAX;
	uint16_t x523 = UINT16_MAX;
	int64_t x524 = INT64_MIN;
	int64_t t61 = INT64_MAX;

    t61 = (x521/((x522<=x523)%x524));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x529 = INT16_MIN;
	uint64_t x530 = 158758920LLU;
	static int32_t x531 = INT32_MAX;
	volatile int32_t t62 = 667;

    t62 = (x529/((x530<=x531)%x532));

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x537 = 1660U;
	uint8_t x539 = UINT8_MAX;
	volatile int64_t t63 = 203832000303040LL;

    t63 = (x537/((x538<=x539)%x540));

    if (t63 != 1660LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x541 = 7;
	int64_t x542 = INT64_MIN;
	int8_t x543 = -1;
	static volatile int32_t x544 = INT32_MIN;
	int32_t t64 = -8058;

    t64 = (x541/((x542<=x543)%x544));

    if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x549 = -7;
	int32_t x551 = -1;
	uint64_t x552 = 2LLU;
	uint64_t t65 = 19628421740LLU;

    t65 = (x549/((x550<=x551)%x552));

    if (t65 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x553 = 736U;
	volatile int64_t x554 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	int64_t x556 = -46887696732LL;
	int64_t t66 = -3932015057992588266LL;

    t66 = (x553/((x554<=x555)%x556));

    if (t66 != 736LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x561 = INT32_MIN;
	int8_t x562 = 6;
	uint16_t x564 = UINT16_MAX;
	static int32_t t67 = INT32_MIN;

    t67 = (x561/((x562<=x563)%x564));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x565 = -122555829;
	uint16_t x566 = 80U;
	volatile int32_t x567 = 56723;
	int32_t t68 = 24;

    t68 = (x565/((x566<=x567)%x568));

    if (t68 != -122555829) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x581 = 86217;
	uint64_t x582 = UINT64_MAX;
	static int32_t x583 = -1;
	volatile int64_t x584 = INT64_MIN;
	static int64_t t69 = -88LL;

    t69 = (x581/((x582<=x583)%x584));

    if (t69 != 86217LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x590 = -92639;
	volatile int32_t x592 = INT32_MIN;
	int32_t t70 = -1343;

    t70 = (x589/((x590<=x591)%x592));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x593 = 32859710516660358LL;
	static int16_t x594 = INT16_MAX;
	uint64_t x595 = 2197856296008LLU;
	uint32_t x596 = UINT32_MAX;
	volatile int64_t t71 = 26787LL;

    t71 = (x593/((x594<=x595)%x596));

    if (t71 != 32859710516660358LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x603 = 54868U;
	volatile int32_t t72 = 1;

    t72 = (x601/((x602<=x603)%x604));

    if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x617 = UINT8_MAX;
	int8_t x618 = -1;
	uint32_t x620 = 107U;
	uint32_t t73 = 34965U;

    t73 = (x617/((x618<=x619)%x620));

    if (t73 != 255U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x621 = UINT64_MAX;
	volatile int8_t x623 = INT8_MAX;
	uint8_t x624 = UINT8_MAX;
	uint64_t t74 = UINT64_MAX;

    t74 = (x621/((x622<=x623)%x624));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x626 = 1U;
	static volatile int32_t x628 = INT32_MIN;
	static volatile int32_t t75 = -2180;

    t75 = (x625/((x626<=x627)%x628));

    if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x629 = -131;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = 3;
	volatile int32_t t76 = -2;

    t76 = (x629/((x630<=x631)%x632));

    if (t76 != -131) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x641 = 452U;
	static uint8_t x642 = UINT8_MAX;
	uint64_t x643 = UINT64_MAX;
	int32_t t77 = -52;

    t77 = (x641/((x642<=x643)%x644));

    if (t77 != 452) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x645 = 1;
	int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MIN;
	int32_t t78 = 1;

    t78 = (x645/((x646<=x647)%x648));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x673 = 7U;
	int64_t x674 = INT64_MIN;
	uint16_t x675 = 10237U;
	int64_t x676 = INT64_MIN;
	int64_t t79 = 301562680672LL;

    t79 = (x673/((x674<=x675)%x676));

    if (t79 != 7LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x678 = INT16_MIN;
	int16_t x679 = -113;
	volatile int16_t x680 = INT16_MIN;
	volatile int32_t t80 = 76588;

    t80 = (x677/((x678<=x679)%x680));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x697 = 1;
	volatile int16_t x698 = -31;
	int16_t x699 = 155;
	int32_t x700 = -8;

    t81 = (x697/((x698<=x699)%x700));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x701 = 49321;
	uint32_t x703 = UINT32_MAX;
	int16_t x704 = -89;
	static volatile int32_t t82 = -57;

    t82 = (x701/((x702<=x703)%x704));

    if (t82 != 49321) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x705 = INT8_MAX;
	int32_t x706 = INT32_MIN;
	int16_t x707 = -1;
	static uint64_t x708 = 437614498571932LLU;

    t83 = (x705/((x706<=x707)%x708));

    if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x709 = INT64_MAX;
	uint32_t x710 = UINT32_MAX;
	volatile uint32_t x711 = UINT32_MAX;
	volatile uint32_t x712 = UINT32_MAX;

    t84 = (x709/((x710<=x711)%x712));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x717 = -1LL;
	int32_t x719 = INT32_MAX;
	int64_t t85 = 2LL;

    t85 = (x717/((x718<=x719)%x720));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x733 = 1773866898295LLU;
	volatile int16_t x734 = INT16_MIN;
	static int8_t x735 = INT8_MIN;
	int64_t x736 = INT64_MIN;
	volatile uint64_t t86 = 6788815LLU;

    t86 = (x733/((x734<=x735)%x736));

    if (t86 != 1773866898295LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x741 = INT8_MAX;
	int32_t x744 = INT32_MAX;
	static int32_t t87 = 38368890;

    t87 = (x741/((x742<=x743)%x744));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x746 = -257063551;
	int32_t x747 = -1;
	uint16_t x748 = 10036U;
	volatile int64_t t88 = 22938602735725952LL;

    t88 = (x745/((x746<=x747)%x748));

    if (t88 != -7263055984847LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x758 = -481;
	int32_t x759 = INT32_MAX;
	int64_t x760 = INT64_MIN;
	int64_t t89 = -368533LL;

    t89 = (x757/((x758<=x759)%x760));

    if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x761 = INT64_MAX;
	int32_t x764 = INT32_MIN;
	volatile int64_t t90 = INT64_MAX;

    t90 = (x761/((x762<=x763)%x764));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x778 = -1LL;
	int32_t t91 = -92654498;

    t91 = (x777/((x778<=x779)%x780));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x829 = -1;
	int8_t x831 = -1;
	volatile int64_t x832 = INT64_MAX;
	volatile int64_t t92 = -1184112473862LL;

    t92 = (x829/((x830<=x831)%x832));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x837 = -336;
	static volatile uint32_t x838 = 161U;
	int16_t x839 = -2256;
	volatile uint32_t x840 = 457800U;
	volatile uint32_t t93 = 363673U;

    t93 = (x837/((x838<=x839)%x840));

    if (t93 != 4294966960U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x841 = -1;
	static volatile int64_t x842 = -11574812494LL;
	static int16_t x843 = -1;
	static volatile int8_t x844 = INT8_MIN;
	int32_t t94 = 41171;

    t94 = (x841/((x842<=x843)%x844));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x853 = 70;
	int32_t x854 = INT32_MIN;
	volatile int16_t x855 = 278;
	uint8_t x856 = 43U;
	static int32_t t95 = -183;

    t95 = (x853/((x854<=x855)%x856));

    if (t95 != 70) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x857 = -28370685LL;
	volatile int64_t x858 = -12278984174341LL;
	int32_t x859 = -72263921;
	int64_t x860 = INT64_MIN;
	static int64_t t96 = 17LL;

    t96 = (x857/((x858<=x859)%x860));

    if (t96 != -28370685LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x865 = 10979;
	int64_t x866 = -1LL;
	uint16_t x867 = 2310U;
	static int16_t x868 = INT16_MAX;

    t97 = (x865/((x866<=x867)%x868));

    if (t97 != 10979) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x877 = INT8_MIN;
	int16_t x878 = INT16_MAX;
	volatile int32_t x879 = INT32_MAX;
	static int8_t x880 = INT8_MIN;
	int32_t t98 = 1436;

    t98 = (x877/((x878<=x879)%x880));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x881 = 7LLU;
	static volatile uint32_t x882 = 94440U;
	int8_t x883 = -6;
	uint64_t x884 = UINT64_MAX;
	volatile uint64_t t99 = 27384078604LLU;

    t99 = (x881/((x882<=x883)%x884));

    if (t99 != 7LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x889 = UINT16_MAX;
	int8_t x890 = INT8_MIN;
	uint32_t x891 = UINT32_MAX;
	int64_t x892 = INT64_MAX;
	int64_t t100 = 77712973LL;

    t100 = (x889/((x890<=x891)%x892));

    if (t100 != 65535LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x897 = INT16_MIN;
	int16_t x898 = -1;
	int16_t x899 = 1493;
	static int64_t t101 = 9848LL;

    t101 = (x897/((x898<=x899)%x900));

    if (t101 != -32768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x901 = INT16_MAX;
	int8_t x902 = INT8_MIN;
	int8_t x903 = INT8_MIN;
	int32_t x904 = INT32_MIN;
	static volatile int32_t t102 = 1905689;

    t102 = (x901/((x902<=x903)%x904));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x905 = -1LL;
	int8_t x906 = INT8_MIN;
	int16_t x907 = INT16_MAX;
	uint8_t x908 = 3U;
	static volatile int64_t t103 = -64831835LL;

    t103 = (x905/((x906<=x907)%x908));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x917 = UINT64_MAX;
	static uint8_t x918 = 9U;
	static uint64_t t104 = UINT64_MAX;

    t104 = (x917/((x918<=x919)%x920));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x921 = -1;
	volatile int64_t x922 = INT64_MIN;
	int8_t x923 = -1;
	int32_t t105 = 397672;

    t105 = (x921/((x922<=x923)%x924));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x925 = 474;
	int32_t x926 = INT32_MIN;
	int8_t x928 = INT8_MIN;

    t106 = (x925/((x926<=x927)%x928));

    if (t106 != 474) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x934 = -1;
	static int8_t x935 = -1;
	static volatile int32_t x936 = INT32_MIN;

    t107 = (x933/((x934<=x935)%x936));

    if (t107 != -3) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x937 = INT8_MIN;
	uint16_t x938 = 0U;
	volatile int64_t x939 = INT64_MAX;
	uint16_t x940 = UINT16_MAX;
	int32_t t108 = 3;

    t108 = (x937/((x938<=x939)%x940));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x945 = -284227053904125LL;
	static uint16_t x948 = 239U;
	volatile int64_t t109 = -15979822709329367LL;

    t109 = (x945/((x946<=x947)%x948));

    if (t109 != -284227053904125LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x949 = UINT32_MAX;
	int64_t x950 = -1LL;
	volatile int32_t x951 = 85549611;
	int8_t x952 = INT8_MIN;
	uint32_t t110 = UINT32_MAX;

    t110 = (x949/((x950<=x951)%x952));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x953 = UINT8_MAX;
	uint8_t x954 = 6U;
	int8_t x955 = INT8_MAX;
	volatile int64_t x956 = -10205362527586000LL;
	static int64_t t111 = -44053958268731557LL;

    t111 = (x953/((x954<=x955)%x956));

    if (t111 != 255LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x970 = INT8_MIN;
	int16_t x971 = -1;
	uint32_t t112 = UINT32_MAX;

    t112 = (x969/((x970<=x971)%x972));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x977 = INT8_MIN;
	volatile int8_t x980 = -25;

    t113 = (x977/((x978<=x979)%x980));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x985 = INT64_MIN;
	static int32_t x986 = INT32_MIN;
	int32_t x987 = 1;
	static uint64_t x988 = 2218LLU;
	uint64_t t114 = 135LLU;

    t114 = (x985/((x986<=x987)%x988));

    if (t114 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x989 = -1;
	uint32_t x990 = 15U;
	uint8_t x991 = UINT8_MAX;
	uint8_t x992 = UINT8_MAX;
	static int32_t t115 = 10194;

    t115 = (x989/((x990<=x991)%x992));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x993 = INT32_MIN;
	volatile int64_t x994 = -1LL;
	volatile uint32_t x995 = 10U;
	volatile int64_t x996 = INT64_MIN;
	static volatile int64_t t116 = -194860LL;

    t116 = (x993/((x994<=x995)%x996));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x1009 = -4335;
	uint64_t x1010 = 96460610025389LLU;
	int64_t x1011 = INT64_MIN;
	int64_t x1012 = INT64_MIN;
	int64_t t117 = 389945660LL;

    t117 = (x1009/((x1010<=x1011)%x1012));

    if (t117 != -4335LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x1014 = INT64_MIN;
	int8_t x1015 = INT8_MIN;
	int64_t x1016 = INT64_MIN;

    t118 = (x1013/((x1014<=x1015)%x1016));

    if (t118 != 51847676530581561LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1018 = 28U;
	uint16_t x1019 = 11550U;
	static uint16_t x1020 = 13827U;

    t119 = (x1017/((x1018<=x1019)%x1020));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x1026 = 25748504651LLU;
	int32_t x1028 = INT32_MIN;
	volatile int32_t t120 = 781536;

    t120 = (x1025/((x1026<=x1027)%x1028));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x1037 = INT8_MIN;
	uint32_t x1039 = UINT32_MAX;
	volatile int8_t x1040 = INT8_MAX;

    t121 = (x1037/((x1038<=x1039)%x1040));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1043 = INT16_MAX;
	volatile uint64_t x1044 = UINT64_MAX;
	uint64_t t122 = 168000217LLU;

    t122 = (x1041/((x1042<=x1043)%x1044));

    if (t122 != 60LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1053 = INT32_MIN;
	static int8_t x1054 = INT8_MIN;
	uint64_t x1056 = 3103371060772372344LLU;

    t123 = (x1053/((x1054<=x1055)%x1056));

    if (t123 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x1057 = 17013856;
	static int64_t x1058 = INT64_MIN;
	int16_t x1059 = INT16_MIN;
	uint32_t x1060 = 566852U;
	uint32_t t124 = 130602U;

    t124 = (x1057/((x1058<=x1059)%x1060));

    if (t124 != 17013856U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x1073 = UINT64_MAX;
	int8_t x1074 = -1;
	uint8_t x1075 = 96U;
	uint16_t x1076 = 638U;
	static volatile uint64_t t125 = UINT64_MAX;

    t125 = (x1073/((x1074<=x1075)%x1076));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x1077 = 23U;
	volatile uint32_t x1078 = 1313122U;
	int16_t x1079 = INT16_MIN;
	uint8_t x1080 = 43U;
	volatile uint32_t t126 = 436969383U;

    t126 = (x1077/((x1078<=x1079)%x1080));

    if (t126 != 23U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x1081 = INT32_MIN;
	uint64_t x1083 = 10086858882LLU;
	static int16_t x1084 = INT16_MAX;
	volatile int32_t t127 = INT32_MIN;

    t127 = (x1081/((x1082<=x1083)%x1084));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x1090 = -1;
	int16_t x1092 = INT16_MIN;
	volatile int32_t t128 = -239344;

    t128 = (x1089/((x1090<=x1091)%x1092));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1093 = 2;
	int64_t x1094 = INT64_MIN;
	int64_t x1095 = -2929910LL;
	volatile uint64_t x1096 = 19577117649937LLU;
	volatile uint64_t t129 = 8708517LLU;

    t129 = (x1093/((x1094<=x1095)%x1096));

    if (t129 != 2LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1114 = INT32_MIN;
	volatile int16_t x1115 = -1;
	uint8_t x1116 = UINT8_MAX;
	volatile int64_t t130 = -39751LL;

    t130 = (x1113/((x1114<=x1115)%x1116));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1125 = INT16_MAX;
	volatile uint8_t x1126 = 127U;
	uint8_t x1127 = UINT8_MAX;
	int32_t x1128 = INT32_MAX;
	volatile int32_t t131 = 1;

    t131 = (x1125/((x1126<=x1127)%x1128));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1133 = -1;
	int64_t x1135 = INT64_MAX;
	uint64_t x1136 = UINT64_MAX;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x1133/((x1134<=x1135)%x1136));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x1141 = 179933U;
	uint64_t x1142 = 124LLU;
	int64_t x1143 = INT64_MAX;
	static int32_t x1144 = 226096554;
	static volatile uint32_t t133 = 940755U;

    t133 = (x1141/((x1142<=x1143)%x1144));

    if (t133 != 179933U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x1146 = -1LL;
	int64_t x1148 = -70406399LL;

    t134 = (x1145/((x1146<=x1147)%x1148));

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1153 = INT64_MIN;
	volatile int64_t x1154 = INT64_MIN;
	volatile int32_t x1155 = INT32_MIN;
	static uint32_t x1156 = 7423816U;
	int64_t t135 = INT64_MIN;

    t135 = (x1153/((x1154<=x1155)%x1156));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1167 = 5726936238034LL;
	int8_t x1168 = INT8_MIN;
	volatile int32_t t136 = -111;

    t136 = (x1165/((x1166<=x1167)%x1168));

    if (t136 != 27) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1169 = INT16_MAX;
	uint32_t x1170 = 549U;
	static int8_t x1172 = INT8_MIN;
	volatile int32_t t137 = 6189173;

    t137 = (x1169/((x1170<=x1171)%x1172));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x1177 = 120010LLU;
	static uint16_t x1178 = 4367U;
	static volatile uint64_t x1179 = 640151666641891LLU;
	int64_t x1180 = 3607036419384LL;

    t138 = (x1177/((x1178<=x1179)%x1180));

    if (t138 != 120010LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x1194 = INT8_MIN;
	volatile uint64_t t139 = UINT64_MAX;

    t139 = (x1193/((x1194<=x1195)%x1196));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1201 = -1918322419030671LL;
	static int8_t x1202 = INT8_MIN;
	int8_t x1203 = -13;
	int16_t x1204 = INT16_MIN;
	static volatile int64_t t140 = 522137023037306LL;

    t140 = (x1201/((x1202<=x1203)%x1204));

    if (t140 != -1918322419030671LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x1217 = 70U;
	int8_t x1218 = 14;
	int32_t t141 = 1409;

    t141 = (x1217/((x1218<=x1219)%x1220));

    if (t141 != 70) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1231 = INT8_MIN;
	static uint64_t x1232 = 61526LLU;
	volatile uint64_t t142 = 1181864420015333094LLU;

    t142 = (x1229/((x1230<=x1231)%x1232));

    if (t142 != 16517021328840023LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1233 = -5650693;
	int16_t x1234 = -115;
	volatile int32_t x1235 = INT32_MAX;
	int16_t x1236 = INT16_MAX;
	volatile int32_t t143 = 477023;

    t143 = (x1233/((x1234<=x1235)%x1236));

    if (t143 != -5650693) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1249 = INT8_MIN;
	uint64_t x1250 = 8LLU;
	static int64_t x1251 = INT64_MAX;
	volatile int32_t t144 = -173879;

    t144 = (x1249/((x1250<=x1251)%x1252));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1261 = -1;
	static int64_t x1262 = -9797357842460847LL;
	uint64_t x1264 = 7LLU;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = (x1261/((x1262<=x1263)%x1264));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1270 = -1;
	int8_t x1271 = -1;
	static uint32_t t146 = UINT32_MAX;

    t146 = (x1269/((x1270<=x1271)%x1272));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1277 = INT8_MAX;
	uint32_t x1279 = UINT32_MAX;

    t147 = (x1277/((x1278<=x1279)%x1280));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1289 = -14346;
	volatile uint8_t x1290 = 0U;
	uint8_t x1292 = 54U;
	int32_t t148 = 30;

    t148 = (x1289/((x1290<=x1291)%x1292));

    if (t148 != -14346) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x1295 = 132457004U;
	uint8_t x1296 = 7U;
	int32_t t149 = -262;

    t149 = (x1293/((x1294<=x1295)%x1296));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x1297 = 44;
	uint32_t x1298 = 1U;
	int16_t x1299 = -1;
	int64_t x1300 = INT64_MAX;
	volatile int64_t t150 = -408987098883374870LL;

    t150 = (x1297/((x1298<=x1299)%x1300));

    if (t150 != 44LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x1313 = INT32_MIN;
	int16_t x1314 = 0;
	static uint8_t x1315 = 2U;
	uint32_t x1316 = UINT32_MAX;

    t151 = (x1313/((x1314<=x1315)%x1316));

    if (t151 != 2147483648U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1321 = -1;
	volatile int64_t x1322 = -8LL;
	volatile uint32_t x1323 = UINT32_MAX;
	volatile int64_t x1324 = INT64_MAX;
	int64_t t152 = -120652444817818LL;

    t152 = (x1321/((x1322<=x1323)%x1324));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1330 = INT8_MIN;
	int32_t x1331 = 2639475;
	volatile uint32_t x1332 = 10U;
	volatile uint32_t t153 = UINT32_MAX;

    t153 = (x1329/((x1330<=x1331)%x1332));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1345 = 14;
	int16_t x1346 = -16;
	volatile int32_t x1347 = 1677271;
	int32_t x1348 = -712;
	int32_t t154 = 89460402;

    t154 = (x1345/((x1346<=x1347)%x1348));

    if (t154 != 14) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x1349 = INT32_MIN;
	static uint8_t x1350 = 2U;
	volatile uint64_t x1351 = 295196847LLU;
	int8_t x1352 = -7;

    t155 = (x1349/((x1350<=x1351)%x1352));

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1353 = 422047233428LLU;
	static int8_t x1354 = INT8_MAX;
	volatile uint64_t x1355 = 722647868169LLU;
	uint64_t t156 = 35469749LLU;

    t156 = (x1353/((x1354<=x1355)%x1356));

    if (t156 != 422047233428LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x1358 = -1194471LL;
	int16_t x1359 = 4679;
	uint64_t x1360 = UINT64_MAX;
	uint64_t t157 = 26LLU;

    t157 = (x1357/((x1358<=x1359)%x1360));

    if (t157 != 5LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1363 = -1;

    t158 = (x1361/((x1362<=x1363)%x1364));

    if (t158 != -32768LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1377 = UINT8_MAX;
	int64_t x1379 = -1LL;
	uint64_t t159 = 995892065192064LLU;

    t159 = (x1377/((x1378<=x1379)%x1380));

    if (t159 != 255LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1389 = INT8_MIN;
	int8_t x1390 = INT8_MIN;
	int8_t x1391 = INT8_MAX;
	int32_t x1392 = INT32_MIN;
	int32_t t160 = -2;

    t160 = (x1389/((x1390<=x1391)%x1392));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1397 = UINT32_MAX;
	volatile int16_t x1398 = INT16_MIN;
	uint16_t x1399 = 2U;
	static uint32_t x1400 = 1435594U;
	static volatile uint32_t t161 = UINT32_MAX;

    t161 = (x1397/((x1398<=x1399)%x1400));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1411 = INT16_MAX;
	uint32_t x1412 = 75306701U;

    t162 = (x1409/((x1410<=x1411)%x1412));

    if (t162 != 2147483648U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1433 = -1LL;
	uint32_t x1435 = UINT32_MAX;
	int64_t x1436 = -10531833891685283LL;
	volatile int64_t t163 = 5LL;

    t163 = (x1433/((x1434<=x1435)%x1436));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1437 = -2140617171652888LL;
	int16_t x1438 = INT16_MAX;
	static int32_t x1440 = INT32_MIN;

    t164 = (x1437/((x1438<=x1439)%x1440));

    if (t164 != -2140617171652888LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1457 = 674864775U;
	volatile int16_t x1458 = -1;
	volatile uint16_t x1459 = 1U;
	uint32_t x1460 = 823744030U;
	uint32_t t165 = 1907U;

    t165 = (x1457/((x1458<=x1459)%x1460));

    if (t165 != 674864775U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x1462 = 1380;
	uint64_t x1463 = UINT64_MAX;
	volatile int32_t x1464 = 36618;

    t166 = (x1461/((x1462<=x1463)%x1464));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1465 = 476209;
	int64_t x1466 = -537641283051152LL;
	int64_t x1468 = -919852LL;
	static volatile int64_t t167 = -1LL;

    t167 = (x1465/((x1466<=x1467)%x1468));

    if (t167 != 476209LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1469 = 3U;
	uint16_t x1470 = 1U;
	int32_t x1471 = INT32_MAX;
	int8_t x1472 = INT8_MAX;
	volatile int32_t t168 = 0;

    t168 = (x1469/((x1470<=x1471)%x1472));

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1481 = -3;
	int8_t x1482 = -1;
	uint8_t x1483 = UINT8_MAX;
	volatile uint64_t x1484 = 31570433467458LLU;
	uint64_t t169 = 89LLU;

    t169 = (x1481/((x1482<=x1483)%x1484));

    if (t169 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x1501 = 1760U;
	static int16_t x1502 = INT16_MIN;
	int32_t x1504 = INT32_MIN;
	volatile int32_t t170 = -3563;

    t170 = (x1501/((x1502<=x1503)%x1504));

    if (t170 != 1760) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1505 = UINT8_MAX;
	uint8_t x1508 = 59U;
	static int32_t t171 = -987616;

    t171 = (x1505/((x1506<=x1507)%x1508));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1510 = 2U;
	uint32_t x1511 = 3U;
	int32_t t172 = -29954;

    t172 = (x1509/((x1510<=x1511)%x1512));

    if (t172 != -28) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1513 = 1;
	int64_t x1514 = INT64_MIN;
	uint8_t x1515 = 13U;
	uint32_t x1516 = UINT32_MAX;
	uint32_t t173 = 67904017U;

    t173 = (x1513/((x1514<=x1515)%x1516));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x1534 = -1;
	volatile int8_t x1535 = INT8_MAX;
	uint64_t x1536 = 9074988862LLU;
	static uint64_t t174 = 291948771683182367LLU;

    t174 = (x1533/((x1534<=x1535)%x1536));

    if (t174 != 6669LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1538 = -13;
	uint8_t x1539 = 27U;

    t175 = (x1537/((x1538<=x1539)%x1540));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1545 = 1U;
	uint64_t x1547 = 226466777982LLU;
	int32_t x1548 = INT32_MAX;
	volatile int32_t t176 = 923;

    t176 = (x1545/((x1546<=x1547)%x1548));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1569 = INT64_MIN;
	volatile uint64_t x1570 = 8LLU;
	int64_t x1571 = INT64_MIN;
	int64_t x1572 = -142797034894LL;

    t177 = (x1569/((x1570<=x1571)%x1572));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1573 = 408282203360256LL;
	uint16_t x1574 = 4U;
	uint32_t x1575 = 5240U;
	int64_t x1576 = INT64_MAX;
	int64_t t178 = -7768193279369LL;

    t178 = (x1573/((x1574<=x1575)%x1576));

    if (t178 != 408282203360256LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1578 = INT8_MIN;
	int8_t x1579 = 4;
	int16_t x1580 = 9;
	volatile int32_t t179 = -15;

    t179 = (x1577/((x1578<=x1579)%x1580));

    if (t179 != 63) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1581 = INT64_MAX;
	static volatile uint64_t x1583 = UINT64_MAX;
	int32_t x1584 = -207295349;
	volatile int64_t t180 = INT64_MAX;

    t180 = (x1581/((x1582<=x1583)%x1584));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1589 = 6U;
	int16_t x1590 = -121;
	uint64_t x1591 = UINT64_MAX;
	volatile int64_t x1592 = -390899755153810LL;

    t181 = (x1589/((x1590<=x1591)%x1592));

    if (t181 != 6LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1601 = INT16_MAX;
	int64_t x1602 = INT64_MIN;
	static uint8_t x1603 = 28U;
	int64_t x1604 = INT64_MIN;
	int64_t t182 = -1LL;

    t182 = (x1601/((x1602<=x1603)%x1604));

    if (t182 != 32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1609 = INT64_MIN;
	int64_t x1610 = -15209108110170269LL;
	static int8_t x1611 = INT8_MIN;
	int8_t x1612 = INT8_MAX;
	static int64_t t183 = INT64_MIN;

    t183 = (x1609/((x1610<=x1611)%x1612));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1613 = 5010LLU;
	static int32_t x1615 = -1;
	int16_t x1616 = INT16_MIN;
	uint64_t t184 = 4248358044LLU;

    t184 = (x1613/((x1614<=x1615)%x1616));

    if (t184 != 5010LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1617 = 28156699LLU;
	int8_t x1618 = 0;
	int32_t x1619 = INT32_MAX;
	int32_t x1620 = INT32_MIN;
	uint64_t t185 = 2353876459699760377LLU;

    t185 = (x1617/((x1618<=x1619)%x1620));

    if (t185 != 28156699LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1621 = 1768U;
	uint32_t x1622 = UINT32_MAX;
	int16_t x1623 = -1;
	int64_t t186 = -71327392176229370LL;

    t186 = (x1621/((x1622<=x1623)%x1624));

    if (t186 != 1768LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1629 = INT16_MAX;
	static uint8_t x1630 = 19U;
	uint32_t x1631 = UINT32_MAX;
	int8_t x1632 = INT8_MAX;
	volatile int32_t t187 = -1;

    t187 = (x1629/((x1630<=x1631)%x1632));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1649 = -7449;
	static uint16_t x1650 = 11472U;
	uint32_t x1651 = 132263115U;
	uint16_t x1652 = UINT16_MAX;
	int32_t t188 = -5;

    t188 = (x1649/((x1650<=x1651)%x1652));

    if (t188 != -7449) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1665 = -1;
	int64_t x1666 = -179155084LL;
	volatile int64_t x1667 = -4683122LL;
	int32_t t189 = 473657981;

    t189 = (x1665/((x1666<=x1667)%x1668));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1677 = 6688956U;
	int64_t x1678 = INT64_MIN;
	int8_t x1679 = INT8_MIN;
	uint64_t x1680 = UINT64_MAX;
	volatile uint64_t t190 = 633157LLU;

    t190 = (x1677/((x1678<=x1679)%x1680));

    if (t190 != 6688956LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1686 = INT16_MIN;
	int32_t x1687 = INT32_MAX;
	int16_t x1688 = INT16_MIN;

    t191 = (x1685/((x1686<=x1687)%x1688));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1689 = INT16_MAX;
	uint8_t x1690 = UINT8_MAX;

    t192 = (x1689/((x1690<=x1691)%x1692));

    if (t192 != 32767LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1701 = 93;
	uint8_t x1702 = 67U;
	volatile uint32_t x1703 = UINT32_MAX;
	uint16_t x1704 = 11554U;

    t193 = (x1701/((x1702<=x1703)%x1704));

    if (t193 != 93) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1706 = 6U;
	uint16_t x1707 = UINT16_MAX;
	int8_t x1708 = INT8_MIN;
	int32_t t194 = 86007;

    t194 = (x1705/((x1706<=x1707)%x1708));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1709 = UINT32_MAX;
	static int16_t x1710 = INT16_MIN;
	int8_t x1711 = INT8_MIN;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (x1709/((x1710<=x1711)%x1712));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1721 = -73507653376711097LL;
	static uint8_t x1722 = 3U;
	uint32_t x1723 = UINT32_MAX;
	int64_t x1724 = INT64_MAX;
	int64_t t196 = -125503205873909LL;

    t196 = (x1721/((x1722<=x1723)%x1724));

    if (t196 != -73507653376711097LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1742 = 37U;
	static uint32_t x1743 = UINT32_MAX;
	static uint8_t x1744 = UINT8_MAX;
	volatile uint64_t t197 = UINT64_MAX;

    t197 = (x1741/((x1742<=x1743)%x1744));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1746 = 894649445104LLU;
	int32_t x1747 = -1;
	int16_t x1748 = INT16_MIN;
	int32_t t198 = 122849;

    t198 = (x1745/((x1746<=x1747)%x1748));

    if (t198 != -452) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1753 = 1LL;
	int16_t x1754 = -24;
	uint32_t x1756 = 73710U;
	int64_t t199 = -86000417432LL;

    t199 = (x1753/((x1754<=x1755)%x1756));

    if (t199 != 1LL) { NG(); } else { ; }
	
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

