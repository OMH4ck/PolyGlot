
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

uint32_t x3 = 30762447U;
volatile int32_t x7 = INT32_MAX;
static int16_t x12 = INT16_MAX;
int8_t x19 = -2;
int16_t x20 = INT16_MIN;
uint32_t x22 = 93U;
static int8_t x23 = INT8_MIN;
uint16_t x26 = UINT16_MAX;
int32_t x36 = -1;
static int16_t x42 = INT16_MIN;
int8_t x50 = INT8_MIN;
volatile uint64_t t13 = UINT64_MAX;
static int8_t x60 = INT8_MIN;
int8_t x66 = -1;
volatile int16_t x67 = INT16_MIN;
int8_t x68 = -1;
int64_t x70 = -37938285146023LL;
static volatile int64_t t17 = -14821545LL;
volatile int64_t t18 = -28LL;
volatile uint64_t x82 = 609631LLU;
static uint64_t t20 = 72420LLU;
int16_t x86 = 4802;
int32_t x89 = -1;
static volatile int64_t x90 = -1LL;
int16_t x93 = 83;
static int8_t x94 = INT8_MAX;
int32_t t24 = 1;
static volatile int64_t x107 = 1668413168780621LL;
volatile uint32_t x108 = UINT32_MAX;
volatile int64_t t26 = 1LL;
static int8_t x109 = 6;
uint64_t x114 = UINT64_MAX;
uint32_t x118 = UINT32_MAX;
uint16_t x120 = UINT16_MAX;
int16_t x121 = INT16_MIN;
uint64_t x126 = 79022368967105LLU;
int64_t x134 = INT64_MIN;
uint32_t x135 = 19559U;
static int64_t t33 = INT64_MIN;
int16_t x137 = -26;
int16_t x138 = INT16_MAX;
volatile int64_t t36 = -338811LL;
volatile int32_t x154 = -3528;
volatile uint8_t x160 = UINT8_MAX;
uint64_t x161 = 20926503701297812LLU;
int8_t x163 = -1;
int64_t x164 = -6411532833347702LL;
uint16_t x166 = UINT16_MAX;
volatile uint8_t x172 = 45U;
int64_t x175 = INT64_MIN;
uint8_t x179 = UINT8_MAX;
volatile int64_t x180 = -1LL;
static uint8_t x182 = 2U;
int16_t x185 = -1637;
uint64_t x187 = 517790323LLU;
static int16_t x190 = -311;
volatile int32_t t49 = 233300;
int16_t x203 = INT16_MIN;
volatile int64_t x206 = INT64_MIN;
int8_t x208 = INT8_MIN;
int32_t t52 = 34932753;
int32_t x215 = -1;
volatile int64_t x222 = INT64_MIN;
int64_t x224 = 13819179626057421LL;
volatile int32_t x225 = -26194283;
int64_t x227 = INT64_MIN;
int64_t x235 = INT64_MIN;
uint32_t x236 = 8578614U;
static volatile int64_t t58 = 1774411LL;
static int64_t x240 = INT64_MIN;
int64_t x244 = INT64_MIN;
int16_t x247 = 7066;
volatile int64_t t62 = -6333LL;
static volatile int8_t x254 = -1;
static uint64_t t64 = 1317LLU;
uint16_t x263 = 9861U;
uint16_t x265 = UINT16_MAX;
static int64_t x267 = INT64_MIN;
int16_t x272 = 434;
volatile uint64_t t67 = 535241LLU;
uint8_t x273 = UINT8_MAX;
volatile int8_t x275 = -1;
volatile uint16_t x276 = UINT16_MAX;
int16_t x282 = INT16_MIN;
static uint16_t x286 = UINT16_MAX;
int8_t x287 = INT8_MIN;
static volatile int32_t x289 = -1;
volatile int32_t t71 = -16470;
uint64_t x293 = UINT64_MAX;
int8_t x296 = INT8_MIN;
static volatile int8_t x302 = INT8_MIN;
static volatile uint32_t x305 = UINT32_MAX;
uint64_t x314 = UINT64_MAX;
int64_t x319 = -1LL;
int8_t x320 = -10;
uint32_t x321 = 25U;
int8_t x331 = INT8_MIN;
static volatile uint64_t t83 = 593759456746670569LLU;
uint16_t x341 = 376U;
static int8_t x352 = -1;
volatile int64_t t87 = 4181293393144636LL;
static uint32_t x360 = UINT32_MAX;
volatile uint64_t t90 = 2186883554751863385LLU;
uint16_t x374 = 95U;
int64_t x377 = -1LL;
int64_t t93 = 16728487690LL;
int32_t x390 = -1;
int32_t t96 = -15745;
static int8_t x394 = INT8_MIN;
static volatile int64_t x396 = 1266360114044037LL;
uint64_t x401 = 14071LLU;
int16_t x415 = INT16_MIN;
int16_t x419 = 460;
uint64_t x423 = 44843376924286634LLU;
int32_t x424 = -1;
uint32_t t105 = 388U;
volatile uint8_t x433 = 2U;
static uint32_t x436 = 59630U;
int8_t x443 = INT8_MAX;
volatile uint32_t x445 = UINT32_MAX;
int64_t x451 = INT64_MIN;
static int64_t x458 = INT64_MIN;
volatile uint16_t x462 = 780U;
static volatile int32_t t114 = 5564082;
int64_t x467 = INT64_MAX;
uint64_t t115 = 3707463658104074553LLU;
volatile uint32_t x472 = UINT32_MAX;
int64_t t117 = -5LL;
int32_t x478 = -3152612;
volatile int16_t x479 = -1;
int16_t x482 = 774;
static int64_t x483 = INT64_MIN;
static volatile int64_t t119 = 563753LL;
static int32_t x487 = INT32_MIN;
static int32_t x490 = INT32_MAX;
int64_t x498 = INT64_MIN;
uint32_t x501 = UINT32_MAX;
uint32_t x505 = 1680420U;
int8_t x512 = INT8_MAX;
static uint16_t x515 = 462U;
int64_t x516 = INT64_MIN;
static uint32_t x517 = UINT32_MAX;
static uint32_t x524 = UINT32_MAX;
static volatile int64_t t129 = INT64_MAX;
uint32_t x526 = UINT32_MAX;
int32_t x527 = INT32_MAX;
int16_t x536 = INT16_MIN;
uint64_t t133 = UINT64_MAX;
int32_t x541 = INT32_MAX;
volatile uint16_t x544 = 30U;
int32_t x546 = INT32_MAX;
uint32_t x547 = 9U;
int32_t x549 = INT32_MAX;
int64_t x555 = -1LL;
uint16_t x556 = UINT16_MAX;
static volatile int8_t x562 = -19;
volatile int32_t x568 = INT32_MAX;
uint32_t t140 = 3U;
int32_t x579 = INT32_MAX;
static int64_t x580 = INT64_MAX;
static volatile int64_t t143 = -165720626LL;
static int32_t x581 = -57891713;
int64_t x582 = INT64_MIN;
volatile int32_t x584 = -1;
volatile uint64_t t144 = 24508669891703845LLU;
int16_t x585 = -1;
int32_t x588 = -46;
int8_t x593 = -3;
int64_t x600 = -1LL;
volatile int64_t t148 = -259225LL;
int32_t x608 = INT32_MAX;
uint64_t x618 = UINT64_MAX;
volatile uint64_t t152 = 501127830374LLU;
int16_t x623 = INT16_MIN;
int32_t x627 = INT32_MIN;
int64_t t154 = 84LL;
uint8_t x629 = 0U;
static volatile int64_t t155 = 1LL;
static int64_t x633 = 1LL;
volatile uint64_t t156 = 7256325031871LLU;
int32_t x640 = INT32_MAX;
int16_t x641 = INT16_MIN;
int64_t x644 = INT64_MIN;
uint8_t x646 = UINT8_MAX;
int32_t t160 = -48468313;
int32_t x654 = -1;
static uint32_t x665 = 29688U;
uint32_t x666 = UINT32_MAX;
int8_t x667 = -1;
static volatile int16_t x673 = -1390;
static uint8_t x676 = 32U;
int16_t x697 = 0;
int16_t x698 = -1;
static uint32_t x701 = 134U;
uint16_t x704 = UINT16_MAX;
uint16_t x711 = UINT16_MAX;
int64_t x716 = INT64_MAX;
volatile uint8_t x725 = UINT8_MAX;
static int16_t x740 = INT16_MIN;
uint64_t t181 = 39851913LLU;
int64_t x748 = 1LL;
uint64_t t183 = 1170610550492582609LLU;
volatile uint16_t x756 = UINT16_MAX;
volatile int64_t t184 = -465283LL;
uint16_t x761 = UINT16_MAX;
uint64_t x762 = UINT64_MAX;
static volatile int16_t x766 = INT16_MAX;
static uint64_t t187 = 6157410LLU;
int32_t x776 = INT32_MIN;
int64_t t189 = -118982LL;
volatile int32_t x779 = INT32_MIN;
int64_t x781 = INT64_MAX;
int64_t x782 = -15LL;
int8_t x783 = INT8_MIN;
static uint64_t x785 = UINT64_MAX;
volatile uint64_t t192 = UINT64_MAX;
int16_t x795 = INT16_MIN;
volatile uint8_t x798 = 5U;
int64_t t196 = 14443458639625960LL;
int16_t x809 = INT16_MIN;


