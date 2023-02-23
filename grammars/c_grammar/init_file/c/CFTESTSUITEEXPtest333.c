
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

int64_t x5 = INT64_MAX;
int64_t t1 = INT64_MAX;
uint8_t x13 = 5U;
int8_t x19 = INT8_MIN;
int32_t x29 = INT32_MAX;
uint16_t x38 = UINT16_MAX;
volatile int16_t x39 = INT16_MIN;
static volatile int32_t t6 = -523126810;
uint8_t x41 = 0U;
int8_t x60 = -55;
int32_t x62 = INT32_MAX;
static int32_t t11 = 2452702;
uint32_t x65 = UINT32_MAX;
int16_t x76 = -1;
static uint8_t x84 = 98U;
volatile uint8_t x89 = UINT8_MAX;
int8_t x90 = INT8_MAX;
uint32_t x91 = UINT32_MAX;
uint32_t x97 = UINT32_MAX;
uint8_t x98 = UINT8_MAX;
int16_t x99 = -1;
static volatile uint32_t t19 = 289875U;
int16_t x130 = -1;
static int8_t x131 = INT8_MIN;
uint64_t x141 = UINT64_MAX;
volatile int16_t x144 = INT16_MIN;
uint32_t x165 = 1567103632U;
int64_t x166 = INT64_MIN;
volatile int32_t t27 = 4084493;
volatile uint64_t t28 = 3470838503LLU;
uint8_t x193 = UINT8_MAX;
volatile int16_t x196 = INT16_MIN;
volatile int32_t x200 = INT32_MAX;
volatile int32_t x231 = INT32_MIN;
uint32_t x234 = 3019U;
int32_t x238 = INT32_MIN;
int64_t x239 = 1348440LL;
static volatile uint16_t x247 = 16096U;
int32_t x254 = INT32_MIN;
int16_t x255 = -1;
volatile int64_t t38 = -5LL;
volatile int16_t x270 = INT16_MAX;
volatile uint16_t x277 = 718U;
int16_t x282 = INT16_MIN;
int16_t x287 = -1;
int16_t x294 = INT16_MAX;
static volatile uint8_t x301 = 23U;
static volatile int32_t x309 = 172325172;
static volatile uint32_t t47 = 413345U;
volatile int32_t x323 = -1;
uint32_t x333 = UINT32_MAX;
static int32_t x354 = -22084;
int16_t x355 = INT16_MIN;
uint64_t x375 = 13548765791611LLU;
uint64_t x381 = 7326LLU;
int8_t x382 = -1;
volatile uint32_t x384 = 91645004U;
int64_t x386 = -1LL;
volatile int32_t t57 = 412203397;
static int64_t x402 = 3123LL;
uint8_t x403 = 1U;
int16_t x404 = INT16_MIN;
uint8_t x415 = 19U;
volatile int32_t x416 = INT32_MIN;
volatile uint32_t t61 = UINT32_MAX;
volatile int32_t x421 = 280339;
volatile int32_t t62 = -427;
volatile int16_t x445 = 6923;
int16_t x447 = -1;
static int8_t x453 = 0;
static uint64_t x458 = UINT64_MAX;
uint8_t x459 = 43U;
int16_t x468 = -31;
int16_t x475 = 2;
static uint8_t x485 = 3U;
volatile int8_t x488 = INT8_MIN;
static uint64_t x491 = 455304938LLU;
int8_t x492 = -1;
int32_t t71 = -465662631;
int64_t x510 = INT64_MIN;
int64_t x511 = -5562LL;
int32_t x525 = INT32_MAX;
uint64_t x545 = 112818108607225LLU;
volatile int64_t x554 = INT64_MAX;
uint16_t x555 = UINT16_MAX;
int64_t x556 = -1LL;
static uint8_t x557 = UINT8_MAX;
int32_t t79 = -105118;
uint8_t x561 = 0U;
uint8_t x573 = UINT8_MAX;
int32_t x575 = -3;
int64_t x578 = -1LL;
volatile uint8_t x579 = UINT8_MAX;
static volatile uint8_t x613 = 103U;
int64_t x614 = -33663771537856434LL;
uint64_t x621 = UINT64_MAX;
static volatile int8_t x631 = 0;
static int32_t t90 = -2599139;
int8_t x665 = INT8_MAX;
static uint64_t x671 = 905LLU;
int32_t t94 = -9813;
static int16_t x674 = INT16_MIN;
static volatile int32_t t95 = 7;
static int8_t x684 = 1;
volatile int64_t t96 = -439612487LL;
int32_t x706 = INT32_MIN;
volatile int32_t t99 = -119337542;
static int32_t x735 = -3;
int64_t x736 = 392106LL;
int32_t t102 = -129733037;
int16_t x755 = INT16_MIN;
volatile uint16_t x769 = 0U;
static int32_t t105 = -1501;
volatile int32_t t106 = -45705384;
static uint16_t x787 = 3U;
static int32_t t108 = 1018;
static uint64_t x816 = 2250768296LLU;
int32_t t109 = -231;
static int16_t x817 = INT16_MAX;
uint64_t x820 = 1277585LLU;
volatile int64_t t111 = -11LL;
int32_t x830 = 14;
uint8_t x844 = UINT8_MAX;
int32_t x862 = INT32_MIN;
volatile uint8_t x873 = 6U;
static int8_t x876 = -1;
int32_t t119 = 3;
uint16_t x901 = UINT16_MAX;
static int8_t x904 = 6;
static int64_t x912 = -3409544022862212768LL;
uint64_t x921 = UINT64_MAX;
int32_t x925 = INT32_MAX;
int64_t x950 = -921816870725LL;
uint8_t x952 = 36U;
static int16_t x963 = 0;
volatile uint64_t t128 = 3408445164514157652LLU;
volatile int32_t x966 = -1;
static int8_t x972 = INT8_MIN;
static volatile int32_t t130 = -48;
static int8_t x974 = -1;
uint16_t x976 = UINT16_MAX;
int32_t t132 = -1983681;
volatile uint16_t x1001 = UINT16_MAX;
volatile int32_t x1004 = -142932;
static uint16_t x1007 = UINT16_MAX;
uint64_t x1014 = 364174517760LLU;
uint16_t x1035 = 10U;
static uint16_t x1058 = 2122U;
volatile int32_t t145 = 253337;
static volatile int64_t x1083 = -1LL;
volatile uint64_t t146 = 36165369LLU;
int64_t x1089 = INT64_MAX;
int64_t x1091 = INT64_MIN;
int64_t t147 = INT64_MAX;
static uint32_t x1113 = UINT32_MAX;
volatile int16_t x1115 = -1;
int8_t x1122 = INT8_MIN;
int8_t x1127 = INT8_MIN;
volatile uint64_t t151 = 14LLU;
int64_t x1129 = INT64_MAX;
int64_t x1139 = -1LL;
volatile int32_t x1140 = -1;
int8_t x1169 = INT8_MAX;
int32_t x1203 = -1;
uint16_t x1221 = 16U;
uint32_t x1233 = 829653U;
int32_t x1235 = INT32_MIN;
static uint32_t x1236 = 889548863U;
volatile int32_t t162 = 20427232;
static volatile int32_t t163 = 17;
int8_t x1287 = 40;
volatile uint16_t x1313 = 2U;
volatile int32_t t166 = 727376;
uint64_t x1326 = UINT64_MAX;
uint32_t x1333 = 8484U;
volatile uint64_t x1335 = UINT64_MAX;
volatile uint64_t x1337 = 1430516LLU;
int64_t x1340 = -1LL;
static int32_t t173 = -1;
volatile int32_t t178 = -5;
uint16_t x1409 = 3692U;
uint16_t x1413 = UINT16_MAX;
int8_t x1417 = 1;
int32_t x1418 = INT32_MAX;
int16_t x1422 = INT16_MIN;
uint64_t t184 = 390LLU;
uint64_t x1439 = 2540848836909LLU;
volatile int32_t x1449 = INT32_MAX;
int8_t x1450 = INT8_MAX;
uint16_t x1454 = 26164U;
volatile int32_t x1455 = 164828;
int8_t x1477 = 0;
volatile int16_t x1478 = INT16_MAX;
int16_t x1482 = INT16_MAX;
uint64_t x1501 = 222271120LLU;
uint64_t t191 = 3003712166956879LLU;
int16_t x1507 = INT16_MIN;
volatile int32_t t194 = INT32_MAX;
uint64_t x1527 = UINT64_MAX;
volatile int16_t x1536 = INT16_MAX;
volatile int32_t t196 = 15209;
volatile int32_t t198 = -326;
volatile uint32_t x1555 = UINT32_MAX;
int64_t x1556 = INT64_MAX;


