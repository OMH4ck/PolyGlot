
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

int8_t x6 = 1;
int32_t x8 = INT32_MAX;
static volatile int64_t t1 = -6LL;
volatile uint64_t t2 = 95LLU;
volatile int16_t x14 = -353;
int32_t x20 = -107;
static uint32_t x29 = 2U;
uint64_t x30 = 1601381093913331920LLU;
int16_t x31 = INT16_MIN;
int64_t x33 = -55LL;
static uint16_t x39 = UINT16_MAX;
int16_t x40 = INT16_MIN;
volatile int32_t t9 = -17708713;
static int8_t x41 = INT8_MAX;
int64_t x44 = 122079398978131LL;
int64_t x46 = -33875535053LL;
int8_t x48 = -63;
int32_t t11 = 0;
volatile uint16_t x55 = UINT16_MAX;
static volatile uint32_t t14 = 91U;
uint8_t x62 = UINT8_MAX;
static volatile int16_t x69 = -33;
static int32_t t17 = 1;
uint32_t x77 = 334548010U;
int64_t x88 = -1LL;
int32_t x104 = INT32_MIN;
int64_t t23 = -1277519LL;
int16_t x109 = -1;
volatile int32_t t25 = -1;
int32_t t26 = 58118953;
volatile int32_t x118 = INT32_MAX;
volatile int8_t x127 = 19;
int32_t x128 = INT32_MAX;
uint8_t x129 = 57U;
static int64_t x139 = INT64_MAX;
volatile uint64_t t32 = 162118254LLU;
uint64_t x143 = 1006775906151LLU;
volatile uint32_t t34 = 446U;
int32_t x150 = -241618095;
static volatile int16_t x153 = -161;
volatile int32_t t36 = -176;
int64_t x166 = 1LL;
int8_t x180 = -1;
int64_t x182 = -1015LL;
uint64_t x185 = 2LLU;
int8_t x188 = INT8_MAX;
volatile uint64_t x189 = 387LLU;
uint8_t x190 = 0U;
int8_t x192 = -15;
uint64_t t45 = 3086794105259LLU;
int64_t x197 = INT64_MIN;
uint32_t x198 = 0U;
int64_t x202 = 252918006LL;
uint16_t x209 = UINT16_MAX;
uint8_t x212 = 0U;
uint32_t x214 = 7809676U;
volatile uint8_t x218 = 12U;
uint16_t x229 = 3U;
int64_t t55 = -3989964022702647LL;
volatile int8_t x242 = INT8_MAX;
volatile int32_t t56 = -93529163;
static uint8_t x259 = UINT8_MAX;
static int32_t x263 = INT32_MIN;
volatile int32_t x265 = 137251;
static int16_t x268 = -7554;
volatile int32_t t62 = 37442690;
int64_t x269 = INT64_MIN;
int16_t x270 = -1;
int64_t x271 = INT64_MIN;
int8_t x274 = -1;
volatile uint8_t x293 = UINT8_MAX;
int8_t x297 = INT8_MIN;
int32_t t70 = -4132009;
int16_t x307 = 7680;
int32_t x309 = INT32_MIN;
volatile int8_t x311 = -39;
int64_t x313 = 97507739197161744LL;
uint32_t x317 = 12429121U;
uint32_t t74 = 2U;
int32_t t76 = -234;
int64_t x341 = INT64_MIN;
static int64_t x342 = INT64_MIN;
volatile int64_t x343 = -1LL;
int32_t x344 = -1;
int64_t t79 = 355808LL;
int16_t x346 = INT16_MAX;
static int32_t x349 = 74222418;
int32_t t82 = 2;
static int16_t x357 = INT16_MIN;
int64_t x365 = -1LL;
uint32_t x376 = UINT32_MAX;
int8_t x384 = INT8_MAX;
int8_t x385 = -1;
volatile int32_t t89 = -12479;
volatile int32_t t91 = 20697501;
volatile int16_t x400 = INT16_MIN;
int32_t x403 = INT32_MAX;
int8_t x405 = -1;
int32_t x406 = 6;
static int16_t x410 = INT16_MIN;
static volatile uint8_t x412 = 0U;
static int32_t x419 = INT32_MIN;
int32_t t97 = 2;
volatile uint64_t x426 = 1457661LLU;
uint16_t x433 = 1U;
int16_t x436 = -1;
int32_t x440 = 834745424;
uint8_t x448 = UINT8_MAX;
int32_t t104 = 4;
uint32_t x450 = 205U;
uint64_t x458 = 114LLU;
uint16_t x460 = UINT16_MAX;
int8_t x466 = INT8_MIN;
volatile int32_t t110 = 0;
static volatile uint16_t x474 = 0U;
int64_t t111 = 3LL;
volatile int64_t x477 = INT64_MIN;
int32_t x499 = INT32_MAX;
static volatile uint32_t x503 = UINT32_MAX;
int16_t x504 = INT16_MIN;
int8_t x512 = INT8_MIN;
int16_t x514 = INT16_MAX;
uint32_t x515 = 222387805U;
int8_t x516 = INT8_MIN;
int8_t x519 = INT8_MIN;
static uint16_t x524 = UINT16_MAX;
static volatile int32_t t124 = 13914193;
uint32_t x536 = 750680410U;
volatile uint64_t t127 = UINT64_MAX;
static int8_t x541 = 59;
volatile int16_t x542 = INT16_MIN;
volatile int32_t t129 = 1687;
int32_t x554 = INT32_MIN;
volatile uint8_t x557 = 2U;
int64_t x558 = INT64_MIN;
int8_t x560 = INT8_MIN;
int8_t x565 = 1;
int8_t x566 = -7;
volatile int32_t t134 = 527397;
int16_t x570 = 101;
uint32_t x580 = 536118177U;
int64_t t136 = -299102978881645LL;
int64_t x581 = INT64_MIN;
static int64_t x582 = 2966528LL;
int16_t x585 = 0;
static int16_t x591 = INT16_MIN;
int32_t x593 = INT32_MIN;
volatile int32_t x596 = 1162872;
int64_t x607 = INT64_MAX;
static int8_t x613 = INT8_MIN;
volatile uint32_t x616 = 26258807U;
volatile int32_t t144 = -7492394;
volatile int64_t x622 = INT64_MIN;
int8_t x623 = 10;
static volatile int64_t x625 = INT64_MIN;
int16_t x628 = INT16_MAX;
int64_t x630 = INT64_MIN;
uint16_t x636 = 741U;
volatile int32_t t151 = -1;
int32_t x654 = INT32_MAX;
int32_t x655 = INT32_MIN;
uint16_t x667 = 1171U;
static uint32_t t157 = 12370551U;
int8_t x678 = 20;
int64_t x680 = INT64_MIN;
volatile int32_t t159 = 3766034;
int32_t x702 = INT32_MAX;
static int8_t x706 = INT8_MIN;
volatile int64_t t165 = 15LL;
int16_t x712 = INT16_MIN;
uint32_t x714 = UINT32_MAX;
static int8_t x715 = INT8_MIN;
volatile int32_t x718 = -99782;
volatile uint32_t x719 = UINT32_MAX;
volatile int64_t x722 = INT64_MIN;
uint16_t x723 = 15U;
volatile uint64_t x745 = 970781029979787795LLU;
static int16_t x747 = -13179;
int32_t x748 = -1;
static volatile uint64_t x750 = 16292182320LLU;
volatile int32_t x751 = -1;
int32_t t175 = 2;
volatile int32_t t177 = 4083;
uint32_t x761 = UINT32_MAX;
int64_t x774 = -1584501604907555592LL;
int16_t x779 = -1;
int16_t x784 = 4;
int16_t x790 = 3097;
uint64_t x795 = 47LLU;
uint32_t x796 = 32342U;
uint32_t x797 = UINT32_MAX;
volatile int64_t x799 = INT64_MIN;
int16_t x801 = INT16_MAX;
volatile int32_t t188 = 77;
int64_t x806 = INT64_MIN;
volatile uint32_t x808 = UINT32_MAX;
static int16_t x814 = INT16_MIN;
uint8_t x815 = 3U;
uint32_t x816 = 1411U;
int32_t x829 = INT32_MIN;
int8_t x832 = -21;
int16_t x838 = -16;
int32_t t198 = -29282219;
uint64_t x846 = 118728428805LLU;


