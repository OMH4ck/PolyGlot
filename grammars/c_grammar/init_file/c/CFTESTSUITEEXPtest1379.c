
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

volatile int64_t x4 = INT64_MIN;
static volatile int8_t x5 = INT8_MIN;
int8_t x8 = INT8_MIN;
volatile int32_t t1 = 18934;
static uint32_t x12 = UINT32_MAX;
int8_t x13 = 1;
static uint64_t x18 = UINT64_MAX;
int8_t x20 = -1;
uint64_t x23 = 15LLU;
int32_t x32 = -828114604;
uint64_t x35 = 6287243243LLU;
volatile int16_t x38 = -1;
int16_t x39 = INT16_MIN;
volatile int32_t t9 = 22552;
static int8_t x42 = -4;
int32_t t11 = -1428;
int16_t x52 = INT16_MIN;
volatile int32_t t13 = -25289205;
uint8_t x60 = 0U;
int32_t x63 = INT32_MIN;
int8_t x67 = INT8_MIN;
volatile int32_t t17 = -132;
static int8_t x80 = 26;
static int32_t x83 = INT32_MIN;
static uint8_t x89 = 1U;
int32_t x92 = -1;
uint8_t x98 = 49U;
uint8_t x102 = 4U;
int32_t x106 = 114678;
int32_t x107 = -1;
int32_t t27 = 107707967;
static int32_t x115 = 4;
int16_t x119 = -6;
int8_t x127 = INT8_MIN;
int32_t t31 = -64136;
int16_t x133 = INT16_MAX;
uint16_t x136 = 163U;
int16_t x137 = INT16_MIN;
int16_t x141 = INT16_MIN;
int32_t x143 = -1;
int32_t x144 = INT32_MAX;
uint32_t x146 = 20195U;
uint8_t x149 = 112U;
uint8_t x150 = 0U;
static int8_t x163 = -1;
uint16_t x166 = UINT16_MAX;
volatile int16_t x169 = INT16_MIN;
static int32_t t44 = -107907052;
uint8_t x181 = UINT8_MAX;
static volatile int8_t x192 = INT8_MIN;
static uint8_t x195 = UINT8_MAX;
uint8_t x201 = 0U;
int64_t x203 = -17859LL;
int32_t t50 = -11;
static volatile int32_t t51 = -21;
static int32_t t52 = -68916;
int32_t x219 = -47671157;
uint16_t x223 = UINT16_MAX;
static int16_t x225 = -1;
volatile int32_t x226 = 28469;
static uint16_t x237 = 22867U;
uint8_t x239 = 29U;
static volatile int64_t x240 = -1639044642859119LL;
static int16_t x241 = INT16_MIN;
int32_t x249 = 778;
static int8_t x254 = -27;
int64_t x256 = INT64_MIN;
int64_t x265 = INT64_MIN;
int16_t x267 = INT16_MAX;
volatile int64_t x270 = INT64_MIN;
static int32_t x271 = INT32_MIN;
static uint64_t x273 = UINT64_MAX;
int8_t x280 = INT8_MAX;
static int32_t x281 = -1;
int64_t x290 = -1LL;
int32_t x295 = INT32_MIN;
int8_t x303 = INT8_MIN;
static int64_t x311 = INT64_MIN;
volatile int32_t x316 = INT32_MAX;
int32_t t78 = 31;
static volatile int32_t x325 = -1;
volatile int32_t t85 = -1973347;
int16_t x352 = INT16_MIN;
int32_t t87 = -404385;
uint64_t x353 = 25585219798651LLU;
uint8_t x362 = UINT8_MAX;
int16_t x368 = INT16_MAX;
int8_t x369 = -3;
volatile int64_t x384 = 16308144293LL;
uint8_t x385 = 101U;
uint32_t x386 = 1752370688U;
volatile int32_t t97 = 27698;
volatile int32_t t98 = 0;
static int64_t x412 = INT64_MAX;
static int32_t x415 = -1057;
int8_t x416 = INT8_MIN;
uint16_t x420 = 1U;
int32_t t104 = -498;
volatile int32_t t105 = -22867;
uint16_t x429 = UINT16_MAX;
volatile int32_t t109 = -80;
volatile int32_t x441 = INT32_MIN;
static int8_t x442 = INT8_MAX;
static int8_t x445 = INT8_MIN;
uint32_t x450 = 47288462U;
volatile int8_t x452 = INT8_MAX;
uint8_t x461 = 0U;
int16_t x465 = INT16_MIN;
int64_t x476 = INT64_MIN;
int64_t x479 = INT64_MIN;
int32_t x481 = INT32_MIN;
int32_t t120 = 0;
static uint16_t x487 = UINT16_MAX;
uint64_t x495 = 12535355507755LLU;
static int8_t x503 = INT8_MIN;
uint64_t x518 = 4225357450335767LLU;
static uint32_t x526 = UINT32_MAX;
uint16_t x536 = UINT16_MAX;
int32_t t133 = 2;
int16_t x538 = -2;
int16_t x545 = -42;
uint64_t x548 = UINT64_MAX;
int32_t x550 = -1;
int16_t x553 = -697;
volatile int8_t x560 = INT8_MAX;
volatile int32_t t140 = 197962;
int32_t t141 = -2823;
int8_t x574 = 50;
volatile int32_t t143 = -12;
int16_t x586 = -1;
int64_t x590 = INT64_MAX;
volatile uint64_t x593 = 723LLU;
int64_t x599 = 27020980175728LL;
uint8_t x600 = 106U;
int8_t x607 = INT8_MAX;
uint32_t x608 = UINT32_MAX;
uint16_t x612 = 395U;
static int8_t x614 = -1;
uint64_t x621 = 4134934918765LLU;
uint64_t x622 = 10831915595736718LLU;
volatile int8_t x627 = -1;
int32_t t156 = 31327083;
static int8_t x630 = 2;
static volatile uint8_t x641 = UINT8_MAX;
int32_t t160 = -12143;
volatile int32_t t161 = -135155;
volatile int32_t t163 = 15166;
volatile int64_t x665 = -2754960210074LL;
int8_t x668 = -2;
uint8_t x675 = 12U;
volatile int8_t x677 = -1;
int32_t x680 = -6024955;
static volatile uint16_t x684 = 26672U;
int16_t x687 = INT16_MIN;
uint8_t x690 = 1U;
int8_t x693 = INT8_MIN;
uint32_t x698 = 213U;
volatile int8_t x701 = INT8_MAX;
volatile int32_t t176 = -402652676;
volatile int32_t t177 = -1790666;
uint64_t x718 = 143634469LLU;
volatile uint8_t x719 = UINT8_MAX;
int32_t t179 = -49213722;
uint64_t x721 = 92449941880785LLU;
int8_t x723 = INT8_MAX;
int32_t x724 = -20;
int32_t x726 = INT32_MIN;
uint32_t x730 = UINT32_MAX;
uint64_t x735 = UINT64_MAX;
static volatile uint64_t x740 = 152870715LLU;
int32_t t184 = 15813545;
int16_t x741 = -1;
static int32_t x743 = INT32_MAX;
volatile int16_t x744 = INT16_MIN;
int8_t x745 = INT8_MIN;
int64_t x749 = -258434819015427LL;
static volatile int64_t x757 = -10532190LL;
static int16_t x760 = -1;
volatile int64_t x765 = -8564970123232424LL;
uint16_t x769 = 704U;
uint16_t x771 = 21610U;
uint16_t x780 = 4U;
volatile int64_t x788 = -1LL;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int16_t x2 = -1;
	uint16_t x3 = UINT16_MAX;
	static int32_t t0 = 1990849;

    t0 = (x1!=((x2==x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x6 = UINT64_MAX;
	static int8_t x7 = -1;

    t1 = (x5!=((x6==x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 4U;
	static int16_t x10 = -5477;
	int64_t x11 = INT64_MIN;
	static int32_t t2 = -315;

    t2 = (x9!=((x10==x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 2823;
	volatile uint16_t x15 = 258U;
	static volatile uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 7083985;

    t3 = (x13!=((x14==x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 11983;

    t4 = (x17!=((x18==x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 2845195LL;
	static volatile uint8_t x22 = 3U;
	int16_t x24 = INT16_MAX;
	int32_t t5 = -243935;

    t5 = (x21!=((x22==x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 38052U;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 1333847;

    t6 = (x25!=((x26==x27)+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	volatile int32_t x30 = -3097184;
	uint64_t x31 = 7LLU;
	int32_t t7 = -765131086;

    t7 = (x29!=((x30==x31)+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 3673;
	int64_t x34 = -26LL;
	static int64_t x36 = 6366LL;
	static volatile int32_t t8 = 1128;

    t8 = (x33!=((x34==x35)+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = -1;
	static int8_t x40 = -1;

    t9 = (x37!=((x38==x39)+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int8_t x44 = -3;
	volatile int32_t t10 = 14;

    t10 = (x41!=((x42==x43)+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = -8;
	int16_t x46 = INT16_MAX;
	int8_t x47 = 2;
	uint64_t x48 = 1717903085LLU;

    t11 = (x45!=((x46==x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x49 = 136811843U;
	volatile uint64_t x50 = 485598LLU;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -11208953;

    t12 = (x49!=((x50==x51)+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 461324LL;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 8828U;

    t13 = (x53!=((x54==x55)+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -7662;
	int64_t x58 = 3LL;
	static int8_t x59 = INT8_MIN;
	int32_t t14 = 32111;

    t14 = (x57!=((x58==x59)+x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 1U;
	int32_t x62 = INT32_MIN;
	static int16_t x64 = INT16_MAX;
	int32_t t15 = -1;

    t15 = (x61!=((x62==x63)+x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	volatile uint32_t x66 = 670U;
	int32_t x68 = 93421;
	volatile int32_t t16 = -393;

    t16 = (x65!=((x66==x67)+x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 1U;
	uint64_t x70 = 11871LLU;
	uint32_t x71 = 2295575U;
	uint16_t x72 = UINT16_MAX;

    t17 = (x69!=((x70==x71)+x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	volatile int32_t x74 = 966686019;
	static int32_t x75 = -1;
	int64_t x76 = INT64_MIN;
	static int32_t t18 = -484905771;

    t18 = (x73!=((x74==x75)+x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 3426485824747187LLU;
	volatile int32_t x78 = -1;
	static int8_t x79 = 0;
	volatile int32_t t19 = 4309;

    t19 = (x77!=((x78==x79)+x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static int8_t x82 = INT8_MAX;
	static int16_t x84 = 0;
	int32_t t20 = -54;

    t20 = (x81!=((x82==x83)+x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x85 = -1LL;
	volatile uint32_t x86 = 18801805U;
	volatile uint32_t x87 = UINT32_MAX;
	uint16_t x88 = 5U;
	static int32_t t21 = -2716778;

    t21 = (x85!=((x86==x87)+x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x90 = 132;
	int64_t x91 = 945LL;
	volatile int32_t t22 = -917262155;

    t22 = (x89!=((x90==x91)+x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 1U;
	static int64_t x94 = INT64_MAX;
	volatile uint32_t x95 = 14U;
	uint32_t x96 = UINT32_MAX;
	static int32_t t23 = -20350626;

    t23 = (x93!=((x94==x95)+x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 604694690;
	int8_t x99 = INT8_MIN;
	int64_t x100 = 12152930LL;
	static volatile int32_t t24 = 208400;

    t24 = (x97!=((x98==x99)+x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 5167;

    t25 = (x101!=((x102==x103)+x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = -3;

    t26 = (x105!=((x106==x107)+x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 0U;
	uint64_t x110 = 41282592894192LLU;
	int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;

    t27 = (x109!=((x110==x111)+x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = 10328627;

    t28 = (x113!=((x114==x115)+x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	static uint8_t x118 = UINT8_MAX;
	volatile int8_t x120 = -1;
	volatile int32_t t29 = -29046909;

    t29 = (x117!=((x118==x119)+x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x121 = 3U;
	uint16_t x122 = 1813U;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = -7;
	volatile int32_t t30 = -1;

    t30 = (x121!=((x122==x123)+x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	uint32_t x126 = UINT32_MAX;
	int8_t x128 = 1;

    t31 = (x125!=((x126==x127)+x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = 130;
	int8_t x130 = -1;
	int16_t x131 = INT16_MAX;
	int16_t x132 = -1;
	int32_t t32 = -50925;

    t32 = (x129!=((x130==x131)+x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x134 = INT16_MIN;
	volatile int64_t x135 = INT64_MIN;
	volatile int32_t t33 = 45148;

    t33 = (x133!=((x134==x135)+x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	volatile uint8_t x139 = UINT8_MAX;
	int8_t x140 = -1;
	volatile int32_t t34 = 4956048;

    t34 = (x137!=((x138==x139)+x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x142 = 3;
	volatile int32_t t35 = 27949;

    t35 = (x141!=((x142==x143)+x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int8_t x147 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = 945467;

    t36 = (x145!=((x146==x147)+x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x151 = UINT8_MAX;
	int64_t x152 = 460823387604LL;
	volatile int32_t t37 = -8163;

    t37 = (x149!=((x150==x151)+x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	int8_t x154 = 5;
	uint16_t x155 = 7U;
	int64_t x156 = 444657885LL;
	volatile int32_t t38 = 7032;

    t38 = (x153!=((x154==x155)+x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	static int64_t x158 = 65187LL;
	int32_t x159 = 836;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = 1;

    t39 = (x157!=((x158==x159)+x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	static int8_t x162 = -3;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = -1708;

    t40 = (x161!=((x162==x163)+x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 25;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;
	static int32_t t41 = 110467421;

    t41 = (x165!=((x166==x167)+x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = UINT8_MAX;
	volatile int8_t x171 = INT8_MAX;
	int8_t x172 = -1;
	int32_t t42 = -27;

    t42 = (x169!=((x170==x171)+x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 2U;
	volatile int16_t x174 = 4318;
	uint64_t x175 = 30315671258300433LLU;
	static uint16_t x176 = 63U;
	volatile int32_t t43 = -31;

    t43 = (x173!=((x174==x175)+x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;

    t44 = (x177!=((x178==x179)+x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = INT32_MIN;
	static uint8_t x183 = 13U;
	int32_t x184 = 438;
	volatile int32_t t45 = 0;

    t45 = (x181!=((x182==x183)+x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	static int32_t x187 = -28;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = -158438428;

    t46 = (x185!=((x186==x187)+x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	volatile uint16_t x190 = 0U;
	static int32_t x191 = -1;
	int32_t t47 = -53728;

    t47 = (x189!=((x190==x191)+x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = INT8_MIN;
	static uint64_t x194 = UINT64_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t48 = 7;

    t48 = (x193!=((x194==x195)+x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	static uint32_t x198 = 23177U;
	static int8_t x199 = INT8_MIN;
	static int64_t x200 = 30905239LL;
	static volatile int32_t t49 = -84;

    t49 = (x197!=((x198==x199)+x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x202 = INT64_MIN;
	int32_t x204 = INT32_MIN;

    t50 = (x201!=((x202==x203)+x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	int32_t x206 = -2375151;
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = -1;

    t51 = (x205!=((x206==x207)+x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 4;
	int8_t x210 = INT8_MIN;
	static int64_t x211 = 2769593481LL;
	static int8_t x212 = 26;

    t52 = (x209!=((x210==x211)+x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = INT64_MIN;
	uint64_t x214 = 897LLU;
	uint8_t x215 = 30U;
	int32_t x216 = -1;
	volatile int32_t t53 = -232418680;

    t53 = (x213!=((x214==x215)+x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint16_t x218 = 27042U;
	static int64_t x220 = INT64_MAX;
	int32_t t54 = 18455266;

    t54 = (x217!=((x218==x219)+x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x221 = 526065157U;
	int16_t x222 = INT16_MIN;
	static uint8_t x224 = 6U;
	volatile int32_t t55 = -6021485;

    t55 = (x221!=((x222==x223)+x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = -158441640018155LL;
	volatile int32_t x228 = -4009885;
	int32_t t56 = -31;

    t56 = (x225!=((x226==x227)+x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 3;
	static int32_t x230 = INT32_MAX;
	static int32_t x231 = -829;
	int32_t x232 = -1;
	volatile int32_t t57 = 11235;

    t57 = (x229!=((x230==x231)+x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 1458152;

    t58 = (x233!=((x234==x235)+x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = 5301U;
	static volatile int32_t t59 = 3;

    t59 = (x237!=((x238==x239)+x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 99LLU;
	int32_t t60 = 23937;

    t60 = (x241!=((x242==x243)+x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 275U;
	volatile int16_t x246 = -1;
	uint8_t x247 = 2U;
	static uint16_t x248 = UINT16_MAX;
	static volatile int32_t t61 = -1;

    t61 = (x245!=((x246==x247)+x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = UINT16_MAX;
	int8_t x251 = -6;
	uint64_t x252 = 860805426912101834LLU;
	int32_t t62 = 1;

    t62 = (x249!=((x250==x251)+x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x255 = -36074LL;
	int32_t t63 = -76;

    t63 = (x253!=((x254==x255)+x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = 21830368U;
	static int16_t x260 = -1123;
	int32_t t64 = 1;

    t64 = (x257!=((x258==x259)+x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MIN;
	static int8_t x262 = -3;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = 554;
	volatile int32_t t65 = 226;

    t65 = (x261!=((x262==x263)+x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = -16803;

    t66 = (x265!=((x266==x267)+x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 5U;
	uint8_t x272 = 11U;
	static int32_t t67 = 15;

    t67 = (x269!=((x270==x271)+x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = -1;
	int64_t x275 = -1LL;
	int16_t x276 = INT16_MIN;
	static int32_t t68 = -635036250;

    t68 = (x273!=((x274==x275)+x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x277 = UINT32_MAX;
	int64_t x278 = -258798448047LL;
	int64_t x279 = -16455046LL;
	static volatile int32_t t69 = 50355371;

    t69 = (x277!=((x278==x279)+x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MAX;
	int8_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 83139;

    t70 = (x281!=((x282==x283)+x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = UINT8_MAX;
	static int8_t x288 = 48;
	volatile int32_t t71 = -13981;

    t71 = (x285!=((x286==x287)+x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MAX;
	int8_t x291 = -1;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 7;

    t72 = (x289!=((x290==x291)+x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MAX;
	static uint8_t x294 = 54U;
	volatile uint16_t x296 = UINT16_MAX;
	static volatile int32_t t73 = -98936903;

    t73 = (x293!=((x294==x295)+x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 17U;
	int32_t x298 = INT32_MIN;
	static int64_t x299 = INT64_MIN;
	uint16_t x300 = 3U;
	int32_t t74 = -70;

    t74 = (x297!=((x298==x299)+x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 2203U;
	int8_t x302 = 1;
	static volatile int16_t x304 = -1;
	volatile int32_t t75 = -10935;

    t75 = (x301!=((x302==x303)+x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MAX;
	volatile uint8_t x308 = 88U;
	int32_t t76 = 1441;

    t76 = (x305!=((x306==x307)+x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 2U;
	uint8_t x312 = 15U;
	volatile int32_t t77 = 13618198;

    t77 = (x309!=((x310==x311)+x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 29U;
	volatile uint16_t x314 = 0U;
	int8_t x315 = INT8_MIN;

    t78 = (x313!=((x314==x315)+x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = 151;
	static uint16_t x318 = 186U;
	volatile int16_t x319 = INT16_MIN;
	volatile int8_t x320 = 2;
	int32_t t79 = -85984441;

    t79 = (x317!=((x318==x319)+x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	uint32_t x322 = 171990339U;
	volatile int64_t x323 = -1LL;
	uint16_t x324 = 5810U;
	volatile int32_t t80 = -686258;

    t80 = (x321!=((x322==x323)+x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	static int32_t x327 = -1;
	uint32_t x328 = 5141U;
	int32_t t81 = -1412;

    t81 = (x325!=((x326==x327)+x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = 462985983508421325LLU;
	uint16_t x330 = 7U;
	int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -37398;

    t82 = (x329!=((x330==x331)+x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MAX;
	volatile int16_t x334 = 6960;
	int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -60;

    t83 = (x333!=((x334==x335)+x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	uint64_t x338 = UINT64_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	int32_t t84 = 4586006;

    t84 = (x337!=((x338==x339)+x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;

    t85 = (x341!=((x342==x343)+x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	volatile int8_t x346 = -6;
	static uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 34U;
	static volatile int32_t t86 = 25234711;

    t86 = (x345!=((x346==x347)+x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	uint32_t x350 = 13U;
	static int32_t x351 = INT32_MAX;

    t87 = (x349!=((x350==x351)+x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 50LLU;
	int16_t x356 = -1;
	int32_t t88 = -264417696;

    t88 = (x353!=((x354==x355)+x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	int64_t x358 = -66LL;
	int32_t x359 = INT32_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t89 = 43364;

    t89 = (x357!=((x358==x359)+x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 1549U;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 1;

    t90 = (x361!=((x362==x363)+x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	int8_t x366 = 62;
	int16_t x367 = INT16_MIN;
	volatile int32_t t91 = -252;

    t91 = (x365!=((x366==x367)+x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = 58;
	int8_t x371 = 0;
	int32_t x372 = INT32_MAX;
	static int32_t t92 = -28748945;

    t92 = (x369!=((x370==x371)+x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 114U;
	volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = 0;
	int16_t x376 = -3;
	static volatile int32_t t93 = -59;

    t93 = (x373!=((x374==x375)+x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x377 = INT64_MIN;
	volatile uint8_t x378 = 6U;
	int8_t x379 = -1;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -970472950;

    t94 = (x377!=((x378==x379)+x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int8_t x382 = 24;
	uint64_t x383 = 41707074LLU;
	int32_t t95 = 22420;

    t95 = (x381!=((x382==x383)+x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x387 = 18776044966068605LLU;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -19664;

    t96 = (x385!=((x386==x387)+x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MAX;
	int8_t x391 = -1;
	int32_t x392 = -1;

    t97 = (x389!=((x390==x391)+x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;

    t98 = (x393!=((x394==x395)+x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 81U;
	int64_t x398 = -1LL;
	static int32_t x399 = -412216;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -32014046;

    t99 = (x397!=((x398==x399)+x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	static uint64_t x402 = 10607741654615LLU;
	int32_t x403 = -33;
	static int64_t x404 = INT64_MIN;
	int32_t t100 = -998042919;

    t100 = (x401!=((x402==x403)+x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	uint16_t x407 = UINT16_MAX;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t101 = -5346;

    t101 = (x405!=((x406==x407)+x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1382LL;
	static volatile int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t t102 = -20931141;

    t102 = (x409!=((x410==x411)+x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 0U;
	int8_t x414 = -1;
	volatile int32_t t103 = 11;

    t103 = (x413!=((x414==x415)+x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 2139518603U;
	volatile int32_t x418 = INT32_MIN;
	uint16_t x419 = 62U;

    t104 = (x417!=((x418==x419)+x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 15;
	volatile uint64_t x422 = 8075377177074780LLU;
	int8_t x423 = 49;
	uint8_t x424 = 10U;

    t105 = (x421!=((x422==x423)+x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = -1038193165750930LL;
	static int32_t x426 = INT32_MIN;
	uint32_t x427 = 64U;
	static volatile uint16_t x428 = 124U;
	int32_t t106 = -46;

    t106 = (x425!=((x426==x427)+x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = 0;
	static uint64_t x431 = 206767575949726404LLU;
	int8_t x432 = -1;
	volatile int32_t t107 = -1716872;

    t107 = (x429!=((x430==x431)+x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = INT8_MIN;
	int64_t x434 = -1401296111510643LL;
	int64_t x435 = INT64_MIN;
	volatile int16_t x436 = INT16_MAX;
	volatile int32_t t108 = 148243;

    t108 = (x433!=((x434==x435)+x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MAX;
	volatile uint16_t x438 = 5546U;
	int16_t x439 = INT16_MIN;
	int64_t x440 = 170429525LL;

    t109 = (x437!=((x438==x439)+x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x443 = INT16_MAX;
	uint32_t x444 = 12U;
	static volatile int32_t t110 = -2465;

    t110 = (x441!=((x442==x443)+x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = 16435;
	static volatile int8_t x447 = -13;
	volatile int64_t x448 = INT64_MIN;
	int32_t t111 = 3033;

    t111 = (x445!=((x446==x447)+x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 1960082U;
	static int8_t x451 = 1;
	volatile int32_t t112 = 19656797;

    t112 = (x449!=((x450==x451)+x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = -1;
	volatile uint8_t x454 = 1U;
	volatile uint16_t x455 = 24U;
	int8_t x456 = INT8_MIN;
	int32_t t113 = -33;

    t113 = (x453!=((x454==x455)+x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	uint16_t x458 = 0U;
	static uint32_t x459 = 105508U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 207807;

    t114 = (x457!=((x458==x459)+x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = -109;
	uint16_t x463 = UINT16_MAX;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t115 = -1;

    t115 = (x461!=((x462==x463)+x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	static volatile uint32_t x467 = 161082823U;
	int32_t x468 = INT32_MIN;
	volatile int32_t t116 = -822929671;

    t116 = (x465!=((x466==x467)+x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	static uint8_t x470 = 25U;
	uint32_t x471 = UINT32_MAX;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -10565538;

    t117 = (x469!=((x470==x471)+x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 83U;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = UINT16_MAX;
	int32_t t118 = -347343903;

    t118 = (x473!=((x474==x475)+x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = 9U;
	uint16_t x478 = UINT16_MAX;
	volatile uint16_t x480 = 451U;
	volatile int32_t t119 = 40002925;

    t119 = (x477!=((x478==x479)+x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = -221LL;
	static int16_t x483 = INT16_MAX;
	uint8_t x484 = 67U;

    t120 = (x481!=((x482==x483)+x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MIN;
	static int8_t x488 = INT8_MIN;
	int32_t t121 = 154;

    t121 = (x485!=((x486==x487)+x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -55;
	static uint32_t x490 = UINT32_MAX;
	uint8_t x491 = 55U;
	volatile int8_t x492 = INT8_MAX;
	static int32_t t122 = 162;

    t122 = (x489!=((x490==x491)+x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 75784471U;
	int64_t x494 = INT64_MIN;
	int32_t x496 = INT32_MIN;
	static int32_t t123 = -1645772;

    t123 = (x493!=((x494==x495)+x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 3U;
	int8_t x498 = INT8_MIN;
	static int16_t x499 = INT16_MAX;
	volatile uint8_t x500 = 6U;
	int32_t t124 = -145;

    t124 = (x497!=((x498==x499)+x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -5;
	int16_t x502 = INT16_MIN;
	volatile int8_t x504 = INT8_MAX;
	volatile int32_t t125 = 324;

    t125 = (x501!=((x502==x503)+x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 4;
	uint8_t x506 = 63U;
	int8_t x507 = -1;
	static volatile int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -43;

    t126 = (x505!=((x506==x507)+x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = UINT32_MAX;
	int64_t x510 = -38392604290123LL;
	static int16_t x511 = INT16_MIN;
	static uint16_t x512 = 1232U;
	int32_t t127 = 4364453;

    t127 = (x509!=((x510==x511)+x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	uint16_t x514 = 1597U;
	int64_t x515 = -1LL;
	static int32_t x516 = -31685;
	int32_t t128 = -1;

    t128 = (x513!=((x514==x515)+x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	volatile int32_t x519 = INT32_MAX;
	int32_t x520 = -1;
	volatile int32_t t129 = 265666737;

    t129 = (x517!=((x518==x519)+x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = -1;
	int16_t x522 = 6;
	volatile int16_t x523 = INT16_MIN;
	volatile uint8_t x524 = 3U;
	static int32_t t130 = 205;

    t130 = (x521!=((x522==x523)+x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	int16_t x527 = -1;
	uint32_t x528 = 615U;
	volatile int32_t t131 = 23172394;

    t131 = (x525!=((x526==x527)+x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x529 = 11U;
	uint32_t x530 = UINT32_MAX;
	static int16_t x531 = INT16_MAX;
	uint16_t x532 = 315U;
	volatile int32_t t132 = -23484;

    t132 = (x529!=((x530==x531)+x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MIN;
	static uint64_t x535 = 183361270093486407LLU;

    t133 = (x533!=((x534==x535)+x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 619LLU;
	static int32_t x539 = INT32_MAX;
	int64_t x540 = INT64_MIN;
	static int32_t t134 = -10;

    t134 = (x537!=((x538==x539)+x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 0U;
	int8_t x542 = INT8_MAX;
	int16_t x543 = -1;
	int16_t x544 = INT16_MIN;
	static int32_t t135 = -258129831;

    t135 = (x541!=((x542==x543)+x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = -1;
	volatile int32_t x547 = INT32_MIN;
	volatile int32_t t136 = 28;

    t136 = (x545!=((x546==x547)+x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x549 = 0U;
	int32_t x551 = 2;
	int32_t x552 = -106628;
	volatile int32_t t137 = 606008566;

    t137 = (x549!=((x550==x551)+x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = 633;
	volatile int64_t x555 = INT64_MIN;
	int64_t x556 = INT64_MIN;
	volatile int32_t t138 = 66739;

    t138 = (x553!=((x554==x555)+x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = UINT16_MAX;
	volatile uint32_t x558 = 27U;
	int8_t x559 = INT8_MIN;
	static int32_t t139 = -9290;

    t139 = (x557!=((x558==x559)+x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 557397625U;
	static int16_t x562 = INT16_MAX;
	int16_t x563 = -1;
	volatile int64_t x564 = -191389512226LL;

    t140 = (x561!=((x562==x563)+x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x566 = -1;
	int8_t x567 = INT8_MIN;
	int16_t x568 = 3;

    t141 = (x565!=((x566==x567)+x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	int64_t x570 = 0LL;
	static int64_t x571 = INT64_MIN;
	int64_t x572 = INT64_MIN;
	volatile int32_t t142 = 74;

    t142 = (x569!=((x570==x571)+x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 26U;
	volatile uint32_t x575 = UINT32_MAX;
	int64_t x576 = INT64_MAX;

    t143 = (x573!=((x574==x575)+x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint64_t x578 = UINT64_MAX;
	static int32_t x579 = INT32_MIN;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 28540872;

    t144 = (x577!=((x578==x579)+x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 85U;
	volatile int16_t x582 = -805;
	volatile int32_t x583 = INT32_MAX;
	int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -452;

    t145 = (x581!=((x582==x583)+x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 212821849634LLU;
	volatile uint32_t x587 = 5972061U;
	uint16_t x588 = 800U;
	static int32_t t146 = 0;

    t146 = (x585!=((x586==x587)+x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	int32_t x591 = INT32_MIN;
	volatile int16_t x592 = INT16_MIN;
	int32_t t147 = 59;

    t147 = (x589!=((x590==x591)+x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MAX;
	int8_t x595 = 5;
	static int8_t x596 = -1;
	static int32_t t148 = 0;

    t148 = (x593!=((x594==x595)+x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile int16_t x598 = -1;
	int32_t t149 = 1;

    t149 = (x597!=((x598==x599)+x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x601 = INT64_MAX;
	volatile int64_t x602 = INT64_MIN;
	int16_t x603 = -111;
	int32_t x604 = -1;
	volatile int32_t t150 = 2406980;

    t150 = (x601!=((x602==x603)+x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	int64_t x606 = INT64_MIN;
	static int32_t t151 = -961767502;

    t151 = (x605!=((x606==x607)+x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = -6;
	int32_t x610 = INT32_MAX;
	int64_t x611 = INT64_MAX;
	volatile int32_t t152 = -4307229;

    t152 = (x609!=((x610==x611)+x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	int32_t x615 = -1;
	volatile int8_t x616 = INT8_MIN;
	volatile int32_t t153 = 420543;

    t153 = (x613!=((x614==x615)+x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	static int16_t x618 = -1872;
	uint8_t x619 = 3U;
	static volatile int32_t x620 = INT32_MIN;
	volatile int32_t t154 = -71034393;

    t154 = (x617!=((x618==x619)+x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x623 = -1;
	int8_t x624 = -1;
	int32_t t155 = 50909;

    t155 = (x621!=((x622==x623)+x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 596;
	int8_t x626 = INT8_MIN;
	int8_t x628 = -1;

    t156 = (x625!=((x626==x627)+x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 517U;
	int32_t x631 = INT32_MIN;
	static int8_t x632 = 1;
	volatile int32_t t157 = -1832;

    t157 = (x629!=((x630==x631)+x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	static volatile int32_t x634 = INT32_MIN;
	volatile uint8_t x635 = UINT8_MAX;
	int32_t x636 = INT32_MIN;
	int32_t t158 = -18745;

    t158 = (x633!=((x634==x635)+x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	volatile int64_t x638 = 27062453LL;
	uint8_t x639 = 3U;
	int8_t x640 = INT8_MAX;
	int32_t t159 = 1687;

    t159 = (x637!=((x638==x639)+x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = 5U;
	int16_t x643 = -7956;
	int16_t x644 = 82;

    t160 = (x641!=((x642==x643)+x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 31751230U;
	uint64_t x646 = UINT64_MAX;
	int8_t x647 = INT8_MIN;
	static int16_t x648 = INT16_MAX;

    t161 = (x645!=((x646==x647)+x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1411;
	static volatile int16_t x650 = INT16_MIN;
	static int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MIN;
	int32_t t162 = 870674;

    t162 = (x649!=((x650==x651)+x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	uint8_t x654 = 68U;
	uint32_t x655 = UINT32_MAX;
	int8_t x656 = INT8_MAX;

    t163 = (x653!=((x654==x655)+x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int16_t x658 = -13;
	static int64_t x659 = INT64_MIN;
	int16_t x660 = INT16_MIN;
	int32_t t164 = -12064;

    t164 = (x657!=((x658==x659)+x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	static volatile int16_t x662 = 55;
	volatile int16_t x663 = -1568;
	int32_t x664 = 493;
	volatile int32_t t165 = -832;

    t165 = (x661!=((x662==x663)+x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = UINT16_MAX;
	int64_t x667 = INT64_MAX;
	static volatile int32_t t166 = -396145;

    t166 = (x665!=((x666==x667)+x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x669 = UINT64_MAX;
	int16_t x670 = INT16_MAX;
	volatile int16_t x671 = INT16_MAX;
	static int16_t x672 = 332;
	int32_t t167 = -1;

    t167 = (x669!=((x670==x671)+x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 158830217681947LLU;
	int32_t x674 = -874;
	static uint8_t x676 = 112U;
	static volatile int32_t t168 = 5;

    t168 = (x673!=((x674==x675)+x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x678 = UINT16_MAX;
	int32_t x679 = -1;
	volatile int32_t t169 = -3;

    t169 = (x677!=((x678==x679)+x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	volatile int64_t x682 = -1LL;
	volatile int8_t x683 = 17;
	volatile int32_t t170 = 475;

    t170 = (x681!=((x682==x683)+x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x685 = 182664;
	static volatile int8_t x686 = -1;
	volatile int64_t x688 = INT64_MIN;
	int32_t t171 = 36814609;

    t171 = (x685!=((x686==x687)+x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -1959LL;
	volatile int8_t x691 = INT8_MIN;
	uint8_t x692 = 27U;
	int32_t t172 = 943776;

    t172 = (x689!=((x690==x691)+x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x694 = -97318036;
	uint16_t x695 = 27293U;
	int16_t x696 = INT16_MAX;
	volatile int32_t t173 = -3216808;

    t173 = (x693!=((x694==x695)+x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = INT8_MAX;
	int8_t x699 = 0;
	uint8_t x700 = 8U;
	volatile int32_t t174 = 24;

    t174 = (x697!=((x698==x699)+x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = 1841551U;
	int16_t x703 = INT16_MAX;
	int8_t x704 = -2;
	volatile int32_t t175 = -36102;

    t175 = (x701!=((x702==x703)+x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 1582614016001181LLU;
	uint8_t x706 = UINT8_MAX;
	uint8_t x707 = UINT8_MAX;
	uint64_t x708 = 13094839LLU;

    t176 = (x705!=((x706==x707)+x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = INT32_MAX;
	int64_t x711 = INT64_MIN;
	int8_t x712 = INT8_MIN;

    t177 = (x709!=((x710==x711)+x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x713 = 14611685U;
	int16_t x714 = 11;
	uint64_t x715 = 2896627333578965799LLU;
	int8_t x716 = -1;
	volatile int32_t t178 = -843221;

    t178 = (x713!=((x714==x715)+x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -403;
	int64_t x720 = INT64_MIN;

    t179 = (x717!=((x718==x719)+x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x722 = -449;
	static volatile int32_t t180 = -896092;

    t180 = (x721!=((x722==x723)+x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -3;
	volatile int8_t x727 = 23;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = 188711926;

    t181 = (x725!=((x726==x727)+x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x729 = 6U;
	static int8_t x731 = -33;
	volatile int8_t x732 = INT8_MIN;
	int32_t t182 = -178;

    t182 = (x729!=((x730==x731)+x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 28U;
	uint16_t x734 = UINT16_MAX;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t183 = -17;

    t183 = (x733!=((x734==x735)+x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile int64_t x738 = INT64_MIN;
	uint64_t x739 = 751113LLU;

    t184 = (x737!=((x738==x739)+x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MAX;
	static volatile int32_t t185 = 401;

    t185 = (x741!=((x742==x743)+x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x746 = -66867918;
	static int64_t x747 = INT64_MAX;
	int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -18169;

    t186 = (x745!=((x746==x747)+x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = -1;
	static volatile int32_t x751 = 29909;
	int8_t x752 = INT8_MAX;
	volatile int32_t t187 = 0;

    t187 = (x749!=((x750==x751)+x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 872U;
	volatile int8_t x754 = -51;
	uint32_t x755 = UINT32_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t188 = 0;

    t188 = (x753!=((x754==x755)+x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x758 = 31415422553LLU;
	int64_t x759 = -1LL;
	int32_t t189 = -525350544;

    t189 = (x757!=((x758==x759)+x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MIN;
	int8_t x762 = 0;
	volatile uint64_t x763 = UINT64_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t190 = -3629839;

    t190 = (x761!=((x762==x763)+x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MAX;
	volatile uint32_t x767 = 201U;
	volatile uint64_t x768 = 64553LLU;
	static volatile int32_t t191 = 52438;

    t191 = (x765!=((x766==x767)+x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = -1;
	volatile int16_t x772 = INT16_MIN;
	volatile int32_t t192 = 156;

    t192 = (x769!=((x770==x771)+x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = -1;
	int16_t x774 = INT16_MIN;
	uint64_t x775 = 0LLU;
	int32_t x776 = INT32_MIN;
	int32_t t193 = -43;

    t193 = (x773!=((x774==x775)+x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x777 = UINT32_MAX;
	int32_t x778 = 1479339;
	int8_t x779 = INT8_MIN;
	int32_t t194 = 18149;

    t194 = (x777!=((x778==x779)+x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = -1;
	int16_t x782 = 240;
	int8_t x783 = -1;
	int16_t x784 = -84;
	int32_t t195 = 82;

    t195 = (x781!=((x782==x783)+x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 903992937778446768LLU;
	static int8_t x786 = -1;
	static uint16_t x787 = 468U;
	static int32_t t196 = 171;

    t196 = (x785!=((x786==x787)+x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -224500LL;
	static int8_t x790 = INT8_MAX;
	volatile int32_t x791 = -432169543;
	int32_t x792 = -808;
	volatile int32_t t197 = 12;

    t197 = (x789!=((x790==x791)+x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -83LL;
	int32_t x794 = INT32_MAX;
	int32_t x795 = INT32_MIN;
	volatile int32_t x796 = INT32_MAX;
	static volatile int32_t t198 = 3;

    t198 = (x793!=((x794==x795)+x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 1175LLU;
	int8_t x798 = -1;
	volatile int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;
	volatile int32_t t199 = -68289559;

    t199 = (x797!=((x798==x799)+x800));

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

