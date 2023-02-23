
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

static int64_t x1 = -1LL;
static volatile uint16_t x4 = UINT16_MAX;
static int32_t t0 = -7164920;
volatile uint8_t x6 = 1U;
int8_t x10 = 0;
volatile int32_t t2 = 31371;
int8_t x15 = -1;
static volatile int64_t x16 = 5383033559577598LL;
int32_t t3 = 1953157;
volatile int32_t t4 = -228726235;
volatile int32_t x21 = INT32_MIN;
static int32_t x30 = 1545;
uint32_t x40 = UINT32_MAX;
int64_t x45 = INT64_MAX;
int32_t x49 = 883575;
int8_t x50 = -1;
int8_t x51 = -1;
uint64_t x58 = UINT64_MAX;
int32_t t13 = -48595;
volatile int32_t t15 = 83052423;
int8_t x72 = INT8_MIN;
static int16_t x73 = INT16_MIN;
uint16_t x75 = 16U;
volatile int64_t x78 = -1LL;
volatile uint16_t x79 = UINT16_MAX;
uint64_t x80 = 1187LLU;
static int8_t x87 = 3;
int8_t x88 = -1;
int8_t x107 = INT8_MIN;
static volatile uint64_t x114 = 112906LLU;
volatile int8_t x123 = INT8_MAX;
int64_t x126 = 1249998907325LL;
static int8_t x130 = -1;
int32_t x133 = -270;
uint32_t x138 = UINT32_MAX;
volatile int32_t t32 = -5758;
volatile int64_t x148 = -1LL;
int32_t t34 = 91464383;
uint64_t x149 = UINT64_MAX;
uint64_t x152 = 2044105366291774LLU;
volatile int32_t t35 = 154086;
volatile int32_t t36 = 3;
int8_t x162 = 8;
int16_t x165 = INT16_MIN;
int8_t x166 = INT8_MIN;
volatile int16_t x169 = -1;
volatile int8_t x175 = INT8_MIN;
static volatile uint8_t x177 = 42U;
uint64_t x184 = 2006LLU;
int16_t x185 = 1;
uint32_t x187 = UINT32_MAX;
volatile int32_t t46 = -19;
static volatile int32_t x205 = INT32_MIN;
volatile int8_t x206 = -1;
volatile int32_t x209 = -1;
int64_t x210 = INT64_MAX;
static uint32_t x215 = UINT32_MAX;
volatile int32_t t51 = -5282687;
static int16_t x218 = INT16_MIN;
uint64_t x220 = 1652140173174835LLU;
int32_t t52 = 184;
static int8_t x221 = INT8_MIN;
static uint32_t x224 = 1820788U;
static volatile int32_t t53 = 6123;
int32_t x230 = -17807776;
int32_t x235 = 9711;
uint8_t x240 = UINT8_MAX;
volatile uint8_t x241 = UINT8_MAX;
int32_t x249 = INT32_MAX;
volatile int32_t x250 = -5038;
uint8_t x251 = UINT8_MAX;
volatile int32_t x255 = INT32_MIN;
volatile int32_t x266 = INT32_MIN;
int16_t x271 = 386;
int16_t x282 = 24;
volatile uint64_t x288 = 1723493571617149LLU;
static int16_t x289 = -1;
int64_t x294 = 1LL;
volatile int32_t t71 = -15;
int8_t x299 = -1;
int32_t x303 = INT32_MIN;
volatile int32_t t77 = 56161790;
uint16_t x321 = UINT16_MAX;
volatile int64_t x328 = -1LL;
int16_t x329 = -1;
int16_t x331 = -1;
static int32_t t80 = 509;
uint64_t x334 = UINT64_MAX;
int32_t t81 = 189411;
static int16_t x337 = INT16_MAX;
int64_t x340 = INT64_MIN;
static uint8_t x344 = 60U;
static uint8_t x345 = 1U;
int64_t x363 = -17689365624159LL;
static int64_t x369 = INT64_MIN;
int32_t t90 = -290856200;
volatile int32_t t91 = -282;
int32_t t92 = 19845612;
int32_t x394 = -1;
volatile int32_t t95 = 144838004;
uint32_t x398 = 2151065U;
uint16_t x400 = 27770U;
static int64_t x401 = -15357LL;
int32_t t98 = -232;
volatile uint64_t x411 = 2578134597666547596LLU;
volatile uint32_t x413 = UINT32_MAX;
int64_t x415 = -1LL;
static volatile int32_t t101 = 112;
volatile int16_t x424 = -605;
static int16_t x427 = 99;
volatile uint8_t x429 = UINT8_MAX;
int16_t x431 = INT16_MIN;
volatile uint16_t x438 = 68U;
uint8_t x456 = UINT8_MAX;
volatile int8_t x457 = INT8_MIN;
volatile uint64_t x460 = 2521462956LLU;
int8_t x462 = INT8_MAX;
volatile int32_t x465 = INT32_MAX;
int8_t x469 = INT8_MIN;
volatile int64_t x472 = INT64_MIN;
int32_t x475 = 133713037;
static uint64_t x476 = UINT64_MAX;
int16_t x477 = INT16_MIN;
int8_t x484 = INT8_MAX;
volatile int8_t x489 = INT8_MIN;
int8_t x495 = INT8_MIN;
int64_t x496 = -29LL;
static int64_t x499 = 266177378047LL;
int32_t t121 = 1;
static int8_t x519 = 23;
int8_t x529 = -1;
volatile int32_t x530 = -15;
volatile int16_t x531 = INT16_MIN;
int32_t x532 = -1;
uint8_t x541 = UINT8_MAX;
static int64_t x543 = INT64_MIN;
static int32_t x551 = 6;
static int32_t t134 = -33;
int32_t x555 = INT32_MIN;
int16_t x568 = INT16_MIN;
uint8_t x572 = 10U;
static uint64_t x577 = 233822498LLU;
int64_t x593 = -1LL;
static volatile int64_t x594 = INT64_MAX;
int32_t x603 = -1;
uint8_t x606 = 111U;
volatile int8_t x610 = -1;
uint8_t x612 = 98U;
int16_t x613 = 5;
int8_t x616 = 51;
int64_t x617 = INT64_MIN;
int32_t t153 = -6041497;
static int32_t x636 = INT32_MIN;
static int8_t x639 = INT8_MAX;
int64_t x640 = INT64_MAX;
int8_t x642 = -1;
static int8_t x646 = -1;
static int32_t t158 = 0;
uint64_t x649 = UINT64_MAX;
volatile int32_t t159 = 71176;
volatile int32_t t160 = 10;
static volatile uint16_t x659 = UINT16_MAX;
int16_t x660 = INT16_MIN;
volatile int32_t t161 = -323663454;
int32_t x661 = INT32_MIN;
uint32_t x662 = 0U;
volatile int64_t x663 = INT64_MIN;
uint32_t x676 = UINT32_MAX;
uint64_t x680 = 3773231LLU;
uint16_t x681 = UINT16_MAX;
int8_t x683 = -3;
int8_t x690 = 1;
uint64_t x695 = 22LLU;
int32_t t170 = -5377;
int32_t x706 = -784960902;
volatile int32_t x707 = 10155754;
int8_t x713 = INT8_MAX;
volatile uint16_t x714 = UINT16_MAX;
static volatile uint32_t x716 = 1833715U;
int32_t t175 = 703738;
int16_t x720 = INT16_MIN;
int16_t x723 = -358;
int32_t x725 = INT32_MAX;
static int32_t t179 = 58;
uint16_t x737 = 12U;
uint8_t x738 = 4U;
volatile int32_t t183 = -3;
static volatile int32_t x750 = -1;
int64_t x752 = -1LL;
uint8_t x753 = 122U;
int32_t x758 = 3599;
int64_t x766 = INT64_MIN;
uint16_t x767 = UINT16_MAX;
static volatile uint8_t x771 = 56U;
int32_t t190 = 1;
uint64_t x786 = 8LLU;
int64_t x788 = -221760918LL;
volatile int16_t x790 = 10936;
int32_t x794 = INT32_MIN;
int32_t t196 = -30;
volatile int64_t x806 = INT64_MAX;
int32_t t197 = -147755;
static int64_t x809 = 0LL;
int32_t t198 = 1;
int8_t x814 = INT8_MAX;