void f0(void) {
    	uint32_t x1 = 474351280U;
	static uint64_t x2 = 8143802860LLU;
	uint32_t x3 = 184266U;
	volatile uint32_t x4 = 0U;
	volatile uint32_t t0 = 2234091U;

    t0 = (x1>>((x2-x3)<=x4));

    if (t0 != 474351280U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = -33109LL;
	int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = 917389055582453806LLU;

    t1 = (x5>>((x6-x7)<=x8));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	static int32_t t2 = -254;

    t2 = (x13>>((x14-x15)<=x16));

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 124U;
	static int16_t x18 = INT16_MAX;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t3 = -16536;

    t3 = (x17>>((x18-x19)<=x20));

    if (t3 != 124) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = 3;
	uint16_t x26 = 228U;
	int8_t x27 = INT8_MAX;
	static uint32_t x28 = 20816U;
	int32_t t4 = -1480805;

    t4 = (x25>>((x26-x27)<=x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 876857U;
	int32_t t5 = INT32_MAX;

    t5 = (x29>>((x30-x31)<=x32));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x37 = INT16_MAX;
	uint64_t x40 = 310161702LLU;

    t6 = (x37>>((x38-x39)<=x40));

    if (t6 != 16383) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x42 = INT16_MIN;
	int8_t x43 = -10;
	static int32_t x44 = -1;
	volatile int32_t t7 = -75452;

    t7 = (x41>>((x42-x43)<=x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x45 = UINT64_MAX;
	volatile int8_t x46 = 1;
	volatile uint32_t x47 = 6982704U;
	volatile uint16_t x48 = UINT16_MAX;
	static uint64_t t8 = UINT64_MAX;

    t8 = (x45>>((x46-x47)<=x48));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = UINT64_MAX;
	volatile uint8_t x54 = 28U;
	static int16_t x55 = INT16_MIN;
	int8_t x56 = 24;
	static volatile uint64_t t9 = UINT64_MAX;

    t9 = (x53>>((x54-x55)<=x56));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MAX;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -170793140279LL;
	int32_t t10 = -965;

    t10 = (x57>>((x58-x59)<=x60));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MAX;
	volatile uint64_t x63 = 48LLU;
	uint32_t x64 = 11010827U;

    t11 = (x61>>((x62-x63)<=x64));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x66 = 0;
	int16_t x67 = -27;
	volatile uint16_t x68 = UINT16_MAX;
	uint32_t t12 = 225570U;

    t12 = (x65>>((x66-x67)<=x68));

    if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x69 = 347U;
	int32_t x70 = -1;
	static uint32_t x71 = UINT32_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t13 = -12;

    t13 = (x69>>((x70-x71)<=x72));

    if (t13 != 173) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t14 = -2;

    t14 = (x73>>((x74-x75)<=x76));

    if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = 0LL;
	volatile int16_t x82 = INT16_MAX;
	static int16_t x83 = -1;
	int64_t t15 = -89279LL;

    t15 = (x81>>((x82-x83)<=x84));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = 1;
	uint64_t x86 = 317508019914509LLU;
	volatile uint64_t x87 = UINT64_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t16 = 6853;

    t16 = (x85>>((x86-x87)<=x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x92 = UINT64_MAX;
	static int32_t t17 = 1;

    t17 = (x89>>((x90-x91)<=x92));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x100 = 1889;
	static volatile uint32_t t18 = 50297U;

    t18 = (x97>>((x98-x99)<=x100));

    if (t18 != 2147483647U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x113 = 1993680859U;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -31;
	static int16_t x116 = -1;

    t19 = (x113>>((x114-x115)<=x116));

    if (t19 != 996840429U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	int8_t x126 = 6;
	uint32_t x127 = 87292203U;
	uint16_t x128 = 4U;
	volatile int32_t t20 = -7965663;

    t20 = (x125>>((x126-x127)<=x128));

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x129 = 58U;
	int8_t x132 = 1;
	static int32_t t21 = -971;

    t21 = (x129>>((x130-x131)<=x132));

    if (t21 != 58) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x133 = 92U;
	uint32_t x134 = 0U;
	int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t22 = 113;

    t22 = (x133>>((x134-x135)<=x136));

    if (t22 != 46) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x142 = 439U;
	uint64_t x143 = 168522LLU;
	volatile uint64_t t23 = 71474181LLU;

    t23 = (x141>>((x142-x143)<=x144));

    if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x153 = INT32_MAX;
	static int32_t x154 = -31563948;
	static int8_t x155 = -1;
	int32_t x156 = -94648;
	static int32_t t24 = 1;

    t24 = (x153>>((x154-x155)<=x156));

    if (t24 != 1073741823) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x157 = UINT8_MAX;
	int8_t x158 = -1;
	volatile int16_t x159 = 49;
	static int8_t x160 = -1;
	int32_t t25 = -816145;

    t25 = (x157>>((x158-x159)<=x160));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x167 = -1;
	int64_t x168 = INT64_MIN;
	volatile uint32_t t26 = 377587U;

    t26 = (x165>>((x166-x167)<=x168));

    if (t26 != 1567103632U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x177 = INT16_MAX;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = 0;
	volatile int64_t x180 = INT64_MAX;

    t27 = (x177>>((x178-x179)<=x180));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x189 = 290228225LLU;
	static int32_t x190 = -27;
	volatile int64_t x191 = -176579449LL;
	int64_t x192 = INT64_MIN;

    t28 = (x189>>((x190-x191)<=x192));

    if (t28 != 290228225LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x194 = INT16_MAX;
	static int32_t x195 = INT32_MAX;
	volatile int32_t t29 = 4037706;

    t29 = (x193>>((x194-x195)<=x196));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x197 = UINT64_MAX;
	static uint64_t x198 = 593858LLU;
	uint64_t x199 = 44053444LLU;
	uint64_t t30 = UINT64_MAX;

    t30 = (x197>>((x198-x199)<=x200));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	int32_t x206 = -453938;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	uint64_t t31 = UINT64_MAX;

    t31 = (x205>>((x206-x207)<=x208));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x217 = 5086965U;
	volatile int64_t x218 = -1LL;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	volatile uint32_t t32 = 15U;

    t32 = (x217>>((x218-x219)<=x220));

    if (t32 != 5086965U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x229 = UINT8_MAX;
	volatile int64_t x230 = 191876316LL;
	int64_t x232 = INT64_MIN;
	int32_t t33 = -266408895;

    t33 = (x229>>((x230-x231)<=x232));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	int32_t t34 = 5409;

    t34 = (x233>>((x234-x235)<=x236));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x237 = 43U;
	static volatile int8_t x240 = -1;
	static int32_t t35 = -54689223;

    t35 = (x237>>((x238-x239)<=x240));

    if (t35 != 21) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x245 = 53;
	uint64_t x246 = 11LLU;
	volatile int8_t x248 = INT8_MIN;
	int32_t t36 = -7;

    t36 = (x245>>((x246-x247)<=x248));

    if (t36 != 26) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x253 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t37 = 5109578854LLU;

    t37 = (x253>>((x254-x255)<=x256));

    if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x257 = 860LL;
	uint64_t x258 = UINT64_MAX;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 359128720267007LLU;

    t38 = (x257>>((x258-x259)<=x260));

    if (t38 != 860LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x269 = 2329790235911158615LLU;
	int32_t x271 = 260538243;
	int8_t x272 = INT8_MIN;
	uint64_t t39 = 2253994LLU;

    t39 = (x269>>((x270-x271)<=x272));

    if (t39 != 1164895117955579307LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x278 = 95434441281286LLU;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	int32_t t40 = -477;

    t40 = (x277>>((x278-x279)<=x280));

    if (t40 != 359) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	uint8_t x283 = 36U;
	int64_t x284 = 470026LL;
	static volatile uint32_t t41 = 0U;

    t41 = (x281>>((x282-x283)<=x284));

    if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x285 = UINT32_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	int64_t x288 = -1LL;
	uint32_t t42 = UINT32_MAX;

    t42 = (x285>>((x286-x287)<=x288));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x293 = 16723U;
	int8_t x295 = INT8_MAX;
	uint8_t x296 = 3U;
	volatile int32_t t43 = -38353;

    t43 = (x293>>((x294-x295)<=x296));

    if (t43 != 16723) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x302 = UINT64_MAX;
	static int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t44 = 78660297;

    t44 = (x301>>((x302-x303)<=x304));

    if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MAX;
	uint8_t x307 = 1U;
	static int64_t x308 = 672618420379LL;
	volatile int32_t t45 = 6;

    t45 = (x305>>((x306-x307)<=x308));

    if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	static volatile uint16_t x312 = UINT16_MAX;
	int32_t t46 = -935837;

    t46 = (x309>>((x310-x311)<=x312));

    if (t46 != 172325172) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x317 = 266163U;
	volatile int8_t x318 = INT8_MIN;
	static volatile int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;

    t47 = (x317>>((x318-x319)<=x320));

    if (t47 != 266163U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x321 = INT64_MAX;
	volatile uint32_t x322 = 61U;
	static volatile int32_t x324 = INT32_MAX;
	int64_t t48 = -444660496LL;

    t48 = (x321>>((x322-x323)<=x324));

    if (t48 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x325 = 5;
	uint32_t x326 = 65U;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t49 = -82;

    t49 = (x325>>((x326-x327)<=x328));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 4LLU;
	static uint16_t x331 = 12U;
	uint16_t x332 = 7U;
	volatile int32_t t50 = 251829;

    t50 = (x329>>((x330-x331)<=x332));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	static int32_t x336 = -1;
	uint32_t t51 = 51949U;

    t51 = (x333>>((x334-x335)<=x336));

    if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x341 = 1091U;
	int8_t x342 = INT8_MIN;
	int16_t x343 = -7;
	int16_t x344 = INT16_MIN;
	volatile uint32_t t52 = 456U;

    t52 = (x341>>((x342-x343)<=x344));

    if (t52 != 1091U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x353 = 7U;
	volatile int32_t x356 = INT32_MAX;
	static int32_t t53 = -7;

    t53 = (x353>>((x354-x355)<=x356));

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x357 = 84U;
	volatile int8_t x358 = INT8_MAX;
	uint64_t x359 = 1191387LLU;
	static int8_t x360 = 0;
	volatile int32_t t54 = 42;

    t54 = (x357>>((x358-x359)<=x360));

    if (t54 != 84) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x373 = 1352LLU;
	static uint32_t x374 = 18110434U;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t55 = 121LLU;

    t55 = (x373>>((x374-x375)<=x376));

    if (t55 != 1352LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x383 = INT64_MAX;
	uint64_t t56 = 49562083420200LLU;

    t56 = (x381>>((x382-x383)<=x384));

    if (t56 != 3663LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x385 = 3U;
	int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MAX;

    t57 = (x385>>((x386-x387)<=x388));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	static uint8_t x399 = 0U;
	int16_t x400 = -1;
	static volatile int32_t t58 = 53;

    t58 = (x397>>((x398-x399)<=x400));

    if (t58 != 63) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x401 = UINT16_MAX;
	static int32_t t59 = -19;

    t59 = (x401>>((x402-x403)<=x404));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x405 = UINT32_MAX;
	int8_t x406 = -1;
	volatile int32_t x407 = -812230827;
	uint8_t x408 = 38U;
	uint32_t t60 = UINT32_MAX;

    t60 = (x405>>((x406-x407)<=x408));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x413 = UINT32_MAX;
	uint64_t x414 = UINT64_MAX;

    t61 = (x413>>((x414-x415)<=x416));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x422 = 57LL;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MIN;

    t62 = (x421>>((x422-x423)<=x424));

    if (t62 != 280339) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x425 = INT16_MAX;
	static uint8_t x426 = 59U;
	static int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t63 = -44498139;

    t63 = (x425>>((x426-x427)<=x428));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x446 = -1;
	int16_t x448 = -2577;
	int32_t t64 = 66560776;

    t64 = (x445>>((x446-x447)<=x448));

    if (t64 != 6923) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x454 = UINT32_MAX;
	int64_t x455 = INT64_MAX;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t65 = 0;

    t65 = (x453>>((x454-x455)<=x456));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x457 = 58U;
	volatile int32_t x460 = -1;
	int32_t t66 = 43691;

    t66 = (x457>>((x458-x459)<=x460));

    if (t66 != 29) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x465 = UINT64_MAX;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MIN;
	uint64_t t67 = 9425030LLU;

    t67 = (x465>>((x466-x467)<=x468));

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x473 = 322U;
	volatile uint8_t x474 = 35U;
	int64_t x476 = INT64_MIN;
	static volatile int32_t t68 = 73;

    t68 = (x473>>((x474-x475)<=x476));

    if (t68 != 322) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	uint32_t x483 = UINT32_MAX;
	int64_t x484 = 3638LL;
	volatile int32_t t69 = 532;

    t69 = (x481>>((x482-x483)<=x484));

    if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x486 = -2695;
	int64_t x487 = -1LL;
	volatile int32_t t70 = 104;

    t70 = (x485>>((x486-x487)<=x488));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x489 = INT8_MAX;
	int32_t x490 = INT32_MIN;

    t71 = (x489>>((x490-x491)<=x492));

    if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x497 = INT16_MAX;
	uint8_t x498 = UINT8_MAX;
	int16_t x499 = -1;
	volatile int16_t x500 = INT16_MIN;
	int32_t t72 = -1;

    t72 = (x497>>((x498-x499)<=x500));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x505 = UINT64_MAX;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = 1U;
	static int16_t x508 = INT16_MIN;
	volatile uint64_t t73 = 96455777LLU;

    t73 = (x505>>((x506-x507)<=x508));

    if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x509 = UINT32_MAX;
	int64_t x512 = INT64_MIN;
	volatile uint32_t t74 = UINT32_MAX;

    t74 = (x509>>((x510-x511)<=x512));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x526 = 981052LLU;
	uint32_t x527 = UINT32_MAX;
	volatile int64_t x528 = -71646625LL;
	int32_t t75 = -564;

    t75 = (x525>>((x526-x527)<=x528));

    if (t75 != 1073741823) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x546 = 9LLU;
	int64_t x547 = INT64_MIN;
	static volatile int32_t x548 = -1694480;
	uint64_t t76 = 943532173426LLU;

    t76 = (x545>>((x546-x547)<=x548));

    if (t76 != 56409054303612LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x549 = INT64_MAX;
	int16_t x550 = INT16_MIN;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = -1;
	volatile int64_t t77 = 6LL;

    t77 = (x549>>((x550-x551)<=x552));

    if (t77 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x553 = 1U;
	volatile uint32_t t78 = 12453U;

    t78 = (x553>>((x554-x555)<=x556));

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x558 = -270729545976LL;
	int64_t x559 = -101LL;
	static int16_t x560 = INT16_MIN;

    t79 = (x557>>((x558-x559)<=x560));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x562 = 15708136699LLU;
	volatile int16_t x563 = 6;
	int16_t x564 = INT16_MIN;
	int32_t t80 = 216219508;

    t80 = (x561>>((x562-x563)<=x564));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x574 = 6;
	volatile int8_t x576 = -20;
	int32_t t81 = -2643;

    t81 = (x573>>((x574-x575)<=x576));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x577 = 3U;
	uint16_t x580 = 16309U;
	int32_t t82 = 15757204;

    t82 = (x577>>((x578-x579)<=x580));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x597 = UINT32_MAX;
	uint64_t x598 = 1LLU;
	int16_t x599 = 560;
	int8_t x600 = -1;
	uint32_t t83 = 0U;

    t83 = (x597>>((x598-x599)<=x600));

    if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x601 = 0;
	uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MIN;
	int16_t x604 = -1;
	int32_t t84 = -2;

    t84 = (x601>>((x602-x603)<=x604));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x605 = 8U;
	int32_t x606 = INT32_MAX;
	static uint32_t x607 = 200373U;
	uint8_t x608 = 1U;
	volatile int32_t t85 = -712030029;

    t85 = (x605>>((x606-x607)<=x608));

    if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x615 = UINT8_MAX;
	static uint64_t x616 = 1182366505606931LLU;
	int32_t t86 = 4782036;

    t86 = (x613>>((x614-x615)<=x616));

    if (t86 != 103) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x617 = INT32_MAX;
	volatile int16_t x618 = INT16_MIN;
	volatile int8_t x619 = -1;
	static uint64_t x620 = UINT64_MAX;
	int32_t t87 = -23;

    t87 = (x617>>((x618-x619)<=x620));

    if (t87 != 1073741823) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x622 = INT32_MIN;
	volatile uint32_t x623 = UINT32_MAX;
	volatile int32_t x624 = INT32_MIN;
	uint64_t t88 = UINT64_MAX;

    t88 = (x621>>((x622-x623)<=x624));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x625 = UINT32_MAX;
	static int16_t x626 = INT16_MIN;
	int64_t x627 = -15451717518444LL;
	volatile int32_t x628 = 1;
	uint32_t t89 = UINT32_MAX;

    t89 = (x625>>((x626-x627)<=x628));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x630 = INT32_MIN;
	static int16_t x632 = INT16_MIN;

    t90 = (x629>>((x630-x631)<=x632));

    if (t90 != 63) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x641 = 1;
	uint8_t x642 = 1U;
	volatile uint64_t x643 = 2309293170104310LLU;
	uint16_t x644 = UINT16_MAX;
	static int32_t t91 = 1;

    t91 = (x641>>((x642-x643)<=x644));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x649 = 3;
	volatile int8_t x650 = -1;
	volatile int64_t x651 = INT64_MIN;
	int64_t x652 = INT64_MAX;
	static int32_t t92 = 140810127;

    t92 = (x649>>((x650-x651)<=x652));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x666 = UINT64_MAX;
	uint64_t x667 = 468837LLU;
	int64_t x668 = -1LL;
	static volatile int32_t t93 = 43;

    t93 = (x665>>((x666-x667)<=x668));

    if (t93 != 63) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x669 = INT16_MAX;
	int8_t x670 = INT8_MAX;
	int16_t x672 = INT16_MAX;

    t94 = (x669>>((x670-x671)<=x672));

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x673 = UINT16_MAX;
	int8_t x675 = INT8_MAX;
	volatile int8_t x676 = INT8_MAX;

    t95 = (x673>>((x674-x675)<=x676));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x681 = 28114924691906282LL;
	uint16_t x682 = 0U;
	static int8_t x683 = INT8_MIN;

    t96 = (x681>>((x682-x683)<=x684));

    if (t96 != 28114924691906282LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x685 = 250U;
	static uint64_t x686 = 378370LLU;
	static uint64_t x687 = 287957LLU;
	int16_t x688 = 1;
	uint32_t t97 = 11U;

    t97 = (x685>>((x686-x687)<=x688));

    if (t97 != 250U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x705 = INT8_MAX;
	volatile int64_t x707 = INT64_MIN;
	int8_t x708 = -1;
	static int32_t t98 = 1;

    t98 = (x705>>((x706-x707)<=x708));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x717 = INT8_MAX;
	uint32_t x718 = 13621U;
	int16_t x719 = 14;
	uint8_t x720 = UINT8_MAX;

    t99 = (x717>>((x718-x719)<=x720));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x729 = INT64_MAX;
	static uint64_t x730 = UINT64_MAX;
	static volatile uint64_t x731 = 1333204772886107158LLU;
	int32_t x732 = 6420513;
	int64_t t100 = INT64_MAX;

    t100 = (x729>>((x730-x731)<=x732));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x733 = 201U;
	volatile uint64_t x734 = 72629854213845048LLU;
	volatile int32_t t101 = -967231;

    t101 = (x733>>((x734-x735)<=x736));

    if (t101 != 201) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x737 = 1398U;
	int32_t x738 = INT32_MIN;
	uint64_t x739 = UINT64_MAX;
	int32_t x740 = INT32_MAX;

    t102 = (x737>>((x738-x739)<=x740));

    if (t102 != 1398) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x753 = INT16_MAX;
	int16_t x754 = 3;
	int64_t x756 = -1LL;
	static int32_t t103 = 387005;

    t103 = (x753>>((x754-x755)<=x756));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x757 = 1U;
	volatile int16_t x758 = INT16_MIN;
	int16_t x759 = INT16_MAX;
	int64_t x760 = INT64_MIN;
	int32_t t104 = 0;

    t104 = (x757>>((x758-x759)<=x760));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x770 = INT16_MIN;
	int16_t x771 = 30;
	int8_t x772 = -1;

    t105 = (x769>>((x770-x771)<=x772));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x777 = INT32_MAX;
	int16_t x778 = -1;
	int8_t x779 = INT8_MAX;
	static int8_t x780 = 3;

    t106 = (x777>>((x778-x779)<=x780));

    if (t106 != 1073741823) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x785 = 87U;
	static uint32_t x786 = 335U;
	volatile int64_t x788 = INT64_MIN;
	volatile int32_t t107 = 1;

    t107 = (x785>>((x786-x787)<=x788));

    if (t107 != 87) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x801 = 22;
	int16_t x802 = INT16_MIN;
	int32_t x803 = 11646;
	int32_t x804 = INT32_MIN;

    t108 = (x801>>((x802-x803)<=x804));

    if (t108 != 22) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x813 = 0;
	int32_t x814 = -62011809;
	uint32_t x815 = 515018U;

    t109 = (x813>>((x814-x815)<=x816));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x818 = 20;
	int16_t x819 = -19;
	int32_t t110 = -9847;

    t110 = (x817>>((x818-x819)<=x820));

    if (t110 != 16383) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x821 = 5604865749LL;
	static int8_t x822 = INT8_MAX;
	static int16_t x823 = -1;
	int8_t x824 = INT8_MAX;

    t111 = (x821>>((x822-x823)<=x824));

    if (t111 != 5604865749LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x829 = 24;
	int16_t x831 = -1;
	static int8_t x832 = INT8_MIN;
	volatile int32_t t112 = 217;

    t112 = (x829>>((x830-x831)<=x832));

    if (t112 != 24) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x837 = UINT16_MAX;
	int32_t x838 = -1;
	int16_t x839 = INT16_MIN;
	uint64_t x840 = 266LLU;
	volatile int32_t t113 = -238374748;

    t113 = (x837>>((x838-x839)<=x840));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x841 = 26;
	volatile uint32_t x842 = 65583946U;
	static uint8_t x843 = 8U;
	volatile int32_t t114 = 1;

    t114 = (x841>>((x842-x843)<=x844));

    if (t114 != 26) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x849 = 51U;
	int8_t x850 = -8;
	int16_t x851 = 12;
	int16_t x852 = INT16_MAX;
	int32_t t115 = 16;

    t115 = (x849>>((x850-x851)<=x852));

    if (t115 != 25) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x861 = INT32_MAX;
	static volatile uint64_t x863 = 108LLU;
	int16_t x864 = INT16_MAX;
	int32_t t116 = INT32_MAX;

    t116 = (x861>>((x862-x863)<=x864));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x874 = 2U;
	int32_t x875 = -1;
	volatile int32_t t117 = 1;

    t117 = (x873>>((x874-x875)<=x876));

    if (t117 != 6) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x889 = INT64_MAX;
	uint16_t x890 = UINT16_MAX;
	volatile int16_t x891 = INT16_MIN;
	uint32_t x892 = 861U;
	int64_t t118 = INT64_MAX;

    t118 = (x889>>((x890-x891)<=x892));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x897 = 12222U;
	volatile int32_t x898 = -6489;
	static volatile int64_t x899 = 10585LL;
	uint8_t x900 = UINT8_MAX;

    t119 = (x897>>((x898-x899)<=x900));

    if (t119 != 6111) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x902 = 0;
	static uint32_t x903 = 254651U;
	volatile int32_t t120 = -51;

    t120 = (x901>>((x902-x903)<=x904));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x909 = 10410254451LLU;
	int8_t x910 = INT8_MIN;
	static int16_t x911 = -4;
	static volatile uint64_t t121 = 1LLU;

    t121 = (x909>>((x910-x911)<=x912));

    if (t121 != 10410254451LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x913 = UINT32_MAX;
	uint64_t x914 = 1LLU;
	int8_t x915 = INT8_MAX;
	static volatile uint8_t x916 = 0U;
	static volatile uint32_t t122 = UINT32_MAX;

    t122 = (x913>>((x914-x915)<=x916));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x922 = -2124272617102LL;
	int16_t x923 = INT16_MIN;
	int16_t x924 = -1;
	static volatile uint64_t t123 = 900LLU;

    t123 = (x921>>((x922-x923)<=x924));

    if (t123 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x926 = -1;
	uint32_t x927 = UINT32_MAX;
	uint64_t x928 = UINT64_MAX;
	int32_t t124 = -346;

    t124 = (x925>>((x926-x927)<=x928));

    if (t124 != 1073741823) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x945 = INT32_MAX;
	int64_t x946 = 73949902263923LL;
	int64_t x947 = INT64_MAX;
	uint32_t x948 = 292460U;
	volatile int32_t t125 = 52880322;

    t125 = (x945>>((x946-x947)<=x948));

    if (t125 != 1073741823) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x949 = UINT16_MAX;
	volatile int32_t x951 = INT32_MAX;
	int32_t t126 = 8257243;

    t126 = (x949>>((x950-x951)<=x952));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x957 = 94115034338LLU;
	int8_t x958 = INT8_MAX;
	int8_t x959 = -42;
	static int32_t x960 = INT32_MIN;
	uint64_t t127 = 4879LLU;

    t127 = (x957>>((x958-x959)<=x960));

    if (t127 != 94115034338LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x961 = UINT64_MAX;
	int8_t x962 = INT8_MIN;
	static int8_t x964 = INT8_MAX;

    t128 = (x961>>((x962-x963)<=x964));

    if (t128 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x965 = 5851LL;
	uint32_t x967 = 73430514U;
	int16_t x968 = INT16_MIN;
	int64_t t129 = 175546484093325218LL;

    t129 = (x965>>((x966-x967)<=x968));

    if (t129 != 2925LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x969 = INT8_MAX;
	int8_t x970 = 7;
	int8_t x971 = INT8_MIN;

    t130 = (x969>>((x970-x971)<=x972));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x973 = 3U;
	int64_t x975 = -7823102716547132LL;
	volatile int32_t t131 = 21963;

    t131 = (x973>>((x974-x975)<=x976));

    if (t131 != 3) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x977 = 411U;
	int16_t x978 = INT16_MAX;
	int32_t x979 = -1;
	volatile int32_t x980 = -29018;

    t132 = (x977>>((x978-x979)<=x980));

    if (t132 != 411) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x997 = UINT32_MAX;
	volatile uint8_t x998 = 3U;
	uint8_t x999 = 15U;
	uint32_t x1000 = UINT32_MAX;
	uint32_t t133 = 6130U;

    t133 = (x997>>((x998-x999)<=x1000));

    if (t133 != 2147483647U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1002 = -1;
	uint8_t x1003 = 27U;
	volatile int32_t t134 = 15;

    t134 = (x1001>>((x1002-x1003)<=x1004));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1005 = 67LLU;
	static volatile int16_t x1006 = -1;
	int16_t x1008 = -1;
	uint64_t t135 = 1339227490832LLU;

    t135 = (x1005>>((x1006-x1007)<=x1008));

    if (t135 != 33LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1013 = 1U;
	volatile int8_t x1015 = INT8_MIN;
	static uint8_t x1016 = 0U;
	volatile uint32_t t136 = 1387789111U;

    t136 = (x1013>>((x1014-x1015)<=x1016));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1017 = UINT8_MAX;
	uint16_t x1018 = 14540U;
	volatile int16_t x1019 = INT16_MIN;
	static volatile int8_t x1020 = INT8_MAX;
	static volatile int32_t t137 = 59948;

    t137 = (x1017>>((x1018-x1019)<=x1020));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x1029 = 3969207U;
	uint8_t x1030 = UINT8_MAX;
	uint16_t x1031 = 7242U;
	uint8_t x1032 = 16U;
	uint32_t t138 = 388670U;

    t138 = (x1029>>((x1030-x1031)<=x1032));

    if (t138 != 1984603U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1033 = 0U;
	int64_t x1034 = 13618025965910548LL;
	static int32_t x1036 = INT32_MIN;
	volatile int32_t t139 = -27231735;

    t139 = (x1033>>((x1034-x1035)<=x1036));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1045 = UINT8_MAX;
	static int16_t x1046 = INT16_MAX;
	uint8_t x1047 = 3U;
	uint64_t x1048 = 27LLU;
	static volatile int32_t t140 = 183191248;

    t140 = (x1045>>((x1046-x1047)<=x1048));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1057 = INT32_MAX;
	uint8_t x1059 = UINT8_MAX;
	int32_t x1060 = INT32_MIN;
	volatile int32_t t141 = INT32_MAX;

    t141 = (x1057>>((x1058-x1059)<=x1060));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1065 = INT16_MAX;
	uint64_t x1066 = 2846979535929280LLU;
	static uint32_t x1067 = 28528U;
	int8_t x1068 = 1;
	int32_t t142 = -66374;

    t142 = (x1065>>((x1066-x1067)<=x1068));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1069 = 0U;
	volatile int64_t x1070 = -1LL;
	static int32_t x1071 = -1;
	static uint32_t x1072 = 6272U;
	volatile int32_t t143 = 11041;

    t143 = (x1069>>((x1070-x1071)<=x1072));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1073 = INT64_MAX;
	volatile int32_t x1074 = INT32_MAX;
	int64_t x1075 = INT64_MAX;
	int32_t x1076 = -1455;
	int64_t t144 = 3LL;

    t144 = (x1073>>((x1074-x1075)<=x1076));

    if (t144 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1077 = 13;
	int16_t x1078 = INT16_MAX;
	int64_t x1079 = -1LL;
	int64_t x1080 = INT64_MIN;

    t145 = (x1077>>((x1078-x1079)<=x1080));

    if (t145 != 13) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x1081 = 16732944212LLU;
	int32_t x1082 = -1;
	volatile int32_t x1084 = INT32_MIN;

    t146 = (x1081>>((x1082-x1083)<=x1084));

    if (t146 != 16732944212LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x1090 = INT32_MIN;
	volatile int8_t x1092 = 6;

    t147 = (x1089>>((x1090-x1091)<=x1092));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1114 = -1;
	volatile uint32_t x1116 = 346344684U;
	volatile uint32_t t148 = 4037U;

    t148 = (x1113>>((x1114-x1115)<=x1116));

    if (t148 != 2147483647U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x1117 = UINT8_MAX;
	uint64_t x1118 = UINT64_MAX;
	int32_t x1119 = INT32_MAX;
	volatile int32_t x1120 = -1;
	static int32_t t149 = 11843;

    t149 = (x1117>>((x1118-x1119)<=x1120));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1121 = UINT32_MAX;
	int8_t x1123 = -1;
	uint16_t x1124 = 3U;
	uint32_t t150 = 925U;

    t150 = (x1121>>((x1122-x1123)<=x1124));

    if (t150 != 2147483647U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1125 = 8LLU;
	int64_t x1126 = INT64_MIN;
	static int32_t x1128 = INT32_MIN;

    t151 = (x1125>>((x1126-x1127)<=x1128));

    if (t151 != 4LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1130 = INT64_MIN;
	int8_t x1131 = INT8_MIN;
	static uint32_t x1132 = UINT32_MAX;
	int64_t t152 = -15397478711340LL;

    t152 = (x1129>>((x1130-x1131)<=x1132));

    if (t152 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x1137 = 26277628LLU;
	int16_t x1138 = INT16_MIN;
	volatile uint64_t t153 = 64245429159994LLU;

    t153 = (x1137>>((x1138-x1139)<=x1140));

    if (t153 != 13138814LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1145 = 6LL;
	int16_t x1146 = INT16_MAX;
	uint32_t x1147 = 591U;
	volatile int64_t x1148 = -10250552144LL;
	int64_t t154 = 60548021264LL;

    t154 = (x1145>>((x1146-x1147)<=x1148));

    if (t154 != 6LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x1170 = -1LL;
	int8_t x1171 = INT8_MIN;
	int16_t x1172 = INT16_MAX;
	volatile int32_t t155 = 7975004;

    t155 = (x1169>>((x1170-x1171)<=x1172));

    if (t155 != 63) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1181 = 3955;
	uint32_t x1182 = 177915774U;
	volatile uint8_t x1183 = 26U;
	int16_t x1184 = INT16_MIN;
	int32_t t156 = 0;

    t156 = (x1181>>((x1182-x1183)<=x1184));

    if (t156 != 1977) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1201 = 4U;
	int64_t x1202 = 2949LL;
	int64_t x1204 = INT64_MIN;
	volatile int32_t t157 = -72776352;

    t157 = (x1201>>((x1202-x1203)<=x1204));

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1213 = INT8_MAX;
	int32_t x1214 = 84991843;
	int8_t x1215 = INT8_MIN;
	uint8_t x1216 = 1U;
	int32_t t158 = -995968506;

    t158 = (x1213>>((x1214-x1215)<=x1216));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1222 = INT64_MIN;
	int32_t x1223 = INT32_MIN;
	uint64_t x1224 = UINT64_MAX;
	volatile int32_t t159 = 4;

    t159 = (x1221>>((x1222-x1223)<=x1224));

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1225 = 9562;
	int64_t x1226 = -43707223863331444LL;
	static int32_t x1227 = -5683901;
	volatile int64_t x1228 = -1LL;
	volatile int32_t t160 = -973359;

    t160 = (x1225>>((x1226-x1227)<=x1228));

    if (t160 != 4781) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1234 = -1LL;
	volatile uint32_t t161 = 152608U;

    t161 = (x1233>>((x1234-x1235)<=x1236));

    if (t161 != 829653U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1237 = 5995U;
	int8_t x1238 = 0;
	uint16_t x1239 = UINT16_MAX;
	static int32_t x1240 = -1;

    t162 = (x1237>>((x1238-x1239)<=x1240));

    if (t162 != 2997) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x1245 = INT8_MAX;
	int16_t x1246 = INT16_MIN;
	int16_t x1247 = -3;
	uint16_t x1248 = 59U;

    t163 = (x1245>>((x1246-x1247)<=x1248));

    if (t163 != 63) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1285 = 9188167115956LL;
	int8_t x1286 = -1;
	uint16_t x1288 = 3U;
	int64_t t164 = -203402343LL;

    t164 = (x1285>>((x1286-x1287)<=x1288));

    if (t164 != 4594083557978LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1293 = 11531;
	uint8_t x1294 = 4U;
	uint8_t x1295 = UINT8_MAX;
	static int16_t x1296 = INT16_MAX;
	int32_t t165 = 55703;

    t165 = (x1293>>((x1294-x1295)<=x1296));

    if (t165 != 5765) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x1314 = -1;
	int8_t x1315 = 0;
	int16_t x1316 = -1;

    t166 = (x1313>>((x1314-x1315)<=x1316));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1321 = 13LL;
	static uint16_t x1322 = UINT16_MAX;
	int8_t x1323 = INT8_MIN;
	volatile int32_t x1324 = INT32_MIN;
	volatile int64_t t167 = -18LL;

    t167 = (x1321>>((x1322-x1323)<=x1324));

    if (t167 != 13LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1325 = UINT8_MAX;
	int64_t x1327 = -1LL;
	volatile int32_t x1328 = 2841;
	static int32_t t168 = 1706815;

    t168 = (x1325>>((x1326-x1327)<=x1328));

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1334 = -292;
	uint32_t x1336 = 207377956U;
	volatile uint32_t t169 = 4U;

    t169 = (x1333>>((x1334-x1335)<=x1336));

    if (t169 != 8484U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1338 = INT16_MIN;
	volatile int16_t x1339 = INT16_MIN;
	uint64_t t170 = 36LLU;

    t170 = (x1337>>((x1338-x1339)<=x1340));

    if (t170 != 1430516LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1349 = UINT32_MAX;
	volatile uint8_t x1350 = UINT8_MAX;
	uint64_t x1351 = 12395716237880447LLU;
	volatile int16_t x1352 = INT16_MIN;
	volatile uint32_t t171 = 69538U;

    t171 = (x1349>>((x1350-x1351)<=x1352));

    if (t171 != 2147483647U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1357 = 4263297956LL;
	static int8_t x1358 = INT8_MAX;
	int32_t x1359 = -218425245;
	static uint16_t x1360 = UINT16_MAX;
	int64_t t172 = -1026500LL;

    t172 = (x1357>>((x1358-x1359)<=x1360));

    if (t172 != 4263297956LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1361 = UINT16_MAX;
	int64_t x1362 = 1LL;
	volatile int8_t x1363 = -1;
	uint8_t x1364 = 21U;

    t173 = (x1361>>((x1362-x1363)<=x1364));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1381 = UINT32_MAX;
	static uint32_t x1382 = 2090768U;
	static volatile uint8_t x1383 = UINT8_MAX;
	int8_t x1384 = INT8_MIN;
	volatile uint32_t t174 = 1655U;

    t174 = (x1381>>((x1382-x1383)<=x1384));

    if (t174 != 2147483647U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1393 = 1;
	static volatile int32_t x1394 = -13;
	uint16_t x1395 = UINT16_MAX;
	int64_t x1396 = INT64_MAX;
	int32_t t175 = -192085393;

    t175 = (x1393>>((x1394-x1395)<=x1396));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1397 = 868U;
	uint32_t x1398 = 1325100872U;
	int8_t x1399 = -7;
	uint32_t x1400 = UINT32_MAX;
	int32_t t176 = 320023115;

    t176 = (x1397>>((x1398-x1399)<=x1400));

    if (t176 != 434) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x1401 = UINT16_MAX;
	volatile int64_t x1402 = 1995263177817020LL;
	int16_t x1403 = INT16_MIN;
	uint32_t x1404 = 0U;
	volatile int32_t t177 = 29772;

    t177 = (x1401>>((x1402-x1403)<=x1404));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1405 = 15U;
	static int64_t x1406 = INT64_MAX;
	uint16_t x1407 = 14547U;
	uint16_t x1408 = 24503U;

    t178 = (x1405>>((x1406-x1407)<=x1408));

    if (t178 != 15) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1410 = 6058150U;
	static int16_t x1411 = -110;
	uint32_t x1412 = UINT32_MAX;
	volatile int32_t t179 = -930708397;

    t179 = (x1409>>((x1410-x1411)<=x1412));

    if (t179 != 1846) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1414 = INT32_MIN;
	uint64_t x1415 = 8821930LLU;
	int32_t x1416 = 191;
	int32_t t180 = 63;

    t180 = (x1413>>((x1414-x1415)<=x1416));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1419 = 3673408540LLU;
	uint8_t x1420 = UINT8_MAX;
	int32_t t181 = -5;

    t181 = (x1417>>((x1418-x1419)<=x1420));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x1421 = 18U;
	volatile uint16_t x1423 = 1727U;
	uint32_t x1424 = UINT32_MAX;
	volatile int32_t t182 = -1;

    t182 = (x1421>>((x1422-x1423)<=x1424));

    if (t182 != 9) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1429 = INT16_MAX;
	int64_t x1430 = -12203LL;
	int16_t x1431 = INT16_MIN;
	static uint8_t x1432 = UINT8_MAX;
	int32_t t183 = 14075;

    t183 = (x1429>>((x1430-x1431)<=x1432));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1433 = 1LLU;
	int32_t x1434 = INT32_MIN;
	uint64_t x1435 = 31257196563LLU;
	uint32_t x1436 = 1U;

    t184 = (x1433>>((x1434-x1435)<=x1436));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1437 = 37038999992381330LL;
	static int16_t x1438 = INT16_MAX;
	uint16_t x1440 = 11U;
	volatile int64_t t185 = 43LL;

    t185 = (x1437>>((x1438-x1439)<=x1440));

    if (t185 != 37038999992381330LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x1451 = -378196900948LL;
	int16_t x1452 = -1;
	int32_t t186 = INT32_MAX;

    t186 = (x1449>>((x1450-x1451)<=x1452));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1453 = 59906990LLU;
	int8_t x1456 = INT8_MIN;
	volatile uint64_t t187 = 13618LLU;

    t187 = (x1453>>((x1454-x1455)<=x1456));

    if (t187 != 29953495LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1457 = 25435U;
	int16_t x1458 = -3488;
	static int16_t x1459 = INT16_MIN;
	volatile int8_t x1460 = -1;
	volatile int32_t t188 = 810436250;

    t188 = (x1457>>((x1458-x1459)<=x1460));

    if (t188 != 25435) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1479 = -1;
	int16_t x1480 = INT16_MIN;
	static volatile int32_t t189 = -282589277;

    t189 = (x1477>>((x1478-x1479)<=x1480));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1481 = INT16_MAX;
	uint8_t x1483 = 3U;
	uint16_t x1484 = 1173U;
	volatile int32_t t190 = 469022784;

    t190 = (x1481>>((x1482-x1483)<=x1484));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1502 = 13223471540475124LL;
	uint64_t x1503 = 3487709466LLU;
	static int64_t x1504 = INT64_MIN;

    t191 = (x1501>>((x1502-x1503)<=x1504));

    if (t191 != 111135560LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1505 = UINT8_MAX;
	uint16_t x1506 = 109U;
	static uint8_t x1508 = 28U;
	int32_t t192 = -5;

    t192 = (x1505>>((x1506-x1507)<=x1508));

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1513 = UINT64_MAX;
	int8_t x1514 = -1;
	volatile uint32_t x1515 = UINT32_MAX;
	int8_t x1516 = INT8_MAX;
	volatile uint64_t t193 = 266181212463LLU;

    t193 = (x1513>>((x1514-x1515)<=x1516));

    if (t193 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1517 = INT32_MAX;
	uint16_t x1518 = 60U;
	static int8_t x1519 = INT8_MIN;
	uint16_t x1520 = 58U;

    t194 = (x1517>>((x1518-x1519)<=x1520));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1525 = 1885877089803108LLU;
	int64_t x1526 = INT64_MIN;
	int16_t x1528 = -3108;
	static uint64_t t195 = 14084852059808LLU;

    t195 = (x1525>>((x1526-x1527)<=x1528));

    if (t195 != 942938544901554LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1533 = 15U;
	static int32_t x1534 = 58707554;
	int32_t x1535 = -1;

    t196 = (x1533>>((x1534-x1535)<=x1536));

    if (t196 != 15) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1541 = 1;
	uint64_t x1542 = 31LLU;
	int32_t x1543 = 3670670;
	static int32_t x1544 = INT32_MIN;
	static int32_t t197 = 21;

    t197 = (x1541>>((x1542-x1543)<=x1544));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1545 = 95;
	int32_t x1546 = -205768;
	volatile int16_t x1547 = INT16_MIN;
	static uint32_t x1548 = UINT32_MAX;

    t198 = (x1545>>((x1546-x1547)<=x1548));

    if (t198 != 47) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1553 = INT8_MAX;
	uint32_t x1554 = 39U;
	int32_t t199 = 8;

    t199 = (x1553>>((x1554-x1555)<=x1556));

    if (t199 != 63) { NG(); } else { ; }
	
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

