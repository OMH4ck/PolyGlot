
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

uint8_t x5 = UINT8_MAX;
int8_t x13 = 15;
volatile int32_t x14 = INT32_MAX;
uint32_t x15 = 1U;
static uint8_t x16 = UINT8_MAX;
static volatile int32_t x27 = INT32_MIN;
uint16_t x31 = 212U;
int8_t x47 = INT8_MIN;
uint32_t x48 = 2812U;
uint64_t x49 = 35171LLU;
static int64_t x57 = -1291624492579576683LL;
int16_t x59 = INT16_MIN;
int64_t t14 = -3454538485LL;
static int32_t x66 = INT32_MAX;
static int64_t x68 = 24360794975041LL;
int16_t x69 = INT16_MIN;
static uint64_t x74 = 1119503099272116LLU;
volatile uint8_t x78 = UINT8_MAX;
uint8_t x89 = UINT8_MAX;
int16_t x91 = INT16_MIN;
uint64_t x98 = UINT64_MAX;
uint16_t x100 = UINT16_MAX;
uint8_t x110 = UINT8_MAX;
int32_t x112 = INT32_MIN;
volatile int32_t t28 = -429481772;
uint16_t x117 = UINT16_MAX;
int64_t x120 = -1LL;
static volatile int64_t x122 = INT64_MAX;
static uint8_t x126 = UINT8_MAX;
uint16_t x127 = UINT16_MAX;
static int16_t x132 = INT16_MAX;
int32_t t34 = -1;
uint16_t x146 = 2U;
int16_t x147 = INT16_MIN;
int16_t x148 = -2;
int8_t x150 = 1;
static uint64_t x156 = 3649847600LLU;
int32_t x158 = 67425;
int64_t x166 = 16732921LL;
static volatile int64_t t41 = -1045162146164968LL;
uint32_t x171 = 2U;
static int32_t x184 = 955464;
volatile int32_t t46 = 502328912;
static uint16_t x190 = 1534U;
volatile uint32_t x196 = 0U;
int32_t x197 = -1;
static int16_t x199 = INT16_MAX;
int16_t x206 = 33;
static int16_t x216 = 0;
static uint64_t x219 = UINT64_MAX;
int64_t x223 = INT64_MIN;
int64_t x241 = INT64_MAX;
int32_t x243 = 0;
int16_t x247 = -1;
uint16_t x251 = UINT16_MAX;
volatile int32_t t62 = -106522;
uint64_t x256 = 191422251126LLU;
uint64_t x257 = UINT64_MAX;
int8_t x258 = INT8_MIN;
uint16_t x272 = 170U;
int8_t x273 = INT8_MIN;
static int32_t x274 = -3339;
static int64_t x276 = -1762033LL;
volatile int8_t x281 = 2;
volatile int32_t t70 = -16620161;
static volatile int8_t x287 = -8;
volatile int32_t t71 = -26395;
uint64_t x290 = 6415392430000LLU;
uint8_t x293 = UINT8_MAX;
int8_t x297 = -41;
volatile uint64_t x301 = 983705017886LLU;
volatile uint32_t x306 = UINT32_MAX;
int64_t x313 = -1107723590429LL;
int16_t x321 = INT16_MIN;
static int16_t x322 = INT16_MIN;
volatile int8_t x328 = -1;
volatile int32_t t81 = -14037491;
uint8_t x329 = 10U;
int64_t x335 = 949948542LL;
static volatile int64_t t83 = -25377664417232LL;
uint32_t x337 = 11487U;
volatile uint32_t t84 = 1021U;
static volatile int64_t x343 = INT64_MAX;
int64_t x345 = -27166269LL;
static int64_t t86 = -1541413125217158LL;
uint16_t x350 = 1944U;
int8_t x352 = 0;
int16_t x354 = INT16_MAX;
uint32_t x371 = 1338656427U;
int64_t t92 = -51772643LL;
static volatile int32_t t93 = 22;
static uint16_t x388 = 98U;
int32_t t96 = 111697;
static int16_t x389 = INT16_MIN;
int8_t x397 = -1;
uint64_t x398 = 85LLU;
uint32_t x399 = 2U;
volatile int64_t x400 = INT64_MAX;
int64_t x402 = -25566567022041LL;
int16_t x408 = INT16_MIN;
static uint64_t x412 = UINT64_MAX;
volatile int32_t t105 = -3271381;
int8_t x427 = INT8_MAX;
uint32_t t110 = 7U;
static uint8_t x450 = 2U;
uint8_t x452 = UINT8_MAX;
static uint16_t x453 = UINT16_MAX;
volatile int32_t t113 = -2;
volatile int64_t t115 = -4014240014847606290LL;
uint64_t x471 = 2627078LLU;
int32_t x474 = -1;
static uint16_t x479 = 925U;
volatile int64_t t119 = 2054200850967262650LL;
int16_t x481 = INT16_MIN;
int32_t x483 = INT32_MAX;
volatile uint16_t x485 = 4737U;
volatile uint32_t x486 = 1136540U;
int8_t x499 = INT8_MAX;
static int8_t x502 = -1;
int64_t t127 = 478019742883LL;
static uint64_t x513 = 1821236LLU;
volatile int8_t x514 = INT8_MAX;
uint32_t x515 = 107U;
uint32_t x517 = 864883U;
int16_t x519 = -3;
int32_t x521 = INT32_MAX;
volatile int64_t t131 = -231054782LL;
uint32_t x529 = UINT32_MAX;
int16_t x536 = 256;
static int32_t t133 = 880341990;
static int8_t x537 = INT8_MIN;
static uint64_t x545 = 682483129583LLU;
int8_t x547 = INT8_MIN;
int64_t x549 = INT64_MIN;
int8_t x552 = -1;
int64_t t137 = 32470965310419LL;
uint32_t x554 = 409U;
volatile uint16_t x558 = 246U;
int8_t x580 = 12;
uint32_t x582 = 102U;
static int32_t x583 = INT32_MAX;
volatile int16_t x584 = -1;
int32_t x585 = -39054551;
static int64_t x595 = INT64_MIN;
volatile int32_t t148 = -78133;
volatile int64_t x601 = INT64_MAX;
static int32_t x603 = INT32_MIN;
static uint64_t x610 = 12LLU;
uint32_t x611 = UINT32_MAX;
static int16_t x613 = 975;
int64_t x614 = INT64_MAX;
volatile int64_t t154 = -201LL;
int16_t x622 = 0;
int8_t x623 = -61;
int16_t x624 = INT16_MIN;
int32_t x628 = INT32_MIN;
int32_t x629 = 4632;
volatile int16_t x640 = INT16_MIN;
int32_t x641 = -226997;
int8_t x642 = INT8_MIN;
int64_t x643 = INT64_MIN;
int32_t x644 = -1;
int32_t t160 = 14369;
static int64_t x649 = INT64_MAX;
int64_t x655 = INT64_MIN;
uint32_t x662 = UINT32_MAX;
int32_t x664 = 23556813;
volatile int32_t t166 = 146;
int32_t x669 = INT32_MIN;
int32_t t168 = -1042855;
volatile int32_t x677 = 1314866;
volatile int32_t t169 = -1;
static uint64_t x687 = UINT64_MAX;
int8_t x688 = -1;
volatile int32_t t171 = 3;
int64_t x690 = INT64_MIN;
volatile uint64_t x691 = 322304LLU;
static int64_t x697 = -1LL;
volatile int64_t t174 = 1072007089770015LL;
int32_t x706 = INT32_MIN;
volatile int32_t t176 = -80039355;
uint8_t x710 = UINT8_MAX;
static int32_t x714 = -92324385;
volatile uint16_t x717 = 3889U;
int16_t x718 = INT16_MAX;
volatile uint16_t x719 = UINT16_MAX;
int32_t x723 = -1;
uint16_t x725 = UINT16_MAX;
int32_t x728 = 48;
volatile int32_t x731 = INT32_MAX;
static volatile int32_t t182 = 107787950;
int16_t x736 = INT16_MIN;
static int32_t t185 = 649602;
int16_t x745 = 5503;
int16_t x748 = INT16_MAX;
int8_t x749 = -1;
volatile int32_t t187 = 54273794;
static int16_t x757 = -7902;
int32_t x759 = INT32_MAX;
static volatile uint32_t t190 = 44107U;
volatile int64_t t192 = -60LL;
uint8_t x773 = 0U;
int32_t x786 = INT32_MIN;
static int32_t x790 = 404282262;
int32_t t198 = -144806900;
uint64_t x797 = 231379LLU;
int32_t x799 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static uint16_t x2 = 109U;
	int16_t x3 = INT16_MIN;
	static int16_t x4 = 1;
	int32_t t0 = -369896551;

    t0 = (x1^((x2&x3)!=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -130521522059LL;
	int64_t x7 = -1LL;
	uint64_t x8 = 139733223783210LLU;
	volatile int32_t t1 = -204570815;

    t1 = (x5^((x6&x7)!=x8));

    if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 1693538722LLU;
	uint32_t x10 = UINT32_MAX;
	int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = 3163U;
	static volatile uint64_t t2 = 222536627114987LLU;

    t2 = (x9^((x10&x11)!=x12));

    if (t2 != 1693538723LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t t3 = 0;

    t3 = (x13^((x14&x15)!=x16));

    if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static uint8_t x18 = UINT8_MAX;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = 159772271;

    t4 = (x17^((x18&x19)!=x20));

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	static int64_t x22 = -12LL;
	uint32_t x23 = 55603347U;
	int64_t x24 = -9254599649716209LL;
	int32_t t5 = -81100824;

    t5 = (x21^((x22&x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	volatile int16_t x26 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -9431861;

    t6 = (x25^((x26&x27)!=x28));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int64_t x32 = -1LL;
	static volatile int32_t t7 = -725408570;

    t7 = (x29^((x30&x31)!=x32));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 5U;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -4;

    t8 = (x33^((x34&x35)!=x36));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 40U;
	static int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -1LL;
	uint32_t t9 = 6572U;

    t9 = (x37^((x38&x39)!=x40));

    if (t9 != 41U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	uint8_t x42 = 5U;
	volatile uint8_t x43 = 0U;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 5292846559LL;

    t10 = (x41^((x42&x43)!=x44));

    if (t10 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	int32_t t11 = -31;

    t11 = (x45^((x46&x47)!=x48));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = 56520622LL;
	static volatile uint32_t x51 = 1510U;
	int32_t x52 = INT32_MIN;
	static volatile uint64_t t12 = 117097022086872888LLU;

    t12 = (x49^((x50&x51)!=x52));

    if (t12 != 35170LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 2187U;
	uint16_t x54 = 5323U;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -43428970;

    t13 = (x53^((x54&x55)!=x56));

    if (t13 != 2186) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MAX;
	int64_t x60 = INT64_MAX;

    t14 = (x57^((x58&x59)!=x60));

    if (t14 != -1291624492579576684LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x62 = 10393681LL;
	static int64_t x63 = -28698148410124313LL;
	volatile uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -70;

    t15 = (x61^((x62&x63)!=x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 313333778U;
	volatile int16_t x67 = -1;
	static volatile uint32_t t16 = 30434U;

    t16 = (x65^((x66&x67)!=x68));

    if (t16 != 313333779U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 2U;
	int32_t x72 = -1;
	volatile int32_t t17 = 2820;

    t17 = (x69^((x70&x71)!=x72));

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 0U;
	int8_t x75 = -3;
	int64_t x76 = INT64_MIN;
	static int32_t t18 = 285819181;

    t18 = (x73^((x74&x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 0;
	int64_t x79 = -1LL;
	volatile uint32_t x80 = UINT32_MAX;
	int32_t t19 = -27;

    t19 = (x77^((x78&x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x81 = 1U;
	static int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MAX;
	int64_t x84 = -10076490245LL;
	int32_t t20 = 215;

    t20 = (x81^((x82&x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 13;
	int8_t x86 = 0;
	static int64_t x87 = INT64_MIN;
	static uint64_t x88 = 668549748823LLU;
	volatile int32_t t21 = 8;

    t21 = (x85^((x86&x87)!=x88));

    if (t21 != 12) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = UINT8_MAX;
	static volatile int32_t x92 = -1;
	int32_t t22 = 28546;

    t22 = (x89^((x90&x91)!=x92));

    if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1030548875;
	volatile uint64_t x94 = 610511339568887LLU;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = 2;

    t23 = (x93^((x94&x95)!=x96));

    if (t23 != -1030548876) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = -106;
	int64_t x99 = -970260LL;
	volatile int32_t t24 = 42961;

    t24 = (x97^((x98&x99)!=x100));

    if (t24 != -105) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MAX;
	int8_t x102 = -47;
	int32_t x103 = INT32_MAX;
	int32_t x104 = -3393;
	volatile int64_t t25 = -21572454149330LL;

    t25 = (x101^((x102&x103)!=x104));

    if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	uint8_t x106 = 18U;
	int16_t x107 = 6752;
	uint16_t x108 = 105U;
	static int32_t t26 = 0;

    t26 = (x105^((x106&x107)!=x108));

    if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 69170954U;
	volatile uint64_t x111 = 1158419LLU;
	uint32_t t27 = 2208817U;

    t27 = (x109^((x110&x111)!=x112));

    if (t27 != 69170955U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = -1;
	volatile int64_t x114 = INT64_MAX;
	uint64_t x115 = 791818LLU;
	static int32_t x116 = -1;

    t28 = (x113^((x114&x115)!=x116));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x118 = 3824U;
	int64_t x119 = INT64_MAX;
	static volatile int32_t t29 = -86501165;

    t29 = (x117^((x118&x119)!=x120));

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = -4557149;

    t30 = (x121^((x122&x123)!=x124));

    if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 7765564LLU;
	static int8_t x128 = 47;
	uint64_t t31 = 470921243LLU;

    t31 = (x125^((x126&x127)!=x128));

    if (t31 != 7765565LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	uint16_t x130 = 395U;
	volatile uint8_t x131 = UINT8_MAX;
	volatile int32_t t32 = -32401945;

    t32 = (x129^((x130&x131)!=x132));

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 2025U;
	uint16_t x134 = 6U;
	int16_t x135 = 1;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t33 = 186165;

    t33 = (x133^((x134&x135)!=x136));

    if (t33 != 2024) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 80U;
	int32_t x138 = -434;
	uint32_t x139 = 36U;
	static int16_t x140 = INT16_MAX;

    t34 = (x137^((x138&x139)!=x140));

    if (t34 != 81) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	uint8_t x142 = 46U;
	static int16_t x143 = -1;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t35 = 419114601LLU;

    t35 = (x141^((x142&x143)!=x144));

    if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 0;
	static volatile int32_t t36 = -903;

    t36 = (x145^((x146&x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 1U;
	int8_t x151 = -34;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = -733;

    t37 = (x149^((x150&x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = INT16_MIN;
	uint64_t x154 = 0LLU;
	uint8_t x155 = 11U;
	volatile int32_t t38 = -331521207;

    t38 = (x153^((x154&x155)!=x156));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 1504001956574334LL;
	int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	int64_t t39 = 436200040312859413LL;

    t39 = (x157^((x158&x159)!=x160));

    if (t39 != 1504001956574335LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -1LL;
	volatile uint32_t x162 = 5187U;
	volatile int16_t x163 = INT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t40 = 153816147456LL;

    t40 = (x161^((x162&x163)!=x164));

    if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static uint8_t x167 = 17U;
	uint64_t x168 = 12974LLU;

    t41 = (x165^((x166&x167)!=x168));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 2646869U;
	int32_t x170 = 1;
	int8_t x172 = INT8_MIN;
	static volatile uint32_t t42 = 13085U;

    t42 = (x169^((x170&x171)!=x172));

    if (t42 != 2646868U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = -38765743;
	int32_t x176 = -1;
	int32_t t43 = 211;

    t43 = (x173^((x174&x175)!=x176));

    if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	uint16_t x178 = 1U;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t44 = 449929367;

    t44 = (x177^((x178&x179)!=x180));

    if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	static uint16_t x182 = UINT16_MAX;
	uint16_t x183 = UINT16_MAX;
	static int32_t t45 = 2297;

    t45 = (x181^((x182&x183)!=x184));

    if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 42U;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 1391266276U;
	static int64_t x188 = INT64_MIN;

    t46 = (x185^((x186&x187)!=x188));

    if (t46 != 43) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = 1775;
	uint8_t x191 = 5U;
	volatile int32_t x192 = 1523079;
	static int32_t t47 = 255021203;

    t47 = (x189^((x190&x191)!=x192));

    if (t47 != 1774) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = 79088627436290579LL;
	int16_t x194 = -477;
	uint32_t x195 = 362264U;
	volatile int64_t t48 = 117372007228LL;

    t48 = (x193^((x194&x195)!=x196));

    if (t48 != 79088627436290578LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x198 = UINT64_MAX;
	volatile int16_t x200 = INT16_MIN;
	int32_t t49 = 3781;

    t49 = (x197^((x198&x199)!=x200));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MIN;
	static uint32_t x202 = UINT32_MAX;
	int8_t x203 = 29;
	static int32_t x204 = 18;
	int64_t t50 = 5175026054LL;

    t50 = (x201^((x202&x203)!=x204));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	volatile uint64_t x207 = 282775554844LLU;
	int16_t x208 = -1;
	volatile int32_t t51 = -31;

    t51 = (x205^((x206&x207)!=x208));

    if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = 3;
	int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -35080;

    t52 = (x209^((x210&x211)!=x212));

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x213 = 110U;
	uint16_t x214 = UINT16_MAX;
	volatile int32_t x215 = -1;
	static volatile int32_t t53 = 4087;

    t53 = (x213^((x214&x215)!=x216));

    if (t53 != 111) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int32_t x218 = -492990243;
	volatile uint64_t x220 = 218365151122LLU;
	int32_t t54 = 29870;

    t54 = (x217^((x218&x219)!=x220));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	volatile int32_t x222 = INT32_MAX;
	static uint16_t x224 = 486U;
	volatile int64_t t55 = -51869394612555469LL;

    t55 = (x221^((x222&x223)!=x224));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int32_t x226 = -37;
	int8_t x227 = -7;
	volatile uint32_t x228 = UINT32_MAX;
	int64_t t56 = -1775333715LL;

    t56 = (x225^((x226&x227)!=x228));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 5774;
	int16_t x230 = INT16_MAX;
	volatile int16_t x231 = INT16_MAX;
	volatile uint32_t x232 = UINT32_MAX;
	static int32_t t57 = 98705;

    t57 = (x229^((x230&x231)!=x232));

    if (t57 != 5775) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	int32_t x234 = 7603;
	int32_t x235 = -1;
	int16_t x236 = -3029;
	int32_t t58 = 1;

    t58 = (x233^((x234&x235)!=x236));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = -1LL;
	static int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MAX;
	uint16_t x240 = 8U;
	static int64_t t59 = -5691LL;

    t59 = (x237^((x238&x239)!=x240));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = -127LL;
	int16_t x244 = -1;
	static volatile int64_t t60 = 1671745519650955509LL;

    t60 = (x241^((x242&x243)!=x244));

    if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 308848698LL;
	int16_t x246 = INT16_MIN;
	uint8_t x248 = 3U;
	volatile int64_t t61 = 8LL;

    t61 = (x245^((x246&x247)!=x248));

    if (t61 != 308848699LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint8_t x249 = 94U;
	uint64_t x250 = 6544518127LLU;
	int8_t x252 = INT8_MIN;

    t62 = (x249^((x250&x251)!=x252));

    if (t62 != 95) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	static int16_t x255 = INT16_MIN;
	uint64_t t63 = 73743LLU;

    t63 = (x253^((x254&x255)!=x256));

    if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x259 = 2976U;
	int8_t x260 = 1;
	uint64_t t64 = 1957519LLU;

    t64 = (x257^((x258&x259)!=x260));

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x261 = UINT64_MAX;
	static volatile int16_t x262 = INT16_MIN;
	int64_t x263 = 12979878LL;
	int8_t x264 = INT8_MIN;
	uint64_t t65 = 14210725LLU;

    t65 = (x261^((x262&x263)!=x264));

    if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	volatile int8_t x266 = INT8_MIN;
	static volatile int32_t x267 = 472212223;
	int8_t x268 = -29;
	int32_t t66 = 12;

    t66 = (x265^((x266&x267)!=x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 237U;
	int8_t x270 = INT8_MIN;
	static volatile int64_t x271 = -136559LL;
	volatile int32_t t67 = -1;

    t67 = (x269^((x270&x271)!=x272));

    if (t67 != 236) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x275 = -1LL;
	int32_t t68 = -2511;

    t68 = (x273^((x274&x275)!=x276));

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	static int16_t x278 = 841;
	uint16_t x279 = UINT16_MAX;
	volatile uint32_t x280 = UINT32_MAX;
	int32_t t69 = 199504158;

    t69 = (x277^((x278&x279)!=x280));

    if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = 5U;
	volatile int32_t x283 = -1;
	int16_t x284 = -1;

    t70 = (x281^((x282&x283)!=x284));

    if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = 5;
	volatile int16_t x286 = 55;
	int64_t x288 = INT64_MIN;

    t71 = (x285^((x286&x287)!=x288));

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = UINT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = 39430;

    t72 = (x289^((x290&x291)!=x292));

    if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MAX;
	static uint16_t x295 = 5746U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = 106;

    t73 = (x293^((x294&x295)!=x296));

    if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = 1;
	int8_t x299 = INT8_MIN;
	int16_t x300 = -27;
	volatile int32_t t74 = -32;

    t74 = (x297^((x298&x299)!=x300));

    if (t74 != -42) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x302 = 2426614LLU;
	uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 2U;
	volatile uint64_t t75 = 326918312825LLU;

    t75 = (x301^((x302&x303)!=x304));

    if (t75 != 983705017887LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 9770567;

    t76 = (x305^((x306&x307)!=x308));

    if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MAX;
	volatile int64_t x310 = -5884486276818210LL;
	uint32_t x311 = 204446U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 208943;

    t77 = (x309^((x310&x311)!=x312));

    if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x314 = INT8_MIN;
	uint8_t x315 = 10U;
	int16_t x316 = 354;
	static int64_t t78 = 55560LL;

    t78 = (x313^((x314&x315)!=x316));

    if (t78 != -1107723590430LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = UINT64_MAX;
	static int16_t x318 = -1;
	uint8_t x319 = 1U;
	int16_t x320 = -1;
	uint64_t t79 = 228301LLU;

    t79 = (x317^((x318&x319)!=x320));

    if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x323 = 5291;
	uint64_t x324 = UINT64_MAX;
	static int32_t t80 = -7;

    t80 = (x321^((x322&x323)!=x324));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MIN;
	static int32_t x326 = 498432127;
	int32_t x327 = INT32_MIN;

    t81 = (x325^((x326&x327)!=x328));

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -868453255LL;
	volatile int64_t x331 = -241352685LL;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 200;

    t82 = (x329^((x330&x331)!=x332));

    if (t82 != 11) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = -1LL;
	volatile int8_t x334 = INT8_MIN;
	int64_t x336 = INT64_MAX;

    t83 = (x333^((x334&x335)!=x336));

    if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x338 = UINT64_MAX;
	static volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;

    t84 = (x337^((x338&x339)!=x340));

    if (t84 != 11486U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	int16_t x342 = -1352;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 7249259;

    t85 = (x341^((x342&x343)!=x344));

    if (t85 != 126) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = -5953;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 34U;

    t86 = (x345^((x346&x347)!=x348));

    if (t86 != -27166270LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MAX;
	static volatile int8_t x351 = INT8_MIN;
	int32_t t87 = 1866;

    t87 = (x349^((x350&x351)!=x352));

    if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = 15680756;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = -4515;
	int32_t t88 = 27;

    t88 = (x353^((x354&x355)!=x356));

    if (t88 != 15680757) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = -1;
	int64_t x358 = -7667498LL;
	int64_t x359 = 23927LL;
	uint8_t x360 = 1U;
	static volatile int32_t t89 = -37013348;

    t89 = (x357^((x358&x359)!=x360));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = 2;
	volatile int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile int64_t t90 = 828427133LL;

    t90 = (x361^((x362&x363)!=x364));

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	volatile int16_t x366 = -1467;
	static volatile uint16_t x367 = 28U;
	static int32_t x368 = INT32_MAX;
	int32_t t91 = -626662;

    t91 = (x365^((x366&x367)!=x368));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	static int16_t x370 = -1;
	int64_t x372 = INT64_MIN;

    t92 = (x369^((x370&x371)!=x372));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 3487U;
	int16_t x374 = -1;
	uint64_t x375 = 4661LLU;
	int64_t x376 = -1LL;

    t93 = (x373^((x374&x375)!=x376));

    if (t93 != 3486) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -43LL;
	static uint16_t x378 = 54U;
	uint32_t x379 = 171U;
	uint64_t x380 = 49555709510408447LLU;
	int64_t t94 = 395232773113LL;

    t94 = (x377^((x378&x379)!=x380));

    if (t94 != -44LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = -1;
	static int16_t x382 = -6;
	volatile int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -331442171;

    t95 = (x381^((x382&x383)!=x384));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MAX;

    t96 = (x385^((x386&x387)!=x388));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	volatile uint32_t x391 = 221U;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 4;

    t97 = (x389^((x390&x391)!=x392));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MAX;
	volatile int64_t t98 = 517LL;

    t98 = (x393^((x394&x395)!=x396));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t t99 = 313846783;

    t99 = (x397^((x398&x399)!=x400));

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x403 = -1;
	static int16_t x404 = INT16_MAX;
	int32_t t100 = 10495;

    t100 = (x401^((x402&x403)!=x404));

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x405 = 1704LLU;
	static volatile int8_t x406 = -27;
	static volatile int32_t x407 = INT32_MAX;
	volatile uint64_t t101 = 41LLU;

    t101 = (x405^((x406&x407)!=x408));

    if (t101 != 1705LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = -25;
	int64_t x410 = INT64_MIN;
	int16_t x411 = -1;
	int32_t t102 = -755;

    t102 = (x409^((x410&x411)!=x412));

    if (t102 != -26) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 8874985898015485878LLU;
	uint64_t x414 = 3136LLU;
	int16_t x415 = INT16_MIN;
	int32_t x416 = 1;
	uint64_t t103 = 2668481250534LLU;

    t103 = (x413^((x414&x415)!=x416));

    if (t103 != 8874985898015485879LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 12378U;
	uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MAX;
	int16_t x420 = 11459;
	volatile int32_t t104 = 7;

    t104 = (x417^((x418&x419)!=x420));

    if (t104 != 12379) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 220;
	int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MAX;
	int32_t x424 = INT32_MIN;

    t105 = (x421^((x422&x423)!=x424));

    if (t105 != 221) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 28U;
	int32_t x426 = INT32_MIN;
	static int8_t x428 = -60;
	volatile int32_t t106 = 4035;

    t106 = (x425^((x426&x427)!=x428));

    if (t106 != 29) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	int32_t x430 = INT32_MAX;
	static uint32_t x431 = 76825554U;
	int16_t x432 = -1;
	int32_t t107 = 16029654;

    t107 = (x429^((x430&x431)!=x432));

    if (t107 != 65534) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -644;
	int64_t x434 = INT64_MIN;
	static uint64_t x435 = 3537125868LLU;
	volatile int16_t x436 = INT16_MAX;
	volatile int32_t t108 = 155273146;

    t108 = (x433^((x434&x435)!=x436));

    if (t108 != -643) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	static volatile int8_t x438 = INT8_MAX;
	static uint8_t x439 = UINT8_MAX;
	int8_t x440 = -1;
	volatile int32_t t109 = 14;

    t109 = (x437^((x438&x439)!=x440));

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	uint8_t x442 = 104U;
	int32_t x443 = -1196;
	int32_t x444 = INT32_MIN;

    t110 = (x441^((x442&x443)!=x444));

    if (t110 != 4294967294U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	int16_t x446 = -5;
	uint8_t x447 = 6U;
	int32_t x448 = -25;
	int64_t t111 = 11646434920447099LL;

    t111 = (x445^((x446&x447)!=x448));

    if (t111 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -27;
	uint16_t x451 = 345U;
	static volatile int32_t t112 = 271798928;

    t112 = (x449^((x450&x451)!=x452));

    if (t112 != -28) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x454 = INT64_MIN;
	int16_t x455 = INT16_MIN;
	volatile uint64_t x456 = UINT64_MAX;

    t113 = (x453^((x454&x455)!=x456));

    if (t113 != 65534) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = 1U;
	volatile int32_t x458 = -22374;
	int64_t x459 = -1LL;
	int8_t x460 = -13;
	volatile int32_t t114 = -2173;

    t114 = (x457^((x458&x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x461 = 37640982784106213LL;
	static int32_t x462 = INT32_MAX;
	static uint64_t x463 = UINT64_MAX;
	uint16_t x464 = 7U;

    t115 = (x461^((x462&x463)!=x464));

    if (t115 != 37640982784106212LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x465 = INT32_MAX;
	int64_t x466 = INT64_MAX;
	uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 232U;
	int32_t t116 = 446;

    t116 = (x465^((x466&x467)!=x468));

    if (t116 != 2147483646) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = INT16_MAX;
	uint16_t x470 = 1051U;
	uint8_t x472 = UINT8_MAX;
	int32_t t117 = 7;

    t117 = (x469^((x470&x471)!=x472));

    if (t117 != 32766) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x473 = -1;
	volatile int16_t x475 = -1;
	int32_t x476 = INT32_MIN;
	int32_t t118 = -270364;

    t118 = (x473^((x474&x475)!=x476));

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	uint64_t x478 = 4955651188LLU;
	volatile int8_t x480 = 2;

    t119 = (x477^((x478&x479)!=x480));

    if (t119 != -2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x482 = UINT8_MAX;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -14992;

    t120 = (x481^((x482&x483)!=x484));

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x487 = UINT32_MAX;
	uint64_t x488 = UINT64_MAX;
	static int32_t t121 = -1878031;

    t121 = (x485^((x486&x487)!=x488));

    if (t121 != 4736) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	int16_t x490 = -660;
	int8_t x491 = -1;
	int64_t x492 = INT64_MAX;
	volatile int32_t t122 = -5272443;

    t122 = (x489^((x490&x491)!=x492));

    if (t122 != 2147483646) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	uint32_t x494 = 131957U;
	int32_t x495 = INT32_MAX;
	volatile int32_t x496 = 391358;
	volatile int32_t t123 = -197;

    t123 = (x493^((x494&x495)!=x496));

    if (t123 != 254) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 0U;
	int8_t x498 = 1;
	static volatile int32_t x500 = INT32_MAX;
	int32_t t124 = 300;

    t124 = (x497^((x498&x499)!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = UINT8_MAX;
	int32_t x503 = INT32_MIN;
	static volatile int8_t x504 = INT8_MIN;
	volatile int32_t t125 = -123;

    t125 = (x501^((x502&x503)!=x504));

    if (t125 != 254) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 7429;
	int16_t x506 = 0;
	int32_t x507 = -1;
	uint8_t x508 = 0U;
	int32_t t126 = 247271111;

    t126 = (x505^((x506&x507)!=x508));

    if (t126 != 7429) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -3792589LL;
	uint32_t x510 = 4040U;
	int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;

    t127 = (x509^((x510&x511)!=x512));

    if (t127 != -3792590LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x516 = INT8_MIN;
	uint64_t t128 = 688532439LLU;

    t128 = (x513^((x514&x515)!=x516));

    if (t128 != 1821237LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x518 = -1LL;
	int8_t x520 = 7;
	uint32_t t129 = 298997U;

    t129 = (x517^((x518&x519)!=x520));

    if (t129 != 864882U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x522 = INT16_MAX;
	int16_t x523 = INT16_MIN;
	volatile int64_t x524 = -1LL;
	volatile int32_t t130 = 4787275;

    t130 = (x521^((x522&x523)!=x524));

    if (t130 != 2147483646) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = 926504827839647LL;
	volatile int64_t x526 = -1LL;
	uint16_t x527 = 1U;
	int8_t x528 = INT8_MAX;

    t131 = (x525^((x526&x527)!=x528));

    if (t131 != 926504827839646LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x530 = INT32_MIN;
	uint16_t x531 = 12U;
	uint8_t x532 = UINT8_MAX;
	volatile uint32_t t132 = 2953U;

    t132 = (x529^((x530&x531)!=x532));

    if (t132 != 4294967294U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x533 = UINT8_MAX;
	int8_t x534 = INT8_MIN;
	static int8_t x535 = INT8_MIN;

    t133 = (x533^((x534&x535)!=x536));

    if (t133 != 254) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x538 = 2302782U;
	uint8_t x539 = 0U;
	int64_t x540 = INT64_MIN;
	volatile int32_t t134 = 13325315;

    t134 = (x537^((x538&x539)!=x540));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int8_t x542 = 60;
	uint16_t x543 = UINT16_MAX;
	volatile int8_t x544 = 8;
	int32_t t135 = -229033;

    t135 = (x541^((x542&x543)!=x544));

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	volatile int8_t x548 = 5;
	volatile uint64_t t136 = 42955LLU;

    t136 = (x545^((x546&x547)!=x548));

    if (t136 != 682483129582LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = INT16_MIN;
	volatile int8_t x551 = INT8_MAX;

    t137 = (x549^((x550&x551)!=x552));

    if (t137 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = -1;
	uint16_t x555 = UINT16_MAX;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t138 = 228;

    t138 = (x553^((x554&x555)!=x556));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 1;
	volatile int8_t x559 = -1;
	static int16_t x560 = 23;
	volatile int32_t t139 = -182;

    t139 = (x557^((x558&x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 102646970U;
	int8_t x562 = -1;
	int16_t x563 = INT16_MIN;
	int8_t x564 = -1;
	uint32_t t140 = 148437657U;

    t140 = (x561^((x562&x563)!=x564));

    if (t140 != 102646971U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = 22461179290558LL;
	uint64_t x566 = 214LLU;
	uint16_t x567 = UINT16_MAX;
	volatile uint8_t x568 = UINT8_MAX;
	static volatile int64_t t141 = 6038LL;

    t141 = (x565^((x566&x567)!=x568));

    if (t141 != 22461179290559LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -56;
	volatile uint32_t x570 = UINT32_MAX;
	static int8_t x571 = INT8_MIN;
	int32_t x572 = -1;
	volatile int32_t t142 = 0;

    t142 = (x569^((x570&x571)!=x572));

    if (t142 != -55) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 0;
	int64_t x574 = 42LL;
	uint8_t x575 = 5U;
	static int64_t x576 = 135493132707991433LL;
	volatile int32_t t143 = -4;

    t143 = (x573^((x574&x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	uint16_t x578 = 3864U;
	int32_t x579 = INT32_MIN;
	static volatile int32_t t144 = -13343;

    t144 = (x577^((x578&x579)!=x580));

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	volatile int64_t t145 = 3742924LL;

    t145 = (x581^((x582&x583)!=x584));

    if (t145 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = -1;
	volatile int32_t x587 = INT32_MAX;
	uint8_t x588 = 3U;
	volatile int32_t t146 = 153;

    t146 = (x585^((x586&x587)!=x588));

    if (t146 != -39054552) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 21058U;
	int32_t x590 = -2897596;
	int64_t x591 = -2427683474LL;
	static int8_t x592 = INT8_MAX;
	uint32_t t147 = 3U;

    t147 = (x589^((x590&x591)!=x592));

    if (t147 != 21059U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = INT16_MIN;
	volatile uint64_t x594 = 1661LLU;
	static volatile int16_t x596 = INT16_MIN;

    t148 = (x593^((x594&x595)!=x596));

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MIN;
	static int64_t x598 = INT64_MIN;
	volatile int64_t x599 = INT64_MIN;
	int64_t x600 = -1LL;
	volatile int32_t t149 = -429;

    t149 = (x597^((x598&x599)!=x600));

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x602 = INT64_MAX;
	static uint32_t x604 = 68632U;
	int64_t t150 = -3262LL;

    t150 = (x601^((x602&x603)!=x604));

    if (t150 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int64_t x606 = INT64_MIN;
	uint64_t x607 = 345279LLU;
	uint64_t x608 = 5655588559LLU;
	volatile int64_t t151 = -41252422198807LL;

    t151 = (x605^((x606&x607)!=x608));

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	static int8_t x612 = -1;
	volatile int64_t t152 = -10641703791102LL;

    t152 = (x609^((x610&x611)!=x612));

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x615 = 15U;
	int8_t x616 = -1;
	int32_t t153 = 12964;

    t153 = (x613^((x614&x615)!=x616));

    if (t153 != 974) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 4018026875507LL;
	int8_t x618 = -1;
	static uint8_t x619 = 2U;
	static int64_t x620 = INT64_MIN;

    t154 = (x617^((x618&x619)!=x620));

    if (t154 != 4018026875506LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 48U;
	int32_t t155 = -418528018;

    t155 = (x621^((x622&x623)!=x624));

    if (t155 != 49) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint64_t x626 = UINT64_MAX;
	int32_t x627 = -44975401;
	volatile int32_t t156 = -4;

    t156 = (x625^((x626&x627)!=x628));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x630 = INT32_MIN;
	int8_t x631 = INT8_MIN;
	uint8_t x632 = 2U;
	int32_t t157 = -12;

    t157 = (x629^((x630&x631)!=x632));

    if (t157 != 4633) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	uint16_t x634 = 4438U;
	static volatile uint8_t x635 = 35U;
	uint32_t x636 = 558040531U;
	volatile int32_t t158 = -173656698;

    t158 = (x633^((x634&x635)!=x636));

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x637 = 228621557752737LLU;
	static int64_t x638 = INT64_MIN;
	static int64_t x639 = 1057536LL;
	volatile uint64_t t159 = 32760403LLU;

    t159 = (x637^((x638&x639)!=x640));

    if (t159 != 228621557752736LLU) { NG(); } else { ; }
	
}

void f160(void) {
    

    t160 = (x641^((x642&x643)!=x644));

    if (t160 != -226998) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	uint32_t x646 = 11535816U;
	static uint8_t x647 = UINT8_MAX;
	int32_t x648 = -35356087;
	volatile int32_t t161 = -219677483;

    t161 = (x645^((x646&x647)!=x648));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = -10785632246313LL;
	volatile uint32_t x651 = UINT32_MAX;
	int32_t x652 = INT32_MIN;
	int64_t t162 = -393LL;

    t162 = (x649^((x650&x651)!=x652));

    if (t162 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 1245383324802LLU;
	int16_t x654 = INT16_MIN;
	int8_t x656 = -1;
	uint64_t t163 = 791LLU;

    t163 = (x653^((x654&x655)!=x656));

    if (t163 != 1245383324803LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	int32_t x658 = -401692;
	int32_t x659 = INT32_MIN;
	volatile int8_t x660 = -1;
	static volatile int32_t t164 = -5590;

    t164 = (x657^((x658&x659)!=x660));

    if (t164 != -2) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	int16_t x663 = 6009;
	int32_t t165 = 5;

    t165 = (x661^((x662&x663)!=x664));

    if (t165 != 126) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = -14;
	int64_t x666 = -1LL;
	static uint32_t x667 = 1224614U;
	int32_t x668 = INT32_MAX;

    t166 = (x665^((x666&x667)!=x668));

    if (t166 != -13) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = 990U;
	uint16_t x671 = 70U;
	volatile int16_t x672 = INT16_MIN;
	static volatile int32_t t167 = 1309075;

    t167 = (x669^((x670&x671)!=x672));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = -1;
	volatile int16_t x674 = INT16_MIN;
	static int32_t x675 = INT32_MIN;
	uint8_t x676 = UINT8_MAX;

    t168 = (x673^((x674&x675)!=x676));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x678 = INT64_MAX;
	int64_t x679 = INT64_MIN;
	int64_t x680 = -1LL;

    t169 = (x677^((x678&x679)!=x680));

    if (t169 != 1314867) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = -1;
	int8_t x682 = INT8_MIN;
	static uint32_t x683 = 7667U;
	uint32_t x684 = 1529U;
	volatile int32_t t170 = -120695;

    t170 = (x681^((x682&x683)!=x684));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	uint16_t x686 = UINT16_MAX;

    t171 = (x685^((x686&x687)!=x688));

    if (t171 != 2147483646) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 1397405333993691LLU;
	int16_t x692 = INT16_MIN;
	static volatile uint64_t t172 = 26LLU;

    t172 = (x689^((x690&x691)!=x692));

    if (t172 != 1397405333993690LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 3170;
	static volatile int32_t x694 = INT32_MIN;
	volatile uint64_t x695 = 2LLU;
	static int32_t x696 = INT32_MAX;
	int32_t t173 = 84669318;

    t173 = (x693^((x694&x695)!=x696));

    if (t173 != 3171) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = INT64_MAX;
	static int8_t x699 = INT8_MAX;
	static int8_t x700 = INT8_MIN;

    t174 = (x697^((x698&x699)!=x700));

    if (t174 != -2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	int32_t x702 = -74833;
	uint16_t x703 = 207U;
	volatile uint8_t x704 = 0U;
	static volatile int32_t t175 = -412;

    t175 = (x701^((x702&x703)!=x704));

    if (t175 != 126) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x707 = 71363179940LL;
	uint64_t x708 = 12059LLU;

    t176 = (x705^((x706&x707)!=x708));

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	uint64_t x711 = 62129376426889758LLU;
	static int64_t x712 = INT64_MIN;
	int32_t t177 = -496004;

    t177 = (x709^((x710&x711)!=x712));

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -28817991051016388LL;
	int64_t x715 = INT64_MIN;
	int64_t x716 = -1LL;
	volatile int64_t t178 = -78LL;

    t178 = (x713^((x714&x715)!=x716));

    if (t178 != -28817991051016387LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x720 = -1;
	volatile int32_t t179 = 20;

    t179 = (x717^((x718&x719)!=x720));

    if (t179 != 3888) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MIN;
	uint16_t x722 = 0U;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t180 = 1378145;

    t180 = (x721^((x722&x723)!=x724));

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	volatile int8_t x727 = INT8_MAX;
	static int32_t t181 = -157146678;

    t181 = (x725^((x726&x727)!=x728));

    if (t181 != 65534) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	volatile uint8_t x730 = 3U;
	int32_t x732 = -1;

    t182 = (x729^((x730&x731)!=x732));

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x734 = -6554;
	int16_t x735 = INT16_MIN;
	int32_t t183 = -3468;

    t183 = (x733^((x734&x735)!=x736));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = 93;
	int64_t x738 = -1LL;
	int64_t x739 = -1LL;
	static uint8_t x740 = 18U;
	int32_t t184 = 1343;

    t184 = (x737^((x738&x739)!=x740));

    if (t184 != 92) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 49U;
	static volatile int8_t x742 = INT8_MIN;
	volatile uint64_t x743 = UINT64_MAX;
	uint32_t x744 = 1000U;

    t185 = (x741^((x742&x743)!=x744));

    if (t185 != 48) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x746 = -562609;
	static uint32_t x747 = UINT32_MAX;
	int32_t t186 = 31113983;

    t186 = (x745^((x746&x747)!=x748));

    if (t186 != 5502) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = UINT32_MAX;
	int16_t x751 = INT16_MIN;
	uint16_t x752 = 91U;

    t187 = (x749^((x750&x751)!=x752));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 5U;
	uint32_t x754 = 0U;
	volatile uint32_t x755 = 14U;
	int64_t x756 = INT64_MIN;
	volatile int32_t t188 = 1086;

    t188 = (x753^((x754&x755)!=x756));

    if (t188 != 4) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = UINT32_MAX;
	static volatile int64_t x760 = INT64_MAX;
	static int32_t t189 = 830961;

    t189 = (x757^((x758&x759)!=x760));

    if (t189 != -7901) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = 132491177U;
	static int16_t x762 = 10;
	static int16_t x763 = -1;
	static uint16_t x764 = 12U;

    t190 = (x761^((x762&x763)!=x764));

    if (t190 != 132491176U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	uint8_t x766 = 12U;
	uint32_t x767 = 35050U;
	uint16_t x768 = 190U;
	int64_t t191 = -26729985LL;

    t191 = (x765^((x766&x767)!=x768));

    if (t191 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MIN;
	volatile int64_t x770 = 5318354498119094LL;
	uint32_t x771 = UINT32_MAX;
	volatile int64_t x772 = -1LL;

    t192 = (x769^((x770&x771)!=x772));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x774 = UINT64_MAX;
	int32_t x775 = -273520;
	static int8_t x776 = INT8_MAX;
	int32_t t193 = -752493777;

    t193 = (x773^((x774&x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = 7U;
	int32_t x778 = INT32_MAX;
	int16_t x779 = INT16_MIN;
	int8_t x780 = INT8_MIN;
	int32_t t194 = -296041149;

    t194 = (x777^((x778&x779)!=x780));

    if (t194 != 6) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	int16_t x782 = INT16_MIN;
	uint16_t x783 = 2U;
	int32_t x784 = -527689;
	volatile int32_t t195 = -177165803;

    t195 = (x781^((x782&x783)!=x784));

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 0;
	int64_t x787 = -1LL;
	int16_t x788 = -1;
	volatile int32_t t196 = -1;

    t196 = (x785^((x786&x787)!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -1;
	int16_t x791 = INT16_MIN;
	int32_t x792 = INT32_MIN;
	static int32_t t197 = 1;

    t197 = (x789^((x790&x791)!=x792));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x793 = 61U;
	uint32_t x794 = 469717659U;
	int64_t x795 = INT64_MIN;
	int64_t x796 = INT64_MIN;

    t198 = (x793^((x794&x795)!=x796));

    if (t198 != 60) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = 46U;
	uint8_t x800 = 35U;
	uint64_t t199 = 30840552678311LLU;

    t199 = (x797^((x798&x799)!=x800));

    if (t199 != 231378LLU) { NG(); } else { ; }
	
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

