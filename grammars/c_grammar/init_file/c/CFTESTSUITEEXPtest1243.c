
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

static volatile uint32_t t0 = UINT32_MAX;
int32_t x20 = INT32_MAX;
int16_t x23 = -1;
uint64_t x26 = 105631402896LLU;
int64_t x38 = INT64_MIN;
static volatile uint32_t t6 = 19002U;
uint16_t x70 = UINT16_MAX;
uint32_t x110 = UINT32_MAX;
int16_t x125 = INT16_MAX;
volatile int32_t t15 = 1337;
uint8_t x140 = 12U;
int64_t t17 = 258428632693LL;
uint32_t t19 = 5000391U;
uint64_t x178 = 2446LLU;
static int32_t x179 = INT32_MAX;
int64_t x202 = INT64_MIN;
volatile uint64_t t21 = 40103550941LLU;
int16_t x213 = INT16_MAX;
volatile uint8_t x217 = UINT8_MAX;
int8_t x219 = INT8_MAX;
int32_t x220 = 3870;
static int8_t x234 = -1;
uint8_t x236 = 48U;
int8_t x247 = 1;
uint16_t x248 = UINT16_MAX;
uint64_t t26 = 7LLU;
int64_t x264 = 179504107LL;
uint8_t x272 = UINT8_MAX;
volatile uint32_t x273 = UINT32_MAX;
int32_t t31 = -1;
static volatile int64_t x281 = 501031LL;
volatile int64_t t32 = 4074814335459561888LL;
uint8_t x288 = 80U;
static uint32_t x291 = 1815U;
int8_t x292 = -11;
volatile int32_t t38 = -365799514;
static volatile int64_t x328 = INT64_MIN;
uint32_t x350 = 45435153U;
volatile int32_t t43 = 593110;
uint8_t x360 = 53U;
int8_t x383 = -3;
volatile int8_t x389 = 1;
uint8_t x392 = 7U;
uint16_t x405 = UINT16_MAX;
int64_t x432 = INT64_MIN;
static uint64_t x436 = 12LLU;
volatile int64_t x441 = INT64_MAX;
static volatile uint32_t x487 = UINT32_MAX;
static int8_t x493 = 13;
volatile int64_t x507 = INT64_MAX;
int32_t x546 = -1;
volatile int32_t t64 = 114266457;
static uint16_t x561 = 1U;
int8_t x582 = INT8_MIN;
int32_t x587 = -1;
static int64_t x600 = INT64_MIN;
uint8_t x622 = 63U;
volatile uint32_t t71 = 138686U;
int8_t x631 = -1;
volatile int64_t x637 = 88LL;
int8_t x638 = INT8_MIN;
static int32_t x653 = 1;
uint64_t x656 = 685009035584LLU;
uint64_t x657 = 15606978972151879LLU;
uint32_t x658 = 3U;
static int8_t x670 = INT8_MIN;
int16_t x671 = INT16_MAX;
uint16_t x677 = UINT16_MAX;
int32_t t80 = 1;
int16_t x706 = INT16_MIN;
static volatile int32_t t81 = -308730;
volatile uint64_t t85 = 277965511LLU;
int16_t x739 = INT16_MAX;
int32_t t86 = -9;
uint32_t x747 = UINT32_MAX;
volatile int16_t x754 = -1;
static volatile int32_t t90 = 436640;
uint8_t x777 = 29U;
int8_t x790 = INT8_MIN;
static uint32_t t94 = 1302830U;
volatile int16_t x808 = 1846;
volatile int32_t t98 = 3;
int32_t t100 = -490;
uint32_t x841 = 0U;
int16_t x844 = INT16_MIN;
int32_t x855 = -24;
uint64_t t103 = 20615767117LLU;
int16_t x876 = INT16_MAX;
int32_t x891 = INT32_MAX;
uint32_t x898 = 95167906U;
int64_t x899 = -5228251686LL;
uint8_t x905 = UINT8_MAX;
volatile int32_t t107 = 25;
int8_t x923 = INT8_MAX;
volatile int64_t t109 = 1755010LL;
volatile uint8_t x950 = UINT8_MAX;
volatile int32_t t112 = -5293;
static int32_t x957 = INT32_MAX;
int32_t t113 = INT32_MAX;
uint64_t x973 = 21037194697566LLU;
uint64_t t115 = 14043461750797LLU;
uint16_t x1003 = 741U;
static int16_t x1004 = 8617;
uint32_t t119 = 32482U;
uint8_t x1014 = 104U;
int8_t x1025 = 1;
static int32_t t123 = -4;
int64_t x1030 = INT64_MIN;
int32_t x1031 = INT32_MAX;
int8_t x1035 = -6;
volatile int64_t x1036 = 187778712286LL;
volatile int8_t x1040 = -7;
volatile int32_t t126 = 129;
volatile int32_t t127 = -15;
int8_t x1070 = INT8_MIN;
volatile int64_t x1086 = INT64_MIN;
static int64_t x1094 = INT64_MIN;
static volatile int32_t t131 = 44;
volatile uint8_t x1104 = UINT8_MAX;
volatile int32_t t132 = -764117;
uint8_t x1131 = 57U;
uint64_t x1157 = UINT64_MAX;
uint64_t x1161 = 871534391251260LLU;
volatile int16_t x1165 = INT16_MAX;
int32_t x1166 = -1;
static int32_t t141 = 58909855;
int8_t x1195 = INT8_MAX;
volatile uint64_t x1201 = 525887872139LLU;
static int16_t x1203 = -1;
volatile int64_t t146 = -19172114935019237LL;
uint32_t x1213 = 1171U;
uint16_t x1215 = 844U;
volatile int32_t x1216 = INT32_MAX;
int64_t x1221 = 133255LL;
int64_t x1223 = INT64_MIN;
int32_t x1224 = 476500;
static uint32_t x1235 = 33822219U;
uint16_t x1236 = 342U;
static uint16_t x1245 = UINT16_MAX;
int8_t x1249 = 0;
volatile int16_t x1250 = INT16_MAX;
int64_t x1279 = INT64_MIN;
volatile int64_t x1280 = INT64_MAX;
int32_t x1294 = INT32_MIN;
uint64_t x1300 = 332LLU;
volatile int16_t x1310 = INT16_MAX;
uint32_t x1323 = 389704U;
int32_t t161 = -134028;
static int64_t x1329 = 21393140LL;
volatile int32_t x1331 = INT32_MIN;
static int8_t x1335 = INT8_MAX;
uint64_t x1336 = UINT64_MAX;
int16_t x1342 = -1;
static volatile int64_t x1343 = 1770653812474LL;
static uint16_t x1344 = 3U;
uint8_t x1345 = UINT8_MAX;
int32_t t165 = 3;
int8_t x1350 = INT8_MAX;
int32_t x1354 = -1;
volatile int32_t t167 = 5;
uint32_t t169 = 169U;
uint32_t x1389 = UINT32_MAX;
uint32_t t171 = 71993U;
volatile uint64_t x1395 = UINT64_MAX;
uint32_t x1401 = 461080255U;
static int8_t x1402 = INT8_MIN;
int32_t x1409 = INT32_MAX;
int16_t x1411 = 6;
static int16_t x1416 = INT16_MIN;
uint64_t x1418 = 0LLU;
uint64_t x1419 = 239341370317080LLU;
static int64_t x1444 = INT64_MIN;
uint32_t t178 = 24537U;
int64_t x1451 = INT64_MIN;
int16_t x1458 = 256;
int32_t x1497 = 2042868;
int32_t x1498 = INT32_MIN;
static uint32_t x1500 = 476423U;
uint32_t x1538 = 177U;
uint64_t x1548 = UINT64_MAX;
volatile int32_t t190 = 877;
uint64_t x1579 = 286125695276401LLU;
int64_t t194 = 1518905904374785LL;
int16_t x1596 = INT16_MIN;
uint32_t t198 = 691U;
int16_t x1627 = INT16_MIN;