void f0(void) {
    	int8_t x1 = 1;
	uint32_t x2 = 63671643U;
	int64_t x4 = -155LL;
	volatile int64_t t0 = 43597306193973152LL;

    t0 = (x1^((x2&x3)%x4));

    if (t0 != 115LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 7152;
	int32_t x6 = INT32_MIN;
	int64_t x8 = INT64_MAX;
	int64_t t1 = -94618788844LL;

    t1 = (x5^((x6&x7)%x8));

    if (t1 != 7152LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = -1;
	static int16_t x10 = INT16_MIN;
	static int16_t x11 = INT16_MIN;
	int32_t t2 = -14;

    t2 = (x9^((x10&x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static uint8_t x14 = 2U;
	static uint8_t x15 = UINT8_MAX;
	int32_t x16 = -1;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (x13^((x14&x15)%x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	uint32_t x18 = 3U;
	uint32_t t4 = 2053U;

    t4 = (x17^((x18&x19)%x20));

    if (t4 != 253U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 14452633;
	int32_t x24 = INT32_MIN;
	static uint32_t t5 = 5018051U;

    t5 = (x21^((x22&x23)%x24));

    if (t5 != 14452633U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = 212;
	uint64_t t6 = 24846827LLU;

    t6 = (x25^((x26&x27)%x28));

    if (t6 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 3748793LLU;
	uint32_t x30 = UINT32_MAX;
	static int16_t x31 = -34;
	volatile int32_t x32 = 210103635;
	static volatile uint64_t t7 = 52934634764492LLU;

    t7 = (x29^((x30&x31)%x32));

    if (t7 != 95438555LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MAX;
	volatile uint8_t x34 = 2U;
	static int8_t x35 = -1;
	int32_t t8 = INT32_MAX;

    t8 = (x33^((x34&x35)%x36));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -13528;
	uint8_t x38 = 9U;
	int64_t x39 = -470380077LL;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 9LLU;

    t9 = (x37^((x38&x39)%x40));

    if (t9 != 18446744073709538089LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	static int8_t x43 = -17;
	volatile int64_t x44 = -1LL;
	volatile int64_t t10 = INT64_MAX;

    t10 = (x41^((x42&x43)%x44));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	static volatile int64_t x46 = INT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	volatile uint8_t x48 = 125U;
	int64_t t11 = 181577841750LL;

    t11 = (x45^((x46&x47)%x48));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 0U;
	int32_t x51 = 7087319;
	static int32_t x52 = 1;
	int32_t t12 = -4824;

    t12 = (x49^((x50&x51)%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = INT8_MAX;
	uint8_t x55 = UINT8_MAX;
	static int8_t x56 = INT8_MAX;

    t13 = (x53^((x54&x55)%x56));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 5U;
	int32_t t14 = 1;

    t14 = (x57^((x58&x59)%x60));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int8_t x62 = 0;
	uint8_t x63 = 3U;
	static uint16_t x64 = 7U;
	volatile int32_t t15 = 6;

    t15 = (x61^((x62&x63)%x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1;
	int32_t t16 = -3023434;

    t16 = (x65^((x66&x67)%x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile int8_t x71 = INT8_MIN;
	volatile int8_t x72 = INT8_MIN;

    t17 = (x69^((x70&x71)%x72));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	volatile int16_t x74 = -1;
	int64_t x75 = -61LL;
	uint16_t x76 = UINT16_MAX;

    t18 = (x73^((x74&x75)%x76));

    if (t18 != -65476LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 32U;
	volatile int16_t x78 = INT16_MAX;
	int8_t x79 = 2;
	static uint64_t x80 = UINT64_MAX;
	static uint64_t t19 = 21398502649LLU;

    t19 = (x77^((x78&x79)%x80));

    if (t19 != 34LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int8_t x83 = -2;
	uint32_t x84 = 7122U;

    t20 = (x81^((x82&x83)%x84));

    if (t20 != 4315LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	volatile uint64_t x87 = 46648050708LLU;
	int64_t x88 = INT64_MIN;
	uint64_t t21 = 16LLU;

    t21 = (x85^((x86&x87)%x88));

    if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x91 = INT64_MIN;
	int8_t x92 = 1;
	static int64_t t22 = 12859386326734117LL;

    t22 = (x89^((x90&x91)%x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x95 = -1;
	int32_t x96 = -2865259;
	static int32_t t23 = -3875;

    t23 = (x93^((x94&x95)%x96));

    if (t23 != 44) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	volatile int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MAX;
	static uint8_t x100 = 109U;

    t24 = (x97^((x98&x99)%x100));

    if (t24 != -19) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static volatile int8_t x102 = INT8_MIN;
	volatile int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	volatile uint64_t t25 = 16433054LLU;

    t25 = (x101^((x102&x103)%x104));

    if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x105 = -11;
	static int64_t x106 = -1LL;

    t26 = (x105^((x106&x107)%x108));

    if (t26 != -3058266813LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = 3307096U;
	static uint16_t x111 = 86U;
	static int64_t x112 = INT64_MIN;
	volatile int64_t t27 = 1532301173431814LL;

    t27 = (x109^((x110&x111)%x112));

    if (t27 != 86LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MAX;
	uint64_t x115 = 4422939201970910360LLU;
	uint64_t x116 = 21146974033474429LLU;
	uint64_t t28 = 4LLU;

    t28 = (x113^((x114&x115)%x116));

    if (t28 != 3221628974732404LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 925U;
	static volatile int32_t x119 = INT32_MIN;
	volatile uint32_t t29 = 58U;

    t29 = (x117^((x118&x119)%x120));

    if (t29 != 33693U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x122 = INT32_MIN;
	volatile uint16_t x123 = 448U;
	uint64_t x124 = 6LLU;
	volatile uint64_t t30 = 1072078613414831LLU;

    t30 = (x121^((x122&x123)%x124));

    if (t30 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = -212081021009814218LL;
	int8_t x127 = 13;
	int64_t x128 = INT64_MAX;
	uint64_t t31 = 1920229702235LLU;

    t31 = (x125^((x126&x127)%x128));

    if (t31 != 18234663052699737399LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	volatile int64_t x130 = INT64_MIN;
	static volatile int32_t x131 = -36863;
	uint8_t x132 = UINT8_MAX;
	int64_t t32 = -88348641LL;

    t32 = (x129^((x130&x131)%x132));

    if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	static int32_t x136 = INT32_MIN;

    t33 = (x133^((x134&x135)%x136));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x139 = INT8_MIN;
	volatile uint16_t x140 = 26U;
	int32_t t34 = 2;

    t34 = (x137^((x138&x139)%x140));

    if (t34 != -20) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	static int64_t x142 = -1LL;
	volatile uint16_t x143 = 53U;
	uint64_t x144 = 14337LLU;
	volatile uint64_t t35 = 2369565756874LLU;

    t35 = (x141^((x142&x143)%x144));

    if (t35 != 9223372036854775754LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;

    t36 = (x145^((x146&x147)%x148));

    if (t36 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 701827694;
	int16_t x150 = -1;
	int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MAX;
	volatile int32_t t37 = -75;

    t37 = (x149^((x150&x151)%x152));

    if (t37 != 701827601) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -7358LL;
	uint32_t x155 = UINT32_MAX;
	volatile int32_t x156 = INT32_MIN;
	int64_t t38 = -27LL;

    t38 = (x153^((x154&x155)%x156));

    if (t38 != -2147479174LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 7193LLU;
	volatile uint64_t t39 = UINT64_MAX;

    t39 = (x157^((x158&x159)%x160));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MIN;
	static uint64_t t40 = 701604905251802LLU;

    t40 = (x161^((x162&x163)%x164));

    if (t40 != 18425817570008253716LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 16989939405LLU;
	uint64_t t41 = 4922LLU;

    t41 = (x165^((x166&x167)%x168));

    if (t41 != 65408LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	static uint32_t x170 = 0U;
	uint16_t x171 = 6U;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = (x169^((x170&x171)%x172));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 7332502724238LLU;
	static int32_t x174 = INT32_MAX;
	uint8_t x176 = UINT8_MAX;
	uint64_t t43 = 1882363496383450LLU;

    t43 = (x173^((x174&x175)%x176));

    if (t43 != 7332502724238LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = 0;
	int16_t x178 = INT16_MIN;
	volatile int64_t t44 = -6304566093458LL;

    t44 = (x177^((x178&x179)%x180));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MIN;
	int64_t x183 = -50891210838289116LL;
	int64_t x184 = 1412721656426661686LL;
	int64_t t45 = INT64_MIN;

    t45 = (x181^((x182&x183)%x184));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = UINT32_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint64_t t46 = 345LLU;

    t46 = (x185^((x186&x187)%x188));

    if (t46 != 18446744073191760872LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	volatile int32_t x191 = 15072;
	uint8_t x192 = 12U;
	int32_t t47 = 999;

    t47 = (x189^((x190&x191)%x192));

    if (t47 != 65531) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 2712458580329194LLU;
	static int64_t x194 = -2189327944611899004LL;
	uint8_t x195 = 5U;
	uint16_t x196 = 20240U;
	static uint64_t t48 = 233LLU;

    t48 = (x193^((x194&x195)%x196));

    if (t48 != 2712458580329198LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = 2U;
	int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	int8_t x200 = INT8_MIN;

    t49 = (x197^((x198&x199)%x200));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	int8_t x202 = 0;
	volatile int16_t x204 = INT16_MIN;
	static volatile int64_t t50 = INT64_MAX;

    t50 = (x201^((x202&x203)%x204));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = 31004418295742964LL;
	int8_t x207 = INT8_MIN;
	int64_t t51 = -5933217LL;

    t51 = (x205^((x206&x207)%x208));

    if (t51 != 31004418295742964LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	static int8_t x211 = -4;
	static uint16_t x212 = UINT16_MAX;

    t52 = (x209^((x210&x211)%x212));

    if (t52 != -2147483645) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 0;
	int16_t x214 = INT16_MIN;
	static int8_t x216 = 15;
	volatile int32_t t53 = 3721;

    t53 = (x213^((x214&x215)%x216));

    if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int32_t x218 = -618;
	uint16_t x219 = 987U;
	static int64_t x220 = 2LL;
	volatile int64_t t54 = INT64_MIN;

    t54 = (x217^((x218&x219)%x220));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = -2;
	int32_t x223 = INT32_MIN;
	int64_t t55 = 96676LL;

    t55 = (x221^((x222&x223)%x224));

    if (t55 != 5979226274476001LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = INT8_MIN;
	int32_t x228 = -595751491;
	int64_t t56 = 12845706997617233LL;

    t56 = (x225^((x226&x227)%x228));

    if (t56 != 236522378LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 1313654921194LLU;
	static uint16_t x230 = 563U;
	int8_t x231 = INT8_MAX;
	volatile int8_t x232 = INT8_MAX;
	volatile uint64_t t57 = 10LLU;

    t57 = (x229^((x230&x231)%x232));

    if (t57 != 1313654921177LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	uint16_t x234 = UINT16_MAX;

    t58 = (x233^((x234&x235)%x236));

    if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int32_t x238 = 23858;
	int16_t x239 = INT16_MIN;
	static volatile int64_t t59 = 1LL;

    t59 = (x237^((x238&x239)%x240));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int8_t x243 = 1;
	volatile int64_t t60 = -35273736398576783LL;

    t60 = (x241^((x242&x243)%x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	static int8_t x246 = -1;
	int64_t x248 = 2022315LL;
	volatile int64_t t61 = -30763259672631909LL;

    t61 = (x245^((x246&x247)%x248));

    if (t61 != 7013LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -95;
	int64_t x250 = 782LL;
	static int8_t x251 = -1;
	uint32_t x252 = 333953041U;

    t62 = (x249^((x250&x251)%x252));

    if (t62 != -849LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	volatile uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = 3139408620267778857LL;

    t63 = (x253^((x254&x255)%x256));

    if (t63 != -65536LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 1425537503965540935LLU;
	uint32_t x258 = 114U;
	static uint8_t x259 = 0U;
	static int16_t x260 = INT16_MAX;

    t64 = (x257^((x258&x259)%x260));

    if (t64 != 1425537503965540935LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	volatile int64_t x262 = -1LL;
	int8_t x264 = INT8_MAX;
	int64_t t65 = -2020LL;

    t65 = (x261^((x262&x263)%x264));

    if (t65 != -32686LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t66 = 157LL;

    t66 = (x265^((x266&x267)%x268));

    if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	static volatile int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MIN;

    t67 = (x269^((x270&x271)%x272));

    if (t67 != 7LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = 7;
	volatile int32_t t68 = 1120875;

    t68 = (x273^((x274&x275)%x276));

    if (t68 != 248) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x281 = 1U;
	volatile uint64_t x283 = UINT64_MAX;
	static int64_t x284 = -1LL;
	uint64_t t69 = 15LLU;

    t69 = (x281^((x282&x283)%x284));

    if (t69 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = INT16_MIN;
	static uint32_t x288 = 9U;
	uint32_t t70 = 16U;

    t70 = (x285^((x286&x287)%x288));

    if (t70 != 4294934533U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x290 = 56;
	volatile int8_t x291 = 0;
	volatile int32_t x292 = INT32_MIN;

    t71 = (x289^((x290&x291)%x292));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x294 = -11;
	uint64_t x295 = 39824LLU;
	volatile uint64_t t72 = 18786LLU;

    t72 = (x293^((x294&x295)%x296));

    if (t72 != 18446744073709511791LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -1;
	volatile int8_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	int32_t t73 = 5;

    t73 = (x297^((x298&x299)%x300));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = INT64_MIN;
	volatile int16_t x303 = INT16_MIN;
	uint16_t x304 = 424U;
	static volatile int64_t t74 = 4919335942518LL;

    t74 = (x301^((x302&x303)%x304));

    if (t74 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x306 = 2U;
	int8_t x307 = -6;
	int32_t x308 = INT32_MIN;
	static volatile uint32_t t75 = 12135U;

    t75 = (x305^((x306&x307)%x308));

    if (t75 != 4294967293U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = -1;
	volatile int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	static int64_t x312 = INT64_MIN;
	volatile int64_t t76 = -103440025113212326LL;

    t76 = (x309^((x310&x311)%x312));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x313 = 63U;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	uint64_t t77 = 80LLU;

    t77 = (x313^((x314&x315)%x316));

    if (t77 != 65472LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = UINT16_MAX;
	static int32_t x318 = -1;
	static int64_t t78 = -103325731378737925LL;

    t78 = (x317^((x318&x319)%x320));

    if (t78 != -65536LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x322 = -3700120LL;
	static int64_t x323 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int64_t t79 = 159402227081664825LL;

    t79 = (x321^((x322&x323)%x324));

    if (t79 != -32743LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x325 = 30760412U;
	int16_t x326 = INT16_MIN;
	static uint64_t x327 = 2940LLU;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t80 = 1980436912330LLU;

    t80 = (x325^((x326&x327)%x328));

    if (t80 != 30760412LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MIN;
	static int8_t x330 = -2;
	uint16_t x332 = 42U;
	int32_t t81 = -314798;

    t81 = (x329^((x330&x331)%x332));

    if (t81 != 126) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = 6U;
	static volatile int64_t x334 = -1LL;
	int32_t x335 = -5415;
	int8_t x336 = 47;
	int64_t t82 = 3789239143632LL;

    t82 = (x333^((x334&x335)%x336));

    if (t82 != -16LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = 141928323524406LLU;
	volatile uint16_t x338 = 9U;
	int64_t x339 = INT64_MIN;
	uint16_t x340 = UINT16_MAX;

    t83 = (x337^((x338&x339)%x340));

    if (t83 != 141928323524406LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x342 = -1;
	volatile int16_t x343 = -7;
	static uint16_t x344 = 23617U;
	static volatile int32_t t84 = 5;

    t84 = (x341^((x342&x343)%x344));

    if (t84 != -383) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	static volatile uint32_t x347 = UINT32_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t85 = 3963673717943LL;

    t85 = (x345^((x346&x347)%x348));

    if (t85 != -4294967169LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x349 = 0;
	int8_t x350 = 6;
	uint16_t x351 = 1U;
	volatile int32_t t86 = 202289;

    t86 = (x349^((x350&x351)%x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x353 = 20U;
	int8_t x354 = INT8_MAX;
	int16_t x355 = -1;
	static int64_t x356 = INT64_MAX;

    t87 = (x353^((x354&x355)%x356));

    if (t87 != 107LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = 65844478U;
	volatile uint16_t x358 = 1758U;
	int16_t x359 = INT16_MIN;
	uint32_t t88 = 352869587U;

    t88 = (x357^((x358&x359)%x360));

    if (t88 != 65844478U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x361 = INT32_MIN;
	volatile int64_t x362 = INT64_MIN;
	uint16_t x363 = 124U;
	int16_t x364 = -1;
	volatile int64_t t89 = -2878613589LL;

    t89 = (x361^((x362&x363)%x364));

    if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x365 = 1U;
	uint32_t x366 = UINT32_MAX;
	uint32_t x367 = 6971U;
	uint64_t x368 = 26LLU;

    t90 = (x365^((x366&x367)%x368));

    if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = -27;
	int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 1554441U;
	volatile uint32_t t91 = 9164U;

    t91 = (x369^((x370&x371)%x372));

    if (t91 != 4294967269U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = -306234124LL;
	volatile int8_t x375 = -1;
	static int16_t x376 = INT16_MAX;
	int64_t t92 = -31407401094892935LL;

    t92 = (x373^((x374&x375)%x376));

    if (t92 != -306234197LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x378 = -1LL;
	static uint8_t x379 = 4U;
	int64_t x380 = 2045774LL;

    t93 = (x377^((x378&x379)%x380));

    if (t93 != -5LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 29704506767404085LLU;
	int64_t x384 = INT64_MIN;
	uint64_t t94 = 1776031764LLU;

    t94 = (x381^((x382&x383)%x384));

    if (t94 != 18417039568789307391LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	int64_t x387 = 3594883122LL;
	uint16_t x388 = UINT16_MAX;
	volatile int64_t t95 = -111LL;

    t95 = (x385^((x386&x387)%x388));

    if (t95 != -26170LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x389 = INT32_MAX;
	static volatile int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MIN;

    t96 = (x389^((x390&x391)%x392));

    if (t96 != -2147483521) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x393 = -1LL;
	uint32_t x395 = 533763166U;
	volatile int64_t t97 = -145318LL;

    t97 = (x393^((x394&x395)%x396));

    if (t97 != -533763073LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x397 = INT8_MIN;
	volatile int64_t x398 = -1LL;
	int64_t x399 = 260026404954560340LL;
	volatile uint16_t x400 = 2U;
	static int64_t t98 = 3461563LL;

    t98 = (x397^((x398&x399)%x400));

    if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x402 = 4956;
	int8_t x403 = -1;
	int16_t x404 = -1;
	volatile uint64_t t99 = 7994292635LLU;

    t99 = (x401^((x402&x403)%x404));

    if (t99 != 14071LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 577778U;
	uint16_t x407 = UINT16_MAX;
	static uint16_t x408 = 97U;
	volatile uint64_t t100 = 513284454LLU;

    t100 = (x405^((x406&x407)%x408));

    if (t100 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = 0U;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = -1172280523406LL;
	volatile int64_t t101 = 3419452777LL;

    t101 = (x409^((x410&x411)%x412));

    if (t101 != 4294967168LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x413 = 0;
	int16_t x414 = INT16_MAX;
	int8_t x416 = 15;
	int32_t t102 = 4062;

    t102 = (x413^((x414&x415)%x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x417 = 0U;
	volatile uint16_t x418 = 2344U;
	static int32_t x420 = INT32_MAX;
	volatile int32_t t103 = 928069;

    t103 = (x417^((x418&x419)%x420));

    if (t103 != 264) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = -1;
	int64_t x422 = INT64_MAX;
	static uint64_t t104 = 830839701473572316LLU;

    t104 = (x421^((x422&x423)%x424));

    if (t104 != 18401900696785264981LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x425 = INT32_MIN;
	static uint8_t x426 = 10U;
	static int32_t x427 = INT32_MAX;
	static uint32_t x428 = 1U;

    t105 = (x425^((x426&x427)%x428));

    if (t105 != 2147483648U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x429 = 58U;
	volatile uint16_t x430 = UINT16_MAX;
	int32_t x431 = 628632;
	int8_t x432 = INT8_MIN;
	int32_t t106 = 3378;

    t106 = (x429^((x430&x431)%x432));

    if (t106 != 34) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t t107 = -45LL;

    t107 = (x433^((x434&x435)%x436));

    if (t107 != -45466LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x437 = INT32_MIN;
	volatile int8_t x438 = INT8_MIN;
	volatile int64_t x439 = INT64_MAX;
	static int16_t x440 = INT16_MIN;
	static volatile int64_t t108 = 284437924065007LL;

    t108 = (x437^((x438&x439)%x440));

    if (t108 != -2147451008LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x441 = 42020U;
	static volatile int8_t x442 = -20;
	volatile uint32_t x444 = UINT32_MAX;
	uint32_t t109 = 4U;

    t109 = (x441^((x442&x443)%x444));

    if (t109 != 42056U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = INT64_MIN;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = -33678927865LL;
	int64_t t110 = 157300526608769LL;

    t110 = (x445^((x446&x447)%x448));

    if (t110 != 4294967295LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = 1;
	volatile int8_t x450 = -1;
	static volatile uint8_t x452 = 22U;
	static volatile int64_t t111 = 124238095872691892LL;

    t111 = (x449^((x450&x451)%x452));

    if (t111 != -7LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x453 = -34;
	static int16_t x454 = INT16_MIN;
	int32_t x455 = -1;
	static int32_t x456 = INT32_MAX;
	volatile int32_t t112 = -1;

    t112 = (x453^((x454&x455)%x456));

    if (t112 != 32734) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = -1;
	static int64_t x459 = -1LL;
	int8_t x460 = INT8_MIN;
	volatile int64_t t113 = -5LL;

    t113 = (x457^((x458&x459)%x460));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = -1;
	static int16_t x463 = -1;
	int16_t x464 = INT16_MAX;

    t114 = (x461^((x462&x463)%x464));

    if (t114 != -781) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x465 = 16U;
	uint64_t x466 = UINT64_MAX;
	volatile int16_t x468 = -13;

    t115 = (x465^((x466&x467)%x468));

    if (t115 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = INT32_MIN;
	volatile uint32_t x470 = 5934U;
	int64_t x471 = 3332942882179037LL;
	static volatile int64_t t116 = -41197LL;

    t116 = (x469^((x470&x471)%x472));

    if (t116 != -2147481844LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x473 = 34U;
	static volatile int64_t x474 = 2767782636736LL;
	uint8_t x475 = UINT8_MAX;
	int16_t x476 = 6880;

    t117 = (x473^((x474&x475)%x476));

    if (t117 != 226LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x477 = 230890;
	int16_t x480 = -30;
	static volatile int32_t t118 = -886860;

    t118 = (x477^((x478&x479)%x480));

    if (t118 != -230892) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x481 = 48U;
	int16_t x484 = INT16_MAX;

    t119 = (x481^((x482&x483)%x484));

    if (t119 != 48LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x485 = 198470817367740794LLU;
	int8_t x486 = INT8_MAX;
	volatile uint16_t x488 = UINT16_MAX;
	volatile uint64_t t120 = 3376254937LLU;

    t120 = (x485^((x486&x487)%x488));

    if (t120 != 198470817367740794LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x489 = INT32_MIN;
	int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	int64_t t121 = -99LL;

    t121 = (x489^((x490&x491)%x492));

    if (t121 != -2147483521LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x493 = INT16_MIN;
	uint16_t x494 = 553U;
	static int8_t x495 = -1;
	volatile uint8_t x496 = 71U;
	volatile int32_t t122 = 215054;

    t122 = (x493^((x494&x495)%x496));

    if (t122 != -32712) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x497 = INT64_MIN;
	static int32_t x499 = 486900;
	int8_t x500 = -1;
	volatile int64_t t123 = INT64_MIN;

    t123 = (x497^((x498&x499)%x500));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x502 = 3U;
	volatile uint64_t x503 = 0LLU;
	int16_t x504 = -1658;
	volatile uint64_t t124 = 4045925LLU;

    t124 = (x501^((x502&x503)%x504));

    if (t124 != 4294967295LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x506 = -2183615892915955LL;
	int64_t x507 = INT64_MAX;
	volatile int16_t x508 = 292;
	volatile int64_t t125 = -51066195613582744LL;

    t125 = (x505^((x506&x507)%x508));

    if (t125 != 1680513LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x509 = 1287576892134707621LL;
	int8_t x510 = -4;
	volatile uint16_t x511 = UINT16_MAX;
	volatile int64_t t126 = -142873060LL;

    t126 = (x509^((x510&x511)%x512));

    if (t126 != 1287576892134707621LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x513 = INT64_MIN;
	static int32_t x514 = 521766;
	int64_t t127 = 4210731LL;

    t127 = (x513^((x514&x515)%x516));

    if (t127 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x518 = INT64_MAX;
	int32_t x519 = INT32_MAX;
	volatile uint64_t x520 = 284873580441457799LLU;
	uint64_t t128 = 49258380781071LLU;

    t128 = (x517^((x518&x519)%x520));

    if (t128 != 2147483648LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x521 = INT64_MAX;
	uint32_t x522 = 25U;
	volatile int8_t x523 = INT8_MIN;

    t129 = (x521^((x522&x523)%x524));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = 3509;
	int32_t x528 = -1;
	uint32_t t130 = 118373U;

    t130 = (x525^((x526&x527)%x528));

    if (t130 != 2147480138U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x529 = INT8_MIN;
	int32_t x530 = 11027703;
	uint16_t x531 = UINT16_MAX;
	uint16_t x532 = 22U;
	int32_t t131 = 0;

    t131 = (x529^((x530&x531)%x532));

    if (t131 != -117) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x533 = -89LL;
	int16_t x534 = INT16_MIN;
	int16_t x535 = INT16_MAX;
	int64_t t132 = -1259250LL;

    t132 = (x533^((x534&x535)%x536));

    if (t132 != -89LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = -1;
	int64_t x538 = INT64_MIN;
	volatile int8_t x539 = 3;
	uint64_t x540 = 2842LLU;

    t133 = (x537^((x538&x539)%x540));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x542 = 1U;
	uint8_t x543 = 57U;
	volatile int32_t t134 = -25;

    t134 = (x541^((x542&x543)%x544));

    if (t134 != 2147483646) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x545 = -1;
	volatile int8_t x548 = INT8_MIN;
	uint32_t t135 = 1039184394U;

    t135 = (x545^((x546&x547)%x548));

    if (t135 != 4294967286U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x550 = INT8_MAX;
	uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MAX;
	volatile int32_t t136 = 9980;

    t136 = (x549^((x550&x551)%x552));

    if (t136 != 2147483520) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = INT64_MIN;
	uint64_t x554 = 0LLU;
	uint64_t t137 = 108LLU;

    t137 = (x553^((x554&x555)%x556));

    if (t137 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x557 = INT64_MIN;
	volatile uint32_t x558 = 66U;
	uint8_t x559 = 36U;
	int64_t x560 = INT64_MAX;
	int64_t t138 = INT64_MIN;

    t138 = (x557^((x558&x559)%x560));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x561 = INT16_MIN;
	static uint64_t x563 = UINT64_MAX;
	int16_t x564 = -1;
	volatile uint64_t t139 = 399LLU;

    t139 = (x561^((x562&x563)%x564));

    if (t139 != 32749LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x565 = 328731012U;
	volatile int16_t x566 = -1141;
	static uint16_t x567 = 135U;

    t140 = (x565^((x566&x567)%x568));

    if (t140 != 328730887U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x569 = INT8_MAX;
	static int64_t x570 = INT64_MIN;
	int64_t x571 = INT64_MIN;
	int32_t x572 = -1;
	int64_t t141 = -1LL;

    t141 = (x569^((x570&x571)%x572));

    if (t141 != 127LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x573 = 18U;
	int16_t x574 = -318;
	int64_t x575 = INT64_MAX;
	uint8_t x576 = UINT8_MAX;
	volatile int64_t t142 = -122866813613184LL;

    t142 = (x573^((x574&x575)%x576));

    if (t142 != 83LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x577 = INT64_MAX;
	int64_t x578 = INT64_MAX;

    t143 = (x577^((x578&x579)%x580));

    if (t143 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x583 = 109705329521180LLU;

    t144 = (x581^((x582&x583)%x584));

    if (t144 != 18446744073651659903LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x586 = 11U;
	volatile int8_t x587 = -1;
	volatile int32_t t145 = 25476228;

    t145 = (x585^((x586&x587)%x588));

    if (t145 != -12) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = -823817481351766729LL;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = 356U;
	uint32_t x592 = 1222091U;
	int64_t t146 = 2266300203LL;

    t146 = (x589^((x590&x591)%x592));

    if (t146 != -823817481351766729LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x594 = INT64_MAX;
	volatile uint32_t x595 = 85402100U;
	static uint64_t x596 = 101660LLU;
	static uint64_t t147 = 3317LLU;

    t147 = (x593^((x594&x595)%x596));

    if (t147 != 18446744073709543913LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x597 = INT16_MIN;
	static int32_t x598 = 52068;
	uint32_t x599 = 14763U;

    t148 = (x597^((x598&x599)%x600));

    if (t148 != -32768LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile int64_t x602 = INT64_MAX;
	uint8_t x603 = 93U;
	int32_t x604 = 23;
	volatile int64_t t149 = 27548463LL;

    t149 = (x601^((x602&x603)%x604));

    if (t149 != 65534LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x605 = 1U;
	int16_t x606 = -1;
	int8_t x607 = -57;
	volatile int32_t t150 = 16533785;

    t150 = (x605^((x606&x607)%x608));

    if (t150 != -58) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x609 = 1;
	int8_t x610 = INT8_MIN;
	int16_t x611 = INT16_MIN;
	uint16_t x612 = 63U;
	int32_t t151 = 2001;

    t151 = (x609^((x610&x611)%x612));

    if (t151 != -7) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x617 = INT8_MAX;
	static volatile int64_t x619 = INT64_MIN;
	volatile int16_t x620 = -12;

    t152 = (x617^((x618&x619)%x620));

    if (t152 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x621 = 49672685138941LLU;
	uint8_t x622 = 4U;
	volatile int64_t x624 = INT64_MIN;
	uint64_t t153 = 1824434774LLU;

    t153 = (x621^((x622&x623)%x624));

    if (t153 != 49672685138941LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x625 = -1;
	uint32_t x626 = UINT32_MAX;
	volatile int64_t x628 = -1LL;

    t154 = (x625^((x626&x627)%x628));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x630 = 2922U;
	int8_t x631 = INT8_MIN;
	volatile int64_t x632 = INT64_MIN;

    t155 = (x629^((x630&x631)%x632));

    if (t155 != 2816LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x634 = 0;
	uint64_t x635 = 2543LLU;
	int16_t x636 = 26;

    t156 = (x633^((x634&x635)%x636));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x637 = 1U;
	static uint8_t x638 = 63U;
	volatile int64_t x639 = -1LL;
	volatile int64_t t157 = -7218889073559LL;

    t157 = (x637^((x638&x639)%x640));

    if (t157 != 62LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x642 = 12U;
	static int16_t x643 = -1;
	int64_t t158 = -1945399150553188LL;

    t158 = (x641^((x642&x643)%x644));

    if (t158 != -32756LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x645 = 37U;
	int64_t x647 = INT64_MIN;
	volatile int32_t x648 = -1;
	volatile int64_t t159 = 74LL;

    t159 = (x645^((x646&x647)%x648));

    if (t159 != 37LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x649 = INT16_MIN;
	int8_t x650 = -1;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;

    t160 = (x649^((x650&x651)%x652));

    if (t160 != 32640) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x653 = UINT8_MAX;
	int16_t x655 = INT16_MIN;
	uint16_t x656 = 106U;
	volatile int32_t t161 = 3;

    t161 = (x653^((x654&x655)%x656));

    if (t161 != -243) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x657 = 442268627U;
	static uint32_t x658 = 16231595U;
	static uint64_t x659 = 128LLU;
	uint8_t x660 = 25U;
	volatile uint64_t t162 = 9LLU;

    t162 = (x657^((x658&x659)%x660));

    if (t162 != 442268624LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x661 = 5;
	uint16_t x662 = 547U;
	int16_t x663 = 0;
	int64_t x664 = INT64_MIN;
	volatile int64_t t163 = -406180190LL;

    t163 = (x661^((x662&x663)%x664));

    if (t163 != 5LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x668 = INT32_MAX;
	uint32_t t164 = 759919101U;

    t164 = (x665^((x666&x667)%x668));

    if (t164 != 29689U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = -1;
	int16_t x670 = INT16_MIN;
	int16_t x671 = -1;
	int16_t x672 = -1743;
	static int32_t t165 = -221;

    t165 = (x669^((x670&x671)%x672));

    if (t165 != 1393) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x674 = 23U;
	uint32_t x675 = 19086839U;
	volatile uint32_t t166 = 35683324U;

    t166 = (x673^((x674&x675)%x676));

    if (t166 != 4294965893U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x681 = 13U;
	static volatile int8_t x682 = INT8_MAX;
	static int8_t x683 = INT8_MIN;
	int16_t x684 = -1;
	static int32_t t167 = -2079013;

    t167 = (x681^((x682&x683)%x684));

    if (t167 != 13) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	uint8_t x686 = 108U;
	uint16_t x687 = 2900U;
	int16_t x688 = 1572;
	volatile uint32_t t168 = 8555U;

    t168 = (x685^((x686&x687)%x688));

    if (t168 != 4294967227U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x689 = INT8_MAX;
	uint64_t x690 = 102897LLU;
	int64_t x691 = -12952887672815LL;
	volatile int64_t x692 = INT64_MIN;
	volatile uint64_t t169 = 6LLU;

    t169 = (x689^((x690&x691)%x692));

    if (t169 != 65646LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x693 = -43;
	uint8_t x694 = UINT8_MAX;
	static uint32_t x695 = 13U;
	uint32_t x696 = 77U;
	volatile uint32_t t170 = 115U;

    t170 = (x693^((x694&x695)%x696));

    if (t170 != 4294967256U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x699 = -1;
	int64_t x700 = INT64_MIN;
	int64_t t171 = -134815LL;

    t171 = (x697^((x698&x699)%x700));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x702 = -1LL;
	volatile int32_t x703 = 12;
	volatile int64_t t172 = -2742346410420LL;

    t172 = (x701^((x702&x703)%x704));

    if (t172 != 138LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x705 = -424835;
	int32_t x706 = INT32_MIN;
	static uint64_t x707 = 240828301333501LLU;
	static volatile int64_t x708 = INT64_MIN;
	volatile uint64_t t173 = 288435400983LLU;

    t173 = (x705^((x706&x707)%x708));

    if (t173 != 18446503246302905469LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x709 = INT16_MAX;
	static uint64_t x710 = 131381372317LLU;
	volatile int32_t x712 = -76;
	uint64_t t174 = 26522LLU;

    t174 = (x709^((x710&x711)%x712));

    if (t174 != 55906LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = INT64_MIN;
	volatile int8_t x714 = -9;
	int32_t x715 = INT32_MAX;
	int64_t t175 = -506519240397848692LL;

    t175 = (x713^((x714&x715)%x716));

    if (t175 != -9223372034707292169LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	static int16_t x718 = INT16_MIN;
	static int64_t x719 = INT64_MIN;
	int16_t x720 = -1;
	int64_t t176 = 0LL;

    t176 = (x717^((x718&x719)%x720));

    if (t176 != -2147483648LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x721 = 117169LLU;
	int64_t x722 = -3252370514330LL;
	static int8_t x723 = -1;
	int16_t x724 = -1;
	static uint64_t t177 = 255489629LLU;

    t177 = (x721^((x722&x723)%x724));

    if (t177 != 117169LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x726 = INT16_MIN;
	static volatile uint16_t x727 = 27U;
	volatile uint16_t x728 = 790U;
	static int32_t t178 = 84729;

    t178 = (x725^((x726&x727)%x728));

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x729 = 36177LLU;
	int16_t x730 = -1;
	uint16_t x731 = UINT16_MAX;
	uint64_t x732 = 1176528409457LLU;
	volatile uint64_t t179 = 347375430165301441LLU;

    t179 = (x729^((x730&x731)%x732));

    if (t179 != 29358LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x733 = -165001;
	uint16_t x734 = UINT16_MAX;
	int16_t x735 = -1;
	static volatile int32_t x736 = -362;
	static volatile int32_t t180 = -646284;

    t180 = (x733^((x734&x735)%x736));

    if (t180 != -164998) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x737 = 255060183LLU;
	static int8_t x738 = -1;
	static uint64_t x739 = 289905696LLU;

    t181 = (x737^((x738&x739)%x740));

    if (t181 != 510948599LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	static uint8_t x746 = 114U;
	volatile uint8_t x747 = 15U;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = (x745^((x746&x747)%x748));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x749 = -1;
	int32_t x750 = 527;
	int64_t x751 = -11LL;
	volatile uint64_t x752 = 121785849715LLU;

    t183 = (x749^((x750&x751)%x752));

    if (t183 != 18446744073709551098LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = -241943928;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = INT64_MAX;

    t184 = (x753^((x754&x755)%x756));

    if (t184 != -241943928LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x757 = 17643U;
	int8_t x758 = INT8_MIN;
	int16_t x759 = -1;
	uint8_t x760 = UINT8_MAX;
	volatile uint32_t t185 = 10084U;

    t185 = (x757^((x758&x759)%x760));

    if (t185 != 4294949739U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x763 = -1;
	int16_t x764 = 25;
	uint64_t t186 = 41LLU;

    t186 = (x761^((x762&x763)%x764));

    if (t186 != 65520LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x765 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	int8_t x768 = 19;

    t187 = (x765^((x766&x767)%x768));

    if (t187 != 18446744071562067979LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x769 = INT8_MIN;
	volatile int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MIN;
	static uint16_t x772 = 580U;
	static int32_t t188 = -1;

    t188 = (x769^((x770&x771)%x772));

    if (t188 != 352) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x773 = INT32_MAX;
	int32_t x774 = INT32_MIN;
	int64_t x775 = INT64_MAX;

    t189 = (x773^((x774&x775)%x776));

    if (t189 != 2147483647LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x777 = -165138807LL;
	int16_t x778 = INT16_MAX;
	int32_t x780 = -1403603;
	volatile int64_t t190 = -27782214LL;

    t190 = (x777^((x778&x779)%x780));

    if (t190 != -165138807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x784 = INT8_MAX;
	volatile int64_t t191 = INT64_MIN;

    t191 = (x781^((x782&x783)%x784));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x786 = INT32_MAX;
	int64_t x787 = INT64_MIN;
	uint64_t x788 = UINT64_MAX;

    t192 = (x785^((x786&x787)%x788));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x789 = INT64_MIN;
	int32_t x790 = INT32_MIN;
	volatile int8_t x791 = INT8_MIN;
	int64_t x792 = 43LL;
	static volatile int64_t t193 = 1780775330676LL;

    t193 = (x789^((x790&x791)%x792));

    if (t193 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = -24;
	uint16_t x794 = UINT16_MAX;
	static uint8_t x796 = 1U;
	int32_t t194 = -817903081;

    t194 = (x793^((x794&x795)%x796));

    if (t194 != -24) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x797 = INT64_MIN;
	volatile uint32_t x799 = UINT32_MAX;
	volatile int8_t x800 = INT8_MIN;
	int64_t t195 = 11128186027829LL;

    t195 = (x797^((x798&x799)%x800));

    if (t195 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x801 = -1;
	volatile int32_t x802 = INT32_MIN;
	int64_t x803 = -13638741637977798LL;
	int8_t x804 = -8;

    t196 = (x801^((x802&x803)%x804));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x805 = 1LL;
	uint32_t x806 = 4113575U;
	static int64_t x807 = INT64_MIN;
	int64_t x808 = -1LL;
	static volatile int64_t t197 = 3LL;

    t197 = (x805^((x806&x807)%x808));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x810 = INT16_MIN;
	static int8_t x811 = -4;
	int8_t x812 = INT8_MAX;
	int32_t t198 = -52747;

    t198 = (x809^((x810&x811)%x812));

    if (t198 != 32766) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x813 = INT64_MIN;
	int16_t x814 = 1492;
	int8_t x815 = INT8_MIN;
	static volatile int8_t x816 = 3;
	volatile int64_t t199 = -3148303LL;

    t199 = (x813^((x814&x815)%x816));

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

