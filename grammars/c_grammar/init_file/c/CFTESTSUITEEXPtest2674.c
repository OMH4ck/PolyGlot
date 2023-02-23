
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

static int16_t x1 = INT16_MAX;
int64_t x4 = INT64_MIN;
static volatile int32_t x8 = INT32_MIN;
int16_t x17 = INT16_MAX;
uint8_t x19 = 5U;
uint64_t x23 = 3229847686421429LLU;
volatile uint64_t x28 = 2LLU;
int32_t t6 = -7;
static uint8_t x32 = UINT8_MAX;
volatile int64_t t10 = INT64_MIN;
int64_t x71 = INT64_MIN;
volatile int32_t t17 = -1289;
int16_t x78 = INT16_MAX;
uint8_t x80 = 5U;
volatile int32_t t19 = -1035050778;
volatile int16_t x83 = 0;
volatile int16_t x85 = INT16_MIN;
static volatile int32_t t21 = -449;
int64_t t23 = -9685947492112029LL;
static int16_t x104 = -5599;
int8_t x107 = INT8_MAX;
uint64_t x109 = UINT64_MAX;
int16_t x111 = INT16_MIN;
volatile int8_t x121 = INT8_MIN;
uint32_t x122 = UINT32_MAX;
volatile uint8_t x123 = 60U;
volatile uint32_t x134 = 2143431504U;
int64_t x135 = INT64_MIN;
int32_t x137 = -107618;
static uint16_t x140 = UINT16_MAX;
uint8_t x144 = UINT8_MAX;
static volatile int32_t x152 = INT32_MAX;
int8_t x154 = 1;
int16_t x162 = 15;
int16_t x164 = -1;
int8_t x166 = INT8_MAX;
int64_t x173 = INT64_MIN;
int8_t x175 = 1;
uint32_t x178 = UINT32_MAX;
int16_t x179 = -1;
uint16_t x185 = 6348U;
uint8_t x188 = 24U;
static int8_t x193 = -1;
uint16_t x205 = 6832U;
static int16_t x206 = INT16_MAX;
int16_t x208 = INT16_MIN;
volatile uint16_t x217 = 0U;
static int64_t x218 = INT64_MIN;
uint8_t x220 = 69U;
uint8_t x228 = UINT8_MAX;
int32_t x235 = INT32_MIN;
int8_t x239 = INT8_MAX;
volatile int64_t t59 = INT64_MAX;
volatile int32_t t60 = -1714;
int32_t t61 = -51021335;
uint32_t x254 = 231099U;
volatile int64_t t63 = INT64_MIN;
volatile int8_t x269 = INT8_MAX;
uint64_t x282 = UINT64_MAX;
volatile uint16_t x290 = 211U;
static int16_t x295 = -1;
uint32_t x315 = 24586U;
static int64_t x319 = 974365793LL;
static int32_t t79 = 21106261;
int8_t x321 = INT8_MIN;
int32_t x324 = INT32_MIN;
int32_t x325 = -1;
volatile uint32_t x328 = 0U;
int16_t x331 = 13628;
static uint8_t x334 = 0U;
uint16_t x339 = 4187U;
uint64_t x341 = 1LLU;
static uint16_t x342 = UINT16_MAX;
volatile int32_t t90 = 187410;
int64_t x365 = INT64_MIN;
int64_t t91 = -600936133138LL;
volatile int32_t t92 = 6603488;
volatile uint64_t x373 = 864LLU;
int32_t t95 = 534270795;
volatile int32_t x385 = INT32_MIN;
volatile int32_t t97 = -1011810;
uint64_t x393 = 119513LLU;
static int16_t x396 = INT16_MIN;
int8_t x399 = -1;
int8_t x409 = INT8_MIN;
uint16_t x412 = 379U;
int64_t x414 = 2172748564861521239LL;
int8_t x415 = 60;
int64_t x422 = 1521069645978438LL;
int32_t x424 = -914334929;
volatile int16_t x425 = 1872;
uint64_t t107 = 4855045513229199LLU;
volatile int64_t t108 = 7384671LL;
int64_t x437 = -1LL;
int64_t x444 = INT64_MIN;
static int8_t x446 = -1;
static int32_t x447 = -1;
uint64_t t111 = UINT64_MAX;
volatile int8_t x461 = INT8_MIN;
int32_t t115 = 21494;
int64_t x469 = 13449567LL;
int16_t x470 = 1020;
int32_t x471 = INT32_MAX;
static int8_t x472 = -1;
uint8_t x479 = UINT8_MAX;
int64_t x492 = INT64_MAX;
int16_t x493 = INT16_MIN;
int8_t x504 = -1;
static int32_t t125 = 0;
volatile int32_t t130 = -1927;
uint32_t x528 = 42U;
static uint8_t x529 = UINT8_MAX;
uint16_t x531 = 800U;
volatile int16_t x532 = INT16_MIN;
static int16_t x533 = INT16_MIN;
static uint16_t x536 = UINT16_MAX;
int16_t x538 = INT16_MIN;
int32_t x539 = INT32_MAX;
volatile uint32_t t135 = UINT32_MAX;
uint32_t x545 = UINT32_MAX;
int8_t x551 = INT8_MIN;
int32_t t137 = 1886;
int8_t x553 = -1;
uint32_t x554 = 20869U;
uint16_t x556 = 1U;
int16_t x558 = INT16_MIN;
uint64_t x562 = UINT64_MAX;
static int8_t x564 = INT8_MIN;
volatile int32_t t140 = 527649;
int16_t x569 = INT16_MIN;
static int64_t x588 = INT64_MAX;
static volatile int64_t t146 = -2846LL;
int64_t t147 = 29LL;
int8_t x603 = 61;
int64_t x604 = 33108348773872959LL;
static int32_t t150 = 616;
volatile uint16_t x610 = 277U;
int64_t x612 = 11088464244508LL;
static uint16_t x617 = 10127U;
int8_t x621 = INT8_MAX;
int64_t x622 = INT64_MIN;
uint64_t t156 = 84254392861LLU;
int8_t x631 = -10;
static int16_t x632 = 0;
volatile int64_t t158 = 1752486426839LL;
uint64_t x640 = UINT64_MAX;
uint16_t x643 = 9672U;
volatile uint32_t t161 = 36952U;
int32_t t162 = 4722197;
int64_t x658 = INT64_MIN;
static int32_t t164 = -1323869;
volatile uint64_t x666 = 842510811124LLU;
volatile int32_t t166 = -997259;
uint8_t x675 = 49U;
uint8_t x684 = UINT8_MAX;
static int8_t x687 = 2;
static int32_t t171 = 439247;
int8_t x689 = INT8_MAX;
int64_t x698 = -1LL;
int32_t x700 = 852238;
int32_t x705 = INT32_MAX;
static volatile int32_t t176 = -1;
uint32_t x715 = UINT32_MAX;
static int16_t x719 = 41;
int16_t x720 = INT16_MIN;
int16_t x723 = 12;
uint32_t x725 = 2025U;
int8_t x726 = INT8_MIN;
int32_t x733 = INT32_MIN;
int8_t x739 = INT8_MIN;
static volatile int16_t x747 = INT16_MIN;
int32_t x755 = INT32_MIN;
uint8_t x759 = 5U;
volatile uint32_t x766 = 2174U;
int8_t x770 = 1;
static uint16_t x788 = 0U;
uint8_t x796 = UINT8_MAX;
uint8_t x799 = UINT8_MAX;
volatile int8_t x800 = -59;
volatile int32_t t199 = 0;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	int8_t x3 = 2;
	int32_t t0 = -40;

    t0 = (x1^((x2^x3)>x4));

    if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	volatile int64_t x6 = INT64_MIN;
	int32_t x7 = -3;
	volatile int32_t t1 = -1015;

    t1 = (x5^((x6^x7)>x8));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	static int16_t x10 = INT16_MIN;
	int16_t x11 = 56;
	volatile int32_t x12 = -1;
	int32_t t2 = -1553103;

    t2 = (x9^((x10^x11)>x12));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = INT64_MIN;
	int32_t t3 = 13342;

    t3 = (x13^((x14^x15)>x16));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int16_t x20 = -1;
	volatile int32_t t4 = 92007497;

    t4 = (x17^((x18^x19)>x20));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 119193LLU;
	volatile int8_t x22 = 58;
	int64_t x24 = -1LL;
	volatile uint64_t t5 = 1016325936592LLU;

    t5 = (x21^((x22^x23)>x24));

    if (t5 != 119193LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int16_t x26 = 62;
	uint32_t x27 = 5464U;

    t6 = (x25^((x26^x27)>x28));

    if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x30 = 660;
	int8_t x31 = 1;
	static volatile int32_t t7 = -180006891;

    t7 = (x29^((x30^x31)>x32));

    if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int64_t x34 = INT64_MAX;
	uint64_t x35 = UINT64_MAX;
	static uint64_t x36 = 7183746795819516LLU;
	int64_t t8 = -46841270820LL;

    t8 = (x33^((x34^x35)>x36));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 3U;
	int64_t x38 = -970097190104212LL;
	volatile int8_t x39 = INT8_MAX;
	int16_t x40 = -184;
	int32_t t9 = -8;

    t9 = (x37^((x38^x39)>x40));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	uint16_t x42 = 9995U;
	static int32_t x43 = INT32_MIN;
	static int8_t x44 = INT8_MAX;

    t10 = (x41^((x42^x43)>x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 4020518U;
	volatile int8_t x46 = INT8_MIN;
	int64_t x47 = -2866160476970906147LL;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 191U;

    t11 = (x45^((x46^x47)>x48));

    if (t11 != 4020519U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 14;
	int64_t x50 = -1LL;
	volatile int8_t x51 = INT8_MIN;
	int32_t x52 = -171173;
	int32_t t12 = -309324817;

    t12 = (x49^((x50^x51)>x52));

    if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = UINT16_MAX;
	int16_t x55 = INT16_MIN;
	int8_t x56 = 4;
	uint32_t t13 = UINT32_MAX;

    t13 = (x53^((x54^x55)>x56));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 40U;
	static uint16_t x58 = 12U;
	uint64_t x59 = 2035089672101LLU;
	int32_t x60 = -1;
	static uint32_t t14 = 263555U;

    t14 = (x57^((x58^x59)>x60));

    if (t14 != 40U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 869103U;
	uint32_t x62 = UINT32_MAX;
	volatile int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	uint32_t t15 = 23430U;

    t15 = (x61^((x62^x63)>x64));

    if (t15 != 869103U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = -1;
	int16_t x67 = INT16_MAX;
	int8_t x68 = -8;
	static volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66^x67)>x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	int32_t x70 = INT32_MIN;
	int8_t x72 = INT8_MIN;

    t17 = (x69^((x70^x71)>x72));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	static int32_t x74 = 206;
	int64_t x75 = 9920417262025764LL;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = 30779;

    t18 = (x73^((x74^x75)>x76));

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x77 = 30U;
	int32_t x79 = INT32_MAX;

    t19 = (x77^((x78^x79)>x80));

    if (t19 != 31) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -2120339291065575LL;
	static volatile int16_t x82 = INT16_MIN;
	uint64_t x84 = UINT64_MAX;
	volatile int64_t t20 = -1761032607LL;

    t20 = (x81^((x82^x83)>x84));

    if (t20 != -2120339291065575LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MAX;
	int64_t x87 = -22659920452LL;
	uint16_t x88 = 62U;

    t21 = (x85^((x86^x87)>x88));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = 357062LL;
	int32_t t22 = INT32_MIN;

    t22 = (x89^((x90^x91)>x92));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	static volatile int64_t x94 = INT64_MAX;
	static uint16_t x95 = 110U;
	int64_t x96 = INT64_MIN;

    t23 = (x93^((x94^x95)>x96));

    if (t23 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = -1LL;
	volatile int32_t x98 = -303564;
	volatile int32_t x99 = INT32_MIN;
	volatile int16_t x100 = INT16_MAX;
	int64_t t24 = 3090084759LL;

    t24 = (x97^((x98^x99)>x100));

    if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 161618462U;
	volatile uint16_t x102 = 87U;
	static uint8_t x103 = 31U;
	uint32_t t25 = 2465U;

    t25 = (x101^((x102^x103)>x104));

    if (t25 != 161618463U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 40499465;

    t26 = (x105^((x106^x107)>x108));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 67LLU;
	uint32_t x112 = UINT32_MAX;
	uint64_t t27 = 8553816671LLU;

    t27 = (x109^((x110^x111)>x112));

    if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MAX;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = 563725058586270LL;
	static volatile int64_t t28 = INT64_MIN;

    t28 = (x113^((x114^x115)>x116));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 155;

    t29 = (x117^((x118^x119)>x120));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x124 = INT16_MAX;
	static int32_t t30 = 233;

    t30 = (x121^((x122^x123)>x124));

    if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = 32047635;
	int16_t x126 = INT16_MIN;
	int16_t x127 = 2475;
	volatile int32_t x128 = -1;
	volatile int32_t t31 = 9465;

    t31 = (x125^((x126^x127)>x128));

    if (t31 != 32047635) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MAX;
	static volatile int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -122;

    t32 = (x129^((x130^x131)>x132));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = -1;
	int8_t x136 = 29;
	int32_t t33 = 1859110;

    t33 = (x133^((x134^x135)>x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = INT16_MIN;
	static uint32_t x139 = 4U;
	int32_t t34 = -1;

    t34 = (x137^((x138^x139)>x140));

    if (t34 != -107617) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 260919277U;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	volatile uint32_t t35 = 126421U;

    t35 = (x141^((x142^x143)>x144));

    if (t35 != 260919276U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	int32_t x148 = 38836615;
	int32_t t36 = 332134086;

    t36 = (x145^((x146^x147)>x148));

    if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	volatile int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int64_t t37 = 643337687857265LL;

    t37 = (x149^((x150^x151)>x152));

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int16_t x155 = 0;
	uint8_t x156 = 3U;
	static int32_t t38 = -547150645;

    t38 = (x153^((x154^x155)>x156));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int64_t x158 = -1LL;
	uint32_t x159 = 445U;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile int32_t t39 = 52;

    t39 = (x157^((x158^x159)>x160));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MIN;
	static volatile int32_t x163 = -1;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x161^((x162^x163)>x164));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 1270;
	static int8_t x167 = -1;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t41 = 752239989;

    t41 = (x165^((x166^x167)>x168));

    if (t41 != 1271) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -2845332600LL;
	volatile int8_t x172 = -1;
	volatile int32_t t42 = -3543;

    t42 = (x169^((x170^x171)>x172));

    if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	int64_t t43 = INT64_MIN;

    t43 = (x173^((x174^x175)>x176));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x180 = -63;
	int64_t t44 = INT64_MIN;

    t44 = (x177^((x178^x179)>x180));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile int8_t x182 = 0;
	int32_t x183 = 50456;
	int16_t x184 = -1;
	static volatile uint64_t t45 = 1591477LLU;

    t45 = (x181^((x182^x183)>x184));

    if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = 3404U;
	static int32_t x187 = INT32_MIN;
	static volatile int32_t t46 = -13599509;

    t46 = (x185^((x186^x187)>x188));

    if (t46 != 6349) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 78U;
	static int32_t x190 = INT32_MIN;
	uint8_t x191 = 72U;
	int64_t x192 = 10491LL;
	int32_t t47 = 8081;

    t47 = (x189^((x190^x191)>x192));

    if (t47 != 78) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x194 = INT16_MAX;
	static int32_t x195 = -1;
	int8_t x196 = -12;
	int32_t t48 = 13041;

    t48 = (x193^((x194^x195)>x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	volatile int64_t x199 = 55623069199LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -56;

    t49 = (x197^((x198^x199)>x200));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	static uint64_t x204 = 15375LLU;
	volatile int32_t t50 = -7134818;

    t50 = (x201^((x202^x203)>x204));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x207 = -1;
	volatile int32_t t51 = -1983975;

    t51 = (x205^((x206^x207)>x208));

    if (t51 != 6832) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = 75U;
	volatile int8_t x210 = -9;
	volatile uint32_t x211 = 448U;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -17;

    t52 = (x209^((x210^x211)>x212));

    if (t52 != 74) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = 0;
	int8_t x215 = INT8_MIN;
	int32_t x216 = -1;
	volatile int32_t t53 = INT32_MIN;

    t53 = (x213^((x214^x215)>x216));

    if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x219 = INT16_MAX;
	int32_t t54 = -360138;

    t54 = (x217^((x218^x219)>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 0;
	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = 1030970867LL;
	int8_t x224 = 6;
	int32_t t55 = -4089081;

    t55 = (x221^((x222^x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 66261U;
	uint64_t x226 = UINT64_MAX;
	int32_t x227 = -5601469;
	static uint32_t t56 = 57189U;

    t56 = (x225^((x226^x227)>x228));

    if (t56 != 66260U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 40;
	uint32_t x230 = 24958U;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = -88;

    t57 = (x229^((x230^x231)>x232));

    if (t57 != 40) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 34LL;
	volatile int8_t x234 = INT8_MIN;
	static int64_t x236 = 2424571381441LL;
	volatile int64_t t58 = 24LL;

    t58 = (x233^((x234^x235)>x236));

    if (t58 != 34LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MAX;
	volatile int64_t x238 = -517782926LL;
	int8_t x240 = -1;

    t59 = (x237^((x238^x239)>x240));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint16_t x242 = 5306U;
	int16_t x243 = INT16_MAX;
	int32_t x244 = 1;

    t60 = (x241^((x242^x243)>x244));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 0U;
	int8_t x246 = -1;
	int64_t x247 = INT64_MAX;
	int8_t x248 = -3;

    t61 = (x245^((x246^x247)>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 195U;
	int64_t x250 = -118LL;
	int16_t x251 = 0;
	volatile int32_t x252 = INT32_MIN;
	int32_t t62 = 1;

    t62 = (x249^((x250^x251)>x252));

    if (t62 != 194) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	uint32_t x255 = 2301384U;
	volatile int8_t x256 = -1;

    t63 = (x253^((x254^x255)>x256));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	static uint64_t x258 = UINT64_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = 0;
	int32_t t64 = -587;

    t64 = (x257^((x258^x259)>x260));

    if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 238;
	int8_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = -24;
	int32_t t65 = 1725;

    t65 = (x261^((x262^x263)>x264));

    if (t65 != 238) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = -4336329LL;
	int32_t x268 = 12706;
	int32_t t66 = 244581;

    t66 = (x265^((x266^x267)>x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -308;
	static uint32_t x271 = 70U;
	int64_t x272 = INT64_MIN;
	int32_t t67 = 730611316;

    t67 = (x269^((x270^x271)>x272));

    if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	static int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -28;

    t68 = (x273^((x274^x275)>x276));

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 61;
	uint16_t x278 = 28204U;
	static volatile uint16_t x279 = 3U;
	int64_t x280 = -1LL;
	int32_t t69 = 120343980;

    t69 = (x277^((x278^x279)>x280));

    if (t69 != 60) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -12;
	uint64_t x283 = 13434357338626LLU;
	volatile uint64_t x284 = 2402511452832301201LLU;
	int32_t t70 = 276242845;

    t70 = (x281^((x282^x283)>x284));

    if (t70 != -11) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	static int32_t x286 = INT32_MAX;
	volatile int16_t x287 = -1;
	int32_t x288 = -25231;
	int64_t t71 = 3980LL;

    t71 = (x285^((x286^x287)>x288));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	uint16_t x291 = 7925U;
	static uint64_t x292 = 92LLU;
	int64_t t72 = -1696054127LL;

    t72 = (x289^((x290^x291)>x292));

    if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = 122914469U;
	int64_t x294 = -1LL;
	uint16_t x296 = 1561U;
	volatile uint32_t t73 = 86962796U;

    t73 = (x293^((x294^x295)>x296));

    if (t73 != 122914469U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MAX;
	volatile int32_t t74 = 370495105;

    t74 = (x297^((x298^x299)>x300));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 20;
	volatile int8_t x302 = INT8_MIN;
	volatile uint16_t x303 = 1U;
	volatile int16_t x304 = -1;
	int32_t t75 = 4482930;

    t75 = (x301^((x302^x303)>x304));

    if (t75 != 20) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -1LL;
	uint8_t x306 = UINT8_MAX;
	volatile int8_t x307 = 40;
	int8_t x308 = -1;
	static int64_t t76 = 651655629473LL;

    t76 = (x305^((x306^x307)>x308));

    if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	uint32_t x310 = 207774035U;
	static volatile int8_t x311 = 0;
	static uint64_t x312 = UINT64_MAX;
	static volatile int32_t t77 = 18449;

    t77 = (x309^((x310^x311)>x312));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	int32_t x314 = -1;
	int64_t x316 = 6LL;
	volatile int32_t t78 = -758439;

    t78 = (x313^((x314^x315)>x316));

    if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -44;
	int16_t x318 = INT16_MIN;
	int32_t x320 = INT32_MIN;

    t79 = (x317^((x318^x319)>x320));

    if (t79 != -43) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x322 = 1U;
	int8_t x323 = -26;
	static int32_t t80 = -1;

    t80 = (x321^((x322^x323)>x324));

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = -1LL;
	int16_t x327 = -1;
	int32_t t81 = -31;

    t81 = (x325^((x326^x327)>x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	volatile int32_t x330 = -2024;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -56405;

    t82 = (x329^((x330^x331)>x332));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int64_t x335 = -3323358372LL;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = -35;

    t83 = (x333^((x334^x335)>x336));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x337 = 6073490U;
	static uint16_t x338 = 6442U;
	static int64_t x340 = INT64_MIN;
	uint32_t t84 = 1013U;

    t84 = (x337^((x338^x339)>x340));

    if (t84 != 6073491U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x343 = 1683U;
	volatile int32_t x344 = -172102257;
	volatile uint64_t t85 = 1093818524225429382LLU;

    t85 = (x341^((x342^x343)>x344));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 7;
	int32_t x346 = INT32_MIN;
	uint16_t x347 = 0U;
	static int64_t x348 = INT64_MIN;
	static int32_t t86 = -3;

    t86 = (x345^((x346^x347)>x348));

    if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MIN;
	int16_t x350 = 247;
	uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 1114U;
	int32_t t87 = 856297;

    t87 = (x349^((x350^x351)>x352));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 979U;
	static int16_t x354 = -1;
	volatile int64_t x355 = INT64_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t88 = -569887132;

    t88 = (x353^((x354^x355)>x356));

    if (t88 != 978) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -10255074393LL;
	volatile uint32_t x358 = 768280937U;
	uint8_t x359 = 60U;
	int8_t x360 = INT8_MIN;
	volatile int64_t t89 = 1942228711768LL;

    t89 = (x357^((x358^x359)>x360));

    if (t89 != -10255074393LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -298587;
	volatile int16_t x362 = -109;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = UINT64_MAX;

    t90 = (x361^((x362^x363)>x364));

    if (t90 != -298587) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = 107598U;
	int64_t x367 = -1LL;
	static uint64_t x368 = 18528201687753117LLU;

    t91 = (x365^((x366^x367)>x368));

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	static uint32_t x371 = 140379U;
	volatile int8_t x372 = 7;

    t92 = (x369^((x370^x371)>x372));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x374 = 534340065U;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = -1;
	uint64_t t93 = 7LLU;

    t93 = (x373^((x374^x375)>x376));

    if (t93 != 864LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	volatile int8_t x378 = 1;
	int64_t x379 = INT64_MIN;
	int32_t x380 = 3;
	int32_t t94 = -188595;

    t94 = (x377^((x378^x379)>x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = 330U;
	uint8_t x384 = 25U;

    t95 = (x381^((x382^x383)>x384));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = -1;
	volatile uint8_t x387 = 67U;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = INT32_MIN;

    t96 = (x385^((x386^x387)>x388));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x389 = 0U;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 0;
	static uint64_t x392 = 138LLU;

    t97 = (x389^((x390^x391)>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = INT16_MAX;
	uint8_t x395 = 3U;
	uint64_t t98 = 252793492798LLU;

    t98 = (x393^((x394^x395)>x396));

    if (t98 != 119512LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = -5702;
	uint32_t x398 = UINT32_MAX;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -177;

    t99 = (x397^((x398^x399)>x400));

    if (t99 != -5701) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	static int64_t x402 = 51092921943LL;
	int64_t x403 = INT64_MAX;
	uint32_t x404 = UINT32_MAX;
	static volatile uint64_t t100 = 19128879552493LLU;

    t100 = (x401^((x402^x403)>x404));

    if (t100 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	int16_t x407 = -2379;
	uint16_t x408 = 0U;
	volatile int32_t t101 = 16331;

    t101 = (x405^((x406^x407)>x408));

    if (t101 != 126) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = 8;
	static uint32_t x411 = 1979448U;
	int32_t t102 = -25613853;

    t102 = (x409^((x410^x411)>x412));

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 300U;
	int64_t x416 = 79334995596547305LL;
	volatile uint32_t t103 = 617540348U;

    t103 = (x413^((x414^x415)>x416));

    if (t103 != 301U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	static volatile uint16_t x420 = UINT16_MAX;
	volatile int32_t t104 = 187674;

    t104 = (x417^((x418^x419)>x420));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	volatile int8_t x423 = 35;
	volatile int32_t t105 = -15072;

    t105 = (x421^((x422^x423)>x424));

    if (t105 != 2147483646) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x426 = INT64_MIN;
	int8_t x427 = -1;
	int32_t x428 = -304481264;
	int32_t t106 = -218315;

    t106 = (x425^((x426^x427)>x428));

    if (t106 != 1873) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 1519114945LLU;
	int16_t x430 = -1;
	static int64_t x431 = INT64_MAX;
	int16_t x432 = 1;

    t107 = (x429^((x430^x431)>x432));

    if (t107 != 1519114945LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = 3473361LL;
	int32_t x434 = -1;
	int64_t x435 = -1LL;
	int32_t x436 = -1;

    t108 = (x433^((x434^x435)>x436));

    if (t108 != 3473360LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x438 = 2U;
	volatile uint16_t x439 = UINT16_MAX;
	volatile uint64_t x440 = 9516823566734LLU;
	volatile int64_t t109 = 178LL;

    t109 = (x437^((x438^x439)>x440));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -854;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 1429018026516610000LLU;
	int32_t t110 = -3;

    t110 = (x441^((x442^x443)>x444));

    if (t110 != -853) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int32_t x448 = 5560049;

    t111 = (x445^((x446^x447)>x448));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 159076483535LLU;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = -1;
	volatile int8_t x452 = -5;
	uint64_t t112 = 1072580760855846LLU;

    t112 = (x449^((x450^x451)>x452));

    if (t112 != 159076483535LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 26U;
	int8_t x454 = INT8_MIN;
	static uint32_t x455 = UINT32_MAX;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t113 = 1336;

    t113 = (x453^((x454^x455)>x456));

    if (t113 != 26) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = -1;
	int32_t x458 = INT32_MIN;
	int32_t x459 = -1;
	int64_t x460 = -1LL;
	int32_t t114 = 1;

    t114 = (x457^((x458^x459)>x460));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x462 = 9U;
	static volatile uint16_t x463 = UINT16_MAX;
	static volatile int16_t x464 = -70;

    t115 = (x461^((x462^x463)>x464));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int64_t x467 = -44LL;
	int32_t x468 = -78;
	int32_t t116 = 3139871;

    t116 = (x465^((x466^x467)>x468));

    if (t116 != -2) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t t117 = 244829309927366994LL;

    t117 = (x469^((x470^x471)>x472));

    if (t117 != 13449566LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	volatile int8_t x474 = INT8_MAX;
	int8_t x475 = -1;
	int64_t x476 = -1LL;
	int32_t t118 = 1;

    t118 = (x473^((x474^x475)>x476));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -1;
	uint32_t x480 = UINT32_MAX;
	int32_t t119 = 137;

    t119 = (x477^((x478^x479)>x480));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = -1;
	int16_t x482 = INT16_MAX;
	int32_t x483 = -687;
	static uint16_t x484 = 27U;
	volatile int32_t t120 = 1127294;

    t120 = (x481^((x482^x483)>x484));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 1;
	uint64_t x486 = UINT64_MAX;
	int16_t x487 = -1;
	uint32_t x488 = 431795588U;
	static volatile int32_t t121 = 44193313;

    t121 = (x485^((x486^x487)>x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 943206LL;
	int64_t x490 = -1LL;
	static uint8_t x491 = 92U;
	int64_t t122 = 60754LL;

    t122 = (x489^((x490^x491)>x492));

    if (t122 != 943206LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = -975LL;
	static int8_t x495 = -1;
	int8_t x496 = 11;
	static volatile int32_t t123 = 24661;

    t123 = (x493^((x494^x495)>x496));

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 28952U;
	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MAX;
	int64_t x500 = -106796106249538LL;
	uint32_t t124 = 6U;

    t124 = (x497^((x498^x499)>x500));

    if (t124 != 28953U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = 0;
	uint64_t x502 = 16521264265788114LLU;
	static uint8_t x503 = 9U;

    t125 = (x501^((x502^x503)>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x505 = INT32_MIN;
	int32_t x506 = 0;
	volatile int16_t x507 = 4;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = INT32_MIN;

    t126 = (x505^((x506^x507)>x508));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = INT32_MAX;
	int32_t x511 = -562;
	int64_t x512 = -357963467056LL;
	volatile int64_t t127 = -63925170LL;

    t127 = (x509^((x510^x511)>x512));

    if (t127 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 1815164084688738LLU;
	uint8_t x514 = 7U;
	uint32_t x515 = UINT32_MAX;
	static uint16_t x516 = 335U;
	uint64_t t128 = 811586LLU;

    t128 = (x513^((x514^x515)>x516));

    if (t128 != 1815164084688739LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	int16_t x518 = 2;
	int32_t x519 = 21056053;
	static uint16_t x520 = 1U;
	volatile int32_t t129 = 682;

    t129 = (x517^((x518^x519)>x520));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 1U;
	static uint16_t x522 = UINT16_MAX;
	int64_t x523 = -1LL;
	volatile uint32_t x524 = 1542745015U;

    t130 = (x521^((x522^x523)>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MIN;
	volatile int64_t t131 = 3LL;

    t131 = (x525^((x526^x527)>x528));

    if (t131 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = -1LL;
	static int32_t t132 = 611;

    t132 = (x529^((x530^x531)>x532));

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x534 = INT32_MIN;
	uint32_t x535 = 11026294U;
	int32_t t133 = 105884040;

    t133 = (x533^((x534^x535)>x536));

    if (t133 != -32767) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MIN;
	uint16_t x540 = 5000U;
	static int32_t t134 = INT32_MIN;

    t134 = (x537^((x538^x539)>x540));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x541 = UINT32_MAX;
	uint64_t x542 = 549161LLU;
	uint16_t x543 = UINT16_MAX;
	int8_t x544 = INT8_MIN;

    t135 = (x541^((x542^x543)>x544));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x546 = UINT32_MAX;
	int32_t x547 = INT32_MIN;
	int32_t x548 = -14193157;
	volatile uint32_t t136 = UINT32_MAX;

    t136 = (x545^((x546^x547)>x548));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 32695;
	int16_t x550 = 0;
	int32_t x552 = -1;

    t137 = (x549^((x550^x551)>x552));

    if (t137 != 32695) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x555 = -1LL;
	int32_t t138 = -806412;

    t138 = (x553^((x554^x555)>x556));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 522481143149251LLU;
	int64_t x559 = INT64_MIN;
	int16_t x560 = INT16_MAX;
	uint64_t t139 = 1386645425056LLU;

    t139 = (x557^((x558^x559)>x560));

    if (t139 != 522481143149250LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	int16_t x563 = -1;

    t140 = (x561^((x562^x563)>x564));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -26;
	static int16_t x566 = 14;
	uint64_t x567 = 141139127920LLU;
	volatile uint64_t x568 = 120104168595415085LLU;
	int32_t t141 = 20808909;

    t141 = (x565^((x566^x567)>x568));

    if (t141 != -26) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = 58821962010177LL;
	uint64_t x571 = UINT64_MAX;
	static uint16_t x572 = 5469U;
	volatile int32_t t142 = 2093;

    t142 = (x569^((x570^x571)>x572));

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = -1;
	volatile int32_t x574 = INT32_MIN;
	static uint32_t x575 = 23059358U;
	uint16_t x576 = 22U;
	int32_t t143 = -3916;

    t143 = (x573^((x574^x575)>x576));

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 0U;
	int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	uint16_t x580 = 721U;
	volatile int32_t t144 = 921;

    t144 = (x577^((x578^x579)>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	int8_t x584 = -1;
	static volatile int32_t t145 = 5504;

    t145 = (x581^((x582^x583)>x584));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -2179602769155LL;
	int8_t x586 = INT8_MAX;
	int8_t x587 = INT8_MIN;

    t146 = (x585^((x586^x587)>x588));

    if (t146 != -2179602769155LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	uint16_t x590 = 4388U;
	static int32_t x591 = -1;
	int32_t x592 = 17284;

    t147 = (x589^((x590^x591)>x592));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int16_t x594 = INT16_MIN;
	volatile uint64_t x595 = UINT64_MAX;
	int64_t x596 = INT64_MIN;
	int32_t t148 = -21526;

    t148 = (x593^((x594^x595)>x596));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MAX;
	int64_t x598 = -1LL;
	int32_t x599 = 106882714;
	volatile uint64_t x600 = 3640LLU;
	static int64_t t149 = 259086085LL;

    t149 = (x597^((x598^x599)>x600));

    if (t149 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -8;
	int32_t x602 = -1;

    t150 = (x601^((x602^x603)>x604));

    if (t150 != -8) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int64_t x606 = INT64_MIN;
	static volatile int16_t x607 = INT16_MIN;
	int16_t x608 = INT16_MAX;
	int32_t t151 = 60801;

    t151 = (x605^((x606^x607)>x608));

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 0U;
	int64_t x611 = INT64_MIN;
	volatile uint32_t t152 = 159665403U;

    t152 = (x609^((x610^x611)>x612));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -13;
	static int64_t x614 = INT64_MAX;
	int16_t x615 = INT16_MIN;
	int16_t x616 = 0;
	volatile int32_t t153 = -234400199;

    t153 = (x613^((x614^x615)>x616));

    if (t153 != -13) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x618 = INT32_MIN;
	uint32_t x619 = UINT32_MAX;
	int8_t x620 = 58;
	volatile int32_t t154 = 0;

    t154 = (x617^((x618^x619)>x620));

    if (t154 != 10126) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x623 = 9661785;
	int8_t x624 = -1;
	int32_t t155 = -1038238;

    t155 = (x621^((x622^x623)>x624));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 713342840LLU;
	volatile int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	uint16_t x628 = 30U;

    t156 = (x625^((x626^x627)>x628));

    if (t156 != 713342841LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	static int16_t x630 = 1036;
	static int32_t t157 = -3970910;

    t157 = (x629^((x630^x631)>x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	static uint16_t x634 = 15U;
	uint64_t x635 = 864LLU;
	volatile uint16_t x636 = UINT16_MAX;

    t158 = (x633^((x634^x635)>x636));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 35U;
	int16_t x638 = -1;
	volatile int8_t x639 = INT8_MIN;
	static int32_t t159 = -717;

    t159 = (x637^((x638^x639)>x640));

    if (t159 != 35) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	static int8_t x642 = -31;
	static volatile int64_t x644 = INT64_MAX;
	int32_t t160 = 3;

    t160 = (x641^((x642^x643)>x644));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 127515592U;
	uint32_t x646 = 126709667U;
	uint8_t x647 = 63U;
	int64_t x648 = -3LL;

    t161 = (x645^((x646^x647)>x648));

    if (t161 != 127515593U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = 0U;
	int32_t x650 = -3231;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = 28U;

    t162 = (x649^((x650^x651)>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = 3271LL;
	static int32_t x654 = INT32_MAX;
	uint64_t x655 = UINT64_MAX;
	int8_t x656 = -14;
	int64_t t163 = -778931403126314LL;

    t163 = (x653^((x654^x655)>x656));

    if (t163 != 3271LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = -1;
	static volatile uint32_t x659 = 2479U;
	volatile int64_t x660 = -1LL;

    t164 = (x657^((x658^x659)>x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MAX;
	volatile uint32_t x662 = UINT32_MAX;
	uint8_t x663 = UINT8_MAX;
	static volatile uint64_t x664 = 723901LLU;
	int32_t t165 = -1346;

    t165 = (x661^((x662^x663)>x664));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 185U;
	volatile uint32_t x667 = UINT32_MAX;
	int16_t x668 = -409;

    t166 = (x665^((x666^x667)>x668));

    if (t166 != 185) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 64U;
	uint64_t x670 = 937022107306438LLU;
	uint64_t x671 = 30313729LLU;
	volatile uint16_t x672 = 16087U;
	int32_t t167 = -1541679;

    t167 = (x669^((x670^x671)>x672));

    if (t167 != 65) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x673 = INT64_MAX;
	uint16_t x674 = 648U;
	volatile int16_t x676 = 3112;
	static int64_t t168 = INT64_MAX;

    t168 = (x673^((x674^x675)>x676));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	volatile int16_t x678 = INT16_MAX;
	volatile int32_t x679 = INT32_MIN;
	volatile int32_t x680 = -1;
	static int32_t t169 = -103559031;

    t169 = (x677^((x678^x679)>x680));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -30;
	static int8_t x682 = INT8_MIN;
	static volatile int8_t x683 = 8;
	int32_t t170 = -1066846513;

    t170 = (x681^((x682^x683)>x684));

    if (t170 != -30) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = 3U;
	int16_t x686 = INT16_MIN;
	int8_t x688 = -26;

    t171 = (x685^((x686^x687)>x688));

    if (t171 != 3) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	int8_t x691 = -1;
	uint16_t x692 = 5566U;
	volatile int32_t t172 = -10659429;

    t172 = (x689^((x690^x691)>x692));

    if (t172 != 126) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	static uint32_t x694 = 3863U;
	uint32_t x695 = 23U;
	static uint16_t x696 = UINT16_MAX;
	int32_t t173 = -394886;

    t173 = (x693^((x694^x695)>x696));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -6;
	static int16_t x699 = 70;
	int32_t t174 = 521281;

    t174 = (x697^((x698^x699)>x700));

    if (t174 != -6) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	uint8_t x702 = 3U;
	static volatile uint32_t x703 = UINT32_MAX;
	int32_t x704 = INT32_MIN;
	volatile int32_t t175 = 60;

    t175 = (x701^((x702^x703)>x704));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x706 = UINT8_MAX;
	int8_t x707 = INT8_MIN;
	static int16_t x708 = INT16_MIN;

    t176 = (x705^((x706^x707)>x708));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 26993901322LLU;
	uint64_t x710 = 8LLU;
	int64_t x711 = INT64_MAX;
	uint8_t x712 = UINT8_MAX;
	uint64_t t177 = 662082194LLU;

    t177 = (x709^((x710^x711)>x712));

    if (t177 != 26993901323LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -4506881408LL;
	uint8_t x714 = UINT8_MAX;
	static int64_t x716 = INT64_MAX;
	int64_t t178 = 2LL;

    t178 = (x713^((x714^x715)>x716));

    if (t178 != -4506881408LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	uint16_t x718 = 229U;
	volatile int32_t t179 = 3690178;

    t179 = (x717^((x718^x719)>x720));

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	uint8_t x722 = 6U;
	static volatile uint64_t x724 = UINT64_MAX;
	volatile int64_t t180 = INT64_MIN;

    t180 = (x721^((x722^x723)>x724));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x727 = 7935214776LL;
	volatile int32_t x728 = INT32_MIN;
	uint32_t t181 = 0U;

    t181 = (x725^((x726^x727)>x728));

    if (t181 != 2025U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x729 = 2742998U;
	volatile uint8_t x730 = 2U;
	uint16_t x731 = 337U;
	uint32_t x732 = 3578U;
	volatile uint32_t t182 = 23214658U;

    t182 = (x729^((x730^x731)>x732));

    if (t182 != 2742998U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = 7;
	int32_t x735 = -1;
	int32_t x736 = INT32_MIN;
	volatile int32_t t183 = 1;

    t183 = (x733^((x734^x735)>x736));

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 0U;
	int64_t x738 = 682185LL;
	uint64_t x740 = UINT64_MAX;
	static int32_t t184 = -812108150;

    t184 = (x737^((x738^x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	uint16_t x742 = 9242U;
	int16_t x743 = INT16_MIN;
	static volatile int64_t x744 = INT64_MAX;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x741^((x742^x743)>x744));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	volatile int16_t x746 = -1;
	int8_t x748 = 4;
	int32_t t186 = 1;

    t186 = (x745^((x746^x747)>x748));

    if (t186 != -127) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	static int32_t x750 = 5;
	int16_t x751 = -1;
	int16_t x752 = INT16_MIN;
	int32_t t187 = 2;

    t187 = (x749^((x750^x751)>x752));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	uint16_t x754 = UINT16_MAX;
	int32_t x756 = 2;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (x753^((x754^x755)>x756));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 0;
	static volatile uint8_t x758 = 113U;
	int32_t x760 = INT32_MAX;
	static int32_t t189 = 50486;

    t189 = (x757^((x758^x759)>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 687229301U;
	uint32_t x762 = 3U;
	static volatile int8_t x763 = -1;
	volatile uint8_t x764 = 1U;
	uint32_t t190 = 130086U;

    t190 = (x761^((x762^x763)>x764));

    if (t190 != 687229300U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 209U;
	int32_t x767 = -1;
	static int64_t x768 = -41LL;
	volatile int32_t t191 = 4777213;

    t191 = (x765^((x766^x767)>x768));

    if (t191 != 208) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = 1U;
	volatile uint16_t x771 = UINT16_MAX;
	uint8_t x772 = 1U;
	int32_t t192 = -633;

    t192 = (x769^((x770^x771)>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	volatile int64_t x774 = 444979911967118907LL;
	uint8_t x775 = 28U;
	static int64_t x776 = INT64_MIN;
	uint64_t t193 = 3511784474LLU;

    t193 = (x773^((x774^x775)>x776));

    if (t193 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	volatile uint32_t x778 = UINT32_MAX;
	static volatile int16_t x779 = INT16_MIN;
	int8_t x780 = -54;
	int32_t t194 = 1;

    t194 = (x777^((x778^x779)>x780));

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x781 = 1508186LL;
	int16_t x782 = INT16_MAX;
	uint16_t x783 = 19473U;
	int64_t x784 = INT64_MIN;
	int64_t t195 = 2494755180947013038LL;

    t195 = (x781^((x782^x783)>x784));

    if (t195 != 1508187LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x785 = -1;
	int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MAX;
	volatile int32_t t196 = -152;

    t196 = (x785^((x786^x787)>x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = -257839639700LL;
	uint8_t x790 = 51U;
	static uint64_t x791 = UINT64_MAX;
	static int64_t x792 = -1LL;
	static volatile int64_t t197 = -29829701404LL;

    t197 = (x789^((x790^x791)>x792));

    if (t197 != -257839639700LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -120;
	volatile int64_t x794 = INT64_MIN;
	int64_t x795 = 68075897073344654LL;
	volatile int32_t t198 = -1135774;

    t198 = (x793^((x794^x795)>x796));

    if (t198 != -120) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MIN;
	volatile uint8_t x798 = 25U;

    t199 = (x797^((x798^x799)>x800));

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

