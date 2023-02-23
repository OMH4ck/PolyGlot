
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

volatile int64_t x1 = INT64_MAX;
int32_t x7 = INT32_MIN;
int32_t t1 = -14542265;
static volatile int8_t x16 = INT8_MIN;
int32_t x20 = INT32_MIN;
int32_t x26 = INT32_MAX;
volatile int32_t t6 = 70;
static int64_t x34 = -1LL;
int16_t x44 = INT16_MAX;
int16_t x47 = 519;
volatile int32_t t11 = 23566;
static volatile uint16_t x54 = UINT16_MAX;
static int8_t x57 = INT8_MAX;
volatile int16_t x64 = INT16_MAX;
int32_t t15 = -14;
int8_t x65 = -1;
int64_t x70 = INT64_MAX;
uint8_t x71 = 60U;
int16_t x75 = 2964;
int32_t x82 = 52;
int32_t t20 = -164252664;
volatile int32_t t23 = 5;
int32_t x97 = -1;
int32_t x99 = INT32_MIN;
volatile int32_t t25 = -569847826;
int64_t x106 = INT64_MAX;
int8_t x112 = INT8_MIN;
static uint32_t x114 = 4198U;
volatile int32_t t30 = -6358400;
int8_t x127 = 1;
uint32_t x129 = 30U;
int16_t x131 = INT16_MIN;
int64_t x133 = 981574818107176457LL;
int32_t t33 = -22;
int16_t x137 = INT16_MIN;
int64_t x138 = INT64_MIN;
volatile int16_t x143 = -1;
static int32_t x146 = -1;
volatile int64_t x156 = INT64_MIN;
int64_t x159 = INT64_MIN;
int32_t x167 = INT32_MIN;
volatile int32_t t41 = -3;
static volatile int64_t x172 = -508023429537454539LL;
int32_t t42 = -266544466;
static int8_t x178 = INT8_MAX;
static volatile uint64_t x180 = 924577533911947497LLU;
volatile int32_t t44 = 17;
int32_t x181 = -442282218;
volatile int32_t x182 = INT32_MAX;
volatile int32_t t45 = 52724;
volatile int8_t x187 = INT8_MIN;
volatile uint64_t x189 = 874345103628396569LLU;
volatile int64_t x192 = -1LL;
int64_t x198 = -1036978LL;
uint64_t x201 = 9393960LLU;
volatile int32_t t50 = 7217;
static int8_t x207 = -1;
int32_t t51 = 999;
static uint32_t x215 = 37283U;
int32_t t53 = 69072637;
uint8_t x224 = UINT8_MAX;
int64_t x234 = -26807LL;
volatile int8_t x235 = INT8_MIN;
static int32_t t58 = -664;
static int64_t x249 = 13064787382LL;
uint32_t x252 = 200855189U;
int16_t x258 = INT16_MAX;
int64_t x265 = -73894LL;
uint8_t x266 = 0U;
static volatile uint8_t x271 = UINT8_MAX;
uint16_t x278 = 285U;
uint64_t x280 = 50LLU;
int32_t t70 = -7;
int32_t x295 = INT32_MIN;
int32_t t72 = -10352164;
int8_t x297 = INT8_MIN;
uint32_t x299 = UINT32_MAX;
volatile int32_t t74 = -87647700;
int32_t t76 = -8899;
uint8_t x313 = 0U;
volatile int8_t x325 = 15;
uint16_t x331 = UINT16_MAX;
int32_t t82 = 40355990;
volatile int32_t t84 = 1116462;
int16_t x346 = -17;
uint8_t x350 = 34U;
int8_t x351 = 41;
int8_t x353 = -5;
volatile int32_t t87 = -1;
volatile uint64_t x370 = UINT64_MAX;
static int16_t x371 = -3;
volatile int8_t x388 = INT8_MIN;
volatile int32_t t95 = -1832583;
uint64_t x389 = 1789519969903316LLU;
int8_t x396 = 2;
volatile int32_t t97 = -384;
static volatile int16_t x404 = INT16_MIN;
static int64_t x405 = -254001LL;
volatile int32_t x412 = 140009266;
static volatile uint8_t x413 = 71U;
uint64_t x415 = 2212525880340LLU;
uint64_t x416 = UINT64_MAX;
int16_t x418 = INT16_MAX;
static int32_t x430 = INT32_MAX;
int8_t x433 = -1;
int8_t x436 = INT8_MIN;
int32_t x447 = -1;
static int16_t x448 = INT16_MIN;
int32_t t111 = -25;
volatile int32_t x453 = 395111223;
uint32_t x455 = UINT32_MAX;
int32_t x460 = INT32_MIN;
int64_t x468 = -1LL;
int8_t x469 = 1;
static int64_t x470 = INT64_MAX;
static int32_t x490 = 6;
volatile int32_t t122 = -7833283;
int32_t x510 = 7689484;
int8_t x511 = INT8_MAX;
volatile uint64_t x519 = 37179LLU;
int16_t x523 = INT16_MAX;
volatile int16_t x527 = INT16_MIN;
volatile int8_t x535 = INT8_MAX;
volatile int8_t x539 = INT8_MIN;
int32_t x551 = INT32_MAX;
int8_t x552 = -1;
volatile int32_t t135 = 123201702;
int16_t x556 = 273;
volatile int64_t x560 = INT64_MIN;
int32_t t139 = 208;
int8_t x570 = -1;
int32_t t141 = 57148;
int32_t x577 = -9513;
int32_t x578 = -100906046;
int32_t t142 = 858;
static int8_t x581 = INT8_MIN;
uint8_t x583 = UINT8_MAX;
volatile int8_t x584 = INT8_MIN;
int32_t t144 = 467304;
uint32_t x591 = 29U;
volatile int32_t t145 = 4518224;
int32_t t146 = 1;
volatile uint32_t x599 = 59064990U;
int8_t x603 = INT8_MIN;
uint32_t x608 = 915116383U;
static uint8_t x609 = 6U;
int16_t x616 = INT16_MIN;
static volatile int32_t x617 = INT32_MAX;
int16_t x623 = 0;
int16_t x626 = -1;
int32_t x640 = INT32_MIN;
static int32_t t157 = -7;
int64_t x646 = -82LL;
uint32_t x655 = 3307U;
uint16_t x660 = 3227U;
int16_t x663 = -4413;
uint8_t x665 = UINT8_MAX;
uint64_t x668 = 46502399498513627LLU;
int16_t x673 = 1;
static int32_t t167 = -222;
int64_t x685 = INT64_MIN;
int64_t x687 = -1LL;
int64_t x688 = -543944161052LL;
int16_t x693 = -1;
int32_t x700 = -162;
int32_t x710 = -491956322;
int32_t x711 = -14748;
int32_t t175 = -6541;
volatile int16_t x714 = INT16_MIN;
volatile int32_t x719 = INT32_MIN;
static int32_t x723 = 3754;
static volatile int32_t t180 = -5678412;
int64_t x735 = -13658255968LL;
volatile uint16_t x739 = UINT16_MAX;
volatile int16_t x741 = -1;
volatile uint16_t x744 = 650U;
int16_t x745 = INT16_MIN;
uint64_t x746 = 516914LLU;
int8_t x753 = INT8_MAX;
int32_t x760 = -3;
volatile int32_t t187 = -5;
int32_t t189 = -13148971;
int64_t x774 = INT64_MIN;
static uint32_t x779 = 10U;
int32_t t192 = -434027982;
uint8_t x783 = UINT8_MAX;
int8_t x790 = INT8_MIN;
volatile int32_t t197 = -11960945;
volatile int16_t x804 = 2759;


