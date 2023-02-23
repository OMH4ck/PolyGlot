
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

int8_t x1 = INT8_MIN;
int32_t x3 = INT32_MIN;
static uint64_t x6 = UINT64_MAX;
int32_t x7 = -1;
volatile int64_t x8 = INT64_MIN;
int32_t t1 = -507;
volatile int32_t t2 = 64981157;
int32_t t3 = 155;
volatile uint8_t x21 = 0U;
int64_t x22 = -13407676104199336LL;
volatile int64_t x27 = INT64_MIN;
int8_t x32 = -1;
int16_t x36 = INT16_MIN;
uint16_t x39 = 207U;
volatile int32_t t9 = 3174;
volatile int32_t t10 = 0;
uint32_t x55 = 29U;
int64_t x68 = -1LL;
volatile uint32_t t17 = 8130525U;
int16_t x78 = -1;
int16_t x81 = INT16_MIN;
uint32_t x86 = 9U;
volatile int16_t x95 = 53;
volatile int32_t t23 = -2024;
int32_t t24 = 1885;
int16_t x102 = -1;
int64_t x108 = -694976762LL;
static int16_t x111 = -36;
int32_t x114 = -907;
static int8_t x116 = 13;
uint16_t x117 = 4431U;
int16_t x122 = INT16_MAX;
volatile int64_t x129 = INT64_MIN;
volatile int32_t t33 = -617587;
volatile int32_t x142 = INT32_MIN;
static uint16_t x143 = UINT16_MAX;
int64_t x146 = INT64_MIN;
volatile int64_t x147 = INT64_MIN;
volatile int32_t t37 = -3853;
uint64_t t38 = 224LLU;
int32_t t40 = 452118676;
static int64_t x167 = INT64_MAX;
int32_t x170 = -1;
int64_t x171 = INT64_MAX;
volatile int32_t x172 = -1;
static int64_t x180 = 1LL;
uint8_t x182 = 83U;
static int32_t x183 = -1;
volatile uint16_t x187 = 1U;
volatile int64_t t47 = 999223116965LL;
int8_t x195 = INT8_MIN;
int32_t t48 = -282501;
uint16_t x199 = 13U;
uint16_t x206 = 21409U;
uint32_t x210 = UINT32_MAX;
int64_t x211 = -1LL;
uint32_t x217 = 159811U;
uint32_t x221 = UINT32_MAX;
volatile uint32_t t55 = 1143U;
uint16_t x225 = 30U;
volatile int32_t t56 = -2;
uint8_t x229 = 15U;
uint32_t x233 = 721608U;
static int8_t x251 = 0;
static uint8_t x252 = 11U;
uint16_t x254 = UINT16_MAX;
volatile int32_t x268 = INT32_MIN;
int32_t t67 = -256847871;
uint8_t x278 = 3U;
int64_t x285 = -1LL;
int16_t x286 = -829;
uint64_t x288 = 4490160927645LLU;
volatile int64_t t72 = 481357LL;
static int16_t x298 = -142;
uint64_t x302 = 257821668LLU;
static volatile int32_t t77 = 16964;
int16_t x319 = INT16_MIN;
volatile int64_t t80 = -90095028903163767LL;
int32_t t81 = -318387;
volatile int32_t t83 = -57583786;
static uint64_t t84 = 1278049638LLU;
int32_t t86 = 1788;
volatile int32_t x349 = INT32_MAX;
static uint8_t x351 = 30U;
volatile int32_t t88 = 102;
int64_t x364 = 19LL;
uint32_t x365 = UINT32_MAX;
volatile uint32_t t91 = 9933477U;
int32_t x369 = INT32_MAX;
int32_t x378 = -1;
static uint32_t t94 = 74U;
int32_t t95 = 2707;
static int8_t x386 = -1;
int16_t x390 = -187;
static int64_t x391 = INT64_MIN;
int8_t x394 = -14;
int32_t x398 = -1;
uint8_t x413 = 2U;
int64_t x430 = -1LL;
uint32_t x440 = 5015U;
volatile uint32_t t109 = 11U;
int32_t x447 = 91913;
volatile uint64_t x449 = UINT64_MAX;
int8_t x450 = INT8_MIN;
static volatile int16_t x452 = -1;
uint64_t t112 = 5165032259LLU;
uint64_t x456 = UINT64_MAX;
volatile int32_t t115 = 1251;
int64_t x465 = INT64_MIN;
static uint16_t x467 = 76U;
uint32_t x479 = 14U;
static volatile uint8_t x483 = UINT8_MAX;
int8_t x486 = -1;
int16_t x494 = INT16_MIN;
volatile uint32_t t123 = 11899U;
uint8_t x502 = 2U;
int32_t x511 = -1;
uint16_t x515 = UINT16_MAX;
static uint8_t x516 = 3U;
volatile uint64_t x518 = UINT64_MAX;
static int16_t x521 = -25;
int16_t x529 = 24;
int32_t x538 = -1;
volatile uint32_t x539 = UINT32_MAX;
uint64_t x540 = 54LLU;
int16_t x545 = INT16_MAX;
int16_t x549 = INT16_MAX;
static uint16_t x553 = 263U;
static int32_t x555 = INT32_MIN;
static volatile int16_t x556 = -1;
int8_t x558 = INT8_MAX;
uint64_t x559 = UINT64_MAX;
volatile int16_t x561 = -9293;
volatile int8_t x564 = -3;
int64_t x569 = INT64_MIN;
int64_t x574 = INT64_MIN;
uint32_t x575 = 77U;
static volatile int32_t t144 = -35306320;
int16_t x584 = -107;
int8_t x586 = -1;
uint16_t x589 = 792U;
volatile int64_t x593 = -1LL;
int64_t t148 = -305208139368146893LL;
volatile int64_t x599 = INT64_MAX;
int16_t x602 = -2;
int32_t x606 = -169607427;
uint32_t x607 = 194U;
int16_t x611 = -63;
static volatile int32_t t152 = -38;
int8_t x613 = -7;
int16_t x617 = -1;
uint32_t x619 = 12U;
static int32_t t154 = 438160359;
int32_t x623 = -25826;
int8_t x626 = INT8_MIN;
int32_t x630 = INT32_MIN;
static uint16_t x631 = UINT16_MAX;
int32_t t157 = 482829;
volatile int32_t x635 = 635;
static int64_t x636 = INT64_MAX;
int32_t t159 = 1856061;
static int8_t x642 = 1;
volatile int32_t x643 = INT32_MAX;
static uint16_t x645 = 15U;
int16_t x646 = INT16_MIN;
volatile int32_t t161 = -1131;
uint32_t x650 = 1U;
static volatile int32_t t162 = 13;
static volatile uint16_t x656 = 1U;
volatile int64_t x662 = -33368528LL;
int32_t x663 = -1;
static volatile int64_t t165 = -11LL;
volatile uint16_t x672 = UINT16_MAX;
volatile int64_t x674 = 180511177LL;
int16_t x676 = -1;
int16_t x684 = -1;
volatile int32_t t170 = -3;
int64_t x685 = INT64_MIN;
volatile int8_t x691 = -1;
volatile uint32_t x692 = 688910251U;
uint8_t x697 = 76U;
static int8_t x699 = INT8_MIN;
int64_t x702 = 7LL;
static int16_t x703 = 230;
static int64_t x707 = INT64_MIN;
int16_t x708 = -2;
int32_t x709 = -1;
volatile int64_t x710 = -155575LL;
uint32_t x715 = 407829214U;
uint64_t x729 = UINT64_MAX;
uint32_t x730 = 50U;
int64_t x732 = INT64_MIN;
uint8_t x734 = UINT8_MAX;
uint16_t x736 = 1U;
volatile int32_t t183 = 430;
int32_t x750 = INT32_MAX;
uint8_t x755 = 23U;
volatile int16_t x763 = 1;
int32_t t190 = 22545;
int16_t x769 = INT16_MIN;
int32_t x772 = -21652;
static int8_t x774 = INT8_MIN;
static int8_t x775 = -1;
int32_t t193 = -1585228;
static int64_t x778 = INT64_MIN;
uint16_t x779 = 14U;
volatile int8_t x781 = 32;
volatile int32_t x784 = -3821379;
volatile int32_t t198 = -70;
uint32_t x800 = 29U;
volatile int32_t t199 = -120692;


