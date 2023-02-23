
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

volatile int8_t x1 = -15;
volatile int32_t x4 = INT32_MIN;
static int8_t x8 = INT8_MIN;
volatile int8_t x11 = -1;
int32_t t2 = 1628;
int16_t x21 = 1;
int8_t x22 = 17;
uint16_t x34 = 1U;
static int64_t x36 = 96226565370437405LL;
volatile int64_t t7 = 56228LL;
volatile uint16_t x47 = UINT16_MAX;
static int32_t x48 = INT32_MIN;
static uint16_t x58 = UINT16_MAX;
static uint32_t x60 = 65342U;
int16_t x76 = INT16_MIN;
uint64_t x78 = 88611017181703991LLU;
int64_t t19 = 502977315193LL;
int32_t x95 = INT32_MAX;
uint32_t x96 = 157081U;
uint8_t x102 = UINT8_MAX;
uint16_t x103 = 9U;
uint8_t x110 = 0U;
uint32_t t22 = 2760U;
volatile uint8_t x136 = 3U;
int64_t x138 = -3496564860LL;
int16_t x139 = INT16_MIN;
uint16_t x148 = 1583U;
int32_t x150 = -1;
int32_t x151 = 29430679;
volatile uint32_t t30 = 14U;
static uint16_t x158 = UINT16_MAX;
int16_t x166 = INT16_MAX;
uint16_t x171 = 2U;
static int32_t x178 = -24;
static uint16_t x187 = 1U;
static volatile int32_t t37 = -1949;
volatile int32_t x207 = INT32_MAX;
uint64_t x210 = 52LLU;
int32_t x219 = -1;
static int16_t x221 = INT16_MAX;
int32_t x224 = INT32_MAX;
int16_t x237 = -11646;
volatile uint8_t x242 = UINT8_MAX;
volatile int8_t x245 = -1;
int32_t x248 = 33689;
static int16_t x249 = -1;
volatile uint32_t x254 = UINT32_MAX;
int16_t x263 = INT16_MIN;
static int32_t x264 = 484363;
volatile int32_t t53 = 9134330;
int8_t x279 = INT8_MIN;
volatile int32_t t55 = 1100;
static uint32_t x281 = 88416U;
int64_t x284 = INT64_MAX;
static int64_t x293 = INT64_MIN;
int64_t t58 = 6111619LL;
static uint64_t x301 = UINT64_MAX;
int16_t x315 = INT16_MAX;
static int64_t x316 = -1LL;
static uint16_t x318 = 2009U;
int64_t x327 = 2753283LL;
volatile uint8_t x336 = UINT8_MAX;
volatile int32_t x337 = INT32_MAX;
static volatile int32_t x338 = -1;
int32_t t68 = 2;
int32_t x355 = INT32_MIN;
int32_t t69 = -2;
volatile uint16_t x358 = 23U;
volatile int64_t t70 = 246543707LL;
int32_t x367 = 38;
static uint8_t x372 = UINT8_MAX;
int32_t x373 = 3152;
int8_t x375 = INT8_MIN;
int32_t t74 = -92872012;
int8_t x385 = INT8_MAX;
int8_t x390 = -58;
uint64_t t77 = 3019528544122LLU;
static int32_t t79 = 27829;
uint32_t x403 = 2125103082U;
volatile int32_t t80 = 3;
int32_t x405 = -1;
volatile int8_t x408 = 0;
volatile int32_t t84 = 677;
volatile uint64_t x439 = 215766501444947456LLU;
int32_t t90 = 6660866;
volatile int32_t t91 = 0;
volatile uint32_t x466 = 1480448564U;
static uint32_t x468 = 7U;
volatile uint8_t x475 = 49U;
int64_t t94 = -46878953LL;
uint32_t x479 = UINT32_MAX;
int64_t x485 = INT64_MIN;
static int16_t x490 = -1704;
int16_t x503 = -1;
static volatile int32_t t98 = -10;
uint16_t x507 = 10U;
int64_t x509 = 4343219122322687174LL;
int8_t x512 = -1;
static int16_t x516 = INT16_MIN;
volatile int32_t t102 = -1;
int32_t x529 = -1543;
uint64_t x536 = 133193720962215277LLU;
static int64_t x537 = INT64_MIN;
volatile int64_t t105 = -1179353582962427532LL;
int16_t x543 = -1;
int8_t x547 = 0;
uint16_t x560 = 1026U;
volatile uint64_t x561 = 25838844590781107LLU;
static volatile int16_t x563 = INT16_MIN;
uint64_t t111 = 1365378207926180983LLU;
int32_t x580 = INT32_MIN;
uint64_t x595 = UINT64_MAX;
int64_t x597 = INT64_MAX;
static int8_t x601 = -30;
static int8_t x608 = INT8_MIN;
int32_t t118 = 38311660;
volatile uint64_t t119 = 9065194853569891LLU;
static uint16_t x616 = 46U;
int32_t x620 = -1;
uint8_t x622 = 79U;
int8_t x623 = INT8_MIN;
volatile uint64_t x624 = UINT64_MAX;
static volatile int64_t t122 = -111587532960LL;
uint64_t x635 = 126800843765LLU;
int32_t x636 = -2;
int32_t x647 = -200609306;
uint64_t x669 = 469071LLU;
volatile int16_t x690 = 2;
int16_t x692 = 1691;
volatile uint32_t x693 = 414427U;
int8_t x695 = INT8_MIN;
int64_t x713 = 4534370440904390LL;
static int16_t x722 = INT16_MIN;
int32_t x728 = INT32_MAX;
volatile int64_t t138 = -952203387955897864LL;
static uint16_t x730 = 3337U;
int16_t x734 = -1;
static uint32_t x745 = 32917092U;
static uint32_t x749 = 30091U;
uint64_t x750 = UINT64_MAX;
static int32_t t145 = 746;
int64_t x761 = -141596535740506977LL;
int8_t x765 = INT8_MIN;
uint32_t x781 = 248U;
volatile int64_t x785 = -973043497LL;
static int16_t x786 = INT16_MAX;
static int8_t x791 = -1;
static int32_t t152 = 284;
volatile int8_t x801 = -1;
uint32_t x803 = UINT32_MAX;
int8_t x807 = -14;
uint8_t x829 = 0U;
int16_t x831 = -1;
int64_t x837 = INT64_MAX;
static volatile int64_t t160 = -12678968403188974LL;
static int32_t t161 = 303;
int32_t x850 = INT32_MIN;
volatile uint64_t x852 = 1755217213914LLU;
volatile int32_t t162 = -2009;
int8_t x855 = INT8_MAX;
int64_t x856 = -1LL;
int32_t t163 = -60;
int32_t x857 = 464;
volatile uint64_t x858 = 5499893427LLU;
static volatile int16_t x859 = 6015;
static int64_t x860 = INT64_MIN;
int64_t x862 = 75935536089095751LL;
int64_t x864 = INT64_MIN;
int64_t t165 = -1418935724189804LL;
int16_t x885 = INT16_MIN;
int32_t x887 = 127266936;
int32_t x900 = -1;
int8_t x913 = -1;
static int16_t x916 = 5264;
static int8_t x917 = INT8_MAX;
volatile uint64_t x918 = 20LLU;
static int8_t x921 = -1;
uint32_t t176 = 1479924247U;
uint64_t t177 = 1978299LLU;
uint8_t x934 = 82U;
uint8_t x938 = UINT8_MAX;
int8_t x939 = 2;
static int8_t x952 = -1;
static int16_t x954 = -1;
static int16_t x955 = -3448;
volatile uint16_t x962 = 21689U;
uint16_t x963 = UINT16_MAX;
int16_t x966 = INT16_MIN;
uint64_t x977 = 17LLU;
volatile int16_t x978 = 0;
static int8_t x980 = -61;
static uint64_t t187 = 0LLU;
static uint16_t x986 = UINT16_MAX;
int8_t x987 = 3;
uint8_t x1004 = UINT8_MAX;
int16_t x1008 = 104;
static uint32_t x1013 = UINT32_MAX;
int32_t x1022 = 26946937;
uint32_t x1023 = UINT32_MAX;
static int8_t x1026 = -3;
int64_t x1040 = INT64_MAX;
int32_t t197 = -1;
int64_t x1045 = INT64_MIN;
static uint16_t x1046 = UINT16_MAX;
uint64_t x1051 = 3253564500384061LLU;