void f0(void) {
    	int16_t x2 = -49;
	static int8_t x3 = 0;
	volatile int8_t x4 = INT8_MAX;
	static int32_t t0 = -12184;

    t0 = (x1==((x2&x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 5617;
	static int64_t x6 = INT64_MIN;
	static uint32_t x8 = 288963U;

    t1 = (x5==((x6&x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1037845U;
	int8_t x10 = -3;
	volatile uint32_t x11 = UINT32_MAX;
	static int64_t x12 = -18085001944LL;
	int32_t t2 = 435078228;

    t2 = (x9==((x10&x11)/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 14;
	volatile uint32_t x14 = UINT32_MAX;
	static int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 7893;

    t3 = (x13==((x14&x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	uint16_t x18 = 8U;
	static uint16_t x19 = 2U;
	volatile int32_t t4 = -242;

    t4 = (x17==((x18&x19)/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile uint64_t x22 = 9791630LLU;
	volatile uint16_t x23 = 2437U;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 360148404;

    t5 = (x21==((x22&x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	int16_t x27 = -25;
	static int8_t x28 = INT8_MAX;

    t6 = (x25==((x26&x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -25;
	int16_t x30 = 15;
	static int8_t x31 = -4;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 1;

    t7 = (x29==((x30&x31)/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	int64_t x36 = -1LL;
	int32_t t8 = -19;

    t8 = (x33==((x34&x35)/x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1441;
	volatile int8_t x38 = INT8_MIN;
	volatile int8_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -95;

    t9 = (x37==((x38&x39)/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 5U;
	int64_t x42 = -1LL;
	int64_t x43 = -3928221314446027493LL;
	int32_t t10 = -381485967;

    t10 = (x41==((x42&x43)/x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -1;
	int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MIN;

    t11 = (x45==((x46&x47)/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 142031U;
	static int16_t x50 = -1;
	volatile int32_t x51 = -1;
	volatile int64_t x52 = INT64_MAX;
	int32_t t12 = 975;

    t12 = (x49==((x50&x51)/x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static int64_t x55 = -25LL;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 0;

    t13 = (x53==((x54&x55)/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MAX;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 145;

    t14 = (x57==((x58&x59)/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	volatile int16_t x62 = 102;
	volatile int32_t x63 = -1;

    t15 = (x61==((x62&x63)/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = 948865660076087LL;
	int64_t x67 = INT64_MAX;
	uint16_t x68 = 687U;
	int32_t t16 = 8822635;

    t16 = (x65==((x66&x67)/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x72 = 6;
	static volatile int32_t t17 = -19461479;

    t17 = (x69==((x70&x71)/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -377;
	static uint32_t x74 = UINT32_MAX;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = -471;

    t18 = (x73==((x74&x75)/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MAX;
	static int64_t x80 = -1LL;
	volatile int32_t t19 = -2;

    t19 = (x77==((x78&x79)/x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 0;
	uint32_t x83 = 2966U;
	volatile uint16_t x84 = 459U;

    t20 = (x81==((x82&x83)/x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	uint32_t x86 = 9U;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 0;

    t21 = (x85==((x86&x87)/x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 986382224;

    t22 = (x89==((x90&x91)/x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = -1;
	static int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;

    t23 = (x93==((x94&x95)/x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x98 = 12;
	volatile int64_t x100 = -1LL;
	int32_t t24 = -97934891;

    t24 = (x97==((x98&x99)/x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x101 = 1686LLU;
	uint16_t x102 = 1639U;
	int64_t x103 = -101LL;
	int16_t x104 = INT16_MIN;

    t25 = (x101==((x102&x103)/x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	int64_t x107 = -760712LL;
	int8_t x108 = 1;
	volatile int32_t t26 = -7329;

    t26 = (x105==((x106&x107)/x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	volatile int64_t x110 = -1LL;
	static int32_t x111 = -11839298;
	int32_t t27 = -529;

    t27 = (x109==((x110&x111)/x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	int32_t x115 = 821660508;
	static int16_t x116 = 12070;
	volatile int32_t t28 = 403923879;

    t28 = (x113==((x114&x115)/x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	volatile uint64_t x118 = 2744148700896940683LLU;
	int16_t x119 = 2;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -537169333;

    t29 = (x117==((x118&x119)/x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = -1;
	int32_t x122 = INT32_MAX;
	static int32_t x123 = INT32_MIN;
	static volatile int64_t x124 = INT64_MIN;

    t30 = (x121==((x122&x123)/x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	uint8_t x126 = 7U;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t31 = -322905;

    t31 = (x125==((x126&x127)/x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MIN;
	volatile int8_t x132 = INT8_MIN;
	int32_t t32 = -21616458;

    t32 = (x129==((x130&x131)/x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MIN;
	int8_t x135 = -31;
	static uint32_t x136 = 490396458U;

    t33 = (x133==((x134&x135)/x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x139 = INT8_MIN;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 245858;

    t34 = (x137==((x138&x139)/x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 2U;
	int8_t x142 = INT8_MIN;
	volatile int16_t x144 = INT16_MIN;
	int32_t t35 = 77091;

    t35 = (x141==((x142&x143)/x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 10446333716LLU;
	static int64_t x147 = -1LL;
	volatile int32_t x148 = 84494217;
	int32_t t36 = 2363;

    t36 = (x145==((x146&x147)/x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	static int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -107;

    t37 = (x149==((x150&x151)/x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = INT64_MIN;
	static uint32_t x155 = 849U;
	static volatile int32_t t38 = -693506758;

    t38 = (x153==((x154&x155)/x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 553;
	int64_t x158 = -1LL;
	volatile int32_t x160 = 73138427;
	static volatile int32_t t39 = 10;

    t39 = (x157==((x158&x159)/x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 10U;
	int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	static int32_t t40 = 57;

    t40 = (x161==((x162&x163)/x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -1LL;
	uint16_t x166 = 116U;
	static int64_t x168 = 1147680979LL;

    t41 = (x165==((x166&x167)/x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 374193U;
	static volatile uint16_t x170 = 102U;
	int16_t x171 = INT16_MAX;

    t42 = (x169==((x170&x171)/x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 55U;
	static int32_t x174 = -1;
	volatile uint64_t x175 = 3300789084664349856LLU;
	int16_t x176 = -1;
	volatile int32_t t43 = -982;

    t43 = (x173==((x174&x175)/x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	int64_t x179 = INT64_MIN;

    t44 = (x177==((x178&x179)/x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MIN;

    t45 = (x181==((x182&x183)/x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	static int64_t x186 = INT64_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 27460;

    t46 = (x185==((x186&x187)/x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x190 = -1LL;
	static volatile uint16_t x191 = UINT16_MAX;
	int32_t t47 = 19827;

    t47 = (x189==((x190&x191)/x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 12942U;
	static uint8_t x195 = 44U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -1502979;

    t48 = (x193==((x194&x195)/x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	int8_t x199 = -1;
	volatile int32_t x200 = -113496;
	volatile int32_t t49 = 87376;

    t49 = (x197==((x198&x199)/x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = -41;
	uint32_t x203 = 1894116U;
	uint16_t x204 = 2719U;

    t50 = (x201==((x202&x203)/x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	volatile int8_t x206 = -1;
	uint64_t x208 = UINT64_MAX;

    t51 = (x205==((x206&x207)/x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint8_t x210 = 9U;
	static uint8_t x211 = UINT8_MAX;
	static int32_t x212 = -1;
	int32_t t52 = -1;

    t52 = (x209==((x210&x211)/x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	uint32_t x216 = 1739U;

    t53 = (x213==((x214&x215)/x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = -2587806031LL;
	uint32_t x218 = 230U;
	uint32_t x219 = 41449U;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 2784;

    t54 = (x217==((x218&x219)/x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 1160510LLU;
	uint64_t x222 = 401920323217615LLU;
	uint8_t x223 = 31U;
	int32_t t55 = -509541;

    t55 = (x221==((x222&x223)/x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = 185453392891458LL;
	static uint32_t x228 = 59223U;
	volatile int32_t t56 = 270967;

    t56 = (x225==((x226&x227)/x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = 644668U;
	int8_t x230 = -1;
	int64_t x231 = 3366476923LL;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = -3;

    t57 = (x229==((x230&x231)/x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	static int32_t x236 = -28203740;

    t58 = (x233==((x234&x235)/x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = -1;
	volatile int32_t t59 = 31322098;

    t59 = (x237==((x238&x239)/x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 9U;
	static uint8_t x242 = 0U;
	uint64_t x243 = 31LLU;
	static volatile int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -869214184;

    t60 = (x241==((x242&x243)/x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 515500740127LLU;
	uint8_t x246 = 5U;
	uint16_t x247 = 5U;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = 550784;

    t61 = (x245==((x246&x247)/x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x250 = 4786148U;
	int32_t x251 = -1;
	volatile int32_t t62 = -3248570;

    t62 = (x249==((x250&x251)/x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 5;
	uint8_t x254 = 0U;
	volatile int16_t x255 = INT16_MIN;
	static int8_t x256 = 40;
	volatile int32_t t63 = -89;

    t63 = (x253==((x254&x255)/x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 2225;
	uint8_t x259 = 1U;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = -317703218;

    t64 = (x257==((x258&x259)/x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 696737622LLU;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -145885253;

    t65 = (x261==((x262&x263)/x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x267 = -1;
	static uint32_t x268 = 31748943U;
	int32_t t66 = 14024;

    t66 = (x265==((x266&x267)/x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int8_t x270 = -14;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -72999617;

    t67 = (x269==((x270&x271)/x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x277 = 0U;
	int64_t x279 = 66182514LL;
	int32_t t68 = 44;

    t68 = (x277==((x278&x279)/x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = INT32_MIN;
	static int64_t x282 = -509LL;
	int64_t x283 = -1170LL;
	uint8_t x284 = 113U;
	volatile int32_t t69 = 7195149;

    t69 = (x281==((x282&x283)/x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	volatile uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;

    t70 = (x285==((x286&x287)/x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x289 = 1;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = -1;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t71 = -29846927;

    t71 = (x289==((x290&x291)/x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x293 = INT8_MAX;
	int64_t x294 = -625694178906543LL;
	int8_t x296 = INT8_MIN;

    t72 = (x293==((x294&x295)/x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x298 = 4U;
	int32_t x300 = 26121150;
	int32_t t73 = -26;

    t73 = (x297==((x298&x299)/x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 1039485075U;
	int64_t x302 = -230LL;
	int32_t x303 = 52276096;
	int64_t x304 = -1LL;

    t74 = (x301==((x302&x303)/x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x305 = INT64_MAX;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 3241029U;
	volatile int32_t x308 = INT32_MIN;
	static volatile int32_t t75 = -4766480;

    t75 = (x305==((x306&x307)/x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x309 = 0U;
	int64_t x310 = -1LL;
	volatile int64_t x311 = INT64_MIN;
	int8_t x312 = 7;

    t76 = (x309==((x310&x311)/x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x314 = -1460535LL;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t77 = -42584498;

    t77 = (x313==((x314&x315)/x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = -1;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = 1675694080438LL;
	int64_t x320 = -1LL;
	int32_t t78 = 123718842;

    t78 = (x317==((x318&x319)/x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x321 = INT8_MAX;
	volatile uint64_t x322 = 18133305547LLU;
	static int16_t x323 = INT16_MAX;
	static int32_t x324 = INT32_MIN;
	int32_t t79 = 292486;

    t79 = (x321==((x322&x323)/x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x326 = INT16_MAX;
	static volatile uint16_t x327 = 19U;
	int64_t x328 = INT64_MAX;
	int32_t t80 = -34;

    t80 = (x325==((x326&x327)/x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = INT16_MIN;
	uint8_t x330 = UINT8_MAX;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t81 = -675945;

    t81 = (x329==((x330&x331)/x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x333 = INT16_MIN;
	uint64_t x334 = 1184482594601890782LLU;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;

    t82 = (x333==((x334&x335)/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = 2LL;
	static int64_t x338 = INT64_MIN;
	uint64_t x339 = 166244556242534LLU;
	uint16_t x340 = UINT16_MAX;
	int32_t t83 = 99739;

    t83 = (x337==((x338&x339)/x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = 0;
	uint64_t x342 = 511115108385LLU;
	static uint64_t x343 = 151757329LLU;
	uint32_t x344 = UINT32_MAX;

    t84 = (x341==((x342&x343)/x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = 107;
	volatile int64_t x347 = INT64_MIN;
	int32_t x348 = 3743090;
	int32_t t85 = -15147;

    t85 = (x345==((x346&x347)/x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x349 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	int32_t t86 = 7637;

    t86 = (x349==((x350&x351)/x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint8_t x356 = 12U;

    t87 = (x353==((x354&x355)/x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = -1;
	int8_t x358 = 1;
	uint8_t x359 = UINT8_MAX;
	static int64_t x360 = INT64_MIN;
	static volatile int32_t t88 = 0;

    t88 = (x357==((x358&x359)/x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x361 = INT64_MIN;
	static int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	uint16_t x364 = UINT16_MAX;
	int32_t t89 = 3100;

    t89 = (x361==((x362&x363)/x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = 774765176LL;
	static uint8_t x366 = 1U;
	static volatile int8_t x367 = INT8_MIN;
	int32_t x368 = -1;
	volatile int32_t t90 = 396;

    t90 = (x365==((x366&x367)/x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = 57;
	static uint32_t x372 = 485U;
	int32_t t91 = -45;

    t91 = (x369==((x370&x371)/x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MAX;
	uint32_t x374 = 1U;
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 65111839U;
	int32_t t92 = 4;

    t92 = (x373==((x374&x375)/x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x377 = 2176419710442LL;
	int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = INT8_MIN;
	static int32_t t93 = 28705;

    t93 = (x377==((x378&x379)/x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x381 = 1144379625LL;
	static int32_t x382 = -1;
	volatile int32_t x383 = 56183;
	uint32_t x384 = 7004U;
	volatile int32_t t94 = 105353;

    t94 = (x381==((x382&x383)/x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x385 = -1;
	int16_t x386 = 95;
	static int8_t x387 = INT8_MIN;

    t95 = (x385==((x386&x387)/x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x390 = 6;
	volatile int16_t x391 = 1;
	int64_t x392 = -4128032109624318LL;
	int32_t t96 = 2973851;

    t96 = (x389==((x390&x391)/x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = 4983;

    t97 = (x393==((x394&x395)/x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	static int8_t x399 = 0;
	volatile uint32_t x400 = UINT32_MAX;
	int32_t t98 = 4362211;

    t98 = (x397==((x398&x399)/x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = INT32_MIN;
	volatile int32_t x403 = -403;
	int32_t t99 = -245561;

    t99 = (x401==((x402&x403)/x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x406 = 81244313672658LLU;
	uint32_t x407 = 3644595U;
	volatile int64_t x408 = INT64_MIN;
	static int32_t t100 = 187024;

    t100 = (x405==((x406&x407)/x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = INT32_MIN;
	static int16_t x410 = INT16_MIN;
	volatile int16_t x411 = 220;
	int32_t t101 = -21;

    t101 = (x409==((x410&x411)/x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x414 = 2418U;
	volatile int32_t t102 = 2864;

    t102 = (x413==((x414&x415)/x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x417 = -1;
	int16_t x419 = INT16_MAX;
	static int64_t x420 = -51754589643LL;
	volatile int32_t t103 = 62357;

    t103 = (x417==((x418&x419)/x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = -2;
	int8_t x422 = -1;
	static uint8_t x423 = 6U;
	int64_t x424 = 2746776509LL;
	volatile int32_t t104 = 18;

    t104 = (x421==((x422&x423)/x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x425 = 16U;
	static volatile int64_t x426 = 350295541LL;
	volatile uint64_t x427 = 4119809352268688LLU;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t105 = 0;

    t105 = (x425==((x426&x427)/x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x429 = INT32_MAX;
	uint16_t x431 = UINT16_MAX;
	volatile int64_t x432 = INT64_MIN;
	int32_t t106 = 0;

    t106 = (x429==((x430&x431)/x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x434 = UINT8_MAX;
	int32_t x435 = -21;
	int32_t t107 = 0;

    t107 = (x433==((x434&x435)/x436));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x437 = -50373;
	int64_t x438 = 1604237447929416LL;
	int64_t x439 = -1LL;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t108 = 978928023;

    t108 = (x437==((x438&x439)/x440));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = INT32_MAX;
	int32_t x442 = INT32_MAX;
	volatile uint8_t x443 = 0U;
	int32_t x444 = 4081;
	static int32_t t109 = -5934;

    t109 = (x441==((x442&x443)/x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x445 = UINT32_MAX;
	static uint64_t x446 = 462LLU;
	volatile int32_t t110 = -1724;

    t110 = (x445==((x446&x447)/x448));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x449 = -1;
	uint8_t x450 = 17U;
	static uint8_t x451 = 0U;
	int32_t x452 = 4670236;

    t111 = (x449==((x450&x451)/x452));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x454 = -2179299243944272LL;
	static uint16_t x456 = 1450U;
	static int32_t t112 = -253;

    t112 = (x453==((x454&x455)/x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x457 = INT64_MAX;
	static int64_t x458 = INT64_MIN;
	uint8_t x459 = UINT8_MAX;
	static int32_t t113 = 476;

    t113 = (x457==((x458&x459)/x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x461 = -1840891;
	uint32_t x462 = 2593U;
	int64_t x463 = -5095LL;
	int8_t x464 = INT8_MIN;
	volatile int32_t t114 = 3148019;

    t114 = (x461==((x462&x463)/x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MAX;
	volatile int8_t x466 = 24;
	int16_t x467 = INT16_MIN;
	static volatile int32_t t115 = 25101;

    t115 = (x465==((x466&x467)/x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x471 = -216;
	int32_t x472 = 63;
	volatile int32_t t116 = -15397;

    t116 = (x469==((x470&x471)/x472));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x473 = -62234773;
	int64_t x474 = INT64_MIN;
	int8_t x475 = -1;
	volatile uint64_t x476 = 8006885436LLU;
	int32_t t117 = 545;

    t117 = (x473==((x474&x475)/x476));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x477 = INT8_MIN;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = INT64_MIN;
	volatile int8_t x480 = INT8_MAX;
	static volatile int32_t t118 = 5965;

    t118 = (x477==((x478&x479)/x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x481 = 1172113370LLU;
	static uint16_t x482 = UINT16_MAX;
	int64_t x483 = INT64_MIN;
	static int32_t x484 = -1;
	volatile int32_t t119 = -3199847;

    t119 = (x481==((x482&x483)/x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x485 = INT16_MAX;
	int32_t x486 = -1906259;
	static int16_t x487 = -1;
	static uint32_t x488 = 75370U;
	volatile int32_t t120 = 2006189;

    t120 = (x485==((x486&x487)/x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x489 = INT64_MAX;
	int16_t x491 = -1;
	uint8_t x492 = 56U;
	volatile int32_t t121 = 106;

    t121 = (x489==((x490&x491)/x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x493 = UINT64_MAX;
	int16_t x494 = INT16_MIN;
	static int32_t x495 = -1369;
	int32_t x496 = INT32_MIN;

    t122 = (x493==((x494&x495)/x496));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x497 = 0;
	int16_t x498 = -131;
	volatile int64_t x499 = 247995173LL;
	uint32_t x500 = 128535790U;
	volatile int32_t t123 = -587;

    t123 = (x497==((x498&x499)/x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int8_t x502 = INT8_MAX;
	uint32_t x503 = 2092U;
	static int8_t x504 = INT8_MAX;
	volatile int32_t t124 = -1615670;

    t124 = (x501==((x502&x503)/x504));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x505 = UINT16_MAX;
	int8_t x506 = -2;
	volatile uint8_t x507 = 0U;
	int8_t x508 = -1;
	int32_t t125 = 1688450;

    t125 = (x505==((x506&x507)/x508));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x509 = 3166237;
	int64_t x512 = INT64_MIN;
	static int32_t t126 = -7307388;

    t126 = (x509==((x510&x511)/x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x517 = 794031;
	int64_t x518 = INT64_MAX;
	int8_t x520 = INT8_MIN;
	int32_t t127 = 129722;

    t127 = (x517==((x518&x519)/x520));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x521 = 7242U;
	int32_t x522 = INT32_MIN;
	volatile int8_t x524 = INT8_MAX;
	static int32_t t128 = -24;

    t128 = (x521==((x522&x523)/x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x525 = INT8_MAX;
	uint64_t x526 = 1LLU;
	static int32_t x528 = INT32_MAX;
	volatile int32_t t129 = -78066;

    t129 = (x525==((x526&x527)/x528));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x529 = 103992065209368712LL;
	uint32_t x530 = UINT32_MAX;
	int64_t x531 = INT64_MIN;
	static uint8_t x532 = 68U;
	static volatile int32_t t130 = -3;

    t130 = (x529==((x530&x531)/x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x533 = -1;
	uint8_t x534 = 1U;
	static int64_t x536 = 4294966693215859387LL;
	int32_t t131 = -2;

    t131 = (x533==((x534&x535)/x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x537 = INT64_MIN;
	volatile int32_t x538 = -1;
	volatile uint8_t x540 = UINT8_MAX;
	int32_t t132 = 537334;

    t132 = (x537==((x538&x539)/x540));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x541 = -19;
	volatile int32_t x542 = 2;
	static uint8_t x543 = 73U;
	uint32_t x544 = UINT32_MAX;
	static int32_t t133 = -3828;

    t133 = (x541==((x542&x543)/x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x545 = 29;
	int16_t x546 = -17;
	int16_t x547 = INT16_MIN;
	volatile int16_t x548 = INT16_MIN;
	static volatile int32_t t134 = 292589;

    t134 = (x545==((x546&x547)/x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = 234U;
	static int8_t x550 = INT8_MAX;

    t135 = (x549==((x550&x551)/x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x553 = INT8_MIN;
	int8_t x554 = -1;
	uint64_t x555 = 237805014LLU;
	volatile int32_t t136 = -297919346;

    t136 = (x553==((x554&x555)/x556));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x557 = 7U;
	volatile uint8_t x558 = 0U;
	uint8_t x559 = UINT8_MAX;
	int32_t t137 = -321;

    t137 = (x557==((x558&x559)/x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = INT8_MIN;
	static uint64_t x562 = UINT64_MAX;
	uint64_t x563 = 5LLU;
	volatile int16_t x564 = 16336;
	volatile int32_t t138 = 2;

    t138 = (x561==((x562&x563)/x564));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = INT64_MIN;
	int64_t x566 = -12472325LL;
	int16_t x567 = 0;
	static volatile uint32_t x568 = 405189164U;

    t139 = (x565==((x566&x567)/x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x569 = -1;
	int8_t x571 = 1;
	uint16_t x572 = 12053U;
	static int32_t t140 = 352;

    t140 = (x569==((x570&x571)/x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x573 = -1;
	uint64_t x574 = UINT64_MAX;
	int32_t x575 = -1;
	uint8_t x576 = UINT8_MAX;

    t141 = (x573==((x574&x575)/x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x579 = -4;
	int8_t x580 = INT8_MAX;

    t142 = (x577==((x578&x579)/x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x582 = -3;
	volatile int32_t t143 = 971358841;

    t143 = (x581==((x582&x583)/x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x585 = INT64_MIN;
	int16_t x586 = INT16_MAX;
	int64_t x587 = INT64_MIN;
	volatile uint32_t x588 = 27561295U;

    t144 = (x585==((x586&x587)/x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x589 = 1U;
	volatile int16_t x590 = INT16_MIN;
	static int64_t x592 = INT64_MIN;

    t145 = (x589==((x590&x591)/x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = -6;
	uint8_t x594 = 1U;
	int16_t x595 = -1;
	static int8_t x596 = -1;

    t146 = (x593==((x594&x595)/x596));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x597 = 16U;
	int64_t x598 = 18049568LL;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t147 = 57992905;

    t147 = (x597==((x598&x599)/x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x602 = -862876918;
	int32_t x604 = -1;
	int32_t t148 = -24943;

    t148 = (x601==((x602&x603)/x604));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x605 = INT8_MIN;
	volatile int16_t x606 = 16;
	volatile uint16_t x607 = 79U;
	volatile int32_t t149 = -2899;

    t149 = (x605==((x606&x607)/x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x610 = 289;
	int32_t x611 = -55968;
	uint32_t x612 = 1009202832U;
	int32_t t150 = -1;

    t150 = (x609==((x610&x611)/x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x613 = 0LL;
	int8_t x614 = INT8_MIN;
	static int64_t x615 = INT64_MAX;
	volatile int32_t t151 = 19150;

    t151 = (x613==((x614&x615)/x616));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x618 = -197;
	volatile uint16_t x619 = UINT16_MAX;
	int64_t x620 = INT64_MIN;
	int32_t t152 = -13;

    t152 = (x617==((x618&x619)/x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = 104U;
	volatile int16_t x624 = INT16_MAX;
	volatile int32_t t153 = -76674;

    t153 = (x621==((x622&x623)/x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x625 = -1;
	int64_t x627 = -1LL;
	int32_t x628 = INT32_MIN;
	volatile int32_t t154 = 45;

    t154 = (x625==((x626&x627)/x628));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x629 = 13055546LLU;
	uint64_t x630 = UINT64_MAX;
	int16_t x631 = -1;
	volatile int64_t x632 = -9816616805LL;
	volatile int32_t t155 = -1;

    t155 = (x629==((x630&x631)/x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x633 = 222477789U;
	int32_t x634 = INT32_MIN;
	uint16_t x635 = UINT16_MAX;
	int32_t x636 = -1;
	volatile int32_t t156 = 169;

    t156 = (x633==((x634&x635)/x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x637 = 352702U;
	volatile int16_t x638 = 1234;
	uint16_t x639 = 2044U;

    t157 = (x637==((x638&x639)/x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x641 = 1626759036U;
	static volatile uint8_t x642 = UINT8_MAX;
	int32_t x643 = -37;
	int32_t x644 = INT32_MAX;
	volatile int32_t t158 = -176804;

    t158 = (x641==((x642&x643)/x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x645 = INT64_MIN;
	static uint32_t x647 = 104U;
	int32_t x648 = -1412;
	static volatile int32_t t159 = -7;

    t159 = (x645==((x646&x647)/x648));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x649 = 88533U;
	int32_t x650 = -606;
	uint32_t x651 = 8U;
	int32_t x652 = -63;
	static volatile int32_t t160 = -232832675;

    t160 = (x649==((x650&x651)/x652));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x653 = INT64_MIN;
	uint16_t x654 = 1U;
	int8_t x656 = -7;
	int32_t t161 = 334;

    t161 = (x653==((x654&x655)/x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	int64_t x658 = -175LL;
	static uint8_t x659 = 30U;
	static volatile int32_t t162 = -4329;

    t162 = (x657==((x658&x659)/x660));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x661 = -1LL;
	static volatile int32_t x662 = INT32_MIN;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t163 = 40024;

    t163 = (x661==((x662&x663)/x664));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x666 = 5U;
	int32_t x667 = INT32_MIN;
	volatile int32_t t164 = 0;

    t164 = (x665==((x666&x667)/x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	uint64_t x670 = 12LLU;
	int32_t x671 = 1037660279;
	static uint8_t x672 = UINT8_MAX;
	volatile int32_t t165 = 61790692;

    t165 = (x669==((x670&x671)/x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x674 = 2U;
	int32_t x675 = INT32_MIN;
	uint32_t x676 = 29U;
	int32_t t166 = 2;

    t166 = (x673==((x674&x675)/x676));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x677 = 6U;
	static volatile int8_t x678 = 15;
	static int64_t x679 = 15821545220426LL;
	int8_t x680 = 1;

    t167 = (x677==((x678&x679)/x680));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x681 = INT16_MAX;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t168 = 10944524;

    t168 = (x681==((x682&x683)/x684));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x686 = INT16_MIN;
	static int32_t t169 = 30030;

    t169 = (x685==((x686&x687)/x688));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x689 = 0;
	int16_t x690 = -3402;
	int16_t x691 = INT16_MIN;
	uint64_t x692 = 2987778783LLU;
	volatile int32_t t170 = -18420;

    t170 = (x689==((x690&x691)/x692));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x694 = -1;
	int64_t x695 = -1LL;
	int32_t x696 = 29;
	int32_t t171 = 6893935;

    t171 = (x693==((x694&x695)/x696));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x697 = UINT8_MAX;
	uint32_t x698 = 196U;
	int32_t x699 = -12933;
	volatile int32_t t172 = 204835;

    t172 = (x697==((x698&x699)/x700));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x701 = -1;
	uint64_t x702 = 844497702618399903LLU;
	int8_t x703 = 5;
	volatile int64_t x704 = INT64_MIN;
	volatile int32_t t173 = -3;

    t173 = (x701==((x702&x703)/x704));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x705 = UINT64_MAX;
	static int32_t x706 = 2971;
	uint8_t x707 = 10U;
	int64_t x708 = INT64_MIN;
	int32_t t174 = -15669607;

    t174 = (x705==((x706&x707)/x708));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x709 = INT64_MIN;
	static int64_t x712 = INT64_MIN;

    t175 = (x709==((x710&x711)/x712));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x713 = UINT64_MAX;
	uint8_t x715 = UINT8_MAX;
	static int64_t x716 = INT64_MIN;
	volatile int32_t t176 = 22;

    t176 = (x713==((x714&x715)/x716));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x717 = INT8_MIN;
	uint64_t x718 = 5533299LLU;
	int32_t x720 = -1;
	volatile int32_t t177 = 604347843;

    t177 = (x717==((x718&x719)/x720));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x721 = -2;
	volatile uint8_t x722 = UINT8_MAX;
	int8_t x724 = INT8_MIN;
	int32_t t178 = 0;

    t178 = (x721==((x722&x723)/x724));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x725 = 347433393LL;
	int64_t x726 = 39LL;
	uint64_t x727 = 3214LLU;
	uint32_t x728 = UINT32_MAX;
	static volatile int32_t t179 = 301047;

    t179 = (x725==((x726&x727)/x728));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x729 = -1;
	int16_t x730 = 71;
	static int16_t x731 = INT16_MIN;
	volatile int16_t x732 = -187;

    t180 = (x729==((x730&x731)/x732));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x733 = -1;
	int16_t x734 = -5122;
	uint16_t x736 = 6538U;
	int32_t t181 = -36548;

    t181 = (x733==((x734&x735)/x736));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x737 = -387170896LL;
	volatile int64_t x738 = 17292676937558153LL;
	uint64_t x740 = 110LLU;
	volatile int32_t t182 = -30765;

    t182 = (x737==((x738&x739)/x740));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x742 = 12;
	int16_t x743 = INT16_MAX;
	volatile int32_t t183 = 15;

    t183 = (x741==((x742&x743)/x744));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x747 = INT16_MIN;
	static uint8_t x748 = 15U;
	volatile int32_t t184 = 820986;

    t184 = (x745==((x746&x747)/x748));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x749 = INT8_MIN;
	int8_t x750 = -1;
	volatile int8_t x751 = INT8_MIN;
	volatile int16_t x752 = INT16_MAX;
	static int32_t t185 = 712;

    t185 = (x749==((x750&x751)/x752));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x754 = 0U;
	int16_t x755 = INT16_MIN;
	int64_t x756 = 75416505985683LL;
	volatile int32_t t186 = -1643;

    t186 = (x753==((x754&x755)/x756));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x757 = UINT32_MAX;
	int64_t x758 = INT64_MIN;
	int8_t x759 = -1;

    t187 = (x757==((x758&x759)/x760));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x761 = UINT16_MAX;
	uint32_t x762 = 15U;
	volatile uint32_t x763 = UINT32_MAX;
	int16_t x764 = INT16_MIN;
	static volatile int32_t t188 = -125;

    t188 = (x761==((x762&x763)/x764));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x765 = INT16_MIN;
	static int64_t x766 = INT64_MIN;
	int16_t x767 = INT16_MIN;
	int16_t x768 = INT16_MAX;

    t189 = (x765==((x766&x767)/x768));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x769 = INT64_MIN;
	volatile uint16_t x770 = UINT16_MAX;
	static uint64_t x771 = 0LLU;
	int16_t x772 = INT16_MIN;
	volatile int32_t t190 = 1;

    t190 = (x769==((x770&x771)/x772));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x773 = -51;
	int32_t x775 = INT32_MIN;
	uint8_t x776 = 7U;
	int32_t t191 = 565;

    t191 = (x773==((x774&x775)/x776));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x777 = 26271U;
	volatile int8_t x778 = 1;
	int64_t x780 = INT64_MAX;

    t192 = (x777==((x778&x779)/x780));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x781 = 6961LLU;
	static uint32_t x782 = 23U;
	uint8_t x784 = 59U;
	volatile int32_t t193 = 133160150;

    t193 = (x781==((x782&x783)/x784));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x785 = 32610U;
	uint32_t x786 = 459U;
	static volatile int16_t x787 = INT16_MIN;
	int8_t x788 = -6;
	static volatile int32_t t194 = 1312;

    t194 = (x785==((x786&x787)/x788));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x789 = INT16_MIN;
	uint32_t x791 = UINT32_MAX;
	volatile int16_t x792 = INT16_MAX;
	int32_t t195 = 2009;

    t195 = (x789==((x790&x791)/x792));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x793 = -1;
	int16_t x794 = -1;
	int8_t x795 = INT8_MAX;
	volatile int8_t x796 = 3;
	static int32_t t196 = 389127690;

    t196 = (x793==((x794&x795)/x796));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x797 = -1LL;
	static int32_t x798 = 4451;
	volatile uint64_t x799 = 242993113094534302LLU;
	int64_t x800 = -1LL;

    t197 = (x797==((x798&x799)/x800));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x801 = INT32_MIN;
	volatile int8_t x802 = -1;
	uint8_t x803 = UINT8_MAX;
	volatile int32_t t198 = -5582812;

    t198 = (x801==((x802&x803)/x804));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x805 = INT16_MAX;
	int8_t x806 = INT8_MAX;
	int8_t x807 = INT8_MAX;
	volatile int32_t x808 = -1;
	static volatile int32_t t199 = 12;

    t199 = (x805==((x806&x807)/x808));

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