void f0(void) {
    	volatile int16_t x1 = 1;
	int64_t x2 = -7736317063LL;
	uint64_t x3 = 3974257974041LLU;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -142196420;

    t0 = (x1+((x2<=x3)!=x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	int32_t x7 = INT32_MIN;

    t1 = (x5+((x6<=x7)!=x8));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	static int8_t x12 = 21;

    t2 = (x9+((x10<=x11)!=x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	int8_t x15 = -1;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -3412633;

    t3 = (x13+((x14<=x15)!=x16));

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	volatile int32_t t4 = -647;

    t4 = (x17+((x18<=x19)!=x20));

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -1;
	int32_t x22 = INT32_MAX;
	static uint8_t x23 = 13U;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = 43247;

    t5 = (x21+((x22<=x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -3507088003568716LL;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	static uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = 109LL;

    t6 = (x25+((x26<=x27)!=x28));

    if (t6 != -3507088003568715LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x32 = INT64_MIN;
	volatile uint32_t t7 = 12U;

    t7 = (x29+((x30<=x31)!=x32));

    if (t7 != 3U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	int64_t t8 = 39028197321LL;

    t8 = (x33+((x34<=x35)!=x36));

    if (t8 != -54LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 59U;
	int32_t x38 = INT32_MIN;

    t9 = (x37+((x38<=x39)!=x40));

    if (t9 != 60) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MAX;
	int16_t x43 = -1;
	static int32_t t10 = -387711191;

    t10 = (x41+((x42<=x43)!=x44));

    if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile int64_t x47 = INT64_MIN;

    t11 = (x45+((x46<=x47)!=x48));

    if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 22U;
	static int16_t x50 = INT16_MAX;
	int32_t x51 = -1;
	volatile int8_t x52 = -1;
	int32_t t12 = -4997;

    t12 = (x49+((x50<=x51)!=x52));

    if (t12 != 23) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 14907U;
	int16_t x54 = INT16_MAX;
	static int16_t x56 = -1;
	volatile int32_t t13 = 642;

    t13 = (x53+((x54<=x55)!=x56));

    if (t13 != 14908) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 3501469U;
	static int64_t x58 = INT64_MIN;
	uint32_t x59 = 224U;
	static int16_t x60 = 1;

    t14 = (x57+((x58<=x59)!=x60));

    if (t14 != 3501469U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	volatile int16_t x63 = -1;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 36;

    t15 = (x61+((x62<=x63)!=x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = INT64_MIN;
	int64_t x66 = -1LL;
	static int32_t x67 = -1;
	int16_t x68 = INT16_MAX;
	volatile int64_t t16 = 37284036175LL;

    t16 = (x65+((x66<=x67)!=x68));

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x70 = INT32_MAX;
	static int16_t x71 = 1354;
	static int64_t x72 = INT64_MAX;

    t17 = (x69+((x70<=x71)!=x72));

    if (t17 != -32) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x78 = 32146U;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t18 = 12U;

    t18 = (x77+((x78<=x79)!=x80));

    if (t18 != 334548011U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = UINT8_MAX;
	int8_t x82 = 3;
	uint8_t x83 = 7U;
	int16_t x84 = -1;
	volatile int32_t t19 = -1;

    t19 = (x81+((x82<=x83)!=x84));

    if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	int8_t x86 = -1;
	int8_t x87 = -3;
	int32_t t20 = 2135;

    t20 = (x85+((x86<=x87)!=x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	static int8_t x90 = INT8_MAX;
	int8_t x91 = INT8_MIN;
	int8_t x92 = 23;
	volatile int32_t t21 = 96930;

    t21 = (x89+((x90<=x91)!=x92));

    if (t21 != 65536) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MIN;
	uint64_t x98 = 265131165133LLU;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MAX;
	volatile int32_t t22 = 4186;

    t22 = (x97+((x98<=x99)!=x100));

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = INT64_MIN;
	volatile uint8_t x102 = 26U;
	uint8_t x103 = 63U;

    t23 = (x101+((x102<=x103)!=x104));

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = -1;
	int8_t x106 = -1;
	uint16_t x107 = 13U;
	uint16_t x108 = 797U;
	volatile int32_t t24 = 3;

    t24 = (x105+((x106<=x107)!=x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = -1;
	static uint8_t x111 = UINT8_MAX;
	static uint16_t x112 = 5U;

    t25 = (x109+((x110<=x111)!=x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x113 = 114U;
	int8_t x114 = INT8_MIN;
	uint16_t x115 = UINT16_MAX;
	int64_t x116 = INT64_MAX;

    t26 = (x113+((x114<=x115)!=x116));

    if (t26 != 115) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x117 = 1U;
	uint32_t x119 = 3354843U;
	int32_t x120 = INT32_MAX;
	static uint32_t t27 = 102U;

    t27 = (x117+((x118<=x119)!=x120));

    if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	volatile uint8_t x122 = 6U;
	static volatile int16_t x123 = INT16_MAX;
	volatile int64_t x124 = INT64_MIN;
	int32_t t28 = -105204;

    t28 = (x121+((x122<=x123)!=x124));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 6U;
	uint32_t x126 = UINT32_MAX;
	static int32_t t29 = 2755302;

    t29 = (x125+((x126<=x127)!=x128));

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x130 = -9;
	uint32_t x131 = 39604U;
	static uint8_t x132 = 1U;
	volatile int32_t t30 = 1;

    t30 = (x129+((x130<=x131)!=x132));

    if (t30 != 58) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x133 = 90U;
	static int32_t x134 = 61844;
	int64_t x135 = -1LL;
	volatile int32_t x136 = INT32_MAX;
	volatile int32_t t31 = 188;

    t31 = (x133+((x134<=x135)!=x136));

    if (t31 != 91) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x137 = 135759519443LLU;
	int64_t x138 = -288689211091049716LL;
	uint32_t x140 = 40256U;

    t32 = (x137+((x138<=x139)!=x140));

    if (t32 != 135759519444LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MAX;
	int64_t x144 = 114578367594892LL;
	volatile int32_t t33 = 29;

    t33 = (x141+((x142<=x143)!=x144));

    if (t33 != 256) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = 60883U;
	volatile uint8_t x146 = UINT8_MAX;
	volatile uint16_t x147 = 51U;
	static uint32_t x148 = 229320U;

    t34 = (x145+((x146<=x147)!=x148));

    if (t34 != 60884U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = -1;
	uint64_t x151 = 5906318492820004LLU;
	uint8_t x152 = 27U;
	static volatile int32_t t35 = -1632;

    t35 = (x149+((x150<=x151)!=x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x154 = -1;
	int16_t x155 = -4001;
	int16_t x156 = INT16_MIN;

    t36 = (x153+((x154<=x155)!=x156));

    if (t36 != -160) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = -11324023;
	static int16_t x158 = -1;
	int64_t x159 = -1LL;
	int32_t x160 = -1;
	int32_t t37 = -78;

    t37 = (x157+((x158<=x159)!=x160));

    if (t37 != -11324022) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x161 = -25283492;
	static int16_t x162 = INT16_MAX;
	volatile int8_t x163 = -1;
	uint16_t x164 = 12U;
	static int32_t t38 = -127675638;

    t38 = (x161+((x162<=x163)!=x164));

    if (t38 != -25283491) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x165 = 240358139;
	volatile int32_t x167 = INT32_MIN;
	static volatile uint16_t x168 = 3284U;
	volatile int32_t t39 = 31889;

    t39 = (x165+((x166<=x167)!=x168));

    if (t39 != 240358140) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 1554504U;
	int64_t x170 = 49597933LL;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t40 = 897978802U;

    t40 = (x169+((x170<=x171)!=x172));

    if (t40 != 1554505U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x173 = -776;
	int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	int16_t x176 = -1;
	volatile int32_t t41 = 120198;

    t41 = (x173+((x174<=x175)!=x176));

    if (t41 != -775) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -1LL;
	static int16_t x178 = 0;
	int64_t x179 = -1LL;
	volatile int64_t t42 = 2443028087471LL;

    t42 = (x177+((x178<=x179)!=x180));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -1465;
	volatile int32_t t43 = 475688;

    t43 = (x181+((x182<=x183)!=x184));

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x186 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	volatile uint64_t t44 = 0LLU;

    t44 = (x185+((x186<=x187)!=x188));

    if (t44 != 3LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x191 = -104;

    t45 = (x189+((x190<=x191)!=x192));

    if (t45 != 388LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	int32_t x194 = -41;
	int64_t x195 = INT64_MIN;
	volatile int64_t x196 = INT64_MIN;
	static int32_t t46 = -1;

    t46 = (x193+((x194<=x195)!=x196));

    if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x199 = INT8_MIN;
	uint16_t x200 = 1997U;
	static int64_t t47 = 4215900012792LL;

    t47 = (x197+((x198<=x199)!=x200));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -2260506112822164813LL;
	int32_t t48 = 3657980;

    t48 = (x201+((x202<=x203)!=x204));

    if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x210 = -372024685;
	uint8_t x211 = UINT8_MAX;
	int32_t t49 = 124;

    t49 = (x209+((x210<=x211)!=x212));

    if (t49 != 65536) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x213 = -14;
	int64_t x215 = INT64_MIN;
	volatile int16_t x216 = INT16_MIN;
	int32_t t50 = 789906;

    t50 = (x213+((x214<=x215)!=x216));

    if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x217 = 5U;
	uint32_t x219 = 29U;
	volatile int16_t x220 = 2;
	static int32_t t51 = 60466;

    t51 = (x217+((x218<=x219)!=x220));

    if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x221 = -15018;
	static int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	static volatile int32_t x224 = INT32_MAX;
	int32_t t52 = 692;

    t52 = (x221+((x222<=x223)!=x224));

    if (t52 != -15017) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -852;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = -4;
	int16_t x228 = INT16_MIN;
	int32_t t53 = 187888;

    t53 = (x225+((x226<=x227)!=x228));

    if (t53 != -851) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x230 = 0U;
	volatile uint16_t x231 = 1U;
	static volatile int32_t x232 = INT32_MIN;
	int32_t t54 = 239;

    t54 = (x229+((x230<=x231)!=x232));

    if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x233 = 0LL;
	uint16_t x234 = 124U;
	static int16_t x235 = 10;
	int64_t x236 = INT64_MIN;

    t55 = (x233+((x234<=x235)!=x236));

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x241 = 20U;
	uint32_t x243 = 208U;
	uint64_t x244 = UINT64_MAX;

    t56 = (x241+((x242<=x243)!=x244));

    if (t56 != 21) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = -1;
	volatile int64_t x246 = INT64_MAX;
	uint32_t x247 = 58606897U;
	int8_t x248 = -25;
	int32_t t57 = 89160;

    t57 = (x245+((x246<=x247)!=x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x249 = 2U;
	int32_t x250 = INT32_MAX;
	int8_t x251 = -2;
	uint64_t x252 = 75251185966621LLU;
	static int32_t t58 = -1;

    t58 = (x249+((x250<=x251)!=x252));

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x253 = -1LL;
	int64_t x254 = INT64_MIN;
	static int16_t x255 = -1;
	static int64_t x256 = 28992764417647LL;
	int64_t t59 = -16017590279990768LL;

    t59 = (x253+((x254<=x255)!=x256));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MAX;
	int8_t x260 = -1;
	int32_t t60 = 276985;

    t60 = (x257+((x258<=x259)!=x260));

    if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x261 = UINT16_MAX;
	static int32_t x262 = INT32_MIN;
	static volatile int64_t x264 = INT64_MAX;
	volatile int32_t t61 = -28805;

    t61 = (x261+((x262<=x263)!=x264));

    if (t61 != 65536) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x266 = INT8_MIN;
	uint32_t x267 = 180U;

    t62 = (x265+((x266<=x267)!=x268));

    if (t62 != 137252) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x272 = -1;
	static volatile int64_t t63 = -46351LL;

    t63 = (x269+((x270<=x271)!=x272));

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = 17;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MIN;
	static int32_t t64 = 115457910;

    t64 = (x273+((x274<=x275)!=x276));

    if (t64 != 18) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	int16_t x279 = -1;
	static volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t65 = -61;

    t65 = (x277+((x278<=x279)!=x280));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x281 = -1;
	uint8_t x282 = 67U;
	int16_t x283 = INT16_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t66 = -13886296;

    t66 = (x281+((x282<=x283)!=x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = -1;
	int32_t t67 = 2;

    t67 = (x285+((x286<=x287)!=x288));

    if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = UINT32_MAX;
	volatile uint8_t x291 = 18U;
	uint32_t x292 = 71U;
	int32_t t68 = -28140;

    t68 = (x289+((x290<=x291)!=x292));

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x294 = INT8_MAX;
	int64_t x295 = INT64_MIN;
	static uint8_t x296 = UINT8_MAX;
	volatile int32_t t69 = -37626501;

    t69 = (x293+((x294<=x295)!=x296));

    if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x298 = 220U;
	static uint32_t x299 = 6540993U;
	static volatile uint8_t x300 = 2U;

    t70 = (x297+((x298<=x299)!=x300));

    if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MAX;
	static uint64_t x308 = UINT64_MAX;
	volatile uint32_t t71 = 13747U;

    t71 = (x305+((x306<=x307)!=x308));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x310 = 327U;
	volatile int64_t x312 = INT64_MIN;
	static int32_t t72 = 168172;

    t72 = (x309+((x310<=x311)!=x312));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x314 = 0U;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -1;
	volatile int64_t t73 = -6074LL;

    t73 = (x313+((x314<=x315)!=x316));

    if (t73 != 97507739197161745LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x318 = -1;
	uint16_t x319 = 491U;
	int32_t x320 = -5041;

    t74 = (x317+((x318<=x319)!=x320));

    if (t74 != 12429122U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x321 = 113U;
	int16_t x322 = INT16_MIN;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MAX;
	static uint32_t t75 = 215U;

    t75 = (x321+((x322<=x323)!=x324));

    if (t75 != 114U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x325 = 172718;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MAX;
	int64_t x328 = 2604485056718800LL;

    t76 = (x325+((x326<=x327)!=x328));

    if (t76 != 172719) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x329 = 257U;
	uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = UINT8_MAX;
	volatile uint32_t t77 = 181U;

    t77 = (x329+((x330<=x331)!=x332));

    if (t77 != 258U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x333 = 49580U;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile uint32_t t78 = 0U;

    t78 = (x333+((x334<=x335)!=x336));

    if (t78 != 49581U) { NG(); } else { ; }
	
}

void f79(void) {
    

    t79 = (x341+((x342<=x343)!=x344));

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x345 = 39U;
	int64_t x347 = -134994026669LL;
	uint8_t x348 = 11U;
	static uint32_t t80 = 16777U;

    t80 = (x345+((x346<=x347)!=x348));

    if (t80 != 40U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x350 = INT32_MAX;
	uint64_t x351 = 134946817054946LLU;
	int64_t x352 = -1LL;
	static int32_t t81 = 694;

    t81 = (x349+((x350<=x351)!=x352));

    if (t81 != 74222419) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = 1;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;

    t82 = (x353+((x354<=x355)!=x356));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	volatile int64_t x360 = -1LL;
	volatile int32_t t83 = 14;

    t83 = (x357+((x358<=x359)!=x360));

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x361 = INT16_MAX;
	int32_t x362 = INT32_MIN;
	static int64_t x363 = INT64_MIN;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t84 = 514351;

    t84 = (x361+((x362<=x363)!=x364));

    if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x366 = UINT8_MAX;
	uint32_t x367 = 40872U;
	int8_t x368 = INT8_MAX;
	int64_t t85 = -88LL;

    t85 = (x365+((x366<=x367)!=x368));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = INT16_MIN;
	static int8_t x370 = -1;
	int32_t x371 = -1;
	uint64_t x372 = 224907917LLU;
	volatile int32_t t86 = -244;

    t86 = (x369+((x370<=x371)!=x372));

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	volatile int32_t t87 = -133703209;

    t87 = (x373+((x374<=x375)!=x376));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x381 = -62;
	int16_t x382 = -1241;
	int64_t x383 = INT64_MIN;
	volatile int32_t t88 = -107767456;

    t88 = (x381+((x382<=x383)!=x384));

    if (t88 != -61) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x386 = -5;
	int64_t x387 = -1LL;
	volatile int16_t x388 = INT16_MIN;

    t89 = (x385+((x386<=x387)!=x388));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x389 = INT16_MIN;
	int16_t x390 = 1;
	uint64_t x391 = 639587501LLU;
	int64_t x392 = -1LL;
	volatile int32_t t90 = 2624943;

    t90 = (x389+((x390<=x391)!=x392));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	static int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = 20U;

    t91 = (x393+((x394<=x395)!=x396));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = -1;
	volatile int32_t x398 = INT32_MIN;
	volatile int32_t x399 = INT32_MAX;
	static int32_t t92 = 12375;

    t92 = (x397+((x398<=x399)!=x400));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x401 = 12547;
	uint16_t x402 = 1U;
	volatile int8_t x404 = INT8_MAX;
	volatile int32_t t93 = -301205;

    t93 = (x401+((x402<=x403)!=x404));

    if (t93 != 12548) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x407 = -1;
	int32_t x408 = -55;
	volatile int32_t t94 = 27284;

    t94 = (x405+((x406<=x407)!=x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MAX;
	int16_t x411 = INT16_MIN;
	int32_t t95 = 47833;

    t95 = (x409+((x410<=x411)!=x412));

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x413 = -1;
	static uint8_t x414 = UINT8_MAX;
	int8_t x415 = 1;
	static int16_t x416 = INT16_MIN;
	int32_t t96 = -3217947;

    t96 = (x413+((x414<=x415)!=x416));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 29322U;
	int8_t x418 = INT8_MIN;
	uint16_t x420 = 1673U;

    t97 = (x417+((x418<=x419)!=x420));

    if (t97 != 29323) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 126U;
	static int64_t x423 = -1LL;
	int8_t x424 = INT8_MAX;
	uint64_t t98 = 30350LLU;

    t98 = (x421+((x422<=x423)!=x424));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x425 = 1213LLU;
	uint64_t x427 = 12999051LLU;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t99 = 198832198920LLU;

    t99 = (x425+((x426<=x427)!=x428));

    if (t99 != 1214LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MIN;
	uint64_t x430 = 68437897770046LLU;
	int64_t x431 = 8249LL;
	int32_t x432 = INT32_MIN;
	volatile int64_t t100 = 5424355027433970LL;

    t100 = (x429+((x430<=x431)!=x432));

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x434 = INT16_MAX;
	static uint8_t x435 = UINT8_MAX;
	static volatile int32_t t101 = 0;

    t101 = (x433+((x434<=x435)!=x436));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = 4102325766442LLU;
	volatile int8_t x438 = 1;
	int32_t x439 = -1;
	uint64_t t102 = 1394296LLU;

    t102 = (x437+((x438<=x439)!=x440));

    if (t102 != 4102325766443LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x441 = 1187730463198525LLU;
	uint64_t x442 = 1588LLU;
	volatile int64_t x443 = INT64_MIN;
	volatile int16_t x444 = 0;
	uint64_t t103 = 574054703588LLU;

    t103 = (x441+((x442<=x443)!=x444));

    if (t103 != 1187730463198526LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x445 = INT8_MIN;
	int16_t x446 = 460;
	uint32_t x447 = 13672U;

    t104 = (x445+((x446<=x447)!=x448));

    if (t104 != -127) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x449 = 1165;
	uint8_t x451 = 2U;
	int32_t x452 = -1;
	int32_t t105 = 1;

    t105 = (x449+((x450<=x451)!=x452));

    if (t105 != 1166) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x453 = 1308U;
	static int8_t x454 = INT8_MIN;
	volatile int64_t x455 = 1298000648LL;
	int32_t x456 = INT32_MIN;
	int32_t t106 = 3141142;

    t106 = (x453+((x454<=x455)!=x456));

    if (t106 != 1309) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x457 = UINT8_MAX;
	static uint8_t x459 = 3U;
	int32_t t107 = 1116;

    t107 = (x457+((x458<=x459)!=x460));

    if (t107 != 256) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x461 = -1LL;
	int32_t x462 = INT32_MAX;
	int32_t x463 = INT32_MIN;
	int32_t x464 = 0;
	volatile int64_t t108 = -432428586556LL;

    t108 = (x461+((x462<=x463)!=x464));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile uint32_t x467 = 151U;
	int32_t x468 = -1;
	volatile int32_t t109 = -4;

    t109 = (x465+((x466<=x467)!=x468));

    if (t109 != 256) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x469 = UINT16_MAX;
	static int16_t x470 = -1;
	int32_t x471 = 0;
	volatile int32_t x472 = -1;

    t110 = (x469+((x470<=x471)!=x472));

    if (t110 != 65536) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x473 = INT64_MIN;
	int16_t x475 = -1;
	uint16_t x476 = 13U;

    t111 = (x473+((x474<=x475)!=x476));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x478 = -23;
	int64_t x479 = -659LL;
	static int64_t x480 = INT64_MIN;
	int64_t t112 = 1198699LL;

    t112 = (x477+((x478<=x479)!=x480));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x481 = -1LL;
	uint8_t x482 = 6U;
	int16_t x483 = INT16_MAX;
	int64_t x484 = INT64_MIN;
	int64_t t113 = -21830766665238LL;

    t113 = (x481+((x482<=x483)!=x484));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x485 = UINT32_MAX;
	volatile int16_t x486 = -1;
	int8_t x487 = INT8_MAX;
	uint64_t x488 = 163241LLU;
	volatile uint32_t t114 = 658909749U;

    t114 = (x485+((x486<=x487)!=x488));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = UINT64_MAX;
	static volatile int64_t x490 = 87403317399389LL;
	uint32_t x491 = 66293U;
	int16_t x492 = INT16_MIN;
	uint64_t t115 = 753194980386379370LLU;

    t115 = (x489+((x490<=x491)!=x492));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	static int8_t x495 = -1;
	uint16_t x496 = UINT16_MAX;
	int32_t t116 = 853993;

    t116 = (x493+((x494<=x495)!=x496));

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x497 = INT16_MIN;
	int32_t x498 = -10745;
	int32_t x500 = INT32_MIN;
	static int32_t t117 = -1;

    t117 = (x497+((x498<=x499)!=x500));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x501 = UINT64_MAX;
	static uint16_t x502 = 0U;
	volatile uint64_t t118 = 1008685113LLU;

    t118 = (x501+((x502<=x503)!=x504));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x505 = UINT8_MAX;
	int8_t x506 = 44;
	int64_t x507 = INT64_MIN;
	int64_t x508 = -1LL;
	static int32_t t119 = 3;

    t119 = (x505+((x506<=x507)!=x508));

    if (t119 != 256) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x509 = 1U;
	uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 123U;
	static int32_t t120 = -21183916;

    t120 = (x509+((x510<=x511)!=x512));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = INT16_MIN;
	int32_t t121 = 8;

    t121 = (x513+((x514<=x515)!=x516));

    if (t121 != -32767) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x517 = 1265793;
	int16_t x518 = -1;
	volatile uint32_t x520 = UINT32_MAX;
	int32_t t122 = 5;

    t122 = (x517+((x518<=x519)!=x520));

    if (t122 != 1265794) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = -1LL;
	uint16_t x523 = 101U;
	int32_t t123 = -91303603;

    t123 = (x521+((x522<=x523)!=x524));

    if (t123 != -2147483647) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = -378;
	int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MAX;
	uint64_t x528 = UINT64_MAX;

    t124 = (x525+((x526<=x527)!=x528));

    if (t124 != -377) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x529 = INT8_MIN;
	int64_t x530 = INT64_MAX;
	int8_t x531 = 5;
	static int8_t x532 = -1;
	int32_t t125 = -11403;

    t125 = (x529+((x530<=x531)!=x532));

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = INT16_MIN;
	static int32_t x534 = INT32_MAX;
	uint8_t x535 = UINT8_MAX;
	volatile int32_t t126 = 481613374;

    t126 = (x533+((x534<=x535)!=x536));

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x537 = UINT64_MAX;
	static int16_t x538 = INT16_MAX;
	static int8_t x539 = INT8_MAX;
	int16_t x540 = 0;

    t127 = (x537+((x538<=x539)!=x540));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x543 = 1730448520543568656LLU;
	int16_t x544 = 0;
	volatile int32_t t128 = 901612;

    t128 = (x541+((x542<=x543)!=x544));

    if (t128 != 59) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x545 = INT16_MAX;
	uint16_t x546 = 23U;
	uint16_t x547 = 0U;
	int64_t x548 = 10886020707585LL;

    t129 = (x545+((x546<=x547)!=x548));

    if (t129 != 32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = -10;
	static int16_t x551 = INT16_MIN;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t130 = -4172;

    t130 = (x549+((x550<=x551)!=x552));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x553 = INT16_MIN;
	uint32_t x555 = 19U;
	int8_t x556 = -1;
	volatile int32_t t131 = 1438;

    t131 = (x553+((x554<=x555)!=x556));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x559 = INT32_MIN;
	volatile int32_t t132 = 351;

    t132 = (x557+((x558<=x559)!=x560));

    if (t132 != 3) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x561 = 2U;
	uint32_t x562 = UINT32_MAX;
	int16_t x563 = -7;
	int16_t x564 = 616;
	volatile int32_t t133 = 276522;

    t133 = (x561+((x562<=x563)!=x564));

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x567 = 66569840942029LLU;
	volatile int8_t x568 = INT8_MIN;

    t134 = (x565+((x566<=x567)!=x568));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x569 = 1U;
	static uint64_t x571 = 51978694035234LLU;
	static int64_t x572 = INT64_MIN;
	static volatile int32_t t135 = 39028672;

    t135 = (x569+((x570<=x571)!=x572));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x577 = 4201321330624LL;
	uint8_t x578 = 6U;
	int32_t x579 = 13593394;

    t136 = (x577+((x578<=x579)!=x580));

    if (t136 != 4201321330625LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x583 = -1LL;
	uint64_t x584 = UINT64_MAX;
	int64_t t137 = 10LL;

    t137 = (x581+((x582<=x583)!=x584));

    if (t137 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x586 = INT64_MAX;
	int16_t x587 = INT16_MAX;
	uint8_t x588 = 113U;
	volatile int32_t t138 = 656;

    t138 = (x585+((x586<=x587)!=x588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MIN;
	uint64_t x590 = UINT64_MAX;
	int64_t x592 = INT64_MAX;
	volatile int32_t t139 = 66962;

    t139 = (x589+((x590<=x591)!=x592));

    if (t139 != -32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x594 = -1;
	volatile uint32_t x595 = 50U;
	static volatile int32_t t140 = 93;

    t140 = (x593+((x594<=x595)!=x596));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x597 = INT8_MAX;
	int32_t x598 = INT32_MIN;
	int64_t x599 = -13680LL;
	int8_t x600 = INT8_MIN;
	volatile int32_t t141 = -30171;

    t141 = (x597+((x598<=x599)!=x600));

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x605 = -1LL;
	int64_t x606 = -1489712329LL;
	uint16_t x608 = UINT16_MAX;
	volatile int64_t t142 = -649185292771074LL;

    t142 = (x605+((x606<=x607)!=x608));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = -1;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t143 = -4156796;

    t143 = (x609+((x610<=x611)!=x612));

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;

    t144 = (x613+((x614<=x615)!=x616));

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x617 = -7;
	static uint32_t x618 = UINT32_MAX;
	static uint16_t x619 = 1913U;
	uint32_t x620 = UINT32_MAX;
	static volatile int32_t t145 = 476642013;

    t145 = (x617+((x618<=x619)!=x620));

    if (t145 != -6) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x621 = -13;
	volatile int8_t x624 = INT8_MIN;
	volatile int32_t t146 = 3;

    t146 = (x621+((x622<=x623)!=x624));

    if (t146 != -12) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x626 = 51;
	int32_t x627 = -3;
	int64_t t147 = 4037076680798LL;

    t147 = (x625+((x626<=x627)!=x628));

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x629 = INT8_MAX;
	volatile int64_t x631 = INT64_MIN;
	uint8_t x632 = UINT8_MAX;
	static int32_t t148 = 3303;

    t148 = (x629+((x630<=x631)!=x632));

    if (t148 != 128) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x633 = INT16_MIN;
	static int8_t x634 = -1;
	uint8_t x635 = 3U;
	volatile int32_t t149 = -1174649;

    t149 = (x633+((x634<=x635)!=x636));

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x637 = UINT8_MAX;
	static int8_t x638 = 13;
	uint64_t x639 = 40234067943151LLU;
	int64_t x640 = INT64_MIN;
	volatile int32_t t150 = -25002342;

    t150 = (x637+((x638<=x639)!=x640));

    if (t150 != 256) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x641 = -1;
	volatile int32_t x642 = 20908;
	static uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MIN;

    t151 = (x641+((x642<=x643)!=x644));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x645 = INT8_MIN;
	uint32_t x646 = 978256U;
	uint32_t x647 = UINT32_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t152 = 960;

    t152 = (x645+((x646<=x647)!=x648));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x649 = 117695598901LLU;
	static int8_t x650 = 6;
	static volatile int32_t x651 = INT32_MAX;
	int64_t x652 = INT64_MIN;
	volatile uint64_t t153 = 2115784586313LLU;

    t153 = (x649+((x650<=x651)!=x652));

    if (t153 != 117695598902LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x653 = UINT32_MAX;
	int16_t x656 = -1;
	volatile uint32_t t154 = 1824690195U;

    t154 = (x653+((x654<=x655)!=x656));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x661 = 148U;
	int8_t x662 = INT8_MIN;
	static int64_t x663 = -11493436085001566LL;
	int16_t x664 = -1;
	uint32_t t155 = 13169U;

    t155 = (x661+((x662<=x663)!=x664));

    if (t155 != 149U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x665 = -169591024728313878LL;
	int8_t x666 = INT8_MIN;
	int32_t x668 = -15;
	static int64_t t156 = 1769739LL;

    t156 = (x665+((x666<=x667)!=x668));

    if (t156 != -169591024728313877LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x673 = 7814123U;
	volatile uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	volatile int64_t x676 = -1LL;

    t157 = (x673+((x674<=x675)!=x676));

    if (t157 != 7814124U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x679 = 1696948;
	volatile int32_t t158 = 82718517;

    t158 = (x677+((x678<=x679)!=x680));

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x681 = 7;
	volatile int8_t x682 = 54;
	int32_t x683 = INT32_MIN;
	volatile int16_t x684 = INT16_MIN;

    t159 = (x681+((x682<=x683)!=x684));

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x685 = -1;
	int8_t x686 = 0;
	int16_t x687 = INT16_MAX;
	int16_t x688 = 5;
	int32_t t160 = -12049866;

    t160 = (x685+((x686<=x687)!=x688));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x689 = 124U;
	int16_t x690 = -118;
	int64_t x691 = -42LL;
	int16_t x692 = 0;
	int32_t t161 = -516577;

    t161 = (x689+((x690<=x691)!=x692));

    if (t161 != 125) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x693 = INT8_MAX;
	int64_t x694 = 8633098LL;
	int32_t x695 = -12877772;
	uint8_t x696 = 4U;
	static volatile int32_t t162 = 46;

    t162 = (x693+((x694<=x695)!=x696));

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x697 = 11247U;
	static int8_t x698 = 48;
	int32_t x699 = 11779;
	volatile int64_t x700 = INT64_MAX;
	static int32_t t163 = 11682;

    t163 = (x697+((x698<=x699)!=x700));

    if (t163 != 11248) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x701 = INT64_MIN;
	uint16_t x703 = 1U;
	uint8_t x704 = 12U;
	int64_t t164 = 31222994LL;

    t164 = (x701+((x702<=x703)!=x704));

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x705 = -1LL;
	int16_t x707 = 3;
	uint8_t x708 = 23U;

    t165 = (x705+((x706<=x707)!=x708));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x709 = 24556117835408LLU;
	int64_t x710 = INT64_MAX;
	static volatile int8_t x711 = -1;
	static uint64_t t166 = 2327915910226142912LLU;

    t166 = (x709+((x710<=x711)!=x712));

    if (t166 != 24556117835409LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x713 = -3;
	int16_t x716 = 2289;
	int32_t t167 = -49;

    t167 = (x713+((x714<=x715)!=x716));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x717 = 112U;
	uint64_t x720 = 9190LLU;
	static volatile int32_t t168 = 18724;

    t168 = (x717+((x718<=x719)!=x720));

    if (t168 != 113) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x721 = INT8_MIN;
	uint32_t x724 = 110073U;
	volatile int32_t t169 = -827236639;

    t169 = (x721+((x722<=x723)!=x724));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x729 = 26136536LLU;
	volatile uint64_t x730 = 206800235757LLU;
	volatile int8_t x731 = INT8_MIN;
	uint8_t x732 = UINT8_MAX;
	uint64_t t170 = 4966522207LLU;

    t170 = (x729+((x730<=x731)!=x732));

    if (t170 != 26136537LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x733 = 1585978513LLU;
	int64_t x734 = 8339172LL;
	int16_t x735 = -1;
	int16_t x736 = INT16_MIN;
	volatile uint64_t t171 = 557398493244781310LLU;

    t171 = (x733+((x734<=x735)!=x736));

    if (t171 != 1585978514LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x737 = 32137166U;
	int8_t x738 = 1;
	int32_t x739 = 38876;
	int16_t x740 = -1;
	uint32_t t172 = 3979134U;

    t172 = (x737+((x738<=x739)!=x740));

    if (t172 != 32137167U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x741 = UINT8_MAX;
	int8_t x742 = 3;
	int8_t x743 = INT8_MIN;
	static int16_t x744 = 0;
	int32_t t173 = -1553;

    t173 = (x741+((x742<=x743)!=x744));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x746 = -1;
	static volatile uint64_t t174 = 416LLU;

    t174 = (x745+((x746<=x747)!=x748));

    if (t174 != 970781029979787796LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x749 = INT8_MIN;
	int32_t x752 = -1;

    t175 = (x749+((x750<=x751)!=x752));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x753 = INT64_MIN;
	int32_t x754 = INT32_MAX;
	volatile int32_t x755 = 168796;
	uint16_t x756 = UINT16_MAX;
	int64_t t176 = -383848976942LL;

    t176 = (x753+((x754<=x755)!=x756));

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	static volatile uint64_t x758 = 63858103LLU;
	uint64_t x759 = 7052580065906572LLU;
	int16_t x760 = -7875;

    t177 = (x757+((x758<=x759)!=x760));

    if (t177 != 256) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x762 = 13U;
	int8_t x763 = INT8_MIN;
	int32_t x764 = INT32_MAX;
	uint32_t t178 = 35U;

    t178 = (x761+((x762<=x763)!=x764));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x765 = UINT16_MAX;
	int16_t x766 = INT16_MAX;
	static int8_t x767 = 1;
	int64_t x768 = -4495868LL;
	static int32_t t179 = -17986218;

    t179 = (x765+((x766<=x767)!=x768));

    if (t179 != 65536) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x769 = -57408675;
	int32_t x770 = -2477341;
	uint32_t x771 = UINT32_MAX;
	uint8_t x772 = 5U;
	int32_t t180 = 127908;

    t180 = (x769+((x770<=x771)!=x772));

    if (t180 != -57408674) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x773 = 58575LLU;
	volatile uint16_t x775 = UINT16_MAX;
	int64_t x776 = INT64_MIN;
	uint64_t t181 = 1LLU;

    t181 = (x773+((x774<=x775)!=x776));

    if (t181 != 58576LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x777 = UINT8_MAX;
	uint64_t x778 = 1551529062920455LLU;
	int64_t x780 = INT64_MIN;
	volatile int32_t t182 = -24627231;

    t182 = (x777+((x778<=x779)!=x780));

    if (t182 != 256) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x781 = 1957U;
	int64_t x782 = -1064502974LL;
	static int16_t x783 = INT16_MAX;
	volatile int32_t t183 = 1;

    t183 = (x781+((x782<=x783)!=x784));

    if (t183 != 1958) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x785 = -1089130809208LL;
	int16_t x786 = INT16_MAX;
	uint16_t x787 = 835U;
	volatile int8_t x788 = INT8_MAX;
	static int64_t t184 = -154287358760227LL;

    t184 = (x785+((x786<=x787)!=x788));

    if (t184 != -1089130809207LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x789 = -1;
	static int64_t x791 = INT64_MIN;
	uint16_t x792 = UINT16_MAX;
	volatile int32_t t185 = -3632;

    t185 = (x789+((x790<=x791)!=x792));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x793 = INT64_MIN;
	static uint8_t x794 = 2U;
	static volatile int64_t t186 = -13070785879642LL;

    t186 = (x793+((x794<=x795)!=x796));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x798 = UINT16_MAX;
	volatile int8_t x800 = -1;
	volatile uint32_t t187 = 10928391U;

    t187 = (x797+((x798<=x799)!=x800));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x802 = INT16_MAX;
	int32_t x803 = 6357;
	uint32_t x804 = 908650819U;

    t188 = (x801+((x802<=x803)!=x804));

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x805 = 115LLU;
	int32_t x807 = 3533190;
	volatile uint64_t t189 = 25053207938106793LLU;

    t189 = (x805+((x806<=x807)!=x808));

    if (t189 != 116LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x809 = UINT8_MAX;
	uint16_t x810 = 3U;
	static uint64_t x811 = 47221319972404379LLU;
	int64_t x812 = 425650036642632098LL;
	int32_t t190 = 817943081;

    t190 = (x809+((x810<=x811)!=x812));

    if (t190 != 256) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x813 = UINT16_MAX;
	static int32_t t191 = -25;

    t191 = (x813+((x814<=x815)!=x816));

    if (t191 != 65536) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x817 = INT8_MAX;
	int16_t x818 = INT16_MIN;
	uint16_t x819 = 12543U;
	uint64_t x820 = UINT64_MAX;
	volatile int32_t t192 = 8180;

    t192 = (x817+((x818<=x819)!=x820));

    if (t192 != 128) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x821 = -68333586599LL;
	static int16_t x822 = INT16_MIN;
	volatile int8_t x823 = INT8_MIN;
	volatile int32_t x824 = -1;
	static volatile int64_t t193 = -1LL;

    t193 = (x821+((x822<=x823)!=x824));

    if (t193 != -68333586598LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = INT8_MIN;
	volatile int32_t x826 = INT32_MAX;
	volatile int8_t x827 = INT8_MAX;
	int16_t x828 = INT16_MIN;
	int32_t t194 = -748;

    t194 = (x825+((x826<=x827)!=x828));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x830 = INT16_MIN;
	uint32_t x831 = UINT32_MAX;
	static volatile int32_t t195 = -899923;

    t195 = (x829+((x830<=x831)!=x832));

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x833 = 0;
	static volatile int8_t x834 = INT8_MAX;
	static uint32_t x835 = 81975329U;
	int8_t x836 = -1;
	int32_t t196 = 1;

    t196 = (x833+((x834<=x835)!=x836));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x837 = 2;
	static volatile int64_t x839 = INT64_MAX;
	int64_t x840 = INT64_MAX;
	static volatile int32_t t197 = -28;

    t197 = (x837+((x838<=x839)!=x840));

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x841 = INT16_MIN;
	int16_t x842 = INT16_MAX;
	static int64_t x843 = 7LL;
	uint32_t x844 = UINT32_MAX;

    t198 = (x841+((x842<=x843)!=x844));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x845 = INT16_MIN;
	int16_t x847 = 2576;
	volatile int64_t x848 = INT64_MIN;
	int32_t t199 = -10686551;

    t199 = (x845+((x846<=x847)!=x848));

    if (t199 != -32767) { NG(); } else { ; }
	
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

