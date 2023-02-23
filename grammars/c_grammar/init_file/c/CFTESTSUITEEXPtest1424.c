
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

uint32_t x5 = UINT32_MAX;
uint32_t x16 = 1939U;
static uint64_t x21 = 4442535227734841LLU;
int8_t x23 = -1;
static int32_t x25 = -3386;
volatile int8_t x27 = -1;
static volatile uint8_t x35 = UINT8_MAX;
int32_t t9 = 1333;
uint16_t x42 = UINT16_MAX;
static int32_t x46 = INT32_MAX;
static int64_t x49 = -71885746923LL;
int64_t x64 = 237LL;
volatile int32_t t15 = 2360383;
int32_t x75 = -3754;
int64_t x78 = INT64_MIN;
volatile int32_t t19 = -6916;
static uint64_t x84 = UINT64_MAX;
volatile int32_t t20 = 1118;
int32_t x87 = -1;
int64_t x94 = 570655469128LL;
int8_t x96 = INT8_MIN;
static volatile int32_t t23 = -55312508;
int8_t x106 = -1;
int32_t x112 = -1;
uint32_t x114 = 26U;
volatile int32_t t29 = -1500;
volatile uint8_t x122 = UINT8_MAX;
static int32_t x123 = -1;
int32_t t30 = 1195064;
int16_t x127 = 4;
volatile int32_t t32 = -970;
volatile uint8_t x133 = 0U;
uint8_t x144 = 1U;
static volatile int32_t t35 = 237682;
int32_t x151 = -7824;
static int64_t x157 = 970122LL;
uint32_t x161 = 480463266U;
static uint64_t x166 = 20247170645704LLU;
static volatile int32_t t42 = -1032;
static int32_t x178 = -1;
int16_t x179 = -15299;
int8_t x184 = -1;
static int32_t t45 = -6;
int8_t x187 = INT8_MIN;
static int16_t x199 = -72;
static int32_t t49 = -1770733;
volatile uint8_t x207 = 117U;
static int8_t x211 = 1;
uint16_t x215 = 36U;
static volatile int32_t x217 = INT32_MAX;
volatile int16_t x221 = INT16_MIN;
int64_t x224 = INT64_MIN;
int32_t t54 = 741;
uint8_t x227 = 29U;
static int8_t x234 = 2;
static volatile uint16_t x235 = 803U;
uint16_t x242 = UINT16_MAX;
int16_t x244 = INT16_MAX;
int16_t x248 = INT16_MIN;
volatile int16_t x251 = -1;
int32_t t62 = 97450;
volatile int32_t x257 = INT32_MIN;
int32_t t67 = 49020;
static int64_t x280 = INT64_MAX;
int32_t t68 = 11;
int32_t t70 = -39856743;
volatile int32_t x289 = -1;
int16_t x296 = INT16_MAX;
uint64_t x297 = UINT64_MAX;
uint32_t x299 = 64613U;
int32_t t73 = -1;
volatile int16_t x301 = -1;
volatile int32_t t74 = 1;
int64_t x306 = -2LL;
int8_t x307 = INT8_MIN;
volatile int64_t x309 = INT64_MIN;
static uint8_t x317 = 2U;
volatile uint8_t x320 = 91U;
int64_t x325 = INT64_MIN;
uint32_t x328 = UINT32_MAX;
int8_t x330 = -1;
volatile int32_t x340 = INT32_MAX;
static int32_t x351 = -1;
static int32_t t86 = 5;
volatile int32_t t87 = -1;
volatile int32_t t88 = -521767;
int64_t x365 = 87LL;
int16_t x372 = -1;
int32_t t91 = 54;
int32_t t92 = -95526;
volatile uint64_t x399 = UINT64_MAX;
int32_t t98 = -43432;
static int8_t x405 = INT8_MIN;
volatile uint32_t x407 = 15201323U;
static volatile int64_t x411 = INT64_MIN;
int16_t x416 = INT16_MIN;
uint32_t x418 = 4066U;
int32_t t103 = 2152;
uint32_t x427 = 117802U;
int8_t x428 = 2;
volatile int32_t x430 = INT32_MIN;
int64_t x433 = -1LL;
static int32_t t106 = 22;
volatile int32_t t107 = -1578764;
int16_t x442 = -6;
int16_t x445 = -1;
int8_t x451 = 1;
int16_t x455 = INT16_MIN;
static int32_t x460 = INT32_MIN;
static int16_t x470 = 3;
volatile int32_t x475 = 0;
int32_t t116 = 4517307;
int32_t x478 = INT32_MAX;
int32_t t118 = -469864745;
volatile int16_t x486 = INT16_MAX;
volatile int8_t x491 = -1;
volatile int8_t x496 = -1;
volatile int32_t t121 = 216755821;
static volatile int32_t t125 = -47577888;
int32_t t127 = -120536;
int64_t x530 = 1047892549713913LL;
int64_t x539 = INT64_MIN;
int64_t x540 = INT64_MIN;
uint16_t x542 = 22U;
int16_t x553 = -95;
uint32_t x558 = 40939018U;
int64_t x565 = INT64_MAX;
int32_t x574 = INT32_MIN;
int32_t x575 = INT32_MAX;
int32_t x577 = 9;
int64_t x578 = INT64_MAX;
uint8_t x581 = 97U;
volatile int16_t x588 = INT16_MIN;
static int64_t x590 = -1LL;
int32_t x596 = -1;
int32_t t146 = 167935;
int16_t x605 = -17;
volatile int8_t x609 = 13;
static volatile int8_t x613 = INT8_MIN;
int32_t x614 = -1;
int32_t x617 = INT32_MAX;
uint64_t x618 = UINT64_MAX;
uint64_t x622 = 134207270965LLU;
int32_t x634 = INT32_MIN;
int32_t t156 = -8569;
volatile int32_t t158 = -86;
int8_t x649 = INT8_MIN;
int8_t x651 = INT8_MAX;
int8_t x656 = -3;
volatile int32_t t161 = -2;
int16_t x658 = INT16_MAX;
int64_t x660 = -940448018829413292LL;
int64_t x665 = -17LL;
static volatile int8_t x666 = -1;
volatile int32_t x669 = INT32_MIN;
int16_t x672 = INT16_MAX;
volatile int32_t t165 = 130883980;
int32_t x673 = INT32_MIN;
int16_t x674 = INT16_MAX;
static int32_t t166 = 518573465;
volatile int32_t x682 = -1;
int16_t x684 = INT16_MIN;
uint16_t x688 = UINT16_MAX;
int64_t x689 = -9535LL;
int32_t t170 = -59852517;
uint8_t x693 = 0U;
int32_t t173 = -1;
static int32_t x706 = -301300622;
uint64_t x707 = 2746217LLU;
uint8_t x708 = UINT8_MAX;
int32_t x711 = INT32_MIN;
int64_t x716 = INT64_MIN;
volatile uint16_t x719 = UINT16_MAX;
int32_t x721 = INT32_MIN;
uint32_t x726 = 39U;
static volatile int8_t x727 = 3;
volatile int32_t x730 = INT32_MIN;
int16_t x732 = INT16_MIN;
int32_t x734 = INT32_MIN;
static int16_t x743 = 0;
volatile uint64_t x760 = 144140259643LLU;
uint32_t x765 = UINT32_MAX;
static volatile int32_t t189 = -7645808;
static int8_t x774 = INT8_MIN;
volatile int32_t t191 = -7509818;
static int8_t x778 = -1;
int8_t x779 = INT8_MAX;
volatile int16_t x781 = -1;
volatile int64_t x786 = -1LL;
uint8_t x787 = 79U;
int8_t x791 = INT8_MIN;
static int64_t x795 = 12601718LL;
int8_t x804 = INT8_MIN;
static volatile int32_t t198 = 306934676;
int32_t t199 = -11556;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	static volatile int16_t x3 = -1;
	static int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 1359;

    t0 = (x1<=((x2==x3)/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = -1;
	volatile uint32_t x8 = 60U;
	volatile int32_t t1 = -13009;

    t1 = (x5<=((x6==x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -18151173621160417LL;
	static uint64_t x10 = UINT64_MAX;
	static int16_t x11 = INT16_MIN;
	uint8_t x12 = 3U;
	int32_t t2 = 77;

    t2 = (x9<=((x10==x11)/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int32_t t3 = -47304519;

    t3 = (x13<=((x14==x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	int64_t x18 = INT64_MIN;
	int32_t x19 = -209382956;
	int64_t x20 = -1LL;
	volatile int32_t t4 = -6523177;

    t4 = (x17<=((x18==x19)/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x22 = 39U;
	uint64_t x24 = 115761LLU;
	static volatile int32_t t5 = 481334;

    t5 = (x21<=((x22==x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = UINT32_MAX;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 281039;

    t6 = (x25<=((x26==x27)/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	volatile uint16_t x30 = 31673U;
	static int16_t x31 = INT16_MIN;
	uint8_t x32 = 2U;
	int32_t t7 = -113950;

    t7 = (x29<=((x30==x31)/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -23;

    t8 = (x33<=((x34==x35)/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 148876621U;
	uint8_t x38 = 6U;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MAX;

    t9 = (x37<=((x38==x39)/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1;
	uint32_t x43 = UINT32_MAX;
	uint16_t x44 = 396U;
	volatile int32_t t10 = -840;

    t10 = (x41<=((x42==x43)/x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	volatile int64_t x47 = INT64_MAX;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -4;

    t11 = (x45<=((x46==x47)/x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int32_t x52 = -1851;
	int32_t t12 = -13;

    t12 = (x49<=((x50==x51)/x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint32_t x54 = 51183U;
	static volatile int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 126387;

    t13 = (x53<=((x54==x55)/x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -48034488;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = UINT32_MAX;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = 1339143;

    t14 = (x57<=((x58==x59)/x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MAX;
	int8_t x63 = -2;

    t15 = (x61<=((x62==x63)/x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = -1;
	static uint32_t x68 = 570U;
	int32_t t16 = -21;

    t16 = (x65<=((x66==x67)/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MAX;
	static int32_t x70 = -93363541;
	uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 8U;
	int32_t t17 = 211287;

    t17 = (x69<=((x70==x71)/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x74 = 43;
	int32_t x76 = 7;
	int32_t t18 = 998;

    t18 = (x73<=((x74==x75)/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x79 = -113;
	int32_t x80 = INT32_MIN;

    t19 = (x77<=((x78==x79)/x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	uint32_t x83 = 19879480U;

    t20 = (x81<=((x82==x83)/x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -7497;
	uint8_t x86 = UINT8_MAX;
	volatile int32_t x88 = 834790;
	volatile int32_t t21 = -5150;

    t21 = (x85<=((x86==x87)/x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	uint16_t x90 = UINT16_MAX;
	uint16_t x91 = 1008U;
	uint8_t x92 = 35U;
	int32_t t22 = -62;

    t22 = (x89<=((x90==x91)/x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	int32_t x95 = INT32_MIN;

    t23 = (x93<=((x94==x95)/x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MAX;
	int32_t x99 = 769779629;
	volatile uint8_t x100 = 95U;
	int32_t t24 = 250883506;

    t24 = (x97<=((x98==x99)/x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = -1LL;
	volatile int64_t x103 = 33656397LL;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -77;

    t25 = (x101<=((x102==x103)/x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 0;
	uint8_t x107 = 1U;
	int16_t x108 = -17;
	int32_t t26 = 28390597;

    t26 = (x105<=((x106==x107)/x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 4;
	int64_t x110 = INT64_MAX;
	volatile int32_t x111 = INT32_MAX;
	volatile int32_t t27 = -1663;

    t27 = (x109<=((x110==x111)/x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	volatile uint8_t x115 = 3U;
	int64_t x116 = -6313662733939LL;
	volatile int32_t t28 = -6277931;

    t28 = (x113<=((x114==x115)/x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 22119LLU;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -59;
	int16_t x120 = INT16_MIN;

    t29 = (x117<=((x118==x119)/x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	static int64_t x124 = INT64_MIN;

    t30 = (x121<=((x122==x123)/x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -8706253107LL;
	int16_t x126 = -1;
	uint16_t x128 = 1153U;
	int32_t t31 = -1;

    t31 = (x125<=((x126==x127)/x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	volatile int8_t x130 = -1;
	uint64_t x131 = 4087LLU;
	static int32_t x132 = -1;

    t32 = (x129<=((x130==x131)/x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -1;
	static int16_t x135 = -175;
	static volatile uint32_t x136 = UINT32_MAX;
	static int32_t t33 = -4;

    t33 = (x133<=((x134==x135)/x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x137 = UINT64_MAX;
	uint32_t x138 = 15114U;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 713911456;

    t34 = (x137<=((x138==x139)/x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	volatile int64_t x143 = -1LL;

    t35 = (x141<=((x142==x143)/x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 1LL;
	int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = -839506500;

    t36 = (x145<=((x146==x147)/x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 20U;
	static int16_t x150 = 11;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -171;

    t37 = (x149<=((x150==x151)/x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = 20;
	int32_t x154 = INT32_MIN;
	volatile int64_t x155 = INT64_MAX;
	int8_t x156 = -15;
	int32_t t38 = 138;

    t38 = (x153<=((x154==x155)/x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = -1;
	static int64_t x159 = 99686244756299180LL;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = 1;

    t39 = (x157<=((x158==x159)/x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = -1;
	int16_t x164 = -1;
	int32_t t40 = -1;

    t40 = (x161<=((x162==x163)/x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	volatile int8_t x167 = -3;
	uint32_t x168 = 23158U;
	int32_t t41 = 763379;

    t41 = (x165<=((x166==x167)/x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 54U;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = 10U;
	uint32_t x172 = 1952935U;

    t42 = (x169<=((x170==x171)/x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 0;
	int64_t x174 = INT64_MIN;
	int8_t x175 = 58;
	static uint32_t x176 = 362593092U;
	volatile int32_t t43 = 216146;

    t43 = (x173<=((x174==x175)/x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x177 = 3U;
	int16_t x180 = INT16_MIN;
	int32_t t44 = -470435;

    t44 = (x177<=((x178==x179)/x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = 54U;
	int32_t x182 = -1;
	int8_t x183 = INT8_MIN;

    t45 = (x181<=((x182==x183)/x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MAX;
	uint8_t x186 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t46 = -42228;

    t46 = (x185<=((x186==x187)/x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 70731LLU;
	uint32_t x190 = 0U;
	volatile int8_t x191 = 1;
	int32_t x192 = -1018305079;
	static int32_t t47 = -98383;

    t47 = (x189<=((x190==x191)/x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = 255;
	static int32_t x198 = -12;
	int16_t x200 = 1;
	volatile int32_t t48 = -208619;

    t48 = (x197<=((x198==x199)/x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = 804;
	int32_t x202 = 536292;
	volatile int64_t x203 = 100003507638981LL;
	static int32_t x204 = -22;

    t49 = (x201<=((x202==x203)/x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x205 = 8U;
	static volatile int16_t x206 = INT16_MAX;
	static int64_t x208 = INT64_MIN;
	int32_t t50 = -4555;

    t50 = (x205<=((x206==x207)/x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x209 = 24;
	uint8_t x210 = 16U;
	int64_t x212 = -253815080255LL;
	static int32_t t51 = -69508;

    t51 = (x209<=((x210==x211)/x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x213 = INT32_MIN;
	static int8_t x214 = -5;
	volatile int8_t x216 = -1;
	static volatile int32_t t52 = 89;

    t52 = (x213<=((x214==x215)/x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x218 = -144;
	uint16_t x219 = UINT16_MAX;
	static uint8_t x220 = 5U;
	static int32_t t53 = -32034;

    t53 = (x217<=((x218==x219)/x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MIN;

    t54 = (x221<=((x222==x223)/x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x225 = 4472U;
	volatile int16_t x226 = INT16_MIN;
	uint64_t x228 = 13562962089LLU;
	int32_t t55 = -535356822;

    t55 = (x225<=((x226==x227)/x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x229 = INT64_MIN;
	uint8_t x230 = UINT8_MAX;
	static volatile int32_t x231 = INT32_MIN;
	static volatile int16_t x232 = -1;
	volatile int32_t t56 = -205468;

    t56 = (x229<=((x230==x231)/x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MAX;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t57 = -10139525;

    t57 = (x233<=((x234==x235)/x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x237 = INT64_MIN;
	int16_t x238 = 1;
	uint8_t x239 = 25U;
	static int32_t x240 = -1;
	int32_t t58 = 82542;

    t58 = (x237<=((x238==x239)/x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = 1024995067964867712LL;
	int64_t x243 = INT64_MAX;
	int32_t t59 = 821;

    t59 = (x241<=((x242==x243)/x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = INT8_MAX;
	volatile uint8_t x246 = 7U;
	volatile int8_t x247 = INT8_MIN;
	static int32_t t60 = -8;

    t60 = (x245<=((x246==x247)/x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MAX;
	volatile int32_t x250 = -1;
	uint8_t x252 = 2U;
	volatile int32_t t61 = 5009;

    t61 = (x249<=((x250==x251)/x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x253 = 630061869U;
	int64_t x254 = INT64_MIN;
	volatile int32_t x255 = INT32_MAX;
	int16_t x256 = -210;

    t62 = (x253<=((x254==x255)/x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x258 = INT64_MIN;
	static uint32_t x259 = 30U;
	uint64_t x260 = 173928514LLU;
	volatile int32_t t63 = -204574;

    t63 = (x257<=((x258==x259)/x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x261 = 32U;
	static int64_t x262 = -11672405LL;
	int8_t x263 = INT8_MIN;
	volatile uint16_t x264 = 3U;
	volatile int32_t t64 = -3605;

    t64 = (x261<=((x262==x263)/x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x265 = 805U;
	static int32_t x266 = INT32_MAX;
	int16_t x267 = 1;
	int32_t x268 = INT32_MIN;
	static int32_t t65 = -125;

    t65 = (x265<=((x266==x267)/x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x269 = -252;
	static int32_t x270 = -1;
	volatile int8_t x271 = INT8_MAX;
	static int64_t x272 = -1LL;
	volatile int32_t t66 = 1;

    t66 = (x269<=((x270==x271)/x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -189;

    t67 = (x273<=((x274==x275)/x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x277 = INT16_MIN;
	volatile uint16_t x278 = 0U;
	int8_t x279 = 3;

    t68 = (x277<=((x278==x279)/x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = INT64_MIN;
	uint64_t x282 = 1207700862837LLU;
	volatile int32_t x283 = INT32_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t69 = -136845673;

    t69 = (x281<=((x282==x283)/x284));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = -1;
	int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;

    t70 = (x285<=((x286==x287)/x288));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x290 = INT8_MAX;
	static int64_t x291 = INT64_MIN;
	static uint32_t x292 = 39681U;
	volatile int32_t t71 = -554284422;

    t71 = (x289<=((x290==x291)/x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -3;
	uint8_t x295 = UINT8_MAX;
	int32_t t72 = -83847;

    t72 = (x293<=((x294==x295)/x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x298 = 417U;
	uint8_t x300 = UINT8_MAX;

    t73 = (x297<=((x298==x299)/x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x302 = 24U;
	static int64_t x303 = INT64_MIN;
	uint8_t x304 = 2U;

    t74 = (x301<=((x302==x303)/x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x305 = 0U;
	static volatile uint32_t x308 = UINT32_MAX;
	static int32_t t75 = -1;

    t75 = (x305<=((x306==x307)/x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x310 = -6298;
	int32_t x311 = INT32_MAX;
	static uint64_t x312 = UINT64_MAX;
	static int32_t t76 = 268724782;

    t76 = (x309<=((x310==x311)/x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	int16_t x314 = -1412;
	int64_t x315 = INT64_MIN;
	int64_t x316 = -1LL;
	int32_t t77 = -1064195;

    t77 = (x313<=((x314==x315)/x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	static int32_t t78 = -24284550;

    t78 = (x317<=((x318==x319)/x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = -1;
	uint16_t x322 = 65U;
	int8_t x323 = INT8_MIN;
	static int32_t x324 = 147;
	static int32_t t79 = -2894;

    t79 = (x321<=((x322==x323)/x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x326 = INT64_MAX;
	volatile uint16_t x327 = 596U;
	volatile int32_t t80 = -102790;

    t80 = (x325<=((x326==x327)/x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x329 = INT32_MIN;
	volatile int16_t x331 = -1;
	int32_t x332 = -1;
	int32_t t81 = 646;

    t81 = (x329<=((x330==x331)/x332));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x333 = 12549U;
	int64_t x334 = -1LL;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	int32_t t82 = 7;

    t82 = (x333<=((x334==x335)/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x337 = -1;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int32_t t83 = 250216;

    t83 = (x337<=((x338==x339)/x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x342 = -123023981273LL;
	uint64_t x343 = 1466878LLU;
	static int32_t x344 = 309228249;
	int32_t t84 = -3330;

    t84 = (x341<=((x342==x343)/x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = -1;
	int16_t x346 = -1;
	uint32_t x347 = 81274U;
	int32_t x348 = INT32_MAX;
	int32_t t85 = -370159;

    t85 = (x345<=((x346==x347)/x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = 2035234;
	int16_t x350 = 1794;
	static uint8_t x352 = 16U;

    t86 = (x349<=((x350==x351)/x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x353 = -19517LL;
	static int8_t x354 = INT8_MAX;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = 16065;

    t87 = (x353<=((x354==x355)/x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = INT16_MAX;
	uint16_t x362 = 381U;
	int32_t x363 = INT32_MIN;
	volatile int64_t x364 = -1LL;

    t88 = (x361<=((x362==x363)/x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x366 = UINT8_MAX;
	int8_t x367 = 7;
	int64_t x368 = INT64_MAX;
	volatile int32_t t89 = -3256209;

    t89 = (x365<=((x366==x367)/x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MIN;
	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = 2276488U;
	volatile int32_t t90 = -1;

    t90 = (x369<=((x370==x371)/x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = -316;
	int8_t x374 = -1;
	int8_t x375 = -1;
	int32_t x376 = 3540965;

    t91 = (x373<=((x374==x375)/x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x377 = -2;
	int64_t x378 = -1LL;
	static int32_t x379 = INT32_MAX;
	int64_t x380 = INT64_MIN;

    t92 = (x377<=((x378==x379)/x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = 14;
	volatile uint16_t x382 = 12U;
	volatile uint8_t x383 = 4U;
	uint32_t x384 = 511811U;
	static volatile int32_t t93 = 1067915;

    t93 = (x381<=((x382==x383)/x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = INT8_MAX;
	int32_t x386 = -1;
	volatile int8_t x387 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t94 = 577;

    t94 = (x385<=((x386==x387)/x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MAX;
	static volatile int32_t x392 = INT32_MAX;
	int32_t t95 = -212;

    t95 = (x389<=((x390==x391)/x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	volatile int32_t x395 = 57138337;
	int16_t x396 = INT16_MIN;
	volatile int32_t t96 = 0;

    t96 = (x393<=((x394==x395)/x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = 11118872063LL;
	volatile int64_t x398 = -1LL;
	int64_t x400 = INT64_MIN;
	int32_t t97 = 91;

    t97 = (x397<=((x398==x399)/x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = 353;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = 8418U;

    t98 = (x401<=((x402==x403)/x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x406 = INT32_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t99 = -8802;

    t99 = (x405<=((x406==x407)/x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x409 = 3579100518542LL;
	volatile uint32_t x410 = UINT32_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t100 = -927;

    t100 = (x409<=((x410==x411)/x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x413 = INT64_MIN;
	int8_t x414 = -1;
	volatile int32_t x415 = INT32_MIN;
	int32_t t101 = -950891360;

    t101 = (x413<=((x414==x415)/x416));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x417 = 0;
	volatile int8_t x419 = INT8_MAX;
	int8_t x420 = -1;
	static int32_t t102 = -1819401;

    t102 = (x417<=((x418==x419)/x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = INT8_MAX;
	static int16_t x422 = INT16_MAX;
	volatile uint32_t x423 = 257193U;
	volatile uint8_t x424 = UINT8_MAX;

    t103 = (x421<=((x422==x423)/x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile uint64_t x426 = 62LLU;
	volatile int32_t t104 = -94576103;

    t104 = (x425<=((x426==x427)/x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x429 = INT8_MAX;
	int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	int32_t t105 = -983148;

    t105 = (x429<=((x430==x431)/x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x434 = -315547698913LL;
	int32_t x435 = INT32_MAX;
	static uint8_t x436 = UINT8_MAX;

    t106 = (x433<=((x434==x435)/x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x437 = 24756246580252420LLU;
	volatile int64_t x438 = -1LL;
	volatile int8_t x439 = INT8_MIN;
	volatile int32_t x440 = INT32_MAX;

    t107 = (x437<=((x438==x439)/x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = INT64_MAX;
	int16_t x443 = 2;
	static int64_t x444 = INT64_MIN;
	int32_t t108 = -17993994;

    t108 = (x441<=((x442==x443)/x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x446 = 34;
	uint8_t x447 = 98U;
	int16_t x448 = INT16_MIN;
	int32_t t109 = -204915;

    t109 = (x445<=((x446==x447)/x448));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x449 = 1U;
	uint16_t x450 = 922U;
	volatile int8_t x452 = INT8_MIN;
	int32_t t110 = -269110;

    t110 = (x449<=((x450==x451)/x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x453 = 124814639U;
	volatile uint8_t x454 = UINT8_MAX;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t111 = 1978013;

    t111 = (x453<=((x454==x455)/x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x457 = 132934211U;
	static int64_t x458 = -1LL;
	int16_t x459 = -1;
	volatile int32_t t112 = 11219992;

    t112 = (x457<=((x458==x459)/x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MAX;
	volatile int8_t x462 = 1;
	int64_t x463 = 1467776556675127LL;
	int8_t x464 = INT8_MAX;
	static volatile int32_t t113 = -4;

    t113 = (x461<=((x462==x463)/x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = -4096;
	int64_t x466 = INT64_MIN;
	uint16_t x467 = 3531U;
	volatile int32_t x468 = INT32_MAX;
	volatile int32_t t114 = 3743495;

    t114 = (x465<=((x466==x467)/x468));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x469 = INT32_MIN;
	static uint64_t x471 = 74232006729LLU;
	int32_t x472 = INT32_MIN;
	volatile int32_t t115 = -569;

    t115 = (x469<=((x470==x471)/x472));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = 557580213802LL;
	int64_t x474 = INT64_MIN;
	uint8_t x476 = 29U;

    t116 = (x473<=((x474==x475)/x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x477 = -206806878382437LL;
	volatile uint32_t x479 = 52U;
	int16_t x480 = -1;
	volatile int32_t t117 = -2;

    t117 = (x477<=((x478==x479)/x480));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = 48515592781252LLU;
	uint16_t x482 = UINT16_MAX;
	static int64_t x483 = 231060220163121LL;
	int16_t x484 = -1;

    t118 = (x481<=((x482==x483)/x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x485 = -1180;
	volatile uint8_t x487 = UINT8_MAX;
	static volatile int8_t x488 = INT8_MIN;
	int32_t t119 = 47166;

    t119 = (x485<=((x486==x487)/x488));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x489 = 10U;
	static uint64_t x490 = 12860752446457247LLU;
	uint32_t x492 = 9627708U;
	int32_t t120 = 1;

    t120 = (x489<=((x490==x491)/x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x493 = -15;
	static int8_t x494 = INT8_MAX;
	uint16_t x495 = 15051U;

    t121 = (x493<=((x494==x495)/x496));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	int8_t x499 = -1;
	volatile int16_t x500 = 1;
	volatile int32_t t122 = 5;

    t122 = (x497<=((x498==x499)/x500));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x501 = -1;
	int8_t x502 = 19;
	volatile int8_t x503 = INT8_MIN;
	volatile int32_t x504 = -2408989;
	int32_t t123 = 0;

    t123 = (x501<=((x502==x503)/x504));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = 826;
	int16_t x506 = INT16_MIN;
	int64_t x507 = -1LL;
	static int32_t x508 = INT32_MIN;
	int32_t t124 = -228;

    t124 = (x505<=((x506==x507)/x508));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x509 = -3;
	uint8_t x510 = 4U;
	volatile int64_t x511 = 377LL;
	int64_t x512 = INT64_MIN;

    t125 = (x509<=((x510==x511)/x512));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x513 = -1;
	int64_t x514 = INT64_MIN;
	int32_t x515 = -11;
	uint64_t x516 = 266084950LLU;
	int32_t t126 = -82270;

    t126 = (x513<=((x514==x515)/x516));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x517 = 87U;
	int32_t x518 = INT32_MIN;
	volatile uint16_t x519 = UINT16_MAX;
	static uint32_t x520 = 939351476U;

    t127 = (x517<=((x518==x519)/x520));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x521 = 31U;
	volatile uint32_t x522 = UINT32_MAX;
	volatile int32_t x523 = -31178;
	static volatile int8_t x524 = 16;
	static volatile int32_t t128 = 480755;

    t128 = (x521<=((x522==x523)/x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x525 = 39693754767796LLU;
	volatile int16_t x526 = 1267;
	uint32_t x527 = UINT32_MAX;
	int64_t x528 = INT64_MAX;
	volatile int32_t t129 = -670;

    t129 = (x525<=((x526==x527)/x528));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x529 = 1;
	uint8_t x531 = 3U;
	int32_t x532 = INT32_MAX;
	int32_t t130 = 63;

    t130 = (x529<=((x530==x531)/x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MIN;
	static int16_t x535 = INT16_MIN;
	static uint64_t x536 = 214717818504022LLU;
	int32_t t131 = 5176;

    t131 = (x533<=((x534==x535)/x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x537 = -119076LL;
	int64_t x538 = INT64_MIN;
	static int32_t t132 = -286429;

    t132 = (x537<=((x538==x539)/x540));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x541 = 2949;
	int64_t x543 = INT64_MAX;
	static uint32_t x544 = 294079U;
	static int32_t t133 = -464209;

    t133 = (x541<=((x542==x543)/x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x545 = 77LLU;
	int64_t x546 = 341073970689LL;
	int64_t x547 = INT64_MIN;
	uint32_t x548 = UINT32_MAX;
	int32_t t134 = 10322858;

    t134 = (x545<=((x546==x547)/x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x549 = UINT64_MAX;
	static int64_t x550 = -1LL;
	int64_t x551 = -861424990420047896LL;
	volatile int64_t x552 = 179426746277587LL;
	volatile int32_t t135 = -268186683;

    t135 = (x549<=((x550==x551)/x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x554 = 61;
	int16_t x555 = INT16_MIN;
	uint64_t x556 = 3160046454LLU;
	int32_t t136 = 70987;

    t136 = (x553<=((x554==x555)/x556));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x557 = 2U;
	volatile int8_t x559 = INT8_MAX;
	int16_t x560 = -37;
	static int32_t t137 = -10;

    t137 = (x557<=((x558==x559)/x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x561 = -1;
	uint64_t x562 = UINT64_MAX;
	volatile int32_t x563 = INT32_MIN;
	volatile int64_t x564 = 238223585623162LL;
	volatile int32_t t138 = -3981;

    t138 = (x561<=((x562==x563)/x564));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x566 = INT64_MIN;
	int8_t x567 = INT8_MIN;
	volatile int64_t x568 = 70951154708134LL;
	static volatile int32_t t139 = 5569930;

    t139 = (x565<=((x566==x567)/x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = INT32_MIN;
	static int32_t x570 = -1;
	uint64_t x571 = 1195579425987LLU;
	static int32_t x572 = 21911;
	volatile int32_t t140 = -34398;

    t140 = (x569<=((x570==x571)/x572));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x573 = UINT32_MAX;
	uint16_t x576 = UINT16_MAX;
	int32_t t141 = -1;

    t141 = (x573<=((x574==x575)/x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x579 = 4U;
	int32_t x580 = INT32_MIN;
	int32_t t142 = -60;

    t142 = (x577<=((x578==x579)/x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x582 = INT8_MAX;
	volatile int8_t x583 = 0;
	uint8_t x584 = 2U;
	volatile int32_t t143 = 465863701;

    t143 = (x581<=((x582==x583)/x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x585 = 9U;
	int32_t x586 = -3778538;
	uint64_t x587 = 0LLU;
	int32_t t144 = -609;

    t144 = (x585<=((x586==x587)/x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x589 = -1;
	uint16_t x591 = 22U;
	int32_t x592 = INT32_MIN;
	int32_t t145 = 2;

    t145 = (x589<=((x590==x591)/x592));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = -1;
	static uint16_t x594 = 1U;
	int64_t x595 = -1LL;

    t146 = (x593<=((x594==x595)/x596));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x597 = 2031933690434LLU;
	int64_t x598 = INT64_MAX;
	int64_t x599 = -1LL;
	int16_t x600 = INT16_MIN;
	volatile int32_t t147 = -214;

    t147 = (x597<=((x598==x599)/x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x601 = 1U;
	uint8_t x602 = 40U;
	uint8_t x603 = 4U;
	int8_t x604 = 6;
	volatile int32_t t148 = -63;

    t148 = (x601<=((x602==x603)/x604));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x606 = INT32_MIN;
	volatile uint32_t x607 = 5233761U;
	int32_t x608 = INT32_MAX;
	int32_t t149 = -18;

    t149 = (x605<=((x606==x607)/x608));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x610 = INT8_MIN;
	int64_t x611 = INT64_MIN;
	int32_t x612 = -1;
	int32_t t150 = -18467266;

    t150 = (x609<=((x610==x611)/x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x615 = UINT8_MAX;
	int64_t x616 = INT64_MIN;
	int32_t t151 = -633113;

    t151 = (x613<=((x614==x615)/x616));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x619 = 52080660039875332LLU;
	int64_t x620 = INT64_MIN;
	int32_t t152 = 65602956;

    t152 = (x617<=((x618==x619)/x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x621 = 3363U;
	uint8_t x623 = 111U;
	int8_t x624 = -1;
	int32_t t153 = 7;

    t153 = (x621<=((x622==x623)/x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x625 = INT8_MIN;
	int64_t x626 = INT64_MIN;
	volatile int64_t x627 = -1LL;
	uint8_t x628 = 27U;
	volatile int32_t t154 = 558;

    t154 = (x625<=((x626==x627)/x628));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x629 = -1;
	int32_t x630 = -15391796;
	static volatile int16_t x631 = INT16_MAX;
	int64_t x632 = INT64_MIN;
	volatile int32_t t155 = -139441333;

    t155 = (x629<=((x630==x631)/x632));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x633 = 82U;
	int32_t x635 = -53677;
	int8_t x636 = -1;

    t156 = (x633<=((x634==x635)/x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x638 = INT32_MIN;
	int64_t x639 = -1LL;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t157 = -1;

    t157 = (x637<=((x638==x639)/x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x641 = 3618U;
	int8_t x642 = INT8_MIN;
	uint8_t x643 = UINT8_MAX;
	int32_t x644 = -1;

    t158 = (x641<=((x642==x643)/x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = -233209LL;
	int64_t x647 = 82378289LL;
	int16_t x648 = INT16_MIN;
	volatile int32_t t159 = -726;

    t159 = (x645<=((x646==x647)/x648));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x650 = 15U;
	int64_t x652 = INT64_MAX;
	volatile int32_t t160 = -5721;

    t160 = (x649<=((x650==x651)/x652));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	uint8_t x654 = 10U;
	int16_t x655 = 4;

    t161 = (x653<=((x654==x655)/x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x657 = 584U;
	int8_t x659 = INT8_MIN;
	volatile int32_t t162 = -1350535;

    t162 = (x657<=((x658==x659)/x660));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x661 = 0;
	volatile int16_t x662 = INT16_MIN;
	int16_t x663 = INT16_MIN;
	uint64_t x664 = 751853957236700226LLU;
	int32_t t163 = -698903785;

    t163 = (x661<=((x662==x663)/x664));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x667 = -1;
	int64_t x668 = 733873656312385487LL;
	int32_t t164 = -35;

    t164 = (x665<=((x666==x667)/x668));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x670 = -7;
	volatile uint16_t x671 = 458U;

    t165 = (x669<=((x670==x671)/x672));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x675 = INT32_MAX;
	int64_t x676 = INT64_MIN;

    t166 = (x673<=((x674==x675)/x676));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = -525;
	int64_t x678 = -68LL;
	volatile uint16_t x679 = 214U;
	uint16_t x680 = 2339U;
	volatile int32_t t167 = 131183244;

    t167 = (x677<=((x678==x679)/x680));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x681 = INT32_MIN;
	int32_t x683 = 0;
	int32_t t168 = 24363807;

    t168 = (x681<=((x682==x683)/x684));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x685 = 8818126U;
	int8_t x686 = INT8_MIN;
	static uint64_t x687 = UINT64_MAX;
	volatile int32_t t169 = -1312133;

    t169 = (x685<=((x686==x687)/x688));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x690 = UINT16_MAX;
	int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MAX;

    t170 = (x689<=((x690==x691)/x692));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x694 = INT64_MIN;
	static int64_t x695 = 23135506972833LL;
	static int64_t x696 = INT64_MIN;
	volatile int32_t t171 = -13326;

    t171 = (x693<=((x694==x695)/x696));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x697 = -1LL;
	int16_t x698 = -35;
	volatile int64_t x699 = 2935825080374LL;
	static uint64_t x700 = 125719696LLU;
	int32_t t172 = 1184749;

    t172 = (x697<=((x698==x699)/x700));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x701 = UINT64_MAX;
	int64_t x702 = INT64_MAX;
	int8_t x703 = INT8_MIN;
	static volatile uint64_t x704 = 925104LLU;

    t173 = (x701<=((x702==x703)/x704));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x705 = -1;
	volatile int32_t t174 = -607;

    t174 = (x705<=((x706==x707)/x708));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x709 = 2488LLU;
	volatile int16_t x710 = 1;
	static int32_t x712 = -1;
	int32_t t175 = -460395471;

    t175 = (x709<=((x710==x711)/x712));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x713 = UINT64_MAX;
	static int32_t x714 = INT32_MAX;
	int32_t x715 = INT32_MAX;
	static volatile int32_t t176 = 444;

    t176 = (x713<=((x714==x715)/x716));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x717 = UINT32_MAX;
	static int16_t x718 = 331;
	int32_t x720 = INT32_MIN;
	int32_t t177 = -40297;

    t177 = (x717<=((x718==x719)/x720));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x722 = -1;
	uint16_t x723 = 1523U;
	int32_t x724 = INT32_MIN;
	int32_t t178 = 475413;

    t178 = (x721<=((x722==x723)/x724));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x725 = -2578;
	volatile int32_t x728 = -1;
	int32_t t179 = 631918937;

    t179 = (x725<=((x726==x727)/x728));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x729 = -1;
	int8_t x731 = INT8_MIN;
	int32_t t180 = -75827577;

    t180 = (x729<=((x730==x731)/x732));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x733 = -50829LL;
	volatile int8_t x735 = -2;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t181 = -42257891;

    t181 = (x733<=((x734==x735)/x736));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x737 = 16U;
	int32_t x738 = INT32_MIN;
	volatile int8_t x739 = -1;
	uint8_t x740 = UINT8_MAX;
	int32_t t182 = -2695060;

    t182 = (x737<=((x738==x739)/x740));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x741 = -675028;
	int64_t x742 = INT64_MIN;
	int16_t x744 = INT16_MAX;
	int32_t t183 = 16277107;

    t183 = (x741<=((x742==x743)/x744));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x745 = -1;
	volatile uint8_t x746 = UINT8_MAX;
	volatile int16_t x747 = INT16_MIN;
	int32_t x748 = 163834164;
	volatile int32_t t184 = -12;

    t184 = (x745<=((x746==x747)/x748));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x749 = -13895;
	int64_t x750 = -18080616000LL;
	volatile int32_t x751 = INT32_MIN;
	uint8_t x752 = UINT8_MAX;
	static int32_t t185 = 2;

    t185 = (x749<=((x750==x751)/x752));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x753 = UINT8_MAX;
	static volatile int32_t x754 = -1;
	static uint8_t x755 = UINT8_MAX;
	uint32_t x756 = 1558U;
	volatile int32_t t186 = 31459;

    t186 = (x753<=((x754==x755)/x756));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x757 = INT32_MIN;
	int16_t x758 = -1;
	static uint16_t x759 = UINT16_MAX;
	int32_t t187 = 0;

    t187 = (x757<=((x758==x759)/x760));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x761 = INT8_MIN;
	static int16_t x762 = INT16_MIN;
	static int8_t x763 = -1;
	static uint8_t x764 = UINT8_MAX;
	int32_t t188 = -249;

    t188 = (x761<=((x762==x763)/x764));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x766 = 29U;
	int16_t x767 = 0;
	uint32_t x768 = 800553417U;

    t189 = (x765<=((x766==x767)/x768));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x769 = 14348090489LL;
	uint8_t x770 = 5U;
	int8_t x771 = 14;
	int64_t x772 = INT64_MIN;
	volatile int32_t t190 = 147009;

    t190 = (x769<=((x770==x771)/x772));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x773 = -1LL;
	static uint64_t x775 = 182LLU;
	static volatile int16_t x776 = 927;

    t191 = (x773<=((x774==x775)/x776));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x777 = INT32_MAX;
	static int8_t x780 = INT8_MIN;
	static volatile int32_t t192 = -30;

    t192 = (x777<=((x778==x779)/x780));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x782 = -52996182;
	static int8_t x783 = -1;
	int16_t x784 = -1;
	volatile int32_t t193 = 23176;

    t193 = (x781<=((x782==x783)/x784));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x785 = 8344U;
	int32_t x788 = -20;
	volatile int32_t t194 = 637617101;

    t194 = (x785<=((x786==x787)/x788));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x789 = 0U;
	int16_t x790 = INT16_MIN;
	int8_t x792 = -17;
	int32_t t195 = -35027;

    t195 = (x789<=((x790==x791)/x792));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x793 = 172934240289726981LLU;
	uint32_t x794 = UINT32_MAX;
	static volatile uint32_t x796 = UINT32_MAX;
	static volatile int32_t t196 = -145392052;

    t196 = (x793<=((x794==x795)/x796));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x797 = 63U;
	int64_t x798 = INT64_MAX;
	uint8_t x799 = 10U;
	int32_t x800 = -1;
	volatile int32_t t197 = 12919193;

    t197 = (x797<=((x798==x799)/x800));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x801 = 61;
	int64_t x802 = -1LL;
	uint16_t x803 = UINT16_MAX;

    t198 = (x801<=((x802==x803)/x804));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x805 = INT64_MIN;
	static int8_t x806 = 21;
	static volatile int32_t x807 = INT32_MIN;
	uint64_t x808 = UINT64_MAX;

    t199 = (x805<=((x806==x807)/x808));

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

