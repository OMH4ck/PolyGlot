
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

uint64_t x7 = UINT64_MAX;
int8_t x11 = -1;
int16_t x13 = 4324;
static int16_t x14 = 681;
int32_t t3 = -42324;
uint64_t x20 = 24124293676302589LLU;
int16_t x28 = INT16_MIN;
uint64_t x32 = 5082LLU;
volatile uint64_t t7 = 3LLU;
uint32_t x34 = UINT32_MAX;
volatile int64_t x35 = INT64_MIN;
int64_t x41 = 703355661111LL;
volatile uint16_t x42 = UINT16_MAX;
int16_t x45 = 89;
int32_t x47 = INT32_MIN;
volatile int64_t x49 = -69393396745033356LL;
uint64_t x56 = 114LLU;
int32_t x57 = -1;
static int8_t x59 = INT8_MIN;
uint32_t x61 = UINT32_MAX;
int16_t x63 = INT16_MIN;
static uint8_t x69 = 4U;
int32_t x71 = INT32_MAX;
volatile int16_t x72 = INT16_MAX;
int64_t x73 = -1013862412677167467LL;
volatile int64_t t18 = 0LL;
static uint64_t x80 = UINT64_MAX;
int64_t x90 = INT64_MAX;
int16_t x94 = -1;
volatile int32_t t23 = -201380;
volatile int32_t x98 = 995793;
int64_t x101 = 9572762588353403LL;
uint16_t x103 = 18807U;
int16_t x109 = -60;
volatile int64_t x110 = -1LL;
int32_t x116 = -1;
static int8_t x117 = 5;
static volatile uint16_t x120 = UINT16_MAX;
volatile uint64_t x124 = 9101LLU;
int16_t x126 = INT16_MIN;
int16_t x130 = INT16_MAX;
uint64_t x131 = 1029061745463873LLU;
uint32_t x135 = UINT32_MAX;
int8_t x136 = -4;
uint16_t x138 = 112U;
int16_t x142 = INT16_MAX;
volatile int16_t x156 = INT16_MAX;
volatile int32_t x157 = -1;
volatile uint8_t x161 = UINT8_MAX;
int16_t x179 = INT16_MIN;
static int32_t x181 = INT32_MIN;
uint64_t x183 = 224213LLU;
int32_t x187 = -1;
int8_t x190 = -1;
volatile uint8_t x196 = 42U;
volatile int64_t t49 = 50105583329159LL;
uint8_t x201 = UINT8_MAX;
int8_t x203 = 10;
volatile int64_t t51 = 556680581849LL;
volatile int64_t t52 = -547993843136442492LL;
static int64_t x215 = INT64_MIN;
int8_t x216 = INT8_MAX;
uint64_t t53 = 1368645LLU;
int16_t x222 = -1;
static volatile int16_t x238 = -1;
int64_t x240 = INT64_MIN;
volatile uint32_t t59 = 790832970U;
int16_t x242 = -1;
volatile int64_t x245 = INT64_MIN;
uint16_t x246 = 100U;
volatile int8_t x254 = INT8_MAX;
int8_t x255 = INT8_MIN;
uint32_t x256 = UINT32_MAX;
static uint64_t x258 = 22LLU;
volatile int8_t x262 = -1;
static int64_t x263 = INT64_MAX;
uint32_t x267 = 57U;
int64_t x268 = 14079238LL;
int16_t x275 = 335;
static int8_t x280 = INT8_MIN;
int32_t x283 = INT32_MIN;
volatile int32_t t70 = -68;
int64_t x291 = INT64_MAX;
static int16_t x298 = INT16_MIN;
int32_t x309 = INT32_MAX;
uint64_t x310 = UINT64_MAX;
int32_t x311 = INT32_MIN;
volatile int16_t x312 = -1;
int32_t t77 = 91505;
int32_t x314 = INT32_MAX;
uint8_t x327 = UINT8_MAX;
int8_t x337 = -1;
uint8_t x341 = 0U;
volatile int32_t x342 = INT32_MIN;
volatile int32_t t85 = -1;
int32_t t86 = -4052;
int32_t x351 = INT32_MIN;
uint8_t x357 = UINT8_MAX;
uint64_t x359 = 166132LLU;
int16_t x360 = 471;
uint32_t x362 = 132000U;
volatile uint64_t t90 = 241215105951790LLU;
volatile int8_t x366 = 3;
static uint64_t x371 = 8334291163452724341LLU;
volatile int64_t t92 = -7185LL;
int32_t t94 = -4343614;
int32_t x383 = INT32_MIN;
int32_t x395 = INT32_MAX;
volatile uint8_t x398 = 51U;
static int16_t x401 = 1;
int16_t x404 = INT16_MAX;
volatile int32_t t100 = -2;
static volatile int32_t t101 = -300562870;
int32_t x409 = INT32_MIN;
static int16_t x410 = -12520;
uint8_t x412 = UINT8_MAX;
int64_t x417 = -216587565215LL;
uint64_t x422 = UINT64_MAX;
uint32_t x426 = UINT32_MAX;
volatile int8_t x427 = -1;
static uint64_t x428 = 1121144796149996453LLU;
static volatile int8_t x429 = INT8_MAX;
static uint16_t x432 = 161U;
int32_t x437 = -1;
int32_t t109 = -85646826;
int64_t x454 = -1LL;
uint16_t x465 = UINT16_MAX;
int32_t t116 = 888674;
int64_t x470 = -95914618476LL;
uint16_t x474 = UINT16_MAX;
int16_t x479 = INT16_MIN;
static int64_t x482 = INT64_MIN;
int64_t x493 = -1LL;
int64_t x497 = 14792LL;
uint64_t x499 = UINT64_MAX;
static int32_t t127 = 1648;
int32_t x518 = -1;
volatile int16_t x521 = 0;
int32_t x525 = 117;
static int32_t x527 = -1;
int64_t x533 = INT64_MAX;
int16_t x546 = INT16_MIN;
volatile uint16_t x548 = 17163U;
uint32_t t136 = 402159U;
static int16_t x551 = 5;
int16_t x559 = INT16_MIN;
volatile int32_t t141 = -137;
int32_t x569 = INT32_MAX;
volatile int16_t x579 = -3;
volatile int32_t t145 = -61422;
int64_t x591 = INT64_MIN;
static volatile uint32_t t147 = 101618419U;
uint16_t x597 = 26844U;
uint64_t x599 = 29817773LLU;
int32_t x605 = INT32_MAX;
static int32_t t151 = 604879961;
volatile uint64_t x610 = 61LLU;
int32_t t152 = -13253;
volatile int32_t t153 = -2;
int8_t x617 = INT8_MAX;
int16_t x619 = -13;
static int8_t x620 = INT8_MAX;
int16_t x621 = INT16_MAX;
static int8_t x622 = INT8_MIN;
int8_t x630 = INT8_MAX;
int16_t x639 = INT16_MIN;
volatile int64_t x642 = INT64_MIN;
int8_t x643 = INT8_MIN;
static uint64_t x650 = 3648765908466LLU;
int16_t x660 = -6288;
volatile int64_t t165 = 0LL;
int8_t x674 = 17;
int32_t x675 = -1;
static volatile int32_t x680 = INT32_MIN;
int16_t x684 = 1;
static uint32_t x685 = 1451227885U;
int8_t x686 = -8;
uint8_t x692 = UINT8_MAX;
uint64_t x695 = 132469721963LLU;
int32_t t174 = -6;
int8_t x703 = INT8_MIN;
static int64_t x706 = -1LL;
uint16_t x709 = UINT16_MAX;
uint16_t x715 = 2U;
static int32_t x716 = 6306;
int32_t t178 = -1188699;
static int64_t x719 = 517385450LL;
static int32_t t180 = 122118;
volatile int32_t x732 = -1;
int32_t t184 = -110;
int8_t x743 = INT8_MIN;
uint64_t x744 = UINT64_MAX;
volatile int32_t t185 = -155;
int32_t x752 = INT32_MIN;
uint64_t x757 = 26693035173029LLU;
uint8_t x758 = 1U;
static int8_t x765 = -19;
int32_t x769 = 13000752;
int32_t t192 = -1239;
uint8_t x780 = 3U;
static uint32_t t196 = 972734906U;
int32_t x790 = INT32_MIN;
volatile int32_t x792 = -1;
int32_t x793 = INT32_MIN;
int32_t x794 = -1;
static volatile int32_t t198 = -8;
int32_t x798 = -1796718;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int32_t x2 = -6788635;
	uint64_t x3 = 253442386715LLU;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -10372859;

    t0 = (x1&((x2|x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = -7;
	uint8_t x8 = 95U;
	int32_t t1 = 6714354;

    t1 = (x5&((x6|x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint32_t x10 = UINT32_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 949975133;

    t2 = (x9&((x10|x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MAX;

    t3 = (x13&((x14|x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x17 = 0U;
	uint32_t x18 = 25685U;
	volatile int16_t x19 = INT16_MIN;
	static int32_t t4 = -6033036;

    t4 = (x17&((x18|x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 12U;
	static int32_t x22 = -32004;
	volatile int16_t x23 = -116;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 110660560;

    t5 = (x21&((x22|x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint8_t x26 = 0U;
	int64_t x27 = INT64_MAX;
	volatile int32_t t6 = 0;

    t6 = (x25&((x26|x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = UINT64_MAX;
	static int16_t x30 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;

    t7 = (x29&((x30|x31)!=x32));

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = 40;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -6252;

    t8 = (x33&((x34|x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static int32_t x38 = INT32_MAX;
	volatile int32_t x39 = INT32_MAX;
	volatile int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 24LLU;

    t9 = (x37&((x38|x39)!=x40));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;
	int64_t t10 = -1LL;

    t10 = (x41&((x42|x43)!=x44));

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = INT16_MIN;
	static volatile int16_t x48 = -797;
	volatile int32_t t11 = -31;

    t11 = (x45&((x46|x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = 782830397U;
	uint32_t x51 = 254204U;
	uint32_t x52 = UINT32_MAX;
	volatile int64_t t12 = 37140511904198004LL;

    t12 = (x49&((x50|x51)!=x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = 2;
	volatile int32_t t13 = -6;

    t13 = (x53&((x54|x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = UINT32_MAX;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -97680;

    t14 = (x57&((x58|x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = 274;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t15 = 1006476382U;

    t15 = (x61&((x62|x63)!=x64));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	volatile uint64_t x66 = 370162943825703LLU;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 1U;
	static int32_t t16 = -25549935;

    t16 = (x65&((x66|x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = 0LL;
	static volatile int32_t t17 = 1;

    t17 = (x69&((x70|x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x74 = 40177116774415LLU;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 46581425U;

    t18 = (x73&((x74|x75)!=x76));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	int32_t x78 = -20790;
	static int32_t x79 = 34;
	volatile int32_t t19 = -555;

    t19 = (x77&((x78|x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = -1804;
	int64_t x82 = -1LL;
	volatile uint16_t x83 = 134U;
	int8_t x84 = 6;
	volatile int32_t t20 = -7;

    t20 = (x81&((x82|x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MIN;
	static uint64_t x86 = 197475LLU;
	int32_t x87 = 8840658;
	int16_t x88 = -1;
	volatile int32_t t21 = 1;

    t21 = (x85&((x86|x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 527703498U;
	volatile uint64_t x91 = 7186253465654941251LLU;
	int32_t x92 = INT32_MAX;
	static uint32_t t22 = 625727U;

    t22 = (x89&((x90|x91)!=x92));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;

    t23 = (x93&((x94|x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x97 = 7U;
	int16_t x99 = 1;
	int16_t x100 = 4063;
	uint32_t t24 = 1U;

    t24 = (x97&((x98|x99)!=x100));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x102 = INT16_MAX;
	uint8_t x104 = 8U;
	int64_t t25 = 1039461327326LL;

    t25 = (x101&((x102|x103)!=x104));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = 25U;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = 2228;
	uint64_t x108 = 1489LLU;
	static int32_t t26 = -1;

    t26 = (x105&((x106|x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x111 = INT8_MAX;
	uint8_t x112 = 0U;
	static int32_t t27 = 10274029;

    t27 = (x109&((x110|x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 786;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = 39186U;
	int32_t t28 = -312091625;

    t28 = (x113&((x114|x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = -1;
	uint16_t x119 = 24U;
	volatile int32_t t29 = -41;

    t29 = (x117&((x118|x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int64_t x122 = INT64_MIN;
	volatile uint16_t x123 = UINT16_MAX;
	static int32_t t30 = 7579;

    t30 = (x121&((x122|x123)!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = 8321;
	int32_t t31 = 7127138;

    t31 = (x125&((x126|x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 2362U;
	volatile int16_t x132 = -1;
	uint32_t t32 = 3655701U;

    t32 = (x129&((x130|x131)!=x132));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 30;
	volatile int8_t x134 = INT8_MAX;
	int32_t t33 = -28361000;

    t33 = (x133&((x134|x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 205U;
	int64_t x139 = -1LL;
	volatile int32_t x140 = INT32_MAX;
	int32_t t34 = 4331717;

    t34 = (x137&((x138|x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	volatile int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 5;

    t35 = (x141&((x142|x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static volatile int8_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	static int8_t x148 = INT8_MIN;
	int32_t t36 = 158;

    t36 = (x145&((x146|x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 60793603U;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MAX;
	int64_t x152 = -1LL;
	uint32_t t37 = 285058U;

    t37 = (x149&((x150|x151)!=x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = -1;
	static int8_t x155 = -1;
	static volatile uint64_t t38 = 23665LLU;

    t38 = (x153&((x154|x155)!=x156));

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = 227779827LLU;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 21;

    t39 = (x157&((x158|x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MAX;
	int8_t x164 = -26;
	int32_t t40 = -1;

    t40 = (x161&((x162|x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -4198;
	uint32_t x166 = UINT32_MAX;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MAX;
	int32_t t41 = -884014;

    t41 = (x165&((x166|x167)!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 484246587U;
	int32_t x171 = -34;
	uint16_t x172 = 1287U;
	uint32_t t42 = 48U;

    t42 = (x169&((x170|x171)!=x172));

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint32_t x174 = 6536U;
	int64_t x175 = -42113049581663LL;
	static volatile uint8_t x176 = UINT8_MAX;
	static volatile int32_t t43 = 1;

    t43 = (x173&((x174|x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = -4132204;

    t44 = (x177&((x178|x179)!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x182 = INT16_MIN;
	static int16_t x184 = -1;
	volatile int32_t t45 = -1748339;

    t45 = (x181&((x182|x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	static volatile int8_t x186 = 14;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -238459;

    t46 = (x185&((x186|x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	int64_t x191 = -5509LL;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 1148;

    t47 = (x189&((x190|x191)!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	int64_t t48 = 670536947829310597LL;

    t48 = (x193&((x194|x195)!=x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MAX;
	uint16_t x198 = 19691U;
	uint64_t x199 = 186140696308993004LLU;
	int16_t x200 = -3;

    t49 = (x197&((x198|x199)!=x200));

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = 7;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = -475262372;

    t50 = (x201&((x202|x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = 78052;
	volatile uint32_t x207 = UINT32_MAX;
	int64_t x208 = 1680485586LL;

    t51 = (x205&((x206|x207)!=x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	uint8_t x210 = 26U;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 1U;

    t52 = (x209&((x210|x211)!=x212));

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 979LLU;
	int64_t x214 = INT64_MIN;

    t53 = (x213&((x214|x215)!=x216));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 7005824330LLU;
	int64_t x218 = -7455071330LL;
	int64_t x219 = INT64_MIN;
	volatile int16_t x220 = -1;
	volatile uint64_t t54 = 42940708LLU;

    t54 = (x217&((x218|x219)!=x220));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	static int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t55 = 445789655LL;

    t55 = (x221&((x222|x223)!=x224));

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	static uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MIN;
	int16_t x228 = -1;
	volatile int32_t t56 = -1;

    t56 = (x225&((x226|x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 52U;
	int16_t x232 = 0;
	volatile int32_t t57 = 711;

    t57 = (x229&((x230|x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 1429U;
	int8_t x234 = -34;
	int8_t x235 = INT8_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 76;

    t58 = (x233&((x234|x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = UINT32_MAX;
	volatile uint32_t x239 = 460U;

    t59 = (x237&((x238|x239)!=x240));

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	int64_t x243 = INT64_MAX;
	volatile int64_t x244 = -825161556LL;
	volatile int32_t t60 = 640;

    t60 = (x241&((x242|x243)!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x247 = INT8_MIN;
	int32_t x248 = -3351305;
	volatile int64_t t61 = 4363160352208742LL;

    t61 = (x245&((x246|x247)!=x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	static int16_t x250 = -1;
	int16_t x251 = -1;
	int8_t x252 = -10;
	volatile int32_t t62 = -2177269;

    t62 = (x249&((x250|x251)!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int32_t t63 = -33;

    t63 = (x253&((x254|x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	volatile int8_t x259 = 0;
	uint8_t x260 = UINT8_MAX;
	int64_t t64 = 880995LL;

    t64 = (x257&((x258|x259)!=x260));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = 26;
	static volatile int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -35848;

    t65 = (x261&((x262|x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 206U;
	int32_t x266 = 119681131;
	uint32_t t66 = 3498405U;

    t66 = (x265&((x266|x267)!=x268));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = 4226U;
	uint32_t x270 = UINT32_MAX;
	static volatile uint8_t x271 = 17U;
	volatile int64_t x272 = INT64_MIN;
	int32_t t67 = -111;

    t67 = (x269&((x270|x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MAX;
	volatile int8_t x276 = 1;
	volatile int32_t t68 = -7;

    t68 = (x273&((x274|x275)!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	int8_t x279 = 1;
	volatile int32_t t69 = -29279659;

    t69 = (x277&((x278|x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MIN;
	uint16_t x282 = UINT16_MAX;
	int16_t x284 = INT16_MAX;

    t70 = (x281&((x282|x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = -5983;
	uint64_t x287 = 1701LLU;
	volatile int64_t x288 = -55023301LL;
	static int32_t t71 = -95815;

    t71 = (x285&((x286|x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 50;
	int16_t x290 = INT16_MAX;
	uint64_t x292 = 30162224LLU;
	volatile int32_t t72 = 884922;

    t72 = (x289&((x290|x291)!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = 8285113;
	int64_t x296 = INT64_MAX;
	int32_t t73 = -8304557;

    t73 = (x293&((x294|x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	volatile uint32_t x299 = 14U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 806404;

    t74 = (x297&((x298|x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = 1998;
	volatile int64_t x302 = -18457LL;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 465367841837497LLU;
	volatile int32_t t75 = -218817244;

    t75 = (x301&((x302|x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	volatile int32_t x306 = INT32_MIN;
	static volatile uint64_t x307 = 32622994362313260LLU;
	int32_t x308 = -1;
	volatile int64_t t76 = 219108478619030LL;

    t76 = (x305&((x306|x307)!=x308));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    

    t77 = (x309&((x310|x311)!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MIN;
	uint64_t x315 = 232575054863443LLU;
	static volatile int8_t x316 = 1;
	int32_t t78 = -1;

    t78 = (x313&((x314|x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	int32_t x319 = INT32_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = -653336;

    t79 = (x317&((x318|x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	volatile int32_t x322 = 29367;
	volatile uint8_t x323 = UINT8_MAX;
	int16_t x324 = -1;
	volatile uint32_t t80 = 2U;

    t80 = (x321&((x322|x323)!=x324));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 2434336U;
	static volatile uint32_t x326 = UINT32_MAX;
	volatile uint32_t x328 = 30209647U;
	volatile uint32_t t81 = 293880U;

    t81 = (x325&((x326|x327)!=x328));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x331 = -1;
	static int16_t x332 = 70;
	volatile int32_t t82 = 1003539966;

    t82 = (x329&((x330|x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	volatile uint16_t x335 = 869U;
	int64_t x336 = INT64_MAX;
	int64_t t83 = 1604352363537LL;

    t83 = (x333&((x334|x335)!=x336));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x338 = 2323374331707LLU;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = -98730547977054LL;
	int32_t t84 = -4840794;

    t84 = (x337&((x338|x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x343 = 6672;
	volatile int32_t x344 = INT32_MIN;

    t85 = (x341&((x342|x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 3005U;
	static int16_t x346 = -2377;
	volatile int8_t x347 = -1;
	int16_t x348 = INT16_MIN;

    t86 = (x345&((x346|x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MAX;
	int16_t x350 = -1;
	uint32_t x352 = 590207U;
	volatile int32_t t87 = 30152;

    t87 = (x349&((x350|x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 19U;
	uint64_t x354 = 104690025LLU;
	int64_t x355 = INT64_MIN;
	static volatile int16_t x356 = -42;
	volatile int32_t t88 = -3;

    t88 = (x353&((x354|x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = UINT64_MAX;
	static volatile int32_t t89 = 45133720;

    t89 = (x357&((x358|x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x361 = 27074658LLU;
	static int64_t x363 = -1LL;
	int16_t x364 = INT16_MIN;

    t90 = (x361&((x362|x363)!=x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x367 = -1625317227583472770LL;
	uint16_t x368 = 19U;
	volatile int32_t t91 = -179985960;

    t91 = (x365&((x366|x367)!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	static uint32_t x370 = UINT32_MAX;
	uint8_t x372 = 35U;

    t92 = (x369&((x370|x371)!=x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MAX;
	static uint8_t x374 = 22U;
	int8_t x375 = 24;
	uint32_t x376 = 3U;
	volatile int32_t t93 = -18;

    t93 = (x373&((x374|x375)!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint64_t x378 = 2931028248496293827LLU;
	uint16_t x379 = 455U;
	uint16_t x380 = 1U;

    t94 = (x377&((x378|x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int8_t x382 = -1;
	volatile int32_t x384 = INT32_MIN;
	static volatile int64_t t95 = -13656926739992LL;

    t95 = (x381&((x382|x383)!=x384));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 12755838986419870LL;
	int16_t x386 = INT16_MIN;
	uint64_t x387 = 498LLU;
	uint8_t x388 = 51U;
	volatile int64_t t96 = -926403199668LL;

    t96 = (x385&((x386|x387)!=x388));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	static volatile int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -286769391;

    t97 = (x389&((x390|x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = 17;
	int16_t x394 = -1;
	volatile int8_t x396 = INT8_MAX;
	volatile int32_t t98 = -8077;

    t98 = (x393&((x394|x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 53U;
	uint64_t x399 = 1663107LLU;
	int64_t x400 = 155896LL;
	volatile int32_t t99 = 10;

    t99 = (x397&((x398|x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x402 = 3343006351954062LLU;
	uint8_t x403 = 3U;

    t100 = (x401&((x402|x403)!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -5491488;
	uint16_t x406 = 0U;
	volatile int64_t x407 = INT64_MIN;
	int8_t x408 = -1;

    t101 = (x405&((x406|x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x411 = 6U;
	volatile int32_t t102 = -219066;

    t102 = (x409&((x410|x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 96U;
	int32_t x414 = -24971411;
	static uint8_t x415 = 0U;
	int32_t x416 = 96297346;
	volatile int32_t t103 = 1608164;

    t103 = (x413&((x414|x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MAX;
	volatile int64_t t104 = -3789932083538922LL;

    t104 = (x417&((x418|x419)!=x420));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	uint8_t x423 = UINT8_MAX;
	int32_t x424 = INT32_MIN;
	volatile uint64_t t105 = 50285LLU;

    t105 = (x421&((x422|x423)!=x424));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = -4181058622736LL;
	volatile int64_t t106 = -591LL;

    t106 = (x425&((x426|x427)!=x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MAX;
	int64_t x431 = INT64_MIN;
	volatile int32_t t107 = -16310170;

    t107 = (x429&((x430|x431)!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int32_t x434 = -1;
	static int16_t x435 = INT16_MAX;
	int16_t x436 = -12386;
	volatile int64_t t108 = -572LL;

    t108 = (x433&((x434|x435)!=x436));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MAX;
	uint8_t x440 = 36U;

    t109 = (x437&((x438|x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = 27044663;
	int32_t x442 = INT32_MIN;
	static int64_t x443 = INT64_MAX;
	int64_t x444 = -1LL;
	volatile int32_t t110 = -20;

    t110 = (x441&((x442|x443)!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = -2732800855LL;
	volatile int32_t x447 = -45;
	volatile uint8_t x448 = 93U;
	int32_t t111 = -232;

    t111 = (x445&((x446|x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 6723449515840095LLU;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = 364277090;
	int16_t x452 = INT16_MAX;
	volatile uint64_t t112 = 264716074691LLU;

    t112 = (x449&((x450|x451)!=x452));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	int32_t x455 = INT32_MAX;
	int16_t x456 = INT16_MIN;
	static int32_t t113 = -32264920;

    t113 = (x453&((x454|x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 37296901LLU;
	uint8_t x458 = 2U;
	int32_t x459 = 4900751;
	static volatile int8_t x460 = -1;
	volatile uint64_t t114 = 16556573LLU;

    t114 = (x457&((x458|x459)!=x460));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 1U;
	volatile int16_t x462 = INT16_MIN;
	static volatile int16_t x463 = -15;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = -183;

    t115 = (x461&((x462|x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x466 = 844263550134425448LLU;
	uint8_t x467 = 52U;
	uint8_t x468 = 2U;

    t116 = (x465&((x466|x467)!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 2U;
	uint8_t x471 = 47U;
	int32_t x472 = 34473802;
	volatile int32_t t117 = 34;

    t117 = (x469&((x470|x471)!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = 6U;
	volatile uint16_t x475 = 25733U;
	uint32_t x476 = 39460018U;
	int32_t t118 = -255190600;

    t118 = (x473&((x474|x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	static uint16_t x478 = 998U;
	volatile int16_t x480 = -1;
	int32_t t119 = -2259246;

    t119 = (x477&((x478|x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	volatile int16_t x483 = -1;
	static volatile int64_t x484 = 2026102386421LL;
	int64_t t120 = 121638840LL;

    t120 = (x481&((x482|x483)!=x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 0U;
	volatile int16_t x486 = INT16_MIN;
	int16_t x487 = -935;
	int16_t x488 = INT16_MIN;
	volatile int32_t t121 = -4790984;

    t121 = (x485&((x486|x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -6;
	static volatile int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MAX;
	int8_t x492 = INT8_MAX;
	static volatile int32_t t122 = 13;

    t122 = (x489&((x490|x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x494 = -2;
	uint64_t x495 = 29980LLU;
	int8_t x496 = INT8_MIN;
	int64_t t123 = -257986321976LL;

    t123 = (x493&((x494|x495)!=x496));

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = UINT16_MAX;
	volatile int64_t x500 = 15LL;
	volatile int64_t t124 = 9488775LL;

    t124 = (x497&((x498|x499)!=x500));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x501 = 148460681U;
	int16_t x502 = INT16_MIN;
	uint8_t x503 = 29U;
	static int16_t x504 = -1;
	volatile uint32_t t125 = 7219528U;

    t125 = (x501&((x502|x503)!=x504));

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	static uint32_t x506 = 1176558631U;
	int32_t x507 = INT32_MIN;
	uint32_t x508 = UINT32_MAX;
	int32_t t126 = 0;

    t126 = (x505&((x506|x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = -1;
	static volatile int32_t x510 = -4;
	int16_t x511 = INT16_MIN;
	int16_t x512 = INT16_MAX;

    t127 = (x509&((x510|x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	static int8_t x514 = -1;
	static uint16_t x515 = 5913U;
	volatile uint8_t x516 = UINT8_MAX;
	volatile int64_t t128 = -6250023588962941LL;

    t128 = (x513&((x514|x515)!=x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = INT8_MAX;
	volatile int8_t x519 = -19;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t129 = 120388142;

    t129 = (x517&((x518|x519)!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x522 = UINT16_MAX;
	int16_t x523 = -771;
	static int32_t x524 = INT32_MIN;
	int32_t t130 = 0;

    t130 = (x521&((x522|x523)!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x526 = 292U;
	volatile uint16_t x528 = UINT16_MAX;
	int32_t t131 = 28863775;

    t131 = (x525&((x526|x527)!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	static uint16_t x530 = 4U;
	uint32_t x531 = 22568U;
	static uint32_t x532 = 858U;
	static uint64_t t132 = 4685253145242519343LLU;

    t132 = (x529&((x530|x531)!=x532));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x534 = 10U;
	uint8_t x535 = UINT8_MAX;
	int8_t x536 = INT8_MIN;
	static int64_t t133 = 249385LL;

    t133 = (x533&((x534|x535)!=x536));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = -1;
	uint64_t x538 = 8050204225284531679LLU;
	int32_t x539 = INT32_MAX;
	uint16_t x540 = 66U;
	volatile int32_t t134 = 16176;

    t134 = (x537&((x538|x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = -1;
	volatile uint16_t x542 = 125U;
	static int16_t x543 = 10;
	static volatile int16_t x544 = INT16_MIN;
	int32_t t135 = -354051;

    t135 = (x541&((x542|x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 120277367U;
	static volatile int32_t x547 = -1;

    t136 = (x545&((x546|x547)!=x548));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -3322816712870LL;
	static uint8_t x550 = 6U;
	int16_t x552 = INT16_MIN;
	int64_t t137 = -15LL;

    t137 = (x549&((x550|x551)!=x552));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	volatile int8_t x554 = INT8_MIN;
	uint64_t x555 = 91LLU;
	int16_t x556 = INT16_MIN;
	int32_t t138 = -114130969;

    t138 = (x553&((x554|x555)!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -10855115;
	int32_t x558 = INT32_MIN;
	int8_t x560 = 1;
	int32_t t139 = 823477;

    t139 = (x557&((x558|x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	int64_t x562 = -1LL;
	static volatile int16_t x563 = 0;
	volatile int32_t x564 = 106228;
	volatile int32_t t140 = -14194;

    t140 = (x561&((x562|x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = INT16_MIN;
	volatile uint64_t x566 = 418621LLU;
	int64_t x567 = -1LL;
	volatile int16_t x568 = 58;

    t141 = (x565&((x566|x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = UINT8_MAX;
	static int32_t x571 = -1;
	int8_t x572 = -1;
	volatile int32_t t142 = 925;

    t142 = (x569&((x570|x571)!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	static volatile int16_t x574 = 247;
	uint8_t x575 = 95U;
	volatile int8_t x576 = INT8_MIN;
	int32_t t143 = -111;

    t143 = (x573&((x574|x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 18U;
	uint64_t x578 = UINT64_MAX;
	int16_t x580 = INT16_MIN;
	volatile int32_t t144 = 14;

    t144 = (x577&((x578|x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = 135716936;
	uint16_t x582 = 0U;
	int32_t x583 = -1;
	int8_t x584 = INT8_MIN;

    t145 = (x581&((x582|x583)!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = INT16_MIN;
	int8_t x586 = -1;
	static int64_t x587 = 98018062667094LL;
	static int8_t x588 = 3;
	volatile int32_t t146 = 0;

    t146 = (x585&((x586|x587)!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 15822U;
	uint8_t x590 = 0U;
	uint64_t x592 = 1515LLU;

    t147 = (x589&((x590|x591)!=x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -147067581LL;
	volatile int32_t x594 = INT32_MIN;
	static uint8_t x595 = 48U;
	uint32_t x596 = UINT32_MAX;
	int64_t t148 = -778504517LL;

    t148 = (x593&((x594|x595)!=x596));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = UINT64_MAX;
	volatile uint8_t x600 = 91U;
	static int32_t t149 = 413379;

    t149 = (x597&((x598|x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -42;
	static int64_t x602 = INT64_MIN;
	volatile uint8_t x603 = 67U;
	volatile int16_t x604 = INT16_MIN;
	volatile int32_t t150 = -873;

    t150 = (x601&((x602|x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x606 = UINT32_MAX;
	static int16_t x607 = -1;
	static int8_t x608 = -1;

    t151 = (x605&((x606|x607)!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 6744;
	static int16_t x611 = 0;
	volatile uint64_t x612 = 40611297LLU;

    t152 = (x609&((x610|x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -46;
	int8_t x614 = INT8_MAX;
	int32_t x615 = 1341252;
	int32_t x616 = INT32_MAX;

    t153 = (x613&((x614|x615)!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MAX;
	volatile int32_t t154 = 3603320;

    t154 = (x617&((x618|x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x623 = INT32_MAX;
	uint32_t x624 = 153499787U;
	volatile int32_t t155 = 160754844;

    t155 = (x621&((x622|x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = 451425275570664818LL;
	int64_t x626 = INT64_MAX;
	int8_t x627 = INT8_MIN;
	int64_t x628 = -1LL;
	int64_t t156 = 102927LL;

    t156 = (x625&((x626|x627)!=x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -15455;
	int32_t x631 = -1;
	static int32_t x632 = 265882867;
	int32_t t157 = 3078888;

    t157 = (x629&((x630|x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	volatile uint32_t x634 = 29U;
	static int8_t x635 = 7;
	static uint32_t x636 = 35629822U;
	static volatile int32_t t158 = -20;

    t158 = (x633&((x634|x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 3U;
	volatile int8_t x638 = -1;
	uint64_t x640 = UINT64_MAX;
	volatile int32_t t159 = -1469;

    t159 = (x637&((x638|x639)!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = 1;
	volatile int64_t x644 = 139057528722330841LL;
	int32_t t160 = 2089075;

    t160 = (x641&((x642|x643)!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	volatile uint64_t x646 = 36LLU;
	static volatile uint16_t x647 = 32516U;
	volatile int64_t x648 = -1LL;
	static int32_t t161 = 19;

    t161 = (x645&((x646|x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -135513048759447005LL;
	int32_t x651 = INT32_MIN;
	static int16_t x652 = INT16_MIN;
	int64_t t162 = -22349913359LL;

    t162 = (x649&((x650|x651)!=x652));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 820U;
	int8_t x654 = INT8_MAX;
	volatile int8_t x655 = INT8_MIN;
	uint32_t x656 = UINT32_MAX;
	static int32_t t163 = -24832877;

    t163 = (x653&((x654|x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	uint16_t x658 = UINT16_MAX;
	volatile int16_t x659 = INT16_MIN;
	volatile int32_t t164 = 1;

    t164 = (x657&((x658|x659)!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	static int32_t x662 = -1;
	uint8_t x663 = 0U;
	int8_t x664 = 1;

    t165 = (x661&((x662|x663)!=x664));

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -27;
	int64_t x666 = -1LL;
	uint64_t x667 = UINT64_MAX;
	uint16_t x668 = 14U;
	static int32_t t166 = 521350656;

    t166 = (x665&((x666|x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -35122818;
	volatile int8_t x670 = INT8_MIN;
	int32_t x671 = 3740808;
	uint32_t x672 = 7730074U;
	volatile int32_t t167 = -4500426;

    t167 = (x669&((x670|x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	static int64_t x676 = INT64_MIN;
	volatile int32_t t168 = 18809;

    t168 = (x673&((x674|x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x678 = -7696;
	volatile uint64_t x679 = UINT64_MAX;
	volatile int32_t t169 = -62;

    t169 = (x677&((x678|x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	uint64_t x682 = 4181468LLU;
	uint8_t x683 = 9U;
	int64_t t170 = -417054202LL;

    t170 = (x681&((x682|x683)!=x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x687 = 1LL;
	int32_t x688 = INT32_MIN;
	static volatile uint32_t t171 = 1565033U;

    t171 = (x685&((x686|x687)!=x688));

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -26LL;
	int16_t x690 = INT16_MIN;
	int64_t x691 = -1LL;
	int64_t t172 = -174LL;

    t172 = (x689&((x690|x691)!=x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = -3;
	int32_t x696 = INT32_MIN;
	volatile int64_t t173 = 1146295136298784365LL;

    t173 = (x693&((x694|x695)!=x696));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x698 = -1;
	int16_t x699 = -34;
	volatile int8_t x700 = INT8_MIN;

    t174 = (x697&((x698|x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -3;
	uint64_t x702 = 2296908369831586266LLU;
	int32_t x704 = INT32_MAX;
	volatile int32_t t175 = -317;

    t175 = (x701&((x702|x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 13;
	uint64_t x707 = 3285LLU;
	volatile uint16_t x708 = UINT16_MAX;
	int32_t t176 = -198318559;

    t176 = (x705&((x706|x707)!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x710 = INT32_MIN;
	int64_t x711 = INT64_MAX;
	volatile uint64_t x712 = UINT64_MAX;
	int32_t t177 = 907389;

    t177 = (x709&((x710|x711)!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x714 = INT16_MIN;

    t178 = (x713&((x714|x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint8_t x718 = 15U;
	int16_t x720 = INT16_MAX;
	volatile int32_t t179 = -43844;

    t179 = (x717&((x718|x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 10LLU;
	static int8_t x724 = -10;

    t180 = (x721&((x722|x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	static volatile int32_t x726 = INT32_MIN;
	volatile int8_t x727 = INT8_MAX;
	uint64_t x728 = 2480464980687517689LLU;
	static volatile int32_t t181 = -2345;

    t181 = (x725&((x726|x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 97668U;
	int32_t x730 = INT32_MIN;
	int8_t x731 = -1;
	volatile uint32_t t182 = 19882501U;

    t182 = (x729&((x730|x731)!=x732));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 3563;
	uint16_t x734 = 31U;
	uint32_t x735 = UINT32_MAX;
	volatile uint8_t x736 = UINT8_MAX;
	int32_t t183 = 2657;

    t183 = (x733&((x734|x735)!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = 1;
	volatile uint32_t x738 = 15668U;
	static uint64_t x739 = 5133163976908LLU;
	int16_t x740 = -1;

    t184 = (x737&((x738|x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	static volatile int64_t x742 = INT64_MIN;

    t185 = (x741&((x742|x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	uint8_t x746 = 1U;
	volatile int64_t x747 = INT64_MIN;
	static int16_t x748 = 1792;
	int32_t t186 = -26100;

    t186 = (x745&((x746|x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 0U;
	uint32_t x750 = 3U;
	int32_t x751 = -265541654;
	static uint32_t t187 = 12304534U;

    t187 = (x749&((x750|x751)!=x752));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	uint16_t x754 = 1U;
	static int32_t x755 = -1;
	volatile int32_t x756 = INT32_MIN;
	int32_t t188 = 103314;

    t188 = (x753&((x754|x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = -114751764016620LL;
	static int32_t x760 = INT32_MIN;
	volatile uint64_t t189 = 6486LLU;

    t189 = (x757&((x758|x759)!=x760));

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -104;
	uint64_t x762 = 6LLU;
	uint8_t x763 = UINT8_MAX;
	uint16_t x764 = UINT16_MAX;
	int32_t t190 = -19244;

    t190 = (x761&((x762|x763)!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x766 = 7168LLU;
	uint8_t x767 = UINT8_MAX;
	static int8_t x768 = INT8_MIN;
	int32_t t191 = 27790;

    t191 = (x765&((x766|x767)!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = -1;
	uint32_t x771 = 239U;
	int8_t x772 = INT8_MIN;

    t192 = (x769&((x770|x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 4U;
	int16_t x774 = 904;
	uint8_t x775 = 3U;
	int32_t x776 = 40;
	static int32_t t193 = -7942708;

    t193 = (x773&((x774|x775)!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1U;
	int32_t x778 = INT32_MAX;
	int8_t x779 = INT8_MIN;
	int32_t t194 = 6010;

    t194 = (x777&((x778|x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = INT8_MIN;
	uint64_t x782 = 2048936793377393LLU;
	int16_t x783 = INT16_MAX;
	static int16_t x784 = INT16_MIN;
	volatile int32_t t195 = 113797037;

    t195 = (x781&((x782|x783)!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x785 = 14U;
	int32_t x786 = INT32_MAX;
	static uint8_t x787 = UINT8_MAX;
	volatile int16_t x788 = 3;

    t196 = (x785&((x786|x787)!=x788));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = 5;
	static int16_t x791 = 107;
	volatile int32_t t197 = 3006;

    t197 = (x789&((x790|x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x795 = 10;
	static int8_t x796 = 3;

    t198 = (x793&((x794|x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	static int16_t x799 = -118;
	volatile int32_t x800 = -1;
	int32_t t199 = 1221711;

    t199 = (x797&((x798|x799)!=x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

