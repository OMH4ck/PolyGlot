
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

static int16_t x3 = INT16_MIN;
static volatile int32_t x35 = INT32_MAX;
static int32_t x36 = INT32_MIN;
volatile int64_t x45 = -33190696LL;
int32_t x56 = INT32_MIN;
uint16_t x58 = UINT16_MAX;
static int64_t x69 = -5229LL;
int64_t x78 = INT64_MAX;
int64_t x79 = 3LL;
static int8_t x91 = INT8_MIN;
int32_t x144 = -104784668;
volatile int32_t x146 = 5506452;
volatile uint64_t t13 = 702499449317256931LLU;
int64_t x165 = -4384150919298LL;
volatile int16_t x166 = INT16_MIN;
int8_t x169 = INT8_MIN;
int8_t x172 = -43;
static int8_t x179 = INT8_MIN;
uint16_t x191 = UINT16_MAX;
int16_t x193 = -1;
int8_t x217 = -1;
int64_t x219 = INT64_MIN;
volatile int32_t x248 = -66318;
int32_t t24 = -86860854;
int64_t x271 = INT64_MIN;
int64_t x274 = -6913613766LL;
volatile int32_t t28 = -843732;
static uint32_t x301 = 85U;
uint8_t x302 = UINT8_MAX;
volatile uint32_t x303 = 1523125U;
static int32_t t31 = 5647658;
static int64_t x331 = -1LL;
volatile int64_t x336 = -75459713412LL;
int32_t t33 = 5;
uint32_t x376 = 0U;
int16_t x395 = INT16_MIN;
volatile int64_t t38 = 565074520LL;
int64_t x423 = -1LL;
static int64_t x424 = INT64_MIN;
int16_t x442 = INT16_MIN;
uint16_t x475 = UINT16_MAX;
int16_t x477 = -6778;
uint16_t x481 = 26U;
static uint64_t x482 = UINT64_MAX;
volatile int32_t t47 = -381813176;
volatile int32_t t48 = -59861;
int32_t x529 = INT32_MIN;
int64_t x532 = -1238138LL;
int16_t x533 = -5621;
volatile int8_t x534 = 2;
static int16_t x535 = INT16_MAX;
int8_t x563 = INT8_MIN;
int16_t x564 = INT16_MIN;
uint64_t x579 = 117304LLU;
int32_t x595 = INT32_MAX;
volatile int8_t x613 = -1;
volatile uint16_t x621 = UINT16_MAX;
int32_t x622 = INT32_MIN;
volatile int64_t x630 = 386812303297021LL;
volatile int64_t x647 = -1LL;
volatile int32_t t63 = 6;
static volatile int32_t t65 = -214;
int8_t x679 = INT8_MIN;
uint64_t x682 = 112523445883LLU;
volatile int32_t t68 = 13233;
int64_t x698 = -1LL;
static int64_t x742 = INT64_MIN;
int16_t x743 = INT16_MIN;
int64_t x744 = -1LL;
static uint64_t x747 = 132806926871LLU;
int32_t x748 = -14;
int32_t x750 = -1;
volatile int32_t t73 = -834750287;
int8_t x786 = -5;
uint16_t x791 = 5297U;
int64_t x792 = INT64_MIN;
int16_t x793 = INT16_MIN;
int64_t x799 = INT64_MIN;
uint16_t x819 = UINT16_MAX;
int32_t t81 = 36028171;
uint16_t x845 = 2142U;
volatile uint32_t x846 = 10U;
int32_t x849 = -73006;
int8_t x852 = INT8_MIN;
uint64_t x861 = UINT64_MAX;
uint16_t x874 = 2531U;
int32_t x904 = INT32_MIN;
int8_t x906 = 1;
static volatile uint64_t t91 = 7LLU;
int16_t x909 = INT16_MIN;
static uint16_t x953 = UINT16_MAX;
static volatile int64_t x955 = INT64_MIN;
volatile int64_t t95 = 100430884405LL;
volatile int16_t x976 = -15828;
int64_t x981 = -3LL;
int64_t x982 = -1LL;
static uint16_t x983 = UINT16_MAX;
int64_t x989 = INT64_MIN;
volatile int32_t t102 = -20191;
int8_t x1005 = INT8_MIN;
int16_t x1012 = 0;
int16_t x1015 = -1;
volatile int32_t t105 = 260424;
int32_t x1017 = INT32_MIN;
int64_t x1054 = INT64_MAX;
int32_t x1061 = INT32_MAX;
volatile int32_t t110 = 2720188;
int64_t x1072 = INT64_MIN;
int64_t t111 = -9550LL;
int64_t x1076 = -1LL;
volatile int8_t x1090 = 63;
static volatile int32_t x1098 = INT32_MIN;
int8_t x1117 = -1;
volatile uint32_t x1119 = UINT32_MAX;
volatile int32_t x1134 = INT32_MAX;
static volatile int64_t t120 = 235325654LL;
static int8_t x1162 = -1;
volatile int32_t x1170 = INT32_MIN;
int8_t x1172 = INT8_MIN;
volatile int16_t x1176 = -1;
int32_t x1178 = INT32_MIN;
volatile int32_t t125 = -1302375;
int8_t x1198 = -1;
int32_t t126 = -418;
int64_t x1204 = -1LL;
volatile int8_t x1232 = -1;
uint32_t x1246 = 107294U;
static int16_t x1247 = INT16_MIN;
uint8_t x1261 = 101U;
int64_t x1264 = -1LL;
volatile int32_t t135 = 31;
int16_t x1288 = INT16_MIN;
volatile int64_t t137 = -13792262004LL;
int32_t t138 = -5382411;
uint64_t t139 = 100459LLU;
static uint8_t x1314 = 5U;
volatile int8_t x1325 = INT8_MAX;
volatile int16_t x1328 = -3;
int16_t x1334 = INT16_MIN;
int64_t x1337 = INT64_MIN;
int32_t x1351 = -5;
volatile uint16_t x1367 = 26937U;
int32_t x1374 = -62;
static int64_t x1404 = -169114486837LL;
static int32_t t151 = 62011484;
volatile int64_t x1412 = -265228827263LL;
uint32_t x1413 = UINT32_MAX;
int32_t x1414 = INT32_MIN;
uint64_t x1422 = 297942631248LLU;
int32_t t154 = 598;
int64_t x1429 = INT64_MIN;
int64_t t155 = -39235491613993616LL;
uint32_t x1449 = 5221U;
int8_t x1473 = -1;
int8_t x1476 = 0;
int64_t x1478 = -1LL;
volatile int64_t x1479 = -3LL;
static volatile int8_t x1480 = INT8_MIN;
int16_t x1486 = INT16_MIN;
int16_t x1495 = -1;
int32_t x1497 = INT32_MIN;
volatile int64_t x1506 = INT64_MIN;
int16_t x1510 = INT16_MIN;
uint64_t x1522 = 127LLU;
volatile int64_t x1548 = -2166255682083LL;
static int32_t x1551 = -1;
int32_t x1552 = INT32_MIN;
static volatile uint16_t x1555 = UINT16_MAX;
static int16_t x1556 = INT16_MIN;
static int8_t x1557 = INT8_MAX;
uint8_t x1558 = UINT8_MAX;
volatile int32_t t175 = 111;
int32_t x1569 = INT32_MIN;
int64_t x1571 = 4002766LL;
int16_t x1573 = INT16_MAX;
volatile int32_t t178 = 395;
int64_t x1584 = INT64_MIN;
volatile int32_t x1591 = -1;
int8_t x1601 = INT8_MIN;
uint16_t x1609 = 46U;
uint16_t x1627 = 51U;
int64_t x1628 = -1LL;
volatile int32_t t184 = 108;
int64_t x1633 = INT64_MIN;
int8_t x1642 = 24;
int64_t x1656 = -8LL;
int16_t x1687 = INT16_MAX;
int32_t x1688 = INT32_MIN;
int16_t x1691 = 13;
int32_t x1692 = INT32_MIN;
int16_t x1699 = INT16_MIN;
int16_t x1707 = 2943;
static volatile int32_t t193 = 24;
uint32_t x1734 = 4415861U;
static int32_t x1736 = -2;
static int64_t x1755 = INT64_MIN;
volatile int32_t x1769 = INT32_MIN;
int8_t x1799 = INT8_MIN;
volatile int32_t t199 = 4782;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -613237347LL;

    t0 = (x1%((x2>x3)>x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = INT64_MIN;
	static int8_t x14 = INT8_MAX;
	volatile int16_t x15 = 190;
	int64_t x16 = INT64_MIN;
	volatile int64_t t1 = 29LL;

    t1 = (x13%((x14>x15)>x16));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	int32_t t2 = 65721;

    t2 = (x33%((x34>x35)>x36));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x46 = -1;
	uint64_t x47 = 7141890602648424LLU;
	static int32_t x48 = -631417295;
	int64_t t3 = -19623LL;

    t3 = (x45%((x46>x47)>x48));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x53 = 1095019549451230LL;
	int32_t x54 = INT32_MIN;
	volatile uint16_t x55 = 335U;
	static int64_t t4 = -5691755114562779LL;

    t4 = (x53%((x54>x55)>x56));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x57 = 129;
	volatile int8_t x59 = -1;
	volatile int32_t x60 = -20038;
	volatile int32_t t5 = -3;

    t5 = (x57%((x58>x59)>x60));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x70 = UINT16_MAX;
	static int32_t x71 = INT32_MIN;
	int8_t x72 = -1;
	int64_t t6 = -208440197464LL;

    t6 = (x69%((x70>x71)>x72));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x73 = INT32_MAX;
	int8_t x74 = -33;
	uint32_t x75 = 7935537U;
	volatile int16_t x76 = -9;
	volatile int32_t t7 = -441696994;

    t7 = (x73%((x74>x75)>x76));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x77 = -1410LL;
	int32_t x80 = INT32_MIN;
	int64_t t8 = 788635878215LL;

    t8 = (x77%((x78>x79)>x80));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x89 = 6;
	int8_t x90 = INT8_MAX;
	int64_t x92 = INT64_MIN;
	volatile int32_t t9 = -2;

    t9 = (x89%((x90>x91)>x92));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x113 = INT16_MIN;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	static int32_t t10 = -37301;

    t10 = (x113%((x114>x115)>x116));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x137 = -70;
	volatile int64_t x138 = -117892807LL;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t11 = 11870;

    t11 = (x137%((x138>x139)>x140));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = 1332394776090241LLU;
	uint8_t x143 = 111U;
	volatile uint64_t t12 = 2LLU;

    t12 = (x141%((x142>x143)>x144));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x145 = 5798856121485792938LLU;
	uint16_t x147 = UINT16_MAX;
	int16_t x148 = -1;

    t13 = (x145%((x146>x147)>x148));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x157 = 0U;
	int64_t x158 = INT64_MIN;
	int16_t x159 = -5809;
	int32_t x160 = INT32_MIN;
	int32_t t14 = -216349;

    t14 = (x157%((x158>x159)>x160));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x167 = 6357U;
	int32_t x168 = -256;
	volatile int64_t t15 = -1LL;

    t15 = (x165%((x166>x167)>x168));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	static int32_t t16 = 43;

    t16 = (x169%((x170>x171)>x172));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x173 = UINT32_MAX;
	uint16_t x174 = 1U;
	int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	volatile uint32_t t17 = 210U;

    t17 = (x173%((x174>x175)>x176));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x177 = 62U;
	uint16_t x178 = UINT16_MAX;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t18 = -126282;

    t18 = (x177%((x178>x179)>x180));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x181 = 74U;
	uint32_t x182 = 318809262U;
	int8_t x183 = -1;
	static int16_t x184 = -4695;
	volatile uint32_t t19 = 290U;

    t19 = (x181%((x182>x183)>x184));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x189 = 9495U;
	volatile int64_t x190 = -519198892711602LL;
	int64_t x192 = INT64_MIN;
	int32_t t20 = 69420;

    t20 = (x189%((x190>x191)>x192));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x194 = INT64_MAX;
	static uint32_t x195 = 14U;
	int64_t x196 = INT64_MIN;
	int32_t t21 = -63;

    t21 = (x193%((x194>x195)>x196));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x218 = 1678902415U;
	static volatile int16_t x220 = -1;
	int32_t t22 = 864476;

    t22 = (x217%((x218>x219)>x220));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x245 = 25;
	int32_t x246 = -1;
	int32_t x247 = -1;
	int32_t t23 = 13;

    t23 = (x245%((x246>x247)>x248));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x265 = INT16_MAX;
	volatile int8_t x266 = -2;
	uint16_t x267 = 2976U;
	volatile int64_t x268 = -1226351749LL;

    t24 = (x265%((x266>x267)>x268));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x269 = 874LLU;
	int32_t x270 = -88;
	int16_t x272 = -1;
	static uint64_t t25 = 4LLU;

    t25 = (x269%((x270>x271)>x272));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x273 = 4U;
	int8_t x275 = 53;
	int16_t x276 = INT16_MIN;
	volatile int32_t t26 = -912648;

    t26 = (x273%((x274>x275)>x276));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x277 = INT16_MAX;
	uint8_t x278 = 45U;
	int64_t x279 = 68913754596223831LL;
	int8_t x280 = -1;
	int32_t t27 = 239194258;

    t27 = (x277%((x278>x279)>x280));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x281 = INT16_MIN;
	int32_t x282 = -4178966;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;

    t28 = (x281%((x282>x283)>x284));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x293 = 2123812998LLU;
	volatile int64_t x294 = INT64_MIN;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = -5450158;
	volatile uint64_t t29 = 8706599LLU;

    t29 = (x293%((x294>x295)>x296));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x304 = INT8_MIN;
	volatile uint32_t t30 = 480U;

    t30 = (x301%((x302>x303)>x304));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	int16_t x328 = -1;

    t31 = (x325%((x326>x327)>x328));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x329 = INT16_MAX;
	int16_t x330 = -1;
	volatile int8_t x332 = INT8_MIN;
	int32_t t32 = 1;

    t32 = (x329%((x330>x331)>x332));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x333 = INT8_MIN;
	static volatile uint16_t x334 = 1584U;
	int64_t x335 = -61862LL;

    t33 = (x333%((x334>x335)>x336));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x349 = INT8_MIN;
	int64_t x350 = -2895LL;
	volatile int8_t x351 = INT8_MIN;
	int8_t x352 = -1;
	int32_t t34 = 304355118;

    t34 = (x349%((x350>x351)>x352));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x361 = -12;
	int32_t x362 = INT32_MIN;
	static int8_t x363 = INT8_MAX;
	int64_t x364 = -1LL;
	volatile int32_t t35 = -1163;

    t35 = (x361%((x362>x363)>x364));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x365 = 3U;
	volatile int64_t x366 = INT64_MAX;
	uint32_t x367 = 79669745U;
	static int64_t x368 = INT64_MIN;
	int32_t t36 = -48;

    t36 = (x365%((x366>x367)>x368));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x373 = INT8_MIN;
	volatile int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	volatile int32_t t37 = 75173;

    t37 = (x373%((x374>x375)>x376));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x393 = INT64_MAX;
	uint16_t x394 = 7U;
	int16_t x396 = -1;

    t38 = (x393%((x394>x395)>x396));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int32_t x415 = 3;
	int8_t x416 = -5;
	volatile uint32_t t39 = 3274805U;

    t39 = (x413%((x414>x415)>x416));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x421 = 454U;
	uint16_t x422 = 6566U;
	int32_t t40 = 964151;

    t40 = (x421%((x422>x423)>x424));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x429 = -2647;
	volatile int64_t x430 = INT64_MIN;
	uint8_t x431 = 1U;
	int32_t x432 = -1914;
	volatile int32_t t41 = 577;

    t41 = (x429%((x430>x431)>x432));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x443 = INT64_MIN;
	int64_t x444 = -31281701LL;
	int32_t t42 = 60442;

    t42 = (x441%((x442>x443)>x444));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	static uint16_t x447 = UINT16_MAX;
	volatile int8_t x448 = INT8_MIN;
	static volatile int64_t t43 = 168642LL;

    t43 = (x445%((x446>x447)>x448));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x473 = INT8_MIN;
	static int8_t x474 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	int32_t t44 = 3961844;

    t44 = (x473%((x474>x475)>x476));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x478 = 97137;
	uint32_t x479 = 16885931U;
	int64_t x480 = -1LL;
	int32_t t45 = -5;

    t45 = (x477%((x478>x479)>x480));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x483 = UINT16_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t46 = 53493;

    t46 = (x481%((x482>x483)>x484));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x493 = INT16_MAX;
	int32_t x494 = INT32_MIN;
	volatile int64_t x495 = -53165LL;
	int64_t x496 = INT64_MIN;

    t47 = (x493%((x494>x495)>x496));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x497 = 1U;
	uint8_t x498 = 29U;
	static uint64_t x499 = 2907581661131LLU;
	volatile int8_t x500 = -1;

    t48 = (x497%((x498>x499)>x500));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x530 = 2574LLU;
	int16_t x531 = INT16_MAX;
	int32_t t49 = 11267;

    t49 = (x529%((x530>x531)>x532));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x536 = -1;
	static volatile int32_t t50 = -155078;

    t50 = (x533%((x534>x535)>x536));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x537 = 561;
	static uint64_t x538 = 23977509510LLU;
	static int32_t x539 = INT32_MAX;
	int16_t x540 = -1;
	volatile int32_t t51 = 1842067;

    t51 = (x537%((x538>x539)>x540));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x561 = UINT16_MAX;
	uint64_t x562 = 105096249214LLU;
	volatile int32_t t52 = -965;

    t52 = (x561%((x562>x563)>x564));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x569 = 9223U;
	static int64_t x570 = -2304707LL;
	int32_t x571 = INT32_MAX;
	static int16_t x572 = -1;
	int32_t t53 = -1023196;

    t53 = (x569%((x570>x571)>x572));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x577 = -54796043018LL;
	int8_t x578 = -1;
	int32_t x580 = INT32_MIN;
	int64_t t54 = -3497340415LL;

    t54 = (x577%((x578>x579)>x580));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MIN;
	int16_t x596 = -1;
	static int32_t t55 = -222405;

    t55 = (x593%((x594>x595)>x596));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x601 = -1LL;
	int32_t x602 = 4249;
	static volatile int16_t x603 = INT16_MAX;
	static int32_t x604 = INT32_MIN;
	int64_t t56 = -30960562628556009LL;

    t56 = (x601%((x602>x603)>x604));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x609 = INT8_MAX;
	int32_t x610 = -237018;
	volatile int32_t x611 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	int32_t t57 = 45;

    t57 = (x609%((x610>x611)>x612));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x614 = INT8_MAX;
	volatile int32_t x615 = 14;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t58 = -17737;

    t58 = (x613%((x614>x615)>x616));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x617 = 28;
	static volatile int8_t x618 = INT8_MIN;
	volatile int64_t x619 = INT64_MIN;
	int32_t x620 = -47116;
	int32_t t59 = -1875189;

    t59 = (x617%((x618>x619)>x620));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x623 = 1;
	static int64_t x624 = INT64_MIN;
	static int32_t t60 = 7051;

    t60 = (x621%((x622>x623)>x624));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x629 = INT8_MIN;
	uint8_t x631 = UINT8_MAX;
	int32_t x632 = -3;
	int32_t t61 = 11996;

    t61 = (x629%((x630>x631)>x632));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x645 = INT16_MIN;
	uint16_t x646 = 13U;
	int32_t x648 = -1;
	volatile int32_t t62 = -2085286;

    t62 = (x645%((x646>x647)>x648));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x657 = -11;
	uint64_t x658 = 2489386437635LLU;
	int8_t x659 = INT8_MIN;
	int16_t x660 = -3833;

    t63 = (x657%((x658>x659)>x660));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MIN;
	int32_t x663 = INT32_MIN;
	int32_t x664 = -991;
	static int64_t t64 = 76091172299682LL;

    t64 = (x661%((x662>x663)>x664));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x665 = INT8_MIN;
	static int8_t x666 = INT8_MIN;
	static uint64_t x667 = 500462025070162339LLU;
	int64_t x668 = INT64_MIN;

    t65 = (x665%((x666>x667)>x668));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x677 = INT32_MIN;
	int8_t x678 = INT8_MIN;
	int16_t x680 = -4;
	int32_t t66 = 2030718;

    t66 = (x677%((x678>x679)>x680));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x681 = 0U;
	int64_t x683 = INT64_MIN;
	int64_t x684 = -1LL;
	volatile int32_t t67 = -125;

    t67 = (x681%((x682>x683)>x684));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x689 = -31;
	int8_t x690 = -1;
	int8_t x691 = -1;
	int64_t x692 = INT64_MIN;

    t68 = (x689%((x690>x691)>x692));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile int32_t x699 = INT32_MIN;
	static volatile int32_t x700 = INT32_MIN;
	volatile uint64_t t69 = 60469276013LLU;

    t69 = (x697%((x698>x699)>x700));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x729 = INT16_MIN;
	int64_t x730 = INT64_MIN;
	uint64_t x731 = 41887295839592906LLU;
	int16_t x732 = -4580;
	static int32_t t70 = -2741768;

    t70 = (x729%((x730>x731)>x732));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x741 = -1;
	static volatile int32_t t71 = 16202928;

    t71 = (x741%((x742>x743)>x744));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x745 = INT8_MIN;
	static int32_t x746 = -1;
	int32_t t72 = -222301;

    t72 = (x745%((x746>x747)>x748));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x749 = INT8_MIN;
	uint16_t x751 = 1036U;
	static int64_t x752 = -3346840404086LL;

    t73 = (x749%((x750>x751)>x752));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x753 = 52409322186101LL;
	int8_t x754 = 4;
	int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MIN;
	static int64_t t74 = -1957379368611501899LL;

    t74 = (x753%((x754>x755)>x756));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MIN;
	uint32_t x767 = 43348701U;
	int32_t x768 = -18;
	int32_t t75 = 22;

    t75 = (x765%((x766>x767)>x768));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x769 = INT64_MAX;
	volatile int32_t x770 = INT32_MAX;
	int64_t x771 = 843283LL;
	static int64_t x772 = -1LL;
	volatile int64_t t76 = 302353694860106566LL;

    t76 = (x769%((x770>x771)>x772));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x785 = INT8_MIN;
	static int16_t x787 = INT16_MIN;
	int8_t x788 = -1;
	volatile int32_t t77 = 1;

    t77 = (x785%((x786>x787)>x788));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x789 = 13;
	int64_t x790 = 10984687LL;
	volatile int32_t t78 = -42921990;

    t78 = (x789%((x790>x791)>x792));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x794 = UINT64_MAX;
	int16_t x795 = INT16_MAX;
	int8_t x796 = -1;
	int32_t t79 = 1557964;

    t79 = (x793%((x794>x795)>x796));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x797 = -1;
	uint64_t x798 = UINT64_MAX;
	uint32_t x800 = 0U;
	static volatile int32_t t80 = -3705688;

    t80 = (x797%((x798>x799)>x800));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x817 = -1;
	volatile uint8_t x818 = 90U;
	static int8_t x820 = INT8_MIN;

    t81 = (x817%((x818>x819)>x820));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x847 = -1;
	int32_t x848 = INT32_MIN;
	static int32_t t82 = -178375;

    t82 = (x845%((x846>x847)>x848));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x850 = 4U;
	volatile int64_t x851 = INT64_MIN;
	volatile int32_t t83 = -21599;

    t83 = (x849%((x850>x851)>x852));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x853 = INT8_MIN;
	uint32_t x854 = 51319266U;
	int64_t x855 = 8LL;
	volatile int16_t x856 = -1;
	static int32_t t84 = 6082154;

    t84 = (x853%((x854>x855)>x856));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x862 = INT64_MIN;
	int8_t x863 = INT8_MAX;
	static int64_t x864 = INT64_MIN;
	static volatile uint64_t t85 = 86757LLU;

    t85 = (x861%((x862>x863)>x864));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x873 = -1;
	int8_t x875 = -1;
	volatile int8_t x876 = -1;
	int32_t t86 = -164;

    t86 = (x873%((x874>x875)>x876));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x881 = 7961U;
	static int32_t x882 = INT32_MIN;
	uint32_t x883 = 8013U;
	volatile int32_t x884 = INT32_MIN;
	volatile int32_t t87 = -1545131;

    t87 = (x881%((x882>x883)>x884));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x885 = INT16_MIN;
	uint32_t x886 = 37U;
	volatile int16_t x887 = INT16_MIN;
	int16_t x888 = -37;
	static volatile int32_t t88 = -23;

    t88 = (x885%((x886>x887)>x888));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x893 = -1LL;
	int64_t x894 = -1LL;
	int8_t x895 = INT8_MAX;
	int16_t x896 = -1;
	static volatile int64_t t89 = -127653735072493LL;

    t89 = (x893%((x894>x895)>x896));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x901 = UINT64_MAX;
	uint64_t x902 = 15786769LLU;
	int8_t x903 = INT8_MIN;
	volatile uint64_t t90 = 2772324888LLU;

    t90 = (x901%((x902>x903)>x904));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x905 = UINT64_MAX;
	uint64_t x907 = 4977LLU;
	int32_t x908 = INT32_MIN;

    t91 = (x905%((x906>x907)>x908));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x910 = 1888111LLU;
	int64_t x911 = INT64_MIN;
	static volatile int16_t x912 = INT16_MIN;
	int32_t t92 = -15057;

    t92 = (x909%((x910>x911)>x912));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x917 = 14U;
	uint64_t x918 = 55LLU;
	int32_t x919 = INT32_MIN;
	volatile int16_t x920 = -1;
	volatile int32_t t93 = -168398;

    t93 = (x917%((x918>x919)>x920));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x954 = 7;
	int16_t x956 = -5;
	volatile int32_t t94 = -31;

    t94 = (x953%((x954>x955)>x956));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x961 = 117LL;
	static volatile int16_t x962 = -1;
	uint64_t x963 = UINT64_MAX;
	volatile int16_t x964 = -93;

    t95 = (x961%((x962>x963)>x964));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x965 = INT16_MAX;
	volatile int16_t x966 = -4;
	int32_t x967 = -1;
	static int16_t x968 = INT16_MIN;
	static volatile int32_t t96 = -906477294;

    t96 = (x965%((x966>x967)>x968));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x973 = INT32_MAX;
	uint64_t x974 = 242LLU;
	volatile uint16_t x975 = UINT16_MAX;
	volatile int32_t t97 = -5;

    t97 = (x973%((x974>x975)>x976));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x977 = 1268;
	uint8_t x978 = UINT8_MAX;
	int64_t x979 = 3164076LL;
	volatile int16_t x980 = INT16_MIN;
	int32_t t98 = -3;

    t98 = (x977%((x978>x979)>x980));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x984 = -153;
	int64_t t99 = -11255935LL;

    t99 = (x981%((x982>x983)>x984));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x985 = 982LLU;
	int8_t x986 = 1;
	volatile uint32_t x987 = 44U;
	volatile int32_t x988 = -1;
	volatile uint64_t t100 = 19263955LLU;

    t100 = (x985%((x986>x987)>x988));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x990 = 8750784247193879LL;
	int8_t x991 = 1;
	int64_t x992 = INT64_MIN;
	int64_t t101 = 42021153882814LL;

    t101 = (x989%((x990>x991)>x992));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x1001 = 9U;
	volatile int32_t x1002 = 83035068;
	volatile uint64_t x1003 = 2LLU;
	int64_t x1004 = -1LL;

    t102 = (x1001%((x1002>x1003)>x1004));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x1006 = INT64_MAX;
	int16_t x1007 = 2331;
	int8_t x1008 = -1;
	int32_t t103 = 2110;

    t103 = (x1005%((x1006>x1007)>x1008));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x1009 = INT8_MAX;
	volatile int32_t x1010 = INT32_MIN;
	static uint32_t x1011 = 2414200U;
	int32_t t104 = 1;

    t104 = (x1009%((x1010>x1011)>x1012));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x1013 = INT16_MAX;
	int32_t x1014 = -267;
	static int64_t x1016 = INT64_MIN;

    t105 = (x1013%((x1014>x1015)>x1016));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x1018 = 3;
	static uint32_t x1019 = 121781U;
	int32_t x1020 = -208569796;
	volatile int32_t t106 = 16034115;

    t106 = (x1017%((x1018>x1019)>x1020));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x1037 = -88280;
	int64_t x1038 = 301761071LL;
	uint32_t x1039 = UINT32_MAX;
	int8_t x1040 = INT8_MIN;
	int32_t t107 = -376230;

    t107 = (x1037%((x1038>x1039)>x1040));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x1053 = UINT16_MAX;
	uint16_t x1055 = 2089U;
	int16_t x1056 = -1;
	volatile int32_t t108 = -1386971;

    t108 = (x1053%((x1054>x1055)>x1056));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x1062 = INT64_MIN;
	static uint64_t x1063 = 2648734639446LLU;
	int32_t x1064 = INT32_MIN;
	static volatile int32_t t109 = 19528;

    t109 = (x1061%((x1062>x1063)>x1064));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x1065 = INT32_MIN;
	int16_t x1066 = INT16_MIN;
	int32_t x1067 = 7;
	static int8_t x1068 = INT8_MIN;

    t110 = (x1065%((x1066>x1067)>x1068));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x1069 = -1LL;
	int32_t x1070 = INT32_MIN;
	uint64_t x1071 = UINT64_MAX;

    t111 = (x1069%((x1070>x1071)>x1072));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x1073 = 0;
	volatile int16_t x1074 = INT16_MAX;
	uint32_t x1075 = 155866U;
	static volatile int32_t t112 = -6047;

    t112 = (x1073%((x1074>x1075)>x1076));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x1085 = -185;
	int32_t x1086 = INT32_MIN;
	int32_t x1087 = INT32_MIN;
	static int8_t x1088 = INT8_MIN;
	volatile int32_t t113 = -14920;

    t113 = (x1085%((x1086>x1087)>x1088));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x1089 = INT64_MIN;
	static volatile uint8_t x1091 = 4U;
	int8_t x1092 = INT8_MIN;
	int64_t t114 = 53LL;

    t114 = (x1089%((x1090>x1091)>x1092));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x1097 = INT16_MIN;
	int64_t x1099 = INT64_MIN;
	int8_t x1100 = -1;
	int32_t t115 = 9;

    t115 = (x1097%((x1098>x1099)>x1100));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x1101 = INT8_MIN;
	uint8_t x1102 = 28U;
	int8_t x1103 = -9;
	int16_t x1104 = INT16_MIN;
	volatile int32_t t116 = -1;

    t116 = (x1101%((x1102>x1103)>x1104));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x1113 = 23U;
	int64_t x1114 = -1LL;
	volatile int64_t x1115 = -3747881863168LL;
	int64_t x1116 = INT64_MIN;
	int32_t t117 = 2;

    t117 = (x1113%((x1114>x1115)>x1116));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1118 = INT8_MIN;
	volatile int16_t x1120 = INT16_MIN;
	volatile int32_t t118 = -426983;

    t118 = (x1117%((x1118>x1119)>x1120));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x1125 = INT32_MIN;
	int16_t x1126 = INT16_MAX;
	volatile int16_t x1127 = -1;
	volatile int64_t x1128 = INT64_MIN;
	volatile int32_t t119 = -1;

    t119 = (x1125%((x1126>x1127)>x1128));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x1133 = 2755724083430LL;
	static volatile int16_t x1135 = INT16_MIN;
	int8_t x1136 = INT8_MIN;

    t120 = (x1133%((x1134>x1135)>x1136));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1153 = -37;
	uint16_t x1154 = UINT16_MAX;
	volatile uint64_t x1155 = UINT64_MAX;
	volatile int8_t x1156 = -1;
	volatile int32_t t121 = 3768458;

    t121 = (x1153%((x1154>x1155)>x1156));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x1161 = 86U;
	static int64_t x1163 = INT64_MIN;
	volatile int64_t x1164 = -67768LL;
	int32_t t122 = -9554;

    t122 = (x1161%((x1162>x1163)>x1164));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x1169 = 283U;
	static uint16_t x1171 = UINT16_MAX;
	int32_t t123 = -2868375;

    t123 = (x1169%((x1170>x1171)>x1172));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x1173 = 324623942U;
	uint16_t x1174 = UINT16_MAX;
	int16_t x1175 = 1;
	uint32_t t124 = 15U;

    t124 = (x1173%((x1174>x1175)>x1176));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1177 = INT32_MIN;
	uint16_t x1179 = 25995U;
	static volatile int64_t x1180 = INT64_MIN;

    t125 = (x1177%((x1178>x1179)>x1180));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x1197 = INT32_MIN;
	int64_t x1199 = INT64_MAX;
	int32_t x1200 = INT32_MIN;

    t126 = (x1197%((x1198>x1199)>x1200));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x1201 = UINT32_MAX;
	uint64_t x1202 = UINT64_MAX;
	static int32_t x1203 = -1;
	static volatile uint32_t t127 = 121583U;

    t127 = (x1201%((x1202>x1203)>x1204));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1205 = 1U;
	volatile uint64_t x1206 = 5LLU;
	int16_t x1207 = INT16_MIN;
	int16_t x1208 = -1;
	int32_t t128 = -1127;

    t128 = (x1205%((x1206>x1207)>x1208));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1221 = 456352343498763LLU;
	int64_t x1222 = INT64_MIN;
	int32_t x1223 = INT32_MIN;
	int64_t x1224 = INT64_MIN;
	volatile uint64_t t129 = 15190343369929LLU;

    t129 = (x1221%((x1222>x1223)>x1224));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x1225 = INT16_MIN;
	int32_t x1226 = -1;
	int64_t x1227 = INT64_MIN;
	volatile int32_t x1228 = -27334561;
	int32_t t130 = 4;

    t130 = (x1225%((x1226>x1227)>x1228));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1229 = INT32_MAX;
	static int32_t x1230 = -885005;
	static int32_t x1231 = INT32_MIN;
	int32_t t131 = 8395;

    t131 = (x1229%((x1230>x1231)>x1232));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1237 = -92LL;
	uint8_t x1238 = UINT8_MAX;
	uint16_t x1239 = UINT16_MAX;
	static volatile int32_t x1240 = INT32_MIN;
	volatile int64_t t132 = -129LL;

    t132 = (x1237%((x1238>x1239)>x1240));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1245 = 1236;
	int16_t x1248 = -454;
	int32_t t133 = 39012801;

    t133 = (x1245%((x1246>x1247)>x1248));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1262 = 671298434U;
	static int8_t x1263 = INT8_MAX;
	volatile int32_t t134 = 55;

    t134 = (x1261%((x1262>x1263)>x1264));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1273 = INT8_MAX;
	int8_t x1274 = INT8_MAX;
	uint8_t x1275 = UINT8_MAX;
	int32_t x1276 = INT32_MIN;

    t135 = (x1273%((x1274>x1275)>x1276));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1281 = INT64_MIN;
	static int32_t x1282 = INT32_MIN;
	uint8_t x1283 = 57U;
	int64_t x1284 = -1LL;
	int64_t t136 = 2920690730123LL;

    t136 = (x1281%((x1282>x1283)>x1284));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1285 = INT64_MIN;
	uint16_t x1286 = 608U;
	int64_t x1287 = 1544879334255099537LL;

    t137 = (x1285%((x1286>x1287)>x1288));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1289 = INT16_MAX;
	int8_t x1290 = 37;
	static int32_t x1291 = -1;
	int64_t x1292 = INT64_MIN;

    t138 = (x1289%((x1290>x1291)>x1292));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1293 = UINT64_MAX;
	volatile uint16_t x1294 = 653U;
	int64_t x1295 = INT64_MAX;
	int64_t x1296 = INT64_MIN;

    t139 = (x1293%((x1294>x1295)>x1296));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1301 = 10U;
	volatile int32_t x1302 = INT32_MIN;
	volatile int32_t x1303 = INT32_MIN;
	volatile int16_t x1304 = INT16_MIN;
	int32_t t140 = -22;

    t140 = (x1301%((x1302>x1303)>x1304));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1313 = INT8_MAX;
	int16_t x1315 = -691;
	static int8_t x1316 = -1;
	static volatile int32_t t141 = -15485444;

    t141 = (x1313%((x1314>x1315)>x1316));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1326 = INT16_MIN;
	int64_t x1327 = INT64_MIN;
	volatile int32_t t142 = 85863352;

    t142 = (x1325%((x1326>x1327)>x1328));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x1333 = UINT64_MAX;
	int32_t x1335 = INT32_MAX;
	int64_t x1336 = INT64_MIN;
	volatile uint64_t t143 = 0LLU;

    t143 = (x1333%((x1334>x1335)>x1336));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1338 = UINT64_MAX;
	int64_t x1339 = INT64_MIN;
	int64_t x1340 = -187276627187990337LL;
	volatile int64_t t144 = 88252LL;

    t144 = (x1337%((x1338>x1339)>x1340));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1349 = INT16_MAX;
	uint32_t x1350 = UINT32_MAX;
	int64_t x1352 = -1LL;
	volatile int32_t t145 = -9242790;

    t145 = (x1349%((x1350>x1351)>x1352));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1353 = INT16_MAX;
	int8_t x1354 = INT8_MIN;
	int32_t x1355 = INT32_MIN;
	static int32_t x1356 = -1;
	static int32_t t146 = -313491;

    t146 = (x1353%((x1354>x1355)>x1356));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1365 = INT16_MIN;
	uint32_t x1366 = UINT32_MAX;
	int8_t x1368 = INT8_MIN;
	volatile int32_t t147 = 6;

    t147 = (x1365%((x1366>x1367)>x1368));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1373 = -1;
	int8_t x1375 = 1;
	int16_t x1376 = INT16_MIN;
	int32_t t148 = -8228878;

    t148 = (x1373%((x1374>x1375)>x1376));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1393 = INT32_MIN;
	int8_t x1394 = -1;
	static int64_t x1395 = INT64_MAX;
	int8_t x1396 = INT8_MIN;
	int32_t t149 = 1223031;

    t149 = (x1393%((x1394>x1395)>x1396));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1397 = 106U;
	int8_t x1398 = INT8_MIN;
	volatile int64_t x1399 = 107310600813645295LL;
	static int16_t x1400 = INT16_MIN;
	int32_t t150 = 10936;

    t150 = (x1397%((x1398>x1399)>x1400));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x1401 = INT8_MIN;
	int8_t x1402 = -1;
	uint16_t x1403 = UINT16_MAX;

    t151 = (x1401%((x1402>x1403)>x1404));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1409 = INT16_MIN;
	int64_t x1410 = 179959100660LL;
	uint8_t x1411 = 3U;
	volatile int32_t t152 = -60096621;

    t152 = (x1409%((x1410>x1411)>x1412));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1415 = INT16_MAX;
	int64_t x1416 = -31436590194566867LL;
	static volatile uint32_t t153 = 5015501U;

    t153 = (x1413%((x1414>x1415)>x1416));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x1421 = 184761952;
	int32_t x1423 = INT32_MIN;
	int32_t x1424 = INT32_MIN;

    t154 = (x1421%((x1422>x1423)>x1424));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1430 = 21488;
	int8_t x1431 = 7;
	int64_t x1432 = -429256771672472187LL;

    t155 = (x1429%((x1430>x1431)>x1432));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1433 = INT64_MAX;
	static int64_t x1434 = 21355LL;
	volatile int32_t x1435 = INT32_MIN;
	static int32_t x1436 = INT32_MIN;
	static volatile int64_t t156 = -431651338187759LL;

    t156 = (x1433%((x1434>x1435)>x1436));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1441 = INT64_MAX;
	int16_t x1442 = INT16_MIN;
	uint8_t x1443 = 3U;
	int16_t x1444 = -15589;
	volatile int64_t t157 = -2563554136415008LL;

    t157 = (x1441%((x1442>x1443)>x1444));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1450 = 3U;
	volatile uint16_t x1451 = 14720U;
	static int16_t x1452 = -1;
	uint32_t t158 = 61U;

    t158 = (x1449%((x1450>x1451)>x1452));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1461 = INT16_MIN;
	volatile int16_t x1462 = INT16_MIN;
	int16_t x1463 = -1;
	static int8_t x1464 = -1;
	int32_t t159 = -2;

    t159 = (x1461%((x1462>x1463)>x1464));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1465 = INT8_MAX;
	int32_t x1466 = -1;
	volatile uint8_t x1467 = UINT8_MAX;
	volatile int16_t x1468 = -30;
	static volatile int32_t t160 = -1;

    t160 = (x1465%((x1466>x1467)>x1468));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x1469 = 111547348LLU;
	static volatile int32_t x1470 = INT32_MAX;
	uint32_t x1471 = UINT32_MAX;
	int8_t x1472 = INT8_MIN;
	volatile uint64_t t161 = 210734LLU;

    t161 = (x1469%((x1470>x1471)>x1472));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1474 = INT32_MAX;
	volatile int64_t x1475 = 985077LL;
	int32_t t162 = -2791126;

    t162 = (x1473%((x1474>x1475)>x1476));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1477 = INT8_MIN;
	int32_t t163 = 2705344;

    t163 = (x1477%((x1478>x1479)>x1480));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x1485 = 3U;
	volatile int8_t x1487 = -1;
	int8_t x1488 = -1;
	volatile uint32_t t164 = 15U;

    t164 = (x1485%((x1486>x1487)>x1488));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1493 = UINT8_MAX;
	volatile int64_t x1494 = INT64_MAX;
	int64_t x1496 = INT64_MIN;
	static int32_t t165 = 0;

    t165 = (x1493%((x1494>x1495)>x1496));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x1498 = 63858406U;
	volatile uint64_t x1499 = UINT64_MAX;
	int16_t x1500 = -3;
	volatile int32_t t166 = 79;

    t166 = (x1497%((x1498>x1499)>x1500));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x1505 = 1;
	uint16_t x1507 = 4891U;
	static int16_t x1508 = -49;
	int32_t t167 = -991;

    t167 = (x1505%((x1506>x1507)>x1508));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x1509 = 17U;
	int64_t x1511 = INT64_MIN;
	int8_t x1512 = INT8_MIN;
	volatile int32_t t168 = 82;

    t168 = (x1509%((x1510>x1511)>x1512));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1517 = INT8_MAX;
	static int8_t x1518 = INT8_MAX;
	uint16_t x1519 = UINT16_MAX;
	volatile int64_t x1520 = -1LL;
	int32_t t169 = 118;

    t169 = (x1517%((x1518>x1519)>x1520));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1521 = UINT8_MAX;
	static int64_t x1523 = -1LL;
	int16_t x1524 = -5;
	volatile int32_t t170 = 2039804;

    t170 = (x1521%((x1522>x1523)>x1524));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1541 = -1;
	uint16_t x1542 = UINT16_MAX;
	int64_t x1543 = INT64_MIN;
	static int64_t x1544 = -1LL;
	static volatile int32_t t171 = -294921214;

    t171 = (x1541%((x1542>x1543)>x1544));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1545 = -1;
	int16_t x1546 = INT16_MAX;
	uint32_t x1547 = 0U;
	int32_t t172 = 2064872;

    t172 = (x1545%((x1546>x1547)>x1548));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1549 = 176U;
	int32_t x1550 = 0;
	static volatile int32_t t173 = -14374;

    t173 = (x1549%((x1550>x1551)>x1552));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x1553 = INT64_MIN;
	uint64_t x1554 = 73LLU;
	int64_t t174 = -12348LL;

    t174 = (x1553%((x1554>x1555)>x1556));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1559 = INT16_MAX;
	static int32_t x1560 = INT32_MIN;

    t175 = (x1557%((x1558>x1559)>x1560));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1565 = 8343U;
	int8_t x1566 = 14;
	int64_t x1567 = -1LL;
	int32_t x1568 = -1;
	int32_t t176 = 3352745;

    t176 = (x1565%((x1566>x1567)>x1568));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1570 = -1;
	int32_t x1572 = INT32_MIN;
	int32_t t177 = -873;

    t177 = (x1569%((x1570>x1571)>x1572));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1574 = INT16_MIN;
	int16_t x1575 = INT16_MIN;
	static int8_t x1576 = INT8_MIN;

    t178 = (x1573%((x1574>x1575)>x1576));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1577 = -237361;
	uint64_t x1578 = UINT64_MAX;
	int32_t x1579 = 1306063;
	int8_t x1580 = -31;
	volatile int32_t t179 = -329050;

    t179 = (x1577%((x1578>x1579)>x1580));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1581 = INT32_MAX;
	volatile int32_t x1582 = 8260996;
	uint16_t x1583 = UINT16_MAX;
	volatile int32_t t180 = -1;

    t180 = (x1581%((x1582>x1583)>x1584));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1589 = INT16_MIN;
	uint32_t x1590 = 90470U;
	int8_t x1592 = INT8_MIN;
	volatile int32_t t181 = -62401;

    t181 = (x1589%((x1590>x1591)>x1592));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1602 = -1;
	uint16_t x1603 = UINT16_MAX;
	static int32_t x1604 = -1;
	volatile int32_t t182 = -6037401;

    t182 = (x1601%((x1602>x1603)>x1604));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1610 = 245;
	static int16_t x1611 = 3;
	int16_t x1612 = -1;
	int32_t t183 = 3;

    t183 = (x1609%((x1610>x1611)>x1612));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1625 = INT16_MAX;
	int8_t x1626 = -1;

    t184 = (x1625%((x1626>x1627)>x1628));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1634 = -1;
	int64_t x1635 = INT64_MAX;
	int64_t x1636 = -1LL;
	volatile int64_t t185 = -8181LL;

    t185 = (x1633%((x1634>x1635)>x1636));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1641 = INT32_MAX;
	static volatile uint32_t x1643 = 27862U;
	static int32_t x1644 = -4964;
	volatile int32_t t186 = -5226;

    t186 = (x1641%((x1642>x1643)>x1644));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1653 = -1LL;
	uint16_t x1654 = 28358U;
	static int8_t x1655 = INT8_MIN;
	static int64_t t187 = -5328LL;

    t187 = (x1653%((x1654>x1655)>x1656));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x1669 = 28U;
	uint8_t x1670 = 1U;
	int16_t x1671 = INT16_MAX;
	int32_t x1672 = -1;
	volatile int32_t t188 = 31318612;

    t188 = (x1669%((x1670>x1671)>x1672));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1685 = INT64_MIN;
	int64_t x1686 = -3LL;
	volatile int64_t t189 = -9777677LL;

    t189 = (x1685%((x1686>x1687)>x1688));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1689 = -15;
	volatile int16_t x1690 = -45;
	volatile int32_t t190 = 343923;

    t190 = (x1689%((x1690>x1691)>x1692));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1697 = UINT16_MAX;
	volatile int64_t x1698 = 1LL;
	int64_t x1700 = -1LL;
	int32_t t191 = 367898;

    t191 = (x1697%((x1698>x1699)>x1700));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1705 = INT16_MAX;
	volatile uint64_t x1706 = 4012LLU;
	int8_t x1708 = -13;
	volatile int32_t t192 = 823;

    t192 = (x1705%((x1706>x1707)>x1708));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1729 = INT16_MAX;
	int32_t x1730 = -4;
	uint32_t x1731 = 97U;
	int64_t x1732 = -1LL;

    t193 = (x1729%((x1730>x1731)>x1732));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1733 = -1;
	int8_t x1735 = INT8_MAX;
	volatile int32_t t194 = 10581566;

    t194 = (x1733%((x1734>x1735)>x1736));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1753 = 125084529U;
	static uint8_t x1754 = UINT8_MAX;
	int32_t x1756 = INT32_MIN;
	volatile uint32_t t195 = 151U;

    t195 = (x1753%((x1754>x1755)>x1756));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1770 = INT16_MAX;
	int16_t x1771 = -1;
	static int8_t x1772 = -3;
	volatile int32_t t196 = 21756179;

    t196 = (x1769%((x1770>x1771)>x1772));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1777 = -1;
	int32_t x1778 = INT32_MIN;
	volatile int32_t x1779 = -1;
	int8_t x1780 = INT8_MIN;
	volatile int32_t t197 = -356501;

    t197 = (x1777%((x1778>x1779)>x1780));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1789 = INT64_MIN;
	uint8_t x1790 = UINT8_MAX;
	int32_t x1791 = 791;
	static int64_t x1792 = -304045236LL;
	volatile int64_t t198 = -665LL;

    t198 = (x1789%((x1790>x1791)>x1792));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1797 = UINT8_MAX;
	uint64_t x1798 = UINT64_MAX;
	volatile int8_t x1800 = -1;

    t199 = (x1797%((x1798>x1799)>x1800));

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

