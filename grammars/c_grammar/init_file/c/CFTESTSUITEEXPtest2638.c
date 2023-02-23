
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

int16_t x8 = INT16_MIN;
int16_t x10 = INT16_MIN;
static uint16_t x13 = UINT16_MAX;
static int32_t t2 = -31;
static uint16_t x33 = 0U;
int32_t t5 = -95064624;
uint16_t x43 = 6618U;
static volatile int16_t x44 = 46;
volatile int32_t t7 = 89516832;
int64_t x52 = 210498657LL;
volatile int32_t t8 = -4086155;
int8_t x59 = -12;
static int32_t x71 = 39720608;
int64_t x90 = 1805673092LL;
int16_t x92 = 1;
volatile uint8_t x106 = UINT8_MAX;
int16_t x107 = -6959;
int32_t x109 = 24;
volatile uint64_t x111 = UINT64_MAX;
volatile int32_t t14 = 1379;
int8_t x117 = 5;
static int64_t x159 = -2609016077977669LL;
uint32_t x161 = UINT32_MAX;
static int32_t x162 = INT32_MAX;
int32_t x164 = 480;
uint32_t t21 = 14U;
uint8_t x167 = 3U;
volatile uint32_t x194 = 46149U;
uint16_t x197 = UINT16_MAX;
int32_t t26 = -8;
static uint64_t x212 = 216800659118LLU;
volatile int8_t x249 = INT8_MAX;
int32_t x266 = 53829;
static int64_t x280 = -1LL;
static int8_t x282 = 31;
uint32_t x283 = 1542997792U;
int8_t x295 = INT8_MIN;
int32_t t36 = -664;
volatile int32_t x306 = INT32_MIN;
volatile int64_t x308 = -1LL;
volatile int32_t t38 = -1;
uint32_t x315 = 9U;
static int16_t x332 = INT16_MAX;
volatile int16_t x334 = 14861;
volatile int32_t x335 = INT32_MAX;
volatile uint64_t t41 = 43598LLU;
static int64_t t42 = -1053476532724121LL;
uint32_t x341 = 3U;
static int16_t x343 = 0;
uint8_t x346 = UINT8_MAX;
int64_t x360 = INT64_MIN;
uint8_t x371 = 123U;
volatile uint64_t t48 = 1071733499378363890LLU;
volatile int32_t t51 = 11804237;
volatile int32_t t52 = 10;
volatile uint64_t x439 = 2936LLU;
static int8_t x450 = INT8_MIN;
int8_t x451 = INT8_MAX;
int16_t x462 = INT16_MIN;
int64_t x500 = INT64_MIN;
int16_t x522 = -1;
volatile int16_t x526 = INT16_MIN;
volatile int16_t x529 = 0;
uint32_t x537 = 355635868U;
static uint64_t x551 = 216434988931917717LLU;
uint32_t t68 = 2286300U;
int16_t x556 = INT16_MIN;
volatile int32_t x557 = 90501;
uint64_t x558 = UINT64_MAX;
int32_t t71 = -1;
int64_t x566 = 1LL;
volatile int16_t x573 = INT16_MAX;
volatile int16_t x574 = 2;
uint16_t x577 = UINT16_MAX;
int8_t x582 = INT8_MIN;
int8_t x595 = INT8_MIN;
static volatile uint8_t x605 = 58U;
static int16_t x615 = INT16_MAX;
int8_t x616 = INT8_MIN;
volatile uint64_t t79 = 58137703LLU;
int8_t x628 = INT8_MAX;
int32_t t80 = -1;
uint16_t x650 = UINT16_MAX;
int16_t x652 = -11591;
volatile int64_t x654 = 6117864004LL;
int16_t x655 = -1;
uint16_t x658 = UINT16_MAX;
int16_t x660 = -9;
int32_t x664 = 182;
uint64_t t89 = 25577672LLU;
volatile uint32_t x701 = 46486U;
uint64_t x704 = UINT64_MAX;
volatile uint32_t t91 = 2583902U;
static volatile int64_t x707 = 16LL;
uint32_t x708 = 15156050U;
int64_t t92 = -114LL;
static uint64_t t95 = 3960226LLU;
static uint64_t x755 = 92LLU;
static int32_t x756 = INT32_MAX;
static int8_t x758 = INT8_MAX;
uint32_t x780 = UINT32_MAX;
static int32_t x784 = -10225;
int16_t x786 = INT16_MIN;
volatile int32_t x788 = -12;
uint8_t x799 = 48U;
static volatile uint16_t x809 = 27654U;
static uint32_t t104 = 3308U;
uint32_t x821 = 7953U;
volatile int32_t t106 = -1;
int32_t t108 = 635;
volatile uint16_t x852 = 10359U;
static int32_t t110 = 641966;
int64_t x854 = -1LL;
int32_t t111 = -3564546;
int32_t t112 = 12;
int32_t x870 = INT32_MIN;
int8_t x875 = 4;
uint64_t x877 = 1488559563863575LLU;
int16_t x878 = INT16_MIN;
static volatile int8_t x880 = INT8_MAX;
volatile uint64_t t115 = 823864965180LLU;
int64_t t119 = -25LL;
volatile uint8_t x912 = UINT8_MAX;
volatile int8_t x914 = 58;
int16_t x915 = 7;
static uint64_t t121 = 7053LLU;
int32_t t123 = -43930603;
volatile int8_t x937 = INT8_MAX;
int32_t t125 = -116;
volatile uint16_t x945 = 6530U;
volatile int32_t t126 = -1983030;
int16_t x951 = -1;
int32_t x955 = -1;
volatile uint16_t x959 = 42U;
int16_t x962 = INT16_MIN;
int32_t t132 = 55;
volatile int64_t x984 = INT64_MIN;
static uint32_t x993 = 875040707U;
uint64_t x1001 = UINT64_MAX;
int16_t x1002 = INT16_MIN;
static uint16_t x1003 = UINT16_MAX;
static volatile int16_t x1007 = -1;
uint8_t x1008 = UINT8_MAX;
uint32_t x1021 = UINT32_MAX;
static int32_t x1024 = INT32_MIN;
uint16_t x1037 = UINT16_MAX;
static volatile uint64_t x1041 = 10LLU;
uint8_t x1049 = UINT8_MAX;
uint16_t x1050 = 6681U;
uint8_t x1052 = 3U;
int32_t t146 = -1;
int64_t x1068 = INT64_MIN;
int16_t x1081 = 672;
int8_t x1099 = INT8_MAX;
uint32_t t149 = 5429U;
int64_t x1111 = INT64_MAX;
volatile int32_t t151 = -78;
uint32_t x1129 = 25686769U;
uint16_t x1131 = 1U;
static uint32_t x1138 = 510496U;
static int16_t x1144 = INT16_MIN;
volatile int64_t x1147 = -964412177644LL;
int8_t x1151 = INT8_MIN;
int32_t t157 = 503;
volatile int16_t x1157 = 0;
uint16_t x1162 = 48U;
static volatile uint8_t x1165 = 31U;
int64_t x1168 = INT64_MIN;
volatile int32_t t163 = -12;
int8_t x1195 = INT8_MAX;
static int32_t t164 = 1148687;
int8_t x1200 = INT8_MAX;
int8_t x1203 = INT8_MIN;
static int32_t t166 = 179200;
static int8_t x1211 = INT8_MAX;
int32_t t167 = -198502398;
int64_t x1224 = 986LL;
volatile uint32_t x1225 = 3938388U;
volatile uint8_t x1249 = 76U;
uint32_t x1251 = 51U;
volatile int32_t t171 = 21257;
uint32_t x1266 = 1568U;
static int8_t x1267 = INT8_MIN;
volatile uint64_t t172 = 57926135524080LLU;
int16_t x1277 = INT16_MAX;
uint8_t x1293 = 2U;
int16_t x1295 = 9;
uint32_t x1309 = 13U;
volatile uint8_t x1312 = 1U;
volatile uint32_t t175 = 22401U;
volatile uint64_t x1313 = 26013179748049242LLU;
uint8_t x1335 = 0U;
uint32_t x1343 = 6U;
uint32_t x1350 = 31801138U;
static uint64_t t180 = 6085LLU;
static uint8_t x1389 = UINT8_MAX;
uint32_t x1392 = UINT32_MAX;
int16_t x1402 = -1;
volatile uint8_t x1403 = 17U;
uint64_t x1413 = 134230911226LLU;
static uint8_t x1415 = 2U;
uint64_t x1416 = 503020594682504LLU;
int64_t x1431 = -286396LL;
int8_t x1434 = INT8_MIN;
uint32_t x1436 = 1918999904U;
uint32_t t188 = 4526345U;
uint8_t x1465 = 21U;
uint8_t x1480 = 19U;
int32_t t193 = 93;
volatile uint8_t x1509 = 1U;
static int16_t x1510 = INT16_MAX;
volatile int32_t x1512 = -119706;
volatile int32_t t195 = -273235;
static uint64_t x1541 = 9424204532675782LLU;


