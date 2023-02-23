
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

int8_t x9 = 0;
uint8_t x11 = UINT8_MAX;
int32_t x13 = 48444;
int32_t x14 = -208;
int64_t x15 = INT64_MIN;
static int32_t x61 = -1;
int8_t x63 = -1;
int32_t x71 = INT32_MAX;
int64_t x73 = INT64_MIN;
int8_t x75 = -1;
int16_t x92 = 116;
int32_t x94 = INT32_MIN;
int8_t x96 = INT8_MAX;
uint32_t x104 = 3U;
int64_t x105 = 5659176232254LL;
volatile int32_t x108 = INT32_MIN;
uint8_t x111 = 52U;
static int8_t x142 = 1;
volatile uint16_t x174 = 13U;
int16_t x191 = 35;
static volatile uint32_t x211 = 31U;
int32_t x221 = INT32_MAX;
uint8_t x231 = 5U;
int64_t x238 = 35716832302143659LL;
static volatile uint32_t x248 = 1954791U;
int8_t x279 = -1;
uint64_t t32 = 5LLU;
volatile int8_t x284 = INT8_MAX;
int32_t x289 = -1;
int64_t x298 = 6538724LL;
int32_t x300 = -11217258;
uint32_t x312 = 261245U;
uint32_t t37 = 560U;
static int16_t x317 = INT16_MIN;
uint16_t x323 = UINT16_MAX;
uint32_t t39 = 666798685U;
uint16_t x327 = UINT16_MAX;
static int8_t x340 = INT8_MIN;
static int16_t x345 = -1;
uint64_t t43 = 3249007564327571LLU;
uint8_t x350 = UINT8_MAX;
volatile int64_t t44 = 1LL;
volatile int8_t x389 = 1;
volatile int16_t x390 = INT16_MAX;
volatile int32_t x399 = INT32_MAX;
volatile uint64_t x405 = 672LLU;
static uint16_t x407 = UINT16_MAX;
int64_t x413 = -1LL;
uint8_t x419 = 11U;
uint32_t t52 = 25426U;
static uint32_t x463 = 24132U;
volatile int32_t x469 = INT32_MAX;
static int32_t x470 = INT32_MIN;
volatile int16_t x471 = -1;
uint32_t x479 = UINT32_MAX;
volatile int32_t x480 = INT32_MAX;
static uint16_t x494 = UINT16_MAX;
static int32_t x526 = INT32_MAX;
uint8_t x539 = 3U;
int32_t x544 = -1;
volatile int32_t x550 = 337450;
volatile int64_t t66 = 298171550457172152LL;
uint32_t x553 = 417703803U;
static volatile uint8_t x569 = UINT8_MAX;
volatile int32_t x570 = 102534;
volatile int32_t x572 = -1;
uint64_t t69 = 702LLU;
int32_t x579 = -58;
uint8_t x588 = 22U;
volatile int32_t t71 = -107921510;
int32_t x590 = INT32_MIN;
int8_t x591 = INT8_MAX;
volatile int32_t t72 = -528973;
static int64_t x599 = -1LL;
uint8_t x608 = UINT8_MAX;
int64_t x622 = 15384921343943467LL;
volatile uint32_t t77 = 962995827U;
int8_t x663 = INT8_MAX;
uint32_t x668 = 1817119U;
uint16_t x674 = 21447U;
int64_t x675 = INT64_MIN;
volatile uint8_t x692 = 26U;
volatile int32_t t82 = 342575;
uint64_t x703 = 2452622LLU;
int32_t x713 = INT32_MIN;
static int16_t x726 = 61;
uint32_t x737 = UINT32_MAX;
volatile int8_t x740 = INT8_MIN;
volatile int16_t x750 = INT16_MIN;
uint64_t t92 = 402278434LLU;
int16_t x770 = 7532;
volatile int64_t x781 = -28LL;
static int32_t x798 = INT32_MAX;
static int8_t x802 = -1;
static int64_t x803 = INT64_MIN;
static uint64_t x806 = UINT64_MAX;
static int32_t x809 = -59900;
uint32_t x823 = 1844U;
int8_t x824 = INT8_MIN;
static volatile int16_t x837 = INT16_MAX;
int16_t x840 = -1;
static volatile uint64_t t103 = 8432113015321611LLU;
int32_t x849 = INT32_MIN;
int64_t x851 = INT64_MIN;
uint32_t x871 = 9664162U;
static volatile uint32_t t106 = 1759U;
volatile uint64_t x884 = 491838839532411626LLU;
static int64_t x912 = -1LL;
volatile uint64_t x930 = UINT64_MAX;
int16_t x940 = INT16_MAX;
int16_t x944 = INT16_MIN;
volatile int32_t x953 = -1;
static int32_t x961 = -1293;
int64_t x983 = INT64_MAX;
int16_t x984 = INT16_MIN;
int64_t t120 = 3739930138931948LL;
uint32_t x993 = 10707236U;
int64_t x995 = -1LL;
int64_t t122 = 82169784195LL;
int32_t x1015 = 805410;
int16_t x1026 = INT16_MIN;
static int16_t x1089 = 10854;
int16_t x1092 = INT16_MIN;
int32_t x1116 = INT32_MAX;
int32_t x1127 = INT32_MAX;
int8_t x1141 = -1;
volatile uint32_t t140 = 4028U;
int64_t x1150 = INT64_MIN;
static int64_t t141 = -809076LL;
volatile int32_t t142 = 34;
int8_t x1160 = INT8_MAX;
static volatile int64_t t144 = 4034LL;
static int8_t x1181 = -1;
int32_t x1184 = -1;
int32_t t145 = 50985;
int64_t t146 = -969LL;
int16_t x1195 = INT16_MIN;
uint16_t x1196 = 43U;
uint16_t x1203 = 4U;
uint32_t x1208 = UINT32_MAX;
int64_t t151 = 1645582410619426745LL;
static int64_t x1239 = INT64_MAX;
int64_t x1245 = -1LL;
int64_t x1246 = 146LL;
uint64_t x1261 = UINT64_MAX;
volatile int8_t x1272 = INT8_MAX;
int32_t x1277 = 50912693;
int32_t x1278 = 69794910;
uint64_t t160 = 234735727026542983LLU;
int8_t x1300 = INT8_MAX;
uint64_t x1302 = 100712720361206LLU;
static int16_t x1303 = -1;
static int16_t x1305 = 7;
volatile uint16_t x1326 = UINT16_MAX;
uint8_t x1331 = 1U;
volatile int16_t x1341 = INT16_MIN;
static int64_t x1344 = -443495249108LL;
int16_t x1349 = INT16_MIN;
uint64_t x1370 = UINT64_MAX;
uint16_t x1380 = 960U;
int64_t x1399 = INT64_MIN;
static int64_t x1401 = INT64_MAX;
volatile int16_t x1403 = 455;
int64_t x1418 = INT64_MIN;
volatile int8_t x1419 = INT8_MIN;
static int8_t x1432 = INT8_MIN;
int64_t x1455 = -4764996516108427LL;
volatile int64_t x1457 = INT64_MAX;
volatile int16_t x1458 = INT16_MAX;
int64_t x1462 = INT64_MIN;
int64_t t185 = -2543409240LL;
volatile int64_t x1497 = INT64_MIN;
static int64_t t187 = -71542LL;
int64_t x1530 = 626786LL;
volatile int32_t t191 = -400574;
volatile int32_t x1567 = INT32_MIN;
volatile int64_t t194 = -1043227332LL;
int64_t x1573 = -1LL;
uint32_t x1609 = UINT32_MAX;
int32_t x1616 = INT32_MAX;
uint16_t x1619 = UINT16_MAX;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MIN;
	int32_t x4 = 85197;
	volatile int64_t t0 = -36055LL;

    t0 = (x1/((x2|x3)/x4));

    if (t0 != -85197LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x10 = UINT16_MAX;
	int16_t x12 = -1;
	static volatile int32_t t1 = 60087368;

    t1 = (x9/((x10|x11)/x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x16 = -1;
	int64_t t2 = -629423LL;

    t2 = (x13/((x14|x15)/x16));

    if (t2 != 232LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = -2136;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t3 = 19918469953LL;

    t3 = (x17/((x18|x19)/x20));

    if (t3 != -140735340904447LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = INT32_MAX;
	int16_t x26 = 7859;
	volatile int64_t x27 = INT64_MIN;
	int64_t x28 = -40482966144062LL;
	int64_t t4 = -260LL;

    t4 = (x25/((x26|x27)/x28));

    if (t4 != 9425LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x37 = INT8_MIN;
	static uint32_t x38 = UINT32_MAX;
	int32_t x39 = -1;
	static int32_t x40 = INT32_MAX;
	volatile uint32_t t5 = 70U;

    t5 = (x37/((x38|x39)/x40));

    if (t5 != 2147483584U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x45 = INT64_MIN;
	int16_t x46 = -41;
	int64_t x47 = -1LL;
	static uint64_t x48 = 4246008LLU;
	volatile uint64_t t6 = 1667581LLU;

    t6 = (x45/((x46|x47)/x48));

    if (t6 != 2123004LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = INT32_MIN;
	int64_t x54 = -62005LL;
	int64_t x55 = -51528918973919140LL;
	int16_t x56 = INT16_MIN;
	volatile int64_t t7 = -3238026LL;

    t7 = (x53/((x54|x55)/x56));

    if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	static int64_t x59 = 2800362324387LL;
	uint16_t x60 = 150U;
	int64_t t8 = -2572LL;

    t8 = (x57/((x58|x59)/x60));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x62 = -1;
	uint32_t x64 = 13U;
	volatile uint32_t t9 = 1800U;

    t9 = (x61/((x62|x63)/x64));

    if (t9 != 13U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	static uint32_t x67 = 386U;
	int32_t x68 = INT32_MAX;
	static uint32_t t10 = UINT32_MAX;

    t10 = (x65/((x66|x67)/x68));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = 295U;
	int32_t x72 = 6;
	static volatile int32_t t11 = -27196;

    t11 = (x69/((x70|x71)/x72));

    if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x74 = -10869;
	static uint64_t x76 = 267993327748LLU;
	uint64_t t12 = 5LLU;

    t12 = (x73/((x74|x75)/x76));

    if (t12 != 133996664453LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x89 = -1;
	uint16_t x90 = 32U;
	int16_t x91 = INT16_MAX;
	volatile int32_t t13 = 3445;

    t13 = (x89/((x90|x91)/x92));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x93 = UINT32_MAX;
	uint8_t x95 = UINT8_MAX;
	uint32_t t14 = 29641U;

    t14 = (x93/((x94|x95)/x96));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x101 = INT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	static volatile uint16_t x103 = 1U;
	volatile uint32_t t15 = 5055U;

    t15 = (x101/((x102|x103)/x104));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x106 = 21U;
	int16_t x107 = -4030;
	volatile int64_t t16 = 0LL;

    t16 = (x105/((x106|x107)/x108));

    if (t16 != 5659176232254LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x109 = INT64_MIN;
	uint8_t x110 = UINT8_MAX;
	static int16_t x112 = -1;
	volatile int64_t t17 = -1LL;

    t17 = (x109/((x110|x111)/x112));

    if (t17 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x141 = -235;
	int8_t x143 = INT8_MAX;
	uint16_t x144 = 10U;
	static int32_t t18 = 356461868;

    t18 = (x141/((x142|x143)/x144));

    if (t18 != -19) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	volatile int16_t x147 = 12;
	uint8_t x148 = 3U;
	int32_t t19 = 71338;

    t19 = (x145/((x146|x147)/x148));

    if (t19 != -98305) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x161 = INT16_MIN;
	static int64_t x162 = INT64_MAX;
	uint16_t x163 = 7U;
	int8_t x164 = INT8_MIN;
	volatile int64_t t20 = -67294126079LL;

    t20 = (x161/((x162|x163)/x164));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x173 = UINT32_MAX;
	static int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	static volatile int64_t t21 = 21782998790277741LL;

    t21 = (x173/((x174|x175)/x176));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x177 = INT64_MIN;
	volatile uint16_t x178 = 127U;
	static uint64_t x179 = 2676250420836780LLU;
	int16_t x180 = INT16_MAX;
	uint64_t t22 = 4221633306912LLU;

    t22 = (x177/((x178|x179)/x180));

    if (t22 != 112927485LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x189 = INT64_MIN;
	uint8_t x190 = UINT8_MAX;
	int8_t x192 = -18;
	int64_t t23 = 2994498845203LL;

    t23 = (x189/((x190|x191)/x192));

    if (t23 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x209 = UINT8_MAX;
	int16_t x210 = -1;
	static int8_t x212 = -1;
	volatile uint32_t t24 = 4U;

    t24 = (x209/((x210|x211)/x212));

    if (t24 != 255U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x222 = 867795990;
	static volatile uint8_t x223 = UINT8_MAX;
	uint32_t x224 = 86433018U;
	static volatile uint32_t t25 = 666U;

    t25 = (x221/((x222|x223)/x224));

    if (t25 != 214748364U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x229 = 9281811277134229LL;
	volatile int16_t x230 = INT16_MAX;
	static int64_t x232 = 77LL;
	volatile int64_t t26 = 14385153143430LL;

    t26 = (x229/((x230|x231)/x232));

    if (t26 != 21839555946198LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x237 = 813U;
	int16_t x239 = -1;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t27 = 6LLU;

    t27 = (x237/((x238|x239)/x240));

    if (t27 != 813LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x241 = INT8_MAX;
	static uint64_t x242 = 2644701532260LLU;
	int16_t x243 = INT16_MAX;
	int8_t x244 = 6;
	uint64_t t28 = 282206203LLU;

    t28 = (x241/((x242|x243)/x244));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x245 = -544558;
	static int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	uint32_t t29 = 14U;

    t29 = (x245/((x246|x247)/x248));

    if (t29 != 3911131U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x261 = -3085206LL;
	static int32_t x262 = 37168749;
	static uint16_t x263 = 1460U;
	int16_t x264 = INT16_MAX;
	volatile int64_t t30 = 842LL;

    t30 = (x261/((x262|x263)/x264));

    if (t30 != -2720LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x269 = INT32_MIN;
	static int8_t x270 = 37;
	int16_t x271 = INT16_MIN;
	static uint32_t x272 = 23U;
	uint32_t t31 = 8U;

    t31 = (x269/((x270|x271)/x272));

    if (t31 != 11U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x277 = INT8_MIN;
	static uint64_t x278 = UINT64_MAX;
	int16_t x280 = -175;

    t32 = (x277/((x278|x279)/x280));

    if (t32 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x281 = 0U;
	int16_t x282 = -262;
	static volatile uint16_t x283 = 2613U;
	static volatile int32_t t33 = 3014;

    t33 = (x281/((x282|x283)/x284));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x290 = 2U;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 6U;
	int32_t t34 = 50902;

    t34 = (x289/((x290|x291)/x292));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x297 = INT8_MIN;
	volatile uint32_t x299 = 244720883U;
	volatile int64_t t35 = -186LL;

    t35 = (x297/((x298|x299)/x300));

    if (t35 != 5LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x301 = 3;
	uint32_t x302 = 1450014U;
	int64_t x303 = -3514851107LL;
	int8_t x304 = INT8_MIN;
	int64_t t36 = 3LL;

    t36 = (x301/((x302|x303)/x304));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x309 = INT32_MIN;
	static int16_t x310 = -1;
	int32_t x311 = INT32_MAX;

    t37 = (x309/((x310|x311)/x312));

    if (t37 != 130625U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x318 = 2952323;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	volatile int64_t t38 = 866443281LL;

    t38 = (x317/((x318|x319)/x320));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x321 = -507;
	int8_t x322 = -1;
	uint32_t x324 = 13414U;

    t39 = (x321/((x322|x323)/x324));

    if (t39 != 13414U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x325 = INT64_MIN;
	volatile int32_t x326 = INT32_MIN;
	int32_t x328 = 412558557;
	int64_t t40 = 4041142LL;

    t40 = (x325/((x326|x327)/x328));

    if (t40 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x329 = INT64_MIN;
	volatile uint8_t x330 = 17U;
	volatile uint64_t x331 = 4079627249913697079LLU;
	int64_t x332 = 6LL;
	volatile uint64_t t41 = 119LLU;

    t41 = (x329/((x330|x331)/x332));

    if (t41 != 13LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	static volatile int32_t t42 = INT32_MIN;

    t42 = (x337/((x338|x339)/x340));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x346 = 1049U;
	static uint64_t x347 = 29290320523969267LLU;
	static volatile uint8_t x348 = 7U;

    t43 = (x345/((x346|x347)/x348));

    if (t43 != 4408LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x349 = -1LL;
	uint16_t x351 = 377U;
	uint8_t x352 = 91U;

    t44 = (x349/((x350|x351)/x352));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = 8829282LLU;
	int8_t x367 = INT8_MIN;
	static uint64_t x368 = 1174891367LLU;
	volatile uint64_t t45 = 3039705974643LLU;

    t45 = (x365/((x366|x367)/x368));

    if (t45 != 587445683LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x391 = 70684454062930LLU;
	uint32_t x392 = 122910U;
	volatile uint64_t t46 = 250815410900866821LLU;

    t46 = (x389/((x390|x391)/x392));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x397 = 3U;
	int8_t x398 = -1;
	static volatile int32_t x400 = -1;
	static volatile int32_t t47 = 170;

    t47 = (x397/((x398|x399)/x400));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x401 = 55U;
	int32_t x402 = 7846;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MIN;
	volatile int32_t t48 = 198940317;

    t48 = (x401/((x402|x403)/x404));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x406 = UINT64_MAX;
	uint32_t x408 = 29025U;
	volatile uint64_t t49 = 8827475680144038589LLU;

    t49 = (x405/((x406|x407)/x408));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;
	static int64_t x416 = -1LL;
	int64_t t50 = 595270384LL;

    t50 = (x413/((x414|x415)/x416));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	static int64_t x420 = -1LL;
	int64_t t51 = -14363LL;

    t51 = (x417/((x418|x419)/x420));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x429 = INT32_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	int8_t x431 = -1;
	int16_t x432 = INT16_MIN;

    t52 = (x429/((x430|x431)/x432));

    if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x461 = 3U;
	uint8_t x462 = 56U;
	static volatile int64_t x464 = -1LL;
	volatile int64_t t53 = 5LL;

    t53 = (x461/((x462|x463)/x464));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x472 = 173624587484970780LLU;
	static volatile uint64_t t54 = 7LLU;

    t54 = (x469/((x470|x471)/x472));

    if (t54 != 20259279LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x473 = INT32_MAX;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	int8_t x476 = -1;
	int32_t t55 = -17203576;

    t55 = (x473/((x474|x475)/x476));

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x477 = INT8_MIN;
	static int8_t x478 = 6;
	uint32_t t56 = 1986U;

    t56 = (x477/((x478|x479)/x480));

    if (t56 != 2147483584U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x493 = -5;
	int8_t x495 = INT8_MIN;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t57 = 1877U;

    t57 = (x493/((x494|x495)/x496));

    if (t57 != 4294967291U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x497 = 51U;
	int16_t x498 = 248;
	uint32_t x499 = UINT32_MAX;
	static uint32_t x500 = UINT32_MAX;
	static uint32_t t58 = 1245018U;

    t58 = (x497/((x498|x499)/x500));

    if (t58 != 51U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x501 = -956130;
	static uint8_t x502 = 31U;
	static int32_t x503 = INT32_MIN;
	static uint8_t x504 = 106U;
	static volatile int32_t t59 = 29919936;

    t59 = (x501/((x502|x503)/x504));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x505 = -1;
	static int32_t x506 = INT32_MAX;
	int8_t x507 = 1;
	int8_t x508 = 8;
	volatile int32_t t60 = 188011794;

    t60 = (x505/((x506|x507)/x508));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x525 = 1U;
	int64_t x527 = -24456523234534LL;
	uint16_t x528 = 33U;
	volatile int64_t t61 = 968499084127LL;

    t61 = (x525/((x526|x527)/x528));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x529 = 13;
	uint32_t x530 = 527288046U;
	int32_t x531 = -1;
	int16_t x532 = INT16_MAX;
	volatile uint32_t t62 = 745507874U;

    t62 = (x529/((x530|x531)/x532));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x537 = INT64_MAX;
	int64_t x538 = 768730238208LL;
	uint16_t x540 = 1U;
	int64_t t63 = -24184512LL;

    t63 = (x537/((x538|x539)/x540));

    if (t63 != 11998190LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x541 = -7;
	volatile int16_t x542 = INT16_MIN;
	uint32_t x543 = UINT32_MAX;
	uint32_t t64 = 0U;

    t64 = (x541/((x542|x543)/x544));

    if (t64 != 4294967289U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x545 = -1;
	int8_t x546 = -1;
	uint8_t x547 = 75U;
	uint32_t x548 = 51U;
	static uint32_t t65 = 50437186U;

    t65 = (x545/((x546|x547)/x548));

    if (t65 != 51U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x549 = INT64_MAX;
	int32_t x551 = 41185;
	int8_t x552 = INT8_MIN;

    t66 = (x549/((x550|x551)/x552));

    if (t66 != -3188168695767292LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x554 = UINT64_MAX;
	int64_t x555 = -2909863211204050LL;
	int8_t x556 = -1;
	uint64_t t67 = 2582713540LLU;

    t67 = (x553/((x554|x555)/x556));

    if (t67 != 417703803LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x571 = INT32_MAX;
	int32_t t68 = 380;

    t68 = (x569/((x570|x571)/x572));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x573 = 34034U;
	int8_t x574 = INT8_MIN;
	int64_t x575 = INT64_MIN;
	volatile uint64_t x576 = 420740705966LLU;

    t69 = (x573/((x574|x575)/x576));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x577 = -149326333;
	uint32_t x578 = UINT32_MAX;
	int16_t x580 = -1133;
	uint32_t t70 = 4070869U;

    t70 = (x577/((x578|x579)/x580));

    if (t70 != 4145640963U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x585 = 3204U;
	uint8_t x586 = 1U;
	int32_t x587 = INT32_MIN;

    t71 = (x585/((x586|x587)/x588));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x589 = -1;
	int16_t x592 = 2366;

    t72 = (x589/((x590|x591)/x592));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x597 = INT64_MIN;
	uint64_t x598 = UINT64_MAX;
	int64_t x600 = INT64_MIN;
	volatile uint64_t t73 = 1743056505198LLU;

    t73 = (x597/((x598|x599)/x600));

    if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x605 = INT64_MIN;
	volatile int32_t x606 = INT32_MIN;
	static volatile int16_t x607 = 1;
	int64_t t74 = 0LL;

    t74 = (x605/((x606|x607)/x608));

    if (t74 != 1095216725760LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x621 = -1;
	int8_t x623 = -1;
	int8_t x624 = 1;
	volatile int64_t t75 = -8874953LL;

    t75 = (x621/((x622|x623)/x624));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x633 = -1;
	uint64_t x634 = 1711460155153067844LLU;
	int8_t x635 = -1;
	uint16_t x636 = 3909U;
	volatile uint64_t t76 = 15151648789809731LLU;

    t76 = (x633/((x634|x635)/x636));

    if (t76 != 3909LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x641 = INT32_MIN;
	uint32_t x642 = 765U;
	volatile int8_t x643 = INT8_MIN;
	int8_t x644 = INT8_MIN;

    t77 = (x641/((x642|x643)/x644));

    if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x661 = INT8_MIN;
	uint16_t x662 = 3609U;
	int8_t x664 = INT8_MAX;
	static int32_t t78 = 19;

    t78 = (x661/((x662|x663)/x664));

    if (t78 != -4) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x665 = 14084U;
	int32_t x666 = INT32_MIN;
	int32_t x667 = INT32_MAX;
	volatile uint32_t t79 = 26602U;

    t79 = (x665/((x666|x667)/x668));

    if (t79 != 5U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x669 = INT16_MAX;
	int64_t x670 = 94991251LL;
	volatile uint8_t x671 = 1U;
	volatile uint32_t x672 = 8U;
	static int64_t t80 = -2584378836838406LL;

    t80 = (x669/((x670|x671)/x672));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x673 = UINT64_MAX;
	int32_t x676 = -23;
	volatile uint64_t t81 = 122441757265220LLU;

    t81 = (x673/((x674|x675)/x676));

    if (t81 != 46LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x690 = INT8_MIN;
	volatile int32_t x691 = 4927181;

    t82 = (x689/((x690|x691)/x692));

    if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x701 = 80U;
	static volatile int64_t x702 = -1LL;
	int64_t x704 = -17454756553687851LL;
	volatile uint64_t t83 = 14055872LLU;

    t83 = (x701/((x702|x703)/x704));

    if (t83 != 80LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x705 = -15746;
	int8_t x706 = INT8_MIN;
	int16_t x707 = -7;
	volatile int16_t x708 = -1;
	int32_t t84 = 468;

    t84 = (x705/((x706|x707)/x708));

    if (t84 != -2249) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x709 = INT16_MIN;
	volatile uint8_t x710 = 77U;
	volatile uint16_t x711 = 14649U;
	uint16_t x712 = 27U;
	volatile int32_t t85 = 1670;

    t85 = (x709/((x710|x711)/x712));

    if (t85 != -60) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x714 = 3864U;
	int64_t x715 = 245644299176144LL;
	volatile int16_t x716 = INT16_MIN;
	volatile int64_t t86 = 0LL;

    t86 = (x713/((x714|x715)/x716));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x725 = INT16_MAX;
	int64_t x727 = INT64_MIN;
	volatile uint16_t x728 = 235U;
	int64_t t87 = 899876268340369LL;

    t87 = (x725/((x726|x727)/x728));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x729 = UINT8_MAX;
	static uint8_t x730 = UINT8_MAX;
	uint64_t x731 = UINT64_MAX;
	int16_t x732 = 373;
	static uint64_t t88 = 179LLU;

    t88 = (x729/((x730|x731)/x732));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x738 = 7587587LL;
	volatile uint8_t x739 = 6U;
	volatile int64_t t89 = 1332456399539LL;

    t89 = (x737/((x738|x739)/x740));

    if (t89 != -72454LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	uint32_t x747 = 5355U;
	static uint8_t x748 = 17U;
	uint32_t t90 = 3756U;

    t90 = (x745/((x746|x747)/x748));

    if (t90 != 16U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x749 = 10570U;
	int16_t x751 = INT16_MIN;
	uint32_t x752 = 11814U;
	uint32_t t91 = 2033U;

    t91 = (x749/((x750|x751)/x752));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x757 = INT8_MAX;
	static uint64_t x758 = UINT64_MAX;
	static int64_t x759 = INT64_MIN;
	uint64_t x760 = 2988740226137LLU;

    t92 = (x757/((x758|x759)/x760));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	int64_t x771 = 182LL;
	int8_t x772 = -2;
	volatile int64_t t93 = -6LL;

    t93 = (x769/((x770|x771)/x772));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x777 = 5;
	int32_t x778 = -1;
	volatile int32_t x779 = -1;
	uint64_t x780 = UINT64_MAX;
	uint64_t t94 = 8915797405910060LLU;

    t94 = (x777/((x778|x779)/x780));

    if (t94 != 5LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x782 = INT64_MAX;
	static volatile uint16_t x783 = UINT16_MAX;
	int16_t x784 = -1;
	int64_t t95 = 8283761914LL;

    t95 = (x781/((x782|x783)/x784));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x785 = 6376U;
	volatile uint16_t x786 = 609U;
	int64_t x787 = INT64_MIN;
	volatile uint64_t x788 = 230LLU;
	volatile uint64_t t96 = 1248006370LLU;

    t96 = (x785/((x786|x787)/x788));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x797 = 47U;
	int64_t x799 = 782042LL;
	uint8_t x800 = 7U;
	volatile int64_t t97 = -89206LL;

    t97 = (x797/((x798|x799)/x800));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x801 = -232;
	volatile int8_t x804 = 1;
	volatile int64_t t98 = -247LL;

    t98 = (x801/((x802|x803)/x804));

    if (t98 != 232LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x805 = INT64_MIN;
	static int16_t x807 = INT16_MIN;
	static uint16_t x808 = 86U;
	uint64_t t99 = 1070441394238289274LLU;

    t99 = (x805/((x806|x807)/x808));

    if (t99 != 43LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x810 = UINT64_MAX;
	uint32_t x811 = 359882133U;
	volatile uint8_t x812 = UINT8_MAX;
	uint64_t t100 = 53130887LLU;

    t100 = (x809/((x810|x811)/x812));

    if (t100 != 254LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x821 = 3949018U;
	volatile int16_t x822 = -1;
	static volatile uint32_t t101 = 971018292U;

    t101 = (x821/((x822|x823)/x824));

    if (t101 != 3949018U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x838 = -1LL;
	int64_t x839 = -170656560790502079LL;
	volatile int64_t t102 = 34557907395730LL;

    t102 = (x837/((x838|x839)/x840));

    if (t102 != 32767LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x845 = INT32_MAX;
	int16_t x846 = 357;
	volatile int64_t x847 = INT64_MAX;
	static uint64_t x848 = 527LLU;

    t103 = (x845/((x846|x847)/x848));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x850 = 27;
	int64_t x852 = -1LL;
	volatile int64_t t104 = 61632343754LL;

    t104 = (x849/((x850|x851)/x852));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x857 = 0U;
	int16_t x858 = INT16_MIN;
	static int8_t x859 = 0;
	uint16_t x860 = 1U;
	volatile uint32_t t105 = 60065U;

    t105 = (x857/((x858|x859)/x860));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x869 = 5U;
	int16_t x870 = INT16_MIN;
	int32_t x872 = INT32_MIN;

    t106 = (x869/((x870|x871)/x872));

    if (t106 != 5U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x873 = 244LL;
	int32_t x874 = INT32_MIN;
	static int64_t x875 = 28789LL;
	static uint8_t x876 = UINT8_MAX;
	int64_t t107 = -141LL;

    t107 = (x873/((x874|x875)/x876));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x881 = UINT16_MAX;
	static int64_t x882 = -1LL;
	int32_t x883 = INT32_MAX;
	uint64_t t108 = 1209096874LLU;

    t108 = (x881/((x882|x883)/x884));

    if (t108 != 1771LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x909 = INT64_MIN;
	uint8_t x910 = 10U;
	int8_t x911 = -1;
	int64_t t109 = INT64_MIN;

    t109 = (x909/((x910|x911)/x912));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x929 = 30;
	uint8_t x931 = UINT8_MAX;
	volatile int64_t x932 = INT64_MIN;
	volatile uint64_t t110 = 14LLU;

    t110 = (x929/((x930|x931)/x932));

    if (t110 != 30LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x937 = -1;
	int32_t x938 = -17412798;
	uint16_t x939 = 5966U;
	int32_t t111 = 116120027;

    t111 = (x937/((x938|x939)/x940));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x941 = 91759680599915172LLU;
	static volatile int32_t x942 = 405800;
	static uint16_t x943 = 3526U;
	uint64_t t112 = 299LLU;

    t112 = (x941/((x942|x943)/x944));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x954 = INT64_MIN;
	int8_t x955 = INT8_MIN;
	uint8_t x956 = 1U;
	int64_t t113 = -7LL;

    t113 = (x953/((x954|x955)/x956));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x957 = -1LL;
	static int8_t x958 = -28;
	int8_t x959 = 0;
	int8_t x960 = -1;
	static volatile int64_t t114 = -6072LL;

    t114 = (x957/((x958|x959)/x960));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x962 = 1LLU;
	int16_t x963 = -2;
	volatile int32_t x964 = -6;
	volatile uint64_t t115 = 519409714646LLU;

    t115 = (x961/((x962|x963)/x964));

    if (t115 != 18446744073709550323LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x965 = -6;
	int16_t x966 = INT16_MIN;
	static uint8_t x967 = UINT8_MAX;
	static volatile int64_t x968 = 5LL;
	volatile int64_t t116 = 36725LL;

    t116 = (x965/((x966|x967)/x968));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x973 = 0;
	volatile uint32_t x974 = 575493U;
	int8_t x975 = -3;
	volatile uint32_t x976 = 597160038U;
	uint32_t t117 = 66564031U;

    t117 = (x973/((x974|x975)/x976));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x977 = -1LL;
	uint16_t x978 = 41U;
	int32_t x979 = INT32_MIN;
	volatile int16_t x980 = -239;
	static int64_t t118 = 21358262821640827LL;

    t118 = (x977/((x978|x979)/x980));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x981 = -477LL;
	uint32_t x982 = UINT32_MAX;
	int64_t t119 = -8271416788LL;

    t119 = (x981/((x982|x983)/x984));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x985 = -1;
	int64_t x986 = 10547LL;
	static int32_t x987 = INT32_MIN;
	int8_t x988 = -1;

    t120 = (x985/((x986|x987)/x988));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x994 = INT16_MIN;
	uint16_t x996 = 1U;
	volatile int64_t t121 = -460265999397030LL;

    t121 = (x993/((x994|x995)/x996));

    if (t121 != -10707236LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x997 = 13;
	static int64_t x998 = INT64_MIN;
	int32_t x999 = 106;
	int16_t x1000 = -1;

    t122 = (x997/((x998|x999)/x1000));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1001 = INT32_MIN;
	volatile uint8_t x1002 = 20U;
	int64_t x1003 = -1LL;
	static uint64_t x1004 = 706230546937253619LLU;
	uint64_t t123 = 117119792899850234LLU;

    t123 = (x1001/((x1002|x1003)/x1004));

    if (t123 != 709490156598541075LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x1013 = -24192;
	int32_t x1014 = INT32_MIN;
	int16_t x1016 = -1;
	int32_t t124 = -26547297;

    t124 = (x1013/((x1014|x1015)/x1016));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x1017 = INT8_MAX;
	int16_t x1018 = INT16_MIN;
	volatile uint64_t x1019 = 243LLU;
	volatile int32_t x1020 = -82019;
	uint64_t t125 = 1027951002400192070LLU;

    t125 = (x1017/((x1018|x1019)/x1020));

    if (t125 != 127LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x1021 = INT8_MIN;
	uint8_t x1022 = 78U;
	uint16_t x1023 = UINT16_MAX;
	static uint8_t x1024 = 13U;
	int32_t t126 = 139955622;

    t126 = (x1021/((x1022|x1023)/x1024));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1025 = INT64_MIN;
	int32_t x1027 = -1;
	uint32_t x1028 = UINT32_MAX;
	int64_t t127 = INT64_MIN;

    t127 = (x1025/((x1026|x1027)/x1028));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1045 = 43;
	volatile uint32_t x1046 = UINT32_MAX;
	int8_t x1047 = 15;
	static int8_t x1048 = -13;
	volatile uint32_t t128 = 4966619U;

    t128 = (x1045/((x1046|x1047)/x1048));

    if (t128 != 43U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1057 = 1698U;
	static int32_t x1058 = -1;
	int16_t x1059 = -1;
	static volatile int8_t x1060 = -1;
	int32_t t129 = 0;

    t129 = (x1057/((x1058|x1059)/x1060));

    if (t129 != 1698) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1069 = INT32_MIN;
	int64_t x1070 = -1LL;
	volatile uint32_t x1071 = 1014326U;
	uint64_t x1072 = UINT64_MAX;
	volatile uint64_t t130 = 13160152318LLU;

    t130 = (x1069/((x1070|x1071)/x1072));

    if (t130 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x1085 = INT32_MAX;
	int8_t x1086 = 1;
	uint64_t x1087 = UINT64_MAX;
	int32_t x1088 = INT32_MIN;
	volatile uint64_t t131 = 237268350676LLU;

    t131 = (x1085/((x1086|x1087)/x1088));

    if (t131 != 2147483647LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1090 = UINT64_MAX;
	int8_t x1091 = -1;
	uint64_t t132 = 52281578207LLU;

    t132 = (x1089/((x1090|x1091)/x1092));

    if (t132 != 10854LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1097 = INT64_MAX;
	int8_t x1098 = INT8_MIN;
	int16_t x1099 = INT16_MIN;
	int8_t x1100 = INT8_MIN;
	volatile int64_t t133 = INT64_MAX;

    t133 = (x1097/((x1098|x1099)/x1100));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1101 = 44U;
	int8_t x1102 = INT8_MIN;
	int16_t x1103 = INT16_MIN;
	uint32_t x1104 = 95U;
	volatile uint32_t t134 = 291680U;

    t134 = (x1101/((x1102|x1103)/x1104));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1109 = -473431979850808248LL;
	int16_t x1110 = -4660;
	static volatile int32_t x1111 = -257357541;
	int32_t x1112 = -1;
	volatile int64_t t135 = 73714LL;

    t135 = (x1109/((x1110|x1111)/x1112));

    if (t135 != -102010769198622LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1113 = UINT16_MAX;
	int64_t x1114 = 111540579039LL;
	volatile uint8_t x1115 = 18U;
	int64_t t136 = 1459732LL;

    t136 = (x1113/((x1114|x1115)/x1116));

    if (t136 != 1285LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1117 = UINT32_MAX;
	int8_t x1118 = INT8_MIN;
	volatile uint32_t x1119 = 2208U;
	volatile int8_t x1120 = INT8_MIN;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = (x1117/((x1118|x1119)/x1120));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1121 = -1;
	volatile uint64_t x1122 = UINT64_MAX;
	static uint16_t x1123 = 14U;
	static uint32_t x1124 = UINT32_MAX;
	volatile uint64_t t138 = 6454594035171993091LLU;

    t138 = (x1121/((x1122|x1123)/x1124));

    if (t138 != 4294967295LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1125 = INT64_MIN;
	int8_t x1126 = -1;
	uint32_t x1128 = 36652U;
	static volatile int64_t t139 = -2098581LL;

    t139 = (x1125/((x1126|x1127)/x1128));

    if (t139 != -78709802161208LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1142 = 71884U;
	int16_t x1143 = 5;
	uint32_t x1144 = 33558U;

    t140 = (x1141/((x1142|x1143)/x1144));

    if (t140 != 2147483647U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x1149 = UINT8_MAX;
	static volatile uint32_t x1151 = 766546337U;
	int32_t x1152 = INT32_MIN;

    t141 = (x1149/((x1150|x1151)/x1152));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1153 = INT16_MIN;
	int16_t x1154 = 0;
	int32_t x1155 = INT32_MAX;
	int8_t x1156 = -1;

    t142 = (x1153/((x1154|x1155)/x1156));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x1157 = UINT64_MAX;
	uint32_t x1158 = 374285U;
	int32_t x1159 = INT32_MAX;
	uint64_t t143 = 7LLU;

    t143 = (x1157/((x1158|x1159)/x1160));

    if (t143 != 1090921697248LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x1177 = INT16_MIN;
	volatile uint32_t x1178 = 453274374U;
	int64_t x1179 = -1LL;
	static int32_t x1180 = -1;

    t144 = (x1177/((x1178|x1179)/x1180));

    if (t144 != -32768LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1182 = INT8_MIN;
	int32_t x1183 = INT32_MIN;

    t145 = (x1181/((x1182|x1183)/x1184));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1185 = 14916U;
	int64_t x1186 = INT64_MIN;
	volatile int64_t x1187 = INT64_MIN;
	int32_t x1188 = -121042980;

    t146 = (x1185/((x1186|x1187)/x1188));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x1193 = 14171187U;
	static uint8_t x1194 = UINT8_MAX;
	uint32_t t147 = 444406791U;

    t147 = (x1193/((x1194|x1195)/x1196));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1197 = -1;
	static volatile uint32_t x1198 = 986897U;
	int16_t x1199 = INT16_MIN;
	uint64_t x1200 = 19147LLU;
	static uint64_t t148 = 30914LLU;

    t148 = (x1197/((x1198|x1199)/x1200));

    if (t148 != 82236625044957LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1201 = INT16_MIN;
	int8_t x1202 = INT8_MIN;
	static uint16_t x1204 = 1U;
	static int32_t t149 = 2;

    t149 = (x1201/((x1202|x1203)/x1204));

    if (t149 != 264) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1205 = -44LL;
	int64_t x1206 = -7889472601514765LL;
	uint32_t x1207 = 4U;
	int64_t t150 = -196LL;

    t150 = (x1205/((x1206|x1207)/x1208));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1209 = INT8_MIN;
	int64_t x1210 = 4629498916225115LL;
	uint32_t x1211 = 881326571U;
	static int8_t x1212 = INT8_MIN;

    t151 = (x1209/((x1210|x1211)/x1212));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1213 = INT16_MIN;
	int8_t x1214 = -1;
	volatile uint64_t x1215 = 13215LLU;
	static uint64_t x1216 = 350981664631655LLU;
	uint64_t t152 = 233488422974LLU;

    t152 = (x1213/((x1214|x1215)/x1216));

    if (t152 != 350985483831069LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1225 = -402244199180059554LL;
	int64_t x1226 = INT64_MIN;
	uint64_t x1227 = 13784819LLU;
	uint16_t x1228 = UINT16_MAX;
	uint64_t t153 = 33502930LLU;

    t153 = (x1225/((x1226|x1227)/x1228));

    if (t153 != 128211LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1237 = 7158;
	int64_t x1238 = 4294601985843LL;
	int16_t x1240 = INT16_MIN;
	volatile int64_t t154 = -19767LL;

    t154 = (x1237/((x1238|x1239)/x1240));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x1247 = INT16_MIN;
	int8_t x1248 = INT8_MAX;
	int64_t t155 = 201833579546350364LL;

    t155 = (x1245/((x1246|x1247)/x1248));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1257 = INT32_MIN;
	volatile uint8_t x1258 = 48U;
	int64_t x1259 = 20909LL;
	int8_t x1260 = 18;
	int64_t t156 = -6LL;

    t156 = (x1257/((x1258|x1259)/x1260));

    if (t156 != -1848092LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1262 = 5755172289LLU;
	int32_t x1263 = -1;
	int64_t x1264 = 572312977720719LL;
	volatile uint64_t t157 = 50037LLU;

    t157 = (x1261/((x1262|x1263)/x1264));

    if (t157 != 572329250526187LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1269 = INT64_MAX;
	uint32_t x1270 = 4256U;
	uint8_t x1271 = 3U;
	volatile int64_t t158 = -1074393345850LL;

    t158 = (x1269/((x1270|x1271)/x1272));

    if (t158 != 279496122328932600LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1279 = -1;
	int16_t x1280 = -1;
	volatile int32_t t159 = -3;

    t159 = (x1277/((x1278|x1279)/x1280));

    if (t159 != 50912693) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x1289 = -4;
	int16_t x1290 = 2;
	uint64_t x1291 = UINT64_MAX;
	int64_t x1292 = INT64_MIN;

    t160 = (x1289/((x1290|x1291)/x1292));

    if (t160 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1297 = INT8_MIN;
	uint16_t x1298 = 3579U;
	uint16_t x1299 = 404U;
	int32_t t161 = -3;

    t161 = (x1297/((x1298|x1299)/x1300));

    if (t161 != -4) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1301 = INT64_MIN;
	int32_t x1304 = -1;
	uint64_t t162 = 5LLU;

    t162 = (x1301/((x1302|x1303)/x1304));

    if (t162 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x1306 = UINT32_MAX;
	static int16_t x1307 = INT16_MIN;
	uint32_t x1308 = 7185895U;
	volatile uint32_t t163 = 77474667U;

    t163 = (x1305/((x1306|x1307)/x1308));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1325 = 241104U;
	volatile uint32_t x1327 = 111074966U;
	uint8_t x1328 = 23U;
	volatile uint32_t t164 = 20538U;

    t164 = (x1325/((x1326|x1327)/x1328));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1329 = 54;
	volatile uint16_t x1330 = 3515U;
	int8_t x1332 = INT8_MAX;
	static int32_t t165 = 46877793;

    t165 = (x1329/((x1330|x1331)/x1332));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1342 = INT16_MIN;
	volatile uint64_t x1343 = 1568261LLU;
	volatile uint64_t t166 = 24377268064939LLU;

    t166 = (x1341/((x1342|x1343)/x1344));

    if (t166 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x1350 = UINT16_MAX;
	int64_t x1351 = INT64_MIN;
	uint16_t x1352 = UINT16_MAX;
	volatile int64_t t167 = 1133435057602LL;

    t167 = (x1349/((x1350|x1351)/x1352));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1353 = 44;
	uint32_t x1354 = UINT32_MAX;
	static volatile int64_t x1355 = INT64_MIN;
	volatile int32_t x1356 = INT32_MAX;
	volatile int64_t t168 = 104588767356LL;

    t168 = (x1353/((x1354|x1355)/x1356));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1369 = UINT16_MAX;
	uint32_t x1371 = 366044U;
	volatile uint16_t x1372 = UINT16_MAX;
	volatile uint64_t t169 = 6LLU;

    t169 = (x1369/((x1370|x1371)/x1372));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1373 = 1525U;
	int16_t x1374 = 48;
	uint64_t x1375 = 3736785321640LLU;
	static volatile uint8_t x1376 = UINT8_MAX;
	volatile uint64_t t170 = 3633773350470LLU;

    t170 = (x1373/((x1374|x1375)/x1376));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x1377 = UINT32_MAX;
	uint32_t x1378 = 11797240U;
	int16_t x1379 = -1;
	static volatile uint32_t t171 = 391U;

    t171 = (x1377/((x1378|x1379)/x1380));

    if (t171 != 960U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1381 = INT8_MIN;
	int8_t x1382 = -2;
	int32_t x1383 = 7;
	int8_t x1384 = -1;
	static volatile int32_t t172 = 3949784;

    t172 = (x1381/((x1382|x1383)/x1384));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x1389 = 7;
	volatile int64_t x1390 = -1486760LL;
	static uint64_t x1391 = UINT64_MAX;
	volatile uint32_t x1392 = 118366U;
	volatile uint64_t t173 = 282826222591LLU;

    t173 = (x1389/((x1390|x1391)/x1392));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1393 = INT8_MIN;
	int32_t x1394 = INT32_MIN;
	int16_t x1395 = INT16_MAX;
	int16_t x1396 = INT16_MIN;
	int32_t t174 = 0;

    t174 = (x1393/((x1394|x1395)/x1396));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x1397 = UINT64_MAX;
	static int16_t x1398 = INT16_MIN;
	int16_t x1400 = -313;
	volatile uint64_t t175 = 8975954332792731LLU;

    t175 = (x1397/((x1398|x1399)/x1400));

    if (t175 != 177372539170284150LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1402 = -5336684451LL;
	int8_t x1404 = 15;
	static volatile int64_t t176 = 4151990186LL;

    t176 = (x1401/((x1402|x1403)/x1404));

    if (t176 != -25924446552LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1417 = -1;
	int8_t x1420 = INT8_MIN;
	volatile int64_t t177 = 431227454695082LL;

    t177 = (x1417/((x1418|x1419)/x1420));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1429 = INT32_MAX;
	int64_t x1430 = INT64_MIN;
	uint16_t x1431 = 48U;
	static int64_t t178 = 912645259388156LL;

    t178 = (x1429/((x1430|x1431)/x1432));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1433 = INT64_MIN;
	static int64_t x1434 = INT64_MIN;
	volatile uint32_t x1435 = UINT32_MAX;
	int32_t x1436 = -1;
	static volatile int64_t t179 = -229LL;

    t179 = (x1433/((x1434|x1435)/x1436));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1441 = UINT16_MAX;
	int32_t x1442 = INT32_MAX;
	int16_t x1443 = 4632;
	int16_t x1444 = 101;
	volatile int32_t t180 = -2819223;

    t180 = (x1441/((x1442|x1443)/x1444));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1453 = INT32_MIN;
	static volatile int16_t x1454 = INT16_MIN;
	uint64_t x1456 = 11LLU;
	uint64_t t181 = 122148847151LLU;

    t181 = (x1453/((x1454|x1455)/x1456));

    if (t181 != 10LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1459 = INT64_MIN;
	int8_t x1460 = -1;
	int64_t t182 = 199517LL;

    t182 = (x1457/((x1458|x1459)/x1460));

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1461 = INT8_MIN;
	int16_t x1463 = INT16_MIN;
	int32_t x1464 = 51;
	volatile int64_t t183 = 20216013826LL;

    t183 = (x1461/((x1462|x1463)/x1464));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1473 = -26047LL;
	int32_t x1474 = INT32_MIN;
	static uint16_t x1475 = UINT16_MAX;
	int16_t x1476 = INT16_MIN;
	volatile int64_t t184 = -400261LL;

    t184 = (x1473/((x1474|x1475)/x1476));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1477 = 1;
	int8_t x1478 = INT8_MIN;
	static int64_t x1479 = 61323965LL;
	int32_t x1480 = 2;

    t185 = (x1477/((x1478|x1479)/x1480));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1485 = 0;
	static int32_t x1486 = INT32_MIN;
	int16_t x1487 = INT16_MIN;
	volatile int32_t x1488 = -1911;
	volatile int32_t t186 = -8646353;

    t186 = (x1485/((x1486|x1487)/x1488));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1498 = INT32_MAX;
	int64_t x1499 = INT64_MIN;
	int32_t x1500 = 130;

    t187 = (x1497/((x1498|x1499)/x1500));

    if (t187 != 130LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1505 = -3;
	uint64_t x1506 = 39545618155LLU;
	int8_t x1507 = -3;
	uint32_t x1508 = 48U;
	uint64_t t188 = 23367448036072LLU;

    t188 = (x1505/((x1506|x1507)/x1508));

    if (t188 != 48LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x1529 = UINT32_MAX;
	int32_t x1531 = INT32_MIN;
	volatile int8_t x1532 = -1;
	int64_t t189 = -14833584555849LL;

    t189 = (x1529/((x1530|x1531)/x1532));

    if (t189 != 2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1545 = -1;
	int64_t x1546 = -28744951079977689LL;
	int32_t x1547 = INT32_MIN;
	uint32_t x1548 = 85144U;
	int64_t t190 = 93036938874621LL;

    t190 = (x1545/((x1546|x1547)/x1548));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1549 = 27;
	static int32_t x1550 = INT32_MAX;
	static int16_t x1551 = INT16_MAX;
	int16_t x1552 = -1;

    t191 = (x1549/((x1550|x1551)/x1552));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1553 = UINT32_MAX;
	static int64_t x1554 = -485356246544062268LL;
	int32_t x1555 = INT32_MIN;
	static int16_t x1556 = INT16_MIN;
	volatile int64_t t192 = -6LL;

    t192 = (x1553/((x1554|x1555)/x1556));

    if (t192 != 115267LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1565 = 2820;
	uint8_t x1566 = 56U;
	volatile uint8_t x1568 = 3U;
	int32_t t193 = 1;

    t193 = (x1565/((x1566|x1567)/x1568));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1569 = INT8_MIN;
	int64_t x1570 = INT64_MAX;
	int8_t x1571 = 1;
	static volatile uint8_t x1572 = 5U;

    t194 = (x1569/((x1570|x1571)/x1572));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1574 = INT16_MIN;
	static uint8_t x1575 = UINT8_MAX;
	int64_t x1576 = -1LL;
	int64_t t195 = 100745438LL;

    t195 = (x1573/((x1574|x1575)/x1576));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1581 = 12602U;
	uint64_t x1582 = 79205617115827404LLU;
	uint64_t x1583 = UINT64_MAX;
	int16_t x1584 = INT16_MAX;
	uint64_t t196 = 4267LLU;

    t196 = (x1581/((x1582|x1583)/x1584));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x1610 = UINT8_MAX;
	static int8_t x1611 = INT8_MIN;
	uint32_t x1612 = 5U;
	uint32_t t197 = 142154484U;

    t197 = (x1609/((x1610|x1611)/x1612));

    if (t197 != 5U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1613 = 3506LLU;
	uint64_t x1614 = 413506LLU;
	int16_t x1615 = -1;
	volatile uint64_t t198 = 60LLU;

    t198 = (x1613/((x1614|x1615)/x1616));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1617 = INT8_MIN;
	volatile int64_t x1618 = INT64_MIN;
	static int64_t x1620 = -1790747967075LL;
	volatile int64_t t199 = -12787080LL;

    t199 = (x1617/((x1618|x1619)/x1620));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