void f0(void) {
    	uint32_t x5 = UINT32_MAX;
	volatile uint8_t x6 = UINT8_MAX;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 2835953049LLU;

    t0 = (x5>>((x6!=x7)%x8));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 6U;
	uint32_t x15 = UINT32_MAX;
	uint16_t x16 = 3U;
	volatile uint64_t t1 = 424880859050959810LLU;

    t1 = (x13>>((x14!=x15)%x16));

    if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = 5;
	int32_t x18 = 186;
	uint32_t x19 = UINT32_MAX;
	int32_t t2 = -1739;

    t2 = (x17>>((x18!=x19)%x20));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x21 = INT8_MAX;
	uint8_t x22 = UINT8_MAX;
	static uint16_t x24 = 243U;
	static volatile int32_t t3 = 2484985;

    t3 = (x21>>((x22!=x23)%x24));

    if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = 0LLU;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	uint64_t t4 = 5709402899872680LLU;

    t4 = (x25>>((x26!=x27)%x28));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 123436U;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t5 = -415;

    t5 = (x33>>((x34!=x35)%x36));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 419387U;
	volatile int16_t x39 = -109;
	volatile int8_t x40 = INT8_MAX;

    t6 = (x37>>((x38!=x39)%x40));

    if (t6 != 209693U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x45 = 105322U;
	static int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = -1;
	volatile uint32_t t7 = 14918942U;

    t7 = (x45>>((x46!=x47)%x48));

    if (t7 != 105322U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x49 = 313270LLU;
	int32_t x50 = 7295985;
	int8_t x51 = INT8_MIN;
	uint32_t x52 = 8285U;
	static volatile uint64_t t8 = 14174405841LLU;

    t8 = (x49>>((x50!=x51)%x52));

    if (t8 != 156635LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x57 = 3U;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 1U;
	static int64_t x60 = INT64_MIN;
	volatile uint32_t t9 = 11U;

    t9 = (x57>>((x58!=x59)%x60));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x69 = 892;
	uint64_t x71 = 2LLU;
	static int16_t x72 = -674;
	volatile int32_t t10 = -261909;

    t10 = (x69>>((x70!=x71)%x72));

    if (t10 != 446) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x97 = 26;
	static int16_t x98 = -6199;
	static int16_t x99 = -1;
	int16_t x100 = 6;
	volatile int32_t t11 = -7952;

    t11 = (x97>>((x98!=x99)%x100));

    if (t11 != 13) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x109 = UINT64_MAX;
	uint32_t x111 = 8413071U;
	volatile int32_t x112 = 1033;
	uint64_t t12 = 57049243988LLU;

    t12 = (x109>>((x110!=x111)%x112));

    if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x117 = 527258460401358LLU;
	int16_t x118 = INT16_MAX;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	uint64_t t13 = 1141672986469LLU;

    t13 = (x117>>((x118!=x119)%x120));

    if (t13 != 263629230200679LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x126 = 6824U;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = -1;
	volatile int32_t t14 = -60524054;

    t14 = (x125>>((x126!=x127)%x128));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x133 = 58;
	int16_t x134 = -1;
	int16_t x135 = -1;
	uint64_t x136 = 854330466314324475LLU;

    t15 = (x133>>((x134!=x135)%x136));

    if (t15 != 58) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x137 = 2053;
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = -18454482;
	int32_t t16 = -73;

    t16 = (x137>>((x138!=x139)%x140));

    if (t16 != 1026) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;

    t17 = (x145>>((x146!=x147)%x148));

    if (t17 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x157 = 431;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = UINT64_MAX;
	int32_t t18 = -495051;

    t18 = (x157>>((x158!=x159)%x160));

    if (t18 != 215) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x161 = 9194195U;
	uint8_t x162 = 0U;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = -56;

    t19 = (x161>>((x162!=x163)%x164));

    if (t19 != 4597097U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x177 = 4022462334284LL;
	int64_t x180 = INT64_MAX;
	volatile int64_t t20 = 26075816504793930LL;

    t20 = (x177>>((x178!=x179)%x180));

    if (t20 != 2011231167142LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	static uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;

    t21 = (x201>>((x202!=x203)%x204));

    if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x214 = -7674478;
	volatile int64_t x215 = 542316LL;
	int8_t x216 = 3;
	volatile int32_t t22 = -6410587;

    t22 = (x213>>((x214!=x215)%x216));

    if (t22 != 16383) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x218 = 7U;
	volatile int32_t t23 = -7251;

    t23 = (x217>>((x218!=x219)%x220));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x229 = INT16_MAX;
	uint64_t x230 = 52658828488104179LLU;
	volatile int8_t x231 = -1;
	int32_t x232 = -3371759;
	int32_t t24 = 1238870;

    t24 = (x229>>((x230!=x231)%x232));

    if (t24 != 16383) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x233 = 3040458;
	int16_t x235 = 3;
	int32_t t25 = -7;

    t25 = (x233>>((x234!=x235)%x236));

    if (t25 != 1520229) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x245 = UINT64_MAX;
	int16_t x246 = -3;

    t26 = (x245>>((x246!=x247)%x248));

    if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x261 = 101903698991LLU;
	uint8_t x262 = 100U;
	uint64_t x263 = 126157LLU;
	uint64_t t27 = 81LLU;

    t27 = (x261>>((x262!=x263)%x264));

    if (t27 != 50951849495LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MIN;
	volatile int64_t x267 = 10711016567993540LL;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t28 = 1;

    t28 = (x265>>((x266!=x267)%x268));

    if (t28 != 16383) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x269 = 7;
	int64_t x270 = 3892161857LL;
	uint16_t x271 = 232U;
	volatile int32_t t29 = -251337;

    t29 = (x269>>((x270!=x271)%x272));

    if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x274 = 1902235072877LLU;
	static int8_t x275 = -2;
	volatile uint8_t x276 = 1U;
	volatile uint32_t t30 = UINT32_MAX;

    t30 = (x273>>((x274!=x275)%x276));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x277 = 1U;
	static int16_t x278 = 0;
	int64_t x279 = 46LL;
	int32_t x280 = INT32_MAX;

    t31 = (x277>>((x278!=x279)%x280));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x282 = INT64_MAX;
	static int16_t x283 = -30;
	volatile int16_t x284 = INT16_MAX;

    t32 = (x281>>((x282!=x283)%x284));

    if (t32 != 250515LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x285 = 1U;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = -850755LL;
	volatile int32_t t33 = -8692;

    t33 = (x285>>((x286!=x287)%x288));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x289 = 3523576LLU;
	static int8_t x290 = 0;
	uint64_t t34 = 15024590053871LLU;

    t34 = (x289>>((x290!=x291)%x292));

    if (t34 != 1761788LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x297 = 34;
	volatile int16_t x298 = -143;
	uint8_t x299 = UINT8_MAX;
	uint8_t x300 = 6U;
	volatile int32_t t35 = 0;

    t35 = (x297>>((x298!=x299)%x300));

    if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x309 = 953;
	uint16_t x310 = 23751U;
	int64_t x311 = -55158063571LL;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t36 = 8;

    t36 = (x309>>((x310!=x311)%x312));

    if (t36 != 476) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x317 = 3834U;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = INT16_MAX;
	int8_t x320 = -1;
	int32_t t37 = 124;

    t37 = (x317>>((x318!=x319)%x320));

    if (t37 != 3834) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x321 = 94085;
	int16_t x322 = -1;
	int32_t x323 = INT32_MAX;
	int64_t x324 = -50368816LL;

    t38 = (x321>>((x322!=x323)%x324));

    if (t38 != 47042) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x325 = 13U;
	uint16_t x326 = 2U;
	uint64_t x327 = 55LLU;
	int32_t t39 = 16299;

    t39 = (x325>>((x326!=x327)%x328));

    if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x337 = 60U;
	volatile uint64_t x338 = 2138173565510904822LLU;
	static int64_t x339 = INT64_MIN;
	uint8_t x340 = 13U;
	volatile uint32_t t40 = 106U;

    t40 = (x337>>((x338!=x339)%x340));

    if (t40 != 30U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x341 = 2U;
	volatile int16_t x342 = INT16_MAX;
	static int64_t x343 = 57530228897LL;
	volatile uint64_t x344 = 3461LLU;
	int32_t t41 = -12383;

    t41 = (x341>>((x342!=x343)%x344));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x345 = INT64_MAX;
	volatile uint8_t x346 = 0U;
	int32_t x347 = -43400961;
	uint8_t x348 = UINT8_MAX;
	volatile int64_t t42 = 1708236557381LL;

    t42 = (x345>>((x346!=x347)%x348));

    if (t42 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x349 = 97U;
	volatile uint8_t x351 = 3U;
	static volatile int16_t x352 = 6436;

    t43 = (x349>>((x350!=x351)%x352));

    if (t43 != 48) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MAX;
	uint64_t x359 = UINT64_MAX;
	int64_t t44 = -39477453588LL;

    t44 = (x357>>((x358!=x359)%x360));

    if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x369 = INT16_MAX;
	static int16_t x370 = -3;
	volatile uint32_t x371 = UINT32_MAX;
	uint8_t x372 = 113U;
	static volatile int32_t t45 = 2448;

    t45 = (x369>>((x370!=x371)%x372));

    if (t45 != 16383) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x377 = UINT16_MAX;
	static volatile int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t46 = 753641;

    t46 = (x377>>((x378!=x379)%x380));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x381 = 4U;
	int16_t x382 = -284;
	uint8_t x384 = 90U;
	static volatile int32_t t47 = 85718067;

    t47 = (x381>>((x382!=x383)%x384));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x390 = INT16_MIN;
	volatile uint32_t x391 = 16036762U;
	int32_t t48 = 938371420;

    t48 = (x389>>((x390!=x391)%x392));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x406 = 59278346957710LL;
	volatile uint32_t x407 = 13844U;
	uint32_t x408 = 14U;
	volatile int32_t t49 = 2;

    t49 = (x405>>((x406!=x407)%x408));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	volatile int64_t x412 = INT64_MAX;
	int32_t t50 = 63246035;

    t50 = (x409>>((x410!=x411)%x412));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x425 = 208U;
	uint16_t x426 = 48U;
	int8_t x427 = INT8_MIN;
	static uint64_t x428 = 1562177LLU;
	volatile uint32_t t51 = 7866345U;

    t51 = (x425>>((x426!=x427)%x428));

    if (t51 != 104U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	volatile uint32_t t52 = 944U;

    t52 = (x429>>((x430!=x431)%x432));

    if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x433 = 166062684112LLU;
	uint16_t x434 = 500U;
	volatile uint16_t x435 = UINT16_MAX;
	uint64_t t53 = 1047965585LLU;

    t53 = (x433>>((x434!=x435)%x436));

    if (t53 != 83031342056LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x442 = -1LL;
	int8_t x443 = INT8_MIN;
	uint32_t x444 = UINT32_MAX;
	int64_t t54 = 488LL;

    t54 = (x441>>((x442!=x443)%x444));

    if (t54 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x445 = 2115152528168646476LLU;
	int32_t x446 = INT32_MAX;
	volatile uint64_t x447 = 1LLU;
	int16_t x448 = INT16_MAX;
	volatile uint64_t t55 = 32070317650948633LLU;

    t55 = (x445>>((x446!=x447)%x448));

    if (t55 != 1057576264084323238LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x473 = UINT32_MAX;
	int16_t x474 = 0;
	uint64_t x475 = 4LLU;
	volatile uint16_t x476 = UINT16_MAX;
	uint32_t t56 = 82555U;

    t56 = (x473>>((x474!=x475)%x476));

    if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x477 = UINT64_MAX;
	int8_t x478 = INT8_MIN;
	int32_t x479 = INT32_MAX;
	volatile int32_t x480 = INT32_MIN;
	uint64_t t57 = 1224LLU;

    t57 = (x477>>((x478!=x479)%x480));

    if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	uint8_t x486 = UINT8_MAX;
	static volatile uint8_t x488 = 1U;
	static volatile int32_t t58 = -44533598;

    t58 = (x485>>((x486!=x487)%x488));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x489 = 0U;
	uint16_t x490 = UINT16_MAX;
	uint8_t x491 = UINT8_MAX;
	static int64_t x492 = -365806817060LL;
	volatile uint32_t t59 = 37368U;

    t59 = (x489>>((x490!=x491)%x492));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x494 = INT16_MAX;
	int32_t x495 = 12581069;
	static int64_t x496 = -1LL;
	volatile int32_t t60 = 793306;

    t60 = (x493>>((x494!=x495)%x496));

    if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x505 = 0;
	static uint8_t x506 = 0U;
	uint16_t x508 = UINT16_MAX;
	static int32_t t61 = -1668769;

    t61 = (x505>>((x506!=x507)%x508));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x509 = 220;
	static int32_t x510 = INT32_MAX;
	volatile int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t62 = -231026;

    t62 = (x509>>((x510!=x511)%x512));

    if (t62 != 110) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x541 = UINT32_MAX;
	int8_t x542 = 6;
	static uint16_t x543 = UINT16_MAX;
	int16_t x544 = -1;
	static volatile uint32_t t63 = UINT32_MAX;

    t63 = (x541>>((x542!=x543)%x544));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x545 = INT8_MAX;
	int8_t x547 = -46;
	uint8_t x548 = UINT8_MAX;

    t64 = (x545>>((x546!=x547)%x548));

    if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x562 = 467681LL;
	volatile uint32_t x563 = 473U;
	static int32_t x564 = -1;
	volatile int32_t t65 = 41644729;

    t65 = (x561>>((x562!=x563)%x564));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x581 = 0U;
	static int8_t x583 = INT8_MIN;
	static int64_t x584 = 472913659549891LL;
	volatile int32_t t66 = 8;

    t66 = (x581>>((x582!=x583)%x584));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	static uint64_t x586 = 1104345LLU;
	int16_t x588 = -374;
	volatile uint64_t t67 = 2095218568LLU;

    t67 = (x585>>((x586!=x587)%x588));

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x593 = 3U;
	uint32_t x594 = 1195985U;
	int32_t x595 = INT32_MIN;
	int64_t x596 = INT64_MIN;
	static volatile int32_t t68 = 1;

    t68 = (x593>>((x594!=x595)%x596));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x597 = 53U;
	int8_t x598 = INT8_MIN;
	uint32_t x599 = 7500195U;
	volatile int32_t t69 = 197603;

    t69 = (x597>>((x598!=x599)%x600));

    if (t69 != 26) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x601 = 30;
	volatile int8_t x602 = INT8_MAX;
	static volatile int8_t x603 = -1;
	static int64_t x604 = INT64_MAX;
	int32_t t70 = -106;

    t70 = (x601>>((x602!=x603)%x604));

    if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x621 = 12344U;
	uint64_t x623 = UINT64_MAX;
	static int8_t x624 = INT8_MIN;

    t71 = (x621>>((x622!=x623)%x624));

    if (t71 != 6172U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x629 = INT64_MAX;
	int32_t x630 = INT32_MIN;
	volatile int64_t x632 = INT64_MAX;
	volatile int64_t t72 = -96506622LL;

    t72 = (x629>>((x630!=x631)%x632));

    if (t72 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x633 = 1U;
	static int32_t x634 = 7;
	int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MIN;
	static volatile int32_t t73 = -104491;

    t73 = (x633>>((x634!=x635)%x636));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x639 = 186;
	static int64_t x640 = -29621536226033115LL;
	int64_t t74 = -1030482341333439LL;

    t74 = (x637>>((x638!=x639)%x640));

    if (t74 != 44LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x654 = INT32_MIN;
	volatile uint32_t x655 = 67925U;
	volatile int32_t t75 = 1;

    t75 = (x653>>((x654!=x655)%x656));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x659 = INT32_MIN;
	static volatile uint8_t x660 = UINT8_MAX;
	uint64_t t76 = 2897511955LLU;

    t76 = (x657>>((x658!=x659)%x660));

    if (t76 != 7803489486075939LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x669 = 20700U;
	static int8_t x672 = -1;
	volatile uint32_t t77 = 277281U;

    t77 = (x669>>((x670!=x671)%x672));

    if (t77 != 20700U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x678 = INT16_MAX;
	volatile uint8_t x679 = UINT8_MAX;
	int32_t x680 = -130442538;
	volatile int32_t t78 = 109;

    t78 = (x677>>((x678!=x679)%x680));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x685 = 0U;
	uint16_t x686 = 246U;
	volatile int64_t x687 = -1LL;
	int16_t x688 = 4557;
	volatile int32_t t79 = 1;

    t79 = (x685>>((x686!=x687)%x688));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x693 = INT32_MAX;
	static int16_t x694 = -256;
	int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MIN;

    t80 = (x693>>((x694!=x695)%x696));

    if (t80 != 1073741823) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x705 = 6952U;
	int64_t x707 = -1LL;
	uint8_t x708 = UINT8_MAX;

    t81 = (x705>>((x706!=x707)%x708));

    if (t81 != 3476) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x709 = INT32_MAX;
	static uint8_t x710 = 15U;
	static int32_t x711 = INT32_MIN;
	uint32_t x712 = 5300235U;
	volatile int32_t t82 = 1895361;

    t82 = (x709>>((x710!=x711)%x712));

    if (t82 != 1073741823) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x717 = UINT32_MAX;
	static volatile int32_t x718 = 6890446;
	static volatile int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;
	volatile uint32_t t83 = 2808291U;

    t83 = (x717>>((x718!=x719)%x720));

    if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x725 = 15953894;
	static volatile uint64_t x726 = 83243773129774102LLU;
	uint8_t x727 = 1U;
	int8_t x728 = -12;
	volatile int32_t t84 = 4475329;

    t84 = (x725>>((x726!=x727)%x728));

    if (t84 != 7976947) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x733 = 1043854LLU;
	uint64_t x734 = 376051764280158006LLU;
	int32_t x735 = 0;
	int16_t x736 = INT16_MIN;

    t85 = (x733>>((x734!=x735)%x736));

    if (t85 != 521927LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x737 = 3U;
	int64_t x738 = -254003252820096LL;
	static uint8_t x740 = UINT8_MAX;

    t86 = (x737>>((x738!=x739)%x740));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x741 = 7LLU;
	volatile int8_t x742 = 21;
	uint32_t x743 = UINT32_MAX;
	static int16_t x744 = INT16_MIN;
	uint64_t t87 = 1445LLU;

    t87 = (x741>>((x742!=x743)%x744));

    if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x745 = 24261438216050LLU;
	int32_t x746 = -3489;
	static int32_t x748 = INT32_MIN;
	static uint64_t t88 = 8153390LLU;

    t88 = (x745>>((x746!=x747)%x748));

    if (t88 != 12130719108025LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x753 = INT64_MAX;
	int64_t x755 = INT64_MAX;
	volatile uint8_t x756 = UINT8_MAX;
	int64_t t89 = -25070LL;

    t89 = (x753>>((x754!=x755)%x756));

    if (t89 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x773 = 0;
	static volatile int32_t x774 = -446865;
	int32_t x775 = INT32_MAX;
	volatile uint32_t x776 = UINT32_MAX;

    t90 = (x773>>((x774!=x775)%x776));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x778 = -1LL;
	static int32_t x779 = INT32_MIN;
	int64_t x780 = INT64_MIN;
	volatile int32_t t91 = -173149;

    t91 = (x777>>((x778!=x779)%x780));

    if (t91 != 14) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = INT16_MIN;
	uint32_t x783 = 3270U;
	volatile int64_t x784 = INT64_MIN;
	static int32_t t92 = 1334;

    t92 = (x781>>((x782!=x783)%x784));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x785 = 31077124U;
	volatile int16_t x786 = INT16_MIN;
	volatile uint64_t x787 = 6006804394873467LLU;
	volatile uint32_t x788 = UINT32_MAX;
	uint32_t t93 = 12086795U;

    t93 = (x785>>((x786!=x787)%x788));

    if (t93 != 15538562U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x789 = 16094303U;
	uint64_t x791 = UINT64_MAX;
	volatile int64_t x792 = INT64_MIN;

    t94 = (x789>>((x790!=x791)%x792));

    if (t94 != 8047151U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x798 = INT64_MIN;
	int16_t x799 = 2;
	int64_t x800 = INT64_MAX;
	volatile uint64_t t95 = 19563527573LLU;

    t95 = (x797>>((x798!=x799)%x800));

    if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x805 = 5245U;
	uint16_t x806 = 5817U;
	volatile int8_t x807 = 16;
	int32_t t96 = -1;

    t96 = (x805>>((x806!=x807)%x808));

    if (t96 != 2622) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x809 = 53;
	int64_t x810 = -1LL;
	volatile uint8_t x811 = 13U;
	int32_t x812 = -1;
	static volatile int32_t t97 = 1;

    t97 = (x809>>((x810!=x811)%x812));

    if (t97 != 53) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x813 = 16;
	volatile int64_t x814 = INT64_MAX;
	int8_t x815 = 1;
	int32_t x816 = -2049519;

    t98 = (x813>>((x814!=x815)%x816));

    if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x833 = UINT64_MAX;
	int16_t x834 = INT16_MIN;
	volatile int8_t x835 = INT8_MIN;
	volatile int32_t x836 = -27454820;
	uint64_t t99 = 457LLU;

    t99 = (x833>>((x834!=x835)%x836));

    if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x837 = 1U;
	int8_t x838 = INT8_MIN;
	int64_t x839 = INT64_MAX;
	uint32_t x840 = 1252U;

    t100 = (x837>>((x838!=x839)%x840));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x842 = INT16_MIN;
	int32_t x843 = 3;
	static volatile uint32_t t101 = 679030U;

    t101 = (x841>>((x842!=x843)%x844));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x853 = UINT64_MAX;
	int16_t x854 = -1;
	int64_t x856 = -24178774963LL;
	volatile uint64_t t102 = 1LLU;

    t102 = (x853>>((x854!=x855)%x856));

    if (t102 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x857 = 25324787968038815LLU;
	uint8_t x858 = 6U;
	uint32_t x859 = UINT32_MAX;
	volatile int32_t x860 = INT32_MIN;

    t103 = (x857>>((x858!=x859)%x860));

    if (t103 != 12662393984019407LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x873 = 52643155607LL;
	uint64_t x874 = UINT64_MAX;
	int8_t x875 = INT8_MAX;
	int64_t t104 = 432045LL;

    t104 = (x873>>((x874!=x875)%x876));

    if (t104 != 26321577803LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x889 = 3U;
	static volatile int64_t x890 = INT64_MIN;
	uint32_t x892 = UINT32_MAX;
	volatile uint32_t t105 = 84043045U;

    t105 = (x889>>((x890!=x891)%x892));

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x897 = 45U;
	uint64_t x900 = UINT64_MAX;
	static volatile uint32_t t106 = 36030U;

    t106 = (x897>>((x898!=x899)%x900));

    if (t106 != 22U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x906 = 4U;
	uint8_t x907 = UINT8_MAX;
	int8_t x908 = INT8_MIN;

    t107 = (x905>>((x906!=x907)%x908));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x909 = 35U;
	int8_t x910 = INT8_MIN;
	uint64_t x911 = UINT64_MAX;
	int32_t x912 = INT32_MAX;
	int32_t t108 = 24758950;

    t108 = (x909>>((x910!=x911)%x912));

    if (t108 != 17) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x921 = 2LL;
	static int16_t x922 = 13647;
	uint32_t x924 = 72827287U;

    t109 = (x921>>((x922!=x923)%x924));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x933 = 51;
	int64_t x934 = 4400254248LL;
	int8_t x935 = INT8_MIN;
	int16_t x936 = INT16_MAX;
	volatile int32_t t110 = -7877;

    t110 = (x933>>((x934!=x935)%x936));

    if (t110 != 25) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x937 = 657U;
	int64_t x938 = INT64_MIN;
	volatile int16_t x939 = -309;
	int32_t x940 = 5105;
	volatile int32_t t111 = -13;

    t111 = (x937>>((x938!=x939)%x940));

    if (t111 != 328) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x949 = 48;
	int8_t x951 = -1;
	int32_t x952 = INT32_MIN;

    t112 = (x949>>((x950!=x951)%x952));

    if (t112 != 24) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x958 = 2U;
	uint64_t x959 = 1556297107349LLU;
	static int16_t x960 = -1;

    t113 = (x957>>((x958!=x959)%x960));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x961 = 3U;
	uint8_t x962 = UINT8_MAX;
	uint16_t x963 = 107U;
	int64_t x964 = -1LL;
	int32_t t114 = -20036334;

    t114 = (x961>>((x962!=x963)%x964));

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x974 = -1;
	static uint64_t x975 = 519744LLU;
	volatile uint32_t x976 = 7U;

    t115 = (x973>>((x974!=x975)%x976));

    if (t115 != 10518597348783LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x981 = UINT64_MAX;
	int16_t x982 = INT16_MAX;
	volatile int64_t x983 = -1LL;
	int16_t x984 = -2;
	uint64_t t116 = 480LLU;

    t116 = (x981>>((x982!=x983)%x984));

    if (t116 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x993 = UINT8_MAX;
	int32_t x994 = 44;
	int64_t x995 = -1LL;
	uint64_t x996 = 29253LLU;
	static int32_t t117 = -21747977;

    t117 = (x993>>((x994!=x995)%x996));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x997 = 447U;
	int32_t x998 = INT32_MIN;
	int32_t x999 = INT32_MIN;
	static int64_t x1000 = INT64_MIN;
	volatile int32_t t118 = 783622;

    t118 = (x997>>((x998!=x999)%x1000));

    if (t118 != 447) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x1001 = UINT32_MAX;
	int8_t x1002 = -1;

    t119 = (x1001>>((x1002!=x1003)%x1004));

    if (t119 != 2147483647U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x1013 = INT8_MAX;
	int16_t x1015 = -61;
	static int64_t x1016 = -400096713485LL;
	volatile int32_t t120 = -61552;

    t120 = (x1013>>((x1014!=x1015)%x1016));

    if (t120 != 63) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x1017 = INT64_MAX;
	static volatile int16_t x1018 = -1;
	uint8_t x1019 = 113U;
	uint64_t x1020 = 68587LLU;
	volatile int64_t t121 = 59LL;

    t121 = (x1017>>((x1018!=x1019)%x1020));

    if (t121 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1021 = UINT64_MAX;
	volatile uint16_t x1022 = 685U;
	uint8_t x1023 = UINT8_MAX;
	volatile int64_t x1024 = 1LL;
	static volatile uint64_t t122 = UINT64_MAX;

    t122 = (x1021>>((x1022!=x1023)%x1024));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x1026 = 31LLU;
	static int64_t x1027 = INT64_MAX;
	int32_t x1028 = -1;

    t123 = (x1025>>((x1026!=x1027)%x1028));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1029 = INT64_MAX;
	int16_t x1032 = INT16_MAX;
	volatile int64_t t124 = 7495056764573019LL;

    t124 = (x1029>>((x1030!=x1031)%x1032));

    if (t124 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x1033 = UINT64_MAX;
	int16_t x1034 = -3512;
	static uint64_t t125 = 1LLU;

    t125 = (x1033>>((x1034!=x1035)%x1036));

    if (t125 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1037 = 10294;
	uint32_t x1038 = 20U;
	static volatile uint8_t x1039 = 86U;

    t126 = (x1037>>((x1038!=x1039)%x1040));

    if (t126 != 5147) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1065 = 316U;
	int16_t x1066 = INT16_MIN;
	uint8_t x1067 = UINT8_MAX;
	int8_t x1068 = INT8_MAX;

    t127 = (x1065>>((x1066!=x1067)%x1068));

    if (t127 != 158) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1069 = 53088338LLU;
	volatile int32_t x1071 = 371150229;
	int16_t x1072 = INT16_MAX;
	volatile uint64_t t128 = 511LLU;

    t128 = (x1069>>((x1070!=x1071)%x1072));

    if (t128 != 26544169LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1085 = 0;
	int8_t x1087 = -1;
	int8_t x1088 = INT8_MIN;
	volatile int32_t t129 = -1739;

    t129 = (x1085>>((x1086!=x1087)%x1088));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1089 = INT8_MAX;
	static uint32_t x1090 = 26U;
	uint16_t x1091 = 16U;
	volatile int8_t x1092 = 1;
	volatile int32_t t130 = 279435666;

    t130 = (x1089>>((x1090!=x1091)%x1092));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1093 = INT8_MAX;
	volatile int32_t x1095 = INT32_MIN;
	static int32_t x1096 = INT32_MIN;

    t131 = (x1093>>((x1094!=x1095)%x1096));

    if (t131 != 63) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1101 = UINT8_MAX;
	int64_t x1102 = -23LL;
	uint16_t x1103 = UINT16_MAX;

    t132 = (x1101>>((x1102!=x1103)%x1104));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1105 = UINT8_MAX;
	volatile int64_t x1106 = -11LL;
	int32_t x1107 = -8;
	volatile int32_t x1108 = INT32_MAX;
	volatile int32_t t133 = 15046;

    t133 = (x1105>>((x1106!=x1107)%x1108));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1117 = 21U;
	static int32_t x1118 = -1;
	volatile int32_t x1119 = INT32_MIN;
	static int64_t x1120 = INT64_MAX;
	static volatile int32_t t134 = -753;

    t134 = (x1117>>((x1118!=x1119)%x1120));

    if (t134 != 10) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1121 = UINT64_MAX;
	volatile int16_t x1122 = 41;
	int8_t x1123 = -3;
	int64_t x1124 = INT64_MIN;
	uint64_t t135 = 12936376LLU;

    t135 = (x1121>>((x1122!=x1123)%x1124));

    if (t135 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1129 = 2U;
	int32_t x1130 = INT32_MAX;
	int8_t x1132 = -1;
	volatile int32_t t136 = 47;

    t136 = (x1129>>((x1130!=x1131)%x1132));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x1133 = UINT16_MAX;
	volatile int64_t x1134 = -1LL;
	static int16_t x1135 = INT16_MAX;
	int16_t x1136 = 850;
	volatile int32_t t137 = 242;

    t137 = (x1133>>((x1134!=x1135)%x1136));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x1137 = UINT8_MAX;
	volatile uint64_t x1138 = 5LLU;
	volatile int32_t x1139 = -1;
	static uint16_t x1140 = 58U;
	int32_t t138 = 15842374;

    t138 = (x1137>>((x1138!=x1139)%x1140));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x1158 = INT8_MIN;
	uint16_t x1159 = 5947U;
	uint8_t x1160 = 28U;
	volatile uint64_t t139 = 11LLU;

    t139 = (x1157>>((x1158!=x1159)%x1160));

    if (t139 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1162 = INT8_MIN;
	uint8_t x1163 = 2U;
	uint16_t x1164 = UINT16_MAX;
	uint64_t t140 = 807LLU;

    t140 = (x1161>>((x1162!=x1163)%x1164));

    if (t140 != 435767195625630LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1167 = 24330U;
	volatile uint32_t x1168 = 239973259U;

    t141 = (x1165>>((x1166!=x1167)%x1168));

    if (t141 != 16383) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1177 = UINT8_MAX;
	static uint64_t x1178 = UINT64_MAX;
	static uint8_t x1179 = UINT8_MAX;
	int64_t x1180 = -1LL;
	int32_t t142 = 1;

    t142 = (x1177>>((x1178!=x1179)%x1180));

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1181 = 117LL;
	volatile uint16_t x1182 = 8847U;
	int16_t x1183 = -1;
	int8_t x1184 = INT8_MAX;
	volatile int64_t t143 = 69403624LL;

    t143 = (x1181>>((x1182!=x1183)%x1184));

    if (t143 != 58LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1193 = UINT32_MAX;
	volatile uint64_t x1194 = 27567462947233256LLU;
	volatile int64_t x1196 = INT64_MIN;
	uint32_t t144 = 232U;

    t144 = (x1193>>((x1194!=x1195)%x1196));

    if (t144 != 2147483647U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x1202 = UINT16_MAX;
	int64_t x1204 = 2157707LL;
	volatile uint64_t t145 = 853634159LLU;

    t145 = (x1201>>((x1202!=x1203)%x1204));

    if (t145 != 262943936069LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1205 = 17695766646LL;
	volatile int64_t x1206 = 32201194342079LL;
	static int16_t x1207 = INT16_MIN;
	uint64_t x1208 = 47622504233LLU;

    t146 = (x1205>>((x1206!=x1207)%x1208));

    if (t146 != 8847883323LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1214 = INT64_MAX;
	volatile uint32_t t147 = 448766367U;

    t147 = (x1213>>((x1214!=x1215)%x1216));

    if (t147 != 585U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1222 = 0LL;
	volatile int64_t t148 = 5230LL;

    t148 = (x1221>>((x1222!=x1223)%x1224));

    if (t148 != 66627LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1233 = 3;
	int64_t x1234 = INT64_MAX;
	int32_t t149 = -6;

    t149 = (x1233>>((x1234!=x1235)%x1236));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1241 = 64989180389LL;
	int16_t x1242 = 1941;
	int8_t x1243 = INT8_MIN;
	int32_t x1244 = 16269;
	int64_t t150 = -303LL;

    t150 = (x1241>>((x1242!=x1243)%x1244));

    if (t150 != 32494590194LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x1246 = INT32_MIN;
	int16_t x1247 = -1;
	int32_t x1248 = -1;
	int32_t t151 = 5098648;

    t151 = (x1245>>((x1246!=x1247)%x1248));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1251 = INT32_MIN;
	int16_t x1252 = INT16_MIN;
	int32_t t152 = 3335634;

    t152 = (x1249>>((x1250!=x1251)%x1252));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1277 = 107025U;
	uint64_t x1278 = 0LLU;
	uint32_t t153 = 334698955U;

    t153 = (x1277>>((x1278!=x1279)%x1280));

    if (t153 != 53512U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x1281 = 1824350891715588LLU;
	uint32_t x1282 = 0U;
	int64_t x1283 = INT64_MIN;
	volatile uint32_t x1284 = 30U;
	volatile uint64_t t154 = 162388LLU;

    t154 = (x1281>>((x1282!=x1283)%x1284));

    if (t154 != 912175445857794LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1285 = INT64_MAX;
	uint64_t x1286 = 869580679221787534LLU;
	volatile int64_t x1287 = -359783592456485788LL;
	uint8_t x1288 = 14U;
	volatile int64_t t155 = -29505LL;

    t155 = (x1285>>((x1286!=x1287)%x1288));

    if (t155 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1293 = 16339265LLU;
	volatile uint64_t x1295 = 449916480LLU;
	int32_t x1296 = INT32_MAX;
	static volatile uint64_t t156 = 1805014688337961LLU;

    t156 = (x1293>>((x1294!=x1295)%x1296));

    if (t156 != 8169632LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1297 = 30943436067266373LL;
	int8_t x1298 = -1;
	volatile uint16_t x1299 = 0U;
	volatile int64_t t157 = 0LL;

    t157 = (x1297>>((x1298!=x1299)%x1300));

    if (t157 != 15471718033633186LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x1305 = 2U;
	static uint32_t x1306 = 93761U;
	volatile uint32_t x1307 = 12U;
	int8_t x1308 = 18;
	volatile int32_t t158 = 0;

    t158 = (x1305>>((x1306!=x1307)%x1308));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x1309 = INT8_MAX;
	volatile uint16_t x1311 = 456U;
	int16_t x1312 = -7;
	int32_t t159 = 3535;

    t159 = (x1309>>((x1310!=x1311)%x1312));

    if (t159 != 63) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1313 = INT32_MAX;
	int8_t x1314 = -1;
	uint64_t x1315 = 121815LLU;
	int64_t x1316 = INT64_MIN;
	volatile int32_t t160 = -152315036;

    t160 = (x1313>>((x1314!=x1315)%x1316));

    if (t160 != 1073741823) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1321 = 122393;
	int16_t x1322 = -1;
	volatile int8_t x1324 = -7;

    t161 = (x1321>>((x1322!=x1323)%x1324));

    if (t161 != 61196) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1330 = 0U;
	uint64_t x1332 = 24354076541LLU;
	volatile int64_t t162 = -1LL;

    t162 = (x1329>>((x1330!=x1331)%x1332));

    if (t162 != 10696570LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1333 = 0U;
	uint64_t x1334 = 684443356568855110LLU;
	int32_t t163 = 5;

    t163 = (x1333>>((x1334!=x1335)%x1336));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1341 = INT8_MAX;
	int32_t t164 = -2223719;

    t164 = (x1341>>((x1342!=x1343)%x1344));

    if (t164 != 63) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1346 = UINT64_MAX;
	int16_t x1347 = INT16_MIN;
	int16_t x1348 = INT16_MAX;

    t165 = (x1345>>((x1346!=x1347)%x1348));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1349 = 12;
	uint8_t x1351 = 13U;
	uint16_t x1352 = 5U;
	int32_t t166 = -2315771;

    t166 = (x1349>>((x1350!=x1351)%x1352));

    if (t166 != 6) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x1353 = 1;
	int16_t x1355 = -1;
	static int8_t x1356 = 1;

    t167 = (x1353>>((x1354!=x1355)%x1356));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x1365 = UINT8_MAX;
	int32_t x1366 = -43254;
	uint32_t x1367 = 6715U;
	int16_t x1368 = -3;
	static volatile int32_t t168 = -35;

    t168 = (x1365>>((x1366!=x1367)%x1368));

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1373 = 245756U;
	int32_t x1374 = INT32_MAX;
	int64_t x1375 = 5999263513231LL;
	int16_t x1376 = -1;

    t169 = (x1373>>((x1374!=x1375)%x1376));

    if (t169 != 245756U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1381 = 7141U;
	int8_t x1382 = INT8_MIN;
	volatile int16_t x1383 = 10;
	volatile int8_t x1384 = 1;
	volatile uint32_t t170 = 86863136U;

    t170 = (x1381>>((x1382!=x1383)%x1384));

    if (t170 != 7141U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1390 = -6;
	volatile uint32_t x1391 = 43U;
	int32_t x1392 = -203;

    t171 = (x1389>>((x1390!=x1391)%x1392));

    if (t171 != 2147483647U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1393 = 14901U;
	static int16_t x1394 = INT16_MIN;
	uint32_t x1396 = 1462043U;
	volatile int32_t t172 = -1059;

    t172 = (x1393>>((x1394!=x1395)%x1396));

    if (t172 != 7450) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1403 = UINT16_MAX;
	int8_t x1404 = INT8_MAX;
	static volatile uint32_t t173 = 0U;

    t173 = (x1401>>((x1402!=x1403)%x1404));

    if (t173 != 230540127U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1405 = 26284271U;
	int32_t x1406 = -412;
	uint64_t x1407 = 6167623519003284LLU;
	static int64_t x1408 = 13945135857493734LL;
	uint32_t t174 = 46867U;

    t174 = (x1405>>((x1406!=x1407)%x1408));

    if (t174 != 13142135U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1410 = 8474U;
	int8_t x1412 = 12;
	int32_t t175 = -995320;

    t175 = (x1409>>((x1410!=x1411)%x1412));

    if (t175 != 1073741823) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1413 = 1668685008LLU;
	int8_t x1414 = INT8_MIN;
	static volatile int8_t x1415 = -1;
	uint64_t t176 = 1271749786254240607LLU;

    t176 = (x1413>>((x1414!=x1415)%x1416));

    if (t176 != 834342504LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1417 = 1;
	static uint8_t x1420 = 1U;
	volatile int32_t t177 = 1390;

    t177 = (x1417>>((x1418!=x1419)%x1420));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1441 = UINT32_MAX;
	static uint16_t x1442 = 4U;
	int8_t x1443 = INT8_MIN;

    t178 = (x1441>>((x1442!=x1443)%x1444));

    if (t178 != 2147483647U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1449 = 122129553388130LLU;
	static int32_t x1450 = 35;
	volatile int32_t x1452 = INT32_MIN;
	volatile uint64_t t179 = 13141LLU;

    t179 = (x1449>>((x1450!=x1451)%x1452));

    if (t179 != 61064776694065LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1457 = 2597437078853310203LLU;
	volatile int32_t x1459 = -1;
	uint64_t x1460 = 2791115420LLU;
	uint64_t t180 = 885LLU;

    t180 = (x1457>>((x1458!=x1459)%x1460));

    if (t180 != 1298718539426655101LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1465 = 43U;
	volatile int16_t x1466 = -431;
	int32_t x1467 = -3619;
	static uint32_t x1468 = UINT32_MAX;
	volatile int32_t t181 = -7795;

    t181 = (x1465>>((x1466!=x1467)%x1468));

    if (t181 != 21) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1473 = 45612U;
	static int16_t x1474 = 2;
	uint32_t x1475 = 544903U;
	static volatile int16_t x1476 = INT16_MIN;
	volatile uint32_t t182 = 6326U;

    t182 = (x1473>>((x1474!=x1475)%x1476));

    if (t182 != 22806U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1477 = 54957LLU;
	static int16_t x1478 = INT16_MAX;
	uint32_t x1479 = 1706097694U;
	static int8_t x1480 = INT8_MIN;
	volatile uint64_t t183 = 1135730497LLU;

    t183 = (x1477>>((x1478!=x1479)%x1480));

    if (t183 != 27478LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1485 = 4309409733736007515LLU;
	uint8_t x1486 = UINT8_MAX;
	uint64_t x1487 = 1329416LLU;
	uint32_t x1488 = UINT32_MAX;
	uint64_t t184 = 5488759950258429167LLU;

    t184 = (x1485>>((x1486!=x1487)%x1488));

    if (t184 != 2154704866868003757LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1499 = INT32_MIN;
	int32_t t185 = 95162;

    t185 = (x1497>>((x1498!=x1499)%x1500));

    if (t185 != 2042868) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1517 = 241849154710LLU;
	int8_t x1518 = INT8_MAX;
	int32_t x1519 = INT32_MIN;
	static volatile int16_t x1520 = -1;
	uint64_t t186 = 256502270401993895LLU;

    t186 = (x1517>>((x1518!=x1519)%x1520));

    if (t186 != 241849154710LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1533 = INT8_MAX;
	volatile int32_t x1534 = 269;
	int32_t x1535 = -4;
	int8_t x1536 = INT8_MIN;
	int32_t t187 = 246;

    t187 = (x1533>>((x1534!=x1535)%x1536));

    if (t187 != 63) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1537 = INT32_MAX;
	volatile uint32_t x1539 = 12565U;
	int64_t x1540 = INT64_MAX;
	volatile int32_t t188 = -4590;

    t188 = (x1537>>((x1538!=x1539)%x1540));

    if (t188 != 1073741823) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1541 = UINT16_MAX;
	int16_t x1542 = -1;
	int32_t x1543 = INT32_MIN;
	volatile int16_t x1544 = -1;
	int32_t t189 = -794519003;

    t189 = (x1541>>((x1542!=x1543)%x1544));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1545 = UINT8_MAX;
	int32_t x1546 = -1;
	uint16_t x1547 = 7U;

    t190 = (x1545>>((x1546!=x1547)%x1548));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x1557 = 23LLU;
	int64_t x1558 = INT64_MAX;
	uint16_t x1559 = UINT16_MAX;
	int8_t x1560 = INT8_MAX;
	volatile uint64_t t191 = 19788897LLU;

    t191 = (x1557>>((x1558!=x1559)%x1560));

    if (t191 != 11LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1561 = UINT8_MAX;
	static volatile uint64_t x1562 = 12872623397894729LLU;
	static int16_t x1563 = -1;
	int16_t x1564 = -1;
	int32_t t192 = -4;

    t192 = (x1561>>((x1562!=x1563)%x1564));

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1565 = INT8_MAX;
	int64_t x1566 = 1962974222410562LL;
	int8_t x1567 = -1;
	uint8_t x1568 = 25U;
	int32_t t193 = 784710730;

    t193 = (x1565>>((x1566!=x1567)%x1568));

    if (t193 != 63) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1577 = 7708LL;
	static uint32_t x1578 = 991835U;
	static uint64_t x1580 = 18LLU;

    t194 = (x1577>>((x1578!=x1579)%x1580));

    if (t194 != 3854LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1581 = INT16_MAX;
	int32_t x1582 = INT32_MIN;
	static uint64_t x1583 = UINT64_MAX;
	int8_t x1584 = INT8_MIN;
	int32_t t195 = -11430;

    t195 = (x1581>>((x1582!=x1583)%x1584));

    if (t195 != 16383) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1589 = INT16_MAX;
	static int16_t x1590 = -1;
	uint64_t x1591 = 6967LLU;
	int16_t x1592 = INT16_MIN;
	int32_t t196 = 152;

    t196 = (x1589>>((x1590!=x1591)%x1592));

    if (t196 != 16383) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1593 = UINT16_MAX;
	volatile int8_t x1594 = INT8_MIN;
	static int64_t x1595 = INT64_MIN;
	int32_t t197 = 2084494;

    t197 = (x1593>>((x1594!=x1595)%x1596));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x1605 = UINT32_MAX;
	static uint32_t x1606 = UINT32_MAX;
	volatile uint32_t x1607 = 86921556U;
	int16_t x1608 = INT16_MIN;

    t198 = (x1605>>((x1606!=x1607)%x1608));

    if (t198 != 2147483647U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1625 = 268;
	uint32_t x1626 = 1096562U;
	static int8_t x1628 = -1;
	volatile int32_t t199 = 28;

    t199 = (x1625>>((x1626!=x1627)%x1628));

    if (t199 != 268) { NG(); } else { ; }
	
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