void f0(void) {
    	int64_t x2 = -1LL;
	int32_t x3 = 743802534;

    t0 = (x1<=((x2/x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static volatile int32_t x7 = -983448196;
	static volatile int8_t x8 = INT8_MAX;
	int32_t t1 = 1835865;

    t1 = (x5<=((x6/x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = -1LL;

    t2 = (x9<=((x10/x11)&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	uint16_t x14 = UINT16_MAX;

    t3 = (x13<=((x14/x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 256U;
	static int16_t x18 = -1;
	uint16_t x19 = 887U;
	uint8_t x20 = 23U;

    t4 = (x17<=((x18/x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	uint8_t x23 = 7U;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 2146682;

    t5 = (x21<=((x22/x23)&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x29 = 4U;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = 53;
	volatile int32_t t6 = 0;

    t6 = (x29<=((x30/x31)&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t7 = 1;

    t7 = (x33<=((x34/x35)&x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	int32_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	static int32_t t8 = -8508793;

    t8 = (x37<=((x38/x39)&x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = -1;
	int32_t t9 = 173126787;

    t9 = (x41<=((x42/x43)&x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = -1LL;
	static uint16_t x47 = 1U;
	uint32_t x48 = 24755U;
	volatile int32_t t10 = -27;

    t10 = (x45<=((x46/x47)&x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = -953778;

    t11 = (x49<=((x50/x51)&x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x53 = -25231LL;
	int32_t x54 = -1;
	uint8_t x55 = 7U;
	int8_t x56 = 2;
	static int32_t t12 = -7;

    t12 = (x53<=((x54/x55)&x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	int8_t x59 = -1;
	int64_t x60 = 13008213957787LL;

    t13 = (x57<=((x58/x59)&x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	int8_t x62 = -1;
	uint8_t x63 = 39U;
	static uint16_t x64 = UINT16_MAX;
	static int32_t t14 = 365;

    t14 = (x61<=((x62/x63)&x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	int32_t x66 = 0;
	volatile int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = 18471931LLU;

    t15 = (x65<=((x66/x67)&x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	static int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	static int32_t t16 = 47866495;

    t16 = (x69<=((x70/x71)&x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 14U;
	int16_t x76 = INT16_MAX;
	int32_t t17 = -305;

    t17 = (x73<=((x74/x75)&x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x77 = UINT64_MAX;
	volatile int32_t t18 = 1760;

    t18 = (x77<=((x78/x79)&x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -6;
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 137U;
	int64_t x84 = INT64_MIN;
	volatile int32_t t19 = -8152;

    t19 = (x81<=((x82/x83)&x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x85 = INT16_MIN;
	int16_t x86 = -159;
	int32_t t20 = 109089;

    t20 = (x85<=((x86/x87)&x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MAX;
	volatile int16_t x94 = INT16_MIN;
	volatile uint64_t x95 = 1814530923906141785LLU;
	int64_t x96 = INT64_MAX;
	int32_t t21 = 0;

    t21 = (x93<=((x94/x95)&x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 345LL;
	int8_t x98 = -5;
	int16_t x99 = INT16_MAX;
	int16_t x100 = 468;
	volatile int32_t t22 = 21057;

    t22 = (x97<=((x98/x99)&x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = 5320;
	int64_t x102 = INT64_MIN;
	int8_t x103 = -2;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t23 = -106538;

    t23 = (x101<=((x102/x103)&x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MIN;
	int8_t x106 = 18;
	volatile int32_t x108 = INT32_MIN;
	static volatile int32_t t24 = 2562;

    t24 = (x105<=((x106/x107)&x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MIN;
	int8_t x110 = -14;
	int64_t x111 = -1LL;
	int8_t x112 = -1;
	int32_t t25 = -484578324;

    t25 = (x109<=((x110/x111)&x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x113 = UINT16_MAX;
	volatile int64_t x115 = INT64_MAX;
	volatile int64_t x116 = 157LL;
	volatile int32_t t26 = -4042880;

    t26 = (x113<=((x114/x115)&x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 423113201;
	int64_t x118 = 201941612183503770LL;
	int8_t x119 = 16;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t27 = -2055725;

    t27 = (x117<=((x118/x119)&x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = -1;
	volatile int32_t x124 = -1;
	static int32_t t28 = -49357;

    t28 = (x121<=((x122/x123)&x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x125 = INT8_MIN;
	int8_t x127 = -1;
	static volatile int16_t x128 = 11;
	volatile int32_t t29 = 972;

    t29 = (x125<=((x126/x127)&x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x129 = 3LLU;
	int8_t x131 = -1;
	int8_t x132 = 1;
	int32_t t30 = -31322741;

    t30 = (x129<=((x130/x131)&x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t31 = 157;

    t31 = (x133<=((x134/x135)&x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x137 = INT8_MAX;
	uint32_t x139 = 494552358U;
	int64_t x140 = 1396470606212914LL;

    t32 = (x137<=((x138/x139)&x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = -1;
	static volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = 50111;
	int32_t t33 = -344;

    t33 = (x141<=((x142/x143)&x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x145 = -1LL;
	int8_t x146 = -1;
	int32_t x147 = INT32_MIN;

    t34 = (x145<=((x146/x147)&x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = -1;
	int32_t x151 = INT32_MIN;

    t35 = (x149<=((x150/x151)&x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	int16_t x154 = -1;
	static volatile uint32_t x155 = 251042575U;
	static int64_t x156 = 1344LL;

    t36 = (x153<=((x154/x155)&x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x157 = -4882;
	int8_t x158 = -1;
	int16_t x159 = 8;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t37 = 26323194;

    t37 = (x157<=((x158/x159)&x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = INT16_MIN;
	uint16_t x163 = 14U;
	int64_t x164 = -1LL;
	int32_t t38 = -6178;

    t38 = (x161<=((x162/x163)&x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x167 = 166U;
	static int64_t x168 = INT64_MAX;
	volatile int32_t t39 = 2202;

    t39 = (x165<=((x166/x167)&x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x170 = -8183852609554LL;
	int8_t x171 = 1;
	int32_t x172 = INT32_MIN;
	int32_t t40 = -51234;

    t40 = (x169<=((x170/x171)&x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 17162LLU;
	uint32_t x174 = 326355051U;
	static int8_t x176 = 1;
	int32_t t41 = -1;

    t41 = (x173<=((x174/x175)&x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x178 = INT8_MIN;
	volatile int16_t x179 = -1;
	uint64_t x180 = 913566091664LLU;
	volatile int32_t t42 = -1949920;

    t42 = (x177<=((x178/x179)&x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	static int8_t x183 = -52;
	int32_t t43 = 105;

    t43 = (x181<=((x182/x183)&x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x186 = 128757151U;
	int32_t x188 = INT32_MAX;
	static int32_t t44 = 92233;

    t44 = (x185<=((x186/x187)&x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MIN;
	static volatile uint64_t x190 = 28555029203LLU;
	int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t45 = 305742799;

    t45 = (x189<=((x190/x191)&x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	static int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MIN;
	uint16_t x196 = 2U;

    t46 = (x193<=((x194/x195)&x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	static int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	static int32_t t47 = 9278;

    t47 = (x197<=((x198/x199)&x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -8099;
	static uint16_t x203 = 771U;
	int64_t x204 = INT64_MAX;
	int32_t t48 = -259;

    t48 = (x201<=((x202/x203)&x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x207 = 2193759807304347253LLU;
	int64_t x208 = 4098930841LL;
	volatile int32_t t49 = 3;

    t49 = (x205<=((x206/x207)&x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x211 = 11U;
	int32_t x212 = INT32_MIN;
	int32_t t50 = -3059445;

    t50 = (x209<=((x210/x211)&x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x213 = UINT8_MAX;
	volatile int32_t x214 = -1;
	int64_t x216 = INT64_MIN;

    t51 = (x213<=((x214/x215)&x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MAX;
	static int16_t x219 = INT16_MIN;

    t52 = (x217<=((x218/x219)&x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MIN;

    t53 = (x221<=((x222/x223)&x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x225 = 2U;
	static volatile int64_t x226 = 468476307536LL;
	uint8_t x227 = 5U;
	int16_t x228 = 1;
	int32_t t54 = 7;

    t54 = (x225<=((x226/x227)&x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = -1;
	static int32_t x231 = INT32_MIN;
	int32_t x232 = -90;
	static volatile int32_t t55 = -922;

    t55 = (x229<=((x230/x231)&x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x233 = INT64_MAX;
	int32_t x234 = 2;
	int64_t x236 = -1LL;
	static int32_t t56 = -59956103;

    t56 = (x233<=((x234/x235)&x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x237 = 1455353U;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MIN;
	volatile int32_t t57 = 84773758;

    t57 = (x237<=((x238/x239)&x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x242 = -1;
	uint64_t x243 = 529633370125294840LLU;
	int8_t x244 = -1;
	volatile int32_t t58 = 265;

    t58 = (x241<=((x242/x243)&x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MAX;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -1LL;
	static volatile int32_t t59 = -2;

    t59 = (x245<=((x246/x247)&x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x252 = INT8_MAX;
	int32_t t60 = 3578173;

    t60 = (x249<=((x250/x251)&x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = INT64_MIN;
	volatile uint8_t x254 = UINT8_MAX;
	int64_t x256 = 0LL;
	volatile int32_t t61 = 387903252;

    t61 = (x253<=((x254/x255)&x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = 13494;
	uint8_t x258 = 3U;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MAX;
	int32_t t62 = -638;

    t62 = (x257<=((x258/x259)&x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1683;
	int64_t x262 = INT64_MAX;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t63 = 1;

    t63 = (x261<=((x262/x263)&x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	static uint64_t x268 = UINT64_MAX;
	volatile int32_t t64 = -2266596;

    t64 = (x265<=((x266/x267)&x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = 46U;
	int32_t x270 = INT32_MIN;
	uint16_t x272 = 5662U;
	static volatile int32_t t65 = -355752668;

    t65 = (x269<=((x270/x271)&x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x273 = INT16_MIN;
	uint64_t x274 = 737393469813LLU;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t66 = -1;

    t66 = (x273<=((x274/x275)&x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = 930;
	volatile int32_t x278 = -2018;
	int16_t x279 = INT16_MIN;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t67 = -21572007;

    t67 = (x277<=((x278/x279)&x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MAX;
	static uint8_t x283 = 25U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t68 = 145118;

    t68 = (x281<=((x282/x283)&x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MAX;
	int32_t t69 = 116270;

    t69 = (x285<=((x286/x287)&x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x290 = 3817763U;
	static int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t70 = 256;

    t70 = (x289<=((x290/x291)&x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x293 = INT32_MAX;
	static volatile uint16_t x295 = UINT16_MAX;
	int64_t x296 = 987304719495134LL;

    t71 = (x293<=((x294/x295)&x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = 1;
	int64_t x300 = -1LL;
	int32_t t72 = 1181239;

    t72 = (x297<=((x298/x299)&x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MAX;
	uint8_t x302 = 106U;
	int64_t x304 = INT64_MAX;
	volatile int32_t t73 = -233134;

    t73 = (x301<=((x302/x303)&x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x305 = 57778U;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = 12;
	volatile uint16_t x308 = 65U;
	static volatile int32_t t74 = 460;

    t74 = (x305<=((x306/x307)&x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x309 = 60U;
	uint64_t x310 = 56164914451223LLU;
	static uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 3661U;
	static int32_t t75 = 10;

    t75 = (x309<=((x310/x311)&x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = 4U;
	int32_t x314 = -1;
	int8_t x315 = -7;
	uint16_t x316 = UINT16_MAX;
	static int32_t t76 = 10;

    t76 = (x313<=((x314/x315)&x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x317 = INT8_MAX;
	int64_t x318 = -1LL;
	static int64_t x319 = INT64_MIN;
	volatile int32_t x320 = -1;

    t77 = (x317<=((x318/x319)&x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x322 = INT32_MAX;
	static int32_t x323 = -1;
	uint32_t x324 = 7444404U;
	int32_t t78 = -6669665;

    t78 = (x321<=((x322/x323)&x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x325 = 16U;
	int16_t x326 = 82;
	static uint8_t x327 = 105U;
	volatile int32_t t79 = 159210480;

    t79 = (x325<=((x326/x327)&x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x330 = 2U;
	uint64_t x332 = 5099128999322315LLU;

    t80 = (x329<=((x330/x331)&x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x333 = UINT64_MAX;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;

    t81 = (x333<=((x334/x335)&x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	int32_t t82 = 23256;

    t82 = (x337<=((x338/x339)&x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = -1978;
	volatile uint64_t x342 = UINT64_MAX;
	static volatile int64_t x343 = INT64_MIN;
	volatile int32_t t83 = -135310717;

    t83 = (x341<=((x342/x343)&x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MAX;
	int32_t t84 = -78;

    t84 = (x345<=((x346/x347)&x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x353 = UINT32_MAX;
	static uint64_t x354 = 392014442090914758LLU;
	int16_t x355 = INT16_MAX;
	static int8_t x356 = 0;
	int32_t t85 = -2879;

    t85 = (x353<=((x354/x355)&x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = -1;
	int32_t x358 = INT32_MAX;
	int16_t x359 = 428;
	int32_t x360 = INT32_MIN;
	int32_t t86 = -116;

    t86 = (x357<=((x358/x359)&x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x361 = 55500711101LLU;
	uint8_t x362 = UINT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t87 = -3145;

    t87 = (x361<=((x362/x363)&x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = -1;
	volatile int64_t x366 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t88 = -46;

    t88 = (x365<=((x366/x367)&x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x370 = 5343373792622344567LLU;
	uint16_t x371 = 3053U;
	int8_t x372 = -14;
	volatile int32_t t89 = -903;

    t89 = (x369<=((x370/x371)&x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x373 = -1LL;
	static int16_t x374 = 2285;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MIN;

    t90 = (x373<=((x374/x375)&x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x377 = INT16_MIN;
	static uint8_t x378 = 27U;
	int32_t x379 = -1;
	int8_t x380 = -1;

    t91 = (x377<=((x378/x379)&x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	int8_t x382 = -15;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = INT16_MIN;

    t92 = (x381<=((x382/x383)&x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = -1LL;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t93 = -255;

    t93 = (x385<=((x386/x387)&x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x389 = INT16_MAX;
	static int32_t x390 = -1;
	int32_t x391 = 81;
	volatile uint32_t x392 = UINT32_MAX;
	int32_t t94 = 0;

    t94 = (x389<=((x390/x391)&x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x393 = -1;
	static int32_t x395 = -1;
	static volatile int32_t x396 = -1;

    t95 = (x393<=((x394/x395)&x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x397 = 1U;
	int16_t x399 = -1;
	int32_t t96 = 0;

    t96 = (x397<=((x398/x399)&x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x402 = INT16_MAX;
	uint64_t x403 = 5398LLU;
	static uint32_t x404 = 15473U;
	int32_t t97 = -173238976;

    t97 = (x401<=((x402/x403)&x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x405 = 241U;
	uint8_t x406 = UINT8_MAX;
	static uint64_t x407 = 1LLU;
	int32_t x408 = INT32_MIN;

    t98 = (x405<=((x406/x407)&x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = -1;
	int8_t x410 = -18;
	int8_t x412 = 8;
	static volatile int32_t t99 = 1;

    t99 = (x409<=((x410/x411)&x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x414 = UINT16_MAX;
	uint32_t x416 = 166534U;
	volatile int32_t t100 = 3627924;

    t100 = (x413<=((x414/x415)&x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x417 = -1;
	static volatile int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = -2;

    t101 = (x417<=((x418/x419)&x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x421 = INT16_MIN;
	static uint16_t x422 = 574U;
	uint16_t x423 = UINT16_MAX;
	int32_t t102 = 497755;

    t102 = (x421<=((x422/x423)&x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = INT32_MAX;
	volatile int16_t x426 = -6;
	uint32_t x428 = 34727U;
	volatile int32_t t103 = -153196899;

    t103 = (x425<=((x426/x427)&x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x430 = -1;
	int16_t x432 = 980;
	static int32_t t104 = 27204;

    t104 = (x429<=((x430/x431)&x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	volatile uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 8813395035055962685LLU;
	int32_t t105 = 26288;

    t105 = (x433<=((x434/x435)&x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x437 = -1561LL;
	int64_t x439 = -2LL;
	int8_t x440 = -1;
	int32_t t106 = -28;

    t106 = (x437<=((x438/x439)&x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x441 = -2;
	static int8_t x442 = INT8_MIN;
	int16_t x443 = -45;
	static uint16_t x444 = 3000U;
	int32_t t107 = 20237;

    t107 = (x441<=((x442/x443)&x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x445 = 19166840LLU;
	int16_t x446 = 1;
	int32_t x447 = INT32_MAX;
	volatile int8_t x448 = 0;
	int32_t t108 = 62329290;

    t108 = (x445<=((x446/x447)&x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MAX;
	static uint16_t x451 = 6498U;
	volatile uint8_t x452 = 55U;
	int32_t t109 = -63;

    t109 = (x449<=((x450/x451)&x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MIN;
	static int8_t x454 = 1;
	static uint32_t x455 = UINT32_MAX;
	int32_t t110 = 52;

    t110 = (x453<=((x454/x455)&x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x458 = 199U;
	int8_t x459 = -1;
	static volatile int32_t t111 = -1;

    t111 = (x457<=((x458/x459)&x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x463 = 61;
	int16_t x464 = 523;
	static int32_t t112 = -1439;

    t112 = (x461<=((x462/x463)&x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	volatile int8_t x468 = INT8_MIN;
	int32_t t113 = 988;

    t113 = (x465<=((x466/x467)&x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MAX;
	static volatile int32_t t114 = -848537746;

    t114 = (x469<=((x470/x471)&x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = -3377;
	uint8_t x474 = 15U;
	volatile int32_t t115 = -25;

    t115 = (x473<=((x474/x475)&x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x478 = 59U;
	volatile int8_t x479 = INT8_MIN;
	int64_t x480 = 618LL;
	volatile int32_t t116 = 362908;

    t116 = (x477<=((x478/x479)&x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x481 = 3595;
	int8_t x482 = -5;
	int64_t x483 = INT64_MIN;
	static int32_t t117 = 6317;

    t117 = (x481<=((x482/x483)&x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x485 = 7U;
	volatile int8_t x486 = 13;
	int32_t x487 = INT32_MAX;
	static int32_t x488 = INT32_MIN;
	int32_t t118 = -29791;

    t118 = (x485<=((x486/x487)&x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x490 = 244160;
	int64_t x491 = INT64_MAX;
	int32_t x492 = -8;
	static int32_t t119 = 17480345;

    t119 = (x489<=((x490/x491)&x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x494 = -1;
	int32_t t120 = -1110;

    t120 = (x493<=((x494/x495)&x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile int64_t x498 = INT64_MIN;
	int8_t x500 = -63;

    t121 = (x497<=((x498/x499)&x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x501 = INT32_MAX;
	uint64_t x502 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	int8_t x504 = 8;
	volatile int32_t t122 = 3371;

    t122 = (x501<=((x502/x503)&x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -1LL;
	uint8_t x506 = 8U;
	uint64_t x507 = UINT64_MAX;
	uint8_t x508 = UINT8_MAX;
	static volatile int32_t t123 = 1;

    t123 = (x505<=((x506/x507)&x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x509 = INT64_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	static int8_t x511 = INT8_MIN;
	static uint16_t x512 = 0U;
	static int32_t t124 = 63453;

    t124 = (x509<=((x510/x511)&x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = INT64_MIN;
	int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MIN;
	int8_t x516 = INT8_MIN;
	volatile int32_t t125 = 0;

    t125 = (x513<=((x514/x515)&x516));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x517 = 148212LLU;
	volatile int32_t x518 = INT32_MIN;
	static int8_t x520 = 62;
	volatile int32_t t126 = 503890364;

    t126 = (x517<=((x518/x519)&x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 32U;
	uint64_t x522 = UINT64_MAX;
	int32_t x523 = -21;
	uint8_t x524 = UINT8_MAX;
	int32_t t127 = -105533;

    t127 = (x521<=((x522/x523)&x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x525 = INT16_MAX;
	volatile int64_t x526 = INT64_MAX;
	volatile int8_t x527 = INT8_MIN;
	uint8_t x528 = 1U;
	static int32_t t128 = 659639;

    t128 = (x525<=((x526/x527)&x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t t129 = 29;

    t129 = (x529<=((x530/x531)&x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x533 = 59LLU;
	uint16_t x534 = 4U;
	int16_t x535 = INT16_MIN;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t130 = -15;

    t130 = (x533<=((x534/x535)&x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = 8054260608086085LLU;
	int8_t x538 = INT8_MAX;
	static volatile int16_t x539 = INT16_MAX;
	volatile int32_t x540 = -3632;
	int32_t t131 = 21;

    t131 = (x537<=((x538/x539)&x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x542 = INT16_MIN;
	int32_t x544 = INT32_MAX;
	int32_t t132 = -2;

    t132 = (x541<=((x542/x543)&x544));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MIN;
	uint8_t x546 = UINT8_MAX;
	int32_t x547 = INT32_MIN;
	volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t133 = -25552;

    t133 = (x545<=((x546/x547)&x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = INT64_MAX;
	int8_t x550 = -1;
	volatile int64_t x552 = -1LL;

    t134 = (x549<=((x550/x551)&x552));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x553 = INT32_MIN;
	uint64_t x554 = 7677191771469LLU;
	volatile int64_t x556 = -1LL;
	volatile int32_t t135 = -7;

    t135 = (x553<=((x554/x555)&x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = INT32_MAX;
	int32_t x558 = -1;
	volatile int64_t x559 = INT64_MAX;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t136 = -16310230;

    t136 = (x557<=((x558/x559)&x560));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = -6;
	uint8_t x562 = 5U;
	static int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;
	volatile int32_t t137 = -5099777;

    t137 = (x561<=((x562/x563)&x564));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MAX;
	int64_t x567 = 25026807LL;
	int32_t t138 = 494601768;

    t138 = (x565<=((x566/x567)&x568));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	int16_t x570 = 5053;
	volatile int32_t x571 = INT32_MIN;
	volatile int32_t t139 = -1;

    t139 = (x569<=((x570/x571)&x572));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x573 = -1LL;
	static volatile int32_t x574 = 0;
	volatile uint16_t x575 = 31344U;
	int32_t x576 = INT32_MIN;
	int32_t t140 = 2007006;

    t140 = (x573<=((x574/x575)&x576));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x578 = INT64_MAX;
	int8_t x579 = -6;
	static int32_t x580 = 64;
	volatile int32_t t141 = -14129;

    t141 = (x577<=((x578/x579)&x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x581 = -1;
	uint16_t x582 = UINT16_MAX;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MIN;
	volatile int32_t t142 = -6223067;

    t142 = (x581<=((x582/x583)&x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = -2087733LL;
	static uint64_t x586 = 236444970792552061LLU;
	int8_t x587 = -1;
	volatile uint16_t x588 = 31154U;
	int32_t t143 = -3366812;

    t143 = (x585<=((x586/x587)&x588));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = -1;
	volatile int16_t x590 = INT16_MIN;
	uint8_t x591 = 11U;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t144 = 22;

    t144 = (x589<=((x590/x591)&x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x595 = UINT8_MAX;
	int64_t x596 = 493LL;
	static int32_t t145 = 4397173;

    t145 = (x593<=((x594/x595)&x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x597 = -272LL;
	static uint16_t x598 = 1331U;
	static int16_t x599 = INT16_MIN;
	volatile int8_t x600 = INT8_MIN;
	volatile int32_t t146 = 0;

    t146 = (x597<=((x598/x599)&x600));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 19U;
	volatile int8_t x602 = -1;
	volatile int32_t x604 = INT32_MIN;
	static volatile int32_t t147 = -83;

    t147 = (x601<=((x602/x603)&x604));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x605 = INT64_MIN;
	int8_t x607 = INT8_MAX;
	static uint32_t x608 = 3272U;
	volatile int32_t t148 = -35135;

    t148 = (x605<=((x606/x607)&x608));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x609 = 0LL;
	int8_t x611 = INT8_MIN;
	int32_t t149 = 1;

    t149 = (x609<=((x610/x611)&x612));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x614 = INT8_MIN;
	int32_t x615 = 15;
	static volatile int32_t t150 = 647858806;

    t150 = (x613<=((x614/x615)&x616));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x618 = -248178678888LL;
	int8_t x619 = INT8_MIN;
	int16_t x620 = 39;
	volatile int32_t t151 = -1865;

    t151 = (x617<=((x618/x619)&x620));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = 394841014728635LL;
	uint64_t x622 = 331697517379948LLU;
	int32_t x623 = 1;
	int64_t x624 = -1LL;
	int32_t t152 = -12840725;

    t152 = (x621<=((x622/x623)&x624));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x625 = INT8_MIN;
	int16_t x626 = -1;
	static int32_t x627 = -64694;
	int16_t x628 = 1498;

    t153 = (x625<=((x626/x627)&x628));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MAX;
	static uint32_t x630 = 1829U;
	static volatile int16_t x631 = -1;
	uint32_t x632 = 6426819U;
	int32_t t154 = -94;

    t154 = (x629<=((x630/x631)&x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x633 = INT64_MAX;
	static volatile int8_t x634 = INT8_MIN;
	uint8_t x635 = 119U;
	static volatile int32_t t155 = -55687;

    t155 = (x633<=((x634/x635)&x636));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x637 = INT16_MIN;
	static int32_t x638 = -50466066;
	volatile int32_t t156 = -37015;

    t156 = (x637<=((x638/x639)&x640));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x641 = 23;
	int64_t x643 = INT64_MAX;
	int8_t x644 = -1;
	volatile int32_t t157 = -2;

    t157 = (x641<=((x642/x643)&x644));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x645 = INT16_MAX;
	uint64_t x647 = 7549444710LLU;
	uint32_t x648 = 29813772U;

    t158 = (x645<=((x646/x647)&x648));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x650 = INT64_MAX;
	uint16_t x651 = 28309U;
	uint8_t x652 = 2U;

    t159 = (x649<=((x650/x651)&x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x653 = INT8_MAX;
	volatile uint8_t x654 = 10U;
	int16_t x655 = -2;
	int32_t x656 = INT32_MAX;

    t160 = (x653<=((x654/x655)&x656));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x657 = INT64_MIN;
	int32_t x658 = 581964850;

    t161 = (x657<=((x658/x659)&x660));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x664 = -1;
	volatile int32_t t162 = 1526314;

    t162 = (x661<=((x662/x663)&x664));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = 58;
	uint64_t x666 = UINT64_MAX;
	volatile int32_t x667 = 10;
	static int8_t x668 = 1;
	int32_t t163 = -2;

    t163 = (x665<=((x666/x667)&x668));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x669 = INT16_MAX;
	static uint8_t x670 = 16U;
	int64_t x671 = -1LL;
	int8_t x672 = INT8_MIN;
	volatile int32_t t164 = 744521422;

    t164 = (x669<=((x670/x671)&x672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x673 = -1LL;
	volatile uint64_t x674 = 13LLU;
	int8_t x675 = -9;
	int32_t t165 = 16;

    t165 = (x673<=((x674/x675)&x676));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x677 = 8152U;
	uint64_t x678 = 1LLU;
	int8_t x679 = -1;
	int32_t t166 = 239483;

    t166 = (x677<=((x678/x679)&x680));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x682 = INT16_MAX;
	static int16_t x684 = INT16_MIN;
	static int32_t t167 = -64;

    t167 = (x681<=((x682/x683)&x684));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x685 = UINT8_MAX;
	uint32_t x686 = 72U;
	volatile int32_t x687 = INT32_MIN;
	int32_t x688 = -1;
	static int32_t t168 = -975;

    t168 = (x685<=((x686/x687)&x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = -1;
	uint32_t x691 = UINT32_MAX;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t169 = -409881;

    t169 = (x689<=((x690/x691)&x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x693 = 0U;
	int32_t x694 = INT32_MIN;
	int64_t x696 = 154281490798LL;

    t170 = (x693<=((x694/x695)&x696));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MAX;
	static volatile uint32_t x698 = 0U;
	int32_t x699 = INT32_MIN;
	uint8_t x700 = UINT8_MAX;
	static int32_t t171 = -520004206;

    t171 = (x697<=((x698/x699)&x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x701 = -11436575419LL;
	int64_t x702 = INT64_MAX;
	int64_t x703 = INT64_MIN;
	static int32_t x704 = -1;
	int32_t t172 = 63375;

    t172 = (x701<=((x702/x703)&x704));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x705 = 13U;
	int8_t x708 = 0;
	static volatile int32_t t173 = 3;

    t173 = (x705<=((x706/x707)&x708));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x709 = 24U;
	int16_t x710 = INT16_MIN;
	uint16_t x711 = 30U;
	int64_t x712 = -397LL;
	volatile int32_t t174 = -1;

    t174 = (x709<=((x710/x711)&x712));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x715 = UINT16_MAX;

    t175 = (x713<=((x714/x715)&x716));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x717 = -1LL;
	static int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MIN;
	volatile int32_t t176 = 51042933;

    t176 = (x717<=((x718/x719)&x720));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x721 = INT8_MAX;
	static uint16_t x722 = 18U;
	int8_t x724 = -2;
	int32_t t177 = -1;

    t177 = (x721<=((x722/x723)&x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x726 = INT64_MIN;
	int32_t x727 = -46325470;
	static int32_t x728 = INT32_MAX;
	static volatile int32_t t178 = 1;

    t178 = (x725<=((x726/x727)&x728));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x729 = INT64_MIN;
	static int64_t x730 = -283683694665493LL;
	int64_t x731 = -3727646501LL;
	int16_t x732 = 1;

    t179 = (x729<=((x730/x731)&x732));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x733 = 44U;
	int16_t x734 = INT16_MIN;
	int16_t x735 = 1;
	uint32_t x736 = 1U;
	volatile int32_t t180 = 27657500;

    t180 = (x733<=((x734/x735)&x736));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x739 = 24305078U;
	uint32_t x740 = 678902350U;
	int32_t t181 = 0;

    t181 = (x737<=((x738/x739)&x740));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x741 = INT64_MAX;
	int32_t x742 = INT32_MIN;
	int64_t x743 = -1LL;
	int64_t x744 = -4935559570899LL;
	volatile int32_t t182 = 2171027;

    t182 = (x741<=((x742/x743)&x744));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = -54136768404922LL;
	int8_t x746 = INT8_MIN;
	static int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;

    t183 = (x745<=((x746/x747)&x748));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x749 = -3988481505909822LL;
	int16_t x751 = -1;
	int32_t t184 = -2;

    t184 = (x749<=((x750/x751)&x752));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x754 = -1LL;
	int64_t x755 = -1LL;
	uint32_t x756 = 1913734U;
	int32_t t185 = -116;

    t185 = (x753<=((x754/x755)&x756));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = -280425692031085LL;
	volatile int16_t x759 = INT16_MAX;
	uint8_t x760 = 68U;
	int32_t t186 = 57084739;

    t186 = (x757<=((x758/x759)&x760));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x761 = -1;
	volatile uint64_t x762 = UINT64_MAX;
	int16_t x763 = 4;
	uint16_t x764 = UINT16_MAX;
	volatile int32_t t187 = -555758593;

    t187 = (x761<=((x762/x763)&x764));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x765 = UINT64_MAX;
	static uint8_t x768 = 1U;
	static volatile int32_t t188 = -179;

    t188 = (x765<=((x766/x767)&x768));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x769 = -1;
	volatile int16_t x770 = 365;
	static int16_t x772 = 110;
	volatile int32_t t189 = 62454;

    t189 = (x769<=((x770/x771)&x772));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x773 = INT16_MIN;
	int32_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	static int64_t x776 = -275734567337498LL;

    t190 = (x773<=((x774/x775)&x776));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x777 = -1LL;
	uint64_t x778 = 3633280611351LLU;
	int8_t x779 = -1;
	uint16_t x780 = UINT16_MAX;
	int32_t t191 = -7040;

    t191 = (x777<=((x778/x779)&x780));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x781 = -1LL;
	volatile uint8_t x782 = UINT8_MAX;
	uint32_t x783 = UINT32_MAX;
	int32_t x784 = 122480;
	int32_t t192 = 164071;

    t192 = (x781<=((x782/x783)&x784));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x785 = 665690054212757LLU;
	static uint64_t x787 = UINT64_MAX;
	int32_t t193 = 32;

    t193 = (x785<=((x786/x787)&x788));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x789 = -1;
	uint8_t x791 = 3U;
	int8_t x792 = 0;
	volatile int32_t t194 = -677;

    t194 = (x789<=((x790/x791)&x792));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = 2081;
	volatile int8_t x795 = INT8_MAX;
	int16_t x796 = INT16_MAX;
	int32_t t195 = 53;

    t195 = (x793<=((x794/x795)&x796));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = 6750777787946211LL;
	volatile int64_t x802 = -1119884356LL;
	uint16_t x803 = 1U;
	uint64_t x804 = 13168762370528LLU;

    t196 = (x801<=((x802/x803)&x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x805 = 20710281440461583LLU;
	int16_t x807 = INT16_MIN;
	uint8_t x808 = 1U;

    t197 = (x805<=((x806/x807)&x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x810 = 22;
	static int16_t x811 = INT16_MIN;
	int64_t x812 = 5LL;

    t198 = (x809<=((x810/x811)&x812));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x813 = INT64_MAX;
	int64_t x815 = INT64_MIN;
	volatile uint32_t x816 = UINT32_MAX;
	int32_t t199 = -1843;

    t199 = (x813<=((x814/x815)&x816));

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

