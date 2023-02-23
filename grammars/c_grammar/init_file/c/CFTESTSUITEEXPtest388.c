
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

static uint8_t x6 = 120U;
int32_t t0 = 1;
int32_t x14 = -1;
volatile int8_t x18 = INT8_MIN;
int8_t x21 = 1;
int8_t x25 = INT8_MAX;
int16_t x35 = -12;
int8_t x37 = INT8_MAX;
volatile uint64_t x38 = UINT64_MAX;
int8_t x39 = INT8_MAX;
int16_t x40 = -9;
volatile int16_t x46 = 3;
int32_t t12 = 25;
int32_t x61 = -1;
int8_t x63 = INT8_MIN;
int8_t x68 = -33;
uint16_t x69 = 13U;
uint16_t x70 = UINT16_MAX;
uint32_t x74 = 201499U;
uint16_t x75 = UINT16_MAX;
static int32_t t17 = 17842;
static int16_t x87 = 1;
int32_t t19 = -76640051;
static uint32_t x93 = 127351U;
int64_t x100 = INT64_MIN;
int8_t x101 = INT8_MIN;
static int8_t x103 = -1;
uint8_t x106 = 80U;
int64_t x112 = INT64_MIN;
static uint64_t x116 = 0LLU;
uint16_t x117 = 26246U;
static int32_t x118 = -1;
static int32_t x122 = 490989206;
uint32_t x136 = 107U;
static int32_t x145 = INT32_MIN;
static int8_t x148 = INT8_MIN;
int8_t x149 = 4;
uint64_t x151 = 98455597219LLU;
int16_t x155 = INT16_MIN;
volatile int32_t t36 = -96827780;
static volatile int16_t x159 = INT16_MIN;
int16_t x160 = -5;
volatile int32_t t38 = 1;
int32_t x165 = -1;
int64_t x168 = INT64_MAX;
static int32_t t41 = -3401277;
uint64_t x184 = 93442501244123LLU;
uint64_t x185 = UINT64_MAX;
static uint16_t x187 = 1U;
volatile int32_t x188 = 192;
int16_t x189 = -1;
static int16_t x191 = INT16_MIN;
static int32_t x198 = INT32_MIN;
static int16_t x199 = INT16_MIN;
static volatile int32_t t46 = -7;
int16_t x206 = -3;
static uint16_t x211 = UINT16_MAX;
static uint32_t x212 = UINT32_MAX;
int32_t t51 = 1069152918;
uint32_t x227 = 2015U;
int8_t x230 = INT8_MIN;
static volatile int64_t x232 = -3LL;
static uint16_t x235 = UINT16_MAX;
static int16_t x236 = INT16_MAX;
volatile int32_t x243 = INT32_MIN;
volatile int32_t t57 = 35;
int64_t x256 = INT64_MIN;
int64_t x257 = -1LL;
int8_t x259 = -1;
static int32_t x263 = 8475;
int32_t x269 = INT32_MIN;
uint64_t x278 = UINT64_MAX;
volatile int32_t t62 = -2843;
static int32_t x284 = -51;
static int64_t x288 = -1LL;
uint32_t x289 = 78604U;
volatile int32_t x290 = 124733585;
int16_t x295 = 1;
int64_t x298 = -1LL;
static int64_t x302 = INT64_MIN;
int16_t x303 = -1;
int64_t x312 = 17426LL;
int8_t x313 = 1;
static int64_t x318 = -1LL;
uint16_t x320 = 899U;
static uint32_t x324 = UINT32_MAX;
static int64_t x329 = 18748432813675990LL;
int64_t x330 = INT64_MIN;
int64_t x331 = -8605978664LL;
int32_t t74 = 183081518;
volatile int16_t x333 = -1;
int8_t x339 = INT8_MIN;
int32_t t77 = -3768;
uint64_t x346 = 4LLU;
int64_t x353 = INT64_MAX;
uint64_t x356 = 671649787258LLU;
int8_t x368 = INT8_MIN;
int32_t x376 = -10;
volatile int64_t x378 = INT64_MIN;
uint16_t x384 = 4072U;
static volatile int32_t t86 = -56242;
uint8_t x392 = UINT8_MAX;
int8_t x398 = -1;
int32_t x405 = INT32_MIN;
int16_t x408 = INT16_MIN;
int16_t x417 = -1;
volatile int32_t t93 = -4;
int64_t x421 = 193516018489390LL;
volatile int32_t t94 = -14427602;
static uint16_t x425 = 1U;
uint8_t x430 = 2U;
int32_t x433 = INT32_MIN;
int16_t x444 = 2724;
uint8_t x449 = 3U;
volatile int32_t t100 = 31712398;
int64_t x454 = INT64_MAX;
uint16_t x456 = 153U;
int32_t x457 = INT32_MIN;
volatile int64_t x459 = -1LL;
static uint16_t x465 = 1U;
int32_t x469 = INT32_MIN;
int32_t x481 = -437;
volatile int8_t x488 = -1;
int64_t x490 = 0LL;
static int64_t x493 = INT64_MIN;
uint32_t x494 = 6000416U;
uint16_t x499 = 33U;
static int64_t x503 = INT64_MIN;
volatile uint64_t x504 = 15306954984048LLU;
int32_t t113 = -83274248;
int32_t x513 = -1;
volatile int32_t t114 = 282925;
volatile int8_t x518 = 7;
static int32_t t115 = 2;
uint16_t x526 = UINT16_MAX;
int16_t x541 = INT16_MAX;
uint16_t x542 = 18004U;
int8_t x543 = -1;
uint32_t x548 = UINT32_MAX;
int32_t t122 = 222;
int32_t x551 = -1;
uint16_t x553 = UINT16_MAX;
volatile uint16_t x557 = 5U;
volatile int32_t t129 = 1;
uint16_t x585 = UINT16_MAX;
int16_t x590 = 1;
static int8_t x594 = INT8_MAX;
int32_t x595 = -1;
int64_t x599 = -1LL;
int16_t x600 = -5873;
static int8_t x603 = INT8_MAX;
volatile int64_t x604 = INT64_MIN;
int16_t x605 = -2413;
static int64_t x606 = 3767LL;
uint64_t x613 = 6LLU;
int16_t x615 = INT16_MIN;
int64_t x622 = INT64_MIN;
int32_t x623 = -15;
volatile int64_t x629 = -1174462LL;
uint32_t x635 = UINT32_MAX;
int8_t x639 = -2;
static uint8_t x645 = 0U;
int32_t t147 = 2230108;
uint16_t x672 = 2439U;
volatile uint16_t x686 = 174U;
volatile int32_t t152 = -1544;
int64_t x697 = INT64_MAX;
static uint64_t x700 = UINT64_MAX;
volatile int32_t t155 = -52;
static int32_t x705 = INT32_MIN;
uint64_t x708 = 225LLU;
int32_t t159 = 378569;
int32_t x719 = INT32_MIN;
static int16_t x720 = -1;
uint16_t x728 = 475U;
int16_t x731 = INT16_MIN;
uint8_t x737 = 108U;
static int16_t x739 = INT16_MAX;
uint64_t x740 = UINT64_MAX;
int16_t x750 = 0;
static volatile int32_t t168 = 48613608;
static uint64_t x755 = 231994LLU;
static volatile int32_t t169 = 19862154;
int32_t t171 = -323554;
int64_t x767 = -60581037LL;
volatile uint16_t x773 = UINT16_MAX;
static int32_t t174 = -12063385;
int16_t x780 = INT16_MAX;
static volatile int32_t t176 = 225617;
volatile int16_t x785 = -1;
int32_t x788 = INT32_MAX;
volatile uint16_t x790 = 27U;
int64_t x793 = -207726724889817907LL;
int32_t x794 = INT32_MAX;
int8_t x808 = -1;
uint32_t x820 = UINT32_MAX;
volatile int32_t t185 = -16107;
int32_t x821 = INT32_MIN;
int32_t x822 = INT32_MIN;
volatile int16_t x824 = INT16_MIN;
volatile int32_t t186 = -210;
int8_t x825 = -1;
int32_t x828 = -458;
static int16_t x831 = -1;
int8_t x839 = INT8_MIN;
int32_t t190 = -12;
static volatile int64_t x841 = 14780208004885LL;
volatile int32_t t191 = -43;
int32_t x847 = 26159;
int64_t x850 = INT64_MIN;
int8_t x858 = INT8_MAX;
int8_t x859 = INT8_MIN;
uint32_t x864 = UINT32_MAX;
static int32_t t195 = -19;
volatile int64_t x866 = 1320498LL;
int8_t x867 = 5;
uint64_t x868 = 6262112510LLU;
int32_t x873 = INT32_MIN;
int16_t x875 = -10592;
int32_t t197 = -84992;
static uint8_t x879 = 31U;
volatile int32_t t198 = -2471;
int8_t x884 = INT8_MIN;