void f0(void) {
    	volatile uint16_t x2 = UINT16_MAX;
	volatile int8_t x4 = 7;
	int32_t t0 = 29758369;

    t0 = (x1&((x2^x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;

    t1 = (x5&((x6^x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = 117000035;
	uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 92U;
	static volatile int32_t x12 = -1;

    t2 = (x9&((x10^x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;

    t3 = (x13&((x14^x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 0U;
	int32_t x18 = 61986765;
	int16_t x19 = INT16_MIN;
	int32_t x20 = 288262449;
	int32_t t4 = 229;

    t4 = (x17&((x18^x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x23 = 54577458279LLU;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 7167821;

    t5 = (x21&((x22^x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	uint32_t x28 = 22U;
	volatile int32_t t6 = 863740;

    t6 = (x25&((x26^x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	uint16_t x30 = 5873U;
	int64_t x31 = INT64_MIN;
	volatile int32_t t7 = 260;

    t7 = (x29&((x30^x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static volatile int16_t x34 = -5968;
	uint16_t x35 = UINT16_MAX;
	volatile int32_t t8 = -8208;

    t8 = (x33&((x34^x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 152;
	uint32_t x38 = UINT32_MAX;
	int8_t x40 = INT8_MIN;

    t9 = (x37&((x38^x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = 1544;
	uint8_t x42 = 2U;
	uint16_t x43 = 2U;
	int64_t x44 = -2402578395149401650LL;

    t10 = (x41&((x42^x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -395970569943LL;
	int8_t x46 = 0;
	int8_t x47 = 1;
	int16_t x48 = -16143;
	int64_t t11 = 10LL;

    t11 = (x45&((x46^x47)!=x48));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = 0;
	int64_t x50 = INT64_MAX;
	int16_t x51 = 31;
	int32_t x52 = INT32_MIN;
	int32_t t12 = -1;

    t12 = (x49&((x50^x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	volatile uint64_t x54 = 9507898886227299LLU;
	uint8_t x56 = 57U;
	static int64_t t13 = 11130070446289245LL;

    t13 = (x53&((x54^x55)!=x56));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 3952322981346LLU;
	volatile int8_t x58 = -1;
	uint8_t x59 = 1U;
	uint16_t x60 = 2U;
	static volatile uint64_t t14 = 817658617900179390LLU;

    t14 = (x57&((x58^x59)!=x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = INT16_MAX;
	uint64_t x62 = 247054213868715842LLU;
	static volatile uint32_t x63 = 365076396U;
	int32_t x64 = -8372;
	int32_t t15 = -355;

    t15 = (x61&((x62^x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 501U;
	static int32_t x66 = -1;
	volatile uint32_t x67 = UINT32_MAX;
	int32_t t16 = -13;

    t16 = (x65&((x66^x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	volatile uint16_t x70 = UINT16_MAX;
	int16_t x71 = 104;
	int16_t x72 = INT16_MIN;

    t17 = (x69&((x70^x71)!=x72));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x73 = 38174U;
	int32_t x74 = 71082;
	int8_t x75 = 1;
	uint8_t x76 = 3U;
	static uint32_t t18 = 7151U;

    t18 = (x73&((x74^x75)!=x76));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static uint64_t x79 = 7682034551012LLU;
	static volatile uint32_t x80 = 486U;
	int32_t t19 = 25880;

    t19 = (x77&((x78^x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -80;
	volatile int8_t x83 = INT8_MIN;
	static int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 90;

    t20 = (x81&((x82^x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	volatile int16_t x87 = 6152;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t21 = -9891694421312LL;

    t21 = (x85&((x86^x87)!=x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 13U;
	uint64_t x91 = 3221849339917962935LLU;
	uint8_t x92 = 4U;
	static uint64_t t22 = 37LLU;

    t22 = (x89&((x90^x91)!=x92));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 1;
	int8_t x94 = INT8_MAX;
	static uint64_t x96 = UINT64_MAX;

    t23 = (x93&((x94^x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	static volatile int32_t x98 = 1013;
	int16_t x99 = -1;
	int8_t x100 = INT8_MIN;

    t24 = (x97&((x98^x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 55520779;
	int64_t x103 = INT64_MAX;
	volatile int32_t x104 = -1;
	int32_t t25 = 7;

    t25 = (x101&((x102^x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MAX;
	int16_t x106 = -1;
	int64_t x107 = -97057535LL;
	volatile int32_t t26 = -220844644;

    t26 = (x105&((x106^x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 0;
	static volatile uint64_t x110 = 2293639LLU;
	uint16_t x112 = 163U;
	volatile int32_t t27 = -9564;

    t27 = (x109&((x110^x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 76U;
	uint16_t x115 = 14858U;
	int32_t t28 = -1691;

    t28 = (x113&((x114^x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = 53U;
	int32_t t29 = 146842602;

    t29 = (x117&((x118^x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	uint16_t x123 = 7229U;
	uint8_t x124 = 38U;
	volatile int32_t t30 = -99;

    t30 = (x121&((x122^x123)!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x125 = UINT32_MAX;
	int8_t x126 = 1;
	static uint16_t x127 = 2U;
	uint32_t x128 = 67505530U;
	static volatile uint32_t t31 = 73416445U;

    t31 = (x125&((x126^x127)!=x128));

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	int32_t x131 = 2;
	static uint64_t x132 = 725846LLU;
	int64_t t32 = 1LL;

    t32 = (x129&((x130^x131)!=x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = 194;
	static volatile int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;

    t33 = (x133&((x134^x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	static volatile uint32_t x140 = 0U;
	volatile int32_t t34 = -21;

    t34 = (x137&((x138^x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -4;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -864745;

    t35 = (x141&((x142^x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 814U;
	int64_t x148 = 138720039698248LL;
	static volatile uint32_t t36 = 930662699U;

    t36 = (x145&((x146^x147)!=x148));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	static int16_t x150 = INT16_MIN;
	uint16_t x151 = 65U;
	static uint16_t x152 = 2846U;

    t37 = (x149&((x150^x151)!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	uint8_t x155 = 29U;
	volatile int8_t x156 = INT8_MIN;

    t38 = (x153&((x154^x155)!=x156));

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = INT32_MIN;
	volatile uint32_t x158 = 7054578U;
	static volatile int16_t x159 = -265;
	static int16_t x160 = -6849;
	int32_t t39 = 126716;

    t39 = (x157&((x158^x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x161 = -299;
	uint16_t x162 = 6U;
	volatile uint16_t x163 = 6U;
	uint8_t x164 = UINT8_MAX;

    t40 = (x161&((x162^x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 25236140781797LL;
	static int64_t x166 = INT64_MAX;
	uint8_t x168 = 101U;
	volatile int64_t t41 = -90169LL;

    t41 = (x165&((x166^x167)!=x168));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 75173692LL;
	volatile int64_t t42 = 181207407176LL;

    t42 = (x169&((x170^x171)!=x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = 0;
	int32_t x174 = -196;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = 14471U;
	volatile int32_t t43 = 287130;

    t43 = (x173&((x174^x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int32_t x178 = 15623218;
	volatile int16_t x179 = INT16_MIN;
	int32_t t44 = 7682934;

    t44 = (x177&((x178^x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	static int32_t t45 = 39;

    t45 = (x181&((x182^x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 2;
	int32_t x186 = INT32_MAX;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 1;

    t46 = (x185&((x186^x187)!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = -1LL;
	volatile uint8_t x190 = UINT8_MAX;
	static uint64_t x191 = UINT64_MAX;
	int8_t x192 = -1;

    t47 = (x189&((x190^x191)!=x192));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 758U;
	static int64_t x194 = -116862036733733676LL;
	volatile int32_t x196 = INT32_MIN;

    t48 = (x193&((x194^x195)!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = UINT8_MAX;
	volatile int16_t x198 = 6;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -232096093;

    t49 = (x197&((x198^x199)!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MAX;
	static int8_t x203 = -1;
	uint64_t x204 = 50086320LLU;
	int32_t t50 = -31088160;

    t50 = (x201&((x202^x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 35U;
	int64_t x207 = INT64_MIN;
	static int8_t x208 = -1;
	volatile int32_t t51 = 491;

    t51 = (x205&((x206^x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	static int32_t x212 = INT32_MAX;
	int32_t t52 = -30;

    t52 = (x209&((x210^x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = 3;
	int32_t x214 = -1;
	uint8_t x215 = 0U;
	int8_t x216 = -1;
	volatile int32_t t53 = 5472235;

    t53 = (x213&((x214^x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -9;
	static int8_t x219 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;
	uint32_t t54 = 188560637U;

    t54 = (x217&((x218^x219)!=x220));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = 6750U;
	static int16_t x223 = 126;
	int64_t x224 = -12022931054780LL;

    t55 = (x221&((x222^x223)!=x224));

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x226 = -412LL;
	volatile uint8_t x227 = 25U;
	uint32_t x228 = 15006015U;

    t56 = (x225&((x226^x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = INT32_MAX;
	static int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t57 = -46132301;

    t57 = (x229&((x230^x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x234 = 67066110U;
	static volatile int64_t x235 = INT64_MIN;
	int32_t x236 = -8458846;
	uint32_t t58 = 128789U;

    t58 = (x233&((x234^x235)!=x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	static volatile int16_t x238 = INT16_MAX;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int16_t x240 = -2;
	static int32_t t59 = -56;

    t59 = (x237&((x238^x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	static uint8_t x243 = 1U;
	int64_t x244 = INT64_MIN;
	uint64_t t60 = 64866677383LLU;

    t60 = (x241&((x242^x243)!=x244));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MAX;
	uint64_t x247 = UINT64_MAX;
	static uint64_t x248 = 15524LLU;
	volatile int32_t t61 = -159;

    t61 = (x245&((x246^x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	uint8_t x250 = UINT8_MAX;
	volatile int32_t t62 = -3;

    t62 = (x249&((x250^x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int64_t x256 = 783560422869LL;
	volatile int64_t t63 = -5354LL;

    t63 = (x253&((x254^x255)!=x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	uint16_t x260 = 3U;
	volatile int32_t t64 = 1834;

    t64 = (x257&((x258^x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int16_t x262 = -1;
	int16_t x263 = -1;
	uint64_t x264 = 671LLU;
	static int64_t t65 = 12320007021627LL;

    t65 = (x261&((x262^x263)!=x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	static uint32_t x266 = UINT32_MAX;
	static int16_t x267 = INT16_MAX;
	volatile int64_t t66 = 29943156924707213LL;

    t66 = (x265&((x266^x267)!=x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	int16_t x270 = 44;
	uint16_t x271 = 145U;
	int8_t x272 = INT8_MIN;

    t67 = (x269&((x270^x271)!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 1U;
	int64_t x274 = INT64_MAX;
	static int64_t x275 = 28793252222962LL;
	int8_t x276 = -1;
	int32_t t68 = 2;

    t68 = (x273&((x274^x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -1;
	uint8_t x279 = 29U;
	static volatile int32_t x280 = 1;
	volatile int32_t t69 = 36303;

    t69 = (x277&((x278^x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -1LL;
	uint8_t x282 = UINT8_MAX;
	volatile int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	int64_t t70 = -740641211844LL;

    t70 = (x281&((x282^x283)!=x284));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x287 = UINT32_MAX;
	int64_t t71 = -1650567037634833124LL;

    t71 = (x285&((x286^x287)!=x288));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	volatile uint16_t x290 = 1790U;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 60U;

    t72 = (x289&((x290^x291)!=x292));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	uint32_t x296 = 0U;
	int32_t t73 = -334;

    t73 = (x293&((x294^x295)!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 1U;
	int32_t t74 = 3553285;

    t74 = (x297&((x298^x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	static int64_t x303 = INT64_MAX;
	volatile int64_t x304 = -1LL;
	volatile int64_t t75 = 18387634014LL;

    t75 = (x301&((x302^x303)!=x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = INT16_MAX;
	int64_t x306 = 550432LL;
	uint64_t x307 = 61LLU;
	int8_t x308 = INT8_MIN;
	int32_t t76 = 8;

    t76 = (x305&((x306^x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = 11280;
	static volatile uint32_t x310 = UINT32_MAX;
	int16_t x311 = 1;
	uint64_t x312 = 5766215328550LLU;

    t77 = (x309&((x310^x311)!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 248672428U;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = INT8_MIN;
	volatile uint32_t t78 = 15U;

    t78 = (x313&((x314^x315)!=x316));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 32456950612256LLU;
	uint64_t x318 = 870LLU;
	int8_t x320 = -1;
	volatile uint64_t t79 = 13750LLU;

    t79 = (x317&((x318^x319)!=x320));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = 87U;
	static uint64_t x324 = 393559077139502LLU;

    t80 = (x321&((x322^x323)!=x324));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 740U;
	volatile int64_t x326 = -44124227747951LL;
	volatile uint64_t x327 = 34LLU;
	int64_t x328 = INT64_MIN;

    t81 = (x325&((x326^x327)!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	uint64_t x331 = 238LLU;
	uint32_t x332 = 7712744U;
	volatile int32_t t82 = -526843485;

    t82 = (x329&((x330^x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -916;
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -6;

    t83 = (x333&((x334^x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x337 = 23LLU;
	uint64_t x338 = 14LLU;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 6U;

    t84 = (x337&((x338^x339)!=x340));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MAX;
	static uint16_t x342 = UINT16_MAX;
	int16_t x343 = -1;
	uint8_t x344 = 0U;
	volatile int32_t t85 = 294;

    t85 = (x341&((x342^x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 62U;
	uint64_t x346 = UINT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;

    t86 = (x345&((x346^x347)!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x350 = 140LLU;
	int8_t x352 = -1;
	int32_t t87 = 0;

    t87 = (x349&((x350^x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int32_t x355 = -32393133;
	uint8_t x356 = 6U;

    t88 = (x353&((x354^x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MIN;
	volatile int16_t x358 = 0;
	int32_t x359 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -99769;

    t89 = (x357&((x358^x359)!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	int32_t x362 = -1319234;
	volatile int8_t x363 = INT8_MIN;
	volatile int64_t t90 = 24951420LL;

    t90 = (x361&((x362^x363)!=x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = -6;
	int64_t x367 = INT64_MAX;
	uint16_t x368 = 2889U;

    t91 = (x365&((x366^x367)!=x368));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x370 = -103618202143823LL;
	int64_t x371 = 37579143436LL;
	uint32_t x372 = 45764401U;
	int32_t t92 = 328;

    t92 = (x369&((x370^x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 1980U;
	volatile int16_t x374 = -1;
	uint16_t x375 = 289U;
	volatile int8_t x376 = 1;
	volatile uint32_t t93 = 0U;

    t93 = (x373&((x374^x375)!=x376));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x377 = 130U;
	static int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;

    t94 = (x377&((x378^x379)!=x380));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 366U;
	int16_t x382 = -1;
	static int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MAX;

    t95 = (x381&((x382^x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	volatile uint16_t x387 = 835U;
	int32_t x388 = INT32_MAX;
	volatile int64_t t96 = -753120178LL;

    t96 = (x385&((x386^x387)!=x388));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x392 = 3016LL;
	volatile int32_t t97 = -210998;

    t97 = (x389&((x390^x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = 0;

    t98 = (x393&((x394^x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	static volatile int8_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	int64_t t99 = 3101192375939LL;

    t99 = (x397&((x398^x399)!=x400));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	static volatile int32_t x402 = INT32_MIN;
	uint32_t x403 = 52U;
	int64_t x404 = INT64_MIN;
	volatile int64_t t100 = 35430430LL;

    t100 = (x401&((x402^x403)!=x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -3;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = INT16_MIN;
	int32_t t101 = 120414;

    t101 = (x405&((x406^x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = UINT64_MAX;
	int16_t x410 = -1;
	int32_t x411 = INT32_MAX;
	int16_t x412 = 1687;
	uint64_t t102 = 367LLU;

    t102 = (x409&((x410^x411)!=x412));

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = -1LL;
	static int16_t x415 = 9;
	int16_t x416 = -1;
	volatile int32_t t103 = 29090689;

    t103 = (x413&((x414^x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int64_t x418 = INT64_MAX;
	uint8_t x419 = 92U;
	uint64_t x420 = 86649432599LLU;
	static int32_t t104 = -254;

    t104 = (x417&((x418^x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 3;
	int64_t x422 = INT64_MIN;
	int8_t x423 = 0;
	int64_t x424 = 590544060LL;
	static int32_t t105 = -675721749;

    t105 = (x421&((x422^x423)!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = -1857;
	volatile int8_t x428 = INT8_MAX;
	volatile int32_t t106 = -97914861;

    t106 = (x425&((x426^x427)!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 66363U;
	volatile int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MIN;
	uint32_t t107 = 2U;

    t107 = (x429&((x430^x431)!=x432));

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	static uint64_t x434 = 1748748288626LLU;
	int64_t x435 = -166LL;
	volatile uint64_t x436 = UINT64_MAX;
	int64_t t108 = 261232313435LL;

    t108 = (x433&((x434^x435)!=x436));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 1592034346U;
	int8_t x438 = INT8_MAX;
	int64_t x439 = INT64_MIN;

    t109 = (x437&((x438^x439)!=x440));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -1214;
	uint32_t x442 = UINT32_MAX;
	static int32_t x443 = -1;
	volatile uint32_t x444 = 1200U;
	int32_t t110 = 10982;

    t110 = (x441&((x442^x443)!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	static int64_t x446 = -1LL;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = 57;

    t111 = (x445&((x446^x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x451 = -1;

    t112 = (x449&((x450^x451)!=x452));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = INT8_MIN;
	static int8_t x454 = INT8_MIN;
	int8_t x455 = -1;
	volatile int32_t t113 = 4;

    t113 = (x453&((x454^x455)!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 6416U;
	int64_t x458 = 9LL;
	int32_t x459 = 26455745;
	uint32_t x460 = 1U;
	volatile uint32_t t114 = 44817548U;

    t114 = (x457&((x458^x459)!=x460));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 60U;
	volatile uint8_t x462 = UINT8_MAX;
	int16_t x463 = 0;
	uint8_t x464 = 121U;

    t115 = (x461&((x462^x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = 14LLU;
	volatile int16_t x468 = INT16_MAX;
	volatile int64_t t116 = 3462310089467253LL;

    t116 = (x465&((x466^x467)!=x468));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 11488U;
	int8_t x470 = INT8_MIN;
	static int16_t x471 = -17;
	uint16_t x472 = 33U;
	volatile int32_t t117 = 210426907;

    t117 = (x469&((x470^x471)!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	static uint32_t x474 = 1U;
	uint16_t x475 = UINT16_MAX;
	uint8_t x476 = 59U;
	int32_t t118 = 103;

    t118 = (x473&((x474^x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -1;
	int32_t x478 = 311409;
	static int32_t x480 = 394355;
	static volatile int32_t t119 = 26;

    t119 = (x477&((x478^x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -5769;
	int32_t x482 = INT32_MIN;
	int8_t x484 = -1;
	volatile int32_t t120 = 1;

    t120 = (x481&((x482^x483)!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int64_t x487 = INT64_MIN;
	static int16_t x488 = INT16_MAX;
	static volatile int64_t t121 = 14291730451913196LL;

    t121 = (x485&((x486^x487)!=x488));

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int16_t x490 = INT16_MAX;
	static uint32_t x491 = 2448U;
	int8_t x492 = -1;
	volatile int64_t t122 = 1856114531360LL;

    t122 = (x489&((x490^x491)!=x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	int64_t x495 = INT64_MAX;
	uint16_t x496 = 2U;

    t123 = (x493&((x494^x495)!=x496));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = UINT64_MAX;
	int16_t x498 = INT16_MIN;
	static volatile int16_t x499 = -1;
	volatile uint32_t x500 = 3U;
	volatile uint64_t t124 = 1435LLU;

    t124 = (x497&((x498^x499)!=x500));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x501 = 0U;
	int64_t x503 = 166084114LL;
	uint64_t x504 = 317299LLU;
	volatile int32_t t125 = -2011305;

    t125 = (x501&((x502^x503)!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	volatile uint64_t x506 = 322746199698662LLU;
	volatile int64_t x507 = 2195140836359379863LL;
	static uint64_t x508 = UINT64_MAX;
	volatile int32_t t126 = 16;

    t126 = (x505&((x506^x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 7U;
	static volatile int64_t x510 = -1LL;
	uint16_t x512 = UINT16_MAX;
	volatile int32_t t127 = -649812920;

    t127 = (x509&((x510^x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 15702537206560376LLU;
	uint32_t x514 = 198054U;
	uint64_t t128 = 1087119991427836LLU;

    t128 = (x513&((x514^x515)!=x516));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint32_t x517 = 2284170U;
	int8_t x519 = -1;
	static uint16_t x520 = 236U;
	volatile uint32_t t129 = 419376U;

    t129 = (x517&((x518^x519)!=x520));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x522 = UINT32_MAX;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 0U;
	volatile int32_t t130 = -50064719;

    t130 = (x521&((x522^x523)!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 386177155U;
	int16_t x526 = -1;
	int16_t x527 = -10;
	uint64_t x528 = 64292LLU;
	uint32_t t131 = 7168U;

    t131 = (x525&((x526^x527)!=x528));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = 2;
	int16_t x531 = -1;
	int8_t x532 = INT8_MAX;
	volatile int32_t t132 = 65418075;

    t132 = (x529&((x530^x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 500U;
	int8_t x534 = INT8_MAX;
	int8_t x535 = INT8_MAX;
	int16_t x536 = 1;
	volatile int32_t t133 = 43341;

    t133 = (x533&((x534^x535)!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = INT32_MAX;
	volatile int32_t t134 = 54245;

    t134 = (x537&((x538^x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int8_t x542 = -49;
	int8_t x543 = 28;
	uint16_t x544 = 345U;
	volatile int32_t t135 = 141998255;

    t135 = (x541&((x542^x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x546 = -1281;
	int16_t x547 = 5026;
	uint64_t x548 = 191348953LLU;
	int32_t t136 = -481;

    t136 = (x545&((x546^x547)!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -18;
	int16_t x551 = INT16_MIN;
	int8_t x552 = 1;
	int32_t t137 = -22917;

    t137 = (x549&((x550^x551)!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -13680;
	int32_t t138 = -860353493;

    t138 = (x553&((x554^x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 26772U;
	volatile int8_t x560 = 0;
	uint32_t t139 = 1597U;

    t139 = (x557&((x558^x559)!=x560));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = INT64_MIN;
	static volatile uint64_t x563 = 45492760043344629LLU;
	int32_t t140 = -1;

    t140 = (x561&((x562^x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x565 = UINT8_MAX;
	int16_t x566 = INT16_MIN;
	int64_t x567 = 941662702493381LL;
	int32_t x568 = INT32_MAX;
	int32_t t141 = -395;

    t141 = (x565&((x566^x567)!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = UINT16_MAX;
	static int64_t x572 = -3759426014784431LL;
	static volatile int64_t t142 = 0LL;

    t142 = (x569&((x570^x571)!=x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = UINT8_MAX;
	static int8_t x576 = -1;
	volatile int32_t t143 = -4780950;

    t143 = (x573&((x574^x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	volatile uint16_t x578 = 173U;
	static int8_t x579 = -1;
	int64_t x580 = 67215791081149252LL;

    t144 = (x577&((x578^x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	volatile int64_t x582 = -1LL;
	int32_t x583 = -40884173;
	static int64_t t145 = -562007942919820729LL;

    t145 = (x581&((x582^x583)!=x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MAX;
	static int32_t x587 = 53213;
	static int32_t x588 = -1;
	static volatile int32_t t146 = 1080;

    t146 = (x585&((x586^x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = 5486878170352799805LLU;
	int64_t x591 = INT64_MAX;
	uint8_t x592 = 25U;
	static volatile int32_t t147 = -165646;

    t147 = (x589&((x590^x591)!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = UINT64_MAX;
	int64_t x595 = -1LL;
	int32_t x596 = -54;

    t148 = (x593&((x594^x595)!=x596));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	int16_t x598 = 0;
	int8_t x600 = 0;
	static volatile int32_t t149 = -5304388;

    t149 = (x597&((x598^x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 6406912983920LLU;
	int64_t x603 = INT64_MIN;
	int16_t x604 = -1;
	uint64_t t150 = 4LLU;

    t150 = (x601&((x602^x603)!=x604));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = -18073LL;
	uint32_t x608 = 125063947U;
	volatile int64_t t151 = 57490258101831695LL;

    t151 = (x605&((x606^x607)!=x608));

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -5;
	static int64_t x610 = -1LL;
	static int8_t x612 = INT8_MAX;

    t152 = (x609&((x610^x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MIN;
	uint64_t x615 = 4067LLU;
	int8_t x616 = -2;
	volatile int32_t t153 = -426;

    t153 = (x613&((x614^x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MIN;
	int8_t x620 = -3;

    t154 = (x617&((x618^x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int8_t x622 = INT8_MIN;
	static int32_t x624 = 91;
	volatile int32_t t155 = 1450615;

    t155 = (x621&((x622^x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	static volatile uint8_t x627 = 122U;
	static uint16_t x628 = UINT16_MAX;
	int32_t t156 = 11;

    t156 = (x625&((x626^x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	uint64_t x632 = 7LLU;

    t157 = (x629&((x630^x631)!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 55;
	volatile int16_t x634 = INT16_MIN;
	int32_t t158 = 144272235;

    t158 = (x633&((x634^x635)!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	volatile int16_t x638 = -19;
	uint64_t x639 = 274301297645712LLU;
	uint64_t x640 = 21LLU;

    t159 = (x637&((x638^x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 3U;
	static int16_t x644 = -1;
	volatile uint32_t t160 = 409U;

    t160 = (x641&((x642^x643)!=x644));

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x647 = 0U;
	int16_t x648 = -26;

    t161 = (x645&((x646^x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 45U;
	uint16_t x651 = UINT16_MAX;
	static int64_t x652 = INT64_MIN;

    t162 = (x649&((x650^x651)!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x653 = 14U;
	volatile int16_t x654 = INT16_MIN;
	uint32_t x655 = 1656888198U;
	volatile int32_t t163 = 56931943;

    t163 = (x653&((x654^x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = UINT8_MAX;
	volatile int8_t x658 = -1;
	int8_t x659 = 3;
	int64_t x660 = 1LL;
	volatile int32_t t164 = 160539;

    t164 = (x657&((x658^x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 353341583550LL;
	uint8_t x664 = 122U;

    t165 = (x661&((x662^x663)!=x664));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = -981519574;
	uint8_t x667 = 0U;
	volatile int8_t x668 = -1;
	volatile int32_t t166 = -844818;

    t166 = (x665&((x666^x667)!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MAX;
	int32_t t167 = 1708600;

    t167 = (x669&((x670^x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -1;
	uint64_t x675 = 190762940LLU;
	volatile int32_t t168 = 16;

    t168 = (x673&((x674^x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 315914892U;
	static int64_t x678 = INT64_MAX;
	uint64_t x679 = 35480308906LLU;
	uint8_t x680 = UINT8_MAX;
	uint32_t t169 = 113U;

    t169 = (x677&((x678^x679)!=x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MIN;
	uint16_t x682 = UINT16_MAX;
	int64_t x683 = INT64_MIN;

    t170 = (x681&((x682^x683)!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x686 = INT64_MIN;
	uint64_t x687 = 397735964LLU;
	uint8_t x688 = UINT8_MAX;
	volatile int64_t t171 = 1359419187743822091LL;

    t171 = (x685&((x686^x687)!=x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = 6475541286624LL;
	int8_t x690 = -1;
	volatile int64_t t172 = 4LL;

    t172 = (x689&((x690^x691)!=x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = -9259923302025LL;
	int8_t x695 = INT8_MAX;
	int8_t x696 = 1;
	volatile int32_t t173 = 6308;

    t173 = (x693&((x694^x695)!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x698 = INT8_MIN;
	static volatile uint64_t x700 = UINT64_MAX;
	volatile int32_t t174 = -4;

    t174 = (x697&((x698^x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int8_t x704 = 14;
	volatile int64_t t175 = -855LL;

    t175 = (x701&((x702^x703)!=x704));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	uint8_t x706 = 21U;
	static int32_t t176 = -600334;

    t176 = (x705&((x706^x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x711 = -1;
	static int8_t x712 = -1;
	volatile int32_t t177 = -29;

    t177 = (x709&((x710^x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	static int32_t x714 = 0;
	volatile uint8_t x716 = 100U;
	int32_t t178 = 4190472;

    t178 = (x713&((x714^x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MAX;
	volatile uint32_t x719 = UINT32_MAX;
	int8_t x720 = -1;
	volatile int64_t t179 = 5462261283LL;

    t179 = (x717&((x718^x719)!=x720));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 108U;
	int32_t x722 = -1;
	static int8_t x723 = INT8_MIN;
	int64_t x724 = INT64_MIN;
	int32_t t180 = -16445209;

    t180 = (x721&((x722^x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = -1;
	int16_t x727 = INT16_MIN;
	volatile uint64_t x728 = 376683LLU;
	static int32_t t181 = -18439;

    t181 = (x725&((x726^x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x731 = INT64_MIN;
	static volatile uint64_t t182 = 132795310656391161LLU;

    t182 = (x729&((x730^x731)!=x732));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x733 = 844U;
	int8_t x735 = -1;

    t183 = (x733&((x734^x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -247;
	uint32_t x738 = UINT32_MAX;
	int32_t x739 = INT32_MIN;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = 128;

    t184 = (x737&((x738^x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -2244665843412166LL;
	int32_t x742 = INT32_MAX;
	uint64_t x743 = 3925345851335417LLU;
	volatile int16_t x744 = INT16_MIN;
	volatile int64_t t185 = -23526240LL;

    t185 = (x741&((x742^x743)!=x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	int8_t x746 = INT8_MIN;
	volatile int16_t x747 = 372;
	uint32_t x748 = 7667U;
	volatile int32_t t186 = -58328158;

    t186 = (x745&((x746^x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 51U;
	int64_t x751 = INT64_MIN;
	volatile uint32_t x752 = 284U;
	static volatile int32_t t187 = 2369;

    t187 = (x749&((x750^x751)!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	volatile int8_t x754 = INT8_MIN;
	int64_t x756 = -1LL;
	volatile int32_t t188 = -130176798;

    t188 = (x753&((x754^x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 14U;
	static int64_t x758 = INT64_MAX;
	int64_t x759 = INT64_MIN;
	int64_t x760 = INT64_MAX;
	static volatile int32_t t189 = 0;

    t189 = (x757&((x758^x759)!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 49U;
	uint8_t x762 = 7U;
	static int32_t x764 = INT32_MIN;

    t190 = (x761&((x762^x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	uint16_t x766 = 111U;
	static uint64_t x767 = 581LLU;
	int64_t x768 = INT64_MAX;
	static uint64_t t191 = 122946LLU;

    t191 = (x765&((x766^x767)!=x768));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = INT32_MAX;
	int64_t x771 = -1LL;
	static volatile int32_t t192 = -3385802;

    t192 = (x769&((x770^x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = 10533;
	int16_t x776 = 771;

    t193 = (x773&((x774^x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	volatile int16_t x780 = -5189;
	volatile int32_t t194 = -1820259;

    t194 = (x777&((x778^x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	static int32_t t195 = -4;

    t195 = (x781&((x782^x783)!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	uint16_t x786 = 24U;
	int32_t x787 = -1;
	int32_t x788 = 39;
	volatile int32_t t196 = 2281;

    t196 = (x785&((x786^x787)!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MAX;
	int16_t x790 = INT16_MIN;
	uint16_t x791 = 121U;
	volatile int16_t x792 = INT16_MAX;
	volatile int32_t t197 = -1730;

    t197 = (x789&((x790^x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MIN;
	int16_t x794 = -1;
	uint8_t x795 = UINT8_MAX;
	int16_t x796 = -833;

    t198 = (x793&((x794^x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = -54;
	static uint64_t x799 = 41854724LLU;

    t199 = (x797&((x798^x799)!=x800));

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