void f0(void) {
    	int8_t x5 = 0;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 954LLU;
	int32_t t0 = -49903012;

    t0 = (x5<<((x6^x7)!=x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x9 = 88U;
	static uint16_t x11 = 18937U;
	int16_t x12 = -14;
	int32_t t1 = -20839511;

    t1 = (x9<<((x10^x11)!=x12));

    if (t1 != 176) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x14 = -7;
	static int16_t x15 = -1;
	static int32_t x16 = -1;

    t2 = (x13<<((x14^x15)!=x16));

    if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 41674826516LLU;
	uint32_t x18 = UINT32_MAX;
	volatile int16_t x19 = INT16_MIN;
	uint64_t x20 = 120042LLU;
	uint64_t t3 = 18636198072LLU;

    t3 = (x17<<((x18^x19)!=x20));

    if (t3 != 83349653032LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = UINT64_MAX;
	static int32_t x22 = -1;
	static uint32_t x23 = 182581U;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t4 = 2LLU;

    t4 = (x21<<((x22^x23)!=x24));

    if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x34 = 14592920U;
	volatile int8_t x35 = INT8_MAX;
	uint8_t x36 = 4U;

    t5 = (x33<<((x34^x35)!=x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x41 = 1981;
	static int16_t x42 = 46;
	volatile int32_t t6 = 6513;

    t6 = (x41<<((x42^x43)!=x44));

    if (t6 != 3962) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = 9;
	volatile uint32_t x46 = 422U;
	int64_t x47 = -1990306378745760941LL;
	int8_t x48 = -49;

    t7 = (x45<<((x46^x47)!=x48));

    if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = 2899;
	uint64_t x50 = 4536125546986LLU;
	int16_t x51 = -4;

    t8 = (x49<<((x50^x51)!=x52));

    if (t8 != 5798) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x57 = 10U;
	int64_t x58 = -1LL;
	int32_t x60 = INT32_MIN;
	volatile uint32_t t9 = 12203U;

    t9 = (x57<<((x58^x59)!=x60));

    if (t9 != 20U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x69 = 421947764414677478LLU;
	uint16_t x70 = 20U;
	static volatile uint32_t x72 = 13281U;
	uint64_t t10 = 879364107580LLU;

    t10 = (x69<<((x70^x71)!=x72));

    if (t10 != 843895528829354956LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x89 = 2893U;
	static int16_t x91 = 174;
	static volatile uint32_t t11 = 5U;

    t11 = (x89<<((x90^x91)!=x92));

    if (t11 != 5786U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x105 = 8U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t12 = 23681813;

    t12 = (x105<<((x106^x107)!=x108));

    if (t12 != 16) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x110 = INT32_MIN;
	uint64_t x112 = 7392LLU;
	static volatile int32_t t13 = 3;

    t13 = (x109<<((x110^x111)!=x112));

    if (t13 != 48) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x113 = 2025U;
	int64_t x114 = 15348LL;
	uint8_t x115 = UINT8_MAX;
	static int64_t x116 = INT64_MIN;

    t14 = (x113<<((x114^x115)!=x116));

    if (t14 != 4050) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x118 = INT8_MIN;
	static int8_t x119 = -1;
	volatile uint16_t x120 = 2010U;
	int32_t t15 = 1;

    t15 = (x117<<((x118^x119)!=x120));

    if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x121 = 1453831607U;
	int16_t x122 = INT16_MAX;
	uint16_t x123 = 7374U;
	int8_t x124 = INT8_MIN;
	volatile uint32_t t16 = 0U;

    t16 = (x121<<((x122^x123)!=x124));

    if (t16 != 2907663214U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x133 = 3U;
	int16_t x134 = INT16_MAX;
	static volatile uint8_t x135 = 4U;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t17 = 4429478;

    t17 = (x133<<((x134^x135)!=x136));

    if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int64_t x142 = -87950970723LL;
	int64_t x143 = INT64_MIN;
	int32_t x144 = -1;
	int32_t t18 = 7199;

    t18 = (x141<<((x142^x143)!=x144));

    if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x145 = 8U;
	int16_t x146 = -9;
	int16_t x147 = INT16_MIN;
	volatile int32_t x148 = -1;
	static volatile uint32_t t19 = 24829467U;

    t19 = (x145<<((x146^x147)!=x148));

    if (t19 != 16U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x157 = 9U;
	int16_t x158 = INT16_MIN;
	static int16_t x160 = INT16_MIN;
	int32_t t20 = 208181066;

    t20 = (x157<<((x158^x159)!=x160));

    if (t20 != 18) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x163 = 378;

    t21 = (x161<<((x162^x163)!=x164));

    if (t21 != 4294967294U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x166 = 226LLU;
	static volatile int32_t x168 = INT32_MIN;
	int32_t t22 = 0;

    t22 = (x165<<((x166^x167)!=x168));

    if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x181 = INT8_MAX;
	volatile int32_t x182 = 2690948;
	int64_t x183 = INT64_MIN;
	static volatile int64_t x184 = INT64_MAX;
	static int32_t t23 = 5192288;

    t23 = (x181<<((x182^x183)!=x184));

    if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x193 = 1U;
	int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MAX;
	int32_t t24 = 791;

    t24 = (x193<<((x194^x195)!=x196));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x198 = 7282U;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = 12844;
	int32_t t25 = 5241;

    t25 = (x197<<((x198^x199)!=x200));

    if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x201 = UINT16_MAX;
	int64_t x202 = -1LL;
	int64_t x203 = INT64_MIN;
	static uint32_t x204 = 2U;

    t26 = (x201<<((x202^x203)!=x204));

    if (t26 != 131070) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1;
	int64_t x211 = -1LL;
	volatile int32_t t27 = -12;

    t27 = (x209<<((x210^x211)!=x212));

    if (t27 != 131070) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x245 = 69U;
	int8_t x246 = -1;
	int64_t x247 = -987872731LL;
	volatile uint64_t x248 = UINT64_MAX;
	volatile int32_t t28 = 6400;

    t28 = (x245<<((x246^x247)!=x248));

    if (t28 != 138) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x250 = INT32_MIN;
	volatile int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -7;
	volatile int32_t t29 = 613192708;

    t29 = (x249<<((x250^x251)!=x252));

    if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x261 = 0U;
	uint8_t x262 = 10U;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = -1;
	volatile int32_t t30 = 0;

    t30 = (x261<<((x262^x263)!=x264));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x265 = 10U;
	int32_t x267 = INT32_MAX;
	int32_t x268 = -1;
	volatile int32_t t31 = -9610075;

    t31 = (x265<<((x266^x267)!=x268));

    if (t31 != 20) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x273 = UINT16_MAX;
	int8_t x274 = -1;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	int32_t t32 = 3;

    t32 = (x273<<((x274^x275)!=x276));

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = 0;
	volatile int8_t x279 = -1;
	int32_t t33 = -13;

    t33 = (x277<<((x278^x279)!=x280));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x281 = 20U;
	int64_t x284 = INT64_MIN;
	static int32_t t34 = -531606;

    t34 = (x281<<((x282^x283)!=x284));

    if (t34 != 40) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile int64_t x291 = -764482499399LL;
	static uint16_t x292 = UINT16_MAX;
	static int32_t t35 = -178899948;

    t35 = (x289<<((x290^x291)!=x292));

    if (t35 != 131070) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x293 = 61U;
	int16_t x294 = -361;
	volatile uint16_t x296 = 19183U;

    t36 = (x293<<((x294^x295)!=x296));

    if (t36 != 122) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x297 = 0U;
	int64_t x298 = INT64_MAX;
	static volatile int8_t x299 = -1;
	int16_t x300 = -1;
	int32_t t37 = 1;

    t37 = (x297<<((x298^x299)!=x300));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x305 = 9U;
	int16_t x307 = 3607;

    t38 = (x305<<((x306^x307)!=x308));

    if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x313 = 61U;
	volatile uint32_t x314 = 6U;
	int16_t x316 = 2315;
	volatile int32_t t39 = -899;

    t39 = (x313<<((x314^x315)!=x316));

    if (t39 != 122) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x329 = UINT64_MAX;
	uint32_t x330 = 1067280955U;
	int16_t x331 = INT16_MIN;
	volatile uint64_t t40 = 1488986720381LLU;

    t40 = (x329<<((x330^x331)!=x332));

    if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x333 = UINT64_MAX;
	volatile uint16_t x336 = UINT16_MAX;

    t41 = (x333<<((x334^x335)!=x336));

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x337 = 2364447LL;
	static int8_t x338 = -1;
	volatile uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 52U;

    t42 = (x337<<((x338^x339)!=x340));

    if (t42 != 4728894LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x342 = 0;
	static int64_t x344 = INT64_MIN;
	volatile uint32_t t43 = 18452178U;

    t43 = (x341<<((x342^x343)!=x344));

    if (t43 != 6U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x345 = 24646861859149LLU;
	int16_t x347 = -1;
	int64_t x348 = -9384LL;
	uint64_t t44 = 6039757399833171LLU;

    t44 = (x345<<((x346^x347)!=x348));

    if (t44 != 49293723718298LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x357 = 11;
	volatile int64_t x358 = INT64_MAX;
	uint16_t x359 = 29U;
	volatile int32_t t45 = 6;

    t45 = (x357<<((x358^x359)!=x360));

    if (t45 != 22) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 10887U;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	uint32_t t46 = 1810492U;

    t46 = (x361<<((x362^x363)!=x364));

    if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x372 = -1;
	uint32_t t47 = 1U;

    t47 = (x369<<((x370^x371)!=x372));

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x377 = 8457103454354675LLU;
	volatile int64_t x378 = -1LL;
	static uint8_t x379 = UINT8_MAX;
	volatile uint64_t x380 = 11497LLU;

    t48 = (x377<<((x378^x379)!=x380));

    if (t48 != 16914206908709350LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x389 = UINT8_MAX;
	int16_t x390 = 0;
	static volatile int64_t x391 = 3704331865LL;
	int8_t x392 = -1;
	volatile int32_t t49 = -6472;

    t49 = (x389<<((x390^x391)!=x392));

    if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x393 = 783U;
	volatile uint32_t x394 = 363743691U;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	static int32_t t50 = 1;

    t50 = (x393<<((x394^x395)!=x396));

    if (t50 != 1566) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x397 = 61;
	int64_t x398 = 2484104165833LL;
	int16_t x399 = -441;
	uint16_t x400 = UINT16_MAX;

    t51 = (x397<<((x398^x399)!=x400));

    if (t51 != 122) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x409 = 0U;
	int64_t x410 = 40LL;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = -1;

    t52 = (x409<<((x410^x411)!=x412));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x413 = INT16_MAX;
	volatile uint64_t x414 = 2032LLU;
	static int64_t x415 = INT64_MIN;
	uint16_t x416 = 12957U;
	volatile int32_t t53 = -220;

    t53 = (x413<<((x414^x415)!=x416));

    if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x429 = INT16_MAX;
	uint32_t x430 = 46664U;
	volatile int8_t x431 = -22;
	uint8_t x432 = UINT8_MAX;
	int32_t t54 = -52407;

    t54 = (x429<<((x430^x431)!=x432));

    if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x437 = 15090U;
	static int32_t x438 = INT32_MIN;
	static int8_t x440 = 0;
	int32_t t55 = -28440195;

    t55 = (x437<<((x438^x439)!=x440));

    if (t55 != 30180) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x449 = 24U;
	int64_t x452 = 12259524971801LL;
	int32_t t56 = -1;

    t56 = (x449<<((x450^x451)!=x452));

    if (t56 != 48) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MAX;
	uint32_t x459 = UINT32_MAX;
	uint64_t x460 = UINT64_MAX;
	volatile int32_t t57 = 3692;

    t57 = (x457<<((x458^x459)!=x460));

    if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x461 = 18U;
	int8_t x463 = INT8_MIN;
	static int64_t x464 = INT64_MIN;
	uint32_t t58 = 56U;

    t58 = (x461<<((x462^x463)!=x464));

    if (t58 != 36U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MIN;
	static int8_t x471 = -14;
	uint8_t x472 = UINT8_MAX;
	int32_t t59 = -4757;

    t59 = (x469<<((x470^x471)!=x472));

    if (t59 != 510) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x497 = 0;
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MIN;
	int32_t t60 = 2853;

    t60 = (x497<<((x498^x499)!=x500));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x505 = 3351U;
	int32_t x506 = 198;
	int8_t x507 = INT8_MIN;
	volatile uint16_t x508 = 4U;
	int32_t t61 = -451508012;

    t61 = (x505<<((x506^x507)!=x508));

    if (t61 != 6702) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x521 = UINT64_MAX;
	uint64_t x523 = 1LLU;
	static uint8_t x524 = 31U;
	uint64_t t62 = 62451363518987LLU;

    t62 = (x521<<((x522^x523)!=x524));

    if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	int64_t x527 = INT64_MAX;
	int16_t x528 = -1;
	volatile int32_t t63 = 474;

    t63 = (x525<<((x526^x527)!=x528));

    if (t63 != 131070) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x530 = INT32_MIN;
	uint16_t x531 = 1688U;
	volatile uint32_t x532 = 0U;
	int32_t t64 = -385648;

    t64 = (x529<<((x530^x531)!=x532));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x533 = 7;
	static uint32_t x534 = UINT32_MAX;
	uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 61U;
	volatile int32_t t65 = 3031;

    t65 = (x533<<((x534^x535)!=x536));

    if (t65 != 14) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x538 = INT16_MIN;
	uint32_t x539 = 78146U;
	int64_t x540 = INT64_MIN;
	static volatile uint32_t t66 = 5307587U;

    t66 = (x537<<((x538^x539)!=x540));

    if (t66 != 711271736U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x541 = UINT32_MAX;
	int8_t x542 = INT8_MIN;
	volatile int32_t x543 = INT32_MAX;
	int32_t x544 = INT32_MIN;
	volatile uint32_t t67 = 0U;

    t67 = (x541<<((x542^x543)!=x544));

    if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	volatile int32_t x552 = INT32_MAX;

    t68 = (x549<<((x550^x551)!=x552));

    if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x553 = 2LL;
	int8_t x554 = -28;
	uint8_t x555 = 0U;
	static int64_t t69 = 18422LL;

    t69 = (x553<<((x554^x555)!=x556));

    if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x559 = UINT8_MAX;
	volatile int16_t x560 = 194;
	static int32_t t70 = -21450;

    t70 = (x557<<((x558^x559)!=x560));

    if (t70 != 181002) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x561 = 7U;
	int64_t x562 = INT64_MIN;
	static uint32_t x563 = 779U;
	int16_t x564 = INT16_MIN;

    t71 = (x561<<((x562^x563)!=x564));

    if (t71 != 14) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x565 = UINT32_MAX;
	static int32_t x567 = -22422745;
	static volatile uint64_t x568 = 26450080522884LLU;
	volatile uint32_t t72 = 324267U;

    t72 = (x565<<((x566^x567)!=x568));

    if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x575 = UINT64_MAX;
	int8_t x576 = 1;
	static int32_t t73 = 3786;

    t73 = (x573<<((x574^x575)!=x576));

    if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x578 = -1131516;
	int32_t x579 = INT32_MIN;
	static int16_t x580 = INT16_MIN;
	static int32_t t74 = -69;

    t74 = (x577<<((x578^x579)!=x580));

    if (t74 != 131070) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x581 = 708570272416LLU;
	static volatile int16_t x583 = -1;
	int16_t x584 = -11077;
	uint64_t t75 = 3301116925108LLU;

    t75 = (x581<<((x582^x583)!=x584));

    if (t75 != 1417140544832LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x593 = 17074U;
	static int8_t x594 = INT8_MAX;
	int64_t x596 = INT64_MIN;
	uint32_t t76 = 92U;

    t76 = (x593<<((x594^x595)!=x596));

    if (t76 != 34148U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x606 = INT32_MAX;
	int16_t x607 = -8;
	volatile int8_t x608 = INT8_MIN;
	int32_t t77 = -47248353;

    t77 = (x605<<((x606^x607)!=x608));

    if (t77 != 116) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x613 = 1U;
	uint16_t x614 = UINT16_MAX;
	int32_t t78 = 20567679;

    t78 = (x613<<((x614^x615)!=x616));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x621 = 271601833618463140LLU;
	int64_t x622 = INT64_MIN;
	volatile uint32_t x623 = 369419U;
	int16_t x624 = INT16_MIN;

    t79 = (x621<<((x622^x623)!=x624));

    if (t79 != 543203667236926280LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x625 = 3U;
	int8_t x626 = INT8_MIN;
	uint16_t x627 = 20661U;

    t80 = (x625<<((x626^x627)!=x628));

    if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x629 = 941616384832934660LL;
	uint64_t x630 = 2811428549393LLU;
	int16_t x631 = 249;
	volatile uint16_t x632 = 10U;
	static volatile int64_t t81 = -35378636120942720LL;

    t81 = (x629<<((x630^x631)!=x632));

    if (t81 != 1883232769665869320LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x641 = 8769U;
	static uint16_t x642 = 21306U;
	uint16_t x643 = 7888U;
	static int8_t x644 = -56;
	int32_t t82 = 31779861;

    t82 = (x641<<((x642^x643)!=x644));

    if (t82 != 17538) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x649 = 112096856U;
	int8_t x651 = 4;
	volatile uint32_t t83 = 294503239U;

    t83 = (x649<<((x650^x651)!=x652));

    if (t83 != 224193712U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x653 = 829239LL;
	int32_t x656 = INT32_MAX;
	int64_t t84 = 25208827421201LL;

    t84 = (x653<<((x654^x655)!=x656));

    if (t84 != 1658478LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x657 = 261494842U;
	static int64_t x659 = INT64_MIN;
	volatile uint32_t t85 = 568556U;

    t85 = (x657<<((x658^x659)!=x660));

    if (t85 != 522989684U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x661 = INT16_MAX;
	int64_t x662 = INT64_MIN;
	int32_t x663 = -15983221;
	volatile int32_t t86 = 18542;

    t86 = (x661<<((x662^x663)!=x664));

    if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x673 = 215671U;
	int64_t x674 = 85LL;
	uint64_t x675 = 108742069943LLU;
	static volatile int16_t x676 = -1;
	volatile uint32_t t87 = 1U;

    t87 = (x673<<((x674^x675)!=x676));

    if (t87 != 431342U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x685 = 41607714209733605LL;
	volatile int8_t x686 = INT8_MAX;
	static int64_t x687 = -710639744284608859LL;
	int64_t x688 = INT64_MIN;
	volatile int64_t t88 = -251809604860190439LL;

    t88 = (x685<<((x686^x687)!=x688));

    if (t88 != 83215428419467210LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x689 = 2588336LLU;
	int32_t x690 = 561611631;
	int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;

    t89 = (x689<<((x690^x691)!=x692));

    if (t89 != 5176672LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x697 = INT8_MAX;
	int16_t x698 = INT16_MAX;
	volatile int8_t x699 = INT8_MAX;
	static int64_t x700 = 155245877850605LL;
	volatile int32_t t90 = 249027;

    t90 = (x697<<((x698^x699)!=x700));

    if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x702 = -1;
	int64_t x703 = -35872926925168LL;

    t91 = (x701<<((x702^x703)!=x704));

    if (t91 != 92972U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x705 = 24584600662375LL;
	int64_t x706 = INT64_MIN;

    t92 = (x705<<((x706^x707)!=x708));

    if (t92 != 49169201324750LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x709 = 1U;
	int64_t x710 = INT64_MAX;
	int32_t x711 = -209;
	uint16_t x712 = 0U;
	volatile int32_t t93 = 306103074;

    t93 = (x709<<((x710^x711)!=x712));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x717 = 7U;
	static int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	static int16_t x720 = 62;
	volatile int32_t t94 = -140;

    t94 = (x717<<((x718^x719)!=x720));

    if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint32_t x730 = 744369U;
	int64_t x731 = 5776LL;
	volatile int8_t x732 = INT8_MIN;

    t95 = (x729<<((x730^x731)!=x732));

    if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x753 = 3U;
	int8_t x754 = -2;
	volatile int32_t t96 = 38864185;

    t96 = (x753<<((x754^x755)!=x756));

    if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x757 = 90U;
	int32_t x759 = 60379;
	static volatile uint8_t x760 = UINT8_MAX;
	volatile int32_t t97 = 1;

    t97 = (x757<<((x758^x759)!=x760));

    if (t97 != 180) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x773 = 0U;
	int8_t x774 = 0;
	volatile int32_t x775 = INT32_MIN;
	static uint64_t x776 = 752169455385922LLU;
	volatile int32_t t98 = 20;

    t98 = (x773<<((x774^x775)!=x776));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x777 = 9424606U;
	uint64_t x778 = 9285863957604LLU;
	uint8_t x779 = 7U;
	uint32_t t99 = 30349U;

    t99 = (x777<<((x778^x779)!=x780));

    if (t99 != 18849212U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x781 = 31U;
	int8_t x782 = INT8_MAX;
	static volatile int32_t x783 = -1;
	int32_t t100 = -2923830;

    t100 = (x781<<((x782^x783)!=x784));

    if (t100 != 62) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x785 = 71U;
	volatile int64_t x787 = INT64_MAX;
	int32_t t101 = 1319;

    t101 = (x785<<((x786^x787)!=x788));

    if (t101 != 142) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x797 = 423LL;
	volatile int8_t x798 = -1;
	volatile int64_t x800 = INT64_MIN;
	int64_t t102 = -218151752176699LL;

    t102 = (x797<<((x798^x799)!=x800));

    if (t102 != 846LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x810 = 24;
	static int32_t x811 = INT32_MIN;
	static int16_t x812 = 0;
	int32_t t103 = -1;

    t103 = (x809<<((x810^x811)!=x812));

    if (t103 != 55308) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x813 = UINT32_MAX;
	int8_t x814 = -1;
	uint64_t x815 = 445332LLU;
	int16_t x816 = INT16_MIN;

    t104 = (x813<<((x814^x815)!=x816));

    if (t104 != 4294967294U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x822 = INT64_MAX;
	int8_t x823 = -8;
	int8_t x824 = INT8_MIN;
	volatile uint32_t t105 = 1680541248U;

    t105 = (x821<<((x822^x823)!=x824));

    if (t105 != 15906U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x825 = 23413U;
	volatile int32_t x826 = 123320;
	volatile int8_t x827 = INT8_MAX;
	int8_t x828 = INT8_MIN;

    t106 = (x825<<((x826^x827)!=x828));

    if (t106 != 46826) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x829 = UINT16_MAX;
	int64_t x830 = -1694732118LL;
	int32_t x831 = INT32_MAX;
	int16_t x832 = -1;
	static int32_t t107 = -71;

    t107 = (x829<<((x830^x831)!=x832));

    if (t107 != 131070) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x833 = UINT16_MAX;
	volatile int8_t x834 = -1;
	uint8_t x835 = 4U;
	int8_t x836 = 12;

    t108 = (x833<<((x834^x835)!=x836));

    if (t108 != 131070) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x845 = INT8_MAX;
	int16_t x846 = INT16_MAX;
	int8_t x847 = -8;
	int8_t x848 = -1;
	static volatile int32_t t109 = 60655382;

    t109 = (x845<<((x846^x847)!=x848));

    if (t109 != 254) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x849 = 20;
	static int32_t x850 = -1;
	uint8_t x851 = UINT8_MAX;

    t110 = (x849<<((x850^x851)!=x852));

    if (t110 != 40) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x853 = INT16_MAX;
	int8_t x855 = INT8_MIN;
	volatile uint8_t x856 = 1U;

    t111 = (x853<<((x854^x855)!=x856));

    if (t111 != 65534) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x865 = UINT16_MAX;
	static int64_t x866 = INT64_MAX;
	int8_t x867 = INT8_MAX;
	uint64_t x868 = UINT64_MAX;

    t112 = (x865<<((x866^x867)!=x868));

    if (t112 != 131070) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x869 = UINT8_MAX;
	static int8_t x871 = INT8_MIN;
	static int64_t x872 = INT64_MIN;
	int32_t t113 = 2541440;

    t113 = (x869<<((x870^x871)!=x872));

    if (t113 != 510) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x873 = 15;
	int8_t x874 = INT8_MIN;
	int16_t x876 = INT16_MAX;
	int32_t t114 = 5;

    t114 = (x873<<((x874^x875)!=x876));

    if (t114 != 30) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x879 = INT16_MIN;

    t115 = (x877<<((x878^x879)!=x880));

    if (t115 != 2977119127727150LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x885 = 21724670794LLU;
	volatile int16_t x886 = 2;
	int8_t x887 = INT8_MAX;
	int8_t x888 = -1;
	volatile uint64_t t116 = 316282735455LLU;

    t116 = (x885<<((x886^x887)!=x888));

    if (t116 != 43449341588LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x893 = 38;
	static volatile int16_t x894 = INT16_MIN;
	static int16_t x895 = -6361;
	int8_t x896 = 2;
	int32_t t117 = 37295746;

    t117 = (x893<<((x894^x895)!=x896));

    if (t117 != 76) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x897 = 507854785321546075LLU;
	uint32_t x898 = 497923965U;
	volatile int8_t x899 = INT8_MIN;
	uint32_t x900 = 273U;
	uint64_t t118 = 49960898765790LLU;

    t118 = (x897<<((x898^x899)!=x900));

    if (t118 != 1015709570643092150LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x901 = 1312985LL;
	int16_t x902 = 707;
	static uint64_t x903 = 56725LLU;
	static int8_t x904 = 1;

    t119 = (x901<<((x902^x903)!=x904));

    if (t119 != 2625970LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x909 = 104;
	uint64_t x910 = 222549466LLU;
	volatile int32_t x911 = INT32_MIN;
	volatile int32_t t120 = -1436641;

    t120 = (x909<<((x910^x911)!=x912));

    if (t120 != 208) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x913 = 167472LLU;
	int16_t x916 = -3442;

    t121 = (x913<<((x914^x915)!=x916));

    if (t121 != 334944LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x917 = 0U;
	static int8_t x918 = INT8_MAX;
	int32_t x919 = -75293384;
	uint8_t x920 = 14U;
	int32_t t122 = 10211;

    t122 = (x917<<((x918^x919)!=x920));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x921 = 1;
	uint32_t x922 = 7U;
	volatile int32_t x923 = INT32_MAX;
	static int8_t x924 = -12;

    t123 = (x921<<((x922^x923)!=x924));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x933 = INT8_MAX;
	static volatile int8_t x934 = INT8_MIN;
	int32_t x935 = -1878;
	uint64_t x936 = 24685949460549LLU;
	static int32_t t124 = -5615;

    t124 = (x933<<((x934^x935)!=x936));

    if (t124 != 254) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x938 = INT16_MAX;
	int8_t x939 = 1;
	uint8_t x940 = 109U;

    t125 = (x937<<((x938^x939)!=x940));

    if (t125 != 254) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x946 = INT32_MIN;
	uint32_t x947 = 127U;
	static volatile int32_t x948 = -1;

    t126 = (x945<<((x946^x947)!=x948));

    if (t126 != 13060) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x949 = INT16_MAX;
	static volatile int64_t x950 = INT64_MIN;
	int32_t x952 = -1;
	volatile int32_t t127 = -37793;

    t127 = (x949<<((x950^x951)!=x952));

    if (t127 != 65534) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x953 = INT8_MAX;
	int8_t x954 = INT8_MIN;
	uint32_t x956 = UINT32_MAX;
	int32_t t128 = 923310785;

    t128 = (x953<<((x954^x955)!=x956));

    if (t128 != 254) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x957 = 108;
	volatile int32_t x958 = 61;
	volatile uint64_t x960 = 758655457541LLU;
	volatile int32_t t129 = 393312899;

    t129 = (x957<<((x958^x959)!=x960));

    if (t129 != 216) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x961 = INT8_MAX;
	int16_t x963 = INT16_MIN;
	static volatile int8_t x964 = 7;
	volatile int32_t t130 = 114944;

    t130 = (x961<<((x962^x963)!=x964));

    if (t130 != 254) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x973 = 0;
	int8_t x974 = -3;
	uint8_t x975 = 6U;
	int8_t x976 = INT8_MIN;
	int32_t t131 = -19165022;

    t131 = (x973<<((x974^x975)!=x976));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x977 = INT16_MAX;
	int16_t x978 = -1;
	volatile int8_t x979 = INT8_MIN;
	int16_t x980 = -507;

    t132 = (x977<<((x978^x979)!=x980));

    if (t132 != 65534) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x981 = 738385228969654LLU;
	static int32_t x982 = INT32_MIN;
	volatile int32_t x983 = INT32_MAX;
	uint64_t t133 = 49696357276221920LLU;

    t133 = (x981<<((x982^x983)!=x984));

    if (t133 != 1476770457939308LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x994 = 8;
	int32_t x995 = -551167474;
	int32_t x996 = -1837;
	volatile uint32_t t134 = 1687U;

    t134 = (x993<<((x994^x995)!=x996));

    if (t134 != 1750081414U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x997 = 99LLU;
	volatile uint64_t x998 = 23833889LLU;
	uint64_t x999 = 263671LLU;
	int8_t x1000 = INT8_MIN;
	static uint64_t t135 = 1314821068615LLU;

    t135 = (x997<<((x998^x999)!=x1000));

    if (t135 != 198LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1004 = 158743LLU;
	volatile uint64_t t136 = 79788LLU;

    t136 = (x1001<<((x1002^x1003)!=x1004));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1005 = 1U;
	uint32_t x1006 = UINT32_MAX;
	int32_t t137 = -4;

    t137 = (x1005<<((x1006^x1007)!=x1008));

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1009 = 54U;
	int8_t x1010 = INT8_MIN;
	uint64_t x1011 = 602887814433LLU;
	uint32_t x1012 = 97910569U;
	volatile uint32_t t138 = 29733733U;

    t138 = (x1009<<((x1010^x1011)!=x1012));

    if (t138 != 108U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1022 = INT32_MIN;
	volatile uint64_t x1023 = 535270983LLU;
	static volatile uint32_t t139 = 124U;

    t139 = (x1021<<((x1022^x1023)!=x1024));

    if (t139 != 4294967294U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	uint16_t x1026 = 2734U;
	uint16_t x1027 = 7813U;
	volatile int8_t x1028 = -60;
	volatile int32_t t140 = -1;

    t140 = (x1025<<((x1026^x1027)!=x1028));

    if (t140 != 510) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1029 = 74569546675852529LLU;
	uint8_t x1030 = 1U;
	int16_t x1031 = INT16_MAX;
	volatile int32_t x1032 = INT32_MAX;
	volatile uint64_t t141 = 2857357LLU;

    t141 = (x1029<<((x1030^x1031)!=x1032));

    if (t141 != 149139093351705058LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1038 = -3;
	int64_t x1039 = 21881187732491367LL;
	volatile int64_t x1040 = INT64_MIN;
	static volatile int32_t t142 = 14987;

    t142 = (x1037<<((x1038^x1039)!=x1040));

    if (t142 != 131070) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1042 = 2032960268LLU;
	int64_t x1043 = 15LL;
	volatile int16_t x1044 = -1;
	static volatile uint64_t t143 = 1974650060300614LLU;

    t143 = (x1041<<((x1042^x1043)!=x1044));

    if (t143 != 20LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1045 = INT8_MAX;
	int16_t x1046 = -3;
	int8_t x1047 = 1;
	volatile uint8_t x1048 = 61U;
	volatile int32_t t144 = -546;

    t144 = (x1045<<((x1046^x1047)!=x1048));

    if (t144 != 254) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1051 = INT64_MAX;
	int32_t t145 = -381943;

    t145 = (x1049<<((x1050^x1051)!=x1052));

    if (t145 != 510) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x1053 = 4576;
	volatile int32_t x1054 = 1;
	static int8_t x1055 = 1;
	uint8_t x1056 = UINT8_MAX;

    t146 = (x1053<<((x1054^x1055)!=x1056));

    if (t146 != 9152) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1065 = INT8_MAX;
	int64_t x1066 = INT64_MAX;
	int8_t x1067 = INT8_MIN;
	int32_t t147 = 14;

    t147 = (x1065<<((x1066^x1067)!=x1068));

    if (t147 != 254) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1082 = 83;
	uint32_t x1083 = UINT32_MAX;
	int32_t x1084 = INT32_MIN;
	int32_t t148 = 0;

    t148 = (x1081<<((x1082^x1083)!=x1084));

    if (t148 != 1344) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1097 = UINT32_MAX;
	volatile uint8_t x1098 = 3U;
	static int8_t x1100 = -1;

    t149 = (x1097<<((x1098^x1099)!=x1100));

    if (t149 != 4294967294U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1109 = 2312U;
	volatile int32_t x1110 = 1406529;
	uint16_t x1112 = 2772U;
	uint32_t t150 = 42U;

    t150 = (x1109<<((x1110^x1111)!=x1112));

    if (t150 != 4624U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1113 = 28U;
	int64_t x1114 = -1LL;
	uint8_t x1115 = 77U;
	int64_t x1116 = -89830257LL;

    t151 = (x1113<<((x1114^x1115)!=x1116));

    if (t151 != 56) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1130 = UINT8_MAX;
	static uint64_t x1132 = 754292040LLU;
	uint32_t t152 = 4U;

    t152 = (x1129<<((x1130^x1131)!=x1132));

    if (t152 != 51373538U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1133 = 1LLU;
	int32_t x1134 = INT32_MAX;
	static int32_t x1135 = -1;
	uint32_t x1136 = 24560U;
	uint64_t t153 = 183497LLU;

    t153 = (x1133<<((x1134^x1135)!=x1136));

    if (t153 != 2LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1137 = UINT32_MAX;
	volatile uint32_t x1139 = 417225U;
	static uint16_t x1140 = 1U;
	volatile uint32_t t154 = 13663697U;

    t154 = (x1137<<((x1138^x1139)!=x1140));

    if (t154 != 4294967294U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1141 = 44U;
	uint32_t x1142 = UINT32_MAX;
	int8_t x1143 = 63;
	volatile int32_t t155 = 37421025;

    t155 = (x1141<<((x1142^x1143)!=x1144));

    if (t155 != 88) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1145 = UINT16_MAX;
	int8_t x1146 = -1;
	uint64_t x1148 = 8664750558524LLU;
	int32_t t156 = -119551;

    t156 = (x1145<<((x1146^x1147)!=x1148));

    if (t156 != 131070) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1149 = 12U;
	int16_t x1150 = -806;
	volatile int32_t x1152 = INT32_MIN;

    t157 = (x1149<<((x1150^x1151)!=x1152));

    if (t157 != 24) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1158 = -1;
	int16_t x1159 = 1;
	uint32_t x1160 = UINT32_MAX;
	volatile int32_t t158 = 23297;

    t158 = (x1157<<((x1158^x1159)!=x1160));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1161 = 109104834U;
	static volatile int8_t x1163 = -30;
	static int64_t x1164 = 12LL;
	static volatile uint32_t t159 = 14U;

    t159 = (x1161<<((x1162^x1163)!=x1164));

    if (t159 != 218209668U) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x1166 = INT32_MIN;
	int16_t x1167 = INT16_MIN;
	volatile int32_t t160 = 5819047;

    t160 = (x1165<<((x1166^x1167)!=x1168));

    if (t160 != 62) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x1173 = UINT16_MAX;
	uint8_t x1174 = UINT8_MAX;
	int8_t x1175 = -1;
	int64_t x1176 = 1LL;
	volatile int32_t t161 = -15406303;

    t161 = (x1173<<((x1174^x1175)!=x1176));

    if (t161 != 131070) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1181 = 55400731;
	int64_t x1182 = -63293176201444LL;
	int32_t x1183 = INT32_MAX;
	static volatile int8_t x1184 = 13;
	int32_t t162 = 398;

    t162 = (x1181<<((x1182^x1183)!=x1184));

    if (t162 != 110801462) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x1185 = UINT8_MAX;
	volatile int64_t x1186 = -1LL;
	volatile uint64_t x1187 = UINT64_MAX;
	int8_t x1188 = INT8_MIN;

    t163 = (x1185<<((x1186^x1187)!=x1188));

    if (t163 != 510) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1193 = INT16_MAX;
	int32_t x1194 = INT32_MIN;
	int8_t x1196 = INT8_MIN;

    t164 = (x1193<<((x1194^x1195)!=x1196));

    if (t164 != 65534) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1197 = UINT16_MAX;
	int16_t x1198 = -12;
	volatile int8_t x1199 = -1;
	int32_t t165 = -182009198;

    t165 = (x1197<<((x1198^x1199)!=x1200));

    if (t165 != 131070) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1201 = 0U;
	int8_t x1202 = 3;
	uint64_t x1204 = 109LLU;

    t166 = (x1201<<((x1202^x1203)!=x1204));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1209 = 9873;
	int16_t x1210 = -1;
	uint8_t x1212 = 13U;

    t167 = (x1209<<((x1210^x1211)!=x1212));

    if (t167 != 19746) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1221 = 2U;
	int8_t x1222 = INT8_MIN;
	volatile int32_t x1223 = INT32_MIN;
	static volatile int32_t t168 = -163523746;

    t168 = (x1221<<((x1222^x1223)!=x1224));

    if (t168 != 4) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1226 = 655U;
	volatile uint32_t x1227 = UINT32_MAX;
	static volatile uint32_t x1228 = 45523619U;
	uint32_t t169 = 2916610U;

    t169 = (x1225<<((x1226^x1227)!=x1228));

    if (t169 != 7876776U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1237 = 1U;
	int64_t x1238 = INT64_MIN;
	int64_t x1239 = INT64_MAX;
	int16_t x1240 = -4542;
	volatile int32_t t170 = 1029827440;

    t170 = (x1237<<((x1238^x1239)!=x1240));

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1250 = 13099741478928975LL;
	volatile int32_t x1252 = -1;

    t171 = (x1249<<((x1250^x1251)!=x1252));

    if (t171 != 152) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1265 = 53996LLU;
	volatile int32_t x1268 = -1;

    t172 = (x1265<<((x1266^x1267)!=x1268));

    if (t172 != 107992LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1278 = UINT8_MAX;
	int32_t x1279 = -15338276;
	int32_t x1280 = -1656;
	volatile int32_t t173 = -1;

    t173 = (x1277<<((x1278^x1279)!=x1280));

    if (t173 != 65534) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1294 = 37892652LLU;
	uint64_t x1296 = 3667404797133LLU;
	int32_t t174 = 13;

    t174 = (x1293<<((x1294^x1295)!=x1296));

    if (t174 != 4) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x1310 = INT8_MAX;
	uint16_t x1311 = 0U;

    t175 = (x1309<<((x1310^x1311)!=x1312));

    if (t175 != 26U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1314 = INT32_MIN;
	int64_t x1315 = 31557029628LL;
	int8_t x1316 = INT8_MIN;
	volatile uint64_t t176 = 14301229900817729LLU;

    t176 = (x1313<<((x1314^x1315)!=x1316));

    if (t176 != 52026359496098484LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x1333 = 23U;
	int64_t x1334 = INT64_MAX;
	int64_t x1336 = INT64_MIN;
	static int32_t t177 = 702933722;

    t177 = (x1333<<((x1334^x1335)!=x1336));

    if (t177 != 46) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1341 = UINT64_MAX;
	int32_t x1342 = INT32_MIN;
	uint16_t x1344 = 31U;
	uint64_t t178 = 37947063LLU;

    t178 = (x1341<<((x1342^x1343)!=x1344));

    if (t178 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1349 = UINT64_MAX;
	uint32_t x1351 = 18U;
	int8_t x1352 = 1;
	uint64_t t179 = 4LLU;

    t179 = (x1349<<((x1350^x1351)!=x1352));

    if (t179 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x1357 = 0LLU;
	int32_t x1358 = -1;
	static int8_t x1359 = INT8_MIN;
	int32_t x1360 = -1;

    t180 = (x1357<<((x1358^x1359)!=x1360));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1361 = 1U;
	volatile int64_t x1362 = -844LL;
	int8_t x1363 = 0;
	volatile int8_t x1364 = -38;
	static volatile int32_t t181 = -36934;

    t181 = (x1361<<((x1362^x1363)!=x1364));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1390 = 329567133LLU;
	uint64_t x1391 = 627369642506889396LLU;
	int32_t t182 = 22;

    t182 = (x1389<<((x1390^x1391)!=x1392));

    if (t182 != 510) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1401 = 29U;
	uint8_t x1404 = 20U;
	int32_t t183 = 17646245;

    t183 = (x1401<<((x1402^x1403)!=x1404));

    if (t183 != 58) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1409 = 31LLU;
	int16_t x1410 = -1;
	volatile int64_t x1411 = INT64_MIN;
	int16_t x1412 = -5026;
	uint64_t t184 = 4466LLU;

    t184 = (x1409<<((x1410^x1411)!=x1412));

    if (t184 != 62LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1414 = 17U;
	volatile uint64_t t185 = 44816143050992180LLU;

    t185 = (x1413<<((x1414^x1415)!=x1416));

    if (t185 != 268461822452LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1421 = 1893045;
	static int8_t x1422 = INT8_MIN;
	static int32_t x1423 = -1;
	int64_t x1424 = -1LL;
	static volatile int32_t t186 = -97;

    t186 = (x1421<<((x1422^x1423)!=x1424));

    if (t186 != 3786090) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1429 = 274U;
	uint64_t x1430 = UINT64_MAX;
	int64_t x1432 = INT64_MAX;
	static volatile int32_t t187 = 10902337;

    t187 = (x1429<<((x1430^x1431)!=x1432));

    if (t187 != 548) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1433 = UINT32_MAX;
	static int64_t x1435 = INT64_MIN;

    t188 = (x1433<<((x1434^x1435)!=x1436));

    if (t188 != 4294967294U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x1441 = 7030895286697000584LLU;
	uint8_t x1442 = UINT8_MAX;
	static uint16_t x1443 = 8419U;
	volatile uint8_t x1444 = UINT8_MAX;
	volatile uint64_t t189 = 863LLU;

    t189 = (x1441<<((x1442^x1443)!=x1444));

    if (t189 != 14061790573394001168LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1461 = INT8_MAX;
	volatile int8_t x1462 = 2;
	int64_t x1463 = INT64_MAX;
	int32_t x1464 = INT32_MIN;
	volatile int32_t t190 = -95202;

    t190 = (x1461<<((x1462^x1463)!=x1464));

    if (t190 != 254) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1466 = INT32_MAX;
	int32_t x1467 = INT32_MAX;
	uint64_t x1468 = 19954794690604LLU;
	static int32_t t191 = 730;

    t191 = (x1465<<((x1466^x1467)!=x1468));

    if (t191 != 42) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1477 = UINT8_MAX;
	int32_t x1478 = INT32_MIN;
	int64_t x1479 = INT64_MAX;
	static int32_t t192 = -1;

    t192 = (x1477<<((x1478^x1479)!=x1480));

    if (t192 != 510) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1485 = 108U;
	uint16_t x1486 = UINT16_MAX;
	int64_t x1487 = 6766232462113232LL;
	int64_t x1488 = -1LL;

    t193 = (x1485<<((x1486^x1487)!=x1488));

    if (t193 != 216) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1489 = INT16_MAX;
	static int8_t x1490 = -50;
	uint32_t x1491 = UINT32_MAX;
	int32_t x1492 = -761949551;
	static int32_t t194 = 14374130;

    t194 = (x1489<<((x1490^x1491)!=x1492));

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1511 = 167042U;

    t195 = (x1509<<((x1510^x1511)!=x1512));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1513 = 13780U;
	uint32_t x1514 = 413563301U;
	static int8_t x1515 = -1;
	static int64_t x1516 = INT64_MIN;
	volatile int32_t t196 = -44640;

    t196 = (x1513<<((x1514^x1515)!=x1516));

    if (t196 != 27560) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1521 = INT16_MAX;
	static uint32_t x1522 = 15U;
	static uint64_t x1523 = UINT64_MAX;
	int8_t x1524 = 49;
	static volatile int32_t t197 = 0;

    t197 = (x1521<<((x1522^x1523)!=x1524));

    if (t197 != 65534) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1537 = 62679802LLU;
	int8_t x1538 = -1;
	static volatile uint32_t x1539 = UINT32_MAX;
	static int16_t x1540 = -29;
	static volatile uint64_t t198 = 882LLU;

    t198 = (x1537<<((x1538^x1539)!=x1540));

    if (t198 != 125359604LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x1542 = 15U;
	volatile int32_t x1543 = -1;
	int8_t x1544 = 51;
	uint64_t t199 = 30728638LLU;

    t199 = (x1541<<((x1542^x1543)!=x1544));

    if (t199 != 18848409065351564LLU) { NG(); } else { ; }
	
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