void f0(void) {
    	int16_t x5 = -1;
	static volatile int16_t x7 = -33;
	uint8_t x8 = 9U;

    t0 = (x5<=((x6-x7)^x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 2U;
	int16_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = 12U;
	volatile int32_t t1 = 393;

    t1 = (x9<=((x10-x11)^x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	uint16_t x15 = 1U;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t2 = 31930884;

    t2 = (x13<=((x14-x15)^x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = INT8_MIN;
	uint64_t x19 = 5914770227490LLU;
	volatile int8_t x20 = INT8_MIN;
	int32_t t3 = -1849;

    t3 = (x17<=((x18-x19)^x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = 1;
	static int32_t x23 = INT32_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t4 = -80;

    t4 = (x21<=((x22-x23)^x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = 483U;
	int8_t x27 = -1;
	volatile int64_t x28 = -1LL;
	volatile int32_t t5 = -56;

    t5 = (x25<=((x26-x27)^x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1095;
	static volatile int8_t x30 = INT8_MAX;
	volatile uint16_t x31 = 7336U;
	volatile uint16_t x32 = 8153U;
	int32_t t6 = 0;

    t6 = (x29<=((x30-x31)^x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	uint8_t x34 = 78U;
	volatile int16_t x36 = INT16_MIN;
	static int32_t t7 = 19656223;

    t7 = (x33<=((x34-x35)^x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t t8 = -1056561865;

    t8 = (x37<=((x38-x39)^x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = INT8_MIN;
	static uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 20750U;
	int32_t x44 = -1;
	volatile int32_t t9 = 1511;

    t9 = (x41<=((x42-x43)^x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	uint16_t x47 = 9U;
	uint64_t x48 = 131572255LLU;
	int32_t t10 = -155860448;

    t10 = (x45<=((x46-x47)^x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	static int32_t x50 = -90;
	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -12823;

    t11 = (x49<=((x50-x51)^x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int32_t x56 = 1388;

    t12 = (x53<=((x54-x55)^x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	static int8_t x59 = -1;
	static int8_t x60 = INT8_MIN;
	static volatile int32_t t13 = -1;

    t13 = (x57<=((x58-x59)^x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = -1;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 0;

    t14 = (x61<=((x62-x63)^x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = INT8_MAX;
	uint16_t x66 = 1U;
	volatile uint32_t x67 = 3843U;
	volatile int32_t t15 = 20;

    t15 = (x65<=((x66-x67)^x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x71 = 18U;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -147350;

    t16 = (x69<=((x70-x71)^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 14310U;
	uint64_t x76 = UINT64_MAX;

    t17 = (x73<=((x74-x75)^x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = -1;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = -439853905;

    t18 = (x77<=((x78-x79)^x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 1092;
	int8_t x86 = INT8_MIN;
	uint32_t x88 = 37U;

    t19 = (x85<=((x86-x87)^x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int16_t x91 = 120;
	int8_t x92 = -1;
	int32_t t20 = 46849;

    t20 = (x89<=((x90-x91)^x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x94 = -4179801818LL;
	int16_t x95 = -1;
	uint16_t x96 = 308U;
	volatile int32_t t21 = 15024;

    t21 = (x93<=((x94-x95)^x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 733685816263504LLU;
	int32_t x98 = -1;
	volatile int32_t x99 = INT32_MIN;
	volatile int32_t t22 = 39670;

    t22 = (x97<=((x98-x99)^x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x102 = 5U;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 8;

    t23 = (x101<=((x102-x103)^x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x107 = INT8_MIN;
	volatile int16_t x108 = -2;
	volatile int32_t t24 = 2;

    t24 = (x105<=((x106-x107)^x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	static int64_t x111 = INT64_MIN;
	static int32_t t25 = -1171;

    t25 = (x109<=((x110-x111)^x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x113 = -1LL;
	uint64_t x114 = 130346740LLU;
	static int32_t x115 = INT32_MIN;
	static int32_t t26 = 228818362;

    t26 = (x113<=((x114-x115)^x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x119 = 1;
	volatile int8_t x120 = 55;
	int32_t t27 = 902;

    t27 = (x117<=((x118-x119)^x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = UINT8_MAX;
	static int32_t x123 = -1;
	int32_t x124 = -2044056;
	volatile int32_t t28 = -1;

    t28 = (x121<=((x122-x123)^x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = 0;
	static int8_t x128 = -1;
	volatile int32_t t29 = -18;

    t29 = (x125<=((x126-x127)^x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	static volatile int32_t x131 = 1;
	uint32_t x132 = UINT32_MAX;
	int32_t t30 = 1;

    t30 = (x129<=((x130-x131)^x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 83U;
	uint16_t x134 = 3U;
	uint32_t x135 = 156417U;
	volatile int32_t t31 = -50552;

    t31 = (x133<=((x134-x135)^x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = INT32_MIN;
	int64_t x138 = 140677993062137093LL;
	int32_t x139 = INT32_MAX;
	int32_t x140 = INT32_MIN;
	volatile int32_t t32 = -7;

    t32 = (x137<=((x138-x139)^x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MAX;
	int32_t x142 = INT32_MAX;
	int64_t x143 = 219892135LL;
	volatile int16_t x144 = INT16_MIN;
	static volatile int32_t t33 = 0;

    t33 = (x141<=((x142-x143)^x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x146 = 6U;
	int64_t x147 = -94991181346463LL;
	volatile int32_t t34 = 660153;

    t34 = (x145<=((x146-x147)^x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x150 = INT16_MIN;
	volatile int32_t x152 = -14;
	volatile int32_t t35 = -20561993;

    t35 = (x149<=((x150-x151)^x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -1LL;
	static int64_t x154 = -1LL;
	uint32_t x156 = 203130U;

    t36 = (x153<=((x154-x155)^x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = 13U;
	static int64_t x158 = INT64_MIN;
	volatile int32_t t37 = -9;

    t37 = (x157<=((x158-x159)^x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x161 = 10620;
	volatile uint32_t x162 = 491U;
	static volatile uint64_t x163 = 5520629812057561LLU;
	static volatile int8_t x164 = INT8_MIN;

    t38 = (x161<=((x162-x163)^x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x166 = 1410U;
	int32_t x167 = 636606820;
	int32_t t39 = 146;

    t39 = (x165<=((x166-x167)^x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x169 = UINT64_MAX;
	static int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -272326;
	int32_t t40 = -168;

    t40 = (x169<=((x170-x171)^x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint32_t x173 = 32269008U;
	static uint16_t x174 = 77U;
	static volatile int8_t x175 = INT8_MAX;
	volatile uint64_t x176 = 369572090975LLU;

    t41 = (x173<=((x174-x175)^x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x177 = -1LL;
	static uint64_t x178 = UINT64_MAX;
	int32_t x179 = 2257;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t42 = -245;

    t42 = (x177<=((x178-x179)^x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = 1;
	static uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t43 = 3218;

    t43 = (x181<=((x182-x183)^x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x186 = -1;
	volatile int32_t t44 = 0;

    t44 = (x185<=((x186-x187)^x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x190 = INT64_MIN;
	uint64_t x192 = 7458235350701LLU;
	int32_t t45 = -27;

    t45 = (x189<=((x190-x191)^x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = -1;
	int32_t x200 = -1;

    t46 = (x197<=((x198-x199)^x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x201 = 0U;
	static volatile uint16_t x202 = 18U;
	volatile uint16_t x203 = 2278U;
	int8_t x204 = -1;
	static volatile int32_t t47 = 117934;

    t47 = (x201<=((x202-x203)^x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -2784;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 1737U;
	volatile int32_t t48 = -3793;

    t48 = (x205<=((x206-x207)^x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	volatile int32_t t49 = 448211;

    t49 = (x209<=((x210-x211)^x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = -6966412LL;
	static int64_t x214 = 7875537548LL;
	uint16_t x215 = 447U;
	volatile int64_t x216 = -1LL;
	volatile int32_t t50 = -6;

    t50 = (x213<=((x214-x215)^x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x221 = 1U;
	uint64_t x222 = 13962623639LLU;
	int16_t x223 = 2;
	uint64_t x224 = UINT64_MAX;

    t51 = (x221<=((x222-x223)^x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = -1LL;
	uint16_t x226 = 2U;
	int64_t x228 = 65199LL;
	static int32_t t52 = 7898092;

    t52 = (x225<=((x226-x227)^x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = 34829344730254LL;
	uint8_t x231 = 117U;
	volatile int32_t t53 = 545407;

    t53 = (x229<=((x230-x231)^x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x233 = 1U;
	static int16_t x234 = INT16_MIN;
	volatile int32_t t54 = 2;

    t54 = (x233<=((x234-x235)^x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -1;
	int32_t x238 = 113077384;
	uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 3U;
	volatile int32_t t55 = -118216;

    t55 = (x237<=((x238-x239)^x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint64_t x242 = 37145201761381784LLU;
	static int32_t x244 = -1;
	int32_t t56 = 3;

    t56 = (x241<=((x242-x243)^x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x249 = INT32_MIN;
	int64_t x250 = -1LL;
	int32_t x251 = 12862393;
	volatile int16_t x252 = -1;

    t57 = (x249<=((x250-x251)^x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x253 = 5U;
	uint16_t x254 = 4U;
	static int64_t x255 = INT64_MAX;
	int32_t t58 = 329316;

    t58 = (x253<=((x254-x255)^x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x258 = INT8_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t59 = -75124;

    t59 = (x257<=((x258-x259)^x260));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x261 = 2;
	int64_t x262 = -1LL;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t60 = -900900962;

    t60 = (x261<=((x262-x263)^x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x270 = INT32_MAX;
	static volatile int64_t x271 = -8LL;
	static uint64_t x272 = 51378496157914LLU;
	static volatile int32_t t61 = 13;

    t61 = (x269<=((x270-x271)^x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = INT32_MIN;
	uint16_t x279 = 1U;
	volatile int8_t x280 = -1;

    t62 = (x277<=((x278-x279)^x280));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	int32_t t63 = -23;

    t63 = (x281<=((x282-x283)^x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	int16_t x287 = 1;
	int32_t t64 = -1;

    t64 = (x285<=((x286-x287)^x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	volatile int32_t t65 = -37915;

    t65 = (x289<=((x290-x291)^x292));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	static int8_t x296 = -11;
	int32_t t66 = 1;

    t66 = (x293<=((x294-x295)^x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x297 = UINT64_MAX;
	static volatile int8_t x299 = 1;
	uint8_t x300 = 47U;
	int32_t t67 = 7;

    t67 = (x297<=((x298-x299)^x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x301 = -60;
	volatile uint32_t x304 = UINT32_MAX;
	static volatile int32_t t68 = 8241;

    t68 = (x301<=((x302-x303)^x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -7390289;
	int32_t t69 = 41879089;

    t69 = (x309<=((x310-x311)^x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x314 = 101U;
	int8_t x315 = -6;
	static int8_t x316 = INT8_MIN;
	int32_t t70 = 8108818;

    t70 = (x313<=((x314-x315)^x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = INT32_MIN;
	static int8_t x319 = INT8_MIN;
	int32_t t71 = -120528339;

    t71 = (x317<=((x318-x319)^x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x321 = 7027U;
	int32_t x322 = -210057324;
	static int64_t x323 = 1398741272798254LL;
	int32_t t72 = -1913;

    t72 = (x321<=((x322-x323)^x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x325 = INT64_MIN;
	static volatile uint64_t x326 = 18028LLU;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t73 = 2215;

    t73 = (x325<=((x326-x327)^x328));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x332 = UINT16_MAX;

    t74 = (x329<=((x330-x331)^x332));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x334 = 2021728921LLU;
	uint8_t x335 = 3U;
	static int64_t x336 = -1LL;
	volatile int32_t t75 = -1;

    t75 = (x333<=((x334-x335)^x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 19U;
	int8_t x340 = INT8_MAX;
	int32_t t76 = 140;

    t76 = (x337<=((x338-x339)^x340));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	static int8_t x343 = -14;
	uint64_t x344 = 6585938975101261LLU;

    t77 = (x341<=((x342-x343)^x344));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x345 = 1U;
	int16_t x347 = -1;
	int8_t x348 = INT8_MAX;
	volatile int32_t t78 = -12489;

    t78 = (x345<=((x346-x347)^x348));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = 50;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t79 = 15;

    t79 = (x349<=((x350-x351)^x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x354 = 18U;
	volatile int64_t x355 = -69238424625560LL;
	int32_t t80 = 293955;

    t80 = (x353<=((x354-x355)^x356));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x361 = 1U;
	uint16_t x362 = 22173U;
	int16_t x363 = -2;
	int64_t x364 = INT64_MIN;
	int32_t t81 = 161780;

    t81 = (x361<=((x362-x363)^x364));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = UINT8_MAX;
	static int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	volatile int32_t t82 = 15;

    t82 = (x365<=((x366-x367)^x368));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x369 = INT16_MIN;
	static int64_t x370 = INT64_MIN;
	int32_t x371 = -1;
	int64_t x372 = 28LL;
	static volatile int32_t t83 = 244364062;

    t83 = (x369<=((x370-x371)^x372));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = -13;
	uint64_t x375 = 11LLU;
	volatile int32_t t84 = 3;

    t84 = (x373<=((x374-x375)^x376));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = INT64_MIN;
	uint8_t x379 = 0U;
	uint32_t x380 = 1372584U;
	int32_t t85 = 2429066;

    t85 = (x377<=((x378-x379)^x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x381 = 1;
	uint8_t x382 = 1U;
	int16_t x383 = INT16_MAX;

    t86 = (x381<=((x382-x383)^x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = 0;
	uint64_t x390 = 8578299864248614249LLU;
	int16_t x391 = -1;
	int32_t t87 = -2;

    t87 = (x389<=((x390-x391)^x392));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x397 = 9U;
	uint64_t x399 = 3LLU;
	uint32_t x400 = 1185U;
	int32_t t88 = -3;

    t88 = (x397<=((x398-x399)^x400));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x401 = -1;
	static int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = -1;
	int32_t t89 = -3651195;

    t89 = (x401<=((x402-x403)^x404));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x406 = 2LL;
	volatile int16_t x407 = INT16_MIN;
	volatile int32_t t90 = 4057637;

    t90 = (x405<=((x406-x407)^x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x409 = 16138;
	int8_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	int8_t x412 = -1;
	int32_t t91 = -2000466;

    t91 = (x409<=((x410-x411)^x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x413 = 8U;
	uint16_t x414 = 116U;
	int16_t x415 = INT16_MAX;
	int32_t x416 = 23;
	volatile int32_t t92 = 7821;

    t92 = (x413<=((x414-x415)^x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	volatile int16_t x420 = -1;

    t93 = (x417<=((x418-x419)^x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x422 = -7904065LL;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;

    t94 = (x421<=((x422-x423)^x424));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x426 = 39;
	static volatile uint32_t x427 = 999482U;
	volatile int32_t x428 = -940133;
	int32_t t95 = -1384025;

    t95 = (x425<=((x426-x427)^x428));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x429 = 14U;
	static volatile int16_t x431 = 44;
	int8_t x432 = INT8_MIN;
	int32_t t96 = -23;

    t96 = (x429<=((x430-x431)^x432));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x434 = -1;
	int64_t x435 = INT64_MIN;
	int8_t x436 = 46;
	int32_t t97 = 1043232;

    t97 = (x433<=((x434-x435)^x436));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x441 = -1;
	int16_t x442 = -739;
	int16_t x443 = 9;
	volatile int32_t t98 = -9;

    t98 = (x441<=((x442-x443)^x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MAX;
	int16_t x447 = -1;
	uint64_t x448 = 9925015140771LLU;
	int32_t t99 = 2808379;

    t99 = (x445<=((x446-x447)^x448));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x450 = 32U;
	int32_t x451 = 16392;
	volatile uint16_t x452 = 6U;

    t100 = (x449<=((x450-x451)^x452));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x453 = -1;
	int16_t x455 = 6315;
	int32_t t101 = 3954701;

    t101 = (x453<=((x454-x455)^x456));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x458 = 2;
	int8_t x460 = -56;
	volatile int32_t t102 = 53341;

    t102 = (x457<=((x458-x459)^x460));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x466 = 516682939LLU;
	static int32_t x467 = INT32_MIN;
	int32_t x468 = -6;
	volatile int32_t t103 = -2;

    t103 = (x465<=((x466-x467)^x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x470 = 253;
	volatile uint8_t x471 = UINT8_MAX;
	volatile uint32_t x472 = UINT32_MAX;
	volatile int32_t t104 = -2704160;

    t104 = (x469<=((x470-x471)^x472));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint16_t x473 = 7U;
	int16_t x474 = 165;
	int32_t x475 = -2;
	int16_t x476 = INT16_MIN;
	volatile int32_t t105 = -176;

    t105 = (x473<=((x474-x475)^x476));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x477 = INT64_MAX;
	static volatile uint8_t x478 = 124U;
	int64_t x479 = -12046776LL;
	int8_t x480 = -26;
	int32_t t106 = 31737;

    t106 = (x477<=((x478-x479)^x480));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x482 = -1;
	int32_t x483 = INT32_MIN;
	uint64_t x484 = 7964404218LLU;
	int32_t t107 = 0;

    t107 = (x481<=((x482-x483)^x484));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x485 = -1LL;
	uint8_t x486 = 107U;
	volatile int8_t x487 = -1;
	int32_t t108 = 1519248;

    t108 = (x485<=((x486-x487)^x488));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x489 = UINT64_MAX;
	int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MIN;
	volatile int32_t t109 = -101079390;

    t109 = (x489<=((x490-x491)^x492));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x495 = INT32_MAX;
	int64_t x496 = -863091422048LL;
	static volatile int32_t t110 = 136;

    t110 = (x493<=((x494-x495)^x496));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x497 = UINT64_MAX;
	uint8_t x498 = 1U;
	volatile int32_t x500 = -2308992;
	int32_t t111 = -16;

    t111 = (x497<=((x498-x499)^x500));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x501 = INT32_MAX;
	static int16_t x502 = -438;
	int32_t t112 = 12;

    t112 = (x501<=((x502-x503)^x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x509 = -1;
	static uint64_t x510 = 1472879529225155119LLU;
	static int16_t x511 = 221;
	int32_t x512 = -28;

    t113 = (x509<=((x510-x511)^x512));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x514 = -201564969;
	uint8_t x515 = 0U;
	int8_t x516 = INT8_MIN;

    t114 = (x513<=((x514-x515)^x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x517 = -16887089859212LL;
	static int16_t x519 = -91;
	int32_t x520 = 25368763;

    t115 = (x517<=((x518-x519)^x520));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = UINT32_MAX;
	uint64_t x522 = 1600181LLU;
	static int32_t x523 = INT32_MIN;
	int32_t x524 = 11121802;
	volatile int32_t t116 = -9898;

    t116 = (x521<=((x522-x523)^x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x525 = -1LL;
	static int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MIN;
	volatile int32_t t117 = 10159;

    t117 = (x525<=((x526-x527)^x528));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x529 = -1;
	uint64_t x530 = 1224125015LLU;
	int64_t x531 = INT64_MAX;
	int16_t x532 = -277;
	volatile int32_t t118 = 99997267;

    t118 = (x529<=((x530-x531)^x532));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x533 = UINT64_MAX;
	static volatile uint16_t x534 = UINT16_MAX;
	static int8_t x535 = -51;
	int32_t x536 = -7344;
	int32_t t119 = 50;

    t119 = (x533<=((x534-x535)^x536));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x537 = INT32_MAX;
	int8_t x538 = -10;
	static volatile int64_t x539 = INT64_MIN;
	volatile int16_t x540 = -1;
	int32_t t120 = 106;

    t120 = (x537<=((x538-x539)^x540));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x544 = INT16_MIN;
	static int32_t t121 = 583816291;

    t121 = (x541<=((x542-x543)^x544));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x545 = INT8_MAX;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = 1524473437U;

    t122 = (x545<=((x546-x547)^x548));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x549 = INT8_MAX;
	int64_t x550 = 21LL;
	uint8_t x552 = UINT8_MAX;
	int32_t t123 = -133395;

    t123 = (x549<=((x550-x551)^x552));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x554 = -31128286;
	int16_t x555 = INT16_MAX;
	uint64_t x556 = 13630875LLU;
	int32_t t124 = 53742247;

    t124 = (x553<=((x554-x555)^x556));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x558 = INT32_MIN;
	static int32_t x559 = INT32_MIN;
	uint64_t x560 = 62LLU;
	int32_t t125 = -704;

    t125 = (x557<=((x558-x559)^x560));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x561 = 1981205LL;
	int32_t x562 = -1;
	volatile uint64_t x563 = UINT64_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t126 = 123487;

    t126 = (x561<=((x562-x563)^x564));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x565 = UINT16_MAX;
	static int16_t x566 = -1;
	int16_t x567 = 71;
	uint8_t x568 = 3U;
	int32_t t127 = -29778397;

    t127 = (x565<=((x566-x567)^x568));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x570 = -484743;
	static volatile uint32_t x571 = UINT32_MAX;
	uint8_t x572 = 6U;
	int32_t t128 = 5166;

    t128 = (x569<=((x570-x571)^x572));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x577 = -536247104532LL;
	int16_t x578 = -6425;
	uint32_t x579 = 5U;
	static int64_t x580 = INT64_MIN;

    t129 = (x577<=((x578-x579)^x580));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x581 = UINT8_MAX;
	int32_t x582 = -1;
	static volatile int8_t x583 = INT8_MIN;
	uint32_t x584 = 1U;
	int32_t t130 = -109307477;

    t130 = (x581<=((x582-x583)^x584));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x586 = INT8_MIN;
	static uint8_t x587 = UINT8_MAX;
	static volatile uint32_t x588 = 2548U;
	volatile int32_t t131 = -5337;

    t131 = (x585<=((x586-x587)^x588));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x589 = INT64_MIN;
	static uint64_t x591 = 3204563277545LLU;
	static int8_t x592 = INT8_MIN;
	int32_t t132 = 0;

    t132 = (x589<=((x590-x591)^x592));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x593 = -1;
	int32_t x596 = -1;
	int32_t t133 = -941566;

    t133 = (x593<=((x594-x595)^x596));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x597 = 61U;
	static uint32_t x598 = UINT32_MAX;
	int32_t t134 = 32873817;

    t134 = (x597<=((x598-x599)^x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x601 = INT16_MAX;
	int8_t x602 = -1;
	volatile int32_t t135 = 2;

    t135 = (x601<=((x602-x603)^x604));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x607 = -666;
	uint64_t x608 = 163666151078837618LLU;
	volatile int32_t t136 = -445;

    t136 = (x605<=((x606-x607)^x608));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x609 = UINT64_MAX;
	static uint8_t x610 = 0U;
	uint16_t x611 = 1975U;
	static int32_t x612 = INT32_MIN;
	volatile int32_t t137 = 1039;

    t137 = (x609<=((x610-x611)^x612));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x614 = INT8_MIN;
	int64_t x616 = 5162451702889LL;
	int32_t t138 = -18710;

    t138 = (x613<=((x614-x615)^x616));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x617 = INT64_MIN;
	int32_t x618 = -1;
	volatile int16_t x619 = -1;
	volatile int32_t x620 = 33130;
	volatile int32_t t139 = -72602338;

    t139 = (x617<=((x618-x619)^x620));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x621 = UINT64_MAX;
	int8_t x624 = -1;
	volatile int32_t t140 = -51373;

    t140 = (x621<=((x622-x623)^x624));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x625 = 365;
	volatile uint8_t x626 = 25U;
	uint64_t x627 = UINT64_MAX;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t141 = -85633;

    t141 = (x625<=((x626-x627)^x628));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x630 = -776456LL;
	volatile int8_t x631 = INT8_MAX;
	volatile uint32_t x632 = 12U;
	volatile int32_t t142 = 24178167;

    t142 = (x629<=((x630-x631)^x632));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = 56700366;
	int32_t x634 = INT32_MIN;
	int32_t x636 = -1;
	static volatile int32_t t143 = 8;

    t143 = (x633<=((x634-x635)^x636));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x637 = -1;
	static volatile int8_t x638 = -6;
	int16_t x640 = -4044;
	volatile int32_t t144 = -1;

    t144 = (x637<=((x638-x639)^x640));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	int16_t x642 = INT16_MAX;
	int8_t x643 = 32;
	uint64_t x644 = UINT64_MAX;
	int32_t t145 = 4;

    t145 = (x641<=((x642-x643)^x644));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x646 = 10;
	int16_t x647 = INT16_MIN;
	uint32_t x648 = 886U;
	int32_t t146 = 219;

    t146 = (x645<=((x646-x647)^x648));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x653 = 221017LL;
	static uint32_t x654 = UINT32_MAX;
	uint64_t x655 = 42805575342399LLU;
	uint32_t x656 = 47376013U;

    t147 = (x653<=((x654-x655)^x656));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x661 = INT64_MIN;
	static volatile int64_t x662 = -1LL;
	uint64_t x663 = 140LLU;
	int32_t x664 = INT32_MAX;
	static int32_t t148 = 103528;

    t148 = (x661<=((x662-x663)^x664));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x665 = -1LL;
	volatile uint32_t x666 = 381024457U;
	static int32_t x667 = 1;
	int32_t x668 = -103;
	volatile int32_t t149 = -7483638;

    t149 = (x665<=((x666-x667)^x668));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = -103;
	static uint32_t x670 = 82U;
	volatile uint64_t x671 = 2LLU;
	volatile int32_t t150 = 3362216;

    t150 = (x669<=((x670-x671)^x672));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x673 = 18U;
	int32_t x674 = 16330750;
	int8_t x675 = -24;
	uint32_t x676 = 1U;
	static volatile int32_t t151 = -2281;

    t151 = (x673<=((x674-x675)^x676));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x685 = 291LLU;
	static uint32_t x687 = 53203U;
	int64_t x688 = -40173LL;

    t152 = (x685<=((x686-x687)^x688));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	int32_t t153 = 2015453;

    t153 = (x689<=((x690-x691)^x692));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x693 = 62591LL;
	int8_t x694 = 37;
	static int64_t x695 = -14LL;
	int16_t x696 = INT16_MAX;
	volatile int32_t t154 = -2;

    t154 = (x693<=((x694-x695)^x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x698 = -1;
	static int64_t x699 = INT64_MIN;

    t155 = (x697<=((x698-x699)^x700));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x701 = UINT32_MAX;
	int32_t x702 = -260820;
	uint16_t x703 = UINT16_MAX;
	uint64_t x704 = 294076540867784517LLU;
	int32_t t156 = 15164857;

    t156 = (x701<=((x702-x703)^x704));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x706 = INT32_MIN;
	uint64_t x707 = 18748556431794474LLU;
	int32_t t157 = -5;

    t157 = (x705<=((x706-x707)^x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x709 = INT16_MIN;
	uint64_t x710 = 771667242249414LLU;
	static int16_t x711 = INT16_MIN;
	volatile int32_t x712 = INT32_MAX;
	int32_t t158 = -8032061;

    t158 = (x709<=((x710-x711)^x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x713 = 232837U;
	int64_t x714 = 7495428LL;
	volatile uint32_t x715 = UINT32_MAX;
	uint16_t x716 = 2901U;

    t159 = (x713<=((x714-x715)^x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x717 = -1;
	int16_t x718 = -2;
	int32_t t160 = -35649;

    t160 = (x717<=((x718-x719)^x720));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x721 = INT32_MAX;
	volatile uint64_t x722 = 397926LLU;
	volatile int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MIN;
	volatile int32_t t161 = 7260;

    t161 = (x721<=((x722-x723)^x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x725 = 1992907645040LLU;
	int8_t x726 = -5;
	int8_t x727 = INT8_MIN;
	volatile int32_t t162 = 669087517;

    t162 = (x725<=((x726-x727)^x728));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x729 = 28355U;
	static int8_t x730 = 0;
	volatile int8_t x732 = INT8_MAX;
	volatile int32_t t163 = 153696035;

    t163 = (x729<=((x730-x731)^x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x733 = UINT32_MAX;
	static int16_t x734 = -1;
	int64_t x735 = 3877253341098542LL;
	volatile uint8_t x736 = 30U;
	int32_t t164 = 6;

    t164 = (x733<=((x734-x735)^x736));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x738 = INT8_MAX;
	volatile int32_t t165 = 883145678;

    t165 = (x737<=((x738-x739)^x740));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x741 = 1590866350915243LL;
	int16_t x742 = INT16_MIN;
	volatile uint8_t x743 = 62U;
	int16_t x744 = INT16_MAX;
	volatile int32_t t166 = -2908250;

    t166 = (x741<=((x742-x743)^x744));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x745 = 0U;
	static int64_t x746 = 1855LL;
	uint8_t x747 = 17U;
	int32_t x748 = INT32_MAX;
	volatile int32_t t167 = -257954;

    t167 = (x745<=((x746-x747)^x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x749 = 10U;
	int32_t x751 = INT32_MAX;
	volatile int64_t x752 = INT64_MAX;

    t168 = (x749<=((x750-x751)^x752));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x753 = INT32_MAX;
	int32_t x754 = -1;
	uint16_t x756 = 625U;

    t169 = (x753<=((x754-x755)^x756));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x757 = 6111375078846LLU;
	int8_t x758 = INT8_MIN;
	static int32_t x759 = 21356;
	int64_t x760 = INT64_MAX;
	volatile int32_t t170 = 118051;

    t170 = (x757<=((x758-x759)^x760));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x761 = INT32_MIN;
	static int16_t x762 = -1;
	static int64_t x763 = INT64_MIN;
	int32_t x764 = INT32_MIN;

    t171 = (x761<=((x762-x763)^x764));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x765 = 48U;
	volatile int16_t x766 = INT16_MAX;
	int32_t x768 = -1;
	volatile int32_t t172 = -7016;

    t172 = (x765<=((x766-x767)^x768));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x769 = -1;
	static volatile int16_t x770 = INT16_MIN;
	int32_t x771 = -2937;
	int8_t x772 = -1;
	int32_t t173 = -799;

    t173 = (x769<=((x770-x771)^x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x774 = -1;
	int8_t x775 = INT8_MAX;
	volatile int64_t x776 = -13237569607448708LL;

    t174 = (x773<=((x774-x775)^x776));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x777 = -1;
	int32_t x778 = INT32_MIN;
	uint64_t x779 = UINT64_MAX;
	volatile int32_t t175 = -53173349;

    t175 = (x777<=((x778-x779)^x780));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x781 = -1;
	volatile int16_t x782 = -1;
	int8_t x783 = INT8_MAX;
	volatile uint16_t x784 = UINT16_MAX;

    t176 = (x781<=((x782-x783)^x784));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x786 = -11934283111LL;
	int32_t x787 = 9455485;
	static volatile int32_t t177 = -2249;

    t177 = (x785<=((x786-x787)^x788));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x789 = 210;
	int16_t x791 = INT16_MIN;
	volatile uint8_t x792 = 63U;
	int32_t t178 = 0;

    t178 = (x789<=((x790-x791)^x792));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x795 = 185325LLU;
	int64_t x796 = 2180083603087242158LL;
	static volatile int32_t t179 = -71940;

    t179 = (x793<=((x794-x795)^x796));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MIN;
	uint8_t x798 = UINT8_MAX;
	int64_t x799 = -5517025288128581LL;
	volatile uint16_t x800 = 15U;
	int32_t t180 = 1559663;

    t180 = (x797<=((x798-x799)^x800));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x801 = 3517U;
	uint64_t x802 = 3469790075LLU;
	static volatile uint8_t x803 = UINT8_MAX;
	int32_t x804 = -1;
	volatile int32_t t181 = 0;

    t181 = (x801<=((x802-x803)^x804));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x805 = 29U;
	uint32_t x806 = 1047618U;
	int32_t x807 = INT32_MIN;
	int32_t t182 = -276;

    t182 = (x805<=((x806-x807)^x808));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x809 = -12;
	int32_t x810 = 663075;
	int32_t x811 = 167875;
	int64_t x812 = INT64_MIN;
	volatile int32_t t183 = -974;

    t183 = (x809<=((x810-x811)^x812));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x813 = 14U;
	int16_t x814 = INT16_MAX;
	int16_t x815 = INT16_MIN;
	static uint32_t x816 = 48125084U;
	volatile int32_t t184 = 31247645;

    t184 = (x813<=((x814-x815)^x816));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x817 = 0;
	static uint8_t x818 = 0U;
	volatile int16_t x819 = INT16_MAX;

    t185 = (x817<=((x818-x819)^x820));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x823 = -1;

    t186 = (x821<=((x822-x823)^x824));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x826 = UINT64_MAX;
	int32_t x827 = 0;
	static volatile int32_t t187 = -51484359;

    t187 = (x825<=((x826-x827)^x828));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x829 = INT64_MIN;
	volatile int8_t x830 = INT8_MAX;
	int8_t x832 = INT8_MIN;
	static volatile int32_t t188 = -890586;

    t188 = (x829<=((x830-x831)^x832));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x833 = INT8_MIN;
	int16_t x834 = INT16_MIN;
	static int8_t x835 = INT8_MIN;
	int16_t x836 = INT16_MAX;
	int32_t t189 = -2136;

    t189 = (x833<=((x834-x835)^x836));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x837 = UINT8_MAX;
	int64_t x838 = -1LL;
	int8_t x840 = INT8_MAX;

    t190 = (x837<=((x838-x839)^x840));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x842 = 1U;
	uint32_t x843 = UINT32_MAX;
	volatile int32_t x844 = 41603722;

    t191 = (x841<=((x842-x843)^x844));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x845 = 13;
	uint32_t x846 = 61U;
	int32_t x848 = INT32_MIN;
	static volatile int32_t t192 = 94491;

    t192 = (x845<=((x846-x847)^x848));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x849 = UINT8_MAX;
	int8_t x851 = 0;
	int8_t x852 = -1;
	volatile int32_t t193 = 1;

    t193 = (x849<=((x850-x851)^x852));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x857 = INT64_MIN;
	int16_t x860 = INT16_MIN;
	int32_t t194 = -7;

    t194 = (x857<=((x858-x859)^x860));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = INT16_MAX;
	static volatile int16_t x862 = -50;
	volatile uint64_t x863 = UINT64_MAX;

    t195 = (x861<=((x862-x863)^x864));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x865 = 8;
	int32_t t196 = 16;

    t196 = (x865<=((x866-x867)^x868));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x874 = 616;
	uint16_t x876 = 3U;

    t197 = (x873<=((x874-x875)^x876));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x877 = -1;
	volatile int32_t x878 = INT32_MAX;
	int32_t x880 = INT32_MIN;

    t198 = (x877<=((x878-x879)^x880));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x881 = INT64_MAX;
	volatile uint32_t x882 = UINT32_MAX;
	int16_t x883 = -2005;
	int32_t t199 = 376;

    t199 = (x881<=((x882-x883)^x884));

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

