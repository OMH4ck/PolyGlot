
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

static int64_t x4 = 717139933LL;
static int8_t x10 = -1;
volatile int32_t x14 = -4390701;
volatile int32_t x15 = INT32_MIN;
volatile int32_t t3 = 1821982;
static uint8_t x18 = 116U;
static uint32_t x19 = UINT32_MAX;
static int32_t t5 = -25899;
int8_t x28 = INT8_MAX;
int8_t x34 = 0;
volatile int64_t x36 = 1433829053122613385LL;
volatile uint8_t x40 = 7U;
int16_t x47 = INT16_MAX;
int8_t x52 = INT8_MIN;
uint16_t x56 = UINT16_MAX;
uint32_t x57 = 3960235U;
static volatile int32_t t16 = -24046;
uint16_t x71 = 394U;
volatile int32_t x79 = INT32_MAX;
static int16_t x82 = 469;
int16_t x87 = -1;
static int64_t x90 = INT64_MIN;
volatile uint16_t x92 = 286U;
int64_t x94 = -127117568352010LL;
int64_t x101 = 537LL;
static int64_t x103 = -1LL;
volatile uint16_t x113 = 93U;
volatile int8_t x125 = INT8_MAX;
static uint32_t x128 = UINT32_MAX;
static int64_t x134 = 4LL;
int32_t t34 = -1908;
static int64_t x156 = -1LL;
int32_t x159 = INT32_MIN;
int32_t t40 = 110;
static int8_t x167 = INT8_MAX;
uint64_t x169 = UINT64_MAX;
static int32_t x175 = -1;
int32_t t44 = 147589;
volatile uint16_t x181 = UINT16_MAX;
volatile int32_t t47 = -4001034;
uint16_t x195 = UINT16_MAX;
static int16_t x199 = -43;
int8_t x203 = INT8_MIN;
uint8_t x209 = UINT8_MAX;
uint32_t x214 = UINT32_MAX;
int8_t x219 = INT8_MIN;
static int32_t x224 = INT32_MIN;
static volatile int16_t x230 = -1;
uint8_t x234 = 2U;
int8_t x236 = -1;
uint32_t x240 = UINT32_MAX;
int8_t x242 = -13;
static int8_t x248 = -1;
int32_t t61 = 49762;
int64_t x250 = -1LL;
uint64_t x253 = 1405630584391LLU;
volatile int32_t x258 = INT32_MAX;
int16_t x260 = INT16_MAX;
volatile uint16_t x263 = UINT16_MAX;
int16_t x264 = INT16_MIN;
volatile int8_t x266 = 0;
int16_t x267 = 7;
volatile int64_t x270 = INT64_MAX;
int8_t x276 = -1;
uint16_t x280 = UINT16_MAX;
volatile int32_t t69 = 566089;
uint32_t x288 = UINT32_MAX;
int16_t x290 = -10;
uint64_t x291 = UINT64_MAX;
static int32_t t73 = 360091;
int64_t x319 = -903994LL;
uint16_t x320 = UINT16_MAX;
static volatile int32_t t79 = -29;
uint64_t x329 = 92897899832469LLU;
volatile int16_t x344 = INT16_MAX;
int64_t x351 = INT64_MAX;
int16_t x358 = -1;
int32_t x365 = INT32_MAX;
volatile int8_t x373 = 0;
int32_t x374 = 943248;
static volatile int32_t t93 = -9938;
int16_t x382 = INT16_MIN;
volatile int16_t x385 = -140;
int32_t x388 = 892866;
volatile int64_t x391 = INT64_MAX;
int16_t x392 = -1;
int64_t x394 = INT64_MIN;
volatile int16_t x404 = -208;
int8_t x405 = -1;
static uint8_t x407 = 3U;
int32_t x409 = INT32_MIN;
volatile int32_t t102 = 67;
int64_t x413 = -11352LL;
int16_t x414 = 25;
int32_t x424 = INT32_MAX;
volatile int64_t x435 = -15434262264364LL;
volatile int32_t t109 = -2961;
static int16_t x444 = -1;
static volatile uint16_t x447 = 3196U;
uint64_t x448 = 97532LLU;
int64_t x449 = 119069266LL;
volatile uint32_t x455 = UINT32_MAX;
int64_t x456 = -1LL;
int8_t x458 = -5;
int8_t x464 = INT8_MAX;
uint16_t x470 = 0U;
static int64_t x472 = INT64_MIN;
volatile int32_t t117 = 107207444;
int32_t x482 = 392348;
uint8_t x484 = 108U;
int8_t x487 = INT8_MIN;
int64_t x488 = INT64_MAX;
volatile uint8_t x491 = UINT8_MAX;
volatile int32_t x494 = -1911908;
volatile int32_t x495 = INT32_MIN;
volatile int16_t x497 = -1;
static uint8_t x518 = UINT8_MAX;
static uint32_t x519 = 3807U;
volatile uint32_t x525 = 79272452U;
volatile int32_t t131 = 25;
volatile int32_t t132 = -476;
volatile int32_t x533 = -10543555;
static uint64_t x534 = UINT64_MAX;
static int16_t x535 = -1;
int8_t x539 = -1;
int32_t t134 = -1620484;
int64_t x543 = INT64_MAX;
volatile int64_t x544 = -1LL;
int32_t t137 = 401383735;
volatile int8_t x559 = INT8_MIN;
static volatile int32_t t139 = 1;
int8_t x561 = -1;
int8_t x566 = INT8_MAX;
int8_t x573 = INT8_MIN;
uint8_t x585 = 0U;
uint32_t x599 = 6647U;
static int8_t x601 = 0;
int32_t x615 = 874336459;
static uint8_t x618 = 18U;
int32_t x633 = INT32_MIN;
uint64_t x637 = 3327469842LLU;
uint64_t x641 = 4LLU;
static int16_t x642 = INT16_MIN;
int16_t x646 = INT16_MIN;
uint32_t x652 = 95U;
int32_t x660 = -244631218;
volatile int32_t t163 = 55;
int8_t x664 = INT8_MIN;
int8_t x667 = 18;
uint64_t x670 = 117799266935LLU;
volatile int32_t t166 = 12;
volatile uint64_t x675 = 17797443181064LLU;
static int64_t x676 = INT64_MIN;
int32_t x681 = 1;
int16_t x686 = INT16_MIN;
int8_t x693 = 8;
volatile int16_t x697 = 1;
int16_t x705 = 33;
uint8_t x708 = 0U;
static int16_t x712 = -1;
static volatile int32_t t175 = 99273208;
int16_t x717 = 1;
static uint32_t x721 = 408210864U;
static int32_t x723 = 2492918;
uint8_t x730 = UINT8_MAX;
static volatile int32_t t180 = 624;
int32_t x735 = -1;
int32_t x736 = -1;
volatile int16_t x738 = -1;
int32_t t183 = -3285682;
int64_t x757 = INT64_MIN;
uint32_t x769 = 3701595U;
uint8_t x771 = UINT8_MAX;
int32_t x775 = 273;
volatile int32_t t190 = 1858854;
uint64_t x777 = 361282680LLU;
uint64_t x779 = 426249LLU;
int32_t t192 = 244729913;
volatile int64_t x786 = INT64_MIN;
int64_t x790 = -1LL;
volatile int32_t t194 = -28;
volatile int32_t x793 = -5104369;
static int8_t x796 = -1;
int32_t t195 = 21237437;
int32_t x800 = 394;
int8_t x801 = INT8_MIN;
static int8_t x804 = INT8_MAX;
int64_t x810 = INT64_MIN;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = -1LL;
	int32_t t0 = -7;

    t0 = (x1==((x2%x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static uint64_t x6 = UINT64_MAX;
	volatile int64_t x7 = INT64_MIN;
	int16_t x8 = 13049;
	int32_t t1 = 0;

    t1 = (x5==((x6%x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -15337699966956LL;
	uint64_t x11 = 515LLU;
	int32_t x12 = -383;
	volatile int32_t t2 = 29904;

    t2 = (x9==((x10%x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static uint32_t x16 = 601152933U;

    t3 = (x13==((x14%x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 61U;
	volatile int8_t x20 = 1;
	int32_t t4 = 248;

    t4 = (x17==((x18%x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 404LLU;
	int32_t x22 = INT32_MAX;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;

    t5 = (x21==((x22%x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint8_t x26 = 106U;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = 395259559;

    t6 = (x25==((x26%x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 201U;
	int64_t x30 = 2LL;
	static volatile int16_t x31 = -2276;
	int16_t x32 = -1;
	volatile int32_t t7 = 4781;

    t7 = (x29==((x30%x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 116255U;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 71321;

    t8 = (x33==((x34%x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int8_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	static int32_t t9 = -1;

    t9 = (x37==((x38%x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int16_t x42 = 1;
	static volatile uint64_t x43 = 145LLU;
	static int64_t x44 = -32LL;
	volatile int32_t t10 = 8960;

    t10 = (x41==((x42%x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 3;
	uint32_t x46 = UINT32_MAX;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 9519;

    t11 = (x45==((x46%x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t t12 = 3194098;

    t12 = (x49==((x50%x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1560U;
	volatile int16_t x54 = INT16_MIN;
	static uint16_t x55 = UINT16_MAX;
	volatile int32_t t13 = 6;

    t13 = (x53==((x54%x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 7U;
	volatile uint64_t x60 = 4969615636821LLU;
	int32_t t14 = 0;

    t14 = (x57==((x58%x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -3;
	volatile int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 12809437159LLU;
	volatile int32_t t15 = 52;

    t15 = (x61==((x62%x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	int64_t x66 = -3896028LL;
	int32_t x67 = 3169536;
	volatile uint8_t x68 = 0U;

    t16 = (x65==((x66%x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	static int8_t x72 = INT8_MIN;
	int32_t t17 = 1;

    t17 = (x69==((x70%x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 21244874381377LLU;
	uint64_t x74 = 1405563994520LLU;
	uint64_t x75 = 139522155536LLU;
	int64_t x76 = INT64_MIN;
	int32_t t18 = 372;

    t18 = (x73==((x74%x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	int32_t x78 = -1;
	static volatile int64_t x80 = 1659LL;
	int32_t t19 = -52614;

    t19 = (x77==((x78%x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 1;
	int32_t x83 = 13162381;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = 2092292;

    t20 = (x81==((x82%x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 48310U;
	uint32_t x86 = 16029U;
	int8_t x88 = -1;
	int32_t t21 = 308352;

    t21 = (x85==((x86%x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x91 = -864;
	volatile int32_t t22 = -12568496;

    t22 = (x89==((x90%x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -184;
	uint32_t x95 = 3761128U;
	uint8_t x96 = 9U;
	int32_t t23 = -54;

    t23 = (x93==((x94%x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 1782;
	int16_t x98 = INT16_MAX;
	static uint8_t x99 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = 880936;

    t24 = (x97==((x98%x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -736286673;

    t25 = (x101==((x102%x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 0U;
	int8_t x106 = 0;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	static int32_t t26 = -88874;

    t26 = (x105==((x106%x107)^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = 23U;
	int32_t x110 = INT32_MIN;
	volatile uint16_t x111 = 735U;
	volatile uint64_t x112 = 3557879LLU;
	static int32_t t27 = -124;

    t27 = (x109==((x110%x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = 18U;
	volatile uint8_t x115 = UINT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 1;

    t28 = (x113==((x114%x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint64_t x118 = 68084348064425781LLU;
	int16_t x119 = INT16_MAX;
	uint32_t x120 = 3192U;
	volatile int32_t t29 = 3990;

    t29 = (x117==((x118%x119)^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 13U;
	volatile int64_t x122 = INT64_MAX;
	int64_t x123 = -1LL;
	int32_t x124 = 81;
	int32_t t30 = 116135755;

    t30 = (x121==((x122%x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	int32_t t31 = -6;

    t31 = (x125==((x126%x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 1U;
	static volatile int32_t x130 = 2284;
	uint64_t x131 = 264605729965LLU;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -588;

    t32 = (x129==((x130%x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	static int8_t x135 = 1;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -15141;

    t33 = (x133==((x134%x135)^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MAX;
	int64_t x138 = 1253587320LL;
	uint64_t x139 = 7303531675LLU;
	uint8_t x140 = UINT8_MAX;

    t34 = (x137==((x138%x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	int64_t x142 = 113162502601996092LL;
	int8_t x143 = -1;
	volatile int32_t x144 = -1170;
	volatile int32_t t35 = -253;

    t35 = (x141==((x142%x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MIN;
	uint64_t x146 = 9957161901785925LLU;
	uint32_t x147 = 1268U;
	static uint32_t x148 = 1493545356U;
	int32_t t36 = 0;

    t36 = (x145==((x146%x147)^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = 8270;
	int8_t x150 = INT8_MIN;
	int32_t x151 = 7264439;
	uint16_t x152 = 53U;
	int32_t t37 = 2963;

    t37 = (x149==((x150%x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	static uint8_t x154 = 4U;
	uint32_t x155 = 12354U;
	static int32_t t38 = 1737;

    t38 = (x153==((x154%x155)^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int16_t x158 = -1;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 422;

    t39 = (x157==((x158%x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MIN;
	uint8_t x162 = 6U;
	int8_t x163 = -1;
	uint64_t x164 = UINT64_MAX;

    t40 = (x161==((x162%x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x166 = 121;
	volatile int64_t x168 = INT64_MIN;
	int32_t t41 = 132165085;

    t41 = (x165==((x166%x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = -1;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -52982131;

    t42 = (x169==((x170%x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -5;

    t43 = (x173==((x174%x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1361057592117LL;
	static uint32_t x178 = UINT32_MAX;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int32_t x180 = INT32_MAX;

    t44 = (x177==((x178%x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	int32_t t45 = 162;

    t45 = (x181==((x182%x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 91207999127711482LLU;
	int64_t x186 = INT64_MIN;
	int64_t x187 = -6LL;
	static int32_t x188 = INT32_MIN;
	static int32_t t46 = 34596;

    t46 = (x185==((x186%x187)^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = -13631174076826LL;
	static uint8_t x190 = 67U;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MIN;

    t47 = (x189==((x190%x191)^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 2;
	int16_t x194 = INT16_MIN;
	uint64_t x196 = 102934LLU;
	static int32_t t48 = 41126;

    t48 = (x193==((x194%x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 795375632U;
	uint16_t x198 = 48U;
	int32_t x200 = 30;
	int32_t t49 = 6;

    t49 = (x197==((x198%x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	int64_t x204 = -234543006795LL;
	int32_t t50 = 251;

    t50 = (x201==((x202%x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x206 = -1;
	int32_t x207 = INT32_MAX;
	int8_t x208 = 57;
	int32_t t51 = -31004460;

    t51 = (x205==((x206%x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -1;

    t52 = (x209==((x210%x211)^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint16_t x215 = UINT16_MAX;
	static int32_t x216 = INT32_MIN;
	int32_t t53 = -8270652;

    t53 = (x213==((x214%x215)^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MAX;
	volatile int32_t x220 = -1;
	static volatile int32_t t54 = -808150;

    t54 = (x217==((x218%x219)^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x221 = 190929665532LLU;
	int8_t x222 = -1;
	int32_t x223 = -213;
	int32_t t55 = 0;

    t55 = (x221==((x222%x223)^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	uint16_t x226 = 67U;
	int16_t x227 = 8;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 72942;

    t56 = (x225==((x226%x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -243;
	static int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -16153749;

    t57 = (x229==((x230%x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	volatile int32_t t58 = 2462212;

    t58 = (x233==((x234%x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	int16_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	volatile int32_t t59 = -137533565;

    t59 = (x237==((x238%x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MAX;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 11228933LLU;
	int32_t t60 = -20264;

    t60 = (x241==((x242%x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -2;

    t61 = (x245==((x246%x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	static volatile int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	static int32_t t62 = 1224;

    t62 = (x249==((x250%x251)^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MAX;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -1LL;
	int32_t t63 = 418109325;

    t63 = (x253==((x254%x255)^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = -1;
	uint32_t x259 = 1832758817U;
	static int32_t t64 = 4;

    t64 = (x257==((x258%x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	static int32_t x262 = INT32_MAX;
	volatile int32_t t65 = -1;

    t65 = (x261==((x262%x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	volatile uint64_t x268 = 5780023033273LLU;
	volatile int32_t t66 = -235;

    t66 = (x265==((x266%x267)^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x271 = 45658399205535197LLU;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 3772;

    t67 = (x269==((x270%x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -4246;
	static int32_t t68 = 6;

    t68 = (x273==((x274%x275)^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	uint32_t x278 = 117598U;
	uint16_t x279 = UINT16_MAX;

    t69 = (x277==((x278%x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	static uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 342013LLU;
	int32_t t70 = 9250;

    t70 = (x281==((x282%x283)^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 49U;
	volatile int64_t x286 = -1LL;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = -1;

    t71 = (x285==((x286%x287)^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 61807684;

    t72 = (x289==((x290%x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 193;
	static int16_t x294 = INT16_MAX;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 45551381560393LLU;

    t73 = (x293==((x294%x295)^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 55545;
	uint32_t x298 = 16920U;
	volatile int64_t x299 = INT64_MIN;
	uint16_t x300 = 3U;
	volatile int32_t t74 = 1289;

    t74 = (x297==((x298%x299)^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 0;
	int64_t x302 = -2942341397240273754LL;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 740;

    t75 = (x301==((x302%x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	static int16_t x306 = 5052;
	static int16_t x307 = -55;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -15600044;

    t76 = (x305==((x306%x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x309 = 15LLU;
	uint64_t x310 = 0LLU;
	static int64_t x311 = -1LL;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -14866758;

    t77 = (x309==((x310%x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = 2;
	int64_t x315 = -1LL;
	int32_t x316 = -1;
	volatile int32_t t78 = -15116966;

    t78 = (x313==((x314%x315)^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x317 = 0U;
	volatile int32_t x318 = INT32_MIN;

    t79 = (x317==((x318%x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = 6U;
	int64_t x322 = -724LL;
	uint8_t x323 = 20U;
	static int16_t x324 = -1;
	volatile int32_t t80 = -6;

    t80 = (x321==((x322%x323)^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = 27;
	static volatile uint32_t x328 = 1616280717U;
	static int32_t t81 = -306879051;

    t81 = (x325==((x326%x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -1LL;
	int32_t x331 = 31;
	static volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -16159;

    t82 = (x329==((x330%x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	uint16_t x335 = 665U;
	uint16_t x336 = 21U;
	volatile int32_t t83 = 358763;

    t83 = (x333==((x334%x335)^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 17U;
	static int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static uint64_t x340 = 323525LLU;
	static int32_t t84 = -116654382;

    t84 = (x337==((x338%x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -59;
	int32_t x342 = INT32_MAX;
	uint64_t x343 = 23501LLU;
	int32_t t85 = -154;

    t85 = (x341==((x342%x343)^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 61U;
	int8_t x346 = 33;
	static uint32_t x347 = 6003U;
	static volatile int16_t x348 = INT16_MAX;
	int32_t t86 = -87912864;

    t86 = (x345==((x346%x347)^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	volatile uint16_t x350 = 2U;
	int8_t x352 = -3;
	volatile int32_t t87 = -1000159876;

    t87 = (x349==((x350%x351)^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 168U;
	volatile uint16_t x354 = 918U;
	static int16_t x355 = -1;
	uint64_t x356 = 9LLU;
	int32_t t88 = 384;

    t88 = (x353==((x354%x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = UINT64_MAX;
	static int32_t x359 = -1;
	uint32_t x360 = 7U;
	int32_t t89 = 104624;

    t89 = (x357==((x358%x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	static int64_t x362 = 124537781128391691LL;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -16931;

    t90 = (x361==((x362%x363)^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = -1LL;
	uint8_t x367 = 17U;
	uint64_t x368 = 39914490LLU;
	int32_t t91 = 0;

    t91 = (x365==((x366%x367)^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint8_t x370 = 3U;
	static volatile int64_t x371 = INT64_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -425;

    t92 = (x369==((x370%x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x375 = 2;
	volatile int64_t x376 = -1LL;

    t93 = (x373==((x374%x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 12U;
	static uint32_t x378 = UINT32_MAX;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = -91781769;

    t94 = (x377==((x378%x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	volatile int32_t x383 = INT32_MAX;
	uint8_t x384 = 1U;
	volatile int32_t t95 = 14786;

    t95 = (x381==((x382%x383)^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -8;
	uint16_t x387 = UINT16_MAX;
	int32_t t96 = -175782;

    t96 = (x385==((x386%x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	uint64_t x390 = 6270LLU;
	volatile int32_t t97 = 38;

    t97 = (x389==((x390%x391)^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = -2;
	static volatile int32_t t98 = 51;

    t98 = (x393==((x394%x395)^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = -15;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -126;

    t99 = (x397==((x398%x399)^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	uint32_t x402 = 18322U;
	static int32_t x403 = INT32_MIN;
	int32_t t100 = 96697525;

    t100 = (x401==((x402%x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = UINT32_MAX;
	uint32_t x408 = 593U;
	int32_t t101 = -1;

    t101 = (x405==((x406%x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x410 = 10U;
	int32_t x411 = 43108940;
	uint32_t x412 = UINT32_MAX;

    t102 = (x409==((x410%x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x415 = -1;
	uint16_t x416 = 1482U;
	int32_t t103 = 22607;

    t103 = (x413==((x414%x415)^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	int32_t x418 = INT32_MIN;
	static uint16_t x419 = UINT16_MAX;
	uint16_t x420 = 9979U;
	int32_t t104 = 4;

    t104 = (x417==((x418%x419)^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MIN;
	uint8_t x422 = 2U;
	int64_t x423 = 224442LL;
	int32_t t105 = -428498858;

    t105 = (x421==((x422%x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	static volatile int64_t x426 = INT64_MIN;
	static int64_t x427 = INT64_MIN;
	static uint64_t x428 = UINT64_MAX;
	volatile int32_t t106 = -424;

    t106 = (x425==((x426%x427)^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 312298657U;
	int8_t x430 = INT8_MIN;
	volatile uint32_t x431 = 1009133186U;
	uint8_t x432 = 17U;
	static int32_t t107 = 473092;

    t107 = (x429==((x430%x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = -1;
	volatile uint8_t x434 = 4U;
	volatile uint8_t x436 = UINT8_MAX;
	int32_t t108 = -117;

    t108 = (x433==((x434%x435)^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 477LLU;
	int64_t x440 = 592495723199416348LL;

    t109 = (x437==((x438%x439)^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MAX;
	static int32_t t110 = -36270406;

    t110 = (x441==((x442%x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 0U;
	int32_t x446 = INT32_MAX;
	int32_t t111 = 1704;

    t111 = (x445==((x446%x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = 50;
	static uint64_t x451 = 720755765913948LLU;
	int16_t x452 = 3;
	volatile int32_t t112 = -31680;

    t112 = (x449==((x450%x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MIN;
	int32_t x454 = INT32_MIN;
	int32_t t113 = 9956;

    t113 = (x453==((x454%x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	uint64_t x459 = 8890353LLU;
	int64_t x460 = -200789LL;
	int32_t t114 = 96778;

    t114 = (x457==((x458%x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	int8_t x462 = -1;
	uint8_t x463 = UINT8_MAX;
	volatile int32_t t115 = 57908671;

    t115 = (x461==((x462%x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = INT32_MIN;
	static int8_t x466 = INT8_MIN;
	static int8_t x467 = -14;
	int16_t x468 = INT16_MIN;
	int32_t t116 = 20470342;

    t116 = (x465==((x466%x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	volatile uint64_t x471 = 1002292627952216686LLU;

    t117 = (x469==((x470%x471)^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 20LL;
	int64_t x474 = INT64_MIN;
	int8_t x475 = -1;
	static int8_t x476 = 23;
	int32_t t118 = -13396;

    t118 = (x473==((x474%x475)^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 168465433742041990LL;
	int64_t x478 = INT64_MAX;
	int8_t x479 = INT8_MIN;
	int32_t x480 = -30;
	int32_t t119 = 257409;

    t119 = (x477==((x478%x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 445640;
	int16_t x483 = -793;
	static int32_t t120 = -28;

    t120 = (x481==((x482%x483)^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int64_t x486 = INT64_MAX;
	static volatile int32_t t121 = -268273866;

    t121 = (x485==((x486%x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x489 = INT8_MIN;
	uint8_t x490 = UINT8_MAX;
	uint32_t x492 = 2U;
	int32_t t122 = -22;

    t122 = (x489==((x490%x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	static uint16_t x496 = 0U;
	int32_t t123 = 115493585;

    t123 = (x493==((x494%x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x498 = 505043LLU;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = 2141459;

    t124 = (x497==((x498%x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 3865LLU;
	uint64_t x502 = 7317754334467408553LLU;
	int32_t x503 = INT32_MAX;
	int64_t x504 = INT64_MIN;
	int32_t t125 = 232252811;

    t125 = (x501==((x502%x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = -17;
	static int64_t x506 = 54120934630LL;
	volatile int32_t x507 = INT32_MIN;
	uint8_t x508 = 18U;
	volatile int32_t t126 = -199044452;

    t126 = (x505==((x506%x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MAX;
	int32_t x511 = INT32_MAX;
	static int8_t x512 = 3;
	volatile int32_t t127 = 146902630;

    t127 = (x509==((x510%x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	int8_t x514 = -3;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = UINT16_MAX;
	int32_t t128 = 0;

    t128 = (x513==((x514%x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 1481LLU;
	int64_t x520 = INT64_MIN;
	volatile int32_t t129 = -677986;

    t129 = (x517==((x518%x519)^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = INT8_MAX;
	uint8_t x522 = 100U;
	static int16_t x523 = -26;
	int64_t x524 = INT64_MIN;
	int32_t t130 = 46538;

    t130 = (x521==((x522%x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x526 = INT64_MIN;
	volatile uint64_t x527 = 407218065LLU;
	int32_t x528 = -1;

    t131 = (x525==((x526%x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x529 = INT16_MAX;
	volatile uint32_t x530 = 2937204U;
	volatile int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MIN;

    t132 = (x529==((x530%x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x536 = INT64_MAX;
	volatile int32_t t133 = 629;

    t133 = (x533==((x534%x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint8_t x538 = 2U;
	int8_t x540 = -1;

    t134 = (x537==((x538%x539)^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = -93;
	volatile int16_t x542 = INT16_MIN;
	static int32_t t135 = 7;

    t135 = (x541==((x542%x543)^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MIN;
	static int16_t x546 = -336;
	int32_t x547 = 7894958;
	volatile int32_t x548 = INT32_MIN;
	int32_t t136 = 807869;

    t136 = (x545==((x546%x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = 948;
	int32_t x550 = -1;
	uint64_t x551 = UINT64_MAX;
	static volatile int32_t x552 = 677332;

    t137 = (x549==((x550%x551)^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 460528240U;
	int32_t x554 = 3;
	volatile int8_t x555 = -1;
	uint8_t x556 = 70U;
	static volatile int32_t t138 = 7501;

    t138 = (x553==((x554%x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	static uint16_t x558 = 4U;
	volatile uint16_t x560 = 214U;

    t139 = (x557==((x558%x559)^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x562 = UINT16_MAX;
	static int64_t x563 = INT64_MIN;
	volatile int16_t x564 = INT16_MIN;
	int32_t t140 = -146702;

    t140 = (x561==((x562%x563)^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x565 = UINT32_MAX;
	static uint64_t x567 = UINT64_MAX;
	int64_t x568 = 31874721LL;
	volatile int32_t t141 = 42940679;

    t141 = (x565==((x566%x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x569 = 124126233345LLU;
	int64_t x570 = 15388299382192532LL;
	uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MAX;
	int32_t t142 = -851207988;

    t142 = (x569==((x570%x571)^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = 173969272171332LLU;
	static volatile int64_t x575 = INT64_MAX;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 2166;

    t143 = (x573==((x574%x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x578 = 68LL;
	static int64_t x579 = 4824LL;
	int32_t x580 = INT32_MIN;
	volatile int32_t t144 = 11;

    t144 = (x577==((x578%x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 22U;
	int8_t x582 = -49;
	volatile uint32_t x583 = 25555U;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = -61497;

    t145 = (x581==((x582%x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = 3U;
	int8_t x587 = INT8_MIN;
	int64_t x588 = INT64_MIN;
	int32_t t146 = 168912003;

    t146 = (x585==((x586%x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 52997U;
	int8_t x590 = INT8_MIN;
	int8_t x591 = -1;
	int8_t x592 = INT8_MIN;
	volatile int32_t t147 = -13187;

    t147 = (x589==((x590%x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	uint16_t x594 = UINT16_MAX;
	int16_t x595 = INT16_MAX;
	volatile uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = -139726;

    t148 = (x593==((x594%x595)^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -492137623LL;
	int32_t x598 = -1;
	uint16_t x600 = 1U;
	volatile int32_t t149 = -31060;

    t149 = (x597==((x598%x599)^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x602 = 3U;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -62621;

    t150 = (x601==((x602%x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x609 = 98;
	volatile int64_t x610 = 17LL;
	int64_t x611 = INT64_MIN;
	int16_t x612 = INT16_MIN;
	static volatile int32_t t151 = -68;

    t151 = (x609==((x610%x611)^x612));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x613 = -1;
	int8_t x614 = INT8_MIN;
	static volatile uint64_t x616 = 3567LLU;
	int32_t t152 = 217;

    t152 = (x613==((x614%x615)^x616));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x617 = 12918294718938LL;
	int8_t x619 = -3;
	volatile uint16_t x620 = UINT16_MAX;
	int32_t t153 = -1792028;

    t153 = (x617==((x618%x619)^x620));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x621 = -30214931;
	int64_t x622 = INT64_MAX;
	static uint8_t x623 = UINT8_MAX;
	static volatile uint8_t x624 = UINT8_MAX;
	volatile int32_t t154 = -15492;

    t154 = (x621==((x622%x623)^x624));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x625 = 1662;
	volatile int32_t x626 = -1913355;
	static uint8_t x627 = 68U;
	static int8_t x628 = -3;
	int32_t t155 = -1605;

    t155 = (x625==((x626%x627)^x628));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x629 = 0U;
	int64_t x630 = INT64_MIN;
	static volatile uint8_t x631 = 2U;
	uint32_t x632 = 108007484U;
	int32_t t156 = -564;

    t156 = (x629==((x630%x631)^x632));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x634 = UINT32_MAX;
	int8_t x635 = 32;
	uint16_t x636 = 377U;
	volatile int32_t t157 = -15598846;

    t157 = (x633==((x634%x635)^x636));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x638 = UINT32_MAX;
	uint64_t x639 = 9428LLU;
	int16_t x640 = INT16_MIN;
	volatile int32_t t158 = -9434;

    t158 = (x637==((x638%x639)^x640));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x643 = INT64_MIN;
	static uint16_t x644 = 26718U;
	int32_t t159 = -96862;

    t159 = (x641==((x642%x643)^x644));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x645 = 15898050140343LLU;
	volatile uint32_t x647 = 11323940U;
	volatile uint64_t x648 = 28849976206947994LLU;
	int32_t t160 = -165835992;

    t160 = (x645==((x646%x647)^x648));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MIN;
	uint64_t x651 = 2942574LLU;
	volatile int32_t t161 = -8;

    t161 = (x649==((x650%x651)^x652));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x653 = 389;
	int32_t x654 = INT32_MAX;
	int16_t x655 = -1;
	uint32_t x656 = 20214U;
	static volatile int32_t t162 = 1057857312;

    t162 = (x653==((x654%x655)^x656));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x657 = 24;
	uint16_t x658 = UINT16_MAX;
	volatile uint8_t x659 = UINT8_MAX;

    t163 = (x657==((x658%x659)^x660));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x661 = -1;
	int16_t x662 = 3;
	uint64_t x663 = UINT64_MAX;
	volatile int32_t t164 = -246388;

    t164 = (x661==((x662%x663)^x664));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x665 = INT64_MAX;
	volatile int8_t x666 = -1;
	static int8_t x668 = -1;
	int32_t t165 = 876;

    t165 = (x665==((x666%x667)^x668));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x669 = 6578436130685498LLU;
	int32_t x671 = 912;
	uint64_t x672 = 5836412LLU;

    t166 = (x669==((x670%x671)^x672));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x673 = INT32_MAX;
	static int16_t x674 = 247;
	int32_t t167 = -3694;

    t167 = (x673==((x674%x675)^x676));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x677 = 37672091358LLU;
	int64_t x678 = -1LL;
	int8_t x679 = -1;
	int32_t x680 = -20595;
	int32_t t168 = -1002;

    t168 = (x677==((x678%x679)^x680));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x682 = -30139269;
	uint8_t x683 = 11U;
	uint32_t x684 = UINT32_MAX;
	int32_t t169 = 26313;

    t169 = (x681==((x682%x683)^x684));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x685 = INT8_MIN;
	static int8_t x687 = 12;
	uint16_t x688 = 2U;
	volatile int32_t t170 = 5486179;

    t170 = (x685==((x686%x687)^x688));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x689 = INT8_MIN;
	int16_t x690 = -1;
	int16_t x691 = -1;
	static int64_t x692 = -1LL;
	volatile int32_t t171 = -12440;

    t171 = (x689==((x690%x691)^x692));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x694 = -1;
	int8_t x695 = -14;
	static uint64_t x696 = 517700070166430290LLU;
	static int32_t t172 = 10;

    t172 = (x693==((x694%x695)^x696));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x698 = INT32_MAX;
	uint64_t x699 = 3007802874850798LLU;
	static uint8_t x700 = 56U;
	static int32_t t173 = 8845;

    t173 = (x697==((x698%x699)^x700));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x706 = INT32_MIN;
	int32_t x707 = -178826;
	int32_t t174 = -18;

    t174 = (x705==((x706%x707)^x708));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x709 = -1;
	static uint8_t x710 = 1U;
	static int8_t x711 = INT8_MIN;

    t175 = (x709==((x710%x711)^x712));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x713 = 36U;
	volatile uint32_t x714 = 2U;
	uint64_t x715 = 76730718985476430LLU;
	int8_t x716 = -1;
	volatile int32_t t176 = 0;

    t176 = (x713==((x714%x715)^x716));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x718 = INT8_MIN;
	uint8_t x719 = 11U;
	uint8_t x720 = 3U;
	int32_t t177 = 224475;

    t177 = (x717==((x718%x719)^x720));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x722 = 935760551764382LLU;
	static int16_t x724 = INT16_MIN;
	static volatile int32_t t178 = 146089790;

    t178 = (x721==((x722%x723)^x724));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MAX;
	static uint64_t x726 = 7358347239170LLU;
	static int8_t x727 = INT8_MAX;
	uint32_t x728 = 15917U;
	volatile int32_t t179 = -9697684;

    t179 = (x725==((x726%x727)^x728));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x729 = -1LL;
	uint8_t x731 = 14U;
	volatile int8_t x732 = INT8_MAX;

    t180 = (x729==((x730%x731)^x732));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x733 = 8;
	uint8_t x734 = 1U;
	volatile int32_t t181 = -2971;

    t181 = (x733==((x734%x735)^x736));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x737 = -1LL;
	uint32_t x739 = 5U;
	int64_t x740 = INT64_MIN;
	volatile int32_t t182 = 0;

    t182 = (x737==((x738%x739)^x740));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x741 = 3;
	int16_t x742 = -1;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = INT32_MAX;

    t183 = (x741==((x742%x743)^x744));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x745 = INT64_MAX;
	uint32_t x746 = 740625887U;
	uint64_t x747 = 3896LLU;
	static int16_t x748 = INT16_MAX;
	volatile int32_t t184 = -12255;

    t184 = (x745==((x746%x747)^x748));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x749 = 3228;
	int8_t x750 = 3;
	int32_t x751 = INT32_MIN;
	int16_t x752 = -130;
	static int32_t t185 = 3315462;

    t185 = (x749==((x750%x751)^x752));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x758 = UINT64_MAX;
	int32_t x759 = INT32_MIN;
	volatile int32_t x760 = -3;
	volatile int32_t t186 = -486194;

    t186 = (x757==((x758%x759)^x760));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x761 = 59U;
	int32_t x762 = INT32_MIN;
	uint8_t x763 = 8U;
	int8_t x764 = INT8_MAX;
	volatile int32_t t187 = -1;

    t187 = (x761==((x762%x763)^x764));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x765 = 0U;
	volatile int16_t x766 = -3114;
	volatile int32_t x767 = -1;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t188 = 180;

    t188 = (x765==((x766%x767)^x768));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x770 = 8248120U;
	static uint64_t x772 = UINT64_MAX;
	volatile int32_t t189 = 11653972;

    t189 = (x769==((x770%x771)^x772));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MIN;
	static volatile int16_t x776 = INT16_MIN;

    t190 = (x773==((x774%x775)^x776));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x778 = INT8_MIN;
	static int16_t x780 = INT16_MIN;
	static int32_t t191 = 15074738;

    t191 = (x777==((x778%x779)^x780));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x781 = 10896;
	uint16_t x782 = UINT16_MAX;
	uint8_t x783 = UINT8_MAX;
	static int16_t x784 = 7037;

    t192 = (x781==((x782%x783)^x784));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint16_t x785 = 0U;
	int8_t x787 = INT8_MIN;
	volatile int16_t x788 = INT16_MIN;
	int32_t t193 = -837980283;

    t193 = (x785==((x786%x787)^x788));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = INT32_MAX;
	int32_t x791 = INT32_MIN;
	static uint8_t x792 = 110U;

    t194 = (x789==((x790%x791)^x792));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x794 = 439484038354396LL;
	uint8_t x795 = 33U;

    t195 = (x793==((x794%x795)^x796));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = -5;
	volatile uint64_t x799 = UINT64_MAX;
	volatile int32_t t196 = -1;

    t196 = (x797==((x798%x799)^x800));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x802 = UINT8_MAX;
	int16_t x803 = -176;
	volatile int32_t t197 = -18990;

    t197 = (x801==((x802%x803)^x804));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x805 = -25;
	int32_t x806 = INT32_MIN;
	volatile int8_t x807 = INT8_MIN;
	int32_t x808 = 30735;
	volatile int32_t t198 = -83;

    t198 = (x805==((x806%x807)^x808));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x809 = UINT32_MAX;
	static int32_t x811 = -127799968;
	uint8_t x812 = 5U;
	static volatile int32_t t199 = -27;

    t199 = (x809==((x810%x811)^x812));

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