void f0(void) {
    	int64_t x2 = -5LL;
	static uint16_t x3 = 2669U;
	volatile int32_t t0 = 1;

    t0 = (x1&((x2*x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1491383751LL;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = 1940645028LL;
	volatile int64_t t1 = 279005223LL;

    t1 = (x5&((x6*x7)<=x8));

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = 2743LL;
	static int8_t x12 = -1;

    t2 = (x9&((x10*x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 61U;
	uint16_t x14 = 29323U;
	static int16_t x15 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -102;

    t3 = (x13&((x14*x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = UINT32_MAX;
	volatile uint32_t x18 = UINT32_MAX;
	int16_t x19 = -748;
	uint16_t x20 = 1796U;
	volatile uint32_t t4 = 25U;

    t4 = (x17&((x18*x19)<=x20));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x23 = 1658530178694163864LLU;
	int64_t x24 = 1951488612LL;
	int32_t t5 = -378286;

    t5 = (x21&((x22*x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 270U;
	volatile int8_t x26 = 60;
	int16_t x27 = -1;
	static uint32_t x28 = 17772746U;
	static volatile int32_t t6 = 0;

    t6 = (x25&((x26*x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -30175062901374898LL;
	uint16_t x35 = 1373U;

    t7 = (x33&((x34*x35)<=x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	volatile uint8_t x39 = UINT8_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t8 = -6;

    t8 = (x37&((x38*x39)<=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 8556LLU;
	int16_t x42 = INT16_MAX;
	uint64_t x43 = 61639251129446LLU;
	int8_t x44 = INT8_MIN;
	uint64_t t9 = 1118406163724505771LLU;

    t9 = (x41&((x42*x43)<=x44));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 544LL;
	int32_t x46 = -5;
	volatile int64_t t10 = -71575918LL;

    t10 = (x45&((x46*x47)<=x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MAX;
	uint16_t x54 = 25052U;
	uint16_t x55 = 7643U;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t11 = -14;

    t11 = (x53&((x54*x55)<=x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -20;
	volatile int8_t x59 = INT8_MAX;
	int32_t t12 = -49055238;

    t12 = (x57&((x58*x59)<=x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -1;
	volatile int32_t t13 = -228755102;

    t13 = (x61&((x62*x63)<=x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = 103;
	uint8_t x70 = 1U;
	uint64_t x71 = UINT64_MAX;
	static volatile int64_t x72 = INT64_MIN;
	volatile int32_t t14 = 20590023;

    t14 = (x69&((x70*x71)<=x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MIN;
	volatile uint32_t x74 = 471461U;
	static int8_t x75 = INT8_MIN;
	int32_t t15 = 1;

    t15 = (x73&((x74*x75)<=x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -525743442LL;
	volatile int32_t t16 = 51662735;

    t16 = (x77&((x78*x79)<=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = INT8_MAX;
	static int8_t x82 = 0;
	static volatile int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t17 = -672450;

    t17 = (x81&((x82*x83)<=x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 57LLU;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -1;
	static volatile uint64_t t18 = 4139783LLU;

    t18 = (x85&((x86*x87)<=x88));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = INT64_MIN;
	uint32_t x90 = 272U;
	int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = UINT32_MAX;

    t19 = (x89&((x90*x91)<=x92));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x94 = -1;
	int64_t t20 = -4LL;

    t20 = (x93&((x94*x95)<=x96));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = -1LL;
	static int16_t x104 = -355;
	int64_t t21 = 436639LL;

    t21 = (x101&((x102*x103)<=x104));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = 160780584U;
	uint8_t x111 = 30U;
	int16_t x112 = INT16_MIN;

    t22 = (x109&((x110*x111)<=x112));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MAX;
	volatile int8_t x114 = 0;
	int8_t x115 = -5;
	int8_t x116 = INT8_MIN;
	static int32_t t23 = -1;

    t23 = (x113&((x114*x115)<=x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -2;
	int32_t t24 = 10;

    t24 = (x121&((x122*x123)<=x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x125 = 6U;
	int16_t x126 = INT16_MIN;
	static int8_t x127 = INT8_MAX;
	static volatile int8_t x128 = -1;
	int32_t t25 = 0;

    t25 = (x125&((x126*x127)<=x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x133 = 43446692278357936LL;
	int16_t x134 = INT16_MIN;
	static uint64_t x135 = 393984LLU;
	int64_t t26 = -5215896845LL;

    t26 = (x133&((x134*x135)<=x136));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x137 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	int32_t t27 = -13;

    t27 = (x137&((x138*x139)<=x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 12U;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = 252U;
	volatile int32_t t28 = 72937;

    t28 = (x145&((x146*x147)<=x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x149 = 11LL;
	int32_t x152 = INT32_MIN;
	volatile int64_t t29 = -72644404LL;

    t29 = (x149&((x150*x151)<=x152));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 191316U;
	static int64_t x154 = 1280971LL;
	uint8_t x155 = 13U;
	int16_t x156 = -1;

    t30 = (x153&((x154*x155)<=x156));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = INT8_MIN;
	volatile int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t31 = 0;

    t31 = (x157&((x158*x159)<=x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x165 = INT32_MAX;
	static uint64_t x167 = 1LLU;
	uint64_t x168 = 7731158456366900LLU;
	static int32_t t32 = -217358292;

    t32 = (x165&((x166*x167)<=x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x169 = INT8_MAX;
	int32_t x170 = 80009083;
	int64_t x172 = INT64_MIN;
	volatile int32_t t33 = 1264;

    t33 = (x169&((x170*x171)<=x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x173 = -1;
	int32_t x174 = -506237004;
	uint32_t x175 = 110110448U;
	static uint64_t x176 = UINT64_MAX;
	int32_t t34 = 29;

    t34 = (x173&((x174*x175)<=x176));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x177 = INT8_MAX;
	volatile int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	int32_t t35 = -3;

    t35 = (x177&((x178*x179)<=x180));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x181 = -1037579118LL;
	volatile uint8_t x182 = 20U;
	uint32_t x183 = 2113233709U;
	static int8_t x184 = INT8_MIN;
	volatile int64_t t36 = -4393338LL;

    t36 = (x181&((x182*x183)<=x184));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	int16_t x188 = INT16_MIN;

    t37 = (x185&((x186*x187)<=x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = 0;
	static int16_t x194 = INT16_MAX;
	uint8_t x195 = 16U;
	int64_t x196 = INT64_MIN;
	int32_t t38 = 1270197;

    t38 = (x193&((x194*x195)<=x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x197 = UINT16_MAX;
	volatile int64_t x198 = -1LL;
	volatile uint16_t x199 = 1973U;
	int32_t x200 = -791;
	int32_t t39 = -379162187;

    t39 = (x197&((x198*x199)<=x200));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x205 = -1;
	uint16_t x206 = 1U;
	uint16_t x208 = 13968U;
	volatile int32_t t40 = -4436;

    t40 = (x205&((x206*x207)<=x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = INT32_MIN;
	static int8_t x211 = 0;
	static int8_t x212 = -1;
	volatile int32_t t41 = -209967;

    t41 = (x209&((x210*x211)<=x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x217 = -6644;
	uint32_t x218 = 230907816U;
	static uint32_t x220 = UINT32_MAX;
	volatile int32_t t42 = -307616250;

    t42 = (x217&((x218*x219)<=x220));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x222 = UINT16_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t43 = -1;

    t43 = (x221&((x222*x223)<=x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x225 = 8;
	volatile int16_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;
	static int32_t t44 = -26095062;

    t44 = (x225&((x226*x227)<=x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = UINT64_MAX;
	static uint64_t x232 = UINT64_MAX;
	static int32_t t45 = 85170490;

    t45 = (x229&((x230*x231)<=x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MAX;
	int8_t x235 = 1;
	static int64_t x236 = INT64_MAX;
	int64_t t46 = 23793183927458559LL;

    t46 = (x233&((x234*x235)<=x236));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x238 = -1;
	int8_t x239 = 2;
	volatile int32_t x240 = -1;
	volatile int32_t t47 = 178409;

    t47 = (x237&((x238*x239)<=x240));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x241 = INT8_MIN;
	uint32_t x243 = 1U;
	volatile uint32_t x244 = UINT32_MAX;
	int32_t t48 = 34949795;

    t48 = (x241&((x242*x243)<=x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x246 = -1;
	uint8_t x247 = 11U;
	int32_t t49 = -63817;

    t49 = (x245&((x246*x247)<=x248));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x250 = UINT16_MAX;
	uint64_t x251 = 81218104LLU;
	int64_t x252 = -668LL;
	int32_t t50 = -1335;

    t50 = (x249&((x250*x251)<=x252));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x253 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -175;
	int32_t t51 = -3496977;

    t51 = (x253&((x254*x255)<=x256));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	uint32_t x262 = UINT32_MAX;
	uint32_t t52 = 0U;

    t52 = (x261&((x262*x263)<=x264));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x269 = 3683236;
	int64_t x270 = -1247LL;
	static uint64_t x271 = 1716144519LLU;
	uint64_t x272 = 1LLU;

    t53 = (x269&((x270*x271)<=x272));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x273 = -1;
	static int8_t x274 = -1;
	int16_t x275 = INT16_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t54 = -1;

    t54 = (x273&((x274*x275)<=x276));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x277 = 147U;
	uint8_t x278 = UINT8_MAX;
	int64_t x280 = -732677402LL;

    t55 = (x277&((x278*x279)<=x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x282 = INT16_MIN;
	int16_t x283 = -3788;
	volatile uint32_t t56 = 2U;

    t56 = (x281&((x282*x283)<=x284));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = 923;
	volatile uint64_t x291 = 1090175353412LLU;
	int16_t x292 = 3;
	volatile int32_t t57 = 664873;

    t57 = (x289&((x290*x291)<=x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x294 = 103739LLU;
	int32_t x295 = INT32_MIN;
	static uint32_t x296 = UINT32_MAX;

    t58 = (x293&((x294*x295)<=x296));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x302 = 0;
	volatile uint32_t x303 = 41473811U;
	static int16_t x304 = -3648;
	volatile uint64_t t59 = 316LLU;

    t59 = (x301&((x302*x303)<=x304));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x305 = UINT32_MAX;
	static volatile int8_t x306 = 30;
	int16_t x307 = -2;
	int64_t x308 = INT64_MAX;
	volatile uint32_t t60 = 658U;

    t60 = (x305&((x306*x307)<=x308));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x313 = 3962668758LLU;
	static int16_t x314 = INT16_MIN;
	volatile uint64_t t61 = 24171309472294372LLU;

    t61 = (x313&((x314*x315)<=x316));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x317 = -1;
	volatile uint8_t x319 = 70U;
	int8_t x320 = 1;
	volatile int32_t t62 = -183806311;

    t62 = (x317&((x318*x319)<=x320));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	int64_t x323 = -1LL;
	uint16_t x324 = 3543U;
	static volatile uint32_t t63 = 596U;

    t63 = (x321&((x322*x323)<=x324));

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = INT32_MIN;
	static int16_t x326 = INT16_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t64 = -403;

    t64 = (x325&((x326*x327)<=x328));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x329 = 910936536;
	uint64_t x330 = UINT64_MAX;
	int8_t x331 = 0;
	uint32_t x332 = 327U;
	volatile int32_t t65 = 44789899;

    t65 = (x329&((x330*x331)<=x332));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x333 = 49653768512004LLU;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = 1LL;
	volatile uint64_t t66 = 2LLU;

    t66 = (x333&((x334*x335)<=x336));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x339 = -1LL;
	int64_t x340 = -22298871550960386LL;
	volatile int32_t t67 = 47068112;

    t67 = (x337&((x338*x339)<=x340));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x349 = INT8_MAX;
	static int8_t x350 = -1;
	volatile uint32_t x351 = 10U;
	int16_t x352 = INT16_MAX;

    t68 = (x349&((x350*x351)<=x352));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x353 = 1386U;
	uint64_t x354 = 27LLU;
	static int64_t x356 = -340220481LL;

    t69 = (x353&((x354*x355)<=x356));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x359 = -940;
	int16_t x360 = INT16_MIN;

    t70 = (x357&((x358*x359)<=x360));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 10U;
	int8_t x364 = INT8_MIN;
	int32_t t71 = 2;

    t71 = (x361&((x362*x363)<=x364));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x365 = 1U;
	static int32_t x366 = -1;
	int8_t x368 = 12;
	volatile int32_t t72 = 18243838;

    t72 = (x365&((x366*x367)<=x368));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x369 = 2;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = 0;
	int32_t t73 = -5;

    t73 = (x369&((x370*x371)<=x372));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x374 = 0;
	uint32_t x376 = 27864843U;

    t74 = (x373&((x374*x375)<=x376));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x381 = INT64_MIN;
	volatile int64_t x382 = 1LL;
	static volatile uint64_t x383 = 49882132005LLU;
	int8_t x384 = INT8_MIN;
	volatile int64_t t75 = 5682LL;

    t75 = (x381&((x382*x383)<=x384));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x386 = UINT64_MAX;
	int64_t x387 = -2207LL;
	int8_t x388 = INT8_MIN;
	int32_t t76 = -15590923;

    t76 = (x385&((x386*x387)<=x388));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x389 = UINT64_MAX;
	static int16_t x391 = -1;
	volatile int32_t x392 = INT32_MIN;

    t77 = (x389&((x390*x391)<=x392));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 32729U;
	static int64_t x395 = 76LL;
	static int32_t x396 = INT32_MAX;
	uint32_t t78 = 38394502U;

    t78 = (x393&((x394*x395)<=x396));

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x397 = 2U;
	volatile uint64_t x398 = 45LLU;
	int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = UINT8_MAX;

    t79 = (x397&((x398*x399)<=x400));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x401 = UINT8_MAX;
	static uint16_t x402 = 28573U;
	volatile int64_t x404 = -1LL;

    t80 = (x401&((x402*x403)<=x404));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x406 = INT8_MIN;
	int16_t x407 = 1;
	volatile int32_t t81 = 6;

    t81 = (x405&((x406*x407)<=x408));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 166278U;
	volatile uint64_t x412 = 132396LLU;
	volatile int32_t t82 = -252712415;

    t82 = (x409&((x410*x411)<=x412));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x417 = -1;
	int8_t x418 = INT8_MAX;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = -8758;
	volatile int32_t t83 = -10;

    t83 = (x417&((x418*x419)<=x420));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x429 = INT8_MIN;
	uint64_t x430 = 66895346080161597LLU;
	int16_t x431 = -7;
	uint16_t x432 = UINT16_MAX;

    t84 = (x429&((x430*x431)<=x432));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x433 = UINT8_MAX;
	int64_t x434 = INT64_MIN;
	static uint8_t x435 = 1U;
	int32_t x436 = -1;
	volatile int32_t t85 = -976;

    t85 = (x433&((x434*x435)<=x436));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x437 = 1;
	uint64_t x438 = 278925281204769LLU;
	static uint64_t x440 = 182467LLU;
	int32_t t86 = -65134;

    t86 = (x437&((x438*x439)<=x440));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x441 = 91519071450221861LLU;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 24300U;
	volatile uint8_t x444 = 1U;
	volatile uint64_t t87 = 771787090579616105LLU;

    t87 = (x441&((x442*x443)<=x444));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	static uint8_t x446 = 1U;
	uint8_t x447 = UINT8_MAX;
	volatile int16_t x448 = -1;
	static volatile uint32_t t88 = 901U;

    t88 = (x445&((x446*x447)<=x448));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x449 = 11660638LLU;
	uint64_t x450 = 142425755603431864LLU;
	static int32_t x451 = -29;
	uint16_t x452 = 1U;
	static uint64_t t89 = 5300952480507334LLU;

    t89 = (x449&((x450*x451)<=x452));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x453 = -1811850;
	static int16_t x454 = 3;
	int32_t x455 = -574;
	int8_t x456 = INT8_MAX;

    t90 = (x453&((x454*x455)<=x456));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x457 = -44;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = -1;
	static volatile int16_t x460 = 1;

    t91 = (x457&((x458*x459)<=x460));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x465 = -163;
	static int64_t x467 = -1LL;
	volatile int32_t t92 = -2859003;

    t92 = (x465&((x466*x467)<=x468));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x469 = 171LLU;
	int64_t x470 = 35LL;
	int64_t x471 = -1LL;
	int16_t x472 = 2;
	uint64_t t93 = 205924LLU;

    t93 = (x469&((x470*x471)<=x472));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x473 = INT64_MAX;
	int64_t x474 = -1LL;
	int64_t x476 = 579783LL;

    t94 = (x473&((x474*x475)<=x476));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x477 = INT64_MIN;
	volatile int16_t x478 = INT16_MIN;
	volatile uint8_t x480 = 2U;
	volatile int64_t t95 = -37271041626509768LL;

    t95 = (x477&((x478*x479)<=x480));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x486 = INT8_MIN;
	uint64_t x487 = 28049317853265LLU;
	int8_t x488 = 1;
	int64_t t96 = 34088529LL;

    t96 = (x485&((x486*x487)<=x488));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x489 = INT16_MAX;
	volatile uint8_t x491 = 2U;
	uint16_t x492 = 2783U;
	static int32_t t97 = -77266812;

    t97 = (x489&((x490*x491)<=x492));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x501 = 126893;
	uint16_t x502 = 3142U;
	int16_t x504 = -443;

    t98 = (x501&((x502*x503)<=x504));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x505 = INT8_MIN;
	static uint8_t x506 = 3U;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t99 = -6;

    t99 = (x505&((x506*x507)<=x508));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x510 = -2;
	volatile uint64_t x511 = 6608855122251326012LLU;
	volatile int64_t t100 = -42LL;

    t100 = (x509&((x510*x511)<=x512));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x513 = 15514333U;
	static volatile int16_t x514 = -1;
	static int8_t x515 = -5;
	uint32_t t101 = 15U;

    t101 = (x513&((x514*x515)<=x516));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x525 = INT16_MAX;
	int8_t x526 = -1;
	static volatile uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MAX;

    t102 = (x525&((x526*x527)<=x528));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x530 = 5U;
	static int16_t x531 = 2656;
	int16_t x532 = INT16_MAX;
	volatile int32_t t103 = 145603;

    t103 = (x529&((x530*x531)<=x532));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x533 = 0U;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = 116477303666LLU;
	int32_t t104 = -148680;

    t104 = (x533&((x534*x535)<=x536));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x538 = INT16_MIN;
	volatile int16_t x539 = -1;
	static volatile int16_t x540 = -1;

    t105 = (x537&((x538*x539)<=x540));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x541 = 858223592LLU;
	int64_t x542 = INT64_MAX;
	int16_t x544 = -2;
	volatile uint64_t t106 = 1096LLU;

    t106 = (x541&((x542*x543)<=x544));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x545 = 399350791378LLU;
	int32_t x546 = INT32_MIN;
	volatile uint16_t x548 = 6U;
	volatile uint64_t t107 = 8996033LLU;

    t107 = (x545&((x546*x547)<=x548));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x549 = INT16_MAX;
	int8_t x550 = 7;
	int32_t x551 = -1;
	int16_t x552 = INT16_MIN;
	volatile int32_t t108 = -1907551;

    t108 = (x549&((x550*x551)<=x552));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x553 = INT16_MIN;
	int16_t x554 = INT16_MIN;
	uint32_t x555 = 241U;
	static uint16_t x556 = 0U;
	int32_t t109 = 100;

    t109 = (x553&((x554*x555)<=x556));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x557 = INT32_MIN;
	volatile uint32_t x558 = UINT32_MAX;
	volatile int32_t x559 = INT32_MIN;
	volatile int32_t t110 = 16;

    t110 = (x557&((x558*x559)<=x560));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x562 = 1232U;
	int64_t x564 = -1LL;

    t111 = (x561&((x562*x563)<=x564));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x577 = INT64_MIN;
	volatile int16_t x578 = INT16_MIN;
	uint8_t x579 = 3U;
	static int64_t t112 = 96877313LL;

    t112 = (x577&((x578*x579)<=x580));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x581 = 7;
	volatile uint32_t x582 = UINT32_MAX;
	static volatile int16_t x583 = -471;
	int16_t x584 = INT16_MAX;
	int32_t t113 = -1;

    t113 = (x581&((x582*x583)<=x584));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x589 = 825U;
	uint64_t x590 = 4245525933LLU;
	int16_t x591 = 805;
	uint8_t x592 = UINT8_MAX;
	uint32_t t114 = 6898U;

    t114 = (x589&((x590*x591)<=x592));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x593 = -45;
	int32_t x594 = INT32_MAX;
	volatile int32_t x596 = -86;
	volatile int32_t t115 = 2245;

    t115 = (x593&((x594*x595)<=x596));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x598 = INT16_MAX;
	int8_t x599 = -1;
	int8_t x600 = -1;
	volatile int64_t t116 = 1LL;

    t116 = (x597&((x598*x599)<=x600));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x602 = INT16_MIN;
	int16_t x603 = INT16_MIN;
	int32_t x604 = 22912154;
	volatile int32_t t117 = -252867570;

    t117 = (x601&((x602*x603)<=x604));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = -59643320544391546LL;
	static uint64_t x607 = UINT64_MAX;

    t118 = (x605&((x606*x607)<=x608));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x609 = 1440033659LLU;
	uint8_t x610 = 52U;
	uint64_t x611 = UINT64_MAX;
	uint64_t x612 = 553583756509LLU;

    t119 = (x609&((x610*x611)<=x612));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = -1LL;
	static volatile int32_t x615 = INT32_MIN;
	uint64_t t120 = 2LLU;

    t120 = (x613&((x614*x615)<=x616));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x617 = INT8_MAX;
	volatile int8_t x618 = -1;
	static uint64_t x619 = UINT64_MAX;
	static int32_t t121 = 1569;

    t121 = (x617&((x618*x619)<=x620));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x621 = INT64_MAX;

    t122 = (x621&((x622*x623)<=x624));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MAX;
	int16_t x627 = 0;
	volatile int8_t x628 = 8;
	volatile int32_t t123 = 253019;

    t123 = (x625&((x626*x627)<=x628));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = -1;
	volatile int32_t t124 = 3317514;

    t124 = (x633&((x634*x635)<=x636));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x637 = INT8_MIN;
	uint64_t x638 = 12126976816LLU;
	uint8_t x639 = 23U;
	volatile int16_t x640 = 344;
	volatile int32_t t125 = 28510684;

    t125 = (x637&((x638*x639)<=x640));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x645 = 430;
	volatile uint32_t x646 = UINT32_MAX;
	static volatile int32_t x648 = -1;
	volatile int32_t t126 = 170587286;

    t126 = (x645&((x646*x647)<=x648));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x649 = 0;
	volatile int16_t x650 = INT16_MAX;
	int16_t x651 = INT16_MIN;
	uint32_t x652 = 0U;
	volatile int32_t t127 = 1582;

    t127 = (x649&((x650*x651)<=x652));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x653 = -1;
	static uint32_t x654 = 6U;
	int8_t x655 = 3;
	volatile uint64_t x656 = 98484035LLU;
	volatile int32_t t128 = 0;

    t128 = (x653&((x654*x655)<=x656));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x661 = 1522LL;
	static int32_t x662 = INT32_MAX;
	static int8_t x663 = -1;
	volatile uint32_t x664 = 305538197U;
	volatile int64_t t129 = -707865389864225LL;

    t129 = (x661&((x662*x663)<=x664));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x670 = 75614U;
	uint8_t x671 = 29U;
	uint32_t x672 = UINT32_MAX;
	uint64_t t130 = 27549LLU;

    t130 = (x669&((x670*x671)<=x672));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x677 = -1;
	uint16_t x678 = UINT16_MAX;
	static int64_t x679 = -1LL;
	uint8_t x680 = UINT8_MAX;
	int32_t t131 = -13614658;

    t131 = (x677&((x678*x679)<=x680));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x685 = INT16_MIN;
	int8_t x686 = INT8_MIN;
	static uint64_t x687 = 255LLU;
	int32_t x688 = -626941630;
	static volatile int32_t t132 = -2552;

    t132 = (x685&((x686*x687)<=x688));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x689 = 561U;
	volatile uint8_t x691 = 12U;
	volatile int32_t t133 = -65;

    t133 = (x689&((x690*x691)<=x692));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x694 = 1043419171U;
	uint32_t x696 = 1U;
	uint32_t t134 = 11494U;

    t134 = (x693&((x694*x695)<=x696));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x697 = INT8_MIN;
	static volatile uint32_t x698 = 2071780U;
	uint16_t x699 = 6056U;
	static int8_t x700 = INT8_MIN;
	volatile int32_t t135 = 3;

    t135 = (x697&((x698*x699)<=x700));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x714 = 13U;
	static int16_t x715 = INT16_MIN;
	static uint64_t x716 = 41524154711LLU;
	static int64_t t136 = -2916919671119632LL;

    t136 = (x713&((x714*x715)<=x716));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x721 = 8362451;
	volatile int32_t x723 = -1;
	static volatile int16_t x724 = INT16_MIN;
	volatile int32_t t137 = 13814257;

    t137 = (x721&((x722*x723)<=x724));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x725 = 4144LL;
	static int16_t x726 = INT16_MAX;
	volatile uint32_t x727 = 39U;

    t138 = (x725&((x726*x727)<=x728));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x729 = 21U;
	int8_t x731 = INT8_MIN;
	uint64_t x732 = 14LLU;
	volatile uint32_t t139 = 157U;

    t139 = (x729&((x730*x731)<=x732));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x733 = INT32_MIN;
	static int64_t x735 = -1LL;
	uint32_t x736 = 2897504U;
	int32_t t140 = -13;

    t140 = (x733&((x734*x735)<=x736));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x737 = 5U;
	volatile uint16_t x738 = 8U;
	uint16_t x739 = 679U;
	static uint8_t x740 = 1U;
	uint32_t t141 = 202U;

    t141 = (x737&((x738*x739)<=x740));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x746 = INT8_MIN;
	uint32_t x747 = UINT32_MAX;
	int32_t x748 = 41;
	uint32_t t142 = 511287975U;

    t142 = (x745&((x746*x747)<=x748));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x751 = 838440450341286540LLU;
	volatile uint8_t x752 = 100U;
	uint32_t t143 = 1412U;

    t143 = (x749&((x750*x751)<=x752));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x753 = -389732;
	static uint16_t x754 = 1110U;
	static int8_t x755 = INT8_MIN;
	volatile int8_t x756 = INT8_MIN;
	int32_t t144 = -76;

    t144 = (x753&((x754*x755)<=x756));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x757 = 1;
	uint32_t x758 = 51150894U;
	uint8_t x759 = 27U;
	uint8_t x760 = 61U;

    t145 = (x757&((x758*x759)<=x760));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x762 = 20527791U;
	static uint8_t x763 = UINT8_MAX;
	int16_t x764 = INT16_MAX;
	static int64_t t146 = -1472983186379LL;

    t146 = (x761&((x762*x763)<=x764));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x766 = 92U;
	int16_t x767 = -1;
	volatile int32_t x768 = -2;
	int32_t t147 = 2;

    t147 = (x765&((x766*x767)<=x768));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x769 = -2;
	uint16_t x770 = UINT16_MAX;
	int16_t x771 = -1;
	uint32_t x772 = 3301U;
	static int32_t t148 = 962908;

    t148 = (x769&((x770*x771)<=x772));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x777 = INT32_MIN;
	volatile uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MAX;
	uint32_t x780 = 515969034U;
	volatile int32_t t149 = 13;

    t149 = (x777&((x778*x779)<=x780));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x782 = UINT16_MAX;
	static int32_t x783 = -56;
	static int64_t x784 = INT64_MAX;
	volatile uint32_t t150 = 13833671U;

    t150 = (x781&((x782*x783)<=x784));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x787 = UINT8_MAX;
	int16_t x788 = 8;
	volatile int64_t t151 = -2327711453623221856LL;

    t151 = (x785&((x786*x787)<=x788));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x789 = INT32_MIN;
	static int8_t x790 = -2;
	int32_t x792 = -1;

    t152 = (x789&((x790*x791)<=x792));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x802 = 24374762U;
	int8_t x804 = -1;
	volatile int32_t t153 = -52;

    t153 = (x801&((x802*x803)<=x804));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x805 = -1;
	static int16_t x806 = INT16_MIN;
	uint16_t x808 = 209U;
	int32_t t154 = -18;

    t154 = (x805&((x806*x807)<=x808));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x809 = 7U;
	static uint16_t x810 = 1U;
	int64_t x811 = INT64_MIN;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t155 = 3321;

    t155 = (x809&((x810*x811)<=x812));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x813 = 3U;
	int16_t x814 = 3;
	uint8_t x815 = 73U;
	int16_t x816 = 13929;
	volatile int32_t t156 = -12;

    t156 = (x813&((x814*x815)<=x816));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x825 = 1U;
	uint16_t x826 = 280U;
	volatile uint32_t x827 = UINT32_MAX;
	volatile int64_t x828 = 3397592LL;
	static volatile int32_t t157 = -17431;

    t157 = (x825&((x826*x827)<=x828));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x830 = 886051597085529733LLU;
	int8_t x832 = INT8_MIN;
	int32_t t158 = -253812;

    t158 = (x829&((x830*x831)<=x832));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x833 = INT8_MAX;
	uint8_t x834 = UINT8_MAX;
	static int32_t x835 = 3499;
	uint8_t x836 = UINT8_MAX;
	int32_t t159 = -195;

    t159 = (x833&((x834*x835)<=x836));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x838 = 0U;
	int64_t x839 = -1LL;
	int16_t x840 = -1;

    t160 = (x837&((x838*x839)<=x840));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x845 = 21;
	uint8_t x846 = UINT8_MAX;
	static int64_t x847 = -1LL;
	static int64_t x848 = INT64_MIN;

    t161 = (x845&((x846*x847)<=x848));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x849 = INT8_MIN;
	static volatile int64_t x851 = 3LL;

    t162 = (x849&((x850*x851)<=x852));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x853 = INT8_MIN;
	static int8_t x854 = 3;

    t163 = (x853&((x854*x855)<=x856));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t t164 = -299;

    t164 = (x857&((x858*x859)<=x860));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x861 = INT64_MAX;
	int8_t x863 = -9;

    t165 = (x861&((x862*x863)<=x864));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x873 = -1;
	static uint64_t x874 = 141LLU;
	uint32_t x875 = 8316U;
	uint8_t x876 = 5U;
	volatile int32_t t166 = -1999041;

    t166 = (x873&((x874*x875)<=x876));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x881 = -53;
	int16_t x882 = -11769;
	uint64_t x883 = 211376794948091116LLU;
	int64_t x884 = -2900559780437748974LL;
	int32_t t167 = 89390;

    t167 = (x881&((x882*x883)<=x884));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x886 = 64U;
	int16_t x888 = INT16_MAX;
	volatile int32_t t168 = -162766;

    t168 = (x885&((x886*x887)<=x888));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x889 = 23;
	int16_t x890 = -3;
	uint32_t x891 = 2U;
	int64_t x892 = INT64_MAX;
	volatile int32_t t169 = -1;

    t169 = (x889&((x890*x891)<=x892));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x897 = INT32_MIN;
	int32_t x898 = -8504;
	uint16_t x899 = 700U;
	volatile int32_t t170 = 29227;

    t170 = (x897&((x898*x899)<=x900));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x901 = INT32_MIN;
	uint8_t x902 = UINT8_MAX;
	int8_t x903 = -1;
	int16_t x904 = 1901;
	volatile int32_t t171 = -3;

    t171 = (x901&((x902*x903)<=x904));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x905 = INT64_MIN;
	int8_t x906 = -10;
	static uint16_t x907 = 71U;
	volatile int32_t x908 = INT32_MIN;
	int64_t t172 = 7413400153LL;

    t172 = (x905&((x906*x907)<=x908));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x914 = -5;
	uint64_t x915 = UINT64_MAX;
	int32_t t173 = 620966;

    t173 = (x913&((x914*x915)<=x916));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x919 = 358U;
	volatile int32_t x920 = INT32_MIN;
	int32_t t174 = -3314;

    t174 = (x917&((x918*x919)<=x920));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x922 = UINT32_MAX;
	int16_t x923 = -1;
	volatile uint32_t x924 = UINT32_MAX;
	volatile int32_t t175 = -337;

    t175 = (x921&((x922*x923)<=x924));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x925 = UINT32_MAX;
	static int32_t x926 = -1;
	int64_t x927 = INT64_MAX;
	uint8_t x928 = UINT8_MAX;

    t176 = (x925&((x926*x927)<=x928));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x929 = 429632972488LLU;
	uint64_t x930 = UINT64_MAX;
	static uint16_t x931 = UINT16_MAX;
	static int32_t x932 = INT32_MAX;

    t177 = (x929&((x930*x931)<=x932));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x933 = -5;
	int16_t x935 = -509;
	static int16_t x936 = -16;
	int32_t t178 = 59294136;

    t178 = (x933&((x934*x935)<=x936));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x937 = UINT32_MAX;
	static int16_t x940 = INT16_MIN;
	uint32_t t179 = 1U;

    t179 = (x937&((x938*x939)<=x940));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x941 = 1183540;
	volatile int16_t x942 = INT16_MIN;
	int16_t x943 = -1;
	int64_t x944 = INT64_MAX;
	int32_t t180 = -10259792;

    t180 = (x941&((x942*x943)<=x944));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x949 = INT8_MAX;
	int16_t x950 = -1;
	static uint64_t x951 = UINT64_MAX;
	volatile int32_t t181 = -6876525;

    t181 = (x949&((x950*x951)<=x952));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x953 = INT16_MAX;
	static int64_t x956 = -1LL;
	volatile int32_t t182 = 632;

    t182 = (x953&((x954*x955)<=x956));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x957 = 6344U;
	uint8_t x958 = 0U;
	uint64_t x959 = UINT64_MAX;
	volatile uint16_t x960 = UINT16_MAX;
	volatile int32_t t183 = 1;

    t183 = (x957&((x958*x959)<=x960));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x961 = -1;
	uint8_t x964 = 2U;
	volatile int32_t t184 = 229;

    t184 = (x961&((x962*x963)<=x964));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x965 = -10;
	uint16_t x967 = 2787U;
	static int8_t x968 = INT8_MIN;
	volatile int32_t t185 = -5181;

    t185 = (x965&((x966*x967)<=x968));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x973 = 0;
	int8_t x974 = -1;
	int16_t x975 = -6;
	int16_t x976 = -1;
	volatile int32_t t186 = 46355785;

    t186 = (x973&((x974*x975)<=x976));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x979 = UINT64_MAX;

    t187 = (x977&((x978*x979)<=x980));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x981 = INT32_MAX;
	volatile uint16_t x982 = 20U;
	static int8_t x983 = INT8_MIN;
	static int8_t x984 = INT8_MAX;
	int32_t t188 = -86557;

    t188 = (x981&((x982*x983)<=x984));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x985 = INT8_MIN;
	static volatile int64_t x988 = -10920091LL;
	int32_t t189 = 71052;

    t189 = (x985&((x986*x987)<=x988));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x997 = UINT16_MAX;
	volatile uint8_t x998 = 123U;
	int64_t x999 = -1LL;
	int32_t x1000 = INT32_MAX;
	static int32_t t190 = -12728;

    t190 = (x997&((x998*x999)<=x1000));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1001 = INT64_MAX;
	volatile int32_t x1002 = -2655;
	int64_t x1003 = -1LL;
	int64_t t191 = -12218122459448LL;

    t191 = (x1001&((x1002*x1003)<=x1004));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1005 = 1401U;
	volatile int16_t x1006 = -1;
	uint32_t x1007 = 113101U;
	int32_t t192 = 397;

    t192 = (x1005&((x1006*x1007)<=x1008));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1009 = INT8_MAX;
	uint32_t x1010 = 69U;
	int16_t x1011 = INT16_MIN;
	int8_t x1012 = -8;
	static volatile int32_t t193 = -806188;

    t193 = (x1009&((x1010*x1011)<=x1012));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x1014 = INT8_MIN;
	int32_t x1015 = 1844441;
	int16_t x1016 = 224;
	uint32_t t194 = 75U;

    t194 = (x1013&((x1014*x1015)<=x1016));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1021 = INT64_MIN;
	int64_t x1024 = 402125467LL;
	static int64_t t195 = -7047871412153LL;

    t195 = (x1021&((x1022*x1023)<=x1024));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1025 = INT32_MIN;
	int8_t x1027 = INT8_MIN;
	static int8_t x1028 = INT8_MAX;
	int32_t t196 = -6854;

    t196 = (x1025&((x1026*x1027)<=x1028));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1037 = INT32_MAX;
	int32_t x1038 = -29059;
	int16_t x1039 = INT16_MIN;

    t197 = (x1037&((x1038*x1039)<=x1040));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1047 = UINT64_MAX;
	int64_t x1048 = -1LL;
	int64_t t198 = 504LL;

    t198 = (x1045&((x1046*x1047)<=x1048));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1049 = UINT64_MAX;
	int32_t x1050 = INT32_MIN;
	int64_t x1052 = -1940862760615393LL;
	uint64_t t199 = 8532298841955318LLU;

    t199 = (x1049&((x1050*x1051)<=x1052));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

